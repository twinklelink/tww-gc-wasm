/**
 * d_a_bl.cpp
 * Enemy - Bubble
 */

#include "d/dolzel_rel.h" // IWYU pragma: keep
#include "d/actor/d_a_bl.h"
#include "d/d_cc_d.h"

/* 00000078-00000178       .text draw_SUB__FP8bl_class */
void draw_SUB(bl_class*) {
    /* field_0x0 = 0; */
    /* field_0x4 = 0; */
    /* field_0x8 = 0; */
    return arg0;
}

/* 00000178-000002F8       .text daBL_Draw__FP8bl_class */
static BOOL daBL_Draw(bl_class*) {
    ((dScnKy_env_light_c*)(((char*)&g_env_light + 0)))->setLightTevColorType(this->field_0x50, (arg0 + 268));
    if (this->field_0x2d5 != 255) {
        /* if (((dSv_info_c*)(((char*)&g_dComIfG_gameInfo + 0)))->isSwitch(this->field_0x2d5, (this->field_0x0 & 255)) == 0) goto L_168; */
        return 1;
    }
    /* L_168:; */
    dSnap_RegistFig(180, arg0, C_@4119);
    if (this->field_0x71e > 20) {
        /* ((dMat_ice_c*)(this->field_0x0))->entryDL(this->field_0x2b4, -1, (arg0 + 3312)); */
        return 1;
    }
    if (this->field_0x2d3 == 0) {
        /* ((mDoExt_btkAnm*)(this->field_0x2bc))->entry(this->field_0x4, this->field_0x4); */
    } else {
        /* ((mDoExt_btkAnm*)(this->field_0x2c0))->entry(this->field_0x4, this->field_0x4); */
    }
    /* ((mDoExt_McaMorf*)(this->field_0x2b4))->entryDL(); */
    if (this->field_0x285 != 0) {
        dComIfGd_setSimpleShadow2((arg0 + 504), (arg0 + 1108), 0, ((char*)&mSimpleTexObj__21dDlst_shadowControl_c + 0));
    }
    if (this->field_0x2d3 == 0) {
        /* ((J3DMaterialTable*)((this->field_0x4 + 88)))->removeTexMtxAnimator(this->field_0x8); */
    } else {
        /* ((J3DMaterialTable*)((this->field_0x4 + 88)))->removeTexMtxAnimator(this->field_0x8); */
    }
    return 1;
}

/* 000002F8-000003F8       .text smoke_set__FP8bl_class */
void smoke_set(bl_class*) {
    if (this->field_0x6cc == 0) {
        /* ((dPa_control_c*)(this->field_0x5ab8))->set(2, 8231, (arg0 + 1724), (arg0 + 524), 0, 185, (arg0 + 1736)); */
    }
    if (this->field_0x6cc != 0) {
        /* field_0x1f0 = 0; */
        /* field_0x1f4 = 0; */
        /* field_0x1f8 = 0; */
        /* field_0x38 = 0; */
        /* field_0x60 = 1; */
        /* field_0x6c = 0; */
    }
    /* return this->field_0x6cc; */
}

/* 000003F8-000004AC       .text fire_move_set__FP8bl_class */
void fire_move_set(bl_class*) {
    if (this->field_0x700 == 0) {
        /* ((dPa_control_c*)(this->field_0x5ab8))->set(0, ((this->field_0x2d0 >> 5) + (arg0 + -32477)), (arg0 + 504), 0, 0, 255, (arg0 + 1788)); */
        /* if (this->field_0x2d0 == 1) goto L_420; */
        /* field_0x61c = 5; */
        /* field_0x61e = 12; */
    }
    /* L_420:; */
    /* return ((dPa_control_c*)(this->field_0x5ab8))->set(0, ((this->field_0x2d0 >> 5) + (arg0 + -32477)), (arg0 + 504), 0, 0, 255, (arg0 + 1788)); */
}

/* 000004AC-00000578       .text fire_emitter_clr__FP8bl_class */
void fire_emitter_clr(bl_class*) {
        /* if (this->field_0x700 == 0) goto L_4d8; */
        /* if (this->field_0x2f0 != 0) goto L_4d8; */
        /* if (this->field_0x2d0 != 0) goto L_4d0; */
        /* JPAGetXYZRotateMtx(0, ((this->field_0x20e + -32768) & 65535), 0, (this->field_0x700 + 424), arg4); */
        /* field_0x38 = 0; */
        /* field_0x64 = 10; */
        /* field_0x74 = 0; */
        /* field_0x2f0 = 21; */
        /* goto L_4d8; */
        /* L_4d0:; */
        /* field_0x2f0 = 1; */
        /* L_4d8:; */
        return (arg0 + 1768);
}

/* 00000578-000006E0       .text fire_kaiten_keisan__FP8bl_class */
void fire_kaiten_keisan(bl_class*) {
        /* if (this->field_0x700 == 0) goto L_650; */
        /* if (this->field_0x2d0 != 0) goto L_594; */
        /* JPASetRMtxTVecfromMtx(this->field_0x8c, (this->field_0x700 + 424), (this->field_0x700 + 484), arg3); */
        /* ((JAIZelBasic*)(this->field_0x0))->seStart(28707, (arg0 + 608), 0, dComIfGp_getReverb((this->field_0x20a & 255)), 0); */
        /* goto L_650; */
        /* L_594:; */
        /* ((JAIZelBasic*)(this->field_0x0))->seStart(28708, (arg0 + 608), 0, dComIfGp_getReverb((this->field_0x20a & 255)), 0); */
        /* PSMTXCopy(this->field_0x8c, this->field_0x0); */
        /* mDoMtx_YrotM(this->field_0x0, ((this->field_0x20e - this->field_0x232) & 65535)); */
        /* L_650:; */
        return JPASetRMtxTVecfromMtx(this->field_0x0, (this->field_0x700 + 424), (this->field_0x700 + 484));
}

/* 000006E0-00000820       .text shock_damage_check__FP8bl_class */
void shock_damage_check(bl_class*) {
        /* _savegpr_29(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* if (/ * bne * / 1) goto L_6b4; */
        /* if (this->field_0x2d3 == 0) goto L_6b4; */
        return 0;
        /* L_6b4:; */
        /* if (/ * beq * / 1) goto L_790; */
        /* field_0x2f0 = 0; */
        /* fire_emitter_clr(_savegpr_29(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        getSwordTopPos();
        /* if ((((this->field_0xc - this->field_0x1f8) * (this->field_0xc - this->field_0x1f8)) + ((this->field_0x14 - this->field_0x200) * (this->field_0x14 - this->field_0x200))) <= this->field_0x0) goto L_77c; */
        /* L_77c:; */
        /* if (this->field_0x8 >= this->field_0x38) goto L_790; */
        return 1;
        /* L_790:; */
        return _restgpr_29(0);
}

/* 00000820-0000094C       .text anm_init__FP8bl_classifUcfi */
void anm_init(bl_class*, int, float, unsigned char, float, int) {
    /* _savegpr_27(arg0, int, float, char, float, int, arg6, arg7); */
    if (/* blt */ 1) {
    }
    /* return _restgpr_27(((mDoExt_McaMorf*)(this->field_0x2b4))->setAnm(((dRes_control_c*)(((char*)&@stringBase0 + 0)))->getRes())); */
}

/* 0000094C-00000C08       .text skull_atari_check__FP8bl_class */
void skull_atari_check(bl_class*) {
        /* ((dCcD_GStts*)((_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1356)))->Move(); */
        /* if (this->field_0x285 != 0) goto L_920; */
        return 1;
        /* L_920:; */
        /* if (shock_damage_check(_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)) == 0) goto L_948; */
        /* field_0x2d2 = 3; */
        /* field_0x304 = 34; */
        return 1;
        /* L_948:; */
        /* if (this->field_0x588 != 0) goto L_95c; */
        return 0;
        /* L_95c:; */
        /* ((dCcD_GObjInf*)((_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1388)))->GetTgHitObj(); */
        /* if (/ * bne * / 1) goto L_974; */
        return 0;
        /* L_974:; */
        /* if (this->field_0x2f4 == 0) goto L_988; */
        return 0;
        /* L_988:; */
        /* field_0x206 = (fopAcM_searchActorAngleY(_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), this->field_0x5b38) + -32768); */
        /* field_0x2f4 = 8; */
        /* field_0x2d4 = 0; */
        /* if (this->field_0x10 == 0) goto L_adc; */
        /* if (/ * bge * / 1) goto L_a08; */
        /* if (this->field_0x10 == 64) goto L_abc; */
        /* if (/ * bge * / 1) goto L_9f0; */
        /* if (this->field_0x10 == 32) goto L_ac8; */
        /* if (/ * bge * / 1) goto L_af8; */
        /* if (this->field_0x10 == 2) goto L_a54; */
        /* goto L_af8; */
        /* L_9f0:; */
        /* if (this->field_0x10 == 512) goto L_ad0; */
        /* if (/ * bge * / 1) goto L_af8; */
        /* if (this->field_0x10 == 128) goto L_abc; */
        /* goto L_af8; */
        /* L_a08:; */
        /* if (this->field_0x10 == 0) goto L_af8; */
        /* if (/ * bge * / 1) goto L_a34; */
        /* if (this->field_0x10 == 0) goto L_af8; */
        /* if (/ * bge * / 1) goto L_af8; */
        /* if (this->field_0x10 == 0) goto L_a80; */
        /* goto L_af8; */
        /* L_a34:; */
        /* if (this->field_0x10 == 0) goto L_a60; */
        /* if (/ * bge * / 1) goto L_af8; */
        /* if (this->field_0x10 == 0) goto L_af8; */
        /* goto L_af8; */
        /* L_a54:; */
        /* field_0x2d4 = 6; */
        /* goto L_af8; */
        /* L_a60:; */
        /* field_0x2d4 = 1; */
        /* field_0x2d2 = 3; */
        /* field_0x304 = 36; */
        /* goto L_af8; */
        /* L_a80:; */
        /* field_0x2d4 = 4; */
        /* if (this->field_0x290 != 17) goto L_af8; */
        /* field_0x206 = (this->field_0x20e + -16384); */
        /* field_0x2d4 = 5; */
        /* field_0x224 = 0; */
        /* field_0x254 = 0; */
        /* goto L_af8; */
        /* L_abc:; */
        /* field_0x2d4 = 3; */
        /* goto L_af8; */
        /* L_ac8:; */
        /* field_0x224 = 0; */
        /* L_ad0:; */
        /* field_0xacc = 1000; */
        /* goto L_af8; */
        /* L_adc:; */
        /* field_0x2d4 = 7; */
        /* field_0x2d2 = 5; */
        /* field_0x304 = 60; */
        /* L_af8:; */
        /* if (1 != 0) goto L_b74; */
        /* ((JAIZelBasic*)(this->field_0x0))->seStart(26923, (_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 608), 0, dComIfGp_getReverb((this->field_0x20a & 255)), 0); */
        /* field_0x285 = 0; */
        /* field_0x280 = 0; */
        /* field_0x2d2 = 10; */
        /* field_0x304 = 103; */
        /* L_b74:; */
        return _restgpr_27(1);
}

