/**
 * d_a_npc_kk1.cpp
 * NPC - Mila (poor)
 */

#include "d/dolzel_rel.h" // IWYU pragma: keep
#include "d/actor/d_a_npc_kk1.h"

/* 000000EC-00000150       .text __ct__15daNpc_Kk1_HIO_cFv */
daNpc_Kk1_HIO_c::daNpc_Kk1_HIO_c() {
    /* __ct__15daNpc_Kk1_HIO_cFv: 无实义指令 */
}

/* 00000198-000001E4       .text nodeCB_Head__FP7J3DNodei */
static BOOL nodeCB_Head(J3DNode* i_param_1, int i_param_2) {
    if (i_param_2 == 0) {
        if (j3dSys.getModel()->getUserArea() != NULL) {
            reinterpret_cast<daNpc_Kk1_c*>(j3dSys.getModel()->getUserArea())
                ->_nodeCB_Head(i_param_1, j3dSys.getModel());
        }
    }
    return TRUE;
}

/* 000001E4-00000304       .text _nodeCB_Head__11daNpc_Kk1_cFP7J3DNodeP8J3DModel */
void daNpc_Kk1_c::_nodeCB_Head(J3DNode*, J3DModel*) {
    /* _savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
    if (this->field_0x118 != 0) {
        /* field_0x11c = 0; */
        /* field_0x4 = 0; */
        /* field_0x8 = 0; */
        /* __register_global_object(((C_@3569 + 0) + 284), ((char*)&__dt__4cXyzFv + 0), ((C_@3569 + 0) + 268)); */
        /* field_0x118 = 1; */
    }
    PSMTXCopy((this->field_0x8c + (this->field_0x18 * 48)), ((char*)&now__14mDoMtx_stack_c + 0));
    m750 = 0;
    /* field_0x754 = 0; */
    /* field_0x758 = 0; */
    /* PSMTXMultVec(((char*)&now__14mDoMtx_stack_c + 0), ((C_@3569 + 0) + 284), (_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1836)); */
    /* mDoMtx_XrotM(((char*)&now__14mDoMtx_stack_c + 0), this->field_0x292); */
    /* mDoMtx_ZrotM(((char*)&now__14mDoMtx_stack_c + 0), ((-this->field_0x290) & 65535)); */
    PSMTXCopy(((char*)&now__14mDoMtx_stack_c + 0), ((char*)&mCurrentMtx__6J3DSys + 0));
    return _restgpr_28(PSMTXCopy(((char*)&now__14mDoMtx_stack_c + 0), (this->field_0x8c + (this->field_0x18 * 48))));
}

/* 00000340-0000038C       .text nodeCB_BackBone__FP7J3DNodei */
static BOOL nodeCB_BackBone(J3DNode* i_param_1, int i_param_2) {
    if (i_param_2 == 0) {
        if (j3dSys.getModel()->getUserArea() != NULL) {
            reinterpret_cast<daNpc_Kk1_c*>(j3dSys.getModel()->getUserArea())
                ->_nodeCB_BackBone(i_param_1, j3dSys.getModel());
        }
    }
    return TRUE;
}

/* 0000038C-0000042C       .text _nodeCB_BackBone__11daNpc_Kk1_cFP7J3DNodeP8J3DModel */
void daNpc_Kk1_c::_nodeCB_BackBone(J3DNode*, J3DModel*) {
    /* _savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
    PSMTXCopy();
    /* mDoMtx_XrotM(((char*)&now__14mDoMtx_stack_c + 0), this->field_0x296); */
    /* mDoMtx_ZrotM(((char*)&now__14mDoMtx_stack_c + 0), ((-this->field_0x294) & 65535)); */
    PSMTXCopy(((char*)&now__14mDoMtx_stack_c + 0), ((char*)&mCurrentMtx__6J3DSys + 0));
    return _restgpr_29(PSMTXCopy(((char*)&now__14mDoMtx_stack_c + 0)));
}

/* 0000042C-0000044C       .text CheckCreateHeap__FP10fopAc_ac_c */
static BOOL CheckCreateHeap(fopAc_ac_c* i_this) {
    ((daNpc_Kk1_c*)i_this)->CreateHeap();
    return TRUE;
}

/* 0000044C-000004EC       .text searchActor_SWC00__FPvPv */
void searchActor_SWC00(void*, void*) {
    if (this->field_0x0 < 20) {
        /* if (fopAc_IsActor(arg0) != 0) goto L_3e4; */
        /* if (this->field_0x8 == 300) goto L_3e4; */
        /* if (/ * bne * / 1) goto L_3e4; */
        /* if ((this->field_0xb0 & 16777215) == this->field_0x7b3) goto L_3e4; */
        /* field_0x0 = (this->field_0x0 + 1); */
    }
    /* L_3e4:; */
    return 0;
}

/* 000004EC-00000598       .text init_KK1_0__11daNpc_Kk1_cFv */
void daNpc_Kk1_c::init_KK1_0() {
        /* if (((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->isEventBit(11521) == 0) goto L_490; */
        /* if (dKy_daynight_check() == 0) goto L_458; */
        /* if (((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->isEventBit(3592) != 0) goto L_490; */
        /* L_458:; */
        set_action();
        return 1;
        /* L_490:; */
        return 0;
}

