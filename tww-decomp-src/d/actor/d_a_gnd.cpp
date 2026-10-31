/**
 * d_a_gnd.cpp
 * Boss - Ganondorf
 */

#include "d/dolzel_rel.h" // IWYU pragma: keep
#include "d/actor/d_a_gnd.h"
#include "d/d_cc_d.h"

/* 000000EC-0000023C       .text __ct__11daGnd_HIO_cFv */
daGnd_HIO_c::daGnd_HIO_c() {
    /* field_0x0 = 0; */
    /* field_0x4 = -1; */
    /* field_0x5 = 0; */
    /* field_0x6 = 0; */
    /* field_0x7 = 1; */
    /* field_0x8 = 0; */
    /* field_0xc = 0; */
    /* field_0x10 = 0; */
    /* field_0x11 = 0; */
    /* field_0x12 = 1; */
    /* field_0x14 = 0; */
    /* field_0x18 = 0; */
    /* field_0x1c = 0; */
    /* field_0x20 = 0; */
    /* field_0x24 = 0; */
    /* field_0x28 = 0; */
    /* field_0x2c = 0; */
    /* field_0x30 = 0; */
    /* field_0x34 = 0; */
    /* field_0x38 = 0; */
    /* field_0x3c = 0; */
    /* field_0x40 = 0; */
    /* field_0x44 = 0; */
    /* field_0x45 = 1; */
    /* field_0x46 = 1; */
    /* field_0x48 = 0; */
    /* field_0x4c = 0; */
    /* field_0x50 = 0; */
    /* field_0x54 = 0; */
    /* field_0x58 = 0; */
    /* field_0x5c = 0; */
    /* field_0x60 = 0; */
    /* field_0x64 = 0; */
    /* field_0x68 = 30; */
    /* field_0x6a = 30; */
    /* field_0x6c = 0; */
    /* field_0x6e = 15; */
    /* field_0x70 = 10; */
    /* field_0x72 = 0; */
    /* field_0x74 = 10; */
    /* field_0x76 = 10; */
    /* field_0x78 = 0; */
    /* field_0x7c = 10; */
    /* field_0x7e = 1; */
    /* field_0x80 = 30; */
    /* field_0x82 = 3; */
    /* field_0x84 = 6; */
    /* field_0x86 = 70; */
    /* field_0x88 = 0; */
    /* field_0x89 = 0; */
    return arg0;
}

/* 0000023C-000003CC       .text j_demo__FP9gnd_class */
void j_demo(gnd_class*) {
        /* if (this->field_0x1c0 != 0) goto L_18c; */
        /* if (this->field_0x15b0 == 0) goto L_2c4; */
        /* field_0x15b0 = 0; */
        /* goto L_2c4; */
        /* L_18c:; */
        /* field_0x15b0 = 1; */
        /* ((dDemo_actor_c*)(((dDemo_object_c*)((this->field_0x5abc + 32)))->getActor(this->field_0x1c0)))->getP_BtpData(((char*)&@stringBase0 + 0)); */
        /* if (/ * beq * / 1) goto L_1fc; */
        /* ((mDoExt_btpAnm*)(this->field_0x2c4))->init(this->field_0x4); */
        /* L_1fc:; */
        /* ((dDemo_actor_c*)(((dDemo_object_c*)((this->field_0x5abc + 32)))->getActor(this->field_0x1c0)))->getP_BtkData(((char*)&@stringBase0 + 0)); */
        /* if (/ * beq * / 1) goto L_24c; */
        /* ((mDoExt_btkAnm*)(this->field_0x2bc))->init(this->field_0x4); */
        /* L_24c:; */
        /* ((dDemo_actor_c*)(((dDemo_object_c*)((this->field_0x5abc + 32)))->getActor(this->field_0x1c0)))->getP_BrkData(((char*)&@stringBase0 + 0)); */
        /* if (/ * beq * / 1) goto L_29c; */
        /* ((mDoExt_brkAnm*)(this->field_0x2c0))->init(this->field_0x4); */
        /* L_29c:; */
        dDemo_setDemoData(arg0, 106, this->field_0x2b8, ((char*)&@stringBase0 + 0), 0, 0, 0, 0);
        /* L_2c4:; */
        /* return this->field_0x15b0; */
}

/* 000003CC-000003EC       .text checkGround__FP9gnd_classf */
void checkGround(gnd_class*, float) {
    /* Nonmatching */
    /* Nonmatching */
    /* Nonmatching */
    /* Nonmatching */
}

/* 000003EC-00000510       .text setRipple__FP9gnd_class */
void setRipple(gnd_class*) {
        /* if (checkGround(arg0, C_@4419) == 0) goto L_404; */
        /* if (/ * beq * / 1) goto L_40c; */
        /* if (((dBgS*)(((char*)&g_dComIfG_gameInfo + 4768)))->GetAttributeCode((arg0 + 3240)) != 19) goto L_40c; */
        /* if (this->field_0x15b8 != 0) goto L_40c; */
        /* if (this->field_0x10c != 0) goto L_3a4; */
        /* field_0x110 = 0; */
        /* field_0x4 = 0; */
        /* field_0x8 = 0; */
        /* __register_global_object(((C_@3569 + 0) + 272), ((char*)&__dt__4cXyzFv + 0), ((C_@3569 + 0) + 256)); */
        /* field_0x10c = 1; */
        /* L_3a4:; */
        /* ((dPa_control_c*)(this->field_0x5ab8))->set(5, 51, (arg0 + 504), 0, ((C_@3569 + 0) + 272), 255, (arg0 + 5556)); */
        /* if (this->field_0x15b8 == 0) goto L_40c; */
        /* field_0x15c4 = 0; */
        /* goto L_40c; */
        /* L_404:; */
        /* L_40c:; */
        return ((dPa_rippleEcallBack*)((arg0 + 5556)))->end();
}

