/**
 * d_a_gm.cpp
 * Mini-Boss - Mothula / Enemy - Mothula Larva
 */

#include "d/dolzel_rel.h" // IWYU pragma: keep
#include "d/actor/d_a_gm.h"
#include "m_Do/m_Do_ext.h"
#include "d/d_cc_d.h"

/* 000000EC-0000032C       .text nodeCallBack__FP7J3DNodei */
static BOOL nodeCallBack(J3DNode*, int) {
        /* if (/ * beq * / 1) goto L_160; */
        /* field_0x10 = 0; */
        /* field_0x20 = 0; */
        /* field_0x58 = 0; */
        /* field_0x64 = 0; */
        /* if (/ * beq * / 1) goto L_150; */
        /* field_0x10 = 0; */
        /* field_0x20 = 0; */
        /* field_0x58 = 0; */
        /* field_0x64 = 0; */
        /* if (/ * beq * / 1) goto L_150; */
        /* field_0x10 = 0; */
        /* field_0x20 = 0; */
        /* field_0x58 = 0; */
        /* field_0x64 = 0; */
        /* if (/ * beq * / 1) goto L_100; */
        /* field_0x58 = 0; */
        /* field_0x64 = 0; */
        /* if (/ * beq * / 1) goto L_d8; */
        /* field_0x64 = 0; */
        /* if (/ * beq * / 1) goto L_d8; */
        /* field_0x64 = 0; */
        /* L_d8:; */
        /* if (/ * beq * / 1) goto L_100; */
        /* field_0x58 = 0; */
        /* if (/ * beq * / 1) goto L_100; */
        /* field_0x58 = 0; */
        /* L_100:; */
        /* if (/ * beq * / 1) goto L_150; */
        /* field_0x10 = 0; */
        /* field_0x20 = 0; */
        /* if (/ * beq * / 1) goto L_130; */
        /* field_0x3c = 0; */
        /* L_130:; */
        /* if (/ * beq * / 1) goto L_144; */
        /* field_0x20 = 0; */
        /* L_144:; */
        __dt();
        /* L_150:; */
        /* if (int != 0) goto L_160; */
        /* L_160:; */
        return __dl(__dt());
}

/* 00000368-0000048C       .text draw_SUB__FP8gm_class */
void draw_SUB(gm_class*) {
    /* field_0x3c = (arg0 + 0); */
    if (/* beq */ 1) {
        /* field_0x20 = 0; */
    }
    __dt();
    if (/* ble */ 1) {
    }
    return __dl(__dt());
}

/* 0000048C-00000908       .text daGM_Draw__FP8gm_class */
static BOOL daGM_Draw(gm_class*) {
        /* ((dScnKy_env_light_c*)(((char*)&g_env_light + 0)))->setLightTevColorType(this->field_0x50, (_savegpr_25(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 268)); */
        /* dSnap_RegistFig(190, _savegpr_25(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), (_savegpr_25(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 628), this->field_0x20e); */
        /* if (this->field_0x2cd != 0) goto L_438; */
        /* if (this->field_0xbaa <= 20) goto L_438; */
        /* ((dMat_ice_c*)(this->field_0x0))->entryDL(this->field_0x2b4, -1, (_savegpr_25(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 4476)); */
        return 1;
        /* L_438:; */
        /* if (1 != 0) goto L_678; */
        /* goto L_55c; */
        /* L_44c:; */
        /* goto L_550; */
        /* L_460:; */
        /* if (0 == 4) goto L_4e4; */
        /* if (/ * bge * / 1) goto L_480; */
        /* if (0 == 2) goto L_48c; */
        /* if (/ * bge * / 1) goto L_4b8; */
        /* goto L_53c; */
        /* L_480:; */
        /* if (0 >= 6) goto L_53c; */
        /* goto L_510; */
        /* L_48c:; */
        /* if (/ * bne * / 1) goto L_4a8; */
        /* goto L_548; */
        /* L_4a8:; */
        /* goto L_548; */
        /* L_4b8:; */
        /* if (/ * bne * / 1) goto L_4d4; */
        /* goto L_548; */
        /* L_4d4:; */
        /* goto L_548; */
        /* L_4e4:; */
        /* if (this->field_0x2cc != 0) goto L_500; */
        /* goto L_548; */
        /* L_500:; */
        /* goto L_548; */
        /* L_510:; */
        /* if (/ * bne * / 1) goto L_52c; */
        /* goto L_548; */
        /* L_52c:; */
        /* goto L_548; */
        /* L_53c:; */
        /* L_548:; */
        /* L_550:; */
        /* if (this->field_0x4 != 0) goto L_460; */
        /* L_55c:; */
        /* if (((0 + 1) & 65535) < this->field_0x28) goto L_44c; */
        /* if (this->field_0x324 == 2) goto L_5ac; */
        /* if (/ * bge * / 1) goto L_58c; */
        /* if (this->field_0x324 >= 1) goto L_598; */
        /* goto L_5d4; */
        /* L_58c:; */
        /* if (this->field_0x324 >= 4) goto L_5d4; */
        /* goto L_5c0; */
        /* L_598:; */
        /* ((mDoExt_brkAnm*)(this->field_0x2c4))->entry(this->field_0x4, this->field_0x4); */
        /* goto L_5e8; */
        /* L_5ac:; */
        /* ((mDoExt_brkAnm*)(this->field_0x2c0))->entry(); */
        /* goto L_5e8; */
        /* L_5c0:; */
        /* ((mDoExt_brkAnm*)(this->field_0x2c8))->entry(); */
        /* goto L_5e8; */
        /* L_5d4:; */
        /* ((mDoExt_brkAnm*)(this->field_0x2bc))->entry(this->field_0x4, this->field_0x4); */
        /* L_5e8:; */
        /* ((mDoExt_McaMorf*)(this->field_0x2b4))->entryDL(); */
        /* if (this->field_0x324 == 2) goto L_630; */
        /* if (/ * bge * / 1) goto L_60c; */
        /* if (this->field_0x324 >= 1) goto L_618; */
        /* goto L_660; */
        /* L_60c:; */
        /* if (this->field_0x324 >= 4) goto L_660; */
        /* goto L_648; */
        /* L_618:; */
        /* ((J3DMaterialTable*)((this->field_0x4 + 88)))->removeTevRegAnimator(this->field_0x8); */
        /* goto L_680; */
        /* L_630:; */
        /* ((J3DMaterialTable*)((this->field_0x4 + 88)))->removeTevRegAnimator(this->field_0x8); */
        /* goto L_680; */
        /* L_648:; */
        /* ((J3DMaterialTable*)((this->field_0x4 + 88)))->removeTevRegAnimator(this->field_0x8); */
        /* goto L_680; */
        /* L_660:; */
        /* ((J3DMaterialTable*)((this->field_0x4 + 88)))->removeTevRegAnimator(this->field_0x8); */
        /* goto L_680; */
        /* L_678:; */
        /* ((mDoExt_McaMorf*)(this->field_0x2b4))->updateDL(); */
        /* L_680:; */
        /* goto L_6b0; */
        /* L_694:; */
        PSMTXCopy((this->field_0x8c + 0), (this->field_0x8c + 0));
        /* L_6b0:; */
        /* if ((0 + 1) < this->field_0x28) goto L_694; */
        /* goto L_6e4; */
        /* L_6c8:; */
        PSMTXCopy((this->field_0x90 + 0), (this->field_0x90 + 0));
        /* L_6e4:; */
        /* if ((0 + 1) < this->field_0x30) goto L_6c8; */
        /* field_0x448 = ((dDlst_shadowControl_c*)(((char*)&g_dComIfG_gameInfo + 24416)))->setReal(this->field_0x448, 1, this->field_0x444); */
        /* if (this->field_0x506 != 0) goto L_790; */
        return 1;
        /* L_790:; */
        /* if (/ * bne * / 1) goto L_7ac; */
        /* if (/ * beq * / 1) goto L_800; */
        /* L_7ac:; */
        /* if (/ * bne * / 1) goto L_7c8; */
        /* if (/ * beq * / 1) goto L_800; */
        /* L_7c8:; */
        /* L_7cc:; */
        __pl();
        /* if ((0 + 1) < 3) goto L_7cc; */
        /* L_800:; */
        return _restgpr_25(1);
}

/* 00000908-00000A34       .text anm_init__FP8gm_classifUcfi */
void anm_init(gm_class*, int, float, unsigned char, float, int) {
    /* _savegpr_27(arg0, int, float, char, float, int, arg6, arg7); */
    if (/* blt */ 1) {
    }
    /* return _restgpr_27(((mDoExt_McaMorf*)(this->field_0x2b4))->setAnm(((dRes_control_c*)(((char*)&@stringBase0 + 0)))->getRes())); */
}

/* 00000A34-00000D00       .text wing_cut_stat__FP8gm_class */
void wing_cut_stat(gm_class*) {
        /* _savegpr_24(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* if (this->field_0x58 != 0) goto L_a7c; */
        /* field_0x80 = 0; */
        /* field_0x4 = 0; */
        /* field_0x8 = 0; */
        /* __register_global_object(((C_@3569 + 0) + 128), ((char*)&__dt__4cXyzFv + 0), ((C_@3569 + 0) + 76)); */
        /* field_0xc = 0; */
        /* field_0x10 = 0; */
        /* field_0x14 = 0; */
        /* __register_global_object((((C_@3569 + 0) + 128) + 12), ((char*)&__dt__4cXyzFv + 0), ((C_@3569 + 0) + 92)); */
        /* field_0x18 = 0; */
        /* field_0x1c = 0; */
        /* field_0x20 = 0; */
        /* __register_global_object((((C_@3569 + 0) + 128) + 24), ((char*)&__dt__4cXyzFv + 0), ((C_@3569 + 0) + 104)); */
        /* field_0x24 = 0; */
        /* field_0x28 = 0; */
        /* field_0x2c = 0; */
        /* __register_global_object((((C_@3569 + 0) + 128) + 36), ((char*)&__dt__4cXyzFv + 0), ((C_@3569 + 0) + 116)); */
        /* field_0x58 = 1; */
        /* L_a7c:; */
        /* L_a90:; */
        /* if (/ * bne * / 1) goto L_bc4; */
        /* if (this->field_0x2d0 != 4) goto L_ab4; */
        /* L_ab4:; */
        /* mDoMtx_YrotS(this->field_0x0, this->field_0x20e); */
        MtxPosition();
        __pl();
        PSVECAdd();
        fopAcM_create(205);
        /* ((dPa_control_c*)(this->field_0x5ab8))->set(0, 13); */
        /* field_0x2cc = (this->field_0x2cc | 1); */
        /* if (this->field_0x285 != 0) goto L_bc4; */
        /* if (this->field_0x2d1 == 10) goto L_bc4; */
        return 1;
        /* L_bc4:; */
        /* if ((0 + 1) < 4) goto L_a90; */
        /* if (this->field_0x285 != 0) goto L_bf0; */
        /* if (this->field_0x2d1 != 10) goto L_bf8; */
        /* L_bf0:; */
        return 1;
        /* L_bf8:; */
        return _restgpr_24(0);
}

