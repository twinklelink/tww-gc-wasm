/**
 * d_a_npc_kp1.cpp
 * NPC - Maggie (rich)
 */

#include "d/dolzel_rel.h" // IWYU pragma: keep
#include "d/actor/d_a_npc_kp1.h"
#include "m_Do/m_Do_ext.h"

/* 000000EC-00000150       .text __ct__15daNpc_Kp1_HIO_cFv */
daNpc_Kp1_HIO_c::daNpc_Kp1_HIO_c() {
    /* __ct__15daNpc_Kp1_HIO_cFv: 无实义指令 */
}

/* 00000198-0000035C       .text nodeCallBack_Kp__FP7J3DNodei */
static BOOL nodeCallBack_Kp(J3DNode*, int) {
        /* _savegpr_27(arg0, int, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* if (/ * bne * / 1) goto L_254; */
        /* if (this->field_0x14 == 0) goto L_254; */
        /* if (this->field_0x8c != 0) goto L_12c; */
        /* field_0x90 = 0; */
        /* field_0x4 = 0; */
        /* field_0x8 = 0; */
        /* __register_global_object(((C_@3569 + 0) + 144), ((char*)&__dt__4cXyzFv + 0), ((C_@3569 + 0) + 128)); */
        /* field_0x8c = 1; */
        /* L_12c:; */
        /* if (this->field_0xa8 != 0) goto L_16c; */
        /* field_0xac = 0; */
        /* field_0x4 = 0; */
        /* field_0x8 = 0; */
        /* __register_global_object(((C_@3569 + 0) + 172), ((char*)&__dt__4cXyzFv + 0), ((C_@3569 + 0) + 156)); */
        /* field_0xa8 = 1; */
        /* L_16c:; */
        PSMTXCopy((this->field_0x8c + (this->field_0x18 * 48)), ((char*)&now__14mDoMtx_stack_c + 0));
        /* if (this->field_0x18 != (this->field_0x6cc & 255)) goto L_1f4; */
        PSMTXMultVec(((char*)&now__14mDoMtx_stack_c + 0), ((C_@3569 + 0) + 144), (this->field_0x14 + 1928));
        /* mDoMtx_YrotM(((char*)&now__14mDoMtx_stack_c + 0), ((-this->field_0x292) & 65535)); */
        /* mDoMtx_ZrotM(((char*)&now__14mDoMtx_stack_c + 0), ((-this->field_0x290) & 65535)); */
        PSMTXMultVec(((char*)&now__14mDoMtx_stack_c + 0), ((C_@3569 + 0) + 172), (this->field_0x14 + 1940));
        /* goto L_22c; */
        /* L_1f4:; */
        /* if (this->field_0x18 != (this->field_0x6cd & 255)) goto L_22c; */
        /* mDoMtx_XrotM(((char*)&now__14mDoMtx_stack_c + 0), this->field_0x296); */
        /* mDoMtx_ZrotM(((char*)&now__14mDoMtx_stack_c + 0), ((-this->field_0x294) & 65535)); */
        /* L_22c:; */
        PSMTXCopy(((char*)&now__14mDoMtx_stack_c + 0), ((char*)&mCurrentMtx__6J3DSys + 0));
        PSMTXCopy(((char*)&now__14mDoMtx_stack_c + 0), (this->field_0x8c + (this->field_0x18 * 48)));
        /* L_254:; */
        return _restgpr_27(1);
}

