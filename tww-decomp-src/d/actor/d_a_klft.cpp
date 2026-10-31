/**
 * d_a_klft.cpp
 * Object - Forbidden Woods - Lift (moving wooden platform)
 */

#include "d/dolzel_rel.h" // IWYU pragma: keep
#include "d/actor/d_a_klft.h"
#include "m_Do/m_Do_ext.h"
#include "d/d_cc_d.h"

/* 00000078-00000374       .text ride_call_back__FP4dBgWP10fopAc_ac_cP10fopAc_ac_c */
static void ride_call_back(dBgW*, fopAc_ac_c*, fopAc_ac_c*) {
    /* _savegpr_29(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
    /* mDoMtx_YrotS(this->field_0x0); */
    __mi();
    MtxPosition();
    __mi();
    MtxPosition();
    if (this->field_0x8 == 169) {
        /* field_0x9ec = 10; */
    }
    /* field_0x3bc = 0; */
    /* if (((this->field_0x30 * this->field_0x30) + (this->field_0x38 * this->field_0x38)) < this->field_0x4) { */
    cM_atan2s(cLib_addCalcAngleS2());
    cLib_addCalcAngleS2();
    if (/* bgt */ 1) {
        /* if (/ * ble * / 1) goto L_2e4; */
    }
    if (/* ble */ 1) {
        /* field_0x2e8 = 0; */
    }
    if (/* ble */ 1) {
        /* field_0x2f0 = 0; */
    }
    if (/* ble */ 1) {
        /* if (/ * bge * / 1) goto L_2a4; */
        /* field_0x2dc = 0; */
    }
    /* L_2a4:; */
    if (/* ble */ 1) {
        /* if (/ * bge * / 1) goto L_2e4; */
        /* field_0x2e4 = 0; */
    }
    /* L_2e4:; */
    return _restgpr_29(((char*)&g_regHIO + 0));
}

/* 000003B0-0000046C       .text nodeCallBack_main__FP7J3DNodei */
static BOOL nodeCallBack_main(J3DNode*, int) {
    /* _savegpr_29(arg0, int, arg2, arg3, arg4, arg5, arg6, arg7); */
    if (/* bne */ 1) {
        /* if (this->field_0x14 != 0) goto L_3d8; */
        /* if (this->field_0x18 == 1) goto L_3d8; */
        /* PSMTXCopy((this->field_0x8c + (this->field_0x18 * 48)), this->field_0x0); */
        /* mDoMtx_XrotM(this->field_0x0, this->field_0x3b0); */
        PSMTXCopy(this->field_0x0, (this->field_0x8c + (this->field_0x18 * 48)));
        PSMTXCopy(this->field_0x0, ((char*)&mCurrentMtx__6J3DSys + 0));
    }
    /* L_3d8:; */
    return _restgpr_29(1);
}

/* 0000046C-00000520       .text nodeCallBack__FP7J3DNodei */
static BOOL nodeCallBack(J3DNode*, int) {
    /* _savegpr_29(arg0, int, arg2, arg3, arg4, arg5, arg6, arg7); */
    if (/* bne */ 1) {
        /* if (this->field_0x14 != 0) goto L_48c; */
        /* PSMTXCopy((this->field_0x8c + (this->field_0x18 * 48)), this->field_0x0); */
        /* mDoMtx_YrotM(this->field_0x0, this->field_0x2c0); */
        PSMTXCopy(this->field_0x0, (this->field_0x8c + (this->field_0x18 * 48)));
        PSMTXCopy(this->field_0x0, ((char*)&mCurrentMtx__6J3DSys + 0));
    }
    /* L_48c:; */
    return _restgpr_29(1);
}

/* 00000520-000005A0       .text himo_Draw__FP10klft_class */
void himo_Draw(klft_class*) {
    ((mDoExt_3DlineMat1_c*)((arg0 + 832)))->update(20);
    return ((mDoExt_3DlineMatSortPacket*)((((((char*)&g_dComIfG_gameInfo + 0) + ((arg0 + 832) * 20)) + 24696) + 23824)))->setMat((arg0 + 832));
}

