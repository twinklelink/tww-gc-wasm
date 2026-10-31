/**
 * d_a_npc_zk1.cpp
 * NPC - Rito Chieftain
 */

#include "d/dolzel_rel.h" // IWYU pragma: keep
#include "d/actor/d_a_npc_zk1.h"

/* 000000EC-00000150       .text __ct__15daNpc_Zk1_HIO_cFv */
daNpc_Zk1_HIO_c::daNpc_Zk1_HIO_c() {
    /* __ct__15daNpc_Zk1_HIO_cFv: 无实义指令 */
}

/* 00000198-000001E4       .text nodeCB_Head__FP7J3DNodei */
static BOOL nodeCB_Head(J3DNode* i_node, int i_switch) {
    if (i_switch == 0) {
    if (j3dSys.getModel()->getUserArea() != NULL) {
    reinterpret_cast<daNpc_Zk1_c*>(j3dSys.getModel()->getUserArea())
    ->_nodeCB_Head(i_node, j3dSys.getModel());
    }
    }
    return TRUE;
}

/* 000001E4-00000304       .text _nodeCB_Head__11daNpc_Zk1_cFP7J3DNodeP8J3DModel */
void daNpc_Zk1_c::_nodeCB_Head(J3DNode*, J3DModel*) {
    /* _savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
    if (this->field_0xe0 != 0) {
        /* field_0xe4 = 0; */
        /* field_0x4 = 0; */
        /* field_0x8 = 0; */
        /* __register_global_object(((C_@3569 + 0) + 228), ((char*)&__dt__4cXyzFv + 0), ((C_@3569 + 0) + 212)); */
        /* field_0xe0 = 1; */
    }
    PSMTXCopy((this->field_0x8c + (this->field_0x18 * 48)), ((char*)&now__14mDoMtx_stack_c + 0));
    m750 = 0;
    /* field_0x754 = 0; */
    /* field_0x758 = 0; */
    /* PSMTXMultVec(((char*)&now__14mDoMtx_stack_c + 0), ((C_@3569 + 0) + 228), (_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1836)); */
    /* mDoMtx_XrotM(((char*)&now__14mDoMtx_stack_c + 0), this->field_0x292); */
    /* mDoMtx_ZrotM(((char*)&now__14mDoMtx_stack_c + 0), ((-this->field_0x290) & 65535)); */
    PSMTXCopy(((char*)&now__14mDoMtx_stack_c + 0), ((char*)&mCurrentMtx__6J3DSys + 0));
    return _restgpr_28(PSMTXCopy(((char*)&now__14mDoMtx_stack_c + 0), (this->field_0x8c + (this->field_0x18 * 48))));
}

/* 00000340-0000038C       .text nodeCB_BackBone__FP7J3DNodei */
static BOOL nodeCB_BackBone(J3DNode* i_node, int i_switch) {
    if (i_switch == 0) {
    if (j3dSys.getModel()->getUserArea() != NULL) {
    reinterpret_cast<daNpc_Zk1_c*>(j3dSys.getModel()->getUserArea())
    ->_nodeCB_BackBone(i_node, j3dSys.getModel());
    }
    }
    return TRUE;
}

/* 0000038C-0000042C       .text _nodeCB_BackBone__11daNpc_Zk1_cFP7J3DNodeP8J3DModel */
void daNpc_Zk1_c::_nodeCB_BackBone(J3DNode*, J3DModel*) {
    /* _savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
    PSMTXCopy();
    /* mDoMtx_XrotM(((char*)&now__14mDoMtx_stack_c + 0), this->field_0x296); */
    /* mDoMtx_ZrotM(((char*)&now__14mDoMtx_stack_c + 0), ((-this->field_0x294) & 65535)); */
    PSMTXCopy(((char*)&now__14mDoMtx_stack_c + 0), ((char*)&mCurrentMtx__6J3DSys + 0));
    return _restgpr_29(PSMTXCopy(((char*)&now__14mDoMtx_stack_c + 0)));
}

/* 0000042C-0000044C       .text CheckCreateHeap__FP10fopAc_ac_c */
static BOOL CheckCreateHeap(fopAc_ac_c* i_this) {
    ((daNpc_Zk1_c*)i_this)->CreateHeap();
    return TRUE;
}

/* 0000044C-00000518       .text init_ZK1_0__11daNpc_Zk1_cFv */
void daNpc_Zk1_c::init_ZK1_0() {
    if (((dSv_player_collect_c*)(((char*)&g_dComIfG_gameInfo + 180)))->isSymbol(1) != 0) {
        set_action();
        /* field_0x797 = ((1 - ((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->isEventBit(6146)) >> 5); */
        /* field_0x798 = ((1 - ((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->isEventBit(7169)) >> 5); */
        return 1;
    }
    return 0;
}

/* 00000518-00000698       .text createInit__11daNpc_Zk1_cFv */
void daNpc_Zk1_c::createInit() {
    /* field_0x77c = ((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getEventIdx(base, 255, arg3); */
    ((dNpc_EventCut_c*)((this + 708)))->setActorInfo2(((char*)&@stringBase0 + 6), this);
    /* field_0x280 = 10; */
    /* field_0x26d = 169; */
    /* field_0x26f = 169; */
    gravity = 0;
    /* field_0x7a9 = 4; */
    if (this->field_0x7af != 0) {
    } else {
        init_ZK1_0();
        /* goto L_4d4; */
    }
    /* L_4d4:; */
    if (0 != 0) {
        return 0;
    }
    ((dCcD_Stts*)((this + 1336)))->Init(255, 255, this);
    /* field_0x5b8 = (this + 1336); */
    ((dCcD_Cyl*)((this + 1396)))->Set(((char*)&dNpc_cyl_src + 0));
    ((dBgS_Acch*)((this + 820)))->CrrPos(((char*)&g_dComIfG_gameInfo + 4768));
    play_animation();
    /* field_0x1b5 = ((dBgS*)(((char*)&g_dComIfG_gameInfo + 4768)))->GetRoomId((this + 1052)); */
    /* field_0x1b6 = ((dBgS*)(((char*)&g_dComIfG_gameInfo + 4768)))->GetPolyColor((this + 1052)); */
    /* ((mDoExt_McaMorf*)(this->field_0x330))->setMorf(C_@4178); */
    setMtx(1);
    return 1;
}