/* 00000D3C-0000170C       .text body_atari_check__FP8gm_class */
void body_atari_check(gm_class*) {
        /* ((dCcD_GStts*)((_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1692)))->Move(); */
        /* if (this->field_0x2e8 == 0) goto L_c98; */
        return 0;
        /* L_c98:; */
        /* if (this->field_0x2dc == 90) goto L_cac; */
        /* if (this->field_0x2dc != 91) goto L_cb4; */
        /* L_cac:; */
        return 0;
        /* L_cb4:; */
        /* if (this->field_0x6d8 != 0) goto L_cd0; */
        /* field_0x2d2 = 0; */
        return 0;
        /* L_cd0:; */
        /* if (this->field_0x2d2 == 0) goto L_ce4; */
        return 0;
        /* L_ce4:; */
        /* field_0x2d1 = 0; */
        /* ((dCcD_GObjInf*)((_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1724)))->GetTgHitObj(); */
        /* field_0x2d2 = 1; */
        /* if (/ * bne * / 1) goto L_d24; */
        return 0;
        /* L_d24:; */
        /* field_0x2e8 = 8; */
        /* if (this->field_0x10 == (0 + -32768)) goto L_10c0; */
        /* if (/ * bge * / 1) goto L_d98; */
        /* if (this->field_0x10 == 128) goto L_1010; */
        /* if (/ * bge * / 1) goto L_d80; */
        /* if (this->field_0x10 == 32) goto L_10b4; */
        /* if (/ * bge * / 1) goto L_d74; */
        /* if (this->field_0x10 == 2) goto L_e88; */
        /* goto L_12fc; */
        /* L_d74:; */
        /* if (this->field_0x10 == 64) goto L_fc4; */
        /* goto L_12fc; */
        /* L_d80:; */
        /* if (this->field_0x10 == 16384) goto L_12b0; */
        /* if (/ * bge * / 1) goto L_12fc; */
        /* if (this->field_0x10 == 512) goto L_1110; */
        /* goto L_12fc; */
        /* L_d98:; */
        /* if (this->field_0x10 == (0 + -32768)) goto L_11ac; */
        /* if (/ * bge * / 1) goto L_dd4; */
        /* if (this->field_0x10 == (0 + -32768)) goto L_1110; */
        /* if (/ * bge * / 1) goto L_dc4; */
        /* if (this->field_0x10 == 0) goto L_1054; */
        /* goto L_12fc; */
        /* L_dc4:; */
        /* if (this->field_0x10 == (0 + -32768)) goto L_1254; */
        /* goto L_12fc; */
        /* L_dd4:; */
        /* if (this->field_0x10 == (0 + -32768)) goto L_df4; */
        /* if (/ * bge * / 1) goto L_12fc; */
        /* if (this->field_0x10 == (0 + -32768)) goto L_f6c; */
        /* goto L_12fc; */
        /* L_df4:; */
        /* if (this->field_0x28d != 0) goto L_e34; */
        /* field_0x285 = 10; */
        /* ((dCcD_GObjInf*)((_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1724)))->GetTgHitObj(); */
        /* cc_at_check(_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* field_0x2d7 = (this->field_0x2d7 + 1); */
        /* L_e34:; */
        /* ((dPa_control_c*)(this->field_0x5ab8))->set(0, 635, (_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 628), 0, 0, 255, 0); */
        /* field_0x2d1 = 3; */
        /* goto L_1344; */
        /* L_e88:; */
        /* ((JAIZelBasic*)(this->field_0x0))->seStart(10246, (_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 608), 32, dComIfGp_getReverb((this->field_0x20a & 255)), 0); */
        /* field_0x2d1 = 0; */
        /* if (this->field_0x290 == 6) goto L_f60; */
        /* if ((this->field_0x290 & 16777215) == 7) goto L_f60; */
        /* if ((this->field_0x290 & 16777215) == 8) goto L_f60; */
        /* if ((this->field_0x290 & 16777215) == 9) goto L_f60; */
        /* if ((this->field_0x290 & 16777215) == 10) goto L_f60; */
        /* if ((this->field_0x290 & 16777215) == 12) goto L_f60; */
        /* if ((this->field_0x290 & 16777215) == 14) goto L_f60; */
        /* if ((this->field_0x290 & 16777215) == 5) goto L_f60; */
        /* if ((this->field_0x290 & 16777215) == 15) goto L_f60; */
        /* if ((this->field_0x290 & 16777215) == 16) goto L_f60; */
        /* if ((this->field_0x290 & 16777215) == 21) goto L_f60; */
        /* if ((this->field_0x290 & 16777215) == 23) goto L_f60; */
        /* if ((this->field_0x290 & 16777215) == 25) goto L_f60; */
        /* if ((this->field_0x290 & 16777215) == 26) goto L_f60; */
        /* if ((this->field_0x290 & 16777215) == 27) goto L_f60; */
        /* if ((this->field_0x290 & 16777215) == 30) goto L_f60; */
        /* if ((this->field_0x290 & 16777215) != 31) goto L_1344; */
        /* L_f60:; */
        /* field_0x2d1 = 1; */
        /* goto L_1344; */
        /* L_f6c:; */
        /* field_0x2d1 = 3; */
        /* if (this->field_0x2d0 == 2) goto L_1344; */
        /* if ((this->field_0x2cc & 268435455) == 15) goto L_1344; */
        /* if (this->field_0x2dc != 34) goto L_fa8; */
        /* field_0x2d1 = 9; */
        /* L_fa8:; */
        /* field_0x330 = 0; */
        /* field_0x2dc = 20; */
        /* field_0x2d0 = 2; */
        /* goto L_1344; */
        /* L_fc4:; */
        /* field_0x2d1 = 4; */
        /* ((dPa_control_c*)(this->field_0x5ab8))->set(0, 635, (_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 628), 0, 0, 255, 0); */
        /* L_1010:; */
        /* ((JAIZelBasic*)(this->field_0x0))->seStart(10293, (_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 608), 32, dComIfGp_getReverb((this->field_0x20a & 255)), 0); */
        /* goto L_1344; */
        /* L_1054:; */
        /* ((JAIZelBasic*)(this->field_0x0))->seStart(10325, (_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 608), 32, dComIfGp_getReverb((this->field_0x20a & 255)), 0); */
        /* field_0x2d1 = 7; */
        /* if (this->field_0x290 != 17) goto L_1344; */
        /* field_0x2d1 = 8; */
        /* goto L_1344; */
        /* L_10b4:; */
        /* field_0x2d1 = 6; */
        /* goto L_1344; */
        /* L_10c0:; */
        /* field_0x2d1 = 10; */
        /* ((JAIZelBasic*)(this->field_0x0))->seStart(10294, (_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 608), 32, dComIfGp_getReverb((this->field_0x20a & 255)), 0); */
        /* goto L_1344; */
        /* L_1110:; */
        /* field_0xf58 = 100; */
        /* field_0x285 = 0; */
        dComIfGp_getReverb((this->field_0x20a & 255));
        /* if (_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) == 0) goto L_1154; */
        /* goto L_1158; */
        /* L_1154:; */
        /* L_1158:; */
        /* ((JAIZelBasic*)(this->field_0x0))->monsSeStart(18607, (_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 608), -1, 0, dComIfGp_getReverb((this->field_0x20a & 255))); */
        /* field_0x2d1 = 5; */
        /* ((JAIZelBasic*)(this->field_0x0))->seStart(10294, (_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 608), 32, dComIfGp_getReverb((this->field_0x20a & 255)), 0); */
        /* goto L_1344; */
        /* L_11ac:; */
        /* field_0xd48 = 0; */
        /* field_0xba4 = 0; */
        dComIfGp_getReverb((this->field_0x20a & 255));
        /* if (_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) == 0) goto L_11fc; */
        /* goto L_1200; */
        /* L_11fc:; */
        /* L_1200:; */
        /* ((JAIZelBasic*)(this->field_0x0))->monsSeStart(18607, (_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 608), -1, 0, dComIfGp_getReverb((this->field_0x20a & 255))); */
        /* field_0x2d1 = 5; */
        /* ((JAIZelBasic*)(this->field_0x0))->seStart(10294, (_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 608), 32, dComIfGp_getReverb((this->field_0x20a & 255)), 0); */
        /* goto L_1344; */
        /* L_1254:; */
        /* field_0xba0 = 200; */
        /* enemy_fire_remove((_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 3924)); */
        dComIfGp_getReverb((this->field_0x20a & 255));
        /* if (_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) == 0) goto L_1298; */
        /* goto L_129c; */
        /* L_1298:; */
        /* L_129c:; */
        /* ((JAIZelBasic*)(this->field_0x0))->monsSeStart(18607, (_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 608), -1, 0, dComIfGp_getReverb((this->field_0x20a & 255))); */
        /* field_0x285 = 0; */
        /* L_12b0:; */
        /* field_0x2d1 = 5; */
        /* ((JAIZelBasic*)(this->field_0x0))->seStart(10294, (_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 608), 32, dComIfGp_getReverb((this->field_0x20a & 255)), 0); */
        /* goto L_1344; */
        /* L_12fc:; */
        /* field_0x2d1 = 0; */
        /* ((JAIZelBasic*)(this->field_0x0))->seStart(10294, (_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 608), 32, dComIfGp_getReverb((this->field_0x20a & 255)), 0); */
        /* L_1344:; */
        /* if (1 != 0) goto L_1464; */
        /* ((dCcD_GObjInf*)((_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1724)))->GetTgHitObj(); */
        /* cc_at_check(_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* if (this->field_0x2d1 == 1) goto L_138c; */
        /* if (this->field_0x2d1 == 7) goto L_138c; */
        /* if (this->field_0x2d1 == 8) goto L_138c; */
        /* if (this->field_0x285 != 0) goto L_1420; */
        /* L_138c:; */
        /* ((dPa_control_c*)(this->field_0x5ab8))->set(0, 16); */
        /* ((dPa_control_c*)(this->field_0x5ab8))->set(0, 15); */
        /* goto L_1464; */
        /* L_1420:; */
        /* ((dPa_control_c*)(this->field_0x5ab8))->set(0, 13); */
        /* L_1464:; */
        /* if (0 == 0) goto L_1480; */
        /* if (0 != 0) goto L_1488; */
        /* L_1480:; */
        return 1;
        /* L_1488:; */
        /* if (this->field_0x2d1 == 3) goto L_1600; */
        /* if (this->field_0x2d1 == 9) goto L_1600; */
        /* if ((this->field_0x2cc & 268435455) == 15) goto L_1600; */
        /* if (this->field_0x2cd != 0) goto L_1600; */
        /* field_0x330 = 0; */
        /* if (wing_cut_stat(_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)) == 0) goto L_1600; */
        /* if ((this->field_0x2cc & 268435455) == 15) goto L_1554; */
        dComIfGp_getReverb((this->field_0x20a & 255));
        /* if (_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) == 0) goto L_1514; */
        /* goto L_1518; */
        /* L_1514:; */
        /* L_1518:; */
        /* ((JAIZelBasic*)(this->field_0x0))->monsSeStart(18604, (_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 608), -1, 0, dComIfGp_getReverb((this->field_0x20a & 255))); */
        /* field_0x2a4 = 0; */
        /* if (this->field_0x2d0 == 4) goto L_1540; */
        /* field_0x2dc = 50; */
        /* goto L_1548; */
        /* L_1540:; */
        /* field_0x2dc = 52; */
        /* L_1548:; */
        /* field_0x2d0 = 5; */
        /* goto L_1600; */
        /* L_1554:; */
        /* if (this->field_0x2d0 == 10) goto L_1600; */
        dComIfGp_getReverb((this->field_0x20a & 255));
        /* if (_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) == 0) goto L_1594; */
        /* goto L_1598; */
        /* L_1594:; */
        /* L_1598:; */
        /* ((JAIZelBasic*)(this->field_0x0))->monsSeStart(18605, (_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 608), -1, 0, dComIfGp_getReverb((this->field_0x20a & 255))); */
        /* field_0x2a4 = 0; */
        /* if (this->field_0x2d0 == 4) goto L_15c0; */
        /* field_0x2dc = 60; */
        /* goto L_15c8; */
        /* L_15c0:; */
        /* field_0x2dc = 61; */
        /* L_15c8:; */
        /* field_0x32c = 0; */
        /* field_0x330 = 0; */
        /* cM_rndF(((JAIZelBasic*)(this->field_0x0))->monsSeStart(18605, (_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 608), -1, 0, dComIfGp_getReverb((this->field_0x20a & 255)))); */
        /* field_0x2d0 = 10; */
        /* L_1600:; */
        return _restgpr_27(1);
}

/* 0000170C-000017D8       .text BG_check__FP8gm_class */
void BG_check(gm_class*) {
    /* ((dBgS_AcchCir*)((arg0 + 1148)))->SetWall(arg1, arg2); */
    PSVECAdd((arg0 + 504), (arg0 + 948), (arg0 + 504));
    /* field_0x1e8 = (this->field_0x1e8 + this->field_0x3b8); */
    /* field_0x1fc = (this->field_0x1fc - this->field_0x328); */
    /* field_0x1e8 = (this->field_0x1e8 - this->field_0x328); */
    ((dBgS_Acch*)((arg0 + 1212)))->CrrPos(((char*)&g_dComIfG_gameInfo + 4768));
    /* field_0x1fc = (this->field_0x1fc + this->field_0x328); */
    /* field_0x1e8 = (this->field_0x1e8 + this->field_0x328); */
    PSVECSubtract((arg0 + 504), (arg0 + 948), (arg0 + 504));
    /* field_0x1e8 = (this->field_0x1e8 - this->field_0x3b8); */
    return PSVECSubtract((arg0 + 504), (arg0 + 948), (arg0 + 504));
}

/* 000017D8-00001B84       .text Line_check__FP8gm_class4cXyz */
void Line_check(gm_class*, cXyz) {
        /* _savegpr_23(arg0, cXyz, arg2, arg3, arg4, arg5, arg6, arg7); */
        ct();
        /* field_0xc = 0; */
        /* field_0xc = 0; */
        /* field_0x10 = 1; */
        /* if (/ * beq * / 1) goto L_1824; */
        /* L_1824:; */
        /* mDoMtx_XrotS(this->field_0x0, this->field_0x43e); */
        /* mDoMtx_ZrotM(this->field_0x0, this->field_0x442); */
        MtxPosition();
        PSVECAdd();
        /* field_0x4 = (this->field_0x4 + this->field_0x0); */
        Set();
        /* if (((cBgS*)(((char*)&g_dComIfG_gameInfo + 4768)))->LineCross() != 0) goto L_19cc; */
        /* field_0x3cc = 0; */
        /* field_0x3d0 = 0; */
        /* field_0x3d4 = 0; */
        /* field_0x3d8 = 0; */
        /* field_0x3dc = 0; */
        /* field_0x3e0 = 0; */
        /* if (/ * beq * / 1) goto L_1990; */
        /* if (/ * beq * / 1) goto L_196c; */
        /* if (/ * beq * / 1) goto L_196c; */
        /* L_196c:; */
        /* if (/ * beq * / 1) goto L_1990; */
        /* if (/ * beq * / 1) goto L_1990; */
        /* L_1990:; */
        __dt();
        return 0;
        /* L_19cc:; */
        /* if (/ * beq * / 1) goto L_1a44; */
        /* if (/ * beq * / 1) goto L_1a20; */
        /* if (/ * beq * / 1) goto L_1a20; */
        /* L_1a20:; */
        /* if (/ * beq * / 1) goto L_1a44; */
        /* if (/ * beq * / 1) goto L_1a44; */
        /* L_1a44:; */
        __dt();
        return _restgpr_23(1);
}

/* 00001FBC-0000212C       .text ks_set_rtn__FP8gm_class */
void ks_set_rtn(gm_class*) {
    /* _savegpr_29(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
    if (this->field_0x2ce == 1) {
        /* if (this->field_0x31e >= 10) goto L_1f24; */
        return 1;
    }
    if (this->field_0x31e >= 20) {
        return 1;
    }
    /* L_1f24:; */
    if (this->field_0x2dc == 83) {
    }
    /* cM_rndFX(((JAIZelBasic*)(this->field_0x0))->seStart(22694, (_savegpr_29(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 608), 0, dComIfGp_getReverb((this->field_0x20a & 255)), 0)); */
    }
    /* fopAcM_createChild(206, -1, 5, (_savegpr_29(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1020), (this->field_0x20a & 255)); */
    if (0 != 65535) {
        /* field_0x31e = (this->field_0x31e + 1); */
        return 0;
    }
    return _restgpr_29(1);


/* 0000212C-00002204       .text wing_ret_set__FP8gm_class */
void wing_ret_set(gm_class*) {
    /* L_205c:; */
    /* cLib_addCalcAngleS2(((_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 0) + 1046), 0, 1, 512); */
    /* cLib_addCalcAngleS2(((_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 0) + 1044), 0, 1, 512); */
    /* cLib_addCalcAngleS2(((_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 0) + 1048), 0, 1, 512); */
    /* if ((0 + 1) >= 4) goto L_205c; */
    /* cLib_addCalcAngleS2((_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1070), 0, 1, 512); */
    /* cLib_addCalcAngleS2((_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1068), 0, 1, 512); */
    /* cLib_addCalcAngleS2((_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1072), 0, 1, 512); */
    /* return _restgpr_28(cLib_addCalcAngleS2((_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1082), 0, 1, 512)); */
}

/* 00002204-000022C4       .text fuwafuwa_set__FP8gm_class */
void fuwafuwa_set(gm_class*) {
        /* if (this->field_0x1fc < (this->field_0x48 + this->field_0x1fc)) goto L_21c4; */
        /* field_0x2f0 = 0; */
        /* field_0x3c4 = (this->field_0x50 * this->field_0x48); */
        /* if (/ * beq * / 1) goto L_21a0; */
        /* if (/ * bne * / 1) goto L_21b0; */
        /* L_21a0:; */
        /* field_0x3c0 = 0; */
        /* field_0x3c4 = 0; */
        /* field_0x3c8 = 0; */
        /* L_21b0:; */
        /* L_21c4:; */
        return cLib_addCalc2((arg0 + 952));
}

/* 000022C4-00002474       .text fly_move__FP8gm_class */
void fly_move(gm_class*) {
        /* _savegpr_25(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* if (this->field_0x2e2 != 0) goto L_2358; */
        cM_rnd();
        /* if (/ * bge * / 1) goto L_2234; */
        /* L_2234:; */
        /* L_225c:; */
        /* mDoMtx_YrotS(this->field_0x0, (((dCam_getAngleY(this->field_0x5b04) & 65535) + -8192) & 65535)); */
        MtxPosition();
        PSVECAdd();
        /* if (Line_check(_savegpr_25(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)) != 0) goto L_2344; */
        /* field_0x254 = 0; */
        /* field_0x2e2 = 20; */
        /* cM_rndF(Line_check(_savegpr_25(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7))); */
        /* field_0x2e2 = 0; */
        /* field_0x334 = 0; */
        /* field_0x434 = cM_atan2s(); */
        return 1;
        /* L_2344:; */
        /* if ((0 + 1) < 2) goto L_225c; */
        /* L_2358:; */
        return _restgpr_25(0);
}

