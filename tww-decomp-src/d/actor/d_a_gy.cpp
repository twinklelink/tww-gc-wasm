/**
 * d_a_gy.cpp
 * Enemy - Gyorg
 */

#include "d/dolzel_rel.h" // IWYU pragma: keep
#include "d/actor/d_a_gy.h"
#include "d/d_cc_d.h"

static dCcD_SrcSph l_sph_head_src = {
    // dCcD_SrcGObjInf
    {
        /* Flags             */ 0,
        /* SrcObjAt  Type    */ AT_TYPE_UNK800,
        /* SrcObjAt  Atp     */ 0,
        /* SrcObjAt  SPrm    */ cCcD_AtSPrm_GrpAll_e,
        /* SrcObjTg  Type    */ AT_TYPE_ALL & ~AT_TYPE_WATER & ~AT_TYPE_UNK20000 & ~AT_TYPE_WIND & ~AT_TYPE_UNK400000 & ~AT_TYPE_LIGHT,
        /* SrcObjTg  SPrm    */ cCcD_TgSPrm_Set_e | cCcD_TgSPrm_IsOther_e,
        /* SrcObjCo  SPrm    */ cCcD_CoSPrm_Set_e | cCcD_CoSPrm_IsOther_e | cCcD_CoSPrm_VsGrpAll_e,
        /* SrcGObjAt Se      */ 0,
        /* SrcGObjAt HitMark */ dCcG_AtHitMark_None_e,
        /* SrcGObjAt Spl     */ dCcG_At_Spl_UNK0,
        /* SrcGObjAt Mtrl    */ 0,
        /* SrcGObjAt SPrm    */ 0,
        /* SrcGObjTg Se      */ dCcG_SE_UNK23,
        /* SrcGObjTg HitMark */ 0,
        /* SrcGObjTg Spl     */ dCcG_Tg_Spl_UNK0,
        /* SrcGObjTg Mtrl    */ 0,
        /* SrcGObjTg SPrm    */ dCcG_TgSPrm_NoConHit_e,
        /* SrcGObjCo SPrm    */ 0,
    },
    // cM3dGSphS
    {{
        /* Center */ {0.0f, 0.0f, 0.0f},
        /* Radius */ 180.0f,
    }},
};


static dCcD_SrcSph l_sph_src = {
    // dCcD_SrcGObjInf
    {
        /* Flags             */ 0,
        /* SrcObjAt  Type    */ 0,
        /* SrcObjAt  Atp     */ 0,
        /* SrcObjAt  SPrm    */ cCcD_AtSPrm_GrpAll_e,
        /* SrcObjTg  Type    */ AT_TYPE_ALL & ~AT_TYPE_WATER & ~AT_TYPE_UNK20000 & ~AT_TYPE_WIND & ~AT_TYPE_UNK400000 & ~AT_TYPE_LIGHT,
        /* SrcObjTg  SPrm    */ cCcD_TgSPrm_Set_e | cCcD_TgSPrm_IsOther_e,
        /* SrcObjCo  SPrm    */ cCcD_CoSPrm_Set_e | cCcD_CoSPrm_IsOther_e | cCcD_CoSPrm_VsGrpAll_e,
        /* SrcGObjAt Se      */ 0,
        /* SrcGObjAt HitMark */ dCcG_AtHitMark_None_e,
        /* SrcGObjAt Spl     */ dCcG_At_Spl_UNK0,
        /* SrcGObjAt Mtrl    */ 0,
        /* SrcGObjAt SPrm    */ 0,
        /* SrcGObjTg Se      */ dCcG_SE_UNK23,
        /* SrcGObjTg HitMark */ 0,
        /* SrcGObjTg Spl     */ dCcG_Tg_Spl_UNK0,
        /* SrcGObjTg Mtrl    */ 0,
        /* SrcGObjTg SPrm    */ dCcG_TgSPrm_NoConHit_e,
        /* SrcGObjCo SPrm    */ 0,
    },
    // cM3dGSphS
    {{
        /* Center */ {0.0f, 0.0f, 0.0f},
        /* Radius */ 180.0f,
    }},
};


static dCcD_SrcCps l_cps_src = {
    // dCcD_SrcGObjInf
    {
        /* Flags             */ 0,
        /* SrcObjAt  Type    */ 0,
        /* SrcObjAt  Atp     */ 0,
        /* SrcObjAt  SPrm    */ cCcD_AtSPrm_GrpAll_e,
        /* SrcObjTg  Type    */ AT_TYPE_ALL & ~AT_TYPE_WATER & ~AT_TYPE_UNK20000 & ~AT_TYPE_WIND & ~AT_TYPE_UNK400000 & ~AT_TYPE_LIGHT,
        /* SrcObjTg  SPrm    */ cCcD_TgSPrm_Set_e | cCcD_TgSPrm_IsOther_e,
        /* SrcObjCo  SPrm    */ cCcD_CoSPrm_Set_e | cCcD_CoSPrm_IsOther_e | cCcD_CoSPrm_VsGrpAll_e,
        /* SrcGObjAt Se      */ 0,
        /* SrcGObjAt HitMark */ dCcG_AtHitMark_None_e,
        /* SrcGObjAt Spl     */ dCcG_At_Spl_UNK0,
        /* SrcGObjAt Mtrl    */ 0,
        /* SrcGObjAt SPrm    */ 0,
        /* SrcGObjTg Se      */ dCcG_SE_UNK23,
        /* SrcGObjTg HitMark */ 0,
        /* SrcGObjTg Spl     */ dCcG_Tg_Spl_UNK0,
        /* SrcGObjTg Mtrl    */ 0,
        /* SrcGObjTg SPrm    */ dCcG_TgSPrm_NoConHit_e,
        /* SrcGObjCo SPrm    */ 0,
    },
    // cM3dGCpsS
    {{
        /* Start  */ {0.0f, 0.0f, 0.0f},
        /* End    */ {0.0f, 0.0f, 0.0f},
        /* Radius */ 60.0f,
    }},
};


/* 000000EC-000003CC       .text __ct__10daGy_HIO_cFv */
daGy_HIO_c::daGy_HIO_c() {
    /* field_0x0 = 0; */
    /* field_0x0 = 0; */
    /* field_0xc = 200; */
    /* field_0x4 = 0; */
    /* field_0x8 = 0; */
    /* field_0x10 = 0; */
    /* field_0x14 = 0; */
    /* field_0x18 = 0; */
    /* field_0x1c = 0; */
    /* field_0x24 = 0; */
    /* field_0x20 = 0; */
    /* field_0x28 = 0; */
    /* field_0x2c = 0; */
    /* field_0x30 = 0; */
    /* field_0x34 = 0; */
    /* field_0x38 = 0; */
    /* field_0x3c = 0; */
    /* field_0x48 = 0; */
    /* field_0x4c = 0; */
    /* field_0x50 = 0; */
    /* field_0x54 = 0; */
    /* field_0x58 = 0; */
    /* field_0x5c = 0; */
    /* field_0x60 = 0; */
    /* field_0x64 = 0; */
    /* field_0x68 = 0; */
    /* field_0x6c = 0; */
    /* field_0x70 = 0; */
    /* field_0x198 = 1; */
    /* field_0x40 = 0; */
    /* field_0x44 = 0; */
    /* field_0x74 = 0; */
    /* field_0x78 = 0; */
    /* field_0x7c = 0; */
    /* field_0x80 = 0; */
    /* field_0x84 = 0; */
    /* field_0x88 = 0; */
    /* field_0x8c = 0; */
    /* field_0x90 = 0; */
    /* field_0x9c = 0; */
    /* field_0xa4 = 0; */
    /* field_0xa8 = 0; */
    /* field_0x94 = 0; */
    /* field_0x95 = 0; */
    /* field_0x96 = 0; */
    /* field_0x97 = 0; */
    /* field_0x98 = 0; */
    /* field_0x99 = 0; */
    /* field_0xa0 = 0; */
    /* field_0xac = 0; */
    /* field_0xb4 = 0; */
    /* field_0xb0 = 0; */
    /* field_0xb8 = 0; */
    /* field_0xbc = 0; */
    /* field_0xc0 = 0; */
    /* field_0xc4 = 0; */
    /* field_0x178 = 0; */
    /* field_0xc8 = 0; */
    /* field_0xd4 = 0; */
    /* field_0xd8 = 0; */
    /* field_0xdc = 0; */
    /* field_0xe0 = 0; */
    /* field_0xe4 = 0; */
    /* field_0xe8 = 0; */
    /* field_0xec = 0; */
    /* field_0xf0 = 0; */
    /* field_0xf4 = 0; */
    /* field_0xf8 = 0; */
    /* field_0xfc = 0; */
    /* field_0x100 = 0; */
    /* field_0xcc = 0; */
    /* field_0xd0 = 0; */
    /* field_0x104 = 0; */
    /* field_0x108 = 0; */
    /* field_0x10c = 120; */
    /* field_0x10e = 60; */
    /* field_0x110 = 120; */
    /* field_0x112 = 180; */
    /* field_0x114 = 360; */
    /* field_0x116 = 90; */
    /* field_0x118 = 240; */
    /* field_0x188 = 0; */
    /* field_0x12c = 0; */
    /* field_0x144 = 0; */
    /* field_0x148 = 0; */
    /* field_0x150 = 0; */
    /* field_0x154 = 0; */
    /* field_0x158 = 0; */
    /* field_0x130 = 100; */
    /* field_0x132 = 300; */
    /* field_0x134 = 0; */
    /* field_0x138 = 0; */
    /* field_0x13c = 0; */
    /* field_0x15c = 0; */
    /* field_0x160 = 0; */
    /* field_0x140 = 5376; */
    /* field_0x142 = 2048; */
    /* field_0x164 = 90; */
    /* field_0x168 = 0; */
    /* field_0x16c = 0; */
    /* field_0x170 = 0; */
    /* field_0x174 = 0; */
    /* field_0x17c = 0; */
    /* field_0x184 = 0; */
    /* field_0x180 = 8192; */
    /* field_0x18c = 0; */
    /* field_0x190 = 0; */
    /* field_0x194 = 0; */
    return arg0;
}

