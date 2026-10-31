/**
 * d_a_mant.cpp
 * Object - Phantom Ganon's cape/Darknut cape
 */

#include "d/dolzel_rel.h" // IWYU pragma: keep
#include "d/actor/d_a_mant.h"
#include "d/d_cc_d.h"

/* 000000EC-000003EC       .text draw__15daMant_packet_cFv */
void daMant_packet_c::draw() {
        /* if (/ * beq * / 1) goto L_80; */
        /* field_0x0 = 0; */
        __destroy_arr();
        /* if (/ * beq * / 1) goto L_70; */
        /* field_0x0 = 0; */
        /* L_70:; */
        /* if (arg1 != 0) goto L_80; */
        /* L_80:; */
        return __dl(__vt__9J3DPacket);
}

/* 000003EC-000004E8       .text daMant_Draw__FP10mant_class */
static BOOL daMant_Draw(mant_class*) {
    /* if (this->field_0x218 == this->field_0x18) { */
        /* return 1; */
    ((dScnKy_env_light_c*)(((char*)&g_env_light + 0)))->settingTevStruct(5, (arg0 + 504), (arg0 + 268));
    MtxTrans(0);
    PSMTXConcat(((char*)&j3dSys + 0), this->field_0x0, (arg0 + 680));
    if (this->field_0x1244 != 1) {
        MtxTrans(0);
        PSMTXConcat(((char*)&j3dSys + 0), this->field_0x0, (arg0 + 728));
    }
    /* field_0x308 = (arg0 + 268); */
    /* ((J3DDrawBuffer*)(this->field_0x48))->entryImm((arg0 + 664), 0); */
    return 1;
}

