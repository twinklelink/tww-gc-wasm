/**
 * d_a_bo.cpp
 * Enemy - Boko Baba
 */

#include "d/dolzel_rel.h" // IWYU pragma: keep
#include "d/actor/d_a_bo.h"
#include "d/d_cc_d.h"

/* 000000EC-000001E8       .text smoke_set__FP8bo_class */
void smoke_set(bo_class*) {
        /* if (/ * beq * / 1) goto L_150; */
        /* field_0x0 = 0; */
        /* if (/ * beq * / 1) goto L_12c; */
}

/* 000001E8-00000638       .text nodeCallBack_UP__FP7J3DNodei */
static BOOL nodeCallBack_UP(J3DNode*, int) {
    /* field_0x14 = (arg0 + 0); */
    /* field_0x24 = ((arg0 + 0) + 12); */
    if (/* beq */ 1) {
        /* field_0x24 = 0; */
    }
    __dt();
    if (/* beq */ 1) {
        /* field_0x0 = 0; */
    }
    if (/* ble */ 1) {
    }
    return __dl(__vt__54JPACallBackBase2<P14JPABaseEmitter,P15JPABaseParticle>);
}

/* 00000638-000006C8       .text nodeCallBack_DW__FP7J3DNodei */
static BOOL nodeCallBack_DW(J3DNode*, int) {
    return arg0;
}

/* 000006C8-0000079C       .text execute__22yodare_ato_PcallBack_cFP14JPABaseEmitterP15JPABaseParticle */
void yodare_ato_PcallBack_c::execute(JPABaseEmitter*, JPABaseParticle*) {
    if (/* beq */ 1) {
        /* field_0x20 = 0; */
    }
    __dt();
    if (/* ble */ 1) {
    }
    return __dl(__dt());
}

/* 0000079C-00000930       .text draw_SUB__FP8bo_class */
void draw_SUB(bo_class*) {
    if (this->field_0x2c0 != 0) {
        /* if (this->field_0x2c0 == 2) goto L_79c; */
    }
    if (this->field_0x2c0 == 2) {
        /* field_0x304 = 0; */
        /* field_0x308 = 0; */
        /* field_0x30c = 0; */
        /* ((mDoExt_baseAnm*)(this->field_0x2b4))->play(); */
    }
    PSMTXTrans(((char*)&now__14mDoMtx_stack_c + 0));
    /* mDoMtx_YrotM(((char*)&now__14mDoMtx_stack_c + 0), this->field_0x348); */
    /* mDoMtx_XrotM(((char*)&now__14mDoMtx_stack_c + 0), this->field_0x20c); */
    /* mDoMtx_ZrotM(((char*)&now__14mDoMtx_stack_c + 0), this->field_0x210); */
    ((mDoMtx_stack_c*)(C_@4283))->transM();
    PSMTXCopy(((char*)&now__14mDoMtx_stack_c + 0), (this->field_0x50 + 36));
    /* ((mDoExt_McaMorf*)(this->field_0x2b8))->calc(); */
    if (this->field_0x2c0 == 0) {
        enemy_fire((arg0 + 3508));
    }
    /* L_79c:; */
    if (this->field_0x2c0 != 0) {
        /* if (this->field_0x2c0 == 1) goto L_818; */
    }
    PSMTXTrans(((char*)&now__14mDoMtx_stack_c + 0));
    /* mDoMtx_YrotM(((char*)&now__14mDoMtx_stack_c + 0), this->field_0x206); */
    /* mDoMtx_XrotM(((char*)&now__14mDoMtx_stack_c + 0), this->field_0x20c); */
    /* mDoMtx_ZrotM(((char*)&now__14mDoMtx_stack_c + 0), this->field_0x210); */
    PSMTXCopy(((char*)&now__14mDoMtx_stack_c + 0), (this->field_0x50 + 36));
    /* ((mDoExt_McaMorf*)(this->field_0x2bc))->calc(); */
    /* L_818:; */
    return ((dScnKy_env_light_c*)(((char*)&g_env_light + 0)))->settingTevStruct(0, (arg0 + 504), (arg0 + 268));
}

/* 00000930-00000AD4       .text daBO_Draw__FP8bo_class */
static BOOL daBO_Draw(bo_class*) {
        /* if (this->field_0x7de == 0) goto L_878; */
        return 1;
        /* L_878:; */
        /* if (this->field_0x2c0 == 0) goto L_890; */
        /* if (this->field_0x2c0 != 2) goto L_8a8; */
        /* L_890:; */
        ((dScnKy_env_light_c*)(((char*)&g_env_light + 0)))->setLightTevColorType(this->field_0x50, (arg0 + 268));
        /* L_8a8:; */
        /* if (this->field_0x2c0 == 0) goto L_8bc; */
        /* if (this->field_0x2c0 != 1) goto L_8e0; */
        /* L_8bc:; */
        /* if (this->field_0xa02 != 0) goto L_8e0; */
        ((dScnKy_env_light_c*)(((char*)&g_env_light + 0)))->setLightTevColorType(this->field_0x50, (arg0 + 268));
        /* L_8e0:; */
        dSnap_RegistFig(178, arg0, (arg0 + 504), this->field_0x348, C_@4459);
        /* if (this->field_0x2c0 != 0) goto L_93c; */
        /* if (this->field_0xa0a <= 20) goto L_93c; */
        /* ((dMat_ice_c*)(this->field_0x0))->entryDL(this->field_0x2b8, -1, (arg0 + 4060)); */
        /* L_93c:; */
        /* if (1 != 0) goto L_9a4; */
        /* if (this->field_0x2c0 == 0) goto L_958; */
        /* if (this->field_0x2c0 != 2) goto L_9a4; */
        /* L_958:; */
        /* if (this->field_0x2c0 != 2) goto L_97c; */
        /* ((mDoExt_brkAnm*)(this->field_0x2b4))->entry(this->field_0x4, this->field_0x4); */
        /* L_97c:; */
        /* ((mDoExt_McaMorf*)(this->field_0x2b8))->entryDL(); */
        /* if (this->field_0x2c0 != 2) goto L_9a4; */
        /* ((J3DMaterialTable*)((this->field_0x4 + 88)))->removeTevRegAnimator(this->field_0x8); */
        /* L_9a4:; */
        /* if (this->field_0x2c0 == 0) goto L_9b8; */
        /* if (this->field_0x2c0 != 1) goto L_9cc; */
        /* L_9b8:; */
        /* if (this->field_0xa02 != 0) goto L_9cc; */
        /* ((mDoExt_McaMorf*)(this->field_0x2bc))->entryDL(); */
        /* L_9cc:; */
        return 1;
}

/* 00000AD4-00000CD4       .text anm_init__FP8bo_classifUcfii */
void anm_init(bo_class*, int, float, unsigned char, float, int, int) {
        /* _savegpr_27(arg0, int, float, char, float, int, int, arg7); */
        /* if (/ * bne * / 1) goto L_af8; */
        /* if (/ * blt * / 1) goto L_aa8; */
        /* ((mDoExt_McaMorf*)(this->field_0x2b8))->setAnm(((dRes_control_c*)(((char*)&@stringBase0 + 0)))->getRes()); */
        /* goto L_bc0; */
        /* L_aa8:; */
        /* ((mDoExt_McaMorf*)(this->field_0x2b8))->setAnm(((dRes_control_c*)(((char*)&@stringBase0 + 0)))->getRes()); */
        /* goto L_bc0; */
        /* L_af8:; */
        /* if (/ * blt * / 1) goto L_b74; */
        /* ((mDoExt_McaMorf*)(this->field_0x2bc))->setAnm(((dRes_control_c*)(((char*)&@stringBase0 + 0)))->getRes()); */
        /* goto L_bc0; */
        /* L_b74:; */
        /* L_bc0:; */
        /* return _restgpr_27(((mDoExt_McaMorf*)(this->field_0x2bc))->setAnm(((dRes_control_c*)(((char*)&@stringBase0 + 0)))->getRes())); */
}

/* 00000CD4-00000E24       .text shock_damage_check__FP8bo_class */
void shock_damage_check(bo_class*) {
        /* if (/ * beq * / 1) goto L_d1c; */
        getSwordTopPos();
        /* if ((((this->field_0xc - this->field_0x1f8) * (this->field_0xc - this->field_0x1f8)) + ((this->field_0x14 - this->field_0x200) * (this->field_0x14 - this->field_0x200))) <= this->field_0x14) goto L_cc8; */
        /* L_cc8:; */
        /* if (this->field_0x8 >= this->field_0x48) goto L_d1c; */
        /* ((JAIZelBasic*)(this->field_0x0))->seStart(10325, (arg0 + 608), 49, dComIfGp_getReverb((this->field_0x20a & 255)), 0); */
        return 1;
        /* L_d1c:; */
        return 0;
}

