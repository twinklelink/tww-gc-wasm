/**
 * d_a_nz.cpp
 * Enemy - Rat
 */

#include "d/dolzel_rel.h" // IWYU pragma: keep
#include "d/actor/d_a_nz.h"
#include "m_Do/m_Do_ext.h"
#include "d/d_cc_d.h"

/* 000000EC-00000138       .text __ct__10daNZ_HIO_cFv */
daNZ_HIO_c::daNZ_HIO_c() {
    /* field_0x0 = 0; */
    /* field_0x4 = 0; */
    /* field_0x8 = 0; */
    return arg0;
}

/* 00000180-00000228       .text nodeCallBack_tail__FP7J3DNodei */
static BOOL nodeCallBack_tail(J3DNode*, int) {
        /* if (int != 0) goto L_120; */
        /* if (this->field_0x18 != 9) goto L_d4; */
        /* L_d4:; */
        /* if (this->field_0x14 == 0) goto L_120; */
        /* PSMTXCopy((this->field_0x8c + (this->field_0x18 * 48)), this->field_0x0, arg2, arg3, arg4, arg5, arg6, arg7); */
        MtxPosition();
        /* L_120:; */
        return 1;
}

/* 00000264-00000874       .text tail_control__FP8nz_class */
void tail_control(nz_class*) {
        /* _savegpr_14(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* field_0x2e2 = (this->field_0x2e2 + 1); */
        /* cM_atan2s(this->field_0x2e2); */
        /* if ((((this->field_0x568 - this->field_0x55c) * (this->field_0x568 - this->field_0x55c)) + ((this->field_0x570 - this->field_0x564) * (this->field_0x570 - this->field_0x564))) <= this->field_0x14) goto L_2a8; */
        /* L_2a8:; */
        /* cM_atan2s(cM_atan2s(this->field_0x2e2)); */
        /* mDoMtx_YrotS(this->field_0x0, (cM_atan2s(this->field_0x2e2) & 65535)); */
        /* mDoMtx_XrotM(this->field_0x0, ((-cM_atan2s(cM_atan2s(this->field_0x2e2))) & 65535)); */
        MtxPosition();
        __ct();
        /* field_0xc = 0; */
        /* field_0xc = 0; */
        /* field_0x10 = 1; */
        /* if (/ * beq * / 1) goto L_3c4; */
        /* L_3c4:; */
        /* L_410:; */
        ((cBgS*)(((char*)&g_dComIfG_gameInfo + 4768)))->GroundCross();
        /* if (/ * bge * / 1) goto L_4b8; */
        /* L_4b8:; */
        cM_atan2s(((cBgS*)(((char*)&g_dComIfG_gameInfo + 4768)))->GroundCross());
        /* if (/ * ble * / 1) goto L_564; */
        /* L_564:; */
        cM_atan2s(cM_atan2s(((cBgS*)(((char*)&g_dComIfG_gameInfo + 4768)))->GroundCross()));
        mDoMtx_YrotS(this->field_0x0, (cM_atan2s(((cBgS*)(((char*)&g_dComIfG_gameInfo + 4768)))->GroundCross()) & 65535));
        mDoMtx_XrotM(this->field_0x0, ((-cM_atan2s(cM_atan2s(((cBgS*)(((char*)&g_dComIfG_gameInfo + 4768)))->GroundCross()))) & 65535));
        MtxPosition();
        /* field_0x0 = 0; */
        /* field_0x4 = 0; */
        /* field_0x8 = 0; */
        /* field_0x0 = 0; */
        /* field_0x4 = 0; */
        /* field_0x8 = 0; */
        /* field_0x0 = (this->field_0x3c * (this->field_0x0 - this->field_0x0)); */
        /* field_0x4 = (this->field_0x3c * (this->field_0x4 - this->field_0x4)); */
        /* field_0x8 = (this->field_0x3c * (this->field_0x8 - this->field_0x8)); */
        /* if ((1 + 1) < 10) goto L_410; */
        /* field_0x0 = 0; */
        /* field_0x4 = 0; */
        /* field_0x8 = 0; */
        /* if (/ * beq * / 1) goto L_6e4; */
        /* if (/ * beq * / 1) goto L_6c0; */
        /* if (/ * beq * / 1) goto L_6c0; */
        /* L_6c0:; */
        /* if (/ * beq * / 1) goto L_6e4; */
        /* if (/ * beq * / 1) goto L_6e4; */
        /* L_6e4:; */
        return _restgpr_14(__dt());
}

/* 00000BF4-00000C88       .text tail_draw__FP8nz_class */
void tail_draw(nz_class*) {
    ((mDoExt_3DlineMat1_c*)((arg0 + 1072)))->update(10);
    return ((mDoExt_3DlineMatSortPacket*)((((((char*)&g_dComIfG_gameInfo + 0) + ((arg0 + 1072) * 20)) + 24696) + 23824)))->setMat((arg0 + 1072));
}

/* 00000C88-00000D64       .text nodeCallBack_head__FP7J3DNodei */
static BOOL nodeCallBack_head(J3DNode*, int) {
    /* _savegpr_29(arg0, int, arg2, arg3, arg4, arg5, arg6, arg7); */
    if (/* bne */ 1) {
        /* if (this->field_0x14 != 0) goto L_c5c; */
        /* PSMTXCopy((this->field_0x8c + (this->field_0x18 * 48)), this->field_0x0); */
        /* mDoMtx_YrotM(this->field_0x0, this->field_0x2fa); */
        /* mDoMtx_XrotM(this->field_0x0, this->field_0x2f8); */
        /* mDoMtx_ZrotM(this->field_0x0, this->field_0x2fc); */
        PSMTXCopy(this->field_0x0, (this->field_0x8c + (this->field_0x18 * 48)));
        PSMTXCopy(this->field_0x0, ((char*)&mCurrentMtx__6J3DSys + 0));
    }
    /* L_c5c:; */
    return _restgpr_29(1);
}

/* 00000D64-00000E60       .text nodeCallBack_hand__FP7J3DNodei */
static BOOL nodeCallBack_hand(J3DNode*, int) {
        /* _savegpr_28(arg0, int, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* if (/ * bne * / 1) goto L_d58; */
        /* if (this->field_0x14 == 0) goto L_d58; */
        /* PSMTXCopy((this->field_0x8c + (this->field_0x18 * 48)), this->field_0x0); */
        MtxPosition();
        /* if (this->field_0x18 != 18) goto L_d10; */
        /* field_0x334 = 0; */
        /* field_0x338 = 0; */
        /* field_0x33c = 0; */
        /* goto L_d28; */
        /* L_d10:; */
        /* field_0x328 = 0; */
        /* field_0x32c = 0; */
        /* field_0x330 = 0; */
        /* L_d28:; */
        PSMTXCopy(this->field_0x0, (this->field_0x8c + (this->field_0x18 * 48)));
        PSMTXCopy(this->field_0x0, ((char*)&mCurrentMtx__6J3DSys + 0));
        /* L_d58:; */
        return _restgpr_28(1);
}

/* 00000E60-00000F40       .text smoke_set__FP8nz_class */
void smoke_set(nz_class*) {
    if (this->field_0x5c4 == 0) {
        /* ((dPa_control_c*)(this->field_0x5ab8))->set(2, 8226, (arg0 + 1432), (arg0 + 1444), 0, 185, (arg0 + 1472)); */
    }
    if (this->field_0x5c4 != 0) {
        /* field_0x1d8 = 0; */
        /* field_0x1dc = 0; */
        /* field_0x1e0 = 0; */
        /* field_0x1f0 = 0; */
        /* field_0x1f4 = 0; */
        /* field_0x1f8 = 0; */
        /* field_0x5c = 0; */
        /* field_0x74 = 0; */
        /* field_0x60 = 4; */
        /* field_0x38 = 0; */
    }
    /* return this->field_0x5c4; */
}

/* 00000F40-00001328       .text rakka_line_check__FP8nz_class */
void rakka_line_check(nz_class*) {
        /* _savegpr_23(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        ct();
        /* field_0xc = 0; */
        /* field_0xc = 0; */
        /* field_0x10 = 1; */
        /* if (/ * beq * / 1) goto L_f90; */
        /* L_f90:; */
        mDoMtx_XrotS(this->field_0x0, 0);
        MtxPosition();
        PSVECAdd();
        /* field_0x41c = 0; */
        /* field_0x420 = 0; */
        /* field_0x424 = 0; */
        /* field_0x3bc = 0; */
        /* field_0x3c0 = 0; */
        /* field_0x3c4 = 0; */
        Set();
        /* if (((cBgS*)(((char*)&g_dComIfG_gameInfo + 4768)))->LineCross() == 0) goto L_1174; */
        /* field_0x598 = 0; */
        /* field_0x59c = 0; */
        /* field_0x5a0 = 0; */
        __ct();
        /* smoke_set(_savegpr_23(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* if (/ * beq * / 1) goto L_1130; */
        /* if (/ * beq * / 1) goto L_110c; */
        /* if (/ * beq * / 1) goto L_110c; */
        /* L_110c:; */
        /* if (/ * beq * / 1) goto L_1130; */
        /* if (/ * beq * / 1) goto L_1130; */
        /* L_1130:; */
        /* if (/ * beq * / 1) goto L_1154; */
        /* L_1154:; */
        __dt();
        return 1;
        /* L_1174:; */
        /* if (/ * beq * / 1) goto L_11ec; */
        /* if (/ * beq * / 1) goto L_11c8; */
        /* if (/ * beq * / 1) goto L_11c8; */
        /* L_11c8:; */
        /* if (/ * beq * / 1) goto L_11ec; */
        /* if (/ * beq * / 1) goto L_11ec; */
        /* L_11ec:; */
        __dt();
        return _restgpr_23(0);
}

/* 00001578-0000178C       .text daNZ_Draw__FP8nz_class */
static BOOL daNZ_Draw(nz_class*) {
    /* _savegpr_24(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
    if (this->field_0x98a > 20) {
        /* ((dMat_ice_c*)(this->field_0x0))->entryDL(this->field_0x2b8, -1, (_savegpr_24(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 3932)); */
        return 1;
    }
    ((J3DModelData*)(1))->setMaterialTable(this->field_0x5f4, 3);
    /* ((dScnKy_env_light_c*)(((char*)&g_env_light + 0)))->setLightTevColorType(this->field_0x50, (_savegpr_24(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 268)); */
    /* ((mDoExt_McaMorf*)(this->field_0x2b8))->entryDL(); */
    /* tail_draw(_savegpr_24(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
    if (/* bne */ 1) {
        /* dComIfGd_setSimpleShadow2((_savegpr_24(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 772), (_savegpr_24(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1824), 0, ((char*)&mSimpleTexObj__21dDlst_shadowControl_c + 0)); */
    }
    if (this->field_0x506 != 0) {
    }
    if (this->field_0x508 != 0) {
    }
    /* dSnap_RegistFig(173, _savegpr_24(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
    return _restgpr_24(1);
}

/* 0000178C-00001888       .text item_poi__FP8nz_class */
void item_poi(nz_class*) {
        /* _savegpr_29(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        fopAcIt_Judge(((char*)&fpcSch_JudgeByID__FPvPv + 0));
        /* if (/ * beq * / 1) goto L_1774; */
        /* if (this->field_0x8 != 296) goto L_173c; */
        /* field_0x254 = 0; */
        /* field_0x224 = 0; */
        /* field_0x258 = 0; */
        ((daBomb_c*)(fopAcIt_Judge(((char*)&fpcSch_JudgeByID__FPvPv + 0))))->setBombOnCoSet();
        /* if (this->field_0x2b5 == 0) goto L_1774; */
        /* field_0x2e4 = 0; */
        ((daBomb_c*)(((daBomb_c*)(fopAcIt_Judge(((char*)&fpcSch_JudgeByID__FPvPv + 0))))->setBombOnCoSet()))->setBombFire_ON();
        /* goto L_1774; */
        /* L_173c:; */
        /* field_0x254 = 0; */
        /* field_0x224 = 0; */
        /* field_0x258 = 0; */
        /* if (((daItem_c*)(((daBomb_c*)(((daBomb_c*)(fopAcIt_Judge(((char*)&fpcSch_JudgeByID__FPvPv + 0))))->setBombOnCoSet()))->setBombFire_ON()))->checkLock() != 0) goto L_1774; */
        ((daItem_c*)(((daItem_c*)(((daItem_c*)(((daBomb_c*)(((daBomb_c*)(fopAcIt_Judge(((char*)&fpcSch_JudgeByID__FPvPv + 0))))->setBombOnCoSet()))->setBombFire_ON()))->checkLock()))->endControl()))->releaseLock();
        /* L_1774:; */
        /* field_0x2c4 = -1; */
        /* field_0x42b = 0; */
        return _restgpr_29(((daItem_c*)(((daItem_c*)(((daItem_c*)(((daBomb_c*)(((daBomb_c*)(fopAcIt_Judge(((char*)&fpcSch_JudgeByID__FPvPv + 0))))->setBombOnCoSet()))->setBombFire_ON()))->checkLock()))->endControl()))->releaseLock());
}

