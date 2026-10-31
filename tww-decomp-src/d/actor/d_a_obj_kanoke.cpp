/**
 * d_a_obj_kanoke.cpp
 * Object - Earth Temple - Coffin
 */

#include "d/dolzel_rel.h" // IWYU pragma: keep
#include "d/actor/d_a_obj_kanoke.h"
#include "d/d_cc_d.h"

static dCcD_SrcCps l_cps_src_body = {
    // dCcD_SrcGObjInf
    {
        /* Flags             */ 0,
        /* SrcObjAt  Type    */ 0,
        /* SrcObjAt  Atp     */ 0,
        /* SrcObjAt  SPrm    */ 0,
        /* SrcObjTg  Type    */ AT_TYPE_LIGHT,
        /* SrcObjTg  SPrm    */ cCcD_TgSPrm_Set_e | cCcD_TgSPrm_IsEnemy_e,
        /* SrcObjCo  SPrm    */ 0,
        /* SrcGObjAt Se      */ 0,
        /* SrcGObjAt HitMark */ dCcG_AtHitMark_None_e,
        /* SrcGObjAt Spl     */ dCcG_At_Spl_UNK0,
        /* SrcGObjAt Mtrl    */ 0,
        /* SrcGObjAt SPrm    */ dCcG_AtSPrm_NoConHit_e,
        /* SrcGObjTg Se      */ 0,
        /* SrcGObjTg HitMark */ 0,
        /* SrcGObjTg Spl     */ dCcG_Tg_Spl_UNK0,
        /* SrcGObjTg Mtrl    */ 0,
        /* SrcGObjTg SPrm    */ dCcG_TgSPrm_NoHitMark_e,
        /* SrcGObjCo SPrm    */ 0,
    },
    // cM3dGCpsS
    {{
        /* Start  */ {0.0f, 50.0f, -100.0f},
        /* End    */ {0.0f, 50.0f, 100.0f},
        /* Radius */ 100.0f,
    }},
};