/* 00000C44-00001768       .text blue_body_atari_check__FP8bl_class */
void blue_body_atari_check(bl_class*) {
        /* ((dCcD_GStts*)((_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1356)))->Move(); */
        /* if (shock_damage_check(_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)) == 0) goto L_c28; */
        /* field_0x2d2 = 3; */
        /* field_0x304 = 34; */
        return 1;
        /* L_c28:; */
        /* if (this->field_0x588 != 0) goto L_c3c; */
        return 0;
        /* L_c3c:; */
        /* ((dCcD_GObjInf*)((_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1388)))->GetTgHitObj(); */
        /* if (/ * bne * / 1) goto L_c54; */
        return 0;
        /* L_c54:; */
        /* if (this->field_0x2f4 == 0) goto L_c68; */
        return 0;
        /* L_c68:; */
        /* field_0x206 = (fopAcM_searchActorAngleY(_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), this->field_0x5b38) + -32768); */
        /* field_0x2f4 = 8; */
        /* field_0x2d4 = 0; */
        /* if (this->field_0x10 == fopAcM_searchActorAngleY(_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), this->field_0x5b38)) goto L_1004; */
        /* if (/ * bge * / 1) goto L_cf4; */
        /* if (this->field_0x10 == 128) goto L_10d4; */
        /* if (/ * bge * / 1) goto L_cd8; */
        /* if (this->field_0x10 == 32) goto L_fa8; */
        /* if (/ * bge * / 1) goto L_ccc; */
        /* if (this->field_0x10 == 2) goto L_e7c; */
        /* goto L_1474; */
        /* L_ccc:; */
        /* if (this->field_0x10 == 64) goto L_10d4; */
        /* goto L_1474; */
        /* L_cd8:; */
        /* if (this->field_0x10 == (fopAcM_searchActorAngleY(_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), this->field_0x5b38) + -32768)) goto L_13c4; */
        /* if (/ * bge * / 1) goto L_1474; */
        /* if (this->field_0x10 == 512) goto L_1174; */
        /* goto L_1474; */
        /* L_cf4:; */
        /* if (this->field_0x10 == (fopAcM_searchActorAngleY(_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), this->field_0x5b38) + -32768)) goto L_1238; */
        /* if (/ * bge * / 1) goto L_d24; */
        /* if (this->field_0x10 == (fopAcM_searchActorAngleY(_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), this->field_0x5b38) + -32768)) goto L_1330; */
        /* if (/ * bge * / 1) goto L_1474; */
        /* if (this->field_0x10 == (fopAcM_searchActorAngleY(_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), this->field_0x5b38) + -32768)) goto L_1174; */
        /* goto L_1474; */
        /* L_d24:; */
        /* if (this->field_0x10 == (fopAcM_searchActorAngleY(_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), this->field_0x5b38) + -32768)) goto L_d44; */
        /* if (/ * bge * / 1) goto L_1474; */
        /* if (this->field_0x10 == (fopAcM_searchActorAngleY(_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), this->field_0x5b38) + -32768)) goto L_fc0; */
        /* goto L_1474; */
        /* L_d44:; */
        /* if (this->field_0x2d3 == 0) goto L_e34; */
        /* if (this->field_0x28d != 0) goto L_d94; */
        /* field_0x285 = 10; */
        /* ((dCcD_GObjInf*)((_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1388)))->GetTgHitObj(); */
        /* cc_at_check(_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* L_d94:; */
        /* ((JAIZelBasic*)(this->field_0x0))->seStart(10292, (_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 608), 66, dComIfGp_getReverb((this->field_0x20a & 255)), 0); */
        /* if (this->field_0x2ea != 0) goto L_de8; */
        /* field_0x2ea = (this->field_0x2ea + -1); */
        /* L_de8:; */
        /* ((dPa_control_c*)(this->field_0x5ab8))->set(0, 635, (_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 628), 0, 0, 255, 0); */
        /* goto L_1504; */
        /* L_e34:; */
        /* ((JAIZelBasic*)(this->field_0x0))->seStart(10292, (_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 608), 51, dComIfGp_getReverb((this->field_0x20a & 255)), 0); */
        /* goto L_1504; */
        /* L_e7c:; */
        /* if (this->field_0x2d3 != 0) goto L_ecc; */
        /* ((JAIZelBasic*)(this->field_0x0))->seStart(10243, (_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 608), 51, dComIfGp_getReverb((this->field_0x20a & 255)), 0); */
        /* goto L_f0c; */
        /* L_ecc:; */
        /* ((JAIZelBasic*)(this->field_0x0))->seStart(10243, (_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 608), 66, dComIfGp_getReverb((this->field_0x20a & 255)), 0); */
        /* L_f0c:; */
        /* if (this->field_0x290 == 6) goto L_f9c; */
        /* if ((this->field_0x290 & 16777215) == 7) goto L_f9c; */
        /* if ((this->field_0x290 & 16777215) == 8) goto L_f9c; */
        /* if ((this->field_0x290 & 16777215) == 9) goto L_f9c; */
        /* if ((this->field_0x290 & 16777215) == 10) goto L_f9c; */
        /* if ((this->field_0x290 & 16777215) == 12) goto L_f9c; */
        /* if ((this->field_0x290 & 16777215) == 14) goto L_f9c; */
        /* if ((this->field_0x290 & 16777215) == 5) goto L_f9c; */
        /* if ((this->field_0x290 & 16777215) == 15) goto L_f9c; */
        /* if ((this->field_0x290 & 16777215) == 16) goto L_f9c; */
        /* if ((this->field_0x290 & 16777215) == 21) goto L_f9c; */
        /* if ((this->field_0x290 & 16777215) == 23) goto L_f9c; */
        /* if ((this->field_0x290 & 16777215) == 25) goto L_f9c; */
        /* if ((this->field_0x290 & 16777215) == 26) goto L_f9c; */
        /* if ((this->field_0x290 & 16777215) == 27) goto L_f9c; */
        /* if ((this->field_0x290 & 16777215) == 30) goto L_f9c; */
        /* if ((this->field_0x290 & 16777215) != 31) goto L_1504; */
        /* L_f9c:; */
        /* field_0x2d4 = 6; */
        /* goto L_1504; */
        /* L_fa8:; */
        /* if (this->field_0x2d3 != 0) goto L_fc0; */
        /* field_0x2d4 = 2; */
        /* goto L_1504; */
        /* L_fc0:; */
        /* field_0x2d4 = 1; */
        /* field_0x2d2 = 3; */
        /* field_0x304 = 36; */
        /* if (/ * bne * / 1) goto L_1504; */
        /* if (this->field_0x258 <= this->field_0x40) goto L_1504; */
        /* field_0x304 = 30; */
        /* goto L_1504; */
        /* L_1004:; */
        /* if (this->field_0x2d3 != 0) goto L_1054; */
        /* ((JAIZelBasic*)(this->field_0x0))->seStart(10325, (_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 608), 51, dComIfGp_getReverb((this->field_0x20a & 255)), 0); */
        /* goto L_1094; */
        /* L_1054:; */
        /* ((JAIZelBasic*)(this->field_0x0))->seStart(10325, (_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 608), 66, dComIfGp_getReverb((this->field_0x20a & 255)), 0); */
        /* L_1094:; */
        /* field_0x2d4 = 4; */
        /* if (this->field_0x290 != 17) goto L_10bc; */
        /* field_0x206 = (this->field_0x20e + -16384); */
        /* field_0x2d4 = 5; */
        /* L_10bc:; */
        /* if (this->field_0x2d3 != 0) goto L_1504; */
        /* field_0x285 = 0; */
        /* goto L_1504; */
        /* L_10d4:; */
        /* if (this->field_0x2d3 != 0) goto L_1128; */
        /* ((JAIZelBasic*)(this->field_0x0))->seStart(10291, (_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 608), 51, dComIfGp_getReverb((this->field_0x20a & 255)), 0); */
        /* goto L_1168; */
        /* L_1128:; */
        /* ((JAIZelBasic*)(this->field_0x0))->seStart(10291, (_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 608), 66, dComIfGp_getReverb((this->field_0x20a & 255)), 0); */
        /* L_1168:; */
        /* field_0x2d4 = 3; */
        /* goto L_1504; */
        /* L_1174:; */
        /* if (this->field_0x2d3 != 0) goto L_1504; */
        /* field_0xacc = 100; */
        /* ((JAIZelBasic*)(this->field_0x0))->seStart(22667, (_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 608), 0, dComIfGp_getReverb((this->field_0x20a & 255)), 0); */
        dComIfGp_getReverb((this->field_0x20a & 255));
        /* if (_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) == 0) goto L_11fc; */
        /* goto L_1200; */
        /* L_11fc:; */
        /* L_1200:; */
        /* ((JAIZelBasic*)(this->field_0x0))->monsSeStart(18547, (_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 608), -1, 0, dComIfGp_getReverb((this->field_0x20a & 255))); */
        /* field_0x280 = 0; */
        /* field_0x2f0 = 0; */
        /* fire_emitter_clr(_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* goto L_1504; */
        /* L_1238:; */
        /* field_0x716 = 1; */
        /* field_0x8bc = 0; */
        /* field_0x718 = 0; */
        /* ((JAIZelBasic*)(this->field_0x0))->seStart(22667, (_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 608), 0, dComIfGp_getReverb((this->field_0x20a & 255)), 0); */
        dComIfGp_getReverb((this->field_0x20a & 255));
        /* if (_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) == 0) goto L_12c4; */
        /* goto L_12c8; */
        /* L_12c4:; */
        /* L_12c8:; */
        /* ((JAIZelBasic*)(this->field_0x0))->monsSeStart(18547, (_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 608), -1, 0, dComIfGp_getReverb((this->field_0x20a & 255))); */
        /* field_0x204 = 0; */
        /* field_0x208 = 0; */
        /* field_0x2d3 = 0; */
        /* field_0x20c = 0; */
        /* field_0x210 = 0; */
        /* field_0x258 = 0; */
        /* field_0x254 = 0; */
        /* field_0x2ec = 0; */
        /* field_0x220 = 0; */
        /* field_0x224 = 0; */
        /* field_0x228 = 0; */
        /* field_0x280 = 0; */
        /* field_0x2f0 = 0; */
        /* fire_emitter_clr(_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* goto L_1504; */
        /* L_1330:; */
        /* if (this->field_0x2d3 != 0) goto L_13a4; */
        /* field_0x258 = 0; */
        /* field_0x254 = 0; */
        /* field_0x220 = 0; */
        /* field_0x224 = 0; */
        /* field_0x228 = 0; */
        /* field_0x714 = 200; */
        /* enemy_fire_remove((_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 2760)); */
        /* field_0x280 = 0; */
        /* goto L_1504; */
        /* L_13a4:; */
        /* field_0x2d4 = 1; */
        /* field_0x2d2 = 3; */
        /* field_0x304 = 30; */
        /* goto L_1504; */
        /* L_13c4:; */
        /* if (this->field_0x2d3 != 0) goto L_1418; */
        /* ((JAIZelBasic*)(this->field_0x0))->seStart(10292, (_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 608), 51, dComIfGp_getReverb((this->field_0x20a & 255)), 0); */
        /* goto L_1458; */
        /* L_1418:; */
        /* ((JAIZelBasic*)(this->field_0x0))->seStart(10292, (_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 608), 66, dComIfGp_getReverb((this->field_0x20a & 255)), 0); */
        /* L_1458:; */
        /* field_0x2d4 = 7; */
        /* field_0x2d2 = 5; */
        /* field_0x304 = 60; */
        /* goto L_1504; */
        /* L_1474:; */
        /* if (this->field_0x2d3 != 0) goto L_14c4; */
        /* ((JAIZelBasic*)(this->field_0x0))->seStart(10292, (_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 608), 51, dComIfGp_getReverb((this->field_0x20a & 255)), 0); */
        /* goto L_1504; */
        /* L_14c4:; */
        /* ((JAIZelBasic*)(this->field_0x0))->seStart(10292, (_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 608), 66, dComIfGp_getReverb((this->field_0x20a & 255)), 0); */
        /* L_1504:; */
        /* if (this->field_0x2d3 == 0) goto L_1598; */
        /* if (this->field_0x2d4 == 7) goto L_1598; */
        /* if (this->field_0x2d4 == 1) goto L_1598; */
        /* ((dPa_control_c*)(this->field_0x5ab8))->set(0, 12); */
        /* field_0x2d2 = 2; */
        /* field_0x304 = 20; */
        return 1;
        /* L_1598:; */
        /* if (1 != 0) goto L_16d0; */
        /* ((dCcD_GObjInf*)((_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1388)))->GetTgHitObj(); */
        /* cc_at_check(_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* if (this->field_0x2d4 == 6) goto L_15e8; */
        /* if (this->field_0x2d4 == 5) goto L_15e8; */
        /* if (this->field_0x2d4 == 4) goto L_15e8; */
        /* if (this->field_0x285 != 0) goto L_167c; */
        /* L_15e8:; */
        /* ((dPa_control_c*)(this->field_0x5ab8))->set(0, 16); */
        /* ((dPa_control_c*)(this->field_0x5ab8))->set(0, 15); */
        /* goto L_16c0; */
        /* L_167c:; */
        /* ((dPa_control_c*)(this->field_0x5ab8))->set(0, 13); */
        /* L_16c0:; */
        /* field_0x2d2 = 4; */
        /* field_0x304 = 40; */
        /* L_16d0:; */
        return _restgpr_27(1);
}

