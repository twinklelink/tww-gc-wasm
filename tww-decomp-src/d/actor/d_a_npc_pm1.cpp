/**
 * d_a_npc_pm1.cpp
 * NPC - Maggie (poor)
 */

#include "d/dolzel_rel.h" // IWYU pragma: keep
#include "d/actor/d_a_npc_pm1.h"
#include "m_Do/m_Do_ext.h"

/* 000000EC-00000144       .text __ct__15daNpc_Pm1_HIO_cFv */
daNpc_Pm1_HIO_c::daNpc_Pm1_HIO_c() {
    /* __ct__15daNpc_Pm1_HIO_cFv: 无实义指令 */
}

/* 00000144-00000300       .text nodeCallBack_Pm__FP7J3DNodei */
static BOOL nodeCallBack_Pm(J3DNode*, int) {
        /* _savegpr_27(arg0, int, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* if (/ * bne * / 1) goto L_1f8; */
        /* if (this->field_0x14 == 0) goto L_1f8; */
        /* if (this->field_0x8c != 0) goto L_d8; */
        /* field_0x90 = 0; */
        /* field_0x4 = 0; */
        /* field_0x8 = 0; */
        /* __register_global_object(((C_@3569 + 0) + 144), ((char*)&__dt__4cXyzFv + 0), ((C_@3569 + 0) + 128)); */
        /* field_0x8c = 1; */
        /* L_d8:; */
        /* if (this->field_0xa8 != 0) goto L_118; */
        /* field_0xac = 0; */
        /* field_0x4 = 0; */
        /* field_0x8 = 0; */
        /* __register_global_object(((C_@3569 + 0) + 172), ((char*)&__dt__4cXyzFv + 0), ((C_@3569 + 0) + 156)); */
        /* field_0xa8 = 1; */
        /* L_118:; */
        PSMTXCopy((this->field_0x8c + (this->field_0x18 * 48)), ((char*)&now__14mDoMtx_stack_c + 0));
        /* if (this->field_0x18 != (this->field_0x6cc & 255)) goto L_1a0; */
        PSMTXMultVec(((char*)&now__14mDoMtx_stack_c + 0), ((C_@3569 + 0) + 144), (this->field_0x14 + 1920));
        /* mDoMtx_YrotM(((char*)&now__14mDoMtx_stack_c + 0), ((-this->field_0x292) & 65535)); */
        /* mDoMtx_ZrotM(((char*)&now__14mDoMtx_stack_c + 0), ((-this->field_0x290) & 65535)); */
        PSMTXMultVec(((char*)&now__14mDoMtx_stack_c + 0), ((C_@3569 + 0) + 172), (this->field_0x14 + 1932));
        /* goto L_1d0; */
        /* L_1a0:; */
        /* if (this->field_0x18 != (this->field_0x6cd & 255)) goto L_1d0; */
        /* mDoMtx_XrotM(((char*)&now__14mDoMtx_stack_c + 0), this->field_0x296); */
        /* mDoMtx_ZrotM(((char*)&now__14mDoMtx_stack_c + 0), this->field_0x294); */
        /* L_1d0:; */
        PSMTXCopy(((char*)&now__14mDoMtx_stack_c + 0), ((char*)&mCurrentMtx__6J3DSys + 0));
        PSMTXCopy(((char*)&now__14mDoMtx_stack_c + 0), (this->field_0x8c + (this->field_0x18 * 48)));
        /* L_1f8:; */
        return _restgpr_27(1);
}

/* 0000033C-0000044C       .text createInit__11daNpc_Pm1_cFv */
void daNpc_Pm1_c::createInit() {
    ((dNpc_EventCut_c*)((this + 1792)))->setActorInfo2(((char*)&@stringBase0 + 0), this);
    /* field_0x280 = 10; */
    /* field_0x26d = 171; */
    /* field_0x26f = 169; */
    gravity = 0;
    /* field_0x798 = 0; */
    /* field_0x79c = 0; */
    /* field_0x7a0 = 0; */
    set_action();
    ((dCcD_Stts*)((this + 1336)))->Init(255, 255, this);
    /* field_0x5b8 = (this + 1336); */
    ((dCcD_Cyl*)((this + 1396)))->Set(((char*)&dNpc_cyl_src + 0));
    /* ((mDoExt_McaMorf*)(this->field_0x330))->setMorf(C_@4191); */
    /* field_0x7bc = 1; */
    setMtx();
    return 1;
}

