/**
 * d_a_npc_pf1.cpp
 * NPC - Maggie's Father (poor)
 */

#include "d/dolzel_rel.h" // IWYU pragma: keep
#include "d/actor/d_a_npc_pf1.h"

/* 000000EC-00000150       .text __ct__15daNpc_Pf1_HIO_cFv */
daNpc_Pf1_HIO_c::daNpc_Pf1_HIO_c() {
    /* __ct__15daNpc_Pf1_HIO_cFv: 无实义指令 */
}

/* 00000198-000001E4       .text nodeCB_Head__FP7J3DNodei */
static BOOL nodeCB_Head(J3DNode* i_node, int i_switch) {
    if (i_switch == 0) {
    if (j3dSys.getModel()->getUserArea() != NULL) {
    reinterpret_cast<daNpc_Pf1_c*>(j3dSys.getModel()->getUserArea())
    ->_nodeCB_Head(i_node, j3dSys.getModel());
    }
    }
    return TRUE;
}

/* 000001E4-0000030C       .text _nodeCB_Head__11daNpc_Pf1_cFP7J3DNodeP8J3DModel */
void daNpc_Pf1_c::_nodeCB_Head(J3DNode*, J3DModel*) {
    /* _savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
    if (this->field_0x104 != 0) {
        /* field_0x108 = 0; */
        /* field_0x4 = 0; */
        /* field_0x8 = 0; */
        /* __register_global_object(((C_@3569 + 0) + 264), ((char*)&__dt__4cXyzFv + 0), ((C_@3569 + 0) + 248)); */
        /* field_0x104 = 1; */
    }
    PSMTXCopy((this->field_0x8c + (this->field_0x18 * 48)), ((char*)&now__14mDoMtx_stack_c + 0));
    /* field_0x750 = 0; */
    /* field_0x754 = 0; */
    /* field_0x758 = 0; */
    /* PSMTXMultVec(((char*)&now__14mDoMtx_stack_c + 0), ((C_@3569 + 0) + 264), (_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1836)); */
    /* mDoMtx_YrotM(((char*)&now__14mDoMtx_stack_c + 0), ((-this->field_0x292) & 65535)); */
    /* mDoMtx_ZrotM(((char*)&now__14mDoMtx_stack_c + 0), ((-this->field_0x290) & 65535)); */
    PSMTXCopy(((char*)&now__14mDoMtx_stack_c + 0), ((char*)&mCurrentMtx__6J3DSys + 0));
    return _restgpr_28(PSMTXCopy(((char*)&now__14mDoMtx_stack_c + 0), (this->field_0x8c + (this->field_0x18 * 48))));
}

/* 00000348-00000394       .text nodeCB_BackBone__FP7J3DNodei */
static BOOL nodeCB_BackBone(J3DNode* i_node, int i_switch) {
    if (i_switch == 0) {
    if (j3dSys.getModel()->getUserArea() != NULL) {
    reinterpret_cast<daNpc_Pf1_c*>(j3dSys.getModel()->getUserArea())
    ->_nodeCB_BackBone(i_node, j3dSys.getModel());
    }
    }
    return TRUE;
}

/* 00000394-0000042C       .text _nodeCB_BackBone__11daNpc_Pf1_cFP7J3DNodeP8J3DModel */
void daNpc_Pf1_c::_nodeCB_BackBone(J3DNode*, J3DModel*) {
    /* _savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
    PSMTXCopy();
    /* mDoMtx_XrotM(((char*)&now__14mDoMtx_stack_c + 0), this->field_0x296); */
    /* mDoMtx_ZrotM(((char*)&now__14mDoMtx_stack_c + 0), this->field_0x294); */
    PSMTXCopy(((char*)&now__14mDoMtx_stack_c + 0), ((char*)&mCurrentMtx__6J3DSys + 0));
    return _restgpr_29(PSMTXCopy(((char*)&now__14mDoMtx_stack_c + 0)));
}

/* 0000042C-0000044C       .text CheckCreateHeap__FP10fopAc_ac_c */
static BOOL CheckCreateHeap(fopAc_ac_c* i_this) {
    ((daNpc_Pf1_c*)i_this)->CreateHeap();
    return TRUE;
}

