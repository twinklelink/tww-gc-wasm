/**
 * d_minigame_terminater.cpp
 * Boating Course - Completion text
 */

#include "d/dolzel.h" // IWYU pragma: keep
#include "d/d_minigame_terminater.h"
#include "f_op/f_op_msg.h"

/* 80206FC0-80207164       .text _create__22dMinigame_Terminater_cFv */
void dMinigame_Terminater_c::_create() {
        /* if (/ * beq * / 1) goto L_44; */
        base = 0;
        /* if (/ * beq * / 1) goto L_34; */
        base = 0;
        /* L_34:; */
        /* if (arg1 != 0) goto L_44; */
        /* L_44:; */
        return __dl(__vt__12dDlst_base_c);
}

/* 80207164-8020725C       .text _execute__22dMinigame_Terminater_cFv */
void dMinigame_Terminater_c::_execute() {
        /* if (field_0x114 <= 240) goto L_1d4; */
        /* field_0x114 = (field_0x114 + -1); */
        return 1;
        /* L_1d4:; */
        /* if (field_0x118 != 2) goto L_214; */
        /* if (1 != 0) goto L_208; */
        ((dDlst_TerminaterScrnDraw_c*)(mTerminaterScrnDraw))->animeSuccess();
        ((dDlst_TerminaterScrnDraw_c*)(mTerminaterScrnDraw))->animePerfect();
        /* field_0x114 = (field_0x114 + -1); */
        /* goto L_284; */
        /* L_208:; */
        /* field_0x11c = 3; */
        /* goto L_284; */
        /* L_214:; */
        /* if (3 != 1) goto L_248; */
        /* if (field_0x114 != 0) goto L_23c; */
        ((dDlst_TerminaterScrnDraw_c*)(mTerminaterScrnDraw))->animeSuccess();
        /* field_0x114 = (field_0x114 + -1); */
        /* goto L_284; */
        /* L_23c:; */
        /* field_0x11c = 3; */
        /* goto L_284; */
        /* L_248:; */
        /* if (field_0x114 != 0) goto L_27c; */
        /* if (field_0x114 >= 120) goto L_264; */
        ((dDlst_TerminaterScrnDraw_c*)(mTerminaterScrnDraw))->animeFailed2();
        /* goto L_26c; */
        /* L_264:; */
        ((dDlst_TerminaterScrnDraw_c*)(mTerminaterScrnDraw))->animeFailed1();
        /* L_26c:; */
        /* field_0x114 = (field_0x114 + -1); */
        /* goto L_284; */
        /* L_27c:; */
        /* field_0x11c = 3; */
        /* L_284:; */
        return 1;
}

/* 8020725C-802072CC       .text _draw__22dMinigame_Terminater_cFv */
void dMinigame_Terminater_c::_draw() {
    if (field_0x118 != 2) {
        /* if (field_0x118 == 1) goto L_2d0; */
    }
    ((dDlst_TerminaterScrnDraw_c*)(mTerminaterScrnDraw))->setAlphaSuccess();
    /* goto L_2d8; */
    /* L_2d0:; */
    ((dDlst_TerminaterScrnDraw_c*)(mTerminaterScrnDraw))->setAlphaFailed();
    /* L_2d8:; */
    ((dDlst_list_c*)(((char*)&g_dComIfG_gameInfo + 23824)))->set(((char*)&g_dComIfG_gameInfo + 24236), ((char*)&g_dComIfG_gameInfo + 24240), mTerminaterScrnDraw);
    return 1;
}

/* 802072CC-80207318       .text _delete__22dMinigame_Terminater_cFv */
void dMinigame_Terminater_c::_delete() {
    if (mHeap != 0) {
        mDoExt_destroySolidHeap(mHeap);
    }
    dComIfG_resDelete((this + 256), ((char*)&@stringBase0 + 0));
    return 1;
}

/* 80207318-802073C4       .text setScreen__26dDlst_TerminaterScrnDraw_cFPCcP10JKRArchive */
void dDlst_TerminaterScrnDraw_c::setScreen(const char*, JKRArchive*) {
    /* _savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
    __nw(212);
    if (/* beq */ 1) {
        __ct(__nw(212), 0, 1);
        /* field_0x0 = 0; */
        /* field_0xd0 = -1; */
        /* field_0xcc = 0; */
    }
    /* return _restgpr_28(((J2DScreen*)(this->field_0x4))->set()); */
}