/* 0000044C-0000055C       .text setMtx__11daNpc_Pm1_cFv */
void daNpc_Pm1_c::setMtx() {
        /* if (this->field_0x7c7 != 0) goto L_3dc; */
        playTexPatternAnm();
        /* field_0x7b4 = ((mDoExt_McaMorf*)(this->field_0x330))->play((this + 608), 0, 0); */
        /* if (this->field_0x68 >= this->field_0x7a4) goto L_3bc; */
        /* field_0x7b4 = 1; */
        /* L_3bc:; */
        /* field_0x7a4 = 0; */
        ((dBgS_Acch*)((this + 820)))->CrrPos(((char*)&g_dComIfG_gameInfo + 4768));
        /* L_3dc:; */
        /* field_0x1b5 = ((dBgS*)(((char*)&g_dComIfG_gameInfo + 4768)))->GetRoomId((this + 1052)); */
        /* field_0x1b6 = ((dBgS*)(((char*)&g_dComIfG_gameInfo + 4768)))->GetPolyColor((this + 1052)); */
        PSMTXTrans(((char*)&now__14mDoMtx_stack_c + 0));
        /* mDoMtx_YrotM(((char*)&now__14mDoMtx_stack_c + 0), this->field_0x206); */
        PSMTXCopy(((char*)&now__14mDoMtx_stack_c + 0), (this->field_0x50 + 36));
        /* ((mDoExt_McaMorf*)(this->field_0x330))->calc(); */
        return setAttention();
}

/* 0000055C-00000664       .text anmResID__11daNpc_Pm1_cFiPiPi */
void daNpc_Pm1_c::anmResID(int, int*, int*) {
    /* _savegpr_29(this, int, arg2, arg3, arg4, arg5, arg6, arg7); */
    if (/* blt */ 1) {
        /* if (/ * bge * / 1) goto L_4a4; */
    }
    /* L_4a4:; */
    if (1 != 0) {
        /* ((JUTAssertion*)(((JUTAssertion*)(_savegpr_29(this, int, arg2, arg3, arg4, arg5, arg6, arg7)))->getSDevice()))->showAssert(((char*)&@stringBase0 + 4), 283, ((char*)&@stringBase0 + 20)); */
        OSPanic(((char*)&@stringBase0 + 4), 283, ((char*)&@stringBase0 + 50));
    }
    if (/* beq */ 1) {
        /* if (/ * beq * / 1) goto L_4fc; */
    }
    /* L_4fc:; */
    if (1 != 0) {
        ((JUTAssertion*)(((JUTAssertion*)(OSPanic(((char*)&@stringBase0 + 4), 283, ((char*)&@stringBase0 + 50))))->getSDevice()))->showAssert(((char*)&@stringBase0 + 4), 284, ((char*)&@stringBase0 + 55));
        OSPanic(((char*)&@stringBase0 + 4), 284, ((char*)&@stringBase0 + 50));
    }
    base = 1;
    return _restgpr_29(1);
}

/* 00000664-00000700       .text BtpNum2ResID__11daNpc_Pm1_cFiPi */
void daNpc_Pm1_c::BtpNum2ResID(int, int*) {
    if (/* blt */ 1) {
        /* if (/ * bge * / 1) goto L_5a8; */
    }
    /* L_5a8:; */
    if (1 != 0) {
        ((JUTAssertion*)(getSDevice()))->showAssert(((char*)&@stringBase0 + 4), 305, ((char*)&@stringBase0 + 78));
        OSPanic(((char*)&@stringBase0 + 4), 305, ((char*)&@stringBase0 + 50));
    }
    base = 0;
    return ((char*)&a_btp_arc_ix_tbl$4254 + 0);
}

/* 00000700-00000744       .text setAnm_tex__11daNpc_Pm1_cFSc */
void daNpc_Pm1_c::setAnm_tex(signed char) {
    if (char != 0) {
        /* if ((char & 255) != (this->field_0x7cd & 255)) goto L_648; */
        /* field_0x7cd = char; */
    }
    /* L_648:; */
    return initTexPatternAnm(1);
}

/* 00000744-00000860       .text init_btp__11daNpc_Pm1_cFbi */
void daNpc_Pm1_c::init_btp(bool, int) {
        /* _savegpr_29(this, bool, int, arg3, arg4, arg5, arg6, arg7); */
        /* if (/ * blt * / 1) goto L_758; */
        /* ((daNpc_Pm1_c*)(_savegpr_29(this, bool, int, arg3, arg4, arg5, arg6, arg7)))->BtpNum2ResID(this->field_0x50); */
        /* field_0x6d8 = ((dRes_control_c*)(((char*)&@stringBase0 + 115)))->getIDRes(); */
        /* if (this->field_0x6d8 != 0) goto L_708; */
        ((JUTAssertion*)(((JUTAssertion*)(((dRes_control_c*)(((char*)&@stringBase0 + 115)))->getIDRes()))->getSDevice()))->showAssert(((char*)&@stringBase0 + 4), 338, ((char*)&@stringBase0 + 118));
        OSPanic(((char*)&@stringBase0 + 4), 338, ((char*)&@stringBase0 + 50));
        /* L_708:; */
        /* if (((mDoExt_btpAnm*)((_savegpr_29(this, bool, int, arg3, arg4, arg5, arg6, arg7) + 1756)))->init(this->field_0x4, this->field_0x6d8, 1, 2, 0, -1) != 0) goto L_74c; */
        return 0;
        /* L_74c:; */
        /* field_0x6f0 = 0; */
        /* field_0x6f2 = 0; */
        /* L_758:; */
        return _restgpr_29(1);
}

