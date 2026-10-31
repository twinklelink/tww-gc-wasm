/**
 * d_a_npc_ko1.cpp
 * NPC - Joel & Zill (Outset Island)
 */

#include "d/dolzel_rel.h" // IWYU pragma: keep
#include "d/actor/d_a_npc_ko1.h"

/* 000000EC-00000108       .text __ct__20daNpc_Ko1_childHIO_cFv */
daNpc_Ko1_childHIO_c::daNpc_Ko1_childHIO_c() {
}

/* 00000150-0000020C       .text __ct__15daNpc_Ko1_HIO_cFv */
daNpc_Ko1_HIO_c::daNpc_Ko1_HIO_c() {
    /* _savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
    /* field_0x0 = 0; */
    /* field_0x0 = 0; */
    /* __construct_array((_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 12), ((char*)&__ct__20daNpc_Ko1_childHIO_cFv + 0), ((char*)&__dt__20daNpc_Ko1_childHIO_cFv + 0), 96, 2); */
    /* L_c8:; */
    /* memcpy((_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + (0 + 16)), (((char*)&a_prm_tbl$4154 + 0) + 0), 88); */
    /* if ((0 + 1) >= 2) goto L_c8; */
    /* field_0x4 = -1; */
    /* field_0x8 = -1; */
    /* return _restgpr_27(_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
}

/* 00000268-000002E0       .text searchActor_Ko_Hna__FPvPv */
static fopAc_ac_c* l_check_inf[20];
static int l_check_wrk;

/* 00000268-000002E0       .text searchActor_Ko_Hna__FPvPv */
static void* searchActor_Ko_Hna(void* i_param_1, void*) {
    if (l_check_wrk < 0x14 && fopAcM_IsActor(i_param_1) &&
        fopAcM_GetName(i_param_1) == fpcNm_NPC_KO1_e) {
        l_check_inf[l_check_wrk] = (fopAc_ac_c*)i_param_1;
        l_check_wrk += 1;
    }
    return NULL;
}

/* 000002E0-00000358       .text searchActor_Ko_Bou__FPvPv */
static void* searchActor_Ko_Bou(void* i_param_1, void*) {
    if (l_check_wrk < 0x14 && fopAcM_IsActor(i_param_1) &&
        fopAcM_GetName(i_param_1) == fpcNm_NPC_KO2_e) {
        l_check_inf[l_check_wrk] = (fopAc_ac_c*)i_param_1;
        l_check_wrk += 1;
    }
    return NULL;
}

/* 00000358-000003D0       .text searchActor_Ob__FPvPv */
static void* searchActor_Ob(void* i_param_1, void*) {
    if (l_check_wrk < 0x14 && fopAcM_IsActor(i_param_1) &&
        fopAcM_GetName(i_param_1) == fpcNm_NPC_OB1_e) {
        l_check_inf[l_check_wrk] = (fopAc_ac_c*)i_param_1;
        l_check_wrk += 1;
    }
    return NULL;
}

/* 000003D0-0000041C       .text nodeCallBack_Hed__FP7J3DNodei */
static BOOL nodeCallBack_Hed(J3DNode* i_param_1, int i_param_2) {
    if (i_param_2 == 0) {
        if (j3dSys.getModel()->getUserArea() != NULL) {
            reinterpret_cast<daNpc_Ko1_c*>(j3dSys.getModel()->getUserArea())
                ->nodeHedControl(i_param_1, j3dSys.getModel());
        }
    }
    return TRUE;
}

/* 0000041C-00000488       .text nodeHedControl__11daNpc_Ko1_cFP7J3DNodeP8J3DModel */
void daNpc_Ko1_c::nodeHedControl(J3DNode* i_node, J3DModel* i_model) {
    s32 jointIdx = ((J3DJoint*)i_node)->getJntNo();
    PSMTXCopy(i_model->getAnmMtx(jointIdx), mDoMtx_stack_c::get());
    if (jointIdx == mHedJntNo) {
        PSMTXCopy(mDoMtx_stack_c::get(), mMtx);
    }
}

/* 00000488-000004D4       .text nodeCallBack_Bln__FP7J3DNodei */
static BOOL nodeCallBack_Bln(J3DNode* i_param_1, int i_param_2) {
    if (i_param_2 == 0) {
        if (j3dSys.getModel()->getUserArea() != NULL) {
            reinterpret_cast<daNpc_Ko1_c*>(j3dSys.getModel()->getUserArea())
                ->nodeBlnControl(i_param_1, j3dSys.getModel());
        }
    }
    return TRUE;
}

/* 000004D4-00000554       .text nodeBlnControl__11daNpc_Ko1_cFP7J3DNodeP8J3DModel */
void daNpc_Ko1_c::nodeBlnControl(J3DNode* i_node, J3DModel* i_model) {
    s32 jointIdx = ((J3DJoint*)i_node)->getJntNo();
    PSMTXCopy(i_model->getAnmMtx(jointIdx), mDoMtx_stack_c::get());
    if (jointIdx == mBlnJntNo) {
        PSMTXCopy(mMtx, J3DSys::mCurrentMtx);
        PSMTXCopy(mMtx, i_model->getAnmMtx(jointIdx));
    }
}

/* 00000554-000005A0       .text nodeCallBack_Ko1__FP7J3DNodei */
static BOOL nodeCallBack_Ko1(J3DNode* i_param_1, int i_param_2) {
    if (i_param_2 == 0) {
        if (j3dSys.getModel()->getUserArea() != NULL) {
            reinterpret_cast<daNpc_Ko1_c*>(j3dSys.getModel()->getUserArea())
                ->nodeKo1Control(i_param_1, j3dSys.getModel());
        }
    }
    return TRUE;
}

/* 000005A0-000006E8       .text nodeKo1Control__11daNpc_Ko1_cFP7J3DNodeP8J3DModel */
void daNpc_Ko1_c::nodeKo1Control(J3DNode* i_node, J3DModel* i_model) {
    static cXyz a_eye_pos_off(18.0f, 20.0f, 0.0f);
    s32 jointIdx = ((J3DJoint*)i_node)->getJntNo();
    PSMTXCopy(i_model->getAnmMtx(jointIdx), mDoMtx_stack_c::get());
    if (jointIdx == mJointNo1) {
        mDoMtx_stack_c::XrotM(m292);
        mDoMtx_stack_c::ZrotM(-m290);
        mDoMtx_stack_c::multVec(&a_eye_pos_off, &mEyePos);
    }
    if (jointIdx == mJointNo2) {
        mDoMtx_stack_c::XrotM(m296);
        mDoMtx_stack_c::YrotM(m294);
    }
    PSMTXCopy(mDoMtx_stack_c::get(), J3DSys::mCurrentMtx);
    PSMTXCopy(mDoMtx_stack_c::get(), i_model->getAnmMtx(jointIdx));
}

/* 00000724-000007CC       .text init_HNA_0__11daNpc_Ko1_cFv */
void daNpc_Ko1_c::init_HNA_0() {
    if (((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->isEventBit(10880) != 0) {
        /* if (((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->isEventBit(3616) == 0) goto L_6c4; */
        m704 = 0;
        set_action();
        return 1;
    }
    /* L_6c4:; */
    return 0;
}

/* 000007CC-00000860       .text init_HNA_1__11daNpc_Ko1_cFv */
void daNpc_Ko1_c::init_HNA_1() {
    if (((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->isEventBit(3616) != 0) {
        m704 = 0;
        set_action();
        return 1;
    }
    return 0;
}

/* 00000860-000008E8       .text init_HNA_2__11daNpc_Ko1_cFv */
void daNpc_Ko1_c::init_HNA_2() {
    if (((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->isEventBit(10880) == 0) {
        m704 = 0;
        set_action();
        return 1;
    }
    return 0;
}

/* 000008E8-00000994       .text init_HNA_3__11daNpc_Ko1_cFv */
void daNpc_Ko1_c::init_HNA_3() {
    if (((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->isEventBit(1312) != 0) {
        /* if (dKy_daynight_check() == 0) goto L_890; */
        m704 = 0;
        set_action();
        return 1;
    }
    /* L_890:; */
    return 0;
}

/* 00000994-00000A20       .text init_HNA_4__11daNpc_Ko1_cFv */
void daNpc_Ko1_c::init_HNA_4() {
    if (((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->isEventBit(1312) != 0) {
        /* if (dKy_daynight_check() == 1) goto L_91c; */
        set_action();
        return 1;
    }
    /* L_91c:; */
    return 0;
}

/* 00000A20-00000AAC       .text init_BOU_0__11daNpc_Ko1_cFv */
void daNpc_Ko1_c::init_BOU_0() {
    if (((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->isEventBit(3616) == 0) {
        set_action();
        return 1;
    }
    return 0;
}

/* 00000AAC-00000B38       .text init_BOU_1__11daNpc_Ko1_cFv */
void daNpc_Ko1_c::init_BOU_1() {
    if (((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->isEventBit(3616) != 0) {
        set_action();
        return 1;
    }
    return 0;
}

/* 00000B38-00000BE4       .text init_BOU_2__11daNpc_Ko1_cFv */
void daNpc_Ko1_c::init_BOU_2() {
    if (((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->isEventBit(1312) != 0) {
        /* if (dKy_daynight_check() == 0) goto L_ae0; */
        set_action();
        /* field_0x708 = 0; */
        return 1;
    }
    /* L_ae0:; */
    return 0;
}

/* 00000BE4-00000C78       .text init_BOU_3__11daNpc_Ko1_cFv */
void daNpc_Ko1_c::init_BOU_3() {
    if (((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->isEventBit(1312) != 0) {
        /* if (dKy_daynight_check() == 1) goto L_b74; */
        set_action();
        /* field_0x708 = 0; */
        return 1;
    }
    /* L_b74:; */
    return 0;
}

/* 00000C78-00000F14       .text createInit__11daNpc_Ko1_cFv */
void daNpc_Ko1_c::createInit() {
        /* field_0x280 = 10; */
        /* if ((this->field_0x8a6 & 255) == 1) goto L_bdc; */
        /* if (/ * bge * / 1) goto L_bec; */
        /* if ((this->field_0x8a6 & 255) >= 0) goto L_bcc; */
        /* goto L_bec; */
        /* L_bcc:; */
        /* field_0x26d = 169; */
        /* field_0x26f = 169; */
        /* goto L_bec; */
        /* L_bdc:; */
        /* field_0x26d = 167; */
        /* field_0x26f = 169; */
        /* L_bec:; */
        gravity = 0;
        /* field_0x7c4 = 0; */
        /* field_0x7c8 = 0; */
        /* field_0x7cc = 0; */
        /* field_0x80c = 0; */
        /* field_0x810 = 0; */
        /* field_0x814 = 0; */
        m7E8 = 0;
        /* field_0x7ec = 0; */
        /* field_0x7f0 = 0; */
        /* if (arg1 == 255) goto L_ca0; */
        /* ((dNpc_PathRun_c*)((this + 1852)))->setInf(arg1, this->field_0x20a, 1, arg4, arg5, arg6, arg7); */
        /* if (this->field_0x73c != 0) goto L_c90; */
        return 0;
        /* L_c90:; */
        /* L_ca0:; */
        ((dNpc_EventCut_c*)((this + 1864)))->setActorInfo2(((char*)&a_staff_tbl$4419 + 0), this);
        /* field_0x89f = 14; */
        /* if ((this->field_0x8a7 & 255) > 8) goto L_d6c; */
        init_HNA_0();
        /* goto L_d70; */
        init_HNA_1();
        /* goto L_d70; */
        init_HNA_2();
        /* goto L_d70; */
        init_HNA_3();
        /* goto L_d70; */
        init_HNA_4();
        /* goto L_d70; */
        init_BOU_0();
        /* goto L_d70; */
        init_BOU_1();
        /* goto L_d70; */
        init_BOU_2();
        /* goto L_d70; */
        init_BOU_3();
        /* goto L_d70; */
        /* L_d6c:; */
        /* L_d70:; */
        /* if (0 == 0) goto L_dac; */
        /* goto L_db4; */
        /* L_dac:; */
        return 0;
        /* L_db4:; */
        ((dCcD_Stts*)((this + 1336)))->Init(240, 255, this);
        /* field_0x5b8 = (this + 1336); */
        ((dCcD_Cyl*)((this + 1396)))->Set(((char*)&dNpc_cyl_src + 0));
        /* ((mDoExt_McaMorf*)(this->field_0x330))->setMorf(C_@4296); */
        /* ((mDoExt_McaMorf*)(this->field_0x710))->setMorf(C_@4296); */
        setMtx(1);
        return 1;
}

/* 00000F14-000011C4       .text setMtx__11daNpc_Ko1_cFb */
void daNpc_Ko1_c::setMtx(bool) {
        /* _savegpr_28(this, bool, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* if (this->field_0x877 != 0) goto L_fb8; */
        /* ((daNpc_Ko1_c*)(_savegpr_28(this, bool, arg2, arg3, arg4, arg5, arg6, arg7)))->plyTexPttrnAnm(); */
        /* if (/ * beq * / 1) goto L_e84; */
        /* ((dBgS*)(((char*)&g_dComIfG_gameInfo + 4768)))->GetMtrlSndId((_savegpr_28(this, bool, arg2, arg3, arg4, arg5, arg6, arg7) + 1052)); */
        /* L_e84:; */
        /* field_0x860 = ((mDoExt_McaMorf*)(this->field_0x330))->play((_savegpr_28(this, bool, arg2, arg3, arg4, arg5, arg6, arg7) + 608), ((dBgS*)(((char*)&g_dComIfG_gameInfo + 4768)))->GetMtrlSndId((_savegpr_28(this, bool, arg2, arg3, arg4, arg5, arg6, arg7) + 1052)), dComIfGp_getReverb((this->field_0x20a & 255))); */
        /* if (this->field_0x68 >= this->field_0x824) goto L_ec4; */
        /* field_0x860 = 1; */
        /* L_ec4:; */
        /* field_0x824 = 0; */
        /* if (this->field_0x89f != 4) goto L_f34; */
        /* if (((J3DFrameCtrl*)((this->field_0x330 + 88)))->checkPass() == 0) goto L_f34; */
        /* ((JAIZelBasic*)(base))->seStart(22551, (_savegpr_28(this, bool, arg2, arg3, arg4, arg5, arg6, arg7) + 608), 0, dComIfGp_getReverb((this->field_0x20a & 255)), 0); */
        /* L_f34:; */
        /* ((mDoExt_McaMorf*)(this->field_0x710))->play((_savegpr_28(this, bool, arg2, arg3, arg4, arg5, arg6, arg7) + 608), 0, 0); */
        /* if (m704 == 0) goto L_f98; */
        /* if (this->field_0x865 >= 2) goto L_f98; */
        /* field_0x68 = 0; */
        /* L_f98:; */
        /* ((dBgS_Acch*)((_savegpr_28(this, bool, arg2, arg3, arg4, arg5, arg6, arg7) + 820)))->CrrPos(((char*)&g_dComIfG_gameInfo + 4768)); */
        /* L_fb8:; */
        /* field_0x1b5 = ((dBgS*)(((char*)&g_dComIfG_gameInfo + 4768)))->GetRoomId((_savegpr_28(this, bool, arg2, arg3, arg4, arg5, arg6, arg7) + 1052)); */
        /* field_0x1b6 = ((dBgS*)(((char*)&g_dComIfG_gameInfo + 4768)))->GetPolyColor((_savegpr_28(this, bool, arg2, arg3, arg4, arg5, arg6, arg7) + 1052)); */
        PSMTXTrans(((char*)&now__14mDoMtx_stack_c + 0));
        /* mDoMtx_YrotM(((char*)&now__14mDoMtx_stack_c + 0), this->field_0x7d8); */
        PSMTXCopy(((char*)&now__14mDoMtx_stack_c + 0), (this->field_0x50 + 36));
        /* ((mDoExt_McaMorf*)(this->field_0x330))->calc(); */
        PSMTXCopy((this->field_0x8c + ((mJointNo1 & 255) * 48)), (this->field_0x50 + 36));
        /* ((mDoExt_McaMorf*)(this->field_0x710))->calc(); */
        /* if (m704 == 0) goto L_1070; */
        ((mDoExt_McaMorf*)(m704))->calc();
        /* L_1070:; */
        /* if (this->field_0x708 == 0) goto L_10b4; */
        PSMTXCopy((this->field_0x8c + ((m6CE & 255) * 48)), (this->field_0x708 + 36));
        /* L_10b4:; */
        /* return _restgpr_28(((daNpc_Ko1_c*)(_savegpr_28(this, bool, arg2, arg3, arg4, arg5, arg6, arg7)))->setAttention()); */
}

/* 000011C4-000011D8       .text anmNum_toResID__11daNpc_Ko1_cFi */
int daNpc_Ko1_c::anmNum_toResID(int anmNum) {
    static const int a_bck_resID_tbl[] = {
        22, 15, 24, 21, 20, 13, 23, 16, 17, 18, 19, 14, 12, 38, 10, 5, 11, 9, 8, 3, 10, 0,
    };
    return a_bck_resID_tbl[anmNum];
}

/* 000011D8-00001200       .text headAnmNum_toResID__11daNpc_Ko1_cFi */
void daNpc_Ko1_c::headAnmNum_toResID(int) {
        /* if (this->field_0x8a6 != 1) goto L_1100; */
        return 37;
}

/* 00001200-00001214       .text balloon_anmNum_toResID__11daNpc_Ko1_cFi */
int daNpc_Ko1_c::balloon_anmNum_toResID(int anmNum) {
    static const int a_bck_resID_tbl[] = {
        1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 34, 32, 33,
    };
    return a_bck_resID_tbl[anmNum];
}

/* 00001214-0000129C       .text btpNum_toResID__11daNpc_Ko1_cFi */
void daNpc_Ko1_c::btpNum_toResID(int) {
        /* if ((int << 2) == 32) goto L_117c; */
        /* if (/ * bge * / 1) goto L_11a8; */
        /* if ((int << 2) >= 31) goto L_1150; */
        /* goto L_11a8; */
        /* L_1150:; */
        /* if ((this->field_0x8a6 & 255) == 1) goto L_1174; */
        return 31;
}

/* 0000129C-000013AC       .text setBtp__11daNpc_Ko1_cFbi */
void daNpc_Ko1_c::setBtp(bool, int) {
    /* field_0x714 = ((dRes_control_c*)(((char*)&@stringBase0 + 8)))->getIDRes((((daNpc_Ko1_c*)(_savegpr_29(this, bool, int, arg3, arg4, arg5, arg6, arg7)))->btpNum_toResID(this->field_0x50) & 65535), ((char*)&g_dComIfG_gameInfo + -16460), 64); */
    if (this->field_0x714 == 0) {
        /* ((JUTAssertion*)(((JUTAssertion*)(((dRes_control_c*)(((char*)&@stringBase0 + 8)))->getIDRes((((daNpc_Ko1_c*)(_savegpr_29(this, bool, int, arg3, arg4, arg5, arg6, arg7)))->btpNum_toResID(this->field_0x50) & 65535), ((char*)&g_dComIfG_gameInfo + -16460), 64)))->getSDevice()))->showAssert(((char*)&@stringBase0 + 11), 938, ((char*)&@stringBase0 + 27)); */
        OSPanic(((char*)&@stringBase0 + 11), 938, ((char*)&@stringBase0 + 48));
    }
    /* if (((mDoExt_btpAnm*)((_savegpr_29(this, bool, int, arg3, arg4, arg5, arg6, arg7) + 1816)))->init(this->field_0x4, this->field_0x714, 1, 2, 0, -1) != 0) { */
        /* field_0x72c = 0; */
        /* field_0x72e = 0; */
        /* return 1; */
    return _restgpr_29(0);
}

/* 000013AC-000013D4       .text iniTexPttrnAnm__11daNpc_Ko1_cFb */
void daNpc_Ko1_c::iniTexPttrnAnm(bool) {
    return setBtp(bool, (this->field_0x89e & 255));
}

/* 000013D4-00001480       .text plyTexPttrnAnm__11daNpc_Ko1_cFv */
void daNpc_Ko1_c::plyTexPttrnAnm() {
        /* if (this->field_0x89e != 0) goto L_1318; */
        /* if (cLib_calcTimer<s>__FPs((this + 1838), arg1, arg2, arg3, arg4, arg5, arg6, arg7) != 0) goto L_1380; */
        /* L_1318:; */
        /* field_0x72c = (this->field_0x72c + 1); */
        /* if (this->field_0x72c < (this->field_0x6 & 65535)) goto L_1380; */
        /* if (this->field_0x89e == 0) goto L_1350; */
        /* goto L_1380; */
        /* L_1350:; */
        cM_rndF(C_@4649);
        /* field_0x72c = 0; */
        /* L_1380:; */
        return C_@4648;
}

/* 00001480-000014BC       .text setAnm_tex__11daNpc_Ko1_cFSc */
void daNpc_Ko1_c::setAnm_tex(signed char) {
    if ((this->field_0x89e & 255) != (char & 255)) {
        /* field_0x89e = char; */
    }
    return iniTexPttrnAnm(1);
}

/* 000014BC-000015B4       .text setAnm_anm__11daNpc_Ko1_cFPQ211daNpc_Ko1_c9anm_prm_c */
void daNpc_Ko1_c::setAnm_anm(daNpc_Ko1_c::anm_prm_c*) {
    if ((this->field_0x89f & 255) == (base & 255)) {
        return 1;
    }
    dNpc_setAnmIDRes(this->field_0x330, this->field_0xc, ((daNpc_Ko1_c*)(1))->anmNum_toResID((this->field_0x89f & 255)), -1, ((char*)&@stringBase0 + 8));
    dNpc_setAnmIDRes(this->field_0x710, this->field_0xc, headAnmNum_toResID((this->field_0x89f & 255)), -1, ((char*)&@stringBase0 + 8));
    /* field_0x860 = 0; */
    /* field_0x861 = 0; */
    /* field_0x824 = 0; */
    return 1;
}

/* 000015B4-00001674       .text set_balloonAnm_anm__11daNpc_Ko1_cFPQ211daNpc_Ko1_c9anm_prm_c */
void daNpc_Ko1_c::set_balloonAnm_anm(daNpc_Ko1_c::anm_prm_c*) {
    if ((this->field_0x8a1 & 255) == (base & 255)) {
        return 1;
    }
    dNpc_setAnmIDRes(m704, this->field_0xc, ((daNpc_Ko1_c*)(1))->balloon_anmNum_toResID((this->field_0x8a1 & 255)), -1, ((char*)&@stringBase0 + 8));
    /* field_0x85e = 0; */
    /* field_0x85f = 0; */
    /* field_0x828 = 0; */
    return 1;
}

/* 00001674-000016A4       .text set_balloonAnm_NUM__11daNpc_Ko1_cFi */
void daNpc_Ko1_c::set_balloonAnm_NUM(int) {
    return set_balloonAnm_anm((((char*)&a_anm_prm_tbl$4677 + 0) + (int * 20)), (int * 20));
}

/* 000016A4-00001710       .text setAnm_NUM__11daNpc_Ko1_cFii */
void daNpc_Ko1_c::setAnm_NUM(int, int) {
    if (int != 0) {
        /* setAnm_tex(this->field_0x1, int, arg3, arg4, arg5, arg6, arg7); */
    }
    return setAnm_anm((((char*)&a_anm_prm_tbl$4682 + 0) + (int * 20)), (int * 20));
}

/* 00001710-00001790       .text setAnm__11daNpc_Ko1_cFv */
void daNpc_Ko1_c::setAnm() {
    if (this->field_0x1 != 0) {
        /* setAnm_tex(this->field_0x1, arg2, arg3, arg4, arg5, arg6, arg7); */
    }
    if (base != 0) {
        setAnm_anm((((char*)&a_anm_prm_tbl$4689 + 0) + ((this->field_0x8a3 & 255) * 20)));
    }
    return 1;
}

/* 00001790-000017A4       .text setPlaySpd__11daNpc_Ko1_cFf */
void daNpc_Ko1_c::setPlaySpd(float) {
    /* field_0x64 = farg0; */
    /* field_0x64 = farg0; */
    /* return this->field_0x330; */
}

/* 000017A4-000017DC       .text chg_anmTag__11daNpc_Ko1_cFv */
void daNpc_Ko1_c::chg_anmTag() {
    }
    return setAnm_NUM(4, 1);


/* 000017DC-00001824       .text control_anmTag__11daNpc_Ko1_cFv */
void daNpc_Ko1_c::control_anmTag() {
    if (this->field_0x89d != 10) {
    } else {
        /* if (this->field_0x860 == 0) goto L_1728; */
        /* field_0x89d = 255; */
    }
    /* L_1728:; */
    return setAnm_ATR(1);
}

/* 00001824-000018D8       .text chg_anmAtr__11daNpc_Ko1_cFUc */
void daNpc_Ko1_c::chg_anmAtr(unsigned char) {
        /* if (/ * beq * / 1) goto L_1794; */
        /* if (this->field_0x848 == 2826) goto L_1780; */
        /* if (/ * bge * / 1) goto L_176c; */
        /* if (this->field_0x848 == 2819) goto L_1780; */
        /* goto L_1794; */
        /* L_176c:; */
        /* if (this->field_0x848 >= 2918) goto L_1794; */
        /* if (this->field_0x848 >= 2916) goto L_1780; */
        /* goto L_1794; */
        /* L_1780:; */
        /* field_0x8a5 = 1; */
        /* field_0x876 = 0; */
        /* field_0x29a = 1; */
        /* L_1794:; */
        /* if ((char & 16777215) >= 13) goto L_17dc; */
        /* if ((char & 16777215) != this->field_0x89c) goto L_17b0; */
        /* goto L_17dc; */
        /* L_17b0:; */
        /* field_0x89c = char; */
        /* if (this->field_0x89c != 11) goto L_17d4; */
        /* field_0x8a5 = 1; */
        /* field_0x876 = 0; */
        /* field_0x29a = 1; */
        /* L_17d4:; */
        /* L_17dc:; */
        return setAnm_ATR(1);
}

/* 000018D8-0000192C       .text control_anmAtr__11daNpc_Ko1_cFv */
void daNpc_Ko1_c::control_anmAtr() {
    if (this->field_0x89c != 11) {
        /* if (/ * bge * / 1) goto L_1830; */
        /* goto L_1830; */
    } else {
        /* if (this->field_0x860 == 0) goto L_1830; */
        /* field_0x89c = 0; */
    }
    /* L_1830:; */
    return setAnm_NUM(0, 1);
}

/* 0000192C-00001994       .text setAnm_ATR__11daNpc_Ko1_cFi */
void daNpc_Ko1_c::setAnm_ATR(int) {
    if (int != 0) {
        /* setAnm_tex(this->field_0x1, arg2, arg3, arg4, arg5, arg6, arg7); */
    }
    return setAnm_anm((((char*)&a_anm_prm_tbl$4763 + 0) + (this->field_0x89c * 20)), (this->field_0x89c * 20));
}

/* 00001994-00001A9C       .text anmAtr__11daNpc_Ko1_cFUs */
void daNpc_Ko1_c::anmAtr(unsigned short) {
        /* if (this->field_0x6bc != 2) goto L_18fc; */
        /* if (this == this->field_0x4) goto L_18fc; */
        control_anmTag();
        control_anmAtr();
        /* goto L_199c; */
        /* L_18fc:; */
        /* if (/ * beq * / 1) goto L_1984; */
        /* if (/ * bge * / 1) goto L_198c; */
        /* if (/ * beq * / 1) goto L_1918; */
        /* goto L_198c; */
        /* L_1918:; */
        /* if (this->field_0x8a9 != 0) goto L_194c; */
        /* field_0x89c = 255; */
        /* chg_anmAtr(this->field_0x5bcf); */
        /* field_0x8a9 = (this->field_0x8a9 + 1); */
        /* L_194c:; */
        /* field_0x5bd0 = 255; */
        /* if (this->field_0x5bd0 == 255) goto L_198c; */
        /* if (this->field_0x89d == this->field_0x5bd0) goto L_198c; */
        chg_anmTag();
        /* goto L_198c; */
        /* L_1984:; */
        /* field_0x8a9 = 0; */
        /* L_198c:; */
        control_anmTag();
        /* L_199c:; */
        return control_anmAtr();
}

/* 00001A9C-00001AEC       .text eventOrder__11daNpc_Ko1_cFv */
void daNpc_Ko1_c::eventOrder() {
    if ((this->field_0x8a2 & 255) != 1) {
        /* if ((this->field_0x8a2 & 255) == 2) goto L_19f0; */
    }
    if (this->field_0x8a2 == 1) {
    }
    /* L_19f0:; */
    return fopAcM_orderSpeakEvent(this);
}

/* 00001AEC-00001B2C       .text checkOrder__11daNpc_Ko1_cFv */
void daNpc_Ko1_c::checkOrder() {
    if ((this->field_0x8a2 & 255) != 1) {
    }
    /* field_0x8a2 = 0; */
    /* field_0x875 = 1; */
    return this;
}

/* 00001B2C-00001BCC       .text chk_talk__11daNpc_Ko1_cFv */
void daNpc_Ko1_c::chk_talk() {
    if (this->field_0x52b8 != 1) {
        /* if (this->field_0x52b8 != 2) goto L_1a84; */
        /* if (this->field_0x52b8 == 3) goto L_1a88; */
    }
    /* L_1a84:; */
    /* L_1a88:; */
    if (1 == 0) {
        /* if (((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->ChkPresentEnd() != 0) goto L_1ac4; */
    } else {
        /* field_0x863 = 255; */
    }
    /* L_1ac4:; */
    return 1;
}

/* 00001BCC-00001E0C       .text chk_manzai_1__11daNpc_Ko1_cFv */
void daNpc_Ko1_c::chk_manzai_1() {
        /* _savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* goto L_1ba0; */
        /* L_1b08:; */
        /* ((daNpc_Ko1_c*)(_savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->searchByID(); */
        /* if (/ * bne * / 1) goto L_1b58; */
        /* ((JUTAssertion*)(((JUTAssertion*)(((daNpc_Ko1_c*)(_savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->searchByID()))->getSDevice()))->showAssert(((char*)&@stringBase0 + 11), 1410, ((char*)&@stringBase0 + 53)); */
        OSPanic(((char*)&@stringBase0 + 11), 1410, ((char*)&@stringBase0 + 48));
        /* L_1b58:; */
        /* if (this->field_0x6bc != 2) goto L_1b6c; */
        /* goto L_1b98; */
        /* L_1b6c:; */
        /* if (_savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) == 0) goto L_1b88; */
        /* goto L_1b8c; */
        /* L_1b88:; */
        /* L_1b8c:; */
        /* field_0x6b4 = -1; */
        /* field_0x6bc = 1; */
        /* L_1b98:; */
        /* L_1ba0:; */
        /* if ((0 + 1) < this->field_0x7bc) goto L_1b08; */
        /* if (/ * beq * / 1) goto L_1d04; */
        /* ((daNpc_Ko1_c*)(_savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->searchByID(this->field_0x7b4); */
        /* if ((this->field_0x8a7 & 255) == 3) goto L_1c40; */
        /* if (/ * bge * / 1) goto L_1bf0; */
        /* if ((this->field_0x8a7 & 255) == 1) goto L_1c08; */
        /* goto L_1cfc; */
        /* L_1bf0:; */
        /* if ((this->field_0x8a7 & 255) == 7) goto L_1cbc; */
        /* if (/ * bge * / 1) goto L_1cfc; */
        /* if ((this->field_0x8a7 & 255) >= 6) goto L_1c84; */
        /* goto L_1cfc; */
        /* L_1c08:; */
        /* field_0x5c1c = ((daNpc_Ko1_c*)(_savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->searchByID(this->field_0x7b4); */
        /* field_0x5c20 = _savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* field_0x5c24 = 0; */
        /* field_0x5c28 = 0; */
        /* field_0x5c2c = 0; */
        /* field_0x5c30 = 0; */
        /* field_0x5c34 = 0; */
        /* field_0x5c38 = 0; */
        /* field_0x5c3c = 0; */
        /* field_0x5c40 = 0; */
        /* goto L_1cfc; */
        /* L_1c40:; */
        /* ((daNpc_Ko1_c*)(_savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->searchByID(this->field_0x7b8); */
        /* field_0x5c1c = ((daNpc_Ko1_c*)(_savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->searchByID(this->field_0x7b4); */
        /* field_0x5c20 = ((daNpc_Ko1_c*)(_savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->searchByID(this->field_0x7b8); */
        /* field_0x5c24 = _savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* field_0x5c28 = 0; */
        /* field_0x5c2c = 0; */
        /* field_0x5c30 = 0; */
        /* field_0x5c34 = 0; */
        /* field_0x5c38 = 0; */
        /* field_0x5c3c = 0; */
        /* field_0x5c40 = 0; */
        /* goto L_1cfc; */
        /* L_1c84:; */
        /* field_0x5c1c = _savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* field_0x5c20 = ((daNpc_Ko1_c*)(_savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->searchByID(this->field_0x7b4); */
        /* field_0x5c24 = 0; */
        /* field_0x5c28 = 0; */
        /* field_0x5c2c = 0; */
        /* field_0x5c30 = 0; */
        /* field_0x5c34 = 0; */
        /* field_0x5c38 = 0; */
        /* field_0x5c3c = 0; */
        /* field_0x5c40 = 0; */
        /* goto L_1cfc; */
        /* L_1cbc:; */
        /* ((daNpc_Ko1_c*)(_savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->searchByID(this->field_0x7b8); */
        /* field_0x5c1c = _savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* field_0x5c20 = ((daNpc_Ko1_c*)(_savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->searchByID(this->field_0x7b8); */
        /* field_0x5c24 = ((daNpc_Ko1_c*)(_savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->searchByID(this->field_0x7b4); */
        /* field_0x5c28 = 0; */
        /* field_0x5c2c = 0; */
        /* field_0x5c30 = 0; */
        /* field_0x5c34 = 0; */
        /* field_0x5c38 = 0; */
        /* field_0x5c3c = 0; */
        /* field_0x5c40 = 0; */
        /* L_1cfc:; */
        /* field_0x6bc = 2; */
        /* L_1d04:; */
        /* return _restgpr_27((((0 + 1) - this->field_0x7bc) >> 5), ((char*)&g_dComIfG_gameInfo + 0)); */
}

/* 00001E0C-00001E4C       .text chk_partsNotMove__11daNpc_Ko1_cFv */
void daNpc_Ko1_c::chk_partsNotMove() {
    if (this->field_0x840 == m292) {
        /* if (this->field_0x842 == m296) goto L_1d58; */
        /* if (this->field_0x844 == this->field_0x206) goto L_1d58; */
    }
    /* L_1d58:; */
    return 1;
}

/* 00001E4C-00001FFC       .text lookBack__11daNpc_Ko1_cFv */
void daNpc_Ko1_c::lookBack() {
        /* _savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* if ((this->field_0x8a5 & 255) == 2) goto L_1e4c; */
        /* if (/ * bge * / 1) goto L_1df0; */
        /* if ((this->field_0x8a5 & 255) >= 1) goto L_1dfc; */
        /* goto L_1e80; */
        /* L_1df0:; */
        /* if ((this->field_0x8a5 & 255) >= 4) goto L_1e80; */
        /* goto L_1e7c; */
        /* L_1dfc:; */
        dNpc_playerEyePos();
        /* goto L_1e80; */
        /* L_1e4c:; */
        /* goto L_1e80; */
        /* L_1e7c:; */
        /* L_1e80:; */
        /* cLib_addCalcAngleS2((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 2134), this->field_0x22, 4, 2048); */
        /* if (this->field_0x29a != 0) goto L_1ec0; */
        /* field_0x856 = 0; */
        /* L_1ec0:; */
        /* return _restgpr_28(((dNpc_JntCtrl_c*)((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 656)))->lookAtTarget((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 518))); */
}

/* 00001FFC-00002204       .text next_msgStatus__11daNpc_Ko1_cFPUl */
void daNpc_Ko1_c::next_msgStatus(unsigned long*) {
        /* _savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* if (/ * bgt * / 1) goto L_20f8; */
        base = 2903;
        /* goto L_20fc; */
        base = 2904;
        /* goto L_20fc; */
        base = 2906;
        /* goto L_20fc; */
        base = 2907;
        /* goto L_20fc; */
        base = 2908;
        /* goto L_20fc; */
        base = 2909;
        /* goto L_20fc; */
        base = 2916;
        /* goto L_20fc; */
        base = 2911;
        /* goto L_20fc; */
        base = 2912;
        /* goto L_20fc; */
        base = 2913;
        /* goto L_20fc; */
        base = 2917;
        /* goto L_20fc; */
        base = 2807;
        /* goto L_20fc; */
        base = 2808;
        /* goto L_20fc; */
        base = 2809;
        /* goto L_20fc; */
        base = 2810;
        /* goto L_20fc; */
        base = 2811;
        /* goto L_20fc; */
        /* if (((daNpc_Ko1_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->bitCount(((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->getEventReg()) == 0) goto L_2050; */
        base = 2812;
        /* goto L_20fc; */
        /* L_2050:; */
        base = 2813;
        /* goto L_20fc; */
        base = 2814;
        /* goto L_20fc; */
        base = 2815;
        /* goto L_20fc; */
        base = 2817;
        /* goto L_20fc; */
        base = 2818;
        /* goto L_20fc; */
        base = 2819;
        /* goto L_20fc; */
        base = 2820;
        /* goto L_20fc; */
        base = 2821;
        /* goto L_20fc; */
        base = 2822;
        /* goto L_20fc; */
        base = 2825;
        /* goto L_20fc; */
        base = 2826;
        /* goto L_20fc; */
        base = 2827;
        /* goto L_20fc; */
        base = 2828;
        /* goto L_20fc; */
        base = 2829;
        /* goto L_20fc; */
        /* L_20f8:; */
        /* L_20fc:; */
        return _restgpr_29(16);
}

/* 00002204-00002240       .text getMsg_HNA_0__11daNpc_Ko1_cFv */
void daNpc_Ko1_c::getMsg_HNA_0() {
    return (((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->isEventBit(544) + 2901);
}

/* 00002240-0000227C       .text getMsg_HNA_1__11daNpc_Ko1_cFv */
void daNpc_Ko1_c::getMsg_HNA_1() {
    return (((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->isEventBit(576) + 2804);
}

/* 0000227C-000022B8       .text getMsg_HNA_2__11daNpc_Ko1_cFv */
void daNpc_Ko1_c::getMsg_HNA_2() {
    return (((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->isEventBit(12545) + 2914);
}

/* 000022B8-00002318       .text getMsg_HNA_3__11daNpc_Ko1_cFv */
void daNpc_Ko1_c::getMsg_HNA_3() {
    if (((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->isEventBit(11268) != 0) {
        /* if (this->field_0x86d != 0) goto L_2218; */
        return 2910;
    }
    /* L_2218:; */
    return 2905;
}

/* 00002318-0000237C       .text getMsg_BOU_0__11daNpc_Ko1_cFv */
void daNpc_Ko1_c::getMsg_BOU_0() {
    if (((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->isEventBit(260) != 0) {
        return 2803;
    }
    return (((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->isEventBit(528) + 2801);
}

/* 0000237C-000023B8       .text getMsg_BOU_1__11daNpc_Ko1_cFv */
void daNpc_Ko1_c::getMsg_BOU_1() {
    return (((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->isEventBit(520) + 2804);
}

/* 000023B8-000023E8       .text bitCount__11daNpc_Ko1_cFUc */
void daNpc_Ko1_c::bitCount(unsigned char) {
    if (char == 0) {
    }
    return ((0 + 1) & 255);
}

/* 000023E8-0000248C       .text getMsg_BOU_2__11daNpc_Ko1_cFv */
void daNpc_Ko1_c::getMsg_BOU_2() {
        /* if (((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->isEventBit(14337) == 0) goto L_2384; */
        /* if (((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->isEventBit(13120) == 0) goto L_2350; */
        return 2824;
        /* L_2350:; */
        /* if ((bitCount(((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->getEventReg()) & 255) < 2) goto L_2388; */
        return 2823;
        /* L_2384:; */
        /* L_2388:; */
        return 2806;
}

/* 0000248C-00002528       .text getMsg__11daNpc_Ko1_cFv */
void daNpc_Ko1_c::getMsg() {
    if ((this->field_0x8a7 & 255) <= 8) {
        getMsg_HNA_0();
        /* goto L_2428; */
        ((daNpc_Ko1_c*)(getMsg_HNA_0()))->getMsg_HNA_1();
        /* goto L_2428; */
        ((daNpc_Ko1_c*)(((daNpc_Ko1_c*)(getMsg_HNA_0()))->getMsg_HNA_1()))->getMsg_HNA_2();
        /* goto L_2428; */
        ((daNpc_Ko1_c*)(((daNpc_Ko1_c*)(((daNpc_Ko1_c*)(getMsg_HNA_0()))->getMsg_HNA_1()))->getMsg_HNA_2()))->getMsg_HNA_3();
        /* goto L_2428; */
        ((daNpc_Ko1_c*)(((daNpc_Ko1_c*)(((daNpc_Ko1_c*)(((daNpc_Ko1_c*)(getMsg_HNA_0()))->getMsg_HNA_1()))->getMsg_HNA_2()))->getMsg_HNA_3()))->getMsg_BOU_0();
        /* goto L_2428; */
        ((daNpc_Ko1_c*)(((daNpc_Ko1_c*)(((daNpc_Ko1_c*)(((daNpc_Ko1_c*)(((daNpc_Ko1_c*)(getMsg_HNA_0()))->getMsg_HNA_1()))->getMsg_HNA_2()))->getMsg_HNA_3()))->getMsg_BOU_0()))->getMsg_BOU_1();
        /* goto L_2428; */
    }
    /* L_2428:; */
    return ((daNpc_Ko1_c*)(((daNpc_Ko1_c*)(((daNpc_Ko1_c*)(((daNpc_Ko1_c*)(((daNpc_Ko1_c*)(((daNpc_Ko1_c*)(getMsg_HNA_0()))->getMsg_HNA_1()))->getMsg_HNA_2()))->getMsg_HNA_3()))->getMsg_BOU_0()))->getMsg_BOU_1()))->getMsg_BOU_2();
}

/* 00002528-000025A8       .text chkAttention__11daNpc_Ko1_cFv */
void daNpc_Ko1_c::chkAttention() {
    if (((dAttention_c*)(((char*)&g_dComIfG_gameInfo + 22536)))->LockonTruth() == 0) {
    }
    return ((this - ((dAttention_c*)(((char*)&g_dComIfG_gameInfo + 22536)))->ActionTarget(0)) >> 5);
}

/* 000025A8-00002610       .text setAttention__11daNpc_Ko1_cFb */
void daNpc_Ko1_c::setAttention(bool) {
    /* field_0x274 = 0; */
    /* field_0x278 = (this->field_0x1fc + this->field_0x24); */
    /* field_0x27c = 0; */
    if (this->field_0x870 == 0) {
    }
    eyePos = 0;
    /* field_0x264 = 0; */
    /* field_0x268 = 0; */
    return this;
}

/* 00002610-00002644       .text searchByID__11daNpc_Ko1_cFUi */
void daNpc_Ko1_c::searchByID(fpc_ProcID) {
    fopAcM_SearchByID(fpc_ProcID);
}

/* 00002644-000026DC       .text partner_srch_sub__11daNpc_Ko1_cFPFPvPv_Pv */
void daNpc_Ko1_c::partner_srch_sub(void* (*)(void*, void*)) {
        base = 0;
        /* fpcEx_Search(arg1, this, ((char*)&l_check_inf + 0), 0, this, arg5, arg6, arg7); */
        /* if (base == 0) goto L_25d8; */
        /* if (base == 0) goto L_25d4; */
        /* goto L_25d8; */
        /* L_25d4:; */
        /* L_25d8:; */
        return -1;
}

/* 000026DC-000027CC       .text partner_srch__11daNpc_Ko1_cFv */
void daNpc_Ko1_c::partner_srch() {
    if (this->field_0x8a8 == 1) {
        /* if ((this->field_0x8a7 & 255) <= 8) goto L_26cc; */
        /* field_0x7b4 = partner_srch_sub(((char*)&searchActor_Ko_Bou__FPvPv + 0), arg2, arg3, arg4, arg5, arg6, arg7); */
        /* field_0x7bc = 1; */
        /* goto L_26cc; */
        /* field_0x7b4 = ((daNpc_Ko1_c*)(partner_srch_sub(((char*)&searchActor_Ko_Bou__FPvPv + 0), arg2, arg3, arg4, arg5, arg6, arg7)))->partner_srch_sub(((char*)&searchActor_Ko_Bou__FPvPv + 0)); */
        /* field_0x7b8 = partner_srch_sub(((char*)&searchActor_Ob__FPvPv + 0)); */
        /* field_0x7bc = 2; */
        /* goto L_26cc; */
        /* field_0x7b4 = ((daNpc_Ko1_c*)(partner_srch_sub(((char*)&searchActor_Ob__FPvPv + 0))))->partner_srch_sub(((char*)&searchActor_Ko_Hna__FPvPv + 0)); */
        /* field_0x7bc = 1; */
        /* goto L_26cc; */
        /* field_0x7b4 = ((daNpc_Ko1_c*)(((daNpc_Ko1_c*)(partner_srch_sub(((char*)&searchActor_Ob__FPvPv + 0))))->partner_srch_sub(((char*)&searchActor_Ko_Hna__FPvPv + 0))))->partner_srch_sub(((char*)&searchActor_Ko_Hna__FPvPv + 0)); */
        /* field_0x7b8 = partner_srch_sub(((char*)&searchActor_Ob__FPvPv + 0)); */
        /* field_0x7bc = 2; */
    }
    /* L_26cc:; */
    return partner_srch_sub(((char*)&searchActor_Ob__FPvPv + 0));
}

/* 000027CC-00002900       .text check_landOn__11daNpc_Ko1_cFv */
void daNpc_Ko1_c::check_landOn() {
    __mi();
    PSVECSquareMag();
    if (/* ble */ 1) {
    }
    if (/* bne */ 1) {
        /* if (this->field_0x8 > this->field_0x108) goto L_27f8; */
        /* if (/ * beq * / 1) goto L_27f8; */
        ((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->onEventBit(260);
        return 1;
    }
    /* L_27f8:; */
    return 0;
}

/* 00002900-0000299C       .text ko_setPthPos__11daNpc_Ko1_cFv */
void daNpc_Ko1_c::ko_setPthPos() {
    if (this->field_0x73c != 0) {
        getPoint((this + 1852));
        current = 0;
        /* field_0x1fc = 0; */
        /* field_0x200 = 0; */
        ((dNpc_PathRun_c*)((this + 1852)))->nextIdxAuto();
        getPoint((this + 1852));
        /* field_0x206 = cLib_targetAngleY((this + 504)); */
    }
    return cLib_targetAngleY((this + 504));
}

/* 0000299C-00002AA4       .text set_tgtPos__11daNpc_Ko1_cF4cXyz */
void daNpc_Ko1_c::set_tgtPos(cXyz) {
    /* _savegpr_29(this, cXyz, arg2, arg3, arg4, arg5, arg6, arg7); */
    PSMTXTrans(((char*)&now__14mDoMtx_stack_c + 0));
    /* mDoMtx_YrotM(((char*)&now__14mDoMtx_stack_c + 0), this->field_0x206); */
    /* field_0x85a = (this->field_0x85a + 1024); */
    PSMTXMultVec(((char*)&now__14mDoMtx_stack_c + 0));
    base = 0;
    /* field_0x4 = 0; */
    /* field_0x8 = 0; */
    return _restgpr_29(PSMTXMultVec(((char*)&now__14mDoMtx_stack_c + 0)));
}

/* 00002AA4-00002C14       .text ko_movPass__11daNpc_Ko1_cFv */
void daNpc_Ko1_c::ko_movPass() {
        /* _savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* if (this->field_0x73c == 0) goto L_2a44; */
        /* if (this->field_0x5 == 0) goto L_2a44; */
        /* if (((dNpc_PathRun_c*)((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1852)))->chkPointPass() == 0) goto L_2a3c; */
        /* ((dNpc_PathRun_c*)((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1852)))->nextIdxAuto(); */
        /* L_2a3c:; */
        /* goto L_2b10; */
        /* L_2a44:; */
        __mi();
        PSVECSquareMag();
        /* if (/ * ble * / 1) goto L_2ad8; */
        /* L_2ad8:; */
        /* if (this->field_0x8 != this->field_0x83c) goto L_2b0c; */
        /* if (this->field_0x73c == 0) goto L_2b0c; */
        /* if (((dNpc_PathRun_c*)((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1852)))->nextIdxAuto() != 0) goto L_2b0c; */
        /* L_2b0c:; */
        /* L_2b10:; */
        return _restgpr_29(2);
}

/* 00002C14-00002D50       .text ko_clcMovSpd__11daNpc_Ko1_cFv */
void daNpc_Ko1_c::ko_clcMovSpd() {
        __mi();
        PSVECSquareMag();
        cLib_targetAngleY((this + 504), (this + 2036));
        /* if (routeCheck() == 0) goto L_2c48; */
        /* if ((this->field_0x8a3 & 255) == 4) goto L_2bc4; */
        /* if ((this->field_0x8a3 & 255) == 11) goto L_2bc4; */
        /* if ((this->field_0x8a3 & 255) != 24) goto L_2c10; */
        /* L_2bc4:; */
        /* if (cLib_calcTimer<s>__FPs((this + 2128)) != 0) goto L_2bf0; */
        /* field_0x850 = cLib_getRndValue<i>__Fii(8, 20); */
        /* L_2bf0:; */
        /* if (this->field_0x864 == 0) goto L_2c04; */
        /* L_2c04:; */
        /* L_2c10:; */
        cLib_chaseAngleS((this + 518));
        /* L_2c48:; */
        return cLib_chaseF((this + 596));
}

/* 00002D50-00002E3C       .text ko_clcSwmSpd__11daNpc_Ko1_cFv */
void daNpc_Ko1_c::ko_clcSwmSpd() {
    __mi();
    PSVECSquareMag();
    cLib_targetAngleY((this + 504), (this + 2036));
    if (routeCheck() != 0) {
        cLib_chaseAngleS((this + 518));
        cLib_chaseF((this + 548));
    }
    return cLib_chaseF((this + 596));
}

/* 00002E3C-00003028       .text ko_nMove__11daNpc_Ko1_cFv */
void daNpc_Ko1_c::ko_nMove() {
        /* if ((this->field_0x898 & 255) == 3) goto L_2e80; */
        /* if (/ * bge * / 1) goto L_2d90; */
        /* if ((this->field_0x898 & 255) >= 1) goto L_2d9c; */
        /* goto L_2f10; */
        /* L_2d90:; */
        /* if ((this->field_0x898 & 255) >= 5) goto L_2f10; */
        /* goto L_2ec4; */
        /* L_2d9c:; */
        ko_clcMovSpd();
        /* if (this->field_0x898 != 1) goto L_2dec; */
        /* if ((speedF * this->field_0x30) <= (this->field_0x34 * this->field_0x30)) goto L_2de4; */
        /* goto L_2e28; */
        /* L_2de4:; */
        /* goto L_2e28; */
        /* L_2dec:; */
        /* if ((speedF * this->field_0x40) <= (this->field_0x44 * this->field_0x40)) goto L_2e24; */
        /* goto L_2e28; */
        /* L_2e24:; */
        /* L_2e28:; */
        /* if ((speedF * this->field_0x40) >= this->field_0x11c) goto L_2e38; */
        /* L_2e38:; */
        setPlaySpd();
        /* if (ko_movPass() == 2) goto L_2e6c; */
        /* if (/ * bge * / 1) goto L_2f10; */
        /* if (ko_movPass() >= 1) goto L_2e60; */
        /* goto L_2f10; */
        /* L_2e60:; */
        /* field_0x86b = 1; */
        /* goto L_2f10; */
        /* L_2e6c:; */
        /* field_0x86b = 1; */
        /* field_0x898 = 0; */
        /* goto L_2f10; */
        /* L_2e80:; */
        ((daNpc_Ko1_c*)(ko_movPass()))->ko_clcSwmSpd();
        /* if (ko_movPass() == 2) goto L_2eb0; */
        /* if (/ * bge * / 1) goto L_2f10; */
        /* if (ko_movPass() >= 1) goto L_2ea4; */
        /* goto L_2f10; */
        /* L_2ea4:; */
        /* field_0x86b = 1; */
        /* goto L_2f10; */
        /* L_2eb0:; */
        /* field_0x86b = 1; */
        /* field_0x898 = 0; */
        /* goto L_2f10; */
        /* L_2ec4:; */
        cLib_chaseF((this + 596));
        /* if (this->field_0x86c != 0) goto L_2f10; */
        /* if (/ * beq * / 1) goto L_2f10; */
        /* field_0x224 = 0; */
        speedF = 0;
        gravity = 0;
        /* field_0x86b = 1; */
        /* L_2f10:; */
        /* if (this->field_0x86b == 0) goto L_2f24; */
        /* field_0x869 = 1; */
        /* L_2f24:; */
        return cLib_chaseF((this + 596));
}

/* 00003028-000030E8       .text chk_routeAngle__11daNpc_Ko1_cFR4cXyzPs */
void daNpc_Ko1_c::chk_routeAngle(cXyz&, short*) {
        /* cM_atan2s(outprod((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 2072))); */
        /* if (this->field_0x81c != base) goto L_2fb4; */
        /* if (cLib_distanceAngleS(cM_atan2s(outprod((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 2072))), base) > 16384) goto L_2fd8; */
        /* L_2fb4:; */
        /* if ((this->field_0x18 * (this->field_0x7f8 - this->field_0x1fc)) >= base) goto L_2fe0; */
        /* L_2fd8:; */
        /* L_2fe0:; */
        /* base = (cM_atan2s(outprod((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 2072))) + -32768); */
        return _restgpr_29(C_@4296);
}

/* 000030E8-0000334C       .text routeWallCheck__11daNpc_Ko1_cFR4cXyzR4cXyzPs */
void daNpc_Ko1_c::routeWallCheck(cXyz&, cXyz&, short*) {
        /* _savegpr_21(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        ct();
        /* field_0xc = 0; */
        /* field_0xc = 0; */
        /* field_0x10 = 1; */
        /* if (/ * beq * / 1) goto L_3140; */
        /* L_3140:; */
        Set();
        /* if (((cBgS*)(((char*)&g_dComIfG_gameInfo + 4768)))->LineCross() == 0) goto L_319c; */
        ((cBgS*)(((char*)&g_dComIfG_gameInfo + 4768)))->GetTriPla();
        /* if (/ * beq * / 1) goto L_319c; */
        /* ((daNpc_Ko1_c*)(_savegpr_21(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->chk_routeAngle(); */
        /* L_319c:; */
        /* if (/ * beq * / 1) goto L_3214; */
        /* if (/ * beq * / 1) goto L_31f0; */
        /* if (/ * beq * / 1) goto L_31f0; */
        /* L_31f0:; */
        /* if (/ * beq * / 1) goto L_3214; */
        /* if (/ * beq * / 1) goto L_3214; */
        /* L_3214:; */
        return _restgpr_21(__dt());
}

/* 00003784-00003A04       .text chk_ForwardGroundY__11daNpc_Ko1_cFs */
void daNpc_Ko1_c::chk_ForwardGroundY(short) {
        /* _savegpr_23(this, short, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* if (((cBgS*)(((char*)&g_dComIfG_gameInfo + 4768)))->GetTriPla(this->field_0x4fa, this->field_0x4f8) == 0) goto L_38f0; */
        /* if (cLib_distanceAngleS(cM_atan2s(((cBgS*)(((char*)&g_dComIfG_gameInfo + 4768)))->GetTriPla(this->field_0x4fa, this->field_0x4f8)), cM_atan2s(((cBgS*)(((char*)&g_dComIfG_gameInfo + 4768)))->GetTriPla(this->field_0x4fa, this->field_0x4f8))) <= 16384) goto L_38f0; */
        __ct();
        /* field_0xc = 0; */
        /* field_0xc = 0; */
        /* field_0x10 = 1; */
        /* if (/ * beq * / 1) goto L_37b4; */
        /* L_37b4:; */
        ((cBgS*)(((char*)&g_dComIfG_gameInfo + 4768)))->GroundCross();
        /* if (/ * beq * / 1) goto L_38bc; */
        /* if (/ * beq * / 1) goto L_3898; */
        /* if (/ * beq * / 1) goto L_3898; */
        /* L_3898:; */
        /* if (/ * beq * / 1) goto L_38bc; */
        /* if (/ * beq * / 1) goto L_38bc; */
        /* L_38bc:; */
        __dt();
        /* goto L_38f8; */
        /* L_38f0:; */
        /* L_38f8:; */
        return _restgpr_23(C_@5630);
}

/* 00003B9C-00003C54       .text chk_wallJump__11daNpc_Ko1_cFs */
void daNpc_Ko1_c::chk_wallJump(short) {
        chk_ForwardGroundY(short);
        /* if (/ * bge * / 1) goto L_3b50; */
        /* if (/ * bge * / 1) goto L_3b50; */
        /* if (/ * ble * / 1) goto L_3b44; */
        /* L_3b44:; */
        /* goto L_3b54; */
        /* L_3b50:; */
        /* L_3b54:; */
        return chk_ForwardGroundY(short);
}

/* 00003C54-00003D34       .text routeCheck__11daNpc_Ko1_cFfPs */
void daNpc_Ko1_c::routeCheck(float, short*) {
    if (this->field_0x898 != 3) {
        /* if (/ * beq * / 1) goto L_3ba4; */
        chk_wallJump(base);
    }
    /* L_3ba4:; */
    routeWallCheck();
    return 1;
}

/* 00003D34-00003DE8       .text chk_start_swim__11daNpc_Ko1_cFv */
void daNpc_Ko1_c::chk_start_swim() {
        /* if (/ * beq * / 1) goto L_3cd0; */
        /* if ((this->field_0x4f0 - this->field_0x3c8) == this->field_0x134) goto L_3cb4; */
        /* if (this->field_0x8a3 == 7) goto L_3ce0; */
        /* setPrtcl_Hamon((C_@4294 + 0), arg2); */
        /* goto L_3ce0; */
        /* L_3cb4:; */
        /* if (this->field_0x8a3 != 7) goto L_3ce0; */
        /* ((daNpc_Ko1_c*)(setPrtcl_Hamon((C_@4294 + 0), arg2)))->setPrtcl_Hamon(); */
        /* goto L_3ce0; */
        /* L_3cd0:; */
        ((dPa_rippleEcallBack*)((this + 2168)))->end();
        /* field_0x88c = 0; */
        /* L_3ce0:; */
        return 0;
}

/* 00003DE8-00003E64       .text get_crsActorID__11daNpc_Ko1_cFv */
void daNpc_Ko1_c::get_crsActorID() {
        /* if (this->field_0x5a4 == 0) goto L_3d54; */
        /* if (((dCcD_GObjInf*)((this + 1396)))->GetCoHitObj() == 0) goto L_3d54; */
        /* if (this->field_0x44 != 0) goto L_3d38; */
        return 0;
        /* L_3d38:; */
        /* if (this->field_0xc == 0) goto L_3d4c; */
        /* goto L_3d58; */
        /* L_3d4c:; */
        return -1;
        /* L_3d54:; */
        /* L_3d58:; */
        return -1;
}

/* 00003E64-00003F50       .text chk_areaIn__11daNpc_Ko1_cFf4cXyz */
void daNpc_Ko1_c::chk_areaIn(float, cXyz) {
    __mi();
    PSVECSquareMag();
    if (/* ble */ 1) {
    }
}

/* 00003F50-00003FF0       .text setPrtcl_Hamon__11daNpc_Ko1_cFff */
void daNpc_Ko1_c::setPrtcl_Hamon(float, float) {
    ((dPa_rippleEcallBack*)((this + 2168)))->end();
    /* field_0x88c = ((dPa_control_c*)(this->field_0x5ab8))->set(5, 51, (this + 504), 0); */
    if (this->field_0x88c != 0) {
        /* field_0x888 = farg1; */
    }
    /* return ((dPa_control_c*)(this->field_0x5ab8))->set(5, 51, (this + 504), 0); */
}

/* 00003FF0-000040F8       .text setPrtcl_HanaPachi__11daNpc_Ko1_cFv */
void daNpc_Ko1_c::setPrtcl_HanaPachi() {
    /* PSMTXCopy((this->field_0x8c + ((m6D1 & 255) * 48)), ((char*)&now__14mDoMtx_stack_c + 0), arg2, arg3, arg4, arg5, arg6, arg7); */
    /* field_0x890 = ((dPa_control_c*)(this->field_0x5ab8))->set(0); */
    /* field_0x894 = ((dPa_control_c*)(this->field_0x5ab8))->set(0); */
    /* return ((dPa_control_c*)(this->field_0x5ab8))->set(0); */
}

/* 000040F8-0000420C       .text charDecide__11daNpc_Ko1_cFi */
void daNpc_Ko1_c::charDecide(int) {
        /* field_0x8a6 = -1; */
        /* field_0x8a7 = -1; */
        /* if (this->field_0x8 == 322) goto L_4098; */
        /* if (/ * bge * / 1) goto L_4100; */
        /* if (this->field_0x8 >= 321) goto L_4024; */
        /* goto L_4100; */
        /* L_4024:; */
        /* field_0x8a6 = 0; */
        /* if (int == 2) goto L_406c; */
        /* if (/ * bge * / 1) goto L_4048; */
        /* if (int == 0) goto L_4058; */
        /* if (/ * bge * / 1) goto L_4060; */
        /* goto L_4090; */
        /* L_4048:; */
        /* if (int == 4) goto L_4084; */
        /* if (/ * bge * / 1) goto L_4090; */
        /* goto L_4078; */
        /* L_4058:; */
        /* field_0x8a7 = 0; */
        /* goto L_4108; */
        /* L_4060:; */
        /* field_0x8a7 = 1; */
        /* goto L_4108; */
        /* L_406c:; */
        /* field_0x8a7 = 2; */
        /* goto L_4108; */
        /* L_4078:; */
        /* field_0x8a7 = 3; */
        /* goto L_4108; */
        /* L_4084:; */
        /* field_0x8a7 = 4; */
        /* goto L_4108; */
        /* L_4090:; */
        return 0;
}

/* 0000420C-00004264       .text event_actionInit__11daNpc_Ko1_cFi */
void daNpc_Ko1_c::event_actionInit(int) {
    /* if (((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMySubstanceP(int, ((char*)&@stringBase0 + 66), 3, arg4) != 0) { */
    /* return ((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMySubstanceP(int, ((char*)&@stringBase0 + 66), 3, arg4); */

/* 00004264-00004274       .text event_action__11daNpc_Ko1_cFv */
void daNpc_Ko1_c::event_action() {
    /* return *(u8*)(this+2203) != 0; */
}

/* 00004274-00004360       .text privateCut__11daNpc_Ko1_cFi */
void daNpc_Ko1_c::privateCut(int) {
        /* _savegpr_29(this, int, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* if (/ * beq * / 1) goto L_424c; */
        /* field_0x89a = ((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMyActIdx(); */
        /* if ((this->field_0x89a & 255) != -1) goto L_41e8; */
        ((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->cutEnd();
        /* goto L_424c; */
        /* L_41e8:; */
        /* if (((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getIsAddvance() == 0) goto L_4218; */
        /* if (this->field_0x89a == 0) goto L_420c; */
        /* goto L_4218; */
        /* L_420c:; */
        /* ((daNpc_Ko1_c*)(_savegpr_29(this, int, arg2, arg3, arg4, arg5, arg6, arg7)))->event_actionInit(); */
        /* L_4218:; */
        /* if (this->field_0x89a == 0) goto L_4228; */
        /* goto L_4234; */
        /* L_4228:; */
        /* ((daNpc_Ko1_c*)(_savegpr_29(this, int, arg2, arg3, arg4, arg5, arg6, arg7)))->event_action(); */
        /* goto L_4238; */
        /* L_4234:; */
        /* L_4238:; */
        /* if (1 == 0) goto L_424c; */
        /* L_424c:; */
        return _restgpr_29(((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->cutEnd());
}

/* 00004360-00004384       .text endEvent__11daNpc_Ko1_cFv */
void daNpc_Ko1_c::endEvent() {
    /* field_0x89c = 255; */
    /* field_0x89d = 255; */
    return this;
}

/* 00004384-000043BC       .text isEventEntry__11daNpc_Ko1_cFv */
void daNpc_Ko1_c::isEventEntry() {
    /* return ((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMyStaffId(this->field_0x748, 0, 0, arg4); */
}

/* 000043BC-00004414       .text event_proc__11daNpc_Ko1_cFi */
void daNpc_Ko1_c::event_proc(int) {
    if (((dNpc_EventCut_c*)((this + 1864)))->cutProc() != 0) {
        privateCut(int);
    }
    return lookBack();
}

/* 00004414-000044C0       .text set_action__11daNpc_Ko1_cFM11daNpc_Ko1_cFPCvPvPv_iPv */
void daNpc_Ko1_c::set_action(int (daNpc_Ko1_c::*)(void*), void*) {
        /* if (__ptmf_cmpr((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1840)) == 0) goto L_43a8; */
        /* if (__ptmf_test((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1840)) == 0) goto L_4374; */
        /* field_0x8a8 = 9; */
        /* __ptmf_scall(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* L_4374:; */
        /* field_0x8a8 = 0; */
        /* __ptmf_scall(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* L_43a8:; */
        return _restgpr_29(1);
}

/* 000044C0-000044E8       .text clrSpd__11daNpc_Ko1_cFv */
void daNpc_Ko1_c::clrSpd() {
    /* field_0x82c = 0; */
    /* field_0x834 = 0; */
    /* field_0x224 = 0; */
    speedF = 0;
    gravity = 0;
    return this;
}

/* 000044E8-00004B18       .text setStt__11daNpc_Ko1_cFSc */
void daNpc_Ko1_c::setStt(signed char) {
        /* ((daNpc_Ko1_c*)(_savegpr_27(this, char, arg2, arg3, arg4, arg5, arg6, arg7)))->searchByID(this->field_0x7b4); */
        /* field_0x84e = 0; */
        /* if ((this->field_0x8a3 & 255) > 29) goto L_49fc; */
        /* if ((this->field_0x8a3 & 255) == 2) goto L_4490; */
        /* if (/ * bge * / 1) goto L_44a4; */
        /* if ((this->field_0x8a3 & 255) >= 1) goto L_446c; */
        /* goto L_44a4; */
        /* L_446c:; */
        cM_rndF((C_@6033 + 0));
        /* goto L_44a4; */
        /* L_4490:; */
        /* field_0x854 = ((base & 1073741823) + 1); */
        /* L_44a4:; */
        /* if ((this->field_0x8a3 & 255) == 3) goto L_44d0; */
        /* field_0x8a5 = 3; */
        /* field_0x29a = 1; */
        /* field_0x876 = 0; */
        /* L_44d0:; */
        /* field_0x8a2 = 0; */
        /* field_0x898 = 0; */
        /* ((daNpc_Ko1_c*)(_savegpr_27(this, char, arg2, arg3, arg4, arg5, arg6, arg7)))->clrSpd(); */
        /* goto L_49fc; */
        /* field_0x8a5 = 1; */
        /* field_0x29a = 1; */
        /* ((daNpc_Ko1_c*)(_savegpr_27(this, char, arg2, arg3, arg4, arg5, arg6, arg7)))->clrSpd(); */
        /* field_0x89c = 255; */
        /* field_0x89d = 255; */
        /* goto L_49fc; */
        /* if (/ * beq * / 1) goto L_4558; */
        /* if (/ * bge * / 1) goto L_4584; */
        /* if (/ * beq * / 1) goto L_4534; */
        /* goto L_4584; */
        /* L_4534:; */
        /* cM_rndF(((daNpc_Ko1_c*)(_savegpr_27(this, char, arg2, arg3, arg4, arg5, arg6, arg7)))->clrSpd()); */
        /* goto L_4584; */
        /* L_4558:; */
        /* if (this->field_0x744 == 0) goto L_4584; */
        /* ((dNpc_PathRun_c*)((_savegpr_27(this, char, arg2, arg3, arg4, arg5, arg6, arg7) + 1852)))->setInfDrct(this->field_0x744); */
        /* ((dNpc_PathRun_c*)((_savegpr_27(this, char, arg2, arg3, arg4, arg5, arg6, arg7) + 1852)))->setNearPathIndx((_savegpr_27(this, char, arg2, arg3, arg4, arg5, arg6, arg7) + 504)); */
        /* field_0x744 = 0; */
        /* L_4584:; */
        /* getPoint((_savegpr_27(this, char, arg2, arg3, arg4, arg5, arg6, arg7) + 1852)); */
        /* field_0x7f4 = 0; */
        /* field_0x7f8 = 0; */
        /* field_0x7fc = 0; */
        /* field_0x8a5 = 0; */
        /* field_0x876 = 1; */
        /* field_0x8a2 = 0; */
        /* field_0x898 = 1; */
        /* field_0x86b = 0; */
        /* goto L_480c; */
        /* ((daNpc_Ko1_c*)(_savegpr_27(this, char, arg2, arg3, arg4, arg5, arg6, arg7)))->clrSpd(); */
        /* goto L_49fc; */
        /* if (/ * beq * / 1) goto L_45f4; */
        /* goto L_4610; */
        /* L_45f4:; */
        /* if (this->field_0x73c == 0) goto L_4610; */
        /* ((dNpc_PathRun_c*)((_savegpr_27(this, char, arg2, arg3, arg4, arg5, arg6, arg7) + 1852)))->setInfDrct(0); */
        /* L_4610:; */
        /* field_0x7f4 = 0; */
        /* field_0x7f8 = 0; */
        /* field_0x7fc = 0; */
        /* field_0x8a5 = 1; */
        /* field_0x876 = 1; */
        /* field_0x8a2 = 0; */
        /* field_0x898 = 2; */
        /* field_0x86b = 0; */
        /* goto L_4900; */
        /* if (this->field_0x73c == 0) goto L_4674; */
        /* ((dNpc_PathRun_c*)((_savegpr_27(this, char, arg2, arg3, arg4, arg5, arg6, arg7) + 1852)))->setInfDrct(0); */
        /* L_4674:; */
        /* field_0x7f4 = 0; */
        /* field_0x7f8 = 0; */
        /* field_0x7fc = 0; */
        /* field_0x8a5 = 1; */
        /* field_0x876 = 1; */
        /* goto L_470c; */
        /* if (this->field_0x744 == 0) goto L_46d4; */
        /* ((dNpc_PathRun_c*)((_savegpr_27(this, char, arg2, arg3, arg4, arg5, arg6, arg7) + 1852)))->setInfDrct(this->field_0x744); */
        /* ((dNpc_PathRun_c*)((_savegpr_27(this, char, arg2, arg3, arg4, arg5, arg6, arg7) + 1852)))->setNearPathIndx((_savegpr_27(this, char, arg2, arg3, arg4, arg5, arg6, arg7) + 504)); */
        /* field_0x744 = 0; */
        /* L_46d4:; */
        /* getPoint((_savegpr_27(this, char, arg2, arg3, arg4, arg5, arg6, arg7) + 1852)); */
        /* field_0x7f4 = 0; */
        /* field_0x7f8 = 0; */
        /* field_0x7fc = 0; */
        /* field_0x8a5 = 0; */
        /* field_0x876 = 1; */
        /* L_470c:; */
        /* field_0x8a2 = 0; */
        /* field_0x898 = 3; */
        /* field_0x86b = 0; */
        /* field_0x830 = 0; */
        /* field_0x224 = 0; */
        speedF = 0;
        /* field_0x834 = 0; */
        /* field_0x82c = 0; */
        gravity = 0;
        /* field_0x83c = 0; */
        /* goto L_49fc; */
        /* field_0x8a5 = 0; */
        /* field_0x876 = 0; */
        /* field_0x8a2 = 0; */
        /* field_0x898 = 4; */
        /* field_0x86c = 1; */
        /* field_0x224 = 0; */
        speedF = 0;
        gravity = 0;
        /* field_0x834 = 0; */
        /* goto L_49fc; */
        /* field_0x8a5 = 1; */
        /* field_0x876 = 0; */
        /* field_0x8a2 = 0; */
        /* field_0x898 = 0; */
        /* ((daNpc_Ko1_c*)(_savegpr_27(this, char, arg2, arg3, arg4, arg5, arg6, arg7)))->clrSpd(); */
        /* goto L_49fc; */
        /* field_0x7f4 = 0; */
        /* field_0x7f8 = 0; */
        /* field_0x7fc = 0; */
        /* field_0x8a5 = 0; */
        /* field_0x876 = 1; */
        /* field_0x8a2 = 0; */
        /* field_0x898 = 1; */
        /* field_0x86b = 0; */
        /* L_480c:; */
        gravity = 0;
        /* field_0x82c = 0; */
        /* field_0x834 = 0; */
        /* field_0x83c = 0; */
        /* goto L_49fc; */
        /* if (((daNpc_Ko1_c*)(_savegpr_27(this, char, arg2, arg3, arg4, arg5, arg6, arg7)))->searchByID(this->field_0x7b4) != 0) goto L_48a8; */
        ((JUTAssertion*)(((JUTAssertion*)((((char*)&l_HIO + 0) + ((this->field_0x8a6 & 255) * 96))))->getSDevice()))->showAssert(((char*)&@stringBase0 + 11), 2675, ((char*)&@stringBase0 + 79));
        OSPanic(((char*)&@stringBase0 + 11), 2675, ((char*)&@stringBase0 + 48));
        /* L_48a8:; */
        /* field_0x7f4 = 0; */
        /* field_0x7f8 = 0; */
        /* field_0x7fc = 0; */
        /* field_0x8a5 = 2; */
        m7E8 = 0;
        /* field_0x7ec = 0; */
        /* field_0x7f0 = 0; */
        /* field_0x7ec = 0; */
        /* field_0x876 = 1; */
        /* field_0x8a2 = 0; */
        /* field_0x898 = 2; */
        /* field_0x86b = 0; */
        /* L_4900:; */
        gravity = 0;
        /* field_0x82c = 0; */
        /* field_0x834 = 0; */
        /* field_0x83c = 0; */
        /* goto L_49fc; */
        /* if (((daNpc_Ko1_c*)(_savegpr_27(this, char, arg2, arg3, arg4, arg5, arg6, arg7)))->searchByID(this->field_0x7b4) == 0) goto L_4990; */
        /* field_0x8a5 = 2; */
        m7E8 = 0;
        /* field_0x7ec = 0; */
        /* field_0x7f0 = 0; */
        /* field_0x7ec = 0; */
        /* goto L_4994; */
        /* L_4990:; */
        /* field_0x8a5 = 0; */
        /* L_4994:; */
        /* field_0x876 = 0; */
        /* field_0x8a2 = 0; */
        /* field_0x898 = 0; */
        /* ((daNpc_Ko1_c*)(_savegpr_27(this, char, arg2, arg3, arg4, arg5, arg6, arg7)))->clrSpd(); */
        /* goto L_49fc; */
        /* field_0x89c = 255; */
        /* field_0x89d = 255; */
        /* goto L_49fc; */
        /* cM_rndF(((daNpc_Ko1_c*)(_savegpr_27(this, char, arg2, arg3, arg4, arg5, arg6, arg7)))->clrSpd()); */
        /* field_0x854 = cLib_getRndValue<i>__Fii(3, 10); */
        /* field_0x865 = 0; */
        /* L_49fc:; */
        /* return _restgpr_27(((daNpc_Ko1_c*)(_savegpr_27(this, char, arg2, arg3, arg4, arg5, arg6, arg7)))->setAnm()); */
}

/* 00004B18-00004C70       .text wait_1__11daNpc_Ko1_cFv */
void daNpc_Ko1_c::wait_1() {
        /* if (this->field_0x875 == 0) goto L_4a5c; */
        /* if (chk_talk() == 0) goto L_4a54; */
        setStt(3);
        /* L_4a54:; */
        return 1;
        /* L_4a5c:; */
        /* field_0x8a2 = 2; */
        /* field_0x8a5 = 3; */
        /* if (this->field_0x89f != 6) goto L_4b00; */
        /* if (this->field_0x860 == 0) goto L_4a94; */
        cLib_calcTimer<s>__FPs((this + 2132));
        /* L_4a94:; */
        /* if (this->field_0x854 == 0) goto L_4aac; */
        /* if (this->field_0x874 == 0) goto L_4af8; */
        /* L_4aac:; */
        /* field_0x854 = ((base & 1073741823) + 1); */
        cM_rndF(C_@6028);
        setAnm_NUM(0, 1);
        /* L_4af8:; */
        return 1;
        /* L_4b00:; */
        /* if (this->field_0x874 == 0) goto L_4b14; */
        /* field_0x84e = 60; */
        /* L_4b14:; */
        /* if (cLib_calcTimer<s>__FPs((this + 2126)) == 0) goto L_4b34; */
        /* field_0x8a5 = 1; */
        return 1;
        /* L_4b34:; */
        /* if (cLib_calcTimer<s>__FPs((this + 2130)) != 0) goto L_4b54; */
        setAnm_NUM(6, 1);
        /* L_4b54:; */
        /* field_0x29a = 1; */
        return 1;
}

/* 00004C70-00004CE8       .text wait_2__11daNpc_Ko1_cFv */
void daNpc_Ko1_c::wait_2() {
        /* if (this->field_0x860 == 0) goto L_4bd4; */
        /* cLib_calcTimer<s>__FPs((this + 2132), arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* if (this->field_0x854 == 0) goto L_4bc0; */
        /* if (this->field_0x874 != 0) goto L_4bc0; */
        /* if (this->field_0x875 == 0) goto L_4bd4; */
        /* L_4bc0:; */
        setStt(1);
        return 1;
        /* L_4bd4:; */
        return 1;
}

/* 00004CE8-00004D1C       .text wait_3__11daNpc_Ko1_cFv */
void daNpc_Ko1_c::wait_3() {
    if (this->field_0x860 == 0) {
        /* setStt(4, arg2, arg3, arg4, arg5, arg6, arg7); */
    }
    return 1;
}

/* 00004D1C-00004E64       .text wait_4__11daNpc_Ko1_cFv */
void daNpc_Ko1_c::wait_4() {
        /* if (this->field_0x875 == 0) goto L_4c60; */
        /* if (chk_talk() == 0) goto L_4c58; */
        setStt(3);
        /* L_4c58:; */
        return 1;
        /* L_4c60:; */
        /* if (((daNpc_Ko1_c*)(1))->chk_start_swim() == 0) goto L_4c80; */
        setStt(7);
        return 1;
        /* L_4c80:; */
        chk_areaIn();
        /* if (/ * beq * / 1) goto L_4d48; */
        chk_areaIn();
        /* if (/ * beq * / 1) goto L_4d34; */
        setStt(11);
        return 1;
        /* L_4d34:; */
        setStt(6);
        return 1;
        /* L_4d48:; */
        /* field_0x8a2 = 2; */
        return 1;
}

/* 00004E64-00004F30       .text wait_5__11daNpc_Ko1_cFSc */
void daNpc_Ko1_c::wait_5(signed char) {
    if (this->field_0x6bc == 1) {
        /* field_0x6bc = 2; */
        /* setStt(20, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* field_0x8a5 = 1; */
        /* field_0x876 = 0; */
        /* field_0x8a2 = 0; */
        /* field_0x898 = 0; */
        clrSpd();
        return 1;
    }
    if (((daNpc_Ko1_c*)(1))->chk_areaIn() == 0) {
        setStt(char);
    }
    return 1;
}

/* 00004F30-00005088       .text wait_6__11daNpc_Ko1_cFv */
void daNpc_Ko1_c::wait_6() {
        /* if (this->field_0x875 == 0) goto L_4e84; */
        /* if (chk_talk() == 0) goto L_4e7c; */
        /* if (chk_manzai_1() == 0) goto L_4e7c; */
        setStt(3);
        /* L_4e7c:; */
        return 1;
        /* L_4e84:; */
        /* if (this->field_0x6bc != 1) goto L_4ea8; */
        /* field_0x6bc = 2; */
        ((daNpc_Ko1_c*)(1))->setStt(20);
        return 1;
        /* L_4ea8:; */
        ((daNpc_Ko1_c*)(1))->chk_areaIn();
        /* if (/ * beq * / 1) goto L_4f6c; */
        chk_areaIn();
        /* if (/ * beq * / 1) goto L_4f58; */
        setStt(15);
        return 1;
        /* L_4f58:; */
        setStt(13);
        return 1;
        /* L_4f6c:; */
        /* field_0x8a2 = 2; */
        return 1;
}

/* 00005088-000052D4       .text wait_7__11daNpc_Ko1_cFv */
void daNpc_Ko1_c::wait_7() {
        /* ((daNpc_Ko1_c*)(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->searchByID(this->field_0x7b4); */
        /* if (/ * bne * / 1) goto L_4ff4; */
        /* ((JUTAssertion*)(((JUTAssertion*)(((daNpc_Ko1_c*)(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->searchByID(this->field_0x7b4)))->getSDevice()))->showAssert(((char*)&@stringBase0 + 11), 2923, ((char*)&@stringBase0 + 79)); */
        OSPanic(((char*)&@stringBase0 + 11), 2923, ((char*)&@stringBase0 + 48));
        /* L_4ff4:; */
        /* if (this->field_0x875 == 0) goto L_5034; */
        /* if (((daNpc_Ko1_c*)(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->chk_talk() == 0) goto L_502c; */
        /* if (((daNpc_Ko1_c*)(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->chk_manzai_1() == 0) goto L_502c; */
        /* ((daNpc_Ko1_c*)(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->setStt(3); */
        /* L_502c:; */
        return 1;
        /* L_5034:; */
        /* if (this->field_0x6bc != 1) goto L_507c; */
        /* field_0x6bc = 2; */
        /* ((daNpc_Ko1_c*)(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->setStt(20); */
        /* field_0x8a5 = 1; */
        /* field_0x876 = 0; */
        /* field_0x8a2 = 0; */
        /* field_0x898 = 0; */
        /* ((daNpc_Ko1_c*)(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->clrSpd(); */
        return 1;
        /* L_507c:; */
        /* if (((daNpc_Ko1_c*)(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->chk_areaIn() == 0) goto L_50d0; */
        /* field_0x8a5 = 1; */
        /* goto L_50f8; */
        /* L_50d0:; */
        /* field_0x8a5 = 2; */
        m7E8 = 0;
        /* field_0x7ec = 0; */
        /* field_0x7f0 = 0; */
        /* field_0x7ec = 0; */
        /* L_50f8:; */
        __mi();
        PSVECSquareMag();
        /* if (/ * ble * / 1) goto L_518c; */
        /* L_518c:; */
        /* if (this->field_0x8 >= this->field_0x8) goto L_51b0; */
        /* field_0x8a2 = 2; */
        /* goto L_51bc; */
        /* L_51b0:; */
        /* ((daNpc_Ko1_c*)(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->setStt(17); */
        /* L_51bc:; */
        return _restgpr_28(1);
}

/* 000052D4-000053F8       .text wait_9__11daNpc_Ko1_cFv */
void daNpc_Ko1_c::wait_9() {
        /* if (this->field_0x875 == 0) goto L_5218; */
        /* if (chk_talk() == 0) goto L_5210; */
        setStt(3);
        /* L_5210:; */
        return 1;
        /* L_5218:; */
        ((daNpc_Ko1_c*)(1))->chk_areaIn();
        /* if (/ * beq * / 1) goto L_52dc; */
        chk_areaIn();
        /* if (/ * beq * / 1) goto L_52c8; */
        setStt(24);
        return 1;
        /* L_52c8:; */
        setStt(23);
        return 1;
        /* L_52dc:; */
        /* field_0x8a2 = 2; */
        return 1;
}

/* 000053F8-00005524       .text wait_a__11daNpc_Ko1_cFv */
void daNpc_Ko1_c::wait_a() {
        /* if (searchByID(this->field_0x7b4) != 0) goto L_5358; */
        /* ((JUTAssertion*)(((JUTAssertion*)(searchByID(this->field_0x7b4)))->getSDevice()))->showAssert(((char*)&@stringBase0 + 11), 3011, ((char*)&@stringBase0 + 79)); */
        OSPanic(((char*)&@stringBase0 + 11), 3011, ((char*)&@stringBase0 + 48));
        /* L_5358:; */
        /* if (this->field_0x875 == 0) goto L_5398; */
        /* if (chk_talk() == 0) goto L_5390; */
        /* if (chk_manzai_1() == 0) goto L_5390; */
        setStt(3);
        /* L_5390:; */
        return 1;
        /* L_5398:; */
        /* if (this->field_0x6bc != 1) goto L_53c0; */
        /* field_0x6bc = 2; */
        setStt(20);
        return 1;
        /* L_53c0:; */
        /* field_0x8a2 = 2; */
        /* if (this->field_0x874 == 0) goto L_53dc; */
        /* field_0x84e = 60; */
        /* L_53dc:; */
        /* if (cLib_calcTimer<s>__FPs((this + 2126)) == 0) goto L_53f8; */
        /* field_0x8a5 = 1; */
        /* goto L_5410; */
        /* L_53f8:; */
        /* field_0x8a5 = 3; */
        /* field_0x29a = 1; */
        /* L_5410:; */
        return 1;
}

/* 00005524-000055F8       .text walk_1__11daNpc_Ko1_cFv */
void daNpc_Ko1_c::walk_1() {
    /* field_0x86b = 0; */
    getPoint((this + 1852));
    /* field_0x7f4 = 0; */
    /* field_0x7f8 = 0; */
    /* field_0x7fc = 0; */
    if (chk_areaIn() == 0) {
        setStt(6);
        return 1;
    }
    if (cLib_calcTimer<s>__FPs((this + 2130)) != 0) {
        setStt(5);
    }
    return 1;
}

/* 000055F8-000056D4       .text walk_2__11daNpc_Ko1_cFScSc */
void daNpc_Ko1_c::walk_2(signed char, signed char) {
    if (this->field_0x86b != 0) {
        /* setStt(char, char, arg3, arg4, arg5, arg6, arg7); */
        return 1;
    }
    if (this->field_0x6bc == 1) {
        ((daNpc_Ko1_c*)(1))->setStt(14);
        return 1;
    }
    if (((daNpc_Ko1_c*)(1))->chk_areaIn() == 0) {
        setStt(char);
        return 1;
    }
    /* field_0x7f4 = 0; */
    /* field_0x7f8 = 0; */
    /* field_0x7fc = 0; */
    return 1;
}

/* 000056D4-000057B8       .text walk_3__11daNpc_Ko1_cFv */
void daNpc_Ko1_c::walk_3() {
    if (this->field_0x86b != 0) {
        /* setStt(4, arg2, arg3, arg4, arg5, arg6, arg7); */
        return 1;
    }
    if (((daNpc_Ko1_c*)(1))->chk_areaIn() == 0) {
        setStt(6);
        return 1;
    }
    getPoint((this + 1852));
    /* field_0x7f4 = 0; */
    /* field_0x7f8 = 0; */
    /* field_0x7fc = 0; */
    if (chk_start_swim() == 0) {
        setStt(8);
    }
    return 1;
}

/* 000057B8-000058EC       .text swim_1__11daNpc_Ko1_cFv */
void daNpc_Ko1_c::swim_1() {
    /* if ((this->field_0x4f0 - this->field_0x1fc) > this->field_0x14c) { */
        /* field_0x830 = 0; */
        /* if (this->field_0x86b == 0) goto L_5724; */
        /* speedF = 0; */
    /* } else { */
        /* if ((this->field_0x4f0 - this->field_0x1fc) < this->field_0x154) goto L_5724; */
        /* field_0x830 = 0; */
    /* } */
    /* L_5724:; */
    /* if (chk_start_swim() != 0) { */
        /* setStt(6); */
        /* return 1; */
    /* } */
    /* chk_areaIn(); */
    /* if (/ * beq * / 1) { */
        /* setStt(8); */
        /* return 1; */
    /* } */
    /* field_0x86b = 0; */
    /* field_0x7f4 = 0; */
    /* field_0x7f8 = 0; */
    /* field_0x7fc = 0; */
    /* return 1; */

/* 000058EC-00005A1C       .text swim_2__11daNpc_Ko1_cFv */
void daNpc_Ko1_c::swim_2() {
    /* if ((this->field_0x4f0 - this->field_0x1fc) > this->field_0x14c) { */
        /* field_0x830 = 0; */
        /* if (this->field_0x86b == 0) goto L_5858; */
        /* speedF = 0; */
    /* } else { */
        /* if ((this->field_0x4f0 - this->field_0x1fc) < this->field_0x154) goto L_5858; */
        /* field_0x830 = 0; */
    /* } */
    /* L_5858:; */
    /* if (chk_start_swim() != 0) { */
        /* setStt(11); */
        /* return 1; */
    /* } */
    /* if (chk_areaIn() == 0) { */
        /* setStt(7); */
        /* return 1; */
    /* } */
    /* field_0x86b = 0; */
    /* getPoint((this + 1852)); */
    /* field_0x7f4 = 0; */
    /* field_0x7f8 = 0; */
    /* field_0x7fc = 0; */
    /* return 1; */

/* 00005A1C-00005B64       .text attk_1__11daNpc_Ko1_cFv */
void daNpc_Ko1_c::attk_1() {
    /* field_0x86b = 0; */
    /* field_0x7c0 = get_crsActorID(); */
    if (0 != 65535) {
        /* if (searchByID(this->field_0x7c0) != 0) goto L_5984; */
        /* if (this->field_0x8 == 169) goto L_5984; */
        setStt(9);
        return 1;
    }
    /* L_5984:; */
    chk_areaIn();
    if (/* beq */ 1) {
        setStt(11);
        return 1;
    }
    set_tgtPos(this);
    /* field_0x7f4 = 0; */
    /* field_0x7f8 = 0; */
    /* field_0x7fc = 0; */
    if (chk_start_swim() == 0) {
        setStt(7);
    }
    return 1;
}

/* 00005B64-00005C94       .text attk_2__11daNpc_Ko1_cFScSc */
void daNpc_Ko1_c::attk_2(signed char, signed char) {
    /* _savegpr_29(this, char, char, arg3, arg4, arg5, arg6, arg7); */
    /* field_0x86b = 0; */
    if (this->field_0x6bc == 1) {
        /* ((daNpc_Ko1_c*)(_savegpr_29(this, char, char, arg3, arg4, arg5, arg6, arg7)))->setStt(14); */
        return 1;
    }
    /* field_0x7c0 = ((daNpc_Ko1_c*)(1))->get_crsActorID(); */
    if (this->field_0x6bc != 65535) {
        /* if (((daNpc_Ko1_c*)(_savegpr_29(this, char, char, arg3, arg4, arg5, arg6, arg7)))->searchByID(this->field_0x7c0) != 0) goto L_5af4; */
        /* if (this->field_0x8 == 169) goto L_5af4; */
        /* ((daNpc_Ko1_c*)(_savegpr_29(this, char, char, arg3, arg4, arg5, arg6, arg7)))->setStt(); */
        return 1;
    }
    /* L_5af4:; */
    /* ((daNpc_Ko1_c*)(_savegpr_29(this, char, char, arg3, arg4, arg5, arg6, arg7)))->chk_areaIn(); */
    if (/* beq */ 1) {
        /* ((daNpc_Ko1_c*)(_savegpr_29(this, char, char, arg3, arg4, arg5, arg6, arg7)))->setStt(); */
        return 1;
    }
    /* field_0x7f4 = 0; */
    /* field_0x7f8 = 0; */
    /* field_0x7fc = 0; */
    return _restgpr_29(1);
}

/* 00005C94-00005DEC       .text attk_3__11daNpc_Ko1_cFv */
void daNpc_Ko1_c::attk_3() {
        /* searchByID(this->field_0x7b4); */
        /* if (/ * bne * / 1) goto L_5bf8; */
        /* ((JUTAssertion*)(((JUTAssertion*)(searchByID(this->field_0x7b4)))->getSDevice()))->showAssert(((char*)&@stringBase0 + 11), 3282, ((char*)&@stringBase0 + 79)); */
        OSPanic(((char*)&@stringBase0 + 11), 3282, ((char*)&@stringBase0 + 48));
        /* L_5bf8:; */
        /* field_0x86b = 0; */
        /* if (this->field_0x6bc != 1) goto L_5c20; */
        setStt(19);
        return 1;
        /* L_5c20:; */
        /* field_0x7c0 = get_crsActorID(); */
        /* if (this->field_0x6bc == 65535) goto L_5c74; */
        /* if (searchByID(this->field_0x7c0) == 0) goto L_5c74; */
        /* if (this->field_0x8 == 322) goto L_5c60; */
        /* if (this->field_0x8 != 169) goto L_5c74; */
        /* L_5c60:; */
        setStt(18);
        return 1;
        /* L_5c74:; */
        set_tgtPos(this);
        /* field_0x7f4 = 0; */
        /* field_0x7f8 = 0; */
        /* field_0x7fc = 0; */
        m7E8 = 0;
        /* field_0x7ec = 0; */
        /* field_0x7f0 = 0; */
        /* field_0x7ec = 0; */
        return 1;
}

/* 00005DEC-00005E1C       .text down_1__11daNpc_Ko1_cFSc */
void daNpc_Ko1_c::down_1(signed char) {
    if (this->field_0x86b != 0) {
        /* setStt(char, arg2, arg3, arg4, arg5, arg6, arg7); */
    }
    return 1;
}

/* 00005E1C-0000609C       .text talk_1__11daNpc_Ko1_cFv */
void daNpc_Ko1_c::talk_1() {
        /* ((daNpc_Ko1_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->chk_partsNotMove(); */
        /* if (this->field_0x6b0 == 0) goto L_5d58; */
        /* goto L_5d60; */
        /* L_5d58:; */
        /* field_0x6b8 = 0; */
        /* L_5d60:; */
        /* if (this->field_0x6bc != 2) goto L_5db8; */
        /* if (this->field_0x6bc != 65535) goto L_5db8; */
        /* field_0x6a4 = _savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* field_0x6ac = fopMsgM_messageSet(this->field_0x6a4, this->field_0x5c1c); */
        /* field_0x6b0 = 0; */
        /* goto L_5dcc; */
        /* L_5db8:; */
        /* field_0x848 = -1; */
        /* ((fopNpc_npc_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->talk(1); */
        /* L_5dcc:; */
        /* if (this->field_0x6b0 == 0) goto L_5f84; */
        /* if (this->field_0xf8 == 6) goto L_5f84; */
        /* if (/ * bge * / 1) goto L_5df4; */
        /* if (this->field_0xf8 == 2) goto L_5f84; */
        /* goto L_5f84; */
        /* L_5df4:; */
        /* if (this->field_0xf8 == 19) goto L_5e00; */
        /* goto L_5f84; */
        /* L_5e00:; */
        /* if (this->field_0x6a4 == 2901) goto L_5ea0; */
        /* if (/ * bge * / 1) goto L_5e34; */
        /* if (this->field_0x6a4 == 2815) goto L_5e70; */
        /* if (/ * bge * / 1) goto L_5e28; */
        /* if (this->field_0x6a4 == 2801) goto L_5e58; */
        /* goto L_5f14; */
        /* L_5e28:; */
        /* if (this->field_0x6a4 == 2822) goto L_5e88; */
        /* goto L_5f14; */
        /* L_5e34:; */
        /* if (this->field_0x6a4 == 2914) goto L_5ee0; */
        /* if (/ * bge * / 1) goto L_5e4c; */
        /* if (this->field_0x6a4 == 2903) goto L_5eb8; */
        /* goto L_5f14; */
        /* L_5e4c:; */
        /* if (this->field_0x6a4 == 2916) goto L_5ef8; */
        /* goto L_5f14; */
        /* L_5e58:; */
        ((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->onEventBit(528);
        /* goto L_5f14; */
        /* L_5e70:; */
        ((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->onEventBit(14337);
        /* goto L_5f14; */
        /* L_5e88:; */
        ((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->onEventBit(13120);
        /* goto L_5f14; */
        /* L_5ea0:; */
        ((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->onEventBit(544);
        /* goto L_5f14; */
        /* L_5eb8:; */
        ((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->onEventBit(520);
        ((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->onEventBit(576);
        /* goto L_5f14; */
        /* L_5ee0:; */
        ((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->onEventBit(12545);
        /* goto L_5f14; */
        /* L_5ef8:; */
        ((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->onEventBit(11268);
        /* field_0x86d = 1; */
        /* L_5f14:; */
        /* field_0x863 = 255; */
        /* field_0x875 = 0; */
        /* if ((this->field_0x8a7 & 255) == 3) goto L_5f58; */
        /* if (/ * bge * / 1) goto L_5f44; */
        /* if ((this->field_0x8a7 & 255) == 1) goto L_5f58; */
        /* goto L_5f68; */
        /* L_5f44:; */
        /* if ((this->field_0x8a7 & 255) >= 8) goto L_5f68; */
        /* if ((this->field_0x8a7 & 255) >= 6) goto L_5f58; */
        /* goto L_5f68; */
        /* L_5f58:; */
        /* ((daNpc_Ko1_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->setStt(21); */
        /* goto L_5f84; */
        /* L_5f68:; */
        /* ((daNpc_Ko1_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->setStt(this->field_0x8a4); */
        /* field_0x84e = 60; */
        /* ((daNpc_Ko1_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->endEvent(); */
        /* L_5f84:; */
        /* return _restgpr_29((((daNpc_Ko1_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->chk_partsNotMove() & 16777215)); */
}

/* 0000609C-00006184       .text talk_2__11daNpc_Ko1_cFv */
void daNpc_Ko1_c::talk_2() {
    /* _savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
    /* goto L_603c; */
    /* L_5fc8:; */
    /* ((daNpc_Ko1_c*)(_savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->searchByID(); */
    if (/* bne */ 1) {
        /* ((JUTAssertion*)(((JUTAssertion*)(((daNpc_Ko1_c*)(_savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->searchByID()))->getSDevice()))->showAssert(((char*)&@stringBase0 + 11), 3417, ((char*)&@stringBase0 + 53)); */
        OSPanic(((char*)&@stringBase0 + 11), 3417, ((char*)&@stringBase0 + 48));
    }
    if (this->field_0x6bc != 0) {
    }
    /* L_603c:; */
    /* if ((0 + 1) >= this->field_0x7bc) goto L_5fc8; */
    /* if ((0 + 1) == this->field_0x7bc) { */
        /* field_0x6bc = 0; */
        /* ((daNpc_Ko1_c*)(_savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->setStt(this->field_0x8a4); */
        /* ((daNpc_Ko1_c*)(_savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->endEvent(); */
    return _restgpr_27(1);
}

/* 00006184-000062B4       .text manzai__11daNpc_Ko1_cFv */
void daNpc_Ko1_c::manzai() {
        /* if (this->field_0x6bc == 3) goto L_6180; */
        /* if (/ * bge * / 1) goto L_619c; */
        /* if (this->field_0x6bc >= 2) goto L_60c8; */
        /* goto L_619c; */
        /* L_60c8:; */
        /* searchByID(this->field_0x6b4); */
        /* if (this == this->field_0x4) goto L_615c; */
        /* if (this->field_0x89c == 255) goto L_619c; */
        /* if ((this->field_0x8a7 & 255) == 1) goto L_6110; */
        /* if ((this->field_0x8a7 & 255) != 6) goto L_6120; */
        /* L_6110:; */
        /* field_0x8a5 = 1; */
        /* field_0x29a = 1; */
        /* goto L_6150; */
        /* L_6120:; */
        /* field_0x8a5 = 3; */
        /* field_0x29a = 1; */
        setAnm();
        /* field_0x8a3 = 20; */
        /* L_6150:; */
        /* field_0x89c = 255; */
        /* goto L_619c; */
        /* L_615c:; */
        /* goto L_619c; */
        /* L_6180:; */
        /* setStt(this->field_0x8a4); */
        /* field_0x6bc = 0; */
        /* L_619c:; */
        return 1;
}

/* 000062B4-00006358       .text neru_1__11daNpc_Ko1_cFv */
void daNpc_Ko1_c::neru_1() {
    /* if (cLib_calcTimer<s>__FPs((this + 2130), (C_@6522 + 0), arg2, arg3, arg4, arg5, arg6, arg7) != 0) { */
        /* setAnm_NUM(); */
        /* cM_rndF(C_@6029); */
    return 1;
}

/* 00006358-00006524       .text neru_2__11daNpc_Ko1_cFv */
void daNpc_Ko1_c::neru_2() {
        /* if (this->field_0x865 == 1) goto L_6340; */
        /* if (/ * bge * / 1) goto L_62b0; */
        /* if (this->field_0x865 >= 0) goto L_62bc; */
        /* goto L_640c; */
        /* L_62b0:; */
        /* if (this->field_0x865 >= 3) goto L_640c; */
        /* goto L_63d4; */
        /* L_62bc:; */
        /* if (cLib_calcTimer<s>__FPs((this + 2130), this->field_0x164, arg2, arg3, arg4, arg5, arg6, arg7) != 0) goto L_640c; */
        /* if (cLib_calcTimer<s>__FPs((this + 2132)) != 0) goto L_631c; */
        /* field_0x865 = 1; */
        setAnm_NUM();
        set_balloonAnm_NUM(1);
        /* field_0x854 = cLib_getRndValue<i>__Fii(3, 10); */
        /* L_631c:; */
        cM_rndF(cLib_getRndValue<i>__Fii(3, 10));
        /* goto L_640c; */
        /* L_6340:; */
        /* if (this->field_0x860 == 0) goto L_6370; */
        /* field_0x865 = 2; */
        ((daNpc_Ko1_c*)(cM_rndF(cLib_getRndValue<i>__Fii(3, 10))))->setAnm_NUM();
        /* goto L_640c; */
        /* L_6370:; */
        /* if (((J3DFrameCtrl*)((this->field_0x330 + 88)))->checkPass() == 0) goto L_640c; */
        setPrtcl_HanaPachi();
        ((JAIZelBasic*)(base))->seStart(22828, (this + 608), 0, dComIfGp_getReverb((this->field_0x20a & 255)), 0);
        /* goto L_640c; */
        /* L_63d4:; */
        /* if (this->field_0x860 == 0) goto L_640c; */
        /* field_0x865 = 0; */
        ((daNpc_Ko1_c*)(((JAIZelBasic*)(base))->seStart(22828, (this + 608), 0, dComIfGp_getReverb((this->field_0x20a & 255)), 0)))->setAnm_NUM();
        set_balloonAnm_NUM(0);
        /* L_640c:; */
        return 1;
}

/* 00006524-00006668       .text hana_action1__11daNpc_Ko1_cFPv */
void daNpc_Ko1_c::hana_action1(void*) {
        /* if ((this->field_0x8a8 & 255) >= 4) goto L_645c; */
        /* if ((this->field_0x8a8 & 255) == 0) goto L_6468; */
        /* if (/ * bge * / 1) goto L_6488; */
        /* goto L_6554; */
        /* L_645c:; */
        /* if ((this->field_0x8a8 & 255) == 9) goto L_6554; */
        /* goto L_6554; */
        /* L_6468:; */
        ko_setPthPos();
        setStt(4);
        /* field_0x8a8 = (this->field_0x8a8 + 1); */
        /* goto L_6554; */
        /* L_6488:; */
        /* field_0x874 = ((daNpc_Ko1_c*)(this->field_0x8a8))->chkAttention(); */
        /* if (((this->field_0x8a3 & 255) + -3) > 8) goto L_654c; */
        /* field_0x870 = walk_1(); */
        /* goto L_654c; */
        /* field_0x870 = walk_3(); */
        /* goto L_654c; */
        /* field_0x870 = wait_3(); */
        /* goto L_654c; */
        /* field_0x870 = wait_4(); */
        /* goto L_654c; */
        /* field_0x870 = attk_1(); */
        /* goto L_654c; */
        /* field_0x870 = swim_1(); */
        /* goto L_654c; */
        /* field_0x870 = swim_2(); */
        /* goto L_654c; */
        /* field_0x870 = down_1(10); */
        /* goto L_654c; */
        /* field_0x870 = talk_1(); */
        /* L_654c:; */
        lookBack();
        /* L_6554:; */
        return 1;
}

/* 00006668-00006774       .text hana_action2__11daNpc_Ko1_cFPv */
void daNpc_Ko1_c::hana_action2(void*) {
        /* if ((this->field_0x8a8 & 255) >= 4) goto L_65a0; */
        /* if ((this->field_0x8a8 & 255) == 0) goto L_65ac; */
        /* if (/ * bge * / 1) goto L_65c4; */
        /* goto L_6660; */
        /* L_65a0:; */
        /* if ((this->field_0x8a8 & 255) == 9) goto L_6660; */
        /* goto L_6660; */
        /* L_65ac:; */
        /* setStt(19, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* field_0x8a8 = (this->field_0x8a8 + 1); */
        /* goto L_6660; */
        /* L_65c4:; */
        /* field_0x874 = ((daNpc_Ko1_c*)(this->field_0x8a8))->chkAttention(); */
        /* if (((this->field_0x8a3 & 255) + -3) > 18) goto L_6658; */
        /* field_0x870 = wait_7(); */
        /* goto L_6658; */
        /* field_0x870 = attk_3(); */
        /* goto L_6658; */
        /* field_0x870 = down_1(19); */
        /* goto L_6658; */
        /* field_0x870 = talk_1(); */
        /* goto L_6658; */
        /* field_0x870 = talk_2(); */
        /* goto L_6658; */
        /* field_0x870 = manzai(); */
        /* L_6658:; */
        lookBack();
        /* L_6660:; */
        return 1;
}

/* 00006774-00006894       .text hana_action3__11daNpc_Ko1_cFPv */
void daNpc_Ko1_c::hana_action3(void*) {
        /* if ((this->field_0x8a8 & 255) >= 4) goto L_66ac; */
        /* if ((this->field_0x8a8 & 255) == 0) goto L_66b8; */
        /* if (/ * bge * / 1) goto L_66d0; */
        /* goto L_6780; */
        /* L_66ac:; */
        /* if ((this->field_0x8a8 & 255) == 9) goto L_6780; */
        /* goto L_6780; */
        /* L_66b8:; */
        /* setStt(22, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* field_0x8a8 = (this->field_0x8a8 + 1); */
        /* goto L_6780; */
        /* L_66d0:; */
        /* field_0x874 = ((daNpc_Ko1_c*)(this->field_0x8a8))->chkAttention(); */
        /* if (((this->field_0x8a3 & 255) + -3) > 23) goto L_6778; */
        /* field_0x870 = wait_5(23); */
        /* goto L_6778; */
        /* field_0x870 = attk_2(25, 24); */
        /* goto L_6778; */
        /* field_0x870 = walk_2(22, 23); */
        /* goto L_6778; */
        /* field_0x870 = wait_9(); */
        /* goto L_6778; */
        /* field_0x870 = down_1(26); */
        /* goto L_6778; */
        /* field_0x870 = talk_1(); */
        /* L_6778:; */
        lookBack();
        /* L_6780:; */
        return 1;
}

/* 00006894-00006988       .text hana_action4__11daNpc_Ko1_cFPv */
void daNpc_Ko1_c::hana_action4(void*) {
        /* if ((this->field_0x8a8 & 255) >= 4) goto L_67cc; */
        /* if ((this->field_0x8a8 & 255) == 0) goto L_67d8; */
        /* if (/ * bge * / 1) goto L_67f0; */
        /* goto L_6874; */
        /* L_67cc:; */
        /* if ((this->field_0x8a8 & 255) == 9) goto L_6874; */
        /* goto L_6874; */
        /* L_67d8:; */
        /* setStt(29, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* field_0x8a8 = (this->field_0x8a8 + 1); */
        /* goto L_6874; */
        /* L_67f0:; */
        /* field_0x874 = ((daNpc_Ko1_c*)(this->field_0x8a8))->chkAttention(); */
        /* if ((this->field_0x8a3 & 255) == 21) goto L_6850; */
        /* if (/ * bge * / 1) goto L_6824; */
        /* if ((this->field_0x8a3 & 255) == 3) goto L_6840; */
        /* if (/ * blt * / 1) goto L_686c; */
        /* if ((this->field_0x8a3 & 255) >= 20) goto L_6860; */
        /* goto L_686c; */
        /* L_6824:; */
        /* if ((this->field_0x8a3 & 255) == 29) goto L_6830; */
        /* goto L_686c; */
        /* L_6830:; */
        /* field_0x870 = wait_a(); */
        /* goto L_686c; */
        /* L_6840:; */
        /* field_0x870 = talk_1(); */
        /* goto L_686c; */
        /* L_6850:; */
        /* field_0x870 = talk_2(); */
        /* goto L_686c; */
        /* L_6860:; */
        /* field_0x870 = manzai(); */
        /* L_686c:; */
        lookBack();
        /* L_6874:; */
        return 1;
}

/* 00006988-00006A24       .text hana_action5__11daNpc_Ko1_cFPv */
void daNpc_Ko1_c::hana_action5(void*) {
        /* if ((this->field_0x8a8 & 255) >= 4) goto L_68c0; */
        /* if ((this->field_0x8a8 & 255) == 0) goto L_68cc; */
        /* if (/ * bge * / 1) goto L_68e4; */
        /* goto L_6910; */
        /* L_68c0:; */
        /* if ((this->field_0x8a8 & 255) == 9) goto L_6910; */
        /* goto L_6910; */
        /* L_68cc:; */
        /* setStt(28, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* field_0x8a8 = (this->field_0x8a8 + 1); */
        /* goto L_6910; */
        /* L_68e4:; */
        /* field_0x874 = ((daNpc_Ko1_c*)(this->field_0x8a8))->chkAttention(); */
        /* if (this->field_0x8a3 == 28) goto L_68fc; */
        /* goto L_6908; */
        /* L_68fc:; */
        /* field_0x870 = neru_2(); */
        /* L_6908:; */
        lookBack();
        /* L_6910:; */
        return 1;
}

/* 00006A24-00006B24       .text wait_action1__11daNpc_Ko1_cFPv */
void daNpc_Ko1_c::wait_action1(void*) {
        /* if ((this->field_0x8a8 & 255) >= 4) goto L_695c; */
        /* if ((this->field_0x8a8 & 255) == 0) goto L_6968; */
        /* if (/ * bge * / 1) goto L_6980; */
        /* goto L_6a10; */
        /* L_695c:; */
        /* if ((this->field_0x8a8 & 255) == 9) goto L_6a10; */
        /* goto L_6a10; */
        /* L_6968:; */
        /* setStt(1, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* field_0x8a8 = (this->field_0x8a8 + 1); */
        /* goto L_6a10; */
        /* L_6980:; */
        /* if (((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->isEventBit(260) != 0) goto L_69a4; */
        check_landOn();
        /* L_69a4:; */
        /* field_0x874 = chkAttention(); */
        /* if ((this->field_0x8a3 & 255) == 2) goto L_69ec; */
        /* if (/ * bge * / 1) goto L_69d0; */
        /* if ((this->field_0x8a3 & 255) >= 1) goto L_69dc; */
        /* goto L_6a08; */
        /* L_69d0:; */
        /* if ((this->field_0x8a3 & 255) >= 4) goto L_6a08; */
        /* goto L_69fc; */
        /* L_69dc:; */
        /* field_0x870 = wait_1(); */
        /* goto L_6a08; */
        /* L_69ec:; */
        /* field_0x870 = wait_2(); */
        /* goto L_6a08; */
        /* L_69fc:; */
        /* field_0x870 = talk_1(); */
        /* L_6a08:; */
        lookBack();
        /* L_6a10:; */
        return 1;
}

/* 00006B24-00006C64       .text wait_action2__11daNpc_Ko1_cFPv */
void daNpc_Ko1_c::wait_action2(void*) {
        /* if ((this->field_0x8a8 & 255) >= 4) goto L_6a5c; */
        /* if ((this->field_0x8a8 & 255) == 0) goto L_6a68; */
        /* if (/ * bge * / 1) goto L_6a80; */
        /* goto L_6b50; */
        /* L_6a5c:; */
        /* if ((this->field_0x8a8 & 255) == 9) goto L_6b50; */
        /* goto L_6b50; */
        /* L_6a68:; */
        /* setStt(12, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* field_0x8a8 = (this->field_0x8a8 + 1); */
        /* goto L_6b50; */
        /* L_6a80:; */
        /* field_0x874 = ((daNpc_Ko1_c*)(this->field_0x8a8))->chkAttention(); */
        /* if (((this->field_0x8a3 & 255) + -3) > 18) goto L_6b48; */
        /* field_0x870 = wait_5(13); */
        /* goto L_6b48; */
        /* field_0x870 = attk_2(16, 15); */
        /* goto L_6b48; */
        /* field_0x870 = walk_2(12, 13); */
        /* goto L_6b48; */
        /* field_0x870 = wait_6(); */
        /* goto L_6b48; */
        /* field_0x870 = down_1(14); */
        /* goto L_6b48; */
        /* field_0x870 = talk_1(); */
        /* goto L_6b48; */
        /* field_0x870 = talk_2(); */
        /* goto L_6b48; */
        /* field_0x870 = manzai(); */
        /* L_6b48:; */
        lookBack();
        /* L_6b50:; */
        return 1;
}

/* 00006C64-00006D58       .text wait_action3__11daNpc_Ko1_cFPv */
void daNpc_Ko1_c::wait_action3(void*) {
        /* if ((this->field_0x8a8 & 255) >= 4) goto L_6b9c; */
        /* if ((this->field_0x8a8 & 255) == 0) goto L_6ba8; */
        /* if (/ * bge * / 1) goto L_6bc0; */
        /* goto L_6c44; */
        /* L_6b9c:; */
        /* if ((this->field_0x8a8 & 255) == 9) goto L_6c44; */
        /* goto L_6c44; */
        /* L_6ba8:; */
        /* setStt(29, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* field_0x8a8 = (this->field_0x8a8 + 1); */
        /* goto L_6c44; */
        /* L_6bc0:; */
        /* field_0x874 = ((daNpc_Ko1_c*)(this->field_0x8a8))->chkAttention(); */
        /* if ((this->field_0x8a3 & 255) == 21) goto L_6c20; */
        /* if (/ * bge * / 1) goto L_6bf4; */
        /* if ((this->field_0x8a3 & 255) == 3) goto L_6c10; */
        /* if (/ * blt * / 1) goto L_6c3c; */
        /* if ((this->field_0x8a3 & 255) >= 20) goto L_6c30; */
        /* goto L_6c3c; */
        /* L_6bf4:; */
        /* if ((this->field_0x8a3 & 255) == 29) goto L_6c00; */
        /* goto L_6c3c; */
        /* L_6c00:; */
        /* field_0x870 = wait_a(); */
        /* goto L_6c3c; */
        /* L_6c10:; */
        /* field_0x870 = talk_1(); */
        /* goto L_6c3c; */
        /* L_6c20:; */
        /* field_0x870 = talk_2(); */
        /* goto L_6c3c; */
        /* L_6c30:; */
        /* field_0x870 = manzai(); */
        /* L_6c3c:; */
        lookBack();
        /* L_6c44:; */
        return 1;
}

/* 00006D58-00006DF4       .text wait_action4__11daNpc_Ko1_cFPv */
void daNpc_Ko1_c::wait_action4(void*) {
        /* if ((this->field_0x8a8 & 255) >= 4) goto L_6c90; */
        /* if ((this->field_0x8a8 & 255) == 0) goto L_6c9c; */
        /* if (/ * bge * / 1) goto L_6cb4; */
        /* goto L_6ce0; */
        /* L_6c90:; */
        /* if ((this->field_0x8a8 & 255) == 9) goto L_6ce0; */
        /* goto L_6ce0; */
        /* L_6c9c:; */
        /* setStt(27, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* field_0x8a8 = (this->field_0x8a8 + 1); */
        /* goto L_6ce0; */
        /* L_6cb4:; */
        /* field_0x874 = ((daNpc_Ko1_c*)(this->field_0x8a8))->chkAttention(); */
        /* if (this->field_0x8a3 == 27) goto L_6ccc; */
        /* goto L_6cd8; */
        /* L_6ccc:; */
        /* field_0x870 = neru_1(); */
        /* L_6cd8:; */
        lookBack();
        /* L_6ce0:; */
        return 1;
}

/* 00006DF4-00006F34       .text demo__11daNpc_Ko1_cFv */
void daNpc_Ko1_c::demo() {
        /* if (demoActorID != 0) goto L_6d30; */
        /* if (this->field_0x877 == 0) goto L_6e20; */
        /* field_0x877 = 0; */
        /* goto L_6e20; */
        /* L_6d30:; */
        /* field_0x877 = 1; */
        ((dDemo_object_c*)((this->field_0x5abc + 32)))->getActor(demoActorID);
        /* if (this->field_0x714 == 0) goto L_6d84; */
        /* field_0x72c = (this->field_0x72c + 1); */
        /* if (this->field_0x72c < (this->field_0x6 & 65535)) goto L_6d84; */
        /* L_6d84:; */
        /* if (((dDemo_actor_c*)(((dDemo_object_c*)((this->field_0x5abc + 32)))->getActor(demoActorID)))->getP_BtpData(((char*)&@stringBase0 + 8), this->field_0x6) == 0) goto L_6df4; */
        /* field_0x714 = ((dDemo_actor_c*)(((dDemo_object_c*)((this->field_0x5abc + 32)))->getActor(demoActorID)))->getP_BtpData(((char*)&@stringBase0 + 8), this->field_0x6); */
        /* if (((mDoExt_btpAnm*)((this + 1816)))->init(this->field_0x4, this->field_0x714, 1, 2, 0, -1, 1) == 0) goto L_6df4; */
        /* field_0x89e = 4; */
        /* field_0x72c = 0; */
        /* L_6df4:; */
        dDemo_setDemoData(this, 106, this->field_0x330, ((char*)&@stringBase0 + 8), 0, 0, 0, 0);
        /* L_6e20:; */
        /* return this->field_0x877; */
}

/* 00006F34-00007008       .text shadowDraw__11daNpc_Ko1_cFv */
void daNpc_Ko1_c::shadowDraw() {
        /* field_0x70c = dComIfGd_setShadow(this->field_0x70c, 1, this->field_0x50); */
        /* if (this->field_0x70c == 0) goto L_6ef8; */
        /* if (this->field_0x708 == 0) goto L_6edc; */
        /* ((dDlst_shadowControl_c*)(((char*)&g_dComIfG_gameInfo + 24416)))->addReal(this->field_0x70c, this->field_0x708); */
        /* L_6edc:; */
        /* L_6ef8:; */
        /* return ((dDlst_shadowControl_c*)(((char*)&g_dComIfG_gameInfo + 24416)))->addReal(this->field_0x70c, this->field_0x50); */
}

/* 00007008-0000728C       .text _draw__11daNpc_Ko1_cFv */
BOOL daNpc_Ko1_c::_draw() {
        /* _savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* if (this->field_0x867 != 0) goto L_6f50; */
        /* if (this->field_0x86a == 0) goto L_6f58; */
        /* L_6f50:; */
        return 1;
        /* L_6f58:; */
        /* ((dScnKy_env_light_c*)(((char*)&g_env_light + 0)))->settingTevStruct(0, (_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 504), (_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 268)); */
        /* ((dScnKy_env_light_c*)(((char*)&g_env_light + 0)))->setLightTevColorType(this->field_0x50, (_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 268)); */
        /* if ((this->field_0x8a6 & 255) == 1) goto L_6fb0; */
        /* if (/ * bge * / 1) goto L_6fe4; */
        /* if ((this->field_0x8a6 & 255) >= 0) goto L_6fa4; */
        /* goto L_6fe4; */
        /* L_6fa4:; */
        /* ((mDoExt_McaMorf*)(this->field_0x330))->entryDL(); */
        /* goto L_6fe4; */
        /* L_6fb0:; */
        /* ((mDoExt_McaMorf*)(this->field_0x330))->entryDL(((dRes_control_c*)(((char*)&@stringBase0 + 8)))->getIDRes(30, ((char*)&g_dComIfG_gameInfo + -16460), 64)); */
        /* L_6fe4:; */
        /* ((mDoExt_btpAnm*)((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1816)))->entry(this->field_0x4, this->field_0x72c); */
        /* ((mDoExt_McaMorf*)(this->field_0x710))->entryDL(); */
        /* ((J3DMaterialTable*)((this->field_0x4 + 88)))->removeTexNoAnimator(this->field_0x720); */
        /* ((dScnKy_env_light_c*)(((char*)&g_env_light + 0)))->setLightTevColorType(this->field_0x50, (_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 268)); */
        /* if (m704 == 0) goto L_7044; */
        ((mDoExt_McaMorf*)(m704))->entryDL();
        /* ((dScnKy_env_light_c*)(((char*)&g_env_light + 0)))->setLightTevColorType(this->field_0x50, (_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 268)); */
        /* L_7044:; */
        /* if (this->field_0x708 == 0) goto L_7068; */
        /* ((dScnKy_env_light_c*)(((char*)&g_env_light + 0)))->setLightTevColorType(this->field_0x708, (_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 268)); */
        /* mDoExt_modelEntryDL(this->field_0x708); */
        /* L_7068:; */
        /* ((daNpc_Ko1_c*)(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->shadowDraw(); */
        /* if ((this->field_0x8a6 & 255) == 1) goto L_70b0; */
        /* if (/ * bge * / 1) goto L_70cc; */
        /* if ((this->field_0x8a6 & 255) >= 0) goto L_7090; */
        /* goto L_70cc; */
        /* L_7090:; */
        /* dSnap_RegistFig(82, _savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7), C_@4569); */
        /* goto L_70cc; */
        /* L_70b0:; */
        /* dSnap_RegistFig(81, _savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7), C_@4569); */
        /* L_70cc:; */
        /* if (this->field_0x28 == 0) goto L_7174; */
        /* if (this->field_0x8a7 == 0) goto L_713c; */
        /* goto L_7158; */
        /* L_713c:; */
        /* L_7158:; */
        /* L_7174:; */
        return _restgpr_28(1);
}

/* 0000728C-0000756C       .text _execute__11daNpc_Ko1_cFv */
BOOL daNpc_Ko1_c::_execute() {
        /* _savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* if (this->field_0x86e != 0) goto L_71f4; */
        /* field_0x7c4 = 0; */
        /* field_0x7c8 = 0; */
        /* field_0x7cc = 0; */
        /* field_0x86e = 1; */
        /* L_71f4:; */
        /* ((dNpc_JntCtrl_c*)((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 656)))->setParam(this->field_0x18, this->field_0x1a, this->field_0x1c, this->field_0x1e, this->field_0x10, this->field_0x12, this->field_0x14); */
        /* if (this->field_0x867 == 0) goto L_7260; */
        /* if (demoActorID != 0) goto L_7260; */
        return 1;
        /* L_7260:; */
        /* field_0x869 = 0; */
        /* field_0x867 = 0; */
        /* ((daNpc_Ko1_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->partner_srch(); */
        /* ((daNpc_Ko1_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->checkOrder(); */
        /* if (((daNpc_Ko1_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->demo() != 0) goto L_7424; */
        /* if (this->field_0x529a == 0) goto L_72c0; */
        /* if (this->field_0xf8 == 1) goto L_72c0; */
        /* L_72c0:; */
        /* if (((daNpc_Ko1_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->isEventEntry() < 0) goto L_72d4; */
        /* ((daNpc_Ko1_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->event_proc(((daNpc_Ko1_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->isEventEntry()); */
        /* goto L_72e8; */
        /* L_72d4:; */
        /* __ptmf_scall(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7), 0); */
        /* L_72e8:; */
        /* if (this->field_0x869 != 0) goto L_7308; */
        /* ((daNpc_Ko1_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->ko_nMove(); */
        /* fopAcM_posMoveF(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7), (_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1336)); */
        /* L_7308:; */
        /* if (((cBgS*)(((char*)&g_dComIfG_gameInfo + 4768)))->GetTriPla(this->field_0x41e, this->field_0x41c) == 0) goto L_7338; */
        /* field_0x818 = 0; */
        /* field_0x81c = 0; */
        /* field_0x820 = 0; */
        /* L_7338:; */
        /* if (this->field_0x868 != 0) goto L_7374; */
        /* L_7374:; */
        __mi();
        PSVECSquareMag();
        /* if (/ * ble * / 1) goto L_7408; */
        /* L_7408:; */
        /* if (this->field_0x10 <= this->field_0x198) goto L_7424; */
        /* fopAcM_delete(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        return 1;
        /* L_7424:; */
        /* ((daNpc_Ko1_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->eventOrder(); */
        /* ((daNpc_Ko1_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->setMtx(0); */
        /* if (this->field_0x877 != 0) goto L_7454; */
        /* ((fopNpc_npc_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->setCollision(); */
        /* L_7454:; */
        return _restgpr_29(1);
}

/* 0000756C-000075F0       .text _delete__11daNpc_Ko1_cFv */
BOOL daNpc_Ko1_c::_delete() {
        /* dComIfG_resDelete((this + 1732), ((char*)&@stringBase0 + 8), arg2); */
        /* if (heap == 0) goto L_74d4; */
        /* if (this->field_0x330 == 0) goto L_74b4; */
        /* ((mDoExt_McaMorf*)(this->field_0x330))->stopZelAnime(); */
        /* L_74b4:; */
        /* if (this->field_0x710 == 0) goto L_74c4; */
        /* ((mDoExt_McaMorf*)(this->field_0x710))->stopZelAnime(); */
        /* L_74c4:; */
        /* if (m704 == 0) goto L_74d4; */
        ((mDoExt_McaMorf*)(m704))->stopZelAnime();
        /* L_74d4:; */
        ((dPa_rippleEcallBack*)((this + 2168)))->end();
        return 1;
}

/* 000075F0-00007610       .text CheckCreateHeap__FP10fopAc_ac_c */
static BOOL CheckCreateHeap(fopAc_ac_c* i_this) {
    ((daNpc_Ko1_c*)i_this)->CreateHeap();
    return TRUE;
}

/* 00007610-00007730       .text _create__11daNpc_Ko1_cFv */
cPhs_State daNpc_Ko1_c::_create() {
        /* _savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* if (/ * bne * / 1) goto L_7558; */
        /* if (_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) == 0) goto L_754c; */
        __ct();
        /* L_754c:; */
        /* L_7558:; */
        /* if (dComIfG_resLoad((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1732), ((char*)&@stringBase0 + 8)) == 4) goto L_757c; */
        /* goto L_761c; */
        /* L_757c:; */
        /* if (((daNpc_Ko1_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->charDecide((this->field_0xb0 & 16777215)) != 0) goto L_759c; */
        return 5;
        /* L_759c:; */
        /* if (fopAcM_entrySolidHeap(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7), ((char*)&CheckCreateHeap__FP10fopAc_ac_c + 0), ((char*)&a_size_tbl$6977 + 0)) != 0) goto L_75d4; */
        return 5;
        /* L_75d4:; */
        cullMtx = (this->field_0x50 + 36);
        /* fopAcM_setCullSizeBox(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* if (((daNpc_Ko1_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->createInit() == 0) goto L_761c; */
        /* L_761c:; */
        /* return _restgpr_29(dComIfG_resLoad((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1732), ((char*)&@stringBase0 + 8))); */
}

/* 00007C2C-00007E9C       .text create_Anm__11daNpc_Ko1_cFv */
void daNpc_Ko1_c::create_Anm() {
    /* _savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
    ((dRes_control_c*)(((char*)&@stringBase0 + 8)))->getIDRes(27);
    if (/* bne */ 1) {
        ((JUTAssertion*)(((JUTAssertion*)(((dRes_control_c*)(((char*)&@stringBase0 + 8)))->getIDRes(27)))->getSDevice()))->showAssert(((char*)&@stringBase0 + 11), 4262, ((char*)&@stringBase0 + 94));
        OSPanic(((char*)&@stringBase0 + 11), 4262, ((char*)&@stringBase0 + 48));
    }
    __nw(180);
    if (/* beq */ 1) {
    }
    /* field_0x330 = __ct(((dRes_control_c*)(((char*)&@stringBase0 + 8)))->getIDRes(22), 1); */
    if (this->field_0x330 == 0) {
        return 0;
    }
    if (this->field_0x50 == 0) {
        /* field_0x330 = 0; */
        return 0;
    }
    /* mJointNo1 = ((JUTNameTab*)(this->field_0x54))->getIndex(((char*)&@stringBase0 + 109)); */
    if (mJointNo1 != 0) {
        /* ((JUTAssertion*)(((JUTAssertion*)(((JUTNameTab*)(this->field_0x54))->getIndex(((char*)&@stringBase0 + 109))))->getSDevice()))->showAssert(((char*)&@stringBase0 + 11), 4282, ((char*)&@stringBase0 + 114)); */
        OSPanic(((char*)&@stringBase0 + 11), 4282, ((char*)&@stringBase0 + 48));
    }
    /* mJointNo2 = ((JUTNameTab*)(this->field_0x54))->getIndex(((char*)&@stringBase0 + 133)); */
    if (mJointNo2 != 0) {
        /* ((JUTAssertion*)(((JUTAssertion*)(((JUTNameTab*)(this->field_0x54))->getIndex(((char*)&@stringBase0 + 133))))->getSDevice()))->showAssert(((char*)&@stringBase0 + 11), 4285, ((char*)&@stringBase0 + 142)); */
        OSPanic(((char*)&@stringBase0 + 11), 4285, ((char*)&@stringBase0 + 48));
    }
    /* m6CE = ((JUTNameTab*)(this->field_0x54))->getIndex(((char*)&@stringBase0 + 163)); */
    if (m6CE != 0) {
        /* ((JUTAssertion*)(((JUTAssertion*)(((JUTNameTab*)(this->field_0x54))->getIndex(((char*)&@stringBase0 + 163))))->getSDevice()))->showAssert(((char*)&@stringBase0 + 11), 4288, ((char*)&@stringBase0 + 169)); */
    }
    return _restgpr_28(OSPanic(((char*)&@stringBase0 + 11), 4288, ((char*)&@stringBase0 + 48)));
}

/* 00007E9C-00008090       .text create_hed_Anm__11daNpc_Ko1_cFv */
void daNpc_Ko1_c::create_hed_Anm() {
    /* _savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
    ((dRes_control_c*)(((char*)&@stringBase0 + 8)))->getIDRes((((this->field_0x8a6 & 255) << 2) & 65535));
    if (/* bne */ 1) {
        ((JUTAssertion*)(((JUTAssertion*)(((dRes_control_c*)(((char*)&@stringBase0 + 8)))->getIDRes((((this->field_0x8a6 & 255) << 2) & 65535))))->getSDevice()))->showAssert(((char*)&@stringBase0 + 11), 4312, ((char*)&@stringBase0 + 94));
        OSPanic(((char*)&@stringBase0 + 11), 4312, ((char*)&@stringBase0 + 48));
    }
    __nw(180);
    if (/* beq */ 1) {
    }
    /* field_0x710 = __ct(((dRes_control_c*)(((char*)&@stringBase0 + 8)))->getIDRes((((this->field_0x8a6 & 255) << 2) & 65535)), 1); */
    if (this->field_0x710 == 0) {
        return 0;
    }
    if (this->field_0x50 == 0) {
        /* field_0x710 = 0; */
        return 0;
    }
    if (this->field_0x8a6 != 0) {
        /* mHedJntNo = ((JUTNameTab*)(this->field_0x54))->getIndex(((char*)&@stringBase0 + 190)); */
        /* if (mHedJntNo != 0) goto L_7f78; */
        /* ((JUTAssertion*)(((JUTAssertion*)(((JUTNameTab*)(this->field_0x54))->getIndex(((char*)&@stringBase0 + 190))))->getSDevice()))->showAssert(((char*)&@stringBase0 + 11), 4333, ((char*)&@stringBase0 + 196)); */
    }
    /* L_7f78:; */
    return _restgpr_28(OSPanic(((char*)&@stringBase0 + 11), 4333, ((char*)&@stringBase0 + 48)));
}

/* 00008090-000082A4       .text create_bln_Anm__11daNpc_Ko1_cFv */
void daNpc_Ko1_c::create_bln_Anm() {
    /* _savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
    ((dRes_control_c*)(((char*)&@stringBase0 + 8)))->getIDRes(26);
    if (/* bne */ 1) {
        ((JUTAssertion*)(((JUTAssertion*)(((dRes_control_c*)(((char*)&@stringBase0 + 8)))->getIDRes(26)))->getSDevice()))->showAssert(((char*)&@stringBase0 + 11), 4349, ((char*)&@stringBase0 + 94));
        OSPanic(((char*)&@stringBase0 + 11), 4349, ((char*)&@stringBase0 + 48));
    }
    __nw(180);
    if (/* beq */ 1) {
    }
    m704 = __ct(((dRes_control_c*)(((char*)&@stringBase0 + 8)))->getIDRes(1), 1);
    if (m704 == 0) {
        return 0;
    }
    if (this->field_0x50 == 0) {
        m704 = 0;
        return 0;
    }
    /* mBlnJntNo = ((JUTNameTab*)(this->field_0x54))->getIndex(((char*)&@stringBase0 + 217)); */
    if (mBlnJntNo != 0) {
        /* ((JUTAssertion*)(((JUTAssertion*)(((JUTNameTab*)(this->field_0x54))->getIndex(((char*)&@stringBase0 + 217))))->getSDevice()))->showAssert(((char*)&@stringBase0 + 11), 4369, ((char*)&@stringBase0 + 229)); */
        OSPanic(((char*)&@stringBase0 + 11), 4369, ((char*)&@stringBase0 + 48));
    }
    /* m6D1 = ((JUTNameTab*)(this->field_0x54))->getIndex(((char*)&@stringBase0 + 252)); */
    if (m6D1 != 0) {
        /* ((JUTAssertion*)(((JUTAssertion*)(((JUTNameTab*)(this->field_0x54))->getIndex(((char*)&@stringBase0 + 252))))->getSDevice()))->showAssert(((char*)&@stringBase0 + 11), 4372, ((char*)&@stringBase0 + 263)); */
    }
    return _restgpr_28(OSPanic(((char*)&@stringBase0 + 11), 4372, ((char*)&@stringBase0 + 48)));
}

/* 000082A4-00008380       .text create_itm_Mdl__11daNpc_Ko1_cFv */
void daNpc_Ko1_c::create_itm_Mdl() {
    if (this->field_0x8a6 != 1) {
        return 1;
    }
    /* ((dRes_control_c*)(((char*)&@stringBase0 + 8)))->getIDRes(25, ((char*)&g_dComIfG_gameInfo + -16460), 64, arg4, arg5); */
    if (/* bne */ 1) {
        /* ((JUTAssertion*)(((JUTAssertion*)(((dRes_control_c*)(((char*)&@stringBase0 + 8)))->getIDRes(25, ((char*)&g_dComIfG_gameInfo + -16460), 64, arg4, arg5)))->getSDevice()))->showAssert(((char*)&@stringBase0 + 11), 4390, ((char*)&@stringBase0 + 94)); */
    }
    /* field_0x708 = mDoExt_J3DModel(OSPanic(((char*)&@stringBase0 + 11), 4390, ((char*)&@stringBase0 + 48))); */
    if (this->field_0x708 == 0) {
        return 0;
    }
    return 1;
}

/* 00008380-00008604       .text CreateHeap__11daNpc_Ko1_cFv */
void daNpc_Ko1_c::CreateHeap() {
        /* ((daNpc_Ko1_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->create_Anm(); */
        /* if (/ * bne * / 1) goto L_82b0; */
        return 0;
        /* L_82b0:; */
        /* ((daNpc_Ko1_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->create_hed_Anm(); */
        /* if (/ * bne * / 1) goto L_82d0; */
        /* field_0x330 = 0; */
        return 0;
        /* L_82d0:; */
        /* field_0x89e = (this->field_0x8a6 & 255); */
        /* if (((daNpc_Ko1_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->iniTexPttrnAnm(0) != 0) goto L_8318; */
        /* field_0x330 = 0; */
        /* field_0x710 = 0; */
        return 0;
        /* L_8318:; */
        /* if (this->field_0x8a6 != 0) goto L_8348; */
        /* if (((daNpc_Ko1_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->create_bln_Anm() != 0) goto L_8348; */
        /* field_0x330 = 0; */
        /* field_0x710 = 0; */
        return 0;
        /* L_8348:; */
        /* if (((daNpc_Ko1_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->create_itm_Mdl() == 0) goto L_84dc; */
        /* if (this->field_0x8a6 != 0) goto L_8424; */
        /* goto L_83a8; */
        /* L_8374:; */
        /* if ((0 & 65535) != (mBlnJntNo & 255)) goto L_83a4; */
        /* field_0x8 = 0; */
        /* L_83a4:; */
        /* L_83a8:; */
        /* if (((0 + 1) & 65535) < this->field_0x28) goto L_8374; */
        /* field_0x14 = _savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* goto L_8408; */
        /* L_83d4:; */
        /* if ((0 & 65535) != (mHedJntNo & 255)) goto L_8404; */
        /* field_0x8 = 0; */
        /* L_8404:; */
        /* L_8408:; */
        /* if (((0 + 1) & 65535) < this->field_0x28) goto L_83d4; */
        /* field_0x14 = _savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* L_8424:; */
        /* goto L_8478; */
        /* L_8434:; */
        /* if ((0 & 65535) == (mJointNo1 & 255)) goto L_8458; */
        /* if ((0 & 65535) != (mJointNo2 & 255)) goto L_8474; */
        /* L_8458:; */
        /* field_0x8 = 0; */
        /* L_8474:; */
        /* L_8478:; */
        /* if (((0 + 1) & 65535) < this->field_0x28) goto L_8434; */
        /* field_0x14 = _savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* ((dBgS_AcchCir*)((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1272)))->SetWall(C_@4648, (0 + 1)); */
        /* ((dBgS_Acch*)((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 820)))->Set((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 504), (_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 484), _savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7), 1, (_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1272), (_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 544), 0); */
        return 1;
        /* L_84dc:; */
        /* field_0x330 = 0; */
        /* field_0x710 = 0; */
        m704 = 0;
        return _restgpr_29(0);
}

/* 00008604-00008624       .text daNpc_Ko1_Create__FP10fopAc_ac_c */
static cPhs_State daNpc_Ko1_Create(fopAc_ac_c* i_this) {
    return ((daNpc_Ko1_c*)i_this)->_create();
}

/* 00008624-00008644       .text daNpc_Ko1_Delete__FP11daNpc_Ko1_c */
static BOOL daNpc_Ko1_Delete(daNpc_Ko1_c* i_this) {
    return ((daNpc_Ko1_c*)i_this)->_delete();

/* 00008644-00008664       .text daNpc_Ko1_Execute__FP11daNpc_Ko1_c */
static BOOL daNpc_Ko1_Execute(daNpc_Ko1_c* i_this) {
    return ((daNpc_Ko1_c*)i_this)->_execute();

/* 00008664-00008684       .text daNpc_Ko1_Draw__FP11daNpc_Ko1_c */
static BOOL daNpc_Ko1_Draw(daNpc_Ko1_c* i_this) {
    return ((daNpc_Ko1_c*)i_this)->_draw();

/* 00008684-0000868C       .text daNpc_Ko1_IsDelete__FP11daNpc_Ko1_c */
static BOOL daNpc_Ko1_IsDelete(daNpc_Ko1_c*) {
    return 1;

static actor_method_class l_daNpc_Ko1_Method = {
    (process_method_func)daNpc_Ko1_Create,
    (process_method_func)daNpc_Ko1_Delete,
    (process_method_func)daNpc_Ko1_Execute,
    (process_method_func)daNpc_Ko1_IsDelete,
    (process_method_func)daNpc_Ko1_Draw,
};

actor_process_profile_definition g_profile_NPC_KO1 = {
    /* Layer ID     */ fpcLy_CURRENT_e,
    /* List ID      */ 0x0007,
    /* List Prio    */ fpcPi_CURRENT_e,
    /* Proc Name    */ fpcNm_NPC_KO1_e,
    /* Proc SubMtd  */ &g_fpcLf_Method.base,
    /* Size         */ sizeof(daNpc_Ko1_c),
    /* Size Other   */ 0,
    /* Parameters   */ 0,
    /* Leaf SubMtd  */ &g_fopAc_Method.base,
    /* Draw Prio    */ fpcDwPi_NPC_KO1_e,
    /* Actor SubMtd */ &l_daNpc_Ko1_Method,
    /* Status       */ 0x07 | fopAcStts_SHOWMAP_e | fopAcStts_NOCULLEXEC_e | fopAcStts_CULL_e | fopAcStts_UNK40000_e,
    /* Group        */ fopAc_NPC_e,
    /* Cull Type    */ fopAc_CULLBOX_CUSTOM_e,
};

actor_process_profile_definition g_profile_NPC_KO2 = {
    /* Layer ID     */ fpcLy_CURRENT_e,
    /* List ID      */ 0x0007,
    /* List Prio    */ fpcPi_CURRENT_e,
    /* Proc Name    */ fpcNm_NPC_KO2_e,
    /* Proc SubMtd  */ &g_fpcLf_Method.base,
    /* Size         */ sizeof(daNpc_Ko1_c),
    /* Size Other   */ 0,
    /* Parameters   */ 0,
    /* Leaf SubMtd  */ &g_fopAc_Method.base,
    /* Draw Prio    */ fpcDwPi_NPC_KO2_e,
    /* Actor SubMtd */ &l_daNpc_Ko1_Method,
    /* Status       */ 0x07 | fopAcStts_SHOWMAP_e | fopAcStts_NOCULLEXEC_e | fopAcStts_CULL_e | fopAcStts_UNK40000_e,
    /* Group        */ fopAc_NPC_e,
    /* Cull Type    */ fopAc_CULLBOX_CUSTOM_e,
};

/* 由 fix_decomp_braces.py 补齐：反编译产物末尾缺 7 个 } */
}}}}}}}
