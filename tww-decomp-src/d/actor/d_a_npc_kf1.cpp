/**
 * d_a_npc_kf1.cpp
 * NPC - Mila's Father (rich)
 */

#include "d/dolzel_rel.h" // IWYU pragma: keep
#include "d/actor/d_a_npc_kf1.h"
#include "d/d_com_inf_game.h"

/* 000000EC-00000150       .text __ct__15daNpc_Kf1_HIO_cFv */
daNpc_Kf1_HIO_c::daNpc_Kf1_HIO_c() {
    /* __ct__15daNpc_Kf1_HIO_cFv: 无实义指令 */
}

/* 00000198-000001E4       .text nodeCB_Head__FP7J3DNodei */
static BOOL nodeCB_Head(J3DNode* i_param_1, int i_param_2) {
    if (i_param_2 == 0) {
        if (j3dSys.getModel()->getUserArea() != NULL) {
            reinterpret_cast<daNpc_Kf1_c*>(j3dSys.getModel()->getUserArea())
                ->_nodeCB_Head(i_param_1, j3dSys.getModel());
        }
    }
    return TRUE;
}

/* 000001E4-000002D8       .text _nodeCB_Head__11daNpc_Kf1_cFP7J3DNodeP8J3DModel */
void daNpc_Kf1_c::_nodeCB_Head(J3DNode*, J3DModel*) {
    /* L_fc:; */
    /* goto L_fc; */
}

/* 00000314-00000360       .text nodeCB_Neck__FP7J3DNodei */
static BOOL nodeCB_Neck(J3DNode* i_node, int i_switch) {
    if (i_switch == 0) {
    if (j3dSys.getModel()->getUserArea() != NULL) {
    reinterpret_cast<daNpc_Kf1_c*>(j3dSys.getModel()->getUserArea())
    ->_nodeCB_Neck(i_node, j3dSys.getModel());
    }
    }
    return TRUE;
}

/* 00000360-00000400       .text _nodeCB_Neck__11daNpc_Kf1_cFP7J3DNodeP8J3DModel */
void daNpc_Kf1_c::_nodeCB_Neck(J3DNode*, J3DModel*) {
    /* _savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
    PSMTXCopy();
    /* mDoMtx_XrotM(((char*)&now__14mDoMtx_stack_c + 0), this->field_0x292); */
    /* mDoMtx_ZrotM(((char*)&now__14mDoMtx_stack_c + 0), ((-this->field_0x290) & 65535)); */
    PSMTXCopy(((char*)&now__14mDoMtx_stack_c + 0), ((char*)&mCurrentMtx__6J3DSys + 0));
    return _restgpr_29(PSMTXCopy(((char*)&now__14mDoMtx_stack_c + 0)));
}

/* 00000400-0000044C       .text nodeCB_BackBone__FP7J3DNodei */
static BOOL nodeCB_BackBone(J3DNode* i_param_1, int i_param_2) {
    if (i_param_2 == 0) {
        if (j3dSys.getModel()->getUserArea() != NULL) {
            reinterpret_cast<daNpc_Kf1_c*>(j3dSys.getModel()->getUserArea())
                ->_nodeCB_BackBone(i_param_1, j3dSys.getModel());
        }
    }
    return TRUE;
}

/* 0000044C-000004EC       .text _nodeCB_BackBone__11daNpc_Kf1_cFP7J3DNodeP8J3DModel */
void daNpc_Kf1_c::_nodeCB_BackBone(J3DNode*, J3DModel*) {
    /* _savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
    PSMTXCopy();
    /* mDoMtx_XrotM(((char*)&now__14mDoMtx_stack_c + 0), this->field_0x296); */
    /* mDoMtx_ZrotM(((char*)&now__14mDoMtx_stack_c + 0), ((-this->field_0x294) & 65535)); */
    PSMTXCopy(((char*)&now__14mDoMtx_stack_c + 0), ((char*)&mCurrentMtx__6J3DSys + 0));
    return _restgpr_29(PSMTXCopy(((char*)&now__14mDoMtx_stack_c + 0)));
}

/* 000004EC-0000050C       .text CheckCreateHeap__FP10fopAc_ac_c */
static BOOL CheckCreateHeap(fopAc_ac_c* i_this) {
    ((daNpc_Kf1_c*)i_this)->CreateHeap();
    return TRUE;
}

/* 0000050C-0000059C       .text searchActor_Tsubo__FPvPv */
void searchActor_Tsubo(void*, void*) {
    if (this->field_0x0 < 20) {
        /* if (fopAc_IsActor(arg0) != 0) goto L_498; */
        /* if (this->field_0x8 == 459) goto L_498; */
        /* if (PrmAbstract<Q37daTsubo5Act_c5Prm_e>__5daObjFPC10fopAc_ac_cQ37daTsubo5Act_c5Prm_eQ37daTsubo5Act_c5Prm_e(arg0, 4, 24) == 14) goto L_498; */
        /* field_0x0 = (this->field_0x0 + 1); */
    }
    /* L_498:; */
    return 0;
}