/* 00002474-00002AB8       .text action_dousa__FP8gm_class */
void action_dousa(gm_class*) {
        /* _savegpr_29(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* if (this->field_0x2dc == 2) goto L_2648; */
        /* if (/ * bge * / 1) goto L_2410; */
        /* if (this->field_0x2dc == 0) goto L_2420; */
        /* if (/ * bge * / 1) goto L_2500; */
        /* goto L_2880; */
        /* L_2410:; */
        /* if (this->field_0x2dc == 4) goto L_277c; */
        /* if (/ * bge * / 1) goto L_2880; */
        /* goto L_26e8; */
        /* L_2420:; */
        /* field_0x360 = 0; */
        /* field_0x364 = 0; */
        /* field_0x368 = 0; */
        /* field_0x10 = 0; */
        /* field_0x324 = 0; */
        /* field_0x32c = 0; */
        /* field_0x338 = 0; */
        /* field_0x33c = 0; */
        /* field_0x340 = 0; */
        /* field_0x330 = 0; */
        /* cM_rndF(this->field_0x4); */
        /* field_0x2e2 = 0; */
        /* if (this->field_0x344 == 13) goto L_24f4; */
        /* anm_init(_savegpr_29(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), 13, 2, -1); */
        /* L_24f4:; */
        /* field_0x2dc = (this->field_0x2dc + 1); */
        /* L_2500:; */
        /* field_0x34c = (this->field_0x34 + this->field_0x1fc); */
        /* if (fly_move(_savegpr_29(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)) != 0) goto L_2880; */
        /* if (this->field_0x1fc > this->field_0x78) goto L_2880; */
        /* if ((((this->field_0x1f8 - (this->field_0x1f8 + this->field_0x3b4)) * (this->field_0x1f8 - (this->field_0x1f8 + this->field_0x3b4))) + ((this->field_0x200 - (this->field_0x200 + this->field_0x3bc)) * (this->field_0x200 - (this->field_0x200 + this->field_0x3bc)))) <= this->field_0x0) goto L_25b0; */
        /* L_25b0:; */
        /* if (this->field_0x8 > this->field_0x64) goto L_2880; */
        /* if (this->field_0x2e4 != 0) goto L_2880; */
        /* if ((this->field_0x2cc & 65535) == 0) goto L_2604; */
        /* if ((this->field_0x90 + this->field_0x90) <= this->field_0x94) goto L_25fc; */
        /* L_25fc:; */
        /* L_2604:; */
        /* field_0x2dc = 2; */
        cM_rnd();
        /* if (/ * bge * / 1) goto L_2880; */
        /* if ((this->field_0x2cc & 536870911) == 7) goto L_2880; */
        /* field_0x254 = 0; */
        /* field_0x2d0 = 3; */
        /* field_0x2dc = 30; */
        /* goto L_2880; */
        /* L_2648:; */
        anm_init(cM_rnd(), 11, 2, -1);
        dComIfGp_getReverb((this->field_0x20a & 255));
        /* if (_savegpr_29(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) == 0) goto L_2694; */
        /* goto L_2698; */
        /* L_2694:; */
        /* L_2698:; */
        /* ((JAIZelBasic*)(this->field_0x0))->monsSeStart(18606, (_savegpr_29(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 608), -1, 0, dComIfGp_getReverb((this->field_0x20a & 255))); */
        /* field_0x10 = 0; */
        /* field_0x324 = 2; */
        /* field_0x254 = 0; */
        /* cM_rndF(this->field_0x4); */
        /* field_0x2dc = (this->field_0x2dc + 1); */
        /* L_26e8:; */
        /* field_0x34c = (this->field_0x50 + this->field_0x1fc); */
        /* if (this->field_0x1fc > this->field_0x78) goto L_2880; */
        /* if (this->field_0x2e4 != 0) goto L_2880; */
        /* field_0x254 = 0; */
        /* field_0xa50 = 1; */
        /* anm_init(_savegpr_29(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), 12, 0, 6); */
        /* field_0x2dc = (this->field_0x2dc + 1); */
        /* goto L_2880; */
        /* L_277c:; */
        /* if (this->field_0x2f6 != 0) goto L_27dc; */
        /* if (this->field_0xaa0 == 0) goto L_27c0; */
        /* field_0x254 = 0; */
        /* field_0x2f6 = 1; */
        /* goto L_27dc; */
        /* L_27c0:; */
        /* if (this->field_0x294 == 0) goto L_27dc; */
        /* field_0x254 = 0; */
        /* field_0x2f6 = 1; */
        /* L_27dc:; */
        /* cLib_addCalc0((_savegpr_29(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 596)); */
        /* if (this->field_0x5d != 0) goto L_2814; */
        /* if (/ * beq * / 1) goto L_2814; */
        /* L_2814:; */
        /* if (0 == 0) goto L_2880; */
        /* field_0x254 = 0; */
        /* cM_rndF(this->field_0x2b4); */
        /* anm_init(_savegpr_29(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), 11, 2, -1); */
        /* field_0x2dc = 0; */
        /* L_2880:; */
        /* fuwafuwa_set(_savegpr_29(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* if ((this->field_0x2cc & 536870911) != 7) goto L_28b8; */
        /* if ((cLib_distanceAngleS(this->field_0x210, 0) & 65535) >= 256) goto L_28b8; */
        /* field_0x436 = -16384; */
        /* L_28b8:; */
        /* if (this->field_0x2dc == 4) goto L_291c; */
        /* cLib_addCalcAngleS2((_savegpr_29(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 518), this->field_0x434, 1); */
        /* field_0x334 = 0; */
        /* cLib_addCalcAngleS2((_savegpr_29(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 526), (cM_atan2s(cLib_addCalc2((_savegpr_29(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 820))) & 65535), 1, 2048); */
        /* L_291c:; */
        /* cLib_addCalc2((_savegpr_29(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 508)); */
        /* cLib_addCalcAngleS2((_savegpr_29(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 800), 0, 1, 512); */
        /* cLib_addCalcAngleS2((_savegpr_29(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 524), 0, 1, 512); */
        /* return _restgpr_29(((JAIZelBasic*)(this->field_0x0))->seStart(28719, (_savegpr_29(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 608), 0, dComIfGp_getReverb((this->field_0x20a & 255)), 0)); */
}

/* 00002AB8-00002C9C       .text action_hane_rakka__FP8gm_class */
void action_hane_rakka(gm_class*) {
        /* if (this->field_0x2dc == 11) goto L_2ae0; */
        /* if (/ * bge * / 1) goto L_2a04; */
        /* if (this->field_0x2dc >= 10) goto L_2a10; */
        /* goto L_2b38; */
        /* L_2a04:; */
        /* if (this->field_0x2dc >= 13) goto L_2b38; */
        /* goto L_2b24; */
        /* L_2a10:; */
        /* field_0x258 = 0; */
        /* field_0x224 = 0; */
        /* if (this->field_0x2cd == 2) goto L_2ad4; */
        /* field_0x254 = 0; */
        /* if (this->field_0x2cc == 1) goto L_2a68; */
        /* if (this->field_0x2cc != 3) goto L_2a9c; */
        /* L_2a68:; */
        cM_rndFX((0 + 2));
        /* field_0x206 = 0; */
        /* field_0x2f0 = 4096; */
        /* goto L_2acc; */
        /* L_2a9c:; */
        cM_rndFX();
        /* field_0x206 = 0; */
        /* field_0x2f0 = -4096; */
        /* L_2acc:; */
        /* field_0x2f2 = 768; */
        /* L_2ad4:; */
        /* field_0x2dc = (this->field_0x2dc + 1); */
        /* L_2ae0:; */
        /* if (/ * bne * / 1) goto L_2b04; */
        /* if ((this->field_0x358 - this->field_0x40) <= this->field_0x1fc) goto L_2b38; */
        /* L_2b04:; */
        /* field_0x20c = 0; */
        /* field_0x2f0 = 0; */
        /* field_0x2f2 = 0; */
        /* field_0x2dc = (this->field_0x2dc + 1); */
        /* goto L_2b38; */
        /* L_2b24:; */
        /* if (this->field_0x214 >= this->field_0x90) goto L_2b38; */
        /* fopAcM_delete(this->field_0x2dc); */
        /* L_2b38:; */
        cLib_addCalc0((arg0 + 532));
        /* field_0x218 = 0; */
        /* field_0x21c = 0; */
        cLib_addCalc0((arg0 + 596));
        /* if (this->field_0x224 >= this->field_0x0) goto L_2b94; */
        /* field_0x20e = (this->field_0x20e + this->field_0x2f0); */
        /* field_0x20c = (this->field_0x20c + this->field_0x2f2); */
        /* L_2b94:; */
        /* return this->field_0x20c; */
}

/* 00002C9C-000030FC       .text action_uchiwa_dousa__FP8gm_class */
void action_uchiwa_dousa(gm_class*) {
        /* if (this->field_0x2dc == 21) goto L_2d50; */
        /* if (/ * bge * / 1) goto L_2be8; */
        /* if (this->field_0x2dc >= 20) goto L_2bf4; */
        /* goto L_2fe0; */
        /* L_2be8:; */
        /* if (this->field_0x2dc >= 23) goto L_2fe0; */
        /* goto L_2edc; */
        /* L_2bf4:; */
        /* anm_init(arg0, 28, 0, -1, arg4, arg5); */
        /* field_0x206 = (fopAcM_searchActorAngleY(arg0, this->field_0x5b38) + -32768); */
        /* ((JAIZelBasic*)(this->field_0x0))->seStart(22696, (arg0 + 608), 0, dComIfGp_getReverb((this->field_0x20a & 255)), 0); */
        dComIfGp_getReverb((this->field_0x20a & 255));
        /* if (arg0 == 0) goto L_2cc0; */
        /* goto L_2cc4; */
        /* L_2cc0:; */
        /* L_2cc4:; */
        /* ((JAIZelBasic*)(this->field_0x0))->monsSeStart(18608, (arg0 + 608), -1, 0, dComIfGp_getReverb((this->field_0x20a & 255))); */
        /* field_0x330 = 0; */
        /* field_0x254 = 0; */
        /* field_0x224 = 0; */
        /* if (this->field_0x2d1 != 3) goto L_2d30; */
        /* field_0x254 = 0; */
        /* field_0x224 = 0; */
        /* L_2d30:; */
        /* field_0x2f6 = 5000; */
        /* field_0x64 = 0; */
        /* field_0x2dc = (this->field_0x2dc + 1); */
        /* L_2d50:; */
        cLib_addCalc0((arg0 + 596));
        cLib_addCalc0((arg0 + 548));
        /* field_0x2f0 = (this->field_0x2f0 + 400); */
        /* field_0x2f2 = (this->field_0x2f2 + 400); */
        /* field_0x2f4 = (this->field_0x2f4 + 400); */
        /* if (this->field_0x2d1 == 3) goto L_2ea8; */
        /* field_0x210 = (this->field_0x210 + this->field_0x2f6); */
        cLib_addCalcAngleS2((arg0 + 758), 0, 1, 256);
        /* L_2ea8:; */
        /* if (this->field_0x224 >= this->field_0x90) goto L_2fe0; */
        /* if (this->field_0x254 >= this->field_0x90) goto L_2fe0; */
        /* field_0x254 = 0; */
        /* field_0x2dc = (this->field_0x2dc + 1); */
        /* goto L_2fe0; */
        /* L_2edc:; */
        /* field_0x258 = 0; */
        /* field_0x2f0 = (this->field_0x2f0 + 400); */
        /* field_0x2f2 = (this->field_0x2f2 + 400); */
        /* field_0x2f4 = (this->field_0x2f4 + 400); */
        /* if (this->field_0x1fc >= (this->field_0x48 + this->field_0x550)) goto L_2fe0; */
        /* field_0x224 = 0; */
        /* field_0x258 = 0; */
        /* field_0x2d0 = 0; */
        /* field_0x2dc = 0; */
        /* L_2fe0:; */
        return cLib_addCalcAngleS2((arg0 + 1082), 8192, 1, 4096);
}

/* 000030FC-00003E54       .text action_totugeki__FP8gm_class */
void action_totugeki(gm_class*) {
        /* _savegpr_14(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        ct();
        /* field_0xc = 0; */
        /* field_0xc = 0; */
        /* field_0x10 = 1; */
        /* if (/ * beq * / 1) goto L_316c; */
        /* L_316c:; */
        /* if ((this->field_0x2dc + -30) > 8) goto L_3c60; */
        /* field_0x360 = 0; */
        /* field_0x364 = 0; */
        /* field_0x368 = 0; */
        /* field_0x10 = 0; */
        /* field_0x324 = 2; */
        /* field_0x322 = 0; */
        /* field_0x360 = 0; */
        /* field_0x364 = 0; */
        /* field_0x368 = 0; */
        /* if (this->field_0x344 == 13) goto L_325c; */
        /* anm_init(_savegpr_14(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), 13, 2, -1); */
        /* L_325c:; */
        /* field_0x254 = 0; */
        /* field_0x3c0 = 0; */
        /* field_0x3c4 = 0; */
        /* field_0x3c8 = 0; */
        /* field_0x2dc = (this->field_0x2dc + 1); */
        /* cLib_addCalcAngleS2((_savegpr_14(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 524), 0, 1, 512); */
        /* cLib_addCalcAngleS2((_savegpr_14(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 526), fopAcM_searchActorAngleY(_savegpr_14(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), this->field_0x5b38), 1, 4096); */
        /* cLib_addCalc2((_savegpr_14(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 508)); */
        /* if (/ * bge * / 1) goto L_3318; */
        /* field_0x64 = 0; */
        /* field_0x2e2 = 45; */
        /* field_0x2dc = (this->field_0x2dc + 1); */
        /* L_3318:; */
        /* ((JAIZelBasic*)(this->field_0x0))->seStart(28719, (_savegpr_14(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 608), 0, dComIfGp_getReverb((this->field_0x20a & 255)), 0); */
        /* goto L_3c60; */
        /* ((JAIZelBasic*)(this->field_0x0))->seStart(28719, (_savegpr_14(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 608), 0, dComIfGp_getReverb((this->field_0x20a & 255)), 0); */
        /* if (this->field_0x2e2 <= 15) goto L_33b8; */
        /* field_0x206 = fopAcM_searchActorAngleY(_savegpr_14(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), this->field_0x5b38); */
        /* L_33b8:; */
        /* fopAcM_searchActorDistance(_savegpr_14(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), this->field_0x5b38); */
        /* if (/ * bge * / 1) goto L_348c; */
        /* mDoMtx_YrotS(this->field_0x0, ((fopAcM_searchActorAngleY(_savegpr_14(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), this->field_0x5b38) + -32768) & 65535)); */
        MtxPosition();
        PSVECAdd();
        /* if (/ * ble * / 1) goto L_345c; */
        /* cLib_addCalc2((_savegpr_14(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 504)); */
        /* L_345c:; */
        /* if (/ * ble * / 1) goto L_348c; */
        /* cLib_addCalc2((_savegpr_14(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 512)); */
        /* L_348c:; */
        /* cLib_addCalcAngleS2((_savegpr_14(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 526), this->field_0x206, 1, 4096); */
        /* if (this->field_0x2e2 != 0) goto L_3c60; */
        /* if (Line_check(_savegpr_14(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)) != 0) goto L_3c60; */
        /* if ((cLib_distanceAngleS(this->field_0x20e, this->field_0x206) & 65535) > 1280) goto L_3c60; */
        /* field_0x2dc = (this->field_0x2dc + 1); */
        /* field_0x322 = (this->field_0x322 + 1); */
        /* field_0x64 = 0; */
        /* anm_init(_savegpr_14(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), 27, 2, -1); */
        /* field_0x7f0 = 1; */
        /* field_0x320 = 0; */
        /* field_0x20c = 0; */
        /* field_0x254 = (this->field_0x74 + this->field_0x4b4); */
        /* field_0x258 = (this->field_0x8 + this->field_0x4b8); */
        /* field_0x224 = (this->field_0xd4 + this->field_0x4bc); */
        /* field_0x2da = 0; */
        /* field_0x348 = 0; */
        /* field_0x34c = 0; */
        /* field_0x350 = 0; */
        /* field_0x34c = (this->field_0xd8 + this->field_0x1fc); */
        /* field_0x2dc = (this->field_0x2dc + 1); */
        /* ((JAIZelBasic*)(this->field_0x0))->seStart(28721, (_savegpr_14(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 608), 0, dComIfGp_getReverb((this->field_0x20a & 255)), 0); */
        /* field_0x2a4 = 0; */
        /* field_0x2da = (this->field_0x2da + 1); */
        /* if (this->field_0x2da <= 0) goto L_3684; */
        /* if (this->field_0x2da >= 0) goto L_3684; */
        /* field_0x2a4 = 0; */
        /* L_3684:; */
        /* if (this->field_0x224 <= this->field_0x0) goto L_36b4; */
        /* if ((this->field_0x1fc + this->field_0x3b8) <= this->field_0x34c) goto L_36b4; */
        /* field_0x2f6 = 1; */
        /* L_36b4:; */
        /* if (this->field_0x2f6 == 0) goto L_36e0; */
        /* cLib_addCalc0((_savegpr_14(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 600), this->field_0x2da); */
        /* cLib_addCalc0((_savegpr_14(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 548)); */
        /* L_36e0:; */
        /* if ((this->field_0x1fc + this->field_0x3b8) >= this->field_0x40) goto L_36fc; */
        /* field_0x1fc = 0; */
        /* L_36fc:; */
        /* if (this->field_0x1fc >= (this->field_0x50 + this->field_0x550)) goto L_3718; */
        /* field_0x1fc = (this->field_0x50 + this->field_0x550); */
        /* L_3718:; */
        /* L_3748:; */
        /* field_0x384 = 0; */
        /* field_0x388 = 0; */
        /* field_0x38c = 0; */
        /* mDoMtx_YrotS(this->field_0x0, this->field_0x206); */
        MtxPosition();
        /* PSVECAdd(((_savegpr_14(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 0) + 864), (_savegpr_14(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 504), ((_savegpr_14(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 0) + 864)); */
        /* PSVECAdd(((_savegpr_14(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 0) + 864), (_savegpr_14(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 948), ((_savegpr_14(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 0) + 864)); */
        __pl();
        Set();
        /* if (((cBgS*)(((char*)&g_dComIfG_gameInfo + 4768)))->LineCross() == 0) goto L_3814; */
        /* field_0x384 = 0; */
        /* field_0x388 = 0; */
        /* field_0x38c = 0; */
        /* L_3814:; */
        /* if ((0 + 1) < 3) goto L_3748; */
        /* if (/ * beq * / 1) goto L_3914; */
        /* field_0x2a4 = 0; */
        /* field_0x2dc = 37; */
        /* if (/ * beq * / 1) goto L_38d4; */
        /* if (/ * beq * / 1) goto L_38b0; */
        /* if (/ * beq * / 1) goto L_38b0; */
        /* L_38b0:; */
        /* if (/ * beq * / 1) goto L_38d4; */
        /* if (/ * beq * / 1) goto L_38d4; */
        /* L_38d4:; */
        /* if (/ * beq * / 1) goto L_38f8; */
        /* L_38f8:; */
        __dt();
        /* goto L_3d3c; */
        /* L_3914:; */
        /* if (/ * bne * / 1) goto L_3948; */
        /* if (/ * bne * / 1) goto L_3948; */
        /* if (/ * bne * / 1) goto L_3948; */
        /* if (/ * beq * / 1) goto L_3c60; */
        /* L_3948:; */
        /* if (/ * bne * / 1) goto L_3960; */
        /* if (/ * beq * / 1) goto L_39c0; */
        /* L_3960:; */
        /* if (/ * bne * / 1) goto L_397c; */
        /* if (/ * beq * / 1) goto L_39c0; */
        /* L_397c:; */
        /* field_0x254 = 0; */
        /* field_0x258 = 0; */
        /* field_0x224 = 0; */
        /* field_0x2a4 = 0; */
        /* field_0x2dc = 40; */
        /* field_0x2d0 = 4; */
        /* goto L_3c60; */
        /* L_39c0:; */
        __mi();
        /* if (/ * bne * / 1) goto L_3a04; */
        /* if (/ * beq * / 1) goto L_3a2c; */
        /* L_3a04:; */
        /* L_3a2c:; */
        /* field_0x20e = (cM_atan2s(__mi()) + 16384); */
        /* cLib_addCalcAngleS2((_savegpr_14(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 526), this->field_0x206, 1, 4096); */
        /* goto L_3c60; */
        /* field_0x258 = 0; */
        /* field_0x224 = 0; */
        /* field_0x2ee = 0; */
        /* anm_init(_savegpr_14(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), 30, 2, -1); */
        /* field_0x254 = 0; */
        /* field_0x2dc = (this->field_0x2dc + 1); */
        /* ((JAIZelBasic*)(this->field_0x0))->seStart(28719, (_savegpr_14(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 608), 0, dComIfGp_getReverb((this->field_0x20a & 255)), 0); */
        /* field_0x206 = cM_atan2s(cLib_addCalc2((_savegpr_14(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 508))); */
        /* cLib_addCalcAngleS2((_savegpr_14(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 526), fopAcM_searchActorAngleY(_savegpr_14(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), this->field_0x5b38), 1, 4096); */
        /* if (((J3DFrameCtrl*)((this->field_0x2b4 + 88)))->checkPass() != 0) goto L_3bd4; */
        /* if (((J3DFrameCtrl*)((this->field_0x2b4 + 88)))->checkPass() != 0) goto L_3bd4; */
        /* if (((J3DFrameCtrl*)((this->field_0x2b4 + 88)))->checkPass() != 0) goto L_3bd4; */
        /* if (((J3DFrameCtrl*)((this->field_0x2b4 + 88)))->checkPass() == 0) goto L_3bdc; */
        /* L_3bd4:; */
        /* ks_set_rtn(_savegpr_14(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* L_3bdc:; */
        /* if ((((this->field_0x354 - (this->field_0x1f8 + this->field_0x3b4)) * (this->field_0x354 - (this->field_0x1f8 + this->field_0x3b4))) + ((this->field_0x35c - (this->field_0x200 + this->field_0x3bc)) * (this->field_0x35c - (this->field_0x200 + this->field_0x3bc)))) <= this->field_0x0) goto L_3c4c; */
        /* L_3c4c:; */
        /* if (this->field_0x8 >= this->field_0x78) goto L_3c60; */
        /* field_0x2dc = 30; */
        /* L_3c60:; */
        /* cLib_addCalc0((_savegpr_14(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 948)); */
        /* cLib_addCalc0((_savegpr_14(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 952)); */
        /* cLib_addCalc0((_savegpr_14(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 956)); */
        /* if (/ * beq * / 1) goto L_3d08; */
        /* if (/ * beq * / 1) goto L_3ce4; */
        /* if (/ * beq * / 1) goto L_3ce4; */
        /* L_3ce4:; */
        /* if (/ * beq * / 1) goto L_3d08; */
        /* if (/ * beq * / 1) goto L_3d08; */
        /* L_3d08:; */
        /* L_3d3c:; */
        return _restgpr_14(__dt());
}

