/**
 * d_a_obj_ekskz.cpp
 * Object - Stone statue blowing strong gust of wind (Gale Isle)
 */

#include "d/dolzel_rel.h" // IWYU pragma: keep
#include "d/actor/d_a_obj_ekskz.h"
#include "d/d_cc_d.h"

static dCcD_SrcCyl cyl_check_src = {
    // dCcD_SrcGObjInf
    {
        /* Flags             */ 0,
        /* SrcObjAt  Type    */ 0,
        /* SrcObjAt  Atp     */ 0,
        /* SrcObjAt  SPrm    */ 0,
        /* SrcObjTg  Type    */ AT_TYPE_SKULL_HAMMER,
        /* SrcObjTg  SPrm    */ cCcD_TgSPrm_Set_e | cCcD_TgSPrm_IsOther_e,
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
    // cM3dGCylS
    {{
        /* Center */ {0.0f, 0.0f, 0.0f},
        /* Radius */ 100.0f,
        /* Height */ 300.0f,
    }},
};


/* 00000078-00000368       .text CreateHeap__Q210daObjEkskz5Act_cFv */
BOOL daObjEkskz::Act_c::CreateHeap() {
    /* CreateHeap__Q210daObjEkskz5Act_cFv: 无实义指令 */
}

/* 00000368-0000054C       .text Create__Q210daObjEkskz5Act_cFv */
BOOL daObjEkskz::Act_c::Create() {
    /* _savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
    cullMtx = (this->field_0x2d0 + 36);
    /* ((daObjEkskz::Act_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->init_mtx(); */
    /* fopAcM_setCullSizeBox(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
    /* ((dCcD_Stts*)((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 724)))->Init(255, 255, _savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
    /* ((dCcD_Cyl*)((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 784)))->Set(((char*)&cyl_check_src + 0)); */
    /* ((cM3dGCyl*)((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1064)))->SetC((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 504)); */
    /* field_0x354 = (_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 724); */
    /* field_0x480 = 0; */
    /* dKy_tevstr_init((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1300), this->field_0x1e2, 255); */
    /* ((dPa_control_c*)(this->field_0x5ab8))->set(2); */
    if (mCir != 0) {
    }
    if (this->field_0x4a8 != 0) {
    }
    attention_info = 49;
    /* field_0x278 = (this->field_0x1c + this->field_0x1fc); */
    /* field_0x264 = 0; */
    /* return _restgpr_29(1, this->field_0x59e, this->field_0x4a8); */
}

/* 0000054C-00000684       .text Mthd_Create__Q210daObjEkskz5Act_cFv */
cPhs_State daObjEkskz::Act_c::Mthd_Create() {
        /* if (/ * bne * / 1) goto L_510; */
        /* if (this == 0) goto L_504; */
        __ct();
        /* L_504:; */
        /* L_510:; */
        /* field_0x504 = 0; */
        /* field_0x508 = 0; */
        /* field_0x50c = 0; */
        /* field_0x510 = 0; */
        /* if (((dSv_info_c*)(((char*)&g_dComIfG_gameInfo + 0)))->isSwitch(PrmAbstract<Q310daObjEkskz5Act_c5Prm_e>__5daObjFPC10fopAc_ac_cQ310daObjEkskz5Act_c5Prm_eQ310daObjEkskz5Act_c5Prm_e(this, 8, 0), (this->field_0x1e2 & 255)) == 0) goto L_55c; */
        return 3;
        /* L_55c:; */
        /* if (dComIfG_resLoad((this + 712), ((char*)&M_arcname__Q210daObjEkskz5Act_c + 0)) != 4) goto L_5f0; */
        /* if ((MoveBGCreate(((char*)&M_arcname__Q210daObjEkskz5Act_c + 0), 23, 0, 10400) + -4) != 0) goto L_5b8; */
        /* L_5b8:; */
        /* if (0 != 0) goto L_5f0; */
        ((JUTAssertion*)(((JUTAssertion*)(-1))->getSDevice()))->showAssert(((char*)&@stringBase0 + 0), 318, ((char*)&@stringBase0 + 86));
        OSPanic(((char*)&@stringBase0 + 0), 318, ((char*)&@stringBase0 + 34));
        /* L_5f0:; */
        return MoveBGCreate(((char*)&M_arcname__Q210daObjEkskz5Act_c + 0), 23, 0, 10400);
}

/* 00000C00-00000C64       .text Delete__Q210daObjEkskz5Act_cFv */
BOOL daObjEkskz::Act_c::Delete() {
    /* _savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
    /* L_ba8:; */
    /* if ((0 + 1) >= 4) goto L_ba8; */
    return _restgpr_29(1);
}

/* 00000C64-00000CBC       .text Mthd_Delete__Q210daObjEkskz5Act_cFv */
BOOL daObjEkskz::Act_c::Mthd_Delete() {
    MoveBGDelete();
    if (this->field_0xd != 3) {
        dComIfG_resDelete((this + 712), ((char*)&M_arcname__Q210daObjEkskz5Act_c + 0));
    }
    return MoveBGDelete();
}

/* 00000CBC-00000D68       .text set_mtx__Q210daObjEkskz5Act_cFv */
void daObjEkskz::Act_c::set_mtx() {
    /* PSMTXTrans(((char*)&now__14mDoMtx_stack_c + 0), arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
    /* mDoMtx_ZXYrotM(((char*)&now__14mDoMtx_stack_c + 0), shape_angle, this->field_0x20e); */
    PSMTXCopy(((char*)&now__14mDoMtx_stack_c + 0), (this->field_0x2d0 + 36));
    PSMTXCopy(((char*)&now__14mDoMtx_stack_c + 0), (this->field_0x440 + 36));
    return PSMTXCopy(((char*)&now__14mDoMtx_stack_c + 0), ((char*)&M_tmp_mtx__Q210daObjEkskz5Act_c + 0));
}

/* 00000D68-00000DC0       .text init_mtx__Q210daObjEkskz5Act_cFv */
void daObjEkskz::Act_c::init_mtx() {
    /* field_0x18 = 0; */
    /* field_0x1c = 0; */
    /* field_0x20 = 0; */
    /* field_0x18 = 0; */
    /* field_0x1c = 0; */
    /* field_0x20 = 0; */
    return set_mtx();
}

/* 00000DC0-00000FFC       .text Execute__Q210daObjEkskz5Act_cFPPA3_A4_f */
BOOL daObjEkskz::Act_c::Execute(Mtx**) {
        /* ((mDoExt_baseAnm*)((_savegpr_25(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1092)))->play(); */
        /* ((mDoExt_baseAnm*)((_savegpr_25(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1132)))->play(); */
        /* ((cCcS*)(((char*)&g_dComIfG_gameInfo + 9892)))->Set((_savegpr_25(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 784)); */
        /* if (this->field_0x480 != 0) goto L_f04; */
        /* if (this->field_0x32c == 0) goto L_f04; */
        ((JAIZelBasic*)(base))->seStart(2054, 0, 0, 0, 0);
        /* ((dSv_info_c*)(((char*)&g_dComIfG_gameInfo + 0)))->onSwitch(PrmAbstract<Q310daObjEkskz5Act_c5Prm_e>__5daObjFPC10fopAc_ac_cQ310daObjEkskz5Act_c5Prm_eQ310daObjEkskz5Act_c5Prm_e(_savegpr_25(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7), 8, 0), (this->field_0x1e2 & 255)); */
        /* field_0x480 = 1; */
        /* field_0x50c = ((dPa_control_c*)(this->field_0x5ab8))->set(0); */
        /* if (this->field_0x50c == 0) goto L_eb0; */
        /* L_eb0:; */
        /* field_0x4f9 = 1; */
        /* field_0x4f6 = 1; */
        /* ((dPa_control_c*)(this->field_0x5ab8))->set(2); */
        /* field_0x500 = (_savegpr_25(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1300); */
        /* L_f04:; */
        /* if (this->field_0x480 != 1) goto L_f50; */
        /* ((mDoExt_baseAnm*)((_savegpr_25(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1108)))->play(); */
        /* if (this->field_0x5 != 0) goto L_f40; */
        /* if (/ * beq * / 1) goto L_f40; */
        /* L_f40:; */
        /* if (0 == 0) goto L_f50; */
        /* fopAcM_delete(_savegpr_25(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* L_f50:; */
        /* ((daObjEkskz::Act_c*)(_savegpr_25(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->set_mtx(); */
        base = 0;
        return _restgpr_25(1);
}

/* 00000FFC-00001124       .text Draw__Q210daObjEkskz5Act_cFv */
BOOL daObjEkskz::Act_c::Draw() {
    ((dScnKy_env_light_c*)(((char*)&g_env_light + 0)))->settingTevStruct(0, (this + 504), (this + 1300));
    ((dScnKy_env_light_c*)(((char*)&g_env_light + 0)))->setLightTevColorType(this->field_0x440, (this + 1300));
    /* ((mDoExt_bckAnm*)((this + 1092)))->entry(this->field_0x4); */
    /* ((mDoExt_btkAnm*)((this + 1132)))->entry(this->field_0x4); */
    /* ((mDoExt_brkAnm*)((this + 1108)))->entry(this->field_0x4); */
    /* mDoExt_modelUpdateDL(this->field_0x440); */
    ((dScnKy_env_light_c*)(((char*)&g_env_light + 0)))->settingTevStruct(1, (this + 504), (this + 268));
    ((dScnKy_env_light_c*)(((char*)&g_env_light + 0)))->setLightTevColorType(this->field_0x2d0, (this + 268));
    if (this->field_0x480 == 0) {
        /* mDoExt_modelUpdateDL(this->field_0x2d0); */
    }
    return 1;
}

namespace daObjEkskz {
namespace {
/* 00001124-00001144       .text Mthd_Create__Q210daObjEkskz27@unnamed@d_a_obj_ekskz_cpp@FPv */
cPhs_State Mthd_Create(void* i_this) {
    return ((daObjEkskz::Act_c*)i_this)->Mthd_Create();
}

/* 00001144-00001164       .text Mthd_Delete__Q210daObjEkskz27@unnamed@d_a_obj_ekskz_cpp@FPv */
BOOL Mthd_Delete(void* i_this) {
    return ((daObjEkskz::Act_c*)i_this)->Mthd_Delete();
}

/* 00001164-00001184       .text Mthd_Execute__Q210daObjEkskz27@unnamed@d_a_obj_ekskz_cpp@FPv */
BOOL Mthd_Execute(void* i_this) {
    return ((daObjEkskz::Act_c*)i_this)->MoveBGExecute();
}

/* 00001184-000011B0       .text Mthd_Draw__Q210daObjEkskz27@unnamed@d_a_obj_ekskz_cpp@FPv */
BOOL Mthd_Draw(void* i_this) {
    return ((daObjEkskz::Act_c*)i_this)->Draw();
}

/* 000011B0-000011DC       .text Mthd_IsDelete__Q210daObjEkskz27@unnamed@d_a_obj_ekskz_cpp@FPv */
BOOL Mthd_IsDelete(void* i_this) {
    return ((daObjEkskz::Act_c*)i_this)->IsDelete();
}

static actor_method_class Mthd_Ekskz = {
    (process_method_func)Mthd_Create,
    (process_method_func)Mthd_Delete,
    (process_method_func)Mthd_Execute,
    (process_method_func)Mthd_IsDelete,
    (process_method_func)Mthd_Draw,
};
}; // namespace
}; // namespace daObjEkskz

actor_process_profile_definition g_profile_Obj_Ekskz = {
    /* Layer ID     */ fpcLy_CURRENT_e,
    /* List ID      */ 0x0003,
    /* List Prio    */ fpcPi_CURRENT_e,
    /* Proc Name    */ fpcNm_Obj_Ekskz_e,
    /* Proc SubMtd  */ &g_fpcLf_Method.base,
    /* Size         */ sizeof(daObjEkskz::Act_c),
    /* Size Other   */ 0,
    /* Parameters   */ 0,
    /* Leaf SubMtd  */ &g_fopAc_Method.base,
    /* Draw Prio    */ fpcDwPi_Obj_Ekskz_e,
    /* Actor SubMtd */ &daObjEkskz::Mthd_Ekskz,
    /* Status       */ fopAcStts_NOCULLEXEC_e | fopAcStts_CULL_e | fopAcStts_UNK40000_e,
    /* Group        */ fopAc_ACTOR_e,
    /* Cull Type    */ fopAc_CULLBOX_CUSTOM_e,
};
