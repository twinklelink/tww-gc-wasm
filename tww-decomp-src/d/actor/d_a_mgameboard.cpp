/**
 * d_a_mgameboard.cpp
 * Squid-Hunt/"Sploosh Kaboom" Minigame
 */

#include "d/dolzel_rel.h" // IWYU pragma: keep
#include "d/actor/d_a_mgameboard.h"

/* 000000EC-0000010C       .text CheckCreateHeap__FP10fopAc_ac_c */
static BOOL CheckCreateHeap(fopAc_ac_c* i_this) {
    ((daMgBoard_c*)i_this)->CreateHeap();
    return TRUE;
}

/* 0000010C-000007BC       .text CreateHeap__11daMgBoard_cFv */
void daMgBoard_c::CreateHeap() {
    /* _savegpr_24(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
    ((dRes_control_c*)(((char*)&m_arcname__11daMgBoard_c + 0)))->getRes(8);
    if (/* bne */ 1) {
        ((JUTAssertion*)(((JUTAssertion*)(((dRes_control_c*)(((char*)&m_arcname__11daMgBoard_c + 0)))->getRes(8)))->getSDevice()))->showAssert(((char*)&@stringBase0 + 0), 301, ((char*)&@stringBase0 + 19));
    }
    mpBoardModel = mDoExt_J3DModel(OSPanic(((char*)&@stringBase0 + 0), 301, ((char*)&@stringBase0 + 34)));
    if (mpBoardModel == 0) {
        return 0;
    }
    ((dRes_control_c*)(((char*)&m_arcname__11daMgBoard_c + 0)))->getRes(9);
    if (/* bne */ 1) {
        ((JUTAssertion*)(((JUTAssertion*)(((dRes_control_c*)(((char*)&m_arcname__11daMgBoard_c + 0)))->getRes(9)))->getSDevice()))->showAssert(((char*)&@stringBase0 + 0), 317, ((char*)&@stringBase0 + 19));
    }
    mpCursorModel = mDoExt_J3DModel(OSPanic(((char*)&@stringBase0 + 0), 317, ((char*)&@stringBase0 + 34)));
    if (mpCursorModel == 0) {
        return 0;
    }
    ((dRes_control_c*)(((char*)&m_arcname__11daMgBoard_c + 0)))->getRes(7);
    if (/* bne */ 1) {
        ((JUTAssertion*)(((JUTAssertion*)(((dRes_control_c*)(((char*)&m_arcname__11daMgBoard_c + 0)))->getRes(7)))->getSDevice()))->showAssert(((char*)&@stringBase0 + 0), 333, ((char*)&@stringBase0 + 19));
    }
    /* L_19c:; */
    mDoExt_J3DModel(OSPanic(((char*)&@stringBase0 + 0), 333, ((char*)&@stringBase0 + 34)));
    if ((0 + 672) == 0) {
        return 0;
    }
    /* if ((0 + 1) >= 20) goto L_19c; */
    ((dRes_control_c*)(((char*)&m_arcname__11daMgBoard_c + 0)))->getRes(10);
    if (/* bne */ 1) {
        ((JUTAssertion*)(((JUTAssertion*)(((dRes_control_c*)(((char*)&m_arcname__11daMgBoard_c + 0)))->getRes(10)))->getSDevice()))->showAssert(((char*)&@stringBase0 + 0), 351, ((char*)&@stringBase0 + 19));
    }
    /* L_234:; */
    mDoExt_J3DModel(OSPanic(((char*)&@stringBase0 + 0), 351, ((char*)&@stringBase0 + 34)));
    if ((0 + 752) == 0) {
        return 0;
    }
    /* if ((0 + 1) >= 32) goto L_234; */
    ((dRes_control_c*)(((char*)&m_arcname__11daMgBoard_c + 0)))->getRes(4);
    if (/* bne */ 1) {
        ((JUTAssertion*)(((JUTAssertion*)(((dRes_control_c*)(((char*)&m_arcname__11daMgBoard_c + 0)))->getRes(4)))->getSDevice()))->showAssert(((char*)&@stringBase0 + 0), 369, ((char*)&@stringBase0 + 19));
    }
    /* L_2cc:; */
    mDoExt_J3DModel(OSPanic(((char*)&@stringBase0 + 0), 369, ((char*)&@stringBase0 + 34)));
    if ((0 + 880) == 0) {
        return 0;
    }
    /* if ((0 + 1) >= 2) goto L_2cc; */
    ((dRes_control_c*)(((char*)&m_arcname__11daMgBoard_c + 0)))->getRes(5);
    if (/* bne */ 1) {
        ((JUTAssertion*)(((JUTAssertion*)(((dRes_control_c*)(((char*)&m_arcname__11daMgBoard_c + 0)))->getRes(5)))->getSDevice()))->showAssert(((char*)&@stringBase0 + 0), 387, ((char*)&@stringBase0 + 19));
    }
    /* L_364:; */
    mDoExt_J3DModel(OSPanic(((char*)&@stringBase0 + 0), 387, ((char*)&@stringBase0 + 34)));
    if ((0 + 888) == 0) {
        return 0;
    }
    /* if ((0 + 1) >= 2) goto L_364; */
    ((dRes_control_c*)(((char*)&m_arcname__11daMgBoard_c + 0)))->getRes(6);
    if (/* bne */ 1) {
        ((JUTAssertion*)(((JUTAssertion*)(((dRes_control_c*)(((char*)&m_arcname__11daMgBoard_c + 0)))->getRes(6)))->getSDevice()))->showAssert(((char*)&@stringBase0 + 0), 405, ((char*)&@stringBase0 + 19));
    }
    /* L_3fc:; */
    mDoExt_J3DModel(OSPanic(((char*)&@stringBase0 + 0), 405, ((char*)&@stringBase0 + 34)));
    if ((0 + 896) == 0) {
        return 0;
    }
    /* if ((0 + 1) >= 2) goto L_3fc; */
    __nw(68);
    if (/* beq */ 1) {
    }
    mpNumber0 = __ct();
    if (mpNumber0 == 0) {
        return 0;
    }
    ((dDlst_2DNumber_c*)(0))->init(4, 470, 75, 24, 24, 0);
    __nw(68);
    if (/* beq */ 1) {
    }
    mpNumber1 = __ct();
    if (mpNumber1 == 0) {
        return 0;
    }
    ((dDlst_2DNumber_c*)(0))->init(4, 100, 80, 24, 24, 0);
    /* L_4e0:; */
    if (__nw(44) != 0) {
        base = 0;
        base = 0;
    }
    /* if (((char*)&__vt__16dDlst_2DObject_c + 0) == 0) { */
        /* return 0; */
    ((dRes_control_c*)(((char*)&m_arcname__11daMgBoard_c + 0)))->getRes(17);
    ((dDlst_2DObject_c*)(((dRes_control_c*)(((char*)&m_arcname__11daMgBoard_c + 0)))->getRes(19)))->init(((dRes_control_c*)(((char*)&m_arcname__11daMgBoard_c + 0)))->getRes(19), ((dRes_control_c*)(((char*)&m_arcname__11daMgBoard_c + 0)))->getRes(17));
    /* if ((0 + 1) >= 3) goto L_4e0; */
    /* L_580:; */
    /* L_584:; */
    if (__nw(44) != 0) {
        base = 0;
        base = 0;
    }
    /* if (((char*)&__vt__16dDlst_2DObject_c + 0) == 0) { */
        /* return 0; */
    ((dRes_control_c*)(((char*)&m_arcname__11daMgBoard_c + 0)))->getRes(16);
    ((dDlst_2DObject_c*)(((dRes_control_c*)(((char*)&m_arcname__11daMgBoard_c + 0)))->getRes(15)))->init(((dRes_control_c*)(((char*)&m_arcname__11daMgBoard_c + 0)))->getRes(15), ((dRes_control_c*)(((char*)&m_arcname__11daMgBoard_c + 0)))->getRes(16));
    /* if ((0 + 1) >= 8) goto L_584; */
    /* if ((0 + 1) >= 3) goto L_580; */
    if (__nw(48) != 0) {
        base = 0;
        base = 0;
    }
    mpMinigameDList = __nw(48);
    if (mpMinigameDList == 0) {
        return 0;
    }
    ((dRes_control_c*)(((char*)&m_arcname__11daMgBoard_c + 0)))->getRes(18);
    ((dDlst_2DMinigame_c*)(mpMinigameDList))->init(((dRes_control_c*)(((char*)&m_arcname__11daMgBoard_c + 0)))->getRes(14), ((dRes_control_c*)(((char*)&m_arcname__11daMgBoard_c + 0)))->getRes(18));
    /* ((daMgBoard_c*)(_savegpr_24(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->set_2dposition(); */
    return _restgpr_24(1);
}

