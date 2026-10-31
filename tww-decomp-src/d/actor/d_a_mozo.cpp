/**
 * d_a_mozo.cpp
 * Enemy - Moblin Statue / モ石像 (Mo Sekizou)
 */

#include "d/dolzel_rel.h" // IWYU pragma: keep
#include "d/actor/d_a_mozo.h"
#include "res/Object/Mozo.h"
#include "f_op/f_op_actor_mng.h"
#include "JSystem/JUtility/JUTAssert.h"
#include "d/d_com_inf_game.h"
#include "d/d_kankyo.h"
#include "d/d_lib.h"
#include "m_Do/m_Do_mtx.h"
#include "m_Do/m_Do_ext.h"
#include "m_Do/m_Do_hostIO.h"
#include "d/d_cc_d.h"

static dCcD_SrcCps cps_src = {
    // dCcD_SrcGObjInf
    {
        /* Flags             */ 0,
        /* SrcObjAt  Type    */ AT_TYPE_FIRE,
        /* SrcObjAt  Atp     */ 1,
        /* SrcObjAt  SPrm    */ cCcD_AtSPrm_Set_e | cCcD_AtSPrm_VsPlayer_e | cCcD_AtSPrm_VsOther_e,
        /* SrcObjTg  Type    */ AT_TYPE_ALL,
        /* SrcObjTg  SPrm    */ 0,
        /* SrcObjCo  SPrm    */ 0,
        /* SrcGObjAt Se      */ 0,
        /* SrcGObjAt HitMark */ dCcG_AtHitMark_None_e,
        /* SrcGObjAt Spl     */ dCcG_At_Spl_UNK8,
        /* SrcGObjAt Mtrl    */ 0,
        /* SrcGObjAt SPrm    */ 0,
        /* SrcGObjTg Se      */ 0,
        /* SrcGObjTg HitMark */ 0,
        /* SrcGObjTg Spl     */ dCcG_Tg_Spl_UNK0,
        /* SrcGObjTg Mtrl    */ 0,
        /* SrcGObjTg SPrm    */ dCcG_TgSPrm_NoHitMark_e,
        /* SrcGObjCo SPrm    */ 0,
    },
    // cM3dGCpsS
    {{
        /* Start  */ {0.0f, 0.0f, 0.0f},
        /* End    */ {0.0f, 0.0f, 0.0f},
        /* Radius */ 50.0f,
    }},
};


static daMozo_HIO_c l_HIO;

/* 000000EC-000001D0       .text __ct__12daMozo_HIO_cFv */
daMozo_HIO_c::daMozo_HIO_c() {
    /* Nonmatching */
    m3C = 0.0f;
    m40 = -300.0f;
    m44 = 600.0f;
    mNo = -1;
    m08 = -1;
    mpBeamChild = &mBeamChild;
    mpFireChild = &mFireChild;
    mpBeamChild->m04 = 1000.0f;
    mpBeamChild->m08 = 1200.0f;
    mpBeamChild->m0C = 0x2000;
    mpBeamChild->m0E = 0x2800;
    mpBeamChild->m10 = 0;
    mpFireChild->m04 = 1000.0f;
    mpFireChild->m08 = 1200.0f;
    mpFireChild->m0C = 0x2000;
    mpFireChild->m0E = 0x2800;
    mpFireChild->m10 = 0;
}