/* 000004E8-00000FC0       .text joint_control__FP10mant_classP8mant_j_si */
void joint_control(mant_class*, mant_j_s*, int) {
        /* _savegpr_14(arg0, arg1, int, arg3, arg4, arg5, arg6, arg7); */
        __ct();
        /* field_0xc = 0; */
        /* field_0xc = 0; */
        /* field_0x10 = 1; */
        /* if (/ * beq * / 1) goto L_4f8; */
        /* L_4f8:; */
        ((cBgS*)(((char*)&g_dComIfG_gameInfo + 4768)))->GroundCross();
        /* if (/ * ble * / 1) goto L_550; */
        /* L_550:; */
        /* mDoMtx_YrotS(this->field_0x0); */
        MtxPosition();
        /* mDoMtx_YrotS(this->field_0x0); */
        /* if (/ * bge * / 1) goto L_614; */
        /* L_614:; */
        /* if (/ * bge * / 1) goto L_638; */
        /* goto L_63c; */
        /* L_638:; */
        /* L_63c:; */
        MtxPosition();
        /* L_6b4:; */
        /* if (0 <= 0) goto L_a28; */
        __ml();
        /* if (/ * ble * / 1) goto L_764; */
        /* L_764:; */
        /* if (this->field_0x1c04 <= this->field_0x18) goto L_7c8; */
        __ml();
        /* L_7c8:; */
        /* if (this->field_0x1244 != 1) goto L_834; */
        /* mDoMtx_YrotS(this->field_0x0); */
        MtxPosition();
        /* L_834:; */
        /* if ((this->field_0x58 + (this->field_0x1c08 + (this->field_0x4 + this->field_0x4))) >= this->field_0x4) goto L_8c4; */
        /* L_8c4:; */
        cM_atan2s(MtxPosition());
        /* if (/ * ble * / 1) goto L_954; */
        /* L_954:; */
        cM_atan2s(cM_atan2s(MtxPosition()));
        /* mDoMtx_XrotS(this->field_0x0); */
        /* mDoMtx_YrotM(this->field_0x0); */
        MtxPosition();
        /* field_0x0 = 0; */
        /* field_0x4 = 0; */
        /* field_0x8 = 0; */
        /* field_0x0 = 0; */
        /* field_0x4 = 0; */
        /* field_0x8 = 0; */
        /* field_0x0 = (this->field_0x1bfc * (this->field_0x0 - this->field_0x0)); */
        /* field_0x4 = (this->field_0x1bfc * (this->field_0x4 - this->field_0x4)); */
        /* field_0x8 = (this->field_0x1bfc * (this->field_0x8 - this->field_0x8)); */
        /* L_a28:; */
        /* field_0x0 = 0; */
        /* field_0x4 = 0; */
        /* field_0x8 = 0; */
        /* field_0x4c = (this->field_0x4c + 12); */
        /* field_0x50 = (this->field_0x50 + 1); */
        /* if (this->field_0x1244 != 0) goto L_dbc; */
        /* if (0 != 0) goto L_dbc; */
        /* if (/ * bne * / 1) goto L_dbc; */
        /* if (0 == 0) goto L_dbc; */
        /* if (0 == 8) goto L_dbc; */
        /* if (/ * beq * / 1) goto L_dbc; */
        /* if (/ * beq * / 1) goto L_dbc; */
        /* if (this->field_0x2834 == 0) goto L_adc; */
        /* ((cM3dGSph*)((_savegpr_14(arg0, arg1, int, arg3, arg4, arg5, arg6, arg7) + ((this->field_0x54 * 300) + 7824))))->SetR(); */
        /* ((cM3dGSph*)((_savegpr_14(arg0, arg1, int, arg3, arg4, arg5, arg6, arg7) + ((this->field_0x54 * 300) + 7824))))->SetC(); */
        /* goto L_b0c; */
        /* L_adc:; */
        /* ((cM3dGSph*)((_savegpr_14(arg0, arg1, int, arg3, arg4, arg5, arg6, arg7) + ((this->field_0x54 * 300) + 7824))))->SetR(); */
        /* ((cM3dGSph*)((_savegpr_14(arg0, arg1, int, arg3, arg4, arg5, arg6, arg7) + ((this->field_0x54 * 300) + 7824))))->SetC(((C_@3569 + 0) + 100)); */
        /* L_b0c:; */
        /* ((cCcS*)(((char*)&g_dComIfG_gameInfo + 9892)))->Set((_savegpr_14(arg0, arg1, int, arg3, arg4, arg5, arg6, arg7) + ((this->field_0x54 * 300) + 7544))); */
        /* if (this->field_0x2836 != 0) goto L_d7c; */
        /* if (this->field_0x2838 != 0) goto L_d7c; */
        /* if (((this->field_0x54 * 300) + 7572) == 0) goto L_d7c; */
        /* field_0x2836 = 10; */
        /* ((dCcD_GObjInf*)((_savegpr_14(arg0, arg1, int, arg3, arg4, arg5, arg6, arg7) + ((this->field_0x54 * 300) + 7544))))->GetTgHitObj(); */
        at_power_check();
        /* if (/ * beq * / 1) goto L_b9c; */
        /* if (/ * bne * / 1) goto L_bf0; */
        /* L_b9c:; */
        /* if (/ * bne * / 1) goto L_bc8; */
        /* if (this->field_0x1240 != 0) goto L_bf0; */
        /* field_0x1240 = 2; */
        /* field_0x2834 = 0; */
        return 1;
        /* L_bc8:; */
        /* if (0 != 1) goto L_bf0; */
        /* if (this->field_0x1240 != 0) goto L_bf0; */
        /* field_0x1240 = 4; */
        /* field_0x2834 = 0; */
        /* L_bf0:; */
        /* if (1 == 0) goto L_c9c; */
        /* ((dPa_control_c*)(this->field_0x5ab8))->set(0); */
        /* ((JAIZelBasic*)(this->field_0x0))->seStart(22765, (_savegpr_14(arg0, arg1, int, arg3, arg4, arg5, arg6, arg7) + 504), 0, dComIfGp_getReverb((this->field_0x20a & 255)), 0); */
        /* L_c9c:; */
        /* field_0x1c0e = 2; */
        /* field_0x1c00 = 0; */
        /* if (/ * bne * / 1) goto L_d7c; */
        /* field_0x2838 = 26; */
        /* field_0x1c0e = 6; */
        /* if (/ * beq * / 1) goto L_d4c; */
        /* if (/ * beq * / 1) goto L_d28; */
        /* if (/ * beq * / 1) goto L_d28; */
        /* L_d28:; */
        /* if (/ * beq * / 1) goto L_d4c; */
        /* if (/ * beq * / 1) goto L_d4c; */
        /* L_d4c:; */
        __dt();
        /* goto L_e7c; */
        /* L_d7c:; */
        /* field_0x54 = (this->field_0x54 + 1); */
        /* if (0 != 4) goto L_dbc; */
        /* if (/ * bne * / 1) goto L_dbc; */
        /* ((cM3dGSph*)((_savegpr_14(arg0, arg1, int, arg3, arg4, arg5, arg6, arg7) + 7524)))->SetR(); */
        /* ((cM3dGSph*)((_savegpr_14(arg0, arg1, int, arg3, arg4, arg5, arg6, arg7) + 7524)))->SetC(); */
        /* ((cCcS*)(((char*)&g_dComIfG_gameInfo + 9892)))->Set((_savegpr_14(arg0, arg1, int, arg3, arg4, arg5, arg6, arg7) + 7244)); */
        /* L_dbc:; */
        /* if ((0 + 1) < 9) goto L_6b4; */
        /* if (/ * beq * / 1) goto L_e50; */
        /* if (/ * beq * / 1) goto L_e2c; */
        /* if (/ * beq * / 1) goto L_e2c; */
        /* L_e2c:; */
        /* if (/ * beq * / 1) goto L_e50; */
        /* if (/ * beq * / 1) goto L_e50; */
        /* L_e50:; */
        /* L_e7c:; */
        return _restgpr_14(__dt());
}

