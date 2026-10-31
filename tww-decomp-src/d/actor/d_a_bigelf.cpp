/**
 * d_a_bigelf.cpp
 * NPC - Great Fairy
 */

#include "d/dolzel_rel.h" // IWYU pragma: keep
#include "d/actor/d_a_bigelf.h"

/* 00000078-0000016C       .text oct_delete__10daBigelf_cFv */
void daBigelf_c::oct_delete() {
    mUnkPos = 0;
    /* field_0x320 = 0; */
    /* field_0x324 = 0; */
    return this;
}

/* 0000016C-00000338       .text nodeCallBack__10daBigelf_cFP7J3DNode */
void daBigelf_c::nodeCallBack(J3DNode*) {
        /* _savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        PSMTXCopy();
        /* if (/ * bne * / 1) goto L_238; */
        /* if (m3BC != 0) goto L_168; */
        /* goto L_16c; */
        /* L_168:; */
        /* L_16c:; */
        /* cLib_addCalcAngleS((_savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 848), 0, 8, 1024, 256); */
        mDoMtx_ZrotM(base, ((-m350) & 65535));
        MtxPosition();
        /* ((daBigelf_c*)(_savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->setAttentionBasePos(); */
        MtxPosition();
        /* ((daBigelf_c*)(_savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->setEyePos(); */
        /* if (this->field_0x337 == 255) goto L_274; */
        /* field_0x337 = (this->field_0x337 + 1); */
        /* goto L_274; */
        /* L_238:; */
        /* if (/ * beq * / 1) goto L_274; */
        /* if (/ * bne * / 1) goto L_274; */
        MtxPosition();
        /* L_274:; */
        PSMTXCopy(base, ((char*)&mCurrentMtx__6J3DSys + 0));
        PSMTXCopy(base);
        return _restgpr_27(1);
}

/* 00000338-00000384       .text nodeCallBack_Bigelf__FP7J3DNodei */
static BOOL nodeCallBack_Bigelf(J3DNode* i_node, int i_switch) {
    if (i_switch == 0) {
        if (j3dSys.getModel()->getUserArea() != NULL) {
            reinterpret_cast<daBigelf_c*>(j3dSys.getModel()->getUserArea())
                ->nodeCallBack(i_node);
        }
    }
    return TRUE;
}

/* 00000384-00000438       .text lightInit__10daBigelf_cFP4cXyz */
void daBigelf_c::lightInit(cXyz*) {
    mLightInfluence = 0;
    /* field_0x358 = 0; */
    /* field_0x35c = 0; */
    mLightInfluencePos = 0;
    /* field_0x378 = 0; */
    /* field_0x37c = 0; */
    if (mIsLightShining == 0) {
        mIsLightShining = 1;
        /* field_0x360 = 255; */
        /* field_0x362 = 255; */
        /* field_0x364 = 255; */
        /* field_0x368 = 0; */
        /* field_0x36c = 0; */
        mLightInfluencePos = 0;
        /* field_0x378 = 0; */
        /* field_0x37c = 0; */
        mLightInfluenceColor = 255;
        /* field_0x382 = 255; */
        /* field_0x384 = 255; */
        mLightInfluencePower = 0;
        mLightInfluenceFluctuation = 0;
    }
    return dKy_plight_priority_set((this + 852));
}

/* 00000438-00000470       .text lightEnd__10daBigelf_cFv */
void daBigelf_c::lightEnd() {
    if (mIsLightShining != 0) {
        mIsLightShining = 0;
    }
    return dKy_plight_cut((this + 852));
}

/* 00000470-0000047C       .text lightProc__10daBigelf_cFv */
void daBigelf_c::lightProc() {
    if (mIsLightShining != 0) return;
}

/* 0000047C-00000488       .text darkInit__10daBigelf_cFv */
void daBigelf_c::darkInit() {
    mIsDark = 1;
}

/* 00000488-000004D0       .text darkEnd__10daBigelf_cFv */
void daBigelf_c::darkEnd() {
    mIsDark = 0;
    dKy_set_actcol_ratio(C_@4170);
    dKy_set_bgcol_ratio(C_@4170);
    return dKy_set_vrboxcol_ratio(C_@4170);
}

/* 000004D0-00000574       .text darkProc__10daBigelf_cFv */
void daBigelf_c::darkProc() {
    if (mIsDark != 0) {
    }
    /* return dKy_set_vrboxcol_ratio(dKy_set_bgcol_ratio(dKy_set_actcol_ratio(cLib_addCalc2((this + 928), arg1, arg2, arg3)))); */
}

/* 00000574-00000588       .text demoInitFlDelete__10daBigelf_cFv */
void daBigelf_c::demoInitFlDelete() {
    mDemoTimer = 0;
    mAlpha = 0xFF;
}

