# spoofdeck-ghidra

Large generated files from Ghidra analysis of Steam Client (`steamclient.so`) and Steam Controller 2026 firmware.

These files are too large for the main `spoofdeck` repo but are expensive to regenerate (2-6 hours for steamclient.so, ~30 min for firmware).

## Contents

### Firmware Exports

| File | Size | Description |
|------|------|-------------|
| `ibex_firmware.bin_decompiled.c` | 1.7 MB | Full decompiled C pseudocode for SC2 BLE controller firmware |
| `proteus_firmware.bin_decompiled.c` | 924 KB | Full decompiled C pseudocode for Puck dongle firmware |
| `*_full.json` | 2.3 MB / 1.1 MB | Complete metadata: strings, string xrefs, call graph, decompiled C |
| `*_callgraph.json` | 217 KB / 85 KB | Function call graph (who calls whom) |
| `*_strings.json` | 89 KB / 43 KB | All strings found in firmware |
| `*_string_xrefs.json` | 9.5 KB / 647 B | Cross-references to strings |
| `ghidra_projects/` | 10 MB | Ghidra project files (IBEX_Triton, PROTEUS_Puck) |

### steamclient.so Exports

| File | Description |
|------|-------------|
| `steamclient_exports/functions.csv` | All function names + addresses (141K functions) |
| `steamclient_exports/strings.csv` | All strings (56K strings) |
| `steamclient_exports/controller_decompiled_32bit.txt` | Decompiled controller code paths |
| `steamclient_exports/call_graph.csv` | Caller→callee edges |
| `steamclient_exports/key_xrefs.csv` | Cross-references to key addresses |
| `steamclient_exports/key_disassembly.txt` | Disassembly of key gate/dispatcher addresses |
| `steamclient_exports/unverified_results_32bit.txt` | Search results for missing functions |

## Regenerating Firmware Exports

Run from the main `spoofdeck` repo:

```bash
# Full metadata + decompile export
ghidra_full_export.py

# Or re-analyze from scratch
mkdir -p /tmp/ghidra_fw_projects_v2

~/ghidra/support/analyzeHeadless /tmp/ghidra_fw_projects_v2 IBEX_Triton \
  -import firmware/ibex_firmware.bin \
  -processor ARM:LE:32:Cortex -cspec default \
  -analysisTimeoutPerFile 300

~/ghidra/support/analyzeHeadless /tmp/ghidra_fw_projects_v2 PROTEUS_Puck \
  -import firmware/proteus_firmware.bin \
  -processor ARM:LE:32:Cortex -cspec default \
  -analysisTimeoutPerFile 300
```

## Regenerating steamclient.so Exports

### Prerequisites

- Ghidra 11.3.1+ installed at `~/ghidra`
- 32-bit steamclient.so at `~/.steam/debian-installation/ubuntu12_32/steamclient.so`
- Export scripts at `~/ghidra-projects/scripts/` (or copy from this repo)

### Step-by-step

```bash
# 1. Create project directory
mkdir -p ~/ghidra-projects/spoofdeck-32

# 2. Run full analysis (2-6 hours)
~/ghidra/support/analyzeHeadless \
  ~/ghidra-projects/spoofdeck-32 SpoofDeck32 \
  -import ~/.steam/debian-installation/ubuntu12_32/steamclient.so \
  -processor x86:LE:32:default \
  -cspec default \
  -analysisTimeoutPerFile 14400

# 3. Export analysis results
mkdir -p ~/ghidra-projects/exports/32bit
~/ghidra/support/analyzeHeadless \
  ~/ghidra-projects/spoofdeck-32 SpoefDeck32 \
  -readOnly -process steamclient.so -noanalysis \
  -postScript export_analysis.py ~/ghidra-projects/exports/32bit \
  -postScript find_unverified_addrs.py ~/ghidra-projects/exports/32bit \
  -scriptPath ~/ghidra-projects/scripts
```

### Key Ghidra Addresses (32-bit steamclient.so)

| Address | Function/Label |
|---------|---------------|
| `0x0178a140` | Gate SET (`mov byte [esi+0x17c], 1`) |
| `0x0123e5fb` | Gate CHECK (`cmp byte [esi+0x17c], 0`) |
| `0x00ec1330` | 0x8F dispatcher #1 |
| `0x00eed350` | 0x8F dispatcher #2 |
| `0x028939f4` | 0x8F handler |
| `0x00fcff81` | Function writing `[esi+0x1d8]` |
| `0x01218840` | `CGetControllerInfoWorkItem::RunFunc` |