/* 00001888-00001F18       .text naraku_water_check__FP8nz_class */
void naraku_water_check(nz_class*) {
        /* _savegpr_19(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* if (/ * beq * / 1) goto L_183c; */
        /* if (((cBgS*)(((char*)&g_dComIfG_gameInfo + 4768)))->ChkPolySafe((_savegpr_19(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1824)) == 0) goto L_183c; */
        /* if (((dBgS*)(((char*)&g_dComIfG_gameInfo + 4768)))->GetGroundCode((_savegpr_19(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1824)) != 4) goto L_183c; */
        /* field_0x2d2 = (this->field_0x2d2 + 1); */
        /* if (this->field_0x1fc < this->field_0x6c) goto L_1828; */
        /* if (this->field_0x2d2 <= 100) goto L_183c; */
        /* L_1828:; */
        /* item_poi(_savegpr_19(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* fopAcM_delete(_savegpr_19(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* goto L_1e14; */
        /* L_183c:; */
        /* if (this->field_0x50a != 0) goto L_1e14; */
        /* if (/ * bne * / 1) goto L_1910; */
        /* if (/ * bne * / 1) goto L_1910; */
        /* if (this->field_0x2c3 == 0) goto L_1e14; */
        /* field_0x2c3 = 0; */
        /* field_0x598 = 0; */
        /* field_0x59c = 0; */
        /* field_0x5a0 = 0; */
        /* if (this->field_0x5b0 != 0) goto L_1e14; */
        /* ((dPa_control_c*)(this->field_0x5ab8))->set(5, 51, (_savegpr_19(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1432), 0); */
        /* goto L_1e14; */
        /* L_1910:; */
        ct();
        /* field_0xc = 0; */
        /* field_0xc = 0; */
        /* field_0x10 = 1; */
        /* if (/ * beq * / 1) goto L_1a30; */
        /* L_1a30:; */
        Set();
        /* if (((cBgS*)(((char*)&g_dComIfG_gameInfo + 4768)))->LineCross() == 0) goto L_1b00; */
        /* if (abs(this->field_0x204) <= 1280) goto L_1bf8; */
        /* L_1b00:; */
        /* if (this->field_0x2c3 == 0) goto L_1b30; */
        /* ((dPa_rippleEcallBack*)((_savegpr_19(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1452)))->end(); */
        /* field_0x2c3 = 0; */
        /* L_1b30:; */
        /* if (/ * beq * / 1) goto L_1bc0; */
        /* if (/ * beq * / 1) goto L_1b9c; */
        /* if (/ * beq * / 1) goto L_1b9c; */
        /* L_1b9c:; */
        /* if (/ * beq * / 1) goto L_1bc0; */
        /* if (/ * beq * / 1) goto L_1bc0; */
        /* L_1bc0:; */
        __dt();
        /* goto L_1e14; */
        /* L_1bf8:; */
        /* if (((dBgS*)(((char*)&g_dComIfG_gameInfo + 4768)))->ChkGrpInf() == 0) goto L_1d18; */
        /* if (this->field_0x2c3 != 0) goto L_1cc8; */
        /* if (this->field_0x2dc != 0) goto L_1cc8; */
        /* field_0x2dc = 5; */
        /* field_0x2c3 = 1; */
        /* ((dPa_rippleEcallBack*)((_savegpr_19(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1452)))->end(); */
        /* if (this->field_0x5e4 != 0) goto L_1c94; */
        /* ((dPa_control_c*)(this->field_0x5ab8))->set(0, 1090, (_savegpr_19(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1412), (_savegpr_19(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1424), 0, 255, (_savegpr_19(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1504)); */
        /* L_1c94:; */
        /* if (this->field_0x5e4 == 0) goto L_1cc8; */
        dKy_get_seacolor();
        /* L_1cc8:; */
        /* if (this->field_0x5e4 == 0) goto L_1d48; */
        /* field_0x584 = 0; */
        /* field_0x588 = 0; */
        /* field_0x58c = 0; */
        /* field_0x588 = (this->field_0x588 + (this->field_0x8 + this->field_0x4a8)); */
        /* ((dPa_rippleEcallBack*)((_savegpr_19(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1452)))->end(); */
        /* goto L_1d48; */
        /* L_1d18:; */
        /* if (this->field_0x2c3 == 0) goto L_1d48; */
        /* field_0x2c3 = 0; */
        /* ((dPa_rippleEcallBack*)((_savegpr_19(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1452)))->end(); */
        /* L_1d48:; */
        /* if (/ * beq * / 1) goto L_1dd8; */
        /* if (/ * beq * / 1) goto L_1db4; */
        /* if (/ * beq * / 1) goto L_1db4; */
        /* L_1db4:; */
        /* if (/ * beq * / 1) goto L_1dd8; */
        /* if (/ * beq * / 1) goto L_1dd8; */
        /* L_1dd8:; */
        /* if (/ * beq * / 1) goto L_1e08; */
        /* L_1e08:; */
        /* L_1e14:; */
        return _restgpr_19(__dt());
}

/* 0000206C-0000214C       .text s_a_d_sub__FPvPv */
static void s_a_d_sub(void*, void*) {
        /* if (this->field_0x0 >= 100) goto L_2044; */
        /* if (fopAc_IsActor(arg0) == 0) goto L_2044; */
        /* if (this->field_0x8 != 296) goto L_1ff8; */
        /* if (((daBomb_c*)(arg0))->getBombCheck_Flag() != 0) goto L_1ff8; */
        /* if (this->field_0xb0 != 1) goto L_1ff8; */
        /* if (/ * bne * / 1) goto L_1ff8; */
        /* L_1ff8:; */
        /* if (this->field_0x8 != 257) goto L_2018; */
        /* if (((daItem_c*)(arg0))->checkLock() == 0) goto L_2018; */
        /* L_2018:; */
        /* if (1 == 0) goto L_2044; */
        /* field_0x0 = (this->field_0x0 + 1); */
        /* L_2044:; */
        return 0;
}

/* 0000214C-000027FC       .text search_get_obj__FP8nz_class */
void search_get_obj(nz_class*) {
        /* _savegpr_18(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        ct();
        /* field_0xc = 0; */
        /* field_0xc = 0; */
        /* field_0x10 = 1; */
        /* if (/ * beq * / 1) goto L_21b4; */
        /* L_21b4:; */
        /* field_0x0 = 0; */
        /* fpcEx_Search(((char*)&s_a_d_sub__FPvPv + 0), _savegpr_18(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* if (this->field_0x0 == 0) goto L_2638; */
        /* goto L_2620; */
        /* L_2200:; */
        /* if (/ * ble * / 1) goto L_2298; */
        /* L_2298:; */
        /* if (this->field_0xc >= this->field_0x74) goto L_2544; */
        /* if (((this->field_0x1fc - this->field_0x1fc) * (this->field_0x1fc - this->field_0x1fc)) <= this->field_0x14) goto L_2308; */
        /* L_2308:; */
        /* if (this->field_0x8 >= this->field_0x70) goto L_2544; */
        Set();
        /* if (((cBgS*)(((char*)&g_dComIfG_gameInfo + 4768)))->LineCross() != 0) goto L_2544; */
        /* if (/ * bne * / 1) goto L_2478; */
        /* if (((daBomb_c*)(((cBgS*)(((char*)&g_dComIfG_gameInfo + 4768)))->LineCross()))->getBombCheck_Flag() != 0) goto L_2478; */
        /* field_0x258 = 0; */
        /* field_0x254 = 0; */
        /* field_0x220 = 0; */
        /* field_0x224 = 0; */
        /* field_0x228 = 0; */
        ((daBomb_c*)(((daBomb_c*)(((daBomb_c*)(((cBgS*)(((char*)&g_dComIfG_gameInfo + 4768)))->LineCross()))->getBombCheck_Flag()))->setBombOffCoSet()))->setBombCheck_Flag();
        /* if (/ * beq * / 1) goto L_243c; */
        /* if (/ * beq * / 1) goto L_2418; */
        /* if (/ * beq * / 1) goto L_2418; */
        /* L_2418:; */
        /* if (/ * beq * / 1) goto L_243c; */
        /* if (/ * beq * / 1) goto L_243c; */
        /* L_243c:; */
        __dt();
        /* goto L_26e8; */
        /* L_2478:; */
        /* if (((daItem_c*)(__dt()))->checkLock() == 0) goto L_2544; */
        ((daItem_c*)(((daItem_c*)(__dt()))->checkLock()))->setLock();
        /* if (/ * beq * / 1) goto L_2508; */
        /* if (/ * beq * / 1) goto L_24e4; */
        /* if (/ * beq * / 1) goto L_24e4; */
        /* L_24e4:; */
        /* if (/ * beq * / 1) goto L_2508; */
        /* if (/ * beq * / 1) goto L_2508; */
        /* L_2508:; */
        __dt();
        /* goto L_26e8; */
        /* L_2544:; */
        /* if ((0 + 1) != this->field_0x0) goto L_262c; */
        /* if ((this->field_0x74 + this->field_0x74) <= this->field_0x78) goto L_262c; */
        /* if (/ * beq * / 1) goto L_25e4; */
        /* if (/ * beq * / 1) goto L_25c0; */
        /* if (/ * beq * / 1) goto L_25c0; */
        /* L_25c0:; */
        /* if (/ * beq * / 1) goto L_25e4; */
        /* if (/ * beq * / 1) goto L_25e4; */
        /* L_25e4:; */
        __dt();
        return 0;
        /* L_2620:; */
        /* L_262c:; */
        /* if (0 < this->field_0x0) goto L_2200; */
        /* L_2638:; */
        /* if (/ * beq * / 1) goto L_26b0; */
        /* if (/ * beq * / 1) goto L_268c; */
        /* if (/ * beq * / 1) goto L_268c; */
        /* L_268c:; */
        /* if (/ * beq * / 1) goto L_26b0; */
        /* if (/ * beq * / 1) goto L_26b0; */
        /* L_26b0:; */
        __dt();
        /* L_26e8:; */
        return _restgpr_18(0);
}

/* 000027FC-00002864       .text s_ana_sub__FPvPv */
void s_ana_sub(void*, void*) {
        /* if (fopAc_IsActor(arg0) == 0) goto L_275c; */
        /* if (this->field_0x8 != 200) goto L_275c; */
        /* if (arg0 == 0) goto L_2754; */
        /* goto L_2758; */
        /* L_2754:; */
        /* L_2758:; */
        /* field_0x2c8 = -1; */
        /* L_275c:; */
        return 0;
}

/* 00002864-00002990       .text anm_init__FP8nz_classifUcfi */
void anm_init(nz_class*, int, float, unsigned char, float, int) {
    /* _savegpr_27(arg0, int, float, char, float, int, arg6, arg7); */
    if (/* blt */ 1) {
    }
    /* return _restgpr_27(((mDoExt_McaMorf*)(this->field_0x2b8))->setAnm(((dRes_control_c*)(((char*)&@stringBase0 + 0)))->getRes())); */
}

/* 00002990-00002EC0       .text search_check__FP8nz_class */
void search_check(nz_class*) {
        /* _savegpr_21(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        ct();
        /* field_0xc = 0; */
        /* field_0xc = 0; */
        /* field_0x10 = 1; */
        /* if (/ * beq * / 1) goto L_29f0; */
        /* L_29f0:; */
        /* fopAcM_searchActorDistanceXZ(_savegpr_21(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), this->field_0x5b38); */
        /* if (/ * bge * / 1) goto L_2d0c; */
        /* if (search_get_obj(_savegpr_21(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)) != 0) goto L_2c2c; */
        /* cM_rndFX(fopAcM_searchActorAngleY(_savegpr_21(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), this->field_0x5b38)); */
        /* mDoMtx_YrotS(this->field_0x0); */
        MtxPosition();
        PSVECAdd();
        /* Set((_savegpr_21(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 504)); */
        /* if (((cBgS*)(((char*)&g_dComIfG_gameInfo + 4768)))->LineCross() == 0) goto L_2b68; */
        /* if (/ * beq * / 1) goto L_2b2c; */
        /* if (/ * beq * / 1) goto L_2b08; */
        /* if (/ * beq * / 1) goto L_2b08; */
        /* L_2b08:; */
        /* if (/ * beq * / 1) goto L_2b2c; */
        /* if (/ * beq * / 1) goto L_2b2c; */
        /* L_2b2c:; */
        __dt();
        return 0;
        /* L_2b68:; */
        /* field_0x580 = fopAcM_searchActorAngleY(_savegpr_21(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), this->field_0x5b38); */
        /* if (/ * beq * / 1) goto L_2bf0; */
        /* if (/ * beq * / 1) goto L_2bcc; */
        /* if (/ * beq * / 1) goto L_2bcc; */
        /* L_2bcc:; */
        /* if (/ * beq * / 1) goto L_2bf0; */
        /* if (/ * beq * / 1) goto L_2bf0; */
        /* L_2bf0:; */
        __dt();
        return 2;
        /* L_2c2c:; */
        /* field_0x580 = fopAcM_searchActorAngleY(_savegpr_21(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), 2); */
        /* if (2 == 0) goto L_2c50; */
        /* goto L_2c54; */
        /* L_2c50:; */
        /* L_2c54:; */
        /* field_0x2c4 = -1; */
        /* if (/ * beq * / 1) goto L_2cd0; */
        /* if (/ * beq * / 1) goto L_2cac; */
        /* if (/ * beq * / 1) goto L_2cac; */
        /* L_2cac:; */
        /* if (/ * beq * / 1) goto L_2cd0; */
        /* if (/ * beq * / 1) goto L_2cd0; */
        /* L_2cd0:; */
        __dt();
        return 1;
        /* L_2d0c:; */
        /* if (/ * beq * / 1) goto L_2d84; */
        /* if (/ * beq * / 1) goto L_2d60; */
        /* if (/ * beq * / 1) goto L_2d60; */
        /* L_2d60:; */
        /* if (/ * beq * / 1) goto L_2d84; */
        /* if (/ * beq * / 1) goto L_2d84; */
        /* L_2d84:; */
        __dt();
        return _restgpr_21(0);
}

/* 00002EC0-00002F3C       .text BG_check__FP8nz_class */
void BG_check(nz_class*) {
    /* field_0x1fc = (this->field_0x1fc - this->field_0x340); */
    /* field_0x1e8 = (this->field_0x1e8 - this->field_0x340); */
    ((dBgS_Acch*)((arg0 + 1592)))->CrrPos(((char*)&g_dComIfG_gameInfo + 4768));
    /* field_0x1fc = (this->field_0x1fc + this->field_0x340); */
    /* field_0x1e8 = (this->field_0x1e8 + this->field_0x340); */
    return ((dBgS_Acch*)((arg0 + 1592)))->CrrPos(((char*)&g_dComIfG_gameInfo + 4768));
}

/* 00002F3C-00003090       .text shock_damage_check__FP8nz_class */
void shock_damage_check(nz_class*) {
        /* _savegpr_29(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* if (abs(this->field_0x204) != 0) goto L_2e9c; */
        /* if (abs(this->field_0x208) == 0) goto L_2ea4; */
        /* L_2e9c:; */
        return 0;
        /* L_2ea4:; */
        /* if (/ * beq * / 1) goto L_2f88; */
        getSwordTopPos();
        /* if ((((this->field_0xc - this->field_0x1f8) * (this->field_0xc - this->field_0x1f8)) + ((this->field_0x14 - this->field_0x200) * (this->field_0x14 - this->field_0x200))) <= this->field_0x14) goto L_2f5c; */
        /* L_2f5c:; */
        /* if (this->field_0x8 >= this->field_0x88) goto L_2f88; */
        /* item_poi(_savegpr_29(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* field_0x2bc = 4; */
        /* field_0x2bd = 60; */
        return 1;
        /* L_2f88:; */
        return _restgpr_29(0);
}

