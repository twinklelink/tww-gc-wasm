/**
 * d_a_npc_aj1.cpp
 * NPC - Sturgeon
 */

#include "d/dolzel_rel.h" // IWYU pragma: keep
#include "d/actor/d_a_npc_aj1.h"

/* 000000EC-00000150       .text __ct__15daNpc_Aj1_HIO_cFv */
daNpc_Aj1_HIO_c::daNpc_Aj1_HIO_c() {
    /* __ct__15daNpc_Aj1_HIO_cFv: 无实义指令 */
}

/* 00000198-000001E4       .text nodeCB_Head__FP7J3DNodei */
static BOOL nodeCB_Head(J3DNode* i_param_1, int i_param_2) {
    if (i_param_2 == 0) {
        if (j3dSys.getModel()->getUserArea() != NULL) {
            reinterpret_cast<daNpc_Aj1_c*>(j3dSys.getModel()->getUserArea())
                ->_nodeCB_Head(i_param_1, j3dSys.getModel());
        }
    }
    return TRUE;
}

/* 000001E4-0000030C       .text _nodeCB_Head__11daNpc_Aj1_cFP7J3DNodeP8J3DModel */
void daNpc_Aj1_c::_nodeCB_Head(J3DNode*, J3DModel*) {
    /* _savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
    if (this->field_0xa0 != 0) {
        /* field_0xa4 = 0; */
        /* field_0x4 = 0; */
        /* field_0x8 = 0; */
        /* __register_global_object(((C_@3569 + 0) + 164), ((char*)&__dt__4cXyzFv + 0), ((C_@3569 + 0) + 148)); */
        /* field_0xa0 = 1; */
    }
    PSMTXCopy((this->field_0x8c + (this->field_0x18 * 48)), ((char*)&now__14mDoMtx_stack_c + 0));
    /* field_0x72c = 0; */
    /* field_0x730 = 0; */
    /* field_0x734 = 0; */
    /* mDoMtx_YrotM(((char*)&now__14mDoMtx_stack_c + 0), ((-this->field_0x292) & 65535)); */
    mDoMtx_ZrotM(((char*)&now__14mDoMtx_stack_c + 0), ((-m290) & 65535));
    /* PSMTXMultVec(((char*)&now__14mDoMtx_stack_c + 0), ((C_@3569 + 0) + 164), (_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1812)); */
    PSMTXCopy(((char*)&now__14mDoMtx_stack_c + 0), ((char*)&mCurrentMtx__6J3DSys + 0));
    return _restgpr_28(PSMTXCopy(((char*)&now__14mDoMtx_stack_c + 0), (this->field_0x8c + (this->field_0x18 * 48))));
}

/* 00000348-00000394       .text nodeCB_BackBone__FP7J3DNodei */
static BOOL nodeCB_BackBone(J3DNode* i_param_1, int i_param_2) {
    if (i_param_2 == 0) {
        if (j3dSys.getModel()->getUserArea() != NULL) {
            reinterpret_cast<daNpc_Aj1_c*>(j3dSys.getModel()->getUserArea())
                ->_nodeCB_BackBone(i_param_1, j3dSys.getModel());
        }
    }
    return TRUE;
}

/* 00000394-0000042C       .text _nodeCB_BackBone__11daNpc_Aj1_cFP7J3DNodeP8J3DModel */
void daNpc_Aj1_c::_nodeCB_BackBone(J3DNode*, J3DModel*) {
    /* _savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
    PSMTXCopy();
    /* mDoMtx_XrotM(((char*)&now__14mDoMtx_stack_c + 0), this->field_0x296); */
    /* mDoMtx_ZrotM(((char*)&now__14mDoMtx_stack_c + 0), this->field_0x294); */
    PSMTXCopy(((char*)&now__14mDoMtx_stack_c + 0), ((char*)&mCurrentMtx__6J3DSys + 0));
    return _restgpr_29(PSMTXCopy(((char*)&now__14mDoMtx_stack_c + 0)));
}

/* 0000042C-0000044C       .text CheckCreateHeap__FP10fopAc_ac_c */
static BOOL CheckCreateHeap(fopAc_ac_c* i_this) {
    ((daNpc_Aj1_c*)i_this)->CreateHeap();
    return TRUE;
}

/* 0000044C-0000046C       .text daNpc_Aj1_XyCheck_CB__FPvi */
static void daNpc_Aj1_XyCheck_CB(void* i_this, int i_param) {
    static_cast<daNpc_Aj1_c*>(i_this)->_XyCheckCB(i_param);
}

/* 0000046C-0000048C       .text _XyCheckCB__11daNpc_Aj1_cFi */
void daNpc_Aj1_c::_XyCheckCB(int) {
    /* _XyCheckCB__11daNpc_Aj1_cFi: 无实义指令 */
}