/* 00003E54-00004204       .text action_kabehari__FP8gm_class */
void action_kabehari(gm_class*) {
        /* _savegpr_29(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* if (this->field_0x2dc == 42) goto L_3f68; */
        /* if (/ * bge * / 1) goto L_3dc0; */
        /* if (this->field_0x2dc == 40) goto L_3dcc; */
        /* if (/ * bge * / 1) goto L_3e50; */
        /* goto L_401c; */
        /* L_3dc0:; */
        /* if (this->field_0x2dc >= 44) goto L_401c; */
        /* goto L_3fa8; */
        /* L_3dcc:; */
        /* field_0x330 = 0; */
        /* field_0x348 = 0; */
        /* field_0x34c = 0; */
        /* field_0x350 = 0; */
        /* field_0x34c = (this->field_0xf0 + this->field_0x1fc); */
        /* field_0x320 = 0; */
        /* field_0x2e4 = 50; */
        /* field_0x2dc = (this->field_0x2dc + 1); */
        /* L_3e50:; */
        /* cLib_addCalcAngleS2((_savegpr_29(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 524), -16384, 1, 512); */
        /* if ((((this->field_0x200 - this->field_0x20) * (this->field_0x200 - this->field_0x20)) + (((this->field_0x1f8 - this->field_0x18) * (this->field_0x1f8 - this->field_0x18)) + ((this->field_0x1fc - this->field_0x34c) * (this->field_0x1fc - this->field_0x34c)))) <= this->field_0x0) goto L_3f00; */
        /* L_3f00:; */
        /* if (this->field_0x8 < this->field_0xe0) goto L_3f24; */
        /* if (/ * bne * / 1) goto L_3f24; */
        /* if (this->field_0x2e4 != 0) goto L_401c; */
        /* L_3f24:; */
        /* if (this->field_0x344 == 29) goto L_3f4c; */
        /* anm_init(_savegpr_29(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), 29, 2, -1); */
        /* L_3f4c:; */
        /* field_0x330 = 0; */
        /* field_0x20c = -16384; */
        /* field_0x2dc = 42; */
        /* goto L_401c; */
        /* L_3f68:; */
        /* cLib_addCalcAngleS2((_savegpr_29(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 800), -32768, 1, 1280); */
        /* if ((cLib_distanceAngleS(this->field_0x320, -32768) & 65535) >= 256) goto L_401c; */
        /* field_0x2e2 = 10; */
        /* field_0x2dc = 43; */
        /* goto L_401c; */
        /* L_3fa8:; */
        /* cLib_addCalcAngleS2((_savegpr_29(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 800), -32768, 1, 1280); */
        /* if (this->field_0x2e2 != 0) goto L_401c; */
        /* if (this->field_0x322 > 1) goto L_4010; */
        /* if ((this->field_0x2cc & 536870911) == 7) goto L_4010; */
        /* field_0x20e = fopAcM_searchActorAngleY(_savegpr_29(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), this->field_0x5b38); */
        /* field_0x2d0 = 3; */
        /* field_0x2dc = 33; */
        /* goto L_401c; */
        /* L_4010:; */
        /* field_0x2d0 = 0; */
        /* field_0x2dc = 0; */
        /* L_401c:; */
        /* if (this->field_0x2d0 != 4) goto L_40fc; */
        mDoMtx_YrotS(this->field_0x0, ((this->field_0x206 + -32768) & 65535));
        MtxPosition();
        PSVECAdd();
        /* cLib_addCalc2((_savegpr_29(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 504)); */
        /* cLib_addCalc2((_savegpr_29(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 508)); */
        /* cLib_addCalc2((_savegpr_29(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 512)); */
        /* field_0x206 = (cM_atan2s(__mi()) + 16384); */
        /* L_40fc:; */
        /* return _restgpr_29(cLib_addCalcAngleS2((_savegpr_29(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 526), this->field_0x206, 1, 4096)); */
}

/* 00004204-000046F0       .text action_fly_damage__FP8gm_class */
void action_fly_damage(gm_class*) {
        /* _savegpr_29(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* if (this->field_0x2dc == 51) goto L_4330; */
        /* if (/ * bge * / 1) goto L_4158; */
        /* if (this->field_0x2dc >= 50) goto L_4164; */
        /* goto L_45b8; */
        /* L_4158:; */
        /* if (this->field_0x2dc >= 53) goto L_45b8; */
        /* goto L_41e8; */
        /* L_4164:; */
        /* if (this->field_0x2d1 == 4) goto L_41a4; */
        /* field_0x10 = 0; */
        /* field_0x324 = 1; */
        /* goto L_41bc; */
        /* L_41a4:; */
        /* field_0x10 = 0; */
        /* field_0x324 = 0; */
        /* L_41bc:; */
        /* anm_init(_savegpr_29(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), 28, 0, -1); */
        /* field_0x254 = 0; */
        /* field_0x320 = 0; */
        /* L_41e8:; */
        /* field_0x206 = (fopAcM_searchActorAngleY(_savegpr_29(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), this->field_0x5b38) + -32768); */
        cM_rnd();
        /* if (/ * bge * / 1) goto L_4270; */
        /* L_4270:; */
        /* field_0x310 = 0; */
        cM_rnd();
        /* if (/ * bge * / 1) goto L_42a8; */
        /* L_42a8:; */
        /* field_0x312 = 0; */
        cM_rnd();
        /* if (/ * bge * / 1) goto L_42e0; */
        /* L_42e0:; */
        /* field_0x314 = 0; */
        /* field_0x316 = 5000; */
        /* field_0x318 = 5000; */
        /* field_0x31a = 7000; */
        /* field_0x220 = 0; */
        /* field_0x224 = 0; */
        /* field_0x228 = 0; */
        /* field_0x258 = 0; */
        /* field_0x2dc = 51; */
        /* L_4330:; */
        /* field_0x2f0 = (this->field_0x2f0 + this->field_0x310); */
        /* field_0x2f2 = (this->field_0x2f2 + this->field_0x312); */
        /* field_0x2f4 = (this->field_0x2f4 + this->field_0x314); */
        /* field_0x2f0 = (this->field_0x2f0 + this->field_0x316); */
        /* field_0x2f2 = (this->field_0x2f2 + this->field_0x318); */
        /* field_0x2f4 = (this->field_0x2f4 + this->field_0x31a); */
        /* L_4514:; */
        /* cLib_addCalcAngleS2((_savegpr_29(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + (((0 + 16) << 1) + 752)), 0, 1, 80); */
        /* if ((0 + 1) < 6) goto L_4514; */
        /* cLib_addCalc0((_savegpr_29(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 596)); */
        /* if (this->field_0x254 >= this->field_0x10c) goto L_45b8; */
        /* field_0x254 = 0; */
        /* field_0x10 = 0; */
        /* field_0x324 = 0; */
        /* if (this->field_0x344 != 28) goto L_45ac; */
        /* if ((this->field_0x2cc & 536870911) == 7) goto L_45ac; */
        /* field_0x2d0 = 3; */
        /* field_0x2dc = 37; */
        /* goto L_45b8; */
        /* L_45ac:; */
        /* field_0x2d0 = 0; */
        /* field_0x2dc = 0; */
        /* L_45b8:; */
        /* if (this->field_0x1fc >= (this->field_0x50 + this->field_0x550)) goto L_45e0; */
        /* L_45e0:; */
        /* return _restgpr_29(cLib_addCalc2((_savegpr_29(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 508))); */
}