/* 00000E24-000013A4       .text head_atari_check__FP8bo_class */
void head_atari_check(bo_class*) {
        /* ((dCcD_GStts*)((_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1620)))->Move(); */
        /* if (this->field_0x36e == 0) goto L_d80; */
        return 0;
        /* L_d80:; */
        /* if (shock_damage_check(_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)) == 0) goto L_da0; */
        /* field_0x2ca = 1; */
        return 1;
        /* L_da0:; */
        /* if (this->field_0x690 != 0) goto L_db4; */
        return 0;
        /* L_db4:; */
        /* ((dCcD_GObjInf*)((_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1652)))->GetTgHitObj(); */
        /* if (/ * bne * / 1) goto L_dcc; */
        return 0;
        /* L_dcc:; */
        /* field_0x358 = 0; */
        /* field_0x35c = 0; */
        /* field_0x360 = 0; */
        /* field_0x370 = cM_atan2s(((char*)&g_regHIO + 0)); */
        /* field_0x2ca = 0; */
        /* field_0x364 = 0; */
        /* field_0x2ca = 1; */
        /* ((JAIZelBasic*)(this->field_0x0))->onEnemyDamage(); */
        /* if (this->field_0x10 == 1) goto L_118c; */
        /* if (/ * bge * / 1) goto L_e94; */
        /* if (this->field_0x10 == 512) goto L_118c; */
        /* if (/ * bge * / 1) goto L_e84; */
        /* if (this->field_0x10 == 64) goto L_1028; */
        /* if (/ * bge * / 1) goto L_1290; */
        /* if (this->field_0x10 == 2) goto L_fd0; */
        /* goto L_1290; */
        /* L_e84:; */
        /* if (this->field_0x10 == 1) goto L_1278; */
        /* goto L_1290; */
        /* L_e94:; */
        /* if (this->field_0x10 == 1) goto L_120c; */
        /* if (/ * bge * / 1) goto L_eb4; */
        /* if (this->field_0x10 == 1) goto L_11c4; */
        /* goto L_1290; */
        /* L_eb4:; */
        /* if (this->field_0x10 == 1) goto L_ec4; */
        /* goto L_1290; */
        /* L_ec4:; */
        /* if (this->field_0x28d != 0) goto L_f00; */
        /* field_0x285 = 10; */
        /* ((dCcD_GObjInf*)((_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1652)))->GetTgHitObj(); */
        /* cc_at_check(_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* L_f00:; */
        /* ((dPa_control_c*)(this->field_0x5ab8))->set(0, 635, (_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 628), 0, 0, 255, 0); */
        /* field_0x2ca = 0; */
        dComIfGp_getReverb((this->field_0x20a & 255));
        /* if (_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) == 0) goto L_f80; */
        /* goto L_f84; */
        /* L_f80:; */
        /* L_f84:; */
        /* ((JAIZelBasic*)(this->field_0x0))->monsSeStart(18511, (_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 608), -1, 0, dComIfGp_getReverb((this->field_0x20a & 255))); */
        /* ((JAIZelBasic*)(this->field_0x0))->seStart(10294, (_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 608), 32, dComIfGp_getReverb((this->field_0x20a & 255)), 0); */
        /* goto L_1298; */
        /* L_fd0:; */
        /* if (pl_cut_real_no_dt == this->field_0x290) goto L_1004; */
        /* L_1004:; */
        /* if ((0 + 1) < 32) goto L_1014; */
        return 0;
        /* L_1014:; */
        /* goto L_1298; */
        /* L_1028:; */
        /* field_0x2ca = 1; */
        /* field_0x364 = ((this->field_0x50e + 5) & 16777215); */
        /* field_0x6e3 = 0; */
        /* field_0x398 = 0; */
        /* ((dPa_control_c*)(this->field_0x5ab8))->set(0, 16, (_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 856), 0, 0, 255, 0); */
        /* ((dPa_control_c*)(this->field_0x5ab8))->set(0, 15, (_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 856), (this->field_0x5b38 + 524)); */
        dComIfGp_getReverb((this->field_0x20a & 255));
        /* if (_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) == 0) goto L_113c; */
        /* goto L_1140; */
        /* L_113c:; */
        /* L_1140:; */
        /* ((JAIZelBasic*)(this->field_0x0))->monsSeStart(18512, (_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 608), -1, 0, dComIfGp_getReverb((this->field_0x20a & 255))); */
        /* ((JAIZelBasic*)(this->field_0x0))->seStart(10280, (_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 608), 32, dComIfGp_getReverb((this->field_0x20a & 255)), 0); */
        /* goto L_1298; */
        /* L_118c:; */
        /* field_0x2d0 = 1; */
        /* field_0x280 = 0; */
        /* goto L_1298; */
        /* L_11c4:; */
        /* field_0x2d0 = 2; */
        /* field_0xa08 = 1; */
        /* field_0x280 = 0; */
        /* field_0x285 = 30; */
        /* goto L_1298; */
        /* L_120c:; */
        /* field_0xa02 = 1; */
        /* field_0xba8 = 0; */
        /* field_0xa04 = (this->field_0x58 + this->field_0x4c0); */
        /* field_0x280 = 0; */
        /* field_0x2d0 = 3; */
        fopAcM_create(215);
        /* goto L_1298; */
        /* L_1278:; */
        /* if (this->field_0x290 == 17) goto L_1290; */
        /* field_0x2ca = 2; */
        /* goto L_1298; */
        /* L_1290:; */
        /* field_0x2ca = 1; */
        /* L_1298:; */
        return _restgpr_28(1);
}

/* 000013A4-0000170C       .text nokezori_damage_rtn__FP8bo_class */
void nokezori_damage_rtn(bo_class*) {
        /* anm_init(_savegpr_29(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), 7, 0, -1, 0); */
        /* mDoMtx_YrotS(this->field_0x0, ((this->field_0x348 - this->field_0x370) & 65535)); */
        MtxPosition();
        /* field_0x334 = 0; */
        /* field_0x336 = 0; */
        /* field_0x338 = 0; */
        /* field_0x218 = 0; */
        /* field_0x37c = 1200; */
        /* if (((dCcD_GObjInf*)((_savegpr_29(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1652)))->GetTgHitObj() == 0) goto L_15bc; */
        /* if (/ * beq * / 1) goto L_141c; */
        dComIfGp_getReverb((this->field_0x20a & 255));
        /* if (_savegpr_29(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) == 0) goto L_13cc; */
        /* goto L_13d0; */
        /* L_13cc:; */
        /* L_13d0:; */
        /* ((JAIZelBasic*)(this->field_0x0))->monsSeStart(18511, (_savegpr_29(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 608), -1, 0, dComIfGp_getReverb((this->field_0x20a & 255))); */
        /* ((JAIZelBasic*)(this->field_0x0))->seStart(10246, (_savegpr_29(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 608), 32, dComIfGp_getReverb((this->field_0x20a & 255)), 0); */
        /* goto L_15bc; */
        /* L_141c:; */
        /* if (/ * beq * / 1) goto L_14a8; */
        dComIfGp_getReverb((this->field_0x20a & 255));
        /* if (_savegpr_29(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) == 0) goto L_1458; */
        /* goto L_145c; */
        /* L_1458:; */
        /* L_145c:; */
        /* ((JAIZelBasic*)(this->field_0x0))->monsSeStart(18511, (_savegpr_29(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 608), -1, 0, dComIfGp_getReverb((this->field_0x20a & 255))); */
        /* ((JAIZelBasic*)(this->field_0x0))->seStart(10293, (_savegpr_29(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 608), 32, dComIfGp_getReverb((this->field_0x20a & 255)), 0); */
        /* goto L_15bc; */
        /* L_14a8:; */
        /* if (/ * beq * / 1) goto L_1534; */
        dComIfGp_getReverb((this->field_0x20a & 255));
        /* if (_savegpr_29(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) == 0) goto L_14e4; */
        /* goto L_14e8; */
        /* L_14e4:; */
        /* L_14e8:; */
        /* ((JAIZelBasic*)(this->field_0x0))->monsSeStart(18511, (_savegpr_29(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 608), -1, 0, dComIfGp_getReverb((this->field_0x20a & 255))); */
        /* ((JAIZelBasic*)(this->field_0x0))->seStart(10325, (_savegpr_29(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 608), 49, dComIfGp_getReverb((this->field_0x20a & 255)), 0); */
        /* goto L_15bc; */
        /* L_1534:; */
        /* if (/ * bne * / 1) goto L_15bc; */
        dComIfGp_getReverb((this->field_0x20a & 255));
        /* if (_savegpr_29(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) == 0) goto L_1570; */
        /* goto L_1574; */
        /* L_1570:; */
        /* L_1574:; */
        /* ((JAIZelBasic*)(this->field_0x0))->monsSeStart(18511, (_savegpr_29(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 608), -1, 0, dComIfGp_getReverb((this->field_0x20a & 255))); */
        /* ((JAIZelBasic*)(this->field_0x0))->seStart(10294, (_savegpr_29(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 608), 32, dComIfGp_getReverb((this->field_0x20a & 255)), 0); */
        /* L_15bc:; */
        /* field_0x398 = 0; */
        /* field_0x372 = 0; */
        /* field_0x376 = 0; */
        /* field_0x36a = 3; */
        /* if (this->field_0x2d0 != 0) goto L_15f4; */
        /* field_0x2c4 = 0; */
        /* field_0x2c5 = 5; */
        /* goto L_1604; */
        /* L_15f4:; */
        /* field_0x2c4 = 4; */
        /* field_0x2c5 = 50; */
        /* L_1604:; */
        return _restgpr_29(0);
}