/* 00000450-0000049C       .text nodeControl_CB__FP7J3DNodei */
static BOOL nodeControl_CB(J3DNode*, int) {
    if (int == 0) {
        /* if (this->field_0x14 != 0) goto L_39c; */
        /* ((daGy_c*)(this->field_0x14))->_nodeControl(arg0, this->field_0x38); */
    }
    /* L_39c:; */
    return 1;
}

/* 0000049C-00000888       .text _nodeControl__6daGy_cFP7J3DNodeP8J3DModel */
void daGy_c::_nodeControl(J3DNode*, J3DModel*) {
        /* _savegpr_26(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* if (/ * bne * / 1) goto L_444; */
        PSMTXCopy();
        PSMTXMultVec(((char*)&now__14mDoMtx_stack_c + 0));
        /* L_444:; */
        PSMTXCopy();
        PSMTXTrans(((char*)&now__14mDoMtx_stack_c + 0));
        /* if (/ * bne * / 1) goto L_6c0; */
        __mi();
        PSVECSquareMag();
        /* if (/ * ble * / 1) goto L_538; */
        /* goto L_53c; */
        /* L_538:; */
        /* L_53c:; */
        /* if (cLib_distanceAngleS(this->field_0x20e, fopAcM_searchActorAngleY(_savegpr_26(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7), this->field_0x5b38)) >= this->field_0x180) goto L_698; */
        /* if (/ * bge * / 1) goto L_698; */
        /* if ((mD15 & 255) == 8) goto L_698; */
        /* if ((mD15 & 255) == 9) goto L_698; */
        /* if ((mD15 & 255) == 6) goto L_698; */
        /* if ((mD15 & 255) == 11) goto L_698; */
        /* if ((mD15 & 255) == 3) goto L_698; */
        /* field_0xcec = 0; */
        /* field_0xcf0 = 0; */
        /* field_0xcf4 = 0; */
        /* if (m2B0 != 2) goto L_5e8; */
        /* daSea_calcWave(cLib_distanceAngleS(this->field_0x20e, fopAcM_searchActorAngleY(_savegpr_26(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7), this->field_0x5b38)), ((char*)&l_HIO + 0)); */
        /* field_0xcf0 = 0; */
        /* L_5e8:; */
        /* if (m2B0 != 3) goto L_618; */
        /* if (this->field_0x928 != 1) goto L_618; */
        /* field_0xcf0 = (this->field_0xcf0 + this->field_0xa4); */
        /* L_618:; */
        __mi();
        quat_rotVec();
        /* C_QUATSlerp((_savegpr_26(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 3320)); */
        /* goto L_6b8; */
        /* L_698:; */
        /* C_QUATSlerp((_savegpr_26(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 3320), ((char*)&ZeroQuat + 0), (_savegpr_26(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 3320), ((char*)&l_HIO + 0)); */
        /* L_6b8:; */
        /* ((mDoMtx_stack_c*)((_savegpr_26(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 3320)))->quatM(); */
        /* L_6c0:; */
        PSMTXConcat(((char*)&now__14mDoMtx_stack_c + 0));
        /* if (/ * bne * / 1) goto L_720; */
        PSMTXMultVec(((char*)&now__14mDoMtx_stack_c + 0));
        /* L_720:; */
        /* if (/ * bne * / 1) goto L_754; */
        PSMTXMultVec(((char*)&now__14mDoMtx_stack_c + 0));
        /* L_754:; */
        PSMTXCopy(((char*)&now__14mDoMtx_stack_c + 0), ((char*)&mCurrentMtx__6J3DSys + 0));
        return _restgpr_26(PSMTXCopy(((char*)&now__14mDoMtx_stack_c + 0)));
}

/* 00000888-000008A8       .text createHeap_CB__FP10fopAc_ac_c */
static BOOL createHeap_CB(fopAc_ac_c* i_this) {
    static_cast<daGy_c*>(i_this)->_createHeap();
    return TRUE;
}

/* 000008A8-00000AAC       .text _createHeap__6daGy_cFv */
void daGy_c::_createHeap() {
        /* _savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        ((dRes_control_c*)(((char*)&m_arc_name__6daGy_c + 0)))->getRes(15);
        /* if (/ * bne * / 1) goto L_834; */
        ((JUTAssertion*)(((JUTAssertion*)(((dRes_control_c*)(((char*)&m_arc_name__6daGy_c + 0)))->getRes(15)))->getSDevice()))->showAssert(((char*)&@stringBase0 + 0), 887, ((char*)&@stringBase0 + 11));
        OSPanic(((char*)&@stringBase0 + 0), 887, ((char*)&@stringBase0 + 26));
        /* L_834:; */
        __nw(180);
        /* if (/ * beq * / 1) goto L_8b4; */
        /* L_8b4:; */
        mpMorf = __ct(((dRes_control_c*)(((char*)&m_arc_name__6daGy_c + 0)))->getRes(11), 1);
        /* if (mpMorf == 0) goto L_8d0; */
        /* if (this->field_0x50 != 0) goto L_8d8; */
        /* L_8d0:; */
        return 0;
        /* L_8d8:; */
        /* field_0x14 = _savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* if (((mDoExt_invisibleModel*)((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 728)))->create(this->field_0x50) != 0) goto L_8fc; */
        return 0;
        /* L_8fc:; */
        /* goto L_95c; */
        /* L_904:; */
        /* if ((0 & 65535) == 8) goto L_958; */
        /* if (/ * bge * / 1) goto L_92c; */
        /* if ((0 & 65535) == 2) goto L_934; */
        /* if (/ * blt * / 1) goto L_958; */
        /* if ((0 & 65535) >= 5) goto L_934; */
        /* goto L_958; */
        /* L_92c:; */
        /* if ((0 & 65535) >= 11) goto L_958; */
        /* L_934:; */
        /* field_0x8 = 0; */
        /* L_958:; */
        /* L_95c:; */
        /* if (((0 + 1) & 65535) < this->field_0x28) goto L_904; */
        mCE4 = JntHit_create(this->field_0x50, ((char*)&search_data$4345 + 0), 8);
        /* if (mCE4 == 0) goto L_99c; */
        /* goto L_9a4; */
        /* L_99c:; */
        return 0;
        /* L_9a4:; */
        return _restgpr_28(1);
}