/* 00003090-00003240       .text body_atari_check__FP8nz_class */
void body_atari_check(nz_class*) {
        /* if (this->field_0x854 == 0) goto L_311c; */
        ((dCcD_GObjInf*)((arg0 + 2104)))->GetTgHitObj();
        /* if (/ * bne * / 1) goto L_2fe0; */
        return 0;
        /* L_2fe0:; */
        /* field_0x31c = 0; */
        /* field_0x320 = 0; */
        /* field_0x324 = 0; */
        item_poi(arg0);
        /* if (this->field_0x10 == this->field_0x854) goto L_304c; */
        /* if (/ * bge * / 1) goto L_3030; */
        /* if (this->field_0x10 == this->field_0x854) goto L_3040; */
        /* if (/ * bge * / 1) goto L_30c8; */
        /* if (this->field_0x10 == 512) goto L_3040; */
        /* goto L_30c8; */
        /* L_3030:; */
        /* if (this->field_0x10 == this->field_0x854) goto L_3060; */
        /* goto L_30c8; */
        /* L_3040:; */
        /* field_0xd38 = 100; */
        /* goto L_30c8; */
        /* L_304c:; */
        /* field_0x980 = 200; */
        /* field_0x2c2 = 1; */
        /* goto L_30c8; */
        /* L_3060:; */
        /* field_0x982 = 1; */
        /* field_0xb28 = 0; */
        /* field_0x984 = 0; */
        /* field_0x280 = 0; */
        dComIfGp_getReverb((this->field_0x20a & 255));
        /* if (arg0 == 0) goto L_30bc; */
        /* goto L_30c0; */
        /* L_30bc:; */
        /* L_30c0:; */
        /* ((JAIZelBasic*)(this->field_0x0))->monsSeStart(18459, (arg0 + 608), -1, 0, dComIfGp_getReverb((this->field_0x20a & 255))); */
        /* L_30c8:; */
        /* if (this->field_0x2c2 != 0) goto L_30f8; */
        ((dCcD_GObjInf*)((arg0 + 2104)))->GetTgHitObj();
        cc_at_check(arg0);
        /* L_30f8:; */
        /* if (/ * bne * / 1) goto L_311c; */
        /* field_0x2bc = 4; */
        /* field_0x2bd = 50; */
        return 1;
        /* L_311c:; */
        /* if (shock_damage_check(arg0) == 0) goto L_3134; */
        return 2;
        /* L_3134:; */
        return 0;
}

/* 00003240-000042D8       .text nz_move__FP8nz_class */
void nz_move(nz_class*) {
        /* _savegpr_14(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        ct();
        /* field_0xc = 0; */
        /* field_0xc = 0; */
        /* field_0x10 = 1; */
        /* if (/ * beq * / 1) goto L_32b8; */
        /* L_32b8:; */
        /* mDoMtx_YrotS(this->field_0x0, this->field_0x206); */
        /* mDoMtx_XrotM(this->field_0x0, this->field_0x204); */
        /* mDoMtx_ZrotM(this->field_0x0, this->field_0x208); */
        MtxPosition();
        __pl();
        /* field_0x35c = 0; */
        /* field_0x360 = 0; */
        /* field_0x364 = 0; */
        /* if (abs(this->field_0x204) >= 4096) goto L_3370; */
        /* L_3370:; */
        /* L_3390:; */
        /* field_0x3c8 = 0; */
        /* field_0x3cc = 0; */
        /* field_0x3d0 = 0; */
        /* if (this->field_0x2bd != 1) goto L_33e4; */
        /* L_33e4:; */
        MtxPosition();
        /* PSVECAdd(((_savegpr_14(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 0) + 872), (_savegpr_14(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 504), ((_savegpr_14(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 0) + 872)); */
        /* if ((0 + 1) < 6) goto L_3390; */
        /* goto L_34ec; */
        /* L_3434:; */
        Set();
        /* if (((cBgS*)(((char*)&g_dComIfG_gameInfo + 4768)))->LineCross() == 0) goto L_3484; */
        /* field_0x3c8 = 0; */
        /* field_0x3cc = 0; */
        /* field_0x3d0 = 0; */
        /* L_3484:; */
        /* field_0x410 = 0; */
        /* field_0x414 = 0; */
        /* field_0x418 = 0; */
        /* field_0x3b0 = 0; */
        /* field_0x3b4 = 0; */
        /* field_0x3b8 = 0; */
        /* field_0x41c = 0; */
        /* field_0x420 = 0; */
        /* field_0x424 = 0; */
        /* field_0x3bc = 0; */
        /* field_0x3c0 = 0; */
        /* field_0x3c4 = 0; */
        /* L_34ec:; */
        /* if ((0 + 1) < 6) goto L_3434; */
        /* if (((0 | this->field_0x2bd) & 1073741823) != 3) goto L_3688; */
        /* cLib_addCalc2((_savegpr_14(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 508)); */
        /* if (/ * beq * / 1) goto L_3594; */
        /* cLib_addCalc2((_savegpr_14(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 504)); */
        /* cLib_addCalc2((_savegpr_14(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 512)); */
        /* L_3594:; */
        /* if ((((this->field_0x3c8 - this->field_0x3d4) * (this->field_0x3c8 - this->field_0x3d4)) + ((this->field_0x3d0 - this->field_0x3dc) * (this->field_0x3d0 - this->field_0x3dc))) <= this->field_0x14) goto L_3604; */
        /* L_3604:; */
        /* field_0x204 = (-cM_atan2s(cLib_addCalc2((_savegpr_14(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 512)))); */
        /* if (/ * bgt * / 1) goto L_3638; */
        /* if (/ * ble * / 1) goto L_3648; */
        /* L_3638:; */
        /* field_0x428 = cM_atan2s(cM_atan2s(cLib_addCalc2((_savegpr_14(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 512)))); */
        /* L_3648:; */
        /* if ((this->field_0x206 - this->field_0x428) != 0) goto L_3664; */
        /* L_3664:; */
        /* if ((((-(this->field_0x206 - this->field_0x428)) & 65535) & 65535) <= 16384) goto L_369c; */
        /* field_0x204 = (this->field_0x204 - (this->field_0x206 + -32768)); */
        /* goto L_369c; */
        /* L_3688:; */
        /* if (((0 | this->field_0x2bd) & 16777215) != 0) goto L_369c; */
        /* field_0x204 = (this->field_0x204 + 4096); */
        /* L_369c:; */
        /* if ((this->field_0x204 + 4096) != 12) goto L_3798; */
        __mi();
        /* mDoMtx_XrotS(this->field_0x0, ((-this->field_0x204) & 65535)); */
        /* mDoMtx_YrotM(this->field_0x0, ((-this->field_0x206) & 65535)); */
        MtxPosition();
        /* if (((this->field_0x44 * this->field_0x44) + (this->field_0x4c * this->field_0x4c)) <= this->field_0x14) goto L_378c; */
        /* L_378c:; */
        /* field_0x208 = cM_atan2s(MtxPosition()); */
        /* L_3798:; */
        /* if (this->field_0x2bd > 7) goto L_4064; */
        /* field_0x2bd = (this->field_0x2bd + 1); */
        /* anm_init(_savegpr_14(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), 35, 2, 18); */
        /* field_0x300 = 0; */
        /* field_0x2fa = 0; */
        /* cM_rndF(anm_init(_savegpr_14(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), 35, 2, 18)); */
        /* field_0x2d8 = 15; */
        /* field_0x2da = (this->field_0x2cc * 30); */
        /* field_0x224 = 0; */
        /* field_0x810 = 255; */
        /* field_0x204 = 0; */
        /* search_get_obj(_savegpr_14(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* field_0x42c = 0; */
        /* if (search_get_obj(_savegpr_14(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)) == 0) goto L_3888; */
        /* field_0x42c = 1; */
        /* field_0x580 = fopAcM_searchActorAngleY(_savegpr_14(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), search_get_obj(_savegpr_14(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7))); */
        /* if (search_get_obj(_savegpr_14(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)) == 0) goto L_3874; */
        /* goto L_3878; */
        /* L_3874:; */
        /* L_3878:; */
        /* field_0x2c4 = -1; */
        /* field_0x2bd = 2; */
        /* goto L_4064; */
        /* L_3888:; */
        /* cLib_addCalc0((_savegpr_14(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 596)); */
        /* cLib_addCalcAngleS2((_savegpr_14(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 762), this->field_0x300, 1, 8192); */
        /* if (this->field_0x42c != 0) goto L_3930; */
        /* if (this->field_0x2d8 != 0) goto L_3930; */
        /* if (this->field_0x2cc == 0) goto L_38fc; */
        /* field_0x300 = -16000; */
        /* if (this->field_0x2cc != 0) goto L_38ec; */
        /* field_0x300 = 16000; */
        /* L_38ec:; */
        /* field_0x2cc = (this->field_0x2cc + -1); */
        /* goto L_3904; */
        /* L_38fc:; */
        /* field_0x300 = 0; */
        /* L_3904:; */
        /* field_0x2d8 = 30; */
        /* if (search_check(_savegpr_14(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)) == 0) goto L_3930; */
        /* field_0x42c = search_check(_savegpr_14(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* field_0x2cc = 0; */
        /* field_0x300 = 0; */
        /* field_0x2da = 0; */
        /* L_3930:; */
        /* if (this->field_0x2da != 0) goto L_3984; */
        /* field_0x580 = cLib_targetAngleY((_savegpr_14(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 504), (_savegpr_14(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 796)); */
        /* cM_rndFX(cLib_targetAngleY((_savegpr_14(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 504), (_savegpr_14(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 796))); */
        /* field_0x580 = 0; */
        /* field_0x810 = 100; */
        /* field_0x2bd = 2; */
        /* L_3984:; */
        /* fopAcM_searchActorDistance(_savegpr_14(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), this->field_0x5b38); */
        /* if (/ * bge * / 1) goto L_4064; */
        /* cLib_distanceAngleS(this->field_0x20e, fopAcM_searchActorAngleY(this->field_0x5b38, _savegpr_14(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7))); */
        /* field_0x810 = 100; */
        /* if ((cLib_distanceAngleS(this->field_0x20e, fopAcM_searchActorAngleY(this->field_0x5b38, _savegpr_14(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7))) & 65535) >= 10865) goto L_39d4; */
        /* field_0x2bd = 6; */
        /* goto L_4064; */
        /* L_39d4:; */
        /* field_0x208 = 0; */
        /* field_0x2bc = 1; */
        /* field_0x2bd = 20; */
        /* goto L_4064; */
        /* anm_init(_savegpr_14(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), 31, 2, 16); */
        /* field_0x2bd = (this->field_0x2bd + 1); */
        /* field_0x300 = 0; */
        /* field_0x2fa = 0; */
        /* field_0x2d0 = 0; */
        /* field_0x224 = 0; */
        /* field_0x254 = 0; */
        /* cM_rndF(this->field_0x2bd); */
        /* if (this->field_0x42c != 0) goto L_3bac; */
        /* if (abs(this->field_0x204) <= 32640) goto L_3bac; */
        /* if ((this->field_0x9c + this->field_0x1fc) >= this->field_0x1fc) goto L_3bac; */
        /* field_0x2d0 = (this->field_0x2d0 + 1); */
        /* if (this->field_0x2d0 != 0) goto L_3bac; */
        /* if (search_check(_savegpr_14(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)) == 0) goto L_3ac4; */
        /* field_0x42c = search_check(_savegpr_14(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* field_0x2cc = 0; */
        /* field_0x300 = 0; */
        /* L_3ac4:; */
        /* if (this->field_0x42c == 0) goto L_3bac; */
        /* field_0x2bc = 2; */
        /* field_0x2bd = 10; */
        /* field_0x224 = 0; */
        /* field_0x254 = 0; */
        /* field_0x210 = 0; */
        /* if (/ * beq * / 1) goto L_3b6c; */
        /* if (/ * beq * / 1) goto L_3b48; */
        /* if (/ * beq * / 1) goto L_3b48; */
        /* L_3b48:; */
        /* if (/ * beq * / 1) goto L_3b6c; */
        /* if (/ * beq * / 1) goto L_3b6c; */
        /* L_3b6c:; */
        /* if (/ * beq * / 1) goto L_3b90; */
        /* L_3b90:; */
        __dt();
        /* goto L_41b8; */
        /* L_3bac:; */
        /* if (/ * bne * / 1) goto L_3be0; */
        /* if (/ * bne * / 1) goto L_3be0; */
        /* field_0x31c = 0; */
        /* field_0x320 = 0; */
        /* field_0x324 = 0; */
        /* L_3be0:; */
        /* if (abs(this->field_0x204) != 0) goto L_4064; */
        /* if (abs(this->field_0x208) != 0) goto L_4064; */
        /* if (((char*)&__vt__13cBgS_PolyInfo + 0) != 65535) goto L_3ccc; */
        /* fopAcM_searchActorDistance(_savegpr_14(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), this->field_0x5b38); */
        /* if (/ * bge * / 1) goto L_3cb4; */
        /* if (search_get_obj(_savegpr_14(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)) != 0) goto L_3c84; */
        /* if ((cLib_distanceAngleS(this->field_0x20e, fopAcM_searchActorAngleY(this->field_0x5b38, _savegpr_14(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7))) & 65535) >= 10865) goto L_3c68; */
        /* field_0x2bd = 6; */
        /* goto L_4064; */
        /* L_3c68:; */
        /* field_0x208 = 0; */
        /* field_0x2bc = 1; */
        /* field_0x2bd = 20; */
        /* goto L_4064; */
        /* L_3c84:; */
        /* field_0x580 = fopAcM_searchActorAngleY(_savegpr_14(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), cLib_distanceAngleS(this->field_0x20e, fopAcM_searchActorAngleY(this->field_0x5b38, _savegpr_14(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))); */
        /* if (cLib_distanceAngleS(this->field_0x20e, fopAcM_searchActorAngleY(this->field_0x5b38, _savegpr_14(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7))) == 0) goto L_3ca8; */
        /* goto L_3cac; */
        /* L_3ca8:; */
        /* L_3cac:; */
        /* field_0x2c4 = -1; */
        /* goto L_4064; */
        /* L_3cb4:; */
        /* if (this->field_0x2d4 != 0) goto L_4064; */
        /* field_0x2bd = 0; */
        /* goto L_4064; */
        /* L_3ccc:; */
        /* if (/ * beq * / 1) goto L_4064; */
        fopAcIt_Judge(((char*)&fpcSch_JudgeByID__FPvPv + 0));
        /* if (/ * beq * / 1) goto L_3d2c; */
        /* fopAcM_searchActorDistanceXZ(_savegpr_14(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), cLib_distanceAngleS(this->field_0x20e, fopAcM_searchActorAngleY(this->field_0x5b38, _savegpr_14(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))); */
        /* if (/ * bge * / 1) goto L_3d18; */
        /* field_0x2bc = 3; */
        /* field_0x2bd = 30; */
        /* goto L_4064; */
        /* L_3d18:; */
        /* field_0x580 = fopAcM_searchActorAngleY(_savegpr_14(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), cLib_distanceAngleS(this->field_0x20e, fopAcM_searchActorAngleY(this->field_0x5b38, _savegpr_14(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))); */
        /* goto L_4064; */
        /* L_3d2c:; */
        /* field_0x2c4 = -1; */
        /* field_0x42b = 0; */
        /* field_0x2bc = 0; */
        /* field_0x2bd = 6; */
        /* goto L_4064; */
        /* cM_rndF(fopAcM_searchActorAngleY(_savegpr_14(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), cLib_distanceAngleS(this->field_0x20e, fopAcM_searchActorAngleY(this->field_0x5b38, _savegpr_14(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7))))); */
        /* anm_init(_savegpr_14(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), 35, 2, 18); */
        /* field_0x300 = 0; */
        /* field_0x2fa = 0; */
        /* field_0x2bd = (this->field_0x2bd + 1); */
        /* cLib_addCalc0((_savegpr_14(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 596)); */
        /* field_0x580 = fopAcM_searchActorAngleY(_savegpr_14(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), this->field_0x5b38); */
        /* if (this->field_0x2d4 != 0) goto L_4064; */
        /* field_0x2bd = 6; */
        /* goto L_4064; */
        /* anm_init(_savegpr_14(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), 31, 2, 16); */
        /* cM_rndFX(fopAcM_searchActorAngleY(_savegpr_14(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), this->field_0x5b38)); */
        /* field_0x254 = 0; */
        /* field_0x2d6 = 30; */
        /* field_0x42c = 0; */
        /* field_0x2d0 = 0; */
        /* field_0x2bd = (this->field_0x2bd + 1); */
        /* goto L_4064; */
        /* if (abs(this->field_0x204) <= 32640) goto L_3fbc; */
        /* if ((this->field_0x9c + this->field_0x1fc) >= this->field_0x1fc) goto L_3fbc; */
        /* field_0x2d0 = (this->field_0x2d0 + 1); */
        /* if (this->field_0x2d0 != 0) goto L_3fbc; */
        /* if (search_check(_savegpr_14(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)) == 0) goto L_3ed4; */
        /* field_0x42c = search_check(_savegpr_14(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* field_0x2cc = 0; */
        /* field_0x300 = 0; */
        /* L_3ed4:; */
        /* if (this->field_0x42c == 0) goto L_3fbc; */
        /* field_0x2bc = 2; */
        /* field_0x2bd = 10; */
        /* field_0x224 = 0; */
        /* field_0x254 = 0; */
        /* field_0x210 = 0; */
        /* if (/ * beq * / 1) goto L_3f7c; */
        /* if (/ * beq * / 1) goto L_3f58; */
        /* if (/ * beq * / 1) goto L_3f58; */
        /* L_3f58:; */
        /* if (/ * beq * / 1) goto L_3f7c; */
        /* if (/ * beq * / 1) goto L_3f7c; */
        /* L_3f7c:; */
        /* if (/ * beq * / 1) goto L_3fa0; */
        /* L_3fa0:; */
        __dt();
        /* goto L_41b8; */
        /* L_3fbc:; */
        /* if (abs(this->field_0x204) != 0) goto L_4064; */
        /* if (abs(this->field_0x208) != 0) goto L_4064; */
        /* if (this->field_0x2d6 != 0) goto L_4044; */
        /* cM_rndFX(fopAcM_searchActorAngleY(_savegpr_14(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), this->field_0x5b38)); */
        /* field_0x2d6 = 30; */
        /* L_4044:; */
        /* fopAcM_searchActorDistance(_savegpr_14(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), this->field_0x5b38); */
        /* if (/ * ble * / 1) goto L_4064; */
        /* field_0x2bd = 0; */
        /* L_4064:; */
        /* if (abs(this->field_0x204) != 0) goto L_40c4; */
        /* if (abs(this->field_0x208) != 0) goto L_40c4; */
        /* if (0 != 48) goto L_40c4; */
        /* field_0x580 = (cM_atan2s(__mi()) + 16384); */
        /* L_40c4:; */
        /* cLib_addCalcAngleS2((_savegpr_14(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 518), this->field_0x580, 1, 4096); */
        /* if ((0 | this->field_0x2bd) != 0) goto L_4104; */
        /* field_0x2bc = 2; */
        /* field_0x2bd = 10; */
        /* field_0x224 = 0; */
        /* field_0x254 = 0; */
        /* field_0x210 = 0; */
        /* L_4104:; */
        /* if (/ * beq * / 1) goto L_417c; */
        /* if (/ * beq * / 1) goto L_4158; */
        /* if (/ * beq * / 1) goto L_4158; */
        /* L_4158:; */
        /* if (/ * beq * / 1) goto L_417c; */
        /* if (/ * beq * / 1) goto L_417c; */
        /* L_417c:; */
        /* if (/ * beq * / 1) goto L_41a0; */
        /* L_41a0:; */
        /* L_41b8:; */
        return _restgpr_14(__dt());
}