/* 0000170C-00001BB8       .text body_atari_check__FP8bo_class */
void body_atari_check(bo_class*) {
        /* _savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* if (this->field_0x36a == 0) goto L_1650; */
        return 0;
        /* L_1650:; */
        /* if (this->field_0x8e8 != 0) goto L_1664; */
        return 0;
        /* L_1664:; */
        /* if (((dCcD_GObjInf*)((_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 2252)))->GetTgHitObj() != 0) goto L_167c; */
        return 0;
        /* L_167c:; */
        /* if (this->field_0x10 == this->field_0x8e8) goto L_1730; */
        /* if (/ * bge * / 1) goto L_16ac; */
        /* if (this->field_0x10 == this->field_0x8e8) goto L_16bc; */
        /* if (/ * bge * / 1) goto L_1924; */
        /* if (this->field_0x10 == 512) goto L_16bc; */
        /* goto L_1924; */
        /* L_16ac:; */
        /* if (this->field_0x10 == this->field_0x8e8) goto L_17d8; */
        /* goto L_1924; */
        /* L_16bc:; */
        /* field_0xdb8 = 80; */
        /* field_0x2d0 = 1; */
        /* nokezori_damage_rtn(_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* field_0x2c8 = 0; */
        /* field_0x372 = 0; */
        /* field_0x374 = 0; */
        /* ((dPa_control_c*)(this->field_0x5ab8))->set(0); */
        return 1;
        /* L_1730:; */
        /* field_0x2d0 = 2; */
        /* field_0xa08 = 1; */
        /* field_0x280 = 0; */
        /* field_0x285 = 30; */
        /* nokezori_damage_rtn(_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* field_0x2c8 = 0; */
        /* field_0x372 = 0; */
        /* field_0x374 = 0; */
        /* ((dPa_control_c*)(this->field_0x5ab8))->set(0); */
        return 1;
        /* L_17d8:; */
        /* field_0xa02 = 1; */
        /* field_0xba8 = 0; */
        /* field_0xa04 = (this->field_0x58 + this->field_0x4c0); */
        /* field_0x280 = 0; */
        /* field_0x2d0 = 3; */
        fopAcM_create(215);
        /* nokezori_damage_rtn(_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* field_0x2c8 = 0; */
        /* field_0x372 = 0; */
        /* field_0x374 = 0; */
        /* ((dPa_control_c*)(this->field_0x5ab8))->set(0); */
        dComIfGp_getReverb((this->field_0x20a & 255));
        /* if (_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) == 0) goto L_18d0; */
        /* goto L_18d4; */
        /* L_18d0:; */
        /* L_18d4:; */
        /* ((JAIZelBasic*)(this->field_0x0))->monsSeStart(18512, (_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 608), -1, 0, dComIfGp_getReverb((this->field_0x20a & 255))); */
        /* ((JAIZelBasic*)(this->field_0x0))->seStart(10280, (_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 608), 32, dComIfGp_getReverb((this->field_0x20a & 255)), 0); */
        return 1;
        /* L_1924:; */
        /* field_0x6e3 = 0; */
        /* field_0x398 = 0; */
        /* ((dPa_control_c*)(this->field_0x5ab8))->set(0, 16); */
        /* ((dPa_control_c*)(this->field_0x5ab8))->set(0, 15); */
        /* field_0x364 = ((this->field_0x50e + 5) & 16777215); */
        /* field_0x2c4 = 2; */
        /* field_0x2c5 = 20; */
        dComIfGp_getReverb((this->field_0x20a & 255));
        /* if (_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) == 0) goto L_1a5c; */
        /* goto L_1a60; */
        /* L_1a5c:; */
        /* L_1a60:; */
        /* ((JAIZelBasic*)(this->field_0x0))->monsSeStart(18512, (_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 608), -1, 0, dComIfGp_getReverb((this->field_0x20a & 255))); */
        /* ((JAIZelBasic*)(this->field_0x0))->seStart(10280, (_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 608), 32, dComIfGp_getReverb((this->field_0x20a & 255)), 0); */
        return _restgpr_28(1);
}

/* 00001BB8-00002048       .text damage_check__FP8bo_class */
void damage_check(bo_class*) {
        /* if (head_atari_check(_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)) == 0) goto L_1f38; */
        /* if (this->field_0x2ca != 2) goto L_1c50; */
        /* ((dPa_control_c*)(this->field_0x5ab8))->set(0, 16); */
        /* ((dPa_control_c*)(this->field_0x5ab8))->set(0, 15); */
        /* field_0x2c4 = 4; */
        /* field_0x2c5 = 40; */
        dComIfGp_getReverb((this->field_0x20a & 255));
        /* if (_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) == 0) goto L_1bfc; */
        /* goto L_1c00; */
        /* L_1bfc:; */
        /* L_1c00:; */
        /* ((JAIZelBasic*)(this->field_0x0))->monsSeStart(18512, (_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 608), -1, 0, dComIfGp_getReverb((this->field_0x20a & 255))); */
        /* ((JAIZelBasic*)(this->field_0x0))->seStart(10280, (_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 608), 32, dComIfGp_getReverb((this->field_0x20a & 255)), 0); */
        return 1;
        /* L_1c50:; */
        /* field_0x6e3 = 0; */
        /* if (this->field_0x2ca != 1) goto L_1c88; */
        /* nokezori_damage_rtn(_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* goto L_1edc; */
        /* L_1c88:; */
        /* if (/ * beq * / 1) goto L_1cb4; */
        /* if (this->field_0x2c5 != 4) goto L_1cb4; */
        return 0;
        /* L_1cb4:; */
        dComIfGp_getReverb((this->field_0x20a & 255));
        /* if (_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) == 0) goto L_1ce8; */
        /* goto L_1cec; */
        /* L_1ce8:; */
        /* L_1cec:; */
        /* ((JAIZelBasic*)(this->field_0x0))->monsSeStart(18511, (_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 608), -1, 0, dComIfGp_getReverb((this->field_0x20a & 255))); */
        mDoMtx_YrotS(this->field_0x0, ((char*)&g_dComIfG_gameInfo + 0));
        MtxPosition();
        /* anm_init(_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), 18, 0, -1, 0); */
        /* field_0x388 = 0; */
        /* field_0x37e = 0; */
        /* field_0x380 = 7250; */
        /* field_0x382 = (this->field_0x348 - this->field_0x370); */
        /* if (this->field_0x290 != 3) goto L_1dc0; */
        /* field_0x382 = (this->field_0x382 + -16384); */
        /* goto L_1dd8; */
        /* L_1dc0:; */
        /* if (((this->field_0x382 + -16384) & 16777215) != 4) goto L_1dd8; */
        /* field_0x382 = (this->field_0x382 + 16384); */
        /* L_1dd8:; */
        /* field_0x37c = 2048; */
        /* if (((dCcD_GObjInf*)((_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1652)))->GetTgHitObj() == 0) goto L_1ecc; */
        /* if (/ * beq * / 1) goto L_1e40; */
        /* ((JAIZelBasic*)(this->field_0x0))->seStart(10243, (_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 608), 49, dComIfGp_getReverb((this->field_0x20a & 255)), 0); */
        /* goto L_1ecc; */
        /* L_1e40:; */
        /* if (/ * beq * / 1) goto L_1e8c; */
        /* ((JAIZelBasic*)(this->field_0x0))->seStart(10291, (_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 608), 49, dComIfGp_getReverb((this->field_0x20a & 255)), 0); */
        /* goto L_1ecc; */
        /* L_1e8c:; */
        /* ((JAIZelBasic*)(this->field_0x0))->seStart(10292, (_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 608), 49, dComIfGp_getReverb((this->field_0x20a & 255)), 0); */
        /* L_1ecc:; */
        /* field_0x2c4 = 0; */
        /* field_0x2c5 = 4; */
        /* L_1edc:; */
        /* field_0x2c8 = 0; */
        /* field_0x372 = 0; */
        /* field_0x374 = 0; */
        /* ((dPa_control_c*)(this->field_0x5ab8))->set(0); */
        return 1;
        /* L_1f38:; */
        return _restgpr_28(0);
}

/* 00002048-00002080       .text angle_initial__FP8bo_class */
void angle_initial(bo_class*) {
    /* field_0x33a = 0; */
    /* field_0x33c = 0; */
    /* field_0x33e = 0; */
    /* field_0x352 = 0; */
    /* field_0x354 = 0; */
    /* field_0x356 = 0; */
    /* field_0x334 = 0; */
    /* field_0x336 = 0; */
    /* field_0x338 = 0; */
    /* field_0x340 = 0; */
    /* field_0x342 = 0; */
    /* field_0x344 = 0; */
    return arg0;
}

/* 00002080-00002170       .text wait_initial__FP8bo_class */
void wait_initial(bo_class*) {
    cM_rnd();
    if (/* bge */ 1) {
    }
    cM_rndF(anm_init(arg0, 22, 2, -1, 0));
    /* field_0x6e3 = 0; */
    angle_initial(arg0);
    /* field_0x2c4 = 0; */
    /* field_0x2c5 = 2; */
    return angle_initial(arg0);
}

/* 00002170-000022F8       .text start_bakutsuki_event_camera__FP10fopAc_ac_c */
void start_bakutsuki_event_camera(fopAc_ac_c*) {
    /* _savegpr_29(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
    if (this->field_0x58 != 0) {
        /* field_0x5c = 0; */
        /* field_0x4 = 0; */
        /* field_0x8 = 0; */
        /* __register_global_object(((C_@3569 + 0) + 92), ((char*)&__dt__4cXyzFv + 0), ((C_@3569 + 0) + 76)); */
        /* field_0x58 = 1; */
    }
    if (this->field_0x74 != 0) {
        /* field_0x78 = 0; */
        /* field_0x4 = 0; */
        /* field_0x8 = 0; */
        /* __register_global_object(((C_@3569 + 0) + 120), ((char*)&__dt__4cXyzFv + 0), ((C_@3569 + 0) + 104)); */
        /* field_0x74 = 1; */
    }
    if (this->field_0x88 != 0) {
        /* field_0x84 = 0; */
        /* field_0x88 = 1; */
    }
    if (this->field_0x90 != 0) {
        /* field_0x8c = 30; */
        /* field_0x90 = 1; */
    }
    }
    return _restgpr_29(((dCamera_c*)((this->field_0x5b04 + 580)))->StartEventCamera(5, -1, ((char*)&@stringBase0 + 3), ((char*)&@stringBase0 + 12), ((char*)&@stringBase0 + 21), ((char*)&@stringBase0 + 32), ((char*)&@stringBase0 + 37)));


/* 000022F8-0000233C       .text end_event_camera__FP10fopAc_ac_c */
void end_event_camera(fopAc_ac_c*) {
    }
    return ((dCamera_c*)((this->field_0x5b04 + 580)))->EndEventCamera(-1);

    return ((dCamera_c*)((this->field_0x5b04 + 580)))->EndEventCamera(-1);

    return ((dCamera_c*)((this->field_0x5b04 + 580)))->EndEventCamera(-1);

    return ((dCamera_c*)((this->field_0x5b04 + 580)))->EndEventCamera(-1);