/* 000046F0-00005C78       .text action_ground_attack__FP8gm_class */
void action_ground_attack(gm_class*) {
        /* _savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* if ((this->field_0x2dc + -60) > 41) goto L_5994; */
        /* field_0xabb = 0; */
        /* field_0x436 = 0; */
        /* field_0x254 = 0; */
        /* field_0x3b4 = 0; */
        /* field_0x3b8 = 0; */
        /* field_0x3bc = 0; */
        /* field_0x3c0 = 0; */
        /* field_0x3c4 = 0; */
        /* field_0x3c8 = 0; */
        /* field_0x10 = 0; */
        /* field_0x324 = 0; */
        /* field_0x290 = (this->field_0x110 + this->field_0x49c); */
        /* field_0x294 = (this->field_0x50 + this->field_0x4a0); */
        /* field_0x29c = 0; */
        /* field_0x2a0 = 0; */
        /* field_0x298 = (this->field_0x114 + this->field_0x4a4); */
        /* field_0x2a8 = 1; */
        /* field_0x2a4 = 0; */
        /* field_0x330 = 0; */
        /* if (this->field_0x285 != 0) goto L_47f4; */
        /* if (this->field_0x2ce == 0) goto L_47e0; */
        /* anm_init(_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), 19, 0, -1); */
        /* field_0x2dc = 100; */
        /* goto L_5994; */
        /* L_47e0:; */
        /* field_0x2d0 = 20; */
        /* field_0x2dc = 200; */
        /* goto L_5b60; */
        /* L_47f4:; */
        /* field_0x258 = 0; */
        /* field_0x2dc = 62; */
        /* field_0x20c = (this->field_0x20c + 256); */
        /* if (this->field_0x1fc >= (this->field_0x38 + this->field_0x550)) goto L_5994; */
        /* if (this->field_0x285 != 0) goto L_4864; */
        /* anm_init(_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), 20, 0, -1); */
        /* goto L_4880; */
        /* L_4864:; */
        /* anm_init(_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), 17, 0, -1); */
        /* L_4880:; */
        /* field_0x338 = 0; */
        /* field_0x33c = 0; */
        /* field_0x340 = 0; */
        /* field_0x254 = 0; */
        /* field_0x2dc = (this->field_0x2dc + 1); */
        /* goto L_5994; */
        /* if (/ * beq * / 1) goto L_5994; */
        /* ((JAIZelBasic*)(this->field_0x0))->seStart(22698, (_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 608), 0, dComIfGp_getReverb((this->field_0x20a & 255)), 0); */
        /* field_0x2dc = 70; */
        /* goto L_5994; */
        /* anm_init(_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), 25, 2, -1); */
        /* field_0x254 = 0; */
        /* field_0x2dc = (this->field_0x2dc + 1); */
        /* if (((J3DFrameCtrl*)((this->field_0x2b4 + 88)))->checkPass() == 0) goto L_5994; */
        /* field_0x2f6 = (this->field_0x2f6 + 1); */
        /* if (this->field_0x2f6 <= ((this->field_0x50e + 1) & 65535)) goto L_5994; */
        /* field_0x2dc = (this->field_0x2dc + 1); */
        /* goto L_5994; */
        /* if (_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) == 0) goto L_49c0; */
        /* goto L_49c4; */
        /* L_49c0:; */
        /* L_49c4:; */
        /* cM_rndF(this->field_0x2dc); */
        /* field_0x2f4 = 0; */
        /* mDoMtx_XrotS(this->field_0x0, this->field_0x43e); */
        /* mDoMtx_ZrotM(this->field_0x0, this->field_0x442); */
        MtxPosition();
        PSVECAdd();
        /* if (Line_check(_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)) != 0) goto L_4aa0; */
        /* field_0x206 = cM_atan2s(Line_check(_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7))); */
        /* goto L_4b3c; */
        /* L_4aa0:; */
        /* if (this->field_0x2ce == 1) goto L_4ad8; */
        /* if (this->field_0x344 == 25) goto L_5994; */
        /* anm_init(_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), 25, 2, -1); */
        /* goto L_5994; */
        /* L_4ad8:; */
        /* field_0x254 = 0; */
        /* field_0x326 = 0; */
        /* field_0x326 = (this->field_0x510 + 16384); */
        cM_rnd();
        /* if (/ * bge * / 1) goto L_4b1c; */
        /* field_0x326 = (-(this->field_0x510 + 16384)); */
        /* L_4b1c:; */
        /* field_0x206 = cM_atan2s(this->field_0x510); */
        /* field_0x206 = (this->field_0x206 + this->field_0x326); */
        /* L_4b3c:; */
        /* if (this->field_0x2ce != 1) goto L_4b58; */
        /* field_0x32c = 0; */
        /* field_0x330 = 0; */
        /* L_4b58:; */
        /* anm_init(_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), 26, 2, -1); */
        /* field_0x2dc = (this->field_0x2dc + 1); */
        /* ((JAIZelBasic*)(this->field_0x0))->seStart(28720, (_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 608), 0, dComIfGp_getReverb((this->field_0x20a & 255)), 0); */
        /* if ((cLib_distanceAngleS(this->field_0x206, this->field_0x20e) & 65535) >= 256) goto L_4ccc; */
        /* field_0x254 = 0; */
        /* field_0x2f4 = (this->field_0x2f4 + 1); */
        /* if (this->field_0x2f4 <= this->field_0x2fe) goto L_4c08; */
        /* field_0x2dc = 70; */
        /* goto L_5994; */
        /* L_4c08:; */
        /* if (this->field_0x2ce == 1) goto L_4cbc; */
        /* mDoMtx_YrotS(this->field_0x0, this->field_0x206); */
        /* mDoMtx_XrotM(this->field_0x0, this->field_0x43e); */
        /* mDoMtx_ZrotM(this->field_0x0, this->field_0x442); */
        MtxPosition();
        PSVECAdd();
        /* if (Line_check(_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)) == 0) goto L_4ccc; */
        /* field_0x2dc = 70; */
        /* goto L_5994; */
        /* L_4cbc:; */
        /* field_0x206 = cM_atan2s(Line_check(_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7))); */
        /* L_4ccc:; */
        /* if ((((this->field_0x1f8 - (this->field_0x1f8 + this->field_0x3b4)) * (this->field_0x1f8 - (this->field_0x1f8 + this->field_0x3b4))) + ((this->field_0x200 - (this->field_0x200 + this->field_0x3bc)) * (this->field_0x200 - (this->field_0x200 + this->field_0x3bc)))) <= this->field_0x0) goto L_4d3c; */
        /* L_4d3c:; */
        /* if (this->field_0x8 > this->field_0xcc) goto L_5994; */
        /* if (this->field_0x2ce != 1) goto L_4dfc; */
        /* mDoMtx_YrotS(this->field_0x0, this->field_0x206); */
        /* mDoMtx_XrotM(this->field_0x0, this->field_0x43e); */
        /* mDoMtx_ZrotM(this->field_0x0, this->field_0x442); */
        MtxPosition();
        PSVECAdd();
        /* if (Line_check(_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)) == 0) goto L_4dfc; */
        /* field_0x2dc = 70; */
        /* goto L_5994; */
        /* L_4dfc:; */
        /* field_0x2da = 0; */
        /* field_0x2dc = (this->field_0x2dc + 1); */
        /* anm_init(_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), 14, 0, -1); */
        dComIfGp_getReverb((this->field_0x20a & 255));
        /* if (_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) == 0) goto L_4e60; */
        /* goto L_4e64; */
        /* L_4e60:; */
        /* L_4e64:; */
        /* ((JAIZelBasic*)(this->field_0x0))->monsSeStart(18606, (_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 608), -1, 0, dComIfGp_getReverb((this->field_0x20a & 255))); */
        /* field_0x324 = 2; */
        /* field_0x254 = 0; */
        /* field_0x2dc = (this->field_0x2dc + 1); */
        /* goto L_5994; */
        /* field_0x206 = cM_atan2s(((JAIZelBasic*)(this->field_0x0))->seStart(28720, (_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 608), 0, dComIfGp_getReverb((this->field_0x20a & 255)), 0)); */
        /* if (this->field_0x5d != 0) goto L_4f24; */
        /* if (/ * beq * / 1) goto L_4f24; */
        /* L_4f24:; */
        /* if (0 == 0) goto L_5994; */
        /* anm_init(_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), 15, 0, -1); */
        /* field_0xa50 = 1; */
        /* field_0x324 = 0; */
        /* field_0x254 = 0; */
        /* field_0x258 = 0; */
        /* field_0x224 = 0; */
        /* field_0x2dc = (this->field_0x2dc + 1); */
        /* goto L_5994; */
        /* if (this->field_0x2f8 != 0) goto L_4fcc; */
        /* if (this->field_0xaa0 == 0) goto L_4fcc; */
        /* field_0x254 = 0; */
        /* field_0x2f8 = 1; */
        /* L_4fcc:; */
        /* if (this->field_0x5d != 0) goto L_4ff4; */
        /* if (/ * beq * / 1) goto L_4ff4; */
        /* L_4ff4:; */
        /* if (0 == 0) goto L_5994; */
        /* anm_init(_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), 16, 0, 7); */
        /* field_0x2f8 = 0; */
        /* field_0x2dc = (this->field_0x2dc + 1); */
        /* goto L_5994; */
        /* if (/ * beq * / 1) goto L_5994; */
        /* field_0x254 = 0; */
        /* field_0x2dc = 70; */
        /* goto L_5994; */
        /* if (this->field_0x2d1 == 4) goto L_5110; */
        dComIfGp_getReverb((this->field_0x20a & 255));
        /* if (_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) == 0) goto L_50c0; */
        /* goto L_50c4; */
        /* L_50c0:; */
        /* L_50c4:; */
        /* ((JAIZelBasic*)(this->field_0x0))->monsSeStart(18604, (_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 608), -1, 0, dComIfGp_getReverb((this->field_0x20a & 255))); */
        /* field_0x10 = 0; */
        /* field_0x324 = 1; */
        /* field_0x2ec = 0; */
        /* anm_init(_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), 18, 0, -1); */
        /* field_0x254 = 0; */
        /* goto L_5134; */
        /* L_5110:; */
        /* field_0x2ec = 45; */
        /* field_0x254 = 0; */
        /* field_0x10 = 0; */
        /* field_0x324 = 0; */
        /* L_5134:; */
        /* field_0x206 = (fopAcM_searchActorAngleY(_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), this->field_0x5b38) + -32768); */
        /* if (this->field_0x2d1 != 1) goto L_5168; */
        /* field_0x258 = 0; */
        /* field_0x224 = 0; */
        /* L_5168:; */
        /* field_0x2dc = (this->field_0x2dc + 1); */
        /* goto L_5994; */
        /* cLib_addCalc0((_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 596)); */
        /* if (this->field_0x2ec != ((this->field_0x512 + 44) & 65535)) goto L_51f0; */
        /* enemy_piyo_set(_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* ((JAIZelBasic*)(this->field_0x0))->seStart(20668, (_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 608), 0, dComIfGp_getReverb((this->field_0x20a & 255)), 0); */
        /* L_51f0:; */
        /* if (this->field_0x2d1 == 4) goto L_522c; */
        /* if (this->field_0x5d != 0) goto L_5224; */
        /* if (/ * beq * / 1) goto L_5224; */
        /* L_5224:; */
        /* if (0 != 0) goto L_5240; */
        /* L_522c:; */
        /* if (this->field_0x2d1 != 4) goto L_5994; */
        /* if (this->field_0x2ec != 0) goto L_5994; */
        /* L_5240:; */
        /* anm_init(_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), 26, 2, -1); */
        /* field_0x10 = 0; */
        /* field_0x324 = 0; */
        /* field_0x2dc = (this->field_0x2dc + 1); */
        /* goto L_5994; */
        /* field_0x206 = (cM_atan2s(((JAIZelBasic*)(this->field_0x0))->seStart(28720, (_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 608), 0, dComIfGp_getReverb((this->field_0x20a & 255)), 0)) + -32768); */
        /* if ((cLib_distanceAngleS(this->field_0x206, this->field_0x20e) & 65535) >= 256) goto L_5994; */
        /* anm_init(_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), 23, 2, -1); */
        /* field_0x2e2 = 4; */
        /* field_0x2fa = (cM_atan2s(anm_init(_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), 23, 2, -1)) + -32768); */
        /* field_0x2fc = 16384; */
        /* field_0x2dc = (this->field_0x2dc + 1); */
        /* goto L_5994; */
        /* if (this->field_0x2e2 != 0) goto L_5378; */
        /* field_0x206 = (this->field_0x2fa + this->field_0x2fc); */
        /* field_0x2e2 = 4; */
        /* L_5378:; */
        /* if (ks_set_rtn(_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)) == 0) goto L_5994; */
        /* field_0x2dc = 70; */
        /* goto L_5994; */
        /* anm_init(ks_set_rtn(_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)), 24, 0, -1); */
        /* field_0x206 = (fopAcM_searchActorAngleY(_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), this->field_0x5b38) + -32768); */
        /* field_0x254 = 0; */
        /* ((JAIZelBasic*)(this->field_0x0))->seStart(22696, (_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 608), 0, dComIfGp_getReverb((this->field_0x20a & 255)), 0); */
        dComIfGp_getReverb((this->field_0x20a & 255));
        /* if (_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) == 0) goto L_5478; */
        /* goto L_547c; */
        /* L_5478:; */
        /* L_547c:; */
        /* ((JAIZelBasic*)(this->field_0x0))->monsSeStart(18608, (_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 608), -1, 0, dComIfGp_getReverb((this->field_0x20a & 255))); */
        /* field_0x2dc = (this->field_0x2dc + 1); */
        /* goto L_5994; */
        /* cLib_addCalc0((_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 596)); */
        /* if (this->field_0x5d != 0) goto L_54cc; */
        /* if (/ * beq * / 1) goto L_54cc; */
        /* L_54cc:; */
        /* if (0 == 0) goto L_5994; */
        /* field_0x2dc = 82; */
        /* goto L_5994; */
        /* field_0x2cc = 0; */
        anm_init(this->field_0x2b4, 22, 0, 8);
        /* field_0x254 = 0; */
        /* field_0x2dc = (this->field_0x2dc + 1); */
        /* goto L_5994; */
        /* if (this->field_0x5d != 0) goto L_5540; */
        /* if (/ * beq * / 1) goto L_5540; */
        /* L_5540:; */
        /* if (0 == 0) goto L_5994; */
        /* field_0x224 = 0; */
        /* field_0x258 = 0; */
        /* field_0x43e = 0; */
        /* field_0x440 = 0; */
        /* field_0x442 = 0; */
        /* field_0xabb = 5; */
        /* field_0x290 = (this->field_0x124 + this->field_0x49c); */
        /* field_0x294 = (this->field_0x50 + this->field_0x4a0); */
        /* field_0x29c = 0; */
        /* field_0x2a0 = 0; */
        /* field_0x298 = (this->field_0x134 + this->field_0x4a4); */
        /* field_0x2a8 = 1; */
        /* field_0x2a4 = 0; */
        /* field_0x2d0 = 3; */
        /* field_0x2dc = 37; */
        /* goto L_5994; */
        /* field_0x2ec = 0; */
        /* field_0x258 = 0; */
        /* field_0x10 = 0; */
        /* field_0x324 = 0; */
        /* field_0x694 = 255; */
        dComIfGp_getReverb((this->field_0x20a & 255));
        /* if (_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) == 0) goto L_5634; */
        /* goto L_5638; */
        /* L_5634:; */
        /* L_5638:; */
        /* ((JAIZelBasic*)(this->field_0x0))->monsSeStart(18607, (_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 608), -1, 0, dComIfGp_getReverb((this->field_0x20a & 255))); */
        /* if (this->field_0x2d1 != 7) goto L_5690; */
        /* field_0x254 = 0; */
        /* anm_init(_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), 21, 0, -1); */
        /* goto L_56e0; */
        /* L_5690:; */
        /* field_0x206 = (fopAcM_searchActorAngleY(_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), this->field_0x5b38) + -32768); */
        /* field_0x254 = 0; */
        /* field_0x258 = 0; */
        /* field_0x224 = 0; */
        /* field_0x2e2 = 200; */
        /* anm_init(_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), 19, 0, -1); */
        /* L_56e0:; */
        /* field_0x2dc = (this->field_0x2dc + 1); */
        /* goto L_5994; */
        /* if (this->field_0x2d1 != 7) goto L_5794; */
        /* if (this->field_0x5d != 0) goto L_5724; */
        /* if (/ * beq * / 1) goto L_5724; */
        /* L_5724:; */
        /* if (0 == 0) goto L_5994; */
        /* fopAcM_createDisappear(_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), (_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 504), 10, 0, this->field_0x28c); */
        /* fopAcM_delete(_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        ((dSv_info_c*)(((char*)&g_dComIfG_gameInfo + 0)))->onActor(this->field_0x1bc, (this->field_0x1e2 & 255));
        /* if (this->field_0x2cf == 255) goto L_5994; */
        /* if (this->field_0x2d6 == 0) goto L_5994; */
        ((dSv_info_c*)(((char*)&g_dComIfG_gameInfo + 0)))->onSwitch(this->field_0x2cf, (this->field_0x20a & 255));
        /* goto L_5994; */
        /* L_5794:; */
        /* cLib_addCalc0((_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 596)); */
        /* if (this->field_0x2f0 == 2) goto L_58b0; */
        /* if (/ * bge * / 1) goto L_57c4; */
        /* if (this->field_0x2f0 == 0) goto L_57d0; */
        /* if (/ * bge * / 1) goto L_5858; */
        /* goto L_5994; */
        /* L_57c4:; */
        /* if (this->field_0x2f0 >= 4) goto L_5994; */
        /* goto L_58f4; */
        /* L_57d0:; */
        /* if (this->field_0x2e2 == 0) goto L_57e8; */
        /* if (/ * beq * / 1) goto L_5994; */
        /* L_57e8:; */
        /* ((JAIZelBasic*)(this->field_0x0))->seStart(22697, (_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 608), 0, dComIfGp_getReverb((this->field_0x20a & 255)), 0); */
        /* anm_init(_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), 20, 0, -1); */
        /* field_0x2f0 = 1; */
        /* field_0x254 = 0; */
        /* goto L_5994; */
        /* L_5858:; */
        /* if (this->field_0x5d != 0) goto L_5880; */
        /* if (/ * beq * / 1) goto L_5880; */
        /* L_5880:; */
        /* if (0 == 0) goto L_5994; */
        /* field_0x2f0 = (this->field_0x2f0 + 1); */
        /* field_0x10 = 0; */
        /* field_0x324 = 3; */
        /* goto L_5994; */
        /* L_58b0:; */
        /* if (this->field_0x5 != 0) goto L_58dc; */
        /* if (/ * beq * / 1) goto L_58dc; */
        /* L_58dc:; */
        /* if (0 == 0) goto L_5994; */
        /* field_0x2f0 = (this->field_0x2f0 + 1); */
        /* goto L_5994; */
        /* L_58f4:; */
        /* if (this->field_0x2e2 == 0) goto L_590c; */
        /* if (/ * beq * / 1) goto L_5994; */
        /* L_590c:; */
        /* field_0x2f2 = (this->field_0x2f2 + 1); */
        /* if (this->field_0x2f2 <= 15) goto L_5994; */
        /* fopAcM_createDisappear(_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), (_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 504), 10, 0, this->field_0x28c); */
        /* if (this->field_0x2cf == 255) goto L_5968; */
        /* if (this->field_0x2d6 == 0) goto L_5968; */
        ((dSv_info_c*)(((char*)&g_dComIfG_gameInfo + 0)))->onSwitch(this->field_0x2cf, (this->field_0x20a & 255));
        /* L_5968:; */
        /* fopAcM_delete(_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        ((dSv_info_c*)(((char*)&g_dComIfG_gameInfo + 0)))->onActor(this->field_0x1bc, (this->field_0x1e2 & 255));
        /* field_0x2f0 = (this->field_0x2f0 + 1); */
        /* L_5994:; */
        /* field_0x2a4 = 0; */
        /* if (this->field_0x2dc < 74) goto L_5a10; */
        /* if (this->field_0x2dc > 77) goto L_5a10; */
        /* field_0x2da = (this->field_0x2da + 1); */
        /* if (this->field_0x2da <= 0) goto L_5a10; */
        /* if (this->field_0x2da >= 0) goto L_5a10; */
        /* field_0x2a4 = 0; */
        /* L_5a10:; */
        /* cLib_addCalcAngleS2((_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 800), 0, 1, 2048); */
        /* cLib_addCalcAngleS2((_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 524), 0, 1, 2048); */
        /* if (this->field_0x2dc == 81) goto L_5a68; */
        /* if (this->field_0x2dc == 101) goto L_5a68; */
        /* if (this->field_0x2dc == 85) goto L_5a68; */
        /* cLib_addCalcAngleS2((_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 526), this->field_0x206, 1, 2048); */
        /* L_5a68:; */
        /* if (this->field_0x344 == 19) goto L_5b00; */
        /* if (this->field_0x344 == 20) goto L_5b00; */
        /* if (body_atari_check(_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)) == 0) goto L_5b00; */
        /* field_0x2d0 = 10; */
        /* if (this->field_0x2d1 != 7) goto L_5aa8; */
        /* field_0x285 = 0; */
        /* L_5aa8:; */
        /* if (this->field_0x285 != 0) goto L_5ad4; */
        /* field_0x2dc = 80; */
        /* if (this->field_0x2d1 != 3) goto L_5b60; */
        /* field_0x2dc = 84; */
        /* goto L_5b60; */
        /* L_5ad4:; */
        /* if (this->field_0x2ce == 0) goto L_5aec; */
        /* field_0x2dc = 100; */
        /* goto L_5b60; */
        /* L_5aec:; */
        /* field_0x2d0 = 20; */
        /* field_0x2dc = 200; */
        /* goto L_5b60; */
        /* L_5b00:; */
        /* if (this->field_0x2dc == 71) goto L_5b1c; */
        /* if (this->field_0x2dc == 72) goto L_5b1c; */
        /* if (this->field_0x2dc != 73) goto L_5b3c; */
        /* L_5b1c:; */
        /* if (this->field_0x2ce == 1) goto L_5b3c; */
        /* if (this->field_0x2e6 != 0) goto L_5b3c; */
        /* field_0x2dc = 90; */
        /* L_5b3c:; */
        /* if (this->field_0x2d0 != 10) goto L_5b60; */
        /* if (/ * beq * / 1) goto L_5b60; */
        /* L_5b60:; */
        /* return _restgpr_28(fopAcM_getGroundAngle(_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), (_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1086))); */
}