/* 802073C4-8020789C       .text setScrnFailed__26dDlst_TerminaterScrnDraw_cFv */
void dDlst_TerminaterScrnDraw_c::setScrnFailed() {
    /* _savegpr_26(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
    /* L_434:; */
    /* field_0xaa = 0; */
    /* if ((0 + 1) >= 8) goto L_434; */
    /* L_474:; */
    /* field_0xaa = 0; */
    /* field_0xaa = 0; */
    /* if ((0 + 1) >= 10) goto L_474; */
    /* field_0xaa = 0; */
    /* fopMsgM_setPaneData((_savegpr_26(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1632), this->field_0x4); */
    /* fopMsgM_setPaneData((_savegpr_26(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1688), this->field_0x4); */
    /* fopMsgM_setPaneData((_savegpr_26(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1744), this->field_0x4); */
    /* fopMsgM_setPaneData((_savegpr_26(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1800), this->field_0x4); */
    /* fopMsgM_setPaneData((_savegpr_26(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1856), this->field_0x4); */
    /* fopMsgM_setPaneData((_savegpr_26(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1912), this->field_0x4); */
    /* fopMsgM_setPaneData((_savegpr_26(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1968), this->field_0x4); */
    /* fopMsgM_setPaneData((_savegpr_26(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 2024), this->field_0x4); */
    /* fopMsgM_setPaneData((_savegpr_26(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 2080), this->field_0x4); */
    /* L_654:; */
    /* ((dDlst_TerminaterScrnDraw_c*)(_savegpr_26(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->getRotate(((_savegpr_26(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 0) + 1632)); */
    /* field_0x9de = 0; */
    /* field_0xcb6 = 0; */
    /* if ((0 + 1) >= 9) goto L_654; */
    /* field_0xaa = 0; */
    /* field_0xaa = 0; */
    /* field_0xaa = 0; */
    /* field_0xaa = 0; */
    /* field_0xaa = 0; */
    /* field_0xaa = 0; */
    /* field_0xaa = 0; */
    /* field_0xaa = 0; */
    /* field_0xaa = 0; */
    /* field_0xaa = 0; */
    /* field_0xaa = 0; */
    /* field_0xaa = 0; */
    /* field_0xaa = 0; */
    /* field_0xaa = 0; */
    /* field_0xaa = 0; */
    /* field_0xaa = 0; */
    /* field_0xaa = 0; */
    /* field_0xaa = 0; */
    /* field_0xaa = 0; */
    /* field_0xaa = 0; */
    /* field_0xaa = 0; */
    /* field_0xaa = 0; */
    /* field_0xaa = 0; */
    /* field_0xaa = 0; */
    /* field_0xaa = 0; */
    /* field_0xaa = 0; */
    /* field_0xaa = 0; */
    /* field_0xaa = 0; */
    /* field_0xaa = 0; */
    /* field_0xaa = 0; */
    /* field_0xaa = 0; */
    /* field_0xaa = 0; */
    /* field_0xaa = 0; */
    /* field_0xaa = 0; */
    /* field_0xaa = 0; */
    /* field_0xaa = 0; */
    /* field_0xaa = 0; */
    /* field_0xaa = 0; */
    /* field_0xaa = 0; */
    /* field_0xaa = 0; */
    /* field_0xaa = 0; */
    /* field_0xaa = 0; */
    /* field_0xaa = 0; */
    /* field_0xaa = 0; */
    /* field_0xaa = 0; */
    /* field_0xaa = 0; */
    /* field_0xaa = 0; */
    /* field_0xaa = 0; */
    /* return _restgpr_26(this->field_0x4); */
}