/* 000002D0-00000568       .text daMozo_nodeCallBackBeam__FP8daMozo_cP8J3DModelP7J3DNodei */
static BOOL daMozo_nodeCallBackBeam(daMozo_c*, J3DModel*, J3DNode*, int) {
        /* _savegpr_28(arg0, arg1, arg2, int, arg4, arg5, arg6, arg7); */
        /* if (/ * bne * / 1) goto L_460; */
        /* if (this->field_0xa4 != 0) goto L_260; */
        /* field_0xa8 = 0; */
        /* field_0x4 = 0; */
        /* field_0x8 = 0; */
        /* __register_global_object(((C_@936 + 0) + 168), ((char*)&__dt__4cXyzFv + 0), ((C_@936 + 0) + 152)); */
        /* field_0xa4 = 1; */
        /* L_260:; */
        /* if (this->field_0xc0 != 0) goto L_2ac; */
        /* field_0xc4 = 0; */
        /* field_0x4 = 0; */
        /* field_0x8 = 0; */
        /* __register_global_object(((C_@936 + 0) + 196), ((char*)&__dt__4cXyzFv + 0), ((C_@936 + 0) + 180)); */
        /* field_0xc0 = 1; */
        /* L_2ac:; */
        /* if (this->field_0xdc != 0) goto L_2f8; */
        /* field_0xe0 = 0; */
        /* field_0x4 = 0; */
        /* field_0x8 = 0; */
        /* __register_global_object(((C_@936 + 0) + 224), ((char*)&__dt__4cXyzFv + 0), ((C_@936 + 0) + 208)); */
        /* field_0xdc = 1; */
        /* L_2f8:; */
        /* if (this->field_0xf8 != 0) goto L_344; */
        /* field_0xfc = 0; */
        /* field_0x4 = 0; */
        /* field_0x8 = 0; */
        /* __register_global_object(((C_@936 + 0) + 252), ((char*)&__dt__4cXyzFv + 0), ((C_@936 + 0) + 236)); */
        /* field_0xf8 = 1; */
        /* L_344:; */
        PSMTXCopy();
        /* PSMTXMultVec(((char*)&now__14mDoMtx_stack_c + 0), ((C_@936 + 0) + 168), (_savegpr_28(arg0, arg1, arg2, int, arg4, arg5, arg6, arg7) + 780)); */
        /* PSMTXMultVec(((char*)&now__14mDoMtx_stack_c + 0), ((C_@936 + 0) + 196), (_savegpr_28(arg0, arg1, arg2, int, arg4, arg5, arg6, arg7) + 792)); */
        PSMTXCopy(((char*)&now__14mDoMtx_stack_c + 0));
        PSMTXTrans(((char*)&now__14mDoMtx_stack_c + 0));
        /* ((mDoMtx_stack_c*)((_savegpr_28(arg0, arg1, arg2, int, arg4, arg5, arg6, arg7) + 860)))->quatM(); */
        PSMTXConcat(((char*)&now__14mDoMtx_stack_c + 0));
        /* PSMTXMultVec(((char*)&now__14mDoMtx_stack_c + 0), ((C_@936 + 0) + 168), (_savegpr_28(arg0, arg1, arg2, int, arg4, arg5, arg6, arg7) + 732)); */
        /* PSMTXMultVec(((char*)&now__14mDoMtx_stack_c + 0), ((C_@936 + 0) + 196), (_savegpr_28(arg0, arg1, arg2, int, arg4, arg5, arg6, arg7) + 744)); */
        /* PSMTXMultVec(((char*)&now__14mDoMtx_stack_c + 0), ((C_@936 + 0) + 224), (_savegpr_28(arg0, arg1, arg2, int, arg4, arg5, arg6, arg7) + 756)); */
        /* PSMTXMultVec(((char*)&now__14mDoMtx_stack_c + 0), ((C_@936 + 0) + 252), (_savegpr_28(arg0, arg1, arg2, int, arg4, arg5, arg6, arg7) + 768)); */
        PSMTXCopy(((char*)&now__14mDoMtx_stack_c + 0));
        PSMTXCopy(((char*)&now__14mDoMtx_stack_c + 0), ((char*)&mCurrentMtx__6J3DSys + 0));
        /* L_460:; */
        return _restgpr_28(1);
}

/* 00000568-00000728       .text daMozo_nodeCallBackFire__FP8daMozo_cP8J3DModelP7J3DNodei */
static BOOL daMozo_nodeCallBackFire(daMozo_c*, J3DModel*, J3DNode*, int) {
        /* _savegpr_28(arg0, arg1, arg2, int, arg4, arg5, arg6, arg7); */
        /* if (/ * bne * / 1) goto L_620; */
        /* if (this->field_0x114 != 0) goto L_4e8; */
        /* field_0x118 = 0; */
        /* field_0x4 = 0; */
        /* field_0x8 = 0; */
        /* __register_global_object(((C_@936 + 0) + 280), ((char*)&__dt__4cXyzFv + 0), ((C_@936 + 0) + 264)); */
        /* field_0x114 = 1; */
        /* L_4e8:; */
        /* if (this->field_0x130 != 0) goto L_52c; */
        /* field_0x134 = 0; */
        /* field_0x4 = 0; */
        /* field_0x8 = 0; */
        /* __register_global_object(((C_@936 + 0) + 308), ((char*)&__dt__4cXyzFv + 0), ((C_@936 + 0) + 292)); */
        /* field_0x130 = 1; */
        /* L_52c:; */
        PSMTXCopy();
        /* PSMTXMultVec(((char*)&now__14mDoMtx_stack_c + 0), ((C_@936 + 0) + 280), (_savegpr_28(arg0, arg1, arg2, int, arg4, arg5, arg6, arg7) + 780)); */
        /* PSMTXMultVec(((char*)&now__14mDoMtx_stack_c + 0), ((C_@936 + 0) + 308), (_savegpr_28(arg0, arg1, arg2, int, arg4, arg5, arg6, arg7) + 792)); */
        PSMTXCopy(((char*)&now__14mDoMtx_stack_c + 0));
        PSMTXTrans(((char*)&now__14mDoMtx_stack_c + 0));
        /* ((mDoMtx_stack_c*)((_savegpr_28(arg0, arg1, arg2, int, arg4, arg5, arg6, arg7) + 860)))->quatM(); */
        PSMTXConcat(((char*)&now__14mDoMtx_stack_c + 0));
        /* PSMTXMultVec(((char*)&now__14mDoMtx_stack_c + 0), ((C_@936 + 0) + 280), (_savegpr_28(arg0, arg1, arg2, int, arg4, arg5, arg6, arg7) + 816)); */
        /* PSMTXMultVec(((char*)&now__14mDoMtx_stack_c + 0), ((C_@936 + 0) + 308), (_savegpr_28(arg0, arg1, arg2, int, arg4, arg5, arg6, arg7) + 828)); */
        PSMTXCopy(((char*)&now__14mDoMtx_stack_c + 0));
        PSMTXCopy(((char*)&now__14mDoMtx_stack_c + 0), ((char*)&mCurrentMtx__6J3DSys + 0));
        /* L_620:; */
        return _restgpr_28(1);
}

