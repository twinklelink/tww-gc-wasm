/**
 * d_a_obj_aygr.cpp
 * Object - Lookout Platform
 */

#include "d/dolzel_rel.h" // IWYU pragma: keep
#include "d/actor/d_a_obj_aygr.h"

/* 00000078-000002A4       .text CreateHeap__Q29daObjAygr5Act_cFv */
BOOL daObjAygr::Act_c::CreateHeap() {
    /* CreateHeap__Q29daObjAygr5Act_cFv: 无实义指令 */
}

/* 000002A4-00000310       .text Create__Q29daObjAygr5Act_cFv */
BOOL daObjAygr::Act_c::Create() {
    cullMtx = (this->field_0x2d0 + 36);
    init_mtx();
    fopAcM_setCullSizeBox(this);
    return 1;
}

/* 00000310-000004D4       .text Mthd_Create__Q29daObjAygr5Act_cFv */
cPhs_State daObjAygr::Act_c::Mthd_Create() {
        /* if (/ * bne * / 1) goto L_2e0; */
        /* if (this == 0) goto L_2d4; */
        __ct();
        mAcch = 0;
        /* L_2d4:; */
        /* L_2e0:; */
        /* field_0x30c = 0; */
        /* if (dComIfG_resLoad((this + 712), ((char*)&M_arcname__Q29daObjAygr5Act_c + 0)) != 4) goto L_440; */
        MoveBGCreate(((char*)&M_arcname__Q29daObjAygr5Act_c + 0), 8, 0);
        /* if (mPhase == 0) goto L_370; */
        /* if (base < 0) goto L_350; */
        /* if (base >= 256) goto L_350; */
        /* goto L_354; */
        /* L_350:; */
        /* L_354:; */
        /* if (0 == 0) goto L_370; */
        ((dBgW*)(mPhase))->Move();
        /* L_370:; */
        /* if (PrmAbstract<Q39daObjAygr5Act_c5Prm_e>__5daObjFPC10fopAc_ac_cQ39daObjAygr5Act_c5Prm_eQ39daObjAygr5Act_c5Prm_e(this, 1, 0) == 0) goto L_3e8; */
        ((dBgS*)(((char*)&g_dComIfG_gameInfo + 4768)))->Regist(this->field_0x2d8, this);
        /* if (this->field_0x2d8 == 0) goto L_3e8; */
        /* if (base < 0) goto L_3c8; */
        /* if (base >= 256) goto L_3c8; */
        /* goto L_3cc; */
        /* L_3c8:; */
        /* L_3cc:; */
        /* if (0 == 0) goto L_3e8; */
        /* ((dBgW*)(this->field_0x2d8))->Move(); */
        /* L_3e8:; */
        /* if ((MoveBGCreate(((char*)&M_arcname__Q29daObjAygr5Act_c + 0), 8, 0) + -4) != 0) goto L_408; */
        /* L_408:; */
        /* if (0 != 0) goto L_440; */
        ((JUTAssertion*)(((JUTAssertion*)(-1))->getSDevice()))->showAssert(((char*)&@stringBase0 + 0), 183, ((char*)&@stringBase0 + 69));
        OSPanic(((char*)&@stringBase0 + 0), 183, ((char*)&@stringBase0 + 40));
        /* L_440:; */
        return MoveBGCreate(((char*)&M_arcname__Q29daObjAygr5Act_c + 0), 8, 0);
}

/* 000004D4-000004DC       .text Delete__Q29daObjAygr5Act_cFv */
BOOL daObjAygr::Act_c::Delete() {
    return 1;
}

/* 000004DC-0000054C       .text Mthd_Delete__Q29daObjAygr5Act_cFv */
BOOL daObjAygr::Act_c::Mthd_Delete() {
    if (this->field_0x30c != 0) {
        /* ((cBgS*)(((char*)&g_dComIfG_gameInfo + 4768)))->Release(this->field_0x2d8); */
    }
    MoveBGDelete();
    dComIfG_resDelete((this + 712), ((char*)&M_arcname__Q29daObjAygr5Act_c + 0));
    return MoveBGDelete();
}

/* 0000054C-000005F8       .text set_mtx__Q29daObjAygr5Act_cFv */
void daObjAygr::Act_c::set_mtx() {
    /* PSMTXTrans(((char*)&now__14mDoMtx_stack_c + 0), arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
    /* mDoMtx_ZXYrotM(((char*)&now__14mDoMtx_stack_c + 0), shape_angle, this->field_0x20e); */
    PSMTXCopy(((char*)&now__14mDoMtx_stack_c + 0), (this->field_0x2d0 + 36));
    if (PrmAbstract<Q39daObjAygr5Act_c5Prm_e>__5daObjFPC10fopAc_ac_cQ39daObjAygr5Act_c5Prm_eQ39daObjAygr5Act_c5Prm_e(this, 1, 0) == 0) {
        PSMTXCopy(((char*)&now__14mDoMtx_stack_c + 0), (this->field_0x2d4 + 36));
    }
    return PSMTXCopy(((char*)&now__14mDoMtx_stack_c + 0), ((char*)&M_tmp_mtx__Q29daObjAygr5Act_c + 0));
}