/* 0000137C-000015F0       .text mant_v_calc__FP10mant_class */
void mant_v_calc(mant_class*) {
    /* _savegpr_23(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
    __ct();
    cM_atan2s(__mi());
    /* L_1374:; */
    /* field_0x1250 = 0; */
    /* field_0x1254 = 0; */
    /* field_0x1258 = 0; */
    /* cM_rad2s(mDoMtx_YrotS(this->field_0x0)); */
    MtxPosition();
    /* PSVECAdd(((_savegpr_23(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 0) + 4688)); */
    /* field_0x132a = (this->field_0x132a + (((0 + -4) * 3000) & 65535)); */
    /* joint_control(_savegpr_23(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), (_savegpr_23(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 4688), 0); */
    /* if ((0 + 1) >= 9) goto L_1374; */
    /* return _restgpr_23(joint_control(_savegpr_23(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), (_savegpr_23(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 4688), 0)); */
}

/* 000015F0-000017EC       .text mant_n_calc__FP10mant_class */
void mant_n_calc(mant_class*) {
        /* _savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        mDoMtx_YrotS(this->field_0x0, 20384);
        MtxPosition();
        /* L_1558:; */
        /* if (0 == 8) goto L_1598; */
        /* if (0 == 17) goto L_1598; */
        /* if (0 == 26) goto L_1598; */
        /* if (0 == 35) goto L_1598; */
        /* if (0 == 44) goto L_1598; */
        /* if (0 == 53) goto L_1598; */
        /* if (0 == 62) goto L_1598; */
        /* if (0 != 71) goto L_15b4; */
        /* L_1598:; */
        /* goto L_16bc; */
        /* L_15b4:; */
        /* if (0 < 72) goto L_15d8; */
        /* goto L_16bc; */
        /* L_15d8:; */
        mDoMtx_YrotS(this->field_0x0, cM_atan2s(__mi()));
        /* if (((this->field_0x18 * this->field_0x18) + (this->field_0x20 * this->field_0x20)) <= this->field_0x14) goto L_1690; */
        /* L_1690:; */
        mDoMtx_XrotM(this->field_0x0, ((-cM_atan2s(mDoMtx_YrotS(this->field_0x0, cM_atan2s(__mi())))) & 65535));
        MtxPosition();
        /* L_16bc:; */
        /* if ((0 + 1) < 81) goto L_1558; */
        return _restgpr_28(MtxPosition());
}