/* 00000728-0000078C       .text daMozo_nodeCallBack__FP7J3DNodei */
static BOOL daMozo_nodeCallBack(J3DNode* node, int calcTiming) {
    J3DJoint* joint = (J3DJoint*)node;
    s32 jntNo = joint->getJntNo();
    J3DModel* model = j3dSys.getModel();
    daMozo_c* i_this = (daMozo_c*)model->getUserArea();

    /* switch (i_this->field_0x376) { */
    case 0: return daMozo_nodeCallBackBeam(i_this, model, node, calcTiming);
    case 1: return daMozo_nodeCallBackFire(i_this, model, node, calcTiming);
    }

    return TRUE;
}

/* 0000078C-000007AC       .text CheckCreateHeap__FP10fopAc_ac_c */
static BOOL CheckCreateHeap(fopAc_ac_c* i_this) {
    return static_cast<daMozo_c*>(i_this)->CreateHeap();
}

/* 000007AC-00000A24       .text CreateHeap__8daMozo_cFv */
BOOL daMozo_c::CreateHeap() {
    J3DModelData* mdlData = (J3DModelData*)dComIfG_getObjectRes("Mozo", dRes_INDEX_MOZO_BDL_MOZ_e);
    
    mDoExt_McaMorf* newMorf =  new mDoExt_McaMorf(
        mdlData,
        0,
        0,
        static_cast<J3DAnmTransformKey*>(dComIfG_getObjectRes("Mozo", dRes_INDEX_MOZO_BCK_MOZ_e)),
        J3DFrameCtrl::EMode_LOOP,
        1.0f,
        0,
        -1,
        0,
        0,
        0,
        0x11020203
    );
    
    mAnimMorf = newMorf;

    m_brk = (J3DAnmTevRegKey*)dComIfG_getObjectRes("Mozo", dRes_INDEX_MOZO_BRK_MOZ_e);
    JUT_ASSERT(0x16A, m_brk != NULL);

    m_btk = (J3DAnmTextureSRTKey*)dComIfG_getObjectRes("Mozo", dRes_INDEX_MOZO_BTK_MOZ_e);
    JUT_ASSERT(0x16D, m_btk != NULL);

    int brkInitResult = mBrkAnm.init(mdlData, m_brk, true, J3DFrameCtrl::EMode_NONE);
    int btkInitResult = mBtkAnm.init(mdlData, m_btk, true, J3DFrameCtrl::EMode_NONE);

    return mdlData != 0 && mAnimMorf != 0 && mAnimMorf->getModel() != 0 && brkInitResult != 0 && btkInitResult != 0;
}

/* 00000A24-00000AAC       .text set_mtx__8daMozo_cFv */
void daMozo_c::set_mtx() {
    J3DModel* mdl = mAnimMorf->getModel();
    mdl->setBaseScale(scale);

    mDoMtx_stack_c::transS(current.pos);
    mDoMtx_stack_c::YrotM(current.angle.y);
        
    mdl->setBaseTRMtx(mDoMtx_stack_c::get());
}

/* 00000AAC-00000C38       .text anime_proc__8daMozo_cFv */
void daMozo_c::anime_proc() {
        /* ((mDoExt_McaMorf*)(mAnimMorf))->play(0, 0, 0, arg4, arg5, arg6, arg7); */
        ((mDoExt_baseAnm*)((this + 680)))->play();
        ((mDoExt_baseAnm*)((this + 708)))->play();
        /* if (this->field_0x68 >= base) goto L_a58; */
        ((JAIZelBasic*)(base))->seStart(24953, (this + 608), 0, dComIfGp_getReverb((this->field_0x20a & 255)), 0);
        /* L_a58:; */
        /* if (((J3DFrameCtrl*)((mAnimMorf + 88)))->checkPass(C_@4362) == 0) goto L_b38; */
        /* if (this->field_0x64 <= base) goto L_ad8; */
        ((JAIZelBasic*)(base))->seStart(27002, (this + 608), 0, dComIfGp_getReverb((this->field_0x20a & 255)), 0);
        /* goto L_b38; */
        /* L_ad8:; */
        ((JAIZelBasic*)(base))->seStopActor((this + 608), 27002);
        /* L_b38:; */
        return ((JAIZelBasic*)(base))->seStart(27003, (this + 608), 0, dComIfGp_getReverb((this->field_0x20a & 255)), 0);
}