/* 000042D8-000044B8       .text money_drop__FP8nz_class */
void money_drop(nz_class*) {
        /* _savegpr_21(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* if (this->field_0x4 >= 50) goto L_4230; */
        /* goto L_425c; */
        /* L_4230:; */
        /* if (this->field_0x4 >= 100) goto L_4240; */
        /* goto L_425c; */
        /* L_4240:; */
        /* if (this->field_0x4 >= 300) goto L_4250; */
        /* goto L_425c; */
        /* L_4250:; */
        /* if (this->field_0x4 >= 500) goto L_425c; */
        /* L_425c:; */
        cM_rnd();
        /* goto L_4388; */
        /* L_429c:; */
        cM_rnd();
        /* if (this->field_0x4 <= 0) goto L_4384; */
        /* cM_rndFX(this->field_0x4); */
        /* mDoMtx_YrotS(this->field_0x0); */
        MtxPosition();
        cM_rndF(__pl());
        fopAcM_createItem();
        /* L_4384:; */
        /* L_4388:; */
        /* if ((0 + 1) < 0) goto L_429c; */
        /* field_0x5b54 = 0; */
        return _restgpr_21(this->field_0x5b54, ((char*)&g_dComIfG_gameInfo + 0));
}

/* 000044B8-0000482C       .text nz2_move__FP8nz_class */
void nz2_move(nz_class*) {
        /* _savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* if (this->field_0x2bd == 22) goto L_4594; */
        /* if (/ * bge * / 1) goto L_4414; */
        /* if (this->field_0x2bd == 20) goto L_4420; */
        /* if (/ * bge * / 1) goto L_44d8; */
        /* goto L_4698; */
        /* L_4414:; */
        /* if (this->field_0x2bd >= 24) goto L_4698; */
        /* goto L_45ec; */
        /* L_4420:; */
        /* anm_init(_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), 21, 0, 7); */
        dComIfGp_getReverb((this->field_0x20a & 255));
        /* if (_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) == 0) goto L_446c; */
        /* goto L_4470; */
        /* L_446c:; */
        /* L_4470:; */
        /* ((JAIZelBasic*)(this->field_0x0))->monsSeStart(18458, (_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 608), -1, 0, dComIfGp_getReverb((this->field_0x20a & 255))); */
        /* field_0x2bd = (this->field_0x2bd + 1); */
        /* field_0x204 = 0; */
        /* field_0x208 = 0; */
        /* field_0x224 = 0; */
        /* field_0x254 = 0; */
        /* field_0x206 = fopAcM_searchActorAngleY(_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), this->field_0x5b38); */
        /* field_0x83c = 1; */
        /* field_0x2c1 = 0; */
        /* field_0x2ce = 4608; */
        /* goto L_4698; */
        /* L_44d8:; */
        /* field_0x20c = (this->field_0x20c + this->field_0x2ce); */
        /* if (this->field_0x2c1 != 0) goto L_4544; */
        /* if (this->field_0x83c == 0) goto L_4544; */
        /* if (this->field_0x88c != 0) goto L_4544; */
        /* if (((dCcD_GAtTgCoCommonBase*)((_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 2184)))->GetAc() == 0) goto L_4544; */
        /* if (((dCcD_GAtTgCoCommonBase*)((_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 2184)))->GetAc() != this->field_0x5b38) goto L_4544; */
        /* money_drop(_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* field_0x2c1 = 1; */
        /* L_4544:; */
        /* if (/ * beq * / 1) goto L_4558; */
        /* field_0x254 = 0; */
        /* L_4558:; */
        /* if (/ * beq * / 1) goto L_4698; */
        /* field_0x2bd = (this->field_0x2bd + 1); */
        /* L_4594:; */
        /* field_0x254 = (this->field_0x254 * this->field_0x50); */
        /* field_0x224 = 0; */
        /* anm_init(_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), 22, 0, -1); */
        /* field_0x2bd = (this->field_0x2bd + 1); */
        /* L_45ec:; */
        /* if (/ * beq * / 1) goto L_4618; */
        /* field_0x254 = 0; */
        /* L_4618:; */
        /* cLib_addCalc0((_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 596)); */
        /* if (this->field_0x5d != 0) goto L_4650; */
        /* if (/ * beq * / 1) goto L_4650; */
        /* L_4650:; */
        /* if (0 == 0) goto L_4698; */
        /* field_0x224 = 0; */
        /* cM_rndF(this->field_0x2b8); */
        /* field_0x204 = 0; */
        /* field_0x208 = 0; */
        /* field_0x2bc = 0; */
        /* field_0x2bd = 6; */
        /* L_4698:; */
        /* if (body_atari_check(_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)) != 1) goto L_4720; */
        /* field_0x214 = 0; */
        /* field_0x218 = 0; */
        /* field_0x21c = 0; */
        /* field_0x810 = 100; */
        /* field_0x2c0 = 0; */
        dComIfGp_getReverb((this->field_0x20a & 255));
        /* if (_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) == 0) goto L_46fc; */
        /* goto L_4700; */
        /* L_46fc:; */
        /* L_4700:; */
        /* ((JAIZelBasic*)(this->field_0x0))->monsSeStart(18459, (_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 608), -1, 0, dComIfGp_getReverb((this->field_0x20a & 255))); */
        /* field_0x258 = 0; */
        /* field_0x20c = 0; */
        /* field_0x2bd = 52; */
        /* L_4720:; */
        /* return _restgpr_28(((JAIZelBasic*)(this->field_0x0))->monsSeStart(18459, (_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 608), -1, 0, dComIfGp_getReverb((this->field_0x20a & 255)))); */
}

/* 0000482C-000049E8       .text nz3_move__FP8nz_class */
void nz3_move(nz_class*) {
        /* if (this->field_0x2bd == 11) goto L_47d4; */
        /* if (/ * bge * / 1) goto L_4774; */
        /* if (this->field_0x2bd >= 10) goto L_4780; */
        /* goto L_48dc; */
        /* L_4774:; */
        /* if (this->field_0x2bd >= 13) goto L_48dc; */
        /* goto L_486c; */
        /* L_4780:; */
        /* field_0x2bd = (this->field_0x2bd + 1); */
        /* field_0x206 = (this->field_0x206 + -32768); */
        /* anm_init(arg0, 21, 0, 7, arg4, arg5); */
        /* field_0x204 = 0; */
        /* field_0x208 = 0; */
        /* field_0x258 = 0; */
        /* field_0x2d4 = 10; */
        /* L_47d4:; */
        /* field_0x20c = (this->field_0x20c + 9472); */
        /* if (rakka_line_check(arg0) != 0) goto L_480c; */
        /* if (/ * beq * / 1) goto L_48dc; */
        /* L_480c:; */
        anm_init(arg0, 22, 0, -1);
        /* field_0x20c = 0; */
        /* field_0x204 = 0; */
        /* field_0x210 = 0; */
        /* field_0x208 = 0; */
        /* field_0x224 = 0; */
        /* field_0x2bd = (this->field_0x2bd + 1); */
        /* goto L_48dc; */
        /* L_486c:; */
        /* if (this->field_0x5d != 0) goto L_4894; */
        /* if (/ * beq * / 1) goto L_4894; */
        /* L_4894:; */
        /* if (0 == 0) goto L_48dc; */
        cM_rndF((arg0 + 1472));
        /* field_0x2bc = 0; */
        /* field_0x2bd = 0; */
        /* L_48dc:; */
        return cM_rndF((arg0 + 1472));
}

