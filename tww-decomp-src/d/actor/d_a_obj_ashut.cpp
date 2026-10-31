/**
 * d_a_obj_ashut.cpp
 * Object - Metal bars (Pirate Ship rope minigame)
 */

#include "d/dolzel_rel.h" // IWYU pragma: keep
#include "d/actor/d_a_obj_ashut.h"

/* 00000078-0000012C       .text CreateHeap__Q210daObjAshut5Act_cFv */
BOOL daObjAshut::Act_c::CreateHeap() {
    /* CreateHeap__Q210daObjAshut5Act_cFv: 无实义指令 */
}

/* 0000012C-00000224       .text Create__Q210daObjAshut5Act_cFv */
BOOL daObjAshut::Act_c::Create() {
    /* field_0x75 = 1; */
    cullMtx = (this->field_0x2d0 + 36);
    init_mtx();
    fopAcM_setCullSizeBox(this);
    /* field_0x2e4 = 0; */
    /* field_0x2e6 = ((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getEventIdx(0, (PrmAbstract<Q310daObjAshut5Act_c5Prm_e>__5daObjFPC10fopAc_ac_cQ310daObjAshut5Act_c5Prm_eQ310daObjAshut5Act_c5Prm_e(this, 8, 8) & 16777215)); */
    /* field_0x2e8 = 5; */
    if (((dSv_info_c*)(((char*)&g_dComIfG_gameInfo + 0)))->isSwitch(PrmAbstract<Q310daObjAshut5Act_c5Prm_e>__5daObjFPC10fopAc_ac_cQ310daObjAshut5Act_c5Prm_eQ310daObjAshut5Act_c5Prm_e(this, 8, 0), (this->field_0x1e2 & 255)) != 0) {
        mode_upper_init();
    } else {
        mode_lower_init();
    }
    return 1;
}

/* 00000224-00000388       .text Mthd_Create__Q210daObjAshut5Act_cFv */
cPhs_State daObjAshut::Act_c::Mthd_Create() {
        /* if (/ * bne * / 1) goto L_1f4; */
        /* if (this == 0) goto L_1e8; */
        __ct();
        mAcch = 0;
        /* L_1e8:; */
        /* L_1f4:; */
        /* if (dComIfG_resLoad((this + 712), ((char*)&M_arcname__Q210daObjAshut5Act_c + 0)) != 4) goto L_2f4; */
        /* if ((MoveBGCreate(((char*)&M_arcname__Q210daObjAshut5Act_c + 0), 7, 0, 1888) + -4) != 0) goto L_250; */
        /* L_250:; */
        /* if (0 != 0) goto L_288; */
        ((JUTAssertion*)(((JUTAssertion*)(-1))->getSDevice()))->showAssert(((char*)&@stringBase0 + 0), 312, ((char*)&@stringBase0 + 37));
        OSPanic(((char*)&@stringBase0 + 0), 312, ((char*)&@stringBase0 + 32));
        /* L_288:; */
        /* if (((dSv_info_c*)(((char*)&g_dComIfG_gameInfo + 0)))->isSwitch(PrmAbstract<Q310daObjAshut5Act_c5Prm_e>__5daObjFPC10fopAc_ac_cQ310daObjAshut5Act_c5Prm_eQ310daObjAshut5Act_c5Prm_e(this, 8, 0), (this->field_0x1e2 & 255)) == 0) goto L_2f4; */
        /* if (base < 0) goto L_2d8; */
        /* if (base >= 256) goto L_2d8; */
        /* goto L_2dc; */
        /* L_2d8:; */
        /* L_2dc:; */
        /* if (0 == 0) goto L_2f4; */
        ((cBgS*)(((char*)&g_dComIfG_gameInfo + 4768)))->Release(mPhase);
        /* L_2f4:; */
        return MoveBGCreate(((char*)&M_arcname__Q210daObjAshut5Act_c + 0), 7, 0, 1888);
}

/* 00000388-00000390       .text Delete__Q210daObjAshut5Act_cFv */
BOOL daObjAshut::Act_c::Delete() {
    return 1;
}

/* 00000390-000003DC       .text Mthd_Delete__Q210daObjAshut5Act_cFv */
BOOL daObjAshut::Act_c::Mthd_Delete() {
    MoveBGDelete();
    dComIfG_resDelete((this + 712), ((char*)&M_arcname__Q210daObjAshut5Act_c + 0));
    return MoveBGDelete();
}

