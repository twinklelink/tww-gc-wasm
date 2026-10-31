/**
 * d_a_obj_tribox.cpp
 * Object - Hyrule Castle - Pushable triangle blocks
 */

#include "d/dolzel_rel.h" // IWYU pragma: keep
#include "d/actor/d_a_obj_tribox.h"
#include "f_op/f_op_actor_mng.h"

const char daObjTribox::Act_c::M_arcname[] = "Mtry";

/* 000000EC-000001A4       .text set_state__Q211daObjTribox5Act_cFv */
void daObjTribox::Act_c::set_state() {
    /* set_state__Q211daObjTribox5Act_cFv: 无实义指令 */
}

/* 000001A4-000001C8       .text solidHeapCB__Q211daObjTribox5Act_cFP10fopAc_ac_c */
BOOL daObjTribox::Act_c::solidHeapCB(fopAc_ac_c* i_this) {
    return ((Act_c*)i_this)->create_heap();
}

/* 000001C8-000004B0       .text create_heap__Q211daObjTribox5Act_cFv */
bool daObjTribox::Act_c::create_heap() {
    /* __register_global_object(this, (arg1 + 0)); */
    /* field_0xc = 0; */
    /* field_0x10 = 0; */
    /* field_0x14 = 0; */
    __register_global_object();
    /* field_0x18 = 0; */
    /* field_0x1c = 0; */
    /* field_0x20 = 0; */
    __register_global_object();
    /* field_0x10 = 0; */
    base = 0;
    /* field_0x4 = 0; */
    /* field_0xc = 1; */
    /* field_0x20 = 0; */
    /* field_0x14 = 0; */
    /* field_0x16 = 256; */
    /* field_0x18 = 0; */
    /* field_0x1c = -1; */
    /* field_0x10 = 0; */
    /* field_0x20 = 0; */
    /* field_0x3c = 0; */
    ct();
    base = 0;
    base = 0;
    /* field_0x4 = 0; */
    /* field_0x5 = 0; */
    /* field_0x6 = 0; */
    /* field_0x7 = 0; */
    /* field_0x8 = 0; */
    /* field_0x9 = 0; */
    /* field_0xa = 0; */
    /* field_0xc = 0; */
    /* field_0xc = 0; */
    /* field_0x10 = 1; */
    base = 0;
    /* field_0xc = 0; */
    /* field_0x10 = 0; */
    /* field_0x20 = 0; */
    base = 0;
    /* field_0x64 = 0; */
    /* field_0xa8 = 0; */
    if (/* beq */ 1) {
    }
    /* field_0x4 = 0; */
    /* field_0x10 = 0; */
    /* field_0x20 = 0; */
    /* field_0x58 = 0; */
    /* field_0x64 = 0; */
    /* field_0x5c = 1; */
    return __register_global_object();
}

/* 000004B0-000005C0       .text block_init__Q211daObjTribox5Act_cFv */
void daObjTribox::Act_c::block_init() {
    /* field_0x10 = this; */
    /* field_0x20 = (this + 12); */
    if (/* beq */ 1) {
        /* field_0x3c = 0; */
    }
    if (/* beq */ 1) {
        /* field_0x20 = 0; */
    }
    __dt();
    if (/* ble */ 1) {
    }
    return __dl(__dt());
}

/* 000005C0-00000604       .text chk_light__Q211daObjTribox5Act_cCFv */
void daObjTribox::Act_c::chk_light() const {
        /* field_0x58 = 0; */
        /* if (/ * beq * / 1) goto L_530; */
        /* field_0x10 = 0; */
        /* field_0x20 = 0; */
        /* if (/ * beq * / 1) goto L_510; */
        /* field_0x3c = 0; */
        /* L_510:; */
        /* if (/ * beq * / 1) goto L_524; */
}

/* 00000604-0000068C       .text correct_before_init__Q211daObjTribox5Act_cFv */
void daObjTribox::Act_c::correct_before_init() {
    /* field_0x20 = 0; */
    __dt();
    if (/* ble */ 1) {
    }
    return __dl(__dt());
}

/* 0000068C-00000748       .text correct_after_init__Q211daObjTribox5Act_cFv */
void daObjTribox::Act_c::correct_after_init() {
    if (/* beq */ 1) {
        /* field_0x20 = 0; */
    }
    __dt();
    if (/* ble */ 1) {
    }
    return __dl(__dt());
}

/* 00000748-00000840       .text controll_set__Q211daObjTribox5Act_cFv */
void daObjTribox::Act_c::controll_set() {
    /* L_65c:; */
    /* goto L_65c; */
}