/* 00001768-000022BC       .text red_body_atari_check__FP8bl_class */
void red_body_atari_check(bl_class*) {
        /* ((dCcD_GStts*)((_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1356)))->Move(); */
        /* if (shock_damage_check(_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)) == 0) goto L_1748; */
        /* field_0x2d2 = 3; */
        /* field_0x304 = 34; */
        return 1;
        /* L_1748:; */
        /* if (this->field_0x588 != 0) goto L_175c; */
        return 0;
        /* L_175c:; */
        /* ((dCcD_GObjInf*)((_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1388)))->GetTgHitObj(); */
        /* if (/ * bne * / 1) goto L_1774; */
        return 0;
        /* L_1774:; */
        /* if (this->field_0x2f4 == 0) goto L_1788; */
        return 0;
        /* L_1788:; */
        /* field_0x206 = (fopAcM_searchActorAngleY(_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), this->field_0x5b38) + -32768); */
        /* field_0x2f4 = 8; */
        /* field_0x2d4 = 0; */
        /* if (this->field_0x10 == (fopAcM_searchActorAngleY(_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), this->field_0x5b38) + -32768)) goto L_1e9c; */
        /* if (/ * bge * / 1) goto L_182c; */
        /* if (this->field_0x10 == 128) goto L_1b70; */
        /* if (/ * bge * / 1) goto L_1814; */
        /* if (this->field_0x10 == 32) goto L_1aa0; */
        /* if (/ * bge * / 1) goto L_1808; */
        /* if (this->field_0x10 == 2) goto L_19c0; */
        /* goto L_1f4c; */
        /* L_1808:; */
        /* if (this->field_0x10 == 64) goto L_1b70; */
        /* goto L_1f4c; */
        /* L_1814:; */
        /* if (this->field_0x10 == 16384) goto L_1c54; */
        /* if (/ * bge * / 1) goto L_1f4c; */
        /* if (this->field_0x10 == 512) goto L_1c54; */
        /* goto L_1f4c; */
        /* L_182c:; */
        /* if (this->field_0x10 == (fopAcM_searchActorAngleY(_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), this->field_0x5b38) + -32768)) goto L_1d30; */
        /* if (/ * bge * / 1) goto L_1868; */
        /* if (this->field_0x10 == (fopAcM_searchActorAngleY(_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), this->field_0x5b38) + -32768)) goto L_1c54; */
        /* if (/ * bge * / 1) goto L_1858; */
        /* if (this->field_0x10 == fopAcM_searchActorAngleY(_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), this->field_0x5b38)) goto L_1afc; */
        /* goto L_1f4c; */
        /* L_1858:; */
        /* if (this->field_0x10 == (fopAcM_searchActorAngleY(_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), this->field_0x5b38) + -32768)) goto L_1e28; */
        /* goto L_1f4c; */
        /* L_1868:; */
        /* if (this->field_0x10 == (fopAcM_searchActorAngleY(_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), this->field_0x5b38) + -32768)) goto L_1888; */
        /* if (/ * bge * / 1) goto L_1f4c; */
        /* if (this->field_0x10 == (fopAcM_searchActorAngleY(_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), this->field_0x5b38) + -32768)) goto L_1ab8; */
        /* goto L_1f4c; */
        /* L_1888:; */
        /* if (this->field_0x2d3 == 0) goto L_1978; */
        /* if (this->field_0x28d != 0) goto L_18d8; */
        /* field_0x285 = 10; */
        /* ((dCcD_GObjInf*)((_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1388)))->GetTgHitObj(); */
        /* cc_at_check(_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* L_18d8:; */
        /* ((JAIZelBasic*)(this->field_0x0))->seStart(10292, (_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 608), 66, dComIfGp_getReverb((this->field_0x20a & 255)), 0); */
        /* if (this->field_0x2ea != 0) goto L_192c; */
        /* field_0x2ea = (this->field_0x2ea + -1); */
        /* L_192c:; */
        /* ((dPa_control_c*)(this->field_0x5ab8))->set(0, 635, (_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 628), 0, 0, 255, 0); */
        /* goto L_2024; */
        /* L_1978:; */
        /* ((JAIZelBasic*)(this->field_0x0))->seStart(10292, (_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 608), 51, dComIfGp_getReverb((this->field_0x20a & 255)), 0); */
        /* goto L_2024; */
        /* L_19c0:; */
        /* ((JAIZelBasic*)(this->field_0x0))->seStart(10243, (_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 608), 51, dComIfGp_getReverb((this->field_0x20a & 255)), 0); */
        /* if (this->field_0x290 == 6) goto L_1a94; */
        /* if ((this->field_0x290 & 16777215) == 7) goto L_1a94; */
        /* if ((this->field_0x290 & 16777215) == 8) goto L_1a94; */
        /* if ((this->field_0x290 & 16777215) == 9) goto L_1a94; */
        /* if ((this->field_0x290 & 16777215) == 10) goto L_1a94; */
        /* if ((this->field_0x290 & 16777215) == 12) goto L_1a94; */
        /* if ((this->field_0x290 & 16777215) == 14) goto L_1a94; */
        /* if ((this->field_0x290 & 16777215) == 5) goto L_1a94; */
        /* if ((this->field_0x290 & 16777215) == 15) goto L_1a94; */
        /* if ((this->field_0x290 & 16777215) == 16) goto L_1a94; */
        /* if ((this->field_0x290 & 16777215) == 21) goto L_1a94; */
        /* if ((this->field_0x290 & 16777215) == 23) goto L_1a94; */
        /* if ((this->field_0x290 & 16777215) == 25) goto L_1a94; */
        /* if ((this->field_0x290 & 16777215) == 26) goto L_1a94; */
        /* if ((this->field_0x290 & 16777215) == 27) goto L_1a94; */
        /* if ((this->field_0x290 & 16777215) == 30) goto L_1a94; */
        /* if ((this->field_0x290 & 16777215) != 31) goto L_2024; */
        /* L_1a94:; */
        /* field_0x2d4 = 6; */
        /* goto L_2024; */
        /* L_1aa0:; */
        /* if (this->field_0x2d3 != 0) goto L_1ab8; */
        /* field_0x2d4 = 2; */
        /* goto L_2024; */
        /* L_1ab8:; */
        /* field_0x2d4 = 1; */
        /* field_0x2d2 = 3; */
        /* field_0x304 = 36; */
        /* if (/ * bne * / 1) goto L_2024; */
        /* if (this->field_0x258 <= this->field_0x40) goto L_2024; */
        /* field_0x304 = 30; */
        /* goto L_2024; */
        /* L_1afc:; */
        /* ((JAIZelBasic*)(this->field_0x0))->seStart(10325, (_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 608), 51, dComIfGp_getReverb((this->field_0x20a & 255)), 0); */
        /* field_0x2d4 = 4; */
        /* if (this->field_0x290 != 17) goto L_1b64; */
        /* field_0x206 = (this->field_0x20e + -16384); */
        /* field_0x2d4 = 5; */
        /* L_1b64:; */
        /* field_0x285 = 0; */
        /* goto L_2024; */
        /* L_1b70:; */
        /* if (this->field_0x2d3 != 0) goto L_1bc4; */
        /* ((JAIZelBasic*)(this->field_0x0))->seStart(10291, (_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 608), 51, dComIfGp_getReverb((this->field_0x20a & 255)), 0); */
        /* goto L_1c04; */
        /* L_1bc4:; */
        /* ((JAIZelBasic*)(this->field_0x0))->seStart(10291, (_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 608), 66, dComIfGp_getReverb((this->field_0x20a & 255)), 0); */
        /* L_1c04:; */
        /* field_0x2d4 = 3; */
        /* ((dPa_control_c*)(this->field_0x5ab8))->set(0, 12); */
        /* goto L_2024; */
        /* L_1c54:; */
        /* if (this->field_0x2d3 == 0) goto L_1c68; */
        /* if (/ * bne * / 1) goto L_2024; */
        /* L_1c68:; */
        /* if (this->field_0x2d3 != 0) goto L_1c80; */
        /* if (/ * bne * / 1) goto L_1c80; */
        /* field_0xacc = 100; */
        /* L_1c80:; */
        /* ((JAIZelBasic*)(this->field_0x0))->seStart(22667, (_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 608), 0, dComIfGp_getReverb((this->field_0x20a & 255)), 0); */
        dComIfGp_getReverb((this->field_0x20a & 255));
        /* if (_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) == 0) goto L_1cf4; */
        /* goto L_1cf8; */
        /* L_1cf4:; */
        /* L_1cf8:; */
        /* ((JAIZelBasic*)(this->field_0x0))->monsSeStart(18547, (_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 608), -1, 0, dComIfGp_getReverb((this->field_0x20a & 255))); */
        /* field_0x280 = 0; */
        /* field_0x2f0 = 0; */
        /* fire_emitter_clr(_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* goto L_2024; */
        /* L_1d30:; */
        /* field_0x716 = 1; */
        /* field_0x8bc = 0; */
        /* field_0x718 = 0; */
        /* ((JAIZelBasic*)(this->field_0x0))->seStart(22667, (_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 608), 0, dComIfGp_getReverb((this->field_0x20a & 255)), 0); */
        dComIfGp_getReverb((this->field_0x20a & 255));
        /* if (_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) == 0) goto L_1dbc; */
        /* goto L_1dc0; */
        /* L_1dbc:; */
        /* L_1dc0:; */
        /* ((JAIZelBasic*)(this->field_0x0))->monsSeStart(18547, (_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 608), -1, 0, dComIfGp_getReverb((this->field_0x20a & 255))); */
        /* field_0x204 = 0; */
        /* field_0x208 = 0; */
        /* field_0x2d3 = 0; */
        /* field_0x20c = 0; */
        /* field_0x210 = 0; */
        /* field_0x258 = 0; */
        /* field_0x254 = 0; */
        /* field_0x2ec = 0; */
        /* field_0x220 = 0; */
        /* field_0x224 = 0; */
        /* field_0x228 = 0; */
        /* field_0x280 = 0; */
        /* field_0x2f0 = 0; */
        /* fire_emitter_clr(_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* goto L_2024; */
        /* L_1e28:; */
        /* field_0x258 = 0; */
        /* field_0x254 = 0; */
        /* field_0x220 = 0; */
        /* field_0x224 = 0; */
        /* field_0x228 = 0; */
        /* fire_emitter_clr(_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* field_0x714 = 200; */
        /* enemy_fire_remove((_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 2760)); */
        /* field_0x280 = 0; */
        /* goto L_2024; */
        /* L_1e9c:; */
        /* if (this->field_0x2d3 != 0) goto L_1ef0; */
        /* ((JAIZelBasic*)(this->field_0x0))->seStart(10292, (_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 608), 51, dComIfGp_getReverb((this->field_0x20a & 255)), 0); */
        /* goto L_1f30; */
        /* L_1ef0:; */
        /* ((JAIZelBasic*)(this->field_0x0))->seStart(10292, (_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 608), 66, dComIfGp_getReverb((this->field_0x20a & 255)), 0); */
        /* L_1f30:; */
        /* field_0x2d4 = 7; */
        /* field_0x2d2 = 5; */
        /* field_0x304 = 60; */
        /* goto L_2024; */
        /* L_1f4c:; */
        /* if (this->field_0x2d3 != 0) goto L_1fa0; */
        /* ((JAIZelBasic*)(this->field_0x0))->seStart(10292, (_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 608), 51, dComIfGp_getReverb((this->field_0x20a & 255)), 0); */
        /* goto L_1fe0; */
        /* L_1fa0:; */
        /* ((JAIZelBasic*)(this->field_0x0))->seStart(10292, (_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 608), 66, dComIfGp_getReverb((this->field_0x20a & 255)), 0); */
        /* L_1fe0:; */
        /* ((dPa_control_c*)(this->field_0x5ab8))->set(0, 12); */
        /* L_2024:; */
        /* if (1 != 0) goto L_2220; */
        /* ((dCcD_GObjInf*)((_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1388)))->GetTgHitObj(); */
        /* cc_at_check(_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* if (this->field_0x2d4 == 6) goto L_2074; */
        /* if (this->field_0x2d4 == 5) goto L_2074; */
        /* if (this->field_0x2d4 == 4) goto L_2074; */
        /* if (this->field_0x285 != 0) goto L_2108; */
        /* L_2074:; */
        /* ((dPa_control_c*)(this->field_0x5ab8))->set(0, 16); */
        /* ((dPa_control_c*)(this->field_0x5ab8))->set(0, 15); */
        /* goto L_214c; */
        /* L_2108:; */
        /* ((dPa_control_c*)(this->field_0x5ab8))->set(0, 13); */
        /* L_214c:; */
        /* if (this->field_0x2d3 == 0) goto L_2210; */
        /* anm_init(_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), 23, 0, -1); */
        /* field_0x254 = (this->field_0x4c + this->field_0x4b4); */
        /* if (this->field_0x285 != 0) goto L_21bc; */
        /* field_0x254 = (this->field_0x4c + this->field_0x4b8); */
        /* if (this->field_0x2d4 != 5) goto L_21bc; */
        /* field_0x206 = (this->field_0x20e + -16384); */
        /* L_21bc:; */
        dComIfGp_getReverb((this->field_0x20a & 255));
        /* if (_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) == 0) goto L_21f0; */
        /* goto L_21f4; */
        /* L_21f0:; */
        /* L_21f4:; */
        /* ((JAIZelBasic*)(this->field_0x0))->monsSeStart(18547, (_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 608), -1, 0, dComIfGp_getReverb((this->field_0x20a & 255))); */
        /* field_0x2d2 = 2; */
        /* field_0x304 = 21; */
        /* goto L_2220; */
        /* L_2210:; */
        /* field_0x2d2 = 4; */
        /* field_0x304 = 40; */
        /* L_2220:; */
        return _restgpr_27(1);
}