/* 00000C38-00000C90       .text wait_proc_init__8daMozo_cFv */
void daMozo_c::wait_proc_init() {
    setAnm(0, C_@4140);
    return base;
}

/* 00000C90-00000D58       .text wait_proc__8daMozo_cFv */
void daMozo_c::wait_proc() {
        /* if (checkRange(0) == 0) goto L_c54; */
        /* if (this->field_0x5b38 != 0) goto L_c54; */
        /* if (field_0x376 == 1) goto L_c28; */
        /* if (/ * bge * / 1) goto L_c10; */
        /* if (field_0x376 >= 0) goto L_c1c; */
        /* goto L_c3c; */
        /* L_c10:; */
        /* if (field_0x376 >= 3) goto L_c3c; */
        /* goto L_c34; */
        /* L_c1c:; */
        search_beam_proc_init();
        /* goto L_c3c; */
        /* L_c28:; */
        search_fire_proc_init();
        /* goto L_c3c; */
        /* L_c34:; */
        search_beam_proc_init();
        /* L_c3c:; */
        /* if (base != 0) goto L_c54; */
        /* field_0x377 = 1; */
        /* L_c54:; */
        return m_event_flag__8daMozo_c;
}

/* 00000D58-00000DE0       .text search_beam_proc_init__8daMozo_cFv */
void daMozo_c::search_beam_proc_init() {
    setAnm(1, C_@4140);
    /* field_0x10 = 0; */
    /* field_0x10 = 0; */
    /* field_0xc = 0; */
    /* field_0xc = 0; */
    /* return this->field_0x2c8; */
}

/* 00000DE0-00001230       .text search_beam_proc__8daMozo_cFv */
void daMozo_c::search_beam_proc() {
        /* _savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* if (this->field_0x68 <= base) goto L_da8; */
        __mi();
        quat_rotVec();
        /* C_QUATSlerp((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 860)); */
        /* L_da8:; */
        /* ((daMozo_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->anime_proc(); */
        /* if (/ * ble * / 1) goto L_1110; */
        /* ((daMozo_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->getBeamActor(this->field_0x354); */
        /* ((daMozo_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->getBeamActor(this->field_0x358); */
        /* if (((daMozo_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->getBeamActor(this->field_0x354) == 0) goto L_1110; */
        /* if (((daMozo_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->getBeamActor(this->field_0x358) == 0) goto L_1110; */
        __mi();
        cM_atan2s(Zero__5csXyz);
        PSVECSquareMag();
        /* if (/ * ble * / 1) goto L_efc; */
        /* goto L_f00; */
        /* L_efc:; */
        /* L_f00:; */
        cM_atan2s(C_@4520);
        /* if (this->field_0x690 != 0) goto L_f68; */
        /* field_0x690 = ((dPa_control_c*)(this->field_0x5ab8))->set(0); */
        /* L_f68:; */
        /* if (this->field_0x5f4 != 0) goto L_fbc; */
        /* field_0x5a8 = 0; */
        /* if (this->field_0x588 >= base) goto L_fa8; */
        /* field_0x588 = (this->field_0x588 + base); */
        /* goto L_fd4; */
        /* L_fa8:; */
        /* field_0x5a8 = 0; */
        /* field_0x588 = (this->field_0x588 + base); */
        /* field_0x5f4 = 1; */
        /* goto L_fd4; */
        /* L_fbc:; */
        /* field_0x5a8 = 0; */
        /* field_0x588 = 0; */
        /* L_fd4:; */
        current = 0;
        /* field_0x1fc = 0; */
        /* field_0x200 = 0; */
        /* field_0x694 = 0; */
        /* if (this->field_0x690 != 0) goto L_1068; */
        /* field_0x690 = ((dPa_control_c*)(this->field_0x5ab8))->set(0); */
        /* L_1068:; */
        /* if (this->field_0x5f4 != 0) goto L_10bc; */
        /* field_0x5a8 = 0; */
        /* if (this->field_0x588 >= base) goto L_10a8; */
        /* field_0x588 = (this->field_0x588 + base); */
        /* goto L_10d4; */
        /* L_10a8:; */
        /* field_0x5a8 = 0; */
        /* field_0x588 = (this->field_0x588 + base); */
        /* field_0x5f4 = 1; */
        /* goto L_10d4; */
        /* L_10bc:; */
        /* field_0x5a8 = 0; */
        /* field_0x588 = 0; */
        /* L_10d4:; */
        current = 0;
        /* field_0x1fc = 0; */
        /* field_0x200 = 0; */
        /* field_0x694 = 0; */
        /* L_1110:; */
        /* if (((daMozo_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->checkRange(1) != 0) goto L_112c; */
        /* L_112c:; */
        /* return _restgpr_29(((daMozo_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->towait_proc_init()); */
}

