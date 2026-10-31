/**
 * d_a_npc_p2.cpp
 * NPC - Zuko, Niko, & Mako
 */

#include "d/dolzel_rel.h" // IWYU pragma: keep
#include "d/actor/d_a_npc_p2.h"
#include "m_Do/m_Do_ext.h"

/* 000000EC-0000020C       .text __ct__19daNpc_P2_childHIO_cFv */
daNpc_P2_childHIO_c::daNpc_P2_childHIO_c() {
    /* _savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
    ((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMyStaffId(((char*)&@stringBase0 + 190), 0, 0);
}

/* 00000248-000003E8       .text __ct__14daNpc_P2_HIO_cFv */
daNpc_P2_HIO_c::daNpc_P2_HIO_c() {
    /* goto L_1cc; */
    /* ((daNpc_P2_c*)(arg0))->cutSetAnmStart(arg1); */
    /* goto L_1cc; */
    /* ((daNpc_P2_c*)(((daNpc_P2_c*)(arg0))->cutSetAnmStart(arg1)))->cutJumpStart(); */
    /* goto L_1cc; */
    /* ((daNpc_P2_c*)(((daNpc_P2_c*)(((daNpc_P2_c*)(arg0))->cutSetAnmStart(arg1)))->cutJumpStart()))->cutSwOnStart(); */
    /* goto L_1cc; */
    /* ((daNpc_P2_c*)(((daNpc_P2_c*)(((daNpc_P2_c*)(((daNpc_P2_c*)(arg0))->cutSetAnmStart(arg1)))->cutJumpStart()))->cutSwOnStart()))->cutSwOffStart(); */
    /* goto L_1cc; */
    /* ((daNpc_P2_c*)(((daNpc_P2_c*)(((daNpc_P2_c*)(((daNpc_P2_c*)(((daNpc_P2_c*)(arg0))->cutSetAnmStart(arg1)))->cutJumpStart()))->cutSwOnStart()))->cutSwOffStart()))->cutSurpriseStart(); */
    /* goto L_1cc; */
    /* ((daNpc_P2_c*)(((daNpc_P2_c*)(((daNpc_P2_c*)(((daNpc_P2_c*)(((daNpc_P2_c*)(((daNpc_P2_c*)(arg0))->cutSetAnmStart(arg1)))->cutJumpStart()))->cutSwOnStart()))->cutSwOffStart()))->cutSurpriseStart()))->cutOmamoriInitStart(); */
    /* goto L_1cc; */
    /* ((daNpc_P2_c*)(((daNpc_P2_c*)(((daNpc_P2_c*)(((daNpc_P2_c*)(((daNpc_P2_c*)(((daNpc_P2_c*)(((daNpc_P2_c*)(arg0))->cutSetAnmStart(arg1)))->cutJumpStart()))->cutSwOnStart()))->cutSwOffStart()))->cutSurpriseStart()))->cutOmamoriInitStart()))->cutOmamoriEndStart(); */
    /* L_1cc:; */
    if (/* bgt */ 1) {
        ((daNpc_P2_c*)((C_@4814 + 0)))->cutTalkProc();
        /* goto L_2d8; */
        ((daNpc_P2_c*)(((daNpc_P2_c*)((C_@4814 + 0)))->cutTalkProc()))->cutRideSwitchProc();
        /* goto L_2d8; */
        ((daNpc_P2_c*)(((daNpc_P2_c*)(((daNpc_P2_c*)((C_@4814 + 0)))->cutTalkProc()))->cutRideSwitchProc()))->cutRunWaitProc();
        /* goto L_2d8; */
        ((daNpc_P2_c*)(((daNpc_P2_c*)(((daNpc_P2_c*)(((daNpc_P2_c*)((C_@4814 + 0)))->cutTalkProc()))->cutRideSwitchProc()))->cutRunWaitProc()))->cutJumpToLiftProc();
        /* goto L_2d8; */
        ((daNpc_P2_c*)(((daNpc_P2_c*)(((daNpc_P2_c*)(((daNpc_P2_c*)(((daNpc_P2_c*)((C_@4814 + 0)))->cutTalkProc()))->cutRideSwitchProc()))->cutRunWaitProc()))->cutJumpToLiftProc()))->cutLiftToRopeProc();
        /* goto L_2d8; */
        ((daNpc_P2_c*)(((daNpc_P2_c*)(((daNpc_P2_c*)(((daNpc_P2_c*)(((daNpc_P2_c*)(((daNpc_P2_c*)((C_@4814 + 0)))->cutTalkProc()))->cutRideSwitchProc()))->cutRunWaitProc()))->cutJumpToLiftProc()))->cutLiftToRopeProc()))->cutRopeTalkProc();
        /* goto L_2d8; */
        ((daNpc_P2_c*)(((daNpc_P2_c*)(((daNpc_P2_c*)(((daNpc_P2_c*)(((daNpc_P2_c*)(((daNpc_P2_c*)(((daNpc_P2_c*)((C_@4814 + 0)))->cutTalkProc()))->cutRideSwitchProc()))->cutRunWaitProc()))->cutJumpToLiftProc()))->cutLiftToRopeProc()))->cutRopeTalkProc()))->cutRopeToLiftProc();
        /* goto L_2d8; */
        ((daNpc_P2_c*)(((daNpc_P2_c*)(((daNpc_P2_c*)(((daNpc_P2_c*)(((daNpc_P2_c*)(((daNpc_P2_c*)(((daNpc_P2_c*)(((daNpc_P2_c*)((C_@4814 + 0)))->cutTalkProc()))->cutRideSwitchProc()))->cutRunWaitProc()))->cutJumpToLiftProc()))->cutLiftToRopeProc()))->cutRopeTalkProc()))->cutRopeToLiftProc()))->cutJumpToGoalProc();
        /* goto L_2d8; */
        ((daNpc_P2_c*)(((daNpc_P2_c*)(((daNpc_P2_c*)(((daNpc_P2_c*)(((daNpc_P2_c*)(((daNpc_P2_c*)(((daNpc_P2_c*)(((daNpc_P2_c*)(((daNpc_P2_c*)((C_@4814 + 0)))->cutTalkProc()))->cutRideSwitchProc()))->cutRunWaitProc()))->cutJumpToLiftProc()))->cutLiftToRopeProc()))->cutRopeTalkProc()))->cutRopeToLiftProc()))->cutJumpToGoalProc()))->cutSetAnmProc();
        /* goto L_2d8; */
        ((daNpc_P2_c*)(((daNpc_P2_c*)(((daNpc_P2_c*)(((daNpc_P2_c*)(((daNpc_P2_c*)(((daNpc_P2_c*)(((daNpc_P2_c*)(((daNpc_P2_c*)(((daNpc_P2_c*)(((daNpc_P2_c*)((C_@4814 + 0)))->cutTalkProc()))->cutRideSwitchProc()))->cutRunWaitProc()))->cutJumpToLiftProc()))->cutLiftToRopeProc()))->cutRopeTalkProc()))->cutRopeToLiftProc()))->cutJumpToGoalProc()))->cutSetAnmProc()))->cutJumpProc();
        /* goto L_2d8; */
        ((daNpc_P2_c*)(((daNpc_P2_c*)(((daNpc_P2_c*)(((daNpc_P2_c*)(((daNpc_P2_c*)(((daNpc_P2_c*)(((daNpc_P2_c*)(((daNpc_P2_c*)(((daNpc_P2_c*)(((daNpc_P2_c*)(((daNpc_P2_c*)((C_@4814 + 0)))->cutTalkProc()))->cutRideSwitchProc()))->cutRunWaitProc()))->cutJumpToLiftProc()))->cutLiftToRopeProc()))->cutRopeTalkProc()))->cutRopeToLiftProc()))->cutJumpToGoalProc()))->cutSetAnmProc()))->cutJumpProc()))->cutSwOnProc();
        /* goto L_2d8; */
        ((daNpc_P2_c*)(((daNpc_P2_c*)(((daNpc_P2_c*)(((daNpc_P2_c*)(((daNpc_P2_c*)(((daNpc_P2_c*)(((daNpc_P2_c*)(((daNpc_P2_c*)(((daNpc_P2_c*)(((daNpc_P2_c*)(((daNpc_P2_c*)(((daNpc_P2_c*)((C_@4814 + 0)))->cutTalkProc()))->cutRideSwitchProc()))->cutRunWaitProc()))->cutJumpToLiftProc()))->cutLiftToRopeProc()))->cutRopeTalkProc()))->cutRopeToLiftProc()))->cutJumpToGoalProc()))->cutSetAnmProc()))->cutJumpProc()))->cutSwOnProc()))->cutSwOffProc();
        /* goto L_2d8; */
        ((daNpc_P2_c*)(((daNpc_P2_c*)(((daNpc_P2_c*)(((daNpc_P2_c*)(((daNpc_P2_c*)(((daNpc_P2_c*)(((daNpc_P2_c*)(((daNpc_P2_c*)(((daNpc_P2_c*)(((daNpc_P2_c*)(((daNpc_P2_c*)(((daNpc_P2_c*)(((daNpc_P2_c*)((C_@4814 + 0)))->cutTalkProc()))->cutRideSwitchProc()))->cutRunWaitProc()))->cutJumpToLiftProc()))->cutLiftToRopeProc()))->cutRopeTalkProc()))->cutRopeToLiftProc()))->cutJumpToGoalProc()))->cutSetAnmProc()))->cutJumpProc()))->cutSwOnProc()))->cutSwOffProc()))->cutSurpriseProc();
        /* goto L_2d8; */
        ((daNpc_P2_c*)(((daNpc_P2_c*)(((daNpc_P2_c*)(((daNpc_P2_c*)(((daNpc_P2_c*)(((daNpc_P2_c*)(((daNpc_P2_c*)(((daNpc_P2_c*)(((daNpc_P2_c*)(((daNpc_P2_c*)(((daNpc_P2_c*)(((daNpc_P2_c*)(((daNpc_P2_c*)(((daNpc_P2_c*)((C_@4814 + 0)))->cutTalkProc()))->cutRideSwitchProc()))->cutRunWaitProc()))->cutJumpToLiftProc()))->cutLiftToRopeProc()))->cutRopeTalkProc()))->cutRopeToLiftProc()))->cutJumpToGoalProc()))->cutSetAnmProc()))->cutJumpProc()))->cutSwOnProc()))->cutSwOffProc()))->cutSurpriseProc()))->cutOmamoriInitProc();
        /* goto L_2d8; */
    }
    /* L_2d8:; */
    return _restgpr_28(((daNpc_P2_c*)(((daNpc_P2_c*)(((daNpc_P2_c*)(((daNpc_P2_c*)(((daNpc_P2_c*)(((daNpc_P2_c*)(((daNpc_P2_c*)(((daNpc_P2_c*)(((daNpc_P2_c*)(((daNpc_P2_c*)(((daNpc_P2_c*)(((daNpc_P2_c*)(((daNpc_P2_c*)(((daNpc_P2_c*)(((daNpc_P2_c*)((C_@4814 + 0)))->cutTalkProc()))->cutRideSwitchProc()))->cutRunWaitProc()))->cutJumpToLiftProc()))->cutLiftToRopeProc()))->cutRopeTalkProc()))->cutRopeToLiftProc()))->cutJumpToGoalProc()))->cutSetAnmProc()))->cutJumpProc()))->cutSwOnProc()))->cutSwOffProc()))->cutSurpriseProc()))->cutOmamoriInitProc()))->cutOmamoriEndProc());
}

/* 00000490-0000068C       .text nodeCallBack__FP7J3DNodei */
static BOOL nodeCallBack(J3DNode*, int) {
    if ((((daNpc_P2_c*)(arg0))->talk(1) & 65535) == 18) {
    }
    return ((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->cutEnd(int);
}

/* 0000068C-00000788       .text initTexPatternAnm__10daNpc_P2_cFb */
void daNpc_P2_c::initTexPatternAnm(bool) {
    if (this->field_0x7d3 != 10) {
        cLib_addCalc2();
    }
    if (/* beq */ 1) {
        /* field_0x7f4 = 17; */
        /* field_0x7d3 = 10; */
    }
    if (cLib_calcTimer<i>__FPi() == 0) {
        /* if (this->field_0x7d3 == 10) goto L_64c; */
        /* field_0x224 = 0; */
        gravity = 0;
        /* field_0x7d3 = 1; */
    }
    /* L_64c:; */
    return _restgpr_28(((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->cutEnd());
}

/* 00000788-00000810       .text playTexPatternAnm__10daNpc_P2_cFv */
void daNpc_P2_c::playTexPatternAnm() {
    if (/* bne */ 1) {
        /* field_0x7f4 = 0; */
    } else {
        /* field_0x7f4 = (base & 65535); */
    }
    /* field_0x7d3 = 6; */
    /* field_0x72c = 1; */
    return this;
}

/* 00000810-00000A90       .text setAnm__10daNpc_P2_cFv */
void daNpc_P2_c::setAnm() {
    if (this->field_0x5d != 0) {
        /* if (/ * beq * / 1) goto L_750; */
    }
    /* L_750:; */
    if (0 == 0) {
    }
    /* return ((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->cutEnd(arg1); */
}

/* 00000A90-00000AFC       .text setTexAnm__10daNpc_P2_cFv */
void daNpc_P2_c::setTexAnm() {
    /* _savegpr_26(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
    ((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMySubstanceP();
}

/* 00000AFC-00000B90       .text setAttention__10daNpc_P2_cFv */
void daNpc_P2_c::setAttention() {
    /* getMySubstanceP(arg1, ((arg2 + 0) + 219), 0, arg4); */
    if (/* bne */ 1) {
        /* field_0x7fc = 0; */
    } else {
        /* field_0x7fc = 0; */
    }
    if (/* bne */ 1) {
        /* field_0x7f8 = 0; */
    } else {
        /* field_0x7f8 = 0; */
    }
    /* if (getMySubstanceP(arg1, ((arg2 + 0) + 219), 0, arg4) == 0) { */
        /* field_0x800 = 0; */
    /* } else { */
        /* field_0x800 = 0; */
    /* } */
    /* field_0x7d3 = 5; */
    /* field_0x72c = 1; */
    /* return _restgpr_26(getMySubstanceP(arg1, ((arg2 + 0) + 219), 0, arg4)); */

/* 00000B90-00000CEC       .text chkAttention__10daNpc_P2_cFv */
void daNpc_P2_c::chkAttention() {
        /* fopAcIt_Judge(((char*)&searchNearLift__10daNpc_P2_cFPvPv + 0), _savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        __mi();
        PSVECSquareMag();
        /* if (/ * ble * / 1) goto L_b8c; */
        /* L_b8c:; */
        /* if (/ * beq * / 1) goto L_bfc; */
        dComIfGp_getReverb((this->field_0x20a & 255));
        /* if (_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) == 0) goto L_bcc; */
        /* goto L_bd0; */
        /* L_bcc:; */
        /* L_bd0:; */
        /* ((JAIZelBasic*)(base))->monsSeStart(18584, (_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 608), -1, 0, dComIfGp_getReverb((this->field_0x20a & 255))); */
        /* field_0x224 = 0; */
        gravity = 0;
        speedF = 0;
        /* field_0x7d3 = 8; */
        /* goto L_c78; */
}

/* 00000CEC-000010E8       .text lookBack__10daNpc_P2_cFv */
void daNpc_P2_c::lookBack() {
        /* if (/ * beq * / 1) goto L_c40; */
        /* if ((this->field_0x7d3 & 255) == 9) goto L_c1c; */
        /* if ((this->field_0x7d3 & 255) != 10) goto L_c40; */
        /* L_c1c:; */
        speedF = 0;
        /* field_0x7dc = 0; */
        /* field_0x7e0 = 0; */
        /* field_0x7e4 = 0; */
        /* field_0x7d3 = 10; */
        /* goto L_c78; */
        /* L_c40:; */
        /* if (this->field_0x224 != this->field_0x24) goto L_c78; */
        /* if (this->field_0x7d3 != 8) goto L_c78; */
        /* field_0x7dc = 0; */
        /* field_0x7e0 = 0; */
        /* field_0x7e4 = 0; */
        /* field_0x7d3 = 9; */
        /* L_c78:; */
        /* if (this->field_0x7d3 != 5) goto L_c90; */
        smoke_set();
        /* goto L_d04; */
        /* L_c90:; */
        /* if (/ * beq * / 1) goto L_cf0; */
        dComIfGp_getReverb((this->field_0x20a & 255));
        /* if (/ * beq * / 1) goto L_cd0; */
        /* goto L_cd4; */
        /* L_cd0:; */
        /* L_cd4:; */
        ((JAIZelBasic*)(base))->monsSeStart(18587);
        /* field_0x7f4 = 17; */
        ((daNpc_P2_c*)(((JAIZelBasic*)(base))->monsSeStart(18587)))->smoke_set();
        /* goto L_d04; */
        /* L_cf0:; */
        /* L_d04:; */
        /* field_0x774 = 0; */
        /* field_0x778 = 0; */
        /* field_0x77c = 0; */
        /* if (/ * beq * / 1) goto L_d5c; */
        /* if (this->field_0x7d3 != 5) goto L_d5c; */
        speedF = 0;
        /* goto L_e0c; */
        /* L_d5c:; */
        /* if (/ * beq * / 1) goto L_da8; */
        /* if ((this->field_0x7d3 & 255) == 10) goto L_da8; */
        /* if ((this->field_0x7d3 & 255) == 1) goto L_da8; */
        cLib_addCalc2();
        /* goto L_e0c; */
        /* L_da8:; */
        /* if (cLib_calcTimer<i>__FPi() != 0) goto L_e0c; */
        /* if (this->field_0x7d3 != 10) goto L_e0c; */
        /* field_0x7d3 = 1; */
        /* field_0x7dc = 0; */
        /* field_0x7e0 = 0; */
        /* field_0x7e4 = 0; */
        /* field_0x714 = 0; */
        /* field_0x718 = 0; */
        /* field_0x71c = 0; */
        /* field_0x224 = 0; */
        gravity = 0;
        speedF = 0;
        /* L_e0c:; */
        return _restgpr_29(((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->cutEnd());
}

/* 000010E8-00001160       .text setMtx__10daNpc_P2_cFv */
void daNpc_P2_c::setMtx() {
    if (/* bge */ 1) {
        /* field_0x714 = 0; */
        /* field_0x718 = 0; */
        /* field_0x71c = 0; */
    }
    /* return _restgpr_29(0, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
}

/* 00001160-00001204       .text setCollision__10daNpc_P2_cFv */
void daNpc_P2_c::setCollision() {
        /* ((dEvent_manager_c*)(((this + 0) + 21196)))->getMySubstanceP(arg1, ((char*)&@stringBase0 + 233), 0, arg4); */
        ((dEvent_manager_c*)(((this + 0) + 21196)))->getMySubstanceP();
        /* if (((dEvent_manager_c*)(((this + 0) + 21196)))->getMySubstanceP(arg1, ((char*)&@stringBase0 + 233), 0, arg4) != 0) goto L_10e8; */
        /* field_0x7fc = 0; */
        /* goto L_10f0; */
        /* L_10e8:; */
        /* field_0x7fc = 0; */
        /* L_10f0:; */
        /* if (((dEvent_manager_c*)(((this + 0) + 21196)))->getMySubstanceP() != 0) goto L_1104; */
        /* field_0x7f8 = 0; */
        /* goto L_110c; */
        /* L_1104:; */
        /* field_0x7f8 = 0; */
        /* L_110c:; */
        /* if (((dEvent_manager_c*)(((this + 0) + 21196)))->getMySubstanceP() != 0) goto L_1120; */
}

/* 00001204-00001338       .text smoke_set__10daNpc_P2_cFv */
void daNpc_P2_c::smoke_set() {
    /* goto L_1128; */
    /* field_0x800 = 0; */
    /* L_1128:; */
    /* field_0x7d3 = 5; */
    /* field_0x72c = 1; */
    /* return _restgpr_26(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
}

/* 00001338-00001534       .text next_msgStatus__10daNpc_P2_cFPUl */
void daNpc_P2_c::next_msgStatus(unsigned long*) {
        dComIfGp_getReverb((this->field_0x20a & 255));
        /* if (/ * beq * / 1) goto L_1280; */
        /* goto L_1284; */
        /* L_1280:; */
        /* L_1284:; */
        ((JAIZelBasic*)(base))->monsSeStart(18584);
        /* field_0x224 = 0; */
        gravity = 0;
        speedF = 0;
        /* field_0x7d3 = 8; */
        /* if (this->field_0x7d3 != 5) goto L_12c4; */
        ((daNpc_P2_c*)(((JAIZelBasic*)(base))->monsSeStart(18584)))->smoke_set();
        /* goto L_12d8; */
        /* L_12c4:; */
        /* L_12d8:; */
        /* if (/ * beq * / 1) goto L_12f0; */
        speedF = 0;
        /* L_12f0:; */
        /* if (this->field_0x5ec == 0) goto L_135c; */
        dComIfGp_getReverb((this->field_0x20a & 255));
        /* if (/ * beq * / 1) goto L_1330; */
        /* goto L_1334; */
        /* L_1330:; */
        /* L_1334:; */
        ((JAIZelBasic*)(base))->monsSeStart(18585);
        gravity = 0;
        /* field_0x224 = 0; */
        /* L_135c:; */
        return _restgpr_29(((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->cutEnd());
}

/* 00001534-000016CC       .text getMsg__10daNpc_P2_cFv */
void daNpc_P2_c::getMsg() {
    /* fopAcIt_Judge(((char*)&searchNearRope__10daNpc_P2_cFPvPv + 0), arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
    __mi();
    PSVECSquareMag();
    if (/* ble */ 1) {
    }
    /* field_0x798 = 0; */
    /* if ((this->field_0x50 / this->field_0x798) < this->field_0x24) { */
    /* field_0x79c = 0; */
    /* field_0x7a8 = 12000; */

/* 000016CC-000016D8       .text talkInit__10daNpc_P2_cFv */
void daNpc_P2_c::talkInit() {
    m809 = 0;
}

/* 000016D8-000017AC       .text anmAtr__10daNpc_P2_cFUs */
void daNpc_P2_c::anmAtr(unsigned short) {
        /* if ((cM_atan2s(this, short) & 65535) <= this->field_0x7a8) goto L_1618; */
        /* goto L_1628; */
        /* L_1618:; */
        /* if ((cM_atan2s(this, short) & 65535) >= (-this->field_0x7a8)) goto L_1628; */
        /* L_1628:; */
        /* if (/ * ble * / 1) goto L_16d0; */
}

/* 000017AC-00001918       .text talk__10daNpc_P2_cFb */
void daNpc_P2_c::talk(bool) {
    cM_atan2f(this, bool);
    /* field_0x7a0 = 0; */
    /* if (((this->field_0x5c * this->field_0x5c) + (this->field_0x60 * this->field_0x60)) < this->field_0x24) { */
    /* field_0x7aa = cM_atan2s(cM_atan2f(this, bool)); */
    if (this->field_0x7aa > 0) {
    } else {
        /* field_0x7a4 = 0; */
    }
    __mi();
    PSVECSquareMag();
    if (/* ble */ 1) {
    }
}

/* 00001918-00001998       .text eventOrder__10daNpc_P2_cFv */
void daNpc_P2_c::eventOrder() {
    if (/* ble */ 1) {
    }
    normalize();
    __ml();
    __mi();
    current = 0;
    /* field_0x1fc = 0; */
    /* field_0x200 = 0; */
    /* field_0x224 = 0; */
    gravity = 0;
    /* field_0x7b0 = 0; */
    /* field_0x7b4 = 0; */
    /* field_0x7b8 = 0; */
    /* field_0x7ac = 0; */
}

/* 00001998-00001A00       .text checkOrder__10daNpc_P2_cFv */
void daNpc_P2_c::checkOrder() {
    /* return _restgpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
}

/* 00001A00-00001A7C       .text demo_wait_2__10daNpc_P2_cFv */
void daNpc_P2_c::demo_wait_2() {
    /* field_0xb0 = 2; */
    /* field_0x7b0 = 0; */
    /* field_0x7b4 = 0; */
    /* field_0x7b8 = 0; */
    dLib_getPosFromMtx();
    /* mDoMtx_ZrotS(((char*)&now__14mDoMtx_stack_c + 0), ((-this->field_0x208) & 65535)); */
    /* mDoMtx_XrotM(((char*)&now__14mDoMtx_stack_c + 0), ((-this->field_0x204) & 65535)); */
}

/* 00001A7C-00001B00       .text demo_intro_2__10daNpc_P2_cFv */
void daNpc_P2_c::demo_intro_2() {
        /* ((mDoMtx_stack_c*)(mDoMtx_YrotM((this + 0), ((-this->field_0x206) & 65535))))->transM(); */
        PSMTXMultVec(((char*)&now__14mDoMtx_stack_c + 0));
        /* if (/ * bne * / 1) goto L_1a28; */
        /* if (/ * bne * / 1) goto L_1a28; */
        cM_rad2s(PSMTXMultVec(((char*)&now__14mDoMtx_stack_c + 0)));
}

/* 00001B00-00001BBC       .text goal_wait_2__10daNpc_P2_cFv */
void daNpc_P2_c::goal_wait_2() {
        /* goto L_1a70; */
        /* if (/ * bne * / 1) goto L_1a6c; */
        cM_rad2s(this);
        /* goto L_1a70; */
        /* L_1a6c:; */
        /* L_1a70:; */
        /* field_0x7a0 = (this->field_0x7a0 + (this->field_0x8c + this->field_0x24)); */
        /* if (/ * bne * / 1) goto L_1ad8; */
        /* if (/ * bne * / 1) goto L_1ad8; */
        cM_rad2s(jmaSinShift);
}

/* 00001BBC-00001C74       .text demo_goal_2__10daNpc_P2_cFv */
void daNpc_P2_c::demo_goal_2() {
        /* goto L_1b20; */
        /* if (/ * bne * / 1) goto L_1b1c; */
        cM_rad2s(this);
        /* goto L_1b20; */
        /* L_1b1c:; */
        /* L_1b20:; */
        /* field_0x7a4 = (this->field_0x7a4 + (this->field_0x8c + this->field_0x24)); */
        /* if ((this->field_0x7a0 * this->field_0x79c) != this->field_0x17c) goto L_1b68; */
        /* field_0x7a0 = (((this->field_0x7a0 * this->field_0x79c) - this->field_0x180) / this->field_0x79c); */
        /* L_1b68:; */
        /* if ((this->field_0x7a4 * this->field_0x79c) != this->field_0x17c) goto L_1b8c; */
}

/* 00001C74-00001CFC       .text demo_bomb_get__10daNpc_P2_cFv */
void daNpc_P2_c::demo_bomb_get() {
    cM_rad2s(cLib_chaseS());
}

/* 00001CFC-00001D78       .text demo_wait__10daNpc_P2_cFv */
void daNpc_P2_c::demo_wait() {
    if (/* ble */ 1) {
        /* field_0x7a8 = 12000; */
    }
    cM_rad2s(this);
    cM_rad2s(jmaSinShift);
}

/* 00001D78-00001DE8       .text demo_intro__10daNpc_P2_cFv */
void daNpc_P2_c::demo_intro() {
    cM_rad2s(jmaSinShift);
}

/* 00001DE8-00001E4C       .text demo_lift__10daNpc_P2_cFv */
void daNpc_P2_c::demo_lift() {
    cM_rad2s(cLib_addCalcAngleS());
}

/* 00001E4C-00001EC8       .text demo_jump__10daNpc_P2_cFv */
void daNpc_P2_c::demo_jump() {
    cM_rad2s(this);
}

/* 00001EC8-000021C4       .text goal_goalpos_to_talkpos__10daNpc_P2_cFv */
void daNpc_P2_c::goal_goalpos_to_talkpos() {
        /* cLib_addCalcAngleS(this, arg1, arg2); */
        PSMTXTrans(((char*)&now__14mDoMtx_stack_c + 0));
        mDoMtx_ZXYrotM(((char*)&now__14mDoMtx_stack_c + 0));
        PSMTXMultVec(((char*)&now__14mDoMtx_stack_c + 0));
        cM_rad2s(PSMTXTrans(((char*)&now__14mDoMtx_stack_c + 0)));
        mDoMtx_ZXYrotM(((char*)&now__14mDoMtx_stack_c + 0));
        PSMTXMultVec(((char*)&now__14mDoMtx_stack_c + 0));
        /* if (this->field_0x7a4 <= this->field_0x24) goto L_1f68; */
        /* if (this->field_0x7a0 <= this->field_0x24) goto L_1f68; */
        /* if (this->field_0x7d3 != 11) goto L_1f68; */
        /* L_1f68:; */
        /* if ((((daNpc_P2_c*)(((JAIZelBasic*)(base))->seStart(8222)))->talk(1) & 65535) != 18) goto L_2018; */
        /* if (this->field_0x7a4 <= this->field_0x24) goto L_2018; */
        /* if (this->field_0x7a0 <= this->field_0x24) goto L_2018; */
        /* if (this->field_0x7d3 != 11) goto L_2018; */
        dComIfGp_getReverb((this->field_0x20a & 255));
        /* if (/ * beq * / 1) goto L_1fdc; */
        /* goto L_1fe0; */
        /* L_1fdc:; */
        /* L_1fe0:; */
        ((JAIZelBasic*)(base))->monsSeStart(18586);
        /* field_0x7d3 = 9; */
        /* field_0x7c0 = 0; */
        /* field_0xb0 = 3; */
        ((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->cutEnd();
        /* goto L_20a8; */
        /* L_2018:; */
        /* if (this->field_0x7a4 <= this->field_0x24) goto L_2040; */
        /* if (this->field_0x7a0 <= this->field_0x24) goto L_2040; */
        /* field_0x7d3 = 12; */
        /* goto L_20a8; */
        /* L_2040:; */
        /* if (this->field_0x7a4 <= this->field_0x24) goto L_2064; */
        /* if (this->field_0x7a0 >= this->field_0x24) goto L_2064; */
        /* field_0x7d3 = 11; */
        /* goto L_20a8; */
        /* L_2064:; */
        /* if (this->field_0x7a4 >= this->field_0x24) goto L_2088; */
        /* if (this->field_0x7a0 <= this->field_0x24) goto L_2088; */
        /* field_0x7d3 = 11; */
        /* goto L_20a8; */
        /* L_2088:; */
        /* if (this->field_0x7a4 >= this->field_0x24) goto L_20a8; */
        /* if (this->field_0x7a0 >= this->field_0x24) goto L_20a8; */
        /* field_0x7d3 = 12; */
        /* L_20a8:; */
        return _restgpr_26(((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->cutEnd());
}

/* 000021C4-000025B8       .text goal_talkpos_to_goalpos__10daNpc_P2_cFv */
void daNpc_P2_c::goal_talkpos_to_goalpos() {
    /* _savegpr_26(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
    if (((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMySubstanceP() == 0) {
        /* field_0x7fc = 0; */
    } else {
        /* field_0x7fc = 0; */
    }
    if (((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMySubstanceP() == 0) {
        /* field_0x7f8 = 0; */
    } else {
        /* field_0x7f8 = 0; */
    }
    if (((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMySubstanceP() == 0) {
        /* field_0x800 = 0; */
    } else {
        /* field_0x800 = 0; */
    }
    /* field_0x204 = 0; */
    /* field_0x208 = 0; */
    /* field_0x72c = 1; */
    /* field_0x7d3 = 9; */
    /* field_0x224 = 0; */
    gravity = 0;
    speedF = 0;
    return _restgpr_26(((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMySubstanceP());

/* 000025B8-000026F4       .text goal_goalpos_wait__10daNpc_P2_cFv */
void daNpc_P2_c::goal_goalpos_wait() {
    /* if (((dEvent_manager_c*)(getMySubstanceP(arg1, ((char*)&@stringBase0 + 219), 0, arg4)))->getMySubstanceP() == 0) { */
        /* field_0x7ec = 0; */
        /* field_0x7f0 = 0; */
    /* } else { */
        /* field_0x7e8 = 0; */
        /* field_0x7ec = 0; */
        /* field_0x7f0 = 0; */
    /* } */
    /* if (/ * bne * / 1) { */
        /* field_0x7fc = 0; */
    /* } else { */
        /* field_0x7fc = 0; */
    /* } */
    /* if (/ * bne * / 1) { */
        /* field_0x7f8 = 0; */
    /* } else { */
        /* field_0x7f8 = 0; */
    /* } */
    /* if (getMySubstanceP(arg1, ((char*)&@stringBase0 + 219), 0, arg4) == 0) { */
        /* field_0x800 = 0; */
    /* } else { */
        /* field_0x800 = 0; */
    /* } */
    /* field_0x7d3 = 5; */
    /* field_0x72c = 1; */
    /* return _restgpr_25((((char*)&l_HIO + 0) + (m290 * 212)), (m290 * 212)); */
/* } */

/* 000026F4-00002864       .text goal_talkpos_wait__10daNpc_P2_cFv */
/* void daNpc_P2_c::goal_talkpos_wait() { */
        /* __mi(); */
        /* PSVECSquareMag(); */
        /* if (/ * ble * / 1) goto L_26a4; */
        /* L_26a4:; */
        /* if (/ * beq * / 1) goto L_2714; */
        /* dComIfGp_getReverb((this->field_0x20a & 255)); */
        /* if (/ * beq * / 1) goto L_26e8; */
        /* goto L_26ec; */
        /* L_26e8:; */
        /* L_26ec:; */
        /* ((JAIZelBasic*)(base))->monsSeStart(18584); */
        /* field_0x224 = 0; */
        /* gravity = 0; */
        /* speedF = 0; */
        /* field_0x7d3 = 8; */
        /* L_2714:; */
        /* if (/ * beq * / 1) goto L_2760; */
        /* if ((this->field_0x7d3 & 255) == 10) goto L_2760; */
        /* if ((this->field_0x7d3 & 255) == 1) goto L_2760; */
        /* cLib_addCalc2(); */
        /* L_2760:; */
        /* if (/ * beq * / 1) goto L_27a4; */
/* } */

/* 00002864-00002908       .text demo_goal__10daNpc_P2_cFv */
/* void daNpc_P2_c::demo_goal() { */
        /* if (/ * beq * / 1) goto L_2784; */
        /* if (/ * bne * / 1) goto L_27a4; */
        /* L_2784:; */
        /* field_0x7dc = 0; */
        /* field_0x7e0 = 0; */
        /* field_0x7e4 = 0; */
        /* field_0x7d3 = 10; */
        /* goto L_27dc; */
        /* L_27a4:; */
        /* if (this->field_0x224 != this->field_0x24) goto L_27dc; */
        /* if (this->field_0x7d3 != 8) goto L_27dc; */
        /* field_0x7dc = 0; */
        /* field_0x7e0 = 0; */
        /* field_0x7e4 = 0; */
        /* field_0x7d3 = 9; */
        /* L_27dc:; */
        /* if (/ * beq * / 1) goto L_2844; */
        /* dComIfGp_getReverb((this->field_0x20a & 255)); */
        /* if (/ * beq * / 1) goto L_281c; */
        /* goto L_2820; */
/* } */

/* 00002908-00002978       .text goal_talkpos_talk__10daNpc_P2_cFv */
/* void daNpc_P2_c::goal_talkpos_talk() { */
    /* monsSeStart(arg1, arg2, -1, 0, arg5, arg6, arg7); */
    /* field_0x7f4 = 17; */
    /* speedF = 0; */
    /* ((daNpc_P2_c*)(monsSeStart(arg1, arg2, -1, 0, arg5, arg6, arg7)))->smoke_set(); */
    /* field_0x774 = 0; */
    /* field_0x778 = 0; */
    /* field_0x77c = 0; */
/* } */

/* 00002978-00002A20       .text treasure_wait__10daNpc_P2_cFv */
/* void daNpc_P2_c::treasure_wait() { */
    /* if (cLib_calcTimer<i>__FPi(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) == 0) { */
        /* if (this->field_0x7d3 == 10) goto L_28e0; */
        /* field_0x7dc = 0; */
        /* field_0x7e0 = 0; */
        /* field_0x7e4 = 0; */
        /* field_0x224 = 0; */
        /* gravity = 0; */
        /* speedF = 0; */
        /* ((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->cutEnd(); */
        /* field_0x7d3 = 1; */
    /* } */
    /* L_28e0:; */
    /* return _restgpr_29(((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->cutEnd()); */
/* } */

/* 00002A20-00002A88       .text treasure_wait_talk__10daNpc_P2_cFv */
/* void daNpc_P2_c::treasure_wait_talk() { */
    /* ((dEvent_manager_c*)(((dEvent_manager_c*)(getMySubstanceP(arg1, ((char*)&@stringBase0 + 233), 0, arg4)))->getMySubstanceP()))->getMySubstanceP(); */
/* } */

/* 00002A88-00002B18       .text demo_arrive__10daNpc_P2_cFv */
/* void daNpc_P2_c::demo_arrive() { */
        /* if (getMySubstanceP(arg1, (arg2 + 239), 1, arg4) != 0) goto L_29e0; */
        /* field_0x7ec = 0; */
        /* field_0x7f0 = 0; */
        /* goto L_29f8; */
        /* L_29e0:; */
        /* field_0x7e8 = 0; */
        /* field_0x7ec = 0; */
        /* field_0x7f0 = 0; */
        /* L_29f8:; */
        /* if (/ * bne * / 1) goto L_2a0c; */
        /* field_0x7fc = 0; */
        /* goto L_2a14; */
        /* L_2a0c:; */
        /* field_0x7fc = 0; */
        /* L_2a14:; */
        /* if (/ * bne * / 1) goto L_2a28; */
        /* field_0x7f8 = 0; */
        /* goto L_2a30; */
/* } */

/* 00002B18-00002B3C       .text wait01__10daNpc_P2_cFv */
/* void daNpc_P2_c::wait01() { */
    /* if (/ * bne * / 1) { */
        /* field_0x800 = 0; */
    /* } else { */
        /* field_0x800 = 0; */
    /* } */
/* } */

/* 00002B3C-00002BE8       .text zukotelescope__10daNpc_P2_cFv */
/* void daNpc_P2_c::zukotelescope() { */
    /* dComIfGp_getReverb((this->field_0x20a & 255)); */
    /* } */
    /* ((JAIZelBasic*)(base))->monsSeStart(18584); */
    /* field_0x224 = 0; */
    /* gravity = 0; */
    /* speedF = 0; */
    /* field_0x7d3 = 8; */
    /* return _restgpr_25(((JAIZelBasic*)(base))->monsSeStart(18584)); */


/* 00002BE8-00002D78       .text moccowait__10daNpc_P2_cFv */
/* void daNpc_P2_c::moccowait() { */
        /* __mi(); */
        /* PSVECSquareMag(); */
        /* if (/ * ble * / 1) goto L_2b9c; */
        /* L_2b9c:; */
        /* if (/ * beq * / 1) goto L_2be0; */
        /* if ((this->field_0x7d3 & 255) == 9) goto L_2bc0; */
        /* if ((this->field_0x7d3 & 255) != 10) goto L_2be0; */
        /* L_2bc0:; */
        /* field_0x7dc = 0; */
        /* field_0x7e0 = 0; */
        /* field_0x7e4 = 0; */
        /* field_0x7d3 = 10; */
        /* goto L_2c18; */
        /* L_2be0:; */
        /* if (this->field_0x224 != this->field_0x24) goto L_2c18; */
        /* if (this->field_0x7d3 != 8) goto L_2c18; */
        /* field_0x7dc = 0; */
        /* field_0x7e0 = 0; */
        /* field_0x7e4 = 0; */
        /* field_0x7d3 = 9; */
        /* L_2c18:; */
        /* if (/ * beq * / 1) goto L_2c80; */
        /* dComIfGp_getReverb((this->field_0x20a & 255)); */
        /* if (/ * beq * / 1) goto L_2c58; */
        /* goto L_2c5c; */
        /* L_2c58:; */
        /* L_2c5c:; */
        /* ((JAIZelBasic*)(base))->monsSeStart(18587); */
        /* field_0x7f4 = 17; */
        /* speedF = 0; */
        /* ((daNpc_P2_c*)(((JAIZelBasic*)(base))->monsSeStart(18587)))->smoke_set(); */
        /* goto L_2c94; */
/* } */

/* 00002D78-00002E38       .text talk01__10daNpc_P2_cFv */
/* void daNpc_P2_c::talk01() { */
    /* field_0x774 = 0; */
    /* field_0x778 = 0; */
    /* field_0x77c = 0; */
    /* if (cLib_calcTimer<i>__FPi() == 0) { */
        /* if (this->field_0x7d3 == 10) goto L_2d1c; */
        /* field_0x7dc = 0; */
        /* field_0x7e0 = 0; */
        /* field_0x7e4 = 0; */
        /* field_0x224 = 0; */
        /* gravity = 0; */
        /* speedF = 0; */
        /* ((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->cutEnd(); */
        /* field_0x7d3 = 1; */
    /* } */
    /* L_2d1c:; */
    /* return _restgpr_29(((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->cutEnd()); */
/* } */

/* 00002E38-00003030       .text intro_action__10daNpc_P2_cFPv */
/* void daNpc_P2_c::intro_action(void*) { */
        /* ((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMySubstanceP(arg1, ((char*)&@stringBase0 + 243), 4, arg4); */
        /* if (/ * beq * / 1) goto L_2d98; */
        /* if (strcmp(((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMySubstanceP(arg1, ((char*)&@stringBase0 + 243), 4, arg4), ((char*)&@stringBase0 + 248)) != 0) goto L_2d98; */
        /* field_0x7d3 = 17; */
        /* goto L_2e60; */
        /* L_2d98:; */
        /* if (/ * beq * / 1) goto L_2dc8; */
        /* if (strcmp(strcmp(((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMySubstanceP(arg1, ((char*)&@stringBase0 + 243), 4, arg4), ((char*)&@stringBase0 + 248)), ((char*)&@stringBase0 + 156)) != 0) goto L_2dc8; */
        /* field_0x7d3 = 7; */
        /* goto L_2e60; */
        /* L_2dc8:; */
        /* if (/ * beq * / 1) goto L_2df8; */
        /* if (strcmp(strcmp(strcmp(((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMySubstanceP(arg1, ((char*)&@stringBase0 + 243), 4, arg4), ((char*)&@stringBase0 + 248)), ((char*)&@stringBase0 + 156)), ((char*)&@stringBase0 + 254)) != 0) goto L_2df8; */
        /* field_0x7d3 = 18; */
        /* goto L_2e60; */
        /* L_2df8:; */
        /* if (/ * beq * / 1) goto L_2e28; */
        /* if (strcmp(strcmp(strcmp(strcmp(((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMySubstanceP(arg1, ((char*)&@stringBase0 + 243), 4, arg4), ((char*)&@stringBase0 + 248)), ((char*)&@stringBase0 + 156)), ((char*)&@stringBase0 + 254)), ((char*)&@stringBase0 + 260)) != 0) goto L_2e28; */
        /* field_0x7d3 = 19; */
        /* goto L_2e60; */
        /* L_2e28:; */
        /* if (/ * beq * / 1) goto L_2e58; */
        /* if (strcmp(strcmp(strcmp(strcmp(strcmp(((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMySubstanceP(arg1, ((char*)&@stringBase0 + 243), 4, arg4), ((char*)&@stringBase0 + 248)), ((char*)&@stringBase0 + 156)), ((char*)&@stringBase0 + 254)), ((char*)&@stringBase0 + 260)), ((char*)&@stringBase0 + 264)) != 0) goto L_2e58; */
        /* field_0x7d3 = 1; */
        /* goto L_2e60; */
        /* L_2e58:; */
        /* field_0x7d3 = 1; */
        /* L_2e60:; */
        /* return strcmp(strcmp(strcmp(strcmp(strcmp(((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMySubstanceP(arg1, ((char*)&@stringBase0 + 243), 4, arg4), ((char*)&@stringBase0 + 248)), ((char*)&@stringBase0 + 156)), ((char*)&@stringBase0 + 254)), ((char*)&@stringBase0 + 260)), ((char*)&@stringBase0 + 264)); */
/* } */

/* 00003030-00003158       .text wait_action__10daNpc_P2_cFPv */
/* void daNpc_P2_c::wait_action(void*) { */
    /* onSwitch(arg1); */
    /* return ((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->cutEnd(); */
/* } */

/* 00003158-00003520       .text _execute__10daNpc_P2_cFv */
/* bool daNpc_P2_c::_execute() { */
    /* _execute__10daNpc_P2_cFv: 无实义指令 */
/* } */

/* 00003520-000035A4       .text draw_item__10daNpc_P2_cFP8J3DModelSc */
/* void daNpc_P2_c::draw_item(J3DModel*, signed char) { */
    /* _savegpr_29(this, arg1, char, arg3, arg4, arg5, arg6, arg7); */
    /* ((dScnKy_env_light_c*)(((char*)&g_env_light + 0)))->setLightTevColorType(); */
    /* PSMTXCopy(); */
    /* return _restgpr_29(mDoExt_modelUpdateDL(PSMTXCopy(((char*)&now__14mDoMtx_stack_c + 0)))); */
/* } */

/* 000035A4-000035E8       .text drawDagger__10daNpc_P2_cFv */
/* void daNpc_P2_c::drawDagger() { */
    /* if (this->field_0x80a == 0) { */
    /* } */
    /* return ((daNpc_P2_c*)(draw_item(this->field_0x2bc, 12, arg3, arg4, arg5, arg6, arg7)))->draw_item(this->field_0x2c0, 14); */
/* } */

/* 000035E8-000036A4       .text drawHead__10daNpc_P2_cFv */
/* void daNpc_P2_c::drawHead() { */
    /* ((dScnKy_env_light_c*)(((char*)&g_env_light + 0)))->setLightTevColorType(this->field_0x2b8, (this + 268)); */
    /* if (m290 != 2) { */
        /* ((mDoExt_btpAnm*)((this + 676)))->entry(this->field_0x4, this->field_0x378); */
        /* PSMTXCopy((this->field_0x8c + 192), (this->field_0x2b8 + 36)); */
        /* mDoExt_modelUpdateDL(this->field_0x2b8); */
        /* ((J3DMaterialTable*)((this->field_0x4 + 88)))->removeTexNoAnimator(this->field_0x2ac); */
    /* } else { */
        /* PSMTXCopy((this->field_0x8c + 192), (this->field_0x2b8 + 36)); */
    /* } */
    /* return mDoExt_modelUpdateDL(this->field_0x2b8); */
/* } */

/* 000036A4-000037A8       .text drawShadow__10daNpc_P2_cFv */
/* void daNpc_P2_c::drawShadow() { */
        /* field_0x2c8 = dComIfGd_setShadow(this->field_0x2c8, 1, this->field_0x50); */
        /* if (this->field_0x2c8 == 0) goto L_36a4; */
        /* ((dDlst_shadowControl_c*)(((char*)&g_dComIfG_gameInfo + 24416)))->addReal(this->field_0x2c8, this->field_0x2b8); */
        /* if (this->field_0x80a == 0) goto L_3694; */
        /* ((dDlst_shadowControl_c*)(((char*)&g_dComIfG_gameInfo + 24416)))->addReal(this->field_0x2c8, this->field_0x2bc); */
        /* goto L_36a4; */
        /* L_3694:; */
        /* L_36a4:; */
        /* return ((dDlst_shadowControl_c*)(((char*)&g_dComIfG_gameInfo + 24416)))->addReal(this->field_0x2c8, this->field_0x2c0); */
/* } */

/* 000037A8-00003890       .text drawP2a__10daNpc_P2_cFv */
/* void daNpc_P2_c::drawP2a() { */
    /* ((dScnKy_env_light_c*)(((char*)&g_env_light + 0)))->setLightTevColorType(this->field_0x50, (this + 268)); */
    /* ((mDoExt_McaMorf*)(this->field_0x29c))->entryDL(); */
    /* drawDagger(); */
    /* drawHead(); */
    /* if (((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->isEventBit(2056) == 0) { */
        /* draw_item(this->field_0x2c4, 12); */
    /* } */
    /* drawShadow(); */
    /* if (((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->isEventBit(2056) == 0) { */
        /* if (this->field_0x2c8 != 0) goto L_3770; */
        /* ((dDlst_shadowControl_c*)(((char*)&g_dComIfG_gameInfo + 24416)))->addReal(this->field_0x2c8, this->field_0x2c4); */
    /* } */
    /* L_3770:; */
    /* return dSnap_RegistFig(118, this, C_@4283); */
/* } */

/* 00003890-00003948       .text drawP2b__10daNpc_P2_cFv */
/* void daNpc_P2_c::drawP2b() { */
    /* ((dScnKy_env_light_c*)(((char*)&g_env_light + 0)))->setLightTevColorType(this->field_0x50, (this + 268)); */
    /* ((mDoExt_McaMorf*)(this->field_0x29c))->entryDL(((dRes_control_c*)(((char*)&m_heapsize__10daNpc_P2_c + 12)))->getRes(((char*)&m_heapsize__10daNpc_P2_c + 124), ((char*)&g_dComIfG_gameInfo + -16460), 64)); */
    /* drawDagger(); */
    /* drawHead(); */
    /* drawShadow(); */
    /* return dSnap_RegistFig(119, this); */
/* } */

/* 00003948-00003A64       .text drawP2c__10daNpc_P2_cFv */
/* void daNpc_P2_c::drawP2c() { */
    /* ((dScnKy_env_light_c*)(((char*)&g_env_light + 0)))->setLightTevColorType(this->field_0x50, (this + 268)); */
    /* ((mDoExt_McaMorf*)(this->field_0x29c))->entryDL(((dRes_control_c*)(((char*)&m_heapsize__10daNpc_P2_c + 12)))->getRes(((char*)&m_heapsize__10daNpc_P2_c + 124), ((char*)&g_dComIfG_gameInfo + -16460), 64)); */
    /* drawDagger(); */
    /* drawHead(); */
    /* ((dScnKy_env_light_c*)(((char*)&g_env_light + 0)))->setLightTevColorType(this->field_0x50, (this + 268)); */
    /* PSMTXCopy((this->field_0x8c + 96), (this->field_0x50 + 36)); */
    /* ((mDoExt_McaMorf*)(this->field_0x2a0))->updateDL(); */
    /* drawShadow(); */
    /* if (this->field_0x2c8 != 0) { */
        /* ((dDlst_shadowControl_c*)(((char*)&g_dComIfG_gameInfo + 24416)))->addReal(this->field_0x2c8, this->field_0x50); */
    /* } */
    /* return dSnap_RegistFig(120, this); */
/* } */

/* 00003A64-00003AF0       .text _draw__10daNpc_P2_cFv */
/* bool daNpc_P2_c::_draw() { */
        /* ((dScnKy_env_light_c*)(((char*)&g_env_light + 0)))->settingTevStruct(0, (this + 504), (this + 268)); */
        /* if (m290 == 1) goto L_39d8; */
        /* if (/ * bge * / 1) goto L_39c0; */
        /* if (m290 >= 0) goto L_39cc; */
        /* goto L_39ec; */
        /* L_39c0:; */
        /* if (m290 >= 3) goto L_39ec; */
        /* goto L_39e4; */
        /* L_39cc:; */
        /* drawP2a(); */
        /* goto L_39ec; */
        /* L_39d8:; */
        /* drawP2b(); */
        /* goto L_39ec; */
        /* L_39e4:; */
        /* drawP2c(); */
        /* L_39ec:; */
        /* return 1; */
/* } */

/* 00003AF0-00003B10       .text CreateHeap_CB__FP10fopAc_ac_c */
/* static BOOL CreateHeap_CB(fopAc_ac_c* i_this) { */
    /* static_cast<daNpc_P2_c*>(i_this)->_createHeap(); */
    /* return TRUE; */
/* } */

/* 00003B10-00003B58       .text getArg__10daNpc_P2_cFv */
/* void daNpc_P2_c::getArg() { */
    /* u32 prm = *(u32*)(this + 176); */
    /* *(unsigned char*)(this + 656) = prm & 3; */
    /* *(unsigned char*)(this + 657) = (prm >> 2) & 0xFF; */
    /* *(unsigned char*)(this + 658) = (prm >> 10) & 0xFF; */
    /* if (*(unsigned char*)(this + 656) == 3) { */
        /* *(unsigned char*)(this + 656) = 0; */
    /* } */
    /* if (*(unsigned char*)(this + 657) == 255) { */
        /* *(unsigned char*)(this + 657) = 0; */
    /* } */
/* } */

/* 00003B58-00004034       .text _createHeap__10daNpc_P2_cFv */
/* void daNpc_P2_c::_createHeap() { */
        /* _savegpr_26(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* ((dRes_control_c*)(((char*)&m_heapsize__10daNpc_P2_c + 12)))->getRes(38); */
        /* if (/ * bne * / 1) goto L_3ae8; */
        /* ((JUTAssertion*)(((JUTAssertion*)(((dRes_control_c*)(((char*)&m_heapsize__10daNpc_P2_c + 12)))->getRes(38)))->getSDevice()))->showAssert(((char*)&@stringBase0 + 0), 2545, ((char*)&@stringBase0 + 400)); */
        /* OSPanic(((char*)&@stringBase0 + 0), 2545, ((char*)&@stringBase0 + 37)); */
        /* L_3ae8:; */
        /* __nw(180); */
        /* if (/ * beq * / 1) goto L_3b4c; */
        /* L_3b4c:; */
        /* field_0x29c = __ct(__nw(180), 1); */
        /* if (this->field_0x29c == 0) goto L_3b68; */
        /* if (this->field_0x50 != 0) goto L_3b78; */
        /* L_3b68:; */
        /* field_0x29c = 0; */
        /* return 0; */
        /* L_3b78:; */
        /* ((dRes_control_c*)(((char*)&m_heapsize__10daNpc_P2_c + 12)))->getRes(((char*)&m_heapsize__10daNpc_P2_c + 452)); */
        /* if (/ * bne * / 1) goto L_3bd0; */
        /* ((JUTAssertion*)(((JUTAssertion*)(((dRes_control_c*)(((char*)&m_heapsize__10daNpc_P2_c + 12)))->getRes(((char*)&m_heapsize__10daNpc_P2_c + 452))))->getSDevice()))->showAssert(((char*)&@stringBase0 + 0), 2570, ((char*)&@stringBase0 + 415)); */
        /* OSPanic(((char*)&@stringBase0 + 0), 2570, ((char*)&@stringBase0 + 37)); */
        /* L_3bd0:; */
        /* if (m290 == 2) goto L_3c34; */
        /* field_0x2b8 = mDoExt_J3DModel(OSPanic(((char*)&@stringBase0 + 0), 2570, ((char*)&@stringBase0 + 37))); */
        /* if (this->field_0x2b8 != 0) goto L_3c08; */
        /* return 0; */
        /* L_3c08:; */
        /* if (((daNpc_P2_c*)(_savegpr_26(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->initTexPatternAnm(0) != 0) goto L_3c60; */
        /* return 0; */
        /* L_3c34:; */
        /* field_0x2b8 = mDoExt_J3DModel(0, 0); */
        /* if (this->field_0x2b8 != 0) goto L_3c60; */
        /* return 0; */
        /* L_3c60:; */
        /* ((dRes_control_c*)(((char*)&m_heapsize__10daNpc_P2_c + 12)))->getRes(42); */
        /* if (/ * bne * / 1) goto L_3cac; */
        /* ((JUTAssertion*)(((JUTAssertion*)(((dRes_control_c*)(((char*)&m_heapsize__10daNpc_P2_c + 12)))->getRes(42)))->getSDevice()))->showAssert(((char*)&@stringBase0 + 0), 2599, ((char*)&@stringBase0 + 434)); */
        /* L_3cac:; */
        /* field_0x2bc = mDoExt_J3DModel(OSPanic(((char*)&@stringBase0 + 0), 2599, ((char*)&@stringBase0 + 37)), 0); */
        /* if (this->field_0x2bc != 0) goto L_3cd8; */
        /* return 0; */
        /* L_3cd8:; */
        /* ((dRes_control_c*)(((char*)&m_heapsize__10daNpc_P2_c + 12)))->getRes(39); */
        /* if (/ * bne * / 1) goto L_3d28; */
        /* ((JUTAssertion*)(((JUTAssertion*)(((dRes_control_c*)(((char*)&m_heapsize__10daNpc_P2_c + 12)))->getRes(39)))->getSDevice()))->showAssert(((char*)&@stringBase0 + 0), 2606, ((char*)&@stringBase0 + 434)); */
        /* OSPanic(((char*)&@stringBase0 + 0), 2606, ((char*)&@stringBase0 + 37)); */
        /* L_3d28:; */
        /* field_0x2c0 = mDoExt_J3DModel(((dRes_control_c*)(((char*)&m_heapsize__10daNpc_P2_c + 12)))->getRes(39), 0); */
        /* if (this->field_0x2c0 != 0) goto L_3d54; */
        /* return 0; */
        /* L_3d54:; */
        /* if (m290 != 2) goto L_3e48; */
        /* ((dRes_control_c*)(((char*)&m_heapsize__10daNpc_P2_c + 12)))->getRes(41); */
        /* if (/ * bne * / 1) goto L_3dac; */
        /* ((JUTAssertion*)(((JUTAssertion*)(((dRes_control_c*)(((char*)&m_heapsize__10daNpc_P2_c + 12)))->getRes(41)))->getSDevice()))->showAssert(((char*)&@stringBase0 + 0), 2614, ((char*)&@stringBase0 + 455)); */
        /* OSPanic(((char*)&@stringBase0 + 0), 2614, ((char*)&@stringBase0 + 37)); */
        /* L_3dac:; */
        /* __nw(180); */
        /* if (/ * beq * / 1) goto L_3e24; */
        /* L_3e24:; */
        /* field_0x2a0 = __ct(((dRes_control_c*)(((char*)&m_heapsize__10daNpc_P2_c + 12)))->getRes(35), 1, ((dRes_control_c*)(((char*)&m_heapsize__10daNpc_P2_c + 12)))->getRes(39), 0, 0, ((dRes_control_c*)(((char*)&m_heapsize__10daNpc_P2_c + 12)))->getRes(35), 0, 0); */
        /* if (this->field_0x2a0 == 0) goto L_3e40; */
        /* if (this->field_0x50 != 0) goto L_3e48; */
        /* L_3e40:; */
        /* return 0; */
        /* L_3e48:; */
        /* if (m290 != 0) goto L_3ecc; */
        /* ((dRes_control_c*)(((char*)&m_heapsize__10daNpc_P2_c + 12)))->getRes(40); */
        /* if (/ * bne * / 1) goto L_3ea0; */
        /* ((JUTAssertion*)(((JUTAssertion*)(((dRes_control_c*)(((char*)&m_heapsize__10daNpc_P2_c + 12)))->getRes(40)))->getSDevice()))->showAssert(((char*)&@stringBase0 + 0), 2633, ((char*)&@stringBase0 + 474)); */
        /* OSPanic(((char*)&@stringBase0 + 0), 2633, ((char*)&@stringBase0 + 37)); */
        /* L_3ea0:; */
        /* field_0x2c4 = mDoExt_J3DModel(((dRes_control_c*)(((char*)&m_heapsize__10daNpc_P2_c + 12)))->getRes(39), 0); */
        /* if (this->field_0x2c4 != 0) goto L_3ecc; */
        /* return 0; */
        /* L_3ecc:; */
        /* field_0x14 = _savegpr_26(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* goto L_3f1c; */
        /* L_3ee8:; */
        /* if ((0 & 65535) == 4) goto L_3efc; */
        /* if ((0 & 65535) != 2) goto L_3f18; */
        /* L_3efc:; */
        /* field_0x8 = 0; */
        /* L_3f18:; */
        /* L_3f1c:; */
        /* if (((0 + 1) & 65535) < this->field_0x28) goto L_3ee8; */
        /* return _restgpr_26(1, ((char*)&nodeCallBack__FP7J3DNodei + 0), (0 + 1)); */
/* } */

/* 00004034-0000476C       .text createInit__10daNpc_P2_cFv */
/* void daNpc_P2_c::createInit() { */
        /* _savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* if (m290 != 1) goto L_3fac; */
        /* if (strcmp(((char*)&g_dComIfG_gameInfo + 20788), ((char*)&@stringBase0 + 506)) != 0) goto L_3fac; */
        /* L_3fac:; */
        /* ((mDoExt_McaMorf*)(this->field_0x29c))->calc(); */
        /* cullMtx = (this->field_0x50 + 36); */
        /* ((dBgS_AcchCir*)((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1344)))->SetWall(); */
        /* ((dBgS_Acch*)((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 892)))->Set((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 504), (_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 484), _savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7), 1, (_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1344), (_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 544), (_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 516)); */
        /* field_0x26d = 169; */
        /* field_0x26f = 169; */
        /* if (m290 != 1) goto L_40f0; */
        /* if (this->field_0x291 != 0) goto L_4088; */
        /* if (((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->isEventBit(2056) != 0) goto L_40f0; */
        /* if (((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->isEventBit(1824) == 0) goto L_40f0; */
        /* field_0x1fc = 0; */
        /* field_0x200 = 0; */
        /* goto L_40f0; */
        /* L_4088:; */
        /* if (((char*)&l_HIO + 0) != 1) goto L_40f0; */
        /* if (((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->isEventBit(3842) != 0) goto L_40f0; */
        /* if (((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->isEventBit(6660) == 0) goto L_40f0; */
        /* field_0x1fc = 0; */
        /* field_0x200 = 0; */
        /* L_40f0:; */
        /* field_0x280 = 10; */
        /* gravity = 0; */
        /* ((dNpc_EventCut_c*)((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 768)))->setActorInfo(((C_@2100 + 0) + 760), _savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* if (m290 != 1) goto L_4480; */
        /* if (strcmp(((char*)&g_dComIfG_gameInfo + 20788), ((char*)&@stringBase0 + 506)) != 0) goto L_43f0; */
        /* if (this->field_0x291 != 0) goto L_42ac; */
        /* if (((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->isEventBit(2056) != 0) goto L_421c; */
        /* if (__ptmf_cmpr((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1988)) == 0) goto L_450c; */
        /* if (__ptmf_test((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1988)) == 0) goto L_41e4; */
        /* field_0x808 = -1; */
        /* __ptmf_scall(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7), 0); */
        /* L_41e4:; */
        /* field_0x808 = 0; */
        /* __ptmf_scall(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7), 0); */
        /* goto L_450c; */
        /* L_421c:; */
        /* if (__ptmf_cmpr((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1988)) == 0) goto L_450c; */
        /* if (__ptmf_test((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1988)) == 0) goto L_4274; */
        /* field_0x808 = -1; */
        /* __ptmf_scall(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7), 0); */
        /* L_4274:; */
        /* field_0x808 = 0; */
        /* __ptmf_scall(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7), 0); */
        /* goto L_450c; */
        /* L_42ac:; */
        /* if (0 != 1) goto L_450c; */
        /* if (((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->isEventBit(3842) != 0) goto L_4360; */
        /* if (__ptmf_cmpr((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1988)) == 0) goto L_450c; */
        /* if (__ptmf_test((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1988)) == 0) goto L_4328; */
        /* field_0x808 = -1; */
        /* __ptmf_scall(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7), 0); */
        /* L_4328:; */
        /* field_0x808 = 0; */
        /* __ptmf_scall(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7), 0); */
        /* goto L_450c; */
        /* L_4360:; */
        /* if (__ptmf_cmpr((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1988)) == 0) goto L_450c; */
        /* if (__ptmf_test((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1988)) == 0) goto L_43b8; */
        /* field_0x808 = -1; */
        /* __ptmf_scall(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7), 0); */
        /* L_43b8:; */
        /* field_0x808 = 0; */
        /* __ptmf_scall(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7), 0); */
        /* goto L_450c; */
        /* L_43f0:; */
        /* if (__ptmf_cmpr((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1988)) == 0) goto L_450c; */
        /* if (__ptmf_test((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1988)) == 0) goto L_4448; */
        /* field_0x808 = -1; */
        /* __ptmf_scall(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7), 0); */
        /* L_4448:; */
        /* field_0x808 = 0; */
        /* __ptmf_scall(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7), 0); */
        /* goto L_450c; */
        /* L_4480:; */
        /* if (__ptmf_cmpr((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1988)) == 0) goto L_450c; */
        /* if (__ptmf_test((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1988)) == 0) goto L_44d8; */
        /* field_0x808 = -1; */
        /* __ptmf_scall(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7), 0); */
        /* L_44d8:; */
        /* field_0x808 = 0; */
        /* __ptmf_scall(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7), 0); */
        /* L_450c:; */
        /* field_0x704 = 0; */
        /* field_0x708 = 0; */
        /* field_0x70c = 0; */
        /* field_0x6f8 = 0; */
        /* field_0x6fc = 0; */
        /* field_0x700 = 0; */
        /* ((dCcD_Stts*)((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1408)))->Init(255, 255, _savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* ((dCcD_Cyl*)((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1468)))->Set(((char*)&dNpc_cyl_src + 0)); */
        /* field_0x600 = (_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1408); */
        /* field_0x7d1 = 1; */
        /* field_0x7d3 = 1; */
        /* field_0x7d4 = 0; */
        /* ((daNpc_P2_c*)(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->setTexAnm(); */
        /* ((daNpc_P2_c*)(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->setAnm(); */
        /* if (0 == 65535) goto L_4634; */
        /* fopAcIt_Judge(((char*)&fpcSch_JudgeByID__FPvPv + 0)); */
        /* if (/ * beq * / 1) goto L_4634; */
        /* if (fopAc_IsActor(fopAcIt_Judge(((char*)&fpcSch_JudgeByID__FPvPv + 0))) == 0) goto L_4634; */
        /* if (this->field_0x8 != 59) goto L_4634; */
        /* if (m290 != 0) goto L_4618; */
        /* if (((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->isEventBit(2056) != 0) goto L_4618; */
        /* field_0x748 = (this->field_0x1de - this->field_0x1de); */
        /* field_0x2d7 = 1; */
        /* field_0x2d8 = 1; */
        /* goto L_4634; */
        /* L_4618:; */
        /* if (m290 != 2) goto L_4634; */
        /* field_0x748 = (this->field_0x1de - this->field_0x1de); */
        /* L_4634:; */
        /* cM_rndF(this->field_0x1de); */
        /* field_0x74c = 0; */
        /* field_0x7dc = 0; */
        /* field_0x7e0 = 0; */
        /* field_0x7e4 = 0; */
        /* return _restgpr_28(cM_rndF(this->field_0x1de)); */
/* } */

/* 0000476C-0000492C       .text _create__10daNpc_P2_cFv */
/* cPhs_State daNpc_P2_c::_create() { */
        /* _savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* if (/ * bne * / 1) goto L_47c4; */
        /* if (/ * beq * / 1) goto L_47b8; */
        /* __ct(); */
        /* field_0x2a4 = 0; */
        /* field_0x2a8 = 0; */
        /* field_0x2a4 = 0; */
        /* field_0x2b0 = 0; */
        /* field_0x2d8 = 0; */
        /* field_0x2d7 = 0; */
        /* field_0x308 = 0; */
        /* field_0x30c = 0; */
        /* field_0x368 = 0; */
        /* __ct(); */
        /* field_0x10 = 0; */
        /* field_0x14 = 0; */
        /* field_0x20 = 0; */
        /* field_0x18 = 1; */
        /* __ct(); */
        /* field_0x598 = 0; */
        /* __ct(); */
        /* field_0x598 = 0; */
        /* field_0x59c = 0; */
        /* __ct(); */
        /* field_0x114 = 0; */
        /* field_0x110 = 0; */
        /* field_0x12c = 0; */
        /* field_0x114 = 0; */
        /* field_0x12c = 0; */
        /* field_0x3c = 0; */
        /* field_0x114 = 0; */
        /* field_0x12c = 0; */
        /* __ct((actor_condition + 1876)); */
        /* L_47b8:; */
        /* L_47c4:; */
        /* if (dComIfG_resLoad((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 660), ((char*)&m_arc_name__10daNpc_P2_c + 0)) != 4) goto L_4824; */
        /* ((daNpc_P2_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->getArg(); */
        /* if (fopAcM_entrySolidHeap(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7), ((char*)&CreateHeap_CB__FP10fopAc_ac_c + 0), ((char*)&m_heapsize__10daNpc_P2_c + 0)) != 0) goto L_481c; */
        /* return 5; */
        /* L_481c:; */
        /* ((daNpc_P2_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->createInit(); */
        /* L_4824:; */
        /* return _restgpr_29(dComIfG_resLoad((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 660), ((char*)&m_arc_name__10daNpc_P2_c + 0))); */
/* } */

/* 00004CDC-00004D54       .text _delete__10daNpc_P2_cFv */
/* bool daNpc_P2_c::_delete() { */
    /* dComIfG_resDelete((this + 660), ((char*)&m_arc_name__10daNpc_P2_c + 0), arg2); */
    /* ((JAIZelBasic*)(base))->seDeleteObject((this + 1968)); */
    /* if (heap != 0) { */
        /* ((mDoExt_McaMorf*)(this->field_0x29c))->stopZelAnime(); */
    /* } */
    /* return 1; */
/* } */

/* 00004D54-00004D74       .text daNpc_P2Create__FPv */
/* static cPhs_State daNpc_P2Create(void* i_this) { */
    /* return ((daNpc_P2_c*)i_this)->_create(); */
/* } */

/* 00004D74-00004D98       .text daNpc_P2Delete__FPv */
/* static BOOL daNpc_P2Delete(void* i_this) { */
    /* return ((daNpc_P2_c*)i_this)->_delete(); */
/* } */

/* 00004D98-00004DBC       .text daNpc_P2Execute__FPv */
/* static BOOL daNpc_P2Execute(void* i_this) { */
    /* return ((daNpc_P2_c*)i_this)->_execute(); */
/* } */

/* 00004DBC-00004DE0       .text daNpc_P2Draw__FPv */
/* static BOOL daNpc_P2Draw(void* i_this) { */
    /* return ((daNpc_P2_c*)i_this)->_draw(); */
/* } */

/* 00004DE0-00004DE8       .text daNpc_P2IsDelete__FPv */
/* static BOOL daNpc_P2IsDelete(void*) { */
    /* return 1; */
/* } */

/* 00005238-00005528       .text cutProc__10daNpc_P2_cFv */
/* void daNpc_P2_c::cutProc() { */
    /* _savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
    /* ((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMyStaffId(((char*)&@stringBase0 + 190), 0, 0); */
/* } */

/* 00005528-000055DC       .text cutTalkStart__10daNpc_P2_cFi */
/* void daNpc_P2_c::cutTalkStart(int) { */
    /* cutTalkStart__10daNpc_P2_cFi: 无实义指令 */
/* } */

/* 000055DC-0000562C       .text cutTalkProc__10daNpc_P2_cFi */
/* void daNpc_P2_c::cutTalkProc(int) { */
    /* if ((talk(1) & 65535) == 18) { */
    /* } */
    /* return ((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->cutEnd(int); */
/* } */

/* 0000562C-000056F4       .text cutRideSwitchStart__10daNpc_P2_cFi */
/* void daNpc_P2_c::cutRideSwitchStart(int) { */
    /* _savegpr_28(this, int, arg2, arg3, arg4, arg5, arg6, arg7); */
    /* if (((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMySubstanceP() == 0) { */
        /* field_0x224 = 0; */
    /* } else { */
        /* field_0x224 = 0; */
    /* } */
    /* if (((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMySubstanceP() == 0) { */
        /* gravity = 0; */
    /* } else { */
        /* gravity = 0; */
    /* } */
    /* field_0x72c = 1; */
    /* field_0x7d3 = 9; */
    /* return _restgpr_28(C_@4854, C_@4853); */
/* } */

/* 000056F4-0000589C       .text cutRideSwitchProc__10daNpc_P2_cFi */
/* void daNpc_P2_c::cutRideSwitchProc(int) { */
        /* _savegpr_28(this, int, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* fopAcM_searchActorAngleY(_savegpr_28(this, int, arg2, arg3, arg4, arg5, arg6, arg7), fopAcIt_Judge(((char*)&fpcSch_JudgeForPName__FPvPv + 0))); */
        /* __mi(); */
        /* PSVECSquareMag(); */
        /* if (/ * ble * / 1) goto L_5b4; */
/* } */

/* 0000589C-00005914       .text cutRunWaitStart__10daNpc_P2_cFi */
/* void daNpc_P2_c::cutRunWaitStart(int) { */
    /* ((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMySubstanceP(int, ((char*)&@stringBase0 + 227), 3, arg4); */
/* } */

/* 00005914-000059B0       .text cutRunWaitProc__10daNpc_P2_cFi */
/* void daNpc_P2_c::cutRunWaitProc(int) { */
        /* field_0x774 = 0; */
        /* field_0x778 = 0; */
        /* field_0x77c = 0; */
        /* if (this->field_0x7d3 != 6) goto L_768; */
/* } */

/* 000059B0-00005BD0       .text searchNearLift__10daNpc_P2_cFPvPv */
/* void daNpc_P2_c::searchNearLift(void*, void*) { */
        /* if (fopAc_IsActor(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)) == 0) goto L_974; */
        /* if (this->field_0x8 != 48) goto L_974; */
        /* PSVECSquareMag(); */
        /* if (/ * ble * / 1) goto L_828; */
        /* L_828:; */
        /* if (/ * bne * / 1) goto L_850; */
        /* field_0x714 = 0; */
        /* field_0x718 = 0; */
        /* field_0x71c = 0; */
        /* goto L_974; */
        /* L_850:; */
        /* __mi(); */
        /* PSVECSquareMag(); */
        /* if (/ * ble * / 1) goto L_8d0; */
        /* goto L_8d4; */
        /* L_8d0:; */
        /* L_8d4:; */
        /* __mi(); */
        /* PSVECSquareMag(); */
        /* if (/ * ble * / 1) goto L_950; */
        /* L_950:; */
        /* if (/ * bge * / 1) goto L_974; */
        /* field_0x714 = 0; */
        /* field_0x718 = 0; */
        /* field_0x71c = 0; */
        /* field_0x720 = _savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* L_974:; */
        /* return _restgpr_29(0); */
/* } */

/* 00005BD0-00005CD4       .text cutJumpToLiftStart__10daNpc_P2_cFi */
/* void daNpc_P2_c::cutJumpToLiftStart(int) { */
    /* cutJumpToLiftStart__10daNpc_P2_cFi: 无实义指令 */
/* } */

/* 00005CD4-00006064       .text cutJumpToLiftProc__10daNpc_P2_cFi */
/* void daNpc_P2_c::cutJumpToLiftProc(int) { */
    /* cutJumpToLiftProc__10daNpc_P2_cFi: 无实义指令 */
/* } */

/* 00006064-00006284       .text searchNearRope__10daNpc_P2_cFPvPv */
/* void daNpc_P2_c::searchNearRope(void*, void*) { */
        /* if (fopAc_IsActor(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)) == 0) goto L_1028; */
        /* if (this->field_0x8 != 453) goto L_1028; */
        /* PSVECSquareMag(); */
        /* if (/ * ble * / 1) goto L_edc; */
        /* L_edc:; */
        /* if (/ * bne * / 1) goto L_f04; */
        /* field_0x714 = 0; */
        /* field_0x718 = 0; */
        /* field_0x71c = 0; */
        /* goto L_1028; */
        /* L_f04:; */
        /* __mi(); */
        /* PSVECSquareMag(); */
        /* if (/ * ble * / 1) goto L_f84; */
        /* goto L_f88; */
        /* L_f84:; */
        /* L_f88:; */
        /* __mi(); */
        /* PSVECSquareMag(); */
        /* if (/ * ble * / 1) goto L_1004; */
/* } */

/* 00006284-00006388       .text cutLiftToRopeStart__10daNpc_P2_cFi */
/* void daNpc_P2_c::cutLiftToRopeStart(int) { */
    /* _savegpr_26(this, int, arg2, arg3, arg4, arg5, arg6, arg7); */
/* } */

/* 00006388-000065B8       .text cutLiftToRopeProc__10daNpc_P2_cFi */
/* void daNpc_P2_c::cutLiftToRopeProc(int) { */
        /* fopAcIt_Judge(((char*)&searchNearRope__10daNpc_P2_cFPvPv + 0), _savegpr_29(this, int, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* __mi(); */
        /* PSVECSquareMag(); */
        /* if (/ * ble * / 1) goto L_1240; */
        /* L_1240:; */
        /* if (/ * beq * / 1) goto L_12ac; */
/* } */

/* 000065B8-00006B08       .text cutRopeTalkStart__10daNpc_P2_cFi */
/* void daNpc_P2_c::cutRopeTalkStart(int) { */
    /* _savegpr_28(this, int, arg2, arg3, arg4, arg5, arg6, arg7); */
    /* if (((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMySubstanceP() == 0) { */
    /* } */
    /* if (((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMySubstanceP() == 0) { */
        /* field_0x72c = 0; */
    /* } else { */
        /* field_0x72c = 1; */
    /* } */
    /* field_0x7d3 = 12; */
    /* ((daNpc_P2_c*)(_savegpr_28(this, int, arg2, arg3, arg4, arg5, arg6, arg7)))->talkInit(); */
    /* field_0x7c0 = 1; */
/* } */

/* 00006B08-00007314       .text cutRopeTalkProc__10daNpc_P2_cFi */
/* void daNpc_P2_c::cutRopeTalkProc(int) { */
    /* _savegpr_26(this, int, arg2, arg3, arg4, arg5, arg6, arg7); */
/* } */

/* 00007314-0000743C       .text cutRopeToLiftStart__10daNpc_P2_cFi */
/* void daNpc_P2_c::cutRopeToLiftStart(int) { */
    /* _savegpr_26(this, int, arg2, arg3, arg4, arg5, arg6, arg7); */
    /* if (((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMySubstanceP() == 0) { */
        /* field_0x7fc = 0; */
    /* } else { */
        /* field_0x7fc = 0; */
    /* } */
    /* if (((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMySubstanceP() == 0) { */
        /* field_0x7f8 = 0; */
    /* } else { */
        /* field_0x7f8 = 0; */
    /* } */
    /* if (((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMySubstanceP() == 0) { */
        /* field_0x800 = 0; */
    /* } else { */
        /* field_0x800 = 0; */
    /* } */
    /* field_0x204 = 0; */
    /* field_0x208 = 0; */
    /* field_0x72c = 1; */
    /* field_0x7d3 = 9; */
    /* field_0x224 = 0; */
    /* gravity = 0; */
    /* speedF = 0; */
    /* return _restgpr_26(((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMySubstanceP()); */
/* } */

/* 0000743C-00007694       .text cutRopeToLiftProc__10daNpc_P2_cFi */
/* void daNpc_P2_c::cutRopeToLiftProc(int) { */
        /* fopAcIt_Judge(((char*)&searchNearLift__10daNpc_P2_cFPvPv + 0), _savegpr_29(this, int, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* __mi(); */
        /* PSVECSquareMag(); */
        /* if (/ * ble * / 1) goto L_22e4; */
        /* L_22e4:; */
        /* field_0x774 = 0; */
        /* field_0x778 = 0; */
        /* field_0x77c = 0; */
        /* if (/ * beq * / 1) goto L_2374; */
        /* dComIfGp_getReverb((this->field_0x20a & 255)); */
        /* if (_savegpr_29(this, int, arg2, arg3, arg4, arg5, arg6, arg7) == 0) goto L_2354; */
        /* goto L_2358; */
        /* L_2354:; */
        /* L_2358:; */
        /* ((JAIZelBasic*)(base))->monsSeStart(18587, (_savegpr_29(this, int, arg2, arg3, arg4, arg5, arg6, arg7) + 608), -1, 0, dComIfGp_getReverb((this->field_0x20a & 255))); */
        /* field_0x7f4 = 17; */
        /* ((daNpc_P2_c*)(_savegpr_29(this, int, arg2, arg3, arg4, arg5, arg6, arg7)))->smoke_set(); */
        /* goto L_2388; */
        /* L_2374:; */
        /* L_2388:; */
        /* if (/ * beq * / 1) goto L_23d8; */
        /* if ((this->field_0x7d3 & 255) == 9) goto L_23ac; */
        /* if ((this->field_0x7d3 & 255) != 10) goto L_23d8; */
        /* L_23ac:; */
        /* speedF = 0; */
        /* field_0x224 = 0; */
        /* gravity = 0; */
        /* field_0x7dc = 0; */
        /* field_0x7e0 = 0; */
        /* field_0x7e4 = 0; */
        /* field_0x7d3 = 10; */
        /* L_23d8:; */
        /* if (cLib_calcTimer<i>__FPi((_savegpr_29(this, int, arg2, arg3, arg4, arg5, arg6, arg7) + 2036)) != 0) goto L_2440; */
        /* if (this->field_0x7d3 != 10) goto L_2440; */
        /* field_0x7d3 = 1; */
        /* field_0x7dc = 0; */
        /* field_0x7e0 = 0; */
        /* field_0x7e4 = 0; */
        /* field_0x714 = 0; */
        /* field_0x718 = 0; */
        /* field_0x71c = 0; */
        /* L_2440:; */
        /* return _restgpr_29(((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->cutEnd()); */
/* } */

/* 00007694-00007808       .text cutJumpToGoalStart__10daNpc_P2_cFi */
/* void daNpc_P2_c::cutJumpToGoalStart(int) { */
    /* _savegpr_25(this, int, arg2, arg3, arg4, arg5, arg6, arg7); */
    /* ((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMySubstanceP(); */
/* } */

/* 00007808-00007B3C       .text cutJumpToGoalProc__10daNpc_P2_cFi */
/* void daNpc_P2_c::cutJumpToGoalProc(int) { */
    /* _savegpr_29(this, int, arg2, arg3, arg4, arg5, arg6, arg7); */
/* } */

/* 00007B3C-00007D08       .text cutJumpStart__10daNpc_P2_cFi */
/* void daNpc_P2_c::cutJumpStart(int) { */
    /* _savegpr_25(this, int, arg2, arg3, arg4, arg5, arg6, arg7); */
/* } */

/* 00007D08-00007F70       .text cutJumpProc__10daNpc_P2_cFi */
/* void daNpc_P2_c::cutJumpProc(int) { */
    /* _savegpr_29(this, int, arg2, arg3, arg4, arg5, arg6, arg7); */
/* } */

/* 00007F70-000080B4       .text cutSetAnmStart__10daNpc_P2_cFi */
/* void daNpc_P2_c::cutSetAnmStart(int) { */
    /* cutSetAnmStart__10daNpc_P2_cFi: 无实义指令 */
/* } */

/* 000080B4-00008114       .text cutSetAnmProc__10daNpc_P2_cFi */
/* void daNpc_P2_c::cutSetAnmProc(int) { */
    /* if (this->field_0x5d != 0) { */
        /* if (/ * beq * / 1) goto L_2eb0; */
    /* } */
    /* L_2eb0:; */
    /* if (0 == 0) { */
    /* } */
    /* return ((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->cutEnd(int); */
/* } */

/* 00008114-00008154       .text cutSwOnStart__10daNpc_P2_cFi */
/* void daNpc_P2_c::cutSwOnStart(int) { */
    /* if (this->field_0x292 != 255) { */
    /* } */
    /* return ((dSv_info_c*)(((char*)&g_dComIfG_gameInfo + 0)))->onSwitch(this->field_0x292); */
/* } */

/* 00008154-000081B4       .text cutSwOnProc__10daNpc_P2_cFi */
/* void daNpc_P2_c::cutSwOnProc(int) { */
        /* if (this->field_0x292 == 255) goto L_2f50; */
/* } */

/* 000081B4-000081F4       .text cutSwOffStart__10daNpc_P2_cFi */
/* void daNpc_P2_c::cutSwOffStart(int) { */
    /* if (this->field_0x292 != 255) { */
    /* } */
    /* return ((dSv_info_c*)(((char*)&g_dComIfG_gameInfo + 0)))->offSwitch(this->field_0x292); */
/* } */

/* 000081F4-00008254       .text cutSwOffProc__10daNpc_P2_cFi */
/* void daNpc_P2_c::cutSwOffProc(int) { */
    /* if (this->field_0x292 != 255) { */
        /* ((dSv_info_c*)(((char*)&g_dComIfG_gameInfo + 0)))->offSwitch(this->field_0x292); */
    /* } */
    /* return ((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->cutEnd(int); */
/* } */

/* 00008254-000082CC       .text cutSurpriseStart__10daNpc_P2_cFi */
/* void daNpc_P2_c::cutSurpriseStart(int) { */
    /* ((JAIZelBasic*)(base))->seStart(2130, 0, 0, 0, 0, arg6, arg7); */
/* } */

/* 000082CC-000082F8       .text cutSurpriseProc__10daNpc_P2_cFi */
/* void daNpc_P2_c::cutSurpriseProc(int) { */
    /* return ((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->cutEnd(int); */
/* } */

/* 000082F8-00008350       .text cutOmamoriInitStart__10daNpc_P2_cFi */
/* void daNpc_P2_c::cutOmamoriInitStart(int) { */
    /* return ((JAIZelBasic*)(base))->seStart(2132, 0, 0, 0, 0, arg6, arg7); */
/* } */

/* 00008350-0000837C       .text cutOmamoriInitProc__10daNpc_P2_cFi */
/* void daNpc_P2_c::cutOmamoriInitProc(int) { */
    /* return ((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->cutEnd(int); */
/* } */

/* 0000837C-000083D4       .text cutOmamoriEndStart__10daNpc_P2_cFi */
/* void daNpc_P2_c::cutOmamoriEndStart(int) { */
    /* return ((JAIZelBasic*)(base))->seStart(2133, 0, 0, 0, 0, arg6, arg7); */
/* } */

/* 000083D4-00008400       .text cutOmamoriEndProc__10daNpc_P2_cFi */
/* void daNpc_P2_c::cutOmamoriEndProc(int) { */
    /* cutProc(); */
    /* dComIfGp_getPEvtManager()->cutEnd(0); */
/* } */

/* static actor_method_class daNpc_P2MethodTable = { */
    /* (process_method_func)daNpc_P2Create, */
    /* (process_method_func)daNpc_P2Delete, */
    /* (process_method_func)daNpc_P2Execute, */
    /* (process_method_func)daNpc_P2IsDelete, */
    /* (process_method_func)daNpc_P2Draw, */
/* }; */

/* actor_process_profile_definition g_profile_NPC_P2 = { */
    /* Layer ID     */ fpcLy_CURRENT_e,
    /* List ID      */ 0x0007,
    /* List Prio    */ fpcPi_CURRENT_e,
    /* Proc Name    */ fpcNm_NPC_P2_e,
    /* Proc SubMtd  */ &g_fpcLf_Method.base,
    /* Size         */ sizeof(daNpc_P2_c),
    /* Size Other   */ 0,
    /* Parameters   */ 0,
    /* Leaf SubMtd  */ &g_fopAc_Method.base,
    /* Draw Prio    */ fpcDwPi_NPC_P2_e,
    /* Actor SubMtd */ &daNpc_P2MethodTable,
    /* Status       */ 0x07 | fopAcStts_SHOWMAP_e | fopAcStts_CULL_e | fopAcStts_FREEZE_e | fopAcStts_UNK40000_e,
    /* Group        */ fopAc_ACTOR_e,
    /* Cull Type    */ fopAc_CULLBOX_0_e,
/* }; */

/* 由 fix_decomp_braces.py 补齐：反编译产物末尾缺 4 个 } */
}}}}