/* 000017EC-000019C0       .text mant_move__FP10mant_class */
void mant_move(mant_class*) {
        /* _savegpr_25(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* field_0x50 = 0; */
        /* field_0x4c = ((_savegpr_25(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + (this->field_0x30c * 972)) + 784); */
        /* field_0x54 = 0; */
        /* mant_v_calc(_savegpr_25(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* mant_n_calc(_savegpr_25(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* DCFlushRange(((_savegpr_25(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + (this->field_0x30c * 972)) + 784), 972); */
        /* if (this->field_0x2838 == 0) goto L_17e0; */
        /* field_0x2838 = (this->field_0x2838 + -1); */
        /* L_1790:; */
        /* if (0 != 0) goto L_17b8; */
        /* ((dPa_control_c*)(this->field_0x5ab8))->setSimple(); */
        /* L_17b8:; */
        /* if ((0 + 1) < 81) goto L_1790; */
        /* if (this->field_0x2838 > 2) goto L_17e0; */
        /* fopAcM_delete(_savegpr_25(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* goto L_18a0; */
        /* L_17e0:; */
        /* cLib_addCalc2((_savegpr_25(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 7160)); */
        /* cLib_addCalc2((_savegpr_25(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 7164)); */
        /* if (this->field_0x1c68 == 0) goto L_1830; */
        /* field_0x1c0e = 10; */
        /* L_1830:; */
        /* if (this->field_0x1c0e == 0) goto L_185c; */
        /* field_0x1c0e = (this->field_0x1c0e + -1); */
        /* cLib_addCalc2((_savegpr_25(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 7168)); */
        /* goto L_186c; */
        /* L_185c:; */
        /* cLib_addCalc0((_savegpr_25(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 7168)); */
        /* L_186c:; */
        /* if (this->field_0x1c0e <= 4) goto L_1890; */
        /* cLib_addCalc2((_savegpr_25(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 7172)); */
        /* goto L_18a0; */
        /* L_1890:; */
        /* L_18a0:; */
        /* return _restgpr_25(cLib_addCalc0((_savegpr_25(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 7172))); */
}

/* 000019C0-00001A3C       .text daMant_Execute__FP10mant_class */
static BOOL daMant_Execute(mant_class*) {
    /* field_0x1248 = (this->field_0x1248 + 1); */
    if (this->field_0x2836 != 0) {
        /* field_0x2836 = (this->field_0x2836 + -1); */
    }
    mant_move(arg0);
    MtxTrans(0);
    PSMTXCopy(this->field_0x0, (arg0 + 10244));
    return 1;
}

/* 00001A3C-00001A44       .text daMant_IsDelete__FP10mant_class */
static BOOL daMant_IsDelete(mant_class*) {
    return 1;
}

/* 00001A44-00001A4C       .text daMant_Delete__FP10mant_class */
static BOOL daMant_Delete(mant_class*) {
    return 1;
}

/* 00001A4C-00001D18       .text daMant_Create__FP10fopAc_ac_c */
static cPhs_State daMant_Create(fopAc_ac_c*) {
    /* Nonmatching */
    static dCcD_SrcSph wind_cc_sph_src = {
        // dCcD_SrcGObjInf
        {
            /* Flags             */ 0,
            /* SrcObjAt  Type    */ 0,
            /* SrcObjAt  Atp     */ 0,
            /* SrcObjAt  SPrm    */ 0,
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
            /* SrcGObjTg SPrm    */ 0,
            /* SrcGObjCo SPrm    */ 0,
        },
        // cM3dGSphS
        {{
            /* Center */ {0.0f, 0.0f, 0.0f},
            /* Radius */ 200.0f,
        }},
    };
    static dCcD_SrcSph mesh_cc_sph_src = {
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
            /* SrcGObjTg SPrm    */ 0,
            /* SrcGObjCo SPrm    */ 0,
        },
        // cM3dGSphS
        {{
            /* Center */ {0.0f, 0.0f, 0.0f},
            /* Radius */ 30.0f,
        }},
    };

static actor_method_class l_daMant_Method = {
    (process_method_func)daMant_Create,
    (process_method_func)daMant_Delete,
    (process_method_func)daMant_Execute,
    (process_method_func)daMant_IsDelete,
    (process_method_func)daMant_Draw,
};

actor_process_profile_definition g_profile_MANT = {
    /* Layer ID     */ fpcLy_CURRENT_e,
    /* List ID      */ 0x0007,
    /* List Prio    */ fpcPi_CURRENT_e,
    /* Proc Name    */ fpcNm_MANT_e,
    /* Proc SubMtd  */ &g_fpcLf_Method.base,
    /* Size         */ sizeof(mant_class),
    /* Size Other   */ 0,
    /* Parameters   */ 0,
    /* Leaf SubMtd  */ &g_fopAc_Method.base,
    /* Draw Prio    */ fpcDwPi_MANT_e,
    /* Actor SubMtd */ &l_daMant_Method,
    /* Status       */ fopAcStts_CULL_e | fopAcStts_UNK4000_e | fopAcStts_UNK40000_e,
    /* Group        */ fopAc_ACTOR_e,
    /* Cull Type    */ fopAc_CULLBOX_CUSTOM_e,
};

/* 由 fix_decomp_braces.py 补齐：反编译产物末尾缺 1 个 } */
}
