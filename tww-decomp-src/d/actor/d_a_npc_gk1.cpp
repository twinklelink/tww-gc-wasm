/**
 * d_a_npc_gk1.cpp
 * NPC - Mila's Father (poor)
 */

#include "d/dolzel_rel.h" // IWYU pragma: keep
#include "d/actor/d_a_npc_gk1.h"

/* 000000EC-00000150       .text __ct__15daNpc_Gk1_HIO_cFv */
daNpc_Gk1_HIO_c::daNpc_Gk1_HIO_c() {
    /* __ct__15daNpc_Gk1_HIO_cFv: 无实义指令 */
}

/* 00000198-000001E4       .text nodeCB_Head__FP7J3DNodei */
static BOOL nodeCB_Head(J3DNode* i_node, int i_switch) {
    if (i_switch == 0) {
    if (j3dSys.getModel()->getUserArea() != NULL) {
    reinterpret_cast<daNpc_Gk1_c*>(j3dSys.getModel()->getUserArea())
    ->_nodeCB_Head(i_node, j3dSys.getModel());
    }
    }
    return TRUE;
}

/* 000001E4-000002D8       .text _nodeCB_Head__11daNpc_Gk1_cFP7J3DNodeP8J3DModel */
void daNpc_Gk1_c::_nodeCB_Head(J3DNode*, J3DModel*) {
    /* _savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
    if (this->field_0xe0 != 0) {
        /* field_0xe4 = 0; */
        /* field_0x4 = 0; */
        /* field_0x8 = 0; */
        /* __register_global_object(((C_@3569 + 0) + 228), ((char*)&__dt__4cXyzFv + 0), ((C_@3569 + 0) + 212)); */
        /* field_0xe0 = 1; */
    }
    PSMTXCopy((this->field_0x8c + (this->field_0x18 * 48)), ((char*)&now__14mDoMtx_stack_c + 0));
    /* field_0x758 = 0; */
    /* field_0x75c = 0; */
    /* field_0x760 = 0; */
    /* PSMTXMultVec(((char*)&now__14mDoMtx_stack_c + 0), ((C_@3569 + 0) + 228), (_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1844)); */
    PSMTXCopy(((char*)&now__14mDoMtx_stack_c + 0), ((char*)&mCurrentMtx__6J3DSys + 0));
    return _restgpr_28(PSMTXCopy(((char*)&now__14mDoMtx_stack_c + 0), (this->field_0x8c + (this->field_0x18 * 48))));
}

/* 00000314-00000360       .text nodeCB_Neck__FP7J3DNodei */
static BOOL nodeCB_Neck(J3DNode* i_node, int i_switch) {
    if (i_switch == 0) {
    if (j3dSys.getModel()->getUserArea() != NULL) {
    reinterpret_cast<daNpc_Gk1_c*>(j3dSys.getModel()->getUserArea())
    ->_nodeCB_Neck(i_node, j3dSys.getModel());
    }
    }
    return TRUE;
}

/* 00000360-00000400       .text _nodeCB_Neck__11daNpc_Gk1_cFP7J3DNodeP8J3DModel */
void daNpc_Gk1_c::_nodeCB_Neck(J3DNode*, J3DModel*) {
    /* _savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
    PSMTXCopy();
    /* mDoMtx_XrotM(((char*)&now__14mDoMtx_stack_c + 0), this->field_0x292); */
    /* mDoMtx_ZrotM(((char*)&now__14mDoMtx_stack_c + 0), ((-this->field_0x290) & 65535)); */
    PSMTXCopy(((char*)&now__14mDoMtx_stack_c + 0), ((char*)&mCurrentMtx__6J3DSys + 0));
    return _restgpr_29(PSMTXCopy(((char*)&now__14mDoMtx_stack_c + 0)));
}

/* 00000400-0000044C       .text nodeCB_BackBone__FP7J3DNodei */
static BOOL nodeCB_BackBone(J3DNode* i_node, int i_switch) {
    if (i_switch == 0) {
    if (j3dSys.getModel()->getUserArea() != NULL) {
    reinterpret_cast<daNpc_Gk1_c*>(j3dSys.getModel()->getUserArea())
    ->_nodeCB_BackBone(i_node, j3dSys.getModel());
    }
    }
    return TRUE;
}

/* 0000044C-000004EC       .text _nodeCB_BackBone__11daNpc_Gk1_cFP7J3DNodeP8J3DModel */
void daNpc_Gk1_c::_nodeCB_BackBone(J3DNode*, J3DModel*) {
    /* _savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
    PSMTXCopy();
    /* mDoMtx_XrotM(((char*)&now__14mDoMtx_stack_c + 0), this->field_0x296); */
    /* mDoMtx_ZrotM(((char*)&now__14mDoMtx_stack_c + 0), ((-this->field_0x294) & 65535)); */
    PSMTXCopy(((char*)&now__14mDoMtx_stack_c + 0), ((char*)&mCurrentMtx__6J3DSys + 0));
    return _restgpr_29(PSMTXCopy(((char*)&now__14mDoMtx_stack_c + 0)));
}

/* 000004EC-0000050C       .text CheckCreateHeap__FP10fopAc_ac_c */
static BOOL CheckCreateHeap(fopAc_ac_c* i_this) {
    ((daNpc_Gk1_c*)i_this)->CreateHeap();
    return TRUE;
}