/* 000022BC-00002354       .text bound_sound_set__FP8bl_class */
void bound_sound_set(bl_class*) {
    /* _savegpr_29(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
    if (__cvt_fp2unsigned(C_@4061) > 100) {
    }
    /* return _restgpr_29(((JAIZelBasic*)(this->field_0x0))->seStart(22668, (_savegpr_29(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 608), 100, dComIfGp_getReverb((this->field_0x20a & 255)), 0)); */
}

/* 00002354-00002458       .text fuwafuwa_keisan__FP8bl_class */
void fuwafuwa_keisan(bl_class*) {
    if (/* bne */ 1) {
        /* field_0x302 = 0; */
        /* field_0x318 = (this->field_0x54 + this->field_0x1fc); */
        /* field_0x318 = (this->field_0x318 + (this->field_0x14 * farg1)); */
    } else {
        /* field_0x302 = 0; */
        /* field_0x318 = (this->field_0x5c + this->field_0x320); */
        /* field_0x318 = (this->field_0x318 + (this->field_0x44 * farg1)); */
    }
    return cLib_addCalc2((arg0 + 508), (C_@4061 + 0), arg0);
}

/* 00002458-000024E4       .text BG_check__FP8bl_class */
void BG_check(bl_class*) {
    if (this->field_0x304 != 2) {
        /* ((dBgS_AcchCir*)((arg0 + 812)))->SetWall(C_@4695, arg2); */
        ((dBgS_Acch*)((arg0 + 876)))->CrrPos(((char*)&g_dComIfG_gameInfo + 4768));
        /* if (this->field_0x2d1 == 0) goto L_2450; */
        /* if (/ * bne * / 1) goto L_2450; */
        /* field_0x320 = 0; */
    }
    /* L_2450:; */
    return C_@5014;
}

/* 000024E4-00002804       .text Line_check__FP8bl_class4cXyz */
void Line_check(bl_class*, cXyz) {
        /* _savegpr_23(arg0, cXyz, arg2, arg3, arg4, arg5, arg6, arg7); */
        ct();
        /* field_0xc = 0; */
        /* field_0xc = 0; */
        /* field_0x10 = 1; */
        /* if (/ * beq * / 1) goto L_25a0; */
        /* L_25a0:; */
        /* field_0x4 = (this->field_0x4 + this->field_0x0); */
        Set();
        /* if (((cBgS*)(((char*)&g_dComIfG_gameInfo + 4768)))->LineCross() != 0) goto L_26bc; */
        /* if (/ * beq * / 1) goto L_2680; */
        /* if (/ * beq * / 1) goto L_265c; */
        /* if (/ * beq * / 1) goto L_265c; */
        /* L_265c:; */
        /* if (/ * beq * / 1) goto L_2680; */
        /* if (/ * beq * / 1) goto L_2680; */
        /* L_2680:; */
        __dt();
        return 1;
        /* L_26bc:; */
        /* if (/ * beq * / 1) goto L_2734; */
        /* if (/ * beq * / 1) goto L_2710; */
        /* if (/ * beq * / 1) goto L_2710; */
        /* L_2710:; */
        /* if (/ * beq * / 1) goto L_2734; */
        /* if (/ * beq * / 1) goto L_2734; */
        /* L_2734:; */
        __dt();
        return _restgpr_23(0);
}

/* 00002C3C-00002CC4       .text roll_check__FP8bl_class */
void roll_check(bl_class*) {
    cLib_addCalcAngleS2((arg0 + 524), 0, 1, 4096);
    cLib_addCalcAngleS2((arg0 + 528), 0, 1, 4096);
    /* field_0x2f8 = 0; */
    /* field_0x2fa = 0; */
    /* if (abs(this->field_0x20c) < 512) { */
        /* if (abs(this->field_0x210) < 512) goto L_2c2c; */
        /* return 1; */
    /* L_2c2c:; */
    return 0;
}

/* 00002CC4-00003054       .text way_check__FP8bl_classs */
void way_check(bl_class*, short) {
        /* _savegpr_17(arg0, short, arg2, arg3, arg4, arg5, arg6, arg7); */
        ct();
        /* field_0xc = 0; */
        /* field_0xc = 0; */
        /* field_0x10 = 1; */
        /* if (/ * beq * / 1) goto L_2d98; */
        /* L_2d98:; */
        /* cM_rndFX(((char*)&__vt__11dBgS_LinChk + 0)); */
        /* if (/ * bge * / 1) goto L_2dbc; */
        /* L_2dbc:; */
        /* L_2ddc:; */
        /* mDoMtx_YrotS(this->field_0x0); */
        MtxPosition();
        PSVECAdd();
        /* Set((_savegpr_17(arg0, short, arg2, arg3, arg4, arg5, arg6, arg7) + 504)); */
        /* if (((cBgS*)(((char*)&g_dComIfG_gameInfo + 4768)))->LineCross() != 0) goto L_2eec; */
        /* if (/ * beq * / 1) goto L_2eb0; */
        /* if (/ * beq * / 1) goto L_2e8c; */
        /* if (/ * beq * / 1) goto L_2e8c; */
        /* L_2e8c:; */
        /* if (/ * beq * / 1) goto L_2eb0; */
        /* if (/ * beq * / 1) goto L_2eb0; */
        /* L_2eb0:; */
        __dt();
        /* goto L_2fac; */
        /* L_2eec:; */
        /* if ((0 + 1) < 8) goto L_2ddc; */
        /* if (/ * beq * / 1) goto L_2f74; */
        /* if (/ * beq * / 1) goto L_2f50; */
        /* if (/ * beq * / 1) goto L_2f50; */
        /* L_2f50:; */
        /* if (/ * beq * / 1) goto L_2f74; */
        /* if (/ * beq * / 1) goto L_2f74; */
        /* L_2f74:; */
        /* L_2fac:; */
        return _restgpr_17(__dt());
}

