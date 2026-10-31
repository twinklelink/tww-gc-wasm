/**
 * d_a_npc_bj1.cpp
 * NPC - Generic Koroks
 */

#include "d/dolzel_rel.h" // IWYU pragma: keep
#include "d/actor/d_a_npc_bj1.h"

/* 000000EC-00000108       .text __ct__20daNpc_Bj1_childHIO_cFv */
daNpc_Bj1_childHIO_c::daNpc_Bj1_childHIO_c() {
}

/* 00000150-0000020C       .text __ct__15daNpc_Bj1_HIO_cFv */
daNpc_Bj1_HIO_c::daNpc_Bj1_HIO_c() {
    /* _savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
    /* field_0x0 = 0; */
    /* field_0x0 = 0; */
    /* __construct_array((_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 12), ((char*)&__ct__20daNpc_Bj1_childHIO_cFv + 0), ((char*)&__dt__20daNpc_Bj1_childHIO_cFv + 0), 108, 9); */
    /* L_c8:; */
    /* memcpy((_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + (0 + 16)), (((char*)&a_prm_tbl$4171 + 0) + 0), 100); */
    /* if ((0 + 1) >= 9) goto L_c8; */
    /* field_0x4 = -1; */
    /* field_0x8 = -1; */
    /* return _restgpr_27(_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
}

/* 00000268-000002EC       .text searchActor_Jb__FPvPv */
void searchActor_Jb(void*, void*) {
    if (this->field_0x0 < 20) {
        /* if (fopAc_IsActor(arg0) != 0) goto L_1e8; */
        /* if (this->field_0x8 == 214) goto L_1e8; */
        /* if (this->field_0x2b8 != 0) goto L_1e8; */
        /* field_0x0 = (this->field_0x0 + 1); */
    }
    /* L_1e8:; */
    return 0;
}

/* 000002EC-00000338       .text nodeCallBack_Bj1__FP7J3DNodei */
static BOOL nodeCallBack_Bj1(J3DNode* i_node, int i_switch) {
    if (i_switch == 0) {
    if (j3dSys.getModel()->getUserArea() != NULL) {
    reinterpret_cast<daNpc_Bj1_c*>(j3dSys.getModel()->getUserArea())
    ->nodeBj1Control(i_node, j3dSys.getModel());
    }
    }
    return TRUE;
}

/* 00000338-000004C4       .text nodeBj1Control__11daNpc_Bj1_cFP7J3DNodeP8J3DModel */
void daNpc_Bj1_c::nodeBj1Control(J3DNode*, J3DModel*) {
    /* _savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
    if (this->field_0x490 != 0) {
        /* field_0x494 = 0; */
        /* field_0x4 = 0; */
        /* field_0x8 = 0; */
        /* __register_global_object(((C_@3569 + 0) + 1172), ((char*)&__dt__4cXyzFv + 0), ((C_@3569 + 0) + 1156)); */
        /* field_0x490 = 1; */
    }
    PSMTXCopy((this->field_0x8c + (this->field_0x18 * 48)), ((char*)&now__14mDoMtx_stack_c + 0));
    if (this->field_0x18 == (this->field_0x6cc & 255)) {
        /* mDoMtx_XrotM(((char*)&now__14mDoMtx_stack_c + 0), this->field_0x292); */
        /* ((mDoMtx_stack_c*)(mDoMtx_ZrotM(((char*)&now__14mDoMtx_stack_c + 0), ((-this->field_0x290) & 65535))))->scaleM(); */
        /* PSMTXMultVec(((char*)&now__14mDoMtx_stack_c + 0), (_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 2020), (_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1984)); */
    }
    if (this->field_0x18 == (this->field_0x6cd & 255)) {
        /* mDoMtx_XrotM(((char*)&now__14mDoMtx_stack_c + 0), this->field_0x296); */
        /* ((mDoMtx_stack_c*)(mDoMtx_ZrotM(((char*)&now__14mDoMtx_stack_c + 0), ((-this->field_0x294) & 65535))))->scaleM(); */
    }
    if (this->field_0x18 == (this->field_0x6cf & 255)) {
        /* PSMTXCopy(((char*)&now__14mDoMtx_stack_c + 0), (_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1796)); */
    }
    PSMTXCopy(((char*)&now__14mDoMtx_stack_c + 0), ((char*)&mCurrentMtx__6J3DSys + 0));
    return _restgpr_28(PSMTXCopy(((char*)&now__14mDoMtx_stack_c + 0), (this->field_0x8c + (this->field_0x18 * 48))));
}

/* 00000500-0000054C       .text nodeCallBack_Prp__FP7J3DNodei */
static BOOL nodeCallBack_Prp(J3DNode* i_node, int i_switch) {
    if (i_switch == 0) {
    if (j3dSys.getModel()->getUserArea() != NULL) {
    reinterpret_cast<daNpc_Bj1_c*>(j3dSys.getModel()->getUserArea())
    ->nodePrpControl(i_node, j3dSys.getModel());
    }
    }
    return TRUE;
}

/* 0000054C-00000664       .text nodePrpControl__11daNpc_Bj1_cFP7J3DNodeP8J3DModel */
void daNpc_Bj1_c::nodePrpControl(J3DNode*, J3DModel*) {
    /* _savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
    if (/* bne */ 1) {
        /* ((mDoMtx_stack_c*)(PSMTXCopy((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1796), ((char*)&now__14mDoMtx_stack_c + 0))))->transM(); */
        mDoMtx_XYZrotM(((char*)&now__14mDoMtx_stack_c + 0), -16384, -21845);
        PSMTXCopy(((char*)&now__14mDoMtx_stack_c + 0), ((char*)&mCurrentMtx__6J3DSys + 0));
        PSMTXCopy(((char*)&now__14mDoMtx_stack_c + 0));
    }
    if (/* bne */ 1) {
        /* mDoMtx_YrotS(((char*)&now__14mDoMtx_stack_c + 0), this->field_0x6f0); */
        PSMTXConcat();
        PSMTXCopy(((char*)&now__14mDoMtx_stack_c + 0), ((char*)&mCurrentMtx__6J3DSys + 0));
    }
    return _restgpr_28(PSMTXCopy(((char*)&now__14mDoMtx_stack_c + 0)));
}