/* 000003DC-0000046C       .text set_mtx__Q210daObjAshut5Act_cFv */
void daObjAshut::Act_c::set_mtx() {
    /* PSMTXTrans(((char*)&now__14mDoMtx_stack_c + 0), arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
    /* mDoMtx_ZXYrotM(((char*)&now__14mDoMtx_stack_c + 0), shape_angle, this->field_0x20e); */
    PSMTXCopy(((char*)&now__14mDoMtx_stack_c + 0), ((char*)&M_tmp_mtx__Q210daObjAshut5Act_c + 0));
    /* field_0x1c = (this->field_0x1c + this->field_0x2d8); */
    return PSMTXCopy(((char*)&now__14mDoMtx_stack_c + 0), (this->field_0x2d0 + 36));
}

/* 0000046C-000004A8       .text init_mtx__Q210daObjAshut5Act_cFv */
void daObjAshut::Act_c::init_mtx() {
    /* field_0x18 = 0; */
    /* field_0x1c = 0; */
    /* field_0x20 = 0; */
    return set_mtx();
}

/* 000004A8-000005A4       .text chk_safe_area__Q210daObjAshut5Act_cCFv */
void daObjAshut::Act_c::chk_safe_area() const {
    __mi();
    mDoMtx_YrotS(((char*)&now__14mDoMtx_stack_c + 0));
    PSMTXMultVecSR(((char*)&now__14mDoMtx_stack_c + 0));
    if (/* bge */ 1) {
        /* if (/ * bge * / 1) goto L_4f0; */
    }
    /* L_4f0:; */
    if (1 == 0) {
        /* if (/ * bge * / 1) goto L_514; */
    }
    /* L_514:; */
    return 1;
}

/* 000005A4-000005BC       .text mode_upper_init__Q210daObjAshut5Act_cFv */
void daObjAshut::Act_c::mode_upper_init() {
    mMode = 0;
    /* field_0x2D8 = 250.0f; */
}

/* 000005BC-0000066C       .text mode_upper__Q210daObjAshut5Act_cFv */
void daObjAshut::Act_c::mode_upper() {
        /* if (((dSv_info_c*)(((char*)&g_dComIfG_gameInfo + 0)))->isSwitch(PrmAbstract<Q310daObjAshut5Act_c5Prm_e>__5daObjFPC10fopAc_ac_cQ310daObjAshut5Act_c5Prm_eQ310daObjAshut5Act_c5Prm_e(this, 8, 0, arg3, arg4, arg5, arg6, arg7), (this->field_0x1e2 & 255)) != 0) goto L_5e0; */
        /* if (chk_safe_area() != 0) goto L_5e0; */
        /* if (base < 0) goto L_5b4; */
        /* if (base >= 256) goto L_5b4; */
        /* goto L_5b8; */
        /* L_5b4:; */
        /* L_5b8:; */
        /* if (0 != 0) goto L_5d4; */
        ((dBgS*)(((char*)&g_dComIfG_gameInfo + 4768)))->Regist(mPhase, this);
        /* L_5d4:; */
        /* L_5e0:; */
        return mode_demoreq_init(1);
}

/* 0000066C-00000700       .text mode_u_l_init__Q210daObjAshut5Act_cFv */
void daObjAshut::Act_c::mode_u_l_init() {
    /* field_0x2d4 = 1; */
    /* field_0x2dc = 0; */
    return ((JAIZelBasic*)(base))->seStart(27038, (this + 608), 0, dComIfGp_getReverb((this->field_0x20a & 255)), 0);
}

/* 00000700-000007C0       .text mode_u_l__Q210daObjAshut5Act_cFv */
void daObjAshut::Act_c::mode_u_l() {
        /* field_0x2dc = (this->field_0x2dc + this->field_0x4); */
        /* field_0x2dc = (this->field_0x2dc * (this->field_0x60 - this->field_0x8)); */
        /* field_0x2d8 = (this->field_0x2d8 + this->field_0x2dc); */
        /* if (this->field_0x2d8 != this->field_0x5c) goto L_738; */
        /* if (this->field_0x2e0 != 0) goto L_700; */
        mode_lower_init();
        /* goto L_738; */
        /* L_700:; */
        /* field_0x2e0 = 0; */
        /* field_0x2d8 = (this->field_0x2d8 * this->field_0x10); */
        /* field_0x2dc = (this->field_0x2dc * this->field_0x10); */
        /* if (this->field_0x2dc <= this->field_0x14) goto L_738; */
        /* field_0x2dc = 0; */
        /* L_738:; */
        return mode_lower_init();
}

/* 000007C0-000007D8       .text mode_lower_init__Q210daObjAshut5Act_cFv */
void daObjAshut::Act_c::mode_lower_init() {
    mMode = 2;
    /* field_0x2D8 = 0.0f; */
}