/* 00000588-00000708       .text demoProcFlDelete__10daBigelf_cFv */
void daBigelf_c::demoProcFlDelete() {
        mDemoTimer = (mDemoTimer + 1);
        /* if (mDemoTimer != 27) goto L_5a4; */
        /* ((dPa_control_c*)(this->field_0x5ab8))->set(0, ((char*)&pa_name_flower2 + 0), (this->field_0x5b40 + 504), 0, 0, 255, 0); */
        m3A4 = 0;
        /* L_5a4:; */
        /* if (mDemoTimer < 27) goto L_678; */
        /* if (this->field_0x3e4 == 0) goto L_610; */
        /* if (mAlpha <= 10) goto L_5e0; */
        mAlpha = (mAlpha + -10);
        /* goto L_678; */
        /* L_5e0:; */
        mAlpha = 0;
        /* field_0x1ff = 0; */
        /* field_0x60 = -1; */
        /* field_0x3e4 = 0; */
        /* goto L_678; */
        /* L_610:; */
        lightEnd();
        ((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->cutEnd(mStaffId);
        /* if ((mStateBits & 2147483647) != 1) goto L_678; */
        mStateBits = (mStateBits & 2147483647);
        /* if ((getType() & 16777215) != 6) goto L_678; */
        /* field_0x5b70 = (this->field_0x5b70 + 32); */
        /* field_0x5b6c = (this->field_0x5b6c + 32); */
        /* L_678:; */
        return 1;
}

/* 00000708-000007E4       .text demoInitFlLink__10daBigelf_cFv */
void daBigelf_c::demoInitFlLink() {
    /* fpoAcM_absolutePos(this->field_0x5b40); */
    /* field_0x3e4 = ((dPa_control_c*)(this->field_0x5ab8))->set(0, ((char*)&l_bck_ix_tbl + 16)); */
    lightInit();
    /* field_0x368 = 0; */
    return demoInitWait();
}

/* 000007E4-00000808       .text demoProcFlLink__10daBigelf_cFv */
void daBigelf_c::demoProcFlLink() {
    demoProcWait();
}

/* 00000808-000008F0       .text demoInitFlDmAf__10daBigelf_cFv */
void daBigelf_c::demoInitFlDmAf() {
    /* field_0x3e0 = ((dPa_control_c*)(this->field_0x5ab8))->set(0, ((char*)&l_bck_ix_tbl + 16)); */
    return ((JAIZelBasic*)(base))->seStart(30803, 0, 0, 0, 0);
}

/* 000008F0-000009C0       .text demoProcFlDmAf__10daBigelf_cFv */
void daBigelf_c::demoProcFlDmAf() {
    if (this->field_0x336 != 0) {
        /* if ((mStateBits & 2147483647) != 1) goto L_8f8; */
    }
    ((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->cutEnd(mStaffId);
    if (this->field_0x3e0 != 0) {
        /* field_0x60 = -1; */
        /* field_0x3e0 = 0; */
    }
    return 1;
    /* L_8f8:; */
    if (this->field_0x68 == base) {
        /* if (this->field_0x68 == base) goto L_930; */
        mStateBits = 0;
    }
    /* L_930:; */
    return 1;
}

/* 000009C0-00000A20       .text demoInitFlDmMd__10daBigelf_cFv */
void daBigelf_c::demoInitFlDmMd() {
    darkInit();
    m3A0 = 0;
    m3A4 = 0;
    return C_@4170;
}

/* 00000A20-00000CEC       .text demoProcFlDmMd__10daBigelf_cFv */
void daBigelf_c::demoProcFlDmMd() {
        /* if ((mStateBits & 2147483647) == 1) goto L_a04; */
        ((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->cutEnd(mStaffId);
        return 1;
        /* L_a04:; */
        /* if (this->field_0x68 < this->field_0x60) goto L_a38; */
        /* if (this->field_0x68 >= this->field_0x58) goto L_a30; */
        /* m3A4 = (this->field_0x64 * (this->field_0x58 - this->field_0x68)); */
        /* goto L_a38; */
        /* L_a30:; */
        m3A4 = 0;
        /* L_a38:; */
        /* if ((mStateBits & 2147483647) == 128) goto L_b24; */
        /* if (this->field_0x68 != this->field_0x58) goto L_b24; */
        mStateBits = (mStateBits & 2147483647);
        lightInit();
        /* field_0x368 = 0; */
        ((JAIZelBasic*)(base))->seStart(27183, (this + 608), 0, dComIfGp_getReverb((this->field_0x20a & 255)), 0);
        /* L_b24:; */
        /* if (((this->field_0x20e << 2) << 2) != 512) goto L_b8c; */
        /* if (this->field_0x68 != this->field_0x70) goto L_b8c; */
        mStateBits = ((this->field_0x20e << 2) << 2);
        ((JAIZelBasic*)(base))->seStart(18731, (this + 608), 0, dComIfGp_getReverb((this->field_0x20a & 255)), 0);
        /* L_b8c:; */
        /* if (((this->field_0x20e << 2) << 2) != 1024) goto L_bf4; */
        /* if (this->field_0x68 != this->field_0x74) goto L_bf4; */
        mStateBits = ((this->field_0x20e << 2) << 2);
        ((JAIZelBasic*)(base))->seStart(18732, (this + 608), 0, dComIfGp_getReverb((this->field_0x20a & 255)), 0);
        /* L_bf4:; */
        /* if (this->field_0x68 != this->field_0x78) goto L_c24; */
        ((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->cutEnd(mStaffId);
        /* L_c24:; */
        /* if (this->field_0x68 != this->field_0x58) goto L_c50; */
        /* if (this->field_0x68 != this->field_0x5c) goto L_c50; */
        /* L_c50:; */
        return 1;
}

/* 00000CEC-00000CF0       .text demoInitFlDmBf__10daBigelf_cFv */
void daBigelf_c::demoInitFlDmBf() {
}

/* 00000CF0-00000D7C       .text demoProcFlDmBf__10daBigelf_cFv */
void daBigelf_c::demoProcFlDmBf() {
    if ((mStateBits & 2147483647) != 1) {
        ((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->cutEnd(mStaffId);
        return 1;
    }
    if (this->field_0x336 == 0) {
        ((daBigelf_c*)(1))->setAnm(2);
        ((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->cutEnd(mStaffId);
    }
    return 1;
}

/* 00000D7C-00000D88       .text demoInitFlDemo__10daBigelf_cFv */
void daBigelf_c::demoInitFlDemo() {
    mAlpha = 0;
}

/* 00000D88-00000FB8       .text demoProcFlDemo__10daBigelf_cFv */
void daBigelf_c::demoProcFlDemo() {
        /* if (this->field_0x336 == 0) goto L_db8; */
        /* if ((mStateBits & 2147483647) != 1) goto L_da4; */
        /* if ((m3BC & 255) == 1) goto L_db8; */
        /* if (/ * bge * / 1) goto L_d6c; */
        /* if ((m3BC & 255) >= 0) goto L_d78; */
        /* goto L_db8; */
        /* L_d6c:; */
        /* if ((m3BC & 255) >= 3) goto L_db8; */
        /* goto L_d84; */
        /* L_d78:; */
        /* setAnm(2, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* goto L_db8; */
        /* L_d84:; */
        mStateBits = (m3BC & 255);
        ((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->cutEnd(mStaffId);
        /* goto L_db8; */
        /* L_da4:; */
        ((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->cutEnd(mStaffId);
        /* L_db8:; */
        /* if (m3BC != 2) goto L_f24; */
        /* if (this->field_0x68 != this->field_0x58) goto L_df8; */
        /* if (this->field_0x68 != this->field_0x5c) goto L_df8; */
        /* L_df8:; */
        /* if (mAlpha == 1) goto L_ee0; */
        /* if (/ * bge * / 1) goto L_f24; */
        /* if (mAlpha >= 0) goto L_e14; */
        /* goto L_f24; */
        /* L_e14:; */
        /* if (this->field_0x68 != this->field_0x7c) goto L_f24; */
        mAlpha = (mAlpha + 1);
        /* field_0x3e0 = ((dPa_control_c*)(this->field_0x5ab8))->set(0, ((char*)&l_bck_ix_tbl + 16)); */
        ((JAIZelBasic*)(base))->seStart(30803, 0, 0, 0, 0);
        /* goto L_f24; */
        /* L_ee0:; */
        /* if ((mStateBits & 2147483647) == 1) goto L_f24; */
        /* if (this->field_0x3e0 == 0) goto L_f24; */
        mAlpha = (((JAIZelBasic*)(base))->seStart(30803, 0, 0, 0, 0) + 1);
        /* field_0x60 = -1; */
        /* field_0x3e0 = 0; */
        /* L_f24:; */
        return 1;
}

/* 00000FB8-0000115C       .text demoInitExit__10daBigelf_cFv */
void daBigelf_c::demoInitExit() {
    /* _savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
    if (this->field_0x3cc != 0) {
        /* field_0x60 = -1; */
        /* field_0x3cc = 0; */
    }
    mDemoTimer = 0;
    mHeightOffset = 0;
    m3EC = 0;
    /* field_0x3f0 = 0; */
    /* ((dPa_control_c*)(this->field_0x5ab8))->set(0, 626); */
    /* field_0x1a0 = 255; */
    /* field_0x19e = 255; */
    /* field_0x19c = 255; */
    /* field_0x1a4 = 0; */
    /* field_0x1a8 = 0; */
    /* ((JAIZelBasic*)(base))->seStart(22859, (_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 608), 0, dComIfGp_getReverb((this->field_0x20a & 255)), 0); */
    /* ((JAIZelBasic*)(base))->seStart(18733, (_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 608), 0, dComIfGp_getReverb((this->field_0x20a & 255)), 0); */
    /* return _restgpr_29(((daBigelf_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->darkEnd()); */
}

/* 0000115C-000012D4       .text demoProcExit__10daBigelf_cFv */
void daBigelf_c::demoProcExit() {
    mDemoTimer = (mDemoTimer + 1);
    /* cLib_addCalc2((this + 424), arg1, arg2, arg3); */
    if (mDemoTimer < 70) {
        cLib_addCalc0((this + 1004));
        cLib_addCalc0((this + 1008));
        return 1;
    }
    if (/* bne */ 1) {
        ((JAIZelBasic*)(base))->seStart(22789, (this + 608), 0, dComIfGp_getReverb((this->field_0x20a & 255)), 0);
        /* if ((getType() & 16777215) == 6) goto L_11c8; */
        ((JAIZelBasic*)(base))->bgmStop(45, 0);
    }
    /* L_11c8:; */
    cLib_addCalc2((this + 1008));
    cLib_addCalc0((this + 1004));
    if (mDemoTimer >= 90) {
        ((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->cutEnd(mStaffId);
        /* if ((getType() & 16777215) != 6) goto L_1240; */
        makeFa1S();
    }
    /* L_1240:; */
    return 1;
}

/* 000012D4-000013C0       .text demoInitTalk__10daBigelf_cFv */
void daBigelf_c::demoInitTalk() {
    talkInit();
    ((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMySubstanceP(mStaffId, ((char*)&@stringBase0 + 0), 3);
    if (/* bne */ 1) {
        ((JUTAssertion*)(((JUTAssertion*)(((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMySubstanceP(mStaffId, ((char*)&@stringBase0 + 0), 3)))->getSDevice()))->showAssert(((char*)&@stringBase0 + 6), 805, ((char*)&@stringBase0 + 21));
        OSPanic(((char*)&@stringBase0 + 6), 805, ((char*)&@stringBase0 + 28));
    }
    if (mCurrentMessageId == 12010) {
        /* field_0x5b50 = 0; */
        /* field_0x5b6c = (this->field_0x5b6c + this->field_0x13); */
    }
    /* return this->field_0x13; */
}

/* 000013C0-00001418       .text demoProcTalk__10daBigelf_cFv */
void daBigelf_c::demoProcTalk() {
    if ((talk() & 65535) != 18) {
        /* if ((talk() & 65535) == 254) goto L_1388; */
    }
    ((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->cutEnd(mStaffId);
    /* L_1388:; */
    return 1;
}

/* 00001418-0000163C       .text demoInitAppear__10daBigelf_cFv */
void daBigelf_c::demoInitAppear() {
    /* _savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
    fopAcIt_Judge(((char*)&fpcSch_JudgeByID__FPvPv + 0));
    if (/* beq */ 1) {
        /* field_0xcc = ((dEvt_control_c*)(((char*)&g_dComIfG_gameInfo + 20952)))->getPId(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* fopAcM_delete(((dEvt_control_c*)(((char*)&g_dComIfG_gameInfo + 20952)))->getPId(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7))); */
    }
    ((dVibration_c*)(((char*)&g_dComIfG_gameInfo + 22944)))->StartShock(5, -33);
    /* ((dPa_control_c*)(this->field_0x5ab8))->set(0, ((char*)&p_name0$4584 + 0)); */
    /* ((dPa_control_c*)(this->field_0x5ab8))->set(0, ((char*)&p_name1$4585 + 0)); */
    /* if ((((daBigelf_c*)(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->getType() & 16777215) == 6) { */
        /* m3CA = 15; */
    mAlpha = 15;
    m3A8 = 0;
    /* if ((((daBigelf_c*)(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->getType() & 16777215) == 6) { */
        /* ((JAIZelBasic*)(base))->seStart(22861, (_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 608), 0, dComIfGp_getReverb((this->field_0x20a & 255)), 0); */
    return _restgpr_28(((JAIZelBasic*)(base))->bgmStart());
}

/* 0000163C-000017B4       .text demoProcAppear__10daBigelf_cFv */
void daBigelf_c::demoProcAppear() {
        /* if (mAlpha == 0) goto L_1678; */
        mAlpha = (mAlpha + -1);
        /* if (mAlpha != 0) goto L_1670; */
        /* setAnm(1, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* if (this->field_0x3cc != 0) goto L_1670; */
        /* field_0x3cc = ((dPa_control_c*)(this->field_0x5ab8))->set(0); */
        /* L_1670:; */
        return 1;
        /* L_1678:; */
        /* if (0 != 256) goto L_16e8; */
        /* if (this->field_0x68 != this->field_0xa8) goto L_16e8; */
        mStateBits = 0;
        ((JAIZelBasic*)(base))->seStart(18730, (this + 608), 0, dComIfGp_getReverb((this->field_0x20a & 255)), 0);
        /* L_16e8:; */
        /* if (this->field_0x336 == 0) goto L_1714; */
        setAnm(0);
        ((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->cutEnd(mStaffId);
        /* L_1714:; */
        /* field_0x218 = 0; */
        /* field_0x21c = 0; */
        return 1;
}

/* 000017B4-00001848       .text demoInitFa1__10daBigelf_cFv */
void daBigelf_c::demoInitFa1() {
    if (fopAcIt_Judge(((char*)&fpcSch_JudgeByID__FPvPv + 0)) != 0) {
        ((daNpc_Fa1_c*)(fopAcIt_Judge(((char*)&fpcSch_JudgeByID__FPvPv + 0))))->init_bigelf_change();
    }
    return ((JAIZelBasic*)(base))->seStart(22858, (this + 608), 0, dComIfGp_getReverb((this->field_0x20a & 255)), 0);
}

/* 00001848-000018D4       .text demoProcFa1__10daBigelf_cFv */
void daBigelf_c::demoProcFa1() {
    if (fopAcIt_Judge(((char*)&fpcSch_JudgeByID__FPvPv + 0)) != 0) {
        cLib_addCalc2((fopAcIt_Judge(((char*)&fpcSch_JudgeByID__FPvPv + 0)) + 508));
    }
    ((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->cutEnd(mStaffId);
    return 1;
}

/* 000018D4-00001948       .text demoInitWait__10daBigelf_cFv */
void daBigelf_c::demoInitWait() {
    /* if (((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMySubstanceP(mStaffId, ((char*)&@stringBase0 + 33), 3, arg4) != 0) { */
    /* } else { */
        /* mDemoTimer = 0; */
    /* } */
    /* return setAnm(0); */

/* 00001948-00001998       .text demoProcWait__10daBigelf_cFv */
void daBigelf_c::demoProcWait() {
    if (mDemoTimer > 0) {
        mDemoTimer = (mDemoTimer + -1);
    } else {
        ((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->cutEnd();
    }
    return 0;
}

/* 00001998-00001A74       .text demoInitCom__10daBigelf_cFv */
void daBigelf_c::demoInitCom() {
        /* if (((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMySubstanceP(mStaffId, ((char*)&@stringBase0 + 39), 3, arg4) == 0) goto L_19e4; */
        /* if (this->field_0x5b48 == 0) goto L_19d8; */
        fpoAcM_absolutePos(this);
        cLib_targetAngleY((this + 504));
        /* L_19d8:; */
        /* L_19e4:; */
        /* return ((daShip_c*)(this->field_0x5b48))->initStartPos(); */
}

/* 00001A74-00001ACC       .text demoProcCom__10daBigelf_cFv */
void daBigelf_c::demoProcCom() {
    if ((getType() & 16777215) != 6) {
        dKy_custom_colset(4, 0);
    }
    lightProc();
    return darkProc();
}

/* 00001ACC-00001B14       .text getNowEventAction__10daBigelf_cFv */
void daBigelf_c::getNowEventAction() {
    return ((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMyActIdx();
}

/* 00001B14-00001CCC       .text demoProc__10daBigelf_cFv */
void daBigelf_c::demoProc() {
    /* ((daBigelf_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->getNowEventAction(); */
    if (((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getIsAddvance(mStaffId) != 0) {
        /* ((daBigelf_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->demoInitCom(); */
        /* if (((daBigelf_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->getNowEventAction() <= 10) goto L_1b84; */
        /* ((daBigelf_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->demoInitWait(); */
        /* goto L_1b84; */
        /* ((daBigelf_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->demoInitFa1(); */
        /* goto L_1b84; */
        /* ((daBigelf_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->demoInitAppear(); */
        /* goto L_1b84; */
        /* ((daBigelf_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->demoInitTalk(); */
        /* goto L_1b84; */
        /* ((daBigelf_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->demoInitExit(); */
        /* goto L_1b84; */
        /* ((daBigelf_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->demoInitFlDemo(); */
        /* goto L_1b84; */
        /* ((daBigelf_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->demoInitFlLink(); */
        /* goto L_1b84; */
        /* ((daBigelf_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->demoInitFlDelete(); */
        /* goto L_1b84; */
        /* ((daBigelf_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->demoInitFlDmBf(); */
        /* goto L_1b84; */
        /* ((daBigelf_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->demoInitFlDmMd(); */
        /* goto L_1b84; */
        /* ((daBigelf_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->demoInitFlDmAf(); */
    }
    /* L_1b84:; */
    /* if (((daBigelf_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->getNowEventAction() <= 10) { */
        /* ((daBigelf_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->demoProcWait(); */
        /* goto L_1c34; */
        /* ((daBigelf_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->demoProcFa1(); */
        /* goto L_1c34; */
        /* ((daBigelf_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->demoProcAppear(); */
        /* goto L_1c34; */
        /* ((daBigelf_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->demoProcTalk(); */
        /* goto L_1c34; */
        /* ((daBigelf_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->demoProcExit(); */
        /* goto L_1c34; */
        /* ((daBigelf_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->demoProcFlDemo(); */
        /* goto L_1c34; */
        /* ((daBigelf_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->demoProcFlLink(); */
        /* goto L_1c34; */
        /* ((daBigelf_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->demoProcFlDelete(); */
        /* goto L_1c34; */
        /* ((daBigelf_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->demoProcFlDmBf(); */
        /* goto L_1c34; */
        /* ((daBigelf_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->demoProcFlDmMd(); */
        /* goto L_1c34; */
        /* ((daBigelf_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->demoProcFlDmAf(); */
    /* } else { */
        /* ((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->cutEnd(mStaffId); */
    /* } */
    /* L_1c34:; */
    /* return _restgpr_29(((daBigelf_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->demoProcCom()); */

/* 00001CCC-00001CD8       .text getType__10daBigelf_cFv */
u8 daBigelf_c::getType() {
    return (u8)base.base.mParameters;
}

/* 00001CD8-00001CE4       .text getSwbit__10daBigelf_cFv */
u8 daBigelf_c::getSwbit() {
    return (u8)(base.base.mParameters >> 8);
}

/* 00001CE4-00001CF0       .text getSwbit2__10daBigelf_cFv */
u8 daBigelf_c::getSwbit2() {
    return (u8)(base.base.mParameters >> 16);
}

/* 00001CF0-00001D70       .text getEventFlag__10daBigelf_cFv */
void daBigelf_c::getEventFlag() {
    if ((getType() & 16777215) <= 6) {
        return 12320;
        return 12304;
        return 12296;
        return 12292;
        return 12290;
        return 12289;
        return 12672;
    }
    return 0;
}

/* 00001D70-00001E20       .text makeFa1S__10daBigelf_cFv */
void daBigelf_c::makeFa1S() {
    /* L_1d50:; */
    fopAcM_create(362, 4);
    /* if ((0 + 1) >= 10) goto L_1d50; */
}

/* 00001E20-00001EB4       .text makeFa1__10daBigelf_cFv */
void daBigelf_c::makeFa1() {
    mpFairyActor = fopAcM_create(362, 6);
    return fopAcM_create(362, 6);
}

/* 00001EB4-0000200C       .text setAnm__10daBigelf_cFSc */
void daBigelf_c::setAnm(signed char) {
        /* if ((char & 255) == 3) goto L_1eb4; */
        /* if (/ * bge * / 1) goto L_1ec0; */
        /* if ((char & 255) >= 1) goto L_1eac; */
        /* goto L_1ec0; */
        /* L_1eac:; */
        /* goto L_1ec0; */
        /* L_1eb4:; */
        /* L_1ec0:; */
        /* if (m3BC == 1) goto L_1ed0; */
        /* goto L_1ed4; */
        /* L_1ed0:; */
        /* L_1ed4:; */
        /* if ((char & 255) == (m3BC & 255)) goto L_1f5c; */
        /* if ((char & 255) == -1) goto L_1f5c; */
        m3BC = char;
        /* field_0x338 = 0; */
        /* field_0x336 = 0; */
        /* L_1f5c:; */
        /* return ((mDoExt_McaMorf*)(mpBckAnimator))->setAnm(((dRes_control_c*)(((char*)&@stringBase0 + 123)))->getRes(((char*)&l_bck_ix_tbl + 0), ((char*)&g_dComIfG_gameInfo + -16460), 64, arg4, arg5), 3, 0); */
}

/* 0000200C-00002030       .text setAnmStatus__10daBigelf_cFv */
void daBigelf_c::setAnmStatus() {
    this->setAnm(0);
}

/* 00002030-000021A4       .text next_msgStatus__10daBigelf_cFPUl */
void daBigelf_c::next_msgStatus(unsigned long*) {
        /* if (/ * bge * / 1) goto L_1ff8; */
        /* if (/ * beq * / 1) goto L_2010; */
        /* if (/ * blt * / 1) goto L_210c; */
        /* if (/ * bge * / 1) goto L_20e8; */
        /* goto L_210c; */
        /* L_1ff8:; */
        /* if (/ * beq * / 1) goto L_2100; */
        /* if (/ * bge * / 1) goto L_210c; */
        /* if (/ * bge * / 1) goto L_20f4; */
        /* goto L_210c; */
        /* L_2010:; */
        base = 0;
        /* if ((getType() & 16777215) >= 4) goto L_203c; */
        /* if ((getType() & 16777215) >= 2) goto L_2074; */
        /* if ((getType() & 16777215) >= 0) goto L_2048; */
        /* goto L_20cc; */
        /* L_203c:; */
        /* if ((getType() & 16777215) >= 6) goto L_20cc; */
        /* goto L_20a0; */
        /* L_2048:; */
        /* if (this->field_0x12 != 0) goto L_2068; */
        mGivenItem = 171;
        /* goto L_20d4; */
        /* L_2068:; */
        mGivenItem = 172;
        /* goto L_20d4; */
        /* L_2074:; */
        /* if (this->field_0x70 > 30) goto L_2094; */
        mGivenItem = 173;
        /* goto L_20d4; */
        /* L_2094:; */
        mGivenItem = 174;
        /* goto L_20d4; */
        /* L_20a0:; */
        /* if (this->field_0x6f > 30) goto L_20c0; */
        mGivenItem = 175;
        /* goto L_20d4; */
        /* L_20c0:; */
        mGivenItem = 176;
        /* goto L_20d4; */
        /* L_20cc:; */
        mGivenItem = 4;
        /* L_20d4:; */
        /* goto L_2110; */
        /* L_20e8:; */
        base = 0;
        /* goto L_2110; */
        /* L_20f4:; */
        base = 0;
        /* goto L_2110; */
        /* L_2100:; */
        base = 12014;
        /* goto L_2110; */
        /* L_210c:; */
        /* L_2110:; */
        return 16;
}

/* 000021A4-000021D4       .text getMsg__10daBigelf_cFv */
void daBigelf_c::getMsg() {
    if (mCurrentMessageId == 12014) {
        /* if (this->field_0x48 == 39) goto L_2154; */
        mCurrentMessageId = 12015;
    }
    /* L_2154:; */
    return mCurrentMessageId;
}

/* 000021D4-000021D8       .text msgPushButton__10daBigelf_cFv */
void daBigelf_c::msgPushButton() {
}

/* 000021D8-000021DC       .text msgAnm__10daBigelf_cFUc */
void daBigelf_c::msgAnm(unsigned char) {
}

/* 000021DC-000021F0       .text talkInit__10daBigelf_cFv */
void daBigelf_c::talkInit() {
    m3F7 = 0;
    m344 = 0xFF;
}

/* 000021F0-0000236C       .text talk__10daBigelf_cFv */
void daBigelf_c::talk() {
        /* if (m3F7 != 0) goto L_21c0; */
        base = -1;
        /* field_0x33c = getMsg(); */
        m3F7 = 1;
        /* goto L_22d8; */
        /* L_21c0:; */
        /* if (/ * beq * / 1) goto L_22d8; */
        /* if (/ * bne * / 1) goto L_21fc; */
        base = fopMsgM_messageSet(this->field_0x33c, this);
        /* goto L_22d8; */
        /* L_21fc:; */
        /* if (mStateBits == 4) goto L_221c; */
        /* ((daBigelf_c*)(fopMsgM_messageSet(this->field_0x33c, this)))->msgAnm(this->field_0x5bcf); */
        /* L_221c:; */
        /* if ((m3F7 & 255) == 2) goto L_2268; */
        /* if (/ * bge * / 1) goto L_22d8; */
        /* if ((m3F7 & 255) >= 1) goto L_223c; */
        /* goto L_22d8; */
        /* L_223c:; */
        base = fopMsgM_SearchByID(base);
        /* if (fopMsgM_SearchByID(base) == 0) goto L_22d8; */
        m3F7 = 2;
        /* goto L_22d8; */
        /* L_2268:; */
        /* if (this->field_0xf8 != 14) goto L_22c0; */
        msgPushButton();
        /* field_0xf8 = next_msgStatus((this + 828)); */
        /* if (this->field_0xf8 != 15) goto L_22d8; */
        /* fopMsgM_messageSet(this->field_0x33c); */
        /* goto L_22d8; */
        /* L_22c0:; */
        /* if (this->field_0xf8 != 18) goto L_22d8; */
        /* field_0xf8 = 19; */
        m3F7 = -1;
        /* L_22d8:; */
        /* return this->field_0xf8; */
}

/* 0000236C-00002534       .text init__10daBigelf_cFv */
void daBigelf_c::init() {
        /* if (this->field_0x3f4 == 0) goto L_2324; */
        /* goto L_23b8; */
        /* L_2324:; */
        /* if (__ptmf_cmpr((this + 944)) == 0) goto L_23b8; */
        /* if (__ptmf_test((this + 944)) == 0) goto L_2384; */
        /* field_0x3f6 = -1; */
        __ptmf_scall(this, 0);
        /* L_2384:; */
        /* field_0x3f6 = 0; */
        __ptmf_scall(this, 0);
        /* L_23b8:; */
        /* field_0x1fc = (this->field_0xbc + this->field_0x1d4); */
        mCurrentPos = 0;
        /* field_0x32c = 0; */
        /* field_0x330 = 0; */
        /* field_0x32c = (this->field_0x32c + this->field_0xb0); */
        mUnkPos = 0;
        /* field_0x320 = 0; */
        /* field_0x324 = 0; */
        eyePos = 0;
        /* field_0x264 = 0; */
        /* field_0x268 = 0; */
        /* field_0x274 = 0; */
        /* field_0x278 = (actor_type + this->field_0x32c); */
        /* field_0x27c = 0; */
        mpFairyActor = -1;
        /* if ((getType() & 16777215) == 6) goto L_2494; */
        /* if (((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->isEventBit(getEventFlag()) == 0) goto L_248c; */
        makeFa1S();
        /* goto L_2494; */
        /* L_248c:; */
        makeFa1();
        /* L_2494:; */
        return 1;
}

/* 00002534-000025A0       .text setAttention__10daBigelf_cFb */
void daBigelf_c::setAttention(bool) {
        /* if (m3CA <= 0) goto L_24d4; */
        m3CA = (m3CA + -1);
        return this;
}

/* 000025A0-000025F4       .text lookBack__10daBigelf_cFv */
void daBigelf_c::lookBack() {
    if (mStateBits != 32) {
        /* field_0x206 = fopAcM_searchActorAngleY(this, this->field_0x5b40); */
    }
    /* return fopAcM_searchActorAngleY(this, this->field_0x5b40); */
}

/* 000025F4-000026C0       .text hunt__10daBigelf_cFv */
void daBigelf_c::hunt() {
    if (fopAcIt_Judge(((char*)&fpcSch_JudgeByID__FPvPv + 0)) == 0) {
        /* field_0x3bd = 3; */
        return 0;
    }
    /* fopAcM_searchActorDistanceXZ(this, this->field_0x5b40); */
    if (/* bge */ 1) {
        /* field_0x3bd = 1; */
        m3C8 = ((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getEventIdx(((char*)&@stringBase0 + 130), 255);
        fopAcM_orderOtherEventId(this, m3C8, 255);
    }
    return 1;
}

/* 000026C0-00002730       .text oct_search__10daBigelf_cFv */
void daBigelf_c::oct_search() {
        /* if (fopAcM_searchFromName(((char*)&@stringBase0 + 145), 0, 0) == 0) goto L_26a0; */
        /* if (/ * beq * / 1) goto L_2688; */
        /* goto L_268c; */
        /* L_2688:; */
        /* L_268c:; */
        m3F8 = -1;
        /* field_0x3bd = 5; */
        m3AC = 10;
        /* L_26a0:; */
        return 1;
}

/* 00002730-000028E8       .text oct__10daBigelf_cFv */
void daBigelf_c::oct() {
        /* if (fopAcIt_Judge(((char*)&fpcSch_JudgeByID__FPvPv + 0)) == 0) goto L_27a4; */
        current = 0;
        /* field_0x1fc = 0; */
        /* field_0x200 = 0; */
        /* field_0x1fc = 0; */
        /* field_0x274 = 0; */
        /* field_0x278 = 0; */
        /* field_0x27c = 0; */
        eyePos = 0;
        /* field_0x264 = 0; */
        /* field_0x268 = 0; */
        /* field_0x206 = (this->field_0x206 + cLib_targetAngleY()); */
        /* goto L_27b0; */
        /* L_27a4:; */
        /* L_27b0:; */
        /* if (((dSv_info_c*)(((char*)&g_dComIfG_gameInfo + 0)))->isSwitch((getSwbit() & 16777215), (this->field_0x20a & 255)) == 0) goto L_2854; */
        /* if (m3AC <= 0) goto L_27f4; */
        m3AC = (m3AC + -1);
        /* goto L_2854; */
        /* L_27f4:; */
        /* field_0x3bd = 1; */
        m3C8 = ((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getEventIdx(((char*)&@stringBase0 + 153), 255);
        fopAcM_orderChangeEventId(this, this->field_0x5b40, m3C8, 0);
        m3AC = 30;
        /* L_2854:; */
        return 1;
}

/* 000028E8-000029A0       .text ready0__10daBigelf_cFv */
void daBigelf_c::ready0() {
    fopAcIt_Judge(((char*)&fpcSch_JudgeByID__FPvPv + 0));
    if (this->field_0xf8 == 2) {
        /* field_0x3bd = 2; */
        mStaffId = ((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMyStaffId(((char*)&@stringBase0 + 169), 0, 0);
        m3A8 = 0;
        demoProc();
    } else {
        fopAcM_orderOtherEventId(this, m3C8, 255);
    }
    return 1;
}

/* 000029A0-00002A78       .text event0__10daBigelf_cFv */
void daBigelf_c::event0() {
    if (((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->endCheck(m3C8) != 0) {
        ((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->onEventBit(getEventFlag());
        /* field_0x3bd = 3; */
        /* if ((getType() & 16777215) == 6) goto L_29e4; */
        /* if ((getSwbit2() & 16777215) != 255) goto L_29e4; */
        ((dSv_info_c*)(((char*)&g_dComIfG_gameInfo + 0)))->onSwitch((getSwbit2() & 16777215), (this->field_0x20a & 255));
    } else {
        demoProc();
    }
    /* L_29e4:; */
    return 1;
}

/* 00002A78-00002A80       .text dead__10daBigelf_cFv */
int daBigelf_c::dead() {
    return 1;
}

/* 00002A80-00002C8C       .text wait_action__10daBigelf_cFPv */
void daBigelf_c::wait_action(void*) {
        /* if (this->field_0x3f6 != 0) goto L_2b08; */
        /* if (((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->isEventBit(getEventFlag()) == 0) goto L_2a58; */
        /* field_0x3bd = 3; */
        /* goto L_2af0; */
        /* L_2a58:; */
        /* if ((getType() & 16777215) != 6) goto L_2ae8; */
        /* if (((dSv_info_c*)(((char*)&g_dComIfG_gameInfo + 0)))->isSwitch((getSwbit() & 16777215), (this->field_0x20a & 255)) == 0) goto L_2adc; */
        /* if ((getSwbit2() & 16777215) == 255) goto L_2ad0; */
        ((dSv_info_c*)(((char*)&g_dComIfG_gameInfo + 0)))->onSwitch((getSwbit2() & 16777215), (this->field_0x20a & 255));
        /* L_2ad0:; */
        /* field_0x3bd = 3; */
        /* goto L_2af0; */
        /* L_2adc:; */
        /* field_0x3bd = 4; */
        /* goto L_2af0; */
        /* L_2ae8:; */
        /* field_0x3bd = 0; */
        /* L_2af0:; */
        setAnmStatus();
        /* field_0x3f6 = (this->field_0x3f6 + 1); */
        /* goto L_2bf8; */
        /* L_2b08:; */
        /* if (/ * beq * / 1) goto L_2bf8; */
        /* if ((this->field_0x3bd & 255) == 3) goto L_2b74; */
        /* if (/ * bge * / 1) goto L_2b40; */
        /* if ((this->field_0x3bd & 255) == 1) goto L_2b5c; */
        /* if (/ * bge * / 1) goto L_2b68; */
        /* if ((this->field_0x3bd & 255) >= 0) goto L_2b50; */
        /* goto L_2b98; */
        /* L_2b40:; */
        /* if ((this->field_0x3bd & 255) == 5) goto L_2b8c; */
        /* if (/ * bge * / 1) goto L_2b98; */
        /* goto L_2b80; */
        /* L_2b50:; */
        /* ((daBigelf_c*)(this->field_0x3f6))->hunt(); */
        /* goto L_2b9c; */
        /* L_2b5c:; */
        /* ((daBigelf_c*)(((daBigelf_c*)(this->field_0x3f6))->hunt()))->ready0(); */
        /* goto L_2b9c; */
        /* L_2b68:; */
        /* ((daBigelf_c*)(((daBigelf_c*)(((daBigelf_c*)(this->field_0x3f6))->hunt()))->ready0()))->event0(); */
        /* goto L_2b9c; */
        /* L_2b74:; */
        /* ((daBigelf_c*)(((daBigelf_c*)(((daBigelf_c*)(((daBigelf_c*)(this->field_0x3f6))->hunt()))->ready0()))->event0()))->dead(); */
        /* goto L_2b9c; */
        /* L_2b80:; */
        /* ((daBigelf_c*)(((daBigelf_c*)(((daBigelf_c*)(((daBigelf_c*)(((daBigelf_c*)(this->field_0x3f6))->hunt()))->ready0()))->event0()))->dead()))->oct_search(); */
        /* goto L_2b9c; */
        /* L_2b8c:; */
        /* ((daBigelf_c*)(((daBigelf_c*)(((daBigelf_c*)(((daBigelf_c*)(((daBigelf_c*)(((daBigelf_c*)(this->field_0x3f6))->hunt()))->ready0()))->event0()))->dead()))->oct_search()))->oct(); */
        /* goto L_2b9c; */
        /* L_2b98:; */
        /* L_2b9c:; */
        lookBack();
        setAttention(0);
        /* if (mStateBits != 2) goto L_2bf0; */
        /* field_0x274 = 0; */
        /* field_0x278 = 0; */
        /* field_0x27c = 0; */
        eyePos = 0;
        /* field_0x264 = 0; */
        /* field_0x268 = 0; */
        /* L_2bf0:; */
        oct_delete();
        /* L_2bf8:; */
        return 1;
}

/* 00002C8C-00002DB4       .text _draw__10daBigelf_cFv */
BOOL daBigelf_c::_draw() {
    /* _savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
    if (/* bne */ 1) {
        return 0;
    }
    if (/* beq */ 1) {
        /* ((dScnKy_env_light_c*)(((char*)&g_env_light + 0)))->settingTevStruct(0, (_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 504), (_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 268)); */
    }
    /* ((dScnKy_env_light_c*)(((char*)&g_env_light + 0)))->setLightTevColorType(this->field_0x50, (_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 268)); */
    /* ((dScnKy_env_light_c*)(((char*)&g_env_light + 0)))->setLightTevColorType(mpFlowerModel, (_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 268)); */
    /* ((mDoExt_brkAnm*)((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 668)))->entry(this->field_0x4); */
    /* ((mDoExt_btkAnm*)((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 692)))->entry(this->field_0x4); */
    ((mDoExt_McaMorf*)(mpBckAnimator))->entry();
    if (mStateBits == 8) {
        /* ((mDoExt_brkAnm*)((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 716)))->entry(this->field_0x4); */
        PSMTXCopy((this->field_0x8c + ((mHandRBJointIndex & 255) * 48)), (mpFlowerModel + 36));
        mDoExt_modelUpdateDL(mpFlowerModel);
    }
    return _restgpr_28(1);
}

/* 00002DB4-00002F5C       .text _execute__10daBigelf_cFv */
BOOL daBigelf_c::_execute() {
        ((dNpc_JntCtrl_c*)((this + 744)))->setParam(0, 0, 0, 0, 4000, 9000, -2000);
        /* if (mStateBits == 16) goto L_2de4; */
        /* field_0x336 = ((mDoExt_McaMorf*)(mpBckAnimator))->play((this + 608), 0, 0); */
        /* if (this->field_0x68 >= this->field_0x338) goto L_2dd8; */
        /* if (m3BC == 3) goto L_2dd8; */
        /* field_0x336 = 1; */
        /* L_2dd8:; */
        /* field_0x338 = 0; */
        /* L_2de4:; */
        __ptmf_scall(this, 0);
        PSMTXTrans(((char*)&now__14mDoMtx_stack_c + 0));
        /* mDoMtx_YrotM(((char*)&now__14mDoMtx_stack_c + 0), this->field_0x206); */
        /* field_0x18 = 0; */
        /* field_0x1c = 0; */
        /* field_0x20 = 0; */
        /* if (mStateBits != 16) goto L_2ea8; */
        ((mDoMtx_stack_c*)(((mDoMtx_stack_c*)(C_@4062))->transM()))->scaleM();
        ((mDoMtx_stack_c*)(C_@4062))->transM();
        /* L_2ea8:; */
        PSMTXCopy(((char*)&now__14mDoMtx_stack_c + 0), (this->field_0x50 + 36));
        ((mDoExt_McaMorf*)(mpBckAnimator))->calc();
        ((mDoExt_baseAnm*)((this + 692)))->play();
        return 1;
}

/* 00002F5C-00002FAC       .text _delete__10daBigelf_cFv */
BOOL daBigelf_c::_delete() {
    /* dComIfG_resDelete((this + 656), ((char*)&@stringBase0 + 123), arg2); */
    if (mpBckAnimator != 0) {
        ((mDoExt_McaMorf*)(mpBckAnimator))->stopZelAnime();
    }
    return 1;
}

/* 00002FAC-00002FCC       .text CheckCreateHeap__FP10fopAc_ac_c */
static BOOL CheckCreateHeap(fopAc_ac_c* i_this) {
    ((daBigelf_c*)i_this)->CreateHeap();
    return TRUE;
}

/* 00002FCC-00003124       .text _create__10daBigelf_cFv */
cPhs_State daBigelf_c::_create() {
        /* if (/ * bne * / 1) goto L_2fec; */
        /* if (this == 0) goto L_2fe0; */
        __ct();
        mBrkAnimator = 0;
        /* field_0x2a0 = 0; */
        mBrkAnimator = 0;
        /* field_0x2a8 = 0; */
        /* field_0x2ac = 0; */
        mBtkAnimator = 0;
        /* field_0x2b8 = 0; */
        mBtkAnimator = 0;
        /* field_0x2c0 = 0; */
        mFlowerBrkAnimator = 0;
        /* field_0x2d0 = 0; */
        mFlowerBrkAnimator = 0;
        /* field_0x2d8 = 0; */
        /* field_0x2dc = 0; */
        /* field_0x2f4 = 0; */
        /* field_0x2f3 = 0; */
        /* L_2fe0:; */
        /* L_2fec:; */
        /* if (dComIfG_resLoad((this + 656), ((char*)&@stringBase0 + 123), 0) != 4) goto L_3090; */
        /* if (this->field_0x8 == 371) goto L_301c; */
        /* goto L_3028; */
        /* L_301c:; */
        /* field_0x3f4 = 0; */
        /* goto L_3030; */
        /* L_3028:; */
        return 5;
        /* L_3030:; */
        /* if (fopAcM_entrySolidHeap(this, ((char*)&CheckCreateHeap__FP10fopAc_ac_c + 0)) != 0) goto L_3060; */
        mpBckAnimator = 0;
        return 5;
        /* L_3060:; */
        cullMtx = (this->field_0x50 + 36);
        /* if (init() != 0) goto L_3090; */
        mpBckAnimator = 0;
        return 5;
        /* L_3090:; */
        return dComIfG_resLoad((this + 656), ((char*)&@stringBase0 + 123), 0);
}

/* 00003224-00003808       .text CreateHeap__10daBigelf_cFv */
void daBigelf_c::CreateHeap() {
        /* _savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        ((dRes_control_c*)(((char*)&@stringBase0 + 123)))->getRes(11);
        /* if (/ * bne * / 1) goto L_3238; */
        ((JUTAssertion*)(((JUTAssertion*)(((dRes_control_c*)(((char*)&@stringBase0 + 123)))->getRes(11)))->getSDevice()))->showAssert(((char*)&@stringBase0 + 6), 2004, ((char*)&@stringBase0 + 176));
        OSPanic(((char*)&@stringBase0 + 6), 2004, ((char*)&@stringBase0 + 28));
        /* L_3238:; */
        __nw(180);
        /* if (/ * beq * / 1) goto L_32bc; */
        /* L_32bc:; */
        mpBckAnimator = __ct(((dRes_control_c*)(((char*)&@stringBase0 + 123)))->getRes(8), 1);
        /* if (mpBckAnimator == 0) goto L_32d8; */
        /* if (this->field_0x50 != 0) goto L_32e0; */
        /* L_32d8:; */
        return 0;
        /* L_32e0:; */
        ((dRes_control_c*)(((char*)&@stringBase0 + 123)))->getRes(15);
        /* if (((mDoExt_brkAnm*)((_savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 668)))->init() != 0) goto L_333c; */
        return 0;
        /* L_333c:; */
        ((dRes_control_c*)(((char*)&@stringBase0 + 123)))->getRes(19);
        /* if (((mDoExt_btkAnm*)((_savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 692)))->init() != 0) goto L_3398; */
        return 0;
        /* L_3398:; */
        __nw(24);
        /* if (/ * beq * / 1) goto L_33b0; */
        /* L_33b0:; */
        /* if (__ct() != 0) goto L_33c0; */
        return 0;
        /* L_33c0:; */
        /* if (((J3DModel*)(this->field_0x50))->setSkinDeform(__ct(), 1) == 4) goto L_33e8; */
        /* if (/ * bge * / 1) goto L_33f0; */
        /* if (((J3DModel*)(this->field_0x50))->setSkinDeform(__ct(), 1) == 0) goto L_3428; */
        /* goto L_33f0; */
        /* L_33e8:; */
        return 0;
        /* L_33f0:; */
        ((JUTAssertion*)(((JUTAssertion*)(0))->getSDevice()))->showAssert(((char*)&@stringBase0 + 6), 2065, ((char*)&@stringBase0 + 186));
        OSPanic(((char*)&@stringBase0 + 6), 2065, ((char*)&@stringBase0 + 28));
        /* L_3428:; */
        PSMTXTrans(((char*)&now__14mDoMtx_stack_c + 0));
        /* mDoMtx_YrotM(((char*)&now__14mDoMtx_stack_c + 0), this->field_0x206); */
        PSMTXCopy(((char*)&now__14mDoMtx_stack_c + 0), (this->field_0x50 + 36));
        ((mDoExt_McaMorf*)(mpBckAnimator))->calc();
        /* mHeadJointIndex = ((JUTNameTab*)(this->field_0x54))->getIndex(((char*)&@stringBase0 + 188)); */
        /* if (mHeadJointIndex != 0) goto L_34cc; */
        /* ((JUTAssertion*)(((JUTAssertion*)(((JUTNameTab*)(this->field_0x54))->getIndex(((char*)&@stringBase0 + 188))))->getSDevice()))->showAssert(((char*)&@stringBase0 + 6), 2084, ((char*)&@stringBase0 + 193)); */
        OSPanic(((char*)&@stringBase0 + 6), 2084, ((char*)&@stringBase0 + 28));
        /* L_34cc:; */
        /* mBackboneJointIndex = ((JUTNameTab*)(this->field_0x54))->getIndex(((char*)&@stringBase0 + 220)); */
        /* if (mBackboneJointIndex != 0) goto L_3528; */
        /* ((JUTAssertion*)(((JUTAssertion*)(((JUTNameTab*)(this->field_0x54))->getIndex(((char*)&@stringBase0 + 220))))->getSDevice()))->showAssert(((char*)&@stringBase0 + 6), 2089, ((char*)&@stringBase0 + 229)); */
        OSPanic(((char*)&@stringBase0 + 6), 2089, ((char*)&@stringBase0 + 28));
        /* L_3528:; */
        /* mHandRBJointIndex = ((JUTNameTab*)(this->field_0x54))->getIndex(((char*)&@stringBase0 + 260)); */
        /* if (mHandRBJointIndex != 0) goto L_3584; */
        /* ((JUTAssertion*)(((JUTAssertion*)(((JUTNameTab*)(this->field_0x54))->getIndex(((char*)&@stringBase0 + 260))))->getSDevice()))->showAssert(((char*)&@stringBase0 + 6), 2093, ((char*)&@stringBase0 + 267)); */
        OSPanic(((char*)&@stringBase0 + 6), 2093, ((char*)&@stringBase0 + 28));
        /* L_3584:; */
        /* goto L_35e8; */
        /* L_358c:; */
        /* if ((0 & 65535) == (mHeadJointIndex & 255)) goto L_35c0; */
        /* if ((0 & 65535) == (mBackboneJointIndex & 255)) goto L_35c0; */
        /* if ((0 & 65535) != (mHandRBJointIndex & 255)) goto L_35e4; */
        /* L_35c0:; */
        /* field_0x8 = 0; */
        /* L_35e4:; */
        /* L_35e8:; */
        /* if (((0 + 1) & 65535) < this->field_0x28) goto L_358c; */
        /* field_0x14 = _savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        ((dRes_control_c*)(((char*)&@stringBase0 + 123)))->getRes(12);
        /* if (/ * bne * / 1) goto L_3660; */
        ((JUTAssertion*)(((JUTAssertion*)(((dRes_control_c*)(((char*)&@stringBase0 + 123)))->getRes(12)))->getSDevice()))->showAssert(((char*)&@stringBase0 + 6), 2114, ((char*)&@stringBase0 + 281));
        OSPanic(((char*)&@stringBase0 + 6), 2114, ((char*)&@stringBase0 + 28));
        /* L_3660:; */
        /* mpFlowerModel = mDoExt_J3DModel(this->field_0x50); */
        /* if (mpFlowerModel != 0) goto L_3688; */
        return 0;
        /* L_3688:; */
        /* if (((mDoExt_brkAnm*)((_savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 716)))->init(this->field_0x50, ((dRes_control_c*)(((char*)&@stringBase0 + 123)))->getRes(16), 1, 0, 0, -1, 0) != 0) goto L_36e4; */
        return 0;
        /* L_36e4:; */
        /* field_0x3f5 = 0; */
        /* if ((((daBigelf_c*)(_savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->getType() & 16777215) == 6) goto L_3758; */
        /* if (/ * bge * / 1) goto L_3774; */
        /* if ((((daBigelf_c*)(_savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->getType() & 16777215) >= 4) goto L_3738; */
        /* if ((((daBigelf_c*)(_savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->getType() & 16777215) >= 2) goto L_3718; */
        /* goto L_3774; */
        /* L_3718:; */
        /* field_0x10 = 0; */
        /* field_0x10 = 0; */
        /* field_0x3f5 = 1; */
        /* goto L_3774; */
        /* L_3738:; */
        /* field_0x10 = 0; */
        /* field_0x10 = 0; */
        /* field_0x3f5 = 2; */
        /* goto L_3774; */
        /* L_3758:; */
        /* field_0x10 = 0; */
        /* field_0x10 = 0; */
        /* field_0x3f5 = 3; */
        /* L_3774:; */
        return _restgpr_27(1);
}

/* 00003808-00003828       .text daBigelf_Create__FP10fopAc_ac_c */
static cPhs_State daBigelf_Create(fopAc_ac_c* i_this) {
    return ((daBigelf_c*)i_this)->_create();
}

/* 00003828-00003848       .text daBigelf_Delete__FP10daBigelf_c */
static BOOL daBigelf_Delete(daBigelf_c* i_this) {
    return ((daBigelf_c*)i_this)->_delete();
}

/* 00003848-00003868       .text daBigelf_Execute__FP10daBigelf_c */
static BOOL daBigelf_Execute(daBigelf_c* i_this) {
    return ((daBigelf_c*)i_this)->_execute();
}

/* 00003868-00003888       .text daBigelf_Draw__FP10daBigelf_c */
static BOOL daBigelf_Draw(daBigelf_c* i_this) {
    return ((daBigelf_c*)i_this)->_draw();

/* 00003888-00003890       .text daBigelf_IsDelete__FP10daBigelf_c */
static BOOL daBigelf_IsDelete(daBigelf_c*) {
    return 1;

static actor_method_class l_daBigelf_Method = {
    (process_method_func)daBigelf_Create,
    (process_method_func)daBigelf_Delete,
    (process_method_func)daBigelf_Execute,
    (process_method_func)daBigelf_IsDelete,
    (process_method_func)daBigelf_Draw,
};

actor_process_profile_definition g_profile_BIGELF = {
    /* Layer ID     */ fpcLy_CURRENT_e,
    /* List ID      */ 0x0007,
    /* List Prio    */ fpcPi_CURRENT_e,
    /* Proc Name    */ fpcNm_BIGELF_e,
    /* Proc SubMtd  */ &g_fpcLf_Method.base,
    /* Size         */ sizeof(daBigelf_c),
    /* Size Other   */ 0,
    /* Parameters   */ 0,
    /* Leaf SubMtd  */ &g_fopAc_Method.base,
    /* Draw Prio    */ fpcDwPi_BIGELF_e,
    /* Actor SubMtd */ &l_daBigelf_Method,
    /* Status       */ fopAcStts_UNK40000_e,
    /* Group        */ fopAc_ACTOR_e,
    /* Cull Type    */ fopAc_CULLBOX_12_e,
};

/* 由 fix_decomp_braces.py 补齐：反编译产物末尾缺 4 个 } */
}}}}
