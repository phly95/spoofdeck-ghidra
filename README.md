# spoofdeck-ghidra

Large generated files from Ghidra firmware analysis of the Steam Controller 2026 (SC2) and Puck dongle firmware.

These files are too large for the main `spoofdeck` repo but are expensive to regenerate (~30 min each with full decompilation).

## Contents

| File | Size | Description |
|------|------|-------------|
| `ibex_firmware.bin_decompiled.c` | 1.7 MB | Full decompiled C pseudocode for SC2 BLE controller firmware |
| `proteus_firmware.bin_decompiled.c` | 924 KB | Full decompiled C pseudocode for Puck dongle firmware |
| `*_full.json` | 2.3 MB / 1.1 MB | Complete metadata: strings, string xrefs, call graph, decompiled C |
| `*_callgraph.json` | 217 KB / 85 KB | Function call graph (who calls whom) |
| `*_strings.json` | 89 KB / 43 KB | All strings found in firmware |
| `*_string_xrefs.json` | 9.5 KB / 647 B | Cross-references to strings |
| `ghidra_projects/` | 10 MB | Ghidra project files (IBEX_Triton, PROTEUS_Puck) |

## Regenerating

If you need to regenerate these files, run from the main `spoofdeck` repo:

```bash
# Export script
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