/* 000005A0-00000688       .text daKlft_Draw__FP10klft_class */
static BOOL daKlft_Draw(klft_class*) {
    /* ((dScnKy_env_light_c*)(((char*)&g_env_light + 0)))->settingTevStruct(1, (_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 504), (_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 268)); */
    /* ((dScnKy_env_light_c*)(((char*)&g_env_light + 0)))->setLightTevColorType(this->field_0x29c, (_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 268)); */
    /* mDoExt_modelUpdateDL(this->field_0x29c); */
    /* himo_Draw(_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
    /* L_5c4:; */
    /* ((mDoExt_McaMorf*)(((dScnKy_env_light_c*)(((char*)&g_env_light + 0)))->setLightTevColorType(this->field_0x50, (_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 268))))->updateDL(); */
    /* if ((0 + 1) >= 2) goto L_5c4; */
    return _restgpr_27(1);
}

/* 00000688-00000F24       .text klft_move__FP10klft_class */
void klft_move(klft_class*) {
        /* _savegpr_26(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* field_0x298 = (this->field_0x298 + 1); */
        /* if (this->field_0x9ec == 0) goto L_670; */
        /* goto L_684; */
        /* L_670:; */
        /* L_684:; */
        /* if (this->field_0x424 != 0) goto L_6ac; */
        /* if (this->field_0x7b0 != 0) goto L_6ac; */
        /* if (this->field_0x8dc == 0) goto L_7f8; */
        /* L_6ac:; */
        /* if (this->field_0x20e == 0) goto L_6f0; */
        mDoMtx_YrotS(this->field_0x0, ((this->field_0x206 - ((this->field_0x20e + -32768) & 65535)) & 65535));
        /* goto L_748; */
        /* L_6f0:; */
        /* if (this->field_0x7b0 == 0) goto L_714; */
        mDoMtx_YrotS(this->field_0x0, -32768);
        /* goto L_728; */
        /* L_714:; */
        mDoMtx_YrotS(this->field_0x0, 0);
        /* L_728:; */
        /* L_748:; */
        MtxPosition();
        /* field_0x3c8 = 0; */
        MtxPosition();
        /* field_0x3b2 = (this->field_0x8e + 60); */
        mDoMtx_YrotS(this->field_0x0, ((this->field_0x20e + -32768) & 65535));
        MtxPosition();
        /* L_7f8:; */
        /* if (this->field_0x3b2 != 40) goto L_844; */
        /* ((JAIZelBasic*)(this->field_0x0))->seStart(14369, (_savegpr_26(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 504), 0, dComIfGp_getReverb((this->field_0x20a & 255)), 0); */
        /* L_844:; */
        /* cLib_addCalc2((_savegpr_26(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 964)); */
        /* cLib_addCalc0((_savegpr_26(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 968), ((char*)&g_regHIO + 0)); */
        /* field_0x3c0 = (this->field_0x3c0 + this->field_0x3c4); */
        /* if (this->field_0x3c0 <= this->field_0x58) goto L_8a8; */
        /* field_0x3c0 = 0; */
        /* field_0x3c4 = 0; */
        /* goto L_8c0; */
        /* L_8a8:; */
        /* if (this->field_0x3c0 >= this->field_0x4c) goto L_8c0; */
        /* field_0x3c0 = 0; */
        /* field_0x3c4 = 0; */
        /* L_8c0:; */
        /* field_0x3b0 = 0; */
        /* if (/ * ble * / 1) goto L_a04; */
        /* if (__cvt_fp2unsigned(((char*)&g_regHIO + 0)) <= 100) goto L_928; */
        /* L_928:; */
        /* L_938:; */
        /* ((JAIZelBasic*)(this->field_0x0))->seStart(25009, (_savegpr_26(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + (0 + 680)), 100, dComIfGp_getReverb((this->field_0x20a & 255)), 0); */
        /* if ((0 + 1) < 2) goto L_938; */
        /* field_0x3b4 = 0; */
        /* if (this->field_0x3b4 <= (this->field_0x60 + this->field_0x10)) goto L_a04; */
        /* field_0x3b4 = (this->field_0x3b4 - (this->field_0x60 + this->field_0x10)); */
        /* ((JAIZelBasic*)(this->field_0x0))->seStart(14370, (_savegpr_26(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 504), 100, dComIfGp_getReverb((this->field_0x20a & 255)), 0); */
        /* L_a04:; */
        /* L_a0c:; */
        /* if (this->field_0x550 == 0) goto L_a34; */
        /* def_se_set(_savegpr_26(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), ((dCcD_GObjInf*)(((_savegpr_26(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 0) + 1332)))->GetTgHitObj(), 11); */
        /* L_a34:; */
        /* if ((0 + 1) < 2) goto L_a0c; */
        /* cLib_addCalcAngleS2((_savegpr_26(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 942), 0, 10, 512); */
        /* cLib_addCalcAngleS2((_savegpr_26(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 516), 0, 10, 512); */
        /* cLib_addCalcAngleS2((_savegpr_26(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 520), 0, 10, 512); */
        /* if (this->field_0x3b2 == 0) goto L_b14; */
        /* goto L_b58; */
        /* L_b14:; */
        /* if (/ * ble * / 1) goto L_b4c; */
        /* goto L_b58; */
        /* L_b4c:; */
        /* L_b58:; */
        /* cLib_addCalc2((_savegpr_26(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 756), this->field_0x0, ((char*)&jmaSinShift + 0), this->field_0x0); */
        /* if (this->field_0x3b2 == 0) goto L_b7c; */
        /* goto L_bc0; */
        /* L_b7c:; */
        /* if (/ * ble * / 1) goto L_bb4; */
        /* goto L_bc0; */
        /* L_bb4:; */
        /* L_bc0:; */
        /* cLib_addCalc2((_savegpr_26(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 764)); */
        /* if (this->field_0x3b2 != 0) goto L_be8; */
        /* field_0x2f0 = 0; */
        /* field_0x2e8 = 0; */
        /* L_be8:; */
        /* cM_rad2s(cLib_addCalc2((_savegpr_26(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 764))); */
        /* field_0x2c4 = 0; */
        /* field_0x2cc = 0; */
        /* field_0x2c8 = 0; */
        /* if (this->field_0x3b2 == 0) goto L_ce4; */
        /* goto L_d08; */
        /* L_ce4:; */
        /* if (this->field_0x2d0 <= this->field_0x30) goto L_d04; */
        /* goto L_d08; */
        /* L_d04:; */
        /* L_d08:; */
        /* cLib_addCalc2((_savegpr_26(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 720), this->field_0x0, ((char*)&jmaSinShift + 0), ((char*)&jmaSinTable + 0)); */
        /* if (this->field_0x3b2 == 0) goto L_d2c; */
        /* goto L_d50; */
        /* L_d2c:; */
        /* if (/ * ble * / 1) goto L_d4c; */
        /* goto L_d50; */
        /* L_d4c:; */
        /* L_d50:; */
        /* cLib_addCalc2((_savegpr_26(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 728)); */
        /* if (this->field_0x3b2 != 0) goto L_d78; */
        /* field_0x2dc = 0; */
        /* field_0x2e4 = 0; */
        /* L_d78:; */
        __pl();
        __ml();
        __pl();
        /* field_0x1d0 = 0; */
        /* field_0x1d4 = 0; */
        /* field_0x1d8 = 0; */
        /* field_0x1d4 = (this->field_0x1d4 + ((this->field_0x74 + this->field_0x14) + (this->field_0x3c * ((this->field_0x74 + this->field_0x3b8) + this->field_0xc)))); */
        /* cLib_addCalc2((_savegpr_26(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 952)); */
        /* field_0x3bc = 0; */
        __pl();
        /* field_0x1f8 = 0; */
        /* field_0x1fc = 0; */
        /* field_0x200 = 0; */
        return _restgpr_26(__pl());
}