/* 000007D8-00000838       .text mode_lower__Q210daObjAshut5Act_cFv */
void daObjAshut::Act_c::mode_lower() {
    /* if (((dSv_info_c*)(((char*)&g_dComIfG_gameInfo + 0)))->isSwitch(PrmAbstract<Q310daObjAshut5Act_c5Prm_e>__5daObjFPC10fopAc_ac_cQ310daObjAshut5Act_c5Prm_eQ310daObjAshut5Act_c5Prm_e(this, 8, 0, arg3, arg4, arg5, arg6, arg7), (this->field_0x1e2 & 255)) != 0) { */
    return mode_demoreq_init(3);
}

/* 00000838-000008D4       .text mode_l_u_init__Q210daObjAshut5Act_cFv */
void daObjAshut::Act_c::mode_l_u_init() {
    /* field_0x2d4 = 3; */
    /* field_0x2dc = 0; */
    return ((JAIZelBasic*)(base))->seStart(27037, (this + 608), 0, dComIfGp_getReverb((this->field_0x20a & 255)), 0);
}

/* 000008D4-00000A50       .text mode_l_u__Q210daObjAshut5Act_cFv */
void daObjAshut::Act_c::mode_l_u() {
        /* if (this->field_0x2e2 <= 0) goto L_890; */
        /* field_0x2e2 = (this->field_0x2e2 + -1); */
        /* L_890:; */
        /* field_0x2dc = (this->field_0x2dc + this->field_0x18); */
        /* if (this->field_0x2e2 != 0) goto L_8d8; */
        /* if (this->field_0x2e2 >= this->field_0x25) goto L_8d8; */
        /* field_0x2dc = (this->field_0x2dc * (this->field_0x60 - this->field_0x20)); */
        /* goto L_8f4; */
        /* L_8d8:; */
        /* field_0x2dc = (this->field_0x2dc * (this->field_0x60 - this->field_0x1c)); */
        /* L_8f4:; */
        /* field_0x2d8 = (this->field_0x2d8 + this->field_0x2dc); */
        /* if (this->field_0x2d8 <= this->field_0x68) goto L_950; */
        /* if (base < 0) goto L_934; */
        /* if (base >= 256) goto L_934; */
        /* goto L_938; */
        /* L_934:; */
        /* L_938:; */
        /* if (0 == 0) goto L_950; */
        ((cBgS*)(((char*)&g_dComIfG_gameInfo + 4768)))->Release(mPhase);
        /* L_950:; */
        /* if (this->field_0x2d8 != base) goto L_9c0; */
        /* if (this->field_0x2e0 != 0) goto L_97c; */
        mode_upper_init();
        /* goto L_9c0; */
        /* L_97c:; */
        /* field_0x2e0 = (mode_upper_init() + -1); */
        /* field_0x2d8 = 0; */
        /* field_0x2dc = (this->field_0x2dc * this->field_0x28); */
        /* if (this->field_0x2dc >= this->field_0x2c) goto L_9c0; */
        /* field_0x2dc = 0; */
        /* L_9c0:; */
        return ((char*)&L_attr__Q210daObjAshut27@unnamed@d_a_obj_ashut_cpp@ + 0);
}

/* 00000A50-00000B0C       .text mode_demoreq_init__Q210daObjAshut5Act_cFQ310daObjAshut5Act_c6Mode_e */
void daObjAshut::Act_c::mode_demoreq_init(daObjAshut::Act_c::Mode_e) {
        /* if (Mode_e == 1) goto L_a08; */
        /* if (Mode_e != 3) goto L_a0c; */
        /* L_a08:; */
        /* L_a0c:; */
        /* if (1 != 0) goto L_a44; */
        ((JUTAssertion*)(getSDevice()))->showAssert(((char*)&@stringBase0 + 0), 546, ((char*)&@stringBase0 + 104));
        OSPanic(((char*)&@stringBase0 + 0), 546, ((char*)&@stringBase0 + 32));
        /* L_a44:; */
        /* if (this->field_0x2e4 == 0) goto L_a70; */
        /* if (Mode_e != 1) goto L_a64; */
        mode_u_l_init();
        /* goto L_a7c; */
        /* L_a64:; */
        mode_l_u_init();
        /* goto L_a7c; */
        /* L_a70:; */
        /* field_0x2d4 = 4; */
        /* field_0x2e8 = Mode_e; */
        /* L_a7c:; */
        return mode_l_u_init();
}