/* 00003054-000039F0       .text action_dousa__FP8bl_class */
void action_dousa(bl_class*) {
        /* _savegpr_29(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* if (this->field_0x304 > 7) goto L_3760; */
        /* field_0x302 = 0; */
        /* fopAcM_searchActorDistance(_savegpr_29(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), this->field_0x5b38); */
        /* if (/ * bgt * / 1) goto L_3760; */
        /* field_0x280 = 4; */
        /* anm_init(_savegpr_29(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), 21, 0, -1); */
        /* field_0x304 = (this->field_0x304 + 1); */
        /* goto L_3760; */
        /* field_0x31c = 0; */
        /* if (this->field_0x6ec != 0) goto L_3128; */
        /* ((dPa_control_c*)(this->field_0x5ab8))->set(0); */
        /* ((JAIZelBasic*)(this->field_0x0))->seStart(22664, (_savegpr_29(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 608), 0, dComIfGp_getReverb((this->field_0x20a & 255)), 0); */
        /* L_3128:; */
        /* if (this->field_0x6ec == 0) goto L_3174; */
        /* if (this->field_0x2d0 != 0) goto L_315c; */
        /* field_0x200 = 85; */
        /* field_0x201 = 26; */
        /* field_0x202 = 13; */
        /* goto L_3174; */
        /* L_315c:; */
        /* field_0x200 = 13; */
        /* field_0x201 = 32; */
        /* field_0x202 = 65; */
        /* L_3174:; */
        /* if (this->field_0x5d != 0) goto L_319c; */
        /* if (/ * beq * / 1) goto L_319c; */
        /* L_319c:; */
        /* if (0 == 0) goto L_3760; */
        /* field_0x258 = 0; */
        /* field_0x224 = 0; */
        /* field_0x304 = (this->field_0x304 + 1); */
        /* if (this->field_0x6ec == 0) goto L_31e0; */
        JPASetRMtxTVecfromMtx(this->field_0x8c, (this->field_0x6ec + 424), (this->field_0x6ec + 484));
        /* L_31e0:; */
        /* cLib_addCalc2((_savegpr_29(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 548)); */
        /* if (this->field_0x1fc < (this->field_0x5c + this->field_0x320)) goto L_3760; */
        /* fire_move_set(_savegpr_29(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* field_0x224 = 0; */
        /* ((JAIZelBasic*)(this->field_0x0))->seStart(22665, (_savegpr_29(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 608), 0, dComIfGp_getReverb((this->field_0x20a & 255)), 0); */
        dComIfGp_getReverb((this->field_0x20a & 255));
        /* if (_savegpr_29(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) == 0) goto L_3290; */
        /* goto L_3294; */
        /* L_3290:; */
        /* L_3294:; */
        /* ((JAIZelBasic*)(this->field_0x0))->monsSeStart(18545, (_savegpr_29(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 608), -1, 0, dComIfGp_getReverb((this->field_0x20a & 255))); */
        /* anm_init(_savegpr_29(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), 22, 0, -1); */
        /* field_0x304 = (this->field_0x304 + 1); */
        /* goto L_3760; */
        /* if (((J3DFrameCtrl*)((this->field_0x2b4 + 88)))->checkPass() == 0) goto L_32f4; */
        /* L_32f4:; */
        /* if (this->field_0x5d != 0) goto L_331c; */
        /* if (/ * beq * / 1) goto L_331c; */
        /* L_331c:; */
        /* if (0 == 0) goto L_3760; */
        /* field_0x304 = 5; */
        /* goto L_3760; */
        /* fire_move_set(this->field_0x2b4); */
        /* field_0x2f2 = 5; */
        /* field_0x304 = 5; */
        /* if (this->field_0x308 == 17) goto L_33a0; */
        /* anm_init(_savegpr_29(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), 17, 2, -1); */
        /* field_0x2d3 = 1; */
        /* field_0x544 = 2; */
        /* field_0x570 = 1; */
        /* L_33a0:; */
        /* field_0x280 = 4; */
        /* if (this->field_0x2e9 == 255) goto L_3400; */
        /* if (this->field_0x2d8 == 0) goto L_3400; */
        cM_atan2s((this->field_0x8 + ((this->field_0x2e8 & 255) << 4)));
        /* field_0x254 = 0; */
        /* goto L_3458; */
        /* L_3400:; */
        cM_rndFX(cM_rndFX(cM_atan2s((this->field_0x8 + ((this->field_0x2e8 & 255) << 4)))));
        /* if (/ * bne * / 1) goto L_3458; */
        cM_rndF(cM_rndFX(cM_rndFX(cM_atan2s((this->field_0x8 + ((this->field_0x2e8 & 255) << 4))))));
        /* field_0x254 = 0; */
        /* L_3458:; */
        /* field_0x2fe = way_check(_savegpr_29(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* field_0x304 = (this->field_0x304 + 1); */
        /* if (this->field_0x2e9 == 255) goto L_35e4; */
        /* if (this->field_0x2d8 == 0) goto L_35e4; */
        cM_atan2s((this->field_0x8 + ((this->field_0x2e8 & 255) << 4)));
        /* if ((((this->field_0x4 - this->field_0x1f8) * (this->field_0x4 - this->field_0x1f8)) + ((this->field_0xc - this->field_0x200) * (this->field_0xc - this->field_0x200))) <= this->field_0x0) goto L_3538; */
        /* L_3538:; */
        /* if (this->field_0x20 >= (this->field_0x54 + this->field_0x498)) goto L_3580; */
        /* field_0x2e8 = (this->field_0x2e8 + 1); */
        /* if ((this->field_0x2e8 & 255) < this->field_0x0) goto L_3580; */
        /* field_0x2e8 = 0; */
        /* L_3580:; */
        /* field_0x2c4 = 0; */
        /* field_0x2c8 = 0; */
        /* field_0x2cc = 0; */
        /* if (this->field_0x2ec != 0) goto L_3760; */
        /* field_0x2fe = way_check(_savegpr_29(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), (cM_atan2s((this->field_0x8 + ((this->field_0x2e8 & 255) << 4))) & 65535)); */
        /* if (this->field_0x2fe == (cM_atan2s((this->field_0x8 + ((this->field_0x2e8 & 255) << 4))) & 65535)) goto L_3760; */
        /* cM_rndF(way_check(_savegpr_29(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), (cM_atan2s((this->field_0x8 + ((this->field_0x2e8 & 255) << 4))) & 65535))); */
        /* goto L_3760; */
        /* L_35e4:; */
        /* if ((((this->field_0x1f8 - this->field_0x2c4) * (this->field_0x1f8 - this->field_0x2c4)) + ((this->field_0x200 - this->field_0x2cc) * (this->field_0x200 - this->field_0x2cc))) <= this->field_0x0) goto L_366c; */
        /* L_366c:; */
        /* if (this->field_0x1c >= this->field_0x7c) goto L_3690; */
        /* if (this->field_0x2ec != 0) goto L_3760; */
        /* field_0x304 = 5; */
        /* goto L_3760; */
        /* L_3690:; */
        /* field_0x304 = 7; */
        /* field_0x2fe = cM_atan2s(cM_rndF(way_check(_savegpr_29(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), (cM_atan2s((this->field_0x8 + ((this->field_0x2e8 & 255) << 4))) & 65535)))); */
        /* if (this->field_0x2e9 == 255) goto L_36e0; */
        /* if (this->field_0x2d8 == 0) goto L_36e0; */
        /* L_36e0:; */
        /* if ((((this->field_0x2c4 - this->field_0x1f8) * (this->field_0x2c4 - this->field_0x1f8)) + ((this->field_0x2cc - this->field_0x200) * (this->field_0x2cc - this->field_0x200))) <= this->field_0x0) goto L_3750; */
        /* L_3750:; */
        /* if (this->field_0x18 >= this->field_0x54) goto L_3760; */
        /* field_0x304 = 5; */
        /* L_3760:; */
        /* if (this->field_0x304 < 1) goto L_3798; */
        /* if (this->field_0x304 > 3) goto L_3798; */
        /* if (this->field_0x6ec == 0) goto L_3798; */
        JPASetRMtxTVecfromMtx(this->field_0x8c, (this->field_0x6ec + 424), (this->field_0x6ec + 484));
        /* L_3798:; */
        /* if (this->field_0x2f2 != 0) goto L_37ac; */
        /* fire_kaiten_keisan(_savegpr_29(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* L_37ac:; */
        /* if (this->field_0x2e9 == 255) goto L_37d4; */
        /* if (this->field_0x2d8 == 0) goto L_37d4; */
        /* L_37d4:; */
        /* cLib_addCalcAngleS2((_savegpr_29(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 518), this->field_0x2fe, 1, 4096); */
        /* cLib_addCalcAngleS2((_savegpr_29(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 526), this->field_0x206, 1, 4096); */
        /* if (this->field_0x304 < 3) goto L_3814; */
        /* field_0x31c = 0; */
        /* fuwafuwa_keisan(_savegpr_29(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* L_3814:; */
        /* if (this->field_0x2d0 != 1) goto L_3834; */
        /* if (blue_body_atari_check(_savegpr_29(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)) == 0) goto L_3844; */
        /* goto L_3948; */
        /* L_3834:; */
        /* if (red_body_atari_check(_savegpr_29(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)) != 0) goto L_3948; */
        /* L_3844:; */
        /* if (this->field_0x304 < 5) goto L_3948; */
        /* if (this->field_0x5c0 == 0) goto L_38b8; */
        /* if (this->field_0x2e9 == 255) goto L_387c; */
        /* if (this->field_0x2d8 == 0) goto L_387c; */
        /* if (this->field_0x304 == 7) goto L_3948; */
        /* L_387c:; */
        /* field_0x206 = (fopAcM_searchActorAngleY(_savegpr_29(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), this->field_0x5b38) + -32768); */
        /* field_0x254 = 0; */
        /* field_0x2d2 = 1; */
        /* field_0x304 = 10; */
        /* goto L_3948; */
        /* L_38b8:; */
        /* if (this->field_0x2d3 == 0) goto L_3948; */
        /* fopAcM_searchActorDistance(_savegpr_29(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), this->field_0x5b38); */
        /* if (/ * bge * / 1) goto L_3948; */
        /* if (Line_check(_savegpr_29(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)) == 0) goto L_3948; */
        /* if (this->field_0x2e9 == 255) goto L_3938; */
        /* if (this->field_0x2d8 == 0) goto L_3938; */
        /* if (this->field_0x304 == 7) goto L_3948; */
        /* L_3938:; */
        /* field_0x2d2 = 1; */
        /* field_0x304 = 10; */
        /* L_3948:; */
        /* return _restgpr_29(Line_check(_savegpr_29(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7))); */
}