/* 8020789C-8020805C       .text setScrnSuccess__26dDlst_TerminaterScrnDraw_cFii */
void dDlst_TerminaterScrnDraw_c::setScrnSuccess(int, int) {
    /* L_d8c:; */
    /* fopMsgM_setPaneData((_savegpr_23(this, int, int, arg3, arg4, arg5, arg6, arg7) + (0 + 8)), this->field_0x4); */
    /* if ((0 + 1) >= 8) goto L_d8c; */
    /* L_ddc:; */
    /* fopMsgM_setPaneData(((_savegpr_23(this, int, int, arg3, arg4, arg5, arg6, arg7) + 0) + 456), this->field_0x4); */
    /* fopMsgM_setPaneData(((_savegpr_23(this, int, int, arg3, arg4, arg5, arg6, arg7) + 0) + 1016), this->field_0x4); */
    /* if ((0 + 1) >= 10) goto L_ddc; */
    /* fopMsgM_setPaneData((_savegpr_23(this, int, int, arg3, arg4, arg5, arg6, arg7) + 1576), this->field_0x4); */
    /* field_0xaa = 0; */
    /* field_0xaa = 0; */
    /* field_0xaa = 0; */
    /* field_0xaa = 0; */
    /* field_0xaa = 0; */
    /* field_0xaa = 0; */
    /* field_0xaa = 0; */
    /* field_0xaa = 0; */
    /* field_0xaa = 0; */
    /* fopMsgM_setPaneData((_savegpr_23(this, int, int, arg3, arg4, arg5, arg6, arg7) + 2136), this->field_0x4); */
    /* fopMsgM_setPaneData((_savegpr_23(this, int, int, arg3, arg4, arg5, arg6, arg7) + 2192), this->field_0x4); */
    /* fopMsgM_setPaneData((_savegpr_23(this, int, int, arg3, arg4, arg5, arg6, arg7) + 2248), this->field_0x4); */
    /* fopMsgM_setPaneData((_savegpr_23(this, int, int, arg3, arg4, arg5, arg6, arg7) + 2304), this->field_0x4); */
    /* fopMsgM_setPaneData((_savegpr_23(this, int, int, arg3, arg4, arg5, arg6, arg7) + 2360), this->field_0x4); */
    /* fopMsgM_setPaneData((_savegpr_23(this, int, int, arg3, arg4, arg5, arg6, arg7) + 2416), this->field_0x4); */
    /* fopMsgM_setPaneData((_savegpr_23(this, int, int, arg3, arg4, arg5, arg6, arg7) + 2472), this->field_0x4); */
    /* fopMsgM_setPaneData((_savegpr_23(this, int, int, arg3, arg4, arg5, arg6, arg7) + 2528), this->field_0x4); */
    /* fopMsgM_setPaneData((_savegpr_23(this, int, int, arg3, arg4, arg5, arg6, arg7) + 2584), this->field_0x4); */
    /* fopMsgM_setPaneData((_savegpr_23(this, int, int, arg3, arg4, arg5, arg6, arg7) + 2640), this->field_0x4); */
    /* fopMsgM_setPaneData((_savegpr_23(this, int, int, arg3, arg4, arg5, arg6, arg7) + 2696), this->field_0x4); */
    /* fopMsgM_setPaneData((_savegpr_23(this, int, int, arg3, arg4, arg5, arg6, arg7) + 2752), this->field_0x4); */
    /* fopMsgM_setPaneData((_savegpr_23(this, int, int, arg3, arg4, arg5, arg6, arg7) + 2808), this->field_0x4); */
    /* fopMsgM_setPaneData((_savegpr_23(this, int, int, arg3, arg4, arg5, arg6, arg7) + 2864), this->field_0x4); */
    /* fopMsgM_setPaneData((_savegpr_23(this, int, int, arg3, arg4, arg5, arg6, arg7) + 2920), this->field_0x4); */
    /* fopMsgM_setPaneData((_savegpr_23(this, int, int, arg3, arg4, arg5, arg6, arg7) + 2976), this->field_0x4); */
    /* fopMsgM_setPaneData((_savegpr_23(this, int, int, arg3, arg4, arg5, arg6, arg7) + 3032), this->field_0x4); */
    /* fopMsgM_setPaneData((_savegpr_23(this, int, int, arg3, arg4, arg5, arg6, arg7) + 3088), this->field_0x4); */
    /* fopMsgM_setPaneData((_savegpr_23(this, int, int, arg3, arg4, arg5, arg6, arg7) + 3144), this->field_0x4); */
    /* fopMsgM_setPaneData((_savegpr_23(this, int, int, arg3, arg4, arg5, arg6, arg7) + 3200), this->field_0x4); */
    /* fopMsgM_setPaneData((_savegpr_23(this, int, int, arg3, arg4, arg5, arg6, arg7) + 3256), this->field_0x4); */
    /* fopMsgM_setPaneData((_savegpr_23(this, int, int, arg3, arg4, arg5, arg6, arg7) + 3312), this->field_0x4); */
    /* fopMsgM_setPaneData((_savegpr_23(this, int, int, arg3, arg4, arg5, arg6, arg7) + 3368), this->field_0x4); */
    /* fopMsgM_setPaneData((_savegpr_23(this, int, int, arg3, arg4, arg5, arg6, arg7) + 3424), this->field_0x4); */
    /* fopMsgM_setPaneData((_savegpr_23(this, int, int, arg3, arg4, arg5, arg6, arg7) + 3480), this->field_0x4); */
    /* fopMsgM_setPaneData((_savegpr_23(this, int, int, arg3, arg4, arg5, arg6, arg7) + 3536), this->field_0x4); */
    /* fopMsgM_setPaneData((_savegpr_23(this, int, int, arg3, arg4, arg5, arg6, arg7) + 3592), this->field_0x4); */
    /* fopMsgM_setPaneData((_savegpr_23(this, int, int, arg3, arg4, arg5, arg6, arg7) + 3648), this->field_0x4); */
    /* fopMsgM_setPaneData((_savegpr_23(this, int, int, arg3, arg4, arg5, arg6, arg7) + 3704), this->field_0x4); */
    /* fopMsgM_setPaneData((_savegpr_23(this, int, int, arg3, arg4, arg5, arg6, arg7) + 3760), this->field_0x4); */
    /* fopMsgM_setPaneData((_savegpr_23(this, int, int, arg3, arg4, arg5, arg6, arg7) + 3816), this->field_0x4); */
    /* fopMsgM_setPaneData((_savegpr_23(this, int, int, arg3, arg4, arg5, arg6, arg7) + 3872), this->field_0x4); */
    /* fopMsgM_setPaneData((_savegpr_23(this, int, int, arg3, arg4, arg5, arg6, arg7) + 3928), this->field_0x4); */
    /* fopMsgM_setPaneData((_savegpr_23(this, int, int, arg3, arg4, arg5, arg6, arg7) + 3984), this->field_0x4); */
    /* fopMsgM_setPaneData((_savegpr_23(this, int, int, arg3, arg4, arg5, arg6, arg7) + 4040), this->field_0x4); */
    /* fopMsgM_setPaneData((_savegpr_23(this, int, int, arg3, arg4, arg5, arg6, arg7) + 4096), this->field_0x4); */
    /* fopMsgM_setPaneData((_savegpr_23(this, int, int, arg3, arg4, arg5, arg6, arg7) + 4152), this->field_0x4); */
    /* fopMsgM_setPaneData((_savegpr_23(this, int, int, arg3, arg4, arg5, arg6, arg7) + 4208), this->field_0x4); */
    /* fopMsgM_setPaneData((_savegpr_23(this, int, int, arg3, arg4, arg5, arg6, arg7) + 4264), this->field_0x4); */
    /* fopMsgM_setPaneData((_savegpr_23(this, int, int, arg3, arg4, arg5, arg6, arg7) + 4320), this->field_0x4); */
    /* fopMsgM_setPaneData((_savegpr_23(this, int, int, arg3, arg4, arg5, arg6, arg7) + 4376), this->field_0x4); */
    /* fopMsgM_setPaneData((_savegpr_23(this, int, int, arg3, arg4, arg5, arg6, arg7) + 4432), this->field_0x4); */
    /* fopMsgM_setPaneData((_savegpr_23(this, int, int, arg3, arg4, arg5, arg6, arg7) + 4488), this->field_0x4); */
    /* fopMsgM_setPaneData((_savegpr_23(this, int, int, arg3, arg4, arg5, arg6, arg7) + 4544), this->field_0x4); */
    /* fopMsgM_setPaneData((_savegpr_23(this, int, int, arg3, arg4, arg5, arg6, arg7) + 4600), this->field_0x4); */
    /* fopMsgM_setPaneData((_savegpr_23(this, int, int, arg3, arg4, arg5, arg6, arg7) + 4656), this->field_0x4); */
    /* fopMsgM_setPaneData((_savegpr_23(this, int, int, arg3, arg4, arg5, arg6, arg7) + 4712), this->field_0x4); */
    /* fopMsgM_setPaneData((_savegpr_23(this, int, int, arg3, arg4, arg5, arg6, arg7) + 4768), this->field_0x4); */
    /* fopMsgM_setPaneData((_savegpr_23(this, int, int, arg3, arg4, arg5, arg6, arg7) + 4824), this->field_0x4); */
    /* fopMsgM_setPaneData((_savegpr_23(this, int, int, arg3, arg4, arg5, arg6, arg7) + 4880), this->field_0x4); */
    /* fopMsgM_setPaneData((_savegpr_23(this, int, int, arg3, arg4, arg5, arg6, arg7) + 4936), this->field_0x4); */
    /* fopMsgM_setPaneData((_savegpr_23(this, int, int, arg3, arg4, arg5, arg6, arg7) + 4992), this->field_0x4); */
    /* fopMsgM_setPaneData((_savegpr_23(this, int, int, arg3, arg4, arg5, arg6, arg7) + 5048), this->field_0x4); */
    /* ((dDlst_TerminaterScrnDraw_c*)(_savegpr_23(this, int, int, arg3, arg4, arg5, arg6, arg7)))->changeNumberTexture(this->field_0x10e0, (_savegpr_23(this, int, int, arg3, arg4, arg5, arg6, arg7) + 0)); */
    /* ((dDlst_TerminaterScrnDraw_c*)(_savegpr_23(this, int, int, arg3, arg4, arg5, arg6, arg7)))->changeNumberTexture(this->field_0x10a8, ((10 * 10) - ((char*)&perfect$4107 + 144))); */
    /* ((dDlst_TerminaterScrnDraw_c*)(_savegpr_23(this, int, int, arg3, arg4, arg5, arg6, arg7)))->changeNumberTexture(this->field_0x1038, ((char*)&perfect$4107 + 184)); */
    /* ((dDlst_TerminaterScrnDraw_c*)(_savegpr_23(this, int, int, arg3, arg4, arg5, arg6, arg7)))->changeNumberTexture(this->field_0x1000, ((10 * 10) - ((((char*)&perfect$4107 + 144) * 60) - (0 + 1)))); */
    /* ((dDlst_TerminaterScrnDraw_c*)(_savegpr_23(this, int, int, arg3, arg4, arg5, arg6, arg7)))->changeNumberTexture(this->field_0xf90, (0 + 56)); */
    /* ((dDlst_TerminaterScrnDraw_c*)(_savegpr_23(this, int, int, arg3, arg4, arg5, arg6, arg7)))->changeNumberTexture(this->field_0xf58); */
    /* ((dDlst_TerminaterScrnDraw_c*)(_savegpr_23(this, int, int, arg3, arg4, arg5, arg6, arg7)))->changeNumberTexture(this->field_0x12a0, (_savegpr_23(this, int, int, arg3, arg4, arg5, arg6, arg7) + 0)); */
    /* ((dDlst_TerminaterScrnDraw_c*)(_savegpr_23(this, int, int, arg3, arg4, arg5, arg6, arg7)))->changeNumberTexture(this->field_0x1268, ((10 * 10) - ((char*)&perfect$4107 + 144))); */
    /* ((dDlst_TerminaterScrnDraw_c*)(_savegpr_23(this, int, int, arg3, arg4, arg5, arg6, arg7)))->changeNumberTexture(this->field_0x11f8, ((char*)&perfect$4107 + 184)); */
    /* ((dDlst_TerminaterScrnDraw_c*)(_savegpr_23(this, int, int, arg3, arg4, arg5, arg6, arg7)))->changeNumberTexture(this->field_0x11c0, ((10 * 10) - ((((char*)&perfect$4107 + 144) * 60) - (0 + 1)))); */
    /* ((dDlst_TerminaterScrnDraw_c*)(_savegpr_23(this, int, int, arg3, arg4, arg5, arg6, arg7)))->changeNumberTexture(this->field_0x1150, (0 + 56)); */
    /* ((dDlst_TerminaterScrnDraw_c*)(_savegpr_23(this, int, int, arg3, arg4, arg5, arg6, arg7)))->changeNumberTexture(this->field_0x1118); */
    /* ((dDlst_TerminaterScrnDraw_c*)(_savegpr_23(this, int, int, arg3, arg4, arg5, arg6, arg7)))->changeNumberTexture(this->field_0x13f0); */
    /* ((dDlst_TerminaterScrnDraw_c*)(_savegpr_23(this, int, int, arg3, arg4, arg5, arg6, arg7)))->changeNumberTexture(this->field_0x13f4, (_savegpr_23(this, int, int, arg3, arg4, arg5, arg6, arg7) + 0)); */
    /* ((dDlst_TerminaterScrnDraw_c*)(_savegpr_23(this, int, int, arg3, arg4, arg5, arg6, arg7)))->changeNumberTexture(this->field_0x13f8, ((dDlst_TerminaterScrnDraw_c*)(_savegpr_23(this, int, int, arg3, arg4, arg5, arg6, arg7)))->changeNumberTexture(this->field_0x1118)); */
    /* ((dDlst_TerminaterScrnDraw_c*)(_savegpr_23(this, int, int, arg3, arg4, arg5, arg6, arg7)))->changeNumberTexture(this->field_0x13fc); */
    /* ((dDlst_TerminaterScrnDraw_c*)(_savegpr_23(this, int, int, arg3, arg4, arg5, arg6, arg7)))->changeNumberTexture(this->field_0x1400, (_savegpr_23(this, int, int, arg3, arg4, arg5, arg6, arg7) + 0)); */
    /* return _restgpr_23(((dDlst_TerminaterScrnDraw_c*)(_savegpr_23(this, int, int, arg3, arg4, arg5, arg6, arg7)))->changeNumberTexture(this->field_0x1404, ((dDlst_TerminaterScrnDraw_c*)(_savegpr_23(this, int, int, arg3, arg4, arg5, arg6, arg7)))->changeNumberTexture(this->field_0x1118))); */
}