/* 00000F24-00001140       .text himo_move__FP10klft_class */
void himo_move(klft_class*) {
    /* _savegpr_24(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
    __mi();
    /* L_f5c:; */
    if (0 < 10) {
        __ml();
        __pl();
        /* field_0x0 = 0; */
        /* field_0x4 = 0; */
        /* field_0x8 = 0; */
    } else {
        __ml();
        __pl();
        /* field_0x0 = 0; */
        /* field_0x4 = 0; */
        /* field_0x8 = 0; */
    }
    cM_rad2s(__pl());
    /* field_0x4 = 0; */
    /* field_0x0 = 8; */
    /* if ((0 + 1) >= 20) goto L_f5c; */
    /* return _restgpr_24((cM_rad2s(__pl()) & 65535), this->field_0x0); */
}

/* 00001140-00001444       .text daKlft_Execute__FP10klft_class */
static BOOL daKlft_Execute(klft_class*) {
    /* _savegpr_23(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
    if (this->field_0x3b2 != 0) {
        /* field_0x3b2 = (this->field_0x3b2 + -1); */
    }
    if (this->field_0x9ec != 0) {
        /* field_0x9ec = (this->field_0x9ec + -1); */
    }
    /* field_0x4c = dKyw_get_wind_vec(); */
    /* field_0x50 = cM_atan2s(dKyw_get_wind_vec()); */
    /* field_0x54 = dKyw_get_wind_power(); */
    /* klft_move(_savegpr_23(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
    /* himo_move(_savegpr_23(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
    MtxTrans(0);
    /* mDoMtx_YrotM(this->field_0x0, this->field_0x20e); */
    /* mDoMtx_YrotM(this->field_0x0, this->field_0x3ac); */
    /* mDoMtx_XrotM(this->field_0x0, this->field_0x3ae); */
    /* mDoMtx_YrotM(this->field_0x0, ((-this->field_0x3ac) & 65535)); */
    /* mDoMtx_XrotM(this->field_0x0, this->field_0x20c); */
    /* mDoMtx_ZrotM(this->field_0x0, this->field_0x210); */
    PSMTXCopy(this->field_0x0, (this->field_0x29c + 36));
    /* PSMTXCopy(this->field_0x0, (_savegpr_23(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 780)); */
    MtxTrans(1);
    MtxPosition();
    /* ((dCcD_GStts*)((_savegpr_23(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1000)))->Move(); */
    /* ((cM3dGSph*)((_savegpr_23(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1312)))->SetC((_savegpr_23(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 928)); */
    /* ((cCcS*)(((char*)&g_dComIfG_gameInfo + 9892)))->Set((_savegpr_23(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1032)); */
    /* L_1278:; */
    /* ((cM3dGSph*)(((_savegpr_23(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 0) + 2220)))->SetC(); */
    /* ((cCcS*)(((char*)&g_dComIfG_gameInfo + 9892)))->Set(((_savegpr_23(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 0) + 1940)); */
    /* ((cM3dGCyl*)(((_savegpr_23(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 0) + 1612)))->SetC(); */
    /* ((cCcS*)(((char*)&g_dComIfG_gameInfo + 9892)))->Set(((_savegpr_23(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 0) + 1332)); */
    /* if ((0 + 1) >= 2) goto L_1278; */
    /* ((dBgW*)(this->field_0x33c))->Move(); */
    /* field_0x2c0 = 0; */
    /* L_1344:; */
    /* MtxTrans(0, this->field_0x2c0); */
    PSMTXCopy(this->field_0x0, (this->field_0x50 + 36));
    /* if ((0 + 1) >= 2) goto L_1344; */
    return _restgpr_23(1);
}