/* 0000233C-00002FC4       .text bo_move__FP8bo_class */
void bo_move(bo_class*) {
        /* _savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* if (this->field_0x2c5 > 7) goto L_2d38; */
        /* fopAcM_searchActorDistance(_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), this->field_0x5b38); */
        /* if (/ * bge * / 1) goto L_2d38; */
        /* ((JAIZelBasic*)(this->field_0x0))->seStart(22596, (_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 608), 0, dComIfGp_getReverb((this->field_0x20a & 255)), 0); */
        dComIfGp_getReverb((this->field_0x20a & 255));
        /* if (_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) == 0) goto L_234c; */
        /* goto L_2350; */
        /* L_234c:; */
        /* L_2350:; */
        /* ((JAIZelBasic*)(this->field_0x0))->monsSeStart(18509, (_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 608), -1, 0, dComIfGp_getReverb((this->field_0x20a & 255))); */
        /* anm_init(_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), 9, 0, -1, 0); */
        /* anm_init(_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), 8, 0, -1, 1); */
        /* field_0x678 = 1; */
        /* field_0x6e3 = 1; */
        /* field_0x2c5 = 1; */
        /* goto L_2d38; */
        /* if (this->field_0x2dc != 5) goto L_2544; */
        /* if (this->field_0x68 < this->field_0x88) goto L_2400; */
        /* if (this->field_0x68 != this->field_0x8c) goto L_2414; */
        /* L_2400:; */
        /* field_0x34e = fopAcM_searchActorAngleY(_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), this->field_0x5b38); */
        /* goto L_2544; */
        /* L_2414:; */
        /* if (/ * bge * / 1) goto L_2514; */
        /* if (/ * bne * / 1) goto L_2480; */
        /* field_0x678 = 1; */
        /* ((JAIZelBasic*)(this->field_0x0))->seStart(22597, (_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 608), 0, dComIfGp_getReverb((this->field_0x20a & 255)), 0); */
        /* goto L_2544; */
        /* L_2480:; */
        /* if (this->field_0x6c8 == 0) goto L_24a0; */
        /* field_0x2c5 = 6; */
        /* goto L_24c8; */
        /* L_24a0:; */
        /* if (this->field_0x678 == 0) goto L_24c8; */
        /* if (((dCcD_GAtTgCoCommonBase*)((_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1732)))->GetAc() == 0) goto L_24c8; */
        /* if (((dCcD_GAtTgCoCommonBase*)((_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1732)))->GetAc() != this->field_0x5b38) goto L_24c8; */
        /* L_24c8:; */
        /* if (1 == 0) goto L_2544; */
        /* field_0x6e3 = 0; */
        /* anm_init(_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), 12, 0, -1, 0); */
        /* goto L_2544; */
        /* L_2514:; */
        /* if (((J3DFrameCtrl*)((anm_init(_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), 12, 0, -1, 0) + 88)))->checkPass() == 0) goto L_2544; */
        /* field_0x6e3 = 0; */
        /* L_2544:; */
        /* if (this->field_0x5d != 0) goto L_256c; */
        /* if (/ * beq * / 1) goto L_256c; */
        /* L_256c:; */
        /* if (0 == 0) goto L_2d38; */
        /* cM_rndF(this->field_0x2b8); */
        /* wait_initial(_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* goto L_2d38; */
        /* field_0x34e = fopAcM_searchActorAngleY(wait_initial(_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)), this->field_0x5b38); */
        /* if (this->field_0x3d0 != 0) goto L_2608; */
        /* field_0x3d0 = ((dPa_control_c*)(this->field_0x5ab8))->set(0, (this->field_0x3d0 + -32506), (_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 504), 0, 0, 255, 0); */
        /* goto L_2624; */
        /* L_2608:; */
        JPASetRMtxTVecfromMtx((this->field_0x8c + 432));
        /* L_2624:; */
        /* if (this->field_0x68 <= this->field_0x94) goto L_2658; */
        /* field_0x6e3 = 0; */
        /* L_2658:; */
        /* if (this->field_0x5d != 0) goto L_2680; */
        /* if (/ * beq * / 1) goto L_2680; */
        /* L_2680:; */
        /* if (0 == 0) goto L_2d38; */
        /* if (this->field_0x3d0 == 0) goto L_26b0; */
        /* field_0x60 = -1; */
        /* field_0x3d0 = 0; */
        /* L_26b0:; */
        /* wait_initial(_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* goto L_2d38; */
        /* if (this->field_0x36c != 0) goto L_2d38; */
        /* if (this->field_0x3d4 != 0) goto L_2738; */
        /* field_0x3d4 = ((dPa_control_c*)(this->field_0x5ab8))->set(0); */
        /* if (this->field_0x3d4 == 0) goto L_272c; */
        /* field_0x1a0 = (_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 988); */
        /* L_272c:; */
        /* field_0x2c6 = 0; */
        /* goto L_2758; */
        /* L_2738:; */
        JPASetRMtxSTVecfromMtx((this->field_0x8c + 432));
        /* L_2758:; */
        /* if (this->field_0x366 != 0) goto L_2810; */
        /* if (this->field_0x2dc != 22) goto L_279c; */
        /* anm_init(_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), 21, 2, -1, 0); */
        /* goto L_27bc; */
        /* L_279c:; */
        /* anm_init(_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), 22, 2, -1, 0); */
        /* L_27bc:; */
        /* field_0x68 = 0; */
        /* cM_rndF(this->field_0x2b8); */
        /* L_2810:; */
        /* if (this->field_0x368 != 0) goto L_28ec; */
        /* fopAcM_searchActorDistance(_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), this->field_0x5b38); */
        /* if (/ * bge * / 1) goto L_28ec; */
        /* anm_init(_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), 5, 0, -1, 0); */
        cM_rnd();
        /* if (/ * bge * / 1) goto L_2880; */
        /* field_0x688 = 0; */
        /* field_0x2c4 = 1; */
        /* field_0x2c5 = 10; */
        /* goto L_29ec; */
        /* L_2880:; */
        /* field_0x688 = 1; */
        dComIfGp_getReverb((this->field_0x20a & 255));
        /* if (_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) == 0) goto L_28d4; */
        /* goto L_28d8; */
        /* L_28d4:; */
        /* L_28d8:; */
        /* ((JAIZelBasic*)(this->field_0x0))->monsSeStart(18510, (_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 608), -1, 0, dComIfGp_getReverb((this->field_0x20a & 255))); */
        /* field_0x2c5 = 3; */
        /* goto L_29ec; */
        /* L_28ec:; */
        /* fopAcM_searchActorDistance(_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), this->field_0x5b38); */
        /* if (/ * ble * / 1) goto L_29ec; */
        /* anm_init(_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), 17, 0, -1, 0); */
        /* anm_init(_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), 16, 0, -1, 1); */
        /* ((JAIZelBasic*)(this->field_0x0))->seStart(22600, (_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 608), 0, dComIfGp_getReverb((this->field_0x20a & 255)), 0); */
        /* angle_initial(_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* field_0x2c5 = 0; */
        /* L_29ec:; */
        /* field_0x34e = fopAcM_searchActorAngleY(_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), this->field_0x5b38); */
        /* goto L_2d38; */
        /* if (this->field_0x290 != 3) goto L_2a24; */
        /* mDoMtx_YrotS(this->field_0x0, this->field_0x37e); */
        /* goto L_2a40; */
        /* L_2a24:; */
        /* mDoMtx_YrotS(this->field_0x0, ((-this->field_0x37e) & 65535)); */
        /* L_2a40:; */
        MtxPosition();
        /* field_0x37e = (this->field_0x37e + this->field_0x380); */
        /* cLib_addCalc0((_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 904)); */
        /* cLib_addCalcAngleS2((_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 852), 0, 1, 135); */
        /* cLib_addCalcAngleS2((_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 854), 0, 1, 135); */
        /* if (/ * bge * / 1) goto L_2d38; */
        /* field_0x352 = 0; */
        /* field_0x354 = 0; */
        /* field_0x356 = 0; */
        /* field_0x334 = 0; */
        /* field_0x336 = 0; */
        /* field_0x338 = 0; */
        /* field_0x366 = 0; */
        /* field_0x2c5 = 2; */
        /* if (this->field_0x364 == 0) goto L_2d38; */
        /* field_0x36c = 45; */
        /* goto L_2d38; */
        /* if (this->field_0x364 == 0) goto L_2b38; */
        /* field_0x364 = (this->field_0x364 + -1); */
        /* L_2b38:; */
        /* if (this->field_0x364 != 1) goto L_2b58; */
        /* field_0x2c4 = 2; */
        /* field_0x2c5 = 20; */
        /* goto L_2eac; */
        /* L_2b58:; */
        /* if (this->field_0x372 >= 16) goto L_2bfc; */
        /* if (this->field_0x2c8 != 0) goto L_2bfc; */
        /* if ((cLib_distanceAngleS(this->field_0x33c, this->field_0x342) & 65535) >= 256) goto L_2bfc; */
        /* field_0x372 = (this->field_0x372 + 1); */
        /* if (this->field_0x372 < 16) goto L_2bfc; */
        /* field_0x342 = 0; */
        /* field_0x33c = 0; */
        /* L_2bfc:; */
        /* if (this->field_0x374 >= 16) goto L_2ca0; */
        /* if (/ * bne * / 1) goto L_2ca0; */
        /* if ((cLib_distanceAngleS(this->field_0x33e, this->field_0x344) & 65535) >= 256) goto L_2ca0; */
        /* field_0x374 = (this->field_0x374 + 1); */
        /* if (this->field_0x374 < 16) goto L_2ca0; */
        /* field_0x344 = 0; */
        /* field_0x33e = 0; */
        /* L_2ca0:; */
        /* if (this->field_0x342 != 0) goto L_2cc4; */
        /* if (this->field_0x344 != 0) goto L_2cc4; */
        /* field_0x376 = (this->field_0x376 + 1); */
        /* L_2cc4:; */
        /* if (this->field_0x376 <= 30) goto L_2ce8; */
        /* wait_initial(_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* field_0x376 = 0; */
        /* field_0x398 = 0; */
        /* L_2ce8:; */
        /* if (this->field_0x2d0 != 0) goto L_2d38; */
        /* body_atari_check(_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* goto L_2d38; */
        /* if (this->field_0x5d != 0) goto L_2d28; */
        /* if (/ * beq * / 1) goto L_2d28; */
        /* L_2d28:; */
        /* if (0 == 0) goto L_2d38; */
        /* field_0x2c5 = 0; */
        /* L_2d38:; */
        /* cLib_addCalcAngleS2((_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 840), this->field_0x34e, 1, 2048); */
        /* cLib_addCalcAngleS2((_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 828), this->field_0x342, 1, this->field_0x37c); */
        /* cLib_addCalcAngleS2((_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 830), this->field_0x344, 1, this->field_0x37c); */
        /* if (this->field_0x2c5 != 4) goto L_2e8c; */
        /* if ((cLib_distanceAngleS(fopAcM_searchActorAngleY(_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), this->field_0x5b38), this->field_0x348) & 65535) <= 13183) goto L_2e8c; */
        /* wait_initial(_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* anm_init(_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), 17, 0, -1, 0); */
        /* anm_init(_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), 16, 0, -1, 1); */
        /* ((JAIZelBasic*)(this->field_0x0))->seStart(22600, (_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 608), 0, dComIfGp_getReverb((this->field_0x20a & 255)), 0); */
        /* field_0x2c5 = 7; */
        /* goto L_2eac; */
        /* L_2e8c:; */
        /* if (this->field_0x2c5 == 0) goto L_2eac; */
        /* if (this->field_0x2c5 == 5) goto L_2eac; */
        /* L_2eac:; */
        /* return _restgpr_27(damage_check(_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7))); */
}

