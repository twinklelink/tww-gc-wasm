/**
 * d_a_npc_co1.cpp
 * NPC - Prince Komali (before Dragon Roost Cavern)
 */

#include "d/dolzel_rel.h" // IWYU pragma: keep
#include "d/actor/d_a_npc_co1.h"

/* 000000EC-00000150       .text __ct__15daNpc_Co1_HIO_cFv */
daNpc_Co1_HIO_c::daNpc_Co1_HIO_c() {
    /* __ct__15daNpc_Co1_HIO_cFv: 无实义指令 */
}

/* 00000198-000001E4       .text nodeCallBack_Co1__FP7J3DNodei */
static BOOL nodeCallBack_Co1(J3DNode* i_node, int i_switch) {
    if (i_switch == 0) {
    if (j3dSys.getModel()->getUserArea() != NULL) {
    reinterpret_cast<daNpc_Co1_c*>(j3dSys.getModel()->getUserArea())
    ->nodeCo1Control(i_node, j3dSys.getModel());
    }
    }
    return TRUE;
}

/* 000001E4-00000334       .text nodeCo1Control__11daNpc_Co1_cFP7J3DNodeP8J3DModel */
void daNpc_Co1_c::nodeCo1Control(J3DNode*, J3DModel*) {
    /* _savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
    if (this->field_0x9c != 0) {
        /* field_0xa0 = 0; */
        /* field_0x4 = 0; */
        /* field_0x8 = 0; */
        /* __register_global_object(((C_@3569 + 0) + 160), ((char*)&__dt__4cXyzFv + 0), ((C_@3569 + 0) + 144)); */
        /* field_0x9c = 1; */
    }
    PSMTXCopy((this->field_0x8c + (this->field_0x18 * 48)), ((char*)&now__14mDoMtx_stack_c + 0));
    if (this->field_0x18 == (this->field_0x6cc & 255)) {
        /* mDoMtx_XrotM(((char*)&now__14mDoMtx_stack_c + 0), this->field_0x292); */
        /* mDoMtx_ZrotM(((char*)&now__14mDoMtx_stack_c + 0), ((-this->field_0x290) & 65535)); */
        /* PSMTXMultVec(((char*)&now__14mDoMtx_stack_c + 0), ((C_@3569 + 0) + 160), (_savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1968)); */
    }
    if (this->field_0x18 == (this->field_0x6cd & 255)) {
        /* mDoMtx_XrotM(((char*)&now__14mDoMtx_stack_c + 0), this->field_0x296); */
        /* mDoMtx_ZrotM(((char*)&now__14mDoMtx_stack_c + 0), ((-this->field_0x294) & 65535)); */
    }
    PSMTXCopy(((char*)&now__14mDoMtx_stack_c + 0), ((char*)&mCurrentMtx__6J3DSys + 0));
    return _restgpr_27(PSMTXCopy(((char*)&now__14mDoMtx_stack_c + 0), (this->field_0x8c + (this->field_0x18 * 48))));
}

/* 00000370-00000410       .text init_CO1_0__11daNpc_Co1_cFv */
void daNpc_Co1_c::init_CO1_0() {
    ((dSv_player_collect_c*)(((char*)&g_dComIfG_gameInfo + 180)))->isSymbol(1);
    if (/* beq */ 1) {
        set_action();
    }
}