/* 0000054C-000005DC       .text splash_set__FP9gnd_class */
void splash_set(gnd_class*) {
    /* if (((dPa_control_c*)(this->field_0x5ab8))->set(0, (arg2 + -31940), (arg0 + 504), 0, 0, 255, 0) != 0) { */
    /* return ((dPa_control_c*)(this->field_0x5ab8))->set(0, (arg2 + -31940), (arg0 + 504), 0, 0, 255, 0); */

/* 000005DC-000006B4       .text attack_eff_set__FP9gnd_classi */
void attack_eff_set(gnd_class*, int) {
    /* _savegpr_26(arg0, int, arg2, arg3, arg4, arg5, arg6, arg7); */
    /* L_524:; */
    if (/* beq */ 1) {
        /* ((dPa_control_c*)(this->field_0x5ab8))->set(0); */
        /* if (0 <= 3) goto L_5a0; */
    }
    /* L_5a0:; */
    /* if ((0 + 1) >= 6) goto L_524; */
    /* return _restgpr_26(this->field_0x3a2, this->field_0x3a4); */
}

/* 000006B4-00000738       .text attack_eff_move__FP9gnd_class */
void attack_eff_move(gnd_class*) {
    /* _savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
    /* L_5f8:; */
    if (/* beq */ 1) {
        JPASetRMtxTVecfromMtx((this->field_0x8c + ((0 + 5076) * 48)));
    }
    /* if ((0 + 1) >= 6) goto L_5f8; */
    return _restgpr_27(JPASetRMtxTVecfromMtx((this->field_0x8c + ((0 + 5076) * 48))));
}

/* 00000738-0000077C       .text attack_eff_remove__FP9gnd_class */
void attack_eff_remove(gnd_class*) {
    /* if (arg4 != 0) { */
        /* field_0x60 = -1; */
    return arg0;
}

/* 0000077C-00000900       .text anm_init__FP9gnd_classifUcfi */
void anm_init(gnd_class*, int, float, unsigned char, float, int) {
    /* _savegpr_26(arg0, int, float, char, float, int, arg6, arg7); */
    if (/* blt */ 1) {
        /* ((mDoExt_McaMorf*)(this->field_0x2b8))->setAnm(((dRes_control_c*)(((char*)&@stringBase0 + 0)))->getRes()); */
    } else {
        /* ((mDoExt_McaMorf*)(this->field_0x2b8))->setAnm(((dRes_control_c*)(((char*)&@stringBase0 + 0)))->getRes()); */
    }
    /* attack_eff_remove(_savegpr_26(arg0, int, float, char, float, int, arg6, arg7)); */
    if (/* bne */ 1) {
    }
    /* return _restgpr_26((attack_eff_set(_savegpr_26(arg0, int, float, char, float, int, arg6, arg7), 0) + 4)); */
}

/* 00000900-0000094C       .text z_s_sub__FPvPv */
void z_s_sub(void*, void*) {
        /* if (fopAc_IsActor(arg0) == 0) goto L_848; */
        /* if (this->field_0x8 != 211) goto L_848; */
        /* goto L_84c; */
        /* L_848:; */
        /* L_84c:; */
        return 0;
}

/* 0000094C-00000C38       .text daGnd_Draw__FP9gnd_class */
static BOOL daGnd_Draw(gnd_class*) {
        /* _savegpr_26(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* if (this->field_0x155c <= 1) goto L_89c; */
        ((mDoGph_gInf_c*)(mBlureRate__13mDoGph_gInf_c))->onBlure();
        /* goto L_8b0; */
        /* L_89c:; */
        /* if (/ * bne * / 1) goto L_8b0; */
        /* field_0x155c = 0; */
        /* field_0x0 = 0; */
        /* L_8b0:; */
        /* ((dScnKy_env_light_c*)(((char*)&g_env_light + 0)))->settingTevStruct(0, (_savegpr_26(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 504), (_savegpr_26(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 268)); */
        /* if (this->field_0x142c == 0) goto L_9c0; */
        /* if (((this->field_0x19c + this->field_0x1426) & 65535) <= 255) goto L_8f8; */
        /* L_8f8:; */
        /* if (((this->field_0x19e + this->field_0x1426) & 65535) <= 255) goto L_910; */
        /* L_910:; */
        /* if (((this->field_0x19e + (this->field_0x19e + this->field_0x1426)) & 65535) <= 255) goto L_92c; */
        /* L_92c:; */
        /* if (this->field_0x142c <= ((this->field_0x50e + 20) & 65535)) goto L_974; */
        /* cLib_addCalcAngleS2((_savegpr_26(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 5158), 280, 1, 30); */
        /* cLib_addCalc2((_savegpr_26(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 5160)); */
        /* goto L_998; */
        /* L_974:; */
        /* cLib_addCalcAngleS2((_savegpr_26(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 5158), 0, 1, 14); */
        /* cLib_addCalc0((_savegpr_26(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 5160)); */
        /* L_998:; */
        /* field_0x19c = (255 & 16777215); */
        /* field_0x19e = (255 & 16777215); */
        /* field_0x1a0 = (255 & 16777215); */
        /* field_0x1a4 = (this->field_0x1a4 + this->field_0x1428); */
        /* L_9c0:; */
        /* ((dScnKy_env_light_c*)(((char*)&g_env_light + 0)))->setLightTevColorType(this->field_0x50, (_savegpr_26(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 268)); */
        /* ((mDoExt_brkAnm*)(this->field_0x2c0))->entry(this->field_0x4, this->field_0x4); */
        /* ((mDoExt_btkAnm*)(this->field_0x2bc))->entry(this->field_0x4, this->field_0x4); */
        /* ((mDoExt_btpAnm*)(this->field_0x2c4))->entry(this->field_0x4); */
        /* ((mDoExt_McaMorf*)(this->field_0x2b8))->entryDL(); */
        /* field_0x2c8 = dComIfGd_setShadow(this->field_0x2c8, 1, this->field_0x50); */
        /* dSnap_RegistFig(206, _savegpr_26(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* if (this->field_0x7 == 0) goto L_b30; */
        /* ((mDoExt_3DlineMat0_c*)((_savegpr_26(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 2916)))->update(20); */
        /* ((mDoExt_3DlineMatSortPacket*)((((((char*)&g_dComIfG_gameInfo + 0) + ((_savegpr_26(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 2916) * 20)) + 24696) + 23824)))->setMat((_savegpr_26(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 2916)); */
        /* L_b30:; */
        return _restgpr_26(1);
}

/* 00000C38-00000C6C       .text player_view_check__FP9gnd_classs */
void player_view_check(gnd_class*, short) {
        /* if ((short - this->field_0x20e) != 0) goto L_b64; */
        /* L_b64:; */
        /* if ((((-(short - this->field_0x20e)) & 65535) & 65535) >= 16384) goto L_b78; */
        return 1;
}

/* 00000C6C-00000F24       .text ke_control__FP9gnd_classP8gnd_ke_sf */
void ke_control(gnd_class*, gnd_ke_s*, float) {
    /* _savegpr_25(arg0, arg1, float, arg3, arg4, arg5, arg6, arg7); */
    if (/* bne */ 1) {
    }
    /* L_c54:; */
    /* if (((this->field_0xc4 + this->field_0x10) + (this->field_0x4 + this->field_0x4)) > (this->field_0xb8 + this->field_0xc54)) { */
    cM_atan2s(calc_mtx);
    /* if (((((this->field_0xb8 + this->field_0xc54) - (this->field_0x4 + this->field_0x4)) * ((this->field_0xb8 + this->field_0xc54) - (this->field_0x4 + this->field_0x4))) + ((this->field_0x8 + (this->field_0x8 - (this->field_0x4 + this->field_0x4))) * (this->field_0x8 + (this->field_0x8 - (this->field_0x4 + this->field_0x4))))) < this->field_0x3c) { */
    cM_atan2s(cM_atan2s(calc_mtx));
    mDoMtx_XrotS(this->field_0x0, ((-cM_atan2s(calc_mtx)) & 65535));
    mDoMtx_YrotM(this->field_0x0, (cM_atan2s(cM_atan2s(calc_mtx)) & 65535));
    MtxPosition();
    /* field_0x0 = 0; */
    /* field_0x4 = 0; */
    /* field_0x8 = 0; */
    /* field_0x0 = 0; */
    /* field_0x4 = 0; */
    /* field_0x8 = 0; */
    /* field_0x0 = ((this->field_0xc8 + this->field_0x14) * (this->field_0x0 - this->field_0x0)); */
    /* field_0x4 = ((this->field_0xc8 + this->field_0x14) * (this->field_0x4 - this->field_0x4)); */
    /* field_0x8 = ((this->field_0xc8 + this->field_0x14) * (this->field_0x8 - this->field_0x8)); */
    /* if ((1 + 1) >= 20) goto L_c54; */
    return _restgpr_25(MtxPosition());
}

/* 00000F24-00000F68       .text ke_pos_set__FP9gnd_classP8gnd_ke_si */
void ke_pos_set(gnd_class*, gnd_ke_s*, int) {
    /* field_0x0 = 0; */
    /* field_0x4 = 0; */
    /* field_0x8 = 0; */
    return (0 + 12);
}

/* 00000F68-00001140       .text ke_move__FP9gnd_class */
void ke_move(gnd_class*) {
    /* _savegpr_19(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
    /* L_f04:; */
    PSMTXCopy();
    PSVECSquareMag();
    if (/* ble */ 1) {
    }
    if (((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->startCheckOld(((char*)&@stringBase0 + 4)) != 0) {
        /* if (this->field_0xd8 >= 300) goto L_fcc; */
    }
    /* L_fcc:; */
    MtxPosition();
    /* ke_control(_savegpr_19(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), (_savegpr_19(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 996)); */
    /* ke_pos_set(_savegpr_19(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), (_savegpr_19(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 996), 0); */
    /* if ((0 + 1) >= 4) goto L_f04; */
    /* return _restgpr_19(ke_pos_set(_savegpr_19(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), (_savegpr_19(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 996), 0)); */
}

/* 00001140-00001278       .text pos_move__FP9gnd_classSc */
void pos_move(gnd_class*, signed char) {
    if (char != 0) {
        cLib_addCalcAngleS2((arg0 + 518), cM_atan2s(__mi()), 5);
        cLib_addCalc2((arg0 + 756));
    }
    cLib_addCalc2((arg0 + 596));
    /* mDoMtx_YrotS(this->field_0x0, this->field_0x206); */
    MtxPosition();
    /* field_0x220 = 0; */
    /* field_0x228 = 0; */
    PSVECAdd((arg0 + 504), (arg0 + 544), (arg0 + 504));
    /* field_0x1fc = (this->field_0x1fc + this->field_0x224); */
    /* field_0x224 = (this->field_0x224 + this->field_0x258); */
    /* field_0x258 = 0; */
    return PSVECAdd((arg0 + 504), (arg0 + 544), (arg0 + 504));
}

/* 00001278-00001334       .text wait_set__FP9gnd_class */
void wait_set(gnd_class*) {
        /* if ((this->field_0x3d8 & 255) > 1) goto L_1214; */
        /* anm_init(arg0, 87, 2, -1, arg4, arg5); */
        dComIfGp_getReverb((this->field_0x20a & 255));
        /* if (arg0 == 0) goto L_1204; */
        /* goto L_1208; */
        /* L_1204:; */
        /* L_1208:; */
        /* ((JAIZelBasic*)(this->field_0x0))->monsSeStart(18758, (arg0 + 608), -1, 0, dComIfGp_getReverb((this->field_0x20a & 255))); */
        /* goto L_1234; */
        /* L_1214:; */
        /* L_1234:; */
        /* return anm_init(((JAIZelBasic*)(this->field_0x0))->monsSeStart(18758, (arg0 + 608), -1, 0, dComIfGp_getReverb((this->field_0x20a & 255))), 88, 2, -1); */
}

/* 00001334-00001974       .text move0__FP9gnd_class */
void move0(gnd_class*) {
        /* fopAcM_searchActorDistance(_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), this->field_0x5b38); */
        /* if (this->field_0x2d0 > 23) goto L_181c; */
        /* anm_init(_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), 89, 2, 33); */
        /* field_0x2d0 = (this->field_0x2d0 + 1); */
        /* goto L_181c; */
        /* field_0x2f8 = 0; */
        /* if (/ * bge * / 1) goto L_1338; */
        /* anm_init(_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), 88, 2, -1); */
        /* field_0x2d0 = 2; */
        /* goto L_181c; */
        /* L_1338:; */
        /* if (/ * ble * / 1) goto L_181c; */
        /* anm_init(_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), 68, 0, 23); */
        /* field_0x2d0 = 3; */
        /* field_0x254 = 0; */
        /* field_0x2f8 = 0; */
        /* goto L_181c; */
        /* field_0x2f8 = 0; */
        /* if (player_view_check(_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), fopAcM_searchActorAngleY(_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), this->field_0x5b38)) == 0) goto L_181c; */
        /* if (/ * ble * / 1) goto L_13d0; */
        /* if (this->field_0x304 != 0) goto L_13d0; */
        /* field_0x2d0 = 0; */
        /* goto L_181c; */
        /* L_13d0:; */
        /* if (/ * bge * / 1) goto L_13f0; */
        /* field_0x2d0 = 20; */
        /* goto L_181c; */
        /* L_13f0:; */
        /* if (this->field_0x304 != 0) goto L_181c; */
        cM_rndF(((char*)&l_HIO + 0));
        /* if (/ * bge * / 1) goto L_144c; */
        /* field_0x2ce = 2; */
        cM_rndF(((char*)&l_HIO + 0));
        /* if (/ * bge * / 1) goto L_1440; */
        /* field_0x2d0 = 0; */
        /* goto L_181c; */
        /* L_1440:; */
        /* field_0x2d0 = 1; */
        /* goto L_181c; */
        /* L_144c:; */
        /* field_0x2ce = 1; */
        /* if (this->field_0x3d8 == 0) goto L_146c; */
        /* if (this->field_0x11 != 1) goto L_1478; */
        /* L_146c:; */
        /* field_0x2d0 = 0; */
        /* goto L_181c; */
        /* L_1478:; */
        /* if ((this->field_0x3d8 & 255) == 1) goto L_148c; */
        /* if (this->field_0x11 != 2) goto L_1498; */
        /* L_148c:; */
        /* field_0x2d0 = 5; */
        /* goto L_181c; */
        /* L_1498:; */
        /* cM_rndF(this->field_0x11); */
        /* if (/ * bge * / 1) goto L_14b8; */
        /* field_0x2d0 = 0; */
        /* goto L_181c; */
        /* L_14b8:; */
        /* field_0x2d0 = 5; */
        /* goto L_181c; */
        /* field_0x258 = 0; */
        /* if (/ * bne * / 1) goto L_14f8; */
        /* field_0x224 = 0; */
        /* field_0x254 = 0; */
        /* field_0x2f8 = 0; */
        /* splash_set(_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* L_14f8:; */
        /* if (this->field_0x5d != 0) goto L_1520; */
        /* if (/ * beq * / 1) goto L_1520; */
        /* L_1520:; */
        /* if (0 == 0) goto L_181c; */
        /* anm_init(_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), 67, 2, -1); */
        /* field_0x2d0 = (this->field_0x2d0 + 1); */
        /* goto L_181c; */
        /* ((JAIZelBasic*)(this->field_0x0))->seStart(20824, (_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 608), 0, dComIfGp_getReverb((this->field_0x20a & 255)), 0); */
        /* field_0x258 = 0; */
        /* if (this->field_0x224 >= this->field_0x3c) goto L_181c; */
        /* anm_init(_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), 65, 0, -1); */
        /* field_0x2d0 = (this->field_0x2d0 + 1); */
        /* goto L_181c; */
        /* ((JAIZelBasic*)(this->field_0x0))->seStart(20824, (_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 608), 0, dComIfGp_getReverb((this->field_0x20a & 255)), 0); */
        /* field_0x258 = 0; */
        /* field_0x2f0 = 0; */
        /* if (checkGround(_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)) == 0) goto L_181c; */
        /* anm_init(_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), 66, 0, -1); */
        /* field_0x2d0 = 6; */
        /* splash_set(_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* goto L_181c; */
        /* field_0x2f8 = 0; */
        /* field_0x2f0 = 0; */
        /* if (this->field_0x5d != 0) goto L_16a8; */
        /* if (/ * beq * / 1) goto L_16a8; */
        /* L_16a8:; */
        /* if (0 == 0) goto L_181c; */
        /* field_0x2d0 = 2; */
        /* anm_init(_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), 88, 2, -1); */
        /* goto L_181c; */
        /* anm_init(_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), 74, 0, 27); */
        /* field_0x2d0 = 21; */
        /* goto L_181c; */
        /* field_0x2f8 = 0; */
        /* field_0x254 = 0; */
        /* if (this->field_0x5d != 0) goto L_1734; */
        /* if (/ * beq * / 1) goto L_1734; */
        /* L_1734:; */
        /* if (0 == 0) goto L_181c; */
        /* field_0x224 = 0; */
        /* field_0x254 = 0; */
        /* field_0x2f8 = 0; */
        /* anm_init(_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), 75, 0, -1); */
        /* field_0x2d0 = 22; */
        /* goto L_181c; */
        /* field_0x258 = 0; */
        /* if (checkGround(_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)) == 0) goto L_181c; */
        /* anm_init(_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), 76, 0, 28); */
        /* field_0x2d0 = 23; */
        /* goto L_181c; */
        /* field_0x2f8 = 0; */
        /* if (this->field_0x5d != 0) goto L_17fc; */
        /* if (/ * beq * / 1) goto L_17fc; */
        /* L_17fc:; */
        /* if (0 == 0) goto L_181c; */
        /* field_0x2d0 = 2; */
        /* wait_set(_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* field_0x304 = 20; */
        /* L_181c:; */
        /* if ((1 & 255) != 1) goto L_1840; */
        /* field_0x2d4 = 0; */
        /* field_0x2d8 = 0; */
        /* field_0x2dc = 0; */
        /* L_1840:; */
        /* pos_move(_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), 0); */
        /* field_0x2f0 = 0; */
        /* return _restgpr_27(cLib_addCalcAngleS2((_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 526), this->field_0x206, 2, 4096)); */
}

/* 00001974-000028D0       .text attack0__FP9gnd_class */
void attack0(gnd_class*) {
        /* fopAcM_searchActorDistance(_savegpr_22(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), this->field_0x5b38); */
        /* if (this->field_0x2d0 > 26) goto L_2688; */
        /* anm_init(_savegpr_22(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), 36, 0, 8); */
        dComIfGp_getReverb((this->field_0x20a & 255));
        /* if (_savegpr_22(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) == 0) goto L_1964; */
        /* goto L_1968; */
        /* L_1964:; */
        /* L_1968:; */
        /* ((JAIZelBasic*)(this->field_0x0))->monsSeStart(18759, (_savegpr_22(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 608), -1, 0, dComIfGp_getReverb((this->field_0x20a & 255))); */
        /* field_0x2d0 = (this->field_0x2d0 + 1); */
        /* goto L_2688; */
        /* if (/ * bge * / 1) goto L_19a8; */
        /* field_0x2f8 = 0; */
        /* goto L_19b8; */
        /* L_19a8:; */
        /* field_0x2f8 = 0; */
        /* L_19b8:; */
        /* if (/ * blt * / 1) goto L_19d0; */
        /* if (/ * bgt * / 1) goto L_19d0; */
        /* field_0x13b8 = 1; */
        /* L_19d0:; */
        /* if (this->field_0x5d != 0) goto L_19f8; */
        /* if (/ * beq * / 1) goto L_19f8; */
        /* L_19f8:; */
        /* if (0 == 0) goto L_2688; */
        /* anm_init(_savegpr_22(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), 37, 0, 9); */
        dComIfGp_getReverb((this->field_0x20a & 255));
        /* if (_savegpr_22(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) == 0) goto L_1a50; */
        /* goto L_1a54; */
        /* L_1a50:; */
        /* L_1a54:; */
        /* ((JAIZelBasic*)(this->field_0x0))->monsSeStart(18760, (_savegpr_22(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 608), -1, 0, dComIfGp_getReverb((this->field_0x20a & 255))); */
        /* field_0x2d0 = (this->field_0x2d0 + 1); */
        /* goto L_2688; */
        /* if (/ * bge * / 1) goto L_1a90; */
        /* field_0x2f8 = 0; */
        /* goto L_1aa0; */
        /* L_1a90:; */
        /* field_0x2f8 = 0; */
        /* L_1aa0:; */
        /* if (/ * blt * / 1) goto L_1ab8; */
        /* if (/ * bgt * / 1) goto L_1ab8; */
        /* field_0x13b8 = 1; */
        /* L_1ab8:; */
        /* if (this->field_0x5d != 0) goto L_1ae0; */
        /* if (/ * beq * / 1) goto L_1ae0; */
        /* L_1ae0:; */
        /* if (0 == 0) goto L_1b68; */
        /* if (this->field_0x3d4 == 0) goto L_1b00; */
        /* field_0x3d4 = 0; */
        /* goto L_2364; */
        /* L_1b00:; */
        /* anm_init(_savegpr_22(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), 38, 0, 10); */
        dComIfGp_getReverb((this->field_0x20a & 255));
        /* if (_savegpr_22(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) == 0) goto L_1b50; */
        /* goto L_1b54; */
        /* L_1b50:; */
        /* L_1b54:; */
        /* ((JAIZelBasic*)(this->field_0x0))->monsSeStart(18761, (_savegpr_22(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 608), -1, 0, dComIfGp_getReverb((this->field_0x20a & 255))); */
        /* field_0x2d0 = (this->field_0x2d0 + 1); */
        /* L_1b68:; */
        /* if (/ * ble * / 1) goto L_2688; */
        /* field_0x13cf = 1; */
        /* goto L_2688; */
        /* if (/ * bge * / 1) goto L_1ba8; */
        /* field_0x2f8 = 0; */
        /* goto L_1bb8; */
        /* L_1ba8:; */
        /* field_0x2f8 = 0; */
        /* L_1bb8:; */
        /* if (/ * blt * / 1) goto L_1bd4; */
        /* if (/ * bgt * / 1) goto L_1bd4; */
        /* field_0x13b8 = 1; */
        /* field_0x13b9 = 1; */
        /* L_1bd4:; */
        /* if (/ * blt * / 1) goto L_1bfc; */
        /* if (/ * bgt * / 1) goto L_1bfc; */
        /* field_0x13cf = 1; */
        /* L_1bfc:; */
        /* if (this->field_0x5d != 0) goto L_1c24; */
        /* if (/ * beq * / 1) goto L_1c24; */
        /* L_1c24:; */
        /* if (0 == 0) goto L_2688; */
        /* field_0x2ce = 0; */
        /* field_0x2d0 = 0; */
        /* goto L_2688; */
        /* anm_init(_savegpr_22(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), 39, 0, 11); */
        dComIfGp_getReverb((this->field_0x20a & 255));
        /* if (_savegpr_22(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) == 0) goto L_1c8c; */
        /* goto L_1c90; */
        /* L_1c8c:; */
        /* L_1c90:; */
        /* ((JAIZelBasic*)(this->field_0x0))->monsSeStart(18759, (_savegpr_22(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 608), -1, 0, dComIfGp_getReverb((this->field_0x20a & 255))); */
        /* field_0x2d0 = (this->field_0x2d0 + 1); */
        /* goto L_2688; */
        /* if (/ * blt * / 1) goto L_1cd4; */
        /* if (/ * bge * / 1) goto L_1cd4; */
        /* field_0x2f8 = 0; */
        /* goto L_1ce4; */
        /* L_1cd4:; */
        /* field_0x2f8 = 0; */
        /* L_1ce4:; */
        /* if (/ * blt * / 1) goto L_1cfc; */
        /* if (/ * bgt * / 1) goto L_1cfc; */
        /* field_0x13b9 = 1; */
        /* L_1cfc:; */
        /* if (this->field_0x5d != 0) goto L_1d28; */
        /* if (/ * beq * / 1) goto L_1d28; */
        /* L_1d28:; */
        /* if (0 == 0) goto L_2688; */
        /* anm_init(_savegpr_22(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), 40, 0, 12); */
        dComIfGp_getReverb((this->field_0x20a & 255));
        /* if (_savegpr_22(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) == 0) goto L_1d80; */
        /* goto L_1d84; */
        /* L_1d80:; */
        /* L_1d84:; */
        /* ((JAIZelBasic*)(this->field_0x0))->monsSeStart(18761, (_savegpr_22(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 608), -1, 0, dComIfGp_getReverb((this->field_0x20a & 255))); */
        /* field_0x2d0 = 7; */
        /* goto L_2688; */
        /* field_0x2f8 = 0; */
        /* if (/ * blt * / 1) goto L_1dcc; */
        /* if (/ * bgt * / 1) goto L_1dcc; */
        /* field_0x13b8 = 1; */
        /* field_0x13b9 = 1; */
        /* L_1dcc:; */
        /* if (this->field_0x5d != 0) goto L_1df4; */
        /* if (/ * beq * / 1) goto L_1df4; */
        /* L_1df4:; */
        /* if (0 == 0) goto L_2688; */
        /* if (this->field_0x3d4 == 0) goto L_1e14; */
        /* field_0x3d4 = 0; */
        /* goto L_2364; */
        /* L_1e14:; */
        /* anm_init(_savegpr_22(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), 43, 0, 15); */
        /* field_0x2d0 = 8; */
        /* goto L_2688; */
        /* field_0x2f8 = 0; */
        /* if (this->field_0x5d != 0) goto L_1e6c; */
        /* if (/ * beq * / 1) goto L_1e6c; */
        /* L_1e6c:; */
        /* if (0 == 0) goto L_2688; */
        /* anm_init(_savegpr_22(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), 41, 0, 13); */
        dComIfGp_getReverb((this->field_0x20a & 255));
        /* if (_savegpr_22(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) == 0) goto L_1ec4; */
        /* goto L_1ec8; */
        /* L_1ec4:; */
        /* L_1ec8:; */
        /* ((JAIZelBasic*)(this->field_0x0))->monsSeStart(18760, (_savegpr_22(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 608), -1, 0, dComIfGp_getReverb((this->field_0x20a & 255))); */
        /* field_0x2d0 = 9; */
        /* field_0x224 = 0; */
        /* field_0x2f8 = 0; */
        /* splash_set(_savegpr_22(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* goto L_2688; */
        /* if (this->field_0x224 <= this->field_0x3c) goto L_1f3c; */
        /* field_0x2e0 = 0; */
        /* field_0x2e4 = 0; */
        /* field_0x2e8 = 0; */
        /* L_1f3c:; */
        /* if (/ * ble * / 1) goto L_1f60; */
        /* field_0x13cf = 2; */
        /* L_1f60:; */
        /* field_0x258 = 0; */
        /* field_0x2f0 = 0; */
        /* if (checkGround(_savegpr_22(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)) == 0) goto L_2688; */
        /* anm_init(_savegpr_22(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), 42, 0, 14); */
        /* field_0x2d0 = 10; */
        /* splash_set(_savegpr_22(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* goto L_2688; */
        /* if ((this->field_0x3d8 & 255) < 2) goto L_1fd4; */
        /* field_0x3d7 = 2; */
        /* L_1fd4:; */
        /* if (/ * blt * / 1) goto L_2004; */
        /* if (/ * bgt * / 1) goto L_2004; */
        /* field_0x13cf = 2; */
        /* L_2004:; */
        /* field_0x2f8 = 0; */
        /* if (/ * blt * / 1) goto L_2034; */
        /* if (/ * bgt * / 1) goto L_2034; */
        /* field_0x13b8 = 1; */
        /* field_0x13b9 = 1; */
        /* field_0x13c8 = 0; */
        /* field_0x13c4 = 0; */
        /* L_2034:; */
        /* if (this->field_0x5d != 0) goto L_205c; */
        /* if (/ * beq * / 1) goto L_205c; */
        /* L_205c:; */
        /* if (0 == 0) goto L_2688; */
        /* field_0x2d0 = 11; */
        /* goto L_2688; */
        /* if ((this->field_0x3d8 & 255) < 2) goto L_2098; */
        /* field_0x3d7 = 2; */
        /* L_2098:; */
        /* if (this->field_0x302 != 0) goto L_2688; */
        /* goto L_2688; */
        /* field_0x2f0 = 0; */
        /* field_0x2f8 = 0; */
        /* if (this->field_0x302 != 0) goto L_2688; */
        /* anm_init(_savegpr_22(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), 72, 0, 26); */
        /* field_0x2d0 = (this->field_0x2d0 + 1); */
        /* goto L_2688; */
        /* field_0x2f0 = 0; */
        /* if (this->field_0x5d != 0) goto L_2134; */
        /* if (/ * beq * / 1) goto L_2134; */
        /* L_2134:; */
        /* if (0 == 0) goto L_2688; */
        /* anm_init(_savegpr_22(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), 71, 0, -1); */
        dComIfGp_getReverb((this->field_0x20a & 255));
        /* if (_savegpr_22(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) == 0) goto L_218c; */
        /* goto L_2190; */
        /* L_218c:; */
        /* L_2190:; */
        /* ((JAIZelBasic*)(this->field_0x0))->monsSeStart(18762, (_savegpr_22(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 608), -1, 0, dComIfGp_getReverb((this->field_0x20a & 255))); */
        /* field_0x2d0 = (this->field_0x2d0 + 1); */
        /* field_0x224 = (this->field_0x44 + this->field_0x30); */
        /* field_0x2f8 = 0; */
        /* splash_set(_savegpr_22(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* goto L_2688; */
        /* field_0x258 = (this->field_0x2c + this->field_0x38); */
        /* field_0x2f0 = 0; */
        /* if (this->field_0x224 != this->field_0x3c) goto L_2688; */
        /* anm_init(_savegpr_22(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), 69, 0, 24); */
        dComIfGp_getReverb((this->field_0x20a & 255));
        /* if (_savegpr_22(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) == 0) goto L_2260; */
        /* goto L_2264; */
        /* L_2260:; */
        /* L_2264:; */
        /* ((JAIZelBasic*)(this->field_0x0))->monsSeStart(18763, (_savegpr_22(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 608), -1, 0, dComIfGp_getReverb((this->field_0x20a & 255))); */
        /* field_0x2d0 = (this->field_0x2d0 + 1); */
        /* field_0x2e0 = 0; */
        /* field_0x2e4 = 0; */
        /* field_0x2e8 = 0; */
        /* field_0x294 = 0; */
        /* goto L_2688; */
        /* field_0x13b8 = 4; */
        /* field_0x13b9 = 4; */
        /* if (checkGround(_savegpr_22(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)) == 0) goto L_2688; */
        /* anm_init(_savegpr_22(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), 70, 0, 25); */
        /* field_0x2d0 = (this->field_0x2d0 + 1); */
        /* field_0x254 = 0; */
        /* field_0x2f8 = 0; */
        /* splash_set(_savegpr_22(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* goto L_2688; */
        /* if (/ * bgt * / 1) goto L_232c; */
        /* field_0x13b8 = 4; */
        /* field_0x13b9 = 4; */
        /* L_232c:; */
        /* if (this->field_0x5d != 0) goto L_2354; */
        /* if (/ * beq * / 1) goto L_2354; */
        /* L_2354:; */
        /* if (0 == 0) goto L_2688; */
        /* goto L_2688; */
        /* L_2364:; */
        /* anm_init(_savegpr_22(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), 77, 0, 29); */
        /* field_0x2d0 = 21; */
        /* goto L_2688; */
        /* field_0x2f0 = 0; */
        /* field_0x2f8 = 0; */
        /* if (this->field_0x5d != 0) goto L_23d4; */
        /* if (/ * beq * / 1) goto L_23d4; */
        /* L_23d4:; */
        /* if (0 == 0) goto L_2688; */
        /* anm_init(_savegpr_22(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), 78, 0, -1); */
        dComIfGp_getReverb((this->field_0x20a & 255));
        /* if (_savegpr_22(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) == 0) goto L_242c; */
        /* goto L_2430; */
        /* L_242c:; */
        /* L_2430:; */
        /* ((JAIZelBasic*)(this->field_0x0))->monsSeStart(18762, (_savegpr_22(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 608), -1, 0, dComIfGp_getReverb((this->field_0x20a & 255))); */
        /* field_0x2d0 = 22; */
        /* goto L_2688; */
        /* if (/ * blt * / 1) goto L_2478; */
        /* if (/ * bgt * / 1) goto L_2478; */
        /* field_0x13b9 = 3; */
        /* field_0x13c8 = (this->field_0x104 + this->field_0x3c); */
        /* L_2478:; */
        /* if (/ * bne * / 1) goto L_24a0; */
        /* if (this->field_0x3d4 != 0) goto L_24a0; */
        /* field_0x13d1 = (this->field_0x8c + 13); */
        /* L_24a0:; */
        /* if (this->field_0x5d != 0) goto L_24c8; */
        /* if (/ * beq * / 1) goto L_24c8; */
        /* L_24c8:; */
        /* if (0 == 0) goto L_2688; */
        /* if (this->field_0x3d4 == 0) goto L_2530; */
        /* field_0x3d4 = 0; */
        /* if (this->field_0x3d8 != 0) goto L_2514; */
        /* field_0x2f8 = 0; */
        /* wait_set(_savegpr_22(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* field_0x2d0 = 23; */
        /* field_0x302 = 150; */
        /* goto L_2688; */
        /* L_2514:; */
        /* field_0x2d0 = 15; */
        /* goto L_2688; */
        /* L_2530:; */
        /* field_0x2d0 = 26; */
        /* wait_set(_savegpr_22(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* field_0x302 = (this->field_0x8e + 45); */
        /* goto L_2688; */
        /* if (this->field_0x302 != 0) goto L_2688; */
        /* anm_init(_savegpr_22(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), 80, 0, -1); */
        /* field_0x2d0 = 24; */
        /* goto L_2688; */
        /* if (/ * bne * / 1) goto L_25b4; */
        /* if (/ * beq * / 1) goto L_25b4; */
        /* L_25b4:; */
        /* if (0 == 0) goto L_2688; */
        /* if (player_view_check(_savegpr_22(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), fopAcM_searchActorAngleY(_savegpr_22(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), this->field_0x5b38)) == 0) goto L_25e4; */
        /* goto L_2688; */
        /* L_25e4:; */
        /* anm_init(_savegpr_22(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), 63, 0, -1); */
        dComIfGp_getReverb((this->field_0x20a & 255));
        /* if (_savegpr_22(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) == 0) goto L_2634; */
        /* goto L_2638; */
        /* L_2634:; */
        /* L_2638:; */
        /* ((JAIZelBasic*)(this->field_0x0))->monsSeStart(18772, (_savegpr_22(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 608), -1, 0, dComIfGp_getReverb((this->field_0x20a & 255))); */
        /* field_0x2d0 = 25; */
        /* field_0x302 = 20; */
        /* goto L_2688; */
        /* if (this->field_0x302 != 0) goto L_2688; */
        /* goto L_2688; */
        /* field_0x2f8 = 0; */
        /* if (this->field_0x302 != 0) goto L_2688; */
        /* L_2688:; */
        /* field_0x254 = 0; */
        /* if (1 == 0) goto L_26c0; */
        /* field_0x2d4 = 0; */
        /* field_0x2d8 = 0; */
        /* field_0x2dc = 0; */
        /* pos_move(_savegpr_22(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), 0); */
        /* goto L_26cc; */
        /* L_26c0:; */
        /* pos_move(_savegpr_22(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), 1); */
        /* L_26cc:; */
        /* field_0x2f0 = 0; */
        /* if (1 != 0) goto L_26f4; */
        /* cLib_addCalcAngleS2((_savegpr_22(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 526), this->field_0x206, 4, 8192); */
        /* goto L_271c; */
        /* L_26f4:; */
        /* cLib_addCalcAngleS2((_savegpr_22(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 526), fopAcM_searchActorAngleY(_savegpr_22(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), this->field_0x5b38), 4, (((1 & 255) << 12) & 65535)); */
        /* L_271c:; */
        /* if (1 == 0) goto L_275c; */
        /* cLib_addCalc2((_savegpr_22(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 504)); */
        /* cLib_addCalc2((_savegpr_22(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 512)); */
        /* L_275c:; */
        /* if (1 == 0) goto L_2788; */
        /* field_0x2ce = 0; */
        /* field_0x2d0 = 0; */
        /* L_2788:; */
        /* if (this->field_0x44 != 0) goto L_27c4; */
        /* if ((this->field_0x3d8 & 255) >= 2) goto L_27c4; */
        /* if (1 == 0) goto L_27c4; */
        /* field_0x13ce = 0; */
        /* field_0x3d7 = 5; */
        /* L_27c4:; */
        return _restgpr_22(((char*)&l_HIO + 0));
}

/* 000028D0-00002B68       .text attack1__FP9gnd_class */
void attack1(gnd_class*) {
        /* field_0x13c8 = (this->field_0x10c + this->field_0x40); */
        /* field_0x13c4 = (this->field_0x10c + this->field_0x40); */
        /* if (this->field_0x2d0 == 5) goto L_2940; */
        /* if (/ * bge * / 1) goto L_286c; */
        /* if (this->field_0x2d0 == 1) goto L_28dc; */
        /* if (/ * bge * / 1) goto L_2a14; */
        /* if (this->field_0x2d0 >= 0) goto L_2878; */
        /* goto L_2a14; */
        /* L_286c:; */
        /* if (this->field_0x2d0 >= 7) goto L_2a14; */
        /* goto L_29ac; */
        /* L_2878:; */
        anm_init(arg0, 83, 0, 31);
        dComIfGp_getReverb((this->field_0x20a & 255));
        /* if (arg0 == 0) goto L_28c4; */
        /* goto L_28c8; */
        /* L_28c4:; */
        /* L_28c8:; */
        /* ((JAIZelBasic*)(this->field_0x0))->monsSeStart(18762, (arg0 + 608), -1, 0, dComIfGp_getReverb((this->field_0x20a & 255))); */
        /* field_0x2d0 = 5; */
        /* goto L_2a14; */
        /* L_28dc:; */
        /* anm_init(((JAIZelBasic*)(this->field_0x0))->monsSeStart(18762, (arg0 + 608), -1, 0, dComIfGp_getReverb((this->field_0x20a & 255))), 84, 0, 32); */
        dComIfGp_getReverb((this->field_0x20a & 255));
        /* if (arg0 == 0) goto L_2928; */
        /* goto L_292c; */
        /* L_2928:; */
        /* L_292c:; */
        /* ((JAIZelBasic*)(this->field_0x0))->monsSeStart(18764, (arg0 + 608), -1, 0, dComIfGp_getReverb((this->field_0x20a & 255))); */
        /* field_0x2d0 = 6; */
        /* goto L_2a14; */
        /* L_2940:; */
        /* if (/ * blt * / 1) goto L_295c; */
        /* if (/ * bgt * / 1) goto L_295c; */
        /* field_0x13b8 = 1; */
        /* goto L_2974; */
        /* L_295c:; */
        /* field_0x2d4 = 0; */
        /* field_0x2d8 = 0; */
        /* field_0x2dc = 0; */
        /* L_2974:; */
        /* if (this->field_0x5d != 0) goto L_299c; */
        /* if (/ * beq * / 1) goto L_299c; */
        /* L_299c:; */
        /* if (0 == 0) goto L_2a14; */
        /* goto L_2a14; */
        /* L_29ac:; */
        /* if (/ * blt * / 1) goto L_29c8; */
        /* if (/ * bgt * / 1) goto L_29c8; */
        /* field_0x13b9 = 1; */
        /* goto L_29e0; */
        /* L_29c8:; */
        /* field_0x2d4 = 0; */
        /* field_0x2d8 = 0; */
        /* field_0x2dc = 0; */
        /* L_29e0:; */
        /* if (this->field_0x5d != 0) goto L_2a08; */
        /* if (/ * beq * / 1) goto L_2a08; */
        /* L_2a08:; */
        /* if (0 == 0) goto L_2a14; */
        /* L_2a14:; */
        /* field_0x2f8 = 0; */
        pos_move(arg0, 0);
        cLib_addCalcAngleS2((arg0 + 526), this->field_0x206, 2, 4096);
        /* if (1 == 0) goto L_2a64; */
        /* field_0x2ce = 0; */
        /* field_0x2d0 = 0; */
        /* field_0x304 = 0; */
        /* L_2a64:; */
        return 0;
}

/* 00002B68-00002D7C       .text attack2__FP9gnd_class */
void attack2(gnd_class*) {
        /* field_0x13c8 = (this->field_0x10c + this->field_0x40); */
        /* field_0x13c4 = (this->field_0x10c + this->field_0x40); */
        /* field_0x13ce = 0; */
        /* if (this->field_0x2d0 == 2) goto L_2bcc; */
        /* if (/ * bge * / 1) goto L_2af8; */
        /* if (this->field_0x2d0 == 0) goto L_2b04; */
        /* if (/ * bge * / 1) goto L_2b68; */
        /* goto L_2c58; */
        /* L_2af8:; */
        /* if (this->field_0x2d0 >= 4) goto L_2c58; */
        /* goto L_2c14; */
        /* L_2b04:; */
        /* anm_init(arg0, 54, 0, 19, arg4, arg5); */
        dComIfGp_getReverb((this->field_0x20a & 255));
        /* if (arg0 == 0) goto L_2b50; */
        /* goto L_2b54; */
        /* L_2b50:; */
        /* L_2b54:; */
        /* ((JAIZelBasic*)(this->field_0x0))->monsSeStart(18762, (arg0 + 608), -1, 0, dComIfGp_getReverb((this->field_0x20a & 255))); */
        /* field_0x2d0 = 2; */
        /* goto L_2c58; */
        /* L_2b68:; */
        /* anm_init(((JAIZelBasic*)(this->field_0x0))->monsSeStart(18762, (arg0 + 608), -1, 0, dComIfGp_getReverb((this->field_0x20a & 255))), 55, 0, 20); */
        dComIfGp_getReverb((this->field_0x20a & 255));
        /* if (arg0 == 0) goto L_2bb4; */
        /* goto L_2bb8; */
        /* L_2bb4:; */
        /* L_2bb8:; */
        /* ((JAIZelBasic*)(this->field_0x0))->monsSeStart(18759, (arg0 + 608), -1, 0, dComIfGp_getReverb((this->field_0x20a & 255))); */
        /* field_0x2d0 = 3; */
        /* goto L_2c58; */
        /* L_2bcc:; */
        /* if (/ * blt * / 1) goto L_2bdc; */
        /* field_0x13b8 = 1; */
        /* L_2bdc:; */
        /* if (this->field_0x5d != 0) goto L_2c04; */
        /* if (/ * beq * / 1) goto L_2c04; */
        /* L_2c04:; */
        /* if (0 == 0) goto L_2c58; */
        /* goto L_2c58; */
        /* L_2c14:; */
        /* if (/ * blt * / 1) goto L_2c24; */
        /* field_0x13b9 = 1; */
        /* L_2c24:; */
        /* if (this->field_0x5d != 0) goto L_2c4c; */
        /* if (/ * beq * / 1) goto L_2c4c; */
        /* L_2c4c:; */
        /* if (0 == 0) goto L_2c58; */
        /* L_2c58:; */
        /* if (1 == 0) goto L_2c78; */
        /* field_0x2ce = 0; */
        /* field_0x2d0 = 0; */
        /* field_0x304 = 0; */
        /* L_2c78:; */
        return 0;
}

/* 00002D7C-00003688       .text attackPZ__FP9gnd_class */
void attackPZ(gnd_class*) {
        /* _savegpr_26(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        __mi();
        PSVECSquareMag();
        /* if (/ * ble * / 1) goto L_2d58; */
        /* goto L_2d5c; */
        /* L_2d58:; */
        /* L_2d5c:; */
        /* cM_atan2s(this->field_0x0); */
        /* field_0x30c = 5; */
        /* field_0x13ce = 0; */
        /* if (this->field_0x2d0 > 11) goto L_3490; */
        /* if (/ * ble * / 1) goto L_2e6c; */
        /* mDoMtx_YrotS(this->field_0x0, cM_atan2s(this->field_0x0)); */
        MtxPosition();
        __pl();
        /* field_0x1f8 = 0; */
        /* field_0x1fc = 0; */
        /* field_0x200 = 0; */
        /* L_2e6c:; */
        /* field_0x20e = cM_atan2s(this->field_0x0); */
        /* field_0x206 = cM_atan2s(this->field_0x0); */
        /* field_0x31a = cM_atan2s(this->field_0x0); */
        /* field_0x2d0 = 1; */
        /* field_0x155e = 1; */
        /* field_0x302 = 20; */
        /* field_0x73f = 1; */
        /* field_0x254 = 0; */
        /* field_0x2f8 = 0; */
        /* ((JAIZelBasic*)(this->field_0x0))->changeBgmStatus(1); */
        /* field_0x2f0 = 0; */
        /* if (this->field_0x302 != 0) goto L_3490; */
        /* anm_init(_savegpr_26(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), 79, 0, -1); */
        dComIfGp_getReverb((this->field_0x20a & 255));
        /* if (_savegpr_26(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) == 0) goto L_2f24; */
        /* goto L_2f28; */
        /* L_2f24:; */
        /* L_2f28:; */
        /* ((JAIZelBasic*)(this->field_0x0))->monsSeStart(18772, (_savegpr_26(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 608), -1, 0, dComIfGp_getReverb((this->field_0x20a & 255))); */
        /* ((mDoExt_btkAnm*)(this->field_0x2bc))->init(this->field_0x4, ((dRes_control_c*)(((char*)&@stringBase0 + 0)))->getRes(98, ((char*)&g_dComIfG_gameInfo + -16460), 64), 1, 0, 0, -1, 1); */
        /* field_0x2d0 = 2; */
        /* goto L_3490; */
        /* field_0x2f0 = 0; */
        /* goto L_3490; */
        /* anm_init(_savegpr_26(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), 68, 0, 23); */
        /* field_0x2d0 = (this->field_0x2d0 + 1); */
        /* goto L_3490; */
        /* field_0x2f0 = 0; */
        /* field_0x258 = (this->field_0x1c + this->field_0x50); */
        /* if (/ * bne * / 1) goto L_3028; */
        /* field_0x224 = (this->field_0xe8 + this->field_0x58); */
        /* field_0x2f8 = 0; */
        /* splash_set(_savegpr_26(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* L_3028:; */
        /* if (this->field_0x5d != 0) goto L_3050; */
        /* if (/ * beq * / 1) goto L_3050; */
        /* L_3050:; */
        /* if (0 == 0) goto L_3490; */
        /* anm_init(_savegpr_26(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), 67, 2, -1); */
        /* field_0x2d0 = (this->field_0x2d0 + 1); */
        /* goto L_3490; */
        /* ((JAIZelBasic*)(this->field_0x0))->seStart(20824, (_savegpr_26(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 608), 0, dComIfGp_getReverb((this->field_0x20a & 255)), 0); */
        /* field_0x258 = (this->field_0x1c + this->field_0x50); */
        /* if (this->field_0x224 >= this->field_0x3c) goto L_3490; */
        /* anm_init(_savegpr_26(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), 65, 0, -1); */
        /* field_0x2d0 = (this->field_0x2d0 + 1); */
        /* goto L_3490; */
        /* ((JAIZelBasic*)(this->field_0x0))->seStart(20824, (_savegpr_26(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 608), 0, dComIfGp_getReverb((this->field_0x20a & 255)), 0); */
        /* field_0x258 = (this->field_0x1c + this->field_0x50); */
        /* field_0x2f0 = 0; */
        /* if (checkGround(_savegpr_26(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)) == 0) goto L_3490; */
        /* anm_init(_savegpr_26(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), 66, 0, -1); */
        /* field_0x2d0 = (this->field_0x2d0 + 1); */
        /* field_0x2e0 = 0; */
        /* field_0x2e4 = 0; */
        /* field_0x2e8 = 0; */
        /* splash_set(_savegpr_26(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* goto L_3490; */
        /* field_0x2f8 = 0; */
        /* field_0x2f0 = 0; */
        /* if (this->field_0x5d != 0) goto L_3208; */
        /* if (/ * beq * / 1) goto L_3208; */
        /* L_3208:; */
        /* if (1 == 0) goto L_3490; */
        /* field_0x2d0 = (this->field_0x2d0 + 1); */
        /* anm_init(_savegpr_26(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), 44, 0, 16); */
        /* goto L_3490; */
        /* if (/ * bne * / 1) goto L_3264; */
        /* if (/ * beq * / 1) goto L_3264; */
        /* L_3264:; */
        /* if (1 == 0) goto L_3490; */
        /* field_0x2d0 = (this->field_0x2d0 + 1); */
        /* anm_init(_savegpr_26(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), 45, 0, 17); */
        dComIfGp_getReverb((this->field_0x20a & 255));
        /* if (_savegpr_26(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) == 0) goto L_32c8; */
        /* goto L_32cc; */
        /* L_32c8:; */
        /* L_32cc:; */
        /* ((JAIZelBasic*)(this->field_0x0))->monsSeStart(18773, (_savegpr_26(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 608), -1, 0, dComIfGp_getReverb((this->field_0x20a & 255))); */
        /* field_0x13ec = ((dPa_control_c*)(this->field_0x5ab8))->set(0); */
        /* if (this->field_0x13ec == 0) goto L_3490; */
        /* goto L_3490; */
        /* if (/ * bne * / 1) goto L_33f4; */
        /* field_0x155c = 150; */
        /* field_0x8b0 = 1; */
        /* ((JAIZelBasic*)(this->field_0x0))->seStart(10280, (this->field_0x0 + 608), 0, dComIfGp_getReverb((this->field_0x20a & 255)), 0); */
        ((dVibration_c*)(((char*)&g_dComIfG_gameInfo + 22944)))->StartShock((this->field_0x88 + 4), -33);
        /* L_33f4:; */
        /* if (/ * bne * / 1) goto L_341c; */
        /* field_0x155e = 4; */
        /* field_0x1560 = 0; */
        /* L_341c:; */
        /* if (this->field_0x13ec == 0) goto L_3490; */
        /* if (this->field_0x5d != 0) goto L_3450; */
        /* if (/ * beq * / 1) goto L_3450; */
        /* L_3450:; */
        /* if (0 == 0) goto L_3478; */
        /* field_0x60 = -1; */
        /* field_0x13ec = 0; */
        /* goto L_3490; */
        /* L_3478:; */
        JPASetRMtxTVecfromMtx((this->field_0x8c + 1680), (this->field_0x13ec + 424), (this->field_0x13ec + 484));
        /* L_3490:; */
        /* field_0x254 = 0; */
        /* mDoMtx_YrotS(this->field_0x0, this->field_0x31a); */
        MtxPosition();
        __pl();
        /* field_0x2d4 = 0; */
        /* field_0x2d8 = 0; */
        /* field_0x2dc = 0; */
        /* pos_move(_savegpr_26(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), 0); */
        /* cLib_addCalcAngleS2((_savegpr_26(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 526), this->field_0x206, 4, 8192); */
        /* if (1 == 0) goto L_357c; */
        /* cLib_addCalc2((_savegpr_26(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 504)); */
        /* L_357c:; */
        /* return _restgpr_26(cLib_addCalc2((_savegpr_26(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 512))); */
}

/* 00003688-000038B0       .text attack_last__FP9gnd_class */
void attack_last(gnd_class*) {
        /* _savegpr_29(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* field_0x13c8 = (this->field_0x10c + this->field_0x40); */
        /* field_0x13ce = 0; */
        /* if (this->field_0x2d0 == 1) goto L_3688; */
        /* if (/ * bge * / 1) goto L_3618; */
        /* if (this->field_0x2d0 >= 0) goto L_3624; */
        /* goto L_3784; */
        /* L_3618:; */
        /* if (this->field_0x2d0 >= 3) goto L_3784; */
        /* goto L_36fc; */
        /* L_3624:; */
        /* anm_init(_savegpr_29(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), 82, 0, -1); */
        dComIfGp_getReverb((this->field_0x20a & 255));
        /* if (_savegpr_29(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) == 0) goto L_3670; */
        /* goto L_3674; */
        /* L_3670:; */
        /* L_3674:; */
        /* ((JAIZelBasic*)(this->field_0x0))->monsSeStart(18765, (_savegpr_29(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 608), -1, 0, dComIfGp_getReverb((this->field_0x20a & 255))); */
        /* field_0x2d0 = 1; */
        /* goto L_3784; */
        /* L_3688:; */
        /* if (this->field_0x5d != 0) goto L_36b0; */
        /* if (/ * beq * / 1) goto L_36b0; */
        /* L_36b0:; */
        /* if (1 == 0) goto L_36dc; */
        /* anm_init(_savegpr_29(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), 81, 0, 30); */
        /* field_0x2d0 = 2; */
        /* L_36dc:; */
        /* if (/ * ble * / 1) goto L_3784; */
        /* field_0x13cf = 4; */
        /* goto L_3784; */
        /* L_36fc:; */
        /* if (/ * blt * / 1) goto L_3724; */
        /* if (/ * bgt * / 1) goto L_3724; */
        /* field_0x13cf = 4; */
        /* L_3724:; */
        /* if (/ * blt * / 1) goto L_373c; */
        /* if (/ * bgt * / 1) goto L_373c; */
        /* field_0x13b9 = 1; */
        /* L_373c:; */
        /* if (this->field_0x5d != 0) goto L_3764; */
        /* if (/ * beq * / 1) goto L_3764; */
        /* L_3764:; */
        /* if (0 == 0) goto L_3784; */
        /* field_0x2ce = 0; */
        /* field_0x2d0 = 0; */
        /* field_0x304 = 0; */
        /* L_3784:; */
        /* if (/ * beq * / 1) goto L_37ac; */
        /* field_0x2ce = 30; */
        /* field_0x2d0 = 0; */
        /* field_0x30c = 5; */
        /* field_0x13ce = 0; */
        /* L_37ac:; */
        return _restgpr_29(0, 0);
}

/* 000038B0-000042D0       .text defence0__FP9gnd_class */
void defence0(gnd_class*) {
        /* _savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* field_0x3d7 = 10; */
        /* fopAcM_searchActorDistance(_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), this->field_0x5b38); */
        /* if (this->field_0x1fc <= (this->field_0x38 + (this->field_0xb0 + this->field_0xc54))) goto L_384c; */
        /* if (this->field_0x2d0 >= 15) goto L_384c; */
        /* field_0x2d0 = 20; */
        /* L_384c:; */
        /* if (this->field_0x2d0 > 22) goto L_40ec; */
        /* if (this->field_0x3d8 != 2) goto L_38b8; */
        /* if ((this->field_0x1fc - this->field_0xc54) <= (this->field_0x11c + this->field_0x58)) goto L_38b8; */
        /* field_0x3dc = 0; */
        /* field_0x3d5 = 2; */
        /* goto L_3930; */
        /* L_38b8:; */
        /* if (this->field_0x290 != 15) goto L_38d8; */
        cM_rndF(((char*)&g_regHIO + 0));
        /* if (/ * blt * / 1) goto L_3904; */
        /* L_38d8:; */
        /* if (this->field_0x3db != 1) goto L_3930; */
        cM_rndF(cM_rndF(((char*)&g_regHIO + 0)));
        /* if (/ * bge * / 1) goto L_3930; */
        /* if (this->field_0x3d8 != 2) goto L_3930; */
        /* L_3904:; */
        /* field_0x3dc = 5; */
        /* field_0x3de = ((fopAcM_searchActorAngleY(_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), this->field_0x5b38) + this->field_0x8c) + 30720); */
        /* L_3930:; */
        /* anm_init(_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), ((char*)&bougyo_d + 0), 0, -1); */
        /* L_3960:; */
        /* field_0x3da = 0; */
        /* if (this->field_0x46 == 0) goto L_3a9c; */
        /* if (this->field_0x3dc == 5) goto L_3a9c; */
        /* if ((this->field_0x3d5 & 255) < 3) goto L_3a9c; */
        cM_rndF(((char*)&l_HIO + 0));
        /* if (/ * bge * / 1) goto L_3a9c; */
        cM_rndF(cM_rndF(((char*)&l_HIO + 0)));
        /* if (/ * bge * / 1) goto L_39cc; */
        /* field_0x3e0 = 0; */
        /* goto L_39d4; */
        /* L_39cc:; */
        /* field_0x3e0 = 0; */
        /* L_39d4:; */
        /* if (this->field_0x12 != 1) goto L_3a20; */
        /* field_0x224 = (this->field_0x28 + this->field_0x28); */
        /* field_0x2f8 = (this->field_0xe0 + this->field_0x2c); */
        /* field_0x3da = (this->field_0x88 + 10); */
        /* goto L_3a48; */
        /* L_3a20:; */
        /* field_0x224 = (this->field_0x40 + this->field_0x30); */
        /* field_0x2f8 = (this->field_0xc4 + this->field_0x34); */
        /* L_3a48:; */
        /* field_0x310 = 0; */
        /* splash_set(_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        dComIfGp_getReverb((this->field_0x20a & 255));
        /* if (_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) == 0) goto L_3a8c; */
        /* goto L_3a90; */
        /* L_3a8c:; */
        /* L_3a90:; */
        /* ((JAIZelBasic*)(this->field_0x0))->monsSeStart(18774, (_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 608), -1, 0, dComIfGp_getReverb((this->field_0x20a & 255))); */
        /* goto L_3adc; */
        /* L_3a9c:; */
        dComIfGp_getReverb((this->field_0x20a & 255));
        /* if (_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) == 0) goto L_3ad0; */
        /* goto L_3ad4; */
        /* L_3ad0:; */
        /* L_3ad4:; */
        /* ((JAIZelBasic*)(this->field_0x0))->monsSeStart(18766, (_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 608), -1, 0, dComIfGp_getReverb((this->field_0x20a & 255))); */
        /* L_3adc:; */
        /* field_0x2d0 = 10; */
        /* goto L_40ec; */
        /* if (this->field_0x3d8 != 2) goto L_3b6c; */
        /* if ((this->field_0x1fc - this->field_0xc54) <= (this->field_0x11c + this->field_0x58)) goto L_3b6c; */
        /* if (this->field_0x3dc == 0) goto L_3b6c; */
        /* field_0x3dc = 0; */
        /* field_0x3d5 = 2; */
        /* anm_init(_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), ((char*)&bougyo_d + 0), 0, -1); */
        /* goto L_3960; */
        /* L_3b6c:; */
        /* field_0x258 = (this->field_0x12c + this->field_0x38); */
        /* if (checkGround(_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)) == 0) goto L_3c80; */
        /* field_0x2f8 = 0; */
        /* if (this->field_0x12 != 0) goto L_3c28; */
        /* if (/ * bge * / 1) goto L_3c80; */
        /* if (this->field_0x3dc == 5) goto L_3c80; */
        /* if (this->field_0x304 != ((this->field_0x8e + 1) & 65535)) goto L_3c80; */
        /* field_0x2ce = 3; */
        /* cM_rndF(this->field_0x8e); */
        /* if (/ * bge * / 1) goto L_3c14; */
        /* field_0x2d0 = 0; */
        /* goto L_3c1c; */
        /* L_3c14:; */
        /* field_0x2d0 = 1; */
        /* L_3c1c:; */
        /* field_0x13ce = 0; */
        /* goto L_3c80; */
        /* L_3c28:; */
        /* if (this->field_0x3da == 0) goto L_3c80; */
        /* field_0x3da = (this->field_0x3da + -1); */
        /* if (this->field_0x3da != 0) goto L_3c80; */
        /* field_0x2ce = 3; */
        /* cM_rndF(this->field_0x3da); */
        /* if (/ * bge * / 1) goto L_3c70; */
        /* field_0x2d0 = 0; */
        /* goto L_3c78; */
        /* L_3c70:; */
        /* field_0x2d0 = 1; */
        /* L_3c78:; */
        /* field_0x13ce = 0; */
        /* L_3c80:; */
        /* if (this->field_0x302 != 0) goto L_3cc0; */
        /* if (this->field_0x304 != 0) goto L_3cc0; */
        /* if (checkGround(_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)) == 0) goto L_3cc0; */
        /* if (this->field_0x3da != 0) goto L_3cc0; */
        /* goto L_40ec; */
        /* L_3cc0:; */
        /* if (this->field_0x3d6 == 0) goto L_40ec; */
        /* field_0x3d6 = 0; */
        /* if (checkGround(_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)) == 0) goto L_3d64; */
        /* if ((this->field_0x3d5 & 255) < 8) goto L_3d28; */
        /* cM_rndF(checkGround(_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7))); */
        /* if (/ * bge * / 1) goto L_3d28; */
        /* field_0x2d0 = 15; */
        /* field_0x3d5 = 0; */
        /* goto L_3d64; */
        /* L_3d28:; */
        /* if ((this->field_0x3d5 & 255) < 4) goto L_3d64; */
        /* cM_rndF(cM_rndF(checkGround(_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))); */
        /* if (/ * bge * / 1) goto L_3d64; */
        /* field_0x13d0 = (this->field_0x90 + 13); */
        /* L_3d64:; */
        /* if (1 != 0) goto L_3dd0; */
        /* field_0x2d0 = 0; */
        /* if ((this->field_0x3d5 & 255) > 1) goto L_3d8c; */
        /* field_0x3dc = 0; */
        /* goto L_3dd0; */
        /* L_3d8c:; */
        /* L_3d90:; */
        cM_rndF(0);
        /* if (/ * beq * / 1) goto L_3dc4; */
        /* goto L_3dd0; */
        /* L_3dc4:; */
        /* if ((0 + 1) < 20) goto L_3d90; */
        /* L_3dd0:; */
        /* field_0x304 = (this->field_0x8c + 25); */
        /* if (this->field_0x2d0 >= 2) goto L_3e34; */
        dComIfGp_getReverb((this->field_0x20a & 255));
        /* if (_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) == 0) goto L_3e24; */
        /* goto L_3e28; */
        /* L_3e24:; */
        /* L_3e28:; */
        /* ((JAIZelBasic*)(this->field_0x0))->monsSeStart(18571, (_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 608), -1, 0, dComIfGp_getReverb((this->field_0x20a & 255))); */
        /* goto L_40ec; */
        /* L_3e34:; */
        dComIfGp_getReverb((this->field_0x20a & 255));
        /* if (_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) == 0) goto L_3e68; */
        /* goto L_3e6c; */
        /* L_3e68:; */
        /* L_3e6c:; */
        /* ((JAIZelBasic*)(this->field_0x0))->monsSeStart(18570, (_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 608), -1, 0, dComIfGp_getReverb((this->field_0x20a & 255))); */
        /* goto L_40ec; */
        /* anm_init(_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), 48, 0, 18); */
        /* field_0x2d0 = (this->field_0x2d0 + 1); */
        dComIfGp_getReverb((this->field_0x20a & 255));
        /* if (_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) == 0) goto L_3ed4; */
        /* goto L_3ed8; */
        /* L_3ed4:; */
        /* L_3ed8:; */
        /* ((JAIZelBasic*)(this->field_0x0))->monsSeStart(18767, (_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 608), -1, 0, dComIfGp_getReverb((this->field_0x20a & 255))); */
        /* field_0x224 = (this->field_0x138 + this->field_0x20); */
        /* field_0x254 = (this->field_0x44 + this->field_0x24); */
        /* field_0x2f8 = (this->field_0x44 + this->field_0x24); */
        /* field_0x206 = cM_atan2s(((char*)&g_regHIO + 0)); */
        cM_rndF(cM_atan2s(((char*)&g_regHIO + 0)));
        /* if (/ * bge * / 1) goto L_3f44; */
        /* field_0x304 = 100; */
        /* goto L_3f4c; */
        /* L_3f44:; */
        /* field_0x304 = 0; */
        /* L_3f4c:; */
        /* field_0x13ce = 0; */
        /* splash_set(_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* field_0x31c = 0; */
        /* goto L_40ec; */
        /* field_0x258 = (this->field_0x2c + this->field_0x28); */
        /* if (checkGround(_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)) == 0) goto L_4000; */
        /* if (this->field_0x31c != 0) goto L_3fb0; */
        /* splash_set(_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* field_0x31c = 1; */
        /* L_3fb0:; */
        /* field_0x2f8 = 0; */
        /* if (this->field_0x5d != 0) goto L_3fdc; */
        /* if (/ * beq * / 1) goto L_3fdc; */
        /* L_3fdc:; */
        /* if (0 == 0) goto L_40ec; */
        /* if (this->field_0x304 == 0) goto L_3ff8; */
        /* goto L_40ec; */
        /* L_3ff8:; */
        /* goto L_40ec; */
        /* L_4000:; */
        /* field_0x13ce = 0; */
        /* goto L_40ec; */
        /* anm_init(_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), 86, 0, -1); */
        /* field_0x2d0 = (this->field_0x2d0 + 1); */
        /* goto L_40ec; */
        /* if (this->field_0x5d != 0) goto L_4060; */
        /* if (/ * beq * / 1) goto L_4060; */
        /* L_4060:; */
        /* if (0 == 0) goto L_4070; */
        /* goto L_40ec; */
        /* L_4070:; */
        /* if (checkGround(_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), 0) == 0) goto L_40ec; */
        /* field_0x2f8 = 0; */
        /* anm_init(_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), 49, 0, -1); */
        /* field_0x2d0 = (this->field_0x2d0 + 1); */
        /* goto L_40ec; */
        /* if (this->field_0x5d != 0) goto L_40e0; */
        /* if (/ * beq * / 1) goto L_40e0; */
        /* L_40e0:; */
        /* if (0 == 0) goto L_40ec; */
        /* L_40ec:; */
        /* if (this->field_0x3dc == 5) goto L_412c; */
        /* cLib_addCalcAngleS2((_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 526), fopAcM_searchActorAngleY(_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), this->field_0x5b38), 2, ((this->field_0x94 + 8192) & 65535)); */
        /* goto L_4150; */
        /* L_412c:; */
        /* cLib_addCalcAngleS2((_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 526), this->field_0x3de, 2, ((this->field_0x94 + 8192) & 65535)); */
        /* L_4150:; */
        /* field_0x13b8 = 10; */
        /* field_0x13b9 = 11; */
        /* pos_move(_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), 1); */
        /* if (1 == 0) goto L_41c4; */
        /* if ((1 & 255) != 1) goto L_4198; */
        /* field_0x2ce = 0; */
        /* field_0x2d0 = 0; */
        /* goto L_41c4; */
        /* L_4198:; */
        /* field_0x2ce = 1; */
        /* anm_init(_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), 43, 0, 15); */
        /* field_0x2d0 = 8; */
        /* L_41c4:; */
        /* return _restgpr_27(anm_init(_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), 43, 0, 15)); */
}

/* 000042D0-00004330       .text finish__FP9gnd_class */
void finish(gnd_class*) {
        /* field_0x30c = 5; */
        /* field_0x13ce = 0; */
        /* if (this->field_0x2d0 == 2) goto L_4238; */
        /* if (this->field_0x2d0 == 0) goto L_4218; */
        /* if (/ * bge * / 1) goto L_422c; */
        return arg0;
}

/* 00004330-00004760       .text damage__FP9gnd_class */
void damage(gnd_class*) {
        /* _savegpr_29(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* field_0x13ce = 0; */
        /* if (this->field_0x3d9 == 0) goto L_42ac; */
        /* if ((this->field_0x3d9 & 255) != 1) goto L_4298; */
        /* field_0x2ce = 4; */
        /* field_0x2d0 = 0; */
        /* field_0x13ce = 0; */
        /* goto L_42a0; */
        /* L_4298:; */
        /* field_0x155e = 10; */
        /* L_42a0:; */
        /* field_0x3d9 = 0; */
        /* goto L_465c; */
        /* L_42ac:; */
        /* if (this->field_0x2d0 > 20) goto L_4648; */
        /* anm_init(_savegpr_29(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), 56, 0, -1); */
        /* field_0x2d0 = 1; */
        dComIfGp_getReverb((this->field_0x20a & 255));
        /* if (_savegpr_29(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) == 0) goto L_4334; */
        /* goto L_4338; */
        /* L_4334:; */
        /* L_4338:; */
        /* ((JAIZelBasic*)(this->field_0x0))->monsSeStart(18770, (_savegpr_29(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 608), -1, 0, dComIfGp_getReverb((this->field_0x20a & 255))); */
        /* if (this->field_0x5d != 0) goto L_4368; */
        /* if (/ * beq * / 1) goto L_4368; */
        /* L_4368:; */
        /* if (0 == 0) goto L_4648; */
        /* anm_init(_savegpr_29(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), 57, 2, -1); */
        /* field_0x2d0 = 9; */
        /* field_0x304 = 10; */
        /* goto L_4648; */
        /* anm_init(anm_init(_savegpr_29(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), 57, 2, -1), 58, 0, -1); */
        dComIfGp_getReverb((this->field_0x20a & 255));
        /* if (_savegpr_29(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) == 0) goto L_43ec; */
        /* goto L_43f0; */
        /* L_43ec:; */
        /* L_43f0:; */
        /* ((JAIZelBasic*)(this->field_0x0))->monsSeStart(18769, (_savegpr_29(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 608), -1, 0, dComIfGp_getReverb((this->field_0x20a & 255))); */
        /* field_0x2d0 = 6; */
        /* if (this->field_0x5d != 0) goto L_4438; */
        /* if (/ * beq * / 1) goto L_4438; */
        /* L_4438:; */
        /* if (0 == 0) goto L_4648; */
        /* anm_init(_savegpr_29(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), 59, 2, -1); */
        /* field_0x2d0 = 10; */
        /* field_0x304 = 15; */
        /* goto L_4648; */
        /* if (this->field_0x304 != 0) goto L_451c; */
        dComIfGp_getReverb((this->field_0x20a & 255));
        /* if (_savegpr_29(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) == 0) goto L_44b0; */
        /* goto L_44b4; */
        /* L_44b0:; */
        /* L_44b4:; */
        /* ((JAIZelBasic*)(this->field_0x0))->monsSeStart(18771, (_savegpr_29(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 608), -1, 0, dComIfGp_getReverb((this->field_0x20a & 255))); */
        /* field_0x304 = 20; */
        /* goto L_451c; */
        /* if (this->field_0x304 != 0) goto L_451c; */
        dComIfGp_getReverb((this->field_0x20a & 255));
        /* if (_savegpr_29(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) == 0) goto L_4508; */
        /* goto L_450c; */
        /* L_4508:; */
        /* L_450c:; */
        /* ((JAIZelBasic*)(this->field_0x0))->monsSeStart(18771, (_savegpr_29(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 608), -1, 0, dComIfGp_getReverb((this->field_0x20a & 255))); */
        /* field_0x304 = 30; */
        /* L_451c:; */
        /* if (this->field_0x155e != 0) goto L_45bc; */
        /* if (this->field_0x302 >= 30) goto L_45bc; */
        /* if ((this->field_0x285 & 255) >= 25) goto L_45bc; */
        /* if (this->field_0x3d8 != 2) goto L_45bc; */
        /* if (player_view_check(_savegpr_29(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), fopAcM_searchActorAngleY(_savegpr_29(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), this->field_0x5b38)) == 0) goto L_45bc; */
        /* fopAcM_searchActorDistance(_savegpr_29(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), this->field_0x5b38); */
        /* if (/ * bge * / 1) goto L_45bc; */
        /* field_0x2ce = 5; */
        /* field_0x2d0 = 0; */
        /* field_0x13ce = 1; */
        /* field_0x30e = 30; */
        /* goto L_465c; */
        /* L_45bc:; */
        /* if (this->field_0x302 != 0) goto L_4648; */
        /* field_0x2ce = 0; */
        /* field_0x2d0 = 0; */
        /* field_0x13ce = 1; */
        /* field_0x30e = 30; */
        /* goto L_4648; */
        anm_init(((char*)&l_HIO + 0), 60, 0, -1);
        dComIfGp_getReverb((this->field_0x20a & 255));
        /* if (_savegpr_29(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) == 0) goto L_4634; */
        /* goto L_4638; */
        /* L_4634:; */
        /* L_4638:; */
        /* ((JAIZelBasic*)(this->field_0x0))->monsSeStart(18768, (_savegpr_29(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 608), -1, 0, dComIfGp_getReverb((this->field_0x20a & 255))); */
        /* field_0x2d0 = 10; */
        /* L_4648:; */
        /* pos_move(_savegpr_29(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), 1); */
        /* field_0x2f8 = 0; */
        /* L_465c:; */
        /* return _restgpr_29(pos_move(_savegpr_29(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), 1)); */
}

/* 00004760-0000501C       .text damage_check__FP9gnd_class */
void damage_check(gnd_class*) {
        /* ((dCcD_GStts*)((_savegpr_21(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 3488)))->Move(); */
        /* L_46c4:; */
        /* if (this->field_0x1164 == 0) goto L_47dc; */
        /* def_se_set(_savegpr_21(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), ((dCcD_GObjInf*)(((_savegpr_21(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 0) + 4424)))->GetTgHitObj(), 64); */
        /* field_0x310 = (this->field_0x44 + this->field_0x58); */
        /* field_0x314 = (fopAcM_searchActorAngleY(_savegpr_21(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), this->field_0x5b38) + -32768); */
        /* field_0x3d5 = (this->field_0x3d5 + 1); */
        /* field_0x3d6 = 1; */
        dKy_SordFlush_set();
        /* ((dPa_control_c*)(this->field_0x5ab8))->set(0, 12, ((_savegpr_21(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 0) + 4424), (_savegpr_21(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 524)); */
        /* ((dPa_control_c*)(this->field_0x5ab8))->set(0); */
        /* L_47dc:; */
        /* if (this->field_0x114c == 0) goto L_48bc; */
        /* ((dCcD_GObjInf*)(((_savegpr_21(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 0) + 4424)))->GetAtHitObj(); */
        /* if (this->field_0x44 != 0) goto L_4804; */
        return 0;
        /* L_4804:; */
        /* if (this->field_0x8 != 169) goto L_48bc; */
        /* if (this->field_0x2d0 != 22) goto L_4858; */
        /* field_0x3d4 = 1; */
        ((dVibration_c*)(((char*)&g_dComIfG_gameInfo + 22944)))->StartShock((this->field_0x88 + 6), -33);
        /* goto L_48bc; */
        /* L_4858:; */
        /* if (this->field_0x5b38 == 0) goto L_48bc; */
        ((dVibration_c*)(((char*)&g_dComIfG_gameInfo + 22944)))->StartShock((this->field_0x88 + 3), -33);
        /* if (this->field_0x2d0 == 2) goto L_48b4; */
        /* if (this->field_0x2d0 != 7) goto L_48bc; */
        /* L_48b4:; */
        /* field_0x3d4 = 1; */
        /* L_48bc:; */
        /* if ((0 + 1) < 2) goto L_46c4; */
        /* if (this->field_0x30c != 0) goto L_4ee8; */
        /* if (this->field_0x1038 == 0) goto L_4b54; */
        /* ((dCcD_GObjInf*)((_savegpr_21(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 4124)))->GetTgHitObj(); */
        /* if (this->field_0x44 != 0) goto L_4908; */
        /* goto L_490c; */
        /* L_4908:; */
        /* L_490c:; */
        /* if (this->field_0xc == 0) goto L_4980; */
        /* if (this->field_0x8 != 478) goto L_4980; */
        /* if (this->field_0x290 == 0) goto L_4980; */
        /* if ((this->field_0x206 - this->field_0x20e) != 0) goto L_4948; */
        /* L_4948:; */
        /* if ((((-(this->field_0x206 - this->field_0x20e)) & 65535) & 65535) >= 16384) goto L_4964; */
        /* if ((this->field_0x3d8 & 255) < 2) goto L_4970; */
        /* L_4964:; */
        /* if (this->field_0x664 == 0) goto L_4978; */
        /* L_4970:; */
        /* goto L_4980; */
        /* L_4978:; */
        /* field_0x13ce = 2; */
        /* L_4980:; */
        /* if (1 != 0) goto L_4b54; */
        /* if (this->field_0x13ce == 0) goto L_4b54; */
        /* field_0x2ce = 10; */
        /* if (this->field_0x13ce != 1) goto L_4b40; */
        /* def_se_set(_savegpr_21(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), ((dCcD_GObjInf*)((_savegpr_21(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 4124)))->GetTgHitObj(), 64); */
        /* field_0x310 = (this->field_0x44 + this->field_0x58); */
        /* field_0x314 = (fopAcM_searchActorAngleY(_savegpr_21(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), this->field_0x5b38) + -32768); */
        dKy_SordFlush_set();
        /* ((dPa_control_c*)(this->field_0x5ab8))->set(0, 12, (_savegpr_21(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 4328), (_savegpr_21(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 524)); */
        /* ((dPa_control_c*)(this->field_0x5ab8))->set(0); */
        dComIfGp_getReverb((this->field_0x20a & 255));
        /* if (_savegpr_21(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) == 0) goto L_4ad0; */
        /* goto L_4ad4; */
        /* L_4ad0:; */
        /* L_4ad4:; */
        /* cM_rndF(((JAIZelBasic*)(this->field_0x0))->monsSeStart(18766, (_savegpr_21(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 608), -1, 0, dComIfGp_getReverb((this->field_0x20a & 255)))); */
        /* if (/ * bge * / 1) goto L_4b10; */
        /* anm_init(_savegpr_21(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), 46, 0, -1); */
        /* goto L_4b2c; */
        /* L_4b10:; */
        /* anm_init(_savegpr_21(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), 47, 0, -1); */
        /* L_4b2c:; */
        /* field_0x302 = 20; */
        /* field_0x2d0 = 10; */
        /* goto L_4ee8; */
        /* L_4b40:; */
        /* field_0x2d0 = 15; */
        /* field_0x3d5 = 0; */
        /* goto L_4ee8; */
        /* L_4b54:; */
        /* if (this->field_0x30e == 0) goto L_4b6c; */
        /* if (this->field_0x1038 == 0) goto L_4ee8; */
        /* L_4b6c:; */
        /* if (this->field_0xddc != 0) goto L_4b94; */
        /* if (this->field_0xf0c != 0) goto L_4b94; */
        /* if (this->field_0x1038 == 0) goto L_4ee8; */
        /* L_4b94:; */
        /* field_0x30c = 7; */
        /* if (this->field_0xf0c == 0) goto L_4bc8; */
        /* ((dCcD_GObjInf*)((_savegpr_21(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 3824)))->GetTgHitObj(); */
        /* goto L_4c04; */
        /* L_4bc8:; */
        /* if (this->field_0x1038 == 0) goto L_4bf0; */
        /* ((dCcD_GObjInf*)((_savegpr_21(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 4124)))->GetTgHitObj(); */
        /* goto L_4c04; */
        /* L_4bf0:; */
        /* ((dCcD_GObjInf*)((_savegpr_21(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 3520)))->GetTgHitObj(); */
        /* L_4c04:; */
        /* cc_at_check(_savegpr_21(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* if (1 == 0) goto L_4d1c; */
        /* if (cc_at_check(_savegpr_21(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)) == 0) goto L_4d1c; */
        /* ((dPa_control_c*)(this->field_0x5ab8))->set(0); */
        /* field_0x142e = 1; */
        /* field_0x142c = (this->field_0x50c + 30); */
        /* L_4cd0:; */
        /* cM_rndFX(cM_rndFX(cM_rndFX(this->field_0x50c))); */
        /* if ((0 + 1) < 15) goto L_4cd0; */
        /* field_0x15ac = (this->field_0x28 + this->field_0x58); */
        /* goto L_4dd8; */
        /* L_4d1c:; */
        /* if (this->field_0x290 == 5) goto L_4d34; */
        /* if ((this->field_0x290 & 16777215) != 15) goto L_4d78; */
        /* L_4d34:; */
        /* ((dPa_control_c*)(this->field_0x5ab8))->set(0); */
        /* goto L_4dd8; */
        /* L_4d78:; */
        /* if (((dPa_control_c*)(this->field_0x5ab8))->set(0) == 0) goto L_4dd8; */
        /* L_4dd8:; */
        /* if ((this->field_0x285 & 255) > 25) goto L_4e0c; */
        /* if (this->field_0x3d8 != 1) goto L_4e50; */
        /* field_0x285 = 25; */
        /* field_0x3d8 = 2; */
        /* field_0x3d9 = 2; */
        /* goto L_4e50; */
        /* L_4e0c:; */
        /* if (2 > 50) goto L_4e50; */
        /* if (this->field_0x3d8 != 0) goto L_4e50; */
        /* if (this->field_0x8 != 478) goto L_4e48; */
        /* if (this->field_0x290 == 0) goto L_4e50; */
        /* field_0x3d9 = 1; */
        /* goto L_4e50; */
        /* L_4e48:; */
        /* field_0x285 = 50; */
        /* L_4e50:; */
        /* if (this->field_0x285 != 0) goto L_4e64; */
        /* field_0x285 = 0; */
        /* L_4e64:; */
        /* if (this->field_0x2ce == 11) goto L_4ea0; */
        /* field_0x2ce = 11; */
        /* if (1 == 0) goto L_4e8c; */
        /* field_0x2d0 = 5; */
        /* goto L_4e94; */
        /* L_4e8c:; */
        /* field_0x2d0 = 0; */
        /* L_4e94:; */
        /* field_0x13ce = 0; */
        /* goto L_4ea8; */
        /* L_4ea0:; */
        /* field_0x2d0 = 20; */
        /* L_4ea8:; */
        dComIfGp_getReverb((this->field_0x20a & 255));
        /* if (_savegpr_21(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) == 0) goto L_4edc; */
        /* goto L_4ee0; */
        /* L_4edc:; */
        /* L_4ee0:; */
        /* L_4ee8:; */
        /* return _restgpr_21(((JAIZelBasic*)(this->field_0x0))->monsSeStart(18441, (_savegpr_21(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 608), -1, 0, dComIfGp_getReverb((this->field_0x20a & 255)))); */
}

/* 0000501C-0000509C       .text shot_s_sub__FPvPv */
void shot_s_sub(void*, void*) {
        /* if (fopAc_IsActor(arg0) == 0) goto L_4f2c; */
        /* if (this->field_0x8 == 452) goto L_4f48; */
        /* L_4f2c:; */
        /* if (this->field_0x8 == 436) goto L_4f48; */
        /* if (this->field_0x8 == 170) goto L_4f48; */
        /* if (this->field_0x8 != 478) goto L_4f68; */
        /* L_4f48:; */
        /* if (this->field_0x254 != this->field_0x0) goto L_4f68; */
        /* goto L_4f6c; */
        /* L_4f68:; */
        /* L_4f6c:; */
        return 0;
}

/* 0000509C-000050B0       .text demowait__FP9gnd_class */
void demowait(gnd_class*) {
    /* field_0x30c = 5; */
    /* field_0x13ce = 0; */
    return arg0;
}

/* 000050B0-000050C8       .text yawait__FP9gnd_class */
void yawait(gnd_class*) {
    /* field_0x1fc = 0; */
    /* field_0x13ce = 0; */
    return arg0;
}

/* 000050C8-000054F0       .text gnd_move__FP9gnd_class */
void gnd_move(gnd_class*) {
        /* _savegpr_26(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* if (this->field_0x2ce > 30) goto L_5054; */
        /* move0(_savegpr_26(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* goto L_5054; */
        /* attack0(move0(_savegpr_26(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7))); */
        /* goto L_5054; */
        /* attack1(attack0(move0(_savegpr_26(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))); */
        /* goto L_5054; */
        /* attack2(attack1(attack0(move0(_savegpr_26(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7))))); */
        /* goto L_5054; */
        /* attackPZ(attack2(attack1(attack0(move0(_savegpr_26(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))))); */
        /* goto L_5054; */
        /* attack_last(attackPZ(attack2(attack1(attack0(move0(_savegpr_26(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7))))))); */
        /* goto L_5054; */
        /* defence0(attack_last(attackPZ(attack2(attack1(attack0(move0(_savegpr_26(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))))))); */
        /* goto L_5054; */
        /* damage(defence0(attack_last(attackPZ(attack2(attack1(attack0(move0(_savegpr_26(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7))))))))); */
        /* goto L_5054; */
        /* demowait(damage(defence0(attack_last(attackPZ(attack2(attack1(attack0(move0(_savegpr_26(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))))))))); */
        /* goto L_5054; */
        /* yawait(demowait(damage(defence0(attack_last(attackPZ(attack2(attack1(attack0(move0(_savegpr_26(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7))))))))))); */
        /* goto L_5054; */
        /* finish(yawait(demowait(damage(defence0(attack_last(attackPZ(attack2(attack1(attack0(move0(_savegpr_26(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))))))))))); */
        /* goto L_53bc; */
        /* L_5054:; */
        /* if ((this->field_0x3d8 & 255) < 2) goto L_5078; */
        /* if (this->field_0x2ce == 11) goto L_5078; */
        /* field_0x30e = 3; */
        /* L_5078:; */
        /* if (this->field_0x290 == 5) goto L_5090; */
        /* if ((this->field_0x290 & 16777215) != 15) goto L_50ac; */
        /* L_5090:; */
        /* if ((this->field_0x3d8 & 255) >= 2) goto L_50ac; */
        /* field_0x13ce = 0; */
        /* field_0x3d7 = 0; */
        /* L_50ac:; */
        /* if (this->field_0x13ce == 0) goto L_5304; */
        /* fpcEx_Search(((char*)&shot_s_sub__FPvPv + 0), _savegpr_26(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* if (/ * beq * / 1) goto L_52a0; */
        __mi();
        /* if (this->field_0x8 != 478) goto L_521c; */
        PSVECSquareMag();
        /* if (/ * ble * / 1) goto L_5174; */
        /* L_5174:; */
        /* if (this->field_0xc >= (this->field_0xe8 * this->field_0x254)) goto L_52a0; */
        /* if (this->field_0x290 == 0) goto L_52a0; */
        /* if ((this->field_0x3d8 & 255) >= 2) goto L_52a0; */
        /* if ((this->field_0x206 - this->field_0x20e) != 0) goto L_51c0; */
        /* L_51c0:; */
        /* if ((((-(this->field_0x206 - this->field_0x20e)) & 65535) & 65535) >= 16384) goto L_51d8; */
        /* field_0x13ce = 0; */
        /* goto L_52a0; */
        /* L_51d8:; */
        /* field_0x2ce = 10; */
        /* if (checkGround(_savegpr_26(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)) == 0) goto L_5200; */
        /* field_0x2d0 = 15; */
        /* goto L_5208; */
        /* L_5200:; */
        /* field_0x2d0 = 0; */
        /* L_5208:; */
        /* field_0x30c = 30; */
        /* field_0x3db = 0; */
        /* goto L_52a0; */
        /* L_521c:; */
        PSVECSquareMag();
        /* if (/ * ble * / 1) goto L_5288; */
        /* L_5288:; */
        /* if (this->field_0x8 >= (this->field_0xe8 * this->field_0x254)) goto L_52a0; */
        /* L_52a0:; */
        /* fopAcM_searchActorDistance(_savegpr_26(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), this->field_0x5b38); */
        /* if (1 != 0) goto L_52d4; */
        /* if (this->field_0x290 == 0) goto L_5304; */
        /* if (/ * bge * / 1) goto L_5304; */
        /* L_52d4:; */
        /* if (this->field_0x2ce == 10) goto L_52fc; */
        /* field_0x2ce = 10; */
        /* field_0x2d0 = 0; */
        /* field_0x3d5 = 0; */
        /* field_0x3db = 0; */
        /* field_0x3dc = 0; */
        /* L_52fc:; */
        /* field_0x302 = 10; */
        /* L_5304:; */
        /* damage_check(_savegpr_26(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* field_0x13ce = 1; */
        /* if (/ * beq * / 1) goto L_534c; */
        /* field_0x1f8 = (this->field_0x1f8 + this->field_0x0); */
        /* field_0x1fc = (this->field_0x1fc + this->field_0x4); */
        /* field_0x200 = (this->field_0x200 + this->field_0x8); */
        /* L_534c:; */
        /* if (this->field_0x310 <= this->field_0x140) goto L_53bc; */
        /* mDoMtx_YrotS(this->field_0x0, this->field_0x314); */
        MtxPosition();
        /* PSVECAdd((_savegpr_26(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 504)); */
        /* L_53bc:; */
        /* return _restgpr_26(cLib_addCalc0((_savegpr_26(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 784), ((char*)&g_regHIO + 0))); */
}

/* 000054F0-00006B04       .text demo_camera__FP9gnd_class */
void demo_camera(gnd_class*) {
        /* _savegpr_24(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* if (this->field_0x155e == 20) goto L_5ce0; */
        /* if (/ * bge * / 1) goto L_54a4; */
        /* if (this->field_0x155e == 4) goto L_5894; */
        /* if (/ * bge * / 1) goto L_5480; */
        /* if (this->field_0x155e == 1) goto L_54e0; */
        /* if (/ * bge * / 1) goto L_5474; */
        /* goto L_6878; */
        /* L_5474:; */
        /* if (this->field_0x155e >= 3) goto L_5798; */
        /* goto L_55b4; */
        /* L_5480:; */
        /* if (this->field_0x155e == 10) goto L_5aa4; */
        /* if (/ * bge * / 1) goto L_5498; */
        /* if (this->field_0x155e >= 6) goto L_6878; */
        /* goto L_58cc; */
        /* L_5498:; */
        /* if (this->field_0x155e >= 12) goto L_6878; */
        /* goto L_5c10; */
        /* L_54a4:; */
        /* if (this->field_0x155e == 101) goto L_6028; */
        /* if (/ * bge * / 1) goto L_54c8; */
        /* if (this->field_0x155e == 22) goto L_5ea0; */
        /* if (/ * blt * / 1) goto L_5da8; */
        /* if (this->field_0x155e >= 100) goto L_5fdc; */
        /* goto L_6878; */
        /* L_54c8:; */
        /* if (this->field_0x155e == 150) goto L_6830; */
        /* if (/ * bge * / 1) goto L_6878; */
        /* if (this->field_0x155e >= 103) goto L_6878; */
        /* goto L_6194; */
        /* L_54e0:; */
        /* if (this->field_0xf8 == 2) goto L_5510; */
        /* fopAcM_orderPotentialEvent(_savegpr_24(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), 2); */
        /* goto L_69c0; */
        /* L_5510:; */
        /* field_0x155e = 0; */
        ((dCamera_c*)((this->field_0x5b04 + 580)))->Stop();
        ((dCamera_c*)((this->field_0x5b04 + 580)))->SetTrimSize(2);
        /* field_0x1560 = 0; */
        /* field_0x15a4 = 0; */
        /* field_0x15a0 = 0; */
        /* field_0x304 = 3; */
        /* field_0x30c = 0; */
        /* field_0x15ac = 0; */
        /* field_0x15a4 = (this->field_0x148 + this->field_0x24); */
        /* field_0x157c = (this->field_0x34 + this->field_0xc); */
        /* field_0x1580 = (this->field_0x20 + this->field_0x10); */
        /* field_0x1584 = (this->field_0x14 - this->field_0xb0); */
        /* field_0x1588 = 0; */
        /* field_0x158c = (this->field_0xb0 + this->field_0x1c); */
        /* field_0x1590 = 0; */
        /* L_55b4:; */
        /* field_0x20e = ((cM_atan2s(this->field_0x11c) + this->field_0x84) + 16384); */
        /* if (this->field_0x1560 <= (this->field_0x86 + 25)) goto L_56d4; */
        /* field_0x155c = 130; */
        /* cLib_addCalc2((_savegpr_24(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 5500), this->field_0x1560, ((char*)&g_regHIO + 0)); */
        /* cLib_addCalc2((_savegpr_24(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 5504), g_regHIO); */
        /* cLib_addCalc2((_savegpr_24(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 5508), ((char*)&g_regHIO + 0)); */
        /* cLib_addCalc2((_savegpr_24(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 5516), ((char*)&g_regHIO + 0)); */
        /* cLib_addCalc2((_savegpr_24(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 5536)); */
        /* goto L_571c; */
        /* L_56d4:; */
        /* field_0x157c = (this->field_0x34 + this->field_0xc); */
        /* field_0x1580 = (this->field_0x168 + this->field_0x10); */
        /* field_0x1584 = 0; */
        /* field_0x1588 = 0; */
        /* field_0x158c = (this->field_0xb0 + this->field_0x1c); */
        /* field_0x1590 = 0; */
        /* L_571c:; */
        MtxTrans(0);
        /* mDoMtx_YrotM(this->field_0x0, this->field_0x20e); */
        /* MtxPosition((_savegpr_24(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 5500), (_savegpr_24(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 5476)); */
        /* MtxPosition((_savegpr_24(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 5512), (_savegpr_24(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 5488)); */
        /* if (this->field_0x1560 <= (this->field_0x88 + 60)) goto L_6878; */
        /* field_0x155e = (this->field_0x155e + 1); */
        /* field_0x1560 = 0; */
        /* field_0x155c = 50; */
        /* goto L_6878; */
        /* L_5798:; */
        /* if (this->field_0x1560 != 10) goto L_57b0; */
        /* field_0x2d0 = (this->field_0x2d0 + 1); */
        /* L_57b0:; */
        /* MtxTrans(0, this->field_0x1560); */
        /* mDoMtx_YrotM(this->field_0x0, this->field_0x20e); */
        /* field_0x157c = (this->field_0x20 + this->field_0x34); */
        /* field_0x1580 = (this->field_0x13c + this->field_0x38); */
        /* field_0x1584 = (this->field_0x3c - this->field_0x11c); */
        /* MtxPosition((_savegpr_24(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 5500), (_savegpr_24(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 5476)); */
        /* field_0x1570 = 0; */
        /* field_0x1574 = 0; */
        /* field_0x1578 = 0; */
        /* field_0x1574 = (this->field_0x1574 + (this->field_0x168 + this->field_0x40)); */
        /* fopAcM_searchActorAngleY(_savegpr_24(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), this->field_0x5b38); */
        /* goto L_6878; */
        /* L_5894:; */
        /* cLib_addCalc2((_savegpr_24(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 5492), (this->field_0x5b38 + 504), ((fopAcM_searchActorAngleY(_savegpr_24(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), this->field_0x5b38) + -32768) & 65535)); */
        /* if (this->field_0x1560 < 15) goto L_6878; */
        /* field_0x155e = 5; */
        /* field_0x1560 = 0; */
        /* field_0x15a4 = 0; */
        /* L_58cc:; */
        /* mDoMtx_YrotS(this->field_0x0, this->field_0x20e); */
        MtxPosition();
        __pl();
        /* field_0x1564 = 0; */
        /* field_0x1568 = 0; */
        /* field_0x156c = 0; */
        /* field_0x1570 = 0; */
        /* field_0x1574 = 0; */
        /* field_0x1578 = 0; */
        /* field_0x1574 = (this->field_0x1574 + (this->field_0x174 + this->field_0x28)); */
        /* cLib_addCalc2((_savegpr_24(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 5540)); */
        /* field_0x155c = 50; */
        /* if (this->field_0x88 != 0) goto L_59d8; */
        /* if (this->field_0x1560 != 5) goto L_59c4; */
        /* field_0x314 = 49; */
        /* L_59c4:; */
        /* if (this->field_0x1560 != 25) goto L_5a0c; */
        /* goto L_5a0c; */
        /* L_59d8:; */
        /* if (this->field_0x1560 != 5) goto L_59e8; */
        /* field_0x314 = 50; */
        /* L_59e8:; */
        /* if (this->field_0x1560 != 60) goto L_59fc; */
        /* field_0x314 = 29; */
        /* L_59fc:; */
        /* if (this->field_0x1560 != 150) goto L_5a0c; */
        /* L_5a0c:; */
        /* if (1 == 0) goto L_6878; */
        /* ((mDoExt_btkAnm*)(this->field_0x2bc))->init(this->field_0x4, ((dRes_control_c*)(((char*)&@stringBase0 + 0)))->getRes(99, ((char*)&g_dComIfG_gameInfo + -16460), 64), 1, 0, 0, -1, 1); */
        /* field_0x2ce = 0; */
        /* field_0x2d0 = 0; */
        /* field_0x155e = 150; */
        /* field_0x3d8 = 1; */
        /* goto L_6878; */
        /* L_5aa4:; */
        /* if (this->field_0x2ce != 0) goto L_69c0; */
        /* if (checkGround(((C_@3569 + 0) + 116)) != 0) goto L_5ac0; */
        /* goto L_69c0; */
        /* L_5ac0:; */
        /* if (this->field_0xf8 == 2) goto L_5af4; */
        /* fopAcM_orderPotentialEvent(_savegpr_24(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), 2); */
        /* goto L_69c0; */
        /* L_5af4:; */
        /* field_0x155e = (this->field_0x155e + 1); */
        ((dCamera_c*)((this->field_0x5b04 + 580)))->Stop();
        ((dCamera_c*)((this->field_0x5b04 + 580)))->SetTrimSize(2);
        /* field_0x1560 = 0; */
        /* field_0x15a4 = 0; */
        /* field_0x15a0 = 0; */
        /* field_0x304 = 3; */
        /* field_0x30c = 0; */
        /* mDoMtx_YrotS(this->field_0x0, this->field_0x20e); */
        MtxPosition();
        __pl();
        /* field_0x1564 = 0; */
        /* field_0x1568 = 0; */
        /* field_0x156c = 0; */
        /* field_0x1570 = 0; */
        /* field_0x1574 = 0; */
        /* field_0x1578 = 0; */
        /* field_0x1574 = (this->field_0x1574 + (this->field_0x28 - this->field_0x44)); */
        /* field_0x8b0 = 2; */
        /* field_0x2ce = 20; */
        /* field_0x15ac = 0; */
        /* L_5c10:; */
        /* cLib_addCalc2((_savegpr_24(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 5488), this->field_0x11c); */
        /* if (((this->field_0x264 + this->field_0x28) - this->field_0x44) >= this->field_0x17c) goto L_5c5c; */
        /* L_5c5c:; */
        /* cLib_addCalc2((_savegpr_24(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 5492)); */
        /* cLib_addCalc2((_savegpr_24(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 5496), this->field_0x11c); */
        /* if (this->field_0x1560 < (this->field_0x84 + 100)) goto L_6878; */
        /* field_0x2ce = 0; */
        /* field_0x2d0 = 0; */
        /* field_0x155e = 150; */
        /* field_0x740 = 1; */
        /* field_0x3d8 = 2; */
        /* goto L_6878; */
        /* L_5ce0:; */
        /* if (this->field_0xf8 == 2) goto L_5d10; */
        fopAcM_orderPotentialEvent(((C_@3569 + 0) + 116), 1);
        /* goto L_69c0; */
        /* L_5d10:; */
        /* field_0x155e = 0; */
        ((dCamera_c*)((this->field_0x5b04 + 580)))->Stop();
        ((dCamera_c*)((this->field_0x5b04 + 580)))->SetTrimSize(2);
        /* field_0x1560 = 0; */
        /* field_0x15a4 = 0; */
        /* field_0x15a0 = 0; */
        /* field_0x304 = 3; */
        /* field_0x30c = 0; */
        ((dVibration_c*)(((char*)&g_dComIfG_gameInfo + 22944)))->StartShock((this->field_0x88 + 8), -33);
        /* field_0x15ac = (this->field_0x8 + this->field_0x54); */
        /* field_0x155c = 100; */
        /* L_5da8:; */
        /* field_0x1570 = 0; */
        /* field_0x1574 = 0; */
        /* field_0x1578 = 0; */
        /* field_0x1574 = (this->field_0x1574 + (this->field_0x13c + this->field_0x4b4)); */
        /* mDoMtx_YrotS(this->field_0x0, this->field_0x20e); */
        MtxPosition();
        __pl();
        /* field_0x1564 = 0; */
        /* field_0x1568 = 0; */
        /* field_0x156c = 0; */
        /* if (this->field_0x1560 <= ((this->field_0x744 + 15) & 65535)) goto L_5e98; */
        /* field_0x155e = (this->field_0x155e + 1); */
        /* field_0x1560 = 0; */
        /* goto L_5ea0; */
        /* L_5e98:; */
        /* goto L_6878; */
        /* L_5ea0:; */
        /* cLib_addCalc2((_savegpr_24(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 5488), g_regHIO, this->field_0x1560); */
        /* cLib_addCalc2((_savegpr_24(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 5492), ((char*)&g_regHIO + 0)); */
        /* cLib_addCalc2((_savegpr_24(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 5496), ((char*)&g_regHIO + 0)); */
        /* mDoMtx_YrotS(this->field_0x0, this->field_0x20e); */
        MtxPosition();
        __pl();
        /* field_0x1564 = 0; */
        /* field_0x1568 = 0; */
        /* field_0x156c = 0; */
        /* if (this->field_0x1560 <= 30) goto L_6878; */
        /* field_0x1560 = 0; */
        /* if (this->field_0x2ce == 11) goto L_5fd0; */
        /* field_0x2ce = 0; */
        /* field_0x2d0 = 0; */
        /* L_5fd0:; */
        /* field_0x155e = 150; */
        /* goto L_6878; */
        /* L_5fdc:; */
        /* if (this->field_0xf8 == 2) goto L_600c; */
        fopAcM_orderPotentialEvent(((C_@3569 + 0) + 116), 2);
        /* goto L_69c0; */
        /* L_600c:; */
        /* field_0x155e = 0; */
        ((dCamera_c*)((this->field_0x5b04 + 580)))->Stop();
        ((dCamera_c*)((this->field_0x5b04 + 580)))->SetTrimSize(2);
        /* L_6028:; */
        /* field_0x15a4 = 0; */
        /* field_0x15a0 = 0; */
        /* field_0x1560 = 0; */
        /* field_0x304 = 3; */
        /* field_0x30c = 0; */
        /* anm_init(_savegpr_24(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), 53, 0, -1); */
        /* field_0x314 = 70; */
        /* field_0x73f = 1; */
        /* field_0x155e = (this->field_0x155e + 1); */
        /* field_0x1f8 = 0; */
        /* field_0x1fc = 0; */
        /* field_0x200 = 0; */
        /* field_0x20e = 0; */
        /* field_0x206 = 0; */
        /* field_0x1f8 = 0; */
        /* field_0x1fc = 0; */
        /* field_0x200 = 0; */
        /* field_0x1f8 = (this->field_0x1f8 + this->field_0x34); */
        /* field_0x13f0 = ((dPa_control_c*)(this->field_0x5ab8))->set(0, (0 + -31868), (_savegpr_24(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 504), 0, 0, 255, 0); */
        /* field_0x13f4 = ((dPa_control_c*)(this->field_0x5ab8))->set(0); */
        /* field_0x1562 = 0; */
        /* L_6194:; */
        /* L_619c:; */
        /* if (/ * beq * / 1) goto L_6214; */
        /* if (this->field_0x5d != 0) goto L_61d4; */
        /* if (/ * beq * / 1) goto L_61d4; */
        /* L_61d4:; */
        /* if (0 == 0) goto L_61fc; */
        /* field_0x60 = -1; */
        /* goto L_6214; */
        /* L_61fc:; */
        JPASetRMtxTVecfromMtx((this->field_0x8c + 2304));
        /* L_6214:; */
        /* if ((0 + 1) < 2) goto L_619c; */
        /* if (this->field_0x1560 != 34) goto L_6270; */
        dComIfGp_getReverb((this->field_0x20a & 255));
        /* if (_savegpr_24(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) == 0) goto L_6264; */
        /* goto L_6268; */
        /* L_6264:; */
        /* L_6268:; */
        /* ((JAIZelBasic*)(this->field_0x0))->monsSeStart(18775, (_savegpr_24(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 608), -1, 0, dComIfGp_getReverb((this->field_0x20a & 255))); */
        /* L_6270:; */
        /* if (this->field_0x1560 != 74) goto L_62bc; */
        dComIfGp_getReverb((this->field_0x20a & 255));
        /* if (_savegpr_24(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) == 0) goto L_62b0; */
        /* goto L_62b4; */
        /* L_62b0:; */
        /* L_62b4:; */
        /* ((JAIZelBasic*)(this->field_0x0))->monsSeStart(18776, (_savegpr_24(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 608), -1, 0, dComIfGp_getReverb((this->field_0x20a & 255))); */
        /* L_62bc:; */
        /* if (this->field_0x1560 != 30) goto L_6344; */
        /* ((JAIZelBasic*)(this->field_0x0))->seStart(10246, (_savegpr_24(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 608), 0, dComIfGp_getReverb((this->field_0x20a & 255)), 0); */
        ((dVibration_c*)(((char*)&g_dComIfG_gameInfo + 22944)))->StartShock((this->field_0x88 + 4), -33);
        /* L_6344:; */
        /* if (this->field_0x1560 == 19) goto L_6388; */
        /* if (this->field_0x1560 == (this->field_0x8c + 39)) goto L_6388; */
        /* if (this->field_0x1560 == (this->field_0x8e + 67)) goto L_6388; */
        /* if (this->field_0x1560 != (this->field_0x90 + 69)) goto L_64d0; */
        /* L_6388:; */
        /* field_0x1562 = (this->field_0x1562 + 1); */
        /* if ((this->field_0x1562 & 255) == 2) goto L_63ac; */
        /* if ((this->field_0x1562 & 255) != 4) goto L_64d0; */
        /* L_63ac:; */
        /* field_0x1588 = 0; */
        /* field_0x158c = 0; */
        /* field_0x1590 = 0; */
        /* field_0x157c = 0; */
        /* field_0x1580 = 0; */
        /* field_0x1584 = 0; */
        /* field_0x15a8 = 0; */
        /* L_64d0:; */
        /* if (this->field_0x1562 == 0) goto L_64f0; */
        /* if ((this->field_0x1562 & 255) == 1) goto L_64f0; */
        /* if ((this->field_0x1562 & 255) != 3) goto L_6564; */
        /* L_64f0:; */
        /* field_0x1570 = 0; */
        /* field_0x1574 = 0; */
        /* field_0x1578 = 0; */
        /* field_0x1564 = 0; */
        /* field_0x1568 = 0; */
        /* field_0x156c = 0; */
        /* field_0x15a4 = 0; */
        /* goto L_66d0; */
        /* L_6564:; */
        /* field_0x15a0 = (this->field_0x178 + this->field_0xc); */
        /* cLib_addCalc2((_savegpr_24(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 5488), ((C_@3569 + 0) + 348), this->field_0x1560); */
        /* cLib_addCalc2((_savegpr_24(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 5492), (((C_@3569 + 0) + 348) + ((this->field_0x1562 & 255) * 12))); */
        /* cLib_addCalc2((_savegpr_24(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 5496), (((C_@3569 + 0) + 348) + ((this->field_0x1562 & 255) * 12))); */
        /* cLib_addCalc2((_savegpr_24(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 5476), ((C_@3569 + 0) + 468)); */
        /* cLib_addCalc2((_savegpr_24(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 5480), (((C_@3569 + 0) + 468) + ((this->field_0x1562 & 255) * 12))); */
        /* cLib_addCalc2((_savegpr_24(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 5484), (((C_@3569 + 0) + 468) + ((this->field_0x1562 & 255) * 12))); */
        /* cLib_addCalc2((_savegpr_24(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 5540), ((char*)&f_fovy + 0)); */
        /* L_66d0:; */
        /* if (this->field_0x1560 != 74) goto L_6770; */
        /* ((JAIZelBasic*)(this->field_0x0))->seStart(22877, (_savegpr_24(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 608), 0, dComIfGp_getReverb((this->field_0x20a & 255)), 0); */
        /* ((JAIZelBasic*)(this->field_0x0))->bgmStop(10, 0); */
        ((dVibration_c*)(((char*)&g_dComIfG_gameInfo + 22944)))->StartShock((this->field_0x88 + 8), -33);
        /* L_6770:; */
        /* if (this->field_0x1560 != 74) goto L_67f4; */
        /* if (this->field_0x4 == 0) goto L_67b8; */
        /* L_67b8:; */
        /* L_67f4:; */
        /* if (this->field_0x1560 != 124) goto L_6878; */
        dComIfGp_setNextStage(((char*)&@stringBase0 + 10), 2, 0, 9, 0, 1, 7);
        /* goto L_6878; */
        /* L_6830:; */
        ((dCamera_c*)((this->field_0x5b04 + 580)))->SetTrimSize(0);
        ((dCamera_c*)((this->field_0x5b04 + 580)))->Start();
        dMeter_mtrShow();
        /* field_0x155e = 0; */
        /* field_0x304 = 2; */
        /* field_0x314 = 1; */
        /* field_0x155c = 1; */
        /* L_6878:; */
        /* if (this->field_0x155e == 0) goto L_69c0; */
        ((dCamera_c*)((this->field_0x5b04 + 580)))->Set();
        /* cLib_addCalc0((_savegpr_24(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 5548), ((char*)&g_regHIO + 0)); */
        /* JUTReport(410, 430, ((char*)&@stringBase0 + 17), this->field_0x1560); */
        /* field_0x1560 = (this->field_0x1560 + 1); */
        /* L_69c0:; */
        /* return _restgpr_24(this->field_0x1560); */
}

/* 00006B04-00006D0C       .text body_flash__FP9gnd_class */
void body_flash(gnd_class*) {
        /* _savegpr_21(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* if (this->field_0x142e == 0) goto L_6a38; */
        /* field_0x142e = (this->field_0x142e + 1); */
        /* if (this->field_0x142e <= 100) goto L_6a38; */
        /* field_0x142e = 0; */
        /* L_6a38:; */
        /* L_6a5c:; */
        /* if (this->field_0x142e != 0) goto L_6a78; */
        /* L_6a78:; */
        /* if (100 == 0) goto L_6b94; */
        /* PSMTXCopy((this->field_0x8c + ((100 + -1) * 48)), this->field_0x0); */
        /* MtxPosition((_savegpr_21(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + (0 + 5288))); */
        /* if (((C_@2100 + 0) + 1252) != 0) goto L_6b5c; */
        /* ((dPa_control_c*)(this->field_0x5ab8))->set(0, 1005); */
        /* goto L_6bc0; */
        /* L_6b5c:; */
        /* field_0x1e4 = 0; */
        /* field_0x1e8 = 0; */
        /* field_0x1ec = 0; */
        /* goto L_6bc0; */
        /* L_6b94:; */
        /* if (((dPa_control_c*)(this->field_0x5ab8))->set(0, 1005) == 0) goto L_6bc0; */
        /* field_0x60 = -1; */
        /* L_6bc0:; */
        /* if ((0 + 1) < 15) goto L_6a5c; */
        /* return _restgpr_21(((dPa_control_c*)(this->field_0x5ab8))->set(0, 1005), (0 + 5168)); */
}

/* 00006D0C-000076B8       .text daGnd_Execute__FP9gnd_class */
static BOOL daGnd_Execute(gnd_class*) {
        /* _savegpr_14(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* if (this->field_0x2b4 != 0) goto L_6c4c; */
        /* field_0x2ce = 20; */
        /* L_6c4c:; */
        /* if (j_demo(_savegpr_14(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)) == 0) goto L_6cec; */
        /* ((mDoExt_McaMorf*)(this->field_0x2b8))->calc(); */
        /* ((mDoExt_baseAnm*)(this->field_0x2c0))->play(); */
        /* ((mDoExt_baseAnm*)(this->field_0x2bc))->play(); */
        /* ((mDoExt_baseAnm*)(this->field_0x2c4))->play(); */
        /* field_0x18 = 0; */
        /* field_0x1c = 0; */
        /* field_0x20 = 0; */
        PSMTXTrans(((char*)&now__14mDoMtx_stack_c + 0));
        /* mDoMtx_ZXYrotM(((char*)&now__14mDoMtx_stack_c + 0), this->field_0x20c, this->field_0x20e); */
        PSMTXCopy(((char*)&now__14mDoMtx_stack_c + 0), (this->field_0x50 + 36));
        /* ke_move(_savegpr_14(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        return 1;
        /* L_6cec:; */
        /* setRipple(_savegpr_14(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* if (this->field_0x11c != 0) goto L_6d14; */
        /* field_0x11c = fpcEx_Search(((char*)&z_s_sub__FPvPv + 0), _savegpr_14(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* L_6d14:; */
        /* if (this->field_0x10 == 0) goto L_6d2c; */
        /* field_0x3d8 = (this->field_0x10 + -1); */
        /* L_6d2c:; */
        /* if (this->field_0x28c != 35) goto L_6d54; */
        /* field_0x28c = (this->field_0x28c + 1); */
        /* ((JAIZelBasic*)(this->field_0x0))->changeBgmStatus(2); */
        /* L_6d54:; */
        /* if ((this->field_0xb0 & 16777215) != 35) goto L_6d7c; */
        /* field_0x2ce = 21; */
        /* field_0x155e = 20; */
        /* field_0xb0 = 0; */
        /* L_6d7c:; */
        /* field_0x2cc = (this->field_0x2cc + 1); */
        /* if (/ * beq * / 1) goto L_6dac; */
        /* L_6dac:; */
        /* if (this->field_0x30c == 0) goto L_6dc8; */
        /* field_0x30c = (this->field_0x30c + -1); */
        /* L_6dc8:; */
        /* if (this->field_0x30e == 0) goto L_6ddc; */
        /* field_0x30e = (this->field_0x30e + -1); */
        /* L_6ddc:; */
        /* if (this->field_0x318 == 0) goto L_6df0; */
        /* field_0x318 = (this->field_0x318 + -1); */
        /* L_6df0:; */
        /* if (this->field_0x142c == 0) goto L_6e04; */
        /* field_0x142c = (this->field_0x142c + -1); */
        /* L_6e04:; */
        /* if (this->field_0x5 != 0) goto L_6eac; */
        /* gnd_move(_savegpr_14(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* ((dBgS_Acch*)((_savegpr_14(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 3008)))->CrrPos(((char*)&g_dComIfG_gameInfo + 4768)); */
        /* ((dScnKy_env_light_c*)(((char*)&g_env_light + 0)))->settingTevStruct(2, (_savegpr_14(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 504), (_savegpr_14(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 800)); */
        /* ((mDoExt_McaMorf*)(this->field_0x2b8))->play((_savegpr_14(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 608), 0, 0); */
        /* if (this->field_0x5d != 0) goto L_6e84; */
        /* if (/ * beq * / 1) goto L_6e84; */
        /* L_6e84:; */
        /* if (0 == 0) goto L_6e94; */
        /* attack_eff_remove(_savegpr_14(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* L_6e94:; */
        /* ((mDoExt_baseAnm*)(this->field_0x2c0))->play(); */
        /* ((mDoExt_baseAnm*)(this->field_0x2bc))->play(); */
        /* ((mDoExt_baseAnm*)(this->field_0x2c4))->play(); */
        /* L_6eac:; */
        /* field_0x21c = 0; */
        /* field_0x218 = 0; */
        /* field_0x214 = 0; */
        /* field_0x18 = 0; */
        /* field_0x1c = 0; */
        /* field_0x20 = 0; */
        PSMTXTrans(((char*)&now__14mDoMtx_stack_c + 0));
        /* cLib_addCalc0((_savegpr_14(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 992), g_regHIO); */
        mDoMtx_YrotM(((char*)&now__14mDoMtx_stack_c + 0));
        /* mDoMtx_XrotM(((char*)&now__14mDoMtx_stack_c + 0), this->field_0x20c); */
        /* mDoMtx_ZrotM(((char*)&now__14mDoMtx_stack_c + 0), this->field_0x210); */
        PSMTXCopy(((char*)&now__14mDoMtx_stack_c + 0), (this->field_0x50 + 36));
        /* ((mDoExt_McaMorf*)(this->field_0x2b8))->calc(); */
        /* PSMTXCopy((this->field_0x8c + 2304), this->field_0x0); */
        MtxPosition();
        /* field_0x274 = 0; */
        /* field_0x278 = 0; */
        /* field_0x27c = 0; */
        /* field_0x278 = (this->field_0x278 + this->field_0x1a4); */
        /* ((cM3dGCyl*)((_savegpr_14(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 3800)))->SetC((_savegpr_14(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 504)); */
        /* ((cM3dGCyl*)((_savegpr_14(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 3800)))->SetR(); */
        /* ((cM3dGCyl*)((_savegpr_14(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 3800)))->SetH(); */
        /* ((cCcS*)(((char*)&g_dComIfG_gameInfo + 9892)))->Set((_savegpr_14(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 3520)); */
        /* ((cM3dGSph*)((_savegpr_14(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 4104)))->SetC((_savegpr_14(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 608)); */
        /* ((cM3dGSph*)((_savegpr_14(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 4104)))->SetR(g_regHIO); */
        /* ((cCcS*)(((char*)&g_dComIfG_gameInfo + 9892)))->Set((_savegpr_14(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 3824)); */
        /* PSMTXCopy((this->field_0x8c + 432), this->field_0x0); */
        MtxPosition();
        /* ((cM3dGSph*)((_savegpr_14(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 4404)))->SetC(); */
        /* ((cM3dGSph*)((_savegpr_14(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 4404)))->SetR(); */
        /* ((cCcS*)(((char*)&g_dComIfG_gameInfo + 9892)))->Set((_savegpr_14(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 4124)); */
        /* if (this->field_0x3d7 == 0) goto L_7104; */
        /* field_0x3d7 = (this->field_0x3d7 + -1); */
        /* goto L_711c; */
        /* L_7104:; */
        /* L_711c:; */
        /* L_7150:; */
        PSMTXCopy((this->field_0x8c + (((char*)&calc_mtx + 0) * 48)));
        MtxPosition();
        /* if (this->field_0x13b8 == 0) goto L_747c; */
        /* if (this->field_0x290 != 5) goto L_71c4; */
        /* if ((this->field_0x3d8 & 255) < 2) goto L_747c; */
        /* L_71c4:; */
        /* field_0x11b6 = 13; */
        /* if ((this->field_0x13b8 & 255) != 3) goto L_724c; */
        MtxTrans(0);
        /* mDoMtx_YrotM(this->field_0x0, this->field_0x20e); */
        /* goto L_737c; */
        /* L_724c:; */
        /* if ((0 + 5052) < 10) goto L_7308; */
        MtxTrans(0);
        /* if (this->field_0x13b8 != 10) goto L_7294; */
        /* goto L_72b0; */
        /* L_7294:; */
        /* L_72b0:; */
        /* if (this->field_0x45 == 0) goto L_72ec; */
        /* goto L_737c; */
        /* L_72ec:; */
        /* goto L_737c; */
        /* L_7308:; */
        /* PSMTXCopy((this->field_0x8c + (this->field_0x11dc * 48)), this->field_0x0); */
        /* if (this->field_0x13b8 != 4) goto L_737c; */
        /* field_0x11b6 = 15; */
        /* L_737c:; */
        /* ((cM3dGSph*)(((_savegpr_14(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 0) + 4704)))->SetR(); */
        MtxPosition();
        /* ((cM3dGSph*)(((_savegpr_14(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 0) + 4704)))->SetC(); */
        /* mDoMtx_YrotS(this->field_0x0, this->field_0x20e); */
        MtxPosition();
        /* field_0x11c4 = 0; */
        /* field_0x11c8 = 0; */
        /* field_0x11cc = 0; */
        /* if ((this->field_0x13b8 & 255) >= 10) goto L_7454; */
        /* if ((this->field_0x1fc - this->field_0xc54) >= this->field_0x13c) goto L_7444; */
        /* goto L_7460; */
        /* L_7444:; */
        /* goto L_7460; */
        /* L_7454:; */
        /* L_7460:; */
        /* field_0x13b8 = 0; */
        /* field_0x13c4 = (this->field_0x168 + this->field_0x40); */
        /* goto L_7494; */
        /* L_747c:; */
        /* field_0x13cc = 0; */
        /* ((cM3dGSph*)((_savegpr_14(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + (0 + 4704))))->SetC(((C_@3569 + 0) + 88)); */
        /* L_7494:; */
        /* ((cCcS*)(((char*)&g_dComIfG_gameInfo + 9892)))->Set((_savegpr_14(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + (0 + 4424))); */
        /* if ((0 + 1) < 2) goto L_7150; */
        /* if (this->field_0x13d0 == 0) goto L_74d8; */
        /* field_0x13d0 = (this->field_0x13d0 + -1); */
        /* field_0x13cf = 1; */
        /* L_74d8:; */
        /* if (this->field_0x13d1 == 0) goto L_74f4; */
        /* field_0x13d1 = (this->field_0x13d1 + -1); */
        /* field_0x13cf = 2; */
        /* L_74f4:; */
        /* field_0x2a4 = 0; */
        /* field_0x29c = 0; */
        /* field_0x2a0 = 0; */
        /* field_0x298 = 0; */
        /* field_0x298 = (this->field_0x4c + this->field_0x1c); */
        /* field_0x13cf = 0; */
        /* if (this->field_0x89 == 0) goto L_7558; */
        /* field_0x89 = 0; */
        /* field_0x155e = 10; */
        /* L_7558:; */
        /* demo_camera(_savegpr_14(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* ke_move(_savegpr_14(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* attack_eff_move(_savegpr_14(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* body_flash(_savegpr_14(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        return _restgpr_14(1);
}

/* 000076B8-000076C0       .text daGnd_IsDelete__FP9gnd_class */
static BOOL daGnd_IsDelete(gnd_class*) {
    return 1;
}

/* 000076C0-00007738       .text daGnd_Delete__FP9gnd_class */
static BOOL daGnd_Delete(gnd_class*) {
    /* dComIfG_resDelete((arg0 + 684), ((char*)&@stringBase0 + 0), arg2); */
    ((dPa_rippleEcallBack*)((arg0 + 5556)))->end();
    if (this->field_0x15e0 != 0) {
        /* field_0x0 = 0; */
        /* ((mDoHIO_subRoot_c*)(((char*)&mDoHIO_root + 4)))->deleteChild(this->field_0x4); */
    }
    return 1;
}

/* 00007738-00007A78       .text useHeapInit__FP10fopAc_ac_c */
static BOOL useHeapInit(fopAc_ac_c*) {
    /* _savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
    __nw(180);
    if (/* beq */ 1) {
        ((dRes_control_c*)(((char*)&@stringBase0 + 0)))->getRes(85);
    }
    /* field_0x2b8 = __ct(((dRes_control_c*)(((char*)&@stringBase0 + 0)))->getRes(92), 1, ((dRes_control_c*)(((char*)&@stringBase0 + 0)))->getRes(92), 0, 0, ((dRes_control_c*)(((char*)&@stringBase0 + 0)))->getRes(85), 2, 0); */
    if (this->field_0x2b8 != 0) {
        /* if (this->field_0x50 == 0) goto L_7704; */
    }
    return 0;
    /* L_7704:; */
    if (__nw(24) != 0) {
        /* field_0x0 = 0; */
        /* field_0x4 = 0; */
        /* field_0x0 = 0; */
        /* field_0xc = 0; */
        /* field_0x10 = 0; */
    }
    /* field_0x2c0 = __nw(24); */
    if (this->field_0x2c0 == 0) {
        return 0;
    }
    /* if (((mDoExt_brkAnm*)(this->field_0x2c0))->init(this->field_0x4, ((dRes_control_c*)(((char*)&@stringBase0 + 0)))->getRes(95, (__ct(((dRes_control_c*)(((char*)&@stringBase0 + 0)))->getRes(92), 1, ((dRes_control_c*)(((char*)&@stringBase0 + 0)))->getRes(92), 0, 0, ((dRes_control_c*)(((char*)&@stringBase0 + 0)))->getRes(85), 2, 0) + -16460), 64), 1, 2, 0, -1, 0) == 0) { */
        /* return 0; */
    if (__nw(20) != 0) {
        /* field_0x0 = 0; */
        /* field_0x4 = 0; */
        /* field_0x0 = 0; */
        /* field_0xc = 0; */
    }
    /* field_0x2bc = __nw(20); */
    if (this->field_0x2bc == 0) {
        return 0;
    /* if (((mDoExt_btkAnm*)(this->field_0x2bc))->init(this->field_0x4, ((dRes_control_c*)(((char*)&@stringBase0 + 0)))->getRes(99, (__ct(((dRes_control_c*)(((char*)&@stringBase0 + 0)))->getRes(92), 1, ((dRes_control_c*)(((char*)&@stringBase0 + 0)))->getRes(92), 0, 0, ((dRes_control_c*)(((char*)&@stringBase0 + 0)))->getRes(85), 2, 0) + -16460), 64), 1, 0, 0, -1, 0) == 0) { */
        /* return 0; */
    if (__nw(20) != 0) {
        /* field_0x0 = 0; */
        /* field_0x4 = 0; */
        /* field_0x0 = 0; */
        /* field_0xc = 0; */
    /* field_0x2c4 = __nw(20); */
    if (this->field_0x2c4 == 0) {
        return 0;
    /* if (((mDoExt_btpAnm*)(this->field_0x2c4))->init(this->field_0x4, ((dRes_control_c*)(((char*)&@stringBase0 + 0)))->getRes(102, (__ct(((dRes_control_c*)(((char*)&@stringBase0 + 0)))->getRes(92), 1, ((dRes_control_c*)(((char*)&@stringBase0 + 0)))->getRes(92), 0, 0, ((dRes_control_c*)(((char*)&@stringBase0 + 0)))->getRes(85), 2, 0) + -16460), 64), 1, 2, 0, -1, 0) == 0) { */
        /* return 0; */
    /* return _restgpr_28(((mDoExt_3DlineMat0_c*)((_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 2916)))->init(4, 20, 0)); */

/* 00007AC0-00007CFC       .text daGnd_Create__FP10fopAc_ac_c */
static cPhs_State daGnd_Create(fopAc_ac_c*) {
    /* Nonmatching */
    static dCcD_SrcCyl cc_cyl_src = {
        // dCcD_SrcGObjInf
        {
            /* Flags             */ 0,
            /* SrcObjAt  Type    */ 0,
            /* SrcObjAt  Atp     */ 0,
            /* SrcObjAt  SPrm    */ 0,
            /* SrcObjTg  Type    */ AT_TYPE_SWORD,
            /* SrcObjTg  SPrm    */ cCcD_TgSPrm_Set_e | cCcD_TgSPrm_IsEnemy_e,
            /* SrcObjCo  SPrm    */ cCcD_CoSPrm_Set_e | cCcD_CoSPrm_IsPlayer_e | cCcD_CoSPrm_VsGrpAll_e,
            /* SrcGObjAt Se      */ 0,
            /* SrcGObjAt HitMark */ dCcG_AtHitMark_None_e,
            /* SrcGObjAt Spl     */ dCcG_At_Spl_UNK0,
            /* SrcGObjAt Mtrl    */ 0,
            /* SrcGObjAt SPrm    */ 0,
            /* SrcGObjTg Se      */ 0,
            /* SrcGObjTg HitMark */ dCcG_TgHitMark_Nrm_e,
            /* SrcGObjTg Spl     */ dCcG_Tg_Spl_UNK0,
            /* SrcGObjTg Mtrl    */ 0,
            /* SrcGObjTg SPrm    */ dCcG_TgSPrm_NoConHit_e,
            /* SrcGObjCo SPrm    */ 0,
        },
        // cM3dGCylS
        {{
            /* Center */ {0.0f, -150.0f, 0.0f},
            /* Radius */ 100.0f,
            /* Height */ 100.0f,
        }},
    };
    static dCcD_SrcSph head_sph_src = {
        // dCcD_SrcGObjInf
        {
            /* Flags             */ 0,
            /* SrcObjAt  Type    */ 0,
            /* SrcObjAt  Atp     */ 0,
            /* SrcObjAt  SPrm    */ 0,
            /* SrcObjTg  Type    */ AT_TYPE_SWORD,
            /* SrcObjTg  SPrm    */ cCcD_TgSPrm_Set_e | cCcD_TgSPrm_IsEnemy_e | cCcD_TgSPrm_IsOther_e,
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
            /* Radius */ 15.0f,
        }},
    };
    static dCcD_SrcSph chest_sph_src = {
        // dCcD_SrcGObjInf
        {
            /* Flags             */ 0,
            /* SrcObjAt  Type    */ 0,
            /* SrcObjAt  Atp     */ 0,
            /* SrcObjAt  SPrm    */ 0,
            /* SrcObjTg  Type    */ AT_TYPE_NORMAL_ARROW | AT_TYPE_LIGHT_ARROW,
            /* SrcObjTg  SPrm    */ cCcD_TgSPrm_Set_e | cCcD_TgSPrm_IsEnemy_e | cCcD_TgSPrm_IsOther_e,
            /* SrcObjCo  SPrm    */ 0,
            /* SrcGObjAt Se      */ 0,
            /* SrcGObjAt HitMark */ dCcG_AtHitMark_None_e,
            /* SrcGObjAt Spl     */ dCcG_At_Spl_UNK0,
            /* SrcGObjAt Mtrl    */ 0,
            /* SrcGObjAt SPrm    */ 0,
            /* SrcGObjTg Se      */ dCcG_SE_METAL,
            /* SrcGObjTg HitMark */ dCcg_TgHitMark_Purple_e,
            /* SrcGObjTg Spl     */ dCcG_Tg_Spl_UNK0,
            /* SrcGObjTg Mtrl    */ 0,
            /* SrcGObjTg SPrm    */ dCcG_TgSPrm_Shield_e | dCcG_TgSPrm_NoConHit_e,
            /* SrcGObjCo SPrm    */ 0,
        },
        // cM3dGSphS
        {{
            /* Center */ {0.0f, 0.0f, 0.0f},
            /* Radius */ 100.0f,
        }},
    };
    static dCcD_SrcSph wepon_sph_src = {
        // dCcD_SrcGObjInf
        {
            /* Flags             */ 0,
            /* SrcObjAt  Type    */ AT_TYPE_UNK8,
            /* SrcObjAt  Atp     */ 4,
            /* SrcObjAt  SPrm    */ cCcD_AtSPrm_Set_e | cCcD_AtSPrm_GrpAll_e,
            /* SrcObjTg  Type    */ AT_TYPE_ALL & ~AT_TYPE_WATER & ~AT_TYPE_UNK20000 & ~AT_TYPE_WIND & ~AT_TYPE_UNK400000 & ~AT_TYPE_LIGHT,
            /* SrcObjTg  SPrm    */ cCcD_TgSPrm_Set_e | cCcD_TgSPrm_IsEnemy_e | cCcD_TgSPrm_IsOther_e,
            /* SrcObjCo  SPrm    */ 0,
            /* SrcGObjAt Se      */ 0,
            /* SrcGObjAt HitMark */ dCcG_AtHitMark_Nrm_e,
            /* SrcGObjAt Spl     */ dCcG_At_Spl_UNK6,
            /* SrcGObjAt Mtrl    */ 0,
            /* SrcGObjAt SPrm    */ dCcG_AtSPrm_NoConHit_e,
            /* SrcGObjTg Se      */ dCcG_SE_METAL,
            /* SrcGObjTg HitMark */ dCcg_TgHitMark_Purple_e,
            /* SrcGObjTg Spl     */ dCcG_Tg_Spl_UNK0,
            /* SrcGObjTg Mtrl    */ 0,
            /* SrcGObjTg SPrm    */ dCcG_TgSPrm_Shield_e | dCcG_TgSPrm_NoConHit_e,
            /* SrcGObjCo SPrm    */ 0,
        },
        // cM3dGSphS
        {{
            /* Center */ {0.0f, 0.0f, 0.0f},
            /* Radius */ 70.0f,
        }},
    };

static actor_method_class l_daGnd_Method = {
    (process_method_func)daGnd_Create,
    (process_method_func)daGnd_Delete,
    (process_method_func)daGnd_Execute,
    (process_method_func)daGnd_IsDelete,
    (process_method_func)daGnd_Draw,
};

actor_process_profile_definition g_profile_GND = {
    /* Layer ID     */ fpcLy_CURRENT_e,
    /* List ID      */ 0x0007,
    /* List Prio    */ fpcPi_CURRENT_e,
    /* Proc Name    */ fpcNm_GND_e,
    /* Proc SubMtd  */ &g_fpcLf_Method.base,
    /* Size         */ sizeof(gnd_class),
    /* Size Other   */ 0,
    /* Parameters   */ 0,
    /* Leaf SubMtd  */ &g_fopAc_Method.base,
    /* Draw Prio    */ fpcDwPi_GND_e,
    /* Actor SubMtd */ &l_daGnd_Method,
    /* Status       */ fopAcStts_UNK40000_e | fopAcStts_BOSS_e,
    /* Group        */ fopAc_ENEMY_e,
    /* Cull Type    */ fopAc_CULLBOX_0_e,
};

/* 由 fix_decomp_braces.py 补齐：反编译产物末尾缺 6 个 } */
}}}}}}