/* 000039F0-00003F68       .text action_kougeki__FP8bl_class */
void action_kougeki(bl_class*) {
        /* _savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* if (this->field_0x304 == 13) goto L_3b3c; */
        /* if (/ * bge * / 1) goto L_39c4; */
        /* if (this->field_0x304 == 11) goto L_3a84; */
        /* if (/ * bge * / 1) goto L_3ac0; */
        /* if (this->field_0x304 >= 10) goto L_39d4; */
        /* goto L_3d3c; */
        /* L_39c4:; */
        /* if (this->field_0x304 == 15) goto L_3d04; */
        /* if (/ * bge * / 1) goto L_3d3c; */
        /* goto L_3c6c; */
        /* L_39d4:; */
        /* field_0x570 = 1; */
        /* field_0x302 = 0; */
        /* anm_init(_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), 18, 0, -1); */
        dComIfGp_getReverb((this->field_0x20a & 255));
        /* if (_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) == 0) goto L_3a60; */
        /* goto L_3a64; */
        /* L_3a60:; */
        /* L_3a64:; */
        /* ((JAIZelBasic*)(this->field_0x0))->monsSeStart(18544, (_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 608), -1, 0, dComIfGp_getReverb((this->field_0x20a & 255))); */
        /* field_0x254 = 0; */
        /* field_0x304 = (this->field_0x304 + 1); */
        /* goto L_3d3c; */
        /* L_3a84:; */
        /* if (this->field_0x5d != 0) goto L_3aac; */
        /* if (/ * beq * / 1) goto L_3aac; */
        /* L_3aac:; */
        /* if (0 == 0) goto L_3d3c; */
        /* field_0x304 = (this->field_0x304 + 1); */
        /* L_3ac0:; */
        /* anm_init(_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), 16, 2, 6); */
        /* field_0x254 = 0; */
        /* if (_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) == 0) goto L_3af4; */
        /* goto L_3af8; */
        /* L_3af4:; */
        /* L_3af8:; */
        /* cM_rndFX(anm_init(_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), 16, 2, 6)); */
        /* field_0x304 = (this->field_0x304 + 1); */
        /* L_3b3c:; */
        /* if (this->field_0x2e9 == 255) goto L_3c2c; */
        /* if (this->field_0x2d8 == 0) goto L_3c2c; */
        /* if ((((this->field_0x1f8 - this->field_0x2c4) * (this->field_0x1f8 - this->field_0x2c4)) + ((this->field_0x200 - this->field_0x2cc) * (this->field_0x200 - this->field_0x2cc))) <= this->field_0x0) goto L_3bdc; */
        /* L_3bdc:; */
        /* if (this->field_0x8 <= this->field_0x88) goto L_3d3c; */
        /* cM_rndF(anm_init(_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), 17, 2, -1)); */
        /* field_0x254 = 0; */
        /* field_0x2d2 = 0; */
        /* field_0x304 = 7; */
        /* goto L_3ecc; */
        /* L_3c2c:; */
        /* fopAcM_searchActorDistance(_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), this->field_0x5b38); */
        /* if (/ * ble * / 1) goto L_3d3c; */
        /* cM_rndF(fopAcM_searchActorDistance(_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), this->field_0x5b38)); */
        /* field_0x254 = 0; */
        /* field_0x2d2 = 0; */
        /* field_0x304 = 5; */
        /* goto L_3ecc; */
        /* L_3c6c:; */
        /* cLib_addCalc0((_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 596)); */
        /* if (/ * bge * / 1) goto L_3d3c; */
        /* field_0x254 = 0; */
        /* anm_init(_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), 24, 0, -1); */
        dComIfGp_getReverb((this->field_0x20a & 255));
        /* if (_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) == 0) goto L_3cec; */
        /* goto L_3cf0; */
        /* L_3cec:; */
        /* L_3cf0:; */
        /* ((JAIZelBasic*)(this->field_0x0))->monsSeStart(18544, (_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 608), -1, 0, dComIfGp_getReverb((this->field_0x20a & 255))); */
        /* field_0x304 = 15; */
        /* goto L_3d3c; */
        /* L_3d04:; */
        /* if (this->field_0x5d != 0) goto L_3d2c; */
        /* if (/ * beq * / 1) goto L_3d2c; */
        /* L_3d2c:; */
        /* if (0 == 0) goto L_3d3c; */
        /* field_0x304 = 12; */
        /* L_3d3c:; */
        /* field_0x64 = 0; */
        /* if (this->field_0x304 != 13) goto L_3d78; */
        /* fopAcM_searchActorDistance(_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), this->field_0x5b38); */
        /* if (/ * bge * / 1) goto L_3d78; */
        /* field_0x64 = 0; */
        /* L_3d78:; */
        /* if (this->field_0x5c0 == 0) goto L_3dac; */
        /* if (this->field_0x304 == 14) goto L_3e50; */
        /* field_0x254 = 0; */
        /* field_0x2d2 = 1; */
        /* field_0x304 = 14; */
        /* goto L_3e50; */
        /* L_3dac:; */
        /* if (this->field_0x570 == 0) goto L_3e50; */
        /* if (((dCcD_GAtTgCoCommonBase*)((_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1468)))->GetAc() == 0) goto L_3e50; */
        /* if (((dCcD_GAtTgCoCommonBase*)((_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1468)))->GetAc() != this->field_0x5b38) goto L_3e50; */
        /* if (this->field_0x304 == 15) goto L_3e50; */
        /* anm_init(_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), 20, 0, -1); */
        dComIfGp_getReverb((this->field_0x20a & 255));
        /* if (_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) == 0) goto L_3e2c; */
        /* goto L_3e30; */
        /* L_3e2c:; */
        /* L_3e30:; */
        /* ((JAIZelBasic*)(this->field_0x0))->monsSeStart(18546, (_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 608), -1, 0, dComIfGp_getReverb((this->field_0x20a & 255))); */
        /* field_0x254 = 0; */
        /* field_0x2f8 = 0; */
        /* field_0x304 = 15; */
        /* L_3e50:; */
        /* fire_kaiten_keisan(_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* field_0x2fe = (this->field_0x300 + fopAcM_searchActorAngleY(_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), this->field_0x5b38)); */
        /* cLib_addCalcAngleS2((_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 518), this->field_0x2fe, 1, 4096); */
        /* cLib_addCalcAngleS2((_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 526), this->field_0x206, 1, 1024); */
        /* if (this->field_0x304 < 12) goto L_3eac; */
        /* fuwafuwa_keisan(_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* L_3eac:; */
        /* if (this->field_0x2d0 != 1) goto L_3ec4; */
        /* blue_body_atari_check(_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* goto L_3ecc; */
        /* L_3ec4:; */
        /* L_3ecc:; */
        /* return _restgpr_27(red_body_atari_check(_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7))); */
}

/* 00003F68-00004128       .text action_sagarimasu__FP8bl_class */
void action_sagarimasu(bl_class*) {
        /* _savegpr_29(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* if (this->field_0x304 == 21) goto L_3fac; */
        /* if (/ * bge * / 1) goto L_4064; */
        /* if (this->field_0x304 >= 20) goto L_3f2c; */
        /* goto L_4064; */
        /* L_3f2c:; */
        /* anm_init(_savegpr_29(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), 23, 0, -1); */
        /* field_0x254 = (this->field_0x3c + this->field_0x4b4); */
        /* if (this->field_0x2d4 == 4) goto L_3f70; */
        /* if (this->field_0x2d4 != 5) goto L_3fa0; */
        /* L_3f70:; */
        /* field_0x254 = (this->field_0x4c + this->field_0x4b8); */
        /* if (this->field_0x2d4 != 5) goto L_3fa0; */
        /* field_0x206 = (this->field_0x20e + -16384); */
        /* L_3fa0:; */
        /* field_0x304 = (this->field_0x304 + 1); */
        /* L_3fac:; */
        /* cLib_addCalc0((_savegpr_29(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 596)); */
        /* if (this->field_0x254 >= this->field_0xa4) goto L_4064; */
        /* field_0x2d2 = 1; */
        /* field_0x304 = 10; */
        /* if (this->field_0x2d3 == 0) goto L_4064; */
        /* if (this->field_0x2d0 != 0) goto L_4064; */
        /* if (this->field_0x285 != 0) goto L_4064; */
        /* fopAcM_createDisappear(_savegpr_29(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* field_0x280 = 0; */
        ((dSv_info_c*)(((char*)&g_dComIfG_gameInfo + 0)))->onActor(this->field_0x1bc, (this->field_0x1e2 & 255));
        /* fopAcM_delete(_savegpr_29(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* L_4064:; */
        /* fire_kaiten_keisan(_savegpr_29(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* if (this->field_0x2d0 != 1) goto L_4084; */
        /* blue_body_atari_check(_savegpr_29(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* goto L_408c; */
        /* L_4084:; */
        /* L_408c:; */
        /* return _restgpr_29(red_body_atari_check(_savegpr_29(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7))); */
}

/* 00004128-000046BC       .text action_kaze_move__FP8bl_class */
void action_kaze_move(bl_class*) {
        /* if ((this->field_0x304 + -30) > 9) goto L_45d0; */
        /* field_0x280 = 4; */
        /* field_0x61c = 0; */
        /* field_0x61e = 0; */
        /* field_0x254 = 0; */
        /* field_0x310 = 0; */
        cM_rndF((0 + 2));
        cM_rnd();
        /* if (/ * bge * / 1) goto L_4190; */
        /* field_0x2f8 = (this->field_0x2f8 * -1); */
        /* L_4190:; */
        /* if (this->field_0x308 == 23) goto L_41b8; */
        anm_init(arg0, 23, 0, -1);
        /* L_41b8:; */
        /* field_0x2f0 = 0; */
        fire_emitter_clr(arg0);
        /* ((JAIZelBasic*)(this->field_0x0))->seStart(22667, (arg0 + 608), 0, dComIfGp_getReverb((this->field_0x20a & 255)), 0); */
        dComIfGp_getReverb((this->field_0x20a & 255));
        /* if (arg0 == 0) goto L_423c; */
        /* goto L_4240; */
        /* L_423c:; */
        /* L_4240:; */
        /* ((JAIZelBasic*)(this->field_0x0))->monsSeStart(18547, (arg0 + 608), -1, 0, dComIfGp_getReverb((this->field_0x20a & 255))); */
        /* field_0x304 = (this->field_0x304 + 1); */
        /* field_0x210 = (this->field_0x210 + this->field_0x2f8); */
        cLib_addCalc2((arg0 + 548));
        cLib_addCalc0((arg0 + 596));
        /* if (this->field_0x254 > this->field_0xa4) goto L_45d0; */
        /* field_0x304 = (this->field_0x304 + 1); */
        /* field_0x2d3 = 0; */
        /* field_0x254 = 0; */
        /* field_0x304 = (this->field_0x304 + 1); */
        cLib_addCalc2((arg0 + 600));
        cLib_addCalcAngleS2((arg0 + 524), -32767, 1, 288);
        /* if (/ * beq * / 1) goto L_45d0; */
        /* field_0x304 = (this->field_0x304 + 1); */
        /* field_0x224 = 0; */
        /* field_0x258 = 0; */
        bound_sound_set(arg0);
        /* field_0x304 = (this->field_0x304 + 1); */
        cLib_addCalcAngleS2((arg0 + 524), 0, 1, 1024);
        cLib_addCalcAngleS2((arg0 + 528), 0, 1, 1024);
        /* if (abs(this->field_0x20c) >= 256) goto L_45d0; */
        /* if (abs(this->field_0x210) >= 256) goto L_45d0; */
        /* field_0x20c = 0; */
        /* field_0x210 = 0; */
        /* if (/ * beq * / 1) goto L_4398; */
        /* field_0x2d2 = 10; */
        /* field_0x304 = 100; */
        /* goto L_45d0; */
        /* L_4398:; */
        /* field_0x304 = 38; */
        /* goto L_45d0; */
        /* field_0x224 = 0; */
        /* field_0x258 = 0; */
        bound_sound_set(arg0);
        /* if (/ * bne * / 1) goto L_43f0; */
        /* field_0x280 = 4; */
        /* L_43f0:; */
        /* field_0x254 = 0; */
        /* mDoMtx_YrotS(this->field_0x0, ((fopAcM_searchActorAngleY(arg0, this->field_0x5b38) + -32768) & 65535)); */
        MtxPosition();
        /* field_0x544 = 80; */
        /* field_0x304 = (this->field_0x304 + 1); */
        /* field_0x20c = (this->field_0x20c + this->field_0x2f8); */
        /* field_0x210 = (this->field_0x210 + this->field_0x2fa); */
        /* if (this->field_0x254 >= this->field_0xa0) goto L_4510; */
        /* if (roll_check(arg0) == 0) goto L_4534; */
        /* if (/ * beq * / 1) goto L_4504; */
        /* field_0x2d2 = 10; */
        /* field_0x304 = 100; */
        /* goto L_4534; */
        /* L_4504:; */
        /* field_0x304 = 38; */
        /* goto L_4534; */
        /* L_4510:; */
        /* if (/ * beq * / 1) goto L_4534; */
        /* field_0x2fc = 1; */
        /* field_0x224 = 0; */
        bound_sound_set(arg0);
        /* L_4534:; */
        /* if (this->field_0x2fc == 0) goto L_45d0; */
        cLib_addCalc0((arg0 + 596));
        /* goto L_45d0; */
        cM_rndF(cLib_addCalc0((arg0 + 596)));
        /* field_0x254 = 0; */
        /* field_0x304 = (this->field_0x304 + 1); */
        /* if (this->field_0x2ee != 0) goto L_45d0; */
        anm_init(arg0, 21, 0, -1);
        /* field_0x254 = 0; */
        /* field_0x2d2 = 0; */
        /* field_0x304 = 1; */
        /* L_45d0:; */
        /* field_0x31c = 0; */
        /* if (/ * beq * / 1) goto L_4604; */
        skull_atari_check(arg0);
        /* goto L_4620; */
        /* L_4604:; */
        /* if (skull_atari_check(arg0) != 1) goto L_4618; */
        blue_body_atari_check(arg0);
        /* goto L_4620; */
        /* L_4618:; */
        /* L_4620:; */
        return red_body_atari_check(arg0);
}