/* 00000410-00000588       .text createInit__11daNpc_Co1_cFv */
void daNpc_Co1_c::createInit() {
    /* _savegpr_26(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
    /* L_35c:; */
    ((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getEventIdx();
    /* if ((0 + 1) >= 3) goto L_35c; */
    /* field_0x280 = 10; */
    /* field_0x26d = 70; */
    /* field_0x26f = 69; */
    gravity = 0;
    /* field_0x7bc = 0; */
    /* field_0x7c0 = 0; */
    /* field_0x7c4 = 0; */
    /* field_0x81e = 1; */
    /* ((dNpc_EventCut_c*)((_savegpr_26(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1836)))->setActorInfo2(((char*)&@stringBase0 + 24), _savegpr_26(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
    /* field_0x859 = 11; */
    if (this->field_0x861 != 0) {
    } else {
        /* ((daNpc_Co1_c*)(_savegpr_26(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->init_CO1_0(); */
        /* goto L_40c; */
    }
    /* L_40c:; */
    if (0 == 0) {
    } else {
        return 0;
    }
    /* ((dCcD_Stts*)((_savegpr_26(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1336)))->Init(255, 255, _savegpr_26(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
    /* field_0x5b8 = (_savegpr_26(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1336); */
    /* ((dCcD_Cyl*)((_savegpr_26(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1396)))->Set(((char*)&dNpc_cyl_src + 0)); */
    /* ((mDoExt_McaMorf*)(this->field_0x330))->setMorf(C_@4187); */
    /* ((daNpc_Co1_c*)(_savegpr_26(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->setMtx(1); */
    return _restgpr_26(1);
}

/* 00000588-000008E4       .text setMtx__11daNpc_Co1_cFb */
void daNpc_Co1_c::setMtx(bool) {
        /* _savegpr_28(this, bool, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* if (this->field_0x81f != 0) goto L_5b8; */
        /* ((daNpc_Co1_c*)(_savegpr_28(this, bool, arg2, arg3, arg4, arg5, arg6, arg7)))->plyTexPttrnAnm(); */
        /* field_0x808 = ((mDoExt_McaMorf*)(this->field_0x330))->play((_savegpr_28(this, bool, arg2, arg3, arg4, arg5, arg6, arg7) + 608), 0, 0); */
        /* field_0x68 = 0; */
        /* if (this->field_0x68 >= this->field_0x7d4) goto L_540; */
        /* field_0x808 = 1; */
        /* L_540:; */
        /* field_0x7d4 = 0; */
        /* ((dBgS_Acch*)((_savegpr_28(this, bool, arg2, arg3, arg4, arg5, arg6, arg7) + 820)))->CrrPos(((char*)&g_dComIfG_gameInfo + 4768)); */
        /* if ((this->field_0x859 & 255) == 8) goto L_580; */
        /* if (/ * bge * / 1) goto L_5b0; */
        /* if ((this->field_0x859 & 255) == 4) goto L_5a4; */
        /* goto L_5b0; */
        /* L_580:; */
        /* field_0x813 = (this->field_0x859 & 255); */
        /* goto L_5b8; */
        /* L_5a4:; */
        /* field_0x813 = 1; */
        /* goto L_5b8; */
        /* L_5b0:; */
        /* field_0x813 = 0; */
        /* L_5b8:; */
        /* field_0x1b5 = ((dBgS*)(((char*)&g_dComIfG_gameInfo + 4768)))->GetRoomId((_savegpr_28(this, bool, arg2, arg3, arg4, arg5, arg6, arg7) + 1052)); */
        /* field_0x1b6 = ((dBgS*)(((char*)&g_dComIfG_gameInfo + 4768)))->GetPolyColor((_savegpr_28(this, bool, arg2, arg3, arg4, arg5, arg6, arg7) + 1052)); */
        PSMTXTrans(((char*)&now__14mDoMtx_stack_c + 0));
        /* mDoMtx_YrotM(((char*)&now__14mDoMtx_stack_c + 0), this->field_0x206); */
        PSMTXCopy(((char*)&now__14mDoMtx_stack_c + 0), (this->field_0x50 + 36));
        /* ((mDoExt_McaMorf*)(this->field_0x330))->calc(); */
        PSMTXCopy((this->field_0x8c + ((this->field_0x6cd & 255) * 48)), ((char*)&now__14mDoMtx_stack_c + 0));
        PSMTXCopy(((char*)&now__14mDoMtx_stack_c + 0), (this->field_0x50 + 36));
        /* ((mDoExt_McaMorf*)(this->field_0x6d0))->calc(); */
        /* if (this->field_0x813 == 0) goto L_6d0; */
        PSMTXCopy((this->field_0x8c + ((this->field_0x6ce & 255) * 48)), ((char*)&now__14mDoMtx_stack_c + 0));
        PSMTXCopy(((char*)&now__14mDoMtx_stack_c + 0), (this->field_0x6f4 + 36));
        /* L_6d0:; */
        PSMTXCopy((this->field_0x8c + ((this->field_0x6d8 & 255) * 48)), ((char*)&now__14mDoMtx_stack_c + 0));
        /* field_0x840 = 0; */
        /* field_0x844 = 0; */
        /* field_0x848 = 0; */
        /* field_0x820 = 0; */
        /* field_0x824 = 0; */
        /* field_0x828 = 0; */
        /* field_0x850 = (this->field_0x850 + this->field_0x34); */
        /* field_0x84c = 0; */
        /* if ((this->field_0x2c - this->field_0x30) >= this->field_0x8) goto L_7ac; */
        /* goto L_7b0; */
        /* L_7ac:; */
        /* L_7b0:; */
        /* if ((this->field_0x30 + ((this->field_0x2c - this->field_0x30) * this->field_0x84c)) >= this->field_0x14) goto L_7cc; */
        /* goto L_7d0; */
        /* L_7cc:; */
        /* L_7d0:; */
        /* field_0x834 = (this->field_0x30 + ((this->field_0x2c - this->field_0x30) * this->field_0x84c)); */
        /* return _restgpr_28(((daNpc_Co1_c*)(_savegpr_28(this, bool, arg2, arg3, arg4, arg5, arg6, arg7)))->setAttention((this->field_0x850 & 65535))); */
}

/* 000008E4-000008F8       .text anmNum_toResID__11daNpc_Co1_cFi */
int daNpc_Co1_c::anmNum_toResID(int anmNum) {
    static const int a_bck_resID_tbl[] = {
        16, 17, 9, 10, 11, 13, 14, 12, 15, 10, 9, 7, 8, 0, 1, 2, 4,
    };
    return a_bck_resID_tbl[anmNum];
}

/* 000008F8-0000090C       .text anmNum_toResID_prl__11daNpc_Co1_cFi */
int daNpc_Co1_c::anmNum_toResID_prl(int anmNum) {
    static const int a_bck_resID_tbl[] = {
        7, 8, 0, 1, 2, 4, 5, 3, 6, 1, 0, 22, 23, 26, 28, 25, 27,
    };
    return a_bck_resID_tbl[anmNum];
}

/* 0000090C-00000920       .text btpNum_toResID__11daNpc_Co1_cFi */
int daNpc_Co1_c::btpNum_toResID(int anmNum) {
    static const int a_btp_resID_tbl[] = {
        22, 23, 26, 28, 25, 27, 24,
    };
    return a_btp_resID_tbl[anmNum];
}

/* 00000920-00000A30       .text setBtp__11daNpc_Co1_cFbi */
void daNpc_Co1_c::setBtp(bool, int) {
    /* field_0x6fc = ((dRes_control_c*)(((char*)&@stringBase0 + 28)))->getIDRes((((daNpc_Co1_c*)(_savegpr_29(this, bool, int, arg3, arg4, arg5, arg6, arg7)))->btpNum_toResID(this->field_0x50) & 65535), ((char*)&g_dComIfG_gameInfo + -16460), 64); */
    if (this->field_0x6fc == 0) {
        /* ((JUTAssertion*)(((JUTAssertion*)(((dRes_control_c*)(((char*)&@stringBase0 + 28)))->getIDRes((((daNpc_Co1_c*)(_savegpr_29(this, bool, int, arg3, arg4, arg5, arg6, arg7)))->btpNum_toResID(this->field_0x50) & 65535), ((char*)&g_dComIfG_gameInfo + -16460), 64)))->getSDevice()))->showAssert(((char*)&@stringBase0 + 31), 462, ((char*)&@stringBase0 + 47)); */
        OSPanic(((char*)&@stringBase0 + 31), 462, ((char*)&@stringBase0 + 68));
    }
    /* ((mDoExt_btpAnm*)((_savegpr_29(this, bool, int, arg3, arg4, arg5, arg6, arg7) + 1792)))->init(this->field_0x4, this->field_0x6fc, 1, 2, 0, -1); */
    if (/* beq */ 1) {
        /* field_0x714 = 0; */
        /* field_0x716 = 0; */
    }
    /* return _restgpr_29(((1 - ((mDoExt_btpAnm*)((_savegpr_29(this, bool, int, arg3, arg4, arg5, arg6, arg7) + 1792)))->init(this->field_0x4, this->field_0x6fc, 1, 2, 0, -1)) >> 5)); */
}

/* 00000A30-00000B30       .text setBtk__11daNpc_Co1_cFb */
void daNpc_Co1_c::setBtk(bool) {
    /* _savegpr_29(this, bool, arg2, arg3, arg4, arg5, arg6, arg7); */
    /* field_0x6d4 = ((dRes_control_c*)(((char*)&@stringBase0 + 28)))->getIDRes(21, ((char*)&g_dComIfG_gameInfo + -16460), 64); */
    if (this->field_0x6d4 == 0) {
        ((JUTAssertion*)(((JUTAssertion*)(((dRes_control_c*)(((char*)&@stringBase0 + 28)))->getIDRes(21, ((char*)&g_dComIfG_gameInfo + -16460), 64)))->getSDevice()))->showAssert(((char*)&@stringBase0 + 31), 490, ((char*)&@stringBase0 + 73));
        OSPanic(((char*)&@stringBase0 + 31), 490, ((char*)&@stringBase0 + 68));
    }
    /* ((mDoExt_btkAnm*)((_savegpr_29(this, bool, arg2, arg3, arg4, arg5, arg6, arg7) + 1756)))->init(this->field_0x4, this->field_0x6d4, 1, 2, 0, -1); */
    if (/* beq */ 1) {
        /* field_0x6f0 = 0; */
    }
    /* return _restgpr_29(((1 - ((mDoExt_btkAnm*)((_savegpr_29(this, bool, arg2, arg3, arg4, arg5, arg6, arg7) + 1756)))->init(this->field_0x4, this->field_0x6d4, 1, 2, 0, -1)) >> 5)); */
}

/* 00000B30-00000B58       .text iniTexPttrnAnm__11daNpc_Co1_cFb */
void daNpc_Co1_c::iniTexPttrnAnm(bool) {
    return setBtp(bool, (this->field_0x858 & 255));
}

/* 00000B58-00000C44       .text plyTexPttrnAnm__11daNpc_Co1_cFv */
void daNpc_Co1_c::plyTexPttrnAnm() {
        /* field_0x6f0 = (this->field_0x6f0 + 1); */
        /* if (this->field_0x6f0 < this->field_0x6) goto L_aa8; */
        /* field_0x6f0 = 0; */
        /* L_aa8:; */
        /* if ((this->field_0x858 & 255) == 6) goto L_ad0; */
        /* if ((this->field_0x858 & 255) == 5) goto L_ad0; */
        /* if (cLib_calcTimer<s>__FPs((this + 1814), arg1, arg2, arg3, arg4, arg5, arg6, arg7) != 0) goto L_b44; */
        /* L_ad0:; */
        /* field_0x714 = (this->field_0x714 + 1); */
        /* if (this->field_0x714 < (this->field_0x6 & 65535)) goto L_b44; */
        /* if ((this->field_0x858 & 255) == 6) goto L_b0c; */
        /* if ((this->field_0x858 & 255) != 5) goto L_b14; */
        /* L_b0c:; */
        /* goto L_b44; */
        /* L_b14:; */
        cM_rndF(C_@4442);
        /* field_0x714 = 0; */
        /* L_b44:; */
        return C_@4441;
}

/* 00000C44-00000C80       .text setAnm_tex__11daNpc_Co1_cFSc */
void daNpc_Co1_c::setAnm_tex(signed char) {
    if ((this->field_0x858 & 255) != (char & 255)) {
        /* field_0x858 = char; */
    }
    return iniTexPttrnAnm(1);
}

/* 00000C80-00000D64       .text setAnm_anm__11daNpc_Co1_cFPQ211daNpc_Co1_c9anm_prm_c */
void daNpc_Co1_c::setAnm_anm(daNpc_Co1_c::anm_prm_c*) {
    if ((this->field_0x859 & 255) == (base & 255)) {
        return 1;
    }
    dNpc_setAnmIDRes(this->field_0x330, this->field_0xc, ((daNpc_Co1_c*)(1))->anmNum_toResID((this->field_0x859 & 255)), -1, ((char*)&@stringBase0 + 28));
    dNpc_setAnmIDRes(this->field_0x6d0, this->field_0xc, anmNum_toResID_prl((this->field_0x859 & 255)), -1, ((char*)&@stringBase0 + 28));
    /* field_0x7d4 = 0; */
    /* field_0x809 = 0; */
    /* field_0x808 = 0; */
    return 1;
}

/* 00000D64-00000DD0       .text setAnm_NUM__11daNpc_Co1_cFii */
void daNpc_Co1_c::setAnm_NUM(int, int) {
    if (int != 0) {
        /* setAnm_tex(this->field_0x1, int, arg3, arg4, arg5, arg6, arg7); */
    }
    return setAnm_anm((((char*)&a_anm_prm_tbl$4461 + 0) + (int << 4)), (int << 4));
}

/* 00000DD0-00000E50       .text setAnm__11daNpc_Co1_cFv */
void daNpc_Co1_c::setAnm() {
    if (this->field_0x1 != 0) {
        /* setAnm_tex(this->field_0x1, arg2, arg3, arg4, arg5, arg6, arg7); */
    }
    if (base != 0) {
        setAnm_anm((((char*)&a_anm_prm_tbl$4468 + 0) + ((this->field_0x85d & 255) << 4)));
    }
    return 1;
}

/* 00000E50-00000E54       .text chg_anmTag__11daNpc_Co1_cFv */
void daNpc_Co1_c::chg_anmTag() {
}

/* 00000E54-00000E58       .text control_anmTag__11daNpc_Co1_cFv */
void daNpc_Co1_c::control_anmTag() {
}

/* 00000E58-00000EF8       .text chg_anmAtr__11daNpc_Co1_cFUc */
void daNpc_Co1_c::chg_anmAtr(unsigned char) {
        /* if ((char & 16777215) >= 14) goto L_df4; */
        /* if ((char & 16777215) != this->field_0x856) goto L_da4; */
        /* goto L_df4; */
        /* L_da4:; */
        /* field_0x85f = 1; */
        /* if (((char & 16777215) + -3) > 10) goto L_de4; */
        /* field_0x85f = 0; */
        /* goto L_de4; */
        set_target(1);
        /* L_de4:; */
        /* field_0x856 = char; */
        /* L_df4:; */
        return setAnm_ATR(1);
}

/* 00000EF8-00000FF4       .text control_anmAtr__11daNpc_Co1_cFv */
void daNpc_Co1_c::control_anmAtr() {
    if (this->field_0x856 <= 13) {
        /* if (this->field_0x808 == 0) goto L_ef4; */
        setAnm_NUM(7, 1);
        /* field_0x856 = 6; */
        /* goto L_ef4; */
        /* if (this->field_0x808 == 0) goto L_ef4; */
        ((daNpc_Co1_c*)(setAnm_NUM(7, 1)))->setAnm_NUM(4, 1);
        /* field_0x856 = 10; */
        /* goto L_ef4; */
        /* if (this->field_0x808 == 0) goto L_ef4; */
        ((daNpc_Co1_c*)(((daNpc_Co1_c*)(setAnm_NUM(7, 1)))->setAnm_NUM(4, 1)))->setAnm_NUM(6, 1);
        /* field_0x856 = 5; */
        /* goto L_ef4; */
        /* if (this->field_0x808 == 0) goto L_ef4; */
        ((daNpc_Co1_c*)(((daNpc_Co1_c*)(((daNpc_Co1_c*)(setAnm_NUM(7, 1)))->setAnm_NUM(4, 1)))->setAnm_NUM(6, 1)))->setAnm_NUM(7, 1);
        /* field_0x856 = 6; */
        /* goto L_ef4; */
        /* if (this->field_0x808 == 0) goto L_ef4; */
        ((daNpc_Co1_c*)(((daNpc_Co1_c*)(((daNpc_Co1_c*)(((daNpc_Co1_c*)(setAnm_NUM(7, 1)))->setAnm_NUM(4, 1)))->setAnm_NUM(6, 1)))->setAnm_NUM(7, 1)))->setAnm_NUM(1, 1);
        /* field_0x856 = 1; */
    }
    /* L_ef4:; */
    return ((daNpc_Co1_c*)(((daNpc_Co1_c*)(((daNpc_Co1_c*)(((daNpc_Co1_c*)(setAnm_NUM(7, 1)))->setAnm_NUM(4, 1)))->setAnm_NUM(6, 1)))->setAnm_NUM(7, 1)))->setAnm_NUM(1, 1);
}

/* 00000FF4-0000105C       .text setAnm_ATR__11daNpc_Co1_cFi */
void daNpc_Co1_c::setAnm_ATR(int) {
    if (int != 0) {
        /* setAnm_tex(this->field_0x1, arg2, arg3, arg4, arg5, arg6, arg7); */
    }
    return setAnm_anm((((char*)&a_anm_prm_tbl$4534 + 0) + (this->field_0x856 << 4)), (this->field_0x856 << 4));
}

/* 0000105C-00001120       .text anmAtr__11daNpc_Co1_cFUs */
void daNpc_Co1_c::anmAtr(unsigned short) {
        /* if ((short & 65535) == 14) goto L_1008; */
        /* if (/ * bge * / 1) goto L_1010; */
        /* if ((short & 65535) == 6) goto L_fa0; */
        /* goto L_1010; */
        /* L_fa0:; */
        /* if (this->field_0x863 != 0) goto L_fd0; */
        /* field_0x856 = 255; */
        /* chg_anmAtr(this->field_0x5bcf); */
        /* field_0x863 = (this->field_0x863 + 1); */
        /* L_fd0:; */
        /* field_0x5bd0 = 255; */
        /* if (this->field_0x5bd0 == 255) goto L_1010; */
        /* if (this->field_0x857 == this->field_0x5bd0) goto L_1010; */
        chg_anmTag();
        /* goto L_1010; */
        /* L_1008:; */
        /* field_0x863 = 0; */
        /* L_1010:; */
        control_anmTag();
        return control_anmAtr();
}

/* 00001120-000011B8       .text eventOrder__11daNpc_Co1_cFv */
void daNpc_Co1_c::eventOrder() {
        /* if ((this->field_0x85c & 255) == 1) goto L_1058; */
        /* if ((this->field_0x85c & 255) != 2) goto L_1084; */
        /* L_1058:; */
        /* if (this->field_0x85c != 1) goto L_10bc; */
        fopAcM_orderSpeakEvent(this);
        /* goto L_10bc; */
        /* L_1084:; */
        /* if (/ * blt * / 1) goto L_10bc; */
        /* field_0x7f8 = 0; */
        /* L_10bc:; */
        return fopAcM_orderOtherEventId(fopAcM_orderSpeakEvent(this), this->field_0x7f2, 255);
}

/* 000011B8-00001288       .text checkOrder__11daNpc_Co1_cFv */
void daNpc_Co1_c::checkOrder() {
        /* if (this->field_0xf8 != 2) goto L_1158; */
        /* if (((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->startCheck(this->field_0x7f2) == 0) goto L_1188; */
        /* if (this->field_0x7f8 == 1) goto L_1134; */
        /* if (/ * bge * / 1) goto L_1128; */
        /* goto L_114c; */
        /* L_1128:; */
        /* if (this->field_0x7f8 >= 3) goto L_114c; */
        /* goto L_1144; */
        /* L_1134:; */
        /* goto L_114c; */
        /* L_1144:; */
        /* field_0x85f = 0; */
        /* L_114c:; */
        /* field_0x85c = 0; */
        /* goto L_1188; */
        /* L_1158:; */
        /* if (0 != 1) goto L_1188; */
        /* if ((this->field_0x85c & 255) == 1) goto L_1178; */
        /* if ((this->field_0x85c & 255) != 2) goto L_1188; */
        /* L_1178:; */
        /* field_0x85c = 0; */
        /* field_0x81d = 1; */
        /* L_1188:; */
        /* return ((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->startCheck(this->field_0x7f2); */
}

/* 00001288-000013AC       .text setCollision_SP___11daNpc_Co1_cFv */
void daNpc_Co1_c::setCollision_SP_() {
        /* if (this->field_0x81d != 0) goto L_1298; */
        /* if (this->field_0x859 != 1) goto L_1240; */
        /* PSMTXTrans(((char*)&now__14mDoMtx_stack_c + 0), arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* mDoMtx_YrotM(((char*)&now__14mDoMtx_stack_c + 0), this->field_0x206); */
        PSMTXMultVec(((char*)&now__14mDoMtx_stack_c + 0));
        /* goto L_1260; */
        /* L_1240:; */
        /* L_1260:; */
        ((cM3dGCyl*)((arg0 + 1676)))->SetC();
        ((cM3dGCyl*)((arg0 + 1676)))->SetR();
        ((cM3dGCyl*)((arg0 + 1676)))->SetH();
        /* L_1298:; */
        return ((cCcS*)(((char*)&g_dComIfG_gameInfo + 9892)))->Set((arg0 + 1396));
}

/* 000013AC-000014B8       .text set_target__11daNpc_Co1_cFi */
void daNpc_Co1_c::set_target(int) {
        /* if (int == 1) goto L_1304; */
        /* if (/ * bge * / 1) goto L_13ac; */
        /* if (int >= 0) goto L_12f8; */
        /* goto L_13ac; */
        /* L_12f8:; */
        /* field_0x85f = 0; */
        /* goto L_13ac; */
        /* L_1304:; */
        dNpc_playerEyePos();
        /* fopAcM_searchActorDistance(this, this->field_0x5b38); */
        /* fopAcM_searchActorAngleY(this, this->field_0x5b38); */
        PSMTXTrans(((char*)&now__14mDoMtx_stack_c + 0));
        /* mDoMtx_YrotM(((char*)&now__14mDoMtx_stack_c + 0), (fopAcM_searchActorAngleY(this, this->field_0x5b38) + -8192)); */
        PSMTXMultVec(((char*)&now__14mDoMtx_stack_c + 0));
        /* field_0x85f = 2; */
        /* L_13ac:; */
        return PSMTXMultVec(((char*)&now__14mDoMtx_stack_c + 0));
}

/* 000014B8-00001554       .text chk_talk__11daNpc_Co1_cFv */
void daNpc_Co1_c::chk_talk() {
        /* field_0x80b = 255; */
        /* if (this->field_0x52b8 == 1) goto L_1418; */
        /* if (this->field_0x52b8 == 2) goto L_1418; */
        /* if (this->field_0x52b8 != 3) goto L_141c; */
        /* L_1418:; */
        /* L_141c:; */
        /* if (1 == 0) goto L_144c; */
        /* if (((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->ChkPresentEnd() == 0) goto L_1448; */
        /* goto L_144c; */
        /* L_1448:; */
        /* L_144c:; */
        return 0;
}

/* 00001554-00001594       .text chk_partsNotMove__11daNpc_Co1_cFv */
void daNpc_Co1_c::chk_partsNotMove() {
    /* if (this->field_0x7ec == this->field_0x292) { */
        /* if (this->field_0x7ee == this->field_0x296) goto L_14a0; */
        /* if (this->field_0x7f0 == this->field_0x206) goto L_14a0; */
    /* L_14a0:; */
    return 1;
}

/* 00001594-00001734       .text lookBack__11daNpc_Co1_cFv */
void daNpc_Co1_c::lookBack() {
        /* _savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* if ((this->field_0x85f & 255) == 2) goto L_1594; */
        /* if (/ * bge * / 1) goto L_1538; */
        /* if ((this->field_0x85f & 255) >= 1) goto L_1544; */
        /* goto L_15c8; */
        /* L_1538:; */
        /* if ((this->field_0x85f & 255) >= 4) goto L_15c8; */
        /* goto L_15c4; */
        /* L_1544:; */
        dNpc_playerEyePos();
        /* goto L_15c8; */
        /* L_1594:; */
        /* goto L_15c8; */
        /* L_15c4:; */
        /* L_15c8:; */
        /* cLib_addCalcAngleS2((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 2050), this->field_0x1e, 4, 2048); */
        /* if (this->field_0x29a != 0) goto L_15f8; */
        /* field_0x802 = 0; */
        /* L_15f8:; */
        /* return _restgpr_28(((dNpc_JntCtrl_c*)((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 656)))->lookAtTarget((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 518))); */
}

/* 00001734-000017EC       .text next_msgStatus__11daNpc_Co1_cFPUl */
void daNpc_Co1_c::next_msgStatus(unsigned long*) {
        /* if (/ * bgt * / 1) goto L_16f8; */
        base = 6207;
        return 15;
}

/* 000017EC-00001894       .text getMsg_CO1_0__11daNpc_Co1_cFv */
void daNpc_Co1_c::getMsg_CO1_0() {
    if (this->field_0x80b == 152) {
        return 6204;
    }
    if (this->field_0x80b != 255) {
        return 6203;
    }
    if (this->field_0x80a == 0) {
        return 6206;
    }
    if (dNpc_chkLetterPassed() == 0) {
        /* if (((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->isEventBit(3844) != 0) goto L_1798; */
        return 6217;
    }
    /* L_1798:; */
    return (((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->isEventBit(3848) + 6201);
}

/* 00001894-000018D0       .text getMsg__11daNpc_Co1_cFv */
void daNpc_Co1_c::getMsg() {
    }
    return getMsg_CO1_0();


/* 000018D0-00001950       .text chkAttention__11daNpc_Co1_cFv */
void daNpc_Co1_c::chkAttention() {
    if (((dAttention_c*)(((char*)&g_dComIfG_gameInfo + 22536)))->LockonTruth() == 0) {
    }
    return ((this - ((dAttention_c*)(((char*)&g_dComIfG_gameInfo + 22536)))->ActionTarget(0)) >> 5);
}

/* 00001950-00001A44       .text setAttention__11daNpc_Co1_cFb */
void daNpc_Co1_c::setAttention(bool) {
    /* _savegpr_29(this, bool, arg2, arg3, arg4, arg5, arg6, arg7); */
    if (this->field_0x859 == 1) {
        PSMTXTrans(((char*)&now__14mDoMtx_stack_c + 0));
        /* mDoMtx_YrotM(((char*)&now__14mDoMtx_stack_c + 0), this->field_0x206); */
        PSMTXMultVec(((char*)&now__14mDoMtx_stack_c + 0));
    } else {
        /* field_0x274 = 0; */
        /* field_0x278 = (this->field_0x1fc + this->field_0x20); */
        /* field_0x27c = 0; */
    }
    if (this->field_0x818 == 0) {
        /* if (/ * beq * / 1) goto L_1940; */
    }
    eyePos = 0;
    /* field_0x264 = 0; */
    /* field_0x268 = 0; */
    /* L_1940:; */
    return _restgpr_29(((char*)&l_HIO + 0));
}

/* 00001A44-00001A60       .text charDecide__11daNpc_Co1_cFi */
void daNpc_Co1_c::charDecide(int) {
    /* field_0x860 = 0; */
    /* field_0x861 = -1; */
    /* field_0x861 = 0; */
    return 1;
}

/* 00001A60-00001A9C       .text eInit_MDR___11daNpc_Co1_cFv */
void daNpc_Co1_c::eInit_MDR_() {
    setAnm_NUM(10, 1);
    *(unsigned char*)(this + 2143) = 0;
}

/* 00001A9C-00001AC4       .text eInit_RED_LTR___11daNpc_Co1_cFv */
void daNpc_Co1_c::eInit_RED_LTR_() {
    setAnm_NUM(8, 1);
}

/* 00001AC4-00001B50       .text event_actionInit__11daNpc_Co1_cFi */
void daNpc_Co1_c::event_actionInit(int) {
        /* if (((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMySubstanceP(int, ((char*)&@stringBase0 + 88), 3, arg4) == 0) goto L_1a50; */
        /* if ((this->field_0x855 & 255) == 1) goto L_1a48; */
        /* if (/ * bge * / 1) goto L_1a50; */
        /* if ((this->field_0x855 & 255) >= 0) goto L_1a3c; */
        /* goto L_1a50; */
        /* L_1a3c:; */
        eInit_MDR();
        /* goto L_1a50; */
        /* L_1a48:; */
        /* L_1a50:; */
        return eInit_RED_LTR();
}

/* 00001B50-00001BA8       .text eMove_MDR___11daNpc_Co1_cFv */
void daNpc_Co1_c::eMove_MDR_() {
    if (/* beq */ 1) {
        ((daNpc_Co1_c*)(arg0))->setAnm_NUM(11, 1);
    }
}

/* 00001BA8-00001C34       .text eMove_RED_LTR___11daNpc_Co1_cFv */
void daNpc_Co1_c::eMove_RED_LTR_() {
        /* if (this->field_0x808 == 0) goto L_1b30; */
        /* if ((this->field_0x859 & 255) == 8) goto L_1afc; */
        /* if (/ * bge * / 1) goto L_1b24; */
        /* if ((this->field_0x859 & 255) == 4) goto L_1b0c; */
        /* goto L_1b24; */
        /* L_1afc:; */
        ((daNpc_Co1_c*)(arg0))->setAnm_NUM(4, 1);
        /* goto L_1b30; */
        /* L_1b0c:; */
        /* field_0x85e = 7; */
        ((daNpc_Co1_c*)(((daNpc_Co1_c*)(arg0))->setAnm_NUM(4, 1)))->setStt(2);
        /* goto L_1b30; */
        /* L_1b24:; */
        ((daNpc_Co1_c*)(((daNpc_Co1_c*)(((daNpc_Co1_c*)(arg0))->setAnm_NUM(4, 1)))->setStt(2)))->setAnm_NUM(8, 1);
        /* L_1b30:; */
        return 1;
}

/* 00001C34-00001C84       .text event_action__11daNpc_Co1_cFv */
void daNpc_Co1_c::event_action() {
        /* if ((this->field_0x855 & 255) == 1) goto L_1b7c; */
        /* if (/ * bge * / 1) goto L_1b84; */
        /* if ((this->field_0x855 & 255) >= 0) goto L_1b74; */
        /* goto L_1b84; */
        /* L_1b74:; */
        eMove_MDR();
        /* goto L_1b88; */
        /* L_1b7c:; */
        eMove_RED_LTR();
        /* goto L_1b88; */
        /* L_1b84:; */
        /* L_1b88:; */
        return 1;
}

/* 00001C84-00001D70       .text privateCut__11daNpc_Co1_cFi */
void daNpc_Co1_c::privateCut(int) {
        /* _savegpr_29(this, int, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* if (/ * beq * / 1) goto L_1c6c; */
        /* field_0x854 = ((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMyActIdx(); */
        /* if ((this->field_0x854 & 255) != -1) goto L_1c08; */
        ((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->cutEnd();
        /* goto L_1c6c; */
        /* L_1c08:; */
        /* if (((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getIsAddvance() == 0) goto L_1c38; */
        /* if (this->field_0x854 == 0) goto L_1c2c; */
        /* goto L_1c38; */
        /* L_1c2c:; */
        /* ((daNpc_Co1_c*)(_savegpr_29(this, int, arg2, arg3, arg4, arg5, arg6, arg7)))->event_actionInit(); */
        /* L_1c38:; */
        /* if (this->field_0x854 == 0) goto L_1c48; */
        /* goto L_1c54; */
        /* L_1c48:; */
        /* ((daNpc_Co1_c*)(_savegpr_29(this, int, arg2, arg3, arg4, arg5, arg6, arg7)))->event_action(); */
        /* goto L_1c58; */
        /* L_1c54:; */
        /* L_1c58:; */
        /* if (1 == 0) goto L_1c6c; */
        /* L_1c6c:; */
        return _restgpr_29(((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->cutEnd());
}

/* 00001D70-00001D90       .text endEvent__11daNpc_Co1_cFv */
void daNpc_Co1_c::endEvent() {
    /* field_0x856 = 255; */
    return this;
}

/* 00001D90-00001DC8       .text isEventEntry__11daNpc_Co1_cFv */
void daNpc_Co1_c::isEventEntry() {
    /* return ((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMyStaffId(this->field_0x72c, 0, 0, arg4); */
}

/* 00001DC8-00001EC0       .text event_proc__11daNpc_Co1_cFi */
void daNpc_Co1_c::event_proc(int) {
        /* if (((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->endCheck(this->field_0x7f2) == 0) goto L_1d98; */
        /* if (this->field_0x7f8 == 1) goto L_1d6c; */
        /* if (/ * bge * / 1) goto L_1d3c; */
        /* if (this->field_0x7f8 >= 0) goto L_1d48; */
        /* goto L_1d8c; */
        /* L_1d3c:; */
        /* if (this->field_0x7f8 >= 3) goto L_1d8c; */
        /* goto L_1d84; */
        /* L_1d48:; */
        ((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->onEventBit(3844);
        setStt(4);
        /* goto L_1d8c; */
        /* L_1d6c:; */
        ((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->onEventBit(6160);
        /* goto L_1d8c; */
        /* L_1d84:; */
        /* field_0x85c = 1; */
        /* L_1d8c:; */
        endEvent();
        /* goto L_1dbc; */
        /* L_1d98:; */
        /* if (((dNpc_EventCut_c*)((this + 1836)))->cutProc() != 0) goto L_1db4; */
        privateCut(int);
        /* L_1db4:; */
        /* L_1dbc:; */
        return lookBack();
}

/* 00001EC0-00001F6C       .text set_action__11daNpc_Co1_cFM11daNpc_Co1_cFPCvPvPv_iPv */
void daNpc_Co1_c::set_action(int (daNpc_Co1_c::*)(void*), void*) {
        /* if (__ptmf_cmpr((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1816)) == 0) goto L_1e64; */
        /* if (__ptmf_test((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1816)) == 0) goto L_1e30; */
        /* field_0x862 = 9; */
        /* __ptmf_scall(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* L_1e30:; */
        /* field_0x862 = 0; */
        /* __ptmf_scall(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* L_1e64:; */
        return _restgpr_29(1);
}

/* 00001F6C-00001FD4       .text setStt__11daNpc_Co1_cFSc */
void daNpc_Co1_c::setStt(signed char) {
        /* field_0x7fc = 0; */
        /* field_0x85d = char; */
        /* if ((this->field_0x85d & 255) == 2) goto L_1ebc; */
        /* if (/ * bge * / 1) goto L_1eb0; */
        /* goto L_1ed4; */
        /* L_1eb0:; */
        /* if ((this->field_0x85d & 255) == 7) goto L_1ed0; */
        /* goto L_1ed4; */
        /* L_1ebc:; */
        /* field_0x856 = 255; */
        /* field_0x85f = 1; */
        /* goto L_1ed4; */
        /* L_1ed0:; */
        /* field_0x85f = 0; */
        /* L_1ed4:; */
        return setAnm();
}

/* 00001FD4-0000205C       .text wait_1__11daNpc_Co1_cFv */
void daNpc_Co1_c::wait_1() {
        /* if ((this->field_0x85c & 255) == 1) goto L_1f14; */
        /* if ((this->field_0x85c & 255) < 3) goto L_1f1c; */
        /* L_1f14:; */
        return 1;
        /* L_1f1c:; */
        /* if (this->field_0x81d == 0) goto L_1f50; */
        /* if (((daNpc_Co1_c*)(1))->chk_talk() == 0) goto L_1f48; */
        /* field_0x85e = 4; */
        setStt(3);
        /* L_1f48:; */
        return 1;
        /* L_1f50:; */
        /* field_0x85c = 2; */
        return 1;
}

/* 0000205C-00002114       .text wait_2__11daNpc_Co1_cFv */
void daNpc_Co1_c::wait_2() {
        /* if (this->field_0x81d == 0) goto L_1fd0; */
        /* if (chk_talk() == 0) goto L_1fc8; */
        /* if (dNpc_chkLetterPassed() == 0) goto L_1fb4; */
        /* field_0x85e = 7; */
        /* goto L_1fbc; */
        /* L_1fb4:; */
        /* field_0x85e = 4; */
        /* L_1fbc:; */
        setStt(2);
        /* L_1fc8:; */
        return 1;
        /* L_1fd0:; */
        /* field_0x85c = 2; */
        /* if (this->field_0x81c == 0) goto L_1fec; */
        /* field_0x7fc = 60; */
        /* L_1fec:; */
        /* if (cLib_calcTimer<s>__FPs((this + 2044)) == 0) goto L_2008; */
        /* field_0x85f = 1; */
        /* goto L_2010; */
        /* L_2008:; */
        /* field_0x85f = 0; */
        /* L_2010:; */
        return 1;
}

/* 00002114-00002150       .text wakeup__11daNpc_Co1_cFv */
void daNpc_Co1_c::wakeup() {
    if (this->field_0x808 == 0) {
        /* field_0x85e = 4; */
        /* setStt(2, arg2, arg3, arg4, arg5, arg6, arg7); */
    }
    return 1;
}

/* 00002150-0000234C       .text talk_1__11daNpc_Co1_cFv */
void daNpc_Co1_c::talk_1() {
        chk_partsNotMove();
        /* if ((this->field_0x85c & 255) == 1) goto L_209c; */
        /* if ((this->field_0x85c & 255) < 3) goto L_20a4; */
        /* L_209c:; */
        return 1;
        /* L_20a4:; */
        /* if (dNpc_chkLetterPassed() == 0) goto L_210c; */
        /* if (this->field_0x80a != 0) goto L_210c; */
        /* if (((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->isEventBit(3844) != 0) goto L_210c; */
        /* if (this->field_0x85c == 3) goto L_2104; */
        /* field_0x80b = 255; */
        /* field_0x81d = 0; */
        endEvent();
        /* field_0x85c = 3; */
        /* L_2104:; */
        return 1;
        /* L_210c:; */
        talk(1);
        /* if (this->field_0x6b0 == 0) goto L_2244; */
        /* if (this->field_0xf8 == 6) goto L_2230; */
        /* if (/ * bge * / 1) goto L_2140; */
        /* if (this->field_0xf8 == 2) goto L_2230; */
        /* goto L_2244; */
        /* L_2140:; */
        /* if (this->field_0xf8 == 19) goto L_214c; */
        /* goto L_2244; */
        /* L_214c:; */
        /* if (this->field_0x6a4 == 6208) goto L_21a4; */
        /* if (/ * bge * / 1) goto L_2168; */
        /* if (this->field_0x6a4 == 6201) goto L_2174; */
        /* goto L_21ac; */
        /* L_2168:; */
        /* if (this->field_0x6a4 == 6216) goto L_218c; */
        /* goto L_21ac; */
        /* L_2174:; */
        ((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->onEventBit(3848);
        /* goto L_21ac; */
        /* L_218c:; */
        ((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->onEventBit(3844);
        /* goto L_21ac; */
        /* L_21a4:; */
        /* field_0x80a = 0; */
        /* L_21ac:; */
        /* if (this->field_0x80b != 152) goto L_21f4; */
        /* field_0x85c = 5; */
        ((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->CancelPresent();
        ((dSv_player_bag_item_c*)(((char*)&g_dComIfG_gameInfo + 118)))->setReserveItemEmpty();
        endEvent();
        /* field_0x80a = 1; */
        /* goto L_221c; */
        /* L_21f4:; */
        /* setStt(this->field_0x85e); */
        /* if (this->field_0x85e == 7) goto L_221c; */
        /* field_0x81d = 0; */
        endEvent();
        /* L_221c:; */
        /* field_0x80b = 255; */
        /* field_0x7fc = 60; */
        /* goto L_2244; */
        /* L_2230:; */
        /* if (this->field_0x6a4 != 6219) goto L_2244; */
        /* field_0x85f = 0; */
        /* L_2244:; */
        return (chk_partsNotMove() & 16777215);
}

/* 0000234C-000023BC       .text toru_1__11daNpc_Co1_cFv */
void daNpc_Co1_c::toru_1() {
        /* if (this->field_0x81d == 0) goto L_22b8; */
        /* if (this->field_0x80b != 152) goto L_22a0; */
        /* field_0x80b = 255; */
        setAnm_NUM(8, 1);
        /* L_22a0:; */
        /* if (this->field_0x808 == 0) goto L_22b8; */
        setStt(6);
        /* L_22b8:; */
        return 0;
}

/* 000023BC-000023F8       .text read_1__11daNpc_Co1_cFv */
void daNpc_Co1_c::read_1() {
    if (this->field_0x808 == 0) {
        /* field_0x85e = 7; */
        /* setStt(2, arg2, arg3, arg4, arg5, arg6, arg7); */
    }
    return 0;
}

/* 000023F8-00002458       .text modoru__11daNpc_Co1_cFv */
void daNpc_Co1_c::modoru() {
    if (/* bne */ 1) {
        /* setStt(4, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* field_0x81d = 0; */
        endEvent();
    }
    return 1;
}

/* 00002458-000025DC       .text wait_action1__11daNpc_Co1_cFPv */
void daNpc_Co1_c::wait_action1(void*) {
        /* if ((this->field_0x862 & 255) >= 4) goto L_23a0; */
        /* if ((this->field_0x862 & 255) == 0) goto L_23ac; */
        /* if (/ * bge * / 1) goto L_2434; */
        /* goto L_24d8; */
        /* L_23a0:; */
        /* if ((this->field_0x862 & 255) == 9) goto L_24d8; */
        /* goto L_24d8; */
        /* L_23ac:; */
        /* if (dNpc_chkLetterPassed() == 0) goto L_23c8; */
        setStt(4);
        /* goto L_23f8; */
        /* L_23c8:; */
        /* if (((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->isEventBit(6160) != 0) goto L_23ec; */
        /* field_0x85c = 4; */
        /* L_23ec:; */
        setStt(1);
        /* L_23f8:; */
        /* field_0x820 = 0; */
        /* field_0x824 = 0; */
        /* field_0x828 = 0; */
        /* field_0x834 = 0; */
        dKy_plight_set((this + 2080));
        /* field_0x862 = (this->field_0x862 + 1); */
        /* goto L_24d8; */
        /* L_2434:; */
        /* field_0x81c = ((daNpc_Co1_c*)(this->field_0x862))->chkAttention(); */
        /* if ((this->field_0x85d & 255) > 7) goto L_24d0; */
        /* field_0x818 = wait_1(); */
        /* goto L_24d0; */
        /* field_0x818 = talk_1(); */
        /* goto L_24d0; */
        /* field_0x818 = wakeup(); */
        /* goto L_24d0; */
        /* field_0x818 = wait_2(); */
        /* goto L_24d0; */
        /* field_0x818 = toru_1(); */
        /* goto L_24d0; */
        /* field_0x818 = read_1(); */
        /* goto L_24d0; */
        /* field_0x818 = modoru(); */
        /* L_24d0:; */
        lookBack();
        /* L_24d8:; */
        return 1;
}

/* 000025DC-0000271C       .text demo__11daNpc_Co1_cFv */
void daNpc_Co1_c::demo() {
        /* if (demoActorID != 0) goto L_2528; */
        /* if (this->field_0x81f == 0) goto L_2618; */
        /* field_0x81f = 0; */
        /* goto L_2618; */
        /* L_2528:; */
        /* field_0x81f = 1; */
        ((dDemo_object_c*)((this->field_0x5abc + 32)))->getActor(demoActorID);
        /* if (this->field_0x6fc == 0) goto L_257c; */
        /* field_0x714 = (this->field_0x714 + 1); */
        /* if (this->field_0x714 < (this->field_0x6 & 65535)) goto L_257c; */
        /* L_257c:; */
        /* if (((dDemo_actor_c*)(((dDemo_object_c*)((this->field_0x5abc + 32)))->getActor(demoActorID)))->getP_BtpData(((char*)&@stringBase0 + 28), this->field_0x6) == 0) goto L_25ec; */
        /* field_0x6fc = ((dDemo_actor_c*)(((dDemo_object_c*)((this->field_0x5abc + 32)))->getActor(demoActorID)))->getP_BtpData(((char*)&@stringBase0 + 28), this->field_0x6); */
        /* if (((mDoExt_btpAnm*)((this + 1792)))->init(this->field_0x4, this->field_0x6fc, 1, 2, 0, -1, 1) == 0) goto L_25ec; */
        /* field_0x858 = 7; */
        /* field_0x714 = 0; */
        /* L_25ec:; */
        dDemo_setDemoData(this, 106, this->field_0x330, ((char*)&@stringBase0 + 28), 0, 0, 0, 0);
        /* L_2618:; */
        /* return this->field_0x81f; */
}

/* 0000271C-000027AC       .text shadowDraw__11daNpc_Co1_cFv */
void daNpc_Co1_c::shadowDraw() {
    /* field_0x6f8 = dComIfGd_setShadow(this->field_0x6f8, 1, this->field_0x50); */
    /* return dComIfGd_setShadow(this->field_0x6f8, 1, this->field_0x50); */
}

/* 000027AC-0000295C       .text _draw__11daNpc_Co1_cFv */
BOOL daNpc_Co1_c::_draw() {
    /* _savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
    if (this->field_0x80d == 0) {
        /* if (this->field_0x811 != 0) goto L_2710; */
    }
    return 1;
    /* L_2710:; */
    /* ((dScnKy_env_light_c*)(((char*)&g_env_light + 0)))->settingTevStruct(0, (_savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 504), (_savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 268)); */
    /* field_0x124 = 0; */
    /* ((dScnKy_env_light_c*)(((char*)&g_env_light + 0)))->setLightTevColorType(this->field_0x50, (_savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 268)); */
    /* ((mDoExt_btpAnm*)((_savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1792)))->entry(this->field_0x4, this->field_0x714); */
    /* ((mDoExt_McaMorf*)(this->field_0x330))->entryDL(); */
    /* ((J3DMaterialTable*)((this->field_0x4 + 88)))->removeTexNoAnimator(this->field_0x708); */
    /* ((dScnKy_env_light_c*)(((char*)&g_env_light + 0)))->setLightTevColorType(this->field_0x50, (_savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 268)); */
    /* ((mDoExt_btkAnm*)((_savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1756)))->entry(this->field_0x4, C_@5187); */
    /* ((mDoExt_McaMorf*)(this->field_0x6d0))->entryDL(); */
    /* ((J3DMaterialTable*)((this->field_0x4 + 88)))->removeTexMtxAnimator(this->field_0x6e4); */
    if (this->field_0x813 != 0) {
        /* ((dScnKy_env_light_c*)(((char*)&g_env_light + 0)))->setLightTevColorType(this->field_0x6f4, (_savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 268)); */
        /* mDoExt_modelEntryDL(this->field_0x6f4); */
    }
    /* ((daNpc_Co1_c*)(_savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->shadowDraw(); */
    /* dSnap_RegistFig(139, _savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7), C_@4392); */
    return _restgpr_27(1);
}

/* 0000295C-00002B08       .text _execute__11daNpc_Co1_cFv */
BOOL daNpc_Co1_c::_execute() {
        /* if (this->field_0x815 != 0) goto L_28c8; */
        /* field_0x79c = 0; */
        /* field_0x7a0 = 0; */
        /* field_0x7a4 = 0; */
        /* field_0x815 = 1; */
        /* L_28c8:; */
        /* ((dNpc_JntCtrl_c*)((this + 656)))->setParam(this->field_0x14, this->field_0x16, this->field_0x18, this->field_0x1a, this->field_0xc, this->field_0xe, this->field_0x10); */
        /* if (this->field_0x80d == 0) goto L_2924; */
        /* if (demoActorID != 0) goto L_2924; */
        return 1;
        /* L_2924:; */
        /* field_0x810 = 0; */
        /* field_0x80d = 0; */
        checkOrder();
        /* if (demo() != 0) goto L_29dc; */
        /* if (this->field_0x529a == 0) goto L_2978; */
        /* if (this->field_0xf8 == 1) goto L_2978; */
        /* L_2978:; */
        /* if (isEventEntry() < 0) goto L_298c; */
        event_proc(isEventEntry());
        /* goto L_29a0; */
        /* L_298c:; */
        __ptmf_scall(this, 0);
        /* L_29a0:; */
        /* if (this->field_0x810 != 0) goto L_29b8; */
        fopAcM_posMoveF(this, (this + 1336));
        /* L_29b8:; */
        /* if (this->field_0x80f != 0) goto L_29dc; */
        /* L_29dc:; */
        eventOrder();
        setMtx(0);
        /* if (this->field_0x81f != 0) goto L_2a04; */
        setCollision_SP();
        /* L_2a04:; */
        return 1;
}

/* 00002B08-00002B6C       .text _delete__11daNpc_Co1_cFv */
BOOL daNpc_Co1_c::_delete() {
    /* dComIfG_resDelete((this + 1732), ((char*)&@stringBase0 + 28), arg2); */
    dKy_plight_cut((this + 2080));
    if (heap != 0) {
        /* if (this->field_0x330 != 0) goto L_2a68; */
        /* ((mDoExt_McaMorf*)(this->field_0x330))->stopZelAnime(); */
    }
    /* L_2a68:; */
    return 1;
}

/* 00002B6C-00002B8C       .text CheckCreateHeap__FP10fopAc_ac_c */
static BOOL CheckCreateHeap(fopAc_ac_c* i_this) {
    ((daNpc_Co1_c*)i_this)->CreateHeap();
    return TRUE;
}

/* 00002B8C-00002CAC       .text _create__11daNpc_Co1_cFv */
cPhs_State daNpc_Co1_c::_create() {
        /* _savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* if (/ * bne * / 1) goto L_2ae4; */
        /* if (_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) == 0) goto L_2ad8; */
        __ct();
        /* L_2ad8:; */
        /* L_2ae4:; */
        /* if (dComIfG_resLoad((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1732), ((char*)&@stringBase0 + 28)) == 4) goto L_2b08; */
        /* goto L_2ba8; */
        /* L_2b08:; */
        /* if (((daNpc_Co1_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->charDecide((this->field_0xb0 & 16777215)) != 0) goto L_2b28; */
        return 5;
        /* L_2b28:; */
        /* if (fopAcM_entrySolidHeap(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7), ((char*)&CheckCreateHeap__FP10fopAc_ac_c + 0), ((char*)&a_size_tbl$5241 + 0)) != 0) goto L_2b60; */
        return 5;
        /* L_2b60:; */
        cullMtx = (this->field_0x50 + 36);
        /* fopAcM_setCullSizeBox(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* if (((daNpc_Co1_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->createInit() == 0) goto L_2ba8; */
        /* L_2ba8:; */
        /* return _restgpr_29(dComIfG_resLoad((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1732), ((char*)&@stringBase0 + 28))); */
}

/* 00003150-000033C0       .text create_Anm__11daNpc_Co1_cFv */
void daNpc_Co1_c::create_Anm() {
    /* _savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
    ((dRes_control_c*)(((char*)&@stringBase0 + 28)))->getIDRes(19);
    if (/* bne */ 1) {
        ((JUTAssertion*)(((JUTAssertion*)(((dRes_control_c*)(((char*)&@stringBase0 + 28)))->getIDRes(19)))->getSDevice()))->showAssert(((char*)&@stringBase0 + 31), 2079, ((char*)&@stringBase0 + 101));
        OSPanic(((char*)&@stringBase0 + 31), 2079, ((char*)&@stringBase0 + 68));
    }
    __nw(180);
    if (/* beq */ 1) {
    }
    /* field_0x330 = __ct(((dRes_control_c*)(((char*)&@stringBase0 + 28)))->getIDRes(16), 1); */
    if (this->field_0x330 == 0) {
        return 0;
    }
    if (this->field_0x50 == 0) {
        /* field_0x330 = 0; */
        return 0;
    }
    /* field_0x6cc = ((JUTNameTab*)(this->field_0x54))->getIndex(((char*)&@stringBase0 + 116)); */
    if (this->field_0x6cc != 0) {
        /* ((JUTAssertion*)(((JUTAssertion*)(((JUTNameTab*)(this->field_0x54))->getIndex(((char*)&@stringBase0 + 116))))->getSDevice()))->showAssert(((char*)&@stringBase0 + 31), 2099, ((char*)&@stringBase0 + 121)); */
        OSPanic(((char*)&@stringBase0 + 31), 2099, ((char*)&@stringBase0 + 68));
    }
    /* field_0x6cd = ((JUTNameTab*)(this->field_0x54))->getIndex(((char*)&@stringBase0 + 140)); */
    if (this->field_0x6cd != 0) {
        /* ((JUTAssertion*)(((JUTAssertion*)(((JUTNameTab*)(this->field_0x54))->getIndex(((char*)&@stringBase0 + 140))))->getSDevice()))->showAssert(((char*)&@stringBase0 + 31), 2102, ((char*)&@stringBase0 + 149)); */
        OSPanic(((char*)&@stringBase0 + 31), 2102, ((char*)&@stringBase0 + 68));
    }
    /* field_0x6ce = ((JUTNameTab*)(this->field_0x54))->getIndex(((char*)&@stringBase0 + 170)); */
    if (this->field_0x6ce != 0) {
        /* ((JUTAssertion*)(((JUTAssertion*)(((JUTNameTab*)(this->field_0x54))->getIndex(((char*)&@stringBase0 + 170))))->getSDevice()))->showAssert(((char*)&@stringBase0 + 31), 2105, ((char*)&@stringBase0 + 176)); */
    }
    return _restgpr_28(OSPanic(((char*)&@stringBase0 + 31), 2105, ((char*)&@stringBase0 + 68)));
}

/* 000033C0-00003578       .text create_prl_Anm__11daNpc_Co1_cFv */
void daNpc_Co1_c::create_prl_Anm() {
    /* _savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
    ((dRes_control_c*)(((char*)&@stringBase0 + 28)))->getIDRes(20);
    if (/* bne */ 1) {
        ((JUTAssertion*)(((JUTAssertion*)(((dRes_control_c*)(((char*)&@stringBase0 + 28)))->getIDRes(20)))->getSDevice()))->showAssert(((char*)&@stringBase0 + 31), 2120, ((char*)&@stringBase0 + 101));
        OSPanic(((char*)&@stringBase0 + 31), 2120, ((char*)&@stringBase0 + 68));
    }
    __nw(180);
    if (/* beq */ 1) {
    }
    /* field_0x6d0 = __ct(((dRes_control_c*)(((char*)&@stringBase0 + 28)))->getIDRes(7), 1); */
    if (this->field_0x6d0 == 0) {
        return 0;
    }
    if (this->field_0x50 == 0) {
        /* field_0x6d0 = 0; */
        return 0;
    }
    /* field_0x6d8 = ((JUTNameTab*)(this->field_0x54))->getIndex(((char*)&@stringBase0 + 197)); */
    if (this->field_0x6d8 != 0) {
        /* ((JUTAssertion*)(((JUTAssertion*)(((JUTNameTab*)(this->field_0x54))->getIndex(((char*)&@stringBase0 + 197))))->getSDevice()))->showAssert(((char*)&@stringBase0 + 31), 2140, ((char*)&@stringBase0 + 206)); */
    }
    return _restgpr_28(OSPanic(((char*)&@stringBase0 + 31), 2140, ((char*)&@stringBase0 + 68)));
}

/* 00003578-00003634       .text create_itm_Mdl__11daNpc_Co1_cFv */
void daNpc_Co1_c::create_itm_Mdl() {
    /* field_0x6f4 = 0; */
    /* ((dRes_control_c*)(((char*)&@stringBase0 + 28)))->getIDRes(18, ((char*)&g_dComIfG_gameInfo + -16460), 64, arg4, arg5); */
    if (/* bne */ 1) {
        /* ((JUTAssertion*)(((JUTAssertion*)(((dRes_control_c*)(((char*)&@stringBase0 + 28)))->getIDRes(18, ((char*)&g_dComIfG_gameInfo + -16460), 64, arg4, arg5)))->getSDevice()))->showAssert(((char*)&@stringBase0 + 31), 2158, ((char*)&@stringBase0 + 101)); */
    }
    /* field_0x6f4 = mDoExt_J3DModel(OSPanic(((char*)&@stringBase0 + 31), 2158, ((char*)&@stringBase0 + 68))); */
    return 1;
}

/* 00003634-000037C8       .text CreateHeap__11daNpc_Co1_cFv */
void daNpc_Co1_c::CreateHeap() {
        create_Anm();
        /* if (/ * bne * / 1) goto L_3574; */
        return 0;
        /* L_3574:; */
        /* field_0x858 = 6; */
        /* if (iniTexPttrnAnm(0) != 0) goto L_35a0; */
        /* field_0x330 = 0; */
        return 0;
        /* L_35a0:; */
        /* if (create_prl_Anm() != 0) goto L_35c0; */
        /* field_0x330 = 0; */
        return 0;
        /* L_35c0:; */
        /* if (setBtk(0) != 0) goto L_35e8; */
        /* field_0x330 = 0; */
        /* field_0x6d0 = 0; */
        return 0;
        /* L_35e8:; */
        /* if (create_itm_Mdl() == 0) goto L_36b4; */
        /* goto L_364c; */
        /* L_3608:; */
        /* if ((0 & 65535) == (this->field_0x6cc & 255)) goto L_362c; */
        /* if ((0 & 65535) != (this->field_0x6cd & 255)) goto L_3648; */
        /* L_362c:; */
        /* field_0x8 = 0; */
        /* L_3648:; */
        /* L_364c:; */
        /* if (((0 + 1) & 65535) < this->field_0x28) goto L_3608; */
        /* field_0x14 = this; */
        ((dBgS_AcchCir*)((this + 1272)))->SetWall(C_@4620, (0 + 1));
        ((dBgS_Acch*)((this + 820)))->Set((this + 504), (this + 484), this, 1, (this + 1272), (this + 544), 0);
        return 1;
        /* L_36b4:; */
        /* field_0x330 = 0; */
        /* field_0x6d0 = 0; */
        return 0;
}

/* 000037C8-000037E8       .text daNpc_Co1_Create__FP10fopAc_ac_c */
static cPhs_State daNpc_Co1_Create(fopAc_ac_c* i_this) {
    return ((daNpc_Co1_c*)i_this)->_create();
}

/* 000037E8-00003808       .text daNpc_Co1_Delete__FP11daNpc_Co1_c */
static BOOL daNpc_Co1_Delete(daNpc_Co1_c* i_this) {
    return ((daNpc_Co1_c*)i_this)->_delete();
}

/* 00003808-00003828       .text daNpc_Co1_Execute__FP11daNpc_Co1_c */
static BOOL daNpc_Co1_Execute(daNpc_Co1_c* i_this) {
    return ((daNpc_Co1_c*)i_this)->_execute();
}

/* 00003828-00003848       .text daNpc_Co1_Draw__FP11daNpc_Co1_c */
static BOOL daNpc_Co1_Draw(daNpc_Co1_c* i_this) {
    return ((daNpc_Co1_c*)i_this)->_draw();
}

/* 00003848-00003850       .text daNpc_Co1_IsDelete__FP11daNpc_Co1_c */
static BOOL daNpc_Co1_IsDelete(daNpc_Co1_c*) {
    return 1;

static actor_method_class l_daNpc_Co1_Method = {
    (process_method_func)daNpc_Co1_Create,
    (process_method_func)daNpc_Co1_Delete,
    (process_method_func)daNpc_Co1_Execute,
    (process_method_func)daNpc_Co1_IsDelete,
    (process_method_func)daNpc_Co1_Draw,
};

actor_process_profile_definition g_profile_NPC_CO1 = {
    /* Layer ID     */ fpcLy_CURRENT_e,
    /* List ID      */ 0x0007,
    /* List Prio    */ fpcPi_CURRENT_e,
    /* Proc Name    */ fpcNm_NPC_CO1_e,
    /* Proc SubMtd  */ &g_fpcLf_Method.base,
    /* Size         */ sizeof(daNpc_Co1_c),
    /* Size Other   */ 0,
    /* Parameters   */ 0,
    /* Leaf SubMtd  */ &g_fopAc_Method.base,
    /* Draw Prio    */ fpcDwPi_NPC_CO1_e,
    /* Actor SubMtd */ &l_daNpc_Co1_Method,
    /* Status       */ 0x07 | fopAcStts_SHOWMAP_e | fopAcStts_NOCULLEXEC_e | fopAcStts_CULL_e | fopAcStts_UNK40000_e,
    /* Group        */ fopAc_NPC_e,
    /* Cull Type    */ fopAc_CULLBOX_CUSTOM_e,
};

/* 由 fix_decomp_braces.py 补齐：反编译产物末尾缺 1 个 } */
}