/* 00001444-0000144C       .text daKlft_IsDelete__FP10klft_class */
static BOOL daKlft_IsDelete(klft_class*) {
    return 1;
}

/* 0000144C-00001520       .text daKlft_Delete__FP10klft_class */
static BOOL daKlft_Delete(klft_class*) {
        /* dComIfG_resDelete((arg0 + 656), ((char*)&@stringBase0 + 0), arg2); */
        /* if (this->field_0xf0 == 0) goto L_13f8; */
        /* ((cBgS*)(((char*)&g_dComIfG_gameInfo + 4768)))->Release(this->field_0x33c); */
        /* L_13f8:; */
        /* if (this->field_0x2c3 == 0) goto L_1448; */
        /* if (this->field_0x3c0 != this->field_0x0) goto L_1434; */
        ((dSv_info_c*)(((char*)&g_dComIfG_gameInfo + 0)))->onSwitch(this->field_0x2c3, (this->field_0x20a & 255));
        /* goto L_1448; */
        /* L_1434:; */
        ((dSv_info_c*)(((char*)&g_dComIfG_gameInfo + 0)))->offSwitch();
        /* L_1448:; */
        /* ((JAIZelBasic*)(this->field_0x0))->seDeleteObject((arg0 + 680)); */
        /* ((JAIZelBasic*)(this->field_0x0))->seDeleteObject((arg0 + 692)); */
        return 1;
}