/* 00000860-000008A4       .text initTexPatternAnm__11daNpc_Pm1_cFb */
void daNpc_Pm1_c::initTexPatternAnm(bool) {
    if (init_btp(bool, (this->field_0x7cd & 255)) == 0) {
    }
    return 1;
}

/* 000008A4-00000968       .text playTexPatternAnm__11daNpc_Pm1_cFv */
void daNpc_Pm1_c::playTexPatternAnm() {
        /* if (this->field_0x7cd != 0) goto L_7f4; */
        /* L_7f4:; */
        /* if (((cLib_calcTimer<s>__FPs((this + 1778), arg1, arg2, arg3, arg4, arg5, arg6, arg7) & 65535) >> 5) == 0) goto L_868; */
        /* field_0x6f0 = (this->field_0x6f0 + 1); */
        /* if (((this->field_0x6f0 + 1) & 16777215) < this->field_0x6) goto L_868; */
        /* if (this->field_0x7cd == 0) goto L_838; */
        /* goto L_868; */
        /* L_838:; */
        /* field_0x6f0 = 0; */
        cM_rndF(C_@4315);
        /* L_868:; */
        return C_@4314;
}

/* 00000968-00000A34       .text setAnm_anm__11daNpc_Pm1_cFPQ211daNpc_Pm1_c9anm_prm_c */
void daNpc_Pm1_c::setAnm_anm(daNpc_Pm1_c::anm_prm_c*) {
        /* if (/ * blt * / 1) goto L_92c; */
        /* if ((this->field_0x7ce & 255) == 0) goto L_92c; */
        /* if (this->field_0x330 == 0) goto L_914; */
        anmResID((this->field_0x7ce & 255));
        /* if (/ * blt * / 1) goto L_910; */
        /* dNpc_setAnmIDRes(this->field_0x330, this->field_0xc); */
        /* L_910:; */
        /* L_914:; */
        /* field_0x7a4 = 0; */
        /* field_0x7b5 = 0; */
        /* field_0x7b4 = 0; */
        /* L_92c:; */
        return 1;
}

/* 00000A34-00000A9C       .text setAnm__11daNpc_Pm1_cFv */
void daNpc_Pm1_c::setAnm() {
    /* setAnm_tex(this->field_0x1, arg2, arg3, arg4, arg5, arg6, arg7); */
    return setAnm_anm((((char*)&a_anm_prm_tbl$4341 + 0) + ((this->field_0x7d0 & 255) << 4)), ((this->field_0x7d0 & 255) << 4));
}

/* 00000A9C-00000AA8       .text chngAnmTag__11daNpc_Pm1_cFv */
void daNpc_Pm1_c::chngAnmTag() {
    /* if (*(u8*)(this+1996) != 0) return; */
}

/* 00000AA8-00000AB4       .text ctrlAnmTag__11daNpc_Pm1_cFv */
void daNpc_Pm1_c::ctrlAnmTag() {
    /* if (*(u8*)(this+1995) != 0) return; */
}

/* 00000AB4-00000AF4       .text chngAnmAtr__11daNpc_Pm1_cFUc */
void daNpc_Pm1_c::chngAnmAtr(unsigned char) {
    if ((char & 16777215) < 1) {
        /* if ((char & 16777215) != this->field_0x7cb) goto L_9f8; */
        /* field_0x7cb = char; */
    }
    /* L_9f8:; */
    return setAnm_ATR(1);
}

/* 00000AF4-00000AF8       .text ctrlAnmAtr__11daNpc_Pm1_cFv */
void daNpc_Pm1_c::ctrlAnmAtr() {
}

/* 00000AF8-00000B60       .text setAnm_ATR__11daNpc_Pm1_cFi */
void daNpc_Pm1_c::setAnm_ATR(int) {
    if (int != 0) {
        /* setAnm_tex(this->field_0x1, arg2, arg3, arg4, arg5, arg6, arg7); */
    }
    return setAnm_anm((((char*)&a_anm_prm_tbl$4377 + 0) + (this->field_0x7cb << 4)), (this->field_0x7cb << 4));
}