/* 00005C78-00006A98       .text action_demo__FP8gm_class */
void action_demo(gm_class*) {
        /* _savegpr_14(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        ct();
        /* field_0xc = 0; */
        /* field_0xc = 0; */
        /* field_0x10 = 1; */
        /* if (/ * beq * / 1) goto L_5cf4; */
        /* L_5cf4:; */
        /* field_0x4 = 0; */
        /* if ((this->field_0x2dc + -200) > 23) goto L_67bc; */
        /* field_0x280 = 0; */
        /* if (this->field_0x285 != 0) goto L_5e10; */
        /* field_0x1f8 = 0; */
        /* field_0x1fc = 0; */
        /* field_0x200 = 0; */
        /* field_0x206 = 0; */
        /* field_0x20c = -16384; */
        /* field_0x44c = 1; */
        /* anm_init(_savegpr_14(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), 29, 2, -1); */
        /* field_0x320 = -32768; */
        /* L_5e10:; */
        /* field_0x2dc = (this->field_0x2dc + 1); */
        /* if (this->field_0xf8 == 2) goto L_5e64; */
        /* fopAcM_orderPotentialEvent(_savegpr_14(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), 2); */
        /* goto L_67bc; */
        /* L_5e64:; */
        /* field_0x304 = 3; */
        /* field_0x30c = 0; */
        /* field_0x314 = 1; */
        ((dCamera_c*)((this->field_0x5b04 + 580)))->Stop();
        ((dCamera_c*)((this->field_0x5b04 + 580)))->SetTrimSize(2);
        /* field_0x478 = 0; */
        /* if (this->field_0x285 != 0) goto L_5ec4; */
        /* field_0x2dc = (this->field_0x2dc + 1); */
        /* field_0x214 = 0; */
        /* field_0x218 = 0; */
        /* field_0x21c = 0; */
        /* goto L_67bc; */
        /* L_5ec4:; */
        /* field_0x10 = 0; */
        /* field_0x324 = 0; */
        /* field_0x206 = (fopAcM_searchActorAngleY(_savegpr_14(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), this->field_0x5b38) + -32768); */
        /* field_0x254 = 0; */
        /* field_0x258 = 0; */
        /* field_0x224 = 0; */
        /* field_0x314 = 29; */
        /* anm_init(_savegpr_14(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), 19, 0, -1); */
        /* field_0x2dc = 220; */
        /* goto L_67bc; */
        /* field_0x45c = (this->field_0x15c + this->field_0x6e8); */
        /* field_0x460 = (this->field_0x160 + this->field_0x6ec); */
        /* field_0x464 = (this->field_0x164 + this->field_0x6f0); */
        /* field_0x450 = (this->field_0x168 + this->field_0x6f4); */
        /* field_0x454 = (this->field_0x16c + this->field_0x6f8); */
        /* field_0x458 = (this->field_0x114 + this->field_0x6fc); */
        /* field_0x2e2 = 10; */
        /* field_0x2dc = (this->field_0x2dc + 1); */
        /* if (this->field_0x2e2 != 0) goto L_67bc; */
        /* field_0x314 = 2; */
        /* field_0x44c = 2; */
        /* field_0x306 = -32768; */
        /* field_0x1f8 = 0; */
        /* field_0x1fc = (this->field_0xf0 + this->field_0x708); */
        /* field_0x200 = 0; */
        /* ((JAIZelBasic*)(this->field_0x0))->bgmAllMute(30); */
        /* field_0x2e2 = 60; */
        /* field_0x2dc = 205; */
        /* goto L_67bc; */
        /* if (this->field_0x2e2 != 0) goto L_67bc; */
        /* field_0x314 = 26; */
        /* field_0x2e2 = 50; */
        /* field_0x2dc = (this->field_0x2dc + 1); */
        /* goto L_67bc; */
        /* if (this->field_0x2e2 != 0) goto L_67bc; */
        /* field_0x314 = 25; */
        /* field_0x2e2 = 80; */
        /* field_0x1f8 = 0; */
        /* field_0x1fc = 0; */
        /* field_0x200 = 0; */
        /* field_0x2dc = (this->field_0x2dc + 1); */
        /* goto L_67bc; */
        /* cLib_addCalc2((_savegpr_14(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1116), ((char*)&g_regHIO + 0)); */
        /* cLib_addCalc2((_savegpr_14(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1120), ((char*)&g_regHIO + 0)); */
        /* cLib_addCalc2((_savegpr_14(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1124), ((char*)&g_regHIO + 0)); */
        /* cLib_addCalc2((_savegpr_14(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1104), ((char*)&g_regHIO + 0)); */
        /* cLib_addCalc2((_savegpr_14(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1108), ((char*)&g_regHIO + 0)); */
        /* cLib_addCalc2((_savegpr_14(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1112), ((char*)&g_regHIO + 0)); */
        /* if (this->field_0x2e2 != 0) goto L_67bc; */
        /* field_0x206 = cM_atan2s(anm_init(_savegpr_14(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), 27, 2, -1)); */
        /* field_0x320 = 0; */
        /* field_0x20c = 16384; */
        /* field_0x20e = (this->field_0x20e + -32768); */
        /* field_0x2e2 = 47; */
        /* field_0x254 = 0; */
        /* field_0x258 = 0; */
        /* field_0x224 = 0; */
        /* field_0x314 = 0; */
        /* field_0x2dc = (this->field_0x2dc + 1); */
        /* goto L_67bc; */
        /* ((JAIZelBasic*)(this->field_0x0))->seStart(28721, (_savegpr_14(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 608), 0, dComIfGp_getReverb((this->field_0x20a & 255)), 0); */
        /* if (this->field_0x1fc >= (this->field_0x70 + this->field_0x1fc)) goto L_6358; */
        /* field_0x258 = 0; */
        /* field_0x224 = 0; */
        /* cLib_addCalc2((_savegpr_14(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 508)); */
        /* L_6358:; */
        /* cLib_addCalcAngleS2((_savegpr_14(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 526), this->field_0x206, 1, 4096); */
        /* cLib_addCalcAngleS2((_savegpr_14(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 524), 0, 1); */
        /* cLib_addCalc2((_savegpr_14(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1116)); */
        /* cLib_addCalc2((_savegpr_14(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1120), ((char*)&g_regHIO + 0)); */
        /* cLib_addCalc2((_savegpr_14(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1124)); */
        /* cLib_addCalc2((_savegpr_14(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1104), ((char*)&g_regHIO + 0)); */
        /* cLib_addCalc2((_savegpr_14(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1108), ((char*)&g_regHIO + 0)); */
        /* cLib_addCalc2((_savegpr_14(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1112), ((char*)&g_regHIO + 0)); */
        /* if (this->field_0x2e2 != 0) goto L_67bc; */
        ((dVibration_c*)(((char*)&g_dComIfG_gameInfo + 22944)))->StopQuake(32);
        ((dCamera_c*)((this->field_0x5b04 + 580)))->Reset();
        ((dCamera_c*)((this->field_0x5b04 + 580)))->Start();
        ((dCamera_c*)((this->field_0x5b04 + 580)))->SetTrimSize(0);
        /* field_0x280 = 4; */
        /* field_0x26e = 4; */
        /* field_0x204 = 0; */
        /* field_0x44c = 0; */
        /* ((JAIZelBasic*)(this->field_0x0))->subBgmStart(); */
        /* field_0x2d0 = 0; */
        /* field_0x2dc = 0; */
        /* goto L_67bc; */
        /* ((JAIZelBasic*)(this->field_0x0))->subBgmStop(); */
        /* field_0x2e2 = 200; */
        /* field_0x2dc = (this->field_0x2dc + 1); */
        /* if (/ * beq * / 1) goto L_65b8; */
        /* if (this->field_0x2e2 == 0) goto L_6588; */
        /* if (/ * beq * / 1) goto L_65b8; */
        /* L_6588:; */
        /* if (this->field_0x344 == 20) goto L_65b0; */
        /* anm_init(_savegpr_14(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), 20, 0, -1); */
        /* L_65b0:; */
        /* field_0x254 = 0; */
        /* L_65b8:; */
        /* fopAcM_searchActorAngleY(_savegpr_14(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), this->field_0x5b38); */
        /* if (this->field_0x514 != 0) goto L_67bc; */
        /* if (/ * bne * / 1) goto L_67bc; */
        /* if (this->field_0x344 != 20) goto L_67bc; */
        /* if (this->field_0x5d != 0) goto L_6640; */
        /* if (/ * beq * / 1) goto L_6640; */
        /* L_6640:; */
        /* if (0 == 0) goto L_67bc; */
        /* field_0x10 = 0; */
        /* field_0x324 = 3; */
        /* field_0x2dc = (this->field_0x2dc + 1); */
        /* goto L_67bc; */
        /* if (this->field_0x5 != 0) goto L_6698; */
        /* if (/ * beq * / 1) goto L_6698; */
        /* L_6698:; */
        /* if (0 == 0) goto L_67bc; */
        /* fopAcM_createDisappear(_savegpr_14(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), (_savegpr_14(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 504), 10, 0, this->field_0x28c); */
        /* field_0x214 = 0; */
        /* field_0x218 = 0; */
        /* field_0x21c = 0; */
        /* field_0x2e2 = 100; */
        /* field_0x2dc = (this->field_0x2dc + 1); */
        /* goto L_67bc; */
        /* if (this->field_0x2e2 != 0) goto L_67bc; */
        ((dVibration_c*)(((char*)&g_dComIfG_gameInfo + 22944)))->StopQuake(32);
        ((dCamera_c*)((this->field_0x5b04 + 580)))->Reset();
        ((dCamera_c*)((this->field_0x5b04 + 580)))->Start();
        ((dCamera_c*)((this->field_0x5b04 + 580)))->SetTrimSize(0);
        /* field_0x304 = 2; */
        /* field_0x314 = 1; */
        /* if (this->field_0x2cf == 255) goto L_679c; */
        /* if (this->field_0x2d6 == 0) goto L_679c; */
        ((dSv_info_c*)(((char*)&g_dComIfG_gameInfo + 0)))->onSwitch(this->field_0x2cf, (this->field_0x20a & 255));
        /* L_679c:; */
        /* fopAcM_delete(_savegpr_14(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        ((dSv_info_c*)(((char*)&g_dComIfG_gameInfo + 0)))->onActor(this->field_0x1bc, (this->field_0x1e2 & 255));
        /* L_67bc:; */
        /* if (this->field_0x2dc < 221) goto L_6850; */
        /* field_0x45c = 0; */
        /* field_0x460 = 0; */
        /* field_0x464 = 0; */
        /* mDoMtx_YrotS(this->field_0x0, fopAcM_searchActorAngleY(this->field_0x5b38, _savegpr_14(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7))); */
        MtxPosition();
        PSVECAdd();
        /* field_0x450 = 0; */
        /* field_0x454 = (this->field_0x124 + this->field_0x54); */
        /* field_0x458 = 0; */
        /* L_6850:; */
        /* if (this->field_0x2dc < 203) goto L_68ac; */
        /* if (this->field_0x2dc == 220) goto L_68ac; */
        ((dCamera_c*)((this->field_0x5b04 + 580)))->Set();
        /* L_68ac:; */
        /* if (/ * beq * / 1) goto L_6954; */
        /* if (/ * beq * / 1) goto L_6930; */
        /* if (/ * beq * / 1) goto L_6930; */
        /* L_6930:; */
        /* if (/ * beq * / 1) goto L_6954; */
        /* if (/ * beq * / 1) goto L_6954; */
        /* L_6954:; */
        return _restgpr_14(__dt());
}