/* 000046BC-00004B84       .text action_itaiyo_ne_san__FP8bl_class */
void action_itaiyo_ne_san(bl_class*) {
        /* _savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* if (this->field_0x304 == 42) goto L_4890; */
        /* if (/ * bge * / 1) goto L_4684; */
        /* if (this->field_0x304 == 40) goto L_4690; */
        /* if (/ * bge * / 1) goto L_4830; */
        /* goto L_4ac8; */
        /* L_4684:; */
        /* if (this->field_0x304 >= 44) goto L_4ac8; */
        /* goto L_4a5c; */
        /* L_4690:; */
        /* field_0x31c = 0; */
        /* field_0x258 = 0; */
        /* field_0x280 = 4; */
        /* if (this->field_0x308 == 23) goto L_4708; */
        /* anm_init(_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), 23, 0, -1); */
        /* L_4708:; */
        /* field_0x2f0 = 0; */
        /* fire_emitter_clr(_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* if (this->field_0x285 != 0) goto L_47a0; */
        /* if (this->field_0x2d4 != 4) goto L_4748; */
        /* field_0x2ec = 0; */
        /* goto L_478c; */
        /* L_4748:; */
        /* field_0x2ec = 50; */
        /* field_0x310 = 0; */
        /* field_0x224 = 0; */
        /* field_0x254 = 0; */
        /* if (this->field_0x2d4 != 5) goto L_4784; */
        /* field_0x206 = (this->field_0x20e + -16384); */
        /* L_4784:; */
        /* bound_sound_set(_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* L_478c:; */
        /* field_0x280 = 0; */
        /* field_0x304 = 42; */
        /* goto L_47c8; */
        /* L_47a0:; */
        /* field_0x304 = 41; */
        /* field_0x224 = 0; */
        /* field_0x254 = 0; */
        /* bound_sound_set(_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* L_47c8:; */
        /* mDoMtx_YrotS(this->field_0x0, ((fopAcM_searchActorAngleY(_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), this->field_0x5b38) + -32768) & 65535)); */
        MtxPosition();
        /* goto L_4ac8; */
        /* L_4830:; */
        /* if (this->field_0x254 >= this->field_0xa4) goto L_485c; */
        /* if (roll_check(MtxPosition()) == 0) goto L_485c; */
        /* field_0x2d2 = 3; */
        /* field_0x304 = 38; */
        /* L_485c:; */
        /* cLib_addCalc0((_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 596)); */
        /* if (this->field_0x2d0 != 1) goto L_4884; */
        /* blue_body_atari_check(_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* goto L_4ac8; */
        /* L_4884:; */
        /* red_body_atari_check(_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* goto L_4ac8; */
        /* L_4890:; */
        /* if (/ * beq * / 1) goto L_4ac8; */
        /* field_0x310 = (this->field_0x310 * this->field_0x64); */
        /* if (this->field_0x310 >= this->field_0x14) goto L_48c0; */
        /* field_0x310 = 0; */
        /* L_48c0:; */
        /* field_0x224 = 0; */
        /* bound_sound_set(_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* if (this->field_0x2ec != 0) goto L_4ac8; */
        /* fopAcM_createDisappear(_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* if (this->field_0x2d4 != 4) goto L_4a38; */
        /* if (((dPa_control_c*)(this->field_0x5ab8))->set(0, 1000) == 0) goto L_49b8; */
        /* field_0x70 = 0; */
        /* field_0x74 = 0; */
        /* L_49b8:; */
        /* field_0x6bc = 0; */
        /* field_0x6c0 = 0; */
        /* field_0x6c4 = 0; */
        /* smoke_set(_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* field_0x214 = 0; */
        /* field_0x218 = 0; */
        /* field_0x21c = 0; */
        /* field_0x31c = 0; */
        /* field_0x2fc = 180; */
        /* field_0x2ee = 10; */
        /* field_0x304 = (this->field_0x304 + 1); */
        /* goto L_4ac8; */
        /* L_4a38:; */
        ((dSv_info_c*)(((char*)&g_dComIfG_gameInfo + 0)))->onActor(this->field_0x1bc, (this->field_0x1e2 & 255));
        /* fopAcM_delete(_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* goto L_4ac8; */
        /* L_4a5c:; */
        /* if (this->field_0x6cc == 0) goto L_4aac; */
        /* if (this->field_0x2ee != 0) goto L_4ac8; */
        /* field_0x2fc = (this->field_0x2fc + -4); */
        /* if (this->field_0x2fc >= 0) goto L_4ac8; */
        /* goto L_4ac8; */
        /* L_4aac:; */
        ((dSv_info_c*)(((char*)&g_dComIfG_gameInfo + 0)))->onActor(this->field_0x1bc, (this->field_0x1e2 & 255));
        /* fopAcM_delete(_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* L_4ac8:; */
        /* field_0x20c = (this->field_0x20c + this->field_0x2f8); */
        /* field_0x210 = (this->field_0x210 + this->field_0x2fa); */
        /* return _restgpr_28(this->field_0x210); */
}

/* 00004B84-00004D3C       .text action_hook_atari__FP8bl_class */
void action_hook_atari(bl_class*) {
        /* if (this->field_0x304 == 61) goto L_4c70; */
        /* if (/ * bge * / 1) goto L_4c8c; */
        /* if (this->field_0x304 >= 60) goto L_4b3c; */
        /* goto L_4c8c; */
        /* L_4b3c:; */
        /* if (this->field_0x700 == 0) goto L_4c34; */
        /* field_0x2f0 = 0; */
        fire_emitter_clr(arg0);
        anm_init(arg0, 23, 0, -1);
        /* field_0x254 = 0; */
        /* ((JAIZelBasic*)(this->field_0x0))->seStart(22667, (arg0 + 608), 0, dComIfGp_getReverb((this->field_0x20a & 255)), 0); */
        dComIfGp_getReverb((this->field_0x20a & 255));
        /* if (arg0 == 0) goto L_4c28; */
        /* goto L_4c2c; */
        /* L_4c28:; */
        /* L_4c2c:; */
        /* ((JAIZelBasic*)(this->field_0x0))->monsSeStart(18547, (arg0 + 608), -1, 0, dComIfGp_getReverb((this->field_0x20a & 255))); */
        /* L_4c34:; */
        /* field_0x61c = 0; */
        /* field_0x61e = 0; */
        /* field_0x280 = 4; */
        /* field_0x304 = (this->field_0x304 + 1); */
        /* goto L_4c8c; */
        /* L_4c70:; */
        /* if (/ * bne * / 1) goto L_4c8c; */
        /* field_0x2d2 = 3; */
        /* field_0x304 = 32; */
        /* L_4c8c:; */
        return (arg0 + 1768);
}

/* 00004D3C-00004DBC       .text action_come_wait__FP8bl_class */
void action_come_wait(bl_class*) {
    if (this->field_0x304 != 70) {
    } else {
        /* if (this->field_0x2d5 != 255) goto L_4d24; */
        /* if (((dSv_info_c*)(((char*)&g_dComIfG_gameInfo + 0)))->isSwitch(this->field_0x2d5, (this->field_0x0 & 255)) != 0) goto L_4d24; */
        /* field_0x2d2 = 3; */
        /* field_0x304 = 38; */
    }
    /* L_4d24:; */
    return ((dSv_info_c*)(((char*)&g_dComIfG_gameInfo + 0)))->isSwitch(this->field_0x2d5, (this->field_0x0 & 255));
}

/* 00004DBC-00005104       .text action_normal_skull__FP8bl_class */
void action_normal_skull(bl_class*) {
        /* _savegpr_29(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* if (this->field_0x304 == 103) goto L_4e9c; */
        /* if (/ * bge * / 1) goto L_4d98; */
        /* if (this->field_0x304 == 101) goto L_4df4; */
        /* if (/ * bge * / 1) goto L_4e60; */
        /* if (this->field_0x304 >= 100) goto L_4da8; */
        /* goto L_5048; */
        /* L_4d98:; */
        /* if (this->field_0x304 == 105) goto L_4ff4; */
        /* if (/ * bge * / 1) goto L_5048; */
        /* goto L_4eac; */
        /* L_4da8:; */
        /* field_0x328 = (this->field_0x8 + this->field_0x4a8); */
        /* field_0x258 = 0; */
        /* if (/ * beq * / 1) goto L_5048; */
        /* field_0x258 = 0; */
        /* field_0x304 = (this->field_0x304 + 1); */
        /* L_4df4:; */
        /* if (/ * bne * / 1) goto L_5048; */
        /* field_0x258 = 0; */
        /* if (this->field_0x254 <= this->field_0x0) goto L_4e40; */
        /* field_0x224 = 0; */
        /* field_0x254 = 0; */
        /* field_0x304 = 102; */
        /* goto L_5048; */
        /* L_4e40:; */
        /* field_0x254 = 0; */
        /* field_0x220 = 0; */
        /* field_0x224 = 0; */
        /* field_0x228 = 0; */
        /* field_0x258 = 0; */
        /* field_0x304 = 100; */
        /* goto L_5048; */
        /* L_4e60:; */
        /* if (/ * bne * / 1) goto L_4e74; */
        /* if (/ * beq * / 1) goto L_5048; */
        /* L_4e74:; */
        /* field_0x220 = 0; */
        /* field_0x224 = 0; */
        /* field_0x228 = 0; */
        /* if (this->field_0xacc != 0) goto L_5048; */
        /* field_0x304 = 104; */
        /* goto L_5048; */
        /* L_4e9c:; */
        /* bound_sound_set(this->field_0x394); */
        /* field_0x304 = 102; */
        /* goto L_5048; */
        /* L_4eac:; */
        /* if (((dPa_control_c*)(this->field_0x5ab8))->set(0, 1000) == 0) goto L_4f28; */
        /* field_0x70 = 0; */
        /* field_0x74 = 0; */
        /* L_4f28:; */
        /* field_0x6bc = 0; */
        /* field_0x6c0 = 0; */
        /* field_0x6c4 = 0; */
        /* smoke_set(_savegpr_29(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* goto L_4f78; */
        /* L_4f50:; */
        /* L_4f78:; */
        /* cM_rndF(fopAcM_createItem((_savegpr_29(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 504), 0, -1, -1, 0, 0, 4, 0)); */
        /* if ((0 + 1) < 0) goto L_4f50; */
        /* field_0x214 = 0; */
        /* field_0x218 = 0; */
        /* field_0x21c = 0; */
        /* field_0x31c = 0; */
        /* field_0x2fc = 180; */
        /* field_0x2ee = 10; */
        /* field_0x304 = (this->field_0x304 + 1); */
        /* goto L_5048; */
        /* L_4ff4:; */
        /* if (this->field_0x6cc == 0) goto L_5044; */
        /* if (this->field_0x2ee != 0) goto L_5048; */
        /* field_0x2fc = (this->field_0x2fc + -4); */
        /* if (this->field_0x2fc >= 0) goto L_5048; */
        /* goto L_5048; */
        /* L_5044:; */
        /* fopAcM_delete((_savegpr_29(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1736)); */
        /* L_5048:; */
        /* field_0x314 = (this->field_0xd0 + this->field_0x48c); */
        /* return _restgpr_29(skull_atari_check(_savegpr_29(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7))); */
}