/* 00000B60-00000C1C       .text anmAtr__11daNpc_Pm1_cFUs */
void daNpc_Pm1_c::anmAtr(unsigned short) {
        /* if ((short & 65535) != 6) goto L_afc; */
        /* if (this->field_0x7d6 != 0) goto L_ac4; */
        /* field_0x7cc = 255; */
        /* chngAnmAtr(this->field_0x5bcf); */
        /* field_0x7d6 = (this->field_0x7d6 + 1); */
        /* L_ac4:; */
        /* if (this->field_0x5bd0 == 255) goto L_b0c; */
        /* if (this->field_0x5bd0 == this->field_0x7cc) goto L_b0c; */
        /* field_0x5bd0 = 255; */
        chngAnmTag();
        /* goto L_b0c; */
        /* L_afc:; */
        /* if (255 != 14) goto L_b0c; */
        /* field_0x7d6 = 0; */
        /* L_b0c:; */
        ctrlAnmAtr();
        return ctrlAnmTag();
}

/* 00000C1C-00000C74       .text setStt__11daNpc_Pm1_cFSc */
void daNpc_Pm1_c::setStt(signed char) {
    /* field_0x7d0 = char; */
    if ((this->field_0x7d0 & 255) != 2) {
        /* if (/ * bge * / 1) goto L_b74; */
    } else {
        /* field_0x7d2 = 1; */
        /* field_0x7cb = 255; */
        /* goto L_b78; */
    }
    /* L_b74:; */
    /* L_b78:; */
    return setAnm();
}

/* 00000C74-00000C7C       .text next_msgStatus__11daNpc_Pm1_cFPUl */
int daNpc_Pm1_c::next_msgStatus(unsigned long*) {
    return 0x10;
}

/* 00000C7C-00000C84       .text getMsg__11daNpc_Pm1_cFv */
int daNpc_Pm1_c::getMsg() {
    return 0;
}

/* 00000C84-00000CD4       .text eventOrder__11daNpc_Pm1_cFv */
void daNpc_Pm1_c::eventOrder() {
    if ((this->field_0x7cf & 255) != 1) {
        /* if ((this->field_0x7cf & 255) == 2) goto L_bd8; */
    }
    if (this->field_0x7cf == 1) {
    }
    /* L_bd8:; */
    return fopAcM_orderSpeakEvent(this);
}

/* 00000CD4-00000D14       .text checkOrder__11daNpc_Pm1_cFv */
void daNpc_Pm1_c::checkOrder() {
    if ((this->field_0x7cf & 255) != 1) {
    }
    /* field_0x7cf = 0; */
    /* field_0x7c5 = 1; */
    return this;
}

/* 00000D14-00000EA4       .text lookBack__11daNpc_Pm1_cFv */
void daNpc_Pm1_c::lookBack() {
        /* _savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* if ((this->field_0x7d2 & 255) == 2) goto L_d00; */
        /* if (/ * bge * / 1) goto L_ca4; */
        /* if ((this->field_0x7d2 & 255) == 0) goto L_d34; */
        /* if (/ * bge * / 1) goto L_cb0; */
        /* goto L_d34; */
        /* L_ca4:; */
        /* if ((this->field_0x7d2 & 255) >= 4) goto L_d34; */
        /* goto L_d30; */
        /* L_cb0:; */
        dNpc_playerEyePos();
        /* goto L_d34; */
        /* L_d00:; */
        /* goto L_d34; */
        /* L_d30:; */
        /* L_d34:; */
        /* if (this->field_0x29a == 0) goto L_d60; */
        /* cLib_addCalcAngleS2((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1968), this->field_0x1e, 4, 2048); */
        /* goto L_d68; */
        /* L_d60:; */
        /* field_0x7b0 = 0; */
        /* L_d68:; */
        /* return _restgpr_28(((dNpc_JntCtrl_c*)((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 656)))->lookAtTarget((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 518))); */
}

/* 00000EA4-00000F24       .text chkAttention__11daNpc_Pm1_cFv */
void daNpc_Pm1_c::chkAttention() {
    if (((dAttention_c*)(((char*)&g_dComIfG_gameInfo + 22536)))->LockonTruth() == 0) {
    }
    return ((this - ((dAttention_c*)(((char*)&g_dComIfG_gameInfo + 22536)))->ActionTarget(0)) >> 5);
}

/* 00000F24-00000F88       .text setAttention__11daNpc_Pm1_cFv */
void daNpc_Pm1_c::setAttention() {
    /* field_0x274 = 0; */
    /* field_0x278 = (this->field_0x1fc + this->field_0x20); */
    /* field_0x27c = 0; */
    if (this->field_0x7bc == 0) {
    }
    eyePos = 0;
    /* field_0x264 = 0; */
    /* field_0x268 = 0; */
    /* field_0x7bc = 0; */
    return this;
}

/* 00000F88-00000FB4       .text decideType__11daNpc_Pm1_cFi */
void daNpc_Pm1_c::decideType(int) {
    /* field_0x7d3 = -1; */
    if (this->field_0x8 != 356) {
    } else {
        /* field_0x7d3 = 0; */
        /* field_0x7d4 = 0; */
    }
    return 1;
}