/* 0000048C-00000574       .text init_AJ1_0__11daNpc_Aj1_cFv */
void daNpc_Aj1_c::init_AJ1_0() {
    if (((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->isEventBit(3616) == 0) {
        /* if (((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->isEventBit(1282) == 0) goto L_42c; */
        /* field_0x26d = 26; */
        set_action();
        return 1;
    }
    /* L_42c:; */
    if (this->field_0x75b != 255) {
        /* if (((dSv_info_c*)(((char*)&g_dComIfG_gameInfo + 0)))->isSwitch(this->field_0x75b, (this->field_0x20a & 255)) == 0) goto L_46c; */
        ((dSv_info_c*)(((char*)&g_dComIfG_gameInfo + 0)))->onSwitch(this->field_0x75b, (this->field_0x20a & 255));
    }
    /* L_46c:; */
    return 0;
}

/* 00000574-00000624       .text init_AJ1_1__11daNpc_Aj1_cFv */
void daNpc_Aj1_c::init_AJ1_1() {
    if (((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->isEventBit(1312) == 0) {
        ((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->onEventBit(1282);
        set_action();
        return 1;
    }
    return 0;
}

/* 00000624-000006B0       .text init_AJ1_2__11daNpc_Aj1_cFv */
void daNpc_Aj1_c::init_AJ1_2() {
    if (((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->isEventBit(1312) != 0) {
        /* field_0x104 = 0; */
        set_action();
        return 1;
    }
    return 0;
}

/* 000006B0-00000868       .text createInit__11daNpc_Aj1_cFv */
void daNpc_Aj1_c::createInit() {
        /* field_0x744 = ((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getEventIdx(base, 255, arg3); */
        ((dNpc_EventCut_c*)((this + 708)))->setActorInfo2(((char*)&@stringBase0 + 6), this);
        /* field_0x280 = 10; */
        /* field_0x26d = 173; */
        /* field_0x26f = 173; */
        /* field_0x7b9 = 9; */
        /* if ((this->field_0x7bf & 255) == 1) goto L_67c; */
        /* if (/ * bge * / 1) goto L_664; */
        /* if ((this->field_0x7bf & 255) >= 0) goto L_670; */
        /* goto L_694; */
        /* L_664:; */
        /* if ((this->field_0x7bf & 255) >= 3) goto L_694; */
        /* goto L_688; */
        /* L_670:; */
        init_AJ1_0();
        /* goto L_698; */
        /* L_67c:; */
        init_AJ1_1();
        /* goto L_698; */
        /* L_688:; */
        init_AJ1_2();
        /* goto L_698; */
        /* L_694:; */
        /* L_698:; */
        /* if (0 != 0) goto L_6a8; */
        return 0;
        /* L_6a8:; */
        gravity = 0;
        ((dCcD_Stts*)((this + 1336)))->Init(255, 255, this);
        /* field_0x5b8 = (this + 1336); */
        ((dCcD_Cyl*)((this + 1396)))->Set(((char*)&dNpc_cyl_src + 0));
        play_animation();
        ((dBgS_Acch*)((this + 820)))->CrrPos(((char*)&g_dComIfG_gameInfo + 4768));
        /* field_0x1b5 = ((dBgS*)(((char*)&g_dComIfG_gameInfo + 4768)))->GetRoomId((this + 1052)); */
        /* field_0x1b6 = ((dBgS*)(((char*)&g_dComIfG_gameInfo + 4768)))->GetPolyColor((this + 1052)); */
        /* ((mDoExt_McaMorf*)(this->field_0x330))->setMorf(C_@4187); */
        setMtx(1);
        return 1;
}

/* 00000868-00000910       .text play_animation__11daNpc_Aj1_cFv */
void daNpc_Aj1_c::play_animation() {
    play_texPttrnAnm();
    if (/* beq */ 1) {
        ((dBgS*)(((char*)&g_dComIfG_gameInfo + 4768)))->GetMtrlSndId((this + 1052));
    }
    /* field_0x758 = ((mDoExt_McaMorf*)(this->field_0x330))->play((this + 608), ((dBgS*)(((char*)&g_dComIfG_gameInfo + 4768)))->GetMtrlSndId((this + 1052)), dComIfGp_getReverb((this->field_0x20a & 255))); */
    /* if (this->field_0x68 > this->field_0x740) { */
        /* field_0x758 = 1; */
    /* field_0x740 = 0; */
    /* return this->field_0x330; */

/* 00000910-000009C0       .text ctrl_WAITanm__11daNpc_Aj1_cFv */
void daNpc_Aj1_c::ctrl_WAITanm() {
        /* if ((this->field_0x7b9 & 255) == 1) goto L_898; */
        /* if (/ * bge * / 1) goto L_8c0; */
        /* if ((this->field_0x7b9 & 255) >= 0) goto L_858; */
        /* goto L_8c0; */
        /* L_858:; */
        /* if (cLib_calcTimer<s>__FPs((this + 1864), arg1, arg2, arg3, arg4, arg5, arg6, arg7) != 0) goto L_8c0; */
        /* if (this->field_0x758 == 0) goto L_8c0; */
        /* if (chk_parts_notMov() == 0) goto L_8c0; */
        setAnm_NUM(1, 1);
        /* goto L_8c0; */
        /* L_898:; */
        /* if (this->field_0x758 == 0) goto L_8c0; */
        ((daNpc_Aj1_c*)(setAnm_NUM(1, 1)))->setAnm_NUM(0, 1);
        /* field_0x748 = cLib_getRndValue<i>__Fii(90, 180); */
        /* L_8c0:; */
        return cLib_getRndValue<i>__Fii(90, 180);
}

/* 000009C0-00000A3C       .text ctrl_TIREanm__11daNpc_Aj1_cFv */
void daNpc_Aj1_c::ctrl_TIREanm() {
    if (this->field_0x7b9 == 6) {
        /* if (this->field_0x758 == 0) goto L_93c; */
        /* if (cLib_calcTimer<Uc>__FPUc((this + 1884), arg1, arg2, arg3, arg4, arg5, arg6, arg7) != 0) goto L_93c; */
        setAnm_NUM(0, 1);
        /* ((mDoExt_McaMorf*)(this->field_0x330))->setMorf(C_@4373); */
    } else {
        /* field_0x75c = 0; */
    }
    /* L_93c:; */
    /* return ((mDoExt_McaMorf*)(this->field_0x330))->setMorf(C_@4373); */
}

/* 00000A3C-00000B30       .text setMtx__11daNpc_Aj1_cFb */
void daNpc_Aj1_c::setMtx(bool) {
    /* field_0x18 = 0; */
    /* field_0x1c = 0; */
    /* field_0x20 = 0; */
    /* PSMTXTrans(((char*)&now__14mDoMtx_stack_c + 0), bool, arg2, arg3, arg4, arg5, arg6, arg7); */
    /* mDoMtx_ZXYrotM(((char*)&now__14mDoMtx_stack_c + 0), this->field_0x70e, this->field_0x710); */
    PSMTXCopy(((char*)&now__14mDoMtx_stack_c + 0), (this->field_0x50 + 36));
    /* ((mDoExt_McaMorf*)(this->field_0x330))->calc(); */
    if (this->field_0x6d0 != 0) {
        PSMTXCopy((this->field_0x8c + ((this->field_0x6ce & 255) * 48)), (this->field_0x6d0 + 36));
    }
    return setAttention(bool);
}

/* 00000B30-00000B44       .text bckResID__11daNpc_Aj1_cFi */
int daNpc_Aj1_c::bckResID(int anmNum) {
    static const int a_res_id_tbl[] = {
        7, 8, 0, 2, 5, 3, 6, 1, 4, 11,
    };
    return a_res_id_tbl[anmNum];
}

/* 00000B44-00000B58       .text btpResID__11daNpc_Aj1_cFi */
int daNpc_Aj1_c::btpResID(int anmNum) {
    static const int a_res_id_tbl[] = {
        11,
    };
    return a_res_id_tbl[anmNum];
}

/* 00000B58-00000C64       .text init_texPttrnAnm__11daNpc_Aj1_cFScb */
void daNpc_Aj1_c::init_texPttrnAnm(signed char, bool) {
    /* _savegpr_27(this, char, bool, arg3, arg4, arg5, arg6, arg7); */
    if (/* bge */ 1) {
        return 0;
    }
    ((dRes_control_c*)(((char*)&@stringBase0 + 10)))->getIDRes((((daNpc_Aj1_c*)(0))->btpResID() & 65535), ((char*)&g_dComIfG_gameInfo + -16460), 64);
    if (/* bne */ 1) {
        ((JUTAssertion*)(((JUTAssertion*)(((dRes_control_c*)(((char*)&@stringBase0 + 10)))->getIDRes((((daNpc_Aj1_c*)(0))->btpResID() & 65535), ((char*)&g_dComIfG_gameInfo + -16460), 64)))->getSDevice()))->showAssert(((char*)&@stringBase0 + 13), 531, ((char*)&@stringBase0 + 29));
        OSPanic(((char*)&@stringBase0 + 13), 531, ((char*)&@stringBase0 + 40));
    }
    /* field_0x6ec = 0; */
    /* field_0x6ee = 0; */
    /* return _restgpr_27(((mDoExt_btpAnm*)((_savegpr_27(this, char, bool, arg3, arg4, arg5, arg6, arg7) + 1752)))->init(this->field_0x4)); */
}

/* 00000C64-00000CF4       .text play_texPttrnAnm__11daNpc_Aj1_cFv */
void daNpc_Aj1_c::play_texPttrnAnm() {
        /* if (m7B8 != 0) goto L_ba8; */
        /* if (cLib_calcTimer<s>__FPs((this + 1774), arg1, arg2, arg3, arg4, arg5, arg6, arg7) != 0) goto L_bf4; */
        /* L_ba8:; */
        /* field_0x6ec = (this->field_0x6ec + 1); */
        /* if (this->field_0x6ec < this->field_0x6) goto L_bf4; */
        /* if (m7B8 == 0) goto L_bdc; */
        /* goto L_bf4; */
        /* L_bdc:; */
        /* field_0x6ee = cLib_getRndValue<i>__Fii(60, 90); */
        /* field_0x6ec = 0; */
        /* L_bf4:; */
        return cLib_getRndValue<i>__Fii(60, 90);
}

/* 00000CF4-00000DFC       .text setAnm_anm__11daNpc_Aj1_cFPQ211daNpc_Aj1_c9anm_prm_c */
void daNpc_Aj1_c::setAnm_anm(daNpc_Aj1_c::anm_prm_c*) {
        /* if (/ * blt * / 1) goto L_cf8; */
        /* if ((this->field_0x7b9 & 255) != 0) goto L_c48; */
        /* goto L_cf8; */
        /* L_c48:; */
        dNpc_setAnmIDRes(this->field_0x330, this->field_0xc, bckResID(), -1, ((char*)&@stringBase0 + 10));
        /* field_0x758 = 0; */
        /* field_0x759 = 0; */
        /* field_0x740 = 0; */
        /* if (this->field_0x7b9 == 2) goto L_ca4; */
        /* goto L_cc0; */
        /* L_ca4:; */
        set_pa_pun();
        set_pa_aka();
        set_pa_don();
        /* goto L_cf8; */
        /* L_cc0:; */
        /* if (this->field_0x794 == 0) goto L_ce0; */
        /* field_0x7b4 = 1; */
        /* L_ce0:; */
        del_pa((this + 1936));
        /* L_cf8:; */
        return del_pa((this + 1944));
}

/* 00000DFC-00000E6C       .text setAnm_NUM__11daNpc_Aj1_cFii */
void daNpc_Aj1_c::setAnm_NUM(int, int) {
    if (int != 0) {
        /* init_texPttrnAnm(this->field_0x1, 1, arg3, arg4, arg5, arg6, arg7); */
    }
    return setAnm_anm((((char*)&a_anm_prm_tbl$4477 + 0) + (int << 4)), (int << 4));
}

/* 00000E6C-00000ED8       .text setAnm__11daNpc_Aj1_cFv */
void daNpc_Aj1_c::setAnm() {
    /* init_texPttrnAnm(this->field_0x1, 1, arg3, arg4, arg5, arg6, arg7); */
    return setAnm_anm((((char*)&a_anm_prm_tbl$4484 + 0) + ((this->field_0x7bb & 255) << 4)), ((this->field_0x7bb & 255) << 4));
}

/* 00000ED8-00000EDC       .text chngAnmTag__11daNpc_Aj1_cFv */
void daNpc_Aj1_c::chngAnmTag() {
}

/* 00000EDC-00000EE0       .text ctrlAnmTag__11daNpc_Aj1_cFv */
void daNpc_Aj1_c::ctrlAnmTag() {
}

/* 00000EE0-00000F44       .text chngAnmAtr__11daNpc_Aj1_cFUc */
void daNpc_Aj1_c::chngAnmAtr(unsigned char) {
        /* if ((char & 16777215) == m7B6) goto L_e44; */
        /* if ((char & 16777215) <= 9) goto L_e24; */
        /* goto L_e44; */
        /* L_e24:; */
        m7B6 = char;
        setAnm_ATR();
        /* if (m7B6 == 8) goto L_e3c; */
        /* goto L_e44; */
        /* L_e3c:; */
        /* field_0x75c = 3; */
        /* L_e44:; */
        return setAnm_ATR();
}

/* 00000F44-00000FC0       .text ctrlAnmAtr__11daNpc_Aj1_cFv */
void daNpc_Aj1_c::ctrlAnmAtr() {
        /* if (m7B6 == 5) goto L_e98; */
        /* if (/ * bge * / 1) goto L_eb8; */
        /* if (m7B6 == 2) goto L_e90; */
        /* if (/ * bge * / 1) goto L_eb8; */
        /* goto L_eb8; */
        /* goto L_eb8; */
        /* L_e90:; */
        ctrl_WAITanm();
        /* goto L_eb8; */
        /* L_e98:; */
        /* if (this->field_0x758 == 0) goto L_eb8; */
        m7B6 = 0;
        ((daNpc_Aj1_c*)(ctrl_WAITanm()))->setAnm_NUM(0, 1);
        /* L_eb8:; */
        return ctrl_TIREanm();
}

/* 00000FC0-00001024       .text setAnm_ATR__11daNpc_Aj1_cFv */
void daNpc_Aj1_c::setAnm_ATR() {
    /* init_texPttrnAnm(this->field_0x1, 1, arg3, arg4, arg5, arg6, arg7); */
    return setAnm_anm((((char*)&a_anm_prm_tbl$4535 + 0) + (m7B6 << 4)), (m7B6 << 4));
}

/* 00001024-000010E0       .text anmAtr__11daNpc_Aj1_cFUs */
void daNpc_Aj1_c::anmAtr(unsigned short) {
        /* if ((short & 65535) == 14) goto L_fc8; */
        /* if (/ * bge * / 1) goto L_fd0; */
        /* if ((short & 65535) == 6) goto L_f68; */
        /* goto L_fd0; */
        /* L_f68:; */
        /* if (m7C1 != 0) goto L_f90; */
        /* chngAnmAtr(this->field_0x5bcf); */
        m7C1 = (m7C1 + 1);
        /* L_f90:; */
        /* if (this->field_0x5bd0 == 255) goto L_fd0; */
        /* if (this->field_0x5bd0 == m7B7) goto L_fd0; */
        /* field_0x5bd0 = 255; */
        chngAnmTag();
        /* goto L_fd0; */
        /* L_fc8:; */
        m7C1 = 0;
        /* L_fd0:; */
        ctrlAnmAtr();
        return ctrlAnmTag();
}

/* 000010E0-000012B4       .text next_msgStatus__11daNpc_Aj1_cFPUl */
void daNpc_Aj1_c::next_msgStatus(unsigned long*) {
        /* _savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* if (/ * bgt * / 1) goto L_11a8; */
        base = 2503;
        /* goto L_11ac; */
        base = 2504;
        /* goto L_11ac; */
        base = 2506;
        /* goto L_11ac; */
        /* if (((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->isEventBit(1) == 0) goto L_109c; */
        /* if (((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->isEventBit(14084) != 0) goto L_109c; */
        base = 2522;
        /* goto L_11ac; */
        /* L_109c:; */
        /* goto L_11ac; */
        /* if (((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->isEventBit(1284) != 0) goto L_10f0; */
        /* if (((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->isEventBit(10880) == 0) goto L_10e4; */
        base = 2524;
        /* goto L_11ac; */
        /* L_10e4:; */
        base = 2507;
        /* goto L_11ac; */
        /* L_10f0:; */
        base = 2511;
        /* goto L_11ac; */
        base = 2508;
        /* goto L_11ac; */
        base = 2510;
        /* goto L_11ac; */
        /* if (((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->isEventBit(1) == 0) goto L_1154; */
        /* if (((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->isEventBit(14084) != 0) goto L_1154; */
        base = 2525;
        /* goto L_11ac; */
        /* L_1154:; */
        /* goto L_11ac; */
        /* if (((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->isEventBit(10784) != 0) goto L_1184; */
        base = 2513;
        /* goto L_11ac; */
        /* L_1184:; */
        /* if (dKy_daynight_check() != 0) goto L_119c; */
        base = 2514;
        /* goto L_11ac; */
        /* L_119c:; */
        base = 2515;
        /* goto L_11ac; */
        /* L_11a8:; */
        /* L_11ac:; */
        return _restgpr_29(16);
}

/* 000012B4-000012F4       .text getMsg_AJ1_0__11daNpc_Aj1_cFv */
void daNpc_Aj1_c::getMsg_AJ1_0() {
    if (((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->isEventBit(1296) != 0) {
    }
    return 2505;
}

/* 000012F4-00001398       .text getMsg_AJ1_1__11daNpc_Aj1_cFv */
void daNpc_Aj1_c::getMsg_AJ1_1() {
    if (((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->isEventBit(3616) != 0) {
        /* if (((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->isEventBit(14082) == 0) goto L_1260; */
        ((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->onEventBit(14082);
        return 2523;
    }
    /* L_1260:; */
    if (((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->isEventBit(1284) != 0) {
        return 2511;
    }
    if (((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->isEventBit(10880) != 0) {
    }
    return 2524;
}

/* 00001398-00001460       .text getMsg_AJ1_2__11daNpc_Aj1_cFv */
void daNpc_Aj1_c::getMsg_AJ1_2() {
        /* if (this->field_0x75a != 72) goto L_130c; */
        /* if (((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->isEventBit(14081) != 0) goto L_12f0; */
        return 2519;
        /* L_12f0:; */
        ((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->isEventBit(2848);
        /* goto L_1360; */
        /* L_130c:; */
        /* if (((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->isEventBit(14088) != 0) goto L_1334; */
        return 2512;
        /* L_1334:; */
        /* if (((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->isEventBit(10784) != 0) goto L_1350; */
        return 2516;
        /* L_1350:; */
        /* L_1360:; */
        return (dKy_daynight_check() + 2518);
}

/* 00001460-000014D0       .text getMsg__11daNpc_Aj1_cFv */
void daNpc_Aj1_c::getMsg() {
        /* if ((this->field_0x7bf & 255) == 1) goto L_13bc; */
        /* if (/ * bge * / 1) goto L_13a4; */
        /* if ((this->field_0x7bf & 255) >= 0) goto L_13b0; */
        /* goto L_13d0; */
        /* L_13a4:; */
        /* if ((this->field_0x7bf & 255) >= 3) goto L_13d0; */
        /* goto L_13c8; */
        /* L_13b0:; */
        getMsg_AJ1_0();
        /* goto L_13d0; */
        /* L_13bc:; */
        ((daNpc_Aj1_c*)(getMsg_AJ1_0()))->getMsg_AJ1_1();
        /* goto L_13d0; */
        /* L_13c8:; */
        /* L_13d0:; */
        return ((daNpc_Aj1_c*)(((daNpc_Aj1_c*)(getMsg_AJ1_0()))->getMsg_AJ1_1()))->getMsg_AJ1_2();
}

/* 000014D0-00001574       .text eventOrder__11daNpc_Aj1_cFv */
void daNpc_Aj1_c::eventOrder() {
        /* if ((this->field_0x7ba & 255) == 1) goto L_1408; */
        /* if ((this->field_0x7ba & 255) != 2) goto L_1440; */
        /* L_1408:; */
        /* if (this->field_0x7bf != 2) goto L_142c; */
        /* L_142c:; */
        /* if (this->field_0x7ba != 1) goto L_1478; */
        fopAcM_orderSpeakEvent(this);
        /* goto L_1478; */
        /* L_1440:; */
        /* if (/ * blt * / 1) goto L_1478; */
        /* field_0x746 = 0; */
        /* L_1478:; */
        return fopAcM_orderOtherEventId(fopAcM_orderSpeakEvent(this), this->field_0x744, 255);
}

/* 00001574-00001628       .text checkOrder__11daNpc_Aj1_cFv */
void daNpc_Aj1_c::checkOrder() {
        /* if (this->field_0xf8 != 2) goto L_14f8; */
        /* if (((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->startCheck(this->field_0x744) == 0) goto L_1528; */
        /* if (this->field_0x746 == 0) goto L_14e0; */
        /* goto L_14ec; */
        /* L_14e0:; */
        /* L_14ec:; */
        /* field_0x7ba = 0; */
        /* goto L_1528; */
        /* L_14f8:; */
        /* if (0 != 1) goto L_1528; */
        /* if ((this->field_0x7ba & 255) == 1) goto L_1518; */
        /* if ((this->field_0x7ba & 255) != 2) goto L_1528; */
        /* L_1518:; */
        /* field_0x7ba = 0; */
        /* field_0x769 = 1; */
        /* L_1528:; */
        /* return ((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->startCheck(this->field_0x744); */
}

/* 00001628-000016C0       .text chk_talk__11daNpc_Aj1_cFv */
void daNpc_Aj1_c::chk_talk() {
        /* if (this->field_0x52b8 == 1) goto L_1578; */
        /* if (this->field_0x52b8 == 2) goto L_1578; */
        /* if (this->field_0x52b8 != 3) goto L_157c; */
        /* L_1578:; */
        /* L_157c:; */
        /* if (1 == 0) goto L_15b4; */
        /* if (((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->ChkPresentEnd() == 0) goto L_15ac; */
        return 1;
        /* L_15ac:; */
        return 0;
        /* L_15b4:; */
        /* field_0x75a = 255; */
        return 1;
}

/* 000016C0-00001700       .text chk_parts_notMov__11daNpc_Aj1_cFv */
void daNpc_Aj1_c::chk_parts_notMov() {
    /* if (this->field_0x73a == this->field_0x292) { */
        /* if (this->field_0x73c == this->field_0x296) goto L_160c; */
        /* if (this->field_0x738 == this->field_0x206) goto L_160c; */
    /* L_160c:; */
    return 1;
}

/* 00001700-00001870       .text lookBack__11daNpc_Aj1_cFv */
void daNpc_Aj1_c::lookBack() {
        /* _savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* if ((this->field_0x7bd & 255) == 2) goto L_16e0; */
        /* if (/ * bge * / 1) goto L_16a4; */
        /* if ((this->field_0x7bd & 255) >= 1) goto L_16b0; */
        /* goto L_1704; */
        /* L_16a4:; */
        /* if ((this->field_0x7bd & 255) >= 4) goto L_1704; */
        /* goto L_1700; */
        /* L_16b0:; */
        dNpc_playerEyePos();
        /* goto L_1704; */
        /* L_16e0:; */
        /* goto L_1704; */
        /* L_1700:; */
        /* L_1704:; */
        /* cLib_addCalcAngleS2((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1876), this->field_0x1e, 4, 2048); */
        /* if (this->field_0x29a != 0) goto L_1734; */
        /* field_0x754 = 0; */
        /* L_1734:; */
        /* return _restgpr_28(((dNpc_JntCtrl_c*)((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 656)))->lookAtTarget((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 518))); */
}

/* 00001870-000018F0       .text chkAttention__11daNpc_Aj1_cFv */
void daNpc_Aj1_c::chkAttention() {
    if (((dAttention_c*)(((char*)&g_dComIfG_gameInfo + 22536)))->LockonTruth() == 0) {
    }
    return ((this - ((dAttention_c*)(((char*)&g_dComIfG_gameInfo + 22536)))->ActionTarget(0)) >> 5);
}

/* 000018F0-00001948       .text setAttention__11daNpc_Aj1_cFb */
void daNpc_Aj1_c::setAttention(bool) {
    /* field_0x274 = 0; */
    /* field_0x278 = (this->field_0x1fc + this->field_0x20); */
    /* field_0x27c = 0; */
    if (this->field_0x764 == 0) {
    }
    eyePos = 0;
    /* field_0x264 = 0; */
    /* field_0x268 = 0; */
    return this;
}

/* 00001948-000019C8       .text decideType__11daNpc_Aj1_cFi */
void daNpc_Aj1_c::decideType(int) {
        /* field_0x7be = 0; */
        /* field_0x7bf = -1; */
        /* if (int == 1) goto L_1898; */
        /* if (/ * bge * / 1) goto L_1884; */
        /* if (int >= 0) goto L_1890; */
        /* goto L_18ac; */
        /* L_1884:; */
        /* if (int >= 3) goto L_18ac; */
        /* goto L_18a4; */
        /* L_1890:; */
        /* field_0x7bf = 0; */
        /* goto L_18ac; */
        /* L_1898:; */
        /* field_0x7bf = 1; */
        /* goto L_18ac; */
        /* L_18a4:; */
        /* field_0x7bf = 2; */
        /* L_18ac:; */
        /* if ((this->field_0x7be & 255) == -1) goto L_18d4; */
        /* if ((this->field_0x7bf & 255) == -1) goto L_18d4; */
        /* L_18d4:; */
        return 1;
}

/* 000019C8-000019E0       .text cut_init_AJ1_TLK__11daNpc_Aj1_cFv */
void daNpc_Aj1_c::cut_init_AJ1_TLK() {
    m7B6 = 0xFF;
    m7B7 = 0xFF;
    m7C1 = 0;
}

/* 000019E0-00001A3C       .text cut_move_AJ1_TLK__11daNpc_Aj1_cFv */
void daNpc_Aj1_c::cut_move_AJ1_TLK() {
    if ((talk(1) & 65535) == 18) {
        m7B6 = 255;
        m7B7 = 255;
        m7C1 = 0;
        return 1;
    }
    return 0;
}

/* 00001A3C-00001A80       .text cut_init_INI_ANGRY__11daNpc_Aj1_cFv */
void daNpc_Aj1_c::cut_init_INI_ANGRY() {
    setAnm_NUM(0, 1);
    /* return ((mDoExt_McaMorf*)(this->field_0x330))->setMorf(C_@4809); */
}

/* 00001A80-00001A88       .text cut_move_INI_ANGRY__11daNpc_Aj1_cFv */
int daNpc_Aj1_c::cut_move_INI_ANGRY() {
    return 1;
}

/* 00001A88-00001A8C       .text cut_init_VIVRATE__11daNpc_Aj1_cFv */
void daNpc_Aj1_c::cut_init_VIVRATE() {
}

/* 00001A8C-00001B5C       .text cut_move_VIVRATE__11daNpc_Aj1_cFv */
void daNpc_Aj1_c::cut_move_VIVRATE() {
    if (this->field_0x758 == 0) {
        ((JAIZelBasic*)(base))->seStart(22690, 0, 0, dComIfGp_getReverb((this->field_0x20a & 255)), 0);
        ((dVibration_c*)(((char*)&g_dComIfG_gameInfo + 22944)))->StartShock(5, -17);
        setAnm_NUM(3, 1);
        return 1;
    }
    return 0;
}

/* 00001B5C-00001B60       .text cut_init_JMP__11daNpc_Aj1_cFv */
void daNpc_Aj1_c::cut_init_JMP() {
}

/* 00001B60-00001BBC       .text cut_move_JMP__11daNpc_Aj1_cFv */
void daNpc_Aj1_c::cut_move_JMP() {
    if (this->field_0x758 == 0) {
        /* ((dDetect_c*)(((char*)&g_dComIfG_gameInfo + 23076)))->set_quake(0, arg2); */
        /* field_0x74c = 20; */
        return 1;
    }
    return 0;
}

/* 00001BBC-00001BC0       .text cut_init_SPPRISE__11daNpc_Aj1_cFv */
void daNpc_Aj1_c::cut_init_SPPRISE() {
}

/* 00001BC0-00001C24       .text cut_move_SPPRISE__11daNpc_Aj1_cFv */
void daNpc_Aj1_c::cut_move_SPPRISE() {
    /* if (cLib_calcTimer<s>__FPs((this + 1868), arg1, arg2, arg3, arg4, arg5, arg6, arg7) != 0) { */
        /* setAnm_NUM(4, 1); */
        /* return 1; */
    return 0;
}

/* 00001C24-00001C28       .text cut_init_LOK__11daNpc_Aj1_cFv */
void daNpc_Aj1_c::cut_init_LOK() {
}

/* 00001C28-00001CE0       .text cut_move_LOK__11daNpc_Aj1_cFv */
void daNpc_Aj1_c::cut_move_LOK() {
    if (this->field_0x758 == 0) {
        /* if (cLib_calcTimer<s>__FPs((this + 1868), arg1, arg2, arg3, arg4, arg5, arg6, arg7) != 0) goto L_1bdc; */
        setAnm_NUM(5, 1);
        ((JAIZelBasic*)(base))->seStart(18580, (this + 504), 0, dComIfGp_getReverb((this->field_0x20a & 255)), 0);
        return 1;
    }
    /* L_1bdc:; */
    return 0;
}

/* 00001CE0-00001CE4       .text cut_init_DAN__11daNpc_Aj1_cFv */
void daNpc_Aj1_c::cut_init_DAN() {
}

/* 00001CE4-00001D44       .text cut_move_DAN__11daNpc_Aj1_cFv */
void daNpc_Aj1_c::cut_move_DAN() {
    if (this->field_0x758 == 0) {
        /* if (cLib_calcTimer<s>__FPs((this + 1868), arg1, arg2, arg3, arg4, arg5, arg6, arg7) != 0) goto L_1c40; */
        setAnm_NUM(2, 1);
        return 1;
    }
    /* L_1c40:; */
    return 0;
}

/* 00001D44-00001DB4       .text cut_init_INVIT__11daNpc_Aj1_cFv */
void daNpc_Aj1_c::cut_init_INVIT() {
    return ((JAIZelBasic*)(base))->seStart(18579, (this + 504), 0, dComIfGp_getReverb((this->field_0x20a & 255)), 0);
}

/* 00001DB4-00001DBC       .text cut_move_INVIT__11daNpc_Aj1_cFv */
int daNpc_Aj1_c::cut_move_INVIT() {
    return 1;
}

/* 00001DBC-00001F7C       .text privateCut__11daNpc_Aj1_cFi */
void daNpc_Aj1_c::privateCut(int) {
        /* _savegpr_29(this, int, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* if (/ * beq * / 1) goto L_1e78; */
        /* field_0x7b5 = ((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMyActIdx(); */
        /* if ((this->field_0x7b5 & 255) != -1) goto L_1d40; */
        ((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->cutEnd();
        /* goto L_1e78; */
        /* L_1d40:; */
        /* if (((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getIsAddvance() == 0) goto L_1dd8; */
        /* if ((this->field_0x7b5 & 255) > 7) goto L_1dd8; */
        /* ((daNpc_Aj1_c*)(_savegpr_29(this, int, arg2, arg3, arg4, arg5, arg6, arg7)))->cut_init_AJ1_TLK(); */
        /* goto L_1dd8; */
        /* ((daNpc_Aj1_c*)(_savegpr_29(this, int, arg2, arg3, arg4, arg5, arg6, arg7)))->cut_init_INI_ANGRY(); */
        /* goto L_1dd8; */
        /* ((daNpc_Aj1_c*)(_savegpr_29(this, int, arg2, arg3, arg4, arg5, arg6, arg7)))->cut_init_VIVRATE(); */
        /* goto L_1dd8; */
        /* ((daNpc_Aj1_c*)(_savegpr_29(this, int, arg2, arg3, arg4, arg5, arg6, arg7)))->cut_init_JMP(); */
        /* goto L_1dd8; */
        /* ((daNpc_Aj1_c*)(_savegpr_29(this, int, arg2, arg3, arg4, arg5, arg6, arg7)))->cut_init_SPPRISE(); */
        /* goto L_1dd8; */
        /* ((daNpc_Aj1_c*)(_savegpr_29(this, int, arg2, arg3, arg4, arg5, arg6, arg7)))->cut_init_LOK(); */
        /* goto L_1dd8; */
        /* ((daNpc_Aj1_c*)(_savegpr_29(this, int, arg2, arg3, arg4, arg5, arg6, arg7)))->cut_init_DAN(); */
        /* goto L_1dd8; */
        /* ((daNpc_Aj1_c*)(_savegpr_29(this, int, arg2, arg3, arg4, arg5, arg6, arg7)))->cut_init_INVIT(); */
        /* L_1dd8:; */
        /* if ((this->field_0x7b5 & 255) > 7) goto L_1e60; */
        /* ((daNpc_Aj1_c*)(_savegpr_29(this, int, arg2, arg3, arg4, arg5, arg6, arg7)))->cut_move_AJ1_TLK(); */
        /* goto L_1e64; */
        /* ((daNpc_Aj1_c*)(_savegpr_29(this, int, arg2, arg3, arg4, arg5, arg6, arg7)))->cut_move_INI_ANGRY(); */
        /* goto L_1e64; */
        /* ((daNpc_Aj1_c*)(_savegpr_29(this, int, arg2, arg3, arg4, arg5, arg6, arg7)))->cut_move_VIVRATE(); */
        /* goto L_1e64; */
        /* ((daNpc_Aj1_c*)(_savegpr_29(this, int, arg2, arg3, arg4, arg5, arg6, arg7)))->cut_move_JMP(); */
        /* goto L_1e64; */
        /* ((daNpc_Aj1_c*)(_savegpr_29(this, int, arg2, arg3, arg4, arg5, arg6, arg7)))->cut_move_SPPRISE(); */
        /* goto L_1e64; */
        /* ((daNpc_Aj1_c*)(_savegpr_29(this, int, arg2, arg3, arg4, arg5, arg6, arg7)))->cut_move_LOK(); */
        /* goto L_1e64; */
        /* ((daNpc_Aj1_c*)(_savegpr_29(this, int, arg2, arg3, arg4, arg5, arg6, arg7)))->cut_move_DAN(); */
        /* goto L_1e64; */
        /* ((daNpc_Aj1_c*)(_savegpr_29(this, int, arg2, arg3, arg4, arg5, arg6, arg7)))->cut_move_INVIT(); */
        /* goto L_1e64; */
        /* L_1e60:; */
        /* L_1e64:; */
        /* if (1 == 0) goto L_1e78; */
        /* L_1e78:; */
        return _restgpr_29(((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->cutEnd());
}

/* 00001F7C-00001FA0       .text endEvent__11daNpc_Aj1_cFv */
void daNpc_Aj1_c::endEvent() {
    m7B6 = 255;
    m7B7 = 255;
    return this;
}

/* 00001FA0-00001FD8       .text isEventEntry__11daNpc_Aj1_cFv */
void daNpc_Aj1_c::isEventEntry() {
    /* return ((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMyStaffId(this->field_0x2c4, 0, 0, arg4); */
}

/* 00001FD8-00002098       .text event_proc__11daNpc_Aj1_cFi */
void daNpc_Aj1_c::event_proc(int) {
        /* if (((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->endCheck(this->field_0x744) == 0) goto L_1f70; */
        /* if (this->field_0x746 == 0) goto L_1f40; */
        /* goto L_1f64; */
        /* L_1f40:; */
        ((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->onEventBit(1288);
        ((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->onEventBit(1284);
        /* L_1f64:; */
        endEvent();
        /* goto L_1f94; */
        /* L_1f70:; */
        /* if (((dNpc_EventCut_c*)((this + 708)))->cutProc() != 0) goto L_1f8c; */
        privateCut(((char*)&g_dComIfG_gameInfo + 1572));
        /* L_1f8c:; */
        /* L_1f94:; */
        return lookBack();
}

/* 00002098-00002120       .text set_pa_pun__11daNpc_Aj1_cFv */
void daNpc_Aj1_c::set_pa_pun() {
    /* field_0x790 = ((dPa_control_c*)(this->field_0x5ab8))->set(0, (arg2 + -32493), (this + 504), 0, 0, 255, 0); */
    if (this->field_0x790 != 0) {
        /* field_0x74a = 0; */
    }
    /* return ((dPa_control_c*)(this->field_0x5ab8))->set(0, (arg2 + -32493), (this + 504), 0, 0, 255, 0); */
}

/* 00002120-000021B4       .text set_pa_aka__11daNpc_Aj1_cFv */
void daNpc_Aj1_c::set_pa_aka() {
    void* base = *(void**)(this + 1940);
    if (base != NULL) {
        *(int*)((char*)base + 96) = -1;
        *(u32*)((char*)base + 524) |= 1;
    }
    if (*(unsigned char*)(this + 522) != 0) {
        dComIfGp_particle_set(0x8723, &current.pos, &current.angle, NULL);
    }
}

/* 000021B4-00002284       .text set_pa_don__11daNpc_Aj1_cFv */
void daNpc_Aj1_c::set_pa_don() {
    /* PSMTXTrans(((char*)&now__14mDoMtx_stack_c + 0), arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
    /* mDoMtx_YrotM(((char*)&now__14mDoMtx_stack_c + 0), this->field_0x206); */
    PSMTXMultVec(((char*)&now__14mDoMtx_stack_c + 0));
    /* field_0x798 = ((dPa_control_c*)(this->field_0x5ab8))->set(0); */
    /* return ((dPa_control_c*)(this->field_0x5ab8))->set(0); */
}

/* 00002284-000023FC       .text set_pa_smk__11daNpc_Aj1_cFv */
void daNpc_Aj1_c::set_pa_smk() {
    /* PSMTXCopy((this->field_0x8c + ((this->field_0x6cf & 255) * 48)), ((char*)&now__14mDoMtx_stack_c + 0), arg2, arg3, arg4, arg5, arg6, arg7); */
    /* field_0x79c = 0; */
    /* field_0x7a0 = 0; */
    /* field_0x7a4 = 0; */
    /* field_0x78c = ((dPa_control_c*)(this->field_0x5ab8))->set(2, 8231, (this + 1948), (this + 516), 0, 200, (this + 1900)); */
    if (this->field_0x78c != 0) {
        /* field_0x1f0 = 0; */
        /* field_0x1f4 = 0; */
        current = 0;
        /* field_0x1d8 = 0; */
        /* field_0x1dc = 0; */
        /* field_0x1e0 = 0; */
        /* field_0x64 = 40; */
        /* field_0x38 = 0; */
        /* field_0x60 = 1; */
        /* field_0x74 = 0; */
        /* field_0xc = 0; */
        /* field_0x10 = 0; */
        /* field_0x14 = 0; */
    }
    /* return this->field_0x78c; */
}

/* 000023FC-000024B8       .text flw_pa_pun__11daNpc_Aj1_cFv */
void daNpc_Aj1_c::flw_pa_pun() {
    if (this->field_0x790 != 0) {
        /* JPASetRMtxTVecfromMtx((this->field_0x8c + ((this->field_0x6cc & 255) * 48)), (this->field_0x790 + 424), (this->field_0x790 + 484), arg3); */
        /* if (cLib_calcTimer<s>__FPs((this + 1866)) != 0) goto L_23b8; */
        ((JAIZelBasic*)(base))->seStart(22691, (this + 504), 0, dComIfGp_getReverb((this->field_0x20a & 255)), 0);
        /* field_0x74a = 5; */
    }
    /* L_23b8:; */
    return ((JAIZelBasic*)(base))->seStart(22691, (this + 504), 0, dComIfGp_getReverb((this->field_0x20a & 255)), 0);
}

/* 000024B8-00002508       .text flw_pa_aka__11daNpc_Aj1_cFv */
void daNpc_Aj1_c::flw_pa_aka() {
    if (this->field_0x794 != 0) {
    }
    /* return JPASetRMtxTVecfromMtx((this->field_0x8c + ((this->field_0x6cc & 255) * 48)), (this->field_0x794 + 424), (this->field_0x794 + 484), arg3); */
}

/* 00002508-00002560       .text del_pa_aka__11daNpc_Aj1_cFv */
void daNpc_Aj1_c::del_pa_aka() {
        /* if (this->field_0x794 == 0) goto L_2468; */
        /* field_0x60 = -1; */
        /* field_0x7b4 = 0; */
        /* field_0x794 = 0; */
        return this;
}

/* 00002560-0000258C       .text del_pa__11daNpc_Aj1_cFPP14JPABaseEmitter */
void daNpc_Aj1_c::del_pa(JPABaseEmitter**) {
    /* field_0x60 = -1; */
    base = 0;
}

/* 0000258C-00002678       .text setSmoke__11daNpc_Aj1_cFv */
void daNpc_Aj1_c::setSmoke() {
        /* if (this->field_0x7b9 != 2) goto L_2574; */
        /* if (((J3DFrameCtrl*)((this->field_0x330 + 88)))->checkPass(arg1, arg2, arg3, arg4, arg5, arg6, arg7) != 0) goto L_24fc; */
        /* if (((J3DFrameCtrl*)((this->field_0x330 + 88)))->checkPass() == 0) goto L_2504; */
        /* L_24fc:; */
        set_pa_smk();
        /* L_2504:; */
        /* if (((J3DFrameCtrl*)((this->field_0x330 + 88)))->checkPass() != 0) goto L_2534; */
        /* if (((J3DFrameCtrl*)((this->field_0x330 + 88)))->checkPass() == 0) goto L_2574; */
        /* L_2534:; */
        /* L_2574:; */
        return ((JAIZelBasic*)(base))->seStart(22692, (this + 504), 0, dComIfGp_getReverb((this->field_0x20a & 255)), 0);
}

/* 00002678-00002724       .text set_action__11daNpc_Aj1_cFM11daNpc_Aj1_cFPCvPvPv_iPv */
void daNpc_Aj1_c::set_action(int (daNpc_Aj1_c::*)(void*), void*) {
        /* if (__ptmf_cmpr((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1776)) == 0) goto L_261c; */
        /* if (__ptmf_test((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1776)) == 0) goto L_25e8; */
        /* field_0x7c0 = 9; */
        /* __ptmf_scall(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* L_25e8:; */
        /* field_0x7c0 = 0; */
        /* __ptmf_scall(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* L_261c:; */
        return _restgpr_29(1);
}

/* 00002724-0000280C       .text setStt__11daNpc_Aj1_cFSc */
void daNpc_Aj1_c::setStt(signed char) {
        /* field_0x7bb = char; */
        /* if ((this->field_0x7bb & 255) == 2) goto L_26a4; */
        /* if (/ * bge * / 1) goto L_2678; */
        /* if ((this->field_0x7bb & 255) == 0) goto L_2704; */
        /* if (/ * bge * / 1) goto L_2688; */
        /* goto L_2704; */
        /* L_2678:; */
        /* if ((this->field_0x7bb & 255) == 4) goto L_26d0; */
        /* if (/ * bge * / 1) goto L_2704; */
        /* goto L_26b0; */
        /* L_2688:; */
        /* field_0x7ba = 0; */
        /* field_0x750 = cLib_getRndValue<i>__Fii(90, 120, this->field_0x7bb, arg3, arg4, arg5, arg6, arg7); */
        /* goto L_2704; */
        /* L_26a4:; */
        /* field_0x7ba = 0; */
        /* goto L_2704; */
        /* L_26b0:; */
        /* field_0x7ba = 0; */
        m7B6 = 255;
        m7B7 = 255;
        m7C1 = 0;
        /* goto L_2704; */
        /* L_26d0:; */
        /* field_0x7ba = 0; */
        /* field_0x748 = cLib_getRndValue<i>__Fii(90, 180); */
        /* if ((this->field_0x7b9 & 255) == 1) goto L_270c; */
        /* if ((this->field_0x7b9 & 255) != 6) goto L_2704; */
        /* goto L_270c; */
        /* L_2704:; */
        /* L_270c:; */
        return setAnm();
}

/* 0000280C-00002988       .text chk_areaIN__11daNpc_Aj1_cFfs4cXyz */
void daNpc_Aj1_c::chk_areaIN(float, short, cXyz) {
    /* _savegpr_27(this, float, short, cXyz, arg4, arg5, arg6, arg7); */
    __mi();
    PSVECSquareMag();
    }
    /* cLib_targetAngleY((_savegpr_27(this, float, short, cXyz, arg4, arg5, arg6, arg7) + 504), (this->field_0x5b38 + 504)); */
    if (/* bge */ 1) {
        /* if (/ * bge * / 1) goto L_2868; */
        /* if (abs(((this->field_0x70a - (cLib_targetAngleY((_savegpr_27(this, float, short, cXyz, arg4, arg5, arg6, arg7) + 504), (this->field_0x5b38 + 504)) & 65535)) & 65535)) < 0) goto L_2868; */
        return 1;
    }
    /* L_2868:; */
    return _restgpr_27(0);


/* 00002988-00002A84       .text FARwai__11daNpc_Aj1_cFv */
void daNpc_Aj1_c::FARwai() {
        /* if (chk_areaIN(this->field_0x2c) == 0) goto L_2910; */
        setStt(2);
        /* field_0x7bd = 1; */
        /* field_0x76a = 0; */
        /* field_0x29a = 1; */
        return 1;
        /* L_2910:; */
        /* if (this->field_0x7b9 != 8) goto L_2950; */
        /* if (this->field_0x758 == 0) goto L_2948; */
        setAnm_NUM(0, 1);
        /* ((mDoExt_McaMorf*)(this->field_0x330))->setMorf(C_@4809); */
        /* L_2948:; */
        return 1;
        /* L_2950:; */
        /* if (cLib_calcTimer<s>__FPs((this + 1872)) != 0) goto L_2980; */
        setAnm_NUM(8, 1);
        /* field_0x750 = cLib_getRndValue<i>__Fii(90, 120); */
        /* L_2980:; */
        return 1;
}

/* 00002A84-00002C1C       .text call_1__11daNpc_Aj1_cFv */
void daNpc_Aj1_c::call_1() {
        /* if (this->field_0x769 == 0) goto L_29ec; */
        /* if (chk_talk() == 0) goto L_29e4; */
        setStt(3);
        /* field_0x7bd = 1; */
        /* field_0x76a = 0; */
        /* field_0x29a = 1; */
        /* L_29e4:; */
        return 1;
        /* L_29ec:; */
        /* ((daNpc_Aj1_c*)(1))->chk_areaIN(this->field_0x2c); */
        /* if (/ * beq * / 1) goto L_2a70; */
        setStt(1);
        /* ((mDoExt_McaMorf*)(this->field_0x330))->setMorf(C_@5304); */
        /* field_0x7bd = 3; */
        /* field_0x76a = 0; */
        /* field_0x29a = 1; */
        return 1;
        /* L_2a70:; */
        /* field_0x29a = 1; */
        /* if (chk_areaIN(this->field_0x34) == 0) goto L_2b18; */
        /* field_0x7ba = 2; */
        /* if (this->field_0x768 == 0) goto L_2afc; */
        /* if (this->field_0x7b9 == 0) goto L_2af4; */
        setAnm_NUM(0, 1);
        /* ((mDoExt_McaMorf*)(this->field_0x330))->setMorf(C_@5304); */
        /* L_2af4:; */
        return 1;
        /* L_2afc:; */
        /* if (this->field_0x7b9 == 7) goto L_2b18; */
        setAnm_NUM(7, 1);
        /* L_2b18:; */
        return 1;
}

/* 00002C1C-00002D14       .text wait_1__11daNpc_Aj1_cFv */
void daNpc_Aj1_c::wait_1() {
        cLib_addCalcAngleS((this + 518), this->field_0x70a, 4, 1024, 0);
        ctrl_WAITanm();
        /* if ((this->field_0x7ba & 255) == 1) goto L_2b7c; */
        /* if ((this->field_0x7ba & 255) < 3) goto L_2b84; */
        /* L_2b7c:; */
        return 1;
        /* L_2b84:; */
        ctrl_TIREanm();
        /* if (this->field_0x769 == 0) goto L_2bd0; */
        /* if (chk_talk() == 0) goto L_2bc8; */
        setStt(3);
        /* field_0x7bd = 1; */
        /* field_0x76a = 0; */
        /* field_0x29a = 1; */
        /* L_2bc8:; */
        return 1;
        /* L_2bd0:; */
        /* field_0x7ba = 2; */
        /* if (this->field_0x7b9 == 1) goto L_2c00; */
        /* if (this->field_0x768 == 0) goto L_2c00; */
        /* field_0x7bd = 1; */
        return 1;
        /* L_2c00:; */
        /* field_0x7bd = 3; */
        return 1;
}

/* 00002D14-00002E64       .text talk_1__11daNpc_Aj1_cFv */
void daNpc_Aj1_c::talk_1() {
        chk_parts_notMov();
        talk(1);
        /* if (this->field_0x6b0 != 0) goto L_2c68; */
        /* goto L_2d60; */
        /* L_2c68:; */
        /* if (this->field_0xf8 == 6) goto L_2d5c; */
        /* if (/ * bge * / 1) goto L_2c84; */
        /* if (this->field_0xf8 == 2) goto L_2d5c; */
        /* goto L_2d5c; */
        /* L_2c84:; */
        /* if (this->field_0xf8 == 19) goto L_2c90; */
        /* goto L_2d5c; */
        /* L_2c90:; */
        /* if ((this->field_0x6a4 + -2504) > 21) goto L_2d28; */
        ((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->onEventBit(14084);
        ((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->onEventBit(1296);
        /* goto L_2d28; */
        ((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->onEventBit(14084);
        /* goto L_2d28; */
        ((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->onEventBit(14088);
        /* goto L_2d28; */
        ((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->onEventBit(14081);
        /* L_2d28:; */
        /* field_0x75a = 255; */
        /* field_0x769 = 0; */
        /* setStt(this->field_0x7bc); */
        /* field_0x74e = cLib_getRndValue<i>__Fii(15, 30); */
        endEvent();
        /* L_2d5c:; */
        /* L_2d60:; */
        return (chk_parts_notMov() & 16777215);
}

/* 00002E64-00002F3C       .text wait_action1__11daNpc_Aj1_cFPv */
void daNpc_Aj1_c::wait_action1(void*) {
        /* if ((this->field_0x7c0 & 255) >= 4) goto L_2dac; */
        /* if ((this->field_0x7c0 & 255) == 0) goto L_2db8; */
        /* if (/ * bge * / 1) goto L_2dd0; */
        /* goto L_2e38; */
        /* L_2dac:; */
        /* if ((this->field_0x7c0 & 255) == 9) goto L_2e38; */
        /* goto L_2e38; */
        /* L_2db8:; */
        /* setStt(1, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* field_0x7c0 = (this->field_0x7c0 + 1); */
        /* goto L_2e38; */
        /* L_2dd0:; */
        /* field_0x768 = ((daNpc_Aj1_c*)(this->field_0x7c0))->chkAttention(); */
        /* if ((this->field_0x7bb & 255) == 2) goto L_2e14; */
        /* if (/ * bge * / 1) goto L_2df8; */
        /* if ((this->field_0x7bb & 255) >= 1) goto L_2e04; */
        /* goto L_2e30; */
        /* L_2df8:; */
        /* if ((this->field_0x7bb & 255) >= 4) goto L_2e30; */
        /* goto L_2e24; */
        /* L_2e04:; */
        /* field_0x764 = FARwai(); */
        /* goto L_2e30; */
        /* L_2e14:; */
        /* field_0x764 = call_1(); */
        /* goto L_2e30; */
        /* L_2e24:; */
        /* field_0x764 = talk_1(); */
        /* L_2e30:; */
        lookBack();
        /* L_2e38:; */
        return 1;
}

/* 00002F3C-0000304C       .text wait_action2__11daNpc_Aj1_cFPv */
void daNpc_Aj1_c::wait_action2(void*) {
        /* if ((this->field_0x7c0 & 255) >= 4) goto L_2e84; */
        /* if ((this->field_0x7c0 & 255) == 0) goto L_2e90; */
        /* if (/ * bge * / 1) goto L_2efc; */
        /* goto L_2f48; */
        /* L_2e84:; */
        /* if ((this->field_0x7c0 & 255) == 9) goto L_2f48; */
        /* goto L_2f48; */
        /* L_2e90:; */
        /* setStt(4, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* if (strcmp(((char*)&g_dComIfG_gameInfo + 20788), ((char*)&@stringBase0 + 98)) != 0) goto L_2eec; */
        /* if (this->field_0x7bf != 1) goto L_2eec; */
        /* if (((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->isEventBit(1288) != 0) goto L_2eec; */
        /* field_0x7ba = 3; */
        /* L_2eec:; */
        /* field_0x7c0 = (this->field_0x7c0 + 1); */
        /* goto L_2f48; */
        /* L_2efc:; */
        /* field_0x768 = ((daNpc_Aj1_c*)(this->field_0x7c0))->chkAttention(); */
        /* if ((this->field_0x7bb & 255) == 4) goto L_2f24; */
        /* if (/ * bge * / 1) goto L_2f40; */
        /* if ((this->field_0x7bb & 255) >= 3) goto L_2f34; */
        /* goto L_2f40; */
        /* L_2f24:; */
        /* field_0x764 = wait_1(); */
        /* goto L_2f40; */
        /* L_2f34:; */
        /* field_0x764 = talk_1(); */
        /* L_2f40:; */
        lookBack();
        /* L_2f48:; */
        return 1;
}

/* 0000304C-0000319C       .text demo__11daNpc_Aj1_cFv */
void daNpc_Aj1_c::demo() {
        /* if (demoActorID != 0) goto L_2f98; */
        /* if (this->field_0x76b == 0) goto L_3098; */
        /* field_0x76b = 0; */
        /* goto L_3098; */
        /* L_2f98:; */
        /* if (this->field_0x76b != 0) goto L_2fc4; */
        /* field_0x76b = 1; */
        /* field_0x75f = 0; */
        /* field_0x292 = 0; */
        m290 = 0;
        /* field_0x296 = 0; */
        /* field_0x294 = 0; */
        /* L_2fc4:; */
        ((dDemo_object_c*)((this->field_0x5abc + 32)))->getActor(demoActorID);
        /* if (this->field_0x6e0 == 0) goto L_300c; */
        /* field_0x6ec = (this->field_0x6ec + 1); */
        /* if (this->field_0x6ec < this->field_0x6) goto L_300c; */
        /* L_300c:; */
        ((dDemo_actor_c*)(((dDemo_object_c*)((this->field_0x5abc + 32)))->getActor(demoActorID)))->getP_BtpData(((char*)&@stringBase0 + 10));
        /* if (/ * beq * / 1) goto L_306c; */
        /* ((mDoExt_btpAnm*)((this + 1752)))->init(this->field_0x4); */
        m7B8 = 1;
        /* field_0x6ec = 0; */
        /* L_306c:; */
        dDemo_setDemoData(this, 106, this->field_0x330, ((char*)&@stringBase0 + 10), 0, 0, 0, 0);
        /* L_3098:; */
        /* return this->field_0x76b; */
}

/* 0000319C-00003254       .text shadowDraw__11daNpc_Aj1_cFv */
void daNpc_Aj1_c::shadowDraw() {
    /* field_0x6d4 = dComIfGd_setShadow(this->field_0x6d4, 1, this->field_0x50); */
    if (this->field_0x6d4 != 0) {
        /* if (this->field_0x6d0 != 0) goto L_3154; */
    }
    /* L_3154:; */
    /* return ((dDlst_shadowControl_c*)(((char*)&g_dComIfG_gameInfo + 24416)))->addReal(this->field_0x6d4, this->field_0x6d0); */
}

/* 00003254-00003380       .text _draw__11daNpc_Aj1_cFv */
BOOL daNpc_Aj1_c::_draw() {
    /* _savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
    if (this->field_0x75e == 0) {
        /* if (this->field_0x760 != 0) goto L_31ac; */
    }
    return 1;
    /* L_31ac:; */
    /* ((dScnKy_env_light_c*)(((char*)&g_env_light + 0)))->settingTevStruct(0, (_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 504), (_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 268)); */
    /* ((dScnKy_env_light_c*)(((char*)&g_env_light + 0)))->setLightTevColorType(this->field_0x50, (_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 268)); */
    /* ((mDoExt_btpAnm*)((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1752)))->entry(this->field_0x4, this->field_0x6ec); */
    /* ((mDoExt_McaMorf*)(this->field_0x330))->entryDL(); */
    /* ((J3DMaterialTable*)((this->field_0x4 + 88)))->removeTexNoAnimator(this->field_0x6e0); */
    if (this->field_0x6d0 != 0) {
        /* ((dScnKy_env_light_c*)(((char*)&g_env_light + 0)))->setLightTevColorType(this->field_0x6d0, (_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 268)); */
        /* mDoExt_modelEntryDL(this->field_0x6d0); */
    }
    /* ((daNpc_Aj1_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->shadowDraw(); */
    if (this->field_0x24 != 0) {
    }
    /* dSnap_RegistFig(76, _savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7), C_@4434); */
    return _restgpr_29(1);
}

/* 00003380-000035A8       .text _execute__11daNpc_Aj1_cFv */
BOOL daNpc_Aj1_c::_execute() {
        /* if (this->field_0x761 != 0) goto L_32f0; */
        /* field_0x6fc = 0; */
        /* field_0x700 = 0; */
        /* field_0x704 = 0; */
        /* field_0x761 = 1; */
        /* L_32f0:; */
        /* ((dNpc_JntCtrl_c*)((this + 656)))->setParam(this->field_0x14, this->field_0x16, this->field_0x18, this->field_0x1a, this->field_0xc, this->field_0xe, this->field_0x10); */
        /* if (this->field_0x75e == 0) goto L_334c; */
        /* if (demoActorID != 0) goto L_334c; */
        return 1;
        /* L_334c:; */
        checkOrder();
        /* if (demo() != 0) goto L_33e0; */
        /* if (this->field_0x529a == 0) goto L_3398; */
        /* if (this->field_0xf8 == 1) goto L_3398; */
        /* L_3398:; */
        /* if (isEventEntry() < 0) goto L_33ac; */
        event_proc(isEventEntry());
        /* goto L_33c0; */
        /* L_33ac:; */
        __ptmf_scall(this, 0);
        /* L_33c0:; */
        fopAcM_posMoveF(this, (this + 1336));
        play_animation();
        ((dBgS_Acch*)((this + 820)))->CrrPos(((char*)&g_dComIfG_gameInfo + 4768));
        /* L_33e0:; */
        eventOrder();
        /* if (this->field_0x75f != 0) goto L_3424; */
        /* L_3424:; */
        /* field_0x1b5 = ((dBgS*)(((char*)&g_dComIfG_gameInfo + 4768)))->GetRoomId((this + 1052)); */
        /* field_0x1b6 = ((dBgS*)(((char*)&g_dComIfG_gameInfo + 4768)))->GetPolyColor((this + 1052)); */
        setMtx(0);
        flw_pa_pun();
        del_pa_aka();
        flw_pa_aka();
        setSmoke();
        /* if (this->field_0x76b != 0) goto L_34a0; */
        setCollision(C_@5537);
        /* L_34a0:; */
        return 1;
}

/* 000035A8-0000363C       .text _delete__11daNpc_Aj1_cFv */
BOOL daNpc_Aj1_c::_delete() {
    /* dComIfG_resDelete((this + 1732), ((char*)&@stringBase0 + 10), arg2); */
    if (heap != 0) {
        /* if (this->field_0x330 != 0) goto L_3500; */
        /* ((mDoExt_McaMorf*)(this->field_0x330))->stopZelAnime(); */
    }
    /* L_3500:; */
    del_pa((this + 1936));
    del_pa((this + 1940));
    del_pa((this + 1944));
    return 1;
}

/* 0000363C-00003890       .text _create__11daNpc_Aj1_cFv */
cPhs_State daNpc_Aj1_c::_create() {
        /* _savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* if (/ * bne * / 1) goto L_36c8; */
        /* if (/ * beq * / 1) goto L_36bc; */
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
        __ct((actor_condition + 1900));
        /* L_36bc:; */
        /* L_36c8:; */
        /* if (dComIfG_resLoad((_savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1732), ((char*)&@stringBase0 + 10)) == 4) goto L_36ec; */
        /* goto L_378c; */
        /* L_36ec:; */
        /* if (((daNpc_Aj1_c*)(_savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->decideType((this->field_0xb0 & 16777215)) != 0) goto L_370c; */
        return 5;
        /* L_370c:; */
        /* if (fopAcM_entrySolidHeap(_savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7), ((char*)&CheckCreateHeap__FP10fopAc_ac_c + 0), ((char*)&a_siz_tbl$5553 + 0)) != 0) goto L_3744; */
        return 5;
        /* L_3744:; */
        cullMtx = (this->field_0x50 + 36);
        /* fopAcM_setCullSizeBox(_savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* if (((daNpc_Aj1_c*)(_savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->createInit() == 0) goto L_378c; */
        /* L_378c:; */
        /* return _restgpr_27(dComIfG_resLoad((_savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1732), ((char*)&@stringBase0 + 10))); */
}

/* 00003B5C-00003E90       .text bodyCreateHeap__11daNpc_Aj1_cFv */
void daNpc_Aj1_c::bodyCreateHeap() {
    /* ((dRes_control_c*)(((char*)&@stringBase0 + 10)))->getIDRes(10, ((char*)&g_dComIfG_gameInfo + -16460), 64, arg4, arg5); */
    if (/* bne */ 1) {
        /* ((JUTAssertion*)(((JUTAssertion*)(((dRes_control_c*)(((char*)&@stringBase0 + 10)))->getIDRes(10, ((char*)&g_dComIfG_gameInfo + -16460), 64, arg4, arg5)))->getSDevice()))->showAssert(((char*)&@stringBase0 + 13), 2238, ((char*)&@stringBase0 + 106)); */
        OSPanic(((char*)&@stringBase0 + 13), 2238, ((char*)&@stringBase0 + 40));
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
    /* field_0x6cc = ((JUTNameTab*)(this->field_0x54))->getIndex(((char*)&@stringBase0 + 121)); */
    if (this->field_0x6cc != 0) {
        /* ((JUTAssertion*)(((JUTAssertion*)(((JUTNameTab*)(this->field_0x54))->getIndex(((char*)&@stringBase0 + 121))))->getSDevice()))->showAssert(((char*)&@stringBase0 + 13), 2259, ((char*)&@stringBase0 + 126)); */
        OSPanic(((char*)&@stringBase0 + 13), 2259, ((char*)&@stringBase0 + 40));
    }
    /* field_0x6cd = ((JUTNameTab*)(this->field_0x54))->getIndex(((char*)&@stringBase0 + 145)); */
    if (this->field_0x6cd != 0) {
        /* ((JUTAssertion*)(((JUTAssertion*)(((JUTNameTab*)(this->field_0x54))->getIndex(((char*)&@stringBase0 + 145))))->getSDevice()))->showAssert(((char*)&@stringBase0 + 13), 2261, ((char*)&@stringBase0 + 154)); */
        OSPanic(((char*)&@stringBase0 + 13), 2261, ((char*)&@stringBase0 + 40));
    }
    /* field_0x6ce = ((JUTNameTab*)(this->field_0x54))->getIndex(((char*)&@stringBase0 + 175)); */
    if (this->field_0x6ce != 0) {
        /* ((JUTAssertion*)(((JUTAssertion*)(((JUTNameTab*)(this->field_0x54))->getIndex(((char*)&@stringBase0 + 175))))->getSDevice()))->showAssert(((char*)&@stringBase0 + 13), 2263, ((char*)&@stringBase0 + 181)); */
        OSPanic(((char*)&@stringBase0 + 13), 2263, ((char*)&@stringBase0 + 40));
    }
    /* field_0x6cf = ((JUTNameTab*)(this->field_0x54))->getIndex(((char*)&@stringBase0 + 202)); */
    if (this->field_0x6cf != 0) {
        /* ((JUTAssertion*)(((JUTAssertion*)(((JUTNameTab*)(this->field_0x54))->getIndex(((char*)&@stringBase0 + 202))))->getSDevice()))->showAssert(((char*)&@stringBase0 + 13), 2265, ((char*)&@stringBase0 + 208)); */
        OSPanic(((char*)&@stringBase0 + 13), 2265, ((char*)&@stringBase0 + 40));
    }
    /* field_0x8 = 0; */
    /* field_0x8 = 0; */
    /* field_0x14 = this; */
    return 1;
}

/* 00003E90-00003F58       .text itemCreateHeap__11daNpc_Aj1_cFv */
void daNpc_Aj1_c::itemCreateHeap() {
    /* ((dRes_control_c*)(((char*)&@stringBase0 + 10)))->getIDRes(9, ((char*)&g_dComIfG_gameInfo + -16460), 64, arg4, arg5); */
    if (/* bne */ 1) {
        /* ((JUTAssertion*)(((JUTAssertion*)(((dRes_control_c*)(((char*)&@stringBase0 + 10)))->getIDRes(9, ((char*)&g_dComIfG_gameInfo + -16460), 64, arg4, arg5)))->getSDevice()))->showAssert(((char*)&@stringBase0 + 13), 2291, ((char*)&@stringBase0 + 106)); */
    }
    /* field_0x6d0 = mDoExt_J3DModel(OSPanic(((char*)&@stringBase0 + 13), 2291, ((char*)&@stringBase0 + 40))); */
    if (this->field_0x6d0 == 0) {
        return 0;
    }
    return 1;
}

/* 00003F58-00003FFC       .text CreateHeap__11daNpc_Aj1_cFv */
void daNpc_Aj1_c::CreateHeap() {
    if (bodyCreateHeap() == 0) {
        return 0;
    }
    if (itemCreateHeap() == 0) {
        /* field_0x330 = 0; */
        return 0;
    }
    ((dBgS_AcchCir*)((this + 1272)))->SetWall(C_@5536);
    ((dBgS_Acch*)((this + 820)))->Set((this + 504), (this + 484), this, 1, (this + 1272), (this + 544), 0);
    return 1;
}

/* 00003FFC-0000401C       .text daNpc_Aj1_Create__FP10fopAc_ac_c */
static cPhs_State daNpc_Aj1_Create(fopAc_ac_c* i_this) {
    return ((daNpc_Aj1_c*)i_this)->_create();
}

/* 0000401C-0000403C       .text daNpc_Aj1_Delete__FP11daNpc_Aj1_c */
static BOOL daNpc_Aj1_Delete(daNpc_Aj1_c* i_this) {
    return ((daNpc_Aj1_c*)i_this)->_delete();
}

/* 0000403C-0000405C       .text daNpc_Aj1_Execute__FP11daNpc_Aj1_c */
static BOOL daNpc_Aj1_Execute(daNpc_Aj1_c* i_this) {
    return ((daNpc_Aj1_c*)i_this)->_execute();

/* 0000405C-0000407C       .text daNpc_Aj1_Draw__FP11daNpc_Aj1_c */
static BOOL daNpc_Aj1_Draw(daNpc_Aj1_c* i_this) {
    return ((daNpc_Aj1_c*)i_this)->_draw();

/* 0000407C-00004084       .text daNpc_Aj1_IsDelete__FP11daNpc_Aj1_c */
static BOOL daNpc_Aj1_IsDelete(daNpc_Aj1_c*) {
    return 1;

static actor_method_class l_daNpc_Aj1_Method = {
    (process_method_func)daNpc_Aj1_Create,
    (process_method_func)daNpc_Aj1_Delete,
    (process_method_func)daNpc_Aj1_Execute,
    (process_method_func)daNpc_Aj1_IsDelete,
    (process_method_func)daNpc_Aj1_Draw,
};

actor_process_profile_definition g_profile_NPC_AJ1 = {
    /* Layer ID     */ fpcLy_CURRENT_e,
    /* List ID      */ 0x0007,
    /* List Prio    */ fpcPi_CURRENT_e,
    /* Proc Name    */ fpcNm_NPC_AJ1_e,
    /* Proc SubMtd  */ &g_fpcLf_Method.base,
    /* Size         */ sizeof(daNpc_Aj1_c),
    /* Size Other   */ 0,
    /* Parameters   */ 0,
    /* Leaf SubMtd  */ &g_fopAc_Method.base,
    /* Draw Prio    */ fpcDwPi_NPC_AJ1_e,
    /* Actor SubMtd */ &l_daNpc_Aj1_Method,
    /* Status       */ 0x07 | fopAcStts_SHOWMAP_e | fopAcStts_NOCULLEXEC_e | fopAcStts_CULL_e | fopAcStts_UNK40000_e,
    /* Group        */ fopAc_ACTOR_e,
    /* Cull Type    */ fopAc_CULLBOX_CUSTOM_e,
};

/* 由 fix_decomp_braces.py 补齐：反编译产物末尾缺 4 个 } */
}}}}