/* 00001230-000012C0       .text search_fire_proc_init__8daMozo_cFv */
void daMozo_c::search_fire_proc_init() {
    setAnm(1, C_@4140);
    /* field_0x10 = 0; */
    /* field_0x10 = 0; */
    /* field_0xc = 0; */
    /* field_0xc = 0; */
    /* field_0x370 = 0; */
    /* return this->field_0x2c8; */
}

/* 000012C0-000017F4       .text search_fire_proc__8daMozo_cFv */
void daMozo_c::search_fire_proc() {
        /* if (this->field_0x68 > base) goto L_121c; */
        /* if (m36C == 4) goto L_121c; */
        /* if (m36C != 3) goto L_12b8; */
        /* L_121c:; */
        /* mDoMtx_YrotS(((char*)&now__14mDoMtx_stack_c + 0), this->field_0x206); */
        PSMTXMultVec(((char*)&now__14mDoMtx_stack_c + 0), ((char*)&l_HIO + 60));
        PSVECAdd();
        PSVECSubtract();
        __mi();
        quat_rotVec();
        C_QUATSlerp((this + 860));
        /* L_12b8:; */
        anime_proc();
        /* if (m36C == 1) goto L_12d4; */
        /* if (m36C != 3) goto L_16b0; */
        /* L_12d4:; */
        /* if (/ * ble * / 1) goto L_16ec; */
        /* if (this->field_0x378 != 0) goto L_136c; */
        /* field_0x378 = ((dPa_control_c*)(this->field_0x5ab8))->set(0); */
        /* L_136c:; */
        /* if (this->field_0x37c != 0) goto L_13c4; */
        /* field_0x37c = ((dPa_control_c*)(this->field_0x5ab8))->set(2); */
        /* L_13c4:; */
        PSMTXCopy((this->field_0x8c + 96), ((char*)&now__14mDoMtx_stack_c + 0));
        mDoMtx_XYZrotM(((char*)&now__14mDoMtx_stack_c + 0), 1600, 16384);
        ((mDoMtx_stack_c*)(C_@4728))->transM();
        /* if (this->field_0x378 == 0) goto L_1434; */
        JPASetRMtxTVecfromMtx(((char*)&now__14mDoMtx_stack_c + 0), (this->field_0x378 + 424), (this->field_0x378 + 484));
        /* L_1434:; */
        /* if (this->field_0x37c == 0) goto L_1454; */
        JPASetRMtxTVecfromMtx(((char*)&now__14mDoMtx_stack_c + 0), (this->field_0x37c + 424), (this->field_0x37c + 484));
        /* L_1454:; */
        __mi();
        /* if (normalizeRS() != 0) goto L_14a8; */
        /* L_14a8:; */
        /* if (/ * ble * / 1) goto L_1520; */
        /* goto L_1524; */
        /* L_1520:; */
        /* L_1524:; */
        /* if (/ * ble * / 1) goto L_1538; */
        /* goto L_153c; */
        /* L_1538:; */
        /* L_153c:; */
        PSVECScale();
        PSVECAdd();
        /* field_0x4d4 = 0; */
        /* field_0x4d8 = 0; */
        /* field_0x4dc = 0; */
        /* field_0x4e0 = 0; */
        /* field_0x4e4 = 0; */
        /* field_0x4e8 = 0; */
        /* field_0x4f0 = 0; */
        /* field_0x438 = 0; */
        /* field_0x43c = 0; */
        /* field_0x440 = 0; */
        ((cCcS*)(((char*)&g_dComIfG_gameInfo + 9892)))->Set((this + 956));
        /* field_0x348 = 0; */
        /* field_0x34c = 0; */
        /* field_0x350 = 0; */
        ((JAIZelBasic*)(base))->seStart(28723, (this + 840), 0, 0, 0);
        /* field_0x370 = (this->field_0x370 + 1); */
        /* if (this->field_0x370 <= 60) goto L_16ec; */
        setAnm(4, C_@4140);
        /* if (this->field_0x378 == 0) goto L_166c; */
        /* field_0x38 = 0; */
        /* field_0x60 = -1; */
        /* field_0x378 = 0; */
        /* L_166c:; */
        /* if (this->field_0x37c == 0) goto L_16a4; */
        /* field_0x38 = 0; */
        /* field_0x60 = -1; */
        /* field_0x37c = 0; */
        /* L_16a4:; */
        towait_proc_init();
        /* goto L_16ec; */
        /* L_16b0:; */
        /* if (0 != 4) goto L_16ec; */
        /* if (this->field_0x68 >= base) goto L_16ec; */
        setAnm(3, C_@4732);
        /* field_0x370 = 0; */
        /* L_16ec:; */
        return setAnm(3, C_@4732);
}