/* 000049E8-00005B2C       .text nz4_move__FP8nz_class */
void nz4_move(nz_class*) {
        /* _savegpr_18(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        ct();
        /* field_0xc = 0; */
        /* field_0xc = 0; */
        /* field_0x10 = 1; */
        /* if (/ * beq * / 1) goto L_4a44; */
        /* L_4a44:; */
        /* if (this->field_0x2b5 != 0) goto L_4b3c; */
        fopAcIt_Judge(((char*)&fpcSch_JudgeByID__FPvPv + 0));
        /* if (/ * bne * / 1) goto L_4b3c; */
        /* field_0x2c4 = -1; */
        /* field_0x2bc = 0; */
        /* field_0x2bd = 6; */
        /* if (/ * beq * / 1) goto L_4b04; */
        /* if (/ * beq * / 1) goto L_4ae0; */
        /* if (/ * beq * / 1) goto L_4ae0; */
        /* L_4ae0:; */
        /* if (/ * beq * / 1) goto L_4b04; */
        /* if (/ * beq * / 1) goto L_4b04; */
        /* L_4b04:; */
        __dt();
        /* goto L_5a0c; */
        /* L_4b3c:; */
        /* if ((this->field_0x2bd + -30) > 11) goto L_5918; */
        fopAcIt_Judge(((char*)&fpcSch_JudgeByID__FPvPv + 0));
        /* if (/ * beq * / 1) goto L_4c18; */
        /* field_0x2bd = 31; */
        dComIfGp_getReverb((this->field_0x20a & 255));
        /* if (_savegpr_18(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) == 0) goto L_4bc0; */
        /* goto L_4bc4; */
        /* L_4bc0:; */
        /* L_4bc4:; */
        /* ((JAIZelBasic*)(this->field_0x0))->monsSeStart(18457, (_savegpr_18(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 608), -1, 0, dComIfGp_getReverb((this->field_0x20a & 255))); */
        /* field_0x206 = fopAcM_searchActorAngleY(_savegpr_18(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* field_0x258 = 0; */
        /* field_0x254 = 0; */
        /* field_0x224 = 0; */
        /* if (/ * bne * / 1) goto L_4c00; */
        /* ((daItem_c*)(fopAcM_searchActorAngleY(_savegpr_18(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7))))->startControl(); */
        /* L_4c00:; */
        /* field_0x204 = 0; */
        /* field_0x208 = 0; */
        /* field_0x224 = 0; */
        /* goto L_4c34; */
        /* L_4c18:; */
        /* field_0x42b = 0; */
        /* field_0x2c4 = -1; */
        /* field_0x2bc = 0; */
        /* field_0x2bd = 6; */
        /* L_4c34:; */
        /* field_0x254 = 0; */
        /* goto L_5918; */
        /* anm_init(_savegpr_18(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), 30, 0, 15); */
        /* field_0x2bd = (this->field_0x2bd + 1); */
        /* goto L_5918; */
        /* if (this->field_0x5d != 0) goto L_4c94; */
        /* if (/ * beq * / 1) goto L_4c94; */
        /* L_4c94:; */
        /* if (0 == 0) goto L_5918; */
        /* anm_init(_savegpr_18(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), 32, 2, 17); */
        /* field_0x2bd = (this->field_0x2bd + 1); */
        /* goto L_5918; */
        fopAcIt_Judge(((char*)&fpcSch_JudgeByID__FPvPv + 0));
        /* if (/ * beq * / 1) goto L_4d18; */
        /* if (/ * bne * / 1) goto L_4d20; */
        /* field_0x580 = fopAcM_searchActorAngleY(_savegpr_18(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), this->field_0x5b38); */
        /* field_0x2bd = 40; */
        /* goto L_5918; */
        /* L_4d18:; */
        /* field_0x2c4 = -1; */
        /* L_4d20:; */
        /* if (this->field_0x2c8 != 0) goto L_4d70; */
        /* fpcEx_Search(((char*)&s_ana_sub__FPvPv + 0), _savegpr_18(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        fopAcIt_Judge(((char*)&fpcSch_JudgeByID__FPvPv + 0));
        /* field_0x580 = fopAcM_searchActorAngleY(_savegpr_18(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), this->field_0x5b38); */
        /* L_4d70:; */
        /* cM_rndF(fopAcM_searchActorAngleY(_savegpr_18(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), this->field_0x5b38)); */
        /* field_0x2d6 = 0; */
        /* field_0x254 = 0; */
        /* field_0x2bd = (this->field_0x2bd + 1); */
        /* if (this->field_0x2c8 == 0) goto L_4f44; */
        /* if ((this->field_0x2bd + 1) == 65535) goto L_4f44; */
        /* fopAcM_searchActorDistance(_savegpr_18(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), fopAcIt_Judge(((char*)&fpcSch_JudgeByID__FPvPv + 0))); */
        /* if (/ * bge * / 1) goto L_4f44; */
        /* if (((this->field_0x1fc - this->field_0x1fc) * (this->field_0x1fc - this->field_0x1fc)) <= this->field_0x14) goto L_4e68; */
        /* L_4e68:; */
        /* if (this->field_0x34 >= this->field_0x70) goto L_4f44; */
        /* field_0x280 = 0; */
        /* field_0x206 = fopAcM_searchActorAngleY(_savegpr_18(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), fopAcIt_Judge(((char*)&fpcSch_JudgeByID__FPvPv + 0))); */
        /* field_0x2bd = 35; */
        /* if (/ * beq * / 1) goto L_4f0c; */
        /* if (/ * beq * / 1) goto L_4ee8; */
        /* if (/ * beq * / 1) goto L_4ee8; */
        /* L_4ee8:; */
        /* if (/ * beq * / 1) goto L_4f0c; */
        /* if (/ * beq * / 1) goto L_4f0c; */
        /* L_4f0c:; */
        __dt();
        /* goto L_5a0c; */
        /* L_4f44:; */
        /* if (this->field_0x868 == 0) goto L_5094; */
        /* ((dCcD_GAtTgCoCommonBase*)((_savegpr_18(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 2324)))->GetAc(); */
        /* if (this->field_0x2c8 == 0) goto L_4f8c; */
        /* if (this->field_0x868 == 65535) goto L_4f8c; */
        fopAcIt_Judge(((char*)&fpcSch_JudgeByID__FPvPv + 0));
        /* L_4f8c:; */
        /* if (((dCcD_GAtTgCoCommonBase*)((_savegpr_18(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 2324)))->GetAc() == 0) goto L_5094; */
        /* if (this->field_0x2c8 == 0) goto L_4fa8; */
        /* if (((dCcD_GAtTgCoCommonBase*)((_savegpr_18(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 2324)))->GetAc() == fopAcIt_Judge(((char*)&fpcSch_JudgeByID__FPvPv + 0))) goto L_5094; */
        /* L_4fa8:; */
        /* anm_init(_savegpr_18(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), 23, 0, 8); */
        /* field_0x206 = fopAcM_searchActorAngleY(_savegpr_18(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), ((dCcD_GAtTgCoCommonBase*)((_savegpr_18(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 2324)))->GetAc()); */
        /* field_0x254 = 0; */
        /* field_0x2bd = 41; */
        /* if (/ * beq * / 1) goto L_505c; */
        /* if (/ * beq * / 1) goto L_5038; */
        /* if (/ * beq * / 1) goto L_5038; */
        /* L_5038:; */
        /* if (/ * beq * / 1) goto L_505c; */
        /* if (/ * beq * / 1) goto L_505c; */
        /* L_505c:; */
        __dt();
        /* goto L_5a0c; */
        /* L_5094:; */
        /* if (this->field_0x2d6 != 0) goto L_5428; */
        /* cM_rndFX(fopAcM_searchActorAngleY(_savegpr_18(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), this->field_0x5b38)); */
        /* if (this->field_0x2c8 == 0) goto L_51d4; */
        /* if (((fopAcM_searchActorAngleY(_savegpr_18(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), this->field_0x5b38) & 65535) + -32768) == 65535) goto L_51d4; */
        fopAcIt_Judge(((char*)&fpcSch_JudgeByID__FPvPv + 0));
        /* if (/ * beq * / 1) goto L_51d4; */
        /* fopAcM_searchActorDistance(_savegpr_18(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), this->field_0x5b38); */
        /* if (/ * ble * / 1) goto L_51d4; */
        /* if (((this->field_0x1fc - this->field_0x1fc) * (this->field_0x1fc - this->field_0x1fc)) <= this->field_0x14) goto L_51b8; */
        /* L_51b8:; */
        /* if (this->field_0x28 >= this->field_0x70) goto L_51d4; */
        /* L_51d4:; */
        /* mDoMtx_YrotS(this->field_0x0, fopAcM_searchActorAngleY(_savegpr_18(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), fopAcM_searchActorAngleY(_savegpr_18(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), this->field_0x5b38))); */
        MtxPosition();
        PSVECAdd();
        /* field_0x41c = 0; */
        /* field_0x420 = 0; */
        /* field_0x424 = 0; */
        /* field_0x3bc = 0; */
        /* field_0x3c0 = 0; */
        /* field_0x3c4 = 0; */
        /* Set((_savegpr_18(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 504)); */
        /* field_0x580 = fopAcM_searchActorAngleY(_savegpr_18(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), fopAcM_searchActorAngleY(_savegpr_18(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), this->field_0x5b38)); */
        /* field_0x2d6 = 8; */
        /* if (((cBgS*)(((char*)&g_dComIfG_gameInfo + 4768)))->LineCross() == 0) goto L_5428; */
        /* if (this->field_0x2c8 == 0) goto L_5368; */
        /* if (8 == 65535) goto L_5368; */
        /* if (fopAcIt_Judge(((char*)&fpcSch_JudgeByID__FPvPv + 0)) == 0) goto L_5368; */
        /* if ((((this->field_0x5c - this->field_0x200) * (this->field_0x5c - this->field_0x200)) + (((this->field_0x54 - this->field_0x1f8) * (this->field_0x54 - this->field_0x1f8)) + ((this->field_0x58 - this->field_0x1fc) * (this->field_0x58 - this->field_0x1fc)))) <= this->field_0x14) goto L_5358; */
        /* L_5358:; */
        /* if (this->field_0x20 >= this->field_0x60) goto L_5368; */
        /* L_5368:; */
        /* if (1 != 0) goto L_5428; */
        /* field_0x580 = (cM_atan2s(cM_atan2s(fopAcIt_Judge(((char*)&fpcSch_JudgeByID__FPvPv + 0)))) + -24576); */
        /* fopAcM_searchActorAngleY(_savegpr_18(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), this->field_0x5b38); */
        cLib_distanceAngleS(((cM_atan2s(cM_atan2s(fopAcIt_Judge(((char*)&fpcSch_JudgeByID__FPvPv + 0)))) + -24576) & 65535));
        /* if ((cLib_distanceAngleS(((cM_atan2s(fopAcIt_Judge(((char*)&fpcSch_JudgeByID__FPvPv + 0))) + 24576) & 65535)) & 65535) <= (cLib_distanceAngleS(((cM_atan2s(cM_atan2s(fopAcIt_Judge(((char*)&fpcSch_JudgeByID__FPvPv + 0)))) + -24576) & 65535)) & 65535)) goto L_5420; */
        /* field_0x580 = ((cM_atan2s(fopAcIt_Judge(((char*)&fpcSch_JudgeByID__FPvPv + 0))) + 24576) & 65535); */
        /* L_5420:; */
        /* field_0x2d6 = 10; */
        /* L_5428:; */
        /* cLib_addCalcAngleS2((_savegpr_18(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 518), this->field_0x580, 1, 8192); */
        /* if (this->field_0x2d4 != 0) goto L_5918; */
        /* mDoMtx_YrotS(this->field_0x0, this->field_0x206); */
        MtxPosition();
        PSVECAdd();
        /* field_0x41c = 0; */
        /* field_0x420 = 0; */
        /* field_0x424 = 0; */
        /* field_0x3bc = 0; */
        /* field_0x3c0 = 0; */
        /* field_0x3c4 = 0; */
        /* Set((_savegpr_18(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 504)); */
        /* if (((cBgS*)(((char*)&g_dComIfG_gameInfo + 4768)))->LineCross() != 0) goto L_5918; */
        /* field_0x2bd = 36; */
        /* goto L_5918; */
        /* cLib_addCalc0((_savegpr_18(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 596)); */
        /* cLib_addCalc0((_savegpr_18(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 532)); */
        /* field_0x218 = 0; */
        /* field_0x21c = 0; */
        /* if (fopAcIt_Judge(((char*)&fpcSch_JudgeByID__FPvPv + 0)) == 0) goto L_5564; */
        /* field_0x214 = 0; */
        /* field_0x218 = 0; */
        /* field_0x21c = 0; */
        /* L_5564:; */
        /* if (this->field_0x214 >= this->field_0xc4) goto L_5918; */
        /* if (this->field_0x2c8 == 0) goto L_55e0; */
        /* if (this->field_0x2c4 == 65535) goto L_55e0; */
        /* if (fopAcIt_Judge(((char*)&fpcSch_JudgeByID__FPvPv + 0)) == 0) goto L_55e0; */
        /* if (this->field_0x1cc == 0) goto L_55cc; */
        /* if (this->field_0x2be <= 0) goto L_55d8; */
        /* field_0x2be = (this->field_0x2be + -1); */
        /* goto L_55d8; */
        /* L_55cc:; */
        /* field_0x2c0 = (this->field_0x2c0 + 1); */
        /* L_55d8:; */
        /* field_0x2c2 = 20; */
        /* L_55e0:; */
        /* if (fopAcIt_Judge(((char*)&fpcSch_JudgeByID__FPvPv + 0)) == 0) goto L_5604; */
        fopAcM_delete(fopAcIt_Judge(((char*)&fpcSch_JudgeByID__FPvPv + 0)));
        /* L_5604:; */
        /* field_0x2c4 = -1; */
        /* field_0x42b = 0; */
        /* fopAcM_delete(_savegpr_18(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* goto L_5918; */
        /* anm_init(_savegpr_18(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), 28, 0, 13); */
        /* field_0x2bd = (this->field_0x2bd + 1); */
        /* goto L_5918; */
        /* if (((J3DFrameCtrl*)((this->field_0x2b8 + 88)))->checkPass() == 0) goto L_56b8; */
        /* item_poi(_savegpr_18(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* field_0x598 = 0; */
        /* field_0x59c = 0; */
        /* field_0x5a0 = 0; */
        __ct();
        /* smoke_set(_savegpr_18(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* L_56b8:; */
        /* if (this->field_0x68 != this->field_0x8c) goto L_56f8; */
        /* cLib_addCalc0((_savegpr_18(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 596)); */
        /* field_0x598 = 0; */
        /* field_0x59c = 0; */
        /* field_0x5a0 = 0; */
        /* L_56f8:; */
        /* if (this->field_0x5d != 0) goto L_5720; */
        /* if (/ * beq * / 1) goto L_5720; */
        /* L_5720:; */
        /* if (0 == 0) goto L_5918; */
        /* field_0x2d8 = 30; */
        /* field_0x2bd = (this->field_0x2bd + 1); */
        /* goto L_5918; */
        /* cLib_addCalc0((_savegpr_18(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 596), 0); */
        /* if (this->field_0x2d8 != 0) goto L_5918; */
        /* anm_init(_savegpr_18(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), 29, 0, 14); */
        /* field_0x2bd = (this->field_0x2bd + 1); */
        /* goto L_5918; */
        /* if (this->field_0x5d != 0) goto L_57c4; */
        /* if (/ * beq * / 1) goto L_57c4; */
        /* L_57c4:; */
        /* if (0 == 0) goto L_5918; */
        /* if (fopAcIt_Judge(((char*)&fpcSch_JudgeByID__FPvPv + 0)) == 0) goto L_57fc; */
        /* field_0x42b = 0; */
        /* field_0x2c4 = -1; */
        /* L_57fc:; */
        /* if (this->field_0x2b5 != 0) goto L_581c; */
        /* field_0x2bc = 0; */
        /* field_0x2bd = 6; */
        /* goto L_5918; */
        /* L_581c:; */
        /* anm_init(_savegpr_18(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), 35, 2, 18); */
        /* field_0x2d4 = 20; */
        /* field_0x2bc = 5; */
        /* field_0x2bd = 77; */
        /* goto L_5918; */
        /* cLib_addCalcAngleS2((_savegpr_18(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 518), this->field_0x580, 1, 8192); */
        /* if ((cLib_distanceAngleS(this->field_0x580, this->field_0x206) & 65535) >= 4096) goto L_5918; */
        /* field_0x2bd = 36; */
        /* goto L_5918; */
        /* cLib_addCalc0((_savegpr_18(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 596)); */
        /* if (((J3DFrameCtrl*)((this->field_0x2b8 + 88)))->checkPass() == 0) goto L_5918; */
        /* field_0x254 = 0; */
        /* field_0x42b = 0; */
        fopAcIt_Judge(((char*)&fpcSch_JudgeByID__FPvPv + 0));
        /* if (/ * beq * / 1) goto L_5908; */
        /* field_0x224 = 0; */
        /* field_0x258 = 0; */
        ((daItem_c*)(fopAcIt_Judge(((char*)&fpcSch_JudgeByID__FPvPv + 0))))->endControl();
        /* ((daItem_c*)(fopAcM_searchActorAngleY(_savegpr_18(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), this->field_0x5b38)))->releaseLock(); */
        /* L_5908:; */
        /* field_0x2c4 = -1; */
        /* field_0x2bd = 39; */
        /* L_5918:; */
        /* field_0x42b = 0; */
        /* if (fopAcIt_Judge(((char*)&fpcSch_JudgeByID__FPvPv + 0)) == 0) goto L_5960; */
        /* if (fopAc_IsActor(fopAcIt_Judge(((char*)&fpcSch_JudgeByID__FPvPv + 0))) == 0) goto L_5958; */
        /* field_0x42b = 1; */
        /* goto L_5960; */
        /* L_5958:; */
        /* field_0x2c4 = -1; */
        /* L_5960:; */
        /* if (/ * beq * / 1) goto L_59d8; */
        /* if (/ * beq * / 1) goto L_59b4; */
        /* if (/ * beq * / 1) goto L_59b4; */
        /* L_59b4:; */
        /* if (/ * beq * / 1) goto L_59d8; */
        /* if (/ * beq * / 1) goto L_59d8; */
        /* L_59d8:; */
        /* L_5a0c:; */
        return _restgpr_18(__dt());
}