/* 00006A98-00007770       .text daGM_Execute__FP8gm_class */
static BOOL daGM_Execute(gm_class*) {
        /* _savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* if (this->field_0x2cd != 0) goto L_704c; */
        /* fopAcM_setGbaName(_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), 45, 9, 38); */
        /* if (this->field_0x44c == 1) goto L_6e00; */
        /* if (/ * bne * / 1) goto L_6bb0; */
        /* if (this->field_0x2d3 == 2) goto L_6ac4; */
        /* if (/ * bge * / 1) goto L_6a1c; */
        /* if (this->field_0x2d3 == 0) goto L_6a2c; */
        /* if (/ * bge * / 1) goto L_6a94; */
        /* goto L_6b84; */
        /* L_6a1c:; */
        /* if (this->field_0x2d3 == 4) goto L_6b38; */
        /* if (/ * bge * / 1) goto L_6b84; */
        /* goto L_6b08; */
        /* L_6a2c:; */
        /* field_0xb78 = ((dPa_control_c*)(this->field_0x5ab8))->set(0); */
        /* if (this->field_0xb78 == 0) goto L_6b84; */
        /* field_0x2d3 = (this->field_0x2d3 + 1); */
        /* goto L_6b84; */
        /* L_6a94:; */
        /* if (this->field_0xb78 == 0) goto L_6b84; */
        /* if (this->field_0x2d0 != 5) goto L_6b84; */
        /* field_0x2de = 0; */
        /* field_0x2d3 = (this->field_0x2d3 + 1); */
        /* goto L_6b84; */
        /* L_6ac4:; */
        /* if (this->field_0xb78 == 0) goto L_6b84; */
        /* field_0x38 = 0; */
        /* field_0x78 = 0; */
        /* field_0x1fc = 255; */
        /* field_0x1fd = 0; */
        /* field_0x1fe = 0; */
        /* field_0x2d3 = (this->field_0x2d3 + 1); */
        /* goto L_6b84; */
        /* L_6b08:; */
        /* if (this->field_0xb78 == 0) goto L_6b84; */
        /* field_0x38 = 0; */
        /* field_0x78 = 0; */
        /* field_0x2d3 = (this->field_0x2d3 + 1); */
        /* goto L_6b84; */
        /* L_6b38:; */
        /* if (this->field_0xb78 == 0) goto L_6b84; */
        /* field_0x2de = (this->field_0x2de + 17); */
        /* if (this->field_0x2de <= 255) goto L_6b6c; */
        /* field_0x2de = 255; */
        /* field_0x2d3 = 1; */
        /* L_6b6c:; */
        /* field_0x1fc = 255; */
        /* L_6b84:; */
        /* if (this->field_0xb78 == 0) goto L_6bdc; */
        JPASetRMtxTVecfromMtx((this->field_0x8c + 816), (this->field_0xb78 + 424), (this->field_0xb78 + 484));
        /* goto L_6bdc; */
        /* L_6bb0:; */
        /* if (this->field_0xb78 == 0) goto L_6bdc; */
        /* field_0x60 = -1; */
        /* field_0x2d3 = 0; */
        /* field_0xb78 = 0; */
        /* L_6bdc:; */
        /* if (/ * bne * / 1) goto L_6dd4; */
        /* if (this->field_0x2d4 == 2) goto L_6cb0; */
        /* if (/ * bge * / 1) goto L_6c08; */
        /* if (this->field_0x2d4 == 0) goto L_6c18; */
        /* if (/ * bge * / 1) goto L_6c80; */
        /* goto L_6d70; */
        /* L_6c08:; */
        /* if (this->field_0x2d4 == 4) goto L_6d24; */
        /* if (/ * bge * / 1) goto L_6d70; */
        /* goto L_6cf4; */
        /* L_6c18:; */
        /* field_0xb7c = ((dPa_control_c*)(this->field_0x5ab8))->set(0); */
        /* if (this->field_0xb7c == 0) goto L_6d70; */
        /* field_0x2d4 = (this->field_0x2d4 + 1); */
        /* goto L_6d70; */
        /* L_6c80:; */
        /* if (this->field_0xb7c == 0) goto L_6d70; */
        /* if (this->field_0x2d0 != 5) goto L_6d70; */
        /* field_0x2e0 = 0; */
        /* field_0x2d4 = (this->field_0x2d4 + 1); */
        /* goto L_6d70; */
        /* L_6cb0:; */
        /* if (this->field_0xb7c == 0) goto L_6d70; */
        /* field_0x38 = 0; */
        /* field_0x78 = 0; */
        /* field_0x1fc = 255; */
        /* field_0x1fd = 0; */
        /* field_0x1fe = 0; */
        /* field_0x2d4 = (this->field_0x2d4 + 1); */
        /* goto L_6d70; */
        /* L_6cf4:; */
        /* if (this->field_0xb7c == 0) goto L_6d70; */
        /* field_0x38 = 0; */
        /* field_0x78 = 0; */
        /* field_0x2d4 = (this->field_0x2d4 + 1); */
        /* goto L_6d70; */
        /* L_6d24:; */
        /* if (this->field_0xb7c == 0) goto L_6d70; */
        /* field_0x2e0 = (this->field_0x2e0 + 17); */
        /* if (this->field_0x2e0 <= 255) goto L_6d58; */
        /* field_0x2e0 = 255; */
        /* field_0x2d4 = 1; */
        /* L_6d58:; */
        /* field_0x1fc = 255; */
        /* L_6d70:; */
        /* if (this->field_0xb7c == 0) goto L_6e00; */
        JPASetRMtxTVecfromMtx((this->field_0x8c + 912), (this->field_0xb7c + 424), (this->field_0xb7c + 484));
        /* field_0x24 = 18204; */
        /* field_0x26 = -5461; */
        /* field_0x28 = 0; */
        /* field_0x18 = 0; */
        /* field_0x1c = 0; */
        /* field_0x20 = 0; */
        /* goto L_6e00; */
        /* L_6dd4:; */
        /* if (this->field_0xb7c == 0) goto L_6e00; */
        /* field_0x60 = -1; */
        /* field_0x2d4 = 0; */
        /* field_0xb7c = 0; */
        /* L_6e00:; */
        /* if (this->field_0x2ee != 0) goto L_6e20; */
        /* if (this->field_0x2dc == 34) goto L_6e20; */
        /* if (this->field_0x2dc != 208) goto L_6f70; */
        /* L_6e20:; */
        /* if (this->field_0x2d5 == 1) goto L_6ea4; */
        /* if (/ * bge * / 1) goto L_6f08; */
        /* if (this->field_0x2d5 >= 0) goto L_6e3c; */
        /* goto L_6f08; */
        /* L_6e3c:; */
        /* field_0xb80 = ((dPa_control_c*)(this->field_0x5ab8))->set(0); */
        /* if (this->field_0xb80 == 0) goto L_6f08; */
        /* field_0x2d5 = (this->field_0x2d5 + 1); */
        /* goto L_6f08; */
        /* L_6ea4:; */
        /* field_0xb84 = ((dPa_control_c*)(this->field_0x5ab8))->set(0); */
        /* if (this->field_0xb84 == 0) goto L_6f08; */
        /* field_0x2d5 = (this->field_0x2d5 + 1); */
        /* L_6f08:; */
        /* if (this->field_0x2dc != 34) goto L_6f1c; */
        /* field_0x2ee = 45; */
        /* L_6f1c:; */
        /* if (this->field_0xb80 == 0) goto L_6f44; */
        JPASetRMtxTVecfromMtx((this->field_0x8c + 144), (this->field_0xb80 + 424), (this->field_0xb80 + 484));
        /* L_6f44:; */
        /* if (this->field_0xb84 == 0) goto L_6fc8; */
        JPASetRMtxTVecfromMtx((this->field_0x8c + 144), (this->field_0xb84 + 424), (this->field_0xb84 + 484));
        /* goto L_6fc8; */
        /* L_6f70:; */
        /* if (this->field_0xb80 == 0) goto L_6f9c; */
        /* field_0x60 = -1; */
        /* field_0x2d5 = 0; */
        /* field_0xb80 = 0; */
        /* L_6f9c:; */
        /* if (this->field_0xb84 == 0) goto L_6fc8; */
        /* field_0x60 = -1; */
        /* field_0x2d5 = 0; */
        /* field_0xb84 = 0; */
        /* L_6fc8:; */
        /* if (this->field_0x2cd != 0) goto L_704c; */
        /* if (enemy_ice((_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 2972)) == 0) goto L_704c; */
        PSMTXCopy(((char*)&now__14mDoMtx_stack_c + 0), (this->field_0x50 + 36));
        /* ((mDoExt_McaMorf*)(this->field_0x2b4))->calc(); */
        /* field_0x274 = 0; */
        /* field_0x278 = 0; */
        /* field_0x27c = 0; */
        /* field_0x278 = (this->field_0x278 + this->field_0x50); */
        /* field_0x260 = 0; */
        /* field_0x264 = 0; */
        /* field_0x268 = 0; */
        return 1;
        /* L_704c:; */
        /* if (/ * beq * / 1) goto L_7070; */
        /* L_7070:; */
        /* if (this->field_0x2d0 > 20) goto L_70f8; */
        /* action_dousa(_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* goto L_70f8; */
        /* action_hane_rakka(_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* goto L_70f8; */
        /* action_uchiwa_dousa(_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* goto L_70f8; */
        /* action_totugeki(_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* goto L_70f8; */
        /* action_kabehari(_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* goto L_70f8; */
        /* action_fly_damage(_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* goto L_70f8; */
        /* action_ground_attack(_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* goto L_70f8; */
        /* action_demo(_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* L_70f8:; */
        /* mDoMtx_YrotS(this->field_0x0, this->field_0x206); */
        /* mDoMtx_XrotM(this->field_0x0, this->field_0x204); */
        MtxPosition();
        /* field_0x220 = 0; */
        /* field_0x228 = 0; */
        /* field_0x224 = (this->field_0x224 + this->field_0x258); */
        /* if (this->field_0x224 >= this->field_0x148) goto L_7174; */
        /* field_0x224 = 0; */
        /* L_7174:; */
        /* if (this->field_0x2cd != 0) goto L_7620; */
        /* if (this->field_0x2d0 == 20) goto L_71ec; */
        /* if (this->field_0x2d0 == 10) goto L_719c; */
        /* body_atari_check(_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* L_719c:; */
        /* if (this->field_0x2d0 == 5) goto L_71b8; */
        /* if (this->field_0x2d0 == 2) goto L_71b8; */
        /* wing_ret_set(_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* L_71b8:; */
        /* if (this->field_0x2d0 == 2) goto L_71ec; */
        /* cLib_addCalcAngleS2((_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 528), this->field_0x436, 1, 256); */
        /* cLib_addCalcAngleS2((_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1078), 0, 1, 256); */
        /* L_71ec:; */
        /* if (this->field_0x2ec != 0) goto L_7244; */
        /* if (/ * beq * / 1) goto L_7224; */
        /* ((dBgS*)(((char*)&g_dComIfG_gameInfo + 4768)))->GetMtrlSndId((_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1444)); */
        /* goto L_7228; */
        /* L_7224:; */
        /* L_7228:; */
        /* ((mDoExt_McaMorf*)(this->field_0x2b4))->play((_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 608), 0, dComIfGp_getReverb((this->field_0x20a & 255))); */
        /* L_7244:; */
        /* if (this->field_0x324 == 2) goto L_7278; */
        /* if (/ * bge * / 1) goto L_7260; */
        /* if (this->field_0x324 >= 1) goto L_726c; */
        /* goto L_7290; */
        /* L_7260:; */
        /* if (this->field_0x324 >= 4) goto L_7290; */
        /* goto L_7284; */
        /* L_726c:; */
        /* ((mDoExt_baseAnm*)(this->field_0x2c4))->play(); */
        /* goto L_7298; */
        /* L_7278:; */
        /* ((mDoExt_baseAnm*)(this->field_0x2c0))->play(); */
        /* goto L_7298; */
        /* L_7284:; */
        /* ((mDoExt_baseAnm*)(this->field_0x2c8))->play(); */
        /* goto L_7298; */
        /* L_7290:; */
        /* ((mDoExt_baseAnm*)(this->field_0x2bc))->play(); */
        /* L_7298:; */
        __pl();
        /* if (this->field_0x2d0 == 20) goto L_74dc; */
        /* if (this->field_0x2d0 != 10) goto L_7330; */
        /* field_0x274 = 0; */
        /* field_0x278 = 0; */
        /* field_0x27c = 0; */
        /* field_0x278 = (this->field_0x278 + this->field_0x98); */
        /* field_0x260 = 0; */
        /* field_0x264 = 0; */
        /* field_0x268 = 0; */
        /* goto L_736c; */
        /* L_7330:; */
        /* field_0x274 = 0; */
        /* field_0x278 = 0; */
        /* field_0x27c = 0; */
        /* field_0x278 = (this->field_0x278 + this->field_0x50); */
        /* field_0x260 = 0; */
        /* field_0x264 = 0; */
        /* field_0x268 = 0; */
        /* L_736c:; */
        /* if (this->field_0x2dc == 34) goto L_73c4; */
        /* ((cM3dGCyl*)((_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 2004)))->SetC(); */
        /* ((cM3dGCyl*)((_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 2004)))->SetH(); */
        /* ((cM3dGCyl*)((_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 2004)))->SetR(); */
        /* ((cCcS*)(((char*)&g_dComIfG_gameInfo + 9892)))->Set((_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1724)); */
        /* goto L_7430; */
        /* L_73c4:; */
        __pl();
        /* ((cM3dGCyl*)((_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 2004)))->SetC(); */
        /* ((cM3dGCyl*)((_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 2004)))->SetH(); */
        /* ((cM3dGCyl*)((_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 2004)))->SetR(); */
        /* ((cCcS*)(((char*)&g_dComIfG_gameInfo + 9892)))->Set((_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1724)); */
        /* L_7430:; */
        __pl();
        /* ((cM3dGCyl*)((_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 2308)))->SetC(); */
        /* ((cM3dGCyl*)((_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 2308)))->SetH(); */
        /* ((cM3dGCyl*)((_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 2308)))->SetR(); */
        /* ((cCcS*)(((char*)&g_dComIfG_gameInfo + 9892)))->Set((_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 2028)); */
        /* ((dCcMassS_Mng*)(((char*)&g_dComIfG_gameInfo + 20216)))->Set((_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 2028), 3); */
        /* ((cM3dGSph*)((_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 2916)))->SetC((_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 936)); */
        /* ((cM3dGSph*)((_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 2916)))->SetR(); */
        /* ((cCcS*)(((char*)&g_dComIfG_gameInfo + 9892)))->Set((_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 2636)); */
        /* L_74dc:; */
        /* if (this->field_0x44c != 0) goto L_7620; */
        /* if ((this->field_0x2cc & 268435455) == 15) goto L_7620; */
        /* if (this->field_0x2dc == 34) goto L_7620; */
        __pl();
        /* field_0x31c = (this->field_0x31c + 1000); */
        /* field_0x408 = (this->field_0x64 * this->field_0x20); */
        /* field_0x410 = (this->field_0x64 * (this->field_0x64 * this->field_0x20)); */
        /* ((cM3dGCyl*)((_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 2612)))->SetC(); */
        /* ((cM3dGCyl*)((_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 2612)))->SetH(); */
        /* ((cM3dGCyl*)((_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 2612)))->SetR(); */
        /* ((cCcS*)(((char*)&g_dComIfG_gameInfo + 9892)))->Set((_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 2332)); */
        /* if (this->field_0x2d0 == 5) goto L_7620; */
        /* if (this->field_0x2d0 == 2) goto L_7620; */
        /* ((dCcMassS_Mng*)(((char*)&g_dComIfG_gameInfo + 20216)))->Set((_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 2332), 3); */
        /* L_7620:; */
        /* if (this->field_0x2dc == 34) goto L_7648; */
        /* if (this->field_0x2d0 == 20) goto L_7648; */
        /* fopAcM_posMove(_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), (_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1664)); */
        /* goto L_7654; */
        /* L_7648:; */
        /* fopAcM_posMove(_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), 0); */
        /* L_7654:; */
        /* BG_check(_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* draw_SUB(_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        return _restgpr_28(1);
}

/* 00007770-00007778       .text daGM_IsDelete__FP8gm_class */
static BOOL daGM_IsDelete(gm_class*) {
    return 1;
}

/* 00007778-000078C4       .text daGM_Delete__FP8gm_class */
static BOOL daGM_Delete(gm_class*) {
        /* dComIfG_resDelete((arg0 + 684), ((char*)&@stringBase0 + 0), arg2); */
        /* if (this->field_0xf0 == 0) goto L_76c0; */
        /* ((mDoExt_McaMorf*)(this->field_0x2b4))->stopZelAnime(); */
        /* L_76c0:; */
        enemy_fire_remove((arg0 + 3924));
        /* if ((this->field_0x285 & 255) != -128) goto L_771c; */
        /* if (this->field_0x2cf == 255) goto L_7704; */
        /* if (this->field_0x2d6 == 0) goto L_7704; */
        ((dSv_info_c*)(((char*)&g_dComIfG_gameInfo + 0)))->onSwitch(this->field_0x2cf, (this->field_0x20a & 255));
        /* L_7704:; */
        ((dSv_info_c*)(((char*)&g_dComIfG_gameInfo + 0)))->onActor(this->field_0x1bc, (this->field_0x1e2 & 255));
        /* L_771c:; */
        /* if (this->field_0xb78 == 0) goto L_7744; */
        /* field_0x60 = -1; */
        /* field_0xb78 = 0; */
        /* L_7744:; */
        /* if (this->field_0xb7c == 0) goto L_776c; */
        /* field_0x60 = -1; */
        /* field_0xb7c = 0; */
        /* L_776c:; */
        /* if (this->field_0xb80 == 0) goto L_7794; */
        /* field_0x60 = -1; */
        /* field_0xb80 = 0; */
        /* L_7794:; */
        /* if (this->field_0xb84 == 0) goto L_77bc; */
        /* field_0x60 = -1; */
        /* field_0xb84 = 0; */
        /* L_77bc:; */
        return 1;
}

/* 000078C4-00007E74       .text useHeapInit__FP10fopAc_ac_c */
static BOOL useHeapInit(fopAc_ac_c*) {
        /* _savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* if (this->field_0x2cd != 0) goto L_7890; */
        __nw(180);
        /* if (/ * beq * / 1) goto L_7888; */
        /* L_7888:; */
        /* field_0x2b4 = __ct(((dRes_control_c*)(((char*)&@stringBase0 + 0)))->getRes(33, ((char*)&g_dComIfG_gameInfo + -16460), 64), 1, ((dRes_control_c*)(((char*)&@stringBase0 + 0)))->getRes(33, ((char*)&g_dComIfG_gameInfo + -16460), 64), 0, 0, 0, 1, 0); */
        /* goto L_79d0; */
        /* L_7890:; */
        /* if (this->field_0x2cc >= 3) goto L_78a8; */
        /* if (this->field_0x2cc >= 1) goto L_78b4; */
        /* goto L_79d0; */
        /* L_78a8:; */
        /* if (this->field_0x2cc >= 5) goto L_79d0; */
        /* goto L_7944; */
        /* L_78b4:; */
        __nw(180);
        /* if (/ * beq * / 1) goto L_793c; */
        /* L_793c:; */
        /* field_0x2b4 = __ct(__ct(((dRes_control_c*)(((char*)&@stringBase0 + 0)))->getRes(33, ((char*)&g_dComIfG_gameInfo + -16460), 64), 1, ((dRes_control_c*)(((char*)&@stringBase0 + 0)))->getRes(33, ((char*)&g_dComIfG_gameInfo + -16460), 64), 0, 0, 0, 1, 0), 1, ((dRes_control_c*)(((char*)&@stringBase0 + 0)))->getRes(34, ((char*)&g_dComIfG_gameInfo + -16460), 64), 0, 0, 0, 2, 0); */
        /* goto L_79d0; */
        /* L_7944:; */
        __nw(180);
        /* if (/ * beq * / 1) goto L_79cc; */
        /* L_79cc:; */
        /* field_0x2b4 = __ct(__ct(__ct(((dRes_control_c*)(((char*)&@stringBase0 + 0)))->getRes(33, ((char*)&g_dComIfG_gameInfo + -16460), 64), 1, ((dRes_control_c*)(((char*)&@stringBase0 + 0)))->getRes(33, ((char*)&g_dComIfG_gameInfo + -16460), 64), 0, 0, 0, 1, 0), 1, ((dRes_control_c*)(((char*)&@stringBase0 + 0)))->getRes(34, ((char*)&g_dComIfG_gameInfo + -16460), 64), 0, 0, 0, 2, 0), 1, ((dRes_control_c*)(((char*)&@stringBase0 + 0)))->getRes(35, ((char*)&g_dComIfG_gameInfo + -16460), 64), 0, 0, 0, 2, 0); */
        /* L_79d0:; */
        /* if (this->field_0x2b4 == 0) goto L_79e8; */
        /* if (this->field_0x50 != 0) goto L_79f0; */
        /* L_79e8:; */
        return 0;
        /* L_79f0:; */
        /* if (this->field_0x2cd != 0) goto L_7a44; */
        /* field_0x14 = _savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* goto L_7a28; */
        /* L_7a10:; */
        /* field_0x8 = 0; */
        /* L_7a28:; */
        /* if (((0 + 1) & 65535) < this->field_0x28) goto L_7a10; */
        /* L_7a44:; */
        /* if (this->field_0x2cd != 0) goto L_7d3c; */
        /* if (__nw(24) == 0) goto L_7a94; */
        /* field_0x0 = 0; */
        /* field_0x4 = 0; */
        /* field_0x0 = 0; */
        /* field_0xc = 0; */
        /* field_0x10 = 0; */
        /* L_7a94:; */
        /* field_0x2bc = __nw(24); */
        /* if (this->field_0x2bc != 0) goto L_7aac; */
        return 0;
        /* L_7aac:; */
        /* if (((mDoExt_brkAnm*)(this->field_0x2bc))->init(this->field_0x4, ((dRes_control_c*)(((char*)&@stringBase0 + 0)))->getRes(41, (__ct(__ct(__ct(((dRes_control_c*)(((char*)&@stringBase0 + 0)))->getRes(33, ((char*)&g_dComIfG_gameInfo + -16460), 64), 1, ((dRes_control_c*)(((char*)&@stringBase0 + 0)))->getRes(33, ((char*)&g_dComIfG_gameInfo + -16460), 64), 0, 0, 0, 1, 0), 1, ((dRes_control_c*)(((char*)&@stringBase0 + 0)))->getRes(34, ((char*)&g_dComIfG_gameInfo + -16460), 64), 0, 0, 0, 2, 0), 1, ((dRes_control_c*)(((char*)&@stringBase0 + 0)))->getRes(35, ((char*)&g_dComIfG_gameInfo + -16460), 64), 0, 0, 0, 2, 0) + -16460), 64), 1, 2, 0, -1, 0) != 0) goto L_7b18; */
        return 0;
        /* L_7b18:; */
        /* if (__nw(24) == 0) goto L_7b50; */
        /* field_0x0 = 0; */
        /* field_0x4 = 0; */
        /* field_0x0 = 0; */
        /* field_0xc = 0; */
        /* field_0x10 = 0; */
        /* L_7b50:; */
        /* field_0x2c0 = __nw(24); */
        /* if (this->field_0x2c0 != 0) goto L_7b68; */
        return 0;
        /* L_7b68:; */
        /* if (((mDoExt_brkAnm*)(this->field_0x2c0))->init(this->field_0x4, ((dRes_control_c*)(((char*)&@stringBase0 + 0)))->getRes(38, (__ct(__ct(__ct(((dRes_control_c*)(((char*)&@stringBase0 + 0)))->getRes(33, ((char*)&g_dComIfG_gameInfo + -16460), 64), 1, ((dRes_control_c*)(((char*)&@stringBase0 + 0)))->getRes(33, ((char*)&g_dComIfG_gameInfo + -16460), 64), 0, 0, 0, 1, 0), 1, ((dRes_control_c*)(((char*)&@stringBase0 + 0)))->getRes(34, ((char*)&g_dComIfG_gameInfo + -16460), 64), 0, 0, 0, 2, 0), 1, ((dRes_control_c*)(((char*)&@stringBase0 + 0)))->getRes(35, ((char*)&g_dComIfG_gameInfo + -16460), 64), 0, 0, 0, 2, 0) + -16460), 64), 1, 2, 0, -1, 0) != 0) goto L_7bc4; */
        return 0;
        /* L_7bc4:; */
        /* if (__nw(24) == 0) goto L_7bfc; */
        /* field_0x0 = 0; */
        /* field_0x4 = 0; */
        /* field_0x0 = 0; */
        /* field_0xc = 0; */
        /* field_0x10 = 0; */
        /* L_7bfc:; */
        /* field_0x2c4 = __nw(24); */
        /* if (this->field_0x2c4 != 0) goto L_7c14; */
        return 0;
        /* L_7c14:; */
        /* if (((mDoExt_brkAnm*)(this->field_0x2c4))->init(this->field_0x4, ((dRes_control_c*)(((char*)&@stringBase0 + 0)))->getRes(39, (__ct(__ct(__ct(((dRes_control_c*)(((char*)&@stringBase0 + 0)))->getRes(33, ((char*)&g_dComIfG_gameInfo + -16460), 64), 1, ((dRes_control_c*)(((char*)&@stringBase0 + 0)))->getRes(33, ((char*)&g_dComIfG_gameInfo + -16460), 64), 0, 0, 0, 1, 0), 1, ((dRes_control_c*)(((char*)&@stringBase0 + 0)))->getRes(34, ((char*)&g_dComIfG_gameInfo + -16460), 64), 0, 0, 0, 2, 0), 1, ((dRes_control_c*)(((char*)&@stringBase0 + 0)))->getRes(35, ((char*)&g_dComIfG_gameInfo + -16460), 64), 0, 0, 0, 2, 0) + -16460), 64), 1, 0, 0, -1, 0) != 0) goto L_7c70; */
        return 0;
        /* L_7c70:; */
        /* if (__nw(24) == 0) goto L_7ca8; */
        /* field_0x0 = 0; */
        /* field_0x4 = 0; */
        /* field_0x0 = 0; */
        /* field_0xc = 0; */
        /* field_0x10 = 0; */
        /* L_7ca8:; */
        /* field_0x2c8 = __nw(24); */
        /* if (this->field_0x2c8 != 0) goto L_7cc0; */
        return 0;
        /* L_7cc0:; */
        /* if (((mDoExt_brkAnm*)(this->field_0x2c8))->init(this->field_0x4, ((dRes_control_c*)(((char*)&@stringBase0 + 0)))->getRes(40, (__ct(__ct(__ct(((dRes_control_c*)(((char*)&@stringBase0 + 0)))->getRes(33, ((char*)&g_dComIfG_gameInfo + -16460), 64), 1, ((dRes_control_c*)(((char*)&@stringBase0 + 0)))->getRes(33, ((char*)&g_dComIfG_gameInfo + -16460), 64), 0, 0, 0, 1, 0), 1, ((dRes_control_c*)(((char*)&@stringBase0 + 0)))->getRes(34, ((char*)&g_dComIfG_gameInfo + -16460), 64), 0, 0, 0, 2, 0), 1, ((dRes_control_c*)(((char*)&@stringBase0 + 0)))->getRes(35, ((char*)&g_dComIfG_gameInfo + -16460), 64), 0, 0, 0, 2, 0) + -16460), 64), 1, 0, 0, -1, 0) != 0) goto L_7d1c; */
        return 0;
        /* L_7d1c:; */
        /* if (((mDoExt_invisibleModel*)((_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 4476)))->create(this->field_0x50) != 0) goto L_7d3c; */
        return 0;
        /* L_7d3c:; */
        /* field_0x444 = mDoExt_J3DModel(this->field_0x4); */
        /* if (this->field_0x444 != 0) goto L_7d68; */
        return 0;
        /* L_7d68:; */
        return _restgpr_28(1);
}

/* 00007EBC-0000842C       .text daGM_Create__FP10fopAc_ac_c */
static cPhs_State daGM_Create(fopAc_ac_c*) {
    /* Nonmatching */
    static dCcD_SrcSph weapon_co_sph_src = {
        // dCcD_SrcGObjInf
        {
            /* Flags             */ 0,
            /* SrcObjAt  Type    */ AT_TYPE_UNK800,
            /* SrcObjAt  Atp     */ 1,
            /* SrcObjAt  SPrm    */ cCcD_AtSPrm_Set_e | cCcD_AtSPrm_VsPlayer_e | cCcD_AtSPrm_VsOther_e,
            /* SrcObjTg  Type    */ 0,
            /* SrcObjTg  SPrm    */ 0,
            /* SrcObjCo  SPrm    */ 0,
            /* SrcGObjAt Se      */ dCcG_SE_UNK2,
            /* SrcGObjAt HitMark */ dCcG_AtHitMark_None_e,
            /* SrcGObjAt Spl     */ dCcG_At_Spl_UNK0,
            /* SrcGObjAt Mtrl    */ 0,
            /* SrcGObjAt SPrm    */ 0,
            /* SrcGObjTg Se      */ 0,
            /* SrcGObjTg HitMark */ 0,
            /* SrcGObjTg Spl     */ dCcG_Tg_Spl_UNK0,
            /* SrcGObjTg Mtrl    */ 0,
            /* SrcGObjTg SPrm    */ dCcG_TgSPrm_NoConHit_e | dCcG_TgSPrm_NoHitMark_e,
            /* SrcGObjCo SPrm    */ 0,
        },
        // cM3dGSphS
        {{
            /* Center */ {0.0f, 0.0f, 0.0f},
            /* Radius */ 15.0f,
        }},
    };
    static dCcD_SrcCyl body_co_cyl_src = {
        // dCcD_SrcGObjInf
        {
            /* Flags             */ 0,
            /* SrcObjAt  Type    */ AT_TYPE_SPIKE,
            /* SrcObjAt  Atp     */ 0,
            /* SrcObjAt  SPrm    */ 0,
            /* SrcObjTg  Type    */ AT_TYPE_ALL & ~AT_TYPE_WATER & ~AT_TYPE_UNK20000 & ~AT_TYPE_UNK400000 & ~AT_TYPE_LIGHT,
            /* SrcObjTg  SPrm    */ cCcD_TgSPrm_Set_e | cCcD_TgSPrm_IsEnemy_e,
            /* SrcObjCo  SPrm    */ cCcD_CoSPrm_Set_e | cCcD_CoSPrm_IsPlayer_e | cCcD_CoSPrm_VsGrpAll_e,
            /* SrcGObjAt Se      */ dCcG_SE_METAL,
            /* SrcGObjAt HitMark */ dCcG_AtHitMark_None_e,
            /* SrcGObjAt Spl     */ dCcG_At_Spl_UNK0,
            /* SrcGObjAt Mtrl    */ 0,
            /* SrcGObjAt SPrm    */ 0,
            /* SrcGObjTg Se      */ 0,
            /* SrcGObjTg HitMark */ 0,
            /* SrcGObjTg Spl     */ dCcG_Tg_Spl_UNK0,
            /* SrcGObjTg Mtrl    */ 0,
            /* SrcGObjTg SPrm    */ dCcG_TgSPrm_NoConHit_e | dCcG_TgSPrm_NoHitMark_e,
            /* SrcGObjCo SPrm    */ 0,
        },
        // cM3dGCylS
        {{
            /* Center */ {0.0f, 0.0f, 0.0f},
            /* Radius */ 15.0f,
            /* Height */ 0.0f,
        }},
    };
    static dCcD_SrcCyl wing_co_cyl_src = {
        // dCcD_SrcGObjInf
        {
            /* Flags             */ 0,
            /* SrcObjAt  Type    */ AT_TYPE_SPIKE,
            /* SrcObjAt  Atp     */ 2,
            /* SrcObjAt  SPrm    */ cCcD_AtSPrm_Set_e | cCcD_AtSPrm_VsPlayer_e | cCcD_AtSPrm_VsOther_e,
            /* SrcObjTg  Type    */ 0,
            /* SrcObjTg  SPrm    */ 0,
            /* SrcObjCo  SPrm    */ 0,
            /* SrcGObjAt Se      */ dCcG_SE_METAL,
            /* SrcGObjAt HitMark */ dCcG_AtHitMark_None_e,
            /* SrcGObjAt Spl     */ dCcG_At_Spl_UNK6,
            /* SrcGObjAt Mtrl    */ 0,
            /* SrcGObjAt SPrm    */ 0,
            /* SrcGObjTg Se      */ 0,
            /* SrcGObjTg HitMark */ 0,
            /* SrcGObjTg Spl     */ dCcG_Tg_Spl_UNK0,
            /* SrcGObjTg Mtrl    */ 0,
            /* SrcGObjTg SPrm    */ dCcG_TgSPrm_NoConHit_e | dCcG_TgSPrm_NoHitMark_e,
            /* SrcGObjCo SPrm    */ 0,
        },
        // cM3dGCylS
        {{
            /* Center */ {0.0f, 0.0f, 0.0f},
            /* Radius */ 15.0f,
            /* Height */ 0.0f,
        }},
    };
    static dCcD_SrcCyl wind_co_cyl_src = {
        // dCcD_SrcGObjInf
        {
            /* Flags             */ 0,
            /* SrcObjAt  Type    */ AT_TYPE_WIND,
            /* SrcObjAt  Atp     */ 0,
            /* SrcObjAt  SPrm    */ cCcD_AtSPrm_Set_e | cCcD_AtSPrm_VsPlayer_e | cCcD_AtSPrm_VsOther_e | cCcD_AtSPrm_NoTgHitInfSet_e,
            /* SrcObjTg  Type    */ 0,
            /* SrcObjTg  SPrm    */ 0,
            /* SrcObjCo  SPrm    */ cCcD_CoSPrm_Set_e | cCcD_CoSPrm_VsOther_e,
            /* SrcGObjAt Se      */ 0,
            /* SrcGObjAt HitMark */ dCcG_AtHitMark_None_e,
            /* SrcGObjAt Spl     */ dCcG_At_Spl_UNK0,
            /* SrcGObjAt Mtrl    */ 0,
            /* SrcGObjAt SPrm    */ 0,
            /* SrcGObjTg Se      */ 0,
            /* SrcGObjTg HitMark */ 0,
            /* SrcGObjTg Spl     */ dCcG_Tg_Spl_UNK0,
            /* SrcGObjTg Mtrl    */ 0,
            /* SrcGObjTg SPrm    */ dCcG_TgSPrm_NoConHit_e | dCcG_TgSPrm_NoHitMark_e,
            /* SrcGObjCo SPrm    */ 0,
        },
        // cM3dGCylS
        {{
            /* Center */ {0.0f, 0.0f, 0.0f},
            /* Radius */ 15.0f,
            /* Height */ 0.0f,
        }},
    };
}

static actor_method_class l_daGM_Method = {
    (process_method_func)daGM_Create,
    (process_method_func)daGM_Delete,
    (process_method_func)daGM_Execute,
    (process_method_func)daGM_IsDelete,
    (process_method_func)daGM_Draw,
};

actor_process_profile_definition g_profile_GM = {
    /* Layer ID     */ fpcLy_CURRENT_e,
    /* List ID      */ 0x0007,
    /* List Prio    */ fpcPi_CURRENT_e,
    /* Proc Name    */ fpcNm_GM_e,
    /* Proc SubMtd  */ &g_fpcLf_Method.base,
    /* Size         */ sizeof(gm_class),
    /* Size Other   */ 0,
    /* Parameters   */ 0,
    /* Leaf SubMtd  */ &g_fopAc_Method.base,
    /* Draw Prio    */ fpcDwPi_GM_e,
    /* Actor SubMtd */ &l_daGM_Method,
    /* Status       */ fopAcStts_SHOWMAP_e | fopAcStts_UNK40000_e | fopAcStts_UNK80000_e,
    /* Group        */ fopAc_ENEMY_e,
    /* Cull Type    */ fopAc_CULLBOX_CUSTOM_e,
};