/* 000017F4-00001874       .text towait_proc_init__8daMozo_cFv */
void daMozo_c::towait_proc_init() {
    setAnm(2, C_@4140);
    /* field_0x64 = 0; */
    /* field_0xc = 0; */
    /* field_0xc = 0; */
    /* return this->field_0x2c8; */
}

/* 00001874-00001B3C       .text towait_proc__8daMozo_cFv */
void daMozo_c::towait_proc() {
        /* ((daMozo_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->getBeamActor(this->field_0x354); */
        /* ((daMozo_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->getBeamActor(this->field_0x358); */
        /* C_QUATSlerp((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 860), ((char*)&ZeroQuat + 0), (_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 860), C_@4825); */
        /* ((daMozo_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->anime_proc(); */
        /* if (field_0x376 != 0) goto L_19d4; */
        /* if (((daMozo_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->getBeamActor(this->field_0x354) == 0) goto L_1a38; */
        /* if (((daMozo_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->getBeamActor(this->field_0x358) == 0) goto L_1a38; */
        /* if (this->field_0x690 == 0) goto L_1824; */
        /* field_0x60 = -1; */
        /* field_0x690 = 0; */
        /* L_1824:; */
        /* if (this->field_0x5f4 != 1) goto L_189c; */
        /* if (this->field_0x588 >= base) goto L_1854; */
        /* field_0x588 = (this->field_0x588 + base); */
        /* L_1854:; */
        /* if (this->field_0x5a8 >= base) goto L_1880; */
        /* field_0x5a8 = (this->field_0x5a8 + base); */
        /* goto L_18b0; */
        /* L_1880:; */
        /* field_0x5a8 = 0; */
        /* field_0x588 = 0; */
        /* field_0x5f4 = 0; */
        /* goto L_18ac; */
        /* L_189c:; */
        /* field_0x588 = 0; */
        /* field_0x5a8 = 0; */
        /* L_18ac:; */
        /* L_18b0:; */
        /* if (this->field_0x690 == 0) goto L_18d8; */
        /* field_0x60 = -1; */
        /* field_0x690 = 0; */
        /* L_18d8:; */
        /* if (this->field_0x5f4 != 1) goto L_1950; */
        /* if (this->field_0x588 >= base) goto L_1908; */
        /* field_0x588 = (this->field_0x588 + base); */
        /* L_1908:; */
        /* if (this->field_0x5a8 >= base) goto L_1934; */
        /* field_0x5a8 = (this->field_0x5a8 + base); */
        /* goto L_1964; */
        /* L_1934:; */
        /* field_0x5a8 = 0; */
        /* field_0x588 = 0; */
        /* field_0x5f4 = 0; */
        /* goto L_1960; */
        /* L_1950:; */
        /* field_0x588 = 0; */
        /* field_0x5a8 = 0; */
        /* L_1960:; */
        /* L_1964:; */
        /* if (1 == 0) goto L_1a38; */
        /* if (1 == 0) goto L_1a38; */
        /* if (this->field_0x368 <= base) goto L_1a38; */
        /* if (this->field_0x68 >= base) goto L_1a38; */
        /* if (this->field_0x10 >= base) goto L_1a38; */
        /* if (this->field_0x10 >= base) goto L_1a38; */
        /* ((daMozo_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->wait_proc_init(); */
        /* goto L_1a38; */
        /* L_19d4:; */
        /* if (1 != 1) goto L_1a38; */
        /* if (this->field_0x368 <= base) goto L_1a38; */
        /* if (this->field_0x68 >= base) goto L_1a38; */
        /* if (this->field_0x10 >= base) goto L_1a38; */
        /* if (this->field_0x10 >= base) goto L_1a38; */
        /* L_1a38:; */
        /* return _restgpr_29(((daMozo_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->wait_proc_init()); */
}