/* 00005B2C-000061E0       .text nz5_move__FP8nz_class */
void nz5_move(nz_class*) {
        /* if ((this->field_0x2bd + -50) > 12) goto L_605c; */
        /* field_0x214 = 0; */
        /* field_0x218 = 0; */
        /* field_0x21c = 0; */
        /* field_0x810 = 100; */
        /* field_0x2c0 = 0; */
        dComIfGp_getReverb((this->field_0x20a & 255));
        /* if (arg0 == 0) goto L_5ae8; */
        /* goto L_5aec; */
        /* L_5ae8:; */
        /* L_5aec:; */
        /* ((JAIZelBasic*)(this->field_0x0))->monsSeStart(18459, (arg0 + 608), -1, 0, dComIfGp_getReverb((this->field_0x20a & 255))); */
        /* field_0x280 = 0; */
        /* if (this->field_0x2c2 == 0) goto L_5b14; */
        /* field_0x2bd = 57; */
        /* goto L_605c; */
        /* L_5b14:; */
        /* if (/ * beq * / 1) goto L_5b30; */
        /* field_0x20c = 0; */
        /* field_0x2bd = 52; */
        /* goto L_605c; */
        /* L_5b30:; */
        /* field_0x210 = 0; */
        /* field_0x254 = 0; */
        /* field_0x258 = 0; */
        /* field_0x2bd = (this->field_0x2bd + 1); */
        /* field_0x64 = 0; */
        cLib_addCalcAngleS2((arg0 + 524), -32768, 1, 512);
        /* if (rakka_line_check(arg0) == 0) goto L_605c; */
        /* field_0x20c = 0; */
        /* field_0x204 = 0; */
        /* field_0x210 = 0; */
        /* field_0x208 = 0; */
        /* field_0x2c0 = 1; */
        /* field_0x20c = 0; */
        /* field_0x2bd = (this->field_0x2bd + 1); */
        anm_init(arg0, 24, 0, 9);
        /* field_0x206 = (cLib_targetAngleY((arg0 + 504), (arg0 + 796)) + -32768); */
        dComIfGp_getReverb((this->field_0x20a & 255));
        /* if (arg0 == 0) goto L_5c14; */
        /* goto L_5c18; */
        /* L_5c14:; */
        /* L_5c18:; */
        /* ((JAIZelBasic*)(this->field_0x0))->monsSeStart(22531, (arg0 + 608), -1, 0, dComIfGp_getReverb((this->field_0x20a & 255))); */
        /* field_0x254 = 0; */
        /* field_0x2bd = (this->field_0x2bd + 1); */
        /* if (this->field_0x2c0 == 0) goto L_5c4c; */
        /* field_0x5a6 = (this->field_0x5a6 + 5376); */
        /* L_5c4c:; */
        /* if (((J3DFrameCtrl*)((this->field_0x2b8 + 88)))->checkPass() == 0) goto L_605c; */
        /* if (this->field_0x2c0 == 0) goto L_5c8c; */
        /* field_0x2c0 = 0; */
        /* L_5c8c:; */
        /* field_0x254 = 0; */
        /* field_0x224 = 0; */
        /* field_0x258 = 0; */
        /* field_0x2bd = (this->field_0x2bd + 1); */
        /* goto L_605c; */
        /* if (/ * beq * / 1) goto L_5d18; */
        /* field_0x59c = 0; */
        /* field_0x5a0 = 0; */
        /* field_0x59c = 0; */
        __ct();
        /* field_0x254 = 0; */
        smoke_set(arg0);
        /* L_5d18:; */
        /* if (this->field_0x5d != 0) goto L_5d40; */
        /* if (/ * beq * / 1) goto L_5d40; */
        /* L_5d40:; */
        /* if (0 == 0) goto L_605c; */
        /* field_0x2bd = (this->field_0x2bd + 1); */
        /* goto L_605c; */
        anm_init(this->field_0x2bd, 25, 0, 10);
        dComIfGp_getReverb((this->field_0x20a & 255));
        /* if (arg0 == 0) goto L_5db8; */
        /* goto L_5dbc; */
        /* L_5db8:; */
        /* L_5dbc:; */
        /* ((JAIZelBasic*)(this->field_0x0))->monsSeStart(22532, (arg0 + 608), -1, 0, dComIfGp_getReverb((this->field_0x20a & 255))); */
        /* field_0x254 = 0; */
        /* field_0x224 = 0; */
        /* field_0x258 = 0; */
        /* field_0x5a6 = (this->field_0x5a6 + 5376); */
        /* field_0x2bd = (this->field_0x2bd + 1); */
        /* goto L_605c; */
        /* if (/ * beq * / 1) goto L_5e2c; */
        /* field_0x59c = 0; */
        /* field_0x5a0 = 0; */
        /* field_0x59c = 0; */
        /* smoke_set(this->field_0x2bd); */
        /* field_0x254 = 0; */
        /* L_5e2c:; */
        /* if (this->field_0x5d != 0) goto L_5e54; */
        /* if (/ * beq * / 1) goto L_5e54; */
        /* L_5e54:; */
        /* if (0 == 0) goto L_605c; */
        /* field_0x2bd = (this->field_0x2bd + 1); */
        /* goto L_605c; */
        /* fopAcM_createDisappear(this->field_0x2bd); */
        fopAcM_delete(arg0);
        /* goto L_605c; */
        /* field_0x20c = 0; */
        /* field_0x210 = 0; */
        dComIfGp_getReverb((this->field_0x20a & 255));
        /* if (arg0 == 0) goto L_5ef0; */
        /* goto L_5ef4; */
        /* L_5ef0:; */
        /* L_5ef4:; */
        /* ((JAIZelBasic*)(this->field_0x0))->monsSeStart(18459, (arg0 + 608), -1, 0, dComIfGp_getReverb((this->field_0x20a & 255))); */
        /* field_0x810 = 100; */
        /* field_0x254 = 0; */
        /* field_0x224 = 0; */
        /* field_0x206 = (fopAcM_searchActorAngleY(arg0, this->field_0x5b38) + -32768); */
        anm_init(arg0, 25, 0, 10);
        /* field_0x258 = 0; */
        /* field_0x2bd = (this->field_0x2bd + 1); */
        /* goto L_605c; */
        /* if (/ * beq * / 1) goto L_605c; */
        /* field_0x59c = 0; */
        /* field_0x5a0 = 0; */
        /* field_0x59c = 0; */
        __ct();
        /* field_0x254 = 0; */
        smoke_set(arg0);
        /* field_0x2d6 = 45; */
        /* field_0x2bd = (this->field_0x2bd + 1); */
        /* field_0x5a6 = (this->field_0x5a6 + 5376); */
        /* if (this->field_0x2d6 != 0) goto L_605c; */
        /* if (this->field_0x2b5 != 0) goto L_6028; */
        /* field_0x2bc = 0; */
        /* field_0x2bd = 0; */
        /* goto L_605c; */
        /* L_6028:; */
        anm_init(arg0, 35, 2, 18);
        /* field_0x2d4 = 20; */
        /* field_0x2bc = 5; */
        /* field_0x2bd = 77; */
        /* L_605c:; */
        /* if (this->field_0x2bd < 60) goto L_6070; */
        body_atari_check(arg0);
        /* L_6070:; */
        /* if (this->field_0x2bd == 56) goto L_6084; */
        /* if (this->field_0x2bd != 62) goto L_60d0; */
        /* L_6084:; */
        /* if (this->field_0x2c0 == 0) goto L_60d0; */
        /* field_0x5a6 = (this->field_0x5a6 + 5376); */
        /* field_0x2c0 = (this->field_0x2c0 + 1); */
        /* if (this->field_0x2c0 <= 6) goto L_60d0; */
        /* field_0x2c0 = 0; */
        /* L_60d0:; */
        return (arg0 + 1472);
}

/* 000061E0-000062C8       .text bomb_catch_SUB__FP8nz_class */
void bomb_catch_SUB(nz_class*) {
        /* if (/ * beq * / 1) goto L_61b8; */
        fopAcIt_Judge(((char*)&fpcSch_JudgeByID__FPvPv + 0));
        /* if (/ * beq * / 1) goto L_61b8; */
        /* if (this->field_0x2b6 != 0) goto L_6144; */
        /* L_6144:; */
        ((daBomb_c*)(((daBomb_c*)(fopAcIt_Judge(((char*)&fpcSch_JudgeByID__FPvPv + 0))))->setBombRestTime(150)))->setBombOffCoSet();
        /* field_0x258 = 0; */
        /* field_0x254 = 0; */
        /* field_0x220 = 0; */
        /* field_0x224 = 0; */
        /* field_0x228 = 0; */
        /* field_0x214 = 0; */
        /* field_0x218 = 0; */
        /* field_0x21c = 0; */
        /* L_61b8:; */
        return C_@4080;
}

/* 000062C8-00006734       .text nezumi_move__FP8nz_classs */
void nezumi_move(nz_class*, short) {
        /* _savegpr_20(arg0, short, arg2, arg3, arg4, arg5, arg6, arg7); */
        ct();
        /* field_0xc = 0; */
        /* field_0xc = 0; */
        /* field_0x10 = 1; */
        /* if (/ * beq * / 1) goto L_631c; */
        /* L_631c:; */
        /* L_6348:; */
        /* mDoMtx_YrotS(this->field_0x0); */
        MtxPosition();
        PSVECAdd();
        /* Set((_savegpr_20(arg0, short, arg2, arg3, arg4, arg5, arg6, arg7) + 504)); */
        /* if (((cBgS*)(((char*)&g_dComIfG_gameInfo + 4768)))->LineCross() != 0) goto L_645c; */
        /* if (/ * beq * / 1) goto L_6420; */
        /* if (/ * beq * / 1) goto L_63fc; */
        /* if (/ * beq * / 1) goto L_63fc; */
        /* L_63fc:; */
        /* if (/ * beq * / 1) goto L_6420; */
        /* if (/ * beq * / 1) goto L_6420; */
        /* L_6420:; */
        __dt();
        return 0;
        /* L_645c:; */
        /* if ((0 + 1) < 8) goto L_6348; */
        /* if (/ * blt * / 1) goto L_6534; */
        /* field_0x580 = (this->field_0x580 + -32768); */
        /* if (/ * beq * / 1) goto L_64f8; */
        /* if (/ * beq * / 1) goto L_64d4; */
        /* if (/ * beq * / 1) goto L_64d4; */
        /* L_64d4:; */
        /* if (/ * beq * / 1) goto L_64f8; */
        /* if (/ * beq * / 1) goto L_64f8; */
        /* L_64f8:; */
        __dt();
        return 1;
        /* L_6534:; */
        /* field_0x41c = 0; */
        /* field_0x420 = 0; */
        /* field_0x424 = 0; */
        /* field_0x3bc = 0; */
        /* field_0x3c0 = 0; */
        /* field_0x3c4 = 0; */
        /* if (/ * beq * / 1) goto L_65dc; */
        /* if (/ * beq * / 1) goto L_65b8; */
        /* if (/ * beq * / 1) goto L_65b8; */
        /* L_65b8:; */
        /* if (/ * beq * / 1) goto L_65dc; */
        /* if (/ * beq * / 1) goto L_65dc; */
        /* L_65dc:; */
        __dt();
        return _restgpr_20(0);
}