/* 00002FC4-0000380C       .text bo2_move__FP8bo_class */
void bo2_move(bo_class*) {
        /* _savegpr_29(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* if (this->field_0x2c5 == 12) goto L_3128; */
        /* if (/ * bge * / 1) goto L_2f34; */
        /* if (this->field_0x2c5 == 10) goto L_2f44; */
        /* if (/ * bge * / 1) goto L_2fd4; */
        /* goto L_36c4; */
        /* L_2f34:; */
        /* if (this->field_0x2c5 == 14) goto L_3600; */
        /* if (/ * bge * / 1) goto L_36c4; */
        /* goto L_32e0; */
        /* L_2f44:; */
        /* anm_init(_savegpr_29(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), 20, 0, -1, 0); */
        /* ((JAIZelBasic*)(this->field_0x0))->seStart(22601, (_savegpr_29(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 608), 0, dComIfGp_getReverb((this->field_0x20a & 255)), 0); */
        /* field_0x2cb = 0; */
        /* field_0x2cc = 0; */
        /* field_0x2c5 = (this->field_0x2c5 + 1); */
        /* goto L_36c4; */
        /* L_2fd4:; */
        /* if (this->field_0x68 != this->field_0xb4) goto L_3028; */
        /* if (this->field_0x68 != this->field_0xb8) goto L_3028; */
        /* if (this->field_0x678 == 0) goto L_3028; */
        /* if (((dCcD_GAtTgCoCommonBase*)((_savegpr_29(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1732)))->GetAc() == 0) goto L_3028; */
        /* if (((dCcD_GAtTgCoCommonBase*)((_savegpr_29(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1732)))->GetAc() != this->field_0x5b38) goto L_3028; */
        /* field_0x2cb = 1; */
        /* L_3028:; */
        /* if (((J3DFrameCtrl*)((this->field_0x2b8 + 88)))->checkPass() == 0) goto L_3094; */
        /* field_0x678 = 1; */
        dComIfGp_getReverb((this->field_0x20a & 255));
        /* if (_savegpr_29(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) == 0) goto L_3088; */
        /* goto L_308c; */
        /* L_3088:; */
        /* L_308c:; */
        /* ((JAIZelBasic*)(this->field_0x0))->monsSeStart(18513, (_savegpr_29(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 608), -1, 0, dComIfGp_getReverb((this->field_0x20a & 255))); */
        /* L_3094:; */
        /* if (((J3DFrameCtrl*)((this->field_0x2b8 + 88)))->checkPass() == 0) goto L_30cc; */
        /* field_0x6e3 = 0; */
        /* L_30cc:; */
        /* if (this->field_0x5d != 0) goto L_30f4; */
        /* if (/ * beq * / 1) goto L_30f4; */
        /* L_30f4:; */
        /* if (0 == 0) goto L_36c4; */
        /* cM_rndF(wait_initial(_savegpr_29(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7))); */
        /* goto L_36c4; */
        /* L_3128:; */
        /* if (this->field_0x2cc != 0) goto L_31b8; */
        /* if (((J3DFrameCtrl*)((this->field_0x2b8 + 88)))->checkPass() != 0) goto L_3164; */
        /* if (this->field_0x68 != this->field_0xb8) goto L_31b8; */
        /* L_3164:; */
        /* field_0x304 = 3; */
        /* field_0x30c = 0; */
        /* field_0x314 = 30; */
        /* cLib_distanceAngleS(this->field_0x20e, fopAcM_searchActorAngleY(this->field_0x5b38, _savegpr_29(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7))); */
        /* field_0x2cd = 0; */
        /* if ((cLib_distanceAngleS(this->field_0x20e, fopAcM_searchActorAngleY(this->field_0x5b38, _savegpr_29(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7))) & 65535) <= 16384) goto L_31b0; */
        /* field_0x2cd = 1; */
        /* L_31b0:; */
        /* field_0x2cc = 1; */
        /* L_31b8:; */
        /* if (this->field_0x5d != 0) goto L_31e0; */
        /* if (/ * beq * / 1) goto L_31e0; */
        /* L_31e0:; */
        /* if (0 == 0) goto L_36c4; */
        /* anm_init(_savegpr_29(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), 13, 2, -1, 0); */
        /* ((dPa_control_c*)(this->field_0x5ab8))->set(0); */
        /* if (/ * beq * / 1) goto L_3278; */
        JPASetRMtxSTVecfromMtx((this->field_0x8c + 432));
        /* L_3278:; */
        /* field_0x376 = 0; */
        /* field_0x368 = 0; */
        /* field_0x2d4 = 1; */
        /* field_0x2d8 = 1; */
        dComIfGp_getReverb((this->field_0x20a & 255));
        /* if (_savegpr_29(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) == 0) goto L_32c4; */
        /* goto L_32c8; */
        /* L_32c4:; */
        /* L_32c8:; */
        /* ((JAIZelBasic*)(this->field_0x0))->monsSeStart(18514, (_savegpr_29(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 608), -1, 0, dComIfGp_getReverb((this->field_0x20a & 255))); */
        /* field_0x2c5 = (this->field_0x2c5 + 1); */
        /* goto L_36c4; */
        /* L_32e0:; */
        /* if (this->field_0x3d8 != 0) goto L_335c; */
        /* field_0x3d8 = set(0); */
        /* if (this->field_0x3d8 == 0) goto L_3350; */
        /* field_0x1a0 = (_savegpr_29(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 988); */
        /* field_0x38 = 0; */
        /* L_3350:; */
        /* field_0x2c7 = 0; */
        /* goto L_337c; */
        /* L_335c:; */
        JPASetRMtxSTVecfromMtx((this->field_0x8c + 432));
        /* L_337c:; */
        /* if (this->field_0x368 != 0) goto L_33cc; */
        /* if (this->field_0x2a0 != 0) goto L_33b0; */
        /* if (this->field_0x354e == 0) goto L_33b4; */
        /* L_33b0:; */
        /* L_33b4:; */
        /* if (1 != 0) goto L_33c4; */
        /* ((daPy_lk_c*)(this->field_0x5b40))->setDamagePoint(1); */
        /* L_33c4:; */
        /* field_0x368 = 30; */
        /* L_33cc:; */
        /* field_0x376 = (this->field_0x376 + 1); */
        /* if (this->field_0x376 <= 120) goto L_3464; */
        /* field_0x376 = 0; */
        /* anm_init(_savegpr_29(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), 11, 0, -1, 0); */
        dComIfGp_getReverb((this->field_0x20a & 255));
        /* if (_savegpr_29(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) == 0) goto L_3440; */
        /* goto L_3444; */
        /* L_3440:; */
        /* L_3444:; */
        /* ((JAIZelBasic*)(this->field_0x0))->monsSeStart(22598, (_savegpr_29(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 608), -1, 0, dComIfGp_getReverb((this->field_0x20a & 255))); */
        /* end_event_camera(_savegpr_29(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* field_0x2c5 = (this->field_0x2c5 + 1); */
        /* goto L_36c4; */
        /* L_3464:; */
        /* if (((J3DFrameCtrl*)((this->field_0x2b8 + 88)))->checkPass() == 0) goto L_352c; */
        dComIfGp_getReverb((this->field_0x20a & 255));
        /* if (_savegpr_29(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) == 0) goto L_34b0; */
        /* goto L_34b4; */
        /* L_34b0:; */
        /* L_34b4:; */
        /* ((JAIZelBasic*)(this->field_0x0))->monsSeStart(18514, (_savegpr_29(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 608), -1, 0, dComIfGp_getReverb((this->field_0x20a & 255))); */
        /* ((dPa_control_c*)(this->field_0x5ab8))->set(0); */
        /* if (/ * beq * / 1) goto L_352c; */
        JPASetRMtxSTVecfromMtx((this->field_0x8c + 432));
        /* L_352c:; */
        /* if (this->field_0x2d4 <= 0) goto L_355c; */
        /* if (/ * bge * / 1) goto L_355c; */
        /* field_0x2d4 = -1; */
        /* field_0x376 = (this->field_0x376 + 2); */
        /* goto L_3584; */
        /* L_355c:; */
        /* if ((this->field_0x376 + 2) >= 0) goto L_3584; */
        /* if (/ * ble * / 1) goto L_3584; */
        /* field_0x2d4 = 1; */
        /* field_0x376 = (this->field_0x376 + 2); */
        /* L_3584:; */
        /* if (this->field_0x2d8 <= 0) goto L_35b4; */
        /* if (this->field_0x4 >= this->field_0x14) goto L_35b4; */
        /* field_0x2d8 = -1; */
        /* field_0x376 = (this->field_0x376 + 2); */
        /* goto L_35dc; */
        /* L_35b4:; */
        /* if ((this->field_0x376 + 2) >= 0) goto L_35dc; */
        /* if (this->field_0x4 <= this->field_0x14) goto L_35dc; */
        /* field_0x2d8 = 1; */
        /* field_0x376 = (this->field_0x376 + 2); */
        /* L_35dc:; */
        /* if (this->field_0x32 == 0) goto L_36c4; */
        /* field_0x376 = (this->field_0x376 + 2); */
        /* goto L_36c4; */
        /* L_3600:; */
        /* if (((J3DFrameCtrl*)((this->field_0x2b8 + 88)))->checkPass() == 0) goto L_364c; */
        /* field_0x314 = 9; */
        /* field_0x2cc = 0; */
        /* if (this->field_0x2cd == 0) goto L_3644; */
        /* field_0x30c = 0; */
        /* goto L_364c; */
        /* L_3644:; */
        /* field_0x30c = 1; */
        /* L_364c:; */
        /* if (this->field_0x5d != 0) goto L_3674; */
        /* if (/ * beq * / 1) goto L_3674; */
        /* L_3674:; */
        /* if (0 == 0) goto L_36c4; */
        /* cM_rndF(wait_initial(_savegpr_29(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7))); */
        /* field_0x368 = (this->field_0x368 << 1); */
        /* L_36c4:; */
        /* if (this->field_0x2c5 >= 12) goto L_36e8; */
        /* if (this->field_0x2cb != 0) goto L_36e8; */
        /* L_36e8:; */
        /* return _restgpr_29(damage_check(_savegpr_29(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7))); */
}