/* 0000059C-0000061C       .text init_KF1_0__11daNpc_Kf1_cFv */
void daNpc_Kf1_c::init_KF1_0() {
    if (((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->isEventBit(11521) == 0) {
        set_action();
        return 1;
    }
    return 0;
}

/* 0000061C-0000083C       .text createInit__11daNpc_Kf1_cFv */
void daNpc_Kf1_c::createInit() {
        /* _savegpr_25(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* L_56c:; */
        ((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getEventIdx();
        /* if ((0 + 1) < 3) goto L_56c; */
        /* ((dNpc_EventCut_c*)((_savegpr_25(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 708)))->setActorInfo2(((char*)&@stringBase0 + 24), _savegpr_25(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* if (/ * beq * / 1) goto L_614; */
        /* ((dNpc_PathRun_c*)((_savegpr_25(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1800)))->setInf(); */
        /* if (m708 == 0) goto L_60c; */
        /* ((daNpc_Kf1_c*)(_savegpr_25(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->set_pthPoint(0); */
        /* goto L_614; */
        /* L_60c:; */
        return 0;
        /* L_614:; */
        /* if (m708 != 0) goto L_628; */
        return 0;
        /* L_628:; */
        /* field_0x280 = 10; */
        /* field_0x26d = 171; */
        /* field_0x26f = 171; */
        gravity = 0;
        /* field_0x7f6 = 10; */
        /* if (this->field_0x7fc == 0) goto L_668; */
        /* goto L_674; */
        /* L_668:; */
        /* ((daNpc_Kf1_c*)(_savegpr_25(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->init_KF1_0(); */
        /* goto L_678; */
        /* L_674:; */
        /* L_678:; */
        /* if (0 != 0) goto L_688; */
        return 0;
        /* L_688:; */
        /* ((dCcD_Stts*)((_savegpr_25(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1336)))->Init(217, 255, _savegpr_25(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* field_0x5b8 = (_savegpr_25(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1336); */
        /* ((dCcD_Cyl*)((_savegpr_25(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1396)))->Set(((char*)&dNpc_cyl_src + 0)); */
        /* ((dBgS_Acch*)((_savegpr_25(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 820)))->CrrPos(((char*)&g_dComIfG_gameInfo + 4768)); */
        /* ((daNpc_Kf1_c*)(_savegpr_25(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->play_animation(); */
        /* field_0x1b5 = ((dBgS*)(((char*)&g_dComIfG_gameInfo + 4768)))->GetRoomId((_savegpr_25(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1052)); */
        /* field_0x1b6 = ((dBgS*)(((char*)&g_dComIfG_gameInfo + 4768)))->GetPolyColor((_savegpr_25(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1052)); */
        /* ((mDoExt_McaMorf*)(this->field_0x330))->setMorf(C_@4197); */
        /* ((daNpc_Kf1_c*)(_savegpr_25(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->setMtx(1); */
        return _restgpr_25(1);
}

/* 0000083C-000008E4       .text play_animation__11daNpc_Kf1_cFv */
void daNpc_Kf1_c::play_animation() {
    play_btp_anm();
    if (/* beq */ 1) {
        ((dBgS*)(((char*)&g_dComIfG_gameInfo + 4768)))->GetMtrlSndId((this + 1052));
    }
    /* field_0x79c = ((mDoExt_McaMorf*)(this->field_0x330))->play((this + 608), ((dBgS*)(((char*)&g_dComIfG_gameInfo + 4768)))->GetMtrlSndId((this + 1052)), dComIfGp_getReverb((this->field_0x20a & 255))); */
    /* if (this->field_0x68 > this->field_0x76c) { */
        /* field_0x79c = 1; */
    /* field_0x76c = 0; */
    /* return this->field_0x330; */

/* 000008E4-00000A20       .text setMtx__11daNpc_Kf1_cFb */
void daNpc_Kf1_c::setMtx(bool) {
    /* _savegpr_29(this, bool, arg2, arg3, arg4, arg5, arg6, arg7); */
    /* field_0x18 = 0; */
    /* field_0x1c = 0; */
    /* field_0x20 = 0; */
    PSMTXTrans(((char*)&now__14mDoMtx_stack_c + 0));
    /* mDoMtx_ZXYrotM(((char*)&now__14mDoMtx_stack_c + 0), this->field_0x722, this->field_0x724); */
    PSMTXCopy(((char*)&now__14mDoMtx_stack_c + 0), (this->field_0x50 + 36));
    /* ((mDoExt_McaMorf*)(this->field_0x330))->calc(); */
    if (this->field_0x6d0 != 0) {
        ((mDoMtx_stack_c*)(PSMTXCopy((this->field_0x8c + ((this->field_0x6cc & 255) * 48)), ((char*)&now__14mDoMtx_stack_c + 0))))->transM();
        mDoMtx_XYZrotM(((char*)&now__14mDoMtx_stack_c + 0), -16384, -16384);
        PSMTXCopy(((char*)&now__14mDoMtx_stack_c + 0), (this->field_0x6d0 + 36));
    }
    /* return _restgpr_29(((daNpc_Kf1_c*)(_savegpr_29(this, bool, arg2, arg3, arg4, arg5, arg6, arg7)))->setAttention()); */
}

/* 00000A20-00000A34       .text bckResID__11daNpc_Kf1_cFi */
int daNpc_Kf1_c::bckResID(int anmNum) {
    static const int a_resID_tbl[] = {
        10, 12, 6, 7, 8, 9, 5, 3, 4, 11, 2, 13, 1065353216, 3253731328, 0,
    };
    return a_resID_tbl[anmNum];
}

/* 00000A34-00000A48       .text btpResID__11daNpc_Kf1_cFi */
int daNpc_Kf1_c::btpResID(int anmNum) {
    static const int a_resID_tbl[] = {
        2, 13,
    };
    return a_resID_tbl[anmNum];
}

/* 00000A48-00000B4C       .text setBtp__11daNpc_Kf1_cFScb */
void daNpc_Kf1_c::setBtp(signed char, bool) {
    /* _savegpr_27(this, char, bool, arg3, arg4, arg5, arg6, arg7); */
    if (/* bge */ 1) {
        return 0;
    }
    /* ((dRes_control_c*)((_savegpr_27(this, char, bool, arg3, arg4, arg5, arg6, arg7) + 1748)))->getIDRes((((daNpc_Kf1_c*)(0))->btpResID() & 65535), ((char*)&g_dComIfG_gameInfo + -16460), 64); */
    if (/* bne */ 1) {
        /* ((JUTAssertion*)(((JUTAssertion*)(((dRes_control_c*)((_savegpr_27(this, char, bool, arg3, arg4, arg5, arg6, arg7) + 1748)))->getIDRes((((daNpc_Kf1_c*)(0))->btpResID() & 65535), ((char*)&g_dComIfG_gameInfo + -16460), 64)))->getSDevice()))->showAssert(((char*)&@stringBase0 + 28), 522, ((char*)&@stringBase0 + 44)); */
        OSPanic(((char*)&@stringBase0 + 28), 522, ((char*)&@stringBase0 + 55));
    }
    /* field_0x6f0 = 0; */
    /* field_0x6f2 = 0; */
    /* return _restgpr_27(((mDoExt_btpAnm*)((_savegpr_27(this, char, bool, arg3, arg4, arg5, arg6, arg7) + 1756)))->init(this->field_0x4)); */
}

/* 00000B4C-00000B6C       .text init_texPttrnAnm__11daNpc_Kf1_cFScb */
void daNpc_Kf1_c::init_texPttrnAnm(signed char, bool) {
    this->setBtp(0, 0);
}

/* 00000B6C-00000C08       .text play_btp_anm__11daNpc_Kf1_cFv */
void daNpc_Kf1_c::play_btp_anm() {
        /* if (this->field_0x7f5 != 0) goto L_ac0; */
        /* if (cLib_calcTimer<s>__FPs((this + 1778), arg1, arg2, arg3, arg4, arg5, arg6, arg7) != 0) goto L_b04; */
        /* L_ac0:; */
        /* field_0x6f0 = (this->field_0x6f0 + 1); */
        /* if (this->field_0x6f0 < (this->field_0x6 & 16777215)) goto L_b04; */
        /* if (this->field_0x7f5 == 0) goto L_aec; */
        /* field_0x6f0 = (this->field_0x6 & 16777215); */
        /* goto L_b04; */
        /* L_aec:; */
        /* field_0x6f2 = cLib_getRndValue<i>__Fii(60, 90); */
        /* field_0x6f0 = 0; */
        /* L_b04:; */
        return cLib_getRndValue<i>__Fii(60, 90);
}

/* 00000C08-00000CA4       .text setAnm_anm__11daNpc_Kf1_cFPQ211daNpc_Kf1_c9anm_prm_c */
void daNpc_Kf1_c::setAnm_anm(daNpc_Kf1_c::anm_prm_c*) {
        /* if (/ * blt * / 1) goto L_ba0; */
        /* if ((this->field_0x7f6 & 255) != 0) goto L_b5c; */
        /* goto L_ba0; */
        /* L_b5c:; */
        dNpc_setAnmIDRes(this->field_0x330, this->field_0xc, bckResID(), -1, (this + 1748));
        /* field_0x79c = 0; */
        /* field_0x79d = 0; */
        /* field_0x76c = 0; */
        /* L_ba0:; */
        return C_@4197;
}

/* 00000CA4-00000D14       .text setAnm_NUM__11daNpc_Kf1_cFii */
void daNpc_Kf1_c::setAnm_NUM(int, int) {
    if (int != 0) {
        /* init_texPttrnAnm(this->field_0x1, 1, arg3, arg4, arg5, arg6, arg7); */
    }
    return setAnm_anm((((char*)&a_anm_prm_tbl$4467 + 0) + (int << 4)), (int << 4));
}

/* 00000D14-00000D80       .text setAnm__11daNpc_Kf1_cFv */
void daNpc_Kf1_c::setAnm() {
    /* init_texPttrnAnm(this->field_0x1, 1, arg3, arg4, arg5, arg6, arg7); */
    return setAnm_anm((((char*)&a_anm_prm_tbl$4474 + 0) + ((this->field_0x7f8 & 255) << 4)), ((this->field_0x7f8 & 255) << 4));
}

/* 00000D80-00000D84       .text chngAnmTag__11daNpc_Kf1_cFv */
void daNpc_Kf1_c::chngAnmTag() {
}

/* 00000D84-00000D88       .text ctrlAnmTag__11daNpc_Kf1_cFv */
void daNpc_Kf1_c::ctrlAnmTag() {
}

/* 00000D88-00000DEC       .text chngAnmAtr__11daNpc_Kf1_cFUc */
void daNpc_Kf1_c::chngAnmAtr(unsigned char) {
        /* if (this->field_0x6a4 == 7214) goto L_cb8; */
        /* goto L_ccc; */
        /* L_cb8:; */
        /* L_ccc:; */
        /* if ((char & 16777215) == this->field_0x7f3) goto L_cf0; */
        /* if ((char & 16777215) <= 11) goto L_ce8; */
        /* goto L_cf0; */
        /* L_ce8:; */
        /* field_0x7f3 = char; */
        /* L_cf0:; */
        return setAnm_ATR();
}

/* 00000DEC-00000E60       .text ctrlAnmAtr__11daNpc_Kf1_cFv */
void daNpc_Kf1_c::ctrlAnmAtr() {
        /* if (this->field_0x7f3 == 8) goto L_d60; */
        /* if (/ * bge * / 1) goto L_d30; */
        /* if (this->field_0x7f3 >= 7) goto L_d3c; */
        /* goto L_d60; */
        /* L_d30:; */
        /* if (this->field_0x7f3 == 10) goto L_d60; */
        /* if (/ * bge * / 1) goto L_d60; */
        /* L_d3c:; */
        /* if (this->field_0x79c == 0) goto L_d60; */
        setAnm_NUM(0, 1);
        /* field_0x7f3 = 0; */
        /* L_d60:; */
        return setAnm_NUM(0, 1);
}

/* 00000E60-00000EC4       .text setAnm_ATR__11daNpc_Kf1_cFv */
void daNpc_Kf1_c::setAnm_ATR() {
    /* init_texPttrnAnm(this->field_0x1, 1, arg3, arg4, arg5, arg6, arg7); */
    return setAnm_anm((((char*)&a_anm_prm_tbl$4529 + 0) + (this->field_0x7f3 << 4)), (this->field_0x7f3 << 4));
}

/* 00000EC4-00000F80       .text anmAtr__11daNpc_Kf1_cFUs */
void daNpc_Kf1_c::anmAtr(unsigned short) {
        /* if ((short & 65535) == 14) goto L_e68; */
        /* if (/ * bge * / 1) goto L_e70; */
        /* if ((short & 65535) == 6) goto L_e08; */
        /* goto L_e70; */
        /* L_e08:; */
        /* if (this->field_0x7fe != 0) goto L_e30; */
        /* chngAnmAtr(this->field_0x5bcf); */
        /* field_0x7fe = (this->field_0x7fe + 1); */
        /* L_e30:; */
        /* if (this->field_0x5bd0 == 255) goto L_e70; */
        /* if (this->field_0x5bd0 == this->field_0x7f4) goto L_e70; */
        /* field_0x5bd0 = 255; */
        chngAnmTag();
        /* goto L_e70; */
        /* L_e68:; */
        /* field_0x7fe = 0; */
        /* L_e70:; */
        ctrlAnmAtr();
        return ctrlAnmTag();
}

/* 00000F80-000010F4       .text next_msgStatus__11daNpc_Kf1_cFPUl */
void daNpc_Kf1_c::next_msgStatus(unsigned long*) {
        /* if (/ * bgt * / 1) goto L_ff0; */
        /* if (this->field_0xfa == 1) goto L_ef8; */
        /* if (/ * bge * / 1) goto L_ff4; */
        /* if (this->field_0xfa >= 0) goto L_eec; */
        /* goto L_ff4; */
        /* L_eec:; */
        base = 7204;
        /* goto L_ff4; */
        /* L_ef8:; */
        base = 7205;
        /* goto L_ff4; */
        /* if (this->field_0xfa == 1) goto L_f30; */
        /* if (/ * bge * / 1) goto L_ff4; */
        /* if (this->field_0xfa >= 0) goto L_f24; */
        /* goto L_ff4; */
        /* L_f24:; */
        base = 7210;
        /* goto L_ff4; */
        /* L_f30:; */
        base = 7209;
        /* goto L_ff4; */
        ((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->onEventBit(2818);
        /* goto L_ff4; */
        /* field_0x7a0 = 1; */
        /* goto L_ff4; */
        base = 7202;
        /* goto L_ff4; */
        base = 7220;
        /* goto L_ff4; */
        base = 7203;
        /* goto L_ff4; */
        base = 7208;
        /* goto L_ff4; */
        base = 7211;
        /* goto L_ff4; */
        base = 7217;
        /* goto L_ff4; */
        base = 7214;
        /* goto L_ff4; */
        /* base = (((this->field_0x7ee * 10) - this->field_0x7f0) + 7216); */
        /* goto L_ff4; */
        base = 7223;
        /* goto L_ff4; */
        /* L_ff0:; */
        /* L_ff4:; */
        return 16;
}

/* 000010F4-000011DC       .text getMsg_KF1_0__11daNpc_Kf1_cFv */
void daNpc_Kf1_c::getMsg_KF1_0() {
        /* if (this->field_0x7a1 == 0) goto L_1030; */
        return 7224;
        /* L_1030:; */
        /* if (((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->isEventBit(2562) == 0) goto L_1074; */
        /* if (((dSv_player_collect_c*)(((char*)&g_dComIfG_gameInfo + 180)))->isSymbol(0) != 0) goto L_1074; */
        return 7227;
        /* L_1074:; */
        /* if (((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->isEventBit(2818) == 0) goto L_10d4; */
        ((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->getEventReg();
        /* if (dKy_daynight_check() == 1) goto L_10c4; */
        /* if (((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->isEventBit(10112) == 0) goto L_10c4; */
        /* if (((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->getEventReg() == 0) goto L_10cc; */
        /* L_10c4:; */
        return 7206;
        /* L_10cc:; */
        return 7207;
        /* L_10d4:; */
        return 7201;
}

/* 000011DC-00001218       .text getMsg__11daNpc_Kf1_cFv */
void daNpc_Kf1_c::getMsg() {
    }
    return getMsg_KF1_0();


/* 00001218-000012A4       .text eventOrder__11daNpc_Kf1_cFv */
void daNpc_Kf1_c::eventOrder() {
        /* if ((this->field_0x7f7 & 255) == 1) goto L_1150; */
        /* if ((this->field_0x7f7 & 255) != 2) goto L_1170; */
        /* L_1150:; */
        /* if (this->field_0x7f7 != 1) goto L_11a8; */
        fopAcM_orderSpeakEvent(this);
        /* goto L_11a8; */
        /* L_1170:; */
        /* if (/ * blt * / 1) goto L_11a8; */
        /* field_0x786 = 0; */
        /* L_11a8:; */
        return fopAcM_orderOtherEventId(fopAcM_orderSpeakEvent(this), this->field_0x780, 255);
}

/* 000012A4-00001380       .text checkOrder__11daNpc_Kf1_cFv */
void daNpc_Kf1_c::checkOrder() {
        /* if (this->field_0xf8 != 2) goto L_1250; */
        /* if (((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->startCheck(this->field_0x780) == 0) goto L_1280; */
        /* if ((this->field_0x7f7 & 255) < 3) goto L_1280; */
        /* if (this->field_0x786 == 0) goto L_1224; */
        /* if (/ * blt * / 1) goto L_1238; */
        /* goto L_1238; */
        /* L_1224:; */
        /* L_1238:; */
        /* field_0x7f7 = 0; */
        /* field_0x7f3 = 255; */
        /* field_0x7f4 = 255; */
        /* goto L_1280; */
        /* L_1250:; */
        /* if (255 != 1) goto L_1280; */
        /* if ((this->field_0x7f7 & 255) == 1) goto L_1270; */
        /* if ((this->field_0x7f7 & 255) != 2) goto L_1280; */
        /* L_1270:; */
        /* field_0x7f7 = 0; */
        /* field_0x7ac = 1; */
        /* L_1280:; */
        /* return this->field_0x5b38; */
}

/* 00001380-00001418       .text chk_talk__11daNpc_Kf1_cFv */
void daNpc_Kf1_c::chk_talk() {
        /* if (this->field_0x52b8 == 1) goto L_12d0; */
        /* if (this->field_0x52b8 == 2) goto L_12d0; */
        /* if (this->field_0x52b8 != 3) goto L_12d4; */
        /* L_12d0:; */
        /* L_12d4:; */
        /* if (1 == 0) goto L_130c; */
        /* if (((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->ChkPresentEnd() == 0) goto L_1304; */
        return 1;
        /* L_1304:; */
        return 0;
        /* L_130c:; */
        /* field_0x79e = 255; */
        return 1;
}

/* 00001418-0000146C       .text searchByID__11daNpc_Kf1_cFUiPi */
void daNpc_Kf1_c::searchByID(fpc_ProcID, int*) {
    base = 0;
    if (fopAcM_SearchByID(fpc_ProcID) == 0) {
        base = 1;
    }
}

/* 0000146C-0000156C       .text srch_Tsubo__11daNpc_Kf1_cFv */
void daNpc_Kf1_c::srch_Tsubo() {
        /* if (this->field_0x7fd == 1) goto L_13b0; */
        return 0;
        /* L_13b0:; */
        /* field_0x700 = -1; */
        base = 0;
        /* fpcEx_Search(((char*)&searchActor_Tsubo__FPvPv + 0), this, 0, arg3, arg4, arg5, arg6, arg7); */
        /* if (base < 8) goto L_1464; */
        /* field_0x7ec = 0; */
        /* if (l_check_inf == 0) goto L_1434; */
        /* goto L_1438; */
        /* L_1434:; */
        /* L_1438:; */
        /* field_0x7ec = (this->field_0x7ec + 1); */
        /* field_0x7fd = (this->field_0x7fd + 1); */
        /* L_1464:; */
        return 1;
}

/* 0000156C-000017F4       .text create_rupee__11daNpc_Kf1_cF4cXyzi */
void daNpc_Kf1_c::create_rupee(cXyz, int) {
        /* _savegpr_22(this, cXyz, int, arg3, arg4, arg5, arg6, arg7); */
        __ct();
        /* goto L_16b8; */
        /* L_152c:; */
        /* cM_rndF(this->field_0x48); */
        fopAcM_createItemForKP2(cM_rndFX(cM_rndFX()), 4, (this->field_0x20a & 255), 0, 0, 1);
        /* if (/ * bne * / 1) goto L_162c; */
        ((JUTAssertion*)(((JUTAssertion*)(fopAcM_createItemForKP2(cM_rndFX(cM_rndFX()), 4, (this->field_0x20a & 255), 0, 0, 1)))->getSDevice()))->showAssert(((char*)&@stringBase0 + 28), 1042, ((char*)&@stringBase0 + 60));
        OSPanic(((char*)&@stringBase0 + 28), 1042, ((char*)&@stringBase0 + 55));
        /* L_162c:; */
        /* if (this->field_0x20a == 0) goto L_16ac; */
        scale = 0;
        /* field_0x218 = 0; */
        /* field_0x21c = 0; */
        /* if (/ * beq * / 1) goto L_16a0; */
        /* goto L_16a4; */
        /* L_16a0:; */
        /* L_16a4:; */
        /* L_16ac:; */
        /* L_16b8:; */
        /* if ((0 + 1) < 0) goto L_152c; */
        return _restgpr_22(-1);
}

/* 000017F4-00001A0C       .text ready_kutaniCamera__11daNpc_Kf1_cFii */
void daNpc_Kf1_c::ready_kutaniCamera(int, int) {
        /* if (((daNpc_Kf1_c*)(_savegpr_28(this, int, int, arg3, arg4, arg5, arg6, arg7)))->searchByID(this->field_0x7e8) == 0) goto L_1754; */
        /* if (/ * bne * / 1) goto L_1754; */
        /* fopAcM_delete(((daNpc_Kf1_c*)(_savegpr_28(this, int, int, arg3, arg4, arg5, arg6, arg7)))->searchByID(this->field_0x7e8)); */
        /* L_1754:; */
        /* if (/ * beq * / 1) goto L_1908; */
        __ct();
        /* ((daNpc_Kf1_c*)(_savegpr_28(this, int, int, arg3, arg4, arg5, arg6, arg7)))->searchByID(this->field_0x7dc); */
        /* if (/ * beq * / 1) goto L_17b4; */
        /* if (/ * bne * / 1) goto L_17b4; */
        /* L_17b4:; */
        /* if (1 != 0) goto L_17f4; */
        ((JUTAssertion*)(((JUTAssertion*)(1))->getSDevice()))->showAssert(((char*)&@stringBase0 + 28), 1074, ((char*)&@stringBase0 + 75));
        OSPanic(((char*)&@stringBase0 + 28), 1074, ((char*)&@stringBase0 + 55));
        /* L_17f4:; */
        /* field_0xd0 = ((dEvt_control_c*)(((char*)&g_dComIfG_gameInfo + 20952)))->getPId(); */
        fopAcM_createItemForKP2();
        /* if (/ * bne * / 1) goto L_18a8; */
        ((JUTAssertion*)(((JUTAssertion*)(fopAcM_createItemForKP2()))->getSDevice()))->showAssert(((char*)&@stringBase0 + 28), 1086, ((char*)&@stringBase0 + 102));
        OSPanic(((char*)&@stringBase0 + 28), 1086, ((char*)&@stringBase0 + 55));
        /* L_18a8:; */
        scale = 0;
        /* field_0x218 = 0; */
        /* field_0x21c = 0; */
        /* if ((C_@4196 + 0) == 0) goto L_1900; */
        /* goto L_1904; */
        /* L_1900:; */
        /* L_1904:; */
        /* field_0x7e8 = -1; */
        /* L_1908:; */
        return _restgpr_28(OSPanic(((char*)&@stringBase0 + 28), 1086, ((char*)&@stringBase0 + 55)));
}

/* 00001A0C-00001BD0       .text lookBack__11daNpc_Kf1_cFv */
void daNpc_Kf1_c::lookBack() {
        /* _savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* if ((this->field_0x7fa & 255) == 3) goto L_1a28; */
        /* if (/ * bge * / 1) goto L_19b4; */
        /* if ((this->field_0x7fa & 255) == 1) goto L_19c0; */
        /* if (/ * bge * / 1) goto L_1a08; */
        /* goto L_1a8c; */
        /* L_19b4:; */
        /* if ((this->field_0x7fa & 255) >= 5) goto L_1a8c; */
        /* goto L_1a30; */
        /* L_19c0:; */
        dNpc_playerEyePos();
        /* field_0x73c = 0; */
        /* field_0x740 = 0; */
        /* field_0x744 = 0; */
        /* goto L_1a8c; */
        /* L_1a08:; */
        /* goto L_1a8c; */
        /* L_1a28:; */
        /* goto L_1a8c; */
        /* L_1a30:; */
        /* if (((daNpc_Kf1_c*)(dNpc_playerEyePos()))->searchByID(this->field_0x704) == 0) goto L_1a8c; */
        /* if (/ * bne * / 1) goto L_1a8c; */
        /* field_0x73c = 0; */
        /* field_0x740 = 0; */
        /* field_0x744 = 0; */
        /* field_0x740 = 0; */
        /* L_1a8c:; */
        /* return _restgpr_28(((dNpc_JntCtrl_c*)((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 656)))->lookAtTarget_2((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 518))); */
}

/* 00001BD0-00001C50       .text chkAttention__11daNpc_Kf1_cFv */
void daNpc_Kf1_c::chkAttention() {
    if (((dAttention_c*)(((char*)&g_dComIfG_gameInfo + 22536)))->LockonTruth() == 0) {
    }
    return ((this - ((dAttention_c*)(((char*)&g_dComIfG_gameInfo + 22536)))->ActionTarget(0)) >> 5);
}

/* 00001C50-00001CA8       .text setAttention__11daNpc_Kf1_cFb */
void daNpc_Kf1_c::setAttention(bool) {
    /* field_0x274 = 0; */
    /* field_0x278 = (this->field_0x1fc + this->field_0x20); */
    /* field_0x27c = 0; */
    if (this->field_0x77c == 0) {
    }
    eyePos = 0;
    /* field_0x264 = 0; */
    /* field_0x268 = 0; */
    return this;
}

/* 00001CA8-00001D30       .text decideType__11daNpc_Kf1_cFi */
void daNpc_Kf1_c::decideType(int) {
    if (this->field_0x7fb != 0) {
        return 1;
    }
    /* field_0x7fb = 1; */
    /* field_0x7fc = 0; */
    /* strcpy((this + 1748), ((char*)&@stringBase0 + 115), arg2, arg3, arg4, arg5, arg6, arg7); */
    if ((this->field_0x7fb & 255) != -1) {
        /* if ((this->field_0x7fc & 255) != -1) goto L_1c30; */
    }
    /* L_1c30:; */
    return 1;
}

/* 00001D30-00001E04       .text cut_init_ANGRY_START__11daNpc_Kf1_cFi */
void daNpc_Kf1_c::cut_init_ANGRY_START(int) {
    /* if (((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMySubstanceP(int, ((char*)&@stringBase0 + 118), 1, arg4) != 0) { */
        /* current = 0; */
        /* field_0x1fc = 0; */
        /* field_0x200 = 0; */
        /* base = 0; */
        /* field_0x4 = 0; */
        /* field_0x8 = 0; */
    /* field_0x73c = 0; */
    /* field_0x740 = 0; */
    /* field_0x744 = 0; */
    /* field_0x7fa = 2; */
    /* field_0x206 = cLib_targetAngleY((this + 504), (this + 1852)); */
    speedF = 0;
    return setAnm_NUM(0, 1);
}

/* 00001E04-00001E0C       .text cut_move_ANGRY_START__11daNpc_Kf1_cFv */
int daNpc_Kf1_c::cut_move_ANGRY_START() {
    return 1;
}

/* 00001E0C-00001E5C       .text cut_init_BENSYOU_START__11daNpc_Kf1_cFi */
void daNpc_Kf1_c::cut_init_BENSYOU_START(int) {
    cut_init_ANGRY_START(int);
    return ((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->setGoal();
}

/* 00001E5C-00001E64       .text cut_move_BENSYOU_START__11daNpc_Kf1_cFv */
int daNpc_Kf1_c::cut_move_BENSYOU_START() {
    return 1;
}

/* 00001E64-00001EB4       .text cut_init_TSUBO_CNT__11daNpc_Kf1_cFi */
void daNpc_Kf1_c::cut_init_TSUBO_CNT(int) {
    /* field_0x7ee = (chk_tsubo() - this->field_0x7ec); */
    /* field_0x294 = 0; */
    /* field_0x296 = 0; */
    /* field_0x290 = 0; */
    /* field_0x292 = 0; */
    /* field_0x7fa = 0; */
    return chk_tsubo();
}

/* 00001EB4-00001EBC       .text cut_move_TSUBO_CNT__11daNpc_Kf1_cFv */
int daNpc_Kf1_c::cut_move_TSUBO_CNT() {
    return 1;
}

/* 00001EBC-00001EE8       .text cut_init_BENSYOU__11daNpc_Kf1_cFi */
void daNpc_Kf1_c::cut_init_BENSYOU(int) {
    /* field_0x5b54 = (this->field_0x5b54 + (-(this->field_0x7ee * 10))); */
    return this;
}

/* 00001EE8-00001EF0       .text cut_move_BENSYOU__11daNpc_Kf1_cFv */
int daNpc_Kf1_c::cut_move_BENSYOU() {
    return 1;
}

/* 00001EF0-00001FE4       .text cut_init_GET_OUT__11daNpc_Kf1_cFi */
void daNpc_Kf1_c::cut_init_GET_OUT(int) {
    /* ((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMySubstanceP(int, ((char*)&@stringBase0 + 122), 3, arg4); */
    /* field_0x78c = 0; */
    /* if (((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMySubstanceP(int, ((char*)&@stringBase0 + 122), 3, arg4) != 0) { */
    /* field_0x306 = 0; */
    /* field_0x304 = 3; */
    /* field_0x30c = 0; */
    if (this->field_0x7f0 >= (this->field_0x7ee * 10)) {
        cLib_targetAngleY((this->field_0x5b38 + 504));
        /* field_0x314 = 3; */
    } else {
        /* field_0x30c = 1; */
        /* field_0x314 = 9; */
    }
    /* return this->field_0x5b38; */
}

/* 00001FE4-00002044       .text cut_move_GET_OUT__11daNpc_Kf1_cFv */
void daNpc_Kf1_c::cut_move_GET_OUT() {
    /* if (cLib_calcTimer<s>__FPs((this + 1932), arg1, arg2, arg3, arg4, arg5, arg6, arg7) != 0) { */
        /* dComIfGp_setNextStage(((char*)&@stringBase0 + 128), 3, 11, -1, 0, 1, 0); */
    return 0;
}

/* 00002044-0000205C       .text cut_init_DSP_RUPEE_CNT__11daNpc_Kf1_cFi */
void daNpc_Kf1_c::cut_init_DSP_RUPEE_CNT(int) {
    return ((char*)&g_dComIfG_gameInfo + 0);
}

/* 0000205C-00002064       .text cut_move_DSP_RUPEE_CNT__11daNpc_Kf1_cFv */
int daNpc_Kf1_c::cut_move_DSP_RUPEE_CNT() {
    return 1;
}

/* 00002064-000020AC       .text cut_init_PLYER_TRN__11daNpc_Kf1_cFi */
void daNpc_Kf1_c::cut_init_PLYER_TRN(int) {
    /* field_0x306 = cLib_targetAngleY((this->field_0x5b38 + 504), (this + 504)); */
    return cLib_targetAngleY((this->field_0x5b38 + 504), (this + 504));
}

/* 000020AC-000020B4       .text cut_move_PLYER_TRN__11daNpc_Kf1_cFv */
int daNpc_Kf1_c::cut_move_PLYER_TRN() {
    return 1;
}

/* 000020B4-000020B8       .text cut_init_RUPEE_CNT_END__11daNpc_Kf1_cFi */
void daNpc_Kf1_c::cut_init_RUPEE_CNT_END(int) {
}

/* 000020B8-000020EC       .text cut_move_RUPEE_CNT_END__11daNpc_Kf1_cFv */
void daNpc_Kf1_c::cut_move_RUPEE_CNT_END() {
    if (dComIfGp_getPlayerCameraID(0) == *(s16*)((char*)&g_dComIfG_gameInfo + 23482)) {
        *(unsigned short*)(this + 21166) |= 0x80;
    }
}

/* 000020EC-00002168       .text cut_init_START_AGE__11daNpc_Kf1_cFi */
void daNpc_Kf1_c::cut_init_START_AGE(int) {
    /* field_0x73c = 0; */
    /* field_0x740 = 0; */
    /* field_0x744 = 0; */
    /* field_0x20e = cLib_targetAngleY((this + 504), (this + 1852)); */
    /* field_0x7a8 = 1; */
    /* field_0x7fa = 3; */
    /* field_0x29a = 1; */
    return setAnm_NUM(0, 1);
}

/* 00002168-00002178       .text cut_move_START_AGE__11daNpc_Kf1_cFv */
void daNpc_Kf1_c::cut_move_START_AGE() {
    /* return *(u8*)(this+666) == 0; */
}

/* 00002178-00002284       .text cut_init_PLYER_MOV__11daNpc_Kf1_cFi */
void daNpc_Kf1_c::cut_init_PLYER_MOV(int) {
        /* if (abs(((this->field_0x206 - cLib_targetAngleY((_savegpr_29(this, int, arg2, arg3, arg4, arg5, arg6, arg7) + 504), (this->field_0x5b38 + 504))) & 65535)) <= 8192) goto L_20f4; */
        ((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->setGoal((this->field_0x5b38 + 504));
        /* goto L_2180; */
        /* L_20f4:; */
        /* if (((this->field_0x206 - cLib_targetAngleY((_savegpr_29(this, int, arg2, arg3, arg4, arg5, arg6, arg7) + 504), (this->field_0x5b38 + 504))) & 65535) != 0) goto L_2118; */
        /* L_2118:; */
        PSMTXTrans(((char*)&now__14mDoMtx_stack_c + 0));
        mDoMtx_YrotM(((char*)&now__14mDoMtx_stack_c + 0), ((this->field_0x206 + (10240 & 65535)) & 65535));
        PSMTXMultVec(((char*)&now__14mDoMtx_stack_c + 0));
        /* L_2180:; */
        return _restgpr_29(((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->setGoal());
}

/* 00002284-0000228C       .text cut_move_PLYER_MOV__11daNpc_Kf1_cFv */
int daNpc_Kf1_c::cut_move_PLYER_MOV() {
    return 1;
}

/* 0000228C-000023E8       .text cut_init_RUPEE_SET__11daNpc_Kf1_cFi */
void daNpc_Kf1_c::cut_init_RUPEE_SET(int) {
        /* _savegpr_22(this, int, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* if (this->field_0x7ec != 8) goto L_22cc; */
        /* L_2208:; */
        cM_rndF(fpcSch_JudgeByID__FPvPv);
        /* if (this->field_0xa0 != 0) goto L_2208; */
        fopAcIt_Judge(((char*)&fpcSch_JudgeByID__FPvPv + 0));
        /* if (/ * bne * / 1) goto L_2288; */
        ((JUTAssertion*)(((JUTAssertion*)(fopAcIt_Judge(((char*)&fpcSch_JudgeByID__FPvPv + 0))))->getSDevice()))->showAssert(((char*)&@stringBase0 + 28), 1475, ((char*)&@stringBase0 + 132));
        OSPanic(((char*)&@stringBase0 + 28), 1475, ((char*)&@stringBase0 + 55));
        /* L_2288:; */
        /* field_0xd0 = ((dEvt_control_c*)(((char*)&g_dComIfG_gameInfo + 20952)))->getPId(); */
        /* if ((0 + 1) < 3) goto L_2208; */
        /* L_22cc:; */
        /* return _restgpr_22(((daNpc_Kf1_c*)(_savegpr_22(this, int, arg2, arg3, arg4, arg5, arg6, arg7)))->setAnm_NUM(8, 1)); */
}

/* 000023E8-0000260C       .text cut_move_RUPEE_SET__11daNpc_Kf1_cFv */
void daNpc_Kf1_c::cut_move_RUPEE_SET() {
        /* _savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* if (this->field_0x79c != 0) goto L_247c; */
        /* if (((J3DFrameCtrl*)((this->field_0x330 + 88)))->checkPass() == 0) goto L_2400; */
        ((JAIZelBasic*)(base))->seStart(27113, 0, 0, dComIfGp_getReverb((this->field_0x20a & 255)), 0);
        PSMTXTrans(((char*)&now__14mDoMtx_stack_c + 0));
        /* mDoMtx_YrotM(((char*)&now__14mDoMtx_stack_c + 0), this->field_0x206); */
        PSMTXMultVec(((char*)&now__14mDoMtx_stack_c + 0));
        /* ((daNpc_Kf1_c*)(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->create_rupee(); */
        /* goto L_2474; */
        /* L_2400:; */
        /* if (this->field_0xac >= this->field_0x68) goto L_2474; */
        /* L_241c:; */
        /* if (((daNpc_Kf1_c*)(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->searchByID() == 0) goto L_245c; */
        /* if (/ * bne * / 1) goto L_245c; */
        eyePos = 0;
        /* field_0x264 = 0; */
        /* field_0x268 = 0; */
        /* L_245c:; */
        /* if ((0 + 1) < 3) goto L_241c; */
        /* field_0x77c = 0; */
        /* L_2474:; */
        return 0;
        /* L_247c:; */
        /* L_2484:; */
        /* if (((daNpc_Kf1_c*)(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->searchByID() == 0) goto L_24ac; */
        /* fopAcM_delete(((daNpc_Kf1_c*)(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->searchByID()); */
        /* goto L_24bc; */
        /* L_24ac:; */
        /* if (/ * beq * / 1) goto L_24bc; */
        /* L_24bc:; */
        /* if ((0 + 1) < 3) goto L_2484; */
        /* if ((((0 + 1) + 1) + 1) != (0 + 1)) goto L_2504; */
        /* ((daNpc_Kf1_c*)(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->ready_kutaniCamera(0, 1); */
        /* field_0x77c = 1; */
        /* ((daNpc_Kf1_c*)(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->setAnm_NUM(0, 1); */
        return 1;
        /* L_2504:; */
        return _restgpr_28(0);
}

/* 0000260C-000026B4       .text cut_init_TSUBO_ATN__11daNpc_Kf1_cFi */
void daNpc_Kf1_c::cut_init_TSUBO_ATN(int) {
    /* _savegpr_28(this, int, arg2, arg3, arg4, arg5, arg6, arg7); */
    ((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMySubstanceP();
    /* field_0x78c = 0; */
    if (((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMySubstanceP() != 0) {
    }
    /* field_0x78e = 0; */
    if (((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMySubstanceP() != 0) {
    }
    return _restgpr_28(((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMySubstanceP());
}

/* 000026B4-00002794       .text cut_move_TSUBO_ATN__11daNpc_Kf1_cFv */
void daNpc_Kf1_c::cut_move_TSUBO_ATN() {
        /* if (cLib_calcTimer<s>__FPs((this + 1932), arg1, arg2, arg3, arg4, arg5, arg6, arg7) != 0) goto L_263c; */
        /* if (this->field_0x78e != 0) goto L_2634; */
        /* if (this->field_0x78e > 3) goto L_2634; */
        /* if (/ * beq * / 1) goto L_2624; */
        /* if (/ * bge * / 1) goto L_2624; */
        /* if (this->field_0x78e >= 0) goto L_2614; */
        /* goto L_2624; */
        /* L_2614:; */
        ready_kutaniCamera(this->field_0x78e, 1);
        /* goto L_2634; */
        /* L_2624:; */
        ready_kutaniCamera(0, 0);
        /* L_2634:; */
        return 1;
        /* L_263c:; */
        /* if (this->field_0x78c != 20) goto L_2690; */
        ((JAIZelBasic*)(base))->seStart(27009, 0, 0, dComIfGp_getReverb((this->field_0x20a & 255)), 0);
        /* L_2690:; */
        return 0;
}

/* 00002794-000028F4       .text cut_init_TLK_MSG__11daNpc_Kf1_cFi */
void daNpc_Kf1_c::cut_init_TLK_MSG(int) {
        /* _savegpr_27(this, int, arg2, arg3, arg4, arg5, arg6, arg7); */
        ((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMySubstanceP();
        /* field_0x7f3 = 255; */
        /* field_0x7f4 = 255; */
        /* field_0x7fe = 0; */
        /* field_0x6a4 = 0; */
        /* field_0x6a8 = -1; */
        /* if (((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMySubstanceP() == 0) goto L_2738; */
        /* L_2738:; */
        /* if (((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMySubstanceP() == 0) goto L_27e8; */
        /* if (this->field_0x6a4 >= 7217) goto L_276c; */
        /* if (this->field_0x6a4 == 7214) goto L_27e8; */
        /* if (/ * bge * / 1) goto L_2790; */
        /* if (this->field_0x6a4 >= 7213) goto L_2778; */
        /* goto L_27e8; */
        /* L_276c:; */
        /* if (this->field_0x6a4 == 7225) goto L_27b8; */
        /* goto L_27e8; */
        /* L_2778:; */
        /* field_0x5bac = (this->field_0x7ee * 10); */
        /* goto L_27e8; */
        /* L_2790:; */
        /* field_0x6a4 = 0; */
        /* goto L_27e8; */
        /* L_27b8:; */
        ((dVibration_c*)(((char*)&g_dComIfG_gameInfo + 22944)))->StartShock(5, -33);
        /* L_27e8:; */
        /* field_0x6ac = -1; */
        return _restgpr_27(((dVibration_c*)(((char*)&g_dComIfG_gameInfo + 22944)))->StartShock(5, -33));
}

/* 000028F4-00002954       .text cut_init_CONTNUE_TLK__11daNpc_Kf1_cFi */
void daNpc_Kf1_c::cut_init_CONTNUE_TLK(int) {
    /* ((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMySubstanceP(int, ((char*)&@stringBase0 + 164), 3, arg4); */
    /* field_0x6a8 = -1; */
    /* if (((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMySubstanceP(int, ((char*)&@stringBase0 + 164), 3, arg4) != 0) { */
    /* return ((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMySubstanceP(int, ((char*)&@stringBase0 + 164), 3, arg4); */

/* 00002954-000029D8       .text cut_move_TLK_MSG__11daNpc_Kf1_cFv */
void daNpc_Kf1_c::cut_move_TLK_MSG() {
    if ((talk(0) & 65535) == 18) {
        /* field_0x7f3 = 255; */
        /* field_0x7f4 = 255; */
        /* field_0x7fe = 0; */
        return 1;
    }
    if (0 != 2) {
        /* if (0 == 6) goto L_28d4; */
    }
    /* goto L_28d8; */
    /* L_28d4:; */
    /* L_28d8:; */
    return 0;
}

/* 000029D8-00002C60       .text privateCut__11daNpc_Kf1_cFi */
void daNpc_Kf1_c::privateCut(int) {
        /* _savegpr_29(this, int, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* if (/ * beq * / 1) goto L_2b5c; */
        /* field_0x7f2 = ((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMyActIdx(); */
        /* if ((this->field_0x7f2 & 255) != -1) goto L_295c; */
        ((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->cutEnd();
        /* goto L_2b5c; */
        /* L_295c:; */
        /* if (((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getIsAddvance() == 0) goto L_2a74; */
        /* if ((this->field_0x7f2 & 255) > 13) goto L_2a74; */
        /* ((daNpc_Kf1_c*)(_savegpr_29(this, int, arg2, arg3, arg4, arg5, arg6, arg7)))->cut_init_ANGRY_START(); */
        /* goto L_2a74; */
        /* ((daNpc_Kf1_c*)(_savegpr_29(this, int, arg2, arg3, arg4, arg5, arg6, arg7)))->cut_init_BENSYOU_START(); */
        /* goto L_2a74; */
        /* ((daNpc_Kf1_c*)(_savegpr_29(this, int, arg2, arg3, arg4, arg5, arg6, arg7)))->cut_init_TSUBO_CNT(); */
        /* goto L_2a74; */
        /* ((daNpc_Kf1_c*)(_savegpr_29(this, int, arg2, arg3, arg4, arg5, arg6, arg7)))->cut_init_BENSYOU(); */
        /* goto L_2a74; */
        /* ((daNpc_Kf1_c*)(_savegpr_29(this, int, arg2, arg3, arg4, arg5, arg6, arg7)))->cut_init_GET_OUT(); */
        /* goto L_2a74; */
        /* ((daNpc_Kf1_c*)(_savegpr_29(this, int, arg2, arg3, arg4, arg5, arg6, arg7)))->cut_init_DSP_RUPEE_CNT(); */
        /* goto L_2a74; */
        /* ((daNpc_Kf1_c*)(_savegpr_29(this, int, arg2, arg3, arg4, arg5, arg6, arg7)))->cut_init_PLYER_TRN(); */
        /* goto L_2a74; */
        /* ((daNpc_Kf1_c*)(_savegpr_29(this, int, arg2, arg3, arg4, arg5, arg6, arg7)))->cut_init_RUPEE_CNT_END(); */
        /* goto L_2a74; */
        /* ((daNpc_Kf1_c*)(_savegpr_29(this, int, arg2, arg3, arg4, arg5, arg6, arg7)))->cut_init_START_AGE(); */
        /* goto L_2a74; */
        /* ((daNpc_Kf1_c*)(_savegpr_29(this, int, arg2, arg3, arg4, arg5, arg6, arg7)))->cut_init_PLYER_MOV(); */
        /* goto L_2a74; */
        /* ((daNpc_Kf1_c*)(_savegpr_29(this, int, arg2, arg3, arg4, arg5, arg6, arg7)))->cut_init_RUPEE_SET(); */
        /* goto L_2a74; */
        /* ((daNpc_Kf1_c*)(_savegpr_29(this, int, arg2, arg3, arg4, arg5, arg6, arg7)))->cut_init_TSUBO_ATN(); */
        /* goto L_2a74; */
        /* ((daNpc_Kf1_c*)(_savegpr_29(this, int, arg2, arg3, arg4, arg5, arg6, arg7)))->cut_init_TLK_MSG(); */
        /* goto L_2a74; */
        /* ((daNpc_Kf1_c*)(_savegpr_29(this, int, arg2, arg3, arg4, arg5, arg6, arg7)))->cut_init_CONTNUE_TLK(); */
        /* L_2a74:; */
        /* if ((this->field_0x7f2 & 255) > 13) goto L_2b44; */
        /* ((daNpc_Kf1_c*)(_savegpr_29(this, int, arg2, arg3, arg4, arg5, arg6, arg7)))->cut_move_ANGRY_START(); */
        /* goto L_2b48; */
        /* ((daNpc_Kf1_c*)(_savegpr_29(this, int, arg2, arg3, arg4, arg5, arg6, arg7)))->cut_move_BENSYOU_START(); */
        /* goto L_2b48; */
        /* ((daNpc_Kf1_c*)(_savegpr_29(this, int, arg2, arg3, arg4, arg5, arg6, arg7)))->cut_move_TSUBO_CNT(); */
        /* goto L_2b48; */
        /* ((daNpc_Kf1_c*)(_savegpr_29(this, int, arg2, arg3, arg4, arg5, arg6, arg7)))->cut_move_BENSYOU(); */
        /* goto L_2b48; */
        /* ((daNpc_Kf1_c*)(_savegpr_29(this, int, arg2, arg3, arg4, arg5, arg6, arg7)))->cut_move_GET_OUT(); */
        /* goto L_2b48; */
        /* ((daNpc_Kf1_c*)(_savegpr_29(this, int, arg2, arg3, arg4, arg5, arg6, arg7)))->cut_move_DSP_RUPEE_CNT(); */
        /* goto L_2b48; */
        /* ((daNpc_Kf1_c*)(_savegpr_29(this, int, arg2, arg3, arg4, arg5, arg6, arg7)))->cut_move_PLYER_TRN(); */
        /* goto L_2b48; */
        /* ((daNpc_Kf1_c*)(_savegpr_29(this, int, arg2, arg3, arg4, arg5, arg6, arg7)))->cut_move_RUPEE_CNT_END(); */
        /* goto L_2b48; */
        /* ((daNpc_Kf1_c*)(_savegpr_29(this, int, arg2, arg3, arg4, arg5, arg6, arg7)))->cut_move_START_AGE(); */
        /* goto L_2b48; */
        /* ((daNpc_Kf1_c*)(_savegpr_29(this, int, arg2, arg3, arg4, arg5, arg6, arg7)))->cut_move_PLYER_MOV(); */
        /* goto L_2b48; */
        /* ((daNpc_Kf1_c*)(_savegpr_29(this, int, arg2, arg3, arg4, arg5, arg6, arg7)))->cut_move_RUPEE_SET(); */
        /* goto L_2b48; */
        /* ((daNpc_Kf1_c*)(_savegpr_29(this, int, arg2, arg3, arg4, arg5, arg6, arg7)))->cut_move_TSUBO_ATN(); */
        /* goto L_2b48; */
        /* ((daNpc_Kf1_c*)(_savegpr_29(this, int, arg2, arg3, arg4, arg5, arg6, arg7)))->cut_move_TLK_MSG(); */
        /* goto L_2b48; */
        /* ((daNpc_Kf1_c*)(_savegpr_29(this, int, arg2, arg3, arg4, arg5, arg6, arg7)))->cut_move_TLK_MSG(); */
        /* goto L_2b48; */
        /* L_2b44:; */
        /* L_2b48:; */
        /* if (1 == 0) goto L_2b5c; */
        /* L_2b5c:; */
        return _restgpr_29(((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->cutEnd());
}

/* 00002C60-00002C84       .text endEvent__11daNpc_Kf1_cFv */
void daNpc_Kf1_c::endEvent() {
    /* field_0x7f3 = 255; */
    /* field_0x7f4 = 255; */
    return this;
}

/* 00002C84-00002CBC       .text isEventEntry__11daNpc_Kf1_cFv */
void daNpc_Kf1_c::isEventEntry() {
    /* return ((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMyStaffId(this->field_0x2c4, 0, 0, arg4); */
}

/* 00002CBC-00002E14       .text event_proc__11daNpc_Kf1_cFi */
void daNpc_Kf1_c::event_proc(int) {
        /* if (((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->endCheck(this->field_0x780) == 0) goto L_2cf4; */
        /* if (this->field_0x786 == 1) goto L_2c58; */
        /* if (/ * bge * / 1) goto L_2cd8; */
        /* if (this->field_0x786 >= 0) goto L_2c34; */
        /* goto L_2cd8; */
        /* goto L_2cd8; */
        /* L_2c34:; */
        ((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->onEventBit(10112);
        /* field_0x7ec = chk_tsubo(); */
        /* goto L_2cd8; */
        /* L_2c58:; */
        ((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->getEventReg();
        ((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->setEventReg();
        /* field_0x7a8 = 0; */
        setStt(1);
        setAnm_NUM(0, 1);
        /* field_0x792 = cLib_getRndValue<i>__Fii(30, 60); */
        /* field_0x790 = cLib_getRndValue<i>__Fii(15, 30); */
        /* field_0x7a1 = 1; */
        /* L_2cd8:; */
        /* field_0x792 = cLib_getRndValue<i>__Fii(30, 60); */
        endEvent();
        /* goto L_2d10; */
        /* L_2cf4:; */
        /* if (((dNpc_EventCut_c*)((this + 708)))->cutProc() != 0) goto L_2d10; */
        /* L_2d10:; */
        return privateCut(((char*)&g_dComIfG_gameInfo + 1572));
}

/* 00002E14-00002EC0       .text set_action__11daNpc_Kf1_cFM11daNpc_Kf1_cFPCvPvPv_iPv */
void daNpc_Kf1_c::set_action(int (daNpc_Kf1_c::*)(void*), void*) {
        /* if (__ptmf_cmpr((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1780)) == 0) goto L_2db8; */
        /* if (__ptmf_test((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1780)) == 0) goto L_2d84; */
        /* field_0x7fd = 9; */
        /* __ptmf_scall(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* L_2d84:; */
        /* field_0x7fd = 0; */
        /* __ptmf_scall(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* L_2db8:; */
        return _restgpr_29(1);
}

/* 00002EC0-00002F88       .text setStt__11daNpc_Kf1_cFSc */
void daNpc_Kf1_c::setStt(signed char) {
        /* field_0x7f8 = char; */
        /* if ((this->field_0x7f8 & 255) == 2) goto L_2e48; */
        /* if (/ * bge * / 1) goto L_2e14; */
        /* if ((this->field_0x7f8 & 255) == 0) goto L_2e80; */
        /* if (/ * bge * / 1) goto L_2e20; */
        /* goto L_2e80; */
        /* L_2e14:; */
        /* if ((this->field_0x7f8 & 255) >= 4) goto L_2e80; */
        /* goto L_2e68; */
        /* L_2e20:; */
        /* field_0x7f7 = 0; */
        /* field_0x794 = cLib_getRndValue<i>__Fii(60, 90, this->field_0x7f8, arg3, arg4, arg5, arg6, arg7); */
        speedF = 0;
        /* goto L_2e80; */
        /* L_2e48:; */
        /* field_0x7f7 = 0; */
        /* field_0x7f3 = 255; */
        /* field_0x7f4 = 255; */
        /* field_0x7fe = 0; */
        /* goto L_2e80; */
        /* L_2e68:; */
        /* field_0x7f7 = 0; */
        /* field_0x794 = cLib_getRndValue<i>__Fii(90, 90); */
        /* L_2e80:; */
        return setAnm();
}

/* 00002F88-00003030       .text set_pthPoint__11daNpc_Kf1_cFUc */
void daNpc_Kf1_c::set_pthPoint(unsigned char) {
    if (m708 != 0) {
        /* field_0x70d = char; */
        getPoint((this + 1800));
        current = 0;
        /* field_0x1fc = 0; */
        /* field_0x200 = 0; */
        /* if (((dNpc_PathRun_c*)((this + 1800)))->nextIdx() == 0) goto L_2f30; */
        getPoint((this + 1800));
        /* field_0x206 = cLib_targetAngleY((this + 504)); */
    }
    /* L_2f30:; */
    return cLib_targetAngleY((this + 504));
}

/* 00003030-000030A8       .text chk_tsubo__11daNpc_Kf1_cFv */
void daNpc_Kf1_c::chk_tsubo() {
    /* L_2f68:; */
    /* ((daNpc_Kf1_c*)(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->searchByID(); */
    if (/* bne */ 1) {
    }
    /* if ((0 + 1) >= 8) goto L_2f68; */
    return _restgpr_28(((0 + 1) & 65535));
}

/* 000030A8-0000317C       .text orderTsuboEvent__11daNpc_Kf1_cFv */
void daNpc_Kf1_c::orderTsuboEvent() {
    if (this->field_0x7ac != 0) {
        return 0;
    }
    if (((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->isEventBit(10112) == 0) {
        /* if (this->field_0x7ec > (chk_tsubo() & 65535)) goto L_3078; */
        /* field_0x7f7 = 3; */
        return 1;
    }
    if (this->field_0x79f != 255) {
        /* if (((dSv_info_c*)(((char*)&g_dComIfG_gameInfo + 0)))->isSwitch(this->field_0x79f, (this->field_0x20a & 255)) != 0) goto L_3078; */
        /* if (this->field_0x7ec > (chk_tsubo() & 65535)) goto L_3078; */
        /* field_0x7f7 = 5; */
        return 1;
    }
    /* L_3078:; */
    return 0;
}

/* 0000317C-0000327C       .text wait_1__11daNpc_Kf1_cFv */
void daNpc_Kf1_c::wait_1() {
        /* if (this->field_0x7ac == 0) goto L_30e4; */
        /* if (chk_talk() == 0) goto L_30dc; */
        setStt(2);
        /* field_0x7fa = 1; */
        /* field_0x7ad = 0; */
        /* field_0x29a = 1; */
        /* L_30dc:; */
        return 1;
        /* L_30e4:; */
        /* if ((this->field_0x7f7 & 255) >= 3) goto L_30fc; */
        /* field_0x7f7 = 2; */
        /* L_30fc:; */
        /* field_0x7ad = 1; */
        /* if (this->field_0x7f6 != 9) goto L_3118; */
        /* field_0x792 = 0; */
        /* L_3118:; */
        /* if (cLib_calcTimer<s>__FPs((this + 1938)) != 0) goto L_3170; */
        /* if (this->field_0x7f6 == 9) goto L_314c; */
        setAnm_NUM(9, 1);
        /* field_0x794 = 0; */
        /* L_314c:; */
        /* if (cLib_calcTimer<s>__FPs((this + 1940)) != 0) goto L_3170; */
        setStt(3);
        return 1;
        /* L_3170:; */
        /* field_0x7fa = 0; */
        return 1;
}

/* 0000327C-000034C4       .text walk_1__11daNpc_Kf1_cFv */
void daNpc_Kf1_c::walk_1() {
        /* if (m708 != 0) goto L_31c0; */
        return 1;
        /* L_31c0:; */
        /* if (this->field_0x5 == 0) goto L_3214; */
        /* if (((dNpc_PathRun_c*)((this + 1800)))->chkPointPass() == 0) goto L_321c; */
        ((dNpc_PathRun_c*)((this + 1800)))->nextIdxAuto();
        /* goto L_321c; */
        /* L_3214:; */
        return 1;
        /* L_321c:; */
        getPoint((this + 1800));
        cLib_addCalcAngleS((this + 518), cLib_targetAngleY((this + 504)), this->field_0x26, this->field_0x28, 128);
        /* if (cLib_calcTimer<s>__FPs((this + 1940)) == 0) goto L_3298; */
        /* if (this->field_0x7ac == 0) goto L_32a0; */
        /* L_3298:; */
        /* L_32a0:; */
        cLib_chaseF((this + 596), ((char*)&l_HIO + 0));
        /* if ((speedF * this->field_0x2c) >= base) goto L_32e0; */
        /* goto L_32e4; */
        /* L_32e0:; */
        /* L_32e4:; */
        /* field_0x64 = (speedF * this->field_0x2c); */
        /* if (/ * bne * / 1) goto L_3390; */
        /* if (/ * bne * / 1) goto L_3390; */
        /* if (this->field_0x7ac == 0) goto L_336c; */
        /* if (chk_talk() == 0) goto L_3364; */
        setStt(1);
        setAnm_NUM(9, 1);
        /* field_0x7fa = 1; */
        /* field_0x7ad = 0; */
        /* field_0x29a = 1; */
        /* L_3364:; */
        return 1;
        /* L_336c:; */
        setStt(1);
        setAnm_NUM(9, 1);
        return 1;
        /* L_3390:; */
        /* if ((this->field_0x7f7 & 255) >= 3) goto L_33a8; */
        /* field_0x7f7 = 2; */
        /* L_33a8:; */
        /* field_0x7fa = 0; */
        /* field_0x7ad = 1; */
        return 1;
}

/* 000034C4-000035CC       .text talk_1__11daNpc_Kf1_cFv */
void daNpc_Kf1_c::talk_1() {
        talk(1);
        /* if (this->field_0x6b0 != 0) goto L_3410; */
        return 1;
        /* L_3410:; */
        /* if (this->field_0xf8 == 6) goto L_34b0; */
        /* if (/ * bge * / 1) goto L_342c; */
        /* if (this->field_0xf8 == 2) goto L_34b0; */
        /* goto L_34b0; */
        /* L_342c:; */
        /* if (this->field_0xf8 == 19) goto L_3438; */
        /* goto L_34b0; */
        /* L_3438:; */
        /* if (this->field_0x6a4 == 7211) goto L_3448; */
        /* goto L_344c; */
        /* L_3448:; */
        /* L_344c:; */
        /* field_0x79e = 255; */
        /* field_0x7ac = 0; */
        /* setStt(this->field_0x7f9); */
        setAnm_NUM(0, 1);
        /* field_0x792 = cLib_getRndValue<i>__Fii(30, 60); */
        /* field_0x790 = cLib_getRndValue<i>__Fii(15, 30); */
        /* if (1 == 0) goto L_34a8; */
        /* field_0x7f7 = 4; */
        /* L_34a8:; */
        endEvent();
        /* L_34b0:; */
        return (((4 - (this->field_0x7f6 & 255)) + -1) & 16777215);
}

/* 000035CC-000036B4       .text wait_action1__11daNpc_Kf1_cFPv */
void daNpc_Kf1_c::wait_action1(void*) {
        /* if ((this->field_0x7fd & 255) >= 4) goto L_3514; */
        /* if ((this->field_0x7fd & 255) == 0) goto L_3520; */
        /* if (/ * bge * / 1) goto L_3538; */
        /* goto L_35b0; */
        /* L_3514:; */
        /* if ((this->field_0x7fd & 255) == 9) goto L_35b0; */
        /* goto L_35b0; */
        /* L_3520:; */
        /* setStt(3, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* field_0x7fd = (this->field_0x7fd + 1); */
        /* goto L_35b0; */
        /* L_3538:; */
        /* field_0x7ab = ((daNpc_Kf1_c*)(this->field_0x7fd))->chkAttention(); */
        /* if ((this->field_0x7f8 & 255) == 2) goto L_357c; */
        /* if (/ * bge * / 1) goto L_3560; */
        /* if ((this->field_0x7f8 & 255) >= 1) goto L_356c; */
        /* goto L_3598; */
        /* L_3560:; */
        /* if ((this->field_0x7f8 & 255) >= 4) goto L_3598; */
        /* goto L_358c; */
        /* L_356c:; */
        /* field_0x77c = wait_1(); */
        /* goto L_3598; */
        /* L_357c:; */
        /* field_0x77c = talk_1(); */
        /* goto L_3598; */
        /* L_358c:; */
        /* field_0x77c = walk_1(); */
        /* L_3598:; */
        /* if ((this->field_0x7fd & 255) <= 1) goto L_35b0; */
        orderTsuboEvent();
        /* L_35b0:; */
        return 1;
}

/* 000036B4-000037F4       .text demo__11daNpc_Kf1_cFv */
void daNpc_Kf1_c::demo() {
        /* if (demoActorID != 0) goto L_3600; */
        /* if (this->field_0x7ae == 0) goto L_36f0; */
        /* field_0x7ae = 0; */
        /* goto L_36f0; */
        /* L_3600:; */
        /* if (this->field_0x7ae != 0) goto L_362c; */
        /* field_0x7ae = 1; */
        /* field_0x7a8 = 0; */
        /* field_0x292 = 0; */
        /* field_0x290 = 0; */
        /* field_0x296 = 0; */
        /* field_0x294 = 0; */
        /* L_362c:; */
        ((dDemo_object_c*)((this->field_0x5abc + 32)))->getActor(demoActorID);
        /* if (this->field_0x6e4 == 0) goto L_3674; */
        /* field_0x6f0 = (this->field_0x6f0 + 1); */
        /* if (this->field_0x6f0 < (this->field_0x6 & 16777215)) goto L_3674; */
        /* field_0x6f0 = (this->field_0x6 & 16777215); */
        /* L_3674:; */
        ((dDemo_actor_c*)(((dDemo_object_c*)((this->field_0x5abc + 32)))->getActor(demoActorID)))->getP_BtpData((this + 1748), (this->field_0x6 & 16777215));
        /* if (/ * beq * / 1) goto L_36cc; */
        /* ((mDoExt_btpAnm*)((this + 1756)))->init(this->field_0x4); */
        /* field_0x7f5 = 2; */
        /* field_0x6f0 = 0; */
        /* L_36cc:; */
        dDemo_setDemoData(this, 106, this->field_0x330, (this + 1748), 0, 0, 0, 0);
        /* L_36f0:; */
        /* return this->field_0x7ae; */
}

/* 000037F4-00003884       .text shadowDraw__11daNpc_Kf1_cFv */
void daNpc_Kf1_c::shadowDraw() {
    /* field_0x6d8 = dComIfGd_setShadow(this->field_0x6d8, 1, this->field_0x50); */
    /* return dComIfGd_setShadow(this->field_0x6d8, 1, this->field_0x50); */
}

/* 00003884-0000397C       .text _draw__11daNpc_Kf1_cFv */
BOOL daNpc_Kf1_c::_draw() {
    /* _savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
    if (this->field_0x7a7 == 0) {
        /* if (this->field_0x7a9 != 0) goto L_37dc; */
    }
    return 1;
    /* L_37dc:; */
    /* ((dScnKy_env_light_c*)(((char*)&g_env_light + 0)))->settingTevStruct(0, (_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 504), (_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 268)); */
    /* ((dScnKy_env_light_c*)(((char*)&g_env_light + 0)))->setLightTevColorType(this->field_0x50, (_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 268)); */
    /* ((mDoExt_btpAnm*)((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1756)))->entry(this->field_0x4, this->field_0x6f0); */
    /* ((mDoExt_McaMorf*)(this->field_0x330))->entryDL(); */
    /* ((J3DMaterialTable*)((this->field_0x4 + 88)))->removeTexNoAnimator(this->field_0x6e4); */
    if (this->field_0x6d0 != 0) {
        /* ((dScnKy_env_light_c*)(((char*)&g_env_light + 0)))->setLightTevColorType(this->field_0x6d0, (_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 268)); */
        /* mDoExt_modelEntryDL(this->field_0x6d0); */
    }
    /* ((daNpc_Kf1_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->shadowDraw(); */
    /* dSnap_RegistFig(89, _savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7), C_@4434); */
    return _restgpr_29(1);
}

/* 0000397C-00003BC4       .text _execute__11daNpc_Kf1_cFv */
BOOL daNpc_Kf1_c::_execute() {
        /* if (this->field_0x7aa != 0) goto L_38ec; */
        m710 = 0;
        /* field_0x714 = 0; */
        /* field_0x718 = 0; */
        /* field_0x7aa = 1; */
        /* L_38ec:; */
        /* ((dNpc_JntCtrl_c*)((this + 656)))->setParam(this->field_0x14, this->field_0x16, this->field_0x18, this->field_0x1a, this->field_0xc, this->field_0xe, this->field_0x10); */
        /* if (this->field_0x7a7 == 0) goto L_3948; */
        /* if (demoActorID != 0) goto L_3948; */
        return 1;
        /* L_3948:; */
        srch_Tsubo();
        checkOrder();
        /* if (demo() != 0) goto L_3a14; */
        /* if (this->field_0x529a == 0) goto L_399c; */
        /* if (this->field_0xf8 == 1) goto L_399c; */
        /* L_399c:; */
        /* if (isEventEntry() >= 0) goto L_39b0; */
        /* if (this->field_0x7a5 == 0) goto L_39bc; */
        /* L_39b0:; */
        event_proc(isEventEntry());
        /* goto L_39d0; */
        /* L_39bc:; */
        __ptmf_scall(this, 0);
        /* L_39d0:; */
        lookBack();
        fopAcM_posMoveF(this, (this + 1336));
        ((dBgS_Acch*)((this + 820)))->CrrPos(((char*)&g_dComIfG_gameInfo + 4768));
        play_animation();
        /* goto L_3a1c; */
        /* L_3a14:; */
        /* field_0x7a7 = 0; */
        /* L_3a1c:; */
        eventOrder();
        /* if (this->field_0x7a8 != 0) goto L_3a60; */
        /* L_3a60:; */
        /* field_0x1b5 = ((dBgS*)(((char*)&g_dComIfG_gameInfo + 4768)))->GetRoomId((this + 1052)); */
        /* field_0x1b6 = ((dBgS*)(((char*)&g_dComIfG_gameInfo + 4768)))->GetPolyColor((this + 1052)); */
        setMtx(0);
        /* if (this->field_0x7ae != 0) goto L_3abc; */
        setCollision(C_@5739);
        /* L_3abc:; */
        return 1;
}

/* 00003BC4-00003C18       .text _delete__11daNpc_Kf1_cFv */
BOOL daNpc_Kf1_c::_delete() {
    /* dComIfG_resDelete((this + 1732), (this + 1748), arg2); */
    if (heap != 0) {
        /* if (this->field_0x330 != 0) goto L_3b14; */
        /* ((mDoExt_McaMorf*)(this->field_0x330))->stopZelAnime(); */
    }
    /* L_3b14:; */
    return 1;
}

/* 00003C18-00003E64       .text _create__11daNpc_Kf1_cFv */
cPhs_State daNpc_Kf1_c::_create() {
        /* _savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* if (/ * bne * / 1) goto L_3c90; */
        /* if (/ * beq * / 1) goto L_3c84; */
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
        /* field_0x6dc = 0; */
        /* field_0x6e0 = 0; */
        /* field_0x6dc = 0; */
        /* field_0x6e8 = 0; */
        /* L_3c84:; */
        /* L_3c90:; */
        /* if (((daNpc_Kf1_c*)(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->decideType((this->field_0xb0 & 16777215)) != 0) goto L_3cb0; */
        return 5;
        /* L_3cb0:; */
        /* field_0x7a6 = ((4 - dComIfG_resLoad((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1732), (_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1748))) >> 5); */
        /* if (this->field_0x7a6 != 0) goto L_3ce0; */
        /* goto L_3d60; */
        /* L_3ce0:; */
        /* if (fopAcM_entrySolidHeap(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7), ((char*)&CheckCreateHeap__FP10fopAc_ac_c + 0), ((char*)&a_siz_tbl$5755 + 0)) != 0) goto L_3d18; */
        return 5;
        /* L_3d18:; */
        cullMtx = (this->field_0x50 + 36);
        /* fopAcM_setCullSizeBox(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* if (((daNpc_Kf1_c*)(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->createInit() == 0) goto L_3d60; */
        /* L_3d60:; */
        /* return _restgpr_28(dComIfG_resLoad((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1732), (_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1748))); */
}

/* 00004130-0000442C       .text bodyCreateHeap__11daNpc_Kf1_cFv */
void daNpc_Kf1_c::bodyCreateHeap() {
    /* ((dRes_control_c*)((this + 1748)))->getIDRes(1, ((char*)&g_dComIfG_gameInfo + -16460), 64, arg4, arg5); */
    if (/* bne */ 1) {
        /* ((JUTAssertion*)(((JUTAssertion*)(((dRes_control_c*)((this + 1748)))->getIDRes(1, ((char*)&g_dComIfG_gameInfo + -16460), 64, arg4, arg5)))->getSDevice()))->showAssert(((char*)&@stringBase0 + 28), 2431, ((char*)&@stringBase0 + 321)); */
        OSPanic(((char*)&@stringBase0 + 28), 2431, ((char*)&@stringBase0 + 55));
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
    /* field_0x6cc = ((JUTNameTab*)(this->field_0x54))->getIndex(((char*)&@stringBase0 + 336)); */
    if (this->field_0x6cc != 0) {
        /* ((JUTAssertion*)(((JUTAssertion*)(((JUTNameTab*)(this->field_0x54))->getIndex(((char*)&@stringBase0 + 336))))->getSDevice()))->showAssert(((char*)&@stringBase0 + 28), 2451, ((char*)&@stringBase0 + 341)); */
        OSPanic(((char*)&@stringBase0 + 28), 2451, ((char*)&@stringBase0 + 55));
    }
    /* field_0x6cd = ((JUTNameTab*)(this->field_0x54))->getIndex(((char*)&@stringBase0 + 360)); */
    if (this->field_0x6cd != 0) {
        /* ((JUTAssertion*)(((JUTAssertion*)(((JUTNameTab*)(this->field_0x54))->getIndex(((char*)&@stringBase0 + 360))))->getSDevice()))->showAssert(((char*)&@stringBase0 + 28), 2453, ((char*)&@stringBase0 + 369)); */
        OSPanic(((char*)&@stringBase0 + 28), 2453, ((char*)&@stringBase0 + 55));
    }
    /* field_0x6ce = ((JUTNameTab*)(this->field_0x54))->getIndex(((char*)&@stringBase0 + 390)); */
    if (this->field_0x6ce != 0) {
        /* ((JUTAssertion*)(((JUTAssertion*)(((JUTNameTab*)(this->field_0x54))->getIndex(((char*)&@stringBase0 + 390))))->getSDevice()))->showAssert(((char*)&@stringBase0 + 28), 2455, ((char*)&@stringBase0 + 395)); */
        OSPanic(((char*)&@stringBase0 + 28), 2455, ((char*)&@stringBase0 + 55));
    }
    /* field_0x8 = 0; */
    /* field_0x8 = 0; */
    /* field_0x8 = 0; */
    /* field_0x14 = this; */
    return 1;
}

/* 0000442C-000044EC       .text itemCreateHeap__11daNpc_Kf1_cFv */
void daNpc_Kf1_c::itemCreateHeap() {
    /* ((dRes_control_c*)((this + 1748)))->getIDRes(0, ((char*)&g_dComIfG_gameInfo + -16460), 64, arg4, arg5); */
    if (/* bne */ 1) {
        /* ((JUTAssertion*)(((JUTAssertion*)(((dRes_control_c*)((this + 1748)))->getIDRes(0, ((char*)&g_dComIfG_gameInfo + -16460), 64, arg4, arg5)))->getSDevice()))->showAssert(((char*)&@stringBase0 + 28), 2476, ((char*)&@stringBase0 + 321)); */
    }
    /* field_0x6d0 = mDoExt_J3DModel(OSPanic(((char*)&@stringBase0 + 28), 2476, ((char*)&@stringBase0 + 55))); */
    if (this->field_0x6d0 == 0) {
        return 0;
    }
    return 1;
}

/* 000044EC-00004590       .text CreateHeap__11daNpc_Kf1_cFv */
void daNpc_Kf1_c::CreateHeap() {
    if (bodyCreateHeap() == 0) {
        return 0;
    }
    if (itemCreateHeap() == 0) {
        /* field_0x330 = 0; */
        return 0;
    }
    ((dBgS_AcchCir*)((this + 1272)))->SetWall(C_@5738);
    ((dBgS_Acch*)((this + 820)))->Set((this + 504), (this + 484), this, 1, (this + 1272), (this + 544), 0);
    return 1;
}

/* 00004590-000045B0       .text daNpc_Kf1_Create__FP10fopAc_ac_c */
static cPhs_State daNpc_Kf1_Create(fopAc_ac_c* i_this) {
    return ((daNpc_Kf1_c*)i_this)->_create();

/* 000045B0-000045D0       .text daNpc_Kf1_Delete__FP11daNpc_Kf1_c */
static BOOL daNpc_Kf1_Delete(daNpc_Kf1_c* i_this) {
    return ((daNpc_Kf1_c*)i_this)->_delete();

/* 000045D0-000045F0       .text daNpc_Kf1_Execute__FP11daNpc_Kf1_c */
static BOOL daNpc_Kf1_Execute(daNpc_Kf1_c* i_this) {
    return ((daNpc_Kf1_c*)i_this)->_execute();

/* 000045F0-00004610       .text daNpc_Kf1_Draw__FP11daNpc_Kf1_c */
static BOOL daNpc_Kf1_Draw(daNpc_Kf1_c* i_this) {
    return ((daNpc_Kf1_c*)i_this)->_draw();

/* 00004610-00004618       .text daNpc_Kf1_IsDelete__FP11daNpc_Kf1_c */
static BOOL daNpc_Kf1_IsDelete(daNpc_Kf1_c*) {
    return 1;

static actor_method_class l_daNpc_Kf1_Method = {
    (process_method_func)daNpc_Kf1_Create,
    (process_method_func)daNpc_Kf1_Delete,
    (process_method_func)daNpc_Kf1_Execute,
    (process_method_func)daNpc_Kf1_IsDelete,
    (process_method_func)daNpc_Kf1_Draw,
};

actor_process_profile_definition g_profile_NPC_KF1 = {
    /* Layer ID     */ fpcLy_CURRENT_e,
    /* List ID      */ 0x0007,
    /* List Prio    */ fpcPi_CURRENT_e,
    /* Proc Name    */ fpcNm_NPC_KF1_e,
    /* Proc SubMtd  */ &g_fpcLf_Method.base,
    /* Size         */ sizeof(daNpc_Kf1_c),
    /* Size Other   */ 0,
    /* Parameters   */ 0,
    /* Leaf SubMtd  */ &g_fopAc_Method.base,
    /* Draw Prio    */ fpcDwPi_NPC_KF1_e,
    /* Actor SubMtd */ &l_daNpc_Kf1_Method,
    /* Status       */ 0x08 | fopAcStts_SHOWMAP_e | fopAcStts_NOCULLEXEC_e | fopAcStts_CULL_e | fopAcStts_UNK40000_e,
    /* Group        */ fopAc_ACTOR_e,
    /* Cull Type    */ fopAc_CULLBOX_CUSTOM_e,
};

/* 由 fix_decomp_braces.py 补齐：反编译产物末尾缺 7 个 } */
}}}}}}}