/* 0000044C-000004CC       .text init_PF1_0__11daNpc_Pf1_cFv */
void daNpc_Pf1_c::init_PF1_0() {
    if (((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->isEventBit(11521) == 0) {
        set_action();
        return 1;
    }
    return 0;
}

/* 000004CC-000006B8       .text createInit__11daNpc_Pf1_cFv */
void daNpc_Pf1_c::createInit() {
        /* _savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* field_0x788 = ((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getEventIdx(base, 255); */
        /* ((dNpc_EventCut_c*)((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 708)))->setActorInfo2(((char*)&@stringBase0 + 6), _savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* if (/ * beq * / 1) goto L_490; */
        /* ((dNpc_PathRun_c*)((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1796)))->setInf(); */
        /* if (this->field_0x704 == 0) goto L_488; */
        /* ((daNpc_Pf1_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->set_pthPoint(0); */
        /* goto L_490; */
        /* L_488:; */
        return 0;
        /* L_490:; */
        /* if (this->field_0x704 != 0) goto L_4a4; */
        return 0;
        /* L_4a4:; */
        /* field_0x280 = 10; */
        /* field_0x26d = 169; */
        /* field_0x26f = 169; */
        gravity = 0;
        /* field_0x7b6 = 8; */
        /* if (this->field_0x7bc == 0) goto L_4e4; */
        /* goto L_4f0; */
        /* L_4e4:; */
        /* ((daNpc_Pf1_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->init_PF1_0(); */
        /* goto L_4f4; */
        /* L_4f0:; */
        /* L_4f4:; */
        /* if (0 != 0) goto L_504; */
        return 0;
        /* L_504:; */
        /* ((dCcD_Stts*)((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1336)))->Init(217, 255, _savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* field_0x5b8 = (_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1336); */
        /* ((dCcD_Cyl*)((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1396)))->Set(((char*)&dNpc_cyl_src + 0)); */
        /* ((dBgS_Acch*)((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 820)))->CrrPos(((char*)&g_dComIfG_gameInfo + 4768)); */
        /* ((daNpc_Pf1_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->play_animation(); */
        /* field_0x1b5 = ((dBgS*)(((char*)&g_dComIfG_gameInfo + 4768)))->GetRoomId((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1052)); */
        /* field_0x1b6 = ((dBgS*)(((char*)&g_dComIfG_gameInfo + 4768)))->GetPolyColor((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1052)); */
        /* ((mDoExt_McaMorf*)(this->field_0x330))->setMorf(C_@4187); */
        /* ((daNpc_Pf1_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->setMtx(1); */
        return _restgpr_29(1);
}

/* 000006B8-00000760       .text play_animation__11daNpc_Pf1_cFv */
void daNpc_Pf1_c::play_animation() {
    play_btp_anm();
    if (/* beq */ 1) {
        ((dBgS*)(((char*)&g_dComIfG_gameInfo + 4768)))->GetMtrlSndId((this + 1052));
    }
    /* field_0x7a0 = ((mDoExt_McaMorf*)(this->field_0x330))->play((this + 608), ((dBgS*)(((char*)&g_dComIfG_gameInfo + 4768)))->GetMtrlSndId((this + 1052)), dComIfGp_getReverb((this->field_0x20a & 255))); */
    /* if (this->field_0x68 > this->field_0x774) { */
        /* field_0x7a0 = 1; */
    /* field_0x774 = 0; */
    /* return this->field_0x330; */

/* 00000760-00000810       .text setMtx__11daNpc_Pf1_cFb */
void daNpc_Pf1_c::setMtx(bool) {
    /* field_0x18 = 0; */
    /* field_0x1c = 0; */
    /* field_0x20 = 0; */
    /* PSMTXTrans(((char*)&now__14mDoMtx_stack_c + 0), bool, arg2, arg3, arg4, arg5, arg6, arg7); */
    /* mDoMtx_ZXYrotM(((char*)&now__14mDoMtx_stack_c + 0), this->field_0x71e, this->field_0x720); */
    PSMTXCopy(((char*)&now__14mDoMtx_stack_c + 0), (this->field_0x50 + 36));
    /* ((mDoExt_McaMorf*)(this->field_0x330))->calc(); */
    return setAttention(bool);
}

/* 00000810-00000824       .text bckResID__11daNpc_Pf1_cFi */
int daNpc_Pf1_c::bckResID(int anmNum) {
    static const int a_resID_tbl[] = {
        4, 5, 6, 0, 1, 2, 7, 3, 9, 9,
    };
    return a_resID_tbl[anmNum];
}

/* 00000824-00000838       .text btpResID__11daNpc_Pf1_cFi */
int daNpc_Pf1_c::btpResID(int anmNum) {
    static const int a_resID_tbl[] = {
        9, 9,
    };
    return a_resID_tbl[anmNum];
}

/* 00000838-00000958       .text setBtp__11daNpc_Pf1_cFScb */
void daNpc_Pf1_c::setBtp(signed char, bool) {
    /* _savegpr_27(this, char, bool, arg3, arg4, arg5, arg6, arg7); */
    if (/* bge */ 1) {
        return 0;
    }
    /* ((dRes_control_c*)((_savegpr_27(this, char, bool, arg3, arg4, arg5, arg6, arg7) + 1742)))->getIDRes((((daNpc_Pf1_c*)(0))->btpResID() & 65535), ((char*)&g_dComIfG_gameInfo + -16460), 64); */
    if (/* bne */ 1) {
        /* ((JUTAssertion*)(((JUTAssertion*)(((dRes_control_c*)((_savegpr_27(this, char, bool, arg3, arg4, arg5, arg6, arg7) + 1742)))->getIDRes((((daNpc_Pf1_c*)(0))->btpResID() & 65535), ((char*)&g_dComIfG_gameInfo + -16460), 64)))->getSDevice()))->showAssert(((char*)&@stringBase0 + 10), 462, ((char*)&@stringBase0 + 26)); */
        OSPanic(((char*)&@stringBase0 + 10), 462, ((char*)&@stringBase0 + 37));
    }
    if (this->field_0x7b5 == 1) {
        /* field_0x6ec = 2; */
    } else {
        /* field_0x6ec = 0; */
    }
    /* field_0x6ee = 0; */
    /* return _restgpr_27(((mDoExt_btpAnm*)((_savegpr_27(this, char, bool, arg3, arg4, arg5, arg6, arg7) + 1752)))->init(this->field_0x4)); */
}

/* 00000958-00000978       .text init_texPttrnAnm__11daNpc_Pf1_cFScb */
void daNpc_Pf1_c::init_texPttrnAnm(signed char, bool) {
    this->setBtp(0, 0);
}

/* 00000978-00000A1C       .text play_btp_anm__11daNpc_Pf1_cFv */
void daNpc_Pf1_c::play_btp_anm() {
        /* if (this->field_0x7b5 == 1) goto L_918; */
        /* if (this->field_0x7b5 != 0) goto L_8d4; */
        /* if (cLib_calcTimer<s>__FPs((this + 1774), arg1, arg2, arg3, arg4, arg5, arg6, arg7) != 0) goto L_918; */
        /* L_8d4:; */
        /* field_0x6ec = (this->field_0x6ec + 1); */
        /* if (this->field_0x6ec < (this->field_0x6 & 16777215)) goto L_918; */
        /* if (this->field_0x7b5 == 0) goto L_900; */
        /* field_0x6ec = (this->field_0x6 & 16777215); */
        /* goto L_918; */
        /* L_900:; */
        /* field_0x6ee = cLib_getRndValue<i>__Fii(60, 90); */
        /* field_0x6ec = 0; */
        /* L_918:; */
        return cLib_getRndValue<i>__Fii(60, 90);
}

/* 00000A1C-00000AB8       .text setAnm_anm__11daNpc_Pf1_cFPQ211daNpc_Pf1_c9anm_prm_c */
void daNpc_Pf1_c::setAnm_anm(daNpc_Pf1_c::anm_prm_c*) {
        /* if (/ * blt * / 1) goto L_9b4; */
        /* if ((this->field_0x7b6 & 255) != 0) goto L_970; */
        /* goto L_9b4; */
        /* L_970:; */
        dNpc_setAnmIDRes(this->field_0x330, this->field_0xc, bckResID(), -1, (this + 1742));
        /* field_0x7a0 = 0; */
        /* field_0x7a1 = 0; */
        /* field_0x774 = 0; */
        /* L_9b4:; */
        return C_@4187;
}

/* 00000AB8-00000B28       .text setAnm_NUM__11daNpc_Pf1_cFii */
void daNpc_Pf1_c::setAnm_NUM(int, int) {
    if (int != 0) {
        /* init_texPttrnAnm(this->field_0x1, 1, arg3, arg4, arg5, arg6, arg7); */
    }
    return setAnm_anm((((char*)&a_anm_prm_tbl$4397 + 0) + (int << 4)), (int << 4));
}

/* 00000B28-00000B94       .text setAnm__11daNpc_Pf1_cFv */
void daNpc_Pf1_c::setAnm() {
    /* init_texPttrnAnm(this->field_0x1, 1, arg3, arg4, arg5, arg6, arg7); */
    return setAnm_anm((((char*)&a_anm_prm_tbl$4404 + 0) + ((this->field_0x7b8 & 255) << 4)), ((this->field_0x7b8 & 255) << 4));
}

/* 00000B94-00000B98       .text chngAnmTag__11daNpc_Pf1_cFv */
void daNpc_Pf1_c::chngAnmTag() {
}

/* 00000B98-00000B9C       .text ctrlAnmTag__11daNpc_Pf1_cFv */
void daNpc_Pf1_c::ctrlAnmTag() {
}

/* 00000B9C-00000BDC       .text chngAnmAtr__11daNpc_Pf1_cFUc */
void daNpc_Pf1_c::chngAnmAtr(unsigned char) {
        /* if ((char & 16777215) == this->field_0x7b3) goto L_ae0; */
        /* if ((char & 16777215) <= 6) goto L_ad8; */
        /* goto L_ae0; */
        /* L_ad8:; */
        /* field_0x7b3 = char; */
        /* L_ae0:; */
        return setAnm_ATR();
}

/* 00000BDC-00000C48       .text ctrlAnmAtr__11daNpc_Pf1_cFv */
void daNpc_Pf1_c::ctrlAnmAtr() {
    if (this->field_0x7b3 != 4) {
        /* if (/ * bge * / 1) goto L_b4c; */
        /* goto L_b4c; */
    } else {
        /* if (this->field_0x7a0 == 0) goto L_b4c; */
        /* field_0x7a1 = (this->field_0x7a1 + 1); */
        /* if (((this->field_0x7a1 + 1) & 255) > 2) goto L_b4c; */
        /* field_0x7b3 = 6; */
    }
    /* L_b4c:; */
    return setAnm_NUM(0, 1);
}

/* 00000C48-00000CAC       .text setAnm_ATR__11daNpc_Pf1_cFv */
void daNpc_Pf1_c::setAnm_ATR() {
    /* init_texPttrnAnm(this->field_0x1, 1, arg3, arg4, arg5, arg6, arg7); */
    return setAnm_anm((((char*)&a_anm_prm_tbl$4451 + 0) + (this->field_0x7b3 << 4)), (this->field_0x7b3 << 4));
}

/* 00000CAC-00000D68       .text anmAtr__11daNpc_Pf1_cFUs */
void daNpc_Pf1_c::anmAtr(unsigned short) {
        /* if ((short & 65535) == 14) goto L_c50; */
        /* if (/ * bge * / 1) goto L_c58; */
        /* if ((short & 65535) == 6) goto L_bf0; */
        /* goto L_c58; */
        /* L_bf0:; */
        /* if (this->field_0x7be != 0) goto L_c18; */
        /* chngAnmAtr(this->field_0x5bcf); */
        /* field_0x7be = (this->field_0x7be + 1); */
        /* L_c18:; */
        /* if (this->field_0x5bd0 == 255) goto L_c58; */
        /* if (this->field_0x5bd0 == this->field_0x7b4) goto L_c58; */
        /* field_0x5bd0 = 255; */
        chngAnmTag();
        /* goto L_c58; */
        /* L_c50:; */
        /* field_0x7be = 0; */
        /* L_c58:; */
        ctrlAnmAtr();
        return ctrlAnmTag();
}

/* 00000D68-00000E60       .text next_msgStatus__11daNpc_Pf1_cFPUl */
void daNpc_Pf1_c::next_msgStatus(unsigned long*) {
        /* if (/ * bgt * / 1) goto L_d5c; */
        /* if (this->field_0xfa == 1) goto L_ce0; */
        /* if (/ * bge * / 1) goto L_ce8; */
        /* if (this->field_0xfa >= 0) goto L_cd4; */
        /* goto L_ce8; */
        /* L_cd4:; */
        base = 7002;
        /* goto L_ce8; */
        /* L_ce0:; */
        base = 7005;
        /* L_ce8:; */
        /* field_0x7a5 = 1; */
        /* goto L_d60; */
        base = 7009;
        /* goto L_d60; */
        base = 7003;
        /* goto L_d60; */
        base = 7010;
        /* goto L_d60; */
        ((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->onEventBit(2820);
        /* goto L_d60; */
        /* field_0x7a4 = 1; */
        /* goto L_d60; */
        base = 7007;
        /* goto L_d60; */
        base = 7008;
        /* goto L_d60; */
        /* L_d5c:; */
        /* L_d60:; */
        return 16;
}

/* 00000E60-00000EC0       .text getMsg_PF1_0__11daNpc_Pf1_cFv */
void daNpc_Pf1_c::getMsg_PF1_0() {
    if (((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->isEventBit(2820) != 0) {
        return 7004;
    }
    if (this->field_0x7a5 != 0) {
    }
    return 7006;
}

/* 00000EC0-00000EFC       .text getMsg__11daNpc_Pf1_cFv */
void daNpc_Pf1_c::getMsg() {
    }
    return getMsg_PF1_0();


/* 00000EFC-00000F88       .text eventOrder__11daNpc_Pf1_cFv */
void daNpc_Pf1_c::eventOrder() {
        /* if ((this->field_0x7b7 & 255) == 1) goto L_e34; */
        /* if ((this->field_0x7b7 & 255) != 2) goto L_e54; */
        /* L_e34:; */
        /* if (this->field_0x7b7 != 1) goto L_e8c; */
        fopAcM_orderSpeakEvent(this);
        /* goto L_e8c; */
        /* L_e54:; */
        /* if (/ * blt * / 1) goto L_e8c; */
        /* field_0x78a = 0; */
        /* L_e8c:; */
        return fopAcM_orderOtherEventId(fopAcM_orderSpeakEvent(this), this->field_0x788, 255);
}

/* 00000F88-00001044       .text checkOrder__11daNpc_Pf1_cFv */
void daNpc_Pf1_c::checkOrder() {
        /* if (this->field_0xf8 != 2) goto L_f14; */
        /* if (((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->startCheck(this->field_0x788) == 0) goto L_f44; */
        /* if ((this->field_0x7b7 & 255) < 3) goto L_f44; */
        /* field_0x7b7 = 0; */
        /* field_0x7b3 = 255; */
        /* field_0x7b4 = 255; */
        /* goto L_f44; */
        /* L_f14:; */
        /* if (255 != 1) goto L_f44; */
        /* if ((this->field_0x7b7 & 255) == 1) goto L_f34; */
        /* if ((this->field_0x7b7 & 255) != 2) goto L_f44; */
        /* L_f34:; */
        /* field_0x7b7 = 0; */
        /* field_0x7ae = 1; */
        /* L_f44:; */
        /* return ((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->startCheck(this->field_0x788); */
}

/* 00001044-000010DC       .text chk_talk__11daNpc_Pf1_cFv */
void daNpc_Pf1_c::chk_talk() {
        /* if (this->field_0x52b8 == 1) goto L_f94; */
        /* if (this->field_0x52b8 == 2) goto L_f94; */
        /* if (this->field_0x52b8 != 3) goto L_f98; */
        /* L_f94:; */
        /* L_f98:; */
        /* if (1 == 0) goto L_fd0; */
        /* if (((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->ChkPresentEnd() == 0) goto L_fc8; */
        return 1;
        /* L_fc8:; */
        return 0;
        /* L_fd0:; */
        /* field_0x7a2 = 255; */
        return 1;
}

/* 000010DC-0000111C       .text chk_parts_notMov__11daNpc_Pf1_cFv */
void daNpc_Pf1_c::chk_parts_notMov() {
    /* if (this->field_0x77e == this->field_0x292) { */
        /* if (this->field_0x780 == this->field_0x296) goto L_1024; */
        /* if (this->field_0x77c != this->field_0x206) goto L_1028; */
    /* L_1024:; */
    /* L_1028:; */
    return 1;
}

/* 0000111C-00001170       .text searchByID__11daNpc_Pf1_cFUiPi */
void daNpc_Pf1_c::searchByID(fpc_ProcID, int*) {
    base = 0;
    if (fopAcM_SearchByID(fpc_ProcID) == 0) {
        base = 1;
    }
}

/* 00001170-00001334       .text lookBack__11daNpc_Pf1_cFv */
void daNpc_Pf1_c::lookBack() {
        /* _savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* if ((this->field_0x7ba & 255) == 3) goto L_118c; */
        /* if (/ * bge * / 1) goto L_1118; */
        /* if ((this->field_0x7ba & 255) == 1) goto L_1124; */
        /* if (/ * bge * / 1) goto L_116c; */
        /* goto L_11f0; */
        /* L_1118:; */
        /* if ((this->field_0x7ba & 255) >= 5) goto L_11f0; */
        /* goto L_1194; */
        /* L_1124:; */
        dNpc_playerEyePos();
        /* field_0x738 = 0; */
        /* field_0x73c = 0; */
        /* field_0x740 = 0; */
        /* goto L_11f0; */
        /* L_116c:; */
        /* goto L_11f0; */
        /* L_118c:; */
        /* goto L_11f0; */
        /* L_1194:; */
        /* if (((daNpc_Pf1_c*)(dNpc_playerEyePos()))->searchByID(this->field_0x700) == 0) goto L_11f0; */
        /* if (/ * bne * / 1) goto L_11f0; */
        /* field_0x738 = 0; */
        /* field_0x73c = 0; */
        /* field_0x740 = 0; */
        /* field_0x73c = 0; */
        /* L_11f0:; */
        /* return _restgpr_28(((dNpc_JntCtrl_c*)((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 656)))->lookAtTarget_2((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 518))); */
}

/* 00001334-000013B4       .text chkAttention__11daNpc_Pf1_cFv */
void daNpc_Pf1_c::chkAttention() {
    if (((dAttention_c*)(((char*)&g_dComIfG_gameInfo + 22536)))->LockonTruth() == 0) {
    }
    return ((this - ((dAttention_c*)(((char*)&g_dComIfG_gameInfo + 22536)))->ActionTarget(0)) >> 5);
}

/* 000013B4-0000140C       .text setAttention__11daNpc_Pf1_cFb */
void daNpc_Pf1_c::setAttention(bool) {
    /* field_0x274 = 0; */
    /* field_0x278 = (this->field_0x754 + this->field_0x20); */
    /* field_0x27c = 0; */
    if (this->field_0x784 == 0) {
    }
    eyePos = 0;
    /* field_0x264 = 0; */
    /* field_0x268 = 0; */
    return this;
}

/* 0000140C-00001494       .text decideType__11daNpc_Pf1_cFi */
void daNpc_Pf1_c::decideType(int) {
    if (this->field_0x7bb != 0) {
        return 1;
    }
    /* field_0x7bb = 1; */
    /* field_0x7bc = 0; */
    /* strcpy((this + 1742), ((char*)&@stringBase0 + 42), arg2, arg3, arg4, arg5, arg6, arg7); */
    if ((this->field_0x7bb & 255) != -1) {
        /* if ((this->field_0x7bc & 255) != -1) goto L_1394; */
    }
    /* L_1394:; */
    return 1;
}

/* 00001494-00001534       .text privateCut__11daNpc_Pf1_cFi */
void daNpc_Pf1_c::privateCut(int) {
        /* _savegpr_29(this, int, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* if (/ * beq * / 1) goto L_1430; */
        /* field_0x7b2 = ((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMyActIdx(); */
        /* if ((this->field_0x7b2 & 255) != -1) goto L_1418; */
        ((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->cutEnd();
        /* goto L_1430; */
        /* L_1418:; */
        ((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getIsAddvance();
        /* L_1430:; */
        return _restgpr_29(((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->cutEnd());
}

/* 00001534-00001558       .text endEvent__11daNpc_Pf1_cFv */
void daNpc_Pf1_c::endEvent() {
    /* field_0x7b3 = 255; */
    /* field_0x7b4 = 255; */
    return this;
}

/* 00001558-00001590       .text isEventEntry__11daNpc_Pf1_cFv */
void daNpc_Pf1_c::isEventEntry() {
    /* return ((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMyStaffId(this->field_0x2c4, 0, 0, arg4); */
}

/* 00001590-0000161C       .text event_proc__11daNpc_Pf1_cFi */
void daNpc_Pf1_c::event_proc(int) {
    /* if (((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->endCheck(this->field_0x788) != 0) { */
        /* endEvent(); */
    /* } else { */
        /* if (((dNpc_EventCut_c*)((this + 708)))->cutProc() != 0) goto L_1518; */
    /* } */
    /* L_1518:; */
    /* return privateCut(int); */

/* 0000161C-000016C8       .text set_action__11daNpc_Pf1_cFM11daNpc_Pf1_cFPCvPvPv_iPv */
void daNpc_Pf1_c::set_action(int (daNpc_Pf1_c::*)(void*), void*) {
        /* if (__ptmf_cmpr((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1776)) == 0) goto L_15c0; */
        /* if (__ptmf_test((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1776)) == 0) goto L_158c; */
        /* field_0x7bd = 9; */
        /* __ptmf_scall(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* L_158c:; */
        /* field_0x7bd = 0; */
        /* __ptmf_scall(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* L_15c0:; */
        return _restgpr_29(1);
}

/* 000016C8-0000179C       .text setStt__11daNpc_Pf1_cFSc */
void daNpc_Pf1_c::setStt(signed char) {
    /* field_0x7b8 = char; */
    if ((this->field_0x7b8 & 255) <= 7) {
        /* field_0x7b7 = 0; */
        speedF = 0;
        /* goto L_1694; */
        /* field_0x7b7 = 0; */
        speedF = 0;
        /* field_0x7b3 = 255; */
        /* field_0x7b4 = 255; */
        /* field_0x7be = 0; */
        /* goto L_1694; */
        /* field_0x7b7 = 0; */
        /* field_0x798 = cLib_getRndValue<i>__Fii(180, 90, this->field_0x7b8, arg3, arg4, arg5, arg6, arg7); */
        /* goto L_1694; */
        /* field_0x7b7 = 0; */
        /* field_0x796 = 30; */
        /* field_0x798 = 0; */
    }
    /* L_1694:; */
    return setAnm();
}

/* 0000179C-00001958       .text createTama__11daNpc_Pf1_cFf */
void daNpc_Pf1_c::createTama(float) {
        __ct();
        dNpc_playerEyePos();
        __mi();
        PSVECSquareMag();
        /* if (/ * ble * / 1) goto L_17d0; */
        /* L_17d0:; */
        cLib_targetAngleY();
        cLib_targetAngleX();
        /* if (fopAcM_fastCreate(470, 0, (this + 608), (this->field_0x20a & 255)) == 0) goto L_184c; */
        /* if (this == 0) goto L_1838; */
        /* goto L_183c; */
        /* L_1838:; */
        /* L_183c:; */
        /* field_0x290 = -1; */
        /* field_0x600 = farg0; */
        speedF = 0;
        /* L_184c:; */
        return fopAcM_fastCreate(470, 0, (this + 608), (this->field_0x20a & 255));
}

/* 00001958-00001A80       .text chk_areaIN__11daNpc_Pf1_cFf4cXyz */
void daNpc_Pf1_c::chk_areaIN(float, cXyz) {
    __mi();
    PSVECSquareMag();
    if (/* ble */ 1) {
    }
    if (this->field_0x8 != farg0) {
        /* if (/ * bne * / 1) goto L_1970; */
        createTama(base);
    }
    /* L_1970:; */
    return (C_@4185 + 0);
}

/* 00001A80-00001ACC       .text endEvent_check__11daNpc_Pf1_cFv */
void daNpc_Pf1_c::endEvent_check() {
    if (this->field_0x7a5 != 0) {
    }
    return 0;
}

/* 00001ACC-00001BEC       .text startEvent_check__11daNpc_Pf1_cFv */
void daNpc_Pf1_c::startEvent_check() {
        /* if (chk_areaIN() == 0) goto L_1ae4; */
        PSVECSquareDistance((this + 504), (this->field_0x5b40 + 504));
        /* if (/ * ble * / 1) goto L_1ac4; */
        /* L_1ac4:; */
        /* if (this->field_0x8 < this->field_0x60) goto L_1adc; */
        /* if (this->field_0x6ba == 0) goto L_1ae4; */
        /* L_1adc:; */
        return 1;
        /* L_1ae4:; */
        return 0;
}

/* 00001BEC-00001C94       .text set_pthPoint__11daNpc_Pf1_cFUc */
void daNpc_Pf1_c::set_pthPoint(unsigned char) {
    if (this->field_0x704 != 0) {
        /* field_0x709 = char; */
        getPoint((this + 1796));
        current = 0;
        /* field_0x1fc = 0; */
        /* field_0x200 = 0; */
        /* if (((dNpc_PathRun_c*)((this + 1796)))->nextIdx() == 0) goto L_1b94; */
        getPoint((this + 1796));
        /* field_0x206 = cLib_targetAngleY((this + 504)); */
    }
    /* L_1b94:; */
    return cLib_targetAngleY((this + 504));
}

/* 00001C94-00001EAC       .text chk_attn__11daNpc_Pf1_cFv */
void daNpc_Pf1_c::chk_attn() {
        /* _savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        __mi();
        PSVECSquareMag();
        /* if (/ * ble * / 1) goto L_1c7c; */
        /* goto L_1c80; */
        /* L_1c7c:; */
        /* L_1c80:; */
        /* cLib_targetAngleY((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 504), (this->field_0x5b40 + 504)); */
        /* if (this->field_0x7ba != 1) goto L_1d28; */
        /* if (/ * bge * / 1) goto L_1d00; */
        /* abs(((this->field_0x206 - cLib_targetAngleY((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 504), (this->field_0x5b40 + 504))) & 65535)); */
        /* if (/ * bge * / 1) goto L_1d00; */
        /* L_1d00:; */
        /* if (1 == 0) goto L_1d20; */
        /* if (/ * bge * / 1) goto L_1d20; */
        /* L_1d20:; */
        /* goto L_1d98; */
        /* L_1d28:; */
        /* if (/ * bge * / 1) goto L_1d74; */
        abs(1);
        /* if (/ * bge * / 1) goto L_1d74; */
        /* L_1d74:; */
        /* if (1 == 0) goto L_1d94; */
        /* if (/ * bge * / 1) goto L_1d94; */
        /* L_1d94:; */
        /* L_1d98:; */
        return _restgpr_29(1);
}

/* 00001EAC-00001F68       .text setBikon__11daNpc_Pf1_cF4cXyz */
void daNpc_Pf1_c::setBikon(cXyz) {
    delBikon();
    PSMTXTrans(((char*)&now__14mDoMtx_stack_c + 0));
    /* mDoMtx_YrotM(((char*)&now__14mDoMtx_stack_c + 0), this->field_0x206); */
    PSMTXMultVec(((char*)&now__14mDoMtx_stack_c + 0), cXyz);
    /* return ((dPa_control_c*)(this->field_0x5ab8))->set(0); */
}

/* 00001F68-00001F6C       .text delBikon__11daNpc_Pf1_cFv */
void daNpc_Pf1_c::delBikon() {
}

/* 00001F6C-00001F74       .text wait_1__11daNpc_Pf1_cFv */
int daNpc_Pf1_c::wait_1() {
    return 1;
}

/* 00001F74-00002030       .text regret__11daNpc_Pf1_cFv */
void daNpc_Pf1_c::regret() {
        /* if (this->field_0x7ae == 0) goto L_1ec8; */
        /* if (chk_talk() == 0) goto L_1ec0; */
        setStt(2);
        /* L_1ec0:; */
        return 1;
        /* L_1ec8:; */
        /* if (((daNpc_Pf1_c*)(1))->endEvent_check() != 0) goto L_1efc; */
        /* field_0x7b7 = 0; */
        /* if (startEvent_check() == 0) goto L_1f04; */
        setStt(5);
        /* goto L_1f04; */
        /* L_1efc:; */
        /* field_0x7b7 = 2; */
        /* L_1f04:; */
        /* field_0x7ba = 0; */
        /* field_0x7af = 1; */
        /* if (this->field_0x7a0 == 0) goto L_1f2c; */
        setStt(3);
        /* L_1f2c:; */
        return 1;
}

/* 00002030-00002350       .text attk_1__11daNpc_Pf1_cFv */
void daNpc_Pf1_c::attk_1() {
        /* _savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        __mi();
        PSVECSquareMag();
        /* if (/ * ble * / 1) goto L_2004; */
        /* L_2004:; */
        /* if (this->field_0x7ae == 0) goto L_2040; */
        /* if (((daNpc_Pf1_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->chk_talk() == 0) goto L_2038; */
        /* ((daNpc_Pf1_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->setStt(6); */
        /* ((daNpc_Pf1_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->setStt(2); */
        /* L_2038:; */
        return 1;
        /* L_2040:; */
        /* field_0x7ba = 0; */
        /* field_0x7af = 1; */
        /* if (this->field_0x7b6 != 0) goto L_2150; */
        /* if (this->field_0x798 != 0) goto L_2128; */
        /* cLib_addCalcAngleS((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 518), cLib_targetAngleY((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 504), (this->field_0x5b40 + 504)), 4, 4096, 128); */
        /* if (abs(((cLib_targetAngleY((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 504), (this->field_0x5b40 + 504)) - this->field_0x206) & 65535)) >= 2048) goto L_2148; */
        /* ((JAIZelBasic*)(base))->seStart(22717, (_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 504), 0, 0, 0); */
        /* ((daNpc_Pf1_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->setBikon(); */
        /* field_0x798 = 20; */
        /* goto L_2148; */
        /* L_2128:; */
        /* if (cLib_calcTimer<s>__FPs((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1944)) != 0) goto L_2148; */
        /* ((daNpc_Pf1_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->setAnm_NUM(2, 1); */
        /* L_2148:; */
        return 1;
        /* L_2150:; */
        /* if (this->field_0x7b7 == 1) goto L_216c; */
        /* if (/ * bge * / 1) goto L_216c; */
        /* field_0x7b7 = 1; */
        /* L_216c:; */
        /* if (cLib_calcTimer<s>__FPs((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1942)) != 0) goto L_21d0; */
        /* ((daNpc_Pf1_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->chk_areaIN(); */
        /* if (/ * beq * / 1) goto L_21d0; */
        /* ((daNpc_Pf1_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->setStt(6); */
        return 1;
        /* L_21d0:; */
        /* cLib_addCalcAngleS((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 518), cLib_targetAngleY((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 504), (this->field_0x5b40 + 504)), this->field_0x26, this->field_0x28, 128); */
        /* cLib_chaseF((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 596), ((char*)&l_HIO + 0)); */
        /* if ((speedF * this->field_0x38) >= this->field_0x88) goto L_223c; */
        /* goto L_2240; */
        /* L_223c:; */
        /* L_2240:; */
        /* field_0x64 = (speedF * this->field_0x38); */
        return _restgpr_29(1);
}

/* 00002350-000025D0       .text walk_1__11daNpc_Pf1_cFv */
void daNpc_Pf1_c::walk_1() {
        /* if (this->field_0x704 != 0) goto L_2294; */
        return 1;
        /* L_2294:; */
        /* if (this->field_0x5 == 0) goto L_22e8; */
        /* if (((dNpc_PathRun_c*)((this + 1796)))->chkPointPass() == 0) goto L_22f0; */
        ((dNpc_PathRun_c*)((this + 1796)))->nextIdxAuto();
        /* goto L_22f0; */
        /* L_22e8:; */
        return 1;
        /* L_22f0:; */
        getPoint((this + 1796));
        cLib_addCalcAngleS((this + 518), cLib_targetAngleY((this + 504)), this->field_0x26, this->field_0x28, 128);
        /* if (cLib_calcTimer<s>__FPs((this + 1944)) == 0) goto L_236c; */
        /* if (this->field_0x7ae == 0) goto L_2374; */
        /* L_236c:; */
        /* L_2374:; */
        /* if (endEvent_check() != 0) goto L_23cc; */
        /* if (startEvent_check() == 0) goto L_23cc; */
        speedF = 0;
        /* field_0x798 = 0; */
        setStt(5);
        /* field_0x7ba = 0; */
        /* field_0x7af = 1; */
        return 1;
        /* L_23cc:; */
        cLib_chaseF((this + 596), ((char*)&l_HIO + 0));
        /* if ((speedF * this->field_0x2c) >= base) goto L_240c; */
        /* goto L_2410; */
        /* L_240c:; */
        /* L_2410:; */
        /* field_0x64 = (speedF * this->field_0x2c); */
        /* if (/ * bne * / 1) goto L_2494; */
        /* if (/ * bne * / 1) goto L_2494; */
        /* if (this->field_0x7ae == 0) goto L_2480; */
        /* if (chk_talk() == 0) goto L_2478; */
        setStt(2);
        /* L_2478:; */
        return 1;
        /* L_2480:; */
        setStt(4);
        return 1;
        /* L_2494:; */
        /* field_0x7b7 = 0; */
        /* if (endEvent_check() == 0) goto L_24b4; */
        /* field_0x7b7 = 2; */
        /* L_24b4:; */
        /* field_0x7ba = 0; */
        /* field_0x7af = 1; */
        return 1;
}

/* 000025D0-000026E4       .text wait_2__11daNpc_Pf1_cFv */
void daNpc_Pf1_c::wait_2() {
        /* if (this->field_0x7ae == 0) goto L_2524; */
        /* if (chk_talk() == 0) goto L_251c; */
        setStt(2);
        /* L_251c:; */
        return 1;
        /* L_2524:; */
        /* if (((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->isEventBit(2820) == 0) goto L_2580; */
        chk_areaIN();
        /* if (/ * beq * / 1) goto L_25a8; */
        /* L_2580:; */
        ((dNpc_PathRun_c*)((this + 1796)))->setNearPathIndx((this + 504), C_@4187);
        setStt(3);
        return 1;
        /* L_25a8:; */
        /* field_0x7b7 = 2; */
        /* field_0x7af = 1; */
        /* if (chk_attn() == 0) goto L_25d8; */
        /* field_0x7ba = 1; */
        return 1;
        /* L_25d8:; */
        /* field_0x7ba = 0; */
        return 1;
}

/* 000026E4-00002874       .text wait_3__11daNpc_Pf1_cFv */
void daNpc_Pf1_c::wait_3() {
        __mi();
        PSVECSquareMag();
        /* if (/ * ble * / 1) goto L_26b8; */
        /* L_26b8:; */
        /* if (this->field_0x7ae == 0) goto L_26f0; */
        /* if (chk_talk() == 0) goto L_26e8; */
        setStt(2);
        /* field_0x7b0 = 0; */
        /* L_26e8:; */
        return 1;
        /* L_26f0:; */
        /* field_0x7b0 = 0; */
        /* if (this->field_0x7b0 == 0) goto L_2734; */
        setStt(3);
        /* field_0x7ba = 0; */
        /* field_0x7af = 1; */
        return 1;
        /* L_2734:; */
        /* field_0x7b7 = 2; */
        /* field_0x7af = 1; */
        /* if (chk_attn() == 0) goto L_2764; */
        /* field_0x7ba = 1; */
        return 1;
        /* L_2764:; */
        /* field_0x7ba = 0; */
        return 1;
}

/* 00002874-00002980       .text talk_1__11daNpc_Pf1_cFv */
void daNpc_Pf1_c::talk_1() {
        chk_parts_notMov();
        cLib_addCalcAngleS((this + 518), cLib_targetAngleY((this + 504), (this->field_0x5b40 + 504)), 4, this->field_0x1e, 128);
        talk(1);
        /* if (this->field_0x6b0 != 0) goto L_2800; */
        return 1;
        /* L_2800:; */
        /* if ((1 & 65535) != 10) goto L_2828; */
        /* if (this->field_0x7a0 == 0) goto L_2828; */
        /* if (this->field_0x6a4 != 7008) goto L_2828; */
        fopMsgM_messageSendOn();
        /* L_2828:; */
        /* if (this->field_0xf8 == 6) goto L_2878; */
        /* if (/ * bge * / 1) goto L_2848; */
        /* if (this->field_0xf8 == 2) goto L_2878; */
        /* goto L_2878; */
        /* L_2848:; */
        /* if (this->field_0xf8 == 19) goto L_2854; */
        /* goto L_2878; */
        /* L_2854:; */
        /* field_0x7a2 = 255; */
        /* field_0x7ae = 0; */
        /* setStt(this->field_0x7b9); */
        endEvent();
        /* L_2878:; */
        return (chk_parts_notMov() & 16777215);
}

/* 00002980-00002A8C       .text wait_action1__11daNpc_Pf1_cFPv */
void daNpc_Pf1_c::wait_action1(void*) {
        /* if ((this->field_0x7bd & 255) >= 4) goto L_28c8; */
        /* if ((this->field_0x7bd & 255) == 0) goto L_28d4; */
        /* if (/ * bge * / 1) goto L_28ec; */
        /* goto L_2988; */
        /* L_28c8:; */
        /* if ((this->field_0x7bd & 255) == 9) goto L_2988; */
        /* goto L_2988; */
        /* L_28d4:; */
        /* setStt(3, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* field_0x7bd = (this->field_0x7bd + 1); */
        /* goto L_2988; */
        /* L_28ec:; */
        /* field_0x7ad = ((daNpc_Pf1_c*)(this->field_0x7bd))->chkAttention(); */
        /* if ((this->field_0x7b8 & 255) > 7) goto L_2988; */
        /* field_0x784 = wait_1(); */
        /* goto L_2988; */
        /* field_0x784 = talk_1(); */
        /* goto L_2988; */
        /* field_0x784 = walk_1(); */
        /* goto L_2988; */
        /* field_0x784 = regret(); */
        /* goto L_2988; */
        /* field_0x784 = attk_1(); */
        /* goto L_2988; */
        /* field_0x784 = wait_2(); */
        /* goto L_2988; */
        /* field_0x784 = wait_3(); */
        /* L_2988:; */
        return 1;
}

/* 00002A8C-00002BCC       .text demo__11daNpc_Pf1_cFv */
void daNpc_Pf1_c::demo() {
        /* if (demoActorID != 0) goto L_29d8; */
        /* if (this->field_0x7b1 == 0) goto L_2ac8; */
        /* field_0x7b1 = 0; */
        /* goto L_2ac8; */
        /* L_29d8:; */
        /* if (this->field_0x7b1 != 0) goto L_2a04; */
        /* field_0x7b1 = 1; */
        /* field_0x7aa = 0; */
        /* field_0x292 = 0; */
        /* field_0x290 = 0; */
        /* field_0x296 = 0; */
        /* field_0x294 = 0; */
        /* L_2a04:; */
        ((dDemo_object_c*)((this->field_0x5abc + 32)))->getActor(demoActorID);
        /* if (this->field_0x6e0 == 0) goto L_2a4c; */
        /* field_0x6ec = (this->field_0x6ec + 1); */
        /* if (this->field_0x6ec < (this->field_0x6 & 16777215)) goto L_2a4c; */
        /* field_0x6ec = (this->field_0x6 & 16777215); */
        /* L_2a4c:; */
        ((dDemo_actor_c*)(((dDemo_object_c*)((this->field_0x5abc + 32)))->getActor(demoActorID)))->getP_BtpData((this + 1742), (this->field_0x6 & 16777215));
        /* if (/ * beq * / 1) goto L_2aa4; */
        /* ((mDoExt_btpAnm*)((this + 1752)))->init(this->field_0x4); */
        /* field_0x7b5 = 2; */
        /* field_0x6ec = 0; */
        /* L_2aa4:; */
        dDemo_setDemoData(this, 106, this->field_0x330, (this + 1742), 0, 0, 0, 0);
        /* L_2ac8:; */
        /* return this->field_0x7b1; */
}

/* 00002BCC-00002C5C       .text shadowDraw__11daNpc_Pf1_cFv */
void daNpc_Pf1_c::shadowDraw() {
    /* field_0x6d4 = dComIfGd_setShadow(this->field_0x6d4, 1, this->field_0x50); */
    /* return dComIfGd_setShadow(this->field_0x6d4, 1, this->field_0x50); */
}

/* 00002C5C-00002D30       .text _draw__11daNpc_Pf1_cFv */
BOOL daNpc_Pf1_c::_draw() {
    /* _savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
    if (this->field_0x7a8 == 0) {
        /* if (this->field_0x7ab != 0) goto L_2bb4; */
    }
    return 1;
    /* L_2bb4:; */
    /* ((dScnKy_env_light_c*)(((char*)&g_env_light + 0)))->settingTevStruct(0, (_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 504), (_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 268)); */
    /* ((dScnKy_env_light_c*)(((char*)&g_env_light + 0)))->setLightTevColorType(this->field_0x50, (_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 268)); */
    /* ((mDoExt_btpAnm*)((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1752)))->entry(this->field_0x4, this->field_0x6ec); */
    /* ((mDoExt_McaMorf*)(this->field_0x330))->entryDL(); */
    /* ((J3DMaterialTable*)((this->field_0x4 + 88)))->removeTexNoAnimator(this->field_0x6e0); */
    /* ((daNpc_Pf1_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->shadowDraw(); */
    /* dSnap_RegistFig(91, _savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7), C_@4361); */
    return _restgpr_29(1);
}

/* 00002D30-00002F94       .text _execute__11daNpc_Pf1_cFv */
BOOL daNpc_Pf1_c::_execute() {
        /* _savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* if (this->field_0x7ac != 0) goto L_2ca8; */
        /* field_0x70c = 0; */
        /* field_0x710 = 0; */
        /* field_0x714 = 0; */
        /* field_0x7ac = 1; */
        /* L_2ca8:; */
        /* ((dNpc_JntCtrl_c*)((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 656)))->setParam(this->field_0x14, this->field_0x16, this->field_0x18, this->field_0x1a, this->field_0xc, this->field_0xe, this->field_0x10); */
        /* if (this->field_0x7a8 == 0) goto L_2d04; */
        /* if (demoActorID != 0) goto L_2d04; */
        return 1;
        /* L_2d04:; */
        /* ((daNpc_Pf1_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->checkOrder(); */
        /* if (((daNpc_Pf1_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->demo() != 0) goto L_2dec; */
        /* if (this->field_0x529a == 0) goto L_2d50; */
        /* if (this->field_0xf8 == 1) goto L_2d50; */
        /* L_2d50:; */
        /* if (((daNpc_Pf1_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->isEventEntry() < 0) goto L_2d64; */
        /* ((daNpc_Pf1_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->event_proc(((daNpc_Pf1_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->isEventEntry()); */
        /* goto L_2d78; */
        /* L_2d64:; */
        /* __ptmf_scall(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7), 0); */
        /* L_2d78:; */
        /* field_0x6ba = 0; */
        /* ((daNpc_Pf1_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->lookBack(); */
        /* fopAcM_posMoveF(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7), (_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1336)); */
        /* ((dBgS_Acch*)((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 820)))->CrrPos(((char*)&g_dComIfG_gameInfo + 4768)); */
        /* if (/ * beq * / 1) goto L_2de0; */
        /* if (((cBgS*)(((char*)&g_dComIfG_gameInfo + 4768)))->GetTriPla(this->field_0x41e, this->field_0x41c) == 0) goto L_2de0; */
        /* field_0x768 = 0; */
        /* field_0x76c = 0; */
        /* field_0x770 = 0; */
        /* L_2de0:; */
        /* ((daNpc_Pf1_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->play_animation(); */
        /* goto L_2df4; */
        /* L_2dec:; */
        /* field_0x7a8 = 0; */
        /* L_2df4:; */
        /* ((daNpc_Pf1_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->eventOrder(); */
        /* if (this->field_0x7aa != 0) goto L_2e38; */
        /* L_2e38:; */
        /* field_0x1b5 = ((dBgS*)(((char*)&g_dComIfG_gameInfo + 4768)))->GetRoomId((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1052)); */
        /* field_0x1b6 = ((dBgS*)(((char*)&g_dComIfG_gameInfo + 4768)))->GetPolyColor((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1052)); */
        /* ((daNpc_Pf1_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->setMtx(0); */
        /* if (this->field_0x7b1 != 0) goto L_2e8c; */
        /* ((fopNpc_npc_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->setCollision(); */
        /* L_2e8c:; */
        return _restgpr_29(1);
}

/* 00002F94-00002FF8       .text _delete__11daNpc_Pf1_cFv */
BOOL daNpc_Pf1_c::_delete() {
    cDyl_Unlink(470);
    dComIfG_resDelete((this + 1732), (this + 1742));
    delBikon();
    if (heap != 0) {
        /* if (this->field_0x330 != 0) goto L_2ef4; */
        /* ((mDoExt_McaMorf*)(this->field_0x330))->stopZelAnime(); */
    }
    /* L_2ef4:; */
    return 1;
}

/* 00002FF8-00003258       .text _create__11daNpc_Pf1_cFv */
cPhs_State daNpc_Pf1_c::_create() {
        /* _savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* if (/ * bne * / 1) goto L_3070; */
        /* if (/ * beq * / 1) goto L_3064; */
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
        /* L_3064:; */
        /* L_3070:; */
        /* if (((daNpc_Pf1_c*)(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->decideType((this->field_0xb0 & 16777215)) != 0) goto L_3090; */
        return 5;
        /* L_3090:; */
        /* field_0x7a7 = ((4 - dComIfG_resLoad((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1732), (_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1742))) >> 5); */
        /* if (this->field_0x7a7 != 0) goto L_30c0; */
        /* goto L_3154; */
        /* L_30c0:; */
        /* if (cDyl_LinkASync(470) == 4) goto L_30d4; */
        /* goto L_3154; */
        /* L_30d4:; */
        /* if (fopAcM_entrySolidHeap(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7), ((char*)&CheckCreateHeap__FP10fopAc_ac_c + 0), ((char*)&a_siz_tbl$5593 + 0)) != 0) goto L_310c; */
        return 5;
        /* L_310c:; */
        cullMtx = (this->field_0x50 + 36);
        /* fopAcM_setCullSizeBox(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* if (((daNpc_Pf1_c*)(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->createInit() == 0) goto L_3154; */
        /* L_3154:; */
        /* return _restgpr_28(dComIfG_resLoad((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1732), (_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1742))); */
}

/* 00003524-00003798       .text bodyCreateHeap__11daNpc_Pf1_cFv */
void daNpc_Pf1_c::bodyCreateHeap() {
    /* ((dRes_control_c*)((this + 1742)))->getIDRes(8, ((char*)&g_dComIfG_gameInfo + -16460), 64, arg4, arg5); */
    if (/* bne */ 1) {
        /* ((JUTAssertion*)(((JUTAssertion*)(((dRes_control_c*)((this + 1742)))->getIDRes(8, ((char*)&g_dComIfG_gameInfo + -16460), 64, arg4, arg5)))->getSDevice()))->showAssert(((char*)&@stringBase0 + 10), 2051, ((char*)&@stringBase0 + 51)); */
        OSPanic(((char*)&@stringBase0 + 10), 2051, ((char*)&@stringBase0 + 37));
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
        /* ((JUTAssertion*)(((JUTAssertion*)(((JUTNameTab*)(this->field_0x54))->getIndex(((char*)&@stringBase0 + 66))))->getSDevice()))->showAssert(((char*)&@stringBase0 + 10), 2071, ((char*)&@stringBase0 + 71)); */
        OSPanic(((char*)&@stringBase0 + 10), 2071, ((char*)&@stringBase0 + 37));
    }
    /* field_0x6cd = ((JUTNameTab*)(this->field_0x54))->getIndex(((char*)&@stringBase0 + 90)); */
    if (this->field_0x6cd != 0) {
        /* ((JUTAssertion*)(((JUTAssertion*)(((JUTNameTab*)(this->field_0x54))->getIndex(((char*)&@stringBase0 + 90))))->getSDevice()))->showAssert(((char*)&@stringBase0 + 10), 2073, ((char*)&@stringBase0 + 100)); */
        OSPanic(((char*)&@stringBase0 + 10), 2073, ((char*)&@stringBase0 + 37));
    }
    /* field_0x8 = 0; */
    /* field_0x8 = 0; */
    /* field_0x14 = this; */
    return 1;
}

/* 00003798-0000381C       .text CreateHeap__11daNpc_Pf1_cFv */
void daNpc_Pf1_c::CreateHeap() {
    if (bodyCreateHeap() == 0) {
        return 0;
    }
    ((dBgS_AcchCir*)((this + 1272)))->SetWall(C_@4873);
    ((dBgS_Acch*)((this + 820)))->Set((this + 504), (this + 484), this, 1, (this + 1272), (this + 544), 0);
    return 1;
}

/* 0000381C-0000383C       .text daNpc_Pf1_Create__FP10fopAc_ac_c */
static cPhs_State daNpc_Pf1_Create(fopAc_ac_c* i_this) {
    return ((daNpc_Pf1_c*)i_this)->_create();
}

/* 0000383C-0000385C       .text daNpc_Pf1_Delete__FP11daNpc_Pf1_c */
static BOOL daNpc_Pf1_Delete(daNpc_Pf1_c* i_this) {
    return ((daNpc_Pf1_c*)i_this)->_delete();
}

/* 0000385C-0000387C       .text daNpc_Pf1_Execute__FP11daNpc_Pf1_c */
static BOOL daNpc_Pf1_Execute(daNpc_Pf1_c* i_this) {
    return ((daNpc_Pf1_c*)i_this)->_execute();
}

/* 0000387C-0000389C       .text daNpc_Pf1_Draw__FP11daNpc_Pf1_c */
static BOOL daNpc_Pf1_Draw(daNpc_Pf1_c* i_this) {
    return ((daNpc_Pf1_c*)i_this)->_draw();

/* 0000389C-000038A4       .text daNpc_Pf1_IsDelete__FP11daNpc_Pf1_c */
static BOOL daNpc_Pf1_IsDelete(daNpc_Pf1_c*) {
    return 1;

static actor_method_class l_daNpc_Pf1_Method = {
    (process_method_func)daNpc_Pf1_Create,
    (process_method_func)daNpc_Pf1_Delete,
    (process_method_func)daNpc_Pf1_Execute,
    (process_method_func)daNpc_Pf1_IsDelete,
    (process_method_func)daNpc_Pf1_Draw,
};

actor_process_profile_definition g_profile_NPC_PF1 = {
    /* Layer ID     */ fpcLy_CURRENT_e,
    /* List ID      */ 0x0007,
    /* List Prio    */ fpcPi_CURRENT_e,
    /* Proc Name    */ fpcNm_NPC_PF1_e,
    /* Proc SubMtd  */ &g_fpcLf_Method.base,
    /* Size         */ sizeof(daNpc_Pf1_c),
    /* Size Other   */ 0,
    /* Parameters   */ 0,
    /* Leaf SubMtd  */ &g_fopAc_Method.base,
    /* Draw Prio    */ fpcDwPi_NPC_PF1_e,
    /* Actor SubMtd */ &l_daNpc_Pf1_Method,
    /* Status       */ 0x08 | fopAcStts_SHOWMAP_e | fopAcStts_NOCULLEXEC_e | fopAcStts_CULL_e | fopAcStts_UNK40000_e,
    /* Group        */ fopAc_ACTOR_e,
    /* Cull Type    */ fopAc_CULLBOX_CUSTOM_e,
};

/* 由 fix_decomp_braces.py 补齐：反编译产物末尾缺 4 个 } */
}}}}