/* 0000380C-00003AD4       .text bo3_move__FP8bo_class */
void bo3_move(bo_class*) {
        /* if (this->field_0x2c5 == 21) goto L_385c; */
        /* if (/ * bge * / 1) goto L_374c; */
        /* if (this->field_0x2c5 >= 20) goto L_3758; */
        /* goto L_3974; */
        /* L_374c:; */
        /* if (this->field_0x2c5 >= 23) goto L_3974; */
        /* goto L_3920; */
        /* L_3758:; */
        /* if (this->field_0x364 == 0) goto L_376c; */
        /* field_0x364 = (this->field_0x364 + -1); */
        /* L_376c:; */
        /* if (this->field_0x364 != 0) goto L_3974; */
        /* if (this->field_0x2ce != 0) goto L_3810; */
        fopAcM_create(215, 2, (arg0 + 772), (this->field_0x20a & 255));
        /* L_3810:; */
        /* field_0x2ce = 0; */
        /* field_0x2c0 = 1; */
        anm_init(arg0, 19, 0, -1, 1);
        /* field_0x0 = 4; */
        /* field_0x2c5 = (this->field_0x2c5 + 1); */
        /* goto L_3974; */
        /* L_385c:; */
        /* if (((J3DFrameCtrl*)((this->field_0x2bc + 88)))->checkPass() == 0) goto L_38b0; */
        /* if (this->field_0x2c1 == 0) goto L_3890; */
        /* field_0x368 = 50; */
        /* L_3890:; */
        /* if (this->field_0x2d0 == 3) goto L_38b0; */
        /* fopAcM_createDisappear(arg0, (arg0 + 504), 5, 3, this->field_0x28c); */
        /* L_38b0:; */
        /* if (this->field_0x5d != 0) goto L_38d8; */
        /* if (/ * beq * / 1) goto L_38d8; */
        /* L_38d8:; */
        /* if (0 == 0) goto L_3974; */
        /* if (this->field_0x2c1 == 0) goto L_38fc; */
        /* field_0x2c5 = (this->field_0x2c5 + 1); */
        /* goto L_3974; */
        /* L_38fc:; */
        ((dSv_info_c*)(((char*)&g_dComIfG_gameInfo + 0)))->onActor(this->field_0x1bc, (this->field_0x1e2 & 255));
        fopAcM_delete(arg0);
        /* goto L_3974; */
        /* L_3920:; */
        /* if (this->field_0x368 != 0) goto L_3974; */
        fopAcM_create(214, 1, (arg0 + 504), (this->field_0x20a & 255), (arg0 + 516), (arg0 + 532), 0, 0);
        ((dSv_info_c*)(((char*)&g_dComIfG_gameInfo + 0)))->onActor(this->field_0x1bc, (this->field_0x1e2 & 255));
        fopAcM_delete(arg0);
        /* L_3974:; */
        /* if (this->field_0x3b4 == 0) goto L_39c0; */
        /* if (this->field_0x36a != 0) goto L_39c0; */
        /* field_0x376 = (this->field_0x376 + -4); */
        /* if (this->field_0x376 >= 0) goto L_39c0; */
        /* L_39c0:; */
        return (arg0 + 944);
}

/* 00003AD4-00003E8C       .text bo4_move__FP8bo_class */
void bo4_move(bo_class*) {
        /* if (this->field_0x2c5 == 32) goto L_3c20; */
        /* if (/ * bge * / 1) goto L_3a18; */
        /* if (this->field_0x2c5 == 30) goto L_3a28; */
        /* if (/ * bge * / 1) goto L_3aec; */
        /* goto L_3d2c; */
        /* L_3a18:; */
        /* if (this->field_0x2c5 == 34) goto L_3d10; */
        /* if (/ * bge * / 1) goto L_3d2c; */
        /* goto L_3c60; */
        /* L_3a28:; */
        /* anm_init(arg0, 7, 0, -1, 0, arg5, arg6); */
        /* field_0x224 = 0; */
        /* field_0x258 = 0; */
        /* field_0x254 = 0; */
        /* field_0x206 = (fopAcM_searchActorAngleY(arg0, this->field_0x5b38) + -32768); */
        /* field_0x390 = (this->field_0x1fc - this->field_0x58); */
        /* field_0x2c5 = (this->field_0x2c5 + 1); */
        /* goto L_3d2c; */
        /* L_3aec:; */
        /* field_0x20c = (this->field_0x20c + -4608); */
        /* if (this->field_0x224 >= this->field_0x14) goto L_3d2c; */
        /* if (this->field_0x1fc >= this->field_0x390) goto L_3d2c; */
        /* field_0x1fc = 0; */
        /* field_0x20c = -32768; */
        /* field_0x224 = 0; */
        /* field_0x258 = 0; */
        /* field_0x254 = 0; */
        /* field_0x368 = 10; */
        /* ((JAIZelBasic*)(this->field_0x0))->seStart(22599, (arg0 + 608), 0, dComIfGp_getReverb((this->field_0x20a & 255)), 0); */
        /* ((dPa_control_c*)(this->field_0x5ab8))->set(0); */
        /* field_0x36a = 10; */
        /* field_0x376 = 180; */
        /* field_0x39c = 0; */
        /* field_0x3a0 = 0; */
        /* field_0x3a4 = 0; */
        smoke_set(arg0);
        anm_init(arg0, 6, 0, -1, 0);
        /* field_0x2c5 = (this->field_0x2c5 + 1); */
        /* goto L_3d2c; */
        /* L_3c20:; */
        /* if (this->field_0x368 != 0) goto L_3d2c; */
        /* field_0x394 = 0; */
        /* field_0x1fc = (this->field_0x390 - this->field_0xcc); */
        /* field_0x224 = 0; */
        /* field_0x258 = 0; */
        /* field_0x2c5 = (this->field_0x2c5 + 1); */
        /* goto L_3d2c; */
        /* L_3c60:; */
        /* field_0x210 = (this->field_0x210 + 4096); */
        /* if (this->field_0x210 <= 16384) goto L_3d2c; */
        fopAcM_create(469, 0);
        /* field_0x214 = 0; */
        /* field_0x218 = 0; */
        /* field_0x21c = 0; */
        /* field_0x398 = 0; */
        /* field_0x368 = 10; */
        /* field_0x2c5 = (this->field_0x2c5 + 1); */
        /* goto L_3d2c; */
        /* L_3d10:; */
        /* if (this->field_0x368 != 0) goto L_3d2c; */
        /* if (this->field_0x3b4 != 0) goto L_3d2c; */
        /* fopAcM_delete(this->field_0x2c5); */
        /* L_3d2c:; */
        /* if (this->field_0x3b4 == 0) goto L_3d78; */
        /* if (this->field_0x36a != 0) goto L_3d78; */
        /* field_0x376 = (this->field_0x376 + -4); */
        /* if (this->field_0x376 >= 0) goto L_3d78; */
        /* L_3d78:; */
        return (arg0 + 944);
}