/* 00000B0C-00000BE4       .text mode_demoreq__Q210daObjAshut5Act_cFv */
void daObjAshut::Act_c::mode_demoreq() {
        /* if (((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getEventData(this->field_0x2e6) == 0) goto L_b28; */
        /* if (this->field_0xf8 != 2) goto L_ae8; */
        /* field_0x2e4 = 1; */
        /* goto L_b2c; */
        /* L_ae8:; */
        fopAcM_orderOtherEventId(this, this->field_0x2e6, (PrmAbstract<Q310daObjAshut5Act_c5Prm_e>__5daObjFPC10fopAc_ac_cQ310daObjAshut5Act_c5Prm_eQ310daObjAshut5Act_c5Prm_e(this, 8, 8) & 16777215));
        /* goto L_b2c; */
        /* L_b28:; */
        /* L_b2c:; */
        /* if (1 == 0) goto L_b54; */
        /* if (this->field_0x2e8 != 1) goto L_b4c; */
        mode_u_l_init();
        /* goto L_b54; */
        /* L_b4c:; */
        /* L_b54:; */
        return mode_l_u_init();
}

/* 00000BE4-00000D0C       .text Execute__Q210daObjAshut5Act_cFPPA3_A4_f */
BOOL daObjAshut::Act_c::Execute(Mtx**) {
    if (base != 0) {
        base = 1;
    }
    /* __ptmf_scall(this, ((C_@2100 + 0) + 108), ((char*)&init$4323 + 0), (C_@2100 + 0), arg4, arg5, arg6, arg7); */
    eyePos = 0;
    /* field_0x264 = (this->field_0x1fc + this->field_0x2d8); */
    /* field_0x268 = 0; */
    set_mtx();
    base = 0;
    return 1;
}

/* 00000D0C-00000D6C       .text Draw__Q210daObjAshut5Act_cFv */
BOOL daObjAshut::Act_c::Draw() {
    ((dScnKy_env_light_c*)(((char*)&g_env_light + 0)))->settingTevStruct(1, (this + 504), (this + 268));
    ((dScnKy_env_light_c*)(((char*)&g_env_light + 0)))->setLightTevColorType(this->field_0x2d0, (this + 268));
    /* mDoExt_modelUpdateDL(this->field_0x2d0); */
    return 1;
}

namespace daObjAshut {
namespace {
/* 00000D6C-00000D8C       .text Mthd_Create__Q210daObjAshut27@unnamed@d_a_obj_ashut_cpp@FPv */
cPhs_State Mthd_Create(void* i_this) {
    return ((daObjAshut::Act_c*)i_this)->Mthd_Create();
}

/* 00000D8C-00000DAC       .text Mthd_Delete__Q210daObjAshut27@unnamed@d_a_obj_ashut_cpp@FPv */
BOOL Mthd_Delete(void* i_this) {
    return ((daObjAshut::Act_c*)i_this)->Mthd_Delete();
}

/* 00000DAC-00000DCC       .text Mthd_Execute__Q210daObjAshut27@unnamed@d_a_obj_ashut_cpp@FPv */
BOOL Mthd_Execute(void* i_this) {
    return ((daObjAshut::Act_c*)i_this)->MoveBGExecute();
}

/* 00000DCC-00000DF8       .text Mthd_Draw__Q210daObjAshut27@unnamed@d_a_obj_ashut_cpp@FPv */
BOOL Mthd_Draw(void* i_this) {
    return ((daObjAshut::Act_c*)i_this)->Draw();
}

/* 00000DF8-00000E24       .text Mthd_IsDelete__Q210daObjAshut27@unnamed@d_a_obj_ashut_cpp@FPv */
BOOL Mthd_IsDelete(void* i_this) {
    return ((daObjAshut::Act_c*)i_this)->IsDelete();

static actor_method_class Mthd_Table = {
    (process_method_func)Mthd_Create,
    (process_method_func)Mthd_Delete,
    (process_method_func)Mthd_Execute,
    (process_method_func)Mthd_IsDelete,
    (process_method_func)Mthd_Draw,
};
}; // namespace
}; // namespace daObjAshut

actor_process_profile_definition g_profile_Obj_Ashut = {
    /* Layer ID     */ fpcLy_CURRENT_e,
    /* List ID      */ 0x0003,
    /* List Prio    */ fpcPi_CURRENT_e,
    /* Proc Name    */ fpcNm_Obj_Ashut_e,
    /* Proc SubMtd  */ &g_fpcLf_Method.base,
    /* Size         */ sizeof(daObjAshut::Act_c),
    /* Size Other   */ 0,
    /* Parameters   */ 0,
    /* Leaf SubMtd  */ &g_fopAc_Method.base,
    /* Draw Prio    */ fpcDwPi_Obj_Ashut_e,
    /* Actor SubMtd */ &daObjAshut::Mthd_Table,
    /* Status       */ fopAcStts_NOCULLEXEC_e | fopAcStts_CULL_e | fopAcStts_UNK40000_e,
    /* Group        */ fopAc_ACTOR_e,
    /* Cull Type    */ fopAc_CULLBOX_CUSTOM_e,
};

/* 由 fix_decomp_braces.py 补齐：反编译产物末尾缺 1 个 } */
}