/* 00000840-00000904       .text controll_clear__Q211daObjTribox5Act_cFv */
void daObjTribox::Act_c::controll_clear() {
    /* if (PrmAbstract<Q311daObjTribox5Act_c5Prm_e>__5daObjFPC10fopAc_ac_cQ311daObjTribox5Act_c5Prm_eQ311daObjTribox5Act_c5Prm_e(this, 1, 16, arg3, arg4, arg5, arg6, arg7) == 1) { */
        /* if (/ * bge * / 1) goto L_800; */
        /* ((JUTAssertion*)(((JUTAssertion*)(base))->getSDevice()))->showAssert(((char*)&@stringBase0 + 0), 531, ((char*)&@stringBase0 + 123)); */
        /* OSPanic(((char*)&@stringBase0 + 0), 531, ((char*)&@stringBase0 + 35)); */
    /* } else { */
        /* if (/ * bge * / 1) goto L_800; */
        /* ((JUTAssertion*)(((JUTAssertion*)(base))->getSDevice()))->showAssert(((char*)&@stringBase0 + 0), 534, ((char*)&@stringBase0 + 141)); */
    /* } */
    /* L_800:; */
    /* return OSPanic(((char*)&@stringBase0 + 0), 534, ((char*)&@stringBase0 + 35)); */

/* 00000904-00000980       .text create_block_before__Q211daObjTribox5Act_cFv */
void daObjTribox::Act_c::create_block_before() {
        /* if (dComIfG_resLoad((this + 656), ((char*)&M_arcname__Q211daObjTribox5Act_c + 0), arg2) != 4) goto L_870; */
        /* if (fopAcM_entrySolidHeap(this, ((char*)&solidHeapCB__Q211daObjTribox5Act_cFP10fopAc_ac_c + 0), 4544) == 0) goto L_86c; */
        block_init();
        /* goto L_870; */
        /* L_86c:; */
        /* L_870:; */
        return 5;
}

/* 00000980-00000988       .text create_block_after__Q211daObjTribox5Act_cFv */
cPhs_State daObjTribox::Act_c::create_block_after() {
    return 5;
}

/* 00000988-000009AC       .text create_correct_before__Q211daObjTribox5Act_cFv */
cPhs_State daObjTribox::Act_c::create_correct_before() {
    correct_before_init();
    return cPhs_COMPLEATE_e;
}

/* 000009AC-00000A28       .text create_correct_after__Q211daObjTribox5Act_cFv */
cPhs_State daObjTribox::Act_c::create_correct_after() {
    cPhs_State phase = dComIfG_resLoad(&mPhase, M_arcname);
    if (phase == cPhs_COMPLEATE_e) {
        if (fopAcM_entrySolidHeap(this, solidHeapCB, 0x4000)) {
            correct_after_init();
        } else {
            phase = cPhs_ERROR_e;
        }
    }
    return phase;
}

/* 00000A28-00000BC4       .text _create__Q211daObjTribox5Act_cFv */
cPhs_State daObjTribox::Act_c::_create() {
        /* _savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* if (/ * bne * / 1) goto L_a0c; */
        /* if (/ * beq * / 1) goto L_a00; */
        __ct();
        /* field_0x2a0 = 0; */
        /* field_0x2a4 = 0; */
        /* field_0x2a0 = 0; */
        mBrk0 = 0;
        /* field_0x2b0 = 0; */
        /* field_0x2b8 = 0; */
        /* field_0x2bc = 0; */
        /* field_0x2b8 = 0; */
        mAcch = 0;
        /* field_0x2c8 = 0; */
        __ct((actor_condition + 860));
        __ct((actor_condition + 920), 1, 1, 0);
        __ct((actor_condition + 952), 1, 1, 0);
        __ct((actor_condition + 984), 1, 1, 0);
        /* L_a00:; */
        /* L_a0c:; */
        /* ((daObjTribox::Act_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->set_state(); */
        /* ((daObjTribox::Act_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->controll_set(); */
        /* if (base != 0) goto L_a9c; */
        base = 1;
        /* L_a9c:; */
        /* return _restgpr_29(__ptmf_scall(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7), ((C_@2100 + 0) + 96), ((char*)&init$4189 + 0))); */
}

/* 00000CA4-00000D68       .text _delete__Q211daObjTribox5Act_cFv */
bool daObjTribox::Act_c::_delete() {
        sound_pos_delete();
        controll_clear();
        eff_smoke_remove();
        eff_sink_smoke_remove();
        /* if (this->field_0x304 == 0) goto L_bf4; */
        /* if (this->field_0x304 != 3) goto L_c5c; */
        /* L_bf4:; */
        /* if (this->field_0x2d0 == 0) goto L_c08; */
        /* field_0xb4 = 0; */
        /* L_c08:; */
        /* if (this->field_0x2d0 == 0) goto L_c4c; */
        /* if (base < 0) goto L_c30; */
        /* if (base >= 256) goto L_c30; */
        /* goto L_c34; */
        /* L_c30:; */
        /* L_c34:; */
        /* if (0 == 0) goto L_c4c; */
        /* ((cBgS*)(((char*)&g_dComIfG_gameInfo + 4768)))->Release(this->field_0x2d0); */
        /* L_c4c:; */
        dComIfG_resDelete((this + 656), ((char*)&M_arcname__Q211daObjTribox5Act_c + 0));
        /* L_c5c:; */
        return 1;
}

/* 00000D68-00000DFC       .text set_mtx__Q211daObjTribox5Act_cFv */
void daObjTribox::Act_c::set_mtx() {
    /* PSMTXTrans(((char*)&now__14mDoMtx_stack_c + 0), arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
    /* mDoMtx_ZXYrotM(((char*)&now__14mDoMtx_stack_c + 0), shape_angle, this->field_0x20e); */
    PSMTXCopy(((char*)&now__14mDoMtx_stack_c + 0), (mpModel + 36));
    /* field_0x1c = (this->field_0x1c + base); */
    return PSMTXCopy(((char*)&now__14mDoMtx_stack_c + 0), (mBck0 + 36));
}

/* 00000DFC-00000E54       .text init_mtx__Q211daObjTribox5Act_cFv */
void daObjTribox::Act_c::init_mtx() {
    /* field_0x18 = 0; */
    /* field_0x1c = 0; */
    /* field_0x20 = 0; */
    /* field_0x18 = 0; */
    /* field_0x1c = 0; */
    /* field_0x20 = 0; */
    return set_mtx();
}

/* 00000E54-00000F8C       .text push_pullCB__Q211daObjTribox5Act_cFP10fopAc_ac_cP10fopAc_ac_csQ24dBgW13PushPullLabel */
void daObjTribox::Act_c::push_pullCB(fopAc_ac_c*, fopAc_ac_c*, short, dBgW::PushPullLabel) {
        /* _savegpr_28(this, arg1, arg2, short, PushPullLabel, arg5, arg6, arg7); */
        /* if (/ * beq * / 1) goto L_e7c; */
        /* if (/ * bne * / 1) goto L_dc0; */
        /* ((JUTAssertion*)(((JUTAssertion*)(_savegpr_28(this, arg1, arg2, short, PushPullLabel, arg5, arg6, arg7)))->getSDevice()))->showAssert(((char*)&@stringBase0 + 0), 687, ((char*)&@stringBase0 + 159)); */
        OSPanic(((char*)&@stringBase0 + 0), 687, ((char*)&@stringBase0 + 35));
        /* L_dc0:; */
        /* if (/ * beq * / 1) goto L_dd4; */
        /* field_0x31c = 0; */
        /* goto L_ddc; */
        /* L_dd4:; */
        /* field_0x31c = 1; */
        /* L_ddc:; */
        /* if (/ * blt * / 1) goto L_e0c; */
        /* if (/ * bge * / 1) goto L_e0c; */
        /* field_0x314 = 0; */
        /* goto L_e28; */
        /* L_e0c:; */
        /* if (0 < 10922) goto L_e20; */
        /* field_0x314 = 1; */
        /* goto L_e28; */
        /* L_e20:; */
        /* field_0x314 = 2; */
        /* L_e28:; */
        /* if ((fopAcM_searchActorAngleY(_savegpr_28(this, arg1, arg2, short, PushPullLabel, arg5, arg6, arg7)) - ((this->field_0x20e + (this->field_0x314 << 1)) & 65535)) != 0) goto L_e6c; */
        /* field_0x318 = 0; */
        /* goto L_e74; */
        /* L_e6c:; */
        /* field_0x318 = 1; */
        /* L_e74:; */
        /* field_0x310 = 1; */
        /* L_e7c:; */
        /* return _restgpr_28(_savegpr_28(this, arg1, arg2, short, PushPullLabel, arg5, arg6, arg7), ((char*)&face_ang_offset$4294 + 0), this->field_0x20e); */
}

/* 00000F8C-00000FF4       .text line_cross__Q211daObjTribox5Act_cCFPC4cXyzPC4cXyz */
void daObjTribox::Act_c::line_cross(const cXyz*, const cXyz*) const {
    /* ((dBgS_LinChk*)(((char*)&M_lin__Q211daObjTribox5Act_c + 0)))->Set(arg1, arg2, this); */
    }
    /* field_0x8 = -1; */
    return ((cBgS*)(((char*)&g_dComIfG_gameInfo + 4768)))->LineCross(((char*)&M_lin__Q211daObjTribox5Act_c + 0));


/* 00000FF4-000012A0       .text chk_wall__Q211daObjTribox5Act_cCFi */
void daObjTribox::Act_c::chk_wall(int) const {
        /* _savegpr_28(this, int, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* if (/ * bne * / 1) goto L_f44; */
        /* L_f44:; */
        /* if (0 != 0) goto L_f7c; */
        ((JUTAssertion*)(((JUTAssertion*)(-1))->getSDevice()))->showAssert(((char*)&@stringBase0 + 0), 779, ((char*)&@stringBase0 + 180));
        OSPanic(((char*)&@stringBase0 + 0), 779, ((char*)&@stringBase0 + 35));
        /* L_f7c:; */
        /* if (this->field_0x358 < 0) goto L_fa4; */
        /* goto L_fbc; */
        /* L_fa4:; */
        /* L_fbc:; */
        /* mDoMtx_YrotS(((char*)&now__14mDoMtx_stack_c + 0), this->field_0x20e); */
        PSMTXMultVecSR(((char*)&now__14mDoMtx_stack_c + 0), (((char*)&M_post__Q211daObjTribox5Act_c + 0) + ((((this->field_0x358 * 3) * 3) - (this->field_0x354 + 2)) * 12)));
        __ml();
        __mi();
        /* if (((daObjTribox::Act_c*)(_savegpr_28(this, int, arg2, arg3, arg4, arg5, arg6, arg7)))->line_cross() == 0) goto L_1068; */
        return 1;
        /* L_1068:; */
        /* if (/ * bne * / 1) goto L_1190; */
        __mi();
        /* if (this->field_0x358 < 0) goto L_10b4; */
        /* L_10b4:; */
        mDoMtx_YrotM(((char*)&now__14mDoMtx_stack_c + 0), (10922 & 65535));
        PSMTXMultVecSR(((char*)&now__14mDoMtx_stack_c + 0), (((char*)&M_post__Q211daObjTribox5Act_c + 0) + ((((this->field_0x358 * 3) * 3) - (this->field_0x354 + 2)) * 12)));
        __ml();
        __mi();
        /* if (((daObjTribox::Act_c*)(_savegpr_28(this, int, arg2, arg3, arg4, arg5, arg6, arg7)))->line_cross() == 0) goto L_1128; */
        return 1;
        /* L_1128:; */
        __ml();
        __mi();
        /* if (((daObjTribox::Act_c*)(_savegpr_28(this, int, arg2, arg3, arg4, arg5, arg6, arg7)))->line_cross() == 0) goto L_1190; */
        return 1;
        /* L_1190:; */
        return _restgpr_28(0);
}

/* 000012A0-000012E8       .text chk_space__Q211daObjTribox5Act_cCFv */
void daObjTribox::Act_c::chk_space() const {
    /* if (chk_wall((((1 - this->field_0x33c) >> 5) + 1)) == 0) { */
        /* return 0; */
    return 1;
}

/* 000012E8-00001378       .text eff_flash__Q211daObjTribox5Act_cFv */
void daObjTribox::Act_c::eff_flash() {
    /* return ((dPa_control_c*)(this->field_0x5ab8))->set(1, (arg2 + -31942)); */
}

/* 00001378-00001464       .text eff_smoke_start__Q211daObjTribox5Act_cFv */
void daObjTribox::Act_c::eff_smoke_start() {
    /* _savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
    if (this->field_0x124 != 0) {
        /* field_0x128 = 0; */
        /* field_0x4 = 0; */
        /* field_0x8 = 0; */
        /* __register_global_object(((C_@3569 + 0) + 296), ((char*)&__dt__4cXyzFv + 0), ((C_@3569 + 0) + 280)); */
        /* field_0x124 = 1; */
    }
    /* ((daObjTribox::Act_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->eff_smoke_pos(); */
    /* if (((dPa_control_c*)(this->field_0x5ab8))->set(2, 8226, (_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 892), (_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 904), ((C_@3569 + 0) + 296), 185, (_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 860)) != 0) { */
        /* field_0x38 = 0; */
        /* field_0x74 = 0; */
        /* field_0x5c = 0; */
        /* field_0x64 = 30; */
    /* return _restgpr_29(((dPa_control_c*)(this->field_0x5ab8))->set(2, 8226, (_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 892), (_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 904), ((C_@3569 + 0) + 296), 185, (_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 860))); */

/* 00001464-000015C8       .text eff_smoke_pos__Q211daObjTribox5Act_cFv */
void daObjTribox::Act_c::eff_smoke_pos() {
    /* _savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
    }
    /* mDoMtx_YrotS(((char*)&now__14mDoMtx_stack_c + 0), this->field_0x20e); */
    PSMTXMultVecSR(((char*)&now__14mDoMtx_stack_c + 0), (((char*)&M_post__Q211daObjTribox5Act_c + 0) + (((this->field_0x358 * 3) - (this->field_0x354 + 2)) * 12)));
    PSMTXMultVecSR(((char*)&now__14mDoMtx_stack_c + 0), (((char*)&M_post__Q211daObjTribox5Act_c + 0) + ((((this->field_0x358 * 3) * 3) - (this->field_0x354 + 1)) * 12)));
    __mi();
    normalizeZP();
    PSVECScale();
    __pl();
    /* field_0x37c = 0; */
    /* field_0x380 = 0; */
    /* field_0x384 = 0; */
    /* field_0x388 = 0; */
    /* field_0x38a = cLib_targetAngleY(); */
    /* field_0x38c = 0; */
    return _restgpr_29(cLib_targetAngleY());


/* 000015C8-000015F4       .text eff_smoke_end__Q211daObjTribox5Act_cFv */
void daObjTribox::Act_c::eff_smoke_end() {
    mSmokeCb.end();
}

/* 000015F4-00001620       .text eff_smoke_remove__Q211daObjTribox5Act_cFv */
void daObjTribox::Act_c::eff_smoke_remove() {
    mSmokeCb.remove();
}

/* 00001620-0000162C       .text eff_sink_smoke_init__Q211daObjTribox5Act_cFv */
void daObjTribox::Act_c::eff_sink_smoke_init() {
    /* field_0x3f8 = 0; */
}

/* 0000162C-00001740       .text eff_sink_smoke_start__Q211daObjTribox5Act_cFv */
void daObjTribox::Act_c::eff_sink_smoke_start() {
        /* _savegpr_25(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* if (this->field_0x3f8 != 0) goto L_1634; */
        /* field_0x3f8 = 1; */
        /* L_15c8:; */
        /* ((dPa_control_c*)(this->field_0x5ab8))->set(2); */
        /* if ((0 + 1) < 3) goto L_15c8; */
        /* L_1634:; */
        /* return _restgpr_25(((dPa_control_c*)(this->field_0x5ab8))->set(2)); */
}

/* 00001740-000017B8       .text eff_sink_smoke_end__Q211daObjTribox5Act_cFv */
void daObjTribox::Act_c::eff_sink_smoke_end() {
    if (this->field_0x3f8 != 0) {
        /* field_0x3f8 = 0; */
    }
    return (this + 984);
}

/* 000017B8-0000181C       .text eff_sink_smoke_remove__Q211daObjTribox5Act_cFv */
void daObjTribox::Act_c::eff_sink_smoke_remove() {
    /* eff_sink_smoke_remove__Q211daObjTribox5Act_cFv: 无实义指令 */
}

/* 0000181C-00001828       .text vib_sink_init__Q211daObjTribox5Act_cFv */
void daObjTribox::Act_c::vib_sink_init() {
    /* field_0x3f9 = 0; */
}

/* 00001828-000018FC       .text vib_sink_start__Q211daObjTribox5Act_cFv */
void daObjTribox::Act_c::vib_sink_start() {
    if (this->field_0x3f9 == 0) {
        /* field_0x3f9 = 1; */
        ((dVibration_c*)(((char*)&g_dComIfG_gameInfo + 22944)))->StartShock(2, 1);
        ((dVibration_c*)(((char*)&g_dComIfG_gameInfo + 22944)))->StartShock(1, 6);
    }
    return ((dVibration_c*)(((char*)&g_dComIfG_gameInfo + 22944)))->StartQuake(3, 15);
}

/* 000018FC-0000197C       .text vib_sink_end__Q211daObjTribox5Act_cFv */
void daObjTribox::Act_c::vib_sink_end() {
    if (this->field_0x3f9 != 0) {
        /* field_0x3f9 = 0; */
        ((dVibration_c*)(((char*)&g_dComIfG_gameInfo + 22944)))->StopQuake(-1);
    }
    return ((dVibration_c*)(((char*)&g_dComIfG_gameInfo + 22944)))->StartShock(3, 15);
}

/* 0000197C-00001A08       .text search_block__Q211daObjTribox5Act_cFPvPv */
void daObjTribox::Act_c::search_block(void*, void*) {
        /* if (fopAc_IsActor(this) == 0) goto L_18f8; */
        /* if (this->field_0x8 != 46) goto L_18f8; */
        /* if (PrmAbstract<Q311daObjTribox5Act_c5Prm_e>__5daObjFPC10fopAc_ac_cQ311daObjTribox5Act_c5Prm_eQ311daObjTribox5Act_c5Prm_e(this, 1, 16) != 0) goto L_18f8; */
        /* fopAcM_searchActorDistance2(arg1, this); */
        /* if (/ * bge * / 1) goto L_18f8; */
        /* goto L_18fc; */
        /* L_18f8:; */
        /* L_18fc:; */
        return 0;
}

/* 00001A08-00001A90       .text sound_pos_init__Q211daObjTribox5Act_cFv */
void daObjTribox::Act_c::sound_pos_init() {
    if (this->field_0x38e != 0) {
        __ml();
        /* field_0x4 = 0; */
        /* field_0x8 = 0; */
    } else {
        __ml();
    }
    return PSVECAdd(((char*)&M_sound_pos__Q211daObjTribox5Act_c + 0));
}

/* 00001A90-00001AC4       .text sound_pos_delete__Q211daObjTribox5Act_cFv */
void daObjTribox::Act_c::sound_pos_delete() {
    return ((JAIZelBasic*)(base))->seDeleteObject(((char*)&M_sound_pos__Q211daObjTribox5Act_c + 0));
}

/* 00001AC4-00001D0C       .text sound_get_mapinfo__Q211daObjTribox5Act_cFRC4cXyz */
void daObjTribox::Act_c::sound_get_mapinfo(const cXyz&) {
        /* _savegpr_21(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        __ct();
        /* field_0xc = 0; */
        /* field_0xc = 0; */
        /* field_0x10 = 1; */
        /* if (/ * beq * / 1) goto L_1a9c; */
        /* L_1a9c:; */
        ((cBgS*)(((char*)&g_dComIfG_gameInfo + 4768)))->GroundCross();
        /* if (/ * blt * / 1) goto L_1b40; */
        /* if (/ * bge * / 1) goto L_1b40; */
        ((dBgS*)(((char*)&g_dComIfG_gameInfo + 4768)))->GetMtrlSndId();
        /* L_1b40:; */
        /* if (/ * beq * / 1) goto L_1bd0; */
        /* if (/ * beq * / 1) goto L_1bac; */
        /* if (/ * beq * / 1) goto L_1bac; */
        /* L_1bac:; */
        /* if (/ * beq * / 1) goto L_1bd0; */
        /* if (/ * beq * / 1) goto L_1bd0; */
        /* L_1bd0:; */
        __dt();
        return _restgpr_21(((dBgS*)(((char*)&g_dComIfG_gameInfo + 4768)))->GetMtrlSndId());
}

/* 000021CC-00002268       .text sound_sink_down_block__Q211daObjTribox5Act_cFv */
void daObjTribox::Act_c::sound_sink_down_block() {
    if (this->field_0x38e != 0) {
        dComIfGp_getReverb((this->field_0x20a & 255));
    }
    return ((JAIZelBasic*)(base))->seStart(25122, ((char*)&M_sound_pos__Q211daObjTribox5Act_c + 0), sound_get_mapinfo(((char*)&M_sound_pos__Q211daObjTribox5Act_c + 0)), dComIfGp_getReverb((this->field_0x20a & 255)), 0);
}

/* 00002268-00002304       .text sound_sink_stop_block__Q211daObjTribox5Act_cFv */
void daObjTribox::Act_c::sound_sink_stop_block() {
    if (this->field_0x38e != 0) {
        dComIfGp_getReverb((this->field_0x20a & 255));
    }
    return ((JAIZelBasic*)(base))->seStart(27180, ((char*)&M_sound_pos__Q211daObjTribox5Act_c + 0), sound_get_mapinfo(((char*)&M_sound_pos__Q211daObjTribox5Act_c + 0)), dComIfGp_getReverb((this->field_0x20a & 255)), 0);
}

/* 00002304-000023A0       .text sound_flash_shine__Q211daObjTribox5Act_cFv */
void daObjTribox::Act_c::sound_flash_shine() {
    if (this->field_0x38e != 0) {
        dComIfGp_getReverb((this->field_0x20a & 255));
    }
    return ((JAIZelBasic*)(base))->seStart(27172, ((char*)&M_sound_pos__Q211daObjTribox5Act_c + 0), sound_get_mapinfo(((char*)&M_sound_pos__Q211daObjTribox5Act_c + 0)), dComIfGp_getReverb((this->field_0x20a & 255)), 0);
}

/* 000023A0-0000243C       .text sound_flash_light__Q211daObjTribox5Act_cFv */
void daObjTribox::Act_c::sound_flash_light() {
    if (this->field_0x38e != 0) {
        dComIfGp_getReverb((this->field_0x20a & 255));
    }
    return ((JAIZelBasic*)(base))->seStart(25123, ((char*)&M_sound_pos__Q211daObjTribox5Act_c + 0), sound_get_mapinfo(((char*)&M_sound_pos__Q211daObjTribox5Act_c + 0)), dComIfGp_getReverb((this->field_0x20a & 255)), 0);
}

/* 0000243C-00002458       .text mode_block_wait_init__Q211daObjTribox5Act_cFv */
void daObjTribox::Act_c::mode_block_wait_init() {
    /* field_0x340 = 0; */
    /* field_0x308 = 0; */
    return this;
}

/* 00002458-000025C0       .text mode_block_wait__Q211daObjTribox5Act_cFv */
void daObjTribox::Act_c::mode_block_wait() {
        /* if (base == 0) goto L_2398; */
        /* field_0x340 = 0; */
        mode_block_sink_init();
        /* goto L_24b8; */
        /* L_2398:; */
        /* if (this->field_0x310 == 0) goto L_23e4; */
        /* if (this->field_0x314 != this->field_0x324) goto L_23e4; */
        /* if (this->field_0x318 != this->field_0x328) goto L_23e4; */
        /* if (this->field_0x31c != this->field_0x32c) goto L_23e4; */
        /* field_0x340 = (this->field_0x340 + 1); */
        /* goto L_23ec; */
        /* L_23e4:; */
        /* field_0x340 = 0; */
        /* L_23ec:; */
        /* if (this->field_0x340 < 4) goto L_24b8; */
        /* if (this->field_0x318 != 0) goto L_2410; */
        /* if (this->field_0x31c == 1) goto L_2424; */
        /* L_2410:; */
        /* if (this->field_0x318 != 1) goto L_2430; */
        /* if (this->field_0x31c != 0) goto L_2430; */
        /* L_2424:; */
        /* field_0x358 = 1; */
        /* goto L_2438; */
        /* L_2430:; */
        /* field_0x358 = -1; */
        /* L_2438:; */
        /* if (this->field_0x318 != 0) goto L_2464; */
        /* field_0x354 = ((this->field_0x318 * 3) - (this->field_0x314 + 2)); */
        /* goto L_2480; */
        /* L_2464:; */
        /* field_0x354 = ((((this->field_0x318 * 3) - (this->field_0x314 + 2)) * 3) - (this->field_0x314 + 1)); */
        /* L_2480:; */
        /* if (chk_space() == 0) goto L_24b8; */
        /* L_24b8:; */
        return mode_block_walk_init();
}

/* 000025C0-0000262C       .text mode_block_walk_init__Q211daObjTribox5Act_cFv */
void daObjTribox::Act_c::mode_block_walk_init() {
    /* field_0x308 = 1; */
    /* field_0x30c = 20; */
    /* field_0x344 = 0; */
    /* field_0x348 = 0; */
    /* field_0x34c = 0; */
    eff_smoke_start();
    /* return this->field_0x5b38; */
}

/* 0000262C-00002B34       .text mode_block_walk__Q211daObjTribox5Act_cFv */
void daObjTribox::Act_c::mode_block_walk() {
        /* _savegpr_19(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* field_0x30c = (this->field_0x30c + -1); */
        cos(1);
        PSMTXRotRad(((char*)&now__14mDoMtx_stack_c + 0), 89);
        ((mDoMtx_stack_c*)(PSMTXMultVecSR(((char*)&now__14mDoMtx_stack_c + 0), (((char*)&M_post__Q211daObjTribox5Act_c + 0) + (this->field_0x354 * 12)))))->rYrotM();
        PSMTXMultVecSR(((char*)&now__14mDoMtx_stack_c + 0), (((char*)&M_post__Q211daObjTribox5Act_c + 0) + (this->field_0x354 * 12)));
        __pl();
        __mi();
        current = 0;
        /* field_0x1fc = 0; */
        /* field_0x200 = 0; */
        /* if (/ * beq * / 1) goto L_2704; */
        /* ((daObjTribox::Act_c*)(_savegpr_19(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->eff_smoke_end(); */
        /* goto L_270c; */
        /* L_2704:; */
        /* ((daObjTribox::Act_c*)(_savegpr_19(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->eff_smoke_pos(); */
        /* L_270c:; */
        /* if (/ * beq * / 1) goto L_27cc; */
        /* field_0x350 = ((this->field_0x358 * 6) - (this->field_0x350 + this->field_0x358)); */
        /* if (((daObjTribox::Act_c*)(_savegpr_19(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->chk_wall(1) == 0) goto L_27c0; */
        ((dBgS*)(((char*)&g_dComIfG_gameInfo + 4768)))->GetMtrlSndId(((char*)&M_lin__Q211daObjTribox5Act_c + 20));
        /* ((JAIZelBasic*)(base))->seStart(10275, (_savegpr_19(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 608), ((dBgS*)(((char*)&g_dComIfG_gameInfo + 4768)))->GetMtrlSndId(((char*)&M_lin__Q211daObjTribox5Act_c + 20)), dComIfGp_getReverb((this->field_0x20a & 255)), 0); */
        /* L_27c0:; */
        /* ((daObjTribox::Act_c*)(_savegpr_19(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->mode_block_wait_init(); */
        /* goto L_2a18; */
        /* L_27cc:; */
        __ct();
        /* field_0xc = 0; */
        /* field_0xc = 0; */
        /* field_0x10 = 1; */
        /* if (/ * beq * / 1) goto L_2880; */
        /* L_2880:; */
        ((cBgS*)(((char*)&g_dComIfG_gameInfo + 4768)))->GroundCross();
        /* if (/ * blt * / 1) goto L_291c; */
        /* if (/ * bge * / 1) goto L_291c; */
        ((dBgS*)(((char*)&g_dComIfG_gameInfo + 4768)))->GetMtrlSndId();
        /* L_291c:; */
        /* ((JAIZelBasic*)(base))->seStart(8226, (_savegpr_19(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 608), ((dBgS*)(((char*)&g_dComIfG_gameInfo + 4768)))->GetMtrlSndId(), dComIfGp_getReverb((this->field_0x20a & 255)), 0); */
        /* if (/ * beq * / 1) goto L_29ec; */
        /* if (/ * beq * / 1) goto L_29c8; */
        /* if (/ * beq * / 1) goto L_29c8; */
        /* L_29c8:; */
        /* if (/ * beq * / 1) goto L_29ec; */
        /* if (/ * beq * / 1) goto L_29ec; */
        /* L_29ec:; */
        /* L_2a18:; */
        return _restgpr_19(__dt());
}

/* 00002B34-00002B90       .text mode_block_sink_init__Q211daObjTribox5Act_cFv */
void daObjTribox::Act_c::mode_block_sink_init() {
    /* field_0x308 = 2; */
    /* field_0x390 = 0; */
    /* field_0x30c = 0; */
    eff_sink_smoke_init();
    return vib_sink_init();
}

/* 00002B90-00002CE4       .text mode_block_sink__Q211daObjTribox5Act_cFv */
void daObjTribox::Act_c::mode_block_sink() {
        /* if (base == 0) goto L_2bc8; */
        eff_sink_smoke_start();
        vib_sink_start();
        /* field_0x390 = (this->field_0x390 + base); */
        /* if (this->field_0x30c < this->field_0xc) goto L_2b28; */
        /* if (this->field_0x30c >= this->field_0xe) goto L_2b28; */
        /* field_0x390 = (this->field_0x390 * this->field_0x8); */
        /* goto L_2b6c; */
        /* L_2b28:; */
        /* if (this->field_0x30c < this->field_0x14) goto L_2b58; */
        /* if (this->field_0x30c >= this->field_0x16) goto L_2b58; */
        /* field_0x390 = (this->field_0x390 * this->field_0x10); */
        /* goto L_2b6c; */
        /* L_2b58:; */
        /* field_0x390 = (this->field_0x390 * this->field_0x4); */
        /* L_2b6c:; */
        /* field_0x1fc = (this->field_0x1fc + this->field_0x390); */
        /* if (this->field_0x1fc >= (this->field_0x34 + this->field_0x1d4)) goto L_2bb0; */
        /* field_0x1fc = (this->field_0x34 + this->field_0x1d4); */
        eff_sink_smoke_end();
        vib_sink_end();
        sound_sink_stop_block();
        mode_block_lower_init();
        /* goto L_2bd8; */
        /* L_2bb0:; */
        sound_sink_down_block();
        /* field_0x30c = (this->field_0x30c + 1); */
        /* goto L_2bd8; */
        /* L_2bc8:; */
        /* field_0x390 = 0; */
        /* field_0x30c = 0; */
        /* L_2bd8:; */
        /* return this->field_0x30c; */
}

/* 00002CE4-00002D14       .text mode_block_lower_init__Q211daObjTribox5Act_cFv */
void daObjTribox::Act_c::mode_block_lower_init() {
    /* field_0x308 = 3; */
    /* field_0x3fa = 94; */
    return this;
}

/* 00002D14-00002DA8       .text mode_block_lower__Q211daObjTribox5Act_cFv */
void daObjTribox::Act_c::mode_block_lower() {
    if (this->field_0x30c > 0) {
        /* field_0x30c = (this->field_0x30c + -1); */
        /* if (this->field_0x30c == 0) goto L_2c60; */
        eff_flash();
        /* field_0x394 = 1; */
    }
    /* L_2c60:; */
    if (this->field_0x30c == 0) {
        /* if (this->field_0x3fa > 0) goto L_2ca0; */
        /* field_0x3fa = (this->field_0x3fa + -1); */
        /* if (this->field_0x3fa == 0) goto L_2ca0; */
        sound_flash_shine();
    } else {
        /* field_0x3fa = 94; */
    }
    /* L_2ca0:; */
    return sound_flash_shine();
}

/* 00002DA8-00002DC0       .text mode_correct_off_init__Q211daObjTribox5Act_cFv */
void daObjTribox::Act_c::mode_correct_off_init() {
    fopAcM_OffStatus(this, fopAcStts_NOCULLEXEC_e);
    mMode = 4;
}

/* 00002DC0-00002E1C       .text mode_correct_off__Q211daObjTribox5Act_cFv */
void daObjTribox::Act_c::mode_correct_off() {
    /* if (fopAcIt_Judge(((char*)&search_block__Q211daObjTribox5Act_cFPvPv + 0), this, arg2, arg3, arg4, arg5, arg6, arg7) != 0) { */
        /* base = (base + 1); */
    return mode_correct_on_init();
}

/* 00002E1C-00002E34       .text mode_correct_on_init__Q211daObjTribox5Act_cFv */
void daObjTribox::Act_c::mode_correct_on_init() {
    fopAcM_OffStatus(this, fopAcStts_NOCULLEXEC_e);
    mMode = 5;
}

/* 00002E34-00002EEC       .text mode_correct_on__Q211daObjTribox5Act_cFv */
void daObjTribox::Act_c::mode_correct_on() {
        /* if (fopAcIt_Judge(((char*)&search_block__Q211daObjTribox5Act_cFPvPv + 0), this, arg2, arg3, arg4, arg5, arg6, arg7) == 0) goto L_2dc8; */
        /* if (this->field_0x38e == 0) goto L_2d94; */
        /* if (base < 3) goto L_2d94; */
        base = 1;
        /* L_2d94:; */
        /* if (base == 0) goto L_2de4; */
        /* if (this->field_0x38e == 0) goto L_2dbc; */
        mode_correct_demoreq_init();
        /* goto L_2de4; */
        /* L_2dbc:; */
        mode_correct_end_init();
        /* goto L_2de4; */
        /* L_2dc8:; */
        base = (base + -1);
        /* L_2de4:; */
        return mode_correct_off_init();
}

/* 00002EEC-00002F0C       .text mode_correct_demoreq_init__Q211daObjTribox5Act_cFv */
void daObjTribox::Act_c::mode_correct_demoreq_init() {
    /* field_0x308 = 6; */
    /* field_0x30c = 10; */
    return this;
}

/* 00002F0C-00002FB4       .text mode_correct_demoreq__Q211daObjTribox5Act_cFv */
void daObjTribox::Act_c::mode_correct_demoreq() {
        /* if (((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getEventData(this->field_0x396) == 0) goto L_2e98; */
        /* if (this->field_0xf8 != 2) goto L_2e68; */
        /* field_0x395 = 1; */
        /* goto L_2e98; */
        /* L_2e68:; */
        fopAcM_orderOtherEventId(this, this->field_0x396, 255);
        /* L_2e98:; */
        /* if (0 == 0) goto L_2ea8; */
        /* L_2ea8:; */
        return mode_correct_demorun_init();
}

/* 00002FB4-00003028       .text mode_correct_demorun_init__Q211daObjTribox5Act_cFv */
void daObjTribox::Act_c::mode_correct_demorun_init() {
    /* field_0x308 = 7; */
    /* field_0x30c = 50; */
    /* return ((JAIZelBasic*)(base))->seStart(2054, 0, 0, 0, 0, arg6, arg7); */
}

/* 00003028-00003104       .text mode_correct_demorun__Q211daObjTribox5Act_cFv */
void daObjTribox::Act_c::mode_correct_demorun() {
        /* _savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* if (this->field_0x30c <= 0) goto L_2fa0; */
        /* field_0x30c = (this->field_0x30c + -1); */
        /* if (this->field_0x30c != 0) goto L_2ff8; */
        /* ((dSv_info_c*)(((char*)&g_dComIfG_gameInfo + 0)))->onSwitch(PrmAbstract<Q311daObjTribox5Act_c5Prm_e>__5daObjFPC10fopAc_ac_cQ311daObjTribox5Act_c5Prm_eQ311daObjTribox5Act_c5Prm_e(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7), 8, 8), (this->field_0x1e2 & 255)); */
        base = 1;
        /* goto L_2ff8; */
        /* L_2fa0:; */
        /* if (this->field_0x395 == 0) goto L_2fe8; */
        /* if (((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->endCheck(this->field_0x396) == 0) goto L_2fe4; */
        /* field_0x395 = 0; */
        /* goto L_2fe8; */
        /* L_2fe4:; */
        /* L_2fe8:; */
        /* if (0 == 0) goto L_2ff8; */
        /* L_2ff8:; */
        /* return _restgpr_29(((daObjTribox::Act_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->mode_correct_end_init()); */
}

/* 00003104-0000311C       .text mode_correct_end_init__Q211daObjTribox5Act_cFv */
void daObjTribox::Act_c::mode_correct_end_init() {
    actor_status |= 0x80;
    mMode = 8;
}

/* 0000311C-00003120       .text mode_correct_end__Q211daObjTribox5Act_cFv */
void daObjTribox::Act_c::mode_correct_end() {
}

/* 00003120-00003138       .text mode_correct_dummy_init__Q211daObjTribox5Act_cFv */
void daObjTribox::Act_c::mode_correct_dummy_init() {
    actor_status &= ~0x80;
    mMode = 9;
}

/* 00003138-0000313C       .text mode_correct_dummy__Q211daObjTribox5Act_cFv */
void daObjTribox::Act_c::mode_correct_dummy() {
}

/* 0000313C-00003288       .text mode_proc_call__Q211daObjTribox5Act_cFv */
void daObjTribox::Act_c::mode_proc_call() {
    if (base != 0) {
        base = 1;
    }
    /* return __ptmf_scall(this, ((C_@2100 + 0) + 264), ((char*)&init$5197 + 0), (C_@2100 + 0), this->field_0xfc, arg5, arg6, arg7); */
}

/* 00003288-00003304       .text execute_block__Q211daObjTribox5Act_cFv */
void daObjTribox::Act_c::execute_block() {
    mode_proc_call();
    /* field_0x310 = 0; */
    eyePos = 0;
    /* field_0x264 = 0; */
    /* field_0x268 = 0; */
    set_mtx();
    /* return ((dBgW*)(this->field_0x2d0))->Move(); */
}

/* 00003304-00003324       .text execute_correct__Q211daObjTribox5Act_cFv */
void daObjTribox::Act_c::execute_correct() {
    mode_proc_call();
}

/* 00003324-000033D8       .text _execute__Q211daObjTribox5Act_cFv */
bool daObjTribox::Act_c::_execute() {
        /* if (PrmAbstract<Q311daObjTribox5Act_c5Prm_e>__5daObjFPC10fopAc_ac_cQ311daObjTribox5Act_c5Prm_eQ311daObjTribox5Act_c5Prm_e(this, 1, 16, arg3, arg4, arg5, arg6, arg7) != 0) goto L_3264; */
        execute_block();
        /* goto L_326c; */
        /* L_3264:; */
        execute_correct();
        /* L_326c:; */
        /* if (mBck0 == 0) goto L_32cc; */
        /* if (this->field_0x394 != 1) goto L_32a0; */
        /* if (((mDoExt_baseAnm*)((this + 672)))->play() == 0) goto L_32b0; */
        /* field_0x394 = 2; */
        /* goto L_32b0; */
        /* L_32a0:; */
        /* if (2 != 2) goto L_32b0; */
        ((mDoExt_baseAnm*)((this + 696)))->play();
        /* L_32b0:; */
        /* if (this->field_0x394 == 1) goto L_32c4; */
        /* if (this->field_0x394 != 2) goto L_32cc; */
        /* L_32c4:; */
        sound_flash_light();
        /* L_32cc:; */
        return 1;
}

/* 000033D8-00003538       .text _draw__Q211daObjTribox5Act_cFv */
bool daObjTribox::Act_c::_draw() {
        /* if (this->field_0x304 == 0) goto L_3310; */
        /* if (this->field_0x304 != 3) goto L_3428; */
        /* L_3310:; */
        ((dScnKy_env_light_c*)(((char*)&g_env_light + 0)))->settingTevStruct(0, (this + 504), (this + 268));
        ((dScnKy_env_light_c*)(((char*)&g_env_light + 0)))->setLightTevColorType(mpModel, (this + 268));
        /* if (this->field_0x394 == 0) goto L_339c; */
        ((dScnKy_env_light_c*)(((char*)&g_env_light + 0)))->setLightTevColorType(mBck0, (this + 268));
        /* if (this->field_0x394 != 1) goto L_3384; */
        /* ((mDoExt_brkAnm*)((this + 672)))->entry(this->field_0x4); */
        /* goto L_339c; */
        /* L_3384:; */
        /* ((mDoExt_brkAnm*)((this + 696)))->entry(this->field_0x4); */
        /* L_339c:; */
        /* if (this->field_0x394 == 0) goto L_33e8; */
        mDoExt_modelUpdateDL(mBck0);
        /* L_33e8:; */
        mDoExt_modelUpdateDL(mpModel);
        /* L_3428:; */
        return 1;
}

namespace daObjTribox {
namespace {
/* 00003538-00003558       .text Mthd_Create__Q211daObjTribox28@unnamed@d_a_obj_tribox_cpp@FPv */
cPhs_State Mthd_Create(void* i_this) {
    return ((daObjTribox::Act_c*)i_this)->_create();
}

/* 00003558-0000357C       .text Mthd_Delete__Q211daObjTribox28@unnamed@d_a_obj_tribox_cpp@FPv */
BOOL Mthd_Delete(void* i_this) {
    return ((daObjTribox::Act_c*)i_this)->_delete();
}

/* 0000357C-000035A0       .text Mthd_Execute__Q211daObjTribox28@unnamed@d_a_obj_tribox_cpp@FPv */
BOOL Mthd_Execute(void* i_this) {
    return ((daObjTribox::Act_c*)i_this)->_execute();

/* 000035A0-000035C4       .text Mthd_Draw__Q211daObjTribox28@unnamed@d_a_obj_tribox_cpp@FPv */
BOOL Mthd_Draw(void* i_this) {
    return ((daObjTribox::Act_c*)i_this)->_draw();

/* 000035C4-000035CC       .text Mthd_IsDelete__Q211daObjTribox28@unnamed@d_a_obj_tribox_cpp@FPv */
BOOL Mthd_IsDelete(void*) {
    return 1;

static actor_method_class Mthd_Table = {
    (process_method_func)Mthd_Create,
    (process_method_func)Mthd_Delete,
    (process_method_func)Mthd_Execute,
    (process_method_func)Mthd_IsDelete,
    (process_method_func)Mthd_Draw,
};
}; // namespace
}; // namespace daObjTribox

actor_process_profile_definition g_profile_Obj_Tribox = {
    /* Layer ID     */ fpcLy_CURRENT_e,
    /* List ID      */ 0x0003,
    /* List Prio    */ fpcPi_CURRENT_e,
    /* Proc Name    */ fpcNm_Obj_Tribox_e,
    /* Proc SubMtd  */ &g_fpcLf_Method.base,
    /* Size         */ sizeof(daObjTribox::Act_c),
    /* Size Other   */ 0,
    /* Parameters   */ 0,
    /* Leaf SubMtd  */ &g_fopAc_Method.base,
    /* Draw Prio    */ fpcDwPi_Obj_Tribox_e,
    /* Actor SubMtd */ &daObjTribox::Mthd_Table,
    /* Status       */ fopAcStts_CULL_e | fopAcStts_UNK40000_e,
    /* Group        */ fopAc_ACTOR_e,
    /* Cull Type    */ fopAc_CULLSPHERE_CUSTOM_e,
};

/* 由 fix_decomp_braces.py 补齐：反编译产物末尾缺 5 个 } */
}}}}}