/* 00005104-00005504       .text daBL_Execute__FP8bl_class */
static BOOL daBL_Execute(bl_class*) {
        /* _savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* if (this->field_0x2f0 != 1) goto L_50c0; */
        /* L_50c0:; */
        /* if (this->field_0x2f6 != 1) goto L_50d8; */
        /* L_50d8:; */
        /* field_0x260 = 0; */
        /* field_0x264 = 0; */
        /* field_0x268 = 0; */
        /* field_0x274 = 0; */
        /* field_0x278 = 0; */
        /* field_0x27c = 0; */
        /* field_0x264 = (this->field_0x264 + this->field_0x44); */
        /* field_0x278 = (this->field_0x278 + this->field_0x54); */
        /* if (/ * bne * / 1) goto L_5154; */
        /* if (this->field_0x2d3 != 0) goto L_514c; */
        /* ((mDoExt_baseAnm*)(this->field_0x2bc))->play(); */
        /* goto L_5154; */
        /* L_514c:; */
        /* ((mDoExt_baseAnm*)(this->field_0x2c0))->play(); */
        /* L_5154:; */
        /* if (enemy_ice((_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1808)) == 0) goto L_51a0; */
        PSMTXCopy(((char*)&now__14mDoMtx_stack_c + 0), (this->field_0x50 + 36));
        /* ((mDoExt_McaMorf*)(this->field_0x2b4))->calc(); */
        /* if (this->field_0x2f0 == 0) goto L_5198; */
        /* field_0x2f0 = (this->field_0x2f0 + -1); */
        /* L_5198:; */
        return 1;
        /* L_51a0:; */
        /* if (/ * beq * / 1) goto L_51c4; */
        /* L_51c4:; */
        /* if (this->field_0x2d2 > 10) goto L_524c; */
        /* action_dousa(_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* goto L_524c; */
        /* action_kougeki(_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* goto L_524c; */
        /* action_sagarimasu(_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* goto L_524c; */
        /* action_kaze_move(_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* goto L_524c; */
        /* action_itaiyo_ne_san(_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* goto L_524c; */
        /* action_hook_atari(_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* goto L_524c; */
        /* action_come_wait(_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* goto L_524c; */
        /* action_normal_skull(_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* L_524c:; */
        /* if (this->field_0x304 == 0) goto L_52a4; */
        /* if (/ * beq * / 1) goto L_5284; */
        /* ((dBgS*)(((char*)&g_dComIfG_gameInfo + 4768)))->GetMtrlSndId((_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1108)); */
        /* goto L_5288; */
        /* L_5284:; */
        /* L_5288:; */
        /* ((mDoExt_McaMorf*)(this->field_0x2b4))->play((_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 608), 0, dComIfGp_getReverb((this->field_0x20a & 255))); */
        /* L_52a4:; */
        /* mDoMtx_YrotS(this->field_0x0, this->field_0x206); */
        MtxPosition();
        /* field_0x220 = 0; */
        /* field_0x228 = 0; */
        /* field_0x224 = (this->field_0x224 + this->field_0x258); */
        /* if (this->field_0x224 >= this->field_0xd4) goto L_530c; */
        /* field_0x224 = 0; */
        /* L_530c:; */
        /* cLib_addCalc2((_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 532)); */
        /* field_0x21c = 0; */
        /* field_0x218 = 0; */
        /* ((cM3dGSph*)((_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1668)))->SetC(); */
        /* ((cM3dGSph*)((_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1668)))->SetR(); */
        /* ((cCcS*)(((char*)&g_dComIfG_gameInfo + 9892)))->Set((_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1388)); */
        /* if (this->field_0x598 == 0) goto L_5398; */
        /* fopAcM_posMove(_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), (_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1328)); */
        /* goto L_53a4; */
        /* L_5398:; */
        /* fopAcM_posMove(_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), 0); */
        /* L_53a4:; */
        /* BG_check(_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* if (this->field_0x2d1 == 0) goto L_53c8; */
        /* if (/ * beq * / 1) goto L_545c; */
        /* L_53c8:; */
        /* if (/ * beq * / 1) goto L_545c; */
        /* if (((cBgS*)(((char*)&g_dComIfG_gameInfo + 4768)))->ChkPolySafe((_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1108)) == 0) goto L_545c; */
        /* if (((dBgS*)(((char*)&g_dComIfG_gameInfo + 4768)))->GetGroundCode((_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1108)) != 4) goto L_545c; */
        /* if (this->field_0x1fc >= (this->field_0x320 - this->field_0xb4)) goto L_545c; */
        /* field_0x254 = 0; */
        /* field_0x220 = 0; */
        /* field_0x224 = 0; */
        /* field_0x228 = 0; */
        /* field_0x258 = 0; */
        ((dSv_info_c*)(((char*)&g_dComIfG_gameInfo + 0)))->onActor(this->field_0x1bc, (this->field_0x1e2 & 255));
        /* fopAcM_delete(_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* L_545c:; */
        /* draw_SUB(_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        return _restgpr_28(1);
}

/* 00005504-0000550C       .text daBL_IsDelete__FP8bl_class */
static BOOL daBL_IsDelete(bl_class*) {
    return 1;
}

/* 0000550C-0000558C       .text daBL_Delete__FP8bl_class */
static BOOL daBL_Delete(bl_class*) {
    enemy_fire_remove((arg0 + 2760));
    dComIfG_resDelete((arg0 + 684), ((char*)&@stringBase0 + 0));
    return 1;
}

/* 0000558C-0000583C       .text useHeapInit__FP10fopAc_ac_c */
static BOOL useHeapInit(fopAc_ac_c*) {
    /* _savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
    __nw(180);
    if (/* beq */ 1) {
        ((dRes_control_c*)(((char*)&@stringBase0 + 0)))->getRes(21);
    }
    /* field_0x2b4 = __ct(((dRes_control_c*)(((char*)&@stringBase0 + 0)))->getRes(27), 1, ((dRes_control_c*)(((char*)&@stringBase0 + 0)))->getRes(27), 0, 0, ((dRes_control_c*)(((char*)&@stringBase0 + 0)))->getRes(21), 1, 0); */
    if (this->field_0x2b4 != 0) {
        /* if (this->field_0x50 == 0) goto L_55f4; */
    }
    return 0;
    /* L_55f4:; */
    if (__nw(20) != 0) {
        /* field_0x0 = 0; */
        /* field_0x4 = 0; */
        /* field_0x0 = 0; */
        /* field_0xc = 0; */
    }
    /* field_0x2c0 = __nw(20); */
    if (this->field_0x2c0 == 0) {
        return 0;
    }
    /* if (((mDoExt_btkAnm*)(this->field_0x2c0))->init(this->field_0x4, ((dRes_control_c*)(((char*)&@stringBase0 + 0)))->getRes(31), 1, 0, 0, -1, 0) == 0) { */
        /* return 0; */
    if (this->field_0x2c0 == 0) {
        return 0;
    }
    if (__nw(20) != 0) {
        /* field_0x0 = 0; */
        /* field_0x4 = 0; */
        /* field_0x0 = 0; */
        /* field_0xc = 0; */
    }
    /* field_0x2bc = __nw(20); */
    if (this->field_0x2bc == 0) {
        return 0;
    }
    /* if (((mDoExt_btkAnm*)(this->field_0x2bc))->init(this->field_0x4, ((dRes_control_c*)(((char*)&@stringBase0 + 0)))->getRes(30), 1, 0, 0, -1, 0) == 0) { */
        /* return 0; */
    if (this->field_0x2bc == 0) {
        return 0;
    /* field_0x14 = _savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
    /* return _restgpr_28(((mDoExt_invisibleModel*)((_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 3312)))->create(this->field_0x50)); */

/* 00005884-00005D88       .text daBL_Create__FP10fopAc_ac_c */
static cPhs_State daBL_Create(fopAc_ac_c*) {
    /* Nonmatching */
    static dCcD_SrcSph body_co_sph_src = {
        // dCcD_SrcGObjInf
        {
            /* Flags             */ 0,
            /* SrcObjAt  Type    */ AT_TYPE_FIRE,
            /* SrcObjAt  Atp     */ 1,
            /* SrcObjAt  SPrm    */ cCcD_AtSPrm_Set_e | cCcD_AtSPrm_VsPlayer_e,
            /* SrcObjTg  Type    */ AT_TYPE_ALL & ~AT_TYPE_WATER & ~AT_TYPE_UNK20000 & ~AT_TYPE_UNK400000 & ~AT_TYPE_LIGHT,
            /* SrcObjTg  SPrm    */ cCcD_TgSPrm_Set_e | cCcD_TgSPrm_IsEnemy_e,
            /* SrcObjCo  SPrm    */ cCcD_CoSPrm_Set_e | cCcD_CoSPrm_IsPlayer_e | cCcD_CoSPrm_VsGrpAll_e,
            /* SrcGObjAt Se      */ dCcG_SE_WOOD,
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

static actor_method_class l_daBL_Method = {
    (process_method_func)daBL_Create,
    (process_method_func)daBL_Delete,
    (process_method_func)daBL_Execute,
    (process_method_func)daBL_IsDelete,
    (process_method_func)daBL_Draw,
};

actor_process_profile_definition g_profile_BL = {
    /* Layer ID     */ fpcLy_CURRENT_e,
    /* List ID      */ 0x0007,
    /* List Prio    */ fpcPi_CURRENT_e,
    /* Proc Name    */ fpcNm_BL_e,
    /* Proc SubMtd  */ &g_fpcLf_Method.base,
    /* Size         */ sizeof(bl_class),
    /* Size Other   */ 0,
    /* Parameters   */ 0,
    /* Leaf SubMtd  */ &g_fopAc_Method.base,
    /* Draw Prio    */ fpcDwPi_BL_e,
    /* Actor SubMtd */ &l_daBL_Method,
    /* Status       */ fopAcStts_CULL_e | fopAcStts_UNK40000_e | fopAcStts_UNK80000_e,
    /* Group        */ fopAc_ENEMY_e,
    /* Cull Type    */ fopAc_CULLBOX_0_e,
};

/* 由 fix_decomp_braces.py 补齐：反编译产物末尾缺 3 个 } */
}}}