/* 8020805C-802080B0       .text changeNumberTexture__26dDlst_TerminaterScrnDraw_cFP7J2DPanei */
void dDlst_TerminaterScrnDraw_c::changeNumberTexture(J2DPane*, int) {
    if (int >= 0) {
        /* if (int >= 10) goto L_1aa0; */
    }
    /* L_1aa0:; */
    /* return ((J2DPicture*)(arg1))->changeTexture(getNumber(0), 0); */
}

/* 802080B0-802080C4       .text getNumber__26dDlst_TerminaterScrnDraw_cFi */
int dDlst_TerminaterScrnDraw_c::getNumber(int anmNum) {
    static const int number[] = {
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    };
    return number[anmNum];
}

/* 802080C4-80208120       .text setAlphaFailed__26dDlst_TerminaterScrnDraw_cFv */
void dDlst_TerminaterScrnDraw_c::setAlphaFailed() {
    /* L_1b00:; */
    /* fopMsgM_setAlpha((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + (0 + 1632))); */
    /* if ((0 + 1) >= 9) goto L_1b00; */
    /* return _restgpr_29(fopMsgM_setAlpha((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + (0 + 1632)))); */
}

/* 80208120-802081F8       .text setAlphaSuccess__26dDlst_TerminaterScrnDraw_cFv */
void dDlst_TerminaterScrnDraw_c::setAlphaSuccess() {
    /* fopMsgM_setAlpha((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 8)); */
    /* fopMsgM_setAlpha((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 456)); */
    /* fopMsgM_setAlpha((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1016)); */
    /* fopMsgM_setAlpha((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1576)); */
    /* fopMsgM_setAlpha((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 2136)); */
    /* L_1b7c:; */
    /* fopMsgM_setAlpha(((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 0) + 2472)); */
    /* fopMsgM_setAlpha(((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 0) + 3200)); */
    /* if ((0 + 1) >= 13) goto L_1b7c; */
    /* L_1ba8:; */
    /* fopMsgM_setAlpha(((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 0) + 3928)); */
    /* fopMsgM_setAlpha(((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 0) + 4376)); */
    /* if ((0 + 1) >= 8) goto L_1ba8; */
    /* fopMsgM_setAlpha((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 4824)); */
    /* fopMsgM_setAlpha((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 4880)); */
    /* fopMsgM_setAlpha((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 4936)); */
    /* return _restgpr_28(fopMsgM_setAlpha((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 4992))); */
}