/* 0000050C-0000058C       .text init_GK1_0__11daNpc_Gk1_cFv */
void daNpc_Gk1_c::init_GK1_0() {
    if (((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->isEventBit(11521) != 0) {
        set_action();
        return 1;
    }
    return 0;
}

/* 0000058C-00000720       .text createInit__11daNpc_Gk1_cFv */
void daNpc_Gk1_c::createInit() {
    /* _savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
    /* field_0x784 = ((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getEventIdx(base, 255); */
    /* ((dNpc_EventCut_c*)((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 708)))->setActorInfo2(((char*)&@stringBase0 + 6), _savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
    /* field_0x280 = 10; */
    cullSizeFar = (this->field_0x8 / base);
    /* field_0x26d = 169; */
    /* field_0x26f = 169; */
    gravity = 0;
    /* field_0x7ad = 5; */
    if (this->field_0x7b3 != 0) {
    } else {
        /* ((daNpc_Gk1_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->init_GK1_0(); */
        /* goto L_560; */
    }
    /* L_560:; */
    if (0 != 0) {
        return 0;
    }
    /* ((dCcD_Stts*)((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1336)))->Init(255, 255, _savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
    /* field_0x5b8 = (_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1336); */
    /* ((dCcD_Cyl*)((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1396)))->Set(((char*)&dNpc_cyl_src + 0)); */
    /* ((dBgS_Acch*)((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 820)))->CrrPos(((char*)&g_dComIfG_gameInfo + 4768)); */
    /* ((daNpc_Gk1_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->play_animation(); */
    /* field_0x1b5 = ((dBgS*)(((char*)&g_dComIfG_gameInfo + 4768)))->GetRoomId((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1052)); */
    /* field_0x1b6 = ((dBgS*)(((char*)&g_dComIfG_gameInfo + 4768)))->GetPolyColor((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1052)); */
    /* ((mDoExt_McaMorf*)(this->field_0x330))->setMorf(); */
    /* ((daNpc_Gk1_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->setMtx(1); */
    return _restgpr_29(1);
}

/* 00000720-000007C8       .text play_animation__11daNpc_Gk1_cFv */
void daNpc_Gk1_c::play_animation() {
    play_btp_anm();
    if (/* beq */ 1) {
        ((dBgS*)(((char*)&g_dComIfG_gameInfo + 4768)))->GetMtrlSndId((this + 1052));
    }
    /* field_0x79c = ((mDoExt_McaMorf*)(this->field_0x330))->play((this + 608), ((dBgS*)(((char*)&g_dComIfG_gameInfo + 4768)))->GetMtrlSndId((this + 1052)), dComIfGp_getReverb((this->field_0x20a & 255))); */
    /* if (this->field_0x68 > this->field_0x770) { */
        /* field_0x79c = 1; */
    /* field_0x770 = 0; */
    /* return this->field_0x330; */

/* 000007C8-00000930       .text setMtx__11daNpc_Gk1_cFb */
void daNpc_Gk1_c::setMtx(bool) {
    /* field_0x18 = 0; */
    /* field_0x1c = 0; */
    /* field_0x20 = 0; */
    /* PSMTXTrans(((char*)&now__14mDoMtx_stack_c + 0), bool, arg2, arg3, arg4, arg5, arg6, arg7); */
    /* mDoMtx_ZXYrotM(((char*)&now__14mDoMtx_stack_c + 0), this->field_0x726, this->field_0x728); */
    PSMTXCopy(((char*)&now__14mDoMtx_stack_c + 0), (this->field_0x50 + 36));
    /* ((mDoExt_McaMorf*)(this->field_0x330))->calc(); */
    if (this->field_0x6d0 != 0) {
        PSMTXCopy((this->field_0x8c + ((this->field_0x6cc & 255) * 48)), ((char*)&now__14mDoMtx_stack_c + 0));
        PSMTXCopy(((char*)&now__14mDoMtx_stack_c + 0), (this->field_0x6d0 + 36));
    }
    if (this->field_0x6d4 != 0) {
        PSMTXCopy((this->field_0x8c + ((this->field_0x6cc & 255) * 48)), ((char*)&now__14mDoMtx_stack_c + 0));
        PSMTXCopy(((char*)&now__14mDoMtx_stack_c + 0), (this->field_0x6d4 + 36));
    }
    return setAttention(bool);
}

/* 00000930-00000944       .text bckResID__11daNpc_Gk1_cFi */
int daNpc_Gk1_c::bckResID(int anmNum) {
    static const int a_resID_tbl[] = {
        3, 4, 0, 1, 2, 8,
    };
    return a_resID_tbl[anmNum];
}

/* 00000944-00000958       .text btpResID__11daNpc_Gk1_cFi */
int daNpc_Gk1_c::btpResID(int anmNum) {
    static const int a_resID_tbl[] = {
        8,
    };
    return a_resID_tbl[anmNum];
}

/* 00000958-00000A5C       .text setBtp__11daNpc_Gk1_cFScb */
void daNpc_Gk1_c::setBtp(signed char, bool) {
    /* _savegpr_27(this, char, bool, arg3, arg4, arg5, arg6, arg7); */
    if (/* bge */ 1) {
        return 0;
    }
    /* ((dRes_control_c*)((_savegpr_27(this, char, bool, arg3, arg4, arg5, arg6, arg7) + 1752)))->getIDRes((((daNpc_Gk1_c*)(0))->btpResID() & 65535), ((char*)&g_dComIfG_gameInfo + -16460), 64); */
    if (/* bne */ 1) {
        /* ((JUTAssertion*)(((JUTAssertion*)(((dRes_control_c*)((_savegpr_27(this, char, bool, arg3, arg4, arg5, arg6, arg7) + 1752)))->getIDRes((((daNpc_Gk1_c*)(0))->btpResID() & 65535), ((char*)&g_dComIfG_gameInfo + -16460), 64)))->getSDevice()))->showAssert(((char*)&@stringBase0 + 10), 451, ((char*)&@stringBase0 + 26)); */
        OSPanic(((char*)&@stringBase0 + 10), 451, ((char*)&@stringBase0 + 37));
    }
    /* field_0x6f4 = 0; */
    /* field_0x6f6 = 0; */
    /* return _restgpr_27(((mDoExt_btpAnm*)((_savegpr_27(this, char, bool, arg3, arg4, arg5, arg6, arg7) + 1760)))->init(this->field_0x4)); */
}

/* 00000A5C-00000A7C       .text init_texPttrnAnm__11daNpc_Gk1_cFScb */
void daNpc_Gk1_c::init_texPttrnAnm(signed char, bool) {
    this->setBtp(0, 0);
}

/* 00000A7C-00000B18       .text play_btp_anm__11daNpc_Gk1_cFv */
void daNpc_Gk1_c::play_btp_anm() {
        /* if (this->field_0x7ac != 0) goto L_9d0; */
        /* if (cLib_calcTimer<s>__FPs((this + 1782), arg1, arg2, arg3, arg4, arg5, arg6, arg7) != 0) goto L_a14; */
        /* L_9d0:; */
        /* field_0x6f4 = (this->field_0x6f4 + 1); */
        /* if (this->field_0x6f4 < (this->field_0x6 & 16777215)) goto L_a14; */
        /* if (this->field_0x7ac == 0) goto L_9fc; */
        /* field_0x6f4 = (this->field_0x6 & 16777215); */
        /* goto L_a14; */
        /* L_9fc:; */
        /* field_0x6f6 = cLib_getRndValue<i>__Fii(60, 90); */
        /* field_0x6f4 = 0; */
        /* L_a14:; */
        return cLib_getRndValue<i>__Fii(60, 90);
}

/* 00000B18-00000BB4       .text setAnm_anm__11daNpc_Gk1_cFPQ211daNpc_Gk1_c9anm_prm_c */
void daNpc_Gk1_c::setAnm_anm(daNpc_Gk1_c::anm_prm_c*) {
        /* if (/ * blt * / 1) goto L_ab0; */
        /* if ((this->field_0x7ad & 255) != 0) goto L_a6c; */
        /* goto L_ab0; */
        /* L_a6c:; */
        dNpc_setAnmIDRes(this->field_0x330, this->field_0xc, bckResID(), -1, (this + 1752));
        /* field_0x79c = 0; */
        /* field_0x79d = 0; */
        /* field_0x770 = 0; */
        /* L_ab0:; */
        return C_@4200;
}

/* 00000BB4-00000C20       .text setAnm__11daNpc_Gk1_cFv */
void daNpc_Gk1_c::setAnm() {
    /* init_texPttrnAnm(this->field_0x1, 1, arg3, arg4, arg5, arg6, arg7); */
    return setAnm_anm((((char*)&a_anm_prm_tbl$4455 + 0) + ((this->field_0x7af & 255) << 4)), ((this->field_0x7af & 255) << 4));
}

/* 00000C20-00000C24       .text chngAnmTag__11daNpc_Gk1_cFv */
void daNpc_Gk1_c::chngAnmTag() {
}

/* 00000C24-00000C28       .text ctrlAnmTag__11daNpc_Gk1_cFv */
void daNpc_Gk1_c::ctrlAnmTag() {
}

/* 00000C28-00000C68       .text chngAnmAtr__11daNpc_Gk1_cFUc */
void daNpc_Gk1_c::chngAnmAtr(unsigned char) {
        /* if ((char & 16777215) == this->field_0x7aa) goto L_b6c; */
        /* if ((char & 16777215) <= 5) goto L_b64; */
        /* goto L_b6c; */
        /* L_b64:; */
        /* field_0x7aa = char; */
        /* L_b6c:; */
        return setAnm_ATR();
}

/* 00000C68-00000C74       .text ctrlAnmAtr__11daNpc_Gk1_cFv */
void daNpc_Gk1_c::ctrlAnmAtr() {
    /* if (*(u8*)(this+1962) != 5) return; */
}

/* 00000C74-00000CD8       .text setAnm_ATR__11daNpc_Gk1_cFv */
void daNpc_Gk1_c::setAnm_ATR() {
    /* init_texPttrnAnm(this->field_0x1, 1, arg3, arg4, arg5, arg6, arg7); */
    return setAnm_anm((((char*)&a_anm_prm_tbl$4497 + 0) + (this->field_0x7aa << 4)), (this->field_0x7aa << 4));
}

/* 00000CD8-00000D94       .text anmAtr__11daNpc_Gk1_cFUs */
void daNpc_Gk1_c::anmAtr(unsigned short) {
        /* if ((short & 65535) == 14) goto L_c7c; */
        /* if (/ * bge * / 1) goto L_c84; */
        /* if ((short & 65535) == 6) goto L_c1c; */
        /* goto L_c84; */
        /* L_c1c:; */
        /* if (this->field_0x7b5 != 0) goto L_c44; */
        /* chngAnmAtr(this->field_0x5bcf); */
        /* field_0x7b5 = (this->field_0x7b5 + 1); */
        /* L_c44:; */
        /* if (this->field_0x5bd0 == 255) goto L_c84; */
        /* if (this->field_0x5bd0 == this->field_0x7ab) goto L_c84; */
        /* field_0x5bd0 = 255; */
        chngAnmTag();
        /* goto L_c84; */
        /* L_c7c:; */
        /* field_0x7b5 = 0; */
        /* L_c84:; */
        ctrlAnmAtr();
        return ctrlAnmTag();
}

/* 00000D94-00000EAC       .text next_msgStatus__11daNpc_Gk1_cFPUl */
void daNpc_Gk1_c::next_msgStatus(unsigned long*) {
        /* if (/ * bgt * / 1) goto L_da0; */
        base = 10402;
        /* goto L_da4; */
        base = 10403;
        /* goto L_da4; */
        base = 10404;
        /* goto L_da4; */
        base = 10405;
        /* goto L_da4; */
        base = 10407;
        /* goto L_da4; */
        base = 10408;
        /* goto L_da4; */
        /* if (((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->isEventBit(5696) == 0) goto L_d58; */
        /* goto L_da4; */
        /* L_d58:; */
        base = 10409;
        /* goto L_da4; */
        base = 10410;
        /* goto L_da4; */
        base = 10412;
        /* goto L_da4; */
        base = 10413;
        /* goto L_da4; */
        base = 10414;
        /* goto L_da4; */
        base = 10416;
        /* goto L_da4; */
        /* L_da0:; */
        /* L_da4:; */
        return 16;
}

/* 00000EAC-00000F50       .text getMsg_GK1_0__11daNpc_Gk1_cFv */
void daNpc_Gk1_c::getMsg_GK1_0() {
    if (((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->isEventBit(2818) != 0) {
        /* if (((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->isEventBit(5760) == 0) goto L_e0c; */
        return 10401;
    }
    /* L_e0c:; */
    if (dKy_daynight_check() == 0) {
        ((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->isEventBit(5696);
    } else {
        /* if (((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->isEventBit(3592) != 0) goto L_e50; */
    }
    /* L_e50:; */
    return 10415;
}

/* 00000F50-00000F8C       .text getMsg__11daNpc_Gk1_cFv */
void daNpc_Gk1_c::getMsg() {
    }
    return getMsg_GK1_0();


/* 00000F8C-00001018       .text eventOrder__11daNpc_Gk1_cFv */
void daNpc_Gk1_c::eventOrder() {
        /* if ((this->field_0x7ae & 255) == 1) goto L_ec4; */
        /* if ((this->field_0x7ae & 255) != 2) goto L_ee4; */
        /* L_ec4:; */
        /* if (this->field_0x7ae != 1) goto L_f1c; */
        fopAcM_orderSpeakEvent(this);
        /* goto L_f1c; */
        /* L_ee4:; */
        /* if (/ * blt * / 1) goto L_f1c; */
        /* field_0x786 = 0; */
        /* L_f1c:; */
        return fopAcM_orderOtherEventId(fopAcM_orderSpeakEvent(this), this->field_0x784, 255);
}

/* 00001018-000010CC       .text checkOrder__11daNpc_Gk1_cFv */
void daNpc_Gk1_c::checkOrder() {
        /* if (this->field_0xf8 != 2) goto L_f9c; */
        /* if (((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->startCheck(this->field_0x784) == 0) goto L_fcc; */
        /* if ((this->field_0x7ae & 255) < 3) goto L_fcc; */
        /* field_0x7ae = 0; */
        /* field_0x7aa = 255; */
        /* field_0x7ab = 255; */
        /* goto L_fcc; */
        /* L_f9c:; */
        /* if (255 != 1) goto L_fcc; */
        /* if ((this->field_0x7ae & 255) == 1) goto L_fbc; */
        /* if ((this->field_0x7ae & 255) != 2) goto L_fcc; */
        /* L_fbc:; */
        /* field_0x7ae = 0; */
        /* field_0x7a5 = 1; */
        /* L_fcc:; */
        /* return ((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->startCheck(this->field_0x784); */
}

/* 000010CC-00001164       .text chk_talk__11daNpc_Gk1_cFv */
void daNpc_Gk1_c::chk_talk() {
        /* if (this->field_0x52b8 == 1) goto L_101c; */
        /* if (this->field_0x52b8 == 2) goto L_101c; */
        /* if (this->field_0x52b8 != 3) goto L_1020; */
        /* L_101c:; */
        /* L_1020:; */
        /* if (1 == 0) goto L_1058; */
        /* if (((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->ChkPresentEnd() == 0) goto L_1050; */
        return 1;
        /* L_1050:; */
        return 0;
        /* L_1058:; */
        /* field_0x79e = 255; */
        return 1;
}

/* 00001164-000011A4       .text chk_parts_notMov__11daNpc_Gk1_cFv */
void daNpc_Gk1_c::chk_parts_notMov() {
    /* if (this->field_0x77a == this->field_0x292) { */
        /* if (this->field_0x77c == this->field_0x296) goto L_10ac; */
        /* if (this->field_0x778 != this->field_0x206) goto L_10b0; */
    /* L_10ac:; */
    /* L_10b0:; */
    return 1;
}

/* 000011A4-000011F8       .text searchByID__11daNpc_Gk1_cFUiPi */
void daNpc_Gk1_c::searchByID(fpc_ProcID, int*) {
    base = 0;
    if (fopAcM_SearchByID(fpc_ProcID) == 0) {
        base = 1;
    }
}

/* 000011F8-000013BC       .text lookBack__11daNpc_Gk1_cFv */
void daNpc_Gk1_c::lookBack() {
        /* _savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* if ((this->field_0x7b1 & 255) == 3) goto L_1214; */
        /* if (/ * bge * / 1) goto L_11a0; */
        /* if ((this->field_0x7b1 & 255) == 1) goto L_11ac; */
        /* if (/ * bge * / 1) goto L_11f4; */
        /* goto L_1278; */
        /* L_11a0:; */
        /* if ((this->field_0x7b1 & 255) >= 5) goto L_1278; */
        /* goto L_121c; */
        /* L_11ac:; */
        dNpc_playerEyePos();
        /* field_0x740 = 0; */
        /* field_0x744 = 0; */
        /* field_0x748 = 0; */
        /* goto L_1278; */
        /* L_11f4:; */
        /* goto L_1278; */
        /* L_1214:; */
        /* goto L_1278; */
        /* L_121c:; */
        /* if (((daNpc_Gk1_c*)(dNpc_playerEyePos()))->searchByID(this->field_0x708) == 0) goto L_1278; */
        /* if (/ * bne * / 1) goto L_1278; */
        /* field_0x740 = 0; */
        /* field_0x744 = 0; */
        /* field_0x748 = 0; */
        /* field_0x744 = 0; */
        /* L_1278:; */
        /* return _restgpr_28(((dNpc_JntCtrl_c*)((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 656)))->lookAtTarget_2((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 518))); */
}

/* 000013BC-0000143C       .text chkAttention__11daNpc_Gk1_cFv */
void daNpc_Gk1_c::chkAttention() {
    if (((dAttention_c*)(((char*)&g_dComIfG_gameInfo + 22536)))->LockonTruth() == 0) {
    }
    return ((this - ((dAttention_c*)(((char*)&g_dComIfG_gameInfo + 22536)))->ActionTarget(0)) >> 5);
}

/* 0000143C-00001494       .text setAttention__11daNpc_Gk1_cFb */
void daNpc_Gk1_c::setAttention(bool) {
    /* field_0x274 = 0; */
    /* field_0x278 = (this->field_0x1fc + this->field_0x20); */
    /* field_0x27c = 0; */
    if (this->field_0x780 == 0) {
    }
    eyePos = 0;
    /* field_0x264 = 0; */
    /* field_0x268 = 0; */
    return this;
}

/* 00001494-0000151C       .text decideType__11daNpc_Gk1_cFi */
void daNpc_Gk1_c::decideType(int) {
    if (this->field_0x7b2 != 0) {
        return 1;
    }
    /* field_0x7b2 = 1; */
    /* field_0x7b3 = 0; */
    /* strcpy((this + 1752), ((char*)&@stringBase0 + 42), arg2, arg3, arg4, arg5, arg6, arg7); */
    if ((this->field_0x7b2 & 255) != -1) {
        /* if ((this->field_0x7b3 & 255) != -1) goto L_141c; */
    }
    /* L_141c:; */
    return 1;
}

/* 0000151C-000015BC       .text privateCut__11daNpc_Gk1_cFi */
void daNpc_Gk1_c::privateCut(int) {
        /* _savegpr_29(this, int, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* if (/ * beq * / 1) goto L_14b8; */
        /* field_0x7a9 = ((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMyActIdx(); */
        /* if ((this->field_0x7a9 & 255) != -1) goto L_14a0; */
        ((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->cutEnd();
        /* goto L_14b8; */
        /* L_14a0:; */
        ((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getIsAddvance();
        /* L_14b8:; */
        return _restgpr_29(((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->cutEnd());
}

/* 000015BC-000015E0       .text endEvent__11daNpc_Gk1_cFv */
void daNpc_Gk1_c::endEvent() {
    /* field_0x7aa = 255; */
    /* field_0x7ab = 255; */
    return this;
}

/* 000015E0-00001618       .text isEventEntry__11daNpc_Gk1_cFv */
void daNpc_Gk1_c::isEventEntry() {
    /* return ((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMyStaffId(this->field_0x2c4, 0, 0, arg4); */
}

/* 00001618-0000169C       .text event_proc__11daNpc_Gk1_cFi */
void daNpc_Gk1_c::event_proc(int) {
    /* if (((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->endCheck(this->field_0x784) != 0) { */
        /* endEvent(); */
    /* } else { */
        /* if (((dNpc_EventCut_c*)((this + 708)))->cutProc() != 0) goto L_1598; */
    /* } */
    /* L_1598:; */
    /* return privateCut(int); */

/* 0000169C-00001748       .text set_action__11daNpc_Gk1_cFM11daNpc_Gk1_cFPCvPvPv_iPv */
void daNpc_Gk1_c::set_action(int (daNpc_Gk1_c::*)(void*), void*) {
        /* if (__ptmf_cmpr((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1784)) == 0) goto L_1640; */
        /* if (__ptmf_test((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1784)) == 0) goto L_160c; */
        /* field_0x7b4 = 9; */
        /* __ptmf_scall(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* L_160c:; */
        /* field_0x7b4 = 0; */
        /* __ptmf_scall(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* L_1640:; */
        return _restgpr_29(1);
}

/* 00001748-000017C8       .text setStt__11daNpc_Gk1_cFSc */
void daNpc_Gk1_c::setStt(signed char) {
        /* field_0x7af = char; */
        /* if ((this->field_0x7af & 255) == 1) goto L_1694; */
        /* if (/ * bge * / 1) goto L_1688; */
        /* goto L_16c8; */
        /* L_1688:; */
        /* if ((this->field_0x7af & 255) >= 3) goto L_16c8; */
        /* goto L_16ac; */
        /* L_1694:; */
        /* field_0x7ae = 0; */
        speedF = 0;
        /* goto L_16c8; */
        /* L_16ac:; */
        /* field_0x7ae = 0; */
        /* field_0x7aa = 255; */
        /* field_0x7ab = 255; */
        /* field_0x7b5 = 0; */
        /* L_16c8:; */
        return setAnm();
}

/* 000017C8-000019E0       .text chk_attn__11daNpc_Gk1_cFv */
void daNpc_Gk1_c::chk_attn() {
        /* _savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        __mi();
        PSVECSquareMag();
        /* if (/ * ble * / 1) goto L_17b0; */
        /* goto L_17b4; */
        /* L_17b0:; */
        /* L_17b4:; */
        /* cLib_targetAngleY((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 504), (this->field_0x5b38 + 504)); */
        /* if (this->field_0x7b1 != 1) goto L_185c; */
        /* if (/ * bge * / 1) goto L_1834; */
        /* abs(((this->field_0x206 - cLib_targetAngleY((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 504), (this->field_0x5b38 + 504))) & 65535)); */
        /* if (/ * bge * / 1) goto L_1834; */
        /* L_1834:; */
        /* if (1 == 0) goto L_1854; */
        /* if (/ * bge * / 1) goto L_1854; */
        /* L_1854:; */
        /* goto L_18cc; */
        /* L_185c:; */
        /* if (/ * bge * / 1) goto L_18a8; */
        abs(1);
        /* if (/ * bge * / 1) goto L_18a8; */
        /* L_18a8:; */
        /* if (1 == 0) goto L_18c8; */
        /* if (/ * bge * / 1) goto L_18c8; */
        /* L_18c8:; */
        /* L_18cc:; */
        return _restgpr_29(1);
}

/* 000019E0-00001B74       .text wait_1__11daNpc_Gk1_cFv */
void daNpc_Gk1_c::wait_1() {
        __mi();
        PSVECSquareMag();
        /* if (/ * ble * / 1) goto L_19b4; */
        /* L_19b4:; */
        /* if (this->field_0x7a7 == 0) goto L_19ec; */
        cLib_addCalcAngleS((this + 518), this->field_0x722, 4, 2048, 128);
        /* L_19ec:; */
        /* if (this->field_0x7a5 == 0) goto L_1a34; */
        /* if (chk_talk() == 0) goto L_1a2c; */
        setStt(2);
        /* field_0x7b1 = 1; */
        /* field_0x7a6 = 0; */
        /* field_0x7a7 = 0; */
        /* field_0x29a = 1; */
        /* L_1a2c:; */
        return 1;
        /* L_1a34:; */
        /* field_0x7ae = 2; */
        /* field_0x7a6 = 1; */
        /* if (chk_attn() == 0) goto L_1a64; */
        /* field_0x7b1 = 1; */
        return 1;
        /* L_1a64:; */
        /* field_0x7b1 = 0; */
        return 1;
}

/* 00001B74-00001C74       .text talk_1__11daNpc_Gk1_cFv */
void daNpc_Gk1_c::talk_1() {
        chk_parts_notMov();
        talk(1);
        /* if (this->field_0x6b0 != 0) goto L_1ac8; */
        return 1;
        /* L_1ac8:; */
        /* if (this->field_0xf8 == 6) goto L_1b6c; */
        /* if (/ * bge * / 1) goto L_1ae4; */
        /* if (this->field_0xf8 == 2) goto L_1b6c; */
        /* goto L_1b6c; */
        /* L_1ae4:; */
        /* if (this->field_0xf8 == 19) goto L_1af0; */
        /* goto L_1b6c; */
        /* L_1af0:; */
        /* if (this->field_0x6a4 == 10410) goto L_1b24; */
        /* if (/ * bge * / 1) goto L_1b38; */
        /* if (this->field_0x6a4 == 10405) goto L_1b0c; */
        /* goto L_1b38; */
        /* L_1b0c:; */
        ((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->onEventBit(5760);
        /* goto L_1b38; */
        /* L_1b24:; */
        ((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->onEventBit(5696);
        /* L_1b38:; */
        /* field_0x79e = 255; */
        /* field_0x7a5 = 0; */
        /* setStt(this->field_0x7b0); */
        /* field_0x790 = cLib_getRndValue<i>__Fii(15, 30); */
        endEvent();
        /* L_1b6c:; */
        return (chk_parts_notMov() & 16777215);
}

/* 00001C74-00001D30       .text wait_action1__11daNpc_Gk1_cFPv */
void daNpc_Gk1_c::wait_action1(void*) {
        /* if ((this->field_0x7b4 & 255) >= 4) goto L_1bbc; */
        /* if ((this->field_0x7b4 & 255) == 0) goto L_1bc8; */
        /* if (/ * bge * / 1) goto L_1be8; */
        /* goto L_1c2c; */
        /* L_1bbc:; */
        /* if ((this->field_0x7b4 & 255) == 9) goto L_1c2c; */
        /* goto L_1c2c; */
        /* L_1bc8:; */
        /* setStt(1, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* field_0x7a7 = 1; */
        /* field_0x7b4 = (this->field_0x7b4 + 1); */
        /* goto L_1c2c; */
        /* L_1be8:; */
        /* field_0x7a4 = ((daNpc_Gk1_c*)(this->field_0x7b4))->chkAttention(); */
        /* if ((this->field_0x7af & 255) == 2) goto L_1c20; */
        /* if (/ * bge * / 1) goto L_1c2c; */
        /* if ((this->field_0x7af & 255) >= 1) goto L_1c10; */
        /* goto L_1c2c; */
        /* L_1c10:; */
        /* field_0x780 = wait_1(); */
        /* goto L_1c2c; */
        /* L_1c20:; */
        /* field_0x780 = talk_1(); */
        /* L_1c2c:; */
        return 1;
}

/* 00001D30-00001E70       .text demo__11daNpc_Gk1_cFv */
void daNpc_Gk1_c::demo() {
        /* if (demoActorID != 0) goto L_1c7c; */
        /* if (this->field_0x7a8 == 0) goto L_1d6c; */
        /* field_0x7a8 = 0; */
        /* goto L_1d6c; */
        /* L_1c7c:; */
        /* if (this->field_0x7a8 != 0) goto L_1ca8; */
        /* field_0x7a8 = 1; */
        /* field_0x7a1 = 0; */
        /* field_0x292 = 0; */
        /* field_0x290 = 0; */
        /* field_0x296 = 0; */
        /* field_0x294 = 0; */
        /* L_1ca8:; */
        ((dDemo_object_c*)((this->field_0x5abc + 32)))->getActor(demoActorID);
        /* if (this->field_0x6e8 == 0) goto L_1cf0; */
        /* field_0x6f4 = (this->field_0x6f4 + 1); */
        /* if (this->field_0x6f4 < (this->field_0x6 & 16777215)) goto L_1cf0; */
        /* field_0x6f4 = (this->field_0x6 & 16777215); */
        /* L_1cf0:; */
        ((dDemo_actor_c*)(((dDemo_object_c*)((this->field_0x5abc + 32)))->getActor(demoActorID)))->getP_BtpData((this + 1752), (this->field_0x6 & 16777215));
        /* if (/ * beq * / 1) goto L_1d48; */
        /* ((mDoExt_btpAnm*)((this + 1760)))->init(this->field_0x4); */
        /* field_0x7ac = 1; */
        /* field_0x6f4 = 0; */
        /* L_1d48:; */
        dDemo_setDemoData(this, 106, this->field_0x330, (this + 1752), 0, 0, 0, 0);
        /* L_1d6c:; */
        /* return this->field_0x7a8; */
}

/* 00001E70-00001F48       .text shadowDraw__11daNpc_Gk1_cFv */
void daNpc_Gk1_c::shadowDraw() {
        /* field_0x6dc = dComIfGd_setShadow(this->field_0x6dc, 1, this->field_0x50); */
        /* if (this->field_0x6dc == 0) goto L_1e48; */
        /* if (this->field_0x6d0 == 0) goto L_1e28; */
        /* ((dDlst_shadowControl_c*)(((char*)&g_dComIfG_gameInfo + 24416)))->addReal(this->field_0x6dc, this->field_0x6d0); */
        /* L_1e28:; */
        /* if (this->field_0x6d4 == 0) goto L_1e48; */
        /* L_1e48:; */
        /* return ((dDlst_shadowControl_c*)(((char*)&g_dComIfG_gameInfo + 24416)))->addReal(this->field_0x6dc, this->field_0x6d4); */
}

/* 00001F48-00002064       .text _draw__11daNpc_Gk1_cFv */
BOOL daNpc_Gk1_c::_draw() {
    /* _savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
    if (this->field_0x7a0 == 0) {
        /* if (this->field_0x7a2 != 0) goto L_1ea0; */
    }
    return 1;
    /* L_1ea0:; */
    /* ((dScnKy_env_light_c*)(((char*)&g_env_light + 0)))->settingTevStruct(0, (_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 504), (_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 268)); */
    /* ((dScnKy_env_light_c*)(((char*)&g_env_light + 0)))->setLightTevColorType(this->field_0x50, (_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 268)); */
    /* ((mDoExt_btpAnm*)((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1760)))->entry(this->field_0x4, this->field_0x6f4); */
    /* ((mDoExt_McaMorf*)(this->field_0x330))->entryDL(); */
    /* ((J3DMaterialTable*)((this->field_0x4 + 88)))->removeTexNoAnimator(this->field_0x6e8); */
    if (this->field_0x6d0 != 0) {
        /* ((dScnKy_env_light_c*)(((char*)&g_env_light + 0)))->setLightTevColorType(this->field_0x6d0, (_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 268)); */
        /* mDoExt_modelEntryDL(this->field_0x6d0); */
    }
    if (this->field_0x6d4 != 0) {
        /* ((dScnKy_env_light_c*)(((char*)&g_env_light + 0)))->setLightTevColorType(this->field_0x6d4, (_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 268)); */
        /* mDoExt_modelEntryDL(this->field_0x6d4); */
    }
    /* ((daNpc_Gk1_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->shadowDraw(); */
    /* dSnap_RegistFig(89, _savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7), C_@4415); */
    return _restgpr_29(1);
}

/* 00002064-00002280       .text _execute__11daNpc_Gk1_cFv */
BOOL daNpc_Gk1_c::_execute() {
        /* if (this->field_0x7a3 != 0) goto L_1fd4; */
        /* field_0x714 = 0; */
        /* field_0x718 = 0; */
        /* field_0x71c = 0; */
        /* field_0x7a3 = 1; */
        /* L_1fd4:; */
        /* ((dNpc_JntCtrl_c*)((this + 656)))->setParam(this->field_0x14, this->field_0x16, this->field_0x18, this->field_0x1a, this->field_0xc, this->field_0xe, this->field_0x10); */
        /* if (this->field_0x7a0 == 0) goto L_2030; */
        /* if (demoActorID != 0) goto L_2030; */
        return 1;
        /* L_2030:; */
        checkOrder();
        /* if (demo() != 0) goto L_20d0; */
        /* if (this->field_0x529a == 0) goto L_207c; */
        /* if (this->field_0xf8 == 1) goto L_207c; */
        /* L_207c:; */
        /* if (isEventEntry() < 0) goto L_2090; */
        event_proc(isEventEntry());
        /* goto L_20a4; */
        /* L_2090:; */
        __ptmf_scall(this, 0);
        /* L_20a4:; */
        lookBack();
        fopAcM_posMoveF(this, (this + 1336));
        ((dBgS_Acch*)((this + 820)))->CrrPos(((char*)&g_dComIfG_gameInfo + 4768));
        play_animation();
        /* goto L_20d8; */
        /* L_20d0:; */
        /* field_0x7a0 = 0; */
        /* L_20d8:; */
        eventOrder();
        /* if (this->field_0x7a1 != 0) goto L_211c; */
        /* L_211c:; */
        /* field_0x1b5 = ((dBgS*)(((char*)&g_dComIfG_gameInfo + 4768)))->GetRoomId((this + 1052)); */
        /* field_0x1b6 = ((dBgS*)(((char*)&g_dComIfG_gameInfo + 4768)))->GetPolyColor((this + 1052)); */
        setMtx(0);
        /* if (this->field_0x7a8 != 0) goto L_2178; */
        setCollision(C_@4831);
        /* L_2178:; */
        return 1;
}

/* 00002280-000022D4       .text _delete__11daNpc_Gk1_cFv */
BOOL daNpc_Gk1_c::_delete() {
    /* dComIfG_resDelete((this + 1732), (this + 1752), arg2); */
    if (heap != 0) {
        /* if (this->field_0x330 != 0) goto L_21d0; */
        /* ((mDoExt_McaMorf*)(this->field_0x330))->stopZelAnime(); */
    }
    /* L_21d0:; */
    return 1;
}

/* 000022D4-00002520       .text _create__11daNpc_Gk1_cFv */
cPhs_State daNpc_Gk1_c::_create() {
        /* _savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* if (/ * bne * / 1) goto L_234c; */
        /* if (/ * beq * / 1) goto L_2340; */
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
        /* field_0x6e0 = 0; */
        /* field_0x6e4 = 0; */
        /* field_0x6e0 = 0; */
        /* field_0x6ec = 0; */
        /* L_2340:; */
        /* L_234c:; */
        /* if (((daNpc_Gk1_c*)(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->decideType((this->field_0xb0 & 16777215)) != 0) goto L_236c; */
        return 5;
        /* L_236c:; */
        /* field_0x79f = ((4 - dComIfG_resLoad((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1732), (_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1752))) >> 5); */
        /* if (this->field_0x79f != 0) goto L_239c; */
        /* goto L_241c; */
        /* L_239c:; */
        /* if (fopAcM_entrySolidHeap(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7), ((char*)&CheckCreateHeap__FP10fopAc_ac_c + 0), ((char*)&a_siz_tbl$5069 + 0)) != 0) goto L_23d4; */
        return 5;
        /* L_23d4:; */
        cullMtx = (this->field_0x50 + 36);
        /* fopAcM_setCullSizeBox(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* if (((daNpc_Gk1_c*)(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->createInit() == 0) goto L_241c; */
        /* L_241c:; */
        /* return _restgpr_28(dComIfG_resLoad((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1732), (_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1752))); */
}

/* 000027EC-00002AE8       .text bodyCreateHeap__11daNpc_Gk1_cFv */
void daNpc_Gk1_c::bodyCreateHeap() {
    /* ((dRes_control_c*)((this + 1752)))->getIDRes(7, ((char*)&g_dComIfG_gameInfo + -16460), 64, arg4, arg5); */
    if (/* bne */ 1) {
        /* ((JUTAssertion*)(((JUTAssertion*)(((dRes_control_c*)((this + 1752)))->getIDRes(7, ((char*)&g_dComIfG_gameInfo + -16460), 64, arg4, arg5)))->getSDevice()))->showAssert(((char*)&@stringBase0 + 10), 1553, ((char*)&@stringBase0 + 45)); */
        OSPanic(((char*)&@stringBase0 + 10), 1553, ((char*)&@stringBase0 + 37));
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
    /* field_0x6cc = ((JUTNameTab*)(this->field_0x54))->getIndex(((char*)&@stringBase0 + 60)); */
    if (this->field_0x6cc != 0) {
        /* ((JUTAssertion*)(((JUTAssertion*)(((JUTNameTab*)(this->field_0x54))->getIndex(((char*)&@stringBase0 + 60))))->getSDevice()))->showAssert(((char*)&@stringBase0 + 10), 1573, ((char*)&@stringBase0 + 65)); */
        OSPanic(((char*)&@stringBase0 + 10), 1573, ((char*)&@stringBase0 + 37));
    }
    /* field_0x6cd = ((JUTNameTab*)(this->field_0x54))->getIndex(((char*)&@stringBase0 + 84)); */
    if (this->field_0x6cd != 0) {
        /* ((JUTAssertion*)(((JUTAssertion*)(((JUTNameTab*)(this->field_0x54))->getIndex(((char*)&@stringBase0 + 84))))->getSDevice()))->showAssert(((char*)&@stringBase0 + 10), 1575, ((char*)&@stringBase0 + 93)); */
        OSPanic(((char*)&@stringBase0 + 10), 1575, ((char*)&@stringBase0 + 37));
    }
    /* field_0x6ce = ((JUTNameTab*)(this->field_0x54))->getIndex(((char*)&@stringBase0 + 114)); */
    if (this->field_0x6ce != 0) {
        /* ((JUTAssertion*)(((JUTAssertion*)(((JUTNameTab*)(this->field_0x54))->getIndex(((char*)&@stringBase0 + 114))))->getSDevice()))->showAssert(((char*)&@stringBase0 + 10), 1577, ((char*)&@stringBase0 + 119)); */
        OSPanic(((char*)&@stringBase0 + 10), 1577, ((char*)&@stringBase0 + 37));
    }
    /* field_0x8 = 0; */
    /* field_0x8 = 0; */
    /* field_0x8 = 0; */
    /* field_0x14 = this; */
    return 1;
}

/* 00002AE8-00002BA8       .text itemCreateHeap__11daNpc_Gk1_cFv */
void daNpc_Gk1_c::itemCreateHeap() {
    /* ((dRes_control_c*)((this + 1752)))->getIDRes(5, ((char*)&g_dComIfG_gameInfo + -16460), 64, arg4, arg5); */
    if (/* bne */ 1) {
        /* ((JUTAssertion*)(((JUTAssertion*)(((dRes_control_c*)((this + 1752)))->getIDRes(5, ((char*)&g_dComIfG_gameInfo + -16460), 64, arg4, arg5)))->getSDevice()))->showAssert(((char*)&@stringBase0 + 10), 1598, ((char*)&@stringBase0 + 45)); */
    }
    /* field_0x6d0 = mDoExt_J3DModel(OSPanic(((char*)&@stringBase0 + 10), 1598, ((char*)&@stringBase0 + 37))); */
    if (this->field_0x6d0 == 0) {
        return 0;
    }
    return 1;
}

/* 00002BA8-00002C68       .text hat_CreateHeap__11daNpc_Gk1_cFv */
void daNpc_Gk1_c::hat_CreateHeap() {
    /* ((dRes_control_c*)((this + 1752)))->getIDRes(6, ((char*)&g_dComIfG_gameInfo + -16460), 64, arg4, arg5); */
    if (/* bne */ 1) {
        /* ((JUTAssertion*)(((JUTAssertion*)(((dRes_control_c*)((this + 1752)))->getIDRes(6, ((char*)&g_dComIfG_gameInfo + -16460), 64, arg4, arg5)))->getSDevice()))->showAssert(((char*)&@stringBase0 + 10), 1614, ((char*)&@stringBase0 + 45)); */
    }
    /* field_0x6d4 = mDoExt_J3DModel(OSPanic(((char*)&@stringBase0 + 10), 1614, ((char*)&@stringBase0 + 37))); */
    if (this->field_0x6d4 == 0) {
        return 0;
    }
    return 1;
}

/* 00002C68-00002D2C       .text CreateHeap__11daNpc_Gk1_cFv */
void daNpc_Gk1_c::CreateHeap() {
    if (bodyCreateHeap() == 0) {
        return 0;
    }
    if (itemCreateHeap() == 0) {
        /* field_0x330 = 0; */
        return 0;
    }
    if (hat_CreateHeap() == 0) {
        /* field_0x330 = 0; */
        return 0;
    }
    ((dBgS_AcchCir*)((this + 1272)))->SetWall(C_@4833);
    ((dBgS_Acch*)((this + 820)))->Set((this + 504), (this + 484), this, 1, (this + 1272), (this + 544), 0);
    return 1;
}

/* 00002D2C-00002D4C       .text daNpc_Gk1_Create__FP10fopAc_ac_c */
static cPhs_State daNpc_Gk1_Create(fopAc_ac_c* i_this) {
    return ((daNpc_Gk1_c*)i_this)->_create();
}

/* 00002D4C-00002D6C       .text daNpc_Gk1_Delete__FP11daNpc_Gk1_c */
static BOOL daNpc_Gk1_Delete(daNpc_Gk1_c* i_this) {
    return ((daNpc_Gk1_c*)i_this)->_delete();
}

/* 00002D6C-00002D8C       .text daNpc_Gk1_Execute__FP11daNpc_Gk1_c */
static BOOL daNpc_Gk1_Execute(daNpc_Gk1_c* i_this) {
    return ((daNpc_Gk1_c*)i_this)->_execute();
}

/* 00002D8C-00002DAC       .text daNpc_Gk1_Draw__FP11daNpc_Gk1_c */
static BOOL daNpc_Gk1_Draw(daNpc_Gk1_c* i_this) {
    return ((daNpc_Gk1_c*)i_this)->_draw();

/* 00002DAC-00002DB4       .text daNpc_Gk1_IsDelete__FP11daNpc_Gk1_c */
static BOOL daNpc_Gk1_IsDelete(daNpc_Gk1_c*) {
    return 1;

static actor_method_class l_daNpc_Gk1_Method = {
    (process_method_func)daNpc_Gk1_Create,
    (process_method_func)daNpc_Gk1_Delete,
    (process_method_func)daNpc_Gk1_Execute,
    (process_method_func)daNpc_Gk1_IsDelete,
    (process_method_func)daNpc_Gk1_Draw,
};

actor_process_profile_definition g_profile_NPC_GK1 = {
    /* Layer ID     */ fpcLy_CURRENT_e,
    /* List ID      */ 0x0007,
    /* List Prio    */ fpcPi_CURRENT_e,
    /* Proc Name    */ fpcNm_NPC_GK1_e,
    /* Proc SubMtd  */ &g_fpcLf_Method.base,
    /* Size         */ sizeof(daNpc_Gk1_c),
    /* Size Other   */ 0,
    /* Parameters   */ 0,
    /* Leaf SubMtd  */ &g_fopAc_Method.base,
    /* Draw Prio    */ fpcDwPi_NPC_GK1_e,
    /* Actor SubMtd */ &l_daNpc_Gk1_Method,
    /* Status       */ 0x08 | fopAcStts_SHOWMAP_e | fopAcStts_NOCULLEXEC_e | fopAcStts_CULL_e | fopAcStts_UNK40000_e,
    /* Group        */ fopAc_ACTOR_e,
    /* Cull Type    */ fopAc_CULLBOX_CUSTOM_e,
};

/* 由 fix_decomp_braces.py 补齐：反编译产物末尾缺 4 个 } */
}}}}