static dCcD_SrcCps l_cps_src_huta = {
    // dCcD_SrcGObjInf
    {
        /* Flags             */ 0,
        /* SrcObjAt  Type    */ AT_TYPE_UNK800,
        /* SrcObjAt  Atp     */ 1,
        /* SrcObjAt  SPrm    */ cCcD_AtSPrm_Set_e | cCcD_AtSPrm_GrpAll_e,
        /* SrcObjTg  Type    */ 0,
        /* SrcObjTg  SPrm    */ 0,
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
    // cM3dGCpsS
    {{
        /* Start  */ {0.0f, 50.0f, -100.0f},
        /* End    */ {0.0f, 50.0f, 100.0f},
        /* Radius */ 25.0f,
    }},
};


/* 000000EC-000002F4       .text __ct__13daObjKanoke_cFv */
daObjKanoke_c::daObjKanoke_c() {
    /* __ct__13daObjKanoke_cFv: 无实义指令 */
}

/* 00000644-00000664       .text CheckCreateHeap__FP10fopAc_ac_c */
static BOOL CheckCreateHeap(fopAc_ac_c* i_this) {
    static_cast<daObjKanoke_c*>(i_this)->createHeap();
    return TRUE;
}

/* 00000664-00000700       .text _create__13daObjKanoke_cFv */
cPhs_State daObjKanoke_c::_create() {
        /* if (/ * bne * / 1) goto L_5b0; */
        /* if (this == 0) goto L_5a4; */
        __ct();
        /* L_5a4:; */
        /* L_5b0:; */
        /* if (dComIfG_resLoad((this + 656), ((char*)&@stringBase0 + 0)) != 4) goto L_600; */
        /* if (fopAcM_entrySolidHeap(this, ((char*)&CheckCreateHeap__FP10fopAc_ac_c + 0), 9216) == 0) goto L_5f0; */
        createInit();
        /* goto L_600; */
        /* L_5f0:; */
        /* field_0x2a4 = 0; */
        /* field_0x2a0 = 0; */
        /* L_600:; */
        return 5;
}

/* 00000700-000008BC       .text createHeap__13daObjKanoke_cFv */
void daObjKanoke_c::createHeap() {
    if (((dRes_control_c*)(((char*)&@stringBase0 + 0)))->getRes(4) == 0) {
        return 0;
    }
    /* field_0x298 = mDoExt_J3DModel(0, 0); */
    if (this->field_0x298 == 0) {
        return 0;
    }
    __nw(188);
    if (/* beq */ 1) {
    }
    /* field_0x2a0 = __ct(); */
    if (this->field_0x2a0 == 0) {
        return 0;
    }
    /* if ((((cBgW*)(this->field_0x2a0))->Set(((dRes_control_c*)(((char*)&@stringBase0 + 0)))->getRes(8), 1, (this + 680)) & 16777215) == 1) { */
        /* return 0; */
    if (((dRes_control_c*)(((char*)&@stringBase0 + 0)))->getRes(5) == 0) {
        return 0;
    }
    /* field_0x29c = mDoExt_J3DModel(0, 0); */
    if (this->field_0x29c == 0) {
        return 0;
    }
    __nw(188);
    if (/* beq */ 1) {
    }
    /* field_0x2a4 = __ct(); */
    if (this->field_0x2a4 == 0) {
        return 0;
    }
    /* return (1 - (((cBgW*)(this->field_0x2a4))->Set(((dRes_control_c*)(((char*)&@stringBase0 + 0)))->getRes(9), 1, (this + 728)) & 16777215)); */
}

/* 000008BC-00000B28       .text createInit__13daObjKanoke_cFv */
void daObjKanoke_c::createInit() {
        /* if (((dBgS*)(((char*)&g_dComIfG_gameInfo + 4768)))->Regist(this->field_0x2a0, _savegpr_25(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)) == 0) goto L_81c; */
        return 5;
        /* L_81c:; */
        /* if (this->field_0x88d == 255) goto L_8dc; */
        /* if (((dSv_info_c*)(((char*)&g_dComIfG_gameInfo + 0)))->isSwitch(this->field_0x88d, (this->field_0x1e2 & 255)) == 0) goto L_8bc; */
        /* field_0x88b = 7; */
        /* if (this->field_0x88a != 0) goto L_8ac; */
        /* if (((dBgS*)(((char*)&g_dComIfG_gameInfo + 4768)))->Regist(this->field_0x2a4, _savegpr_25(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)) == 0) goto L_878; */
        return 5;
        /* L_878:; */
        /* field_0x860 = 0; */
        /* field_0x864 = 0; */
        /* field_0x868 = 0; */
        /* field_0x86c = 0; */
        /* field_0x870 = 0; */
        /* field_0x874 = 0; */
        /* field_0x880 = -5600; */
        /* goto L_8fc; */
        /* L_8ac:; */
        /* goto L_8fc; */
        /* L_8bc:; */
        /* if (((dBgS*)(((char*)&g_dComIfG_gameInfo + 4768)))->Regist(this->field_0x2a4, _savegpr_25(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)) == 0) goto L_8fc; */
        return 5;
        /* L_8dc:; */
        /* if (((dBgS*)(((char*)&g_dComIfG_gameInfo + 4768)))->Regist(this->field_0x2a4, _savegpr_25(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)) == 0) goto L_8fc; */
        return 5;
        /* L_8fc:; */
        /* ((dCcD_Stts*)((_savegpr_25(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 776)))->Init(255, 255, _savegpr_25(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* ((dCcD_Cps*)((_savegpr_25(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 836)))->Set(((char*)&l_cps_src_body + 0)); */
        /* field_0x388 = (_savegpr_25(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 776); */
        /* field_0x45c = 0; */
        /* field_0x460 = 0; */
        /* field_0x464 = 0; */
        /* field_0x468 = 0; */
        /* field_0x46c = 0; */
        /* field_0x470 = 0; */
        /* L_968:; */
        /* ((dCcD_Cps*)(((_savegpr_25(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 0) + 1148)))->Set(((char*)&l_cps_src_huta + 0)); */
        /* field_0x4c0 = (_savegpr_25(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 776); */
        /* field_0x594 = 0; */
        /* field_0x598 = 0; */
        /* field_0x59c = 0; */
        /* field_0x5a0 = 0; */
        /* field_0x5a4 = 0; */
        /* field_0x5a8 = 0; */
        /* if ((0 + 1) < 3) goto L_968; */
        cullMtx = (this->field_0x298 + 36);
        /* ((daObjKanoke_c*)(_savegpr_25(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->setMtx(); */
        /* if (this->field_0x88a != 0) goto L_a00; */
        /* fopAcM_setCullSizeBox(_savegpr_25(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* goto L_a20; */
        /* L_a00:; */
        /* fopAcM_setCullSizeBox(_savegpr_25(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* L_a20:; */
        return _restgpr_25(4);
}

/* 00000B28-00000C0C       .text _delete__13daObjKanoke_cFv */
BOOL daObjKanoke_c::_delete() {
        /* if (heap == 0) goto L_ae4; */
        /* if (this->field_0x2a0 == 0) goto L_aa0; */
        /* if (base < 0) goto L_a84; */
        /* if (base >= 256) goto L_a84; */
        /* goto L_a88; */
        /* L_a84:; */
        /* L_a88:; */
        /* if (0 == 0) goto L_aa0; */
        /* ((cBgS*)(((char*)&g_dComIfG_gameInfo + 4768)))->Release(this->field_0x2a0); */
        /* L_aa0:; */
        /* if (this->field_0x2a4 == 0) goto L_ae4; */
        /* if (base < 0) goto L_ac8; */
        /* if (base >= 256) goto L_ac8; */
        /* goto L_acc; */
        /* L_ac8:; */
        /* L_acc:; */
        /* if (0 == 0) goto L_ae4; */
        /* ((cBgS*)(((char*)&g_dComIfG_gameInfo + 4768)))->Release(this->field_0x2a4); */
        /* L_ae4:; */
        dComIfG_resDelete((this + 656), ((char*)&@stringBase0 + 0));
        return 1;
}

/* 00000C0C-00000CE0       .text _draw__13daObjKanoke_cFv */
BOOL daObjKanoke_c::_draw() {
    ((dScnKy_env_light_c*)(((char*)&g_env_light + 0)))->settingTevStruct(1, (this + 504), (this + 268));
    ((dScnKy_env_light_c*)(((char*)&g_env_light + 0)))->setLightTevColorType(this->field_0x298, (this + 268));
    ((dScnKy_env_light_c*)(((char*)&g_env_light + 0)))->setLightTevColorType(this->field_0x29c, (this + 268));
    if (this->field_0x88f != 0) {
        /* mDoExt_modelUpdateDL(this->field_0x298); */
    }
    if (/* bne */ 1) {
        /* mDoExt_modelUpdateDL(this->field_0x29c); */
    }
    return 1;
}

/* 00000CE0-00000E7C       .text _execute__13daObjKanoke_cFv */
BOOL daObjKanoke_c::_execute() {
        /* mDoMtx_YrotS(((char*)&now__14mDoMtx_stack_c + 0), this->field_0x20e); */
        mDoMtx_XrotM(((char*)&now__14mDoMtx_stack_c + 0), shape_angle);
        PSMTXMultVec(((char*)&now__14mDoMtx_stack_c + 0));
        PSVECAdd();
        /* field_0x45c = 0; */
        /* field_0x460 = 0; */
        /* field_0x464 = 0; */
        /* field_0x468 = 0; */
        /* field_0x46c = 0; */
        /* field_0x470 = 0; */
        /* field_0x478 = 0; */
        ((cCcS*)(((char*)&g_dComIfG_gameInfo + 9892)))->Set((this + 836));
        __ptmf_scall(this, moveProc, (this->field_0x88b * 12));
        setMtx();
        /* if (base < 0) goto L_d34; */
        /* if (base >= 256) goto L_d34; */
        /* goto L_d38; */
        /* L_d34:; */
        /* L_d38:; */
        /* if (0 == 0) goto L_d44; */
        /* ((dBgW*)(this->field_0x2a0))->Move(); */
        /* L_d44:; */
        /* if (base < 0) goto L_d64; */
        /* if (base >= 256) goto L_d64; */
        /* goto L_d68; */
        /* L_d64:; */
        /* L_d68:; */
        /* if (0 == 0) goto L_d74; */
        /* ((dBgW*)(this->field_0x2a4))->Move(); */
        /* L_d74:; */
        return 1;
}

/* 00000E7C-0000122C       .text executeNormal__13daObjKanoke_cFv */
void daObjKanoke_c::executeNormal() {
        /* _savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* if (this->field_0x88d == 255) goto L_de4; */
        /* if (((dSv_info_c*)(((char*)&g_dComIfG_gameInfo + 0)))->isSwitch(this->field_0x88d, (this->field_0x1e2 & 255)) == 0) goto L_de4; */
        /* goto L_f18; */
        /* L_de4:; */
        /* if (((dDetect_c*)(((char*)&g_dComIfG_gameInfo + 23076)))->chk_light((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 504)) != 0) goto L_e0c; */
        /* if (this->field_0x360 == 0) goto L_e34; */
        /* L_e0c:; */
        /* field_0x888 = (this->field_0x888 + 1); */
        /* if (this->field_0x888 <= 20) goto L_f18; */
        /* field_0x36c = 0; */
        /* goto L_f18; */
        /* L_e34:; */
        /* field_0x888 = 0; */
        /* if (this->field_0x88c == 0) goto L_f18; */
        __mi();
        PSVECSquareMag();
        /* if (/ * ble * / 1) goto L_ee8; */
        /* L_ee8:; */
        /* if (/ * bge * / 1) goto L_f18; */
        /* L_f18:; */
        /* if (1 == 0) goto L_1124; */
        /* if (this->field_0x88d == 255) goto L_f54; */
        ((dSv_info_c*)(((char*)&g_dComIfG_gameInfo + 0)))->onSwitch(this->field_0x88d, (this->field_0x1e2 & 255));
        /* L_f54:; */
        /* field_0x882 = 0; */
        /* if (((daObjKanoke_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->getPrmYure() == 0) goto L_1038; */
        /* field_0x884 = 0; */
        /* if (this->field_0x88a != 0) goto L_fdc; */
        /* ((JAIZelBasic*)(base))->seStart(26971, (_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 504), 0, dComIfGp_getReverb((this->field_0x20a & 255)), 0); */
        /* field_0x88b = 1; */
        /* field_0x880 = 0; */
        /* field_0x886 = 256; */
        /* goto L_1124; */
        /* L_fdc:; */
        /* ((JAIZelBasic*)(base))->seStart(26969, (_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 504), 0, dComIfGp_getReverb((this->field_0x20a & 255)), 0); */
        /* field_0x88b = 4; */
        /* field_0x87e = 0; */
        /* field_0x886 = 1024; */
        /* goto L_1124; */
        /* L_1038:; */
        /* if (this->field_0x88a != 0) goto L_1098; */
        /* ((JAIZelBasic*)(base))->seStart(26972, (_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 504), 0, dComIfGp_getReverb((this->field_0x20a & 255)), 0); */
        /* field_0x88b = 2; */
        /* field_0x880 = 0; */
        /* goto L_1124; */
        /* L_1098:; */
        /* ((JAIZelBasic*)(base))->seStart(26970, (_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 504), 0, dComIfGp_getReverb((this->field_0x20a & 255)), 0); */
        /* field_0x88b = 5; */
        /* if (base < 0) goto L_1100; */
        /* if (base >= 256) goto L_1100; */
        /* goto L_1104; */
        /* L_1100:; */
        /* L_1104:; */
        /* if (0 == 0) goto L_111c; */
        /* ((cBgS*)(((char*)&g_dComIfG_gameInfo + 4768)))->Release(this->field_0x2a4); */
        /* L_111c:; */
        /* field_0x87c = 0; */
        /* L_1124:; */
        /* return _restgpr_29(((cBgS*)(((char*)&g_dComIfG_gameInfo + 4768)))->Release(this->field_0x2a4)); */
}

/* 0000122C-00001358       .text executeYureYoko__13daObjKanoke_cFv */
void daObjKanoke_c::executeYureYoko() {
    /* field_0x884 = (this->field_0x884 + 8192); */
    /* field_0x886 = (this->field_0x886 + -8); */
    if (this->field_0x880 < 0) {
        /* field_0x86c = 0; */
    } else {
        /* field_0x86c = 0; */
    }
    if (this->field_0x886 <= 0) {
        ((JAIZelBasic*)(base))->seStart(26972, (this + 504), 0, dComIfGp_getReverb((this->field_0x20a & 255)), 0);
        /* field_0x88b = 2; */
        /* field_0x880 = 0; */
        /* field_0x86c = 0; */
    }
    return ((JAIZelBasic*)(base))->seStart(26972, (this + 504), 0, dComIfGp_getReverb((this->field_0x20a & 255)), 0);
}

/* 00001358-00001544       .text executeOpenYoko__13daObjKanoke_cFv */
void daObjKanoke_c::executeOpenYoko() {
        /* field_0x860 = (this->field_0x860 + this->field_0x68); */
        /* field_0x86c = (this->field_0x38 - this->field_0x860); */
        /* if (this->field_0x860 <= this->field_0x38) goto L_143c; */
        /* field_0x880 = (this->field_0x880 + this->field_0x882); */
        /* field_0x882 = (this->field_0x882 + -100); */
        /* if (this->field_0x880 > -5600) goto L_143c; */
        /* field_0x880 = -5600; */
        /* field_0x88b = 3; */
        /* ((mDoMtx_stack_c*)(mDoMtx_YrotS(((char*)&now__14mDoMtx_stack_c + 0), this->field_0x20e)))->transM(); */
        /* ((mDoMtx_stack_c*)(mDoMtx_ZrotM(((char*)&now__14mDoMtx_stack_c + 0), this->field_0x880)))->transM(); */
        PSMTXCopy(((char*)&now__14mDoMtx_stack_c + 0));
        /* field_0x858 = 0; */
        /* field_0x85c = 0; */
        /* field_0x878 = 0; */
        __pl();
        PSMTXMultVec();
        __pl();
        /* field_0x84c = 0; */
        /* field_0x850 = 0; */
        /* field_0x854 = 0; */
        /* if (this->field_0x830 != 0) goto L_141c; */
        /* ((dPa_control_c*)(this->field_0x5ab8))->set(2); */
        /* L_141c:; */
        /* if (this->field_0x830 == 0) goto L_1434; */
        /* L_1434:; */
        /* field_0x884 = 60; */
        /* L_143c:; */
        /* return this->field_0x830; */
}

/* 00001544-000015F8       .text executeEffectYoko__13daObjKanoke_cFv */
void daObjKanoke_c::executeEffectYoko() {
        /* field_0x884 = (this->field_0x884 + -1); */
        /* if (this->field_0x884 == 0) goto L_14d8; */
        /* if (this->field_0x884 > 50) goto L_14f4; */
        /* field_0x878 = (this->field_0x878 - base); */
        /* if (this->field_0x878 >= base) goto L_14b4; */
        /* field_0x878 = 0; */
        /* L_14b4:; */
        /* if (this->field_0x830 == 0) goto L_14f4; */
        /* goto L_14f4; */
        /* L_14d8:; */
        /* field_0x88b = 7; */
        /* L_14f4:; */
        return (this + 2092);
}

/* 000015F8-00001764       .text executeYureTate__13daObjKanoke_cFv */
void daObjKanoke_c::executeYureTate() {
        /* field_0x884 = (this->field_0x884 + 8192); */
        /* field_0x886 = (this->field_0x886 + -32); */
        /* if (this->field_0x87e >= 0) goto L_15b0; */
        /* field_0x86c = 0; */
        /* goto L_15b8; */
        /* L_15b0:; */
        /* field_0x86c = 0; */
        /* L_15b8:; */
        /* if (this->field_0x886 > 0) goto L_165c; */
        ((JAIZelBasic*)(base))->seStart(26970, (this + 504), 0, dComIfGp_getReverb((this->field_0x20a & 255)), 0);
        /* field_0x88b = 5; */
        /* if (base < 0) goto L_162c; */
        /* if (base >= 256) goto L_162c; */
        /* goto L_1630; */
        /* L_162c:; */
        /* L_1630:; */
        /* if (0 == 0) goto L_1648; */
        /* ((cBgS*)(((char*)&g_dComIfG_gameInfo + 4768)))->Release(this->field_0x2a4); */
        /* L_1648:; */
        /* field_0x87c = 0; */
        /* field_0x87e = 0; */
        /* field_0x86c = 0; */
        /* L_165c:; */
        /* return ((cBgS*)(((char*)&g_dComIfG_gameInfo + 4768)))->Release(this->field_0x2a4); */
}

/* 00001764-00001A6C       .text executeOpenTate__13daObjKanoke_cFv */
void daObjKanoke_c::executeOpenTate() {
        /* _savegpr_24(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* field_0x87c = (this->field_0x87c + this->field_0x882); */
        /* field_0x882 = (this->field_0x882 + 100); */
        /* if (this->field_0x87c < 16384) goto L_1804; */
        ((dVibration_c*)(((char*)&g_dComIfG_gameInfo + 22944)))->StartShock(4, -33);
        /* field_0x87c = 16384; */
        /* field_0x88b = 6; */
        /* field_0x84c = 0; */
        /* field_0x850 = 0; */
        /* field_0x854 = 0; */
        /* field_0x858 = 0; */
        /* field_0x85c = 0; */
        /* field_0x824 = ((dPa_control_c*)(this->field_0x5ab8))->set(0); */
        /* field_0x878 = 0; */
        /* if (this->field_0x830 != 0) goto L_17e0; */
        /* ((dPa_control_c*)(this->field_0x5ab8))->set(2); */
        /* L_17e0:; */
        /* if (this->field_0x830 == 0) goto L_17f8; */
        /* L_17f8:; */
        /* field_0x884 = 60; */
        /* goto L_1964; */
        /* L_1804:; */
        /* mDoMtx_YrotS(((char*)&now__14mDoMtx_stack_c + 0), this->field_0x20e); */
        ((mDoMtx_stack_c*)(mDoMtx_XrotM(((char*)&now__14mDoMtx_stack_c + 0), shape_angle)))->transM();
        /* ((mDoMtx_stack_c*)(mDoMtx_XrotM(((char*)&now__14mDoMtx_stack_c + 0), this->field_0x87c)))->transM(); */
        /* L_187c:; */
        __pl();
        PSMTXMultVec(((char*)&now__14mDoMtx_stack_c + 0));
        PSVECAdd();
        /* field_0x594 = 0; */
        /* field_0x598 = 0; */
        /* field_0x59c = 0; */
        /* field_0x5a0 = 0; */
        /* field_0x5a4 = 0; */
        /* field_0x5a8 = 0; */
        /* ((cCcS*)(((char*)&g_dComIfG_gameInfo + 9892)))->Set(((_savegpr_24(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 0) + 1148)); */
        /* if ((0 + 1) < 3) goto L_187c; */
        /* L_1964:; */
        /* return _restgpr_24(((cCcS*)(((char*)&g_dComIfG_gameInfo + 9892)))->Set(((_savegpr_24(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 0) + 1148))); */
}

/* 00001A6C-00001B24       .text executeEffectTate__13daObjKanoke_cFv */
void daObjKanoke_c::executeEffectTate() {
        /* field_0x884 = (this->field_0x884 + -1); */
        /* if (this->field_0x884 == 0) goto L_1a04; */
        /* if (this->field_0x830 == 0) goto L_1a20; */
        /* if (this->field_0x884 > 50) goto L_1a20; */
        /* field_0x878 = (this->field_0x878 - base); */
        /* if (this->field_0x878 >= base) goto L_19e8; */
        /* field_0x878 = 0; */
        /* L_19e8:; */
        /* goto L_1a20; */
        /* L_1a04:; */
        /* field_0x88b = 7; */
        /* L_1a20:; */
        return (this + 2092);
}

/* 00001B24-00001B28       .text executeWait__13daObjKanoke_cFv */
void daObjKanoke_c::executeWait() {
}

/* 00001B28-00001B54       .text getPrmType__13daObjKanoke_cFv */
void daObjKanoke_c::getPrmType() {
    /* return (PrmAbstract<Q213daObjKanoke_c5Prm_e>__5daObjFPC10fopAc_ac_cQ213daObjKanoke_c5Prm_eQ213daObjKanoke_c5Prm_e(this, 1, 0, arg3, arg4, arg5, arg6, arg7) & 16777215); */
}

/* 00001B54-00001B80       .text getPrmSearch__13daObjKanoke_cFv */
void daObjKanoke_c::getPrmSearch() {
    /* return (PrmAbstract<Q213daObjKanoke_c5Prm_e>__5daObjFPC10fopAc_ac_cQ213daObjKanoke_c5Prm_eQ213daObjKanoke_c5Prm_e(this, 5, 1, arg3, arg4, arg5, arg6, arg7) & 16777215); */
}

/* 00001B80-00001BAC       .text getPrmYure__13daObjKanoke_cFv */
void daObjKanoke_c::getPrmYure() {
    /* return (PrmAbstract<Q213daObjKanoke_c5Prm_e>__5daObjFPC10fopAc_ac_cQ213daObjKanoke_c5Prm_eQ213daObjKanoke_c5Prm_e(this, 1, 6, arg3, arg4, arg5, arg6, arg7) & 16777215); */
}

/* 00001BAC-00001BD8       .text getPrmSwNo__13daObjKanoke_cFv */
void daObjKanoke_c::getPrmSwNo() {
    /* return (PrmAbstract<Q213daObjKanoke_c5Prm_e>__5daObjFPC10fopAc_ac_cQ213daObjKanoke_c5Prm_eQ213daObjKanoke_c5Prm_e(this, 8, 8, arg3, arg4, arg5, arg6, arg7) & 16777215); */
}

/* 00001BD8-00001C04       .text getPrmSwNo2__13daObjKanoke_cFv */
void daObjKanoke_c::getPrmSwNo2() {
    /* return (PrmAbstract<Q213daObjKanoke_c5Prm_e>__5daObjFPC10fopAc_ac_cQ213daObjKanoke_c5Prm_eQ213daObjKanoke_c5Prm_e(this, 8, 16, arg3, arg4, arg5, arg6, arg7) & 16777215); */
}

/* 00001C04-00001C9C       .text setMtx__13daObjKanoke_cFv */
void daObjKanoke_c::setMtx() {
    if (this->field_0x88f != 0) {
        setMtxHontai();
        PSMTXCopy(((char*)&now__14mDoMtx_stack_c + 0), (this->field_0x298 + 36));
        PSMTXCopy(((char*)&now__14mDoMtx_stack_c + 0), (this + 680));
    }
    if (/* bne */ 1) {
        setMtxHuta((this + 504));
        PSMTXCopy(((char*)&now__14mDoMtx_stack_c + 0), (this->field_0x29c + 36));
    }
    return PSMTXCopy(((char*)&now__14mDoMtx_stack_c + 0), (this + 728));
}

/* 00001C9C-00001D38       .text setMtxHontai__13daObjKanoke_cFv */
void daObjKanoke_c::setMtxHontai() {
    /* PSMTXTrans(((char*)&now__14mDoMtx_stack_c + 0), arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
    /* mDoMtx_YrotM(((char*)&now__14mDoMtx_stack_c + 0), this->field_0x20e); */
    ((mDoMtx_stack_c*)(mDoMtx_XrotM(((char*)&now__14mDoMtx_stack_c + 0), shape_angle)))->transM();
    /* return ((mDoMtx_stack_c*)(mDoMtx_YrotM(((char*)&now__14mDoMtx_stack_c + 0), this->field_0x87e)))->transM(); */
}

/* 00001D38-00001E4C       .text setMtxHuta__13daObjKanoke_cFP4cXyz */
void daObjKanoke_c::setMtxHuta(cXyz*) {
    /* mDoMtx_YrotS(((char*)&now__14mDoMtx_stack_c + 0), this->field_0x20e); */
    mDoMtx_XrotM(((char*)&now__14mDoMtx_stack_c + 0), shape_angle);
    PSMTXMultVec(((char*)&now__14mDoMtx_stack_c + 0), (this + 2144));
    PSMTXTrans(((char*)&now__14mDoMtx_stack_c + 0));
    /* mDoMtx_YrotM(((char*)&now__14mDoMtx_stack_c + 0), this->field_0x20e); */
    ((mDoMtx_stack_c*)(mDoMtx_XrotM(((char*)&now__14mDoMtx_stack_c + 0), shape_angle)))->transM();
    /* mDoMtx_XrotM(((char*)&now__14mDoMtx_stack_c + 0), this->field_0x87c); */
    /* mDoMtx_YrotM(((char*)&now__14mDoMtx_stack_c + 0), this->field_0x87e); */
    /* return ((mDoMtx_stack_c*)(mDoMtx_ZrotM(((char*)&now__14mDoMtx_stack_c + 0), this->field_0x880)))->transM(); */
}

/* 00001E4C-00001E6C       .text daObjKanokeCreate__FPv */
static cPhs_State daObjKanokeCreate(void* i_this) {
    return ((daObjKanoke_c*)i_this)->_create();
}

/* 00001E6C-00001E8C       .text daObjKanokeDelete__FPv */
static BOOL daObjKanokeDelete(void* i_this) {
    return ((daObjKanoke_c*)i_this)->_delete();
}

/* 00001E8C-00001EAC       .text daObjKanokeExecute__FPv */
static BOOL daObjKanokeExecute(void* i_this) {
    return ((daObjKanoke_c*)i_this)->_execute();
}

/* 00001EAC-00001ECC       .text daObjKanokeDraw__FPv */
static BOOL daObjKanokeDraw(void* i_this) {
    return ((daObjKanoke_c*)i_this)->_draw();
}

/* 00001ECC-00001ED4       .text daObjKanokeIsDelete__FPv */
static BOOL daObjKanokeIsDelete(void*) {
    return 1;

static actor_method_class daObjKanokeMethodTable = {
    (process_method_func)daObjKanokeCreate,
    (process_method_func)daObjKanokeDelete,
    (process_method_func)daObjKanokeExecute,
    (process_method_func)daObjKanokeIsDelete,
    (process_method_func)daObjKanokeDraw,
};

actor_process_profile_definition g_profile_Obj_Kanoke = {
    /* Layer ID     */ fpcLy_CURRENT_e,
    /* List ID      */ 0x0003,
    /* List Prio    */ fpcPi_CURRENT_e,
    /* Proc Name    */ fpcNm_Obj_Kanoke_e,
    /* Proc SubMtd  */ &g_fpcLf_Method.base,
    /* Size         */ sizeof(daObjKanoke_c),
    /* Size Other   */ 0,
    /* Parameters   */ 0,
    /* Leaf SubMtd  */ &g_fopAc_Method.base,
    /* Draw Prio    */ fpcDwPi_Obj_Kanoke_e,
    /* Actor SubMtd */ &daObjKanokeMethodTable,
    /* Status       */ 0x04 | fopAcStts_SHOWMAP_e | fopAcStts_NOCULLEXEC_e | fopAcStts_CULL_e | fopAcStts_UNK40000_e,
    /* Group        */ fopAc_ACTOR_e,
    /* Cull Type    */ fopAc_CULLBOX_CUSTOM_e,
};

/* 由 fix_decomp_braces.py 补齐：反编译产物末尾缺 1 个 } */
}