/* 802081F8-80208230       .text getRotate__26dDlst_TerminaterScrnDraw_cFP18fopMsgM_pane_class */
void dDlst_TerminaterScrnDraw_c::getRotate(fopMsgM_pane_class*) {
    if (this->field_0xa4 < FCONST) {
    }
}

/* 80208230-802082D0       .text setRotate__26dDlst_TerminaterScrnDraw_cFP18fopMsgM_pane_classf */
void dDlst_TerminaterScrnDraw_c::setRotate(fopMsgM_pane_class*, f32) {
    /* field_0x9c = ((this->field_0x2c * FCONST) - farg1); */
    /* field_0xa0 = ((this->field_0x30 * FCONST) - farg1); */
    /* field_0xa8 = 122; */
    /* field_0xa4 = farg0; */
}

/* 802082D0-80208324       .text setScale__26dDlst_TerminaterScrnDraw_cFP18fopMsgM_pane_classf */
void dDlst_TerminaterScrnDraw_c::setScale(fopMsgM_pane_class*, f32) {
    /* field_0x1c = (this->field_0x14 * farg0); */
    /* field_0x20 = (this->field_0x18 * farg0); */
    /* field_0x2c = (this->field_0x24 * farg0); */
    /* field_0x30 = (this->field_0x28 * farg0); */
    /* return fopMsgM_cposMove(arg1); */
}

/* 80208324-80208440       .text animeF1__26dDlst_TerminaterScrnDraw_cFi */
void dDlst_TerminaterScrnDraw_c::animeF1(int) {
    /* _savegpr_29(this, int, arg2, arg3, arg4, arg5, arg6, arg7); */
    if (this->field_0x9de < 26) {
        /* field_0x9de = (this->field_0x9de + 1); */
        fopMsgM_paneTrans();
        /* ((dDlst_TerminaterScrnDraw_c*)(_savegpr_29(this, int, arg2, arg3, arg4, arg5, arg6, arg7)))->setRotate(); */
    }
    return _restgpr_29(1);
}

