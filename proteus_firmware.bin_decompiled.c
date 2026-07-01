// FUN_00000140 @ 00000140 (220 bytes, called_by=0, calls=0)

int FUN_00000140(uint param_1)

{
  char cVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  
  HintPreloadData(param_1);
  puVar7 = (uint *)(param_1 & 0xfffffff8);
  HintPreloadData(puVar7 + 8);
  if ((param_1 & 7) != 0) {
    uVar9 = puVar7[1];
    iVar6 = -(param_1 & 7);
    HintPreloadData(puVar7 + 0x10);
    uVar10 = -1 << ((param_1 & 3) << 3);
    uVar8 = *puVar7 | ~uVar10;
    if ((param_1 & 4) == 0) goto LAB_00000170;
    uVar9 = uVar9 | ~uVar10;
    uVar8 = 0xffffffff;
    goto LAB_00000170;
  }
  iVar5 = -8;
  do {
    uVar9 = puVar7[1];
    HintPreloadData(puVar7 + 0x10);
    iVar6 = iVar5 + 8;
    uVar8 = *puVar7;
LAB_00000170:
    cVar1 = -((char)uVar8 == '\0');
    cVar2 = -((char)(uVar8 >> 8) == '\0');
    cVar3 = -((char)(uVar8 >> 0x10) == '\0');
    cVar4 = -((char)(uVar8 >> 0x18) == '\0');
    uVar8 = CONCAT13(cVar4,CONCAT12(cVar3,CONCAT11(cVar2,cVar1)));
    bVar11 = (char)uVar9 != '\0';
    bVar12 = (char)(uVar9 >> 8) != '\0';
    bVar13 = (char)(uVar9 >> 0x10) != '\0';
    bVar14 = (char)(uVar9 >> 0x18) != '\0';
    uVar9 = CONCAT13(bVar14 * cVar4 - !bVar14,
                     CONCAT12(bVar13 * cVar3 - !bVar13,
                              CONCAT11(bVar12 * cVar2 - !bVar12,bVar11 * cVar1 - !bVar11)));
    iVar5 = iVar6;
    if (uVar9 != 0) break;
    uVar8 = puVar7[2];
    uVar9 = puVar7[3];
    iVar5 = iVar6 + 8;
    cVar1 = -((char)uVar8 == '\0');
    cVar2 = -((char)(uVar8 >> 8) == '\0');
    cVar3 = -((char)(uVar8 >> 0x10) == '\0');
    cVar4 = -((char)(uVar8 >> 0x18) == '\0');
    uVar8 = CONCAT13(cVar4,CONCAT12(cVar3,CONCAT11(cVar2,cVar1)));
    bVar11 = (char)uVar9 != '\0';
    bVar12 = (char)(uVar9 >> 8) != '\0';
    bVar13 = (char)(uVar9 >> 0x10) != '\0';
    bVar14 = (char)(uVar9 >> 0x18) != '\0';
    uVar9 = CONCAT13(bVar14 * cVar4 - !bVar14,
                     CONCAT12(bVar13 * cVar3 - !bVar13,
                              CONCAT11(bVar12 * cVar2 - !bVar12,bVar11 * cVar1 - !bVar11)));
    if (uVar9 != 0) break;
    uVar8 = puVar7[4];
    uVar9 = puVar7[5];
    iVar5 = iVar6 + 0x10;
    cVar1 = -((char)uVar8 == '\0');
    cVar2 = -((char)(uVar8 >> 8) == '\0');
    cVar3 = -((char)(uVar8 >> 0x10) == '\0');
    cVar4 = -((char)(uVar8 >> 0x18) == '\0');
    uVar8 = CONCAT13(cVar4,CONCAT12(cVar3,CONCAT11(cVar2,cVar1)));
    bVar11 = (char)uVar9 != '\0';
    bVar12 = (char)(uVar9 >> 8) != '\0';
    bVar13 = (char)(uVar9 >> 0x10) != '\0';
    bVar14 = (char)(uVar9 >> 0x18) != '\0';
    uVar9 = CONCAT13(bVar14 * cVar4 - !bVar14,
                     CONCAT12(bVar13 * cVar3 - !bVar13,
                              CONCAT11(bVar12 * cVar2 - !bVar12,bVar11 * cVar1 - !bVar11)));
    if (uVar9 != 0) break;
    uVar8 = puVar7[6];
    uVar9 = puVar7[7];
    puVar7 = puVar7 + 8;
    iVar5 = iVar6 + 0x18;
    cVar1 = -((char)uVar8 == '\0');
    cVar2 = -((char)(uVar8 >> 8) == '\0');
    cVar3 = -((char)(uVar8 >> 0x10) == '\0');
    cVar4 = -((char)(uVar8 >> 0x18) == '\0');
    uVar8 = CONCAT13(cVar4,CONCAT12(cVar3,CONCAT11(cVar2,cVar1)));
    bVar11 = (char)uVar9 != '\0';
    bVar12 = (char)(uVar9 >> 8) != '\0';
    bVar13 = (char)(uVar9 >> 0x10) != '\0';
    bVar14 = (char)(uVar9 >> 0x18) != '\0';
    uVar9 = CONCAT13(bVar14 * cVar4 - !bVar14,
                     CONCAT12(bVar13 * cVar3 - !bVar13,
                              CONCAT11(bVar12 * cVar2 - !bVar12,bVar11 * cVar1 - !bVar11)));
  } while (uVar9 == 0);
  if (uVar8 == 0) {
    iVar5 = iVar5 + 4;
    uVar8 = uVar9;
  }
  return iVar5 + ((uint)LZCOUNT(uVar8 << 0x18 | (uVar8 >> 8 & 0xff) << 0x10 |
                                (uVar8 >> 0x10 & 0xff) << 8 | uVar8 >> 0x18) >> 3);
}



// FUN_00000228 @ 00000228 (730 bytes, called_by=0, calls=0)

int FUN_00000228(uint *param_1,uint *param_2)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  char cVar8;
  short sVar9;
  int3 iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  
  uVar4 = (uint)(byte)*param_1;
  bVar14 = uVar4 == 1;
  if (uVar4 != 0) {
    bVar14 = uVar4 == (byte)*param_2;
  }
  if (!bVar14) {
    return uVar4 - (byte)*param_2;
  }
  if ((((uint)param_1 | (uint)param_2) & 7) == 0) goto LAB_00000290;
  if ((((uint)param_1 ^ (uint)param_2) & 7) == 0) {
    puVar1 = (uint *)((uint)param_1 & 0xfffffff8);
    param_2 = (uint *)((uint)param_2 & 0xfffffff8);
    puVar3 = puVar1 + 4;
    uVar5 = puVar1[1];
    puVar2 = param_2 + 4;
    uVar13 = param_2[1];
    uVar6 = -1 << (((uint)param_1 & 3) << 3);
    uVar4 = *puVar1 | ~uVar6;
    uVar12 = *param_2 | ~uVar6;
    if (((uint)param_1 & 4) != 0) {
      uVar5 = uVar5 | ~uVar6;
      uVar13 = uVar13 | ~uVar6;
      uVar4 = 0xffffffff;
      uVar12 = 0xffffffff;
    }
    do {
      bVar14 = (char)uVar4 != '\0';
      bVar15 = (char)(uVar4 >> 8) != '\0';
      bVar16 = (char)(uVar4 >> 0x10) != '\0';
      bVar17 = (char)(uVar4 >> 0x18) != '\0';
      uVar6 = uVar4 ^ uVar12;
      uVar6 = CONCAT13(bVar17 * (char)(uVar6 >> 0x18) - !bVar17,
                       CONCAT12(bVar16 * (char)(uVar6 >> 0x10) - !bVar16,
                                CONCAT11(bVar15 * (char)(uVar6 >> 8) - !bVar15,
                                         bVar14 * (char)uVar6 - !bVar14)));
      if (uVar6 != 0) {
LAB_00000302:
        uVar5 = LZCOUNT(uVar6 << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 | (uVar6 >> 0x10 & 0xff) << 8 |
                        uVar6 >> 0x18) & 0xfffffff8;
        return (uVar4 >> uVar5 & 0xff) - (uVar12 >> uVar5 & 0xff);
      }
      bVar14 = (char)uVar5 != '\0';
      bVar15 = (char)(uVar5 >> 8) != '\0';
      bVar16 = (char)(uVar5 >> 0x10) != '\0';
      bVar17 = (char)(uVar5 >> 0x18) != '\0';
      uVar4 = uVar5 ^ uVar13;
      uVar11 = CONCAT13(bVar17 * (char)(uVar4 >> 0x18) - !bVar17,
                        CONCAT12(bVar16 * (char)(uVar4 >> 0x10) - !bVar16,
                                 CONCAT11(bVar15 * (char)(uVar4 >> 8) - !bVar15,
                                          bVar14 * (char)uVar4 - !bVar14)));
      if (uVar11 != 0) {
LAB_000002da:
        uVar4 = LZCOUNT(uVar11 << 0x18 | (uVar11 >> 8 & 0xff) << 0x10 | (uVar11 >> 0x10 & 0xff) << 8
                        | uVar11 >> 0x18) & 0xfffffff8;
        return (uVar5 >> uVar4 & 0xff) - (uVar13 >> uVar4 & 0xff);
      }
      uVar4 = puVar3[-2];
      uVar5 = puVar3[-1];
      uVar12 = puVar2[-2];
      uVar13 = puVar2[-1];
      bVar14 = (char)uVar4 != '\0';
      bVar15 = (char)(uVar4 >> 8) != '\0';
      bVar16 = (char)(uVar4 >> 0x10) != '\0';
      bVar17 = (char)(uVar4 >> 0x18) != '\0';
      uVar6 = uVar4 ^ uVar12;
      uVar6 = CONCAT13(bVar17 * (char)(uVar6 >> 0x18) - !bVar17,
                       CONCAT12(bVar16 * (char)(uVar6 >> 0x10) - !bVar16,
                                CONCAT11(bVar15 * (char)(uVar6 >> 8) - !bVar15,
                                         bVar14 * (char)uVar6 - !bVar14)));
      bVar14 = (char)uVar5 != '\0';
      bVar15 = (char)(uVar5 >> 8) != '\0';
      bVar16 = (char)(uVar5 >> 0x10) != '\0';
      bVar17 = (char)(uVar5 >> 0x18) != '\0';
      uVar11 = uVar5 ^ uVar13;
      uVar11 = CONCAT13(bVar17 * (char)(uVar11 >> 0x18) - !bVar17,
                        CONCAT12(bVar16 * (char)(uVar11 >> 0x10) - !bVar16,
                                 CONCAT11(bVar15 * (char)(uVar11 >> 8) - !bVar15,
                                          bVar14 * (char)uVar11 - !bVar14))) | uVar6;
      param_1 = puVar3;
      param_2 = puVar2;
      if (uVar11 != 0) {
        if (uVar6 == 0) goto LAB_000002da;
        goto LAB_00000302;
      }
LAB_00000290:
      puVar3 = param_1 + 4;
      uVar4 = *param_1;
      uVar5 = param_1[1];
      puVar2 = param_2 + 4;
      uVar12 = *param_2;
      uVar13 = param_2[1];
    } while( true );
  }
  if ((((uint)param_1 ^ (uint)param_2) & 3) == 0) {
    if (((uint)param_1 & 3) != 0) {
      puVar1 = (uint *)((uint)param_1 & 0xfffffffc);
      puVar3 = (uint *)((uint)param_2 & 0xfffffffc);
      uVar12 = -1 << (((uint)param_1 & 3) << 3);
      uVar4 = *puVar1 | ~uVar12;
      uVar12 = *puVar3 | ~uVar12;
      goto LAB_0000033e;
    }
    do {
      uVar4 = *param_1;
      uVar12 = *param_2;
      puVar1 = param_1;
      puVar3 = param_2;
LAB_0000033e:
      param_2 = puVar3 + 2;
      param_1 = puVar1 + 2;
      bVar14 = (char)uVar4 != '\0';
      bVar15 = (char)(uVar4 >> 8) != '\0';
      bVar16 = (char)(uVar4 >> 0x10) != '\0';
      bVar17 = (char)(uVar4 >> 0x18) != '\0';
      uVar5 = uVar4 ^ uVar12;
      uVar5 = CONCAT13(bVar17 * (char)(uVar5 >> 0x18) - !bVar17,
                       CONCAT12(bVar16 * (char)(uVar5 >> 0x10) - !bVar16,
                                CONCAT11(bVar15 * (char)(uVar5 >> 8) - !bVar15,
                                         bVar14 * (char)uVar5 - !bVar14)));
      if (uVar5 != 0) break;
      uVar4 = puVar1[1];
      uVar12 = puVar3[1];
      bVar14 = (char)uVar4 != '\0';
      bVar15 = (char)(uVar4 >> 8) != '\0';
      bVar16 = (char)(uVar4 >> 0x10) != '\0';
      bVar17 = (char)(uVar4 >> 0x18) != '\0';
      uVar5 = uVar4 ^ uVar12;
      uVar5 = CONCAT13(bVar17 * (char)(uVar5 >> 0x18) - !bVar17,
                       CONCAT12(bVar16 * (char)(uVar5 >> 0x10) - !bVar16,
                                CONCAT11(bVar15 * (char)(uVar5 >> 8) - !bVar15,
                                         bVar14 * (char)uVar5 - !bVar14)));
    } while (uVar5 == 0);
    uVar5 = LZCOUNT(uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 | (uVar5 >> 0x10 & 0xff) << 8 |
                    uVar5 >> 0x18) & 0xfffffff8;
    return (uVar4 >> uVar5 & 0xff) - (uVar12 >> uVar5 & 0xff);
  }
  uVar4 = (uint)param_1 & 3;
  if (uVar4 == 0) goto LAB_000003e6;
  puVar1 = (uint *)((uint)param_1 & 0xfffffffc);
  uVar5 = (uint)param_1 & 2;
  uVar12 = (uint)param_1 & 1;
  param_1 = puVar1 + 1;
  uVar6 = *puVar1;
  if (uVar12 == 0) {
LAB_000003ce:
    uVar12 = (uint)*(byte *)((int)param_2 + (3 - uVar4));
    iVar7 = (uVar6 >> 0x18) - uVar12;
    if ((iVar7 != 0) || (uVar12 == 0)) {
      return iVar7;
    }
  }
  else if (uVar5 == 0) {
    uVar12 = (uint)*(byte *)((int)param_2 + (2 - uVar4));
    iVar7 = (uVar6 >> 0x10 & 0xff) - uVar12;
    if (iVar7 != 0) {
      return iVar7;
    }
    if (uVar12 == 0) {
      return 0;
    }
    goto LAB_000003ce;
  }
  param_2 = (uint *)((int)param_2 + (4 - uVar4));
LAB_000003e6:
  puVar1 = param_1 + 1;
  uVar4 = *param_1;
  bVar14 = ((uint)param_2 & 2) != 0;
  puVar3 = (uint *)((uint)param_2 & 0xfffffffc) + 1;
  uVar12 = *(uint *)((uint)param_2 & 0xfffffffc);
  if (bVar14 && ((uint)param_2 & 1) != 0) {
    while( true ) {
      bVar14 = (char)uVar4 != '\0';
      uVar5 = uVar4 & 0xff ^ uVar12 >> 0x18;
      cVar8 = bVar14 * (char)uVar5 - !bVar14;
      if (uVar5 != 0) break;
      if (CONCAT13(-((char)(uVar4 >> 0x18) == '\0'),
                   CONCAT12(-((char)(uVar4 >> 0x10) == '\0'),
                            CONCAT11(-((char)(uVar4 >> 8) == '\0'),cVar8))) != 0) {
        if (cVar8 != '\0') {
          return 0;
        }
        uVar12 = *puVar3;
LAB_000004be:
        uVar4 = uVar4 >> 8;
        uVar12 = uVar12 & 0xffffff;
        goto LAB_000004d2;
      }
      uVar12 = *puVar3;
      if ((uVar4 & 0xff ^ uVar4) != uVar12 * 0x100) goto LAB_000004be;
      uVar4 = *puVar1;
      puVar1 = puVar1 + 1;
      puVar3 = puVar3 + 1;
    }
    uVar12 = uVar12 >> 0x18;
  }
  else if (bVar14) {
    while( true ) {
      bVar14 = (char)uVar4 != '\0';
      bVar15 = (char)(uVar4 >> 8) != '\0';
      uVar5 = uVar4 & 0xffff ^ uVar12 >> 0x10;
      sVar9 = CONCAT11(bVar15 * (char)(uVar5 >> 8) - !bVar15,bVar14 * (char)uVar5 - !bVar14);
      if (uVar5 != 0) break;
      if (CONCAT13(-((char)(uVar4 >> 0x18) == '\0'),CONCAT12(-((char)(uVar4 >> 0x10) == '\0'),sVar9)
                  ) != 0) {
        if (sVar9 != 0) {
          return 0;
        }
        uVar12 = (uint)(ushort)*puVar3;
        uVar4 = uVar4 >> 0x10;
        goto LAB_000004d2;
      }
      uVar12 = *puVar3;
      if ((uVar4 & 0xffff ^ uVar4) != uVar12 * 0x10000) {
        uVar4 = uVar4 >> 0x10;
        uVar12 = uVar12 & 0xffff;
        goto LAB_000004d2;
      }
      uVar4 = *puVar1;
      puVar1 = puVar1 + 1;
      puVar3 = puVar3 + 1;
    }
    uVar12 = uVar12 >> 0x10;
  }
  else {
    while( true ) {
      bVar14 = (char)uVar4 != '\0';
      bVar15 = (char)(uVar4 >> 8) != '\0';
      bVar16 = (char)(uVar4 >> 0x10) != '\0';
      uVar5 = uVar4 & 0xffffff ^ uVar12 >> 8;
      iVar10 = CONCAT12(bVar16 * (char)(uVar5 >> 0x10) - !bVar16,
                        CONCAT11(bVar15 * (char)(uVar5 >> 8) - !bVar15,
                                 bVar14 * (char)uVar5 - !bVar14));
      if (uVar5 != 0) break;
      if (CONCAT13(-((char)(uVar4 >> 0x18) == '\0'),iVar10) != 0) {
        if (iVar10 != 0) {
          return 0;
        }
        return -(uint)(byte)*puVar3;
      }
      uVar12 = *puVar3;
      if ((uVar4 & 0xffffff ^ uVar4) != uVar12 * 0x1000000) {
        uVar4 = uVar4 >> 0x18;
        uVar12 = uVar12 & 0xff;
        goto LAB_000004d2;
      }
      uVar4 = *puVar1;
      puVar1 = puVar1 + 1;
      puVar3 = puVar3 + 1;
    }
    uVar12 = uVar12 >> 8;
  }
LAB_000004d2:
  uVar5 = uVar4 << 0x18 | (uVar4 >> 8 & 0xff) << 0x10 | (uVar4 >> 0x10 & 0xff) << 8 | uVar4 >> 0x18;
  uVar12 = uVar12 << 0x18 | (uVar12 >> 8 & 0xff) << 0x10 | (uVar12 >> 0x10) << 8;
  cVar8 = (char)(uVar4 >> 0x18);
  bVar14 = (char)(uVar4 >> 0x10) != '\0';
  bVar15 = (char)(uVar4 >> 8) != '\0';
  bVar16 = (char)uVar4 != '\0';
  uVar4 = uVar5 ^ uVar12;
  iVar7 = LZCOUNT(CONCAT13(bVar16 * (char)(uVar4 >> 0x18) - !bVar16,
                           CONCAT12(bVar15 * (char)(uVar4 >> 0x10) - !bVar15,
                                    CONCAT11(bVar14 * (char)(uVar4 >> 8) - !bVar14,
                                             (cVar8 != '\0') * cVar8 - (cVar8 == '\0')))));
  return ((uVar5 << iVar7) >> 0x18) - ((uVar12 << iVar7) >> 0x18);
}



// FUN_00000500 @ 00000500 (158 bytes, called_by=0, calls=0)

byte * FUN_00000500(uint *param_1,uint param_2,uint param_3)

{
  char cVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  byte *pbVar5;
  uint *puVar6;
  byte *pbVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  
  param_2 = param_2 & 0xff;
  if ((int)param_3 < 0x10) {
joined_r0x00000560:
    do {
      if (param_3 == 0) {
        return (byte *)0x0;
      }
      puVar6 = (uint *)((int)param_1 + 1);
      uVar8 = *param_1;
      param_3 = param_3 - 1;
      param_1 = puVar6;
    } while ((byte)uVar8 != param_2);
  }
  else {
    uVar8 = (uint)param_1 & 7;
    while( true ) {
      if (uVar8 == 0) {
        uVar8 = param_2 | param_2 << 8;
        uVar8 = uVar8 | uVar8 << 0x10;
        uVar9 = param_3 & 0xfffffff8;
        do {
          puVar6 = param_1 + 2;
          uVar9 = uVar9 - 8;
          uVar10 = *param_1 ^ uVar8;
          uVar11 = param_1[1] ^ uVar8;
          cVar1 = -((char)uVar10 == '\0');
          cVar2 = -((char)(uVar10 >> 8) == '\0');
          cVar3 = -((char)(uVar10 >> 0x10) == '\0');
          cVar4 = -((char)(uVar10 >> 0x18) == '\0');
          uVar10 = CONCAT13(cVar4,CONCAT12(cVar3,CONCAT11(cVar2,cVar1)));
          bVar12 = (char)uVar11 != '\0';
          bVar13 = (char)(uVar11 >> 8) != '\0';
          bVar14 = (char)(uVar11 >> 0x10) != '\0';
          bVar15 = (char)(uVar11 >> 0x18) != '\0';
          uVar11 = CONCAT13(bVar15 * cVar4 - !bVar15,
                            CONCAT12(bVar14 * cVar3 - !bVar14,
                                     CONCAT11(bVar13 * cVar2 - !bVar13,bVar12 * cVar1 - !bVar12)));
          if (uVar11 != 0) {
            if (uVar10 == 0) {
              pbVar7 = (byte *)((int)param_1 + 5);
              uVar10 = uVar11;
            }
            else {
              pbVar7 = (byte *)((int)param_1 + 1);
            }
            if ((uVar10 & 1) == 0) {
              bVar12 = (uVar10 & 0x100) == 0;
              pbVar5 = pbVar7 + 1;
              if (bVar12) {
                pbVar5 = pbVar7 + 2;
              }
              pbVar7 = pbVar5;
              if (bVar12 && (uVar10 & 0x18000) == 0) {
                pbVar7 = pbVar7 + 1;
              }
            }
            return pbVar7 + -1;
          }
          param_1 = puVar6;
        } while (uVar9 != 0);
        param_3 = param_3 & 7;
        goto joined_r0x00000560;
      }
      puVar6 = (uint *)((int)param_1 + 1);
      param_3 = param_3 - 1;
      if ((byte)*param_1 == param_2) break;
      uVar8 = (uint)puVar6 & 7;
      param_1 = puVar6;
      if (param_3 == 0) {
        return (byte *)0x0;
      }
    }
  }
  return (byte *)((int)puVar6 + -1);
}



// FUN_000005ac @ 000005ac (8 bytes, called_by=0, calls=0)

void FUN_000005ac(void)

{
                    /* WARNING: Could not recover jumptable at 0x000005b2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_000005b4 + 0x10))();
  return;
}



// FUN_000005c4 @ 000005c4 (8 bytes, called_by=0, calls=0)

void FUN_000005c4(void)

{
                    /* WARNING: Could not recover jumptable at 0x000005ca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_000005cc + 0x18))();
  return;
}



// FUN_000005d0 @ 000005d0 (8 bytes, called_by=0, calls=0)

void FUN_000005d0(void)

{
                    /* WARNING: Could not recover jumptable at 0x000005d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_000005d8 + 0x1c))();
  return;
}



// FUN_000005dc @ 000005dc (8 bytes, called_by=0, calls=0)

void FUN_000005dc(void)

{
                    /* WARNING: Could not recover jumptable at 0x000005e2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_000005e4 + 0x20))();
  return;
}



// FUN_000005e8 @ 000005e8 (8 bytes, called_by=0, calls=0)

void FUN_000005e8(void)

{
                    /* WARNING: Could not recover jumptable at 0x000005ee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_000005f0 + 0x2c))();
  return;
}



// FUN_000005f4 @ 000005f4 (14 bytes, called_by=0, calls=0)

void FUN_000005f4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00000600. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_00000604 + 0xc))();
  return;
}



// FUN_00000608 @ 00000608 (74 bytes, called_by=0, calls=0)

uint FUN_00000608(int param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  
  if (param_1 < *(char *)(DAT_00000654 + 0x1c)) {
    if (*(char *)(DAT_00000654 + 0x24) < param_1) {
      bVar1 = *(byte *)(*(int *)(DAT_00000654 + 0x28) + (param_1 - *(char *)(DAT_00000654 + 0x24)));
      uVar2 = (uint)bVar1;
      if (*(char *)(DAT_00000658 + uVar2) != param_1) {
        if (param_2 != 0) {
          bVar1 = bVar1 + 1;
        }
        uVar2 = (uint)bVar1;
        if (((*(int *)(DAT_00000654 + 0x28) == DAT_00000658 + 0xe) && (param_2 != 0)) &&
           ((param_1 - 1U & 0xff) < 2)) {
          uVar2 = uVar2 + 1 & 0xff;
        }
      }
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0xd;
  }
  return uVar2;
}



// FUN_000006fc @ 000006fc (26 bytes, called_by=0, calls=0)

void FUN_000006fc(void)

{
  DataSynchronizationBarrier(0xf);
  *(uint *)(DAT_00000718 + 0xc) = DAT_0000071c | *(uint *)(DAT_00000718 + 0xc) & 0x700;
  DataSynchronizationBarrier(0xf);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



// FUN_00000720 @ 00000720 (82 bytes, called_by=0, calls=0)

void FUN_00000720(uint param_1,undefined4 param_2,uint param_3,undefined4 param_4)

{
  uint uVar1;
  undefined1 *puVar2;
  uint uVar3;
  code *pcVar4;
  uint unaff_r6;
  undefined4 uStack_14;
  uint uStack_10;
  undefined4 uStack_c;
  
  disableIRQinterrupts();
  pcVar4 = *(code **)(DAT_00000774 + 4);
  puVar2 = DAT_00000774;
  uStack_14 = param_2;
  uStack_10 = param_3;
  uStack_c = param_4;
  if (pcVar4 == (code *)0x0) {
    do {
      param_1 = FUN_000006fc();
      do {
        param_3 = param_3 / unaff_r6;
LAB_00000732:
        uVar3 = (uint)puVar2 & 0xff;
        puVar2 = puVar2 + 1;
      } while (param_3 != 0);
      puVar2 = &stack0xfffffff8 + uVar3;
      *(undefined1 *)((int)&uStack_14 + uVar3) = 0;
      param_3 = 10;
      for (; uVar3 != 0; uVar3 = uVar3 - 1 & 0xff) {
        uVar1 = uVar3 - 1 & 0xff;
        puVar2 = &stack0xfffffff8 + uVar1;
        unaff_r6 = param_1 / 10;
        *(char *)((int)&uStack_14 + uVar1) = (char)param_1 + (char)unaff_r6 * -10 + '0';
        param_1 = unaff_r6;
      }
      (*pcVar4)(&uStack_14);
    } while( true );
  }
  puVar2 = (undefined1 *)0x0;
  unaff_r6 = 10;
  param_3 = param_1;
  goto LAB_00000732;
}



// FUN_00000778 @ 00000778 (20 bytes, called_by=0, calls=0)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000778(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_0000078c;
  *DAT_0000078c = _DAT_10000130;
  puVar1[1] = _DAT_10000134;
  return;
}



// FUN_00000790 @ 00000790 (14 bytes, called_by=0, calls=0)

bool FUN_00000790(void)

{
  return *DAT_000007a0 == 0xf;
}



// FUN_000007a4 @ 000007a4 (14 bytes, called_by=0, calls=0)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_000007a4(void)

{
  return *_LAB_000007b4 == 10;
}



// FUN_000007b8 @ 000007b8 (14 bytes, called_by=0, calls=0)

bool FUN_000007b8(void)

{
  return *DAT_000007c8 == 0xe;
}



// FUN_000007cc @ 000007cc (14 bytes, called_by=0, calls=0)

bool FUN_000007cc(void)

{
  return *DAT_000007dc == 0x10;
}



// FUN_000007e0 @ 000007e0 (20 bytes, called_by=0, calls=0)

bool FUN_000007e0(void)

{
  if (*DAT_000007f4 != 6) {
    return *DAT_000007f4 == -1;
  }
  return true;
}



// FUN_000007f8 @ 000007f8 (4 bytes, called_by=0, calls=0)

bool FUN_000007f8(void)

{
  return *DAT_00000808 == 0xd;
}



// FUN_0000080c @ 0000080c (14 bytes, called_by=0, calls=0)

bool FUN_0000080c(void)

{
  return *DAT_0000081c == 8;
}



// FUN_00000820 @ 00000820 (306 bytes, called_by=0, calls=0)

undefined4 * FUN_00000820(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  
  puVar2 = param_1;
  if ((((uint)param_2 | (uint)param_1) & 3) != 0) {
    if (param_3 < 8) {
      uVar5 = param_3 - 4;
      if (3 < param_3) {
        do {
          puVar1 = param_2;
          puVar3 = puVar2;
          bVar6 = uVar5 != 0;
          uVar5 = uVar5 - 1;
          *(undefined1 *)puVar3 = *(undefined1 *)puVar1;
          puVar2 = (undefined4 *)((int)puVar3 + 1);
          param_2 = (undefined4 *)((int)puVar1 + 1);
        } while (bVar6);
        *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)puVar1 + 1);
        *(undefined1 *)((int)puVar3 + 2) = *(undefined1 *)((int)puVar1 + 2);
        *(undefined1 *)((int)puVar3 + 3) = *(undefined1 *)((int)puVar1 + 3);
        return param_1;
      }
      goto LAB_000008ec;
    }
    if ((((uint)param_2 & 3) != 0) && (((uint)param_1 & 3) != 0)) {
      uVar5 = 4 - ((uint)param_1 & 3);
      param_3 = param_3 - uVar5;
      puVar1 = param_1;
      puVar3 = param_2;
      if (((uint)param_1 & 1) != 0) {
        puVar3 = (undefined4 *)((int)param_2 + 1);
        puVar1 = (undefined4 *)((int)param_1 + 1);
        *(undefined1 *)param_1 = *(undefined1 *)param_2;
      }
      puVar2 = puVar1;
      param_2 = puVar3;
      if ((uVar5 & 2) != 0) {
        param_2 = (undefined4 *)((int)puVar3 + 2);
        puVar2 = (undefined4 *)((int)puVar1 + 2);
        *(undefined2 *)puVar1 = *(undefined2 *)puVar3;
      }
    }
  }
  while (0x3f < param_3) {
    *puVar2 = *param_2;
    puVar2[1] = param_2[1];
    puVar2[2] = param_2[2];
    puVar2[3] = param_2[3];
    puVar2[4] = param_2[4];
    puVar2[5] = param_2[5];
    puVar2[6] = param_2[6];
    puVar2[7] = param_2[7];
    puVar2[8] = param_2[8];
    puVar2[9] = param_2[9];
    puVar2[10] = param_2[10];
    puVar2[0xb] = param_2[0xb];
    puVar2[0xc] = param_2[0xc];
    puVar2[0xd] = param_2[0xd];
    puVar2[0xe] = param_2[0xe];
    puVar2[0xf] = param_2[0xf];
    puVar2 = puVar2 + 0x10;
    param_2 = param_2 + 0x10;
    param_3 = param_3 - 0x40;
  }
  uVar4 = param_3 - 0x10;
  if (0xffffffcf < param_3 - 0x40) {
    do {
      *puVar2 = *param_2;
      puVar2[1] = param_2[1];
      puVar1 = param_2 + 3;
      puVar3 = puVar2 + 3;
      puVar2[2] = param_2[2];
      param_2 = param_2 + 4;
      puVar2 = puVar2 + 4;
      *puVar3 = *puVar1;
      bVar6 = 0xf < uVar4;
      uVar4 = uVar4 - 0x10;
    } while (bVar6);
  }
  uVar5 = uVar4 + 0xc;
  puVar3 = puVar2;
  puVar1 = param_2;
  if (0xfffffff3 < uVar4) {
    do {
      param_2 = puVar1 + 1;
      *puVar3 = *puVar1;
      bVar6 = 3 < uVar5;
      uVar5 = uVar5 - 4;
      puVar2 = puVar3 + 1;
      puVar3 = puVar3 + 1;
      puVar1 = param_2;
    } while (bVar6);
  }
LAB_000008ec:
  if (uVar5 + 4 != 0) {
    puVar1 = puVar2;
    puVar3 = param_2;
    if ((uVar5 & 1) != 0) {
      puVar3 = (undefined4 *)((int)param_2 + 1);
      puVar1 = (undefined4 *)((int)puVar2 + 1);
      *(undefined1 *)puVar2 = *(undefined1 *)param_2;
    }
    if ((uVar5 + 4 & 2) != 0) {
      *(undefined2 *)puVar1 = *(undefined2 *)puVar3;
    }
  }
  return param_1;
}



// FUN_00000c1c @ 00000c1c (228 bytes, called_by=0, calls=0)

ulonglong FUN_00000c1c(uint param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint in_r12;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  
  uVar5 = param_1 << 1;
  bVar9 = uVar5 == 0;
  uVar1 = (uint)((param_1 & 0x80000000) != 0) << 0x1f;
  uVar4 = (uint)((int)uVar5 >> 3) >> 1;
  uVar3 = uVar1 | uVar4;
  param_1 = param_1 << 0x1d;
  if (!bVar9) {
    param_4 = uVar5 & 0xff000000;
    bVar9 = param_4 == 0;
  }
  if (!bVar9) {
    bVar9 = param_4 == 0xff000000;
  }
  if (!bVar9) {
    return CONCAT44(uVar3,param_1) ^ 0x3800000000000000;
  }
  if ((uVar5 & 0xffffff) == 0) {
    return CONCAT44(uVar3,param_1);
  }
  if (param_4 == 0xff000000) {
    return CONCAT44(uVar3,param_1) | 0x8000000000000;
  }
  uVar2 = param_1;
  uVar5 = uVar4;
  if (uVar4 == 0) {
    uVar2 = 0;
    uVar5 = param_1;
  }
  iVar6 = LZCOUNT(uVar5);
  if (uVar4 == 0) {
    iVar6 = iVar6 + 0x20;
  }
  uVar7 = iVar6 - 0xb;
  bVar10 = SBORROW4(uVar7,0x20);
  uVar4 = iVar6 - 0x2b;
  bVar9 = (int)uVar4 < 0;
  bVar8 = uVar4 == 0;
  if ((int)uVar7 < 0x20) {
    bVar10 = SCARRY4(uVar4,0xc);
    iVar6 = iVar6 + -0x1f;
    bVar9 = iVar6 < 0;
    bVar8 = iVar6 == 0;
    uVar4 = uVar7;
    if (!bVar8 && bVar9 == bVar10) {
      uVar2 = uVar5 << (uVar7 & 0xff);
      uVar5 = uVar5 >> (0xcU - iVar6 & 0xff);
      goto LAB_00000ae4;
    }
  }
  if (bVar8 || bVar9 != bVar10) {
    in_r12 = 0x20 - uVar4;
  }
  uVar5 = uVar5 << (uVar4 & 0xff);
  if (bVar8 || bVar9 != bVar10) {
    uVar5 = uVar5 | uVar2 >> (in_r12 & 0xff);
    uVar2 = uVar2 << (uVar4 & 0xff);
  }
LAB_00000ae4:
  if ((int)uVar7 < 0x381) {
    return CONCAT44(uVar5 + (0x380 - uVar7) * 0x100000 | uVar1,uVar2);
  }
  uVar4 = ~(0x380 - uVar7);
  if (0x1e < (int)uVar4) {
    return CONCAT44(uVar3,uVar5 >> (uVar4 - 0x1f & 0xff)) & 0x80000000ffffffff;
  }
  iVar6 = uVar4 - 0x13;
  if (iVar6 == 0 || iVar6 < 0 != SCARRY4(uVar4 - 0x1f,0xc)) {
    uVar4 = uVar4 + 1;
    return CONCAT44(uVar1 | uVar5 >> (uVar4 & 0xff),
                    uVar2 >> (uVar4 & 0xff) | uVar5 << (0x20 - uVar4 & 0xff));
  }
  return CONCAT44(uVar3,uVar2 >> (0x20 - (0xcU - iVar6) & 0xff) | uVar5 << (0xcU - iVar6 & 0xff)) &
         0x80000000ffffffff;
}



// FUN_00001100 @ 00001100 (122 bytes, called_by=0, calls=0)

uint FUN_00001100(uint param_1,uint param_2,uint param_3,uint param_4)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  
  if (((int)(param_2 << 1) >> 0x15 == -1 || (int)(param_4 << 1) >> 0x15 == -1) &&
     ((((int)(param_2 << 1) >> 0x15 == -1 && (param_1 != 0 || (param_2 & 0xfffff) != 0)) ||
      (((int)(param_4 << 1) >> 0x15 == -1 && (param_3 != 0 || (param_4 & 0xfffff) != 0)))))) {
    return 1;
  }
  bVar2 = (param_2 & 0x7fffffff) == 0;
  bVar3 = param_1 == 0 && bVar2;
  if (param_1 == 0 && bVar2) {
    bVar3 = param_3 == 0 && (param_4 & 0x7fffffff) == 0;
  }
  if (!bVar3) {
    bVar3 = param_2 == param_4;
  }
  if (bVar3) {
    bVar3 = param_1 == param_3;
  }
  if (!bVar3) {
    uVar1 = param_2 ^ param_4;
    bVar2 = uVar1 == 0;
    if (-1 < (int)uVar1) {
      bVar2 = param_2 == param_4;
    }
    bVar3 = -1 < (int)uVar1 && param_4 <= param_2;
    if (bVar2) {
      bVar3 = param_3 <= param_1;
    }
    param_4 = (int)param_4 >> 0x1f;
    if (!bVar3) {
      param_4 = ~param_4;
    }
    return param_4 | 1;
  }
  return 0;
}



// FUN_0000118c @ 0000118c (16 bytes, called_by=0, calls=0)

undefined4 FUN_0000118c(undefined4 param_1)

{
  FUN_00001100();
  return param_1;
}



// FUN_0000119c @ 0000119c (18 bytes, called_by=0, calls=0)

bool FUN_0000119c(void)

{
  char in_ZR;
  
  FUN_0000118c();
  return in_ZR != '\0';
}



// FUN_00001288 @ 00001288 (352 bytes, called_by=0, calls=0)

uint FUN_00001288(uint param_1,uint param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  
  uVar5 = param_1 << 1;
  bVar8 = uVar5 == 0;
  if (!bVar8) {
    param_4 = param_2 << 1;
    bVar8 = param_4 == 0;
  }
  if (!bVar8) {
    bVar8 = uVar5 == param_4;
  }
  iVar1 = (int)uVar5 >> 0x18;
  if (!bVar8) {
    bVar8 = iVar1 == -1;
  }
  if (!bVar8) {
    bVar8 = (int)param_4 >> 0x18 == -1;
  }
  if (bVar8) {
    iVar2 = (int)(param_2 << 1) >> 0x18;
    if (iVar1 == -1 || iVar2 == -1) {
      uVar5 = param_2;
      if (iVar1 == -1) {
        uVar5 = param_1;
      }
      if (iVar1 != -1 || iVar2 != -1) {
        param_2 = uVar5;
      }
      if (((uVar5 & 0x7fffff) != 0 || (param_2 & 0x7fffff) != 0) || uVar5 != param_2) {
        uVar5 = uVar5 | 0x400000;
      }
      return uVar5;
    }
    if (((param_1 ^ param_2) & 0x7fffffff) != 0) {
      if (uVar5 == 0) {
        param_1 = param_2;
      }
      return param_1;
    }
    if (param_1 != param_2) {
      return 0;
    }
    if ((uVar5 & 0xff000000) == 0) {
      uVar5 = param_1 << 1;
      if ((param_1 & 0x80000000) != 0) {
        uVar5 = uVar5 | 0x80000000;
      }
      return uVar5;
    }
    if (uVar5 < 0xfe000000) {
      return param_1 + 0x800000;
    }
    param_1 = param_1 & 0x80000000;
LAB_000013be:
    return param_1 | 0x7f800000;
  }
  uVar5 = uVar5 >> 0x18;
  param_4 = param_4 >> 0x18;
  uVar7 = param_4 - uVar5;
  uVar3 = param_2;
  uVar6 = uVar5;
  if (uVar7 != 0 && uVar5 <= param_4) {
    uVar6 = uVar5 + uVar7;
    uVar3 = param_1;
    param_1 = param_2;
  }
  if (param_4 < uVar5) {
    uVar7 = -uVar7;
  }
  if (0x19 < uVar7) {
    return param_1;
  }
  uVar5 = param_1 & 0xffffff | 0x800000;
  if ((param_1 & 0x80000000) != 0) {
    uVar5 = -uVar5;
  }
  uVar4 = uVar3 & 0xffffff | 0x800000;
  if ((uVar3 & 0x80000000) != 0) {
    uVar4 = -uVar4;
  }
  if (uVar6 == uVar7) {
    uVar4 = uVar4 ^ 0x800000;
    if (uVar6 == 0) {
      uVar5 = uVar5 ^ 0x800000;
      uVar6 = 1;
    }
    else {
      uVar7 = uVar7 - 1;
    }
  }
  uVar5 = uVar5 + ((int)uVar4 >> (uVar7 & 0xff));
  uVar4 = uVar4 << (0x20 - uVar7 & 0xff);
  param_1 = uVar5 & 0x80000000;
  if ((int)uVar5 < 0) {
    bVar8 = uVar4 != 0;
    uVar4 = -uVar4;
    uVar5 = -uVar5 - (uint)bVar8;
  }
  if (uVar5 < 0x800000) {
    uVar7 = uVar4 & 0x80000000;
    uVar4 = uVar4 << 1;
    uVar5 = uVar5 * 2 + (uint)(uVar7 != 0);
    uVar7 = uVar6 - 2;
    if (uVar6 - 1 == 0 || uVar5 < 0x800000) {
      uVar6 = LZCOUNT(uVar5) - 8;
      uVar5 = uVar5 << (uVar6 & 0xff);
      if ((int)uVar7 < (int)uVar6) {
        uVar5 = uVar5 >> (-(uVar7 - uVar6) & 0xff);
      }
      else {
        uVar5 = uVar5 + (uVar7 - uVar6) * 0x800000;
      }
      return uVar5 | param_1;
    }
  }
  else {
    uVar7 = uVar6 - 1;
    if (0xffffff < uVar5) {
      uVar7 = uVar5 & 1;
      uVar5 = uVar5 >> 1;
      uVar4 = (uint)(uVar7 != 0) << 0x1f | uVar4 >> 1;
      uVar7 = uVar6;
      if (0xfd < uVar6) goto LAB_000013be;
    }
  }
  uVar5 = uVar5 + uVar7 * 0x800000 + (uint)(0x7fffffff < uVar4);
  if (uVar4 == 0x80000000) {
    uVar5 = uVar5 & 0xfffffffe;
  }
  return uVar5 | param_1;
}



// FUN_000013e8 @ 000013e8 (108 bytes, called_by=0, calls=0)

uint FUN_000013e8(uint param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = LZCOUNT(param_1);
  uVar2 = uVar1 - 8;
  iVar3 = uVar2 * -0x800000 + 0x4a800000;
  if (7 < uVar1) {
    uVar4 = 0 << (uVar2 & 0xff);
    uVar1 = iVar3 + (param_1 << (uVar2 & 0xff)) +
            (0U >> (0x20 - uVar2 & 0xff)) + (uint)(0x7fffffff < uVar4);
    if (uVar4 == 0x80000000) {
      uVar1 = uVar1 & 0xfffffffe;
    }
    return uVar1;
  }
  uVar2 = param_1 << uVar1 + 0x18;
  uVar1 = iVar3 + ((param_1 >> (0x20 - (uVar1 + 0x18) & 0xff)) - ((int)uVar2 >> 0x1f));
  if ((uVar2 & 0x7fffffff) == 0) {
    uVar1 = uVar1 & ~(uVar2 >> 0x1f);
  }
  return uVar1;
}



// FUN_00001498 @ 00001498 (360 bytes, called_by=0, calls=0)

uint FUN_00001498(uint param_1,uint param_2,undefined4 param_3,uint param_4)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  bool bVar9;
  bool bVar10;
  
  uVar3 = param_1 >> 0x17 & 0xff;
  bVar9 = uVar3 == 0;
  if (!bVar9) {
    param_4 = param_2 >> 0x17 & 0xff;
    bVar9 = param_4 == 0;
  }
  if (!bVar9) {
    bVar9 = uVar3 == 0xff;
  }
  if (!bVar9) {
    bVar9 = param_4 == 0xff;
  }
  if (bVar9) {
    param_4 = param_2 >> 0x17 & 0xff;
    if (uVar3 == 0xff || param_4 == 0xff) {
      bVar9 = param_1 == 0 || param_1 == 0x80000000;
      uVar2 = param_2;
      if (param_1 != 0 && param_1 != 0x80000000) {
        bVar9 = param_2 == 0;
        uVar2 = param_1;
      }
      if (!bVar9) {
        bVar9 = param_2 == 0x80000000;
      }
      uVar8 = uVar2;
      if (((bVar9) || ((uVar3 == 0xff && ((uVar2 & 0x7fffff) != 0)))) ||
         ((param_4 == 0xff && (uVar8 = param_2, (param_2 & 0x7fffff) != 0)))) {
        return uVar8 | 0x7fc00000;
      }
      uVar2 = uVar2 ^ param_2;
      goto LAB_000015e8;
    }
    if ((param_1 & 0x7fffffff) == 0 || (param_2 & 0x7fffffff) == 0) {
      return (param_1 ^ param_2) & 0x80000000;
    }
    bVar9 = uVar3 == 0;
    uVar2 = param_1 & 0x80000000;
    while( true ) {
      if (bVar9) {
        param_1 = param_1 << 1;
        bVar9 = (param_1 & 0x800000) == 0;
      }
      if (!bVar9) break;
      uVar3 = uVar3 - 1;
    }
    param_1 = param_1 | uVar2;
    bVar9 = param_4 == 0;
    uVar2 = param_2 & 0x80000000;
    while( true ) {
      if (bVar9) {
        param_2 = param_2 << 1;
        bVar9 = (param_2 & 0x800000) == 0;
      }
      if (!bVar9) break;
      param_4 = param_4 - 1;
    }
    param_2 = param_2 | uVar2;
  }
  iVar4 = uVar3 + param_4;
  uVar8 = param_1 ^ param_2;
  uVar3 = param_1 << 9;
  bVar9 = uVar3 == 0;
  if (!bVar9) {
    param_2 = param_2 << 9;
    bVar9 = param_2 == 0;
  }
  if (bVar9) {
    if (uVar3 == 0) {
      param_2 = param_2 << 9;
    }
    uVar2 = uVar8 & 0x80000000 | param_1 & 0x7fffff | param_2 >> 9;
    bVar10 = SBORROW4(iVar4,0x7f);
    iVar5 = iVar4 + -0x7f;
    bVar9 = iVar5 == 0;
    iVar7 = iVar5;
    if (!bVar9 && 0x7e < iVar4) {
      bVar10 = SBORROW4(0xff,iVar5);
      iVar7 = 0xff - iVar5;
      bVar9 = iVar5 == 0xff;
    }
    if (!bVar9 && iVar7 < 0 == bVar10) {
      return uVar2 | iVar5 * 0x800000;
    }
    uVar2 = uVar2 | 0x800000;
    uVar6 = 0;
    bVar10 = SBORROW4(iVar5,1);
    uVar8 = iVar4 - 0x80;
    bVar9 = uVar8 == 0;
    uVar3 = uVar8;
  }
  else {
    lVar1 = (ulonglong)(uVar3 >> 5 | 0x8000000) * (ulonglong)(param_2 >> 5 | 0x8000000);
    uVar6 = (uint)lVar1;
    uVar2 = (uint)((ulonglong)lVar1 >> 0x20);
    bVar9 = uVar2 < 0x800000;
    if (bVar9) {
      uVar2 = uVar2 << 1;
    }
    if (bVar9) {
      uVar2 = uVar2 | uVar6 >> 0x1f;
      uVar6 = uVar6 << 1;
    }
    uVar2 = uVar8 & 0x80000000 | uVar2;
    uVar8 = (iVar4 + -0x7f) - (uint)bVar9;
    bVar10 = SBORROW4(uVar8,0xfd);
    bVar9 = uVar8 == 0xfd;
    uVar3 = uVar8 - 0xfd;
    if (uVar8 < 0xfe) {
      uVar2 = uVar2 + uVar8 * 0x800000 + (uint)(0x7fffffff < uVar6);
      if (uVar6 == 0x80000000) {
        uVar2 = uVar2 & 0xfffffffe;
      }
      return uVar2;
    }
  }
  if (bVar9 || (int)uVar3 < 0 != bVar10) {
    if (uVar8 != 0xffffffe7 && (int)(uVar8 + 0x19) < 0 == SCARRY4(uVar8,0x19)) {
      uVar3 = (uVar2 << 1) >> (-uVar8 & 0xff);
      uVar8 = uVar2 << (uVar8 + 0x20 & 0xff);
      uVar3 = ((uint)((uVar2 & 0x80000000) != 0) << 0x1f | uVar3 >> 1) + (uint)((byte)uVar3 & 1);
      if (uVar6 == 0 && (uVar8 & 0x7fffffff) == 0) {
        uVar3 = uVar3 & ~(uVar8 >> 0x1f);
      }
      return uVar3;
    }
    return uVar2 & 0x80000000;
  }
LAB_000015e8:
  return uVar2 & 0x80000000 | 0x7f800000;
}



// FUN_00001600 @ 00001600 (298 bytes, called_by=0, calls=0)

uint FUN_00001600(uint param_1,uint param_2,undefined4 param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  
  uVar2 = param_1 >> 0x17 & 0xff;
  bVar5 = uVar2 == 0;
  if (!bVar5) {
    param_4 = param_2 >> 0x17 & 0xff;
    bVar5 = param_4 == 0;
  }
  if (!bVar5) {
    bVar5 = uVar2 == 0xff;
  }
  if (!bVar5) {
    bVar5 = param_4 == 0xff;
  }
  if (bVar5) {
    param_4 = param_2 >> 0x17 & 0xff;
    uVar3 = param_1;
    if (uVar2 == 0xff) {
      if (((param_1 & 0x7fffff) != 0) || (uVar3 = param_2, param_4 == 0xff)) {
LAB_000015f6:
        return uVar3 | 0x7fc00000;
      }
    }
    else {
      if (param_4 == 0xff) {
        uVar3 = param_2;
        if ((param_2 & 0x7fffff) == 0) {
LAB_000015ac:
          return (param_1 ^ param_2) & 0x80000000;
        }
        goto LAB_000015f6;
      }
      if ((param_1 & 0x7fffffff) != 0 && (param_2 & 0x7fffffff) != 0) {
        bVar5 = uVar2 == 0;
        uVar3 = param_1 & 0x80000000;
        while( true ) {
          if (bVar5) {
            param_1 = param_1 << 1;
            bVar5 = (param_1 & 0x800000) == 0;
          }
          if (!bVar5) break;
          uVar2 = uVar2 - 1;
        }
        param_1 = param_1 | uVar3;
        bVar5 = param_4 == 0;
        uVar3 = param_2 & 0x80000000;
        while( true ) {
          if (bVar5) {
            param_2 = param_2 << 1;
            bVar5 = (param_2 & 0x800000) == 0;
          }
          if (!bVar5) break;
          param_4 = param_4 - 1;
        }
        param_2 = param_2 | uVar3;
        goto LAB_00001618;
      }
      if ((param_1 & 0x7fffffff) == 0) {
        if ((param_2 & 0x7fffffff) != 0) goto LAB_000015ac;
        goto LAB_000015f6;
      }
    }
    param_1 = param_1 ^ param_2;
  }
  else {
LAB_00001618:
    if (param_2 << 9 == 0) {
      return (param_1 ^ param_2) & 0x80000000 | param_1 & 0x7fffff |
             ((uVar2 - param_4) + 0x7f) * 0x800000;
    }
    uVar1 = (param_2 << 9) >> 4 | 0x10000000;
    uVar3 = (param_1 << 9) >> 4 | 0x10000000;
    param_1 = (param_1 ^ param_2) & 0x80000000;
    bVar5 = uVar1 <= uVar3;
    if (!bVar5) {
      uVar3 = uVar3 << 1;
    }
    uVar2 = (uVar2 - param_4) + 0x7d + (uint)bVar5;
    uVar4 = 0x800000;
    do {
      if (uVar1 <= uVar3) {
        uVar3 = uVar3 - uVar1;
        param_1 = param_1 | uVar4;
      }
      bVar5 = uVar1 >> 1 <= uVar3;
      if (bVar5) {
        uVar3 = uVar3 - (uVar1 >> 1);
      }
      if (bVar5) {
        param_1 = param_1 | uVar4 >> 1;
      }
      bVar5 = uVar1 >> 2 <= uVar3;
      if (bVar5) {
        uVar3 = uVar3 - (uVar1 >> 2);
      }
      if (bVar5) {
        param_1 = param_1 | uVar4 >> 2;
      }
      bVar5 = uVar1 >> 3 <= uVar3;
      if (bVar5) {
        uVar3 = uVar3 - (uVar1 >> 3);
      }
      if (bVar5) {
        param_1 = param_1 | uVar4 >> 3;
      }
      uVar3 = uVar3 * 0x10;
      bVar5 = uVar3 == 0;
      if (!bVar5) {
        uVar4 = uVar4 >> 4;
        bVar5 = uVar4 == 0;
      }
    } while (!bVar5);
    if (uVar2 < 0xfe) {
      param_1 = param_1 + uVar2 * 0x800000 + (uint)(uVar1 <= uVar3);
      if (uVar3 - uVar1 == 0) {
        param_1 = param_1 & 0xfffffffe;
      }
      return param_1;
    }
    if ((int)uVar2 < 0xfe) {
      if (uVar2 != 0xffffffe7 && (int)(uVar2 + 0x19) < 0 == SCARRY4(uVar2,0x19)) {
        uVar1 = (param_1 << 1) >> (-uVar2 & 0xff);
        uVar4 = param_1 << (uVar2 + 0x20 & 0xff);
        uVar2 = ((uint)((param_1 & 0x80000000) != 0) << 0x1f | uVar1 >> 1) + (uint)((byte)uVar1 & 1)
        ;
        if (uVar3 == 0 && (uVar4 & 0x7fffffff) == 0) {
          uVar2 = uVar2 & ~(uVar4 >> 0x1f);
        }
        return uVar2;
      }
      return param_1 & 0x80000000;
    }
  }
  return param_1 & 0x80000000 | 0x7f800000;
}



// FUN_00001748 @ 00001748 (72 bytes, called_by=0, calls=0)

uint FUN_00001748(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = param_1 * 2;
  uVar4 = param_2 * 2;
  if (((int)uVar3 >> 0x18 == -1 || (int)uVar4 >> 0x18 == -1) &&
     ((((int)uVar3 >> 0x18 == -1 && ((param_1 & 0x7fffff) != 0)) ||
      (((int)uVar4 >> 0x18 == -1 && ((param_2 & 0x7fffff) != 0)))))) {
    return 1;
  }
  uVar1 = uVar3 + param_2 * -2;
  uVar2 = uVar1;
  if (uVar3 >= uVar4 && uVar1 != 0) {
    uVar2 = (int)param_2 >> 0x1f;
  }
  if (uVar3 < uVar4) {
    uVar2 = ~((int)param_2 >> 0x1f);
  }
  if (uVar1 != 0) {
    uVar2 = uVar2 | 1;
  }
  return uVar2;
}



// FUN_000017a8 @ 000017a8 (8 bytes, called_by=0, calls=0)

void FUN_000017a8(undefined4 param_1,undefined4 param_2)

{
  FUN_000017b0(param_2,param_1);
  return;
}



// FUN_000017b0 @ 000017b0 (16 bytes, called_by=0, calls=0)

undefined8 FUN_000017b0(undefined4 param_1,undefined4 param_2)

{
  FUN_00001748();
  return CONCAT44(param_2,param_1);
}



// FUN_00001810 @ 00001810 (18 bytes, called_by=0, calls=0)

bool FUN_00001810(void)

{
  char in_CY;
  
  FUN_000017a8();
  return in_CY == '\0';
}



// FUN_00001824 @ 00001824 (62 bytes, called_by=0, calls=0)

uint FUN_00001824(uint param_1)

{
  uint uVar1;
  
  if (((param_1 & 0x80000000) != 0) || (param_1 << 1 < 0x7f000000)) {
    return 0;
  }
  uVar1 = 0x9e - ((param_1 << 1) >> 0x18);
  if (-1 < (int)uVar1) {
    return (param_1 << 8 | 0x80000000) >> (uVar1 & 0xff);
  }
  if ((uVar1 == 0xffffff9f) && ((param_1 & 0x7fffff) != 0)) {
    return 0;
  }
  return 0xffffffff;
}



// FUN_00001864 @ 00001864 (160 bytes, called_by=0, calls=0)

undefined8 FUN_00001864(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 local_8 [8];
  
  if ((param_4 == 0) && (param_3 == 0)) {
    if (param_2 < 0) {
      param_1 = 0;
      param_2 = -0x80000000;
    }
    else if (param_2 != 0 || param_1 != 0) {
      param_2 = 0x7fffffff;
      param_1 = -1;
    }
    return CONCAT44(param_2,param_1);
  }
  if (param_2 < 0) {
    iVar1 = -param_2 - (uint)(param_1 != 0);
    if (param_4 < 0) {
      uVar2 = FUN_000019fc(-param_1,iVar1,-param_3,-param_4 - (uint)(param_3 != 0),local_8);
      return uVar2;
    }
    uVar2 = FUN_000019fc(-param_1,iVar1,param_3,param_4,local_8);
    return CONCAT44(-(int)((ulonglong)uVar2 >> 0x20) - (uint)((int)uVar2 != 0),-(int)uVar2);
  }
  if (param_4 < 0) {
    uVar2 = FUN_000019fc(param_1,param_2,-param_3,-param_4 - (uint)(param_3 != 0),local_8);
    return CONCAT44(-(int)((ulonglong)uVar2 >> 0x20) - (uint)((int)uVar2 != 0),-(int)uVar2);
  }
  uVar2 = FUN_000019fc();
  return uVar2;
}



// FUN_00001904 @ 00001904 (50 bytes, called_by=0, calls=0)

undefined8 FUN_00001904(int param_1,int param_2,int param_3,int param_4)

{
  undefined8 uVar1;
  
  if ((param_4 == 0) && (param_3 == 0)) {
    if (param_2 != 0 || param_1 != 0) {
      param_2 = -1;
      param_1 = -1;
    }
    return CONCAT44(param_2,param_1);
  }
  uVar1 = FUN_000019fc();
  return uVar1;
}



// FUN_00001938 @ 00001938 (142 bytes, called_by=0, calls=0)

void FUN_00001938(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  FUN_00000778();
  iVar1 = iRam000006f0;
  if (*(char *)(iRam000006f0 + 0x2c) == '\0') {
    *(undefined1 *)(iRam000006f0 + 0x2c) = 1;
    iVar2 = FUN_000007cc();
    if (((iVar2 == 0) && (iVar2 = FUN_000007f8(), iVar2 == 0)) &&
       (iVar2 = FUN_0000080c(), iVar2 == 0)) {
      iVar2 = FUN_00000790();
      if (((iVar2 == 0) && (iVar2 = FUN_000007a4(), iVar2 == 0)) &&
         ((iVar2 = FUN_000007b8(), iVar2 == 0 && (iVar2 = FUN_000007e0(), iVar2 == 0)))) {
        FUN_00000720(0x74,0x1be);
        DataSynchronizationBarrier(0xf);
        *(uint *)(DAT_00000718 + 0xc) = DAT_0000071c | *(uint *)(DAT_00000718 + 0xc) & 0x700;
        DataSynchronizationBarrier(0xf);
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
      *(undefined4 *)(iVar1 + 0x28) = uRam000006f8;
      *(undefined4 *)(iVar1 + 0x20) = 0xd8;
      *(undefined1 *)(iVar1 + 0x24) = 0xd8;
      uVar3 = 4;
    }
    else {
      *(undefined4 *)(iVar1 + 0x28) = uRam000006f4;
      *(undefined4 *)(iVar1 + 0x20) = 0xd8;
      *(undefined1 *)(iVar1 + 0x24) = 0xd8;
      uVar3 = 8;
    }
    *(undefined4 *)(iVar1 + 0x18) = uVar3;
    *(char *)(iVar1 + 0x1c) = (char)uVar3;
  }
  return;
}



// FUN_000019d6 @ 000019d6 (38 bytes, called_by=0, calls=0)

uint FUN_000019d6(uint param_1)

{
  uint uVar1;
  
  param_1 = param_1 - (param_1 >> 1 & 0x55555555);
  uVar1 = (param_1 >> 2 & 0x33333333) + (param_1 & 0x33333333);
  return (uVar1 + (uVar1 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18;
}



// FUN_000019fc @ 000019fc (672 bytes, called_by=0, calls=0)

/* WARNING: Removing unreachable block (ram,0x00001c66) */

undefined8 FUN_000019fc(uint param_1,uint param_2,uint param_3,uint param_4,uint *param_5)

{
  ulonglong uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  bool bVar12;
  
  if (param_4 == 0) {
    iVar3 = LZCOUNT(param_3);
    if (param_2 < param_3) {
      if (iVar3 != 0) {
        param_3 = param_3 << iVar3;
        param_2 = param_1 >> (0x20U - iVar3 & 0xff) | param_2 << iVar3;
        param_1 = param_1 << iVar3;
      }
      uVar10 = param_3 >> 0x10;
      uVar5 = param_2 / uVar10;
      uVar6 = uVar5 * (param_3 & 0xffff);
      uVar4 = param_1 >> 0x10 | (param_2 - uVar10 * uVar5) * 0x10000;
      uVar2 = uVar5;
      if (uVar4 <= uVar6 && uVar6 - uVar4 != 0) {
        bVar12 = CARRY4(param_3,uVar4);
        uVar4 = param_3 + uVar4;
        uVar2 = uVar5 - 1;
        if ((!bVar12) && (uVar4 <= uVar6 && uVar6 - uVar4 != 0)) {
          uVar4 = uVar4 + param_3;
          uVar2 = uVar5 - 2;
        }
      }
      uVar7 = (uVar4 - uVar6) / uVar10;
      uVar5 = uVar7 * (param_3 & 0xffff);
      uVar6 = param_1 & 0xffff | ((uVar4 - uVar6) - uVar10 * uVar7) * 0x10000;
      uVar4 = uVar7;
      if (uVar6 <= uVar5 && uVar5 - uVar6 != 0) {
        bVar12 = CARRY4(param_3,uVar6);
        uVar6 = param_3 + uVar6;
        uVar4 = uVar7 - 1;
        if ((!bVar12) && (uVar6 <= uVar5 && uVar5 - uVar6 != 0)) {
          uVar6 = uVar6 + param_3;
          uVar4 = uVar7 - 2;
        }
      }
      uVar6 = uVar6 - uVar5;
      uVar4 = uVar4 | uVar2 << 0x10;
      uVar2 = 0;
    }
    else {
      if (iVar3 == 0) {
        param_2 = param_2 - param_3;
        uVar2 = 1;
      }
      else {
        uVar2 = param_2 >> (0x20U - iVar3 & 0xff);
        param_3 = param_3 << iVar3;
        uVar5 = param_1 >> (0x20U - iVar3 & 0xff) | param_2 << iVar3;
        uVar7 = param_3 >> 0x10;
        uVar10 = uVar2 / uVar7;
        uVar6 = uVar10 * (param_3 & 0xffff);
        uVar2 = uVar5 >> 0x10 | (uVar2 - uVar7 * uVar10) * 0x10000;
        param_1 = param_1 << iVar3;
        uVar4 = uVar10;
        if (uVar2 <= uVar6 && uVar6 - uVar2 != 0) {
          bVar12 = CARRY4(param_3,uVar2);
          uVar2 = param_3 + uVar2;
          uVar4 = uVar10 - 1;
          if ((!bVar12) && (uVar2 <= uVar6 && uVar6 - uVar2 != 0)) {
            uVar2 = uVar2 + param_3;
            uVar4 = uVar10 - 2;
          }
        }
        uVar8 = (uVar2 - uVar6) / uVar7;
        uVar10 = uVar8 * (param_3 & 0xffff);
        param_2 = uVar5 & 0xffff | ((uVar2 - uVar6) - uVar7 * uVar8) * 0x10000;
        uVar2 = uVar8;
        if (param_2 <= uVar10 && uVar10 - param_2 != 0) {
          bVar12 = CARRY4(param_3,param_2);
          param_2 = param_3 + param_2;
          uVar2 = uVar8 - 1;
          if ((!bVar12) && (param_2 <= uVar10 && uVar10 - param_2 != 0)) {
            param_2 = param_2 + param_3;
            uVar2 = uVar8 - 2;
          }
        }
        param_2 = param_2 - uVar10;
        uVar2 = uVar2 | uVar4 << 0x10;
      }
      uVar7 = param_3 >> 0x10;
      uVar10 = param_2 / uVar7;
      uVar6 = uVar10 * (param_3 & 0xffff);
      uVar4 = param_1 >> 0x10 | (param_2 - uVar7 * uVar10) * 0x10000;
      uVar5 = uVar10;
      if (uVar4 <= uVar6 && uVar6 - uVar4 != 0) {
        bVar12 = CARRY4(param_3,uVar4);
        uVar4 = param_3 + uVar4;
        uVar5 = uVar10 - 1;
        if ((!bVar12) && (uVar4 <= uVar6 && uVar6 - uVar4 != 0)) {
          uVar4 = uVar4 + param_3;
          uVar5 = uVar10 - 2;
        }
      }
      uVar8 = (uVar4 - uVar6) / uVar7;
      uVar10 = uVar8 * (param_3 & 0xffff);
      uVar6 = param_1 & 0xffff | ((uVar4 - uVar6) - uVar7 * uVar8) * 0x10000;
      uVar4 = uVar8;
      if (uVar6 <= uVar10 && uVar10 - uVar6 != 0) {
        bVar12 = CARRY4(param_3,uVar6);
        uVar6 = param_3 + uVar6;
        uVar4 = uVar8 - 1;
        if ((!bVar12) && (uVar6 <= uVar10 && uVar10 - uVar6 != 0)) {
          uVar6 = uVar6 + param_3;
          uVar4 = uVar8 - 2;
        }
      }
      uVar6 = uVar6 - uVar10;
      uVar4 = uVar4 | uVar5 << 0x10;
    }
    if (param_5 != (uint *)0x0) {
      *param_5 = uVar6 >> iVar3;
      param_5[1] = 0;
    }
  }
  else if (param_2 < param_4) {
    if (param_5 != (uint *)0x0) {
      *param_5 = param_1;
      param_5[1] = param_2;
    }
    uVar4 = 0;
    uVar2 = uVar4;
  }
  else {
    iVar3 = LZCOUNT(param_4);
    if (iVar3 == 0) {
      if ((param_4 < param_2) || (param_3 <= param_1)) {
        bVar12 = param_1 < param_3;
        param_1 = param_1 - param_3;
        param_2 = (param_2 - param_4) - (uint)bVar12;
        uVar4 = 1;
      }
      else {
        uVar4 = 0;
      }
      if (param_5 != (uint *)0x0) {
        *param_5 = param_1;
        param_5[1] = param_2;
      }
    }
    else {
      uVar9 = 0x20 - iVar3;
      uVar6 = param_3 >> (uVar9 & 0xff) | param_4 << iVar3;
      uVar2 = param_2 >> (uVar9 & 0xff);
      uVar4 = param_1 >> (uVar9 & 0xff) | param_2 << iVar3;
      uVar7 = uVar6 >> 0x10;
      param_1 = param_1 << iVar3;
      uVar10 = uVar2 / uVar7;
      uVar8 = uVar10 * (uVar6 & 0xffff);
      uVar5 = uVar4 >> 0x10 | (uVar2 - uVar7 * uVar10) * 0x10000;
      uVar2 = uVar10;
      if (uVar5 <= uVar8 && uVar8 - uVar5 != 0) {
        bVar12 = CARRY4(uVar6,uVar5);
        uVar5 = uVar6 + uVar5;
        uVar2 = uVar10 - 1;
        if ((!bVar12) && (uVar5 <= uVar8 && uVar8 - uVar5 != 0)) {
          uVar5 = uVar5 + uVar6;
          uVar2 = uVar10 - 2;
        }
      }
      uVar10 = (uVar5 - uVar8) / uVar7;
      uVar11 = uVar10 * (uVar6 & 0xffff);
      uVar5 = uVar4 & 0xffff | ((uVar5 - uVar8) - uVar7 * uVar10) * 0x10000;
      uVar4 = uVar10;
      if (uVar5 <= uVar11 && uVar11 - uVar5 != 0) {
        bVar12 = CARRY4(uVar6,uVar5);
        uVar5 = uVar6 + uVar5;
        uVar4 = uVar10 - 1;
        if ((!bVar12) && (uVar5 <= uVar11 && uVar11 - uVar5 != 0)) {
          uVar5 = uVar5 + uVar6;
          uVar4 = uVar10 - 2;
        }
      }
      uVar4 = uVar4 | uVar2 << 0x10;
      uVar1 = (ulonglong)uVar4 * (ulonglong)(param_3 << iVar3);
      if (CONCAT44(uVar5 - uVar11,param_1) < uVar1) {
        uVar1 = uVar1 - CONCAT44(uVar6,param_3 << iVar3);
        uVar4 = uVar4 - 1;
      }
      if (param_5 != (uint *)0x0) {
        uVar2 = ((uVar5 - uVar11) - (int)(uVar1 >> 0x20)) - (uint)(param_1 < (uint)uVar1);
        *param_5 = uVar2 << (uVar9 & 0xff) | param_1 - (uint)uVar1 >> iVar3;
        param_5[1] = uVar2 >> iVar3;
      }
    }
    uVar2 = 0;
  }
  return CONCAT44(uVar2,uVar4);
}



// FUN_00002ae8 @ 00002ae8 (92 bytes, called_by=0, calls=0)

undefined4 FUN_00002ae8(void)

{
  uint *puVar1;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined2 local_18;
  
  puVar1 = DAT_00002b44;
  if (2 < (*DAT_00002b44 & 7)) {
    local_20 = *(undefined4 *)(DAT_00002b48 + 4);
    local_1c = DAT_00002b4c;
    local_18 = 0x301;
    local_24 = DAT_00002b50;
    local_28 = DAT_00002b54;
    FUN_00007b60(DAT_00002b44,&DAT_000024c0,&local_28,0);
    if (2 < (*puVar1 & 7)) {
      FUN_0001cab2(puVar1,3,DAT_00002b58);
    }
  }
  FUN_00004c88();
  return 0;
}



// FUN_00002b5c @ 00002b5c (78 bytes, called_by=0, calls=0)

void FUN_00002b5c(undefined4 *param_1,undefined1 *param_2,int param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  
  *param_2 = 0;
  if (param_3 == 0) {
    FUN_000168a4(param_1 + 1,0,0x24,0,param_4);
    *param_1 = *(undefined4 *)(DAT_00002bac + 4);
    uVar1 = FUN_00013ac4();
    uVar2 = DAT_00002bb0;
    param_1[1] = uVar1;
    FUN_00016a4c(param_1 + 2,uVar2);
    uVar2 = FUN_00013ae0();
    FUN_00016a4c(param_1 + 6,uVar2);
    uVar3 = 0x28;
  }
  else {
    if (param_3 != 1) {
      return;
    }
    FUN_000133c8();
    uVar3 = 0x21;
  }
  *param_2 = uVar3;
  return;
}



// FUN_00002c0c @ 00002c0c (136 bytes, called_by=0, calls=0)

void FUN_00002c0c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  byte *pbVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  uVar2 = DAT_00002c98;
  iVar1 = DAT_00002c94;
  iVar10 = 4;
  uVar11 = 0;
  iVar9 = DAT_00002c94;
  uStack_24 = param_2;
  uStack_20 = param_3;
  uStack_1c = param_4;
  do {
    FUN_00003360(iVar10,&uStack_24,10,uVar2,param_1);
    iVar6 = 0;
    uVar4 = 0xff;
    pbVar3 = (byte *)&uStack_24;
    do {
      iVar6 = iVar6 + 1;
      if (*pbVar3 <= uVar4) {
        uVar4 = (uint)*pbVar3;
      }
      pbVar3 = pbVar3 + 1;
    } while (iVar6 != 10);
    uVar4 = uVar4 * 0x10000;
    uVar5 = uVar4;
    if (*(char *)(iVar1 + 0x28c) == '\0') {
      *(uint *)(iVar9 + 0x10) = uVar4;
    }
    else {
      uVar7 = *(uint *)(iVar9 + 0x158);
      uVar8 = uVar7;
      if (uVar7 <= uVar4) {
        uVar8 = uVar7 * 0x3f;
      }
      if (uVar7 <= uVar4) {
        uVar5 = uVar4 + uVar8;
      }
      *(uint *)(iVar9 + 0x10) = *(int *)(iVar9 + 0x10) * 0x3f + uVar4 >> 6;
      if (uVar7 <= uVar4) {
        uVar5 = uVar5 >> 6;
      }
    }
    *(uint *)(iVar9 + 0x158) = uVar5;
    iVar10 = iVar10 + 2;
    if (uVar11 < *(uint *)(iVar9 + 0x10)) {
      uVar11 = *(uint *)(iVar9 + 0x10);
    }
    iVar9 = iVar9 + 8;
  } while (iVar10 != 0x52);
  *(uint *)(iVar1 + 0x144) = uVar11;
  *(undefined1 *)(iVar1 + 0x28c) = 1;
  return;
}



// FUN_00002c9c @ 00002c9c (64 bytes, called_by=0, calls=0)

undefined4 FUN_00002c9c(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  uVar2 = DAT_00002ce0;
  iVar1 = DAT_00002cdc;
  iVar3 = DAT_00002cdc;
  iVar4 = 4;
  do {
    iVar5 = iVar4 + 2;
    FUN_0001d11a(param_1,uVar2,iVar4,*(undefined2 *)(iVar3 + 0x12),*(undefined2 *)(iVar3 + 0x15a),
                 param_2);
    iVar3 = iVar3 + 8;
    iVar4 = iVar5;
  } while (iVar5 != 0x52);
  FUN_0001d11a(param_1,DAT_00002ce4,*(undefined2 *)(iVar1 + 0x146));
  return 0;
}



// FUN_00002d18 @ 00002d18 (12 bytes, called_by=0, calls=0)

uint FUN_00002d18(int param_1)

{
  return (uint)(*(int *)(DAT_00002d24 + param_1 * 4) << 8) >> 0x18;
}



// FUN_00002d28 @ 00002d28 (8 bytes, called_by=0, calls=0)

undefined1 FUN_00002d28(void)

{
  return *(undefined1 *)(DAT_00002d30 + 0x146);
}



// FUN_00002d34 @ 00002d34 (12 bytes, called_by=0, calls=0)

undefined1 FUN_00002d34(int param_1)

{
  return *(undefined1 *)(DAT_00002d40 + param_1 * 4 + 0x14a);
}



// FUN_00002d44 @ 00002d44 (74 bytes, called_by=0, calls=0)

void FUN_00002d44(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = DAT_00002d90;
  puVar2 = *(undefined4 **)(DAT_00002d90 + 8);
  **(uint **)(DAT_00002d90 + 0x10) = **(uint **)(DAT_00002d90 + 0x10) & 0xfffffbff;
  (*(code *)*puVar2)(iVar1,10,0x60000);
  FUN_00002c0c();
  FUN_000153fc(DAT_00002d9c,DAT_00002d94,0x800,DAT_00002d98,0,0,0,10,0);
  return;
}



// FUN_00002da0 @ 00002da0 (50 bytes, called_by=0, calls=0)

int FUN_00002da0(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_1 == 0x50) {
    iVar2 = -1;
  }
  else {
    if (param_1 == param_2) {
      uVar1 = 0;
    }
    else {
      uVar1 = param_1 - param_2;
      if ((int)uVar1 < 0) {
        uVar1 = -uVar1;
      }
      if (0x10 < uVar1) {
        uVar1 = 0x11;
      }
    }
    iVar2 = *(int *)(DAT_00002dd4 + uVar1 * 4);
    if (iVar2 != -1) {
      return *DAT_00002dd8 * iVar2;
    }
  }
  return iVar2;
}



// FUN_00002ddc @ 00002ddc (46 bytes, called_by=0, calls=0)

int FUN_00002ddc(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = FUN_00002d28();
  iVar2 = FUN_00002d18(param_1);
  uVar3 = iVar1 - iVar2;
  if ((int)uVar3 < 1) {
    uVar3 = 0;
  }
  else if (0x6c < uVar3) {
    uVar3 = 0x6d;
  }
  return *(int *)(DAT_00002e10 + uVar3 * 4) * *DAT_00002e0c;
}



// FUN_00002eac @ 00002eac (330 bytes, called_by=0, calls=0)

undefined4 FUN_00002eac(void)

{
  uint *puVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 local_100;
  undefined4 local_fc;
  undefined1 *puStack_f8;
  undefined2 local_f4;
  undefined4 local_f0 [51];
  
  iVar9 = 0;
  puVar10 = local_f0;
  do {
    local_f0[0] = *DAT_00002ff8;
    local_f0[1] = DAT_00002ff8[1];
    local_f0[2] = DAT_00002ff8[2];
    local_f0[3] = DAT_00002ff8[3];
    iVar3 = FUN_000146a8(*puVar10);
    iVar6 = *(int *)(*(int *)(iVar3 + 0x10) + 0x88);
    iVar7 = 0;
    iVar3 = 4;
    do {
      iVar8 = iVar3 + 2;
      FUN_00016a0c((int)local_f0 + iVar7,DAT_00002ffc,iVar3);
      puVar1 = DAT_00003000;
      iVar7 = iVar7 + 3;
      iVar3 = iVar8;
    } while (iVar8 != 0x52);
    if (2 < (*DAT_00003000 & 7)) {
      local_fc = DAT_00003004;
      local_f4 = 0x200;
      local_100 = DAT_00003008;
      puStack_f8 = (undefined1 *)local_f0;
      FUN_00007b60(DAT_00003000,&DAT_00001cc0,&local_100,0);
    }
    iVar7 = 0;
    iVar3 = 4;
    do {
      FUN_00001498(*(undefined4 *)(iVar6 + 0x1cb8 + iVar3 * 4),DAT_0000300c);
      uVar4 = FUN_00001824();
      if (99 < uVar4) {
        uVar4 = 100;
      }
      iVar8 = FUN_00016a0c((int)local_f0 + iVar7,DAT_00002ffc,uVar4);
      iVar3 = iVar3 + 2;
      iVar7 = iVar7 + iVar8;
    } while (iVar3 != 0x52);
    if (2 < (*puVar1 & 7)) {
      local_fc = DAT_00003010;
      local_f4 = 0x200;
      local_100 = DAT_00003008;
      puStack_f8 = (undefined1 *)local_f0;
      FUN_00007b60(DAT_00003000,&DAT_00001cc0,&local_100,0);
    }
    uVar2 = DAT_00003014;
    iVar6 = 0;
    iVar3 = 4;
    do {
      uVar5 = FUN_00002d18(iVar3);
      iVar7 = FUN_00016a0c((int)local_f0 + iVar6,uVar2,uVar5);
      iVar3 = iVar3 + 2;
      iVar6 = iVar6 + iVar7;
    } while (iVar3 != 0x52);
    if (2 < (*puVar1 & 7)) {
      local_fc = DAT_00003018;
      local_f4 = 0x200;
      local_100 = DAT_00003008;
      puStack_f8 = (undefined1 *)local_f0;
      FUN_00007b60(DAT_00003000,&DAT_00001cc0,&local_100,0);
    }
    iVar9 = iVar9 + 1;
    puVar10 = puVar10 + 1;
  } while (iVar9 != 4);
  return 0;
}



// FUN_0000301c @ 0000301c (224 bytes, called_by=0, calls=0)

int FUN_0000301c(int param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  bool bVar8;
  uint auStack_16c [4];
  uint local_15c [78];
  
  iVar6 = 4;
  do {
    uVar3 = FUN_00002ddc(iVar6);
    piVar1 = DAT_000030fc;
    auStack_16c[iVar6] = uVar3;
    iVar6 = iVar6 + 2;
  } while (iVar6 != 0x52);
  iVar6 = 4;
  puVar7 = auStack_16c;
  do {
    iVar4 = FUN_00002d34(iVar6);
    uVar2 = DAT_00003108;
    uVar3 = iVar4 - param_3;
    if ((int)uVar3 < 1) {
      uVar3 = 0;
    }
    else if (0x29 < uVar3) {
      uVar3 = 0x2a;
    }
    iVar6 = iVar6 + 2;
    puVar7[4] = *piVar1 * *(int *)(DAT_00003100 + uVar3 * 4) + puVar7[4];
    puVar7 = puVar7 + 2;
  } while (iVar6 != 0x52);
  iVar6 = *DAT_00003104;
  iVar4 = param_1 + 0x138;
  puVar7 = auStack_16c;
  do {
    FUN_00001498(*(undefined4 *)(param_1 + 0x520),uVar2);
    uVar3 = FUN_00001824();
    if (99 < uVar3) {
      uVar3 = 100;
    }
    param_1 = param_1 + 8;
    puVar7[4] = iVar6 * uVar3 + puVar7[4];
    puVar7 = puVar7 + 2;
  } while (param_1 != iVar4);
  iVar6 = 4;
  puVar7 = auStack_16c;
  do {
    uVar3 = FUN_00002da0(iVar6,param_2);
    uVar5 = uVar3 + 1;
    bVar8 = uVar5 != 0;
    if (bVar8) {
      uVar5 = puVar7[4];
    }
    iVar6 = iVar6 + 2;
    if (bVar8) {
      uVar3 = uVar3 + uVar5;
    }
    puVar7[4] = uVar3;
    puVar7 = puVar7 + 2;
  } while (iVar6 != 0x52);
  iVar4 = 4;
  iVar6 = 0;
  uVar3 = 0xffffffff;
  do {
    uVar5 = auStack_16c[iVar4];
    if (uVar5 <= uVar3) {
      iVar6 = iVar4;
    }
    iVar4 = iVar4 + 2;
    if (uVar5 <= uVar3) {
      uVar3 = uVar5;
    }
  } while (iVar4 != 0x52);
  return iVar6;
}



// FUN_00003128 @ 00003128 (370 bytes, called_by=0, calls=0)

uint FUN_00003128(undefined4 param_1,int param_2,undefined1 *param_3,int param_4,int param_5,
                 int param_6)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  undefined4 uVar6;
  bool bVar7;
  undefined8 uVar8;
  
  *param_3 = 0;
  FUN_00014d3c(DAT_0000329c,param_2,0xffffffff,0xffffffff,param_1,param_2,param_3);
  uVar6 = extraout_r1;
  if (param_4 != 0) {
    FUN_0001b0ec(param_4,1);
    uVar6 = extraout_r1_00;
  }
  if (param_5 != 0) {
    FUN_0001b0ec(param_5,1);
    uVar6 = extraout_r1_01;
  }
  FUN_00014f54(DAT_000032a0,uVar6,0,0);
  uVar3 = FUN_00011554(param_1);
  if ((uVar3 != 0) && ((*DAT_000032a4 & 7) != 0)) {
    FUN_0001cad8(DAT_000032a4,1,DAT_000032a8,uVar3,param_1);
  }
  if (param_6 != 0) {
    if (*(char *)(param_2 + 1) == '\0') {
      uVar4 = FUN_0001148c();
    }
    else {
      uVar4 = FUN_000114c8(param_6);
    }
    uVar3 = uVar3 | uVar4;
  }
  puVar2 = DAT_000032ac;
  *DAT_000032ac = 0;
  uVar8 = FUN_000112ac(param_2);
  iVar5 = FUN_00014f54(DAT_000032a0,(int)((ulonglong)uVar8 >> 0x20),0x290,0);
  puVar1 = DAT_000032a4;
  if ((uVar3 != 0 || (int)uVar8 != 0) || iVar5 != 0) {
    if ((*DAT_000032a4 & 7) != 0) {
      FUN_0001cab2(DAT_000032a4,1,DAT_000032b0);
    }
    *(undefined4 *)(DAT_000032b4 + 0x10) = 1;
    FUN_0001b0c6(1);
    iVar5 = FUN_0001129c();
    if (iVar5 == 0) {
      if ((*puVar1 & 7) != 0) {
        FUN_0001cab2(DAT_000032a4,1,DAT_000032b8);
      }
      FUN_0001b0c6(100);
      DataSynchronizationBarrier(0xf);
      *(uint *)(DAT_000032bc + 0xc) = DAT_000032c0 | *(uint *)(DAT_000032bc + 0xc) & 0x700;
      DataSynchronizationBarrier(0xf);
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
  }
  do {
    iVar5 = FUN_0001129c();
  } while (iVar5 == 0);
  bVar7 = (*puVar2 & 4) == 0;
  if (bVar7) {
    param_3[2] = (byte)*(undefined4 *)(DAT_000032b4 + 0x548) & 0x7f;
  }
  else {
    FUN_000113c8(param_3);
  }
  uVar3 = (uint)!bVar7;
  if ((int)(*puVar2 << 0x1e) < 0) {
    FUN_00011438();
    if (*(char *)(param_2 + 1) != '\0') {
      FUN_00011580();
    }
    uVar3 = 0xffffffff;
  }
  if (param_6 != 0) {
    FUN_0001148c(DAT_000032c4);
    FUN_000114c8(DAT_000032c8);
  }
  if (param_4 != 0) {
    FUN_0001b0ec(param_4,0);
  }
  if (param_5 != 0) {
    FUN_0001b0ec(param_5,0);
  }
  FUN_00014e2c(DAT_0000329c);
  return uVar3;
}



// FUN_000032cc @ 000032cc (80 bytes, called_by=0, calls=0)

undefined4 FUN_000032cc(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  
  FUN_000200d2();
  pcVar2 = DAT_0000331c;
  FUN_0000a97c(DAT_0000331c,4);
  iVar3 = 0;
  do {
    while (((cVar1 = *pcVar2, cVar1 == '\0' || (cVar1 == -0x56)) || (cVar1 == 'U'))) {
      FUN_0000a97c(pcVar2,1,param_3,cVar1,param_4);
    }
    iVar3 = iVar3 + 1;
    pcVar2 = pcVar2 + 1;
  } while (iVar3 != 4);
  FUN_00013578(DAT_00003320);
  FUN_0001148c(DAT_00003324);
  FUN_000114c8(DAT_0000331c);
  FUN_00011508(DAT_00003328,5);
  return 0;
}



// FUN_0000332c @ 0000332c (44 bytes, called_by=0, calls=0)

void FUN_0000332c(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = DAT_00003358;
  FUN_00014d3c(DAT_00003358,param_2,0xffffffff,0xffffffff);
  iVar2 = DAT_0000335c;
  *(char *)(DAT_0000335c + param_1) = *(char *)(DAT_0000335c + param_1) + '\x10';
  FUN_00011508(iVar2,5);
  FUN_00014e2c(uVar1);
  return;
}



// FUN_00003360 @ 00003360 (272 bytes, called_by=0, calls=0)

void FUN_00003360(short param_1,byte *param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  byte *pbVar5;
  bool bVar6;
  
  iVar1 = DAT_00003474;
  FUN_00014d3c(DAT_00003470,param_2,0xffffffff,0xffffffff);
  FUN_0001b0ec(param_4,1);
  FUN_00009ff4(1);
  uVar3 = *(undefined4 *)(iVar1 + 0x200);
  *(undefined4 *)(iVar1 + 0x11c) = 0;
  *(undefined4 *)(iVar1 + 0x104) = 0;
  *(undefined4 *)(iVar1 + 0x110) = 0;
  *(undefined4 *)(iVar1 + 0x100) = 0;
  uVar4 = (uint)(ushort)(param_1 + 0x960);
  *(undefined4 *)(iVar1 + 0x10c) = 0;
  bVar6 = uVar4 < 0x960;
  if (bVar6) {
    uVar4 = uVar4 - 0x938;
  }
  *(undefined4 *)(iVar1 + 0x200) = 0x101;
  if (bVar6) {
    uVar4 = uVar4 | 0x100;
  }
  else {
    uVar4 = uVar4 - 0x960;
  }
  *(uint *)(iVar1 + 0x508) = uVar4;
  *(undefined4 *)(iVar1 + 4) = 1;
  iVar2 = DAT_00003474;
  do {
  } while ((*(uint *)(iVar1 + 0x550) & 0xff) != 3);
  pbVar5 = param_2 + param_3;
  for (; pbVar5 != param_2; param_2 = param_2 + 1) {
    *(undefined4 *)(iVar2 + 0x14) = 1;
    do {
    } while (*(int *)(iVar2 + 0x11c) == 0);
    *param_2 = (byte)*(undefined4 *)(iVar2 + 0x548) & 0x7f;
    *(undefined4 *)(iVar2 + 0x11c) = 0;
  }
  *(undefined4 *)(iVar2 + 0x10) = 1;
  do {
  } while ((*(uint *)(iVar2 + 0x550) & 0xff) != 0);
  *(undefined4 *)(iVar2 + 0x11c) = 0;
  *(undefined4 *)(iVar2 + 0x104) = 0;
  *(undefined4 *)(iVar2 + 0x110) = 0;
  *(undefined4 *)(iVar2 + 0x100) = 0;
  *(undefined4 *)(iVar2 + 0x10c) = 0;
  *(undefined4 *)(iVar2 + 0x200) = uVar3;
  *(undefined4 *)(DAT_00003478 + 0x180) = 2;
  FUN_00009fd8(1);
  FUN_0001b0ec(param_4,0);
  FUN_00014e2c(DAT_00003470);
  return;
}



// FUN_0000347c @ 0000347c (238 bytes, called_by=0, calls=0)

undefined4 FUN_0000347c(undefined4 param_1,uint param_2,int param_3)

{
  longlong lVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  undefined4 uVar5;
  undefined4 *puVar6;
  uint uVar7;
  byte *pbVar8;
  undefined8 uVar9;
  int local_150;
  int local_14c;
  undefined1 auStack_144 [4];
  byte local_140 [16];
  undefined2 local_130;
  undefined1 uStack_12e;
  undefined1 local_12d;
  undefined1 auStack_12b [131];
  undefined1 auStack_a8 [136];
  
  uVar5 = DAT_00003570;
  if (param_2 < 2) {
    FUN_0001d11a(param_1,DAT_0000356c);
  }
  else {
    puVar6 = (undefined4 *)(param_3 + 4);
    iVar4 = FUN_00016e9c(*puVar6,0,10);
    for (uVar7 = 0; uVar7 != param_2 - 2; uVar7 = uVar7 + 1) {
      puVar6 = puVar6 + 1;
      bVar3 = FUN_00016e9c(*puVar6,0,10);
      FUN_0001d11a(param_1,uVar5,bVar3);
      local_140[uVar7] = bVar3;
    }
    FUN_000168a4(&uStack_12e,0,0x83);
    local_130 = 0x164;
    local_12d = 1;
    FUN_0000a97c(auStack_12b,0x80);
    FUN_0000a97c(auStack_144,4);
    lVar1 = (ulonglong)(uint)(iVar4 * 1000) * 0x8000 + 999;
    uVar9 = FUN_00001904((int)lVar1,(int)((ulonglong)lVar1 >> 0x20),1000,0);
    uVar5 = (undefined4)((ulonglong)uVar9 >> 0x20);
    FUN_00020ed0(&local_150,uVar5,(int)uVar9,uVar5);
    iVar2 = local_14c;
    iVar4 = local_150;
    uVar5 = extraout_r1;
    while (FUN_00020f18(&local_150,uVar5,iVar4,iVar2), local_14c != 0 || local_150 != 0) {
      uVar5 = extraout_r1_00;
      pbVar8 = local_140;
      for (uVar7 = 0; uVar7 < param_2 - 2; uVar7 = uVar7 + 1) {
        thunk_FUN_00003128(*pbVar8,&local_130,auStack_a8,0,0,auStack_144);
        uVar5 = extraout_r1_01;
        pbVar8 = pbVar8 + 1;
      }
    }
  }
  return 0;
}



// FUN_00003574 @ 00003574 (6 bytes, called_by=0, calls=0)

undefined1 FUN_00003574(int param_1)

{
  return *(undefined1 *)(DAT_0000357c + param_1);
}



// FUN_00003580 @ 00003580 (4 bytes, called_by=0, calls=0)

undefined4 FUN_00003580(void)

{
  return DAT_00003584;
}



// FUN_00003620 @ 00003620 (16 bytes, called_by=0, calls=0)

undefined1 FUN_00003620(int param_1)

{
  undefined1 uVar1;
  uint uVar2;
  
  uVar2 = param_1 - 0x40U & 0xff;
  if (uVar2 < 0x3c) {
    uVar1 = *(undefined1 *)(DAT_00003630 + uVar2);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



// FUN_00003634 @ 00003634 (132 bytes, called_by=0, calls=0)

undefined4 FUN_00003634(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = *(int *)(*(int *)(*(int *)(param_1 + 4) + 0x10) + 0x88);
  if ((*param_2 == 0) || (param_2[1] == 0)) {
    if (2 < (*DAT_000036b8 & 7)) {
      thunk_FUN_0001cac4(DAT_000036b8,3,DAT_000036bc,*(int *)(iVar2 + 0x1730) + -1);
    }
    FUN_0001cc36(*(undefined4 *)(iVar2 + 8));
    FUN_000168a4(iVar2 + 0x1734,0,0x18);
  }
  else {
    if (2 < (*DAT_000036b8 & 7)) {
      thunk_FUN_0001cac4(DAT_000036b8,3,DAT_000036c0,*(int *)(iVar2 + 0x1730) + -1);
    }
    uVar3 = *(undefined4 *)(iVar2 + 8);
    iVar1 = FUN_000082bc(uVar3,param_2,0x18);
    if (iVar1 == 0) {
      FUN_00008330(uVar3);
    }
  }
  thunk_FUN_00021334(iVar2 + 0x1720,1);
  return 0;
}



// FUN_000036c4 @ 000036c4 (584 bytes, called_by=0, calls=0)

void FUN_000036c4(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  int iVar6;
  undefined1 local_90;
  char local_8f;
  uint local_8e;
  short local_8a;
  short local_88;
  undefined2 local_86;
  undefined2 local_84;
  undefined2 local_82;
  undefined2 local_80;
  undefined2 local_6e;
  undefined2 local_6c;
  undefined2 local_6a;
  undefined2 local_68;
  undefined2 local_66;
  undefined2 local_64;
  char local_50;
  ushort local_4f;
  byte local_4d;
  undefined2 local_4c;
  undefined2 local_4a;
  undefined2 local_48;
  undefined2 local_46;
  undefined2 local_44;
  undefined2 local_42;
  undefined2 local_40;
  undefined2 local_3e;
  
  FUN_000168a4(&local_8f,0,0x3f);
  iVar2 = DAT_00003910;
  uVar1 = DAT_0000390c;
  local_90 = 0x45;
LAB_000036de:
  do {
    iVar6 = 0;
    pcVar5 = DAT_00003914;
    do {
      if ((*pcVar5 == '\x03') && (pcVar5[0x45] == '\x01')) {
        iVar3 = FUN_00014c88(uVar1,&local_50,0x8000,0);
        if (iVar3 == 0) {
          if (local_50 == '`') {
            if ((local_4d & 0x80) == 0) {
              local_8a = 0;
            }
            else {
              local_8a = 0x7f;
            }
            local_8a = local_8a + (ushort)local_4d * 0x80;
            local_86 = local_4c;
            local_84 = local_4a;
            local_6e = local_48;
            local_6c = local_46;
            local_6a = local_44;
            local_68 = local_42;
            uVar4 = (uint)local_4f;
            local_66 = local_40;
            local_64 = local_3e;
            if ((int)(uVar4 << 0x1f) < 0) {
              local_8e = local_8e | 0x400;
            }
            else {
              local_8e = local_8e & 0xfffffbff;
            }
            if ((int)(uVar4 << 0x1e) < 0) {
              local_8e = local_8e | 0x800;
            }
            else {
              local_8e = local_8e & 0xfffff7ff;
            }
            if ((int)(uVar4 << 0x1d) < 0) {
              local_8e = local_8e | 0x1000;
            }
            else {
              local_8e = local_8e & 0xffffefff;
            }
            if ((int)(uVar4 << 0x1c) < 0) {
              local_8e = local_8e | 0x2000;
            }
            else {
              local_8e = local_8e & 0xffffdfff;
            }
            if ((int)(uVar4 << 0x16) < 0) {
              local_8e = local_8e | 0x4000;
            }
            else {
              local_8e = local_8e & 0xffffbfff;
            }
            if ((int)(uVar4 << 0x19) < 0) {
              local_8e = local_8e | 0x8000;
            }
            else {
              local_8e = local_8e & 0xffff7fff;
            }
            if ((int)(uVar4 << 0x17) < 0) {
              local_8e = local_8e | 0x10000;
            }
            else {
              local_8e = local_8e & 0xfffeffff;
            }
            if ((int)(uVar4 << 0x1b) < 0) {
              local_8e = local_8e | 0x20000;
            }
            else {
              local_8e = local_8e & 0xfffdffff;
            }
            if ((int)(uVar4 << 0x1a) < 0) {
              local_8e = local_8e | 0x80000;
            }
            else {
              local_8e = local_8e & 0xfff7ffff;
            }
            if ((int)(uVar4 << 0x15) < 0) {
              local_8e = local_8e | 0x1000000;
            }
            else {
              local_8e = local_8e & 0xfeffffff;
            }
            if ((int)(uVar4 << 0x18) < 0) {
              local_8e = local_8e | 0x8000000;
            }
            else {
              local_8e = local_8e & 0xf7ffffff;
            }
            if ((int)(uVar4 << 0x14) < 0) {
              local_8e = local_8e | 0x20000000;
            }
            else {
              local_8e = local_8e & 0xdfffffff;
            }
          }
          else {
            if (local_50 != 'a') goto LAB_000036de;
            if ((local_4d & 0x80) == 0) {
              local_88 = 0;
            }
            else {
              local_88 = 0x7f;
            }
            local_88 = local_88 + (ushort)local_4d * 0x80;
            uVar4 = (uint)local_4f;
            local_82 = local_4c;
            local_80 = local_4a;
            if ((int)(uVar4 << 0x1f) < 0) {
              local_8e = local_8e | 1;
            }
            else {
              local_8e = local_8e & 0xfffffffe;
            }
            if ((int)(uVar4 << 0x1e) < 0) {
              local_8e = local_8e | 2;
            }
            else {
              local_8e = local_8e & 0xfffffffd;
            }
            if ((int)(uVar4 << 0x1d) < 0) {
              local_8e = local_8e | 4;
            }
            else {
              local_8e = local_8e & 0xfffffffb;
            }
            if ((int)(uVar4 << 0x1c) < 0) {
              local_8e = local_8e | 8;
            }
            else {
              local_8e = local_8e & 0xfffffff7;
            }
            if ((int)(uVar4 << 0x17) < 0) {
              local_8e = local_8e | 0x10;
            }
            else {
              local_8e = local_8e & 0xffffffef;
            }
            if ((int)(uVar4 << 0x19) < 0) {
              local_8e = local_8e | 0x20;
            }
            else {
              local_8e = local_8e & 0xffffffdf;
            }
            if ((int)(uVar4 << 0x16) < 0) {
              local_8e = local_8e | 0x40;
            }
            else {
              local_8e = local_8e & 0xffffffbf;
            }
            if ((int)(uVar4 << 0x1b) < 0) {
              local_8e = local_8e | 0x80;
            }
            else {
              local_8e = local_8e & 0xffffff7f;
            }
            if ((int)(uVar4 << 0x1a) < 0) {
              local_8e = local_8e | 0x200;
            }
            else {
              local_8e = local_8e & 0xfffffdff;
            }
            if ((int)(uVar4 << 0x15) < 0) {
              local_8e = local_8e | 0x100000;
            }
            else {
              local_8e = local_8e & 0xffefffff;
            }
            if ((int)(uVar4 << 0x18) < 0) {
              local_8e = local_8e | 0x800000;
            }
            else {
              local_8e = local_8e & 0xff7fffff;
            }
            if ((int)(uVar4 << 0x14) < 0) {
              local_8e = local_8e | 0x10000000;
            }
            else {
              local_8e = local_8e & 0xefffffff;
            }
          }
        }
        else {
          FUN_000168a4(&local_8e,0,0x2c);
        }
        local_8f = local_8f + '\x01';
        iVar3 = FUN_00003620(local_90);
        FUN_0001b63c(*(undefined4 *)(iVar2 + iVar6 * 0x1e80),&local_90,iVar3 + 1);
        goto LAB_000036de;
      }
      iVar6 = iVar6 + 1;
      pcVar5 = pcVar5 + 0x1e80;
    } while (iVar6 != 4);
    FUN_0001596c(0x8000,0);
  } while( true );
}



// FUN_00003918 @ 00003918 (146 bytes, called_by=0, calls=0)

void FUN_00003918(int param_1)

{
  undefined2 uVar1;
  short sVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  longlong lVar8;
  
  if (*(char *)(param_1 + 0x17a0) == '\0') {
    lVar8 = FUN_0001b358();
    (&LAB_00001780_1)[param_1] = (char)*(undefined4 *)(param_1 + 0x1750);
    (&LAB_00001782)[param_1] = (char)*(undefined4 *)(param_1 + 0x1754);
    lVar8 = lVar8 - *(longlong *)(param_1 + 0x1788);
    uVar3 = (uint)lVar8;
    if ((int)((ulonglong)lVar8 >> 0x20) < (int)(uint)(uVar3 < 0x10000)) {
      if (lVar8 < 0) {
        uVar3 = 0;
      }
      uVar1 = (undefined2)uVar3;
    }
    else {
      uVar1 = 0xffff;
    }
    *(undefined2 *)(&LAB_00001776_1 + param_1) = uVar1;
    sVar2 = *(short *)(&LAB_00001778_1 + param_1);
    if (sVar2 != 0) {
      uVar4 = FUN_000013e8();
      puVar7 = DAT_000039ac;
      uVar4 = FUN_00001600(*(undefined4 *)(param_1 + 0x1790),uVar4);
      iVar6 = 0;
      do {
        iVar5 = FUN_00001810(uVar4,*puVar7);
        if (iVar5 != 0) {
          sVar2 = (short)(char)-(char)iVar6;
          goto LAB_0000398a;
        }
        iVar6 = iVar6 + 1;
        puVar7 = puVar7 + 1;
      } while (iVar6 != 0x7f);
      sVar2 = -0x80;
    }
LAB_0000398a:
    *(char *)(param_1 + 0x177f) = (char)sVar2;
    *(undefined1 *)(param_1 + 0x17a0) = 1;
  }
  return;
}



// FUN_000039b0 @ 000039b0 (58 bytes, called_by=0, calls=0)

undefined4 FUN_000039b0(void)

{
  uint *puVar1;
  uint *puVar2;
  undefined4 uVar3;
  uint uVar4;
  
  puVar1 = DAT_000039ec;
  if (*DAT_000039ec == 0) {
    FUN_0000a97c(DAT_000039ec,4);
  }
  puVar2 = DAT_000039f0;
  uVar4 = *DAT_000039f0;
  *DAT_000039f0 = uVar4 >> 1;
  if (uVar4 >> 1 == 0) {
    *puVar2 = *puVar1;
  }
  uVar4 = *puVar2 & 3;
  if (uVar4 == 0) {
    uVar3 = 0x5dc;
  }
  else if (uVar4 == 1) {
    uVar3 = 500;
  }
  else {
    uVar3 = 1000;
  }
  return uVar3;
}



// FUN_000039f4 @ 000039f4 (290 bytes, called_by=0, calls=0)

void FUN_000039f4(undefined4 *param_1,undefined4 param_2)

{
  ushort uVar1;
  uint *puVar2;
  undefined8 uVar3;
  undefined4 local_b8;
  undefined4 local_b4;
  int iStack_b0;
  undefined4 local_ac;
  uint uStack_a8;
  uint local_a4;
  uint local_a0;
  uint local_9c;
  int local_98;
  uint local_94;
  uint local_90;
  undefined4 uStack_8c;
  undefined1 auStack_88 [4];
  undefined1 *local_84;
  uint local_80;
  uint local_7c;
  uint local_78;
  int local_74;
  uint local_70;
  uint local_6c;
  undefined1 local_68;
  undefined4 local_67;
  undefined4 local_63;
  undefined4 local_5f;
  undefined1 auStack_5b [55];
  
  uVar3 = FUN_0001b358();
  FUN_00003918(param_1);
  *(char *)(param_1 + 0x5e0) = (char)param_2;
  puVar2 = DAT_00003b18;
  if ((*(char *)((int)param_1 + 0x17a1) != '\0') && (2 < (*DAT_00003b18 & 7))) {
    local_80 = (uint)*(ushort *)((int)param_1 + 0x1779);
    uVar1 = *(ushort *)((int)param_1 + 0x1777);
    local_6c = (uint)*(ushort *)((int)param_1 + 0x177b);
    local_70 = (uint)*(ushort *)((int)param_1 + 0x177d);
    local_74 = (int)*(char *)((int)param_1 + 0x177f);
    local_78 = (uint)*(byte *)((int)param_1 + 0x1781);
    local_7c = (uint)*(byte *)((int)param_1 + 0x1782);
    iStack_b0 = param_1[0x5cc] + -1;
    local_b4 = DAT_00003b1c;
    local_84 = auStack_88;
    local_ac = FUN_00001864((uint)uVar3 - param_1[0x5dc],
                            (int)((ulonglong)uVar3 >> 0x20) -
                            (uint)((uint)uVar3 < (uint)param_1[0x5dc]),1000,0);
    local_a4 = local_80;
    local_a0 = local_6c;
    local_9c = local_70;
    local_98 = local_74;
    local_94 = local_78;
    local_90 = local_7c;
    local_b8 = 0xc;
    uStack_a8 = (uint)uVar1;
    uStack_8c = param_2;
    thunk_FUN_00007b60(puVar2,0x60c0,&local_b8,0);
  }
  FUN_000168a4(auStack_5b,0,0x33);
  local_68 = 0x7b;
  local_67 = *(undefined4 *)((int)param_1 + 0x1777);
  local_63 = *(undefined4 *)((int)param_1 + 0x177b);
  local_5f = *(undefined4 *)((int)param_1 + 0x177f);
  FUN_0001b63c(*param_1,&local_68,0xd);
  *(undefined4 *)((int)param_1 + 0x1777) = 0;
  *(undefined4 *)((int)param_1 + 0x177b) = 0;
  *(undefined4 *)((int)param_1 + 0x177f) = 0;
  param_1[0x5e4] = 0;
  *(undefined8 *)(param_1 + 0x5e2) = uVar3;
  *(undefined1 *)(param_1 + 0x5e8) = 0;
  return;
}



// FUN_00003b20 @ 00003b20 (364 bytes, called_by=0, calls=0)

void FUN_00003b20(int param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 extraout_r1;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined4 local_170;
  undefined4 uStack_16c;
  undefined4 local_164;
  undefined1 auStack_160 [20];
  undefined4 local_14c;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined1 auStack_138 [136];
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  
  FUN_0001cc36(*(undefined4 *)(param_1 + 8));
  FUN_000168a4(param_1 + 0x1734,0,0x18);
  lVar1 = (ulonglong)((uint)(byte)FUN_00001748[param_1 + 5] * 1000) * 0x8000 + 999;
  uVar8 = FUN_00001904((int)lVar1,(int)((ulonglong)lVar1 >> 0x20),1000,0);
  uVar7 = (undefined4)((ulonglong)uVar8 >> 0x20);
  FUN_00020ed0(&local_170,uVar7,(int)uVar8,uVar7);
  uVar3 = uStack_16c;
  uVar7 = local_170;
  while (uVar8 = FUN_0001b248(uVar7,uVar3), (int)uVar8 == 0) {
    uVar4 = FUN_0001b294(param_1,(int)((ulonglong)uVar8 >> 0x20),0x148,0);
    if ((uVar4 & 0xc) != 0) break;
    FUN_000201b4(auStack_138,0);
    thunk_FUN_00003128(2,auStack_138,&local_b0,param_1 + 0x1760,0,DAT_00003c94);
    iVar5 = FUN_00020104(&local_b0,auStack_160);
    if (iVar5 != 0) {
      FUN_0000a97c(&local_164,4);
      uVar2 = local_164;
      uVar6 = FUN_00013ae0();
      FUN_00020128(auStack_138,uVar2,uVar6);
      FUN_00020ed0(&local_170,extraout_r1,0x4000,0);
      uVar6 = uStack_16c;
      uVar2 = local_170;
      while (iVar5 = FUN_0001b248(uVar2,uVar6), iVar5 == 0) {
        thunk_FUN_00003128(2,auStack_138,&local_b0,param_1 + 0x1760,0,auStack_160);
        iVar5 = FUN_00020152(&local_b0,&local_14c);
        if (iVar5 != 0) {
          local_b0 = local_164;
          local_ac = local_14c;
          local_a8 = local_148;
          uStack_a4 = uStack_144;
          uStack_a0 = uStack_140;
          uStack_9c = uStack_13c;
          uVar7 = *(undefined4 *)(param_1 + 8);
          iVar5 = FUN_000082bc(uVar7,&local_b0,0x18);
          if (iVar5 == 0) {
            FUN_00008330(uVar7);
          }
          if (2 < (*DAT_00003c8c & 7)) {
            thunk_FUN_0001cac4(DAT_00003c8c,3,DAT_00003c98,*(int *)(param_1 + 0x1730) + -1);
          }
          *(undefined1 *)(param_1 + 0x172f) = 2;
          FUN_0001b32c(param_1,3);
          return;
        }
        FUN_000039b0();
        thunk_FUN_000159a8();
      }
    }
  }
  if (2 < (*DAT_00003c8c & 7)) {
    thunk_FUN_0001cac4(DAT_00003c8c,3,DAT_00003c90,*(int *)(param_1 + 0x1730) + -1);
  }
  *(undefined1 *)(param_1 + 0x172f) = 0;
  return;
}



// FUN_00003c9c @ 00003c9c (682 bytes, called_by=0, calls=0)

void FUN_00003c9c(undefined4 *param_1,byte *param_2,undefined1 *param_3,undefined1 *param_4)

{
  uint *puVar1;
  uint uVar2;
  byte *pbVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  byte *pbVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  bool bVar11;
  bool bVar12;
  uint local_38 [2];
  undefined1 *local_30;
  undefined4 *local_2c;
  
  puVar1 = DAT_00003f48;
  puVar10 = local_38;
  bVar4 = param_2[5];
  if (bVar4 == 0xf1) {
    for (iVar9 = 1; iVar9 < (int)(uint)*param_2; iVar9 = iVar9 + param_2[iVar8] + 2) {
      iVar8 = iVar9 + 5;
      pbVar7 = param_2 + iVar8;
      bVar4 = pbVar7[1];
      if (bVar4 == 2) {
        if (param_2[iVar8] != 4) {
          if ((*DAT_00003f48 & 7) == 0) {
            return;
          }
          bVar4 = param_2[iVar8];
          puVar10[-1] = DAT_00003f50;
          *puVar10 = DAT_00003f54;
          *(undefined2 *)(puVar10 + 1) = 0x200;
          puVar10[-2] = DAT_00003f58;
          thunk_FUN_00007b60(DAT_00003f48,(bVar4 + 2) * 0x100000 | 0x1c40,puVar10 + -2,pbVar7);
          return;
        }
        if ((*(int *)(pbVar7 + 2) != 0) && ((*puVar1 & 6) != 0)) {
          iVar6 = param_1[0x5cc];
          *puVar10 = *(int *)(pbVar7 + 2);
          FUN_0001cad8(DAT_00003f48,2,DAT_00003f4c,iVar6 + -1);
        }
      }
      else if (bVar4 == 4) {
        local_30 = (undefined1 *)(uint)pbVar7[2];
        local_2c = param_1 + 0x5a4;
        FUN_00014d3c(local_2c,4,0xffffffff,0xffffffff);
        if (*(char *)(param_1 + 0x5a9) == '\x02') {
          if ((0x3f < param_2[iVar8]) && ((*DAT_00003f48 & 7) != 0)) {
            bVar4 = param_2[iVar8];
            local_30 = (undefined1 *)puVar10;
            puVar10[-1] = DAT_00003f50;
            *puVar10 = DAT_00003f5c;
            *(undefined2 *)(puVar10 + 1) = 0x200;
            puVar10[-2] = DAT_00003f58;
            thunk_FUN_00007b60(DAT_00003f48,(bVar4 + 2) * 0x100000 | 0x1c40,puVar10 + -2,pbVar7);
            puVar10 = (uint *)local_30;
          }
          bVar4 = param_2[iVar8];
          if (0x3e < bVar4) {
            bVar4 = 0x3f;
          }
          FUN_00000820(param_1 + 0x5b8,pbVar7 + 2,bVar4);
          *(undefined1 *)(param_1 + 0x5a9) = 3;
        }
        else if ((*puVar1 & 6) != 0) {
          iVar6 = param_1[0x5cc];
          bVar4 = *(byte *)(param_1 + 0x5a9);
          puVar10[-3] = DAT_00003f60;
          puVar10[-2] = iVar6 - 1;
          puVar10[-1] = (uint)local_30;
          *puVar10 = (uint)bVar4;
          puVar10[-4] = 5;
          thunk_FUN_00007b60(DAT_00003f48,&DAT_00002880,puVar10 + -4,0);
        }
        FUN_00014e2c(local_2c);
      }
      else {
        if (bVar4 != 6) {
          if ((*DAT_00003f48 & 6) == 0) {
            return;
          }
          thunk_FUN_0001cac4(DAT_00003f48,2,DAT_00003f6c,bVar4);
          return;
        }
        uVar2 = (uint)pbVar7[2];
        uVar5 = (uint)param_2[iVar8];
        pbVar3 = pbVar7 + 2;
        if (uVar2 - 0x60 < 2) {
          *(undefined1 *)(param_1 + 0x5dd) = 1;
          FUN_00014bdc(DAT_00003f64,pbVar3,0,0);
        }
        else if (uVar2 == 0x41) {
          iVar6 = FUN_00003620(0x41,pbVar3);
          if (uVar5 == iVar6 + 1U) {
            pbVar3 = pbVar7 + 4;
            do {
              pbVar3 = pbVar3 + 1;
              uVar2 = (uint)*pbVar3;
              if (uVar2 != 0x2b) {
                if (uVar2 < 0x2c) {
                  if (uVar2 < 2) goto LAB_00003e64;
                  bVar12 = uVar2 != 0x28;
                  bVar11 = uVar2 == 0x29;
                }
                else {
                  bVar12 = 2 < uVar2 - 0x4f;
                  bVar11 = uVar2 - 0x4f == 3;
                }
                if (bVar12 && !bVar11) goto LAB_00003e7e;
              }
LAB_00003e64:
            } while (pbVar7 + 10 != pbVar3);
            if ((pbVar7[4] == 0) && (pbVar7[3] == 0)) goto LAB_00003e70;
          }
LAB_00003e7e:
          if (2 < (*puVar1 & 7)) {
            FUN_0001cab2(DAT_00003f48,3,DAT_00003f68);
          }
        }
        else if ((uVar2 - 0x40 < 7) &&
                (iVar6 = FUN_00003620(uVar2,pbVar3), uVar5 == (iVar6 + 1U & 0xff))) {
LAB_00003e70:
          FUN_0001b63c(*param_1);
        }
      }
    }
  }
  else if (bVar4 == 0xf2) {
    if (2 < (*DAT_00003f48 & 7)) {
      FUN_0001cab2(DAT_00003f48,3,DAT_00003f70);
    }
    *param_3 = 1;
  }
  else if (bVar4 == 0xf3) {
    local_38[0] = (uint)param_2[6];
    uVar2 = *DAT_00003f48;
    if (local_38[0] < 2) {
      *(byte *)((int)param_1 + 0x1775) = param_2[6];
      if (2 < (uVar2 & 7)) {
        FUN_0001cad8(puVar1,3,DAT_00003f74,param_1[0x5cc] + -1);
      }
      if (*(char *)((int)param_1 + 0x1775) != '\0') {
        *param_4 = 1;
      }
    }
    else if (2 < (uVar2 & 7)) {
      FUN_0001cad8(DAT_00003f48,3,DAT_00003f78,param_1[0x5cc] + -1);
    }
  }
  return;
}



// FUN_00003f7c @ 00003f7c (1066 bytes, called_by=0, calls=0)

undefined4 FUN_00003f7c(int param_1)

{
  char cVar1;
  int iVar2;
  uint *puVar3;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  undefined4 extraout_r1_02;
  undefined4 uVar4;
  short sVar5;
  ushort uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  bool bVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined4 local_180;
  undefined4 local_17c;
  int iStack_178;
  undefined4 local_174;
  int local_170;
  int local_164;
  int local_160;
  undefined4 uStack_15c;
  undefined4 local_158;
  undefined4 uStack_154;
  uint local_150;
  uint local_14c;
  undefined4 local_148;
  undefined4 uStack_144;
  char local_13b;
  byte local_13a;
  char local_139;
  undefined1 auStack_138 [136];
  byte local_b0 [2];
  char local_ae;
  
  local_13b = '\0';
  local_13a = 0;
  local_139 = '\0';
  uVar12 = FUN_0001b358();
  iVar8 = (int)((ulonglong)uVar12 >> 0x20);
  local_150 = *(uint *)(param_1 + 0x1788);
  local_164 = *(int *)(param_1 + 0x178c);
  local_14c = (uint)*(ushort *)(param_1 + 0x17a2);
  if (*(char *)(param_1 + 0x172c) == '\0') {
    if (*(char *)(param_1 + 0x172d) == '\0') {
      if (*(char *)(param_1 + 0x172e) == '\0') {
        FUN_000201d0(auStack_138,*(undefined1 *)(param_1 + 0x1730));
        while( true ) {
          uVar13 = FUN_0002085e(param_1 + 0x1660,local_b0);
          uVar4 = (undefined4)((ulonglong)uVar13 >> 0x20);
          if ((int)uVar13 != 0) break;
          uVar13 = FUN_000201ec(auStack_138,local_b0,local_b0[0] + 2);
          uVar4 = (undefined4)((ulonglong)uVar13 >> 0x20);
          if ((int)uVar13 != 0) break;
          FUN_00014c88(param_1 + 0x1660,local_b0,0,0);
        }
      }
      else {
        FUN_0002023c();
        *(undefined1 *)(param_1 + 0x172e) = 0;
        uVar4 = extraout_r1_02;
      }
    }
    else {
      FUN_00020258(auStack_138);
      *(undefined1 *)(param_1 + 0x172d) = 0;
      uVar4 = extraout_r1_01;
    }
  }
  else {
    if (2 < (*DAT_000042e4 & 7)) {
      iStack_178 = *(int *)(param_1 + 0x1730) + -1;
      local_174 = 0;
      local_17c = DAT_000042e8;
      local_170 = 1;
      local_180 = 5;
      thunk_FUN_00007b60(DAT_000042e4,&DAT_000028c0,&local_180,0);
    }
    FUN_00020274(auStack_138,*(undefined1 *)(param_1 + 0x1730),0,1);
    *(undefined1 *)(param_1 + 0x172c) = 0;
    uVar4 = extraout_r1;
  }
  FUN_00020ed0(&local_148,uVar4,0x4000,0);
  local_158 = local_148;
  uStack_154 = uStack_144;
  FUN_00020ed0(&local_148,extraout_r1_00,0x148,0);
  local_160 = local_148;
  uStack_15c = uStack_144;
  iVar10 = 0;
  iVar9 = 0;
LAB_00004048:
  iVar2 = FUN_0001b248(local_158,uStack_154);
  if (iVar2 == 0) {
    iVar2 = FUN_0001b248(local_160,uStack_15c);
    if (iVar2 != 0) goto LAB_00004102;
    local_170 = param_1 + 0x1768;
    if (iVar10 == 0) {
      local_170 = 0;
    }
    iVar2 = FUN_0001b114(*(undefined4 *)(param_1 + 0x1750),auStack_138,local_b0,param_1 + 0x1760);
    if (iVar2 < 0) {
      iVar10 = iVar10 + 1;
      goto LAB_000040f8;
    }
    iVar9 = 0;
  }
  else {
    iVar9 = -0x74;
  }
LAB_0000412a:
  local_13a = (byte)((uint)iVar9 >> 0x1f);
  local_13b = 0 < iVar9;
  uVar7 = *(uint *)(&LAB_00001e44 + param_1) >> 1;
  if (iVar10 != 0) {
    uVar7 = uVar7 | 0x400;
  }
  *(uint *)(&LAB_00001e44 + param_1) = uVar7;
  local_160 = (int)local_ae;
  uVar13 = thunk_FUN_00015da4();
  local_158 = (undefined4)((ulonglong)uVar13 >> 0x20);
  sVar5 = *(short *)(&LAB_00001778_1 + param_1);
  if (-1 < iVar9) {
    sVar5 = sVar5 + 1;
  }
  *(short *)(&LAB_00001778_1 + param_1) = sVar5;
  uVar6 = *(ushort *)(&LAB_0000177a_1 + param_1);
  *(short *)(&LAB_0000177a_1 + param_1) = (short)((uint)uVar6 + iVar10);
  if (iVar9 < 0) {
    if (local_b0[0] != 0) {
      FUN_00003c9c(param_1,local_b0,&local_139,&local_13b);
    }
    FUN_00003918(param_1);
    FUN_000039f4(param_1,3);
    FUN_0001b532(FUN_000017a8 + param_1,*(undefined4 *)(param_1 + 0x1750),0,10);
    if ((*DAT_000042e4 & 7) < 3) {
      return 0xffffffff;
    }
    iVar8 = *(int *)(param_1 + 0x1730);
    puVar3 = DAT_000042e4;
    uVar4 = DAT_000042ec;
  }
  else {
    iVar9 = (uint)uVar6 + iVar10;
    if (-1 < local_160) {
      iVar9 = DAT_000042f0;
    }
    if (-1 < local_160) {
      uVar4 = *(undefined4 *)(iVar9 + local_160 * 4);
    }
    else {
      uVar4 = 0;
    }
    uVar4 = FUN_00001288(*(undefined4 *)(param_1 + 0x1790),uVar4);
    *(undefined4 *)(param_1 + 0x1790) = uVar4;
    uVar7 = ((int)uVar13 - (uint)*(ushort *)(param_1 + 0x1798) & 0xffff) * 1000 >> 0xf;
    uVar6 = (ushort)uVar7;
    if (uVar7 < *(ushort *)(&LAB_0000177c_1 + param_1)) {
      uVar6 = *(ushort *)(&LAB_0000177c_1 + param_1);
    }
    *(ushort *)(&LAB_0000177c_1 + param_1) = uVar6;
    *(undefined4 *)(param_1 + 0x179c) = local_158;
    *(int *)(param_1 + 0x1798) = (int)uVar13;
    if (local_b0[0] != 0) {
      FUN_00003c9c(param_1,local_b0,&local_139,&local_13b);
    }
    if (local_139 == '\0') {
      if (local_13b == '\0') {
        iVar9 = FUN_000019d6(*(undefined4 *)(&LAB_00001e44 + param_1));
        if (iVar9 < 3) {
          iVar9 = local_164 + (uint)CARRY4(local_14c,local_150);
          bVar11 = local_14c + local_150 < (uint)uVar12;
          if ((int)((iVar9 - iVar8) - (uint)bVar11) < 0 !=
              (SBORROW4(iVar9,iVar8) != SBORROW4(iVar9 - iVar8,(uint)bVar11))) {
            FUN_00003918(param_1);
            FUN_0001b532(FUN_000017a8 + param_1,*(undefined4 *)(param_1 + 0x1750),
                         *(undefined2 *)(&LAB_00001778_1 + param_1),
                         *(undefined2 *)(&LAB_0000177a_1 + param_1));
            FUN_000039f4(param_1,0);
          }
          return 0;
        }
        FUN_00003918(param_1);
        FUN_0001b566(FUN_000017a8 + param_1,*(undefined4 *)(param_1 + 0x1750),
                     *(undefined2 *)(&LAB_00001778_1 + param_1),
                     *(undefined2 *)(&LAB_0000177a_1 + param_1));
        cVar1 = *(char *)(param_1 + 0x177f);
        FUN_000039f4(param_1,1);
        *(undefined4 *)(&LAB_00001e44 + param_1) = 0;
        FUN_0001b406(param_1,-cVar1,&local_13a,&local_139);
        if (local_13a == 0) {
          if (local_139 == '\0') {
            return 0;
          }
          uVar4 = 4;
        }
        else {
          uVar4 = 5;
        }
        FUN_000039f4(param_1,uVar4);
        return 0xffffffff;
      }
      FUN_00003918(param_1);
      FUN_0001b566(FUN_000017a8 + param_1,*(undefined4 *)(param_1 + 0x1750),
                   *(undefined2 *)(&LAB_00001778_1 + param_1),
                   *(undefined2 *)(&LAB_0000177a_1 + param_1));
      cVar1 = *(char *)(param_1 + 0x177f);
      FUN_000039f4(param_1,2);
      *(undefined4 *)(&LAB_00001e44 + param_1) = 0;
      FUN_0001b406(param_1,-cVar1,&local_13a,&local_139);
      if (local_13a == 0) {
        if (local_139 == '\0') {
          return 0;
        }
        FUN_000039f4(param_1,4);
        if ((*DAT_000043bc & 7) < 3) {
          return 0xffffffff;
        }
        iVar8 = *(int *)(param_1 + 0x1730);
        puVar3 = DAT_000043bc;
        uVar4 = DAT_000042f4;
      }
      else {
        FUN_000039f4(param_1,5);
        if ((*DAT_000042e4 & 7) < 3) {
          return 0xffffffff;
        }
        iVar8 = *(int *)(param_1 + 0x1730);
        puVar3 = DAT_000042e4;
        uVar4 = DAT_000042ec;
      }
    }
    else {
      FUN_00003918(param_1);
      FUN_000039f4(param_1,4);
      if ((*DAT_000042e4 & 7) < 3) {
        return 0xffffffff;
      }
      iVar8 = *(int *)(param_1 + 0x1730);
      puVar3 = DAT_000042e4;
      uVar4 = DAT_000042f4;
    }
  }
  thunk_FUN_0001cac4(puVar3,3,uVar4,iVar8 + -1);
  return 0xffffffff;
LAB_00004102:
  iVar9 = iVar9 + 1;
  if (3 < iVar9) {
    iVar9 = 0;
  }
  iVar2 = *(int *)(param_1 + (iVar9 + 0x5d4) * 4);
  if (iVar2 != 0xff) {
    local_170 = param_1 + 0x1768;
    iVar2 = FUN_0001b114(iVar2,auStack_138,local_b0,param_1 + 0x1760);
    if (-1 < iVar2) goto LAB_0000412a;
LAB_000040f8:
    FUN_000039b0();
    thunk_FUN_000159a8();
  }
  goto LAB_00004048;
}



// FUN_000043c0 @ 000043c0 (1202 bytes, called_by=0, calls=0)

void FUN_000043c0(int param_1)

{
  undefined4 uVar1;
  uint *puVar2;
  uint *puVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  undefined4 extraout_r1_02;
  int extraout_r1_03;
  undefined4 extraout_r1_04;
  undefined4 extraout_r1_05;
  undefined4 extraout_r1_06;
  undefined4 extraout_r1_07;
  undefined4 extraout_r1_08;
  undefined4 extraout_r1_09;
  undefined4 extraout_r1_10;
  undefined1 uVar8;
  code *pcVar9;
  char cVar10;
  code *pcVar11;
  int iVar12;
  undefined8 uVar13;
  ulonglong uVar14;
  undefined4 local_d8;
  undefined4 local_d4;
  int iStack_d0;
  int local_cc;
  uint local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  uint local_b8;
  int local_b4;
  undefined1 auStack_b0 [140];
  
  pcVar9 = FUN_000017a8 + param_1;
  *(undefined1 *)(param_1 + 0x172f) = 0;
  FUN_00004d4c(pcVar9);
  local_b4 = param_1 + 0x1720;
  thunk_FUN_00021334(local_b4,1);
  FUN_00020bd0(0,*(undefined4 *)(param_1 + 8));
  uVar5 = extraout_r1;
LAB_000043f8:
  puVar3 = DAT_0000488c;
  switch(*(undefined1 *)(param_1 + 0x172f)) {
  case 0:
    if (2 < (*DAT_000045c0 & 7)) {
      thunk_FUN_0001cac4(DAT_000045c0,3,DAT_000045c4,*(int *)(param_1 + 0x1730) + -1);
      uVar5 = extraout_r1_00;
    }
    do {
      uVar13 = FUN_0001b294(param_1,uVar5,0xffffffff,0xffffffff);
      uVar5 = (undefined4)((ulonglong)uVar13 >> 0x20);
      if ((int)uVar13 << 0x1f < 0) {
        iVar6 = *(int *)(&DAT_00001738 + param_1);
        if (iVar6 != 0) {
          iVar6 = 1;
        }
        uVar8 = (undefined1)(iVar6 << 1);
        goto LAB_00004444;
      }
    } while (-1 < (int)uVar13 << 0x1e);
    uVar8 = 1;
LAB_00004444:
    *(undefined1 *)(param_1 + 0x172f) = uVar8;
    break;
  case 1:
    if (2 < (*DAT_0000488c & 7)) {
      thunk_FUN_0001cac4(DAT_0000488c,3,DAT_000048ac,*(int *)(param_1 + 0x1730) + -1);
    }
    FUN_00003b20(param_1);
    break;
  case 2:
    if (2 < (*DAT_000045c0 & 7)) {
      iStack_d0 = *(int *)(param_1 + 0x1730) + -1;
      local_d4 = DAT_000045c8;
      local_cc = param_1 + 0x173c;
      local_c8 = CONCAT22(local_c8._2_2_,0x301);
      local_d8 = DAT_000045cc;
      thunk_FUN_00007b60(DAT_000045c0,&DAT_000024c0,&local_d8,0);
      uVar5 = extraout_r1_02;
    }
    pcVar11 = FUN_00001100 + param_1;
    local_c8 = 0x84;
    local_c4 = 0;
    FUN_00015eb4(pcVar11,uVar5,0,0);
    FUN_0000332c(*(undefined1 *)(param_1 + 0x1730));
    uVar13 = FUN_0001b0be(pcVar9);
    iVar6 = (int)((ulonglong)uVar13 >> 0x20);
    *(int *)(param_1 + 0x1750) = (int)uVar13;
    *(undefined4 *)(param_1 + 0x1754) = 0xff;
    *(undefined4 *)(param_1 + 0x1758) = 0xff;
    *(undefined4 *)(param_1 + 0x175c) = 0xff;
    cVar10 = '\0';
    iVar12 = 0xfa;
    while( true ) {
      iVar4 = FUN_0001b294(param_1,iVar6,0xffffffff,0xffffffff);
      iVar6 = iVar4 << 0x1f;
      if (iVar6 < 0) break;
      if (iVar4 << 0x1e < 0) {
        uVar8 = 1;
        goto LAB_000044fc;
      }
      if (iVar4 << 0x1b < 0) goto LAB_00004500;
      if (iVar4 << 0x1a < 0) {
        if (cVar10 == '\0') {
          uVar5 = FUN_0001b0be(pcVar9);
          *(undefined4 *)(param_1 + 0x1750) = uVar5;
        }
        local_c0 = *(undefined4 *)(param_1 + 0x1734);
        local_bc = *(undefined4 *)(&DAT_00001738 + param_1);
        uVar5 = FUN_00003580();
        local_b8 = (uint)*(byte *)(param_1 + 0x1750);
        local_c4 = FUN_00003574(*(undefined4 *)(param_1 + 0x1730));
        local_c8 = local_b8;
        FUN_00020176(auStack_b0,local_c0,local_bc,uVar5);
        FUN_0001b126(2,auStack_b0,param_1 + 0x1760,0);
        FUN_0001596c(0x21,0);
        FUN_000201b4(auStack_b0,*(undefined1 *)(param_1 + 0x1730));
        uVar13 = FUN_0001b126(*(undefined4 *)(param_1 + 0x1750),auStack_b0,param_1 + 0x1760,0);
        iVar6 = (int)((ulonglong)uVar13 >> 0x20);
        if (-1 < (int)uVar13) {
          uVar8 = 3;
          goto LAB_000044fc;
        }
        iVar12 = iVar12 + -1;
        if (iVar12 == 0) {
          local_c8 = 0xccd;
          local_c4 = 0;
          FUN_00015eb4(pcVar11,iVar6,0,0);
          iVar6 = extraout_r1_03;
        }
        cVar10 = cVar10 + '\x01';
      }
    }
    iVar6 = *(int *)(&DAT_00001738 + param_1);
    if (iVar6 != 0) {
      iVar6 = 1;
    }
    uVar8 = (undefined1)(iVar6 << 1);
LAB_000044fc:
    *(undefined1 *)(param_1 + 0x172f) = uVar8;
LAB_00004500:
    thunk_FUN_00020f72(pcVar11);
    break;
  case 3:
    if (2 < (*DAT_0000488c & 7)) {
      local_c8 = *(uint *)(param_1 + 0x1750);
      iStack_d0 = *(int *)(param_1 + 0x1730) + -1;
      local_d4 = DAT_00004890;
      local_cc = param_1 + 0x173c;
      local_c4 = CONCAT22(local_c4._2_2_,0x301);
      local_d8 = DAT_00004894;
      thunk_FUN_00007b60(DAT_0000488c,0x2cc0,&local_d8,0);
    }
    FUN_00020890(param_1 + 0x1660);
    *(undefined1 *)(param_1 + 0x172c) = 1;
    (&LAB_00001774_1)[param_1] = 0;
    FUN_0001b22e(param_1);
    (&LAB_00001774)[param_1] = 0;
    uVar5 = FUN_0001b358();
    *(undefined4 *)(param_1 + 6000) = uVar5;
    uVar13 = FUN_0001b358();
    uVar5 = (undefined4)((ulonglong)uVar13 >> 0x20);
    *(undefined4 *)(&LAB_00001776_1 + param_1) = 0;
    *(undefined4 *)(param_1 + 0x177f) = 0;
    *(undefined4 *)(&LAB_0000177a_1 + param_1) = 0;
    *(undefined4 *)(param_1 + 0x1790) = 0;
    *(undefined8 *)(param_1 + 0x1788) = uVar13;
    cVar10 = (&LAB_00001776)[param_1];
    *(undefined1 *)(param_1 + 0x17a0) = 0;
    *(undefined4 *)(&LAB_00001e44 + param_1) = 0;
    pcVar11 = FUN_00001100 + param_1;
    if (cVar10 != '\0') {
      if (2 < (*puVar3 & 7)) {
        thunk_FUN_0001cac4(DAT_0000488c,3,DAT_00004898,*(int *)(param_1 + 0x1730) + -1);
        uVar5 = extraout_r1_04;
      }
      uVar1 = DAT_0000489c;
      puVar2 = DAT_0000488c;
      if (FUN_00001748[param_1 + 4] == (code)0x0) {
        FUN_0001386c();
        FUN_0001b32c(param_1,2);
        local_c8 = 0;
        local_c4 = 0;
        FUN_00015eb4(pcVar11,extraout_r1_05,0x50000,0);
        uVar5 = extraout_r1_06;
        uVar1 = DAT_0000489c;
        puVar2 = DAT_0000488c;
      }
      do {
        iVar6 = FUN_0001b294(param_1,uVar5,99,0);
        if (iVar6 << 0x1f < 0) {
          iVar6 = *(int *)(&DAT_00001738 + param_1);
          if (iVar6 != 0) {
            iVar6 = 1;
          }
          uVar8 = (undefined1)(iVar6 << 1);
          goto LAB_000046dc;
        }
        if (iVar6 << 0x1b < 0) goto LAB_000046e0;
        if (iVar6 << 0x1a < 0) {
          if ((*puVar3 & 6) != 0) {
            thunk_FUN_0001cac4(puVar2,2,uVar1,*(int *)(param_1 + 0x1730) + -1);
          }
          *(undefined1 *)(param_1 + 0x172d) = 1;
          thunk_FUN_00020f72(pcVar11);
        }
        uVar13 = FUN_00003f7c(param_1);
        uVar5 = (undefined4)((ulonglong)uVar13 >> 0x20);
      } while ((int)uVar13 == 0);
      uVar8 = 2;
LAB_000046dc:
      *(undefined1 *)(param_1 + 0x172f) = uVar8;
LAB_000046e0:
      thunk_FUN_00020f72(pcVar11);
    }
    cVar10 = *(char *)(param_1 + 0x172f);
    FUN_00001748[param_1 + 4] = (code)0x0;
    if (cVar10 == '\x03') {
      FUN_0001b32c(param_1,2);
      uVar5 = extraout_r1_07;
      if (2 < (*puVar3 & 7)) {
        thunk_FUN_0001cac4(DAT_0000488c,3,DAT_000048a0,*(int *)(param_1 + 0x1730) + -1);
        uVar5 = extraout_r1_08;
      }
      do {
        uVar14 = FUN_0001b294(param_1,uVar5,99,0);
        if ((uVar14 & 2) != 0) {
          uVar8 = 1;
          goto LAB_0000472e;
        }
        if ((uVar14 & 1) != 0) goto LAB_0000479e;
        if ((uVar14 & 8) != 0) {
          local_c8 = 0;
          local_c4 = 0;
          FUN_00015eb4(pcVar11,(int)(uVar14 >> 0x20),0x10000,0);
        }
        if ((uVar14 & 0x10) != 0) {
          thunk_FUN_00020f72(pcVar11);
        }
        if ((uVar14 & 0x20) != 0) {
          thunk_FUN_00020f72(pcVar11);
          if (*(char *)(param_1 + 0x172f) != '\x03') goto LAB_00004738;
          uVar5 = 3;
          if (2 < (*puVar3 & 7)) {
            thunk_FUN_0001cac4(DAT_0000488c,3,DAT_000048a4,*(int *)(param_1 + 0x1730) + -1);
            uVar5 = extraout_r1_09;
          }
          *(undefined1 *)(param_1 + 0x172e) = 1;
          local_c8 = 0;
          local_c4 = 0;
          FUN_00015eb4(pcVar11,uVar5,0x10000,0);
          uVar5 = extraout_r1_10;
          goto LAB_00004828;
        }
        uVar13 = FUN_00003f7c(param_1);
        uVar5 = (undefined4)((ulonglong)uVar13 >> 0x20);
      } while ((int)uVar13 == 0);
      goto LAB_000047e2;
    }
    goto LAB_00004738;
  }
  goto switchD_00004400_caseD_4;
  while( true ) {
    uVar13 = FUN_00003f7c(param_1);
    uVar5 = (undefined4)((ulonglong)uVar13 >> 0x20);
    if ((int)uVar13 != 0) goto LAB_000047e2;
    if ((uVar7 & 0x20) != 0) break;
LAB_00004828:
    uVar7 = FUN_0001b294(param_1,uVar5,99,0);
    if ((uVar7 & 1) != 0) goto LAB_0000479e;
  }
  if (2 < (*puVar3 & 7)) {
    FUN_0001cab2(DAT_0000488c,3,DAT_000048a8);
  }
  FUN_00001748[param_1 + 4] = (code)0x1;
LAB_000047e2:
  uVar8 = 2;
LAB_0000472e:
  *(undefined1 *)(param_1 + 0x172f) = uVar8;
  thunk_FUN_00020f72(pcVar11);
LAB_00004738:
  FUN_0001b266(param_1,0x41);
  FUN_0001b266(param_1,0x40);
  FUN_0001b32c(param_1,1);
  *(undefined2 *)(param_1 + 0x172c) = 0;
  *(undefined1 *)(param_1 + 0x172e) = 0;
switchD_00004400_caseD_4:
  thunk_FUN_00020f72(FUN_00001100 + param_1);
  FUN_0002133a(local_b4,0x20);
  uVar5 = extraout_r1_01;
  goto LAB_000043f8;
LAB_0000479e:
  iVar6 = *(int *)(&DAT_00001738 + param_1);
  if (iVar6 != 0) {
    iVar6 = 1;
  }
  uVar8 = (undefined1)(iVar6 << 1);
  goto LAB_0000472e;
}



// FUN_000048b0 @ 000048b0 (158 bytes, called_by=0, calls=0)

int FUN_000048b0(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = DAT_00004950;
  iVar2 = param_2 * 0x1e80;
  *(undefined4 *)(DAT_00004950 + iVar2) = param_1;
  FUN_0001b2f8(iVar2 + 0x1760 + iVar1);
  FUN_0001b2f8(iVar2 + 0x1768 + iVar1);
  iVar3 = iVar1 + iVar2;
  *(int *)(iVar3 + 0x1730) = param_2 + 1;
  FUN_00020838(iVar2 + 0x1660 + iVar1,iVar2 + 0x1138 + iVar1,0x42,0x14);
  FUN_0002132a(iVar2 + 0x1720 + iVar1);
  FUN_00020f5a(FUN_00001100 + iVar1 + iVar2,DAT_00004954,0);
  FUN_000208e2(iVar2 + 0x1690 + iVar1);
  FUN_00020f5a(iVar2 + 0x16a8 + iVar1,DAT_00004958,0);
  *(undefined4 *)(iVar3 + 0x1e3c) = param_1;
  *(undefined4 *)(iVar3 + 0x1e40) = DAT_0000495c;
  FUN_00013a5c(iVar2 + 0x1e38 + iVar1);
  return iVar3;
}



// FUN_00004960 @ 00004960 (430 bytes, called_by=0, calls=0)

undefined4 FUN_00004960(int param_1,undefined4 *param_2)

{
  undefined2 uVar1;
  byte bVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  undefined8 uVar10;
  undefined4 local_80;
  undefined4 local_7c;
  int iStack_78;
  uint local_74;
  uint local_70;
  undefined4 uStack_6c;
  undefined2 local_64;
  undefined1 local_62;
  undefined1 auStack_61 [65];
  
  FUN_00014d3c(param_1 + 0x1690,param_2,0xffffffff,0xffffffff);
  if (*(char *)(param_1 + 0x172f) != '\x03') goto LAB_0000498e;
  FUN_000168a4(auStack_61,0,0x3f);
  local_64 = 0x301;
  local_62 = *(undefined1 *)param_2;
  switch(*(undefined1 *)(param_1 + 0x16a4)) {
  case 0:
    if ((*DAT_00004b14 & 6) != 0) {
      iVar7 = *(int *)(param_1 + 0x1730);
      bVar2 = *(byte *)(param_1 + 0x16a4);
      uVar4 = 2;
      uVar8 = DAT_00004b18;
LAB_000049dc:
      local_70 = (uint)bVar2;
      FUN_0001cad8(DAT_00004b14,uVar4,uVar8,iVar7 + -1);
    }
    break;
  case 1:
    FUN_000168a4(param_1 + 0x16e0,0,0x3f);
    uVar10 = FUN_00014bdc(param_1 + 0x1660,&local_64,0,0);
    if ((int)uVar10 == 0) {
      local_70 = 0;
      uStack_6c = 0;
      FUN_00015eb4(param_1 + 0x16a8,(int)((ulonglong)uVar10 >> 0x20),0x8000,0);
      *(undefined1 *)(param_1 + 0x16a4) = 2;
    }
    goto LAB_00004994;
  case 2:
    iVar7 = FUN_00020faa(param_1 + 0x16a8);
    if (iVar7 != 0) {
      if ((*DAT_00004b14 & 7) != 0) {
        iStack_78 = *(int *)(param_1 + 0x1730);
        bVar2 = *(byte *)(param_1 + 0x171f);
        local_70 = (uint)*(byte *)(param_1 + 0x16a4);
        local_7c = DAT_00004b1c;
        puVar3 = &DAT_00002840;
LAB_00004a6a:
        local_74 = (uint)bVar2;
        iStack_78 = iStack_78 + -1;
        local_80 = 5;
        thunk_FUN_00007b60(DAT_00004b14,puVar3,&local_80,0);
      }
      break;
    }
    goto LAB_00004994;
  case 3:
    if ((uint)*(byte *)(param_1 + 0x171f) == (uint)*(byte *)(param_1 + 0x16e0)) {
      puVar9 = (undefined4 *)(param_1 + 0x16e0);
      do {
        puVar6 = param_2;
        puVar5 = puVar9;
        uVar8 = puVar5[1];
        puVar9 = puVar5 + 2;
        *puVar6 = *puVar5;
        puVar6[1] = uVar8;
        param_2 = puVar6 + 2;
      } while (puVar9 != (undefined4 *)(param_1 + 0x1718));
      puVar6[2] = *puVar9;
      uVar1 = *(undefined2 *)(puVar5 + 3);
      *(undefined1 *)((int)puVar6 + 0xe) = *(undefined1 *)((int)puVar5 + 0xe);
      *(undefined2 *)(puVar6 + 3) = uVar1;
      FUN_0001b22e(param_1);
      uVar8 = 0x3f;
      goto LAB_00004aae;
    }
    if ((*DAT_00004b14 & 6) != 0) {
      iStack_78 = *(int *)(param_1 + 0x1730);
      bVar2 = *(byte *)(param_1 + 0x171f);
      local_7c = DAT_00004b20;
      puVar3 = &DAT_00002880;
      local_70 = (uint)*(byte *)(param_1 + 0x16e0);
      goto LAB_00004a6a;
    }
    break;
  default:
    if ((*DAT_00004b14 & 7) != 0) {
      iVar7 = *(int *)(param_1 + 0x1730);
      bVar2 = *(byte *)(param_1 + 0x16a4);
      uVar4 = 1;
      uVar8 = DAT_00004b24;
      goto LAB_000049dc;
    }
  }
LAB_0000498e:
  FUN_0001b22e(param_1);
LAB_00004994:
  uVar8 = 0xfffffff5;
LAB_00004aae:
  FUN_00014e2c(param_1 + 0x1690);
  return uVar8;
}



// FUN_00004b28 @ 00004b28 (216 bytes, called_by=0, calls=0)

undefined4 FUN_00004b28(int param_1,byte *param_2)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_80;
  undefined4 local_7c;
  int iStack_78;
  uint local_74;
  uint uStack_70;
  char local_64 [72];
  
  FUN_00014d3c(param_1 + 0x1690,param_2,0xffffffff,0xffffffff);
  bVar1 = *param_2;
  if (*(char *)(param_1 + 0x172f) == '\x03') {
    FUN_000168a4(local_64 + 2,0,0x40);
    local_64[0] = param_2[1] + 2;
    local_64[1] = 1;
    FUN_00000820(local_64 + 2,param_2);
    if (((*(char *)(param_1 + 0x16a4) != '\0') && (*(char *)(param_1 + 0x16a4) != '\x01')) &&
       ((*DAT_00004c00 & 6) != 0)) {
      iStack_78 = *(int *)(param_1 + 0x1730) + -1;
      uStack_70 = (uint)*(byte *)(param_1 + 0x16a4);
      local_7c = DAT_00004c04;
      local_80 = 5;
      local_74 = (uint)bVar1;
      thunk_FUN_00007b60(DAT_00004c00,&DAT_00002880,&local_80,0);
    }
    FUN_0001b22e(param_1);
    iVar2 = FUN_00014bdc(param_1 + 0x1660,local_64,0,0);
    if (iVar2 == 0) {
      *(byte *)(param_1 + 0x171f) = bVar1;
      *(undefined1 *)(param_1 + 0x16a4) = 1;
      uVar3 = 0;
      goto LAB_00004bf0;
    }
  }
  else {
    FUN_0001b22e(param_1);
  }
  uVar3 = 0xfffffff5;
LAB_00004bf0:
  FUN_00014e2c(param_1 + 0x1690);
  return uVar3;
}



// FUN_00004c88 @ 00004c88 (136 bytes, called_by=0, calls=0)

void FUN_00004c88(void)

{
  uint *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined *puVar4;
  int iVar5;
  
  puVar1 = DAT_00004d10;
  if (2 < (*DAT_00004d10 & 7)) {
    FUN_0001cab2(DAT_00004d10,3,DAT_00004d14);
  }
  FUN_000032cc();
  if (2 < (*puVar1 & 7)) {
    FUN_0001cab2(DAT_00004d10,3,DAT_00004d18);
  }
  FUN_00002d44();
  uVar2 = DAT_00004d24;
  puVar4 = DAT_00004d20;
  FUN_000083dc(DAT_00004d1c);
  FUN_00008330(DAT_00004d28);
  iVar5 = 0;
  do {
    uVar3 = FUN_000153fc(puVar4 + 0x10,puVar4 + 0xc0,0x1000,uVar2,puVar4,0,0,9,0);
    iVar5 = iVar5 + 1;
    *(undefined4 *)(puVar4 + 0xc) = uVar3;
    puVar4 = &DAT_00001e80 + (int)puVar4;
  } while (iVar5 != 4);
  return;
}



// FUN_00004d2c @ 00004d2c (28 bytes, called_by=0, calls=0)

void FUN_00004d2c(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  uVar1 = DAT_00004d48;
  puVar3 = param_1 + -0x4e;
  do {
    uVar2 = FUN_00001498(*puVar3,uVar1);
    puVar4 = puVar3 + 2;
    *puVar3 = uVar2;
    puVar3 = puVar4;
  } while (puVar4 != param_1);
  return;
}



// FUN_00004d4c @ 00004d4c (78 bytes, called_by=0, calls=0)

void FUN_00004d4c(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1;
  iVar2 = param_1;
  do {
    *(undefined4 *)(iVar2 + 0x520) = 0;
    *(undefined4 *)(iVar2 + 0x298) = 0;
    *(undefined4 *)(iVar2 + 0x3dc) = 0;
    iVar2 = iVar2 + 8;
    *(undefined4 *)(iVar1 + 0x20) = 0;
    *(undefined4 *)(iVar1 + 0x24) = 0;
    iVar1 = iVar1 + 0x10;
  } while (iVar2 != param_1 + 0x138);
  FUN_00020f5a(param_1 + 0x658,DAT_00004d9c,0,iVar2,param_1,param_2,param_3);
  FUN_00015eb4(param_1 + 0x658);
  return;
}



// FUN_00004e04 @ 00004e04 (34 bytes, called_by=0, calls=0)

void FUN_00004e04(int param_1)

{
  undefined4 auStack_18 [5];
  
  auStack_18[3] = DAT_00004e28[3];
  auStack_18[2] = DAT_00004e28[2];
  auStack_18[1] = DAT_00004e28[1];
  auStack_18[0] = *DAT_00004e28;
  FUN_000146a8(auStack_18[param_1]);
  return;
}



// FUN_00004e2c @ 00004e2c (92 bytes, called_by=0, calls=0)

undefined4 FUN_00004e2c(undefined4 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  puVar3 = PTR_DAT_00004e90;
  puVar2 = PTR_DAT_00004e8c;
  puVar1 = PTR_DAT_00004e88;
  iVar5 = 0;
  do {
    iVar4 = FUN_00004e04(iVar5);
    iVar6 = *(int *)(*(int *)(iVar4 + 0x10) + 0x88);
    FUN_0001d11a(param_1,puVar1,iVar5,*(undefined4 *)(iVar6 + 0x1734));
    FUN_0001d11a(param_1,puVar2,iVar5,*(undefined4 *)(&DAT_00001738 + iVar6));
    iVar4 = iVar5 + 1;
    FUN_0001d11a(param_1,puVar3,iVar5,iVar6 + 0x173c);
    iVar5 = iVar4;
  } while (iVar4 != 4);
  return 0;
}



// FUN_00005038 @ 00005038 (220 bytes, called_by=0, calls=0)

undefined4 FUN_00005038(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 *puVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  undefined8 uVar10;
  int aiStack_88 [4];
  undefined1 auStack_78 [10];
  undefined1 auStack_6e [10];
  undefined1 auStack_64 [10];
  undefined1 auStack_5a [10];
  undefined1 auStack_50 [10];
  undefined1 auStack_46 [10];
  undefined1 auStack_3c [10];
  undefined1 auStack_32 [14];
  
  iVar5 = 0;
  piVar6 = aiStack_88;
  do {
    iVar2 = FUN_00004e04(iVar5);
    iVar5 = iVar5 + 1;
    *piVar6 = *(int *)(*(int *)(iVar2 + 0x10) + 0x88);
    piVar6 = piVar6 + 1;
  } while (iVar5 != 4);
  lVar9 = thunk_FUN_00015da4();
  uVar1 = DAT_00005114;
  iVar5 = 4;
  do {
    iVar2 = 0;
    iVar8 = (iVar5 + 0x2f5) * 8;
    piVar6 = aiStack_88;
    do {
      iVar7 = *piVar6;
      iVar4 = *(int *)(iVar7 + iVar8);
      puVar3 = auStack_78 + iVar2;
      if (*(int *)(iVar7 + iVar8 + 4) < (int)(uint)(iVar4 == 0)) {
        FUN_00016a4c(puVar3,uVar1);
      }
      else {
        FUN_00016a0c(puVar3,DAT_00005118,
                     (int)(((uint)(lVar9 * 1000) >> 0xf |
                           (int)((ulonglong)(lVar9 * 1000) >> 0x20) * 0x20000) - iVar4) / 1000);
      }
      uVar10 = FUN_00000c1c(*(undefined4 *)(iVar7 + (iVar5 + 0x72e) * 4));
      puVar3 = auStack_50 + iVar2;
      iVar2 = iVar2 + 10;
      FUN_00016a0c(puVar3,DAT_0000511c,(int)uVar10,(int)((ulonglong)uVar10 >> 0x20));
      piVar6 = piVar6 + 1;
    } while (iVar2 != 0x28);
    iVar2 = iVar5 + 2;
    FUN_0001d11a(param_1,DAT_00005120,iVar5,auStack_50,auStack_78,auStack_46,auStack_6e,auStack_3c,
                 auStack_64,auStack_32,auStack_5a);
    iVar5 = iVar2;
  } while (iVar2 != 0x52);
  return 0;
}



// FUN_00005124 @ 00005124 (164 bytes, called_by=0, calls=0)

undefined4 FUN_00005124(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  uint *puVar1;
  undefined4 uVar2;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined2 local_1c;
  
  puVar1 = DAT_000051c8;
  if (param_2 == 3) {
    if (param_4 != 0x40) {
      if (((*DAT_000051c8 & 7) != 0) &&
         (FUN_0001cac4(DAT_000051c8,1,DAT_000051d0), (*puVar1 & 7) != 0)) {
        local_24 = DAT_000051d4;
        local_20 = DAT_000051d8;
        local_1c = 0x200;
        local_28 = DAT_000051dc;
        FUN_00007b60(puVar1,param_4 << 0x14 | 0x1c40,&local_28,param_5);
      }
      return 0xffffffea;
    }
    if (param_3 == 1) {
      uVar2 = FUN_00004b28(*(undefined4 *)(*(int *)(param_1 + 0x10) + 0x88),param_5 + 1);
      return uVar2;
    }
    if (param_3 == 2) {
      uVar2 = FUN_000202cc(param_1,2,param_5 + 1,*(int *)(param_1 + 0x10) + 0x47);
      return uVar2;
    }
  }
  else if ((*DAT_000051c8 & 6) != 0) {
    FUN_0001cab2(DAT_000051c8,2,DAT_000051cc);
  }
  return 0xffffff7a;
}



// FUN_000055d8 @ 000055d8 (40 bytes, called_by=0, calls=0)

void FUN_000055d8(undefined4 param_1,int param_2,int param_3)

{
  param_3 = param_3 + param_2;
  for (; param_2 != param_3; param_2 = param_2 + 1) {
  }
  return;
}



// FUN_00005604 @ 00005604 (874 bytes, called_by=0, calls=0)

byte * FUN_00005604(undefined4 *param_1,undefined **param_2,uint param_3,uint param_4,uint *param_5)

{
  bool bVar1;
  byte bVar2;
  char cVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte bVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint *puVar10;
  undefined4 *puVar11;
  uint *puVar12;
  uint uVar13;
  int iVar14;
  undefined4 *puVar15;
  uint uVar16;
  uint uVar17;
  undefined4 uVar18;
  uint uVar19;
  uint local_68;
  int local_54;
  byte local_48 [16];
  byte abStack_38 [20];
  
  uVar8 = param_3 & 4;
  local_54 = ((param_3 << 0x1a) >> 0x1d) + 1;
  if (((uint)param_1 & 3) != 0) {
    return (byte *)0xfffffff2;
  }
  puVar10 = param_1 + 1;
  if (param_1 == (undefined4 *)0x0) {
    puVar10 = (uint *)(((uint)param_2 & 7) + 4);
    param_2 = (undefined **)(8 - ((uint)param_2 & 7));
  }
  else if (param_2 < &NMI) {
    return (byte *)0xffffffe4;
  }
  iVar14 = 0;
  pbVar4 = (byte *)(param_4 - 1);
  uVar16 = 4;
  bVar6 = 0xff;
  cVar3 = '\0';
  uVar13 = 0;
  uVar17 = 0;
  uVar9 = 4;
  local_68 = param_4;
LAB_00005664:
  if (param_1 != (undefined4 *)0x0) {
    *puVar10 = local_68;
  }
  if ((local_54 < 1) && ((local_68 < DAT_000058d4 || (DAT_000058d8 <= local_68)))) {
    uVar19 = (int)puVar10 - (int)param_1;
    bVar2 = (byte)(uVar19 >> 2);
    if ((int)(param_3 << 0x1e) < 0) {
      bVar1 = false;
      goto LAB_00005854;
    }
    if (0xf < uVar13) {
      return (byte *)0xffffffea;
    }
    if (param_1 == (undefined4 *)0x0) {
LAB_000058a8:
      param_2 = (undefined **)((int)param_2 + 2);
      if (uVar8 == 0) {
        iVar7 = FUN_00000140(local_68);
        param_2 = (undefined **)((int)param_2 + iVar7);
      }
    }
    else {
      local_48[uVar13] = bVar2;
      abStack_38[uVar13] = bVar6;
LAB_000056b0:
      cVar3 = cVar3 + '\x01';
    }
  }
  else {
    if (-1 < (int)(param_3 << 0x1e)) goto LAB_0000588a;
    uVar19 = (int)puVar10 - (int)param_1;
    bVar2 = (byte)(uVar19 >> 2);
    bVar1 = true;
LAB_00005854:
    if ((0x1ff < uVar19) || (0xf < uVar13)) {
      return (byte *)0xffffffea;
    }
    if (param_1 == (undefined4 *)0x0) {
      if (!bVar1) goto LAB_000058a8;
      param_2 = (undefined **)((int)param_2 + 1);
    }
    else {
      local_48[uVar13] = bVar2;
      abStack_38[uVar13] = bVar6;
      if (!bVar1) goto LAB_000056b0;
      local_48[uVar13] = bVar2 | 0x80;
      iVar14 = iVar14 + 1;
    }
  }
  uVar13 = uVar13 + 1;
LAB_0000588a:
  puVar10 = puVar10 + 1;
  uVar19 = uVar17;
switchD_000056e4_caseD_4c:
  while( true ) {
    while( true ) {
      while( true ) {
        pbVar5 = pbVar4;
        pbVar4 = pbVar5 + 1;
        bVar2 = *pbVar4;
        if (bVar2 == 0) {
          uVar9 = (int)puVar10 - (int)param_1;
          if (0x3ff < uVar9) {
            return (byte *)0xffffffea;
          }
          if (param_1 != (undefined4 *)0x0) {
            *param_1 = 0;
            *(char *)param_1 = (char)(uVar9 >> 2);
            if (uVar8 == 0) {
              *(char *)((int)param_1 + 1) = cVar3;
            }
            else {
              *(char *)((int)param_1 + 3) = cVar3;
            }
            *(char *)((int)param_1 + 2) = (char)iVar14;
            if (iVar14 != 0) {
              pbVar4 = local_48;
              for (uVar9 = 0; uVar13 != uVar9; uVar9 = uVar9 + 1) {
                puVar12 = puVar10;
                if ((int)((uint)*pbVar4 << 0x18) < 0) {
                  if (param_2 < (undefined **)((int)puVar10 + (1 - (int)param_1))) {
                    return (byte *)0xffffffe4;
                  }
                  puVar12 = (uint *)((int)puVar10 + 1);
                  *(byte *)puVar10 = *pbVar4 & 0x7f;
                }
                pbVar4 = pbVar4 + 1;
                puVar10 = puVar12;
              }
            }
            pbVar4 = local_48;
            uVar9 = 0;
            do {
              if (uVar13 == uVar9) {
                return (byte *)((int)puVar10 - (int)param_1);
              }
              if ((iVar14 == 0) || (-1 < (char)*pbVar4)) {
                if (uVar8 == 0) {
                  local_68 = param_1[*pbVar4];
                  param_1[*pbVar4] = 0;
                  iVar7 = FUN_00000140(local_68);
                  iVar7 = iVar7 + 1;
                }
                else {
                  *(byte *)puVar10 = abStack_38[uVar9];
                  iVar7 = 0;
                  puVar10 = (uint *)((int)puVar10 + 1);
                }
                if (param_2 < (undefined **)((1 - (int)param_1) + iVar7 + (int)puVar10)) {
                  return (byte *)0xffffffe4;
                }
                *(byte *)puVar10 = *pbVar4;
                FUN_00000820((byte *)((int)puVar10 + 1),local_68);
                puVar10 = (uint *)((byte *)((int)puVar10 + 1) + iVar7);
              }
              uVar9 = uVar9 + 1;
              pbVar4 = pbVar4 + 1;
            } while( true );
          }
          return (byte *)((int)param_2 + (uVar9 - 8));
        }
        if (uVar19 != 0) break;
        if (bVar2 == 0x25) {
          bVar6 = bVar6 + 1;
          uVar19 = 1;
          goto switchD_000056e4_caseD_74;
        }
      }
      if (0x7a < bVar2) goto switchD_000056e4_caseD_4d;
      if (0x4b < bVar2) goto switchD_000056e4_switchD;
      if (0x47 < bVar2) goto switchD_000056e4_caseD_4d;
      if (bVar2 < 0x2a) break;
      uVar17 = 1 << (uint)(byte)(bVar2 - 0x2a);
      if ((uVar17 & 0xffda) == 0) {
        if ((uVar17 & 0x38800000) != 0) goto switchD_000056e4_caseD_61;
        uVar17 = uVar17 & 1;
        uVar19 = uVar17;
        if (uVar17 != 0) {
          uVar19 = 0;
          goto LAB_00005742;
        }
      }
    }
    if (bVar2 == 0x25) break;
    if (0x25 < bVar2) goto switchD_000056e4_caseD_4d;
    if (bVar2 != 0x20) {
      uVar19 = (uint)(bVar2 == 0x23);
    }
  }
  bVar6 = bVar6 - 1;
  goto switchD_000056e4_caseD_4d;
switchD_000056e4_switchD:
  switch(bVar2) {
  case 0x4c:
  case 0x68:
  case 0x6c:
    goto switchD_000056e4_caseD_4c;
  default:
switchD_000056e4_caseD_4d:
    uVar19 = 0;
    goto switchD_000056e4_caseD_4c;
  case 0x58:
  case 99:
  case 100:
  case 0x69:
  case 0x6f:
  case 0x75:
  case 0x78:
    if (*pbVar5 == 0x6c) {
      uVar19 = 0;
      if (pbVar5[-1] != 0x6c) break;
      uVar9 = 8;
      goto LAB_00005796;
    }
    uVar19 = 0;
    uVar17 = uVar19;
    goto LAB_00005742;
  case 0x61:
  case 0x65:
  case 0x66:
  case 0x67:
switchD_000056e4_caseD_61:
    puVar15 = (undefined4 *)((int)param_5 + 7U & 0xfffffff8);
    param_5 = puVar15 + 2;
    uVar18 = puVar15[1];
    puVar11 = (undefined4 *)((uint)((int)puVar10 + 7) & 0xfffffff8);
    if (param_1 != (undefined4 *)0x0) {
      if (param_2 < (undefined **)((8 - (int)param_1) + (int)puVar11)) {
        return (byte *)0xffffffe4;
      }
      *puVar11 = *puVar15;
      puVar11[1] = uVar18;
    }
    puVar10 = puVar11 + 2;
    uVar19 = 0;
  case 0x6a:
    uVar9 = 8;
    uVar16 = uVar9;
    goto switchD_000056e4_caseD_4c;
  case 0x6e:
  case 0x70:
    uVar19 = 0;
    break;
  case 0x73:
    break;
  case 0x74:
  case 0x7a:
switchD_000056e4_caseD_74:
    uVar9 = 4;
    uVar16 = uVar9;
    goto switchD_000056e4_caseD_4c;
  }
  uVar9 = 4;
LAB_00005796:
  uVar16 = uVar9;
  uVar17 = 0;
LAB_00005742:
  puVar10 = (uint *)(uVar16 * ((uint)((int)puVar10 + (uVar16 - 1)) / uVar16));
  if (param_1 == (undefined4 *)0x0) {
    if (uVar19 != 0) goto LAB_00005834;
    if (uVar9 != 4) {
      if (uVar9 != 8) {
        return (byte *)0xffffffea;
      }
      param_5 = (uint *)((int)param_5 + 7U & 0xfffffff8);
      goto LAB_00005810;
    }
  }
  else {
    if (param_2 < (undefined **)((uVar9 - (int)param_1) + (int)puVar10)) {
      return (byte *)0xffffffe4;
    }
    if (uVar19 != 0) goto LAB_00005834;
    if (uVar9 != 4) {
      if (uVar9 != 8) {
        return (byte *)0xffffffea;
      }
      param_5 = (uint *)((int)param_5 + 7U & 0xfffffff8);
      uVar9 = param_5[1];
      *puVar10 = *param_5;
      puVar10[1] = uVar9;
LAB_00005810:
      param_5 = param_5 + 2;
      puVar10 = puVar10 + 2;
      uVar9 = 8;
      uVar19 = uVar17;
      goto switchD_000056e4_caseD_4c;
    }
    *puVar10 = *param_5;
  }
  param_5 = param_5 + 1;
  puVar10 = puVar10 + 1;
  uVar9 = 4;
  uVar19 = uVar17;
  goto switchD_000056e4_caseD_4c;
LAB_00005834:
  local_54 = local_54 + -1;
  local_68 = *param_5;
  param_5 = param_5 + 1;
  goto LAB_00005664;
}



// FUN_000059a8 @ 000059a8 (946 bytes, called_by=0, calls=0)

int FUN_000059a8(byte *param_1,int param_2,code *param_3,undefined4 param_4,uint param_5,int param_6
                ,uint param_7)

{
  byte bVar1;
  byte bVar2;
  short sVar3;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  byte bVar8;
  byte extraout_r1;
  byte *pbVar9;
  byte *pbVar10;
  uint uVar11;
  byte *pbVar12;
  undefined4 uVar13;
  byte *pbVar14;
  bool bVar15;
  undefined8 uVar16;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined2 local_88;
  uint local_7c;
  uint local_78;
  int local_74;
  byte *local_70;
  int local_6c;
  uint local_68;
  uint local_64;
  undefined4 local_60;
  uint local_5c;
  byte *local_58;
  code *local_54;
  byte abStack_50 [7];
  byte local_49;
  byte abStack_48 [16];
  byte abStack_38 [16];
  byte abStack_28 [4];
  
  bVar1 = param_1[2];
  pbVar14 = (byte *)(uint)bVar1;
  local_68 = (param_5 << 0x1c) >> 0x1f;
  pbVar4 = param_1;
  local_60 = param_4;
  local_54 = param_3;
  if (param_2 == 0) {
    bVar8 = param_1[1];
    pbVar4 = pbVar14 + (uint)*param_1 * 4 + (int)param_1;
    for (uVar11 = 0; uVar11 < bVar8; uVar11 = uVar11 + 1) {
      iVar6 = FUN_00000140(pbVar4 + 1);
      pbVar4 = pbVar4 + 1 + iVar6 + 1;
    }
    param_2 = (int)pbVar4 - (int)param_1;
  }
  local_64 = (uint)param_1[3];
  pbVar10 = pbVar14;
  if ((pbVar14 == (byte *)0x0) || ((param_5 & 1) == 0)) {
    if ((local_64 == 0) || ((param_5 & 2) == 0)) {
      if (local_54 == (code *)0x0) {
        return param_2;
      }
      (*local_54)(param_1,param_2,local_60);
      return param_2;
    }
    local_70 = (byte *)(uint)*param_1;
    local_6c = (int)local_70 << 2;
    local_5c = *(uint *)(param_1 + 4);
    local_58 = param_1 + (int)local_70 * 4;
    if (local_54 == (code *)0x0) {
      uVar11 = 0;
      goto LAB_00005a66;
    }
    pbVar12 = pbVar14;
    if (pbVar14 == (byte *)0x0) goto LAB_00005b78;
    if ((param_5 & 4) == 0) {
      pbVar10 = (byte *)0x0;
      pbVar12 = (byte *)0x0;
      goto LAB_00005b78;
    }
    pbVar4 = abStack_38;
    pbVar10 = (byte *)0x0;
  }
  else {
    local_70 = (byte *)(uint)*param_1;
    local_5c = *(uint *)(param_1 + 4);
    local_6c = (int)local_70 << 2;
    local_58 = param_1 + (int)local_70 * 4;
    if (local_54 == (code *)0x0) {
      pbVar10 = local_58 + (int)pbVar14;
      uVar11 = 0;
      local_54 = (code *)local_58;
      pbVar4 = local_58;
      while (local_58 = (byte *)local_54, pbVar4 != pbVar10) {
        iVar6 = FUN_00000140(*(undefined4 *)(param_1 + (uint)*pbVar4 * 4));
        if ((param_6 != 0) && (uVar11 < param_7)) {
          *(short *)(param_6 + uVar11 * 2) = (short)(iVar6 + 1);
          uVar11 = uVar11 + 1;
        }
        param_2 = param_2 + iVar6 + 1;
        pbVar4 = pbVar4 + 1;
      }
LAB_00005a66:
      pbVar14 = local_58 + (int)pbVar14;
      if ((param_5 & 5) == 0) {
        local_54 = (code *)0x2;
      }
      else {
        local_54 = (code *)0x1;
      }
      iVar6 = local_64 * 2;
      local_58 = (byte *)(param_5 & 2);
      pbVar4 = pbVar14;
LAB_00005a7e:
      while( true ) {
        if (pbVar4 == pbVar14 + iVar6) {
          return param_2;
        }
        pbVar10 = pbVar4 + 2;
        pbVar12 = *(byte **)(param_1 + (uint)pbVar4[1] * 4);
        if ((DAT_00005cfc <= pbVar12) && (pbVar12 < DAT_00005d00)) break;
        if (local_68 != 0) {
          uVar16 = FUN_0001bb1e(local_5c,*pbVar4);
          uVar13 = (undefined4)((ulonglong)uVar16 >> 0x20);
          if ((int)uVar16 != 0) goto LAB_00005aaa;
        }
        pbVar4 = pbVar10;
        if (local_58 != (byte *)0x0) {
LAB_00005b30:
          iVar5 = FUN_00000140(pbVar12);
          if ((param_6 != 0) && (uVar11 < param_7)) {
            *(short *)(param_6 + uVar11 * 2) = (short)iVar5 + 1;
            uVar11 = uVar11 + 1;
          }
          param_2 = param_2 + iVar5;
          pbVar4 = pbVar10;
        }
      }
      if (local_68 != 0) {
        uVar16 = FUN_0001bb1e(local_5c,*pbVar4);
        uVar13 = (undefined4)((ulonglong)uVar16 >> 0x20);
        if ((int)uVar16 != 0) {
LAB_00005aaa:
          if ((*DAT_00005d04 & 6) != 0) {
            local_94 = DAT_00005d08;
            local_90 = local_5c;
            local_88 = 0x200;
            local_98 = DAT_00005d0c;
            uStack_8c = uVar13;
            FUN_00007b60(DAT_00005d04,&DAT_00002480,&local_98,0);
          }
          param_2 = param_2 + -2;
          pbVar4 = pbVar10;
          goto LAB_00005a7e;
        }
      }
      if ((param_5 & 1) != 0) goto LAB_00005b30;
      param_2 = param_2 - (int)local_54;
      pbVar4 = pbVar10;
      goto LAB_00005a7e;
    }
    pbVar12 = (byte *)0x0;
    pbVar4 = abStack_48;
  }
  pbVar4 = (byte *)FUN_00000820(pbVar4,local_58,pbVar14);
LAB_00005b78:
  local_58 = local_58 + (int)pbVar14;
  local_74 = local_64 << 1;
  local_78 = param_5 & 2;
  uVar11 = (uint)local_70;
  local_70 = local_58 + local_64 * 2;
LAB_00005b94:
  while( true ) {
    do {
      if (local_70 == local_58) {
        local_5c = (uint)param_1[1];
        bVar15 = (param_5 & 2) == 0;
        pbVar9 = local_58;
        if (bVar15) {
          pbVar9 = (byte *)((uint)pbVar12 >> 1);
        }
        bVar8 = (byte)pbVar9;
        if (!bVar15) {
          bVar8 = 0;
        }
        if ((param_5 & 1) == 0) {
          bVar15 = (param_5 & 4) != 0;
          if (bVar15) {
            pbVar4 = pbVar12;
          }
          bVar2 = (byte)pbVar4;
          if (!bVar15) {
            bVar2 = 0;
          }
        }
        else {
          bVar2 = 0;
        }
        param_1[1] = param_1[1] + (char)pbVar10;
        param_1[2] = bVar2;
        param_1[3] = bVar8;
        local_68 = uVar11;
        iVar6 = (*local_54)(param_1,local_6c,local_60);
        if (iVar6 < 0) {
          return iVar6;
        }
        *param_1 = (byte)local_68;
        param_1[1] = (byte)local_5c;
        param_1[3] = (byte)local_64;
        param_1[2] = bVar1;
        iVar5 = (*local_54)(abStack_38,pbVar12,local_60);
        if (iVar5 < 0) {
          return iVar5;
        }
        iVar7 = (*local_54)(local_58,((param_2 - (int)pbVar14) - local_6c) - local_74,local_60);
        if (iVar7 < 0) {
          return iVar7;
        }
        iVar7 = iVar5 + iVar6 + iVar7;
        pbVar4 = (byte *)0x0;
        while( true ) {
          if (pbVar10 <= pbVar4) {
            (*local_54)(0,0,local_60);
            return iVar7;
          }
          local_49 = pbVar4[(int)abStack_48];
          uVar13 = *(undefined4 *)(param_1 + (uint)local_49 * 4);
          if (param_6 == 0) {
            sVar3 = 0;
          }
          else {
            sVar3 = *(short *)(param_6 + (int)pbVar4 * 2);
          }
          iVar6 = (*local_54)(&local_49,1,local_60);
          if (iVar6 < 0) break;
          if (sVar3 == 0) {
            sVar3 = FUN_00000140(uVar13);
            sVar3 = sVar3 + 1;
          }
          iVar5 = (*local_54)(uVar13,sVar3,local_60);
          if (iVar5 < 0) {
            return iVar5;
          }
          iVar7 = iVar7 + iVar6 + iVar5;
          pbVar4 = pbVar4 + 1;
        }
        return iVar6;
      }
      pbVar9 = local_58 + 2;
      bVar8 = *local_58;
      bVar2 = local_58[1];
      pbVar4 = *(byte **)(param_1 + (uint)bVar2 * 4);
      local_58 = pbVar9;
      if ((DAT_00005cfc <= pbVar4) && (pbVar4 < DAT_00005d00)) goto LAB_00005ca6;
    } while ((local_68 != 0) &&
            (local_7c = uVar11, pbVar4 = (byte *)FUN_0001bb1e(local_5c), uVar11 = local_7c,
            bVar8 = extraout_r1, pbVar4 != (byte *)0x0));
    if (local_78 != 0) break;
    pbVar9 = pbVar12 + 1;
    pbVar4 = abStack_28 + ((uint)pbVar9 & 0xff);
    abStack_38[(int)pbVar12] = bVar8;
    pbVar12 = (byte *)((uint)(pbVar12 + 2) & 0xff);
    abStack_38[(uint)pbVar9 & 0xff] = bVar2;
  }
  goto LAB_00005cc0;
LAB_00005ca6:
  if ((local_68 == 0) ||
     (local_7c = uVar11, pbVar4 = (byte *)FUN_0001bb1e(local_5c), uVar11 = local_7c,
     pbVar4 == (byte *)0x0)) {
    if ((param_5 & 1) == 0) {
      if ((param_5 & 4) != 0) {
        pbVar4 = abStack_50;
        abStack_38[(int)pbVar12] = bVar2;
        pbVar12 = (byte *)((uint)(pbVar12 + 1) & 0xff);
      }
    }
    else {
LAB_00005cc0:
      pbVar4 = abStack_50;
      abStack_48[(int)pbVar10] = bVar2;
      pbVar10 = (byte *)((uint)(pbVar10 + 1) & 0xff);
    }
  }
  goto LAB_00005b94;
}



// FUN_00005d70 @ 00005d70 (38 bytes, called_by=0, calls=0)

void FUN_00005d70(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int local_1c;
  int local_18;
  int local_14;
  
  local_14 = 0;
  local_1c = param_1;
  local_18 = param_2;
  FUN_00005e64(DAT_00005d98,&local_1c,param_3,param_4,0);
  if (local_14 < local_18) {
    *(undefined1 *)(param_1 + local_14) = 0;
  }
  return;
}



// FUN_00005d9c @ 00005d9c (38 bytes, called_by=0, calls=0)

int FUN_00005d9c(undefined4 *param_1)

{
  int iVar1;
  byte *pbVar2;
  
  iVar1 = 0;
  pbVar2 = (byte *)*param_1;
  while( true ) {
    if (-1 < (int)((uint)*(byte *)(DAT_00005dc4 + (uint)*pbVar2) << 0x1d)) break;
    iVar1 = iVar1 * 10 + (uint)*pbVar2 + -0x30;
    pbVar2 = pbVar2 + 1;
  }
  *param_1 = pbVar2;
  return iVar1;
}



// FUN_00005dc8 @ 00005dc8 (150 bytes, called_by=0, calls=0)

char * FUN_00005dc8(undefined4 param_1,undefined4 param_2,byte *param_3,char *param_4,char *param_5)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  undefined8 uVar8;
  char *pcVar9;
  
  uVar8 = CONCAT44(param_2,param_1);
  uVar3 = (uint)param_3[3];
  bVar2 = *(byte *)(DAT_00005e60 + uVar3);
  pcVar9 = param_4;
  if (uVar3 == 0x6f) {
    uVar3 = 8;
  }
  else {
    if (uVar3 < 0x70) {
      bVar7 = uVar3 == 0x58;
    }
    else {
      bVar7 = (uVar3 & 0xf7) == 0x70;
    }
    if (bVar7) {
      uVar3 = 0x10;
      uVar8 = CONCAT44(param_2,param_1);
    }
    else {
      uVar3 = 10;
      uVar8 = CONCAT44(param_2,param_1);
    }
  }
  do {
    uVar5 = (uint)((ulonglong)uVar8 >> 0x20);
    uVar6 = (uint)uVar8;
    uVar1 = uVar3;
    uVar8 = FUN_00001904(uVar6,uVar5,uVar3,0,pcVar9);
    param_5 = param_5 + -1;
    cVar4 = (char)uVar1;
    if (uVar1 < 10) {
      cVar4 = cVar4 + '0';
    }
    else if ((bVar2 & 3) == 1) {
      cVar4 = cVar4 + '7';
    }
    else {
      cVar4 = cVar4 + 'W';
    }
    *param_5 = cVar4;
  } while ((uVar5 != 0 || uVar5 < (uVar3 <= uVar6)) && (param_4 < param_5));
  if ((int)((uint)*param_3 << 0x1a) < 0) {
    if (uVar3 == 8) {
      bVar2 = param_3[2] | 8;
    }
    else {
      if (uVar3 != 0x10) {
        return param_5;
      }
      bVar2 = param_3[2] | 0x10;
    }
    param_3[2] = bVar2;
  }
  return param_5;
}



// FUN_00005e64 @ 00005e64 (3002 bytes, called_by=0, calls=0)

/* WARNING: Instruction at (ram,0x00016714) overlaps instruction at (ram,0x00016712)
    */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined ** FUN_00005e64(code *param_1,undefined4 param_2,uint *param_3,uint *param_4)

{
  ulonglong uVar1;
  bool bVar2;
  bool bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  int *piVar7;
  undefined1 uVar8;
  char cVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined *puVar12;
  byte *pbVar13;
  uint uVar14;
  byte *pbVar15;
  uint extraout_r1;
  uint extraout_r1_00;
  uint extraout_r1_01;
  undefined4 extraout_r1_02;
  undefined4 extraout_r1_03;
  undefined4 uVar16;
  uint *puVar17;
  uint *puVar18;
  uint uVar19;
  uint *puVar20;
  undefined *puVar21;
  int iVar22;
  int iVar23;
  char cVar24;
  uint uVar25;
  char *pcVar26;
  char *pcVar27;
  code *pcVar28;
  undefined **ppuVar29;
  uint *puVar30;
  int iVar31;
  undefined **ppuVar32;
  uint *puVar33;
  undefined **ppuVar34;
  undefined **ppuVar35;
  undefined **unaff_r9;
  undefined *puVar36;
  undefined **unaff_r11;
  int iVar37;
  undefined *puVar38;
  byte bVar39;
  uint in_r12;
  undefined *puVar40;
  uint uVar41;
  uint uVar42;
  bool bVar43;
  undefined8 uVar44;
  undefined4 local_94;
  undefined **local_90;
  uint *local_8c;
  undefined **local_88;
  undefined **local_84;
  undefined **local_80;
  uint local_7c;
  uint local_74;
  byte *local_70;
  uint local_6c;
  byte *local_68;
  uint uStack_64;
  uint local_60;
  uint local_5c;
  undefined2 local_58;
  byte local_56;
  byte local_55;
  undefined **local_54;
  undefined **local_50;
  undefined4 local_44;
  
  ppuVar32 = (undefined **)0x0;
  local_94 = param_2;
switchD_00006432_caseD_21:
  do {
    while( true ) {
      puVar33 = param_3;
      bVar39 = (byte)*puVar33;
      if (bVar39 == 0) {
        return ppuVar32;
      }
      if (bVar39 == 0x25) break;
      ppuVar10 = (undefined **)(*param_1)(bVar39,local_94);
      if ((int)ppuVar10 < 0) {
        return ppuVar10;
      }
      local_8c = (uint *)((int)puVar33 + 1);
      ppuVar32 = (undefined **)((int)ppuVar32 + 1);
      param_3 = local_8c;
    }
    uVar41 = 0x5ea1;
    FUN_000168a4(&local_60,0,0x18);
    if (*(byte *)((int)puVar33 + 1) == 0x25) {
      local_8c = (uint *)((int)puVar33 + 2);
      local_55 = 0x25;
    }
    else {
      bVar43 = false;
      bVar2 = false;
      uVar41 = 0;
      in_r12 = 0;
      bVar3 = false;
      pbVar15 = (byte *)((int)puVar33 + 1);
      while( true ) {
        while( true ) {
          while( true ) {
            while( true ) {
              pbVar13 = pbVar15 + 1;
              bVar39 = *pbVar15;
              if (bVar39 != 0x2b) break;
              in_r12 = 1;
              pbVar15 = pbVar13;
            }
            if (bVar39 < 0x2c) break;
            if (bVar39 == 0x2d) {
              bVar3 = true;
              pbVar15 = pbVar13;
            }
            else {
              if (bVar39 != 0x30) goto LAB_00005ed0;
              bVar43 = true;
              pbVar15 = pbVar13;
            }
          }
          if (bVar39 != 0x20) break;
          uVar41 = 1;
          pbVar15 = pbVar13;
        }
        if (bVar39 != 0x23) break;
        bVar2 = true;
        pbVar15 = pbVar13;
      }
LAB_00005ed0:
      if (bVar43) {
        local_58 = local_58 | 0x40;
      }
      if (bVar2) {
        local_58 = local_58 | 0x20;
      }
      if (uVar41 != 0) {
        local_58 = local_58 | 0x10;
      }
      if (in_r12 != 0) {
        local_58 = local_58 | 8;
      }
      if (bVar3) {
        local_58 = local_58 | 4;
      }
      if (((byte)local_58 & 0x44) == 0x44) {
        local_58 = local_58 & 0xffbf;
      }
      uVar8 = local_58._1_1_;
      local_58 = local_58 | 0x80;
      local_68 = pbVar15;
      if (bVar39 == 0x2a) {
        local_58 = CONCAT11(uVar8,(byte)local_58) | 0x100;
        pbVar13 = pbVar15 + 1;
      }
      else {
        uVar41 = 0x609f;
        ppuVar10 = (undefined **)FUN_00005d9c(&local_68);
        pbVar13 = local_68;
        if (local_68 != pbVar15) {
          local_58 = CONCAT11(local_58._1_1_,
                              (byte)local_58 & 0xfd | (byte)(((uint)ppuVar10 >> 0x1f) << 1));
          local_54 = ppuVar10;
        }
      }
      bVar39 = local_58._1_1_ & 0xfd | (*pbVar13 == 0x2e) << 1;
      local_58._1_1_ = bVar39;
      if (*pbVar13 == 0x2e) {
        local_68 = pbVar13 + 1;
        if (pbVar13[1] == 0x2a) {
          local_58._1_1_ = bVar39 | 4;
          pbVar13 = pbVar13 + 2;
        }
        else {
          uVar41 = 0x60bf;
          local_50 = (undefined **)FUN_00005d9c(&local_68);
          local_58._0_1_ =
               (byte)local_58 & 0xfd |
               (byte)((((uint)(byte)local_58 << 0x1e | (uint)local_50) >> 0x1f) << 1);
          pbVar13 = local_68;
        }
      }
      bVar39 = *pbVar13;
      if (bVar39 == 0x6c) {
        if (pbVar13[1] != 0x6c) {
          iVar37 = 3;
          goto LAB_00006104;
        }
        iVar37 = 4;
LAB_000060f6:
        local_58._1_1_ = local_58._1_1_ & 0x87 | (byte)(iVar37 << 3);
        pbVar13 = pbVar13 + 2;
      }
      else {
        if (bVar39 < 0x6d) {
          if (bVar39 == 0x68) {
            if (pbVar13[1] == 0x68) {
              iVar37 = 1;
              goto LAB_000060f6;
            }
            iVar37 = 2;
            goto LAB_00006104;
          }
          if (bVar39 == 0x6a) {
            iVar37 = 5;
            goto LAB_00006104;
          }
          if (bVar39 != 0x4c) goto LAB_00005fa8;
          local_58._0_1_ = (byte)local_58 & 0xfd | 2;
          local_58._1_1_ = local_58._1_1_ & 0x87 | 0x40;
        }
        else {
          if (bVar39 == 0x74) {
            iVar37 = 7;
          }
          else {
            if (bVar39 != 0x7a) goto LAB_00005fa8;
            iVar37 = 6;
          }
LAB_00006104:
          local_58._1_1_ = local_58._1_1_ & 0x87 | (byte)(iVar37 << 3);
        }
        pbVar13 = pbVar13 + 1;
      }
LAB_00005fa8:
      local_8c = (uint *)(pbVar13 + 1);
      local_55 = *pbVar13;
      uVar19 = (uint)local_55;
      if (0x78 < uVar19) goto LAB_000061c2;
      if (uVar19 < 0x6e) {
        if (uVar19 < 0x6a) {
          if (0x57 < uVar19) {
            uVar25 = 1 << (uVar19 - 0x58 & 0xff);
            if ((uVar25 & 0xe200) != 0) goto LAB_00005fd8;
            if ((uVar25 & 0x801) != 0) {
              uVar25 = local_58._1_1_ & 0x78;
              local_56 = local_56 & 0xf8 | 2;
              if (uVar25 == 0x40) {
                local_58._0_1_ = (byte)local_58 | 1;
              }
              if (uVar19 == 99) {
                if ((local_58._1_1_ & 0x78) != 0) {
                  uVar25 = 1;
                }
                goto LAB_0000620a;
              }
              goto LAB_00006018;
            }
            if ((uVar25 & 0x21000) != 0) {
              local_56 = local_56 & 0xf8 | 1;
              goto LAB_000061b4;
            }
            goto LAB_000061c2;
          }
          if ((uVar19 != 0x41) && (2 < uVar19 - 0x45)) goto LAB_000061c2;
LAB_00005fd8:
          local_56 = local_56 & 0xf8 | 4;
          uVar19 = (uint)((uVar19 & 0xdf) == 0x41) << 7;
          uVar25 = local_58._1_1_ & 0xffffff7f;
          uVar14 = uVar25 | uVar19;
          bVar39 = (byte)uVar14;
          if ((int)(uVar14 << 0x18) < 0) {
            uVar25 = 1;
            local_58._1_1_ = bVar39;
            goto LAB_0000620a;
          }
          if ((local_58._1_1_ & 0x78) == 0x18) {
            local_58._1_1_ = (byte)uVar25 & 0x87 | (byte)uVar19;
          }
          else {
            bVar4 = local_58._1_1_ & 0x38;
            local_58._1_1_ = bVar39;
            if (bVar4 != 0) goto LAB_000061c2;
          }
        }
        else {
LAB_000061c2:
          local_58._0_1_ = (byte)local_58 | 1;
        }
LAB_00006018:
        uVar25 = 0;
      }
      else {
        uVar19 = 1 << (uVar19 - 0x6e & 0xff);
        if ((uVar19 & 0x482) != 0) {
          local_56 = local_56 & 0xf8 | 2;
LAB_000061b4:
          if ((local_58._1_1_ & 0x78) == 0x40) goto LAB_000061c2;
          goto LAB_00006018;
        }
        if ((uVar19 & 0x24) == 0) {
          if (-1 < (int)(uVar19 << 0x1f)) goto LAB_000061c2;
          local_56 = local_56 & 0xf8 | 3;
          uVar25 = (uint)((local_58._1_1_ & 0x78) == 0x40);
        }
        else {
          local_56 = local_56 & 0xf8 | 3;
          uVar25 = (uint)((local_58._1_1_ & 0x78) != 0);
        }
      }
LAB_0000620a:
      local_58 = CONCAT11(local_58._1_1_,
                          (byte)local_58 & 0xfd |
                          (byte)((uVar25 & 1 | ((uint)(byte)local_58 << 0x1e) >> 0x1f) << 1));
    }
    iVar37 = DAT_0000e728;
    ppuVar10 = DAT_0000e5c0;
    uVar16 = DAT_0000e3b4;
    uVar19 = (uint)local_58._1_1_;
    ppuVar11 = (undefined **)(local_56 & 7);
    if ((int)(uVar19 << 0x1f) < 0) {
      puVar30 = param_4 + 1;
      local_90 = (undefined **)*param_4;
      param_4 = puVar30;
      if ((int)local_90 < 0) {
        local_58 = local_58 | 4;
        local_90 = (undefined **)-(int)local_90;
      }
    }
    else {
      local_90 = local_54;
      if (-1 < (char)(byte)local_58) {
        local_90 = (undefined **)0xffffffff;
      }
    }
    if ((int)(uVar19 << 0x1d) < 0) {
      puVar30 = param_4 + 1;
      ppuVar34 = (undefined **)*param_4;
      param_4 = puVar30;
      if ((int)ppuVar34 < 0) {
        local_58 = local_58 & 0xfdff;
LAB_0000606e:
        ppuVar34 = (undefined **)0xffffffff;
      }
    }
    else {
      ppuVar34 = local_50;
      if (-1 < (int)(uVar19 << 0x1e)) goto LAB_0000606e;
    }
    local_54 = (undefined **)0x0;
    local_50 = (undefined **)0x0;
    if ((ppuVar11 == &Reset) && (-1 < (int)((uint)local_58._1_1_ << 0x1e))) {
      if ((short)local_58 < 0) {
        ppuVar34 = (undefined **)((int)&HardFault + 1);
      }
      else {
        ppuVar34 = (undefined **)((int)&Reset + 2);
      }
    }
    uVar19 = local_56 & 7;
    pbVar15 = (byte *)(((uint)local_58._1_1_ << 0x19) >> 0x1c);
    if (uVar19 == 1) {
      switch(pbVar15) {
      case (byte *)0x3:
      case (byte *)0x6:
      case (byte *)0x7:
        local_60 = *param_4;
        local_5c = (int)local_60 >> 0x1f;
LAB_000062d6:
        puVar30 = param_4 + 1;
        break;
      case (byte *)0x4:
      case (byte *)0x5:
switchD_0000628c_caseD_4:
        puVar20 = (uint *)((int)param_4 + 7U & 0xfffffff8);
        puVar30 = puVar20 + 2;
        local_60 = *puVar20;
        local_5c = puVar20[1];
        break;
      default:
        uVar19 = *param_4;
        local_5c = (int)uVar19 >> 0x1f;
        if (pbVar15 == (byte *)0x1) {
          local_60._0_1_ = (char)uVar19;
          local_5c = (int)(char)local_60 >> 0x1f;
          local_60 = (int)(char)local_60;
        }
        else {
          local_60 = uVar19;
          if (pbVar15 == (byte *)0x2) {
            local_60 = (uint)(short)uVar19;
            local_5c = (int)(uVar19 << 0x10) >> 0x1f;
          }
        }
        puVar30 = param_4 + 1;
      }
    }
    else if (uVar19 == 2) {
      switch(pbVar15) {
      case (byte *)0x3:
      case (byte *)0x6:
      case (byte *)0x7:
        puVar30 = param_4 + 1;
        local_60 = *param_4;
        local_5c = 0;
        break;
      case (byte *)0x4:
      case (byte *)0x5:
        goto switchD_0000628c_caseD_4;
      default:
        local_60 = *param_4;
        local_5c = 0;
        if (pbVar15 == (byte *)0x1) {
          local_60 = local_60 & 0xff;
          goto LAB_000062d6;
        }
        local_5c = 0;
        puVar30 = param_4 + 1;
        if (pbVar15 == (byte *)0x2) {
          local_60 = local_60 & 0xffff;
          goto LAB_00006316;
        }
      }
    }
    else if (uVar19 == 4) {
      puVar30 = (uint *)((int)param_4 + 7U & 0xfffffff8);
      local_60 = *puVar30;
      local_5c = puVar30[1];
      puVar30 = puVar30 + 2;
    }
    else {
      puVar30 = param_4;
      if (uVar19 == 3) {
        local_60 = *param_4;
LAB_00006316:
        puVar30 = param_4 + 1;
      }
    }
    local_88 = (undefined **)(uint)(byte)local_58;
    param_4 = puVar30;
    if ((local_58 & 3) != 0) {
      ppuVar10 = (undefined **)FUN_0001bc32(param_1,local_94,puVar33,local_8c);
      if ((int)ppuVar10 < 0) {
        return ppuVar10;
      }
      ppuVar32 = (undefined **)((int)ppuVar32 + (int)ppuVar10);
      param_3 = local_8c;
      goto switchD_00006432_caseD_21;
    }
    ppuVar35 = (undefined **)(uint)local_55;
    param_3 = local_8c;
    if (ppuVar35 < (undefined **)0x79) {
      if (ppuVar35 < (undefined **)0x58) {
        if (ppuVar35 == (undefined **)((int)&Reserved3 + 1)) {
          ppuVar10 = (undefined **)(*param_1)(0x25,local_94);
          if ((int)ppuVar10 < 0) {
            return ppuVar10;
          }
          ppuVar32 = (undefined **)((int)ppuVar32 + 1);
          param_3 = local_8c;
        }
        else {
          param_3 = local_8c;
          if ((&Reserved3 < ppuVar35) &&
             ((ppuVar35 == (undefined **)((int)&IRQ + 1) ||
              (param_3 = local_8c, (byte *)((int)ppuVar35 + -0x45) < (byte *)0x3)))) {
            if ((int)local_5c < 0) {
              unaff_r9 = (undefined **)((int)&SVCall + 1);
            }
            else if ((int)local_88 << 0x1c < 0) {
              unaff_r9 = (undefined **)((int)&Reserved4 + 3);
            }
            else {
              unaff_r9 = (undefined **)(((uint)((int)local_88 << 0x1b) >> 0x1f) << 5);
            }
            uVar41 = (local_5c << 1) >> 0x15;
            uVar19 = local_5c & 0xfffff;
            if (uVar41 == 0) {
              if (local_60 == 0 && uVar19 == 0) {
                in_r12 = 0;
              }
              else {
                in_r12 = 1;
              }
LAB_000063c2:
              local_6c = uVar19 << 0xb | local_60 >> 0x15;
              local_70 = (byte *)(local_60 << 0xb);
              if (ppuVar35 == (undefined **)0x46) {
                ppuVar35 = (undefined **)0x66;
              }
              if ((local_6c == 0 && -1 < (int)uVar41) && (local_70 == (byte *)0x0 && uVar41 == 0)) {
                iVar37 = 0;
              }
              else {
                if (in_r12 != 0) {
                  in_r12 = 0;
                  uVar19 = uVar19 << 0xc | local_60 >> 0x14;
                  local_70 = (byte *)(local_60 << 0xc);
                  for (local_6c = uVar19; -1 < (int)local_6c; local_6c = local_6c * 2 + (uint)bVar43
                      ) {
                    bVar43 = CARRY4((uint)local_70,(uint)local_70);
                    local_70 = (byte *)((int)local_70 * 2);
                    uVar41 = uVar41 - 1;
                    in_r12 = 1;
                  }
                  if (in_r12 == 0) {
                    local_70 = (byte *)(local_60 << 0xc);
                    local_6c = uVar19;
                  }
                }
                local_6c = local_6c | 0x80000000;
                iVar37 = uVar41 - 0x3fe;
              }
              bVar43 = false;
              ppuVar10 = (undefined **)0x0;
              pbVar15 = local_70;
              uVar41 = local_6c;
              while (iVar37 + 2 < 0 != SCARRY4(iVar37,2)) {
                do {
                  iVar31 = iVar37;
                  pbVar15 = (byte *)((uint)pbVar15 >> 1 | uVar41 << 0x1f);
                  uVar41 = uVar41 >> 1;
                  iVar37 = iVar31 + 1;
                } while (0x33333332 < uVar41);
                in_r12 = uVar41 * 5;
                uVar1 = ZEXT48(pbVar15);
                pbVar15 = (byte *)(uVar1 * 5);
                uVar41 = (int)(uVar1 * 5 >> 0x20) + in_r12;
                ppuVar10 = (undefined **)((int)ppuVar10 + -1);
                bVar43 = true;
                iVar37 = iVar31 + 2;
              }
              if (bVar43) {
                local_70 = pbVar15;
                local_6c = uVar41;
              }
              while (0 < iVar37) {
                bVar43 = (byte *)0xfffffffd < local_70;
                local_70 = local_70 + 2;
                local_6c = local_6c + bVar43;
                FUN_0001bbd4(&local_70);
                iVar37 = iVar37 + -1;
                ppuVar10 = (undefined **)((int)ppuVar10 + 1);
                do {
                  bVar43 = CARRY4((uint)local_70,(uint)local_70);
                  local_70 = (byte *)((int)local_70 * 2);
                  local_6c = local_6c * 2 + (uint)bVar43;
                  iVar37 = iVar37 + -1;
                } while (-1 < (int)local_6c);
              }
              uVar41 = -iVar37 + 4;
              local_84 = (undefined **)(local_6c >> (uVar41 & 0xff));
              if (((uint)ppuVar35 & 0xdf) == 0x47) {
                if (((int)((int)ppuVar10 + 3) < 0 != SCARRY4((int)ppuVar10,3)) ||
                   ((int)ppuVar34 < (int)ppuVar10)) {
                  ppuVar35 = (undefined **)((uint)((int)ppuVar35 + -2) & 0xff);
                  if (((int)ppuVar34 < 1) ||
                     (ppuVar34 = (undefined **)((int)ppuVar34 + -1),
                     (int)((uint)(byte)local_58 << 0x1a) < 0)) {
                    unaff_r11 = (undefined **)0x0;
                  }
                  else {
                    unaff_r11 = ppuVar34;
                    if (ppuVar34 != (undefined **)0x0) {
                      unaff_r11 = (undefined **)0x1;
                    }
                  }
                  goto LAB_0000674c;
                }
                ppuVar34 = (undefined **)((int)ppuVar34 - (int)ppuVar10);
                if ((int)((uint)(byte)local_58 << 0x1a) < 0) {
                  unaff_r11 = (undefined **)0x0;
                }
                else {
                  unaff_r11 = ppuVar34;
                  if (ppuVar34 != (undefined **)0x0) {
                    unaff_r11 = (undefined **)0x1;
                  }
                }
LAB_00006798:
                ppuVar11 = (undefined **)((int)ppuVar34 + (int)ppuVar10);
                ppuVar35 = (undefined **)0x66;
                if (-1 < (int)ppuVar11) goto LAB_000067a0;
                ppuVar11 = (undefined **)0x0;
              }
              else {
                unaff_r11 = (undefined **)0x0;
                if (ppuVar35 == (undefined **)0x66) goto LAB_00006798;
LAB_0000674c:
                ppuVar11 = (undefined **)((int)ppuVar34 + 1);
LAB_000067a0:
                if (0xf < (int)ppuVar11) {
                  ppuVar11 = &MemManage;
                }
              }
              local_74 = 0x10;
              local_68 = (byte *)0x0;
              uStack_64 = 0x8000000;
              uVar41 = (uint)local_70 >> (uVar41 & 0xff) | local_6c << (iVar37 + 0x1cU & 0xff) |
                       local_6c >> (-iVar37 - 0x1cU & 0xff);
              while (ppuVar11 != (undefined **)0x0) {
                local_68 = (byte *)((uint)local_68 >> 1 | uStack_64 << 0x1f);
                uStack_64 = uStack_64 >> 1;
                local_80 = ppuVar11;
                local_7c = uVar41;
                FUN_0001bbd4(&local_68);
                uVar41 = local_7c;
                ppuVar11 = (undefined **)((int)local_80 + -1);
              }
              local_70 = local_68 + uVar41;
              uVar41 = (int)local_84 + uStack_64 + CARRY4(uVar41,(uint)local_68);
              local_6c = uVar41;
              if (0xfffffff < uVar41) {
                local_70 = (byte *)((uint)local_70 >> 1 | uVar41 * -0x80000000);
                local_6c = uVar41 >> 1;
                ppuVar10 = (undefined **)((int)ppuVar10 + 1);
                FUN_0001bbd4(&local_70);
                uVar41 = extraout_r1;
              }
              cVar9 = (char)uVar41;
              local_88 = (undefined **)((uint)local_88 & 0x20);
              if (ppuVar35 == (undefined **)0x66) {
                if ((int)ppuVar10 < 1) {
                  local_44._0_1_ = '0';
                  ppuVar11 = local_88;
                  if (local_88 == (undefined **)0x0) {
                    if ((int)ppuVar34 < 1) goto LAB_00006b5c;
                    local_44._1_1_ = 0x2e;
                    if (ppuVar10 != (undefined **)0x0) goto LAB_000067f8;
                  }
                  else {
                    local_44._1_1_ = 0x2e;
                    if (ppuVar10 != (undefined **)0x0) {
                      if ((int)ppuVar34 < 1) {
                        pcVar26 = (char *)((int)&local_44 + 2);
                        goto LAB_000068de;
                      }
LAB_000067f8:
                      local_54 = (undefined **)-(int)ppuVar10;
                      if ((int)ppuVar34 <= -(int)ppuVar10) {
                        local_54 = ppuVar34;
                      }
                      ppuVar34 = (undefined **)((int)ppuVar34 - (int)local_54);
                      local_88 = (undefined **)
                                 (local_56 & 0xffffffdf | (uint)(0 < (int)local_54) << 5);
                      local_56 = (byte)local_88;
                    }
                  }
LAB_0000681a:
                  local_44._1_1_ = 0x2e;
                  pcVar26 = (char *)((int)&local_44 + 2);
                  ppuVar11 = local_88;
                }
                else {
                  pcVar26 = (char *)&local_44;
                  do {
                    uVar41 = local_74;
                    if ((int)local_74 < 1) break;
                    local_84 = local_88;
                    local_88 = (undefined **)pcVar26;
                    cVar9 = FUN_0001bc04(&local_70,&local_74);
                    pcVar26 = (char *)((int)local_88 + 1);
                    *(char *)local_88 = cVar9;
                    ppuVar10 = (undefined **)((int)ppuVar10 + -1);
                    uVar41 = extraout_r1_00;
                    local_88 = local_84;
                  } while (ppuVar10 != (undefined **)0x0);
                  cVar9 = (char)uVar41;
                  local_54 = ppuVar10;
                  if (local_88 == (undefined **)0x0) {
                    ppuVar11 = (undefined **)0x0;
                    if ((int)ppuVar34 < 1) {
                      ppuVar10 = (undefined **)0x0;
                      goto LAB_000068de;
                    }
                    uVar41 = 0x2e;
                    *pcVar26 = '.';
                  }
                  else {
                    ppuVar11 = (undefined **)0x2e;
                    *pcVar26 = '.';
                  }
                  pcVar26 = pcVar26 + 1;
                  ppuVar10 = (undefined **)0x0;
                }
                while ((cVar9 = (char)uVar41, 0 < (int)ppuVar34 &&
                       (ppuVar11 = (undefined **)local_74, 0 < (int)local_74))) {
                  local_88 = (undefined **)pcVar26;
                  cVar9 = FUN_0001bc04(&local_70,&local_74);
                  ppuVar34 = (undefined **)((int)ppuVar34 + -1);
                  pcVar26 = (char *)((int)local_88 + 1);
                  *(char *)local_88 = cVar9;
                  uVar41 = extraout_r1_01;
                }
              }
              else {
                uVar44 = FUN_0001bc04(&local_70,&local_74);
                uVar41 = (uint)((ulonglong)uVar44 >> 0x20);
                cVar9 = (char)((ulonglong)uVar44 >> 0x20);
                local_44._0_1_ = (char)uVar44;
                if ((int)uVar44 != 0x30) {
                  ppuVar10 = (undefined **)((int)ppuVar10 + -1);
                }
                if ((local_88 != (undefined **)0x0) || (ppuVar11 = local_88, 0 < (int)ppuVar34)) {
                  local_44._1_1_ = 0x2e;
                  goto LAB_0000681a;
                }
LAB_00006b5c:
                pcVar26 = (char *)((int)&local_44 + 1);
              }
LAB_000068de:
              if (unaff_r11 != (undefined **)0x0) {
                do {
                  pcVar27 = pcVar26;
                  ppuVar11 = (undefined **)(uint)(byte)pcVar27[-1];
                  pcVar26 = pcVar27 + -1;
                } while (ppuVar11 == (undefined **)0x30);
                pcVar26 = pcVar27;
                ppuVar34 = local_50;
                if (ppuVar11 == (undefined **)0x2e) {
                  pcVar26 = pcVar27 + -1;
                }
              }
              local_50 = ppuVar34;
              if (((uint)ppuVar35 & 0xdf) == 0x45) {
                if ((int)ppuVar10 < 0) {
                  ppuVar10 = (undefined **)-(int)ppuVar10;
                  cVar24 = '-';
                }
                else {
                  cVar24 = '+';
                }
                if (99 < (int)ppuVar10) {
                  ppuVar11 = (undefined **)0x64;
                }
                pcVar26[1] = cVar24;
                ppuVar34 = ppuVar10;
                if (99 < (int)ppuVar10) {
                  cVar9 = (char)((uint)ppuVar10 / (uint)ppuVar11) + '0';
                  ppuVar34 = (undefined **)
                             ((int)ppuVar10 - (int)ppuVar11 * ((uint)ppuVar10 / (uint)ppuVar11));
                }
                *pcVar26 = (char)ppuVar35;
                if ((int)ppuVar10 < 100) {
                  pcVar26 = pcVar26 + 2;
                }
                else {
                  pcVar26[2] = cVar9;
                  pcVar26 = pcVar26 + 3;
                }
                cVar9 = (char)((uint)ppuVar34 / 10);
                *pcVar26 = cVar9 + '0';
                pcVar26[1] = (char)ppuVar34 + cVar9 * -10 + '0';
                pcVar26 = pcVar26 + 2;
              }
              if ((int)local_54 < 1) {
                if ((int)local_50 < 1) {
                  iVar37 = 0;
                }
                else {
                  iVar37 = 1;
                }
              }
              else {
                iVar37 = 1;
              }
              local_56 = local_56 & 0xbf | (byte)(iVar37 << 6);
              *pcVar26 = '\0';
            }
            else {
              if (uVar41 != 0x7ff) {
                in_r12 = 0;
                goto LAB_000063c2;
              }
              uVar19 = uVar19 | local_60;
              bVar39 = *(byte *)(DAT_000068c8 + ((uint)((int)ppuVar35 + 1) & 0xff)) & 3;
              if (uVar19 == 0) {
                if (bVar39 == 1) {
                  local_44._0_1_ = 'I';
                  local_44._1_1_ = 0x4e;
                  uVar41 = 0x46;
                }
                else {
                  local_44._0_1_ = 'i';
                  local_44._1_1_ = 0x6e;
                  uVar41 = local_60;
                }
                local_44._2_1_ = (char)uVar41;
                if (bVar39 != 1) {
                  local_44._2_1_ = 'f';
                }
              }
              else {
                if (bVar39 != 1) {
                  uVar19 = 0x6e;
                }
                local_44._0_1_ = (char)uVar19;
                if (bVar39 != 1) {
                  local_44._1_1_ = 0x61;
                  local_44._2_1_ = (char)local_44;
                }
                else {
                  local_44._0_1_ = 'N';
                  local_44._1_1_ = 0x41;
                  local_44._2_1_ = (char)local_44;
                }
              }
              local_58 = local_58 & 0xffbf;
              pcVar26 = (char *)((int)&local_44 + 3);
            }
            ppuVar10 = local_54;
            iVar37 = (int)pcVar26 - (int)&local_44;
            if (unaff_r9 != (undefined **)0x0) {
              iVar37 = iVar37 + 1;
            }
            uVar41 = (uint)local_56;
            local_88 = (undefined **)(uVar41 & 0x10);
            if ((local_56 & 0x10) == 0) {
              if ((int)(uVar41 << 0x1c) < 0) {
                iVar37 = iVar37 + 1;
              }
            }
            else {
              iVar37 = iVar37 + 2;
            }
            local_80 = (undefined **)(uVar41 & 0x40);
            bVar43 = (local_56 & 0x40) != 0;
            ppuVar11 = local_80;
            if (bVar43) {
              ppuVar11 = local_50;
            }
            local_84 = local_54;
            pbVar15 = (byte *)(iVar37 + (int)local_54);
            if (bVar43) {
              pbVar15 = pbVar15 + (int)ppuVar11;
            }
            if (0 < (int)local_90) {
              ppuVar11 = (undefined **)((int)local_90 - (int)pbVar15);
              uVar41 = (uint)(byte)local_58;
              unaff_r11 = (undefined **)((uVar41 << 0x1d) >> 0x1f);
              local_90 = ppuVar11;
              if (-1 < (int)(uVar41 << 0x1d)) {
                if ((int)(uVar41 << 0x19) < 0) {
                  if (unaff_r9 != (undefined **)0x0) {
                    ppuVar11 = (undefined **)(*param_1)(unaff_r9,local_94);
                    if ((int)ppuVar11 < 0) {
                      return ppuVar11;
                    }
                    ppuVar32 = (undefined **)((int)ppuVar32 + 1);
                    unaff_r9 = unaff_r11;
                  }
                  uVar41 = 0x30;
                  ppuVar11 = local_90;
                }
                else {
                  uVar41 = 0x20;
                }
                while (unaff_r11 = (undefined **)((int)ppuVar11 + -1), 0 < (int)ppuVar11) {
                  local_7c = uVar41;
                  ppuVar34 = (undefined **)(*param_1)(uVar41,local_94);
                  uVar41 = local_7c;
                  ppuVar11 = unaff_r11;
                  if ((int)ppuVar34 < 0) {
                    return ppuVar34;
                  }
                }
                ppuVar32 = (undefined **)((byte *)((int)local_90 + (int)ppuVar32) + -(int)ppuVar11);
                local_90 = unaff_r11;
              }
            }
            if (unaff_r9 != (undefined **)0x0) {
              ppuVar11 = (undefined **)(*param_1)(unaff_r9,local_94);
              if ((int)ppuVar11 < 0) {
                return ppuVar11;
              }
              ppuVar32 = (undefined **)((int)ppuVar32 + 1);
            }
            ppuVar11 = DAT_00006b68;
            if (local_80 == (undefined **)0x0) {
              if (((int)((uint)local_56 << 0x1b) < 0) || ((int)((uint)local_56 << 0x1c) < 0)) {
                ppuVar11 = (undefined **)(*param_1)(0x30,local_94);
                if ((int)ppuVar11 < 0) {
                  return ppuVar11;
                }
                ppuVar32 = (undefined **)((int)ppuVar32 + 1);
              }
              if (local_88 != (undefined **)0x0) {
                ppuVar11 = (undefined **)(*param_1)(local_55,local_94);
                if ((int)ppuVar11 < 0) {
                  return ppuVar11;
                }
                ppuVar32 = (undefined **)((int)ppuVar32 + 1);
              }
              pbVar15 = (byte *)((int)ppuVar10 + (int)ppuVar32);
              for (; 0 < (int)pbVar15 - (int)ppuVar32; ppuVar32 = (undefined **)((int)ppuVar32 + 1))
              {
                ppuVar10 = (undefined **)(*param_1)(0x30,local_94);
                if ((int)ppuVar10 < 0) {
                  return ppuVar10;
                }
              }
              ppuVar10 = (undefined **)FUN_0001bc32(param_1,local_94,&local_44,pcVar26);
              if ((int)ppuVar10 < 0) {
                return ppuVar10;
              }
              ppuVar32 = (undefined **)((int)ppuVar10 + (int)ppuVar32);
            }
            else {
              ppuVar34 = (undefined **)&local_44;
              if ((short)local_58 < 0) {
                while( true ) {
                  ppuVar11 = (undefined **)((int)ppuVar34 + 1);
                  if (*(byte *)ppuVar34 == 0x70) break;
                  ppuVar10 = (undefined **)(*param_1)(*(byte *)ppuVar34,local_94);
                  ppuVar34 = ppuVar11;
                  if ((int)ppuVar10 < 0) {
                    return ppuVar10;
                  }
                }
                iVar37 = (int)ppuVar32 - (int)&local_44;
              }
              else {
                while( true ) {
                  if (-1 < (int)((uint)*(byte *)((int)ppuVar11 + (uint)*(byte *)ppuVar34) << 0x1d))
                  break;
                  local_88 = (undefined **)((int)ppuVar34 + 1);
                  ppuVar35 = (undefined **)(*param_1)((uint)*(byte *)ppuVar34,local_94);
                  ppuVar34 = local_88;
                  if ((int)ppuVar35 < 0) {
                    return ppuVar35;
                  }
                }
                pbVar15 = (byte *)(((int)ppuVar32 - (int)&local_44) + (int)ppuVar34);
                ppuVar32 = ppuVar10;
                if (-1 < (int)((uint)local_56 << 0x1a)) {
                  while (ppuVar10 = (undefined **)((int)ppuVar32 + -1), 0 < (int)ppuVar32) {
                    ppuVar35 = (undefined **)(*param_1)(0x30,local_94);
                    ppuVar32 = ppuVar10;
                    if ((int)ppuVar35 < 0) {
                      return ppuVar35;
                    }
                  }
                  pbVar15 = (byte *)((int)local_84 + (int)pbVar15) + -(int)ppuVar32;
                }
                unaff_r11 = ppuVar34;
                if (*(byte *)ppuVar34 == 0x2e) {
                  ppuVar32 = (undefined **)(*param_1)(0x2e,local_94);
                  while( true ) {
                    if ((int)ppuVar32 < 0) {
                      return ppuVar32;
                    }
                    pbVar15 = pbVar15 + 1;
                    if ((int)ppuVar10 < 1) break;
                    ppuVar32 = (undefined **)(*param_1)(0x30,local_94);
                    ppuVar10 = (undefined **)((int)ppuVar10 + -1);
                  }
                  ppuVar34 = (undefined **)((int)ppuVar34 + 1);
                  unaff_r11 = ppuVar34;
                }
                while( true ) {
                  if (-1 < (int)((uint)*(byte *)((int)ppuVar11 + (uint)*(byte *)ppuVar34) << 0x1d))
                  break;
                  ppuVar32 = (undefined **)(*param_1)((uint)*(byte *)ppuVar34,local_94);
                  ppuVar34 = (undefined **)((int)ppuVar34 + 1);
                  if ((int)ppuVar32 < 0) {
                    return ppuVar32;
                  }
                }
                iVar37 = (int)pbVar15 - (int)unaff_r11;
              }
              pbVar13 = (byte *)(iVar37 + (int)ppuVar34);
              pbVar15 = (byte *)((int)local_50 + (int)pbVar13);
              for (; 0 < (int)pbVar15 - (int)pbVar13; pbVar13 = pbVar13 + 1) {
                ppuVar32 = (undefined **)(*param_1)(0x30,local_94);
                if ((int)ppuVar32 < 0) {
                  return ppuVar32;
                }
              }
              ppuVar32 = (undefined **)FUN_0001bc32(param_1,local_94,ppuVar34,pcVar26);
              if ((int)ppuVar32 < 0) {
                return ppuVar32;
              }
              ppuVar32 = (undefined **)((int)ppuVar32 + (int)pbVar13);
              unaff_r9 = ppuVar11;
            }
            pbVar15 = (byte *)((int)local_90 + (int)ppuVar32);
            for (; param_3 = local_8c, 0 < (int)pbVar15 - (int)ppuVar32;
                ppuVar32 = (undefined **)((int)ppuVar32 + 1)) {
              ppuVar10 = (undefined **)(*param_1)(0x20,local_94);
              if ((int)ppuVar10 < 0) {
                return ppuVar10;
              }
            }
          }
        }
      }
      else {
        ppuVar29 = ppuVar35 + -0x16;
        bVar43 = ppuVar29 == &Reserved2;
        puVar20 = &switchD_00006432::switchdataD_00006438;
        param_3 = local_8c;
        switch(ppuVar29) {
        case (undefined **)0x0:
        case (undefined **)0x17:
        case (undefined **)0x1d:
        case (undefined **)0x20:
switchD_00006432_caseD_0:
          uVar16 = DAT_0000e71c;
          if (!bVar43) {
LAB_0000e618:
            FUN_0001cab2(ppuVar11,1,uVar16);
          }
          return (undefined **)0xffffffea;
        case (undefined **)0x1:
        case (undefined **)0x2:
        case (undefined **)0x3:
        case (undefined **)0x4:
        case (undefined **)0x5:
        case (undefined **)0x6:
        case (undefined **)0x7:
        case (undefined **)0x8:
        case (undefined **)0xa:
        case (undefined **)0x10:
        case (undefined **)0x12:
        case (undefined **)0x13:
        case (undefined **)0x14:
        case (undefined **)0x15:
        case (undefined **)0x19:
        case (undefined **)0x1a:
        case (undefined **)0x1c:
        case (undefined **)0x1e:
        case (undefined **)0x1f:
          uVar44 = (*(code *)*ppuVar29)(&local_94);
          iVar37 = DAT_0000df7c;
          uVar16 = (undefined4)((ulonglong)uVar44 >> 0x20);
          if (*(int *)(DAT_0000df7c + 0x158) != 0) {
            *(undefined4 *)(DAT_0000df7c + 0x158) = 0;
            iVar31 = *(int *)(iVar37 + 0x400);
            *(int *)(iVar37 + 0x400) = iVar31;
            if (iVar31 << 0x17 < 0) {
              *DAT_0000dfa4 = '\x01';
              local_94 = 2;
              (*(code *)*DAT_0000df84)(&local_94);
              uVar16 = extraout_r1_02;
            }
            if (iVar31 << 0x16 < 0) {
              *DAT_0000dfa4 = '\0';
              local_94 = 3;
              (*(code *)*DAT_0000df84)(&local_94);
              uVar16 = extraout_r1_03;
            }
            iVar31 = iVar31 << 0x15;
            uVar44 = CONCAT44(uVar16,iVar31);
            if ((iVar31 < 0) && (uVar44 = CONCAT44(uVar16,iVar31), *DAT_0000dfa4 != '\0')) {
              *DAT_0000dfa4 = '\0';
              iVar37 = DAT_0000df7c;
              *(undefined4 *)(DAT_0000df7c + 0x508) = 1;
              *(undefined4 *)(iVar37 + 0x58) = 1;
              local_94 = 4;
              uVar44 = (*(code *)*DAT_0000df84)(&local_94);
            }
          }
          iVar37 = DAT_0000df7c;
          if ((*(int *)(DAT_0000df7c + 0x15c) != 0) &&
             ((*(int *)(DAT_0000df9c + 8) != 0 ||
              (uVar44 = CONCAT44((uint)*(byte *)ppuVar35 << 0x19,(int)uVar44),
              (uint)*(byte *)ppuVar35 << 0x19 != 0)))) {
            *(undefined4 *)(DAT_0000df7c + 0x15c) = 0;
            *DAT_0000df88 = (byte)*(undefined4 *)(iVar37 + 0x480) & 0x80;
            *puVar33 = *puVar33 & 0xfffefffe;
            *ppuVar34 = (undefined *)((uint)*ppuVar34 & 0xfffeffff | 1);
            local_94 = 5;
            uVar44 = (*(code *)*DAT_0000df84)(&local_94);
          }
          if ((*puVar33 & (uint)*ppuVar34) == 0) {
            return (undefined **)uVar44;
          }
          ppuVar32 = (undefined **)FUN_00014f54(DAT_0000df9c,(int)((ulonglong)uVar44 >> 0x20),0,0);
          if (ppuVar32 != (undefined **)0x0) {
            return ppuVar32;
          }
          if (*(int *)(DAT_0000df7c + 0x52c) != 0) goto LAB_0000df70;
          goto LAB_0000e0c0;
        case (undefined **)0x9:
        case (undefined **)0xd:
        case (undefined **)0xe:
        case (undefined **)0xf:
          FUN_00014f54(DAT_0000e3b4,pbVar15,0xffffffff,0xffffffff);
          FUN_0000e298(puVar30);
          ppuVar32 = (undefined **)FUN_00014f08(uVar16);
          *(undefined4 *)(DAT_0000e3b8 + 0x104) = 0x80;
          return ppuVar32;
        case (undefined **)0xb:
          puVar20 = (uint *)0x1;
          DAT_0000e5c0[0x140] = (undefined *)0x1;
          if (*(char *)((int)ppuVar11 + 0x86) != '\0') {
            ppuVar10[3] = (undefined *)0x1;
            return ppuVar11;
          }
          *ppuVar10 = (undefined *)0x1;
          ppuVar29 = ppuVar10;
        case (undefined **)0xc:
        case (undefined **)0x11:
          ppuVar29[1] = (undefined *)puVar20;
          return ppuVar11;
        case (undefined **)0x16:
          uVar19 = 5;
          ppuVar11 = DAT_0000e718;
          if (pbVar15[1] == 3) {
            iVar31 = 1;
          }
          else {
            if (pbVar15[1] != 4) {
              bVar43 = ((uint)*DAT_0000e718 & 7) == 0;
              goto switchD_00006432_caseD_0;
            }
            iVar31 = 0;
          }
          uVar25 = (uint)*(ushort *)(pbVar15 + 2);
          if (uVar25 < 0x400b) {
            if (0x3ffe < uVar25) {
              ppuVar10 = (undefined **)(uVar25 - 0x3fff);
              switch(ppuVar10) {
              case (undefined **)0x0:
code_r0x00016712:
                register0x0000002c = (((uint)unaff_r9 >> 0x12) + 0x7d) * 8;
                iVar37 = ((uint)unaff_r9 >> 0x12) + 0x7c;
                break;
              case (undefined **)0x1:
              case (undefined **)0x2:
              case (undefined **)0x3:
              case (undefined **)0x5:
              case (undefined **)0x7:
              case (undefined **)0x8:
              case (undefined **)0x9:
              case (undefined **)0xa:
                goto switchD_0000e65a_caseD_1;
              case (undefined **)0x4:
                register0x0000002c = (((uint)unaff_r9 >> 0xc) + 0x6f) * 8;
                iVar37 = ((uint)unaff_r9 >> 0xc) + 0x6e;
                break;
              case (undefined **)0x6:
                goto switchD_0000e65a_caseD_6;
              case (undefined **)0xb:
                ((byte *)((int)ppuVar10 + (int)ppuVar32))[0] = 5;
                ((byte *)((int)ppuVar10 + (int)ppuVar32))[1] = 0;
                if (ppuVar10 <= ppuVar29) goto code_r0x00016712;
                unique0x00088d00 = 0x3f8;
                iVar37 = 0x7e;
                break;
              default:
                goto switchD_0000e65a_caseD_c;
              }
              iVar31 = *(int *)((int)&switchD_0000e65a::switchdataD_0000e660 + register0x0000002c);
              register0x00000024 = register0x0000002c + 0xe658;
              if (register0x00000024 != iVar31) goto LAB_0001644c;
              uVar41 = uVar41 | 1 << (iVar37 >> 2 & 0xffU);
              UINT_0000e664 = uVar41;
              goto LAB_000162e2;
            }
            if (uVar25 == 0) {
              iVar23 = 2;
              goto LAB_0000e692;
            }
          }
          else {
            if (uVar25 == 0x4014) {
              iVar23 = 4;
LAB_0000e692:
              uVar41 = (uint)puVar33 & 0x20;
              bVar39 = (byte)(1 << ((uint)ppuVar29 & 0xff));
              iVar22 = (int)ppuVar29 * 0x10;
              if (uVar41 != 0) {
                bVar39 = *(byte *)(DAT_0000e728 + 0xa8) & ~bVar39;
              }
              else {
                bVar39 = *(byte *)(DAT_0000e728 + 0xa8) | bVar39;
              }
              *(byte *)(DAT_0000e728 + 0xa8) = bVar39;
              if (uVar41 != 0) {
                uVar41 = 1;
              }
              *(byte *)((int)ppuVar29 + iVar37 + 0xa0) = pbVar15[5];
              *(uint *)(iVar22 + 0x40007518) =
                   iVar31 << 0xc | 0x500U | iVar23 << 0x10 | uVar41 << 0x14;
              *(undefined4 *)(iVar22 + 0x40007510) = 0;
              *(undefined ***)(iVar22 + 0x40007514) = ppuVar32;
              return (undefined **)0x0;
            }
            if (uVar25 == 0x4028) {
              iVar23 = 5;
              goto LAB_0000e692;
            }
            if (uVar25 == 0x400f) {
              iVar23 = 3;
              goto LAB_0000e692;
            }
          }
switchD_0000e65a_caseD_c:
          uVar16 = DAT_0000e724;
          if (((uint)*DAT_0000e718 & 7) == 0) {
            return (undefined **)0xffffffea;
          }
          goto LAB_0000e618;
        case (undefined **)0x18:
          InstructionSynchronizationBarrier(0xf);
          return ppuVar11;
        case (undefined **)0x1b:
          ppuVar32 = (undefined **)FUN_00014f08(DAT_0000e4e0);
          *(undefined4 *)(DAT_0000e4e8 + 0x104) = 0x80;
          return ppuVar32;
        }
      }
    }
  } while( true );
LAB_0000e0c0:
  uVar41 = *puVar33;
  puVar36 = *ppuVar34;
  uVar19 = uVar41 & (uint)puVar36;
  if (uVar19 == 0) {
LAB_0000df70:
    ppuVar32 = (undefined **)FUN_00014f08(DAT_0000df9c);
    return ppuVar32;
  }
  uVar25 = uVar19 & 0x1000100;
  if (uVar25 == 0) {
    bVar4 = (byte)uVar19;
    bVar5 = (byte)(uVar19 >> 8);
    bVar6 = (byte)(uVar19 >> 0x10);
    bVar39 = (byte)(uVar19 >> 0x18);
    uVar19 = (uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1) << 1 | bVar4 >> 2 & 1) << 1 |
                             bVar4 >> 3 & 1) << 1 | bVar4 >> 4 & 1) << 1 | bVar4 >> 5 & 1) << 1 |
                          bVar4 >> 6 & 1) << 1 | bVar4 >> 7) << 0x18 |
             (uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1) << 1 | bVar5 >> 2 & 1) << 1 |
                             bVar5 >> 3 & 1) << 1 | bVar5 >> 4 & 1) << 1 | bVar5 >> 5 & 1) << 1 |
                          bVar5 >> 6 & 1) << 1 | bVar5 >> 7) << 0x10 |
             (uint)(byte)((((((((bVar6 & 1) << 1 | bVar6 >> 1 & 1) << 1 | bVar6 >> 2 & 1) << 1 |
                             bVar6 >> 3 & 1) << 1 | bVar6 >> 4 & 1) << 1 | bVar6 >> 5 & 1) << 1 |
                          bVar6 >> 6 & 1) << 1 | bVar6 >> 7) << 8 |
             (uint)(byte)((((((((bVar39 & 1) << 1 | bVar39 >> 1 & 1) << 1 | bVar39 >> 2 & 1) << 1 |
                             bVar39 >> 3 & 1) << 1 | bVar39 >> 4 & 1) << 1 | bVar39 >> 5 & 1) << 1 |
                          bVar39 >> 6 & 1) << 1 | bVar39 >> 7);
  }
  else {
    uVar19 = (uint)(byte)((char)(uVar25 >> 8) << 7) << 0x10 |
             (uint)(byte)((char)(uVar25 >> 0x18) << 7);
  }
  uVar19 = LZCOUNT(uVar19);
  if (uVar19 < 0x10) {
    uVar25 = uVar19 | 0x80;
    puVar30 = (uint *)FUN_0000d8f4(uVar25);
    puVar40 = (undefined *)*puVar30;
    puVar38 = (undefined *)(uint)(ushort)puVar30[5];
    if ((undefined *)puVar30[1] <= (undefined *)(uint)(ushort)puVar30[5]) {
      puVar38 = (undefined *)puVar30[1];
    }
    if (((uint)puVar40 & 0xe0000000) != 0x20000000) {
      FUN_00000820(DAT_0000e148,puVar40,puVar38);
      puVar40 = DAT_0000e148;
    }
    *puVar30 = (uint)(puVar38 + *puVar30);
    puVar21 = (undefined *)(puVar30[1] - (int)puVar38);
    cVar9 = (char)uVar25;
    puVar30[1] = (uint)puVar21;
    if ((int)(puVar30[2] << 0x1f) < 0) {
      puVar21 = puVar38;
    }
joined_r0x0000e02c:
    ppuVar32 = (undefined **)(int)cVar9;
    if (puVar21 == (undefined *)0x0) {
      *(undefined1 *)(puVar30 + 3) = 0;
    }
    *ppuVar34 = (undefined *)((uint)puVar36 & ~(1 << uVar19));
    uVar41 = puVar30[4];
    *(byte *)ppuVar35 = (byte)uVar25;
    puVar30[4] = (uint)(puVar38 + uVar41);
    iVar37 = DAT_0000e14c;
    if ((uVar25 & 8) == 0) {
      bVar43 = -1 < (int)ppuVar32;
      uVar25 = uVar25 & 0xf;
      ppuVar32 = (undefined **)(uVar25 * 0x14 + DAT_0000e14c);
      if (bVar43) {
        uVar25 = uVar25 + 10;
      }
      else {
        iVar37 = DAT_0000e14c + uVar25 * 4;
      }
      if (bVar43) {
        ppuVar32[0x1c0] = puVar40;
      }
      if (bVar43) {
        ppuVar32[0x1c1] = puVar38;
        *(undefined4 *)(iVar37 + uVar25 * 4) = 1;
      }
      if (!bVar43) {
        ppuVar32[0x180] = puVar40;
      }
      if (!bVar43) {
        ppuVar32[0x181] = puVar38;
      }
      if (!bVar43) {
        *(undefined4 *)(iVar37 + 4) = 1;
      }
    }
    else {
      bVar43 = (int)ppuVar32 < 0;
      if (bVar43) {
        *(undefined **)(DAT_0000e14c + 0x6a0) = puVar40;
      }
      if (!bVar43) {
        *(undefined **)(iVar37 + 0x7a0) = puVar40;
      }
      if (bVar43) {
        *(undefined **)(iVar37 + 0x6a4) = puVar38;
      }
      if (!bVar43) {
        *(undefined **)(iVar37 + 0x7a4) = puVar38;
      }
      if (bVar43) {
        *(undefined4 *)(iVar37 + 0x24) = 1;
      }
      if (!bVar43) {
        *(undefined4 *)(iVar37 + 0x48) = 1;
      }
    }
    return ppuVar32;
  }
  uVar25 = uVar19 - 0x10 & 0xff;
  puVar30 = (uint *)FUN_0000d8f4(uVar25);
  puVar12 = (undefined *)FUN_0000dca0(uVar25);
  puVar21 = (undefined *)puVar30[1];
  puVar40 = (undefined *)*puVar30;
  if (puVar21 < puVar12) {
    puVar38 = (undefined *)0x0;
  }
  else {
    puVar21 = puVar21 + -(int)puVar12;
    *puVar30 = (uint)(puVar12 + (int)puVar40);
    puVar30[1] = (uint)puVar21;
    puVar38 = puVar12;
  }
  if (puVar12 == (undefined *)(uint)(ushort)puVar30[5]) {
    if (puVar21 != (undefined *)0x0) {
      puVar21 = (undefined *)0x1;
    }
  }
  else {
    puVar21 = (undefined *)0x0;
  }
  cVar9 = (char)(uVar19 - 0x10);
  if ((puVar40 == (undefined *)0x0) || (puVar12 <= puVar38)) goto joined_r0x0000e02c;
  *puVar33 = uVar41 & ~(1 << uVar19);
  local_94 = CONCAT31(local_94._1_3_,6);
  pcVar28 = (code *)*DAT_0000e150;
  *(undefined1 *)((int)puVar30 + 0x16) = 2;
  local_94 = CONCAT13(2,CONCAT12(cVar9,(undefined2)local_94));
  (*pcVar28)(&local_94);
  goto LAB_0000e0c0;
  while (iVar31 = *(int *)(iVar31 + 8), register0x00000024 != iVar31) {
LAB_0001644c:
    if ((undefined **)(*(uint *)(iVar31 + 4) & 0xfffffffc) <= unaff_r9) break;
  }
  register0x00000024 = *(int *)(iVar31 + 0xc);
LAB_000162e2:
  unique0x100010c5 = iVar31;
  *(undefined4 *)(register0x00000024 + 8) = 5;
  *(undefined4 *)(iVar31 + 0xc) = 5;
  uVar19 = UINT_0000e668;
  uVar25 = 1 << ((int)in_r12 >> 2 & 0xffU);
  if (uVar25 <= uVar41) {
    if ((uVar25 & uVar41) == 0) {
      in_r12 = in_r12 & 0xfffffffc;
      do {
        uVar25 = uVar25 << 1;
        in_r12 = in_r12 + 4;
      } while ((uVar25 & uVar41) == 0);
    }
    do {
      puVar20 = &switchD_0000e65a::switchdataD_0000e660 + in_r12 * 2;
      puVar30 = puVar20;
      uVar41 = in_r12;
      do {
        puVar17 = (uint *)puVar30[3];
        while (puVar18 = puVar17, puVar30 != puVar18) {
          uVar14 = puVar18[1] & 0xfffffffc;
          uVar42 = uVar14 - (int)ppuVar32;
          puVar17 = (uint *)puVar18[3];
          if (0xf < (int)uVar42) {
            uVar41 = puVar18[2];
            UINT_0000e670 = (int)puVar18 + (int)ppuVar32;
            puVar18[1] = (uint)ppuVar32 | 1;
            *(uint **)(uVar41 + 0xc) = puVar17;
            puVar17[2] = uVar41;
            *(undefined ***)(UINT_0000e670 + 8) = ppuVar35;
            *(undefined ***)(UINT_0000e670 + 0xc) = ppuVar35;
            *(uint *)(UINT_0000e670 + 4) = uVar42 | 1;
            UINT_0000e674 = UINT_0000e670;
            *(uint *)((int)puVar18 + uVar14) = uVar42;
            FUN_00016954(puVar33);
            return (undefined **)(puVar18 + 2);
          }
          if (-1 < (int)uVar42) {
            *(uint *)((int)puVar18 + uVar14 + 4) = *(uint *)((int)puVar18 + uVar14 + 4) | 1;
            puVar36 = (undefined *)puVar18[2];
            *(uint **)(puVar36 + 0xc) = puVar17;
            puVar17[2] = (uint)puVar36;
            FUN_00016954(puVar33);
            return (undefined **)(puVar18 + 2);
          }
        }
        uVar41 = uVar41 + 1;
        puVar30 = puVar30 + 2;
      } while ((uVar41 & 3) != 0);
      do {
        uVar14 = in_r12 & 3;
        in_r12 = in_r12 - 1;
        if (uVar14 == 0) {
          UINT_0000e664 = UINT_0000e664 & ~uVar25;
          break;
        }
        puVar17 = puVar20 + -2;
        puVar30 = (uint *)*puVar20;
        puVar20 = puVar17;
      } while (puVar30 == puVar17);
      uVar25 = uVar25 * 2;
      if ((UINT_0000e664 <= uVar25 && uVar25 - UINT_0000e664 != 0) || (uVar25 == 0)) break;
      for (; in_r12 = uVar41, (uVar25 & UINT_0000e664) == 0; uVar25 = uVar25 << 1) {
        uVar41 = uVar41 + 4;
      }
    } while( true );
  }
  ppuVar10 = (undefined **)(*(uint *)(UINT_0000e668 + 4) & 0xfffffffc);
  if ((ppuVar32 <= ppuVar10) &&
     (uVar41 = (int)ppuVar10 - (int)ppuVar32, ppuVar11 = (undefined **)UINT_0000e668,
     0xf < (int)uVar41)) goto LAB_000163d0;
  ppuVar34 = (undefined **)(UINT_0000e668 + (int)ppuVar10);
  if (*DAT_000164ec == -1) {
    pbVar13 = (byte *)((int)ppuVar32 + *DAT_000164e8 + 0x10);
  }
  else {
    pbVar13 = (byte *)((uint)((int)ppuVar32 + *DAT_000164e8 + 0x100f) & 0xfffff000);
  }
  unaff_r9 = (undefined **)FUN_00016960(puVar33,pbVar13);
  unaff_r11 = DAT_00016738;
  piVar7 = DAT_000164ec;
  if (unaff_r9 == (undefined **)0xffffffff) {
LAB_000163ae:
    puVar36 = *(undefined **)(UINT_0000e668 + 4);
    ppuVar11 = (undefined **)UINT_0000e668;
  }
  else {
    if (unaff_r9 < ppuVar34) {
      if ((uint *)uVar19 != &switchD_0000e65a::switchdataD_0000e660) goto LAB_000163ae;
      pbVar15 = pbVar13 + (int)*DAT_00016738;
      *DAT_00016738 = pbVar15;
LAB_000165c4:
      if (*piVar7 == -1) {
        *piVar7 = (int)unaff_r9;
      }
      else {
        *unaff_r11 = pbVar15 + ((int)unaff_r9 - (int)ppuVar34);
      }
      uVar41 = (uint)unaff_r9 & 7;
      if (uVar41 == 0) {
        uVar25 = (uint)((int)((int)unaff_r9 + (int)pbVar13) * -0x100000) >> 0x14;
        iVar37 = FUN_00016960(puVar33,uVar25);
        if (iVar37 != -1) goto LAB_00016606;
        uVar25 = 0;
      }
      else {
        unaff_r9 = (undefined **)((int)unaff_r9 + (8 - uVar41));
        uVar25 = (0x1008 - uVar41) - (int)(pbVar13 + (int)unaff_r9) & 0xfff;
        iVar37 = FUN_00016960(puVar33,uVar25);
        if (iVar37 == -1) {
          pbVar13 = pbVar13 + (int)unaff_r9 + ((uVar41 - 8) - (int)unaff_r9);
          uVar25 = 0;
        }
        else {
LAB_00016606:
          pbVar13 = (byte *)((iVar37 - (int)unaff_r9) + uVar25);
        }
      }
      puVar36 = (undefined *)((uint)pbVar13 | 1);
      pbVar15 = *unaff_r11 + uVar25;
      UINT_0000e668 = (uint)unaff_r9;
      unaff_r9[1] = puVar36;
      *unaff_r11 = pbVar15;
      ppuVar11 = unaff_r9;
      if ((uint *)uVar19 != &switchD_0000e65a::switchdataD_0000e660) {
        if (ppuVar10 < &MemManage) {
          unaff_r9[1] = (undefined *)0x1;
          goto LAB_00016346;
        }
        ppuVar29 = (undefined **)((uint)(ppuVar10 + -3) & 0xfffffff8);
        ppuVar10 = (undefined **)(*(uint *)(uVar19 + 4) & 1);
switchD_0000e65a_caseD_1:
        *(uint *)(uVar19 + 4) = (uint)ppuVar10 | (uint)ppuVar29;
        pbVar13 = (byte *)((int)ppuVar29 + uVar19 + 4);
        pbVar13[0] = 5;
        pbVar13[1] = 0;
        pbVar13[2] = 0;
        pbVar13[3] = 0;
        pbVar13 = (byte *)((int)ppuVar29 + uVar19 + 8);
        pbVar13[0] = 5;
        pbVar13[1] = 0;
        pbVar13[2] = 0;
        pbVar13[3] = 0;
        ppuVar11 = unaff_r9;
        if ((undefined **)((int)&HardFault + 3) < ppuVar29) {
          pbVar15 = (byte *)(uVar19 + 8);
switchD_0000e65a_caseD_6:
          FUN_00018a90(puVar33,pbVar15);
          pbVar15 = *unaff_r11;
          ppuVar11 = (undefined **)UINT_0000e668;
        }
        puVar36 = ppuVar11[1];
      }
    }
    else {
      pbVar15 = pbVar13 + (int)*DAT_00016738;
      *DAT_00016738 = pbVar15;
      ppuVar11 = (undefined **)UINT_0000e668;
      if ((ppuVar34 != unaff_r9) || (((uint)unaff_r9 & 0xfff) != 0)) goto LAB_000165c4;
      puVar36 = (undefined *)((uint)(pbVar13 + (int)ppuVar10) | 1);
      *(undefined **)(UINT_0000e668 + 4) = puVar36;
    }
    if ((byte *)*DAT_0001673c < pbVar15) {
      *DAT_0001673c = pbVar15;
    }
    if ((byte *)*DAT_00016740 < pbVar15) {
      *DAT_00016740 = pbVar15;
    }
  }
  uVar41 = (int)((uint)puVar36 & 0xfffffffc) - (int)ppuVar32;
  if ((ppuVar32 <= (undefined **)((uint)puVar36 & 0xfffffffc)) && (0xf < (int)uVar41)) {
LAB_000163d0:
    UINT_0000e668 = (int)ppuVar11 + (int)ppuVar32;
    ppuVar11[1] = (undefined *)((uint)ppuVar32 | 1);
    *(uint *)(UINT_0000e668 + 4) = uVar41 | 1;
    FUN_00016954(puVar33);
    return ppuVar11 + 2;
  }
LAB_00016346:
  FUN_00016954(puVar33);
  return (undefined **)0x0;
}



// FUN_00006b98 @ 00006b98 (528 bytes, called_by=0, calls=0)

void FUN_00006b98(undefined4 *param_1,int param_2,undefined4 param_3)

{
  bool bVar1;
  code *pcVar2;
  int iVar3;
  ushort uVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  code *pcVar10;
  uint uVar11;
  undefined6 uVar12;
  
  uVar4 = *(ushort *)(param_1 + 6);
  if ((int)((uint)uVar4 << 0x1c) < 0) {
    if (param_2 == 1) {
      uVar4 = uVar4 | 0x10;
    }
    else {
      uVar4 = uVar4 | 0x20;
    }
    *(ushort *)(param_1 + 6) = uVar4;
LAB_00006bd8:
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      setBasePriority(param_3);
    }
    InstructionSynchronizationBarrier(0xf);
    return;
  }
  uVar6 = uVar4 & 7;
  if (param_2 != 2) goto switchD_00006bc0_caseD_1;
LAB_00006bb0:
  iVar3 = FUN_0001c152(param_1);
  if (iVar3 != 0) {
    uVar4 = *(ushort *)(param_1 + 6);
    switch(iVar3) {
    case 1:
      goto switchD_00006bc0_caseD_1;
    default:
      uVar11 = uVar4 & 7;
      if (uVar11 == uVar6) goto LAB_00006d38;
      pcVar10 = (code *)0x0;
      puVar8 = (undefined4 *)0x0;
      puVar9 = (undefined4 *)0x0;
      goto LAB_00006bf4;
    case 3:
      uVar4 = uVar4 & 0xfff8 | 6;
      pcVar10 = *(code **)param_1[4];
      *(ushort *)(param_1 + 6) = uVar4;
      if (uVar6 == 6) goto LAB_00006cb2;
      puVar9 = (undefined4 *)0x0;
      puVar8 = (undefined4 *)0x0;
      uVar11 = 6;
      goto LAB_00006bf4;
    case 4:
      uVar4 = uVar4 & 0xfff8 | 4;
      pcVar10 = *(code **)(param_1[4] + 4);
      *(ushort *)(param_1 + 6) = uVar4;
      if (uVar6 == 4) goto LAB_00006cb2;
      puVar9 = (undefined4 *)0x0;
      puVar8 = (undefined4 *)0x0;
      uVar11 = 4;
      goto LAB_00006bf4;
    case 5:
      uVar4 = uVar4 & 0xfff8 | 5;
      pcVar10 = *(code **)(param_1[4] + 8);
      *(ushort *)(param_1 + 6) = uVar4;
      if (uVar6 == 5) goto LAB_00006cb2;
      puVar8 = (undefined4 *)0x0;
      uVar11 = 5;
      puVar9 = puVar8;
      goto LAB_00006bf4;
    }
  }
  goto LAB_00006bd8;
switchD_00006bc0_caseD_1:
  puVar8 = (undefined4 *)param_1[5];
  uVar4 = *(ushort *)(param_1 + 6);
  if ((int)puVar8 < 0) {
    puVar9 = (undefined4 *)*param_1;
    *param_1 = 0;
    param_1[1] = 0;
    uVar4 = uVar4 & 0xfff8 | 1;
LAB_00006d62:
    *(ushort *)(param_1 + 6) = uVar4;
LAB_00006d64:
    uVar4 = *(ushort *)(param_1 + 6);
    uVar11 = uVar4 & 7;
    pcVar10 = (code *)0x0;
    pcVar2 = (code *)0x0;
    if (uVar11 == uVar6) {
LAB_00006d74:
      pcVar10 = pcVar2;
      if (puVar9 != (undefined4 *)0x0) {
        *(ushort *)(param_1 + 6) = uVar4 | 8;
        bVar1 = (bool)isCurrentModePrivileged();
        if (bVar1) {
          setBasePriority(param_3);
        }
        InstructionSynchronizationBarrier(0xf);
        goto LAB_00006d86;
      }
LAB_00006cb2:
      if (pcVar10 == (code *)0x0) goto LAB_00006d38;
      *(ushort *)(param_1 + 6) = uVar4 | 8;
      bVar1 = (bool)isCurrentModePrivileged();
      if (bVar1) {
        setBasePriority(param_3);
      }
      InstructionSynchronizationBarrier(0xf);
LAB_00006cc6:
      (*pcVar10)(param_1,DAT_00006db0);
    }
    else {
LAB_00006bf4:
      pcVar2 = pcVar10;
      if (param_1[2] == 0) goto LAB_00006d74;
      *(ushort *)(param_1 + 6) = uVar4 | 8;
      bVar1 = (bool)isCurrentModePrivileged();
      if (bVar1) {
        setBasePriority(param_3);
      }
      InstructionSynchronizationBarrier(0xf);
      puVar5 = (undefined4 *)param_1[2];
      if (puVar5 != (undefined4 *)0x0) {
        puVar7 = (undefined4 *)*puVar5;
        while (puVar5 != (undefined4 *)0x0) {
          (*(code *)puVar5[1])(param_1,puVar5,uVar11,puVar8);
          puVar5 = puVar7;
          if (puVar7 != (undefined4 *)0x0) {
            puVar7 = (undefined4 *)*puVar7;
          }
        }
      }
LAB_00006d86:
      while (puVar9 != (undefined4 *)0x0) {
        puVar5 = (undefined4 *)*puVar9;
        FUN_0001c1aa(param_1,puVar9,uVar11,puVar8);
        puVar9 = puVar5;
      }
      if (pcVar10 != (code *)0x0) goto LAB_00006cc6;
    }
    param_3 = 0;
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      param_3 = getBasePriority();
    }
    bVar1 = (bool)isCurrentModePrivileged();
    if ((bVar1) && (uVar6 = getBasePriority(), uVar6 == 0 || 0x40 < uVar6)) {
      setBasePriority(0x40);
    }
    InstructionSynchronizationBarrier(0xf);
    *(ushort *)(param_1 + 6) = *(ushort *)(param_1 + 6) & 0xfff7;
  }
  else {
    uVar11 = uVar4 & 7;
    if (uVar11 - 5 < 2) {
      uVar4 = uVar4 & 0xfff8;
      puVar9 = (undefined4 *)*param_1;
      *param_1 = 0;
      param_1[1] = 0;
      puVar5 = puVar9;
      if (uVar11 == 6) {
        for (; puVar5 != (undefined4 *)0x0; puVar5 = (undefined4 *)*puVar5) {
          *(short *)((int)param_1 + 0x1a) = *(short *)((int)param_1 + 0x1a) + 1;
        }
        uVar4 = uVar4 | 2;
      }
      *(ushort *)(param_1 + 6) = uVar4;
      uVar12 = FUN_0001c152(param_1);
      if ((int)uVar12 != 0) {
        uVar4 = (ushort)((uint6)uVar12 >> 0x20) | 0x20;
        goto LAB_00006d62;
      }
      goto LAB_00006d64;
    }
    if (uVar11 == 4) {
      *(ushort *)(param_1 + 6) = uVar4 & 0xfff8;
      uVar12 = FUN_0001c152(param_1);
      if ((int)uVar12 != 0) {
        *(ushort *)(param_1 + 6) = (ushort)((uint6)uVar12 >> 0x20) | 0x20;
      }
    }
    uVar4 = *(ushort *)(param_1 + 6);
    uVar11 = uVar4 & 7;
    if (uVar11 != uVar6) {
      pcVar10 = (code *)0x0;
      puVar9 = (undefined4 *)0x0;
      goto LAB_00006bf4;
    }
  }
LAB_00006d38:
  uVar4 = *(ushort *)(param_1 + 6);
  uVar6 = (uint)uVar4;
  if (-1 < (int)(uVar6 << 0x1b)) goto LAB_00006d9c;
  *(ushort *)(param_1 + 6) = uVar4 & 0xffef;
  uVar6 = uVar6 & 7;
  goto switchD_00006bc0_caseD_1;
LAB_00006d9c:
  if (-1 < (int)(uVar6 << 0x1a)) goto LAB_00006bd8;
  *(ushort *)(param_1 + 6) = uVar4 & 0xffdf;
  uVar6 = uVar6 & 7;
  goto LAB_00006bb0;
}



// FUN_00006db4 @ 00006db4 (94 bytes, called_by=0, calls=0)

int FUN_00006db4(uint param_1,uint *param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uStack_28;
  uint *local_24;
  undefined4 uStack_20;
  
  uVar1 = DAT_00006e14;
  uStack_28 = param_1;
  local_24 = param_2;
  uStack_20 = param_3;
  iVar2 = FUN_0001c5c2(*(undefined4 *)(param_1 + 0x2c),8);
  uVar4 = *param_2 - iVar2;
  *param_2 = uVar4;
  uVar5 = uVar4 & uVar1;
  while( true ) {
    if (uVar4 <= uVar5) {
      return 0;
    }
    iVar3 = FUN_0001c4ee(param_1,uVar4,&uStack_28,8);
    if (iVar3 != 0) break;
    iVar3 = FUN_0001c5d6(param_1,&uStack_28);
    if (iVar3 != 0) {
      *param_2 = uVar4;
      uVar5 = (uVar5 & uVar1) + (uStack_28 >> 0x10) + ((uint)local_24 & 0xffff);
    }
    uVar4 = uVar4 - iVar2;
  }
  return iVar3;
}



// FUN_00006e18 @ 00006e18 (84 bytes, called_by=0, calls=0)

undefined4 FUN_00006e18(int param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 local_18;
  undefined4 local_14;
  
  uVar1 = DAT_00006e6c;
  local_18 = param_1;
  local_14 = param_2;
  iVar2 = FUN_0001c5c2(*(undefined4 *)(param_1 + 0x2c),8);
  uVar3 = *(uint *)(param_1 + 4);
  local_14 = CONCAT13(local_14._3_1_,0xff0000);
  *(uint *)(param_1 + 4) = ((uVar3 & uVar1) + (uint)*(ushort *)(param_1 + 0xc)) - iVar2;
  local_18 = CONCAT22((short)uVar3 + (short)iVar2,0xffff);
  FUN_0001c5b0(&local_18);
  FUN_0001c756(param_1,&local_18);
  FUN_0001c560(param_1,param_1 + 4);
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 4) & uVar1;
  return 0;
}



// FUN_00006e70 @ 00006e70 (886 bytes, called_by=0, calls=0)

int FUN_00006e70(undefined4 *param_1)

{
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  uint *puVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  char *pcVar10;
  uint uVar11;
  undefined4 *puVar12;
  undefined8 uVar13;
  uint local_40;
  char local_3c [2];
  ushort local_3a;
  ushort local_38;
  short local_34 [2];
  short local_30;
  undefined1 auStack_2c [4];
  uint local_28;
  
  puVar12 = param_1 + 5;
  FUN_000208e2(puVar12);
  iVar5 = (**(code **)(*(int *)(param_1[10] + 8) + 0xc))();
  param_1[0xb] = iVar5;
  if (iVar5 == 0) {
    uVar9 = *DAT_0000710c;
    uVar3 = DAT_00007110;
joined_r0x00006eee:
    if ((uVar9 & 7) != 0) {
      thunk_FUN_0001cab2(DAT_0000710c,1,uVar3);
    }
    return -0x16;
  }
  piVar6 = (int *)(**(code **)(*(int *)(param_1[10] + 8) + 0xc))();
  if (0x1f < *piVar6 - 1U) {
    uVar9 = *DAT_0000710c;
    uVar3 = DAT_00007114;
    goto joined_r0x00006eee;
  }
  uVar13 = FUN_0001f1a2(param_1[10],*param_1,auStack_2c);
  if ((int)uVar13 != 0) {
    uVar9 = *DAT_0000710c;
    uVar3 = DAT_00007118;
    goto joined_r0x00006eee;
  }
  local_40 = (uint)*(ushort *)(param_1 + 3);
  if ((local_40 == 0) || (local_40 = local_40 - local_28 * (local_40 / local_28), local_40 != 0)) {
    uVar9 = *DAT_0000710c;
    uVar3 = DAT_0000711c;
    goto joined_r0x00006eee;
  }
  if (*(ushort *)((int)param_1 + 0xe) < 2) {
    uVar9 = *DAT_0000710c;
    uVar3 = DAT_00007120;
    goto joined_r0x00006eee;
  }
  cVar1 = *(char *)(param_1[0xb] + 5);
  FUN_00014d3c(puVar12,(int)((ulonglong)uVar13 >> 0x20),0xffffffff,0xffffffff);
  iVar5 = FUN_0001c5c2(param_1[0xb],8);
  uVar11 = 0;
  for (uVar9 = 0; (uVar9 & 0xffff) < (uint)*(ushort *)((int)param_1 + 0xe); uVar9 = uVar9 + 1) {
    local_40 = uVar9 * 0x10000 + ((uint)*(ushort *)(param_1 + 3) - iVar5 & 0xffff);
    iVar7 = FUN_0001c50a(param_1,local_40,cVar1,8);
    if (iVar7 != 0) {
      FUN_0001c560(param_1,&local_40);
      uVar11 = uVar11 + 1 & 0xffff;
      iVar7 = FUN_0001c50a(param_1,local_40,cVar1,8);
      if (iVar7 == 0) break;
    }
  }
  if (*(ushort *)((int)param_1 + 0xe) == uVar11) {
    FUN_00014e2c(puVar12);
    return -0x2d;
  }
  if (((uint)*(ushort *)((int)param_1 + 0xe) == (uVar9 & 0xffff)) &&
     (iVar7 = FUN_0001c50a(param_1,local_40 - iVar5,cVar1,8), iVar7 == 0)) {
    FUN_0001c560(param_1,&local_40);
  }
  iVar7 = FUN_00006db4(param_1,&local_40);
  if (iVar7 == 0) {
    param_1[1] = local_40;
    uVar9 = local_40 & 0xffff0000;
    param_1[2] = uVar9;
    while ((uint)param_1[2] <= (uint)param_1[1]) {
      iVar7 = FUN_0001c4ee(param_1,param_1[1],local_3c,8);
      if (iVar7 != 0) goto LAB_00006fae;
      iVar7 = 0;
      pcVar10 = local_3c;
      while (cVar1 == *pcVar10) {
        iVar7 = iVar7 + 1;
        pcVar10 = pcVar10 + 1;
        if (iVar7 == 8) goto LAB_00006fee;
      }
      iVar7 = FUN_0001c5d6(param_1,local_3c);
      iVar8 = param_1[1];
      if (iVar7 != 0) {
        uVar11 = (uint)local_38;
        param_1[2] = uVar9;
        iVar7 = FUN_0001c5c2(param_1[0xb],local_3a + uVar11);
        param_1[2] = iVar7 + uVar9;
        if ((iVar7 + uVar9 == iVar8) && (uVar11 != 0)) {
          iVar5 = -0x1d;
          goto LAB_000071fe;
        }
      }
      param_1[1] = iVar8 - iVar5;
    }
LAB_00006fee:
    local_40 = param_1[1] & 0xffff0000;
    FUN_0001c560(param_1,&local_40);
    iVar7 = FUN_0001c50a(param_1,local_40,cVar1,*(undefined2 *)(param_1 + 3));
    if (iVar7 < 0) goto LAB_00006fae;
    uVar9 = param_1[1];
    if (iVar7 == 0) {
      while( true ) {
        uVar9 = param_1[2];
        if ((uint)param_1[1] <= uVar9) break;
        iVar7 = FUN_0001c50a(param_1,uVar9,cVar1,param_1[1] - uVar9);
        if (iVar7 < 0) goto LAB_00006fae;
        if (iVar7 == 0) break;
        param_1[2] = param_1[2] + *(int *)param_1[0xb];
      }
      uVar9 = DAT_0000720c;
      if ((param_1[1] + iVar5 * 2 == (uint)*(ushort *)(param_1 + 3)) &&
         (param_1[2] != (param_1[1] & DAT_0000720c))) {
        iVar7 = FUN_0001c57e(param_1);
        if (iVar7 != 0) goto LAB_00006fae;
        param_1[2] = param_1[1] & uVar9;
        goto LAB_00007188;
      }
    }
    else {
      do {
        uVar9 = uVar9 + iVar5;
        local_40 = uVar9;
        if ((uint)*(ushort *)(param_1 + 3) - iVar5 <= (uVar9 & 0xffff)) {
          bVar2 = false;
          goto LAB_0000702e;
        }
        iVar7 = FUN_0001c4ee(param_1,uVar9,local_34,8);
        if (iVar7 != 0) goto LAB_00006fae;
        iVar7 = FUN_0001c5d6(param_1,local_34);
      } while (((iVar7 == 0) || (local_34[0] != -1)) || (local_30 != 0));
      bVar2 = true;
LAB_0000702e:
      if (bVar2) {
        if (2 < (*DAT_0000710c & 7)) {
          thunk_FUN_0001cab2(DAT_0000710c,3,DAT_00007124);
        }
        local_40 = param_1[1] & 0xffff0000;
        FUN_0001c560(param_1,&local_40);
        iVar7 = FUN_0001c57e(param_1,local_40);
      }
      else {
        if (2 < (*DAT_0000710c & 7)) {
          thunk_FUN_0001cab2(DAT_0000710c,3,DAT_00007128);
        }
        iVar7 = FUN_0001c57e(param_1,param_1[1]);
        uVar9 = DAT_0000712c;
        if (iVar7 != 0) goto LAB_00006fae;
        uVar11 = (param_1[1] & DAT_0000712c) + (uint)*(ushort *)(param_1 + 3) + iVar5 * -2;
        param_1[1] = uVar11;
        param_1[2] = uVar11 & uVar9;
        iVar7 = FUN_0001c7a6(param_1);
      }
    }
    if (iVar7 == 0) {
LAB_00007188:
      if ((uint)*(ushort *)(param_1 + 1) == (uint)*(ushort *)(param_1 + 3) + iVar5 * -2) {
        iVar5 = FUN_0001c778(param_1);
LAB_000071fe:
        FUN_00014e2c(puVar12);
        if (iVar5 != 0) {
          return iVar5;
        }
      }
      else {
        FUN_00014e2c(puVar12);
      }
      puVar4 = DAT_00007210;
      *(undefined1 *)(param_1 + 4) = 1;
      if (((2 < (*puVar4 & 7)) &&
          (FUN_0001cad8(puVar4,3,DAT_00007214,*(undefined2 *)((int)param_1 + 0xe),
                        *(undefined2 *)(param_1 + 3)), 2 < (*puVar4 & 7))) &&
         (FUN_0001cad8(puVar4,3,DAT_00007218,(uint)param_1[1] >> 0x10,param_1[1] & 0xffff),
         2 < (*puVar4 & 7))) {
        FUN_0001cad8(puVar4,3,DAT_0000721c,(uint)param_1[2] >> 0x10,param_1[2] & 0xffff);
      }
      return 0;
    }
  }
LAB_00006fae:
  FUN_00014e2c(puVar12);
  return iVar7;
}



// FUN_00007220 @ 00007220 (426 bytes, called_by=0, calls=0)

uint FUN_00007220(int param_1,uint param_2,int param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  undefined8 uVar10;
  uint local_54;
  ushort local_50;
  ushort local_4e;
  ushort local_4c;
  undefined2 local_48;
  undefined2 local_46;
  undefined2 local_44;
  undefined1 local_42;
  
  if (*(char *)(param_1 + 0x10) == '\0') {
    if ((*DAT_000073cc & 7) != 0) {
      thunk_FUN_0001cab2(DAT_000073cc,1,DAT_000073d0);
    }
    uVar5 = 0xfffffff3;
  }
  else {
    uVar4 = *(undefined4 *)(param_1 + 0x2c);
    iVar1 = FUN_0001c5c2(uVar4,8);
    iVar2 = FUN_0001c5c2(uVar4,param_4);
    if (((uint)*(ushort *)(param_1 + 0xc) + iVar1 * -4 < param_4) ||
       ((param_4 != 0 && (param_3 == 0)))) {
      uVar5 = 0xffffffea;
    }
    else {
      local_54 = *(uint *)(param_1 + 4);
      do {
        uVar5 = local_54;
        uVar10 = FUN_0001c650(param_1,&local_54,&local_50);
        uVar4 = (undefined4)((ulonglong)uVar10 >> 0x20);
        if ((uint)uVar10 != 0) {
          return (uint)uVar10;
        }
        if (local_50 == param_2) {
          uVar10 = FUN_0001c5d6(param_1,&local_50);
          uVar4 = (undefined4)((ulonglong)uVar10 >> 0x20);
          if ((int)uVar10 != 0) {
            if (param_4 == 0) {
              if (local_4c == 0) {
                return 0;
              }
              goto LAB_00007318;
            }
            if (param_4 != local_4c) goto LAB_00007318;
            uVar8 = -**(int **)(param_1 + 0x2c) & 0x20;
            iVar7 = (uint)local_4e + (uVar5 & 0xffff0000);
            uVar5 = param_4;
            iVar9 = param_3;
            goto LAB_000072e2;
          }
        }
      } while (*(uint *)(param_1 + 4) != local_54);
      uVar5 = 0;
      if (param_4 != 0) {
LAB_00007318:
        if (iVar2 == 0) {
          uVar8 = 0;
        }
        else {
          uVar8 = iVar2 + iVar1 & 0xffff;
        }
        FUN_00014d3c(param_1 + 0x14,uVar4,0xffffffff,0xffffffff);
        for (uVar6 = 0; uVar6 != *(ushort *)(param_1 + 0xe); uVar6 = uVar6 + 1) {
          iVar1 = *(int *)(param_1 + 8);
          if (uVar8 + iVar1 <= *(uint *)(param_1 + 4)) {
            local_48 = (undefined2)param_2;
            local_42 = 0xff;
            local_46 = (undefined2)iVar1;
            local_44 = (undefined2)param_4;
            uVar5 = FUN_0001c6e4(param_1,iVar1,param_3,param_4);
            iVar1 = FUN_0001c5c2(*(undefined4 *)(param_1 + 0x2c),param_4);
            *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + iVar1;
            if (uVar5 == 0) {
              FUN_0001c5b0(&local_48);
              uVar5 = FUN_0001c756(param_1,&local_48);
              if (uVar5 == 0) {
                uVar5 = param_4;
              }
            }
            goto LAB_00007388;
          }
          uVar5 = FUN_00006e18(param_1);
          if ((uVar5 != 0) || (uVar5 = FUN_0001c7a6(param_1), uVar5 != 0)) goto LAB_00007388;
        }
        uVar5 = 0xffffffe4;
LAB_00007388:
        FUN_00014e2c(param_1 + 0x14);
      }
    }
  }
  return uVar5;
LAB_000072e2:
  uVar6 = uVar8;
  if (uVar5 <= uVar8) {
    uVar6 = uVar5;
  }
  uVar10 = FUN_0001c4ee(param_1,iVar7,&local_48,uVar6);
  uVar4 = (undefined4)((ulonglong)uVar10 >> 0x20);
  uVar3 = (uint)uVar10;
  if (uVar3 != 0) {
    if ((int)uVar3 < 1) {
      return uVar3;
    }
    goto LAB_00007318;
  }
  uVar10 = FUN_00016744(iVar9,&local_48,uVar6);
  uVar4 = (undefined4)((ulonglong)uVar10 >> 0x20);
  if ((int)uVar10 != 0) goto LAB_00007318;
  uVar5 = uVar5 - uVar6;
  iVar7 = iVar7 + uVar6;
  iVar9 = iVar9 + uVar6;
  if (uVar5 == 0) {
    return 0;
  }
  goto LAB_000072e2;
}



// FUN_000073d4 @ 000073d4 (206 bytes, called_by=0, calls=0)

uint FUN_000073d4(int param_1,uint param_2,uint param_3,uint param_4,ushort param_5)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  ushort uVar4;
  uint local_2c;
  uint local_28;
  uint local_24;
  
  local_2c = param_2;
  local_28 = param_3;
  local_24 = param_4;
  if (*(char *)(param_1 + 0x10) == '\0') {
    if ((*DAT_000074a4 & 7) != 0) {
      thunk_FUN_0001cab2(DAT_000074a4,1,DAT_000074a8);
    }
    uVar1 = 0xfffffff3;
  }
  else {
    iVar2 = FUN_0001c5c2(*(undefined4 *)(param_1 + 0x2c),8,param_3,*(char *)(param_1 + 0x10),param_1
                        );
    if ((uint)*(ushort *)(param_1 + 0xc) + iVar2 * -2 < param_4) {
      uVar1 = 0xffffffea;
    }
    else {
      local_2c = *(uint *)(param_1 + 4);
      uVar4 = 0;
      uVar1 = local_2c;
      do {
        uVar3 = local_2c;
        if (param_5 < uVar4) {
          uVar3 = uVar1;
          if (*(uint *)(param_1 + 4) != local_2c) goto LAB_0000746c;
          break;
        }
        uVar1 = FUN_0001c650(param_1,&local_2c,&local_28);
        if (uVar1 != 0) {
          return uVar1;
        }
        if (((local_28 & 0xffff) == param_2) &&
           (iVar2 = FUN_0001c5d6(param_1,&local_28), iVar2 != 0)) {
          uVar4 = uVar4 + 1;
        }
        uVar1 = uVar3;
      } while (*(uint *)(param_1 + 4) != local_2c);
      if ((local_28 & 0xffff) == param_2) {
LAB_0000746c:
        uVar1 = local_24 & 0xffff;
        if ((uVar1 != 0) && (param_5 <= uVar4)) {
          if (param_4 <= uVar1) {
            uVar1 = param_4;
          }
          uVar1 = FUN_0001c4ee(param_1,(uVar3 & 0xffff0000) + (local_28 >> 0x10),param_3,uVar1);
          if (uVar1 != 0) {
            return uVar1;
          }
          return local_24 & 0xffff;
        }
      }
      uVar1 = 0xfffffffe;
    }
  }
  return uVar1;
}



// FUN_000074ac @ 000074ac (94 bytes, called_by=0, calls=0)

uint FUN_000074ac(uint param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  code *pcVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  
  iVar5 = DAT_0000750c;
  uVar10 = param_1;
  while (param_1 != 0) {
    bVar2 = (byte)param_1;
    bVar3 = (byte)(param_1 >> 8);
    bVar4 = (byte)(param_1 >> 0x10);
    bVar1 = (byte)(param_1 >> 0x18);
    iVar8 = LZCOUNT((uint)(byte)((((((((bVar2 & 1) << 1 | bVar2 >> 1 & 1) << 1 | bVar2 >> 2 & 1) <<
                                     1 | bVar2 >> 3 & 1) << 1 | bVar2 >> 4 & 1) << 1 |
                                  bVar2 >> 5 & 1) << 1 | bVar2 >> 6 & 1) << 1 | bVar2 >> 7) << 0x18
                    | (uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1) << 1 | bVar3 >> 2 & 1)
                                       << 1 | bVar3 >> 3 & 1) << 1 | bVar3 >> 4 & 1) << 1 |
                                    bVar3 >> 5 & 1) << 1 | bVar3 >> 6 & 1) << 1 | bVar3 >> 7) <<
                      0x10 | (uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1) << 1 |
                                              bVar4 >> 2 & 1) << 1 | bVar4 >> 3 & 1) << 1 |
                                            bVar4 >> 4 & 1) << 1 | bVar4 >> 5 & 1) << 1 |
                                          bVar4 >> 6 & 1) << 1 | bVar4 >> 7) << 8 |
                    (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1) << 1 | bVar1 >> 2 & 1) <<
                                     1 | bVar1 >> 3 & 1) << 1 | bVar1 >> 4 & 1) << 1 |
                                  bVar1 >> 5 & 1) << 1 | bVar1 >> 6 & 1) << 1 | bVar1 >> 7));
    iVar9 = iVar5 + iVar8 * 0x10;
    param_1 = param_1 & ~(1 << iVar8);
    if ((*(char *)(iVar9 + 0xc) != '\0') &&
       ((pcVar7 = *(code **)(*(int *)(iVar5 + iVar8 * 0x10) + 0x10), pcVar7 == (code *)0x0 ||
        (iVar6 = (*pcVar7)(iVar9), iVar6 == 0)))) {
      uVar10 = uVar10 & ~(1 << iVar8);
      FUN_00007ae0(iVar9,**(undefined4 **)(iVar8 * 0x10 + iVar5 + 4),4);
    }
  }
  return uVar10;
}



// FUN_00007510 @ 00007510 (66 bytes, called_by=0, calls=0)

undefined4 FUN_00007510(void)

{
  undefined4 uVar1;
  
  FUN_00020f5a(DAT_00007558,DAT_00007554,0);
  uVar1 = DAT_0000755c;
  FUN_000153fc(DAT_0000755c,DAT_00007560,0x300,DAT_00007564,0,0,0,0xe,0);
  FUN_00020bd0(uVar1,DAT_00007568);
  return 0;
}



// FUN_00007694 @ 00007694 (28 bytes, called_by=0, calls=0)

undefined4 FUN_00007694(void)

{
  bool bVar1;
  undefined4 uVar2;
  
  DataMemoryBarrier(0x1b);
  do {
    ExclusiveAccess(DAT_000076b0);
    uVar2 = *DAT_000076b0;
    bVar1 = (bool)hasExclusiveAccess(DAT_000076b0);
  } while (!bVar1);
  *DAT_000076b0 = 0;
  DataMemoryBarrier(0x1b);
  return uVar2;
}



// FUN_000076b4 @ 000076b4 (40 bytes, called_by=0, calls=0)

void FUN_000076b4(void)

{
  int *piVar1;
  undefined4 uVar2;
  int *piVar3;
  
  uVar2 = FUN_00007694();
  piVar1 = DAT_000076e0;
  for (piVar3 = DAT_000076dc; piVar3 < piVar1; piVar3 = piVar3 + 4) {
    if ((*(char *)(piVar3[1] + 5) != '\0') && (*(code **)(*piVar3 + 4) != (code *)0x0)) {
      (**(code **)(*piVar3 + 4))(piVar3,uVar2);
    }
  }
  return;
}



// FUN_000076e4 @ 000076e4 (18 bytes, called_by=0, calls=0)

void FUN_000076e4(void)

{
  undefined4 uVar1;
  
  uVar1 = DAT_000076f8;
  FUN_0001be54(DAT_000076f8,DAT_000076fc);
  *DAT_00007700 = uVar1;
  return;
}



// FUN_0000773c @ 0000773c (12 bytes, called_by=0, calls=0)

void FUN_0000773c(undefined4 param_1)

{
  FUN_0001be96(DAT_00007748,param_1,0,0);
  return;
}



// FUN_0000774c @ 0000774c (6 bytes, called_by=0, calls=0)

void FUN_0000774c(void)

{
  FUN_0001bfcc(DAT_00007754);
  return;
}



// FUN_00007758 @ 00007758 (10 bytes, called_by=0, calls=0)

void FUN_00007758(undefined4 param_1)

{
  FUN_0001c074(*DAT_00007764,param_1);
  return;
}



// FUN_00007774 @ 00007774 (274 bytes, called_by=0, calls=0)

longlong FUN_00007774(undefined4 param_1,uint param_2)

{
  ushort uVar1;
  ushort uVar2;
  undefined4 *puVar3;
  uint *puVar4;
  ushort *puVar5;
  uint uVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  undefined4 *puVar10;
  bool bVar11;
  longlong lVar12;
  
  if (*DAT_00007850 == '\0') {
    return (ulonglong)param_2 << 0x20;
  }
  puVar5 = (ushort *)FUN_0000774c();
  if (puVar5 != (ushort *)0x0) {
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(DAT_00007854);
      bVar11 = (bool)hasExclusiveAccess(DAT_00007854);
    } while (!bVar11);
    *DAT_00007854 = *DAT_00007854 + -1;
    puVar3 = DAT_0000785c;
    DataMemoryBarrier(0x1b);
    for (puVar10 = DAT_00007858; puVar10 < puVar3; puVar10 = puVar10 + 4) {
      if (*(char *)(puVar10[1] + 5) != '\0') {
        uVar2 = *puVar5;
        if (-1 < (int)((uint)(byte)uVar2 << 0x1d)) {
          uVar1 = *puVar5;
          iVar9 = FUN_00007d20(puVar5);
          uVar6 = ((uint)uVar1 << 0x17) >> 0x1d;
          if (((uVar6 != 0) && (-1 < iVar9)) &&
             (uVar8 = FUN_00007b14(puVar10,((uint)(byte)uVar2 << 0x1a) >> 0x1d,iVar9,1),
             uVar8 < uVar6)) goto LAB_0000781c;
        }
        (**(code **)*puVar10)(puVar10,puVar5);
      }
LAB_0000781c:
    }
    FUN_00007758(puVar5);
  }
  puVar4 = DAT_00007864;
  if (0 < *DAT_00007860) {
    lVar12 = thunk_FUN_00015da4();
    uVar6 = (uint)((ulonglong)(lVar12 * 1000) >> 0x20);
    uVar8 = (uint)(lVar12 * 1000) >> 0xf | uVar6 * 0x20000;
    uVar6 = ((uVar6 >> 0xf) - puVar4[1]) - (uint)(uVar8 < *puVar4);
    bVar11 = 1000 < uVar8 - *puVar4;
    if (uVar6 != 0 || uVar6 < bVar11) {
      FUN_000076b4(puVar4[1],uVar6 - !bVar11);
    }
  }
  uVar6 = *puVar4;
  *puVar4 = uVar6 + 1000;
  puVar4[1] = puVar4[1] + (uint)(0xfffffc17 < uVar6);
  uVar7 = 0;
  bVar11 = (bool)isCurrentModePrivileged();
  if (bVar11) {
    uVar7 = getBasePriority();
  }
  bVar11 = (bool)isCurrentModePrivileged();
  if ((bVar11) && (uVar6 = getBasePriority(), uVar6 == 0 || 0x40 < uVar6)) {
    setBasePriority(0x40);
  }
  InstructionSynchronizationBarrier(0xf);
  if (((*(uint *)(DAT_00007770 + 0x10) & 8) != 0) ||
     (uVar6 = *(uint *)(DAT_00007770 + 4), uVar6 < *(uint *)(DAT_00007770 + 8))) {
    uVar6 = *(uint *)(DAT_00007770 + 0x20);
  }
  iVar9 = uVar6 - *(uint *)(DAT_00007770 + 8);
  bVar11 = (bool)isCurrentModePrivileged();
  if (bVar11) {
    setBasePriority(uVar7);
  }
  InstructionSynchronizationBarrier(0xf);
  if (iVar9 != 0) {
    iVar9 = 1;
  }
  return CONCAT44(uVar7,iVar9);
}



// FUN_0000799c @ 0000799c (20 bytes, called_by=0, calls=0)

undefined4 FUN_0000799c(undefined4 param_1,uint param_2)

{
  undefined4 uVar1;
  
  if (param_2 < (uint)(DAT_000079b4 - DAT_000079b0) >> 3) {
    uVar1 = *(undefined4 *)(DAT_000079b0 + param_2 * 8);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



// FUN_000079f4 @ 000079f4 (168 bytes, called_by=0, calls=0)

uint FUN_000079f4(uint param_1,undefined4 param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  if ((int)param_1 < 0) {
    uVar4 = DAT_00007aa0 - DAT_00007a9c;
    uVar3 = 0;
    iVar5 = DAT_00007a9c;
    for (uVar6 = 0; uVar6 != uVar4 >> 4; uVar6 = uVar6 + 1) {
      uVar1 = FUN_000079f4(*(undefined1 *)(*(int *)(iVar5 + 4) + 4),param_2,param_3,param_4);
      if (uVar3 < uVar1) {
        uVar3 = uVar1;
      }
      iVar5 = iVar5 + 0x10;
    }
  }
  else {
    if (param_3 < (uint)(DAT_00007aa8 - DAT_00007aa4) >> 3) {
      uVar3 = (uint)*(byte *)(DAT_00007aa4 + param_3 * 8 + 4);
      if (param_4 <= uVar3) {
        uVar3 = param_4;
      }
    }
    else {
      uVar3 = 0;
    }
    uVar4 = (param_1 & 0xff) * 3;
    uVar1 = *(uint *)(DAT_00007aac + param_3 * 4) & ~(7 << (uVar4 & 0xff)) |
            (uVar3 & 7) << (uVar4 & 0xff);
    uVar4 = 0;
    uVar6 = 3;
    do {
      uVar2 = uVar1 >> (uVar6 & 0xff) & 7;
      uVar6 = uVar6 + 3;
      if (uVar4 < uVar2) {
        uVar4 = uVar2;
      }
    } while (uVar6 != 0x1e);
    *(uint *)(DAT_00007aac + param_3 * 4) = uVar1 & 0xfffffff8 | uVar4;
  }
  return uVar3;
}



// FUN_00007ab0 @ 00007ab0 (40 bytes, called_by=0, calls=0)

void FUN_00007ab0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = DAT_00007ad8 - DAT_00007adc;
  for (uVar1 = 0; uVar1 < uVar2 >> 3; uVar1 = uVar1 + 1 & 0xffff) {
    FUN_0001c9be(param_1,0,(int)(short)uVar1,param_2,param_4);
  }
  return;
}



// FUN_00007ae0 @ 00007ae0 (66 bytes, called_by=0, calls=0)

void FUN_00007ae0(int param_1,undefined4 param_2,undefined1 param_3)

{
  char *pcVar1;
  
  *(char *)(*(int *)(param_1 + 4) + 4) = (char)(param_1 - DAT_00007b10 >> 4) + '\x01';
  *(undefined1 *)(*(int *)(param_1 + 4) + 6) = param_3;
  FUN_00007ab0();
  **(undefined4 **)(param_1 + 4) = param_2;
  *(undefined1 *)(*(int *)(param_1 + 4) + 5) = 1;
  pcVar1 = DAT_00007648;
  if (*DAT_00007648 == '\0') {
    FUN_00014f08(DAT_0000764c);
  }
  *pcVar1 = '\x01';
  return;
}



// FUN_00007b14 @ 00007b14 (64 bytes, called_by=0, calls=0)

uint FUN_00007b14(int param_1,undefined4 param_2,uint param_3,int param_4)

{
  uint uVar1;
  byte bVar2;
  
  if (param_1 == 0) {
    bVar2 = 0xff;
  }
  else {
    bVar2 = *(byte *)(*(int *)(param_1 + 4) + 4);
  }
  if (param_4 == 0) {
    if (param_3 < (uint)(DAT_00007b5c - DAT_00007b58) >> 3) {
      uVar1 = (uint)*(byte *)(DAT_00007b58 + param_3 * 8 + 4);
    }
    else {
      uVar1 = 0;
    }
    return uVar1;
  }
  if ((int)param_3 < 0) {
    return 4;
  }
  return *(uint *)(DAT_00007b54 + param_3 * 4) >> ((uint)bVar2 * 3 & 0xff) & 7;
}



// FUN_00007b60 @ 00007b60 (254 bytes, called_by=0, calls=0)

void FUN_00007b60(undefined4 param_1,uint param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined1 *local_5c;
  undefined4 local_58;
  uint local_50;
  undefined4 local_4c;
  undefined4 local_48;
  uint local_44;
  undefined1 auStack_3c [8];
  int local_34;
  uint local_30;
  undefined4 local_2c;
  
  uVar2 = (param_2 << 0xc) >> 0x15;
  local_4c = param_4;
  local_48 = param_1;
  if (uVar2 == 0) {
    iVar1 = FUN_0000773c(((param_2 >> 0x14) + 0x17 & 0xfffffff8) >> 2);
    uVar2 = 0;
  }
  else {
    local_5c = auStack_3c;
    local_34 = 0;
    local_30 = 0;
    local_2c = 0;
    local_58 = 4;
    local_60 = 10;
    local_44 = uVar2;
    local_50 = FUN_000059a8(param_3,uVar2,0,&local_34);
    if (0x7ff < local_50) {
      if ((*DAT_00007c60 & 6) == 0) {
        return;
      }
      local_60 = *(undefined4 *)(param_3 + 4);
      local_64 = DAT_00007c64;
      local_5c = (undefined1 *)0x7ff;
      local_58 = CONCAT22(local_58._2_2_,0x200);
      local_68 = DAT_00007c68;
      FUN_00007b60(DAT_00007c60,&DAT_00002480,&local_68,0);
      return;
    }
    uVar2 = local_50 & 0x7ff;
    iVar1 = FUN_0000773c(((param_2 >> 0x14) + 0x17 + local_50 & 0xfffffff8) >> 2);
    param_2 = param_2 & 0xfff001ff;
    if (iVar1 != 0) {
      local_30 = local_50;
      local_2c = 0;
      local_34 = iVar1 + 0x10;
      local_5c = auStack_3c;
      local_60 = 10;
      local_58 = 4;
      FUN_000059a8(param_3,local_44,DAT_00007c6c,&local_34);
    }
  }
  FUN_0001ca12(iVar1,local_48,param_2 & 0xfff001ff | uVar2 << 9,local_4c);
  return;
}



// FUN_00007c70 @ 00007c70 (342 bytes, called_by=0, calls=0)

void FUN_00007c70(uint param_1,undefined4 param_2,uint param_3,undefined4 param_4,int param_5,
                 undefined4 param_6,int param_7,undefined4 param_8)

{
  uint uVar1;
  int iVar2;
  
  if (param_7 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_00005604(0,0x10,param_6,param_7,param_8);
    if (0x7ff < uVar1) {
      if ((*DAT_00007d18 & 6) != 0) {
        FUN_0001cac4(DAT_00007d18,2,DAT_00007d1c,0x7ff);
        return;
      }
      return;
    }
  }
  iVar2 = FUN_0000773c((param_5 + 0x17 + uVar1 & 0xfffffff8) >> 2);
  if ((iVar2 != 0) && (param_7 != 0)) {
    FUN_00005604(iVar2 + 0x10,uVar1,param_6,param_7,param_8);
  }
  FUN_0001ca12(iVar2,param_2,(param_1 & 7) << 3 | (param_3 & 7) << 6 | uVar1 << 9 | param_5 << 0x14,
               param_4);
  return;
}



// FUN_00007d20 @ 00007d20 (20 bytes, called_by=0, calls=0)

int FUN_00007d20(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    return (*(int *)(param_1 + 4) - DAT_00007d34) * 0x4000 >> 0x10;
  }
  return -1;
}



// FUN_00007d38 @ 00007d38 (30 bytes, called_by=0, calls=0)

void FUN_00007d38(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  uStack_8 = param_3;
  uStack_4 = param_4;
  FUN_0001cb26(DAT_00007d58,param_1,param_2,&uStack_8,param_1,&uStack_8);
  return;
}



// FUN_00007d5c @ 00007d5c (18 bytes, called_by=0, calls=0)

void FUN_00007d5c(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  
  if (-1 < param_2 << 0x1b) {
    uVar1 = DAT_00007d70;
    if (-1 < param_2 << 0x1a) {
      uVar1 = DAT_00007d74;
    }
    FUN_00007d38(param_1,uVar1);
    return;
  }
  return;
}



// FUN_00007d78 @ 00007d78 (646 bytes, called_by=0, calls=0)

void FUN_00007d78(undefined4 param_1,uint param_2,int param_3,int param_4,undefined4 param_5,
                 byte param_6,int param_7,undefined1 *param_8,uint param_9,uint param_10)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint local_38;
  undefined1 *local_34;
  
  uVar8 = (uint)param_6;
  local_34 = param_8;
  local_38 = param_9;
  if (uVar8 == 0) {
    uVar4 = DAT_00008030;
    if (param_4 == 1) {
      uVar4 = DAT_00008034;
    }
    if (param_7 == 0) {
      if (param_9 != 0) {
        iVar2 = 0;
        uVar4 = DAT_00008040;
        uVar1 = DAT_0000803c;
        goto LAB_00007f12;
      }
      goto LAB_00007fe6;
    }
    iVar2 = 0;
LAB_00007efa:
    FUN_0001babc(uVar4,DAT_00008038,param_1,param_7);
    uVar4 = DAT_00008040;
    uVar1 = DAT_0000803c;
    if (param_9 != 0) {
LAB_00007f12:
      uVar3 = local_38;
      if (0xf < local_38) {
        uVar3 = 0x10;
      }
      FUN_00007d5c(param_1,param_10);
      for (iVar5 = 0; iVar5 < iVar2; iVar5 = iVar5 + 1) {
        FUN_00007d38(param_1,uVar1);
      }
      FUN_00007d38(param_1,uVar4,*local_34);
      uVar7 = 1;
      do {
        if ((uVar7 & 7) == 0) {
          FUN_00007d38(param_1,uVar1);
        }
        if (uVar7 < uVar3) {
          FUN_00007d38(param_1,uVar4,local_34[uVar7]);
        }
        else {
          FUN_00007d38(param_1,DAT_00008050);
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 != 0x10);
      uVar7 = 0;
      FUN_00007d38(param_1,DAT_00008044);
      do {
        uVar6 = (uint)(byte)local_34[uVar7];
        if ((*(byte *)(DAT_00008048 + uVar6) & 0x97) == 0) {
          uVar6 = 0x2e;
        }
        FUN_00007d38(param_1,DAT_0000804c,uVar6);
        while( true ) {
          uVar7 = uVar7 + 1;
          if (uVar7 == 0x10) {
            local_34 = local_34 + uVar3;
            local_38 = local_38 - uVar3;
            if (local_38 != 0) goto LAB_00007f12;
            goto LAB_00007fde;
          }
          if ((uVar7 & 7) == 0) {
            FUN_00007d38(param_1,uVar1);
          }
          if (uVar7 < uVar3) break;
          FUN_00007d38(param_1,uVar1);
        }
      } while( true );
    }
LAB_00007fde:
    if (uVar8 == 0) goto LAB_00007fe6;
  }
  else {
    iVar2 = FUN_0001c9ba();
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = FUN_00007d38(param_1,DAT_00008000,iVar2);
    }
    if ((param_10 & 2) != 0) {
      if ((param_10 & 0x44) == 0) {
        uVar3 = FUN_00007d38(param_1,DAT_00008004,param_2);
      }
      else {
        uVar3 = *DAT_00008018;
        if (uVar3 != 0) {
          uVar7 = (param_2 / *DAT_0000801c) / uVar3;
          uVar6 = (param_2 / *DAT_0000801c - uVar3 * uVar7) * 1000;
          uVar9 = uVar6 / uVar3;
          uVar3 = FUN_00007d38(param_1,DAT_00008020,uVar7 / 0xe10,(uVar7 % 0xe10) / 0x3c,
                               (uVar7 % 0xe10) % 0x3c,uVar9,((uVar6 - uVar3 * uVar9) * 1000) / uVar3
                              );
        }
      }
      iVar2 = iVar2 + uVar3;
    }
    if ((param_10 & 1) != 0) {
      iVar5 = *(int *)(DAT_00008008 + uVar8 * 4);
      if (iVar5 == 0) {
        iVar5 = DAT_00008010;
      }
      FUN_00007d38(param_1,DAT_0000800c,iVar5);
    }
    if ((param_10 & 0x100) == 0) {
      if ((param_10 & 8) != 0) goto LAB_00007e94;
      uVar3 = param_10 & 8;
LAB_00007ea4:
      if (param_3 != 0) {
        iVar5 = FUN_00007d38(param_1,DAT_00008014,param_3);
        uVar3 = uVar3 + iVar5;
      }
      if (param_4 != 0) {
        iVar5 = FUN_00007d38(param_1,DAT_0000802c,param_4);
        uVar3 = uVar3 + iVar5;
      }
    }
    else {
      if ((param_10 & 8) != 0) {
        param_4 = 0;
LAB_00007e94:
        uVar3 = FUN_00007d38(param_1,DAT_00008028,*(undefined4 *)(DAT_00008024 + uVar8 * 4));
        goto LAB_00007ea4;
      }
      if (param_3 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = FUN_00007d38(param_1,DAT_00008014,param_3);
      }
    }
    iVar2 = uVar3 + iVar2;
    uVar4 = DAT_00008034;
    if (param_7 != 0) goto LAB_00007efa;
    uVar4 = DAT_00008040;
    uVar1 = DAT_0000803c;
    if (param_9 != 0) goto LAB_00007f12;
  }
  if ((int)(param_10 << 0x1f) < 0) {
    FUN_00007d38(param_1,DAT_0000800c,DAT_00008010);
  }
  FUN_00007d5c(param_1,param_10);
LAB_00007fe6:
  FUN_0001cb0c(param_1);
  return;
}



// FUN_00008054 @ 00008054 (74 bytes, called_by=0, calls=0)

void FUN_00008054(undefined4 *param_1,undefined *param_2)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined4 *puStack_18;
  undefined *puStack_14;
  
  puVar2 = &DAT_0000270f;
  if (param_2 < (undefined *)0x2710) {
    puVar2 = param_2;
  }
  uVar3 = *param_1;
  puStack_18 = param_1;
  puStack_14 = param_2;
  uVar1 = FUN_0001bba6(&puStack_18,5,DAT_000080a0,puVar2);
  FUN_0001caf0(uVar3,DAT_000080a4,0xb,*(undefined4 *)(param_1[1] + 4));
  FUN_0001caf0(uVar3,&puStack_18,uVar1,*(undefined4 *)(param_1[1] + 4));
  FUN_0001caf0(uVar3,DAT_000080a8,0x1b,*(undefined4 *)(param_1[1] + 4));
  return;
}



// FUN_00008200 @ 00008200 (8 bytes, called_by=0, calls=0)

undefined4 FUN_00008200(undefined4 *param_1)

{
  *param_1 = DAT_00008208;
  return 0;
}



// FUN_0000820c @ 0000820c (72 bytes, called_by=0, calls=0)

undefined4 FUN_0000820c(uint param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  byte *pbVar3;
  
  if ((byte *)*DAT_00008254 == (byte *)0x0) {
    uVar1 = 0xfffffff3;
  }
  else {
    pbVar3 = (byte *)*DAT_00008254;
    for (iVar2 = 0; iVar2 < *DAT_00008258; iVar2 = iVar2 + 1) {
      if (*pbVar3 == param_1) {
        if ((*(int *)(pbVar3 + 0xc) != 0) && (iVar2 = FUN_000206b8(), iVar2 != 0)) {
          *param_2 = pbVar3;
          return 0;
        }
        return 0xffffffed;
      }
      pbVar3 = pbVar3 + 0x10;
    }
    uVar1 = 0xfffffffe;
  }
  return uVar1;
}



// FUN_0000825c @ 0000825c (90 bytes, called_by=0, calls=0)

int FUN_0000825c(uint param_1,undefined4 *param_2,undefined4 param_3)

{
  int iVar1;
  int local_30;
  uint local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 uStack_20;
  undefined4 local_1c;
  undefined4 local_18;
  int local_14;
  
  iVar1 = FUN_0000820c(param_1 & 0xff,&local_30);
  if ((iVar1 < 0) || (local_30 == 0)) {
    local_14 = -0x16;
  }
  else {
    local_28 = *(undefined4 *)(local_30 + 4);
    local_24 = *(undefined4 *)(local_30 + 8);
    local_18 = *param_2;
    local_14 = 0;
    local_1c = 0;
    iVar1 = *(int *)(local_30 + 0xc);
    local_2c = param_1;
    uStack_20 = param_3;
    FUN_0001cbf0();
    if (iVar1 == 0) {
      local_14 = -0x13;
    }
    else {
      FUN_0001f1aa(iVar1,DAT_000082b8,&local_2c);
      if (local_14 == 0) {
        *param_2 = local_1c;
      }
    }
  }
  return local_14;
}



// FUN_000082bc @ 000082bc (66 bytes, called_by=0, calls=0)

undefined4 FUN_000082bc(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *DAT_00008300;
  if (iVar2 == 0) {
    uVar1 = 0xfffffffe;
  }
  else {
    FUN_00014d3c(DAT_00008304,param_2,0xffffffff,0xffffffff);
    uVar1 = (**(code **)(*(int *)(iVar2 + 4) + 8))(iVar2,param_1,param_2,param_3);
    FUN_00014e2c(DAT_00008304);
  }
  return uVar1;
}



// FUN_00008308 @ 00008308 (22 bytes, called_by=0, calls=0)

void FUN_00008308(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  *param_1 = 0;
  puVar1 = DAT_00008320;
  if ((undefined4 *)DAT_00008320[1] == (undefined4 *)0x0) {
    *DAT_00008320 = param_1;
    puVar1[1] = param_1;
    return;
  }
  *(undefined4 *)DAT_00008320[1] = param_1;
  puVar1[1] = param_1;
  return;
}



// FUN_00008324 @ 00008324 (6 bytes, called_by=0, calls=0)

void FUN_00008324(undefined4 param_1)

{
  *DAT_0000832c = param_1;
  return;
}



// FUN_00008330 @ 00008330 (68 bytes, called_by=0, calls=0)

undefined4 FUN_00008330(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int *piVar2;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  
  local_18 = 0;
  uStack_14 = 0;
  local_1c = param_1;
  FUN_00014d3c(DAT_00008374,param_2,0xffffffff,0xffffffff);
  for (piVar2 = (int *)*DAT_00008378; piVar2 != (int *)0x0; piVar2 = (int *)*piVar2) {
    (**(code **)piVar2[1])(piVar2,&local_1c);
  }
  uVar1 = FUN_000085a0(param_1);
  FUN_00014e2c(DAT_00008374);
  return uVar1;
}



// FUN_000083cc @ 000083cc (22 bytes, called_by=0, calls=0)

void FUN_000083cc(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_000083d8;
  *DAT_000083d8 = 0;
  puVar1[1] = 0;
  puVar1 = DAT_000083c8;
  *DAT_000083c8 = 0;
  puVar1[1] = 0;
  return;
}



// FUN_000083dc @ 000083dc (110 bytes, called_by=0, calls=0)

undefined4 FUN_000083dc(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  
  puVar1 = DAT_00008450;
  for (puVar4 = DAT_0000844c; piVar2 = DAT_00008454, puVar4 < puVar1; puVar4 = puVar4 + 5) {
    uVar7 = FUN_00000228(*param_1,*puVar4);
    param_2 = (undefined4)((ulonglong)uVar7 >> 0x20);
    if ((int)uVar7 == 0) {
      return 0xffffffef;
    }
  }
  FUN_00014d3c(DAT_00008458,param_2,0xffffffff,0xffffffff);
  piVar5 = (int *)*piVar2;
  do {
    if (piVar5 == (int *)0x0) {
      param_1[5] = 0;
      param_1 = param_1 + 5;
      if ((undefined4 *)piVar2[1] == (undefined4 *)0x0) {
        *piVar2 = (int)param_1;
        piVar2[1] = (int)param_1;
      }
      else {
        *(undefined4 *)piVar2[1] = param_1;
        piVar2[1] = (int)param_1;
      }
      uVar6 = 0;
LAB_0000842e:
      FUN_00014e2c(DAT_00008458);
      return uVar6;
    }
    iVar3 = FUN_00000228(*param_1,piVar5[-5]);
    if (iVar3 == 0) {
      uVar6 = 0xffffffef;
      goto LAB_0000842e;
    }
    piVar5 = (int *)*piVar5;
  } while( true );
}



// FUN_0000845c @ 0000845c (138 bytes, called_by=0, calls=0)

undefined4 * FUN_0000845c(undefined4 param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 *local_24;
  undefined4 uStack_20;
  
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = 0;
  }
  puVar1 = DAT_000084ec;
  puVar5 = (undefined4 *)0x0;
  local_24 = param_2;
  uStack_20 = param_3;
  for (puVar3 = DAT_000084e8; puVar3 < puVar1; puVar3 = puVar3 + 5) {
    uVar6 = *puVar3;
    iVar2 = FUN_0001cc3e(param_1,uVar6,&local_24);
    if ((iVar2 != 0) &&
       (((puVar5 == (undefined4 *)0x0 || (iVar2 = FUN_0001cc3e(uVar6,*puVar5,0), iVar2 != 0)) &&
        (puVar5 = puVar3, param_2 != (undefined4 *)0x0)))) {
      *param_2 = local_24;
    }
  }
  for (piVar4 = (int *)*DAT_000084f0; piVar4 != (int *)0x0; piVar4 = (int *)*piVar4) {
    uVar6 = piVar4[-5];
    iVar2 = FUN_0001cc3e(param_1,uVar6,&local_24);
    if (((iVar2 != 0) &&
        ((puVar5 == (undefined4 *)0x0 || (iVar2 = FUN_0001cc3e(uVar6,*puVar5,0), iVar2 != 0)))) &&
       (puVar5 = piVar4 + -5, param_2 != (undefined4 *)0x0)) {
      *param_2 = local_24;
    }
  }
  return puVar5;
}



// FUN_000084f4 @ 000084f4 (158 bytes, called_by=0, calls=0)

undefined4
FUN_000084f4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            int *param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  int local_34;
  int local_30;
  undefined4 local_24;
  
  local_24 = param_1;
  if (param_5 != (int *)0x0) {
    if ((*param_5 != 0) && (iVar1 = FUN_0001cc3e(param_1,*param_5,&local_24), iVar1 == 0)) {
      return 0;
    }
    if ((code *)param_5[1] != (code *)0x0) {
      local_30 = param_5[2];
      uVar2 = (*(code *)param_5[1])(local_24,param_2,param_3,param_4);
      return uVar2;
    }
  }
  iVar1 = FUN_0000845c(param_1,&local_24);
  if (((iVar1 != 0) &&
      (local_34 = (**(code **)(iVar1 + 8))(local_24,param_2,param_3,param_4), local_34 != 0)) &&
     ((*DAT_00008594 & 7) != 0)) {
    local_30 = CONCAT22(local_30._2_2_,0x200);
    local_3c = DAT_00008598;
    local_40 = DAT_0000859c;
    uStack_38 = param_1;
    FUN_00007b60(DAT_00008594,&DAT_00002440,&local_40,0);
  }
  return 0;
}



// FUN_000085a0 @ 000085a0 (100 bytes, called_by=0, calls=0)

int FUN_000085a0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  
  puVar1 = DAT_00008608;
  iVar5 = 0;
  for (puVar3 = DAT_00008604; puVar3 < puVar1; puVar3 = puVar3 + 5) {
    if (((param_1 != 0) && (iVar2 = FUN_0001cc3e(*puVar3,param_1,0), iVar2 == 0)) ||
       (((code *)puVar3[3] == (code *)0x0 || (iVar2 = (*(code *)puVar3[3])(), iVar5 != 0)))) {
      iVar2 = iVar5;
    }
    iVar5 = iVar2;
  }
  for (piVar4 = (int *)*DAT_0000860c; piVar4 != (int *)0x0; piVar4 = (int *)*piVar4) {
    if ((((param_1 == 0) || (iVar2 = FUN_0001cc3e(piVar4[-5],param_1,0), iVar2 != 0)) &&
        ((code *)piVar4[-2] != (code *)0x0)) && (iVar2 = (*(code *)piVar4[-2])(), iVar5 == 0)) {
      iVar5 = iVar2;
    }
  }
  return iVar5;
}



// FUN_00008610 @ 00008610 (50 bytes, called_by=0, calls=0)

int FUN_00008610(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char *pcVar1;
  int iVar2;
  
  pcVar1 = DAT_00008644;
  FUN_00014d3c(DAT_00008648,param_2,0xffffffff,0xffffffff,param_4);
  if (*pcVar1 == '\0') {
    FUN_000083cc();
    iVar2 = FUN_00008708();
    if (iVar2 != 0) goto LAB_00008638;
    *pcVar1 = '\x01';
  }
  iVar2 = 0;
LAB_00008638:
  FUN_00014e2c(DAT_00008648);
  return iVar2;
}



// FUN_0000864c @ 0000864c (182 bytes, called_by=0, calls=0)

int FUN_0000864c(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  int iVar7;
  undefined1 uStack_75;
  int local_74;
  short local_70;
  undefined1 auStack_6c [76];
  
  uVar1 = DAT_00008704;
  iVar7 = param_1 + 8;
  sVar6 = *(short *)(param_1 + 0x38) + 1;
  do {
    while( true ) {
      sVar4 = sVar6;
      sVar6 = sVar4 + -1;
      if (sVar6 == -0x8000) {
        return 0;
      }
      iVar2 = FUN_0001c948(iVar7,sVar6,auStack_6c,0x4a);
      sVar5 = sVar4 + 0x3fff;
      iVar3 = FUN_0001c948(iVar7,sVar5,&uStack_75,1);
      if (iVar2 < 1) break;
      if (iVar3 < 1) goto LAB_000086c0;
      auStack_6c[iVar2] = 0;
      local_74 = iVar7;
      local_70 = sVar5;
      iVar2 = FUN_000084f4(auStack_6c,iVar3,uVar1,&local_74,param_2);
      if (iVar2 != 0) {
        return iVar2;
      }
    }
    if (0 < iVar3) {
LAB_000086c0:
      FUN_0001c940(iVar7,sVar6);
      FUN_0001c940(iVar7,sVar5);
    }
    if (*(short *)(param_1 + 0x38) == sVar6) {
      *(short *)(param_1 + 0x38) = sVar4 + -2;
      FUN_00007220(iVar7,0x8000,(short *)(param_1 + 0x38),2);
    }
  } while( true );
}



// FUN_00008708 @ 00008708 (124 bytes, called_by=0, calls=0)

/* WARNING: Type propagation algorithm not settling */

int FUN_00008708(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int local_20 [3];
  uint local_14;
  
  local_20[1] = 1;
  local_20[0] = param_1;
  local_20[2] = param_3;
  local_14 = param_4;
  iVar3 = FUN_0000820c(2,local_20);
  if ((iVar3 == 0) &&
     ((iVar3 = FUN_0000825c(2,local_20 + 1,local_20 + 2), iVar1 = DAT_00008784, iVar3 == 0 ||
      (iVar3 == -0xc)))) {
    if (local_14 < 0x10000) {
      uVar5 = 0;
      uVar4 = 0;
      do {
        uVar4 = uVar4 + local_14;
        if (*(uint *)(local_20[0] + 8) < uVar4) {
          uVar5 = uVar5 & 0xffff;
          break;
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 != 8);
      *(short *)(DAT_00008784 + 0x14) = (short)local_14;
      *(short *)(iVar1 + 0x16) = (short)uVar5;
      *(undefined4 *)(iVar1 + 8) = *(undefined4 *)(local_20[0] + 4);
      *(undefined4 *)(iVar1 + 0x3c) = *(undefined4 *)(local_20[0] + 0xc);
      iVar3 = FUN_0001cdba(iVar1);
      uVar2 = DAT_00008788;
      if (iVar3 == 0) {
        *(undefined4 *)(iVar1 + 4) = DAT_00008788;
        FUN_00008308(iVar1);
        *(undefined4 *)(iVar1 + 4) = uVar2;
        FUN_00008324(iVar1);
      }
    }
    else {
      iVar3 = -0x21;
    }
  }
  return iVar3;
}



// FUN_000087c4 @ 000087c4 (92 bytes, called_by=0, calls=0)

undefined4 FUN_000087c4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  code *pcVar2;
  undefined4 *puVar3;
  int iVar4;
  
  puVar3 = *(undefined4 **)(param_1 + 4);
  *puVar3 = param_2;
  puVar3[1] = param_3;
  puVar3[2] = param_4;
  piVar1 = *(int **)(param_1 + 4);
  piVar1[0x13] = 0x40;
  piVar1[0xc] = (int)(piVar1 + 0x16);
  piVar1[0xe] = 0;
  piVar1[0xf] = 0;
  piVar1[0x11] = 0;
  piVar1[0x12] = 0;
  piVar1[6] = 0;
  piVar1[7] = 0;
  piVar1[9] = 0;
  piVar1[10] = 0;
  piVar1[0xb] = 8;
  iVar4 = *piVar1;
  piVar1[0xd] = 0;
  piVar1[0x10] = 0;
  piVar1[4] = (int)(piVar1 + 0x14);
  piVar1[5] = 0;
  piVar1[8] = 0;
  piVar1[0x34] = 0;
  if ((*(int *)(iVar4 + 8) != 0) &&
     (pcVar2 = *(code **)(*(int *)(iVar4 + 8) + 0x58), pcVar2 != (code *)0x0)) {
    (*pcVar2)(iVar4,DAT_00008820);
  }
  pcVar2 = *(code **)(*(int *)(iVar4 + 8) + 0x38);
  if (pcVar2 != (code *)0x0) {
    (*pcVar2)(iVar4);
  }
  return 0;
}



// FUN_00008824 @ 00008824 (246 bytes, called_by=0, calls=0)

void FUN_00008824(int param_1,int param_2,undefined4 param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  code *pcVar6;
  int iVar7;
  int local_24;
  undefined4 uStack_20;
  
  pcVar6 = *(code **)(*(int *)(param_1 + 8) + 0x54);
  iVar4 = param_1;
  local_24 = param_2;
  uStack_20 = param_3;
  if (pcVar6 != (code *)0x0) {
    (*pcVar6)();
  }
  pcVar6 = *(code **)(*(int *)(param_1 + 8) + 0x44);
  if ((pcVar6 == (code *)0x0) || (iVar7 = (*pcVar6)(param_1), iVar7 != 0)) {
    bVar1 = false;
    iVar7 = param_2 + 0x30;
    do {
      iVar2 = FUN_0001c39c(iVar7,&local_24,*(undefined4 *)(param_2 + 0x4c));
      if (iVar2 == 0) {
        if ((*DAT_0000891c & 6) != 0) {
          FUN_0001cab2(DAT_0000891c,2,DAT_00008920,*DAT_0000891c,iVar4);
        }
        pcVar6 = *(code **)(*(int *)(param_1 + 8) + 0x28);
        if (pcVar6 != (code *)0x0) {
          (*pcVar6)(param_1,&stack0xffffffdb,1);
        }
LAB_000088b8:
        if (!bVar1) goto LAB_00008886;
        break;
      }
      pcVar6 = *(code **)(*(int *)(param_1 + 8) + 0x28);
      if (pcVar6 == (code *)0x0) {
        iVar3 = -0x58;
      }
      else {
        iVar3 = (*pcVar6)(param_1,local_24,iVar2);
        if (iVar3 == 0) {
          FUN_0001c3da(iVar7,0);
          goto LAB_000088b8;
        }
      }
      FUN_0001c3da(iVar7,iVar3);
      bVar1 = true;
    } while (iVar2 == iVar3);
    (**(code **)(param_2 + 4))(0,*(undefined4 *)(param_2 + 8));
  }
LAB_00008886:
  pcVar6 = *(code **)(*(int *)(param_1 + 8) + 0x34);
  if ((pcVar6 == (code *)0x0) || (iVar4 = (*pcVar6)(param_1), iVar4 != 0)) {
    iVar4 = FUN_0001c442(param_2 + 0x10,&local_24,*(undefined4 *)(param_2 + 0x2c));
    if (iVar4 == 0) {
      FUN_0001ce1c(param_1);
      *(undefined4 *)(param_2 + 0xd0) = 0;
    }
    else {
      pcVar6 = *(code **)(*(int *)(param_1 + 8) + 0x24);
      if (pcVar6 == (code *)0x0) {
        uVar5 = 0xffffffa8;
      }
      else {
        uVar5 = (*pcVar6)(param_1,local_24,iVar4);
      }
      FUN_0001c482(param_2 + 0x10,uVar5);
    }
    (**(code **)(param_2 + 4))(1,*(undefined4 *)(param_2 + 8));
  }
  return;
}



// FUN_00008940 @ 00008940 (30 bytes, called_by=0, calls=0)

void FUN_00008940(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  uStack_8 = param_3;
  uStack_4 = param_4;
  FUN_000092d0(param_1,DAT_0000893c,&uStack_8,param_4,param_1,&uStack_8);
  return;
}



// FUN_0000894c @ 0000894c (78 bytes, called_by=0, calls=0)

void FUN_0000894c(int param_1)

{
  *(undefined1 *)(*(int *)(param_1 + 8) + 4) = 2;
  if (*(int *)(*(int *)(param_1 + 8) + 0x38) == 0) {
    *(undefined1 *)(*(int *)(param_1 + 8) + 0x46) = 0;
    *(undefined2 *)(*(int *)(param_1 + 8) + 0x42) = 0;
    *(undefined2 *)(*(int *)(param_1 + 8) + 0x40) = 0;
    if (*(int *)(*(int *)(param_1 + 8) + 0x168) << 0x13 < 0) {
      FUN_0001d4b6(param_1,3,DAT_000089a0,DAT_0000899c);
      FUN_0001cef4(*(int *)(param_1 + 8) + 0x168,0xffffefff);
    }
    FUN_0000970c(param_1);
    return;
  }
  return;
}



// FUN_000089a4 @ 000089a4 (434 bytes, called_by=0, calls=0)

undefined4 FUN_000089a4(int param_1)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  undefined4 uVar10;
  uint uVar11;
  undefined4 *puVar12;
  int iVar13;
  undefined4 *puVar14;
  int *piVar15;
  undefined8 uVar16;
  int local_9c;
  int local_94;
  undefined1 auStack_90 [20];
  int local_7c [22];
  
  FUN_000168a4(local_7c,0,0x54);
  local_94 = 0;
  local_9c = *(int *)(param_1 + 8) + 0x46;
  FUN_0001d3ae(param_1);
  iVar3 = FUN_0001d2d4(param_1);
  if (iVar3 == 0) {
    FUN_00008940(*(undefined4 *)(param_1 + 0x14));
  }
  FUN_000168a4(*(int *)(param_1 + 8) + 8,0,0x14);
  iVar3 = 0;
  iVar13 = -1;
  iVar9 = 0;
  bVar2 = false;
  puVar12 = (undefined4 *)0x0;
  puVar14 = (undefined4 *)0x0;
  piVar15 = local_7c;
  do {
    if (local_94 == 1) {
LAB_00008abc:
      if (((puVar14 != (undefined4 *)0x0) && (*(char *)((int)puVar14 + 0x11) == -2)) &&
         (local_7c[iVar9] != 0)) {
        iVar9 = iVar9 + 1;
      }
      iVar13 = *(int *)(param_1 + 8);
      uVar11 = iVar9 - iVar3;
      if (*(int *)(iVar13 + 0x14) == 0) {
        FUN_0001d4b6(param_1,1,DAT_00008b6c);
LAB_00008a2e:
        uVar10 = 0xfffffff8;
      }
      else {
        uVar8 = (uint)*(byte *)(iVar13 + 0x18);
        if (uVar8 != 0) {
          uVar6 = 0xffff;
          if (*(byte *)(iVar13 + 0x19) != 0xff) {
            uVar6 = (uint)*(byte *)(iVar13 + 0x19);
          }
          if ((uVar11 < uVar8) || (uVar8 + uVar6 < uVar11)) {
            FUN_0001d4b6(param_1,1,DAT_00008b70,*(undefined4 *)(iVar13 + 8));
            return 0xffffffea;
          }
        }
        FUN_0001cfac(iVar13,1);
        thunk_FUN_00014e2c(*(int *)(param_1 + 8) + 0x1fc);
        uVar16 = (**(code **)(*(int *)(param_1 + 8) + 0x14))(param_1,uVar11,local_7c + iVar3);
        uVar10 = (undefined4)uVar16;
        FUN_00014d3c(*(int *)(param_1 + 8) + 0x1fc,(int)((ulonglong)uVar16 >> 0x20),0xffffffff,
                     0xffffffff);
        FUN_0001cfac(*(undefined4 *)(param_1 + 8),0);
      }
      return uVar10;
    }
    if (iVar9 == 0x14) {
      uVar10 = DAT_00008b5c;
      iVar4 = DAT_00008b58;
      if (local_94 == 2) {
LAB_00008a28:
        FUN_0001d4b6(param_1,1,uVar10,iVar4);
        goto LAB_00008a2e;
      }
      goto LAB_00008abc;
    }
    if (iVar13 == 0) goto LAB_00008abc;
    iVar4 = FUN_00009300(&local_94,piVar15,local_9c,2);
    piVar1 = piVar15 + 1;
    local_9c = *piVar1;
    if (local_94 == 0) goto LAB_00008a2e;
    if ((local_94 == 1) && (uVar10 = DAT_00008b60, iVar4 != 0)) goto LAB_00008a28;
    if (!bVar2) {
      puVar12 = (undefined4 *)FUN_0001d1f6(puVar14,*piVar15,auStack_90,iVar4);
    }
    iVar13 = iVar13 + -1;
    if (puVar12 == (undefined4 *)0x0) {
      if ((iVar9 == 0) &&
         ((iVar4 = *(int *)(*(int *)(param_1 + 8) + 0x1c), iVar4 == 0 ||
          (*(int *)(iVar4 + 0xc) == 0)))) {
        FUN_0001d4b6(param_1,1,DAT_00008b68,local_7c[0],DAT_00008b64);
      }
      bVar2 = true;
    }
    else {
      puVar14 = puVar12;
      if (puVar12[3] != 0) {
        uVar10 = puVar12[1];
        uVar5 = puVar12[2];
        uVar7 = puVar12[3];
        iVar3 = *(int *)(param_1 + 8);
        *(undefined4 *)(iVar3 + 8) = *puVar12;
        *(undefined4 *)(iVar3 + 0xc) = uVar10;
        *(undefined4 *)(iVar3 + 0x10) = uVar5;
        *(undefined4 *)(iVar3 + 0x14) = uVar7;
        *(undefined4 *)(iVar3 + 0x18) = puVar12[4];
        iVar3 = iVar9;
        if ((puVar12[2] == 0) && (*(char *)((int)puVar12 + 0x11) == -2)) {
          iVar13 = *(byte *)(puVar12 + 4) - 1;
        }
      }
    }
    piVar15 = piVar1;
    if ((iVar13 != 0) || (local_94 == 2)) {
      iVar9 = iVar9 + 1;
    }
  } while( true );
}



// FUN_00008b74 @ 00008b74 (1270 bytes, called_by=0, calls=0)

/* WARNING: Control flow encountered bad instruction data */

int FUN_00008b74(undefined4 *param_1)

{
  char cVar1;
  ushort uVar2;
  char *pcVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 uVar8;
  byte bVar9;
  char *pcVar10;
  undefined4 *puVar11;
  undefined4 *extraout_r1;
  undefined1 uVar12;
  uint uVar13;
  uint uVar14;
  uint *puVar15;
  undefined4 *puVar16;
  code *pcVar17;
  code *pcVar18;
  uint unaff_r7;
  int iVar19;
  uint uVar20;
  int iVar21;
  int iVar22;
  undefined1 *puVar23;
  undefined1 **ppuVar24;
  undefined4 uVar25;
  bool bVar26;
  char *pcVar27;
  undefined1 auStack_110 [20];
  undefined4 *puStack_fc;
  code *pcStack_f8;
  undefined4 uStack_f4;
  uint uStack_f0;
  undefined4 uStack_ec;
  undefined1 *local_e8;
  undefined4 local_e4;
  int local_dc;
  int *local_d8;
  undefined4 local_d4;
  uint local_d0;
  int local_cc;
  byte local_c5;
  int local_c4;
  int local_c0;
  uint local_bc;
  undefined1 auStack_b8 [20];
  undefined1 auStack_a4 [20];
  undefined1 auStack_90 [20];
  int aiStack_7c [22];
  
  ppuVar24 = &local_e8;
  FUN_0001ced6(param_1[2] + 0x168,1);
  if (*(char *)(param_1[2] + 4) != '\x02') {
LAB_00008bd2:
    iVar5 = FUN_0001cef4(param_1[2] + 0x168,0xfffffffe);
    return iVar5;
  }
  local_c4 = 0;
switchD_00009040_caseD_a:
  do {
    while( true ) {
      piVar4 = (int *)param_1[1];
      pcVar18 = *(code **)(param_1[2] + 0x38);
      pcVar17 = *(code **)(*piVar4 + 0x10);
      if (pcVar18 == (code *)0x0) break;
      (*pcVar17)(piVar4,aiStack_7c,0x10);
      if (local_c4 == 0) goto LAB_00008bd2;
      FUN_0001cfac(param_1[2],1);
      (*pcVar18)(param_1,aiStack_7c,local_c4);
      FUN_0001cfac(param_1[2],0);
      if (*(int *)(param_1[2] + 0x38) == 0) {
        FUN_0000894c(param_1);
        goto LAB_00008bd2;
      }
    }
    uVar25 = 0x8bef;
    puVar6 = (undefined4 *)(*pcVar17)(piVar4,&local_c5,1,&local_c4);
    if (local_c4 == 0) goto LAB_00008bd2;
    uVar13 = (uint)local_c5;
    iVar5 = param_1[2];
  } while ((char)local_c5 < '\0');
  switch(*(undefined1 *)(iVar5 + 5)) {
  case 0:
    if (uVar13 != 0xd) {
      if (uVar13 == 10) {
        if ((uint)(*(int *)(iVar5 + 0x168) << 0x15) >> 0x18 != 0) {
          bVar26 = (uint)(*(int *)(iVar5 + 0x168) << 0x15) >> 0x18 == 10;
          goto LAB_00008c94;
        }
        goto LAB_00008c96;
      }
      *(ushort *)(iVar5 + 0x168) = *(ushort *)(iVar5 + 0x168) & 0xf807;
      iVar5 = param_1[2];
      if (uVar13 == 9) {
        if (*(int *)(iVar5 + 0x164) << 0x1e < 0) {
          FUN_0001cfa2();
          iVar5 = param_1[2];
          if (*(short *)(iVar5 + 0x40) != 0x7f) {
            FUN_00000820(iVar5 + 0xc6,iVar5 + 0x46,*(undefined2 *)(iVar5 + 0x42));
            *(undefined1 *)(param_1[2] + (uint)*(ushort *)(param_1[2] + 0x42) + 0xc6) = 0;
            FUN_00009300(&local_bc,aiStack_7c,param_1[2] + 0xc6,0x14);
            if (local_bc < 0x15) {
              aiStack_7c[local_bc] = 0;
              uVar13 = (uint)*(ushort *)(param_1[2] + 0x42);
              if (uVar13 == 0) {
                if (local_bc != 0) {
LAB_00008df8:
                  if (local_bc != 1) {
                    uVar14 = local_bc - 1;
                    goto LAB_00008dfe;
                  }
                }
LAB_00008d46:
                iVar5 = 0;
                local_c0 = 0;
              }
              else {
                if (local_bc == 0) goto LAB_00008d46;
                uVar14 = local_bc;
                if (-1 < (int)((uint)*(byte *)(DAT_00008e5c +
                                              (uint)*(byte *)(param_1[2] + uVar13 + 0x45)) << 0x1c))
                goto LAB_00008df8;
LAB_00008dfe:
                local_e8 = auStack_b8;
                local_e4 = 0;
                iVar5 = FUN_0001d24c(0,uVar14,aiStack_7c,&local_c0);
                if (iVar5 == 0) goto switchD_00009040_caseD_a;
              }
              uVar13 = 0;
              iVar22 = aiStack_7c[local_c0];
              uVar25 = FUN_0001cf82(iVar22);
              uVar14 = 0;
              iVar21 = 0;
              iVar19 = 0;
              while (piVar4 = (int *)FUN_000094b8(iVar5,iVar19,auStack_90), piVar4 != (int *)0x0) {
                local_dc = *piVar4;
                iVar7 = FUN_00016b08(local_dc,iVar22,uVar25);
                if (iVar7 == 0) {
                  uVar20 = FUN_00000140(local_dc);
                  if (uVar20 < uVar14) {
                    uVar20 = uVar14;
                  }
                  uVar14 = uVar20 & 0xffff;
                  if (uVar13 == 0) {
                    iVar21 = iVar19;
                  }
                  uVar13 = uVar13 + 1;
                }
                iVar19 = iVar19 + 1;
              }
              unaff_r7 = param_1[2];
              if (uVar13 == 1) {
                iVar19 = FUN_0001cf82(aiStack_7c[local_c0]);
                piVar4 = (int *)FUN_000094b8(iVar5,iVar21,unaff_r7 + 8);
                iVar21 = *piVar4;
                iVar5 = FUN_0001cf82(iVar21);
                if (iVar19 != iVar5) {
                  thunk_FUN_0001d4d2(param_1,iVar21 + iVar19,iVar5 - iVar19 & 0xffff);
                }
                iVar5 = param_1[2];
                if ((*(byte *)(DAT_00008e5c +
                              (uint)*(byte *)((uint)*(ushort *)(iVar5 + 0x42) + iVar5 + 0x46)) & 8)
                    == 0) {
                  unaff_r7 = *(int *)(iVar5 + 0x164) << 0x1f;
                  if ((int)unaff_r7 < 0) {
                    FUN_0001cfc2();
                    FUN_0000969c(param_1,0x20);
                    iVar5 = param_1[2];
                    uVar13 = 1;
                    goto LAB_00008de0;
                  }
                  bVar9 = 0x20;
LAB_00008e46:
                  FUN_0000969c(param_1,bVar9);
                }
                else {
                  FUN_0001d34e(param_1,1);
                }
              }
              else {
                local_d8 = (int *)0x0;
                if (1 < uVar13) {
                  local_dc = aiStack_7c[local_c0];
                  local_d8 = piVar4;
                  local_d4 = FUN_0001cf82(local_dc);
                  *(short *)(unaff_r7 + 0x30) = (short)local_d8;
                  iVar19 = iVar21;
                  local_d8 = (int *)uVar13;
LAB_00008e84:
                  do {
                    piVar4 = (int *)FUN_000094b8(iVar5,iVar19,param_1[2] + 8);
                    puVar23 = (undefined1 *)*piVar4;
                    iVar19 = iVar19 + 1;
                    if ((local_dc != 0) && (puVar23 != (undefined1 *)0x0)) {
                      iVar22 = FUN_00016b08(puVar23,local_dc,local_d4);
                      if (iVar22 != 0) goto LAB_00008e84;
                    }
                    if (puVar23 == (undefined1 *)0x0) {
                      *(undefined2 *)(param_1[2] + 0x30) = 0;
                    }
                    else {
                      local_d0 = param_1[2];
                      iVar22 = FUN_0001cf82(DAT_000090ac);
                      local_cc = local_d0;
                      uVar20 = iVar22 + uVar14 & 0xffff;
                      local_d0 = (int)((uint)*(ushort *)(local_d0 + 0x2a) - iVar22) / (int)uVar20 &
                                 0xffff;
                      iVar22 = FUN_0001cf82(puVar23);
                      uVar2 = *(ushort *)(local_cc + 0x30);
                      *(ushort *)(local_cc + 0x30) = uVar2 + 1;
                      if (((uint)uVar2 - local_d0 * (uVar2 / local_d0) & 0xffff) == 0) {
                        local_e8 = puVar23;
                        FUN_0001d4b6(param_1,6,DAT_000090b0,DAT_000090ac);
                      }
                      else {
                        FUN_0001d4b6(param_1,6,DAT_000090b4,puVar23);
                      }
                      FUN_0000957c(param_1,uVar20 - iVar22 & 0xffff);
                    }
                    local_d8 = (int *)((int)local_d8 - 1);
                  } while (local_d8 != (int *)0x0);
                  FUN_00008940(param_1[5]);
                  FUN_0000970c(param_1);
                  iVar19 = FUN_0001cf82(aiStack_7c[local_c0]);
                  piVar4 = (int *)FUN_000094b8(iVar5,iVar21,auStack_a4);
                  FUN_00016b8c(param_1[2] + 0xc6,*piVar4,0x7f);
                  local_dc = *piVar4;
                  unaff_r7 = 0xffff;
                  do {
                    do {
                      iVar21 = iVar21 + 1;
                      piVar4 = (int *)FUN_000094b8(iVar5,iVar21,auStack_90);
                      if (piVar4 == (int *)0x0) goto LAB_00008fbc;
                      pcVar10 = (char *)(param_1[2] + 0xc5);
                      uVar14 = 0;
                      do {
                        pcVar10 = pcVar10 + 1;
                        if ((*(char *)(*piVar4 + uVar14) != *pcVar10) ||
                           (*(char *)(*piVar4 + uVar14) == '\0')) break;
                        uVar14 = uVar14 + 1;
                      } while (uVar14 != 0xffff);
                    } while ((iVar19 != 0) && ((int)uVar14 < iVar19));
                    uVar13 = uVar13 - 1;
                    if ((int)unaff_r7 <= (int)uVar14) {
                      uVar14 = unaff_r7;
                    }
                    unaff_r7 = uVar14 & 0xffff;
                  } while (uVar13 != 1);
LAB_00008fbc:
                  if (unaff_r7 != 0) {
                    thunk_FUN_0001d4d2(param_1,local_dc + iVar19,unaff_r7 - iVar19 & 0xffff);
                  }
                }
              }
            }
          }
        }
        goto switchD_00009040_caseD_a;
      }
      if (uVar13 < 10) {
        if (uVar13 != 0) {
          if (uVar13 != 8) goto LAB_00008c3c;
          if (*(int *)(iVar5 + 0x164) << 0x1e < 0) {
            FUN_0001cfa2();
LAB_00008fe2:
            FUN_0001d588(param_1);
          }
        }
        goto switchD_00009040_caseD_a;
      }
      if (uVar13 == 0x1b) {
        *(undefined1 *)(iVar5 + 5) = 1;
        goto switchD_00009040_caseD_a;
      }
      if (uVar13 == 0x7f) {
        if (*(int *)(iVar5 + 0x164) << 0x1e < 0) {
          FUN_0001cfa2();
          if (-1 < *(int *)(param_1[2] + 0x164) << 0x1c) goto LAB_00008c78;
          goto LAB_00008fe2;
        }
        goto switchD_00009040_caseD_a;
      }
LAB_00008c3c:
      if ((*(byte *)(DAT_00008e58 + (uVar13 + 1 & 0xff)) & 0x97) != 0) {
        FUN_0001cfa2();
        bVar9 = local_c5;
        goto LAB_00008e46;
      }
      goto switchD_00009040_caseD_a;
    }
    if ((uint)(*(int *)(iVar5 + 0x168) << 0x15) >> 0x18 != 0) {
      bVar26 = (uint)(*(int *)(iVar5 + 0x168) << 0x15) >> 0x18 == 0xd;
LAB_00008c94:
      if (!bVar26) goto LAB_00008c3c;
    }
LAB_00008c96:
    *(ushort *)(iVar5 + 0x168) = *(ushort *)(iVar5 + 0x168) & 0xf807 | (ushort)local_c5 << 3;
    iVar5 = param_1[2];
    if (*(short *)(iVar5 + 0x40) == 0) {
      FUN_00008940(param_1[5]);
    }
    else {
      uVar25 = FUN_000089a4(param_1);
      *(undefined4 *)(iVar5 + 0x214) = uVar25;
    }
    FUN_0000894c(param_1);
    goto switchD_00009040_caseD_a;
  case 1:
    if (uVar13 != 0x5b) goto switchD_00008c0a_caseD_3;
    uVar12 = 2;
    break;
  case 2:
    *(undefined1 *)(iVar5 + 5) = 0;
    pcVar10 = DAT_00011228;
    puVar11 = (undefined4 *)(*(int *)(param_1[2] + 0x164) * 0x40000000);
    if ((int)puVar11 < 0) {
      if (uVar13 < 0x35) {
        if (0x30 < uVar13) {
          *(undefined1 *)(param_1[2] + 5) = 3;
          switch(uVar13) {
          case 0x32:
            iVar5 = param_1[2];
            uVar13 = *(uint *)(iVar5 + 0x164) & 1 ^ 1;
LAB_00008de0:
            FUN_0001cfc2(iVar5,uVar13);
            break;
          case 0x33:
            if (*(int *)(param_1[2] + 0x164) << 0x1e < 0) {
LAB_00008c78:
              FUN_0001d54a(param_1);
            }
            break;
          case 0x34:
            FUN_0001d3ae(param_1);
            break;
          default:
            FUN_0001d3a0(param_1);
          }
        }
      }
      else {
        uVar14 = uVar13 - 0x43;
        if ((uVar14 & 0xff) < 10) goto code_r0x00009038;
      }
    }
    goto switchD_00009040_caseD_a;
  default:
switchD_00008c0a_caseD_3:
    uVar12 = 0;
  }
  *(undefined1 *)(iVar5 + 5) = uVar12;
  goto switchD_00009040_caseD_a;
code_r0x00009038:
  bVar26 = uVar14 == 9;
  puVar16 = param_1;
  switch(uVar14) {
  case 0:
    break;
  case 1:
    goto switchD_00009040_caseD_1;
  case 2:
  case 4:
  case 6:
  case 7:
  case 8:
    *(undefined4 *)(uVar13 + 0x1bd) = 0x113;
    *puVar11 = DAT_00010be8;
    switchD_00009040::switchdataD_00009044._0_1_ = 1;
    *(undefined4 *)(uVar13 + 0x2c1) = 0x10;
    iVar5 = DAT_00010bc0;
    iVar21 = *(int *)pcVar17;
    *(uint *)(DAT_00010bc0 + 0x52c) = (uint)*(byte *)(iVar21 + 1);
    *(uint *)(iVar5 + 0x530) = 1 << *(sbyte *)(iVar21 + 1) & 0xff;
    iVar21 = DAT_00010bc4;
    *(uint *)(iVar5 + 0x508) = (uint)*(byte *)(DAT_00010bc4 + 0x13);
    puVar15 = (uint *)(iVar21 + 0x14);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar15);
      bVar26 = (bool)hasExclusiveAccess(puVar15);
    } while (!bVar26);
    *puVar15 = *puVar15 & 0xfffffffe;
    DataMemoryBarrier(0x1b);
    FUN_0001083c();
    iVar21 = DAT_00010bc8;
    *(undefined4 *)(iVar5 + 0x504) = 0;
    *(undefined4 *)(iVar21 + 0x180) = 2;
    FUN_00009fd8(1);
    *(undefined4 *)(iVar5 + 0x104) = 0;
    *(undefined4 *)(iVar5 + 0x108) = 0;
    *(undefined4 *)(iVar5 + 0x110) = 0;
    *(undefined4 *)(iVar5 + 0x10c) = 0;
    FUN_00011618(0,param_1,0,*(undefined4 *)(iVar5 + 0x10c));
    iVar5 = FUN_000107c8(param_1);
    *(undefined4 *)(DAT_00010bcc + 0x18) = 1;
    return iVar5;
  case 3:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 5:
    goto switchD_00009040_caseD_5;
  case 9:
    goto switchD_00009040_caseD_9;
  default:
    goto switchD_00009040_caseD_a;
  }
switchD_00009040_caseD_1:
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
switchD_00009040_caseD_5:
  ppuVar24 = (undefined1 **)auStack_110;
  bVar26 = puVar6 == (undefined4 *)0x0;
  uStack_f4 = 0;
  puVar16 = puVar6;
  puStack_fc = param_1;
  pcStack_f8 = pcVar17;
  uStack_f0 = unaff_r7;
  uStack_ec = uVar25;
switchD_00009040_caseD_9:
  if (bVar26) {
    return -0x16;
  }
  if (*DAT_00011228 != '\0') {
    FUN_00011014();
  }
  *DAT_0001122c = puVar16[1];
  pcVar3 = DAT_00011230;
  puVar6 = puVar16 + 4;
  pcVar27 = DAT_00011230;
  do {
    uVar25 = puVar16[1];
    *(undefined4 *)pcVar27 = *puVar16;
    *(undefined4 *)(pcVar27 + 4) = uVar25;
    pcVar27 = pcVar27 + 8;
    puVar16 = puVar16 + 2;
  } while (puVar16 != puVar6);
  *(undefined4 *)pcVar27 = *puVar16;
  uVar25 = DAT_00011238;
  *DAT_00011234 = 0;
  uVar8 = FUN_000168a4(uVar25,0,0x20);
  uVar25 = DAT_00011240;
  puVar6 = DAT_0001123c;
  *DAT_0001123c = 0;
  puVar6[1] = 0;
  FUN_00010754(uVar8,uVar25);
  uVar25 = DAT_0001124c;
  if ((*pcVar3 == '\0') || (uVar25 = DAT_00011244, *pcVar3 == '\x01')) {
    *extraout_r1 = uVar25;
  }
  iVar5 = DAT_00011248;
  cVar1 = pcVar3[9];
  if (cVar1 == '\x01') {
    *(undefined4 *)(DAT_00011248 + 0x53c) = 0xff;
    *(undefined4 *)(iVar5 + 0x534) = 1;
    uVar25 = 0x107;
  }
  else if (cVar1 == '\x02') {
    *(undefined4 *)(DAT_00011248 + 0x53c) = 0xffff;
    *(undefined4 *)(iVar5 + 0x534) = 2;
    uVar25 = DAT_00011250;
  }
  else {
    if (cVar1 != '\0') goto LAB_00011114;
    *(undefined4 *)(DAT_00011248 + 0x53c) = 0;
    *(undefined4 *)(iVar5 + 0x534) = 0;
    uVar25 = 0;
  }
  *(undefined4 *)(iVar5 + 0x538) = uVar25;
LAB_00011114:
  iVar5 = DAT_00011248;
  (*(code *)*extraout_r1)(pcVar3[0x11]);
  *(undefined4 *)(iVar5 + 0x51c) = 0xe7e7e7e7;
  *(undefined4 *)(iVar5 + 0x520) = 0x43434343;
  *(undefined4 *)(iVar5 + 0x524) = DAT_00011254;
  *(undefined4 *)(iVar5 + 0x528) = DAT_00011258;
  FUN_00010790();
  uVar25 = DAT_00011260;
  *DAT_0001125c = DAT_00011260;
  *DAT_00011264 = DAT_00011268;
  uVar8 = DAT_00011270;
  puVar6 = DAT_0001126c;
  *DAT_0001126c = uVar25;
  *(undefined1 *)(puVar6 + 1) = 0;
  puVar6[2] = 0;
  FUN_000168a4(uVar8,0,0x20);
  *(undefined4 *)((int)ppuVar24 + 4) = DAT_00011274;
  *(undefined4 *)((int)ppuVar24 + 8) = 0;
  *(undefined4 *)((int)ppuVar24 + 0xc) = 0;
  iVar21 = FUN_000128ec(DAT_0001127c,(undefined1 *)((int)ppuVar24 + 4),DAT_00011278);
  puVar15 = DAT_0001128c;
  if (iVar21 == DAT_00011280) {
    iVar21 = FUN_0001191c();
    if (iVar21 == 0) {
      uVar25 = FUN_000119c8();
      *(undefined4 *)(DAT_00011284 + 4) = uVar25;
      *(uint *)(iVar5 + 0x650) = (uint)(byte)pcVar3[0x13] | *(uint *)(iVar5 + 0x650) & 0xfffffffe;
      FUN_0000a038(1,1,0);
      FUN_0000a038(0x14,2,0);
      FUN_0000a038(10,2,0);
      FUN_00009fd8(1);
      FUN_00009fd8(0x14);
      FUN_00009fd8(10);
      *DAT_00011288 = 0;
      *pcVar10 = '\x01';
    }
    else if ((*DAT_0001128c & 7) != 0) {
      FUN_0001cab2(DAT_0001128c,1,DAT_00011298);
    }
  }
  else {
    if (((*DAT_0001128c & 7) != 0) &&
       (FUN_0001cac4(DAT_0001128c,1,DAT_00011290,iVar21), (*puVar15 & 7) != 0)) {
      FUN_0001cab2(puVar15,1,DAT_00011294);
    }
    iVar21 = -0xe;
  }
  return iVar21;
}



// FUN_000090b8 @ 000090b8 (228 bytes, called_by=0, calls=0)

int FUN_000090b8(undefined4 *param_1,undefined4 param_2,uint param_3,undefined4 param_4,
                undefined4 param_5)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  
  if (*(int *)(param_1[2] + 0x210) == 0) {
    FUN_000168a4(param_1[2],0,0x218);
    FUN_000208e2(param_1[2] + 0x1fc);
    iVar6 = 0x1ac;
    iVar4 = 0x16c;
    do {
      FUN_00021256(param_1[2] + iVar4);
      iVar3 = param_1[2] + iVar4;
      iVar4 = iVar4 + 0x10;
      FUN_00021204(param_1[2] + iVar6,1,0,iVar3);
      iVar6 = iVar6 + 0x14;
    } while (iVar4 != 0x1ac);
    FUN_0001ced6(param_1[2] + 0x168,2);
    *(undefined2 *)(param_1[2] + 0x2a) = 0x50;
    *(undefined2 *)(param_1[2] + 0x28) = 0x18;
    *(undefined4 *)param_1[2] = *param_1;
    puVar5 = (undefined4 *)param_1[2];
    uVar1 = FUN_0001cf82(*puVar5);
    *(undefined1 *)(puVar5 + 0xb) = uVar1;
    uVar2 = DAT_0000919c;
    *(uint *)(param_1[2] + 0x164) = param_3 & 0xffffffeb;
    iVar4 = (*(code *)**(undefined4 **)param_1[1])((undefined4 *)param_1[1],param_2,uVar2,param_1);
    if (iVar4 == 0) {
      *(undefined1 *)(param_1[2] + 4) = 1;
      uVar2 = FUN_000153fc(param_1[10],param_1[0xb],0x800,DAT_000091a0,param_1,param_4,param_5,0xe,0
                          );
      *(undefined4 *)(param_1[2] + 0x210) = uVar2;
      FUN_00020bd0(uVar2,param_1[9]);
    }
  }
  else {
    iVar4 = -0x78;
  }
  return iVar4;
}



// FUN_000091a4 @ 000091a4 (208 bytes, called_by=0, calls=0)

void FUN_000091a4(int param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  code *pcVar6;
  undefined8 uVar7;
  
  iVar4 = *(int *)(param_1 + 8) + 0x168;
  if (param_2 == 0) {
    FUN_0001cef4(iVar4,0xffffbfff);
  }
  else {
    FUN_0001ced6(iVar4,0x4000);
  }
  *(undefined4 *)(*(int *)(param_1 + 8) + 0x3c) = param_3;
  iVar4 = (**(code **)(**(int **)(param_1 + 4) + 8))(*(int **)(param_1 + 4),0);
  if ((iVar4 == 0) &&
     (iVar4 = FUN_0001d02e(param_1), uVar3 = DAT_0000927c, uVar2 = DAT_00009278,
     uVar1 = DAT_00009274, iVar4 == 0)) {
    while( true ) {
      uVar7 = FUN_00015f7c(*(int *)(param_1 + 8) + 0x1ac,3,0xffffffff,0xffffffff);
      uVar5 = (undefined4)((ulonglong)uVar7 >> 0x20);
      iVar4 = *(int *)(param_1 + 8) + 0x1fc;
      if ((int)uVar7 != 0) break;
      FUN_00014d3c(iVar4,uVar5,0xffffffff,0xffffffff);
      FUN_0001cf56(param_1,2,uVar1);
      FUN_0001cf56(param_1,0,uVar2);
      FUN_0001cf56(param_1,1,uVar3);
      pcVar6 = *(code **)(**(int **)(param_1 + 4) + 0x14);
      if (pcVar6 != (code *)0x0) {
        (*pcVar6)();
      }
      thunk_FUN_00014e2c(*(int *)(param_1 + 8) + 0x1fc);
    }
    iVar4 = FUN_00014d3c(iVar4,uVar5,0x667,0);
    if (iVar4 == 0) {
      FUN_0001d4b6(param_1,1,DAT_00009280,(int)uVar7);
      thunk_FUN_00014e2c(*(int *)(param_1 + 8) + 0x1fc);
      return;
    }
  }
  return;
}



// FUN_00009284 @ 00009284 (60 bytes, called_by=0, calls=0)

void FUN_00009284(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  
  uVar1 = DAT_000092c4;
  FUN_0001d11a(param_1,DAT_000092c0);
  FUN_0001d11a(param_1,DAT_000092c8);
  FUN_0001d11a(param_1,DAT_000092cc);
  iVar3 = 0;
  while( true ) {
    puVar2 = (undefined4 *)FUN_000094b8(0,iVar3);
    if (puVar2 == (undefined4 *)0x0) break;
    FUN_0001d11a(param_1,uVar1,*puVar2);
    iVar3 = iVar3 + 1;
  }
  return;
}



// FUN_000092d0 @ 000092d0 (42 bytes, called_by=0, calls=0)

void FUN_000092d0(int param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_00005e64(DAT_000092fc,param_1,param_2,param_3,0,param_2);
  if (*(char *)(*(int *)(param_1 + 0x10) + 4) != '\0') {
    FUN_0001d136(param_1);
    return;
  }
  return;
}



// FUN_00009300 @ 00009300 (436 bytes, called_by=0, calls=0)

uint FUN_00009300(int *param_1,int param_2,byte *param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  byte *pbVar7;
  byte bVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  bool bVar12;
  
  iVar1 = DAT_000094b4;
  uVar10 = 0;
  *param_1 = 0;
LAB_00009318:
  do {
    while( true ) {
      if (*param_3 == 0) {
        return uVar10;
      }
      bVar8 = *(byte *)(iVar1 + (uint)*param_3);
      if ((bVar8 & 8) == 0) break;
      *param_3 = 0;
      param_3 = param_3 + 1;
    }
    iVar5 = *param_1;
    *param_1 = iVar5 + 1;
    *(byte **)(param_2 + iVar5 * 4) = param_3;
    uVar4 = bVar8 & 8;
    if (*param_1 == param_4) {
      return uVar10;
    }
LAB_0000934a:
    uVar10 = uVar4;
    uVar4 = (uint)*param_3;
  } while (uVar4 == 0);
  pbVar7 = param_3;
  uVar11 = uVar4;
  if (uVar10 != 0) goto LAB_0000937c;
LAB_00009358:
  if (uVar11 == 0x27) {
LAB_00009366:
    uVar2 = FUN_0001d18a(param_3);
    FUN_000167a4(param_3,param_3 + 1,uVar2);
    uVar4 = (uint)*param_3;
    uVar10 = uVar11;
LAB_00009378:
    do {
      pbVar7 = param_3;
      if (uVar4 == 0) goto LAB_00009318;
LAB_0000937c:
      param_3 = pbVar7 + 1;
      if (uVar4 == uVar10) goto code_r0x00009386;
      bVar12 = uVar4 == 0x5c;
      uVar4 = (uint)pbVar7[1];
      if (bVar12) {
        if (uVar4 == uVar10) {
          uVar2 = FUN_0001d18a(pbVar7);
          FUN_000167a4(pbVar7,param_3,uVar2);
          uVar4 = uVar10;
          goto LAB_0000934a;
        }
        uVar11 = uVar4;
        if (uVar4 == 0x30) {
          uVar9 = 0;
          uVar6 = 2;
          do {
            bVar8 = (byte)uVar9;
            uVar11 = (uint)pbVar7[uVar6];
            uVar3 = uVar11 - 0x30 & 0xff;
            if (7 < uVar3) {
              uVar6 = uVar6 & 0xff;
              if (uVar6 == 2) goto LAB_0000942e;
              break;
            }
            uVar6 = uVar6 + 1;
            uVar9 = (uVar9 & 0x1f) << 3 | uVar3;
            bVar8 = (byte)uVar9;
          } while (uVar6 != 5);
        }
        else {
LAB_0000942e:
          if (uVar11 != 0x78) {
LAB_0000948a:
            param_3 = pbVar7 + 1;
            goto LAB_00009378;
          }
          uVar11 = 0;
          iVar5 = 2;
          while( true ) {
            bVar8 = (byte)uVar11;
            uVar6 = (uint)pbVar7[iVar5];
            uVar9 = uVar6 - 0x30 & 0xff;
            if (uVar9 < 10) {
              uVar11 = uVar9 | (uVar11 & 0xf) << 4;
            }
            else {
              if (uVar6 - 0x61 < 6) {
                uVar6 = uVar6 - 0x57;
              }
              else {
                if (5 < uVar6 - 0x41) {
                  if (iVar5 == 2) goto LAB_0000948a;
                  uVar6 = 3;
                  goto LAB_00009402;
                }
                uVar6 = uVar6 - 0x37;
              }
              uVar11 = (uVar11 & 0xf) << 4 | uVar6 & 0xff;
            }
            bVar8 = (byte)uVar11;
            if (iVar5 != 2) break;
            iVar5 = 3;
          }
          uVar6 = 4;
        }
LAB_00009402:
        iVar5 = FUN_0001d18a(pbVar7);
        FUN_000167a4(pbVar7,pbVar7 + (uVar6 - 1),iVar5 - (uVar6 - 2));
        uVar4 = (uint)pbVar7[1];
        *pbVar7 = bVar8;
      }
    } while( true );
  }
  if (uVar11 == 0x5c) {
    uVar2 = FUN_0001d18a(param_3);
    FUN_000167a4(param_3,param_3 + 1,uVar2);
    bVar8 = param_3[1];
    param_3 = param_3 + 1;
    goto joined_r0x000094a4;
  }
  if (uVar11 == 0x22) goto LAB_00009366;
  if ((int)((uint)*(byte *)(iVar1 + uVar11) << 0x1c) < 0) {
    uVar10 = 0;
    goto LAB_00009318;
  }
  bVar8 = param_3[1];
  param_3 = param_3 + 1;
  goto joined_r0x000094a4;
code_r0x00009386:
  uVar2 = FUN_0001d18a(pbVar7);
  FUN_000167a4(pbVar7,param_3,uVar2);
  bVar8 = *pbVar7;
  param_3 = pbVar7;
joined_r0x000094a4:
  uVar10 = (uint)bVar8;
  uVar11 = uVar10;
  if (uVar10 == 0) goto LAB_00009318;
  goto LAB_00009358;
}



// FUN_000094b8 @ 000094b8 (92 bytes, called_by=0, calls=0)

int * FUN_000094b8(int param_1,uint param_2,int *param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (param_1 == 0) {
    if (param_2 < (uint)(DAT_00009518 - DAT_00009514) >> 2) {
      return *(int **)(DAT_00009514 + param_2 * 4);
    }
  }
  else {
    puVar2 = *(undefined4 **)(param_1 + 8);
    if (puVar2 != (undefined4 *)0x0) {
      if ((puVar2 < DAT_0000951c) || (DAT_00009520 <= puVar2)) {
        if ((puVar2 < DAT_00009524) || (DAT_00009528 <= puVar2)) {
          puVar2 = (undefined4 *)*puVar2;
        }
        else {
          param_2 = param_2 + 1;
        }
        param_3 = puVar2 + param_2 * 5;
        iVar1 = puVar2[param_2 * 5];
      }
      else {
        (*(code *)*puVar2)(param_2,param_3,(code *)*puVar2,param_2,param_4);
        iVar1 = *param_3;
      }
      if (iVar1 != 0) {
        return param_3;
      }
    }
  }
  return (int *)0x0;
}



// FUN_0000952c @ 0000952c (20 bytes, called_by=0, calls=0)

void FUN_0000952c(int param_1)

{
  if (*(int *)(*(int *)(param_1 + 8) + 0x164) << 0x1a < 0) {
    FUN_0001d292(*(undefined4 *)(param_1 + 0x14),DAT_00009540);
    return;
  }
  return;
}



// FUN_00009544 @ 00009544 (6 bytes, called_by=0, calls=0)

void FUN_00009544(undefined4 param_1)

{
  FUN_0001d292(param_1,DAT_0000954c);
  return;
}



// FUN_00009550 @ 00009550 (38 bytes, called_by=0, calls=0)

void FUN_00009550(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_2 < 1) {
    if (param_2 == 0) {
      return;
    }
    uVar1 = 0x42;
  }
  else {
    uVar1 = 0x41;
  }
  if (-1 < *(int *)(*(int *)(param_1 + 8) + 0x164) << 0x1a) {
    return;
  }
  if (param_2 < 0) {
    param_2 = -param_2;
  }
  FUN_0001d292(*(undefined4 *)(param_1 + 0x14),DAT_00009578,param_2,uVar1);
  return;
}



// FUN_0000957c @ 0000957c (38 bytes, called_by=0, calls=0)

void FUN_0000957c(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_2 < 1) {
    if (param_2 == 0) {
      return;
    }
    uVar1 = 0x44;
  }
  else {
    uVar1 = 0x43;
  }
  if (-1 < *(int *)(*(int *)(param_1 + 8) + 0x164) << 0x1a) {
    return;
  }
  if (param_2 < 0) {
    param_2 = -param_2;
  }
  FUN_0001d292(*(undefined4 *)(param_1 + 0x14),DAT_000095a4,param_2,uVar1);
  return;
}



// FUN_000095a8 @ 000095a8 (112 bytes, called_by=0, calls=0)

void FUN_000095a8(int param_1)

{
  undefined1 uVar1;
  undefined4 uVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  
  uVar2 = DAT_00009618;
  iVar5 = *(int *)(param_1 + 8);
  uVar3 = FUN_00000140(iVar5 + 0x46);
  uVar8 = (uint)*(byte *)(iVar5 + 0x2c);
  uVar7 = (uint)uVar3;
  iVar5 = 0;
  while( true ) {
    iVar4 = *(int *)(param_1 + 8);
    iVar6 = *(ushort *)(iVar4 + 0x2a) - uVar8;
    if ((int)uVar7 <= iVar6) break;
    iVar6 = iVar6 + iVar5;
    uVar1 = *(undefined1 *)(iVar4 + iVar6 + 0x46);
    *(undefined1 *)(iVar4 + iVar6 + 0x46) = 0;
    FUN_0001d292(*(undefined4 *)(param_1 + 0x14),uVar2,*(int *)(param_1 + 8) + iVar5 + 0x46);
    *(undefined1 *)(*(int *)(param_1 + 8) + iVar6 + 0x46) = uVar1;
    uVar7 = uVar7 - (*(ushort *)(*(int *)(param_1 + 8) + 0x2a) - uVar8);
    uVar8 = 0;
    iVar5 = iVar6;
  }
  if (0 < (int)uVar7) {
    FUN_0001d292(*(undefined4 *)(param_1 + 0x14),DAT_0000961c,iVar4 + iVar5 + 0x46);
    return;
  }
  return;
}



// FUN_0000969c @ 0000969c (108 bytes, called_by=0, calls=0)

void FUN_0000969c(int param_1,undefined1 param_2)

{
  ushort uVar1;
  int iVar2;
  undefined1 local_9;
  
  iVar2 = *(int *)(param_1 + 8);
  if (*(int *)(iVar2 + 0x164) << 0x1f < 0) {
    uVar1 = *(ushort *)(iVar2 + 0x42);
    if ((uint)*(ushort *)(iVar2 + 0x40) != (uint)uVar1) {
      *(ushort *)(iVar2 + 0x42) = uVar1 + 1;
      *(undefined1 *)(iVar2 + (uint)uVar1 + 0x46) = param_2;
      if (-1 < *(int *)(*(int *)(param_1 + 8) + 0x164) << 0x1e) {
        return;
      }
      if ((*(uint *)(*(int *)(param_1 + 8) + 0x164) & 4) != 0) {
        param_2 = 0x2a;
      }
      FUN_0001d292(*(undefined4 *)(param_1 + 0x14),DAT_00009708,param_2);
      iVar2 = FUN_0001d2d4(param_1);
      if (iVar2 == 0) {
        return;
      }
      FUN_00009544(*(undefined4 *)(param_1 + 0x14));
      return;
    }
  }
  FUN_0001d4d2(param_1,&local_9,1,iVar2,param_1);
  return;
}



// FUN_0000970c @ 0000970c (118 bytes, called_by=0, calls=0)

void FUN_0000970c(int param_1)

{
  short sVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  
  FUN_0001d4b6(param_1,2,DAT_00009738,**(undefined4 **)(param_1 + 8));
  if (*(int *)(*(int *)(param_1 + 8) + 0x164) << 0x1e < 0) {
    FUN_000095a8(param_1);
    iVar4 = *(int *)(param_1 + 8);
    FUN_0001d1ca(iVar4 + 0x20,*(undefined2 *)(iVar4 + 0x42),*(undefined2 *)(iVar4 + 0x40));
    sVar1 = *(short *)(iVar4 + 0x24);
    sVar2 = *(short *)(iVar4 + 0x26);
    iVar3 = FUN_0001d2ac(*(undefined4 *)(param_1 + 8));
    if (iVar3 != 0) {
      FUN_00009544(*(undefined4 *)(param_1 + 0x14));
    }
    if (sVar1 != sVar2) {
      FUN_00009550(param_1,(uint)*(ushort *)(iVar4 + 0x26) - (uint)*(ushort *)(iVar4 + 0x24));
    }
    FUN_0000957c(param_1,(uint)*(ushort *)(iVar4 + 0x20) - (uint)*(ushort *)(iVar4 + 0x22));
    return;
  }
  return;
}



// FUN_00009760 @ 00009760 (200 bytes, called_by=0, calls=0)

void FUN_00009760(int param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  uint *puVar2;
  uint uVar3;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 uStack_20;
  
  puVar2 = DAT_00009828;
  uStack_20 = param_4;
  if ((param_2 != (undefined4 *)0x0) && ((*DAT_00009828 & 7) != 0)) {
    uStack_30 = *param_2;
    local_2c = param_2[1];
    uStack_28 = param_2[2];
    local_34 = DAT_0000982c;
    local_38 = 5;
    FUN_00007b60(DAT_00009828,&DAT_00002840,&local_38,0);
    if ((*puVar2 & 7) != 0) {
      uStack_30 = param_2[3];
      local_2c = param_2[4];
      uStack_28 = param_2[5];
      local_34 = DAT_00009830;
      local_38 = 5;
      FUN_00007b60(puVar2,&DAT_00002840,&local_38,0);
      if (((*puVar2 & 7) != 0) &&
         (FUN_0001cac4(puVar2,1,DAT_00009834,param_2[7]), (*puVar2 & 7) != 0)) {
        FUN_0001cac4(puVar2,1,DAT_00009838,param_2[6]);
      }
    }
  }
  if (param_1 == 1) {
    uVar3 = 0;
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      uVar3 = getCurrentExceptionNumber();
      uVar3 = uVar3 & 0x1f;
    }
    if ((*DAT_00009828 & 7) != 0) {
      FUN_0001cac4(DAT_00009828,1,DAT_0000983c,uVar3 - 0x10);
    }
  }
  FUN_00014708(param_1,param_2);
  return;
}



// FUN_00009870 @ 00009870 (222 bytes, called_by=0, calls=0)

undefined4 FUN_00009870(int param_1,undefined1 *param_2,undefined4 param_3,undefined4 param_4)

{
  uint *puVar1;
  undefined4 uVar2;
  int iVar3;
  
  puVar1 = DAT_00009950;
  if (*DAT_00009950 << 0x1d != 0) {
    FUN_0001d866(DAT_00009950,DAT_00009954,param_3,*DAT_00009950 << 0x1d,param_4);
  }
  if (*(int *)(DAT_00009958 + 0x28) << 0x13 < 0) {
    if ((*puVar1 & 7) != 0) {
      FUN_0001d866(DAT_00009950,PTR_DAT_0000995c);
    }
    uVar2 = 0x17;
  }
  else {
    uVar2 = 0x16;
  }
  if (*(int *)(DAT_00009958 + 0x28) << 0x14 < 0) {
    iVar3 = *puVar1 << 0x1d;
    if (iVar3 != 0) {
      FUN_0001d866(DAT_00009950,PTR_DAT_00009960,iVar3,*puVar1,param_4);
    }
    uVar2 = 0x18;
  }
  iVar3 = DAT_00009958;
  if (*(int *)(DAT_00009958 + 0x28) << 0x16 < 0) {
    if ((*puVar1 & 7) != 0) {
      FUN_0001d866(DAT_00009950,PTR_DAT_00009964);
    }
    if (*(int *)(iVar3 + 0x28) << 0x10 < 0) {
      if ((*puVar1 & 7) != 0) {
        FUN_0001cac4(DAT_00009950,1,PTR_DAT_00009968,*(undefined4 *)(iVar3 + 0x38));
      }
      if (param_1 != 0) {
        *(uint *)(DAT_00009958 + 0x28) = *(uint *)(DAT_00009958 + 0x28) & 0xffff7fff;
      }
    }
    uVar2 = 0x19;
  }
  if (*(int *)(DAT_00009958 + 0x28) << 0x15 < 0) {
    if ((*puVar1 & 7) != 0) {
      FUN_0001d866(DAT_00009950,PTR_DAT_0000996c);
    }
    uVar2 = 0x1a;
  }
  if (*(int *)(DAT_00009958 + 0x28) << 0x17 < 0) {
    if ((*puVar1 & 7) != 0) {
      FUN_0001d866(DAT_00009950,PTR_DAT_00009970);
    }
    uVar2 = 0x1b;
  }
  else if (*(int *)(DAT_00009958 + 0x28) << 0x12 < 0) {
    if ((*puVar1 & 7) != 0) {
      FUN_0001d866(DAT_00009950,PTR_DAT_00009974);
    }
    uVar2 = 0x1c;
  }
  *(uint *)(DAT_00009958 + 0x28) = *(uint *)(DAT_00009958 + 0x28) | 0xff00;
  *param_2 = 0;
  return uVar2;
}



// FUN_00009978 @ 00009978 (182 bytes, called_by=0, calls=0)

undefined4 FUN_00009978(void)

{
  uint *puVar1;
  undefined4 uVar2;
  
  puVar1 = DAT_00009a30;
  if ((*DAT_00009a30 & 7) != 0) {
    FUN_0001d866(DAT_00009a30,DAT_00009a34);
  }
  if (*(int *)(DAT_00009a38 + 0x28) << 6 < 0) {
    if ((*puVar1 & 7) != 0) {
      FUN_0001d866(DAT_00009a30,DAT_00009a3c);
    }
    uVar2 = 0x1e;
  }
  else {
    uVar2 = 0x1d;
  }
  if (*(int *)(DAT_00009a38 + 0x28) << 7 < 0) {
    if ((*puVar1 & 7) != 0) {
      FUN_0001d866(DAT_00009a30,DAT_00009a40);
    }
    uVar2 = 0x1f;
  }
  if (*(int *)(DAT_00009a38 + 0x28) << 0xc < 0) {
    if ((*puVar1 & 7) != 0) {
      FUN_0001d866(DAT_00009a30,DAT_00009a44);
    }
    uVar2 = 0x21;
  }
  if (*(int *)(DAT_00009a38 + 0x28) << 0xd < 0) {
    if ((*puVar1 & 7) != 0) {
      FUN_0001d866(DAT_00009a30,DAT_00009a48);
    }
    uVar2 = 0x22;
  }
  if (*(int *)(DAT_00009a38 + 0x28) << 0xe < 0) {
    if ((*puVar1 & 7) != 0) {
      FUN_0001d866(DAT_00009a30,DAT_00009a4c);
    }
    uVar2 = 0x23;
  }
  if (*(int *)(DAT_00009a38 + 0x28) << 0xf < 0) {
    if ((*puVar1 & 7) != 0) {
      FUN_0001d866(DAT_00009a30,DAT_00009a50);
    }
    uVar2 = 0x24;
  }
  *(uint *)(DAT_00009a38 + 0x28) = ~((uint)~(*(int *)(DAT_00009a38 + 0x28) << 0x10) >> 0x10);
  return uVar2;
}



// FUN_00009a54 @ 00009a54 (282 bytes, called_by=0, calls=0)

undefined4 FUN_00009a54(undefined4 param_1,int param_2,undefined1 *param_3)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  bool bVar6;
  
  puVar1 = DAT_00009b70;
  if ((*DAT_00009b70 & 7) != 0) {
    FUN_0001d866(DAT_00009b70,DAT_00009b74);
  }
  if (*(int *)(DAT_00009b78 + 0x28) << 0x1b < 0) {
    if ((*puVar1 & 7) != 0) {
      FUN_0001d866(DAT_00009b70,DAT_00009b7c);
    }
    uVar4 = 0x11;
  }
  else {
    uVar4 = 0x10;
  }
  if (*(int *)(DAT_00009b78 + 0x28) << 0x1c < 0) {
    if ((*puVar1 & 7) != 0) {
      FUN_0001d866(DAT_00009b70,DAT_00009b80);
    }
    uVar4 = 0x12;
  }
  iVar2 = DAT_00009b78;
  if (*(int *)(DAT_00009b78 + 0x28) << 0x1e < 0) {
    if ((*puVar1 & 7) != 0) {
      FUN_0001d866(DAT_00009b70,DAT_00009b84);
    }
    uVar5 = *(undefined4 *)(iVar2 + 0x34);
    if (*(int *)(iVar2 + 0x28) << 0x18 < 0) {
      if ((*puVar1 & 7) != 0) {
        FUN_0001cac4(DAT_00009b70,1,DAT_00009b88,uVar5);
      }
      if (param_2 != 0) {
        *(uint *)(DAT_00009b78 + 0x28) = *(uint *)(DAT_00009b78 + 0x28) & 0xffffff7f;
      }
    }
    else {
      uVar5 = 0xffffffea;
    }
    uVar4 = 0x13;
  }
  else {
    uVar5 = 0xffffffea;
  }
  if (*(int *)(DAT_00009b78 + 0x28) << 0x1f < 0) {
    if ((*puVar1 & 7) != 0) {
      FUN_0001d866(DAT_00009b70,DAT_00009b8c);
    }
    uVar4 = 0x14;
  }
  if (*(int *)(DAT_00009b78 + 0x28) << 0x1a < 0) {
    if ((*puVar1 & 7) != 0) {
      FUN_0001d866(DAT_00009b70,DAT_00009b90);
    }
    uVar4 = 0x15;
  }
  if ((((*(int *)(DAT_00009b78 + 0x28) << 0x1b < 0) || (*(int *)(DAT_00009b78 + 0x28) << 0x1e < 0))
      && (*(int *)(DAT_00009b78 + 4) << 0x14 < 0)) &&
     (iVar2 = FUN_0000a0dc(uVar5,param_1), iVar2 != 0)) {
    bVar6 = (bool)isCurrentModePrivileged();
    if (bVar6) {
      setProcessStackPointer(iVar2);
    }
    uVar4 = 2;
  }
  iVar2 = DAT_00009b78;
  uVar3 = *(int *)(DAT_00009b78 + 0x28) << 0x1a;
  bVar6 = (int)uVar3 < 0;
  if (bVar6) {
    uVar3 = *(uint *)(DAT_00009b78 + 0x24) & 0xffffdfff;
  }
  if (bVar6) {
    *(uint *)(DAT_00009b78 + 0x24) = uVar3;
  }
  *(uint *)(iVar2 + 0x28) = *(uint *)(iVar2 + 0x28) | 0xff;
  *param_3 = 0;
  return uVar4;
}



// FUN_00009b94 @ 00009b94 (460 bytes, called_by=0, calls=0)

void FUN_00009b94(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  short sVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 *puVar8;
  uint uVar9;
  undefined4 *puVar10;
  bool bVar11;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 uStack_50;
  int local_4c;
  undefined2 local_48;
  char local_39;
  undefined4 local_38 [7];
  uint local_1c;
  
  uVar9 = *(uint *)(DAT_00009d6c + 4);
  uVar7 = uVar9 & 0x1ff;
  bVar11 = (bool)isCurrentModePrivileged();
  if (bVar11) {
    setBasePriority(0);
  }
  InstructionSynchronizationBarrier(0xf);
  if ((param_3 & 0xff000000) == 0xff000000) {
    if ((param_3 & 0xc) == 8) {
      if ((*DAT_00009d70 & 7) != 0) {
        FUN_0001d866(DAT_00009d70,DAT_00009d74);
      }
      goto LAB_00009bd2;
    }
    bVar11 = -1 < (int)(param_3 << 0x1c);
    if (bVar11) {
      param_2 = param_1;
    }
  }
  else {
LAB_00009bd2:
    bVar11 = false;
    param_2 = (undefined4 *)0x0;
  }
  puVar3 = DAT_00009d70;
  local_39 = '\0';
  switch(uVar7) {
  case 3:
    if ((*DAT_00009d70 & 7) != 0) {
      FUN_0001d866(DAT_00009d70,DAT_00009d78);
    }
    local_39 = '\0';
    if (*(int *)(DAT_00009d6c + 0x2c) << 0x1e < 0) {
      uVar7 = *puVar3;
      uVar6 = DAT_00009d7c;
      goto joined_r0x00009d1a;
    }
    if (*(int *)(DAT_00009d6c + 0x2c) < 0) {
      uVar6 = DAT_00009d80;
      if ((*puVar3 & 7) == 0) break;
      goto LAB_00009c20;
    }
    if (*(int *)(DAT_00009d6c + 0x2c) << 1 < 0) {
      if ((*puVar3 & 7) != 0) {
        FUN_0001d866(DAT_00009d70,DAT_00009d84);
      }
      iVar2 = DAT_00009d6c;
      iVar4 = param_2[6];
      *(uint *)(DAT_00009d6c + 0x14) = *(uint *)(DAT_00009d6c + 0x14) | 0x100;
      DataSynchronizationBarrier(0xf);
      InstructionSynchronizationBarrier(0xf);
      sVar1 = *(short *)(iVar4 + -2);
      *(uint *)(iVar2 + 0x14) = *(uint *)(iVar2 + 0x14) & 0xfffffeff;
      DataSynchronizationBarrier(0xf);
      InstructionSynchronizationBarrier(0xf);
      if (sVar1 == -0x20fe) {
        if ((*puVar3 & 7) != 0) {
          FUN_0001cac4(DAT_00009d70,1,DAT_00009d88,*param_2);
        }
        uVar6 = *param_2;
        goto LAB_00009ca2;
      }
      if ((*(uint *)(iVar2 + 0x28) & 0xff) != 0) {
        uVar6 = 1;
        goto LAB_00009c86;
      }
      if ((*(uint *)(iVar2 + 0x28) & 0xff00) != 0) {
        uVar6 = 1;
        goto LAB_00009cf2;
      }
      if (0xffff < *(uint *)(iVar2 + 0x28)) goto switchD_00009be2_caseD_6;
    }
    break;
  case 4:
    uVar6 = 0;
LAB_00009c86:
    uVar6 = FUN_00009a54(param_2,uVar6,&local_39);
    goto LAB_00009ca2;
  case 5:
    uVar6 = 0;
LAB_00009cf2:
    uVar6 = FUN_00009870(uVar6,&local_39);
    goto LAB_00009ca2;
  case 6:
switchD_00009be2_caseD_6:
    uVar6 = FUN_00009978();
    goto LAB_00009ca2;
  default:
    if ((*DAT_00009d70 & 7) != 0) {
      uStack_50 = DAT_00009d94;
      if ((uVar9 & 0x1f0) != 0) {
        uStack_50 = DAT_00009d90;
      }
      local_54 = DAT_00009d98;
      local_48 = 0x200;
      local_4c = uVar7 - 0x10;
      local_58 = DAT_00009d9c;
      FUN_00007b60(DAT_00009d70,&DAT_00002440,&local_58,0);
    }
    break;
  case 0xc:
    uVar7 = *DAT_00009d70;
    uVar6 = DAT_00009d8c;
joined_r0x00009d1a:
    local_39 = '\0';
    if ((uVar7 & 7) != 0) {
LAB_00009c20:
      local_39 = '\0';
      FUN_0001d866(DAT_00009d70,uVar6);
    }
  }
  uVar6 = 0;
LAB_00009ca2:
  if (local_39 == '\0') {
    puVar8 = local_38;
    puVar10 = param_2 + 8;
    do {
      uVar5 = param_2[1];
      *puVar8 = *param_2;
      puVar8[1] = uVar5;
      puVar8 = puVar8 + 2;
      param_2 = param_2 + 2;
    } while (param_2 != puVar10);
    if (bVar11) {
      if ((local_1c & 0x1ff) == 0) {
        local_1c = ~(~(local_1c >> 9) << 9);
      }
    }
    else {
      local_1c = local_1c & 0xfffffe00;
    }
    FUN_00009760(uVar6,local_38);
  }
  return;
}



// FUN_00009e20 @ 00009e20 (26 bytes, called_by=0, calls=0)

void FUN_00009e20(void)

{
  DataSynchronizationBarrier(0xf);
  *(uint *)(DAT_00009e3c + 0xc) = DAT_00009e40 | *(uint *)(DAT_00009e3c + 0xc) & 0x700;
  DataSynchronizationBarrier(0xf);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



// FUN_00009ecc @ 00009ecc (318 bytes, called_by=0, calls=0)

/* WARNING: Removing unreachable block (ram,0x00015540) */

int FUN_00009ecc(int param_1)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int extraout_r1;
  undefined4 uVar6;
  uint uVar7;
  
  iVar4 = DAT_00009ef4;
  if (*(int *)(DAT_00009ef0 + 8) == param_1) {
    uVar7 = 0;
    bVar2 = (bool)isCurrentModePrivileged();
    if (bVar2) {
      uVar7 = getCurrentExceptionNumber();
      uVar7 = uVar7 & 0x1f;
    }
    if (uVar7 != 0) {
      *(uint *)(DAT_00009ef4 + 4) = *(uint *)(DAT_00009ef4 + 4) | 0x10000000;
      *(uint *)(iVar4 + 0x24) = *(uint *)(iVar4 + 0x24) & 0xffff7fff;
    }
  }
  uVar6 = 0;
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    uVar6 = getBasePriority();
  }
  bVar2 = (bool)isCurrentModePrivileged();
  if ((bVar2) && (uVar7 = getBasePriority(), uVar7 == 0 || 0x40 < uVar7)) {
    setBasePriority(0x40);
  }
  InstructionSynchronizationBarrier(0xf);
  if ((int)((uint)*(byte *)(param_1 + 0xc) << 0x1f) < 0) {
    bVar2 = (bool)isCurrentModePrivileged();
    if (bVar2) {
      setBasePriority(uVar6);
    }
    InstructionSynchronizationBarrier(0xf);
    bVar2 = (bool)isCurrentModePrivileged();
    if (bVar2) {
      setBasePriority(0);
    }
    InstructionSynchronizationBarrier(0xf);
    software_interrupt(2);
    return 4;
  }
  if ((int)((uint)*(byte *)(param_1 + 0xd) << 0x1c) < 0) {
    bVar2 = (bool)isCurrentModePrivileged();
    if (bVar2) {
      setBasePriority(uVar6);
    }
    InstructionSynchronizationBarrier(0xf);
    return param_1;
  }
  bVar1 = *(byte *)(param_1 + 0xd);
  iVar5 = 8;
  iVar4 = param_1;
  if ((bVar1 & 8) != 0) goto LAB_0001556a;
  if ((char)bVar1 < '\0') {
    *(byte *)(param_1 + 0xd) = bVar1 & 0x7f | 8;
    FUN_00020be2();
    iVar5 = extraout_r1;
  }
  else {
    *(byte *)(param_1 + 0xd) = bVar1 | 8;
  }
  if (iVar5 == 8) {
    if (*(int *)(param_1 + 8) != 0) {
      FUN_00020bf2(param_1);
    }
    FUN_00020e9a(param_1 + 0x18);
    iVar4 = *(int *)(param_1 + 0x78);
    iVar5 = DAT_0001560c;
    iVar3 = DAT_00015610;
    while ((DAT_0001560c = iVar5, DAT_00015610 = iVar3, param_1 + 0x78 != iVar4 && (iVar4 != 0))) {
      FUN_00020bf2(iVar4);
      FUN_00020e9a(iVar4 + 0x18);
      *(undefined4 *)(iVar4 + 0xac) = 0;
      FUN_000154cc(iVar4);
      iVar5 = DAT_0001560c;
      iVar3 = DAT_00015610;
      iVar4 = *(int *)(param_1 + 0x78);
    }
    if (param_1 != *(int *)(iVar5 + 8)) goto LAB_00015558;
    uVar7 = 0;
    bVar2 = (bool)isCurrentModePrivileged();
    if (bVar2) {
      uVar7 = getCurrentExceptionNumber();
      uVar7 = uVar7 & 0x1f;
    }
    if (uVar7 == 0) goto LAB_00015558;
    FUN_00015460(1);
    *(undefined2 *)(iVar3 + 0xc) = 0x101;
    *(undefined4 *)(iVar3 + 0x98) = 0;
    *(undefined4 *)(iVar3 + 0x9c) = 0;
    iVar4 = FUN_00016170(iVar3);
    *(int *)(iVar5 + 8) = iVar3;
  }
  else {
LAB_00015558:
    iVar4 = FUN_00015460(1);
  }
  DataMemoryBarrier(0x1f);
  *(byte *)(param_1 + 0xd) = *(byte *)(param_1 + 0xd) & 0x9f;
LAB_0001556a:
  if (*(int *)(DAT_0001560c + 8) == param_1) {
    uVar7 = 0;
    bVar2 = (bool)isCurrentModePrivileged();
    if (bVar2) {
      uVar7 = getCurrentExceptionNumber();
      uVar7 = uVar7 & 0x1f;
    }
    if (uVar7 == 0) {
      iVar4 = FUN_00009ef8(uVar6);
      return iVar4;
    }
  }
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    setBasePriority(uVar6);
  }
  InstructionSynchronizationBarrier(0xf);
  return iVar4;
}



// FUN_00009ef8 @ 00009ef8 (44 bytes, called_by=0, calls=0)

undefined4 FUN_00009ef8(undefined4 param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = DAT_00009f24;
  iVar4 = *(int *)(DAT_00009f24 + 8);
  *(undefined4 *)(iVar4 + 0xac) = 0xfffffff5;
  iVar3 = DAT_00009f28;
  *(undefined4 *)(iVar4 + 0xa8) = param_1;
  *(uint *)(iVar3 + 4) = *(uint *)(iVar3 + 4) | 0x10000000;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(0);
  }
  InstructionSynchronizationBarrier(0xf);
  return *(undefined4 *)(*(int *)(iVar2 + 8) + 0xac);
}



// FUN_00009f2c @ 00009f2c (58 bytes, called_by=0, calls=0)

undefined4 FUN_00009f2c(undefined4 param_1)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    getBasePriority();
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if ((bVar1) && (uVar2 = getBasePriority(), uVar2 == 0 || 0x40 < uVar2)) {
    setBasePriority(0x40);
  }
  InstructionSynchronizationBarrier(0xf);
  iVar3 = *(int *)(DAT_00009f68 + 0x1c);
  *(int *)(DAT_00009f68 + 8) = iVar3;
  *(undefined4 *)(DAT_00009f6c + 4) = 0x8000000;
  uVar4 = *(undefined4 *)(iVar3 + 0xa8);
  *(undefined4 *)(iVar3 + 0xa8) = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(uVar4);
  }
  InstructionSynchronizationBarrier(0xf);
  FUN_0000a1b0();
  return param_1;
}



// FUN_00009fd8 @ 00009fd8 (24 bytes, called_by=0, calls=0)

void FUN_00009fd8(char param_1)

{
  uint uVar1;
  
  uVar1 = (uint)param_1;
  if (-1 < (int)uVar1) {
    *(int *)(DAT_00009ff0 + (uVar1 >> 5) * 4) = 1 << (uVar1 & 0x1f);
  }
  return;
}



// FUN_00009ff4 @ 00009ff4 (34 bytes, called_by=0, calls=0)

void FUN_00009ff4(char param_1)

{
  uint uVar1;
  
  uVar1 = (uint)param_1;
  if (-1 < (int)uVar1) {
    *(int *)(DAT_0000a018 + ((uVar1 >> 5) + 0x20) * 4) = 1 << (uVar1 & 0x1f);
    DataSynchronizationBarrier(0xf);
    InstructionSynchronizationBarrier(0xf);
  }
  return;
}



// FUN_0000a038 @ 0000a038 (46 bytes, called_by=0, calls=0)

void FUN_0000a038(char param_1,int param_2,int param_3)

{
  undefined1 uVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  
  uVar2 = (uint)param_1;
  if (param_3 << 0x1f < 0) {
    param_2 = 0;
  }
  else {
    param_2 = param_2 + 2;
  }
  bVar4 = -1 < (int)uVar2;
  iVar3 = DAT_0000a068;
  if (bVar4) {
    uVar2 = uVar2 + 0xe0000000;
    iVar3 = param_3;
  }
  if (bVar4) {
    uVar2 = uVar2 + 0xe100;
  }
  else {
    uVar2 = uVar2 & 0xf;
  }
  uVar1 = (undefined1)(param_2 << 5);
  if (bVar4) {
    *(undefined1 *)(uVar2 + 0x300) = uVar1;
  }
  else {
    *(undefined1 *)(iVar3 + uVar2) = uVar1;
  }
  return;
}



// FUN_0000a0a4 @ 0000a0a4 (52 bytes, called_by=0, calls=0)

void FUN_0000a0a4(int param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6,undefined4 param_7)

{
  uint uVar1;
  
  *(undefined4 *)(param_3 + -0x20) = param_4;
  *(undefined4 *)(param_3 + -0x1c) = param_5;
  uVar1 = DAT_0000a0d8;
  *(undefined4 *)(param_3 + -0x18) = param_6;
  *(undefined4 *)(param_3 + -0x14) = param_7;
  *(undefined4 *)(param_3 + -4) = 0x1000000;
  *(uint *)(param_3 + -8) = uVar1 & 0xfffffffe;
  *(int *)(param_1 + 0x70) = param_3 + -0x20;
  *(undefined4 *)(param_1 + 0xa8) = 0;
  return;
}



// FUN_0000a0dc @ 0000a0dc (42 bytes, called_by=0, calls=0)

uint FUN_0000a0dc(uint param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(DAT_0000a108 + 8);
  if (uVar1 != 0) {
    uVar1 = *(uint *)(uVar1 + 0x98);
    if ((param_1 == 0xffffffea) || ((uVar1 - 0x40 <= param_1 && (param_1 < uVar1)))) {
      if (uVar1 <= param_2) {
        uVar1 = 0;
      }
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}



// FUN_0000a10c @ 0000a10c (54 bytes, called_by=0, calls=0)

void FUN_0000a10c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  
  *(undefined4 *)(DAT_0000a144 + 8) = param_1;
  FUN_00015454();
  FUN_0000a1b0(param_1);
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setProcessStackPointer(param_2);
  }
  (*DAT_0000a148)(0);
                    /* WARNING: Could not recover jumptable at 0x0000a140. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_0000a14c)(param_3,0,0,0,param_4);
  return;
}



// FUN_0000a1b0 @ 0000a1b0 (104 bytes, called_by=0, calls=0)

void FUN_0000a1b0(int param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  
  piVar3 = DAT_0000a1cc;
  *DAT_0000a1cc = *(int *)(param_1 + 0x98) + -0x40;
  iVar4 = DAT_0000a1d0;
  piVar3[1] = 0x40;
  piVar3[2] = iVar4;
  uVar2 = (uint)*DAT_0000a30c;
  iVar4 = 0;
  do {
    iVar1 = DAT_0000a310;
    if (0 < iVar4) {
      if (uVar2 != 0xffffffea) {
        for (; (int)uVar2 < (int)((uint)(*(int *)(iVar1 + 0x90) << 0x10) >> 0x18); uVar2 = uVar2 + 1
            ) {
          *(uint *)(iVar1 + 0x98) = uVar2;
          *(undefined4 *)(iVar1 + 0xa0) = 0;
        }
      }
      return;
    }
    if (piVar3[1] != 0) {
      iVar1 = FUN_0001d8dc(uVar2 & 0xff,piVar3);
      if (iVar1 == -0x16) {
        return;
      }
      uVar2 = iVar1 + 1;
    }
    iVar4 = iVar4 + 1;
    piVar3 = piVar3 + 3;
  } while( true );
}



// FUN_0000a1d4 @ 0000a1d4 (76 bytes, called_by=0, calls=0)

uint FUN_0000a1d4(uint param_1,uint *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = DAT_0000a220;
  if (((uint)(*(int *)(DAT_0000a220 + 0x90) << 0x10) >> 0x18) - 1 < param_1) {
    if ((*DAT_0000a224 & 7) != 0) {
      FUN_0001cac4(DAT_0000a224,1,DAT_0000a228,param_1,param_4);
    }
    param_1 = 0xffffffea;
  }
  else {
    *(uint *)(DAT_0000a220 + 0x98) = param_1;
    *(uint *)(iVar1 + 0x9c) = *param_2 & 0xffffffe0 | param_1 | 0x10;
    *(uint *)(iVar1 + 0xa0) = param_2[2] | 1;
  }
  return param_1;
}



// FUN_0000a22c @ 0000a22c (18 bytes, called_by=0, calls=0)

void FUN_0000a22c(void)

{
  *(undefined4 *)(DAT_0000a240 + 0x94) = 5;
  DataSynchronizationBarrier(0xf);
  InstructionSynchronizationBarrier(0xf);
  return;
}



// FUN_0000a244 @ 0000a244 (14 bytes, called_by=0, calls=0)

void FUN_0000a244(void)

{
  DataMemoryBarrier(0x1f);
  *(undefined4 *)(DAT_0000a254 + 0x94) = 0;
  return;
}



// FUN_0000a314 @ 0000a314 (386 bytes, called_by=0, calls=0)

undefined4 FUN_0000a314(void)

{
  byte *pbVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  uint *puVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined4 uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  undefined8 uVar13;
  int local_30;
  undefined4 local_2c;
  undefined4 local_28;
  uint local_24;
  
  uVar10 = *DAT_0000a49c;
  if ((uint)(*(int *)(DAT_0000a498 + 0x90) << 0x10) >> 0x18 < uVar10) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar13 = FUN_0000a244();
    iVar3 = (int)uVar13;
    puVar5 = *(uint **)((int)((ulonglong)uVar13 >> 0x20) + 4);
    for (uVar7 = 0; uVar2 = DAT_0000a4a4, pbVar1 = DAT_0000a4a0, uVar10 != uVar7; uVar7 = uVar7 + 1)
    {
      *(uint *)(iVar3 + 0x98) = uVar7;
      *(uint *)(iVar3 + 0x9c) = *puVar5 & 0xffffffe0 | uVar7 | 0x10;
      *(uint *)(iVar3 + 0xa0) = puVar5[2] | 1;
      puVar5 = puVar5 + 3;
    }
    *DAT_0000a4a0 = (byte)uVar10;
    iVar3 = FUN_00008200(&local_30);
    uVar7 = DAT_0000a4ac;
    uVar10 = DAT_0000a4a8;
    for (iVar11 = 0; iVar6 = DAT_0000a498, iVar3 != iVar11; iVar11 = iVar11 + 1) {
      iVar6 = local_30 + iVar11 * 0x10;
      iVar12 = iVar11 * 0x10;
      uVar8 = *(uint *)(iVar6 + 0xc) & uVar2;
      if (uVar8 == 0x800000) {
        uVar9 = *(undefined4 *)(local_30 + iVar12);
        uVar4 = *(undefined4 *)(iVar6 + 4);
        local_24 = FUN_0001d8bc(*(undefined4 *)(iVar6 + 8));
        local_24 = local_24 | 0x1040000;
LAB_0000a418:
        local_2c = uVar4;
        local_28 = uVar9;
        iVar6 = FUN_0000a1d4(*pbVar1,&local_2c);
        if (iVar6 < 0) goto LAB_0000a38a;
        *pbVar1 = *pbVar1 + 1;
      }
      else {
        if (uVar8 < 0x800001) {
          if (uVar8 == 0x200000) {
            uVar9 = *(undefined4 *)(local_30 + iVar12);
            uVar4 = *(undefined4 *)(iVar6 + 4);
            local_24 = FUN_0001d8bc(*(undefined4 *)(iVar6 + 8));
            local_24 = local_24 | uVar10;
          }
          else if (uVar8 == 0x400000) {
            uVar9 = *(undefined4 *)(local_30 + iVar12);
            uVar4 = *(undefined4 *)(iVar6 + 4);
            local_24 = FUN_0001d8bc(*(undefined4 *)(iVar6 + 8));
            local_24 = local_24 | uVar7;
          }
          else {
            if (uVar8 != 0x100000) goto LAB_0000a3e2;
            uVar9 = *(undefined4 *)(local_30 + iVar12);
            uVar4 = *(undefined4 *)(iVar6 + 4);
            local_24 = FUN_0001d8bc(*(undefined4 *)(iVar6 + 8));
            local_24 = local_24 | 0x110b0000;
          }
          goto LAB_0000a418;
        }
        if (uVar8 == 0x1000000) {
          uVar9 = *(undefined4 *)(local_30 + iVar12);
          uVar4 = *(undefined4 *)(iVar6 + 4);
          local_24 = FUN_0001d8bc(*(undefined4 *)(iVar6 + 8));
          local_24 = local_24 | 0x1100000;
          goto LAB_0000a418;
        }
        if (uVar8 == 0x2000000) {
          uVar9 = *(undefined4 *)(local_30 + iVar12);
          uVar4 = *(undefined4 *)(iVar6 + 4);
          local_24 = FUN_0001d8bc(*(undefined4 *)(iVar6 + 8));
          local_24 = local_24 | 0x40000;
          goto LAB_0000a418;
        }
      }
LAB_0000a3e2:
    }
    for (uVar10 = (uint)*pbVar1; (int)uVar10 < (int)((uint)(*(int *)(iVar6 + 0x90) << 0x10) >> 0x18)
        ; uVar10 = uVar10 + 1) {
      *(uint *)(iVar6 + 0x98) = uVar10;
      *(undefined4 *)(iVar6 + 0xa0) = 0;
    }
    local_2c = FUN_0000a22c();
    local_28 = 0x400;
    local_24 = DAT_0000a4b0;
    iVar3 = FUN_0001d8dc(*pbVar1,&local_2c);
    if (iVar3 == -0x16) {
LAB_0000a38a:
      uVar4 = 0xffffffea;
    }
    else {
      *pbVar1 = *pbVar1 + 1;
      uVar4 = 0;
    }
  }
  return uVar4;
}



// FUN_0000a50c @ 0000a50c (32 bytes, called_by=0, calls=0)

int FUN_0000a50c(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  iVar1 = DAT_0000a530;
  uVar3 = *DAT_0000a52c;
  uVar2 = param_1 + uVar3;
  if (uVar2 < 0x2001fc00U - DAT_0000a530) {
    *DAT_0000a52c = uVar2;
    iVar1 = iVar1 + uVar3;
  }
  else {
    iVar1 = -1;
  }
  return iVar1;
}



// FUN_0000a534 @ 0000a534 (28 bytes, called_by=0, calls=0)

void FUN_0000a534(void)

{
  bool bVar1;
  int iVar2;
  undefined4 in_r3;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uVar4 = 0xa53d;
  FUN_0001bb8c(uRam0000a54c);
  iVar2 = DAT_0000a584;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(0);
  }
  InstructionSynchronizationBarrier(0xf);
  software_interrupt(2);
  uVar5 = 0x14;
  uVar3 = (uint)Reserved1._2_1_;
  if (Reserved4 != (undefined *)0x0) {
    if (-1 < (int)((uint)Reserved1._1_1_ << 0x1f)) {
      (**(code **)(**(int **)(uVar3 * 0x2c + DAT_0000a584 + 0x24) + 8))();
    }
    Reserved4 = (undefined *)0x0;
  }
  FUN_000208f0(uVar3 * 0x2c + iVar2,0,0x14,0,0,0x14,uVar5,uVar4,in_r3);
  return;
}



// FUN_0000a550 @ 0000a550 (52 bytes, called_by=0, calls=0)

void FUN_0000a550(int param_1,undefined4 param_2,undefined4 param_3)

{
  byte bVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = DAT_0000a584;
  bVar1 = *(byte *)(param_1 + 10);
  if (*(int *)(param_1 + 0x14) != 0) {
    if (-1 < (int)((uint)*(byte *)(param_1 + 9) << 0x1f)) {
      (**(code **)(**(int **)((uint)bVar1 * 0x2c + DAT_0000a584 + 0x24) + 8))();
    }
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  FUN_000208f0((uint)bVar1 * 0x2c + iVar2,0,param_1,0,0,param_1,param_3,in_lr);
  return;
}



// FUN_0000a588 @ 0000a588 (10 bytes, called_by=0, calls=0)

int FUN_0000a588(int param_1)

{
  return param_1 * 0x2c + DAT_0000a594;
}



// FUN_0000a5dc @ 0000a5dc (274 bytes, called_by=0, calls=0)

int FUN_0000a5dc(int param_1,int param_2,int param_3,int param_4)

{
  ushort uVar1;
  bool bVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 extraout_r1;
  int iVar7;
  undefined4 uVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  undefined4 local_38;
  undefined4 uStack_34;
  int local_2c [2];
  
  local_2c[0] = param_2;
  FUN_00020ed0(&local_38);
  uVar5 = uStack_34;
  uVar4 = local_38;
  uVar8 = 0;
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    uVar8 = getBasePriority();
  }
  bVar2 = (bool)isCurrentModePrivileged();
  if ((bVar2) && (uVar3 = getBasePriority(), uVar3 == 0 || 0x40 < uVar3)) {
    setBasePriority(0x40);
  }
  InstructionSynchronizationBarrier(0xf);
  if (*(ushort *)(param_1 + 0x1a) == 0) {
    bVar2 = (bool)isCurrentModePrivileged();
    if (bVar2) {
      setBasePriority(uVar8);
    }
    InstructionSynchronizationBarrier(0xf);
    uVar8 = extraout_r1;
    if (param_4 == 0 && param_3 == 0) {
LAB_0000a6a0:
      param_3 = 0;
      param_4 = 0;
    }
    else {
      uVar10 = FUN_000159e4();
      uVar8 = (undefined4)((ulonglong)uVar10 >> 0x20);
      if (DAT_0000a6f8 == (int)uVar10) goto LAB_0000a6a0;
    }
    uVar9 = FUN_00014ea4(param_1,uVar8,param_3,param_4);
    if ((int)uVar9 != 0) goto LAB_0000a628;
LAB_0000a6b6:
    iVar7 = 0;
  }
  else {
    if ((*(ushort *)(param_1 + 0x1a) < *(ushort *)(param_1 + 0x18)) &&
       (uVar9 = FUN_00014ea4(param_1,extraout_r1,0,0), (int)uVar9 != 0)) {
      bVar2 = (bool)isCurrentModePrivileged();
      if (bVar2) {
        setBasePriority(uVar8);
      }
      InstructionSynchronizationBarrier(0xf);
    }
    else {
      uVar1 = *(ushort *)(param_1 + 0x1a);
      *(ushort *)(param_1 + 0x1a) = uVar1 - 1;
      bVar2 = (bool)isCurrentModePrivileged();
      if (bVar2) {
        setBasePriority(uVar8);
      }
      InstructionSynchronizationBarrier(0xf);
      iVar7 = ((uint)*(ushort *)(param_1 + 0x18) - (uint)uVar1) *
              (*(byte *)(param_1 + 0x1c) + 0x1b & 0xfffffffc) + *(int *)(param_1 + 0x28);
      uVar9 = (ulonglong)CONCAT24(uVar1,iVar7);
      *(char *)(iVar7 + 10) = (char)DAT_0000a6f4 * (char)(param_1 - DAT_0000a6f0 >> 2);
      *(undefined1 *)(iVar7 + 0xb) = *(undefined1 *)(param_1 + 0x1c);
    }
LAB_0000a628:
    iVar7 = (int)uVar9;
    if (local_2c[0] == 0) {
      *(undefined4 *)(iVar7 + 0x14) = 0;
    }
    else {
      FUN_00020f18(&local_38,(int)(uVar9 >> 0x20),uVar4,uVar5);
      iVar6 = (**(code **)**(undefined4 **)
                            ((uint)*(byte *)(iVar7 + 10) * 0x2c + DAT_0000a6f0 + 0x24))
                        (iVar7,local_2c,local_38,uStack_34);
      *(int *)(iVar7 + 0x14) = iVar6;
      if (iVar6 == 0) {
        FUN_0000a550(iVar7);
        goto LAB_0000a6b6;
      }
    }
    *(undefined2 *)(iVar7 + 8) = 1;
    *(short *)(iVar7 + 0x12) = (short)local_2c[0];
    *(undefined4 *)(iVar7 + 4) = 0;
    FUN_000168a4(iVar7 + 0x18,0,*(undefined1 *)(iVar7 + 0xb));
    *(undefined2 *)(iVar7 + 0x10) = 0;
    *(undefined4 *)(iVar7 + 0xc) = *(undefined4 *)(iVar7 + 0x14);
  }
  return iVar7;
}



// FUN_0000a6fc @ 0000a6fc (50 bytes, called_by=0, calls=0)

void FUN_0000a6fc(int param_1)

{
  int iVar1;
  char cVar2;
  code *pcVar3;
  int iVar4;
  
  iVar1 = DAT_0000a730;
  while( true ) {
    if (param_1 == 0) {
      return;
    }
    iVar4 = *(int *)(param_1 + 4);
    cVar2 = *(char *)(param_1 + 8) + -1;
    *(char *)(param_1 + 8) = cVar2;
    if (cVar2 != '\0') break;
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(undefined4 *)(param_1 + 4) = 0;
    pcVar3 = *(code **)((uint)*(byte *)(param_1 + 10) * 0x2c + iVar1 + 0x20);
    param_1 = iVar4;
    if (pcVar3 == (code *)0x0) {
      FUN_0000a550();
    }
    else {
      (*pcVar3)();
    }
  }
  return;
}



// FUN_0000a734 @ 0000a734 (132 bytes, called_by=0, calls=0)

void FUN_0000a734(int *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined2 local_14;
  
  if (param_2 == (undefined4 *)0x0) {
    if ((*DAT_0000a7b8 & 7) != 0) {
      FUN_0001cab2(DAT_0000a7b8,1,DAT_0000a7bc);
    }
  }
  else if ((int)((uint)*(byte *)(param_1 + 3) << 0x1d) < 0) {
    if ((*DAT_0000a7b8 & 7) != 0) {
      local_1c = DAT_0000a7c0;
      local_18 = DAT_0000a7c4;
      local_14 = 0x200;
      local_20 = DAT_0000a7c8;
      FUN_00007b60(DAT_0000a7b8,0x1c40,&local_20,0);
    }
  }
  else {
    if (*(int *)(*param_1 + 8) != 0) {
      *(byte *)(param_1 + 3) = *(byte *)(param_1 + 3) | 4;
      (**(code **)(*param_1 + 8))();
      if ((*(byte *)(param_1 + 3) & 2) != 0) {
        return;
      }
      *(byte *)(param_1 + 3) = *(byte *)(param_1 + 3) & 0xfb;
    }
    iVar1 = *param_1;
    *param_1 = (int)param_2;
    param_1[1] = iVar1;
    if ((code *)*param_2 != (code *)0x0) {
      (*(code *)*param_2)(param_1);
    }
  }
  return;
}



// FUN_0000a97c @ 0000a97c (60 bytes, called_by=0, calls=0)

void FUN_0000a97c(int param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint local_1c;
  undefined4 uStack_18;
  
  local_1c = param_2;
  uStack_18 = param_3;
  iVar1 = (*(code *)**(undefined4 **)(DAT_0000a9b8 + 8))
                    (DAT_0000a9b8,param_1,param_2 & 0xffff,
                     (code *)**(undefined4 **)(DAT_0000a9b8 + 8),param_1);
  if (iVar1 < 0) {
    for (uVar2 = 0; uVar2 < param_2; uVar2 = uVar2 + uVar3) {
      uVar3 = param_2 - uVar2;
      if (3 < uVar3) {
        uVar3 = 4;
      }
      local_1c = FUN_0001fd1a();
      FUN_00000820(param_1 + uVar2,&local_1c,uVar3);
    }
  }
  return;
}



// FUN_0000a9bc @ 0000a9bc (136 bytes, called_by=0, calls=0)

undefined4 FUN_0000a9bc(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = *(int *)(*(int *)(*(int *)(param_1 + 0x18) + 0x10) + 0x80);
  FUN_0001da72();
  if (iVar1 << 0x1e < 0) {
    if (((int)((uint)*(byte *)(param_1 + 0x60) << 0x1c) < 0) &&
       ((int)((uint)*(byte *)(param_1 + 0x60) << 0x1d) < 0)) {
      iVar1 = *(int *)(param_1 + 0x18);
      iVar3 = *(int *)(iVar1 + 8);
      DataMemoryBarrier(0x1b);
      DataMemoryBarrier(0x1b);
      if (*(int *)(*(int *)(iVar1 + 0x10) + 0xa0) << 0x1e < 0) {
        (**(code **)(iVar3 + 0x3c))(iVar1);
        uVar2 = (**(code **)(iVar3 + 0x20))(iVar1);
        (**(code **)(iVar3 + 0x40))(iVar1);
      }
      else {
        uVar2 = 0xffffffff;
      }
    }
    else {
      if ((*DAT_0000aa44 & 6) != 0) {
        thunk_FUN_0001cab2(DAT_0000aa44,2,DAT_0000aa4c,*DAT_0000aa44,param_4);
      }
      uVar2 = 0xfffffff3;
    }
  }
  else {
    if ((*DAT_0000aa44 & 7) != 0) {
      thunk_FUN_0001cab2(DAT_0000aa44,1,DAT_0000aa48,*DAT_0000aa44,param_4);
    }
    uVar2 = 0xffffff7a;
  }
  thunk_FUN_00014e2c(param_1 + 4);
  return uVar2;
}



// FUN_0000ab74 @ 0000ab74 (250 bytes, called_by=0, calls=0)

undefined4 FUN_0000ab74(int param_1,int param_2,int param_3,int param_4)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  code *pcVar7;
  byte *pbVar8;
  int iVar9;
  int *piVar10;
  byte local_2c;
  undefined1 uStack_2b;
  undefined2 uStack_2a;
  undefined4 uStack_28;
  byte local_24;
  
  uVar2 = FUN_0001da84();
  if (param_4 != 0) {
    iVar3 = FUN_0001da8e(param_1);
    if (iVar3 != 1) goto LAB_0000ab94;
    uVar2 = (uint)(uVar2 == 0);
  }
  iVar3 = FUN_0001de10(param_1,uVar2,param_3 + 1U & 0xff);
  if (iVar3 != 0) {
    pbVar8 = *(byte **)(iVar3 + 4);
    if (param_4 != 0) {
      uStack_28 = *(undefined4 *)(pbVar8 + 4);
      local_24 = pbVar8[8];
      uStack_2a = (undefined2)((uint)*(undefined4 *)pbVar8 >> 0x10);
      _local_2c = CONCAT11(7,(byte)*(undefined4 *)pbVar8);
      pbVar8 = &local_2c;
    }
    iVar9 = param_2 + 0xc;
    uVar5 = FUN_0001da10(iVar9);
    uVar6 = (uint)*pbVar8;
    if (uVar5 < uVar6) {
      uVar6 = FUN_0001da10(iVar9);
    }
    FUN_0001d9cc(iVar9,pbVar8,uVar6);
    for (piVar10 = *(int **)(iVar3 + 0xc); piVar10 != (int *)0x0; piVar10 = (int *)*piVar10) {
      pcVar7 = *(code **)(*(int *)(piVar10[1] + 8) + 0x30);
      if ((pcVar7 != (code *)0x0) && (iVar3 = (*pcVar7)(piVar10[1],uVar2), iVar3 != 0)) {
        puVar4 = (undefined4 *)(iVar3 + -4);
        while( true ) {
          puVar4 = puVar4 + 1;
          if (((char *)*puVar4 == (char *)0x0) || (*(char *)*puVar4 == '\0')) break;
          uVar5 = FUN_0001da10(iVar9);
          uVar6 = (uint)*(byte *)*puVar4;
          if (uVar5 < uVar6) {
            uVar1 = FUN_0001da10(iVar9);
            uVar6 = (uint)uVar1;
          }
          FUN_0001d9cc(iVar9,*puVar4,uVar6);
        }
      }
    }
    if ((uint)*(ushort *)(param_2 + 0x10) <= (uint)*(ushort *)(param_1 + 0x26)) {
      return 0;
    }
    FUN_0001da02(iVar9,(uint)*(ushort *)(param_2 + 0x10) - (uint)*(ushort *)(param_1 + 0x26));
    return 0;
  }
  if ((*DAT_0000ac70 & 7) != 0) {
    FUN_0001cac4(DAT_0000ac70,1,DAT_0000ac74,param_3 + 1U);
  }
LAB_0000ab94:
  puVar4 = (undefined4 *)thunk_FUN_000146fc();
  *puVar4 = 0xffffff7a;
  return 0;
}



// FUN_0000ac78 @ 0000ac78 (1390 bytes, called_by=0, calls=0)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Control flow encountered unimplemented instructions */
/* WARNING: Instruction at (ram,0x000130e8) overlaps instruction at (ram,0x000130e6)
    */
/* WARNING: Removing unreachable block (ram,0x000130e8) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0000ac78(uint *param_1,int param_2,uint param_3)

{
  byte bVar1;
  ushort uVar2;
  int *piVar3;
  undefined4 *puVar4;
  int *piVar5;
  uint *puVar6;
  int iVar7;
  byte *pbVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  uint uVar12;
  uint uVar13;
  undefined4 *puVar14;
  undefined4 uVar16;
  uint uVar17;
  int *piVar18;
  uint uVar19;
  uint uVar20;
  int unaff_r11;
  int in_r12;
  undefined4 uVar21;
  char cVar22;
  bool bVar23;
  char cVar24;
  undefined8 uVar25;
  ulonglong uVar26;
  int local_78 [11];
  undefined1 local_4c [40];
  undefined4 *puVar15;
  
  piVar5 = local_78 + 2;
  uVar12 = (uint)*(byte *)(param_2 + 0x18);
  uVar17 = uVar12 & 0xffffff7f;
  if ((*(byte *)(param_2 + 0x18) & 0x7f) != 0) {
    if ((*DAT_0000aee8 & 7) != 0) {
      thunk_FUN_0001cab2(DAT_0000aee8,1,DAT_0000aeec);
    }
    return 0xfffffffb;
  }
  bVar1 = *(byte *)(param_2 + 0x19);
  if ((param_3 == 0) || (param_3 == 0xfffffff4)) {
    if ((bVar1 & 1) != 0) goto LAB_0000acf2;
    if (-1 < (int)((uint)bVar1 << 0x1d)) goto LAB_0000ad3a;
    if (uVar12 == 0) {
      if ((param_1[10] != 1) && ((*DAT_0000b690 & 6) != 0)) {
        thunk_FUN_0001cab2(DAT_0000b690,2,DAT_0000b698);
      }
      goto LAB_0000acc8;
    }
  }
  else {
    if ((bVar1 & 1) == 0) {
      if (param_3 != 0xffffff8f) {
        if ((*DAT_0000aee8 & 7) != 0) {
          local_78[2] = param_3;
          FUN_0001cad8(DAT_0000aee8,1,DAT_0000aef0);
        }
        FUN_0000a6fc(param_2);
        return param_3;
      }
      goto LAB_0000acc8;
    }
LAB_0000acf2:
    if (uVar12 == 0) {
      if (*(ushort *)(param_2 + 0x10) < 8) {
LAB_0000ad24:
        if ((*DAT_0000aee8 & 7) != 0) {
          thunk_FUN_0001cab2(DAT_0000aee8,1,DAT_0000aef8);
        }
      }
      else {
        puVar6 = *(uint **)(param_2 + 0xc);
        param_1[8] = *puVar6;
        param_1[9] = puVar6[1];
        uVar19 = *(uint *)(param_2 + 4);
        if (uVar19 == 0) {
          uVar17 = *DAT_0000aee8;
          uVar21 = DAT_0000aef4;
joined_r0x0000ad1a:
          if ((uVar17 & 7) != 0) {
            thunk_FUN_0001cab2(DAT_0000aee8,1,uVar21);
            goto LAB_0000ad24;
          }
        }
        else {
          local_78[5] = uVar12;
          uVar25 = FUN_0001dd24((char)param_1[8],*(undefined2 *)((int)param_1 + 0x26));
          iVar7 = (int)((ulonglong)uVar25 >> 0x20);
          if ((int)uVar25 == 0) {
            if (iVar7 == 0) {
              uVar17 = *DAT_0000aee8;
              uVar21 = DAT_0000af04;
              goto joined_r0x0000ad1a;
            }
            uVar12 = (uint)*(byte *)(uVar19 + 0x19);
LAB_0000ad64:
            if (-1 < (int)(uVar12 << 0x1e)) {
              uVar21 = DAT_0000aefc;
              if ((*DAT_0000aee8 & 7) != 0) goto LAB_0000ad8e;
              goto LAB_0000ad36;
            }
          }
          else {
            uVar12 = (uint)*(byte *)(uVar19 + 0x19);
            if (iVar7 != 0) goto LAB_0000ad64;
            if (-1 < (int)(uVar12 << 0x1d)) {
              uVar21 = DAT_0000af00;
              if ((*DAT_0000aee8 & 7) == 0) goto LAB_0000ad36;
LAB_0000ad8e:
              local_78[0] = 3;
              local_78[1] = uVar21;
              local_78[2] = uVar19;
              FUN_00007b60(DAT_0000aee8,0x1840,local_78);
              goto LAB_0000ad24;
            }
          }
          param_2 = FUN_0001d9a8(0,param_2,uVar12,local_78[5]);
          if (param_2 == 0) {
            uVar17 = *DAT_0000aee8;
            puVar6 = DAT_0000aee8;
            uVar21 = DAT_0000aef4;
joined_r0x0000adca:
            if ((uVar17 & 7) != 0) {
              thunk_FUN_0001cab2(puVar6,1,uVar21);
            }
            goto LAB_0000ad3a;
          }
          puVar4 = (undefined4 *)thunk_FUN_000146fc();
          *puVar4 = 0;
          piVar18 = (int *)(uint)(byte)param_1[8];
          if (((byte)param_1[8] & 0x60) == 0) {
            uVar20 = (uint)*(ushort *)((int)param_1 + 0x26);
            uVar21 = 0xae09;
            uVar25 = FUN_0001dd24(piVar18,uVar20);
            uVar19 = (uint)((ulonglong)uVar25 >> 0x20);
            uVar12 = (uint)uVar25;
            uVar13 = (uint)*(byte *)((int)param_1 + 0x21);
            if (uVar12 != 0) {
              puVar6 = (uint *)(uVar13 - 1);
              switch(puVar6) {
              case (uint *)0x0:
switchD_0000ae1a_caseD_0:
                uVar17 = 0;
                break;
              case (uint *)0x1:
              case (uint *)0x3:
              case (uint *)0x5:
              case (uint *)0x6:
              case (uint *)0x7:
              case (uint *)0x9:
                goto switchD_0000ae1a_caseD_1;
              case (uint *)0x2:
                if (2 < ((uint)puVar6 & 7)) {
                  thunk_FUN_0001cab2(uVar12,3,DAT_00013070);
                }
                return 0;
              case (uint *)0x4:
                (&DAT_0000ae1f)[uVar13] = (char)((ulonglong)uVar25 >> 0x20);
                return uVar12;
              case (uint *)0x8:
                *(uint **)(uVar13 + 0x1b) = &switchD_0000ae1a::switchdataD_0000ae20;
                *(undefined4 *)(uVar13 + 0x1f) = 0x1000;
                iVar7 = 0;
                *(undefined4 *)(uVar13 + 0x27) = 0;
                *(undefined4 *)(uVar13 + 0x23) = 0;
                *(undefined4 *)(uVar13 + 0x2b) = 0;
                *(uint *)(uVar13 + 0x2f) = uVar12;
                *(undefined4 *)(uVar13 + 0x33) = DAT_00012f48;
                *(uint *)(uVar13 + 0x37) = uVar19;
                pbVar8 = DAT_00012f4c;
                *(undefined4 *)(uVar13 + 0x3f) = 0;
                *(undefined4 *)(uVar13 + 0x3b) = 0;
                *(undefined4 *)(uVar13 + 0x43) = 0;
                do {
                  pbVar8 = pbVar8 + -1;
                  bVar1 = *pbVar8;
                  *(byte *)((int)puVar6 + iVar7) = bVar1;
                  iVar7 = iVar7 + 1;
                } while (iVar7 != 0x10);
                return (uint)bVar1;
              case (uint *)0xa:
                if (puVar6 < &switchD_0000ae1a::switchdataD_0000ae20) {
                  if ((uint *)((int)puVar6 + in_r12) < &switchD_0000ae1a::switchdataD_0000ae20)
                  goto switchD_0000ae1a_caseD_0;
                  FUN_00000820(uVar12,uVar19,uVar20);
                  iVar7 = (int)param_1 + (uVar17 - unaff_r11);
                  if (iVar7 != 0) {
                    FUN_00000820(piVar18[1],param_3 + uVar20,iVar7);
                  }
                }
                else {
                  FUN_00000820();
                  iVar7 = (int)param_1 + uVar17;
                }
                uVar17 = 1;
                *(int *)((int)(local_78 + 4) * 0x18 + param_2 + 0x24) = iVar7;
                break;
              default:
                goto switchD_0000ae1a_caseD_b;
              }
              return uVar17;
            }
            cVar24 = SBORROW4(uVar13,10);
            uVar26 = (ulonglong)uVar19 << 0x20;
            piVar3 = local_78 + 2;
            switch(uVar13) {
            case 0:
              do {
                if ((*param_1 & 7) != 0) {
                  thunk_FUN_0001cab2(puRam00013184,1,uRam000131a0);
                }
                do {
                  iVar7 = FUN_000136fc(uRam000131a4);
                  if (iVar7 == 0) {
LAB_0001315c:
                    uVar13 = *param_1 & 7;
                    cVar24 = SBORROW4(uVar13,2);
                    if (2 < uVar13) {
                      thunk_FUN_0001cab2(puRam00013184,3,uRam000131ac);
                    }
                  }
                  else {
                    uVar13 = *param_1 << 0x1d;
                    if (uVar13 != 0) {
                      thunk_FUN_0001cab2(puRam00013184,1,uRam000131a8);
                      goto LAB_0001315c;
                    }
                  }
                  FUN_0001596c(0xccd,0);
                  bVar23 = true;
                  cVar22 = '\0';
                  uVar21 = 0x13181;
                  uVar26 = FUN_000138c4();
                  iVar7 = (int)uVar26;
                  if (bVar23 || cVar22 != cVar24) {
                    /* WARNING: Bad instruction - Truncating control flow here */
                    halt_baddata();
                  }
                  if (iVar7 != 0 && iVar7 < 0 == (bool)cVar24) {
                    iVar7 = *piVar18;
                    uVar17 = *param_1 & 7;
                    if (iVar7 == DAT_0001333c) {
                      if ((uVar17 < 3) || (FUN_0001cab2(param_1,3,DAT_00013340), *piVar18 == iVar7))
                      {
                        uVar21 = DAT_00013348[1];
                        uVar11 = DAT_00013348[2];
                        uVar16 = DAT_00013348[3];
                        *(undefined4 *)((int)piVar5 + 4) = *DAT_00013348;
                        *(undefined4 *)((int)piVar5 + 8) = uVar21;
                        *(undefined4 *)((int)piVar5 + 0xc) = uVar11;
                        *(undefined4 *)((int)piVar5 + 0x10) = uVar16;
                        uVar21 = DAT_00013348[5];
                        uVar11 = DAT_00013348[6];
                        uVar16 = DAT_00013348[7];
                        *(undefined4 *)((int)piVar5 + 0x14) = DAT_00013348[4];
                        *(undefined4 *)((int)piVar5 + 0x18) = uVar21;
                        *(undefined4 *)((int)piVar5 + 0x1c) = uVar11;
                        *(undefined4 *)((int)piVar5 + 0x20) = uVar16;
                        *(char *)((int)piVar5 + 0x24) = (char)DAT_00013348[8];
                        FUN_00013204((undefined1 *)((int)piVar5 + 4));
                      }
                      else if (2 < (*param_1 & 7)) {
                        FUN_0001cab2(param_1,3,DAT_00013344);
                      }
                      iVar7 = FUN_000082bc(DAT_00013334,DAT_00013348,0x21);
                      if (iVar7 == 0) {
                        FUN_00008330(DAT_00013334);
                      }
                      FUN_000168a4(DAT_00013330,0,0x25);
                    }
                    else if (*(int *)(DAT_0001334c + 1) == 0) {
                      if (2 < uVar17) {
                        FUN_0001cab2(param_1,3,DAT_00013350);
                      }
                    }
                    else {
                      if (2 < uVar17) {
                        FUN_0001cab2(param_1,3,DAT_00013354);
                      }
                      FUN_00013204(DAT_0001334c);
                    }
                    return 0;
                  }
                  piVar3 = piVar5;
                  if (iVar7 == 0 || iVar7 < 0 != (bool)cVar24) {
switchD_0000b104_caseD_6:
                    piVar5 = piVar3;
                    uVar17 = (uint)uVar26;
                    puVar6 = param_1;
                    if (uVar17 != 0 && (int)uVar17 < 0 == (bool)cVar24) goto LAB_000130e0;
                    if (uVar17 == 0 || (int)uVar17 < 0 != (bool)cVar24) {
                      if (uVar17 < 0x21) {
                        return 0xffffffed;
                      }
                      puVar10 = DAT_000131d4 + 8;
                      puVar4 = (undefined4 *)(uVar26 >> 0x20);
                      puVar14 = DAT_000131d4;
                      do {
                        puVar15 = puVar14 + 1;
                        puVar9 = puVar4 + 1;
                        *puVar4 = *puVar14;
                        puVar4 = puVar9;
                        puVar14 = puVar15;
                      } while (puVar15 != puVar10);
                      *(undefined1 *)puVar9 = *(undefined1 *)puVar15;
                      return 0x21;
                    }
LAB_0001311e:
                    if ((uVar13 & 7) != 0) {
                      thunk_FUN_0001cab2(puRam00013184,1,DAT_00013198);
                    }
                  }
                  else {
                    uVar26 = uVar26 & 0xffffffff00000000;
                    puVar6 = param_1;
LAB_000130e0:
                    param_1 = puRam00013184;
                    *(undefined4 *)((int)piVar5 + -4) = uVar21;
                    piVar5 = (int *)((int)piVar5 + -8);
                    *piVar5 = (int)puVar6;
                    iVar7 = FUN_000136fc(uRam00013180,(int)(uVar26 >> 0x20),(int)uVar26);
                    /* WARNING: Bad instruction - Truncating control flow here */
                    if ((iVar7 != 0) && ((*param_1 & 7) != 0)) {
                      thunk_FUN_0001cab2(param_1,1,uRam00013188);
                    }
                    iVar7 = FUN_000136fc(DAT_0001318c);
                    if ((iVar7 != 0) && ((*param_1 & 7) != 0)) {
                      thunk_FUN_0001cab2(puRam00013184,1,DAT_00013190);
                    }
                    iVar7 = FUN_000136fc(DAT_00013194);
                    if (iVar7 != 0) {
                      uVar13 = *param_1;
                      goto LAB_0001311e;
                    }
                  }
                  iVar7 = FUN_000136fc(_DAT_0001319c);
                } while (iVar7 == 0);
              } while( true );
            case 1:
            case 2:
            case 3:
            case 4:
            case 5:
            case 7:
            case 9:
switchD_0000ae1a_caseD_1:
              return DAT_00012e00;
            case 6:
              goto switchD_0000b104_caseD_6;
            case 8:
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
              halt_unimplemented();
            case 10:
                    /* WARNING: Bad instruction - Truncating control flow here */
              halt_baddata();
            }
switchD_0000ae1a_caseD_b:
            puVar4 = (undefined4 *)thunk_FUN_000146fc();
            *puVar4 = 0xffffff7a;
            piVar5 = (int *)thunk_FUN_000146fc();
            if (*piVar5 != 0) {
              thunk_FUN_000146fc();
              thunk_FUN_000146fc();
            }
          }
          else {
            if ((uint)((int)piVar18 << 0x19) >> 0x1e == 3) goto switchD_0000ae1a_caseD_b;
            uVar17 = FUN_0001dd32(param_1,param_2);
            piVar5 = (int *)thunk_FUN_000146fc();
            if (*piVar5 != 0) {
              thunk_FUN_000146fc();
              thunk_FUN_000146fc();
            }
            if (uVar17 != 0) {
LAB_0000acc8:
              FUN_0000a6fc(param_2);
              return uVar17;
            }
          }
          piVar5 = (int *)thunk_FUN_000146fc();
          if (*piVar5 == 0) {
            param_1[10] = 1;
            uVar25 = FUN_0001dd24((char)param_1[8],*(undefined2 *)((int)param_1 + 0x26));
            if (((int)uVar25 != 0) && ((int)((ulonglong)uVar25 >> 0x20) != 0)) {
              do {
                param_2 = FUN_0001d9a8(0,param_2);
                if (param_2 == 0) {
                  uVar17 = *DAT_0000b598;
                  puVar6 = DAT_0000b598;
                  uVar21 = DAT_0000b5a4;
                  goto joined_r0x0000adca;
                }
              } while (-1 < (int)((uint)*(byte *)(param_2 + 0x19) << 0x1d));
            }
            uVar17 = FUN_0000c35c(param_1,param_2);
            return uVar17;
          }
        }
      }
LAB_0000ad36:
      FUN_0000a6fc(param_2);
      goto LAB_0000ad3a;
    }
    if (-1 < (int)((uint)bVar1 << 0x1d)) goto LAB_0000ad3a;
  }
  if (uVar12 == 0x80) {
    FUN_0000a6fc(param_2);
    if (param_1[10] != 1) {
      if ((*DAT_0000b690 & 6) != 0) {
        thunk_FUN_0001cab2(DAT_0000b690,2,DAT_0000b6a0);
        return uVar17;
      }
      return uVar17;
    }
    if (*(char *)((int)param_1 + 0x35) != '\0') {
      if ((*(char *)((int)param_1 + 0x21) == '\x05') &&
         (uVar17 = FUN_0001dda4(param_1[6],*(undefined1 *)((int)param_1 + 0x22)), uVar17 != 0)) {
        if ((*DAT_0000b690 & 7) != 0) {
          FUN_0001cac4(DAT_0000b690,1,DAT_0000b69c,*(undefined2 *)((int)param_1 + 0x22));
        }
      }
      else {
        uVar17 = 0;
      }
      if ((*(char *)((int)param_1 + 0x21) == '\x03') && (*(short *)((int)param_1 + 0x22) == 2)) {
        uVar2 = (ushort)param_1[9] >> 8;
        uVar17 = FUN_0001dcde(param_1[6],uVar2,0);
        if ((uVar17 != 0) && ((*DAT_0000b690 & 7) != 0)) {
          FUN_0001cac4(DAT_0000b690,1,DAT_0000b694,uVar2);
        }
      }
      *(undefined1 *)((int)param_1 + 0x35) = 0;
      return uVar17;
    }
    return uVar17;
  }
LAB_0000ad3a:
  if ((*(short *)((int)param_1 + 0x26) == 0) || ((char)param_1[8] < '\0')) {
    iVar7 = 0x80;
  }
  else {
    iVar7 = param_3 + 0xc;
    if (iVar7 != 0) {
      iVar7 = 1;
    }
    iVar7 = iVar7 << 7;
  }
  uVar17 = FUN_0001eaca(param_1[6],iVar7);
  param_1[10] = 0;
  return uVar17;
}



// FUN_0000bd54 @ 0000bd54 (174 bytes, called_by=0, calls=0)

int FUN_0000bd54(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  int *piVar5;
  undefined8 uVar6;
  
  uVar1 = FUN_0001da84();
  if (*(char *)(param_1 + 0x34) == '\0') {
LAB_0000bdbe:
    if (param_2 == 0) {
      *(char *)(param_1 + 0x34) = (char)param_2;
    }
    else {
      uVar6 = FUN_0001de10(param_1,uVar1,param_2);
      iVar2 = (int)uVar6;
      if (iVar2 == 0) {
        return -0x3d;
      }
      iVar3 = FUN_0001df70(param_1,(int)((ulonglong)uVar6 >> 0x20),iVar2);
      if (iVar3 != 0) {
        return iVar3;
      }
      *(char *)(param_1 + 0x34) = (char)param_2;
      for (piVar5 = *(int **)(iVar2 + 0xc); piVar5 != (int *)0x0; piVar5 = (int *)*piVar5) {
        pcVar4 = *(code **)(*(int *)(piVar5[1] + 8) + 0x20);
        if (pcVar4 != (code *)0x0) {
          (*pcVar4)();
        }
      }
    }
    return 0;
  }
  iVar2 = FUN_0001de38(param_1);
  if (iVar2 == 0) {
    iVar3 = -0x3d;
  }
  else {
    iVar3 = FUN_0001df1c(param_1,iVar2);
    FUN_000168a4(param_1 + 0x36,0,0x10);
    *(undefined1 *)(param_1 + 0x34) = 0;
    for (piVar5 = *(int **)(iVar2 + 0xc); piVar5 != (int *)0x0; piVar5 = (int *)*piVar5) {
      pcVar4 = *(code **)(*(int *)(piVar5[1] + 8) + 0x24);
      if (pcVar4 != (code *)0x0) {
        (*pcVar4)();
      }
    }
    if (iVar3 == 0) goto LAB_0000bdbe;
  }
  if ((*DAT_0000be04 & 7) == 0) {
    return iVar3;
  }
  thunk_FUN_0001cab2(DAT_0000be04,1,DAT_0000be08);
  return iVar3;
}



// FUN_0000be0c @ 0000be0c (414 bytes, called_by=0, calls=0)

int FUN_0000be0c(int param_1,int param_2,undefined4 *param_3)

{
  uint *puVar1;
  undefined1 uVar2;
  undefined4 *puVar3;
  char cVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  
  iVar9 = param_3[1];
  FUN_0001ddfe();
  if ((int)((uint)*(byte *)(param_1 + 0x60) << 0x1f) < 0) {
    if ((*DAT_0000bfac & 7) != 0) {
      thunk_FUN_0001cab2(DAT_0000bfac,1,DAT_0000bfb0);
    }
    iVar10 = -0x10;
    goto LAB_0000be38;
  }
  if (param_2 == 1) {
    iVar10 = FUN_0001da8e(param_1);
    if (iVar10 != 0) {
      if ((int)((uint)*(byte *)(iVar9 + 7) << 0x1a) < 0) goto LAB_0000be6e;
LAB_0000bed0:
      for (puVar7 = *(undefined4 **)(param_1 + 0x50); puVar7 != (undefined4 *)0x0;
          puVar7 = (undefined4 *)*puVar7) {
        if (param_3 == puVar7) {
          uVar5 = *DAT_0000bfac;
          uVar8 = DAT_0000bfc0;
joined_r0x0000bf02:
          if ((uVar5 & 7) != 0) {
            thunk_FUN_0001cab2(DAT_0000bfac,1,uVar8);
          }
          iVar10 = -0x16;
          goto LAB_0000be38;
        }
      }
      puVar7 = (undefined4 *)(param_1 + 0x58);
LAB_0000be9c:
      puVar3 = (undefined4 *)0x0;
      for (puVar6 = (undefined4 *)*puVar7; puVar6 != (undefined4 *)0x0;
          puVar6 = (undefined4 *)*puVar6) {
        if (param_3 == puVar6) {
          uVar8 = *param_3;
          if (puVar3 == (undefined4 *)0x0) {
            *puVar7 = uVar8;
            if (param_3 == (undefined4 *)puVar7[1]) {
              puVar7[1] = uVar8;
            }
          }
          else {
            *puVar3 = uVar8;
            if (param_3 == (undefined4 *)puVar7[1]) {
              puVar7[1] = puVar3;
            }
          }
          puVar1 = DAT_0000bfac;
          *param_3 = 0;
          if ((*puVar1 & 6) != 0) {
            FUN_0001cac4(puVar1,2,DAT_0000bfc8,*(undefined1 *)(param_3[1] + 5));
          }
          goto LAB_0000bf38;
        }
        puVar3 = puVar6;
      }
      iVar10 = param_3[1];
      if (param_2 == 0) {
        cVar4 = *(char *)(*(int *)(param_1 + 100) + 0x11) + '\x01';
        *(char *)(iVar10 + 5) = cVar4;
        iVar10 = *(int *)(param_1 + 100);
LAB_0000bf78:
        *(char *)(iVar10 + 0x11) = cVar4;
      }
      else {
        if (param_2 == 1) {
          cVar4 = *(char *)(*(int *)(param_1 + 0x68) + 0x11) + '\x01';
          *(char *)(iVar10 + 5) = cVar4;
          iVar10 = *(int *)(param_1 + 0x68);
          goto LAB_0000bf78;
        }
        *(undefined1 *)(iVar10 + 5) = 1;
      }
LAB_0000bf38:
      if (param_3[2] != 0) {
        iVar10 = FUN_0001dbbc(param_1);
        if (iVar10 != 0) {
          if ((*DAT_0000bfac & 7) != 0) {
            thunk_FUN_0001cab2(DAT_0000bfac,1,DAT_0000bfcc);
          }
          goto LAB_0000be38;
        }
        uVar2 = FUN_0001dcb0(param_3[2]);
        *(undefined1 *)(iVar9 + 6) = uVar2;
      }
      *param_3 = 0;
      if ((undefined4 *)puVar7[1] == (undefined4 *)0x0) {
        *puVar7 = param_3;
        puVar7[1] = param_3;
      }
      else {
        *(undefined4 *)puVar7[1] = param_3;
        puVar7[1] = param_3;
      }
      iVar10 = 0;
      goto LAB_0000be38;
    }
    uVar5 = *DAT_0000bfac;
    uVar8 = DAT_0000bfb4;
  }
  else {
    if ((int)((uint)*(byte *)(iVar9 + 7) << 0x1a) < 0) {
LAB_0000be6e:
      if (-1 < *(int *)(*(int *)(*(int *)(param_1 + 0x18) + 0x10) + 0x80) << 0x1e) {
        uVar5 = *DAT_0000bfac;
        uVar8 = DAT_0000bfb8;
        goto joined_r0x0000be80;
      }
      if (param_2 == 0) goto LAB_0000be92;
      if (param_2 == 1) goto LAB_0000bed0;
    }
    else if (param_2 == 0) {
LAB_0000be92:
      for (puVar7 = *(undefined4 **)(param_1 + 0x58); puVar7 != (undefined4 *)0x0;
          puVar7 = (undefined4 *)*puVar7) {
        if (puVar7 == param_3) {
          uVar5 = *DAT_0000bfac;
          uVar8 = DAT_0000bfc4;
          goto joined_r0x0000bf02;
        }
      }
      puVar7 = (undefined4 *)(param_1 + 0x50);
      goto LAB_0000be9c;
    }
    uVar5 = *DAT_0000bfac;
    uVar8 = DAT_0000bfbc;
  }
joined_r0x0000be80:
  if ((uVar5 & 7) != 0) {
    thunk_FUN_0001cab2(DAT_0000bfac,1,uVar8);
  }
  iVar10 = -0x86;
LAB_0000be38:
  thunk_FUN_00014e2c(param_1 + 4);
  return iVar10;
}



// FUN_0000bfd0 @ 0000bfd0 (118 bytes, called_by=0, calls=0)

uint FUN_0000bfd0(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 uStack_20;
  undefined2 local_1c;
  undefined4 uStack_18;
  
  uVar4 = DAT_0000c058;
  uVar1 = DAT_0000c04c;
  uVar3 = DAT_0000c054;
  uStack_18 = param_4;
  if (param_2 == 0) {
    for (; uVar3 < uVar4; uVar3 = uVar3 + 0x18) {
      iVar2 = FUN_00000228(param_1,**(undefined4 **)(uVar3 + 4));
      if (iVar2 == 0) {
        return uVar3;
      }
    }
  }
  else {
    uVar4 = DAT_0000c048;
    if (param_2 == 1) {
      for (; uVar4 < uVar1; uVar4 = uVar4 + 0x18) {
        iVar2 = FUN_00000228(param_1,**(undefined4 **)(uVar4 + 4));
        if (iVar2 == 0) {
          return uVar4;
        }
      }
    }
  }
  if ((*DAT_0000c050 & 7) != 0) {
    local_24 = DAT_0000c05c;
    local_1c = 0x200;
    local_28 = DAT_0000c060;
    uStack_20 = param_1;
    FUN_00007b60(DAT_0000c050,0x1c40,&local_28,0);
  }
  return 0;
}



// FUN_0000c064 @ 0000c064 (86 bytes, called_by=0, calls=0)

int FUN_0000c064(int param_1,uint param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  
  uVar5 = param_2 & 0x7f;
  if ((param_2 & 0x80) != 0) {
    uVar5 = uVar5 + 0x10;
  }
  if (*(char *)(param_1 + 0x2c) == '\x02') {
    uVar1 = *(undefined1 *)(param_1 + 0x34);
    uVar2 = FUN_0001da84();
    iVar3 = FUN_0001de10(param_1,uVar2,uVar1);
    if (iVar3 != 0) {
      for (piVar4 = *(int **)(iVar3 + 0xc); piVar4 != (int *)0x0; piVar4 = (int *)*piVar4) {
        if ((1 << uVar5 & piVar4[2]) != 0) {
          return (int)piVar4;
        }
      }
    }
  }
  else if ((*DAT_0000c0bc & 7) != 0) {
    FUN_0001cab2(DAT_0000c0bc,1,DAT_0000c0c0);
  }
  return 0;
}



// FUN_0000c0c4 @ 0000c0c4 (204 bytes, called_by=0, calls=0)

undefined4 FUN_0000c0c4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  uint *puVar8;
  
  puVar2 = (undefined4 *)FUN_0000bfd0(param_2,param_3,param_3,param_4,param_4);
  if (puVar2 == (undefined4 *)0x0) {
    return 0xffffffed;
  }
  FUN_0001de6e(param_1);
  if ((int)((uint)*(byte *)(param_1 + 0x60) << 0x1f) < 0) {
    uVar4 = *DAT_0000c190;
    uVar6 = DAT_0000c194;
joined_r0x0000c140:
    if ((uVar4 & 7) != 0) {
      uVar3 = 1;
LAB_0000c11c:
      FUN_0001cab2(DAT_0000c190,uVar3,uVar6);
    }
  }
  else {
    iVar7 = puVar2[1];
    DataMemoryBarrier(0x1b);
    DataMemoryBarrier(0x1b);
    puVar8 = puVar2 + 5;
    if (-1 < (int)(puVar2[5] << 0x1f)) {
      iVar5 = *(int *)(iVar7 + 4);
      if ((iVar5 == 0) || (iVar5 == param_1)) {
        iVar5 = FUN_0001de10(param_1,param_3,param_4);
        if (iVar5 == 0) {
          uVar6 = 0xffffffc3;
        }
        else {
          *puVar2 = 0;
          if (*(undefined4 **)(iVar5 + 0x10) == (undefined4 *)0x0) {
            *(undefined4 **)(iVar5 + 0xc) = puVar2;
            *(undefined4 **)(iVar5 + 0x10) = puVar2;
          }
          else {
            **(undefined4 **)(iVar5 + 0x10) = puVar2;
            *(undefined4 **)(iVar5 + 0x10) = puVar2;
          }
          DataMemoryBarrier(0x1b);
          do {
            ExclusiveAccess(puVar8);
            bVar1 = (bool)hasExclusiveAccess(puVar8);
          } while (!bVar1);
          *puVar8 = *puVar8 | 1;
          DataMemoryBarrier(0x1b);
          uVar6 = 0;
          *(int *)(iVar7 + 4) = param_1;
        }
        goto LAB_0000c124;
      }
      uVar4 = *DAT_0000c190;
      uVar6 = DAT_0000c19c;
      goto joined_r0x0000c140;
    }
    if ((*DAT_0000c190 & 6) != 0) {
      uVar3 = 2;
      uVar6 = DAT_0000c198;
      goto LAB_0000c11c;
    }
  }
  uVar6 = 0xfffffff0;
LAB_0000c124:
  FUN_00014e2c(param_1 + 4);
  return uVar6;
}



// FUN_0000c1a0 @ 0000c1a0 (172 bytes, called_by=0, calls=0)

int FUN_0000c1a0(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  undefined2 local_28;
  undefined4 uStack_20;
  
  uVar1 = DAT_0000c268;
  uVar4 = DAT_0000c250;
  uVar3 = DAT_0000c24c;
  uStack_20 = param_4;
  if (param_2 == 1) {
    for (; uVar3 < uVar4; uVar3 = uVar3 + 0x18) {
      iVar2 = FUN_0000c0c4(param_1,**(undefined4 **)(uVar3 + 4),1,param_3);
      if (iVar2 != 0) {
        if ((*DAT_0000c254 & 7) == 0) {
          return iVar2;
        }
        uStack_30 = **(undefined4 **)(uVar3 + 4);
        local_34 = DAT_0000c258;
LAB_0000c1dc:
        local_28 = 0x200;
        local_38 = DAT_0000c25c;
        local_2c = param_3;
        FUN_00007b60(DAT_0000c254,&DAT_00002440,&local_38,0);
        return iVar2;
      }
    }
  }
  else {
    uVar4 = DAT_0000c264;
    if (param_2 != 0) {
      return -0x86;
    }
    for (; uVar4 < uVar1; uVar4 = uVar4 + 0x18) {
      iVar2 = FUN_0000c0c4(param_1,**(undefined4 **)(uVar4 + 4),0,param_3);
      if (iVar2 != 0) {
        if ((*DAT_0000c254 & 7) == 0) {
          return iVar2;
        }
        uStack_30 = **(undefined4 **)(uVar4 + 4);
        local_34 = DAT_0000c260;
        goto LAB_0000c1dc;
      }
    }
  }
  return 0;
}



// FUN_0000c26c @ 0000c26c (230 bytes, called_by=0, calls=0)

int FUN_0000c26c(int param_1,int param_2,int param_3,uint param_4,byte param_5)

{
  byte bVar1;
  undefined4 uVar2;
  char *pcVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 local_48;
  undefined4 local_44;
  int iStack_40;
  uint local_3c;
  undefined4 uStack_38;
  int local_34;
  uint local_30;
  uint local_2c;
  
  iVar6 = *(int *)(param_2 + 4);
  local_30 = (uint)param_5;
  local_2c = param_4;
  uVar2 = FUN_0001da84();
  pcVar4 = *(code **)(*(int *)(iVar6 + 8) + 0x30);
  if ((pcVar4 == (code *)0x0) || (iVar6 = (*pcVar4)(iVar6,uVar2), iVar6 == 0)) {
    iVar6 = -0x16;
  }
  else {
    puVar7 = (undefined4 *)(iVar6 + -4);
    bVar5 = false;
LAB_0000c2ae:
    while( true ) {
      puVar7 = puVar7 + 1;
      pcVar3 = (char *)*puVar7;
      if ((pcVar3 == (char *)0x0) || (*pcVar3 == '\0')) break;
      if (pcVar3[1] != '\x04') goto LAB_0000c2e8;
      if (bVar5) {
        return 0;
      }
      if (((byte)pcVar3[2] == local_2c) && ((byte)pcVar3[3] == local_30)) {
        if (pcVar3[4] == '\0') {
          return 0;
        }
        goto LAB_0000c2e4;
      }
    }
    if (bVar5) {
      iVar6 = 0;
    }
    else {
      iVar6 = -0x3d;
    }
  }
  return iVar6;
LAB_0000c2e8:
  if ((pcVar3[1] != '\x05') || (!bVar5)) goto LAB_0000c2ae;
  bVar1 = pcVar3[2];
  if (param_3 == 1) {
    iVar6 = FUN_0001e05a(*(undefined4 *)(param_1 + 0x18),pcVar3,param_2 + 0xc);
  }
  else {
    if (param_3 != 2) goto LAB_0000c2e4;
    iVar6 = FUN_0001e092(*(undefined4 *)(param_1 + 0x18),(uint)bVar1,param_2 + 0xc);
  }
  if (iVar6 != 0) {
    if ((*DAT_0000c354 & 7) == 0) {
      return iVar6;
    }
    uStack_38 = *(undefined4 *)(param_2 + 0xc);
    local_44 = DAT_0000c358;
    local_48 = 6;
    iStack_40 = param_3;
    local_3c = (uint)bVar1;
    local_34 = iVar6;
    FUN_00007b60(DAT_0000c354,0x3040,&local_48,0);
    return iVar6;
  }
LAB_0000c2e4:
  bVar5 = true;
  goto LAB_0000c2ae;
}



// FUN_0000c35c @ 0000c35c (98 bytes, called_by=0, calls=0)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0000c35c(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  byte bVar6;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  int iVar7;
  bool bVar8;
  
  if ((*(byte *)(param_2 + 0x18) & 0x7f) != 0) {
    return 0xffffffea;
  }
  if ((int)((uint)*(byte *)(param_2 + 0x18) << 0x18) < 0) {
    iVar3 = FUN_0001db7e();
    if (iVar3 != 0) {
      if ((*_LAB_0000c3c0 & 7) != 0) {
        FUN_0001cab2(_LAB_0000c3c0,1,_LAB_0000c3c4,*_LAB_0000c3c0,param_4);
      }
      return 0xffffffff;
    }
    uVar1 = *(ushort *)(param_2 + 0x10);
    uVar2 = *(ushort *)(param_1 + 0x26);
    if (uVar1 != 0) {
      if (uVar2 <= uVar1) {
        uVar1 = uVar2;
      }
      if ((uVar1 < uVar2) && ((uVar1 & 0x3f) == 0)) {
        bVar6 = *(byte *)(param_2 + 0x18);
        bVar8 = (char)bVar6 < '\0';
        if (bVar8) {
          bVar6 = *(byte *)(param_2 + 0x19) | 8;
        }
        if (bVar8) {
          *(byte *)(param_2 + 0x19) = bVar6;
        }
      }
    }
  }
  iVar3 = *(int *)(param_1 + 0x18);
  iVar7 = *(int *)(iVar3 + 8);
  (**(code **)(iVar7 + 0x3c))();
  iVar4 = FUN_0001e880(*(undefined4 *)(iVar3 + 0x10));
  if ((iVar4 == 0) || (*(char *)(param_2 + 0x18) == '\0')) {
    uVar5 = 0xffffffff;
  }
  else {
    iVar4 = FUN_0001e892(iVar3);
    if (iVar4 == 0) {
      uVar5 = 0xffffffed;
    }
    else {
      *(byte *)(param_2 + 0x19) = *(byte *)(param_2 + 0x19) & 0xfe;
      uVar5 = (**(code **)(iVar7 + 4))(iVar3,iVar4,param_2,*(code **)(iVar7 + 4),unaff_r4,unaff_r5);
    }
  }
  (**(code **)(iVar7 + 0x40))(iVar3);
  return uVar5;
}



// FUN_0000c414 @ 0000c414 (52 bytes, called_by=0, calls=0)

int FUN_0000c414(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_0001eb20(*(undefined4 *)(param_1 + 0x18));
  if (iVar1 == 0) {
    FUN_0001e03c(param_1 + 0x30,param_2);
  }
  else if ((*DAT_0000c448 & 6) != 0) {
    FUN_0001cac4(DAT_0000c448,2,DAT_0000c44c,param_2);
  }
  return iVar1;
}



// FUN_0000c450 @ 0000c450 (230 bytes, called_by=0, calls=0)

/* WARNING: Removing unreachable block (ram,0x0001531c) */

int FUN_0000c450(int param_1)

{
  int *piVar1;
  bool bVar2;
  uint uVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  int *piVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  
  piVar4 = DAT_0000c4d8;
  uVar7 = 0;
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    uVar7 = getBasePriority();
  }
  bVar2 = (bool)isCurrentModePrivileged();
  if ((bVar2) && (uVar3 = getBasePriority(), uVar3 == 0 || 0x40 < uVar3)) {
    setBasePriority(0x40);
  }
  InstructionSynchronizationBarrier(0xf);
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    setBasePriority(uVar7);
  }
  InstructionSynchronizationBarrier(0xf);
  if (-1 < (int)((uint)*(byte *)(*(int *)(*DAT_0000c4d8 + 4) + 0x60) << 0x1f)) {
    uVar12 = 0x21;
    uVar7 = 0;
    bVar2 = (bool)isCurrentModePrivileged();
    if (bVar2) {
      uVar7 = getBasePriority();
    }
    bVar2 = (bool)isCurrentModePrivileged();
    if ((bVar2) && (uVar3 = getBasePriority(), uVar3 == 0 || 0x40 < uVar3)) {
      setBasePriority(0x40);
    }
    InstructionSynchronizationBarrier(0xf);
    uVar10 = DAT_0001535c;
    uVar11 = DAT_0001535c;
    FUN_00020a54(param_1);
    uVar5 = DAT_00015350;
    *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | 8;
    *(undefined4 *)(param_1 + 0x28) = uVar11;
    FUN_00015be0(param_1 + 0x10,uVar5,0x21,0,uVar10,uVar11,uVar12);
    bVar2 = (bool)isCurrentModePrivileged();
    if (bVar2) {
      setBasePriority(uVar7);
    }
    InstructionSynchronizationBarrier(0xf);
    return 1;
  }
  uVar12 = 0;
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    uVar12 = getBasePriority();
  }
  bVar2 = (bool)isCurrentModePrivileged();
  if ((bVar2) && (uVar3 = getBasePriority(), uVar3 == 0 || 0x40 < uVar3)) {
    setBasePriority(0x40);
  }
  InstructionSynchronizationBarrier(0xf);
  piVar8 = (int *)*DAT_0000c4d8;
  if (piVar8 == (int *)0x0) {
    bVar2 = (bool)isCurrentModePrivileged();
    if (bVar2) {
      setBasePriority(uVar12);
    }
    InstructionSynchronizationBarrier(0xf);
    iVar6 = param_1;
  }
  else {
    piVar1 = DAT_0000c4d8 + 1;
    iVar6 = *piVar8;
    *DAT_0000c4d8 = iVar6;
    if (piVar8 == (int *)*piVar1) {
      piVar4[1] = iVar6;
    }
    bVar2 = (bool)isCurrentModePrivileged();
    if (bVar2) {
      setBasePriority(uVar12);
    }
    InstructionSynchronizationBarrier(0xf);
    (**(code **)(piVar8[1] + 0x1c))(piVar8[1],piVar8 + 2);
    uVar9 = FUN_000207d6(DAT_0000c4dc,piVar8);
    uVar7 = (undefined4)((ulonglong)uVar9 >> 0x20);
    iVar6 = (int)uVar9;
  }
  if (*piVar4 == 0) {
    return iVar6;
  }
  iVar6 = FUN_000152ec(param_1,uVar7,0,0);
  return iVar6;
}



// FUN_0000c550 @ 0000c550 (34 bytes, called_by=0, calls=0)

undefined1 FUN_0000c550(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x10);
  iVar2 = FUN_000159e4();
  if (DAT_0000c574 == iVar2) {
    if (*(char *)(iVar3 + 0x4c) == '\0') {
      uVar1 = *(undefined1 *)(iVar3 + 0x44);
    }
    else {
      uVar1 = 1;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



// FUN_0000c578 @ 0000c578 (44 bytes, called_by=0, calls=0)

undefined4 FUN_0000c578(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x10);
  iVar1 = *(int *)(iVar3 + 0x40);
  if ((*(int *)(iVar1 + 0x10) == *(int *)(iVar1 + 8)) ||
     (iVar1 = FUN_0001c4ac(iVar1,param_2,1), iVar1 == 0)) {
    uVar2 = 0xffffffff;
  }
  else {
    FUN_00020b5a(DAT_0000c5a4,iVar3 + 0x88);
    uVar2 = 0;
  }
  return uVar2;
}



// FUN_0000cc54 @ 0000cc54 (142 bytes, called_by=0, calls=0)

int FUN_0000cc54(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined1 param_5)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_1 + 8);
  iVar2 = FUN_0001e892();
  if (iVar2 != 0) {
    bVar1 = *(byte *)(iVar2 + 0x1c);
    if ((int)((uint)bVar1 << 0x1f) < 0) {
      if ((*DAT_0000cce4 & 7) != 0) {
        FUN_0001cac4(DAT_0000cce4,1,DAT_0000cce8,*(undefined1 *)(iVar2 + 0x20));
      }
      return -0x78;
    }
    iVar3 = FUN_0001e806(iVar2,param_2,param_3,param_4);
    if (iVar3 != 0) {
      *(char *)(iVar2 + 0x21) = (char)param_3;
      *(short *)(iVar2 + 0x22) = (short)param_4;
      *(undefined1 *)(iVar2 + 0x24) = param_5;
      *(byte *)(iVar2 + 0x1c) = bVar1 & 0xf1;
      iVar4 = (**(code **)(iVar4 + 0x18))(param_1,iVar2);
      *(byte *)(iVar2 + 0x1c) = *(byte *)(iVar2 + 0x1c) & 0xfe | iVar4 == 0;
      return iVar4;
    }
    if ((*DAT_0000cce4 & 7) != 0) {
      FUN_0001cac4(DAT_0000cce4,1,DAT_0000ccec,*(undefined1 *)(iVar2 + 0x20));
    }
  }
  return -0x13;
}



// FUN_0000ccf0 @ 0000ccf0 (82 bytes, called_by=0, calls=0)

int FUN_0000ccf0(int param_1)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 8);
  iVar1 = FUN_0001e892();
  if (iVar1 == 0) {
    iVar3 = -0x13;
  }
  else if ((int)((uint)*(byte *)(iVar1 + 0x1c) << 0x1f) < 0) {
    iVar3 = (**(code **)(iVar3 + 0x1c))(param_1,iVar1);
    if (iVar3 == 0) {
      bVar2 = 0;
    }
    else {
      bVar2 = *(byte *)(iVar1 + 0x1c) & 1;
    }
    *(byte *)(iVar1 + 0x1c) = *(byte *)(iVar1 + 0x1c) & 0xfe | bVar2;
  }
  else {
    if ((*DAT_0000cd44 & 7) != 0) {
      FUN_0001cac4(DAT_0000cd44,1,DAT_0000cd48,*(undefined1 *)(iVar1 + 0x20));
    }
    iVar3 = -0x78;
  }
  return iVar3;
}



// FUN_0000cd4c @ 0000cd4c (80 bytes, called_by=0, calls=0)

int FUN_0000cd4c(int param_1,undefined1 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 8);
  (**(code **)(iVar2 + 0x3c))();
  iVar1 = FUN_0000a5dc(DAT_0000cd9c,param_3,0,0);
  if (iVar1 == 0) {
    if ((*DAT_0000cda0 & 7) != 0) {
      FUN_0001cac4(DAT_0000cda0,1,DAT_0000cda4,param_3);
    }
  }
  else {
    *(undefined4 *)(iVar1 + 0x18) = 0;
    *(undefined4 *)(iVar1 + 0x1c) = 0;
    *(undefined2 *)(iVar1 + 0x20) = 0;
    *(undefined1 *)(iVar1 + 0x18) = param_2;
  }
  (**(code **)(iVar2 + 0x40))(param_1);
  return iVar1;
}



// FUN_0000cda8 @ 0000cda8 (166 bytes, called_by=0, calls=0)

void FUN_0000cda8(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  short sVar1;
  undefined4 uVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  iVar6 = *(int *)(param_1 + 0x10);
  iVar4 = *(int *)(iVar6 + 0xa4);
  if ((int)((uint)*(byte *)(param_2 + 0x19) << 0x1f) < 0) {
    if (*(char *)(param_2 + 0x18) == '\0') {
      sVar1 = *(short *)(*(int *)(param_2 + 0xc) + 6);
      *(int *)(iVar6 + 0xa8) = param_2;
      if (iVar4 != 0) {
        *(undefined4 *)(iVar6 + 0xa4) = 0;
      }
      if (sVar1 == 0) {
        uVar5 = 3;
      }
      else {
        uVar5 = (**(byte **)(param_2 + 0xc) >> 7) + 1;
      }
      goto LAB_0000cdd8;
    }
LAB_0000ce1e:
    if (iVar4 != 5) {
      if (iVar4 == 2) {
        uVar5 = (*(uint *)(iVar6 + 0x80) ^ 4) & 4;
        goto LAB_0000cdd8;
      }
      if (iVar4 != 3) {
LAB_0000ce34:
        uVar5 = *DAT_0000ce50 << 0x1d;
        if (uVar5 != 0) {
          uVar2 = 1;
          puVar3 = PTR_DAT_0000ce5c;
LAB_0000ce16:
          FUN_0001cab2(DAT_0000ce50,uVar2,puVar3,uVar5,param_4);
        }
        goto LAB_0000ce1a;
      }
    }
    uVar5 = 0;
  }
  else {
    if (*(char *)(param_2 + 0x18) != '\0') goto LAB_0000ce1e;
    if (iVar4 == 1) {
      uVar5 = 5;
      goto LAB_0000cdd8;
    }
    if (iVar4 != 4) goto LAB_0000ce34;
    uVar5 = 0;
    if (*(short *)(param_2 + 0x10) == 0) goto LAB_0000cdd8;
    uVar5 = *DAT_0000ce50;
    if ((uVar5 & 6) != 0) {
      uVar2 = 2;
      puVar3 = PTR_DAT_0000ce58;
      goto LAB_0000ce16;
    }
LAB_0000ce1a:
    uVar5 = 6;
  }
LAB_0000cdd8:
  if (uVar5 == *(uint *)(iVar6 + 0xa4)) {
    if ((*DAT_0000ce50 & 6) != 0) {
      FUN_0001cab2(DAT_0000ce50,2,PTR_DAT_0000ce54,*DAT_0000ce50,param_4);
    }
  }
  *(uint *)(iVar6 + 0xa4) = uVar5;
  return;
}



// FUN_0000cf58 @ 0000cf58 (78 bytes, called_by=0, calls=0)

void FUN_0000cf58(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_0001eeb8();
  if ((iVar1 != 0) || (iVar1 = FUN_0001eec6(param_1), iVar1 != 0)) {
    FUN_0001ee8e(param_1,param_2);
  }
  iVar1 = FUN_0001eeaa(param_1);
  if (iVar1 != 0) {
    FUN_0000a6fc(param_2);
  }
  FUN_0000cda8(param_1,param_2);
  if (*DAT_0000cfa0 != '\0') {
    return;
  }
  *(undefined4 *)(DAT_0000e230 + 0x50) = 1;
  return;
}



// FUN_0000d8f4 @ 0000d8f4 (26 bytes, called_by=0, calls=0)

int FUN_0000d8f4(uint param_1)

{
  int iVar1;
  
  iVar1 = DAT_0000d910;
  if ((param_1 & 0x80) == 0) {
    iVar1 = DAT_0000d910 + -0xd8;
  }
  return (param_1 & 0xf) * 0x18 + iVar1;
}



// FUN_0000db20 @ 0000db20 (52 bytes, called_by=0, calls=0)

undefined8 FUN_0000db20(void)

{
  bool bVar1;
  undefined4 uVar2;
  uint uVar3;
  
  uVar2 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    uVar2 = getBasePriority();
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if ((bVar1) && (uVar3 = getBasePriority(), uVar3 == 0 || 0x40 < uVar3)) {
    setBasePriority(0x40);
  }
  InstructionSynchronizationBarrier(0xf);
  uVar3 = (uint)*DAT_0000db54;
  if (uVar3 != 0) {
    if (*(int *)(DAT_0000db58 + 0x52c) == 0) {
      uVar3 = 0;
    }
    else {
      *(undefined4 *)(DAT_0000db58 + 0x52c) = 0;
    }
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(uVar2);
  }
  InstructionSynchronizationBarrier(0xf);
  return CONCAT44(uVar2,uVar3);
}



// FUN_0000dbe0 @ 0000dbe0 (34 bytes, called_by=0, calls=0)

bool FUN_0000dbe0(uint param_1)

{
  uint uVar1;
  
  if ((param_1 & 0x80) == 0) {
    uVar1 = *(uint *)(DAT_0000dc04 + 0x514);
  }
  else {
    uVar1 = *(uint *)(DAT_0000dc04 + 0x510);
  }
  return (1 << (param_1 & 0xf) & uVar1) != 0;
}



// FUN_0000dc08 @ 0000dc08 (124 bytes, called_by=0, calls=0)

undefined4 FUN_0000dc08(uint param_1)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  uint uVar10;
  uint uVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  
  puVar2 = DAT_0000dc8c;
  uVar12 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    uVar12 = getBasePriority();
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if ((bVar1) && (uVar4 = getBasePriority(), uVar4 == 0 || 0x40 < uVar4)) {
    setBasePriority(0x40);
  }
  InstructionSynchronizationBarrier(0xf);
  if (((param_1 & 0xf) != 0) || (uVar6 = DAT_0000dc98, *DAT_0000dc84 == param_1)) {
    uVar10 = *DAT_0000dc88;
    uVar11 = *DAT_0000dc8c;
    uVar4 = FUN_0001ef7a(param_1);
    uVar4 = 1 << (uVar4 & 0xff);
    uVar6 = DAT_0000dc9c;
    if (((~uVar10 & 0xffff | uVar11) & uVar4) == 0) {
      uVar13 = FUN_0000d8f4(param_1);
      puVar7 = (undefined4 *)((ulonglong)uVar13 >> 0x20);
      puVar5 = (undefined4 *)uVar13;
      *(undefined1 *)(puVar5 + 3) = 1;
      uVar6 = *puVar7;
      uVar8 = puVar7[1];
      uVar9 = puVar7[2];
      puVar5[4] = 0;
      *puVar5 = uVar6;
      puVar5[1] = uVar8;
      puVar5[2] = uVar9;
      *(undefined1 *)((int)puVar5 + 0x16) = 0;
      uVar6 = DAT_0000dc94;
      iVar3 = DAT_0000dc90;
      *puVar2 = uVar11 | uVar4;
      *(undefined4 *)(iVar3 + 0x104) = 0x80;
    }
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(uVar12);
  }
  InstructionSynchronizationBarrier(0xf);
  return uVar6;
}



// FUN_0000dca0 @ 0000dca0 (36 bytes, called_by=0, calls=0)

uint FUN_0000dca0(uint param_1)

{
  uint uVar1;
  
  if ((param_1 & 8) != 0) {
    uVar1 = *(uint *)(DAT_0000dcc4 + 0x4c0);
    if ((uVar1 & 0x10000) != 0) {
      uVar1 = 0;
    }
    return uVar1;
  }
  return *(uint *)(DAT_0000dcc4 + ((param_1 & 0xf) + 0x128) * 4);
}



// FUN_0000dcc8 @ 0000dcc8 (1108 bytes, called_by=0, calls=0)

void FUN_0000dcc8(void)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  byte bVar4;
  undefined4 *puVar5;
  uint *puVar6;
  byte *pbVar7;
  uint *puVar8;
  uint uVar9;
  int iVar10;
  uint *puVar11;
  uint uVar12;
  uint extraout_r1;
  uint extraout_r1_00;
  uint extraout_r1_01;
  uint extraout_r1_02;
  uint extraout_r1_03;
  uint extraout_r1_04;
  uint extraout_r1_05;
  uint uVar13;
  uint uVar14;
  byte bVar15;
  uint uVar16;
  code *pcVar17;
  int iVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  bool bVar22;
  undefined8 uVar23;
  undefined4 local_2c;
  
  puVar6 = DAT_0000df80;
  iVar10 = DAT_0000df7c;
  if ((*(int *)(DAT_0000df7c + 0x154) != 0) &&
     (*(undefined4 *)(DAT_0000df7c + 0x154) = 0, *(int *)(iVar10 + 0x304) << 10 < 0)) {
    local_2c = CONCAT22((short)*(undefined4 *)(iVar10 + 0x520),(short)local_2c) & 0xffffff00;
    if (*(int *)(iVar10 + 0x4c0) == 0) {
      uVar13 = 0x100;
    }
    else {
      uVar13 = 0x1000100;
    }
    *puVar6 = *puVar6 | uVar13;
    (*(code *)*DAT_0000df84)(&local_2c);
  }
  iVar10 = DAT_0000df7c;
  uVar13 = *(uint *)(DAT_0000df7c + 0x160);
  if (uVar13 != 0) {
    *(undefined4 *)(DAT_0000df7c + 0x160) = 0;
    uVar13 = *(uint *)(iVar10 + 0x46c);
    *(uint *)(iVar10 + 0x46c) = uVar13;
  }
  if (*(int *)(iVar10 + 0x128) != 0) {
    *(undefined4 *)(iVar10 + 0x128) = 0;
    uVar9 = FUN_0001ef7a(*DAT_0000df88);
    uVar13 = uVar13 | 1 << (uVar9 & 0xff);
  }
  puVar8 = DAT_0000df90;
  pbVar7 = DAT_0000df8c;
  iVar10 = DAT_0000df7c;
  bVar1 = *DAT_0000df8c;
  uVar19 = (uint)bVar1;
  bVar2 = *DAT_0000df8c;
  uVar9 = uVar19 & 8;
  puVar5 = DAT_0000df84;
  if ((bVar1 & 8) == 0) {
    uVar16 = uVar19 & 0xf;
    if ((char)bVar2 < '\0') {
      if (*(int *)(DAT_0000df94 + uVar16 * 4) == 0) goto LAB_0000de74;
      *(uint *)(DAT_0000df94 + uVar16 * 4) = uVar9;
      bVar15 = (byte)*(undefined4 *)(uVar16 * 0x14 + 0x40027608);
    }
    else {
      if (*(int *)(DAT_0000dfa0 + uVar16 * 4) == 0) goto LAB_0000de74;
      *(uint *)(DAT_0000dfa0 + uVar16 * 4) = uVar9;
      bVar15 = (byte)*(undefined4 *)(uVar16 * 0x14 + 0x40027708);
    }
  }
  else if ((char)bVar2 < '\0') {
    if (*(int *)(DAT_0000df7c + 300) == 0) goto LAB_0000de74;
    *(undefined4 *)(DAT_0000df7c + 300) = 0;
    bVar15 = (byte)*(undefined4 *)(iVar10 + 0x6a8);
  }
  else {
    if (*(int *)(DAT_0000df7c + 0x150) == 0) goto LAB_0000de74;
    *(undefined4 *)(DAT_0000df7c + 0x150) = 0;
    bVar15 = (byte)*(undefined4 *)(iVar10 + 0x7a8);
  }
  *DAT_0000df98 = bVar15 & 1 ^ *DAT_0000df98;
  FUN_00014f08(DAT_0000df9c);
  uVar23 = FUN_0000d8f4(uVar19);
  uVar9 = (uint)((ulonglong)uVar23 >> 0x20);
  if (*(char *)((int)uVar23 + 0x16) == '\x03') {
    uVar23 = FUN_0001ef7a(uVar19);
    uVar9 = (uint)((ulonglong)uVar23 >> 0x20);
    *puVar8 = *puVar8 & ~(1 << ((uint)uVar23 & 0xff));
    puVar5 = DAT_0000df84;
  }
  else if (*(char *)((int)uVar23 + 0xc) == '\0') {
    uVar23 = FUN_0001ef7a(uVar19);
    uVar9 = (uint)((ulonglong)uVar23 >> 0x20);
    *puVar8 = *puVar8 & ~(1 << ((uint)uVar23 & 0xff));
    if ((-1 < (char)bVar2) || (puVar5 = DAT_0000df84, uVar19 == 0x88)) {
      local_2c = CONCAT31(local_2c._1_3_,6);
      local_2c = (uint)CONCAT12(bVar1,(short)local_2c);
      (*(code *)*DAT_0000df84)(&local_2c);
      uVar9 = extraout_r1;
      puVar5 = DAT_0000df84;
    }
  }
  else {
    puVar5 = DAT_0000df84;
    if (uVar19 == 0) {
      *(undefined4 *)(DAT_0000df7c + 0x4c) = 1;
      puVar5 = DAT_0000df84;
    }
  }
LAB_0000de74:
  while (uVar13 != 0) {
    bVar2 = (byte)uVar13;
    bVar15 = (byte)(uVar13 >> 8);
    bVar4 = (byte)(uVar13 >> 0x10);
    bVar1 = (byte)(uVar13 >> 0x18);
    uVar19 = LZCOUNT((uint)(byte)((((((((bVar2 & 1) << 1 | bVar2 >> 1 & 1) << 1 | bVar2 >> 2 & 1) <<
                                      1 | bVar2 >> 3 & 1) << 1 | bVar2 >> 4 & 1) << 1 |
                                   bVar2 >> 5 & 1) << 1 | bVar2 >> 6 & 1) << 1 | bVar2 >> 7) << 0x18
                     | (uint)(byte)((((((((bVar15 & 1) << 1 | bVar15 >> 1 & 1) << 1 |
                                        bVar15 >> 2 & 1) << 1 | bVar15 >> 3 & 1) << 1 |
                                      bVar15 >> 4 & 1) << 1 | bVar15 >> 5 & 1) << 1 |
                                    bVar15 >> 6 & 1) << 1 | bVar15 >> 7) << 0x10 |
                     (uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1) << 1 | bVar4 >> 2 & 1) <<
                                      1 | bVar4 >> 3 & 1) << 1 | bVar4 >> 4 & 1) << 1 |
                                   bVar4 >> 5 & 1) << 1 | bVar4 >> 6 & 1) << 1 | bVar4 >> 7) << 8 |
                     (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1) << 1 | bVar1 >> 2 & 1) <<
                                      1 | bVar1 >> 3 & 1) << 1 | bVar1 >> 4 & 1) << 1 |
                                   bVar1 >> 5 & 1) << 1 | bVar1 >> 6 & 1) << 1 | bVar1 >> 7));
    uVar16 = 1 << uVar19;
    *puVar6 = *puVar6 | uVar16;
    uVar13 = uVar13 & ~uVar16;
    if (uVar19 < 0x10) goto LAB_0000dfa8;
    if ((uVar16 & *puVar8) == 0) {
      local_2c = CONCAT31(local_2c._1_3_,6);
      local_2c._0_3_ = CONCAT12((char)uVar19 + -0x10,(undefined2)local_2c);
      local_2c = CONCAT13(1,(uint3)local_2c);
      goto LAB_0000dfbe;
    }
  }
  if (*(int *)(DAT_0000df7c + 0x100) != 0) {
    *(undefined4 *)(DAT_0000df7c + 0x100) = 0;
    *DAT_0000dfa4 = '\0';
    *DAT_0000df88 = 0;
    local_2c = 1;
    (*(code *)*DAT_0000df84)(&local_2c);
    uVar9 = extraout_r1_00;
  }
  iVar10 = DAT_0000df7c;
  if (*(int *)(DAT_0000df7c + 0x158) != 0) {
    *(undefined4 *)(DAT_0000df7c + 0x158) = 0;
    iVar18 = *(int *)(iVar10 + 0x400);
    *(int *)(iVar10 + 0x400) = iVar18;
    if (iVar18 << 0x17 < 0) {
      *DAT_0000dfa4 = '\x01';
      local_2c = 2;
      (*(code *)*DAT_0000df84)(&local_2c);
      uVar9 = extraout_r1_01;
    }
    if (iVar18 << 0x16 < 0) {
      *DAT_0000dfa4 = '\0';
      local_2c = 3;
      (*(code *)*DAT_0000df84)(&local_2c);
      uVar9 = extraout_r1_02;
    }
    if ((iVar18 << 0x15 < 0) && (*DAT_0000dfa4 != '\0')) {
      *DAT_0000dfa4 = '\0';
      iVar10 = DAT_0000df7c;
      *(undefined4 *)(DAT_0000df7c + 0x508) = 1;
      *(undefined4 *)(iVar10 + 0x58) = 1;
      local_2c = 4;
      (*(code *)*DAT_0000df84)(&local_2c);
      uVar9 = extraout_r1_03;
    }
  }
  iVar10 = DAT_0000df7c;
  if ((*(int *)(DAT_0000df7c + 0x15c) != 0) &&
     ((*(int *)(DAT_0000df9c + 8) != 0 || (uVar9 = (uint)*pbVar7 << 0x19, uVar9 != 0)))) {
    *(undefined4 *)(DAT_0000df7c + 0x15c) = 0;
    *DAT_0000df88 = (byte)*(undefined4 *)(iVar10 + 0x480) & 0x80;
    *puVar8 = *puVar8 & 0xfffefffe;
    *puVar6 = *puVar6 & 0xfffeffff | 1;
    local_2c = 5;
    (*(code *)*DAT_0000df84)(&local_2c);
    uVar9 = extraout_r1_04;
  }
  if (((*puVar8 & *puVar6) == 0) || (iVar10 = FUN_00014f54(DAT_0000df9c,uVar9,0,0), iVar10 != 0)) {
    return;
  }
  if (*(int *)(DAT_0000df7c + 0x52c) == 0) {
    while( true ) {
      uVar13 = *puVar8;
      uVar19 = *puVar6;
      uVar9 = uVar13 & uVar19;
      if (uVar9 == 0) break;
      uVar16 = uVar9 & 0x1000100;
      if (uVar16 == 0) {
        bVar2 = (byte)uVar9;
        bVar15 = (byte)(uVar9 >> 8);
        bVar4 = (byte)(uVar9 >> 0x10);
        bVar1 = (byte)(uVar9 >> 0x18);
        uVar9 = (uint)(byte)((((((((bVar2 & 1) << 1 | bVar2 >> 1 & 1) << 1 | bVar2 >> 2 & 1) << 1 |
                                bVar2 >> 3 & 1) << 1 | bVar2 >> 4 & 1) << 1 | bVar2 >> 5 & 1) << 1 |
                             bVar2 >> 6 & 1) << 1 | bVar2 >> 7) << 0x18 |
                (uint)(byte)((((((((bVar15 & 1) << 1 | bVar15 >> 1 & 1) << 1 | bVar15 >> 2 & 1) << 1
                                | bVar15 >> 3 & 1) << 1 | bVar15 >> 4 & 1) << 1 | bVar15 >> 5 & 1)
                              << 1 | bVar15 >> 6 & 1) << 1 | bVar15 >> 7) << 0x10 |
                (uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1) << 1 | bVar4 >> 2 & 1) << 1 |
                                bVar4 >> 3 & 1) << 1 | bVar4 >> 4 & 1) << 1 | bVar4 >> 5 & 1) << 1 |
                             bVar4 >> 6 & 1) << 1 | bVar4 >> 7) << 8 |
                (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1) << 1 | bVar1 >> 2 & 1) << 1 |
                                bVar1 >> 3 & 1) << 1 | bVar1 >> 4 & 1) << 1 | bVar1 >> 5 & 1) << 1 |
                             bVar1 >> 6 & 1) << 1 | bVar1 >> 7);
      }
      else {
        uVar9 = (uint)(byte)((char)(uVar16 >> 8) << 7) << 0x10 |
                (uint)(byte)((char)(uVar16 >> 0x18) << 7);
      }
      uVar9 = LZCOUNT(uVar9);
      if (uVar9 < 0x10) {
        uVar16 = uVar9 | 0x80;
        puVar11 = (uint *)FUN_0000d8f4(uVar16);
        uVar21 = *puVar11;
        uVar20 = (uint)(ushort)puVar11[5];
        if (puVar11[1] <= (uint)(ushort)puVar11[5]) {
          uVar20 = puVar11[1];
        }
        if ((uVar21 & 0xe0000000) != 0x20000000) {
          FUN_00000820(DAT_0000e148,uVar21,uVar20);
          uVar21 = DAT_0000e148;
        }
        *puVar11 = *puVar11 + uVar20;
        uVar14 = puVar11[1] - uVar20;
        cVar3 = (char)uVar16;
        puVar11[1] = uVar14;
        if ((int)(puVar11[2] << 0x1f) < 0) {
          uVar14 = uVar20;
        }
joined_r0x0000e02c:
        if (uVar14 == 0) {
          *(undefined1 *)(puVar11 + 3) = 0;
        }
        *puVar6 = uVar19 & ~(1 << uVar9);
        uVar13 = puVar11[4];
        *pbVar7 = (byte)uVar16;
        puVar11[4] = uVar13 + uVar20;
        iVar10 = DAT_0000e14c;
        if ((uVar16 & 8) != 0) {
          bVar22 = cVar3 < '\0';
          if (bVar22) {
            *(uint *)(DAT_0000e14c + 0x6a0) = uVar21;
          }
          if (!bVar22) {
            *(uint *)(iVar10 + 0x7a0) = uVar21;
          }
          if (bVar22) {
            *(uint *)(iVar10 + 0x6a4) = uVar20;
          }
          if (!bVar22) {
            *(uint *)(iVar10 + 0x7a4) = uVar20;
          }
          if (bVar22) {
            *(undefined4 *)(iVar10 + 0x24) = 1;
          }
          if (bVar22) {
            return;
          }
          *(undefined4 *)(iVar10 + 0x48) = 1;
          return;
        }
        bVar22 = -1 < cVar3;
        uVar16 = uVar16 & 0xf;
        iVar10 = uVar16 * 0x14 + DAT_0000e14c;
        if (bVar22) {
          uVar16 = uVar16 + 10;
          iVar18 = DAT_0000e14c;
        }
        else {
          iVar18 = DAT_0000e14c + uVar16 * 4;
        }
        if (bVar22) {
          *(uint *)(iVar10 + 0x700) = uVar21;
        }
        if (bVar22) {
          *(uint *)(iVar10 + 0x704) = uVar20;
          *(undefined4 *)(iVar18 + uVar16 * 4) = 1;
        }
        if (!bVar22) {
          *(uint *)(iVar10 + 0x600) = uVar21;
        }
        if (!bVar22) {
          *(uint *)(iVar10 + 0x604) = uVar20;
        }
        if (bVar22) {
          return;
        }
        *(undefined4 *)(iVar18 + 4) = 1;
        return;
      }
      uVar16 = uVar9 - 0x10 & 0xff;
      puVar11 = (uint *)FUN_0000d8f4(uVar16);
      uVar12 = FUN_0000dca0(uVar16);
      uVar14 = puVar11[1];
      uVar21 = *puVar11;
      if (uVar14 < uVar12) {
        uVar20 = 0;
      }
      else {
        uVar14 = uVar14 - uVar12;
        *puVar11 = uVar12 + uVar21;
        puVar11[1] = uVar14;
        uVar20 = uVar12;
      }
      if (uVar12 == (ushort)puVar11[5]) {
        if (uVar14 != 0) {
          uVar14 = 1;
        }
      }
      else {
        uVar14 = 0;
      }
      cVar3 = (char)(uVar9 - 0x10);
      if ((uVar21 == 0) || (uVar12 <= uVar20)) goto joined_r0x0000e02c;
      *puVar8 = uVar13 & ~(1 << uVar9);
      local_2c = CONCAT31(local_2c._1_3_,6);
      local_2c._0_3_ = CONCAT12(cVar3,(undefined2)local_2c);
      pcVar17 = (code *)*DAT_0000e150;
      *(undefined1 *)((int)puVar11 + 0x16) = 2;
      local_2c = CONCAT13(2,(uint3)local_2c);
      (*pcVar17)(&local_2c);
    }
  }
  FUN_00014f08(DAT_0000df9c);
  return;
LAB_0000dfa8:
  if ((uVar16 & *puVar8) == 0) {
    local_2c = CONCAT31(local_2c._1_3_,6);
    local_2c._0_3_ = CONCAT12((char)uVar19,(undefined2)local_2c) | 0x800000;
    local_2c = (uint)(uint3)local_2c;
LAB_0000dfbe:
    (*(code *)*puVar5)(&local_2c);
    uVar9 = extraout_r1_05;
  }
  goto LAB_0000de74;
}



// FUN_0000e180 @ 0000e180 (12 bytes, called_by=0, calls=0)

void FUN_0000e180(uint param_1)

{
  *(uint *)(DAT_0000e18c + 0x518) = param_1 | 0x100;
  return;
}



// FUN_0000e190 @ 0000e190 (48 bytes, called_by=0, calls=0)

int FUN_0000e190(uint param_1)

{
  int iVar1;
  
  if ((int)(param_1 << 0x1c) < 0) {
    return 0;
  }
  if ((param_1 & 0x80) == 0) {
    iVar1 = *(int *)(DAT_0000e1c0 + ((param_1 & 0xf) + 0x110) * 4 + 4);
  }
  else {
    iVar1 = *(int *)(DAT_0000e1c0 + ((param_1 & 0xf) + 0x108) * 4);
  }
  if (iVar1 != 0) {
    iVar1 = 1;
  }
  return iVar1;
}



// FUN_0000e1c4 @ 0000e1c4 (16 bytes, called_by=0, calls=0)

void FUN_0000e1c4(uint param_1)

{
  int iVar1;
  
  iVar1 = DAT_0000e1d4;
  *(uint *)(DAT_0000e1d4 + 0x50c) = param_1;
  *(uint *)(iVar1 + 0x50c) = param_1 | 0x100;
  return;
}



// FUN_0000e234 @ 0000e234 (8 bytes, called_by=0, calls=0)

void FUN_0000e234(void)

{
  *(undefined4 *)(DAT_0000e23c + 0x54) = 1;
  return;
}



// FUN_0000e240 @ 0000e240 (6 bytes, called_by=0, calls=0)

undefined1 FUN_0000e240(void)

{
  return *DAT_0000e248;
}



// FUN_0000e24c @ 0000e24c (68 bytes, called_by=0, calls=0)

void FUN_0000e24c(uint param_1)

{
  bool bVar1;
  uint uVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    uVar3 = getBasePriority();
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if ((bVar1) && (uVar2 = getBasePriority(), uVar2 == 0 || 0x40 < uVar2)) {
    setBasePriority(0x40);
  }
  InstructionSynchronizationBarrier(0xf);
  uVar2 = FUN_0001ef7a();
  *DAT_0000e290 = *DAT_0000e290 & ~(1 << (uVar2 & 0xff));
  if ((param_1 & 8) == 0) {
    *(undefined4 *)(DAT_0000e294 + ((param_1 & 0xf) + 0x128) * 4) = 0;
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(uVar3);
  }
  InstructionSynchronizationBarrier(0xf);
  return;
}



// FUN_0000e298 @ 0000e298 (224 bytes, called_by=0, calls=0)

void FUN_0000e298(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  bool bVar1;
  uint *puVar2;
  uint *puVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  ulonglong uVar12;
  undefined4 local_1c;
  undefined4 uStack_18;
  
  uVar10 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    uVar10 = getBasePriority();
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if ((bVar1) && (uVar9 = getBasePriority(), uVar9 == 0 || 0x40 < uVar9)) {
    setBasePriority(0x40);
  }
  InstructionSynchronizationBarrier(0xf);
  local_1c = param_2;
  uStack_18 = param_3;
  uVar11 = FUN_0000d8f4(param_1,param_1,param_3,0x40,param_1);
  iVar6 = (int)uVar11;
  uVar12 = FUN_0001ef7a((int)((ulonglong)uVar11 >> 0x20));
  iVar4 = DAT_0000e380;
  puVar3 = DAT_0000e37c;
  puVar2 = DAT_0000e378;
  uVar9 = (uint)(uVar12 >> 0x20);
  uVar7 = 1 << ((uint)uVar12 & 0xff);
  if ((uVar12 & 0x8000000000) == 0) {
    uVar8 = *DAT_0000e378;
    if ((uVar7 & ~uVar8) == 0) {
      *(undefined1 *)(iVar6 + 0xc) = 0;
      *puVar2 = uVar8 & ~uVar7;
      *puVar3 = *puVar3 & ~uVar7;
    }
    else {
      FUN_0000e24c(uVar9);
    }
    *(undefined1 *)(iVar6 + 0x16) = 3;
  }
  else {
    if (-1 < (int)(uVar9 << 0x1c)) {
      if (uVar9 == 0x80) {
        *(undefined4 *)(DAT_0000e380 + 0x800) = 0x7b4;
        uVar8 = *(uint *)(iVar4 + 0x804);
        uVar9 = *(uint *)(iVar4 + 0x804) & 0xff | 4;
      }
      else {
        *(uint *)(DAT_0000e380 + 0x800) = ((uVar9 & 0xf) + 0x3da) * 2;
        uVar8 = *(uint *)(iVar4 + 0x804);
        uVar9 = *(uint *)(iVar4 + 0x804) & 0xff | 2;
      }
      *(uint *)(iVar4 + 0x804) = uVar9 | uVar8;
    }
    uVar9 = *puVar2;
    if (((uVar9 | ~*DAT_0000e37c) & uVar7) != 0) {
      *DAT_0000e37c = *DAT_0000e37c | uVar7;
      *(undefined1 *)(iVar6 + 0xc) = 0;
      *(undefined1 *)(iVar6 + 0x16) = 3;
      puVar5 = DAT_0000e384;
      local_1c = CONCAT13(3,CONCAT12((char)(uVar12 >> 0x20),(undefined2)local_1c));
      *puVar2 = uVar9 & ~uVar7;
      local_1c = CONCAT31(local_1c._1_3_,6);
      (*(code *)*puVar5)(&local_1c);
    }
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(uVar10);
  }
  InstructionSynchronizationBarrier(0xf);
  return;
}



// FUN_0000e48c @ 0000e48c (62 bytes, called_by=0, calls=0)

void FUN_0000e48c(uint param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  
  FUN_00014f54(DAT_0000e4e0,param_2,0xffffffff,0xffffffff);
  FUN_0000e298(param_1);
  iVar1 = DAT_0000e4e4;
  bVar3 = (param_1 & 0x80) != 0;
  if (bVar3) {
    uVar2 = *(uint *)(DAT_0000e4e4 + 0x510);
  }
  else {
    uVar2 = *(uint *)(DAT_0000e4e4 + 0x514);
  }
  uVar2 = ~(1 << (param_1 & 0xf)) & uVar2;
  if (bVar3) {
    *(uint *)(DAT_0000e4e4 + 0x510) = uVar2;
  }
  *(uint *)(iVar1 + 0x514) = uVar2;
  FUN_00014f08(DAT_0000e4e0);
  *(undefined4 *)(DAT_0000e4e8 + 0x104) = 0x80;
  return;
}



// FUN_0000e4ec @ 0000e4ec (94 bytes, called_by=0, calls=0)

void FUN_0000e4ec(uint param_1)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  
  iVar2 = FUN_0000dbe0();
  if (iVar2 == 0) {
    uVar3 = 1 << (param_1 & 0xf);
    if ((param_1 & 0x80) == 0) {
      *(uint *)(DAT_0000e554 + 0x514) = uVar3 | *(uint *)(DAT_0000e554 + 0x514);
      if (param_1 - 1 < 7) {
        uVar4 = 0;
        bVar1 = (bool)isCurrentModePrivileged();
        if (bVar1) {
          uVar4 = getBasePriority();
        }
        bVar1 = (bool)isCurrentModePrivileged();
        if ((bVar1) && (uVar3 = getBasePriority(), uVar3 == 0 || 0x40 < uVar3)) {
          setBasePriority(0x40);
        }
        InstructionSynchronizationBarrier(0xf);
        FUN_0000e24c(param_1);
        uVar3 = FUN_0001ef7a(param_1);
        *DAT_0000e558 = *DAT_0000e558 & ~(1 << (uVar3 & 0xff));
        bVar1 = (bool)isCurrentModePrivileged();
        if (bVar1) {
          setBasePriority(uVar4);
        }
        InstructionSynchronizationBarrier(0xf);
      }
    }
    else {
      *(uint *)(DAT_0000e554 + 0x510) = uVar3 | *(uint *)(DAT_0000e554 + 0x510);
    }
  }
  return;
}



// FUN_0000e55c @ 0000e55c (28 bytes, called_by=0, calls=0)

void FUN_0000e55c(int param_1)

{
  int iVar1;
  
  if ((-1 < param_1 << 0x18) && (iVar1 = FUN_0000e190(), iVar1 != 0)) {
    FUN_0000e24c(param_1);
  }
  *(int *)(DAT_0000e578 + 0x518) = param_1;
  return;
}



// FUN_0000e57c @ 0000e57c (40 bytes, called_by=0, calls=0)

undefined4 FUN_0000e57c(uint param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_1 < 0x14) {
    uVar2 = (uint)*(byte *)(DAT_0000e5a4 + param_1 * 2);
    if ((uVar2 != 0) && (uVar1 = (uint)*(byte *)(DAT_0000e5a4 + param_1 * 2 + 1), uVar1 != 0)) {
      *param_2 = (int)(*param_2 * uVar2) / (int)uVar1;
      return 0;
    }
  }
  return 0xffffffea;
}



// FUN_0000e5c4 @ 0000e5c4 (272 bytes, called_by=0, calls=0)

/* WARNING: Instruction at (ram,0x00016714) overlaps instruction at (ram,0x00016712)
    */
/* WARNING: Type propagation algorithm not settling */

uint * FUN_0000e5c4(undefined4 param_1,byte *param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint *puVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  undefined4 unaff_r8;
  uint unaff_r9;
  uint *puVar16;
  int *unaff_r11;
  byte bVar17;
  uint in_r12;
  uint in_lr;
  bool bVar18;
  
  iVar12 = DAT_0000e728;
  uVar15 = (uint)param_2[4];
  uVar14 = (uint)param_2[6];
  uVar9 = uVar15 & 0x1f;
  if (7 < uVar9) {
    return (uint *)0xffffffea;
  }
  uVar13 = (uint)*param_2;
  switch(uVar13) {
  case 0:
  case 1:
  case 2:
  case 3:
    break;
  default:
    uVar9 = *DAT_0000e718;
    uVar1 = DAT_0000e720;
    goto joined_r0x0000e5fc;
  case 5:
    uVar13 = 4;
    break;
  case 8:
    uVar13 = 5;
    break;
  case 9:
    uVar13 = 6;
    break;
  case 0xb:
    uVar13 = 7;
  }
  if (param_2[1] == 3) {
    iVar2 = 1;
  }
  else {
    if (param_2[1] != 4) {
      uVar9 = *DAT_0000e718;
      uVar1 = DAT_0000e71c;
      goto joined_r0x0000e5fc;
    }
    iVar2 = 0;
  }
  uVar5 = (uint)*(ushort *)(param_2 + 2);
  if (0x400a < uVar5) {
    if (uVar5 == 0x4014) {
      iVar7 = 4;
LAB_0000e692:
      uVar15 = uVar15 & 0x20;
      bVar18 = (param_2[4] & 0x20) != 0;
      bVar17 = (byte)(1 << uVar9);
      iVar6 = uVar9 * 0x10;
      if (bVar18) {
        bVar17 = *(byte *)(DAT_0000e728 + 0xa8) & ~bVar17;
      }
      else {
        bVar17 = *(byte *)(DAT_0000e728 + 0xa8) | bVar17;
      }
      *(byte *)(DAT_0000e728 + 0xa8) = bVar17;
      if (bVar18) {
        uVar15 = 1;
      }
      *(byte *)(iVar12 + uVar9 + 0xa0) = param_2[5];
      *(uint *)(iVar6 + 0x40007518) = iVar2 << 0xc | uVar13 << 8 | iVar7 << 0x10 | uVar15 << 0x14;
      *(undefined4 *)(iVar6 + 0x40007510) = 0;
      *(uint *)(iVar6 + 0x40007514) = uVar14;
      return (uint *)0x0;
    }
    if (uVar5 == 0x4028) {
      iVar7 = 5;
      goto LAB_0000e692;
    }
    if (uVar5 == 0x400f) {
      iVar7 = 3;
      goto LAB_0000e692;
    }
switchD_0000e65a_caseD_c:
    uVar9 = *DAT_0000e718;
    uVar1 = DAT_0000e724;
joined_r0x0000e5fc:
    if ((uVar9 & 7) != 0) {
      FUN_0001cab2(DAT_0000e718,1,uVar1);
    }
    return (uint *)0xffffffea;
  }
  if (uVar5 < 0x3fff) {
    if (uVar5 == 0) {
      iVar7 = 2;
      goto LAB_0000e692;
    }
    goto switchD_0000e65a_caseD_c;
  }
  uVar5 = uVar5 - 0x3fff;
  switch(uVar5) {
  case 0:
code_r0x00016712:
    iVar12 = ((unaff_r9 >> 0x12) + 0x7d) * 8;
    iVar2 = (unaff_r9 >> 0x12) + 0x7c;
    break;
  case 1:
  case 2:
  case 3:
  case 5:
  case 7:
  case 8:
  case 9:
  case 10:
    goto switchD_0000e65a_caseD_1;
  case 4:
    iVar12 = ((unaff_r9 >> 0xc) + 0x6f) * 8;
    iVar2 = (unaff_r9 >> 0xc) + 0x6e;
    break;
  case 6:
    goto switchD_0000e65a_caseD_6;
  case 0xb:
    *(short *)(uVar5 + uVar14) = (short)uVar13;
    if (uVar5 <= uVar9) goto code_r0x00016712;
    iVar12 = 0x3f8;
    iVar2 = 0x7e;
    break;
  default:
    goto switchD_0000e65a_caseD_c;
  }
  iVar7 = *(int *)((int)&switchD_0000e65a::switchdataD_0000e660 + iVar12);
  iVar12 = iVar12 + 0xe658;
  if (iVar12 == iVar7) {
    in_lr = in_lr | 1 << (iVar2 >> 2 & 0xffU);
    UINT_0000e664 = in_lr;
  }
  else {
    do {
      if ((*(uint *)(iVar7 + 4) & 0xfffffffc) <= unaff_r9) break;
      iVar7 = *(int *)(iVar7 + 8);
    } while (iVar12 != iVar7);
    iVar12 = *(int *)(iVar7 + 0xc);
  }
  *(int *)(uVar13 + 8) = iVar7;
  *(int *)(uVar13 + 0xc) = iVar12;
  *(uint *)(iVar12 + 8) = uVar13;
  *(uint *)(iVar7 + 0xc) = uVar13;
  uVar13 = UINT_0000e668;
  uVar9 = 1 << ((int)in_r12 >> 2 & 0xffU);
  if (uVar9 <= in_lr) {
    if ((uVar9 & in_lr) == 0) {
      in_r12 = in_r12 & 0xfffffffc;
      do {
        uVar9 = uVar9 << 1;
        in_r12 = in_r12 + 4;
      } while ((uVar9 & in_lr) == 0);
    }
    do {
      puVar16 = &switchD_0000e65a::switchdataD_0000e660 + in_r12 * 2;
      puVar11 = puVar16;
      uVar5 = in_r12;
      do {
        puVar3 = (uint *)puVar11[3];
        while (puVar4 = puVar3, puVar11 != puVar4) {
          uVar10 = puVar4[1] & 0xfffffffc;
          uVar8 = uVar10 - uVar14;
          puVar3 = (uint *)puVar4[3];
          if (0xf < (int)uVar8) {
            uVar13 = puVar4[2];
            uVar9 = (int)puVar4 + uVar14;
            puVar4[1] = uVar14 | 1;
            *(uint **)(uVar13 + 0xc) = puVar3;
            puVar3[2] = uVar13;
            UINT_0000e670 = uVar9;
            UINT_0000e674 = uVar9;
            *(undefined4 *)(uVar9 + 8) = unaff_r8;
            *(undefined4 *)(uVar9 + 0xc) = unaff_r8;
            *(uint *)(uVar9 + 4) = uVar8 | 1;
            *(uint *)((int)puVar4 + uVar10) = uVar8;
            FUN_00016954(uVar15);
            return puVar4 + 2;
          }
          if (-1 < (int)uVar8) {
            *(uint *)((int)puVar4 + uVar10 + 4) = *(uint *)((int)puVar4 + uVar10 + 4) | 1;
            uVar9 = puVar4[2];
            *(uint **)(uVar9 + 0xc) = puVar3;
            puVar3[2] = uVar9;
            FUN_00016954(uVar15);
            return puVar4 + 2;
          }
        }
        uVar5 = uVar5 + 1;
        puVar11 = puVar11 + 2;
      } while ((uVar5 & 3) != 0);
      do {
        uVar10 = in_r12 & 3;
        in_r12 = in_r12 - 1;
        if (uVar10 == 0) {
          UINT_0000e664 = UINT_0000e664 & ~uVar9;
          break;
        }
        puVar3 = puVar16 + -2;
        puVar11 = (uint *)*puVar16;
        puVar16 = puVar3;
      } while (puVar11 == puVar3);
      uVar9 = uVar9 * 2;
      if ((UINT_0000e664 <= uVar9 && uVar9 - UINT_0000e664 != 0) || (uVar9 == 0)) break;
      for (; in_r12 = uVar5, (uVar9 & UINT_0000e664) == 0; uVar9 = uVar9 << 1) {
        uVar5 = uVar5 + 4;
      }
    } while( true );
  }
  uVar9 = *(uint *)(UINT_0000e668 + 4) & 0xfffffffc;
  if ((uVar14 <= uVar9) && (uVar10 = uVar9 - uVar14, uVar5 = UINT_0000e668, 0xf < (int)uVar10))
  goto LAB_000163d0;
  uVar10 = UINT_0000e668 + uVar9;
  if (*DAT_000164ec == 0xffffffff) {
    uVar8 = *DAT_000164e8 + uVar14 + 0x10;
  }
  else {
    uVar8 = *DAT_000164e8 + uVar14 + 0x100f & 0xfffff000;
  }
  unaff_r9 = FUN_00016960(uVar15,uVar8);
  unaff_r11 = DAT_00016738;
  puVar11 = DAT_000164ec;
  if (unaff_r9 == 0xffffffff) {
LAB_000163ae:
    uVar8 = *(uint *)(UINT_0000e668 + 4);
    uVar5 = UINT_0000e668;
  }
  else {
    if (unaff_r9 < uVar10) {
      if ((uint *)uVar13 != &switchD_0000e65a::switchdataD_0000e660) goto LAB_000163ae;
      param_2 = (byte *)(*DAT_00016738 + uVar8);
      *DAT_00016738 = (int)param_2;
LAB_000165c4:
      if (*puVar11 == 0xffffffff) {
        *puVar11 = unaff_r9;
      }
      else {
        *unaff_r11 = (int)(param_2 + (unaff_r9 - uVar10));
      }
      uVar5 = unaff_r9 & 7;
      if (uVar5 == 0) {
        uVar10 = (unaff_r9 + uVar8) * -0x100000 >> 0x14;
        iVar12 = FUN_00016960(uVar15,uVar10);
        if (iVar12 != -1) goto LAB_00016606;
        uVar10 = 0;
      }
      else {
        unaff_r9 = unaff_r9 + (8 - uVar5);
        uVar10 = (0x1008 - uVar5) - (uVar8 + unaff_r9) & 0xfff;
        iVar12 = FUN_00016960(uVar15,uVar10);
        if (iVar12 == -1) {
          uVar8 = (uVar8 + unaff_r9 + (uVar5 - 8)) - unaff_r9;
          uVar10 = 0;
        }
        else {
LAB_00016606:
          uVar8 = (iVar12 - unaff_r9) + uVar10;
        }
      }
      uVar8 = uVar8 | 1;
      param_2 = (byte *)(uVar10 + *unaff_r11);
      UINT_0000e668 = unaff_r9;
      *(uint *)(unaff_r9 + 4) = uVar8;
      *unaff_r11 = (int)param_2;
      uVar5 = unaff_r9;
      if ((uint *)uVar13 != &switchD_0000e65a::switchdataD_0000e660) {
        if (uVar9 < 0x10) {
          *(undefined4 *)(unaff_r9 + 4) = 1;
          goto LAB_00016346;
        }
        uVar9 = uVar9 - 0xc & 0xfffffff8;
        uVar5 = *(uint *)(uVar13 + 4) & 1;
switchD_0000e65a_caseD_1:
        *(uint *)(uVar13 + 4) = uVar5 | uVar9;
        *(undefined4 *)(uVar13 + uVar9 + 4) = 5;
        *(undefined4 *)(uVar13 + uVar9 + 8) = 5;
        uVar5 = unaff_r9;
        if (0xf < uVar9) {
          param_2 = (byte *)(uVar13 + 8);
switchD_0000e65a_caseD_6:
          FUN_00018a90(uVar15,param_2);
          param_2 = (byte *)*unaff_r11;
          uVar5 = UINT_0000e668;
        }
        uVar8 = *(uint *)(uVar5 + 4);
      }
    }
    else {
      param_2 = (byte *)(*DAT_00016738 + uVar8);
      *DAT_00016738 = (int)param_2;
      uVar5 = UINT_0000e668;
      if ((uVar10 != unaff_r9) || ((unaff_r9 & 0xfff) != 0)) goto LAB_000165c4;
      uVar8 = uVar8 + uVar9 | 1;
      *(uint *)(UINT_0000e668 + 4) = uVar8;
    }
    if ((byte *)*DAT_0001673c < param_2) {
      *DAT_0001673c = param_2;
    }
    if ((byte *)*DAT_00016740 < param_2) {
      *DAT_00016740 = param_2;
    }
  }
  uVar10 = (uVar8 & 0xfffffffc) - uVar14;
  if ((uVar14 <= (uVar8 & 0xfffffffc)) && (0xf < (int)uVar10)) {
LAB_000163d0:
    UINT_0000e668 = uVar5 + uVar14;
    *(uint *)(uVar5 + 4) = uVar14 | 1;
    *(uint *)(UINT_0000e668 + 4) = uVar10 | 1;
    FUN_00016954(uVar15);
    return (uint *)(uVar5 + 8);
  }
LAB_00016346:
  FUN_00016954(uVar15);
  return (uint *)0x0;
}



// FUN_0000ecc0 @ 0000ecc0 (12 bytes, called_by=0, calls=0)

int FUN_0000ecc0(byte param_1)

{
  return (uint)param_1 * 0x1c + DAT_0000eccc;
}



// FUN_000101c4 @ 000101c4 (64 bytes, called_by=0, calls=0)

bool FUN_000101c4(uint param_1)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 1 << (param_1 & 0xff);
  DataMemoryBarrier(0x1b);
  do {
    ExclusiveAccess(DAT_00010204);
    uVar2 = *DAT_00010204;
    bVar1 = (bool)hasExclusiveAccess(DAT_00010204);
  } while (!bVar1);
  *DAT_00010204 = uVar2 & ~uVar3;
  DataMemoryBarrier(0x1b);
  *(int *)(DAT_00010208 + 0x308) = 0x10000 << (param_1 & 0xff);
  DataMemoryBarrier(0x1f);
  InstructionSynchronizationBarrier(0xf);
  return (uVar3 & uVar2) != 0;
}



// FUN_00010254 @ 00010254 (74 bytes, called_by=0, calls=0)

void FUN_00010254(uint param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 != 0) {
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(DAT_000102a0);
      bVar1 = (bool)hasExclusiveAccess(DAT_000102a0);
    } while (!bVar1);
    *DAT_000102a0 = *DAT_000102a0 | 1 << (param_1 & 0xff);
    iVar3 = DAT_000102a4;
    DataMemoryBarrier(0x1b);
    *(int *)(DAT_000102a4 + 0x304) = 0x10000 << (param_1 & 0xff);
    DataMemoryBarrier(0x1b);
    DataMemoryBarrier(0x1b);
    iVar4 = (*DAT_000102a8 >> (param_1 & 0xff)) << 0x1f;
    iVar2 = iVar4;
    if (iVar4 < 0) {
      iVar3 = 0x20000;
      iVar2 = DAT_000102ac;
    }
    if (iVar4 < 0) {
      *(int *)(iVar2 + 0x100) = iVar3;
    }
  }
  return;
}



// FUN_000102b0 @ 000102b0 (54 bytes, called_by=0, calls=0)

undefined8 FUN_000102b0(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  
  uVar1 = *DAT_000102e8 * 0x1000000;
  DataMemoryBarrier(0x1f);
  uVar3 = *(uint *)(DAT_000102ec + 0x504);
  uVar2 = uVar3 + uVar1;
  uVar1 = (*DAT_000102e8 >> 8) + (uint)CARRY4(uVar3,uVar1);
  if ((uVar3 < 0x100000) &&
     (uVar1 <= DAT_000102f0[1] && (uint)(*DAT_000102f0 <= uVar2) <= uVar1 - DAT_000102f0[1])) {
    bVar4 = 0xfeffffff < uVar2;
    uVar2 = uVar2 + 0x1000000;
    uVar1 = uVar1 + bVar4;
  }
  return CONCAT44(uVar1,uVar2);
}



// FUN_000102f4 @ 000102f4 (282 bytes, called_by=0, calls=0)

undefined4
FUN_000102f4(uint param_1,undefined4 param_2,uint param_3,uint param_4,undefined4 param_5,
            undefined4 param_6,char param_7)

{
  bool bVar1;
  undefined4 uVar2;
  uint uVar3;
  int extraout_r1;
  int extraout_r1_00;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  undefined8 uVar10;
  
  uVar2 = FUN_000101c4();
  uVar10 = FUN_000102b0();
  uVar3 = (uint)((ulonglong)uVar10 >> 0x20);
  uVar9 = (uint)uVar10;
  if (param_4 < uVar3 || uVar3 - param_4 < (uint)(param_3 <= uVar9)) {
    if (param_7 == '\0') {
      DataMemoryBarrier(0x1b);
      do {
        ExclusiveAccess(DAT_00010420);
        bVar1 = (bool)hasExclusiveAccess(DAT_00010420);
      } while (!bVar1);
      *DAT_00010420 = *DAT_00010420 | 1 << (param_1 & 0xff);
      DataMemoryBarrier(0x1b);
      goto LAB_000103f6;
    }
  }
  else if (param_4 - uVar3 == (uint)(param_3 < uVar9) &&
           (uint)(DAT_00010410 <= param_3 - uVar9) <= (param_4 - uVar3) - (uint)(param_3 < uVar9)) {
    iVar4 = DAT_00010414 + param_1 * 0x10;
    if (param_4 != *(uint *)(iVar4 + 0xc) || param_3 != *(uint *)(iVar4 + 8)) {
      iVar7 = 0x10000 << (param_1 & 0xff);
      *(int *)(DAT_00010418 + 0x348) = iVar7;
      FUN_0001fd02(param_1);
      iVar8 = 3;
      iVar4 = extraout_r1;
      uVar9 = param_3 & 0xffffff;
      while( true ) {
        *(uint *)(iVar4 + (param_1 + 0x150) * 4) = uVar9 & 0xffffff;
        *(int *)(iVar4 + 0x344) = iVar7;
        iVar5 = *(int *)(iVar4 + 0x504);
        if (((-3 - iVar5) + uVar9 & 0xffffff) <= DAT_0001041c) break;
        if (*(int *)(((param_1 + 0x50) * 4 & 0xffff) + 0x40011000) != 0) {
          iVar5 = *(int *)(iVar4 + 0x504);
          if ((iVar5 - (param_3 & 0xffffff) & 0xffffff) < 0x800001) break;
          FUN_0001fd02(param_1);
          iVar4 = extraout_r1_00;
        }
        if (param_7 != '\0') goto LAB_000103c6;
        uVar9 = iVar8 + iVar5;
        iVar8 = iVar8 + 1;
      }
    }
LAB_000103f6:
    iVar4 = DAT_00010414 + param_1 * 0x10;
    *(undefined4 *)(DAT_00010414 + param_1 * 0x10) = param_5;
    *(undefined4 *)(iVar4 + 4) = param_6;
    *(uint *)(iVar4 + 8) = param_3;
    *(uint *)(iVar4 + 0xc) = param_4;
    uVar6 = 0;
    goto LAB_000103ca;
  }
LAB_000103c6:
  uVar6 = 0xffffffea;
LAB_000103ca:
  FUN_00010254(param_1,uVar2);
  return uVar6;
}



// FUN_00010578 @ 00010578 (80 bytes, called_by=0, calls=0)

void FUN_00010578(uint param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = DAT_000105c8;
  if (param_1 != 0xffffffff) {
    if ((int)param_1 <= (int)DAT_000105c8) {
      uVar4 = param_1;
    }
    if ((int)uVar4 < 1) {
      uVar4 = 1;
    }
  }
  iVar1 = FUN_000102b0();
  uVar2 = *DAT_000105cc;
  uVar3 = DAT_000105c8;
  if ((iVar1 - uVar2 < 0x800000) && (uVar3 = uVar4 + (iVar1 - uVar2), DAT_000105c8 <= uVar3)) {
    uVar3 = DAT_000105c8;
  }
  FUN_000102f4(0,DAT_000105d0,uVar3 + uVar2,DAT_000105cc[1] + (uint)CARRY4(uVar3,uVar2),DAT_000105d0
               ,0,0);
  return;
}



// FUN_000105e8 @ 000105e8 (36 bytes, called_by=0, calls=0)

void FUN_000105e8(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = DAT_0001060c;
  *(undefined4 *)(DAT_0001060c + 4) = 1;
  FUN_00009ff4(0x11);
  uVar2 = DAT_00010610;
  *(undefined4 *)(iVar1 + 0x308) = DAT_00010610;
  *(undefined4 *)(iVar1 + 0x348) = uVar2;
  *(undefined4 *)(DAT_00010614 + 0x180) = 0x20000;
  return;
}



// FUN_00010694 @ 00010694 (80 bytes, called_by=0, calls=0)

undefined4 FUN_00010694(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  uint local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  iVar4 = *(int *)(param_1 + 0x10);
  uVar5 = *(undefined4 *)(param_1 + 4);
  local_14 = 0;
  local_18 = *(undefined4 *)(iVar4 + 0x20);
  local_1c = (uint)(-1 < param_2 << 0x1f);
  uVar2 = param_2 << 0x1e;
  uVar3 = uVar2;
  if (-1 < (int)uVar2) {
    uVar3 = local_1c;
  }
  if (-1 < (int)uVar2) {
    local_1c = uVar3 | 8;
  }
  iVar1 = FUN_00012e08(uVar5,&local_1c);
  if (iVar1 == DAT_000106e4) {
    FUN_00012e3c(uVar5);
    *(undefined1 *)(iVar4 + 0x25) = 1;
    uVar5 = 0;
  }
  else {
    uVar5 = 0xfffffff0;
  }
  return uVar5;
}



// FUN_00010754 @ 00010754 (40 bytes, called_by=0, calls=0)

undefined4 FUN_00010754(void)

{
  byte bVar1;
  undefined4 uVar2;
  
  bVar1 = *(byte *)(DAT_00010784 + 8);
  *(uint *)(DAT_00010788 + 0x510) = (uint)bVar1;
  switch((uint)bVar1) {
  case 0:
  case 3:
    uVar2 = 300;
    break;
  case 1:
  case 4:
    uVar2 = 0xa0;
    break;
  default:
    return 0;
  }
  *DAT_0001078c = uVar2;
  return 1;
}



// FUN_00010790 @ 00010790 (20 bytes, called_by=0, calls=0)

void FUN_00010790(void)

{
  int iVar1;
  
  iVar1 = DAT_000107a4;
  *(undefined4 *)(DAT_000107a4 + 4) = 0;
  *(undefined4 *)(iVar1 + 8) = 0;
  *(undefined4 *)(iVar1 + 0xc) = 0;
  iVar1 = DAT_000107a8;
  *(undefined4 *)(DAT_000107a8 + 4) = 0;
  *(undefined4 *)(iVar1 + 8) = 0;
  *(undefined4 *)(iVar1 + 0xc) = 0;
  return;
}



// FUN_000107c8 @ 000107c8 (58 bytes, called_by=0, calls=0)

void FUN_000107c8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  piVar1 = DAT_0001080c;
  uVar4 = 0x404;
  if (param_1 == 0) {
    uVar4 = 0x400;
  }
  iVar2 = FUN_000005ac(DAT_00010808,DAT_00010804,param_3,param_4,param_4);
  if (iVar2 == 0) {
    FUN_000115b4();
  }
  else {
    if (*(char *)(DAT_00010810 + 0x13) == '\0') {
      uVar3 = 0x81;
    }
    else {
      uVar3 = 0x28;
    }
    *(undefined4 *)(*piVar1 + 0x548) = uVar3;
  }
  *(undefined4 *)(*piVar1 + 0x200) = uVar4;
  return;
}



// FUN_00010814 @ 00010814 (44 bytes, called_by=0, calls=0)

void FUN_00010814(void)

{
  *(undefined4 *)(*DAT_00010838 + 0x10) = 1;
  FUN_000005d0();
  FUN_000005c4();
  FUN_000115ec();
  FUN_000005dc(3);
                    /* WARNING: Could not recover jumptable at 0x000005a6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_000005a8 + 8))();
  return;
}



// FUN_0001083c @ 0001083c (48 bytes, called_by=0, calls=0)

void FUN_0001083c(undefined4 param_1,uint param_2,undefined4 param_3)

{
  undefined4 local_c;
  undefined4 uStack_8;
  
  local_c = param_2;
  uStack_8 = param_3;
  FUN_000005f4((int)*(char *)(DAT_00010870 + 10),&local_c,*(byte *)(DAT_0001086c + 0x13) + 0x960,0,
               param_1);
  FUN_000005e8(local_c._1_1_);
  *(uint *)(DAT_00010874 + 0x50c) = local_c & 0xff;
  return;
}



// FUN_00010878 @ 00010878 (28 bytes, called_by=0, calls=0)

void FUN_00010878(void)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = DAT_00010894;
  uVar2 = FUN_0001fd54(DAT_00010894,DAT_00010898);
  *(int *)((int)((ulonglong)uVar2 >> 0x20) + 0x524) = (int)uVar2;
  uVar2 = FUN_0001fd54(iVar1 + 4);
  *(int *)((int)((ulonglong)uVar2 >> 0x20) + 0x528) = (int)uVar2;
  return;
}



// FUN_00010a48 @ 00010a48 (356 bytes, called_by=0, calls=0)

void FUN_00010a48(void)

{
  char cVar1;
  byte bVar2;
  bool bVar3;
  byte *pbVar4;
  char *pcVar5;
  int *piVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  byte *pbVar10;
  undefined1 *puVar11;
  undefined4 in_r3;
  int iVar12;
  uint *puVar13;
  uint uVar14;
  undefined1 uVar15;
  byte bVar16;
  
  pbVar4 = DAT_00010bb8;
  piVar6 = DAT_00010bb4;
  pcVar5 = DAT_00010bb0;
  cVar1 = *DAT_00010bb0;
  *DAT_00010bac = 1;
  pbVar10 = *(byte **)(DAT_00010bbc + *(int *)(DAT_00010bbc + 8) * 4);
  *piVar6 = (int)pbVar10;
  puVar8 = DAT_00010bd0;
  if (cVar1 == '\0') {
    pbVar4[0] = 0;
    pbVar4[1] = 0;
    (*(code *)*puVar8)(*pbVar10);
    puVar11 = (undefined1 *)*piVar6;
    *pbVar4 = *pbVar4 & 0xfc | puVar11[4] & 3;
    FUN_00000820(pbVar4 + 2,puVar11 + 5,*puVar11);
    iVar7 = DAT_00010bc0;
    *(undefined4 *)(DAT_00010bc0 + 0x200) = 0x11b;
    *(undefined4 *)(iVar7 + 0x304) = 0x10;
    *DAT_00010bd4 = (uint)*(ushort *)(pcVar5 + 0xe);
    *DAT_00010bd8 = DAT_00010bdc;
    *DAT_00010be0 = 2;
  }
  else if (cVar1 == '\x01') {
    bVar2 = pbVar10[3];
    pbVar4[0] = 0;
    pbVar4[1] = 0;
    bVar16 = 1;
    if (bVar2 != 0) {
      bVar16 = pcVar5[0x12] ^ 1;
    }
    *pbVar4 = *pbVar10;
    uVar9 = DAT_00010be4;
    uVar14 = (pbVar10[4] & 3) << 1;
    if (bVar2 == 0) {
      uVar14 = uVar14 | 1;
    }
    uVar14 = uVar14 | pbVar4[1] & 0xfffffff8;
    pbVar4[1] = (byte)uVar14;
    FUN_00000820(uVar9,pbVar10 + 5,*pbVar10,uVar14,in_r3);
    puVar11 = DAT_00010be0;
    puVar8 = DAT_00010bd8;
    iVar7 = DAT_00010bc0;
    if (bVar16 == 0) {
      *(undefined4 *)(DAT_00010bc0 + 0x200) = 0x113;
      *puVar8 = DAT_00010be8;
      *puVar11 = 1;
      *(undefined4 *)(iVar7 + 0x304) = 0x10;
      uVar15 = 0;
      goto LAB_00010a6c;
    }
    *(undefined4 *)(DAT_00010bc0 + 0x200) = 0x11b;
    *DAT_00010bd4 = (uint)*(ushort *)(pcVar5 + 0xe);
    *puVar8 = DAT_00010bdc;
    *puVar11 = 2;
    *(undefined4 *)(iVar7 + 0x304) = 0x10;
  }
  uVar15 = 1;
LAB_00010a6c:
  iVar7 = DAT_00010bc0;
  iVar12 = *piVar6;
  *(uint *)(DAT_00010bc0 + 0x52c) = (uint)*(byte *)(iVar12 + 1);
  *(uint *)(iVar7 + 0x530) = 1 << *(sbyte *)(iVar12 + 1) & 0xff;
  iVar12 = DAT_00010bc4;
  *(uint *)(iVar7 + 0x508) = (uint)*(byte *)(DAT_00010bc4 + 0x13);
  puVar13 = (uint *)(iVar12 + 0x14);
  DataMemoryBarrier(0x1b);
  do {
    ExclusiveAccess(puVar13);
    bVar3 = (bool)hasExclusiveAccess(puVar13);
  } while (!bVar3);
  *puVar13 = *puVar13 & 0xfffffffe;
  DataMemoryBarrier(0x1b);
  FUN_0001083c();
  iVar12 = DAT_00010bc8;
  *(byte **)(iVar7 + 0x504) = pbVar4;
  *(undefined4 *)(iVar12 + 0x180) = 2;
  FUN_00009fd8(1);
  *(undefined4 *)(iVar7 + 0x104) = 0;
  *(undefined4 *)(iVar7 + 0x108) = 0;
  *(undefined4 *)(iVar7 + 0x110) = 0;
  *(undefined4 *)(iVar7 + 0x10c) = 0;
  FUN_00011618(0,uVar15,0,*(undefined4 *)(iVar7 + 0x10c));
  FUN_000107c8(uVar15);
  *(undefined4 *)(DAT_00010bcc + 0x18) = 1;
  return;
}



// FUN_00011014 @ 00011014 (86 bytes, called_by=0, calls=0)

void FUN_00011014(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  
  FUN_000119d0();
  FUN_00010814();
  FUN_0001294c(uRam0001106c);
  FUN_00011a24();
  uVar1 = uRam00011074;
  *(uint *)(iRam00011070 + 0x650) = *(uint *)(iRam00011070 + 0x650) & 0xfffffffe;
  *DAT_00011078 = 0;
  *switchD_00009040::caseD_3 = 0;
  uVar3 = FUN_00010790(uVar1,0);
  FUN_000168a4((int)uVar3,(int)((ulonglong)uVar3 >> 0x20),0x20);
  puVar2 = DAT_00011080;
  *DAT_00011080 = 0;
  puVar2[1] = 0;
  FUN_00009ff4(1);
  FUN_00009ff4(0x14);
  FUN_00009ff4(10);
  return;
}



// caseD_5 @ 00011084 (418 bytes, called_by=0, calls=0)

int switchD_00009040::caseD_5(undefined4 *param_1)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  int iVar4;
  uint *puVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 *extraout_r1;
  undefined4 *puVar9;
  char *pcVar10;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  
  pcVar2 = DAT_00011228;
  if (param_1 == (undefined4 *)0x0) {
    return -0x16;
  }
  if (*DAT_00011228 != '\0') {
    FUN_00011014();
  }
  *DAT_0001122c = param_1[1];
  pcVar3 = DAT_00011230;
  puVar9 = param_1 + 4;
  pcVar10 = DAT_00011230;
  do {
    uVar8 = param_1[1];
    *(undefined4 *)pcVar10 = *param_1;
    *(undefined4 *)(pcVar10 + 4) = uVar8;
    pcVar10 = pcVar10 + 8;
    param_1 = param_1 + 2;
  } while (param_1 != puVar9);
  *(undefined4 *)pcVar10 = *param_1;
  uVar8 = DAT_00011238;
  *DAT_00011234 = 0;
  uVar6 = FUN_000168a4(uVar8,0,0x20);
  uVar8 = DAT_00011240;
  puVar9 = DAT_0001123c;
  *DAT_0001123c = 0;
  puVar9[1] = 0;
  FUN_00010754(uVar6,uVar8);
  uVar8 = DAT_0001124c;
  if ((*pcVar3 == '\0') || (uVar8 = DAT_00011244, *pcVar3 == '\x01')) {
    *extraout_r1 = uVar8;
  }
  iVar4 = DAT_00011248;
  cVar1 = pcVar3[9];
  if (cVar1 == '\x01') {
    *(undefined4 *)(DAT_00011248 + 0x53c) = 0xff;
    *(undefined4 *)(iVar4 + 0x534) = 1;
    uVar8 = 0x107;
  }
  else if (cVar1 == '\x02') {
    *(undefined4 *)(DAT_00011248 + 0x53c) = 0xffff;
    *(undefined4 *)(iVar4 + 0x534) = 2;
    uVar8 = DAT_00011250;
  }
  else {
    if (cVar1 != '\0') goto LAB_00011114;
    *(undefined4 *)(DAT_00011248 + 0x53c) = 0;
    *(undefined4 *)(iVar4 + 0x534) = 0;
    uVar8 = 0;
  }
  *(undefined4 *)(iVar4 + 0x538) = uVar8;
LAB_00011114:
  iVar4 = DAT_00011248;
  (*(code *)*extraout_r1)(pcVar3[0x11]);
  *(undefined4 *)(iVar4 + 0x51c) = 0xe7e7e7e7;
  *(undefined4 *)(iVar4 + 0x520) = 0x43434343;
  *(undefined4 *)(iVar4 + 0x524) = DAT_00011254;
  *(undefined4 *)(iVar4 + 0x528) = DAT_00011258;
  FUN_00010790();
  uVar8 = DAT_00011260;
  *DAT_0001125c = DAT_00011260;
  *DAT_00011264 = DAT_00011268;
  uVar6 = DAT_00011270;
  puVar9 = DAT_0001126c;
  *DAT_0001126c = uVar8;
  *(undefined1 *)(puVar9 + 1) = 0;
  puVar9[2] = 0;
  FUN_000168a4(uVar6,0,0x20);
  local_24 = DAT_00011274;
  local_20 = 0;
  uStack_1c = 0;
  iVar7 = FUN_000128ec(DAT_0001127c,&local_24,DAT_00011278);
  puVar5 = DAT_0001128c;
  if (iVar7 == DAT_00011280) {
    iVar7 = FUN_0001191c();
    if (iVar7 == 0) {
      uVar8 = FUN_000119c8();
      *(undefined4 *)(DAT_00011284 + 4) = uVar8;
      *(uint *)(iVar4 + 0x650) = (uint)(byte)pcVar3[0x13] | *(uint *)(iVar4 + 0x650) & 0xfffffffe;
      FUN_0000a038(1,1,0);
      FUN_0000a038(0x14,2,0);
      FUN_0000a038(10,2,0);
      FUN_00009fd8(1);
      FUN_00009fd8(0x14);
      FUN_00009fd8(10);
      *DAT_00011288 = 0;
      *pcVar2 = '\x01';
    }
    else if ((*DAT_0001128c & 7) != 0) {
      FUN_0001cab2(DAT_0001128c,1,DAT_00011298);
    }
  }
  else {
    if (((*DAT_0001128c & 7) != 0) &&
       (FUN_0001cac4(DAT_0001128c,1,DAT_00011290,iVar7), (*puVar5 & 7) != 0)) {
      FUN_0001cab2(puVar5,1,DAT_00011294);
    }
    iVar7 = -0xe;
  }
  return iVar7;
}



// FUN_0001129c @ 0001129c (12 bytes, called_by=0, calls=0)

bool FUN_0001129c(void)

{
  return *DAT_000112a8 == '\0';
}



// FUN_000112ac @ 000112ac (254 bytes, called_by=0, calls=0)

undefined4 FUN_000112ac(byte *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  bool bVar2;
  uint uVar3;
  char *pcVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  
  piVar6 = DAT_000113b8;
  iVar5 = DAT_000113b4;
  pcVar4 = DAT_000113b0;
  if (*DAT_000113ac == '\0') {
    return 0xfffffff3;
  }
  if (param_1 == (byte *)0x0) {
    return 0xffffffea;
  }
  if (((int)((*param_1 - 1) * 0x1000000) < 0) ||
     ((*DAT_000113b0 == '\0' && ((uint)(byte)DAT_000113b0[0x11] < (uint)*param_1)))) {
    return 0xffffff86;
  }
  if (*(int *)(DAT_000113b4 + 0xc) != 0) {
    return 0xfffffff4;
  }
  if (7 < param_1[1]) {
    return 0xffffffea;
  }
  uVar8 = 0;
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    uVar8 = getBasePriority();
  }
  bVar2 = (bool)isCurrentModePrivileged();
  if ((bVar2) && (uVar3 = getBasePriority(), uVar3 == 0 || 0x40 < uVar3)) {
    setBasePriority(0x40);
  }
  InstructionSynchronizationBarrier(0xf);
  if (DAT_000113b0[1] == '\0') {
    iVar9 = *(int *)(DAT_000113b4 + *(int *)(DAT_000113b4 + 4) * 4);
    FUN_00000820(iVar9,param_1,0x85,*(int *)(DAT_000113b4 + 4),param_4);
    iVar7 = DAT_000113bc;
    bVar1 = param_1[1];
    *(undefined4 *)(iVar5 + 4) = 0;
    *(byte *)(iVar7 + (uint)bVar1) = *(char *)(iVar7 + (uint)bVar1) + 1U & 3;
    *(undefined1 *)(iVar9 + 4) = *(undefined1 *)(iVar7 + (uint)param_1[1]);
  }
  else {
    if ((char)DAT_000113b8[1] != '\0') goto LAB_00011362;
    iVar9 = *DAT_000113b8;
    DAT_000113b8[2] = 0;
    *(undefined1 *)(piVar6 + 1) = 1;
    FUN_00000820(iVar9,param_1,0x85,0,param_4);
    iVar7 = DAT_000113bc;
    *(byte *)(DAT_000113bc + (uint)param_1[1]) = *(char *)(DAT_000113bc + (uint)param_1[1]) + 1U & 3
    ;
    *(undefined1 *)(iVar9 + 4) = *(undefined1 *)(iVar7 + (uint)param_1[1]);
    iVar7 = *(int *)(DAT_000113c0 + (uint)param_1[1] * 4);
    if (iVar7 == 0) {
      *(int **)(DAT_000113c0 + (uint)param_1[1] * 4) = piVar6;
    }
    else {
      do {
        iVar9 = iVar7;
        iVar7 = *(int *)(iVar9 + 8);
      } while (iVar7 != 0);
      *(int **)(iVar9 + 8) = piVar6;
    }
  }
  *(int *)(iVar5 + 0xc) = *(int *)(iVar5 + 0xc) + 1;
LAB_00011362:
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    setBasePriority(uVar8);
  }
  InstructionSynchronizationBarrier(0xf);
  if ((pcVar4[1] == '\0' && pcVar4[0x10] == '\0') && (*DAT_000113c4 == '\0')) {
    FUN_00010a48();
  }
  return 0;
}



// FUN_000113c8 @ 000113c8 (104 bytes, called_by=0, calls=0)

undefined4
FUN_000113c8(undefined1 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 uVar1;
  undefined1 uVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined1 *puVar7;
  undefined4 uVar8;
  
  iVar5 = DAT_00011434;
  if (*DAT_00011430 == '\0') {
    uVar6 = 0xfffffff3;
  }
  else if (param_1 == (undefined1 *)0x0) {
    uVar6 = 0xffffffea;
  }
  else if (*(int *)(DAT_00011434 + 0xc) == 0) {
    uVar6 = 0xffffffc3;
  }
  else {
    uVar8 = 0;
    bVar3 = (bool)isCurrentModePrivileged();
    if (bVar3) {
      uVar8 = getBasePriority();
    }
    bVar3 = (bool)isCurrentModePrivileged();
    if ((bVar3) && (uVar4 = getBasePriority(), uVar4 == 0 || 0x40 < uVar4)) {
      setBasePriority(0x40);
    }
    InstructionSynchronizationBarrier(0xf);
    puVar7 = *(undefined1 **)(DAT_00011434 + *(int *)(DAT_00011434 + 8) * 4);
    uVar1 = *puVar7;
    *param_1 = uVar1;
    param_1[1] = puVar7[1];
    param_1[2] = puVar7[2];
    param_1[4] = puVar7[4];
    uVar2 = puVar7[3];
    param_1[3] = uVar2;
    FUN_00000820(param_1 + 5,puVar7 + 5,uVar1,uVar2,param_4);
    uVar6 = 0;
    *(undefined4 *)(iVar5 + 8) = 0;
    *(int *)(iVar5 + 0xc) = *(int *)(iVar5 + 0xc) + -1;
    bVar3 = (bool)isCurrentModePrivileged();
    if (bVar3) {
      setBasePriority(uVar8);
    }
    InstructionSynchronizationBarrier(0xf);
  }
  return uVar6;
}



// FUN_00011438 @ 00011438 (66 bytes, called_by=0, calls=0)

undefined4 FUN_00011438(void)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 in_r3;
  undefined4 uVar5;
  
  uVar4 = DAT_00011484;
  iVar3 = DAT_00011480;
  if (*DAT_0001147c == '\0') {
    uVar4 = 0xfffffff3;
  }
  else {
    uVar5 = 0;
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      uVar5 = getBasePriority();
    }
    bVar1 = (bool)isCurrentModePrivileged();
    if ((bVar1) && (uVar2 = getBasePriority(), uVar2 == 0 || 0x40 < uVar2)) {
      setBasePriority(0x40);
    }
    InstructionSynchronizationBarrier(0xf);
    *(undefined4 *)(DAT_00011480 + 4) = 0;
    *(undefined4 *)(iVar3 + 8) = 0;
    *(undefined4 *)(iVar3 + 0xc) = 0;
    iVar3 = DAT_00011488;
    *(undefined1 *)(DAT_00011488 + 4) = 0;
    *(undefined4 *)(iVar3 + 8) = 0;
    FUN_000168a4(uVar4,0,0x20,iVar3,in_r3);
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      setBasePriority(uVar5);
    }
    InstructionSynchronizationBarrier(0xf);
    uVar4 = 0;
  }
  return uVar4;
}



// FUN_0001148c @ 0001148c (48 bytes, called_by=0, calls=0)

undefined4
FUN_0001148c(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  puVar1 = DAT_000114c0;
  if (*DAT_000114bc == '\0') {
    if (param_1 == (undefined4 *)0x0) {
      uVar3 = 0xffffffea;
    }
    else {
      uVar3 = *param_1;
      *DAT_000114c0 = uVar3;
      uVar4 = FUN_0001fd54(puVar1,0,param_3,uVar3,param_4);
      uVar3 = (undefined4)((ulonglong)uVar4 >> 0x20);
      uVar2 = (uint)uVar4;
      *(uint *)(DAT_000114c4 + 0x51c) =
           uVar2 << 0x18 | (uVar2 >> 8 & 0xff) << 0x10 | (uVar2 >> 0x10 & 0xff) << 8 | uVar2 >> 0x18
      ;
    }
  }
  else {
    uVar3 = 0xfffffff0;
  }
  return uVar3;
}



// FUN_000114c8 @ 000114c8 (50 bytes, called_by=0, calls=0)

undefined4
FUN_000114c8(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  if (*DAT_000114fc == '\0') {
    if (param_1 == (undefined4 *)0x0) {
      uVar3 = 0xffffffea;
    }
    else {
      uVar3 = *param_1;
      puVar1 = (undefined4 *)(DAT_00011500 + 4);
      *puVar1 = uVar3;
      uVar4 = FUN_0001fd54(puVar1,0,param_3,uVar3,param_4);
      uVar3 = (undefined4)((ulonglong)uVar4 >> 0x20);
      uVar2 = (uint)uVar4;
      *(uint *)(DAT_00011504 + 0x520) =
           uVar2 << 0x18 | (uVar2 >> 8 & 0xff) << 0x10 | (uVar2 >> 0x10 & 0xff) << 8 | uVar2 >> 0x18
      ;
    }
  }
  else {
    uVar3 = 0xfffffff0;
  }
  return uVar3;
}



// FUN_00011508 @ 00011508 (64 bytes, called_by=0, calls=0)

undefined4 FUN_00011508(int param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*DAT_00011548 == '\0') {
    if ((param_1 == 0) || (8 < param_2)) {
      uVar2 = 0xffffffea;
    }
    else {
      FUN_00000820(DAT_0001154c,param_1,param_2,0,param_4);
      iVar1 = DAT_00011550;
      *(char *)(DAT_00011550 + 0x10) = (char)param_2;
      *(char *)(iVar1 + 0x12) = (char)(0xff >> (8 - param_2 & 0xff));
      FUN_00010878();
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0xfffffff0;
  }
  return uVar2;
}



// FUN_00011554 @ 00011554 (34 bytes, called_by=0, calls=0)

uint FUN_00011554(uint param_1)

{
  byte bVar1;
  
  if (100 < param_1) {
    return 0xffffffea;
  }
  bVar1 = *DAT_00011578;
  if (bVar1 == 0) {
    *(char *)(DAT_0001157c + 0x13) = (char)param_1;
    return (uint)bVar1;
  }
  return 0xfffffff0;
}



// FUN_00011580 @ 00011580 (42 bytes, called_by=0, calls=0)

uint FUN_00011580(uint param_1)

{
  byte bVar1;
  
  bVar1 = *DAT_000115ac;
  if (bVar1 != 0) {
    return 0xfffffff0;
  }
  if (param_1 < 8) {
    *(byte *)(DAT_000115b0 + param_1) = *(char *)(DAT_000115b0 + param_1) + 3U & 3;
    return (uint)bVar1;
  }
  return 0xffffffea;
}



// FUN_000115b4 @ 000115b4 (38 bytes, called_by=0, calls=0)

void FUN_000115b4(void)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = *DAT_000115dc;
  iVar2 = (uint)bVar1 * 8;
  *(undefined4 *)(iVar2 + 0x4001f510) = DAT_000115e0;
  *(undefined4 *)(iVar2 + 0x4001f514) = DAT_000115e4;
  *(int *)(DAT_000115e8 + 0x504) = 1 << (uint)bVar1;
  return;
}



// FUN_000115ec @ 000115ec (36 bytes, called_by=0, calls=0)

void FUN_000115ec(void)

{
  int iVar1;
  
  iVar1 = (uint)*DAT_00011610 * 8;
  *(int *)(DAT_00011614 + 0x508) = 1 << (uint)*DAT_00011610;
  *(undefined4 *)(iVar1 + 0x4001f510) = 0;
  *(undefined4 *)(iVar1 + 0x4001f514) = 0;
  return;
}



// FUN_00011618 @ 00011618 (176 bytes, called_by=0, calls=0)

void FUN_00011618(uint param_1,int param_2)

{
  byte bVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  
  uVar3 = DAT_000116d0;
  bVar1 = *DAT_000116c8;
  iVar7 = DAT_000116cc + (uint)bVar1 * 8;
  *(undefined4 *)(DAT_000116d4 + 0x118) = 0;
  uVar8 = (uint)*DAT_000116d8;
  *(undefined4 *)(uVar8 * 8 + 0x4001f510) = uVar3;
  *(uint *)(uVar8 * 8 + 0x4001f514) = (param_1 & 0x3f) * 4 + 0x40001000;
  *(int *)(DAT_000116dc + (uVar8 + 0x244) * 4) = iVar7;
  iVar7 = DAT_000116e4;
  bVar2 = *DAT_000116e0;
  iVar6 = (uint)bVar2 * 8;
  *(int *)(iVar6 + 0x4001f510) = DAT_000116e4;
  *(int *)(iVar6 + 0x4001f514) = iVar7 + 0x12f08;
  uVar4 = DAT_000116ec;
  uVar5 = 1 << uVar8 | 1 << (uint)bVar2;
  if (param_2 != 0) {
    bVar2 = *DAT_000116e8;
    iVar7 = (uint)bVar2 * 8;
    *(undefined4 *)(iVar7 + 0x4001f510) = uVar3;
    uVar5 = uVar5 | 1 << (uint)bVar2;
    *(undefined4 *)(iVar7 + 0x4001f514) = uVar4;
  }
  iVar7 = (uint)bVar1 * 4;
  *(uint *)(iVar7 + 0x4001f800) = 1 << uVar8 | *(uint *)(iVar7 + 0x4001f800);
  *(uint *)(DAT_000116dc + 0x504) = uVar5;
  return;
}



// FUN_000116f0 @ 000116f0 (166 bytes, called_by=0, calls=0)

void FUN_000116f0(undefined4 param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  iVar2 = DAT_0001179c;
  uVar3 = (uint)*DAT_00011798;
  uVar5 = 1 << uVar3 | 1 << (uint)*DAT_000117a0;
  iVar4 = uVar3 * 8;
  iVar6 = (uint)*DAT_000117a0 * 8;
  if (param_2 == 0) {
    *(uint *)(DAT_0001179c + 0x508) = uVar5;
    *(undefined4 *)(iVar4 + 0x4001f510) = 0;
    *(undefined4 *)(iVar4 + 0x4001f514) = 0;
    *(undefined4 *)(iVar2 + (uVar3 + 0x244) * 4) = 0;
  }
  else {
    bVar1 = *DAT_000117a8;
    *(uint *)(DAT_0001179c + 0x508) = 1 << (uint)bVar1 | uVar5;
    *(undefined4 *)(iVar4 + 0x4001f510) = 0;
    *(undefined4 *)(iVar4 + 0x4001f514) = 0;
    *(undefined4 *)(iVar2 + (uVar3 + 0x244) * 4) = 0;
    *(undefined4 *)(iVar6 + 0x4001f510) = 0;
    *(undefined4 *)(iVar6 + 0x4001f514) = 0;
    iVar6 = (uint)bVar1 * 8;
  }
  *(undefined4 *)(iVar6 + 0x4001f510) = 0;
  *(undefined4 *)(iVar6 + 0x4001f514) = 0;
  *(uint *)((uint)*DAT_000117a4 * 4 + 0x4001f800) =
       *(uint *)((uint)*DAT_000117a4 * 4 + 0x4001f800) & ~(1 << uVar3);
  return;
}



// FUN_0001191c @ 0001191c (128 bytes, called_by=0, calls=0)

undefined4 FUN_0001191c(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 in_r3;
  
  iVar3 = DAT_000119a0;
  iVar2 = FUN_0001280c(DAT_0001199c);
  if ((((iVar2 == iVar3) && (iVar2 = FUN_0001280c(DAT_000119a4), iVar2 == iVar3)) &&
      (iVar2 = FUN_0001280c(DAT_000119a8), iVar2 == iVar3)) &&
     (((iVar2 = FUN_0001280c(DAT_000119ac), iVar2 == iVar3 &&
       (iVar2 = FUN_0001280c(DAT_000119b0), iVar2 == iVar3)) &&
      (iVar2 = FUN_0001280c(DAT_000119b4), iVar2 == iVar3)))) {
    iVar3 = FUN_00012840(DAT_000119b8);
    if (iVar3 == iVar2) {
      return 0;
    }
    uVar4 = *DAT_000119bc;
    uVar1 = DAT_000119c0;
  }
  else {
    uVar4 = *DAT_000119bc;
    iVar3 = iVar2;
    uVar1 = DAT_000119c4;
  }
  if ((uVar4 & 7) != 0) {
    FUN_0001cac4(DAT_000119bc,1,uVar1,iVar3,in_r3);
  }
  return 0xffffffed;
}



// FUN_000119c8 @ 000119c8 (4 bytes, called_by=0, calls=0)

undefined4 FUN_000119c8(void)

{
  return DAT_000119cc;
}



// FUN_000119d0 @ 000119d0 (60 bytes, called_by=0, calls=0)

void FUN_000119d0(void)

{
  *(uint *)(DAT_00011a20 + 0x508) =
       1 << *DAT_00011a0c | 1 << *DAT_00011a10 | 1 << *DAT_00011a14 | 1 << *DAT_00011a18 |
       1 << *DAT_00011a1c | 1;
  return;
}



// FUN_00011a24 @ 00011a24 (178 bytes, called_by=0, calls=0)

int FUN_00011a24(void)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  bool bVar6;
  
  iVar2 = FUN_00012818(*DAT_00011a88);
  iVar4 = iVar2;
  if ((((iVar2 != DAT_00011a8c) ||
       (iVar3 = FUN_00012818(*DAT_00011a90), iVar4 = iVar3, iVar3 != iVar2)) ||
      (iVar2 = FUN_00012818(*DAT_00011a94), iVar4 = iVar2, iVar2 != iVar3)) ||
     (((iVar3 = FUN_00012818(*DAT_00011a98), iVar4 = iVar3, iVar3 != iVar2 ||
       (iVar2 = FUN_00012818(*DAT_00011a9c), iVar4 = iVar2, iVar2 != iVar3)) ||
      (iVar4 = FUN_00012818(*DAT_00011aa0), iVar4 != iVar2)))) {
    return iVar4;
  }
  uVar5 = (uint)*DAT_00011aa4;
  *(undefined4 *)(uVar5 * 8 + 0x4001f004) = 1;
  puVar1 = DAT_00012864;
  iVar4 = DAT_00011cbc;
  if (-1 < (int)((*DAT_00012864 >> uVar5) << 0x1f)) {
    do {
      DataMemoryBarrier(0x1b);
      do {
        ExclusiveAccess(puVar1);
        bVar6 = *puVar1 == *puVar1;
        if (!bVar6) goto LAB_00011caa;
        bVar6 = (bool)hasExclusiveAccess(puVar1);
      } while (!bVar6);
      *puVar1 = 1 << uVar5 | *puVar1;
LAB_00011caa:
      DataMemoryBarrier(0x1b);
      iVar4 = DAT_00011cb8;
    } while (!bVar6);
  }
  return iVar4;
}



// FUN_00011c38 @ 00011c38 (62 bytes, called_by=0, calls=0)

undefined4 FUN_00011c38(uint *param_1,undefined1 *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  bool bVar3;
  
  do {
    uVar2 = *param_1;
    if (uVar2 == 0) {
      return DAT_00011c7c;
    }
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(param_1);
      bVar3 = *param_1 == uVar2;
      if (!bVar3) goto LAB_00011c66;
      bVar3 = (bool)hasExclusiveAccess(param_1);
    } while (!bVar3);
    *param_1 = uVar2 & ~(1 << (0x1fU - LZCOUNT(uVar2) & 0xff));
LAB_00011c66:
    uVar1 = DAT_00011c78;
    DataMemoryBarrier(0x1b);
    if (bVar3) {
      *param_2 = (char)(0x1fU - LZCOUNT(uVar2));
      return uVar1;
    }
  } while( true );
}



// FUN_00011eb0 @ 00011eb0 (28 bytes, called_by=0, calls=0)

undefined4 FUN_00011eb0(uint *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar2 = *param_1 >> 5;
  *param_1 = *param_1 & 0x1f;
  if (uVar2 != 0) {
    uVar1 = DAT_00011ecc;
    if (uVar2 != 1) {
      uVar1 = 0;
    }
    return uVar1;
  }
  return 0x50000000;
}



// FUN_00011ed0 @ 00011ed0 (16 bytes, called_by=0, calls=0)

uint FUN_00011ed0(uint param_1)

{
  return (param_1 & 0x1f) + (uint)*(byte *)(DAT_00011ee0 + (param_1 >> 5)) & 0xff;
}



// FUN_00011ee4 @ 00011ee4 (58 bytes, called_by=0, calls=0)

void FUN_00011ee4(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar4;
  
  uVar4 = FUN_00011ed0();
  iVar1 = DAT_00011f20;
  uVar2 = (undefined4)((ulonglong)uVar4 >> 0x20);
  uVar3 = (uint)*(ushort *)(DAT_00011f20 + ((int)uVar4 + 8) * 2);
  if ((int)(uVar3 << 0x17) < 0) {
    uVar3 = (uVar3 << 0x13) >> 0x1c;
    (**(code **)(DAT_00011f20 + uVar3 * 8))
              (param_1,uVar2,*(undefined4 *)(DAT_00011f20 + uVar3 * 8 + 4));
  }
  UNRECOVERED_JUMPTABLE = *(code **)(iVar1 + 8);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00011f1a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(param_1,uVar2,*(undefined4 *)(iVar1 + 0xc));
    return;
  }
  return;
}



// FUN_00011f24 @ 00011f24 (18 bytes, called_by=0, calls=0)

ushort FUN_00011f24(void)

{
  int iVar1;
  
  iVar1 = FUN_00011ed0();
  return *(ushort *)(DAT_00011f38 + (iVar1 + 8) * 2) >> 0xd;
}



// FUN_00011f3c @ 00011f3c (20 bytes, called_by=0, calls=0)

uint FUN_00011f3c(void)

{
  int iVar1;
  
  iVar1 = FUN_00011ed0();
  return ((uint)*(ushort *)(DAT_00011f50 + (iVar1 + 8) * 2) << 0x1e) >> 0x1f;
}



// FUN_00011f54 @ 00011f54 (20 bytes, called_by=0, calls=0)

uint FUN_00011f54(void)

{
  int iVar1;
  
  iVar1 = FUN_00011ed0();
  return ((uint)*(ushort *)(DAT_00011f68 + (iVar1 + 8) * 2) << 0x1a) >> 0x1f;
}



// FUN_00011fac @ 00011fac (10 bytes, called_by=0, calls=0)

int FUN_00011fac(void)

{
  ushort uVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  ushort *puVar6;
  bool bVar7;
  
  iVar4 = FUN_00011ed0();
  iVar3 = DAT_00011ffc;
  iVar4 = iVar4 + 8;
  uVar1 = *(ushort *)(DAT_00011ffc + iVar4 * 2);
  if ((int)((uint)uVar1 << 0x17) < 0) {
    uVar5 = ((uint)uVar1 << 0x13) >> 0x1c;
    *(ushort *)(DAT_00011ffc + iVar4 * 2) = uVar1 & 0xe0ff;
    puVar6 = (ushort *)(iVar3 + 0xe);
    iVar4 = 0;
    while( true ) {
      puVar6 = puVar6 + 1;
      if (((*puVar6 & 0x100) != 0) && (uVar5 == ((uint)*puVar6 << 0x13) >> 0x1c)) break;
      iVar4 = iVar4 + 1;
      if (iVar4 == 0x2a) {
        *(undefined4 *)(iVar3 + uVar5 * 8) = 0;
        puVar2 = DAT_00012000;
        iVar3 = DAT_00011cbc;
        if (-1 < (int)((*DAT_00012000 >> uVar5) << 0x1f)) {
          do {
            DataMemoryBarrier(0x1b);
            do {
              ExclusiveAccess(puVar2);
              bVar7 = *puVar2 == *puVar2;
              if (!bVar7) goto LAB_00011caa;
              bVar7 = (bool)hasExclusiveAccess(puVar2);
            } while (!bVar7);
            *puVar2 = 1 << uVar5 | *puVar2;
LAB_00011caa:
            DataMemoryBarrier(0x1b);
            iVar3 = DAT_00011cb8;
          } while (!bVar7);
        }
        return iVar3;
      }
    }
  }
  return iVar4;
}



// FUN_00012004 @ 00012004 (86 bytes, called_by=0, calls=0)

uint FUN_00012004(uint param_1,uint param_2)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = 0;
  for (uVar4 = 0; uVar4 != param_2; uVar4 = uVar4 + 1) {
    uVar3 = 1 << (uVar4 & 0xff);
    if (((param_1 & uVar3) != 0) &&
       (piVar2 = (int *)((uVar4 & 0xff) * 4 + 0x40006100), *piVar2 != 0)) {
      *piVar2 = 0;
      uVar1 = uVar1 | uVar3;
    }
  }
  if (*(int *)(DAT_0001205c + 0x17c) != 0) {
    *(undefined4 *)(DAT_0001205c + 0x17c) = 0;
    uVar1 = uVar1 | 0x80000000;
  }
  return uVar1;
}



// FUN_00012254 @ 00012254 (240 bytes, called_by=0, calls=0)

undefined4 FUN_00012254(int *param_1,uint param_2,undefined4 param_3,byte *param_4)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  undefined4 uVar5;
  ushort uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined1 local_21 [5];
  
  uVar10 = FUN_00011ed0(param_2,param_3);
  if ((int)((ulonglong)uVar10 >> 0x20) != 0) {
    uVar11 = FUN_00011f3c(param_2);
    iVar7 = (int)((ulonglong)uVar11 >> 0x20);
    if ((int)uVar11 == 0) {
      uVar11 = FUN_00011f54(param_2);
      iVar7 = (int)((ulonglong)uVar11 >> 0x20);
      if ((int)uVar11 != 0) {
        return DAT_00012348;
      }
    }
    iVar4 = DAT_00012344;
    iVar8 = (int)uVar10 + 8;
    if (((*(ushort *)(DAT_00012344 + iVar8 * 2) & 0x1c) != 0) && (*(char *)(iVar7 + 1) == '\x01')) {
      return DAT_00012348;
    }
    local_21[0] = 1;
    FUN_0001fe52(param_2,local_21,iVar7 + 1,iVar7 + 2,iVar7,0);
    *(ushort *)(iVar4 + iVar8 * 2) = *(ushort *)(iVar4 + iVar8 * 2) | 3;
  }
  uVar5 = DAT_0001234c;
  if ((param_4 != (byte *)0x0) &&
     (iVar4 = FUN_00011f3c(param_2), iVar7 = DAT_00012344, uVar5 = DAT_00012348, iVar4 != 0)) {
    bVar3 = *param_4;
    *(undefined4 *)(*param_1 + (bVar3 + 0x144) * 4) = 0;
    iVar4 = (int)uVar10 + 8;
    uVar6 = *(ushort *)(iVar7 + iVar4 * 2) & 0x1fdf;
    *(ushort *)(iVar7 + iVar4 * 2) = uVar6;
    bVar1 = param_4[1];
    uVar5 = DAT_0001234c;
    if (bVar1 != 0) {
      bVar2 = param_4[2];
      iVar8 = *param_1 + (uint)bVar3 * 4;
      *(uint *)(iVar8 + 0x510) = *(uint *)(iVar8 + 0x510) & 0xffecc0ff;
      uVar9 = *(uint *)(iVar8 + 0x510);
      *(ushort *)(iVar7 + iVar4 * 2) = uVar6 | (ushort)bVar3 << 0xd | 0x20;
      *(uint *)(iVar8 + 0x510) =
           (param_2 & 0x3f) << 8 | (bVar1 & 3) << 0x10 | (bVar2 & 1) << 0x14 | uVar9;
      uVar5 = DAT_0001234c;
    }
  }
  return uVar5;
}



// FUN_0001280c @ 0001280c (8 bytes, called_by=0, calls=0)

void FUN_0001280c(undefined4 param_1)

{
  FUN_00011c38(DAT_00012814,param_1);
  return;
}



// FUN_00012818 @ 00012818 (28 bytes, called_by=0, calls=0)

undefined4 FUN_00012818(uint param_1)

{
  uint *puVar1;
  undefined4 uVar2;
  uint uVar3;
  bool bVar4;
  
  puVar1 = DAT_00012838;
  uVar3 = 1 << (param_1 & 0xff);
  if ((uVar3 & 0x7ffff) == 0) {
    return DAT_0001283c;
  }
  *(uint *)(DAT_00012834 + 0x508) = uVar3;
  uVar2 = DAT_00011cbc;
  if (-1 < (int)((*puVar1 >> (param_1 & 0xff)) << 0x1f)) {
    do {
      DataMemoryBarrier(0x1b);
      do {
        ExclusiveAccess(puVar1);
        bVar4 = *puVar1 == *puVar1;
        if (!bVar4) goto LAB_00011caa;
        bVar4 = (bool)hasExclusiveAccess(puVar1);
      } while (!bVar4);
      *puVar1 = 1 << (param_1 & 0xff) | *puVar1;
LAB_00011caa:
      DataMemoryBarrier(0x1b);
      uVar2 = DAT_00011cb8;
    } while (!bVar4);
  }
  return uVar2;
}



// FUN_00012840 @ 00012840 (8 bytes, called_by=0, calls=0)

void FUN_00012840(undefined4 param_1)

{
  FUN_00011c38(DAT_00012848,param_1);
  return;
}



// FUN_00012868 @ 00012868 (120 bytes, called_by=0, calls=0)

undefined4 FUN_00012868(int *param_1,uint *param_2)

{
  undefined4 *puVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  
  uVar12 = *param_2;
  uVar10 = DAT_000128e0 / uVar12;
  uVar7 = DAT_000128e8;
  if ((((DAT_000128e0 == uVar12 * uVar10) && (uVar12 <= DAT_000128e0)) &&
      ((uVar10 - 1 & uVar10) == 0)) && (uVar10 < 0x201)) {
    iVar8 = *param_1;
    bVar2 = *(byte *)((int)param_2 + 5);
    *(uint *)(iVar8 + 0x504) = (byte)param_2[1] & 3 | *(uint *)(iVar8 + 0x504) & 0xfffffffc;
    bVar4 = (byte)uVar10;
    bVar5 = (byte)(uVar10 >> 8);
    bVar6 = (byte)(uVar10 >> 0x10);
    bVar3 = (byte)(uVar10 >> 0x18);
    *(uint *)(iVar8 + 0x508) = *(uint *)(iVar8 + 0x508) & 0xfffffffc | bVar2 & 3;
    *(int *)(iVar8 + 0x510) =
         LZCOUNT((uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1) << 1 | bVar4 >> 2 & 1) << 1 |
                                 bVar4 >> 3 & 1) << 1 | bVar4 >> 4 & 1) << 1 | bVar4 >> 5 & 1) << 1
                              | bVar4 >> 6 & 1) << 1 | bVar4 >> 7) << 0x18 |
                 (uint)(byte)((((((((bVar5 & 1) << 1 | bVar5 >> 1 & 1) << 1 | bVar5 >> 2 & 1) << 1 |
                                 bVar5 >> 3 & 1) << 1 | bVar5 >> 4 & 1) << 1 | bVar5 >> 5 & 1) << 1
                              | bVar5 >> 6 & 1) << 1 | bVar5 >> 7) << 0x10 |
                 (uint)(byte)((((((((bVar6 & 1) << 1 | bVar6 >> 1 & 1) << 1 | bVar6 >> 2 & 1) << 1 |
                                 bVar6 >> 3 & 1) << 1 | bVar6 >> 4 & 1) << 1 | bVar6 >> 5 & 1) << 1
                              | bVar6 >> 6 & 1) << 1 | bVar6 >> 7) << 8 |
                 (uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1) << 1 | bVar3 >> 2 & 1) << 1 |
                                 bVar3 >> 3 & 1) << 1 | bVar3 >> 4 & 1) << 1 | bVar3 >> 5 & 1) << 1
                              | bVar3 >> 6 & 1) << 1 | bVar3 >> 7));
    iVar8 = *param_1;
    iVar11 = 0x40;
    iVar9 = iVar8 + 0x100;
    do {
      *(undefined4 *)(iVar9 + iVar11) = 0;
      puVar1 = (undefined4 *)(iVar9 + iVar11);
      iVar11 = iVar11 + 4;
    } while (iVar11 != 0x58);
    FUN_00009fd8((iVar8 << 0xc) >> 0x18,*puVar1);
    uVar7 = DAT_000128e4;
  }
  return uVar7;
}



// FUN_000128ec @ 000128ec (60 bytes, called_by=0, calls=0)

int FUN_000128ec(int param_1,int param_2,undefined4 param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = DAT_00012928;
  bVar1 = *(byte *)(param_1 + 4);
  iVar4 = (uint)bVar1 * 0xc;
  iVar5 = DAT_00012928 + iVar4;
  iVar3 = DAT_00012930;
  if (*(char *)(iVar5 + 8) == '\0') {
    *(undefined4 *)(DAT_00012928 + iVar4) = param_3;
    iVar3 = DAT_0001292c;
    if (param_2 != 0) {
      *(undefined4 *)(iVar5 + 4) = *(undefined4 *)(param_2 + 8);
      iVar3 = FUN_00012868();
    }
    *(bool *)((uint)bVar1 * 0xc + iVar2 + 8) = iVar3 == DAT_0001292c;
  }
  return iVar3;
}



// FUN_00012934 @ 00012934 (20 bytes, called_by=0, calls=0)

void FUN_00012934(int *param_1)

{
  *(undefined4 *)(*param_1 + 0x10) = 1;
  *(undefined1 *)((uint)*(byte *)(param_1 + 1) * 0xc + DAT_00012948 + 8) = 1;
  return;
}



// FUN_0001294c @ 0001294c (56 bytes, called_by=0, calls=0)

void FUN_0001294c(int *param_1)

{
  FUN_00009ff4((*param_1 << 0xc) >> 0x18);
  *(undefined4 *)(*param_1 + 0x200) = 0;
  *(undefined4 *)(*param_1 + 0x308) = 0xffffffff;
  FUN_00012934(param_1);
  *(undefined1 *)((uint)*(byte *)(param_1 + 1) * 0xc + DAT_00012984 + 8) = 0;
  return;
}



// FUN_00012c9c @ 00012c9c (30 bytes, called_by=0, calls=0)

void FUN_00012c9c(int *param_1)

{
  byte bVar1;
  int iVar2;
  
  iVar2 = *param_1;
  bVar1 = *(byte *)(param_1 + 1);
  *(undefined4 *)(iVar2 + 0x308) = DAT_00012cbc;
  *(undefined4 *)(iVar2 + 0x500) = 0;
  *(undefined1 *)((uint)bVar1 * 0xc + DAT_00012cc0 + 8) = 1;
  return;
}



// FUN_00012cc4 @ 00012cc4 (64 bytes, called_by=0, calls=0)

undefined4 FUN_00012cc4(int *param_1,uint param_2,uint param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar1 = DAT_00012d08;
  uVar2 = DAT_00012d0c;
  if (((*(char *)((uint)*(byte *)(param_1 + 1) * 0xc + DAT_00012d04 + 8) == '\x02') &&
      (uVar2 = DAT_00012d10, (param_2 & 0xe0000000) == 0x20000000)) &&
     (uVar2 = DAT_00012d14, param_3 < 0x10000)) {
    iVar3 = *param_1;
    *(uint *)(iVar3 + 0x544) = param_2;
    *(uint *)(iVar3 + 0x548) = param_3;
    *(undefined4 *)(iVar3 + 0x34) = 1;
    uVar2 = uVar1;
  }
  return uVar2;
}



// FUN_00012d18 @ 00012d18 (64 bytes, called_by=0, calls=0)

undefined4 FUN_00012d18(int *param_1,uint param_2,uint param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar1 = DAT_00012d5c;
  uVar2 = DAT_00012d60;
  if (((*(char *)((uint)*(byte *)(param_1 + 1) * 0xc + DAT_00012d58 + 8) == '\x02') &&
      (uVar2 = DAT_00012d64, (param_2 & 0xe0000000) == 0x20000000)) &&
     (uVar2 = DAT_00012d68, param_3 < 0x10000)) {
    iVar3 = *param_1;
    *(uint *)(iVar3 + 0x534) = param_2;
    *(uint *)(iVar3 + 0x538) = param_3;
    *(undefined4 *)(iVar3 + 0x30) = 1;
    uVar2 = uVar1;
  }
  return uVar2;
}



// FUN_00012d84 @ 00012d84 (74 bytes, called_by=0, calls=0)

void FUN_00012d84(int *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  
  uVar4 = *param_2;
  uVar2 = FUN_00001904(param_2[1] << 0xf,(uint)param_2[1] >> 0x11,1000,0,param_4);
  iVar3 = *param_1;
  *(undefined4 *)(iVar3 + 0x50c) = uVar4;
  *(undefined4 *)(iVar3 + 0x504) = uVar2;
  bVar1 = *(byte *)(param_1 + 1);
  if (*(int *)((uint)bVar1 * 0xc + DAT_00012dd0 + 4) != 0) {
    iVar3 = *param_1;
    *(undefined4 *)(iVar3 + 0x100) = 0;
    FUN_00009fd8((iVar3 << 0xc) >> 0x18,0xc,(uint)bVar1,*(undefined4 *)(iVar3 + 0x100));
    *(undefined4 *)(iVar3 + 0x304) = 1;
  }
  return;
}



// FUN_00012e08 @ 00012e08 (34 bytes, called_by=0, calls=0)

undefined4 FUN_00012e08(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = *(char *)(DAT_00012e2c + (uint)*(byte *)(param_1 + 4) * 0xc);
  uVar2 = DAT_00012e34;
  if ((cVar1 != '\0') && (uVar2 = DAT_00012e38, cVar1 != '\x02')) {
    FUN_00012d84();
    uVar2 = DAT_00012e30;
  }
  return uVar2;
}



// FUN_00012e3c @ 00012e3c (20 bytes, called_by=0, calls=0)

void FUN_00012e3c(undefined4 *param_1)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 1);
  *(undefined4 *)*param_1 = 1;
  *(undefined1 *)(DAT_00012e50 + (uint)bVar1 * 0xc) = 2;
  return;
}



// FUN_00012ea8 @ 00012ea8 (14 bytes, called_by=0, calls=0)

void FUN_00012ea8(int *param_1,int param_2)

{
  *(undefined4 *)(*param_1 + (param_2 + 0x180) * 4) = DAT_00012eb8;
  return;
}



// FUN_00012f50 @ 00012f50 (130 bytes, called_by=0, calls=0)

undefined4 FUN_00012f50(int param_1,int param_2,uint param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  
  iVar1 = DAT_00012fd4;
  iVar7 = param_1 * 0x18 + DAT_00012fd4;
  iVar4 = param_1 * 0x18 + 0x18 + DAT_00012fd4;
  uVar3 = *(uint *)(iVar7 + 0x24);
  uVar6 = *(uint *)(iVar7 + 0x28);
  iVar2 = *(int *)(iVar4 + 4) + uVar3;
  if (uVar3 < uVar6) {
    if ((uVar6 - 1) - uVar3 < param_3) {
      return 0;
    }
  }
  else {
    iVar7 = *(int *)(iVar7 + 0x20);
    iVar5 = iVar7 - uVar3;
    if (iVar5 - 1U < param_3) {
      uVar6 = (iVar5 - 1U) + uVar6;
      if (uVar6 < param_3) {
        return 0;
      }
      FUN_00000820(iVar2,param_2,iVar5,uVar6,param_4);
      iVar7 = (uVar3 + param_3) - iVar7;
      if (iVar7 != 0) {
        FUN_00000820(*(undefined4 *)(iVar4 + 4),param_2 + iVar5,iVar7);
      }
      goto LAB_00012fb4;
    }
  }
  FUN_00000820(iVar2);
  iVar7 = uVar3 + param_3;
LAB_00012fb4:
  *(int *)(param_1 * 0x18 + iVar1 + 0x24) = iVar7;
  return 1;
}



// FUN_00013074 @ 00013074 (36 bytes, called_by=0, calls=0)

void FUN_00013074(undefined4 param_1,undefined4 param_2)

{
  undefined4 extraout_r1;
  
  if (2 < (*DAT_00013098 & 7)) {
    thunk_FUN_0001cab2(DAT_00013098,3,DAT_0001309c);
    param_2 = extraout_r1;
  }
  FUN_000152ec(DAT_000130a0,param_2,0,0);
  return;
}



// FUN_00013204 @ 00013204 (98 bytes, called_by=0, calls=0)

void FUN_00013204(byte *param_1)

{
  undefined4 local_40;
  undefined4 local_3c;
  uint uStack_38;
  undefined4 local_34;
  byte *local_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined2 local_20;
  
  if (2 < (*DAT_00013268 & 7)) {
    uStack_38 = (uint)*param_1;
    local_34 = *(undefined4 *)(param_1 + 1);
    uStack_2c = *(undefined4 *)(param_1 + 0x15);
    local_28 = *(undefined4 *)(param_1 + 0x19);
    uStack_24 = *(undefined4 *)(param_1 + 0x1d);
    local_30 = param_1 + 5;
    local_20 = 0x402;
    local_3c = DAT_0001326c;
    local_40 = DAT_00013270;
    FUN_00007b60(DAT_00013268,0x44c0,&local_40,0);
  }
  return;
}



// FUN_00013358 @ 00013358 (82 bytes, called_by=0, calls=0)

void FUN_00013358(undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  puVar1 = DAT_000133b0;
  uVar2 = *(undefined4 *)(param_2 + 0x14);
  uVar3 = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)((int)DAT_000133b0 + 5) = *(undefined4 *)(DAT_000133ac + 4);
  *(undefined1 *)(puVar1 + 1) = 1;
  FUN_000168a4(DAT_000133b4,0,0x10);
  FUN_00016a4c(DAT_000133b4,DAT_000133b8);
  *(undefined4 *)((int)puVar1 + 0x19) = param_1;
  *(undefined4 *)((int)puVar1 + 0x1d) = uVar3;
  *(undefined4 *)((int)puVar1 + 0x21) = uVar2;
  *puVar1 = DAT_000133bc;
  DataSynchronizationBarrier(0xf);
  *(uint *)(DAT_000133c0 + 0xc) = DAT_000133c4 | *(uint *)(DAT_000133c0 + 0xc) & 0x700;
  DataSynchronizationBarrier(0xf);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



// FUN_000133c8 @ 000133c8 (58 bytes, called_by=0, calls=0)

void FUN_000133c8(char *param_1)

{
  char *pcVar1;
  char *pcVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  
  pcVar1 = DAT_00013404;
  pcVar4 = DAT_00013404 + 0x20;
  pcVar6 = DAT_00013404;
  do {
    pcVar5 = pcVar6 + 4;
    pcVar2 = param_1 + 4;
    *(undefined4 *)param_1 = *(undefined4 *)pcVar6;
    param_1 = pcVar2;
    pcVar6 = pcVar5;
  } while (pcVar5 != pcVar4);
  *pcVar2 = *pcVar5;
  if (*pcVar1 != '\0') {
    *pcVar1 = '\0';
    iVar3 = FUN_000082bc(DAT_00013408,DAT_00013404,0x21);
    if (iVar3 == 0) {
      FUN_00008330(DAT_00013408);
      return;
    }
  }
  return;
}



// FUN_00013578 @ 00013578 (62 bytes, called_by=0, calls=0)

void FUN_00013578(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_1c;
  undefined1 auStack_1b [2];
  undefined1 uStack_19;
  uint uStack_18;
  undefined1 local_14;
  undefined1 uStack_13;
  undefined2 uStack_12;
  
  local_24 = *DAT_000135b8;
  _local_1c = CONCAT31((int3)((uint)DAT_000135b8[2] >> 8),4);
  uVar1 = _local_1c;
  _local_14 = CONCAT22(0x101,CONCAT11(0x80,(char)DAT_000135b8[4]));
  uStack_18 = DAT_000135b8[3] & 0xffff;
  uStack_19 = (undefined1)((uint)DAT_000135b8[2] >> 0x18);
  _local_1c = CONCAT12(6,(short)uVar1);
  local_20 = param_1;
  switchD_00009040::caseD_5(&local_24);
  return;
}



// FUN_000135bc @ 000135bc (44 bytes, called_by=0, calls=0)

int FUN_000135bc(undefined4 param_1)

{
  int iVar1;
  undefined4 in_stack_00000000;
  undefined1 auStack_48 [72];
  
  iVar1 = FUN_00016984(auStack_48,0x40,DAT_000135e8,in_stack_00000000,param_1);
  if (-1 < iVar1) {
    if (iVar1 < 0x40) {
      iVar1 = FUN_0001cc36(auStack_48);
    }
    else {
      iVar1 = -0xc;
    }
  }
  return iVar1;
}



// FUN_000135ec @ 000135ec (230 bytes, called_by=0, calls=0)

int FUN_000135ec(void)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  undefined4 in_r3;
  code *pcVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined2 local_24;
  undefined4 uStack_20;
  
  uStack_20 = in_r3;
  iVar2 = FUN_00008610();
  puVar1 = DAT_000136d4;
  if (iVar2 == -0x2d) {
    if (((*DAT_000136d4 & 7) != 0) &&
       (FUN_0001cab2(DAT_000136d4,1,DAT_000136d8), (*puVar1 & 7) != 0)) {
      FUN_0001cab2(puVar1,1,DAT_000136dc);
    }
    pcVar4 = *(code **)(*(int *)(DAT_000136e0 + 8) + 8);
    if (pcVar4 == (code *)0x0) {
      iVar2 = -0x58;
    }
    else {
      iVar2 = (*pcVar4)(DAT_000136e0,0x7d000,0x3000);
      if (iVar2 == 0) {
        iVar2 = FUN_00008610();
        if (iVar2 == 0) {
          if (2 < (*puVar1 & 7)) {
            FUN_0001cab2(DAT_000136d4,3,DAT_000136e4);
          }
          goto LAB_00013658;
        }
        goto LAB_000136c4;
      }
    }
    uVar5 = *puVar1;
    uVar7 = DAT_000136f4;
  }
  else {
    if (iVar2 == 0) {
LAB_00013658:
      puVar1 = DAT_000136d4;
      iVar2 = 0;
      puVar6 = DAT_000136e8;
      do {
        uVar7 = *puVar6;
        iVar3 = FUN_00008330(uVar7);
        if ((iVar3 != 0) && ((*puVar1 & 7) != 0)) {
          local_2c = DAT_000136ec;
          local_24 = 0x200;
          local_30 = DAT_000136f0;
          uStack_28 = uVar7;
          FUN_00007b60(DAT_000136d4,0x1c40,&local_30,0);
        }
        iVar2 = iVar2 + 1;
        puVar6 = puVar6 + 1;
      } while (iVar2 != 4);
      return 0;
    }
LAB_000136c4:
    uVar5 = *DAT_000136d4;
    uVar7 = DAT_000136f8;
  }
  if ((uVar5 & 7) != 0) {
    FUN_0001cab2(DAT_000136d4,1,uVar7);
  }
  return iVar2;
}



// FUN_000136fc @ 000136fc (62 bytes, called_by=0, calls=0)

undefined4 FUN_000136fc(undefined4 param_1)

{
  int *piVar1;
  undefined4 local_14;
  undefined4 uStack_10;
  undefined4 local_c;
  
  uStack_10 = DAT_00013704;
  local_14 = param_1;
  local_c = param_1;
  FUN_00014d3c(DAT_000083b4,DAT_00013704,0xffffffff,0xffffffff,param_1);
  for (piVar1 = (int *)*DAT_000083b8; piVar1 != (int *)0x0; piVar1 = (int *)*piVar1) {
    (**(code **)piVar1[1])(piVar1,&local_14);
  }
  FUN_00014e2c(DAT_000083b4);
  return 0;
}



// FUN_0001386c @ 0001386c (58 bytes, called_by=0, calls=0)

void FUN_0001386c(void)

{
  int iVar1;
  
  iVar1 = FUN_0000a9bc(DAT_000138a8);
  if (iVar1 == 0) {
    if (2 < (*DAT_000138ac & 7)) {
      FUN_0001cab2(DAT_000138ac,3,DAT_000138b4);
      return;
    }
  }
  else if ((*DAT_000138ac & 6) != 0) {
    FUN_0001cac4(DAT_000138ac,2,DAT_000138b0);
    return;
  }
  return;
}



// FUN_000138c4 @ 000138c4 (70 bytes, called_by=0, calls=0)

void FUN_000138c4(undefined4 param_1)

{
  bool bVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  puVar3 = DAT_000138e8;
  for (puVar4 = DAT_000138e4; puVar4 < puVar3; puVar4 = puVar4 + 1) {
    (*(code *)*puVar4)();
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    getBasePriority();
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if ((bVar1) && (uVar2 = getBasePriority(), uVar2 == 0 || 0x40 < uVar2)) {
    setBasePriority(0x40);
  }
  InstructionSynchronizationBarrier(0xf);
  FUN_000105e8();
  FUN_00009e20(param_1);
  FUN_0001bb8c(DAT_00006b94);
  do {
    FUN_0001d884();
  } while( true );
}



// FUN_000138ec @ 000138ec (62 bytes, called_by=0, calls=0)

char * FUN_000138ec(uint param_1,char *param_2)

{
  char *pcVar1;
  
  if (param_1 < 3) {
    pcVar1 = DAT_00013934;
    if (param_1 == 0) {
      return (char *)0x0;
    }
    for (; pcVar1 < DAT_00013938; pcVar1 = pcVar1 + 0xc) {
      if (*pcVar1 == *param_2) {
        return pcVar1;
      }
    }
  }
  else {
    pcVar1 = DAT_0001392c;
    if (param_1 == 3) {
      for (; pcVar1 < DAT_00013930; pcVar1 = pcVar1 + 0xc) {
        if (*pcVar1 == *param_2) {
          return pcVar1;
        }
      }
    }
  }
  return (char *)0x0;
}



// FUN_0001393c @ 0001393c (136 bytes, called_by=0, calls=0)

undefined4 FUN_0001393c(undefined4 param_1,undefined1 *param_2,undefined1 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  
  if (*DAT_000139c4 << 0x1d < 0) {
    local_24 = DAT_000139c8;
    local_20 = DAT_000139cc;
    local_28 = 3;
    FUN_00007b60(DAT_000139c4,0x1900,&local_28,0);
  }
  iVar1 = DAT_000139d8;
  if (*(int *)(DAT_000139d0 + 0xf0) == DAT_000139d4) {
    uVar3 = *(undefined4 *)(DAT_000139d0 + 0xf8);
  }
  else {
    uVar3 = 0;
  }
  uVar2 = FUN_00013ac4();
  *param_3 = 0x19;
  *param_2 = 1;
  *(undefined4 *)(param_2 + 1) = 0x1304;
  param_2[10] = 10;
  param_2[5] = 2;
  param_2[0xf] = 4;
  *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(iVar1 + 4);
  *(undefined4 *)(param_2 + 0x15) = uVar2;
  *(undefined4 *)(param_2 + 6) = 0;
  *(undefined4 *)(param_2 + 0xb) = uVar3;
  param_2[0x14] = 9;
  return 0;
}



// FUN_00013a5c @ 00013a5c (22 bytes, called_by=0, calls=0)

void FUN_00013a5c(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  *param_1 = 0;
  puVar1 = DAT_00013a74;
  if ((undefined4 *)DAT_00013a74[1] == (undefined4 *)0x0) {
    *DAT_00013a74 = param_1;
    puVar1[1] = param_1;
    return;
  }
  *(undefined4 *)DAT_00013a74[1] = param_1;
  puVar1[1] = param_1;
  return;
}



// FUN_00013a78 @ 00013a78 (20 bytes, called_by=0, calls=0)

void FUN_00013a78(int param_1)

{
  int *piVar1;
  
  for (piVar1 = (int *)*DAT_00013a8c; (piVar1 != (int *)0x0 && (piVar1[1] != param_1));
      piVar1 = (int *)*piVar1) {
  }
  return;
}



// FUN_00013a90 @ 00013a90 (46 bytes, called_by=0, calls=0)

bool FUN_00013a90(int param_1)

{
  byte bVar1;
  byte *pbVar2;
  
  pbVar2 = (byte *)(param_1 + -1);
  while( true ) {
    pbVar2 = pbVar2 + 1;
    bVar1 = *(byte *)(DAT_00013ac0 + (uint)*pbVar2);
    if ((bVar1 & 7) == 0) {
      return (bool)(bVar1 & 7);
    }
    if (0x5a < *pbVar2) break;
    if ((byte *)(param_1 + 0xc) == pbVar2) {
      return *(char *)(param_1 + 0xd) == '\0';
    }
  }
  return false;
}



// FUN_00013ac4 @ 00013ac4 (24 bytes, called_by=0, calls=0)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00013ac4(void)

{
  undefined4 uVar1;
  
  uVar1 = uRam10001084;
  if (_DAT_10001080 != DAT_00013adc) {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}



// FUN_00013ae0 @ 00013ae0 (40 bytes, called_by=0, calls=0)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00013ae0(void)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = DAT_00013b10;
  if ((_DAT_10001080 == DAT_00013b08) &&
     (iVar1 = FUN_00013a90(DAT_00013b0c), uVar2 = DAT_00013b0c, iVar1 == 0)) {
    uVar2 = DAT_00013b10;
  }
  return uVar2;
}



// FUN_00013cd0 @ 00013cd0 (114 bytes, called_by=0, calls=0)

int FUN_00013cd0(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int local_1c;
  undefined4 uStack_18;
  
  iVar5 = param_1;
  local_1c = param_2;
  uStack_18 = param_3;
  iVar1 = FUN_00014f54();
  if (iVar1 != 0) {
    return iVar1;
  }
  uVar2 = FUN_0001fbaa(param_1 + 0x18,&local_1c,0x49);
  if (uVar2 == 0x49) {
    iVar1 = FUN_0001b700(0,local_1c,0x49);
    if (iVar1 == 0) {
      iVar5 = 0;
      if (param_2 != 0) {
        FUN_00000820(param_2,local_1c,0x49);
      }
      goto LAB_00013d06;
    }
    if ((*DAT_00013d44 & 7) != 0) {
      uVar3 = DAT_00013d4c;
      uVar4 = (uint)*(ushort *)(local_1c + 0x47);
      goto LAB_00013cfc;
    }
  }
  else {
    uVar3 = DAT_00013d48;
    uVar4 = uVar2;
    if ((*DAT_00013d44 & 7) != 0) {
LAB_00013cfc:
      FUN_0001cac4(DAT_00013d44,1,uVar3,uVar4,iVar5);
    }
  }
  iVar5 = -5;
LAB_00013d06:
  FUN_0001fc32(param_1 + 0x18,uVar2);
  return iVar5;
}



// FUN_00013d50 @ 00013d50 (368 bytes, called_by=0, calls=0)

int FUN_00013d50(int param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  code *pcVar7;
  uint uVar8;
  int iVar9;
  int *piVar10;
  undefined4 *puVar11;
  uint uVar12;
  
  iVar4 = FUN_0001e784(*(undefined4 *)(*(int *)(param_1 + 4) + 0x1c),DAT_00013ec4,0x36,DAT_00013ec0)
  ;
  if ((iVar4 == 0) || (iVar4 == -0x86)) {
    piVar10 = *(int **)(param_1 + 4);
    iVar9 = *(int *)(param_1 + 0x10);
    iVar4 = FUN_000206b8(*piVar10);
    if (iVar4 == 0) {
      if (2 < (*DAT_00013ec8 & 7)) {
        thunk_FUN_0001cab2(DAT_00013ec8,3,PTR_DAT_00013ed0);
      }
      return 0;
    }
    iVar4 = piVar10[5];
    bVar1 = *(byte *)(piVar10 + 6);
    uVar6 = (uint)*(ushort *)((int)piVar10 + 0x1a);
    puVar11 = *(undefined4 **)(iVar4 + 8);
    uVar8 = **(uint **)(iVar4 + 0x10);
    if ((int)(uVar6 << 0x1f) < 0) {
      uVar6 = uVar6 ^ 0x1b0000;
    }
    else {
      uVar6 = uVar6 | 0x170000;
    }
    uVar12 = 1 << (uint)bVar1;
    if ((int)(uVar6 << 0x1f) < 0) {
      uVar8 = uVar8 | uVar12;
    }
    else {
      uVar8 = uVar8 & ~uVar12;
    }
    **(uint **)(iVar4 + 0x10) = uVar8;
    iVar4 = (*(code *)*puVar11)(iVar4,(uint)bVar1,uVar6 & 0xffefffff);
    puVar2 = PTR_DAT_00013ed8;
    if (iVar4 == 0) {
      puVar11 = *(undefined4 **)(PTR_DAT_00013ed8 + 8);
      iVar4 = (*(code *)*puVar11)(PTR_DAT_00013ed8,PTR_DAT_00013edc);
      iVar5 = (*(code *)*puVar11)(puVar2,PTR_DAT_00013ee0);
      if ((iVar4 != 0 || iVar5 != 0) && ((*DAT_00013ec8 & 7) != 0)) {
        thunk_FUN_0001cab2(DAT_00013ec8,1,PTR_DAT_00013ee4);
      }
      FUN_00020b86(iVar9 + 0x5c0,PTR_DAT_00013ee8);
      iVar4 = FUN_0001fcd6(iVar9 + 0x18,piVar10 + 10);
      if (iVar4 == 0) {
        pcVar7 = (code *)**(undefined4 **)(*piVar10 + 8);
        if (pcVar7 == (code *)0x0) {
          iVar4 = -0x58;
        }
        else {
          iVar4 = (*pcVar7)(*piVar10,DAT_00013ef0,param_1);
          uVar3 = DAT_00013ef4;
          if (iVar4 == 0) {
            *(int *)(iVar9 + 0xcc) = param_1;
            *(int *)(iVar9 + 0x688) = param_1;
            *(undefined4 *)(iVar9 + 0x68c) = uVar3;
            FUN_00013a5c(iVar9 + 0x684);
            FUN_000153fc(iVar9 + 0xd0,iVar9 + 0x180,0x400,DAT_00013ef8,param_1,0,0,0xb,0);
            return 0;
          }
        }
        uVar6 = *DAT_00013ec8;
        puVar2 = DAT_00013efc;
      }
      else {
        uVar6 = *DAT_00013ec8;
        puVar2 = PTR_DAT_00013eec;
      }
      if ((uVar6 & 7) != 0) {
        FUN_0001cac4(DAT_00013ec8,1,puVar2,iVar4);
        return iVar4;
      }
      return iVar4;
    }
    uVar6 = *DAT_00013ec8;
    puVar2 = PTR_DAT_00013ed4;
  }
  else {
    uVar6 = *DAT_00013ec8;
    puVar2 = PTR_DAT_00013ecc;
  }
  if ((uVar6 & 7) != 0) {
    thunk_FUN_0001cab2(DAT_00013ec8,1,puVar2);
  }
  return iVar4;
}



// FUN_00013f84 @ 00013f84 (176 bytes, called_by=0, calls=0)

int FUN_00013f84(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  longlong lVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined8 uVar6;
  
  iVar3 = *(int *)(param_1 + 0x10);
  piVar4 = *(int **)(param_1 + 4);
  iVar5 = iVar3 + 0x18;
  FUN_0001fcaa(iVar5);
  uVar2 = FUN_0001fb32(iVar5);
  iVar3 = (**(code **)(*(int *)(*piVar4 + 8) + 0xc))
                    (*piVar4,uVar2,*(undefined1 *)(iVar3 + 0x24),piVar4[4] * 1000,param_4);
  if (iVar3 == 0) {
    iVar3 = (**(code **)(*(int *)(**(int **)(param_1 + 4) + 8) + 4))
                      (**(int **)(param_1 + 4),param_2,0x49,0xffffffff);
    if ((iVar3 == 0) &&
       (iVar3 = FUN_00013cd0(*(undefined4 *)(param_1 + 0x10),0,0xccd,0), iVar3 == 0)) {
      lVar1 = (ulonglong)(uint)piVar4[4] * 0x8000 + 999;
      uVar6 = FUN_00001904((int)lVar1,(int)((ulonglong)lVar1 >> 0x20),1000,0);
      iVar3 = FUN_00013cd0(*(undefined4 *)(param_1 + 0x10),param_3,(int)uVar6,
                           (int)((ulonglong)uVar6 >> 0x20));
    }
    FUN_0002051c(10);
    (**(code **)(*(int *)(*piVar4 + 8) + 0x14))();
  }
  else if ((*DAT_00014034 & 7) != 0) {
    FUN_0001cac4(DAT_00014034,1,DAT_00014038,iVar3);
  }
  return iVar3;
}



// FUN_00014108 @ 00014108 (442 bytes, called_by=0, calls=0)

void FUN_00014108(int param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  undefined8 uVar12;
  undefined1 local_f0;
  undefined4 local_ef [3];
  undefined1 local_e3 [33];
  undefined1 auStack_c2 [18];
  undefined1 local_b0;
  undefined1 auStack_af [7];
  undefined4 local_a8 [17];
  undefined1 uStack_64;
  undefined1 local_63;
  
  iVar9 = *(int *)(param_1 + 0x10);
  iVar8 = *(int *)(iVar9 + 4);
  uVar10 = *(undefined4 *)(iVar8 + 0x20);
  lVar1 = (ulonglong)*(uint *)(iVar8 + 0x10) * 0x8000 + 999;
  uVar12 = FUN_00001904((int)lVar1,(int)((ulonglong)lVar1 >> 0x20),1000,0);
  iVar4 = FUN_00014c88(uVar10,&uStack_64,(int)uVar12,(int)((ulonglong)uVar12 >> 0x20));
  uVar10 = DAT_000142c8;
  if (iVar4 != 0) {
    if ((*(char *)(param_1 + 0x5d4) == '\0') &&
       (uVar10 = DAT_000142cc, *(char *)(param_1 + 0x5d5) == '\0')) {
      if (*(char *)(iVar8 + 0x34) != '\0') {
        return;
      }
      local_63 = 3;
      iVar4 = FUN_000205a8(iVar9,&uStack_64,&local_b0);
      if (iVar4 == 0) {
        if (*(char *)(param_1 + 0x57d) == '\0') {
          return;
        }
        FUN_000168a4(auStack_c2,0,0x12);
        local_f0 = 0x45;
        puVar11 = local_a8;
        puVar3 = local_ef;
        do {
          puVar7 = puVar3;
          puVar5 = puVar11;
          uVar10 = puVar5[1];
          puVar11 = puVar5 + 2;
          *puVar7 = *puVar5;
          puVar7[1] = uVar10;
          puVar3 = puVar7 + 2;
        } while (puVar11 != local_a8 + 10);
        puVar7[2] = *puVar11;
        *(undefined1 *)(puVar7 + 3) = *(undefined1 *)(puVar5 + 3);
        iVar4 = FUN_0001e77e(*(undefined4 *)(iVar8 + 0x1c),0x2e,&local_f0);
        if (iVar4 == -0xc) {
          return;
        }
        if (iVar4 == 0) {
          return;
        }
        if (iVar4 == -0x86) {
          return;
        }
        if ((*DAT_000142d0 & 7) == 0) {
          return;
        }
        thunk_FUN_0001cab2(DAT_000142d0,1,DAT_000142e0);
        return;
      }
      iVar4 = 10;
      do {
        if ((*(char *)(param_1 + 0x5d4) != '\0') || (*(char *)(param_1 + 0x5d5) != '\0')) break;
        FUN_0002051c(1);
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
      uVar10 = DAT_000142c8;
      if ((*(char *)(param_1 + 0x5d4) == '\0') &&
         (uVar10 = DAT_000142cc, *(char *)(param_1 + 0x5d5) == '\0')) {
        iVar4 = FUN_000205e8(iVar9);
        if (iVar4 == 0) {
          return;
        }
        uVar6 = *DAT_000142d0;
        uVar10 = DAT_000142cc;
        uVar2 = DAT_000142dc;
        goto joined_r0x0001425c;
      }
    }
    goto LAB_00014148;
  }
  if ((*(char *)(param_1 + 0x5d4) != '\0') ||
     (uVar10 = DAT_000142cc, *(char *)(param_1 + 0x5d5) != '\0')) goto LAB_00014148;
  switch(local_63) {
  case 1:
    iVar4 = FUN_000205a8(iVar9,&uStack_64,&local_b0);
    if (iVar4 == 0) {
      uVar10 = *(undefined4 *)(iVar8 + 0x24);
      lVar1 = (ulonglong)*(uint *)(iVar8 + 0x10) * 0x8000 + 999;
      uVar12 = FUN_00001904((int)lVar1,(int)((ulonglong)lVar1 >> 0x20),1000,0);
      FUN_00014bdc(uVar10,&local_b0,(int)uVar12,(int)((ulonglong)uVar12 >> 0x20));
      return;
    }
    uVar6 = *DAT_000142d0;
    uVar10 = DAT_000142cc;
    uVar2 = DAT_000142d8;
    goto joined_r0x0001425c;
  case 2:
    iVar4 = FUN_000205a8(iVar9,&uStack_64,0);
    if (iVar4 == 0) {
      return;
    }
    uVar6 = *DAT_000142d0;
    uVar10 = DAT_000142cc;
    uVar2 = DAT_000142d4;
joined_r0x0001425c:
    DAT_000142cc = uVar10;
    if ((uVar6 & 7) != 0) {
      thunk_FUN_0001cab2(DAT_000142d0,1,uVar2);
      uVar10 = DAT_000142cc;
    }
LAB_00014148:
    FUN_0000a734(param_1,uVar10);
    break;
  case 4:
    *(undefined1 *)(param_1 + 0x57d) = 1;
    break;
  case 5:
    *(undefined1 *)(param_1 + 0x57d) = 0;
    iVar4 = *(int *)(iVar9 + 4);
    FUN_000168a4(auStack_af,0,0x3f);
    local_b0 = 0x45;
    FUN_0001e77e(*(undefined4 *)(iVar4 + 0x1c),0x2e,&local_b0);
  }
  return;
}



// FUN_000142e4 @ 000142e4 (252 bytes, called_by=0, calls=0)

int FUN_000142e4(undefined4 param_1,int param_2,int param_3,undefined4 param_4,undefined1 *param_5)

{
  undefined2 uVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined1 uStack_64;
  undefined1 local_63;
  int local_60;
  undefined4 local_5c [3];
  undefined2 local_50;
  undefined1 local_4e [42];
  undefined4 auStack_24 [4];
  
  if (param_2 == 3) {
    *param_5 = (char)param_3;
    piVar2 = DAT_000143f0;
    if (param_3 == 1) {
      DataMemoryBarrier(0x1b);
      DataMemoryBarrier(0x1b);
      if (*DAT_000143f0 == 0) {
        *(undefined1 *)(DAT_000143f0 + 1) = 0;
        return -0x13;
      }
      if ((char)DAT_000143f0[1] == '\0') {
        FUN_00020890(DAT_000143f4);
        FUN_000168a4(&uStack_64,0,0x49);
        puVar7 = (undefined4 *)(param_5 + 1);
        puVar8 = local_5c;
        do {
          puVar6 = puVar8;
          puVar5 = puVar7;
          uVar4 = puVar5[1];
          *puVar6 = *puVar5;
          puVar6[1] = uVar4;
          puVar7 = puVar5 + 2;
          puVar8 = puVar6 + 2;
        } while (puVar7 != (undefined4 *)(param_5 + 0x39));
        puVar6[2] = *puVar7;
        uVar1 = *(undefined2 *)(puVar5 + 3);
        *(undefined1 *)((int)puVar6 + 0xe) = *(undefined1 *)((int)puVar5 + 0xe);
        *(undefined2 *)(puVar6 + 3) = uVar1;
        local_63 = (char)param_3;
        iVar3 = FUN_00014bdc(DAT_000143f8,&uStack_64,0,0);
        if (iVar3 == 0) {
          *(undefined1 *)(piVar2 + 1) = 1;
        }
      }
      else {
        iVar3 = FUN_00014c88(DAT_000143f4,&uStack_64,0,0);
        if (iVar3 == 0) {
          *(undefined1 *)(piVar2 + 1) = 0;
          if (local_60 < 1) {
            if (local_60 != 0) {
              return local_60;
            }
          }
          else {
            puVar7 = (undefined4 *)(param_5 + 1);
            puVar8 = local_5c;
            do {
              puVar6 = puVar8;
              puVar5 = puVar7;
              uVar4 = puVar6[1];
              puVar8 = puVar6 + 2;
              *puVar5 = *puVar6;
              puVar5[1] = uVar4;
              puVar7 = puVar5 + 2;
            } while (puVar8 != auStack_24);
            puVar5[2] = *puVar8;
            uVar1 = *(undefined2 *)(puVar6 + 3);
            *(undefined1 *)((int)puVar5 + 0xe) = *(undefined1 *)((int)puVar6 + 0xe);
            *(undefined2 *)(puVar5 + 3) = uVar1;
          }
          return 0x3f;
        }
      }
      return -0xb;
    }
    if (param_3 == 2) {
      iVar3 = FUN_0002030e(DAT_000143ec,2,param_5 + 1,DAT_000143e8);
      return iVar3;
    }
  }
  else if ((*DAT_000143e0 & 6) != 0) {
    thunk_FUN_0001cab2(DAT_000143e0,2,DAT_000143e4);
  }
  return -0x86;
}



// FUN_000143fc @ 000143fc (244 bytes, called_by=0, calls=0)

undefined4 FUN_000143fc(undefined4 param_1,int param_2,int param_3,int param_4,int param_5)

{
  undefined2 uVar1;
  uint *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined2 local_6c;
  undefined1 uStack_64;
  undefined1 local_63;
  undefined4 local_5c [3];
  undefined2 local_50;
  undefined1 local_4e [54];
  
  puVar2 = DAT_000144f0;
  if (param_2 == 3) {
    if (param_4 != 0x40) {
      if (((*DAT_000144f0 & 7) != 0) &&
         (FUN_0001cac4(DAT_000144f0,1,DAT_000144f8), (*puVar2 & 7) != 0)) {
        local_74 = DAT_000144fc;
        local_70 = DAT_00014500;
        local_6c = 0x200;
        local_78 = DAT_00014504;
        FUN_00007b60(puVar2,param_4 << 0x14 | 0x1c40,&local_78,param_5);
      }
      return 0xffffffea;
    }
    if (param_3 == 1) {
      DataMemoryBarrier(0x1b);
      DataMemoryBarrier(0x1b);
      if (*DAT_00014510 == 0) {
        return 0xffffffed;
      }
      FUN_000168a4(&uStack_64,0,0x49);
      local_63 = 2;
      puVar7 = (undefined4 *)(param_5 + 1);
      puVar3 = local_5c;
      do {
        puVar8 = puVar3;
        puVar6 = puVar7;
        uVar4 = puVar6[1];
        *puVar8 = *puVar6;
        puVar8[1] = uVar4;
        puVar7 = puVar6 + 2;
        puVar3 = puVar8 + 2;
      } while (puVar7 != (undefined4 *)(param_5 + 0x39));
      puVar8[2] = *puVar7;
      uVar1 = *(undefined2 *)(puVar6 + 3);
      *(undefined1 *)((int)puVar8 + 0xe) = *(undefined1 *)((int)puVar6 + 0xe);
      *(undefined2 *)(puVar8 + 3) = uVar1;
      iVar5 = FUN_00014bdc(DAT_00014514,&uStack_64,0,0);
      if (iVar5 == 0) {
        return 0;
      }
      return 0xfffffff5;
    }
    if (param_3 == 2) {
      uVar4 = FUN_000202cc(DAT_0001450c,2,param_5 + 1,DAT_00014508);
      return uVar4;
    }
  }
  else if ((*DAT_000144f0 & 6) != 0) {
    thunk_FUN_0001cab2(DAT_000144f0,2,DAT_000144f4);
  }
  return 0xffffff7a;
}



// FUN_00014518 @ 00014518 (262 bytes, called_by=0, calls=0)

/* WARNING: Type propagation algorithm not settling */

int FUN_00014518(undefined4 param_1,int *param_2,int *param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  int iStack_48;
  undefined2 local_44;
  undefined4 local_3c;
  int local_38 [3];
  undefined4 *local_2c;
  undefined4 local_28;
  undefined2 local_24;
  undefined1 local_22;
  
  FUN_00014d3c(DAT_00014620,param_2,0xffffffff,0xffffffff);
  local_38[2] = 3;
  local_2c = &local_3c;
  local_28 = 4;
  local_3c = 0;
  local_38[1] = 0;
  local_24 = 0xc;
  local_22 = 0;
  iVar2 = (**(code **)(*(int *)(DAT_00014624 + 8) + 4))(DAT_00014624,local_38 + 1);
  if (iVar2 == 0) {
    local_38[0] = (int)(short)local_3c;
    iVar2 = FUN_0002048a(DAT_00014638,local_38);
    uVar1 = DAT_0001463c;
    if (iVar2 == 0) {
      *param_3 = (local_38[0] * 0x981) / 1000;
      local_38[0] = (int)local_3c._2_2_;
      iVar2 = FUN_0002048a(uVar1,local_38);
      if (iVar2 == 0) {
        *param_2 = (local_38[0] * 0x981) / 1000;
        goto LAB_0001458e;
      }
      if ((*DAT_00014628 & 7) == 0) goto LAB_0001458e;
      local_54 = DAT_0001462c;
      local_50 = DAT_00014630;
      local_4c = 0xba;
    }
    else {
      if ((*DAT_00014628 & 7) == 0) goto LAB_0001458e;
      local_54 = DAT_0001462c;
      local_50 = DAT_00014630;
      local_4c = 0xac;
    }
  }
  else {
    if ((*DAT_00014628 & 7) == 0) goto LAB_0001458e;
    local_54 = DAT_0001462c;
    local_50 = DAT_00014630;
    local_4c = 0xa3;
  }
  local_44 = 0x200;
  local_58 = DAT_00014634;
  DAT_0001462c = local_54;
  DAT_00014630 = local_50;
  iStack_48 = iVar2;
  FUN_00007b60(DAT_00014628,0x2c40,&local_58,0);
LAB_0001458e:
  FUN_00014e2c(DAT_00014620);
  return iVar2;
}



// FUN_000146a8 @ 000146a8 (76 bytes, called_by=0, calls=0)

undefined4 * FUN_000146a8(byte *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  puVar1 = DAT_000146f8;
  if (param_1 == (byte *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3 = (undefined4 *)(uint)*param_1;
    puVar4 = DAT_000146f4;
    if (puVar3 != (undefined4 *)0x0) {
      for (; puVar3 = DAT_000146f4, puVar4 < puVar1; puVar4 = puVar4 + 5) {
        iVar2 = FUN_000206b8(puVar4);
        if ((iVar2 != 0) && ((byte *)*puVar4 == param_1)) {
          return puVar4;
        }
      }
      for (; puVar3 < puVar1; puVar3 = puVar3 + 5) {
        iVar2 = FUN_000206b8(puVar3);
        if ((iVar2 != 0) && (iVar2 = FUN_00000228(param_1,*puVar3), iVar2 == 0)) {
          return puVar3;
        }
      }
      puVar3 = (undefined4 *)0x0;
    }
  }
  return puVar3;
}



// FUN_000146fc @ 000146fc (8 bytes, called_by=0, calls=0)

int FUN_000146fc(void)

{
  return *(int *)(DAT_00014704 + 8) + 0x94;
}



// FUN_00014708 @ 00014708 (230 bytes, called_by=0, calls=0)

void FUN_00014708(uint param_1,int param_2)

{
  bool bVar1;
  uint *puVar2;
  char *pcVar3;
  char *pcVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 local_38;
  undefined4 local_34;
  uint uStack_30;
  char *local_2c;
  uint local_28;
  undefined2 local_24;
  
  puVar2 = DAT_000147f0;
  uVar7 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    uVar7 = getBasePriority();
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if ((bVar1) && (uVar6 = getBasePriority(), uVar6 == 0 || 0x40 < uVar6)) {
    setBasePriority(0x40);
  }
  InstructionSynchronizationBarrier(0xf);
  uVar6 = *(uint *)(DAT_000147f4 + 8);
  if ((*DAT_000147f0 & 7) == 0) {
    if (param_2 == 0) goto LAB_000147ba;
LAB_0001476c:
    if ((*(uint *)(param_2 + 0x1c) & 0x1ff) != 0) {
      if ((*puVar2 & 7) == 0) goto LAB_000147ba;
      FUN_0001cab2(DAT_000147f0,1,DAT_00014808);
    }
  }
  else {
    uVar5 = *DAT_000147f0;
    if (param_1 < 5) {
      uVar5 = DAT_000147f8;
    }
    local_28 = (uint)*(byte *)(DAT_000147f4 + 0x10);
    local_2c = DAT_000147fc;
    if (param_1 < 5) {
      local_2c = *(char **)(uVar5 + param_1 * 4);
    }
    local_24 = 0x301;
    local_34 = DAT_00014800;
    local_38 = DAT_00014804;
    uStack_30 = param_1;
    FUN_00007b60(DAT_000147f0,0x2c40,&local_38,0);
    if (param_2 != 0) goto LAB_0001476c;
  }
  if ((*puVar2 & 7) != 0) {
    pcVar3 = DAT_0001480c;
    if (((uVar6 != 0) &&
        (pcVar4 = (char *)FUN_00020bd6(uVar6), pcVar3 = DAT_0001480c, pcVar4 != (char *)0x0)) &&
       (*pcVar4 != '\0')) {
      pcVar3 = pcVar4;
    }
    local_34 = DAT_00014810;
    local_28 = CONCAT22(local_28._2_2_,0x301);
    local_38 = DAT_00014814;
    uStack_30 = uVar6;
    local_2c = pcVar3;
    FUN_00007b60(DAT_000147f0,&DAT_00002440,&local_38,0);
  }
LAB_000147ba:
  FUN_00013358(param_1,param_2);
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(uVar7);
  }
  InstructionSynchronizationBarrier(0xf);
  FUN_00009ecc(uVar6);
  return;
}



// FUN_000149c4 @ 000149c4 (114 bytes, called_by=0, calls=0)

void FUN_000149c4(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = DAT_00014a38;
  iVar4 = param_1 * 0x1c + DAT_00014a38;
  iVar5 = param_1 * 0xb0 + DAT_00014a3c;
  FUN_00015360(iVar5,param_1 * 0x180 + DAT_00014a40,0x140,DAT_00014a44,iVar4,0,0,0xf,1,0);
  iVar3 = DAT_00014a48;
  bVar1 = *(byte *)(iVar5 + 0xd);
  *(int *)(iVar4 + 0xc) = iVar5;
  *(byte *)(iVar5 + 0xd) = bVar1 & 0xfb;
  *(int *)(iVar4 + 4) = param_1 * 0x840 + 0x840 + iVar3;
  *(char *)(iVar4 + 0x10) = (char)param_1;
  *(int *)(iVar4 + 0x18) = iVar2 + param_1 * 0x20 + 0x28;
  *(undefined1 *)(iVar2 + param_1 * 0x20 + 0x44) = 1;
  return;
}



// FUN_00014b78 @ 00014b78 (96 bytes, called_by=0, calls=0)

int FUN_00014b78(int param_1,undefined4 *param_2,int param_3,int param_4)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  
  uVar3 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    uVar3 = getBasePriority();
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if ((bVar1) && (uVar4 = getBasePriority(), uVar4 == 0 || 0x40 < uVar4)) {
    setBasePriority(0x40);
  }
  InstructionSynchronizationBarrier(0xf);
  puVar6 = *(undefined4 **)(param_1 + 0xc);
  if (puVar6 == (undefined4 *)0x0) {
    if (param_3 != 0 || param_4 != 0) {
      iVar2 = FUN_00015688(param_1 + 8,uVar3,param_1,param_4,param_3,param_4);
      if (iVar2 != 0) {
        return iVar2;
      }
      *param_2 = *(undefined4 *)(*(int *)(DAT_00014bd8 + 8) + 0x14);
      return 0;
    }
    *param_2 = 0;
    iVar2 = -0xc;
  }
  else {
    *param_2 = puVar6;
    *(undefined4 *)(param_1 + 0xc) = *puVar6;
    uVar4 = *(uint *)(param_1 + 0x1c);
    uVar5 = *(int *)(param_1 + 0x18) + 1;
    *(uint *)(param_1 + 0x18) = uVar5;
    if (uVar5 <= uVar4) {
      *(uint *)(param_1 + 0x1c) = uVar4;
    }
    if (uVar5 > uVar4) {
      *(uint *)(param_1 + 0x1c) = uVar5;
    }
    iVar2 = 0;
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(uVar3);
  }
  InstructionSynchronizationBarrier(0xf);
  return iVar2;
}



// FUN_00014bdc @ 00014bdc (166 bytes, called_by=0, calls=0)

undefined4 FUN_00014bdc(int param_1,undefined4 param_2,int param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  bool bVar6;
  int iVar7;
  
  uVar5 = 0;
  bVar6 = (bool)isCurrentModePrivileged();
  if (bVar6) {
    uVar5 = getBasePriority();
  }
  bVar6 = (bool)isCurrentModePrivileged();
  if ((bVar6) && (uVar1 = getBasePriority(), uVar1 == 0 || 0x40 < uVar1)) {
    setBasePriority(0x40);
  }
  InstructionSynchronizationBarrier(0xf);
  if (*(uint *)(param_1 + 0x20) < *(uint *)(param_1 + 0xc)) {
    iVar7 = param_1;
    uVar3 = param_2;
    iVar2 = FUN_00020d5e();
    if (iVar2 != 0) {
      FUN_00000820(*(undefined4 *)(iVar2 + 0x14),param_2,*(undefined4 *)(param_1 + 8));
      *(undefined4 *)(iVar2 + 0xac) = 0;
      FUN_00020c68(iVar2);
      FUN_00015768(param_1 + 8,uVar5);
      return 0;
    }
    FUN_00000820(*(undefined4 *)(param_1 + 0x1c),param_2,*(undefined4 *)(param_1 + 8));
    iVar4 = *(int *)(param_1 + 0x1c) + *(int *)(param_1 + 8);
    iVar2 = *(int *)(param_1 + 0x14);
    *(int *)(param_1 + 0x1c) = iVar4;
    bVar6 = iVar4 == iVar2;
    if (bVar6) {
      iVar4 = *(int *)(param_1 + 0x10);
    }
    if (bVar6) {
      *(int *)(param_1 + 0x1c) = iVar4;
    }
    iVar4 = *(int *)(param_1 + 0x20) + 1;
    *(int *)(param_1 + 0x20) = iVar4;
    FUN_00021222(param_1 + 0x24,0x10,iVar2,iVar4,iVar7,uVar3);
    uVar3 = 0;
  }
  else {
    if (param_3 != 0 || param_4 != 0) {
      *(undefined4 *)(*(int *)(DAT_00014c84 + 8) + 0x14) = param_2;
      uVar5 = FUN_00015688(param_1 + 8,uVar5,param_1,param_4,param_3,param_4);
      return uVar5;
    }
    uVar3 = 0xffffffdd;
  }
  bVar6 = (bool)isCurrentModePrivileged();
  if (bVar6) {
    setBasePriority(uVar5);
  }
  InstructionSynchronizationBarrier(0xf);
  return uVar3;
}



// FUN_00014c88 @ 00014c88 (174 bytes, called_by=0, calls=0)

int FUN_00014c88(int param_1,undefined4 param_2,int param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  bool bVar5;
  
  uVar4 = 0;
  bVar5 = (bool)isCurrentModePrivileged();
  if (bVar5) {
    uVar4 = getBasePriority();
  }
  bVar5 = (bool)isCurrentModePrivileged();
  if ((bVar5) && (uVar1 = getBasePriority(), uVar1 == 0 || 0x40 < uVar1)) {
    setBasePriority(0x40);
  }
  InstructionSynchronizationBarrier(0xf);
  if (*(int *)(param_1 + 0x20) == 0) {
    if (param_3 != 0 || param_4 != 0) {
      *(undefined4 *)(*(int *)(DAT_00014d38 + 8) + 0x14) = param_2;
      iVar2 = FUN_00015688(param_1 + 8,uVar4,param_1,param_4,param_3,param_4,param_3);
      return iVar2;
    }
    iVar2 = -0x23;
  }
  else {
    FUN_00000820(param_2,*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 8),param_4,
                 param_1,param_2);
    iVar2 = *(int *)(param_1 + 0x18) + *(int *)(param_1 + 8);
    *(int *)(param_1 + 0x18) = iVar2;
    bVar5 = iVar2 == *(int *)(param_1 + 0x14);
    if (bVar5) {
      iVar2 = *(int *)(param_1 + 0x10);
    }
    if (bVar5) {
      *(int *)(param_1 + 0x18) = iVar2;
    }
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + -1;
    iVar2 = FUN_00020d5e(param_1);
    if (iVar2 != 0) {
      FUN_00000820(*(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(iVar2 + 0x14),
                   *(undefined4 *)(param_1 + 8));
      iVar3 = *(int *)(param_1 + 0x1c) + *(int *)(param_1 + 8);
      *(int *)(param_1 + 0x1c) = iVar3;
      bVar5 = iVar3 == *(int *)(param_1 + 0x14);
      if (bVar5) {
        iVar3 = *(int *)(param_1 + 0x10);
      }
      if (bVar5) {
        *(int *)(param_1 + 0x1c) = iVar3;
      }
      *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
      *(undefined4 *)(iVar2 + 0xac) = 0;
      FUN_00020c68(iVar2);
      FUN_00015768(param_1 + 8,uVar4);
      return 0;
    }
  }
  bVar5 = (bool)isCurrentModePrivileged();
  if (bVar5) {
    setBasePriority(uVar4);
  }
  InstructionSynchronizationBarrier(0xf);
  return iVar2;
}



// FUN_00014d3c @ 00014d3c (232 bytes, called_by=0, calls=0)

undefined4 FUN_00014d3c(int *param_1,undefined4 param_2,int param_3,int param_4)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  char cVar6;
  int *piVar7;
  undefined4 uVar8;
  
  iVar4 = DAT_00014e24;
  uVar8 = 0;
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    uVar8 = getBasePriority();
  }
  bVar2 = (bool)isCurrentModePrivileged();
  if ((bVar2) && (uVar3 = getBasePriority(), uVar3 == 0 || 0x40 < uVar3)) {
    setBasePriority(0x40);
  }
  InstructionSynchronizationBarrier(0xf);
  if (param_1[3] == 0) {
    iVar5 = (int)*(char *)(*(int *)(DAT_00014e24 + 8) + 0xe);
LAB_00014d80:
    param_1[4] = iVar5;
    param_1[3] = param_1[3] + 1;
    param_1[2] = *(int *)(iVar4 + 8);
    bVar2 = (bool)isCurrentModePrivileged();
    if (bVar2) {
      setBasePriority(uVar8);
    }
    InstructionSynchronizationBarrier(0xf);
    return 0;
  }
  if (param_1[2] == *(int *)(DAT_00014e24 + 8)) {
    iVar5 = param_1[4];
    goto LAB_00014d80;
  }
  if (param_3 == 0 && param_4 == 0) {
    bVar2 = (bool)isCurrentModePrivileged();
    if (bVar2) {
      setBasePriority(uVar8);
    }
    InstructionSynchronizationBarrier(0xf);
    return 0xfffffff0;
  }
  cVar6 = *(char *)(*(int *)(DAT_00014e24 + 8) + 0xe);
  cVar1 = *(char *)(param_1[2] + 0xe);
  if (cVar1 <= cVar6) {
    cVar6 = cVar1;
  }
  if (cVar6 < -0x7f) {
    cVar6 = -0x7f;
  }
  if (cVar6 < cVar1) {
    iVar4 = FUN_000208d2();
  }
  else {
    iVar4 = 0;
  }
  iVar5 = FUN_00015688(DAT_00014e28,uVar8,param_1);
  if (iVar5 == 0) {
    return 0;
  }
  uVar8 = 0;
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    uVar8 = getBasePriority();
  }
  bVar2 = (bool)isCurrentModePrivileged();
  if ((bVar2) && (uVar3 = getBasePriority(), uVar3 == 0 || 0x40 < uVar3)) {
    setBasePriority(0x40);
  }
  InstructionSynchronizationBarrier(0xf);
  if (param_1[2] != 0) {
    piVar7 = (int *)*param_1;
    iVar5 = param_1[4];
    if ((param_1 != piVar7) && (piVar7 != (int *)0x0)) {
      if (*(char *)((int)piVar7 + 0xe) <= iVar5) {
        iVar5 = (int)*(char *)((int)piVar7 + 0xe);
      }
      if (iVar5 < -0x7f) {
        iVar5 = -0x7f;
      }
    }
    iVar5 = FUN_000208d2(param_1[2],iVar5);
    if (iVar5 != 0) goto LAB_00014e04;
  }
  if (iVar4 == 0) {
    bVar2 = (bool)isCurrentModePrivileged();
    if (bVar2) {
      setBasePriority(uVar8);
    }
    InstructionSynchronizationBarrier(0xf);
    return 0xfffffff5;
  }
LAB_00014e04:
  FUN_00015768(DAT_00014e28,uVar8);
  return 0xfffffff5;
}



// FUN_00014e2c @ 00014e2c (112 bytes, called_by=0, calls=0)

undefined4 FUN_00014e2c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 8) == 0) {
    uVar3 = 0xffffffea;
  }
  else if (*(int *)(param_1 + 8) == *(int *)(DAT_00014e9c + 8)) {
    if (*(uint *)(param_1 + 0xc) < 2) {
      uVar3 = 0;
      bVar1 = (bool)isCurrentModePrivileged();
      if (bVar1) {
        uVar3 = getBasePriority();
      }
      bVar1 = (bool)isCurrentModePrivileged();
      if ((bVar1) && (uVar2 = getBasePriority(), uVar2 == 0 || 0x40 < uVar2)) {
        setBasePriority(0x40);
      }
      InstructionSynchronizationBarrier(0xf);
      FUN_000208d2(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x10),
                   *(int *)(DAT_00014e9c + 8),0x40,param_4);
      iVar4 = FUN_00020d5e(param_1);
      *(int *)(param_1 + 8) = iVar4;
      if (iVar4 == 0) {
        *(undefined4 *)(param_1 + 0xc) = 0;
        bVar1 = (bool)isCurrentModePrivileged();
        if (bVar1) {
          setBasePriority(uVar3);
        }
        InstructionSynchronizationBarrier(0xf);
      }
      else {
        *(int *)(param_1 + 0x10) = (int)*(char *)(iVar4 + 0xe);
        *(undefined4 *)(iVar4 + 0xac) = 0;
        FUN_00020c68();
        FUN_00015768(DAT_00014ea0,uVar3);
      }
    }
    else {
      *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) - 1;
    }
    uVar3 = 0;
  }
  else {
    uVar3 = 0xffffffff;
  }
  return uVar3;
}



// FUN_00014ea4 @ 00014ea4 (96 bytes, called_by=0, calls=0)

undefined4 FUN_00014ea4(uint *param_1,undefined4 param_2,int param_3,int param_4)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  uint *puVar6;
  undefined4 uVar7;
  
  uVar7 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    uVar7 = getBasePriority();
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if ((bVar1) && (uVar5 = getBasePriority(), uVar5 == 0 || 0x40 < uVar5)) {
    setBasePriority(0x40);
  }
  InstructionSynchronizationBarrier(0xf);
  puVar6 = (uint *)*param_1;
  if (puVar6 == (uint *)0x0) {
    uVar2 = 0;
    if (param_3 != 0 || param_4 != 0) {
      iVar3 = FUN_00015688(param_1 + 2,uVar7,param_1 + 2,param_4,param_3,param_4,param_3);
      if (iVar3 != 0) {
        return 0;
      }
      return *(undefined4 *)(*(int *)(DAT_00014f04 + 8) + 0x14);
    }
  }
  else {
    puVar4 = (uint *)param_1[1];
    uVar5 = *puVar6 & 0xfffffffc;
    *param_1 = uVar5;
    if (puVar6 == puVar4) {
      param_1[1] = uVar5;
    }
    uVar2 = FUN_000209bc(puVar6,1,puVar4,uVar5,param_1,param_2);
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(uVar7);
  }
  InstructionSynchronizationBarrier(0xf);
  return uVar2;
}



// FUN_00014f08 @ 00014f08 (70 bytes, called_by=0, calls=0)

void FUN_00014f08(int param_1)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  
  uVar4 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    uVar4 = getBasePriority();
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if ((bVar1) && (uVar2 = getBasePriority(), uVar2 == 0 || 0x40 < uVar2)) {
    setBasePriority(0x40);
  }
  InstructionSynchronizationBarrier(0xf);
  iVar3 = FUN_00020d5e();
  if (iVar3 == 0) {
    iVar3 = *(int *)(param_1 + 8);
    if (*(int *)(param_1 + 0xc) != iVar3) {
      iVar3 = iVar3 + 1;
    }
    *(int *)(param_1 + 8) = iVar3;
    FUN_00021222(param_1 + 0x10,2);
  }
  else {
    *(undefined4 *)(iVar3 + 0xac) = 0;
    FUN_00020c68();
  }
  FUN_00015768(DAT_00014f50,uVar4);
  return;
}



// FUN_00014f54 @ 00014f54 (72 bytes, called_by=0, calls=0)

undefined4 FUN_00014f54(int param_1,undefined4 param_2,int param_3,int param_4)

{
  bool bVar1;
  uint uVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    uVar3 = getBasePriority();
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if ((bVar1) && (uVar2 = getBasePriority(), uVar2 == 0 || 0x40 < uVar2)) {
    setBasePriority(0x40);
  }
  InstructionSynchronizationBarrier(0xf);
  if (*(int *)(param_1 + 8) == 0) {
    if (param_3 == 0 && param_4 == 0) {
      bVar1 = (bool)isCurrentModePrivileged();
      if (bVar1) {
        setBasePriority(uVar3);
      }
      InstructionSynchronizationBarrier(0xf);
      uVar3 = 0xfffffff0;
    }
    else {
      uVar3 = FUN_00015688(DAT_00014f9c,uVar3,param_1,param_4,param_3,param_4);
    }
  }
  else {
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -1;
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      setBasePriority(uVar3);
    }
    InstructionSynchronizationBarrier(0xf);
    uVar3 = 0;
  }
  return uVar3;
}



// FUN_00014fa0 @ 00014fa0 (64 bytes, called_by=0, calls=0)

void FUN_00014fa0(int param_1)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  
  uVar4 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    uVar4 = getBasePriority();
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if ((bVar1) && (uVar2 = getBasePriority(), uVar2 == 0 || 0x40 < uVar2)) {
    setBasePriority(0x40);
  }
  InstructionSynchronizationBarrier(0xf);
  while (iVar3 = FUN_00020d5e(param_1), iVar3 != 0) {
    *(undefined4 *)(iVar3 + 0xac) = 0xfffffff5;
    FUN_00020c68();
  }
  *(undefined4 *)(param_1 + 8) = 0;
  FUN_00021222(param_1 + 0x10,2);
  FUN_00015768(DAT_00014fe0,uVar4);
  return;
}



// FUN_0001515c @ 0001515c (174 bytes, called_by=0, calls=0)

uint FUN_0001515c(undefined4 *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  
  iVar2 = param_1[3];
  uVar4 = (uint)(iVar2 << 0x1e) >> 0x1f;
  if (iVar2 << 0x1e < 0) {
LAB_000151c6:
    uVar4 = 0xfffffff0;
  }
  else {
    if (iVar2 << 0x1d < 0) goto LAB_000151a6;
    if (*param_2 == 0) {
      *param_2 = param_1[2];
    }
    bVar5 = (int)(param_1[3] << 0x1f) < 0;
    if (bVar5) {
      *param_2 = param_1[2];
    }
    iVar2 = *param_2;
    if (bVar5) {
      uVar4 = 2;
    }
    else {
      uVar4 = 1;
    }
    if (iVar2 == 0) {
      uVar4 = 0xffffffea;
      goto LAB_000151a6;
    }
    if (*(int *)(DAT_0001520c + 8) == iVar2) {
      iVar1 = FUN_00020bc4();
      iVar3 = *(int *)(iVar2 + 200);
      if (iVar1 != 0) goto LAB_0001519a;
      if (iVar3 << 0x1f < 0) {
        if ((-1 < iVar3 << 0x1c) || (iVar3 << 0x1d < 0)) goto LAB_000151d8;
        goto LAB_000151c6;
      }
    }
    else {
      iVar3 = *(int *)(iVar2 + 200);
LAB_0001519a:
      if (iVar3 << 0x1f < 0) {
        if ((-1 < iVar3 << 0x1d) && (-1 < iVar3 << 0x1c)) {
LAB_000151d8:
          *param_1 = 0;
          if (*(undefined4 **)(iVar2 + 0xb4) == (undefined4 *)0x0) {
            *(undefined4 **)(iVar2 + 0xb0) = param_1;
            *(undefined4 **)(iVar2 + 0xb4) = param_1;
          }
          else {
            **(undefined4 **)(iVar2 + 0xb4) = param_1;
            *(undefined4 **)(iVar2 + 0xb4) = param_1;
          }
          FUN_00020a72(iVar2);
          param_1[3] = param_1[3] | 4;
          param_1[2] = *param_2;
          return uVar4;
        }
        goto LAB_000151c6;
      }
    }
    uVar4 = 0xffffffed;
  }
LAB_000151a6:
  *param_2 = 0;
  return uVar4;
}



// FUN_00015298 @ 00015298 (78 bytes, called_by=0, calls=0)

undefined4 FUN_00015298(undefined4 param_1,int param_2,int param_3,int param_4)

{
  bool bVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 local_14;
  int iStack_10;
  
  uVar4 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    uVar4 = getBasePriority();
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if ((bVar1) && (uVar2 = getBasePriority(), uVar2 == 0 || 0x40 < uVar2)) {
    setBasePriority(0x40);
  }
  InstructionSynchronizationBarrier(0xf);
  if ((*(uint *)(param_2 + 0xc) & 0x1e) == 0) {
    local_14 = param_1;
    iStack_10 = param_3;
    if (param_4 == 0 && param_3 == 0) {
      uVar3 = FUN_0001515c(param_2,&local_14);
    }
    else {
      *(uint *)(param_2 + 0xc) = *(uint *)(param_2 + 0xc) | 8;
      *(undefined4 *)(param_2 + 0x28) = param_1;
      FUN_00015be0(param_2 + 0x10,DAT_000152e8,param_3,param_4,param_1);
      uVar3 = 1;
    }
  }
  else {
    uVar3 = 0;
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(uVar4);
  }
  InstructionSynchronizationBarrier(0xf);
  return uVar3;
}



// FUN_000152ec @ 000152ec (8 bytes, called_by=0, calls=0)

void FUN_000152ec(undefined4 param_1)

{
  FUN_00015298(DAT_000152f4,param_1);
  return;
}



// FUN_00015360 @ 00015360 (152 bytes, called_by=0, calls=0)

int FUN_00015360(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
                undefined4 param_6,undefined4 param_7,undefined1 param_8,undefined1 param_9)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  
  *(undefined1 *)(param_1 + 0xc) = param_9;
  uVar2 = (param_3 + 7U & 0xfffffff8) + 0x7f & 0xffffffc0;
  *(int *)(param_1 + 0x78) = param_1 + 0x78;
  *(int *)(param_1 + 0x7c) = param_1 + 0x78;
  *(undefined1 *)(param_1 + 0xe) = param_8;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined1 *)(param_1 + 0xd) = 4;
  *(undefined1 *)(param_1 + 0xf) = 0;
  if (uVar2 < 0x40) {
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      setBasePriority(0);
    }
    InstructionSynchronizationBarrier(0xf);
    software_interrupt(2);
  }
  *(int *)(param_1 + 0x98) = param_2 + 0x40;
  *(uint *)(param_1 + 0x9c) = uVar2 - 0x40;
  *(undefined4 *)(param_1 + 0xa0) = 0;
  FUN_0000a0a4(param_1,param_2,param_2 + uVar2,param_4,param_5,param_6,param_7);
  iVar3 = DAT_000153f8;
  *(undefined4 *)(param_1 + 0x74) = 0;
  iVar3 = *(int *)(iVar3 + 8);
  *(undefined1 *)(param_1 + 0x90) = 0;
  if (iVar3 == 0) {
    *(undefined4 *)(param_1 + 0xa4) = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0xa4) = *(undefined4 *)(iVar3 + 0xa4);
    FUN_000168a4(param_1 + 0x30,0,0x20);
    *(undefined1 *)(param_1 + 0x4c) = 1;
  }
  return param_2 + uVar2;
}



// FUN_000153fc @ 000153fc (84 bytes, called_by=0, calls=0)

int FUN_000153fc(int param_1)

{
  undefined4 in_stack_00000000;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  int in_stack_00000018;
  int in_stack_0000001c;
  undefined4 uVar1;
  
  uVar1 = 0;
  FUN_00015360();
  if (in_stack_0000001c != -1 || in_stack_00000018 != -1) {
    if (in_stack_0000001c == 0 && in_stack_00000018 == 0) {
      FUN_0001578c(param_1);
    }
    else {
      FUN_00015be0(param_1 + 0x18,DAT_00015450,in_stack_00000018,in_stack_0000001c,in_stack_00000000
                   ,in_stack_00000004,in_stack_00000008,in_stack_0000000c,in_stack_00000010,uVar1);
    }
  }
  return param_1;
}



// FUN_00015454 @ 00015454 (70 bytes, called_by=0, calls=0)

void FUN_00015454(void)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  iVar3 = *(int *)(DAT_0001545c + 8);
  uVar5 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    uVar5 = getBasePriority();
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if ((bVar1) && (uVar2 = getBasePriority(), uVar2 == 0 || 0x40 < uVar2)) {
    setBasePriority(0x40);
  }
  InstructionSynchronizationBarrier(0xf);
  iVar4 = FUN_0001fd1a();
  if (iVar4 == 0) {
    iVar4 = 1;
  }
  *(int *)(DAT_0001611c + 0x14) = iVar4;
  if (*(char *)(iVar3 + 0x4c) != '\0') {
    *(int *)(iVar3 + 0x48) = *(int *)(iVar3 + 0x48) + 1;
    *(undefined4 *)(iVar3 + 0x38) = 0;
    *(undefined4 *)(iVar3 + 0x3c) = 0;
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(uVar5);
  }
  InstructionSynchronizationBarrier(0xf);
  return;
}



// FUN_00015460 @ 00015460 (54 bytes, called_by=0, calls=0)

void FUN_00015460(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  iVar1 = DAT_00015498;
  piVar4 = *(int **)(DAT_00015498 + 0x20);
  if ((piVar4 == (int *)(DAT_00015498 + 0x20)) || (piVar4 == (int *)0x0)) {
    piVar4 = *(int **)(DAT_00015498 + 0xc);
  }
  iVar2 = *(int *)(DAT_00015498 + 8);
  if (((((param_1 != 0) || ((*(byte *)(iVar2 + 0xd) & 0x1f) != 0)) ||
       (*(int *)((int)piVar4 + 0x18) != 0)) || (iVar3 = iVar2, *(ushort *)(iVar2 + 0xe) < 0x80)) &&
     (iVar3 = (int)piVar4, piVar4 != (int *)iVar2)) {
    FUN_00015a70(piVar4);
  }
  *(int *)(iVar1 + 0x1c) = iVar3;
  return;
}



// FUN_0001549c @ 0001549c (42 bytes, called_by=0, calls=0)

void FUN_0001549c(int param_1)

{
  int extraout_r1;
  
  if (*(char *)(param_1 + 0xd) < '\0') {
    *(byte *)(param_1 + 0xd) = *(byte *)(param_1 + 0xd) & 0x7f;
    FUN_00020be2();
    param_1 = extraout_r1;
  }
  FUN_00015460(*(int *)(DAT_000154c8 + 8) == param_1);
  return;
}



// FUN_000154cc @ 000154cc (100 bytes, called_by=0, calls=0)

void FUN_000154cc(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  iVar1 = DAT_00015530;
  if (((*(char *)((int)param_1 + 0xd) < '\0') || ((*(byte *)((int)param_1 + 0xd) & 0x1f) != 0)) ||
     (param_1[6] != 0)) {
    return;
  }
  *(byte *)((int)param_1 + 0xd) = *(byte *)((int)param_1 + 0xd) | 0x80;
  puVar2 = (undefined4 *)(iVar1 + 0x20);
  puVar3 = (undefined4 *)0x0;
  if ((undefined4 *)*puVar2 != puVar2) {
    puVar3 = (undefined4 *)*puVar2;
  }
  puVar4 = *(undefined4 **)(iVar1 + 0x24);
  for (; puVar3 != (undefined4 *)0x0; puVar3 = (undefined4 *)*puVar3) {
    if ((*(char *)((int)param_1 + 0xe) != *(char *)((int)puVar3 + 0xe)) &&
       (*(char *)((int)param_1 + 0xe) < *(char *)((int)puVar3 + 0xe))) {
      puVar2 = (undefined4 *)puVar3[1];
      *param_1 = (int)puVar3;
      param_1[1] = (int)puVar2;
      *puVar2 = param_1;
      puVar3[1] = param_1;
      goto LAB_0001551c;
    }
    if (puVar4 == puVar3) break;
  }
  *param_1 = (int)puVar2;
  param_1[1] = (int)puVar4;
  *puVar4 = param_1;
  *(int **)(iVar1 + 0x24) = param_1;
LAB_0001551c:
  FUN_00015460(0);
  return;
}



// FUN_00015614 @ 00015614 (110 bytes, called_by=0, calls=0)

void FUN_00015614(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int *extraout_r1;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  if (*(char *)((int)param_1 + 0xd) < '\0') {
    *(byte *)((int)param_1 + 0xd) = *(byte *)((int)param_1 + 0xd) & 0x7f;
    FUN_00020be2();
    param_1 = extraout_r1;
  }
  iVar1 = DAT_00015684;
  *(byte *)((int)param_1 + 0xd) = *(byte *)((int)param_1 + 0xd) | 0x80;
  puVar2 = (undefined4 *)(iVar1 + 0x20);
  puVar3 = (undefined4 *)*puVar2;
  puVar4 = *(undefined4 **)(iVar1 + 0x24);
  if (puVar3 == puVar2) {
    puVar3 = (undefined4 *)0x0;
  }
  for (; puVar3 != (undefined4 *)0x0; puVar3 = (undefined4 *)*puVar3) {
    if ((*(char *)((int)param_1 + 0xe) != *(char *)((int)puVar3 + 0xe)) &&
       (*(char *)((int)param_1 + 0xe) < *(char *)((int)puVar3 + 0xe))) {
      puVar2 = (undefined4 *)puVar3[1];
      *param_1 = (int)puVar3;
      param_1[1] = (int)puVar2;
      *puVar2 = param_1;
      puVar3[1] = param_1;
      goto LAB_0001566a;
    }
    if (puVar4 == puVar3) break;
  }
  *param_1 = (int)puVar2;
  param_1[1] = (int)puVar4;
  *puVar4 = param_1;
  *(int **)(iVar1 + 0x24) = param_1;
LAB_0001566a:
  FUN_00015460(*(int **)(iVar1 + 8) == param_1);
  return;
}



// FUN_00015688 @ 00015688 (76 bytes, called_by=0, calls=0)

void FUN_00015688(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 int param_5,int param_6)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = DAT_000156d4;
  *DAT_000156d8 = *(undefined4 *)(DAT_000156d4 + 8);
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    getBasePriority();
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if ((bVar1) && (uVar2 = getBasePriority(), uVar2 == 0 || 0x40 < uVar2)) {
    setBasePriority(0x40);
  }
  InstructionSynchronizationBarrier(0xf);
  iVar3 = *(int *)(iVar3 + 8);
  FUN_00020c06(iVar3,param_3);
  if (param_6 != -1 || param_5 != -1) {
    FUN_00015be0(iVar3 + 0x18,DAT_000156dc,param_5,param_6);
  }
  FUN_00009ef8(param_2);
  return;
}



// FUN_00015768 @ 00015768 (32 bytes, called_by=0, calls=0)

void FUN_00015768(undefined4 param_1,int param_2)

{
  bool bVar1;
  uint uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      uVar2 = getCurrentExceptionNumber();
      uVar2 = uVar2 & 0x1f;
    }
    if (uVar2 == 0) {
      if (*(int *)(DAT_00015788 + 0x1c) != *(int *)(DAT_00015788 + 8)) {
        FUN_00009ef8();
        return;
      }
    }
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(param_2);
  }
  InstructionSynchronizationBarrier(0xf);
  return;
}



// FUN_0001578c @ 0001578c (54 bytes, called_by=0, calls=0)

void FUN_0001578c(int param_1)

{
  bool bVar1;
  uint uVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    uVar3 = getBasePriority();
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if ((bVar1) && (uVar2 = getBasePriority(), uVar2 == 0 || 0x40 < uVar2)) {
    setBasePriority(0x40);
  }
  InstructionSynchronizationBarrier(0xf);
  if ((int)((uint)*(byte *)(param_1 + 0xd) << 0x1d) < 0) {
    *(byte *)(param_1 + 0xd) = *(byte *)(param_1 + 0xd) & 0xfb;
    FUN_000154cc();
    FUN_00015768(DAT_000157c4,uVar3);
    return;
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(uVar3);
  }
  InstructionSynchronizationBarrier(0xf);
  return;
}



// FUN_000157c8 @ 000157c8 (34 bytes, called_by=0, calls=0)

void FUN_000157c8(int param_1)

{
  bool bVar1;
  uint uVar2;
  
  if (param_1 == 0) {
    uVar2 = 0;
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      uVar2 = getCurrentExceptionNumber();
      uVar2 = uVar2 & 0x1f;
    }
    if (uVar2 == 0) {
      if (*(int *)(DAT_000157ec + 0x1c) != *(int *)(DAT_000157ec + 8)) {
        FUN_00009ef8();
        return;
      }
    }
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(param_1);
  }
  InstructionSynchronizationBarrier(0xf);
  return;
}



// FUN_000157f0 @ 000157f0 (34 bytes, called_by=0, calls=0)

void FUN_000157f0(void)

{
  bool bVar1;
  uint uVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    uVar3 = getBasePriority();
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if ((bVar1) && (uVar2 = getBasePriority(), uVar2 == 0 || 0x40 < uVar2)) {
    setBasePriority(0x40);
  }
  InstructionSynchronizationBarrier(0xf);
  *(char *)(*(int *)(DAT_00015814 + 8) + 0xf) = *(char *)(*(int *)(DAT_00015814 + 8) + 0xf) + -1;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(uVar3);
  }
  InstructionSynchronizationBarrier(0xf);
  return;
}



// FUN_00015818 @ 00015818 (60 bytes, called_by=0, calls=0)

void FUN_00015818(void)

{
  bool bVar1;
  uint uVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    uVar3 = getBasePriority();
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if ((bVar1) && (uVar2 = getBasePriority(), uVar2 == 0 || 0x40 < uVar2)) {
    setBasePriority(0x40);
  }
  InstructionSynchronizationBarrier(0xf);
  *(char *)(*(int *)(DAT_00015854 + 8) + 0xf) = *(char *)(*(int *)(DAT_00015854 + 8) + 0xf) + '\x01'
  ;
  FUN_00015460(0);
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(uVar3);
  }
  InstructionSynchronizationBarrier(0xf);
  uVar3 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    uVar3 = getBasePriority();
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if ((bVar1) && (uVar2 = getBasePriority(), uVar2 == 0 || 0x40 < uVar2)) {
    setBasePriority(0x40);
  }
  InstructionSynchronizationBarrier(0xf);
  FUN_000157c8(uVar3);
  return;
}



// FUN_00015868 @ 00015868 (118 bytes, called_by=0, calls=0)

void FUN_00015868(void)

{
  bool bVar1;
  uint uVar2;
  int extraout_r1;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  
  uVar7 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    uVar7 = getBasePriority();
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if ((bVar1) && (uVar2 = getBasePriority(), uVar2 == 0 || 0x40 < uVar2)) {
    setBasePriority(0x40);
  }
  InstructionSynchronizationBarrier(0xf);
  *(byte *)(*(int *)(DAT_000158e0 + 8) + 0xd) = *(byte *)(*(int *)(DAT_000158e0 + 8) + 0xd) & 0x7f;
  FUN_00020be2();
  piVar5 = *(int **)(extraout_r1 + 8);
  *(byte *)((int)piVar5 + 0xd) = *(byte *)((int)piVar5 + 0xd) | 0x80;
  puVar3 = (undefined4 *)(extraout_r1 + 0x20);
  puVar4 = (undefined4 *)*puVar3;
  puVar6 = *(undefined4 **)(extraout_r1 + 0x24);
  if (puVar4 == puVar3) {
    puVar4 = (undefined4 *)0x0;
  }
  for (; puVar4 != (undefined4 *)0x0; puVar4 = (undefined4 *)*puVar4) {
    if ((*(char *)((int)piVar5 + 0xe) != *(char *)((int)puVar4 + 0xe)) &&
       (*(char *)((int)piVar5 + 0xe) < *(char *)((int)puVar4 + 0xe))) {
      puVar3 = (undefined4 *)puVar4[1];
      *piVar5 = (int)puVar4;
      piVar5[1] = (int)puVar3;
      *puVar3 = piVar5;
      puVar4[1] = piVar5;
      goto LAB_000158c6;
    }
    if (puVar4 == puVar6) break;
  }
  *piVar5 = (int)puVar3;
  piVar5[1] = (int)puVar6;
  *puVar6 = piVar5;
  *(int **)(extraout_r1 + 0x24) = piVar5;
LAB_000158c6:
  FUN_00015460(1);
  FUN_00009ef8(uVar7);
  return;
}



// FUN_000158e4 @ 000158e4 (122 bytes, called_by=0, calls=0)

int FUN_000158e4(uint param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  
  if (param_1 == 0 && param_2 == 0) {
    FUN_00015868();
  }
  else {
    if ((int)((param_2 + 1) - (uint)(param_1 < 0xfffffffe)) < 0 ==
        (SBORROW4(param_2,-1) != SBORROW4(param_2 + 1,(uint)(param_1 < 0xfffffffe)))) {
      iVar2 = FUN_00020ec4();
      uVar4 = param_1 + iVar2;
    }
    else {
      uVar4 = -param_1 - 2;
    }
    iVar2 = DAT_00015960;
    uVar5 = 0;
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      uVar5 = getBasePriority();
    }
    bVar1 = (bool)isCurrentModePrivileged();
    if ((bVar1) && (uVar3 = getBasePriority(), uVar3 == 0 || 0x40 < uVar3)) {
      setBasePriority(0x40);
    }
    InstructionSynchronizationBarrier(0xf);
    *DAT_00015964 = *(undefined4 *)(DAT_00015960 + 8);
    FUN_0001549c();
    FUN_00015be0(*(int *)(iVar2 + 8) + 0x18,DAT_00015968,param_1,param_2);
    iVar2 = *(int *)(iVar2 + 8);
    *(byte *)(iVar2 + 0xd) = *(byte *)(iVar2 + 0xd) | 0x10;
    FUN_00009ef8(uVar5);
    uVar3 = FUN_00020ec4();
    if ((int)(uint)(uVar4 - uVar3 == 0) <= (int)-(uint)(uVar4 < uVar3)) {
      return uVar4 - uVar3;
    }
  }
  return 0;
}



// FUN_0001596c @ 0001596c (54 bytes, called_by=0, calls=0)

uint FUN_0001596c(int param_1,int param_2)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  
  if (param_2 == -1 && param_1 == -1) {
    FUN_00020c86(*(undefined4 *)(DAT_000159a4 + 8));
    uVar2 = 0xffffffff;
  }
  else {
    iVar3 = FUN_000158e4();
    lVar1 = (longlong)iVar3 * 1000 + 0x7fff;
    uVar2 = (uint)lVar1 >> 0xf | (int)((ulonglong)lVar1 >> 0x20) << 0x11;
  }
  return uVar2;
}



// FUN_000159a8 @ 000159a8 (52 bytes, called_by=0, calls=0)

uint FUN_000159a8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = (longlong)param_1 * 0x8000 + (ulonglong)DAT_000159dc;
  iVar2 = FUN_00001904((int)lVar1,(int)((ulonglong)lVar1 >> 0x20),DAT_000159e0,0,param_4);
  iVar2 = FUN_000158e4(iVar2,iVar2 >> 0x1f);
  lVar1 = (longlong)iVar2 * (longlong)DAT_000159e0 + 0x7fff;
  return (uint)lVar1 >> 0xf | (int)((ulonglong)lVar1 >> 0x20) << 0x11;
}



// FUN_000159e4 @ 000159e4 (6 bytes, called_by=0, calls=0)

undefined4 FUN_000159e4(void)

{
  return *(undefined4 *)(DAT_000159ec + 8);
}



// FUN_000159f0 @ 000159f0 (30 bytes, called_by=0, calls=0)

void FUN_000159f0(void)

{
  undefined4 *in_stack_00000008;
  
  FUN_00015688();
  if (in_stack_00000008 != (undefined4 *)0x0) {
    *in_stack_00000008 = *(undefined4 *)(*(int *)(DAT_00015a10 + 8) + 0x14);
  }
  return;
}



// FUN_00015a34 @ 00015a34 (48 bytes, called_by=0, calls=0)

uint FUN_00015a34(int param_1)

{
  uint uVar1;
  
  if (*(ushort *)(param_1 + 0xe) < 0x80) {
    uVar1 = *DAT_00015a64;
    if (uVar1 == 0) goto LAB_00015a5a;
    if ((*DAT_00015a68 <= (int)*(char *)(param_1 + 0xe)) && ((*(byte *)(param_1 + 0xd) & 0x1f) == 0)
       ) {
      uVar1 = param_1 - DAT_00015a6c;
      if (uVar1 != 0) {
        uVar1 = 1;
      }
      goto LAB_00015a5a;
    }
  }
  uVar1 = 0;
LAB_00015a5a:
  return uVar1 & 1;
}



// FUN_00015a70 @ 00015a70 (60 bytes, called_by=0, calls=0)

void FUN_00015a70(undefined4 param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  
  bVar1 = *(byte *)(DAT_00015aac + 0x10);
  iVar3 = DAT_00015ab0 + (uint)bVar1 * 0x18;
  FUN_00020e9a(iVar3);
  *(undefined1 *)(DAT_00015ab4 + (uint)bVar1) = 0;
  iVar2 = FUN_00015a34(param_1);
  if (iVar2 != 0) {
    FUN_00015be0(iVar3,DAT_00015abc,*DAT_00015ab8 + -1,*DAT_00015ab8 + -1 >> 0x1f);
    return;
  }
  return;
}



// FUN_00015b54 @ 00015b54 (28 bytes, called_by=0, calls=0)

int FUN_00015b54(void)

{
  int iVar1;
  
  if (*DAT_00015b64 == 0) {
    iVar1 = FUN_000102b0();
    return iVar1 - *DAT_000105e4;
  }
  return 0;
}



// FUN_00015b68 @ 00015b68 (50 bytes, called_by=0, calls=0)

void FUN_00015b68(int *param_1)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  if (((param_1 != (int *)0x0) && (param_1 != *(int **)(DAT_00015b9c + 4))) &&
     (iVar3 = *param_1, iVar3 != 0)) {
    uVar1 = *(uint *)(iVar3 + 0x10);
    uVar4 = param_1[4];
    iVar5 = param_1[5];
    *(uint *)(iVar3 + 0x10) = uVar1 + uVar4;
    *(uint *)(iVar3 + 0x14) = *(int *)(iVar3 + 0x14) + iVar5 + (uint)CARRY4(uVar1,uVar4);
  }
  iVar3 = *param_1;
  piVar2 = (int *)param_1[1];
  *piVar2 = iVar3;
  *(int **)(iVar3 + 4) = piVar2;
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



// FUN_00015ba0 @ 00015ba0 (58 bytes, called_by=0, calls=0)

uint FUN_00015ba0(void)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  
  piVar4 = (int *)*DAT_00015bdc;
  if (piVar4 == DAT_00015bdc) {
    FUN_00015b54();
  }
  else {
    uVar1 = FUN_00015b54();
    if (piVar4 != (int *)0x0) {
      uVar3 = piVar4[4] - uVar1;
      iVar2 = (piVar4[5] - ((int)uVar1 >> 0x1f)) - (uint)((uint)piVar4[4] < uVar1);
      if (iVar2 < (int)(uint)(uVar3 < 0x80000000)) {
        if (-1 < iVar2) {
          return uVar3;
        }
        return 0;
      }
    }
  }
  return 0x7fffffff;
}



// FUN_00015be0 @ 00015be0 (232 bytes, called_by=0, calls=0)

void FUN_00015be0(int *param_1,int param_2,uint param_3,int param_4)

{
  bool bVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  
  if (param_4 != -1 || param_3 != 0xffffffff) {
    param_1[2] = param_2;
    uVar9 = 0;
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      uVar9 = getBasePriority();
    }
    bVar1 = (bool)isCurrentModePrivileged();
    if ((bVar1) && (uVar5 = getBasePriority(), uVar5 == 0 || 0x40 < uVar5)) {
      setBasePriority(0x40);
    }
    InstructionSynchronizationBarrier(0xf);
    iVar4 = (param_4 + 1) - (uint)(param_3 != 0xffffffff);
    if (iVar4 < 0 == (SBORROW4(param_4,-1) != SBORROW4(param_4 + 1,(uint)(param_3 != 0xffffffff))))
    {
      uVar5 = FUN_00015b54(param_1,param_2,param_3 + 1,iVar4,param_4);
      iVar8 = param_3 + 1 + uVar5;
      iVar4 = param_4 + (uint)(0xfffffffe < param_3) +
              ((int)uVar5 >> 0x1f) + (uint)CARRY4(param_3 + 1,uVar5);
    }
    else {
      uVar5 = -*DAT_00015cc8 - 2;
      iVar8 = uVar5 - param_3;
      iVar4 = (((-1 - DAT_00015cc8[1]) - (uint)(0xfffffffe < *DAT_00015cc8)) - param_4) -
              (uint)(uVar5 < param_3);
      if (iVar4 < (int)(uint)(iVar8 == 0)) {
        iVar8 = 1;
        iVar4 = 0;
      }
    }
    param_1[4] = iVar8;
    param_1[5] = iVar4;
    piVar2 = DAT_00015ccc;
    puVar10 = (undefined4 *)*DAT_00015ccc;
    puVar7 = (undefined4 *)DAT_00015ccc[1];
    if (puVar10 == DAT_00015ccc) {
      puVar10 = (undefined4 *)0x0;
    }
    for (; puVar10 != (undefined4 *)0x0; puVar10 = (undefined4 *)*puVar10) {
      uVar5 = puVar10[4];
      iVar4 = puVar10[5];
      uVar6 = param_1[4];
      iVar8 = param_1[5];
      if ((int)((iVar8 - iVar4) - (uint)(uVar6 < uVar5)) < 0 !=
          (SBORROW4(iVar8,iVar4) != SBORROW4(iVar8 - iVar4,(uint)(uVar6 < uVar5)))) {
        puVar7 = (undefined4 *)puVar10[1];
        puVar10[4] = uVar5 - uVar6;
        puVar10[5] = (iVar4 - iVar8) - (uint)(uVar5 < uVar6);
        *param_1 = (int)puVar10;
        param_1[1] = (int)puVar7;
        *puVar7 = param_1;
        puVar10[1] = param_1;
        goto LAB_00015c90;
      }
      param_1[4] = uVar6 - uVar5;
      param_1[5] = (iVar8 - iVar4) - (uint)(uVar6 < uVar5);
      if (puVar10 == puVar7) break;
    }
    *param_1 = (int)piVar2;
    param_1[1] = (int)puVar7;
    *puVar7 = param_1;
    piVar2[1] = (int)param_1;
LAB_00015c90:
    if ((((int *)*piVar2 != piVar2) && (param_1 == (int *)*piVar2)) && (*DAT_00015cd0 == 0)) {
      uVar3 = FUN_00015ba0();
      FUN_00010578(uVar3,0);
    }
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      setBasePriority(uVar9);
    }
    InstructionSynchronizationBarrier(0xf);
  }
  return;
}



// FUN_00015cd4 @ 00015cd4 (278 bytes, called_by=0, calls=0)

void FUN_00015cd4(uint param_1)

{
  byte bVar1;
  bool bVar2;
  int *piVar3;
  uint *puVar4;
  uint *puVar5;
  int iVar6;
  int *piVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  undefined4 uVar13;
  int iVar14;
  
  puVar5 = DAT_00015da0;
  puVar4 = DAT_00015d9c;
  piVar3 = DAT_00015d98;
  uVar13 = 0;
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    uVar13 = getBasePriority();
  }
  bVar2 = (bool)isCurrentModePrivileged();
  if ((bVar2) && (uVar9 = getBasePriority(), uVar9 == 0 || 0x40 < uVar9)) {
    setBasePriority(0x40);
  }
  InstructionSynchronizationBarrier(0xf);
  *DAT_00015d9c = param_1;
  piVar7 = (int *)*piVar3;
  if (piVar7 == piVar3) {
    piVar7 = (int *)0x0;
  }
  do {
    uVar10 = *puVar5;
    uVar9 = puVar5[1];
    uVar11 = *puVar4;
    if (piVar7 == (int *)0x0) goto LAB_00015d6e;
    uVar12 = piVar7[4];
    iVar14 = piVar7[5];
    iVar6 = (int)uVar11 >> 0x1f;
    if ((int)((iVar6 - iVar14) - (uint)(uVar11 < uVar12)) < 0 !=
        (SBORROW4(iVar6,iVar14) != SBORROW4(iVar6 - iVar14,(uint)(uVar11 < uVar12)))) {
      piVar7[4] = uVar12 - uVar11;
      piVar7[5] = (iVar14 - iVar6) - (uint)(uVar12 < uVar11);
      goto LAB_00015d6e;
    }
    piVar7[4] = 0;
    piVar7[5] = 0;
    *puVar5 = uVar12 + uVar10;
    puVar5[1] = uVar9 + ((int)uVar12 >> 0x1f) + (uint)CARRY4(uVar12,uVar10);
    iVar6 = FUN_00015b68();
    bVar2 = (bool)isCurrentModePrivileged();
    if (bVar2) {
      setBasePriority(uVar13);
    }
    InstructionSynchronizationBarrier(0xf);
    (**(code **)(iVar6 + 8))();
    uVar13 = 0;
    bVar2 = (bool)isCurrentModePrivileged();
    if (bVar2) {
      uVar13 = getBasePriority();
    }
    bVar2 = (bool)isCurrentModePrivileged();
    if ((bVar2) && (uVar9 = getBasePriority(), uVar9 == 0 || 0x40 < uVar9)) {
      setBasePriority(0x40);
    }
    InstructionSynchronizationBarrier(0xf);
    piVar7 = (int *)*piVar3;
    uVar11 = *puVar4 - uVar12;
    *puVar4 = uVar11;
  } while (piVar7 != piVar3);
  uVar10 = *puVar5;
  uVar9 = puVar5[1];
LAB_00015d6e:
  *puVar5 = uVar11 + uVar10;
  puVar5[1] = uVar9 + ((int)uVar11 >> 0x1f) + (uint)CARRY4(uVar11,uVar10);
  *puVar4 = 0;
  uVar8 = FUN_00015ba0();
  FUN_00010578(uVar8,0);
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    setBasePriority(uVar13);
  }
  InstructionSynchronizationBarrier(0xf);
  uVar13 = 0;
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    uVar13 = getBasePriority();
  }
  bVar2 = (bool)isCurrentModePrivileged();
  if ((bVar2) && (uVar9 = getBasePriority(), uVar9 == 0 || 0x40 < uVar9)) {
    setBasePriority(0x40);
  }
  InstructionSynchronizationBarrier(0xf);
  iVar14 = *(int *)(DAT_00015b14 + 8);
  iVar6 = *DAT_00015b18;
  if (*DAT_00015b18 != iVar14) {
    bVar1 = *(byte *)(DAT_00015b14 + 0x10);
    *DAT_00015b18 = 0;
    if ((*(char *)(DAT_00015b1c + (uint)bVar1) == '\0') ||
       (iVar6 = FUN_00015a34(iVar14), iVar6 == 0)) goto LAB_00015ae0;
    iVar6 = iVar14;
    if ((*(byte *)(iVar14 + 0xd) & 0x1f) == 0) {
      FUN_00015614(iVar14);
    }
  }
  FUN_00015a70(iVar6);
LAB_00015ae0:
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    setBasePriority(uVar13);
  }
  InstructionSynchronizationBarrier(0xf);
  return;
}



// FUN_00015da4 @ 00015da4 (44 bytes, called_by=0, calls=0)

undefined8 FUN_00015da4(void)

{
  bool bVar1;
  uint uVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    uVar3 = getBasePriority();
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if ((bVar1) && (uVar2 = getBasePriority(), uVar2 == 0 || 0x40 < uVar2)) {
    setBasePriority(0x40);
  }
  InstructionSynchronizationBarrier(0xf);
  uVar2 = FUN_00015b54();
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(uVar3);
  }
  InstructionSynchronizationBarrier(0xf);
  return CONCAT44(DAT_00015dd0[1] + ((int)uVar2 >> 0x1f) + (uint)CARRY4(uVar2,*DAT_00015dd0),
                  uVar2 + *DAT_00015dd0);
}



// FUN_00015eb4 @ 00015eb4 (110 bytes, called_by=0, calls=0)

void FUN_00015eb4(int param_1,undefined4 param_2,int param_3,int param_4,undefined4 param_5,
                 undefined4 param_6)

{
  uint uVar1;
  undefined4 uVar2;
  bool bVar3;
  
  uVar2 = 0;
  bVar3 = (bool)isCurrentModePrivileged();
  if (bVar3) {
    uVar2 = getBasePriority();
  }
  bVar3 = (bool)isCurrentModePrivileged();
  if ((bVar3) && (uVar1 = getBasePriority(), uVar1 == 0 || 0x40 < uVar1)) {
    setBasePriority(0x40);
  }
  InstructionSynchronizationBarrier(0xf);
  if (param_4 != -1 || param_3 != -1) {
    if ((int)((param_4 + 1) - (uint)(param_3 != -1)) < 0 ==
        (SBORROW4(param_4,-1) != SBORROW4(param_4 + 1,(uint)(param_3 != -1)))) {
      if (param_4 < (int)(uint)(param_3 == 0)) {
        param_3 = 1;
        param_4 = 0;
      }
      bVar3 = param_3 != 0;
      param_3 = param_3 + -1;
      param_4 = param_4 + -1 + (uint)bVar3;
    }
    FUN_00020e9a(param_1);
    *(undefined4 *)(param_1 + 0x28) = param_5;
    *(undefined4 *)(param_1 + 0x2c) = param_6;
    *(undefined4 *)(param_1 + 0x30) = 0;
    FUN_00015be0(param_1,DAT_00015f24,param_3,param_4);
  }
  bVar3 = (bool)isCurrentModePrivileged();
  if (bVar3) {
    setBasePriority(uVar2);
  }
  InstructionSynchronizationBarrier(0xf);
  return;
}



// FUN_00015f7c @ 00015f7c (162 bytes, called_by=0, calls=0)

undefined4 FUN_00015f7c(undefined4 param_1,undefined4 param_2,uint param_3,uint param_4)

{
  bool bVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  
  iVar5 = *(int *)(DAT_00016020 + 8);
  *(undefined1 *)(iVar5 + 0x80) = 1;
  *(undefined1 *)(iVar5 + 0x81) = 1;
  uVar3 = FUN_00021088(param_1,param_2,iVar5 + 0x80,param_3 == 0 && param_4 == 0,param_1,param_2,
                       param_3);
  uVar6 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    uVar6 = getBasePriority();
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if ((bVar1) && (uVar2 = getBasePriority(), uVar2 == 0 || 0x40 < uVar2)) {
    setBasePriority(0x40);
  }
  InstructionSynchronizationBarrier(0xf);
  if (*(char *)(iVar5 + 0x80) == '\0') {
    FUN_00020fca(param_1,uVar3,uVar6);
    bVar1 = (bool)isCurrentModePrivileged();
    uVar4 = 0;
    if (bVar1) {
      setBasePriority(uVar6);
    }
  }
  else {
    *(undefined1 *)(iVar5 + 0x80) = 0;
    if ((param_3 | param_4) == 0) {
      bVar1 = (bool)isCurrentModePrivileged();
      if (bVar1) {
        setBasePriority(uVar6);
      }
      InstructionSynchronizationBarrier(0xf);
      return 0xfffffff5;
    }
    uVar4 = FUN_00015688(DAT_00016028,uVar6,DAT_00016024,param_3 | param_4,param_3,param_4);
    uVar6 = 0;
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      uVar6 = getBasePriority();
    }
    bVar1 = (bool)isCurrentModePrivileged();
    if ((bVar1) && (uVar2 = getBasePriority(), uVar2 == 0 || 0x40 < uVar2)) {
      setBasePriority(0x40);
    }
    InstructionSynchronizationBarrier(0xf);
    FUN_00020fca(param_1,uVar3,uVar6);
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      setBasePriority(uVar6);
    }
  }
  InstructionSynchronizationBarrier(0xf);
  return uVar4;
}



// FUN_0001602c @ 0001602c (74 bytes, called_by=0, calls=0)

undefined4 FUN_0001602c(int *param_1,int param_2)

{
  bool bVar1;
  uint uVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  uVar7 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    uVar7 = getBasePriority();
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if ((bVar1) && (uVar2 = getBasePriority(), uVar2 == 0 || 0x40 < uVar2)) {
    setBasePriority(0x40);
  }
  InstructionSynchronizationBarrier(0xf);
  param_1[3] = param_2;
  param_1[2] = 1;
  piVar3 = (int *)*param_1;
  if (param_1 == piVar3) {
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      setBasePriority(uVar7);
    }
    InstructionSynchronizationBarrier(0xf);
    uVar6 = 0;
  }
  else {
    iVar5 = *piVar3;
    piVar4 = (int *)piVar3[1];
    *piVar4 = iVar5;
    *(int **)(iVar5 + 4) = piVar4;
    *piVar3 = 0;
    piVar3[1] = 0;
    uVar6 = FUN_00021178();
    FUN_00015768(DAT_00016078,uVar7);
  }
  return uVar6;
}



// FUN_00016170 @ 00016170 (8 bytes, called_by=0, calls=0)

void FUN_00016170(int param_1)

{
  *(undefined4 *)(param_1 + 0xa4) = DAT_00016178;
  return;
}



// FUN_0001617c @ 0001617c (78 bytes, called_by=0, calls=0)

int * FUN_0001617c(uint param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  undefined4 unaff_r4;
  
  iVar1 = FUN_00020bc4();
  iVar4 = DAT_000161a8;
  if ((iVar1 == 0) && (iVar4 = *(int *)(*(int *)(DAT_000161a4 + 8) + 0xa4), iVar4 == 0)) {
    return (int *)0x0;
  }
  if ((param_2 < 0xfffffffc) &&
     (piVar2 = (int *)FUN_000206e8(iVar4,param_1 | 4,param_2 + 4,param_4,0,0,unaff_r4),
     piVar2 != (int *)0x0)) {
    piVar3 = piVar2 + 1;
    *piVar2 = iVar4;
  }
  else {
    piVar3 = (int *)0x0;
  }
  return piVar3;
}



// FUN_000161ac @ 000161ac (10 bytes, called_by=0, calls=0)

void FUN_000161ac(undefined4 param_1)

{
  FUN_000161cc(*DAT_000161b8,param_1);
  return;
}



// FUN_000161bc @ 000161bc (10 bytes, called_by=0, calls=0)

void FUN_000161bc(undefined4 param_1)

{
  FUN_00018a90(*DAT_000161c8,param_1);
  return;
}



// FUN_000161cc @ 000161cc (1370 bytes, called_by=0, calls=0)

int * FUN_000161cc(undefined4 *param_1,uint param_2)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  int *piVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  int *piVar19;
  
  uVar16 = param_2 + 0xb;
  if (uVar16 < 0x17) {
    if (0x10 < param_2) {
LAB_00016342:
      *param_1 = 0xc;
      return (int *)0x0;
    }
    FUN_00016948();
    uVar17 = 0x10;
    iVar7 = 0x18;
    uVar16 = 2;
LAB_000161ee:
    iVar7 = iVar7 + DAT_000164e0;
    iVar15 = *(int *)(iVar7 + 4);
    if ((iVar15 != iVar7 + -8) || (iVar15 = *(int *)(iVar7 + 0xc), iVar7 != iVar15)) {
      iVar8 = *(int *)(iVar15 + 0xc);
      iVar7 = *(int *)(iVar15 + 8);
      iVar9 = (*(uint *)(iVar15 + 4) & 0xfffffffc) + iVar15;
      *(int *)(iVar7 + 0xc) = iVar8;
      *(int *)(iVar8 + 8) = iVar7;
      *(uint *)(iVar9 + 4) = *(uint *)(iVar9 + 4) | 1;
      FUN_00016954(param_1);
      return (int *)(iVar15 + 8);
    }
    uVar16 = uVar16 + 2;
  }
  else {
    uVar17 = uVar16 & 0xfffffff8;
    if (((int)uVar17 < 0) || (uVar17 < param_2)) goto LAB_00016342;
    FUN_00016948();
    if (uVar17 < 0x1f8) {
      uVar16 = uVar16 >> 3;
      iVar7 = uVar17 + 8;
      goto LAB_000161ee;
    }
    uVar10 = uVar16 >> 9;
    if (uVar10 == 0) {
      iVar7 = 0x200;
      uVar12 = 0x40;
      uVar10 = 0x3f;
    }
    else if (uVar10 < 5) {
      uVar12 = (uVar16 >> 6) + 0x39;
      uVar10 = (uVar16 >> 6) + 0x38;
      iVar7 = uVar12 * 8;
    }
    else if (uVar10 < 0x15) {
      uVar12 = uVar10 + 0x5c;
      uVar10 = uVar10 + 0x5b;
      iVar7 = uVar12 * 8;
    }
    else if (uVar10 < 0x55) {
      uVar12 = (uVar16 >> 0xc) + 0x6f;
      uVar10 = (uVar16 >> 0xc) + 0x6e;
      iVar7 = uVar12 * 8;
    }
    else if (uVar10 < 0x155) {
      uVar12 = (uVar16 >> 0xf) + 0x78;
      uVar10 = (uVar16 >> 0xf) + 0x77;
      iVar7 = uVar12 * 8;
    }
    else if (uVar10 < 0x555) {
      uVar12 = (uVar16 >> 0x12) + 0x7d;
      uVar10 = (uVar16 >> 0x12) + 0x7c;
      iVar7 = uVar12 * 8;
    }
    else {
      iVar7 = 0x3f8;
      uVar12 = 0x7f;
      uVar10 = 0x7e;
    }
    for (iVar15 = *(int *)(iVar7 + DAT_000164e0 + 4); uVar16 = uVar12,
        iVar7 + DAT_000164e0 + -8 != iVar15; iVar15 = *(int *)(iVar15 + 0xc)) {
      uVar11 = *(uint *)(iVar15 + 4) & 0xfffffffc;
      iVar8 = uVar11 - uVar17;
      uVar16 = uVar10;
      if (0xf < iVar8) break;
      if (-1 < iVar8) {
        iVar9 = *(int *)(iVar15 + 8);
        iVar7 = *(int *)(iVar15 + 0xc);
        iVar8 = uVar11 + iVar15;
        *(int *)(iVar9 + 0xc) = iVar7;
        *(int *)(iVar7 + 8) = iVar9;
        *(uint *)(iVar8 + 4) = *(uint *)(iVar8 + 4) | 1;
        FUN_00016954(param_1);
        return (int *)(iVar15 + 8);
      }
    }
  }
  iVar7 = DAT_000164e4;
  uVar10 = DAT_000164e0;
  iVar15 = *(int *)(DAT_000164e0 + 0x10);
  if (iVar15 == DAT_000164e4) {
    uVar12 = *(uint *)(DAT_000164e0 + 4);
  }
  else {
    uVar11 = *(uint *)(iVar15 + 4);
    uVar18 = uVar11 & 0xfffffffc;
    uVar12 = uVar18 - uVar17;
    if (0xf < (int)uVar12) {
      iVar8 = iVar15 + uVar17;
      *(uint *)(iVar15 + 4) = uVar17 | 1;
      *(int *)(uVar10 + 0x10) = iVar8;
      *(int *)(uVar10 + 0x14) = iVar8;
      *(int *)(iVar8 + 8) = iVar7;
      *(int *)(iVar8 + 0xc) = iVar7;
      *(uint *)(iVar8 + 4) = uVar12 | 1;
      *(uint *)(iVar15 + uVar18) = uVar12;
      FUN_00016954(param_1);
      return (int *)(iVar15 + 8);
    }
    *(int *)(DAT_000164e0 + 0x10) = DAT_000164e4;
    *(int *)(uVar10 + 0x14) = iVar7;
    if (-1 < (int)uVar12) {
      *(uint *)(uVar18 + iVar15 + 4) = *(uint *)(uVar18 + iVar15 + 4) | 1;
      FUN_00016954(param_1);
      return (int *)(iVar15 + 8);
    }
    uVar12 = *(uint *)(uVar10 + 4);
    if (uVar18 < 0x200) {
      iVar8 = (uVar11 >> 3) + 1;
      iVar9 = *(int *)(uVar10 + iVar8 * 8);
      *(int *)(iVar15 + 8) = iVar9;
      uVar12 = uVar12 | 1 << (uVar11 >> 5 & 0xff);
      *(uint *)(iVar15 + 0xc) = uVar10 + iVar8 * 8 + -8;
      *(uint *)(uVar10 + 4) = uVar12;
      *(int *)(uVar10 + iVar8 * 8) = iVar15;
      *(int *)(iVar9 + 0xc) = iVar15;
    }
    else {
      uVar3 = uVar11 >> 9;
      if (uVar18 < 0xa00) {
        iVar8 = ((uVar11 >> 6) + 0x39) * 8;
        iVar9 = (uVar11 >> 6) + 0x38;
      }
      else if (uVar3 < 0x15) {
        iVar8 = (uVar3 + 0x5c) * 8;
        iVar9 = uVar3 + 0x5b;
      }
      else if (uVar3 < 0x55) {
        iVar8 = ((uVar11 >> 0xc) + 0x6f) * 8;
        iVar9 = (uVar11 >> 0xc) + 0x6e;
      }
      else if (uVar3 < 0x155) {
        iVar8 = ((uVar11 >> 0xf) + 0x78) * 8;
        iVar9 = (uVar11 >> 0xf) + 0x77;
      }
      else if (uVar3 < 0x555) {
        iVar8 = ((uVar11 >> 0x12) + 0x7d) * 8;
        iVar9 = (uVar11 >> 0x12) + 0x7c;
      }
      else {
        iVar8 = 0x3f8;
        iVar9 = 0x7e;
      }
      iVar13 = *(int *)(uVar10 + iVar8);
      iVar8 = uVar10 + iVar8 + -8;
      if (iVar8 == iVar13) {
        uVar12 = uVar12 | 1 << (iVar9 >> 2 & 0xffU);
        *(uint *)(uVar10 + 4) = uVar12;
      }
      else {
        do {
          if ((*(uint *)(iVar13 + 4) & 0xfffffffc) <= uVar18) break;
          iVar13 = *(int *)(iVar13 + 8);
        } while (iVar8 != iVar13);
        iVar8 = *(int *)(iVar13 + 0xc);
      }
      *(int *)(iVar15 + 8) = iVar13;
      *(int *)(iVar15 + 0xc) = iVar8;
      *(int *)(iVar8 + 8) = iVar15;
      *(int *)(iVar13 + 0xc) = iVar15;
    }
  }
  uVar11 = 1 << ((int)uVar16 >> 2 & 0xffU);
  if (uVar11 <= uVar12) {
    if ((uVar11 & uVar12) == 0) {
      uVar16 = uVar16 & 0xfffffffc;
      do {
        uVar11 = uVar11 << 1;
        uVar16 = uVar16 + 4;
      } while ((uVar11 & uVar12) == 0);
    }
    do {
      piVar19 = (int *)(uVar10 + uVar16 * 8);
      piVar14 = piVar19;
      uVar12 = uVar16;
      do {
        piVar5 = (int *)piVar14[3];
        while (piVar6 = piVar5, piVar14 != piVar6) {
          uVar18 = piVar6[1] & 0xfffffffc;
          uVar3 = uVar18 - uVar17;
          piVar5 = (int *)piVar6[3];
          if (0xf < (int)uVar3) {
            iVar8 = piVar6[2];
            iVar15 = (int)piVar6 + uVar17;
            piVar6[1] = uVar17 | 1;
            *(int **)(iVar8 + 0xc) = piVar5;
            piVar5[2] = iVar8;
            *(int *)(uVar10 + 0x10) = iVar15;
            *(int *)(uVar10 + 0x14) = iVar15;
            *(int *)(iVar15 + 8) = iVar7;
            *(int *)(iVar15 + 0xc) = iVar7;
            *(uint *)(iVar15 + 4) = uVar3 | 1;
            *(uint *)((int)piVar6 + uVar18) = uVar3;
            FUN_00016954(param_1);
            return piVar6 + 2;
          }
          if (-1 < (int)uVar3) {
            *(uint *)((int)piVar6 + uVar18 + 4) = *(uint *)((int)piVar6 + uVar18 + 4) | 1;
            iVar7 = piVar6[2];
            *(int **)(iVar7 + 0xc) = piVar5;
            piVar5[2] = iVar7;
            FUN_00016954(param_1);
            return piVar6 + 2;
          }
        }
        uVar12 = uVar12 + 1;
        piVar14 = piVar14 + 2;
      } while ((uVar12 & 3) != 0);
      do {
        uVar18 = uVar16 & 3;
        uVar16 = uVar16 - 1;
        if (uVar18 == 0) {
          uVar18 = *(uint *)(uVar10 + 4) & ~uVar11;
          *(uint *)(uVar10 + 4) = uVar18;
          goto LAB_0001659c;
        }
        piVar5 = piVar19 + -2;
        piVar14 = (int *)*piVar19;
        piVar19 = piVar5;
      } while (piVar14 == piVar5);
      uVar18 = *(uint *)(uVar10 + 4);
LAB_0001659c:
      uVar11 = uVar11 * 2;
      if ((uVar18 <= uVar11 && uVar11 - uVar18 != 0) || (uVar11 == 0)) break;
      for (; uVar16 = uVar12, (uVar11 & uVar18) == 0; uVar11 = uVar11 << 1) {
        uVar12 = uVar12 + 4;
      }
    } while( true );
  }
  uVar16 = *(uint *)(uVar10 + 8);
  uVar12 = *(uint *)(uVar16 + 4) & 0xfffffffc;
  if ((uVar17 <= uVar12) && (uVar11 = uVar12 - uVar17, 0xf < (int)uVar11)) goto LAB_000163d0;
  uVar11 = uVar16 + uVar12;
  if (*DAT_000164ec == 0xffffffff) {
    uVar18 = *DAT_000164e8 + uVar17 + 0x10;
  }
  else {
    uVar18 = *DAT_000164e8 + uVar17 + 0x100f & 0xfffff000;
  }
  uVar3 = FUN_00016960(param_1,uVar18);
  puVar2 = DAT_00016738;
  puVar1 = DAT_000164ec;
  if (uVar3 == 0xffffffff) {
LAB_000163ae:
    uVar16 = *(uint *)(uVar10 + 8);
    uVar18 = *(uint *)(uVar16 + 4);
  }
  else {
    if (uVar3 < uVar11) {
      if (uVar16 != uVar10) goto LAB_000163ae;
      uVar4 = *DAT_00016738 + uVar18;
      *DAT_00016738 = uVar4;
LAB_000165c4:
      if (*puVar1 == 0xffffffff) {
        *puVar1 = uVar3;
      }
      else {
        *puVar2 = (uVar3 - uVar11) + uVar4;
      }
      uVar11 = uVar3 & 7;
      if (uVar11 == 0) {
        uVar4 = (uVar3 + uVar18) * -0x100000 >> 0x14;
        iVar7 = FUN_00016960(param_1,uVar4);
        if (iVar7 != -1) goto LAB_00016606;
        uVar4 = 0;
      }
      else {
        uVar3 = uVar3 + (8 - uVar11);
        uVar4 = (0x1008 - uVar11) - (uVar18 + uVar3) & 0xfff;
        iVar7 = FUN_00016960(param_1,uVar4);
        if (iVar7 == -1) {
          uVar18 = (uVar18 + uVar3 + (uVar11 - 8)) - uVar3;
          uVar4 = 0;
        }
        else {
LAB_00016606:
          uVar18 = (iVar7 - uVar3) + uVar4;
        }
      }
      uVar11 = *puVar2;
      *(uint *)(uVar10 + 8) = uVar3;
      uVar18 = uVar18 | 1;
      uVar4 = uVar4 + uVar11;
      *(uint *)(uVar3 + 4) = uVar18;
      *puVar2 = uVar4;
      if (uVar16 != uVar10) {
        if (uVar12 < 0x10) {
          *(undefined4 *)(uVar3 + 4) = 1;
          goto LAB_000163c2;
        }
        uVar12 = uVar12 - 0xc & 0xfffffff8;
        *(uint *)(uVar16 + 4) = *(uint *)(uVar16 + 4) & 1 | uVar12;
        *(undefined4 *)(uVar16 + uVar12 + 4) = 5;
        *(undefined4 *)(uVar16 + uVar12 + 8) = 5;
        if (0xf < uVar12) {
          FUN_00018a90(param_1,uVar16 + 8);
          uVar3 = *(uint *)(uVar10 + 8);
          uVar4 = *puVar2;
        }
        uVar18 = *(uint *)(uVar3 + 4);
      }
    }
    else {
      uVar4 = *DAT_00016738 + uVar18;
      *DAT_00016738 = uVar4;
      if ((uVar11 != uVar3) || ((uVar3 & 0xfff) != 0)) goto LAB_000165c4;
      uVar3 = *(uint *)(uVar10 + 8);
      uVar18 = uVar18 + uVar12 | 1;
      *(uint *)(uVar3 + 4) = uVar18;
    }
    uVar16 = uVar3;
    if (*DAT_0001673c < uVar4) {
      *DAT_0001673c = uVar4;
    }
    if (*DAT_00016740 < uVar4) {
      *DAT_00016740 = uVar4;
    }
  }
  uVar11 = (uVar18 & 0xfffffffc) - uVar17;
  if ((uVar17 <= (uVar18 & 0xfffffffc)) && (0xf < (int)uVar11)) {
LAB_000163d0:
    *(uint *)(uVar16 + 4) = uVar17 | 1;
    *(uint *)(uVar10 + 8) = uVar16 + uVar17;
    *(uint *)(uVar16 + uVar17 + 4) = uVar11 | 1;
    FUN_00016954(param_1);
    return (int *)(uVar16 + 8);
  }
LAB_000163c2:
  FUN_00016954(param_1);
  return (int *)0x0;
}



// FUN_00016744 @ 00016744 (96 bytes, called_by=0, calls=0)

int FUN_00016744(int *param_1,int *param_2,uint param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  
  if (3 < param_3) {
    if ((((uint)param_1 | (uint)param_2) & 3) != 0) {
      iVar5 = param_3 - 1;
      goto LAB_00016772;
    }
    do {
      piVar3 = param_2 + 1;
      piVar4 = param_1 + 1;
      if (*param_1 != *param_2) break;
      param_3 = param_3 - 4;
      param_1 = piVar4;
      param_2 = piVar3;
    } while (3 < param_3);
  }
  iVar5 = param_3 - 1;
  if (param_3 == 0) {
    return 0;
  }
LAB_00016772:
  pbVar2 = (byte *)((int)param_1 - 1);
  pbVar1 = (byte *)((int)param_2 - 1);
  do {
    pbVar2 = pbVar2 + 1;
    pbVar1 = pbVar1 + 1;
    if ((uint)*pbVar2 != (uint)*pbVar1) {
      return (uint)*pbVar2 - (uint)*pbVar1;
    }
  } while ((int)param_1 + (iVar5 - (int)pbVar2) != 0);
  return 0;
}



// FUN_000167a4 @ 000167a4 (254 bytes, called_by=0, calls=0)

void FUN_000167a4(undefined1 *param_1,undefined1 *param_2,uint param_3)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined1 *puVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  
  if ((param_2 < param_1) && (puVar4 = param_2 + param_3, param_1 < puVar4)) {
    param_1 = param_1 + param_3;
    if (param_3 == 0) {
      return;
    }
    do {
      puVar4 = puVar4 + -1;
      param_1 = param_1 + -1;
      *param_1 = *puVar4;
    } while (param_2 != puVar4);
    return;
  }
  if (param_3 < 0x10) {
    if (param_3 == 0) {
      return;
    }
  }
  else if ((((uint)param_1 | (uint)param_2) & 3) == 0) {
    puVar1 = param_2 + 0x10;
    puVar4 = param_1 + 0x10;
    do {
      *(undefined4 *)(puVar4 + -0x10) = *(undefined4 *)(puVar1 + -0x10);
      *(undefined4 *)(puVar4 + -0xc) = *(undefined4 *)(puVar1 + -0xc);
      *(undefined4 *)(puVar4 + -8) = *(undefined4 *)(puVar1 + -8);
      *(undefined4 *)(puVar4 + -4) = *(undefined4 *)(puVar1 + -4);
      puVar1 = puVar1 + 0x10;
      puVar4 = puVar4 + 0x10;
    } while (puVar1 != param_2 + (param_3 - 0x10 & 0xfffffff0) + 0x20);
    iVar5 = (param_3 - 0x10 >> 4) + 1;
    puVar2 = (undefined4 *)(param_2 + iVar5 * 0x10);
    uVar6 = param_3 & 0xf;
    param_1 = param_1 + iVar5 * 0x10;
    if ((param_3 & 0xc) != 0) {
      puVar7 = (undefined4 *)(param_1 + -4);
      puVar3 = puVar2;
      do {
        puVar7 = puVar7 + 1;
        *puVar7 = *puVar3;
        puVar3 = puVar3 + 1;
      } while (puVar7 != (undefined4 *)(param_1 + (uVar6 - 4 & 0xfffffffc)));
      iVar5 = (uVar6 - 4 >> 2) + 1;
      uVar6 = param_3 & 3;
      param_1 = param_1 + iVar5 * 4;
      puVar2 = puVar2 + iVar5;
    }
    if (uVar6 != 0) {
      param_1 = param_1 + -1;
      puVar7 = puVar2;
      do {
        puVar3 = (undefined4 *)((int)puVar7 + 1);
        param_1 = param_1 + 1;
        *param_1 = *(undefined1 *)puVar7;
        puVar7 = puVar3;
      } while (puVar3 != (undefined4 *)(uVar6 + (int)puVar2));
    }
    return;
  }
  param_1 = param_1 + -1;
  puVar4 = param_2;
  do {
    puVar1 = puVar4 + 1;
    param_1 = param_1 + 1;
    *param_1 = *puVar4;
    puVar4 = puVar1;
  } while (puVar1 != param_2 + param_3);
  return;
}



// FUN_000168a4 @ 000168a4 (162 bytes, called_by=0, calls=0)

void FUN_000168a4(byte *param_1,byte param_2,uint param_3)

{
  int iVar1;
  byte *pbVar2;
  byte *pbVar3;
  uint uVar4;
  bool bVar5;
  
  if (((uint)param_1 & 3) != 0) {
    uVar4 = param_3 - 1;
    pbVar2 = param_1;
    if (param_3 == 0) {
      return;
    }
    while( true ) {
      param_1 = pbVar2 + 1;
      *pbVar2 = param_2;
      param_3 = uVar4;
      if (((uint)param_1 & 3) == 0) break;
      bVar5 = uVar4 == 0;
      uVar4 = uVar4 - 1;
      pbVar2 = param_1;
      if (bVar5) {
        return;
      }
    }
  }
  if (3 < param_3) {
    iVar1 = (uint)param_2 * 0x1010101;
    if (0xf < param_3) {
      pbVar2 = param_1;
      do {
        *(int *)pbVar2 = iVar1;
        *(int *)(pbVar2 + 4) = iVar1;
        *(int *)(pbVar2 + 8) = iVar1;
        *(int *)(pbVar2 + 0xc) = iVar1;
        pbVar2 = pbVar2 + 0x10;
      } while (pbVar2 != param_1 + (param_3 - 0x10 & 0xfffffff0) + 0x10);
      uVar4 = param_3 & 0xc;
      param_1 = param_1 + ((param_3 - 0x10 >> 4) + 1) * 0x10;
      param_3 = param_3 & 0xf;
      if (uVar4 == 0) goto joined_r0x00016920;
    }
    uVar4 = param_3 - 4;
    pbVar2 = param_1;
    do {
      pbVar3 = pbVar2 + 4;
      *(int *)pbVar2 = iVar1;
      pbVar2 = pbVar3;
    } while (pbVar3 != param_1 + (uVar4 & 0xfffffffc) + 4);
    param_3 = param_3 & 3;
    param_1 = param_1 + (uVar4 & 0xfffffffc) + 4;
  }
joined_r0x00016920:
  if (param_3 != 0) {
    pbVar2 = param_1;
    do {
      pbVar3 = pbVar2 + 1;
      *pbVar2 = param_2;
      pbVar2 = pbVar3;
    } while (param_1 + param_3 != pbVar3);
  }
  return;
}



// FUN_00016948 @ 00016948 (6 bytes, called_by=0, calls=0)

void FUN_00016948(void)

{
  FUN_0001d952(DAT_00016950);
  return;
}



// FUN_00016954 @ 00016954 (6 bytes, called_by=0, calls=0)

void FUN_00016954(void)

{
  thunk_FUN_00014e2c(DAT_0001695c);
  return;
}



// FUN_00016960 @ 00016960 (32 bytes, called_by=0, calls=0)

void FUN_00016960(int *param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = DAT_00016980;
  *DAT_00016980 = 0;
  iVar2 = FUN_0000a50c(param_2);
  if ((iVar2 == -1) && (*piVar1 != 0)) {
    *param_1 = *piVar1;
    return;
  }
  return;
}



// FUN_00016984 @ 00016984 (132 bytes, called_by=0, calls=0)

int FUN_00016984(undefined1 *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined1 *local_78 [2];
  int local_70;
  undefined2 local_6c;
  undefined2 local_6a;
  undefined1 *local_68;
  int local_64;
  
  puVar2 = (undefined4 *)*DAT_00016a08;
  if (param_2 < 0) {
    *puVar2 = 0x8b;
    iVar1 = -1;
  }
  else {
    local_6c = 0x208;
    local_78[0] = param_1;
    local_68 = param_1;
    if (param_2 != 0) {
      local_70 = param_2 + -1;
      local_6a = 0xffff;
      local_64 = local_70;
      iVar1 = FUN_00016eb4(puVar2,local_78,param_3);
      if (iVar1 + 1 < 0 != SCARRY4(iVar1,1)) {
        *puVar2 = 0x8b;
      }
      *local_78[0] = 0;
      return iVar1;
    }
    local_6a = 0xffff;
    local_70 = param_2;
    local_64 = param_2;
    iVar1 = FUN_00016eb4(puVar2,local_78,param_3);
    if (iVar1 + 1 < 0 != SCARRY4(iVar1,1)) {
      *puVar2 = 0x8b;
    }
  }
  return iVar1;
}



// FUN_00016a0c @ 00016a0c (56 bytes, called_by=0, calls=0)

void FUN_00016a0c(undefined1 *param_1,undefined4 param_2)

{
  undefined1 *local_80 [2];
  undefined4 local_78;
  undefined4 local_74;
  undefined1 *local_70;
  undefined4 local_6c;
  
  local_78 = 0x7fffffff;
  local_6c = 0x7fffffff;
  local_74 = DAT_00016a48;
  local_80[0] = param_1;
  local_70 = param_1;
  FUN_00016eb4(*DAT_00016a44,local_80,param_2);
  *local_80[0] = 0;
  return;
}



// FUN_00016a4c @ 00016a4c (186 bytes, called_by=0, calls=0)

void FUN_00016a4c(uint *param_1,uint *param_2)

{
  ushort uVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  bool bVar7;
  
  if ((((uint)param_1 ^ (uint)param_2) & 3) != 0) {
    do {
      uVar4 = *param_2;
      *(char *)param_1 = (char)uVar4;
      param_2 = (uint *)((int)param_2 + 1);
      param_1 = (uint *)((int)param_1 + 1);
    } while ((char)uVar4 != '\0');
    return;
  }
  if (((uint)param_2 & 3) != 0) {
    puVar3 = param_2;
    if (((uint)param_2 & 1) != 0) {
      puVar3 = (uint *)((int)param_2 + 1);
      uVar4 = *param_2;
      *(char *)param_1 = (char)uVar4;
      param_1 = (uint *)((int)param_1 + 1);
      if ((char)uVar4 == '\0') {
        return;
      }
    }
    param_2 = puVar3;
    if (((uint)puVar3 & 2) != 0) {
      param_2 = (uint *)((int)puVar3 + 2);
      uVar1 = (ushort)*puVar3;
      bVar7 = (uVar1 & 0xff) != 0;
      if (bVar7) {
        *(ushort *)param_1 = uVar1;
        param_1 = (uint *)((int)param_1 + 2);
      }
      else {
        *(char *)param_1 = (char)uVar1;
      }
      if (!bVar7 || (uVar1 & 0xff00) == 0) {
        return;
      }
    }
  }
  uVar4 = *param_2;
  puVar3 = param_2 + 1;
  puVar6 = param_1;
  if (((uint)param_2 & 4) != 0) {
    if ((uVar4 + 0xfefefeff & ~uVar4 & 0x80808080) != 0) goto LAB_00016ab0;
    puVar6 = param_1 + 1;
    *param_1 = uVar4;
    puVar3 = param_2 + 2;
    uVar4 = param_2[1];
  }
  while( true ) {
    puVar2 = puVar3 + 1;
    uVar5 = *puVar3;
    param_1 = puVar6;
    if ((uVar4 + 0xfefefeff & ~uVar4 & 0x80808080) != 0) break;
    param_1 = puVar6 + 1;
    *puVar6 = uVar4;
    uVar4 = uVar5;
    if ((uVar5 + 0xfefefeff & ~uVar5 & 0x80808080) != 0) break;
    puVar3 = puVar3 + 2;
    uVar4 = *puVar2;
    puVar6 = puVar6 + 2;
    *param_1 = uVar5;
  }
LAB_00016ab0:
  do {
    *(char *)param_1 = (char)uVar4;
    uVar5 = uVar4 & 0xff;
    uVar4 = uVar4 >> 8 | uVar4 << 0x18;
    param_1 = (uint *)((int)param_1 + 1);
  } while (uVar5 != 0);
  return;
}



// FUN_00016b08 @ 00016b08 (130 bytes, called_by=0, calls=0)

int FUN_00016b08(uint *param_1,uint *param_2,uint param_3)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  uint *puVar4;
  
  if (param_3 == 0) {
    return 0;
  }
  puVar2 = param_2;
  if (((((uint)param_1 | (uint)param_2) & 3) == 0) && (3 < param_3)) {
    do {
      uVar1 = *param_1;
      puVar4 = param_1 + 1;
      puVar2 = param_2;
      if (uVar1 != *param_2) break;
      param_3 = param_3 - 4;
      if (param_3 == 0) {
        return 0;
      }
      if ((uVar1 + 0xfefefeff & ~uVar1 & 0x80808080) != 0) {
        return 0;
      }
      puVar2 = param_2 + 1;
      param_2 = param_2 + 1;
      param_1 = puVar4;
    } while (3 < param_3);
  }
  uVar1 = (uint)(byte)*param_1;
  uVar3 = (uint)(byte)*puVar2;
  if (uVar3 == uVar1) {
    puVar4 = param_1;
    if (param_3 == 1) {
      return 0;
    }
    while( true ) {
      if (uVar1 == 0) {
        return 0;
      }
      puVar4 = (uint *)((int)puVar4 + 1);
      uVar1 = (uint)*(byte *)puVar4;
      puVar2 = (uint *)((int)puVar2 + 1);
      uVar3 = (uint)*(byte *)puVar2;
      if (uVar1 != uVar3) break;
      if ((byte *)((int)param_1 + (param_3 - (int)puVar4) + -1) == (byte *)0x0) {
        return 0;
      }
    }
  }
  return uVar1 - uVar3;
}



// FUN_00016b8c @ 00016b8c (104 bytes, called_by=0, calls=0)

void FUN_00016b8c(uint *param_1,uint *param_2,uint param_3)

{
  char cVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar5;
  char *pcVar6;
  uint *puVar4;
  
  puVar2 = param_2;
  puVar4 = param_1;
  if (((((uint)param_1 | (uint)param_2) & 3) == 0) && (3 < param_3)) {
    do {
      uVar5 = *param_2;
      puVar2 = param_2;
      puVar4 = param_1;
      if ((uVar5 + 0xfefefeff & ~uVar5 & 0x80808080) != 0) break;
      param_3 = param_3 - 4;
      puVar4 = param_1 + 1;
      *param_1 = uVar5;
      puVar2 = param_2 + 1;
      param_1 = puVar4;
      param_2 = param_2 + 1;
    } while (3 < param_3);
  }
  pcVar6 = (char *)((int)puVar2 - 1);
  do {
    puVar2 = puVar4;
    uVar5 = param_3;
    if (uVar5 == 0) {
      return;
    }
    pcVar6 = pcVar6 + 1;
    cVar1 = *pcVar6;
    *(char *)puVar2 = cVar1;
    param_3 = uVar5 - 1;
    puVar4 = (uint *)((int)puVar2 + 1);
  } while (cVar1 != '\0');
  if (uVar5 - 1 == 0) {
    return;
  }
  do {
    puVar3 = (uint *)((int)puVar4 + 1);
    *(char *)puVar4 = '\0';
    puVar4 = puVar3;
  } while (puVar3 != (uint *)((int)puVar2 + uVar5));
  return;
}



// FUN_00016e9c @ 00016e9c (318 bytes, called_by=0, calls=0)

uint FUN_00016e9c(byte *param_1,undefined4 *param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  byte *pbVar3;
  byte *pbVar4;
  uint uVar5;
  uint uVar6;
  byte bVar7;
  uint uVar8;
  uint uVar9;
  
  pbVar4 = param_1;
  do {
    pbVar3 = pbVar4;
    pbVar4 = pbVar3 + 1;
    uVar9 = (uint)*pbVar3;
    bVar7 = *(byte *)(DAT_00016e94 + uVar9) & 8;
  } while ((*(byte *)(DAT_00016e94 + uVar9) & 8) != 0);
  if (uVar9 == 0x2d) {
    uVar9 = (uint)*pbVar4;
    bVar7 = 1;
    pbVar4 = pbVar3 + 2;
  }
  else if (uVar9 == 0x2b) {
    uVar9 = (uint)*pbVar4;
    pbVar4 = pbVar3 + 2;
  }
  if (param_3 == 0) {
    if (uVar9 != 0x30) {
      uVar6 = 5;
      param_3 = 10;
      uVar5 = DAT_00016e98;
      goto LAB_00016dc4;
    }
    if ((*pbVar4 & 0xdf) != 0x58) {
      param_3 = 8;
      uVar6 = 7;
      uVar5 = 0x1fffffff;
      goto LAB_00016dc4;
    }
  }
  else {
    if (param_3 != 0x10) {
      uVar5 = 0xffffffff / param_3;
      uVar6 = ~(param_3 * uVar5);
      goto LAB_00016dc4;
    }
    if ((uVar9 != 0x30) || ((*pbVar4 & 0xdf) != 0x58)) {
      uVar6 = 0xf;
      uVar5 = 0xfffffff;
      goto LAB_00016dc4;
    }
  }
  param_3 = 0x10;
  uVar9 = (uint)pbVar4[1];
  uVar6 = 0xf;
  pbVar4 = pbVar4 + 2;
  uVar5 = 0xfffffff;
LAB_00016dc4:
  iVar2 = 0;
  uVar1 = 0;
  do {
    uVar8 = uVar9 - 0x30;
    if (9 < uVar8) {
      if (uVar9 - 0x41 < 0x1a) {
        uVar8 = uVar9 - 0x37;
      }
      else {
        if (0x19 < uVar9 - 0x61) break;
        uVar8 = uVar9 - 0x57;
      }
    }
    if ((int)param_3 <= (int)uVar8) break;
    if (iVar2 != -1) {
      if (uVar5 < uVar1) {
        iVar2 = -1;
      }
      else if ((uVar1 == uVar5) && ((int)uVar6 < (int)uVar8)) {
        iVar2 = -1;
      }
      else {
        uVar1 = param_3 * uVar1 + uVar8;
        iVar2 = 1;
      }
    }
    uVar9 = (uint)*pbVar4;
    pbVar4 = pbVar4 + 1;
  } while( true );
  if (iVar2 == -1) {
    *(undefined4 *)*DAT_00016eb0 = 0x22;
    uVar1 = 0xffffffff;
    if (param_2 == (undefined4 *)0x0) {
      return 0xffffffff;
    }
  }
  else {
    if (bVar7 != 0) {
      uVar1 = -uVar1;
    }
    if (param_2 == (undefined4 *)0x0) {
      return uVar1;
    }
    if (iVar2 == 0) goto LAB_00016e20;
  }
  param_1 = pbVar4 + -1;
LAB_00016e20:
  *param_2 = param_1;
  return uVar1;
}



// FUN_00016eb4 @ 00016eb4 (3148 bytes, called_by=0, calls=0)

/* WARNING: Type propagation algorithm not settling */

int FUN_00016eb4(undefined4 *param_1,int *param_2,byte *param_3,uint *param_4)

{
  bool bVar1;
  longlong lVar2;
  char cVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined4 uVar9;
  byte *pbVar10;
  uint uVar11;
  char *pcVar12;
  char *pcVar13;
  byte bVar14;
  undefined1 uVar15;
  byte bVar16;
  int iVar17;
  int *piVar18;
  uint *puVar19;
  uint uVar20;
  undefined4 uVar21;
  char *pcVar22;
  undefined *puVar24;
  int iVar25;
  uint uVar26;
  byte *pbVar27;
  uint uVar28;
  byte *pbVar29;
  char *pcVar30;
  int iVar31;
  byte *pbVar32;
  byte *pbVar33;
  bool bVar34;
  ulonglong uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined *local_16c;
  byte *local_168;
  byte *local_164;
  byte *local_160;
  int local_15c;
  int local_150;
  uint *local_14c;
  byte *local_148;
  int local_144;
  byte *local_140;
  int local_13c;
  uint local_138;
  uint uStack_134;
  undefined *local_128;
  byte *local_124;
  char *local_120;
  int local_11c;
  int local_118;
  int local_114;
  uint uStack_fc;
  char local_f5;
  undefined2 uStack_f4;
  byte *local_f0;
  undefined1 auStack_ec [4];
  undefined1 uStack_e8;
  char cStack_e7;
  char acStack_e6 [6];
  byte *pbStack_e0;
  char acStack_db [3];
  undefined4 local_d8;
  int local_d4;
  byte *local_d0;
  int local_cc [16];
  byte local_8c [98];
  byte abStack_2a [6];
  char *pcVar23;
  
  piVar4 = (int *)FUN_00018c8c();
  iVar17 = *piVar4;
  iVar5 = FUN_00000140(iVar17);
  if (((int)((uint)*(ushort *)(param_2 + 3) << 0x18) < 0) && (param_2[4] == 0)) {
    iVar25 = FUN_000161cc(param_1,0x40);
    *param_2 = iVar25;
    param_2[4] = iVar25;
    if (iVar25 == 0) {
      *param_1 = 0xc;
      return -1;
    }
    param_2[5] = 0x40;
  }
  local_d4 = 0;
  local_d0 = (byte *)0x0;
  local_124 = (byte *)0x0;
  local_120 = (char *)0x0;
  local_11c = 0;
  local_118 = 0;
  local_140 = (byte *)0x0;
  local_128 = (undefined *)0x0;
  local_15c = 0;
  local_138 = 0;
  uStack_134 = 0;
  bVar14 = *param_3;
  piVar4 = local_cc;
  local_d8 = piVar4;
  local_168 = param_3;
joined_r0x00016f0e:
  pbVar33 = local_168;
  if (bVar14 != 0) {
    do {
      if (bVar14 == 0x25) {
        iVar25 = (int)pbVar33 - (int)local_168;
        if (iVar25 == 0) goto LAB_00016f30;
        goto LAB_00017164;
      }
      pbVar33 = pbVar33 + 1;
      bVar14 = *pbVar33;
    } while (bVar14 != 0);
    iVar25 = (int)pbVar33 - (int)local_168;
    if (iVar25 != 0) {
LAB_00017164:
      *piVar4 = (int)local_168;
      *(int *)((int)piVar4 + 4) = iVar25;
      local_d4 = local_d4 + 1;
      local_d0 = (byte *)((int)local_d0 + iVar25);
      if (local_d4 < 8) {
        piVar4 = (int *)((int)piVar4 + 8);
      }
      else {
        iVar31 = FUN_00019474(param_1,param_2,&local_d8);
        if (iVar31 != 0) goto LAB_000171b4;
        piVar4 = local_cc;
      }
      local_15c = local_15c + iVar25;
LAB_00016f30:
      if (*pbVar33 != 0) {
        uVar26 = (uint)pbVar33[1];
        local_f5 = '\0';
        local_160 = (byte *)0x0;
        pbVar32 = (byte *)0xffffffff;
        local_16c = (undefined *)0x0;
        pbVar33 = pbVar33 + 1;
        local_14c = param_4;
LAB_00016f50:
        uVar7 = uRam00018054;
        pbVar33 = pbVar33 + 1;
LAB_00016f54:
        local_164 = pbVar32;
        pbVar29 = pbVar32;
        switch(uVar26) {
        case 0x20:
          goto code_r0x00017498;
        default:
          bVar14 = (byte)uVar26;
          if (uVar26 == 0) goto LAB_000172da;
          break;
        case 0x23:
          uVar26 = (uint)*pbVar33;
          local_16c = (undefined *)((uint)local_16c | 1);
          goto LAB_00016f50;
        case 0x27:
          iVar25 = FUN_00018c8c(param_1);
          local_11c = *(int *)(iVar25 + 4);
          local_118 = FUN_00000140(local_11c);
          iVar25 = FUN_00018c8c(param_1);
          local_124 = *(byte **)(iVar25 + 8);
          if (local_118 == 0) goto code_r0x0001705c;
          uVar26 = (uint)*pbVar33;
          if ((local_124 != (byte *)0x0) && (*local_124 != 0)) {
            local_16c = (undefined *)((uint)local_16c | 0x400);
          }
          goto LAB_00016f50;
        case 0x2a:
          local_160 = (byte *)*local_14c;
          if ((int)local_160 < 0) {
            local_160 = (byte *)-(int)local_160;
            local_14c = local_14c + 1;
            goto code_r0x00017430;
          }
          uVar26 = (uint)*pbVar33;
          local_14c = local_14c + 1;
          goto LAB_00016f50;
        case 0x2b:
          uVar26 = (uint)*pbVar33;
          local_f5 = '+';
          goto LAB_00016f50;
        case 0x2d:
code_r0x00017430:
          uVar26 = (uint)*pbVar33;
          local_16c = (undefined *)((uint)local_16c | 4);
          goto LAB_00016f50;
        case 0x2e:
          uVar26 = (uint)*pbVar33;
          if (uVar26 == 0x2a) {
            uVar26 = (uint)pbVar33[1];
            pbVar32 = (byte *)(*local_14c | (int)*local_14c >> 0x1f);
            pbVar33 = pbVar33 + 1;
            local_14c = local_14c + 1;
            goto LAB_00016f50;
          }
          pbVar32 = (byte *)0x0;
          pbVar33 = pbVar33 + 1;
          while (uVar26 - 0x30 < 10) {
            pbVar32 = (byte *)((uVar26 - 0x30) + (int)pbVar32 * 10);
            uVar26 = (uint)*pbVar33;
            pbVar33 = pbVar33 + 1;
          }
          goto LAB_00016f54;
        case 0x30:
          uVar26 = (uint)*pbVar33;
          local_16c = (undefined *)((uint)local_16c | 0x80);
          goto LAB_00016f50;
        case 0x31:
        case 0x32:
        case 0x33:
        case 0x34:
        case 0x35:
        case 0x36:
        case 0x37:
        case 0x38:
        case 0x39:
          goto code_r0x00017018;
        case 0x41:
        case 0x45:
        case 0x46:
        case 0x47:
        case 0x61:
        case 0x65:
        case 0x66:
        case 0x67:
          puVar19 = (uint *)((int)local_14c + 7U & 0xfffffff8);
          local_14c = puVar19 + 2;
          local_138 = *puVar19;
          uStack_134 = puVar19[1];
          iVar25 = func_0x00001200(local_138,uStack_134 & 0x7fffffff,0xffffffff,uRam000175c8);
          if ((iVar25 == 0) &&
             (iVar25 = func_0x000011c4(local_138,uStack_134 & 0x7fffffff,0xffffffff,uRam000175c8),
             iVar25 == 0)) {
            iVar25 = func_0x000011b0(local_138,uStack_134,0,0);
            pbVar32 = PTR_DAT_000175d0;
            local_168 = PTR_DAT_000175cc;
            if (iVar25 != 0) {
              local_f5 = '-';
            }
code_r0x00017356:
            local_16c = (undefined *)((uint)local_16c & 0xffffff7f);
            if (0x47 < uVar26) {
              local_168 = pbVar32;
            }
            local_148 = (byte *)0x0;
            local_144 = 0;
            local_150 = 0;
            local_164 = (byte *)0x3;
            pbVar29 = (byte *)0x3;
            pbVar32 = (byte *)0x0;
            local_13c = 0;
            goto LAB_0001714e;
          }
          uVar35 = func_0x00001200();
          if ((int)uVar35 != 0) {
            pbVar32 = PTR_DAT_000188c0;
            local_168 = PTR_DAT_000188bc;
            if ((int)uStack_134 < 0) {
              local_f5 = '-';
            }
            goto code_r0x00017356;
          }
          uStack_fc = uStack_134;
          if (uVar26 == 0x61) {
            uVar15 = 0x78;
code_r0x00018592:
            uStack_f4 = CONCAT11(uVar15,0x30);
            puVar24 = (undefined *)((uint)local_16c | 2);
            if ((int)pbVar32 < 100) {
              uVar35 = uVar35 & 0xffffffff00000000;
              local_168 = local_8c;
            }
            else {
              uVar35 = FUN_000161cc(param_1,pbVar32 + 1);
              local_168 = (byte *)uVar35;
              if (local_168 == (byte *)0x0) {
                uVar26 = *(ushort *)(param_2 + 3) | 0x40;
                *(short *)(param_2 + 3) = (short)uVar26;
                goto LAB_000171b8;
              }
            }
            local_164 = (byte *)((uint)local_16c | 0x102);
            if ((int)uStack_134 < 0) {
code_r0x00018604:
              uStack_fc = uStack_134 + 0x80000000;
              local_114 = 0x2d;
            }
            else {
              local_114 = 0;
            }
            local_150 = (int)uVar35;
            if (uVar26 != 0x61) goto code_r0x00017cb4;
            uVar37 = func_0x00019404(local_138,uStack_fc,&local_f0);
            uVar37 = func_0x00000ccc((int)uVar37,(int)((ulonglong)uVar37 >> 0x20),0,0x3fc00000);
            iVar25 = FUN_0000119c((int)uVar37,(int)((ulonglong)uVar37 >> 0x20),0,0);
            if (iVar25 == 0) {
              local_16c = puRam000186fc;
              local_140 = local_168;
              pbVar29 = pbVar32;
            }
            else {
code_r0x00018778:
              local_16c = PTR_DAT_000188b8;
              if (uVar26 != 0x61) {
                local_16c = PTR_DAT_000188b4;
              }
              local_f0 = (byte *)0x1;
              local_140 = local_168;
              pbVar29 = pbVar32;
            }
            goto code_r0x00018444;
          }
          if (uVar26 == 0x41) {
            uVar15 = 0x58;
            goto code_r0x00018592;
          }
          if (pbVar32 == (byte *)0xffffffff) {
            pbVar32 = (byte *)0x6;
          }
          else if (((uVar26 & 0xffffffdf) == 0x47) && (pbVar32 == (byte *)0x0)) {
            pbVar32 = (byte *)0x1;
          }
          local_164 = (byte *)((uint)local_16c | 0x100);
          puVar24 = local_16c;
          if ((int)uStack_134 < 0) {
            uVar35 = (ulonglong)local_138 << 0x20;
            goto code_r0x00018604;
          }
          local_114 = 0;
          uVar35 = (ulonglong)local_138 << 0x20;
code_r0x00017cb4:
          local_150 = (int)uVar35;
          pbVar29 = pbVar32;
          switch(uVar26) {
          case 0x41:
            uVar37 = func_0x00019404(local_138,uStack_fc,&local_f0);
            uVar37 = func_0x00000ccc((int)uVar37,(int)((ulonglong)uVar37 >> 0x20),0,0x3fc00000);
            iVar25 = FUN_0000119c((int)uVar37,(int)((ulonglong)uVar37 >> 0x20),0,0);
            if (iVar25 != 0) goto code_r0x00018778;
            local_16c = puRam00018434;
            local_140 = local_168;
            goto code_r0x00018444;
          default:
            uVar21 = 2;
            break;
          case 0x45:
          case 0x65:
            pbVar29 = pbVar32 + 1;
            uVar21 = 2;
            break;
          case 0x46:
          case 0x66:
            uVar21 = 3;
          }
          local_168 = (byte *)func_0x00001ca0(param_1,(int)(uVar35 >> 0x20),local_138,uStack_fc,
                                              uVar21,pbVar29,&local_f0,auStack_ec,&pbStack_e0);
          if (uVar26 == 0x67) {
            if (-1 < (int)puVar24 << 0x1f) {
code_r0x000184e0:
              local_140 = pbStack_e0 + -(int)local_168;
              goto code_r0x000184ea;
            }
            pbVar10 = local_168 + (int)pbVar29;
            uVar7 = 0x47;
          }
          else if (uVar26 == 0x47) {
            if (-1 < (int)puVar24 << 0x1f) goto code_r0x000184e0;
            pbVar10 = local_168 + (int)pbVar29;
            uVar7 = 0x47;
          }
          else {
            uVar7 = uVar26 & 0xffffffdf;
            pbVar10 = local_168 + (int)pbVar29;
            if (uVar7 == 0x46) {
              if ((*local_168 == 0x30) &&
                 (iVar25 = FUN_0000119c(local_138,uStack_fc,0,0), iVar25 == 0)) {
                local_f0 = (byte *)(1 - (int)pbVar29);
              }
              pbVar10 = pbVar10 + (int)local_f0;
            }
          }
          iVar25 = FUN_0000119c(local_138,uStack_fc,0,0);
          local_140 = pbVar10;
          if (iVar25 == 0) {
            for (; local_140 = pbStack_e0, pbStack_e0 < pbVar10; pbStack_e0 = pbStack_e0 + 1) {
              *pbStack_e0 = 0x30;
            }
          }
          local_140 = local_140 + -(int)local_168;
          goto code_r0x0001829e;
        case 0x43:
        case 99:
          uVar7 = *local_14c;
          local_14c = local_14c + 1;
          bVar14 = (byte)uVar7;
          break;
        case 0x44:
          local_16c = (undefined *)((uint)local_16c | 0x10);
        case 100:
        case 0x69:
          if ((int)local_16c << 0x1a < 0) {
            puVar19 = (uint *)((int)local_14c + 7U & 0xfffffff8);
            uVar11 = puVar19[1];
            uVar20 = *puVar19;
            local_14c = puVar19 + 2;
          }
          else {
            puVar19 = local_14c + 1;
            uVar20 = *local_14c;
            local_14c = puVar19;
            if ((int)local_16c << 0x1b < 0) {
code_r0x00017c4e:
              uVar11 = (int)uVar20 >> 0x1f;
            }
            else if ((int)local_16c << 0x19 < 0) {
              uVar11 = (int)(uVar20 << 0x10) >> 0x1f;
              uVar20 = (uint)(short)uVar20;
            }
            else {
              if (-1 < (int)local_16c << 0x16) goto code_r0x00017c4e;
              uVar11 = (int)(uVar20 << 0x18) >> 0x1f;
              uVar20 = (uint)(char)uVar20;
            }
          }
          if (-1 < (int)uVar11) {
            if ((pbVar32 == (byte *)0xffffffff) ||
               (local_16c = (undefined *)((uint)local_16c & 0xffffff7f), uVar20 != 0 || uVar11 != 0)
               ) {
code_r0x000170b0:
              if (uVar11 != 0 || uVar11 < (9 < uVar20)) {
                local_140 = (byte *)0x0;
                local_168 = abStack_2a + 2;
                goto code_r0x00017fc4;
              }
            }
            else if (pbVar32 == (byte *)0x0) {
code_r0x00017b5a:
              local_168 = abStack_2a + 2;
              goto LAB_00017136;
            }
code_r0x000170ba:
            abStack_2a[1] = (char)uVar20 + '0';
            local_168 = abStack_2a + 1;
            pbVar29 = (byte *)0x1;
            goto LAB_00017136;
          }
          bVar34 = uVar20 != 0;
          uVar20 = -uVar20;
          uVar11 = -uVar11 - (uint)bVar34;
          local_f5 = '-';
          iVar25 = 1;
          puVar24 = local_16c;
code_r0x000170fa:
          local_16c = puVar24;
          if ((pbVar32 == (byte *)0xffffffff) ||
             (local_16c = (undefined *)((uint)puVar24 & 0xffffff7f), uVar20 != 0 || uVar11 != 0)) {
            if (iVar25 == 1) goto code_r0x000170b0;
          }
          else {
            if (pbVar32 == (byte *)0x0) {
              if (iVar25 != 0) goto code_r0x00017b5a;
              pbVar29 = (byte *)((uint)puVar24 & 1);
              if (pbVar29 != (byte *)0x0) {
                abStack_2a[1] = '0';
              }
              local_168 = abStack_2a + 2;
              if (pbVar29 != (byte *)0x0) {
                local_168 = abStack_2a + 1;
              }
              goto LAB_00017136;
            }
            if (iVar25 == 1) goto code_r0x000170ba;
          }
          if (iVar25 == 2) {
            local_168 = abStack_2a + 2;
            do {
              local_168 = local_168 + -1;
              *local_168 = local_128[uVar20 & 0xf];
              uVar20 = uVar20 >> 4 | uVar11 << 0x1c;
              uVar11 = uVar11 >> 4;
            } while (uVar20 != 0 || uVar11 != 0);
            pbVar29 = abStack_2a + (2 - (int)local_168);
          }
          else {
            local_168 = abStack_2a + 2;
            do {
              pbVar29 = local_168;
              uVar7 = uVar20 & 7;
              uVar20 = uVar20 >> 3 | uVar11 << 0x1d;
              uVar11 = uVar11 >> 3;
              iVar25 = uVar7 + 0x30;
              local_168 = pbVar29 + -1;
              *local_168 = (byte)iVar25;
            } while (uVar20 != 0 || uVar11 != 0);
            if ((int)local_16c << 0x1f < 0) {
              if (iVar25 == 0x30) {
                pbVar29 = abStack_2a + (2 - (int)local_168);
              }
              else {
                local_168 = pbVar29 + -2;
                pbVar29[-2] = 0x30;
                pbVar29 = abStack_2a + (2 - (int)local_168);
              }
            }
            else {
              pbVar29 = abStack_2a + (2 - (int)local_168);
            }
          }
          goto LAB_00017136;
        case 0x4c:
          uVar26 = (uint)*pbVar33;
          local_16c = (undefined *)((uint)local_16c | 8);
          goto LAB_00016f50;
        case 0x4f:
          local_16c = (undefined *)((uint)local_16c | 0x10);
        case 0x6f:
          if (((uint)local_16c & 0x20) == 0) {
            puVar19 = local_14c + 1;
            uVar20 = *local_14c;
            uVar11 = 0;
            local_14c = puVar19;
            if (((uint)local_16c & 0x10) == 0) {
              if (((uint)local_16c & 0x40) == 0) {
                uVar11 = (uint)local_16c & 0x200;
                if (uVar11 != 0) {
                  uVar20 = uVar20 & 0xff;
                  uVar11 = 0;
                }
              }
              else {
                uVar20 = uVar20 & 0xffff;
                uVar11 = 0;
              }
            }
          }
          else {
            puVar19 = (uint *)((int)local_14c + 7U & 0xfffffff8);
            uVar11 = puVar19[1];
            uVar20 = *puVar19;
            local_14c = puVar19 + 2;
          }
          local_16c = (undefined *)((uint)local_16c & 0xfffffbff);
          iVar25 = 0;
code_r0x000170f8:
          local_f5 = '\0';
          puVar24 = local_16c;
          goto code_r0x000170fa;
        case 0x53:
        case 0x73:
          puVar19 = local_14c + 1;
          local_168 = (byte *)*local_14c;
          local_f5 = '\0';
          local_14c = puVar19;
          if (local_168 == (byte *)0x0) {
            if ((byte *)0x5 < pbVar32) {
              pbVar29 = (byte *)0x6;
            }
            local_168 = pbRam00018428;
            pbVar32 = (byte *)0x0;
            local_150 = 0;
            local_148 = (byte *)0x0;
            local_144 = 0;
            local_13c = 0;
            local_164 = pbVar29;
          }
          else {
            if (pbVar32 == (byte *)0xffffffff) {
              pbVar29 = (byte *)FUN_00000140(local_168);
            }
            else {
              iVar25 = FUN_00000500(local_168,0,pbVar32);
              if (iVar25 == 0) {
                pbVar32 = (byte *)0x0;
                local_150 = 0;
                local_148 = (byte *)0x0;
                local_144 = 0;
                local_13c = 0;
                goto LAB_0001714e;
              }
              pbVar29 = (byte *)(iVar25 - (int)local_168);
            }
            pbVar32 = (byte *)0x0;
            local_148 = (byte *)0x0;
            local_144 = 0;
            local_150 = 0;
            local_13c = 0;
            local_164 = (byte *)((uint)pbVar29 & ~((int)pbVar29 >> 0x1f));
          }
          goto LAB_0001714e;
        case 0x55:
          local_16c = (undefined *)((uint)local_16c | 0x10);
          goto code_r0x000174b4;
        case 0x58:
          local_128 = puRam00018048;
          goto code_r0x00017d56;
        case 0x68:
          uVar26 = (uint)*pbVar33;
          if (uVar26 == 0x68) {
            local_16c = (undefined *)((uint)local_16c | 0x200);
            uVar26 = (uint)pbVar33[1];
            pbVar33 = pbVar33 + 1;
          }
          else {
            local_16c = (undefined *)((uint)local_16c | 0x40);
          }
          goto LAB_00016f50;
        case 0x6a:
        case 0x71:
          uVar26 = (uint)*pbVar33;
          local_16c = (undefined *)((uint)local_16c | 0x20);
          goto LAB_00016f50;
        case 0x6c:
          uVar26 = (uint)*pbVar33;
          if (uVar26 == 0x6c) {
            local_16c = (undefined *)((uint)local_16c | 0x20);
            uVar26 = (uint)pbVar33[1];
            pbVar33 = pbVar33 + 1;
          }
          else {
            local_16c = (undefined *)((uint)local_16c | 0x10);
          }
          goto LAB_00016f50;
        case 0x6e:
          if ((int)local_16c << 0x1a < 0) {
            piVar18 = (int *)*local_14c;
            *piVar18 = local_15c;
            piVar18[1] = local_15c >> 0x1f;
          }
          else if ((int)local_16c << 0x1b < 0) {
LAB_0001810e:
            *(int *)*local_14c = local_15c;
          }
          else if ((int)local_16c << 0x19 < 0) {
            *(short *)*local_14c = (short)local_15c;
          }
          else {
            if (-1 < (int)local_16c << 0x16) goto LAB_0001810e;
            *(char *)*local_14c = (char)local_15c;
          }
          local_14c = local_14c + 1;
          goto LAB_000172cc;
        case 0x70:
          local_16c = (undefined *)((uint)local_16c | 2);
          uVar20 = *local_14c;
          uStack_f4 = 0x7830;
          local_128 = PTR_DAT_000175d4;
          iVar25 = 2;
          uVar11 = 0;
          uVar26 = 0x78;
          local_14c = local_14c + 1;
          goto code_r0x000170f8;
        case 0x74:
        case 0x7a:
code_r0x0001705c:
          uVar26 = (uint)*pbVar33;
          goto LAB_00016f50;
        case 0x75:
code_r0x000174b4:
          if (((uint)local_16c & 0x20) == 0) {
            uVar20 = *local_14c;
            uVar11 = 0;
            if (((uint)local_16c & 0x10) == 0) {
              if (((uint)local_16c & 0x40) != 0) {
                uVar20 = uVar20 & 0xffff;
                iVar25 = 1;
                uVar11 = 0;
                local_14c = local_14c + 1;
                goto code_r0x000170f8;
              }
              uVar11 = (uint)local_16c & 0x200;
              if (uVar11 != 0) {
                uVar20 = uVar20 & 0xff;
                uVar11 = 0;
              }
            }
            iVar25 = 1;
            local_14c = local_14c + 1;
          }
          else {
            puVar19 = (uint *)((int)local_14c + 7U & 0xfffffff8);
            uVar11 = puVar19[1];
            uVar20 = *puVar19;
            iVar25 = 1;
            local_14c = puVar19 + 2;
          }
          goto code_r0x000170f8;
        case 0x78:
          local_128 = puRam0001804c;
code_r0x00017d56:
          if (((uint)local_16c & 0x20) == 0) {
            puVar19 = local_14c + 1;
            uVar20 = *local_14c;
            uVar11 = 0;
            local_14c = puVar19;
            if (((uint)local_16c & 0x10) == 0) {
              if (((uint)local_16c & 0x40) == 0) {
                uVar11 = (uint)local_16c & 0x200;
                if (uVar11 != 0) {
                  uVar20 = uVar20 & 0xff;
                  uVar11 = 0;
                }
              }
              else {
                uVar20 = uVar20 & 0xffff;
                uVar11 = 0;
              }
            }
          }
          else {
            puVar19 = (uint *)((int)local_14c + 7U & 0xfffffff8);
            uVar11 = puVar19[1];
            uVar20 = *puVar19;
            local_14c = puVar19 + 2;
          }
          if (((int)local_16c << 0x1f < 0) && (uVar20 != 0 || uVar11 != 0)) {
            local_16c = (undefined *)((uint)local_16c | 2);
            uStack_f4 = CONCAT11((byte)uVar26,0x30);
          }
          local_16c = (undefined *)((uint)local_16c & 0xfffffbff);
          iVar25 = 2;
          goto code_r0x000170f8;
        }
        local_8c[0] = bVar14;
        local_f5 = '\0';
        local_148 = (byte *)0x0;
        local_144 = 0;
        local_164 = (byte *)0x1;
        pbVar29 = (byte *)0x1;
        local_168 = local_8c;
        local_150 = 0;
        pbVar32 = (byte *)0x0;
        local_13c = 0;
        goto LAB_000171ea;
      }
    }
  }
LAB_000172da:
  if (local_d0 == (byte *)0x0) {
LAB_000171b4:
    uVar26 = (uint)*(ushort *)(param_2 + 3);
  }
  else {
    FUN_00019474(param_1,param_2,&local_d8);
    uVar26 = (uint)*(ushort *)(param_2 + 3);
  }
LAB_000171b8:
  if (-1 < (int)(uVar26 << 0x19)) {
    return local_15c;
  }
  return -1;
  while (bVar34 = uVar11 != 0, bVar1 = uVar11 < (9 < uVar20), uVar11 = uVar28, uVar20 = uVar8,
        bVar34 || bVar1) {
code_r0x00017fc4:
    uVar8 = uVar20 + uVar11 + (uint)CARRY4(uVar20,uVar11);
    uVar28 = (uint)((ulonglong)uVar7 * (ulonglong)uVar8 >> 0x20);
    uVar8 = uVar8 - ((uVar28 & 0xfffffffc) + (uVar28 >> 2));
    lVar2 = (ulonglong)(uVar20 - uVar8) * (ulonglong)uVar7;
    uVar28 = uVar7 * (uVar11 - (uVar20 < uVar8)) + (uVar20 - uVar8) * -0x33333334 +
             (int)((ulonglong)lVar2 >> 0x20);
    local_168[-1] = ((byte)lVar2 & 1) * '\x05' + (char)uVar8 + 0x30;
    uVar8 = (uint)lVar2 >> 1 | uVar28 * -0x80000000;
    local_140 = local_140 + 1;
    local_168 = local_168 + -1;
    uVar28 = uVar28 >> 1;
    if (((((uint)local_16c & 0x400) != 0) && (local_140 == (byte *)(uint)*local_124)) &&
       (local_140 != (byte *)0xff)) {
      if (uVar11 == 0 && (9 < uVar20) <= uVar11) break;
      local_168 = local_168 + -local_118;
      FUN_00016b8c(local_168,local_11c,local_118);
      if (local_124[1] != 0) {
        local_124 = local_124 + 1;
      }
      local_140 = (byte *)0x0;
      uVar11 = uVar28;
      uVar20 = uVar8;
      goto code_r0x00017fc4;
    }
  }
  pbVar29 = abStack_2a + (2 - (int)local_168);
LAB_00017136:
  local_148 = (byte *)0x0;
  local_144 = 0;
  local_150 = 0;
  if ((int)pbVar32 < (int)pbVar29) {
    local_164 = pbVar29;
  }
  local_13c = 0;
LAB_0001714e:
  if (local_f5 != '\0') goto code_r0x00017152;
  goto LAB_000171ea;
  while (iVar31 = FUN_0000119c(uVar21,uVar9,0,0), iVar31 == 0) {
code_r0x00018444:
    pbVar10 = pbVar29;
    pbVar27 = local_140;
    pbVar29 = pbVar10 + -1;
    uVar37 = func_0x00000ccc((int)uVar37,(int)((ulonglong)uVar37 >> 0x20),0,uRam000186f4);
    iVar25 = func_0x0000122c();
    uVar36 = func_0x00000bf8();
    uVar37 = func_0x0000095c((int)uVar37,(int)((ulonglong)uVar37 >> 0x20),(int)uVar36,
                             (int)((ulonglong)uVar36 >> 0x20));
    uVar9 = (undefined4)((ulonglong)uVar37 >> 0x20);
    uVar21 = (undefined4)uVar37;
    local_140 = pbVar27 + 1;
    *pbVar27 = local_16c[iVar25];
    if (pbVar29 == (byte *)0xffffffff) break;
  }
  iVar31 = func_0x000011ec(uVar21,uVar9,0,uRam000186f8);
  if ((iVar31 == 0) &&
     ((iVar31 = FUN_0000119c(uVar21,uVar9,0,uRam000186f8), iVar31 == 0 || (-1 < iVar25 << 0x1f)))) {
    if (-1 < (int)pbVar29) {
      pbVar10 = local_140 + (int)pbVar10;
      pbVar29 = local_140;
      do {
        pbVar27 = pbVar29 + 1;
        *pbVar29 = 0x30;
        local_140 = pbVar10;
        pbVar29 = pbVar27;
      } while (pbVar10 != pbVar27);
    }
  }
  else {
    bVar14 = local_16c[0xf];
    bVar16 = *pbVar27;
    pbVar29 = local_140;
    pbStack_e0 = pbVar27;
    while (bVar16 == bVar14) {
      pbVar29[-1] = 0x30;
      bVar16 = pbStack_e0[-1];
      pbVar29 = pbStack_e0;
      pbStack_e0 = pbStack_e0 + -1;
    }
    if (bVar16 == 0x39) {
      bVar16 = local_16c[10];
    }
    else {
      bVar16 = bVar16 + 1;
    }
    pbVar29[-1] = bVar16;
  }
  local_140 = local_140 + -(int)local_168;
  uVar7 = uVar26 & 0xffffffdf;
code_r0x0001829e:
  if (uVar7 == 0x47) {
code_r0x000184ea:
    if (((int)(local_f0 + 3) < 0 == SCARRY4((int)local_f0,3)) && ((int)local_f0 <= (int)pbVar32)) {
      if ((int)local_f0 < (int)local_140) {
        pbVar29 = local_140 + iVar5;
        if (0 < (int)local_f0) {
          uVar26 = 0x67;
          goto code_r0x0001868c;
        }
        pbVar29 = pbVar29 + (1 - (int)local_f0);
        local_16c = local_164;
        local_164 = (byte *)((uint)pbVar29 & ~((int)pbVar29 >> 0x1f));
        uVar26 = 0x67;
      }
      else {
        pbVar29 = local_f0;
        if ((int)puVar24 << 0x1f < 0) {
          pbVar29 = local_f0 + iVar5;
        }
        if (((int)puVar24 << 0x15 < 0) && (0 < (int)local_f0)) {
          uVar26 = 0x67;
          goto code_r0x000187a2;
        }
        local_16c = local_164;
        local_164 = (byte *)((uint)pbVar29 & ~((int)pbVar29 >> 0x1f));
        uVar26 = 0x67;
      }
      goto code_r0x0001854e;
    }
    pbVar32 = local_f0 + -1;
    uVar26 = uVar26 - 2;
code_r0x000184fa:
    uStack_e8 = (undefined1)uVar26;
    bVar34 = false;
    pbVar29 = local_f0;
    local_f0 = pbVar32;
code_r0x000182c6:
    if ((int)local_f0 < 0) {
      pbVar32 = (byte *)(1 - (int)pbVar29);
    }
    else {
      pbVar29 = (byte *)0x2b;
      pbVar32 = local_f0;
    }
    cStack_e7 = (char)pbVar29;
    if ((int)local_f0 < 0) {
      cStack_e7 = '-';
    }
    if ((int)pbVar32 < 10) {
      if (bVar34) {
        local_120 = acStack_e6;
      }
      else {
        acStack_e6[0] = '0';
        local_120 = acStack_e6 + 1;
      }
      *local_120 = (char)pbVar32 + '0';
      local_120 = local_120 + (1 - (int)&uStack_e8);
    }
    else {
      pcVar30 = acStack_db + 2;
      pcVar13 = pcVar30;
      do {
        pcVar12 = pcVar13;
        pbVar29 = (byte *)((ulonglong)uRam00018430 * ZEXT48(pbVar32) >> 0x23);
        cVar3 = (char)pbVar29;
        pcVar12[-1] = (char)pbVar32 + cVar3 * -10 + '0';
        bVar34 = 99 < (int)pbVar32;
        pcVar13 = pcVar12 + -1;
        pbVar32 = pbVar29;
      } while (bVar34);
      pcVar12[-2] = cVar3 + '0';
      if (pcVar12 + -2 < pcVar30) {
        pcVar13 = &cStack_e7;
        pcVar23 = pcVar12 + -2;
        do {
          pcVar22 = pcVar23 + 1;
          pcVar13 = pcVar13 + 1;
          *pcVar13 = *pcVar23;
          pcVar23 = pcVar22;
        } while (pcVar22 != pcVar30);
        local_120 = (char *)((int)&local_d8 + (3 - (int)pcVar12));
      }
      else {
        local_120 = (char *)0x2;
      }
    }
    pbVar29 = local_140 + (int)local_120;
    if ((1 < (int)local_140) || ((int)puVar24 << 0x1f < 0)) {
      pbVar29 = pbVar29 + iVar5;
    }
    local_16c = (undefined *)((uint)puVar24 & 0xfffffbff | 0x100);
    local_148 = (byte *)0x0;
    local_144 = 0;
    local_164 = (byte *)((uint)pbVar29 & ~((int)pbVar29 >> 0x1f));
    local_13c = 0;
  }
  else {
    if (uVar7 != 0x46) {
      pbVar32 = local_f0 + -1;
      if (uVar26 == 0x61) {
        uStack_e8 = 0x70;
      }
      else {
        if (uVar26 != 0x41) goto code_r0x000184fa;
        uStack_e8 = 0x50;
      }
      bVar34 = true;
      pbVar29 = local_f0;
      local_f0 = pbVar32;
      goto code_r0x000182c6;
    }
    if ((int)local_f0 < 1) {
      if (((uint)puVar24 & 1) == 0 && pbVar32 == (byte *)0x0) {
        local_16c = local_164;
        pbVar29 = (byte *)0x1;
        local_164 = (byte *)0x1;
        uVar26 = 0x66;
      }
      else {
        local_16c = local_164;
        pbVar29 = pbVar32 + iVar5 + 1;
        local_164 = (byte *)((uint)pbVar29 & ~((int)pbVar29 >> 0x1f));
        uVar26 = 0x66;
      }
code_r0x0001854e:
      local_13c = 0;
      local_144 = 0;
      local_148 = local_f0;
    }
    else {
      if (((uint)puVar24 & 1) == 0 && pbVar32 == (byte *)0x0) {
        uVar26 = 0x66;
        pbVar29 = local_f0;
      }
      else {
        pbVar29 = local_f0 + iVar5 + (int)pbVar32;
        uVar26 = 0x66;
      }
code_r0x0001868c:
      if (-1 < (int)puVar24 << 0x15) {
        local_16c = local_164;
        local_164 = (byte *)((uint)pbVar29 & ~((int)pbVar29 >> 0x1f));
        goto code_r0x0001854e;
      }
code_r0x000187a2:
      uVar7 = (uint)*local_124;
      local_148 = local_f0;
      if (uVar7 == 0xff) {
        local_13c = 0;
        local_144 = 0;
      }
      else {
        local_13c = 0;
        local_144 = 0;
        do {
          if ((int)local_148 <= (int)uVar7) break;
          local_148 = local_148 + -uVar7;
          uVar7 = (uint)local_124[1];
          if (uVar7 == 0) {
            uVar7 = (uint)*local_124;
            local_13c = local_13c + 1;
          }
          else {
            local_144 = local_144 + 1;
            local_124 = local_124 + 1;
          }
        } while (uVar7 != 0xff);
      }
      local_16c = local_164;
      pbVar29 = pbVar29 + local_118 * (local_13c + local_144);
      local_164 = (byte *)((uint)pbVar29 & ~((int)pbVar29 >> 0x1f));
    }
  }
  if (local_114 == 0) {
    pbVar32 = (byte *)0x0;
    goto LAB_0001714e;
  }
  local_f5 = '-';
  pbVar32 = (byte *)0x0;
code_r0x00017152:
  local_164 = local_164 + 1;
LAB_000171ea:
  iVar25 = DAT_00017974;
  if (((uint)local_16c & 2) != 0) {
    local_164 = local_164 + 2;
  }
  if ((((uint)local_16c & 0x84) == 0) && (iVar31 = (int)local_160 - (int)local_164, 0 < iVar31)) {
    if (0x10 < iVar31) {
      do {
        while( true ) {
          iVar6 = iVar31;
          local_d4 = local_d4 + 1;
          local_d0 = local_d0 + 0x10;
          *piVar4 = iVar25;
          piVar4[1] = 0x10;
          if (local_d4 < 8) break;
          piVar4 = local_cc;
          iVar31 = FUN_00019474(param_1,param_2,&local_d8);
          if (iVar31 != 0) goto LAB_000171a8;
          iVar31 = iVar6 + -0x10;
          if (iVar6 + -0x10 < 0x11) goto LAB_000178e4;
        }
        piVar4 = piVar4 + 2;
        iVar31 = iVar6 + -0x10;
      } while (0x10 < iVar6 + -0x10);
LAB_000178e4:
      iVar31 = iVar6 + -0x10;
    }
    local_d4 = local_d4 + 1;
    local_d0 = local_d0 + iVar31;
    *piVar4 = iVar25;
    piVar4[1] = iVar31;
    if (local_d4 < 8) {
      piVar4 = piVar4 + 2;
    }
    else {
      iVar25 = FUN_00019474(param_1,param_2,&local_d8);
      if (iVar25 != 0) goto LAB_000171a8;
      piVar4 = local_cc;
    }
  }
  if (local_f5 != '\0') {
    local_d4 = local_d4 + 1;
    local_d0 = local_d0 + 1;
    *piVar4 = (int)&local_f5;
    piVar4[1] = 1;
    if (local_d4 < 8) {
      piVar4 = piVar4 + 2;
    }
    else {
      iVar25 = FUN_00019474(param_1,param_2,&local_d8);
      if (iVar25 != 0) goto LAB_000171a8;
      piVar4 = local_cc;
    }
  }
  if (((uint)local_16c & 2) != 0) {
    local_d4 = local_d4 + 1;
    local_d0 = local_d0 + 2;
    *piVar4 = (int)&uStack_f4;
    piVar4[1] = 2;
    if (local_d4 < 8) {
      piVar4 = piVar4 + 2;
    }
    else {
      iVar25 = FUN_00019474(param_1,param_2,&local_d8);
      if (iVar25 != 0) goto LAB_000171a8;
      piVar4 = local_cc;
    }
  }
  iVar25 = DAT_0001796c;
  if ((((uint)local_16c & 0x84) == 0x80) && (iVar31 = (int)local_160 - (int)local_164, 0 < iVar31))
  {
    if (0x10 < iVar31) {
      do {
        while( true ) {
          iVar6 = iVar31;
          local_d4 = local_d4 + 1;
          local_d0 = local_d0 + 0x10;
          *piVar4 = iVar25;
          piVar4[1] = 0x10;
          if (local_d4 < 8) break;
          piVar4 = local_cc;
          iVar31 = FUN_00019474(param_1,param_2,&local_d8);
          if (iVar31 != 0) goto LAB_000171a8;
          iVar31 = iVar6 + -0x10;
          if (iVar6 + -0x10 < 0x11) goto LAB_000176ba;
        }
        piVar4 = piVar4 + 2;
        iVar31 = iVar6 + -0x10;
      } while (0x10 < iVar6 + -0x10);
LAB_000176ba:
      iVar31 = iVar6 + -0x10;
    }
    local_d4 = local_d4 + 1;
    *piVar4 = iVar25;
    local_d0 = local_d0 + iVar31;
    piVar4[1] = iVar31;
    if (local_d4 < 8) {
      piVar4 = piVar4 + 2;
      iVar25 = DAT_0001796c;
    }
    else {
      iVar25 = FUN_00019474(param_1,param_2,&local_d8);
      if (iVar25 != 0) goto LAB_000171a8;
      piVar4 = local_cc;
      iVar25 = DAT_0001796c;
    }
  }
  iVar31 = (int)pbVar32 - (int)pbVar29;
  DAT_0001796c = iVar25;
  if (0 < iVar31) {
    if (0x10 < iVar31) {
      do {
        while( true ) {
          iVar6 = iVar31;
          local_d4 = local_d4 + 1;
          local_d0 = local_d0 + 0x10;
          *piVar4 = DAT_0001796c;
          piVar4[1] = 0x10;
          if (local_d4 < 8) break;
          iVar31 = FUN_00019474(param_1,param_2,&local_d8);
          if (iVar31 != 0) goto LAB_000171a8;
          piVar4 = local_cc;
          iVar31 = iVar6 + -0x10;
          if (iVar6 + -0x10 < 0x11) goto LAB_00017748;
        }
        piVar4 = piVar4 + 2;
        iVar31 = iVar6 + -0x10;
      } while (0x10 < iVar6 + -0x10);
LAB_00017748:
      iVar31 = iVar6 + -0x10;
    }
    local_d4 = local_d4 + 1;
    *piVar4 = iVar25;
    local_d0 = local_d0 + iVar31;
    piVar4[1] = iVar31;
    if (local_d4 < 8) {
      piVar4 = piVar4 + 2;
    }
    else {
      iVar25 = FUN_00019474(param_1,param_2,&local_d8);
      if (iVar25 != 0) goto LAB_000171a8;
      piVar4 = local_cc;
    }
  }
  pbVar32 = local_d0;
  if ((int)local_16c << 0x17 < 0) {
    if ((int)uVar26 < 0x66) {
      piVar18 = piVar4 + 2;
      if (((int)local_140 < 2) && (-1 < (int)local_16c << 0x1f)) {
        *piVar4 = (int)local_168;
        iVar31 = local_d4 + 1;
        pbVar32 = local_d0 + 1;
        piVar4[1] = 1;
        local_d4 = iVar31;
        local_d0 = pbVar32;
        if (7 < iVar31) goto LAB_00017b1c;
      }
      else {
        *piVar4 = (int)local_168;
        local_d4 = local_d4 + 1;
        local_d0 = local_d0 + 1;
        piVar4[1] = 1;
        if (7 < local_d4) {
          iVar25 = FUN_00019474(param_1,param_2,&local_d8);
          if (iVar25 != 0) goto LAB_000171a8;
          piVar18 = local_cc;
        }
        local_d4 = local_d4 + 1;
        local_d0 = local_d0 + iVar5;
        *piVar18 = iVar17;
        piVar18[1] = iVar5;
        if (local_d4 < 8) {
          piVar18 = piVar18 + 2;
        }
        else {
          iVar25 = FUN_00019474(param_1,param_2,&local_d8);
          if (iVar25 != 0) goto LAB_000171a8;
          piVar18 = local_cc;
        }
        pbVar32 = local_d0;
        iVar31 = local_d4;
        pbVar29 = local_140 + -1;
        iVar6 = FUN_0000119c(local_138,uStack_134,0,0);
        iVar25 = DAT_00017c5c;
        if (iVar6 == 0) {
          piVar18[1] = (int)pbVar29;
          local_d4 = iVar31 + 1;
          local_d0 = pbVar32 + (int)pbVar29;
          *piVar18 = (int)(local_168 + 1);
          if (local_d4 < 8) {
LAB_0001786a:
            piVar18 = piVar18 + 2;
            pbVar32 = local_d0;
            iVar31 = local_d4;
          }
          else {
LAB_00017b1c:
            iVar25 = FUN_00019474(param_1,param_2,&local_d8);
            if (iVar25 != 0) goto LAB_000171a8;
            piVar18 = local_cc;
            pbVar32 = local_d0;
            iVar31 = local_d4;
          }
        }
        else if (1 < (int)local_140) {
          local_d0 = pbVar32;
          local_d4 = iVar31;
          if (0x11 < (int)local_140) {
            do {
              local_d4 = iVar31 + 1;
              local_d0 = pbVar32 + 0x10;
              *piVar18 = iVar25;
              piVar18[1] = 0x10;
              if (local_d4 < 8) {
                piVar18 = piVar18 + 2;
              }
              else {
                iVar31 = FUN_00019474(param_1,param_2,&local_d8);
                if (iVar31 != 0) goto LAB_000171a8;
                piVar18 = local_cc;
              }
              pbVar29 = pbVar29 + -0x10;
              iVar31 = local_d4;
              pbVar32 = local_d0;
            } while (0x10 < (int)pbVar29);
          }
          local_d4 = local_d4 + 1;
          local_d0 = local_d0 + (int)pbVar29;
          *piVar18 = iVar25;
          piVar18[1] = (int)pbVar29;
          if (local_d4 < 8) goto LAB_0001786a;
          goto LAB_00017b1c;
        }
      }
      piVar18[1] = (int)local_120;
      local_d4 = iVar31 + 1;
      local_d0 = pbVar32 + (int)local_120;
      *piVar18 = (int)&uStack_e8;
      if (7 < local_d4) goto LAB_000177da;
      piVar4 = piVar18 + 2;
      pbVar32 = local_d0;
    }
    else {
      iVar25 = FUN_0000119c(local_138,uStack_134,0,0);
      if (iVar25 == 0) {
        if ((int)local_f0 < 1) {
          *piVar4 = DAT_00017970;
          local_d4 = local_d4 + 1;
          local_d0 = pbVar32 + 1;
          piVar4[1] = 1;
          if (local_d4 < 8) {
            piVar4 = piVar4 + 2;
          }
          else {
            iVar25 = FUN_00019474(param_1,param_2,&local_d8);
            if (iVar25 != 0) goto LAB_000171a8;
            piVar4 = local_cc;
          }
          if (local_f0 == (byte *)0x0) {
            pbVar32 = local_d0;
            if (((uint)local_16c & 1) == 0 && local_140 == (byte *)0x0) goto LAB_00017290;
            *piVar4 = iVar17;
            piVar4[1] = iVar5;
            pbVar32 = local_d0 + iVar5;
            iVar25 = local_d4 + 1;
            if (7 < local_d4 + 1) goto LAB_0001839a;
LAB_000177bc:
            local_d4 = iVar25;
            local_d0 = pbVar32;
            piVar4 = piVar4 + 2;
          }
          else {
            *piVar4 = iVar17;
            piVar4[1] = iVar5;
            if (local_d4 + 1 < 8) {
              piVar4 = piVar4 + 2;
              local_d0 = local_d0 + iVar5;
              local_d4 = local_d4 + 1;
            }
            else {
LAB_0001839a:
              local_d0 = local_d0 + iVar5;
              local_d4 = local_d4 + 1;
              iVar25 = FUN_00019474(param_1,param_2,&local_d8);
              if (iVar25 != 0) goto LAB_000171a8;
              piVar4 = local_cc;
            }
            iVar25 = DAT_0001842c;
            if ((int)local_f0 < 0) {
              iVar31 = -(int)local_f0;
              if ((int)(local_f0 + 0x10) < 0 != SCARRY4((int)local_f0,0x10)) {
                do {
                  local_d4 = local_d4 + 1;
                  local_d0 = local_d0 + 0x10;
                  *piVar4 = iVar25;
                  piVar4[1] = 0x10;
                  if (local_d4 < 8) {
                    piVar4 = piVar4 + 2;
                  }
                  else {
                    iVar6 = FUN_00019474(param_1,param_2,&local_d8);
                    if (iVar6 != 0) goto LAB_000171a8;
                    piVar4 = local_cc;
                  }
                  iVar31 = iVar31 + -0x10;
                } while (0x10 < iVar31);
              }
              local_d4 = local_d4 + 1;
              local_d0 = local_d0 + iVar31;
              *piVar4 = iVar25;
              piVar4[1] = iVar31;
              pbVar32 = local_d0;
              iVar25 = local_d4;
              if (local_d4 < 8) goto LAB_000177bc;
              iVar25 = FUN_00019474(param_1,param_2,&local_d8);
              if (iVar25 != 0) goto LAB_000171a8;
              piVar4 = local_cc;
            }
          }
          *piVar4 = (int)local_168;
          piVar4[1] = (int)local_140;
          local_d0 = local_140 + (int)local_d0;
          goto joined_r0x000180c2;
        }
        pbVar29 = local_148;
        if ((int)local_140 <= (int)local_148) {
          pbVar29 = local_140;
        }
        pbVar10 = local_168 + (int)local_140;
        if (0 < (int)pbVar29) {
          *piVar4 = (int)local_168;
          piVar4[1] = (int)pbVar29;
          local_d4 = local_d4 + 1;
          local_d0 = pbVar32 + (int)pbVar29;
          if (local_d4 < 8) {
            piVar4 = piVar4 + 2;
            pbVar32 = local_d0;
          }
          else {
            iVar25 = FUN_00019474(param_1,param_2,&local_d8);
            if (iVar25 != 0) goto LAB_000171a8;
            piVar4 = local_cc;
            pbVar32 = local_d0;
          }
        }
        iVar25 = DAT_00018050;
        pbVar27 = local_148;
        if (-1 < (int)pbVar29) {
          pbVar27 = local_148 + -(int)pbVar29;
        }
        if (0 < (int)pbVar27) {
          for (; 0x10 < (int)pbVar27; pbVar27 = pbVar27 + -0x10) {
            local_d4 = local_d4 + 1;
            local_d0 = pbVar32 + 0x10;
            *piVar4 = iVar25;
            piVar4[1] = 0x10;
            if (local_d4 < 8) {
              piVar4 = piVar4 + 2;
            }
            else {
              iVar31 = FUN_00019474(param_1,param_2,&local_d8);
              if (iVar31 != 0) goto LAB_000171a8;
              piVar4 = local_cc;
            }
            pbVar32 = local_d0;
          }
          local_d4 = local_d4 + 1;
          *piVar4 = iVar25;
          local_d0 = pbVar27 + (int)pbVar32;
          piVar4[1] = (int)pbVar27;
          if (local_d4 < 8) {
            piVar4 = piVar4 + 2;
            pbVar32 = local_d0;
          }
          else {
            iVar25 = FUN_00019474(param_1,param_2,&local_d8);
            if (iVar25 != 0) goto LAB_000171a8;
            piVar4 = local_cc;
            pbVar32 = local_d0;
          }
        }
        iVar25 = DAT_00018050;
        local_168 = local_168 + (int)local_148;
        if ((int)local_16c << 0x15 < 0) {
          if (local_144 == 0) goto LAB_00017ee0;
LAB_00017e7e:
          if (local_13c == 0) {
            local_144 = local_144 + -1;
            local_124 = local_124 + -1;
            goto LAB_00017e8a;
          }
          do {
            local_13c = local_13c + -1;
LAB_00017e8a:
            *piVar4 = local_11c;
            piVar4[1] = local_118;
            local_d4 = local_d4 + 1;
            local_d0 = pbVar32 + local_118;
            if (local_d4 < 8) {
              piVar4 = piVar4 + 2;
            }
            else {
              iVar31 = FUN_00019474(param_1,param_2,&local_d8);
              if (iVar31 != 0) goto LAB_000171a8;
              piVar4 = local_cc;
            }
            uVar7 = (uint)*local_124;
            uVar26 = (int)pbVar10 - (int)local_168;
            if ((int)uVar7 <= (int)pbVar10 - (int)local_168) {
              uVar26 = uVar7;
            }
            if (0 < (int)uVar26) {
              local_d4 = local_d4 + 1;
              local_d0 = local_d0 + uVar26;
              *piVar4 = (int)local_168;
              piVar4[1] = uVar26;
              if (local_d4 < 8) {
                uVar7 = (uint)*local_124;
                piVar4 = piVar4 + 2;
              }
              else {
                iVar31 = FUN_00019474(param_1,param_2,&local_d8);
                if (iVar31 != 0) goto LAB_000171a8;
                uVar7 = (uint)*local_124;
                piVar4 = local_cc;
              }
            }
            uVar20 = uVar7;
            if (-1 < (int)uVar26) {
              uVar20 = uVar7 - uVar26;
            }
            if ((int)uVar20 < 1) {
              local_168 = local_168 + uVar7;
            }
            else {
              iVar31 = DAT_000188c4;
              if (0x10 < (int)uVar20) {
                do {
                  while( true ) {
                    uVar26 = uVar20;
                    local_d4 = local_d4 + 1;
                    local_d0 = local_d0 + 0x10;
                    *piVar4 = iVar25;
                    piVar4[1] = 0x10;
                    if (local_d4 < 8) break;
                    iVar31 = FUN_00019474(param_1,param_2,&local_d8);
                    if (iVar31 != 0) goto LAB_000171a8;
                    piVar4 = local_cc;
                    uVar20 = uVar26 - 0x10;
                    if ((int)(uVar26 - 0x10) < 0x11) goto LAB_00017f44;
                  }
                  piVar4 = piVar4 + 2;
                  uVar20 = uVar26 - 0x10;
                } while (0x10 < (int)(uVar26 - 0x10));
LAB_00017f44:
                uVar20 = uVar26 - 0x10;
                iVar31 = iVar25;
              }
              *piVar4 = iVar31;
              local_d4 = local_d4 + 1;
              local_d0 = local_d0 + uVar20;
              piVar4[1] = uVar20;
              if (local_d4 < 8) {
                piVar4 = piVar4 + 2;
                local_168 = local_168 + *local_124;
              }
              else {
                iVar31 = FUN_00019474(param_1,param_2,&local_d8);
                if (iVar31 != 0) goto LAB_000171a8;
                piVar4 = local_cc;
                local_168 = local_168 + *local_124;
              }
            }
            pbVar32 = local_d0;
            if (local_144 != 0) goto LAB_00017e7e;
LAB_00017ee0:
            if (local_13c == 0) {
              if (pbVar10 <= local_168) {
                local_168 = pbVar10;
              }
              break;
            }
          } while( true );
        }
        if (((int)local_f0 < (int)local_140) || ((int)local_16c << 0x1f < 0)) {
          local_d0 = pbVar32 + iVar5;
          *piVar4 = iVar17;
          piVar4[1] = iVar5;
          local_d4 = local_d4 + 1;
          if (local_d4 < 8) {
            piVar4 = piVar4 + 2;
          }
          else {
            iVar25 = FUN_00019474(param_1,param_2,&local_d8);
            if (iVar25 != 0) goto LAB_000171a8;
            piVar4 = local_cc;
          }
          pbVar29 = local_140 + -(int)local_f0;
          pbVar27 = pbVar10 + -(int)local_168;
          if ((int)pbVar29 <= (int)(pbVar10 + -(int)local_168)) {
            pbVar27 = pbVar29;
          }
          pbVar32 = local_d0;
          if (0 < (int)pbVar27) {
            *piVar4 = (int)local_168;
            local_d4 = local_d4 + 1;
            local_d0 = local_d0 + (int)pbVar27;
            piVar4[1] = (int)pbVar27;
            if (local_d4 < 8) {
              piVar4 = piVar4 + 2;
              pbVar32 = local_d0;
            }
            else {
              iVar25 = FUN_00019474(param_1,param_2,&local_d8);
              if (iVar25 != 0) goto LAB_000171a8;
              pbVar29 = local_140 + -(int)local_f0;
              piVar4 = local_cc;
              pbVar32 = local_d0;
            }
          }
        }
        else {
          pbVar29 = local_140 + -(int)local_f0;
          pbVar27 = pbVar10 + -(int)local_168;
          if ((int)pbVar29 <= (int)(pbVar10 + -(int)local_168)) {
            pbVar27 = pbVar29;
          }
        }
        iVar25 = DAT_00017c5c;
        if (-1 < (int)pbVar27) {
          pbVar29 = pbVar29 + -(int)pbVar27;
        }
        if (0 < (int)pbVar29) {
          for (; 0x10 < (int)pbVar29; pbVar29 = pbVar29 + -0x10) {
            local_d4 = local_d4 + 1;
            local_d0 = pbVar32 + 0x10;
            *piVar4 = iVar25;
            piVar4[1] = 0x10;
            if (local_d4 < 8) {
              piVar4 = piVar4 + 2;
            }
            else {
              iVar31 = FUN_00019474(param_1,param_2,&local_d8);
              if (iVar31 != 0) goto LAB_000171a8;
              piVar4 = local_cc;
            }
            pbVar32 = local_d0;
          }
          goto LAB_000180b0;
        }
      }
      else {
        *piVar4 = DAT_000175d8;
        local_d4 = local_d4 + 1;
        local_d0 = pbVar32 + 1;
        piVar4[1] = 1;
        if (local_d4 < 8) {
          piVar4 = piVar4 + 2;
        }
        else {
          iVar25 = FUN_00019474(param_1,param_2,&local_d8);
          if (iVar25 != 0) goto LAB_000171a8;
          piVar4 = local_cc;
        }
        if (((int)local_f0 < (int)local_140) || (pbVar32 = local_d0, (int)local_16c << 0x1f < 0)) {
          local_d0 = local_d0 + iVar5;
          *piVar4 = iVar17;
          piVar4[1] = iVar5;
          local_d4 = local_d4 + 1;
          if (local_d4 < 8) {
            piVar4 = piVar4 + 2;
          }
          else {
            iVar25 = FUN_00019474(param_1,param_2,&local_d8);
            if (iVar25 != 0) goto LAB_000171a8;
            piVar4 = local_cc;
          }
          iVar25 = DAT_000175dc;
          pbVar29 = local_140 + -1;
          pbVar32 = local_d0;
          if (0 < (int)pbVar29) {
            for (; 0x10 < (int)pbVar29; pbVar29 = pbVar29 + -0x10) {
              local_d4 = local_d4 + 1;
              local_d0 = pbVar32 + 0x10;
              *piVar4 = iVar25;
              piVar4[1] = 0x10;
              if (local_d4 < 8) {
                piVar4 = piVar4 + 2;
              }
              else {
                iVar31 = FUN_00019474(param_1,param_2,&local_d8);
                if (iVar31 != 0) goto LAB_000171a8;
                piVar4 = local_cc;
              }
              pbVar32 = local_d0;
            }
LAB_000180b0:
            local_d0 = pbVar32 + (int)pbVar29;
            *piVar4 = iVar25;
            piVar4[1] = (int)pbVar29;
            goto joined_r0x000180c2;
          }
        }
      }
    }
  }
  else {
    *piVar4 = (int)local_168;
    piVar4[1] = (int)pbVar29;
    local_d0 = pbVar29 + (int)local_d0;
joined_r0x000180c2:
    local_d4 = local_d4 + 1;
    if (local_d4 < 8) {
      piVar4 = piVar4 + 2;
      pbVar32 = local_d0;
    }
    else {
LAB_000177da:
      iVar25 = FUN_00019474(param_1,param_2,&local_d8);
      if (iVar25 != 0) goto LAB_000171a8;
      piVar4 = local_cc;
      pbVar32 = local_d0;
    }
  }
LAB_00017290:
  iVar25 = DAT_00017c58;
  if (((int)local_16c << 0x1d < 0) && (iVar31 = (int)local_160 - (int)local_164, 0 < iVar31)) {
    if (0x10 < iVar31) {
      do {
        while( true ) {
          iVar6 = iVar31;
          local_d4 = local_d4 + 1;
          pbVar32 = pbVar32 + 0x10;
          *piVar4 = iVar25;
          piVar4[1] = 0x10;
          if (local_d4 < 8) break;
          piVar4 = local_cc;
          local_d0 = pbVar32;
          iVar31 = FUN_00019474(param_1,param_2,&local_d8);
          if (iVar31 != 0) goto LAB_000171a8;
          iVar31 = iVar6 + -0x10;
          pbVar32 = local_d0;
          if (iVar6 + -0x10 < 0x11) goto LAB_000179c8;
        }
        piVar4 = piVar4 + 2;
        iVar31 = iVar6 + -0x10;
      } while (0x10 < iVar6 + -0x10);
LAB_000179c8:
      iVar31 = iVar6 + -0x10;
    }
    local_d4 = local_d4 + 1;
    local_d0 = pbVar32 + iVar31;
    *piVar4 = iVar25;
    piVar4[1] = iVar31;
    pbVar32 = local_d0;
    if ((7 < local_d4) &&
       (iVar25 = FUN_00019474(param_1,param_2,&local_d8), pbVar32 = local_d0, iVar25 != 0))
    goto LAB_000171a8;
  }
  if ((int)local_160 < (int)local_164) {
    local_160 = local_164;
  }
  local_15c = local_15c + (int)local_160;
  if ((pbVar32 == (byte *)0x0) || (iVar25 = FUN_00019474(param_1,param_2,&local_d8), iVar25 == 0)) {
    local_d4 = 0;
    if (local_150 != 0) {
      FUN_00018a90(param_1,local_150);
    }
    piVar4 = local_cc;
LAB_000172cc:
    bVar14 = *pbVar33;
    local_168 = pbVar33;
    param_4 = local_14c;
    goto joined_r0x00016f0e;
  }
LAB_000171a8:
  if (local_150 != 0) {
    FUN_00018a90(param_1,local_150);
  }
  goto LAB_000171b4;
code_r0x00017018:
  uVar20 = uVar26 - 0x30;
  local_160 = (byte *)0x0;
  pbVar29 = pbVar33;
  do {
    pbVar33 = pbVar29 + 1;
    uVar26 = (uint)*pbVar29;
    local_160 = (byte *)(uVar20 + (int)local_160 * 10);
    uVar20 = uVar26 - 0x30;
    pbVar29 = pbVar33;
  } while (uVar20 < 10);
  goto LAB_00016f54;
code_r0x00017498:
  uVar26 = (uint)*pbVar33;
  if (local_f5 == '\0') {
    local_f5 = ' ';
  }
  goto LAB_00016f50;
}



// FUN_000188c8 @ 000188c8 (296 bytes, called_by=0, calls=0)

uint FUN_000188c8(int param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  uint uVar7;
  uint *puVar8;
  uint *puVar9;
  uint uVar10;
  uint *puVar11;
  uint *puVar12;
  
  iVar4 = *(int *)(param_2 + 0x10);
  if (iVar4 <= *(int *)(param_1 + 0x10)) {
    iVar5 = iVar4 + -1;
    puVar6 = (uint *)(param_2 + 0x14);
    puVar9 = (uint *)(param_1 + 0x14);
    puVar8 = puVar6 + iVar5;
    uVar7 = puVar9[iVar5] / (puVar6[iVar5] + 1);
    if (puVar6[iVar5] + 1 <= puVar9[iVar5]) {
      uVar2 = 0;
      iVar3 = 0;
      puVar1 = puVar9;
      puVar11 = puVar6;
      do {
        puVar12 = puVar11 + 1;
        uVar2 = uVar7 * (*puVar11 & 0xffff) + uVar2;
        uVar10 = uVar7 * (*puVar11 >> 0x10) + (uVar2 >> 0x10);
        uVar2 = ((*puVar1 & 0xffff) - (uVar2 & 0xffff)) + iVar3;
        iVar3 = (((int)uVar2 >> 0x10) - (uVar10 & 0xffff)) + (*puVar1 >> 0x10);
        *puVar1 = uVar2 & 0xffff | iVar3 * 0x10000;
        uVar2 = uVar10 >> 0x10;
        iVar3 = iVar3 >> 0x10;
        puVar1 = puVar1 + 1;
        puVar11 = puVar12;
      } while (puVar12 <= puVar8);
      if (puVar9[iVar5] == 0) {
        puVar1 = puVar9 + iVar4 + -2;
        while ((puVar9 < puVar1 && (*puVar1 == 0))) {
          iVar5 = iVar5 + -1;
          puVar1 = puVar1 + -1;
        }
        *(int *)(param_1 + 0x10) = iVar5;
      }
    }
    iVar4 = FUN_000191a4(param_1,param_2);
    if (-1 < iVar4) {
      iVar4 = 0;
      puVar1 = puVar9;
      do {
        puVar11 = puVar6 + 1;
        uVar2 = ((*puVar1 & 0xffff) - (*puVar6 & 0xffff)) + iVar4;
        iVar4 = (((int)uVar2 >> 0x10) - (*puVar6 >> 0x10)) + (*puVar1 >> 0x10);
        *puVar1 = uVar2 & 0xffff | iVar4 * 0x10000;
        iVar4 = iVar4 >> 0x10;
        puVar1 = puVar1 + 1;
        puVar6 = puVar11;
      } while (puVar11 <= puVar8);
      if (puVar9[iVar5] == 0) {
        puVar6 = puVar9 + iVar5 + -1;
        while ((puVar9 < puVar6 && (*puVar6 == 0))) {
          iVar5 = iVar5 + -1;
          puVar6 = puVar6 + -1;
        }
        *(int *)(param_1 + 0x10) = iVar5;
      }
      uVar7 = uVar7 + 1;
    }
    return uVar7;
  }
  return 0;
}



// FUN_000189f0 @ 000189f0 (4 bytes, called_by=0, calls=0)

void FUN_000189f0(void)

{
  return;
}



// FUN_000189f4 @ 000189f4 (144 bytes, called_by=0, calls=0)

undefined4 FUN_000189f4(undefined4 param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  iVar1 = DAT_00018a84;
  FUN_00016948();
  uVar5 = *(uint *)(*(int *)(iVar1 + 8) + 4) & 0xfffffffc;
  iVar4 = ((uVar5 + 0xfef) - param_2 & 0xfffff000) - 0x1000;
  if (0xfff < iVar4) {
    iVar3 = FUN_00016960(param_1,0);
    if (iVar3 == *(int *)(iVar1 + 8) + uVar5) {
      iVar3 = FUN_00016960(param_1,-iVar4);
      piVar2 = DAT_00018a88;
      if (iVar3 != -1) {
        *(uint *)(*(int *)(iVar1 + 8) + 4) = uVar5 - iVar4 | 1;
        *piVar2 = *piVar2 - iVar4;
        FUN_00016954(param_1);
        return 1;
      }
      iVar4 = FUN_00016960(param_1,0);
      uVar5 = iVar4 - *(int *)(iVar1 + 8);
      if (0xf < (int)uVar5) {
        *(uint *)(*(int *)(iVar1 + 8) + 4) = uVar5 | 1;
        *DAT_00018a88 = iVar4 - *DAT_00018a8c;
      }
    }
  }
  FUN_00016954(param_1);
  return 0;
}



// FUN_00018a90 @ 00018a90 (494 bytes, called_by=0, calls=0)

void FUN_00018a90(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  if (param_2 == 0) {
    return;
  }
  FUN_00016948();
  iVar1 = DAT_00018c80;
  uVar5 = *(uint *)(param_2 + -4);
  iVar8 = param_2 + -8;
  uVar3 = uVar5 & 0xfffffffe;
  puVar2 = (uint *)(iVar8 + uVar3);
  uVar4 = puVar2[1] & 0xfffffffc;
  if (*(uint **)(DAT_00018c80 + 8) == puVar2) {
    uVar4 = uVar4 + uVar3;
    if (-1 < (int)(uVar5 << 0x1f)) {
      iVar8 = iVar8 - *(int *)(param_2 + -8);
      uVar4 = uVar4 + *(int *)(param_2 + -8);
      iVar7 = *(int *)(iVar8 + 8);
      iVar9 = *(int *)(iVar8 + 0xc);
      *(int *)(iVar7 + 0xc) = iVar9;
      *(int *)(iVar9 + 8) = iVar7;
    }
    *(uint *)(iVar8 + 4) = uVar4 | 1;
    puVar2 = DAT_00018c84;
    *(int *)(iVar1 + 8) = iVar8;
    if (*puVar2 <= uVar4) {
      FUN_000189f4(param_1,*DAT_00018c88);
    }
    goto LAB_00018b26;
  }
  puVar2[1] = uVar4;
  if ((int)(uVar5 << 0x1f) < 0) {
    if (*(int *)((int)puVar2 + uVar4 + 4) << 0x1f < 0) {
      *(uint *)(param_2 + -4) = uVar3 | 1;
      *puVar2 = uVar3;
    }
    else {
LAB_00018b96:
      uVar5 = iVar1 + 8;
      uVar3 = uVar3 + uVar4;
      uVar4 = puVar2[2];
      if (uVar4 == uVar5) {
        *(int *)(iVar1 + 0x10) = iVar8;
        *(int *)(iVar1 + 0x14) = iVar8;
        *(uint *)(iVar8 + 8) = uVar5;
        *(uint *)(iVar8 + 0xc) = uVar5;
        *(uint *)(iVar8 + 4) = uVar3 | 1;
        *(uint *)(iVar8 + uVar3) = uVar3;
        goto LAB_00018b26;
      }
      uVar5 = puVar2[3];
      *(uint *)(uVar4 + 0xc) = uVar5;
      *(uint *)(uVar5 + 8) = uVar4;
      *(uint *)(iVar8 + 4) = uVar3 | 1;
      *(uint *)(iVar8 + uVar3) = uVar3;
    }
  }
  else {
    iVar8 = iVar8 - *(int *)(param_2 + -8);
    uVar3 = uVar3 + *(int *)(param_2 + -8);
    iVar7 = *(int *)(iVar8 + 8);
    uVar5 = *(uint *)((int)puVar2 + uVar4 + 4) & 1;
    if (iVar7 == iVar1 + 8) {
      if (uVar5 == 0) {
        uVar4 = uVar4 + uVar3;
        uVar3 = puVar2[2];
        uVar5 = puVar2[3];
        *(uint *)(uVar3 + 0xc) = uVar5;
        *(uint *)(uVar5 + 8) = uVar3;
        *(uint *)(iVar8 + 4) = uVar4 | 1;
        *(uint *)(iVar8 + uVar4) = uVar4;
      }
      else {
        *(uint *)(iVar8 + 4) = uVar3 | 1;
        *puVar2 = uVar3;
      }
      goto LAB_00018b26;
    }
    iVar9 = *(int *)(iVar8 + 0xc);
    *(int *)(iVar7 + 0xc) = iVar9;
    *(int *)(iVar9 + 8) = iVar7;
    if (uVar5 == 0) goto LAB_00018b96;
    *(uint *)(iVar8 + 4) = uVar3 | 1;
    *puVar2 = uVar3;
  }
  if (0x1ff < uVar3) {
    uVar4 = uVar3 >> 9;
    if (uVar3 < 0xa00) {
      iVar9 = (uVar3 >> 6) + 0x38;
      iVar7 = ((uVar3 >> 6) + 0x39) * 8;
    }
    else if (uVar4 < 0x15) {
      iVar9 = uVar4 + 0x5b;
      iVar7 = (uVar4 + 0x5c) * 8;
    }
    else if (uVar4 < 0x55) {
      iVar9 = (uVar3 >> 0xc) + 0x6e;
      iVar7 = ((uVar3 >> 0xc) + 0x6f) * 8;
    }
    else if (uVar4 < 0x155) {
      iVar9 = (uVar3 >> 0xf) + 0x77;
      iVar7 = ((uVar3 >> 0xf) + 0x78) * 8;
    }
    else if (uVar4 < 0x555) {
      iVar9 = (uVar3 >> 0x12) + 0x7c;
      iVar7 = ((uVar3 >> 0x12) + 0x7d) * 8;
    }
    else {
      iVar7 = 0x3f8;
      iVar9 = 0x7e;
    }
    iVar6 = *(int *)(iVar1 + iVar7);
    iVar7 = iVar1 + iVar7 + -8;
    if (iVar7 == iVar6) {
      uVar3 = *(uint *)(iVar1 + 4);
      uVar4 = 1 << (iVar9 >> 2 & 0xffU) | uVar3;
      *(uint *)(iVar1 + 4) = uVar4;
    }
    else {
      do {
        uVar4 = *(uint *)(iVar6 + 4) & 0xfffffffc;
        if (uVar4 <= uVar3) break;
        iVar6 = *(int *)(iVar6 + 8);
      } while (iVar7 != iVar6);
      iVar7 = *(int *)(iVar6 + 0xc);
    }
    *(int *)(iVar8 + 8) = iVar6;
    *(int *)(iVar8 + 0xc) = iVar7;
    *(int *)(iVar7 + 8) = iVar8;
    *(int *)(iVar6 + 0xc) = iVar8;
    FUN_00016954(param_1,uVar3,uVar4,param_4);
    return;
  }
  iVar9 = (uVar3 >> 3) + 1;
  iVar7 = *(int *)(iVar1 + iVar9 * 8);
  *(uint *)(iVar1 + 4) = 1 << (uVar3 >> 5 & 0xff) | *(uint *)(iVar1 + 4);
  *(int *)(iVar8 + 8) = iVar7;
  *(int *)(iVar8 + 0xc) = iVar1 + iVar9 * 8 + -8;
  *(int *)(iVar1 + iVar9 * 8) = iVar8;
  *(int *)(iVar7 + 0xc) = iVar8;
LAB_00018b26:
  FUN_00016954(param_1);
  return;
}



// FUN_00018c8c @ 00018c8c (4 bytes, called_by=0, calls=0)

undefined4 FUN_00018c8c(void)

{
  return DAT_00018c90;
}



// FUN_00018c94 @ 00018c94 (76 bytes, called_by=0, calls=0)

undefined4 * FUN_00018c94(int param_1,uint param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x4c);
  if (iVar2 == 0) {
    iVar2 = FUN_000195bc(param_1,4,0x21);
    *(int *)(param_1 + 0x4c) = iVar2;
    if (iVar2 == 0) {
      return (undefined4 *)0x0;
    }
  }
  puVar1 = *(undefined4 **)(iVar2 + param_2 * 4);
  if (puVar1 == (undefined4 *)0x0) {
    iVar2 = 1 << (param_2 & 0xff);
    puVar1 = (undefined4 *)FUN_000195bc(param_1,1,(iVar2 + 5) * 4);
    if (puVar1 == (undefined4 *)0x0) {
      return (undefined4 *)0x0;
    }
    puVar1[1] = param_2;
    puVar1[2] = iVar2;
  }
  else {
    *(undefined4 *)(iVar2 + param_2 * 4) = *puVar1;
  }
  puVar1[3] = 0;
  puVar1[4] = 0;
  return puVar1;
}



// FUN_00018cf4 @ 00018cf4 (152 bytes, called_by=0, calls=0)

undefined4 * FUN_00018cf4(int param_1,undefined4 *param_2,int param_3,uint param_4)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  
  iVar3 = param_2[4];
  iVar1 = 0;
  puVar5 = param_2 + 5;
  do {
    param_4 = param_3 * (*puVar5 & 0xffff) + param_4;
    uVar4 = param_3 * (*puVar5 >> 0x10) + (param_4 >> 0x10);
    iVar1 = iVar1 + 1;
    *puVar5 = (param_4 & 0xffff) + uVar4 * 0x10000;
    param_4 = uVar4 >> 0x10;
    puVar5 = puVar5 + 1;
  } while (iVar1 < iVar3);
  puVar2 = param_2;
  if (param_4 != 0) {
    if (iVar3 < (int)param_2[2]) {
      param_2[iVar3 + 5] = param_4;
      param_2[4] = iVar3 + 1;
    }
    else {
      puVar2 = (undefined4 *)FUN_00018c94(param_1,param_2[1] + 1);
      if (puVar2 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0001957c(DAT_00018d90,0xb5,0,DAT_00018d8c);
      }
      FUN_00000820(puVar2 + 3,param_2 + 3,(param_2[4] + 2) * 4);
      iVar1 = *(int *)(param_1 + 0x4c);
      *param_2 = *(undefined4 *)(iVar1 + param_2[1] * 4);
      *(undefined4 **)(iVar1 + param_2[1] * 4) = param_2;
      puVar2[iVar3 + 5] = param_4;
      puVar2[4] = iVar3 + 1;
    }
  }
  return puVar2;
}



// FUN_000190b4 @ 000190b4 (230 bytes, called_by=0, calls=0)

int FUN_000190b4(int param_1,undefined4 *param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  uint *puVar8;
  uint *puVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint *puVar13;
  
  iVar11 = param_2[4];
  iVar4 = param_2[1];
  iVar5 = (int)param_3 >> 5;
  iVar10 = iVar11 + iVar5 + 1;
  iVar2 = param_2[2];
  if ((int)param_2[2] < iVar10) {
    do {
      iVar6 = iVar2 * 2;
      iVar1 = iVar2 * -2;
      iVar4 = iVar4 + 1;
      iVar2 = iVar6;
    } while (iVar10 != iVar6 && iVar10 + iVar1 < 0 == SBORROW4(iVar10,iVar6));
  }
  iVar2 = FUN_00018c94(param_1,iVar4);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0001957c(DAT_000191a0,0x1d9,0,DAT_0001919c);
  }
  puVar3 = (uint *)(iVar2 + 0x14);
  if (0 < iVar5) {
    puVar9 = puVar3;
    do {
      puVar7 = puVar9 + 1;
      *puVar9 = 0;
      puVar9 = puVar7;
    } while (puVar7 != (uint *)(iVar2 + (iVar5 + 5) * 4));
    puVar3 = puVar3 + iVar5;
  }
  puVar9 = param_2 + 5;
  param_3 = param_3 & 0x1f;
  puVar7 = puVar9 + param_2[4];
  if (param_3 == 0) {
    puVar3 = puVar3 + -1;
    do {
      puVar13 = puVar9 + 1;
      puVar3 = puVar3 + 1;
      *puVar3 = *puVar9;
      puVar9 = puVar13;
    } while (puVar13 < puVar7);
  }
  else {
    uVar12 = 0;
    puVar13 = puVar3;
    do {
      *puVar13 = *puVar9 << param_3 | uVar12;
      puVar8 = puVar9 + 1;
      uVar12 = *puVar9 >> (0x20 - param_3 & 0xff);
      puVar9 = puVar8;
      puVar13 = puVar13 + 1;
    } while (puVar8 < puVar7);
    iVar4 = ((int)puVar7 + (-0x15 - (int)param_2) & 0xfffffffcU) + 4;
    if (puVar7 < (uint *)((int)param_2 + 0x15)) {
      iVar4 = 4;
    }
    *(uint *)((int)puVar3 + iVar4) = uVar12;
    if (uVar12 != 0) goto LAB_00019164;
  }
  iVar10 = iVar11 + iVar5;
LAB_00019164:
  iVar4 = *(int *)(param_1 + 0x4c);
  iVar5 = param_2[1];
  *(int *)(iVar2 + 0x10) = iVar10;
  *param_2 = *(undefined4 *)(iVar4 + iVar5 * 4);
  *(undefined4 **)(iVar4 + iVar5 * 4) = param_2;
  return iVar2;
}



// FUN_000191a4 @ 000191a4 (62 bytes, called_by=0, calls=0)

int FUN_000191a4(int param_1,int param_2)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  uint *puVar4;
  
  iVar3 = *(int *)(param_2 + 0x10);
  iVar1 = *(int *)(param_1 + 0x10) - iVar3;
  if (iVar1 != 0) {
    return iVar1;
  }
  puVar2 = (uint *)(param_1 + 0x14) + iVar3;
  puVar4 = (uint *)(param_2 + 0x14 + iVar3 * 4);
  do {
    puVar2 = puVar2 + -1;
    puVar4 = puVar4 + -1;
    if (*puVar2 != *puVar4) {
      if (*puVar2 < *puVar4) {
        return -1;
      }
      return 1;
    }
  } while ((uint *)(param_1 + 0x14) < puVar2);
  return 0;
}



// FUN_000191e4 @ 000191e4 (346 bytes, called_by=0, calls=0)

int FUN_000191e4(undefined4 param_1,int param_2,int param_3)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint *puVar9;
  int iVar10;
  undefined4 uVar11;
  uint *puVar12;
  uint *puVar13;
  int iVar14;
  uint *puVar15;
  
  iVar6 = *(int *)(param_3 + 0x10);
  iVar3 = param_2;
  if (*(int *)(param_2 + 0x10) == iVar6) {
    puVar4 = (uint *)(param_3 + 0x14 + iVar6 * 4);
    puVar13 = (uint *)(param_2 + 0x14) + iVar6;
    while( true ) {
      puVar13 = puVar13 + -1;
      puVar4 = puVar4 + -1;
      if (*puVar13 != *puVar4) break;
      if (puVar13 <= (uint *)(param_2 + 0x14)) {
        iVar3 = FUN_00018c94(param_1,0);
        if (iVar3 != 0) {
          *(undefined4 *)(iVar3 + 0x10) = 1;
          *(undefined4 *)(iVar3 + 0x14) = 0;
          return iVar3;
        }
                    /* WARNING: Subroutine does not return */
        FUN_0001957c(DAT_00019344,0x232,0,DAT_00019340);
      }
    }
    uVar11 = 0;
    if (*puVar4 <= *puVar13) goto LAB_00019228;
  }
  else if (-1 < *(int *)(param_2 + 0x10) - iVar6) {
    uVar11 = 0;
    goto LAB_00019228;
  }
  uVar11 = 1;
  iVar3 = param_3;
  param_3 = param_2;
LAB_00019228:
  iVar6 = FUN_00018c94(param_1,*(undefined4 *)(iVar3 + 4));
  if (iVar6 != 0) {
    iVar10 = *(int *)(iVar3 + 0x10);
    *(undefined4 *)(iVar6 + 0xc) = uVar11;
    puVar13 = (uint *)(iVar6 + 0x14);
    puVar4 = (uint *)(iVar3 + 0x10);
    puVar1 = (uint *)(param_3 + 0x14) + *(int *)(param_3 + 0x10);
    puVar5 = (uint *)(iVar3 + 0x14 + iVar10 * 4);
    iVar14 = 0;
    puVar12 = puVar13;
    puVar9 = (uint *)(param_3 + 0x14);
    do {
      puVar15 = puVar9 + 1;
      puVar4 = puVar4 + 1;
      uVar7 = ((*puVar4 & 0xffff) - (*puVar9 & 0xffff)) + iVar14;
      iVar14 = ((*puVar4 >> 0x10) - (*puVar9 >> 0x10)) + ((int)uVar7 >> 0x10);
      uVar7 = uVar7 & 0xffff | iVar14 * 0x10000;
      *puVar12 = uVar7;
      iVar14 = iVar14 >> 0x10;
      puVar12 = puVar12 + 1;
      puVar9 = puVar15;
    } while (puVar15 < puVar1);
    uVar2 = (uint)((int)puVar1 + (-0x15 - param_3)) >> 2;
    iVar8 = (uVar2 + 1) * 4;
    if (puVar1 < (uint *)(param_3 + 0x15)) {
      iVar8 = 4;
    }
    puVar9 = (uint *)(iVar3 + 0x14 + iVar8);
    puVar4 = puVar9;
    puVar12 = (uint *)(iVar8 + (int)puVar13);
    if (puVar9 < puVar5) {
      do {
        puVar1 = puVar4 + 1;
        uVar7 = *puVar4;
        iVar3 = (uVar7 >> 0x10) + ((int)(iVar14 + (uVar7 & 0xffff)) >> 0x10);
        uVar7 = uVar7 + iVar14 & 0xffff | iVar3 * 0x10000;
        *puVar12 = uVar7;
        iVar14 = iVar3 >> 0x10;
        puVar4 = puVar1;
        puVar12 = puVar12 + 1;
      } while (puVar1 < puVar5);
      puVar13 = (uint *)(iVar8 + (int)puVar13 + ((int)puVar5 + (-1 - (int)puVar9) & 0xfffffffcU));
    }
    else {
      iVar3 = uVar2 << 2;
      if (puVar1 < (uint *)(param_3 + 0x15)) {
        iVar3 = 0;
      }
      puVar13 = (uint *)((int)puVar13 + iVar3);
    }
    while (uVar7 == 0) {
      puVar13 = puVar13 + -1;
      iVar10 = iVar10 + -1;
      uVar7 = *puVar13;
    }
    *(int *)(iVar6 + 0x10) = iVar10;
    return iVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0001957c(DAT_00019344,0x240,0,DAT_00019340);
}



// FUN_00019474 @ 00019474 (264 bytes, called_by=0, calls=0)

undefined4 FUN_00019474(undefined4 *param_1,int *param_2,int *param_3)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  
  puVar8 = (undefined4 *)*param_3;
  if (param_3[2] != 0) {
    uVar9 = 0;
    uVar6 = param_2[2];
    iVar5 = *param_2;
    uVar7 = 0;
    do {
      if (uVar7 != 0) {
        uVar3 = uVar7;
        if ((uVar6 <= uVar7) && (uVar3 = uVar6, ((int)(short)param_2[3] & 0x480U) != 0)) {
          iVar4 = iVar5 - param_2[4];
          uVar6 = (param_2[5] * 3) / 2;
          uVar3 = iVar4 + 1 + uVar7;
          if (uVar6 < uVar3) {
            uVar6 = uVar3;
          }
          if ((int)(short)param_2[3] << 0x15 < 0) {
            iVar2 = FUN_000161cc(param_1,uVar6);
            if (iVar2 == 0) {
LAB_0001954a:
              uVar1 = *(ushort *)(param_2 + 3);
              *param_1 = 0xc;
              *(ushort *)(param_2 + 3) = uVar1 | 0x40;
              param_3[2] = 0;
              param_3[1] = 0;
              return 0xffffffff;
            }
            FUN_00000820(iVar2,param_2[4],iVar4);
            *(ushort *)(param_2 + 3) = *(ushort *)(param_2 + 3) & 0xfb7f | 0x80;
          }
          else {
            iVar2 = FUN_00019670(param_1,param_2[4]);
            if (iVar2 == 0) {
              FUN_00018a90(param_1,param_2[4]);
              goto LAB_0001954a;
            }
          }
          iVar5 = iVar2 + iVar4;
          param_2[2] = uVar6 - iVar4;
          param_2[5] = uVar6;
          param_2[4] = iVar2;
          *param_2 = iVar5;
          uVar3 = uVar7;
        }
        FUN_000167a4(iVar5,uVar9,uVar3);
        iVar4 = param_3[2];
        uVar6 = param_2[2] - uVar3;
        iVar5 = *param_2 + uVar3;
        param_2[2] = uVar6;
        *param_2 = iVar5;
        param_3[2] = iVar4 - uVar7;
        if (iVar4 - uVar7 == 0) break;
      }
      uVar9 = *puVar8;
      uVar7 = puVar8[1];
      puVar8 = puVar8 + 2;
    } while( true );
  }
  param_3[1] = 0;
  return 0;
}



// FUN_0001957c @ 0001957c (46 bytes, called_by=0, calls=0)

void FUN_0001957c(void)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(*DAT_000195ac + 0xc);
  do {
    FUN_0001961c(uVar1,DAT_000195b4);
    FUN_0000a534();
  } while( true );
}



// FUN_000195bc @ 000195bc (94 bytes, called_by=0, calls=0)

undefined4 * FUN_000195bc(undefined4 param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  bool bVar4;
  
  puVar1 = (undefined4 *)FUN_000161cc(param_1,param_3 * param_2);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (puVar1[-1] & 0xfffffffc) - 4;
    if (0x24 < uVar2) {
      FUN_000168a4(puVar1,0);
      return puVar1;
    }
    puVar3 = puVar1;
    if (0x13 < uVar2) {
      *puVar1 = 0;
      puVar1[1] = 0;
      if (uVar2 < 0x1c) {
        puVar3 = puVar1 + 2;
      }
      else {
        bVar4 = uVar2 != 0x24;
        puVar1[2] = 0;
        puVar1[3] = 0;
        if (bVar4) {
          puVar3 = puVar1 + 4;
        }
        else {
          puVar3 = puVar1 + 6;
        }
        if (!bVar4) {
          puVar1[4] = 0;
        }
        if (!bVar4) {
          puVar1[5] = 0;
        }
      }
    }
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
  }
  return puVar1;
}



// FUN_0001961c @ 0001961c (34 bytes, called_by=0, calls=0)

void FUN_0001961c(undefined4 param_1,undefined4 param_2)

{
  FUN_000199b4(*DAT_00019640,param_1,param_2);
  return;
}



// FUN_00019670 @ 00019670 (830 bytes, called_by=0, calls=0)

int * FUN_00019670(undefined4 *param_1,int *param_2,uint param_3,undefined4 param_4)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int *piVar11;
  int iVar12;
  
  if (param_2 == (int *)0x0) {
    piVar2 = (int *)FUN_000161cc(param_1,param_3,param_3,param_4);
    return piVar2;
  }
  FUN_00016948();
  iVar6 = DAT_0001999c;
  uVar4 = param_2[-1];
  piVar2 = param_2 + -2;
  uVar10 = uVar4 & 0xfffffffc;
  if (param_3 + 0xb < 0x17) {
    uVar9 = 0x10;
  }
  else {
    uVar9 = param_3 + 0xb & 0xfffffff8;
    if ((int)uVar9 < 0) goto LAB_00019750;
  }
  if (uVar9 < param_3) {
LAB_00019750:
    *param_1 = 0xc;
    return (int *)0x0;
  }
  piVar7 = param_2;
  uVar8 = uVar10;
  if ((int)uVar9 <= (int)uVar10) goto LAB_00019764;
  iVar12 = (int)piVar2 + uVar10;
  uVar1 = *(uint *)(iVar12 + 4);
  if (*(int *)(DAT_0001999c + 8) == iVar12) {
    iVar12 = (uVar1 & 0xfffffffc) + uVar10;
    if ((int)(uVar9 + 0x10) <= iVar12) {
      *(uint *)(DAT_0001999c + 8) = (int)piVar2 + uVar9;
      *(uint *)((int)piVar2 + uVar9 + 4) = iVar12 - uVar9 | 1;
      param_2[-1] = param_2[-1] & 1U | uVar9;
      FUN_00016954(param_1);
      return param_2;
    }
    if (-1 < (int)(uVar4 << 0x1f)) {
      piVar11 = (int *)((int)piVar2 - param_2[-2]);
      uVar4 = piVar11[1] & 0xfffffffc;
      iVar12 = (uVar1 & 0xfffffffc) + uVar4 + uVar10;
      if ((int)(uVar9 + 0x10) <= iVar12) {
        iVar5 = piVar11[3];
        piVar2 = piVar11 + 2;
        iVar3 = *piVar2;
        uVar10 = uVar10 - 4;
        *(int *)(iVar3 + 0xc) = iVar5;
        *(int *)(iVar5 + 8) = iVar3;
        if (uVar10 < 0x25) {
          piVar7 = piVar2;
          if (0x13 < uVar10) {
            piVar11[2] = *param_2;
            piVar11[3] = param_2[1];
            if (uVar10 < 0x1c) {
              param_2 = param_2 + 2;
              piVar7 = piVar11 + 4;
            }
            else {
              piVar11[4] = param_2[2];
              piVar11[5] = param_2[3];
              if (uVar10 == 0x24) {
                piVar11[6] = param_2[4];
                piVar11[7] = param_2[5];
                param_2 = param_2 + 6;
                piVar7 = piVar11 + 8;
              }
              else {
                param_2 = param_2 + 4;
                piVar7 = piVar11 + 6;
              }
            }
          }
          *piVar7 = *param_2;
          piVar7[1] = param_2[1];
          piVar7[2] = param_2[2];
        }
        else {
          FUN_000167a4(piVar2,param_2);
          iVar6 = DAT_0001999c;
        }
        *(uint *)(iVar6 + 8) = (int)piVar11 + uVar9;
        *(uint *)((int)piVar11 + uVar9 + 4) = iVar12 - uVar9 | 1;
        piVar11[1] = piVar11[1] & 1U | uVar9;
        FUN_00016954(param_1);
        return piVar2;
      }
LAB_000196ea:
      uVar8 = uVar10 + uVar4;
      if ((int)uVar9 <= (int)uVar8) goto LAB_0001988e;
    }
  }
  else {
    if (-1 < *(int *)((uVar1 & 0xfffffffe) + iVar12 + 4) << 0x1f) {
      uVar8 = uVar10 + (uVar1 & 0xfffffffc);
      if ((int)uVar9 <= (int)uVar8) {
        iVar6 = *(int *)(iVar12 + 8);
        iVar12 = *(int *)(iVar12 + 0xc);
        *(int *)(iVar6 + 0xc) = iVar12;
        *(int *)(iVar12 + 8) = iVar6;
        goto LAB_00019764;
      }
      if ((int)(uVar4 << 0x1f) < 0) goto LAB_000196f4;
      piVar11 = (int *)((int)piVar2 - param_2[-2]);
      uVar4 = piVar11[1] & 0xfffffffc;
      uVar8 = (uVar1 & 0xfffffffc) + uVar4 + uVar10;
      if ((int)uVar8 < (int)uVar9) goto LAB_000196ea;
      iVar6 = *(int *)(iVar12 + 8);
      iVar12 = *(int *)(iVar12 + 0xc);
      *(int *)(iVar6 + 0xc) = iVar12;
      *(int *)(iVar12 + 8) = iVar6;
LAB_0001988e:
      piVar2 = piVar11;
      uVar10 = uVar10 - 4;
      iVar12 = piVar2[3];
      piVar7 = piVar2 + 2;
      iVar6 = *piVar7;
      *(int *)(iVar6 + 0xc) = iVar12;
      *(int *)(iVar12 + 8) = iVar6;
      if (uVar10 < 0x25) {
        piVar11 = piVar7;
        if (0x13 < uVar10) {
          piVar2[2] = *param_2;
          piVar2[3] = param_2[1];
          if (uVar10 < 0x1c) {
            param_2 = param_2 + 2;
            piVar11 = piVar2 + 4;
          }
          else {
            piVar2[4] = param_2[2];
            piVar2[5] = param_2[3];
            if (uVar10 == 0x24) {
              piVar2[6] = param_2[4];
              piVar2[7] = param_2[5];
              param_2 = param_2 + 6;
              piVar11 = piVar2 + 8;
            }
            else {
              param_2 = param_2 + 4;
              piVar11 = piVar2 + 6;
            }
          }
        }
        *piVar11 = *param_2;
        piVar11[1] = param_2[1];
        piVar11[2] = param_2[2];
      }
      else {
        FUN_000167a4(piVar7,param_2);
      }
      goto LAB_00019764;
    }
    if (-1 < (int)(uVar4 << 0x1f)) {
      piVar11 = (int *)((int)piVar2 - param_2[-2]);
      uVar4 = piVar11[1] & 0xfffffffc;
      goto LAB_000196ea;
    }
  }
LAB_000196f4:
  piVar11 = (int *)FUN_000161cc(param_1,param_3);
  if (piVar11 == (int *)0x0) {
    FUN_00016954(param_1);
    return (int *)0x0;
  }
  if ((int *)((param_2[-1] & 0xfffffffeU) + (int)piVar2) != piVar11 + -2) {
    uVar10 = uVar10 - 4;
    if (uVar10 < 0x25) {
      piVar2 = param_2;
      piVar7 = piVar11;
      if (0x13 < uVar10) {
        *piVar11 = *param_2;
        piVar11[1] = param_2[1];
        if (uVar10 < 0x1c) {
          piVar2 = param_2 + 2;
          piVar7 = piVar11 + 2;
        }
        else {
          piVar11[2] = param_2[2];
          piVar11[3] = param_2[3];
          if (uVar10 == 0x24) {
            piVar11[4] = param_2[4];
            piVar11[5] = param_2[5];
            piVar2 = param_2 + 6;
            piVar7 = piVar11 + 6;
          }
          else {
            piVar2 = param_2 + 4;
            piVar7 = piVar11 + 4;
          }
        }
      }
      *piVar7 = *piVar2;
      piVar7[1] = piVar2[1];
      piVar7[2] = piVar2[2];
    }
    else {
      FUN_000167a4(piVar11,param_2);
    }
    FUN_00018a90(param_1,param_2);
    FUN_00016954(param_1);
    return piVar11;
  }
  uVar8 = uVar10 + (piVar11[-1] & 0xfffffffcU);
LAB_00019764:
  if (uVar8 - uVar9 < 0x10) {
    piVar2[1] = piVar2[1] & 1U | uVar8;
    *(uint *)((int)piVar2 + uVar8 + 4) = *(uint *)((int)piVar2 + uVar8 + 4) | 1;
  }
  else {
    piVar2[1] = piVar2[1] & 1U | uVar9;
    *(uint *)((int)piVar2 + uVar9 + 4) = uVar8 - uVar9 | 1;
    *(uint *)((int)piVar2 + uVar8 + 4) = *(uint *)((int)piVar2 + uVar8 + 4) | 1;
    FUN_00018a90(param_1,(int)piVar2 + uVar9 + 8);
  }
  FUN_00016954(param_1);
  return piVar7;
}



// FUN_000199b4 @ 000199b4 (3256 bytes, called_by=0, calls=0)

/* WARNING: Type propagation algorithm not settling */

int FUN_000199b4(int param_1,int param_2,byte *param_3,uint *param_4)

{
  bool bVar1;
  longlong lVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  byte *pbVar11;
  byte *pbVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  byte bVar16;
  int *piVar17;
  uint *puVar18;
  uint uVar19;
  byte *pbVar20;
  byte *pbVar21;
  byte *pbVar22;
  byte *pbVar23;
  uint uVar24;
  byte *pbVar25;
  byte **ppbVar26;
  byte *pbVar27;
  byte *pbVar28;
  bool bVar29;
  byte *local_114;
  byte *local_110;
  int local_10c;
  byte *local_104;
  uint *local_fc;
  int local_f4;
  byte *local_f0;
  undefined4 local_ec;
  int local_e8;
  byte local_dd;
  undefined2 local_dc;
  byte **local_d8;
  byte *local_d4;
  byte *local_d0;
  byte *local_cc [16];
  byte local_8c [98];
  byte abStack_2a [6];
  
  if ((param_1 != 0) && (*(int *)(param_1 + 0x38) == 0)) {
    FUN_0001aa24();
  }
  uVar13 = (uint)*(short *)(param_2 + 0xc);
  if ((-1 < *(int *)(param_2 + 100) << 0x1f) && (-1 < (int)(uVar13 << 0x16))) {
    FUN_0001d952(*(undefined4 *)(param_2 + 0x58));
    uVar13 = (uint)*(short *)(param_2 + 0xc);
  }
  if ((-1 < (int)(uVar13 << 0x1c)) || (*(int *)(param_2 + 0x10) == 0)) {
    iVar8 = FUN_0001a7e8(param_1,param_2);
    if (iVar8 != 0) {
      if ((-1 < *(int *)(param_2 + 100) << 0x1f) &&
         (-1 < (int)((uint)*(ushort *)(param_2 + 0xc) << 0x16))) {
        thunk_FUN_00014e2c(*(undefined4 *)(param_2 + 0x58));
      }
      return -1;
    }
    uVar13 = (uint)*(short *)(param_2 + 0xc);
  }
  if (((uVar13 & 0x1a) == 10) && (-1 < *(short *)(param_2 + 0xe))) {
    if ((-1 < *(int *)(param_2 + 100) << 0x1f) && (-1 < (int)(uVar13 << 0x16))) {
      thunk_FUN_00014e2c(*(undefined4 *)(param_2 + 0x58));
    }
    iVar8 = FUN_0001a74c(param_1,param_2,param_3,param_4);
    return iVar8;
  }
  local_d8 = local_cc;
  local_d4 = (byte *)0x0;
  local_d0 = (byte *)0x0;
  local_ec = 0;
  local_e8 = 0;
  local_f4 = 0;
  ppbVar26 = local_cc;
  local_f0 = (byte *)0x0;
  local_10c = 0;
  local_fc = param_4;
LAB_00019a12:
  bVar16 = *param_3;
joined_r0x00019a18:
  pbVar20 = param_3;
  if (bVar16 != 0) {
    do {
      if (bVar16 == 0x25) {
        pbVar21 = pbVar20 + -(int)param_3;
        if (pbVar21 == (byte *)0x0) goto LAB_00019a36;
        goto LAB_00019c24;
      }
      pbVar20 = pbVar20 + 1;
      bVar16 = *pbVar20;
    } while (bVar16 != 0);
    pbVar21 = pbVar20 + -(int)param_3;
    if (pbVar21 != (byte *)0x0) {
LAB_00019c24:
      local_d4 = (byte *)((int)local_d4 + 1);
      local_d0 = pbVar21 + (int)local_d0;
      *ppbVar26 = param_3;
      *(byte **)((int)ppbVar26 + 4) = pbVar21;
      if ((int)local_d4 < 8) {
        ppbVar26 = (byte **)((int)ppbVar26 + 8);
      }
      else {
        if (local_d0 != (byte *)0x0) {
          iVar8 = FUN_0001ab30(param_1,param_2,&local_d8);
          local_d0 = (byte *)0x0;
          if (iVar8 != 0) goto LAB_00019c62;
        }
        ppbVar26 = local_cc;
        local_d4 = local_d0;
      }
      local_10c = local_10c + (int)pbVar21;
LAB_00019a36:
      if (*pbVar20 != 0) {
        uVar13 = 0;
        bVar7 = false;
        bVar6 = false;
        bVar5 = false;
        bVar4 = false;
        bVar3 = false;
        bVar1 = false;
        bVar29 = false;
        uVar14 = (uint)pbVar20[1];
        local_dd = 0;
        local_110 = (byte *)0x0;
        pbVar21 = (byte *)0xffffffff;
        param_3 = pbVar20 + 1;
LAB_00019a58:
        uVar10 = DAT_0001a71c;
        param_3 = param_3 + 1;
LAB_00019a5c:
        local_104 = pbVar21;
        local_114 = pbVar21;
        uVar19 = uVar13;
        switch(uVar14) {
        case 0x20:
          goto switchD_00019a66_caseD_20;
        default:
          if (uVar14 == 0) goto LAB_00019da2;
          local_104 = (byte *)0x1;
          pbVar20 = local_8c;
          local_8c[0] = (byte)uVar14;
          break;
        case 0x23:
          uVar14 = (uint)*param_3;
          bVar5 = true;
          goto LAB_00019a58;
        case 0x27:
          iVar8 = FUN_00018c8c(param_1);
          local_ec = *(undefined4 *)(iVar8 + 4);
          local_e8 = FUN_00000140(local_ec);
          iVar8 = FUN_00018c8c(param_1);
          local_f0 = *(byte **)(iVar8 + 8);
          if (local_e8 == 0) goto switchD_00019a66_caseD_74;
          uVar14 = (uint)*param_3;
          if ((local_f0 != (byte *)0x0) && (*local_f0 != 0)) {
            bVar6 = true;
          }
          goto LAB_00019a58;
        case 0x2a:
          local_110 = (byte *)*local_fc;
          if ((int)local_110 < 0) {
            local_110 = (byte *)-(int)local_110;
            local_fc = local_fc + 1;
            goto switchD_00019a66_caseD_2d;
          }
          uVar14 = (uint)*param_3;
          local_fc = local_fc + 1;
          goto LAB_00019a58;
        case 0x2b:
          uVar14 = (uint)*param_3;
          local_dd = 0x2b;
          goto LAB_00019a58;
        case 0x2d:
switchD_00019a66_caseD_2d:
          uVar14 = (uint)*param_3;
          uVar13 = uVar13 | 4;
          goto LAB_00019a58;
        case 0x2e:
          uVar14 = (uint)*param_3;
          if (uVar14 == 0x2a) {
            uVar14 = (uint)param_3[1];
            pbVar21 = (byte *)(*local_fc | (int)*local_fc >> 0x1f);
            param_3 = param_3 + 1;
            local_fc = local_fc + 1;
            goto LAB_00019a58;
          }
          pbVar21 = (byte *)0x0;
          param_3 = param_3 + 1;
          while (uVar14 - 0x30 < 10) {
            pbVar21 = (byte *)((uVar14 - 0x30) + (int)pbVar21 * 10);
            uVar14 = (uint)*param_3;
            param_3 = param_3 + 1;
          }
          goto LAB_00019a5c;
        case 0x30:
          uVar14 = (uint)*param_3;
          uVar13 = uVar13 | 0x80;
          goto LAB_00019a58;
        case 0x31:
        case 0x32:
        case 0x33:
        case 0x34:
        case 0x35:
        case 0x36:
        case 0x37:
        case 0x38:
        case 0x39:
          goto switchD_00019a66_caseD_31;
        case 0x43:
        case 99:
          local_8c[0] = (byte)*local_fc;
          local_104 = (byte *)0x1;
          pbVar20 = local_8c;
          local_fc = local_fc + 1;
          break;
        case 0x44:
          bVar1 = true;
        case 100:
        case 0x69:
          if (bVar29) {
            puVar18 = (uint *)((int)local_fc + 7U & 0xfffffff8);
            uVar9 = puVar18[1];
            uVar14 = *puVar18;
            local_fc = puVar18 + 2;
LAB_00019b94:
            if (-1 < (int)uVar9) goto LAB_00019b9a;
LAB_00019e50:
            bVar29 = uVar14 != 0;
            uVar14 = -uVar14;
            uVar9 = -uVar9 - (uint)bVar29;
            local_dd = 0x2d;
            if (pbVar21 != (byte *)0xffffffff) {
              uVar19 = uVar13 & 0xffffff7f;
            }
LAB_00019e66:
            uVar13 = uVar19;
            bVar7 = false;
            if (uVar9 != 0 || uVar9 < (9 < uVar14)) {
              uVar19 = 0;
              pbVar20 = abStack_2a + 2;
              goto LAB_0001a45c;
            }
            abStack_2a[1] = (char)uVar14 + '0';
          }
          else {
            puVar18 = local_fc + 1;
            uVar14 = *local_fc;
            local_fc = puVar18;
            if (!bVar1) {
              if (bVar3) {
                uVar9 = (int)(uVar14 << 0x10) >> 0x1f;
                uVar14 = (uint)(short)uVar14;
              }
              else {
                if (!bVar4) goto LAB_00019e46;
                uVar9 = (int)(uVar14 << 0x18) >> 0x1f;
                uVar14 = (uint)(char)uVar14;
              }
              goto LAB_00019b94;
            }
LAB_00019e46:
            uVar9 = (int)uVar14 >> 0x1f;
            if ((int)uVar9 < 0) goto LAB_00019e50;
LAB_00019b9a:
            if (pbVar21 == (byte *)0xffffffff) goto LAB_00019e66;
            uVar13 = uVar13 & 0xffffff7f;
            bVar7 = false;
            uVar19 = uVar13;
            if (uVar14 != 0 || uVar9 != 0) goto LAB_00019e66;
            if (pbVar21 == (byte *)0x0) {
LAB_00019bb6:
              pbVar20 = abStack_2a + 2;
              goto LAB_00019ee6;
            }
LAB_0001a6ae:
            abStack_2a[1] = '0';
          }
          if ((int)pbVar21 < 1) {
            local_114 = (byte *)0x1;
          }
          local_104 = (byte *)0x1;
          pbVar20 = abStack_2a + 1;
          goto LAB_00019ee6;
        case 0x4f:
          bVar1 = true;
          goto LAB_00019efc;
        case 0x53:
        case 0x73:
          puVar18 = local_fc + 1;
          pbVar20 = (byte *)*local_fc;
          local_dd = 0;
          local_fc = puVar18;
          if (pbVar20 != (byte *)0x0) {
            if (pbVar21 == (byte *)0xffffffff) {
              local_104 = (byte *)FUN_00000140(pbVar20);
              pbVar21 = (byte *)0x0;
              local_114 = (byte *)((uint)local_104 & ~((int)local_104 >> 0x1f));
            }
            else {
              iVar8 = FUN_00000500(pbVar20,0,pbVar21);
              if (iVar8 == 0) {
                pbVar21 = (byte *)0x0;
              }
              else {
                local_104 = (byte *)(iVar8 - (int)pbVar20);
                pbVar21 = (byte *)0x0;
                local_114 = (byte *)((uint)local_104 & ~((int)local_104 >> 0x1f));
              }
            }
            goto LAB_00019ee6;
          }
          pbVar20 = DAT_0001a728;
          if ((byte *)0x5 < pbVar21) {
            local_104 = (byte *)0x6;
          }
          break;
        case 0x55:
          bVar1 = true;
          goto LAB_00019e90;
        case 0x58:
          local_f4 = DAT_0001a720;
          if (bVar29) goto LAB_0001a55a;
LAB_0001a596:
          uVar10 = (uint)bVar29 << 5;
          puVar18 = local_fc + 1;
          uVar19 = *local_fc;
          local_fc = puVar18;
          if (!bVar1) {
            if (bVar3) {
              uVar19 = uVar19 & 0xffff;
              uVar10 = 0;
            }
            else {
              uVar10 = (uint)bVar4 << 9;
              if (bVar4 != 0) {
                uVar19 = uVar19 & 0xff;
                uVar10 = 0;
              }
            }
          }
          goto LAB_0001a56c;
        case 0x68:
          uVar14 = (uint)*param_3;
          if (uVar14 == 0x68) {
            uVar14 = (uint)param_3[1];
            bVar4 = true;
            param_3 = param_3 + 1;
          }
          else {
            bVar3 = true;
          }
          goto LAB_00019a58;
        case 0x6a:
        case 0x71:
          uVar14 = (uint)*param_3;
          bVar29 = true;
          goto LAB_00019a58;
        case 0x6c:
          uVar14 = (uint)*param_3;
          if (uVar14 == 0x6c) {
            uVar14 = (uint)param_3[1];
            bVar29 = true;
            param_3 = param_3 + 1;
          }
          else {
            bVar1 = true;
          }
          goto LAB_00019a58;
        case 0x6e:
          if (bVar29) {
            piVar17 = (int *)*local_fc;
            *piVar17 = local_10c;
            piVar17[1] = local_10c >> 0x1f;
          }
          else if (bVar1) {
LAB_0001a654:
            *(int *)*local_fc = local_10c;
          }
          else if (bVar3) {
            *(short *)*local_fc = (short)local_10c;
          }
          else {
            if (!bVar4) goto LAB_0001a654;
            *(char *)*local_fc = (char)local_10c;
          }
          local_fc = local_fc + 1;
          goto LAB_00019a12;
        case 0x6f:
LAB_00019efc:
          if (bVar29 == false) {
            puVar18 = local_fc + 1;
            uVar19 = *local_fc;
            uVar10 = 0;
            local_fc = puVar18;
            if (!bVar1) {
              if (bVar3) {
                uVar19 = uVar19 & 0xffff;
                uVar10 = 0;
              }
              else {
                uVar10 = (uint)bVar4 << 9;
                if (bVar4 != 0) {
                  uVar19 = uVar19 & 0xff;
                  uVar10 = 0;
                }
              }
            }
          }
          else {
            puVar18 = (uint *)((int)local_fc + 7U & 0xfffffff8);
            uVar10 = puVar18[1];
            uVar19 = *puVar18;
            local_fc = puVar18 + 2;
          }
          iVar8 = 0;
          bVar7 = false;
          if (pbVar21 == (byte *)0xffffffff) {
LAB_00019f4c:
            local_dd = 0;
            pbVar20 = abStack_2a + 2;
            do {
              pbVar11 = pbVar20;
              uVar14 = uVar19 & 7;
              uVar19 = uVar19 >> 3 | uVar10 << 0x1d;
              uVar10 = uVar10 >> 3;
              iVar8 = uVar14 + 0x30;
              pbVar20 = pbVar11 + -1;
              *pbVar20 = (byte)iVar8;
            } while (uVar19 != 0 || uVar10 != 0);
            if ((!bVar5) || (iVar8 == 0x30)) goto LAB_0001a320;
            pbVar20 = pbVar11 + -2;
            pbVar11[-2] = 0x30;
            local_104 = abStack_2a + (2 - (int)pbVar20);
            local_114 = local_104;
            if ((int)local_104 < (int)pbVar21) {
              local_114 = pbVar21;
            }
          }
          else {
            uVar13 = uVar13 & 0xfffffb7f;
            bVar7 = false;
            if (uVar19 != 0 || uVar10 != 0) goto LAB_00019f4c;
joined_r0x00019ec8:
            if (pbVar21 != (byte *)0x0) {
              local_dd = 0;
              if (iVar8 != 1) {
                uVar19 = 0;
                uVar10 = 0;
                uVar14 = uVar13;
                if (iVar8 != 2) goto LAB_00019f4c;
LAB_0001a304:
                uVar13 = uVar14;
                local_dd = 0;
                pbVar20 = abStack_2a + 2;
                do {
                  pbVar20 = pbVar20 + -1;
                  *pbVar20 = *(byte *)(local_f4 + (uVar19 & 0xf));
                  uVar19 = uVar19 >> 4 | uVar10 << 0x1c;
                  uVar10 = uVar10 >> 4;
                } while (uVar19 != 0 || uVar10 != 0);
                goto LAB_0001a320;
              }
              goto LAB_0001a6ae;
            }
            local_dd = 0;
            if (iVar8 != 0) goto LAB_00019bb6;
            local_104 = (byte *)(uint)bVar5;
            if (local_104 == (byte *)0x0) {
              pbVar20 = abStack_2a + 2;
            }
            else {
              abStack_2a[1] = '0';
              pbVar20 = abStack_2a + 1;
              local_114 = local_104;
            }
          }
          goto LAB_00019ee6;
        case 0x70:
          uVar19 = *local_fc;
          local_dc = 0x7830;
          local_f4 = DAT_0001a34c;
          bVar7 = true;
          uVar10 = 0;
          local_fc = local_fc + 1;
          goto LAB_0001a078;
        case 0x74:
        case 0x7a:
switchD_00019a66_caseD_74:
          uVar14 = (uint)*param_3;
          goto LAB_00019a58;
        case 0x75:
LAB_00019e90:
          if (bVar29 == false) {
            puVar18 = local_fc + 1;
            uVar14 = *local_fc;
            uVar9 = 0;
            local_fc = puVar18;
            if (!bVar1) {
              if (bVar3) {
                uVar14 = uVar14 & 0xffff;
                uVar9 = 0;
              }
              else {
                uVar9 = (uint)bVar4 << 9;
                if (bVar4 != 0) {
                  uVar14 = uVar14 & 0xff;
                  uVar9 = 0;
                }
              }
            }
          }
          else {
            puVar18 = (uint *)((int)local_fc + 7U & 0xfffffff8);
            uVar9 = puVar18[1];
            uVar14 = *puVar18;
            local_fc = puVar18 + 2;
          }
          local_dd = 0;
          if (pbVar21 != (byte *)0xffffffff) {
            bVar7 = false;
            uVar19 = uVar13 & 0xffffff7f;
            if (uVar14 != 0 || uVar9 != 0) goto LAB_00019e66;
            iVar8 = 1;
LAB_00019ec4:
            uVar13 = uVar13 & 0xffffff7f;
            goto joined_r0x00019ec8;
          }
          goto LAB_00019e66;
        case 0x78:
          local_f4 = DAT_0001a724;
          if (!bVar29) goto LAB_0001a596;
LAB_0001a55a:
          puVar18 = (uint *)((int)local_fc + 7U & 0xfffffff8);
          uVar10 = puVar18[1];
          uVar19 = *puVar18;
          local_fc = puVar18 + 2;
LAB_0001a56c:
          if ((bVar5) && (uVar19 != 0 || uVar10 != 0)) {
            bVar7 = true;
            local_dc = CONCAT11((byte)uVar14,0x30);
          }
LAB_0001a078:
          uVar14 = uVar13;
          if ((pbVar21 != (byte *)0xffffffff) &&
             (uVar14 = uVar13 & 0xffffff7f, uVar19 == 0 && uVar10 == 0)) {
            iVar8 = 2;
            goto LAB_00019ec4;
          }
          goto LAB_0001a304;
        }
        local_dd = 0;
        pbVar21 = (byte *)0x0;
        local_114 = local_104;
        goto LAB_00019c9a;
      }
    }
  }
LAB_00019da2:
  if (local_d0 != (byte *)0x0) {
    FUN_0001ab30(param_1,param_2,&local_d8);
    local_d0 = (byte *)0x0;
  }
  goto LAB_00019c62;
  while (bVar29 = uVar9 != 0, bVar1 = uVar9 < (9 < uVar14), uVar9 = uVar24, uVar14 = uVar15,
        bVar29 || bVar1) {
LAB_0001a45c:
    uVar15 = uVar14 + uVar9 + (uint)CARRY4(uVar14,uVar9);
    uVar24 = (uint)((ulonglong)uVar10 * (ulonglong)uVar15 >> 0x20);
    uVar15 = uVar15 - ((uVar24 & 0xfffffffc) + (uVar24 >> 2));
    lVar2 = (ulonglong)(uVar14 - uVar15) * (ulonglong)uVar10;
    uVar24 = uVar10 * (uVar9 - (uVar14 < uVar15)) + (uVar14 - uVar15) * -0x33333334 +
             (int)((ulonglong)lVar2 >> 0x20);
    pbVar20[-1] = ((byte)lVar2 & 1) * '\x05' + (char)uVar15 + 0x30;
    uVar15 = (uint)lVar2 >> 1 | uVar24 * -0x80000000;
    uVar19 = uVar19 + 1;
    pbVar20 = pbVar20 + -1;
    uVar24 = uVar24 >> 1;
    if (((bVar6) && (*local_f0 == uVar19)) && (uVar19 != 0xff)) {
      if (uVar9 == 0 && (9 < uVar14) <= uVar9) break;
      pbVar20 = pbVar20 + -local_e8;
      FUN_00016b8c(pbVar20,local_ec,local_e8);
      if (local_f0[1] != 0) {
        local_f0 = local_f0 + 1;
      }
      uVar19 = 0;
      uVar9 = uVar24;
      uVar14 = uVar15;
      goto LAB_0001a45c;
    }
  }
LAB_0001a320:
  local_104 = abStack_2a + (2 - (int)pbVar20);
  local_114 = local_104;
  if ((int)local_104 < (int)pbVar21) {
    local_114 = pbVar21;
  }
LAB_00019ee6:
  if (local_dd != 0) {
    local_114 = local_114 + 1;
  }
LAB_00019c9a:
  pbVar11 = DAT_0001a354;
  if (bVar7) {
    local_114 = local_114 + 2;
  }
  pbVar27 = local_d4 + 1;
  if ((uVar13 == 0) && (pbVar22 = local_110 + -(int)local_114, 0 < (int)pbVar22)) {
    pbVar12 = DAT_0001a72c;
    if (0x10 < (int)pbVar22) {
      while( true ) {
        local_d0 = local_d0 + 0x10;
        *ppbVar26 = pbVar11;
        ppbVar26[1] = (byte *)0x10;
        if ((int)pbVar27 < 8) {
          pbVar28 = local_d4 + 2;
          ppbVar26 = ppbVar26 + 2;
          local_d4 = pbVar27;
        }
        else {
          if ((local_d0 != (byte *)0x0) &&
             (local_d4 = pbVar27, iVar8 = FUN_0001ab30(param_1,param_2,&local_d8), iVar8 != 0)) {
            local_d0 = (byte *)0x0;
            goto LAB_00019c62;
          }
          local_d0 = (byte *)0x0;
          pbVar28 = (byte *)0x1;
          ppbVar26 = local_cc;
          local_d4 = local_d0;
        }
        if ((int)(pbVar22 + -0x10) < 0x11) break;
        pbVar22 = pbVar22 + -0x10;
        pbVar27 = local_d4 + 1;
      }
      pbVar22 = pbVar22 + -0x10;
      pbVar12 = pbVar11;
      pbVar27 = pbVar28;
    }
    local_d4 = pbVar27;
    local_d0 = local_d0 + (int)pbVar22;
    *ppbVar26 = pbVar12;
    ppbVar26[1] = pbVar22;
    if ((int)local_d4 < 8) {
      ppbVar26 = ppbVar26 + 2;
      pbVar27 = local_d4 + 1;
      goto LAB_00019cc4;
    }
    if (local_d0 == (byte *)0x0) {
      local_d0 = (byte *)(uint)local_dd;
      if (local_d0 != (byte *)0x0) goto LAB_0001a0ae;
LAB_0001a5b0:
      pbVar27 = (byte *)0x1;
      ppbVar26 = local_cc;
      local_d4 = local_d0;
    }
    else {
      iVar8 = FUN_0001ab30(param_1,param_2,&local_d8);
      local_d0 = (byte *)0x0;
      if (iVar8 != 0) goto LAB_00019c62;
      if (local_dd == 0) {
        local_d0 = (byte *)0x0;
        goto LAB_0001a5b0;
      }
LAB_0001a0ae:
      local_d4 = (byte *)0x1;
      local_cc[0] = &local_dd;
      local_cc[1] = (byte *)0x1;
      ppbVar26 = local_cc;
      local_d0 = (byte *)0x1;
LAB_0001a0bc:
      ppbVar26 = ppbVar26 + 2;
      pbVar27 = local_d4 + 1;
    }
LAB_0001a0c4:
    pbVar11 = pbVar27;
    if (!bVar7) goto LAB_00019d1c;
    local_d0 = local_d0 + 2;
    *ppbVar26 = (byte *)&local_dc;
    ppbVar26[1] = (byte *)0x2;
    if ((int)pbVar27 < 8) goto LAB_00019d14;
    if (local_d0 != (byte *)0x0) {
      local_d4 = pbVar27;
      iVar8 = FUN_0001ab30(param_1,param_2,&local_d8);
      local_d0 = (byte *)0x0;
      if (iVar8 != 0) goto LAB_00019c62;
    }
LAB_0001a0ea:
    pbVar22 = (byte *)0x0;
    pbVar27 = (byte *)0x1;
    pbVar11 = (byte *)0x1;
    local_d0 = (byte *)0x0;
    ppbVar26 = local_cc;
    pbVar12 = pbVar22;
    local_d4 = pbVar22;
    if (uVar13 == 0x80) goto LAB_0001a0fe;
LAB_00019d24:
    pbVar21 = pbVar21 + -(int)local_104;
    pbVar23 = DAT_0001a350;
    if ((int)pbVar21 < 1) goto LAB_00019d30;
LAB_0001a192:
    pbVar11 = pbVar22;
    if (0x10 < (int)pbVar21) {
      do {
        while( true ) {
          pbVar12 = pbVar21;
          pbVar21 = local_d4 + 1;
          pbVar22 = pbVar22 + 0x10;
          *ppbVar26 = pbVar23;
          ppbVar26[1] = (byte *)0x10;
          if ((int)pbVar21 < 8) break;
          if (pbVar22 != (byte *)0x0) {
            local_d4 = pbVar21;
            local_d0 = pbVar22;
            iVar8 = FUN_0001ab30(param_1,param_2,&local_d8);
            local_d0 = (byte *)0x0;
            if (iVar8 != 0) goto LAB_00019c62;
          }
          pbVar22 = (byte *)0x0;
          pbVar27 = (byte *)0x1;
          ppbVar26 = local_cc;
          pbVar11 = (byte *)0x0;
          local_d4 = pbVar22;
          pbVar21 = pbVar12 + -0x10;
          if ((int)(pbVar12 + -0x10) < 0x11) goto LAB_0001a1e4;
        }
        pbVar27 = local_d4 + 2;
        ppbVar26 = ppbVar26 + 2;
        pbVar11 = pbVar22;
        local_d4 = pbVar21;
        pbVar21 = pbVar12 + -0x10;
      } while (0x10 < (int)(pbVar12 + -0x10));
LAB_0001a1e4:
      pbVar21 = pbVar12 + -0x10;
    }
    pbVar22 = pbVar11 + (int)pbVar21;
    *ppbVar26 = pbVar23;
    ppbVar26[1] = pbVar21;
    if ((int)pbVar27 < 8) {
      ppbVar26 = ppbVar26 + 2;
      pbVar27 = pbVar27 + 1;
      goto LAB_00019d30;
    }
    if (pbVar22 != (byte *)0x0) {
      local_d4 = pbVar27;
      local_d0 = pbVar22;
      iVar8 = FUN_0001ab30(param_1,param_2,&local_d8);
      local_d0 = (byte *)0x0;
      if (iVar8 != 0) goto LAB_00019c62;
    }
LAB_0001a21e:
    local_cc[1] = local_104;
    local_d4 = (byte *)0x1;
    ppbVar26 = local_cc;
    local_cc[0] = pbVar20;
LAB_0001a22e:
    local_d0 = local_104;
    if ((uVar13 & 4) != 0) {
      ppbVar26 = ppbVar26 + 2;
      pbVar20 = DAT_0001a354;
      pbVar21 = DAT_0001a72c;
      pbVar11 = local_d4;
joined_r0x0001a242:
      pbVar27 = local_110 + -(int)local_114;
      DAT_0001a354 = pbVar20;
      DAT_0001a72c = pbVar21;
      local_d4 = pbVar11;
      if (0 < (int)pbVar27) {
        pbVar22 = local_d0;
        if ((int)pbVar27 < 0x11) {
          pbVar12 = pbVar11 + 1;
        }
        else {
          do {
            while( true ) {
              local_d4 = pbVar11 + 1;
              local_d0 = pbVar22 + 0x10;
              *ppbVar26 = pbVar20;
              ppbVar26[1] = (byte *)0x10;
              pbVar21 = pbVar20;
              if ((int)local_d4 < 8) break;
              if (local_d0 != (byte *)0x0) {
                iVar8 = FUN_0001ab30(param_1,param_2,&local_d8);
                local_d0 = (byte *)0x0;
                if (iVar8 != 0) goto LAB_00019c62;
              }
              pbVar27 = pbVar27 + -0x10;
              pbVar12 = (byte *)0x1;
              local_d0 = (byte *)0x0;
              ppbVar26 = local_cc;
              pbVar22 = (byte *)0x0;
              pbVar11 = (byte *)0x0;
              if ((int)pbVar27 < 0x11) goto LAB_0001a298;
            }
            pbVar27 = pbVar27 + -0x10;
            pbVar12 = pbVar11 + 2;
            ppbVar26 = ppbVar26 + 2;
            pbVar22 = local_d0;
            pbVar11 = local_d4;
          } while (0x10 < (int)pbVar27);
        }
LAB_0001a298:
        local_d0 = local_d0 + (int)pbVar27;
        *ppbVar26 = pbVar21;
        ppbVar26[1] = pbVar27;
        local_d4 = pbVar12;
        if (7 < (int)pbVar12) {
          if (local_d0 != (byte *)0x0) {
            iVar8 = FUN_0001ab30(param_1,param_2,&local_d8);
            local_d0 = (byte *)0x0;
            if (iVar8 != 0) goto LAB_00019c62;
          }
          goto LAB_0001a2ae;
        }
      }
    }
    if ((int)local_110 < (int)local_114) {
      local_110 = local_114;
    }
    local_10c = local_10c + (int)local_110;
    if (local_d0 != (byte *)0x0) {
      iVar8 = FUN_0001ab30(param_1,param_2,&local_d8);
      local_d0 = (byte *)0x0;
      if (iVar8 != 0) {
LAB_00019c62:
        local_d4 = (byte *)0x0;
        iVar8 = (int)*(short *)(param_2 + 0xc);
        if ((-1 < *(int *)(param_2 + 100) << 0x1f) && (-1 < iVar8 << 0x16)) {
          thunk_FUN_00014e2c(*(undefined4 *)(param_2 + 0x58));
          iVar8 = (int)*(short *)(param_2 + 0xc);
        }
        if (-1 < iVar8 << 0x19) {
          return local_10c;
        }
        return -1;
      }
    }
  }
  else {
LAB_00019cc4:
    if (local_dd == 0) goto LAB_0001a0c4;
    local_d0 = local_d0 + 1;
    *ppbVar26 = &local_dd;
    ppbVar26[1] = (byte *)0x1;
    local_d4 = pbVar27;
    if ((int)pbVar27 < 8) goto LAB_0001a0bc;
    if (local_d0 != (byte *)0x0) {
      iVar8 = FUN_0001ab30(param_1,param_2,&local_d8);
      local_d0 = (byte *)0x0;
      if (iVar8 != 0) goto LAB_00019c62;
    }
    if (!bVar7) goto LAB_0001a0ea;
    local_d0 = (byte *)0x2;
    local_cc[0] = (byte *)&local_dc;
    local_cc[1] = (byte *)0x2;
    pbVar27 = (byte *)0x1;
    ppbVar26 = local_cc;
LAB_00019d14:
    ppbVar26 = ppbVar26 + 2;
    pbVar11 = pbVar27 + 1;
    local_d4 = pbVar27;
LAB_00019d1c:
    pbVar22 = local_d0;
    pbVar27 = pbVar11;
    pbVar12 = local_d4;
    if (uVar13 != 0x80) goto LAB_00019d24;
LAB_0001a0fe:
    pbVar28 = DAT_0001a350;
    pbVar25 = local_110 + -(int)local_114;
    pbVar22 = local_d0;
    pbVar27 = pbVar11;
    local_d4 = pbVar12;
    if ((int)pbVar25 < 1) goto LAB_00019d24;
    pbVar23 = DAT_0001a730;
    local_d4 = pbVar11;
    if (0x10 < (int)pbVar25) {
      do {
        while( true ) {
          pbVar11 = pbVar25;
          local_d4 = pbVar12 + 1;
          local_d0 = local_d0 + 0x10;
          *ppbVar26 = pbVar28;
          ppbVar26[1] = (byte *)0x10;
          if ((int)local_d4 < 8) break;
          if (local_d0 != (byte *)0x0) {
            iVar8 = FUN_0001ab30(param_1,param_2,&local_d8);
            local_d0 = (byte *)0x0;
            if (iVar8 != 0) goto LAB_00019c62;
          }
          local_d0 = (byte *)0x0;
          pbVar22 = (byte *)0x1;
          ppbVar26 = local_cc;
          pbVar27 = (byte *)0x0;
          pbVar12 = local_d0;
          pbVar25 = pbVar11 + -0x10;
          if ((int)(pbVar11 + -0x10) < 0x11) goto LAB_0001a160;
        }
        pbVar22 = pbVar12 + 2;
        ppbVar26 = ppbVar26 + 2;
        pbVar27 = local_d0;
        pbVar12 = local_d4;
        pbVar25 = pbVar11 + -0x10;
      } while (0x10 < (int)(pbVar11 + -0x10));
LAB_0001a160:
      pbVar25 = pbVar11 + -0x10;
      local_d0 = pbVar27;
      pbVar23 = pbVar28;
      local_d4 = pbVar22;
    }
    pbVar22 = local_d0 + (int)pbVar25;
    *ppbVar26 = pbVar23;
    ppbVar26[1] = pbVar25;
    if (7 < (int)local_d4) {
      if (pbVar22 != (byte *)0x0) {
        local_d0 = pbVar22;
        iVar8 = FUN_0001ab30(param_1,param_2,&local_d8);
        local_d0 = (byte *)0x0;
        if (iVar8 != 0) goto LAB_00019c62;
      }
      pbVar21 = pbVar21 + -(int)local_104;
      if (0 < (int)pbVar21) {
        pbVar22 = (byte *)0x0;
        pbVar27 = (byte *)0x1;
        ppbVar26 = local_cc;
        local_d4 = pbVar22;
        goto LAB_0001a192;
      }
      goto LAB_0001a21e;
    }
    pbVar21 = pbVar21 + -(int)local_104;
    ppbVar26 = ppbVar26 + 2;
    pbVar27 = local_d4 + 1;
    pbVar23 = DAT_0001a350;
    if (0 < (int)pbVar21) goto LAB_0001a192;
LAB_00019d30:
    *ppbVar26 = pbVar20;
    local_d0 = pbVar22 + (int)local_104;
    ppbVar26[1] = local_104;
    local_104 = local_d0;
    local_d4 = pbVar27;
    if ((int)pbVar27 < 8) goto LAB_0001a22e;
    if (local_d0 != (byte *)0x0) {
      iVar8 = FUN_0001ab30(param_1,param_2,&local_d8);
      local_d0 = (byte *)0x0;
      if (iVar8 != 0) goto LAB_00019c62;
    }
    if ((uVar13 & 4) != 0) {
      ppbVar26 = local_cc;
      pbVar20 = DAT_0001a354;
      pbVar21 = DAT_0001a72c;
      pbVar11 = local_d0;
      goto joined_r0x0001a242;
    }
LAB_0001a2ae:
    if ((int)local_110 < (int)local_114) {
      local_110 = local_114;
    }
    local_10c = local_10c + (int)local_110;
  }
  local_d4 = (byte *)0x0;
  bVar16 = *param_3;
  ppbVar26 = local_cc;
  goto joined_r0x00019a18;
switchD_00019a66_caseD_31:
  uVar19 = uVar14 - 0x30;
  local_110 = (byte *)0x0;
  pbVar20 = param_3;
  do {
    param_3 = pbVar20 + 1;
    uVar14 = (uint)*pbVar20;
    local_110 = (byte *)(uVar19 + (int)local_110 * 10);
    uVar19 = uVar14 - 0x30;
    pbVar20 = param_3;
  } while (uVar19 < 10);
  goto LAB_00019a5c;
switchD_00019a66_caseD_20:
  uVar14 = (uint)*param_3;
  if (local_dd == 0) {
    local_dd = 0x20;
  }
  goto LAB_00019a58;
}



// FUN_0001a74c @ 0001a74c (128 bytes, called_by=0, calls=0)

int FUN_0001a74c(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined1 *local_480 [2];
  undefined4 local_478;
  ushort local_474;
  undefined2 local_472;
  undefined1 *local_470;
  undefined4 local_46c;
  undefined4 local_468;
  undefined4 local_464;
  undefined4 local_45c;
  undefined4 local_428 [3];
  undefined4 local_41c;
  undefined1 auStack_418 [1028];
  
  local_474 = *(ushort *)(param_2 + 0xc) & 0xfffd;
  local_41c = *(undefined4 *)(param_2 + 100);
  local_472 = *(undefined2 *)(param_2 + 0xe);
  local_464 = *(undefined4 *)(param_2 + 0x1c);
  local_45c = *(undefined4 *)(param_2 + 0x24);
  local_480[0] = auStack_418;
  local_478 = 0x400;
  local_46c = 0x400;
  local_468 = 0;
  local_470 = local_480[0];
  FUN_0001d93a(local_428);
  iVar1 = FUN_000199b4(param_1,local_480,param_3,param_4);
  if ((-1 < iVar1) && (iVar2 = FUN_0001a9bc(param_1,local_480), iVar2 != 0)) {
    iVar1 = -1;
  }
  if ((int)((uint)local_474 << 0x19) < 0) {
    *(ushort *)(param_2 + 0xc) = *(ushort *)(param_2 + 0xc) | 0x40;
  }
  thunk_FUN_000161bc(local_428[0]);
  return iVar1;
}



// FUN_0001a7e8 @ 0001a7e8 (192 bytes, called_by=0, calls=0)

undefined4 FUN_0001a7e8(undefined4 *param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = *DAT_0001a8a8;
  if ((iVar3 == 0) || (*(int *)(iVar3 + 0x38) != 0)) {
    uVar4 = (uint)(short)param_2[3];
    if (-1 < (int)(uVar4 << 0x1c)) goto LAB_0001a848;
LAB_0001a800:
    iVar3 = param_2[4];
  }
  else {
    FUN_0001aa24(iVar3);
    uVar4 = (uint)(short)param_2[3];
    if ((int)(uVar4 << 0x1c) < 0) goto LAB_0001a800;
LAB_0001a848:
    if (-1 < (int)(uVar4 << 0x1b)) {
      *param_1 = 9;
      uVar1 = (ushort)uVar4;
      goto LAB_0001a832;
    }
    if ((int)(uVar4 << 0x1d) < 0) {
      if ((int *)param_2[0xc] != (int *)0x0) {
        if ((int *)param_2[0xc] != param_2 + 0x10) {
          FUN_00018a90(param_1);
          uVar4 = (uint)(short)param_2[3];
        }
        param_2[0xc] = 0;
      }
      iVar3 = param_2[4];
      *param_2 = iVar3;
      param_2[1] = 0;
      uVar4 = uVar4 & 0xffffffdb;
    }
    else {
      iVar3 = param_2[4];
    }
    uVar4 = uVar4 | 8;
    *(short *)(param_2 + 3) = (short)uVar4;
  }
  if ((iVar3 == 0) && ((uVar4 & 0x280) != 0x200)) {
    FUN_0001ae70(param_1,param_2,0,uVar4,param_4);
    uVar4 = (uint)(short)param_2[3];
    iVar3 = param_2[4];
  }
  if ((uVar4 & 1) == 0) {
    iVar2 = 0;
    if (-1 < (int)(uVar4 << 0x1e)) {
      iVar2 = param_2[5];
    }
    param_2[2] = iVar2;
  }
  else {
    param_2[2] = 0;
    param_2[6] = -param_2[5];
  }
  if ((iVar3 != 0) || (-1 < (int)(uVar4 << 0x18))) {
    return 0;
  }
  uVar1 = (ushort)uVar4;
LAB_0001a832:
  *(ushort *)(param_2 + 3) = uVar1 | 0x40;
  return 0xffffffff;
}



// FUN_0001a8ac @ 0001a8ac (272 bytes, called_by=0, calls=0)

undefined4 FUN_0001a8ac(int *param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  ushort uVar4;
  uint uVar5;
  code *pcVar6;
  int iVar7;
  bool bVar8;
  
  uVar5 = (uint)(short)param_2[3];
  if ((int)(uVar5 << 0x1c) < 0) {
    iVar2 = param_2[4];
    if (iVar2 == 0) {
      return 0;
    }
    iVar7 = uVar5 << 0x1e;
    bVar8 = iVar7 == 0;
    iVar1 = *param_2;
    if (bVar8) {
      iVar7 = param_2[5];
    }
    *param_2 = iVar2;
    if (!bVar8) {
      iVar7 = 0;
    }
    iVar1 = iVar1 - iVar2;
    param_2[2] = iVar7;
    do {
      if (iVar1 < 1) {
        return 0;
      }
      iVar7 = (*(code *)param_2[9])(param_1,param_2[7],iVar2,iVar1,param_4);
      iVar1 = iVar1 - iVar7;
      iVar2 = iVar2 + iVar7;
    } while (0 < iVar7);
LAB_0001a970:
    uVar4 = *(ushort *)(param_2 + 3);
LAB_0001a974:
    *(ushort *)(param_2 + 3) = uVar4 | 0x40;
    return 0xffffffff;
  }
  if ((param_2[1] < 1) && (param_2[0xf] < 1)) {
    return 0;
  }
  pcVar6 = (code *)param_2[10];
  if (pcVar6 == (code *)0x0) {
    return 0;
  }
  iVar7 = *param_1;
  *param_1 = 0;
  iVar2 = param_2[7];
  if ((uVar5 & 0x1000) == 0) {
    iVar1 = (*pcVar6)(param_1,iVar2,0,1);
    if ((iVar1 == -1) && (iVar2 = *param_1, iVar2 != 0)) {
      if ((iVar2 == 0x1d) || (iVar2 == 0x16)) {
        *param_1 = iVar7;
        return 0;
      }
      goto LAB_0001a970;
    }
    uVar5 = (uint)(short)param_2[3];
    pcVar6 = (code *)param_2[10];
    iVar2 = param_2[7];
  }
  else {
    iVar1 = param_2[0x14];
  }
  if (((int)(uVar5 << 0x1d) < 0) && (iVar1 = iVar1 - param_2[1], param_2[0xc] != 0)) {
    iVar1 = iVar1 - param_2[0xf];
  }
  iVar2 = (*pcVar6)(param_1,iVar2,iVar1,0);
  if (iVar2 == -1) {
    iVar1 = *param_1;
    uVar4 = *(ushort *)(param_2 + 3);
    uVar5 = (uint)(short)uVar4;
    if (iVar1 != 0) {
      if ((iVar1 != 0x1d) && (iVar1 != 0x16)) goto LAB_0001a974;
      *param_2 = param_2[4];
      param_2[1] = 0;
      goto LAB_0001a912;
    }
    param_2[1] = 0;
    *param_2 = param_2[4];
  }
  else {
    param_2[1] = 0;
    *param_2 = param_2[4];
    uVar5 = (uint)*(ushort *)(param_2 + 3);
  }
  if ((int)(uVar5 << 0x13) < 0) {
    param_2[0x14] = iVar2;
  }
LAB_0001a912:
  piVar3 = (int *)param_2[0xc];
  *param_1 = iVar7;
  if (piVar3 != (int *)0x0) {
    if (piVar3 != param_2 + 0x10) {
      FUN_00018a90(param_1);
    }
    param_2[0xc] = 0;
  }
  return 0;
}



// FUN_0001a9bc @ 0001a9bc (90 bytes, called_by=0, calls=0)

undefined4 FUN_0001a9bc(int param_1,int param_2)

{
  short sVar1;
  undefined4 uVar2;
  
  if ((param_1 == 0) || (*(int *)(param_1 + 0x38) != 0)) {
    sVar1 = *(short *)(param_2 + 0xc);
  }
  else {
    FUN_0001aa24();
    sVar1 = *(short *)(param_2 + 0xc);
  }
  if (sVar1 != 0) {
    if ((-1 < *(int *)(param_2 + 100) << 0x1f) && (-1 < (int)sVar1 << 0x16)) {
      FUN_0001d952(*(undefined4 *)(param_2 + 0x58));
    }
    uVar2 = FUN_0001a8ac(param_1,param_2);
    if ((-1 < *(int *)(param_2 + 100) << 0x1f) &&
       (-1 < (int)((uint)*(ushort *)(param_2 + 0xc) << 0x16))) {
      thunk_FUN_00014e2c(*(undefined4 *)(param_2 + 0x58));
      return uVar2;
    }
    return uVar2;
  }
  return 0;
}



// FUN_0001aa24 @ 0001aa24 (236 bytes, called_by=0, calls=0)

void FUN_0001aa24(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  
  FUN_0001d952(DAT_0001ab10);
  if (*(int *)(param_1 + 0x38) == 0) {
    puVar5 = *(undefined4 **)(param_1 + 4);
    *(undefined4 *)(param_1 + 0x3c) = DAT_0001ab14;
    *(undefined4 *)(param_1 + 0x14c) = 0;
    *(undefined4 *)(param_1 + 0x150) = 3;
    uVar4 = DAT_0001ab24;
    uVar3 = DAT_0001ab20;
    uVar2 = DAT_0001ab1c;
    uVar1 = DAT_0001ab18;
    *(int *)(param_1 + 0x154) = param_1 + 0x158;
    puVar5[3] = 4;
    *puVar5 = 0;
    puVar5[1] = 0;
    puVar5[4] = 0;
    puVar5[5] = 0;
    puVar5[2] = 0;
    puVar5[0x19] = 0;
    puVar5[6] = 0;
    FUN_000168a4(puVar5 + 0x17,0,8);
    puVar5[7] = puVar5;
    puVar5[8] = uVar1;
    puVar5[9] = uVar2;
    puVar5[10] = uVar3;
    puVar5[0xb] = uVar4;
    FUN_0001d93a(puVar5 + 0x16);
    puVar5 = *(undefined4 **)(param_1 + 8);
    puVar5[3] = DAT_0001ab28;
    *puVar5 = 0;
    puVar5[1] = 0;
    puVar5[4] = 0;
    puVar5[5] = 0;
    puVar5[2] = 0;
    puVar5[0x19] = 0;
    puVar5[6] = 0;
    FUN_000168a4(puVar5 + 0x17,0,8);
    puVar5[7] = puVar5;
    puVar5[8] = uVar1;
    puVar5[9] = uVar2;
    puVar5[10] = uVar3;
    puVar5[0xb] = uVar4;
    FUN_0001d93a(puVar5 + 0x16);
    puVar5 = *(undefined4 **)(param_1 + 0xc);
    puVar5[3] = DAT_0001ab2c;
    *puVar5 = 0;
    puVar5[1] = 0;
    puVar5[4] = 0;
    puVar5[5] = 0;
    puVar5[2] = 0;
    puVar5[0x19] = 0;
    puVar5[6] = 0;
    FUN_000168a4(puVar5 + 0x17,0,8);
    puVar5[7] = puVar5;
    puVar5[8] = uVar1;
    puVar5[10] = uVar3;
    puVar5[0xb] = uVar4;
    puVar5[9] = uVar2;
    FUN_0001d93a(puVar5 + 0x16);
    *(undefined4 *)(param_1 + 0x38) = 1;
    thunk_FUN_00014e2c(DAT_0001ab10);
    return;
  }
  thunk_FUN_00014e2c(DAT_0001ab10);
  return;
}



// FUN_0001ab30 @ 0001ab30 (754 bytes, called_by=0, calls=0)

undefined4 FUN_0001ab30(undefined4 *param_1,uint *param_2,undefined4 *param_3)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ushort uVar6;
  int iVar7;
  uint uVar8;
  int *piVar9;
  int *piVar10;
  int iVar11;
  uint uVar12;
  code *pcVar13;
  
  if (param_3[2] == 0) {
    return 0;
  }
  uVar6 = (ushort)param_2[3];
  if (((uVar6 & 8) == 0) || (param_2[4] == 0)) {
    iVar11 = FUN_0001a7e8(param_1,param_2);
    if (iVar11 != 0) {
      return 0xffffffff;
    }
    uVar6 = (ushort)param_2[3];
    piVar9 = (int *)*param_3;
    uVar5 = DAT_0001ae24;
  }
  else {
    piVar9 = (int *)*param_3;
    uVar5 = DAT_0001ae24;
  }
  DAT_0001ae24 = uVar5;
  if ((uVar6 & 2) != 0) {
    iVar11 = 0;
    pcVar13 = (code *)param_2[9];
    uVar4 = param_2[7];
    uVar8 = 0;
    do {
      uVar3 = uVar8;
      if (uVar5 <= uVar8) {
        uVar3 = uVar5;
      }
      while (uVar8 != 0) {
        iVar2 = (*pcVar13)(param_1,uVar4,iVar11,uVar3);
        if (iVar2 < 1) goto LAB_0001ad10;
        iVar7 = param_3[2];
        iVar11 = iVar11 + iVar2;
        uVar8 = uVar8 - iVar2;
        param_3[2] = iVar7 - iVar2;
        if (iVar7 - iVar2 == 0) {
          return 0;
        }
        pcVar13 = (code *)param_2[9];
        uVar4 = param_2[7];
        uVar3 = uVar8;
        if (uVar5 <= uVar8) {
          uVar3 = uVar5;
        }
      }
      iVar11 = *piVar9;
      uVar8 = piVar9[1];
      piVar9 = piVar9 + 2;
    } while( true );
  }
  if ((uVar6 & 1) == 0) {
    uVar4 = *param_2;
    uVar5 = param_2[2];
    uVar8 = 0;
    iVar11 = 0;
    while( true ) {
      while (uVar8 == 0) {
        iVar11 = *piVar9;
        puVar1 = (uint *)(piVar9 + 1);
        piVar9 = piVar9 + 2;
        uVar8 = *puVar1;
      }
      if ((uVar6 & 0x200) == 0) {
        if ((param_2[4] < uVar4) || (uVar3 = param_2[5], uVar8 < uVar3)) {
          if (uVar8 <= uVar5) {
            uVar5 = uVar8;
          }
          FUN_000167a4(uVar4,iVar11,uVar5);
          uVar4 = param_2[2];
          param_2[2] = uVar4 - uVar5;
          *param_2 = *param_2 + uVar5;
          if ((uVar4 - uVar5 == 0) && (iVar2 = FUN_0001a9bc(param_1,param_2), iVar2 != 0))
          goto LAB_0001ad10;
        }
        else {
          uVar5 = 0x7fffffff;
          if (uVar8 < 0x80000000) {
            uVar5 = uVar8;
          }
          uVar5 = (*(code *)param_2[9])(param_1,param_2[7],iVar11,uVar3 * ((int)uVar5 / (int)uVar3))
          ;
          if ((int)uVar5 < 1) goto LAB_0001ad10;
        }
        uVar3 = uVar8 - uVar5;
      }
      else {
        uVar3 = uVar8;
        if ((uVar5 <= uVar8) && (uVar3 = uVar5, (uVar6 & 0x480) != 0)) {
          iVar2 = uVar4 - param_2[4];
          uVar5 = (int)(param_2[5] * 3) / 2;
          uVar4 = iVar2 + 1 + uVar8;
          if (uVar5 < uVar4) {
            uVar5 = uVar4;
          }
          if ((uVar6 & 0x400) == 0) {
            uVar3 = FUN_00019670(param_1);
            if (uVar3 == 0) {
              FUN_00018a90(param_1,param_2[4]);
              uVar6 = (ushort)param_2[3] & 0xff7f;
              *param_1 = 0xc;
              goto LAB_0001ad14;
            }
          }
          else {
            uVar3 = FUN_000161cc(param_1,uVar5);
            if (uVar3 == 0) {
              uVar6 = (ushort)param_2[3];
              *param_1 = 0xc;
              goto LAB_0001ad14;
            }
            FUN_00000820(uVar3,param_2[4],iVar2);
            *(ushort *)(param_2 + 3) = (ushort)param_2[3] & 0xfb7f | 0x80;
          }
          uVar4 = uVar3 + iVar2;
          param_2[5] = uVar5;
          param_2[4] = uVar3;
          param_2[2] = uVar5 - iVar2;
          *param_2 = uVar4;
          uVar3 = uVar8;
        }
        FUN_000167a4(uVar4,iVar11);
        param_2[2] = param_2[2] - uVar3;
        *param_2 = uVar3 + *param_2;
        uVar3 = 0;
        uVar5 = uVar8;
      }
      iVar2 = param_3[2];
      iVar11 = iVar11 + uVar5;
      param_3[2] = iVar2 - uVar5;
      if (iVar2 - uVar5 == 0) break;
      uVar4 = *param_2;
      uVar5 = param_2[2];
      uVar6 = (ushort)param_2[3];
      uVar8 = uVar3;
    }
  }
  else {
    iVar11 = 0;
    uVar5 = 0;
    uVar4 = 0;
    iVar2 = 0;
    do {
      if (uVar5 == 0) {
        do {
          piVar10 = piVar9;
          uVar5 = piVar10[1];
          piVar9 = piVar10 + 2;
        } while (uVar5 == 0);
        iVar2 = *piVar10;
LAB_0001ad36:
        iVar11 = FUN_00000500(iVar2,10,uVar5);
        if (iVar11 == 0) {
          uVar4 = uVar5 + 1;
        }
        else {
          uVar4 = (iVar11 + 1) - iVar2;
        }
      }
      else if (iVar11 == 0) goto LAB_0001ad36;
      uVar3 = *param_2;
      uVar8 = uVar4;
      if (uVar5 <= uVar4) {
        uVar8 = uVar5;
      }
      if ((param_2[4] < uVar3) && (uVar12 = param_2[2] + param_2[5], (int)uVar12 < (int)uVar8)) {
        FUN_000167a4(uVar3,iVar2,uVar12);
        *param_2 = *param_2 + uVar12;
        iVar11 = FUN_0001a9bc(param_1,param_2);
        if (iVar11 != 0) {
LAB_0001ad10:
          uVar6 = (ushort)param_2[3];
LAB_0001ad14:
          *(ushort *)(param_2 + 3) = uVar6 | 0x40;
          return 0xffffffff;
        }
      }
      else if ((int)uVar8 < (int)param_2[5]) {
        FUN_000167a4(uVar3,iVar2);
        param_2[2] = param_2[2] - uVar8;
        *param_2 = *param_2 + uVar8;
        uVar12 = uVar8;
      }
      else {
        uVar12 = (*(code *)param_2[9])(param_1,param_2[7],iVar2);
        if ((int)uVar12 < 1) goto LAB_0001ad10;
      }
      uVar4 = uVar4 - uVar12;
      if (uVar4 == 0) {
        iVar11 = FUN_0001a9bc(param_1,param_2);
        if (iVar11 != 0) goto LAB_0001ad10;
      }
      else {
        iVar11 = 1;
      }
      iVar7 = param_3[2];
      iVar2 = iVar2 + uVar12;
      uVar5 = uVar5 - uVar12;
      param_3[2] = iVar7 - uVar12;
    } while (iVar7 - uVar12 != 0);
  }
  return 0;
}



// FUN_0001ae28 @ 0001ae28 (72 bytes, called_by=0, calls=0)

uint FUN_0001ae28(int param_1,code *param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  bool bVar7;
  
  piVar5 = (int *)(param_1 + 0x14c);
  uVar6 = 0;
  do {
    iVar3 = piVar5[2];
    iVar4 = piVar5[1] + -1;
    if (-1 < piVar5[1] + -1) {
      do {
        if ((1 < *(ushort *)(iVar3 + 0xc)) && (iVar2 = *(short *)(iVar3 + 0xe) + 1, iVar2 != 0)) {
          uVar1 = (*param_2)(param_1,iVar3,param_3,iVar2,param_4);
          uVar6 = uVar6 | uVar1;
        }
        bVar7 = iVar4 != 0;
        iVar3 = iVar3 + 0x68;
        iVar4 = iVar4 + -1;
      } while (bVar7);
    }
    piVar5 = (int *)*piVar5;
  } while (piVar5 != (int *)0x0);
  return uVar6;
}



// FUN_0001ae70 @ 0001ae70 (192 bytes, called_by=0, calls=0)

void FUN_0001ae70(int param_1,int *param_2)

{
  ushort uVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined1 auStack_70 [4];
  uint local_6c;
  
  uVar5 = (uint)(short)param_2[3];
  if ((int)(uVar5 << 0x1e) < 0) {
    param_2[4] = (int)param_2 + 0x43;
    param_2[5] = 1;
    *param_2 = (int)param_2 + 0x43;
    return;
  }
  if (-1 < *(short *)((int)param_2 + 0xe)) {
    iVar3 = FUN_0001b014(param_1,(int)*(short *)((int)param_2 + 0xe),auStack_70);
    if (-1 < iVar3) {
      iVar3 = 0x400;
      bVar2 = (local_6c & 0xf000) == 0x2000;
      iVar4 = FUN_000161cc(param_1,0x400);
      goto joined_r0x0001af0e;
    }
    uVar5 = (uint)(short)param_2[3];
  }
  if ((uVar5 & 0x80) == 0) {
    iVar3 = 0x400;
  }
  else {
    iVar3 = 0x40;
  }
  bVar2 = false;
  iVar4 = FUN_000161cc(param_1,iVar3);
joined_r0x0001af0e:
  if (iVar4 == 0) {
    if (-1 < (int)(short)*(ushort *)(param_2 + 3) << 0x16) {
      param_2[4] = (int)param_2 + 0x43;
      param_2[5] = 1;
      *(ushort *)(param_2 + 3) = *(ushort *)(param_2 + 3) & 0xfffc | 2;
      *param_2 = (int)param_2 + 0x43;
    }
  }
  else {
    uVar1 = *(ushort *)(param_2 + 3);
    *(undefined4 *)(param_1 + 0x3c) = DAT_0001af30;
    param_2[4] = iVar4;
    param_2[5] = iVar3;
    *(ushort *)(param_2 + 3) = uVar1 | 0x80;
    *param_2 = iVar4;
    if ((bVar2) && (iVar3 = FUN_0001b040(param_1,(int)*(short *)((int)param_2 + 0xe)), iVar3 != 0))
    {
      *(ushort *)(param_2 + 3) = *(ushort *)(param_2 + 3) & 0xfffc | 1;
    }
  }
  return;
}



// FUN_0001af34 @ 0001af34 (34 bytes, called_by=0, calls=0)

void FUN_0001af34(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_0001b090(param_1,(int)*(short *)(param_2 + 0xe));
  if (-1 < iVar1) {
    *(int *)(param_2 + 0x50) = *(int *)(param_2 + 0x50) + iVar1;
    return;
  }
  *(ushort *)(param_2 + 0xc) = *(ushort *)(param_2 + 0xc) & 0xefff;
  return;
}



// FUN_0001af58 @ 0001af58 (102 bytes, called_by=0, calls=0)

void FUN_0001af58(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  short sVar1;
  int *piVar2;
  int iVar3;
  ushort uVar4;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 in_lr;
  
  uVar4 = *(ushort *)(param_2 + 0xc);
  if ((int)(short)uVar4 << 0x17 < 0) {
    FUN_0001b064(param_1,(int)*(short *)(param_2 + 0xe),0,2);
    uVar4 = *(ushort *)(param_2 + 0xc);
  }
  *(ushort *)(param_2 + 0xc) = uVar4 & 0xefff;
  piVar2 = DAT_0001afec;
  sVar1 = *(short *)(param_2 + 0xe);
  *DAT_0001afec = 0;
  iVar3 = FUN_0001d914((int)sVar1,param_3,param_4,0,param_4,unaff_r4,unaff_r5,in_lr);
  if ((iVar3 == -1) && (*piVar2 != 0)) {
    *param_1 = *piVar2;
    return;
  }
  return;
}



// FUN_0001af98 @ 0001af98 (34 bytes, called_by=0, calls=0)

void FUN_0001af98(undefined4 param_1,int param_2)

{
  int iVar1;
  ushort uVar2;
  
  iVar1 = FUN_0001b064(param_1,(int)*(short *)(param_2 + 0xe));
  if (iVar1 == -1) {
    uVar2 = *(ushort *)(param_2 + 0xc) & 0xefff;
  }
  else {
    uVar2 = *(ushort *)(param_2 + 0xc) | 0x1000;
  }
  if (iVar1 != -1) {
    *(int *)(param_2 + 0x50) = iVar1;
  }
  *(ushort *)(param_2 + 0xc) = uVar2;
  return;
}



// FUN_0001b014 @ 0001b014 (38 bytes, called_by=0, calls=0)

void FUN_0001b014(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = DAT_0001b03c;
  *DAT_0001b03c = 0;
  iVar2 = FUN_0001d930(param_2,param_3);
  if ((iVar2 == -1) && (*piVar1 != 0)) {
    *param_1 = *piVar1;
    return;
  }
  return;
}



// FUN_0001b040 @ 0001b040 (32 bytes, called_by=0, calls=0)

void FUN_0001b040(int *param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = DAT_0001b060;
  *DAT_0001b060 = 0;
  iVar2 = FUN_0001d926(param_2);
  if ((iVar2 == -1) && (*piVar1 != 0)) {
    *param_1 = *piVar1;
    return;
  }
  return;
}



// FUN_0001b064 @ 0001b064 (40 bytes, called_by=0, calls=0)

void FUN_0001b064(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = DAT_0001b08c;
  *DAT_0001b08c = 0;
  iVar2 = FUN_0001d922(param_2,param_3,param_4,0,param_4);
  if ((iVar2 == -1) && (*piVar1 != 0)) {
    *param_1 = *piVar1;
    return;
  }
  return;
}



// FUN_0001b090 @ 0001b090 (40 bytes, called_by=0, calls=0)

void FUN_0001b090(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = DAT_0001b0b8;
  *DAT_0001b0b8 = 0;
  iVar2 = FUN_0001d90c(param_2,param_3,param_4,0,param_4);
  if ((iVar2 == -1) && (*piVar1 != 0)) {
    *param_1 = *piVar1;
    return;
  }
  return;
}



// FUN_0001b0be @ 0001b0be (8 bytes, called_by=0, calls=0)

void FUN_0001b0be(undefined4 param_1)

{
  FUN_0000301c(param_1,0xff,0);
  return;
}



// FUN_0001b0c6 @ 0001b0c6 (38 bytes, called_by=0, calls=0)

void FUN_0001b0c6(uint param_1)

{
  longlong lVar1;
  
  lVar1 = (longlong)(int)(param_1 & ~((int)param_1 >> 0x1f)) * 0x8000 + 999;
  FUN_00001904((int)lVar1,(int)((ulonglong)lVar1 >> 0x20),1000,0);
  FUN_0001596c();
  return;
}



// FUN_0001b0ec @ 0001b0ec (40 bytes, called_by=0, calls=0)

void FUN_0001b0ec(int *param_1,uint param_2)

{
  int iVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  iVar1 = *param_1;
  if ((1 << (sbyte)param_1[1] & **(uint **)(iVar1 + 0x10)) != 0) {
    param_2 = param_2 ^ 1;
  }
  if (param_2 == 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(*(int *)(iVar1 + 8) + 0x10);
  }
  else {
    UNRECOVERED_JUMPTABLE = *(code **)(*(int *)(iVar1 + 8) + 0xc);
  }
                    /* WARNING: Could not recover jumptable at 0x0001b10c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



// FUN_0001b114 @ 0001b114 (18 bytes, called_by=0, calls=0)

void FUN_0001b114(void)

{
  FUN_00003128();
  return;
}



// FUN_0001b126 @ 0001b126 (22 bytes, called_by=0, calls=0)

void FUN_0001b126(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 auStack_90 [136];
  
  FUN_00003128(param_1,param_2,auStack_90,param_3,param_4,0);
  return;
}



// thunk_FUN_00003128 @ 0001b13c (4 bytes, called_by=0, calls=0)

uint thunk_FUN_00003128(undefined4 param_1,int param_2,undefined1 *param_3,int param_4,int param_5,
                       int param_6)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  undefined4 uVar6;
  bool bVar7;
  undefined8 uVar8;
  
  *param_3 = 0;
  FUN_00014d3c(DAT_0000329c,param_2,0xffffffff,0xffffffff,param_1,param_2,param_3);
  uVar6 = extraout_r1;
  if (param_4 != 0) {
    FUN_0001b0ec(param_4,1);
    uVar6 = extraout_r1_00;
  }
  if (param_5 != 0) {
    FUN_0001b0ec(param_5,1);
    uVar6 = extraout_r1_01;
  }
  FUN_00014f54(DAT_000032a0,uVar6,0,0);
  uVar3 = FUN_00011554(param_1);
  if ((uVar3 != 0) && ((*DAT_000032a4 & 7) != 0)) {
    FUN_0001cad8(DAT_000032a4,1,DAT_000032a8,uVar3,param_1);
  }
  if (param_6 != 0) {
    if (*(char *)(param_2 + 1) == '\0') {
      uVar4 = FUN_0001148c();
    }
    else {
      uVar4 = FUN_000114c8(param_6);
    }
    uVar3 = uVar3 | uVar4;
  }
  puVar2 = DAT_000032ac;
  *DAT_000032ac = 0;
  uVar8 = FUN_000112ac(param_2);
  iVar5 = FUN_00014f54(DAT_000032a0,(int)((ulonglong)uVar8 >> 0x20),0x290,0);
  puVar1 = DAT_000032a4;
  if ((uVar3 != 0 || (int)uVar8 != 0) || iVar5 != 0) {
    if ((*DAT_000032a4 & 7) != 0) {
      FUN_0001cab2(DAT_000032a4,1,DAT_000032b0);
    }
    *(undefined4 *)(DAT_000032b4 + 0x10) = 1;
    FUN_0001b0c6(1);
    iVar5 = FUN_0001129c();
    if (iVar5 == 0) {
      if ((*puVar1 & 7) != 0) {
        FUN_0001cab2(DAT_000032a4,1,DAT_000032b8);
      }
      FUN_0001b0c6(100);
      DataSynchronizationBarrier(0xf);
      *(uint *)(DAT_000032bc + 0xc) = DAT_000032c0 | *(uint *)(DAT_000032bc + 0xc) & 0x700;
      DataSynchronizationBarrier(0xf);
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
  }
  do {
    iVar5 = FUN_0001129c();
  } while (iVar5 == 0);
  bVar7 = (*puVar2 & 4) == 0;
  if (bVar7) {
    param_3[2] = (byte)*(undefined4 *)(DAT_000032b4 + 0x548) & 0x7f;
  }
  else {
    FUN_000113c8(param_3);
  }
  uVar3 = (uint)!bVar7;
  if ((int)(*puVar2 << 0x1e) < 0) {
    FUN_00011438();
    if (*(char *)(param_2 + 1) != '\0') {
      FUN_00011580();
    }
    uVar3 = 0xffffffff;
  }
  if (param_6 != 0) {
    FUN_0001148c(DAT_000032c4);
    FUN_000114c8(DAT_000032c8);
  }
  if (param_4 != 0) {
    FUN_0001b0ec(param_4,0);
  }
  if (param_5 != 0) {
    FUN_0001b0ec(param_5,0);
  }
  FUN_00014e2c(DAT_0000329c);
  return uVar3;
}



// FUN_0001b140 @ 0001b140 (176 bytes, called_by=0, calls=0)

void FUN_0001b140(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined1 auStack_134 [4];
  undefined1 local_130;
  undefined1 local_12f;
  undefined1 uStack_12e;
  undefined1 local_12d;
  undefined1 auStack_12b [131];
  undefined1 auStack_a8 [140];
  
  uVar1 = FUN_00016e9c(*(undefined4 *)(param_1 + 4),0,10);
  iVar2 = FUN_00016e9c(*(undefined4 *)(param_1 + 8),0,10);
  if (iVar2 != 0) {
    uVar3 = FUN_00016e9c(*(undefined4 *)(param_1 + 8),0,10);
    if (uVar3 < 0x80) {
      iVar2 = FUN_00016e9c(*(undefined4 *)(param_1 + 8),0,10);
    }
    else {
      iVar2 = 0x80;
    }
  }
  iVar4 = FUN_00016e9c(*(undefined4 *)(param_1 + 0xc),0,10);
  uVar5 = FUN_00016e9c(*(undefined4 *)(param_1 + 0x10),0,10);
  FUN_000168a4(&uStack_12e,0,0x83);
  local_130 = (undefined1)iVar2;
  local_12f = 1;
  local_12d = 1;
  FUN_0000a97c(auStack_12b,0x80);
  FUN_0000a97c(auStack_134,4);
  for (iVar2 = 0; iVar4 != iVar2; iVar2 = iVar2 + 1) {
    thunk_FUN_00003128(uVar1,&local_130,auStack_a8,0,0,auStack_134);
    FUN_0001b0c6(uVar5);
  }
  return;
}



// thunk_FUN_00007b60 @ 0001b200 (4 bytes, called_by=0, calls=0)

void thunk_FUN_00007b60(undefined4 param_1,uint param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined1 *puStack_5c;
  undefined4 uStack_58;
  uint uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  uint uStack_44;
  undefined1 auStack_3c [8];
  int iStack_34;
  uint uStack_30;
  undefined4 uStack_2c;
  
  uVar2 = (param_2 << 0xc) >> 0x15;
  uStack_4c = param_4;
  uStack_48 = param_1;
  if (uVar2 == 0) {
    iVar1 = FUN_0000773c(((param_2 >> 0x14) + 0x17 & 0xfffffff8) >> 2);
    uVar2 = 0;
  }
  else {
    puStack_5c = auStack_3c;
    iStack_34 = 0;
    uStack_30 = 0;
    uStack_2c = 0;
    uStack_58 = 4;
    uStack_60 = 10;
    uStack_44 = uVar2;
    uStack_50 = FUN_000059a8(param_3,uVar2,0,&iStack_34);
    if (0x7ff < uStack_50) {
      if ((*DAT_00007c60 & 6) == 0) {
        return;
      }
      uStack_60 = *(undefined4 *)(param_3 + 4);
      uStack_64 = DAT_00007c64;
      puStack_5c = (undefined1 *)0x7ff;
      uStack_58 = CONCAT22(uStack_58._2_2_,0x200);
      uStack_68 = DAT_00007c68;
      FUN_00007b60(DAT_00007c60,&DAT_00002480,&uStack_68,0);
      return;
    }
    uVar2 = uStack_50 & 0x7ff;
    iVar1 = FUN_0000773c(((param_2 >> 0x14) + 0x17 + uStack_50 & 0xfffffff8) >> 2);
    param_2 = param_2 & 0xfff001ff;
    if (iVar1 != 0) {
      uStack_30 = uStack_50;
      uStack_2c = 0;
      iStack_34 = iVar1 + 0x10;
      puStack_5c = auStack_3c;
      uStack_60 = 10;
      uStack_58 = 4;
      FUN_000059a8(param_3,uStack_44,DAT_00007c6c,&iStack_34);
    }
  }
  FUN_0001ca12(iVar1,uStack_48,param_2 & 0xfff001ff | uVar2 << 9,uStack_4c);
  return;
}



// thunk_FUN_0001cac4 @ 0001b204 (4 bytes, called_by=0, calls=0)

void thunk_FUN_0001cac4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  uStack_10 = param_3;
  uStack_c = param_4;
  uStack_8 = param_3;
  FUN_0001ca44(param_1,param_2,&uStack_10,2);
  return;
}



// thunk_FUN_00020f72 @ 0001b22a (4 bytes, called_by=0, calls=0)

void thunk_FUN_00020f72(int param_1)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar3 = FUN_00020e9a();
  if (iVar3 == 0) {
    if (*(code **)(param_1 + 0x24) != (code *)0x0) {
      (**(code **)(param_1 + 0x24))(param_1);
    }
    iVar3 = FUN_00020d32(param_1 + 0x18);
    if (iVar3 != 0) {
      FUN_00020c68();
      uVar4 = 0;
      bVar1 = (bool)isCurrentModePrivileged();
      if (bVar1) {
        uVar4 = getBasePriority();
      }
      bVar1 = (bool)isCurrentModePrivileged();
      if ((bVar1) && (uVar2 = getBasePriority(), uVar2 == 0 || 0x40 < uVar2)) {
        setBasePriority(0x40);
      }
      InstructionSynchronizationBarrier(0xf);
      FUN_000157c8(uVar4);
      return;
    }
  }
  return;
}



// FUN_0001b22e @ 0001b22e (26 bytes, called_by=0, calls=0)

void FUN_0001b22e(int param_1)

{
  thunk_FUN_00020f72(param_1 + 0x16a8);
  *(undefined1 *)(param_1 + 0x16a4) = 0;
  return;
}



// FUN_0001b248 @ 0001b248 (30 bytes, called_by=0, calls=0)

bool FUN_0001b248(int param_1,int param_2,undefined4 param_3)

{
  int local_10;
  int iStack_c;
  undefined4 uStack_8;
  
  local_10 = param_1;
  iStack_c = param_2;
  uStack_8 = param_3;
  FUN_00020f18(&local_10,param_2,param_1,param_2);
  return local_10 == 0 && iStack_c == 0;
}



// FUN_0001b266 @ 0001b266 (46 bytes, called_by=0, calls=0)

void FUN_0001b266(undefined4 *param_1,undefined1 param_2)

{
  int iVar1;
  undefined1 local_50;
  undefined1 auStack_4f [67];
  
  FUN_000168a4(auStack_4f,0,0x3f);
  local_50 = param_2;
  iVar1 = FUN_00003620();
  FUN_0001b63c(*param_1,&local_50,iVar1 + 1);
  return;
}



// FUN_0001b294 @ 0001b294 (38 bytes, called_by=0, calls=0)

undefined4 FUN_0001b294(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00021342(param_1 + 0x1720,0xffffffff,0,param_4,param_3,param_4,param_3);
  FUN_0002133a(param_1 + 0x1720,uVar1);
  return uVar1;
}



// thunk_FUN_00021334 @ 0001b2ba (4 bytes, called_by=0, calls=0)

uint thunk_FUN_00021334(int param_1,uint param_2)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  int iStack_28;
  uint uStack_24;
  uint uStack_20;
  
  uVar2 = DAT_000160d8;
  iStack_28 = 0;
  uVar7 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    uVar7 = getBasePriority();
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if ((bVar1) && (uVar5 = getBasePriority(), uVar5 == 0 || 0x40 < uVar5)) {
    setBasePriority(0x40);
  }
  InstructionSynchronizationBarrier(0xf);
  uVar5 = *(uint *)(param_1 + 8);
  uVar6 = uVar5 ^ param_2 & (param_2 ^ uVar5);
  *(uint *)(param_1 + 8) = uVar6;
  uStack_24 = uVar6;
  uStack_20 = param_2;
  FUN_00020e56(param_1,uVar2,&iStack_28);
  iVar3 = iStack_28;
  while (iVar3 != 0) {
    *(undefined4 *)(iVar3 + 0xac) = 0;
    *(uint *)(iVar3 + 0x88) = uVar6;
    iVar4 = *(int *)(iVar3 + 0x84);
    FUN_00020cdc(iVar3,0);
    iVar3 = iVar4;
  }
  FUN_00015768(param_1 + 0xc,uVar7);
  return uVar5 & param_2;
}



// thunk_FUN_000159a8 @ 0001b2f4 (4 bytes, called_by=0, calls=0)

uint thunk_FUN_000159a8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = (longlong)param_1 * 0x8000 + (ulonglong)DAT_000159dc;
  iVar2 = FUN_00001904((int)lVar1,(int)((ulonglong)lVar1 >> 0x20),DAT_000159e0,0,param_4);
  iVar2 = FUN_000158e4(iVar2,iVar2 >> 0x1f);
  lVar1 = (longlong)iVar2 * (longlong)DAT_000159e0 + 0x7fff;
  return (uint)lVar1 >> 0xf | (int)((ulonglong)lVar1 >> 0x20) << 0x11;
}



// FUN_0001b2f8 @ 0001b2f8 (52 bytes, called_by=0, calls=0)

void FUN_0001b2f8(int *param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  
  iVar2 = *param_1;
  bVar1 = *(byte *)(param_1 + 1);
  uVar3 = (uint)*(ushort *)((int)param_1 + 6);
  puVar6 = *(undefined4 **)(iVar2 + 8);
  uVar4 = **(uint **)(iVar2 + 0x10);
  if ((int)(uVar3 << 0x1f) < 0) {
    uVar3 = uVar3 ^ 0x1a0000;
  }
  else {
    uVar3 = uVar3 | 0x160000;
  }
  uVar5 = 1 << (uint)bVar1;
  if ((int)(uVar3 << 0x1f) < 0) {
    uVar4 = uVar4 | uVar5;
  }
  else {
    uVar4 = uVar4 & ~uVar5;
  }
  **(uint **)(iVar2 + 0x10) = uVar4;
                    /* WARNING: Could not recover jumptable at 0x0001b32a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar6)(iVar2,(uint)bVar1,uVar3 & 0xffefffff);
  return;
}



// FUN_0001b32c @ 0001b32c (44 bytes, called_by=0, calls=0)

void FUN_0001b32c(undefined4 *param_1,undefined1 param_2)

{
  undefined1 local_50;
  undefined1 local_4f;
  undefined1 auStack_4e [66];
  
  FUN_000168a4(auStack_4e,0,0x3e);
  local_50 = 0x79;
  local_4f = param_2;
  FUN_0001b63c(*param_1,&local_50,2);
  return;
}



// FUN_0001b358 @ 0001b358 (28 bytes, called_by=0, calls=0)

undefined8 FUN_0001b358(void)

{
  uint uVar1;
  longlong lVar2;
  
  lVar2 = thunk_FUN_00015da4();
  uVar1 = (uint)((ulonglong)(lVar2 * 1000) >> 0x20);
  return CONCAT44(uVar1 >> 0xf,(uint)(lVar2 * 1000) >> 0xf | uVar1 * 0x20000);
}



// FUN_0001b374 @ 0001b374 (146 bytes, called_by=0, calls=0)

int FUN_0001b374(int param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5,
                uint param_6)

{
  longlong lVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined4 local_30;
  undefined4 uStack_2c;
  
  iVar4 = 0;
  lVar1 = (ulonglong)param_6 * 0x8000 + 999;
  uVar5 = FUN_00001904((int)lVar1,(int)((ulonglong)lVar1 >> 0x20),1000,0);
  uVar3 = (undefined4)((ulonglong)uVar5 >> 0x20);
  FUN_00020ed0(&local_30,uVar3,(int)uVar5,uVar3);
  while( true ) {
    if (*(int *)(param_4 + param_5 * 4) != 0xff) {
      iVar2 = FUN_0001b114(*(undefined4 *)(param_4 + iVar4 * 4),param_2,param_3,param_1 + 0x1760,0);
      if (-1 < iVar2) {
        return iVar4;
      }
      FUN_000039b0();
      thunk_FUN_000159a8();
    }
    iVar2 = FUN_0001b248(local_30,uStack_2c);
    if (iVar2 != 0) break;
    iVar4 = iVar4 + 1;
    if (param_5 <= iVar4) {
      iVar4 = 0;
    }
  }
  return -0x74;
}



// FUN_0001b406 @ 0001b406 (260 bytes, called_by=0, calls=0)

void FUN_0001b406(int param_1,undefined4 param_2,byte *param_3,char *param_4)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_13c;
  undefined4 local_138;
  uint local_134;
  uint local_130;
  uint local_12c;
  undefined1 auStack_128 [136];
  char local_a0 [136];
  
  local_13c = 0xffffffff;
  if ((&LAB_00001774_1)[param_1] == '\0') {
    uVar1 = FUN_0000301c(FUN_000017a8 + param_1,*(undefined4 *)(param_1 + 0x1750),param_2);
    local_13c = CONCAT31(local_13c._1_3_,uVar1);
    FUN_00020214(auStack_128,*(undefined1 *)(param_1 + 0x1730),&local_13c,1);
    local_138 = *(undefined4 *)(param_1 + 0x1750);
    local_134 = local_13c & 0xff;
    uVar3 = 2;
  }
  else {
    uVar1 = FUN_0000301c(FUN_000017a8 + param_1,*(undefined4 *)(param_1 + 0x1750),param_2);
    local_13c = CONCAT13(local_13c._3_1_,0x500000);
    local_13c._0_2_ = CONCAT11(2,uVar1);
    FUN_00020214(auStack_128,*(undefined1 *)(param_1 + 0x1730),&local_13c,3);
    local_138 = *(undefined4 *)(param_1 + 0x1750);
    local_134 = local_13c & 0xff;
    local_130 = local_13c >> 8 & 0xff;
    local_12c = local_13c >> 0x10 & 0xff;
    iVar2 = FUN_0001b374(param_1,auStack_128,local_a0,&local_138,2,10);
    if (-1 < iVar2) goto LAB_0001b46a;
    uVar3 = 4;
  }
  iVar2 = FUN_0001b374(param_1,auStack_128,local_a0,&local_138,uVar3,500);
LAB_0001b46a:
  *param_3 = (byte)((uint)iVar2 >> 0x1f);
  if (local_a0[0] != '\0') {
    FUN_00003c9c(param_1,local_a0,param_4,&local_138);
  }
  if ((*param_4 == '\0') && (*param_3 == 0)) {
    *(uint *)(param_1 + 0x1750) = local_13c & 0xff;
    *(uint *)(param_1 + 0x1754) = local_13c >> 8 & 0xff;
    *(uint *)(param_1 + 0x1758) = local_13c >> 0x10 & 0xff;
    *(uint *)(param_1 + 0x175c) = local_13c >> 0x18;
  }
  return;
}



// FUN_0001b50a @ 0001b50a (20 bytes, called_by=0, calls=0)

void FUN_0001b50a(int param_1)

{
  (&LAB_00001776)[param_1] = 1;
  thunk_FUN_00021334(param_1 + 0x1720,8);
  return;
}



// FUN_0001b51e @ 0001b51e (20 bytes, called_by=0, calls=0)

void FUN_0001b51e(int param_1)

{
  (&LAB_00001776)[param_1] = 0;
  thunk_FUN_00021334(param_1 + 0x1720,0x10);
  return;
}



// FUN_0001b532 @ 0001b532 (52 bytes, called_by=0, calls=0)

void FUN_0001b532(int param_1,int param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  param_1 = param_1 + param_2 * 4;
  *(int *)(param_1 + 0x288) = param_3;
  *(int *)(param_1 + 0x3cc) = param_4;
  if (param_3 + param_4 == 0) {
    uVar1 = 0x3f800000;
  }
  else {
    uVar1 = FUN_000013e8(param_4);
    uVar2 = FUN_000013e8(param_3 + param_4);
    uVar1 = FUN_00001600(uVar1,uVar2);
  }
  *(undefined4 *)(param_1 + 0x510) = uVar1;
  return;
}



// FUN_0001b566 @ 0001b566 (62 bytes, called_by=0, calls=0)

void FUN_0001b566(int param_1,int param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  param_1 = param_1 + param_2 * 4;
  param_3 = param_3 + *(int *)(param_1 + 0x288);
  *(int *)(param_1 + 0x288) = param_3;
  param_4 = param_4 + *(int *)(param_1 + 0x3cc);
  param_3 = param_3 + param_4;
  *(int *)(param_1 + 0x3cc) = param_4;
  if (param_3 == 0) {
    uVar1 = 0x3f800000;
  }
  else {
    uVar1 = FUN_000013e8();
    uVar2 = FUN_000013e8(param_3);
    uVar1 = FUN_00001600(uVar1,uVar2);
  }
  *(undefined4 *)(param_1 + 0x510) = uVar1;
  return;
}



// FUN_0001b5a4 @ 0001b5a4 (26 bytes, called_by=0, calls=0)

undefined4
FUN_0001b5a4(undefined4 param_1,undefined4 param_2,undefined1 *param_3,undefined4 param_4)

{
  undefined1 uVar1;
  int iVar2;
  
  iVar2 = FUN_00013a78();
  uVar1 = (*(code *)**(undefined4 **)(iVar2 + 8))
                    (iVar2,param_2,*param_3,(code *)**(undefined4 **)(iVar2 + 8),param_4);
  *param_3 = uVar1;
  return 0;
}



// FUN_0001b5be @ 0001b5be (24 bytes, called_by=0, calls=0)

void FUN_0001b5be(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_00013a78();
                    /* WARNING: Could not recover jumptable at 0x0001b5d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(iVar1 + 8) + 4))(iVar1,param_2,param_3);
  return;
}



// FUN_0001b5d6 @ 0001b5d6 (36 bytes, called_by=0, calls=0)

undefined4 FUN_0001b5d6(undefined4 param_1,char *param_2)

{
  int iVar1;
  char cVar2;
  
  iVar1 = FUN_00013a78();
  if (*param_2 == '\0') {
    (**(code **)(*(int *)(iVar1 + 8) + 0xc))();
  }
  else {
    cVar2 = param_2[1];
    if (cVar2 == '\0') {
      cVar2 = '<';
    }
    (**(code **)(*(int *)(iVar1 + 8) + 8))(iVar1,cVar2);
  }
  return 0;
}



// FUN_0001b63c @ 0001b63c (56 bytes, called_by=0, calls=0)

void FUN_0001b63c(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x10);
  iVar1 = iVar2 + 0x8c;
  FUN_00014d3c(iVar1,param_2,0xffffffff,0xffffffff);
  (*(code *)**(undefined4 **)(iVar2 + 4))(param_1,param_2,param_3);
  FUN_00014e2c(iVar1);
  return;
}



// FUN_0001b674 @ 0001b674 (128 bytes, called_by=0, calls=0)

undefined4 FUN_0001b674(int param_1,undefined4 param_2,uint param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 local_5c;
  undefined1 local_5b;
  undefined1 auStack_5a [70];
  
  iVar2 = *(int *)(*(int *)(param_1 + 0x10) + 0x88);
  if (*(char *)(iVar2 + 0x172f) == '\x03') {
    FUN_000168a4(auStack_5a,0,0x40);
    local_5c = (undefined1)param_3;
    local_5b = 5;
    if (param_3 < 0x41) {
      FUN_00000820(auStack_5a,param_2,param_3);
      FUN_00014bdc(iVar2 + 0x1660,&local_5c,0,0);
      uVar1 = 0;
    }
    else {
      if ((*DAT_00004c80 & 6) != 0) {
        FUN_0001cad8(DAT_00004c80,2,DAT_00004c84,*(int *)(iVar2 + 0x1730) + -1,param_3);
      }
      uVar1 = 0xffffffea;
    }
  }
  else {
    uVar1 = 0xfffffff5;
  }
  return uVar1;
}



// FUN_0001b67e @ 0001b67e (54 bytes, called_by=0, calls=0)

undefined4 FUN_0001b67e(int param_1,int param_2,int param_3,undefined4 param_4,undefined1 *param_5)

{
  undefined4 uVar1;
  
  if (param_2 == 3) {
    *param_5 = (char)param_3;
    if (param_3 == 1) {
      uVar1 = FUN_00004960(*(undefined4 *)(*(int *)(param_1 + 0x10) + 0x88),param_5 + 1);
      return uVar1;
    }
    if (param_3 == 2) {
      uVar1 = FUN_0002030e(param_1,2,param_5 + 1,*(int *)(param_1 + 0x10) + 0x47);
      return uVar1;
    }
  }
  return 0xffffff7a;
}



// FUN_0001b6b4 @ 0001b6b4 (16 bytes, called_by=0, calls=0)

undefined4 FUN_0001b6b4(int param_1)

{
  FUN_0001b50a(*(undefined4 *)(*(int *)(param_1 + 0x10) + 0x88));
  return 0;
}



// FUN_0001b6c4 @ 0001b6c4 (16 bytes, called_by=0, calls=0)

undefined4 FUN_0001b6c4(int param_1)

{
  FUN_0001b51e(*(undefined4 *)(*(int *)(param_1 + 0x10) + 0x88));
  return 0;
}



// FUN_0001b700 @ 0001b700 (38 bytes, called_by=0, calls=0)

uint FUN_0001b700(uint param_1,byte *param_2,int param_3)

{
  byte *pbVar1;
  uint uVar2;
  
  pbVar1 = param_2 + param_3;
  for (; pbVar1 != param_2; param_2 = param_2 + 1) {
    uVar2 = (*param_2 ^ param_1 ^ (*param_2 ^ param_1) << 4) & 0xff;
    param_1 = (uVar2 >> 4 ^ param_1 >> 8 | uVar2 << 8) ^ uVar2 << 3;
  }
  return param_1;
}



// FUN_0001b726 @ 0001b726 (10 bytes, called_by=0, calls=0)

ushort FUN_0001b726(int param_1,int param_2)

{
  return *(ushort *)(param_1 + param_2 * 8 + 2) >> 1;
}



// FUN_0001b730 @ 0001b730 (78 bytes, called_by=0, calls=0)

void FUN_0001b730(int param_1)

{
  ushort uVar1;
  undefined2 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  
  uVar9 = FUN_0001b726();
  iVar4 = (int)((ulonglong)uVar9 >> 0x20);
  uVar3 = 0x1f - LZCOUNT((int)uVar9);
  iVar8 = param_1 + uVar3 * 4;
  iVar5 = iVar4 * 8;
  iVar6 = *(int *)(iVar8 + 0x10);
  iVar7 = iVar5 + 4;
  iVar5 = iVar5 + 6;
  uVar2 = (undefined2)((ulonglong)uVar9 >> 0x20);
  if (iVar6 == 0) {
    *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | 1 << (uVar3 & 0xff);
    *(int *)(iVar8 + 0x10) = iVar4;
    *(undefined2 *)(param_1 + iVar7) = uVar2;
    *(undefined2 *)(param_1 + iVar5) = uVar2;
  }
  else {
    iVar4 = iVar6 * 8 + 4;
    uVar1 = *(ushort *)(param_1 + iVar4);
    *(ushort *)(param_1 + iVar7) = uVar1;
    *(short *)(param_1 + iVar5) = (short)iVar6;
    *(undefined2 *)(param_1 + (uint)uVar1 * 8 + 6) = uVar2;
    *(undefined2 *)(param_1 + iVar4) = uVar2;
  }
  return;
}



// FUN_0001b77e @ 0001b77e (58 bytes, called_by=0, calls=0)

void FUN_0001b77e(int param_1,uint param_2,uint param_3)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = param_1 + param_2 * 8;
  uVar1 = *(ushort *)(iVar4 + 6);
  uVar3 = (uint)uVar1;
  if (param_2 == uVar3) {
    *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) & ~(1 << (param_3 & 0xff));
    *(undefined4 *)(param_1 + (param_3 + 4) * 4) = 0;
  }
  else {
    uVar2 = *(ushort *)(iVar4 + 4);
    *(uint *)(param_1 + (param_3 + 4) * 4) = uVar3;
    *(ushort *)(param_1 + (uint)uVar2 * 8 + 6) = uVar1;
    *(ushort *)(param_1 + uVar3 * 8 + 4) = uVar2;
  }
  return;
}



// FUN_0001b7b8 @ 0001b7b8 (26 bytes, called_by=0, calls=0)

void FUN_0001b7b8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0001b726();
  FUN_0001b77e(param_1,(int)((ulonglong)uVar1 >> 0x20),0x1f - LZCOUNT((int)uVar1),param_4);
  return;
}



// FUN_0001b7d2 @ 0001b7d2 (110 bytes, called_by=0, calls=0)

uint FUN_0001b7d2(int param_1,uint param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined8 uVar11;
  
  iVar10 = 0x1f - LZCOUNT(param_2);
  iVar9 = param_1 + iVar10 * 4;
  uVar5 = *(uint *)(iVar9 + 0x10);
  if (uVar5 != 0) {
    iVar8 = 3;
    do {
      uVar6 = *(uint *)(iVar9 + 0x10);
      uVar11 = FUN_0001b726(param_1,uVar6);
      uVar7 = (uint)((ulonglong)uVar11 >> 0x20);
      if (param_2 <= (uint)uVar11) goto LAB_0001b800;
      iVar8 = iVar8 + -1;
      uVar6 = (uint)*(ushort *)(param_1 + uVar6 * 8 + 6);
      *(uint *)(iVar9 + 0x10) = uVar6;
    } while ((iVar8 != 0) && (uVar5 != uVar6));
  }
  uVar6 = -1 << (0x20U - LZCOUNT(param_2) & 0xff) & *(uint *)(param_1 + 0xc);
  if (uVar6 != 0) {
    bVar2 = (byte)uVar6;
    bVar3 = (byte)(uVar6 >> 8);
    bVar4 = (byte)(uVar6 >> 0x10);
    bVar1 = (byte)(uVar6 >> 0x18);
    iVar10 = LZCOUNT((uint)(byte)((((((((bVar2 & 1) << 1 | bVar2 >> 1 & 1) << 1 | bVar2 >> 2 & 1) <<
                                      1 | bVar2 >> 3 & 1) << 1 | bVar2 >> 4 & 1) << 1 |
                                   bVar2 >> 5 & 1) << 1 | bVar2 >> 6 & 1) << 1 | bVar2 >> 7) << 0x18
                     | (uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1) << 1 | bVar3 >> 2 & 1)
                                        << 1 | bVar3 >> 3 & 1) << 1 | bVar3 >> 4 & 1) << 1 |
                                     bVar3 >> 5 & 1) << 1 | bVar3 >> 6 & 1) << 1 | bVar3 >> 7) <<
                       0x10 | (uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1) << 1 |
                                               bVar4 >> 2 & 1) << 1 | bVar4 >> 3 & 1) << 1 |
                                             bVar4 >> 4 & 1) << 1 | bVar4 >> 5 & 1) << 1 |
                                           bVar4 >> 6 & 1) << 1 | bVar4 >> 7) << 8 |
                     (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1) << 1 | bVar1 >> 2 & 1) <<
                                      1 | bVar1 >> 3 & 1) << 1 | bVar1 >> 4 & 1) << 1 |
                                   bVar1 >> 5 & 1) << 1 | bVar1 >> 6 & 1) << 1 | bVar1 >> 7));
    uVar7 = *(uint *)(param_1 + (iVar10 + 4) * 4);
    uVar6 = uVar7;
LAB_0001b800:
    FUN_0001b77e(param_1,uVar7,iVar10);
  }
  return uVar6;
}



// FUN_0001b840 @ 0001b840 (44 bytes, called_by=0, calls=0)

void FUN_0001b840(int param_1,undefined4 param_2,undefined4 param_3)

{
  short sVar1;
  short sVar2;
  int extraout_r1;
  undefined8 uVar3;
  
  sVar1 = FUN_0001b726();
  sVar2 = FUN_0001b726(param_1,param_3);
  *(short *)(param_1 + extraout_r1 * 8 + 2) = (sVar1 + sVar2) * 2;
  uVar3 = FUN_0001b726(param_1);
  *(short *)(param_1 + ((int)((ulonglong)uVar3 >> 0x20) + (int)uVar3) * 8) = sVar1 + sVar2;
  return;
}



// FUN_0001b86c @ 0001b86c (52 bytes, called_by=0, calls=0)

void FUN_0001b86c(int param_1,undefined4 param_2,int param_3)

{
  short sVar1;
  short sVar2;
  int extraout_r1;
  undefined8 uVar3;
  
  sVar2 = FUN_0001b726();
  sVar1 = (short)param_3 - (short)extraout_r1;
  sVar2 = ((short)extraout_r1 - (short)param_3) + sVar2;
  *(short *)(param_1 + extraout_r1 * 8 + 2) = sVar1 * 2;
  *(short *)(param_1 + param_3 * 8 + 2) = sVar2 * 2;
  *(short *)(param_1 + param_3 * 8) = sVar1;
  uVar3 = FUN_0001b726(param_1,param_3);
  *(short *)(param_1 + ((int)((ulonglong)uVar3 >> 0x20) + (int)uVar3) * 8) = sVar2;
  return;
}



// FUN_0001b902 @ 0001b902 (128 bytes, called_by=0, calls=0)

void FUN_0001b902(int *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  
  if (param_2 != 0) {
    iVar1 = *param_1;
    uVar2 = (param_2 + -4) - iVar1;
    iVar3 = (uVar2 & 0xfffffff8) + iVar1;
    *(ushort *)(iVar3 + 2) = *(ushort *)(iVar3 + 2) & 0xfffe;
    uVar4 = FUN_0001b726(iVar1,uVar2 >> 3);
    iVar3 = (int)((ulonglong)uVar4 >> 0x20);
    if (-1 < (int)((uint)*(ushort *)(iVar1 + (iVar3 + (int)uVar4) * 8 + 2) << 0x1f)) {
      FUN_0001b7b8(iVar1);
      uVar4 = FUN_0001b726(iVar1,iVar3);
      FUN_0001b840(iVar1,(int)((ulonglong)uVar4 >> 0x20),iVar3 + (int)uVar4);
    }
    if (-1 < (int)((uint)*(ushort *)(iVar1 + (iVar3 - (uint)*(ushort *)(iVar1 + iVar3 * 8)) * 8 + 2)
                  << 0x1f)) {
      FUN_0001b7b8(iVar1);
      FUN_0001b840(iVar1,iVar3 - (uint)*(ushort *)(iVar1 + iVar3 * 8),iVar3);
      iVar3 = iVar3 - (uint)*(ushort *)(iVar1 + iVar3 * 8);
    }
    FUN_0001b730(iVar1,iVar3);
    return;
  }
  return;
}



// FUN_0001b920 @ 0001b920 (82 bytes, called_by=0, calls=0)

int FUN_0001b920(int *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  
  iVar4 = *param_1;
  if ((param_2 != 0) && (param_2 >> 3 < *(uint *)(iVar4 + 8))) {
    uVar3 = param_2 + 0xb >> 3;
    iVar1 = FUN_0001b7d2(iVar4,uVar3);
    if (iVar1 != 0) {
      uVar5 = FUN_0001b726(iVar4,iVar1);
      if (uVar3 < (uint)uVar5) {
        iVar2 = iVar1 + uVar3;
        FUN_0001b86c(iVar4,(int)((ulonglong)uVar5 >> 0x20),iVar2);
        FUN_0001b730(iVar4,iVar2);
      }
      iVar4 = iVar4 + iVar1 * 8;
      *(ushort *)(iVar4 + 2) = *(ushort *)(iVar4 + 2) | 1;
      return iVar4 + 4;
    }
  }
  return 0;
}



// FUN_0001b972 @ 0001b972 (208 bytes, called_by=0, calls=0)

int FUN_0001b972(int *param_1,uint param_2,uint param_3,undefined4 param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined8 uVar7;
  
  uVar6 = param_2 - 1 & param_2;
  iVar4 = *param_1;
  if (uVar6 == 0) {
    if (param_2 < 5) {
      iVar4 = FUN_0001b920(param_1,param_3,param_3,param_4);
      return iVar4;
    }
    uVar2 = 0;
    uVar1 = 4;
    uVar6 = param_2;
  }
  else {
    uVar2 = -param_2 & param_2;
    uVar1 = uVar2;
    if (3 < uVar2) {
      uVar1 = 4;
    }
  }
  if (((param_3 == 0) || (*(uint *)(iVar4 + 8) <= param_3 >> 3)) ||
     (uVar1 = FUN_0001b7d2(iVar4,(param_3 + 0xb + uVar6) - uVar1 >> 3), uVar1 == 0)) {
    iVar3 = 0;
  }
  else {
    iVar3 = uVar6 * ((uVar2 + uVar1 * 8 + iVar4 + uVar6 + 3) / uVar6) - uVar2;
    uVar2 = (iVar3 + -4) - iVar4;
    uVar5 = uVar2 >> 3;
    uVar6 = (int)((param_3 + iVar3 + 7 & 0xfffffff8) - iVar4) >> 3;
    if (uVar1 < uVar2 >> 3) {
      FUN_0001b86c(iVar4,uVar1,uVar5);
      FUN_0001b730(iVar4,uVar1);
    }
    uVar7 = FUN_0001b726(iVar4,uVar5);
    if (uVar6 < (int)uVar7 + uVar5) {
      FUN_0001b86c(iVar4,(int)((ulonglong)uVar7 >> 0x20),uVar6);
      FUN_0001b730(iVar4,uVar6);
    }
    iVar4 = iVar4 + uVar5 * 8;
    *(ushort *)(iVar4 + 2) = *(ushort *)(iVar4 + 2) | 1;
  }
  return iVar3;
}



// FUN_0001babc @ 0001babc (98 bytes, called_by=0, calls=0)

undefined4
FUN_0001babc(undefined4 param_1,code *UNRECOVERED_JUMPTABLE,undefined4 param_3,byte *param_4)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  byte *pbVar4;
  byte *pbVar5;
  uint uVar6;
  
  if (param_4 != (byte *)0x0) {
    bVar1 = param_4[1];
    pbVar4 = param_4 + (uint)*param_4 * 4 + (uint)param_4[3] * 2 + (uint)param_4[2];
    for (uVar6 = 0; uVar6 < bVar1; uVar6 = uVar6 + 1) {
      pbVar5 = pbVar4 + 1;
      *(byte **)(param_4 + (uint)*pbVar4 * 4) = pbVar5;
      iVar3 = FUN_00000140(pbVar5);
      pbVar4 = pbVar5 + iVar3 + 1;
    }
                    /* WARNING: Could not recover jumptable at 0x0001bafc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*UNRECOVERED_JUMPTABLE)(param_1,param_3,*(undefined4 *)(param_4 + 4),param_4 + 8);
    return uVar2;
  }
  return 0xffffffea;
}



// FUN_0001bb1e @ 0001bb1e (74 bytes, called_by=0, calls=0)

uint FUN_0001bb1e(byte *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  byte *pbVar3;
  int iVar4;
  
  iVar4 = 0;
  uVar1 = 0;
  do {
    pbVar3 = param_1 + 1;
    uVar2 = (uint)*param_1;
    if (uVar2 == 0) {
      return 0;
    }
    if (uVar1 != 0) {
      if (iVar4 == param_2) {
        if (uVar2 == 0x70) {
          return uVar1;
        }
        if (uVar2 - 0x40 < 0x3b) {
          return 0;
        }
      }
      else if (uVar2 - 0x40 < 0x3b) {
        uVar2 = (uint)param_1[1];
        iVar4 = iVar4 + 1;
        if (uVar2 == 0) {
          return 0;
        }
        uVar1 = 0;
        pbVar3 = param_1 + 2;
      }
    }
    param_1 = pbVar3;
    if (uVar2 == 0x25) {
      uVar1 = uVar1 ^ 1;
    }
  } while( true );
}



// FUN_0001bb68 @ 0001bb68 (36 bytes, called_by=0, calls=0)

void FUN_0001bb68(undefined1 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = param_2[2];
  if ((*param_2 != 0) && (iVar1 < param_2[1])) {
    if (param_2[1] + -1 == iVar1) {
      param_1 = 0;
    }
    *(undefined1 *)(*param_2 + iVar1) = param_1;
    iVar1 = param_2[2];
  }
  param_2[2] = iVar1 + 1;
  return;
}



// FUN_0001bb8c @ 0001bb8c (26 bytes, called_by=0, calls=0)

void FUN_0001bb8c(undefined4 param_1)

{
  FUN_0001c998(param_1);
  return;
}



// FUN_0001bba6 @ 0001bba6 (26 bytes, called_by=0, calls=0)

void FUN_0001bba6(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uStack_4;
  
  uStack_4 = param_4;
  FUN_00005d70(param_1,param_2,param_3,&uStack_4,param_1,&uStack_4,param_3);
  return;
}



// FUN_0001bbd4 @ 0001bbd4 (48 bytes, called_by=0, calls=0)

void FUN_0001bbd4(uint *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = (ulonglong)*param_1 * 0x33333333;
  lVar2 = lVar1 + (ulonglong)param_1[1] * 0x33333333;
  *(ulonglong *)param_1 =
       (ulonglong)param_1[1] * 0x33333333 +
       (ulonglong)
       ((int)((ulonglong)lVar2 >> 0x20) +
       (uint)CARRY4((uint)lVar2,
                    (int)((ulonglong)lVar1 >> 0x20) + (uint)(0xcccccccc < (uint)lVar1) + 0x33333333)
       );
  return;
}



// FUN_0001bc04 @ 0001bc04 (46 bytes, called_by=0, calls=0)

int FUN_0001bc04(uint *param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  
  if (*param_2 < 1) {
    iVar1 = 0x30;
  }
  else {
    *param_2 = *param_2 + -1;
    uVar2 = param_1[1] * 10 + (int)((ulonglong)*param_1 * 10 >> 0x20);
    *param_1 = (uint)((ulonglong)*param_1 * 10);
    param_1[1] = uVar2 & 0xfffffff;
    iVar1 = (uVar2 >> 0x1c) + 0x30;
  }
  return iVar1;
}



// FUN_0001bc32 @ 0001bc32 (46 bytes, called_by=0, calls=0)

int FUN_0001bc32(code *param_1,undefined4 param_2,char *param_3,char *param_4)

{
  int iVar1;
  char *pcVar2;
  
  pcVar2 = param_3;
  while ((pcVar2 < param_4 || ((param_4 == (char *)0x0 && (*pcVar2 != '\0'))))) {
    iVar1 = (*param_1)(*pcVar2,param_2);
    pcVar2 = pcVar2 + 1;
    if (iVar1 < 0) {
      return iVar1;
    }
  }
  return (int)pcVar2 - (int)param_3;
}



// FUN_0001bc60 @ 0001bc60 (38 bytes, called_by=0, calls=0)

int FUN_0001bc60(uint *param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  if ((param_1[4] & 8) == 0) {
    uVar2 = *param_1;
    if (uVar2 < param_1[3]) {
      iVar1 = 0;
      iVar3 = param_1[3] - uVar2;
    }
    else {
      iVar1 = 1;
      iVar3 = param_1[8] - uVar2;
    }
  }
  else {
    iVar1 = 0;
    iVar3 = iVar1;
  }
  *param_2 = iVar3;
  return iVar1;
}



// FUN_0001bc86 @ 0001bc86 (34 bytes, called_by=0, calls=0)

int FUN_0001bc86(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int local_c;
  
  local_c = param_2;
  iVar1 = FUN_0001bc60(param_1,&local_c,param_3,param_4,param_1);
  if (iVar1 != 0) {
    local_c = local_c + -1 + *(int *)(param_1 + 0xc);
  }
  return (*(int *)(param_1 + 0x20) - local_c) + -1;
}



// FUN_0001bca8 @ 0001bca8 (28 bytes, called_by=0, calls=0)

uint FUN_0001bca8(int param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = param_3 + param_2;
  uVar2 = *(uint *)(param_1 + 0x20);
  if (*(int *)(param_1 + 0x10) << 0x1f < 0) {
    uVar1 = uVar1 & uVar2 - 1;
  }
  else if (uVar2 <= uVar1) {
    uVar1 = uVar1 - uVar2;
  }
  return uVar1;
}



// FUN_0001bcc4 @ 0001bcc4 (24 bytes, called_by=0, calls=0)

void FUN_0001bcc4(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0001bca8(param_1,*(undefined4 *)(param_1 + 0xc),param_2);
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) & 0xfffffff7;
  return;
}



// FUN_0001bcdc @ 0001bcdc (58 bytes, called_by=0, calls=0)

void FUN_0001bcdc(uint *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  
  uVar1 = param_2 << 2 | 2;
  *(uint *)(param_1[7] + *param_1 * 4) = uVar1;
  uVar1 = FUN_0001bca8(param_1,*param_1,param_2,uVar1,param_4);
  uVar2 = param_1[3];
  *param_1 = uVar1;
  bVar3 = uVar1 == uVar2;
  if (bVar3) {
    uVar2 = param_1[4] | 8;
  }
  if (bVar3) {
    param_1[4] = uVar2;
  }
  uVar1 = FUN_0001bca8(param_1,param_1[1],param_2,uVar2,param_4);
  param_1[1] = uVar1;
  return;
}



// FUN_0001bd16 @ 0001bd16 (238 bytes, called_by=0, calls=0)

undefined4 FUN_0001bd16(int *param_1,int param_2,int *param_3,int *param_4)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  int *piVar11;
  
  iVar8 = param_1[3];
  iVar7 = param_1[7];
  iVar9 = iVar7 + iVar8 * 4;
  if ((*(byte *)(iVar7 + iVar8 * 4) & 3) == 2) {
    uVar6 = *(uint *)(iVar7 + iVar8 * 4);
    *param_3 = 0;
    *param_4 = 0;
    if (uVar6 >> 2 == 0) goto LAB_0001bd40;
    FUN_0001bcc4();
    param_1[2] = param_1[3];
LAB_0001bd64:
    uVar2 = 1;
  }
  else {
    *param_3 = 0;
    *param_4 = 0;
LAB_0001bd40:
    if (param_1[4] << 0x1e < 0) {
      piVar10 = param_1;
      iVar4 = param_2;
      piVar11 = param_3;
      iVar3 = (*(code *)param_1[6])(iVar9);
      bVar1 = *(byte *)(iVar7 + iVar8 * 4);
      iVar5 = (uint)bVar1 << 0x1f;
      if (iVar5 < 0) {
        uVar6 = bVar1 & 2;
        if ((bVar1 & 2) == 0) {
          FUN_0001bcc4(param_1,iVar3,iVar5,uVar6,piVar10,uVar6,piVar11);
          param_1[2] = param_1[3];
          if (param_2 != 0) {
            *(uint *)(param_1[7] + *param_1 * 4) = uVar6;
          }
          *param_4 = iVar3 + param_2;
          iVar4 = FUN_0001bca8(param_1,*param_1);
          *param_1 = iVar4;
          param_1[4] = param_1[4] | 8;
          *(byte *)(iVar7 + iVar8 * 4) = *(byte *)(iVar7 + iVar8 * 4) & 0xfe;
          *param_3 = iVar9;
        }
        else {
          if (param_2 != 0) {
            FUN_0001bcdc(param_1,param_2);
          }
          iVar7 = FUN_0001bca8(param_1,param_1[1],iVar3);
          param_1[1] = iVar7;
          if (param_1[3] == param_1[2]) {
            iVar7 = FUN_0001bca8(param_1,param_1[3],iVar3,param_1[2],piVar10,iVar4);
            param_1[2] = iVar7;
          }
          *param_1 = param_1[2];
          param_1[3] = param_1[2];
          param_1[4] = param_1[4] | 8;
        }
        goto LAB_0001bd64;
      }
    }
    uVar2 = 0;
  }
  return uVar2;
}



// FUN_0001be04 @ 0001be04 (54 bytes, called_by=0, calls=0)

void FUN_0001be04(int *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_0001bca8();
  iVar1 = (int)((ulonglong)uVar2 >> 0x20);
  if (*param_1 == (int)uVar2) {
    *param_1 = iVar1;
    param_1[4] = param_1[4] & 0xfffffff7;
  }
  else {
    *(uint *)(param_1[7] + iVar1 * 4) = param_3 << 2 | 2;
    iVar1 = FUN_0001bca8(param_1,param_1[1],param_3);
    param_1[1] = iVar1;
  }
  return;
}



// FUN_0001be3a @ 0001be3a (26 bytes, called_by=0, calls=0)

void FUN_0001be3a(int param_1)

{
  uint uVar1;
  uint uVar2;
  
  if (*(int *)(param_1 + 0x10) << 0x1d < 0) {
    uVar2 = *(uint *)(param_1 + 0x24);
    uVar1 = FUN_0001bc86();
    if (uVar1 <= uVar2) {
      *(uint *)(param_1 + 0x24) = uVar2;
    }
    if (uVar1 > uVar2) {
      *(uint *)(param_1 + 0x24) = uVar1;
    }
  }
  return;
}



// FUN_0001be54 @ 0001be54 (98 bytes, called_by=0, calls=0)

/* WARNING: Removing unreachable block (ram,0x00020a38) */

undefined4 FUN_0001be54(int param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  FUN_000168a4(param_1,0,0x1c,param_4,param_4);
  *(undefined4 *)(param_1 + 0x18) = param_2[3];
  *(undefined4 *)(param_1 + 0x14) = param_2[2];
  *(undefined4 *)(param_1 + 0x1c) = *param_2;
  uVar3 = param_2[1];
  *(uint *)(param_1 + 0x20) = uVar3;
  *(undefined4 *)(param_1 + 0x24) = 0;
  uVar2 = param_2[4];
  if ((uVar3 != 0) && ((uVar3 - 1 & uVar3) == 0)) {
    uVar2 = uVar2 | 1;
  }
  *(uint *)(param_1 + 0x10) = uVar2;
  iVar1 = param_1 + 0x28;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 1;
  *(int *)iVar1 = iVar1;
  *(int *)(param_1 + 0x2c) = iVar1;
  *(int *)(param_1 + 0x38) = param_1 + 0x38;
  *(int *)(param_1 + 0x3c) = param_1 + 0x38;
  return 0;
}



// FUN_0001be96 @ 0001be96 (248 bytes, called_by=0, calls=0)

int FUN_0001be96(int *param_1,uint param_2,int param_3,int param_4)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int local_34;
  uint local_30;
  int local_2c [2];
  
  iVar5 = 0;
  local_34 = 0;
  local_2c[0] = 0;
  iVar6 = 0;
  if (param_2 <= (uint)param_1[8]) {
    do {
      uVar7 = 0;
      bVar1 = (bool)isCurrentModePrivileged();
      if (bVar1) {
        uVar7 = getBasePriority();
      }
      bVar1 = (bool)isCurrentModePrivileged();
      if ((bVar1) && (uVar2 = getBasePriority(), uVar2 == 0 || 0x40 < uVar2)) {
        setBasePriority(0x40);
      }
      InstructionSynchronizationBarrier(0xf);
      if (local_2c[0] != 0) {
        FUN_0001be04(param_1,iVar5);
        local_2c[0] = 0;
      }
      uVar3 = FUN_0001bc60(param_1,&local_30);
      uVar2 = local_30;
      if (local_30 < param_2) {
        if (uVar3 == 0) {
          if (param_3 != 0 || param_4 != 0) {
            iVar4 = FUN_00020bc4();
            if (iVar4 == 0) {
              bVar1 = (bool)isCurrentModePrivileged();
              if (bVar1) {
                setBasePriority(uVar7);
              }
              InstructionSynchronizationBarrier(0xf);
              iVar4 = FUN_00014f54(param_1 + 10,uVar2,param_3,param_4);
              uVar7 = 0;
              bVar1 = (bool)isCurrentModePrivileged();
              if (bVar1) {
                uVar7 = getBasePriority();
              }
              bVar1 = (bool)isCurrentModePrivileged();
              if ((bVar1) && (uVar2 = getBasePriority(), uVar2 == 0 || 0x40 < uVar2)) {
                setBasePriority(0x40);
              }
              InstructionSynchronizationBarrier(0xf);
              uVar3 = (uint)(iVar4 == 0);
              goto LAB_0001bf0a;
            }
          }
          iVar5 = *param_1;
          uVar3 = FUN_0001bd16(param_1,uVar2,&local_34,local_2c);
        }
        else {
          FUN_0001bcdc(param_1);
        }
      }
      else {
        iVar4 = *param_1;
        iVar6 = param_1[7];
        *(byte *)(iVar6 + iVar4 * 4) = *(byte *)(iVar6 + iVar4 * 4) & 0xfc;
        iVar6 = iVar6 + iVar4 * 4;
        iVar4 = FUN_0001bca8(param_1,*param_1,param_2);
        *param_1 = iVar4;
        if (iVar4 == param_1[3]) {
          param_1[4] = param_1[4] | 8;
        }
        uVar3 = 0;
      }
LAB_0001bf0a:
      bVar1 = (bool)isCurrentModePrivileged();
      if (bVar1) {
        setBasePriority(uVar7);
      }
      InstructionSynchronizationBarrier(0xf);
      if (local_34 != 0) {
        if ((code *)param_1[5] != (code *)0x0) {
          (*(code *)param_1[5])(param_1);
        }
        local_34 = 0;
      }
    } while (uVar3 != 0);
  }
  return iVar6;
}



// FUN_0001bf8e @ 0001bf8e (62 bytes, called_by=0, calls=0)

void FUN_0001bf8e(int param_1,byte *param_2)

{
  bool bVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar3 = (**(code **)(param_1 + 0x18))(param_2);
  uVar4 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    uVar4 = getBasePriority();
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if ((bVar1) && (uVar2 = getBasePriority(), uVar2 == 0 || 0x40 < uVar2)) {
    setBasePriority(0x40);
  }
  InstructionSynchronizationBarrier(0xf);
  *param_2 = *param_2 | 1;
  uVar3 = FUN_0001bca8(param_1,*(undefined4 *)(param_1 + 4),uVar3);
  *(undefined4 *)(param_1 + 4) = uVar3;
  FUN_0001be3a(param_1);
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(uVar4);
  }
  InstructionSynchronizationBarrier(0xf);
  return;
}



// FUN_0001bfcc @ 0001bfcc (168 bytes, called_by=0, calls=0)

int FUN_0001bfcc(int param_1)

{
  byte bVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  
  while( true ) {
    uVar8 = 0;
    bVar2 = (bool)isCurrentModePrivileged();
    if (bVar2) {
      uVar8 = getBasePriority();
    }
    bVar2 = (bool)isCurrentModePrivileged();
    if ((bVar2) && (uVar6 = getBasePriority(), uVar6 == 0 || 0x40 < uVar6)) {
      setBasePriority(0x40);
    }
    InstructionSynchronizationBarrier(0xf);
    uVar6 = *(uint *)(param_1 + 8);
    if (((*(uint *)(param_1 + 0x10) & 8) != 0) || (uVar5 = *(uint *)(param_1 + 4), uVar5 < uVar6)) {
      uVar5 = *(uint *)(param_1 + 0x20);
    }
    iVar4 = *(int *)(param_1 + 0x1c);
    if (uVar5 == uVar6) break;
    bVar1 = *(byte *)(iVar4 + uVar6 * 4);
    iVar9 = iVar4 + uVar6 * 4;
    if ((bVar1 & 3) == 0) break;
    if (((bVar1 & 3) != 2) || (uVar5 = *(uint *)(iVar4 + uVar6 * 4) >> 2, uVar5 == 0)) {
      if ((int)((uint)bVar1 << 0x1f) < 0) {
        *(byte *)(iVar4 + uVar6 * 4) = bVar1 | 2;
        uVar7 = *(undefined4 *)(param_1 + 8);
        uVar3 = (**(code **)(param_1 + 0x18))(iVar9);
        uVar3 = FUN_0001bca8(param_1,uVar7,uVar3);
        *(undefined4 *)(param_1 + 8) = uVar3;
        bVar2 = (bool)isCurrentModePrivileged();
        if (bVar2) {
          setBasePriority(uVar8);
        }
        InstructionSynchronizationBarrier(0xf);
        return iVar9;
      }
      uVar5 = (**(code **)(param_1 + 0x18))(iVar9);
    }
    uVar3 = FUN_0001bca8(param_1,*(undefined4 *)(param_1 + 8),uVar5);
    *(undefined4 *)(param_1 + 8) = uVar3;
    FUN_0001bcc4(param_1,uVar5);
    bVar2 = (bool)isCurrentModePrivileged();
    if (bVar2) {
      setBasePriority(uVar8);
    }
    InstructionSynchronizationBarrier(0xf);
  }
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    setBasePriority(uVar8);
  }
  InstructionSynchronizationBarrier(0xf);
  return 0;
}



// FUN_0001c074 @ 0001c074 (118 bytes, called_by=0, calls=0)

void FUN_0001c074(int param_1,uint *param_2)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  iVar3 = (**(code **)(param_1 + 0x18))(param_2);
  uVar5 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    uVar5 = getBasePriority();
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if ((bVar1) && (uVar2 = getBasePriority(), uVar2 == 0 || 0x40 < uVar2)) {
    setBasePriority(0x40);
  }
  InstructionSynchronizationBarrier(0xf);
  *(byte *)param_2 = (byte)*param_2 & 0xfe;
  if ((*(int *)(param_1 + 0x10) << 0x1e < 0) &&
     (param_2 != (uint *)(*(int *)(param_1 + 0x1c) + *(int *)(param_1 + 0xc) * 4))) {
    *param_2 = *param_2 & 3 | iVar3 << 2;
  }
  else {
    *(byte *)param_2 = (byte)*param_2 & 0xfd;
    if (*(int *)(param_1 + 0xc) == *(int *)(param_1 + 8)) {
      uVar4 = FUN_0001bca8(param_1,*(int *)(param_1 + 0xc),iVar3);
      *(undefined4 *)(param_1 + 8) = uVar4;
    }
    FUN_0001bcc4(param_1,iVar3);
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(uVar5);
  }
  InstructionSynchronizationBarrier(0xf);
  FUN_00014f08(param_1 + 0x28);
  return;
}



// FUN_0001c152 @ 0001c152 (56 bytes, called_by=0, calls=0)

int FUN_0001c152(int *param_1)

{
  int iVar1;
  ushort uVar2;
  
  uVar2 = *(ushort *)(param_1 + 6) & 7;
  if ((*(ushort *)(param_1 + 6) & 7) == 0) {
    if (*param_1 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = 3;
    }
    return iVar1;
  }
  if (uVar2 != 2) {
    if (uVar2 != 1) {
      return 0;
    }
    if (*param_1 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = 5;
    }
    return iVar1;
  }
  return (uint)(*(short *)((int)param_1 + 0x1a) == 0) << 2;
}



// FUN_0001c18a @ 0001c18a (32 bytes, called_by=0, calls=0)

int FUN_0001c18a(int param_1,int param_2)

{
  int iVar1;
  
  if (((param_1 == 0) || (param_2 == 0)) ||
     ((iVar1 = FUN_0001c342(param_2 + 4), iVar1 == 0 && (3 < *(uint *)(param_2 + 8))))) {
    iVar1 = -0x16;
  }
  return iVar1;
}



// FUN_0001c1aa @ 0001c1aa (44 bytes, called_by=0, calls=0)

void FUN_0001c1aa(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = (code *)FUN_0001c36a(param_2 + 4,param_4);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001c1d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3,param_4);
    return;
  }
  return;
}



// FUN_0001c1d6 @ 0001c1d6 (26 bytes, called_by=0, calls=0)

void FUN_0001c1d6(int param_1,undefined4 param_2)

{
  bool bVar1;
  uint uVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    uVar3 = getBasePriority();
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if ((bVar1) && (uVar2 = getBasePriority(), uVar2 == 0 || 0x40 < uVar2)) {
    setBasePriority(0x40);
  }
  InstructionSynchronizationBarrier(0xf);
  *(undefined4 *)(param_1 + 0x14) = param_2;
  FUN_00006b98(param_1,1,uVar3);
  return;
}



// FUN_0001c1f0 @ 0001c1f0 (38 bytes, called_by=0, calls=0)

undefined4 FUN_0001c1f0(int param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  if ((((param_1 == 0) || (param_2 == (int *)0x0)) || (*param_2 == 0)) || (param_2[1] == 0)) {
    uVar1 = 0xffffffea;
  }
  else {
    FUN_000168a4(param_1,0,0x1c,param_2[1],param_4);
    *(int **)(param_1 + 0x10) = param_2;
    uVar1 = 0;
  }
  return uVar1;
}



// FUN_0001c216 @ 0001c216 (166 bytes, called_by=0, calls=0)

uint FUN_0001c216(undefined4 *param_1,undefined4 *param_2)

{
  ushort uVar1;
  bool bVar2;
  uint uVar3;
  undefined4 uVar4;
  
  uVar3 = FUN_0001c18a();
  if (-1 < (int)uVar3) {
    uVar4 = 0;
    bVar2 = (bool)isCurrentModePrivileged();
    if (bVar2) {
      uVar4 = getBasePriority();
    }
    bVar2 = (bool)isCurrentModePrivileged();
    if ((bVar2) && (uVar3 = getBasePriority(), uVar3 == 0 || 0x40 < uVar3)) {
      setBasePriority(0x40);
    }
    InstructionSynchronizationBarrier(0xf);
    uVar1 = *(ushort *)(param_1 + 6);
    uVar3 = uVar1 & 7;
    if (*(short *)((int)param_1 + 0x1a) == -1) {
      bVar2 = (bool)isCurrentModePrivileged();
      if (bVar2) {
        setBasePriority(uVar4);
      }
      InstructionSynchronizationBarrier(0xf);
      uVar3 = 0xfffffff5;
    }
    else if (uVar3 == 2) {
      *(short *)((int)param_1 + 0x1a) = *(short *)((int)param_1 + 0x1a) + 1;
      bVar2 = (bool)isCurrentModePrivileged();
      if (bVar2) {
        setBasePriority(uVar4);
      }
      InstructionSynchronizationBarrier(0xf);
      FUN_0001c1aa(param_1,param_2,2,0);
    }
    else {
      switch(uVar3) {
      case 0:
      case 4:
      case 6:
        *param_2 = 0;
        if ((undefined4 *)param_1[1] == (undefined4 *)0x0) {
          *param_1 = param_2;
          param_1[1] = param_2;
        }
        else {
          *(undefined4 *)param_1[1] = param_2;
          param_1[1] = param_2;
        }
        if ((uVar1 & 7) == 0) {
          FUN_00006b98(param_1,2,uVar4);
        }
        else {
          bVar2 = (bool)isCurrentModePrivileged();
          if (bVar2) {
            setBasePriority(uVar4);
          }
          InstructionSynchronizationBarrier(0xf);
        }
        break;
      default:
        bVar2 = (bool)isCurrentModePrivileged();
        if (bVar2) {
          setBasePriority(uVar4);
        }
        InstructionSynchronizationBarrier(0xf);
        uVar3 = 0xfffffffb;
        break;
      case 5:
        bVar2 = (bool)isCurrentModePrivileged();
        if (bVar2) {
          setBasePriority(uVar4);
        }
        InstructionSynchronizationBarrier(0xf);
        uVar3 = 0xffffff7a;
      }
    }
  }
  return uVar3;
}



// FUN_0001c342 @ 0001c342 (40 bytes, called_by=0, calls=0)

undefined4 FUN_0001c342(int *param_1)

{
  uint uVar1;
  
  if (param_1 != (int *)0x0) {
    uVar1 = param_1[1] & 3;
    if ((uVar1 == 2) || (uVar1 == 3)) {
      if (*param_1 != 0) goto LAB_0001c364;
    }
    else if (uVar1 == 1) {
LAB_0001c364:
      param_1[2] = 0;
      return 0;
    }
  }
  return 0xffffffea;
}



// FUN_0001c36a @ 0001c36a (50 bytes, called_by=0, calls=0)

int FUN_0001c36a(int *param_1,int param_2)

{
  param_1[2] = param_2;
  if ((param_1[1] & 3U) == 2) {
    param_1[1] = 0;
    if (*param_1 != 0) {
      FUN_0001602c();
    }
  }
  else {
    if ((param_1[1] & 3U) == 3) {
      param_1[1] = 0;
      return *param_1;
    }
    param_1[1] = 0;
  }
  return 0;
}



// FUN_0001c39c @ 0001c39c (62 bytes, called_by=0, calls=0)

void FUN_0001c39c(int *param_1,int *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  iVar4 = param_1[3];
  iVar3 = param_1[1];
  uVar2 = param_1[7];
  uVar5 = iVar3 - iVar4;
  uVar6 = uVar5;
  if (uVar2 <= uVar5) {
    uVar6 = uVar5 - uVar2;
  }
  if (uVar2 <= uVar5) {
    iVar4 = iVar4 + uVar2;
  }
  uVar5 = uVar2 - (iVar3 - param_1[5]);
  if (param_3 <= uVar5) {
    uVar5 = param_3;
  }
  *param_2 = *param_1 + (iVar3 - iVar4);
  uVar1 = uVar2 - uVar6;
  if (uVar5 <= uVar2 - uVar6) {
    uVar1 = uVar5;
  }
  param_1[1] = param_1[1] + uVar1;
  return;
}



// FUN_0001c3da @ 0001c3da (42 bytes, called_by=0, calls=0)

undefined4 FUN_0001c3da(int param_1,uint param_2)

{
  int iVar1;
  
  if (param_2 <= (uint)(*(int *)(param_1 + 4) - *(int *)(param_1 + 8))) {
    iVar1 = param_2 + *(int *)(param_1 + 8);
    *(int *)(param_1 + 4) = iVar1;
    *(int *)(param_1 + 8) = iVar1;
    if (*(uint *)(param_1 + 0x1c) <= (uint)(iVar1 - *(int *)(param_1 + 0xc))) {
      *(uint *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + *(uint *)(param_1 + 0x1c);
    }
    return 0;
  }
  return 0xffffffea;
}



// FUN_0001c404 @ 0001c404 (62 bytes, called_by=0, calls=0)

int FUN_0001c404(undefined4 param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int local_1c;
  
  iVar2 = 0;
  uVar3 = param_1;
  local_1c = param_2;
  do {
    iVar1 = FUN_0001c39c(param_1,&local_1c,param_3,param_4,uVar3);
    FUN_00000820(local_1c,param_2,iVar1);
    param_3 = param_3 - iVar1;
    iVar2 = iVar2 + iVar1;
    param_2 = param_2 + iVar1;
    if (param_3 == 0) break;
  } while (iVar1 != 0);
  FUN_0001c3da(param_1,iVar2);
  return iVar2;
}



// FUN_0001c442 @ 0001c442 (64 bytes, called_by=0, calls=0)

void FUN_0001c442(int *param_1,int *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  iVar5 = param_1[6];
  iVar4 = param_1[4];
  uVar1 = param_1[7];
  uVar6 = iVar4 - iVar5;
  if (uVar1 <= uVar6) {
    iVar5 = iVar5 + uVar1;
  }
  if (uVar1 <= uVar6) {
    uVar6 = uVar6 - uVar1;
  }
  uVar3 = param_1[2] - iVar4;
  if (param_3 <= (uint)(param_1[2] - iVar4)) {
    uVar3 = param_3;
  }
  *param_2 = *param_1 + (iVar4 - iVar5);
  uVar2 = uVar1 - uVar6;
  if (uVar3 <= uVar1 - uVar6) {
    uVar2 = uVar3;
  }
  param_1[4] = param_1[4] + uVar2;
  return;
}



// FUN_0001c482 @ 0001c482 (42 bytes, called_by=0, calls=0)

undefined4 FUN_0001c482(int param_1,uint param_2)

{
  int iVar1;
  
  if (param_2 <= (uint)(*(int *)(param_1 + 0x10) - *(int *)(param_1 + 0x14))) {
    iVar1 = param_2 + *(int *)(param_1 + 0x14);
    *(int *)(param_1 + 0x10) = iVar1;
    *(int *)(param_1 + 0x14) = iVar1;
    if (*(uint *)(param_1 + 0x1c) <= (uint)(iVar1 - *(int *)(param_1 + 0x18))) {
      *(uint *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + *(uint *)(param_1 + 0x1c);
    }
    return 0;
  }
  return 0xffffffea;
}



// FUN_0001c4ac @ 0001c4ac (64 bytes, called_by=0, calls=0)

int FUN_0001c4ac(undefined4 param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int local_1c;
  
  iVar2 = 0;
  uVar3 = param_1;
  local_1c = param_2;
  do {
    iVar1 = FUN_0001c442(param_1,&local_1c,param_3,param_4,uVar3);
    if (param_2 != 0) {
      FUN_00000820(param_2,local_1c,iVar1);
      param_2 = param_2 + iVar1;
    }
    param_3 = param_3 - iVar1;
    iVar2 = iVar2 + iVar1;
  } while ((param_3 != 0) && (iVar1 != 0));
  FUN_0001c482(param_1,iVar2);
  return iVar2;
}



// FUN_0001c4ee @ 0001c4ee (28 bytes, called_by=0, calls=0)

void FUN_0001c4ee(int *param_1,uint param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001c508. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined4 **)(param_1[10] + 8))
            (param_1[10],
             (param_2 >> 0x10) * (uint)*(ushort *)(param_1 + 3) + *param_1 + (param_2 & 0xffff));
  return;
}



// FUN_0001c50a @ 0001c50a (86 bytes, called_by=0, calls=0)

int FUN_0001c50a(int param_1,int param_2,uint param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  byte *pbVar3;
  uint uVar4;
  uint uVar5;
  byte local_40 [36];
  
  uVar4 = -**(int **)(param_1 + 0x2c) & 0x20;
  while( true ) {
    if (param_4 == 0) {
      return 0;
    }
    uVar5 = param_4;
    if (uVar4 <= param_4) {
      uVar5 = uVar4;
    }
    iVar1 = FUN_0001c4ee(param_1,param_2,local_40,uVar5);
    if (iVar1 != 0) break;
    pbVar3 = local_40;
    for (uVar2 = 0; uVar2 != uVar5; uVar2 = uVar2 + 1) {
      if (*pbVar3 != param_3) {
        return 1;
      }
      pbVar3 = pbVar3 + 1;
    }
    param_4 = param_4 - uVar2;
    param_2 = param_2 + uVar2;
  }
  return iVar1;
}



// FUN_0001c560 @ 0001c560 (26 bytes, called_by=0, calls=0)

void FUN_0001c560(int param_1,uint *param_2)

{
  uint uVar1;
  
  uVar1 = *param_2 + 0x10000;
  *param_2 = uVar1;
  if ((uint)*(ushort *)(param_1 + 0xe) == uVar1 >> 0x10) {
    *param_2 = uVar1 - (uVar1 & 0xffff0000);
  }
  return;
}



// thunk_FUN_0001cab2 @ 0001c57a (4 bytes, called_by=0, calls=0)

void thunk_FUN_0001cab2(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  uStack_c = param_3;
  uStack_8 = param_3;
  FUN_0001ca44(param_1,param_2,&uStack_c,1,param_1);
  return;
}



// FUN_0001c57e @ 0001c57e (50 bytes, called_by=0, calls=0)

int FUN_0001c57e(int *param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_0001d828(param_1[10],(uint)*(ushort *)(param_1 + 3) * (param_2 >> 0x10) + *param_1,
                       (uint)*(ushort *)(param_1 + 3),*param_1,param_4);
  if ((iVar1 == 0) &&
     (iVar1 = FUN_0001c50a(param_1,param_2 & 0xffff0000,*(undefined1 *)(param_1[0xb] + 5),
                           (short)param_1[3]), iVar1 != 0)) {
    iVar1 = -6;
  }
  return iVar1;
}



// FUN_0001c5b0 @ 0001c5b0 (18 bytes, called_by=0, calls=0)

void FUN_0001c5b0(int param_1)

{
  undefined1 uVar1;
  
  uVar1 = FUN_000055d8(0xff,param_1,7);
  *(undefined1 *)(param_1 + 7) = uVar1;
  return;
}



// FUN_0001c5c2 @ 0001c5c2 (20 bytes, called_by=0, calls=0)

uint FUN_0001c5c2(uint *param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = *param_1;
  if (1 < uVar1) {
    param_2 = (param_2 + uVar1) - 1 & -uVar1;
  }
  return param_2;
}



// FUN_0001c5d6 @ 0001c5d6 (62 bytes, called_by=0, calls=0)

undefined4 FUN_0001c5d6(int param_1,int param_2)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  
  iVar3 = FUN_0001c5c2(*(undefined4 *)(param_1 + 0x2c),8);
  uVar1 = *(ushort *)(param_2 + 2);
  uVar2 = *(ushort *)(param_2 + 4);
  uVar4 = FUN_000055d8(0xff,param_2,7);
  if (*(byte *)(param_2 + 7) == uVar4) {
    if ((uint)uVar1 + (uint)uVar2 < (uint)*(ushort *)(param_1 + 0xc) - iVar3) {
      uVar5 = 1;
    }
    else {
      uVar5 = 0;
    }
  }
  else {
    uVar5 = 0;
  }
  return uVar5;
}



// FUN_0001c614 @ 0001c614 (60 bytes, called_by=0, calls=0)

uint FUN_0001c614(int param_1,short *param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = FUN_0001c5d6();
  if (uVar1 != 0) {
    if (param_2[2] == 0) {
      uVar1 = 0;
      if (*param_2 == -1) {
        uVar1 = FUN_0001c5c2(*(undefined4 *)(param_1 + 0x2c),8,0xffff,0xffff,param_4);
        uVar2 = (uint)*(ushort *)(param_1 + 0xc) - (uint)(ushort)param_2[1];
        uVar1 = (uint)(uVar2 == (uVar2 / uVar1) * uVar1);
      }
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}



// FUN_0001c650 @ 0001c650 (148 bytes, called_by=0, calls=0)

int FUN_0001c650(uint param_1,uint *param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  uint uStack_20;
  uint *puStack_1c;
  undefined4 uStack_18;
  
  uStack_20 = param_1;
  puStack_1c = param_2;
  uStack_18 = param_3;
  iVar1 = FUN_0001c5c2(*(undefined4 *)(param_1 + 0x2c),8);
  iVar2 = FUN_0001c4ee(param_1,*param_2);
  iVar3 = iVar2;
  if (iVar2 == 0) {
    uVar4 = *param_2 + iVar1;
    *param_2 = uVar4;
    if ((uVar4 & 0xffff) == (uint)*(ushort *)(param_1 + 0xc) - iVar1) {
      if (uVar4 >> 0x10 == 0) {
        uVar4 = uVar4 + (*(ushort *)(param_1 + 0xe) - 1) * 0x10000;
      }
      else {
        uVar4 = uVar4 - 0x10000;
      }
      *param_2 = uVar4;
      iVar3 = FUN_0001c4ee(param_1,uVar4,&uStack_20,8);
      if (iVar3 == 0) {
        iVar3 = 0;
        puVar5 = &uStack_20;
        do {
          if (*(char *)(*(int *)(param_1 + 0x2c) + 5) != (char)*puVar5) {
            iVar3 = FUN_0001c614(param_1,&uStack_20);
            if (iVar3 == 0) {
              iVar3 = FUN_00006db4(param_1,param_2);
              return iVar3;
            }
            uVar4 = (*param_2 & 0xffff0000) + (uStack_20 >> 0x10);
            goto LAB_0001c6c4;
          }
          iVar3 = iVar3 + 1;
          puVar5 = (uint *)((int)puVar5 + 1);
        } while (iVar3 != 8);
        uVar4 = *(uint *)(param_1 + 4);
LAB_0001c6c4:
        *param_2 = uVar4;
        iVar3 = iVar2;
      }
    }
  }
  return iVar3;
}



// FUN_0001c6e4 @ 0001c6e4 (114 bytes, called_by=0, calls=0)

int FUN_0001c6e4(int *param_1,uint param_2,int param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  undefined1 auStack_40 [36];
  
  if (param_4 == 0) {
LAB_0001c6f2:
    iVar1 = 0;
  }
  else {
    iVar1 = (param_2 >> 0x10) * (uint)*(ushort *)(param_1 + 3) + *param_1 + (param_2 & 0xffff);
    uVar3 = -*(int *)param_1[0xb] & param_4;
    if (uVar3 != 0) {
      iVar2 = (**(code **)(*(int *)(param_1[10] + 8) + 4))(param_1[10],iVar1,param_3,uVar3);
      if (iVar2 != 0) {
        return iVar2;
      }
      param_4 = param_4 - uVar3;
      if (param_4 == 0) goto LAB_0001c6f2;
      iVar1 = iVar1 + uVar3;
      param_3 = param_3 + uVar3;
    }
    FUN_00000820(auStack_40,param_3,param_4);
    piVar4 = (int *)param_1[0xb];
    FUN_000168a4(auStack_40 + param_4,*(undefined1 *)((int)piVar4 + 5),*piVar4 - param_4);
    iVar1 = (**(code **)(*(int *)(param_1[10] + 8) + 4))(param_1[10],iVar1,auStack_40,*piVar4);
  }
  return iVar1;
}



// FUN_0001c756 @ 0001c756 (34 bytes, called_by=0, calls=0)

undefined4 FUN_0001c756(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_0001c6e4(param_1,*(undefined4 *)(param_1 + 4),param_2,8);
  iVar2 = FUN_0001c5c2(*(undefined4 *)(param_1 + 0x2c),8,uVar1);
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) - iVar2;
  return uVar1;
}



// FUN_0001c778 @ 0001c778 (46 bytes, called_by=0, calls=0)

void FUN_0001c778(int param_1,undefined4 param_2)

{
  undefined2 local_10;
  undefined2 local_e;
  undefined3 local_c;
  undefined1 uStack_9;
  
  _local_c = CONCAT13((char)((uint)param_2 >> 0x18),0xff0000);
  _local_10 = CONCAT22((short)*(undefined4 *)(param_1 + 8),0xffff);
  FUN_0001c5b0(&local_10);
  FUN_0001c756(param_1,&local_10);
  return;
}



// FUN_0001c7a6 @ 0001c7a6 (410 bytes, called_by=0, calls=0)

int FUN_0001c7a6(int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint local_6c;
  uint local_68;
  uint local_64;
  char acStack_60 [2];
  ushort local_5e;
  short local_58;
  ushort local_56;
  ushort local_54;
  short local_50 [4];
  undefined1 auStack_48 [36];
  
  iVar3 = FUN_0001c5c2(*(undefined4 *)(param_1 + 0x2c),8);
  local_6c = *(uint *)(param_1 + 4) & 0xffff0000;
  FUN_0001c560(param_1,&local_6c);
  uVar1 = local_6c;
  uVar8 = (*(ushort *)(param_1 + 0xc) + local_6c) - iVar3;
  local_68 = uVar8;
  iVar4 = FUN_0001c4ee(param_1,uVar8,acStack_60,8);
  if (iVar4 < 0) {
    return iVar4;
  }
  iVar4 = 0;
  pcVar7 = acStack_60;
  while (*(char *)(*(int *)(param_1 + 0x2c) + 5) == *pcVar7) {
    iVar4 = iVar4 + 1;
    pcVar7 = pcVar7 + 1;
    if (iVar4 == 8) goto LAB_0001c7fe;
  }
  iVar4 = FUN_0001c614(param_1,acStack_60);
  if (iVar4 == 0) {
    iVar4 = FUN_00006db4(param_1,&local_68);
    if (iVar4 != 0) {
      return iVar4;
    }
  }
  else {
    local_68 = (uVar8 & 0xffff0000) + (uint)local_5e;
  }
  do {
    uVar2 = local_68;
    iVar4 = FUN_0001c650(param_1,&local_68,&local_58);
    if (iVar4 != 0) {
      return iVar4;
    }
    iVar4 = FUN_0001c5d6(param_1,&local_58);
    if (iVar4 != 0) {
      local_64 = *(uint *)(param_1 + 4);
      do {
        uVar9 = local_64;
        iVar4 = FUN_0001c650(param_1,&local_64,local_50);
        if (iVar4 != 0) {
          return iVar4;
        }
      } while (((local_50[0] != local_58) || (iVar4 = FUN_0001c5d6(param_1,local_50), iVar4 == 0))
              && (*(uint *)(param_1 + 4) != local_64));
      if ((uVar9 == uVar2) && (local_54 != 0)) {
        iVar4 = (uint)local_56 + (uVar2 & 0xffff0000);
        local_56 = (ushort)*(undefined4 *)(param_1 + 8);
        FUN_0001c5b0(&local_58);
        uVar9 = -**(int **)(param_1 + 0x2c) & 0x20;
        for (uVar11 = (uint)local_54; uVar11 != 0; uVar11 = uVar11 - uVar10) {
          uVar10 = uVar9;
          if (uVar11 <= uVar9) {
            uVar10 = uVar11;
          }
          iVar5 = FUN_0001c4ee(param_1,iVar4,auStack_48,uVar10);
          if (iVar5 != 0) {
            return iVar5;
          }
          iVar5 = FUN_0001c6e4(param_1,*(undefined4 *)(param_1 + 8),auStack_48,uVar10);
          iVar6 = FUN_0001c5c2(*(undefined4 *)(param_1 + 0x2c),uVar10);
          *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + iVar6;
          if (iVar5 != 0) {
            return iVar5;
          }
          iVar4 = iVar4 + uVar10;
        }
        iVar4 = FUN_0001c756(param_1,&local_58);
        if (iVar4 != 0) {
          return iVar4;
        }
      }
    }
  } while (uVar2 != uVar8 - iVar3);
LAB_0001c7fe:
  if ((*(uint *)(param_1 + 4) < (uint)(*(int *)(param_1 + 8) + iVar3)) ||
     (iVar3 = FUN_0001c778(param_1), iVar3 == 0)) {
    iVar3 = FUN_0001c57e(param_1,uVar1);
  }
  return iVar3;
}



// FUN_0001c940 @ 0001c940 (8 bytes, called_by=0, calls=0)

void FUN_0001c940(undefined4 param_1,undefined4 param_2)

{
  FUN_00007220(param_1,param_2,0);
  return;
}



// FUN_0001c948 @ 0001c948 (14 bytes, called_by=0, calls=0)

void FUN_0001c948(void)

{
  FUN_000073d4();
  return;
}



// FUN_0001c97e @ 0001c97e (26 bytes, called_by=0, calls=0)

void FUN_0001c97e(int *param_1)

{
  bool bVar1;
  
  DataMemoryBarrier(0x1b);
  do {
    ExclusiveAccess(param_1);
    bVar1 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar1);
  *param_1 = *param_1 + 1;
  DataMemoryBarrier(0x1b);
  return;
}



// FUN_0001c998 @ 0001c998 (28 bytes, called_by=0, calls=0)

void FUN_0001c998(undefined4 param_1,undefined4 param_2)

{
  FUN_00007c70(0,0,0,0,0,0,param_1,param_2);
  return;
}



// FUN_0001c9ba @ 0001c9ba (4 bytes, called_by=0, calls=0)

undefined4 FUN_0001c9ba(void)

{
  return 0;
}



// FUN_0001c9be @ 0001c9be (16 bytes, called_by=0, calls=0)

void FUN_0001c9be(int param_1)

{
  uint uVar1;
  
  if (param_1 == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = (uint)*(byte *)(*(int *)(param_1 + 4) + 4);
  }
  FUN_000079f4(uVar1);
  return;
}



// FUN_0001c9ce @ 0001c9ce (24 bytes, called_by=0, calls=0)

void FUN_0001c9ce(int param_1)

{
  if (*(char *)(*(int *)(param_1 + 4) + 5) != '\0') {
    FUN_00007ab0(param_1,0);
  }
  *(undefined1 *)(*(int *)(param_1 + 4) + 5) = 0;
  return;
}



// FUN_0001c9e6 @ 0001c9e6 (44 bytes, called_by=0, calls=0)

uint FUN_0001c9e6(undefined4 param_1,uint param_2,int *param_3)

{
  if ((uint)(param_3[1] - param_3[2]) < param_2) {
    param_2 = 0xffffffe4;
  }
  else {
    FUN_00000820(*param_3 + param_3[2],param_1,param_2);
    param_3[2] = param_3[2] + param_2;
  }
  return param_2;
}



// FUN_0001ca12 @ 0001ca12 (50 bytes, called_by=0, calls=0)

/* WARNING: Removing unreachable block (ram,0x0000765c) */
/* WARNING: Removing unreachable block (ram,0x00007662) */
/* WARNING: Removing unreachable block (ram,0x00007668) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0001ca12(uint *param_1,uint param_2,uint param_3,int param_4)

{
  bool bVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 unaff_r4;
  undefined4 in_lr;
  undefined8 uVar4;
  
  if (param_1 == (uint *)0x0) {
    FUN_0001c97e(_DAT_00007684);
    FUN_00020f72(_DAT_0000768c);
    FUN_00014f08(_DAT_00007690);
    return;
  }
  if (param_4 != 0) {
    FUN_00000820((int)param_1 + ((param_3 << 0xc) >> 0x15) + 0x10,param_4,param_3 >> 0x14);
  }
  *param_1 = param_3;
  param_1[1] = param_2;
  uVar2 = (*(code *)*_DAT_00007994)();
  param_1[2] = uVar2;
  FUN_0001bf8e(_DAT_00007998,param_1);
  uVar4 = FUN_0001c97e(_DAT_00007964);
  if (*_DAT_00007968 == '\0') {
    if (*_DAT_0000796c != 0) {
      if ((int)uVar4 == 0) {
        FUN_00015eb4(_DAT_00007970,(int)((ulonglong)uVar4 >> 0x20),0x21,0,0,0,unaff_r4,in_lr);
      }
      else if ((int)uVar4 == 9) {
        FUN_00020f72(_DAT_00007970);
        FUN_00014f08(_DAT_00007974);
        return;
      }
    }
  }
  else {
    uVar3 = 0;
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      uVar3 = getBasePriority();
    }
    bVar1 = (bool)isCurrentModePrivileged();
    if ((bVar1) && (uVar2 = getBasePriority(), uVar2 == 0 || 0x40 < uVar2)) {
      setBasePriority(0x40);
    }
    InstructionSynchronizationBarrier(0xf);
    FUN_00007774();
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      setBasePriority(uVar3);
    }
    InstructionSynchronizationBarrier(0xf);
  }
  return;
}



// FUN_0001ca44 @ 0001ca44 (110 bytes, called_by=0, calls=0)

void FUN_0001ca44(undefined4 param_1,uint param_2,uint *param_3,int param_4)

{
  int iVar1;
  uint *puVar2;
  uint *puVar4;
  uint uVar5;
  uint local_1c;
  uint *puVar3;
  
  uVar5 = param_4 + 1;
  iVar1 = FUN_0000773c((uVar5 * 4 + 0x17 & 0xfffffff8) >> 2);
  local_1c = uVar5 & 0xff;
  if (iVar1 != 0) {
    puVar4 = (uint *)(iVar1 + 0x10);
    *puVar4 = local_1c;
    puVar2 = param_3;
    do {
      puVar3 = puVar2 + 1;
      puVar4 = puVar4 + 1;
      *puVar4 = *puVar2;
      puVar2 = puVar3;
    } while (puVar3 != param_3 + param_4);
  }
  FUN_0001ca12(iVar1,param_1,(param_2 & 7) << 6 | uVar5 * 0x800 & 0xfffff,0);
  return;
}



// FUN_0001cab2 @ 0001cab2 (18 bytes, called_by=0, calls=0)

void FUN_0001cab2(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 local_c;
  undefined4 uStack_8;
  
  local_c = param_3;
  uStack_8 = param_3;
  FUN_0001ca44(param_1,param_2,&local_c,1,param_1);
  return;
}



// FUN_0001cac4 @ 0001cac4 (20 bytes, called_by=0, calls=0)

void FUN_0001cac4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 local_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  local_10 = param_3;
  uStack_c = param_4;
  uStack_8 = param_3;
  FUN_0001ca44(param_1,param_2,&local_10,2);
  return;
}



// FUN_0001cad8 @ 0001cad8 (24 bytes, called_by=0, calls=0)

void FUN_0001cad8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined4 local_14;
  undefined4 uStack_10;
  undefined4 local_c;
  
  local_c = param_5;
  local_14 = param_3;
  uStack_10 = param_4;
  FUN_0001ca44(param_1,param_2,&local_14,3,param_1);
  return;
}



// FUN_0001caf0 @ 0001caf0 (28 bytes, called_by=0, calls=0)

void FUN_0001caf0(code *param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  
  for (; param_3 != 0; param_3 = param_3 - iVar1) {
    iVar1 = (*param_1)(param_2,param_3,param_4);
    param_2 = param_2 + iVar1;
  }
  return;
}



// FUN_0001cb0c @ 0001cb0c (26 bytes, called_by=0, calls=0)

void FUN_0001cb0c(undefined4 *param_1)

{
  FUN_0001caf0(*param_1,param_1[2],*(undefined4 *)param_1[1],((undefined4 *)param_1[1])[1]);
  *(undefined4 *)param_1[1] = 0;
  return;
}



// FUN_0001cb26 @ 0001cb26 (14 bytes, called_by=0, calls=0)

void FUN_0001cb26(void)

{
  FUN_00005e64();
  return;
}



// FUN_0001cb34 @ 0001cb34 (54 bytes, called_by=0, calls=0)

undefined4 FUN_0001cb34(undefined1 param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  
  if (**(int **)(param_2 + 4) == *(int *)(param_2 + 0xc)) {
    FUN_0001cb0c(param_2);
  }
  piVar3 = *(int **)(param_2 + 4);
  DataMemoryBarrier(0x1b);
  do {
    ExclusiveAccess(piVar3);
    iVar2 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar2 + 1;
  DataMemoryBarrier(0x1b);
  *(undefined1 *)(*(int *)(param_2 + 8) + iVar2) = param_1;
  return 0;
}



// FUN_0001cb86 @ 0001cb86 (106 bytes, called_by=0, calls=0)

void FUN_0001cb86(undefined4 param_1,ushort *param_2,undefined4 param_3)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  undefined4 uVar4;
  ushort *puVar5;
  uint uVar6;
  undefined4 uVar7;
  
  uVar1 = *param_2;
  uVar2 = *param_2;
  uVar7 = *(undefined4 *)(param_2 + 4);
  iVar3 = FUN_00007d20(param_2);
  if (iVar3 < 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_0000799c(((uint)(byte)uVar2 << 0x1a) >> 0x1d);
  }
  puVar5 = param_2 + 8;
  uVar6 = (uint)(*(int *)param_2 << 0xc) >> 0x15;
  iVar3 = (int)puVar5 + uVar6;
  if (uVar6 == 0) {
    puVar5 = (ushort *)0x0;
  }
  FUN_00007d78(param_1,uVar7,0,uVar4,0,((uint)uVar1 << 0x17) >> 0x1d,puVar5,iVar3,
               ((uint)param_2[1] << 0x10) >> 0x14,param_3);
  return;
}



// FUN_0001cbf0 @ 0001cbf0 (2 bytes, called_by=0, calls=0)

void FUN_0001cbf0(void)

{
  return;
}



// FUN_0001cbf2 @ 0001cbf2 (68 bytes, called_by=0, calls=0)

undefined4 FUN_0001cbf2(uint *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = *(uint *)(param_2 + 4);
  uVar3 = *param_1;
  if (uVar3 < uVar4) {
LAB_0001cbfc:
    uVar1 = 1;
  }
  else {
    if (uVar3 < *(int *)(param_2 + 8) + uVar4) {
      iVar2 = *(int *)(param_2 + 0xc);
      if (*(uint *)(param_2 + 0x10) < *(uint *)(param_2 + 0x14)) {
        *(uint *)(iVar2 + *(uint *)(param_2 + 0x10) * 8) = uVar3 - uVar4;
        *(uint *)(iVar2 + *(int *)(param_2 + 0x10) * 8 + 4) = param_1[1];
        *(int *)(param_2 + 0x10) = *(int *)(param_2 + 0x10) + 1;
        goto LAB_0001cbfc;
      }
      *(undefined4 *)(param_2 + 0x18) = 0xfffffff4;
    }
    uVar1 = 0;
  }
  return uVar1;
}



// FUN_0001cc36 @ 0001cc36 (8 bytes, called_by=0, calls=0)

void FUN_0001cc36(undefined4 param_1)

{
  FUN_000082bc(param_1,0);
  return;
}



// FUN_0001cc3e @ 0001cc3e (72 bytes, called_by=0, calls=0)

bool FUN_0001cc3e(char *param_1,int param_2,undefined4 *param_3)

{
  char cVar1;
  char *pcVar2;
  
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = 0;
  }
  if (param_1 != (char *)0x0) {
    if (param_2 == 0) {
      return false;
    }
    pcVar2 = (char *)(param_2 + -1);
    do {
      pcVar2 = pcVar2 + 1;
      cVar1 = *pcVar2;
      if (cVar1 == '\0') {
        cVar1 = *param_1;
        if (cVar1 == '/') {
          if (param_3 != (undefined4 *)0x0) {
            *param_3 = param_1 + 1;
          }
        }
        else if (cVar1 != '=') {
          return cVar1 == '\0';
        }
        return true;
      }
    } while ((cVar1 == *param_1) && (param_1 = param_1 + 1, cVar1 != '='));
  }
  return false;
}



// FUN_0001cc8a @ 0001cc8a (24 bytes, called_by=0, calls=0)

int FUN_0001cc8a(undefined4 *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  iVar1 = FUN_0001c948(*param_1,*(undefined2 *)(param_1 + 1),param_2,param_3);
  if (param_3 <= iVar1) {
    iVar1 = param_3;
  }
  return iVar1;
}



// FUN_0001cca2 @ 0001cca2 (280 bytes, called_by=0, calls=0)

uint FUN_0001cca2(int param_1,short *param_2,int param_3,int param_4)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  ushort uVar7;
  ushort uVar8;
  ushort uVar9;
  int iVar10;
  undefined1 auStack_74 [80];
  
  if (param_2 == (short *)0x0) {
    return 0xffffffea;
  }
  bVar1 = param_3 == 0;
  bVar2 = param_4 == 0;
  bVar3 = bVar1 || bVar2;
  uVar7 = *(short *)(param_1 + 0x38) + 1;
  iVar10 = param_1 + 8;
  uVar9 = uVar7;
  do {
    while( true ) {
      uVar8 = uVar7;
      uVar7 = uVar8 - 1;
      if (uVar7 == 0x8000) {
        if (bVar1 || bVar2) {
          return 0;
        }
        bVar3 = true;
        uVar7 = uVar9;
        goto LAB_0001cd5a;
      }
      iVar4 = FUN_0001c948(iVar10,uVar7,auStack_74,0x4a);
      if (-1 < iVar4) break;
      if (iVar4 == -2) {
        uVar9 = uVar7;
      }
    }
    auStack_74[iVar4] = 0;
    iVar4 = FUN_00000228(param_2,auStack_74);
  } while (iVar4 != 0);
  if (bVar1 || bVar2) {
    uVar5 = FUN_0001c940(iVar10,uVar7);
    if ((int)uVar5 < 0) {
      return uVar5;
    }
    uVar5 = FUN_0001c940(iVar10,uVar8 + 0x3fff);
    if ((int)uVar5 < 0) {
      return uVar5;
    }
    if (*(ushort *)(param_1 + 0x38) == uVar7) {
      param_2 = (short *)(param_1 + 0x38);
      *param_2 = *(ushort *)(param_1 + 0x38) - 1;
      uVar7 = 0x8000;
      uVar6 = 2;
LAB_0001cd4e:
      uVar5 = FUN_00007220(param_1 + 8,uVar7,param_2,uVar6);
      return uVar5 & (int)uVar5 >> 0x1f;
    }
  }
  else {
LAB_0001cd5a:
    if (uVar7 == 0xc000) {
      return 0xfffffff4;
    }
    if (*(ushort *)(param_1 + 0x38) < uVar7) {
      *(ushort *)(param_1 + 0x38) = uVar7;
      uVar5 = FUN_00007220(param_1 + 8,0x8000,(ushort *)(param_1 + 0x38),2);
      if ((int)uVar5 < 0) {
        return uVar5;
      }
    }
    uVar5 = FUN_00007220(param_1 + 8,uVar7 + 0x4000,param_3,param_4);
    if ((int)uVar5 < 0) {
      return uVar5;
    }
    if (bVar3) {
      uVar6 = FUN_00000140(param_2);
      goto LAB_0001cd4e;
    }
  }
  return 0;
}



// FUN_0001cdba @ 0001cdba (66 bytes, called_by=0, calls=0)

int FUN_0001cdba(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uStack_14;
  
  *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x3c);
  if (*(int *)(param_1 + 0x3c) == 0) {
    iVar1 = -0x13;
  }
  else {
    iVar2 = param_1;
    uStack_14 = param_2;
    iVar1 = FUN_00006e70(param_1 + 8);
    if (iVar1 == 0) {
      iVar2 = FUN_0001c948(param_1 + 8,0x8000,(int)&uStack_14 + 2,2,iVar2);
      if (iVar2 < 0) {
        uStack_14._2_2_ = 0x8000;
      }
      else {
      }
      *(undefined2 *)(param_1 + 0x38) = uStack_14._2_2_;
    }
  }
  return iVar1;
}



// FUN_0001ce1c @ 0001ce1c (10 bytes, called_by=0, calls=0)

void FUN_0001ce1c(int param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(*(int *)(param_1 + 8) + 0x30);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001ce22. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  return;
}



// FUN_0001ce26 @ 0001ce26 (18 bytes, called_by=0, calls=0)

undefined4 FUN_0001ce26(int param_1,int param_2)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_1 + 4);
  *(char *)(puVar1 + 3) = (char)param_2;
  if (param_2 != 0) {
    FUN_0001ce1c(*puVar1);
  }
  return 0;
}



// FUN_0001ce38 @ 0001ce38 (18 bytes, called_by=0, calls=0)

undefined4 FUN_0001ce38(int param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0001c4ac(*(int *)(param_1 + 4) + 0x30);
  *param_4 = uVar1;
  return 0;
}



// FUN_0001ce4a @ 0001ce4a (32 bytes, called_by=0, calls=0)

undefined4 FUN_0001ce4a(int param_1)

{
  code *pcVar1;
  int iVar2;
  
  iVar2 = **(int **)(param_1 + 4);
  FUN_00020f72(*(int **)(param_1 + 4) + 0x26);
  FUN_0001ce1c(iVar2);
  pcVar1 = *(code **)(*(int *)(iVar2 + 8) + 0x3c);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(iVar2);
  }
  return 0;
}



// FUN_0001ce6a @ 0001ce6a (108 bytes, called_by=0, calls=0)

undefined4 FUN_0001ce6a(int param_1,undefined1 *param_2,int param_3,int *param_4)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  code *pcVar4;
  int *piVar5;
  undefined1 *puVar6;
  
  piVar5 = *(int **)(param_1 + 4);
  if ((char)piVar5[3] == '\0') {
    iVar2 = FUN_0001c404(piVar5 + 4);
    piVar3 = piVar5 + 0x34;
    *param_4 = iVar2;
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(piVar3);
      iVar2 = *piVar3;
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = 1;
    DataMemoryBarrier(0x1b);
    if ((iVar2 == 0) && (pcVar4 = *(code **)(*(int *)(*piVar5 + 8) + 0x2c), pcVar4 != (code *)0x0))
    {
      (*pcVar4)();
    }
  }
  else {
    puVar6 = param_2 + param_3;
    for (; puVar6 != param_2; param_2 = param_2 + 1) {
      (**(code **)(*(int *)(*piVar5 + 8) + 0x1c))(*piVar5,*param_2);
    }
    *param_4 = param_3;
    (*(code *)piVar5[1])(1,piVar5[2]);
  }
  return 0;
}



// FUN_0001ced6 @ 0001ced6 (30 bytes, called_by=0, calls=0)

void FUN_0001ced6(uint *param_1,uint param_2)

{
  bool bVar1;
  
  DataMemoryBarrier(0x1b);
  do {
    ExclusiveAccess(param_1);
    bVar1 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar1);
  *param_1 = *param_1 | param_2;
  DataMemoryBarrier(0x1b);
  return;
}



// FUN_0001cef4 @ 0001cef4 (30 bytes, called_by=0, calls=0)

void FUN_0001cef4(uint *param_1,uint param_2)

{
  bool bVar1;
  
  DataMemoryBarrier(0x1b);
  do {
    ExclusiveAccess(param_1);
    bVar1 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar1);
  *param_1 = *param_1 & param_2;
  DataMemoryBarrier(0x1b);
  return;
}



// FUN_0001cf12 @ 0001cf12 (68 bytes, called_by=0, calls=0)

void FUN_0001cf12(int param_1)

{
  int iVar1;
  code *pcVar2;
  
  if (*(int *)(*(int *)(param_1 + 8) + 0x168) << 0x1f < 0) goto LAB_0001cf50;
  FUN_0001d770(*(undefined4 *)(param_1 + 0x1c));
  iVar1 = (**(code **)(**(int **)(param_1 + 4) + 4))();
  if (iVar1 == 0) {
    *(undefined1 *)(*(int *)(param_1 + 8) + 4) = 0;
  }
  do {
    pcVar2 = *(code **)(*(int *)(param_1 + 8) + 0x34);
    if (pcVar2 != (code *)0x0) {
      (*pcVar2)(param_1,iVar1);
    }
    *(undefined4 *)(*(int *)(param_1 + 8) + 0x210) = 0;
    FUN_000159e4();
    FUN_00009ecc();
LAB_0001cf50:
    iVar1 = -0x10;
  } while( true );
}



// FUN_0001cf56 @ 0001cf56 (44 bytes, called_by=0, calls=0)

void FUN_0001cf56(int param_1,int param_2,code *param_3)

{
  int iVar1;
  int local_18;
  int iStack_14;
  
  iVar1 = *(int *)(param_1 + 8) + param_2 * 0x10 + 0x16c;
  local_18 = param_1;
  iStack_14 = param_2;
  FUN_00021266(iVar1,&local_18,&iStack_14);
  if (local_18 != 0) {
    FUN_00021260(iVar1);
    (*param_3)(param_1);
  }
  return;
}



// FUN_0001cf82 @ 0001cf82 (12 bytes, called_by=0, calls=0)

uint FUN_0001cf82(uint param_1)

{
  ushort uVar1;
  
  if (param_1 != 0) {
    uVar1 = FUN_00000140();
    param_1 = (uint)uVar1;
  }
  return param_1;
}



// FUN_0001cfa2 @ 0001cfa2 (10 bytes, called_by=0, calls=0)

void FUN_0001cfa2(int param_1)

{
  FUN_0001ced6(param_1 + 0x168,4);
  return;
}



// FUN_0001cfac @ 0001cfac (22 bytes, called_by=0, calls=0)

void FUN_0001cfac(int param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_0001ced6(param_1 + 0x168,0x800);
    return;
  }
  FUN_0001cef4(param_1 + 0x168,0xfffff7ff);
  return;
}



// FUN_0001cfc2 @ 0001cfc2 (30 bytes, called_by=0, calls=0)

uint FUN_0001cfc2(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  
  if (param_2 == 0) {
    uVar1 = FUN_0001cef4(param_1 + 0x164,0xfffffffe,param_3,param_4,param_4);
  }
  else {
    uVar1 = FUN_0001ced6(param_1 + 0x164,1);
  }
  return uVar1 & 1;
}



// thunk_FUN_00014e2c @ 0001cfe0 (4 bytes, called_by=0, calls=0)

undefined4 thunk_FUN_00014e2c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 8) == 0) {
    uVar3 = 0xffffffea;
  }
  else if (*(int *)(param_1 + 8) == *(int *)(DAT_00014e9c + 8)) {
    if (*(uint *)(param_1 + 0xc) < 2) {
      uVar3 = 0;
      bVar1 = (bool)isCurrentModePrivileged();
      if (bVar1) {
        uVar3 = getBasePriority();
      }
      bVar1 = (bool)isCurrentModePrivileged();
      if ((bVar1) && (uVar2 = getBasePriority(), uVar2 == 0 || 0x40 < uVar2)) {
        setBasePriority(0x40);
      }
      InstructionSynchronizationBarrier(0xf);
      FUN_000208d2(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x10),
                   *(int *)(DAT_00014e9c + 8),0x40,param_4);
      iVar4 = FUN_00020d5e(param_1);
      *(int *)(param_1 + 8) = iVar4;
      if (iVar4 == 0) {
        *(undefined4 *)(param_1 + 0xc) = 0;
        bVar1 = (bool)isCurrentModePrivileged();
        if (bVar1) {
          setBasePriority(uVar3);
        }
        InstructionSynchronizationBarrier(0xf);
      }
      else {
        *(int *)(param_1 + 0x10) = (int)*(char *)(iVar4 + 0xe);
        *(undefined4 *)(iVar4 + 0xac) = 0;
        FUN_00020c68();
        FUN_00015768(DAT_00014ea0,uVar3);
      }
    }
    else {
      *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) - 1;
    }
    uVar3 = 0;
  }
  else {
    uVar3 = 0xffffffff;
  }
  return uVar3;
}



// FUN_0001cfe4 @ 0001cfe4 (74 bytes, called_by=0, calls=0)

void FUN_0001cfe4(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int local_18;
  undefined4 uStack_14;
  
  local_18 = 0;
  uStack_14 = param_2;
  do {
    FUN_0001d3e8(param_1);
    iVar1 = FUN_0001d7f6(*(undefined4 *)(param_1 + 0x1c));
    iVar2 = *(int *)(param_1 + 8);
    FUN_0000970c(param_1);
    if (*(short *)(*(int *)(param_1 + 8) + 0x40) != 0) {
      FUN_0001596c(0x1ec,0);
    }
    FUN_00021266(iVar2 + 0x16c,&local_18,&uStack_14);
  } while ((iVar1 != 0) && (local_18 == 0));
  return;
}



// FUN_0001d02e @ 0001d02e (96 bytes, called_by=0, calls=0)

undefined4 FUN_0001d02e(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int extraout_r1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = *(int *)(param_1 + 8);
  if (*(char *)(iVar2 + 4) == '\x01') {
    iVar1 = *(int *)(iVar2 + 0x168) << 0x11;
    if ((iVar1 < 0) && (-1 < *(int *)(iVar2 + 0x164) << 0x1d)) {
      FUN_0001d742(*(undefined4 *)(param_1 + 0x1c),param_1,*(undefined4 *)(iVar2 + 0x3c),iVar2,
                   param_4);
      iVar1 = extraout_r1;
    }
    iVar2 = FUN_00014d3c(*(int *)(param_1 + 8) + 0x1fc,iVar1,0x667,0);
    if (iVar2 == 0) {
      FUN_00008940(*(undefined4 *)(param_1 + 0x14));
      FUN_0000894c(param_1);
      thunk_FUN_00014e2c(*(int *)(param_1 + 8) + 0x1fc);
      uVar3 = 0;
    }
    else {
      uVar3 = 0xfffffff0;
    }
  }
  else {
    uVar3 = 0xffffff7a;
  }
  return uVar3;
}



// FUN_0001d08e @ 0001d08e (140 bytes, called_by=0, calls=0)

void FUN_0001d08e(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if (*(char *)(iVar1 + 4) != '\x02') {
    FUN_0001ced6(iVar1 + 0x168,0x1000,param_3,param_4);
    return;
  }
  iVar1 = FUN_00014d3c(iVar1 + 0x1fc,param_2,0x667,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 8);
    if ((-1 < *(int *)(iVar1 + 0x168) << 0x14) && (*(int *)(iVar1 + 0x38) == 0)) {
      if (*(int *)(iVar1 + 0x164) << 0x1a < 0) {
        FUN_0001d3e8(param_1);
      }
    }
    FUN_0001d4ac(param_1,param_2,param_3,param_4);
    iVar1 = *(int *)(param_1 + 8);
    if (((-1 < *(int *)(iVar1 + 0x168) << 0x14) && (*(int *)(iVar1 + 0x38) == 0)) &&
       (*(int *)(iVar1 + 0x164) << 0x1a < 0)) {
      FUN_0000970c(param_1);
    }
    FUN_0001d136(*(undefined4 *)(param_1 + 0x14));
    thunk_FUN_00014e2c(*(int *)(param_1 + 8) + 0x1fc);
    return;
  }
  return;
}



// FUN_0001d11a @ 0001d11a (28 bytes, called_by=0, calls=0)

void FUN_0001d11a(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  uStack_8 = param_3;
  uStack_4 = param_4;
  FUN_0001d08e(param_1,8,param_2,&uStack_8,param_1,&uStack_8);
  return;
}



// FUN_0001d136 @ 0001d136 (24 bytes, called_by=0, calls=0)

void FUN_0001d136(undefined4 *param_1)

{
  (*(code *)param_1[2])(param_1[3],*param_1,*(undefined4 *)param_1[4]);
  *(undefined4 *)param_1[4] = 0;
  return;
}



// FUN_0001d14e @ 0001d14e (60 bytes, called_by=0, calls=0)

undefined4 FUN_0001d14e(int param_1,int *param_2)

{
  if ((*(char *)(param_2[3] + 0x10) == '\x02') && (param_1 == 10)) {
    FUN_0001d14e(0xd);
  }
  *(char *)(*param_2 + *(int *)param_2[4]) = (char)param_1;
  *(int *)param_2[4] = *(int *)param_2[4] + 1;
  if (*(int *)param_2[4] == param_2[1]) {
    FUN_0001d136(param_2);
  }
  return 0;
}



// FUN_0001d18a @ 0001d18a (12 bytes, called_by=0, calls=0)

uint FUN_0001d18a(uint param_1)

{
  ushort uVar1;
  
  if (param_1 != 0) {
    uVar1 = FUN_00000140();
    param_1 = (uint)uVar1;
  }
  return param_1;
}



// FUN_0001d196 @ 0001d196 (30 bytes, called_by=0, calls=0)

int FUN_0001d196(int param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = (uint)*(ushort *)(param_1 + 10);
  uVar2 = param_3 + (uint)*(byte *)(param_1 + 0xc);
  uVar1 = param_2 + (uint)*(byte *)(param_1 + 0xc);
  return (uVar2 - uVar3 * (uVar2 / uVar3)) - (uVar1 - uVar3 * (uVar1 / uVar3));
}



// FUN_0001d1b4 @ 0001d1b4 (22 bytes, called_by=0, calls=0)

int FUN_0001d1b4(int param_1,int param_2,int param_3)

{
  return (param_3 + (uint)*(byte *)(param_1 + 0xc)) / (uint)*(ushort *)(param_1 + 10) -
         (param_2 + (uint)*(byte *)(param_1 + 0xc)) / (uint)*(ushort *)(param_1 + 10);
}



// FUN_0001d1ca @ 0001d1ca (44 bytes, called_by=0, calls=0)

void FUN_0001d1ca(short *param_1,int param_2,int param_3)

{
  ushort uVar1;
  short sVar2;
  short sVar3;
  uint uVar4;
  uint uVar5;
  
  uVar1 = param_1[5];
  uVar4 = param_2 + (uint)*(byte *)(param_1 + 6);
  sVar2 = (short)(uVar4 / uVar1);
  uVar5 = param_3 + (uint)*(byte *)(param_1 + 6);
  *param_1 = ((short)uVar4 - uVar1 * sVar2) + 1;
  sVar3 = (short)(uVar5 / uVar1);
  param_1[2] = sVar2 + 1;
  param_1[3] = sVar3 + 1;
  param_1[1] = ((short)uVar5 - uVar1 * sVar3) + 1;
  return;
}



// FUN_0001d1f6 @ 0001d1f6 (86 bytes, called_by=0, calls=0)

undefined4 * FUN_0001d1f6(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 local_2c [5];
  
  if (param_1 != (undefined4 *)0x0) {
    puVar1 = local_2c;
    puVar4 = param_1 + 4;
    do {
      uVar3 = param_1[1];
      *puVar1 = *param_1;
      puVar1[1] = uVar3;
      puVar1 = puVar1 + 2;
      param_1 = param_1 + 2;
    } while (param_1 != puVar4);
    *puVar1 = *param_1;
    param_1 = local_2c;
  }
  iVar5 = 0;
  do {
    puVar1 = (undefined4 *)FUN_000094b8(param_1,iVar5,param_3);
    iVar5 = iVar5 + 1;
    if (puVar1 == (undefined4 *)0x0) {
      return (undefined4 *)0x0;
    }
    iVar2 = FUN_00000228(param_2,*puVar1);
  } while (iVar2 != 0);
  return puVar1;
}



// FUN_0001d24c @ 0001d24c (70 bytes, called_by=0, calls=0)

int FUN_0001d24c(int param_1,uint param_2,int param_3,uint *param_4,int param_5,char param_6)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  
  *param_4 = 0;
  puVar3 = param_4;
  while( true ) {
    uVar2 = *param_4;
    if (param_2 <= uVar2) {
      return param_1;
    }
    iVar1 = FUN_0001d1f6(param_1,*(undefined4 *)(param_3 + uVar2 * 4),param_5,uVar2,puVar3);
    if (iVar1 == 0) break;
    uVar2 = *param_4;
    *param_4 = uVar2 + 1;
    param_1 = iVar1;
    if ((param_6 != '\0') && (param_5 == iVar1)) {
      *param_4 = uVar2;
      return 0;
    }
  }
  return param_1;
}



// FUN_0001d292 @ 0001d292 (26 bytes, called_by=0, calls=0)

void FUN_0001d292(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  uStack_8 = param_3;
  uStack_4 = param_4;
  FUN_000092d0(param_1,param_2,&uStack_8,param_4,param_1,&uStack_8);
  return;
}



// FUN_0001d2ac @ 0001d2ac (40 bytes, called_by=0, calls=0)

uint FUN_0001d2ac(uint *param_1)

{
  uint uVar1;
  ushort uVar2;
  uint uVar3;
  
  uVar1 = param_1[0x10];
  uVar3 = *param_1;
  if (uVar3 != 0) {
    uVar2 = FUN_00000140();
    uVar3 = (uint)uVar2;
  }
  uVar3 = uVar3 + (ushort)uVar1;
  if (uVar3 != 0) {
    uVar3 = (uint)(uVar3 == (uint)*(ushort *)((int)param_1 + 0x2a) *
                            (uVar3 / *(ushort *)((int)param_1 + 0x2a)));
  }
  return uVar3;
}



// FUN_0001d2d4 @ 0001d2d4 (48 bytes, called_by=0, calls=0)

bool FUN_0001d2d4(int param_1)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  
  puVar5 = *(uint **)(param_1 + 8);
  uVar4 = puVar5[0x59];
  uVar1 = *(ushort *)((int)puVar5 + 0x42);
  uVar3 = *puVar5;
  if (uVar3 != 0) {
    uVar2 = FUN_00000140();
    uVar3 = (uint)uVar2;
  }
  uVar3 = uVar3 + -((int)(uVar4 << 0x1e) >> 0x1f) * (uint)uVar1;
  return uVar3 == (uint)*(ushort *)((int)puVar5 + 0x2a) * (uVar3 / *(ushort *)((int)puVar5 + 0x2a));
}



// FUN_0001d34e @ 0001d34e (82 bytes, called_by=0, calls=0)

void FUN_0001d34e(int param_1,short param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1 + 8);
  param_2 = param_2 + *(short *)(iVar1 + 0x42);
  FUN_0001d1ca(iVar1 + 0x20,*(short *)(iVar1 + 0x42),*(undefined2 *)(iVar1 + 0x40),param_4,param_4);
  iVar1 = FUN_0001d1b4(*(int *)(param_1 + 8) + 0x20,*(undefined2 *)(*(int *)(param_1 + 8) + 0x42),
                       param_2);
  uVar2 = FUN_0001d196(*(int *)(param_1 + 8) + 0x20,*(undefined2 *)(*(int *)(param_1 + 8) + 0x42),
                       param_2);
  FUN_00009550(param_1,-iVar1);
  FUN_0000957c(param_1,uVar2);
  *(short *)(*(int *)(param_1 + 8) + 0x42) = param_2;
  return;
}



// FUN_0001d3a0 @ 0001d3a0 (14 bytes, called_by=0, calls=0)

void FUN_0001d3a0(int param_1)

{
  FUN_0001d34e(param_1,(int)-*(short *)(*(int *)(param_1 + 8) + 0x42));
  return;
}



// FUN_0001d3ae @ 0001d3ae (18 bytes, called_by=0, calls=0)

void FUN_0001d3ae(int param_1)

{
  FUN_0001d34e(param_1,(int)(short)(*(short *)(*(int *)(param_1 + 8) + 0x40) -
                                   *(short *)(*(int *)(param_1 + 8) + 0x42)));
  return;
}



// FUN_0001d3e8 @ 0001d3e8 (56 bytes, called_by=0, calls=0)

void FUN_0001d3e8(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  FUN_0001d1ca(iVar1 + 0x20,*(undefined2 *)(iVar1 + 0x42),*(undefined2 *)(iVar1 + 0x40));
  FUN_0000957c(param_1,1 - (uint)*(ushort *)(*(int *)(param_1 + 8) + 0x20));
  FUN_00009550(param_1,*(ushort *)(*(int *)(param_1 + 8) + 0x24) - 1);
  FUN_0000952c(param_1);
  return;
}



// FUN_0001d420 @ 0001d420 (136 bytes, called_by=0, calls=0)

void FUN_0001d420(int param_1,int param_2,int param_3)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  int local_30;
  undefined1 auStack_2c [20];
  
  iVar4 = 0;
  while (param_3 != 0) {
    while( true ) {
      (**(code **)(**(int **)(param_1 + 4) + 0xc))
                (*(int **)(param_1 + 4),param_2 + iVar4,param_3,&local_30);
      iVar4 = iVar4 + local_30;
      param_3 = param_3 - local_30;
      if (local_30 != 0) break;
      iVar3 = *(int *)(param_1 + 8);
      if (*(byte *)(iVar3 + 4) != 3) {
        if (*(byte *)(iVar3 + 4) < 3) {
          FUN_00021204(auStack_2c,1,0,iVar3 + 0x19c);
          FUN_00015f7c(auStack_2c,1,0xffffffff,0xffffffff);
          FUN_00021260(*(int *)(param_1 + 8) + 0x19c);
        }
        else {
          do {
          } while (-1 < *(int *)(iVar3 + 0x168) << 0x1e);
          DataMemoryBarrier(0x1b);
          puVar2 = (uint *)(iVar3 + 0x168);
          do {
            ExclusiveAccess(puVar2);
            bVar1 = (bool)hasExclusiveAccess(puVar2);
          } while (!bVar1);
          *puVar2 = *puVar2 & 0xfffffffd;
          DataMemoryBarrier(0x1b);
        }
      }
    }
  }
  return;
}



// thunk_FUN_0001d420 @ 0001d4a8 (4 bytes, called_by=0, calls=0)

void thunk_FUN_0001d420(int param_1,int param_2,int param_3)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  int iStack_30;
  undefined1 auStack_2c [20];
  
  iVar4 = 0;
  while (param_3 != 0) {
    while( true ) {
      (**(code **)(**(int **)(param_1 + 4) + 0xc))
                (*(int **)(param_1 + 4),param_2 + iVar4,param_3,&iStack_30);
      iVar4 = iVar4 + iStack_30;
      param_3 = param_3 - iStack_30;
      if (iStack_30 != 0) break;
      iVar3 = *(int *)(param_1 + 8);
      if (*(byte *)(iVar3 + 4) != 3) {
        if (*(byte *)(iVar3 + 4) < 3) {
          FUN_00021204(auStack_2c,1,0,iVar3 + 0x19c);
          FUN_00015f7c(auStack_2c,1,0xffffffff,0xffffffff);
          FUN_00021260(*(int *)(param_1 + 8) + 0x19c);
        }
        else {
          do {
          } while (-1 < *(int *)(iVar3 + 0x168) << 0x1e);
          DataMemoryBarrier(0x1b);
          puVar2 = (uint *)(iVar3 + 0x168);
          do {
            ExclusiveAccess(puVar2);
            bVar1 = (bool)hasExclusiveAccess(puVar2);
          } while (!bVar1);
          *puVar2 = *puVar2 & 0xfffffffd;
          DataMemoryBarrier(0x1b);
        }
      }
    }
  }
  return;
}



// FUN_0001d4ac @ 0001d4ac (10 bytes, called_by=0, calls=0)

void FUN_0001d4ac(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_000092d0(*(undefined4 *)(param_1 + 0x14),param_3,param_4);
  return;
}



// FUN_0001d4b6 @ 0001d4b6 (28 bytes, called_by=0, calls=0)

void FUN_0001d4b6(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uStack_4;
  
  uStack_4 = param_4;
  FUN_000092d0(*(undefined4 *)(param_1 + 0x14),param_3,&uStack_4,param_4,param_1,&uStack_4,param_3);
  return;
}



// FUN_0001d4d2 @ 0001d4d2 (230 bytes, called_by=0, calls=0)

/* WARNING: Removing unreachable block (ram,0x0000962c) */
/* WARNING: Removing unreachable block (ram,0x00009664) */

void FUN_0001d4d2(int param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  uint uVar3;
  undefined4 unaff_r7;
  int iVar4;
  undefined4 unaff_r8;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 8);
  if ((int)((uint)*(ushort *)(iVar4 + 0x40) + param_3) < 0x80) {
    uVar3 = (uint)*(ushort *)(iVar4 + 0x40) - (uint)*(ushort *)(iVar4 + 0x42);
    iVar4 = iVar4 + *(ushort *)(iVar4 + 0x42) + 0x46;
    FUN_000167a4(iVar4 + param_3,iVar4,uVar3 & 0xffff);
    FUN_00000820(iVar4,param_2,param_3);
    *(short *)(*(int *)(param_1 + 8) + 0x40) =
         *(short *)(*(int *)(param_1 + 8) + 0x40) + (short)param_3;
    *(undefined1 *)(*(int *)(param_1 + 8) + (uint)*(ushort *)(*(int *)(param_1 + 8) + 0x40) + 0x46)
         = 0;
    iVar4 = *(int *)(param_1 + 8);
    if (*(int *)(iVar4 + 0x164) << 0x1e < 0) {
      iVar4 = *(int *)(param_1 + 8);
      iVar2 = iVar4 + *(ushort *)(iVar4 + 0x42) + 0x46;
      if (*(int *)(iVar4 + 0x164) << 0x1d < 0) {
        iVar4 = FUN_00000140(iVar2);
        uVar1 = DAT_00009694;
        for (; iVar4 != 0; iVar4 = iVar4 + -1) {
          FUN_0001d292(*(undefined4 *)(param_1 + 0x14),uVar1);
        }
      }
      else {
        FUN_0001d4b6(param_1,8,DAT_00009698,iVar2,unaff_r4,unaff_r5,unaff_r6,unaff_r7,unaff_r8,in_lr
                    );
      }
      *(undefined2 *)(*(int *)(param_1 + 8) + 0x42) = *(undefined2 *)(*(int *)(param_1 + 8) + 0x40);
      iVar4 = FUN_0001d2ac(*(undefined4 *)(param_1 + 8));
      if (iVar4 != 0) {
        FUN_00009544(*(undefined4 *)(param_1 + 0x14));
      }
      FUN_0001d34e(param_1,(int)(short)-(short)uVar3);
      return;
    }
    *(short *)(iVar4 + 0x42) = (short)param_3 + *(short *)(iVar4 + 0x42);
  }
  return;
}



// thunk_FUN_0001d4d2 @ 0001d546 (4 bytes, called_by=0, calls=0)

/* WARNING: Removing unreachable block (ram,0x0000962c) */
/* WARNING: Removing unreachable block (ram,0x00009664) */

void thunk_FUN_0001d4d2(int param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  uint uVar3;
  undefined4 unaff_r6;
  int iVar4;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 8);
  if ((int)((uint)*(ushort *)(iVar4 + 0x40) + param_3) < 0x80) {
    uVar3 = (uint)*(ushort *)(iVar4 + 0x40) - (uint)*(ushort *)(iVar4 + 0x42);
    iVar4 = iVar4 + *(ushort *)(iVar4 + 0x42) + 0x46;
    FUN_000167a4(iVar4 + param_3,iVar4,uVar3 & 0xffff);
    FUN_00000820(iVar4,param_2,param_3);
    *(short *)(*(int *)(param_1 + 8) + 0x40) =
         *(short *)(*(int *)(param_1 + 8) + 0x40) + (short)param_3;
    *(undefined1 *)(*(int *)(param_1 + 8) + (uint)*(ushort *)(*(int *)(param_1 + 8) + 0x40) + 0x46)
         = 0;
    iVar4 = *(int *)(param_1 + 8);
    if (*(int *)(iVar4 + 0x164) << 0x1e < 0) {
      iVar4 = *(int *)(param_1 + 8);
      iVar2 = iVar4 + *(ushort *)(iVar4 + 0x42) + 0x46;
      if (*(int *)(iVar4 + 0x164) << 0x1d < 0) {
        iVar4 = FUN_00000140(iVar2);
        uVar1 = DAT_00009694;
        for (; iVar4 != 0; iVar4 = iVar4 + -1) {
          FUN_0001d292(*(undefined4 *)(param_1 + 0x14),uVar1);
        }
      }
      else {
        FUN_0001d4b6(param_1,8,DAT_00009698,iVar2,unaff_r4,unaff_r5,unaff_r6,unaff_r7,unaff_r8,in_lr
                    );
      }
      *(undefined2 *)(*(int *)(param_1 + 8) + 0x42) = *(undefined2 *)(*(int *)(param_1 + 8) + 0x40);
      iVar4 = FUN_0001d2ac(*(undefined4 *)(param_1 + 8));
      if (iVar4 != 0) {
        FUN_00009544(*(undefined4 *)(param_1 + 0x14));
      }
      FUN_0001d34e(param_1,(int)(short)-(short)uVar3);
      return;
    }
    *(short *)(iVar4 + 0x42) = (short)param_3 + *(short *)(iVar4 + 0x42);
  }
  return;
}



// FUN_0001d54a @ 0001d54a (62 bytes, called_by=0, calls=0)

void FUN_0001d54a(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 unaff_r4;
  uint uVar4;
  undefined4 unaff_r5;
  
  iVar2 = *(int *)(param_1 + 8);
  uVar4 = (uint)*(ushort *)(iVar2 + 0x40) - (uint)*(ushort *)(iVar2 + 0x42) & 0xffff;
  if (uVar4 == 0) {
    return;
  }
  iVar2 = iVar2 + *(ushort *)(iVar2 + 0x42) + 0x46;
  FUN_000167a4(iVar2,iVar2 + 1,uVar4);
  *(short *)(*(int *)(param_1 + 8) + 0x40) = *(short *)(*(int *)(param_1 + 8) + 0x40) + -1;
  FUN_0000952c();
  iVar2 = *(int *)(param_1 + 8);
  iVar3 = iVar2 + *(ushort *)(iVar2 + 0x42) + 0x46;
  if (*(int *)(iVar2 + 0x164) << 0x1d < 0) {
    iVar2 = FUN_00000140(iVar3);
    uVar1 = DAT_00009694;
    for (; iVar2 != 0; iVar2 = iVar2 + -1) {
      FUN_0001d292(*(undefined4 *)(param_1 + 0x14),uVar1);
    }
  }
  else {
    FUN_0001d4b6(param_1,8,DAT_00009698,iVar3,unaff_r4,unaff_r5);
  }
  *(undefined2 *)(*(int *)(param_1 + 8) + 0x42) = *(undefined2 *)(*(int *)(param_1 + 8) + 0x40);
  iVar2 = FUN_0001d2ac(*(undefined4 *)(param_1 + 8));
  if ((iVar2 != 0) && ((uVar4 - 1 & 0xffff) != 0)) {
    FUN_00009544(*(undefined4 *)(param_1 + 0x14));
  }
  FUN_0001d34e(param_1,(int)(short)-(short)(uVar4 - 1));
  return;
}



// FUN_0001d588 @ 0001d588 (38 bytes, called_by=0, calls=0)

void FUN_0001d588(int param_1)

{
  if ((*(short *)(*(int *)(param_1 + 8) + 0x40) != 0) &&
     (*(short *)(*(int *)(param_1 + 8) + 0x42) != 0)) {
    FUN_0001d34e(param_1,0xffffffff);
    FUN_0001d54a(param_1);
    return;
  }
  return;
}



// FUN_0001d5ae @ 0001d5ae (38 bytes, called_by=0, calls=0)

int FUN_0001d5ae(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar2 = *(undefined4 *)(param_1 + 0x14);
  uVar3 = *(undefined4 *)(param_1 + 4);
  iVar1 = FUN_0001bfcc(uVar2);
  if (iVar1 != 0) {
    FUN_0001cb86(uVar3,iVar1,0xe);
    FUN_0001c074(uVar2,iVar1);
    iVar1 = 1;
  }
  return iVar1;
}



// FUN_0001d5f4 @ 0001d5f4 (346 bytes, called_by=0, calls=0)

void FUN_0001d5f4(int param_1,uint *param_2)

{
  char cVar1;
  longlong lVar2;
  uint *puVar3;
  int *piVar4;
  int iVar5;
  uint unaff_r4;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  bool bVar10;
  undefined8 uVar11;
  
  iVar7 = **(int **)(param_1 + 4);
  iVar5 = *(int *)(iVar7 + 0x1c);
  uVar9 = *(undefined4 *)(iVar5 + 4);
  cVar1 = *(char *)(*(int *)(iVar5 + 8) + 4);
  uVar8 = *(undefined4 *)(iVar5 + 0x14);
  if (cVar1 != '\x01') {
    if (cVar1 == '\x03') {
      FUN_0001d3e8(iVar7);
      uVar11 = FUN_00020bc4();
      if ((int)uVar11 == 0) {
        FUN_00014d3c(*(int *)(iVar7 + 8) + 0x1fc,(int)((ulonglong)uVar11 >> 0x20),0xffffffff,
                     0xffffffff);
        uVar8 = 0;
      }
      else {
        uVar8 = 0;
        bVar10 = (bool)isCurrentModePrivileged();
        if (bVar10) {
          uVar8 = getBasePriority();
        }
        bVar10 = (bool)isCurrentModePrivileged();
        if ((bVar10) && (uVar6 = getBasePriority(), uVar6 == 0 || 0x40 < uVar6)) {
          setBasePriority(0x40);
        }
        InstructionSynchronizationBarrier(0xf);
      }
      if (-1 < *(int *)(*(int *)(iVar7 + 8) + 0x168) << 0x14) {
        FUN_0001d3e8(iVar7);
      }
      FUN_0001cb86(uVar9,param_2,0xe);
      if (-1 < *(int *)(*(int *)(iVar7 + 8) + 0x168) << 0x14) {
        FUN_0000970c(iVar7);
      }
      iVar5 = FUN_00020bc4();
      if (iVar5 == 0) {
        FUN_00014e2c(*(int *)(iVar7 + 8) + 0x1fc);
        return;
      }
      bVar10 = (bool)isCurrentModePrivileged();
      if (bVar10) {
        setBasePriority(uVar8);
      }
      InstructionSynchronizationBarrier(0xf);
    }
    return;
  }
  bVar10 = -1 < (int)((uint)(byte)*param_2 << 0x1d);
  if (bVar10) {
    unaff_r4 = ((*param_2 << 0xc) >> 0x15) + (uint)(*(ushort *)((int)param_2 + 2) >> 4) + 0x17;
  }
  lVar2 = (ulonglong)*(uint *)(iVar5 + 0xc) * 0x8000 + 999;
  if (bVar10) {
    uVar6 = (unaff_r4 & 0xfffffff8) >> 2;
  }
  else {
    uVar6 = 0;
  }
  uVar11 = FUN_00001904((int)lVar2,(int)((ulonglong)lVar2 >> 0x20),1000,0);
  puVar3 = (uint *)FUN_0001be96(uVar8,uVar6,(int)uVar11,(int)((ulonglong)uVar11 >> 0x20));
  if ((puVar3 != (uint *)0x0) && (1 < uVar6)) {
    *puVar3 = *puVar3 & 3 | *param_2 & 0xfffffffc;
    FUN_00000820(puVar3 + 1,param_2 + 1,(uVar6 - 1) * 4);
    FUN_0001bf8e(uVar8,puVar3);
    FUN_0001602c(*(int *)(iVar7 + 8) + 0x17c,0);
    return;
  }
  piVar4 = *(int **)(*(int *)(**(int **)(param_1 + 4) + 0x1c) + 8);
  DataMemoryBarrier(0x1b);
  do {
    ExclusiveAccess(piVar4);
    bVar10 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar10);
  *piVar4 = *piVar4 + 1;
  DataMemoryBarrier(0x1b);
  return;
}



// FUN_0001d72e @ 0001d72e (20 bytes, called_by=0, calls=0)

undefined4 FUN_0001d72e(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  thunk_FUN_0001d420(param_3,param_1,param_2);
  return param_2;
}



// FUN_0001d742 @ 0001d742 (46 bytes, called_by=0, calls=0)

void FUN_0001d742(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_0001be54(param_1[5],param_1[4]);
  FUN_00007ae0(*param_1,param_2,param_3);
  *(undefined4 *)(*(int *)(param_1[1] + 4) + 4) = param_2;
  *(undefined4 *)param_1[2] = 0;
  *(undefined1 *)(param_1[2] + 4) = 1;
  return;
}



// FUN_0001d770 @ 0001d770 (18 bytes, called_by=0, calls=0)

void FUN_0001d770(undefined4 *param_1)

{
  FUN_0001c9ce(*param_1);
  *(undefined1 *)(param_1[2] + 4) = 2;
  return;
}



// FUN_0001d782 @ 0001d782 (116 bytes, called_by=0, calls=0)

void FUN_0001d782(int param_1)

{
  bool bVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  
  iVar4 = **(int **)(param_1 + 4);
  iVar2 = (**(code **)(**(int **)(iVar4 + 4) + 8))(*(int **)(iVar4 + 4),1);
  if (iVar2 != 0) {
    FUN_0001d770(*(undefined4 *)(iVar4 + 0x1c));
    return;
  }
  *(undefined1 *)(*(int *)(*(int *)(iVar4 + 0x1c) + 8) + 4) = 3;
  DataMemoryBarrier(0x1b);
  puVar3 = (uint *)(*(int *)(iVar4 + 8) + 0x168);
  do {
    ExclusiveAccess(puVar3);
    bVar1 = (bool)hasExclusiveAccess(puVar3);
  } while (!bVar1);
  *puVar3 = *puVar3 | 0x2000;
  DataMemoryBarrier(0x1b);
  iVar2 = *(int *)(iVar4 + 8);
  FUN_0001d1ca(iVar2 + 0x20,*(undefined2 *)(iVar2 + 0x42),*(undefined2 *)(iVar2 + 0x40));
  FUN_00009550(iVar4,0xffffffff);
  FUN_0000957c(iVar4,-(uint)*(ushort *)(*(int *)(iVar4 + 8) + 0x20));
  do {
    iVar2 = FUN_0001d5ae(*(undefined4 *)(iVar4 + 0x1c));
  } while (iVar2 != 0);
  return;
}



// FUN_0001d7f6 @ 0001d7f6 (50 bytes, called_by=0, calls=0)

void FUN_0001d7f6(int *param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  iVar4 = **(int **)(*param_1 + 4);
  piVar3 = (int *)param_1[2];
  DataMemoryBarrier(0x1b);
  do {
    ExclusiveAccess(piVar3);
    iVar2 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = 0;
  DataMemoryBarrier(0x1b);
  if (iVar2 != 0) {
    FUN_00008054(param_1[1]);
  }
  FUN_0001d5ae(*(undefined4 *)(iVar4 + 0x1c));
  return;
}



// FUN_0001d828 @ 0001d828 (40 bytes, called_by=0, calls=0)

undefined4 FUN_0001d828(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 8);
  (**(code **)(iVar2 + 0xc))();
  UNRECOVERED_JUMPTABLE = *(code **)(iVar2 + 8);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001d846. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3);
    return uVar1;
  }
  return 0xffffffa8;
}



// FUN_0001d866 @ 0001d866 (8 bytes, called_by=0, calls=0)

void FUN_0001d866(undefined4 param_1,undefined4 param_2)

{
  FUN_0001cab2(param_1,1,param_2);
  return;
}



// FUN_0001d884 @ 0001d884 (26 bytes, called_by=0, calls=0)

void FUN_0001d884(void)

{
  bool bVar1;
  
  disableIRQinterrupts();
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(0);
  }
  InstructionSynchronizationBarrier(0xf);
  DataSynchronizationBarrier(0xf);
  WaitForInterrupt();
  enableIRQinterrupts();
  InstructionSynchronizationBarrier(0xf);
  return;
}



// FUN_0001d8bc @ 0001d8bc (32 bytes, called_by=0, calls=0)

int FUN_0001d8bc(uint param_1)

{
  if (param_1 < 0x21) {
    return 8;
  }
  if (param_1 < 0x80000001) {
    return (0x1f - LZCOUNT(param_1 - 1)) * 2;
  }
  return 0x3e;
}



// FUN_0001d8dc @ 0001d8dc (34 bytes, called_by=0, calls=0)

void FUN_0001d8dc(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  undefined4 local_14;
  undefined4 uStack_10;
  uint local_c;
  
  local_14 = *param_2;
  uVar1 = param_2[2];
  uStack_10 = param_3;
  local_c = param_4;
  local_c = FUN_0001d8bc(param_2[1],param_2,uVar1,param_1,param_1);
  local_c = uVar1 | local_c;
  FUN_0000a1d4(param_1,&local_14);
  return;
}



// FUN_0001d90c @ 0001d90c (44 bytes, called_by=0, calls=0)

int FUN_0001d90c(undefined4 param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  puVar1 = DAT_0000a4d8;
  iVar3 = 0;
  while( true ) {
    if (param_3 <= iVar3) {
      return iVar3;
    }
    iVar2 = (*(code *)*puVar1)();
    *(char *)(param_2 + iVar3) = (char)iVar2;
    iVar3 = iVar3 + 1;
    if (iVar2 == 10) break;
    if (iVar2 == 0xd) {
      return iVar3;
    }
  }
  return iVar3;
}



// FUN_0001d914 @ 0001d914 (52 bytes, called_by=0, calls=0)

int FUN_0001d914(undefined4 param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  
  puVar1 = DAT_0000a508;
  puVar2 = (undefined1 *)(param_2 + -1);
  while ((int)(puVar2 + (1 - param_2)) < param_3) {
    if (puVar2[1] == '\n') {
      (*(code *)*puVar1)(0xd);
    }
    puVar2 = puVar2 + 1;
    (*(code *)*puVar1)(*puVar2);
  }
  return param_3;
}



// FUN_0001d922 @ 0001d922 (4 bytes, called_by=0, calls=0)

undefined4 FUN_0001d922(void)

{
  return 0;
}



// FUN_0001d926 @ 0001d926 (10 bytes, called_by=0, calls=0)

bool FUN_0001d926(int param_1)

{
  return param_1 < 3;
}



// FUN_0001d930 @ 0001d930 (10 bytes, called_by=0, calls=0)

undefined4 FUN_0001d930(undefined4 param_1,int param_2)

{
  *(undefined4 *)(param_2 + 4) = 0x2000;
  return 0;
}



// FUN_0001d93a @ 0001d93a (20 bytes, called_by=0, calls=0)

void FUN_0001d93a(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_000161ac(0x14);
  *param_1 = uVar1;
  FUN_000208e2();
  return;
}



// thunk_FUN_000161bc @ 0001d94e (4 bytes, called_by=0, calls=0)

void thunk_FUN_000161bc(undefined4 param_1)

{
  FUN_00018a90(*DAT_000161c8,param_1);
  return;
}



// FUN_0001d952 @ 0001d952 (12 bytes, called_by=0, calls=0)

void FUN_0001d952(undefined4 param_1,undefined4 param_2)

{
  FUN_00014d3c(param_1,param_2,0xffffffff,0xffffffff);
  return;
}



// thunk_FUN_00014e2c @ 0001d95e (4 bytes, called_by=0, calls=0)

undefined4 thunk_FUN_00014e2c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 8) == 0) {
    uVar3 = 0xffffffea;
  }
  else if (*(int *)(param_1 + 8) == *(int *)(DAT_00014e9c + 8)) {
    if (*(uint *)(param_1 + 0xc) < 2) {
      uVar3 = 0;
      bVar1 = (bool)isCurrentModePrivileged();
      if (bVar1) {
        uVar3 = getBasePriority();
      }
      bVar1 = (bool)isCurrentModePrivileged();
      if ((bVar1) && (uVar2 = getBasePriority(), uVar2 == 0 || 0x40 < uVar2)) {
        setBasePriority(0x40);
      }
      InstructionSynchronizationBarrier(0xf);
      FUN_000208d2(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x10),
                   *(int *)(DAT_00014e9c + 8),0x40,param_4);
      iVar4 = FUN_00020d5e(param_1);
      *(int *)(param_1 + 8) = iVar4;
      if (iVar4 == 0) {
        *(undefined4 *)(param_1 + 0xc) = 0;
        bVar1 = (bool)isCurrentModePrivileged();
        if (bVar1) {
          setBasePriority(uVar3);
        }
        InstructionSynchronizationBarrier(0xf);
      }
      else {
        *(int *)(param_1 + 0x10) = (int)*(char *)(iVar4 + 0xe);
        *(undefined4 *)(iVar4 + 0xac) = 0;
        FUN_00020c68();
        FUN_00015768(DAT_00014ea0,uVar3);
      }
    }
    else {
      *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) - 1;
    }
    uVar3 = 0;
  }
  else {
    uVar3 = 0xffffffff;
  }
  return uVar3;
}



// thunk_FUN_000146fc @ 0001d962 (4 bytes, called_by=0, calls=0)

int thunk_FUN_000146fc(void)

{
  return *(int *)(DAT_00014704 + 8) + 0x94;
}



// FUN_0001d9a8 @ 0001d9a8 (24 bytes, called_by=0, calls=0)

undefined4 FUN_0001d9a8(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  }
  uVar1 = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(param_2 + 4) = 0;
  FUN_0000a6fc(param_2);
  return uVar1;
}



// FUN_0001d9cc @ 0001d9cc (18 bytes, called_by=0, calls=0)

void FUN_0001d9cc(int *param_1,undefined4 param_2,short param_3)

{
  ushort uVar1;
  
  uVar1 = *(ushort *)(param_1 + 1);
  *(ushort *)(param_1 + 1) = uVar1 + param_3;
  FUN_00000820(*param_1 + (uint)uVar1);
  return;
}



// FUN_0001d9de @ 0001d9de (16 bytes, called_by=0, calls=0)

int FUN_0001d9de(int *param_1,undefined1 param_2)

{
  ushort uVar1;
  int iVar2;
  
  uVar1 = *(ushort *)(param_1 + 1);
  iVar2 = *param_1;
  *(ushort *)(param_1 + 1) = uVar1 + 1;
  *(undefined1 *)(iVar2 + (uint)uVar1) = param_2;
  return iVar2 + (uint)uVar1;
}



// FUN_0001da02 @ 0001da02 (14 bytes, called_by=0, calls=0)

int FUN_0001da02(int *param_1,short param_2)

{
  ushort uVar1;
  
  uVar1 = (short)param_1[1] - param_2;
  *(ushort *)(param_1 + 1) = uVar1;
  return *param_1 + (uint)uVar1;
}



// FUN_0001da10 @ 0001da10 (16 bytes, called_by=0, calls=0)

int FUN_0001da10(int *param_1)

{
  return ((uint)*(ushort *)((int)param_1 + 6) - (uint)*(ushort *)(param_1 + 1)) -
         (*param_1 - param_1[2]);
}



// thunk_FUN_0001cab2 @ 0001da6e (4 bytes, called_by=0, calls=0)

void thunk_FUN_0001cab2(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  uStack_c = param_3;
  uStack_8 = param_3;
  FUN_0001ca44(param_1,param_2,&uStack_c,1,param_1);
  return;
}



// FUN_0001da72 @ 0001da72 (14 bytes, called_by=0, calls=0)

void FUN_0001da72(int param_1,undefined4 param_2)

{
  FUN_00014d3c(param_1 + 4,param_2,0xffffffff,0xffffffff);
  return;
}



// thunk_FUN_00014e2c @ 0001da80 (4 bytes, called_by=0, calls=0)

undefined4 thunk_FUN_00014e2c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 8) == 0) {
    uVar3 = 0xffffffea;
  }
  else if (*(int *)(param_1 + 8) == *(int *)(DAT_00014e9c + 8)) {
    if (*(uint *)(param_1 + 0xc) < 2) {
      uVar3 = 0;
      bVar1 = (bool)isCurrentModePrivileged();
      if (bVar1) {
        uVar3 = getBasePriority();
      }
      bVar1 = (bool)isCurrentModePrivileged();
      if ((bVar1) && (uVar2 = getBasePriority(), uVar2 == 0 || 0x40 < uVar2)) {
        setBasePriority(0x40);
      }
      InstructionSynchronizationBarrier(0xf);
      FUN_000208d2(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x10),
                   *(int *)(DAT_00014e9c + 8),0x40,param_4);
      iVar4 = FUN_00020d5e(param_1);
      *(int *)(param_1 + 8) = iVar4;
      if (iVar4 == 0) {
        *(undefined4 *)(param_1 + 0xc) = 0;
        bVar1 = (bool)isCurrentModePrivileged();
        if (bVar1) {
          setBasePriority(uVar3);
        }
        InstructionSynchronizationBarrier(0xf);
      }
      else {
        *(int *)(param_1 + 0x10) = (int)*(char *)(iVar4 + 0xe);
        *(undefined4 *)(iVar4 + 0xac) = 0;
        FUN_00020c68();
        FUN_00015768(DAT_00014ea0,uVar3);
      }
    }
    else {
      *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) - 1;
    }
    uVar3 = 0;
  }
  else {
    uVar3 = 0xffffffff;
  }
  return uVar3;
}



// FUN_0001da84 @ 0001da84 (10 bytes, called_by=0, calls=0)

uint FUN_0001da84(int param_1)

{
  return ((uint)*(byte *)(param_1 + 0x60) << 0x1a) >> 0x1e;
}



// FUN_0001da8e @ 0001da8e (14 bytes, called_by=0, calls=0)

uint FUN_0001da8e(int param_1)

{
  return *(uint *)(*(int *)(*(int *)(param_1 + 0x18) + 0x10) + 0x80) & 1;
}



// FUN_0001da9c @ 0001da9c (60 bytes, called_by=0, calls=0)

undefined4 FUN_0001da9c(int param_1,int param_2,undefined2 param_3)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  
  FUN_0001da72();
  iVar2 = (uint)*(byte *)(param_1 + 0x60) << 0x1e;
  if ((int)((uint)*(byte *)(param_1 + 0x60) << 0x1e) < 0) {
    uVar3 = 0xffffff88;
  }
  else {
    if (param_2 == 0) {
      iVar2 = *(int *)(param_1 + 100);
    }
    else {
      if (param_2 != 1) {
        *(ushort *)(2 - (iVar2 >> 0x1f)) = (ushort)((uint)iVar2 >> 0x1f);
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x1dabc);
        (*pcVar1)();
      }
      iVar2 = *(int *)(param_1 + 0x68);
    }
    *(undefined2 *)(iVar2 + 2) = param_3;
    uVar3 = 0;
  }
  thunk_FUN_00014e2c(param_1 + 4);
  return uVar3;
}



// FUN_0001dad8 @ 0001dad8 (48 bytes, called_by=0, calls=0)

uint FUN_0001dad8(int param_1,undefined2 param_2)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  
  FUN_0001da72();
  uVar2 = ((uint)*(byte *)(param_1 + 0x60) << 0x1e) >> 0x1f;
  iVar1 = (uint)*(byte *)(param_1 + 0x60) << 0x1e;
  bVar3 = -1 < iVar1;
  if (bVar3) {
    iVar1 = *(int *)(param_1 + 100);
  }
  if (bVar3) {
    *(undefined2 *)(iVar1 + 10) = param_2;
    iVar1 = *(int *)(param_1 + 0x68);
  }
  else {
    uVar2 = 0xffffff88;
  }
  if (bVar3) {
    *(undefined2 *)(iVar1 + 10) = param_2;
  }
  thunk_FUN_00014e2c(param_1 + 4);
  return uVar2;
}



// FUN_0001db08 @ 0001db08 (48 bytes, called_by=0, calls=0)

uint FUN_0001db08(int param_1,undefined2 param_2)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  
  FUN_0001da72();
  uVar2 = ((uint)*(byte *)(param_1 + 0x60) << 0x1e) >> 0x1f;
  iVar1 = (uint)*(byte *)(param_1 + 0x60) << 0x1e;
  bVar3 = -1 < iVar1;
  if (bVar3) {
    iVar1 = *(int *)(param_1 + 100);
  }
  if (bVar3) {
    *(undefined2 *)(iVar1 + 0xc) = param_2;
    iVar1 = *(int *)(param_1 + 0x68);
  }
  else {
    uVar2 = 0xffffff88;
  }
  if (bVar3) {
    *(undefined2 *)(iVar1 + 0xc) = param_2;
  }
  thunk_FUN_00014e2c(param_1 + 4);
  return uVar2;
}



// FUN_0001db38 @ 0001db38 (70 bytes, called_by=0, calls=0)

undefined4
FUN_0001db38(int param_1,int param_2,undefined1 param_3,undefined1 param_4,undefined1 param_5)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  
  FUN_0001da72();
  iVar2 = (uint)*(byte *)(param_1 + 0x60) << 0x1e;
  if ((int)((uint)*(byte *)(param_1 + 0x60) << 0x1e) < 0) {
    uVar3 = 0xffffff88;
  }
  else {
    if (param_2 == 0) {
      iVar2 = *(int *)(param_1 + 100);
    }
    else {
      if (param_2 != 1) {
        *(byte *)(4 - (iVar2 >> 0x1f)) = (byte)((uint)iVar2 >> 0x1f);
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x1db5a);
        (*pcVar1)();
      }
      iVar2 = *(int *)(param_1 + 0x68);
    }
    *(undefined1 *)(iVar2 + 4) = param_3;
    *(undefined1 *)(iVar2 + 5) = param_4;
    *(undefined1 *)(iVar2 + 6) = param_5;
    uVar3 = 0;
  }
  thunk_FUN_00014e2c(param_1 + 4);
  return uVar3;
}



// FUN_0001db7e @ 0001db7e (10 bytes, called_by=0, calls=0)

uint FUN_0001db7e(int param_1)

{
  return ((uint)*(byte *)(param_1 + 0x60) << 0x1d) >> 0x1f;
}



// FUN_0001db88 @ 0001db88 (52 bytes, called_by=0, calls=0)

int * FUN_0001db88(int param_1,uint param_2,uint param_3)

{
  int *piVar1;
  bool bVar2;
  
  piVar1 = *(int **)(param_1 + 0x48);
  if (piVar1 == (int *)(param_1 + 0x48)) {
LAB_0001db96:
    piVar1 = (undefined4 *)0x0;
  }
  else {
    for (; piVar1 != (undefined4 *)0x0; piVar1 = (int *)*piVar1) {
      if (*(byte *)((int)piVar1 + 0x11) == param_2) {
        if (param_2 == 3) {
          bVar2 = *(byte *)(piVar1 + 2) == param_3;
        }
        else {
          bVar2 = param_2 == 0xf;
        }
        if (bVar2) {
          return piVar1;
        }
      }
      if (piVar1 == *(undefined4 **)(param_1 + 0x4c)) goto LAB_0001db96;
    }
  }
  return piVar1;
}



// FUN_0001dbbc @ 0001dbbc (244 bytes, called_by=0, calls=0)

undefined4 FUN_0001dbbc(int param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  int *piVar5;
  undefined4 uVar6;
  int iVar7;
  bool bVar8;
  
  FUN_00014d3c(param_1 + 4,param_2,0xffffffff,0xffffffff,param_4);
  iVar2 = *(int *)(param_1 + 100);
  iVar7 = *(int *)(param_1 + 0x68);
  if (((iVar2 == 0) || (iVar7 == 0)) || ((int)((uint)*(byte *)(param_1 + 0x60) << 0x1f) < 0)) {
    uVar6 = 0xffffffff;
  }
  else {
    if (*(int *)(param_1 + 0x48) == 0) {
      *(int *)(param_1 + 0x48) = param_1 + 0x48;
      *(int *)(param_1 + 0x4c) = param_1 + 0x48;
    }
    if (*param_2 == 0) {
      if (*(char *)((int)param_2 + 0x11) == '\x0f') {
        piVar5 = *(int **)(param_1 + 0x4c);
        *param_2 = param_1 + 0x48;
        param_2[1] = (int)piVar5;
        *piVar5 = (int)param_2;
        *(int **)(param_1 + 0x4c) = param_2;
      }
      if (*(char *)((int)param_2 + 0x11) == '\x03') {
        piVar5 = *(int **)(param_1 + 0x48);
        if ((int *)(param_1 + 0x48) != piVar5) {
          for (; piVar5 != (int *)0x0; piVar5 = (int *)*piVar5) {
            if (*(char *)((int)piVar5 + 0x11) == '\x03') {
              bVar1 = *(byte *)(piVar5 + 2);
              if ((piVar5 == *(int **)(param_1 + 0x4c)) || (iVar3 = *piVar5, iVar3 == 0)) {
                cVar4 = bVar1 + 1;
                goto LAB_0001dc80;
              }
              if ((*(char *)(iVar3 + 0x11) != '\x03') || ((uint)bVar1 != *(byte *)(iVar3 + 8) - 1))
              {
                *(byte *)(param_2 + 2) = bVar1 + 1;
                piVar5 = *(int **)(iVar3 + 4);
                *param_2 = iVar3;
                param_2[1] = (int)piVar5;
                *piVar5 = (int)param_2;
                *(int **)(iVar3 + 4) = param_2;
                goto LAB_0001dc38;
              }
            }
            else if (piVar5 == *(int **)(param_1 + 0x4c)) break;
          }
        }
        cVar4 = '\0';
LAB_0001dc80:
        *(char *)(param_2 + 2) = cVar4;
        piVar5 = *(int **)(param_1 + 0x4c);
        *param_2 = param_1 + 0x48;
        param_2[1] = (int)piVar5;
        *piVar5 = (int)param_2;
        *(int **)(param_1 + 0x4c) = param_2;
LAB_0001dc38:
        cVar4 = *(char *)((int)param_2 + 9);
        if (cVar4 == '\x02') {
          iVar3 = param_2[2];
          *(char *)(iVar7 + 0xf) = (char)iVar3;
          *(char *)(iVar2 + 0xf) = (char)iVar3;
        }
        else if (cVar4 == '\x03') {
          iVar3 = param_2[2];
          *(char *)(iVar7 + 0x10) = (char)iVar3;
          *(char *)(iVar2 + 0x10) = (char)iVar3;
        }
        else {
          bVar8 = cVar4 == '\x01';
          if (bVar8) {
            cVar4 = (char)param_2[2];
          }
          if (bVar8) {
            *(char *)(iVar7 + 0xe) = cVar4;
          }
          if (bVar8) {
            *(char *)(iVar2 + 0xe) = cVar4;
          }
        }
      }
      uVar6 = 0;
    }
    else {
      uVar6 = 0xffffff88;
    }
  }
  FUN_00014e2c(param_1 + 4);
  return uVar6;
}



// FUN_0001dcb0 @ 0001dcb0 (10 bytes, called_by=0, calls=0)

uint FUN_0001dcb0(uint *param_1)

{
  uint uVar1;
  
  uVar1 = *param_1;
  if (uVar1 != 0) {
    uVar1 = (uint)(byte)param_1[2];
  }
  return uVar1;
}



// FUN_0001dcba @ 0001dcba (32 bytes, called_by=0, calls=0)

void FUN_0001dcba(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  iVar1 = FUN_0000c064();
  if (iVar1 != 0) {
    UNRECOVERED_JUMPTABLE = (code *)**(undefined4 **)(*(int *)(iVar1 + 4) + 8);
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001dcd6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(*(int *)(iVar1 + 4),param_2,param_3);
      return;
    }
  }
  return;
}



// thunk_FUN_0001cab2 @ 0001dcda (4 bytes, called_by=0, calls=0)

void thunk_FUN_0001cab2(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  uStack_c = param_3;
  uStack_8 = param_3;
  FUN_0001ca44(param_1,param_2,&uStack_c,1,param_1);
  return;
}



// FUN_0001dcde @ 0001dcde (70 bytes, called_by=0, calls=0)

undefined4 FUN_0001dcde(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 8);
  DataMemoryBarrier(0x1b);
  DataMemoryBarrier(0x1b);
  if (*(int *)(*(int *)(param_1 + 0x10) + 0xa0) << 0x1e < 0) {
    if (*(int *)(iVar2 + 0x28) == 0) {
      uVar1 = 0xffffff7a;
    }
    else {
      (**(code **)(iVar2 + 0x3c))();
      uVar1 = (**(code **)(iVar2 + 0x28))(param_1,param_2,param_3,*(code **)(iVar2 + 0x28),param_4);
      (**(code **)(iVar2 + 0x40))(param_1);
    }
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}



// FUN_0001dd24 @ 0001dd24 (14 bytes, called_by=0, calls=0)

uint FUN_0001dd24(uint param_1,uint param_2)

{
  if (param_2 != 0) {
    param_2 = param_1 >> 7;
  }
  return param_2 ^ 1;
}



// FUN_0001dd32 @ 0001dd32 (114 bytes, called_by=0, calls=0)

undefined4 FUN_0001dd32(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  byte bVar5;
  int iVar6;
  code *UNRECOVERED_JUMPTABLE;
  
  bVar5 = *(byte *)(param_1 + 0x20) & 0x1f;
  if (bVar5 == 1) {
    iVar1 = FUN_0001debc(param_1,*(undefined1 *)(param_1 + 0x24));
  }
  else if (bVar5 == 2) {
    iVar1 = FUN_0000c064(param_1,*(undefined1 *)(param_1 + 0x24));
  }
  else {
    if ((*(byte *)(param_1 + 0x20) & 0x1f) != 0) goto LAB_0001dd94;
    iVar1 = FUN_0001deee(param_1,*(undefined1 *)(param_1 + 0x21));
  }
  if (iVar1 != 0) {
    iVar2 = FUN_0001dd24(*(undefined1 *)(param_1 + 0x20),*(undefined2 *)(param_1 + 0x26));
    iVar6 = *(int *)(*(int *)(iVar1 + 4) + 8);
    if (iVar2 == 0) {
      UNRECOVERED_JUMPTABLE = *(code **)(iVar6 + 0xc);
    }
    else {
      UNRECOVERED_JUMPTABLE = *(code **)(iVar6 + 8);
    }
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001dd84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (*UNRECOVERED_JUMPTABLE)(*(int *)(iVar1 + 4),param_1 + 0x20,param_2);
      return uVar3;
    }
  }
LAB_0001dd94:
  puVar4 = (undefined4 *)thunk_FUN_000146fc();
  *puVar4 = 0xffffff7a;
  return 0;
}



// FUN_0001dda4 @ 0001dda4 (56 bytes, called_by=0, calls=0)

undefined4 FUN_0001dda4(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 8);
  DataMemoryBarrier(0x1b);
  DataMemoryBarrier(0x1b);
  if (*(int *)(*(int *)(param_1 + 0x10) + 0xa0) << 0x1e < 0) {
    (**(code **)(iVar2 + 0x3c))();
    uVar1 = (**(code **)(iVar2 + 0x24))(param_1,param_2);
    (**(code **)(iVar2 + 0x40))(param_1);
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}



// thunk_FUN_0001cab2 @ 0001ddfa (4 bytes, called_by=0, calls=0)

void thunk_FUN_0001cab2(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  uStack_c = param_3;
  uStack_8 = param_3;
  FUN_0001ca44(param_1,param_2,&uStack_c,1,param_1);
  return;
}



// FUN_0001ddfe @ 0001ddfe (14 bytes, called_by=0, calls=0)

void FUN_0001ddfe(int param_1,undefined4 param_2)

{
  FUN_00014d3c(param_1 + 4,param_2,0xffffffff,0xffffffff);
  return;
}



// thunk_FUN_00014e2c @ 0001de0c (4 bytes, called_by=0, calls=0)

undefined4 thunk_FUN_00014e2c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 8) == 0) {
    uVar3 = 0xffffffea;
  }
  else if (*(int *)(param_1 + 8) == *(int *)(DAT_00014e9c + 8)) {
    if (*(uint *)(param_1 + 0xc) < 2) {
      uVar3 = 0;
      bVar1 = (bool)isCurrentModePrivileged();
      if (bVar1) {
        uVar3 = getBasePriority();
      }
      bVar1 = (bool)isCurrentModePrivileged();
      if ((bVar1) && (uVar2 = getBasePriority(), uVar2 == 0 || 0x40 < uVar2)) {
        setBasePriority(0x40);
      }
      InstructionSynchronizationBarrier(0xf);
      FUN_000208d2(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x10),
                   *(int *)(DAT_00014e9c + 8),0x40,param_4);
      iVar4 = FUN_00020d5e(param_1);
      *(int *)(param_1 + 8) = iVar4;
      if (iVar4 == 0) {
        *(undefined4 *)(param_1 + 0xc) = 0;
        bVar1 = (bool)isCurrentModePrivileged();
        if (bVar1) {
          setBasePriority(uVar3);
        }
        InstructionSynchronizationBarrier(0xf);
      }
      else {
        *(int *)(param_1 + 0x10) = (int)*(char *)(iVar4 + 0xe);
        *(undefined4 *)(iVar4 + 0xac) = 0;
        FUN_00020c68();
        FUN_00015768(DAT_00014ea0,uVar3);
      }
    }
    else {
      *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) - 1;
    }
    uVar3 = 0;
  }
  else {
    uVar3 = 0xffffffff;
  }
  return uVar3;
}



// FUN_0001de10 @ 0001de10 (40 bytes, called_by=0, calls=0)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0001de10(int param_1,int param_2,uint param_3)

{
  code *pcVar1;
  int *piVar2;
  
  if (param_2 == 0) {
    piVar2 = (int *)(param_1 + 0x50);
  }
  else {
    if (param_2 != 1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x1de1a);
      (*pcVar1)();
    }
    piVar2 = (int *)(param_1 + 0x58);
  }
  piVar2 = (int *)*piVar2;
  if (piVar2 != (int *)0x0) {
    while (*(byte *)(piVar2[1] + 5) != param_3) {
      piVar2 = (int *)*piVar2;
      if (piVar2 == (int *)0x0) {
        return;
      }
    }
  }
  return;
}



// FUN_0001de38 @ 0001de38 (66 bytes, called_by=0, calls=0)

undefined4 FUN_0001de38(int param_1)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 0x2c) != '\x02') {
    if (2 < (*DAT_0000bd4c & 7)) {
      thunk_FUN_0001cab2(DAT_0000bd4c,3,DAT_0000bd50,*DAT_0000bd4c & 7,*(char *)(param_1 + 0x2c));
    }
    return 0;
  }
  uVar1 = FUN_0001da84();
  uVar1 = FUN_0001de10(param_1,uVar1,*(undefined1 *)(param_1 + 0x34));
  return uVar1;
}



// FUN_0001de60 @ 0001de60 (14 bytes, called_by=0, calls=0)

int FUN_0001de60(void)

{
  int iVar1;
  
  iVar1 = FUN_0001de10();
  if (iVar1 != 0) {
    iVar1 = 1;
  }
  return iVar1;
}



// FUN_0001de6e @ 0001de6e (14 bytes, called_by=0, calls=0)

void FUN_0001de6e(int param_1,undefined4 param_2)

{
  FUN_00014d3c(param_1 + 4,param_2,0xffffffff,0xffffffff);
  return;
}



// FUN_0001de7c @ 0001de7c (32 bytes, called_by=0, calls=0)

int FUN_0001de7c(int param_1)

{
  int iVar1;
  uint uVar2;
  code *pcVar3;
  
  pcVar3 = *(code **)(*(int *)(param_1 + 8) + 0x30);
  if (pcVar3 != (code *)0x0) {
    pcVar3 = (code *)(*pcVar3)();
  }
  iVar1 = 0;
  while( true ) {
    if (pcVar3 == (code *)0x0) {
      return iVar1;
    }
    if (*(byte **)pcVar3 == (byte *)0x0) break;
    uVar2 = (uint)**(byte **)pcVar3;
    if (uVar2 == 0) {
      return iVar1;
    }
    iVar1 = iVar1 + uVar2;
    pcVar3 = pcVar3 + 4;
  }
  return iVar1;
}



// FUN_0001de9c @ 0001de9c (32 bytes, called_by=0, calls=0)

void FUN_0001de9c(void)

{
  int iVar1;
  int *piVar2;
  uint in_r3;
  
  iVar1 = FUN_0001de10();
  if (iVar1 != 0) {
    for (piVar2 = *(int **)(iVar1 + 0xc);
        (piVar2 != (int *)0x0 && ((1 << (in_r3 & 0xff) & piVar2[4]) == 0)); piVar2 = (int *)*piVar2)
    {
    }
  }
  return;
}



// FUN_0001debc @ 0001debc (32 bytes, called_by=0, calls=0)

void FUN_0001debc(undefined4 param_1,uint param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = FUN_0001de38();
  if (iVar1 != 0) {
    for (piVar2 = *(int **)(iVar1 + 0xc);
        (piVar2 != (int *)0x0 && ((1 << (param_2 & 0xff) & piVar2[4]) == 0));
        piVar2 = (int *)*piVar2) {
    }
  }
  return;
}



// FUN_0001deee @ 0001deee (46 bytes, called_by=0, calls=0)

void FUN_0001deee(undefined4 param_1,uint param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  iVar1 = FUN_0001de38();
  if (iVar1 != 0) {
    for (piVar2 = *(int **)(iVar1 + 0xc); piVar2 != (int *)0x0; piVar2 = (int *)*piVar2) {
      piVar3 = *(int **)(piVar2[1] + 0xc);
      if (piVar3 != (int *)0x0) {
        for (iVar1 = 0; iVar1 < (int)(uint)*(byte *)(piVar3 + 1); iVar1 = iVar1 + 1) {
          if (*(byte *)(*piVar3 + iVar1) == param_2) {
            return;
          }
        }
      }
    }
  }
  return;
}



// FUN_0001df1c @ 0001df1c (84 bytes, called_by=0, calls=0)

int FUN_0001df1c(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  
  piVar2 = *(int **)(param_2 + 0xc);
  do {
    if (piVar2 == (int *)0x0) {
      return 0;
    }
    uVar3 = 1;
    do {
      if (piVar2[3] == 0) break;
      iVar1 = (uVar3 & 0x7f) + 0x10;
      if (((int)(((uint)piVar2[3] >> iVar1) << 0x1f) < 0) &&
         (iVar1 = FUN_0001e092(*(undefined4 *)(param_1 + 0x18),(uVar3 | 0xffffff80) & 0xff,
                               piVar2 + 3,iVar1,param_4), iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = ((uint)piVar2[3] >> (uVar3 & 0xff)) << 0x1f;
      if ((iVar1 < 0) &&
         (iVar1 = FUN_0001e092(*(undefined4 *)(param_1 + 0x18),uVar3 & 0xff,piVar2 + 3,iVar1,param_4
                              ), iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 != 0x10);
    piVar2 = (int *)*piVar2;
  } while( true );
}



// FUN_0001df70 @ 0001df70 (80 bytes, called_by=0, calls=0)

int FUN_0001df70(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  iVar4 = *(int *)(param_3 + 4);
  uVar3 = 0;
  uVar1 = *(undefined1 *)(iVar4 + 5);
  uVar5 = param_1;
  uVar6 = param_2;
  while( true ) {
    if ((int)(uint)*(byte *)(iVar4 + 4) <= (int)uVar3) {
      return 0;
    }
    iVar2 = FUN_0001de9c(param_1,param_2,uVar1,uVar3 & 0xff,uVar5,uVar6);
    if (iVar2 == 0) break;
    uVar5 = 0;
    iVar2 = FUN_0000c26c(param_1,iVar2,1,uVar3 & 0xff);
    if (iVar2 != 0) {
      return iVar2;
    }
    uVar3 = uVar3 + 1;
  }
  return -0x3d;
}



// FUN_0001dfc0 @ 0001dfc0 (124 bytes, called_by=0, calls=0)

int FUN_0001dfc0(int param_1,uint param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar5 = param_2;
  uVar6 = param_3;
  iVar1 = FUN_0001debc();
  if ((iVar1 == 0) || (0xf < param_2)) {
LAB_0001dfd2:
    iVar1 = -2;
  }
  else {
    uVar4 = (uint)*(byte *)(param_1 + param_2 + 0x36);
    if (uVar4 != param_3) {
      iVar2 = FUN_0000c26c(param_1,iVar1,0,param_2,param_3,uVar5,uVar6);
      if (iVar2 != 0) goto LAB_0001dfd2;
      iVar2 = FUN_0000c26c(param_1,iVar1,2,param_2,uVar4,uVar5,uVar6);
      if (iVar2 != 0) {
        return iVar2;
      }
      iVar2 = FUN_0000c26c(param_1,iVar1,1,param_2,param_3,uVar5,uVar6);
      if (iVar2 != 0) {
        return iVar2;
      }
      pcVar3 = *(code **)(*(int *)(*(int *)(iVar1 + 4) + 8) + 4);
      if (pcVar3 != (code *)0x0) {
        (*pcVar3)(*(int *)(iVar1 + 4),param_2,param_3);
      }
      *(char *)(param_1 + param_2 + 0x36) = (char)param_3;
    }
    iVar1 = 0;
  }
  return iVar1;
}



// FUN_0001e03c @ 0001e03c (30 bytes, called_by=0, calls=0)

void FUN_0001e03c(uint *param_1,uint param_2)

{
  bool bVar1;
  
  bVar1 = (param_2 & 0x80) != 0;
  if (bVar1) {
    param_2 = param_2 & 0xffffff7f;
  }
  if (bVar1) {
    param_2 = param_2 + 0x10;
  }
  *param_1 = *param_1 & ~(1 << (param_2 & 0xff));
  return;
}



// FUN_0001e05a @ 0001e05a (56 bytes, called_by=0, calls=0)

void FUN_0001e05a(undefined4 param_1,int param_2,uint *param_3)

{
  int iVar1;
  byte bVar2;
  
  iVar1 = FUN_0001ea40(param_1,*(undefined1 *)(param_2 + 2),*(undefined1 *)(param_2 + 3),
                       *(undefined2 *)(param_2 + 4),*(undefined1 *)(param_2 + 6),param_2,param_3);
  if (iVar1 == 0) {
    bVar2 = *(byte *)(param_2 + 2);
    if (*(char *)(param_2 + 2) < '\0') {
      bVar2 = (bVar2 & 0x7f) + 0x10;
    }
    *param_3 = 1 << bVar2 | *param_3;
  }
  return;
}



// FUN_0001e092 @ 0001e092 (44 bytes, called_by=0, calls=0)

int FUN_0001e092(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_0001ea92();
  if (iVar1 == 0) {
    FUN_0001e03c(param_3,param_2);
    iVar1 = FUN_0001ebcc(param_1,param_2);
    if (iVar1 == 0) {
      FUN_00015868();
    }
  }
  return iVar1;
}



// FUN_0001e0be @ 0001e0be (122 bytes, called_by=0, calls=0)

undefined4 FUN_0001e0be(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 4);
  if ((*(char *)(param_2 + 0x18) < '\0') && (iVar1 = FUN_0001db7e(iVar3), iVar1 != 0)) {
    return 0xffffffff;
  }
  *(int *)(param_2 + 0x1a) = param_1;
  iVar3 = *(int *)(iVar3 + 0x18);
  iVar4 = *(int *)(iVar3 + 8);
  (**(code **)(iVar4 + 0x3c))();
  iVar1 = FUN_0001e880(*(undefined4 *)(iVar3 + 0x10));
  if ((iVar1 == 0) || (*(char *)(param_2 + 0x18) == '\0')) {
    uVar2 = 0xffffffff;
  }
  else {
    iVar1 = FUN_0001e892(iVar3);
    if (iVar1 == 0) {
      uVar2 = 0xffffffed;
    }
    else {
      *(byte *)(param_2 + 0x19) = *(byte *)(param_2 + 0x19) & 0xfe;
      uVar2 = (**(code **)(iVar4 + 4))
                        (iVar3,iVar1,param_2,*(code **)(iVar4 + 4),unaff_r4,unaff_r5,unaff_r6,in_lr)
      ;
    }
  }
  (**(code **)(iVar4 + 0x40))(iVar3);
  return uVar2;
}



// FUN_0001e110 @ 0001e110 (44 bytes, called_by=0, calls=0)

undefined4 FUN_0001e110(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  FUN_00014d3c(param_1 + 4,param_2,0xffffffff,0xffffffff,param_4);
  if (*(int *)(param_1 + 0x1c) == 0) {
    *(undefined4 *)(param_1 + 0x1c) = param_2;
    uVar1 = 0;
  }
  else {
    uVar1 = 0xffffff88;
  }
  FUN_00014e2c(param_1 + 4);
  return uVar1;
}



// FUN_0001e158 @ 0001e158 (126 bytes, called_by=0, calls=0)

void FUN_0001e158(int param_1,undefined1 param_2,undefined4 param_3)

{
  bool bVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 *local_14 [2];
  undefined4 in_stack_fffffff8;
  
  if (*(int *)(param_1 + 0x1c) == 0) {
    return;
  }
  iVar4 = FUN_00014b78(DAT_0000c544,local_14,0,0);
  if (iVar4 == 0) {
    local_14[0][1] = param_1;
    local_14[0][2] = CONCAT31((int3)((uint)in_stack_fffffff8 >> 8),param_2);
    local_14[0][3] = param_3;
    uVar5 = 0;
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      uVar5 = getBasePriority();
    }
    bVar1 = (bool)isCurrentModePrivileged();
    if ((bVar1) && (uVar2 = getBasePriority(), uVar2 == 0 || 0x40 < uVar2)) {
      setBasePriority(0x40);
    }
    InstructionSynchronizationBarrier(0xf);
    *local_14[0] = 0;
    puVar3 = DAT_0000c548;
    puVar6 = (undefined4 *)DAT_0000c548[1];
    if (puVar6 == (undefined4 *)0x0) {
      *DAT_0000c548 = local_14[0];
      puVar3[1] = local_14[0];
    }
    else {
      *puVar6 = local_14[0];
      puVar3[1] = local_14[0];
    }
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      setBasePriority(uVar5);
    }
    InstructionSynchronizationBarrier(0xf);
    FUN_000152ec(DAT_0000c54c,puVar6,0,0);
  }
  return;
}



// FUN_0001e1f6 @ 0001e1f6 (168 bytes, called_by=0, calls=0)

undefined4 FUN_0001e1f6(int param_1,int param_2,int param_3,undefined4 param_4)

{
  char cVar1;
  ushort uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined1 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  
  uVar3 = *(undefined4 *)(param_1 + 4);
  iVar7 = *(int *)(param_1 + 0x10);
  iVar8 = *(int *)(iVar7 + 0x10);
  if (*(char *)(param_2 + 1) == ' ') {
    if (*(short *)(param_2 + 6) == 7) {
      puVar4 = *(undefined4 **)(param_3 + 0xc);
      *(undefined4 *)(iVar8 + 0x10) = *puVar4;
      *(undefined2 *)(iVar8 + 0x14) = *(undefined2 *)(puVar4 + 1);
      *(undefined1 *)(iVar8 + 0x16) = *(undefined1 *)((int)puVar4 + 6);
      *(undefined4 *)(iVar8 + 0x1c) = *(undefined4 *)(iVar8 + 0x10);
      if (*(char *)(iVar8 + 0x14) == '\0') {
        uVar5 = 1;
      }
      else if (*(char *)(iVar8 + 0x14) == '\x01') {
        uVar5 = 2;
      }
      else {
        uVar5 = 3;
      }
      *(undefined1 *)(iVar8 + 0x21) = uVar5;
      uVar5 = *(undefined1 *)(iVar8 + 0x15);
      switch(uVar5) {
      case 1:
      case 2:
      case 3:
      case 4:
        break;
      default:
        uVar5 = 0;
      }
      *(undefined1 *)(iVar8 + 0x20) = uVar5;
      cVar1 = *(char *)(iVar8 + 0x16);
      if (cVar1 == '\x06') {
        uVar5 = 1;
      }
      else if (cVar1 == '\a') {
        uVar5 = 2;
      }
      else if (cVar1 == '\x05') {
        uVar5 = 0;
      }
      else {
        uVar5 = 3;
      }
      *(undefined1 *)(iVar8 + 0x22) = uVar5;
      *(undefined1 *)(iVar8 + 0x23) = *(undefined1 *)(iVar8 + 0x50);
      uVar6 = 8;
      goto LAB_0001e27a;
    }
  }
  else if (*(char *)(param_2 + 1) == '\"') {
    uVar2 = *(ushort *)(param_2 + 2);
    *(ushort *)(iVar8 + 0x18) = uVar2;
    *(byte *)(iVar8 + 0x25) = (byte)uVar2 & 1;
    *(byte *)(iVar8 + 0x24) = (byte)(((uint)uVar2 << 0x1e) >> 0x1f);
    uVar6 = 9;
LAB_0001e27a:
    FUN_0001e158(uVar3,uVar6,iVar7,iVar8,param_4);
    return 0;
  }
  puVar4 = (undefined4 *)thunk_FUN_000146fc();
  *puVar4 = 0xffffff7a;
  return 0;
}



// FUN_0001e2a2 @ 0001e2a2 (62 bytes, called_by=0, calls=0)

undefined4 FUN_0001e2a2(int param_1,int param_2,int param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  ushort uVar2;
  undefined4 uVar3;
  
  if (*(char *)(param_2 + 1) == '!') {
    if (param_3 != 0) {
      uVar2 = *(ushort *)(param_2 + 6);
      if (6 < uVar2) {
        uVar2 = 7;
      }
      FUN_0001d9cc(param_3 + 0xc,*(int *)(*(int *)(param_1 + 0x10) + 0x10) + 0x10,uVar2,param_3,
                   param_4);
      return 0;
    }
    puVar1 = (undefined4 *)thunk_FUN_000146fc();
    uVar3 = 0xfffffff4;
  }
  else {
    puVar1 = (undefined4 *)thunk_FUN_000146fc();
    uVar3 = 0xffffff7a;
  }
  *puVar1 = uVar3;
  return 0;
}



// FUN_0001e2e0 @ 0001e2e0 (30 bytes, called_by=0, calls=0)

void FUN_0001e2e0(uint *param_1,uint param_2)

{
  bool bVar1;
  
  DataMemoryBarrier(0x1b);
  do {
    ExclusiveAccess(param_1);
    bVar1 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar1);
  *param_1 = *param_1 & ~(1 << (param_2 & 0xff));
  DataMemoryBarrier(0x1b);
  return;
}



// FUN_0001e2fe @ 0001e2fe (24 bytes, called_by=0, calls=0)

void FUN_0001e2fe(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0001e2e0(*(int *)(*(int *)(param_1 + 0x10) + 0x10) + 0x98,0);
  FUN_0001e2e0(uVar1,1,param_3,param_4);
  return;
}



// FUN_0001e77e @ 0001e77e (6 bytes, called_by=0, calls=0)

void FUN_0001e77e(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001e782. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(param_1 + 8) + 4))();
  return;
}



// FUN_0001e784 @ 0001e784 (12 bytes, called_by=0, calls=0)

void FUN_0001e784(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001e78e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(param_1 + 8) + 8))();
  return;
}



// FUN_0001e7d6 @ 0001e7d6 (68 bytes, called_by=0, calls=0)

void FUN_0001e7d6(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = FUN_0000a588(*(undefined1 *)(param_1 + 10));
  if (*(int *)(param_1 + 0x14) != 0) {
    if (-1 < (int)((uint)*(byte *)(param_1 + 9) << 0x1f)) {
      (**(code **)(**(int **)(iVar1 + 0x24) + 8))(param_1);
    }
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  FUN_000208f0(iVar1,0,param_1,0,0,param_1,param_3,in_lr);
  return;
}



// FUN_0001e806 @ 0001e806 (104 bytes, called_by=0, calls=0)

uint FUN_0001e806(int param_1,int param_2,uint param_3,ushort param_4)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  
  bVar1 = *(byte *)(param_1 + 0x1a);
  uVar4 = (uint)bVar1;
  if (param_2 << 0x18 < 0) {
    bVar2 = bVar1 & 0x20;
    uVar3 = uVar4 & 0x20;
  }
  else {
    bVar2 = bVar1 & 0x40;
    uVar3 = uVar4 & 0x40;
  }
  if (bVar2 == 0) {
    return uVar3;
  }
  if ((*(ushort *)(param_1 + 0x18) & 0x7ff) < (param_4 & 0x7ff)) {
LAB_0001e86a:
    uVar4 = 0;
  }
  else {
    param_3 = param_3 & 3;
    if (param_3 == 2) {
      return (uVar4 << 0x1d) >> 0x1f;
    }
    if (param_3 == 3) {
      if ((bVar1 & 2) == 0) {
        return uVar4 & 2;
      }
      if ((param_4 & 0x1800) == 0) {
        return 1;
      }
    }
    else {
      if (param_3 != 1) {
        return uVar4 & 1;
      }
      if ((bVar1 & 8) == 0) goto LAB_0001e86a;
      if ((param_4 & 0x1800) == 0) {
        return 1;
      }
    }
    uVar4 = (uVar4 << 0x1b) >> 0x1f;
  }
  return uVar4;
}



// FUN_0001e86e @ 0001e86e (18 bytes, called_by=0, calls=0)

uint FUN_0001e86e(int param_1)

{
  DataMemoryBarrier(0x1b);
  DataMemoryBarrier(0x1b);
  return *(uint *)(param_1 + 0xa0) & 1;
}



// FUN_0001e880 @ 0001e880 (18 bytes, called_by=0, calls=0)

uint FUN_0001e880(int param_1)

{
  DataMemoryBarrier(0x1b);
  DataMemoryBarrier(0x1b);
  return (uint)(*(int *)(param_1 + 0xa0) << 0x1e) >> 0x1f;
}



// FUN_0001e892 @ 0001e892 (18 bytes, called_by=0, calls=0)

undefined4 FUN_0001e892(int param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = param_2 & 0xf;
  if ((int)(param_2 << 0x18) < 0) {
    uVar1 = uVar1 + 0x10;
  }
  return *(undefined4 *)(*(int *)(param_1 + 0x10) + uVar1 * 4);
}



// FUN_0001e8a4 @ 0001e8a4 (14 bytes, called_by=0, calls=0)

uint FUN_0001e8a4(void)

{
  int iVar1;
  
  iVar1 = FUN_0001e892();
  return ((uint)*(byte *)(iVar1 + 0x1c) << 0x1b) >> 0x1f;
}



// FUN_0001e8b2 @ 0001e8b2 (18 bytes, called_by=0, calls=0)

void FUN_0001e8b2(undefined4 param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  
  iVar1 = FUN_0001e892();
  *(byte *)(iVar1 + 0x1c) = *(byte *)(iVar1 + 0x1c) & 0xef | (byte)((param_3 & 1) << 4);
  return;
}



// FUN_0001e8c4 @ 0001e8c4 (46 bytes, called_by=0, calls=0)

undefined4 FUN_0001e8c4(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  
  iVar3 = *(int *)(param_1 + 0x10);
  uVar5 = FUN_0001e86e(iVar3);
  iVar2 = (int)((ulonglong)uVar5 >> 0x20);
  if ((int)uVar5 == 0) {
    uVar4 = *(byte *)(iVar2 + 0x20) & 0xf;
    if ((int)((uint)*(byte *)(iVar2 + 0x20) << 0x18) < 0) {
      uVar4 = uVar4 + 0x10;
    }
    *(int *)(iVar3 + uVar4 * 4) = iVar2;
    FUN_000209d4(iVar2);
    uVar1 = 0;
  }
  else {
    uVar1 = 0xfffffff3;
  }
  return uVar1;
}



// FUN_0001e8f2 @ 0001e8f2 (22 bytes, called_by=0, calls=0)

void FUN_0001e8f2(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0001e892();
  if ((int)uVar1 != 0) {
    FUN_00014ea4((int)uVar1,(int)((ulonglong)uVar1 >> 0x20),0,0);
    return;
  }
  return;
}



// FUN_0001e908 @ 0001e908 (58 bytes, called_by=0, calls=0)

int FUN_0001e908(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  
  uVar4 = FUN_0001e892();
  piVar1 = (int *)uVar4;
  if (piVar1 != (int *)0x0) {
    uVar4 = FUN_00014ea4(piVar1,(int)((ulonglong)uVar4 >> 0x20),0,0);
    iVar2 = (int)uVar4;
    if (iVar2 != 0) {
      do {
        iVar3 = (int)uVar4;
        if (*piVar1 == 0) {
          return iVar2;
        }
        uVar4 = FUN_00014ea4(piVar1,(int)((ulonglong)uVar4 >> 0x20),0,0);
        *(int *)(iVar3 + 4) = (int)uVar4;
      } while ((int)uVar4 != 0);
      return iVar2;
    }
  }
  return 0;
}



// FUN_0001e942 @ 0001e942 (26 bytes, called_by=0, calls=0)

void FUN_0001e942(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_0001e892();
  if (puVar1 != (undefined4 *)0x0) {
    FUN_000209bc(*puVar1,0,param_3,param_4);
    return;
  }
  return;
}



// thunk_FUN_000209ec @ 0001e954 (4 bytes, called_by=0, calls=0)

void thunk_FUN_000209ec(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_000208f0(param_1,0,param_2,0,1,param_2,param_3);
  return;
}



// FUN_0001e966 @ 0001e966 (8 bytes, called_by=0, calls=0)

uint FUN_0001e966(int param_1)

{
  return ((uint)*(byte *)(param_1 + 0x19) << 0x1c) >> 0x1f;
}



// FUN_0001e96e @ 0001e96e (24 bytes, called_by=0, calls=0)

void FUN_0001e96e(int param_1,undefined4 param_2,undefined4 param_3)

{
  code *pcVar1;
  undefined4 local_14;
  undefined4 local_10;
  int iStack_c;
  
  pcVar1 = *(code **)(*(int *)(param_1 + 0x10) + 0x98);
  local_14 = param_2;
  local_10 = param_3;
  iStack_c = param_1;
  (*pcVar1)(param_1,&local_14,param_3,pcVar1,param_1);
  return;
}



// FUN_0001e986 @ 0001e986 (48 bytes, called_by=0, calls=0)

undefined4 FUN_0001e986(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 local_14;
  undefined3 uStack_13;
  undefined4 local_10;
  int iStack_c;
  
  iVar2 = *(int *)(param_1 + 0x10);
  _local_14 = CONCAT31((int3)((uint)param_2 >> 8),6);
  local_10 = param_2;
  iStack_c = param_1;
  uVar3 = FUN_0001e86e(iVar2);
  if ((int)uVar3 == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    *(undefined4 *)((int)((ulonglong)uVar3 >> 0x20) + 0x1e) = param_3;
    uVar1 = (**(code **)(iVar2 + 0x98))(param_1,&local_14);
  }
  return uVar1;
}



// FUN_0001e9b6 @ 0001e9b6 (138 bytes, called_by=0, calls=0)

undefined4 FUN_0001e9b6(int param_1,undefined4 param_2,uint param_3,ushort *param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ushort uVar4;
  uint uVar5;
  int iVar6;
  bool bVar7;
  ushort *puVar8;
  
  iVar6 = *(int *)(param_1 + 8);
  puVar8 = param_4;
  iVar2 = FUN_0001e892();
  if (iVar2 == 0) {
    return 0xffffffed;
  }
  (**(code **)(iVar6 + 0x3c))(param_1);
  uVar5 = (uint)*param_4;
  iVar3 = FUN_0001e806(iVar2,param_2,param_3,uVar5,puVar8);
  if (iVar3 == 0) {
    (**(code **)(iVar6 + 0x40))(param_1);
    return 0xffffff7a;
  }
  if (uVar5 == 0) {
    uVar5 = *(int *)(*(int *)(param_1 + 0x10) + 0x80) << 0x1f;
    bVar7 = -1 < (int)uVar5;
    if (bVar7) {
      uVar5 = 0x40;
    }
    uVar1 = uVar5;
    if (!bVar7) {
      uVar5 = 0x200;
      uVar1 = 0x400;
    }
    if ((param_3 & 3) == 2) {
      uVar4 = *(ushort *)(iVar2 + 0x18);
      if (uVar5 <= uVar4) {
        uVar4 = (ushort)uVar5;
      }
    }
    else {
      if ((param_3 & 3) != 3) goto LAB_0001ea08;
      uVar5 = (uint)*(ushort *)(iVar2 + 0x18);
      if (uVar1 <= *(ushort *)(iVar2 + 0x18)) {
        uVar5 = uVar1;
      }
      uVar4 = (ushort)uVar5;
    }
    *param_4 = uVar4;
  }
LAB_0001ea08:
  (**(code **)(iVar6 + 0x40))(param_1);
  return 0;
}



// FUN_0001ea40 @ 0001ea40 (82 bytes, called_by=0, calls=0)

undefined4
FUN_0001ea40(int param_1,uint param_2,undefined4 param_3,undefined4 param_4,undefined1 param_5)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = *(int *)(param_1 + 8);
  if ((param_2 & 0x7f) == 0) {
    uVar2 = 0xffffffea;
  }
  else {
    uVar4 = param_2;
    (**(code **)(iVar3 + 0x3c))();
    iVar1 = FUN_0001e880(*(undefined4 *)(param_1 + 0x10));
    if (iVar1 == 0) {
      uVar2 = 0xffffffff;
    }
    else {
      uVar2 = FUN_0000cc54(param_1,param_2,param_3,param_4,param_5,uVar4);
    }
    (**(code **)(iVar3 + 0x40))(param_1);
  }
  return uVar2;
}



// FUN_0001ea92 @ 0001ea92 (56 bytes, called_by=0, calls=0)

undefined4 FUN_0001ea92(int param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 8);
  if ((param_2 & 0x7f) == 0) {
    uVar2 = 0xffffffea;
  }
  else {
    (**(code **)(iVar3 + 0x3c))();
    iVar1 = FUN_0001e86e(*(undefined4 *)(param_1 + 0x10));
    if (iVar1 == 0) {
      uVar2 = 0xffffffff;
    }
    else {
      uVar2 = FUN_0000ccf0(param_1,param_2);
    }
    (**(code **)(iVar3 + 0x40))(param_1);
  }
  return uVar2;
}



// FUN_0001eaca @ 0001eaca (86 bytes, called_by=0, calls=0)

undefined4 FUN_0001eaca(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 8);
  (**(code **)(iVar3 + 0x3c))();
  iVar1 = FUN_0001e880(*(undefined4 *)(param_1 + 0x10));
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    iVar1 = FUN_0001e892(param_1,param_2);
    if ((iVar1 == 0) || (-1 < (int)((uint)*(byte *)(iVar1 + 0x1c) << 0x1f))) {
      uVar2 = 0xffffffed;
    }
    else if ((*(byte *)(iVar1 + 0x21) & 3) == 1) {
      uVar2 = 0xffffff7a;
    }
    else {
      uVar2 = (**(code **)(iVar3 + 0xc))(param_1,iVar1);
    }
  }
  (**(code **)(iVar3 + 0x40))(param_1);
  return uVar2;
}



// FUN_0001eb20 @ 0001eb20 (98 bytes, called_by=0, calls=0)

int FUN_0001eb20(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 8);
  (**(code **)(iVar3 + 0x3c))();
  iVar1 = FUN_0001e880(*(undefined4 *)(param_1 + 0x10));
  if (iVar1 == 0) {
    iVar1 = -1;
  }
  else {
    iVar2 = FUN_0001e892(param_1,param_2);
    if ((iVar2 == 0) || (-1 < (int)((uint)*(byte *)(iVar2 + 0x1c) << 0x1f))) {
      iVar1 = -0x13;
    }
    else if ((*(byte *)(iVar2 + 0x21) & 3) == 1) {
      iVar1 = -0x86;
    }
    else {
      iVar1 = (**(code **)(iVar3 + 0x10))(param_1,iVar2,param_3,*(code **)(iVar3 + 0x10),param_4);
      if (iVar1 == 0) {
        *(byte *)(iVar2 + 0x1c) = *(byte *)(iVar2 + 0x1c) & 0xfd;
      }
    }
  }
  (**(code **)(iVar3 + 0x40))(param_1);
  return iVar1;
}



// FUN_0001ebcc @ 0001ebcc (66 bytes, called_by=0, calls=0)

int FUN_0001ebcc(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 8);
  (**(code **)(iVar3 + 0x3c))();
  iVar1 = FUN_0001e86e(*(undefined4 *)(param_1 + 0x10));
  if (iVar1 == 0) {
    iVar1 = -1;
  }
  else {
    piVar2 = (int *)FUN_0001e892(param_1,param_2);
    if (piVar2 == (int *)0x0) {
      iVar1 = -0x13;
    }
    else {
      iVar1 = *piVar2;
      if (iVar1 != 0) {
        iVar1 = (**(code **)(iVar3 + 8))(param_1,piVar2);
      }
    }
  }
  (**(code **)(iVar3 + 0x40))(param_1);
  return iVar1;
}



// FUN_0001ec2e @ 0001ec2e (44 bytes, called_by=0, calls=0)

int FUN_0001ec2e(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = *(undefined4 **)(param_1 + 8);
  (*(code *)puVar2[0xf])();
  iVar1 = FUN_0001e880(*(undefined4 *)(param_1 + 0x10));
  if (iVar1 != 0) {
    if ((code *)*puVar2 == (code *)0x0) {
      iVar1 = 1;
    }
    else {
      iVar1 = (*(code *)*puVar2)(param_1);
    }
  }
  (*(code *)puVar2[0x10])(param_1);
  return iVar1;
}



// FUN_0001ec5a @ 0001ec5a (90 bytes, called_by=0, calls=0)

int FUN_0001ec5a(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  
  iVar5 = *(int *)(param_1 + 8);
  iVar3 = *(int *)(param_1 + 0x10);
  (**(code **)(iVar5 + 0x3c))();
  iVar2 = FUN_0001e86e(*(undefined4 *)(param_1 + 0x10));
  if (iVar2 == 0) {
    iVar2 = -1;
  }
  else {
    iVar2 = FUN_0001e880(*(undefined4 *)(param_1 + 0x10));
    if (iVar2 == 0) {
      *(undefined4 *)(iVar3 + 0xa4) = 0;
      iVar2 = (**(code **)(iVar5 + 0x2c))(param_1);
      if (iVar2 == 0) {
        DataMemoryBarrier(0x1b);
        puVar4 = (uint *)(iVar3 + 0xa0);
        do {
          ExclusiveAccess(puVar4);
          bVar1 = (bool)hasExclusiveAccess(puVar4);
        } while (!bVar1);
        *puVar4 = *puVar4 | 2;
        DataMemoryBarrier(0x1b);
      }
    }
    else {
      iVar2 = -0x78;
    }
  }
  (**(code **)(iVar5 + 0x40))(param_1);
  return iVar2;
}



// FUN_0001ecb4 @ 0001ecb4 (72 bytes, called_by=0, calls=0)

undefined4 FUN_0001ecb4(int param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  uint *puVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = *(int *)(param_1 + 8);
  iVar5 = *(int *)(param_1 + 0x10);
  (**(code **)(iVar6 + 0x3c))();
  iVar2 = FUN_0001e880(*(undefined4 *)(param_1 + 0x10));
  if (iVar2 == 0) {
    uVar3 = 0xffffff88;
  }
  else {
    uVar3 = (**(code **)(iVar6 + 0x30))(param_1);
    DataMemoryBarrier(0x1b);
    puVar4 = (uint *)(iVar5 + 0xa0);
    do {
      ExclusiveAccess(puVar4);
      bVar1 = (bool)hasExclusiveAccess(puVar4);
    } while (!bVar1);
    *puVar4 = *puVar4 & 0xfffffffd;
    DataMemoryBarrier(0x1b);
  }
  (**(code **)(iVar6 + 0x40))(param_1);
  return uVar3;
}



// FUN_0001ecfc @ 0001ecfc (102 bytes, called_by=0, calls=0)

int FUN_0001ecfc(int param_1,int param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  
  iVar5 = *(int *)(param_1 + 8);
  iVar3 = *(int *)(param_1 + 0x10);
  if ((param_2 == 0) || (param_3 == 0)) {
    iVar2 = -0x16;
  }
  else {
    (**(code **)(iVar5 + 0x3c))();
    iVar2 = FUN_0001e86e(*(undefined4 *)(param_1 + 0x10));
    if (iVar2 == 0) {
      *(int *)(iVar3 + 0x98) = param_2;
      *(int *)(iVar3 + 0x9c) = param_3;
      iVar2 = (**(code **)(iVar5 + 0x34))(param_1);
      if (iVar2 == 0) {
        DataMemoryBarrier(0x1b);
        puVar4 = (uint *)(iVar3 + 0xa0);
        do {
          ExclusiveAccess(puVar4);
          bVar1 = (bool)hasExclusiveAccess(puVar4);
        } while (!bVar1);
        *puVar4 = *puVar4 | 1;
        DataMemoryBarrier(0x1b);
      }
    }
    else {
      iVar2 = -0x78;
    }
    (**(code **)(iVar5 + 0x40))(param_1);
  }
  return iVar2;
}



// FUN_0001ed62 @ 0001ed62 (86 bytes, called_by=0, calls=0)

undefined4 FUN_0001ed62(int param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  uint *puVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = *(int *)(param_1 + 8);
  iVar5 = *(int *)(param_1 + 0x10);
  (**(code **)(iVar6 + 0x3c))();
  iVar2 = FUN_0001e880(*(undefined4 *)(param_1 + 0x10));
  if (iVar2 == 0) {
    iVar2 = FUN_0001e86e(*(undefined4 *)(param_1 + 0x10));
    if (iVar2 == 0) {
      uVar3 = 0xffffff88;
    }
    else {
      uVar3 = (**(code **)(iVar6 + 0x38))(param_1);
      DataMemoryBarrier(0x1b);
      puVar4 = (uint *)(iVar5 + 0xa0);
      do {
        ExclusiveAccess(puVar4);
        bVar1 = (bool)hasExclusiveAccess(puVar4);
      } while (!bVar1);
      *puVar4 = *puVar4 & 0xfffffffe;
      DataMemoryBarrier(0x1b);
    }
  }
  else {
    uVar3 = 0xfffffff0;
  }
  (**(code **)(iVar6 + 0x40))(param_1);
  return uVar3;
}



// FUN_0001ee8e @ 0001ee8e (14 bytes, called_by=0, calls=0)

void FUN_0001ee8e(undefined4 param_1,int param_2)

{
  *(byte *)(param_2 + 0x19) = *(byte *)(param_2 + 0x19) | 4;
  FUN_0001e986(param_1,param_2,0);
  return;
}



// FUN_0001eeaa @ 0001eeaa (14 bytes, called_by=0, calls=0)

bool FUN_0001eeaa(int param_1)

{
  return *(int *)(*(int *)(param_1 + 0x10) + 0xa4) == 2;
}



// FUN_0001eeb8 @ 0001eeb8 (14 bytes, called_by=0, calls=0)

bool FUN_0001eeb8(int param_1)

{
  return *(int *)(*(int *)(param_1 + 0x10) + 0xa4) == 5;
}



// FUN_0001eec6 @ 0001eec6 (14 bytes, called_by=0, calls=0)

bool FUN_0001eec6(int param_1)

{
  return *(int *)(*(int *)(param_1 + 0x10) + 0xa4) == 3;
}



// thunk_FUN_0001cab2 @ 0001eed4 (4 bytes, called_by=0, calls=0)

void thunk_FUN_0001cab2(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  uStack_c = param_3;
  uStack_8 = param_3;
  FUN_0001ca44(param_1,param_2,&uStack_c,1,param_1);
  return;
}



// thunk_FUN_0001cac4 @ 0001eed8 (4 bytes, called_by=0, calls=0)

void thunk_FUN_0001cac4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  uStack_10 = param_3;
  uStack_c = param_4;
  uStack_8 = param_3;
  FUN_0001ca44(param_1,param_2,&uStack_10,2);
  return;
}



// FUN_0001eedc @ 0001eedc (18 bytes, called_by=0, calls=0)

undefined4 FUN_0001eedc(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0000db20();
  if (iVar1 == 0) {
    uVar2 = 0xfffffff5;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



// FUN_0001eeee @ 0001eeee (14 bytes, called_by=0, calls=0)

undefined4 FUN_0001eeee(undefined4 param_1,int param_2)

{
  FUN_0000e48c(*(undefined1 *)(param_2 + 0x20));
  return 0;
}



// FUN_0001eefc @ 0001eefc (54 bytes, called_by=0, calls=0)

undefined4 FUN_0001eefc(undefined4 param_1,int param_2)

{
  ushort uVar1;
  
  uVar1 = *(ushort *)(param_2 + 0x22) & 0x7ff;
  if ((*(ushort *)(param_2 + 0x22) & 0x7ff) == 0) {
    uVar1 = *(ushort *)(param_2 + 0x18);
  }
  FUN_0001ef8a(*(undefined1 *)(param_2 + 0x20),uVar1);
  FUN_0000e4ec(*(undefined1 *)(param_2 + 0x20));
  if (-1 < (int)((uint)*(byte *)(param_2 + 0x20) << 0x1c)) {
    FUN_0000e1c4();
    FUN_0000e55c(*(undefined1 *)(param_2 + 0x20));
  }
  return 0;
}



// FUN_0001ef32 @ 0001ef32 (24 bytes, called_by=0, calls=0)

undefined4 FUN_0001ef32(undefined4 param_1,int param_2)

{
  FUN_0000e1c4(*(undefined1 *)(param_2 + 0x20));
  FUN_0000e55c(*(undefined1 *)(param_2 + 0x20));
  return 0;
}



// FUN_0001ef4a @ 0001ef4a (24 bytes, called_by=0, calls=0)

undefined4 FUN_0001ef4a(undefined4 param_1,int param_2)

{
  if ((*(byte *)(param_2 + 0x20) & 0x7f) == 0) {
    FUN_0000e234();
  }
  else {
    FUN_0000e180();
  }
  return 0;
}



// FUN_0001ef7a @ 0001ef7a (16 bytes, called_by=0, calls=0)

int FUN_0001ef7a(uint param_1)

{
  return (param_1 & 0xf) + ((int)(~param_1 << 0x18) >> 0x1f) * -0x10;
}



// FUN_0001ef8a @ 0001ef8a (10 bytes, called_by=0, calls=0)

void FUN_0001ef8a(void)

{
  undefined6 uVar1;
  
  uVar1 = FUN_0000d8f4();
  *(short *)((int)uVar1 + 0x14) = (short)((uint6)uVar1 >> 0x20);
  return;
}



// FUN_0001ef94 @ 0001ef94 (44 bytes, called_by=0, calls=0)

undefined1 FUN_0001ef94(void)

{
  bool bVar1;
  uint uVar2;
  undefined1 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  
  uVar6 = FUN_0000d8f4();
  iVar4 = (int)uVar6;
  uVar5 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    uVar5 = getBasePriority();
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if ((bVar1) && (uVar2 = getBasePriority(), uVar2 == 0 || 0x40 < uVar2)) {
    setBasePriority(0x40);
  }
  InstructionSynchronizationBarrier(0xf);
  *(undefined4 *)((ulonglong)uVar6 >> 0x20) = *(undefined4 *)(iVar4 + 0x10);
  if (*(char *)(iVar4 + 0xc) == '\0') {
    uVar3 = *(undefined1 *)(iVar4 + 0x16);
  }
  else {
    uVar3 = 4;
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(uVar5);
  }
  InstructionSynchronizationBarrier(0xf);
  return uVar3;
}



// FUN_0001f1a2 @ 0001f1a2 (106 bytes, called_by=0, calls=0)

undefined4 FUN_0001f1a2(uint *param_1,int param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint *local_20;
  int local_1c [2];
  
  local_1c[1] = 0;
  uVar1 = param_1[2];
  *param_3 = 0;
  param_3[2] = 0;
  local_20 = param_1;
  local_1c[0] = param_2;
  (**(code **)(uVar1 + 0x10))(param_1,&local_20,local_1c);
  while( true ) {
    if (local_1c[0] == 0) {
      return 0xffffffea;
    }
    uVar1 = local_20[1];
    param_3[1] = uVar1;
    if (param_2 == 0) {
      uVar2 = -param_3[2];
    }
    else {
      uVar2 = (uint)(param_2 - *param_3) / uVar1;
    }
    if (*local_20 <= uVar2) {
      uVar2 = *local_20;
    }
    *param_3 = uVar2 * uVar1 + *param_3;
    param_3[2] = param_3[2] + uVar2;
    if (uVar2 < *local_20) break;
    local_20 = local_20 + 2;
    local_1c[0] = local_1c[0] + -1;
  }
  return 0;
}



// FUN_0001f1aa @ 0001f1aa (88 bytes, called_by=0, calls=0)

void FUN_0001f1aa(int param_1,code *param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  int iVar6;
  int local_34;
  uint local_30;
  int local_2c;
  uint local_28;
  int local_24;
  
  (**(code **)(*(int *)(param_1 + 8) + 0x10))(param_1,&local_34,&local_30);
  iVar2 = 0;
  uVar3 = 0;
  iVar6 = 0;
  do {
    if (local_30 <= uVar3) {
      return;
    }
    puVar5 = (uint *)(local_34 + uVar3 * 8);
    local_28 = puVar5[1];
    for (uVar4 = 0; local_24 = iVar6 + uVar4, uVar4 < *puVar5; uVar4 = uVar4 + 1) {
      local_2c = iVar2;
      iVar1 = (*param_2)(&local_2c,param_3);
      if (iVar1 == 0) {
        return;
      }
      iVar2 = iVar2 + local_28;
    }
    uVar3 = uVar3 + 1;
    iVar6 = local_24;
  } while( true );
}



// FUN_0001f338 @ 0001f338 (12 bytes, called_by=0, calls=0)

undefined4 FUN_0001f338(int param_1)

{
  FUN_00012c9c(*(undefined4 *)(param_1 + 4));
  return 0;
}



// FUN_0001f352 @ 0001f352 (40 bytes, called_by=0, calls=0)

void FUN_0001f352(int param_1,uint param_2)

{
  int iVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  iVar1 = **(int **)(param_1 + 0x2c);
  if ((1 << (sbyte)(*(int **)(param_1 + 0x2c))[1] & **(uint **)(iVar1 + 0x10)) != 0) {
    param_2 = param_2 ^ 1;
  }
  if (param_2 == 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(*(int *)(iVar1 + 8) + 0x10);
  }
  else {
    UNRECOVERED_JUMPTABLE = *(code **)(*(int *)(iVar1 + 8) + 0xc);
  }
                    /* WARNING: Could not recover jumptable at 0x0001f372. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



// FUN_0001f37a @ 0001f37a (92 bytes, called_by=0, calls=0)

undefined4 FUN_0001f37a(int param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_1 + 0x10);
  uVar2 = (uint)*(ushort *)(iVar4 + 0x16);
  if (uVar2 - 2 < param_2) {
    uVar3 = 0xffffffea;
  }
  else {
    if (uVar2 < 2) {
      uVar2 = 2;
    }
    iVar1 = -(uVar2 + 7 & 0xfffffff8);
    *(short *)(&stack0xfffffff0 + iVar1) = (short)param_2 + 2;
    FUN_00000820(&stack0xfffffff2 + iVar1,param_3,param_2);
    iVar1 = FUN_00014bdc(*(undefined4 *)(iVar4 + 0x40),&stack0xfffffff0 + iVar1,0,0);
    if (iVar1 == 0) {
      FUN_0001f352(iVar4,1);
      uVar3 = 0;
    }
    else {
      uVar3 = 0xfffffff4;
    }
  }
  return uVar3;
}



// FUN_0001f3f6 @ 0001f3f6 (38 bytes, called_by=0, calls=0)

undefined4 FUN_0001f3f6(int param_1,uint param_2,uint *param_3)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 4);
  while( true ) {
    *param_3 = uVar1;
    if (*(int *)(param_1 + 4) + (uint)*(byte *)(param_1 + 8) * 8 <= uVar1) {
      return 0xfffffffe;
    }
    if (*(byte *)(uVar1 + 5) == param_2) break;
    uVar1 = uVar1 + 8;
  }
  return 0;
}



// FUN_0001f42a @ 0001f42a (14 bytes, called_by=0, calls=0)

void FUN_0001f42a(int param_1,undefined4 param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)**(int **)(param_1 + 0x10);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001f434. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(param_1,param_2,((undefined4 *)**(int **)(param_1 + 0x10))[1]);
    return;
  }
  return;
}



// FUN_0001f438 @ 0001f438 (52 bytes, called_by=0, calls=0)

void FUN_0001f438(int param_1,undefined4 param_2)

{
  int *piVar1;
  undefined1 local_24 [4];
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 uStack_18;
  
  piVar1 = *(int **)(param_1 + 0x10);
  FUN_000168a4(local_24,0,0x14);
  local_24[0] = 2;
  local_20 = *(undefined4 *)(*piVar1 + 0x40);
  local_1c = *(undefined4 *)(*piVar1 + 0x48);
  uStack_18 = param_2;
  FUN_0001f42a(param_1,local_24);
  return;
}



// FUN_0001f46c @ 0001f46c (40 bytes, called_by=0, calls=0)

void FUN_0001f46c(undefined4 param_1,undefined4 param_2)

{
  undefined1 local_24 [4];
  undefined4 local_20;
  
  FUN_000168a4(local_24,0,0x14);
  local_24[0] = 4;
  local_20 = param_2;
  FUN_0001f42a(param_1,local_24);
  return;
}



// FUN_0001f494 @ 0001f494 (34 bytes, called_by=0, calls=0)

void FUN_0001f494(undefined4 param_1)

{
  undefined1 local_1c [20];
  
  FUN_000168a4(local_1c,0,0x14);
  local_1c[0] = 5;
  FUN_0001f42a(param_1,local_1c);
  return;
}



// FUN_0001f4b6 @ 0001f4b6 (86 bytes, called_by=0, calls=0)

undefined4 FUN_0001f4b6(int param_1,undefined4 param_2,uint param_3)

{
  bool bVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  
  iVar5 = **(int **)(param_1 + 0x10);
  iVar4 = **(int **)(param_1 + 4);
  uVar6 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    uVar6 = getBasePriority();
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if ((bVar1) && (uVar2 = getBasePriority(), uVar2 == 0 || 0x40 < uVar2)) {
    setBasePriority(0x40);
  }
  InstructionSynchronizationBarrier(0xf);
  if (*(int *)(iVar5 + 0x40) == 0) {
    uVar3 = 0xfffffff3;
  }
  else if (*(int *)(iVar5 + 0x4c) == 0) {
    *(undefined4 *)(iVar5 + 0x4c) = param_2;
    *(uint *)(iVar5 + 0x50) = param_3;
    *(undefined4 *)(iVar4 + 0x534) = param_2;
    *(uint *)(iVar4 + 0x538) = param_3;
    if (4 < param_3) {
      *(uint *)(iVar4 + 0x200) = *(uint *)(iVar4 + 0x200) | 0x20;
    }
    uVar3 = 0;
  }
  else {
    uVar3 = 0xfffffff0;
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(uVar6);
  }
  InstructionSynchronizationBarrier(0xf);
  return uVar3;
}



// FUN_0001f522 @ 0001f522 (50 bytes, called_by=0, calls=0)

undefined4 FUN_0001f522(int param_1,undefined1 *param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)**(undefined4 **)(param_1 + 4);
  if (**(int **)(param_1 + 0x10) == 0) {
    if (puVar2[0x44] == 0) {
      uVar1 = 0xffffffff;
    }
    else {
      *param_2 = *(undefined1 *)(*(undefined4 **)(param_1 + 4))[0xc];
      puVar2[0x44] = 0;
      *puVar2 = 1;
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 0xffffff7a;
  }
  return uVar1;
}



// FUN_0001f554 @ 0001f554 (92 bytes, called_by=0, calls=0)

undefined4 FUN_0001f554(int param_1)

{
  bool bVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = **(int **)(param_1 + 0x10);
  iVar5 = **(int **)(param_1 + 4);
  if (*(int *)(iVar6 + 0x40) == 0) {
    uVar3 = 0xfffffff2;
  }
  else {
    FUN_00020f72(iVar6 + 8);
    uVar4 = 0;
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      uVar4 = getBasePriority();
    }
    bVar1 = (bool)isCurrentModePrivileged();
    if ((bVar1) && (uVar2 = getBasePriority(), uVar2 == 0 || 0x40 < uVar2)) {
      setBasePriority(0x40);
    }
    InstructionSynchronizationBarrier(0xf);
    if (*(int *)(iVar6 + 0x4c) != 0) {
      *(uint *)(iVar5 + 0x200) = *(uint *)(iVar5 + 0x200) & 0xffffffdf;
      *(undefined4 *)(iVar5 + 0x14c) = 0;
    }
    uVar3 = 0;
    *(undefined1 *)(iVar6 + 0x61) = 0;
    *(undefined1 *)(iVar6 + 0x62) = 1;
    *(undefined4 *)(iVar5 + 4) = 1;
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      setBasePriority(uVar4);
    }
    InstructionSynchronizationBarrier(0xf);
  }
  return uVar3;
}



// FUN_0001f5b0 @ 0001f5b0 (62 bytes, called_by=0, calls=0)

undefined4 FUN_0001f5b0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  
  piVar5 = *(int **)(param_1 + 0x10);
  iVar3 = *piVar5;
  uVar4 = *(int *)(iVar3 + 0xa4) - *(int *)(iVar3 + 0xb0);
  if (uVar4 == 0) {
    uVar2 = 0;
  }
  else {
    if (7 < uVar4) {
      uVar4 = 8;
    }
    iVar1 = *(int *)(param_1 + 4);
    *(uint *)(iVar3 + 0xac) = uVar4;
    uVar2 = *(undefined4 *)(iVar1 + 0x24);
    *(undefined4 *)(*piVar5 + 0xa8) = uVar2;
    FUN_00000820(uVar2,*(int *)(*piVar5 + 0xa0) + *(int *)(*piVar5 + 0xb0));
    uVar2 = 1;
  }
  return uVar2;
}



// FUN_0001f5ee @ 0001f5ee (32 bytes, called_by=0, calls=0)

int FUN_0001f5ee(int *param_1)

{
  int iVar1;
  
  if (*(int *)(*param_1 + 0x158) == 0) {
    iVar1 = 0;
    if (-1 < param_1[1] << 0x1f) {
      iVar1 = *(int *)(*param_1 + 0x120);
      if (iVar1 != 0) {
        iVar1 = 1;
      }
      return iVar1;
    }
  }
  else {
    iVar1 = 1;
  }
  return iVar1;
}



// FUN_0001f60e @ 0001f60e (68 bytes, called_by=0, calls=0)

void FUN_0001f60e(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  bool bVar6;
  
  piVar5 = *(int **)(param_1 + 4);
  iVar4 = *piVar5;
  *(undefined4 *)(iVar4 + 0x544) = param_2;
  *(undefined4 *)(iVar4 + 0x548) = param_3;
  *(undefined4 *)(iVar4 + 0x120) = 0;
  *(undefined4 *)(iVar4 + 0x158) = 0;
  if (piVar5[1] << 0x1d < 0) {
    iVar1 = *(int *)(param_1 + 0x10);
    uVar2 = *(uint *)(iVar1 + 8);
    *(uint *)(iVar1 + 8) = uVar2 | 1;
    iVar3 = uVar2 << 0x1e;
    bVar6 = iVar3 == 0;
    if (bVar6) {
      iVar3 = **(int **)(param_1 + 4);
      iVar1 = 8;
    }
    if (bVar6) {
      *(int *)(iVar3 + 0x500) = iVar1;
    }
  }
  *(undefined4 *)(iVar4 + 8) = 1;
  return;
}



// FUN_0001f652 @ 0001f652 (66 bytes, called_by=0, calls=0)

void FUN_0001f652(int param_1)

{
  int *piVar1;
  undefined8 uVar2;
  
  *(undefined4 *)(**(int **)(param_1 + 4) + 0x304) = 0x400000;
  uVar2 = FUN_0001f5ee(*(undefined4 *)(param_1 + 4));
  piVar1 = (int *)((ulonglong)uVar2 >> 0x20);
  if ((int)uVar2 == 0) {
    *(undefined1 *)(*piVar1 + 0xb8) = 1;
    return;
  }
  *(undefined1 *)(*piVar1 + 0xb8) = 0;
  *(undefined4 *)(*piVar1 + 0xb4) = 0xffffffff;
  FUN_0001f60e(param_1,*(undefined4 *)(*piVar1 + 0xa8),*(undefined4 *)(*piVar1 + 0xac));
  return;
}



// FUN_0001f694 @ 0001f694 (68 bytes, called_by=0, calls=0)

void FUN_0001f694(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = **(int **)(*(int *)(param_1 + 0x34) + 4);
  iVar1 = **(int **)(*(int *)(param_1 + 0x34) + 0x10);
  if (*(int *)(iVar3 + 0x108) == 0) {
    iVar2 = *(int *)(iVar1 + 0x54) + 1;
    *(int *)(iVar1 + 0x54) = iVar2;
    if (iVar2 == 4) {
      *(undefined4 *)(iVar3 + 4) = 1;
      return;
    }
  }
  else {
    *(undefined4 *)(iVar3 + 0x108) = 0;
    *(undefined4 *)(iVar1 + 0x54) = 0;
  }
  FUN_00015eb4(iVar1 + 8,param_2,*(undefined4 *)(iVar1 + 0x58),*(undefined4 *)(iVar1 + 0x5c),0,0,
               param_3);
  return;
}



// FUN_0001f6d8 @ 0001f6d8 (1064 bytes, called_by=0, calls=0)

void FUN_0001f6d8(int param_1)

{
  int iVar1;
  int iVar2;
  int extraout_r1;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  byte bVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  uint *puVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  undefined4 *puVar16;
  bool bVar17;
  undefined1 local_3c [4];
  undefined4 local_38;
  int iStack_34;
  
  piVar11 = *(int **)(param_1 + 0x10);
  iVar9 = **(int **)(param_1 + 4);
  iVar13 = *piVar11;
  iVar10 = *(int *)(iVar9 + 0x304);
  if ((*(int *)(iVar9 + 0x108) != 0) && (iVar10 << 0x1d < 0)) {
    *(undefined4 *)(iVar9 + 0x108) = 0;
    piVar7 = *(int **)(param_1 + 0x10);
    iVar14 = **(int **)(param_1 + 4);
    iVar2 = *piVar7;
    *(undefined4 *)(iVar2 + 0x54) = 0;
    iVar1 = *piVar7;
    FUN_00015eb4(iVar1 + 8,iVar2,*(undefined4 *)(iVar1 + 0x58),*(undefined4 *)(iVar1 + 0x5c),0,0);
    *(undefined4 *)(iVar14 + 0x308) = 4;
  }
  if ((*(int *)(iVar9 + 0x124) != 0) && (iVar10 << 0x16 < 0)) {
    *(undefined4 *)(iVar9 + 0x124) = 0;
    iVar1 = **(int **)(param_1 + 4);
    uVar15 = *(uint *)(iVar1 + 0x480);
    FUN_000168a4(local_3c,0,0x14);
    local_3c[0] = 6;
    if ((uVar15 & 1) == 0) {
      if ((uVar15 & 2) == 0) {
        if ((uVar15 & 4) == 0) {
          bVar6 = (byte)uVar15 & 8;
        }
        else {
          bVar6 = 4;
        }
      }
      else {
        bVar6 = 2;
      }
    }
    else {
      bVar6 = 1;
    }
    local_38 = CONCAT31(local_38._1_3_,bVar6);
    *(uint *)(iVar1 + 0x480) = uVar15;
    FUN_0001f42a(param_1,local_3c);
    FUN_0001f554(param_1);
  }
  if ((*(int *)(iVar9 + 0x110) != 0) && (iVar10 << 0x1b < 0)) {
    *(undefined4 *)(iVar9 + 0x110) = 0;
    *(undefined4 *)(iVar9 + 0x110) = 0;
    iVar2 = **(int **)(param_1 + 0x10);
    puVar16 = (undefined4 *)**(undefined4 **)(param_1 + 4);
    FUN_00020f72(iVar2 + 8);
    bVar6 = *(byte *)(iVar2 + 0x60);
    iVar1 = puVar16[0x14f];
    *(undefined1 *)(iVar2 + 0x60) = 0;
    if (0 < (int)(((uint)bVar6 - *(int *)(iVar2 + 0x48)) + iVar1)) {
      FUN_0001f438(param_1);
    }
    FUN_0001f46c(param_1,*(undefined4 *)(iVar2 + 0x40));
    *(undefined4 *)(iVar2 + 0x40) = *(undefined4 *)(iVar2 + 0x4c);
    *(undefined4 *)(iVar2 + 0x44) = *(undefined4 *)(iVar2 + 0x50);
    *(undefined4 *)(iVar2 + 0x4c) = 0;
    *(undefined4 *)(iVar2 + 0x50) = 0;
    *(undefined4 *)(iVar2 + 0x48) = 0;
    if (*(char *)(iVar2 + 0x61) != '\0') {
      uVar3 = 0;
      bVar17 = (bool)isCurrentModePrivileged();
      if (bVar17) {
        uVar3 = getBasePriority();
      }
      bVar17 = (bool)isCurrentModePrivileged();
      if ((bVar17) && (uVar15 = getBasePriority(), uVar15 == 0 || 0x40 < uVar15)) {
        setBasePriority(0x40);
      }
      InstructionSynchronizationBarrier(0xf);
      if (*(int *)(iVar2 + 0x40) == 0) {
        puVar16[1] = 1;
      }
      else {
        if (puVar16[0x53] == 0) {
          *puVar16 = 1;
        }
        puVar16[0x80] = puVar16[0x80] & 0xffffffdf;
      }
      bVar17 = (bool)isCurrentModePrivileged();
      if (bVar17) {
        setBasePriority(uVar3);
      }
      InstructionSynchronizationBarrier(0xf);
    }
  }
  if (((iVar10 << 0xc < 0) && (*(int *)(iVar9 + 0x14c) != 0)) && (*(int *)(iVar9 + 0x110) == 0)) {
    *(undefined4 *)(iVar9 + 0x14c) = 0;
    FUN_000168a4(local_3c,0,0x14,*(undefined4 *)(iVar9 + 0x14c));
    local_3c[0] = 3;
    uVar4 = *(uint *)(**(int **)(param_1 + 0x10) + 0x5c);
    uVar15 = *(uint *)(**(int **)(param_1 + 0x10) + 0x58) | uVar4;
    bVar17 = uVar15 != 0;
    if (bVar17) {
      uVar15 = **(uint **)(param_1 + 4);
      uVar4 = 4;
    }
    if (bVar17) {
      *(uint *)(uVar15 + 0x304) = uVar4;
    }
    FUN_0001f42a(param_1,local_3c);
  }
  if (((iVar10 << 0xe < 0) && (*(int *)(iVar9 + 0x144) != 0)) && (*(int *)(iVar9 + 0x110) == 0)) {
    *(undefined4 *)(iVar9 + 0x144) = 0;
    iVar14 = *(int *)(param_1 + 4);
    iVar2 = **(int **)(param_1 + 0x10);
    iVar1 = *(int *)(iVar2 + 0x40);
    if (iVar1 != 0) {
      FUN_0001f46c(param_1);
      *(undefined4 *)(iVar2 + 0x40) = 0;
      iVar1 = extraout_r1;
    }
    *(undefined1 *)(iVar2 + 0x61) = 0;
    if (*(char *)(iVar2 + 0x62) == '\0') {
      if (*(int *)(iVar14 + 4) << 0x1d < 0) {
        iVar8 = **(int **)(param_1 + 4);
        *(int *)(iVar8 + 0x534) = (*(int **)(param_1 + 4))[10];
        *(undefined4 *)(iVar8 + 0x538) = 5;
        *(undefined4 *)(iVar8 + 0x2c) = 1;
        do {
        } while (*(int *)(iVar8 + 0x110) == 0);
        iVar1 = 0;
        *(undefined4 *)(iVar8 + 0x110) = 0;
        iVar5 = *(int *)(iVar8 + 0x14c);
        if (iVar5 != 0) {
          *(undefined4 *)(iVar8 + 0x14c) = 0;
          iVar5 = *(int *)(iVar8 + 0x53c);
        }
        *(char *)(iVar2 + 0x60) = (char)iVar5;
      }
    }
    else {
      *(undefined1 *)(iVar2 + 0x62) = 0;
    }
    *(undefined4 *)(**(int **)(param_1 + 4) + 0x108) = 0;
    if (*(int *)(iVar14 + 4) << 0x1d < 0) {
      iVar1 = 0;
      bVar17 = (bool)isCurrentModePrivileged();
      if (bVar17) {
        iVar1 = getBasePriority();
      }
      bVar17 = (bool)isCurrentModePrivileged();
      if ((bVar17) && (uVar15 = getBasePriority(), uVar15 == 0 || 0x40 < uVar15)) {
        setBasePriority(0x40);
      }
      InstructionSynchronizationBarrier(0xf);
      iVar2 = *(int *)(param_1 + 0x10);
      uVar15 = *(uint *)(iVar2 + 8);
      *(uint *)(iVar2 + 8) = uVar15 & 0xfffffffd;
      bVar17 = (uVar15 & 1) == 0;
      if (bVar17) {
        iVar2 = **(int **)(param_1 + 4);
      }
      if (bVar17) {
        *(undefined4 *)(iVar2 + 0x500) = 0;
      }
      bVar17 = (bool)isCurrentModePrivileged();
      if (bVar17) {
        setBasePriority(iVar1);
      }
      InstructionSynchronizationBarrier(0xf);
    }
    FUN_0001f494(param_1,iVar1);
  }
  if ((iVar10 << 0x17 < 0) && (*(int *)(iVar9 + 0x120) != 0)) {
    iVar1 = **(int **)(param_1 + 4);
    uVar3 = 0;
    bVar17 = (bool)isCurrentModePrivileged();
    if (bVar17) {
      uVar3 = getBasePriority();
    }
    bVar17 = (bool)isCurrentModePrivileged();
    if ((bVar17) && (uVar15 = getBasePriority(), uVar15 == 0 || 0x40 < uVar15)) {
      setBasePriority(0x40);
    }
    InstructionSynchronizationBarrier(0xf);
    if (*(int *)(iVar1 + 0x120) != 0) {
      *(undefined4 *)(iVar1 + 0x120) = 0;
      *(undefined4 *)(iVar1 + 0xc) = 1;
    }
    bVar17 = (bool)isCurrentModePrivileged();
    if (bVar17) {
      setBasePriority(uVar3);
    }
    InstructionSynchronizationBarrier(0xf);
  }
  if ((-1 < iVar10 << 9) || (*(int *)(iVar9 + 0x158) == 0)) goto LAB_0001f9e0;
  piVar7 = *(int **)(param_1 + 0x10);
  iVar9 = **(int **)(param_1 + 4);
  uVar3 = 0;
  bVar17 = (bool)isCurrentModePrivileged();
  if (bVar17) {
    uVar3 = getBasePriority();
  }
  bVar17 = (bool)isCurrentModePrivileged();
  if ((bVar17) && (uVar15 = getBasePriority(), uVar15 == 0 || 0x40 < uVar15)) {
    setBasePriority(0x40);
  }
  InstructionSynchronizationBarrier(0xf);
  if (*(int *)(*piVar7 + 0xb4) < 0) {
    iVar10 = *(int *)(iVar9 + 0x54c);
  }
  else {
    iVar10 = *(int *)(*piVar7 + 0xb4);
  }
  if ((*(int **)(param_1 + 4))[1] << 0x1d < 0) {
    *(undefined4 *)(iVar9 + 0x308) = 0x400000;
    iVar1 = *(int *)(param_1 + 0x10);
    uVar15 = *(uint *)(iVar1 + 8);
    *(uint *)(iVar1 + 8) = uVar15 & 0xfffffffe;
    bVar17 = (uVar15 & 2) == 0;
    if (bVar17) {
      iVar1 = **(int **)(param_1 + 4);
    }
    if (bVar17) {
      *(undefined4 *)(iVar1 + 0x500) = 0;
    }
  }
  bVar17 = (bool)isCurrentModePrivileged();
  if (bVar17) {
    setBasePriority(uVar3);
  }
  InstructionSynchronizationBarrier(0xf);
  iVar1 = *piVar7;
  if (*(int *)(iVar1 + 0xa0) == 0) goto LAB_0001f9e0;
  if (*(char *)(iVar1 + 0xb8) == '\0') {
    if ((*(int *)(iVar1 + 0xa0) != *(int *)(iVar1 + 0xa8)) &&
       (bVar17 = *(int *)(iVar1 + 0xac) == iVar10, iVar10 = *(int *)(iVar1 + 0xb0) + iVar10, bVar17)
       ) {
      *(int *)(iVar1 + 0xb0) = iVar10;
      iVar10 = FUN_0001f5b0(param_1);
      if (iVar10 != 0) goto LAB_0001f9c2;
      iVar10 = *(int *)(*piVar7 + 0xb0);
    }
    FUN_00020f72(*piVar7 + 0x68);
    FUN_000168a4(local_3c,0,0x14);
    local_38 = *(undefined4 *)(*piVar7 + 0xa0);
    if (iVar10 != *(int *)(*piVar7 + 0xa4)) {
      local_3c[0] = 1;
    }
    *(undefined4 *)(iVar9 + 0x308) = 0x400000;
    *(undefined4 *)(*piVar7 + 0xa0) = 0;
    *(undefined4 *)(*piVar7 + 0xa4) = 0;
    iStack_34 = iVar10;
    FUN_0001f42a(param_1,local_3c);
  }
  else {
LAB_0001f9c2:
    uVar3 = 0;
    bVar17 = (bool)isCurrentModePrivileged();
    if (bVar17) {
      uVar3 = getBasePriority();
    }
    bVar17 = (bool)isCurrentModePrivileged();
    if ((bVar17) && (uVar15 = getBasePriority(), uVar15 == 0 || 0x40 < uVar15)) {
      setBasePriority(0x40);
    }
    InstructionSynchronizationBarrier(0xf);
    FUN_0001f652(param_1,piVar7);
    bVar17 = (bool)isCurrentModePrivileged();
    if (bVar17) {
      setBasePriority(uVar3);
    }
    InstructionSynchronizationBarrier(0xf);
  }
LAB_0001f9e0:
  puVar12 = (uint *)(piVar11 + 2);
  DataMemoryBarrier(0x1b);
  do {
    ExclusiveAccess(puVar12);
    uVar15 = *puVar12;
    bVar17 = (bool)hasExclusiveAccess(puVar12);
  } while (!bVar17);
  *puVar12 = uVar15 & 0xfffffffb;
  DataMemoryBarrier(0x1b);
  if ((int)(uVar15 << 0x1d) < 0) {
    FUN_0001f438(param_1,*(undefined4 *)(iVar13 + 0x44));
    FUN_0001f46c(param_1,*(undefined4 *)(iVar13 + 0x40));
    *(undefined4 *)(iVar13 + 0x40) = 0;
    *(undefined4 *)(iVar13 + 0x44) = 0;
    FUN_0001f494(param_1);
    return;
  }
  return;
}



// FUN_0001fb00 @ 0001fb00 (44 bytes, called_by=0, calls=0)

undefined4 FUN_0001fb00(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  piVar3 = *(int **)(param_1 + 0x10);
  iVar4 = **(int **)(param_1 + 4);
  iVar2 = *piVar3;
  if (*(int *)(iVar2 + 0xa0) == 0) {
    uVar1 = 0xfffffff2;
  }
  else {
    *(undefined1 *)(iVar2 + 0xb8) = 0;
    FUN_00020f72(*piVar3 + 0x68);
    *(undefined4 *)(iVar4 + 0xc) = 1;
    uVar1 = 0;
  }
  return uVar1;
}



// FUN_0001fb32 @ 0001fb32 (60 bytes, called_by=0, calls=0)

int FUN_0001fb32(undefined4 *param_1)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  
  iVar3 = param_1[2];
  if (iVar3 != 0) {
    bVar1 = *(byte *)((int)param_1 + 0xd);
    iVar3 = *(int *)*param_1;
    *(byte *)((int)param_1 + 0xd) = (char)((int *)*param_1)[2] - 1U & bVar1 + 1;
    iVar3 = iVar3 + (uint)*(byte *)(param_1 + 3) * (uint)bVar1 + (uint)bVar1 + 1;
    piVar4 = param_1 + 2;
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(piVar4);
      bVar2 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar2);
    *piVar4 = *piVar4 + -1;
    DataMemoryBarrier(0x1b);
  }
  return iVar3;
}



// FUN_0001fb6e @ 0001fb6e (46 bytes, called_by=0, calls=0)

void FUN_0001fb6e(int param_1,int param_2,int param_3)

{
  bool bVar1;
  int *piVar2;
  
  *(byte *)(param_2 + -1) =
       *(byte *)(param_2 + -1) & 0x80 |
       (byte)(((uint)*(byte *)(param_2 + -1) << 0x19) >> 0x19) + (char)param_3 & 0x7f;
  piVar2 = (int *)(param_1 + 4);
  DataMemoryBarrier(0x1b);
  do {
    ExclusiveAccess(piVar2);
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = *piVar2 + param_3;
  DataMemoryBarrier(0x1b);
  return;
}



// FUN_0001fbaa @ 0001fbaa (136 bytes, called_by=0, calls=0)

uint FUN_0001fbaa(int *param_1,int *param_2,uint param_3)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  
  if (param_1[1] == 0) {
    param_3 = 0;
  }
  else if (param_3 != 0) {
    piVar5 = param_1 + 2;
    while( true ) {
      iVar2 = *(int *)*param_1;
      iVar4 = (uint)*(byte *)(param_1 + 3) * (uint)*(byte *)((int)param_1 + 0xe) +
              (uint)*(byte *)((int)param_1 + 0xe);
      if ((-1 < *(char *)(iVar2 + iVar4)) ||
         ((*(byte *)(iVar2 + iVar4) & 0x7f) != (uint)*(byte *)((int)param_1 + 0xf))) break;
      *(undefined1 *)(iVar2 + iVar4) = 0;
      *(undefined1 *)((int)param_1 + 0xf) = 0;
      *(byte *)((int)param_1 + 0xe) =
           *(char *)(*param_1 + 8) - 1U & *(char *)((int)param_1 + 0xe) + 1U;
      DataMemoryBarrier(0x1b);
      do {
        ExclusiveAccess(piVar5);
        bVar1 = (bool)hasExclusiveAccess(piVar5);
      } while (!bVar1);
      *piVar5 = *piVar5 + 1;
      DataMemoryBarrier(0x1b);
    }
    *param_2 = *(byte *)((int)param_1 + 0xf) + 1 + iVar2 + iVar4;
    uVar3 = (*(byte *)(iVar2 + iVar4) & 0x7f) - (uint)*(byte *)((int)param_1 + 0xf);
    if (uVar3 <= param_3) {
      param_3 = uVar3;
    }
  }
  return param_3;
}



// FUN_0001fc32 @ 0001fc32 (120 bytes, called_by=0, calls=0)

bool FUN_0001fc32(int *param_1,int param_2)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  
  iVar5 = *(int *)*param_1;
  iVar3 = (uint)*(byte *)(param_1 + 3) * (uint)*(byte *)((int)param_1 + 0xe) +
          (uint)*(byte *)((int)param_1 + 0xe);
  uVar2 = (uint)*(byte *)((int)param_1 + 0xf) + param_2;
  *(char *)((int)param_1 + 0xf) = (char)uVar2;
  if ((*(char *)(iVar5 + iVar3) < '\0') && ((*(byte *)(iVar5 + iVar3) & 0x7f) == (uVar2 & 0xff))) {
    *(undefined1 *)(iVar5 + iVar3) = 0;
    *(undefined1 *)((int)param_1 + 0xf) = 0;
    *(byte *)((int)param_1 + 0xe) =
         *(char *)(*param_1 + 8) - 1U & *(char *)((int)param_1 + 0xe) + 1U;
    piVar4 = param_1 + 2;
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(piVar4);
      bVar1 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar1);
    *piVar4 = *piVar4 + 1;
    DataMemoryBarrier(0x1b);
  }
  DataMemoryBarrier(0x1b);
  piVar4 = param_1 + 1;
  do {
    ExclusiveAccess(piVar4);
    bVar1 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar1);
  *piVar4 = *piVar4 - param_2;
  DataMemoryBarrier(0x1b);
  return 0 < param_1[2];
}



// FUN_0001fcaa @ 0001fcaa (44 bytes, called_by=0, calls=0)

void FUN_0001fcaa(int *param_1)

{
  uint uVar1;
  uint uVar2;
  
  param_1[2] = (uint)*(byte *)(*param_1 + 8);
  uVar2 = 0;
  *(undefined1 *)((int)param_1 + 0xd) = 0;
  *(undefined2 *)((int)param_1 + 0xe) = 0;
  param_1[1] = 0;
  while( true ) {
    uVar1 = uVar2 & 0xff;
    if (*(byte *)((int *)*param_1 + 2) <= uVar1) break;
    uVar2 = uVar2 + 1;
    *(undefined1 *)(*(int *)*param_1 + *(byte *)(param_1 + 3) * uVar1 + uVar1) = 0;
  }
  return;
}



// FUN_0001fcd6 @ 0001fcd6 (44 bytes, called_by=0, calls=0)

undefined4 FUN_0001fcd6(int *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  param_1[3] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = param_2;
  iVar2 = *(uint *)(param_2 + 4) / (uint)*(byte *)(param_2 + 8) - 1;
  *(char *)(param_1 + 3) = (char)iVar2;
  if (iVar2 * 0x1000000 < 0) {
    uVar1 = 0xffffffea;
  }
  else {
    FUN_0001fcaa();
    uVar1 = 0;
  }
  return uVar1;
}



// FUN_0001fd02 @ 0001fd02 (24 bytes, called_by=0, calls=0)

void FUN_0001fd02(short param_1)

{
  *(undefined4 *)((ushort)((param_1 + 0x50) * 4) + 0x40011000) = 0;
  return;
}



// FUN_0001fd1a @ 0001fd1a (8 bytes, called_by=0, calls=0)

void FUN_0001fd1a(void)

{
  FUN_000102b0();
  return;
}



// FUN_0001fd28 @ 0001fd28 (44 bytes, called_by=0, calls=0)

undefined4 FUN_0001fd28(int param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  
  uVar3 = (uint)*(byte *)(*(int *)(param_1 + 0x10) + 0x24);
  if (param_2 < uVar3) {
    cVar1 = *(char *)(*(int *)(param_1 + 0x10) + 0x25);
    if (cVar1 == '\0') {
      uVar2 = 0xfffffff5;
    }
    else {
      FUN_00012ea8(*(undefined4 *)(param_1 + 4),param_2 & 0xff,uVar3,cVar1,param_4);
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0xffffffea;
  }
  return uVar2;
}



// FUN_0001fd54 @ 0001fd54 (30 bytes, called_by=0, calls=0)

uint FUN_0001fd54(undefined4 *param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  undefined4 uVar5;
  
  uVar5 = *param_1;
  bVar2 = (byte)uVar5;
  bVar3 = (byte)((uint)uVar5 >> 8);
  bVar4 = (byte)((uint)uVar5 >> 0x10);
  bVar1 = (byte)((uint)uVar5 >> 0x18);
  return (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1) << 1 | bVar1 >> 2 & 1) << 1 |
                         bVar1 >> 3 & 1) << 1 | bVar1 >> 4 & 1) << 1 | bVar1 >> 5 & 1) << 1 |
                      bVar1 >> 6 & 1) << 1 | bVar1 >> 7) << 0x18 |
         (uint)(byte)((((((((bVar2 & 1) << 1 | bVar2 >> 1 & 1) << 1 | bVar2 >> 2 & 1) << 1 |
                         bVar2 >> 3 & 1) << 1 | bVar2 >> 4 & 1) << 1 | bVar2 >> 5 & 1) << 1 |
                      bVar2 >> 6 & 1) << 1 | bVar2 >> 7) |
         ((uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1) << 1 | bVar3 >> 2 & 1) << 1 |
                          bVar3 >> 3 & 1) << 1 | bVar3 >> 4 & 1) << 1 | bVar3 >> 5 & 1) << 1 |
                       bVar3 >> 6 & 1) << 1 | bVar3 >> 7) << 0x10) >> 8 |
         (uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1) << 1 | bVar4 >> 2 & 1) << 1 |
                         bVar4 >> 3 & 1) << 1 | bVar4 >> 4 & 1) << 1 | bVar4 >> 5 & 1) << 1 |
                      bVar4 >> 6 & 1) << 1 | bVar4 >> 7) << 0x10;
}



// FUN_0001fd72 @ 0001fd72 (10 bytes, called_by=0, calls=0)

undefined4 FUN_0001fd72(void)

{
  FUN_00001938();
  return 0;
}



// FUN_0001fe52 @ 0001fe52 (146 bytes, called_by=0, calls=0)

void FUN_0001fe52(int param_1,undefined4 param_2,byte *param_3,byte *param_4,byte *param_5,
                 byte *param_6)

{
  int iVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined8 uVar8;
  int local_1c;
  byte *pbStack_18;
  
  local_1c = param_1;
  pbStack_18 = param_3;
  uVar8 = FUN_00011eb0(&local_1c);
  pbVar2 = (byte *)((ulonglong)uVar8 >> 0x20);
  pbVar4 = param_3;
  if (param_3 != (byte *)0x0) {
    pbVar4 = (byte *)0x1;
  }
  iVar1 = (int)uVar8 + local_1c * 4;
  pbVar3 = pbVar2;
  if (pbVar2 != (byte *)0x0) {
    pbVar3 = (byte *)0x1;
  }
  if (param_4 == (byte *)0x0) {
    uVar5 = 0;
  }
  else {
    uVar5 = 0xc;
  }
  if (param_5 == (byte *)0x0) {
    uVar6 = 0;
  }
  else {
    uVar6 = 0x700;
  }
  if (param_6 == (byte *)0x0) {
    uVar7 = 0;
  }
  else {
    uVar7 = 0x30000;
  }
  if (pbVar2 != (byte *)0x0) {
    pbVar2 = (byte *)(uint)*pbVar2;
  }
  if (param_3 != (byte *)0x0) {
    param_3 = (byte *)((uint)*param_3 << 1);
  }
  if (param_4 != (byte *)0x0) {
    param_4 = (byte *)((uint)*param_4 << 2);
  }
  if (param_5 != (byte *)0x0) {
    param_5 = (byte *)((uint)*param_5 << 8);
  }
  if (param_6 != (byte *)0x0) {
    param_6 = (byte *)((uint)*param_6 << 0x10);
  }
  *(uint *)(iVar1 + 0x700) =
       (uint)param_5 |
       (uint)pbVar2 |
       *(uint *)(iVar1 + 0x700) & ~((uint)pbVar3 | (int)pbVar4 << 1 | uVar5 | uVar6 | uVar7) |
       (uint)param_3 | (uint)param_4 | (uint)param_6;
  return;
}



// FUN_0001ff02 @ 0001ff02 (102 bytes, called_by=0, calls=0)

void FUN_0001ff02(int *param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_00011f54(param_2);
  if (((int)uVar3 != 0) && (uVar3 = FUN_00011f3c((int)((ulonglong)uVar3 >> 0x20)), (int)uVar3 == 0))
  {
    uVar1 = FUN_00011f24((int)((ulonglong)uVar3 >> 0x20));
    *(int *)(*param_1 + 0x308) = 1 << (uVar1 & 0xff);
    iVar2 = *param_1 + (short)uVar1 * 4;
    *(uint *)(iVar2 + 0x510) = *(uint *)(iVar2 + 0x510) & 0xfffffffc;
    return;
  }
  FUN_0001fe52(param_2,0,0,0,0,&stack0xfffffff7,param_3,param_4 & 0xffffff);
  return;
}



// thunk_FUN_0001cab2 @ 00020094 (4 bytes, called_by=0, calls=0)

void thunk_FUN_0001cab2(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  uStack_c = param_3;
  uStack_8 = param_3;
  FUN_0001ca44(param_1,param_2,&uStack_c,1,param_1);
  return;
}



// FUN_000200d2 @ 000200d2 (50 bytes, called_by=0, calls=0)

int FUN_000200d2(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uStack_18;
  undefined4 local_14;
  uint local_10;
  int local_c;
  
  uStack_18 = param_1;
  local_14 = param_2;
  local_10 = param_3;
  local_c = param_4;
  iVar1 = FUN_0000ecc0(0);
  if (iVar1 == 0) {
    iVar1 = -6;
  }
  else {
    local_14 = 0;
    local_c = 0;
    local_10 = 1;
    iVar1 = FUN_0001c216(iVar1,&uStack_18);
    if (-1 < iVar1) {
      do {
        iVar1 = local_c;
      } while ((local_10 & 3) != 0);
    }
  }
  return iVar1;
}



// FUN_00020104 @ 00020104 (36 bytes, called_by=0, calls=0)

undefined4 FUN_00020104(char *param_1,undefined4 *param_2)

{
  char *pcVar1;
  char *pcVar2;
  
  if ((*param_1 == '\x15') && (param_1[5] == -0x10)) {
    pcVar2 = param_1 + 6;
    do {
      pcVar1 = pcVar2 + 4;
      *param_2 = *(undefined4 *)pcVar2;
      param_2 = param_2 + 1;
      pcVar2 = pcVar1;
    } while (pcVar1 != param_1 + 0x1a);
    return 1;
  }
  return 0;
}



// FUN_00020128 @ 00020128 (42 bytes, called_by=0, calls=0)

void FUN_00020128(undefined1 *param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_000168a4(param_1 + 1,0,0x84);
  param_1[5] = 0xe0;
  *param_1 = 0x15;
  FUN_00016a4c(param_1 + 10,param_3);
  *(undefined4 *)(param_1 + 6) = param_2;
  return;
}



// FUN_00020152 @ 00020152 (36 bytes, called_by=0, calls=0)

undefined4 FUN_00020152(char *param_1,undefined4 *param_2)

{
  char *pcVar1;
  char *pcVar2;
  
  if ((*param_1 == '\x15') && (param_1[5] == -0xc)) {
    pcVar2 = param_1 + 6;
    do {
      pcVar1 = pcVar2 + 4;
      *param_2 = *(undefined4 *)pcVar2;
      param_2 = param_2 + 1;
      pcVar2 = pcVar1;
    } while (pcVar1 != param_1 + 0x1a);
    return 1;
  }
  return 0;
}



// FUN_00020176 @ 00020176 (62 bytes, called_by=0, calls=0)

void FUN_00020176(undefined1 *param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
                 byte param_5,undefined1 param_6)

{
  FUN_000168a4(param_1 + 1,0,0x84,param_4,param_4);
  param_1[3] = 1;
  param_1[5] = 0xe1;
  *param_1 = 0x12;
  *(uint *)(param_1 + 0xe) = (uint)param_5;
  *(undefined4 *)(param_1 + 6) = param_2;
  *(undefined4 *)(param_1 + 10) = param_3;
  param_1[0x16] = param_6;
  *(undefined4 *)(param_1 + 0x12) = *param_4;
  return;
}



// FUN_000201b4 @ 000201b4 (28 bytes, called_by=0, calls=0)

void FUN_000201b4(undefined1 *param_1,undefined1 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_000168a4(param_1 + 2,0,0x83,param_4,param_4);
  param_1[5] = 0xe2;
  param_1[1] = param_2;
  *param_1 = 1;
  return;
}



// FUN_000201d0 @ 000201d0 (28 bytes, called_by=0, calls=0)

void FUN_000201d0(undefined1 *param_1,undefined1 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_000168a4(param_1 + 2,0,0x83,param_4,param_4);
  param_1[5] = 0xe3;
  param_1[1] = param_2;
  *param_1 = 1;
  return;
}



// FUN_000201ec @ 000201ec (40 bytes, called_by=0, calls=0)

undefined4 FUN_000201ec(byte *param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  
  if ((int)(0x80 - (uint)*param_1) < param_3) {
    uVar1 = 0xffffffff;
  }
  else {
    FUN_00000820(param_1 + *param_1 + 5);
    *param_1 = *param_1 + (char)param_3;
    uVar1 = 0;
  }
  return uVar1;
}



// FUN_00020214 @ 00020214 (40 bytes, called_by=0, calls=0)

void FUN_00020214(char *param_1,char param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_000168a4(param_1,0,0x85,param_4,param_4);
  param_1[1] = param_2;
  param_1[5] = -0x1c;
  FUN_00000820(param_1 + 6,param_3,param_4);
  *param_1 = (char)param_4 + '\x01';
  return;
}



// FUN_0002023c @ 0002023c (28 bytes, called_by=0, calls=0)

void FUN_0002023c(undefined1 *param_1,undefined1 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_000168a4(param_1 + 2,0,0x83,param_4,param_4);
  param_1[5] = 0xe5;
  param_1[1] = param_2;
  *param_1 = 1;
  return;
}



// FUN_00020258 @ 00020258 (28 bytes, called_by=0, calls=0)

void FUN_00020258(undefined1 *param_1,undefined1 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_000168a4(param_1 + 2,0,0x83,param_4,param_4);
  param_1[5] = 0xe6;
  param_1[1] = param_2;
  *param_1 = 1;
  return;
}



// FUN_00020274 @ 00020274 (36 bytes, called_by=0, calls=0)

void FUN_00020274(undefined1 *param_1,undefined1 param_2,undefined1 param_3,undefined4 param_4)

{
  FUN_000168a4(param_1 + 2,0,0x83,param_4,param_4);
  param_1[5] = 0xe7;
  param_1[1] = param_2;
  param_1[6] = param_3;
  param_1[7] = (char)param_4;
  *param_1 = 3;
  return;
}



// FUN_00020298 @ 00020298 (52 bytes, called_by=0, calls=0)

int FUN_00020298(int param_1,code *param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  
  if (param_1 != 0) {
    if (param_1 != param_5) {
      return -0x16;
    }
    iVar1 = (*param_2)(param_3,param_4,param_5,param_4,param_4);
    if (iVar1 < 0) {
      return iVar1;
    }
    if (iVar1 != 0) {
      return 0;
    }
  }
  FUN_000168a4(param_4,0,param_5);
  return 0;
}



// FUN_000202cc @ 000202cc (66 bytes, called_by=0, calls=0)

int FUN_000202cc(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  
  bVar1 = *(byte *)(param_3 + 1);
  uVar3 = bVar1 + 2;
  if ((uVar3 < 0x40) && (iVar2 = FUN_000138ec(param_2,param_3,param_3,uVar3,param_4), iVar2 != 0)) {
    if ((*(code **)(iVar2 + 4) == (code *)0x0) ||
       (iVar2 = (**(code **)(iVar2 + 4))(param_1,param_3 + 2,(uint)bVar1), iVar2 == 0)) {
      FUN_00000820(param_4,param_3,*(byte *)(param_3 + 1) + 2);
      iVar2 = 0;
    }
  }
  else {
    iVar2 = -0x16;
  }
  return iVar2;
}



// FUN_0002030e @ 0002030e (64 bytes, called_by=0, calls=0)

int FUN_0002030e(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_000138ec(param_2,param_4,param_3,param_4,param_4);
  iVar1 = (int)uVar2;
  if (iVar1 == 0) {
    iVar1 = -0x16;
  }
  else if (*(int *)(iVar1 + 8) == 0) {
    iVar1 = -0x5f;
  }
  else {
    FUN_00000820(param_3,(int)((ulonglong)uVar2 >> 0x20),*(byte *)(param_4 + 1) + 2);
    iVar1 = (**(code **)(iVar1 + 8))(param_1,param_3 + 2,param_3 + 1);
    if (-1 < iVar1) {
      iVar1 = 0x3f;
    }
  }
  return iVar1;
}



// FUN_0002034e @ 0002034e (32 bytes, called_by=0, calls=0)

undefined4 FUN_0002034e(undefined4 param_1,undefined1 *param_2,char *param_3)

{
  undefined1 uVar1;
  
  uVar1 = *param_2;
  *param_3 = '\0';
  FUN_00002b5c(param_2 + 1,param_3,uVar1);
  if (*param_3 != '\0') {
    *param_3 = *param_3 + '\x01';
  }
  return 0;
}



// FUN_0002038c @ 0002038c (44 bytes, called_by=0, calls=0)

undefined4 FUN_0002038c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 4);
  iVar1 = FUN_000206b8(*(undefined4 *)(iVar3 + 4));
  if (iVar1 == 0) {
    uVar2 = 0xffffffed;
  }
  else {
    if (*(char *)(iVar3 + 9) != '\0') {
                    /* WARNING: Could not recover jumptable at 0x000203aa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*(code *)**(undefined4 **)(*(int *)(iVar3 + 4) + 8))(*(int *)(iVar3 + 4),iVar3 + 10);
      return uVar2;
    }
    uVar2 = 0xffffff7a;
  }
  return uVar2;
}



// FUN_000203b8 @ 000203b8 (198 bytes, called_by=0, calls=0)

int FUN_000203b8(int param_1,uint *param_2)

{
  ushort uVar1;
  int iVar2;
  undefined4 extraout_r1;
  uint uVar3;
  int iVar4;
  byte bVar5;
  int iVar6;
  short local_32;
  int local_30;
  undefined1 auStack_2c [4];
  int local_28;
  short *local_24;
  undefined4 local_20;
  undefined2 local_1c;
  
  iVar4 = *(int *)(param_1 + 4);
  iVar6 = *(int *)(param_1 + 0x10);
  FUN_000168a4(auStack_2c,0,0x14);
  local_24 = &local_32;
  local_20 = 2;
  iVar6 = iVar6 + 4;
  FUN_00014d3c(iVar6,extraout_r1,0xffffffff,0xffffffff);
  if (*(char *)(iVar4 + 9) == '\0') {
    FUN_00014e2c(iVar6);
  }
  else {
    local_28 = 1 << (uint)*(byte *)(iVar4 + 8);
    local_1c = *(undefined2 *)(iVar4 + 0x14);
    iVar2 = (**(code **)(*(int *)(*(int *)(iVar4 + 4) + 8) + 4))(*(int *)(iVar4 + 4),auStack_2c);
    FUN_00014e2c(iVar6);
    if (iVar2 != 0) {
      return iVar2;
    }
    if (*(char *)(iVar4 + 9) != '\0') {
      bVar5 = *(byte *)(iVar4 + 0x14);
      if (*(char *)(iVar4 + 0xb) == '\x04') {
        uVar1 = *(ushort *)(*(int *)(*(int *)(iVar4 + 4) + 8) + 8);
      }
      else {
        uVar1 = *(ushort *)(iVar4 + 0x12);
      }
      if ((int)((uint)*(byte *)(iVar4 + 0xe) << 0x1a) < 0) {
        bVar5 = bVar5 - 1;
      }
      local_30 = (uint)uVar1 * (int)local_32;
      iVar6 = FUN_0000e57c(*(undefined1 *)(iVar4 + 10),&local_30);
      if (iVar6 != 0) {
        return iVar6;
      }
      iVar6 = (*(int *)(iVar4 + 0x20) * (local_30 >> (uint)bVar5)) / 1000;
      if (iVar6 < *(int *)(iVar4 + 0x18)) {
        uVar3 = 0;
      }
      else {
        uVar3 = (uint)(iVar6 <= *(int *)(iVar4 + 0x1c));
      }
      *param_2 = uVar3;
      return 0;
    }
  }
  return -0x86;
}



// FUN_0002048a @ 0002048a (72 bytes, called_by=0, calls=0)

int FUN_0002048a(int *param_1,int *param_2,undefined4 param_3)

{
  ushort uVar1;
  int iVar2;
  byte bVar3;
  int local_14;
  undefined4 uStack_10;
  
  if (*(char *)((int)param_1 + 5) == '\0') {
    iVar2 = -0x86;
  }
  else {
    bVar3 = *(byte *)(param_1 + 4);
    if (*(char *)((int)param_1 + 7) == '\x04') {
      uVar1 = *(ushort *)(*(int *)(*param_1 + 8) + 8);
    }
    else {
      uVar1 = *(ushort *)((int)param_1 + 0xe);
    }
    if ((int)((uint)*(byte *)((int)param_1 + 10) << 0x1a) < 0) {
      bVar3 = bVar3 - 1;
    }
    local_14 = (uint)uVar1 * *param_2;
    uStack_10 = param_3;
    iVar2 = FUN_0000e57c(*(undefined1 *)((int)param_1 + 6),&local_14,(uint)uVar1,local_14,param_1);
    if (iVar2 == 0) {
      *param_2 = local_14 >> (uint)bVar3;
    }
  }
  return iVar2;
}



// FUN_000204d2 @ 000204d2 (64 bytes, called_by=0, calls=0)

int FUN_000204d2(int param_1,char *param_2,int param_3)

{
  int iVar1;
  undefined1 uStack_5c;
  undefined1 local_5b;
  
  iVar1 = *(int *)(param_1 + 4);
  if (param_3 == 0) {
    iVar1 = -0x16;
  }
  else {
    FUN_000168a4(&uStack_5c,0,0x49);
    if (*param_2 == '\0') {
      local_5b = 5;
    }
    else {
      local_5b = 4;
    }
    iVar1 = FUN_00014bdc(*(undefined4 *)(iVar1 + 0x20),&uStack_5c,0,0);
    if (iVar1 != 0) {
      iVar1 = -0xb;
    }
  }
  return iVar1;
}



// thunk_FUN_0001cab2 @ 00020512 (4 bytes, called_by=0, calls=0)

void thunk_FUN_0001cab2(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  uStack_c = param_3;
  uStack_8 = param_3;
  FUN_0001ca44(param_1,param_2,&uStack_c,1,param_1);
  return;
}



// FUN_0002051c @ 0002051c (32 bytes, called_by=0, calls=0)

void FUN_0002051c(int param_1)

{
  FUN_00001904(param_1 * 0x8000 + 999,param_1 >> 0x11,1000,0);
  FUN_0001596c();
  return;
}



// FUN_0002053c @ 0002053c (22 bytes, called_by=0, calls=0)

void FUN_0002053c(undefined4 *param_1,undefined4 param_2)

{
  bool bVar1;
  
  DataMemoryBarrier(0x1b);
  do {
    ExclusiveAccess(param_1);
    bVar1 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar1);
  *param_1 = param_2;
  DataMemoryBarrier(0x1b);
  return;
}



// FUN_00020552 @ 00020552 (40 bytes, called_by=0, calls=0)

void FUN_00020552(int param_1,uint param_2)

{
  int iVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  iVar1 = *(int *)(param_1 + 0x14);
  if ((1 << *(sbyte *)(param_1 + 0x18) & **(uint **)(iVar1 + 0x10)) != 0) {
    param_2 = param_2 ^ 1;
  }
  if (param_2 == 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(*(int *)(iVar1 + 8) + 0x10);
  }
  else {
    UNRECOVERED_JUMPTABLE = *(code **)(*(int *)(iVar1 + 8) + 0xc);
  }
                    /* WARNING: Could not recover jumptable at 0x00020572. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



// FUN_0002057a @ 0002057a (42 bytes, called_by=0, calls=0)

void FUN_0002057a(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x10);
  FUN_00020b9e(param_1 + 0x504);
  FUN_0002053c(param_1 + 0x574,0);
  FUN_00020552(*(undefined4 *)(iVar1 + 4));
  *(undefined1 *)(param_1 + 0x5d4) = 0;
  *(undefined1 *)(param_1 + 0x5d5) = 0;
  return;
}



// FUN_000205a8 @ 000205a8 (64 bytes, called_by=0, calls=0)

void FUN_000205a8(int param_1,undefined1 *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 uVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_1 + 0x10);
  iVar3 = *(int *)(param_1 + 4);
  *(undefined1 *)(iVar4 + 0x692) = 1;
  uVar1 = *(undefined1 *)(iVar3 + 4);
  *param_2 = uVar1;
  uVar2 = FUN_0001b700(0,param_2,0x47,uVar1,param_4);
  *(undefined2 *)(param_2 + 0x47) = uVar2;
  iVar3 = FUN_00013f84(param_1,param_2,param_3);
  if (iVar3 != 0) {
    FUN_00013f84(param_1,param_2,param_3);
  }
  *(undefined1 *)(iVar4 + 0x692) = 0;
  return;
}



// FUN_000205e8 @ 000205e8 (34 bytes, called_by=0, calls=0)

void FUN_000205e8(int param_1)

{
  int iVar1;
  undefined1 auStack_5c [80];
  
  iVar1 = *(int *)(param_1 + 0x10);
  FUN_000168a4(auStack_5c,0,0x49);
  FUN_000205a8(param_1,auStack_5c,iVar1 + 0x63a);
  return;
}



// FUN_0002060a @ 0002060a (142 bytes, called_by=0, calls=0)

/* WARNING: Removing unreachable block (ram,0x0001531c) */

undefined4 FUN_0002060a(int param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int local_20;
  int local_1c;
  undefined4 uStack_18;
  
  cVar1 = *(char *)(param_1 + 0xd2);
  iVar7 = *(int *)(param_1 + -0x4f4);
  local_20 = 0;
  local_1c = 0;
  uStack_18 = param_3;
  iVar5 = FUN_00014518(iVar7,&local_20,&local_1c);
  if (iVar5 == 0) {
    uVar6 = 0;
    if ((0x67f < local_1c - 0x686U) && (cVar1 == '\0')) {
      uVar6 = FUN_00020552(*(undefined4 *)(iVar7 + 4),0);
      *(undefined1 *)(param_1 + 0xd1) = 1;
    }
    if (local_20 - 0x1068U < 0x709) goto LAB_00020658;
  }
  else if (cVar1 == '\0') {
    FUN_00020552(*(undefined4 *)(iVar7 + 4),0);
    *(undefined1 *)(param_1 + 0xd1) = 1;
  }
  uVar6 = FUN_00020552(*(undefined4 *)(iVar7 + 4),0);
  *(undefined1 *)(param_1 + 0xd0) = 1;
LAB_00020658:
  if ((*(char *)(param_1 + 0xd0) == '\0') && (*(char *)(param_1 + 0xd1) == '\0')) {
    uStack_18 = 0xa4;
    local_20 = DAT_0001535c;
    local_1c = DAT_0001535c;
    uVar6 = 0;
    bVar2 = (bool)isCurrentModePrivileged();
    if (bVar2) {
      uVar6 = getBasePriority();
    }
    bVar2 = (bool)isCurrentModePrivileged();
    if ((bVar2) && (uVar3 = getBasePriority(), uVar3 == 0 || 0x40 < uVar3)) {
      setBasePriority(0x40);
    }
    InstructionSynchronizationBarrier(0xf);
    FUN_00020a54(param_1);
    uVar4 = DAT_00015350;
    *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | 8;
    *(int *)(param_1 + 0x28) = local_1c;
    FUN_00015be0(param_1 + 0x10,uVar4,0xa4,0);
    bVar2 = (bool)isCurrentModePrivileged();
    if (bVar2) {
      setBasePriority(uVar6);
    }
    InstructionSynchronizationBarrier(0xf);
    return 1;
  }
  return uVar6;
}



// FUN_000206b8 @ 000206b8 (22 bytes, called_by=0, calls=0)

uint FUN_000206b8(uint param_1)

{
  undefined4 *puVar1;
  byte bVar2;
  
  if (param_1 != 0) {
    puVar1 = (undefined4 *)(param_1 + 0xc);
    bVar2 = ((char *)*puVar1)[1];
    param_1 = bVar2 & 1;
    if ((bVar2 & 1) != 0) {
      param_1 = (uint)(*(char *)*puVar1 == '\0');
    }
  }
  return param_1;
}



// FUN_000206e8 @ 000206e8 (130 bytes, called_by=0, calls=0)

void FUN_000206e8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5,
                 int param_6)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  int local_30;
  int iStack_2c;
  
  FUN_00020ed0(&local_30,param_2,param_5,param_6);
  iVar4 = iStack_2c;
  iVar3 = local_30;
  uVar5 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    uVar5 = getBasePriority();
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if ((bVar1) && (uVar2 = getBasePriority(), uVar2 == 0 || 0x40 < uVar2)) {
    setBasePriority(0x40);
  }
  InstructionSynchronizationBarrier(0xf);
  while ((uVar6 = FUN_0001b972(param_1,param_2,param_3), (int)uVar6 == 0 &&
         (param_5 != 0 || param_6 != 0))) {
    FUN_00020f18(&local_30,(int)((ulonglong)uVar6 >> 0x20),iVar3,iVar4);
    param_6 = iStack_2c;
    param_5 = local_30;
    FUN_00015688(param_1 + 0x14,uVar5,param_1 + 0xc);
    uVar5 = 0;
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      uVar5 = getBasePriority();
    }
    bVar1 = (bool)isCurrentModePrivileged();
    if ((bVar1) && (uVar2 = getBasePriority(), uVar2 == 0 || 0x40 < uVar2)) {
      setBasePriority(0x40);
    }
    InstructionSynchronizationBarrier(0xf);
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(uVar5);
  }
  InstructionSynchronizationBarrier(0xf);
  return;
}



// FUN_000207d6 @ 000207d6 (76 bytes, called_by=0, calls=0)

void FUN_000207d6(int param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  
  uVar4 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    uVar4 = getBasePriority();
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if ((bVar1) && (uVar2 = getBasePriority(), uVar2 == 0 || 0x40 < uVar2)) {
    setBasePriority(0x40);
  }
  InstructionSynchronizationBarrier(0xf);
  if ((*(int *)(param_1 + 0xc) == 0) && (iVar3 = FUN_00020d5e(), iVar3 != 0)) {
    *(undefined4 *)(iVar3 + 0xac) = 0;
    *(undefined4 **)(iVar3 + 0x14) = param_2;
    FUN_00020c68();
    FUN_00015768(param_1 + 8,uVar4,param_3,param_4);
    return;
  }
  *param_2 = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 **)(param_1 + 0xc) = param_2;
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + -1;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(uVar4);
  }
  InstructionSynchronizationBarrier(0xf);
  return;
}



// FUN_00020822 @ 00020822 (22 bytes, called_by=0, calls=0)

void FUN_00020822(void)

{
  bool bVar1;
  uint uVar2;
  
  do {
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      getBasePriority();
    }
    bVar1 = (bool)isCurrentModePrivileged();
    if ((bVar1) && (uVar2 = getBasePriority(), uVar2 == 0 || 0x40 < uVar2)) {
      setBasePriority(0x40);
    }
    InstructionSynchronizationBarrier(0xf);
    FUN_0001d884();
  } while( true );
}



// FUN_00020838 @ 00020838 (38 bytes, called_by=0, calls=0)

void FUN_00020838(int param_1,int param_2,int param_3,int param_4)

{
  *(int *)(param_1 + 8) = param_3;
  *(int *)(param_1 + 0xc) = param_4;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined1 *)(param_1 + 0x2c) = 0;
  *(int *)(param_1 + 0x14) = param_4 * param_3 + param_2;
  *(int *)(param_1 + 0x18) = param_2;
  *(int *)param_1 = param_1;
  *(int *)(param_1 + 4) = param_1;
  *(int *)(param_1 + 0x24) = param_1 + 0x24;
  *(int *)(param_1 + 0x28) = param_1 + 0x24;
  *(int *)(param_1 + 0x10) = param_2;
  *(int *)(param_1 + 0x1c) = param_2;
  return;
}



// FUN_0002085e @ 0002085e (50 bytes, called_by=0, calls=0)

undefined4 FUN_0002085e(int param_1,undefined4 param_2)

{
  bool bVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar4 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    uVar4 = getBasePriority();
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if ((bVar1) && (uVar2 = getBasePriority(), uVar2 == 0 || 0x40 < uVar2)) {
    setBasePriority(0x40);
  }
  InstructionSynchronizationBarrier(0xf);
  if (*(int *)(param_1 + 0x20) == 0) {
    uVar3 = 0xffffffdd;
  }
  else {
    FUN_00000820(param_2,*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 8));
    uVar3 = 0;
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(uVar4);
  }
  InstructionSynchronizationBarrier(0xf);
  return uVar3;
}



// FUN_00020890 @ 00020890 (66 bytes, called_by=0, calls=0)

void FUN_00020890(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  
  uVar4 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    uVar4 = getBasePriority();
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if ((bVar1) && (uVar2 = getBasePriority(), uVar2 == 0 || 0x40 < uVar2)) {
    setBasePriority(0x40);
  }
  InstructionSynchronizationBarrier(0xf);
  iVar3 = FUN_00020d5e();
  while (iVar3 != 0) {
    *(undefined4 *)(iVar3 + 0xac) = 0xffffffdd;
    FUN_00020c68();
    iVar3 = FUN_00020d5e(param_1);
  }
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_1 + 0x1c);
  FUN_00015768(param_1 + 8,uVar4,param_3,param_4);
  return;
}



// FUN_000208d2 @ 000208d2 (148 bytes, called_by=0, calls=0)

undefined4 FUN_000208d2(int *param_1,int param_2)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  
  if (*(char *)((int)param_1 + 0xe) == param_2) {
    return 0;
  }
  uVar10 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    uVar10 = getBasePriority();
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if ((bVar1) && (uVar2 = getBasePriority(), uVar2 == 0 || 0x40 < uVar2)) {
    setBasePriority(0x40);
  }
  InstructionSynchronizationBarrier(0xf);
  if (((*(byte *)((int)param_1 + 0xd) & 0x1f) == 0) && (param_1[6] == 0)) {
    *(byte *)((int)param_1 + 0xd) = *(byte *)((int)param_1 + 0xd) & 0x7f;
    uVar11 = FUN_00020be2();
    iVar3 = DAT_00015764;
    iVar7 = (int)((ulonglong)uVar11 >> 0x20);
    iVar4 = (int)uVar11;
    *(char *)(iVar4 + 0xe) = (char)((ulonglong)uVar11 >> 0x20);
    *(byte *)(iVar4 + 0xd) = *(byte *)(iVar4 + 0xd) | 0x80;
    puVar8 = (undefined4 *)(iVar3 + 0x20);
    puVar9 = (undefined4 *)0x0;
    if ((undefined4 *)*puVar8 != puVar8) {
      puVar9 = (undefined4 *)*puVar8;
    }
    puVar5 = *(undefined4 **)(iVar3 + 0x24);
    for (; puVar9 != (undefined4 *)0x0; puVar9 = (undefined4 *)*puVar9) {
      if ((iVar7 != *(char *)((int)puVar9 + 0xe)) && (iVar7 < *(char *)((int)puVar9 + 0xe))) {
        puVar8 = (undefined4 *)puVar9[1];
        *param_1 = (int)puVar9;
        param_1[1] = (int)puVar8;
        *puVar8 = param_1;
        puVar9[1] = param_1;
        goto LAB_00015752;
      }
      if (puVar5 == puVar9) break;
    }
    *param_1 = (int)puVar8;
    param_1[1] = (int)puVar5;
    *puVar5 = param_1;
    *(int **)(iVar3 + 0x24) = param_1;
LAB_00015752:
    FUN_00015460(1);
    uVar6 = 1;
  }
  else {
    *(char *)((int)param_1 + 0xe) = (char)param_2;
    uVar6 = 0;
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(uVar10);
  }
  InstructionSynchronizationBarrier(0xf);
  return uVar6;
}



// FUN_000208e2 @ 000208e2 (14 bytes, called_by=0, calls=0)

void FUN_000208e2(int param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(int *)param_1 = param_1;
  *(int *)(param_1 + 4) = param_1;
  return;
}



// FUN_000208f0 @ 000208f0 (204 bytes, called_by=0, calls=0)

undefined4 FUN_000208f0(uint *param_1,uint *param_2,uint *param_3,int param_4,char param_5)

{
  bool bVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  undefined4 uVar5;
  
  uVar5 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    uVar5 = getBasePriority();
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if ((bVar1) && (uVar4 = getBasePriority(), uVar4 == 0 || 0x40 < uVar4)) {
    setBasePriority(0x40);
  }
  InstructionSynchronizationBarrier(0xf);
  if (param_5 != '\0') {
    param_2 = (uint *)param_1[1];
  }
  iVar2 = FUN_00020d5e(param_1 + 2);
  if (iVar2 != 0) {
    *(undefined4 *)(iVar2 + 0xac) = 0;
    *(uint **)(iVar2 + 0x14) = param_3;
    FUN_00020c68();
    goto LAB_0002092c;
  }
  if (param_4 == 0) {
    *param_3 = 0;
  }
  else {
    puVar3 = (uint *)FUN_0001617c(0,8);
    if (puVar3 == (uint *)0x0) {
      bVar1 = (bool)isCurrentModePrivileged();
      if (bVar1) {
        setBasePriority(uVar5);
      }
      InstructionSynchronizationBarrier(0xf);
      return 0xfffffff4;
    }
    puVar3[1] = (uint)param_3;
    *puVar3 = 1;
    param_3 = puVar3;
  }
  uVar4 = *param_3 & 3;
  if (param_2 == (uint *)0x0) {
    *param_3 = *param_1 | uVar4;
    *param_1 = (uint)param_3;
    if (param_1[1] == 0) {
LAB_00020972:
      param_1[1] = (uint)param_3;
    }
  }
  else if (*param_2 < 4) {
    *param_3 = uVar4;
    puVar3 = (uint *)param_1[1];
    if (puVar3 != (uint *)0x0) {
      *puVar3 = *puVar3 & 3 | (uint)param_3;
      goto LAB_00020972;
    }
    *param_1 = (uint)param_3;
    param_1[1] = (uint)param_3;
  }
  else {
    *param_3 = *param_2 & 0xfffffffc | uVar4;
    *param_2 = (uint)param_3 | *param_2 & 3;
  }
  FUN_00021222(param_1 + 4,4);
LAB_0002092c:
  FUN_00015768(param_1 + 2,uVar5);
  return 0;
}



// FUN_000209bc @ 000209bc (24 bytes, called_by=0, calls=0)

uint * FUN_000209bc(uint *param_1,int param_2)

{
  if (param_1 != (uint *)0x0) {
    if (((*param_1 & 3) != 0) && (param_1 = (uint *)param_1[1], param_2 != 0)) {
      FUN_000213f2();
    }
  }
  return param_1;
}



// FUN_000209d4 @ 000209d4 (24 bytes, called_by=0, calls=0)

void FUN_000209d4(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = param_1 + 2;
  param_1[3] = param_1 + 2;
  param_1[4] = param_1 + 4;
  param_1[5] = param_1 + 4;
  return;
}



// FUN_000209ec @ 000209ec (22 bytes, called_by=0, calls=0)

void FUN_000209ec(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_000208f0(param_1,0,param_2,0,1,param_2,param_3);
  return;
}



// FUN_00020a3e @ 00020a3e (22 bytes, called_by=0, calls=0)

uint FUN_00020a3e(uint *param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = *param_1;
  *param_1 = uVar1 & ~(1 << (param_2 & 0xff));
  return uVar1 >> (param_2 & 0xff) & 1;
}



// FUN_00020a54 @ 00020a54 (30 bytes, called_by=0, calls=0)

uint FUN_00020a54(int param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = FUN_00020a3e(param_1 + 0xc,3);
  if (uVar1 != 0) {
    iVar2 = FUN_00020e9a(param_1 + 0x10);
    uVar1 = (uint)(iVar2 == 0);
  }
  return uVar1;
}



// FUN_00020a72 @ 00020a72 (14 bytes, called_by=0, calls=0)

void FUN_00020a72(int param_1)

{
  if (param_1 != 0) {
    FUN_00020e10(param_1 + 0xb8,0);
    return;
  }
  return;
}



// FUN_00020a80 @ 00020a80 (102 bytes, called_by=0, calls=0)

uint FUN_00020a80(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined4 *puVar9;
  
  iVar6 = param_1[3];
  if (-1 < iVar6 << 0x1e) {
    iVar8 = param_1[2];
    iVar2 = FUN_00020a3e(param_1 + 3,2);
    if (iVar2 != 0) {
      puVar1 = *(undefined4 **)(iVar8 + 0xb0);
      puVar9 = (undefined4 *)((uint)(iVar6 << 0x1e) >> 0x1f);
      while (puVar4 = puVar1, puVar4 != (undefined4 *)0x0) {
        if (param_1 == puVar4) {
          uVar5 = *param_1;
          if (puVar9 == (undefined4 *)0x0) {
            *(undefined4 *)(iVar8 + 0xb0) = uVar5;
            if (param_1 == *(undefined4 **)(iVar8 + 0xb4)) {
              *(undefined4 *)(iVar8 + 0xb4) = uVar5;
            }
          }
          else {
            *puVar9 = uVar5;
            if (param_1 == *(undefined4 **)(iVar8 + 0xb4)) {
              *(undefined4 **)(iVar8 + 0xb4) = puVar9;
            }
          }
          *param_1 = 0;
          break;
        }
        puVar9 = puVar4;
        puVar1 = (undefined4 *)*puVar4;
      }
    }
  }
  uVar7 = param_1[3];
  uVar3 = uVar7 & 0x1f;
  if (uVar3 != 0) {
    uVar7 = uVar7 | 2;
  }
  if (uVar3 != 0) {
    param_1[3] = uVar7;
    uVar3 = uVar3 | 2;
  }
  return uVar3;
}



// FUN_00020ae6 @ 00020ae6 (60 bytes, called_by=0, calls=0)

void FUN_00020ae6(int param_1,undefined4 param_2,undefined4 param_3)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 local_14;
  
  uVar4 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    uVar4 = getBasePriority();
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if ((bVar1) && (uVar2 = getBasePriority(), uVar2 == 0 || 0x40 < uVar2)) {
    setBasePriority(0x40);
  }
  InstructionSynchronizationBarrier(0xf);
  local_14 = 0;
  iVar3 = FUN_00020a3e(param_1 + -4,3,param_3,0,param_1);
  if (iVar3 != 0) {
    local_14 = *(undefined4 *)(param_1 + 0x18);
    FUN_0001515c(param_1 + -0x10,&local_14);
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(uVar4);
  }
  InstructionSynchronizationBarrier(0xf);
  return;
}



// FUN_00020b22 @ 00020b22 (18 bytes, called_by=0, calls=0)

void FUN_00020b22(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_000168a4(param_1,0,0x10,param_4,param_4);
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}



// FUN_00020b34 @ 00020b34 (38 bytes, called_by=0, calls=0)

void FUN_00020b34(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  bool bVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 local_c;
  
  uVar3 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    uVar3 = getBasePriority();
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if ((bVar1) && (uVar2 = getBasePriority(), uVar2 == 0 || 0x40 < uVar2)) {
    setBasePriority(0x40);
  }
  InstructionSynchronizationBarrier(0xf);
  local_c = param_1;
  FUN_0001515c(param_2,&local_c,param_3,0x40,param_1);
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(uVar3);
  }
  InstructionSynchronizationBarrier(0xf);
  return;
}



// FUN_00020b5a @ 00020b5a (32 bytes, called_by=0, calls=0)

int FUN_00020b5a(void)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar3 = FUN_00020b34();
  if (0 < iVar3) {
    uVar4 = 0;
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      uVar4 = getBasePriority();
    }
    bVar1 = (bool)isCurrentModePrivileged();
    if ((bVar1) && (uVar2 = getBasePriority(), uVar2 == 0 || 0x40 < uVar2)) {
      setBasePriority(0x40);
    }
    InstructionSynchronizationBarrier(0xf);
    FUN_000157c8(uVar4);
  }
  return iVar3;
}



// FUN_00020b7a @ 00020b7a (12 bytes, called_by=0, calls=0)

void FUN_00020b7a(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_000168a4(param_1,0,0xd0,param_4,param_4);
  return;
}



// FUN_00020b86 @ 00020b86 (24 bytes, called_by=0, calls=0)

void FUN_00020b86(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_000168a4(param_1,0,0x30,param_4,param_4);
  *(undefined4 *)(param_1 + 4) = param_2;
  *(undefined4 *)(param_1 + 0xc) = 0x100;
  return;
}



// FUN_00020b9e @ 00020b9e (38 bytes, called_by=0, calls=0)

void FUN_00020b9e(undefined4 param_1)

{
  bool bVar1;
  uint uVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    uVar3 = getBasePriority();
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if ((bVar1) && (uVar2 = getBasePriority(), uVar2 == 0 || 0x40 < uVar2)) {
    setBasePriority(0x40);
  }
  InstructionSynchronizationBarrier(0xf);
  FUN_00020a54();
  FUN_00020a80(param_1);
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(uVar3);
  }
  InstructionSynchronizationBarrier(0xf);
  return;
}



// FUN_00020bc4 @ 00020bc4 (12 bytes, called_by=0, calls=0)

uint FUN_00020bc4(void)

{
  bool bVar1;
  uint uVar2;
  
  uVar2 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    uVar2 = getCurrentExceptionNumber();
    uVar2 = uVar2 & 0x1f;
  }
  if (uVar2 != 0) {
    uVar2 = 1;
  }
  return uVar2;
}



// FUN_00020bd0 @ 00020bd0 (6 bytes, called_by=0, calls=0)

undefined4 FUN_00020bd0(void)

{
  return 0xffffffa8;
}



// FUN_00020bd6 @ 00020bd6 (4 bytes, called_by=0, calls=0)

undefined4 FUN_00020bd6(void)

{
  return 0;
}



// thunk_FUN_0001578c @ 00020bda (4 bytes, called_by=0, calls=0)

void thunk_FUN_0001578c(int param_1)

{
  bool bVar1;
  uint uVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    uVar3 = getBasePriority();
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if ((bVar1) && (uVar2 = getBasePriority(), uVar2 == 0 || 0x40 < uVar2)) {
    setBasePriority(0x40);
  }
  InstructionSynchronizationBarrier(0xf);
  if ((int)((uint)*(byte *)(param_1 + 0xd) << 0x1d) < 0) {
    *(byte *)(param_1 + 0xd) = *(byte *)(param_1 + 0xd) & 0xfb;
    FUN_000154cc();
    FUN_00015768(DAT_000157c4,uVar3);
    return;
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(uVar3);
  }
  InstructionSynchronizationBarrier(0xf);
  return;
}



// FUN_00020be2 @ 00020be2 (16 bytes, called_by=0, calls=0)

void FUN_00020be2(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = *param_1;
  piVar1 = (int *)param_1[1];
  *piVar1 = iVar2;
  *(int **)(iVar2 + 4) = piVar1;
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



// FUN_00020bf2 @ 00020bf2 (20 bytes, called_by=0, calls=0)

void FUN_00020bf2(void)

{
  int iVar1;
  
  iVar1 = FUN_00020be2();
  *(byte *)(iVar1 + 0xd) = *(byte *)(iVar1 + 0xd) & 0xfd;
  *(undefined4 *)(iVar1 + 8) = 0;
  return;
}



// FUN_00020c06 @ 00020c06 (80 bytes, called_by=0, calls=0)

void FUN_00020c06(int *param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  
  FUN_0001549c();
  *(byte *)((int)param_1 + 0xd) = *(byte *)((int)param_1 + 0xd) | 2;
  if (param_2 != (int *)0x0) {
    param_1[2] = (int)param_2;
    piVar2 = (int *)*param_2;
    if (param_2 != piVar2) {
      for (; piVar2 != (undefined4 *)0x0; piVar2 = (int *)*piVar2) {
        if ((*(char *)((int)param_1 + 0xe) != *(char *)((int)piVar2 + 0xe)) &&
           (*(char *)((int)param_1 + 0xe) < *(char *)((int)piVar2 + 0xe))) {
          piVar1 = (int *)piVar2[1];
          *param_1 = (int)piVar2;
          param_1[1] = (int)piVar1;
          *piVar1 = (int)param_1;
          piVar2[1] = (int)param_1;
          return;
        }
        if ((undefined4 *)param_2[1] == piVar2) break;
      }
    }
    piVar2 = (int *)param_2[1];
    *param_1 = (int)param_2;
    param_1[1] = (int)piVar2;
    *piVar2 = (int)param_1;
    param_2[1] = (int)param_1;
  }
  return;
}



// FUN_00020c56 @ 00020c56 (18 bytes, called_by=0, calls=0)

int FUN_00020c56(int param_1,int param_2)

{
  int iVar1;
  
  if ((int)*(char *)(param_1 + 0xe) == (int)*(char *)(param_2 + 0xe)) {
    iVar1 = 0;
  }
  else {
    iVar1 = (int)*(char *)(param_2 + 0xe) - (int)*(char *)(param_1 + 0xe);
  }
  return iVar1;
}



// FUN_00020c68 @ 00020c68 (30 bytes, called_by=0, calls=0)

void FUN_00020c68(void)

{
  bool bVar1;
  uint uVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    uVar3 = getBasePriority();
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if ((bVar1) && (uVar2 = getBasePriority(), uVar2 == 0 || 0x40 < uVar2)) {
    setBasePriority(0x40);
  }
  InstructionSynchronizationBarrier(0xf);
  FUN_000154cc();
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(uVar3);
  }
  InstructionSynchronizationBarrier(0xf);
  return;
}



// FUN_00020c86 @ 00020c86 (52 bytes, called_by=0, calls=0)

void FUN_00020c86(int param_1)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint extraout_r1;
  undefined4 uVar6;
  int iVar7;
  
  FUN_00020e9a(param_1 + 0x18);
  uVar6 = 0;
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    uVar6 = getBasePriority();
  }
  bVar2 = (bool)isCurrentModePrivileged();
  if ((bVar2) && (uVar5 = getBasePriority(), uVar5 == 0 || 0x40 < uVar5)) {
    setBasePriority(0x40);
  }
  InstructionSynchronizationBarrier(0xf);
  if ((*(byte *)(param_1 + 0xd) & 0x10) != 0) {
    bVar2 = (bool)isCurrentModePrivileged();
    if (bVar2) {
      setBasePriority(uVar6);
    }
    InstructionSynchronizationBarrier(0xf);
    return;
  }
  bVar1 = *(byte *)(param_1 + 0xd);
  if ((*(byte *)(param_1 + 0xd) & 0x10) == 0) {
    uVar5 = 0x10;
  }
  else {
    uVar5 = 8;
  }
  if ((uVar5 & bVar1) != 0) goto LAB_0001556a;
  if ((char)bVar1 < '\0') {
    *(byte *)(param_1 + 0xd) = (byte)uVar5 | bVar1 & 0x7f;
    FUN_00020be2();
    uVar5 = extraout_r1;
  }
  else {
    *(byte *)(param_1 + 0xd) = (byte)uVar5 | bVar1;
  }
  if (uVar5 == 8) {
    if (*(int *)(param_1 + 8) != 0) {
      FUN_00020bf2(param_1);
    }
    FUN_00020e9a(param_1 + 0x18);
    iVar7 = *(int *)(param_1 + 0x78);
    iVar3 = DAT_0001560c;
    iVar4 = DAT_00015610;
    while ((DAT_0001560c = iVar3, DAT_00015610 = iVar4, param_1 + 0x78 != iVar7 && (iVar7 != 0))) {
      FUN_00020bf2(iVar7);
      FUN_00020e9a(iVar7 + 0x18);
      *(undefined4 *)(iVar7 + 0xac) = 0;
      FUN_000154cc(iVar7);
      iVar3 = DAT_0001560c;
      iVar4 = DAT_00015610;
      iVar7 = *(int *)(param_1 + 0x78);
    }
    if (param_1 != *(int *)(iVar3 + 8)) goto LAB_00015558;
    uVar5 = 0;
    bVar2 = (bool)isCurrentModePrivileged();
    if (bVar2) {
      uVar5 = getCurrentExceptionNumber();
      uVar5 = uVar5 & 0x1f;
    }
    if (uVar5 == 0) goto LAB_00015558;
    FUN_00015460(1);
    *(undefined2 *)(iVar4 + 0xc) = 0x101;
    *(undefined4 *)(iVar4 + 0x98) = 0;
    *(undefined4 *)(iVar4 + 0x9c) = 0;
    FUN_00016170(iVar4);
    *(int *)(iVar3 + 8) = iVar4;
  }
  else {
LAB_00015558:
    FUN_00015460(1);
  }
  DataMemoryBarrier(0x1f);
  *(byte *)(param_1 + 0xd) = *(byte *)(param_1 + 0xd) & 0x9f;
LAB_0001556a:
  if (*(int *)(DAT_0001560c + 8) == param_1) {
    uVar5 = 0;
    bVar2 = (bool)isCurrentModePrivileged();
    if (bVar2) {
      uVar5 = getCurrentExceptionNumber();
      uVar5 = uVar5 & 0x1f;
    }
    if (uVar5 == 0) {
      FUN_00009ef8(uVar6);
      return;
    }
  }
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    setBasePriority(uVar6);
  }
  InstructionSynchronizationBarrier(0xf);
  return;
}



// FUN_00020cba @ 00020cba (34 bytes, called_by=0, calls=0)

void FUN_00020cba(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 extraout_r1;
  
  uVar3 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    uVar3 = getBasePriority();
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if ((bVar1) && (uVar2 = getBasePriority(), uVar2 == 0 || 0x40 < uVar2)) {
    setBasePriority(0x40);
  }
  InstructionSynchronizationBarrier(0xf);
  if (*(int *)(param_1 + 8) != 0) {
    FUN_00020bf2(param_1,uVar3,0x40,*(int *)(param_1 + 8),param_4);
    uVar3 = extraout_r1;
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(uVar3);
  }
  InstructionSynchronizationBarrier(0xf);
  return;
}



// FUN_00020cdc @ 00020cdc (78 bytes, called_by=0, calls=0)

void FUN_00020cdc(int param_1,int param_2)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  byte bVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  
  uVar6 = CONCAT44(param_2,param_1);
  uVar5 = 0;
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    uVar5 = getBasePriority();
  }
  bVar2 = (bool)isCurrentModePrivileged();
  if ((bVar2) && (uVar3 = getBasePriority(), uVar3 == 0 || 0x40 < uVar3)) {
    setBasePriority(0x40);
  }
  InstructionSynchronizationBarrier(0xf);
  cVar1 = *(char *)(param_1 + 0x90);
  *(undefined1 *)(param_1 + 0x90) = 0;
  if (((cVar1 == '\0') || (param_2 == 0)) && ((*(byte *)(param_1 + 0xd) & 0x28) == 0)) {
    if (*(int *)(param_1 + 8) != 0) {
      uVar6 = FUN_00020bf2();
    }
    bVar4 = *(byte *)((int)uVar6 + 0xd);
    if ((int)((ulonglong)uVar6 >> 0x20) == 0) {
      bVar4 = bVar4 & 0xfb;
    }
    else {
      bVar4 = bVar4 & 0xeb;
    }
    *(byte *)((int)uVar6 + 0xd) = bVar4;
    FUN_000154cc();
  }
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    setBasePriority(uVar5);
  }
  InstructionSynchronizationBarrier(0xf);
  return;
}



// FUN_00020d32 @ 00020d32 (44 bytes, called_by=0, calls=0)

undefined4 FUN_00020d32(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  longlong lVar5;
  
  uVar4 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    uVar4 = getBasePriority();
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if ((bVar1) && (uVar2 = getBasePriority(), uVar2 == 0 || 0x40 < uVar2)) {
    setBasePriority(0x40);
  }
  InstructionSynchronizationBarrier(0xf);
  piVar3 = (int *)*param_1;
  lVar5 = CONCAT44(uVar4,piVar3);
  if (param_1 == piVar3) {
    lVar5 = (ulonglong)uVar4 << 0x20;
  }
  else if (piVar3 != (int *)0x0) {
    lVar5 = FUN_00020bf2(piVar3,uVar4,0x40,param_1,param_4);
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority((int)((ulonglong)lVar5 >> 0x20));
  }
  InstructionSynchronizationBarrier(0xf);
  return (int)lVar5;
}



// FUN_00020d5e @ 00020d5e (54 bytes, called_by=0, calls=0)

int FUN_00020d5e(int *param_1)

{
  bool bVar1;
  uint uVar2;
  int *piVar3;
  undefined4 uVar4;
  
  uVar4 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    uVar4 = getBasePriority();
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if ((bVar1) && (uVar2 = getBasePriority(), uVar2 == 0 || 0x40 < uVar2)) {
    setBasePriority(0x40);
  }
  InstructionSynchronizationBarrier(0xf);
  piVar3 = (int *)*param_1;
  if (param_1 == piVar3) {
    piVar3 = (int *)0x0;
  }
  else if (piVar3 != (int *)0x0) {
    FUN_00020bf2(piVar3);
    FUN_00020e9a(piVar3 + 6);
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(uVar4);
  }
  InstructionSynchronizationBarrier(0xf);
  return (int)piVar3;
}



// FUN_00020d94 @ 00020d94 (16 bytes, called_by=0, calls=0)

void FUN_00020d94(void)

{
  int iVar1;
  
  iVar1 = FUN_00020cba();
  FUN_00020e9a(iVar1 + 0x18);
  return;
}



// FUN_00020da4 @ 00020da4 (40 bytes, called_by=0, calls=0)

undefined4 FUN_00020da4(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  uVar1 = 0;
  puVar2 = (undefined4 *)*param_1;
  while ((puVar2 != param_1 && (puVar2 != (undefined4 *)0x0))) {
    FUN_00020d94(puVar2);
    FUN_00020c68(puVar2);
    uVar1 = 1;
    puVar2 = (undefined4 *)*param_1;
  }
  return uVar1;
}



// FUN_00020e10 @ 00020e10 (70 bytes, called_by=0, calls=0)

undefined4 FUN_00020e10(int *param_1,undefined4 param_2,undefined4 param_3)

{
  bool bVar1;
  uint uVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 uVar5;
  
  uVar5 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    uVar5 = getBasePriority();
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if ((bVar1) && (uVar2 = getBasePriority(), uVar2 == 0 || 0x40 < uVar2)) {
    setBasePriority(0x40);
  }
  InstructionSynchronizationBarrier(0xf);
  piVar4 = (int *)*param_1;
  if (param_1 == piVar4) {
    uVar3 = 0;
  }
  else if (piVar4 == (int *)0x0) {
    uVar3 = 0;
  }
  else {
    piVar4[0x2b] = param_2;
    piVar4[5] = param_3;
    FUN_00020bf2(piVar4);
    FUN_00020e9a(piVar4 + 6);
    FUN_000154cc(piVar4);
    uVar3 = 1;
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(uVar5);
  }
  InstructionSynchronizationBarrier(0xf);
  return uVar3;
}



// FUN_00020e56 @ 00020e56 (68 bytes, called_by=0, calls=0)

int FUN_00020e56(int *param_1,code *param_2,undefined4 param_3)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  
  uVar5 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    uVar5 = getBasePriority();
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if ((bVar1) && (uVar2 = getBasePriority(), uVar2 == 0 || 0x40 < uVar2)) {
    setBasePriority(0x40);
  }
  InstructionSynchronizationBarrier(0xf);
  piVar4 = (int *)*param_1;
  if (param_1 != piVar4) {
    for (; piVar4 != (undefined4 *)0x0; piVar4 = (int *)*piVar4) {
      iVar3 = (*param_2)(piVar4,param_3);
      if (iVar3 != 0) goto LAB_00020e76;
      if ((undefined4 *)param_1[1] == piVar4) break;
    }
  }
  iVar3 = 0;
LAB_00020e76:
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(uVar5);
  }
  InstructionSynchronizationBarrier(0xf);
  return iVar3;
}



// FUN_00020e9a @ 00020e9a (42 bytes, called_by=0, calls=0)

undefined4 FUN_00020e9a(int *param_1)

{
  bool bVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar4 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    uVar4 = getBasePriority();
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if ((bVar1) && (uVar2 = getBasePriority(), uVar2 == 0 || 0x40 < uVar2)) {
    setBasePriority(0x40);
  }
  InstructionSynchronizationBarrier(0xf);
  if (*param_1 == 0) {
    uVar3 = 0xffffffea;
  }
  else {
    FUN_00015b68();
    uVar3 = 0;
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(uVar4);
  }
  InstructionSynchronizationBarrier(0xf);
  return uVar3;
}



// FUN_00020ec4 @ 00020ec4 (8 bytes, called_by=0, calls=0)

void FUN_00020ec4(void)

{
  FUN_00015da4();
  return;
}



// thunk_FUN_00015da4 @ 00020ecc (4 bytes, called_by=0, calls=0)

undefined8 thunk_FUN_00015da4(void)

{
  bool bVar1;
  uint uVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    uVar3 = getBasePriority();
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if ((bVar1) && (uVar2 = getBasePriority(), uVar2 == 0 || 0x40 < uVar2)) {
    setBasePriority(0x40);
  }
  InstructionSynchronizationBarrier(0xf);
  uVar2 = FUN_00015b54();
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(uVar3);
  }
  InstructionSynchronizationBarrier(0xf);
  return CONCAT44(DAT_00015dd0[1] + ((int)uVar2 >> 0x1f) + (uint)CARRY4(uVar2,*DAT_00015dd0),
                  uVar2 + *DAT_00015dd0);
}



// FUN_00020ed0 @ 00020ed0 (72 bytes, called_by=0, calls=0)

longlong * FUN_00020ed0(longlong *param_1,undefined4 param_2,uint param_3,int param_4)

{
  int iVar1;
  longlong lVar2;
  
  if (param_4 == -1 && param_3 == 0xffffffff) {
    lVar2 = -1;
  }
  else if (param_3 == 0 && param_4 == 0) {
    lVar2 = 0;
  }
  else {
    iVar1 = (-1 - param_4) - (uint)(0xfffffffe < param_3);
    lVar2 = CONCAT44(iVar1,-2 - param_3);
    if (iVar1 < 0) {
      lVar2 = FUN_00015da4();
      lVar2 = lVar2 + CONCAT44(param_4,param_3);
    }
  }
  *param_1 = lVar2;
  return param_1;
}



// FUN_00020f18 @ 00020f18 (66 bytes, called_by=0, calls=0)

undefined8 FUN_00020f18(int *param_1,int param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  
  if (param_4 == 0xffffffff && param_3 == 0xffffffff) {
    iVar3 = -1;
    iVar4 = iVar3;
  }
  else {
    if (param_4 != 0 || param_3 != 0) {
      uVar5 = FUN_00015da4();
      uVar2 = (uint)((ulonglong)uVar5 >> 0x20);
      uVar1 = (uint)uVar5;
      param_2 = (uVar2 - param_4) - (uint)(param_3 > uVar1);
      if (uVar2 <= param_4 && (uint)(param_3 <= uVar1) <= uVar2 - param_4) {
        iVar3 = param_3 - uVar1;
        iVar4 = (param_4 - uVar2) - (uint)(param_3 < uVar1);
        goto LAB_00020f46;
      }
    }
    iVar3 = 0;
    iVar4 = iVar3;
  }
LAB_00020f46:
  *param_1 = iVar3;
  param_1[1] = iVar4;
  return CONCAT44(param_2,param_1);
}



// FUN_00020f5a @ 00020f5a (24 bytes, called_by=0, calls=0)

void FUN_00020f5a(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  param_1[8] = param_2;
  param_1[9] = param_3;
  param_1[6] = param_1 + 6;
  param_1[7] = param_1 + 6;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  return;
}



// FUN_00020f72 @ 00020f72 (56 bytes, called_by=0, calls=0)

void FUN_00020f72(int param_1)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar3 = FUN_00020e9a();
  if (iVar3 == 0) {
    if (*(code **)(param_1 + 0x24) != (code *)0x0) {
      (**(code **)(param_1 + 0x24))(param_1);
    }
    iVar3 = FUN_00020d32(param_1 + 0x18);
    if (iVar3 != 0) {
      FUN_00020c68();
      uVar4 = 0;
      bVar1 = (bool)isCurrentModePrivileged();
      if (bVar1) {
        uVar4 = getBasePriority();
      }
      bVar1 = (bool)isCurrentModePrivileged();
      if ((bVar1) && (uVar2 = getBasePriority(), uVar2 == 0 || 0x40 < uVar2)) {
        setBasePriority(0x40);
      }
      InstructionSynchronizationBarrier(0xf);
      FUN_000157c8(uVar4);
      return;
    }
  }
  return;
}



// FUN_00020faa @ 00020faa (32 bytes, called_by=0, calls=0)

undefined4 FUN_00020faa(int param_1)

{
  bool bVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar4 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    uVar4 = getBasePriority();
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if ((bVar1) && (uVar2 = getBasePriority(), uVar2 == 0 || 0x40 < uVar2)) {
    setBasePriority(0x40);
  }
  InstructionSynchronizationBarrier(0xf);
  uVar3 = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)(param_1 + 0x30) = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(uVar4);
  }
  InstructionSynchronizationBarrier(0xf);
  return uVar3;
}



// FUN_00020fca @ 00020fca (92 bytes, called_by=0, calls=0)

void FUN_00020fca(int param_1,int param_2,undefined4 param_3)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  
  iVar2 = param_2 * 0x14 + param_1;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *(undefined4 *)(iVar2 + -0xc) = 0;
    uVar3 = *(byte *)(iVar2 + -7) & 0x3f;
    if (((uVar3 < 9) && ((int)((0x116U >> uVar3) << 0x1f) < 0)) &&
       (iVar4 = *(int *)(iVar2 + -0x14), iVar4 != 0)) {
      piVar5 = *(int **)(iVar2 + -0x10);
      *piVar5 = iVar4;
      *(int **)(iVar4 + 4) = piVar5;
      *(undefined4 *)(iVar2 + -0x14) = 0;
      *(undefined4 *)(iVar2 + -0x10) = 0;
    }
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      setBasePriority(param_3);
    }
    InstructionSynchronizationBarrier(0xf);
    param_3 = 0;
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      param_3 = getBasePriority();
    }
    bVar1 = (bool)isCurrentModePrivileged();
    if ((bVar1) && (uVar3 = getBasePriority(), uVar3 == 0 || 0x40 < uVar3)) {
      setBasePriority(0x40);
    }
    InstructionSynchronizationBarrier(0xf);
    iVar2 = iVar2 + -0x14;
  }
  return;
}



// FUN_00021026 @ 00021026 (98 bytes, called_by=0, calls=0)

void FUN_00021026(int *param_1,int *param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  
  iVar2 = param_1[1];
  if ((param_1 != (int *)*param_1) && (iVar2 != 0)) {
    iVar1 = *(int *)(iVar2 + 8);
    if (iVar1 != 0) {
      iVar1 = iVar1 + -0x80;
    }
    iVar2 = FUN_00020c56(iVar1,param_3 + -0x80,param_3,iVar2,param_4);
    if ((iVar2 < 1) && (piVar4 = (int *)*param_1, param_1 != piVar4)) {
      for (; piVar4 != (int *)0x0; piVar4 = (int *)*piVar4) {
        iVar2 = piVar4[2];
        if (iVar2 != 0) {
          iVar2 = iVar2 + -0x80;
        }
        iVar2 = FUN_00020c56(param_3 + -0x80,iVar2);
        if (0 < iVar2) {
          puVar3 = (undefined4 *)piVar4[1];
          *param_2 = (int)piVar4;
          param_2[1] = (int)puVar3;
          *puVar3 = param_2;
          piVar4[1] = (int)param_2;
          return;
        }
        if (piVar4 == (int *)param_1[1]) break;
      }
    }
  }
  puVar3 = (undefined4 *)param_1[1];
  *param_2 = (int)param_1;
  param_2[1] = (int)puVar3;
  *puVar3 = param_2;
  param_1[1] = (int)param_2;
  return;
}



// FUN_00021088 @ 00021088 (224 bytes, called_by=0, calls=0)

int FUN_00021088(int param_1,int param_2,char *param_3,int param_4)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  char *pcVar8;
  
  iVar4 = 0;
  iVar5 = 0;
  iVar7 = param_1;
  pcVar8 = param_3;
  do {
    if (param_2 <= iVar4) {
      return iVar5;
    }
    uVar6 = 0;
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      uVar6 = getBasePriority();
    }
    bVar1 = (bool)isCurrentModePrivileged();
    if ((bVar1) && (uVar3 = getBasePriority(), uVar3 == 0 || 0x40 < uVar3)) {
      setBasePriority(0x40);
    }
    InstructionSynchronizationBarrier(0xf);
    switch(*(byte *)(param_1 + 0xd) & 0x3f) {
    case 1:
      if (*(int *)(*(int *)(param_1 + 0x10) + 8) == 0) break;
      uVar3 = 1;
LAB_00021120:
      *(undefined4 *)(param_1 + 8) = 0;
      *(uint *)(param_1 + 0xc) =
           *(uint *)(param_1 + 0xc) & 0xffe03fff |
           (uVar3 | (*(uint *)(param_1 + 0xc) << 0xb) >> 0x19) << 0xe;
      *param_3 = '\0';
      goto LAB_00021138;
    case 2:
      if (*(int *)(*(int *)(param_1 + 0x10) + 8) != 0) {
        uVar3 = 2;
        goto LAB_00021120;
      }
      break;
    case 4:
      if (**(int **)(param_1 + 0x10) != 0) {
        uVar3 = 4;
        goto LAB_00021120;
      }
      break;
    case 8:
      if (*(int *)(*(int *)(param_1 + 0x10) + 0x20) != 0) {
        uVar3 = 0x10;
        goto LAB_00021120;
      }
    }
    if ((param_4 == 0) && (*param_3 != '\0')) {
      uVar3 = *(byte *)(param_1 + 0xd) & 0x3f;
      switch(uVar3) {
      case 1:
        iVar2 = *(int *)(param_1 + 0x10);
        break;
      case 2:
      case 4:
        iVar2 = *(int *)(param_1 + 0x10) + 0x10;
        break;
      default:
        goto switchD_000210fa_caseD_3;
      case 8:
        iVar2 = *(int *)(param_1 + 0x10) + 0x24;
      }
      FUN_00021026(iVar2,param_1,param_3,uVar3 - 1,iVar7,0,pcVar8);
switchD_000210fa_caseD_3:
      *(char **)(param_1 + 8) = param_3;
      iVar5 = iVar5 + 1;
    }
LAB_00021138:
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      setBasePriority(uVar6);
    }
    InstructionSynchronizationBarrier(0xf);
    iVar4 = iVar4 + 1;
    param_1 = param_1 + 0x14;
  } while( true );
}



// FUN_00021178 @ 00021178 (140 bytes, called_by=0, calls=0)

void FUN_00021178(int param_1,uint param_2)

{
  undefined4 uVar1;
  char *pcVar2;
  int iVar3;
  
  pcVar2 = *(char **)(param_1 + 8);
  if (pcVar2 != (char *)0x0) {
    if (pcVar2[1] == '\x01') {
      if ((int)((uint)(byte)pcVar2[-0x73] << 0x1e) < 0) {
        FUN_00020d94(pcVar2 + -0x80);
        if (param_2 == 8) {
          uVar1 = 0xfffffffc;
        }
        else {
          uVar1 = 0;
        }
        *(undefined4 *)(pcVar2 + 0x2c) = uVar1;
        if (((pcVar2[-0x73] & 0x1fU) == 0) && (*(int *)(pcVar2 + -0x68) == 0)) {
          FUN_00020c68(pcVar2 + -0x80);
        }
      }
    }
    else if (((pcVar2[1] == '\x02') && (*pcVar2 != '\0')) &&
            (iVar3 = *(int *)(pcVar2 + -4), iVar3 != 0)) {
      FUN_00020e9a(pcVar2 + 0x14);
      pcVar2[0x2c] = '\0';
      pcVar2[0x2d] = '\0';
      pcVar2[0x2e] = '\0';
      pcVar2[0x2f] = '\0';
      FUN_00020b34(iVar3,pcVar2 + -0x14);
    }
    *pcVar2 = '\0';
  }
  *(undefined4 *)(param_1 + 8) = 0;
  *(uint *)(param_1 + 0xc) =
       *(uint *)(param_1 + 0xc) & 0xffe03fff |
       (param_2 & 0x7f | (*(uint *)(param_1 + 0xc) << 0xb) >> 0x19) << 0xe;
  return;
}



// FUN_00021204 @ 00021204 (30 bytes, called_by=0, calls=0)

void FUN_00021204(int param_1,uint param_2,uint param_3,undefined4 param_4)

{
  *(uint *)(param_1 + 0xc) =
       (param_3 & 1) << 0x15 | (param_2 & 0x3f) << 8 | (uint)*(byte *)(param_1 + 0xc);
  *(undefined4 *)(param_1 + 0x10) = param_4;
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}



// FUN_00021222 @ 00021222 (52 bytes, called_by=0, calls=0)

void FUN_00021222(int *param_1)

{
  bool bVar1;
  uint uVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  
  uVar6 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    uVar6 = getBasePriority();
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if ((bVar1) && (uVar2 = getBasePriority(), uVar2 == 0 || 0x40 < uVar2)) {
    setBasePriority(0x40);
  }
  InstructionSynchronizationBarrier(0xf);
  piVar3 = (int *)*param_1;
  if (param_1 != piVar3) {
    iVar5 = *piVar3;
    piVar4 = (int *)piVar3[1];
    *piVar4 = iVar5;
    *(int **)(iVar5 + 4) = piVar4;
    *piVar3 = 0;
    piVar3[1] = 0;
    FUN_00021178();
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(uVar6);
  }
  InstructionSynchronizationBarrier(0xf);
  return;
}



// FUN_00021256 @ 00021256 (10 bytes, called_by=0, calls=0)

void FUN_00021256(int param_1)

{
  *(int *)param_1 = param_1;
  *(int *)(param_1 + 4) = param_1;
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}



// FUN_00021260 @ 00021260 (6 bytes, called_by=0, calls=0)

void FUN_00021260(int param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}



// FUN_00021266 @ 00021266 (10 bytes, called_by=0, calls=0)

void FUN_00021266(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  *param_2 = *(undefined4 *)(param_1 + 8);
  *param_3 = *(undefined4 *)(param_1 + 0xc);
  return;
}



// FUN_00021270 @ 00021270 (132 bytes, called_by=0, calls=0)

uint FUN_00021270(int param_1,uint param_2,uint param_3,undefined4 param_4,uint param_5,uint param_6
                 )

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  
  if (param_2 == 0) {
    return 0;
  }
  iVar1 = FUN_000159e4();
  uVar2 = 0;
  bVar5 = (bool)isCurrentModePrivileged();
  if (bVar5) {
    uVar2 = getBasePriority();
  }
  bVar5 = (bool)isCurrentModePrivileged();
  if ((bVar5) && (uVar4 = getBasePriority(), uVar4 == 0 || 0x40 < uVar4)) {
    setBasePriority(0x40);
  }
  InstructionSynchronizationBarrier(0xf);
  iVar3 = param_3 << 0x1e;
  bVar5 = iVar3 < 0;
  if (bVar5) {
    iVar3 = 0;
  }
  if (bVar5) {
    *(int *)(param_1 + 8) = iVar3;
  }
  uVar4 = *(uint *)(param_1 + 8);
  if ((param_3 & 1) == 0) {
    if ((uVar4 & param_2) == 0) goto LAB_000212c6;
  }
  else if (param_2 != (uVar4 & param_2)) {
LAB_000212c6:
    if ((param_5 | param_6) == 0) {
      bVar5 = (bool)isCurrentModePrivileged();
      if (bVar5) {
        setBasePriority(uVar2);
      }
      InstructionSynchronizationBarrier(0xf);
    }
    else {
      *(uint *)(iVar1 + 0x88) = param_2;
      *(uint *)(iVar1 + 0x8c) = param_3;
      iVar3 = FUN_00015688(param_1 + 0xc,uVar2,param_1,param_5 | param_6,param_5,param_6);
      if (iVar3 == 0) {
        uVar4 = *(uint *)(iVar1 + 0x88);
        goto LAB_000212b8;
      }
    }
    uVar4 = 0;
    goto LAB_000212b8;
  }
  bVar5 = (bool)isCurrentModePrivileged();
  if (bVar5) {
    setBasePriority(uVar2);
  }
  InstructionSynchronizationBarrier(0xf);
LAB_000212b8:
  return param_2 & uVar4;
}



// FUN_0002132a @ 0002132a (10 bytes, called_by=0, calls=0)

void FUN_0002132a(int param_1)

{
  *(int *)param_1 = param_1;
  *(int *)(param_1 + 4) = param_1;
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}



// FUN_00021334 @ 00021334 (98 bytes, called_by=0, calls=0)

uint FUN_00021334(int param_1,uint param_2)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  int local_28;
  uint local_24;
  uint uStack_20;
  
  uVar2 = DAT_000160d8;
  local_28 = 0;
  uVar7 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    uVar7 = getBasePriority();
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if ((bVar1) && (uVar5 = getBasePriority(), uVar5 == 0 || 0x40 < uVar5)) {
    setBasePriority(0x40);
  }
  InstructionSynchronizationBarrier(0xf);
  uVar5 = *(uint *)(param_1 + 8);
  uVar6 = uVar5 ^ param_2 & (param_2 ^ uVar5);
  *(uint *)(param_1 + 8) = uVar6;
  local_24 = uVar6;
  uStack_20 = param_2;
  FUN_00020e56(param_1,uVar2,&local_28);
  iVar3 = local_28;
  while (iVar3 != 0) {
    *(undefined4 *)(iVar3 + 0xac) = 0;
    *(uint *)(iVar3 + 0x88) = uVar6;
    iVar4 = *(int *)(iVar3 + 0x84);
    FUN_00020cdc(iVar3,0);
    iVar3 = iVar4;
  }
  FUN_00015768(param_1 + 0xc,uVar7);
  return uVar5 & param_2;
}



// FUN_0002133a @ 0002133a (8 bytes, called_by=0, calls=0)

uint FUN_0002133a(int param_1,uint param_2)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  int iStack_28;
  uint uStack_24;
  uint uStack_20;
  
  uVar2 = DAT_000160d8;
  iStack_28 = 0;
  uVar7 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    uVar7 = getBasePriority();
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if ((bVar1) && (uVar5 = getBasePriority(), uVar5 == 0 || 0x40 < uVar5)) {
    setBasePriority(0x40);
  }
  InstructionSynchronizationBarrier(0xf);
  uVar5 = *(uint *)(param_1 + 8);
  uVar6 = uVar5 ^ param_2 & uVar5;
  *(uint *)(param_1 + 8) = uVar6;
  uStack_24 = uVar6;
  uStack_20 = param_2;
  FUN_00020e56(param_1,uVar2,&iStack_28);
  iVar3 = iStack_28;
  while (iVar3 != 0) {
    *(undefined4 *)(iVar3 + 0xac) = 0;
    *(uint *)(iVar3 + 0x88) = uVar6;
    iVar4 = *(int *)(iVar3 + 0x84);
    FUN_00020cdc(iVar3,0);
    iVar3 = iVar4;
  }
  FUN_00015768(param_1 + 0xc,uVar7);
  return uVar5 & param_2;
}



// FUN_00021342 @ 00021342 (6 bytes, called_by=0, calls=0)

void FUN_00021342(undefined4 param_1,undefined4 param_2,int param_3)

{
  FUN_00021270(param_1,param_2,param_3 << 1);
  return;
}



// FUN_00021348 @ 00021348 (86 bytes, called_by=0, calls=0)

int FUN_00021348(int param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  bool bVar6;
  
  puVar5 = *(uint **)(param_1 + 0x18);
  if ((char)puVar5[7] != '\0') {
    if (*(int *)(param_1 + 8) == *(int *)(param_1 + 0xc)) {
      puVar5[2] = 0;
      puVar5[3] = 0;
      *(int *)(*(int *)(param_1 + 0x18) + 0x18) = *(int *)(*(int *)(param_1 + 0x18) + 0x18) + 1;
    }
    else {
      uVar2 = *puVar5;
      *puVar5 = uVar2 + param_2;
      puVar5[1] = puVar5[1] + (uint)CARRY4(uVar2,param_2);
      iVar3 = *(int *)(param_1 + 0x18);
      uVar2 = *(uint *)(iVar3 + 8);
      *(uint *)(iVar3 + 8) = uVar2 + param_2;
      *(uint *)(iVar3 + 0xc) = *(int *)(iVar3 + 0xc) + (uint)CARRY4(uVar2,param_2);
      iVar3 = *(int *)(param_1 + 0x18);
      uVar1 = *(uint *)(iVar3 + 8);
      uVar4 = *(uint *)(iVar3 + 0xc);
      uVar2 = *(uint *)(iVar3 + 0x14);
      bVar6 = uVar1 <= *(uint *)(iVar3 + 0x10);
      param_1 = (uVar2 - uVar4) - (uint)!bVar6;
      if (uVar2 <= uVar4 && (uint)bVar6 <= uVar2 - uVar4) {
        *(uint *)(iVar3 + 0x10) = uVar1;
        *(uint *)(iVar3 + 0x14) = uVar4;
      }
    }
  }
  return param_1;
}



// FUN_000213f2 @ 000213f2 (70 bytes, called_by=0, calls=0)

void FUN_000213f2(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  if (param_1 == 0) {
    return;
  }
  iVar4 = *(int *)(param_1 + -4);
  uVar5 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    uVar5 = getBasePriority();
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if ((bVar1) && (uVar2 = getBasePriority(), uVar2 == 0 || 0x40 < uVar2)) {
    setBasePriority(0x40);
  }
  InstructionSynchronizationBarrier(0xf);
  FUN_0001b902(iVar4,param_1 + -4);
  iVar3 = FUN_00020da4(iVar4 + 0xc);
  if (iVar3 == 0) {
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      setBasePriority(uVar5);
    }
    InstructionSynchronizationBarrier(0xf);
    return;
  }
  FUN_00015768(iVar4 + 0x14,uVar5,param_3,param_4);
  return;
}



// FUN_00025876 @ 00025876 (284 bytes, called_by=0, calls=0)

void FUN_00025876(void)

{
  byte bVar1;
  short sVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 in_r3;
  undefined4 unaff_r4;
  int iVar7;
  uint uVar8;
  int iVar9;
  undefined1 *puVar10;
  code *UNRECOVERED_JUMPTABLE;
  int unaff_r5;
  int iVar11;
  int iVar12;
  
  *(undefined4 *)(unaff_r5 + 0x54) = unaff_r4;
  iVar11 = *(int *)(unaff_r5 + 0x14);
  iVar7 = *(int *)(iVar11 + 0x14);
  *(int *)(iVar7 + 0x54) = iVar7;
  iVar12 = *(int *)(iVar11 + 0x14);
  *(undefined4 *)(iVar7 + 0x54) = in_r3;
  *(char *)(iVar7 + 0xc) = (char)unaff_r5;
  iVar11 = *(int *)(iVar7 + 0x14);
  *(int *)(unaff_r5 + 0x54) = iVar7;
  iVar7 = *(int *)(iVar12 + 0x74);
  *(undefined4 *)(iVar7 + 0x70) = 100;
  *(char *)(iVar7 + 0x11) = (char)unaff_r5;
  *(undefined4 *)(iVar7 + 0x10) = 100;
  *(undefined4 *)(iVar7 + 0x20) = 0x6e;
  *(int *)(iVar12 + 100) = unaff_r5;
  *(int *)(iVar7 + 0x54) = iVar12;
  uVar6 = iVar12 * 2;
  *(char *)(uVar6 + 0x15) = (char)in_r3;
  *(undefined1 *)(iVar12 + 1) = 0x6e;
  uVar8 = *(uint *)(unaff_r5 + 0x14);
  *(int *)(uVar8 + 0x44) = unaff_r5;
  *(undefined4 *)(uVar8 + 0x20) = 0x6e;
  *(int *)(iVar12 + 100) = unaff_r5;
  *(int *)(uVar8 + 0x54) = iVar12;
  *(char *)(unaff_r5 + 0xd) = (char)iVar11;
  *(undefined1 *)(uVar8 + 0x10) = 0x72;
  iVar7 = *(int *)(unaff_r5 + 0x74);
  *(undefined4 *)(uVar8 + 0x20) = 0x72;
  *(int *)(unaff_r5 + 0x74) = iVar11;
  *(undefined4 *)(uVar8 + 0x60) = 0x72;
  uVar3 = (undefined1)iVar7;
  *(undefined1 *)(unaff_r5 + 9) = uVar3;
  *(char *)(uVar8 + 0xd) = (char)iVar11;
  iVar11 = unaff_r5 + iVar11 + 0x258d6 + (uint)(uVar8 < 0x73);
  *(uint *)(iVar11 + 0x14) = uVar8;
  *(undefined4 *)(uVar8 + 0x20) = 0x72;
  *(int *)(iVar12 + 100) = iVar11;
  *(int *)(uVar8 + 0x54) = iVar12;
  *(uint *)(iVar7 + 0x54) = uVar6;
  iVar9 = iVar11 * 2;
  uVar5 = *(undefined4 *)(iVar11 + 0x44);
  DAT_00000083 = iVar12;
  *(int *)(iVar9 + 0x44) = iVar11;
  *(undefined1 *)(iVar9 + 0x10) = 0x6f;
  *(undefined1 *)(iVar12 + 9) = 0x6f;
  *(char *)(iVar9 + 1) = (char)iVar11;
  *(char *)(iVar9 + 9) = (char)uVar5;
  uVar4 = s_FIXME__Unimplemented_callbacks_r_00025a04._24_4_;
  iVar12 = *(int *)(iVar9 + 0x74);
  iVar7 = uVar6 + 0x49;
  *(int *)(iVar12 + 0x54) = iVar7;
  *(undefined4 *)(iVar9 + 0x44) = uVar5;
  iVar11 = *(int *)(iVar9 + 0x14);
  *(int *)(uVar4 + 0x54) = iVar9;
  puVar10 = *(undefined1 **)(iVar12 + 0x74);
  *puVar10 = 100;
  *(int *)(iVar12 + 0x54) = iVar7;
  *(undefined4 *)(iVar12 + 0x14) = 100;
  *(int *)(iVar12 + 0x54) = iVar7;
  iVar7 = uVar4 + iVar11 + (uint)(0xffffffb6 < uVar6);
  *(undefined1 **)(puVar10 + 0x60) = puVar10 + 100;
  *(undefined1 *)(iVar7 + 9) = uVar3;
  puVar10[0x1c] = (char)(puVar10 + 100);
  iVar11 = *(int *)(iVar12 + 0x14);
  *(undefined1 **)(iVar12 + 0x54) = puVar10;
  *(int *)(iVar12 + 0x30) = iVar11;
  sVar2 = *(short *)(puVar10 + iVar7 + 0x40);
  *(char *)(iVar7 + 9) = (char)iVar12;
  bVar1 = puVar10[0x41];
  uVar6 = (uint)bVar1;
  *(undefined1 *)(sVar2 + 0x11) = uVar3;
  uVar4 = s_Failed_to_register_target_00025a6f._13_4_;
  *(int *)(uVar6 + 0x54) = iVar11 + 0x69;
  *(char *)(uVar6 + 0x11) = (char)(iVar11 + 0x69);
  *(undefined4 *)(puVar10 + 0x80) = *(undefined4 *)(uVar6 + 0x74);
  puVar10[0x4d] = SUB41(iVar7,0);
  puVar10[0x49] = bVar1 << 1;
  *(char *)(iVar7 + 1) = (char)uVar4;
  uVar5 = *(undefined4 *)(*(int *)(uVar6 + 0x74) + 0x14);
  *(int *)(iVar7 + 0x54) = *(int *)(uVar6 + 0x74);
  UNRECOVERED_JUMPTABLE = *(code **)(uVar6 + 0x74);
  *(undefined4 *)(UNRECOVERED_JUMPTABLE + 0x30) = 100;
  iVar9 = *(int *)(UNRECOVERED_JUMPTABLE + 0x14);
  UNRECOVERED_JUMPTABLE[0x15] = SUB41(*(undefined4 *)(iVar7 + 100),0);
  *(int *)(iVar9 + 0x54) = iVar11 + -9;
  UNRECOVERED_JUMPTABLE[0x10] = (code)0x64;
  *(undefined4 *)(iVar7 + 0x54) = 100;
  uVar4 = *(undefined4 *)(UNRECOVERED_JUMPTABLE + 0x10);
  *(char *)(iVar7 + 0x11) = (char)iVar9;
  UNRECOVERED_JUMPTABLE[9] = SUB41(iVar7,0);
  *(char *)(iVar9 + 0x15) = (char)(iVar11 + -9);
  *(char *)(iVar9 + 0x11) = (char)uVar4;
                    /* WARNING: Could not recover jumptable at 0x00025990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar4,uVar5);
  return;
}