/* 00000698-00000740       .text play_animation__11daNpc_Zk1_cFv */
void daNpc_Zk1_c::play_animation() {
    play_btp_anm();
    if (/* beq */ 1) {
        ((dBgS*)(((char*)&g_dComIfG_gameInfo + 4768)))->GetMtrlSndId((this + 1052));
    }
    /* field_0x794 = ((mDoExt_McaMorf*)(this->field_0x330))->play((this + 608), ((dBgS*)(((char*)&g_dComIfG_gameInfo + 4768)))->GetMtrlSndId((this + 1052)), dComIfGp_getReverb((this->field_0x20a & 255))); */
    /* if (this->field_0x68 > this->field_0x768) { */
        /* field_0x794 = 1; */
    /* field_0x768 = 0; */
    /* return this->field_0x330; */

/* 00000740-000007F0       .text setMtx__11daNpc_Zk1_cFb */
void daNpc_Zk1_c::setMtx(bool) {
    /* field_0x18 = 0; */
    /* field_0x1c = 0; */
    /* field_0x20 = 0; */
    /* PSMTXTrans(((char*)&now__14mDoMtx_stack_c + 0), bool, arg2, arg3, arg4, arg5, arg6, arg7); */
    /* mDoMtx_ZXYrotM(((char*)&now__14mDoMtx_stack_c + 0), this->field_0x71e, this->field_0x720); */
    PSMTXCopy(((char*)&now__14mDoMtx_stack_c + 0), (this->field_0x50 + 36));
    /* ((mDoExt_McaMorf*)(this->field_0x330))->calc(); */
    return setAttention(bool);
}

/* 000007F0-00000804       .text bckResID__11daNpc_Zk1_cFi */
int daNpc_Zk1_c::bckResID(int anmNum) {
    static const int a_resID_tbl[] = {
        2, 3, 0, 1, 5,
    };
    return a_resID_tbl[anmNum];
}

/* 00000804-00000818       .text btpResID__11daNpc_Zk1_cFi */
int daNpc_Zk1_c::btpResID(int anmNum) {
    static const int a_resID_tbl[] = {
        5,
    };
    return a_resID_tbl[anmNum];
}

/* 00000818-0000091C       .text setBtp__11daNpc_Zk1_cFScb */
void daNpc_Zk1_c::setBtp(signed char, bool) {
    /* _savegpr_27(this, char, bool, arg3, arg4, arg5, arg6, arg7); */
    if (/* bge */ 1) {
        return 0;
    }
    /* ((dRes_control_c*)((_savegpr_27(this, char, bool, arg3, arg4, arg5, arg6, arg7) + 1742)))->getIDRes((((daNpc_Zk1_c*)(0))->btpResID() & 65535), ((char*)&g_dComIfG_gameInfo + -16460), 64); */
    if (/* bne */ 1) {
        /* ((JUTAssertion*)(((JUTAssertion*)(((dRes_control_c*)((_savegpr_27(this, char, bool, arg3, arg4, arg5, arg6, arg7) + 1742)))->getIDRes((((daNpc_Zk1_c*)(0))->btpResID() & 65535), ((char*)&g_dComIfG_gameInfo + -16460), 64)))->getSDevice()))->showAssert(((char*)&@stringBase0 + 10), 399, ((char*)&@stringBase0 + 26)); */
        OSPanic(((char*)&@stringBase0 + 10), 399, ((char*)&@stringBase0 + 37));
    }
    /* field_0x6ec = 0; */
    /* field_0x6ee = 0; */
    /* return _restgpr_27(((mDoExt_btpAnm*)((_savegpr_27(this, char, bool, arg3, arg4, arg5, arg6, arg7) + 1752)))->init(this->field_0x4)); */
}

/* 0000091C-0000093C       .text init_texPttrnAnm__11daNpc_Zk1_cFScb */
void daNpc_Zk1_c::init_texPttrnAnm(signed char, bool) {
    this->setBtp(0, 0);
}

/* 0000093C-000009D8       .text play_btp_anm__11daNpc_Zk1_cFv */
void daNpc_Zk1_c::play_btp_anm() {
        /* if (this->field_0x7a8 != 0) goto L_890; */
        /* if (cLib_calcTimer<s>__FPs((this + 1774), arg1, arg2, arg3, arg4, arg5, arg6, arg7) != 0) goto L_8d4; */
        /* L_890:; */
        /* field_0x6ec = (this->field_0x6ec + 1); */
        /* if (this->field_0x6ec < (this->field_0x6 & 16777215)) goto L_8d4; */
        /* if (this->field_0x7a8 == 0) goto L_8bc; */
        /* field_0x6ec = (this->field_0x6 & 16777215); */
        /* goto L_8d4; */
        /* L_8bc:; */
        /* field_0x6ee = cLib_getRndValue<i>__Fii(60, 90); */
        /* field_0x6ec = 0; */
        /* L_8d4:; */
        return cLib_getRndValue<i>__Fii(60, 90);
}

/* 000009D8-00000A74       .text setAnm_anm__11daNpc_Zk1_cFPQ211daNpc_Zk1_c9anm_prm_c */
void daNpc_Zk1_c::setAnm_anm(daNpc_Zk1_c::anm_prm_c*) {
        /* if (/ * blt * / 1) goto L_970; */
        /* if ((this->field_0x7a9 & 255) != 0) goto L_92c; */
        /* goto L_970; */
        /* L_92c:; */
        dNpc_setAnmIDRes(this->field_0x330, this->field_0xc, bckResID(), -1, (this + 1742));
        /* field_0x794 = 0; */
        /* field_0x795 = 0; */
        /* field_0x768 = 0; */
        /* L_970:; */
        return C_@4178;
}

/* 00000A74-00000AE0       .text setAnm__11daNpc_Zk1_cFv */
void daNpc_Zk1_c::setAnm() {
    /* init_texPttrnAnm(this->field_0x1, 1, arg3, arg4, arg5, arg6, arg7); */
    return setAnm_anm((((char*)&a_anm_prm_tbl$4378 + 0) + ((this->field_0x7ab & 255) << 4)), ((this->field_0x7ab & 255) << 4));
}

/* 00000AE0-00000AE4       .text chngAnmTag__11daNpc_Zk1_cFv */
void daNpc_Zk1_c::chngAnmTag() {
}

/* 00000AE4-00000AE8       .text ctrlAnmTag__11daNpc_Zk1_cFv */
void daNpc_Zk1_c::ctrlAnmTag() {
}

/* 00000AE8-00000B28       .text chngAnmAtr__11daNpc_Zk1_cFUc */
void daNpc_Zk1_c::chngAnmAtr(unsigned char) {
        /* if ((char & 16777215) == this->field_0x7a6) goto L_a2c; */
        /* if ((char & 16777215) <= 4) goto L_a24; */
        /* goto L_a2c; */
        /* L_a24:; */
        /* field_0x7a6 = char; */
        /* L_a2c:; */
        return setAnm_ATR();
}

/* 00000B28-00000B34       .text ctrlAnmAtr__11daNpc_Zk1_cFv */
void daNpc_Zk1_c::ctrlAnmAtr() {
    /* if (*(u8*)(this+1958) != 4) return; */
}

/* 00000B34-00000B98       .text setAnm_ATR__11daNpc_Zk1_cFv */
void daNpc_Zk1_c::setAnm_ATR() {
    /* init_texPttrnAnm(this->field_0x1, 1, arg3, arg4, arg5, arg6, arg7); */
    return setAnm_anm((((char*)&a_anm_prm_tbl$4419 + 0) + (this->field_0x7a6 << 4)), (this->field_0x7a6 << 4));
}

/* 00000B98-00000C54       .text anmAtr__11daNpc_Zk1_cFUs */
void daNpc_Zk1_c::anmAtr(unsigned short) {
        /* if ((short & 65535) == 14) goto L_b3c; */
        /* if (/ * bge * / 1) goto L_b44; */
        /* if ((short & 65535) == 6) goto L_adc; */
        /* goto L_b44; */
        /* L_adc:; */
        /* if (this->field_0x7b1 != 0) goto L_b04; */
        /* chngAnmAtr(this->field_0x5bcf); */
        /* field_0x7b1 = (this->field_0x7b1 + 1); */
        /* L_b04:; */
        /* if (this->field_0x5bd0 == 255) goto L_b44; */
        /* if (this->field_0x5bd0 == this->field_0x7a7) goto L_b44; */
        /* field_0x5bd0 = 255; */
        chngAnmTag();
        /* goto L_b44; */
        /* L_b3c:; */
        /* field_0x7b1 = 0; */
        /* L_b44:; */
        ctrlAnmAtr();
        return ctrlAnmTag();
}

/* 00000C54-00000D30       .text next_msgStatus__11daNpc_Zk1_cFPUl */
void daNpc_Zk1_c::next_msgStatus(unsigned long*) {
        /* if (/ * bgt * / 1) goto L_c24; */
        base = 6051;
        /* goto L_c28; */
        base = 6052;
        /* goto L_c28; */
        base = 6053;
        /* goto L_c28; */
        base = 6054;
        /* goto L_c28; */
        base = 6057;
        /* goto L_c28; */
        base = 6058;
        /* goto L_c28; */
        base = 6059;
        /* goto L_c28; */
        /* if (dKy_daynight_check() == 0) goto L_c18; */
        base = 6063;
        /* goto L_c28; */
        /* L_c18:; */
        base = 6062;
        /* goto L_c28; */
        /* L_c24:; */
        /* L_c28:; */
        return 16;
}

/* 00000D30-00000E10       .text getMsg_ZK1_0__11daNpc_Zk1_cFv */
void daNpc_Zk1_c::getMsg_ZK1_0() {
    if (((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->isEventBit(6784) == 0) {
        /* if (((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->isEventBit(6146) != 0) goto L_d0c; */
        return 6055;
    }
    if (this->field_0x797 == 0) {
        /* if (((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->isEventBit(6146) != 0) goto L_d0c; */
        return 6060;
    }
    if (this->field_0x798 == 0) {
        /* if (((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->isEventBit(7169) != 0) goto L_d0c; */
        return 6064;
    }
    /* L_d0c:; */
    return (((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->isEventBit(7552) + 6065);
}

/* 00000E10-00000E4C       .text getMsg__11daNpc_Zk1_cFv */
void daNpc_Zk1_c::getMsg() {
    }
    return getMsg_ZK1_0();


/* 00000E4C-00000ED8       .text eventOrder__11daNpc_Zk1_cFv */
void daNpc_Zk1_c::eventOrder() {
        /* if ((this->field_0x7aa & 255) == 1) goto L_d84; */
        /* if ((this->field_0x7aa & 255) != 2) goto L_da4; */
        /* L_d84:; */
        /* if (this->field_0x7aa != 1) goto L_ddc; */
        fopAcM_orderSpeakEvent(this);
        /* goto L_ddc; */
        /* L_da4:; */
        /* if (/ * blt * / 1) goto L_ddc; */
        /* field_0x77e = 0; */
        /* L_ddc:; */
        return fopAcM_orderOtherEventId(fopAcM_orderSpeakEvent(this), this->field_0x77c, 255);
}

/* 00000ED8-00000F8C       .text checkOrder__11daNpc_Zk1_cFv */
void daNpc_Zk1_c::checkOrder() {
        /* if (this->field_0xf8 != 2) goto L_e5c; */
        /* if (((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->startCheck(this->field_0x77c) == 0) goto L_e8c; */
        /* if ((this->field_0x7aa & 255) < 3) goto L_e8c; */
        /* field_0x7aa = 0; */
        /* field_0x7a6 = 255; */
        /* field_0x7a7 = 255; */
        /* goto L_e8c; */
        /* L_e5c:; */
        /* if (255 != 1) goto L_e8c; */
        /* if ((this->field_0x7aa & 255) == 1) goto L_e7c; */
        /* if ((this->field_0x7aa & 255) != 2) goto L_e8c; */
        /* L_e7c:; */
        /* field_0x7aa = 0; */
        /* field_0x7a1 = 1; */
        /* L_e8c:; */
        /* return ((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->startCheck(this->field_0x77c); */
}

/* 00000F8C-00001024       .text chk_talk__11daNpc_Zk1_cFv */
void daNpc_Zk1_c::chk_talk() {
        /* if (this->field_0x52b8 == 1) goto L_edc; */
        /* if (this->field_0x52b8 == 2) goto L_edc; */
        /* if (this->field_0x52b8 != 3) goto L_ee0; */
        /* L_edc:; */
        /* L_ee0:; */
        /* if (1 == 0) goto L_f18; */
        /* if (((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->ChkPresentEnd() == 0) goto L_f10; */
        return 1;
        /* L_f10:; */
        return 0;
        /* L_f18:; */
        /* field_0x796 = 255; */
        return 1;
}

/* 00001024-00001064       .text chk_parts_notMov__11daNpc_Zk1_cFv */
void daNpc_Zk1_c::chk_parts_notMov() {
    /* if (this->field_0x772 == this->field_0x292) { */
        /* if (this->field_0x774 == this->field_0x296) goto L_f6c; */
        /* if (this->field_0x770 != this->field_0x206) goto L_f70; */
    /* L_f6c:; */
    /* L_f70:; */
    return 1;
}

/* 00001064-000010B8       .text searchByID__11daNpc_Zk1_cFUiPi */
void daNpc_Zk1_c::searchByID(fpc_ProcID, int*) {
    base = 0;
    if (fopAcM_SearchByID(fpc_ProcID) == 0) {
        base = 1;
    }
}

/* 000010B8-0000127C       .text lookBack__11daNpc_Zk1_cFv */
void daNpc_Zk1_c::lookBack() {
        /* _savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* if ((this->field_0x7ad & 255) == 3) goto L_10d4; */
        /* if (/ * bge * / 1) goto L_1060; */
        /* if ((this->field_0x7ad & 255) == 1) goto L_106c; */
        /* if (/ * bge * / 1) goto L_10b4; */
        /* goto L_1138; */
        /* L_1060:; */
        /* if ((this->field_0x7ad & 255) >= 5) goto L_1138; */
        /* goto L_10dc; */
        /* L_106c:; */
        dNpc_playerEyePos();
        m738 = 0;
        /* field_0x73c = 0; */
        /* field_0x740 = 0; */
        /* goto L_1138; */
        /* L_10b4:; */
        /* goto L_1138; */
        /* L_10d4:; */
        /* goto L_1138; */
        /* L_10dc:; */
        /* if (((daNpc_Zk1_c*)(dNpc_playerEyePos()))->searchByID(this->field_0x700) == 0) goto L_1138; */
        /* if (/ * bne * / 1) goto L_1138; */
        m738 = 0;
        /* field_0x73c = 0; */
        /* field_0x740 = 0; */
        /* field_0x73c = 0; */
        /* L_1138:; */
        /* return _restgpr_28(((dNpc_JntCtrl_c*)((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 656)))->lookAtTarget_2((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 518))); */
}

/* 0000127C-000012FC       .text chkAttention__11daNpc_Zk1_cFv */
void daNpc_Zk1_c::chkAttention() {
    if (((dAttention_c*)(((char*)&g_dComIfG_gameInfo + 22536)))->LockonTruth() == 0) {
    }
    return ((this - ((dAttention_c*)(((char*)&g_dComIfG_gameInfo + 22536)))->ActionTarget(0)) >> 5);
}

/* 000012FC-00001354       .text setAttention__11daNpc_Zk1_cFb */
void daNpc_Zk1_c::setAttention(bool) {
    /* field_0x274 = 0; */
    /* field_0x278 = (this->field_0x1fc + this->field_0x20); */
    /* field_0x27c = 0; */
    if (this->field_0x778 == 0) {
    }
    eyePos = 0;
    /* field_0x264 = 0; */
    /* field_0x268 = 0; */
    return this;
}

/* 00001354-000013DC       .text decideType__11daNpc_Zk1_cFi */
void daNpc_Zk1_c::decideType(int) {
    if (this->field_0x7ae != 0) {
        return 1;
    }
    /* field_0x7ae = 1; */
    /* field_0x7af = 0; */
    /* strcpy((this + 1742), ((char*)&@stringBase0 + 42), arg2, arg3, arg4, arg5, arg6, arg7); */
    if ((this->field_0x7ae & 255) != -1) {
        /* if ((this->field_0x7af & 255) != -1) goto L_12dc; */
    }
    /* L_12dc:; */
    return 1;
}

/* 000013DC-0000147C       .text privateCut__11daNpc_Zk1_cFi */
void daNpc_Zk1_c::privateCut(int) {
        /* _savegpr_29(this, int, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* if (/ * beq * / 1) goto L_1378; */
        /* field_0x7a5 = ((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMyActIdx(); */
        /* if ((this->field_0x7a5 & 255) != -1) goto L_1360; */
        ((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->cutEnd();
        /* goto L_1378; */
        /* L_1360:; */
        ((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getIsAddvance();
        /* L_1378:; */
        return _restgpr_29(((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->cutEnd());
}

/* 0000147C-000014A0       .text endEvent__11daNpc_Zk1_cFv */
void daNpc_Zk1_c::endEvent() {
    /* field_0x7a6 = 255; */
    /* field_0x7a7 = 255; */
    return this;
}

/* 000014A0-000014D8       .text isEventEntry__11daNpc_Zk1_cFv */
void daNpc_Zk1_c::isEventEntry() {
    /* return ((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMyStaffId(this->field_0x2c4, 0, 0, arg4); */
}

/* 000014D8-0000155C       .text event_proc__11daNpc_Zk1_cFi */
void daNpc_Zk1_c::event_proc(int) {
    /* if (((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->endCheck(this->field_0x77c) != 0) { */
        /* endEvent(); */
    /* } else { */
        /* if (((dNpc_EventCut_c*)((this + 708)))->cutProc() != 0) goto L_1458; */
    /* } */
    /* L_1458:; */
    /* return privateCut(int); */

/* 0000155C-00001608       .text set_action__11daNpc_Zk1_cFM11daNpc_Zk1_cFPCvPvPv_iPv */
void daNpc_Zk1_c::set_action(int (daNpc_Zk1_c::*)(void*), void*) {
        /* if (__ptmf_cmpr((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1776)) == 0) goto L_1500; */
        /* if (__ptmf_test((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1776)) == 0) goto L_14cc; */
        /* field_0x7b0 = 9; */
        /* __ptmf_scall(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* L_14cc:; */
        /* field_0x7b0 = 0; */
        /* __ptmf_scall(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* L_1500:; */
        return _restgpr_29(1);
}

/* 00001608-0000167C       .text setStt__11daNpc_Zk1_cFSc */
void daNpc_Zk1_c::setStt(signed char) {
        /* field_0x7ab = char; */
        /* if ((this->field_0x7ab & 255) == 1) goto L_1554; */
        /* if (/ * bge * / 1) goto L_1548; */
        /* goto L_157c; */
        /* L_1548:; */
        /* if ((this->field_0x7ab & 255) >= 3) goto L_157c; */
        /* goto L_1560; */
        /* L_1554:; */
        /* field_0x7aa = 0; */
        /* goto L_157c; */
        /* L_1560:; */
        /* field_0x7aa = 0; */
        /* field_0x7a6 = 255; */
        /* field_0x7a7 = 255; */
        /* field_0x7b1 = 0; */
        /* L_157c:; */
        return setAnm();
}

/* 0000167C-000017FC       .text wait_1__11daNpc_Zk1_cFv */
void daNpc_Zk1_c::wait_1() {
        /* if (this->field_0x7a3 == 0) goto L_15e8; */
        cLib_addCalcAngleS((this + 518), this->field_0x71a, 4, 2048, 128);
        /* L_15e8:; */
        /* if (this->field_0x7a1 == 0) goto L_1630; */
        /* if (chk_talk() == 0) goto L_1628; */
        setStt(2);
        /* field_0x7ad = 1; */
        /* field_0x7a2 = 0; */
        /* field_0x7a3 = 0; */
        /* field_0x29a = 1; */
        /* L_1628:; */
        return 1;
        /* L_1630:; */
        /* field_0x7aa = 2; */
        /* field_0x7ad = 0; */
        /* field_0x7a2 = 1; */
        /* if (1 != 0) goto L_16f4; */
        /* if (this->field_0x7a0 == 0) goto L_166c; */
        /* field_0x788 = cLib_getRndValue<i>__Fii(15, 30); */
        /* L_166c:; */
        /* if (cLib_calcTimer<s>__FPs((this + 1928)) == 0) goto L_1684; */
        /* field_0x7ad = 1; */
        /* L_1684:; */
        /* if (dNpc_chkAttn(this) == 0) goto L_16e4; */
        return 1;
        /* L_16e4:; */
        /* field_0x7ad = 0; */
        /* field_0x7a3 = 1; */
        /* L_16f4:; */
        return 1;
}

/* 000017FC-00001920       .text talk_1__11daNpc_Zk1_cFv */
void daNpc_Zk1_c::talk_1() {
        chk_parts_notMov();
        talk(1);
        /* if (this->field_0x6b0 != 0) goto L_1750; */
        return 1;
        /* L_1750:; */
        /* if (this->field_0xf8 == 6) goto L_1818; */
        /* if (/ * bge * / 1) goto L_176c; */
        /* if (this->field_0xf8 == 2) goto L_1818; */
        /* goto L_1818; */
        /* L_176c:; */
        /* if (this->field_0xf8 == 19) goto L_1778; */
        /* goto L_1818; */
        /* L_1778:; */
        /* if ((this->field_0x6a4 + -6054) > 11) goto L_17e4; */
        ((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->onEventBit(6146);
        /* goto L_17e4; */
        ((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->onEventBit(7169);
        /* goto L_17e4; */
        ((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->onEventBit(7552);
        /* L_17e4:; */
        /* field_0x796 = 255; */
        /* field_0x7a1 = 0; */
        /* setStt(this->field_0x7ac); */
        /* field_0x788 = cLib_getRndValue<i>__Fii(15, 30); */
        endEvent();
        /* L_1818:; */
        return (chk_parts_notMov() & 16777215);
}

/* 00001920-000019DC       .text wait_action1__11daNpc_Zk1_cFPv */
void daNpc_Zk1_c::wait_action1(void*) {
        /* if ((this->field_0x7b0 & 255) >= 4) goto L_1868; */
        /* if ((this->field_0x7b0 & 255) == 0) goto L_1874; */
        /* if (/ * bge * / 1) goto L_1894; */
        /* goto L_18d8; */
        /* L_1868:; */
        /* if ((this->field_0x7b0 & 255) == 9) goto L_18d8; */
        /* goto L_18d8; */
        /* L_1874:; */
        /* setStt(1, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* field_0x7a3 = 1; */
        /* field_0x7b0 = (this->field_0x7b0 + 1); */
        /* goto L_18d8; */
        /* L_1894:; */
        /* field_0x7a0 = ((daNpc_Zk1_c*)(this->field_0x7b0))->chkAttention(); */
        /* if ((this->field_0x7ab & 255) == 2) goto L_18cc; */
        /* if (/ * bge * / 1) goto L_18d8; */
        /* if ((this->field_0x7ab & 255) >= 1) goto L_18bc; */
        /* goto L_18d8; */
        /* L_18bc:; */
        /* field_0x778 = wait_1(); */
        /* goto L_18d8; */
        /* L_18cc:; */
        /* field_0x778 = talk_1(); */
        /* L_18d8:; */
        return 1;
}

/* 000019DC-00001B1C       .text demo__11daNpc_Zk1_cFv */
void daNpc_Zk1_c::demo() {
        /* if (demoActorID != 0) goto L_1928; */
        /* if (this->field_0x7a4 == 0) goto L_1a18; */
        /* field_0x7a4 = 0; */
        /* goto L_1a18; */
        /* L_1928:; */
        /* if (this->field_0x7a4 != 0) goto L_1954; */
        /* field_0x7a4 = 1; */
        /* field_0x79d = 0; */
        /* field_0x292 = 0; */
        /* field_0x290 = 0; */
        /* field_0x296 = 0; */
        /* field_0x294 = 0; */
        /* L_1954:; */
        ((dDemo_object_c*)((this->field_0x5abc + 32)))->getActor(demoActorID);
        /* if (this->field_0x6e0 == 0) goto L_199c; */
        /* field_0x6ec = (this->field_0x6ec + 1); */
        /* if (this->field_0x6ec < (this->field_0x6 & 16777215)) goto L_199c; */
        /* field_0x6ec = (this->field_0x6 & 16777215); */
        /* L_199c:; */
        ((dDemo_actor_c*)(((dDemo_object_c*)((this->field_0x5abc + 32)))->getActor(demoActorID)))->getP_BtpData((this + 1742), (this->field_0x6 & 16777215));
        /* if (/ * beq * / 1) goto L_19f4; */
        /* ((mDoExt_btpAnm*)((this + 1752)))->init(this->field_0x4); */
        /* field_0x7a8 = 1; */
        /* field_0x6ec = 0; */
        /* L_19f4:; */
        dDemo_setDemoData(this, 106, this->field_0x330, (this + 1742), 0, 0, 0, 0);
        /* L_1a18:; */
        /* return this->field_0x7a4; */
}

/* 00001B1C-00001BAC       .text shadowDraw__11daNpc_Zk1_cFv */
void daNpc_Zk1_c::shadowDraw() {
    /* field_0x6d4 = dComIfGd_setShadow(this->field_0x6d4, 1, this->field_0x50); */
    /* return dComIfGd_setShadow(this->field_0x6d4, 1, this->field_0x50); */
}

/* 00001BAC-00001C80       .text _draw__11daNpc_Zk1_cFv */
BOOL daNpc_Zk1_c::_draw() {
    /* _savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
    if (this->field_0x79c == 0) {
        /* if (this->field_0x79e != 0) goto L_1b04; */
    }
    return 1;
    /* L_1b04:; */
    /* ((dScnKy_env_light_c*)(((char*)&g_env_light + 0)))->settingTevStruct(0, (_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 504), (_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 268)); */
    /* ((dScnKy_env_light_c*)(((char*)&g_env_light + 0)))->setLightTevColorType(this->field_0x50, (_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 268)); */
    /* ((mDoExt_btpAnm*)((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1752)))->entry(this->field_0x4, this->field_0x6ec); */
    /* ((mDoExt_McaMorf*)(this->field_0x330))->entryDL(); */
    /* ((J3DMaterialTable*)((this->field_0x4 + 88)))->removeTexNoAnimator(this->field_0x6e0); */
    /* ((daNpc_Zk1_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->shadowDraw(); */
    /* dSnap_RegistFig(140, _savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7), C_@4338); */
    return _restgpr_29(1);
}

/* 00001C80-00001EA8       .text _execute__11daNpc_Zk1_cFv */
BOOL daNpc_Zk1_c::_execute() {
        /* if (this->field_0x79f != 0) goto L_1bf0; */
        /* field_0x70c = 0; */
        /* field_0x710 = 0; */
        /* field_0x714 = 0; */
        /* field_0x79f = 1; */
        /* L_1bf0:; */
        /* ((dNpc_JntCtrl_c*)((this + 656)))->setParam(this->field_0x14, this->field_0x16, this->field_0x18, this->field_0x1a, this->field_0xc, this->field_0xe, this->field_0x10); */
        /* if (this->field_0x79c == 0) goto L_1c4c; */
        /* if (demoActorID != 0) goto L_1c4c; */
        return 1;
        /* L_1c4c:; */
        checkOrder();
        /* if (demo() != 0) goto L_1cf8; */
        /* if (this->field_0x529a == 0) goto L_1c98; */
        /* if (this->field_0xf8 == 1) goto L_1c98; */
        /* L_1c98:; */
        /* if (isEventEntry() >= 0) goto L_1cac; */
        /* if (this->field_0x79a == 0) goto L_1cb8; */
        /* L_1cac:; */
        event_proc(isEventEntry());
        /* goto L_1ccc; */
        /* L_1cb8:; */
        __ptmf_scall(this, 0);
        /* L_1ccc:; */
        lookBack();
        fopAcM_posMoveF(this, (this + 1336));
        ((dBgS_Acch*)((this + 820)))->CrrPos(((char*)&g_dComIfG_gameInfo + 4768));
        play_animation();
        /* goto L_1d00; */
        /* L_1cf8:; */
        /* field_0x79c = 0; */
        /* L_1d00:; */
        eventOrder();
        /* if (this->field_0x79d != 0) goto L_1d44; */
        /* L_1d44:; */
        /* field_0x1b5 = ((dBgS*)(((char*)&g_dComIfG_gameInfo + 4768)))->GetRoomId((this + 1052)); */
        /* field_0x1b6 = ((dBgS*)(((char*)&g_dComIfG_gameInfo + 4768)))->GetPolyColor((this + 1052)); */
        setMtx(0);
        /* if (this->field_0x7a4 != 0) goto L_1da0; */
        setCollision(C_@4897);
        /* L_1da0:; */
        return 1;
}

/* 00001EA8-00001EFC       .text _delete__11daNpc_Zk1_cFv */
BOOL daNpc_Zk1_c::_delete() {
    /* dComIfG_resDelete((this + 1732), (this + 1742), arg2); */
    if (heap != 0) {
        /* if (this->field_0x330 != 0) goto L_1df8; */
        /* ((mDoExt_McaMorf*)(this->field_0x330))->stopZelAnime(); */
    }
    /* L_1df8:; */
    return 1;
}

/* 00001EFC-00002148       .text _create__11daNpc_Zk1_cFv */
cPhs_State daNpc_Zk1_c::_create() {
        /* _savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* if (/ * bne * / 1) goto L_1f74; */
        /* if (/ * beq * / 1) goto L_1f68; */
        __ct();
        /* field_0x6c0 = 0; */
        /* field_0x29c = 0; */
        /* field_0x29b = 0; */
        /* field_0x2cc = 0; */
        /* field_0x2d0 = 0; */
        /* field_0x32c = 0; */
        __ct();
        /* field_0x10 = 0; */
        /* field_0x14 = 0; */
        /* field_0x20 = 0; */
        /* field_0x18 = 1; */
        __ct();
        /* field_0x550 = 0; */
        __ct();
        /* field_0x550 = 0; */
        /* field_0x554 = 0; */
        __ct();
        /* field_0x114 = 0; */
        /* field_0x110 = 0; */
        /* field_0x12c = 0; */
        /* field_0x114 = 0; */
        /* field_0x12c = 0; */
        /* field_0x3c = 0; */
        /* field_0x114 = 0; */
        /* field_0x12c = 0; */
        /* field_0x6ac = -1; */
        /* field_0x6b0 = 0; */
        /* field_0x6c0 = 0; */
        /* field_0x6d8 = 0; */
        /* field_0x6dc = 0; */
        /* field_0x6d8 = 0; */
        /* field_0x6e4 = 0; */
        /* L_1f68:; */
        /* L_1f74:; */
        /* if (((daNpc_Zk1_c*)(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->decideType((this->field_0xb0 & 16777215)) != 0) goto L_1f94; */
        return 5;
        /* L_1f94:; */
        /* field_0x79b = ((4 - dComIfG_resLoad((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1732), (_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1742))) >> 5); */
        /* if (this->field_0x79b != 0) goto L_1fc4; */
        /* goto L_2044; */
        /* L_1fc4:; */
        /* if (fopAcM_entrySolidHeap(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7), ((char*)&CheckCreateHeap__FP10fopAc_ac_c + 0), ((char*)&a_siz_tbl$4913 + 0)) != 0) goto L_1ffc; */
        return 5;
        /* L_1ffc:; */
        cullMtx = (this->field_0x50 + 36);
        /* fopAcM_setCullSizeBox(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* if (((daNpc_Zk1_c*)(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->createInit() == 0) goto L_2044; */
        /* L_2044:; */
        /* return _restgpr_28(dComIfG_resLoad((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1732), (_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1742))); */
}

/* 00002414-00002688       .text bodyCreateHeap__11daNpc_Zk1_cFv */
void daNpc_Zk1_c::bodyCreateHeap() {
    /* ((dRes_control_c*)((this + 1742)))->getIDRes(4, ((char*)&g_dComIfG_gameInfo + -16460), 64, arg4, arg5); */
    if (/* bne */ 1) {
        /* ((JUTAssertion*)(((JUTAssertion*)(((dRes_control_c*)((this + 1742)))->getIDRes(4, ((char*)&g_dComIfG_gameInfo + -16460), 64, arg4, arg5)))->getSDevice()))->showAssert(((char*)&@stringBase0 + 10), 1459, ((char*)&@stringBase0 + 51)); */
        OSPanic(((char*)&@stringBase0 + 10), 1459, ((char*)&@stringBase0 + 37));
    }
    __nw(180);
    if (/* beq */ 1) {
    }
    /* field_0x330 = __ct(__nw(180), 1); */
    if (this->field_0x330 == 0) {
        return 0;
    }
    if (this->field_0x50 == 0) {
        /* field_0x330 = 0; */
        return 0;
    }
    if (init_texPttrnAnm(0, 0) != 0) {
        /* field_0x330 = 0; */
        return 0;
    }
    /* field_0x6cc = ((JUTNameTab*)(this->field_0x54))->getIndex(((char*)&@stringBase0 + 66)); */
    if (this->field_0x6cc != 0) {
        /* ((JUTAssertion*)(((JUTAssertion*)(((JUTNameTab*)(this->field_0x54))->getIndex(((char*)&@stringBase0 + 66))))->getSDevice()))->showAssert(((char*)&@stringBase0 + 10), 1479, ((char*)&@stringBase0 + 71)); */
        OSPanic(((char*)&@stringBase0 + 10), 1479, ((char*)&@stringBase0 + 37));
    }
    /* field_0x6cd = ((JUTNameTab*)(this->field_0x54))->getIndex(((char*)&@stringBase0 + 90)); */
    if (this->field_0x6cd != 0) {
        /* ((JUTAssertion*)(((JUTAssertion*)(((JUTNameTab*)(this->field_0x54))->getIndex(((char*)&@stringBase0 + 90))))->getSDevice()))->showAssert(((char*)&@stringBase0 + 10), 1481, ((char*)&@stringBase0 + 99)); */
        OSPanic(((char*)&@stringBase0 + 10), 1481, ((char*)&@stringBase0 + 37));
    }
    /* field_0x8 = 0; */
    /* field_0x8 = 0; */
    /* field_0x14 = this; */
    return 1;
}

/* 00002688-0000270C       .text CreateHeap__11daNpc_Zk1_cFv */
void daNpc_Zk1_c::CreateHeap() {
    if (bodyCreateHeap() == 0) {
        return 0;
    }
    ((dBgS_AcchCir*)((this + 1272)))->SetWall(C_@4896);
    ((dBgS_Acch*)((this + 820)))->Set((this + 504), (this + 484), this, 1, (this + 1272), (this + 544), 0);
    return 1;
}

/* 0000270C-0000272C       .text daNpc_Zk1_Create__FP10fopAc_ac_c */
static cPhs_State daNpc_Zk1_Create(fopAc_ac_c* i_this) {
    return ((daNpc_Zk1_c*)i_this)->_create();
}

/* 0000272C-0000274C       .text daNpc_Zk1_Delete__FP11daNpc_Zk1_c */
static BOOL daNpc_Zk1_Delete(daNpc_Zk1_c* i_this) {
    return ((daNpc_Zk1_c*)i_this)->_delete();
}

/* 0000274C-0000276C       .text daNpc_Zk1_Execute__FP11daNpc_Zk1_c */
static BOOL daNpc_Zk1_Execute(daNpc_Zk1_c* i_this) {
    return ((daNpc_Zk1_c*)i_this)->_execute();
}

/* 0000276C-0000278C       .text daNpc_Zk1_Draw__FP11daNpc_Zk1_c */
static BOOL daNpc_Zk1_Draw(daNpc_Zk1_c* i_this) {
    return ((daNpc_Zk1_c*)i_this)->_draw();

/* 0000278C-00002794       .text daNpc_Zk1_IsDelete__FP11daNpc_Zk1_c */
static BOOL daNpc_Zk1_IsDelete(daNpc_Zk1_c*) {
    return 1;

static actor_method_class l_daNpc_Zk1_Method = {
    (process_method_func)daNpc_Zk1_Create,
    (process_method_func)daNpc_Zk1_Delete,
    (process_method_func)daNpc_Zk1_Execute,
    (process_method_func)daNpc_Zk1_IsDelete,
    (process_method_func)daNpc_Zk1_Draw,
};

actor_process_profile_definition g_profile_NPC_ZK1 = {
    /* Layer ID     */ fpcLy_CURRENT_e,
    /* List ID      */ 0x0007,
    /* List Prio    */ fpcPi_CURRENT_e,
    /* Proc Name    */ fpcNm_NPC_ZK1_e,
    /* Proc SubMtd  */ &g_fpcLf_Method.base,
    /* Size         */ sizeof(daNpc_Zk1_c),
    /* Size Other   */ 0,
    /* Parameters   */ 0,
    /* Leaf SubMtd  */ &g_fopAc_Method.base,
    /* Draw Prio    */ fpcDwPi_NPC_ZK1_e,
    /* Actor SubMtd */ &l_daNpc_Zk1_Method,
    /* Status       */ 0x08 | fopAcStts_SHOWMAP_e | fopAcStts_NOCULLEXEC_e | fopAcStts_CULL_e | fopAcStts_UNK40000_e,
    /* Group        */ fopAc_ACTOR_e,
    /* Cull Type    */ fopAc_CULLBOX_CUSTOM_e,
};

/* 由 fix_decomp_braces.py 补齐：反编译产物末尾缺 4 个 } */
}}}}