/* 80208440-80208E38       .text animeF2__26dDlst_TerminaterScrnDraw_cFi */
void dDlst_TerminaterScrnDraw_c::animeF2(int) {
        /* _savegpr_29(this, int, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* if (this->field_0x9de >= this->field_0xc) goto L_2814; */
        /* field_0x9de = (this->field_0x9de + 1); */
        /* if (this->field_0x9de > this->field_0xe0) goto L_1ff0; */
        fopMsgM_paneTrans();
        /* ((dDlst_TerminaterScrnDraw_c*)(_savegpr_29(this, int, arg2, arg3, arg4, arg5, arg6, arg7)))->setRotate(); */
        fopMsgM_setNowAlpha();
        /* goto L_2818; */
        /* L_1ff0:; */
        /* if (this->field_0x2 > 0) goto L_214c; */
        fopMsgM_paneTrans();
        /* ((dDlst_TerminaterScrnDraw_c*)(_savegpr_29(this, int, arg2, arg3, arg4, arg5, arg6, arg7)))->setRotate(); */
        /* goto L_2818; */
        /* L_214c:; */
        /* if ((this->field_0x4 - this->field_0x2) > 0) goto L_22a8; */
        fopMsgM_paneTrans();
        /* ((dDlst_TerminaterScrnDraw_c*)(_savegpr_29(this, int, arg2, arg3, arg4, arg5, arg6, arg7)))->setRotate(); */
        /* goto L_2818; */
        /* L_22a8:; */
        /* if ((this->field_0x6 - this->field_0x4) > 0) goto L_2404; */
        fopMsgM_paneTrans();
        /* ((dDlst_TerminaterScrnDraw_c*)(_savegpr_29(this, int, arg2, arg3, arg4, arg5, arg6, arg7)))->setRotate(); */
        /* goto L_2818; */
        /* L_2404:; */
        /* if ((this->field_0x8 - this->field_0x6) > 0) goto L_2560; */
        fopMsgM_paneTrans();
        /* ((dDlst_TerminaterScrnDraw_c*)(_savegpr_29(this, int, arg2, arg3, arg4, arg5, arg6, arg7)))->setRotate(); */
        /* goto L_2818; */
        /* L_2560:; */
        /* if ((this->field_0xa - this->field_0x8) > 0) goto L_26bc; */
        fopMsgM_paneTrans();
        /* ((dDlst_TerminaterScrnDraw_c*)(_savegpr_29(this, int, arg2, arg3, arg4, arg5, arg6, arg7)))->setRotate(); */
        /* goto L_2818; */
        /* L_26bc:; */
        /* if ((this->field_0xc - this->field_0xa) > 0) goto L_2818; */
        fopMsgM_paneTrans();
        /* ((dDlst_TerminaterScrnDraw_c*)(_savegpr_29(this, int, arg2, arg3, arg4, arg5, arg6, arg7)))->setRotate(); */
        /* goto L_2818; */
        /* L_2814:; */
        /* L_2818:; */
        return _restgpr_29(1);
}

/* 80208E38-802091D8       .text animeF3__26dDlst_TerminaterScrnDraw_cFi */
void dDlst_TerminaterScrnDraw_c::animeF3(int) {
        /* _savegpr_28(this, int, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* if (this->field_0xcb6 != 0) goto L_28bc; */
        /* cM_rndF(_savegpr_28(this, int, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* if (/ * ble * / 1) goto L_28a4; */
        /* L_28a4:; */
        /* field_0x9de = (5 << 1); */
        /* L_28bc:; */
        /* if (this->field_0xcb6 >= 0) goto L_2bb4; */
        /* field_0xcb6 = (this->field_0xcb6 + 1); */
        /* if (this->field_0xcb6 > this->field_0xcb6) goto L_2a40; */
        fopMsgM_paneTrans();
        /* ((dDlst_TerminaterScrnDraw_c*)(_savegpr_28(this, int, arg2, arg3, arg4, arg5, arg6, arg7)))->setRotate(); */
        /* goto L_2bb8; */
        /* L_2a40:; */
        fopMsgM_paneTrans();
        fopMsgM_setNowAlpha();
        /* ((dDlst_TerminaterScrnDraw_c*)(_savegpr_28(this, int, arg2, arg3, arg4, arg5, arg6, arg7)))->setRotate(); */
        /* goto L_2bb8; */
        /* L_2bb4:; */
        /* L_2bb8:; */
        return _restgpr_28(1);
}