/* 00006734-000072D8       .text nz6_move__FP8nz_class */
void nz6_move(nz_class*) {
        /* _savegpr_20(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        ct();
        /* field_0xc = 0; */
        /* field_0xc = 0; */
        /* field_0x10 = 1; */
        /* if (/ * beq * / 1) goto L_6790; */
        /* L_6790:; */
        /* if ((this->field_0x2bd + -70) > 8) goto L_7090; */
        /* field_0x2c0 = 0; */
        /* anm_init(_savegpr_20(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), 32, 2, 17); */
        /* field_0x2c4 = fopAcM_create(296, ((daBomb_c*)(7))->prm_make(1), (_savegpr_20(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 504), -1, 0, 0, -1, 0); */
        /* if (0 != 65535) goto L_6834; */
        /* fopAcM_delete(_savegpr_20(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* goto L_7090; */
        /* L_6834:; */
        /* field_0x254 = 0; */
        dComIfGp_getReverb((this->field_0x20a & 255));
        /* if (_savegpr_20(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) == 0) goto L_6870; */
        /* goto L_6874; */
        /* L_6870:; */
        /* L_6874:; */
        /* ((JAIZelBasic*)(this->field_0x0))->monsSeStart(18457, (_savegpr_20(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 608), -1, 0, dComIfGp_getReverb((this->field_0x20a & 255))); */
        /* field_0x2bd = (this->field_0x2bd + 1); */
        /* goto L_7090; */
        /* if (fopAcIt_Judge(((char*)&fpcSch_JudgeByID__FPvPv + 0)) == 0) goto L_7090; */
        /* field_0x214 = 0; */
        /* field_0x218 = 0; */
        /* field_0x21c = 0; */
        /* field_0x42b = 1; */
        /* field_0x2bd = (this->field_0x2bd + 1); */
        /* field_0x2c0 = 1; */
        /* goto L_7090; */
        /* if (this->field_0x214 <= this->field_0xd4) goto L_7090; */
        /* if (this->field_0x2d6 != 0) goto L_693c; */
        /* cM_rndFX(this->field_0x2bd); */
        /* nezumi_move(_savegpr_20(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* field_0x2d6 = 10; */
        /* L_693c:; */
        /* fopAcM_searchActorDistanceXZ(_savegpr_20(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), this->field_0x5b38); */
        /* if (/ * bge * / 1) goto L_7090; */
        /* if (((this->field_0x1fc - this->field_0x1fc) * (this->field_0x1fc - this->field_0x1fc)) <= this->field_0x14) goto L_69c8; */
        /* L_69c8:; */
        /* if (this->field_0x2c >= this->field_0x70) goto L_7090; */
        /* Set((_savegpr_20(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 504), (this->field_0x5b38 + 504), _savegpr_20(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* if (((cBgS*)(((char*)&g_dComIfG_gameInfo + 4768)))->LineCross() != 0) goto L_7090; */
        /* if ((cLib_distanceAngleS(this->field_0x20e, fopAcM_searchActorAngleY(_savegpr_20(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), this->field_0x5b38)) & 65535) >= 10865) goto L_7090; */
        /* field_0x254 = 0; */
        /* anm_init(_savegpr_20(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), 33, 0, -1); */
        /* field_0x2bd = (this->field_0x2bd + 1); */
        /* goto L_7090; */
        /* field_0x2e4 = ((this->field_0x510 + this->field_0x2e4) + 3000); */
        /* if (this->field_0x5d != 0) goto L_6aa0; */
        /* if (/ * beq * / 1) goto L_6aa0; */
        /* L_6aa0:; */
        /* if (0 == 0) goto L_7090; */
        /* anm_init(_savegpr_20(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), 34, 0, -1); */
        /* ((dPa_control_c*)(this->field_0x5ab8))->set(0); */
        /* if (fopAcIt_Judge(((char*)&fpcSch_JudgeByID__FPvPv + 0)) == 0) goto L_6b48; */
        /* if (this->field_0x8 != 296) goto L_6b50; */
        ((daBomb_c*)(fopAcIt_Judge(((char*)&fpcSch_JudgeByID__FPvPv + 0))))->setBombFire_ON();
        /* field_0x2b6 = 1; */
        /* goto L_6b50; */
        /* L_6b48:; */
        /* field_0x2c4 = -1; */
        /* L_6b50:; */
        /* field_0x2bd = (this->field_0x2bd + 1); */
        /* goto L_7090; */
        /* field_0x64 = (this->field_0xd0 + this->field_0x4cc); */
        /* if (this->field_0x2e4 >= (this->field_0x2b8 + -5536)) goto L_6ba4; */
        /* field_0x2e4 = ((this->field_0x510 + this->field_0x2e4) + 9000); */
        /* goto L_6ba8; */
        /* L_6ba4:; */
        /* field_0x2e4 = (this->field_0x510 + this->field_0x2e4); */
        /* L_6ba8:; */
        /* if (this->field_0x5d != 0) goto L_6bd0; */
        /* if (/ * beq * / 1) goto L_6bd0; */
        /* L_6bd0:; */
        /* if (0 == 0) goto L_7090; */
        /* field_0x2e4 = 0; */
        /* field_0x580 = fopAcM_searchActorAngleY(_savegpr_20(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), this->field_0x5b38); */
        /* field_0x2d6 = 0; */
        /* anm_init(_savegpr_20(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), 32, 2, 17); */
        /* field_0x254 = 0; */
        /* field_0x2bd = (this->field_0x2bd + 1); */
        /* goto L_7090; */
        /* if (this->field_0x2d6 != 0) goto L_6c90; */
        /* cM_rndFX(fopAcM_searchActorAngleY(_savegpr_20(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), this->field_0x5b38)); */
        /* nezumi_move(_savegpr_20(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* field_0x2d6 = 10; */
        /* L_6c90:; */
        /* fopAcM_searchActorDistanceXZ(_savegpr_20(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), this->field_0x5b38); */
        /* if (/ * bge * / 1) goto L_6ce0; */
        /* Set((_savegpr_20(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 504), (this->field_0x5b38 + 504), _savegpr_20(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* if (((cBgS*)(((char*)&g_dComIfG_gameInfo + 4768)))->LineCross() != 0) goto L_6ce0; */
        /* L_6ce0:; */
        /* if (fopAcIt_Judge(((char*)&fpcSch_JudgeByID__FPvPv + 0)) == 0) goto L_6d34; */
        /* if (this->field_0x8 != 296) goto L_6d3c; */
        /* if ((((daBomb_c*)(fopAcIt_Judge(((char*)&fpcSch_JudgeByID__FPvPv + 0))))->getBombRestTime() & 65535) >= (this->field_0x512 + 30)) goto L_6d3c; */
        /* goto L_6d3c; */
        /* L_6d34:; */
        /* field_0x2c4 = -1; */
        /* L_6d3c:; */
        /* if (1 == 0) goto L_7090; */
        /* field_0x254 = 0; */
        /* field_0x580 = fopAcM_searchActorAngleY(_savegpr_20(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), this->field_0x5b38); */
        /* field_0x2bd = (this->field_0x2bd + 1); */
        /* goto L_7090; */
        /* cLib_addCalcAngleS2((_savegpr_20(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 518), this->field_0x580, 1, 8192); */
        /* if ((cLib_distanceAngleS(this->field_0x580, this->field_0x206) & 65535) >= 4096) goto L_7090; */
        /* field_0x2bc = 3; */
        /* field_0x2bd = 36; */
        /* goto L_7090; */
        /* if (this->field_0x2d4 != 0) goto L_7090; */
        /* anm_init(_savegpr_20(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), 31, 2, 16); */
        /* field_0x254 = 0; */
        /* field_0x2d6 = 10; */
        /* if (this->field_0x2c8 != 0) goto L_6e00; */
        /* fpcEx_Search(((char*)&s_ana_sub__FPvPv + 0), _savegpr_20(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* L_6e00:; */
        /* field_0x2bd = (this->field_0x2bd + 1); */
        /* if (this->field_0x2c8 == 0) goto L_7090; */
        /* if ((this->field_0x2bd + 1) == 65535) goto L_7090; */
        fopAcIt_Judge(((char*)&fpcSch_JudgeByID__FPvPv + 0));
        /* if (this->field_0x2e8 != 21) goto L_6e94; */
        /* if (/ * beq * / 1) goto L_6e88; */
        /* anm_init(_savegpr_20(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), 31, 2, 16); */
        /* field_0x20c = 0; */
        /* goto L_6e94; */
        /* L_6e88:; */
        /* field_0x20c = (this->field_0x20c + 9472); */
        /* L_6e94:; */
        /* if (this->field_0x2d6 != 0) goto L_6f1c; */
        /* field_0x2d6 = 10; */
        /* if (nezumi_move(_savegpr_20(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), fopAcM_searchActorAngleY(_savegpr_20(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), fopAcIt_Judge(((char*)&fpcSch_JudgeByID__FPvPv + 0)))) != 0) goto L_6f1c; */
        /* if (this->field_0x2e8 == 21) goto L_6f1c; */
        /* if (/ * beq * / 1) goto L_6f1c; */
        /* if (/ * beq * / 1) goto L_6f1c; */
        /* field_0x224 = (this->field_0xa0 + this->field_0x4d0); */
        /* anm_init(_savegpr_20(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), 21, 0, 7); */
        /* L_6f1c:; */
        /* fopAcM_searchActorDistance(_savegpr_20(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), fopAcIt_Judge(((char*)&fpcSch_JudgeByID__FPvPv + 0))); */
        /* if (/ * bge * / 1) goto L_7090; */
        /* if (((this->field_0x1fc - this->field_0x1fc) * (this->field_0x1fc - this->field_0x1fc)) <= this->field_0x14) goto L_6fac; */
        /* L_6fac:; */
        /* if (this->field_0x1c >= this->field_0x70) goto L_7090; */
        /* field_0x280 = 0; */
        /* field_0x206 = fopAcM_searchActorAngleY(_savegpr_20(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), fopAcIt_Judge(((char*)&fpcSch_JudgeByID__FPvPv + 0))); */
        /* field_0x2bc = 3; */
        /* field_0x2bd = 35; */
        /* if (/ * beq * / 1) goto L_7058; */
        /* if (/ * beq * / 1) goto L_7034; */
        /* if (/ * beq * / 1) goto L_7034; */
        /* L_7034:; */
        /* if (/ * beq * / 1) goto L_7058; */
        /* if (/ * beq * / 1) goto L_7058; */
        /* L_7058:; */
        __dt();
        /* goto L_71c0; */
        /* L_7090:; */
        /* cLib_addCalcAngleS2((_savegpr_20(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 518), this->field_0x580, 1, 4096); */
        /* if (this->field_0x2c0 == 0) goto L_710c; */
        /* bomb_catch_SUB(_savegpr_20(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* if (body_atari_check(_savegpr_20(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)) == 0) goto L_710c; */
        /* if (this->field_0x2c0 == 65535) goto L_710c; */
        fopAcIt_Judge(((char*)&fpcSch_JudgeByID__FPvPv + 0));
        /* if (/ * beq * / 1) goto L_710c; */
        ((daBomb_c*)(fopAcIt_Judge(((char*)&fpcSch_JudgeByID__FPvPv + 0))))->setBombRestTime(1);
        /* field_0x214 = 0; */
        /* field_0x218 = 0; */
        /* field_0x21c = 0; */
        /* L_710c:; */
        /* if (/ * beq * / 1) goto L_718c; */
        /* if (/ * beq * / 1) goto L_7168; */
        /* if (/ * beq * / 1) goto L_7168; */
        /* L_7168:; */
        /* if (/ * beq * / 1) goto L_718c; */
        /* if (/ * beq * / 1) goto L_718c; */
        /* L_718c:; */
        /* L_71c0:; */
        return _restgpr_20(__dt());
}