/* 00000AAC-00000C30       .text setMtx__6daGy_cFv */
void daGy_c::setMtx() {
    /* _savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
    /* field_0x18 = 0; */
    /* field_0x1c = 0; */
    /* field_0x20 = 0; */
    PSMTXTrans(((char*)&now__14mDoMtx_stack_c + 0));
    /* mDoMtx_ZXYrotM(((char*)&now__14mDoMtx_stack_c + 0), shape_angle, this->field_0x20e); */
    PSMTXMultVec(((char*)&now__14mDoMtx_stack_c + 0));
    if (this->field_0x94 != 0) {
    }
    ((mDoMtx_stack_c*)(((mDoMtx_stack_c*)(((char*)&l_HIO + 0)))->transM()))->transM();
    PSMTXCopy(((char*)&now__14mDoMtx_stack_c + 0), (this->field_0x50 + 36));
    /* if (m4E4 == (this->field_0x3c + this->field_0xac)) { */
    /* } else { */
        /* if (m4E4 < eventInfo) goto L_afc; */
    /* } */
    /* L_afc:; */
    /* ((mDoMtx_stack_c*)(((char*)&l_HIO + 0)))->transM(); */
    /* mDFC = 0; */
    /* field_0xe00 = 0; */
    /* field_0xe04 = 0; */
    /* return _restgpr_29(((char*)&now__14mDoMtx_stack_c + 0)); */

/* 00000C30-00000C7C       .text setAnm__6daGy_cFv */
void daGy_c::setAnm() {
    return dLib_setAnm(((char*)&m_heapsize__6daGy_c + 4));
}

/* 00000C7C-00000E74       .text setAtCollision__6daGy_cFv */
void daGy_c::setAtCollision() {
        ((cM3dGSph*)((this + 1572)))->SetR(((char*)&l_HIO + 0));
        ((cM3dGSph*)((this + 1572)))->SetC((this + 3336));
        /* if (m2B0 != 3) goto L_c68; */
        /* if (mD15 != 11) goto L_c38; */
        /* if (/ * bge * / 1) goto L_c38; */
        /* field_0x510 = 1; */
        /* field_0x520 = 2; */
        /* field_0x57b = 1; */
        /* field_0x578 = 6; */
        /* goto L_d58; */
        /* L_c38:; */
        /* field_0x520 = 0; */
        /* goto L_d58; */
        /* L_c68:; */
        /* if (this->field_0x538 == 2) goto L_c78; */
        /* if (this->field_0x538 != 5) goto L_d04; */
        /* L_c78:; */
        /* if (this->field_0x320 != 1) goto L_d58; */
        /* if (this->field_0x53c == 0) goto L_cd4; */
        ((dCcD_GAtTgCoCommonBase*)((this + 1512)))->GetAc();
        /* if (this->field_0x8 != 167) goto L_cf4; */
        /* field_0x510 = 1; */
        /* field_0x520 = 2; */
        /* field_0x57b = 1; */
        /* field_0x578 = 6; */
        /* goto L_cf4; */
        /* L_cd4:; */
        /* field_0x520 = 0; */
        /* L_cf4:; */
        /* goto L_d58; */
        /* L_d04:; */
        /* field_0x520 = 0; */
        /* if (this->field_0x53c == 0) goto L_d58; */
        /* if (m2B0 == 9) goto L_d58; */
        /* if (m2B0 == 8) goto L_d58; */
        modeDiveInit();
        /* L_d58:; */
        return ((cCcS*)(((char*)&g_dComIfG_gameInfo + 9892)))->Set((this + 1292));
}

/* 00000E74-00000F3C       .text setCollision__6daGy_cFv */
void daGy_c::setCollision() {
    /* ((cM3dGSph*)((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1872)))->SetR(l_HIO); */
    /* ((cM3dGSph*)((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1872)))->SetC((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 504)); */
    /* ((cCcS*)(((char*)&g_dComIfG_gameInfo + 9892)))->Set((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1592)); */
    /* field_0x87c = 0; */
    /* field_0x880 = 0; */
    /* field_0x884 = 0; */
    /* field_0x888 = 0; */
    /* field_0x88c = 0; */
    /* field_0x890 = 0; */
    /* field_0x898 = (this->field_0x8c * this->field_0x90); */
    /* return _restgpr_29(((cCcS*)(((char*)&g_dComIfG_gameInfo + 9892)))->Set((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1892))); */
}

/* 00000F3C-00000FC4       .text setAimSpeedF__6daGy_cFv */
void daGy_c::setAimSpeedF() {
        /* if (this->field_0x320 != 0) goto L_e94; */
        /* field_0x4f0 = 0; */
        /* field_0x4f0 = 0; */
        return this;
}

/* 00000FC4-00000FDC       .text modeDiveInit__6daGy_cFv */
void daGy_c::modeDiveInit() {
    m2B0 = 0;
    m508 = 0.0f;
}

/* 00000FDC-000012DC       .text modeDive__6daGy_cFv */
void daGy_c::modeDive() {
        /* _savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* if (mD15 == 5) goto L_11d0; */
        mD15 = 1;
        /* if (this->field_0x324 == 3) goto L_f38; */
        /* if (this->field_0xe80 == 0) goto L_f9c; */
        /* L_f38:; */
        /* cLib_addCalcAngleS2((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 518), cLib_targetAngleY((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 504), (_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 700)), 8, 1024); */
        /* field_0x4f0 = 0; */
        /* field_0x4e8 = (this->field_0x18 * this->field_0xa0); */
        /* field_0x4ec = 0; */
        /* goto L_11d0; */
        /* L_f9c:; */
        /* field_0x4e8 = 0; */
        /* field_0x4ec = 0; */
        /* fopAcM_searchActorDistance(((char*)&l_HIO + 0), this->field_0x5b38); */
        /* if (this->field_0x312 != 1) goto L_1028; */
        /* if (m4E4 >= (this->field_0x3c + this->field_0xa0)) goto L_1028; */
        /* if (/ * ble * / 1) goto L_1028; */
        /* ((daGy_c*)(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->modeCircleInit(); */
        /* goto L_11d0; */
        /* L_1028:; */
        __mi();
        PSVECSquareMag();
        /* if (/ * ble * / 1) goto L_10c8; */
        /* L_10c8:; */
        /* if (this->field_0x5b48 == 0) goto L_11d0; */
        /* if (this->field_0x8 > this->field_0x144) goto L_10f4; */
        /* if (speedF <= this->field_0x6c) goto L_1128; */
        /* L_10f4:; */
        /* ((daGy_c*)(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->setAimSpeedF(); */
        /* cLib_addCalcAngleS2((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 518), cLib_targetAngleY((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 504), (_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 700)), 8, 1024); */
        m508 = 0;
        /* goto L_11d0; */
        /* L_1128:; */
        /* field_0x4f0 = 0; */
        __mi();
        /* cLib_addCalc2((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1288)); */
        __ml();
        __pl();
        current = 0;
        /* field_0x1fc = 0; */
        /* field_0x200 = 0; */
        /* L_11d0:; */
        /* return _restgpr_28(cLib_addCalcAngleS2((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 518), ((this->field_0x308 + -32768) & 65535), 4, 1024)); */
}

/* 000012DC-0000141C       .text modeCircleInit__6daGy_cFv */
void daGy_c::modeCircleInit() {
    m2B0 = 1;
    if (this->field_0x320 == 0) {
        cM_rndF(C_@4676);
    } else {
        /* if (/ * bne * / 1) goto L_1304; */
        cM_rndF(C_@4676);
    }
    /* L_1304:; */
    m508 = 0;
    return C_@4142;
}

/* 0000141C-000016E4       .text modeCircle__6daGy_cFv */
void daGy_c::modeCircle() {
        /* _savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* if (mD15 == 5) goto L_15d8; */
        mD15 = 1;
        /* field_0x4e8 = 0; */
        /* field_0x4ec = 0; */
        /* if (this->field_0x312 != 0) goto L_1394; */
        /* ((daGy_c*)(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->modeDiveInit(); */
        /* goto L_15d8; */
        /* L_1394:; */
        __mi();
        PSVECSquareMag();
        /* if (/ * ble * / 1) goto L_1434; */
        /* L_1434:; */
        /* if (this->field_0x5b48 == 0) goto L_15d8; */
        /* if (this->field_0x8 > this->field_0x144) goto L_1460; */
        /* if (speedF <= this->field_0x6c) goto L_14e4; */
        /* L_1460:; */
        /* ((daGy_c*)(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->setAimSpeedF(); */
        /* fopAcM_searchActorDistance(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7), this->field_0x5b38); */
        /* if (/ * bge * / 1) goto L_149c; */
        /* ((daGy_c*)(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->modeDiveInit(); */
        /* goto L_15d8; */
        /* L_149c:; */
        /* if (speedF <= this->field_0x70) goto L_14b8; */
        /* ((daGy_c*)(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->modeWithCircleInit(); */
        /* goto L_15d8; */
        /* L_14b8:; */
        /* cLib_addCalcAngleS2((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 518), cLib_targetAngleY((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 504), (_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 700)), 8, 1024); */
        m508 = 0;
        /* goto L_15d8; */
        /* L_14e4:; */
        /* field_0x4f0 = 0; */
        __mi();
        /* cLib_addCalc2((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1288)); */
        __ml();
        __pl();
        current = 0;
        /* field_0x1fc = 0; */
        /* field_0x200 = 0; */
        /* cLib_addCalcAngleS2((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 518), ((this->field_0x308 + -32768) & 65535), 4, 1024); */
        /* if (cLib_calcTimer<i>__FPi((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 2324)) != 0) goto L_15d8; */
        /* if (/ * bne * / 1) goto L_15d8; */
        /* if (this->field_0x320 != 0) goto L_15c8; */
        /* ((daGy_c*)(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->modeAttackPlayerInit(); */
        /* goto L_15d8; */
        /* L_15c8:; */
        /* if (this->field_0x320 != 1) goto L_15d8; */
        /* L_15d8:; */
        /* return _restgpr_28(((daGy_c*)(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->modeAttackInit()); */
}

/* 000016E4-00001788       .text modeWithCircleInit__6daGy_cFv */
void daGy_c::modeWithCircleInit() {
    m2B0 = 6;
    cM_rndF(C_@4676);
    /* if (this->field_0x4f8 <= this->field_0x130) { */
    /* field_0x914 = (this->field_0x110 + this->field_0x4f8); */
    /* return this->field_0x110; */

/* 00001788-000019AC       .text modeWithCircle__6daGy_cFv */
void daGy_c::modeWithCircle() {
        /* _savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* if (mD15 == 5) goto L_18a0; */
        /* field_0x4e8 = 0; */
        /* field_0x4ec = 0; */
        /* if (this->field_0x312 != 0) goto L_16f8; */
        /* ((daGy_c*)(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->modeDiveInit(); */
        /* goto L_18a0; */
        /* L_16f8:; */
        /* if (this->field_0x5b48 == 0) goto L_18a0; */
        /* if (speedF >= this->field_0x50) goto L_1720; */
        /* ((daGy_c*)(((daGy_c*)(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->modeDiveInit()))->modeCircleInit(); */
        /* L_1720:; */
        /* cLib_addCalcAngleS2((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 518), this->field_0x20e, 8, 1024); */
        /* cLib_distanceAngleS(this->field_0x20e, fopAcM_searchActorAngleY(this->field_0x5b48, _savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7))); */
        /* fopAcM_searchActorDistance(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7), this->field_0x5b38); */
        /* if (cLib_distanceAngleS(this->field_0x20e, fopAcM_searchActorAngleY(this->field_0x5b48, _savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7))) >= this->field_0x142) goto L_1798; */
        /* if (/ * ble * / 1) goto L_1798; */
        /* field_0x4f0 = (speedF - this->field_0x4c); */
        /* goto L_17b0; */
        /* L_1798:; */
        /* field_0x4f0 = (speedF + this->field_0x40); */
        /* L_17b0:; */
        /* if (cLib_distanceAngleS(this->field_0x20e, fopAcM_searchActorAngleY(this->field_0x5b48, _savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7))) >= this->field_0x140) goto L_18a0; */
        /* if (cLib_distanceAngleS(this->field_0x20e, fopAcM_searchActorAngleY(this->field_0x5b48, _savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7))) <= this->field_0x142) goto L_18a0; */
        /* if (/ * ble * / 1) goto L_18a0; */
        /* field_0x224 = 0; */
        /* ((JAIZelBasic*)(base))->seStart(22735, (_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 608), 0, dComIfGp_getReverb((this->field_0x20a & 255)), 0); */
        mD15 = 5;
        /* ((dPa_control_c*)(this->field_0x5ab8))->set(0, 60, (_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 504), 0); */
        /* L_18a0:; */
        /* return _restgpr_28(((daGy_c*)(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->modeWithAttackInit()); */
}

/* 000019AC-00001A14       .text modeAttackInit__6daGy_cFv */
void daGy_c::modeAttackInit() {
    m2B0 = 2;
    mD15 = 3;
    /* field_0x8f8 = 0; */
    /* field_0x8fc = 0; */
    /* field_0x900 = 0; */
    /* field_0x904 = 0; */
    /* field_0x908 = 0; */
    /* field_0x90c = 0; */
    /* field_0x928 = 0; */
    return this;
}

/* 00001A14-00001A74       .text modeWithAttackInit__6daGy_cFv */
void daGy_c::modeWithAttackInit() {
    m2B0 = 5;
    /* field_0x8f8 = 0; */
    /* field_0x8fc = 0; */
    /* field_0x900 = 0; */
    /* field_0x904 = 0; */
    /* field_0x908 = 0; */
    /* field_0x90c = 0; */
    /* field_0x928 = 0; */
    return this;
}

/* 00001A74-00001D60       .text modeWithAttack__6daGy_cFv */
void daGy_c::modeWithAttack() {
        /* _savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* if (mD15 == 5) goto L_19bc; */
        mD15 = 3;
        /* L_19bc:; */
        /* if (this->field_0x320 != 0) goto L_19d8; */
        /* ((daGy_c*)(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->modeCircleInit(); */
        /* goto L_1c48; */
        /* L_19d8:; */
        /* cLib_targetAngleY((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 504), (this->field_0x5b38 + 504)); */
        /* fopAcM_searchActorDistance(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7), this->field_0x5b38); */
        /* if (this->field_0x928 == 1) goto L_1ac8; */
        /* if (/ * bge * / 1) goto L_1a20; */
        /* if (this->field_0x928 >= 0) goto L_1a2c; */
        /* goto L_1c48; */
        /* L_1a20:; */
        /* if (this->field_0x928 >= 3) goto L_1c48; */
        /* goto L_1c08; */
        /* L_1a2c:; */
        /* field_0x4e8 = 0; */
        /* field_0x4ec = 0; */
        /* cLib_addCalcAngleS2((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 518), cLib_targetAngleY((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 504), (this->field_0x5b38 + 504)), 8, 1024); */
        /* field_0x4f0 = 0; */
        /* if (/ * bge * / 1) goto L_1a88; */
        /* field_0x928 = (this->field_0x928 + 1); */
        /* L_1a88:; */
        /* if (cLib_calcTimer<i>__FPi((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 2324), ((char*)&l_HIO + 0)) != 0) goto L_1c48; */
        /* if (this->field_0x99 != 0) goto L_1ab8; */
        /* ((daGy_c*)(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->modeWithCircleInit(); */
        /* goto L_1c48; */
        /* L_1ab8:; */
        /* field_0x928 = (this->field_0x928 + 1); */
        /* goto L_1c48; */
        /* L_1ac8:; */
        /* field_0x4e8 = 0; */
        /* field_0x4ec = 0; */
        /* field_0x4f0 = 0; */
        /* if (this->field_0x53c == 0) goto L_1bc8; */
        /* ((dCcD_GAtTgCoCommonBase*)((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1512)))->GetAc(); */
        /* if (this->field_0x8 != 167) goto L_1bc8; */
        ((dVibration_c*)(((char*)&g_dComIfG_gameInfo + 22944)))->StartShock(7, -33);
        /* ((JAIZelBasic*)(base))->seStart(22739, (_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 608), 0, dComIfGp_getReverb((this->field_0x20a & 255)), 0); */
        dComIfGp_getReverb((this->field_0x20a & 255));
        /* if (_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) == 0) goto L_1bb0; */
        /* goto L_1bb4; */
        /* L_1bb0:; */
        /* L_1bb4:; */
        /* ((JAIZelBasic*)(base))->monsSeStart(18639, (_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 608), -1, 0, dComIfGp_getReverb((this->field_0x20a & 255))); */
        /* ((daGy_c*)(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->modeAttackBackInit(); */
        /* goto L_1c48; */
        /* L_1bc8:; */
        /* if (cLib_calcTimer<i>__FPi((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 2324)) != 0) goto L_1c48; */
        /* if (this->field_0x99 != 0) goto L_1bf8; */
        /* ((daGy_c*)(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->modeWithCircleInit(); */
        /* goto L_1c48; */
        /* L_1bf8:; */
        /* field_0x928 = (this->field_0x928 + 1); */
        /* goto L_1c48; */
        /* L_1c08:; */
        /* field_0x4e8 = 0; */
        /* field_0x4ec = 0; */
        /* if (m4E4 >= this->field_0x3c) goto L_1c48; */
        /* L_1c48:; */
        /* return _restgpr_28(fopAcM_delete(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7))); */
}

/* 00001D60-00001F20       .text modeAttack__6daGy_cFv */
void daGy_c::modeAttack() {
        /* _savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* if (this->field_0x320 != 0) goto L_1ca0; */
        /* ((daGy_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->modeCircleInit(); */
        /* goto L_1e0c; */
        /* L_1ca0:; */
        /* field_0x4e8 = 0; */
        /* field_0x4ec = 0; */
        /* if (cLib_calcTimer<i>__FPi((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 2324)) != 0) goto L_1cd0; */
        /* ((daGy_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->modeCircleInit(); */
        /* L_1cd0:; */
        /* fopAcM_searchActorDistance(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7), this->field_0x5b38); */
        /* if (/ * bge * / 1) goto L_1d08; */
        /* field_0x4f0 = 0; */
        /* goto L_1d30; */
        /* L_1d08:; */
        /* field_0x4f0 = 0; */
        /* cLib_addCalcAngleS2((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 518), cLib_targetAngleY((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 504), (this->field_0x5b38 + 504)), 8, 1024); */
        /* L_1d30:; */
        /* if (this->field_0x53c == 0) goto L_1e0c; */
        /* ((dCcD_GAtTgCoCommonBase*)((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1512)))->GetAc(); */
        /* if (this->field_0x8 != 167) goto L_1e0c; */
        ((dVibration_c*)(((char*)&g_dComIfG_gameInfo + 22944)))->StartShock(7, -33);
        /* ((JAIZelBasic*)(base))->seStart(22739, (_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 608), 0, dComIfGp_getReverb((this->field_0x20a & 255)), 0); */
        dComIfGp_getReverb((this->field_0x20a & 255));
        /* if (_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) == 0) goto L_1df8; */
        /* goto L_1dfc; */
        /* L_1df8:; */
        /* L_1dfc:; */
        /* ((JAIZelBasic*)(base))->monsSeStart(18639, (_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 608), -1, 0, dComIfGp_getReverb((this->field_0x20a & 255))); */
        /* L_1e0c:; */
        /* return _restgpr_29(((daGy_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->modeAttackBackInit()); */
}

/* 00001F20-00001F40       .text modeAttackPlayerInit__6daGy_cFv */
void daGy_c::modeAttackPlayerInit() {
    m2B0 = 3;
    mD15 = 2;
}

/* 00001F40-000022F8       .text modeAttackPlayer__6daGy_cFv */
void daGy_c::modeAttackPlayer() {
        /* _savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* if (this->field_0x320 != 1) goto L_1e7c; */
        /* ((daGy_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->modeCircleInit(); */
        /* goto L_21e0; */
        /* L_1e7c:; */
        /* if (this->field_0x928 == 1) goto L_1fb0; */
        /* if (/ * bge * / 1) goto L_1ea4; */
        /* if (this->field_0x928 >= 0) goto L_1eb0; */
        /* goto L_21e0; */
        /* L_1ea4:; */
        /* if (this->field_0x928 >= 3) goto L_21e0; */
        /* goto L_2080; */
        /* L_1eb0:; */
        /* field_0x4e8 = 0; */
        /* field_0x4ec = 0; */
        /* field_0x4f0 = 0; */
        /* cLib_addCalcAngleS2((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 518), cLib_targetAngleY((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 504), (this->field_0x5b38 + 504)), 8, 1024); */
        __mi();
        PSVECSquareMag();
        /* if (/ * ble * / 1) goto L_1f84; */
        /* L_1f84:; */
        /* if (this->field_0x8 >= this->field_0x148) goto L_21e0; */
        mD15 = 10;
        /* field_0x928 = (this->field_0x928 + 1); */
        /* goto L_21e0; */
        /* L_1fb0:; */
        /* field_0x4e8 = 0; */
        /* field_0x4ec = 0; */
        /* field_0x4f0 = 0; */
        /* if (mD15 != 10) goto L_2030; */
        /* if (this->field_0x5d != 0) goto L_2004; */
        /* if (/ * beq * / 1) goto L_2004; */
        /* L_2004:; */
        /* if (0 == 0) goto L_2030; */
        mD15 = 2;
        /* ((daGy_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->setAnm(); */
        mD15 = 10;
        /* field_0x924 = (this->field_0x924 + 1); */
        /* L_2030:; */
        /* if (this->field_0x924 <= this->field_0x198) goto L_205c; */
        mD15 = 11;
        /* field_0x928 = (this->field_0x928 + 1); */
        /* L_205c:; */
        /* cLib_addCalcAngleS2((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 518), cLib_targetAngleY((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 504), (this->field_0x5b38 + 504)), 8, 1024); */
        /* goto L_21e0; */
        /* L_2080:; */
        /* if (this->field_0x53c == 0) goto L_2124; */
        /* ((dCcD_GAtTgCoCommonBase*)((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1512)))->GetAc(); */
        /* if (this->field_0x8 != 169) goto L_2124; */
        /* if (this->field_0x504 != 0) goto L_2124; */
        dComIfGp_getReverb((this->field_0x20a & 255));
        /* if (_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) == 0) goto L_20e0; */
        /* goto L_20e4; */
        /* L_20e0:; */
        /* L_20e4:; */
        /* ((JAIZelBasic*)(base))->monsSeStart(18639, (_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 608), -1, 0, dComIfGp_getReverb((this->field_0x20a & 255))); */
        ((dVibration_c*)(((char*)&g_dComIfG_gameInfo + 22944)))->StartShock(4, -33);
        /* field_0x504 = 1; */
        /* L_2124:; */
        /* if (this->field_0x68 <= (this->field_0x3c + this->field_0x6f4)) goto L_2164; */
        /* field_0x4e8 = 0; */
        /* field_0x4ec = 0; */
        /* goto L_217c; */
        /* L_2164:; */
        /* field_0x4e8 = 0; */
        /* field_0x4ec = 0; */
        /* L_217c:; */
        /* field_0x4f0 = 0; */
        /* if (mD15 != 11) goto L_21e0; */
        /* if (this->field_0x5d != 0) goto L_21c0; */
        /* if (/ * beq * / 1) goto L_21c0; */
        /* L_21c0:; */
        /* if (0 == 0) goto L_21e0; */
        mD15 = 1;
        /* field_0x504 = 0; */
        /* L_21e0:; */
        /* return _restgpr_29(((daGy_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->modeDiveInit()); */
}

/* 000022F8-00002400       .text modeAttackBackInit__6daGy_cFv */
void daGy_c::modeAttackBackInit() {
    m2B0 = 4;
    mD15 = 4;
    speedF = 0;
    /* field_0x224 = 0; */
    ((JAIZelBasic*)(base))->seStart(22737, (this + 608), 0, dComIfGp_getReverb((this->field_0x20a & 255)), 0);
    /* return ((dPa_control_c*)(this->field_0x5ab8))->set(0, 60, (this + 504), 0); */
}

/* 00002400-00002560       .text modeAttackBack__6daGy_cFv */
void daGy_c::modeAttackBack() {
        /* field_0x4e8 = 0; */
        /* field_0x4f0 = 0; */
        cLib_addCalcAngleS2((this + 2292), 0, 4, 2048);
        __mi();
        PSVECSquareMag();
        /* if (/ * ble * / 1) goto L_23e0; */
        /* L_23e0:; */
        /* if (this->field_0x8 <= this->field_0x144) goto L_2434; */
        setAimSpeedF();
        /* if (mD15 != 1) goto L_2410; */
        modeWithCircleInit();
        /* L_2410:; */
        cLib_addCalcAngleS2((this + 518), cLib_targetAngleY((this + 504), (this + 2308)), 8, 1024);
        /* goto L_2448; */
        /* L_2434:; */
        /* if (mD15 != 1) goto L_2448; */
        /* L_2448:; */
        return modeCircleInit();
}

/* 00002560-000025F0       .text modeDamageInit__6daGy_cFv */
void daGy_c::modeDamageInit() {
    m2B0 = 7;
    mD15 = 6;
    /* field_0x224 = 0; */
    return ((JAIZelBasic*)(base))->seStart(22737, (this + 608), 0, dComIfGp_getReverb((this->field_0x20a & 255)), 0);
}

/* 000025F0-00002754       .text modeDamage__6daGy_cFv */
void daGy_c::modeDamage() {
        /* field_0x4f0 = 0; */
        /* if (this->field_0x920 <= this->field_0x1d8) goto L_25b8; */
        /* mDoMtx_YrotS(((char*)&now__14mDoMtx_stack_c + 0), fopAcM_searchActorAngleY(this, this->field_0x5b38)); */
        PSMTXMultVec(((char*)&now__14mDoMtx_stack_c + 0));
        /* current = (current + this->field_0x8); */
        /* field_0x1fc = (this->field_0x1fc + this->field_0xc); */
        /* field_0x200 = (this->field_0x200 + this->field_0x10); */
        cLib_addCalc0((this + 2336));
        /* L_25b8:; */
        /* if (mD15 != 6) goto L_263c; */
        /* if (this->field_0x5d != 0) goto L_25ec; */
        /* if (/ * beq * / 1) goto L_25ec; */
        /* L_25ec:; */
        /* if (0 == 0) goto L_263c; */
        mD15 = 1;
        /* if ((mD16 & 255) == 6) goto L_261c; */
        /* if (/ * bge * / 1) goto L_2634; */
        /* if ((mD16 & 255) == 0) goto L_2628; */
        /* goto L_2634; */
        /* L_261c:; */
        modeWithCircleInit();
        /* goto L_263c; */
        /* L_2628:; */
        modeDiveInit();
        /* goto L_263c; */
        /* L_2634:; */
        /* L_263c:; */
        return modeCircleInit();
}

/* 00002754-000028B8       .text modeDeleteInit__6daGy_cFv */
void daGy_c::modeDeleteInit() {
    /* _savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
    if (((((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->getEventReg(32511) & 16777215) + 1) <= 255) {
    }
    ((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->setEventReg(32511, (((((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->getEventReg(32511) & 16777215) + 1) & 16777215));
    m2B0 = 8;
    mD15 = 8;
    /* field_0x4f0 = 0; */
    speedF = 0;
    /* field_0x224 = 0; */
    /* ((JAIZelBasic*)(base))->seStart(22735, (_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 608), 0, dComIfGp_getReverb((this->field_0x20a & 255)), 0); */
    /* return _restgpr_29(((dPa_control_c*)(this->field_0x5ab8))->set(0, 60, (_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 504), 0)); */
}

/* 000028B8-00002998       .text modeDelete__6daGy_cFv */
void daGy_c::modeDelete() {
        /* if (this->field_0x500 == -1) goto L_27f4; */
        /* if (cLib_calcTimer<i>__FPi((this + 1280), arg1, arg2, arg3, arg4, arg5, arg6, arg7) != 0) goto L_2884; */
        /* field_0x932 = 1; */
        /* goto L_2884; */
        /* L_27f4:; */
        /* if (this->field_0x4fc == -1) goto L_2824; */
        /* if (cLib_calcTimer<i>__FPi((this + 1276)) != 0) goto L_2884; */
        /* goto L_2884; */
        /* L_2824:; */
        /* if (mD15 != 8) goto L_2884; */
        /* if (this->field_0x5d != 0) goto L_285c; */
        /* if (/ * beq * / 1) goto L_285c; */
        /* L_285c:; */
        /* if (0 == 0) goto L_2884; */
        fopAcM_createDisappear(this, (this + 504), 10, 0, 255);
        /* L_2884:; */
        return fopAcM_delete(this);
}

/* 00002998-00002A70       .text modeDeleteBombInit__6daGy_cFv */
void daGy_c::modeDeleteBombInit() {
    m2B0 = 9;
    mD15 = 7;
    /* field_0x4f0 = 0; */
    speedF = 0;
    m4E4 = 0;
    /* field_0x224 = 0; */
    ((JAIZelBasic*)(base))->seStart(22735, (this + 608), 0, dComIfGp_getReverb((this->field_0x20a & 255)), 0);
    /* field_0x4ec = (this->field_0x3c * this->field_0xc8); */
    return ((char*)&l_HIO + 0);
}

/* 00002A70-00002CBC       .text modeDeleteBomb__6daGy_cFv */
void daGy_c::modeDeleteBomb() {
        /* if (this->field_0x920 <= this->field_0x1d8) goto L_2a34; */
        /* mDoMtx_YrotS(((char*)&now__14mDoMtx_stack_c + 0), fopAcM_searchActorAngleY(this, this->field_0x5b38)); */
        PSMTXMultVec(((char*)&now__14mDoMtx_stack_c + 0));
        /* current = (current + this->field_0x8); */
        /* field_0x1fc = (this->field_0x1fc + this->field_0xc); */
        /* field_0x200 = (this->field_0x200 + this->field_0x10); */
        cLib_addCalc0((this + 2336));
        /* L_2a34:; */
        /* if (mD15 != 7) goto L_2a7c; */
        /* field_0x4e8 = 0; */
        /* if (m4E4 != (this->field_0x3c + this->field_0x168)) goto L_2a7c; */
        mD15 = 9;
        /* field_0x4ec = 0; */
        /* L_2a7c:; */
        /* if (mD15 != 9) goto L_2ba4; */
        /* if (m4E4 != (this->field_0x16c - this->field_0x3c)) goto L_2af8; */
        /* if (/ * bne * / 1) goto L_2ae0; */
        /* L_2ae0:; */
        /* field_0x4ec = 0; */
        /* field_0x918 = 0; */
        /* L_2af8:; */
        /* if (m4E4 != (this->field_0x3c + (this->field_0x16c - this->field_0x170))) goto L_2b30; */
        /* field_0x4e8 = (this->field_0x16c + this->field_0x170); */
        /* goto L_2b48; */
        /* L_2b30:; */
        /* if (m4E4 != ((this->field_0x16c + this->field_0x170) - this->field_0x3c)) goto L_2b48; */
        /* field_0x4e8 = (this->field_0x16c - this->field_0x170); */
        /* L_2b48:; */
        /* if (/ * beq * / 1) goto L_2ba4; */
        /* if (cLib_calcTimer<i>__FPi((this + 2284), ((char*)&l_HIO + 0)) != 0) goto L_2ba4; */
        fopAcM_createDisappear(this, (this + 504), 10, 0, 255);
        /* L_2ba4:; */
        return fopAcM_delete(this);
}

/* 00002CBC-00002E24       .text modeProcCall__6daGy_cFv */
void daGy_c::modeProcCall() {
    if (this->field_0x95 != 0) {
    }
    if (base != 0) {
        base = 1;
    }
    /* return __ptmf_scall(this, ((C_@2100 + 0) + 588), ((char*)&init$5242 + 0), (C_@2100 + 0), this->field_0x240, arg5, arg6, arg7); */
}

/* 00002E24-00003004       .text createWave__6daGy_cFv */
void daGy_c::createWave() {
    if (this->field_0x1f5 != 0) {
        current = 0;
        /* field_0x4 = 0; */
        /* field_0x8 = 0; */
        /* field_0x1f5 = 1; */
    }
    if (this->field_0x204 != 0) {
        /* field_0x208 = 0; */
        /* field_0x4 = 0; */
        /* field_0x8 = 0; */
        /* field_0x204 = 1; */
    }
    if (this->field_0xd78 == 0) {
        /* ((dPa_control_c*)(this->field_0x5ab8))->set(0, 55, (this + 3580), (this + 3592), 0, 255, (this + 3352)); */
        /* if (this->field_0xd78 != 0) goto L_2e24; */
        /* field_0x2c = 0; */
        /* field_0x30 = 0; */
        /* field_0x34 = 0; */
    }
    /* L_2e24:; */
    if (this->field_0xddc == 0) {
        /* ((dPa_control_c*)(this->field_0x5ab8))->set(0, 55, (this + 3580), (this + 3592), 0, 255, (this + 3452)); */
        /* if (this->field_0xddc != 0) goto L_2e9c; */
        /* field_0x2c = 0; */
        /* field_0x30 = 0; */
        /* field_0x34 = 0; */
    }
    /* L_2e9c:; */
    if (this->field_0xdf8 == 0) {
    }
    /* return ((dPa_control_c*)(this->field_0x5ab8))->set(0, 53, (this + 3580), (this + 3592), 0, 255, (this + 3552)); */
}

/* 00003004-00003268       .text setWave__6daGy_cFv */
void daGy_c::setWave() {
        /* if ((mD15 & 255) == 5) goto L_2f70; */
        /* if ((mD15 & 255) == 8) goto L_2f70; */
        /* if ((mD15 & 255) == 9) goto L_2f70; */
        /* if ((mD15 & 255) != 6) goto L_2f7c; */
        /* L_2f70:; */
        /* goto L_2f8c; */
        /* L_2f7c:; */
        /* L_2f8c:; */
        /* if (m2B0 == 1) goto L_2fb4; */
        /* if (/ * bge * / 1) goto L_2fa8; */
        /* if (m2B0 >= 0) goto L_2fe0; */
        /* goto L_2ff4; */
        /* L_2fa8:; */
        /* if (m2B0 == 8) goto L_2fec; */
        /* goto L_2ff4; */
        /* L_2fb4:; */
        /* goto L_2ff4; */
        /* L_2fe0:; */
        /* goto L_2ff4; */
        /* L_2fec:; */
        /* L_2ff4:; */
        /* if ((mD15 & 255) == 10) goto L_3004; */
        /* goto L_300c; */
        /* L_3004:; */
        /* L_300c:; */
        daSea_calcWave(((char*)&g_regHIO + 0), mD15);
        /* field_0xd84 = 0; */
        /* field_0xd20 = 0; */
        /* field_0xd94 = (this->field_0x24 * (this->field_0x1f4 + this->field_0x700)); */
        /* field_0xd30 = (this->field_0x24 * (this->field_0x1f4 + this->field_0x700)); */
        /* field_0xd90 = (this->field_0x8 + this->field_0x20); */
        /* field_0xd2c = (this->field_0x8 - this->field_0x20); */
        /* field_0xd98 = 0; */
        /* field_0xd9c = 0; */
        /* field_0xda0 = 0; */
        /* field_0xda4 = 0; */
        /* field_0xda8 = 0; */
        /* field_0xdac = 0; */
        /* field_0xd34 = (this->field_0x28 * this->field_0x1e8); */
        /* field_0xd38 = 0; */
        /* field_0xd3c = 0; */
        /* field_0xd40 = (this->field_0x28 * this->field_0x1e8); */
        /* field_0xd44 = 0; */
        /* field_0xd48 = 0; */
        /* field_0xd8c = 0; */
        /* field_0xd28 = 0; */
        cLib_addCalc2((this + 3600));
        /* field_0xde8 = 0; */
        /* field_0xdec = 0; */
        return ((char*)&l_HIO + 0);
}

/* 00003268-000032E4       .text lineCheck__6daGy_cFP4cXyzP4cXyz */
void daGy_c::lineCheck(cXyz*, cXyz*) {
    /* ((dBgS_LinChk*)((this + 3604)))->Set(arg1, arg2, this); */
    if (((cBgS*)(((char*)&g_dComIfG_gameInfo + 4768)))->LineCross((this + 3604)) == 0) {
        base = 0;
        /* field_0x4 = 0; */
        /* field_0x8 = 0; */
        /* field_0xe80 = 1; */
    }
    return ((cBgS*)(((char*)&g_dComIfG_gameInfo + 4768)))->LineCross((this + 3604));
}

/* 000032E4-000038EC       .text checkTgHit__6daGy_cFv */
void daGy_c::checkTgHit() {
        /* ((dCcD_GStts*)((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 2244)))->Move(); */
        /* if (((dCcD_GObjInf*)((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1892)))->GetTgHitObj() != 0) goto L_3254; */
        /* L_3254:; */
        /* if (((dCcD_GObjInf*)((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1292)))->GetTgHitObj() != 0) goto L_327c; */
        /* L_327c:; */
        /* if (((dCcD_GObjInf*)((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1592)))->GetTgHitObj() == 0) goto L_37d4; */
        /* if (/ * beq * / 1) goto L_32b4; */
        health = 0;
        /* field_0x920 = 0; */
        /* goto L_3550; */
        /* L_32b4:; */
        /* if (/ * beq * / 1) goto L_3320; */
        /* ((JAIZelBasic*)(base))->seStart(10292, (_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 608), 32, dComIfGp_getReverb((this->field_0x20a & 255)), 0); */
        health = (health + -2);
        /* field_0x920 = 0; */
        /* goto L_3550; */
        /* L_3320:; */
        /* if (/ * beq * / 1) goto L_3398; */
        /* field_0xce8 = 9; */
        /* ((JAIZelBasic*)(base))->seStart(10292, (_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 608), 32, dComIfGp_getReverb((this->field_0x20a & 255)), 0); */
        /* field_0x4fc = 10; */
        /* ((dPa_splashEcallBack*)((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 3552)))->remove(); */
        /* ((dPa_waveEcallBack*)((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 3352)))->remove(); */
        /* ((dPa_waveEcallBack*)((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 3452)))->remove(); */
        /* goto L_3550; */
        /* L_3398:; */
        /* if (/ * beq * / 1) goto L_3404; */
        /* ((JAIZelBasic*)(base))->seStart(10292, (_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 608), 32, dComIfGp_getReverb((this->field_0x20a & 255)), 0); */
        health = (health + -2);
        /* field_0x920 = 0; */
        /* goto L_3550; */
        /* L_3404:; */
        /* if (/ * beq * / 1) goto L_347c; */
        /* field_0xce8 = 11; */
        /* ((JAIZelBasic*)(base))->seStart(10292, (_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 608), 32, dComIfGp_getReverb((this->field_0x20a & 255)), 0); */
        /* field_0x500 = 10; */
        /* ((dPa_splashEcallBack*)((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 3552)))->remove(); */
        /* ((dPa_waveEcallBack*)((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 3352)))->remove(); */
        /* ((dPa_waveEcallBack*)((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 3452)))->remove(); */
        /* goto L_3550; */
        /* L_347c:; */
        /* if (/ * beq * / 1) goto L_34e8; */
        /* ((JAIZelBasic*)(base))->seStart(10292, (_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 608), 32, dComIfGp_getReverb((this->field_0x20a & 255)), 0); */
        health = (health + -2);
        /* field_0x920 = 0; */
        /* goto L_3550; */
        /* L_34e8:; */
        /* if (/ * beq * / 1) goto L_3550; */
        /* ((JAIZelBasic*)(base))->seStart(10291, (_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 608), 32, dComIfGp_getReverb((this->field_0x20a & 255)), 0); */
        health = (health + -2);
        /* field_0x920 = 0; */
        /* L_3550:; */
        /* if ((1 & 16777215) != 1) goto L_37b8; */
        ((JAIZelBasic*)(base))->onEnemyDamage();
        /* ((dPa_control_c*)(this->field_0x5ab8))->set(0, 16); */
        /* if (this->field_0xce8 != 11) goto L_3650; */
        /* ((dPa_control_c*)(this->field_0x5ab8))->set(0, 15); */
        /* ((JAIZelBasic*)(base))->seStart(10280, (_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 608), 0, dComIfGp_getReverb((this->field_0x20a & 255)), 0); */
        /* goto L_37d4; */
        /* L_3650:; */
        /* if (health != 0) goto L_3764; */
        /* ((dPa_control_c*)(this->field_0x5ab8))->set(0, 15); */
        /* ((JAIZelBasic*)(base))->seStart(10280, (_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 608), 0, dComIfGp_getReverb((this->field_0x20a & 255)), 0); */
        health = 0;
        dComIfGp_getReverb((this->field_0x20a & 255));
        /* if (_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) == 0) goto L_3728; */
        /* goto L_372c; */
        /* L_3728:; */
        /* L_372c:; */
        /* ((JAIZelBasic*)(base))->monsSeStart(18638, (_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 608), -1, 0, dComIfGp_getReverb((this->field_0x20a & 255))); */
        /* if (/ * bne * / 1) goto L_3758; */
        /* ((daGy_c*)(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->modeDeleteBombInit(); */
        /* goto L_37d4; */
        /* L_3758:; */
        /* ((daGy_c*)(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->modeDeleteInit(); */
        /* goto L_37d4; */
        /* L_3764:; */
        dComIfGp_getReverb((this->field_0x20a & 255));
        /* if (_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) == 0) goto L_37a0; */
        /* goto L_37a4; */
        /* L_37a0:; */
        /* L_37a4:; */
        /* ((JAIZelBasic*)(base))->monsSeStart(18637, (_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 608), -1, 0, dComIfGp_getReverb((this->field_0x20a & 255))); */
        /* ((daGy_c*)(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->modeDamageInit(); */
        /* goto L_37d4; */
        /* L_37b8:; */
        /* if (this->field_0xce8 == 9) goto L_37cc; */
        /* if (this->field_0xce8 != 11) goto L_37d4; */
        /* L_37cc:; */
        /* L_37d4:; */
        /* return _restgpr_28(((daGy_c*)(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->modeDeleteInit()); */
}

/* 000038EC-000039AC       .text getWaterY__6daGy_cFv */
void daGy_c::getWaterY() {
        /* if (/ * beq * / 1) goto L_3844; */
        /* if (this->field_0x1fc <= this->field_0x49c) goto L_3838; */
        gravity = 0;
        /* goto L_3894; */
        /* L_3838:; */
        gravity = 0;
        /* goto L_3894; */
        /* L_3844:; */
        dBgS_GetWaterHeight();
        /* if (/ * ble * / 1) goto L_388c; */
        gravity = 0;
        /* goto L_3894; */
        /* L_388c:; */
        gravity = 0;
        /* L_3894:; */
        return dBgS_GetWaterHeight();
}

/* 000039AC-00004264       .text _execute__6daGy_cFv */
bool daGy_c::_execute() {
        /* _savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* field_0x2b8 = 0; */
        /* if (0 == 65535) goto L_3978; */
        /* if (fopAcM_SearchByID(parentActorID) == 0) goto L_3968; */
        /* if (/ * beq * / 1) goto L_3958; */
        /* if (fopAc_IsActor() == 0) goto L_3938; */
        /* if (this->field_0x8 == 230) goto L_3930; */
        /* if (this->field_0x8 != 231) goto L_3938; */
        /* L_3930:; */
        /* goto L_3984; */
        /* L_3938:; */
        /* if (cLib_calcTimer<i>__FPi((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 2288)) != 0) goto L_3950; */
        /* fopAcM_delete(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* L_3950:; */
        return 1;
        /* L_3958:; */
        /* fopAcM_delete(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        return 1;
        /* L_3968:; */
        /* fopAcM_delete(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        return 1;
        /* L_3978:; */
        fopAcM_delete(1);
        return 1;
        /* L_3984:; */
        /* if (enemy_ice((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 2348)) == 0) goto L_39d8; */
        PSMTXCopy(((char*)&now__14mDoMtx_stack_c + 0), (this->field_0x50 + 36));
        ((mDoExt_McaMorf*)(mpMorf))->calc();
        return 1;
        /* L_39d8:; */
        /* ((daGy_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->lineCheck((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 504), (_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 3716)); */
        /* if (m2B0 == 0) goto L_3a08; */
        /* if (this->field_0xe80 == 0) goto L_3a08; */
        /* ((daGy_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->modeDiveInit(); */
        /* L_3a08:; */
        /* if (m2B0 == 0) goto L_3a28; */
        /* if (this->field_0x324 != 3) goto L_3a28; */
        /* ((daGy_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->modeDiveInit(); */
        /* L_3a28:; */
        /* field_0x2bc = 0; */
        /* field_0x2c0 = 0; */
        /* field_0x2c4 = 0; */
        ((mDoExt_McaMorf*)(mpMorf))->play(0, 0, 0);
        ((mDoExt_McaMorf*)(mpMorf))->calc();
        /* if (m2B0 == 0) goto L_3a90; */
        /* ((daGy_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->setAtCollision(); */
        /* ((daGy_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->setCollision(); */
        /* ((daGy_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->checkTgHit(); */
        /* L_3a90:; */
        /* if (/ * bne * / 1) goto L_3ab4; */
        /* cLib_addCalc2((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1252)); */
        /* L_3ab4:; */
        /* cLib_addCalc2((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 596)); */
        /* ((daGy_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->setAnm(); */
        /* if (this->field_0x97 == 0) goto L_3b2c; */
        dBgS_GetWaterHeight();
        /* ((daGy_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->setMtx(); */
        /* ((daGy_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->setWave(); */
        return 1;
        /* L_3b2c:; */
        /* ((daGy_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->modeProcCall(); */
        /* fopAcM_posMoveF(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7), (_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 2216)); */
        /* ((daGy_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->getWaterY(); */
        /* if ((mD15 & 255) != 5) goto L_3cec; */
        /* if (this->field_0x224 >= shape_angle) goto L_3b94; */
        /* cLib_addCalcAngleS2((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 516), ((this->field_0x746 + 8192) & 65535), 8, 1024); */
        /* goto L_3bdc; */
        /* L_3b94:; */
        /* if (/ * ble * / 1) goto L_3bc8; */
        /* cLib_addCalcAngleS2((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 516), ((this->field_0x748 + -4096) & 65535), 8, 1024); */
        /* goto L_3bdc; */
        /* L_3bc8:; */
        /* cLib_addCalcAngleS2((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 516), 0, 8, 2048); */
        /* L_3bdc:; */
        /* if (/ * bne * / 1) goto L_3f2c; */
        /* if (this->field_0x91c >= this->field_0x20) goto L_3f2c; */
        mD15 = 1;
        /* ((dPa_control_c*)(this->field_0x5ab8))->set(0, 8251, (_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 504), 0); */
        /* ((dPa_control_c*)(this->field_0x5ab8))->set(0, 60, (_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 504), 0); */
        /* ((JAIZelBasic*)(base))->seStart(22736, (_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 608), 0, dComIfGp_getReverb((this->field_0x20a & 255)), 0); */
        /* goto L_3f2c; */
        /* L_3cec:; */
        /* if (0 == 6) goto L_3cfc; */
        /* if (0 != 4) goto L_3df4; */
        /* L_3cfc:; */
        /* if (m2B0 != 4) goto L_3d1c; */
        /* L_3d1c:; */
        /* daSea_calcWave(cLib_addCalcAngleS2((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 516), 0, 8, 2048)); */
        /* if (/ * bne * / 1) goto L_3f2c; */
        /* if (this->field_0x91c >= this->field_0x20) goto L_3f2c; */
        /* ((dPa_control_c*)(this->field_0x5ab8))->set(0, 60, (_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 504), 0); */
        /* ((JAIZelBasic*)(base))->seStart(22738, (_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 608), 0, dComIfGp_getReverb((this->field_0x20a & 255)), 0); */
        /* goto L_3f2c; */
        /* L_3df4:; */
        /* if (0 == 7) goto L_3e04; */
        /* if (0 != 9) goto L_3f18; */
        /* L_3e04:; */
        /* daSea_calcWave(((JAIZelBasic*)(base))->seStart(22738, (_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 608), 0, dComIfGp_getReverb((this->field_0x20a & 255)), 0)); */
        /* if (/ * bne * / 1) goto L_3f2c; */
        /* if (this->field_0x91c >= this->field_0x20) goto L_3f2c; */
        /* ((dPa_control_c*)(this->field_0x5ab8))->set(0, 8251, (_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 504), 0); */
        /* ((dPa_control_c*)(this->field_0x5ab8))->set(0, 60, (_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 504), 0); */
        /* ((JAIZelBasic*)(base))->seStart(22736, (_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 608), 0, dComIfGp_getReverb((this->field_0x20a & 255)), 0); */
        /* goto L_3f2c; */
        /* L_3f18:; */
        /* cLib_addCalcAngleS2((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 516), 0, 8, 2048); */
        /* L_3f2c:; */
        /* if (m2B0 == 0) goto L_3f4c; */
        /* ((dBgS_Acch*)((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 736)))->CrrPos(((char*)&g_dComIfG_gameInfo + 4768)); */
        /* L_3f4c:; */
        /* field_0x1b6 = ((dBgS*)(((char*)&g_dComIfG_gameInfo + 4768)))->GetPolyColor((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 968)); */
        /* ((daGy_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->setMtx(); */
        /* ((daGy_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->setWave(); */
        /* field_0x274 = 0; */
        /* field_0x278 = 0; */
        /* field_0x27c = 0; */
        /* field_0x278 = (this->field_0x278 + this->field_0x210); */
        eyePos = 0;
        /* field_0x264 = 0; */
        /* field_0x268 = 0; */
        /* field_0x264 = (this->field_0x264 + this->field_0x54); */
        /* field_0x91c = 0; */
        /* if (mD15 == 5) goto L_4128; */
        /* if (m2B0 == 0) goto L_4128; */
        __mi();
        PSVECSquareMag();
        /* if (/ * ble * / 1) goto L_4068; */
        /* L_4068:; */
        /* if ((this->field_0x18 / this->field_0x44) != this->field_0x20) goto L_4088; */
        /* goto L_409c; */
        /* L_4088:; */
        /* if (this->field_0x20 != this->field_0x8) goto L_409c; */
        /* L_409c:; */
        dComIfGp_getReverb((this->field_0x20a & 255));
        /* ((JAIZelBasic*)(base))->seStart(20686, (_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 608)); */
        /* if (mD15 != 1) goto L_4128; */
        /* if ((this->field_0x8 * this->field_0x4) >= this->field_0x8) goto L_411c; */
        /* goto L_4120; */
        /* L_411c:; */
        /* L_4120:; */
        /* field_0x64 = (this->field_0x8 * this->field_0x4); */
        /* L_4128:; */
        /* ((dScnKy_env_light_c*)(((char*)&g_env_light + 0)))->settingTevStruct(0, (_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 504), (_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 268)); */
        return _restgpr_29(1);
}

/* 00004264-00004560       .text drawDebug__6daGy_cFv */
void daGy_c::drawDebug() {
    if (/* bne */ 1) {
        /* if (this->field_0x180 == 0) goto L_4260; */
    }
    /* L_4260:; */
    /* if ((((this->field_0x180 - this->field_0x20e) & 65535) << 2) == 65535) { */
        /* if (this->field_0x140 == 0) goto L_435c; */
    if (this->field_0x5b48 != 0) {
    }
    /* L_435c:; */
    /* if ((((this->field_0x140 - this->field_0x20e) & 65535) << 2) == 65535) { */
        /* if (this->field_0x142 == 0) goto L_4458; */
    if (this->field_0x5b48 != 0) {
    }
    /* L_4458:; */
    return base;
}

/* 00004560-000046C8       .text _draw__6daGy_cFv */
bool daGy_c::_draw() {
    if (this->field_0x94 != 0) {
        drawDebug();
    }
    /* if (m4E4 == this->field_0xa0) { */
        /* return 1; */
    if (this->field_0x96 != 0) {
        return 1;
    }
    ((dScnKy_env_light_c*)(((char*)&g_env_light + 0)))->setLightTevColorType(this->field_0x50, (this + 268));
    if (this->field_0x93a > 20) {
        ((dMat_ice_c*)(base))->entryDL(mpMorf, -1, (this + 728));
        return 1;
    }
    ((mDoExt_McaMorf*)(mpMorf))->entryDL();
    dSnap_RegistFig(188, this);
    /* m8E4 = dComIfGd_setShadow(m8E4, 0, this->field_0x50); */
    return 1;
}

/* 000046C8-00004920       .text createInit__6daGy_cFv */
void daGy_c::createInit() {
    /* _savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
    /* field_0xcfc = 0; */
    /* field_0xd00 = 0; */
    /* field_0xd04 = 0; */
    gbaName = 29;
    scale = 0;
    /* field_0x218 = 0; */
    /* field_0x21c = 0; */
    /* field_0x4fc = -1; */
    /* field_0x500 = -1; */
    /* field_0x92c = _savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
    /* field_0x938 = 1; */
    /* field_0xacc = 0; */
    /* field_0xac8 = 0; */
    itemTableIdx = ((cDT_NamePTbl*)(((char*)&g_dComIfG_gameInfo + 20652)))->GetIndex(((char*)&@stringBase0 + 31), 0);
    /* field_0x280 = 4; */
    /* field_0x26e = 34; */
    mD15 = 1;
    /* field_0x918 = 0; */
    /* field_0x8ec = -1; */
    /* field_0x8f0 = 120; */
    m4E4 = 0;
    /* ((daGy_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->modeDiveInit(); */
    /* field_0x2bc = 0; */
    /* field_0x2c0 = 0; */
    /* field_0x2c4 = 0; */
    /* goto L_46dc; */
    /* L_46d8:; */
    /* L_46dc:; */
    /* if ((0 + 1) >= this->field_0x28) goto L_46d8; */
    /* ((daGy_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->setMtx(); */
    ((mDoExt_McaMorf*)(mpMorf))->calc();
    /* ((dScnKy_env_light_c*)(((char*)&g_env_light + 0)))->settingTevStruct(0, (_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 504), (_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 268)); */
    /* ((dBgS_AcchCir*)((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1188)))->SetWall(); */
    /* ((dBgS_Acch*)((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 736)))->Set((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 504), (_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 484), _savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7), 1, (_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1188), (_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 544), 0); */
    gravity = 0;
    /* fopAcM_posMoveF(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7), 0); */
    cullMtx = (this->field_0x50 + 36);
    /* ((dCcD_Stts*)((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 2216)))->Init(100, 100, _savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
    /* ((dCcD_Sph*)((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1592)))->Set(((C_@2100 + 0) + 112)); */
    /* field_0x67c = (_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 2216); */
    /* ((dCcD_Cps*)((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1892)))->Set(((C_@2100 + 0) + 176)); */
    /* field_0x7a8 = (_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 2216); */
    /* ((dCcD_Sph*)((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1292)))->Set(((C_@2100 + 0) + 48)); */
    /* field_0x550 = (_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 2216); */
    max_health = 4;
    /* return _restgpr_29(((daGy_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->createWave()); */
}

/* 00004920-00004A80       .text _create__6daGy_cFv */
cPhs_State daGy_c::_create() {
        /* if (/ * bne * / 1) goto L_4848; */
        /* if (this == 0) goto L_483c; */
        __ct();
        /* L_483c:; */
        /* L_4848:; */
        /* if (dComIfG_resLoad((this + 712), ((char*)&m_arc_name__6daGy_c + 0)) != 4) goto L_4950; */
        /* if (dComIfGs_checkGetItem(45) != 0) goto L_487c; */
        return 5;
        /* L_487c:; */
        /* if (actor_condition == 65535) goto L_491c; */
        /* if (fopAcM_SearchByID(parentActorID) == 0) goto L_4914; */
        /* if (/ * beq * / 1) goto L_490c; */
        /* if (fopAc_IsActor() == 0) goto L_4904; */
        /* if (this->field_0x8 == 230) goto L_48cc; */
        /* if (this->field_0x8 != 231) goto L_4904; */
        /* L_48cc:; */
        /* field_0x31c = (this->field_0x31c + 1); */
        /* if (this->field_0x8 != 230) goto L_4924; */
        fopAcM_setStageLayer(this);
        /* goto L_4924; */
        /* L_4904:; */
        return 5;
        /* L_490c:; */
        return 5;
        /* L_4914:; */
        return 5;
        /* L_491c:; */
        return 5;
        /* L_4924:; */
        /* if (fopAcM_entrySolidHeap(this, ((char*)&createHeap_CB__FP10fopAc_ac_c + 0), 16288) != 0) goto L_4948; */
        return 5;
        /* L_4948:; */
        createInit();
        /* L_4950:; */
        return dComIfG_resLoad((this + 712), ((char*)&m_arc_name__6daGy_c + 0));
}

/* 00005A80-00005AD4       .text _delete__6daGy_cFv */
bool daGy_c::_delete() {
    /* dComIfG_resDelete((this + 712), ((char*)&m_arc_name__6daGy_c + 0), arg2); */
    ((dPa_waveEcallBack*)((this + 3452)))->remove();
    ((dPa_waveEcallBack*)((this + 3352)))->remove();
    ((dPa_splashEcallBack*)((this + 3552)))->remove();
    return 1;
}

/* 00005AD4-00005AF4       .text daGyCreate__FPv */
static cPhs_State daGyCreate(void* i_this) {
    return ((daGy_c*)i_this)->_create();
}

/* 00005AF4-00005B18       .text daGyDelete__FPv */
static BOOL daGyDelete(void* i_this) {
    return ((daGy_c*)i_this)->_delete();

/* 00005B18-00005B3C       .text daGyExecute__FPv */
static BOOL daGyExecute(void* i_this) {
    return ((daGy_c*)i_this)->_execute();

/* 00005B3C-00005B60       .text daGyDraw__FPv */
static BOOL daGyDraw(void* i_this) {
    return ((daGy_c*)i_this)->_draw();

/* 00005B60-00005B68       .text daGyIsDelete__FPv */
static BOOL daGyIsDelete(void*) {
    return 1;

static actor_method_class daGyMethodTable = {
    (process_method_func)daGyCreate,
    (process_method_func)daGyDelete,
    (process_method_func)daGyExecute,
    (process_method_func)daGyIsDelete,
    (process_method_func)daGyDraw,
};

actor_process_profile_definition g_profile_GY = {
    /* Layer ID     */ fpcLy_CURRENT_e,
    /* List ID      */ 0x0007,
    /* List Prio    */ fpcPi_CURRENT_e,
    /* Proc Name    */ fpcNm_GY_e,
    /* Proc SubMtd  */ &g_fpcLf_Method.base,
    /* Size         */ sizeof(daGy_c),
    /* Size Other   */ 0,
    /* Parameters   */ 0,
    /* Leaf SubMtd  */ &g_fopAc_Method.base,
    /* Draw Prio    */ fpcDwPi_GY_e,
    /* Actor SubMtd */ &daGyMethodTable,
    /* Status       */ fopAcStts_UNK40000_e,
    /* Group        */ fopAc_ENEMY_e,
    /* Cull Type    */ fopAc_CULLBOX_4_e,
};

/* 由 fix_decomp_braces.py 补齐：反编译产物末尾缺 6 个 } */
}}}}}}