/* 00001B3C-00001D8C       .text checkRange__8daMozo_cFi */
void daMozo_c::checkRange(int) {
    /* _savegpr_29(this, int, arg2, arg3, arg4, arg5, arg6, arg7); */
    if (/* bne */ 1) {
        /* if (this->field_0x2b0 > base) goto L_1ab0; */
        return 0;
    }
    /* L_1ab0:; */
    __mi();
    PSVECSquareMag();
    }
    if (this->field_0x34 < base) {
        return 0;
    }

    PSVECDotProduct();
    /* if (cLib_distanceAngleS(fopAcM_searchActorAngleY(_savegpr_29(this, int, arg2, arg3, arg4, arg5, arg6, arg7), this->field_0x5b38), this->field_0x206) < (this->field_0xe & 65535)) { */
        /* if (/ * bge * / 1) goto L_1c6c; */
        /* if (/ * ble * / 1) goto L_1c6c; */
        /* return 1; */
    /* L_1c6c:; */
    return _restgpr_29(0);


/* 00001D8C-00001F70       .text setAnm__8daMozo_cFif */
void daMozo_c::setAnm(int, float) {
        m36C = int;
        /* if (int == 2) goto L_1d7c; */
        /* if (/ * bge * / 1) goto L_1ce0; */
        /* if (int == 0) goto L_1cf0; */
        /* if (/ * bge * / 1) goto L_1d34; */
        /* goto L_1e68; */
        /* L_1ce0:; */
        /* if (int == 4) goto L_1e0c; */
        /* if (/ * bge * / 1) goto L_1e68; */
        /* goto L_1dc4; */
        /* L_1cf0:; */
        /* ((dRes_control_c*)(((char*)&@stringBase0 + 0)))->getRes(6, ((char*)&g_dComIfG_gameInfo + -16460), 64, arg4, arg5); */
        /* goto L_1e58; */
        /* L_1d34:; */
        ((dRes_control_c*)(((char*)&@stringBase0 + 0)))->getRes(6, ((char*)&g_dComIfG_gameInfo + -16460), 64);
        /* goto L_1e58; */
        /* L_1d7c:; */
        ((dRes_control_c*)(((char*)&@stringBase0 + 0)))->getRes(6, ((char*)&g_dComIfG_gameInfo + -16460), 64);
        /* goto L_1e58; */
        /* L_1dc4:; */
        ((dRes_control_c*)(((char*)&@stringBase0 + 0)))->getRes(6, ((char*)&g_dComIfG_gameInfo + -16460), 64);
        /* goto L_1e58; */
        /* L_1e0c:; */
        ((dRes_control_c*)(((char*)&@stringBase0 + 0)))->getRes(6, ((char*)&g_dComIfG_gameInfo + -16460), 64);
        /* goto L_1e58; */
        /* goto L_1e68; */
        /* L_1e58:; */
        /* L_1e68:; */
        return ((mDoExt_McaMorf*)(mAnimMorf))->setAnm(((dRes_control_c*)(((char*)&@stringBase0 + 0)))->getRes(6, ((char*)&g_dComIfG_gameInfo + -16460), 64), 0, 0);
}

/* 00001F70-00002228       .text CreateInit__8daMozo_cFv */
cPhs_State daMozo_c::CreateInit() {
    /* Nonmatching */
    J3DModelData* mdlData = mAnimMorf->getModel()->getModelData();

    u8 temp = fopAcM_GetParam(this) & 0xFF;
    if (temp == 0xFF) {
        temp = 0;
    }
    /* field_0x376 = cLib_minMaxLimit<u8>(temp, 0, 2); */

    mAnimMorf->getModel()->setUserArea((uintptr_t)this);
    for (u16 i = 0; i < mdlData->getJointNum(); i++) {
        if (i == MOZ_JNT_ATAMA_J_e) {
            mdlData->getJointNodePointer(i)->setCallBack(daMozo_nodeCallBack);
        }
    }

    mQuatRotation = ZeroQuat;

    fopAcM_setCullSizeBox(this, -1000.0f, -1000.0f, -1000.0f, 1000.0f, 1000.0f, 1000.0f);
    fopAcM_SetMtx(this, mAnimMorf->getModel()->getBaseTRMtx());

    // TODO: Insert missing code here

    set_mtx();
    mAnimMorf->calc();
    wait_proc_init();

    if (l_HIO.mNo < 0) {
        l_HIO.mNo = mDoHIO_createChild("\203\202\220\316\221\234", &l_HIO); // "Mo Statue" (mo sekizou)
    }

    return cPhs_COMPLEATE_e;
}

/* 00002228-000023B0       .text _create__8daMozo_cFv */
cPhs_State daMozo_c::_create() {
    fopAcM_ct(this, daMozo_c);

    cPhs_State result = dComIfG_resLoad(&mPhs, "Mozo");

    if (result == cPhs_COMPLEATE_e) {
        if (fopAcM_entrySolidHeap(this, CheckCreateHeap, 0x1AA0)) {
            result = CreateInit();
            _execute();
        } else {
            return cPhs_ERROR_e;
        }
    }

    return result;
}