/* 00000398-000004D0       .text createInit__11daNpc_Kp1_cFv */
void daNpc_Kp1_c::createInit() {
    if (((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->isEventBit(11521) == 0) {
        return 0;
    }
    ((dNpc_EventCut_c*)((this + 1800)))->setActorInfo2(((char*)&@stringBase0 + 0), this);
    /* field_0x280 = 10; */
    /* field_0x26d = 171; */
    /* field_0x26f = 171; */
    gravity = 0;
    /* field_0x7be = 255; */
    /* field_0x7a0 = 0; */
    /* field_0x7a4 = 0; */
    /* field_0x7a8 = 0; */
    set_action();
    ((dCcD_Stts*)((this + 1336)))->Init(255, 255, this);
    /* field_0x5b8 = (this + 1336); */
    ((dCcD_Cyl*)((this + 1396)))->Set(((char*)&dNpc_cyl_src + 0));
    /* ((mDoExt_McaMorf*)(this->field_0x330))->setMorf(C_@4194); */
    /* field_0x7c4 = 1; */
    setMtx();
    return 1;
}

/* 000004D0-00000658       .text setMtx__11daNpc_Kp1_cFv */
void daNpc_Kp1_c::setMtx() {
        /* if (this->field_0x7cf != 0) goto L_460; */
        playTexPatternAnm();
        /* field_0x7bc = ((mDoExt_McaMorf*)(this->field_0x330))->play((this + 608), 0, 0); */
        /* if (this->field_0x68 >= this->field_0x7ac) goto L_440; */
        /* field_0x7bc = 1; */
        /* L_440:; */
        /* field_0x7ac = 0; */
        ((dBgS_Acch*)((this + 820)))->CrrPos(((char*)&g_dComIfG_gameInfo + 4768));
        /* L_460:; */
        /* field_0x1b5 = ((dBgS*)(((char*)&g_dComIfG_gameInfo + 4768)))->GetRoomId((this + 1052)); */
        /* field_0x1b6 = ((dBgS*)(((char*)&g_dComIfG_gameInfo + 4768)))->GetPolyColor((this + 1052)); */
        PSMTXTrans(((char*)&now__14mDoMtx_stack_c + 0));
        /* mDoMtx_YrotM(((char*)&now__14mDoMtx_stack_c + 0), this->field_0x206); */
        PSMTXCopy(((char*)&now__14mDoMtx_stack_c + 0), (this->field_0x50 + 36));
        /* ((mDoExt_McaMorf*)(this->field_0x330))->calc(); */
        PSMTXCopy((this->field_0x8c + ((this->field_0x6ce & 255) * 48)), ((char*)&now__14mDoMtx_stack_c + 0));
        PSMTXCopy(((char*)&now__14mDoMtx_stack_c + 0), (this->field_0x6d0 + 36));
        PSMTXCopy(((char*)&now__14mDoMtx_stack_c + 0), (this->field_0x6d4 + 36));
        return setAttention();
}

/* 00000658-00000760       .text anmResID__11daNpc_Kp1_cFiPiPi */
void daNpc_Kp1_c::anmResID(int, int*, int*) {
    /* _savegpr_29(this, int, arg2, arg3, arg4, arg5, arg6, arg7); */
    if (/* blt */ 1) {
        /* if (/ * bge * / 1) goto L_5a0; */
    }
    /* L_5a0:; */
    if (1 != 0) {
        /* ((JUTAssertion*)(((JUTAssertion*)(_savegpr_29(this, int, arg2, arg3, arg4, arg5, arg6, arg7)))->getSDevice()))->showAssert(((char*)&@stringBase0 + 4), 298, ((char*)&@stringBase0 + 20)); */
        OSPanic(((char*)&@stringBase0 + 4), 298, ((char*)&@stringBase0 + 50));
    }
    if (/* beq */ 1) {
        /* if (/ * beq * / 1) goto L_5f8; */
    }
    /* L_5f8:; */
    if (1 != 0) {
        ((JUTAssertion*)(((JUTAssertion*)(OSPanic(((char*)&@stringBase0 + 4), 298, ((char*)&@stringBase0 + 50))))->getSDevice()))->showAssert(((char*)&@stringBase0 + 4), 299, ((char*)&@stringBase0 + 55));
        OSPanic(((char*)&@stringBase0 + 4), 299, ((char*)&@stringBase0 + 50));
    }
    base = 1;
    return _restgpr_29(1);
}

/* 00000760-000007FC       .text BtpNum2ResID__11daNpc_Kp1_cFiPi */
void daNpc_Kp1_c::BtpNum2ResID(int, int*) {
    if (/* blt */ 1) {
        /* if (/ * bge * / 1) goto L_6a4; */
    }
    /* L_6a4:; */
    if (1 != 0) {
        ((JUTAssertion*)(getSDevice()))->showAssert(((char*)&@stringBase0 + 4), 321, ((char*)&@stringBase0 + 78));
        OSPanic(((char*)&@stringBase0 + 4), 321, ((char*)&@stringBase0 + 50));
    }
    base = 0;
    return ((char*)&a_btp_arc_ix_tbl$4278 + 0);
}

/* 000007FC-00000840       .text setAnm_tex__11daNpc_Kp1_cFSc */
void daNpc_Kp1_c::setAnm_tex(signed char) {
    if (char != 0) {
        /* if ((char & 255) != (this->field_0x7d5 & 255)) goto L_744; */
        /* field_0x7d5 = char; */
    }
    /* L_744:; */
    return initTexPatternAnm(1);
}

/* 00000840-00000970       .text init_btp__11daNpc_Kp1_cFbi */
void daNpc_Kp1_c::init_btp(bool, int) {
        /* _savegpr_29(this, bool, int, arg3, arg4, arg5, arg6, arg7); */
        /* if (/ * blt * / 1) goto L_868; */
        /* ((daNpc_Kp1_c*)(_savegpr_29(this, bool, int, arg3, arg4, arg5, arg6, arg7)))->BtpNum2ResID(this->field_0x50); */
        /* field_0x6e0 = ((dRes_control_c*)(((char*)&@stringBase0 + 115)))->getIDRes(); */
        /* if (this->field_0x6e0 != 0) goto L_804; */
        ((JUTAssertion*)(((JUTAssertion*)(((dRes_control_c*)(((char*)&@stringBase0 + 115)))->getIDRes()))->getSDevice()))->showAssert(((char*)&@stringBase0 + 4), 354, ((char*)&@stringBase0 + 118));
        OSPanic(((char*)&@stringBase0 + 4), 354, ((char*)&@stringBase0 + 50));
        /* L_804:; */
        /* if (((mDoExt_btpAnm*)((_savegpr_29(this, bool, int, arg3, arg4, arg5, arg6, arg7) + 1764)))->init(this->field_0x4, this->field_0x6e0, 1, 2, 0, -1) != 0) goto L_848; */
        return 0;
        /* L_848:; */
        /* field_0x6f8 = 0; */
        /* field_0x6fa = 0; */
        /* if (this->field_0x7d5 != 1) goto L_868; */
        /* field_0x6f8 = 1; */
        /* L_868:; */
        return _restgpr_29(1);
}

/* 00000970-000009B4       .text initTexPatternAnm__11daNpc_Kp1_cFb */
void daNpc_Kp1_c::initTexPatternAnm(bool) {
    if (init_btp(bool, (this->field_0x7d5 & 255)) == 0) {
    }
    return 1;
}

/* 000009B4-00000A80       .text playTexPatternAnm__11daNpc_Kp1_cFv */
void daNpc_Kp1_c::playTexPatternAnm() {
        /* if (this->field_0x7d5 == 1) goto L_980; */
        /* if (this->field_0x7d5 != 0) goto L_90c; */
        /* L_90c:; */
        /* if (((cLib_calcTimer<s>__FPs((this + 1786), 1, arg2, arg3, arg4, arg5, arg6, arg7) & 65535) >> 5) == 0) goto L_980; */
        /* field_0x6f8 = (this->field_0x6f8 + 1); */
        /* if (((this->field_0x6f8 + 1) & 16777215) < this->field_0x6) goto L_980; */
        /* if (this->field_0x7d5 == 0) goto L_950; */
        /* goto L_980; */
        /* L_950:; */
        /* field_0x6f8 = 0; */
        cM_rndF(C_@4344);
        /* L_980:; */
        return C_@4343;
}

/* 00000A80-00000B4C       .text setAnm_anm__11daNpc_Kp1_cFPQ211daNpc_Kp1_c9anm_prm_c */
void daNpc_Kp1_c::setAnm_anm(daNpc_Kp1_c::anm_prm_c*) {
        /* if (/ * blt * / 1) goto L_a44; */
        /* if ((this->field_0x7d6 & 255) == 0) goto L_a44; */
        /* if (this->field_0x330 == 0) goto L_a2c; */
        anmResID((this->field_0x7d6 & 255));
        /* if (/ * blt * / 1) goto L_a28; */
        /* dNpc_setAnmIDRes(this->field_0x330, this->field_0xc); */
        /* L_a28:; */
        /* L_a2c:; */
        /* field_0x7ac = 0; */
        /* field_0x7bd = 0; */
        /* field_0x7bc = 0; */
        /* L_a44:; */
        return 1;
}

/* 00000B4C-00000BB8       .text setAnm_NUM__11daNpc_Kp1_cFii */
void daNpc_Kp1_c::setAnm_NUM(int, int) {
    if (int != 0) {
        /* setAnm_tex(this->field_0x1, int, arg3, arg4, arg5, arg6, arg7); */
    }
    return setAnm_anm((((char*)&a_anm_prm_tbl$4363 + 0) + (int << 4)), (int << 4));
}

/* 00000BB8-00000C20       .text setAnm__11daNpc_Kp1_cFv */
void daNpc_Kp1_c::setAnm() {
    /* setAnm_tex(this->field_0x1, arg2, arg3, arg4, arg5, arg6, arg7); */
    return setAnm_anm((((char*)&a_anm_prm_tbl$4370 + 0) + ((this->field_0x7d8 & 255) << 4)), ((this->field_0x7d8 & 255) << 4));
}

/* 00000C20-00000C2C       .text chngAnmTag__11daNpc_Kp1_cFv */
void daNpc_Kp1_c::chngAnmTag() {
    /* if (*(u8*)(this+2004) != 0) return; */
}

/* 00000C2C-00000C38       .text ctrlAnmTag__11daNpc_Kp1_cFv */
void daNpc_Kp1_c::ctrlAnmTag() {
    /* if (*(u8*)(this+2003) != 0) return; */
}

/* 00000C38-00000CA4       .text chngAnmAtr__11daNpc_Kp1_cFUc */
void daNpc_Kp1_c::chngAnmAtr(unsigned char) {
        /* if ((char & 16777215) >= 7) goto L_ba8; */
        /* if ((char & 16777215) == this->field_0x7d3) goto L_ba8; */
        /* field_0x6d8 = 0; */
        /* if ((char & 16777215) != 2) goto L_b8c; */
        /* field_0x6d8 = 2; */
        /* goto L_b9c; */
        /* L_b8c:; */
        /* if ((char & 16777215) != 3) goto L_b9c; */
        /* field_0x6d8 = 1; */
        /* L_b9c:; */
        /* field_0x7d3 = char; */
        /* L_ba8:; */
        return setAnm_ATR(1);
}

/* 00000CA4-00000D54       .text ctrlAnmAtr__11daNpc_Kp1_cFv */
void daNpc_Kp1_c::ctrlAnmAtr() {
        /* if (this->field_0x7d3 == 1) goto L_be4; */
        /* if (/ * bge * / 1) goto L_bd8; */
        /* goto L_c58; */
        /* L_bd8:; */
        /* if (this->field_0x7d3 == 6) goto L_c20; */
        /* goto L_c58; */
        /* L_be4:; */
        /* if (this->field_0x7bc == 0) goto L_c58; */
        /* field_0x7bd = (this->field_0x7bd + 1); */
        /* if (((this->field_0x7bd + 1) & 255) < 2) goto L_c58; */
        /* field_0x7d3 = 0; */
        setAnm_NUM(0, 1);
        /* goto L_c58; */
        /* L_c20:; */
        /* if (this->field_0x7bc == 0) goto L_c58; */
        /* field_0x7bd = (this->field_0x7bd + 1); */
        /* if (((this->field_0x7bd + 1) & 255) < 1) goto L_c58; */
        /* field_0x7d3 = 0; */
        /* L_c58:; */
        return ((daNpc_Kp1_c*)(setAnm_NUM(0, 1)))->setAnm_NUM(0, 1);
}

/* 00000D54-00000DBC       .text setAnm_ATR__11daNpc_Kp1_cFi */
void daNpc_Kp1_c::setAnm_ATR(int) {
    if (int != 0) {
        /* setAnm_tex(this->field_0x1, arg2, arg3, arg4, arg5, arg6, arg7); */
    }
    return setAnm_anm((((char*)&a_anm_prm_tbl$4425 + 0) + (this->field_0x7d3 << 4)), (this->field_0x7d3 << 4));
}

/* 00000DBC-00000E78       .text anmAtr__11daNpc_Kp1_cFUs */
void daNpc_Kp1_c::anmAtr(unsigned short) {
        /* if ((short & 65535) != 6) goto L_d58; */
        /* if (this->field_0x7de != 0) goto L_d20; */
        /* field_0x7d4 = 255; */
        /* chngAnmAtr(this->field_0x5bcf); */
        /* field_0x7de = (this->field_0x7de + 1); */
        /* L_d20:; */
        /* if (this->field_0x5bd0 == 255) goto L_d68; */
        /* if (this->field_0x5bd0 == this->field_0x7d4) goto L_d68; */
        /* field_0x5bd0 = 255; */
        chngAnmTag();
        /* goto L_d68; */
        /* L_d58:; */
        /* if (255 != 14) goto L_d68; */
        /* field_0x7de = 0; */
        /* L_d68:; */
        ctrlAnmAtr();
        return ctrlAnmTag();
}

/* 00000E78-00000EE0       .text setStt__11daNpc_Kp1_cFSc */
void daNpc_Kp1_c::setStt(signed char) {
    /* field_0x6d8 = 0; */
    /* field_0x7d8 = char; */
    if ((this->field_0x7d8 & 255) != 2) {
        /* if (/ * bge * / 1) goto L_de0; */
    } else {
        /* field_0x7da = 1; */
        /* field_0x29a = 1; */
        /* field_0x7d3 = 255; */
        /* field_0x7c2 = 0; */
        /* goto L_de4; */
    }
    /* L_de0:; */
    /* L_de4:; */
    return setAnm();
}

/* 00000EE0-0000102C       .text next_msgStatus__11daNpc_Kp1_cFPUl */
void daNpc_Kp1_c::next_msgStatus(unsigned long*) {
        /* if (/ * bgt * / 1) goto L_f34; */
        base = 7813;
        /* goto L_f38; */
        base = 7814;
        /* goto L_f38; */
        base = 7817;
        /* goto L_f38; */
        base = 7819;
        /* goto L_f38; */
        base = 7820;
        /* goto L_f38; */
        base = 7821;
        /* goto L_f38; */
        base = 7822;
        /* goto L_f38; */
        base = 7823;
        /* goto L_f38; */
        /* if (this->field_0xfa == 1) goto L_eac; */
        /* if (/ * bge * / 1) goto L_f38; */
        /* if (this->field_0xfa >= 0) goto L_ea0; */
        /* goto L_f38; */
        /* L_ea0:; */
        base = 7825;
        /* goto L_f38; */
        /* L_eac:; */
        base = 7824;
        /* goto L_f38; */
        base = 7831;
        /* field_0x7c2 = 1; */
        /* goto L_f38; */
        base = 7832;
        /* goto L_f38; */
        base = 7833;
        /* goto L_f38; */
        base = 7834;
        /* goto L_f38; */
        base = 7835;
        /* goto L_f38; */
        base = 7836;
        /* goto L_f38; */
        base = 7837;
        /* goto L_f38; */
        /* field_0x7d7 = 3; */
        /* goto L_f34; */
        /* field_0x7d7 = 4; */
        /* goto L_f34; */
        /* field_0x7c1 = 1; */
        /* L_f34:; */
        /* L_f38:; */
        return 16;
}

/* 0000102C-00001178       .text getMsg__11daNpc_Kp1_cFv */
void daNpc_Kp1_c::getMsg() {
        /* if (this->field_0x7be == 255) goto L_f88; */
        /* if (this->field_0x7be != 155) goto L_f74; */
        return 7830;
        /* L_f74:; */
        /* goto L_1074; */
        /* L_f88:; */
        /* if (this->field_0x7bf == 0) goto L_fa4; */
        /* field_0x7bf = 0; */
        return 7826;
        /* L_fa4:; */
        /* if (this->field_0x7c0 == 0) goto L_fc0; */
        /* field_0x7c0 = 0; */
        return 7838;
        /* L_fc0:; */
        /* if (((dSv_player_get_bag_item_c*)(((char*)&g_dComIfG_gameInfo + 144)))->isReserve(15) == 0) goto L_1030; */
        /* if (((dSv_player_bag_item_c*)(((char*)&g_dComIfG_gameInfo + 118)))->checkReserveItem(155) != 0) goto L_1030; */
        ((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->getEventReg();
        /* goto L_1074; */
        /* L_1030:; */
        /* if (((dSv_player_get_bag_item_c*)(((char*)&g_dComIfG_gameInfo + 144)))->isReserve(14) == 0) goto L_1060; */
        ((dSv_player_get_bag_item_c*)(((char*)&g_dComIfG_gameInfo + 144)))->isBeast(0);
        /* goto L_1074; */
        /* L_1060:; */
        /* if (this->field_0x7c1 == 0) goto L_1074; */
        /* L_1074:; */
        return 7827;
}

/* 00001178-00001204       .text eventOrder__11daNpc_Kp1_cFv */
void daNpc_Kp1_c::eventOrder() {
        /* if ((this->field_0x7d7 & 255) == 1) goto L_10b0; */
        /* if ((this->field_0x7d7 & 255) != 2) goto L_10dc; */
        /* L_10b0:; */
        /* if (this->field_0x7d7 != 1) goto L_1108; */
        fopAcM_orderSpeakEvent(this);
        /* goto L_1108; */
        /* L_10dc:; */
        /* if (this->field_0x7d7 < 3) goto L_1108; */
        /* L_1108:; */
        return fopAcM_orderOtherEvent2(fopAcM_orderSpeakEvent(this), (((char*)&a_demo_name_tbl$4538 + 0) + (this->field_0x7d7 << 2)), 1);
}

/* 00001204-000012E4       .text checkOrder__11daNpc_Kp1_cFv */
void daNpc_Kp1_c::checkOrder() {
        /* if (this->field_0xf8 != 2) goto L_11b0; */
        /* if (((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->startCheckOld(((char*)&@stringBase0 + 142), arg2) == 0) goto L_117c; */
        /* if (this->field_0x7d7 != 3) goto L_117c; */
        /* field_0x7d7 = 0; */
        /* goto L_11e0; */
        /* L_117c:; */
        /* if (((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->startCheckOld(((char*)&@stringBase0 + 157)) == 0) goto L_11e0; */
        /* if (this->field_0x7d7 != 4) goto L_11e0; */
        /* field_0x7d7 = 0; */
        /* goto L_11e0; */
        /* L_11b0:; */
        /* if (0 != 1) goto L_11e0; */
        /* if ((this->field_0x7d7 & 255) == 1) goto L_11d0; */
        /* if ((this->field_0x7d7 & 255) != 2) goto L_11e0; */
        /* L_11d0:; */
        /* field_0x7d7 = 0; */
        /* field_0x7cd = 1; */
        /* L_11e0:; */
        return ((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->startCheckOld(((char*)&@stringBase0 + 157));
}

/* 000012E4-00001474       .text lookBack__11daNpc_Kp1_cFv */
void daNpc_Kp1_c::lookBack() {
        /* _savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* if ((this->field_0x7da & 255) == 2) goto L_12d0; */
        /* if (/ * bge * / 1) goto L_1274; */
        /* if ((this->field_0x7da & 255) == 0) goto L_1304; */
        /* if (/ * bge * / 1) goto L_1280; */
        /* goto L_1304; */
        /* L_1274:; */
        /* if ((this->field_0x7da & 255) >= 4) goto L_1304; */
        /* goto L_1300; */
        /* L_1280:; */
        dNpc_playerEyePos();
        /* goto L_1304; */
        /* L_12d0:; */
        /* goto L_1304; */
        /* L_1300:; */
        /* L_1304:; */
        /* if (this->field_0x29a == 0) goto L_1330; */
        /* cLib_addCalcAngleS2((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1976), this->field_0x1e, 4, 2048); */
        /* goto L_1338; */
        /* L_1330:; */
        /* field_0x7b8 = 0; */
        /* L_1338:; */
        /* return _restgpr_28(((dNpc_JntCtrl_c*)((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 656)))->lookAtTarget((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 518))); */
}

/* 00001474-000014F4       .text chkAttention__11daNpc_Kp1_cFv */
void daNpc_Kp1_c::chkAttention() {
    if (((dAttention_c*)(((char*)&g_dComIfG_gameInfo + 22536)))->LockonTruth() == 0) {
    }
    return ((this - ((dAttention_c*)(((char*)&g_dComIfG_gameInfo + 22536)))->ActionTarget(0)) >> 5);
}

/* 000014F4-00001558       .text setAttention__11daNpc_Kp1_cFv */
void daNpc_Kp1_c::setAttention() {
    /* field_0x274 = 0; */
    /* field_0x278 = (this->field_0x1fc + this->field_0x20); */
    /* field_0x27c = 0; */
    if (this->field_0x7c4 == 0) {
    }
    eyePos = 0;
    /* field_0x264 = 0; */
    /* field_0x268 = 0; */
    /* field_0x7c4 = 0; */
    return this;
}

/* 00001558-000015F4       .text chk_talk__11daNpc_Kp1_cFv */
void daNpc_Kp1_c::chk_talk() {
        /* field_0x7be = 255; */
        /* if (this->field_0x52b8 == 1) goto L_14b8; */
        /* if (this->field_0x52b8 == 2) goto L_14b8; */
        /* if (this->field_0x52b8 != 3) goto L_14bc; */
        /* L_14b8:; */
        /* L_14bc:; */
        /* if (1 == 0) goto L_14ec; */
        /* if (((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->ChkPresentEnd() == 0) goto L_14e8; */
        /* goto L_14ec; */
        /* L_14e8:; */
        /* L_14ec:; */
        return 0;
}

/* 000015F4-00001620       .text decideType__11daNpc_Kp1_cFi */
void daNpc_Kp1_c::decideType(int) {
    /* field_0x7db = -1; */
    if (this->field_0x8 != 357) {
    } else {
        /* field_0x7db = 0; */
        /* field_0x7dc = 0; */
    }
    return 1;
}

/* 00001620-000016A8       .text event_actionInit__11daNpc_Kp1_cFi */
void daNpc_Kp1_c::event_actionInit(int) {
    /* _savegpr_28(this, int, arg2, arg3, arg4, arg5, arg6, arg7); */
    if (((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMySubstanceP() != 0) {
    }
    return _restgpr_28(((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMySubstanceP());
}

/* 000016A8-00001778       .text event_action__11daNpc_Kp1_cFv */
void daNpc_Kp1_c::event_action() {
        /* if ((this->field_0x7d2 & 255) == 1) goto L_1630; */
        /* if (/ * bge * / 1) goto L_1670; */
        /* if ((this->field_0x7d2 & 255) >= 0) goto L_15f0; */
        /* goto L_1670; */
        /* L_15f0:; */
        fopAcM_createItemForPresentDemo((this + 504), 154, 0, -1, -1, 0, 0);
        /* if ((this->field_0x7d2 & 255) == 65535) goto L_1674; */
        /* field_0x52a8 = fopAcM_createItemForPresentDemo((this + 504), 154, 0, -1, -1, 0, 0); */
        /* goto L_1674; */
        /* L_1630:; */
        fopAcM_createItemForPresentDemo((fopAcM_createItemForPresentDemo((this + 504), 154, 0, -1, -1, 0, 0) + 504), 7, 0, -1, -1, 0, 0);
        /* if ((this->field_0x7d2 & 255) == 65535) goto L_1674; */
        /* field_0x52a8 = fopAcM_createItemForPresentDemo((fopAcM_createItemForPresentDemo((this + 504), 154, 0, -1, -1, 0, 0) + 504), 7, 0, -1, -1, 0, 0); */
        /* goto L_1674; */
        /* L_1670:; */
        /* L_1674:; */
        return 1;
}

/* 00001778-00001880       .text privateCut__11daNpc_Kp1_cFv */
void daNpc_Kp1_c::privateCut() {
        /* _savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* if (((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMyStaffId(((char*)&@stringBase0 + 0), 0, 0) == -1) goto L_177c; */
        /* field_0x7d1 = ((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMyActIdx(((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMyStaffId(((char*)&@stringBase0 + 0), 0, 0), ((char*)&cut_name_tbl$4705 + 0), 1, 1, 0); */
        /* if ((this->field_0x7d1 & 255) != -1) goto L_1718; */
        ((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->cutEnd(((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMyStaffId(((char*)&@stringBase0 + 0), 0, 0));
        /* goto L_177c; */
        /* L_1718:; */
        /* if (((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getIsAddvance(((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMyStaffId(((char*)&@stringBase0 + 0), 0, 0)) == 0) goto L_1748; */
        /* if (this->field_0x7d1 == 0) goto L_173c; */
        /* goto L_1748; */
        /* L_173c:; */
        /* ((daNpc_Kp1_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->event_actionInit(((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMyStaffId(((char*)&@stringBase0 + 0), 0, 0)); */
        /* L_1748:; */
        /* if (this->field_0x7d1 == 0) goto L_1758; */
        /* goto L_1764; */
        /* L_1758:; */
        /* ((daNpc_Kp1_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->event_action(); */
        /* goto L_1768; */
        /* L_1764:; */
        /* L_1768:; */
        /* if (1 == 0) goto L_177c; */
        /* L_177c:; */
        return _restgpr_29(((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->cutEnd(((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMyStaffId(((char*)&@stringBase0 + 0), 0, 0)));
}

/* 00001880-000018A0       .text endEvent__11daNpc_Kp1_cFv */
void daNpc_Kp1_c::endEvent() {
    /* field_0x7d3 = 255; */
    return this;
}

/* 000018A0-00001998       .text event_proc__11daNpc_Kp1_cFv */
void daNpc_Kp1_c::event_proc() {
        /* if (((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->endCheckOld(((char*)&@stringBase0 + 142), arg2) == 0) goto L_180c; */
        endEvent();
        /* field_0x7d7 = 1; */
        /* field_0x7bf = 1; */
        /* goto L_187c; */
        /* L_180c:; */
        /* if (((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->endCheckOld(((char*)&@stringBase0 + 157)) == 0) goto L_185c; */
        ((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->setEventReg();
        endEvent();
        /* field_0x7d7 = 1; */
        /* field_0x7c0 = 1; */
        /* goto L_187c; */
        /* L_185c:; */
        /* if (((dNpc_EventCut_c*)((this + 1800)))->cutProc() != 0) goto L_1874; */
        privateCut();
        /* L_1874:; */
        /* L_187c:; */
        return lookBack();
}

/* 00001998-00001A44       .text set_action__11daNpc_Kp1_cFM11daNpc_Kp1_cFPCvPvPv_iPv */
void daNpc_Kp1_c::set_action(int (daNpc_Kp1_c::*)(void*), void*) {
        /* if (__ptmf_cmpr((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1788)) == 0) goto L_193c; */
        /* if (__ptmf_test((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1788)) == 0) goto L_1908; */
        /* field_0x7dd = -1; */
        /* __ptmf_scall(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* L_1908:; */
        /* field_0x7dd = 0; */
        /* __ptmf_scall(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* L_193c:; */
        return _restgpr_29(1);
}

/* 00001A44-00001AFC       .text wait01__11daNpc_Kp1_cFv */
void daNpc_Kp1_c::wait01() {
        /* if ((this->field_0x7d7 & 255) == 3) goto L_198c; */
        /* if ((this->field_0x7d7 & 255) == 4) goto L_198c; */
        /* if ((this->field_0x7d7 & 255) != 1) goto L_1994; */
        /* L_198c:; */
        return 1;
        /* L_1994:; */
        /* if (this->field_0x7cd == 0) goto L_19bc; */
        /* if (((daNpc_Kp1_c*)(1))->chk_talk() == 0) goto L_19f8; */
        setStt(2);
        /* goto L_19f8; */
        /* L_19bc:; */
        /* field_0x7d7 = 2; */
        /* if (this->field_0x7cc == 0) goto L_19e0; */
        /* field_0x7da = 1; */
        /* field_0x29a = 1; */
        /* goto L_19f8; */
        /* L_19e0:; */
        /* field_0x7da = 3; */
        /* field_0x29a = 1; */
        /* L_19f8:; */
        return 1;
}

/* 00001AFC-00001BD4       .text talk01__11daNpc_Kp1_cFv */
void daNpc_Kp1_c::talk01() {
        talk(1);
        /* if (this->field_0x6b0 == 0) goto L_1ad0; */
        /* if (this->field_0xf8 == 6) goto L_1aac; */
        /* if (/ * bge * / 1) goto L_1a54; */
        /* if (this->field_0xf8 == 2) goto L_1aac; */
        /* goto L_1ad0; */
        /* L_1a54:; */
        /* if (this->field_0xf8 == 19) goto L_1a60; */
        /* goto L_1ad0; */
        /* L_1a60:; */
        /* if (this->field_0x6a4 == 7837) goto L_1a70; */
        /* goto L_1a80; */
        /* L_1a70:; */
        ((dSv_player_bag_item_c*)(((char*)&g_dComIfG_gameInfo + 118)))->setReserveItemEmpty();
        /* L_1a80:; */
        /* field_0x7be = 255; */
        /* setStt(this->field_0x7d9); */
        /* field_0x7d0 = 0; */
        /* field_0x7cd = 0; */
        endEvent();
        /* goto L_1ad0; */
        /* L_1aac:; */
        /* if (this->field_0x7c2 == 0) goto L_1ad0; */
        ((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->CancelPresent();
        /* field_0x7c2 = 0; */
        /* L_1ad0:; */
        return 1;
}

/* 00001BD4-00001C88       .text wait_action1__11daNpc_Kp1_cFPv */
void daNpc_Kp1_c::wait_action1(void*) {
        /* if (this->field_0x7dd != 0) goto L_1b20; */
        /* setStt(1, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* field_0x7dd = (this->field_0x7dd + 1); */
        /* goto L_1b84; */
        /* L_1b20:; */
        /* if (/ * beq * / 1) goto L_1b84; */
        /* field_0x7cc = ((daNpc_Kp1_c*)(this->field_0x7dd))->chkAttention(); */
        /* if ((this->field_0x7d8 & 255) == 2) goto L_1b54; */
        /* if (/ * bge * / 1) goto L_1b74; */
        /* if ((this->field_0x7d8 & 255) >= 1) goto L_1b64; */
        /* goto L_1b74; */
        /* L_1b54:; */
        /* field_0x7c8 = talk01(); */
        /* goto L_1b7c; */
        /* L_1b64:; */
        /* field_0x7c8 = wait01(); */
        /* goto L_1b7c; */
        /* L_1b74:; */
        /* field_0x7c8 = 0; */
        /* L_1b7c:; */
        lookBack();
        /* L_1b84:; */
        return 1;
}

/* 00001C88-00001DB8       .text demo__11daNpc_Kp1_cFv */
void daNpc_Kp1_c::demo() {
        /* if (demoActorID != 0) goto L_1bd4; */
        /* if (this->field_0x7cf == 0) goto L_1cb4; */
        /* field_0x7cf = 0; */
        /* goto L_1cb4; */
        /* L_1bd4:; */
        /* field_0x7cf = 1; */
        ((dDemo_object_c*)((this->field_0x5abc + 32)))->getActor(demoActorID);
        /* field_0x6f8 = (this->field_0x6f8 + 1); */
        /* if (((this->field_0x6f8 + 1) & 16777215) < this->field_0x6) goto L_1c20; */
        /* L_1c20:; */
        /* if (((dDemo_actor_c*)(((dDemo_object_c*)((this->field_0x5abc + 32)))->getActor(demoActorID)))->getP_BtpData(((char*)&@stringBase0 + 115), this->field_0x6) == 0) goto L_1c88; */
        /* field_0x6e0 = ((dDemo_actor_c*)(((dDemo_object_c*)((this->field_0x5abc + 32)))->getActor(demoActorID)))->getP_BtpData(((char*)&@stringBase0 + 115), this->field_0x6); */
        /* if (((mDoExt_btpAnm*)((this + 1764)))->init(this->field_0x4, this->field_0x6e0, 1, 2, 0, -1, 1) == 0) goto L_1c88; */
        /* field_0x6f8 = 0; */
        /* L_1c88:; */
        dDemo_setDemoData(this, 106, this->field_0x330, ((char*)&@stringBase0 + 115), 0, 0, 0, 0);
        /* L_1cb4:; */
        /* return this->field_0x7cf; */
}

/* 00001DB8-00001E9C       .text shadowDraw__11daNpc_Kp1_cFv */
void daNpc_Kp1_c::shadowDraw() {
        /* field_0x6dc = dComIfGd_setShadow(this->field_0x6dc, 1, this->field_0x50); */
        /* if (this->field_0x6dc == 0) goto L_1d9c; */
        /* if (this->field_0x6d8 == 2) goto L_1d88; */
        /* if (/ * bge * / 1) goto L_1d9c; */
        /* if (this->field_0x6d8 >= 1) goto L_1d70; */
        /* goto L_1d9c; */
        /* L_1d70:; */
        /* ((dDlst_shadowControl_c*)(((char*)&g_dComIfG_gameInfo + 24416)))->addReal(this->field_0x6dc, this->field_0x6d0); */
        /* goto L_1d9c; */
        /* L_1d88:; */
        /* L_1d9c:; */
        return ((dDlst_shadowControl_c*)(((char*)&g_dComIfG_gameInfo + 24416)))->addReal();
}

/* 00001E9C-00001FA4       .text _draw__11daNpc_Kp1_cFv */
BOOL daNpc_Kp1_c::_draw() {
        /* ((dScnKy_env_light_c*)(((char*)&g_env_light + 0)))->settingTevStruct(0, (_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 504), (_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 268)); */
        /* ((dScnKy_env_light_c*)(((char*)&g_env_light + 0)))->setLightTevColorType(this->field_0x50, (_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 268)); */
        /* ((mDoExt_btpAnm*)((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1764)))->entry(this->field_0x4, this->field_0x6f8); */
        /* ((mDoExt_McaMorf*)(this->field_0x330))->entryDL(); */
        /* ((J3DMaterialTable*)((this->field_0x4 + 88)))->removeTexNoAnimator(this->field_0x6ec); */
        /* if (this->field_0x6d8 == 2) goto L_1e48; */
        /* if (/ * bge * / 1) goto L_1e50; */
        /* if (this->field_0x6d8 >= 1) goto L_1e40; */
        /* goto L_1e50; */
        /* L_1e40:; */
        /* goto L_1e54; */
        /* L_1e48:; */
        /* goto L_1e54; */
        /* L_1e50:; */
        /* L_1e54:; */
        /* if (0 == 0) goto L_1e78; */
        /* ((dScnKy_env_light_c*)(((char*)&g_env_light + 0)))->setLightTevColorType(0, (_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 268)); */
        mDoExt_modelEntryDL(0);
        /* L_1e78:; */
        /* ((daNpc_Kp1_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->shadowDraw(); */
        /* dSnap_RegistFig(90, _savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7), C_@4314); */
        return _restgpr_29(1);
}

/* 00001FA4-00002100       .text _execute__11daNpc_Kp1_cFv */
BOOL daNpc_Kp1_c::_execute() {
        /* if (this->field_0x7c3 != 0) goto L_1f10; */
        /* field_0x77c = 0; */
        /* field_0x780 = 0; */
        /* field_0x784 = 0; */
        /* field_0x7c3 = 1; */
        /* L_1f10:; */
        /* ((dNpc_JntCtrl_c*)((this + 656)))->setParam(this->field_0x14, this->field_0x16, this->field_0x18, this->field_0x1a, this->field_0xc, this->field_0xe, this->field_0x10); */
        checkOrder();
        /* if (demo() != 0) goto L_1fbc; */
        /* if (this->field_0x529a == 0) goto L_1f90; */
        /* if (this->field_0xf8 == 1) goto L_1f90; */
        event_proc();
        /* goto L_1fbc; */
        /* L_1f90:; */
        __ptmf_scall(this, 0);
        /* L_1fbc:; */
        eventOrder();
        /* if (this->field_0x7cf != 0) goto L_1fdc; */
        fopAcM_posMoveF(this, (this + 1336));
        /* L_1fdc:; */
        setMtx();
        setCollision(C_@4950);
        return 1;
}

/* 00002100-0000215C       .text _delete__11daNpc_Kp1_cFv */
BOOL daNpc_Kp1_c::_delete() {
    /* dComIfG_resDelete((this + 1732), ((char*)&@stringBase0 + 115), arg2); */
    if (heap != 0) {
        /* if (this->field_0x330 != 0) goto L_2058; */
        /* ((mDoExt_McaMorf*)(this->field_0x330))->stopZelAnime(); */
    }
    /* L_2058:; */
    return 1;
}

/* 0000215C-0000217C       .text CheckCreateHeap__FP10fopAc_ac_c */
static BOOL CheckCreateHeap(fopAc_ac_c* i_this) {
    ((daNpc_Kp1_c*)i_this)->CreateHeap();
    return TRUE;
}

/* 0000217C-000022A0       .text _create__11daNpc_Kp1_cFv */
cPhs_State daNpc_Kp1_c::_create() {
        /* _savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* if (/ * bne * / 1) goto L_20d4; */
        /* if (_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) == 0) goto L_20c8; */
        __ct();
        /* L_20c8:; */
        /* L_20d4:; */
        /* if (dComIfG_resLoad((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1732), ((char*)&@stringBase0 + 115)) == 4) goto L_20f8; */
        /* goto L_219c; */
        /* L_20f8:; */
        /* if (((daNpc_Kp1_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->decideType((this->field_0xb0 & 16777215)) != 0) goto L_2118; */
        return 5;
        /* L_2118:; */
        /* if (fopAcM_entrySolidHeap(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7), ((char*)&CheckCreateHeap__FP10fopAc_ac_c + 0), ((char*)&a_heap_size_tbl$4970 + 0)) == 0) goto L_217c; */
        cullMtx = (this->field_0x50 + 36);
        /* fopAcM_setCullSizeBox(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* goto L_2184; */
        /* L_217c:; */
        return 5;
        /* L_2184:; */
        /* if (((daNpc_Kp1_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->createInit() != 0) goto L_2198; */
        /* L_2198:; */
        /* L_219c:; */
        return _restgpr_29(5);
}

/* 000026D0-00002B14       .text CreateHeap__11daNpc_Kp1_cFv */
void daNpc_Kp1_c::CreateHeap() {
        /* _savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        ((dRes_control_c*)(((char*)&@stringBase0 + 115)))->getIDRes(8);
        /* if (/ * bne * / 1) goto L_2670; */
        ((JUTAssertion*)(((JUTAssertion*)(((dRes_control_c*)(((char*)&@stringBase0 + 115)))->getIDRes(8)))->getSDevice()))->showAssert(((char*)&@stringBase0 + 4), 1580, ((char*)&@stringBase0 + 191));
        OSPanic(((char*)&@stringBase0 + 4), 1580, ((char*)&@stringBase0 + 50));
        /* L_2670:; */
        __nw(180);
        /* if (/ * beq * / 1) goto L_26f4; */
        /* L_26f4:; */
        /* field_0x330 = __ct(((dRes_control_c*)(((char*)&@stringBase0 + 115)))->getIDRes(5), 1); */
        /* if (this->field_0x330 == 0) goto L_2a0c; */
        /* if (this->field_0x50 == 0) goto L_2a04; */
        /* field_0x6cc = ((JUTNameTab*)(this->field_0x54))->getIndex(((char*)&@stringBase0 + 207)); */
        /* if (this->field_0x6cc != 0) goto L_276c; */
        /* ((JUTAssertion*)(((JUTAssertion*)(((JUTNameTab*)(this->field_0x54))->getIndex(((char*)&@stringBase0 + 207))))->getSDevice()))->showAssert(((char*)&@stringBase0 + 4), 1599, ((char*)&@stringBase0 + 212)); */
        OSPanic(((char*)&@stringBase0 + 4), 1599, ((char*)&@stringBase0 + 50));
        /* L_276c:; */
        /* field_0x6cd = ((JUTNameTab*)(this->field_0x54))->getIndex(((char*)&@stringBase0 + 232)); */
        /* if (this->field_0x6cd != 0) goto L_27c8; */
        /* ((JUTAssertion*)(((JUTAssertion*)(((JUTNameTab*)(this->field_0x54))->getIndex(((char*)&@stringBase0 + 232))))->getSDevice()))->showAssert(((char*)&@stringBase0 + 4), 1601, ((char*)&@stringBase0 + 241)); */
        OSPanic(((char*)&@stringBase0 + 4), 1601, ((char*)&@stringBase0 + 50));
        /* L_27c8:; */
        /* field_0x6ce = ((JUTNameTab*)(this->field_0x54))->getIndex(((char*)&@stringBase0 + 265)); */
        /* if (this->field_0x6ce != 0) goto L_2824; */
        /* ((JUTAssertion*)(((JUTAssertion*)(((JUTNameTab*)(this->field_0x54))->getIndex(((char*)&@stringBase0 + 265))))->getSDevice()))->showAssert(((char*)&@stringBase0 + 4), 1603, ((char*)&@stringBase0 + 271)); */
        OSPanic(((char*)&@stringBase0 + 4), 1603, ((char*)&@stringBase0 + 50));
        /* L_2824:; */
        /* field_0x7d5 = (this->field_0x7db & 255); */
        /* if (((daNpc_Kp1_c*)(_savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->initTexPatternAnm(0) == 0) goto L_2a04; */
        ((dRes_control_c*)(((char*)&@stringBase0 + 115)))->getIDRes(6);
        /* if (/ * bne * / 1) goto L_28ac; */
        ((JUTAssertion*)(((JUTAssertion*)(((dRes_control_c*)(((char*)&@stringBase0 + 115)))->getIDRes(6)))->getSDevice()))->showAssert(((char*)&@stringBase0 + 4), 1621, ((char*)&@stringBase0 + 292));
        OSPanic(((char*)&@stringBase0 + 4), 1621, ((char*)&@stringBase0 + 50));
        /* L_28ac:; */
        /* field_0x6d0 = mDoExt_J3DModel(__ct(((dRes_control_c*)(((char*)&@stringBase0 + 115)))->getIDRes(5), 1)); */
        /* if (this->field_0x6d0 == 0) goto L_2a04; */
        ((dRes_control_c*)(((char*)&@stringBase0 + 115)))->getIDRes(7);
        /* if (/ * bne * / 1) goto L_292c; */
        ((JUTAssertion*)(((JUTAssertion*)(((dRes_control_c*)(((char*)&@stringBase0 + 115)))->getIDRes(7)))->getSDevice()))->showAssert(((char*)&@stringBase0 + 4), 1631, ((char*)&@stringBase0 + 292));
        OSPanic(((char*)&@stringBase0 + 4), 1631, ((char*)&@stringBase0 + 50));
        /* L_292c:; */
        /* field_0x6d4 = mDoExt_J3DModel(__ct(((dRes_control_c*)(((char*)&@stringBase0 + 115)))->getIDRes(5), 1)); */
        /* if (this->field_0x6d4 == 0) goto L_2a04; */
        /* goto L_29a4; */
        /* L_2960:; */
        /* if ((0 & 65535) == (this->field_0x6cc & 255)) goto L_2984; */
        /* if ((0 & 65535) != (this->field_0x6cd & 255)) goto L_29a0; */
        /* L_2984:; */
        /* field_0x8 = 0; */
        /* L_29a0:; */
        /* L_29a4:; */
        /* if (((0 + 1) & 65535) < this->field_0x28) goto L_2960; */
        /* field_0x14 = _savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* ((dBgS_AcchCir*)((_savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1272)))->SetWall(((char*)&nodeCallBack_Kp__FP7J3DNodei + 0), (0 + 1)); */
        /* ((dBgS_Acch*)((_savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 820)))->Set((_savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 504), (_savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 484), _savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7), 1, (_savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1272), (_savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 544), 0); */
        return 1;
        /* L_2a04:; */
        /* field_0x330 = 0; */
        /* L_2a0c:; */
        return _restgpr_27(0);
}

/* 00002B14-00002B34       .text daNpc_Kp1_Create__FP10fopAc_ac_c */
static cPhs_State daNpc_Kp1_Create(fopAc_ac_c* i_this) {
    return ((daNpc_Kp1_c*)i_this)->_create();
}

/* 00002B34-00002B54       .text daNpc_Kp1_Delete__FP11daNpc_Kp1_c */
static BOOL daNpc_Kp1_Delete(daNpc_Kp1_c* i_this) {
    return ((daNpc_Kp1_c*)i_this)->_delete();
}

/* 00002B54-00002B74       .text daNpc_Kp1_Execute__FP11daNpc_Kp1_c */
static BOOL daNpc_Kp1_Execute(daNpc_Kp1_c* i_this) {
    return ((daNpc_Kp1_c*)i_this)->_execute();
}

/* 00002B74-00002B94       .text daNpc_Kp1_Draw__FP11daNpc_Kp1_c */
static BOOL daNpc_Kp1_Draw(daNpc_Kp1_c* i_this) {
    return ((daNpc_Kp1_c*)i_this)->_draw();
}

/* 00002B94-00002B9C       .text daNpc_Kp1_IsDelete__FP11daNpc_Kp1_c */
static BOOL daNpc_Kp1_IsDelete(daNpc_Kp1_c*) {
    return 1;
}

static actor_method_class l_daNpc_Kp1_Method = {
    (process_method_func)daNpc_Kp1_Create,
    (process_method_func)daNpc_Kp1_Delete,
    (process_method_func)daNpc_Kp1_Execute,
    (process_method_func)daNpc_Kp1_IsDelete,
    (process_method_func)daNpc_Kp1_Draw,
};

actor_process_profile_definition g_profile_NPC_KP1 = {
    /* Layer ID     */ fpcLy_CURRENT_e,
    /* List ID      */ 0x0007,
    /* List Prio    */ fpcPi_CURRENT_e,
    /* Proc Name    */ fpcNm_NPC_KP1_e,
    /* Proc SubMtd  */ &g_fpcLf_Method.base,
    /* Size         */ sizeof(daNpc_Kp1_c),
    /* Size Other   */ 0,
    /* Parameters   */ 0,
    /* Leaf SubMtd  */ &g_fopAc_Method.base,
    /* Draw Prio    */ fpcDwPi_NPC_KP1_e,
    /* Actor SubMtd */ &l_daNpc_Kp1_Method,
    /* Status       */ 0x08 | fopAcStts_SHOWMAP_e | fopAcStts_NOCULLEXEC_e | fopAcStts_CULL_e | fopAcStts_UNK40000_e,
    /* Group        */ fopAc_ACTOR_e,
    /* Cull Type    */ fopAc_CULLBOX_CUSTOM_e,
};