/* 00000FB4-0000103C       .text event_actionInit__11daNpc_Pm1_cFi */
void daNpc_Pm1_c::event_actionInit(int) {
    /* _savegpr_28(this, int, arg2, arg3, arg4, arg5, arg6, arg7); */
    if (((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMySubstanceP() != 0) {
    }
    return _restgpr_28(((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMySubstanceP());
}

/* 0000103C-0000104C       .text event_action__11daNpc_Pm1_cFv */
void daNpc_Pm1_c::event_action() {
    /* return *(u8*)(this+1994) != 0; */
}

/* 0000104C-00001154       .text privateCut__11daNpc_Pm1_cFv */
void daNpc_Pm1_c::privateCut() {
        /* _savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* if (((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMyStaffId(((char*)&@stringBase0 + 0), 0, 0) == -1) goto L_1050; */
        /* field_0x7c9 = ((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMyActIdx(((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMyStaffId(((char*)&@stringBase0 + 0), 0, 0), ((char*)&cut_name_tbl$4547 + 0), 1, 1, 0); */
        /* if ((this->field_0x7c9 & 255) != -1) goto L_fec; */
        ((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->cutEnd(((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMyStaffId(((char*)&@stringBase0 + 0), 0, 0));
        /* goto L_1050; */
        /* L_fec:; */
        /* if (((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getIsAddvance(((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMyStaffId(((char*)&@stringBase0 + 0), 0, 0)) == 0) goto L_101c; */
        /* if (this->field_0x7c9 == 0) goto L_1010; */
        /* goto L_101c; */
        /* L_1010:; */
        /* ((daNpc_Pm1_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->event_actionInit(((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMyStaffId(((char*)&@stringBase0 + 0), 0, 0)); */
        /* L_101c:; */
        /* if (this->field_0x7c9 == 0) goto L_102c; */
        /* goto L_1038; */
        /* L_102c:; */
        /* ((daNpc_Pm1_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->event_action(); */
        /* goto L_103c; */
        /* L_1038:; */
        /* L_103c:; */
        /* if (1 == 0) goto L_1050; */
        /* L_1050:; */
        return _restgpr_29(((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->cutEnd(((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMyStaffId(((char*)&@stringBase0 + 0), 0, 0)));
}

/* 00001154-00001174       .text endEvent__11daNpc_Pm1_cFv */
void daNpc_Pm1_c::endEvent() {
    /* field_0x7cb = 255; */
    return this;
}

/* 00001174-000011D4       .text event_proc__11daNpc_Pm1_cFv */
void daNpc_Pm1_c::event_proc() {
    if (((dNpc_EventCut_c*)((this + 1792)))->cutProc() != 0) {
        privateCut();
    }
    return lookBack();
}

/* 000011D4-00001280       .text set_action__11daNpc_Pm1_cFM11daNpc_Pm1_cFPCvPvPv_iPv */
void daNpc_Pm1_c::set_action(int (daNpc_Pm1_c::*)(void*), void*) {
        /* if (__ptmf_cmpr((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1780)) == 0) goto L_1178; */
        /* if (__ptmf_test((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1780)) == 0) goto L_1144; */
        /* field_0x7d5 = -1; */
        /* __ptmf_scall(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* L_1144:; */
        /* field_0x7d5 = 0; */
        /* __ptmf_scall(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* L_1178:; */
        return _restgpr_29(1);
}

/* 00001280-00001378       .text wait01__11daNpc_Pm1_cFv */
void daNpc_Pm1_c::wait01() {
        /* if (this->field_0x7c5 == 0) goto L_1238; */
        /* field_0x7b7 = 255; */
        /* if (this->field_0x52b8 == 1) goto L_11ec; */
        /* if (this->field_0x52b8 == 2) goto L_11ec; */
        /* if (this->field_0x52b8 != 3) goto L_11f0; */
        /* L_11ec:; */
        /* L_11f0:; */
        /* if (1 == 0) goto L_1220; */
        /* if (((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->ChkPresentEnd() == 0) goto L_121c; */
        /* goto L_1220; */
        /* L_121c:; */
        /* L_1220:; */
        /* if (0 == 0) goto L_1270; */
        setStt(2);
        /* goto L_1270; */
        /* L_1238:; */
        /* field_0x7cf = 2; */
        /* if (this->field_0x7c4 == 0) goto L_1258; */
        /* field_0x7d2 = 1; */
        /* goto L_1270; */
        /* L_1258:; */
        /* field_0x7d2 = 3; */
        /* field_0x29a = 1; */
        /* L_1270:; */
        return 1;
}

/* 00001378-00001408       .text talk01__11daNpc_Pm1_cFv */
void daNpc_Pm1_c::talk01() {
        talk(1);
        /* if (this->field_0x6b0 == 0) goto L_1304; */
        /* if (this->field_0xf8 == 6) goto L_1304; */
        /* if (/ * bge * / 1) goto L_12d0; */
        /* if (this->field_0xf8 == 2) goto L_1304; */
        /* goto L_1304; */
        /* L_12d0:; */
        /* if (this->field_0xf8 == 19) goto L_12dc; */
        /* goto L_1304; */
        /* L_12dc:; */
        /* field_0x7b7 = 255; */
        /* setStt(this->field_0x7d1); */
        /* field_0x7c8 = 0; */
        /* field_0x7c5 = 0; */
        endEvent();
        /* L_1304:; */
        return 1;
}

/* 00001408-000014BC       .text wait_action1__11daNpc_Pm1_cFPv */
void daNpc_Pm1_c::wait_action1(void*) {
        /* if (this->field_0x7d5 != 0) goto L_1354; */
        /* setStt(1, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* field_0x7d5 = (this->field_0x7d5 + 1); */
        /* goto L_13b8; */
        /* L_1354:; */
        /* if (/ * beq * / 1) goto L_13b8; */
        /* field_0x7c4 = ((daNpc_Pm1_c*)(this->field_0x7d5))->chkAttention(); */
        /* if ((this->field_0x7d0 & 255) == 2) goto L_1388; */
        /* if (/ * bge * / 1) goto L_13a8; */
        /* if ((this->field_0x7d0 & 255) >= 1) goto L_1398; */
        /* goto L_13a8; */
        /* L_1388:; */
        /* field_0x7c0 = talk01(); */
        /* goto L_13b0; */
        /* L_1398:; */
        /* field_0x7c0 = wait01(); */
        /* goto L_13b0; */
        /* L_13a8:; */
        /* field_0x7c0 = 0; */
        /* L_13b0:; */
        lookBack();
        /* L_13b8:; */
        return 1;
}

/* 000014BC-00001558       .text demo__11daNpc_Pm1_cFv */
void daNpc_Pm1_c::demo() {
    if (demoActorID == 0) {
        /* if (this->field_0x7c7 != 0) goto L_1454; */
        /* field_0x7c7 = 0; */
    } else {
        /* field_0x7c7 = 1; */
        ((dDemo_object_c*)((this->field_0x5abc + 32)))->getActor(demoActorID);
        dDemo_setDemoData(this, 106, this->field_0x330, ((char*)&@stringBase0 + 115), 0, 0, 0, 0);
    }
    /* L_1454:; */
    /* return this->field_0x7c7; */
}

/* 00001558-000016BC       .text _draw__11daNpc_Pm1_cFv */
BOOL daNpc_Pm1_c::_draw() {
    /* ((dScnKy_env_light_c*)(((char*)&g_env_light + 0)))->settingTevStruct(0, (_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 504), (_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 268)); */
    /* ((dScnKy_env_light_c*)(((char*)&g_env_light + 0)))->setLightTevColorType(this->field_0x50, (_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 268)); */
    /* ((mDoExt_btpAnm*)((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1756)))->entry(this->field_0x4, this->field_0x6f0); */
    /* ((mDoExt_McaMorf*)(this->field_0x330))->entryDL(); */
    /* ((J3DMaterialTable*)((this->field_0x4 + 88)))->removeTexNoAnimator(this->field_0x6e4); */
    /* dNpc_setShadowModel(this->field_0x6d4, this->field_0x4, this->field_0x50); */
    /* field_0x6d0 = ((dDlst_shadowControl_c*)(((char*)&g_dComIfG_gameInfo + 24416)))->setReal(this->field_0x6d0, 1, this->field_0x6d4); */
    if (this->field_0x6d0 == 0) {
        /* ((dDlst_shadowControl_c*)(((char*)&g_dComIfG_gameInfo + 24416)))->setSimple((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 504), ((cBgS*)(((char*)&g_dComIfG_gameInfo + 4768)))->GetTriPla(this->field_0x41e, this->field_0x41c), 0, ((char*)&mSimpleTexObj__21dDlst_shadowControl_c + 0)); */
    }
    /* dSnap_RegistFig(90, _savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
    return _restgpr_28(1);
}

/* 000016BC-00001818       .text _execute__11daNpc_Pm1_cFv */
BOOL daNpc_Pm1_c::_execute() {
        /* if (this->field_0x7b8 != 0) goto L_1628; */
        /* field_0x774 = 0; */
        /* field_0x778 = 0; */
        /* field_0x77c = 0; */
        /* field_0x7b8 = 1; */
        /* L_1628:; */
        /* ((dNpc_JntCtrl_c*)((this + 656)))->setParam(this->field_0x14, this->field_0x16, this->field_0x18, this->field_0x1a, this->field_0xc, this->field_0xe, this->field_0x10); */
        checkOrder();
        /* if (demo() != 0) goto L_16d4; */
        /* if (this->field_0x529a == 0) goto L_16a8; */
        /* if (this->field_0xf8 == 1) goto L_16a8; */
        event_proc();
        /* goto L_16d4; */
        /* L_16a8:; */
        __ptmf_scall(this, 0);
        /* L_16d4:; */
        eventOrder();
        /* if (this->field_0x7c7 != 0) goto L_16f4; */
        fopAcM_posMoveF(this, (this + 1336));
        /* L_16f4:; */
        setMtx();
        setCollision(C_@4758);
        return 1;
}

/* 00001818-0000189C       .text _delete__11daNpc_Pm1_cFv */
BOOL daNpc_Pm1_c::_delete() {
    /* dComIfG_resDelete((this + 1732), ((char*)&@stringBase0 + 115), arg2); */
    if (this->field_0x330 != 0) {
        /* ((mDoExt_McaMorf*)(this->field_0x330))->stopZelAnime(); */
    }
    if (this->field_0x8 >= 0) {
        /* if (/ * bge * / 1) goto L_1798; */
        /* ((mDoHIO_subRoot_c*)(((char*)&mDoHIO_root + 4)))->deleteChild(this->field_0x4); */
    }
    /* L_1798:; */
    return 1;
}

/* 0000189C-000018BC       .text CheckCreateHeap__FP10fopAc_ac_c */
static BOOL CheckCreateHeap(fopAc_ac_c* i_this) {
    ((daNpc_Pm1_c*)i_this)->CreateHeap();
    return TRUE;
}

/* 000018BC-00001A2C       .text _create__11daNpc_Pm1_cFv */
cPhs_State daNpc_Pm1_c::_create() {
        /* _savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* if (/ * bne * / 1) goto L_1814; */
        /* if (_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) == 0) goto L_1808; */
        __ct();
        /* L_1808:; */
        /* L_1814:; */
        /* if (((daNpc_Pm1_c*)(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->decideType((this->field_0xb0 & 16777215)) != 0) goto L_1834; */
        return 5;
        /* L_1834:; */
        /* if (dComIfG_resLoad((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1732), ((char*)&@stringBase0 + 115)) == 4) goto L_1858; */
        /* goto L_1928; */
        /* L_1858:; */
        /* if (this->field_0x8 >= 0) goto L_1898; */
        /* field_0x4 = ((mDoHIO_subRoot_c*)(((char*)&mDoHIO_root + 4)))->createChild(((char*)&@stringBase0 + 161), ((char*)&l_HIO + 0)); */
        /* L_1898:; */
        /* field_0x8 = (this->field_0x8 + 1); */
        /* if (fopAcM_entrySolidHeap(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7), ((char*)&CheckCreateHeap__FP10fopAc_ac_c + 0), ((char*)&a_heap_size_tbl$4783 + 0)) == 0) goto L_1908; */
        cullMtx = (this->field_0x50 + 36);
        /* fopAcM_setCullSizeBox(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* goto L_1910; */
        /* L_1908:; */
        return 5;
        /* L_1910:; */
        /* if (((daNpc_Pm1_c*)(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->createInit() != 0) goto L_1924; */
        /* L_1924:; */
        /* L_1928:; */
        return _restgpr_28(5);
}

/* 00001E5C-00002168       .text CreateHeap__11daNpc_Pm1_cFv */
void daNpc_Pm1_c::CreateHeap() {
        /* _savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        ((dRes_control_c*)(((char*)&@stringBase0 + 115)))->getIDRes(6);
        /* if (/ * bne * / 1) goto L_1dfc; */
        ((JUTAssertion*)(((JUTAssertion*)(((dRes_control_c*)(((char*)&@stringBase0 + 115)))->getIDRes(6)))->getSDevice()))->showAssert(((char*)&@stringBase0 + 4), 1319, ((char*)&@stringBase0 + 172));
        OSPanic(((char*)&@stringBase0 + 4), 1319, ((char*)&@stringBase0 + 50));
        /* L_1dfc:; */
        __nw(180);
        /* if (/ * beq * / 1) goto L_1e80; */
        /* L_1e80:; */
        /* field_0x330 = __ct(((dRes_control_c*)(((char*)&@stringBase0 + 115)))->getIDRes(5), 1); */
        /* if (this->field_0x330 == 0) goto L_2060; */
        /* if (this->field_0x50 == 0) goto L_2058; */
        /* field_0x6cc = ((JUTNameTab*)(this->field_0x54))->getIndex(((char*)&@stringBase0 + 188)); */
        /* if (this->field_0x6cc != 0) goto L_1ef8; */
        /* ((JUTAssertion*)(((JUTAssertion*)(((JUTNameTab*)(this->field_0x54))->getIndex(((char*)&@stringBase0 + 188))))->getSDevice()))->showAssert(((char*)&@stringBase0 + 4), 1338, ((char*)&@stringBase0 + 193)); */
        OSPanic(((char*)&@stringBase0 + 4), 1338, ((char*)&@stringBase0 + 50));
        /* L_1ef8:; */
        /* field_0x6cd = ((JUTNameTab*)(this->field_0x54))->getIndex(((char*)&@stringBase0 + 213)); */
        /* if (this->field_0x6cd != 0) goto L_1f54; */
        /* ((JUTAssertion*)(((JUTAssertion*)(((JUTNameTab*)(this->field_0x54))->getIndex(((char*)&@stringBase0 + 213))))->getSDevice()))->showAssert(((char*)&@stringBase0 + 4), 1340, ((char*)&@stringBase0 + 222)); */
        OSPanic(((char*)&@stringBase0 + 4), 1340, ((char*)&@stringBase0 + 50));
        /* L_1f54:; */
        /* field_0x7cd = (this->field_0x7d3 & 255); */
        /* if (((daNpc_Pm1_c*)(_savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->initTexPatternAnm(0) == 0) goto L_2058; */
        /* field_0x6d4 = mDoExt_J3DModel(((daNpc_Pm1_c*)(_savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->initTexPatternAnm(0)); */
        /* if (this->field_0x6d4 == 0) goto L_2058; */
        /* goto L_1ff8; */
        /* L_1fb4:; */
        /* if ((0 & 65535) == (this->field_0x6cc & 255)) goto L_1fd8; */
        /* if ((0 & 65535) != (this->field_0x6cd & 255)) goto L_1ff4; */
        /* L_1fd8:; */
        /* field_0x8 = 0; */
        /* L_1ff4:; */
        /* L_1ff8:; */
        /* if (((0 + 1) & 65535) < this->field_0x28) goto L_1fb4; */
        /* field_0x14 = _savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* ((dBgS_AcchCir*)((_savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1272)))->SetWall(((char*)&nodeCallBack_Pm__FP7J3DNodei + 0), (0 + 1)); */
        /* ((dBgS_Acch*)((_savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 820)))->Set((_savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 504), (_savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 484), _savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7), 1, (_savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1272), (_savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 544), 0); */
        return 1;
        /* L_2058:; */
        /* field_0x330 = 0; */
        /* L_2060:; */
        return _restgpr_27(0);
}

/* 00002168-00002188       .text daNpc_Pm1_Create__FP10fopAc_ac_c */
static cPhs_State daNpc_Pm1_Create(fopAc_ac_c* i_this) {
    return ((daNpc_Pm1_c*)i_this)->_create();
}

/* 00002188-000021A8       .text daNpc_Pm1_Delete__FP11daNpc_Pm1_c */
static BOOL daNpc_Pm1_Delete(daNpc_Pm1_c* i_this) {
    return ((daNpc_Pm1_c*)i_this)->_delete();
}

/* 000021A8-000021C8       .text daNpc_Pm1_Execute__FP11daNpc_Pm1_c */
static BOOL daNpc_Pm1_Execute(daNpc_Pm1_c* i_this) {
    return ((daNpc_Pm1_c*)i_this)->_execute();
}

/* 000021C8-000021E8       .text daNpc_Pm1_Draw__FP11daNpc_Pm1_c */
static BOOL daNpc_Pm1_Draw(daNpc_Pm1_c* i_this) {
    return ((daNpc_Pm1_c*)i_this)->_draw();
}

/* 000021E8-000021F0       .text daNpc_Pm1_IsDelete__FP11daNpc_Pm1_c */
static BOOL daNpc_Pm1_IsDelete(daNpc_Pm1_c*) {
    return 1;
}

static actor_method_class l_daNpc_Pm1_Method = {
    (process_method_func)daNpc_Pm1_Create,
    (process_method_func)daNpc_Pm1_Delete,
    (process_method_func)daNpc_Pm1_Execute,
    (process_method_func)daNpc_Pm1_IsDelete,
    (process_method_func)daNpc_Pm1_Draw,
};

actor_process_profile_definition g_profile_NPC_PM1 = {
    /* Layer ID     */ fpcLy_CURRENT_e,
    /* List ID      */ 0x0007,
    /* List Prio    */ fpcPi_CURRENT_e,
    /* Proc Name    */ fpcNm_NPC_PM1_e,
    /* Proc SubMtd  */ &g_fpcLf_Method.base,
    /* Size         */ sizeof(daNpc_Pm1_c),
    /* Size Other   */ 0,
    /* Parameters   */ 0,
    /* Leaf SubMtd  */ &g_fopAc_Method.base,
    /* Draw Prio    */ fpcDwPi_NPC_PM1_e,
    /* Actor SubMtd */ &l_daNpc_Pm1_Method,
    /* Status       */ fopAcStts_NOCULLEXEC_e | fopAcStts_CULL_e | fopAcStts_UNK40000_e,
    /* Group        */ fopAc_ACTOR_e,
    /* Cull Type    */ fopAc_CULLBOX_CUSTOM_e,
};