/* 802091D8-80209420       .text animeS1__26dDlst_TerminaterScrnDraw_cFv */
void dDlst_TerminaterScrnDraw_c::animeS1() {
    /* _savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
    if (this->field_0x88e < 0) {
    }
    }
    /* L_2d64:; */
    if (0 != 0) {
        /* field_0x874 = 0; */
        /* field_0x878 = 0; */
    } else {
        /* field_0x874 = 0; */
        /* field_0x878 = 0; */
    }
    /* field_0x884 = 0; */
    /* field_0x888 = 0; */
    /* fopMsgM_cposMove(((_savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 0) + 2136)); */
    /* fopMsgM_setNowAlpha(((_savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 0) + 2136)); */
    /* if ((0 + 1) >= 6) goto L_2d64; */
    return _restgpr_27(1);


/* 80209420-802094AC       .text animeS2__26dDlst_TerminaterScrnDraw_cFP18fopMsgM_pane_class */
void dDlst_TerminaterScrnDraw_c::animeS2(fopMsgM_pane_class*) {
    /* field_0x36 = 0; */
    if (/* bgt */ 1) {
    }
    return 1;
}

/* 802094AC-80209AAC       .text animeS3__26dDlst_TerminaterScrnDraw_cFv */
void dDlst_TerminaterScrnDraw_c::animeS3() {
        /* _savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* if (this->field_0x13ee >= this->field_0x8) goto L_3488; */
        /* field_0x13ee = (this->field_0x13ee + 1); */
        /* if (this->field_0x13ee > this->field_0x12c) goto L_3028; */
        /* fopMsgM_paneTrans((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 5048), this->field_0x13ee, this->field_0x12c); */
        /* fopMsgM_setNowAlpha((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 4824)); */
        /* fopMsgM_setNowAlpha((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 4880)); */
        /* fopMsgM_setNowAlpha((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 4936)); */
        /* fopMsgM_setNowAlpha((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 4992)); */
        /* if (this->field_0x13ee != this->field_0x12c) goto L_348c; */
        /* ((JAIZelBasic*)(this->field_0x13ee))->seStart(2121, 0, 0, 0, 0); */
        /* goto L_348c; */
        /* L_3028:; */
        /* if (this->field_0x12c > 0) goto L_315c; */
        /* fopMsgM_paneTrans((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 5048)); */
        /* field_0x9c = 0; */
        /* field_0xa0 = 0; */
        /* field_0xa8 = 122; */
        /* field_0xa4 = 0; */
        /* goto L_348c; */
        /* L_315c:; */
        /* if (122 > 0) goto L_3290; */
        /* fopMsgM_paneTrans((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 5048)); */
        /* field_0x9c = 0; */
        /* field_0xa0 = 0; */
        /* field_0xa8 = 122; */
        /* field_0xa4 = 0; */
        /* goto L_348c; */
        /* L_3290:; */
        /* if (122 > 0) goto L_33c4; */
        /* fopMsgM_paneTrans((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 5048)); */
        /* field_0x9c = 0; */
        /* field_0xa0 = 0; */
        /* field_0xa8 = 122; */
        /* field_0xa4 = 0; */
        /* goto L_348c; */
        /* L_33c4:; */
        /* if (122 > this->field_0x13b8) goto L_348c; */
        /* fopMsgM_paneTrans((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 5048)); */
        /* goto L_348c; */
        /* L_3488:; */
        /* L_348c:; */
        return _restgpr_29(1);
}

/* 80209AAC-80209B64       .text animeFailed1__26dDlst_TerminaterScrnDraw_cFv */
void dDlst_TerminaterScrnDraw_c::animeFailed1() {
    /* _savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
    /* L_34d0:; */
    if (0 < 8) {
        /* if (this->field_0x1408 >= 0) goto L_3524; */
        /* if (this->field_0x1408 < (0 + 26)) goto L_3524; */
        /* ((dDlst_TerminaterScrnDraw_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->animeF1(0); */
    } else {
        /* if (this->field_0x1408 >= 0) goto L_3524; */
        /* if (this->field_0x1408 < (0 + 44)) goto L_3524; */
        /* ((dDlst_TerminaterScrnDraw_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->animeF2(0); */
    }
    /* L_3524:; */
    /* if ((0 + 1) >= 9) goto L_34d0; */
    /* field_0x1408 = (this->field_0x1408 + 1); */
    return _restgpr_29(0);
}

/* 80209B64-80209BEC       .text animeFailed2__26dDlst_TerminaterScrnDraw_cFv */
void dDlst_TerminaterScrnDraw_c::animeFailed2() {
    /* _savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
    /* L_357c:; */
    if (this->field_0x140a >= 0) {
        /* if (this->field_0x140a < (0 + 10)) goto L_35a0; */
        /* ((dDlst_TerminaterScrnDraw_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->animeF3((8 - 0)); */
    }
    /* L_35a0:; */
    /* if ((0 + 1) >= 9) goto L_357c; */
    /* field_0x140a = (this->field_0x140a + 1); */
    return _restgpr_29(0);
}

/* 80209BEC-80209D6C       .text animeSuccess__26dDlst_TerminaterScrnDraw_cFv */
void dDlst_TerminaterScrnDraw_c::animeSuccess() {
        /* _savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* if (this->field_0x140a > 10) goto L_3638; */
        /* if (this->field_0x140a != 0) goto L_3630; */
        /* ((JAIZelBasic*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->seStart(2120, 0, 0, 0, 0); */
        /* L_3630:; */
        /* ((dDlst_TerminaterScrnDraw_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->animeS1(); */
        /* L_3638:; */
        /* if (this->field_0x140a > 19) goto L_3690; */
        /* L_3648:; */
        /* if (this->field_0x140a < 0) goto L_3684; */
        /* if (this->field_0x140a >= (0 + 7)) goto L_3684; */
        /* ((dDlst_TerminaterScrnDraw_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->animeS2(((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + ((12 - 0) * 56)) + 2472)); */
        /* ((dDlst_TerminaterScrnDraw_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->animeS2(((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + ((12 - 0) * 56)) + 3200)); */
        /* L_3684:; */
        /* if ((0 + 1) < 13) goto L_3648; */
        /* L_3690:; */
        /* if (this->field_0x140a < 2) goto L_36f4; */
        /* if (this->field_0x140a > 19) goto L_36f4; */
        /* L_36a8:; */
        /* if (this->field_0x140a < (0 + 2)) goto L_36e8; */
        /* if (this->field_0x140a >= (0 + 9)) goto L_36e8; */
        /* ((dDlst_TerminaterScrnDraw_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->animeS2(((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + ((7 - 0) * 56)) + 3928)); */
        /* ((dDlst_TerminaterScrnDraw_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->animeS2(((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + ((7 - 0) * 56)) + 4376)); */
        /* L_36e8:; */
        /* if ((0 + 1) < 8) goto L_36a8; */
        /* L_36f4:; */
        /* if (this->field_0x140a < 19) goto L_3710; */
        /* if (this->field_0x140a > 32) goto L_3710; */
        /* ((dDlst_TerminaterScrnDraw_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->animeS3(); */
        /* L_3710:; */
        /* field_0x140a = (this->field_0x140a + 1); */
        return _restgpr_29(0);
}

/* 80209D6C-8020A4D8       .text animePerfect__26dDlst_TerminaterScrnDraw_cFv */
void dDlst_TerminaterScrnDraw_c::animePerfect() {
        /* _savegpr_24(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* if (this->field_0x140a > (this->field_0xb0 + 32)) goto L_37f4; */
        return 0;
        /* L_37f4:; */
        /* if (this->field_0x140c != 0) goto L_382c; */
        ((JAIZelBasic*)(0))->seStart(2144, 0, 0, 0, 0);
        /* L_382c:; */
        /* field_0x140c = (this->field_0x140c + 1); */
        /* if (this->field_0x140c > this->field_0xa4) goto L_39ec; */
        /* fopMsgM_setNowAlpha((_savegpr_24(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 8)); */
        /* fopMsgM_setNowAlpha((_savegpr_24(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 456)); */
        /* fopMsgM_setNowAlpha((_savegpr_24(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1016)); */
        /* ((dDlst_TerminaterScrnDraw_c*)(_savegpr_24(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->setRotate((_savegpr_24(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1576)); */
        /* L_3988:; */
        /* ((dDlst_TerminaterScrnDraw_c*)(_savegpr_24(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->setScale((_savegpr_24(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + (0 + 8))); */
        /* if ((0 + 1) < 8) goto L_3988; */
        /* L_39b4:; */
        /* ((dDlst_TerminaterScrnDraw_c*)(_savegpr_24(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->setScale(((_savegpr_24(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 0) + 456)); */
        /* ((dDlst_TerminaterScrnDraw_c*)(_savegpr_24(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->setScale(((_savegpr_24(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 0) + 1016)); */
        /* if ((0 + 1) < 10) goto L_39b4; */
        /* goto L_3e64; */
        /* L_39ec:; */
        /* if (/ * bgt * / 1) goto L_3aac; */
        /* ((dDlst_TerminaterScrnDraw_c*)(_savegpr_24(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->setRotate((_savegpr_24(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1576), this->field_0x2); */
        /* goto L_3e64; */
        /* L_3aac:; */
        /* if (/ * bgt * / 1) goto L_3b6c; */
        /* ((dDlst_TerminaterScrnDraw_c*)(_savegpr_24(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->setRotate((_savegpr_24(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1576), this->field_0x4); */
        /* goto L_3e64; */
        /* L_3b6c:; */
        /* if (/ * bgt * / 1) goto L_3c2c; */
        /* ((dDlst_TerminaterScrnDraw_c*)(_savegpr_24(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->setRotate((_savegpr_24(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1576), this->field_0x6); */
        /* goto L_3e64; */
        /* L_3c2c:; */
        /* if (/ * bgt * / 1) goto L_3cec; */
        /* ((dDlst_TerminaterScrnDraw_c*)(_savegpr_24(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->setRotate((_savegpr_24(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1576), this->field_0x8); */
        /* goto L_3e64; */
        /* L_3cec:; */
        /* if (/ * blt * / 1) goto L_3cf8; */
        /* field_0x140c = (0 + 1); */
        /* L_3cf8:; */
        /* if (/ * ble * / 1) goto L_3d5c; */
        /* L_3d5c:; */
        /* if ((1 & 16777215) == 0) goto L_3db0; */
        /* goto L_3dd8; */
        /* L_3db0:; */
        /* L_3dd8:; */
        /* if (/ * ble * / 1) goto L_3de8; */
        /* L_3de8:; */
        /* if (/ * bge * / 1) goto L_3df8; */
        /* L_3df8:; */
        /* field_0x0 = 255; */
        /* field_0x2 = 0; */
        /* field_0x3 = 255; */
        /* L_3e64:; */
        return _restgpr_24(0, (0 + 4), 255, (1 & 16777215));
}

/* 8020A4D8-8020A53C       .text draw__26dDlst_TerminaterScrnDraw_cFv */
void dDlst_TerminaterScrnDraw_c::draw() {
    /* return ((J2DScreen*)(this->field_0x4))->draw(this->field_0x5cf4, arg2, arg3, arg4); */
}

/* 8020A53C-8020A55C       .text dMinigame_Terminater_Draw__FP22dMinigame_Terminater_c */
static BOOL dMinigame_Terminater_Draw(dMinigame_Terminater_c* i_this) {
    i_this->_draw();
    return TRUE;
}

/* 8020A55C-8020A57C       .text dMinigame_Terminater_Execute__FP22dMinigame_Terminater_c */
static BOOL dMinigame_Terminater_Execute(dMinigame_Terminater_c* i_this) {
    i_this->_execute();
    return TRUE;
}

/* 8020A57C-8020A584       .text dMinigame_Terminater_IsDelete__FP22dMinigame_Terminater_c */
static BOOL dMinigame_Terminater_IsDelete(dMinigame_Terminater_c*) {
    return 1;
}

/* 8020A584-8020A5A4       .text dMinigame_Terminater_Delete__FP22dMinigame_Terminater_c */
static BOOL dMinigame_Terminater_Delete(dMinigame_Terminater_c* i_this) {
    i_this->_delete();
    return TRUE;
}

/* 8020A5A4-8020A5C4       .text dMinigame_Terminater_Create__FP9msg_class */
static cPhs_State dMinigame_Terminater_Create(msg_class* i_this) {
    static_cast<dMinigame_Terminater_c*>(i_this)->_create();
    return cPhs_NEXT_e;
}

static msg_method_class l_dMinigame_Terminater_Method = {
    (process_method_func)dMinigame_Terminater_Create,
    (process_method_func)dMinigame_Terminater_Delete,
    (process_method_func)dMinigame_Terminater_Execute,
    (process_method_func)dMinigame_Terminater_IsDelete,
    (process_method_func)dMinigame_Terminater_Draw,
};

msg_process_profile_definition g_profile_MINIGAME_TERMINATER = {
    /* Layer ID     */ fpcLy_CURRENT_e,
    /* List ID      */ 12,
    /* List Prio    */ fpcPi_CURRENT_e,
    /* Proc Name    */ fpcNm_MINIGAME_TERMINATER_e,
    /* Proc SubMtd  */ &g_fpcLf_Method.base,
    /* Size         */ sizeof(dMinigame_Terminater_c),
    /* Size Other   */ 0,
    /* Parameters   */ 0,
    /* Leaf SubMtd  */ &g_fopMsg_Method,
    /* Draw Prio    */ fpcDwPi_MINIGAME_TERMINATER_e,
    /* Msg SubMtd   */ &l_dMinigame_Terminater_Method,
};