/* 00000598-000007B0       .text createInit__11daNpc_Kk1_cFv */
void daNpc_Kk1_c::createInit() {
        /* _savegpr_25(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* L_4e8:; */
        ((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getEventIdx();
        /* if ((0 + 1) < 7) goto L_4e8; */
        /* ((dNpc_EventCut_c*)((_savegpr_25(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 708)))->setActorInfo2(((char*)&@stringBase0 + 56), _savegpr_25(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* if (/ * beq * / 1) goto L_588; */
        /* ((dNpc_PathRun_c*)((_savegpr_25(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1796)))->setInf(); */
        /* if (this->field_0x704 == 0) goto L_580; */
        /* ((daNpc_Kk1_c*)(_savegpr_25(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->set_pthPoint(0); */
        /* goto L_588; */
        /* L_580:; */
        return 0;
        /* L_588:; */
        /* if (this->field_0x704 != 0) goto L_59c; */
        return 0;
        /* L_59c:; */
        /* field_0x280 = 10; */
        /* field_0x26d = 169; */
        /* field_0x26f = 169; */
        gravity = 0;
        /* field_0x81a = 12; */
        /* if (this->field_0x820 == 0) goto L_5dc; */
        /* goto L_5e8; */
        /* L_5dc:; */
        /* ((daNpc_Kk1_c*)(_savegpr_25(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->init_KK1_0(); */
        /* goto L_5ec; */
        /* L_5e8:; */
        /* L_5ec:; */
        /* if (0 != 0) goto L_5fc; */
        return 0;
        /* L_5fc:; */
        /* ((dCcD_Stts*)((_savegpr_25(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1336)))->Init(255, 255, _savegpr_25(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* field_0x5b8 = (_savegpr_25(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1336); */
        /* ((dCcD_Cyl*)((_savegpr_25(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1396)))->Set(((char*)&dNpc_cyl_src + 0)); */
        /* ((dBgS_Acch*)((_savegpr_25(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 820)))->CrrPos(((char*)&g_dComIfG_gameInfo + 4768)); */
        /* ((daNpc_Kk1_c*)(_savegpr_25(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->play_animation(); */
        /* field_0x1b5 = ((dBgS*)(((char*)&g_dComIfG_gameInfo + 4768)))->GetRoomId((_savegpr_25(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1052)); */
        /* field_0x1b6 = ((dBgS*)(((char*)&g_dComIfG_gameInfo + 4768)))->GetPolyColor((_savegpr_25(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1052)); */
        /* ((mDoExt_McaMorf*)(this->field_0x330))->setMorf(C_@4189); */
        /* ((daNpc_Kk1_c*)(_savegpr_25(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->setMtx(1); */
        return _restgpr_25(1);
}

/* 000007B0-00000918       .text play_animation__11daNpc_Kk1_cFv */
void daNpc_Kk1_c::play_animation() {
        /* ((daNpc_Kk1_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->play_btp_anm(); */
        /* if (/ * beq * / 1) goto L_710; */
        /* ((dBgS*)(((char*)&g_dComIfG_gameInfo + 4768)))->GetMtrlSndId((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1052)); */
        /* L_710:; */
        /* field_0x7b0 = ((mDoExt_McaMorf*)(this->field_0x330))->play((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 608), ((dBgS*)(((char*)&g_dComIfG_gameInfo + 4768)))->GetMtrlSndId((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1052)), dComIfGp_getReverb((this->field_0x20a & 255))); */
        /* if (this->field_0x68 >= this->field_0x768) goto L_750; */
        /* field_0x7b0 = 1; */
        /* L_750:; */
        /* field_0x768 = 0; */
        /* if ((this->field_0x81a & 255) == 9) goto L_7c8; */
        /* if (/ * bge * / 1) goto L_80c; */
        /* if ((this->field_0x81a & 255) >= 8) goto L_77c; */
        /* goto L_80c; */
        /* L_77c:; */
        /* if (((J3DFrameCtrl*)((this->field_0x330 + 88)))->checkPass() == 0) goto L_80c; */
        /* ((daNpc_Kk1_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->setBikon(); */
        /* goto L_80c; */
        /* L_7c8:; */
        /* if (((J3DFrameCtrl*)((this->field_0x330 + 88)))->checkPass() == 0) goto L_80c; */
        /* ((daNpc_Kk1_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->setBikon(); */
        /* L_80c:; */
        /* return _restgpr_29(((daNpc_Kk1_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->play_eff_anm()); */
}

/* 00000918-00000A98       .text setMtx__11daNpc_Kk1_cFb */
void daNpc_Kk1_c::setMtx(bool) {
    /* _savegpr_29(this, bool, arg2, arg3, arg4, arg5, arg6, arg7); */
    /* field_0x18 = 0; */
    /* field_0x1c = 0; */
    /* field_0x20 = 0; */
    PSMTXTrans(((char*)&now__14mDoMtx_stack_c + 0));
    /* mDoMtx_ZXYrotM(((char*)&now__14mDoMtx_stack_c + 0), this->field_0x71e, this->field_0x720); */
    PSMTXCopy(((char*)&now__14mDoMtx_stack_c + 0), (this->field_0x50 + 36));
    /* ((mDoExt_McaMorf*)(this->field_0x330))->calc(); */
    /* ((mDoExt_bckAnm*)((_savegpr_29(this, bool, arg2, arg3, arg4, arg5, arg6, arg7) + 2032)))->entry(this->field_0x4); */
    PSMTXTrans(((char*)&now__14mDoMtx_stack_c + 0));
    /* ((mDoMtx_stack_c*)(mDoMtx_YrotM(((char*)&now__14mDoMtx_stack_c + 0), this->field_0x206)))->transM(); */
    PSMTXCopy(((char*)&now__14mDoMtx_stack_c + 0), (this->field_0x808 + 36));
    /* field_0x58 = 0; */
    /* ((daNpc_Kk1_c*)(_savegpr_29(this, bool, arg2, arg3, arg4, arg5, arg6, arg7)))->flwAse(); */
    /* return _restgpr_29(((daNpc_Kk1_c*)(_savegpr_29(this, bool, arg2, arg3, arg4, arg5, arg6, arg7)))->setAttention()); */
}

/* 00000A98-00000AAC       .text bckResID__11daNpc_Kk1_cFi */
int daNpc_Kk1_c::bckResID(int anmNum) {
    static const int a_resID_tbl[] = {
        9, 10, 11, 12, 4, 5, 6, 7, 1, 2, 3, 8, 17,
    };
    return a_resID_tbl[anmNum];
}

/* 00000AAC-00000AC0       .text btpResID__11daNpc_Kk1_cFi */
int daNpc_Kk1_c::btpResID(int anmNum) {
    static const int a_resID_tbl[] = {
        17,
    };
    return a_resID_tbl[anmNum];
}

/* 00000AC0-00000BC4       .text setBtp__11daNpc_Kk1_cFScb */
void daNpc_Kk1_c::setBtp(signed char, bool) {
    /* _savegpr_27(this, char, bool, arg3, arg4, arg5, arg6, arg7); */
    if (/* bge */ 1) {
        return 0;
    }
    /* ((dRes_control_c*)((_savegpr_27(this, char, bool, arg3, arg4, arg5, arg6, arg7) + 1742)))->getIDRes((((daNpc_Kk1_c*)(0))->btpResID() & 65535), ((char*)&g_dComIfG_gameInfo + -16460), 64); */
    if (/* bne */ 1) {
        /* ((JUTAssertion*)(((JUTAssertion*)(((dRes_control_c*)((_savegpr_27(this, char, bool, arg3, arg4, arg5, arg6, arg7) + 1742)))->getIDRes((((daNpc_Kk1_c*)(0))->btpResID() & 65535), ((char*)&g_dComIfG_gameInfo + -16460), 64)))->getSDevice()))->showAssert(((char*)&@stringBase0 + 60), 563, ((char*)&@stringBase0 + 76)); */
        OSPanic(((char*)&@stringBase0 + 60), 563, ((char*)&@stringBase0 + 87));
    }
    /* field_0x6ec = 0; */
    /* field_0x6ee = 0; */
    /* return _restgpr_27(((mDoExt_btpAnm*)((_savegpr_27(this, char, bool, arg3, arg4, arg5, arg6, arg7) + 1752)))->init(this->field_0x4)); */
}

/* 00000BC4-00000BE4       .text init_texPttrnAnm__11daNpc_Kk1_cFScb */
void daNpc_Kk1_c::init_texPttrnAnm(signed char, bool) {
    this->setBtp(0, 0);
}

/* 00000BE4-00000C80       .text play_btp_anm__11daNpc_Kk1_cFv */
void daNpc_Kk1_c::play_btp_anm() {
        /* if (this->field_0x819 != 0) goto L_b38; */
        /* if (cLib_calcTimer<s>__FPs((this + 1774), arg1, arg2, arg3, arg4, arg5, arg6, arg7) != 0) goto L_b7c; */
        /* L_b38:; */
        /* field_0x6ec = (this->field_0x6ec + 1); */
        /* if (this->field_0x6ec < (this->field_0x6 & 16777215)) goto L_b7c; */
        /* if (this->field_0x819 == 0) goto L_b64; */
        /* field_0x6ec = (this->field_0x6 & 16777215); */
        /* goto L_b7c; */
        /* L_b64:; */
        /* field_0x6ee = cLib_getRndValue<i>__Fii(60, 90); */
        /* field_0x6ec = 0; */
        /* L_b7c:; */
        return cLib_getRndValue<i>__Fii(60, 90);
}

/* 00000C80-00000CFC       .text play_eff_anm__11daNpc_Kk1_cFv */
void daNpc_Kk1_c::play_eff_anm() {
    /* field_0x800 = (this->field_0x800 + 1); */
    if (this->field_0x800 >= 30) {
        /* field_0x800 = 29; */
    }
    /* field_0x802 = (this->field_0x802 + 1); */
    if (this->field_0x802 >= (this->field_0x6 & 65535)) {
        /* field_0x802 = (this->field_0x6 + -1); */
    }
    /* field_0x804 = (this->field_0x804 + 1); */
    /* field_0x804 = 59; */
    return this;
}

/* 00000CFC-00000DDC       .text setAnm_anm__11daNpc_Kk1_cFPQ211daNpc_Kk1_c9anm_prm_c */
void daNpc_Kk1_c::setAnm_anm(daNpc_Kk1_c::anm_prm_c*) {
        /* if (/ * blt * / 1) goto L_cd8; */
        /* if ((this->field_0x81a & 255) != 0) goto L_c50; */
        /* goto L_cd8; */
        /* L_c50:; */
        dNpc_setAnmIDRes(this->field_0x330, this->field_0xc, bckResID(), -1, (this + 1742));
        delBikon();
        delAse();
        /* field_0x7bc = 1; */
        /* if (this->field_0x81a == 1) goto L_ca4; */
        /* goto L_cc0; */
        /* L_ca4:; */
        setAse();
        /* field_0x804 = 0; */
        /* field_0x802 = 0; */
        /* field_0x800 = 0; */
        /* field_0x7bc = 0; */
        /* L_cc0:; */
        /* field_0x7b0 = 0; */
        /* field_0x7b1 = 0; */
        /* field_0x768 = 0; */
        /* L_cd8:; */
        return C_@4189;
}

/* 00000DDC-00000E4C       .text setAnm_NUM__11daNpc_Kk1_cFii */
void daNpc_Kk1_c::setAnm_NUM(int, int) {
    if (int != 0) {
        /* init_texPttrnAnm(this->field_0x1, 1, arg3, arg4, arg5, arg6, arg7); */
    }
    return setAnm_anm((((char*)&a_anm_prm_tbl$4506 + 0) + (int << 4)), (int << 4));
}

/* 00000E4C-00000EB8       .text setAnm__11daNpc_Kk1_cFv */
void daNpc_Kk1_c::setAnm() {
    /* init_texPttrnAnm(this->field_0x1, 1, arg3, arg4, arg5, arg6, arg7); */
    return setAnm_anm((((char*)&a_anm_prm_tbl$4513 + 0) + ((this->field_0x81c & 255) << 4)), ((this->field_0x81c & 255) << 4));
}

/* 00000EB8-00000EBC       .text chngAnmTag__11daNpc_Kk1_cFv */
void daNpc_Kk1_c::chngAnmTag() {
}

/* 00000EBC-00000EC0       .text ctrlAnmTag__11daNpc_Kk1_cFv */
void daNpc_Kk1_c::ctrlAnmTag() {
}

/* 00000EC0-00000FA0       .text chngAnmAtr__11daNpc_Kk1_cFUc */
void daNpc_Kk1_c::chngAnmAtr(unsigned char) {
        /* if (this->field_0x6a4 == 7340) goto L_e00; */
        /* goto L_e74; */
        /* L_e00:; */
        /* if (searchByID(this->field_0x6fc) == 0) goto L_e74; */
        /* if (/ * bne * / 1) goto L_e74; */
        m738 = 0;
        /* field_0x73c = 0; */
        /* field_0x740 = 0; */
        /* field_0x73c = (this->field_0x73c + (base + this->field_0x20)); */
        m81E = 2;
        /* field_0x7c2 = 1; */
        /* L_e74:; */
        /* if ((char & 16777215) == this->field_0x817) goto L_e9c; */
        /* if ((char & 16777215) <= 13) goto L_e90; */
        /* goto L_e9c; */
        /* L_e90:; */
        /* field_0x817 = char; */
        /* L_e9c:; */
        return setAnm_ATR();
}

/* 00000FA0-00001080       .text ctrlAnmAtr__11daNpc_Kk1_cFv */
void daNpc_Kk1_c::ctrlAnmAtr() {
        /* if (this->field_0x817 == 10) goto L_f60; */
        /* if (/ * bge * / 1) goto L_ee8; */
        /* if (this->field_0x817 == 8) goto L_ef8; */
        /* if (/ * bge * / 1) goto L_f80; */
        /* goto L_f80; */
        /* L_ee8:; */
        /* if (this->field_0x817 == 12) goto L_f80; */
        /* if (/ * bge * / 1) goto L_f80; */
        /* goto L_f3c; */
        /* L_ef8:; */
        /* if (this->field_0x7b0 == 0) goto L_f80; */
        /* field_0x206 = (this->field_0x206 + -32768); */
        setAnm_NUM(0, 1);
        /* ((mDoExt_McaMorf*)(this->field_0x330))->setMorf(C_@4189); */
        /* field_0x817 = 0; */
        /* goto L_f80; */
        /* L_f3c:; */
        /* if (this->field_0x7b0 == 0) goto L_f80; */
        /* ((daNpc_Kk1_c*)(((mDoExt_McaMorf*)(this->field_0x330))->setMorf(C_@4189)))->setAnm_NUM(6, 1); */
        /* field_0x817 = 6; */
        /* goto L_f80; */
        /* L_f60:; */
        /* if (this->field_0x7b0 == 0) goto L_f80; */
        /* ((daNpc_Kk1_c*)(((daNpc_Kk1_c*)(((mDoExt_McaMorf*)(this->field_0x330))->setMorf(C_@4189)))->setAnm_NUM(6, 1)))->setAnm_NUM(0, 1); */
        /* field_0x817 = 0; */
        /* L_f80:; */
        /* return ((daNpc_Kk1_c*)(((daNpc_Kk1_c*)(((mDoExt_McaMorf*)(this->field_0x330))->setMorf(C_@4189)))->setAnm_NUM(6, 1)))->setAnm_NUM(0, 1); */
}

/* 00001080-000010E4       .text setAnm_ATR__11daNpc_Kk1_cFv */
void daNpc_Kk1_c::setAnm_ATR() {
    /* init_texPttrnAnm(this->field_0x1, 1, arg3, arg4, arg5, arg6, arg7); */
    return setAnm_anm((((char*)&a_anm_prm_tbl$4577 + 0) + (this->field_0x817 << 4)), (this->field_0x817 << 4));
}

/* 000010E4-000011A0       .text anmAtr__11daNpc_Kk1_cFUs */
void daNpc_Kk1_c::anmAtr(unsigned short) {
        /* if ((short & 65535) == 14) goto L_1088; */
        /* if (/ * bge * / 1) goto L_1090; */
        /* if ((short & 65535) == 6) goto L_1028; */
        /* goto L_1090; */
        /* L_1028:; */
        /* if (this->field_0x822 != 0) goto L_1050; */
        /* chngAnmAtr(this->field_0x5bcf); */
        /* field_0x822 = (this->field_0x822 + 1); */
        /* L_1050:; */
        /* if (this->field_0x5bd0 == 255) goto L_1090; */
        /* if (this->field_0x5bd0 == this->field_0x818) goto L_1090; */
        /* field_0x5bd0 = 255; */
        chngAnmTag();
        /* goto L_1090; */
        /* L_1088:; */
        /* field_0x822 = 0; */
        /* L_1090:; */
        ctrlAnmAtr();
        return ctrlAnmTag();
}

/* 000011A0-0000149C       .text next_msgStatus__11daNpc_Kk1_cFPUl */
void daNpc_Kk1_c::next_msgStatus(unsigned long*) {
        /* if (/ * bgt * / 1) goto L_13a4; */
        base = 7302;
        /* goto L_13a8; */
        base = 7335;
        /* goto L_13a8; */
        base = 7336;
        /* goto L_13a8; */
        base = 7305;
        /* goto L_13a8; */
        base = 7306;
        /* goto L_13a8; */
        base = 7337;
        /* goto L_13a8; */
        base = 7340;
        /* field_0x7b6 = 1; */
        /* goto L_13a8; */
        base = 7310;
        /* goto L_13a8; */
        base = 7311;
        /* goto L_13a8; */
        /* if (this->field_0xfa == 1) goto L_1180; */
        /* if (/ * bge * / 1) goto L_13a8; */
        /* if (this->field_0xfa >= 0) goto L_1174; */
        /* goto L_13a8; */
        /* L_1174:; */
        base = 7312;
        /* goto L_13a8; */
        /* L_1180:; */
        base = 7333;
        /* field_0x7ac = (this->field_0x7ac + 1); */
        /* goto L_13a8; */
        base = 7311;
        /* goto L_13a8; */
        base = 7313;
        /* goto L_13a8; */
        /* if (this->field_0xfa == 1) goto L_11dc; */
        /* if (/ * bge * / 1) goto L_13a8; */
        /* if (this->field_0xfa >= 0) goto L_11d0; */
        /* goto L_13a8; */
        /* L_11d0:; */
        base = 7315;
        /* goto L_13a8; */
        /* L_11dc:; */
        base = 7314;
        /* field_0x7ac = (this->field_0x7ac + 1); */
        /* goto L_13a8; */
        base = 7313;
        /* goto L_13a8; */
        base = 7316;
        /* goto L_13a8; */
        /* if (this->field_0xfa == 1) goto L_1238; */
        /* if (/ * bge * / 1) goto L_13a8; */
        /* if (this->field_0xfa >= 0) goto L_122c; */
        /* goto L_13a8; */
        /* L_122c:; */
        base = 7318;
        /* goto L_13a8; */
        /* L_1238:; */
        base = 7317;
        /* field_0x7ac = (this->field_0x7ac + 1); */
        /* goto L_13a8; */
        base = 7318;
        /* goto L_13a8; */
        base = 7319;
        /* goto L_13a8; */
        /* if (this->field_0xfa == 1) goto L_1294; */
        /* if (/ * bge * / 1) goto L_13a8; */
        /* if (this->field_0xfa >= 0) goto L_1288; */
        /* goto L_13a8; */
        /* L_1288:; */
        base = 7320;
        /* goto L_13a8; */
        /* L_1294:; */
        base = ((1 >> 31) + 7323);
        /* goto L_13a8; */
        /* if (this->field_0xfa == 1) goto L_12e4; */
        /* if (/ * bge * / 1) goto L_13a8; */
        /* if (this->field_0xfa >= 0) goto L_12d8; */
        /* goto L_13a8; */
        /* L_12d8:; */
        base = 7321;
        /* goto L_13a8; */
        /* L_12e4:; */
        /* goto L_13a8; */
        /* if (this->field_0xfa == 1) goto L_1330; */
        /* if (/ * bge * / 1) goto L_13a8; */
        /* if (this->field_0xfa >= 0) goto L_130c; */
        /* goto L_13a8; */
        /* L_130c:; */
        base = ((1 >> 31) + 7325);
        /* goto L_13a8; */
        /* L_1330:; */
        base = 7322;
        /* goto L_13a8; */
        base = 7325;
        /* goto L_13a8; */
        base = 7326;
        /* goto L_13a8; */
        base = 7338;
        /* goto L_13a8; */
        base = 7327;
        /* goto L_13a8; */
        /* goto L_13a8; */
        base = 7330;
        /* goto L_13a8; */
        base = 7331;
        /* goto L_13a8; */
        base = 7332;
        /* goto L_13a8; */
        base = 7339;
        /* goto L_13a8; */
        /* L_13a4:; */
        /* L_13a8:; */
        return 16;
}

/* 0000149C-00001534       .text getMsg_KK1_0__11daNpc_Kk1_cFv */
void daNpc_Kk1_c::getMsg_KK1_0() {
        /* if (dKy_daynight_check() != 1) goto L_13f4; */
        /* if (this->field_0x7b8 == 0) goto L_13ec; */
        /* field_0x7b8 = 0; */
        return 7329;
        /* L_13ec:; */
        return 7307;
        /* L_13f4:; */
        /* if (((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->isEventBit(3592) != 0) goto L_1430; */
        ((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->isEventBit(3600);
        /* goto L_1434; */
        /* L_1430:; */
        /* L_1434:; */
        return 7301;
}

/* 00001534-00001570       .text getMsg__11daNpc_Kk1_cFv */
void daNpc_Kk1_c::getMsg() {
    }
    return getMsg_KK1_0();


/* 00001570-000015FC       .text eventOrder__11daNpc_Kk1_cFv */
void daNpc_Kk1_c::eventOrder() {
        /* if ((this->field_0x81b & 255) == 1) goto L_14a8; */
        /* if ((this->field_0x81b & 255) != 2) goto L_14c8; */
        /* L_14a8:; */
        /* if (this->field_0x81b != 1) goto L_1500; */
        fopAcM_orderSpeakEvent(this);
        /* goto L_1500; */
        /* L_14c8:; */
        /* if (/ * blt * / 1) goto L_1500; */
        /* field_0x78a = 0; */
        /* L_1500:; */
        return fopAcM_orderOtherEventId(fopAcM_orderSpeakEvent(this), this->field_0x77c, 255);
}

/* 000015FC-000016DC       .text checkOrder__11daNpc_Kk1_cFv */
void daNpc_Kk1_c::checkOrder() {
        /* if (this->field_0xf8 != 2) goto L_15a8; */
        /* if (((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->startCheck(this->field_0x77c) == 0) goto L_15dc; */
        /* if ((this->field_0x81b & 255) < 3) goto L_15dc; */
        /* if (this->field_0x78a == 3) goto L_1580; */
        /* if (/ * bge * / 1) goto L_1590; */
        /* goto L_1590; */
        /* goto L_1590; */
        /* L_1580:; */
        setAnm_NUM(0, 1);
        /* L_1590:; */
        /* field_0x81b = 0; */
        /* field_0x817 = 255; */
        /* field_0x818 = 255; */
        /* goto L_15dc; */
        /* L_15a8:; */
        /* if (((daNpc_Kk1_c*)(setAnm_NUM(0, 1)))->checkCommandTalk() == 0) goto L_15dc; */
        /* if ((this->field_0x81b & 255) == 1) goto L_15cc; */
        /* if ((this->field_0x81b & 255) != 2) goto L_15dc; */
        /* L_15cc:; */
        /* field_0x81b = 0; */
        /* field_0x7c1 = 1; */
        /* L_15dc:; */
        return ((daNpc_Kk1_c*)(setAnm_NUM(0, 1)))->checkCommandTalk();
}

/* 000016DC-00001774       .text chk_talk__11daNpc_Kk1_cFv */
void daNpc_Kk1_c::chk_talk() {
        /* if (this->field_0x52b8 == 1) goto L_162c; */
        /* if (this->field_0x52b8 == 2) goto L_162c; */
        /* if (this->field_0x52b8 != 3) goto L_1630; */
        /* L_162c:; */
        /* L_1630:; */
        /* if (1 == 0) goto L_1668; */
        /* if (((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->ChkPresentEnd() == 0) goto L_1660; */
        return 1;
        /* L_1660:; */
        return 0;
        /* L_1668:; */
        /* field_0x7b2 = 255; */
        return 1;
}

/* 00001774-000017B4       .text chk_parts_notMov__11daNpc_Kk1_cFv */
void daNpc_Kk1_c::chk_parts_notMov() {
    /* if (this->field_0x772 == this->field_0x292) { */
        /* if (this->field_0x774 == this->field_0x296) goto L_16bc; */
        /* if (this->field_0x770 != this->field_0x206) goto L_16c0; */
    /* L_16bc:; */
    /* L_16c0:; */
    return 1;
}

/* 000017B4-00001808       .text searchByID__11daNpc_Kk1_cFUiPi */
void daNpc_Kk1_c::searchByID(fpc_ProcID, int*) {
    base = 0;
    if (fopAcM_SearchByID(fpc_ProcID) == 0) {
        base = 1;
    }
}

/* 00001808-000018B8       .text partner_search_sub__11daNpc_Kk1_cFPFPvPv_Pv */
void daNpc_Kk1_c::partner_search_sub(void* (*)(void*, void*)) {
        /* field_0x6fc = -1; */
        base = 0;
        /* fpcEx_Search(arg1, this, ((char*)&l_check_inf + 0), 0, arg4, arg5, arg6, arg7); */
        /* if (base == 0) goto L_17b0; */
        /* if (base == 0) goto L_17a4; */
        /* goto L_17a8; */
        /* L_17a4:; */
        /* L_17a8:; */
        /* field_0x6fc = -1; */
        /* L_17b0:; */
        return 1;
}

/* 000018B8-00001924       .text partner_search__11daNpc_Kk1_cFv */
void daNpc_Kk1_c::partner_search() {
        /* if (this->field_0x821 != 1) goto L_1824; */
        /* if (this->field_0x820 == 0) goto L_17fc; */
        /* goto L_180c; */
        /* L_17fc:; */
        /* partner_search_sub(((char*)&searchActor_SWC00__FPvPv + 0), arg2, arg3, arg4, arg5, arg6, arg7); */
        /* goto L_1810; */
        /* L_180c:; */
        /* L_1810:; */
        /* if (1 == 0) goto L_1824; */
        /* field_0x821 = (this->field_0x821 + 1); */
        /* L_1824:; */
        /* return this->field_0x821; */
}

/* 00001924-00001B10       .text lookBack__11daNpc_Kk1_cFv */
void daNpc_Kk1_c::lookBack() {
        /* _savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* if ((m81E & 255) == 3) goto L_1944; */
        /* if (/ * bge * / 1) goto L_18cc; */
        /* if ((m81E & 255) == 1) goto L_18dc; */
        /* if (/ * bge * / 1) goto L_1924; */
        /* goto L_19cc; */
        /* L_18cc:; */
        /* if ((m81E & 255) == 5) goto L_19ac; */
        /* if (/ * bge * / 1) goto L_19cc; */
        /* goto L_194c; */
        /* L_18dc:; */
        dNpc_playerEyePos();
        m738 = 0;
        /* field_0x73c = 0; */
        /* field_0x740 = 0; */
        /* goto L_19cc; */
        /* L_1924:; */
        /* goto L_19cc; */
        /* L_1944:; */
        /* goto L_19cc; */
        /* L_194c:; */
        /* if (((daNpc_Kk1_c*)(dNpc_playerEyePos()))->searchByID(this->field_0x700) == 0) goto L_19cc; */
        /* if (/ * bne * / 1) goto L_19cc; */
        m738 = 0;
        /* field_0x73c = 0; */
        /* field_0x740 = 0; */
        /* field_0x73c = 0; */
        /* goto L_19cc; */
        /* L_19ac:; */
        /* ((daNpc_Kk1_c*)(((daNpc_Kk1_c*)(dNpc_playerEyePos()))->searchByID(this->field_0x700)))->kyorokyoro(); */
        /* L_19cc:; */
        /* return _restgpr_28(((dNpc_JntCtrl_c*)((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 656)))->lookAtTarget_2((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 518))); */
}

/* 00001B10-00001B90       .text chkAttention__11daNpc_Kk1_cFv */
void daNpc_Kk1_c::chkAttention() {
    if (((dAttention_c*)(((char*)&g_dComIfG_gameInfo + 22536)))->LockonTruth() == 0) {
    }
    return ((this - ((dAttention_c*)(((char*)&g_dComIfG_gameInfo + 22536)))->ActionTarget(0)) >> 5);
}

/* 00001B90-00001BE8       .text setAttention__11daNpc_Kk1_cFb */
void daNpc_Kk1_c::setAttention(bool) {
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

/* 00001BE8-00001C70       .text decideType__11daNpc_Kk1_cFi */
void daNpc_Kk1_c::decideType(int) {
    if (m81F != 0) {
        return 1;
    }
    m81F = 1;
    /* field_0x820 = 0; */
    /* strcpy((this + 1742), ((char*)&@stringBase0 + 92), arg2, arg3, arg4, arg5, arg6, arg7); */
    if ((m81F & 255) != -1) {
        /* if ((this->field_0x820 & 255) != -1) goto L_1b70; */
    }
    /* L_1b70:; */
    return 1;
}

/* 00001C70-00001D10       .text cut_init_RUN_START__11daNpc_Kk1_cFi */
void daNpc_Kk1_c::cut_init_RUN_START(int) {
    /* ((daNpc_Kk1_c*)(_savegpr_29(this, int, arg2, arg3, arg4, arg5, arg6, arg7)))->searchByID(this->field_0x6fc); */
    if (/* bne */ 1) {
        /* ((JUTAssertion*)(((JUTAssertion*)(((daNpc_Kk1_c*)(_savegpr_29(this, int, arg2, arg3, arg4, arg5, arg6, arg7)))->searchByID(this->field_0x6fc)))->getSDevice()))->showAssert(((char*)&@stringBase0 + 60), 1357, ((char*)&@stringBase0 + 95)); */
        OSPanic(((char*)&@stringBase0 + 60), 1357, ((char*)&@stringBase0 + 87));
    }
    /* field_0xd0 = ((dEvt_control_c*)(((char*)&g_dComIfG_gameInfo + 20952)))->getPId(); */
    /* return _restgpr_29(((dNpc_PathRun_c*)((_savegpr_29(this, int, arg2, arg3, arg4, arg5, arg6, arg7) + 1796)))->nextIdxAuto()); */
}

/* 00001D10-00001DD0       .text cut_move_RUN_START__11daNpc_Kk1_cFv */
void daNpc_Kk1_c::cut_move_RUN_START() {
    getPoint((this + 1796));
    cLib_addCalcAngleS((this + 518), cLib_targetAngleY((this + 504)), this->field_0x30, this->field_0x32, 128);
    if (this->field_0x206 == (cLib_targetAngleY((this + 504)) & 65535)) {
        /* field_0x304 = 2; */
        /* field_0x314 = 1; */
        return 1;
    }
    return 0;
}

/* 00001DD0-00001E58       .text cut_init_RUN__11daNpc_Kk1_cFi */
void daNpc_Kk1_c::cut_init_RUN(int) {
    /* ((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMySubstanceP(int, ((char*)&@stringBase0 + 108), 3, arg4); */
    /* field_0x796 = -1; */
    /* if (((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMySubstanceP(int, ((char*)&@stringBase0 + 108), 3, arg4) != 0) { */
    setAnm_NUM(4, 1);
    /* field_0x7b4 = 1; */
    /* field_0x815 = 2; */
    /* field_0x816 = 0; */
    return setAnm_NUM(4, 1);
}

/* 00001E58-00001EAC       .text cut_move_RUN__11daNpc_Kk1_cFv */
void daNpc_Kk1_c::cut_move_RUN() {
    event_move(0);
    }
    return ((cLib_calcTimer<s>__FPs((this + 1942)) & 65535) >> 5);


/* 00001EAC-00001F08       .text cut_init_CATCH_START__11daNpc_Kk1_cFi */
void daNpc_Kk1_c::cut_init_CATCH_START(int) {
    setAnm_NUM(8, 1);
    /* return ((mDoExt_McaMorf*)(this->field_0x330))->setMorf(C_@4189); */
}

/* 00001F08-00001F2C       .text cut_move_CATCH_START__11daNpc_Kk1_cFv */
void daNpc_Kk1_c::cut_move_CATCH_START() {
    if (*(unsigned char*)(this + 1968) == 0) {
        *(int*)(this + 1912) = 0;
    }
}

/* 00001F2C-00001FAC       .text cut_init_CATCH_END__11daNpc_Kk1_cFi */
void daNpc_Kk1_c::cut_init_CATCH_END(int) {
    /* field_0x29c = ((this->field_0x29c >> 0) & 0); */
    /* field_0x206 = (this->field_0x206 + -32768); */
    setAnm_NUM(0, 1);
    /* ((mDoExt_McaMorf*)(this->field_0x330))->setMorf(C_@4189); */
    m81E = 1;
    /* field_0x7c2 = 0; */
    /* field_0x29a = 1; */
    return 1;
}

/* 00001FAC-00001FB4       .text cut_move_CATCH_END__11daNpc_Kk1_cFv */
int daNpc_Kk1_c::cut_move_CATCH_END() {
    return 1;
}

/* 00001FB4-000022BC       .text cut_init_TRN__11daNpc_Kk1_cFi */
void daNpc_Kk1_c::cut_init_TRN(int) {
        /* _savegpr_24(this, int, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* if (this->field_0x816 == 5) goto L_21a0; */
        /* if (this->field_0x709 < 25) goto L_1f50; */
        /* if (this->field_0x709 > 40) goto L_1f50; */
        m81E = 0;
        /* field_0x7c2 = 1; */
        /* goto L_21b0; */
        /* L_1f50:; */
        /* ((dNpc_PathRun_c*)((_savegpr_24(this, int, arg2, arg3, arg4, arg5, arg6, arg7) + 1796)))->setNearPathIndx((this->field_0x5b40 + 504)); */
        /* ((dNpc_PathRun_c*)((_savegpr_24(this, int, arg2, arg3, arg4, arg5, arg6, arg7) + 1796)))->setNearPathIndx((_savegpr_24(this, int, arg2, arg3, arg4, arg5, arg6, arg7) + 504)); */
        /* ((dNpc_PathRun_c*)((_savegpr_24(this, int, arg2, arg3, arg4, arg5, arg6, arg7) + 1796)))->maxPoint(); */
        /* if (this->field_0x709 <= this->field_0x709) goto L_1fdc; */
        /* L_1fdc:; */
        /* if (((this->field_0x709 - (((this->field_0x709 + ((dNpc_PathRun_c*)((_savegpr_24(this, int, arg2, arg3, arg4, arg5, arg6, arg7) + 1796)))->maxPoint()) & 16777215) & 16777215)) & 65535) <= 0) goto L_1ffc; */
        /* L_1ffc:; */
        /* if ((((((dNpc_PathRun_c*)((_savegpr_24(this, int, arg2, arg3, arg4, arg5, arg6, arg7) + 1796)))->maxPoint() & 16777215) - ((this->field_0x709 - (((this->field_0x709 + ((dNpc_PathRun_c*)((_savegpr_24(this, int, arg2, arg3, arg4, arg5, arg6, arg7) + 1796)))->maxPoint()) & 16777215) & 16777215)) & 65535)) & 65535) != 0) goto L_2174; */
        /* getPoint((_savegpr_24(this, int, arg2, arg3, arg4, arg5, arg6, arg7) + 1796)); */
        __mi();
        PSVECSquareMag();
        /* if (/ * ble * / 1) goto L_20cc; */
        /* goto L_20d0; */
        /* L_20cc:; */
        /* L_20d0:; */
        __mi();
        PSVECSquareMag();
        /* if (/ * ble * / 1) goto L_2168; */
        /* L_2168:; */
        /* L_2174:; */
        /* if ((((((dNpc_PathRun_c*)((_savegpr_24(this, int, arg2, arg3, arg4, arg5, arg6, arg7) + 1796)))->maxPoint() & 16777215) - ((this->field_0x709 - (((this->field_0x709 + ((dNpc_PathRun_c*)((_savegpr_24(this, int, arg2, arg3, arg4, arg5, arg6, arg7) + 1796)))->maxPoint()) & 16777215) & 16777215)) & 65535)) & 65535) != 0) goto L_2184; */
        /* if ((((((dNpc_PathRun_c*)((_savegpr_24(this, int, arg2, arg3, arg4, arg5, arg6, arg7) + 1796)))->maxPoint() & 16777215) - ((this->field_0x709 - (((this->field_0x709 + ((dNpc_PathRun_c*)((_savegpr_24(this, int, arg2, arg3, arg4, arg5, arg6, arg7) + 1796)))->maxPoint()) & 16777215) & 16777215)) & 65535)) >> 31) == 0) goto L_21a0; */
        /* L_2184:; */
        /* ((dNpc_PathRun_c*)((_savegpr_24(this, int, arg2, arg3, arg4, arg5, arg6, arg7) + 1796)))->decIdxAuto(); */
        /* L_21a0:; */
        m81E = 0;
        /* field_0x7c2 = 1; */
        /* L_21b0:; */
        /* return _restgpr_24(((dNpc_PathRun_c*)((_savegpr_24(this, int, arg2, arg3, arg4, arg5, arg6, arg7) + 1796)))->decIdxAuto()); */
}

/* 000022BC-00002364       .text cut_move_TRN__11daNpc_Kk1_cFv */
void daNpc_Kk1_c::cut_move_TRN() {
    getPoint((this + 1796));
    cLib_addCalcAngleS((this + 518), cLib_targetAngleY((this + 504)), this->field_0x30, this->field_0x32, 128);
    if (this->field_0x206 == (cLib_targetAngleY((this + 504)) & 65535)) {
        return 1;
    }
    return 0;
}

/* 00002364-00002388       .text cut_init_BYE_START__11daNpc_Kk1_cFi */
void daNpc_Kk1_c::cut_init_BYE_START(int) {
    /* field_0x7b9 = 1; */
    return this;
}

/* 00002388-00002390       .text cut_move_BYE_START__11daNpc_Kk1_cFv */
int daNpc_Kk1_c::cut_move_BYE_START() {
    return 1;
}

/* 00002390-00002490       .text cut_init_BYE__11daNpc_Kk1_cFi */
void daNpc_Kk1_c::cut_init_BYE(int) {
    /* _savegpr_27(this, int, arg2, arg3, arg4, arg5, arg6, arg7); */
    ((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMySubstanceP();
    /* field_0x796 = 30; */
    if (((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMySubstanceP() != 0) {
    }
    /* field_0x798 = -1; */
    if (((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMySubstanceP() != 0) {
    }
    /* field_0x7ae = 0; */
    if (((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMySubstanceP() != 0) {
    }
    /* ((daNpc_Kk1_c*)(_savegpr_27(this, int, arg2, arg3, arg4, arg5, arg6, arg7)))->setAnm_NUM(4, 1); */
    /* field_0x815 = 2; */
    /* field_0x7b4 = 1; */
    /* return _restgpr_27(((daNpc_Kk1_c*)(_savegpr_27(this, int, arg2, arg3, arg4, arg5, arg6, arg7)))->setAnm_NUM(4, 1)); */
}

/* 00002490-00002568       .text cut_move_BYE__11daNpc_Kk1_cFv */
void daNpc_Kk1_c::cut_move_BYE() {
        event_move(0);
        /* if (this->field_0x798 <= 0) goto L_2430; */
        /* if (cLib_calcTimer<s>__FPs((this + 1944)) != 0) goto L_2430; */
        /* field_0x304 = 3; */
        /* field_0x30c = 0; */
        /* field_0x314 = 9; */
        /* field_0x30c = 12823; */
        /* L_2430:; */
        /* if (cLib_calcTimer<s>__FPs((this + 1942), (this->field_0x5b40 + 504), -12823) != 0) goto L_2460; */
        /* if (this->field_0x7ae != 0) goto L_2458; */
        speedF = 0;
        /* L_2458:; */
        return 1;
        /* L_2460:; */
        return 0;
}

/* 00002568-000025C8       .text cut_init_BYE_CONTINUE__11daNpc_Kk1_cFi */
void daNpc_Kk1_c::cut_init_BYE_CONTINUE(int) {
    /* ((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMySubstanceP(int, ((char*)&@stringBase0 + 108), 3, arg4); */
    /* field_0x796 = 30; */
    /* if (((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMySubstanceP(int, ((char*)&@stringBase0 + 108), 3, arg4) != 0) { */
    /* return ((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMySubstanceP(int, ((char*)&@stringBase0 + 108), 3, arg4); */

/* 000025C8-00002620       .text cut_move_BYE_CONTINUE__11daNpc_Kk1_cFv */
void daNpc_Kk1_c::cut_move_BYE_CONTINUE() {
    event_move(0);
    if (cLib_calcTimer<s>__FPs((this + 1942)) != 0) {
        speedF = 0;
        return 1;
    }
    return 0;
}

/* 00002620-000026BC       .text cut_init_BYE_END__11daNpc_Kk1_cFi */
void daNpc_Kk1_c::cut_init_BYE_END(int) {
    /* field_0x304 = 3; */
    /* field_0x30c = 0; */
    /* field_0x314 = 4; */
    cLib_targetAngleY((this->field_0x5b40 + 504), (this + 504));
    /* field_0x29c = ((this->field_0x29c >> 0) & 0); */
    /* field_0x7be = 1; */
    /* return this->field_0x5b40; */
}

/* 000026BC-000026C4       .text cut_move_BYE_END__11daNpc_Kk1_cFv */
int daNpc_Kk1_c::cut_move_BYE_END() {
    return 1;
}

/* 000026C4-000026C8       .text cut_init_PLYER_TRN__11daNpc_Kk1_cFi */
void daNpc_Kk1_c::cut_init_PLYER_TRN(int) {
}

/* 000026C8-000026D0       .text cut_move_PLYER_TRN__11daNpc_Kk1_cFv */
int daNpc_Kk1_c::cut_move_PLYER_TRN() {
    return 1;
}

/* 000026D0-00002744       .text cut_init_OTOBOKE__11daNpc_Kk1_cFi */
void daNpc_Kk1_c::cut_init_OTOBOKE(int) {
    /* field_0x304 = 3; */
    /* field_0x30c = 0; */
    /* field_0x314 = 4; */
    /* field_0x796 = 2; */
    /* return this->field_0x5b40; */
}

/* 00002744-00002798       .text cut_move_OTOBOKE__11daNpc_Kk1_cFv */
void daNpc_Kk1_c::cut_move_OTOBOKE() {
    /* if (cLib_calcTimer<s>__FPs((this + 1942), arg1, arg2, arg3, arg4, arg5, arg6, arg7) != 0) { */
        /* field_0x304 = 2; */
        /* field_0x314 = 1; */
        /* return 1; */
    return 0;
}

/* 00002798-000028A4       .text cut_init_PLYER_MOV__11daNpc_Kk1_cFi */
void daNpc_Kk1_c::cut_init_PLYER_MOV(int) {
        /* if (abs(((this->field_0x206 - cLib_targetAngleY((_savegpr_29(this, int, arg2, arg3, arg4, arg5, arg6, arg7) + 504), (this->field_0x5b40 + 504))) & 65535)) <= 8192) goto L_2714; */
        ((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->setGoal((this->field_0x5b40 + 504));
        /* goto L_27a0; */
        /* L_2714:; */
        /* if (((this->field_0x206 - cLib_targetAngleY((_savegpr_29(this, int, arg2, arg3, arg4, arg5, arg6, arg7) + 504), (this->field_0x5b40 + 504))) & 65535) != 0) goto L_2738; */
        /* L_2738:; */
        PSMTXTrans(((char*)&now__14mDoMtx_stack_c + 0));
        mDoMtx_YrotM(((char*)&now__14mDoMtx_stack_c + 0), ((this->field_0x206 + (10240 & 65535)) & 65535));
        PSMTXMultVec(((char*)&now__14mDoMtx_stack_c + 0));
        /* L_27a0:; */
        return _restgpr_29(((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->setGoal());
}

/* 000028A4-000028AC       .text cut_move_PLYER_MOV__11daNpc_Kk1_cFv */
int daNpc_Kk1_c::cut_move_PLYER_MOV() {
    return 1;
}

/* 000028AC-00002A40       .text cut_init_RUNAWAY_START__11daNpc_Kk1_cFi */
void daNpc_Kk1_c::cut_init_RUNAWAY_START(int) {
        /* _savegpr_28(this, int, arg2, arg3, arg4, arg5, arg6, arg7); */
        ((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMySubstanceP();
        /* field_0x304 = 3; */
        /* field_0x30c = 0; */
        /* field_0x314 = 4; */
        /* cLib_targetAngleY((this->field_0x5b40 + 504), (_savegpr_28(this, int, arg2, arg3, arg4, arg5, arg6, arg7) + 504)); */
        /* cLib_targetAngleY((_savegpr_28(this, int, arg2, arg3, arg4, arg5, arg6, arg7) + 504), (this->field_0x5b40 + 504)); */
        /* field_0x20e = 0; */
        /* field_0x7bd = 1; */
        speedF = 0;
        /* field_0x292 = 0; */
        /* field_0x290 = 0; */
        /* field_0x296 = 0; */
        /* field_0x294 = 0; */
        m81E = 0;
        /* if (abs(((this->field_0x206 - (cLib_targetAngleY((_savegpr_28(this, int, arg2, arg3, arg4, arg5, arg6, arg7) + 504), (this->field_0x5b40 + 504)) & 65535)) & 65535), (cLib_targetAngleY((_savegpr_28(this, int, arg2, arg3, arg4, arg5, arg6, arg7) + 504), (this->field_0x5b40 + 504)) & 65535)) <= 14336) goto L_28d0; */
        /* field_0x206 = 0; */
        /* ((daNpc_Kk1_c*)(_savegpr_28(this, int, arg2, arg3, arg4, arg5, arg6, arg7)))->setAnm_NUM(8, 1); */
        /* goto L_293c; */
        /* L_28d0:; */
        /* field_0x796 = 38; */
        /* if (((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMySubstanceP() == 0) goto L_2904; */
        /* L_2904:; */
        /* field_0x206 = cLib_targetAngleY((_savegpr_28(this, int, arg2, arg3, arg4, arg5, arg6, arg7) + 504), (this->field_0x5b40 + 504)); */
        /* ((daNpc_Kk1_c*)(_savegpr_28(this, int, arg2, arg3, arg4, arg5, arg6, arg7)))->setAnm_NUM(0, 1); */
        /* L_293c:; */
        /* return _restgpr_28(((daNpc_Kk1_c*)(_savegpr_28(this, int, arg2, arg3, arg4, arg5, arg6, arg7)))->setBikon()); */
}

/* 00002A40-00002AD0       .text cut_move_RUNAWAY_START__11daNpc_Kk1_cFv */
void daNpc_Kk1_c::cut_move_RUNAWAY_START() {
        /* if (this->field_0x81a != 8) goto L_29cc; */
        /* if (this->field_0x7b0 == 0) goto L_29c4; */
        /* field_0x206 = cLib_targetAngleY((this + 504), (this->field_0x5b40 + 504)); */
        setAnm_NUM(0, 1);
        /* ((mDoExt_McaMorf*)(this->field_0x330))->setMorf(C_@4189); */
        return 1;
        /* L_29c4:; */
        return 0;
        /* L_29cc:; */
        return 1;
}

/* 00002AD0-00002B08       .text cut_init_RUNAWAY_END__11daNpc_Kk1_cFi */
void daNpc_Kk1_c::cut_init_RUNAWAY_END(int) {
    /* field_0x29c = ((this->field_0x29c >> 0) & 0); */
    /* field_0x7b4 = 0; */
    speedF = 0;
    /* field_0x7be = 1; */
    return this;
}

/* 00002B08-00002B10       .text cut_move_RUNAWAY_END__11daNpc_Kk1_cFv */
int daNpc_Kk1_c::cut_move_RUNAWAY_END() {
    return 1;
}

/* 00002B10-00002D98       .text privateCut__11daNpc_Kk1_cFi */
void daNpc_Kk1_c::privateCut(int) {
        /* _savegpr_29(this, int, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* if (/ * beq * / 1) goto L_2c94; */
        /* field_0x814 = ((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMyActIdx(); */
        /* if ((this->field_0x814 & 255) != -1) goto L_2a94; */
        ((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->cutEnd();
        /* goto L_2c94; */
        /* L_2a94:; */
        /* if (((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getIsAddvance() == 0) goto L_2bac; */
        /* if ((this->field_0x814 & 255) > 13) goto L_2bac; */
        /* ((daNpc_Kk1_c*)(_savegpr_29(this, int, arg2, arg3, arg4, arg5, arg6, arg7)))->cut_init_RUN_START(); */
        /* goto L_2bac; */
        /* ((daNpc_Kk1_c*)(_savegpr_29(this, int, arg2, arg3, arg4, arg5, arg6, arg7)))->cut_init_RUN(); */
        /* goto L_2bac; */
        /* ((daNpc_Kk1_c*)(_savegpr_29(this, int, arg2, arg3, arg4, arg5, arg6, arg7)))->cut_init_CATCH_START(); */
        /* goto L_2bac; */
        /* ((daNpc_Kk1_c*)(_savegpr_29(this, int, arg2, arg3, arg4, arg5, arg6, arg7)))->cut_init_CATCH_END(); */
        /* goto L_2bac; */
        /* ((daNpc_Kk1_c*)(_savegpr_29(this, int, arg2, arg3, arg4, arg5, arg6, arg7)))->cut_init_TRN(); */
        /* goto L_2bac; */
        /* ((daNpc_Kk1_c*)(_savegpr_29(this, int, arg2, arg3, arg4, arg5, arg6, arg7)))->cut_init_BYE_START(); */
        /* goto L_2bac; */
        /* ((daNpc_Kk1_c*)(_savegpr_29(this, int, arg2, arg3, arg4, arg5, arg6, arg7)))->cut_init_BYE(); */
        /* goto L_2bac; */
        /* ((daNpc_Kk1_c*)(_savegpr_29(this, int, arg2, arg3, arg4, arg5, arg6, arg7)))->cut_init_BYE_END(); */
        /* goto L_2bac; */
        /* ((daNpc_Kk1_c*)(_savegpr_29(this, int, arg2, arg3, arg4, arg5, arg6, arg7)))->cut_init_PLYER_TRN(); */
        /* goto L_2bac; */
        /* ((daNpc_Kk1_c*)(_savegpr_29(this, int, arg2, arg3, arg4, arg5, arg6, arg7)))->cut_init_OTOBOKE(); */
        /* goto L_2bac; */
        /* ((daNpc_Kk1_c*)(_savegpr_29(this, int, arg2, arg3, arg4, arg5, arg6, arg7)))->cut_init_PLYER_MOV(); */
        /* goto L_2bac; */
        /* ((daNpc_Kk1_c*)(_savegpr_29(this, int, arg2, arg3, arg4, arg5, arg6, arg7)))->cut_init_RUNAWAY_START(); */
        /* goto L_2bac; */
        /* ((daNpc_Kk1_c*)(_savegpr_29(this, int, arg2, arg3, arg4, arg5, arg6, arg7)))->cut_init_RUNAWAY_END(); */
        /* goto L_2bac; */
        /* ((daNpc_Kk1_c*)(_savegpr_29(this, int, arg2, arg3, arg4, arg5, arg6, arg7)))->cut_init_BYE_CONTINUE(); */
        /* L_2bac:; */
        /* if ((this->field_0x814 & 255) > 13) goto L_2c7c; */
        /* ((daNpc_Kk1_c*)(_savegpr_29(this, int, arg2, arg3, arg4, arg5, arg6, arg7)))->cut_move_RUN_START(); */
        /* goto L_2c80; */
        /* ((daNpc_Kk1_c*)(_savegpr_29(this, int, arg2, arg3, arg4, arg5, arg6, arg7)))->cut_move_RUN(); */
        /* goto L_2c80; */
        /* ((daNpc_Kk1_c*)(_savegpr_29(this, int, arg2, arg3, arg4, arg5, arg6, arg7)))->cut_move_CATCH_START(); */
        /* goto L_2c80; */
        /* ((daNpc_Kk1_c*)(_savegpr_29(this, int, arg2, arg3, arg4, arg5, arg6, arg7)))->cut_move_CATCH_END(); */
        /* goto L_2c80; */
        /* ((daNpc_Kk1_c*)(_savegpr_29(this, int, arg2, arg3, arg4, arg5, arg6, arg7)))->cut_move_TRN(); */
        /* goto L_2c80; */
        /* ((daNpc_Kk1_c*)(_savegpr_29(this, int, arg2, arg3, arg4, arg5, arg6, arg7)))->cut_move_BYE_START(); */
        /* goto L_2c80; */
        /* ((daNpc_Kk1_c*)(_savegpr_29(this, int, arg2, arg3, arg4, arg5, arg6, arg7)))->cut_move_BYE(); */
        /* goto L_2c80; */
        /* ((daNpc_Kk1_c*)(_savegpr_29(this, int, arg2, arg3, arg4, arg5, arg6, arg7)))->cut_move_BYE_END(); */
        /* goto L_2c80; */
        /* ((daNpc_Kk1_c*)(_savegpr_29(this, int, arg2, arg3, arg4, arg5, arg6, arg7)))->cut_move_PLYER_TRN(); */
        /* goto L_2c80; */
        /* ((daNpc_Kk1_c*)(_savegpr_29(this, int, arg2, arg3, arg4, arg5, arg6, arg7)))->cut_move_OTOBOKE(); */
        /* goto L_2c80; */
        /* ((daNpc_Kk1_c*)(_savegpr_29(this, int, arg2, arg3, arg4, arg5, arg6, arg7)))->cut_move_PLYER_MOV(); */
        /* goto L_2c80; */
        /* ((daNpc_Kk1_c*)(_savegpr_29(this, int, arg2, arg3, arg4, arg5, arg6, arg7)))->cut_move_RUNAWAY_START(); */
        /* goto L_2c80; */
        /* ((daNpc_Kk1_c*)(_savegpr_29(this, int, arg2, arg3, arg4, arg5, arg6, arg7)))->cut_move_RUNAWAY_END(); */
        /* goto L_2c80; */
        /* ((daNpc_Kk1_c*)(_savegpr_29(this, int, arg2, arg3, arg4, arg5, arg6, arg7)))->cut_move_BYE_CONTINUE(); */
        /* goto L_2c80; */
        /* L_2c7c:; */
        /* L_2c80:; */
        /* if (1 == 0) goto L_2c94; */
        /* L_2c94:; */
        return _restgpr_29(((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->cutEnd());
}

/* 00002D98-00002DBC       .text endEvent__11daNpc_Kk1_cFv */
void daNpc_Kk1_c::endEvent() {
    /* field_0x817 = 255; */
    /* field_0x818 = 255; */
    return this;
}

/* 00002DBC-00002DF4       .text isEventEntry__11daNpc_Kk1_cFv */
void daNpc_Kk1_c::isEventEntry() {
    /* return ((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMyStaffId(this->field_0x2c4, 0, 0, arg4); */
}

/* 00002DF4-00002F80       .text event_proc__11daNpc_Kk1_cFi */
void daNpc_Kk1_c::event_proc(int) {
        /* if (((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->endCheck(this->field_0x77c) == 0) goto L_2e60; */
        /* if (this->field_0x78a == 3) goto L_2e4c; */
        /* if (/ * bge * / 1) goto L_2d74; */
        /* if (this->field_0x78a == 1) goto L_2d98; */
        /* if (/ * bge * / 1) goto L_2e24; */
        /* if (this->field_0x78a >= 0) goto L_2d88; */
        /* goto L_2e54; */
        /* L_2d74:; */
        /* if (this->field_0x78a >= 7) goto L_2e54; */
        /* if (this->field_0x78a >= 5) goto L_2e4c; */
        /* goto L_2e54; */
        /* L_2d88:; */
        setStt(5);
        /* goto L_2e54; */
        /* L_2d98:; */
        /* field_0xfc = -1; */
        /* if ((this->field_0x6a4 + -7320) > 7) goto L_2e54; */
        /* field_0x81b = 9; */
        m81E = 0;
        /* field_0x7c2 = 1; */
        /* goto L_2e54; */
        /* field_0x81b = 6; */
        m81E = 1;
        /* field_0x7c2 = 1; */
        /* goto L_2e54; */
        setStt(6);
        /* field_0x81b = 5; */
        m81E = 0;
        /* field_0x7c2 = 1; */
        /* goto L_2e54; */
        /* L_2e24:; */
        /* field_0x81b = 1; */
        ((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->onEventBit(3592);
        /* field_0x7b8 = 1; */
        /* goto L_2e54; */
        /* L_2e4c:; */
        fopAcM_delete(this);
        /* L_2e54:; */
        endEvent();
        /* goto L_2e7c; */
        /* L_2e60:; */
        /* if (((dNpc_EventCut_c*)((this + 708)))->cutProc() != 0) goto L_2e7c; */
        /* L_2e7c:; */
        return privateCut(int);
}

/* 00002F80-00002FB8       .text checkCommandTalk__11daNpc_Kk1_cFv */
void daNpc_Kk1_c::checkCommandTalk() {
    if (this->field_0xf8 == 1) {
        /* if (this->field_0x816 == 5) goto L_2ec4; */
        /* if (this->field_0x7a2 != 0) goto L_2ec4; */
    }
    /* L_2ec4:; */
    return 0;
}

/* 00002FB8-00003064       .text set_action__11daNpc_Kk1_cFM11daNpc_Kk1_cFPCvPvPv_iPv */
void daNpc_Kk1_c::set_action(int (daNpc_Kk1_c::*)(void*), void*) {
        /* if (__ptmf_cmpr((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1776)) == 0) goto L_2f5c; */
        /* if (__ptmf_test((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1776)) == 0) goto L_2f28; */
        /* field_0x821 = 9; */
        /* __ptmf_scall(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* L_2f28:; */
        /* field_0x821 = 0; */
        /* __ptmf_scall(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* L_2f5c:; */
        return _restgpr_29(1);
}

/* 00003064-0000311C       .text setStt__11daNpc_Kk1_cFSc */
void daNpc_Kk1_c::setStt(signed char) {
    /* field_0x81c = char; */
    if ((this->field_0x81c & 255) <= 7) {
        /* field_0x81b = 0; */
        /* field_0x7a2 = 0; */
        speedF = 0;
        /* goto L_301c; */
        /* field_0x81b = 0; */
        /* field_0x817 = 255; */
        /* field_0x818 = 255; */
        /* field_0x822 = 0; */
        /* field_0x7a0 = 0; */
        /* goto L_301c; */
        /* field_0x81b = 0; */
        /* goto L_301c; */
        /* field_0x81b = 0; */
        /* field_0x815 = 2; */
        /* field_0x816 = 0; */
        /* field_0x7b4 = 1; */
    }
    /* L_301c:; */
    return setAnm();
}

/* 0000311C-000032D8       .text createTama__11daNpc_Kk1_cFf */
void daNpc_Kk1_c::createTama(float) {
        __ct();
        dNpc_playerEyePos();
        __mi();
        PSVECSquareMag();
        /* if (/ * ble * / 1) goto L_3150; */
        /* L_3150:; */
        cLib_targetAngleY();
        cLib_targetAngleX();
        /* if (fopAcM_fastCreate(470, 0, (this + 608), (this->field_0x20a & 255)) == 0) goto L_31cc; */
        /* if (this == 0) goto L_31b8; */
        /* goto L_31bc; */
        /* L_31b8:; */
        /* L_31bc:; */
        /* field_0x290 = -1; */
        /* field_0x600 = farg0; */
        speedF = 0;
        /* L_31cc:; */
        return fopAcM_fastCreate(470, 0, (this + 608), (this->field_0x20a & 255));
}

/* 000032D8-0000345C       .text chk_areaIN__11daNpc_Kk1_cFf4cXyz */
void daNpc_Kk1_c::chk_areaIN(float, cXyz) {
    /* _savegpr_29(this, float, cXyz, arg3, arg4, arg5, arg6, arg7); */
    __mi();
    PSVECSquareMag();
    }
    /* if (abs(((this->field_0x206 - cLib_targetAngleY((_savegpr_29(this, float, cXyz, arg3, arg4, arg5, arg6, arg7) + 504), (this->field_0x5b40 + 504))) & 65535)) > 20024) { */
    if (/* beq */ 1) {
        /* if (/ * bne * / 1) goto L_333c; */
        /* ((daNpc_Kk1_c*)(_savegpr_29(this, float, cXyz, arg3, arg4, arg5, arg6, arg7)))->createTama(base); */
    }
    /* L_333c:; */
    return _restgpr_29((C_@4187 + 0));


/* 0000345C-00003578       .text startEvent_check__11daNpc_Kk1_cFv */
void daNpc_Kk1_c::startEvent_check() {
        /* if (chk_areaIN() == 0) goto L_3470; */
        PSVECSquareDistance((this + 504), (this->field_0x5b40 + 504));
        /* if (/ * ble * / 1) goto L_3440; */
        /* L_3440:; */
        /* if (this->field_0x8 < (this->field_0xa4 + this->field_0x51c)) goto L_3468; */
        /* if (this->field_0x6ba == 0) goto L_3470; */
        /* L_3468:; */
        return 1;
        /* L_3470:; */
        return 0;
}

/* 00003578-00003600       .text chkHitPlayer__11daNpc_Kk1_cFv */
void daNpc_Kk1_c::chkHitPlayer() {
        /* if (this->field_0x5a4 == 0) goto L_34ec; */
        /* if (((dCcD_GObjInf*)((this + 1396)))->GetCoHitObj() == 0) goto L_34ec; */
        /* if (this->field_0x44 != 0) goto L_34d0; */
        return 0;
        /* L_34d0:; */
        /* if (this->field_0xc == 0) goto L_34ec; */
        /* L_34ec:; */
        /* return ((169 - this->field_0x8) >> 5); */
}

/* 00003600-000036A8       .text set_pthPoint__11daNpc_Kk1_cFUc */
void daNpc_Kk1_c::set_pthPoint(unsigned char) {
    if (this->field_0x704 != 0) {
        /* field_0x709 = char; */
        getPoint((this + 1796));
        current = 0;
        /* field_0x1fc = 0; */
        /* field_0x200 = 0; */
        /* if (((dNpc_PathRun_c*)((this + 1796)))->nextIdx() == 0) goto L_3598; */
        getPoint((this + 1796));
        /* field_0x206 = cLib_targetAngleY((this + 504)); */
    }
    /* L_3598:; */
    return cLib_targetAngleY((this + 504));
}

/* 000036A8-00003940       .text event_move__11daNpc_Kk1_cFb */
void daNpc_Kk1_c::event_move(bool) {
        /* if (this->field_0x704 != 0) goto L_35ec; */
        return 1;
        /* L_35ec:; */
        /* if (this->field_0x5 != 0) goto L_3600; */
        return 1;
        /* L_3600:; */
        /* if (this->field_0x7b4 == 0) goto L_36a8; */
        /* if (((dNpc_PathRun_c*)((this + 1796)))->chkPointPass() == 0) goto L_36a8; */
        ((dNpc_PathRun_c*)((this + 1796)))->nextIdxAuto();
        /* if (bool == 0) goto L_36a8; */
        /* if (((dNpc_PathRun_c*)((this + 1796)))->pointArg(this->field_0x709) != 0) goto L_3674; */
        /* L_3674:; */
        /* if ((((((dNpc_PathRun_c*)((this + 1796)))->pointArg(this->field_0x709) + 1) & 255) & 255) == 2) goto L_3694; */
        /* if ((((((dNpc_PathRun_c*)((this + 1796)))->pointArg(this->field_0x709) + 1) & 255) & 255) == 3) goto L_3694; */
        /* field_0x7b4 = 0; */
        /* goto L_36a8; */
        /* L_3694:; */
        /* field_0x815 = ((((dNpc_PathRun_c*)((this + 1796)))->pointArg(this->field_0x709) + 1) & 255); */
        /* field_0x816 = 0; */
        /* field_0x7b4 = 1; */
        /* L_36a8:; */
        getPoint((this + 1796));
        cLib_addCalcAngleS((this + 518), cLib_targetAngleY((this + 504)), this->field_0x30, this->field_0x32, 128);
        /* if (this->field_0x815 != 2) goto L_374c; */
        /* if (this->field_0x7b4 != 0) goto L_3724; */
        /* goto L_3730; */
        /* L_3724:; */
        /* L_3730:; */
        /* goto L_3788; */
        /* L_374c:; */
        /* if (this->field_0x7b4 != 0) goto L_3764; */
        /* goto L_3770; */
        /* L_3764:; */
        /* L_3770:; */
        /* L_3788:; */
        cLib_chaseF((this + 596));
        /* if ((speedF * this->field_0x58) >= base) goto L_37a8; */
        /* goto L_37ac; */
        /* L_37a8:; */
        /* L_37ac:; */
        /* field_0x64 = (speedF * this->field_0x58); */
        /* if (/ * bne * / 1) goto L_3818; */
        /* if (/ * bne * / 1) goto L_3818; */
        speedF = 0;
        /* if (((dNpc_PathRun_c*)((this + 1796)))->pointArg(this->field_0x709) != 0) goto L_380c; */
        /* L_380c:; */
        /* field_0x816 = ((((dNpc_PathRun_c*)((this + 1796)))->pointArg(this->field_0x709) + 1) & 255); */
        return 1;
        /* L_3818:; */
        return 0;
}

/* 00003940-000039F0       .text kyoroPos__11daNpc_Kk1_cFi */
void daNpc_Kk1_c::kyoroPos(int) {
    /* PSMTXTrans(((char*)&now__14mDoMtx_stack_c + 0), int, arg2, arg3, arg4, arg5, arg6, arg7); */
    /* mDoMtx_YrotM(((char*)&now__14mDoMtx_stack_c + 0), this->field_0x206); */
    PSMTXMultVec(((char*)&now__14mDoMtx_stack_c + 0));
    base = 0;
    /* field_0x4 = 0; */
    /* field_0x8 = 0; */
    return PSMTXMultVec(((char*)&now__14mDoMtx_stack_c + 0));
}

/* 000039F0-00003A84       .text kyorokyoro__11daNpc_Kk1_cFv */
void daNpc_Kk1_c::kyorokyoro() {
    /* if (cLib_calcTimer<s>__FPs((this + 1938), arg1, arg2, arg3, arg4, arg5, arg6, arg7) == 0) { */
        /* kyoroPos(this); */
        /* m738 = 0; */
        /* field_0x73c = 0; */
        /* field_0x740 = 0; */
        /* return 1; */
    /* field_0x794 = cLib_getRndValue<i>__Fii(1, 10); */
    return 0;
}

/* 00003A84-00003C9C       .text chk_attn__11daNpc_Kk1_cFv */
void daNpc_Kk1_c::chk_attn() {
        /* _savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        __mi();
        PSVECSquareMag();
        /* if (/ * ble * / 1) goto L_3a5c; */
        /* goto L_3a60; */
        /* L_3a5c:; */
        /* L_3a60:; */
        /* cLib_targetAngleY((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 504), (this->field_0x5b40 + 504)); */
        /* if (m81E != 1) goto L_3b08; */
        /* if (/ * bge * / 1) goto L_3ae0; */
        /* abs(((this->field_0x206 - cLib_targetAngleY((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 504), (this->field_0x5b40 + 504))) & 65535)); */
        /* if (/ * bge * / 1) goto L_3ae0; */
        /* L_3ae0:; */
        /* if (1 == 0) goto L_3b00; */
        /* if (/ * bge * / 1) goto L_3b00; */
        /* L_3b00:; */
        /* goto L_3b78; */
        /* L_3b08:; */
        /* if (/ * bge * / 1) goto L_3b54; */
        abs(1);
        /* if (/ * bge * / 1) goto L_3b54; */
        /* L_3b54:; */
        /* if (1 == 0) goto L_3b74; */
        /* if (/ * bge * / 1) goto L_3b74; */
        /* L_3b74:; */
        /* L_3b78:; */
        return _restgpr_29(1);
}

/* 00003C9C-00003D9C       .text setBikon__11daNpc_Kk1_cF4cXyz */
void daNpc_Kk1_c::setBikon(cXyz) {
    delBikon();
    PSMTXTrans(((char*)&now__14mDoMtx_stack_c + 0));
    /* mDoMtx_YrotM(((char*)&now__14mDoMtx_stack_c + 0), this->field_0x206); */
    PSMTXMultVec(((char*)&now__14mDoMtx_stack_c + 0), cXyz);
    /* if (((dPa_control_c*)(this->field_0x5ab8))->set(0) != 0) { */
    return ((JAIZelBasic*)(base))->seStart(22717, (this + 504), 0, 0, 0);
}

/* 00003D9C-00003DA0       .text delBikon__11daNpc_Kk1_cFv */
void daNpc_Kk1_c::delBikon() {
}

/* 00003DA0-00003E18       .text setAse__11daNpc_Kk1_cFv */
void daNpc_Kk1_c::setAse() {
    delAse();
    /* field_0x810 = ((dPa_control_c*)(this->field_0x5ab8))->set(0); */
    /* return ((dPa_control_c*)(this->field_0x5ab8))->set(0); */
}

/* 00003E18-00003EA4       .text flwAse__11daNpc_Kk1_cFv */
void daNpc_Kk1_c::flwAse() {
    if (this->field_0x810 != 0) {
        /* PSMTXCopy((this->field_0x8c + ((this->field_0x6cc & 255) * 48)), ((char*)&now__14mDoMtx_stack_c + 0), arg2, arg3, arg4, arg5, arg6, arg7); */
        old = 0;
        /* field_0x1e8 = 0; */
        /* field_0x1ec = 0; */
    }
    /* return this->field_0x810; */
}

/* 00003EA4-00003ED0       .text delAse__11daNpc_Kk1_cFv */
void daNpc_Kk1_c::delAse() {
    /* field_0x60 = -1; */
    /* field_0x810 = 0; */
    return this;
}

/* 00003ED0-0000415C       .text wait_1__11daNpc_Kk1_cFv */
void daNpc_Kk1_c::wait_1() {
        /* if (this->field_0x7c1 == 0) goto L_3e3c; */
        /* if (chk_talk() == 0) goto L_3e34; */
        setStt(2);
        setAnm_NUM(0, 1);
        m81E = 1;
        /* field_0x7c2 = 0; */
        /* field_0x29a = 1; */
        /* L_3e34:; */
        return 1;
        /* L_3e3c:; */
        /* field_0x81b = 2; */
        m81E = 0;
        /* field_0x7c2 = 1; */
        /* if (this->field_0x7b4 == 0) goto L_3eec; */
        getPoint((this + 1796));
        cLib_addCalcAngleS((this + 518), cLib_targetAngleY((this + 504)), this->field_0x30, this->field_0x32, 128);
        /* if (abs(((this->field_0x206 - cLib_targetAngleY((this + 504))) & 65535)) >= 6144) goto L_3ee4; */
        setStt(3);
        /* field_0x7b5 = 0; */
        /* L_3ee4:; */
        return 1;
        /* L_3eec:; */
        /* if (this->field_0x81a != 11) goto L_3f30; */
        /* if (this->field_0x7b0 == 0) goto L_3f28; */
        ((daNpc_Kk1_c*)(1))->setAnm_NUM(0, 1);
        /* field_0x7a2 = cLib_getRndValue<i>__Fii(60, 30); */
        /* field_0x7b5 = 1; */
        /* L_3f28:; */
        return 1;
        /* L_3f30:; */
        PSMTXTrans(((char*)&now__14mDoMtx_stack_c + 0));
        /* mDoMtx_YrotM(((char*)&now__14mDoMtx_stack_c + 0), this->field_0x71a); */
        PSMTXMultVec(((char*)&now__14mDoMtx_stack_c + 0));
        cLib_addCalcAngleS((this + 518), cLib_targetAngleY((this + 504)), this->field_0x30, this->field_0x32, 128);
        /* if (this->field_0x7b5 != 0) goto L_3ff0; */
        /* if (((this->field_0x206 - cLib_targetAngleY((this + 504))) & 65535) != 0) goto L_3fe8; */
        setAnm_NUM(11, 1);
        /* L_3fe8:; */
        return 1;
        /* L_3ff0:; */
        /* if (cLib_calcTimer<s>__FPs((this + 1954)) != 0) goto L_4044; */
        /* if (this->field_0x704 == 0) goto L_403c; */
        /* if ((((dNpc_PathRun_c*)((this + 1796)))->maxPoint() & 16777215) <= 2) goto L_403c; */
        /* if (((daObj_Roten_c*)(((dNpc_PathRun_c*)((this + 1796)))->maxPoint()))->getCreateCount() <= 1) goto L_403c; */
        /* field_0x7b4 = 1; */
        return 1;
        /* L_403c:; */
        /* field_0x7b5 = 0; */
        /* L_4044:; */
        return 1;
}

/* 0000415C-0000449C       .text walk_1__11daNpc_Kk1_cFv */
void daNpc_Kk1_c::walk_1() {
        /* getPoint((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1796)); */
        /* if (this->field_0x5 == 0) goto L_40c8; */
        return 1;
        /* L_40c8:; */
        __mi();
        PSVECSquareMag();
        /* if (/ * ble * / 1) goto L_415c; */
        /* L_415c:; */
        /* if (this->field_0x7b4 == 0) goto L_41e4; */
        /* if (this->field_0x8 >= this->field_0x34) goto L_41e4; */
        /* ((dNpc_PathRun_c*)((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1796)))->nextIdxAuto(); */
        /* if (/ * bne * / 1) goto L_41c8; */
        /* if (this->field_0x70a == 0) goto L_41c8; */
        /* if (this->field_0x709 < ((daObj_Roten_c*)(((dNpc_PathRun_c*)((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1796)))->nextIdxAuto()))->getCreateCount()) goto L_41c8; */
        /* ((dNpc_PathRun_c*)((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1796)))->decIdx(); */
        /* L_41c8:; */
        /* if (1 == 0) goto L_41e4; */
        /* field_0x7b4 = 0; */
        /* L_41e4:; */
        /* cLib_addCalcAngleS((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 518), cLib_targetAngleY((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 504)), this->field_0x30, this->field_0x32, 128); */
        /* if (this->field_0x7b4 == 0) goto L_4248; */
        /* if (this->field_0x7c1 != 0) goto L_4248; */
        /* if (((daNpc_Kk1_c*)(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->chk_attn() == 0) goto L_424c; */
        /* L_4248:; */
        /* L_424c:; */
        /* cLib_chaseF((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 596), ((char*)&l_HIO + 0)); */
        /* if ((speedF * this->field_0x40) >= this->field_0x84) goto L_4288; */
        /* goto L_428c; */
        /* L_4288:; */
        /* L_428c:; */
        /* field_0x64 = (speedF * this->field_0x40); */
        /* if (/ * bne * / 1) goto L_4364; */
        /* if (/ * bne * / 1) goto L_4364; */
        /* if (this->field_0x7c1 == 0) goto L_4318; */
        /* if (((daNpc_Kk1_c*)(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->chk_talk() == 0) goto L_4310; */
        /* ((daNpc_Kk1_c*)(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->setStt(1); */
        /* ((daNpc_Kk1_c*)(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->setAnm_NUM(0, 1); */
        m81E = 1;
        /* field_0x7c2 = 0; */
        /* field_0x29a = 1; */
        /* L_4310:; */
        return 1;
        /* L_4318:; */
        /* if (this->field_0x7b4 != 0) goto L_4344; */
        /* ((daNpc_Kk1_c*)(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->setStt(1); */
        /* field_0x7b5 = 0; */
        /* field_0x7b4 = 0; */
        return 1;
        /* L_4344:; */
        /* ((daNpc_Kk1_c*)(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->setStt(7); */
        /* field_0x7b5 = 0; */
        /* field_0x7b4 = 0; */
        return 1;
        /* L_4364:; */
        /* field_0x81b = 2; */
        m81E = 0;
        /* field_0x7c2 = 1; */
        return _restgpr_28(1);
}

/* 0000449C-00004614       .text wait_2__11daNpc_Kk1_cFv */
void daNpc_Kk1_c::wait_2() {
        cLib_addCalcAngleS((this + 518), this->field_0x71a, 4, 2048, 128);
        /* if (this->field_0x7c1 == 0) goto L_4414; */
        /* if (chk_talk() == 0) goto L_440c; */
        setStt(2);
        m81E = 1;
        /* field_0x7c2 = 0; */
        /* field_0x7c3 = 0; */
        /* field_0x29a = 1; */
        /* L_440c:; */
        return 1;
        /* L_4414:; */
        m81E = 0;
        /* field_0x7c2 = 1; */
        /* if (this->field_0x81b != 3) goto L_4438; */
        return 1;
        /* L_4438:; */
        /* if (this->field_0x7b6 == 0) goto L_4484; */
        /* if (this->field_0x7b3 == 255) goto L_4484; */
        /* if (((dSv_info_c*)(((char*)&g_dComIfG_gameInfo + 0)))->isSwitch(this->field_0x7b3, (this->field_0x20a & 255)) == 0) goto L_4484; */
        /* field_0x81b = 3; */
        /* field_0x54c = 217; */
        return 1;
        /* L_4484:; */
        /* field_0x81b = 2; */
        return 1;
}

/* 00004614-0000466C       .text init_CMT_WAI__11daNpc_Kk1_cFv */
void daNpc_Kk1_c::init_CMT_WAI() {
    /* field_0x7a2 = cLib_getRndValue<i>__Fii(90, 180, arg2, arg3, arg4, arg5, arg6, arg7); */
    m81E = 5;
    /* field_0x7c2 = 1; */
    return setAnm_NUM(0, 1);
}

/* 0000466C-00004754       .text move_CMT_WAI__11daNpc_Kk1_cFv */
void daNpc_Kk1_c::move_CMT_WAI() {
        /* if (cLib_calcTimer<s>__FPs((this + 1954), arg1, arg2, arg3, arg4, arg5, arg6, arg7) != 0) goto L_45a0; */
        /* if ((this->field_0x81b & 255) == 1) goto L_457c; */
        /* if ((this->field_0x81b & 255) >= 3) goto L_457c; */
        /* if (chk_areaIN() == 0) goto L_457c; */
        /* field_0x81b = 7; */
        /* goto L_45d0; */
        /* L_457c:; */
        /* field_0x816 = 0; */
        setAnm_NUM(3, 1);
        /* field_0x7b4 = 1; */
        /* goto L_45d0; */
        /* L_45a0:; */
        /* if ((this->field_0x81b & 255) == 1) goto L_45d0; */
        /* if ((this->field_0x81b & 255) >= 3) goto L_45d0; */
        /* if (startEvent_check() == 0) goto L_45d0; */
        /* field_0x81b = 8; */
        /* L_45d0:; */
        return startEvent_check();
}

/* 00004754-000047D4       .text init_CMT_TRN__11daNpc_Kk1_cFv */
void daNpc_Kk1_c::init_CMT_TRN() {
    /* field_0x7a2 = cLib_getRndValue<i>__Fii(90, 180, arg2, arg3, arg4, arg5, arg6, arg7); */
    m81E = 0;
    /* field_0x7c2 = 1; */
    return setAnm_NUM(0, 1);
}

/* 000047D4-00004A14       .text move_CMT_TRN__11daNpc_Kk1_cFv */
void daNpc_Kk1_c::move_CMT_TRN() {
        /* if (cLib_calcTimer<s>__FPs((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1942)) == 0) goto L_46d4; */
        /* if ((this->field_0x81b & 255) == 1) goto L_488c; */
        /* if ((this->field_0x81b & 255) >= 3) goto L_488c; */
        /* if (((daNpc_Kk1_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->startEvent_check() == 0) goto L_488c; */
        /* field_0x81b = 8; */
        /* goto L_488c; */
        /* L_46d4:; */
        /* if (this->field_0x7a2 != 0) goto L_47a0; */
        /* getPoint((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1796)); */
        /* cLib_addCalcAngleS((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 518), cLib_targetAngleY((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 504)), this->field_0x30, this->field_0x32, 128); */
        /* if ((this->field_0x81b & 255) == 1) goto L_488c; */
        /* if ((this->field_0x81b & 255) >= 3) goto L_488c; */
        /* if (((daNpc_Kk1_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->startEvent_check() == 0) goto L_476c; */
        /* field_0x81b = 8; */
        /* goto L_488c; */
        /* L_476c:; */
        /* if (this->field_0x206 != (cLib_targetAngleY((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 504)) & 65535)) goto L_488c; */
        /* field_0x816 = 0; */
        /* ((daNpc_Kk1_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->setAnm_NUM(3, 1); */
        /* field_0x7b4 = 1; */
        /* goto L_488c; */
        /* L_47a0:; */
        /* cLib_addCalcAngleS((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 518), cLib_targetAngleY((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 504)), this->field_0x30, this->field_0x32, 128); */
        /* if (this->field_0x206 != cLib_targetAngleY((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 504))) goto L_485c; */
        /* if (this->field_0x206 == this->field_0x206) goto L_47e4; */
        m81E = 5;
        /* field_0x7c2 = 1; */
        /* L_47e4:; */
        /* if (cLib_calcTimer<s>__FPs((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1954)) != 0) goto L_485c; */
        /* if ((this->field_0x81b & 255) == 1) goto L_484c; */
        /* if ((this->field_0x81b & 255) >= 3) goto L_484c; */
        /* if (((daNpc_Kk1_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->chk_areaIN() == 0) goto L_484c; */
        /* field_0x81b = 7; */
        /* L_484c:; */
        m81E = 0;
        /* field_0x7c2 = 1; */
        /* L_485c:; */
        /* if ((this->field_0x81b & 255) == 1) goto L_488c; */
        /* if ((this->field_0x81b & 255) >= 3) goto L_488c; */
        /* if (((daNpc_Kk1_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->startEvent_check() == 0) goto L_488c; */
        /* field_0x81b = 8; */
        /* L_488c:; */
        /* return _restgpr_29(((daNpc_Kk1_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->startEvent_check()); */
}

/* 00004A14-00004A84       .text init_CMT_PCK__11daNpc_Kk1_cFv */
void daNpc_Kk1_c::init_CMT_PCK() {
    setAnm_NUM(1, 1);
    m81E = 0;
    /* field_0x7c2 = 1; */
    /* field_0x78a = 1; */
    return (this + (this->field_0x78a << 1));
}

/* 00004A84-00004C34       .text move_CMT_PCK__11daNpc_Kk1_cFv */
void daNpc_Kk1_c::move_CMT_PCK() {
        /* if (this->field_0x7a2 != 0) goto L_49f4; */
        getPoint((this + 1796));
        cLib_addCalcAngleS((this + 518), cLib_targetAngleY((this + 504)), this->field_0x30, this->field_0x32, 128);
        /* if ((this->field_0x81b & 255) == 1) goto L_4aa8; */
        /* if ((this->field_0x81b & 255) >= 3) goto L_4aa8; */
        /* if (startEvent_check() == 0) goto L_49c0; */
        /* field_0x81b = 8; */
        /* goto L_4aa8; */
        /* L_49c0:; */
        /* if (this->field_0x206 != (cLib_targetAngleY((this + 504)) & 65535)) goto L_4aa8; */
        /* field_0x816 = 0; */
        setAnm_NUM(3, 1);
        /* field_0x7b4 = 1; */
        /* goto L_4aa8; */
        /* L_49f4:; */
        /* if (this->field_0x7c1 != 0) goto L_4aa8; */
        /* if ((this->field_0x81b & 255) == 1) goto L_4a30; */
        /* if ((this->field_0x81b & 255) >= 3) goto L_4a30; */
        /* if (((daNpc_Kk1_c*)(setAnm_NUM(3, 1)))->chkHitPlayer() == 0) goto L_4a30; */
        /* field_0x81b = 1; */
        /* goto L_4aa8; */
        /* L_4a30:; */
        /* if (cLib_calcTimer<s>__FPs((this + 1954)) != 0) goto L_4a64; */
        setAnm_NUM(0, 1);
        /* field_0xfc = -1; */
        /* field_0x81b = 0; */
        /* goto L_4aa8; */
        /* L_4a64:; */
        ((JAIZelBasic*)(base))->seStart(20635, (this + 504), 0, 0, 0);
        /* field_0x81b = 2; */
        /* L_4aa8:; */
        return ((JAIZelBasic*)(base))->seStart(20635, (this + 504), 0, 0, 0);
}

/* 00004C34-00004DD0       .text cmmt_1__11daNpc_Kk1_cFv */
void daNpc_Kk1_c::cmmt_1() {
        /* if ((this->field_0x816 & 255) == 4) goto L_4b10; */
        /* if (/ * bge * / 1) goto L_4af8; */
        /* if ((this->field_0x816 & 255) == 1) goto L_4b04; */
        /* if (/ * bge * / 1) goto L_4b28; */
        /* goto L_4b28; */
        /* L_4af8:; */
        /* if ((this->field_0x816 & 255) >= 6) goto L_4b28; */
        /* goto L_4b1c; */
        /* L_4b04:; */
        move_CMT_WAI();
        return 1;
        /* L_4b10:; */
        ((daNpc_Kk1_c*)(1))->move_CMT_TRN();
        return 1;
        /* L_4b1c:; */
        ((daNpc_Kk1_c*)(1))->move_CMT_PCK();
        return 1;
        /* L_4b28:; */
        /* if ((this->field_0x81b & 255) == 1) goto L_4b64; */
        /* if ((this->field_0x81b & 255) >= 3) goto L_4b64; */
        /* if (this->field_0x81a == 1) goto L_4b64; */
        /* if (startEvent_check() == 0) goto L_4b64; */
        /* field_0x81b = 8; */
        /* L_4b64:; */
        m81E = 0;
        /* field_0x7c2 = 1; */
        /* if (event_move(1) == 0) goto L_4c1c; */
        /* if ((this->field_0x81b & 255) == 1) goto L_4ba0; */
        /* if ((this->field_0x81b & 255) < 3) goto L_4ba8; */
        /* L_4ba0:; */
        return 1;
        /* L_4ba8:; */
        /* if ((this->field_0x816 & 255) == 4) goto L_4be4; */
        /* if (/ * bge * / 1) goto L_4bcc; */
        /* if ((this->field_0x816 & 255) == 1) goto L_4bd8; */
        /* if (/ * bge * / 1) goto L_4bfc; */
        /* goto L_4bfc; */
        /* L_4bcc:; */
        /* if ((this->field_0x816 & 255) >= 6) goto L_4bfc; */
        /* goto L_4bf0; */
        /* L_4bd8:; */
        init_CMT_WAI();
        /* goto L_4c1c; */
        /* L_4be4:; */
        init_CMT_TRN();
        /* goto L_4c1c; */
        /* L_4bf0:; */
        init_CMT_PCK();
        /* goto L_4c1c; */
        /* L_4bfc:; */
        /* field_0x816 = 0; */
        setAnm_NUM(3, 1);
        /* field_0x7b4 = 1; */
        /* L_4c1c:; */
        /* if ((this->field_0x81b & 255) == 1) goto L_4c34; */
        /* if ((this->field_0x81b & 255) < 3) goto L_4c3c; */
        /* L_4c34:; */
        return 1;
        /* L_4c3c:; */
        /* field_0x81b = 0; */
        return 1;
}

/* 00004DD0-00004F74       .text wait_3__11daNpc_Kk1_cFv */
void daNpc_Kk1_c::wait_3() {
        __mi();
        PSVECSquareMag();
        /* if (/ * ble * / 1) goto L_4d1c; */
        /* L_4d1c:; */
        /* if (this->field_0x7c3 == 0) goto L_4d54; */
        cLib_addCalcAngleS((this + 518), this->field_0x71a, 4, 2048, 128);
        /* L_4d54:; */
        /* if (this->field_0x7c1 == 0) goto L_4d9c; */
        /* if (chk_talk() == 0) goto L_4d94; */
        setStt(2);
        m81E = 1;
        /* field_0x7c2 = 0; */
        /* field_0x7c3 = 0; */
        /* field_0x29a = 1; */
        /* L_4d94:; */
        return 1;
        /* L_4d9c:; */
        m81E = 0;
        /* field_0x7c2 = 1; */
        /* if (chk_attn() == 0) goto L_4dc4; */
        m81E = 1;
        /* L_4dc4:; */
        /* if ((this->field_0x81b & 255) == 1) goto L_4de4; */
        /* if ((this->field_0x81b & 255) >= 3) goto L_4de4; */
        /* field_0x81b = 2; */
        /* L_4de4:; */
        return 1;
}

/* 00004F74-00005170       .text wait_4__11daNpc_Kk1_cFv */
void daNpc_Kk1_c::wait_4() {
        __mi();
        PSVECSquareMag();
        /* if (/ * ble * / 1) goto L_4ec0; */
        /* L_4ec0:; */
        /* if (this->field_0x7c1 == 0) goto L_4f14; */
        /* if (chk_talk() == 0) goto L_4f0c; */
        setStt(2);
        setAnm_NUM(0, 1);
        m81E = 1;
        /* field_0x7c2 = 0; */
        /* field_0x29a = 1; */
        /* L_4f0c:; */
        return 1;
        /* L_4f14:; */
        /* field_0x81b = 2; */
        m81E = 1;
        /* field_0x7c2 = 0; */
        /* field_0x7b4 = 0; */
        /* if (this->field_0x7b4 == 0) goto L_4fe0; */
        getPoint((this + 1796));
        cLib_addCalcAngleS((this + 518), cLib_targetAngleY((this + 504)), this->field_0x30, this->field_0x32, 128);
        /* if (abs(((this->field_0x206 - cLib_targetAngleY((this + 504))) & 65535)) >= 6144) goto L_4fd0; */
        setStt(3);
        /* field_0x7b5 = 0; */
        /* L_4fd0:; */
        m81E = 0;
        /* field_0x7c2 = 1; */
        /* L_4fe0:; */
        return 1;
}

/* 00005170-000052B4       .text talk_1__11daNpc_Kk1_cFv */
void daNpc_Kk1_c::talk_1() {
        chk_parts_notMov();
        talk(1);
        /* if (this->field_0x6b0 != 0) goto L_503c; */
        return 1;
        /* L_503c:; */
        /* if (this->field_0xf8 == 6) goto L_50f8; */
        /* if (/ * bge * / 1) goto L_5058; */
        /* if (this->field_0xf8 == 2) goto L_50f8; */
        /* goto L_50f8; */
        /* L_5058:; */
        /* if (this->field_0xf8 == 19) goto L_5064; */
        /* goto L_50f8; */
        /* L_5064:; */
        /* field_0x7b2 = 255; */
        /* field_0x7c1 = 0; */
        /* setStt(this->field_0x81d); */
        /* field_0x79c = cLib_getRndValue<i>__Fii(15, 30); */
        /* if (this->field_0x6a4 == 7339) goto L_50d0; */
        /* if (/ * bge * / 1) goto L_50ac; */
        /* if (this->field_0x6a4 == 7337) goto L_50b8; */
        /* goto L_50f0; */
        /* L_50ac:; */
        /* if (this->field_0x6a4 >= 7341) goto L_50f0; */
        /* goto L_50dc; */
        /* L_50b8:; */
        ((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->onEventBit(3600);
        /* goto L_50f0; */
        /* L_50d0:; */
        /* field_0x81b = 6; */
        /* goto L_50f0; */
        /* L_50dc:; */
        m81E = 1;
        /* field_0x7c2 = 0; */
        /* field_0x7a0 = 0; */
        /* L_50f0:; */
        endEvent();
        /* L_50f8:; */
        /* if (cLib_calcTimer<s>__FPs((this + 1952)) == 0) goto L_5124; */
        /* if (this->field_0x7a0 != 1) goto L_5124; */
        m81E = 1;
        /* field_0x7c2 = 0; */
        /* L_5124:; */
        return (chk_parts_notMov() & 16777215);
}

/* 000052B4-000053F4       .text wait_action1__11daNpc_Kk1_cFPv */
void daNpc_Kk1_c::wait_action1(void*) {
        /* if ((this->field_0x821 & 255) >= 4) goto L_5174; */
        /* if ((this->field_0x821 & 255) == 0) goto L_5180; */
        /* if (/ * bge * / 1) goto L_51cc; */
        /* goto L_5268; */
        /* L_5174:; */
        /* if ((this->field_0x821 & 255) == 9) goto L_5268; */
        /* goto L_5268; */
        /* L_5180:; */
        /* if (dKy_daynight_check() != 0) goto L_51b0; */
        /* field_0x7b5 = 0; */
        setStt(1);
        /* field_0x821 = (this->field_0x821 + 1); */
        /* goto L_5268; */
        /* L_51b0:; */
        setStt(4);
        /* field_0x821 = (this->field_0x821 + 1); */
        /* goto L_5268; */
        /* L_51cc:; */
        /* field_0x7c0 = ((daNpc_Kk1_c*)(this->field_0x821))->chkAttention(); */
        /* if ((this->field_0x81c & 255) > 7) goto L_5268; */
        /* field_0x778 = wait_1(); */
        /* goto L_5268; */
        /* field_0x778 = talk_1(); */
        /* goto L_5268; */
        /* field_0x778 = walk_1(); */
        /* goto L_5268; */
        /* field_0x778 = wait_2(); */
        /* goto L_5268; */
        /* field_0x778 = cmmt_1(); */
        /* goto L_5268; */
        /* field_0x778 = wait_3(); */
        /* goto L_5268; */
        /* field_0x778 = wait_4(); */
        /* L_5268:; */
        return 1;
}

/* 000053F4-00005534       .text demo__11daNpc_Kk1_cFv */
void daNpc_Kk1_c::demo() {
        /* if (demoActorID != 0) goto L_52b8; */
        /* if (m7C4 == 0) goto L_53a8; */
        m7C4 = 0;
        /* goto L_53a8; */
        /* L_52b8:; */
        /* if (m7C4 != 0) goto L_52e4; */
        m7C4 = 1;
        /* field_0x7bd = 0; */
        /* field_0x292 = 0; */
        /* field_0x290 = 0; */
        /* field_0x296 = 0; */
        /* field_0x294 = 0; */
        /* L_52e4:; */
        ((dDemo_object_c*)((this->field_0x5abc + 32)))->getActor(demoActorID);
        /* if (this->field_0x6e0 == 0) goto L_532c; */
        /* field_0x6ec = (this->field_0x6ec + 1); */
        /* if (this->field_0x6ec < (this->field_0x6 & 16777215)) goto L_532c; */
        /* field_0x6ec = (this->field_0x6 & 16777215); */
        /* L_532c:; */
        ((dDemo_actor_c*)(((dDemo_object_c*)((this->field_0x5abc + 32)))->getActor(demoActorID)))->getP_BtpData((this + 1742), (this->field_0x6 & 16777215));
        /* if (/ * beq * / 1) goto L_5384; */
        /* ((mDoExt_btpAnm*)((this + 1752)))->init(this->field_0x4); */
        /* field_0x819 = 1; */
        /* field_0x6ec = 0; */
        /* L_5384:; */
        dDemo_setDemoData(this, 106, this->field_0x330, (this + 1742), 0, 0, 0, 0);
        /* L_53a8:; */
        return m7C4;
}

/* 00005534-000055C4       .text shadowDraw__11daNpc_Kk1_cFv */
void daNpc_Kk1_c::shadowDraw() {
    /* field_0x6d4 = dComIfGd_setShadow(this->field_0x6d4, 1, this->field_0x50); */
    /* return dComIfGd_setShadow(this->field_0x6d4, 1, this->field_0x50); */
}

/* 000055C4-00005798       .text _draw__11daNpc_Kk1_cFv */
BOOL daNpc_Kk1_c::_draw() {
    /* _savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
    if (this->field_0x7bb == 0) {
        /* if (this->field_0x7be != 0) goto L_5494; */
    }
    return 1;
    /* L_5494:; */
    /* ((dScnKy_env_light_c*)(((char*)&g_env_light + 0)))->settingTevStruct(0, (_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 504), (_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 268)); */
    /* ((dScnKy_env_light_c*)(((char*)&g_env_light + 0)))->setLightTevColorType(this->field_0x50, (_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 268)); */
    /* ((mDoExt_btpAnm*)((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1752)))->entry(this->field_0x4, this->field_0x6ec); */
    /* ((mDoExt_McaMorf*)(this->field_0x330))->entryDL(); */
    /* ((J3DMaterialTable*)((this->field_0x4 + 88)))->removeTexNoAnimator(this->field_0x6e0); */
    if (this->field_0x7bc == 0) {
        /* ((mDoExt_bpkAnm*)((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1992)))->entry(this->field_0x4, C_@4422); */
        /* ((mDoExt_btkAnm*)((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 2012)))->entry(this->field_0x4, C_@4422); */
        /* mDoExt_modelEntryDL(this->field_0x808); */
        /* ((J3DMaterialTable*)((this->field_0x4 + 88)))->removeTexMtxAnimator(this->field_0x7e4); */
        /* ((J3DMaterialTable*)((this->field_0x4 + 88)))->removeMatColorAnimator(this->field_0x7d0); */
    }
    /* ((daNpc_Kk1_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->shadowDraw(); */
    /* dSnap_RegistFig(88, _savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7), C_@4446); */
    if (this->field_0x24 != 0) {
        /* getPoint((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1796)); */
    }
    return _restgpr_29(1);
}

/* 00005798-000059EC       .text _execute__11daNpc_Kk1_cFv */
BOOL daNpc_Kk1_c::_execute() {
        /* _savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* if (this->field_0x7bf != 0) goto L_5688; */
        /* field_0x70c = 0; */
        /* field_0x710 = 0; */
        /* field_0x714 = 0; */
        /* field_0x7bf = 1; */
        /* L_5688:; */
        /* ((dNpc_JntCtrl_c*)((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 656)))->setParam(this->field_0x14, this->field_0x16, this->field_0x18, this->field_0x1a, this->field_0xc, this->field_0xe, this->field_0x10); */
        /* if (this->field_0x7bb == 0) goto L_56e4; */
        /* if (demoActorID != 0) goto L_56e4; */
        return 1;
        /* L_56e4:; */
        /* ((daNpc_Kk1_c*)(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->partner_search(); */
        /* ((daNpc_Kk1_c*)(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->checkOrder(); */
        /* if (((daNpc_Kk1_c*)(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->demo() != 0) goto L_579c; */
        /* if (this->field_0x529a == 0) goto L_573c; */
        /* if (((daNpc_Kk1_c*)(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->checkCommandTalk() != 0) goto L_573c; */
        /* L_573c:; */
        /* if (((daNpc_Kk1_c*)(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->isEventEntry() < 0) goto L_5754; */
        /* ((daNpc_Kk1_c*)(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->event_proc(((daNpc_Kk1_c*)(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->isEventEntry()); */
        /* goto L_5768; */
        /* L_5754:; */
        /* __ptmf_scall(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7), 0); */
        /* L_5768:; */
        /* field_0x6ba = 0; */
        /* ((daNpc_Kk1_c*)(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->lookBack(); */
        /* fopAcM_posMoveF(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7), (_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1336)); */
        /* ((dBgS_Acch*)((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 820)))->CrrPos(((char*)&g_dComIfG_gameInfo + 4768)); */
        /* ((daNpc_Kk1_c*)(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->play_animation(); */
        /* goto L_57a4; */
        /* L_579c:; */
        /* field_0x7bb = 0; */
        /* L_57a4:; */
        /* ((daNpc_Kk1_c*)(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->eventOrder(); */
        /* if (this->field_0x7bd != 0) goto L_57e8; */
        /* L_57e8:; */
        /* field_0x1b5 = ((dBgS*)(((char*)&g_dComIfG_gameInfo + 4768)))->GetRoomId((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1052)); */
        /* field_0x1b6 = ((dBgS*)(((char*)&g_dComIfG_gameInfo + 4768)))->GetPolyColor((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1052)); */
        /* ((daNpc_Kk1_c*)(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->setMtx(0); */
        /* if (m7C4 != 0) goto L_585c; */
        /* if (this->field_0x7b9 != 0) goto L_585c; */
        /* if (this->field_0x81a != 1) goto L_5850; */
        /* goto L_5854; */
        /* L_5850:; */
        /* L_5854:; */
        /* ((fopNpc_npc_c*)(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->setCollision(); */
        /* L_585c:; */
        return _restgpr_28(1);
}

/* 000059EC-00005A58       .text _delete__11daNpc_Kk1_cFv */
BOOL daNpc_Kk1_c::_delete() {
    cDyl_Unlink(470);
    dComIfG_resDelete((this + 1732), (this + 1742));
    delBikon();
    delAse();
    if (heap != 0) {
        /* if (this->field_0x330 != 0) goto L_58cc; */
        /* ((mDoExt_McaMorf*)(this->field_0x330))->stopZelAnime(); */
    }
    /* L_58cc:; */
    return 1;
}

/* 00005A58-00005B98       .text _create__11daNpc_Kk1_cFv */
cPhs_State daNpc_Kk1_c::_create() {
        /* _savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* if (/ * bne * / 1) goto L_5928; */
        /* if (_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) == 0) goto L_591c; */
        __ct();
        /* L_591c:; */
        /* L_5928:; */
        /* if (((daNpc_Kk1_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->decideType((this->field_0xb0 & 16777215)) != 0) goto L_5948; */
        return 5;
        /* L_5948:; */
        /* field_0x7ba = ((4 - dComIfG_resLoad((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1732), (_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1742))) >> 5); */
        /* if (this->field_0x7ba != 0) goto L_5978; */
        /* goto L_5a0c; */
        /* L_5978:; */
        /* if (cDyl_LinkASync(470) == 4) goto L_598c; */
        /* goto L_5a0c; */
        /* L_598c:; */
        /* if (fopAcM_entrySolidHeap(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7), ((char*)&CheckCreateHeap__FP10fopAc_ac_c + 0), ((char*)&a_siz_tbl$6524 + 0)) != 0) goto L_59c4; */
        return 5;
        /* L_59c4:; */
        cullMtx = (this->field_0x50 + 36);
        /* fopAcM_setCullSizeBox(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* if (((daNpc_Kk1_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->createInit() == 0) goto L_5a0c; */
        /* L_5a0c:; */
        /* return _restgpr_29(dComIfG_resLoad((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1732), (_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1742))); */
}

/* 00006118-0000638C       .text bodyCreateHeap__11daNpc_Kk1_cFv */
void daNpc_Kk1_c::bodyCreateHeap() {
    /* ((dRes_control_c*)((this + 1742)))->getIDRes(13, ((char*)&g_dComIfG_gameInfo + -16460), 64, arg4, arg5); */
    if (/* bne */ 1) {
        /* ((JUTAssertion*)(((JUTAssertion*)(((dRes_control_c*)((this + 1742)))->getIDRes(13, ((char*)&g_dComIfG_gameInfo + -16460), 64, arg4, arg5)))->getSDevice()))->showAssert(((char*)&@stringBase0 + 60), 3517, ((char*)&@stringBase0 + 255)); */
        OSPanic(((char*)&@stringBase0 + 60), 3517, ((char*)&@stringBase0 + 87));
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
    /* field_0x6cc = ((JUTNameTab*)(this->field_0x54))->getIndex(((char*)&@stringBase0 + 270)); */
    if (this->field_0x6cc != 0) {
        /* ((JUTAssertion*)(((JUTAssertion*)(((JUTNameTab*)(this->field_0x54))->getIndex(((char*)&@stringBase0 + 270))))->getSDevice()))->showAssert(((char*)&@stringBase0 + 60), 3537, ((char*)&@stringBase0 + 275)); */
        OSPanic(((char*)&@stringBase0 + 60), 3537, ((char*)&@stringBase0 + 87));
    }
    /* field_0x6cd = ((JUTNameTab*)(this->field_0x54))->getIndex(((char*)&@stringBase0 + 294)); */
    if (this->field_0x6cd != 0) {
        /* ((JUTAssertion*)(((JUTAssertion*)(((JUTNameTab*)(this->field_0x54))->getIndex(((char*)&@stringBase0 + 294))))->getSDevice()))->showAssert(((char*)&@stringBase0 + 60), 3539, ((char*)&@stringBase0 + 303)); */
        OSPanic(((char*)&@stringBase0 + 60), 3539, ((char*)&@stringBase0 + 87));
    }
    /* field_0x8 = 0; */
    /* field_0x8 = 0; */
    /* field_0x14 = this; */
    return 1;
}

/* 0000638C-000065E0       .text effcCreateHeap__11daNpc_Kk1_cFv */
void daNpc_Kk1_c::effcCreateHeap() {
        /* field_0x808 = mDoExt_J3DModel(((dRes_control_c*)((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1742)))->getIDRes(14), 0); */
        /* if (this->field_0x808 == 0) goto L_6450; */
        /* ((dRes_control_c*)((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1742)))->getIDRes(15); */
        /* if (/ * bne * / 1) goto L_62c8; */
        /* ((JUTAssertion*)(((JUTAssertion*)(((dRes_control_c*)((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1742)))->getIDRes(15)))->getSDevice()))->showAssert(((char*)&@stringBase0 + 60), 3560, ((char*)&@stringBase0 + 324)); */
        OSPanic(((char*)&@stringBase0 + 60), 3560, ((char*)&@stringBase0 + 87));
        /* L_62c8:; */
        /* if (((mDoExt_bpkAnm*)((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1992)))->init(this->field_0x4) != 0) goto L_6310; */
        return 0;
        /* L_6310:; */
        /* ((dRes_control_c*)((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1742)))->getIDRes(16); */
        /* if (/ * bne * / 1) goto L_6364; */
        /* ((JUTAssertion*)(((JUTAssertion*)(((dRes_control_c*)((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1742)))->getIDRes(16)))->getSDevice()))->showAssert(((char*)&@stringBase0 + 60), 3568, ((char*)&@stringBase0 + 335)); */
        OSPanic(((char*)&@stringBase0 + 60), 3568, ((char*)&@stringBase0 + 87));
        /* L_6364:; */
        /* if (((mDoExt_btkAnm*)((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 2012)))->init(this->field_0x4) != 0) goto L_63ac; */
        return 0;
        /* L_63ac:; */
        /* ((dRes_control_c*)((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1742)))->getIDRes(0); */
        /* if (/ * bne * / 1) goto L_6400; */
        /* ((JUTAssertion*)(((JUTAssertion*)(((dRes_control_c*)((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1742)))->getIDRes(0)))->getSDevice()))->showAssert(((char*)&@stringBase0 + 60), 3576, ((char*)&@stringBase0 + 346)); */
        OSPanic(((char*)&@stringBase0 + 60), 3576, ((char*)&@stringBase0 + 87));
        /* L_6400:; */
        /* if (((mDoExt_bckAnm*)((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 2032)))->init(this->field_0x4) != 0) goto L_6440; */
        return 0;
        /* L_6440:; */
        /* field_0x800 = 0; */
        /* field_0x802 = 0; */
        /* field_0x804 = 0; */
        /* L_6450:; */
        return _restgpr_29(1);
}

/* 000065E0-00006684       .text CreateHeap__11daNpc_Kk1_cFv */
void daNpc_Kk1_c::CreateHeap() {
    if (bodyCreateHeap() == 0) {
        return 0;
    }
    if (effcCreateHeap() == 0) {
        /* field_0x330 = 0; */
        return 0;
    ((dBgS_AcchCir*)((this + 1272)))->SetWall(C_@6388);
    ((dBgS_Acch*)((this + 820)))->Set((this + 504), (this + 484), this, 1, (this + 1272), (this + 544), 0);
    return 1;

/* 00006684-000066A4       .text daNpc_Kk1_Create__FP10fopAc_ac_c */
static cPhs_State daNpc_Kk1_Create(fopAc_ac_c* i_this) {
    return ((daNpc_Kk1_c*)i_this)->_create();

/* 000066A4-000066C4       .text daNpc_Kk1_Delete__FP11daNpc_Kk1_c */
static BOOL daNpc_Kk1_Delete(daNpc_Kk1_c* i_this) {
    return ((daNpc_Kk1_c*)i_this)->_delete();

/* 000066C4-000066E4       .text daNpc_Kk1_Execute__FP11daNpc_Kk1_c */
static BOOL daNpc_Kk1_Execute(daNpc_Kk1_c* i_this) {
    return ((daNpc_Kk1_c*)i_this)->_execute();

/* 000066E4-00006704       .text daNpc_Kk1_Draw__FP11daNpc_Kk1_c */
static BOOL daNpc_Kk1_Draw(daNpc_Kk1_c* i_this) {
    return ((daNpc_Kk1_c*)i_this)->_draw();

/* 00006704-0000670C       .text daNpc_Kk1_IsDelete__FP11daNpc_Kk1_c */
static BOOL daNpc_Kk1_IsDelete(daNpc_Kk1_c*) {
    return 1;

static actor_method_class l_daNpc_Kk1_Method = {
    (process_method_func)daNpc_Kk1_Create,
    (process_method_func)daNpc_Kk1_Delete,
    (process_method_func)daNpc_Kk1_Execute,
    (process_method_func)daNpc_Kk1_IsDelete,
    (process_method_func)daNpc_Kk1_Draw,
};

actor_process_profile_definition g_profile_NPC_KK1 = {
    /* Layer ID     */ fpcLy_CURRENT_e,
    /* List ID      */ 0x0007,
    /* List Prio    */ fpcPi_CURRENT_e,
    /* Proc Name    */ fpcNm_NPC_KK1_e,
    /* Proc SubMtd  */ &g_fpcLf_Method.base,
    /* Size         */ sizeof(daNpc_Kk1_c),
    /* Size Other   */ 0,
    /* Parameters   */ 0,
    /* Leaf SubMtd  */ &g_fopAc_Method.base,
    /* Draw Prio    */ fpcDwPi_NPC_KK1_e,
    /* Actor SubMtd */ &l_daNpc_Kk1_Method,
    /* Status       */ 0x08 | fopAcStts_SHOWMAP_e | fopAcStts_NOCULLEXEC_e | fopAcStts_CULL_e | fopAcStts_UNK40000_e,
    /* Group        */ fopAc_ACTOR_e,
    /* Cull Type    */ fopAc_CULLBOX_CUSTOM_e,
};

/* 由 fix_decomp_braces.py 补齐：反编译产物末尾缺 8 个 } */
}}}}}}}}