/* 00001520-000017C4       .text CallbackCreateHeap__FP10fopAc_ac_c */
static BOOL CallbackCreateHeap(fopAc_ac_c*) {
    /* _savegpr_26(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
    /* field_0x29c = mDoExt_J3DModel(((dRes_control_c*)(((char*)&@stringBase0 + 0)))->getRes(5), 0); */
    if (this->field_0x29c == 0) {
        return 0;
    }
    /* field_0x14 = _savegpr_26(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
    /* goto L_1528; */
    /* L_1508:; */
    if ((0 & 65535) == 1) {
        /* field_0x8 = 0; */
    }
    /* L_1528:; */
    /* if (((0 + 1) & 65535) >= this->field_0x28) goto L_1508; */
    __nw(188);
    if (/* beq */ 1) {
    }
    /* field_0x33c = __ct(); */
    if (this->field_0x33c == 0) {
        ((JUTAssertion*)(((JUTAssertion*)(__ct()))->getSDevice()))->showAssert(((char*)&@stringBase0 + 5), 835, ((char*)&@stringBase0 + 18));
        OSPanic(((char*)&@stringBase0 + 5), 835, ((char*)&@stringBase0 + 37));
    }
    /* ((cBgW*)(this->field_0x33c))->Set(((dRes_control_c*)(((char*)&@stringBase0 + 0)))->getRes(9), 1, (_savegpr_26(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 780)); */
    /* field_0xa8 = 0; */
    /* field_0xb0 = 0; */
    /* if (((mDoExt_3DlineMat1_c*)((_savegpr_26(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 832)))->init(1, 20, ((dRes_control_c*)(((char*)&@stringBase0 + 0)))->getRes(12), 1) == 0) { */
        /* return 0; */
    /* L_1634:; */
    __nw(180);
    if (/* beq */ 1) {
        __ct(((dRes_control_c*)(((char*)&@stringBase0 + 0)))->getRes(6), 1, ((dRes_control_c*)(((char*)&@stringBase0 + 0)))->getRes(6), 0, 0, 0, 2, 0);
    }
    /* field_0x14 = _savegpr_26(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
    /* goto L_16ec; */
    /* L_16cc:; */
    if ((0 & 65535) == 3) {
        /* field_0x8 = 0; */
    }
    /* L_16ec:; */
    /* if (((0 + 1) & 65535) >= this->field_0x28) goto L_16cc; */
    /* if ((0 + 1) >= 2) goto L_1634; */
    return _restgpr_26(1, this->field_0x50, this->field_0x4, (0 + 1));

/* 000017C4-00001C78       .text daKlft_Create__FP10fopAc_ac_c */
static cPhs_State daKlft_Create(fopAc_ac_c*) {
    /* Nonmatching */
    static dCcD_SrcSph utiwa_sph_src = {
        // dCcD_SrcGObjInf
        {
            /* Flags             */ 0,
            /* SrcObjAt  Type    */ 0,
            /* SrcObjAt  Atp     */ 0,
            /* SrcObjAt  SPrm    */ cCcD_AtSPrm_Set_e | cCcD_AtSPrm_VsPlayer_e,
            /* SrcObjTg  Type    */ AT_TYPE_WIND,
            /* SrcObjTg  SPrm    */ cCcD_TgSPrm_Set_e | cCcD_TgSPrm_IsEnemy_e,
            /* SrcObjCo  SPrm    */ 0,
            /* SrcGObjAt Se      */ 0,
            /* SrcGObjAt HitMark */ dCcG_AtHitMark_None_e,
            /* SrcGObjAt Spl     */ dCcG_At_Spl_UNK0,
            /* SrcGObjAt Mtrl    */ 0,
            /* SrcGObjAt SPrm    */ 0,
            /* SrcGObjTg Se      */ 0,
            /* SrcGObjTg HitMark */ 0,
            /* SrcGObjTg Spl     */ dCcG_Tg_Spl_UNK0,
            /* SrcGObjTg Mtrl    */ 0,
            /* SrcGObjTg SPrm    */ dCcG_TgSPrm_NoConHit_e,
            /* SrcGObjCo SPrm    */ 0,
        },
        // cM3dGSphS
        {{
            /* Center */ {0.0f, 0.0f, 0.0f},
            /* Radius */ 250.0f,
        }},
    };
    static dCcD_SrcCyl p_co_cyl_src = {
        // dCcD_SrcGObjInf
        {
            /* Flags             */ 0,
            /* SrcObjAt  Type    */ 0,
            /* SrcObjAt  Atp     */ 0,
            /* SrcObjAt  SPrm    */ 0,
            /* SrcObjTg  Type    */ AT_TYPE_ALL & ~AT_TYPE_BOOMERANG & ~AT_TYPE_WATER & ~AT_TYPE_UNK20000 & ~AT_TYPE_WIND & ~AT_TYPE_UNK400000 & ~AT_TYPE_LIGHT,
            /* SrcObjTg  SPrm    */ cCcD_TgSPrm_Set_e | cCcD_TgSPrm_GrpAll_e,
            /* SrcObjCo  SPrm    */ cCcD_CoSPrm_Set_e | cCcD_CoSPrm_IsOther_e | cCcD_CoSPrm_VsGrpAll_e,
            /* SrcGObjAt Se      */ 0,
            /* SrcGObjAt HitMark */ dCcG_AtHitMark_None_e,
            /* SrcGObjAt Spl     */ dCcG_At_Spl_UNK0,
            /* SrcGObjAt Mtrl    */ 0,
            /* SrcGObjAt SPrm    */ 0,
            /* SrcGObjTg Se      */ dCcG_SE_UNK6,
            /* SrcGObjTg HitMark */ 0,
            /* SrcGObjTg Spl     */ dCcG_Tg_Spl_UNK0,
            /* SrcGObjTg Mtrl    */ 0,
            /* SrcGObjTg SPrm    */ dCcG_TgSPrm_Shield_e,
            /* SrcGObjCo SPrm    */ 0,
        },
        // cM3dGCylS
        {{
            /* Center */ {0.0f, 0.0f, 0.0f},
            /* Radius */ 40.0f,
            /* Height */ 60.0f,
        }},
    };

static actor_method_class l_daKlft_Method = {
    (process_method_func)daKlft_Create,
    (process_method_func)daKlft_Delete,
    (process_method_func)daKlft_Execute,
    (process_method_func)daKlft_IsDelete,
    (process_method_func)daKlft_Draw,
};

actor_process_profile_definition g_profile_KLFT = {
    /* Layer ID     */ fpcLy_CURRENT_e,
    /* List ID      */ 0x0003,
    /* List Prio    */ fpcPi_CURRENT_e,
    /* Proc Name    */ fpcNm_KLFT_e,
    /* Proc SubMtd  */ &g_fpcLf_Method.base,
    /* Size         */ sizeof(klft_class),
    /* Size Other   */ 0,
    /* Parameters   */ 0,
    /* Leaf SubMtd  */ &g_fopAc_Method.base,
    /* Draw Prio    */ fpcDwPi_KLFT_e,
    /* Actor SubMtd */ &l_daKlft_Method,
    /* Status       */ fopAcStts_UNK40000_e,
    /* Group        */ fopAc_ACTOR_e,
    /* Cull Type    */ fopAc_CULLBOX_CUSTOM_e,
};

/* 由 fix_decomp_braces.py 补齐：反编译产物末尾缺 2 个 } */
}}
