/**
 * d_a_obj_magmarock.cpp
 * Object - Dragon Roost Cavern - Lava slab
 */

#include "d/dolzel_rel.h" // IWYU pragma: keep
#include "d/actor/d_a_obj_magmarock.h"

/* 00000078-00000128       .text set_mtx__Q214daObjMagmarock5Act_cFv */
void daObjMagmarock::Act_c::set_mtx() {
    /* field_0x18 = 0; */
    /* field_0x1c = 0; */
    /* field_0x20 = 0; */
    /* PSMTXTrans(((char*)&now__14mDoMtx_stack_c + 0), arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
    /* mDoMtx_ZXYrotM(((char*)&now__14mDoMtx_stack_c + 0), shape_angle, this->field_0x20e); */
    PSQUATMultiply((this + 688), (this + 720));
    quatM();
    PSMTXCopy(((char*)&now__14mDoMtx_stack_c + 0), (this->field_0x2f4 + 36));
    return PSMTXCopy(((char*)&now__14mDoMtx_stack_c + 0), (this + 808));
}

/* 00000128-00000258       .text demo_move__Q214daObjMagmarock5Act_cFv */
void daObjMagmarock::Act_c::demo_move() {
        /* _savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* if (((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->isEventBit(896) != 0) goto L_1c8; */
        /* if (this->field_0x29f == 0) goto L_f8; */
        /* goto L_1c8; */
        /* L_f8:; */
        /* if (this->field_0x45a != 0) goto L_148; */
        /* if (this->field_0xf8 != 2) goto L_11c; */
        /* field_0x45a = (this->field_0x45a + 1); */
        /* goto L_1c8; */
        /* L_11c:; */
        /* fopAcM_orderOtherEvent2(_savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7), ((char*)&@stringBase0 + 0), 1); */
        /* goto L_1c8; */
        /* L_148:; */
        /* if (fopAcM_orderOtherEvent2(_savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7), ((char*)&@stringBase0 + 0), 1) != 1) goto L_1c8; */
        ((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMyStaffId(((char*)&@stringBase0 + 10), 0, 0);
        /* if (((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->endCheckOld(((char*)&@stringBase0 + 0)) == 0) goto L_1bc; */
        /* field_0x45a = (this->field_0x45a + 1); */
        ((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->onEventBit(896);
        /* goto L_1c8; */
        /* L_1bc:; */
        /* L_1c8:; */
        return _restgpr_27(((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->cutEnd(((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMyStaffId(((char*)&@stringBase0 + 10), 0, 0)));
}

/* 00000258-00000410       .text ControlEffect__Q214daObjMagmarock5Act_cFv */
void daObjMagmarock::Act_c::ControlEffect() {
        /* if (this->field_0x45c == 0) goto L_35c; */
        /* if (this->field_0x45e == 0) goto L_284; */
        /* if (this->field_0x2a8 != 0) goto L_268; */
        /* field_0x2a8 = ((dPa_control_c*)(this->field_0x5ab8))->set(0, (arg2 + -32508), (this + 504), 0, 0, 255, 0); */
        /* goto L_384; */
        /* L_268:; */
        old = 0;
        /* field_0x1e8 = 0; */
        /* field_0x1ec = 0; */
        /* goto L_384; */
        /* L_284:; */
        /* if (this->field_0x2a8 == 0) goto L_2ac; */
        /* field_0x60 = -1; */
        /* field_0x2a8 = 0; */
        /* L_2ac:; */
        /* if (mBrk0 != 0) goto L_340; */
        ((dVibration_c*)(((char*)&g_dComIfG_gameInfo + 22944)))->StartShock(4, 1);
        /* mBrk0 = ((dPa_control_c*)(this->field_0x5ab8))->set(2); */
        /* goto L_384; */
        /* L_340:; */
        old = 0;
        /* field_0x1e8 = 0; */
        /* field_0x1ec = 0; */
        /* goto L_384; */
        /* L_35c:; */
        /* if (mBrk0 == 0) goto L_384; */
        /* field_0x60 = -1; */
        mBrk0 = 0;
        /* L_384:; */
        return mBrk0;
}

/* 0000044C-00000560       .text play_anim__Q214daObjMagmarock5Act_cFv */
void daObjMagmarock::Act_c::play_anim() {
        /* if (this->field_0x44c <= 375) goto L_40c; */
        /* if (this->field_0x438 <= base) goto L_40c; */
        /* field_0x438 = (this->field_0x438 - base); */
        /* goto L_460; */
        /* L_40c:; */
        /* if (this->field_0x44c < 15) goto L_41c; */
        /* if (this->field_0x44c <= 60) goto L_460; */
        /* L_41c:; */
        /* if (this->field_0x438 >= ((this->field_0x438 - base) - this->field_0x438)) goto L_460; */
        /* field_0x438 = (this->field_0x438 + base); */
        /* L_460:; */
        /* if (this->field_0x44c >= 60) goto L_4b4; */
        /* if (this->field_0x434 >= ((this->field_0x438 + base) - this->field_0x438)) goto L_4b4; */
        /* field_0x434 = (this->field_0x434 + base); */
        /* goto L_4e0; */
        /* L_4b4:; */
        /* if (this->field_0x44c <= 375) goto L_4e0; */
        /* if (this->field_0x434 <= base) goto L_4e0; */
        /* field_0x434 = (this->field_0x434 - base); */
        /* L_4e0:; */
        return this;
}

/* 00000560-0000058C       .text appear_proc_init__Q214daObjMagmarock5Act_cFv */
void daObjMagmarock::Act_c::appear_proc_init() {
    /* field_0x448 = 30; */
    return this;
}

/* 0000058C-000005EC       .text appear_proc__Q214daObjMagmarock5Act_cFv */
void daObjMagmarock::Act_c::appear_proc() {
    if (this->field_0x448 == 10) {
        ((dBgS*)(((char*)&g_dComIfG_gameInfo + 4768)))->Regist(this->field_0x358, this);
    }
    if (this->field_0x448 == 0) {
    }
    return wait_proc_init();
}

/* 000005EC-00000618       .text wait_proc_init__Q214daObjMagmarock5Act_cFv */
void daObjMagmarock::Act_c::wait_proc_init() {
    /* field_0x448 = 300; */
    return this;
}

/* 00000618-00000644       .text wait_proc__Q214daObjMagmarock5Act_cFv */
void daObjMagmarock::Act_c::wait_proc() {
    if (this->field_0x448 == 0) {
    }
    return quake_proc_init();
}

/* 00000644-000006E0       .text stay_proc_init__Q214daObjMagmarock5Act_cFv */
void daObjMagmarock::Act_c::stay_proc_init() {
    if ((this->field_0xb0 & 16777215) == 255) {
    }
    /* field_0x438 = 0; */
    /* field_0x434 = 0; */
    /* field_0x448 = (((0 & 16777215) * 15) + 30); */
    /* field_0x44c = 330; */
    ((dBgS*)(((char*)&g_dComIfG_gameInfo + 4768)))->Regist(this->field_0x358, this);
    return base;
}

/* 000006E0-00000720       .text stay_proc__Q214daObjMagmarock5Act_cFv */
void daObjMagmarock::Act_c::stay_proc() {
    if (this->field_0x29e != 0) {
        /* field_0x448 = (this->field_0x448 + -1); */
        /* if (this->field_0x448 == 0) goto L_698; */
    }
    /* L_698:; */
    return quake_proc_init();
}

/* 00000720-000007B8       .text quake_proc_init__Q214daObjMagmarock5Act_cFv */
void daObjMagmarock::Act_c::quake_proc_init() {
    ((JAIZelBasic*)(base))->seStart(14351, (this + 608), 0, dComIfGp_getReverb((this->field_0x20a & 255)), 0);
    /* field_0x448 = 45; */
    return base;
}

/* 000007B8-0000084C       .text quake_proc__Q214daObjMagmarock5Act_cFv */
void daObjMagmarock::Act_c::quake_proc() {
    /* field_0x454 = (this->field_0x454 + this->field_0x456); */
    cLib_addCalcAngleS2((this + 1110), 4096, 2, 256);
    cLib_addCalc2((this + 1072), ((char*)&g_regHIO + 0));
    if (this->field_0x448 == 0) {
    }
    return vanish_proc_init();
}

/* 0000084C-00000878       .text vanish_proc_init__Q214daObjMagmarock5Act_cFv */
void daObjMagmarock::Act_c::vanish_proc_init() {
    /* field_0x448 = 90; */
    return this;
}

/* 00000878-000008F8       .text vanish_proc__Q214daObjMagmarock5Act_cFv */
void daObjMagmarock::Act_c::vanish_proc() {
    /* field_0x454 = (this->field_0x454 + this->field_0x456); */
    cLib_addCalcAngleS2((this + 1110), 0, 4, 64);
    if (this->field_0x448 == 80) {
        /* ((cBgS*)(((char*)&g_dComIfG_gameInfo + 4768)))->Release(this->field_0x358); */
    }
    if (this->field_0x448 < 0) {
    }
    return fopAcM_delete(this);
}

/* 000008F8-00000AEC       .text ride_call_back__14daObjMagmarockFP4dBgWP10fopAc_ac_cP10fopAc_ac_c */
void daObjMagmarock::ride_call_back(dBgW*, fopAc_ac_c*, fopAc_ac_c*) {
    __mi();
    outprod();
    PSVECSquareMag();
    }
    if (normalizeRS() == 0) {
        /* cLib_addCalcAngleS2((arg1 + 664)); */
        /* field_0x29c = 1; */
        /* field_0x29e = 1; */
        /* field_0x2c0 = 0; */
        /* field_0x2c4 = 0; */
        /* field_0x2c8 = 0; */
        /* field_0x2cc = 0; */
    }
    return (this->field_0x298 & 65535);


/* 00000AEC-00000B0C       .text CheckCreateHeap__14daObjMagmarockFP10fopAc_ac_c */
BOOL daObjMagmarock::CheckCreateHeap(fopAc_ac_c* i_this) {
    static_cast<daObjMagmarock::Act_c*>(i_this)->CreateHeap();
    return TRUE;
}

/* 00000B0C-00000DA0       .text CreateHeap__Q214daObjMagmarock5Act_cFv */
void daObjMagmarock::Act_c::CreateHeap() {
    /* _savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
    ((dRes_control_c*)(((char*)&M_arcname__Q214daObjMagmarock5Act_c + 0)))->getRes(9);
    if (/* bne */ 1) {
        ((JUTAssertion*)(((JUTAssertion*)(((dRes_control_c*)(((char*)&M_arcname__Q214daObjMagmarock5Act_c + 0)))->getRes(9)))->getSDevice()))->showAssert(((char*)&@stringBase0 + 18), 333, ((char*)&@stringBase0 + 40));
    }
    /* field_0x2f4 = mDoExt_J3DModel(OSPanic(((char*)&@stringBase0 + 18), 333, ((char*)&@stringBase0 + 55)), 0); */
    /* field_0x2f8 = ((dRes_control_c*)(((char*)&M_arcname__Q214daObjMagmarock5Act_c + 0)))->getRes(12); */
    /* field_0x314 = ((dRes_control_c*)(((char*)&M_arcname__Q214daObjMagmarock5Act_c + 0)))->getRes(6); */
    if (this->field_0x2f8 == 0) {
        ((JUTAssertion*)(((JUTAssertion*)(((dRes_control_c*)(((char*)&M_arcname__Q214daObjMagmarock5Act_c + 0)))->getRes(6)))->getSDevice()))->showAssert(((char*)&@stringBase0 + 18), 341, ((char*)&@stringBase0 + 60));
        OSPanic(((char*)&@stringBase0 + 18), 341, ((char*)&@stringBase0 + 55));
    }
    if (this->field_0x314 == 0) {
        ((JUTAssertion*)(((JUTAssertion*)(OSPanic(((char*)&@stringBase0 + 18), 341, ((char*)&@stringBase0 + 55))))->getSDevice()))->showAssert(((char*)&@stringBase0 + 18), 342, ((char*)&@stringBase0 + 71));
        OSPanic(((char*)&@stringBase0 + 18), 342, ((char*)&@stringBase0 + 55));
    }
    /* ((mDoExt_brkAnm*)((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 764)))->init(); */
    /* ((mDoExt_bckAnm*)((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 792)))->init(); */
    PSMTXTrans(((char*)&now__14mDoMtx_stack_c + 0));
    /* ((mDoMtx_stack_c*)(mDoMtx_YrotM(((char*)&now__14mDoMtx_stack_c + 0), this->field_0x20e)))->scaleM(); */
    /* PSMTXCopy(((char*)&now__14mDoMtx_stack_c + 0), (_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 808)); */
    /* field_0x358 = dBgW_NewSet(((dRes_control_c*)(((char*)&M_arcname__Q214daObjMagmarock5Act_c + 0)))->getRes(15), 1, (_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 808)); */
    /* field_0xa8 = 0; */
    if (this->field_0x358 == 0) {
        return 0;
    }
    if (this->field_0x2f4 != 0) {
        /* if (((mDoExt_brkAnm*)((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 764)))->init() != 0) goto L_d0c; */
        /* if (((mDoExt_bckAnm*)((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 792)))->init() != 0) goto L_d0c; */
    }
    /* L_d0c:; */
    return _restgpr_28((1 & 16777215));
}

/* 00000DA0-000013B4       .text CreateInit__Q214daObjMagmarock5Act_cFv */
void daObjMagmarock::Act_c::CreateInit() {
        /* _savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        scale = 0;
        /* field_0x218 = 0; */
        /* field_0x21c = 0; */
        cullMtx = (this->field_0x2f4 + 36);
        /* fopAcM_setCullSizeBox(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7), this->field_0x2f4); */
        /* PSMTXCopy((this->field_0x2f4 + 36), (_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 808)); */
        /* field_0x430 = 0; */
        mpModel = 0;
        /* field_0x29a = 0; */
        /* field_0x450 = 0; */
        /* field_0x448 = 30; */
        /* field_0x44c = 0; */
        /* field_0x438 = 0; */
        /* field_0x454 = 0; */
        /* field_0x456 = 0; */
        /* field_0x45a = 0; */
        /* field_0x29e = 0; */
        speed = 0;
        /* field_0x224 = 0; */
        /* field_0x228 = 0; */
        home = 0;
        /* field_0x1d4 = 0; */
        /* field_0x1d8 = 0; */
        /* field_0x1d4 = (this->field_0x1d4 + this->field_0x58); */
        gravity = 0;
        /* field_0x2d0 = 0; */
        /* field_0x2d4 = 0; */
        /* field_0x2d8 = 0; */
        /* field_0x2dc = 0; */
        /* field_0x2c0 = 0; */
        mAcch = 0;
        /* field_0x2c8 = 0; */
        /* field_0x2cc = 0; */
        /* field_0x2b0 = 0; */
        /* field_0x2b4 = 0; */
        /* field_0x2b8 = 0; */
        /* field_0x2bc = 0; */
        /* ((daObjMagmarock::Act_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->set_mtx(); */
        /* field_0xb0 = 0; */
        /* field_0x29f = (this->field_0xb0 >> 24); */
        /* if (this->field_0x29f == 0) goto L_ea4; */
        /* ((daObjMagmarock::Act_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->stay_proc_init(); */
        /* goto L_1320; */
        /* L_ea4:; */
        /* ((daObjMagmarock::Act_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->appear_proc_init(); */
        /* if (this->field_0x2a0 != 0) goto L_1320; */
        /* ((JAIZelBasic*)(base))->seStart(14350, (_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 608), 0, dComIfGp_getReverb((this->field_0x20a & 255)), 0); */
        ((dVibration_c*)(((char*)&g_dComIfG_gameInfo + 22944)))->StartShock(4, 1);
        /* field_0x35c = 0; */
        /* field_0x360 = 0; */
        /* field_0x364 = 0; */
        /* field_0x368 = 0; */
        /* field_0x36c = 0; */
        /* field_0x370 = 0; */
        /* field_0x378 = 0; */
        /* field_0x37c = 0; */
        /* field_0x380 = 0; */
        /* field_0x384 = 0; */
        /* field_0x388 = 0; */
        /* field_0x38c = 0; */
        /* field_0x3d0 = 0; */
        /* field_0x3d4 = 0; */
        /* field_0x3d8 = 0; */
        /* field_0x3f4 = 0; */
        /* field_0x3f8 = 0; */
        /* field_0x3fc = 0; */
        /* ((dScnKy_env_light_c*)(((char*)&g_env_light + 0)))->settingTevStruct(0, (_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 504), (_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 860)); */
        /* field_0x3dc = 0; */
        /* field_0x3de = 0; */
        /* field_0x3e0 = 0; */
        /* field_0x3e4 = 0; */
        /* field_0x3e5 = 0; */
        /* field_0x3e6 = 0; */
        /* field_0x2a0 = ((dPa_control_c*)(this->field_0x5ab8))->set(2); */
        /* field_0x2a4 = ((dPa_control_c*)(this->field_0x5ab8))->set(2); */
        /* if (this->field_0x2a0 == 0) goto L_12d8; */
        /* L_12d8:; */
        /* if (this->field_0x2a4 == 0) goto L_1320; */
        /* L_1320:; */
        /* return _restgpr_29(1, this->field_0x2a4, this->field_0x1, this->field_0x2); */
}

/* 000013B4-00001560       .text LiftUpRequest__Q214daObjMagmarock5Act_cFR4cXyz */
void daObjMagmarock::Act_c::LiftUpRequest(cXyz&) {
        /* _savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* field_0x43c = 0; */
        /* field_0x440 = 0; */
        /* field_0x444 = 0; */
        /* __ptmf_cmpr((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 736)); */
        /* if (/ * bne * / 1) goto L_1464; */
        /* __ptmf_cmpr((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 736)); */
        /* if (/ * beq * / 1) goto L_145c; */
        __mi();
        /* if (normalizeRS() != 0) goto L_143c; */
        /* L_143c:; */
        PSVECScale();
        /* PSVECAdd((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 504)); */
        /* L_145c:; */
        return 0;
        /* L_1464:; */
        /* cLib_addCalcPos2((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 504)); */
        /* cLib_addCalc2((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1072)); */
        /* cLib_addCalcAngleS2((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1110), 4608, 4, 256); */
        /* field_0x454 = (this->field_0x454 + this->field_0x456); */
        /* cLib_addCalc2((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 508)); */
        /* field_0x45c = 1; */
        return _restgpr_29(1);
}

/* 00001560-0000167C       .text BeforeLiftRequest__Q214daObjMagmarock5Act_cFR4cXyz */
void daObjMagmarock::Act_c::BeforeLiftRequest(cXyz&) {
    /* field_0x43c = 0; */
    /* field_0x440 = 0; */
    /* field_0x444 = 0; */
    /* if (this->field_0x440 > (this->field_0x84 + this->field_0x1d4)) { */
        /* field_0x440 = (this->field_0x84 + this->field_0x1d4); */
    __ptmf_cmpr((this + 736));
    if (/* bne */ 1) {
        return 0;
    }
    cLib_addCalcPos2((this + 504), (this + 1084));
    cLib_addCalc2((this + 1072));
    cLib_addCalcAngleS2((this + 1110), 2560, 8, 256);
    /* field_0x454 = (this->field_0x454 + this->field_0x456); */
    cLib_addCalc2((this + 508));
    /* field_0x45c = 1; */
    /* field_0x45e = 1; */
    return 1;
}

/* 0000167C-000017DC       .text calc_ground_quat__Q214daObjMagmarock5Act_cFv */
void daObjMagmarock::Act_c::calc_ground_quat() {
    /* _savegpr_25(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
    if (this->field_0x5ac0 != 0) {
    }
    /* if ((this->field_0x1fc - this->field_0x6c) < this->field_0x90) { */
        /* field_0x1d4 = (this->field_0x58 + (this->field_0x6c + (this->field_0x1fc - this->field_0x6c))); */
    home = 0;
    /* field_0x1d8 = 0; */
    /* field_0x40c = 0; */
    /* field_0x410 = 0; */
    /* field_0x414 = 0; */
    /* field_0x418 = 0; */
    /* field_0x41c = 0; */
    /* field_0x420 = 0; */
    /* field_0x424 = 0; */
    /* field_0x428 = 0; */
    /* field_0x42c = 0; */
    /* L_16cc:; */
    /* PSVECAdd(((_savegpr_25(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 0) + 1036), (_savegpr_25(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 464), ((_savegpr_25(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 0) + 1036)); */
    if (this->field_0x5ac0 != 0) {
    }
    /* if ((this->field_0x1fc - this->field_0x6c) < this->field_0x90) { */
        /* field_0x410 = (this->field_0x58 + (this->field_0x1fc - this->field_0x6c)); */
    /* if ((0 + 1) >= 3) goto L_16cc; */
    /* return _restgpr_25(dLib_calc_QuatFromTriangle((_savegpr_25(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 720), (_savegpr_25(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1036), (_savegpr_25(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1048), (_savegpr_25(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1060))); */

/* 000017DC-0000198C       .text Create__Q214daObjMagmarock6MethodFPv */
cPhs_State daObjMagmarock::Method::Create(void*) {
        /* if (/ * bne * / 1) goto L_1894; */
        /* if (/ * beq * / 1) goto L_1888; */
        __ct();
        /* field_0x290 = 0; */
        /* field_0x2fc = 0; */
        /* field_0x300 = 0; */
        /* field_0x2fc = 0; */
        /* field_0x308 = 0; */
        /* field_0x30c = 0; */
        /* field_0x318 = 0; */
        /* field_0x31c = 0; */
        /* field_0x318 = 0; */
        /* field_0x324 = 0; */
        /* field_0x360 = 0; */
        /* field_0x364 = 0; */
        /* field_0x368 = 0; */
        /* field_0x36c = 0; */
        /* field_0x370 = 0; */
        /* field_0x378 = 0; */
        /* field_0x37c = 0; */
        /* field_0x380 = 0; */
        /* field_0x384 = 0; */
        /* field_0x388 = 0; */
        /* field_0x38c = 0; */
        /* __construct_array((this->field_0x1c8 + 1036), ((char*)&__ct__4cXyzFv + 0), ((char*)&__dt__4cXyzFv + 0), 12, 3); */
        /* L_1888:; */
        /* L_1894:; */
        /* if (dComIfG_resLoad((this + 748), ((char*)&M_arcname__Q214daObjMagmarock5Act_c + 0)) != 4) goto L_18f8; */
        /* if (this->field_0x5ac0 != 0) goto L_18cc; */
        /* goto L_18f8; */
        /* L_18cc:; */
        /* if (fopAcM_entrySolidHeap(this, ((char*)&CheckCreateHeap__14daObjMagmarockFP10fopAc_ac_c + 0), 23872) != 0) goto L_18f0; */
        /* goto L_18f8; */
        /* L_18f0:; */
        CreateInit();
        /* L_18f8:; */
        return 5;
}

/* 00001A90-00001B14       .text Delete__Q214daObjMagmarock6MethodFPv */
BOOL daObjMagmarock::Method::Delete(void*) {
        /* dComIfG_resDelete((this + 748), ((char*)&M_arcname__Q214daObjMagmarock5Act_c + 0), arg2); */
        /* if (this->field_0xf0 == 0) goto L_1a84; */
        /* if (this->field_0x0 < 0) goto L_1a68; */
        /* if (this->field_0x0 >= 256) goto L_1a68; */
        /* goto L_1a6c; */
        /* L_1a68:; */
        /* L_1a6c:; */
        /* if (0 == 0) goto L_1a84; */
        /* ((cBgS*)(((char*)&g_dComIfG_gameInfo + 4768)))->Release(this->field_0x358); */
        /* L_1a84:; */
        return 1;
}

/* 00001B14-00001B38       .text Execute__Q214daObjMagmarock6MethodFPv */
BOOL daObjMagmarock::Method::Execute(void*) {
    return (_execute() & 16777215);
}

/* 00001B38-00001EC0       .text _execute__Q214daObjMagmarock5Act_cFv */
bool daObjMagmarock::Act_c::_execute() {
        /* ((daObjMagmarock::Act_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->calc_ground_quat(); */
        /* if (this->field_0x45c != 0) goto L_1ba4; */
        /* __ptmf_cmpr((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 736)); */
        /* if (/ * bne * / 1) goto L_1b80; */
        /* __ptmf_cmpr((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 736)); */
        /* if (/ * bne * / 1) goto L_1b80; */
        /* cLib_addCalc2((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1072)); */
        /* cLib_addCalcAngleS2((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1110), 0, 4, 256); */
        /* L_1b80:; */
        /* field_0x1fc = (this->field_0x1fc + this->field_0x224); */
        /* field_0x224 = (this->field_0x224 + gravity); */
        /* goto L_1bac; */
        /* L_1ba4:; */
        /* field_0x224 = 0; */
        /* L_1bac:; */
        /* if (this->field_0x1fc >= (this->field_0xa8 + this->field_0x1d4)) goto L_1c78; */
        /* if (this->field_0x1e8 != (this->field_0xa8 + this->field_0x1d4)) goto L_1c04; */
        ((dVibration_c*)(((char*)&g_dComIfG_gameInfo + 22944)))->StartShock(4, 1);
        /* L_1c04:; */
        /* if (this->field_0x1fc >= this->field_0x1d4) goto L_1c58; */
        /* if (this->field_0x1fc >= (this->field_0x1d4 - this->field_0x18)) goto L_1c28; */
        /* field_0x1fc = (this->field_0x1d4 - this->field_0x18); */
        /* L_1c28:; */
        /* field_0x224 = (this->field_0x224 - ((this->field_0xac + this->field_0x614) * (this->field_0x1fc - this->field_0x1d4))); */
        /* L_1c58:; */
        /* field_0x224 = (this->field_0x224 * (this->field_0xb0 - this->field_0x610)); */
        /* L_1c78:; */
        /* if (this->field_0x45c != 0) goto L_1ccc; */
        /* __ptmf_cmpr((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 736)); */
        /* if (/ * bne * / 1) goto L_1ccc; */
        /* field_0x448 = (this->field_0x448 + -1); */
        /* field_0x44c = (this->field_0x44c + 1); */
        /* L_1ccc:; */
        /* ((daObjMagmarock::Act_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->set_mtx(); */
        /* ((daObjMagmarock::Act_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->demo_move(); */
        /* ((daObjMagmarock::Act_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->ControlEffect(); */
        /* field_0x45c = 0; */
        /* field_0x45e = 0; */
        /* __ptmf_scall(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* ((daObjMagmarock::Act_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->play_anim(); */
        /* if (mBck0 != 0) goto L_1db0; */
        /* field_0x2c0 = 0; */
        mAcch = 0;
        /* field_0x2c8 = 0; */
        /* field_0x2cc = 0; */
        /* L_1db0:; */
        /* C_QUATSlerp((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 688), (_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 704)); */
        /* field_0x2b0 = 0; */
        /* field_0x2b4 = 0; */
        /* field_0x2b8 = 0; */
        /* field_0x2bc = 0; */
        mBck0 = 0;
        /* if (base < 0) goto L_1e0c; */
        /* if (base >= 256) goto L_1e0c; */
        /* goto L_1e10; */
        /* L_1e0c:; */
        /* L_1e10:; */
        /* if (0 == 0) goto L_1e2c; */
        /* ((dBgW*)(this->field_0x358))->Move(); */
        /* L_1e2c:; */
        return _restgpr_29(0);

/* 00001EC0-00002128       .text Draw__Q214daObjMagmarock6MethodFPv */
BOOL daObjMagmarock::Method::Draw(void*) {
    /* ((dScnKy_env_light_c*)(((char*)&g_env_light + 0)))->settingTevStruct(1, (_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 504), (_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 268)); */
    /* ((dScnKy_env_light_c*)(((char*)&g_env_light + 0)))->settingTevStruct(0, (_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 504), (_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 860)); */
    /* field_0x3dc = 0; */
    /* field_0x3de = 0; */
    /* field_0x3e0 = 0; */
    /* field_0x3e4 = 0; */
    /* field_0x3e5 = 0; */
    /* field_0x3e6 = 0; */
    /* ((dScnKy_env_light_c*)(((char*)&g_env_light + 0)))->setLightTevColorType(this->field_0x2f4, (_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 268)); */
    /* ((mDoExt_brkAnm*)((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 764)))->entry(this->field_0x4, C_@4143); */
    /* ((mDoExt_bckAnm*)((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 792)))->entry(this->field_0x4, C_@4143); */
    /* mDoExt_modelUpdateDL(this->field_0x2f4); */
    return _restgpr_29(1);

/* 00002128-00002130       .text IsDelete__Q214daObjMagmarock6MethodFPv */
BOOL daObjMagmarock::Method::IsDelete(void*) {
    return 1;

actor_method_class daObjMagmarock::Method::Table = {
    (process_method_func)daObjMagmarock::Method::Create,
    (process_method_func)daObjMagmarock::Method::Delete,
    (process_method_func)daObjMagmarock::Method::Execute,
    (process_method_func)daObjMagmarock::Method::IsDelete,
    (process_method_func)daObjMagmarock::Method::Draw,
};

actor_process_profile_definition g_profile_Obj_Magmarock = {
    /* Layer ID     */ fpcLy_CURRENT_e,
    /* List ID      */ 0x0003,
    /* List Prio    */ fpcPi_CURRENT_e,
    /* Proc Name    */ fpcNm_Obj_Magmarock_e,
    /* Proc SubMtd  */ &g_fpcLf_Method.base,
    /* Size         */ sizeof(daObjMagmarock::Act_c),
    /* Size Other   */ 0,
    /* Parameters   */ 0,
    /* Leaf SubMtd  */ &g_fopAc_Method.base,
    /* Draw Prio    */ fpcDwPi_Obj_Magmarock_e,
    /* Actor SubMtd */ &daObjMagmarock::Method::Table,
    /* Status       */ fopAcStts_CULL_e | fopAcStts_UNK40000_e,
    /* Group        */ fopAc_ACTOR_e,
    /* Cull Type    */ fopAc_CULLBOX_CUSTOM_e,
};

/* 由 fix_decomp_braces.py 补齐：反编译产物末尾缺 4 个 } */
}}}}