/* 000072D8-00007B50       .text daNZ_Execute__FP8nz_class */
static BOOL daNZ_Execute(nz_class*) {
        /* _savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* field_0x46c = 0; */
        /* field_0x470 = 0; */
        /* field_0x474 = 0; */
        /* tail_control(_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* if (enemy_ice((_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 2428)) == 0) goto L_72d8; */
        PSMTXCopy(((char*)&now__14mDoMtx_stack_c + 0), (this->field_0x50 + 36));
        /* ((mDoExt_McaMorf*)(this->field_0x2b8))->calc(); */
        /* enemy_fire_remove((_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 3380)); */
        /* ((dScnKy_env_light_c*)(((char*)&g_env_light + 0)))->settingTevStruct(0, (_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 504), (_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 268)); */
        /* field_0x260 = 0; */
        /* field_0x264 = 0; */
        /* field_0x268 = 0; */
        /* field_0x264 = (this->field_0x264 + this->field_0x8c); */
        /* field_0x274 = 0; */
        /* field_0x278 = 0; */
        /* field_0x27c = 0; */
        /* field_0x278 = (this->field_0x278 + this->field_0x8c); */
        return 1;
        /* L_72d8:; */
        /* if (/ * beq * / 1) goto L_72fc; */
        /* L_72fc:; */
        /* field_0x2f4 = 0; */
        /* if (this->field_0x2b5 != 0) goto L_7320; */
        /* field_0x2f0 = 0; */
        /* L_7320:; */
        /* if (this->field_0x2bc == 3) goto L_737c; */
        /* if (/ * bge * / 1) goto L_7348; */
        /* if (this->field_0x2bc == 1) goto L_7364; */
        /* if (/ * bge * / 1) goto L_7370; */
        /* if (this->field_0x2bc >= 0) goto L_7358; */
        /* goto L_73c0; */
        /* L_7348:; */
        /* if (this->field_0x2bc == 5) goto L_73b0; */
        /* if (/ * bge * / 1) goto L_73c0; */
        /* goto L_739c; */
        /* L_7358:; */
        /* nz_move(_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* goto L_73c0; */
        /* L_7364:; */
        /* nz2_move(_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* goto L_73c0; */
        /* L_7370:; */
        /* nz3_move(_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* goto L_73c0; */
        /* L_737c:; */
        /* nz4_move(_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* if (this->field_0x2b5 != 0) goto L_73c0; */
        /* field_0x2f0 = 0; */
        /* goto L_73c0; */
        /* L_739c:; */
        /* field_0x2f4 = 0; */
        /* nz5_move(_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* goto L_73c0; */
        /* L_73b0:; */
        /* field_0x2f4 = 0; */
        /* nz6_move(_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* L_73c0:; */
        /* if (this->field_0x2bc == 0) goto L_73d4; */
        /* if (this->field_0x2bc != 3) goto L_73ec; */
        /* L_73d4:; */
        /* L_73ec:; */
        /* if (this->field_0x2bd == 35) goto L_7440; */
        /* if (this->field_0x2bc == 4) goto L_7440; */
        /* if (this->field_0x2bc == 1) goto L_7440; */
        /* body_atari_check(_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* if (this->field_0x214 >= this->field_0x30) goto L_7440; */
        /* cLib_addCalc2((_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 532)); */
        /* field_0x218 = 0; */
        /* field_0x21c = 0; */
        /* L_7440:; */
        /* mDoMtx_YrotS(this->field_0x0, this->field_0x206); */
        /* mDoMtx_XrotM(this->field_0x0, this->field_0x204); */
        /* if (this->field_0x2bc == 5) goto L_74a8; */
        /* if (this->field_0x2bc == 1) goto L_74a8; */
        /* if (this->field_0x2bc == 2) goto L_74a8; */
        /* if (this->field_0x2bc == 4) goto L_74a8; */
        /* if (this->field_0x2bc != 3) goto L_74f4; */
        /* L_74a8:; */
        MtxPosition();
        /* field_0x220 = 0; */
        /* field_0x228 = 0; */
        /* field_0x258 = 0; */
        /* field_0x224 = (this->field_0x224 + this->field_0x258); */
        /* if (this->field_0x224 >= this->field_0xec) goto L_7500; */
        /* field_0x224 = 0; */
        /* goto L_7500; */
        /* L_74f4:; */
        MtxPosition();
        /* L_7500:; */
        /* if ((this->field_0x320 - this->field_0x88) <= this->field_0x1fc) goto L_7520; */
        /* fopAcM_delete(_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* L_7520:; */
        /* fopAcM_posMove(_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), (_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 2044)); */
        /* if (this->field_0x2bc == 0) goto L_7550; */
        /* if (this->field_0x2bc == 3) goto L_7550; */
        /* L_7550:; */
        /* if (this->field_0x2bd == 34) goto L_7564; */
        /* if (this->field_0x2bd != 78) goto L_756c; */
        /* L_7564:; */
        /* L_756c:; */
        /* if (this->field_0x2bc != 3) goto L_7580; */
        /* if (this->field_0x2bd == 35) goto L_7580; */
        /* L_7580:; */
        /* naraku_water_check(_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* if (1 == 0) goto L_75e0; */
        /* ((dBgS_AcchCir*)((_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1528)))->SetWall(); */
        /* BG_check(_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* if (this->field_0x2bc == 1) goto L_75bc; */
        /* if (this->field_0x2bc != 4) goto L_75e4; */
        /* L_75bc:; */
        /* if (this->field_0x2b5 != 0) goto L_75e4; */
        /* goto L_75e4; */
        /* L_75e0:; */
        /* L_75e4:; */
        /* cLib_addCalc2((_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 832)); */
        /* if (this->field_0x2bc != 0) goto L_7710; */
        /* if (this->field_0x2bd != 3) goto L_7710; */
        /* if (abs(this->field_0x204) <= 4096) goto L_7708; */
        __mi();
        PSVECSquareMag();
        /* if (/ * ble * / 1) goto L_76c0; */
        /* L_76c0:; */
        /* if (this->field_0x8 >= this->field_0x30) goto L_7710; */
        /* field_0x2be = (this->field_0x2be + 1); */
        /* if (this->field_0x2be <= 10) goto L_7710; */
        /* field_0x2bc = 2; */
        /* field_0x2bd = 0; */
        /* field_0x210 = 0; */
        /* field_0x224 = 0; */
        /* field_0x254 = 0; */
        /* goto L_7710; */
        /* L_7708:; */
        /* field_0x2be = 0; */
        /* L_7710:; */
        /* mDoMtx_YrotS(this->field_0x0, this->field_0x206); */
        /* mDoMtx_XrotM(this->field_0x0, this->field_0x204); */
        /* mDoMtx_ZrotM(this->field_0x0, this->field_0x208); */
        /* cLib_addCalc2((_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 748)); */
        MtxPosition();
        __pl();
        /* field_0x304 = 0; */
        /* field_0x308 = 0; */
        /* field_0x30c = 0; */
        /* if (/ * beq * / 1) goto L_77d4; */
        /* ((dBgS*)(((char*)&g_dComIfG_gameInfo + 4768)))->GetMtrlSndId((_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1824)); */
        /* goto L_77d8; */
        /* L_77d4:; */
        /* L_77d8:; */
        /* ((mDoExt_McaMorf*)(this->field_0x2b8))->play((_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 608), 0, dComIfGp_getReverb((this->field_0x20a & 255))); */
        /* ((mDoExt_McaMorf*)(this->field_0x2b8))->calc(); */
        /* ((cM3dGCyl*)((_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 2384)))->SetC((_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 772)); */
        /* ((cM3dGCyl*)((_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 2384)))->SetH(); */
        /* ((cM3dGCyl*)((_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 2384)))->SetR(); */
        /* ((cCcS*)(((char*)&g_dComIfG_gameInfo + 9892)))->Set((_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 2104)); */
        /* field_0x260 = 0; */
        /* field_0x264 = 0; */
        /* field_0x268 = 0; */
        /* field_0x264 = (this->field_0x264 + this->field_0x8c); */
        /* field_0x274 = 0; */
        /* field_0x278 = 0; */
        /* field_0x27c = 0; */
        /* field_0x278 = (this->field_0x278 + this->field_0x2f4); */
        /* field_0x18 = 0; */
        /* field_0x1c = 0; */
        /* field_0x20 = 0; */
        PSMTXTrans(((char*)&now__14mDoMtx_stack_c + 0));
        /* mDoMtx_YrotM(((char*)&now__14mDoMtx_stack_c + 0), this->field_0x20e); */
        /* mDoMtx_XrotM(((char*)&now__14mDoMtx_stack_c + 0), this->field_0x20c); */
        /* ((mDoMtx_stack_c*)(mDoMtx_ZrotM(((char*)&now__14mDoMtx_stack_c + 0), this->field_0x210)))->transM(); */
        PSMTXCopy(((char*)&now__14mDoMtx_stack_c + 0), (this->field_0x50 + 36));
        /* ((dScnKy_env_light_c*)(((char*)&g_env_light + 0)))->settingTevStruct(0, (_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 504), (_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 268)); */
        /* ((mDoExt_McaMorf*)(this->field_0x2b8))->calc(); */
        /* enemy_fire((_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 3380)); */
        /* if (this->field_0x42b == 0) goto L_7a24; */
        fopAcIt_Judge(((char*)&fpcSch_JudgeByID__FPvPv + 0));
        /* if (/ * beq * / 1) goto L_7a24; */
        /* mDoMtx_YrotS(this->field_0x0, this->field_0x20e); */
        MtxPosition();
        /* if (this->field_0x2b5 == 0) goto L_79d0; */
        /* goto L_79d8; */
        /* L_79d0:; */
        /* L_79d8:; */
        /* field_0x1f8 = (this->field_0x28 + (this->field_0x334 - (this->field_0x50 * (this->field_0x334 - this->field_0x328)))); */
        /* field_0x1fc = (this->field_0x2c + (this->field_0x338 - (this->field_0x50 * (this->field_0x338 - this->field_0x32c)))); */
        /* field_0x200 = (this->field_0x30 + (this->field_0x33c - (this->field_0x50 * (this->field_0x33c - this->field_0x330)))); */
        /* L_7a24:; */
        return _restgpr_28(1);
}

/* 00007B50-00007B58       .text daNZ_IsDelete__FP8nz_class */
static BOOL daNZ_IsDelete(nz_class*) {
    return 1;
}

/* 00007B58-00007BE0       .text daNZ_Delete__FP8nz_class */
static BOOL daNZ_Delete(nz_class*) {
    /* dComIfG_resDelete((arg0 + 684), ((char*)&@stringBase0 + 0), arg2); */
    if (this->field_0xf0 != 0) {
        /* ((mDoExt_McaMorf*)(this->field_0x2b8))->stopZelAnime(); */
    }
    ((dPa_rippleEcallBack*)((arg0 + 1452)))->end();
    enemy_fire_remove((arg0 + 3380));
    return 1;
}

/* 00007BE0-00007EB0       .text useHeapInit__FP10fopAc_ac_c */
static BOOL useHeapInit(fopAc_ac_c*) {
    /* _savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
    __nw(180);
    if (/* beq */ 1) {
        ((dRes_control_c*)(((char*)&@stringBase0 + 0)))->getRes(35);
    }
    /* field_0x2b8 = __ct(((dRes_control_c*)(((char*)&@stringBase0 + 0)))->getRes(38), 1, ((dRes_control_c*)(((char*)&@stringBase0 + 0)))->getRes(38), 0, 0, ((dRes_control_c*)(((char*)&@stringBase0 + 0)))->getRes(35), 2, 0); */
    if (this->field_0x2b8 != 0) {
        /* if (this->field_0x50 == 0) goto L_7bd4; */
    }
    return 0;
    /* L_7bd4:; */
    /* field_0x14 = _savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
    return 0;
    /* L_7be0:; */
    if ((0 & 65535) != 1) {
        /* if ((0 & 65535) == 9) goto L_7c10; */
    }
    /* field_0x8 = 0; */
    /* L_7c10:; */
    if ((0 & 65535) == 11) {
        /* field_0x8 = 0; */
    }
    if ((0 & 65535) != 18) {
        /* if ((0 & 65535) == 21) goto L_7c78; */
    }
    /* field_0x8 = 0; */
    /* L_7c78:; */
    /* if (((0 + 1) & 65535) >= this->field_0x28) goto L_7be0; */
    if (this->field_0x2b5 == 0) {
        /* if (((mDoExt_3DlineMat1_c*)((_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1072)))->init(1, 10, ((dRes_control_c*)(((char*)&@stringBase0 + 0)))->getRes(46, ((char*)&g_dComIfG_gameInfo + -16460), 64), 0) == 0) goto L_7d3c; */
        return 0;
    }
    /* if (((mDoExt_3DlineMat1_c*)((_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1072)))->init(1, 10, ((dRes_control_c*)(((char*)&@stringBase0 + 0)))->getRes(45, ((char*)&g_dComIfG_gameInfo + -16460), 64), 0) == 0) { */
        /* return 0; */
    /* L_7d3c:; */
    /* field_0x5f4 = ((dRes_control_c*)(((char*)&@stringBase0 + 0)))->getRes(((char*)&nz_bmt_idx + 0), ((char*)&g_dComIfG_gameInfo + -16460), 64); */
    if (this->field_0x5f4 == 0) {
        return 0;
    }
    /* return _restgpr_28(((mDoExt_invisibleModel*)((_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 3932)))->create(this->field_0x50)); */
}

/* 00007EB0-000081AC       .text daNZ_CreateInit__FP8nz_class */
void daNZ_CreateInit(nz_class*) {
    /* Nonmatching */
    static dCcD_SrcCyl body_cyl_src = {
        // dCcD_SrcGObjInf
        {
            /* Flags             */ 0,
            /* SrcObjAt  Type    */ AT_TYPE_UNK800,
            /* SrcObjAt  Atp     */ 1,
            /* SrcObjAt  SPrm    */ cCcD_AtSPrm_Set_e | cCcD_AtSPrm_VsPlayer_e,
            /* SrcObjTg  Type    */ AT_TYPE_ALL & ~AT_TYPE_WATER & ~AT_TYPE_UNK20000 & ~AT_TYPE_WIND & ~AT_TYPE_UNK400000 & ~AT_TYPE_LIGHT,
            /* SrcObjTg  SPrm    */ cCcD_TgSPrm_Set_e | cCcD_TgSPrm_IsEnemy_e,
            /* SrcObjCo  SPrm    */ cCcD_CoSPrm_Set_e | cCcD_CoSPrm_IsPlayer_e | cCcD_CoSPrm_VsGrpAll_e,
            /* SrcGObjAt Se      */ dCcG_SE_UNK6,
            /* SrcGObjAt HitMark */ dCcG_AtHitMark_None_e,
            /* SrcGObjAt Spl     */ dCcG_At_Spl_UNK0,
            /* SrcGObjAt Mtrl    */ 0,
            /* SrcGObjAt SPrm    */ 0,
            /* SrcGObjTg Se      */ 0,
            /* SrcGObjTg HitMark */ 0,
            /* SrcGObjTg Spl     */ dCcG_Tg_Spl_UNK0,
            /* SrcGObjTg Mtrl    */ 0,
            /* SrcGObjTg SPrm    */ 0,
            /* SrcGObjCo SPrm    */ 0,
        },
        // cM3dGCylS
        {{
            /* Center */ {0.0f, 0.0f, 0.0f},
            /* Radius */ 50.0f,
            /* Height */ 20.0f,
        }},
    };
}

/* 000081AC-00008294       .text daNZ_Create__FP10fopAc_ac_c */
static cPhs_State daNZ_Create(fopAc_ac_c*) {
        /* if (/ * bne * / 1) goto L_80f0; */
        /* if (arg0 == 0) goto L_80e4; */
        __ct();
        /* L_80e4:; */
        /* L_80f0:; */
        /* if (dComIfG_resLoad((arg0 + 684), ((char*)&@stringBase0 + 0)) != 4) goto L_8180; */
        /* field_0x979 = (this->field_0xb0 >> 24); */
        /* if (this->field_0x2b5 != 255) goto L_8140; */
        /* field_0x2b5 = 0; */
        /* L_8140:; */
        /* if (this->field_0x2b4 != 255) goto L_8154; */
        /* field_0x2b4 = 0; */
        /* L_8154:; */
        /* if (fopAcM_entrySolidHeap(arg0, ((char*)&useHeapInit__FP10fopAc_ac_c + 0), 12800) != 0) goto L_8178; */
        return 5;
        /* L_8178:; */
        daNZ_CreateInit(arg0);
        /* L_8180:; */
        return dComIfG_resLoad((arg0 + 684), ((char*)&@stringBase0 + 0));

static actor_method_class l_daNZ_Method = {
    (process_method_func)daNZ_Create,
    (process_method_func)daNZ_Delete,
    (process_method_func)daNZ_Execute,
    (process_method_func)daNZ_IsDelete,
    (process_method_func)daNZ_Draw,
};

actor_process_profile_definition g_profile_NZ = {
    /* Layer ID     */ fpcLy_CURRENT_e,
    /* List ID      */ 0x0007,
    /* List Prio    */ fpcPi_CURRENT_e,
    /* Proc Name    */ fpcNm_NZ_e,
    /* Proc SubMtd  */ &g_fpcLf_Method.base,
    /* Size         */ sizeof(nz_class),
    /* Size Other   */ 0,
    /* Parameters   */ 0,
    /* Leaf SubMtd  */ &g_fopAc_Method.base,
    /* Draw Prio    */ fpcDwPi_NZ_e,
    /* Actor SubMtd */ &l_daNZ_Method,
    /* Status       */ fopAcStts_SHOWMAP_e | fopAcStts_CULL_e | fopAcStts_UNK40000_e | fopAcStts_UNK80000_e,
    /* Group        */ fopAc_ENEMY_e,
    /* Cull Type    */ fopAc_CULLBOX_0_e,
};

/* 由 fix_decomp_braces.py 补齐：反编译产物末尾缺 1 个 } */
}