/* 000023B0-0000242C       .text _delete__8daMozo_cFv */
bool daMozo_c::_delete() {
    /* dComIfG_resDelete((this + 668), ((char*)&@stringBase0 + 0), arg2); */
    ((JAIZelBasic*)(base))->seDeleteObject((this + 840));
    if (this->field_0x4 != 0) {
        /* ((mDoHIO_subRoot_c*)(((char*)&mDoHIO_root + 4)))->deleteChild(this->field_0x4); */
        /* field_0x4 = -1; */
    }
    return 1;
}

/* 0000242C-00002498       .text getBeamActor__8daMozo_cFUi */
fopAc_ac_c* daMozo_c::getBeamActor(fpc_ProcID apid) {
    fopAc_ac_c* ac = fopAcM_SearchByID(apid);
    if (ac == NULL)
        return NULL;
    if (fopAcM_IsActor(ac) && fopAcM_GetProfName(ac) == fpcNm_Beam_e)
        return ac;
    return NULL;
}

/* 00002498-00002588       .text event_move__8daMozo_cFv */
void daMozo_c::event_move() {
        /* if (/ * beq * / 1) goto L_2484; */
        /* if (this->field_0xf8 != 2) goto L_23f0; */
        /* field_0x377 = 0; */
        base = 1;
        /* L_23f0:; */
        /* if (base != 1) goto L_243c; */
        /* if (((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->endCheckOld(((char*)&@stringBase0 + 52), arg2) == 0) goto L_243c; */
        base = 2;
        /* L_243c:; */
        /* if (base != 0) goto L_2484; */
        /* if (field_0x377 != 1) goto L_2484; */
        /* L_2484:; */
        return fopAcM_orderOtherEvent2(this, ((char*)&@stringBase0 + 52), 1);
}

/* 00002588-000025DC       .text _execute__8daMozo_cFv */
bool daMozo_c::_execute() {
    mAnimMorf->calc();

    (this->*mCurrentProc)();
    event_move();
    set_mtx();

    return true;
}

/* 000025DC-0000267C       .text _draw__8daMozo_cFv */
bool daMozo_c::_draw() {
    J3DModelData* mdlData = mAnimMorf->getModel()->getModelData();
    g_env_light.settingTevStruct(TEV_TYPE_BG0, &current.pos, &tevStr);
    g_env_light.setLightTevColorType(mAnimMorf->getModel(), &tevStr);

    mBrkAnm.entry(mdlData);
    mBtkAnm.entry(mdlData);
    mAnimMorf->entryDL();

    return true;
}

/* 0000267C-000026A0       .text daMozo_Draw__FP8daMozo_c */
static BOOL daMozo_Draw(daMozo_c* i_this) {
    return i_this->_draw();
}

/* 000026A0-000026C4       .text daMozo_Execute__FP8daMozo_c */
static BOOL daMozo_Execute(daMozo_c* i_this) {
    return i_this->_execute();
}

/* 000026C4-000026CC       .text daMozo_IsDelete__FP8daMozo_c */
static BOOL daMozo_IsDelete(daMozo_c*) {
    return 1;
}

/* 000026CC-000026F0       .text daMozo_Delete__FP8daMozo_c */
static BOOL daMozo_Delete(daMozo_c* i_this) {
    return i_this->_delete();

/* 000026F0-00002710       .text daMozo_Create__FP10fopAc_ac_c */
static cPhs_State daMozo_Create(fopAc_ac_c* i_this) {
    return static_cast<daMozo_c*>(i_this)->_create();

static actor_method_class l_daMozo_Method = {
    (process_method_func)daMozo_Create,
    (process_method_func)daMozo_Delete,
    (process_method_func)daMozo_Execute,
    (process_method_func)daMozo_IsDelete,
    (process_method_func)daMozo_Draw,
};

actor_process_profile_definition g_profile_MOZO = {
    /* Layer ID     */ fpcLy_CURRENT_e,
    /* List ID      */ 0x0007,
    /* List Prio    */ fpcPi_CURRENT_e,
    /* Proc Name    */ fpcNm_MOZO_e,
    /* Proc SubMtd  */ &g_fpcLf_Method.base,
    /* Size         */ sizeof(daMozo_c),
    /* Size Other   */ 0,
    /* Parameters   */ 0,
    /* Leaf SubMtd  */ &g_fopAc_Method.base,
    /* Draw Prio    */ fpcDwPi_MOZO_e,
    /* Actor SubMtd */ &l_daMozo_Method,
    /* Status       */ fopAcStts_CULL_e | fopAcStts_UNK40000_e,
    /* Group        */ fopAc_ACTOR_e,
    /* Cull Type    */ fopAc_CULLBOX_CUSTOM_e,
};

/* 由 fix_decomp_braces.py 补齐：反编译产物末尾缺 2 个 } */
}}