/* 00003E8C-000042B8       .text bo5_move__FP8bo_class */
void bo5_move(bo_class*) {
        /* if (this->field_0x2c5 == 50) goto L_4034; */
        /* if (/ * bge * / 1) goto L_3dd8; */
        /* if (this->field_0x2c5 == 41) goto L_3f00; */
        /* if (/ * bge * / 1) goto L_41a4; */
        /* if (this->field_0x2c5 >= 40) goto L_3de4; */
        /* goto L_41a4; */
        /* L_3dd8:; */
        /* if (this->field_0x2c5 >= 52) goto L_41a4; */
        /* goto L_4140; */
        /* L_3de4:; */
        /* field_0x376 = 3; */
        /* field_0x0 = 2; */
        /* anm_init(arg0, 15, 2, -1, 0, arg5, arg6); */
        dComIfGp_getReverb((this->field_0x20a & 255));
        /* if (arg0 == 0) goto L_3ea4; */
        /* goto L_3ea8; */
        /* L_3ea4:; */
        /* L_3ea8:; */
        /* ((JAIZelBasic*)(this->field_0x0))->monsSeStart(18512, (arg0 + 608), -1, 0, dComIfGp_getReverb((this->field_0x20a & 255))); */
        /* ((JAIZelBasic*)(this->field_0x0))->seStart(10280, (arg0 + 608), 32, dComIfGp_getReverb((this->field_0x20a & 255)), 0); */
        /* field_0x2c5 = (this->field_0x2c5 + 1); */
        /* goto L_41a4; */
        /* L_3f00:; */
        /* if (((J3DFrameCtrl*)((this->field_0x2b8 + 88)))->checkPass() == 0) goto L_41a4; */
        /* field_0x376 = (this->field_0x376 + -1); */
        /* if (this->field_0x376 > 0) goto L_41a4; */
        anm_init(arg0, 9, 0, -1, 0);
        /* ((dPa_control_c*)(this->field_0x5ab8))->set(0); */
        /* field_0x39c = 0; */
        /* field_0x3a0 = 0; */
        /* field_0x3a4 = 0; */
        /* field_0x36a = 10; */
        /* field_0x376 = 180; */
        smoke_set(arg0);
        /* ((JAIZelBasic*)(this->field_0x0))->seStart(22529, (arg0 + 608), 0, dComIfGp_getReverb((this->field_0x20a & 255)), 0); */
        /* field_0x2ce = 1; */
        /* field_0x2c4 = 2; */
        /* field_0x2c5 = 20; */
        /* goto L_41a4; */
        /* L_4034:; */
        /* field_0x0 = 2; */
        anm_init(arg0, 14, 0, -1, 0);
        /* field_0x280 = 0; */
        dComIfGp_getReverb((this->field_0x20a & 255));
        /* if (arg0 == 0) goto L_40e8; */
        /* goto L_40ec; */
        /* L_40e8:; */
        /* L_40ec:; */
        /* ((JAIZelBasic*)(this->field_0x0))->monsSeStart(18512, (arg0 + 608), -1, 0, dComIfGp_getReverb((this->field_0x20a & 255))); */
        /* ((JAIZelBasic*)(this->field_0x0))->seStart(10280, (arg0 + 608), 32, dComIfGp_getReverb((this->field_0x20a & 255)), 0); */
        /* field_0x2c5 = (this->field_0x2c5 + 1); */
        /* L_4140:; */
        /* if (this->field_0x366 != 0) goto L_41a4; */
        /* if (this->field_0x5d != 0) goto L_4174; */
        /* if (/ * beq * / 1) goto L_4174; */
        /* L_4174:; */
        /* if (0 == 0) goto L_41a4; */
        /* field_0x36a = 10; */
        /* field_0x376 = 180; */
        /* field_0x2ce = 1; */
        /* field_0x2c4 = 2; */
        /* field_0x2c5 = 20; */
        /* L_41a4:; */
        /* return this->field_0x2b8; */
}