/* 00000804-00000904       .text set_2dposition__11daMgBoard_cFv */
void daMgBoard_c::set_2dposition() {
    /* field_0xc = 0; */
    /* field_0x10 = 0; */
    /* L_76c:; */
    /* field_0xc = 0; */
    /* field_0x10 = 0; */
    /* if ((0 + 1) >= 3) goto L_76c; */
    /* field_0x10 = 0; */
    /* field_0x14 = 0; */
    /* field_0x20 = 0; */
    /* field_0x24 = 0; */
    /* field_0xac = 255; */
    /* field_0xac = 255; */
    /* return this->field_0xc; */
}

/* 00000904-000009E0       .text CreateInit__11daMgBoard_cFv */
void daMgBoard_c::CreateInit() {
    /* _savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
    cullMtx = (mpBoardModel + 36);
    /* fopAcM_setCullSizeBox(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7), mpBoardModel); */
    mState = 0;
    mMinigameStartIdx = ((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getEventIdx(((char*)&@stringBase0 + 39), 255);
    mMinigameEndIdx = ((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getEventIdx(((char*)&@stringBase0 + 54), 255);
    /* ((STControl*)((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1420)))->setWaitParm(5, 2, 3, 2, 0, 2048); */
    /* return _restgpr_29(((daMgBoard_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->MiniGameInit()); */
}

/* 000009E0-00000AE8       .text MiniGameInit__11daMgBoard_cFv */
void daMgBoard_c::MiniGameInit() {
    mBoardPosY = 0;
    mBoardPosX = 0;
    mLastFirePosY = -100;
    mLastFirePosX = -100;
    /* field_0x478 = 0; */
    /* field_0x474 = 0; */
    /* ((dSeaFightGame_info_c*)((this + 1148)))->init(base, 3, arg3, arg4, arg5, arg6, arg7); */
    if (fopAcIt_Judge(((char*)&fpcSch_JudgeForPName__FPvPv + 0)) != 0) {
        mNPCPos = 0;
        /* field_0x5b8 = 0; */
        /* field_0x5bc = 0; */
    }
    set_mtx();
    /* field_0x28 = 0; */
    /* L_9b0:; */
    /* field_0x28 = 0; */
    /* if ((0 + 1) >= 3) goto L_9b0; */
    return (0 + 8);
}

/* 00000AE8-00000DEC       .text set_mtx__11daMgBoard_cFv */
void daMgBoard_c::set_mtx() {
        /* _savegpr_25(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        PSMTXTrans(((char*)&now__14mDoMtx_stack_c + 0));
        /* mDoMtx_YrotM(((char*)&now__14mDoMtx_stack_c + 0), this->field_0x206); */
        PSMTXCopy(((char*)&now__14mDoMtx_stack_c + 0), (mpBoardModel + 36));
        PSMTXTrans(((char*)&now__14mDoMtx_stack_c + 0), ((((char*)&m_cur_table__11daMgBoard_c + 0) + ((mBoardPosY & 255) * 96)) + ((mBoardPosX & 255) * 12)), ((mBoardPosX & 255) * 12), ((mBoardPosY & 255) * 96));
        /* mDoMtx_YrotM(((char*)&now__14mDoMtx_stack_c + 0), this->field_0x206); */
        PSMTXCopy(((char*)&now__14mDoMtx_stack_c + 0), (mpCursorModel + 36));
        mMissModelCount = 0;
        mHitModelCount = 0;
        /* goto L_bcc; */
        /* L_ae8:; */
        /* goto L_bbc; */
        /* L_b04:; */
        /* if (((0 & 16777215) + 1148) != 3) goto L_b38; */
        mHitModelCount = (mHitModelCount + 1);
        /* goto L_b58; */
        /* L_b38:; */
        /* if ((mHitModelCount + 1) != 1) goto L_b58; */
        mMissModelCount = (mMissModelCount + 1);
        /* L_b58:; */
        /* if (0 == 0) goto L_bb8; */
        PSMTXTrans(((char*)&now__14mDoMtx_stack_c + 0), ((((char*)&m_cur_table__11daMgBoard_c + 0) + ((0 & 16777215) * 12)) + ((0 & 16777215) * 96)), (0 & 16777215));
        /* mDoMtx_YrotM(((char*)&now__14mDoMtx_stack_c + 0), this->field_0x206); */
        PSMTXCopy(((char*)&now__14mDoMtx_stack_c + 0), (0 + 36));
        /* L_bb8:; */
        /* L_bbc:; */
        /* if (((0 + 1) & 16777215) < 8) goto L_b04; */
        /* L_bcc:; */
        /* if (((0 + 1) & 16777215) < 8) goto L_ae8; */
        /* goto L_ce0; */
        /* L_be8:; */
        /* if (this->field_0x4c4 == 3) goto L_c1c; */
        /* if (/ * bge * / 1) goto L_c08; */
        /* if (this->field_0x4c4 >= 2) goto L_c14; */
        /* goto L_c2c; */
        /* L_c08:; */
        /* if (this->field_0x4c4 >= 5) goto L_c2c; */
        /* goto L_c24; */
        /* L_c14:; */
        /* goto L_c30; */
        /* L_c1c:; */
        /* goto L_c30; */
        /* L_c24:; */
        /* goto L_c30; */
        /* L_c2c:; */
        /* L_c30:; */
        /* if (0 == 0) goto L_cd8; */
        /* PSMTXTrans(((char*)&now__14mDoMtx_stack_c + 0), ((((char*)&m_cur_table__11daMgBoard_c + 0) + (this->field_0x4c8 * 96)) + (this->field_0x4c7 * 12)), this->field_0x4c7); */
        /* mDoMtx_YrotM(((char*)&now__14mDoMtx_stack_c + 0), this->field_0x206); */
        /* if (this->field_0x4ca != 0) goto L_cb8; */
        mDoMtx_ZrotM(((char*)&now__14mDoMtx_stack_c + 0), 16384);
        /* goto L_cc8; */
        /* L_cb8:; */
        mDoMtx_ZrotM(((char*)&now__14mDoMtx_stack_c + 0), -32768);
        /* L_cc8:; */
        PSMTXCopy(((char*)&now__14mDoMtx_stack_c + 0), (0 + 36));
        /* L_cd8:; */
        /* L_ce0:; */
        /* if ((0 + 1) < this->field_0x4f8) goto L_be8; */
        return _restgpr_25(PSMTXCopy(((char*)&now__14mDoMtx_stack_c + 0), (0 + 36)));
}

/* 00000E28-00000FD8       .text _execute__11daMgBoard_cFv */
bool daMgBoard_c::_execute() {
        /* field_0x3c = (((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->getEventReg((arg1 + -16641)) & 16777215); */
        set_2dposition();
        /* if (mbForceEnd == 0) goto L_da8; */
        execEndGame();
        mbEndGame = 0;
        mbForceEnd = 0;
        /* L_da8:; */
        /* if (mState == 2) goto L_e04; */
        /* if (/ * bge * / 1) goto L_dc8; */
        /* if (mState == 0) goto L_dd8; */
        /* if (/ * bge * / 1) goto L_dec; */
        /* goto L_ed4; */
        /* L_dc8:; */
        /* if (mState == 4) goto L_e34; */
        /* if (/ * bge * / 1) goto L_ed4; */
        /* goto L_e0c; */
        /* L_dd8:; */
        mState = 1;
        mbStartGame = 0;
        /* goto L_ed4; */
        /* L_dec:; */
        /* if (mbStartGame == 0) goto L_ed4; */
        mState = 2;
        /* goto L_ed4; */
        /* L_e04:; */
        mState = 3;
        /* L_e0c:; */
        execGameMain();
        /* if (mbEndGame == 0) goto L_ed4; */
        mTimer = 30;
        mState = 4;
        /* goto L_ed4; */
        /* L_e34:; */
        /* if (cLib_calcTimer<Uc>__FPUc((this + 1600)) != 0) goto L_ed4; */
        mState = 0;
        /* if (this->field_0x4f8 == 0) goto L_e98; */
        ((JAIZelBasic*)(base))->seStart(2220, (this + 1460), 0, 0, 0);
        /* goto L_ed4; */
        /* L_e98:; */
        ((JAIZelBasic*)(base))->seStart(2219, (this + 1460), 0, 0, 0);
        /* L_ed4:; */
        return 1;
}

/* 00000FD8-00001040       .text execGameMain__11daMgBoard_cFv */
void daMgBoard_c::execGameMain() {
    MinigameMain();
    if (this->field_0x4f8 != 0) {
        /* if (this->field_0x4f9 == 0) goto L_f24; */
    }
    /* L_f24:; */
    if (1 == 0) {
        mbEndGame = 1;
        return 1;
    }
    return 0;
}

/* 00001040-00001060       .text execEndGame__11daMgBoard_cFv */
void daMgBoard_c::execEndGame() {
    MiniGameInit();
}

/* 00001060-00001250       .text MinigameMain__11daMgBoard_cFv */
void daMgBoard_c::MinigameMain() {
        /* _savegpr_26(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* if (((JAIZelBasic*)(base))->checkSePlaying(2216) == 0) goto L_fb8; */
        return 1;
        /* L_fb8:; */
        /* ((daMgBoard_c*)(_savegpr_26(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->CursorMove(); */
        /* if (this->field_0x32 == 0) goto L_1140; */
        /* if (this->field_0x4f9 <= 0) goto L_1140; */
        /* ((dSeaFightGame_info_c*)((_savegpr_26(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1148)))->attack(mBoardPosX, mBoardPosY); */
        mLastFirePosX = (mBoardPosX & 255);
        mLastFirePosY = (mBoardPosY & 255);
        /* if (((dSeaFightGame_info_c*)((_savegpr_26(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1148)))->attack(mBoardPosX, mBoardPosY) < 0) goto L_10cc; */
        /* ((JAIZelBasic*)(base))->seStart(27042, (_savegpr_26(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1460), 0, 0, 0); */
        /* if (this->field_0x4f8 == this->field_0x4f8) goto L_1098; */
        /* if (this->field_0x4f8 == 0) goto L_1098; */
        /* ((JAIZelBasic*)(base))->seStart(2218, (_savegpr_26(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1460), 0, 0, 0); */
        /* L_1098:; */
        ((dVibration_c*)(((char*)&g_dComIfG_gameInfo + 22944)))->StartShock(7, -33);
        /* goto L_1108; */
        /* L_10cc:; */
        /* if (((dVibration_c*)(((char*)&g_dComIfG_gameInfo + 22944)))->StartShock(7, -33) != -1) goto L_1108; */
        /* ((JAIZelBasic*)(base))->seStart(27043, (_savegpr_26(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1460), 0, 0, 0); */
        /* L_1108:; */
        /* if (this->field_0x4fc <= 0) goto L_1124; */
        /* field_0x28 = 1; */
        /* L_1124:; */
        /* if (this->field_0x4fa <= 0) goto L_1140; */
        /* field_0x28 = 1; */
        /* L_1140:; */
        /* ((daMgBoard_c*)(_savegpr_26(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->set_mtx(); */
        return _restgpr_26(1);
}

/* 00001250-000013C4       .text CursorMove__11daMgBoard_cFv */
void daMgBoard_c::CursorMove() {
    /* ((STControl*)((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1420)))->checkTrigger(); */
    /* if (((STControl*)((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1420)))->checkLeftTrigger() == 0) { */
        /* mBoardPosX = (mBoardPosX + -1); */
    /* } else { */
        /* if (((STControl*)((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1420)))->checkRightTrigger() == 0) goto L_11c8; */
        /* mBoardPosX = (mBoardPosX + 1); */
    /* } */
    /* L_11c8:; */
    /* if (((STControl*)((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1420)))->checkUpTrigger() == 0) { */
        /* mBoardPosY = (mBoardPosY + 1); */
    /* } else { */
        /* if (((STControl*)((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1420)))->checkDownTrigger() == 0) goto L_1204; */
        /* mBoardPosY = (mBoardPosY + -1); */
    /* } */
    /* L_1204:; */
    /* if ((mBoardPosX & 255) > 7) { */
        /* mBoardPosX = 7; */
    /* } */
    /* if (mBoardPosX != 0) { */
        /* mBoardPosX = 0; */
    /* } */
    /* if ((mBoardPosY & 255) > 7) { */
        /* mBoardPosY = 7; */
    /* } */
    /* if (mBoardPosY != 0) { */
        /* mBoardPosY = 0; */
    /* } */
    /* if ((mBoardPosX & 255) == (mBoardPosX & 255)) { */
        /* if ((mBoardPosY & 255) != (mBoardPosY & 255)) goto L_12c0; */
    /* } */
    /* L_12c0:; */
    /* return _restgpr_29(((JAIZelBasic*)(base))->seStart(2217, 0, 0, 0, 0)); */

/* 000013C4-000014C8       .text daMgBoard_Create__FPv */
static cPhs_State daMgBoard_Create(void*) {
        /* if (/ * bne * / 1) goto L_135c; */
        /* if (/ * beq * / 1) goto L_1350; */
        __ct();
        /* field_0x58c = 0; */
        ((STControl*)((this->field_0x1c8 + 1420)))->setWaitParm(15, 15, 0, 0, 0, 8192);
        ((STControl*)((this->field_0x1c8 + 1420)))->init();
        /* L_1350:; */
        /* L_135c:; */
        /* if (dComIfG_resLoad((arg0 + 656), ((char*)&m_arcname__11daMgBoard_c + 0)) != 4) goto L_13a8; */
        /* if (fopAcM_entrySolidHeap(arg0, ((char*)&CheckCreateHeap__FP10fopAc_ac_c + 0)) != 0) goto L_13a0; */
        /* goto L_13a8; */
        /* L_13a0:; */
        ((daMgBoard_c*)(arg0))->CreateInit();
        /* L_13a8:; */
        return 5;
}

/* 000014C8-00001518       .text daMgBoard_Delete__FPv */
static BOOL daMgBoard_Delete(void*) {
    /* dComIfG_resDelete((arg0 + 656), ((char*)&m_arcname__11daMgBoard_c + 0), arg2); */
    /* ((JAIZelBasic*)(this->field_0x0))->seDeleteObject((arg0 + 1460)); */
    return 1;
}

/* 00001518-0000153C       .text daMgBoard_Draw__FPv */
static BOOL daMgBoard_Draw(void* i_this) {
    return ((daMgBoard_c*)i_this)->_draw();
}

/* 0000153C-00001850       .text _draw__11daMgBoard_cFv */
bool daMgBoard_c::_draw() {
        /* ((dScnKy_env_light_c*)(((char*)&g_env_light + 0)))->settingTevStruct(0, (_savegpr_24(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 504), (_savegpr_24(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 268)); */
        /* ((dScnKy_env_light_c*)(((char*)&g_env_light + 0)))->setLightTevColorType(mpBoardModel, (_savegpr_24(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 268)); */
        mDoExt_modelUpdateDL(mpBoardModel);
        /* if (mbDraw != 0) goto L_1498; */
        return 1;
        /* L_1498:; */
        /* ((dScnKy_env_light_c*)(((char*)&g_env_light + 0)))->settingTevStruct(0, (_savegpr_24(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 504), (_savegpr_24(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 268)); */
        /* ((dScnKy_env_light_c*)(((char*)&g_env_light + 0)))->setLightTevColorType(mpCursorModel, (_savegpr_24(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 268)); */
        mDoExt_modelUpdateDL(mpCursorModel);
        /* goto L_154c; */
        /* L_1528:; */
        mDoExt_modelUpdateDL(((dScnKy_env_light_c*)(((char*)&g_env_light + 0)))->setLightTevColorType());
        /* L_154c:; */
        /* if ((0 + 1) < mHitModelCount) goto L_1528; */
        /* goto L_1590; */
        /* L_156c:; */
        mDoExt_modelUpdateDL(((dScnKy_env_light_c*)(((char*)&g_env_light + 0)))->setLightTevColorType());
        /* L_1590:; */
        /* if ((0 + 1) < mMissModelCount) goto L_156c; */
        /* L_15b4:; */
        /* if (/ * beq * / 1) goto L_15e4; */
        /* L_15e4:; */
        /* if (1 == 0) goto L_1670; */
        /* if (/ * beq * / 1) goto L_1618; */
        /* if (/ * bge * / 1) goto L_1604; */
        /* if (/ * bge * / 1) goto L_1610; */
        /* goto L_1628; */
        /* L_1604:; */
        /* if (/ * bge * / 1) goto L_1628; */
        /* goto L_1620; */
        /* L_1610:; */
        /* goto L_162c; */
        /* L_1618:; */
        /* goto L_162c; */
        /* L_1620:; */
        /* goto L_162c; */
        /* L_1628:; */
        /* L_162c:; */
        /* if (0 == 0) goto L_1670; */
        /* ((dScnKy_env_light_c*)(((char*)&g_env_light + 0)))->setLightTevColorType(0, (_savegpr_24(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 268)); */
        mDoExt_modelUpdateDL(0);
        /* L_1670:; */
        /* if ((0 + 1) < 3) goto L_15b4; */
        ((dDlst_list_c*)(((char*)&g_dComIfG_gameInfo + 23824)))->set(((char*)&g_dComIfG_gameInfo + 24236), ((char*)&g_dComIfG_gameInfo + 24240), mpMinigameDList);
        ((dDlst_list_c*)(((char*)&g_dComIfG_gameInfo + 23824)))->set(((char*)&g_dComIfG_gameInfo + 24236), ((char*)&g_dComIfG_gameInfo + 24240), mpNumber0);
        ((dDlst_list_c*)(((char*)&g_dComIfG_gameInfo + 23824)))->set(((char*)&g_dComIfG_gameInfo + 24236), ((char*)&g_dComIfG_gameInfo + 24240), mpNumber1);
        /* L_16d8:; */
        ((dDlst_list_c*)(((char*)&g_dComIfG_gameInfo + 23824)))->set(((char*)&g_dComIfG_gameInfo + 24236), ((char*)&g_dComIfG_gameInfo + 24240));
        /* if ((0 + 1) < 24) goto L_16d8; */
        /* L_1708:; */
        ((dDlst_list_c*)(((char*)&g_dComIfG_gameInfo + 23824)))->set(((char*)&g_dComIfG_gameInfo + 24236), ((char*)&g_dComIfG_gameInfo + 24240));
        /* if ((0 + 1) < 3) goto L_1708; */
        return _restgpr_24(1);
}

/* 00001850-00001874       .text daMgBoard_Execute__FPv */
static BOOL daMgBoard_Execute(void* i_this) {
    return ((daMgBoard_c*)i_this)->_execute();

/* 00001874-0000187C       .text daMgBoard_IsDelete__FPv */
static BOOL daMgBoard_IsDelete(void*) {
    return 1;

static actor_method_class daMgBoardMethodTable = {
    (process_method_func)daMgBoard_Create,
    (process_method_func)daMgBoard_Delete,
    (process_method_func)daMgBoard_Execute,
    (process_method_func)daMgBoard_IsDelete,
    (process_method_func)daMgBoard_Draw,
};

actor_process_profile_definition g_profile_MGBOARD = {
    /* Layer ID     */ fpcLy_CURRENT_e,
    /* List ID      */ 0x0003,
    /* List Prio    */ fpcPi_CURRENT_e,
    /* Proc Name    */ fpcNm_MGBOARD_e,
    /* Proc SubMtd  */ &g_fpcLf_Method.base,
    /* Size         */ sizeof(daMgBoard_c),
    /* Size Other   */ 0,
    /* Parameters   */ 0,
    /* Leaf SubMtd  */ &g_fopAc_Method.base,
    /* Draw Prio    */ fpcDwPi_MGBOARD_e,
    /* Actor SubMtd */ &daMgBoardMethodTable,
    /* Status       */ fopAcStts_NOCULLEXEC_e | fopAcStts_UNK40000_e,
    /* Group        */ fopAc_ACTOR_e,
    /* Cull Type    */ fopAc_CULLBOX_CUSTOM_e,
};

/* 由 fix_decomp_braces.py 补齐：反编译产物末尾缺 3 个 } */
}}}