/* 00000664-00000710       .text init_BJ4_0__11daNpc_Bj1_cFv */
void daNpc_Bj1_c::init_BJ4_0() {
    ((dSv_player_collect_c*)(((char*)&g_dComIfG_gameInfo + 180)))->isSymbol(2);
    if (/* beq */ 1) {
        ((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->isEventBit(6145);
        /* if (/ * beq * / 1) goto L_608; */
        set_action();
    }
}

/* 00000710-000007D4       .text init_BJ6_0__11daNpc_Bj1_cFv */
void daNpc_Bj1_c::init_BJ6_0() {
    ((dSv_player_collect_c*)(((char*)&g_dComIfG_gameInfo + 180)))->isSymbol(2);
    if (/* beq */ 1) {
        ((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->isEventBit(6145);
        /* if (/ * beq * / 1) goto L_6cc; */
        set_action();
    }
}

/* 000007D4-00000864       .text init_BJ7_0__11daNpc_Bj1_cFv */
void daNpc_Bj1_c::init_BJ7_0() {
    ((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->isEventBit(6145);
    if (/* beq */ 1) {
        setPrtcl_drugPot_1();
    }
    return set_action();
}

/* 00000864-00000910       .text init_BJX_0__11daNpc_Bj1_cFv */
void daNpc_Bj1_c::init_BJX_0() {
    ((dSv_player_collect_c*)(((char*)&g_dComIfG_gameInfo + 180)))->isSymbol(2);
    if (/* beq */ 1) {
        ((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->isEventBit(6145);
        /* if (/ * beq * / 1) goto L_808; */
        set_action();
    }
}

/* 00000910-00000998       .text init_BJX_1__11daNpc_Bj1_cFv */
void daNpc_Bj1_c::init_BJX_1() {
    ((dSv_player_collect_c*)(((char*)&g_dComIfG_gameInfo + 180)))->isSymbol(2);
    if (/* beq */ 1) {
    }
    return set_action();
}

/* 00000998-00000C90       .text createInit__11daNpc_Bj1_cFv */
void daNpc_Bj1_c::createInit() {
        /* _savegpr_25(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* L_8e8:; */
        ((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getEventIdx();
        /* if ((0 + 1) < 3) goto L_8e8; */
        /* field_0x280 = 10; */
        /* if ((this->field_0x8b4 & 255) > 8) goto L_988; */
        /* field_0x26d = 167; */
        /* field_0x26f = 171; */
        /* goto L_990; */
        /* field_0x26d = 171; */
        /* field_0x26f = 171; */
        /* goto L_990; */
        /* field_0x26d = 170; */
        /* field_0x26f = 170; */
        /* goto L_990; */
        /* field_0x26d = 90; */
        /* field_0x26f = 90; */
        /* goto L_990; */
        /* L_988:; */
        return 0;
        /* L_990:; */
        /* field_0x7f0 = 0; */
        /* field_0x7f4 = 0; */
        /* field_0x7f8 = 0; */
        /* field_0x7fc = 0; */
        /* field_0x800 = 0; */
        /* field_0x804 = 0; */
        /* field_0x7e4 = 0; */
        /* field_0x7e8 = 0; */
        /* field_0x7ec = 0; */
        gravity = 0;
        /* field_0x7cc = 0; */
        /* field_0x7d0 = 0; */
        /* field_0x7d4 = 0; */
        /* field_0x83f = ((C_@2100 + 0) + 1020); */
        /* if (((C_@2100 + 0) + 1020) == 255) goto L_a84; */
        /* ((dNpc_PathRun_c*)((_savegpr_25(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1844)))->setInf(((C_@2100 + 0) + 1020), this->field_0x20a, 1); */
        /* if (this->field_0x734 == 0) goto L_a7c; */
        /* goto L_a84; */
        /* L_a7c:; */
        return 0;
        /* L_a84:; */
        /* ((dNpc_EventCut_c*)((_savegpr_25(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1852)))->setActorInfo2(((C_@2100 + 0) + 1344), _savegpr_25(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* field_0x8af = 11; */
        /* if ((this->field_0x8b5 & 255) > 16) goto L_b10; */
        /* ((daNpc_Bj1_c*)(_savegpr_25(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->init_BJ4_0(); */
        /* goto L_b14; */
        /* ((daNpc_Bj1_c*)(_savegpr_25(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->init_BJ6_0(); */
        /* goto L_b14; */
        /* ((daNpc_Bj1_c*)(_savegpr_25(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->init_BJX_0(); */
        /* goto L_b14; */
        /* ((daNpc_Bj1_c*)(_savegpr_25(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->init_BJX_1(); */
        /* goto L_b14; */
        /* ((daNpc_Bj1_c*)(_savegpr_25(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->init_BJ7_0(); */
        /* goto L_b14; */
        /* L_b10:; */
        /* L_b14:; */
        /* if (0 == 0) goto L_b38; */
        /* goto L_b40; */
        /* L_b38:; */
        return 0;
        /* L_b40:; */
        /* ((dCcD_Stts*)((_savegpr_25(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1336)))->Init(255, 255, _savegpr_25(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* field_0x5b8 = (_savegpr_25(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1336); */
        /* ((dCcD_Cyl*)((_savegpr_25(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1396)))->Set(((char*)&dNpc_cyl_src + 0)); */
        /* ((mDoExt_McaMorf*)(this->field_0x330))->setMorf(C_@4250); */
        /* ((daNpc_Bj1_c*)(_savegpr_25(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->setMtx(1); */
        return _restgpr_25(1);
}

/* 00000C90-00000E00       .text setMtx_anmProc__11daNpc_Bj1_cFv */
void daNpc_Bj1_c::setMtx_anmProc() {
        /* if ((this->field_0x8af & 255) == 7) goto L_c80; */
        /* if (/ * bge * / 1) goto L_cfc; */
        /* if ((this->field_0x8af & 255) == 4) goto L_be4; */
        /* goto L_cfc; */
        /* L_be4:; */
        /* if (this->field_0x8a9 == 0) goto L_cfc; */
        /* if (this->field_0x224 >= this->field_0x4) goto L_c60; */
        /* if (this->field_0x68 >= this->field_0x18) goto L_cfc; */
        /* field_0x68 = ((this->field_0x18 - this->field_0x68) - this->field_0x68); */
        /* goto L_cfc; */
        /* L_c60:; */
        /* if (this->field_0x68 != this->field_0x18) goto L_cfc; */
        /* field_0x68 = 0; */
        /* goto L_cfc; */
        /* L_c80:; */
        /* if (this->field_0x83c == 0) goto L_cfc; */
        /* if (this->field_0x888 != 0) goto L_cfc; */
        /* if (cLib_calcTimer<s>__FPs((this + 2196), this->field_0x330, arg2, arg3, arg4, arg5, arg6, arg7) != 0) goto L_cfc; */
        ((JAIZelBasic*)(base))->seStart(27128, (this + 504), 0, dComIfGp_getReverb((this->field_0x20a & 255)), 0);
        setAnm_NUM(5);
        /* L_cfc:; */
        return setPrtcl_drugPot_2();
}

/* 00000E00-00001098       .text setMtx__11daNpc_Bj1_cFb */
void daNpc_Bj1_c::setMtx(bool) {
        /* _savegpr_29(this, bool, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* if (this->field_0x857 != 0) goto L_dfc; */
        /* if (/ * beq * / 1) goto L_d64; */
        /* ((dBgS*)(((char*)&g_dComIfG_gameInfo + 4768)))->GetMtrlSndId((_savegpr_29(this, bool, arg2, arg3, arg4, arg5, arg6, arg7) + 1052)); */
        /* L_d64:; */
        /* field_0x83c = ((mDoExt_McaMorf*)(this->field_0x330))->play((_savegpr_29(this, bool, arg2, arg3, arg4, arg5, arg6, arg7) + 608), ((dBgS*)(((char*)&g_dComIfG_gameInfo + 4768)))->GetMtrlSndId((_savegpr_29(this, bool, arg2, arg3, arg4, arg5, arg6, arg7) + 1052)), dComIfGp_getReverb((this->field_0x20a & 255))); */
        /* if (this->field_0x68 >= this->field_0x808) goto L_da4; */
        /* field_0x83c = 1; */
        /* L_da4:; */
        /* field_0x808 = 0; */
        /* ((daNpc_Bj1_c*)(_savegpr_29(this, bool, arg2, arg3, arg4, arg5, arg6, arg7)))->setMtx_anmProc(); */
        /* ((mDoExt_McaMorf*)(this->field_0x6e4))->play((_savegpr_29(this, bool, arg2, arg3, arg4, arg5, arg6, arg7) + 608), 0, 0); */
        /* if (this->field_0x84d == 0) goto L_de8; */
        /* ((daNpc_Bj1_c*)(_savegpr_29(this, bool, arg2, arg3, arg4, arg5, arg6, arg7)))->setPrtcl_peraProOpen(); */
        /* field_0x84d = 0; */
        /* L_de8:; */
        /* ((dBgS_Acch*)((_savegpr_29(this, bool, arg2, arg3, arg4, arg5, arg6, arg7) + 820)))->CrrPos(((char*)&g_dComIfG_gameInfo + 4768)); */
        /* L_dfc:; */
        /* field_0x1b5 = ((dBgS*)(((char*)&g_dComIfG_gameInfo + 4768)))->GetRoomId((_savegpr_29(this, bool, arg2, arg3, arg4, arg5, arg6, arg7) + 1052)); */
        /* field_0x1b6 = ((dBgS*)(((char*)&g_dComIfG_gameInfo + 4768)))->GetPolyColor((_savegpr_29(this, bool, arg2, arg3, arg4, arg5, arg6, arg7) + 1052)); */
        PSMTXTrans(((char*)&now__14mDoMtx_stack_c + 0));
        /* mDoMtx_YrotM(((char*)&now__14mDoMtx_stack_c + 0), this->field_0x206); */
        PSMTXCopy(((char*)&now__14mDoMtx_stack_c + 0), (this->field_0x50 + 36));
        /* ((mDoExt_McaMorf*)(this->field_0x330))->calc(); */
        /* ((mDoExt_McaMorf*)(this->field_0x6e4))->calc(); */
        /* if (this->field_0x6d4 == 0) goto L_ed4; */
        PSMTXCopy((this->field_0x8c + ((this->field_0x6ce & 255) * 48)), ((char*)&now__14mDoMtx_stack_c + 0));
        PSMTXCopy(((char*)&now__14mDoMtx_stack_c + 0), (this->field_0x6d4 + 36));
        /* L_ed4:; */
        /* if (this->field_0x6d8 == 0) goto L_f30; */
        PSMTXCopy((this->field_0x8c + ((this->field_0x6cf & 255) * 48)), ((char*)&now__14mDoMtx_stack_c + 0));
        PSMTXCopy(((char*)&now__14mDoMtx_stack_c + 0), (this->field_0x6d8 + 36));
        /* L_f30:; */
        PSMTXCopy((this->field_0x8c + ((this->field_0x6cc & 255) * 48)), ((char*)&now__14mDoMtx_stack_c + 0));
        PSMTXCopy(((char*)&now__14mDoMtx_stack_c + 0), (this->field_0x6d0 + 36));
        /* ((daNpc_Bj1_c*)(_savegpr_29(this, bool, arg2, arg3, arg4, arg5, arg6, arg7)))->flwPrtcl_danceLR(); */
        /* return _restgpr_29(((daNpc_Bj1_c*)(_savegpr_29(this, bool, arg2, arg3, arg4, arg5, arg6, arg7)))->setAttention()); */
}

/* 00001098-000010AC       .text anmNum_toResID__11daNpc_Bj1_cFi */
int daNpc_Bj1_c::anmNum_toResID(int anmNum) {
    static const int a_bck_resID_tbl[] = {
        10, 2, 7, 8, 3, 6, 0, 1, 11, 9, 42, 1127615329, 3248488448, 0, 1071644672, 0,
    };
    return a_bck_resID_tbl[anmNum];
}

/* 000010AC-00001188       .text setAnm_anm__11daNpc_Bj1_cFPQ211daNpc_Bj1_c9anm_prm_c */
void daNpc_Bj1_c::setAnm_anm(daNpc_Bj1_c::anm_prm_c*) {
    if ((this->field_0x8af & 255) == (base & 255)) {
        return 1;
    }
    dNpc_setAnmIDRes(this->field_0x330, this->field_0xc, ((daNpc_Bj1_c*)(1))->anmNum_toResID((this->field_0x8af & 255)), -1, ((char*)&@stringBase0 + 64));
    if (this->field_0x8af != 7) {
    } else {
        setPrtcl_danceLR();
        /* field_0x888 = 0; */
        /* field_0x894 = 30; */
        /* goto L_1068; */
    }
    delPrtcl_danceLR();
    /* L_1068:; */
    /* field_0x808 = 0; */
    /* field_0x83d = 0; */
    /* field_0x83c = 0; */
    return 1;
}

/* 00001188-000011B8       .text setAnm_NUM__11daNpc_Bj1_cFi */
void daNpc_Bj1_c::setAnm_NUM(int) {
    return setAnm_anm((((char*)&a_anm_prm_tbl$4635 + 0) + (int << 4)), (int << 4));
}

/* 000011B8-000011F4       .text setAnm__11daNpc_Bj1_cFv */
void daNpc_Bj1_c::setAnm() {
    setAnm_anm((((char*)&a_anm_prm_tbl$4640 + 0) + ((this->field_0x8b1 & 255) << 4)), ((this->field_0x8b1 & 255) << 4));
    return 1;
}

/* 000011F4-00001378       .text setAnm_prp__11daNpc_Bj1_cFSc */
void daNpc_Bj1_c::setAnm_prp(signed char) {
        /* if ((char & 255) == 2) goto L_11dc; */
        /* if (/ * bge * / 1) goto L_1274; */
        /* if ((char & 255) >= 1) goto L_1144; */
        /* goto L_1274; */
        /* L_1144:; */
        /* ((mDoExt_McaMorf*)(this->field_0x6e4))->setAnm(((dRes_control_c*)(((char*)&@stringBase0 + 64)))->getIDRes(40, ((char*)&g_dComIfG_gameInfo + -16460), 64, arg4, arg5), 0, 0); */
        ((JAIZelBasic*)(base))->seStart(22720, (this + 504), 0, dComIfGp_getReverb((this->field_0x20a & 255)), 0);
        /* field_0x84d = 1; */
        /* goto L_1274; */
        /* L_11dc:; */
        /* ((mDoExt_McaMorf*)(this->field_0x6e4))->setAnm(((dRes_control_c*)(((char*)&@stringBase0 + 64)))->getIDRes(40, ((char*)&g_dComIfG_gameInfo + -16460), 64), 2, 0); */
        /* field_0x68 = 0; */
        /* L_1274:; */
        return ((JAIZelBasic*)(base))->seStart(22721, (this + 504), 0, dComIfGp_getReverb((this->field_0x20a & 255)), 0);
}

/* 00001378-0000137C       .text chg_anmTag__11daNpc_Bj1_cFv */
void daNpc_Bj1_c::chg_anmTag() {
}

/* 0000137C-00001380       .text control_anmTag__11daNpc_Bj1_cFv */
void daNpc_Bj1_c::control_anmTag() {
}

/* 00001380-000013C0       .text chg_anmAtr__11daNpc_Bj1_cFUc */
void daNpc_Bj1_c::chg_anmAtr(unsigned char) {
        /* if ((char & 16777215) >= 11) goto L_12c4; */
        /* if ((char & 16777215) != this->field_0x8ad) goto L_12bc; */
        /* goto L_12c4; */
        /* L_12bc:; */
        /* field_0x8ad = char; */
        /* L_12c4:; */
        return setAnm_ATR();
}

/* 000013C0-0000143C       .text control_anmAtr__11daNpc_Bj1_cFv */
void daNpc_Bj1_c::control_anmAtr() {
        /* if (this->field_0x8ad >= 8) goto L_12f8; */
        /* if (this->field_0x8ad >= 6) goto L_1304; */
        /* goto L_1340; */
        /* L_12f8:; */
        /* if (this->field_0x8ad == 10) goto L_1324; */
        /* goto L_1340; */
        /* L_1304:; */
        /* if (this->field_0x83c == 0) goto L_1340; */
        /* field_0x8ad = 0; */
        setAnm_NUM(0);
        /* goto L_1340; */
        /* L_1324:; */
        /* if (this->field_0x83c == 0) goto L_1340; */
        /* field_0x8ad = 2; */
        /* L_1340:; */
        return ((daNpc_Bj1_c*)(setAnm_NUM(0)))->setAnm_NUM(3);
}

/* 0000143C-00001470       .text setAnm_ATR__11daNpc_Bj1_cFv */
void daNpc_Bj1_c::setAnm_ATR() {
    return setAnm_anm((((char*)&a_anm_prm_tbl$4703 + 0) + (this->field_0x8ad << 4)), (this->field_0x8ad << 4));
}

/* 00001470-00001534       .text anmAtr__11daNpc_Bj1_cFUs */
void daNpc_Bj1_c::anmAtr(unsigned short) {
        /* if ((short & 65535) == 14) goto L_141c; */
        /* if (/ * bge * / 1) goto L_1424; */
        /* if ((short & 65535) == 6) goto L_13b4; */
        /* goto L_1424; */
        /* L_13b4:; */
        /* if (this->field_0x8b7 != 0) goto L_13e4; */
        /* field_0x8ad = 255; */
        /* chg_anmAtr(this->field_0x5bcf); */
        /* field_0x8b7 = (this->field_0x8b7 + 1); */
        /* L_13e4:; */
        /* field_0x5bd0 = 255; */
        /* if (this->field_0x5bd0 == 255) goto L_1424; */
        /* if (this->field_0x8ae == this->field_0x5bd0) goto L_1424; */
        chg_anmTag();
        /* goto L_1424; */
        /* L_141c:; */
        /* field_0x8b7 = 0; */
        /* L_1424:; */
        control_anmTag();
        return control_anmAtr();
}

/* 00001534-000015D8       .text eventOrder__11daNpc_Bj1_cFv */
void daNpc_Bj1_c::eventOrder() {
        /* if ((this->field_0x8b0 & 255) == 1) goto L_146c; */
        /* if ((this->field_0x8b0 & 255) != 2) goto L_14a4; */
        /* L_146c:; */
        /* if (this->field_0x8b5 != 12) goto L_1490; */
        /* L_1490:; */
        /* if (this->field_0x8b0 != 1) goto L_14dc; */
        fopAcM_orderSpeakEvent(this);
        /* goto L_14dc; */
        /* L_14a4:; */
        /* if (/ * blt * / 1) goto L_14dc; */
        /* field_0x82c = 0; */
        /* L_14dc:; */
        return fopAcM_orderOtherEventId(fopAcM_orderSpeakEvent(this), this->field_0x826, 255);
}

/* 000015D8-00001690       .text checkOrder__11daNpc_Bj1_cFv */
void daNpc_Bj1_c::checkOrder() {
        /* if (this->field_0xf8 != 2) goto L_1560; */
        /* if (((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->startCheck(this->field_0x826) == 0) goto L_1590; */
        /* if (this->field_0x82c == 2) goto L_1548; */
        /* if (/ * bge * / 1) goto L_1554; */
        /* goto L_1554; */
        /* L_1548:; */
        /* L_1554:; */
        /* field_0x8b0 = 0; */
        /* goto L_1590; */
        /* L_1560:; */
        /* if (0 != 1) goto L_1590; */
        /* if ((this->field_0x8b0 & 255) == 1) goto L_1580; */
        /* if ((this->field_0x8b0 & 255) != 2) goto L_1590; */
        /* L_1580:; */
        /* field_0x8b0 = 0; */
        /* field_0x855 = 1; */
        /* L_1590:; */
        /* return ((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->startCheck(this->field_0x826); */
}

/* 00001690-0000172C       .text chk_talk__11daNpc_Bj1_cFv */
void daNpc_Bj1_c::chk_talk() {
        /* field_0x83e = 255; */
        /* if (this->field_0x52b8 == 1) goto L_15f0; */
        /* if (this->field_0x52b8 == 2) goto L_15f0; */
        /* if (this->field_0x52b8 != 3) goto L_15f4; */
        /* L_15f0:; */
        /* L_15f4:; */
        /* if (1 == 0) goto L_1624; */
        /* if (((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->ChkPresentEnd() == 0) goto L_1620; */
        /* goto L_1624; */
        /* L_1620:; */
        /* L_1624:; */
        return 0;
}

/* 0000172C-000017C0       .text chk_drct__11daNpc_Bj1_cFf */
void daNpc_Bj1_c::chk_drct(float) {
    abs(((this->field_0x206 - cLib_targetAngleY((this + 504), (this->field_0x5b38 + 504))) & 65535));
}

/* 000017C0-000017F0       .text chk_partsNotMove__11daNpc_Bj1_cFv */
void daNpc_Bj1_c::chk_partsNotMove() {
    /* if (this->field_0x822 == this->field_0x296) { */
        /* if (this->field_0x820 != this->field_0x292) goto L_16fc; */
    /* L_16fc:; */
    return 1;
}

/* 000017F0-000019A0       .text lookBack__11daNpc_Bj1_cFv */
void daNpc_Bj1_c::lookBack() {
        /* _savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* if ((this->field_0x8b3 & 255) == 2) goto L_17f0; */
        /* if (/ * bge * / 1) goto L_1794; */
        /* if ((this->field_0x8b3 & 255) >= 1) goto L_17a0; */
        /* goto L_1824; */
        /* L_1794:; */
        /* if ((this->field_0x8b3 & 255) >= 4) goto L_1824; */
        /* goto L_1820; */
        /* L_17a0:; */
        dNpc_playerEyePos();
        /* goto L_1824; */
        /* L_17f0:; */
        /* goto L_1824; */
        /* L_1820:; */
        /* L_1824:; */
        /* cLib_addCalcAngleS2((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 2104), this->field_0x22, 4, 2048); */
        /* if (this->field_0x29a != 0) goto L_1864; */
        /* field_0x838 = 0; */
        /* L_1864:; */
        /* return _restgpr_28(((dNpc_JntCtrl_c*)((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 656)))->lookAtTarget((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 518))); */
}

/* 000019A0-00001A44       .text getMaskInf__11daNpc_Bj1_cFPUc */
void daNpc_Bj1_c::getMaskInf(unsigned char*) {
        /* if (arg2 == 0) goto L_1950; */
        /* if ((this->field_0x8b5 & 255) > 16) goto L_194c; */
        base = 1;
        /* goto L_1950; */
        base = 2;
        /* goto L_1950; */
        base = 4;
        /* goto L_1950; */
        base = 8;
        /* goto L_1950; */
        base = 16;
        /* goto L_1950; */
        base = 32;
        /* goto L_1950; */
        base = 64;
        /* goto L_1950; */
        base = 128;
        /* goto L_1950; */
        /* L_194c:; */
        /* L_1950:; */
        return 0;
}

/* 00001A44-00001AA8       .text chkReg__11daNpc_Bj1_cFUs */
void daNpc_Bj1_c::chkReg(unsigned short) {
    if (getMaskInf() == 0) {
        ((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->getEventReg(short);
    }
}

/* 00001AA8-00001B14       .text setReg__11daNpc_Bj1_cFUs */
void daNpc_Bj1_c::setReg(unsigned short) {
    if (getMaskInf() == 0) {
        ((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->getEventReg(short);
    }
    return ((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->setEventReg(short);
}

/* 00001B14-00001E84       .text next_msgStatus__11daNpc_Bj1_cFPUl */
void daNpc_Bj1_c::next_msgStatus(unsigned long*) {
        /* _savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* if (/ * bgt * / 1) goto L_1d78; */
        base = 5102;
        /* goto L_1d7c; */
        base = 5103;
        /* goto L_1d7c; */
        base = 5105;
        /* goto L_1d7c; */
        base = 5107;
        /* goto L_1d7c; */
        base = 5110;
        /* goto L_1d7c; */
        base = 5113;
        /* goto L_1d7c; */
        base = 5116;
        /* goto L_1d7c; */
        base = 5118;
        /* goto L_1d7c; */
        base = 5120;
        /* goto L_1d7c; */
        base = 5121;
        /* goto L_1d7c; */
        base = 5123;
        /* goto L_1d7c; */
        base = 5124;
        /* goto L_1d7c; */
        base = 5127;
        /* goto L_1d7c; */
        base = 5128;
        /* goto L_1d7c; */
        base = 5132;
        /* goto L_1d7c; */
        base = 5135;
        /* goto L_1d7c; */
        base = 5139;
        /* goto L_1d7c; */
        base = 5141;
        /* goto L_1d7c; */
        base = 5143;
        /* goto L_1d7c; */
        base = 5144;
        /* goto L_1d7c; */
        base = 5145;
        /* goto L_1d7c; */
        base = 5146;
        /* goto L_1d7c; */
        base = 5147;
        /* goto L_1d7c; */
        base = 5148;
        /* goto L_1d7c; */
        base = 5149;
        /* goto L_1d7c; */
        base = 5152;
        /* goto L_1d7c; */
        base = 5165;
        /* goto L_1d7c; */
        base = 5170;
        /* goto L_1d7c; */
        base = 5143;
        /* goto L_1d7c; */
        base = 5155;
        /* goto L_1d7c; */
        ((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->onEventBit(7040);
        /* if (this->field_0x9d >= 4) goto L_1c24; */
        /* if (this->field_0x840 == 0) goto L_1c18; */
        base = 5159;
        /* goto L_1d7c; */
        /* L_1c18:; */
        base = 5157;
        /* goto L_1d7c; */
        /* L_1c24:; */
        /* if (((dSv_player_item_c*)(((char*)&g_dComIfG_gameInfo + 60)))->checkEmptyBottle() == 0) goto L_1c40; */
        base = 5160;
        /* goto L_1d7c; */
        /* L_1c40:; */
        /* if (this->field_0x841 == 0) goto L_1c58; */
        base = 5168;
        /* goto L_1d7c; */
        /* L_1c58:; */
        base = 5166;
        /* goto L_1d7c; */
        base = 5158;
        /* goto L_1d7c; */
        base = 5161;
        /* goto L_1d7c; */
        base = 5167;
        /* goto L_1d7c; */
        base = 5256;
        /* goto L_1d7c; */
        base = 5257;
        /* goto L_1d7c; */
        base = 5251;
        /* goto L_1d7c; */
        base = 5259;
        /* goto L_1d7c; */
        base = 5260;
        /* goto L_1d7c; */
        base = 5261;
        /* goto L_1d7c; */
        base = 5262;
        /* goto L_1d7c; */
        base = 5263;
        /* goto L_1d7c; */
        base = 5264;
        /* goto L_1d7c; */
        base = 5265;
        /* goto L_1d7c; */
        base = 5266;
        /* goto L_1d7c; */
        base = 5267;
        /* goto L_1d7c; */
        base = 5272;
        /* goto L_1d7c; */
        base = 5273;
        /* goto L_1d7c; */
        base = 5274;
        /* goto L_1d7c; */
        base = 5275;
        /* goto L_1d7c; */
        base = 5276;
        /* goto L_1d7c; */
        base = 5277;
        /* goto L_1d7c; */
        base = 5269;
        /* goto L_1d7c; */
        base = 5270;
        /* goto L_1d7c; */
        /* L_1d78:; */
        /* L_1d7c:; */
        return _restgpr_29(16);
}

/* 00001E84-00001F14       .text getMsg_BJ1_0__11daNpc_Bj1_cFv */
void daNpc_Bj1_c::getMsg_BJ1_0() {
    if (((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->isEventBit(1540) == 0) {
        return 5134;
    }
    if (dKyw_get_windsdir() == 1) {
        /* if (((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->isEventBit(3200) != 0) goto L_1e14; */
        return 5140;
    }
    /* L_1e14:; */
    return (((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->isEventBit(2308) + 5136);
}

/* 00001F14-00001F54       .text getMsg_BJ2_0__11daNpc_Bj1_cFv */
void daNpc_Bj1_c::getMsg_BJ2_0() {
    if (((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->isEventBit(2336) != 0) {
    }
    return 5108;
}

/* 00001F54-00001FA8       .text getMsg_BJ3_0__11daNpc_Bj1_cFv */
void daNpc_Bj1_c::getMsg_BJ3_0() {
    if (this->field_0x84b != 0) {
        return 5115;
    }
    if (((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->isEventBit(3104) != 0) {
    }
    return 5114;
}

/* 00001FA8-00001FE8       .text getMsg_BJ4_0__11daNpc_Bj1_cFv */
void daNpc_Bj1_c::getMsg_BJ4_0() {
    if (((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->isEventBit(3080) != 0) {
    }
    return 5119;
}

/* 00001FE8-00002028       .text getMsg_BJ5_0__11daNpc_Bj1_cFv */
void daNpc_Bj1_c::getMsg_BJ5_0() {
    if (((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->isEventBit(3076) != 0) {
    }
    return 5111;
}

/* 00002028-00002068       .text getMsg_BJ6_0__11daNpc_Bj1_cFv */
void daNpc_Bj1_c::getMsg_BJ6_0() {
    if (((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->isEventBit(3074) != 0) {
    }
    return 5125;
}

/* 00002068-000021C4       .text getMsg_BJ7_0__11daNpc_Bj1_cFv */
void daNpc_Bj1_c::getMsg_BJ7_0() {
        /* if (this->field_0x842 == 0) goto L_1fa8; */
        /* field_0x842 = 0; */
        return 5163;
        /* L_1fa8:; */
        /* if (this->field_0x843 == 0) goto L_1fc4; */
        /* field_0x843 = 0; */
        return 5164;
        /* L_1fc4:; */
        /* if (this->field_0x83e != 70) goto L_1ff8; */
        /* if (((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->isEventBit(7040) == 0) goto L_20c4; */
        return 5156;
        /* L_1ff8:; */
        /* if (this->field_0x83e == 255) goto L_2008; */
        return 5153;
        /* L_2008:; */
        /* if (((dSv_player_collect_c*)(((char*)&g_dComIfG_gameInfo + 180)))->isSymbol(2) == 0) goto L_2084; */
        /* if (((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->isEventBit(3336) != 0) goto L_204c; */
        return 5171;
        /* L_204c:; */
        /* if (((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->isEventBit(7296) == 0) goto L_207c; */
        ((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->isEventBit(7040);
        /* goto L_20c4; */
        /* L_207c:; */
        return 5169;
        /* L_2084:; */
        /* if (((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->isEventBit(3336) == 0) goto L_20c0; */
        ((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->isEventBit(7040);
        /* goto L_20c4; */
        /* L_20c0:; */
        /* L_20c4:; */
        return 5142;
}

/* 000021C4-00002254       .text getMsg_BJ8_0__11daNpc_Bj1_cFv */
void daNpc_Bj1_c::getMsg_BJ8_0() {
    if (((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->isEventBit(3392) == 0) {
        return 5126;
    }
    if (dKyw_get_windsdir() == 7) {
        /* if (((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->isEventBit(3344) != 0) goto L_2154; */
        return 5133;
    }
    /* L_2154:; */
    return (((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->isEventBit(3360) + 5129);
}

/* 00002254-00002294       .text getMsg_BJ9_0__11daNpc_Bj1_cFv */
void daNpc_Bj1_c::getMsg_BJ9_0() {
    if (((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->isEventBit(3088) != 0) {
    }
    return 5104;
}

/* 00002294-0000242C       .text getMsg_Corog__11daNpc_Bj1_cFv */
void daNpc_Bj1_c::getMsg_Corog() {
        /* if (chkReg((arg1 + -25857)) == 0) goto L_22c8; */
        /* if (((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->isEventBit(258) == 0) goto L_2218; */
        chkReg();
        /* goto L_2328; */
        /* L_2218:; */
        /* if (chkReg() != 0) goto L_2254; */
        /* if (chkReg() == 0) goto L_2328; */
        return 5278;
        /* L_2254:; */
        /* if (chkReg() == 0) goto L_2274; */
        return 5252;
        /* L_2274:; */
        /* if (((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->getEventReg() == 0) goto L_22a4; */
        /* L_22a4:; */
        /* field_0x5bac = (8 - ((0 + 1) & 65535)); */
        return 5250;
        /* L_22c8:; */
        /* if (((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->isEventBit(11792) == 0) goto L_2308; */
        /* if (chkReg() == 0) goto L_2328; */
        return 5268;
        /* L_2308:; */
        /* if (chkReg() == 0) goto L_2328; */
        /* L_2328:; */
        return 5268;
}

/* 0000242C-000024EC       .text getMsg__11daNpc_Bj1_cFv */
void daNpc_Bj1_c::getMsg() {
    if ((this->field_0x8b5 & 255) <= 16) {
        getMsg_BJ1_0();
        /* goto L_23ec; */
        ((daNpc_Bj1_c*)(getMsg_BJ1_0()))->getMsg_BJ2_0();
        /* goto L_23ec; */
        ((daNpc_Bj1_c*)(((daNpc_Bj1_c*)(getMsg_BJ1_0()))->getMsg_BJ2_0()))->getMsg_BJ3_0();
        /* goto L_23ec; */
        ((daNpc_Bj1_c*)(((daNpc_Bj1_c*)(((daNpc_Bj1_c*)(getMsg_BJ1_0()))->getMsg_BJ2_0()))->getMsg_BJ3_0()))->getMsg_BJ4_0();
        /* goto L_23ec; */
        ((daNpc_Bj1_c*)(((daNpc_Bj1_c*)(((daNpc_Bj1_c*)(((daNpc_Bj1_c*)(getMsg_BJ1_0()))->getMsg_BJ2_0()))->getMsg_BJ3_0()))->getMsg_BJ4_0()))->getMsg_BJ5_0();
        /* goto L_23ec; */
        ((daNpc_Bj1_c*)(((daNpc_Bj1_c*)(((daNpc_Bj1_c*)(((daNpc_Bj1_c*)(((daNpc_Bj1_c*)(getMsg_BJ1_0()))->getMsg_BJ2_0()))->getMsg_BJ3_0()))->getMsg_BJ4_0()))->getMsg_BJ5_0()))->getMsg_BJ6_0();
        /* goto L_23ec; */
        ((daNpc_Bj1_c*)(((daNpc_Bj1_c*)(((daNpc_Bj1_c*)(((daNpc_Bj1_c*)(((daNpc_Bj1_c*)(((daNpc_Bj1_c*)(getMsg_BJ1_0()))->getMsg_BJ2_0()))->getMsg_BJ3_0()))->getMsg_BJ4_0()))->getMsg_BJ5_0()))->getMsg_BJ6_0()))->getMsg_BJ7_0();
        /* goto L_23ec; */
        ((daNpc_Bj1_c*)(((daNpc_Bj1_c*)(((daNpc_Bj1_c*)(((daNpc_Bj1_c*)(((daNpc_Bj1_c*)(((daNpc_Bj1_c*)(((daNpc_Bj1_c*)(getMsg_BJ1_0()))->getMsg_BJ2_0()))->getMsg_BJ3_0()))->getMsg_BJ4_0()))->getMsg_BJ5_0()))->getMsg_BJ6_0()))->getMsg_BJ7_0()))->getMsg_BJ8_0();
        /* goto L_23ec; */
        ((daNpc_Bj1_c*)(((daNpc_Bj1_c*)(((daNpc_Bj1_c*)(((daNpc_Bj1_c*)(((daNpc_Bj1_c*)(((daNpc_Bj1_c*)(((daNpc_Bj1_c*)(((daNpc_Bj1_c*)(getMsg_BJ1_0()))->getMsg_BJ2_0()))->getMsg_BJ3_0()))->getMsg_BJ4_0()))->getMsg_BJ5_0()))->getMsg_BJ6_0()))->getMsg_BJ7_0()))->getMsg_BJ8_0()))->getMsg_BJ9_0();
        /* goto L_23ec; */
    }
    /* L_23ec:; */
    return ((daNpc_Bj1_c*)(((daNpc_Bj1_c*)(((daNpc_Bj1_c*)(((daNpc_Bj1_c*)(((daNpc_Bj1_c*)(((daNpc_Bj1_c*)(((daNpc_Bj1_c*)(((daNpc_Bj1_c*)(((daNpc_Bj1_c*)(getMsg_BJ1_0()))->getMsg_BJ2_0()))->getMsg_BJ3_0()))->getMsg_BJ4_0()))->getMsg_BJ5_0()))->getMsg_BJ6_0()))->getMsg_BJ7_0()))->getMsg_BJ8_0()))->getMsg_BJ9_0()))->getMsg_Corog();
}

/* 000024EC-0000256C       .text chkAttention__11daNpc_Bj1_cFv */
void daNpc_Bj1_c::chkAttention() {
    if (((dAttention_c*)(((char*)&g_dComIfG_gameInfo + 22536)))->LockonTruth() == 0) {
    }
    return ((this - ((dAttention_c*)(((char*)&g_dComIfG_gameInfo + 22536)))->ActionTarget(0)) >> 5);
}

/* 0000256C-000025D4       .text setAttention__11daNpc_Bj1_cFb */
void daNpc_Bj1_c::setAttention(bool) {
    /* field_0x274 = 0; */
    /* field_0x278 = (this->field_0x1fc + this->field_0x24); */
    /* field_0x27c = 0; */
    if (this->field_0x850 == 0) {
    }
    eyePos = 0;
    /* field_0x264 = 0; */
    /* field_0x268 = 0; */
    return this;
}

/* 000025D4-00002608       .text searchByID__11daNpc_Bj1_cFUi */
void daNpc_Bj1_c::searchByID(fpc_ProcID) {
    fopAcM_SearchByID(fpc_ProcID);
}

/* 00002608-000026B8       .text partner_srch_sub__11daNpc_Bj1_cFPFPvPv_Pv */
void daNpc_Bj1_c::partner_srch_sub(void* (*)(void*, void*)) {
        /* field_0x7a8 = -1; */
        base = 0;
        /* fpcEx_Search(arg1, this, ((char*)&l_check_inf + 0), 0, arg4, arg5, arg6, arg7); */
        /* if (base == 0) goto L_25b0; */
        /* if (base == 0) goto L_25a4; */
        /* goto L_25a8; */
        /* L_25a4:; */
        /* L_25a8:; */
        /* field_0x7a8 = -1; */
        /* L_25b0:; */
        return 1;
}

/* 000026B8-00002724       .text partner_srch__11daNpc_Bj1_cFv */
void daNpc_Bj1_c::partner_srch() {
        /* if (this->field_0x8b6 != 1) goto L_2624; */
        /* if (this->field_0x8b5 == 4) goto L_2600; */
        /* goto L_2610; */
        /* L_2600:; */
        /* L_2610:; */
        /* if (partner_srch_sub(((char*)&searchActor_Jb__FPvPv + 0), arg2, arg3, arg4, arg5, arg6, arg7) == 0) goto L_2624; */
        /* field_0x8b6 = (this->field_0x8b6 + 1); */
        /* L_2624:; */
        /* return this->field_0x8b6; */
}

/* 00002724-000027B0       .text setCollision_SP___11daNpc_Bj1_cFv */
void daNpc_Bj1_c::setCollision_SP_() {
    /* ((cM3dGCyl*)((arg0 + 1676)))->SetC((arg0 + 504), arg2); */
    ((cM3dGCyl*)((arg0 + 1676)))->SetR((((char*)&l_chk_tbl$5198 + 0) + ((this->field_0x8b4 & 255) << 3)));
    ((cM3dGCyl*)((arg0 + 1676)))->SetH(((char*)&l_chk_tbl$5198 + 0));
    return ((cCcS*)(((char*)&g_dComIfG_gameInfo + 9892)))->Set((arg0 + 1396));
}

/* 000027B0-00002840       .text set_pthPoint__11daNpc_Bj1_cFUc */
void daNpc_Bj1_c::set_pthPoint(unsigned char) {
        /* if (this->field_0x734 == 0) goto L_273c; */
        /* if ((char & 16777215) <= (((dNpc_PathRun_c*)((this + 1844)))->maxPoint() & 16777215)) goto L_2708; */
        /* L_2708:; */
        /* field_0x739 = ((dNpc_PathRun_c*)((this + 1844)))->maxPoint(); */
        getPoint((this + 1844));
        current = 0;
        /* field_0x1fc = 0; */
        /* field_0x200 = 0; */
        /* L_273c:; */
        return ((dNpc_PathRun_c*)((this + 1844)))->nextIdxAuto();
}

/* 00002840-00002988       .text bj_clcFlySpd__11daNpc_Bj1_cFv */
void daNpc_Bj1_c::bj_clcFlySpd() {
        /* if ((this->field_0x8a8 & 255) == 2) goto L_2848; */
        /* if (/ * bge * / 1) goto L_2878; */
        /* if ((this->field_0x8a8 & 255) >= 1) goto L_278c; */
        /* goto L_2878; */
        /* goto L_2878; */
        /* L_278c:; */
        cLib_addCalcAngleS((this + 518), cLib_targetAngleY((this + 504), (this + 2008)), this->field_0x32, this->field_0x34, 0);
        /* field_0x848 = ((this->field_0x8b4 & 255) * 108); */
        /* if (this->field_0x848 != 0) goto L_282c; */
        /* L_282c:; */
        cLib_chaseF((this + 548), (((char*)&l_HIO + 0) + ((this->field_0x8b4 & 255) * 108)), ((this->field_0x8b4 & 255) * 108));
        /* goto L_2878; */
        /* L_2848:; */
        cLib_chaseF((this + 548), (((char*)&l_HIO + 0) + ((this->field_0x8b4 & 255) * 108)), ((this->field_0x8b4 & 255) * 108));
        /* L_2878:; */
        return cLib_chaseF((this + 596));
}

/* 00002988-00002B80       .text bj_movPass__11daNpc_Bj1_cFb */
void daNpc_Bj1_c::bj_movPass(bool) {
        /* _savegpr_27(this, bool, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* if (this->field_0x734 == 0) goto L_2938; */
        /* if (this->field_0x5 == 0) goto L_2938; */
        /* if (((dNpc_PathRun_c*)((_savegpr_27(this, bool, arg2, arg3, arg4, arg5, arg6, arg7) + 1844)))->chkPointPass() == 0) goto L_2930; */
        /* ((dNpc_PathRun_c*)((_savegpr_27(this, bool, arg2, arg3, arg4, arg5, arg6, arg7) + 1844)))->nextIdxAuto(); */
        /* if (/ * bne * / 1) goto L_2a10; */
        /* L_2930:; */
        /* goto L_2a7c; */
        /* L_2938:; */
        __mi();
        PSVECSquareMag();
        /* if (/ * ble * / 1) goto L_29cc; */
        /* L_29cc:; */
        /* if (this->field_0x8 != this->field_0x81c) goto L_2a08; */
        /* if (this->field_0x734 == 0) goto L_2a00; */
        /* if (((dNpc_PathRun_c*)((_savegpr_27(this, bool, arg2, arg3, arg4, arg5, arg6, arg7) + 1844)))->nextIdxAuto() != 0) goto L_2a00; */
        /* L_2a00:; */
        /* if (/ * bne * / 1) goto L_2a10; */
        /* L_2a08:; */
        /* goto L_2a7c; */
        /* L_2a10:; */
        /* getPoint((_savegpr_27(this, bool, arg2, arg3, arg4, arg5, arg6, arg7) + 1844)); */
        /* L_2a7c:; */
        return _restgpr_27(2);
}

/* 00002B80-00002EDC       .text bj_flyMove__11daNpc_Bj1_cFv */
void daNpc_Bj1_c::bj_flyMove() {
        /* if (this->field_0x8a8 != 0) goto L_2abc; */
        return 0;
        /* L_2abc:; */
        /* if (this->field_0x849 == 0) goto L_2ad8; */
        /* field_0x847 = 1; */
        return 1;
        /* L_2ad8:; */
        /* if (this->field_0x734 == 0) goto L_2b0c; */
        getPoint((this + 1844));
        /* field_0x7d8 = 0; */
        /* field_0x7dc = 0; */
        /* field_0x7e0 = 0; */
        /* L_2b0c:; */
        /* if ((this->field_0x8a8 & 255) == 1) goto L_2b2c; */
        /* if ((this->field_0x8a8 & 255) == 2) goto L_2b2c; */
        /* if ((this->field_0x8a8 & 255) != 7) goto L_2b68; */
        /* L_2b2c:; */
        /* if (((this->field_0x6f2 + this->field_0x52) & 65535) <= this->field_0x50) goto L_2b64; */
        /* L_2b64:; */
        /* L_2b68:; */
        /* if ((this->field_0x8a8 & 255) > 7) goto L_2dd8; */
        bj_clcFlySpd();
        /* if (bj_movPass(1) >= 3) goto L_2dd8; */
        /* if (bj_movPass(1) >= 1) goto L_2bb8; */
        /* goto L_2dd8; */
        /* L_2bb8:; */
        /* field_0x849 = 1; */
        /* goto L_2dd8; */
        bj_clcFlySpd();
        /* field_0x849 = (((this->field_0x8b4 & 255) * 108) >> 31); */
        /* if (this->field_0x849 == 0) goto L_2dd8; */
        setAnm_NUM(1);
        /* field_0x224 = 0; */
        /* field_0x8a8 = 3; */
        /* goto L_2dd8; */
        /* if (this->field_0x5d != 0) goto L_2c60; */
        /* if (/ * beq * / 1) goto L_2c60; */
        /* L_2c60:; */
        /* field_0x849 = ((0 & 16777215) + -1); */
        /* if (this->field_0x849 == 0) goto L_2dd8; */
        /* field_0x8a8 = 7; */
        /* goto L_2dd8; */
        /* field_0x849 = ((((this->field_0x6f2 ^ this->field_0x56) & this->field_0x6f2) - (((char*)&l_HIO + 0) + ((this->field_0x8b4 & 255) * 108))) >> 31); */
        /* if (this->field_0x849 == 0) goto L_2dd8; */
        setAnm_NUM(10);
        /* field_0x8a8 = 1; */
        /* goto L_2dd8; */
        /* field_0x6f2 = (this->field_0x52 - this->field_0x6f2); */
        /* field_0x849 = (this->field_0x6f2 >> 5); */
        /* if (this->field_0x849 == 0) goto L_2dd8; */
        setAnm_prp(2);
        /* field_0x8a8 = 4; */
        /* goto L_2dd8; */
        /* field_0x849 = (((J3DFrameCtrl*)((this->field_0x6e4 + 88)))->checkPass(C_@4250) + -1); */
        /* if (this->field_0x849 == 0) goto L_2dd8; */
        /* field_0x84c = 0; */
        gravity = 0;
        /* field_0x8a8 = 5; */
        /* goto L_2dd8; */
        /* if (this->field_0x849 == 0) goto L_2dd8; */
        /* field_0x8a8 = 0; */
        /* L_2dd8:; */
        return 1;
}

/* 00002EDC-00002F5C       .text bj_clcMovSpd__11daNpc_Bj1_cFv */
void daNpc_Bj1_c::bj_clcMovSpd() {
    if (this->field_0x8a9 != 0) {
        cLib_addCalcAngleS((this + 518), cLib_targetAngleY((this + 504), (this + 2008)), this->field_0x5e, this->field_0x60, 0);
    }
    return cLib_chaseF((this + 596));
}

/* 00002F5C-000030A4       .text bj_nMove__11daNpc_Bj1_cFv */
void daNpc_Bj1_c::bj_nMove() {
        /* if (this->field_0x84a == 0) goto L_2ea8; */
        /* field_0x847 = 1; */
        /* goto L_2fa0; */
        /* L_2ea8:; */
        /* if ((this->field_0x8a9 & 255) == 2) goto L_2ed4; */
        /* if (/ * bge * / 1) goto L_2f04; */
        /* if ((this->field_0x8a9 & 255) >= 1) goto L_2ec8; */
        /* goto L_2f04; */
        /* L_2ec8:; */
        /* field_0x8a9 = 2; */
        /* goto L_2fa0; */
        /* L_2ed4:; */
        /* if (/ * beq * / 1) goto L_2fa0; */
        setAnm_NUM(8);
        speedF = 0;
        gravity = 0;
        /* field_0x8a9 = 0; */
        /* goto L_2fa0; */
        /* L_2f04:; */
        /* if (this->field_0x8aa == 1) goto L_2f14; */
        /* goto L_2fa0; */
        /* L_2f14:; */
        /* if (/ * bne * / 1) goto L_2fa0; */
        bj_clcMovSpd();
        /* if ((speedF * this->field_0x64) >= this->field_0x78) goto L_2f58; */
        /* L_2f58:; */
        /* field_0x64 = 0; */
        /* if (bj_movPass(0) == 2) goto L_2f90; */
        /* if (/ * bge * / 1) goto L_2fa0; */
        /* if (bj_movPass(0) >= 1) goto L_2f84; */
        /* goto L_2fa0; */
        /* L_2f84:; */
        /* field_0x84a = 1; */
        /* goto L_2fa0; */
        /* L_2f90:; */
        /* field_0x84a = 1; */
        /* field_0x8aa = 0; */
        /* L_2fa0:; */
        return bj_movPass(0);
}

/* 000030A4-000031F4       .text setPrtcl_drugPot_1__11daNpc_Bj1_cFv */
void daNpc_Bj1_c::setPrtcl_drugPot_1() {
    if (dComIfGp_getMapTrans((this->field_0x20a & 255)) == 0) {
        /* field_0x858 = 0; */
        /* field_0x85c = 0; */
        /* field_0x860 = 0; */
        /* field_0x864 = 0; */
        /* field_0x868 = 0; */
        /* field_0x87c = ((dPa_control_c*)(this->field_0x5ab8))->set(0); */
        /* field_0x880 = ((dPa_control_c*)(this->field_0x5ab8))->set(0); */
        /* field_0x884 = ((dPa_control_c*)(this->field_0x5ab8))->set(0); */
    }
    /* return ((dPa_control_c*)(this->field_0x5ab8))->set(0); */
}

/* 000031F4-000032B4       .text setPrtcl_drugPot_2__11daNpc_Bj1_cFv */
void daNpc_Bj1_c::setPrtcl_drugPot_2() {
    if (dComIfGp_getMapTrans((this->field_0x20a & 255)) == 0) {
        /* field_0x858 = 0; */
        /* field_0x85c = 0; */
        /* field_0x860 = 0; */
        /* field_0x864 = 0; */
        /* field_0x868 = 0; */
        /* field_0x888 = ((dPa_control_c*)(this->field_0x5ab8))->set(0); */
    }
    /* return ((dPa_control_c*)(this->field_0x5ab8))->set(0); */
}

/* 000032B4-00003330       .text delPrtcl_drugPot__11daNpc_Bj1_cFv */
void daNpc_Bj1_c::delPrtcl_drugPot() {
    if (this->field_0x87c != 0) {
        /* field_0x60 = -1; */
        /* field_0x87c = 0; */
    }
    if (this->field_0x880 != 0) {
        /* field_0x60 = -1; */
        /* field_0x880 = 0; */
    }
    /* field_0x60 = -1; */
    /* field_0x884 = 0; */
    return this;
}

/* 00003330-000033F4       .text setPrtcl_danceLR__11daNpc_Bj1_cFv */
void daNpc_Bj1_c::setPrtcl_danceLR() {
    delPrtcl_danceLR();
    /* field_0x88c = ((dPa_control_c*)(this->field_0x5ab8))->set(0); */
    /* field_0x890 = ((dPa_control_c*)(this->field_0x5ab8))->set(0); */
    /* return ((dPa_control_c*)(this->field_0x5ab8))->set(0); */
}

/* 000033F4-00003484       .text flwPrtcl_danceLR__11daNpc_Bj1_cFv */
void daNpc_Bj1_c::flwPrtcl_danceLR() {
    if (this->field_0x88c != 0) {
        /* JPASetRMtxTVecfromMtx((this->field_0x8c + ((this->field_0x6ce & 255) * 48)), (this->field_0x88c + 424), (this->field_0x88c + 484), arg3); */
    }
    if (this->field_0x890 != 0) {
    }
    return JPASetRMtxTVecfromMtx((this->field_0x8c + ((this->field_0x6cf & 255) * 48)), (this->field_0x890 + 424), (this->field_0x890 + 484));
}

/* 00003484-000034D8       .text delPrtcl_danceLR__11daNpc_Bj1_cFv */
void daNpc_Bj1_c::delPrtcl_danceLR() {
    if (this->field_0x88c != 0) {
        /* field_0x60 = -1; */
        /* field_0x88c = 0; */
    }
    /* field_0x60 = -1; */
    /* field_0x890 = 0; */
    return this;
}

/* 000034D8-00003594       .text setPrtcl_peraProOpen__11daNpc_Bj1_cFv */
void daNpc_Bj1_c::setPrtcl_peraProOpen() {
    /* PSMTXCopy((this->field_0x8c + ((this->field_0x6e8 & 255) * 48)), ((char*)&now__14mDoMtx_stack_c + 0), arg2, arg3, arg4, arg5, arg6, arg7); */
    /* field_0x86c = 0; */
    /* field_0x870 = 0; */
    /* field_0x874 = 0; */
    /* field_0x878 = ((dPa_control_c*)(this->field_0x5ab8))->set(0); */
    /* return ((dPa_control_c*)(this->field_0x5ab8))->set(0); */
}

/* 00003594-00003774       .text createSeed__11daNpc_Bj1_cFv */
void daNpc_Bj1_c::createSeed() {
        /* _savegpr_24(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        PSMTXCopy((this->field_0x8c + ((this->field_0x6cf & 255) * 48)), ((char*)&now__14mDoMtx_stack_c + 0), 0, -1);
        /* L_357c:; */
        __ct();
        /* cM_rndFX(cM_rndFX(this->field_0x206)); */
        /* if (fopAcM_createItemForKP2() == 0) goto L_3644; */
        /* if (/ * beq * / 1) goto L_3624; */
        /* goto L_3628; */
        /* L_3624:; */
        /* L_3628:; */
        /* if ((0 + 1) < 4) goto L_357c; */
        /* L_3644:; */
        return _restgpr_24(((4 - (0 + 1)) >> 5));
}

/* 00003774-000037E4       .text deleteSeed__11daNpc_Bj1_cFv */
void daNpc_Bj1_c::deleteSeed() {
    /* L_36ac:; */
    /* if (((daNpc_Bj1_c*)(_savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->searchByID() != 0) { */
        /* fopAcM_delete(((daNpc_Bj1_c*)(_savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->searchByID()); */
    /* if ((0 + 1) >= 4) goto L_36ac; */
    return _restgpr_27(1);
}

/* 000037E4-00003998       .text charDecide__11daNpc_Bj1_cFi */
void daNpc_Bj1_c::charDecide(int) {
        /* field_0x8b4 = -1; */
        /* field_0x8b5 = -1; */
        /* if ((this->field_0x8 + -338) > 8) goto L_389c; */
        /* field_0x8b4 = 0; */
        /* if (int == 1) goto L_3740; */
        /* goto L_374c; */
        /* L_3740:; */
        /* field_0x8b5 = 1; */
        /* goto L_38a4; */
        /* L_374c:; */
        /* field_0x8b5 = 1; */
        /* goto L_38a4; */
        /* field_0x8b4 = 1; */
        /* if (int == 1) goto L_3768; */
        /* goto L_3774; */
        /* L_3768:; */
        /* field_0x8b5 = 3; */
        /* goto L_38a4; */
        /* L_3774:; */
        /* field_0x8b5 = 2; */
        /* goto L_38a4; */
        /* field_0x8b4 = 2; */
        /* if (int == 1) goto L_3794; */
        /* goto L_37a0; */
        /* L_3794:; */
        /* field_0x8b5 = 5; */
        /* goto L_38a4; */
        /* L_37a0:; */
        /* field_0x8b5 = 4; */
        /* goto L_38a4; */
        /* field_0x8b4 = 3; */
        /* if (int == 1) goto L_37c0; */
        /* goto L_37cc; */
        /* L_37c0:; */
        /* field_0x8b5 = 7; */
        /* goto L_38a4; */
        /* L_37cc:; */
        /* field_0x8b5 = 6; */
        /* goto L_38a4; */
        /* field_0x8b4 = 4; */
        /* if (int == 1) goto L_37ec; */
        /* goto L_37f8; */
        /* L_37ec:; */
        /* field_0x8b5 = 9; */
        /* goto L_38a4; */
        /* L_37f8:; */
        /* field_0x8b5 = 8; */
        /* goto L_38a4; */
        /* field_0x8b4 = 5; */
        /* if (int == 1) goto L_3818; */
        /* goto L_3824; */
        /* L_3818:; */
        /* field_0x8b5 = 11; */
        /* goto L_38a4; */
        /* L_3824:; */
        /* field_0x8b5 = 10; */
        /* goto L_38a4; */
        /* field_0x8b4 = 6; */
        /* field_0x8b5 = 12; */
        /* goto L_38a4; */
        /* field_0x8b4 = 7; */
        /* if (int == 1) goto L_3858; */
        /* goto L_3864; */
        /* L_3858:; */
        /* field_0x8b5 = 14; */
        /* goto L_38a4; */
        /* L_3864:; */
        /* field_0x8b5 = 13; */
        /* goto L_38a4; */
        /* field_0x8b4 = 8; */
        /* if (int == 1) goto L_3884; */
        /* goto L_3890; */
        /* L_3884:; */
        /* field_0x8b5 = 16; */
        /* goto L_38a4; */
        /* L_3890:; */
        /* field_0x8b5 = 15; */
        /* goto L_38a4; */
        /* L_389c:; */
        return 0;
}

/* 00003998-000039DC       .text eInit_setLocFlag__11daNpc_Bj1_cFPi */
void daNpc_Bj1_c::eInit_setLocFlag(int*) {
        /* field_0x856 = 0; */
        /* if (/ * beq * / 1) goto L_38d8; */
        /* if (/ * bge * / 1) goto L_38e4; */
        return this;
}

/* 000039DC-00003A14       .text eInit_setShapeAngleY__11daNpc_Bj1_cFPis */
void daNpc_Bj1_c::eInit_setShapeAngleY(int*, short) {
    /* field_0x846 = 0; */
    /* field_0x846 = 0; */
    /* field_0x20e = short; */
    return this;
}

/* 00003A14-00003A30       .text eInit_setEvTimer__11daNpc_Bj1_cFPi */
void daNpc_Bj1_c::eInit_setEvTimer(int*) {
    /* field_0x830 = 0; */
    return this;
}

/* 00003A30-00003B10       .text eInit_calcRelativPos__11daNpc_Bj1_cFP4cXyzPi */
void daNpc_Bj1_c::eInit_calcRelativPos(cXyz*, int*) {
    }

    /* PSMTXTrans(((char*)&now__14mDoMtx_stack_c + 0), arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
    mDoMtx_YrotM(((char*)&now__14mDoMtx_stack_c + 0));
    PSMTXMultVec(((char*)&now__14mDoMtx_stack_c + 0));
    base = 0;
    /* field_0x4 = 0; */
    /* field_0x8 = 0; */
    return PSMTXMultVec(((char*)&now__14mDoMtx_stack_c + 0));


/* 00003B10-00003B20       .text eInit_prmFloat__11daNpc_Bj1_cFPff */
void daNpc_Bj1_c::eInit_prmFloat(float*, float) {
    /* if (arg1 == 0) return; */
}

/* 00003B20-00003D3C       .text eInit_ATTENTION___11daNpc_Bj1_cFPiPiPiP4cXyzPiPiPi */
void daNpc_Bj1_c::eInit_ATTENTION_(int*, int*, int*, cXyz*, int*, int*, int*) {
        /* _savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* if (/ * beq * / 1) goto L_3c38; */
        /* if (/ * bgt * / 1) goto L_3c08; */
        /* field_0x8b3 = 1; */
        /* cLib_targetAngleY((_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 504), (this->field_0x5b38 + 504)); */
        /* goto L_3c10; */
        /* if (/ * beq * / 1) goto L_3c38; */
        /* field_0x8b3 = 2; */
        /* cLib_targetAngleY((_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 504)); */
        /* goto L_3c10; */
        /* field_0x8b3 = 2; */
        /* eInit_calcRelativPos(_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* field_0x7cc = 0; */
        /* field_0x7d0 = 0; */
        /* field_0x7d4 = 0; */
        /* cLib_targetAngleY((_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 504), (_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1996)); */
        /* goto L_3c10; */
        /* if (/ * beq * / 1) goto L_3c38; */
        /* field_0x8b3 = 3; */
        /* goto L_3c10; */
        /* if (this->field_0x734 == 0) goto L_3c38; */
        /* if (/ * beq * / 1) goto L_3b54; */
        /* L_3b54:; */
        /* getPoint((_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1844)); */
        /* field_0x7cc = 0; */
        /* field_0x7d0 = 0; */
        /* field_0x7d4 = 0; */
        /* field_0x8b3 = 2; */
        /* goto L_3c10; */
        /* if (((daNpc_Bj1_c*)(getPoint((_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1844))))->searchByID(this->field_0x7a8) == 0) goto L_3c38; */
        /* field_0x8b3 = 2; */
        /* field_0x7cc = 0; */
        /* field_0x7d0 = 0; */
        /* field_0x7d4 = 0; */
        /* cLib_targetAngleY((_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 504), (_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1996)); */
        /* goto L_3c10; */
        /* field_0x8b3 = 2; */
        /* field_0x7cc = 0; */
        /* field_0x7d0 = 0; */
        /* field_0x7d4 = 0; */
        /* field_0x7d0 = 0; */
        /* cLib_targetAngleY((_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 504), (_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1996)); */
        /* goto L_3c10; */
        /* L_3c08:; */
        /* field_0x8b3 = 0; */
        /* L_3c10:; */
        /* ((daNpc_Bj1_c*)(_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->eInit_setLocFlag(); */
        /* ((daNpc_Bj1_c*)(_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->eInit_setShapeAngleY(); */
        /* L_3c38:; */
        /* return _restgpr_27(((daNpc_Bj1_c*)(_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->eInit_setEvTimer()); */
}

/* 00003D3C-00003E24       .text eInit_PLYER_MOV_1___11daNpc_Bj1_cFv */
void daNpc_Bj1_c::eInit_PLYER_MOV_1_() {
    if (abs(((this->field_0x7ba - cLib_targetAngleY((arg0 + 1964), (this->field_0x5b38 + 504))) & 65535)) > 4096) {
        PSMTXTrans(((char*)&now__14mDoMtx_stack_c + 0));
        /* mDoMtx_YrotM(((char*)&now__14mDoMtx_stack_c + 0), this->field_0x7ba); */
    }
    return ((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->setGoal();
}

/* 00003E24-00003F04       .text eInit_MOV___11daNpc_Bj1_cFPfPfPfPi */
void daNpc_Bj1_c::eInit_MOV_(float*, float*, float*, int*) {
    /* ((daNpc_Bj1_c*)(_savegpr_26(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->setAnm_NUM(8); */
    /* field_0x8b3 = 0; */
    /* ((daNpc_Bj1_c*)(_savegpr_26(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->eInit_prmFloat(); */
    /* getPoint((_savegpr_26(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1844)); */
    /* field_0x7d8 = 0; */
    /* field_0x7dc = 0; */
    /* field_0x7e0 = 0; */
    /* ((daNpc_Bj1_c*)(_savegpr_26(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->eInit_setEvTimer(); */
    /* field_0x84a = 0; */
    /* field_0x8aa = 1; */
    /* return _restgpr_26(((daNpc_Bj1_c*)(_savegpr_26(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->eInit_setEvTimer()); */
}

/* 00003F04-00003F74       .text eInit_JMP___11daNpc_Bj1_cFPfPf */
void daNpc_Bj1_c::eInit_JMP_(float*, float*) {
    /* field_0x8a9 = 1; */
    /* ((daNpc_Bj1_c*)(arg0))->eInit_prmFloat(arg1, C_@4250); */
    /* ((daNpc_Bj1_c*)(arg0))->eInit_prmFloat(arg2, C_@4250); */
    return ((daNpc_Bj1_c*)(arg0))->setAnm_NUM(4);
}

/* 00003F74-0000406C       .text eInit_CHG_PTH___11daNpc_Bj1_cFPiPi */
void daNpc_Bj1_c::eInit_CHG_PTH_(int*, int*) {
        /* ((dNpc_PathRun_c*)((_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1844)))->setInf(this->field_0x83f, this->field_0x20a, 1); */
        /* if (this->field_0x734 == 0) goto L_3f30; */
        /* if (/ * beq * / 1) goto L_3f30; */
        /* if (this->field_0x0 <= 0) goto L_3f30; */
        /* ((dNpc_PathRun_c*)((_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1844)))->nextPath(this->field_0x20a); */
        /* goto L_3f18; */
        /* L_3ef8:; */
        /* if (((dNpc_PathRun_c*)((_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1844)))->nextPath(this->field_0x20a) == 0) goto L_3f20; */
        /* dPath_GetNextRoomPath(((dNpc_PathRun_c*)((_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1844)))->nextPath(this->field_0x20a), (this->field_0x20a & 255)); */
        /* L_3f18:; */
        /* if ((0 + 1) < (this->field_0x0 + -1)) goto L_3ef8; */
        /* L_3f20:; */
        /* if (dPath_GetNextRoomPath(((dNpc_PathRun_c*)((_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1844)))->nextPath(this->field_0x20a), (this->field_0x20a & 255)) == 0) goto L_3f30; */
        /* ((dNpc_PathRun_c*)((_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1844)))->setInfDrct(dPath_GetNextRoomPath(((dNpc_PathRun_c*)((_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1844)))->nextPath(this->field_0x20a), (this->field_0x20a & 255))); */
        /* L_3f30:; */
        /* if (/ * beq * / 1) goto L_3f68; */
        /* if ((this->field_0x0 & 16777215) < (((dNpc_PathRun_c*)((_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1844)))->maxPoint() & 16777215)) goto L_3f64; */
        /* L_3f64:; */
        /* field_0x739 = ((((dNpc_PathRun_c*)((_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1844)))->maxPoint() + -1) & 16777215); */
        /* L_3f68:; */
        /* return _restgpr_28(((dNpc_PathRun_c*)((_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1844)))->maxPoint()); */
}

/* 0000406C-000040BC       .text eInit_END_MOV___11daNpc_Bj1_cFv */
void daNpc_Bj1_c::eInit_END_MOV_() {
    ((daNpc_Bj1_c*)(arg0))->setAnm_NUM(0);
    /* field_0x8aa = 0; */
    /* field_0x80c = 0; */
    /* field_0x254 = 0; */
    /* field_0x814 = 0; */
    return C_@4250;
}

/* 000040BC-000040F4       .text eInit_SET_TNE___11daNpc_Bj1_cFv */
void daNpc_Bj1_c::eInit_SET_TNE_() {
    setAnm_NUM();
}

/* 000040F4-00004114       .text eInit_DEL_TNE___11daNpc_Bj1_cFv */
void daNpc_Bj1_c::eInit_DEL_TNE_() {
    deleteSeed();
}

/* 00004114-0000417C       .text eInit_SET_ANM___11daNpc_Bj1_cFPiPf */
void daNpc_Bj1_c::eInit_SET_ANM_(int*, float*) {
    /* if (arg1 != 0) { */
        /* if (/ * blt * / 1) goto L_4078; */
        /* if (arg1 < 11) goto L_4078; */
        /* ((daNpc_Bj1_c*)(arg0))->setAnm_NUM(arg1); */
        /* if (arg2 != 0) goto L_4078; */
    /* L_4078:; */
    /* return ((mDoExt_McaMorf*)(this->field_0x330))->setMorf(); */

/* 0000417C-000044E4       .text event_actionInit__11daNpc_Bj1_cFi */
void daNpc_Bj1_c::event_actionInit(int) {
    /* _savegpr_23(this, int, arg2, arg3, arg4, arg5, arg6, arg7); */
    if (((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMySubstanceP() != 0) {
        /* field_0x850 = 0; */
        /* if ((this->field_0x8ac & 255) <= 9) goto L_43e0; */
        ((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMySubstanceP();
        /* field_0x850 = 1; */
        /* eInit_ATTENTION(_savegpr_23(this, int, arg2, arg3, arg4, arg5, arg6, arg7), ((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMySubstanceP(), ((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMySubstanceP(), ((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMySubstanceP(), ((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMySubstanceP(), ((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMySubstanceP(), ((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMySubstanceP()); */
        /* goto L_43e0; */
        eInit_PLYER_MOV_1();
        /* goto L_43e0; */
        ((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMySubstanceP();
        /* field_0x850 = 1; */
        /* eInit_MOV(_savegpr_23(this, int, arg2, arg3, arg4, arg5, arg6, arg7), ((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMySubstanceP(), ((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMySubstanceP(), ((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMySubstanceP()); */
        /* goto L_43e0; */
        ((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMySubstanceP();
        /* field_0x850 = 1; */
        /* eInit_JMP(_savegpr_23(this, int, arg2, arg3, arg4, arg5, arg6, arg7), ((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMySubstanceP()); */
        /* goto L_43e0; */
        /* eInit_CHG_PTH(_savegpr_23(this, int, arg2, arg3, arg4, arg5, arg6, arg7), ((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMySubstanceP()); */
        /* goto L_43e0; */
        eInit_END_MOV();
        /* goto L_43e0; */
        eInit_SET_TNE();
        /* goto L_43e0; */
        eInit_DEL_TNE();
        /* goto L_43e0; */
    }
    /* L_43e0:; */
    /* return _restgpr_23(eInit_SET_ANM(_savegpr_23(this, int, arg2, arg3, arg4, arg5, arg6, arg7), ((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMySubstanceP())); */
}

/* 000044E4-00004530       .text eMove_ATTENTION___11daNpc_Bj1_cFv */
void daNpc_Bj1_c::eMove_ATTENTION_() {
    if (this->field_0x830 >= 0) {
    }
    return (this->field_0x29a >> 5);
}

/* 00004530-00004580       .text eMove_MOV___11daNpc_Bj1_cFv */
void daNpc_Bj1_c::eMove_MOV_() {
    if (this->field_0x830 >= 0) {
    }
    /* return ((1 - this->field_0x84a) >> 5); */
}

/* 00004580-00004594       .text eMove_JMP___11daNpc_Bj1_cFv */
void daNpc_Bj1_c::eMove_JMP_() {
    /* return (s8)*(u8*)(this+2217) == 0; */
}

/* 00004594-000045F0       .text eMove_SET_TNE___11daNpc_Bj1_cFv */
void daNpc_Bj1_c::eMove_SET_TNE_() {
    /* if (((J3DFrameCtrl*)((this->field_0x330 + 88)))->checkPass(C_@6068, arg2, arg3, arg4, arg5, arg6, arg7) != 0) { */
        /* ((daNpc_Bj1_c*)(arg0))->createSeed(); */
    return (this->field_0x83c & 255);
}

/* 000045F0-00004678       .text eMove_PTH_MOV___11daNpc_Bj1_cFv */
void daNpc_Bj1_c::eMove_PTH_MOV_() {
        /* if (/ * bne * / 1) goto L_4570; */
        /* if (this->field_0x84a == 0) goto L_4568; */
        getPoint((arg0 + 1844));
        /* field_0x7d8 = 0; */
        /* field_0x7dc = 0; */
        /* field_0x7e0 = 0; */
        /* L_4568:; */
        /* field_0x84a = 0; */
        /* L_4570:; */
        return ((this->field_0x8aa & 255) >> 5);
}

/* 00004678-000046E8       .text event_action__11daNpc_Bj1_cFv */
void daNpc_Bj1_c::event_action() {
    if ((this->field_0x8ac & 255) <= 9) {
        eMove_ATTENTION();
        /* goto L_45ec; */
        eMove_MOV();
        /* goto L_45ec; */
        eMove_JMP();
        /* goto L_45ec; */
        eMove_SET_TNE();
        /* goto L_45ec; */
    }
    /* L_45ec:; */
    return 1;
}

/* 000046E8-000047D4       .text privateCut__11daNpc_Bj1_cFi */
void daNpc_Bj1_c::privateCut(int) {
        /* _savegpr_29(this, int, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* if (/ * beq * / 1) goto L_46d0; */
        /* field_0x8ab = ((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMyActIdx(); */
        /* if ((this->field_0x8ab & 255) != -1) goto L_466c; */
        ((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->cutEnd();
        /* goto L_46d0; */
        /* L_466c:; */
        /* if (((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getIsAddvance() == 0) goto L_469c; */
        /* if (this->field_0x8ab == 0) goto L_4690; */
        /* goto L_469c; */
        /* L_4690:; */
        /* ((daNpc_Bj1_c*)(_savegpr_29(this, int, arg2, arg3, arg4, arg5, arg6, arg7)))->event_actionInit(); */
        /* L_469c:; */
        /* if (this->field_0x8ab == 0) goto L_46ac; */
        /* goto L_46b8; */
        /* L_46ac:; */
        /* ((daNpc_Bj1_c*)(_savegpr_29(this, int, arg2, arg3, arg4, arg5, arg6, arg7)))->event_action(); */
        /* goto L_46bc; */
        /* L_46b8:; */
        /* L_46bc:; */
        /* if (1 == 0) goto L_46d0; */
        /* L_46d0:; */
        return _restgpr_29(((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->cutEnd());
}

/* 000047D4-000047F4       .text endEvent__11daNpc_Bj1_cFv */
void daNpc_Bj1_c::endEvent() {
    /* field_0x8ad = 255; */
    return this;
}

/* 000047F4-0000482C       .text isEventEntry__11daNpc_Bj1_cFv */
void daNpc_Bj1_c::isEventEntry() {
    /* return ((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMyStaffId(this->field_0x73c, 0, 0, arg4); */
}

/* 0000482C-00004914       .text event_proc__11daNpc_Bj1_cFi */
void daNpc_Bj1_c::event_proc(int) {
        /* if (((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->endCheck(this->field_0x826) == 0) goto L_47ec; */
        /* if (this->field_0x82c == 1) goto L_47bc; */
        /* if (/ * bge * / 1) goto L_47a0; */
        /* if (this->field_0x82c >= 0) goto L_47ac; */
        /* goto L_47e0; */
        /* L_47a0:; */
        /* if (this->field_0x82c >= 3) goto L_47e0; */
        /* goto L_47cc; */
        /* L_47ac:; */
        /* field_0x8b0 = 1; */
        /* field_0x842 = 1; */
        /* goto L_47e0; */
        /* L_47bc:; */
        /* field_0x8b0 = 1; */
        /* field_0x843 = 1; */
        /* goto L_47e0; */
        /* L_47cc:; */
        ((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->onEventBit(10498);
        /* L_47e0:; */
        endEvent();
        /* goto L_4810; */
        /* L_47ec:; */
        /* if (((dNpc_EventCut_c*)((this + 1852)))->cutProc() != 0) goto L_4808; */
        privateCut(int);
        /* L_4808:; */
        /* L_4810:; */
        return lookBack();
}

/* 00004914-000049C0       .text set_action__11daNpc_Bj1_cFM11daNpc_Bj1_cFPCvPvPv_iPv */
void daNpc_Bj1_c::set_action(int (daNpc_Bj1_c::*)(void*), void*) {
        /* if (__ptmf_cmpr((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1784)) == 0) goto L_48b8; */
        /* if (__ptmf_test((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1784)) == 0) goto L_4884; */
        /* field_0x8b6 = 9; */
        /* __ptmf_scall(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* L_4884:; */
        /* field_0x8b6 = 0; */
        /* __ptmf_scall(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* L_48b8:; */
        return _restgpr_29(1);
}

/* 000049C0-00004B60       .text setStt__11daNpc_Bj1_cFSc */
void daNpc_Bj1_c::setStt(signed char) {
        /* field_0x832 = 0; */
        /* field_0x8b1 = char; */
        /* if ((this->field_0x8b1 & 255) > 8) goto L_4a54; */
        /* if (this->field_0x8b5 != 4) goto L_4950; */
        /* if (searchByID(this->field_0x7a8) == 0) goto L_4950; */
        /* field_0x84b = (this->field_0x2ba + -1); */
        /* L_4950:; */
        /* field_0x8ad = 255; */
        /* field_0x8b3 = 1; */
        /* field_0x29a = 1; */
        /* goto L_4a5c; */
        /* field_0x80c = 0; */
        /* field_0x814 = 0; */
        gravity = 0;
        /* field_0x8a8 = 6; */
        /* ((daNpc_Bj1_c*)(this->field_0x2ba))->setAnm_prp(1, ((char*)&l_HIO + 0)); */
        /* field_0x84c = 1; */
        /* goto L_4a54; */
        /* field_0x8b3 = 1; */
        /* field_0x856 = 1; */
        /* field_0x80c = 0; */
        /* goto L_4a54; */
        /* field_0x834 = 90; */
        /* goto L_4a54; */
        /* field_0x80c = 0; */
        /* field_0x814 = 0; */
        /* field_0x81c = 0; */
        /* field_0x8aa = 1; */
        /* L_4a54:; */
        /* L_4a5c:; */
        return setAnm();
}

/* 00004B60-00004C30       .text wait_1__11daNpc_Bj1_cFv */
void daNpc_Bj1_c::wait_1() {
        /* if ((this->field_0x8b0 & 255) == 1) goto L_4aa0; */
        /* if ((this->field_0x8b0 & 255) < 3) goto L_4aa8; */
        /* L_4aa0:; */
        return 1;
        /* L_4aa8:; */
        /* if (this->field_0x855 == 0) goto L_4ad4; */
        /* if (((daNpc_Bj1_c*)(1))->chk_talk() == 0) goto L_4acc; */
        setStt(2);
        /* L_4acc:; */
        return 1;
        /* L_4ad4:; */
        /* field_0x8b0 = 2; */
        /* if (this->field_0x854 == 0) goto L_4af0; */
        /* field_0x832 = 60; */
        /* L_4af0:; */
        /* if (cLib_calcTimer<s>__FPs((this + 2098)) == 0) goto L_4b14; */
        /* field_0x8b3 = 1; */
        /* field_0x856 = 0; */
        /* goto L_4b2c; */
        /* L_4b14:; */
        /* field_0x8b3 = 3; */
        /* field_0x29a = 1; */
        /* L_4b2c:; */
        return 1;
}

/* 00004C30-00004D10       .text wait_2__11daNpc_Bj1_cFv */
void daNpc_Bj1_c::wait_2() {
        /* if ((this->field_0x8b0 & 255) == 1) goto L_4b70; */
        /* if ((this->field_0x8b0 & 255) < 3) goto L_4b78; */
        /* L_4b70:; */
        return 1;
        /* L_4b78:; */
        /* if (this->field_0x855 == 0) goto L_4ba4; */
        /* if (((daNpc_Bj1_c*)(1))->chk_talk() == 0) goto L_4b9c; */
        setStt(2);
        /* L_4b9c:; */
        return 1;
        /* L_4ba4:; */
        /* field_0x8b0 = 2; */
        /* if (this->field_0x854 == 0) goto L_4bc8; */
        /* field_0x832 = 60; */
        /* field_0x834 = 90; */
        /* L_4bc8:; */
        /* if (cLib_calcTimer<s>__FPs((this + 2098)) == 0) goto L_4bf0; */
        /* field_0x8b3 = 1; */
        /* field_0x856 = 0; */
        return 1;
        /* L_4bf0:; */
        /* if (cLib_calcTimer<s>__FPs((this + 2100)) != 0) goto L_4c0c; */
        setStt(3);
        /* L_4c0c:; */
        return 1;
}

/* 00004D10-00004E2C       .text wait_3__11daNpc_Bj1_cFv */
void daNpc_Bj1_c::wait_3() {
        cLib_addCalcAngleS((this + 518), this->field_0x7ba, this->field_0x5e, this->field_0x60, 0);
        /* if ((this->field_0x8b0 & 255) == 1) goto L_4c80; */
        /* if ((this->field_0x8b0 & 255) < 3) goto L_4c88; */
        /* L_4c80:; */
        return 1;
        /* L_4c88:; */
        /* if (this->field_0x855 == 0) goto L_4cb8; */
        /* if (chk_talk() == 0) goto L_4cb0; */
        setStt(2);
        /* L_4cb0:; */
        return 1;
        /* L_4cb8:; */
        /* field_0x8b0 = 2; */
        /* if (this->field_0x854 == 0) goto L_4cd4; */
        /* field_0x832 = 60; */
        /* L_4cd4:; */
        /* if (cLib_calcTimer<s>__FPs((this + 2098)) == 0) goto L_4d10; */
        /* if (chk_drct(C_@6256) == 0) goto L_4d10; */
        /* field_0x8b3 = 1; */
        /* field_0x856 = 0; */
        /* goto L_4d28; */
        /* L_4d10:; */
        /* field_0x8b3 = 3; */
        /* field_0x29a = 1; */
        /* L_4d28:; */
        return 1;
}

/* 00004E2C-00004F48       .text wait_4__11daNpc_Bj1_cFv */
void daNpc_Bj1_c::wait_4() {
        /* if ((this->field_0x8b0 & 255) == 1) goto L_4d6c; */
        /* if ((this->field_0x8b0 & 255) < 3) goto L_4d74; */
        /* L_4d6c:; */
        return 1;
        /* L_4d74:; */
        /* if (this->field_0x855 == 0) goto L_4da0; */
        /* if (((daNpc_Bj1_c*)(1))->chk_talk() == 0) goto L_4d98; */
        setStt(2);
        /* L_4d98:; */
        return 1;
        /* L_4da0:; */
        /* if (((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->isEventBit(10498) != 0) goto L_4dec; */
        /* if (((dSv_player_get_item_c*)(((char*)&g_dComIfG_gameInfo + 81)))->isItem(6, 0) == 0) goto L_4dec; */
        /* field_0x8b0 = 5; */
        return 1;
        /* L_4dec:; */
        /* field_0x8b0 = 2; */
        /* if (this->field_0x854 == 0) goto L_4e08; */
        /* field_0x832 = 60; */
        /* L_4e08:; */
        /* if (cLib_calcTimer<s>__FPs((this + 2098)) == 0) goto L_4e2c; */
        /* field_0x8b3 = 1; */
        /* field_0x856 = 0; */
        /* goto L_4e44; */
        /* L_4e2c:; */
        /* field_0x8b3 = 3; */
        /* field_0x29a = 1; */
        /* L_4e44:; */
        return 1;
}

/* 00004F48-000050CC       .text flyMov__11daNpc_Bj1_cFv */
void daNpc_Bj1_c::flyMov() {
        /* _savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* field_0x8b0 = 0; */
        /* field_0x849 = 0; */
        /* if (this->field_0x8a8 != 1) goto L_4fbc; */
        /* if (cLib_calcTimer<s>__FPs((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 2094)) == 0) goto L_4eb4; */
        return 1;
        /* L_4eb4:; */
        __mi();
        PSVECSquareMag();
        /* if (/ * ble * / 1) goto L_4f58; */
        /* goto L_4f5c; */
        /* L_4f58:; */
        /* L_4f5c:; */
        /* abs(((this->field_0x206 - cLib_targetAngleY((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 504), (this->field_0x5b38 + 504))) & 65535)); */
        /* if (/ * bge * / 1) goto L_4fbc; */
        /* if ((abs(((this->field_0x206 - cLib_targetAngleY((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 504), (this->field_0x5b38 + 504))) & 65535)) & 65535) >= this->field_0x5c) goto L_4fbc; */
        /* ((daNpc_Bj1_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->setStt(4); */
        /* L_4fbc:; */
        return _restgpr_29(1);
}

/* 000050CC-0000514C       .text fall01__11daNpc_Bj1_cFv */
void daNpc_Bj1_c::fall01() {
    /* field_0x8b0 = 0; */
    /* field_0x849 = 0; */
    if (this->field_0x8a8 != 0) {
        /* setStt(5, arg2, arg3, arg4, arg5, arg6, arg7); */
        return 1;
    }
    if (/* bne */ 1) {
        /* if (/ * bne * / 1) goto L_504c; */
        speedF = 0;
        /* field_0x8a8 = 2; */
    }
    /* L_504c:; */
    return 1;
}

/* 0000514C-00005510       .text talk_1__11daNpc_Bj1_cFv */
void daNpc_Bj1_c::talk_1() {
        /* ((daNpc_Bj1_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->chk_partsNotMove(); */
        /* ((fopNpc_npc_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->talk(1); */
        /* if (this->field_0x6b0 == 0) goto L_5408; */
        /* if (this->field_0xf8 == 6) goto L_5408; */
        /* if (/ * bge * / 1) goto L_50b4; */
        /* if (this->field_0xf8 == 2) goto L_5408; */
        /* goto L_5408; */
        /* L_50b4:; */
        /* if (this->field_0xf8 == 19) goto L_50c0; */
        /* goto L_5408; */
        /* L_50c0:; */
        /* if (this->field_0x6a4 == 5149) goto L_52b0; */
        /* if (/ * bge * / 1) goto L_5160; */
        /* if (this->field_0x6a4 == 5124) goto L_5280; */
        /* if (/ * bge * / 1) goto L_5118; */
        /* if (this->field_0x6a4 == 5110) goto L_5268; */
        /* if (/ * bge * / 1) goto L_5100; */
        /* if (this->field_0x6a4 == 5107) goto L_5220; */
        /* if (/ * bge * / 1) goto L_53dc; */
        /* if (this->field_0x6a4 == 5103) goto L_5354; */
        /* goto L_53dc; */
        /* L_5100:; */
        /* if (this->field_0x6a4 == 5118) goto L_5250; */
        /* if (/ * bge * / 1) goto L_53dc; */
        /* if (this->field_0x6a4 == 5113) goto L_5238; */
        /* goto L_53dc; */
        /* L_5118:; */
        /* if (this->field_0x6a4 == 5135) goto L_51d8; */
        /* if (/ * bge * / 1) goto L_5148; */
        /* if (this->field_0x6a4 == 5129) goto L_533c; */
        /* if (/ * bge * / 1) goto L_513c; */
        /* if (this->field_0x6a4 >= 5128) goto L_5298; */
        /* goto L_53dc; */
        /* L_513c:; */
        /* if (this->field_0x6a4 == 5132) goto L_5324; */
        /* goto L_53dc; */
        /* L_5148:; */
        /* if (this->field_0x6a4 == 5139) goto L_5208; */
        /* if (/ * bge * / 1) goto L_53dc; */
        /* if (this->field_0x6a4 >= 5137) goto L_53dc; */
        /* goto L_51f0; */
        /* L_5160:; */
        /* if (this->field_0x6a4 == 5251) goto L_53a4; */
        /* if (/ * bge * / 1) goto L_51a8; */
        /* if (this->field_0x6a4 == 5163) goto L_52f4; */
        /* if (/ * bge * / 1) goto L_5190; */
        /* if (this->field_0x6a4 == 5161) goto L_52d4; */
        /* if (/ * bge * / 1) goto L_53dc; */
        /* if (this->field_0x6a4 == 5158) goto L_52c8; */
        /* goto L_53dc; */
        /* L_5190:; */
        /* if (this->field_0x6a4 == 5170) goto L_530c; */
        /* if (/ * bge * / 1) goto L_53dc; */
        /* if (this->field_0x6a4 == 5167) goto L_5300; */
        /* goto L_53dc; */
        /* L_51a8:; */
        /* if (this->field_0x6a4 == 5267) goto L_536c; */
        /* if (/ * bge * / 1) goto L_51cc; */
        /* if (this->field_0x6a4 == 5257) goto L_53cc; */
        /* if (/ * bge * / 1) goto L_53dc; */
        /* if (this->field_0x6a4 == 5253) goto L_53b8; */
        /* goto L_53dc; */
        /* L_51cc:; */
        /* if (this->field_0x6a4 == 5277) goto L_536c; */
        /* goto L_53dc; */
        /* L_51d8:; */
        ((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->onEventBit(1540);
        /* goto L_53dc; */
        /* L_51f0:; */
        ((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->onEventBit(2308);
        /* goto L_53dc; */
        /* L_5208:; */
        ((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->onEventBit(3200);
        /* goto L_53dc; */
        /* L_5220:; */
        ((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->onEventBit(2336);
        /* goto L_53dc; */
        /* L_5238:; */
        ((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->onEventBit(3104);
        /* goto L_53dc; */
        /* L_5250:; */
        ((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->onEventBit(3080);
        /* goto L_53dc; */
        /* L_5268:; */
        ((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->onEventBit(3076);
        /* goto L_53dc; */
        /* L_5280:; */
        ((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->onEventBit(3074);
        /* goto L_53dc; */
        /* L_5298:; */
        ((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->onEventBit(3392);
        /* goto L_53dc; */
        /* L_52b0:; */
        ((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->onEventBit(3336);
        /* goto L_53dc; */
        /* L_52c8:; */
        /* field_0x840 = 1; */
        /* goto L_53dc; */
        /* L_52d4:; */
        /* field_0x5b7e = (this->field_0x5b7e + -4); */
        /* field_0x8b0 = 3; */
        /* goto L_53dc; */
        /* L_52f4:; */
        /* field_0x8b0 = 4; */
        /* goto L_53dc; */
        /* L_5300:; */
        /* field_0x841 = 1; */
        /* goto L_53dc; */
        /* L_530c:; */
        ((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->onEventBit(7296);
        /* goto L_53dc; */
        /* L_5324:; */
        ((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->onEventBit(3344);
        /* goto L_53dc; */
        /* L_533c:; */
        ((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->onEventBit(3360);
        /* goto L_53dc; */
        /* L_5354:; */
        ((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->onEventBit(3088);
        /* goto L_53dc; */
        /* L_536c:; */
        ((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->onEventBit(11792);
        ((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->onEventBit(7488);
        /* ((daNpc_Bj1_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->setReg(); */
        /* goto L_53dc; */
        /* L_53a4:; */
        /* ((daNpc_Bj1_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->setReg(); */
        /* goto L_53dc; */
        /* L_53b8:; */
        /* ((daNpc_Bj1_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->setReg(); */
        /* goto L_53dc; */
        /* L_53cc:; */
        /* ((daNpc_Bj1_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->setReg(); */
        /* L_53dc:; */
        /* field_0x83e = 255; */
        /* field_0x855 = 0; */
        /* ((daNpc_Bj1_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->setStt(this->field_0x8b2); */
        /* field_0x832 = 60; */
        /* ((daNpc_Bj1_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->endEvent(); */
        /* L_5408:; */
        /* return _restgpr_29((((daNpc_Bj1_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->chk_partsNotMove() & 16777215)); */
}

/* 00005510-000055D8       .text walk_1__11daNpc_Bj1_cFv */
void daNpc_Bj1_c::walk_1() {
    /* field_0x84a = 0; */
    if (this->field_0x8aa != 0) {
        /* field_0x7ac = 0; */
        /* field_0x7b0 = 0; */
        /* field_0x7b4 = 0; */
        /* field_0x80c = 0; */
        /* field_0x814 = 0; */
        speedF = 0;
        /* setStt(7, arg2, arg3, arg4, arg5, arg6, arg7); */
        return 1;
    }
    getPoint((this + 1844));
    /* field_0x7d8 = 0; */
    /* field_0x7dc = 0; */
    /* field_0x7e0 = 0; */
    /* field_0x856 = 1; */
    return 1;
}

/* 000055D8-00005694       .text wait_action1__11daNpc_Bj1_cFPv */
void daNpc_Bj1_c::wait_action1(void*) {
        /* if ((this->field_0x8b6 & 255) >= 4) goto L_5520; */
        /* if ((this->field_0x8b6 & 255) == 0) goto L_552c; */
        /* if (/ * bge * / 1) goto L_5544; */
        /* goto L_5590; */
        /* L_5520:; */
        /* if ((this->field_0x8b6 & 255) == 9) goto L_5590; */
        /* goto L_5590; */
        /* L_552c:; */
        /* setStt(1, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* field_0x8b6 = (this->field_0x8b6 + 1); */
        /* goto L_5590; */
        /* L_5544:; */
        /* field_0x854 = ((daNpc_Bj1_c*)(this->field_0x8b6))->chkAttention(); */
        /* if ((this->field_0x8b1 & 255) == 2) goto L_557c; */
        /* if (/ * bge * / 1) goto L_5588; */
        /* if ((this->field_0x8b1 & 255) >= 1) goto L_556c; */
        /* goto L_5588; */
        /* L_556c:; */
        /* field_0x850 = wait_1(); */
        /* goto L_5588; */
        /* L_557c:; */
        /* field_0x850 = talk_1(); */
        /* L_5588:; */
        lookBack();
        /* L_5590:; */
        return 1;
}

/* 00005694-0000577C       .text wait_action2__11daNpc_Bj1_cFPv */
void daNpc_Bj1_c::wait_action2(void*) {
        /* if ((this->field_0x8b6 & 255) >= 4) goto L_55dc; */
        /* if ((this->field_0x8b6 & 255) == 0) goto L_55e8; */
        /* if (/ * bge * / 1) goto L_5600; */
        /* goto L_5678; */
        /* L_55dc:; */
        /* if ((this->field_0x8b6 & 255) == 9) goto L_5678; */
        /* goto L_5678; */
        /* L_55e8:; */
        /* setStt(5, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* field_0x8b6 = (this->field_0x8b6 + 1); */
        /* goto L_5678; */
        /* L_5600:; */
        /* field_0x854 = ((daNpc_Bj1_c*)(this->field_0x8b6))->chkAttention(); */
        /* if ((this->field_0x8b1 & 255) == 4) goto L_5654; */
        /* if (/ * bge * / 1) goto L_562c; */
        /* if ((this->field_0x8b1 & 255) == 2) goto L_5664; */
        /* if (/ * bge * / 1) goto L_5644; */
        /* goto L_5670; */
        /* L_562c:; */
        /* if ((this->field_0x8b1 & 255) >= 6) goto L_5670; */
        /* field_0x850 = wait_2(); */
        /* goto L_5670; */
        /* L_5644:; */
        /* field_0x850 = flyMov(); */
        /* goto L_5670; */
        /* L_5654:; */
        /* field_0x850 = fall01(); */
        /* goto L_5670; */
        /* L_5664:; */
        /* field_0x850 = talk_1(); */
        /* L_5670:; */
        lookBack();
        /* L_5678:; */
        return 1;
}

/* 0000577C-00005860       .text wait_action3__11daNpc_Bj1_cFPv */
void daNpc_Bj1_c::wait_action3(void*) {
        /* if ((this->field_0x8b6 & 255) >= 4) goto L_56c4; */
        /* if ((this->field_0x8b6 & 255) == 0) goto L_56d0; */
        /* if (/ * bge * / 1) goto L_56f4; */
        /* goto L_575c; */
        /* L_56c4:; */
        /* if ((this->field_0x8b6 & 255) == 9) goto L_575c; */
        /* goto L_575c; */
        /* L_56d0:; */
        set_pthPoint(0);
        setStt(6);
        /* field_0x8b6 = (this->field_0x8b6 + 1); */
        /* goto L_575c; */
        /* L_56f4:; */
        /* field_0x854 = ((daNpc_Bj1_c*)(this->field_0x8b6))->chkAttention(); */
        /* if ((this->field_0x8b1 & 255) == 6) goto L_5728; */
        /* if (/ * bge * / 1) goto L_571c; */
        /* if ((this->field_0x8b1 & 255) == 2) goto L_5748; */
        /* goto L_5754; */
        /* L_571c:; */
        /* if ((this->field_0x8b1 & 255) >= 8) goto L_5754; */
        /* goto L_5738; */
        /* L_5728:; */
        /* field_0x850 = walk_1(); */
        /* goto L_5754; */
        /* L_5738:; */
        /* field_0x850 = wait_3(); */
        /* goto L_5754; */
        /* L_5748:; */
        /* field_0x850 = talk_1(); */
        /* L_5754:; */
        lookBack();
        /* L_575c:; */
        return 1;
}

/* 00005860-00005928       .text wait_action4__11daNpc_Bj1_cFPv */
void daNpc_Bj1_c::wait_action4(void*) {
        /* if ((this->field_0x8b6 & 255) >= 4) goto L_57a8; */
        /* if ((this->field_0x8b6 & 255) == 0) goto L_57b4; */
        /* if (/ * bge * / 1) goto L_57d8; */
        /* goto L_5824; */
        /* L_57a8:; */
        /* if ((this->field_0x8b6 & 255) == 9) goto L_5824; */
        /* goto L_5824; */
        /* L_57b4:; */
        set_pthPoint(0);
        setStt(8);
        /* field_0x8b6 = (this->field_0x8b6 + 1); */
        /* goto L_5824; */
        /* L_57d8:; */
        /* field_0x854 = ((daNpc_Bj1_c*)(this->field_0x8b6))->chkAttention(); */
        /* if ((this->field_0x8b1 & 255) == 8) goto L_5800; */
        /* if (/ * bge * / 1) goto L_581c; */
        /* if ((this->field_0x8b1 & 255) == 2) goto L_5810; */
        /* goto L_581c; */
        /* L_5800:; */
        /* field_0x850 = wait_4(); */
        /* goto L_581c; */
        /* L_5810:; */
        /* field_0x850 = talk_1(); */
        /* L_581c:; */
        lookBack();
        /* L_5824:; */
        return 1;
}

/* 00005928-000059C4       .text demo__11daNpc_Bj1_cFv */
void daNpc_Bj1_c::demo() {
    if (demoActorID == 0) {
        /* if (this->field_0x857 != 0) goto L_58c0; */
        /* field_0x857 = 0; */
    } else {
        /* field_0x857 = 1; */
        ((dDemo_object_c*)((this->field_0x5abc + 32)))->getActor(demoActorID);
        dDemo_setDemoData(this, 106, this->field_0x330, ((char*)&@stringBase0 + 64), 0, 0, 0, 0);
    }
    /* L_58c0:; */
    /* return this->field_0x857; */
}

/* 000059C4-00005AC4       .text shadowDraw__11daNpc_Bj1_cFv */
void daNpc_Bj1_c::shadowDraw() {
        /* field_0x6e0 = dComIfGd_setShadow(this->field_0x6e0, 1, this->field_0x50); */
        /* if (this->field_0x6e0 == 0) goto L_59c4; */
        /* if (this->field_0x6d4 == 0) goto L_597c; */
        /* ((dDlst_shadowControl_c*)(((char*)&g_dComIfG_gameInfo + 24416)))->addReal(this->field_0x6e0, this->field_0x6d4); */
        /* L_597c:; */
        /* if (this->field_0x6d8 == 0) goto L_599c; */
        /* ((dDlst_shadowControl_c*)(((char*)&g_dComIfG_gameInfo + 24416)))->addReal(this->field_0x6e0, this->field_0x6d8); */
        /* L_599c:; */
        /* if (this->field_0x84c == 0) goto L_59c4; */
        /* L_59c4:; */
        /* return ((dDlst_shadowControl_c*)(((char*)&g_dComIfG_gameInfo + 24416)))->addReal(this->field_0x6e0, this->field_0x50); */
}

/* 00005AC4-00005E38       .text _draw__11daNpc_Bj1_cFv */
BOOL daNpc_Bj1_c::_draw() {
        /* if (this->field_0x844 != 0) goto L_5a10; */
        /* if (this->field_0x845 == 0) goto L_5a18; */
        /* L_5a10:; */
        return 1;
        /* L_5a18:; */
        ((dScnKy_env_light_c*)(((char*)&g_env_light + 0)))->settingTevStruct(0, (this + 504), (this + 268));
        ((dScnKy_env_light_c*)(((char*)&g_env_light + 0)))->setLightTevColorType(this->field_0x50, (this + 268));
        /* if ((this->field_0x8b4 & 255) > 8) goto L_5adc; */
        /* ((mDoExt_McaMorf*)(this->field_0x330))->entryDL(((dRes_control_c*)(((char*)&@stringBase0 + 64)))->getIDRes(23, ((char*)&g_dComIfG_gameInfo + -16460), 64)); */
        /* goto L_5ae4; */
        /* ((mDoExt_McaMorf*)(this->field_0x330))->entryDL(((dRes_control_c*)(((char*)&@stringBase0 + 64)))->getIDRes(24, ((char*)&g_dComIfG_gameInfo + -16460), 64)); */
        /* goto L_5ae4; */
        /* L_5adc:; */
        /* ((mDoExt_McaMorf*)(this->field_0x330))->entryDL(); */
        /* L_5ae4:; */
        /* if (this->field_0x6d4 == 0) goto L_5b08; */
        ((dScnKy_env_light_c*)(((char*)&g_env_light + 0)))->setLightTevColorType(this->field_0x6d4, (this + 268));
        /* mDoExt_modelEntryDL(this->field_0x6d4); */
        /* L_5b08:; */
        /* if (this->field_0x6d8 == 0) goto L_5b2c; */
        ((dScnKy_env_light_c*)(((char*)&g_env_light + 0)))->setLightTevColorType(this->field_0x6d8, (this + 268));
        /* mDoExt_modelEntryDL(this->field_0x6d8); */
        /* L_5b2c:; */
        ((dScnKy_env_light_c*)(((char*)&g_env_light + 0)))->setLightTevColorType(this->field_0x6d0, (this + 268));
        /* mDoExt_modelEntryDL(this->field_0x6d0); */
        /* if (this->field_0x84c == 0) goto L_5b74; */
        ((dScnKy_env_light_c*)(((char*)&g_env_light + 0)))->setLightTevColorType(this->field_0x50, (this + 268));
        /* ((mDoExt_McaMorf*)(this->field_0x6e4))->entryDL(); */
        /* L_5b74:; */
        shadowDraw();
        /* if ((this->field_0x8b4 & 255) > 8) goto L_5cc0; */
        dSnap_RegistFig(157, this, C_@4539);
        /* goto L_5cc0; */
        dSnap_RegistFig(158, this, C_@4539);
        /* goto L_5cc0; */
        dSnap_RegistFig(159, this, C_@4539);
        /* goto L_5cc0; */
        dSnap_RegistFig(160, this, C_@4539);
        /* goto L_5cc0; */
        dSnap_RegistFig(161, this, C_@4539);
        /* goto L_5cc0; */
        dSnap_RegistFig(162, this, C_@4539);
        /* goto L_5cc0; */
        dSnap_RegistFig(163, this, C_@4539);
        /* goto L_5cc0; */
        dSnap_RegistFig(164, this, C_@4539);
        /* goto L_5cc0; */
        dSnap_RegistFig(165, this, C_@4539);
        /* L_5cc0:; */
        /* if (this->field_0x28 == 0) goto L_5d30; */
        /* if (this->field_0x8b5 != 6) goto L_5d10; */
        /* L_5d10:; */
        /* L_5d30:; */
        return 1;
}

/* 00005E38-00006128       .text _execute__11daNpc_Bj1_cFv */
BOOL daNpc_Bj1_c::_execute() {
        /* _savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* if (this->field_0x84e != 0) goto L_5db8; */
        /* field_0x7ac = 0; */
        /* field_0x7b0 = 0; */
        /* field_0x7b4 = 0; */
        /* field_0x84e = 1; */
        /* L_5db8:; */
        /* ((dNpc_JntCtrl_c*)((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 656)))->setParam(this->field_0x18, this->field_0x1a, this->field_0x1c, this->field_0x1e, this->field_0x10, this->field_0x12, this->field_0x14); */
        /* if (this->field_0x844 == 0) goto L_5e24; */
        /* if (demoActorID != 0) goto L_5e24; */
        return 1;
        /* L_5e24:; */
        /* field_0x847 = 0; */
        /* field_0x844 = 0; */
        /* ((daNpc_Bj1_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->partner_srch(); */
        /* ((daNpc_Bj1_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->checkOrder(); */
        /* if (((daNpc_Bj1_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->demo() != 0) goto L_5efc; */
        /* if (this->field_0x529a == 0) goto L_5e80; */
        /* if (this->field_0xf8 == 1) goto L_5e80; */
        /* L_5e80:; */
        /* if (((daNpc_Bj1_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->isEventEntry() < 0) goto L_5e94; */
        /* ((daNpc_Bj1_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->event_proc(((daNpc_Bj1_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->isEventEntry()); */
        /* goto L_5ea8; */
        /* L_5e94:; */
        /* __ptmf_scall(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7), 0); */
        /* L_5ea8:; */
        /* if (((daNpc_Bj1_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->bj_flyMove() != 0) goto L_5ec0; */
        /* ((daNpc_Bj1_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->bj_nMove(); */
        /* L_5ec0:; */
        /* if (this->field_0x847 != 0) goto L_5ed8; */
        /* fopAcM_posMoveF(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7), (_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1336)); */
        /* L_5ed8:; */
        /* if (this->field_0x846 != 0) goto L_5efc; */
        /* L_5efc:; */
        /* ((daNpc_Bj1_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->eventOrder(); */
        /* if (this->field_0x84c == 0) goto L_5ff8; */
        /* field_0x6f0 = (this->field_0x6f0 + this->field_0x6f2); */
        /* if (this->field_0x50 == 0) goto L_5fac; */
        /* if (/ * ble * / 1) goto L_5f94; */
        /* goto L_5f98; */
        /* L_5f94:; */
        /* L_5f98:; */
        /* if (/ * bge * / 1) goto L_5fa8; */
        /* goto L_5fac; */
        /* L_5fa8:; */
        /* L_5fac:; */
        /* ((JAIZelBasic*)(base))->seStart(20671, (_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 504), __cvt_fp2unsigned(dComIfGp_getReverb((this->field_0x20a & 255))), dComIfGp_getReverb((this->field_0x20a & 255)), 0); */
        /* L_5ff8:; */
        /* ((daNpc_Bj1_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->setMtx(0); */
        /* if (this->field_0x857 != 0) goto L_6018; */
        setCollision_SP();
        /* L_6018:; */
        return _restgpr_29(1);
}

/* 00006128-000061A4       .text _delete__11daNpc_Bj1_cFv */
BOOL daNpc_Bj1_c::_delete() {
        /* dComIfG_resDelete((this + 1732), ((char*)&@stringBase0 + 64), arg2); */
        /* if (heap == 0) goto L_6090; */
        /* if (this->field_0x330 == 0) goto L_6080; */
        /* ((mDoExt_McaMorf*)(this->field_0x330))->stopZelAnime(); */
        /* L_6080:; */
        /* if (this->field_0x6e4 == 0) goto L_6090; */
        /* ((mDoExt_McaMorf*)(this->field_0x6e4))->stopZelAnime(); */
        /* L_6090:; */
        delPrtcl_drugPot();
        delPrtcl_danceLR();
        return 1;
}

/* 000061A4-000061C4       .text CheckCreateHeap__FP10fopAc_ac_c */
static BOOL CheckCreateHeap(fopAc_ac_c* i_this) {
    ((daNpc_Bj1_c*)i_this)->CreateHeap();
    return TRUE;
}

/* 000061C4-000062E4       .text _create__11daNpc_Bj1_cFv */
cPhs_State daNpc_Bj1_c::_create() {
        /* _savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* if (/ * bne * / 1) goto L_611c; */
        /* if (_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) == 0) goto L_6110; */
        __ct();
        /* L_6110:; */
        /* L_611c:; */
        /* if (dComIfG_resLoad((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1732), ((char*)&@stringBase0 + 64)) == 4) goto L_6140; */
        /* goto L_61e0; */
        /* L_6140:; */
        /* if (((daNpc_Bj1_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->charDecide((this->field_0xb0 & 16777215)) != 0) goto L_6160; */
        return 5;
        /* L_6160:; */
        /* if (fopAcM_entrySolidHeap(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7), ((char*)&CheckCreateHeap__FP10fopAc_ac_c + 0), ((char*)&a_size_tbl$6742 + 0)) != 0) goto L_6198; */
        return 5;
        /* L_6198:; */
        cullMtx = (this->field_0x50 + 36);
        /* fopAcM_setCullSizeBox(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* if (((daNpc_Bj1_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->createInit() == 0) goto L_61e0; */
        /* L_61e0:; */
        /* return _restgpr_29(dComIfG_resLoad((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1732), ((char*)&@stringBase0 + 64))); */
}

/* 00006734-00006A00       .text create_Anm__11daNpc_Bj1_cFv */
void daNpc_Bj1_c::create_Anm() {
    /* _savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
    ((dRes_control_c*)(((char*)&@stringBase0 + 64)))->getIDRes(38);
    if (/* bne */ 1) {
        ((JUTAssertion*)(((JUTAssertion*)(((dRes_control_c*)(((char*)&@stringBase0 + 64)))->getIDRes(38)))->getSDevice()))->showAssert(((char*)&@stringBase0 + 164), 4298, ((char*)&@stringBase0 + 180));
        OSPanic(((char*)&@stringBase0 + 164), 4298, ((char*)&@stringBase0 + 195));
    }
    __nw(180);
    if (/* beq */ 1) {
    }
    /* field_0x330 = __ct(((dRes_control_c*)(((char*)&@stringBase0 + 64)))->getIDRes(10), 1); */
    if (this->field_0x330 == 0) {
        return 0;
    }
    if (this->field_0x50 == 0) {
        /* field_0x330 = 0; */
        return 0;
    }
    /* field_0x6cc = ((JUTNameTab*)(this->field_0x54))->getIndex(((char*)&@stringBase0 + 200)); */
    if (this->field_0x6cc != 0) {
        /* ((JUTAssertion*)(((JUTAssertion*)(((JUTNameTab*)(this->field_0x54))->getIndex(((char*)&@stringBase0 + 200))))->getSDevice()))->showAssert(((char*)&@stringBase0 + 164), 4318, ((char*)&@stringBase0 + 205)); */
        OSPanic(((char*)&@stringBase0 + 164), 4318, ((char*)&@stringBase0 + 195));
    }
    /* field_0x6cd = ((JUTNameTab*)(this->field_0x54))->getIndex(((char*)&@stringBase0 + 224)); */
    if (this->field_0x6cd != 0) {
        /* ((JUTAssertion*)(((JUTAssertion*)(((JUTNameTab*)(this->field_0x54))->getIndex(((char*)&@stringBase0 + 224))))->getSDevice()))->showAssert(((char*)&@stringBase0 + 164), 4321, ((char*)&@stringBase0 + 233)); */
        OSPanic(((char*)&@stringBase0 + 164), 4321, ((char*)&@stringBase0 + 195));
    }
    /* field_0x6ce = ((JUTNameTab*)(this->field_0x54))->getIndex(((char*)&@stringBase0 + 254)); */
    if (this->field_0x6ce != 0) {
        /* ((JUTAssertion*)(((JUTAssertion*)(((JUTNameTab*)(this->field_0x54))->getIndex(((char*)&@stringBase0 + 254))))->getSDevice()))->showAssert(((char*)&@stringBase0 + 164), 4324, ((char*)&@stringBase0 + 260)); */
        OSPanic(((char*)&@stringBase0 + 164), 4324, ((char*)&@stringBase0 + 195));
    }
    /* field_0x6cf = ((JUTNameTab*)(this->field_0x54))->getIndex(((char*)&@stringBase0 + 281)); */
    if (this->field_0x6cf != 0) {
        /* ((JUTAssertion*)(((JUTAssertion*)(((JUTNameTab*)(this->field_0x54))->getIndex(((char*)&@stringBase0 + 281))))->getSDevice()))->showAssert(((char*)&@stringBase0 + 164), 4327, ((char*)&@stringBase0 + 287)); */
    }
    return _restgpr_28(OSPanic(((char*)&@stringBase0 + 164), 4327, ((char*)&@stringBase0 + 195)));
}

/* 00006A00-00006C14       .text create_prp_Anm__11daNpc_Bj1_cFv */
void daNpc_Bj1_c::create_prp_Anm() {
    /* _savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
    ((dRes_control_c*)(((char*)&@stringBase0 + 64)))->getIDRes(41);
    if (/* bne */ 1) {
        ((JUTAssertion*)(((JUTAssertion*)(((dRes_control_c*)(((char*)&@stringBase0 + 64)))->getIDRes(41)))->getSDevice()))->showAssert(((char*)&@stringBase0 + 164), 4342, ((char*)&@stringBase0 + 180));
        OSPanic(((char*)&@stringBase0 + 164), 4342, ((char*)&@stringBase0 + 195));
    }
    __nw(180);
    if (/* beq */ 1) {
    }
    /* field_0x6e4 = __ct(((dRes_control_c*)(((char*)&@stringBase0 + 64)))->getIDRes(40), 1); */
    if (this->field_0x6e4 == 0) {
        return 0;
    }
    if (this->field_0x50 == 0) {
        /* field_0x6e4 = 0; */
        return 0;
    }
    /* field_0x6e8 = ((JUTNameTab*)(this->field_0x54))->getIndex(((char*)&@stringBase0 + 308)); */
    if (this->field_0x6e8 != 0) {
        /* ((JUTAssertion*)(((JUTAssertion*)(((JUTNameTab*)(this->field_0x54))->getIndex(((char*)&@stringBase0 + 308))))->getSDevice()))->showAssert(((char*)&@stringBase0 + 164), 4362, ((char*)&@stringBase0 + 315)); */
        OSPanic(((char*)&@stringBase0 + 164), 4362, ((char*)&@stringBase0 + 195));
    }
    /* field_0x6e9 = ((JUTNameTab*)(this->field_0x54))->getIndex(((char*)&@stringBase0 + 334)); */
    if (this->field_0x6e9 != 0) {
        /* ((JUTAssertion*)(((JUTAssertion*)(((JUTNameTab*)(this->field_0x54))->getIndex(((char*)&@stringBase0 + 334))))->getSDevice()))->showAssert(((char*)&@stringBase0 + 164), 4365, ((char*)&@stringBase0 + 340)); */
    }
    return _restgpr_28(OSPanic(((char*)&@stringBase0 + 164), 4365, ((char*)&@stringBase0 + 195)));
}

/* 00006C14-00006F54       .text create_itm_Mdl__11daNpc_Bj1_cFv */
void daNpc_Bj1_c::create_itm_Mdl() {
        /* _savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* field_0x6d4 = 0; */
        /* field_0x6d8 = 0; */
        /* field_0x6d0 = 0; */
        /* if (((this->field_0x8b4 & 255) << 2) < 0) goto L_6c84; */
        ((dRes_control_c*)(((char*)&@stringBase0 + 64)))->getIDRes((((this->field_0x8b4 & 255) << 2) & 65535), ((char*)&g_dComIfG_gameInfo + -16460), 64);
        /* if (/ * bne * / 1) goto L_6bdc; */
        ((JUTAssertion*)(((JUTAssertion*)(((dRes_control_c*)(((char*)&@stringBase0 + 64)))->getIDRes((((this->field_0x8b4 & 255) << 2) & 65535), ((char*)&g_dComIfG_gameInfo + -16460), 64)))->getSDevice()))->showAssert(((char*)&@stringBase0 + 164), 4421, ((char*)&@stringBase0 + 180));
        /* L_6bdc:; */
        /* field_0x6d4 = mDoExt_J3DModel(OSPanic(((char*)&@stringBase0 + 164), 4421, ((char*)&@stringBase0 + 195))); */
        /* if (this->field_0x6d4 != 0) goto L_6c0c; */
        /* goto L_6e50; */
        /* L_6c0c:; */
        /* if (((this->field_0x8b4 & 255) << 2) != 25) goto L_6c84; */
        /* field_0x6dc = ((JUTNameTab*)(this->field_0x54))->getIndex(((char*)&@stringBase0 + 361)); */
        /* if (this->field_0x6dc != 0) goto L_6c84; */
        /* ((JUTAssertion*)(((JUTAssertion*)(((JUTNameTab*)(this->field_0x54))->getIndex(((char*)&@stringBase0 + 361))))->getSDevice()))->showAssert(((char*)&@stringBase0 + 164), 4431, ((char*)&@stringBase0 + 370)); */
        OSPanic(((char*)&@stringBase0 + 164), 4431, ((char*)&@stringBase0 + 195));
        /* L_6c84:; */
        /* if (((this->field_0x8b4 & 255) << 2) < 0) goto L_6db0; */
        ((dRes_control_c*)(((char*)&@stringBase0 + 64)))->getIDRes((((this->field_0x8b4 & 255) << 2) & 65535), ((char*)&g_dComIfG_gameInfo + -16460), 64);
        /* if (/ * bne * / 1) goto L_6d08; */
        ((JUTAssertion*)(((JUTAssertion*)(((dRes_control_c*)(((char*)&@stringBase0 + 64)))->getIDRes((((this->field_0x8b4 & 255) << 2) & 65535), ((char*)&g_dComIfG_gameInfo + -16460), 64)))->getSDevice()))->showAssert(((char*)&@stringBase0 + 164), 4438, ((char*)&@stringBase0 + 180));
        /* L_6d08:; */
        /* field_0x6d8 = mDoExt_J3DModel(OSPanic(((char*)&@stringBase0 + 164), 4438, ((char*)&@stringBase0 + 195))); */
        /* if (this->field_0x6d8 != 0) goto L_6d38; */
        /* goto L_6e50; */
        /* L_6d38:; */
        /* if (((this->field_0x8b4 & 255) << 2) != 26) goto L_6db0; */
        /* field_0x6dd = ((JUTNameTab*)(this->field_0x54))->getIndex(((char*)&@stringBase0 + 393)); */
        /* if (this->field_0x6dd != 0) goto L_6db0; */
        /* ((JUTAssertion*)(((JUTAssertion*)(((JUTNameTab*)(this->field_0x54))->getIndex(((char*)&@stringBase0 + 393))))->getSDevice()))->showAssert(((char*)&@stringBase0 + 164), 4448, ((char*)&@stringBase0 + 402)); */
        OSPanic(((char*)&@stringBase0 + 164), 4448, ((char*)&@stringBase0 + 195));
        /* L_6db0:; */
        ((dRes_control_c*)(((char*)&@stringBase0 + 64)))->getIDRes((((this->field_0x8b4 & 255) << 2) & 65535), ((char*)&g_dComIfG_gameInfo + -16460), 64);
        /* if (/ * bne * / 1) goto L_6e2c; */
        ((JUTAssertion*)(((JUTAssertion*)(((dRes_control_c*)(((char*)&@stringBase0 + 64)))->getIDRes((((this->field_0x8b4 & 255) << 2) & 65535), ((char*)&g_dComIfG_gameInfo + -16460), 64)))->getSDevice()))->showAssert(((char*)&@stringBase0 + 164), 4454, ((char*)&@stringBase0 + 180));
        OSPanic(((char*)&@stringBase0 + 164), 4454, ((char*)&@stringBase0 + 195));
        /* L_6e2c:; */
        /* field_0x6d0 = mDoExt_J3DModel((C_@2100 + 0)); */
        /* L_6e50:; */
        /* return _restgpr_29(this->field_0x6d0); */
}

/* 00006F54-00007114       .text CreateHeap__11daNpc_Bj1_cFv */
void daNpc_Bj1_c::CreateHeap() {
        /* ((daNpc_Bj1_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->create_Anm(); */
        /* if (/ * bne * / 1) goto L_6e94; */
        return 0;
        /* L_6e94:; */
        /* ((daNpc_Bj1_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->create_prp_Anm(); */
        /* if (/ * bne * / 1) goto L_6eb4; */
        /* field_0x330 = 0; */
        return 0;
        /* L_6eb4:; */
        /* if (((daNpc_Bj1_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->create_itm_Mdl() == 0) goto L_7000; */
        /* goto L_6f18; */
        /* L_6ed4:; */
        /* if ((0 & 65535) == (this->field_0x6e8 & 255)) goto L_6ef8; */
        /* if ((0 & 65535) != (this->field_0x6e9 & 255)) goto L_6f14; */
        /* L_6ef8:; */
        /* field_0x8 = 0; */
        /* L_6f14:; */
        /* L_6f18:; */
        /* if (((0 + 1) & 65535) < this->field_0x28) goto L_6ed4; */
        /* field_0x14 = _savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* goto L_6f98; */
        /* L_6f3c:; */
        /* if ((0 & 65535) == (this->field_0x6cc & 255)) goto L_6f70; */
        /* if ((0 & 65535) == (this->field_0x6cd & 255)) goto L_6f70; */
        /* if ((0 & 65535) != (this->field_0x6cf & 255)) goto L_6f94; */
        /* L_6f70:; */
        /* field_0x8 = 0; */
        /* L_6f94:; */
        /* L_6f98:; */
        /* if (((0 + 1) & 65535) < this->field_0x28) goto L_6f3c; */
        /* field_0x14 = _savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* ((dBgS_AcchCir*)((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1272)))->SetWall(C_@6542, (0 + 1)); */
        /* ((dBgS_Acch*)((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 820)))->Set((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 504), (_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 484), _savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7), 1, (_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1272), (_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 544), 0); */
        return 1;
        /* L_7000:; */
        /* field_0x330 = 0; */
        /* field_0x6e4 = 0; */
        return _restgpr_29(0);
}

/* 00007114-00007134       .text daNpc_Bj1_Create__FP10fopAc_ac_c */
static cPhs_State daNpc_Bj1_Create(fopAc_ac_c* i_this) {
    return ((daNpc_Bj1_c*)i_this)->_create();
}

/* 00007134-00007154       .text daNpc_Bj1_Delete__FP11daNpc_Bj1_c */
static BOOL daNpc_Bj1_Delete(daNpc_Bj1_c* i_this) {
    return ((daNpc_Bj1_c*)i_this)->_delete();

/* 00007154-00007174       .text daNpc_Bj1_Execute__FP11daNpc_Bj1_c */
static BOOL daNpc_Bj1_Execute(daNpc_Bj1_c* i_this) {
    return ((daNpc_Bj1_c*)i_this)->_execute();

/* 00007174-00007194       .text daNpc_Bj1_Draw__FP11daNpc_Bj1_c */
static BOOL daNpc_Bj1_Draw(daNpc_Bj1_c* i_this) {
    return ((daNpc_Bj1_c*)i_this)->_draw();

/* 00007194-0000719C       .text daNpc_Bj1_IsDelete__FP11daNpc_Bj1_c */
static BOOL daNpc_Bj1_IsDelete(daNpc_Bj1_c*) {
    return 1;

static actor_method_class l_daNpc_Bj1_Method = {
    (process_method_func)daNpc_Bj1_Create,
    (process_method_func)daNpc_Bj1_Delete,
    (process_method_func)daNpc_Bj1_Execute,
    (process_method_func)daNpc_Bj1_IsDelete,
    (process_method_func)daNpc_Bj1_Draw,
};

actor_process_profile_definition g_profile_NPC_BJ1 = {
    /* Layer ID     */ fpcLy_CURRENT_e,
    /* List ID      */ 0x0007,
    /* List Prio    */ fpcPi_CURRENT_e,
    /* Proc Name    */ fpcNm_NPC_BJ1_e,
    /* Proc SubMtd  */ &g_fpcLf_Method.base,
    /* Size         */ sizeof(daNpc_Bj1_c),
    /* Size Other   */ 0,
    /* Parameters   */ 0,
    /* Leaf SubMtd  */ &g_fopAc_Method.base,
    /* Draw Prio    */ fpcDwPi_NPC_BJ1_e,
    /* Actor SubMtd */ &l_daNpc_Bj1_Method,
    /* Status       */ 0x07 | fopAcStts_SHOWMAP_e | fopAcStts_NOCULLEXEC_e | fopAcStts_CULL_e | fopAcStts_UNK40000_e,
    /* Group        */ fopAc_NPC_e,
    /* Cull Type    */ fopAc_CULLBOX_CUSTOM_e,
};

actor_process_profile_definition g_profile_NPC_BJ2 = {
    /* Layer ID     */ fpcLy_CURRENT_e,
    /* List ID      */ 0x0007,
    /* List Prio    */ fpcPi_CURRENT_e,
    /* Proc Name    */ fpcNm_NPC_BJ2_e,
    /* Proc SubMtd  */ &g_fpcLf_Method.base,
    /* Size         */ sizeof(daNpc_Bj1_c),
    /* Size Other   */ 0,
    /* Parameters   */ 0,
    /* Leaf SubMtd  */ &g_fopAc_Method.base,
    /* Draw Prio    */ fpcDwPi_NPC_BJ2_e,
    /* Actor SubMtd */ &l_daNpc_Bj1_Method,
    /* Status       */ 0x07 | fopAcStts_SHOWMAP_e | fopAcStts_NOCULLEXEC_e | fopAcStts_CULL_e | fopAcStts_UNK40000_e,
    /* Group        */ fopAc_NPC_e,
    /* Cull Type    */ fopAc_CULLBOX_CUSTOM_e,
};

actor_process_profile_definition g_profile_NPC_BJ3 = {
    /* Layer ID     */ fpcLy_CURRENT_e,
    /* List ID      */ 0x0007,
    /* List Prio    */ fpcPi_CURRENT_e,
    /* Proc Name    */ fpcNm_NPC_BJ3_e,
    /* Proc SubMtd  */ &g_fpcLf_Method.base,
    /* Size         */ sizeof(daNpc_Bj1_c),
    /* Size Other   */ 0,
    /* Parameters   */ 0,
    /* Leaf SubMtd  */ &g_fopAc_Method.base,
    /* Draw Prio    */ fpcDwPi_NPC_BJ3_e,
    /* Actor SubMtd */ &l_daNpc_Bj1_Method,
    /* Status       */ 0x07 | fopAcStts_SHOWMAP_e | fopAcStts_NOCULLEXEC_e | fopAcStts_CULL_e | fopAcStts_UNK40000_e,
    /* Group        */ fopAc_NPC_e,
    /* Cull Type    */ fopAc_CULLBOX_CUSTOM_e,
};

actor_process_profile_definition g_profile_NPC_BJ4 = {
    /* Layer ID     */ fpcLy_CURRENT_e,
    /* List ID      */ 0x0007,
    /* List Prio    */ fpcPi_CURRENT_e,
    /* Proc Name    */ fpcNm_NPC_BJ4_e,
    /* Proc SubMtd  */ &g_fpcLf_Method.base,
    /* Size         */ sizeof(daNpc_Bj1_c),
    /* Size Other   */ 0,
    /* Parameters   */ 0,
    /* Leaf SubMtd  */ &g_fopAc_Method.base,
    /* Draw Prio    */ fpcDwPi_NPC_BJ4_e,
    /* Actor SubMtd */ &l_daNpc_Bj1_Method,
    /* Status       */ 0x07 | fopAcStts_SHOWMAP_e | fopAcStts_NOCULLEXEC_e | fopAcStts_CULL_e | fopAcStts_UNK40000_e,
    /* Group        */ fopAc_NPC_e,
    /* Cull Type    */ fopAc_CULLBOX_CUSTOM_e,
};

actor_process_profile_definition g_profile_NPC_BJ5 = {
    /* Layer ID     */ fpcLy_CURRENT_e,
    /* List ID      */ 0x0007,
    /* List Prio    */ fpcPi_CURRENT_e,
    /* Proc Name    */ fpcNm_NPC_BJ5_e,
    /* Proc SubMtd  */ &g_fpcLf_Method.base,
    /* Size         */ sizeof(daNpc_Bj1_c),
    /* Size Other   */ 0,
    /* Parameters   */ 0,
    /* Leaf SubMtd  */ &g_fopAc_Method.base,
    /* Draw Prio    */ fpcDwPi_NPC_BJ5_e,
    /* Actor SubMtd */ &l_daNpc_Bj1_Method,
    /* Status       */ 0x07 | fopAcStts_SHOWMAP_e | fopAcStts_NOCULLEXEC_e | fopAcStts_CULL_e | fopAcStts_UNK40000_e,
    /* Group        */ fopAc_NPC_e,
    /* Cull Type    */ fopAc_CULLBOX_CUSTOM_e,
};

actor_process_profile_definition g_profile_NPC_BJ6 = {
    /* Layer ID     */ fpcLy_CURRENT_e,
    /* List ID      */ 0x0007,
    /* List Prio    */ fpcPi_CURRENT_e,
    /* Proc Name    */ fpcNm_NPC_BJ6_e,
    /* Proc SubMtd  */ &g_fpcLf_Method.base,
    /* Size         */ sizeof(daNpc_Bj1_c),
    /* Size Other   */ 0,
    /* Parameters   */ 0,
    /* Leaf SubMtd  */ &g_fopAc_Method.base,
    /* Draw Prio    */ fpcDwPi_NPC_BJ6_e,
    /* Actor SubMtd */ &l_daNpc_Bj1_Method,
    /* Status       */ 0x07 | fopAcStts_SHOWMAP_e | fopAcStts_NOCULLEXEC_e | fopAcStts_CULL_e | fopAcStts_UNK40000_e,
    /* Group        */ fopAc_NPC_e,
    /* Cull Type    */ fopAc_CULLBOX_CUSTOM_e,
};

actor_process_profile_definition g_profile_NPC_BJ7 = {
    /* Layer ID     */ fpcLy_CURRENT_e,
    /* List ID      */ 0x0007,
    /* List Prio    */ fpcPi_CURRENT_e,
    /* Proc Name    */ fpcNm_NPC_BJ7_e,
    /* Proc SubMtd  */ &g_fpcLf_Method.base,
    /* Size         */ sizeof(daNpc_Bj1_c),
    /* Size Other   */ 0,
    /* Parameters   */ 0,
    /* Leaf SubMtd  */ &g_fopAc_Method.base,
    /* Draw Prio    */ fpcDwPi_NPC_BJ7_e,
    /* Actor SubMtd */ &l_daNpc_Bj1_Method,
    /* Status       */ 0x07 | fopAcStts_SHOWMAP_e | fopAcStts_NOCULLEXEC_e | fopAcStts_CULL_e | fopAcStts_UNK40000_e,
    /* Group        */ fopAc_NPC_e,
    /* Cull Type    */ fopAc_CULLBOX_CUSTOM_e,
};

actor_process_profile_definition g_profile_NPC_BJ8 = {
    /* Layer ID     */ fpcLy_CURRENT_e,
    /* List ID      */ 0x0007,
    /* List Prio    */ fpcPi_CURRENT_e,
    /* Proc Name    */ fpcNm_NPC_BJ8_e,
    /* Proc SubMtd  */ &g_fpcLf_Method.base,
    /* Size         */ sizeof(daNpc_Bj1_c),
    /* Size Other   */ 0,
    /* Parameters   */ 0,
    /* Leaf SubMtd  */ &g_fopAc_Method.base,
    /* Draw Prio    */ fpcDwPi_NPC_BJ8_e,
    /* Actor SubMtd */ &l_daNpc_Bj1_Method,
    /* Status       */ 0x07 | fopAcStts_SHOWMAP_e | fopAcStts_NOCULLEXEC_e | fopAcStts_CULL_e | fopAcStts_UNK40000_e,
    /* Group        */ fopAc_NPC_e,
    /* Cull Type    */ fopAc_CULLBOX_CUSTOM_e,
};

actor_process_profile_definition g_profile_NPC_BJ9 = {
    /* Layer ID     */ fpcLy_CURRENT_e,
    /* List ID      */ 0x0007,
    /* List Prio    */ fpcPi_CURRENT_e,
    /* Proc Name    */ fpcNm_NPC_BJ9_e,
    /* Proc SubMtd  */ &g_fpcLf_Method.base,
    /* Size         */ sizeof(daNpc_Bj1_c),
    /* Size Other   */ 0,
    /* Parameters   */ 0,
    /* Leaf SubMtd  */ &g_fopAc_Method.base,
    /* Draw Prio    */ fpcDwPi_NPC_BJ9_e,
    /* Actor SubMtd */ &l_daNpc_Bj1_Method,
    /* Status       */ 0x07 | fopAcStts_SHOWMAP_e | fopAcStts_NOCULLEXEC_e | fopAcStts_CULL_e | fopAcStts_UNK40000_e,
    /* Group        */ fopAc_NPC_e,
    /* Cull Type    */ fopAc_CULLBOX_CUSTOM_e,
};

/* 由 fix_decomp_braces.py 补齐：反编译产物末尾缺 5 个 } */
}}}}}