/* 000042B8-000048B0       .text daBO_Execute__FP8bo_class */
static BOOL daBO_Execute(bo_class*) {
        /* _savegpr_29(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* if (this->field_0x2c0 != 0) goto L_425c; */
        /* if (enemy_ice((_savegpr_29(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 2556)) == 0) goto L_425c; */
        /* if (this->field_0xa02 == 0) goto L_4228; */
        PSMTXCopy(((char*)&now__14mDoMtx_stack_c + 0), (this->field_0x50 + 36));
        /* ((mDoExt_McaMorf*)(this->field_0x2b8))->calc(); */
        /* goto L_4254; */
        /* L_4228:; */
        /* ((cM3dGSph*)((_savegpr_29(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1932)))->SetC((_savegpr_29(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 736)); */
        /* ((cM3dGSph*)((_savegpr_29(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1932)))->SetR(); */
        /* ((cCcS*)(((char*)&g_dComIfG_gameInfo + 9892)))->Set((_savegpr_29(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1652)); */
        /* L_4254:; */
        return 1;
        /* L_425c:; */
        /* if (/ * beq * / 1) goto L_4280; */
        /* L_4280:; */
        /* if (this->field_0x2c4 == 2) goto L_4364; */
        /* if (/ * bge * / 1) goto L_42a8; */
        /* if (this->field_0x2c4 == 0) goto L_42b8; */
        /* if (/ * bge * / 1) goto L_42dc; */
        /* goto L_4384; */
        /* L_42a8:; */
        /* if (this->field_0x2c4 == 4) goto L_437c; */
        /* if (/ * bge * / 1) goto L_4384; */
        /* goto L_4370; */
        /* L_42b8:; */
        /* bo_move(_savegpr_29(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* goto L_4384; */
        /* L_42dc:; */
        /* bo2_move(_savegpr_29(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* if (this->field_0x2cb == 0) goto L_4384; */
        /* if (this->field_0xf8 != 2) goto L_433c; */
        /* if (this->field_0x2c4 == 1) goto L_4320; */
        /* goto L_4330; */
        /* L_4320:; */
        /* field_0x2c5 = 12; */
        /* start_bakutsuki_event_camera(_savegpr_29(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* L_4330:; */
        /* field_0x2cb = 0; */
        /* goto L_4384; */
        /* L_433c:; */
        /* fopAcM_orderPotentialEvent(_savegpr_29(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), 2); */
        /* goto L_4384; */
        /* L_4364:; */
        /* bo3_move(_savegpr_29(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* goto L_4384; */
        /* L_4370:; */
        /* bo4_move(_savegpr_29(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* goto L_4384; */
        /* L_437c:; */
        /* bo5_move(_savegpr_29(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* L_4384:; */
        /* if (this->field_0x2c6 != 0) goto L_43a4; */
        /* if (this->field_0x2dc == 22) goto L_4448; */
        /* if (this->field_0x2dc == 21) goto L_4448; */
        /* L_43a4:; */
        /* if (this->field_0x3d4 == 0) goto L_4448; */
        JPASetRMtxSTVecfromMtx((this->field_0x8c + 432), (this->field_0x3d4 + 424), (this->field_0x3d4 + 472), (this->field_0x3d4 + 484));
        /* if (this->field_0x2c6 == 1) goto L_440c; */
        /* if (/ * bge * / 1) goto L_4448; */
        /* if (this->field_0x2c6 >= 0) goto L_43ec; */
        /* goto L_4448; */
        /* L_43ec:; */
        /* field_0x2c6 = (this->field_0x2c6 + 1); */
        /* goto L_4448; */
        /* L_440c:; */
        /* if (/ * bne * / 1) goto L_4448; */
        /* field_0x1a0 = 0; */
        /* field_0x60 = -1; */
        /* field_0x3d4 = 0; */
        /* field_0x2c6 = 0; */
        /* L_4448:; */
        /* if (this->field_0x2c7 != 0) goto L_4460; */
        /* if (this->field_0x2dc == 13) goto L_4504; */
        /* L_4460:; */
        /* if (this->field_0x3d8 == 0) goto L_4504; */
        JPASetRMtxSTVecfromMtx((this->field_0x8c + 432), (this->field_0x3d8 + 424), (this->field_0x3d8 + 472), (this->field_0x3d8 + 484));
        /* if (this->field_0x2c7 == 1) goto L_44c8; */
        /* if (/ * bge * / 1) goto L_4504; */
        /* if (this->field_0x2c7 >= 0) goto L_44a8; */
        /* goto L_4504; */
        /* L_44a8:; */
        /* field_0x2c7 = (this->field_0x2c7 + 1); */
        /* goto L_4504; */
        /* L_44c8:; */
        /* if (/ * bne * / 1) goto L_4504; */
        /* field_0x1a0 = 0; */
        /* field_0x60 = -1; */
        /* field_0x3d8 = 0; */
        /* field_0x2c7 = 0; */
        /* L_4504:; */
        /* cLib_addCalc2((_savegpr_29(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 536), this->field_0x3d8); */
        /* field_0x64c = 255; */
        /* mDoMtx_YrotS(this->field_0x0, this->field_0x206); */
        /* mDoMtx_XrotM(this->field_0x0, this->field_0x204); */
        MtxPosition();
        /* field_0x220 = 0; */
        /* field_0x224 = (this->field_0x224 + this->field_0x258); */
        /* field_0x228 = 0; */
        /* fopAcM_posMove(_savegpr_29(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), (_savegpr_29(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1592)); */
        /* if (this->field_0x2c0 == 0) goto L_45a8; */
        /* if (this->field_0x2c0 != 2) goto L_45bc; */
        /* L_45a8:; */
        /* ((mDoExt_McaMorf*)(this->field_0x2b8))->play(0, 0, 0); */
        /* L_45bc:; */
        /* if (this->field_0x2c0 == 0) goto L_45d0; */
        /* if (this->field_0x2c0 != 1) goto L_45e4; */
        /* L_45d0:; */
        /* ((mDoExt_McaMorf*)(this->field_0x2bc))->play(0, 0, 0); */
        /* L_45e4:; */
        /* if (this->field_0x2c0 != 0) goto L_4680; */
        /* if (this->field_0x2c5 == 5) goto L_4640; */
        /* field_0x274 = 0; */
        /* field_0x278 = 0; */
        /* field_0x27c = 0; */
        /* field_0x278 = (this->field_0x278 + this->field_0x70); */
        /* field_0x260 = 0; */
        /* field_0x264 = 0; */
        /* field_0x268 = 0; */
        /* goto L_4680; */
        /* L_4640:; */
        /* field_0x260 = 0; */
        /* field_0x264 = 0; */
        /* field_0x268 = 0; */
        /* field_0x264 = (this->field_0x264 + this->field_0x70); */
        /* field_0x274 = 0; */
        /* field_0x278 = 0; */
        /* field_0x27c = 0; */
        /* L_4680:; */
        /* if (this->field_0x2cc != 0) goto L_4698; */
        /* if (this->field_0x2c5 != 12) goto L_46c8; */
        /* L_4698:; */
        /* field_0x274 = 0; */
        /* field_0x278 = 0; */
        /* field_0x27c = 0; */
        /* field_0x278 = (this->field_0x278 + this->field_0x70); */
        /* L_46c8:; */
        /* ((cM3dGSph*)((_savegpr_29(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1932)))->SetC((_savegpr_29(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 736)); */
        /* ((cM3dGSph*)((_savegpr_29(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1932)))->SetR(); */
        /* ((cCcS*)(((char*)&g_dComIfG_gameInfo + 9892)))->Set((_savegpr_29(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1652)); */
        /* if (this->field_0x2c4 != 0) goto L_4734; */
        /* ((cM3dGCyl*)((_savegpr_29(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 2532)))->SetC((_savegpr_29(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 760)); */
        /* ((cM3dGCyl*)((_savegpr_29(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 2532)))->SetH(); */
        /* ((cM3dGCyl*)((_savegpr_29(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 2532)))->SetR(); */
        /* ((cCcS*)(((char*)&g_dComIfG_gameInfo + 9892)))->Set((_savegpr_29(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 2252)); */
        /* L_4734:; */
        /* if (this->field_0x2c0 == 0) goto L_4748; */
        /* if (this->field_0x2c0 != 1) goto L_4790; */
        /* L_4748:; */
        /* ((cM3dGSph*)((_savegpr_29(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 2232)))->SetC(); */
        /* ((cM3dGSph*)((_savegpr_29(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 2232)))->SetR(); */
        /* ((cCcS*)(((char*)&g_dComIfG_gameInfo + 9892)))->Set((_savegpr_29(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1952)); */
        /* L_4790:; */
        /* draw_SUB(_savegpr_29(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        return _restgpr_29(1);
}

/* 000048B0-000048B8       .text daBO_IsDelete__FP8bo_class */
static BOOL daBO_IsDelete(bo_class*) {
    return 1;
}

/* 000048B8-00004998       .text daBO_Delete__FP8bo_class */
static BOOL daBO_Delete(bo_class*) {
    if (this->field_0x3d0 != 0) {
        /* field_0x60 = -1; */
        /* field_0x3d0 = 0; */
    }
    if (this->field_0x3d4 != 0) {
        /* ((JPABaseEmitter*)(this->field_0x3d4))->deleteAllParticle(); */
        /* field_0x60 = -1; */
        /* field_0x3d4 = 0; */
    }
    if (this->field_0x3d8 != 0) {
        /* ((JPABaseEmitter*)(this->field_0x3d8))->deleteAllParticle(); */
        /* field_0x60 = -1; */
        /* field_0x3d8 = 0; */
    }
    enemy_fire_remove((arg0 + 3508));
    dComIfG_resDelete((arg0 + 684), ((char*)&@stringBase0 + 0));
    return 1;
}

/* 00004998-00004D08       .text useHeapInit__FP10fopAc_ac_c */
static BOOL useHeapInit(fopAc_ac_c*) {
        /* _savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* if (this->field_0x2c0 != 2) goto L_48c8; */
        /* L_48c8:; */
        __nw(180);
        /* if (/ * beq * / 1) goto L_4978; */
        ((dRes_control_c*)(((char*)&@stringBase0 + 0)))->getRes(7, (7 + -16460), 64);
        /* L_4978:; */
        /* field_0x2b8 = __ct(((dRes_control_c*)(((char*)&@stringBase0 + 0)))->getRes(26, (7 + -16460), 64), 1, ((dRes_control_c*)(((char*)&@stringBase0 + 0)))->getRes(26, (7 + -16460), 64), 0, 0, ((dRes_control_c*)(((char*)&@stringBase0 + 0)))->getRes(7, (7 + -16460), 64), 1, 0); */
        /* if (this->field_0x2b8 == 0) goto L_4994; */
        /* if (this->field_0x50 != 0) goto L_499c; */
        /* L_4994:; */
        return 0;
        /* L_499c:; */
        /* field_0x14 = _savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* goto L_49c8; */
        /* L_49b0:; */
        /* field_0x8 = 0; */
        /* L_49c8:; */
        /* if (((0 + 1) & 65535) < this->field_0x28) goto L_49b0; */
        /* if (this->field_0x2c0 != 2) goto L_4aa8; */
        /* if (__nw(24) == 0) goto L_4a28; */
        /* field_0x0 = 0; */
        /* field_0x4 = 0; */
        /* field_0x0 = 0; */
        /* field_0xc = 0; */
        /* field_0x10 = 0; */
        /* L_4a28:; */
        /* field_0x2b4 = __nw(24); */
        /* if (this->field_0x2b4 != 0) goto L_4a40; */
        return 0;
        /* L_4a40:; */
        /* if (((mDoExt_brkAnm*)(this->field_0x2b4))->init(this->field_0x4, ((dRes_control_c*)(((char*)&@stringBase0 + 0)))->getRes(29, ((char*)&g_dComIfG_gameInfo + -16460), 64), 1, 0, 0, -1, 0) != 0) goto L_4bc4; */
        return 0;
        /* L_4aa8:; */
        __nw(180);
        /* if (/ * beq * / 1) goto L_4b58; */
        ((dRes_control_c*)(((char*)&@stringBase0 + 0)))->getRes(8, ((7 + -16460) + -16460), 64);
        /* L_4b58:; */
        /* field_0x2bc = __ct(((dRes_control_c*)(((char*)&@stringBase0 + 0)))->getRes(7, (7 + -16460), 64), 1, ((dRes_control_c*)(((char*)&@stringBase0 + 0)))->getRes(25, ((7 + -16460) + -16460), 64), 0, 0, ((dRes_control_c*)(((char*)&@stringBase0 + 0)))->getRes(8, ((7 + -16460) + -16460), 64), 1, 0); */
        /* if (this->field_0x2bc == 0) goto L_4b74; */
        /* if (this->field_0x50 != 0) goto L_4b7c; */
        /* L_4b74:; */
        return 0;
        /* L_4b7c:; */
        /* field_0x14 = _savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* goto L_4ba8; */
        /* L_4b90:; */
        /* field_0x8 = 0; */
        /* L_4ba8:; */
        /* if (((0 + 1) & 65535) < this->field_0x28) goto L_4b90; */
        /* L_4bc4:; */
        /* if (this->field_0x2c0 != 0) goto L_4bf0; */
        /* if (((mDoExt_invisibleModel*)((_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 4060)))->create(this->field_0x50) != 0) goto L_4bf0; */
        return 0;
        /* L_4bf0:; */
        return _restgpr_28(1);
}

/* 00004D50-000050DC       .text daBO_Create__FP10fopAc_ac_c */
static cPhs_State daBO_Create(fopAc_ac_c*) {
    /* Nonmatching */
    static dCcD_SrcSph head_co_sph_src = {
        // dCcD_SrcGObjInf
        {
            /* Flags             */ 0,
            /* SrcObjAt  Type    */ AT_TYPE_UNK2000,
            /* SrcObjAt  Atp     */ 1,
            /* SrcObjAt  SPrm    */ cCcD_AtSPrm_Set_e | cCcD_AtSPrm_VsPlayer_e,
            /* SrcObjTg  Type    */ AT_TYPE_ALL & ~AT_TYPE_WATER & ~AT_TYPE_UNK20000 & ~AT_TYPE_UNK400000 & ~AT_TYPE_LIGHT,
            /* SrcObjTg  SPrm    */ cCcD_TgSPrm_Set_e | cCcD_TgSPrm_IsEnemy_e,
            /* SrcObjCo  SPrm    */ cCcD_CoSPrm_Set_e | cCcD_CoSPrm_IsPlayer_e | cCcD_CoSPrm_VsEnemy_e,
            /* SrcGObjAt Se      */ dCcG_SE_UNK6,
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
    static dCcD_SrcSph foot_co_sph_src = {
        // dCcD_SrcGObjInf
        {
            /* Flags             */ 0,
            /* SrcObjAt  Type    */ 0,
            /* SrcObjAt  Atp     */ 0,
            /* SrcObjAt  SPrm    */ 0,
            /* SrcObjTg  Type    */ 0,
            /* SrcObjTg  SPrm    */ 0,
            /* SrcObjCo  SPrm    */ cCcD_CoSPrm_Set_e | cCcD_CoSPrm_IsPlayer_e | cCcD_CoSPrm_VsGrpAll_e,
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
        // cM3dGSphS
        {{
            /* Center */ {0.0f, 0.0f, 0.0f},
            /* Radius */ 15.0f,
        }},
    };
    static dCcD_SrcCyl body_cyl_src = {
        // dCcD_SrcGObjInf
        {
            /* Flags             */ 0,
            /* SrcObjAt  Type    */ 0,
            /* SrcObjAt  Atp     */ 0,
            /* SrcObjAt  SPrm    */ 0,
            /* SrcObjTg  Type    */ AT_TYPE_ALL & ~AT_TYPE_WATER & ~AT_TYPE_UNK20000 & ~AT_TYPE_WIND & ~AT_TYPE_UNK400000 & ~AT_TYPE_LIGHT,
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
            /* SrcGObjTg SPrm    */ dCcG_TgSPrm_NoHitMark_e,
            /* SrcGObjCo SPrm    */ 0,
        },
        // cM3dGCylS
        {{
            /* Center */ {0.0f, 0.0f, 0.0f},
            /* Radius */ 0.0f,
            /* Height */ 0.0f,
        }},
    };
}

static actor_method_class l_daBO_Method = {
    (process_method_func)daBO_Create,
    (process_method_func)daBO_Delete,
    (process_method_func)daBO_Execute,
    (process_method_func)daBO_IsDelete,
    (process_method_func)daBO_Draw,
};

actor_process_profile_definition g_profile_BO = {
    /* Layer ID     */ fpcLy_CURRENT_e,
    /* List ID      */ 0x0007,
    /* List Prio    */ fpcPi_CURRENT_e,
    /* Proc Name    */ fpcNm_BO_e,
    /* Proc SubMtd  */ &g_fpcLf_Method.base,
    /* Size         */ sizeof(bo_class),
    /* Size Other   */ 0,
    /* Parameters   */ 0,
    /* Leaf SubMtd  */ &g_fopAc_Method.base,
    /* Draw Prio    */ fpcDwPi_BO_e,
    /* Actor SubMtd */ &l_daBO_Method,
    /* Status       */ fopAcStts_SHOWMAP_e | fopAcStts_CULL_e | fopAcStts_UNK40000_e,
    /* Group        */ fopAc_ENEMY_e,
    /* Cull Type    */ fopAc_CULLBOX_CUSTOM_e,
};