/* 000005F8-00000674       .text init_mtx__Q29daObjAygr5Act_cFv */
void daObjAygr::Act_c::init_mtx() {
    /* field_0x18 = 0; */
    /* field_0x1c = 0; */
    /* field_0x20 = 0; */
    /* if (PrmAbstract<Q39daObjAygr5Act_c5Prm_e>__5daObjFPC10fopAc_ac_cQ39daObjAygr5Act_c5Prm_eQ39daObjAygr5Act_c5Prm_e(this, 1, 0, arg3, arg4, arg5, arg6, arg7) == 0) { */
        /* field_0x18 = 0; */
        /* field_0x1c = 0; */
        /* field_0x20 = 0; */
    return set_mtx();
}

/* 00000674-000006B0       .text Execute__Q29daObjAygr5Act_cFPPA3_A4_f */
BOOL daObjAygr::Act_c::Execute(Mtx**) {
    set_mtx();
    base = 0;
    return 1;
}

/* 000006B0-0000079C       .text Draw__Q29daObjAygr5Act_cFv */
BOOL daObjAygr::Act_c::Draw() {
    ((dScnKy_env_light_c*)(((char*)&g_env_light + 0)))->settingTevStruct(1, (this + 504), (this + 268));
    ((dScnKy_env_light_c*)(((char*)&g_env_light + 0)))->setLightTevColorType(this->field_0x2d0, (this + 268));
    if (PrmAbstract<Q39daObjAygr5Act_c5Prm_e>__5daObjFPC10fopAc_ac_cQ39daObjAygr5Act_c5Prm_eQ39daObjAygr5Act_c5Prm_e(this, 1, 0) == 0) {
        ((dScnKy_env_light_c*)(((char*)&g_env_light + 0)))->setLightTevColorType(this->field_0x2d4, (this + 268));
    }
    /* mDoExt_modelUpdateDL(this->field_0x2d0); */
    if (PrmAbstract<Q39daObjAygr5Act_c5Prm_e>__5daObjFPC10fopAc_ac_cQ39daObjAygr5Act_c5Prm_eQ39daObjAygr5Act_c5Prm_e(this, 1, 0) == 0) {
        /* mDoExt_modelUpdateDL(this->field_0x2d4); */
    }
    return 1;
}

namespace daObjAygr {
namespace {
/* 0000079C-000007BC       .text Mthd_Create__Q29daObjAygr26@unnamed@d_a_obj_aygr_cpp@FPv */
cPhs_State Mthd_Create(void* i_this) {
    return ((daObjAygr::Act_c*)i_this)->Mthd_Create();
}

/* 000007BC-000007DC       .text Mthd_Delete__Q29daObjAygr26@unnamed@d_a_obj_aygr_cpp@FPv */
BOOL Mthd_Delete(void* i_this) {
    return ((daObjAygr::Act_c*)i_this)->Mthd_Delete();
}

/* 000007DC-000007FC       .text Mthd_Execute__Q29daObjAygr26@unnamed@d_a_obj_aygr_cpp@FPv */
BOOL Mthd_Execute(void* i_this) {
    return ((daObjAygr::Act_c*)i_this)->MoveBGExecute();
}

/* 000007FC-00000828       .text Mthd_Draw__Q29daObjAygr26@unnamed@d_a_obj_aygr_cpp@FPv */
BOOL Mthd_Draw(void* i_this) {
    return ((daObjAygr::Act_c*)i_this)->Draw();
}

/* 00000828-00000854       .text Mthd_IsDelete__Q29daObjAygr26@unnamed@d_a_obj_aygr_cpp@FPv */
BOOL Mthd_IsDelete(void* i_this) {
    return ((daObjAygr::Act_c*)i_this)->IsDelete();

static actor_method_class Mthd_Aygr = {
    (process_method_func)Mthd_Create,
    (process_method_func)Mthd_Delete,
    (process_method_func)Mthd_Execute,
    (process_method_func)Mthd_IsDelete,
    (process_method_func)Mthd_Draw,
};
}; // namespace
}; // namespace daObjAygr

actor_process_profile_definition g_profile_Obj_Aygr = {
    /* Layer ID     */ fpcLy_CURRENT_e,
    /* List ID      */ 0x0003,
    /* List Prio    */ fpcPi_CURRENT_e,
    /* Proc Name    */ fpcNm_Obj_Aygr_e,
    /* Proc SubMtd  */ &g_fpcLf_Method.base,
    /* Size         */ sizeof(daObjAygr::Act_c),
    /* Size Other   */ 0,
    /* Parameters   */ 0,
    /* Leaf SubMtd  */ &g_fopAc_Method.base,
    /* Draw Prio    */ fpcDwPi_Obj_Aygr_e,
    /* Actor SubMtd */ &daObjAygr::Mthd_Aygr,
    /* Status       */ fopAcStts_NOCULLEXEC_e | fopAcStts_UNK40000_e,
    /* Group        */ fopAc_ACTOR_e,
    /* Cull Type    */ fopAc_CULLBOX_CUSTOM_e,
};

/* 由 fix_decomp_braces.py 补齐：反编译产物末尾缺 1 个 } */
}
