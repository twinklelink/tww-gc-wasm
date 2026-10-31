/**
 * d_a_obj_ftree.cpp
 * Object - Forest Trees
 */

#include "d/dolzel_rel.h" // IWYU pragma: keep
#include "d/actor/d_a_obj_ftree.h"
#include "d/d_cc_d.h"

namespace daObjFtree {

static const dCcD_SrcCyl M_cyl_src = {
    // dCcD_SrcGObjInf
    {
        /* Flags             */ 0,
        /* SrcObjAt  Type    */ 0,
        /* SrcObjAt  Atp     */ 0,
        /* SrcObjAt  SPrm    */ 0,
        /* SrcObjTg  Type    */ AT_TYPE_ALL & ~AT_TYPE_WATER & ~AT_TYPE_UNK20000 & ~AT_TYPE_WIND & ~AT_TYPE_UNK400000 & ~AT_TYPE_LIGHT,
        /* SrcObjTg  SPrm    */ cCcD_TgSPrm_Set_e | cCcD_TgSPrm_IsEnemy_e | cCcD_TgSPrm_IsPlayer_e | cCcD_TgSPrm_IsOther_e,
        /* SrcObjCo  SPrm    */ cCcD_CoSPrm_Set_e | cCcD_CoSPrm_IsOther_e | cCcD_CoSPrm_VsGrpAll_e,
        /* SrcGObjAt Se      */ 0,
        /* SrcGObjAt HitMark */ dCcG_AtHitMark_None_e,
        /* SrcGObjAt Spl     */ dCcG_At_Spl_UNK0,
        /* SrcGObjAt Mtrl    */ 0,
        /* SrcGObjAt SPrm    */ 0,
        /* SrcGObjTg Se      */ 0,
        /* SrcGObjTg HitMark */ 0,
        /* SrcGObjTg Spl     */ dCcG_Tg_Spl_UNK0,
        /* SrcGObjTg Mtrl    */ 0,
        /* SrcGObjTg SPrm    */ dCcG_TgSPrm_Shield_e | dCcG_TgSPrm_NoConHit_e,
        /* SrcGObjCo SPrm    */ 0,
    },
    // cM3dGCylS
    {{
        /* Center */ {0.0f, 0.0f, 0.0f},
        /* Radius */ 100.0f,
        /* Height */ 200.0f,
    }},
};

static const dCcD_SrcCyl M_cyl_srcW = {
    // dCcD_SrcGObjInf
    {
        /* Flags             */ 0,
        /* SrcObjAt  Type    */ 0,
        /* SrcObjAt  Atp     */ 0,
        /* SrcObjAt  SPrm    */ 0,
        /* SrcObjTg  Type    */ AT_TYPE_WATER,
        /* SrcObjTg  SPrm    */ cCcD_TgSPrm_Set_e | cCcD_TgSPrm_IsEnemy_e | cCcD_TgSPrm_IsPlayer_e | cCcD_TgSPrm_IsOther_e,
        /* SrcObjCo  SPrm    */ 0,
        /* SrcGObjAt Se      */ 0,
        /* SrcGObjAt HitMark */ dCcG_AtHitMark_None_e,
        /* SrcGObjAt Spl     */ dCcG_At_Spl_UNK0,
        /* SrcGObjAt Mtrl    */ 0,
        /* SrcGObjAt SPrm    */ 0,
        /* SrcGObjTg Se      */ 0,
        /* SrcGObjTg HitMark */ 0,
        /* SrcGObjTg Spl     */ dCcG_Tg_Spl_UNK0,
        /* SrcGObjTg Mtrl    */ 0,
        /* SrcGObjTg SPrm    */ 0,
        /* SrcGObjCo SPrm    */ 0,
    },
    // cM3dGCylS
    {{
        /* Center */ {0.0f, 0.0f, 0.0f},
        /* Radius */ 100.0f,
        /* Height */ 200.0f,
    }},
};

}; // namespace daObjFtree


/* 00000078-000000DC       .text search_heart_part__Q210daObjFtree5Act_cFv */
void daObjFtree::Act_c::search_heart_part() {
    /* search_heart_part__Q210daObjFtree5Act_cFv: 无实义指令 */
}

/* 000000DC-000001F0       .text launch_heart_part__Q210daObjFtree5Act_cFv */
void daObjFtree::Act_c::launch_heart_part() {
        /* L_68:; */
        /* goto L_68; */
        /* if (/ * beq * / 1) goto L_80; */
        /* field_0x634 = 0; */
        /* L_80:; */
        /* if (/ * beq * / 1) goto L_a8; */
        /* field_0x61c = 0; */
        /* if (/ * beq * / 1) goto L_a8; */
        /* field_0x618 = 0; */
        /* L_a8:; */
        __dt();
        /* if (/ * beq * / 1) goto L_10c; */
        /* field_0x4e4 = 0; */
        /* field_0x4e8 = 0; */
        /* if (/ * beq * / 1) goto L_f8; */
        /* field_0x4e8 = 0; */
        /* if (/ * beq * / 1) goto L_f8; */
        /* field_0x4e8 = 0; */
        /* L_f8:; */
        /* if (/ * beq * / 1) goto L_10c; */
        /* field_0x4e4 = 0; */
        /* L_10c:; */
        /* if (/ * beq * / 1) goto L_194; */
        /* field_0x3d4 = 0; */
        /* field_0x4ac = 0; */
        /* field_0x4c4 = 0; */
        /* if (/ * beq * / 1) goto L_188; */
        /* field_0x4ac = 0; */
        /* field_0x4c4 = 0; */
        /* if (/ * beq * / 1) goto L_160; */
        /* field_0x4c4 = 0; */
        /* L_160:; */
        /* if (/ * beq * / 1) goto L_188; */
        /* field_0x4ac = 0; */
}

/* 000001F0-00000394       .text place_heart_part__Q210daObjFtree5Act_cFv */
void daObjFtree::Act_c::place_heart_part() {
        /* if (/ * beq * / 1) goto L_188; */
        /* field_0x4a8 = 0; */
        /* L_188:; */
        __dt();
        /* if (/ * beq * / 1) goto L_1ec; */
        /* field_0x374 = 0; */
        /* field_0x378 = 0; */
        /* if (/ * beq * / 1) goto L_1d8; */
        /* field_0x378 = 0; */
        /* if (/ * beq * / 1) goto L_1d8; */
        /* field_0x378 = 0; */
        /* L_1d8:; */
        /* if (/ * beq * / 1) goto L_1ec; */
        /* field_0x374 = 0; */
        /* L_1ec:; */
        /* if (/ * beq * / 1) goto L_2ec; */
        /* field_0x308 = 0; */
        /* field_0x318 = 0; */
        /* field_0x338 = 0; */
        /* field_0x344 = 0; */
        /* if (/ * beq * / 1) goto L_2ec; */
        /* field_0x308 = 0; */
        /* field_0x318 = 0; */
        /* field_0x338 = 0; */
        /* field_0x344 = 0; */
        /* if (/ * beq * / 1) goto L_2b0; */
        /* field_0x338 = 0; */
        /* field_0x344 = 0; */
        /* if (/ * beq * / 1) goto L_288; */
        /* field_0x344 = 0; */
        /* if (/ * beq * / 1) goto L_288; */
        /* field_0x344 = 0; */
        /* L_288:; */
        /* if (/ * beq * / 1) goto L_2b0; */
        /* field_0x338 = 0; */
        /* if (/ * beq * / 1) goto L_2b0; */
        /* field_0x338 = 0; */
        /* L_2b0:; */
        /* if (/ * beq * / 1) goto L_2ec; */
        /* field_0x308 = 0; */
        /* field_0x318 = 0; */
        /* if (/ * beq * / 1) goto L_2e0; */
        /* field_0x318 = 0; */
        /* L_2e0:; */
        __dt();
        /* L_2ec:; */
        /* if (/ * beq * / 1) goto L_314; */
        /* field_0x2e0 = 0; */
        /* if (/ * beq * / 1) goto L_314; */
        /* field_0x2e0 = 0; */
}

/* 00000394-00000454       .text Ftree_get_water_pos__10daObjFtreeFP4cXyzP4cXyz */
void daObjFtree::Ftree_get_water_pos(cXyz*, cXyz*) {
    __dt();
    if (/* ble */ 1) {
    }
    return __dl(__dt());
}

/* 00000454-000004B8       .text estimate_water__Q210daObjFtree5Act_cFv */
void daObjFtree::Act_c::estimate_water() {
    /* Ftree_get_water_pos((this + 504), arg2, arg3, arg4, arg5, arg6, arg7); */
    PSVECSquareDistance();
    return C_@4176;
}

/* 000004B8-000004DC       .text Ftree_checkXyEventCallBack__10daObjFtreeFPvi */
void daObjFtree::Ftree_checkXyEventCallBack(void*, int) {
    /* Ftree_checkXyEventCallBack__10daObjFtreeFPvi: 无实义指令 */
}

/* 000004DC-000004FC       .text Ftree_XyEventCallBack__10daObjFtreeFPvi */
void daObjFtree::Ftree_XyEventCallBack(void* i_this, int i_param) {
    static_cast<daObjFtree::Act_c*>(i_this)->XyEventCallBack(i_param);
}

/* 000004FC-000005E4       .text XyEventCallBack__Q210daObjFtree5Act_cFi */
void daObjFtree::Act_c::XyEventCallBack(int) {
        /* if (this->field_0x5bc7 != 89) goto L_538; */
        /* if (is_brought((((char*)&g_dComIfG_gameInfo + 0) + int), g_dComIfG_gameInfo, arg3, arg4, arg5, arg6, arg7) != 0) goto L_538; */
        /* if (estimate_water() == 0) goto L_538; */
        /* if (iam_last() != 0) goto L_500; */
        /* if (XyEvent_set(this->field_0x352) == 0) goto L_538; */
        /* field_0x652 = 140; */
        /* goto L_558; */
        /* L_500:; */
        /* if (XyEvent_set(this->field_0x354) == 0) goto L_538; */
        ((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->onEventBit(258);
        /* field_0x652 = 140; */
        /* goto L_558; */
        /* L_538:; */
        /* if (XyEvent_set(this->field_0x350) == 0) goto L_554; */
        /* goto L_558; */
        /* L_554:; */
        /* L_558:; */
        return -1;
}

/* 000005E4-000005F8       .text XyEvent_init__Q210daObjFtree5Act_cFv */
void daObjFtree::Act_c::XyEvent_init() {
    /* field_0x356 = -1; */
    /* field_0x358 = 0; */
    return this;
}

/* 000005F8-0000062C       .text XyEvent_set__Q210daObjFtree5Act_cFs */
void daObjFtree::Act_c::XyEvent_set(short) {
        /* if (this->field_0x358 != 0) goto L_5ac; */
        /* if ((short & 65535) == -1) goto L_5ac; */
        /* field_0x356 = short; */
        /* field_0x358 = 1; */
        return 1;
}

/* 0000062C-00000764       .text XyEvent_exe__Q210daObjFtree5Act_cFv */
void daObjFtree::Act_c::XyEvent_exe() {
        /* _savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* if (this->field_0x358 == 2) goto L_6a4; */
        /* if (/ * bge * / 1) goto L_6d4; */
        /* if (this->field_0x358 >= 1) goto L_5f0; */
        /* goto L_6d4; */
        /* L_5f0:; */
        /* if (this->field_0xf8 != 1) goto L_6d4; */
        /* field_0x358 = 2; */
        PSMTXTrans(((char*)&now__14mDoMtx_stack_c + 0), ((char*)&L_attr__Q210daObjFtree27@unnamed@d_a_obj_ftree_cpp@ + 0));
        mDoMtx_YrotM(((char*)&now__14mDoMtx_stack_c + 0), ((this->field_0x20e + 9000) & 65535));
        PSMTXCopy(((char*)&now__14mDoMtx_stack_c + 0));
        PSMTXMultVec();
        /* goto L_6d4; */
        /* L_6a4:; */
        /* if (((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->endCheck(this->field_0x356) == 0) goto L_6d4; */
        /* L_6d4:; */
        /* return _restgpr_29(((daObjFtree::Act_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->XyEvent_init()); */
}

/* 00000764-000007A8       .text param_get_tree_idx__Q210daObjFtree5Act_cCFv */
void daObjFtree::Act_c::param_get_tree_idx() const {
    }
    return 15;


/* 000007A8-000008D8       .text SetJointAnimation__Q210daObjFtree5Act_cFiffi */
void daObjFtree::Act_c::SetJointAnimation(int, float, float, int) {
        /* ((dRes_control_c*)(((char*)&M_arcname__Q210daObjFtree5Act_c + 0)))->getRes(int, ((char*)&g_dComIfG_gameInfo + -16460), 64, int, arg5); */
        /* if (/ * beq * / 1) goto L_834; */
        /* if ((-float) != 0) goto L_7d0; */
        /* ((mDoExt_McaMorf*)(this->field_0x2d8))->setAnm(); */
        /* goto L_82c; */
        /* L_7d0:; */
        /* ((mDoExt_McaMorf*)(this->field_0x2d8))->setAnm(); */
        /* L_82c:; */
        return 1;
        /* L_834:; */
        return 0;
}

/* 000008D8-00000910       .text PlayStopJointAnimation__Q210daObjFtree5Act_cFv */
void daObjFtree::Act_c::PlayStopJointAnimation() {
    /* return ((mDoExt_McaMorf*)(this->field_0x2d8))->play(0, 0, 0, arg4, arg5, arg6, arg7); */
}

/* 00000910-0000093C       .text PlayStopColorAnimation__Q210daObjFtree5Act_cFv */
void daObjFtree::Act_c::PlayStopColorAnimation() {
    return ((mDoExt_baseAnm*)((this + 736)))->play();
}

/* 0000093C-00000A1C       .text set_first_stat__Q210daObjFtree5Act_cFv */
void daObjFtree::Act_c::set_first_stat() {
        /* if (((dSv_player_collect_c*)(((char*)&g_dComIfG_gameInfo + 180)))->isSymbol(2) == 0) goto L_980; */
        /* if (((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->isEventBit(258) == 0) goto L_930; */
        process_init(3, 0);
        /* field_0x63c = 0; */
        /* goto L_990; */
        /* L_930:; */
        /* if (is_brought() != 0) goto L_960; */
        process_init(1, 0);
        /* field_0x63c = 0; */
        /* goto L_990; */
        /* L_960:; */
        process_init(2, 0);
        /* field_0x63c = 0; */
        /* goto L_990; */
        /* L_980:; */
        /* L_990:; */
        return process_init(0, 0);
}

/* 00000A1C-00000C1C       .text set_collision__Q210daObjFtree5Act_cFv */
void daObjFtree::Act_c::set_collision() {
        /* _savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* if (this->field_0x2a6 == 1) goto L_9dc; */
        /* if (this->field_0x2a7 != 1) goto L_b80; */
        /* L_9dc:; */
        /* if (field_0x520 == 0) goto L_a84; */
        /* if (this->field_0x2a6 != 1) goto L_a0c; */
        /* ((daObj*)((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 504)))->HitSeStart((this->field_0x20a & 255), (_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1288), 8); */
        /* goto L_a30; */
        /* L_a0c:; */
        /* ((daObj*)((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 504)))->HitSeStart((this->field_0x20a & 255), (_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1288), 7); */
        /* ((daObj*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->HitEff_kikuzu((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1288)); */
        /* L_a30:; */
        /* if (_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) == 0) goto L_a60; */
        /* goto L_a64; */
        /* L_a60:; */
        /* L_a64:; */
        dKy_Sound_set();
        /* goto L_b80; */
        /* L_a84:; */
        /* if ((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1288) != 1) goto L_b24; */
        /* ((cM3dGCyl*)((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1200)))->SetR(); */
        /* ((cM3dGCyl*)((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1200)))->SetH(); */
        /* ((cM3dGCyl*)((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1200)))->SetC(); */
        /* ((cCcS*)(((char*)&g_dComIfG_gameInfo + 9892)))->Set((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 920)); */
        mGndChk = 0;
        /* ((cM3dGCyl*)((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1568)))->SetR(); */
        /* ((cM3dGCyl*)((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1568)))->SetH(); */
        /* ((cM3dGCyl*)((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1568)))->SetC((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 504)); */
        /* ((cCcS*)(((char*)&g_dComIfG_gameInfo + 9892)))->Set((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1288)); */
        /* goto L_b80; */
        /* L_b24:; */
        /* if (this->field_0x2a7 != 1) goto L_b80; */
        /* mGndChk = (this->field_0x134 * this->field_0x63c); */
        /* ((cM3dGCyl*)((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1568)))->SetR(); */
        /* ((cM3dGCyl*)((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1568)))->SetH(); */
        /* ((cM3dGCyl*)((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1568)))->SetC((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 504)); */
        /* L_b80:; */
        /* return _restgpr_29(((cCcS*)(((char*)&g_dComIfG_gameInfo + 9892)))->Set((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1288))); */
}

/* 00000C1C-00000D50       .text talk_ct__Q210daObjFtree5Act_cFv */
void daObjFtree::Act_c::talk_ct() {
        /* field_0x6a4 = -1; */
        /* field_0x6a8 = 0; */
        /* if (this->field_0x680 < 0) goto L_c94; */
        /* if (this->field_0x680 >= 13) goto L_c94; */
        /* if ((this->field_0x680 << 2) == 5280) goto L_c48; */
        /* if (/ * bge * / 1) goto L_c14; */
        /* if ((this->field_0x680 << 2) >= 5279) goto L_c20; */
        /* goto L_c94; */
        /* L_c14:; */
        /* if ((this->field_0x680 << 2) >= 5282) goto L_c94; */
        /* goto L_c70; */
        /* L_c20:; */
        /* field_0x280 = 0; */
        /* goto L_c94; */
        /* L_c48:; */
        /* field_0x280 = 0; */
        /* goto L_c94; */
        /* L_c70:; */
        /* field_0x280 = 0; */
        /* L_c94:; */
        /* field_0x274 = 0; */
        /* field_0x278 = 0; */
        /* field_0x27c = 0; */
        eyePos = 0;
        /* field_0x264 = 0; */
        /* field_0x268 = 0; */
        return this;
}

/* 00000D50-00000F14       .text talk_main__Q210daObjFtree5Act_cFv */
void daObjFtree::Act_c::talk_main() {
        /* if (this->field_0x356 != -1) goto L_da0; */
        /* if (this->field_0xf8 != 1) goto L_da0; */
        /* if (this->field_0xf8 != 65535) goto L_d38; */
        /* field_0x6a4 = fopMsgM_messageSet(((char*)&message_table__10daObjFtree + 0), this); */
        /* field_0x6a8 = 0; */
        /* goto L_e78; */
        /* L_d38:; */
        /* if (this->field_0x6a8 != 0) goto L_d54; */
        /* field_0x6a8 = fopMsgM_SearchByID(fopMsgM_messageSet(((char*)&message_table__10daObjFtree + 0), this)); */
        /* goto L_e78; */
        /* L_d54:; */
        /* if (/ * beq * / 1) goto L_d7c; */
        /* if (/ * bge * / 1) goto L_e78; */
        /* if (/ * beq * / 1) goto L_d70; */
        /* goto L_e78; */
        /* L_d70:; */
        /* field_0xf8 = 16; */
        /* goto L_e78; */
        /* L_d7c:; */
        /* field_0xf8 = 19; */
        ((daObjFtree::Act_c*)(fopMsgM_SearchByID(fopMsgM_messageSet(((char*)&message_table__10daObjFtree + 0), this))))->talk_ct(((char*)&g_dComIfG_gameInfo + 0));
        /* goto L_e78; */
        /* L_da0:; */
        /* if (this->field_0x680 < 0) goto L_e78; */
        /* if (this->field_0x680 >= 13) goto L_e78; */
        /* if ((this->field_0x680 << 2) == 0) goto L_e78; */
        PSVECSquareDistance((this + 504), (this->field_0x5b38 + 504));
        /* if (/ * bne * / 1) goto L_e78; */
        talk_ct();
        /* if (this->field_0x5b38 == 0) goto L_e6c; */
        /* if ((this->field_0x20e - cM_atan2s(__mi())) != 0) goto L_e58; */
        /* L_e58:; */
        /* if ((-(this->field_0x20e - cM_atan2s(__mi()))) > 16384) goto L_e6c; */
        /* L_e6c:; */
        /* L_e78:; */
        return cM_atan2s(__mi());
}

/* 00000F14-00000FC4       .text get_tev_material0_color__Q210daObjFtree5Act_cFP12J3DModelDataUlPsPsPs */
void daObjFtree::Act_c::get_tev_material0_color(J3DModelData*, unsigned long, short*, short*, short*) {
    /* _savegpr_27(this, arg1, long, arg3, arg4, arg5, arg6, arg7); */
    if (this->field_0x60 != 0) {
    }
    /* return _restgpr_27(this->field_0x2c); */
}

/* 00000FC4-00001070       .text set_tev_color__Q210daObjFtree5Act_cFP12J3DModelDataUlsss */
void daObjFtree::Act_c::set_tev_color(J3DModelData*, unsigned long, short, short, short) {
    /* _savegpr_27(this, arg1, long, short, short, short, arg6, arg7); */
    /* goto L_fcc; */
    /* L_f74:; */
    /* L_fcc:; */
    /* if (this->field_0x4 == 0) goto L_f74; */
    /* return _restgpr_27(this->field_0x2c); */
}

/* 00001070-000010F0       .text is_broughtID__10daObjFtreeFi */
void daObjFtree::is_broughtID(int) {
    /* _savegpr_29(this, int, arg2, arg3, arg4, arg5, arg6, arg7); */
    ((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->getEventReg();
    /* if ((_savegpr_29(this, int, arg2, arg3, arg4, arg5, arg6, arg7) & 536870911) != 0) { */
        /* if (((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->isEventBit(258) == 0) goto L_1050; */
    /* L_1050:; */
    return _restgpr_29((0 & 16777215));
}

/* 000010F0-00001138       .text is_brought__Q210daObjFtree5Act_cFv */
void daObjFtree::Act_c::is_brought() {
    }
    return ((daObjFtree*)(15))->is_broughtID(((char*)&ret_tree_no__10daObjFtree + 0));


/* 00001138-000011FC       .text set_broughtID__Q210daObjFtree5Act_cFi */
void daObjFtree::Act_c::set_broughtID(int) {
    /* _savegpr_29(this, int, arg2, arg3, arg4, arg5, arg6, arg7); */
    ((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->getEventReg();
    ((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->setEventReg((1 + -24833));
    ((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->getEventReg();
    ((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->setEventReg();
    /* ((daObjFtree::Act_c*)(_savegpr_29(this, int, arg2, arg3, arg4, arg5, arg6, arg7)))->get_ftree_info(); */
    if (/* bne */ 1) {
    }
    return _restgpr_29(((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->onEventBit(258));
}

/* 000011FC-00001260       .text set_brought__Q210daObjFtree5Act_cFv */
void daObjFtree::Act_c::set_brought() {
    }
    set_broughtID(15);
    /* field_0x638 = 1; */
    return set_broughtID(15);


/* 00001260-000012D0       .text unset_broughtID__Q210daObjFtree5Act_cFi */
void daObjFtree::Act_c::unset_broughtID(int) {
    ((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->getEventReg((int + -24833));
    return ((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->setEventReg((1 + -24833), ((int & 536870911) & 16777215));
}

/* 000012D0-00001334       .text unset_brought__Q210daObjFtree5Act_cFv */
void daObjFtree::Act_c::unset_brought() {
    }
    unset_broughtID(15);
    /* field_0x638 = 0; */
    return unset_broughtID(15);


/* 00001334-000013A0       .text get_ftree_info__Q210daObjFtree5Act_cFPQ210daObjFtree18_ftree_seach_info_ */
void daObjFtree::Act_c::get_ftree_info(daObjFtree::_ftree_seach_info_*) {
    base = 8;
    /* field_0x4 = 0; */
    /* L_12dc:; */
    /* if (((daObjFtree*)(0))->is_broughtID(arg1, arg2, arg3, arg4, arg5, arg6, arg7) != 0) { */
        /* field_0x4 = (this->field_0x4 + 1); */
    /* if ((0 + 1) >= 8) goto L_12dc; */
    /* return this->field_0x4; */

/* 000013A0-00001400       .text iam_last__Q210daObjFtree5Act_cFv */
void daObjFtree::Act_c::iam_last() {
    get_ftree_info();
    if (is_brought() == 0) {
        /* if (/ * blt * / 1) goto L_1364; */
        return 1;
    }
    /* L_1364:; */
    return 0;
}

/* 00001400-00001414       .text action_none_init__Q210daObjFtree5Act_cFs */
void daObjFtree::Act_c::action_none_init(short) {
    /* field_0x2a6 = 0; */
    /* field_0x2a7 = 0; */
    return 1;
}

/* 00001414-00001418       .text action_none_main__Q210daObjFtree5Act_cFv */
void daObjFtree::Act_c::action_none_main() {
}

/* 00001418-000014E8       .text action_waitS_init__Q210daObjFtree5Act_cFs */
void daObjFtree::Act_c::action_waitS_init(short) {
        /* field_0x2a6 = 1; */
        /* field_0x2a7 = 0; */
        /* unset_brought(short, arg2, arg3, arg4, arg5, arg6, arg7); */
        ((dRes_control_c*)(((char*)&M_arcname__Q210daObjFtree5Act_c + 0)))->getRes(13, ((char*)&g_dComIfG_gameInfo + -16460), 64);
        /* if (/ * beq * / 1) goto L_144c; */
        /* if (((mDoExt_brkAnm*)((this + 736)))->init(this->field_0x4) == 0) goto L_144c; */
        SetJointAnimation(6, 0);
        /* goto L_1450; */
        /* L_144c:; */
        /* L_1450:; */
        return 0;
}

/* 000014E8-00001608       .text action_waitS_main__Q210daObjFtree5Act_cFv */
void daObjFtree::Act_c::action_waitS_main() {
        /* _savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* if (this->field_0x652 != 1) goto L_14d0; */
        /* if (this->field_0x356 != this->field_0x354) goto L_14b0; */
        /* ((daObjFtree::Act_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->process_init(4, 0); */
        /* goto L_14bc; */
        /* L_14b0:; */
        /* L_14bc:; */
        /* if (((daObjFtree::Act_c*)(((daObjFtree::Act_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->process_init(4, 0)))->process_init(8, 0) == 0) goto L_14d0; */
        /* field_0x652 = 0; */
        /* goto L_1568; */
        /* L_14d0:; */
        /* if (this->field_0x67c != 0) goto L_150c; */
        /* if ((this->field_0x538 & 2147483647) != 1) goto L_150c; */
        /* if (((daObjFtree::Act_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->process_init(10, 1) == 0) goto L_150c; */
        /* goto L_1564; */
        /* L_150c:; */
        /* cM_rndF(((daObjFtree::Act_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->process_init(10, 1)); */
        /* if (/ * bne * / 1) goto L_1564; */
        /* if (this->field_0x680 != 1) goto L_1564; */
        /* cM_rndF(cM_rndF(((daObjFtree::Act_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->process_init(10, 1))); */
        /* ((daObjFtree::Act_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->process_init(10); */
        /* L_1564:; */
        /* field_0x67c = 0; */
        /* L_1568:; */
        /* return _restgpr_29(((daObjFtree::Act_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->process_init(10)); */
}

/* 00001608-0000173C       .text action_waitM_init__Q210daObjFtree5Act_cFs */
void daObjFtree::Act_c::action_waitM_init(short) {
    /* set_brought(L_attr__Q210daObjFtree27@unnamed@d_a_obj_ftree_cpp@, arg2, arg3, arg4, arg5, arg6, arg7); */
    /* field_0x2a6 = 1; */
    /* field_0x2a7 = 0; */
    ((dRes_control_c*)(((char*)&M_arcname__Q210daObjFtree5Act_c + 0)))->getRes(13, ((char*)&g_dComIfG_gameInfo + -16460), 64);
    if (/* beq */ 1) {
        /* if (((mDoExt_brkAnm*)((this + 736)))->init(this->field_0x4) != 0) goto L_1698; */
        /* if (SetJointAnimation(5, 0) != 0) goto L_1698; */
        /* field_0x68 = 0; */
        return 1;
    }
    /* L_1698:; */
    return 0;
}

/* 0000173C-00001878       .text action_waitM_main__Q210daObjFtree5Act_cFv */
void daObjFtree::Act_c::action_waitM_main() {
        /* _savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* if (((dSv_player_item_record_c*)(((char*)&g_dComIfG_gameInfo + 102)))->getTimer() != 0) goto L_171c; */
        /* ((daObjFtree::Act_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->get_ftree_info(); */
        /* if (/ * beq * / 1) goto L_171c; */
        /* ((daObjFtree::Act_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->process_init(9, 0); */
        /* goto L_17d4; */
        /* L_171c:; */
        /* if (this->field_0x680 != 2) goto L_17d4; */
        /* if (dKy_rain_check() == 0) goto L_1750; */
        /* ((daObjFtree::Act_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->process_init(11, -1); */
        /* goto L_17d0; */
        /* L_1750:; */
        /* if (this->field_0x67c != 0) goto L_1784; */
        /* if ((this->field_0x538 & 2147483647) != 1) goto L_1784; */
        /* if (((daObjFtree::Act_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->process_init(11, 120) == 0) goto L_1784; */
        /* goto L_17d0; */
        /* L_1784:; */
        /* cM_rndF(((daObjFtree::Act_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->process_init(11, 120)); */
        /* if (/ * bne * / 1) goto L_17d0; */
        /* cM_rndF(cM_rndF(((daObjFtree::Act_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->process_init(11, 120))); */
        /* ((daObjFtree::Act_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->process_init(11); */
        /* L_17d0:; */
        /* field_0x67c = 0; */
        /* L_17d4:; */
        /* return _restgpr_29(((daObjFtree::Act_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->process_init(11)); */
}

/* 00001878-000018AC       .text action_waitL_init__Q210daObjFtree5Act_cFs */
void daObjFtree::Act_c::action_waitL_init(short) {
    *(unsigned char*)(this + 679) = 1;
    *(unsigned char*)(this + 678) = 0;
    set_brought();
    mMode = 1;
}

/* 000018AC-000019BC       .text action_waitL_main__Q210daObjFtree5Act_cFv */
void daObjFtree::Act_c::action_waitL_main() {
        /* if (this->field_0x680 != 3) goto L_18dc; */
        /* if (dKy_rain_check() == 0) goto L_186c; */
        process_init(12, -1);
        /* goto L_1918; */
        /* L_186c:; */
        cM_rndF(process_init(12, -1));
        /* if (/ * bne * / 1) goto L_18bc; */
        cM_rndF(cM_rndF(process_init(12, -1)));
        process_init(12);
        /* goto L_1918; */
        /* L_18bc:; */
        /* if (this->field_0x356 == -1) goto L_1918; */
        process_init(12, -1);
        /* goto L_1918; */
        /* L_18dc:; */
        /* if (this->field_0x356 != 12) goto L_1918; */
        /* if (dKy_rain_check() != 0) goto L_1918; */
        /* if (this->field_0x69a != -1) goto L_1918; */
        /* if (this->field_0x356 != -1) goto L_1918; */
        /* L_1918:; */
        return process_init(3, 0);
}

/* 000019BC-00001A4C       .text action_pikupikuS_init__Q210daObjFtree5Act_cFs */
void daObjFtree::Act_c::action_pikupikuS_init(short) {
    if (short != 0) {
    }
    /* field_0x2a6 = 1; */
    /* field_0x2a7 = 0; */
    /* field_0x688 = ((short & 65535) & 65535); */
    /* field_0x68c = 0; */
    cM_rndF(((short & 65535) & 65535));
    return SetJointAnimation(6, 0);
}

/* 00001A4C-00001AF4       .text action_pikupikuS_main__Q210daObjFtree5Act_cFv */
void daObjFtree::Act_c::action_pikupikuS_main() {
        /* if (PlayStopJointAnimation(L_attr__Q210daObjFtree27@unnamed@d_a_obj_ftree_cpp@, arg2, arg3, arg4, arg5, arg6, arg7) == 0) goto L_1a48; */
        /* if (this->field_0x68c >= this->field_0x688) goto L_1a2c; */
        /* cM_rndF(this->field_0x68c); */
        SetJointAnimation(6, 0);
        /* goto L_1a3c; */
        /* L_1a2c:; */
        process_init(1, 0);
        /* L_1a3c:; */
        /* field_0x68c = (this->field_0x68c + 1); */
        /* L_1a48:; */
        return action_waitS_main();
}

/* 00001AF4-00001B4C       .text action_pikupikuM_init__Q210daObjFtree5Act_cFs */
void daObjFtree::Act_c::action_pikupikuM_init(short) {
    /* set_brought(short, arg2, arg3, arg4, arg5, arg6, arg7); */
    /* field_0x690 = short; */
    /* field_0x692 = 0; */
    mState = 0;
    /* field_0x2a6 = 1; */
    /* field_0x2a7 = 0; */
    return 1;
}

/* 00001B4C-00001C44       .text action_pikupikuM_main__Q210daObjFtree5Act_cFv */
void daObjFtree::Act_c::action_pikupikuM_main() {
    /* if (this->field_0x692 >= this->field_0x690) { */
        /* if (this->field_0x690 == -1) goto L_1b7c; */
    mState = (mState + 4000);
    /* goto L_1b90; */
    /* L_1b7c:; */
    if (base >= (mState + 4000)) {
        /* ((daObjFtree::Act_c*)(mState))->process_init(2, 0, base, ((char*)&jmaSinTable + 0), arg5, arg6, arg7); */
    }
    /* L_1b90:; */
    /* field_0x692 = (this->field_0x692 + 1); */
    return action_waitM_main();
}

/* 00001C44-00001C9C       .text action_pikupikuL_init__Q210daObjFtree5Act_cFs */
void daObjFtree::Act_c::action_pikupikuL_init(short) {
    /* set_brought(short, arg2, arg3, arg4, arg5, arg6, arg7); */
    /* field_0x69a = short; */
    mSmoke = 0;
    /* field_0x69e = 0; */
    /* field_0x2a6 = 0; */
    /* field_0x2a7 = 1; */
    return 1;
}

/* 00001C9C-00001D94       .text action_pikupikuL_main__Q210daObjFtree5Act_cFv */
void daObjFtree::Act_c::action_pikupikuL_main() {
    /* if (mSmoke >= this->field_0x69a) { */
        /* if (this->field_0x69a == -1) goto L_1ccc; */
    /* field_0x69e = (this->field_0x69e + 3000); */
    /* goto L_1ce0; */
    /* L_1ccc:; */
    if (base >= (this->field_0x69e + 3000)) {
        /* ((daObjFtree::Act_c*)(this->field_0x69e))->process_init(3, 0, base, ((char*)&jmaSinTable + 0), arg5, arg6, arg7); */
    }
    /* L_1ce0:; */
    mSmoke = (mSmoke + 1);
    return action_waitL_main();
}

/* 00001D94-00001EAC       .text action_changeSL_init__Q210daObjFtree5Act_cFs */
void daObjFtree::Act_c::action_changeSL_init(short) {
    /* field_0x2a6 = 1; */
    /* field_0x2a7 = 0; */
    /* ((dRes_control_c*)(((char*)&M_arcname__Q210daObjFtree5Act_c + 0)))->getRes(13, ((char*)&g_dComIfG_gameInfo + -16460), 64, arg4, arg5); */
    if (/* beq */ 1) {
        /* if (((mDoExt_brkAnm*)((this + 736)))->init(this->field_0x4) != 0) goto L_1e04; */
        /* if (SetJointAnimation(5, 0) != 0) goto L_1e04; */
        set_brought();
        ((JAIZelBasic*)(base))->seStart(27159, (this + 504), 0, 0, 0);
        return 1;
    }
    /* L_1e04:; */
    return 0;
}

/* 00001EAC-00001F0C       .text action_changeSL_main__Q210daObjFtree5Act_cFv */
void daObjFtree::Act_c::action_changeSL_main() {
    /* PlayStopJointAnimation(arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
    PlayStopColorAnimation();
    /* if (PlayStopJointAnimation(arg1, arg2, arg3, arg4, arg5, arg6, arg7) == 1) { */
        /* if (PlayStopColorAnimation() == 1) goto L_1e68; */
    /* L_1e68:; */
    return process_init(5, 0);
}

/* 00001F0C-00001FB4       .text action_changeSL2_init__Q210daObjFtree5Act_cFs */
void daObjFtree::Act_c::action_changeSL2_init(short) {
    /* field_0x2a6 = 1; */
    /* field_0x2a7 = 0; */
    /* field_0x2a4 = 1; */
    /* field_0x640 = 0; */
    /* field_0x684 = 30; */
    /* field_0x63c = 0; */
    /* get_tev_material0_color(this->field_0x4, 2, (this + 1628), (this + 1630), (this + 1632), arg6, arg7); */
    /* field_0x69e = 0; */
    return 1;
}

/* 00001FB4-00002300       .text action_changeSL2_main__Q210daObjFtree5Act_cFv */
void daObjFtree::Act_c::action_changeSL2_main() {
        /* if (this->field_0x2a6 == 0) goto L_2098; */
        /* cLib_addCalc((this + 1600), arg1, arg2, arg3, arg4); */
        /* if (/ * bne * / 1) goto L_2098; */
        /* if (this->field_0x684 <= 0) goto L_207c; */
        /* field_0x684 = (this->field_0x684 + -1); */
        /* L_207c:; */
        /* if (this->field_0x684 != 0) goto L_2098; */
        /* field_0x2a6 = 0; */
        /* field_0x2a7 = 1; */
        /* L_2098:; */
        /* if (this->field_0x2a7 == 0) goto L_2254; */
        /* if (this->field_0x63c != this->field_0x128) goto L_20c0; */
        /* goto L_20e0; */
        /* L_20c0:; */
        /* if (this->field_0x63c != this->field_0xe8) goto L_20d4; */
        /* goto L_20e0; */
        /* L_20d4:; */
        /* L_20e0:; */
        cLib_addCalc((this + 1596));
        /* if (/ * bne * / 1) goto L_21d0; */
        /* if (process_init(3, 0) == 0) goto L_21d0; */
        /* field_0x650 = 47; */
        /* L_21d0:; */
        /* field_0x69e = (this->field_0x69e + 3000); */
        /* L_2254:; */
        /* return this->field_0x69e; */
}

/* 00002300-00002344       .text action_changeLS_init__Q210daObjFtree5Act_cFs */
void daObjFtree::Act_c::action_changeLS_init(short) {
    /* field_0x2a6 = 0; */
    /* field_0x2a7 = 1; */
    /* field_0x640 = 0; */
    /* field_0x63c = 0; */
    /* unset_brought(C_@4076, arg2, arg3, arg4, arg5, arg6, arg7); */
    return 1;
}

/* 00002344-000025DC       .text action_changeLS_main__Q210daObjFtree5Act_cFv */
void daObjFtree::Act_c::action_changeLS_main() {
        /* if (this->field_0x2a7 == 0) goto L_2408; */
        /* if (this->field_0x63c != this->field_0x128) goto L_2308; */
        /* goto L_2328; */
        /* L_2308:; */
        /* if (this->field_0x63c != this->field_0xe8) goto L_231c; */
        /* goto L_2328; */
        /* L_231c:; */
        /* L_2328:; */
        /* cLib_addCalc((this + 1596), arg1, arg2, arg3, arg4); */
        /* if (/ * bne * / 1) goto L_2408; */
        /* field_0x2a6 = 1; */
        /* field_0x2a7 = 0; */
        /* L_2408:; */
        /* if (this->field_0x2a6 == 0) goto L_2530; */
        cLib_addCalc((this + 1600));
        /* if (/ * bne * / 1) goto L_2530; */
        /* L_2530:; */
        return process_init(7, 0);
}

/* 000025DC-000026AC       .text action_changeLS2_init__Q210daObjFtree5Act_cFs */
void daObjFtree::Act_c::action_changeLS2_init(short) {
        /* field_0x2a6 = 1; */
        /* field_0x2a7 = 0; */
        /* ((dRes_control_c*)(((char*)&M_arcname__Q210daObjFtree5Act_c + 0)))->getRes(13, ((char*)&g_dComIfG_gameInfo + -16460), 64, arg4, arg5); */
        /* if (/ * beq * / 1) goto L_2604; */
        /* if (((mDoExt_brkAnm*)((this + 736)))->init(this->field_0x4) == 0) goto L_2604; */
        SetJointAnimation(5, -20);
        /* goto L_2608; */
        /* L_2604:; */
        /* L_2608:; */
        return 0;
}

/* 000026AC-0000270C       .text action_changeLS2_main__Q210daObjFtree5Act_cFv */
void daObjFtree::Act_c::action_changeLS2_main() {
    /* PlayStopJointAnimation(arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
    PlayStopColorAnimation();
    /* if (PlayStopJointAnimation(arg1, arg2, arg3, arg4, arg5, arg6, arg7) == 1) { */
        /* if (PlayStopColorAnimation() == 1) goto L_2668; */
    /* L_2668:; */
    return process_init(1, 0);
}

/* 0000270C-00002794       .text action_changeSM_init__Q210daObjFtree5Act_cFs */
void daObjFtree::Act_c::action_changeSM_init(short) {
    /* set_brought(short, arg2, arg3, arg4, arg5, arg6, arg7); */
    if (action_changeSL_init(0) == 1) {
        ((JAIZelBasic*)(base))->seStart(27159, (this + 504), 0, 0, 0);
        return 1;
    }
    return 0;
}

/* 00002794-000027F4       .text action_changeSM_main__Q210daObjFtree5Act_cFv */
void daObjFtree::Act_c::action_changeSM_main() {
    /* PlayStopJointAnimation(arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
    PlayStopColorAnimation();
    /* if (PlayStopJointAnimation(arg1, arg2, arg3, arg4, arg5, arg6, arg7) == 1) { */
        /* if (PlayStopColorAnimation() == 1) goto L_2750; */
    /* L_2750:; */
    return process_init(2, 0);
}

/* 000027F4-00002840       .text action_changeMS_init__Q210daObjFtree5Act_cFs */
void daObjFtree::Act_c::action_changeMS_init(short) {
    /* if (action_changeLS2_init(0, arg2, arg3, arg4, arg5, arg6, arg7) != 0) { */
        /* unset_brought(); */
        /* return 1; */
    return 0;
}

/* 00002840-00002860       .text action_changeMS_main__Q210daObjFtree5Act_cFv */
void daObjFtree::Act_c::action_changeMS_main() {
    action_changeLS2_main();
}

/* 00002860-00002A4C       .text process_init__Q210daObjFtree5Act_cFis */
void daObjFtree::Act_c::process_init(int, short) {
    if (base != 0) {
        base = 1;
    }
    if (int >= 0) {
        /* if (int < 13) goto L_29a4; */
        /* if (__ptmf_scall(this, short, short, (C_@2100 + 0), eventInfo, arg5, arg6, arg7) != 0) goto L_29a4; */
        /* field_0x696 = 0; */
        /* field_0x698 = 0; */
        /* field_0x6a0 = 0; */
        /* field_0x6a2 = 0; */
        /* field_0x680 = int; */
        return 1;
    }
    /* L_29a4:; */
    return 0;
}

/* 00002A4C-00002BF0       .text process_main__Q210daObjFtree5Act_cFv */
void daObjFtree::Act_c::process_main() {
    if (base != 0) {
        base = 1;
    }
    if (this->field_0x680 >= 0) {
        /* if (this->field_0x680 < 13) goto L_2b54; */
    }
    /* L_2b54:; */
    /* return __ptmf_scall(this, ((C_@2100 + 0) + 568), ((char*)&init$5018 + 0), (C_@2100 + 0), cullMtx, arg5, arg6, arg7); */
}

/* 00002BF0-00002C14       .text solidHeapCB__Q210daObjFtree5Act_cFP10fopAc_ac_c */
void daObjFtree::Act_c::solidHeapCB(fopAc_ac_c*) {
    /* return (create_heap(arg1, arg2, arg3, arg4, arg5, arg6, arg7) & 16777215); */
}

/* 00002C14-00002D94       .text NodeCallBack_Effect__Q210daObjFtree5Act_cFP7J3DNodei */
BOOL daObjFtree::Act_c::NodeCallBack_Effect(J3DNode*, int) {
    /* _savegpr_29(this, arg1, int, arg3, arg4, arg5, arg6, arg7); */
    if (this->field_0x2a4 == 1) {
        /* if (/ * bne * / 1) goto L_2cec; */
        PSMTXCopy();
        PSMTXCopy(((char*)&now__14mDoMtx_stack_c + 0));
        PSMTXMultVec();
        /* ((JAIZelBasic*)(base))->seStart(27160, (_savegpr_29(this, arg1, int, arg3, arg4, arg5, arg6, arg7) + 504), 0, 0, 0); */
        /* if (((dPa_control_c*)(this->field_0x5ab8))->set(0) != 0) goto L_2cec; */
        /* if (((dPa_control_c*)(this->field_0x5ab8))->set(0) != 0) goto L_2cec; */
        /* field_0x2a4 = 0; */
    }
    /* L_2cec:; */
    return _restgpr_29(1);
}

/* 00002D94-00002DDC       .text Ftree_NodeCallBack_Effect__10daObjFtreeFP7J3DNodei */
BOOL daObjFtree::Ftree_NodeCallBack_Effect(J3DNode*, int) {
    if (/* bne */ 1) {
    }
    return 1;
}

/* 00002DDC-00002E9C       .text Ftree_NodeCallBack_M__10daObjFtreeFP7J3DNodei */
BOOL daObjFtree::Ftree_NodeCallBack_M(J3DNode*, int) {
    /* if (arg1 == 0) { */
        /* if (this->field_0x14 != 0) goto L_2df4; */
        /* __ct(); */
        /* PSMTXCopy((this->field_0x8c + (this->field_0x18 * 48)), ((char*)&now__14mDoMtx_stack_c + 0)); */
        /* mDoMtx_ZXYrotM(((char*)&now__14mDoMtx_stack_c + 0)); */
        /* PSMTXCopy(((char*)&now__14mDoMtx_stack_c + 0), (this->field_0x8c + (this->field_0x18 * 48))); */
        /* PSMTXCopy(((char*)&now__14mDoMtx_stack_c + 0), ((char*)&mCurrentMtx__6J3DSys + 0)); */
    /* L_2df4:; */
    return 1;
}

/* 00002E9C-00002F5C       .text Ftree_NodeCallBack_L__10daObjFtreeFP7J3DNodei */
BOOL daObjFtree::Ftree_NodeCallBack_L(J3DNode*, int) {
    /* if (arg1 == 0) { */
        /* if (this->field_0x14 != 0) goto L_2eb4; */
        /* __ct(); */
        /* PSMTXCopy((this->field_0x8c + (this->field_0x18 * 48)), ((char*)&now__14mDoMtx_stack_c + 0)); */
        /* mDoMtx_ZXYrotM(((char*)&now__14mDoMtx_stack_c + 0)); */
        /* PSMTXCopy(((char*)&now__14mDoMtx_stack_c + 0), (this->field_0x8c + (this->field_0x18 * 48))); */
        /* PSMTXCopy(((char*)&now__14mDoMtx_stack_c + 0), ((char*)&mCurrentMtx__6J3DSys + 0)); */
    /* L_2eb4:; */
    return 1;
}

/* 00002F5C-00003354       .text create_heap__Q210daObjFtree5Act_cFv */
void daObjFtree::Act_c::create_heap() {
    /* _savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
    ((dRes_control_c*)(((char*)&M_arcname__Q210daObjFtree5Act_c + 0)))->getRes(6);
    if (/* bne */ 1) {
        ((JUTAssertion*)(((JUTAssertion*)(((dRes_control_c*)(((char*)&M_arcname__Q210daObjFtree5Act_c + 0)))->getRes(6)))->getSDevice()))->showAssert(((char*)&@stringBase0 + 0), 2102, ((char*)&@stringBase0 + 18));
        OSPanic(((char*)&@stringBase0 + 0), 2102, ((char*)&@stringBase0 + 36));
    }
    ((dRes_control_c*)(((char*)&M_arcname__Q210daObjFtree5Act_c + 0)))->getRes(10);
    if (/* bne */ 1) {
        ((JUTAssertion*)(((JUTAssertion*)(((dRes_control_c*)(((char*)&M_arcname__Q210daObjFtree5Act_c + 0)))->getRes(10)))->getSDevice()))->showAssert(((char*)&@stringBase0 + 0), 2108, ((char*)&@stringBase0 + 41));
        OSPanic(((char*)&@stringBase0 + 0), 2108, ((char*)&@stringBase0 + 36));
    }
    if (/* bne */ 1) {
        return 0;
    }
    __nw(180);
    if (/* beq */ 1) {
    }
    /* field_0x2d8 = __ct(__nw(180), 1); */
    if (this->field_0x2d8 == 0) {
        return 0;
    }
    /* field_0x14 = _savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
    /* field_0x8 = 0; */
    /* field_0x8 = 0; */
    /* field_0x8 = 0; */
    /* field_0x8 = 0; */
    ((dRes_control_c*)(((char*)&M_arcname__Q210daObjFtree5Act_c + 0)))->getRes(9);
    if (/* bne */ 1) {
        ((JUTAssertion*)(((JUTAssertion*)(((dRes_control_c*)(((char*)&M_arcname__Q210daObjFtree5Act_c + 0)))->getRes(9)))->getSDevice()))->showAssert(((char*)&@stringBase0 + 0), 2139, ((char*)&@stringBase0 + 56));
        OSPanic(((char*)&@stringBase0 + 0), 2139, ((char*)&@stringBase0 + 36));
    }
    if (/* bne */ 1) {
        return 0;
    }
    /* field_0x2dc = mDoExt_J3DModel(0, 0); */
    if (this->field_0x2dc == 0) {
        return 0;
    }
    /* field_0x14 = _savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
    /* field_0x8 = 0; */
    ((dRes_control_c*)(((char*)&M_arcname__Q210daObjFtree5Act_c + 0)))->getRes(13);
    if (/* bne */ 1) {
        ((JUTAssertion*)(((JUTAssertion*)(((dRes_control_c*)(((char*)&M_arcname__Q210daObjFtree5Act_c + 0)))->getRes(13)))->getSDevice()))->showAssert(((char*)&@stringBase0 + 0), 2155, ((char*)&@stringBase0 + 71));
        OSPanic(((char*)&@stringBase0 + 0), 2155, ((char*)&@stringBase0 + 36));
    }
    if (/* bne */ 1) {
        return 0;
    }
    /* ((mDoExt_brkAnm*)((_savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 736)))->init(); */
    /* ((daObjFtree::Act_c*)(_savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->get_tev_material0_color(this->field_0x4, 2, (_savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1620), (_savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1622), (_savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1624)); */
    /* ((daObjFtree::Act_c*)(_savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->get_tev_material0_color(this->field_0x4, 2, (_savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1636), (_savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1638), (_savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1640)); */
    if (/* beq */ 1) {
        /* if (this->field_0x2d8 != 0) goto L_3258; */
    }
    /* L_3258:; */
    if (1 == 0) {
        /* if (this->field_0x50 != 0) goto L_3274; */
    }
    /* L_3274:; */
    if (1 == 0) {
        /* if (/ * beq * / 1) goto L_3288; */
    }
    /* L_3288:; */
    if (1 == 0) {
        /* if (/ * beq * / 1) goto L_329c; */
    }
    /* L_329c:; */
    if (1 == 0) {
        /* if (((mDoExt_brkAnm*)((_savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 736)))->init() != 0) goto L_32b0; */
    }
    /* L_32b0:; */
    return _restgpr_27(1, this->field_0x2d8, 1, 1, 1);
}

/* 00003354-000035F4       .text _create__Q210daObjFtree5Act_cFv */
cPhs_State daObjFtree::Act_c::_create() {
        /* _savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* if (/ * bne * / 1) goto L_330c; */
        /* if (_savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) == 0) goto L_3300; */
        /* __ct(_savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7), L_attr__Q210daObjFtree27@unnamed@d_a_obj_ftree_cpp@); */
        /* L_3300:; */
        /* L_330c:; */
        /* if (dComIfG_resLoad((_savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 668), ((char*)&M_arcname__Q210daObjFtree5Act_c + 0)) != 4) goto L_354c; */
        /* if (fopAcM_entrySolidHeap(_savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7), ((char*)&solidHeapCB__Q210daObjFtree5Act_cFP10fopAc_ac_c + 0), 0) == 0) goto L_3548; */
        /* if (PrmAbstract<i>__5daObjFPC10fopAc_ac_cii(_savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7), 4, 0) >= 10) goto L_3368; */
        /* goto L_336c; */
        /* L_3368:; */
        /* L_336c:; */
        /* field_0x644 = 15; */
        /* field_0x648 = 0; */
        /* field_0x64c = -1; */
        /* ((daObjFtree::Act_c*)(_savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->set_first_stat(((char*)&L_attr__Q210daObjFtree27@unnamed@d_a_obj_ftree_cpp@ + 272)); */
        /* ((daObjFtree::Act_c*)(_savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->talk_ct(); */
        /* field_0x31c = 0; */
        /* field_0x320 = (this->field_0x158 + this->field_0x1fc); */
        /* field_0x324 = 0; */
        /* if (_savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) == 0) goto L_33cc; */
        /* goto L_33d0; */
        /* L_33cc:; */
        /* L_33d0:; */
        /* field_0x300 = -1; */
        /* ((cBgS*)(((char*)&g_dComIfG_gameInfo + 4768)))->GroundCross((_savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 760)); */
        /* ((daObjFtree::Act_c*)(_savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->set_mtx(); */
        cullMtx = (this->field_0x50 + 36);
        /* fopAcM_setCullSizeBox(_savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* ((dCcD_Stts*)((_savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 860)))->Init(255, 255, _savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* ((dCcD_Cyl*)((_savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 920)))->Set(((char*)&L_attr__Q210daObjFtree27@unnamed@d_a_obj_ftree_cpp@ + 164)); */
        /* field_0x3dc = (_savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 860); */
        /* field_0x44c = 0; */
        /* field_0x450 = 0; */
        /* field_0x454 = 0; */
        /* ((dCcD_Stts*)((_savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1228)))->Init(255, 255, _savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* ((dCcD_Cyl*)((_savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1288)))->Set(((char*)&L_attr__Q210daObjFtree27@unnamed@d_a_obj_ftree_cpp@ + 96)); */
        /* field_0x54c = (_savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1228); */
        /* field_0x5bc = 0; */
        /* field_0x5c0 = 0; */
        /* field_0x5c4 = 0; */
        /* ((daObjFtree::Act_c*)(_savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->XyEvent_init(); */
        /* field_0x104 = 0; */
        /* field_0x100 = 0; */
        /* field_0x350 = ((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getEventIdx(((char*)&@stringBase0 + 85), 255); */
        /* field_0x352 = ((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getEventIdx(((char*)&@stringBase0 + 102), 255); */
        /* field_0x354 = ((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getEventIdx(((char*)&@stringBase0 + 119), 255); */
        /* goto L_354c; */
        /* L_3548:; */
        /* L_354c:; */
        return _restgpr_27(5);
}

/* 00003FB8-00004004       .text _delete__Q210daObjFtree5Act_cFv */
bool daObjFtree::Act_c::_delete() {
    if (this->field_0x638 != 0) {
        /* set_brought(arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
    }
    dComIfG_resDelete((this + 668), ((char*)&M_arcname__Q210daObjFtree5Act_c + 0));
    return 1;
}

/* 00004004-00004144       .text set_mtx__Q210daObjFtree5Act_cFv */
void daObjFtree::Act_c::set_mtx() {
    /* field_0x18 = 0; */
    /* field_0x1c = 0; */
    /* field_0x20 = 0; */
    /* PSMTXTrans(((char*)&now__14mDoMtx_stack_c + 0), arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
    /* mDoMtx_ZXYrotM(((char*)&now__14mDoMtx_stack_c + 0), shape_angle, this->field_0x20e); */
    PSMTXCopy(((char*)&now__14mDoMtx_stack_c + 0), (this->field_0x50 + 36));
    PSMTXCopy(((char*)&now__14mDoMtx_stack_c + 0), (this + 680));
    /* field_0x18 = (scale * this->field_0x63c); */
    /* field_0x1c = (this->field_0x218 * this->field_0x63c); */
    /* field_0x20 = (this->field_0x21c * this->field_0x63c); */
    PSMTXTrans(((char*)&now__14mDoMtx_stack_c + 0));
    /* mDoMtx_ZXYrotM(((char*)&now__14mDoMtx_stack_c + 0), shape_angle, this->field_0x20e); */
    PSMTXCopy(((char*)&now__14mDoMtx_stack_c + 0), (this->field_0x2dc + 36));
    PSMTXCopy(((char*)&now__14mDoMtx_stack_c + 0), (this + 680));
    /* return this->field_0x2dc; */
}

/* 00004144-000042C4       .text _execute__Q210daObjFtree5Act_cFv */
bool daObjFtree::Act_c::_execute() {
    if (this->field_0x680 == 0) {
        return 1;
    }
    /* ((daObjFtree::Act_c*)(1))->search_heart_part(arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
    talk_main();
    set_mtx();
    process_main();
    set_collision();
    fopAcM_rollPlayerCrash(this, 7);
    if (this->field_0x680 == 11) {
    }
    cLib_addCalcAngleS2((this + 660), this->field_0x696, (1 & 65535), 4096);
    cLib_addCalcAngleS2((this + 662), field_0x698, (1 & 65535), 4096);
    if (this->field_0x680 != 12) {
        /* if (this->field_0x680 == 5) goto L_4174; */
    }
    /* L_4174:; */
    if (1 == 0) {
    }
    cLib_addCalcAngleS2((this + 664), this->field_0x6a0, (1 & 65535), 4096);
    cLib_addCalcAngleS2((this + 666), this->field_0x6a2, (1 & 65535), 4096);
    XyEvent_exe();
    if (this->field_0x648 == 0) {
        /* field_0x648 = place_heart_part(); */
    }
    if (this->field_0x650 == 1) {
        /* if (launch_heart_part() != 0) goto L_41f4; */
        /* field_0x650 = 0; */
    /* L_41f4:; */
    if (this->field_0x652 > 1) {
        /* field_0x652 = (this->field_0x652 + -1); */
    if (this->field_0x650 > 1) {
        /* field_0x650 = (this->field_0x650 + -1); */
    return 1;

/* 000042C4-0000455C       .text _draw__Q210daObjFtree5Act_cFv */
bool daObjFtree::Act_c::_draw() {
        /* _savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* if (this->field_0x680 != 0) goto L_426c; */
        return 1;
        /* L_426c:; */
        /* if (this->field_0x2a6 != 1) goto L_4394; */
        /* ((dScnKy_env_light_c*)(((char*)&g_env_light + 0)))->settingTevStruct(0, (_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 504), (_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 268)); */
        /* ((dScnKy_env_light_c*)(((char*)&g_env_light + 0)))->setLightTevColorType(this->field_0x50, (_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 268)); */
        /* if (this->field_0x680 == 5) goto L_42dc; */
        /* if (this->field_0x680 != 6) goto L_431c; */
        /* L_42dc:; */
        /* ((J3DMaterialTable*)((this->field_0x4 + 88)))->removeTevRegAnimator(this->field_0x2e8); */
        /* ((daObjFtree::Act_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->set_tev_color(this->field_0x4, 2, this->field_0x66c, this->field_0x66e, this->field_0x670); */
        /* goto L_4338; */
        /* L_431c:; */
        /* ((mDoExt_brkAnm*)((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 736)))->entry(this->field_0x4); */
        /* L_4338:; */
        /* ((mDoExt_McaMorf*)(this->field_0x2d8))->updateDL(); */
        dComIfGd_setSimpleShadow2();
        /* L_4394:; */
        /* if (this->field_0x2a7 != 1) goto L_44b4; */
        /* ((dScnKy_env_light_c*)(((char*)&g_env_light + 0)))->settingTevStruct(1, (_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 504), (_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 268)); */
        /* ((dScnKy_env_light_c*)(((char*)&g_env_light + 0)))->setLightTevColorType(this->field_0x2dc, (_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 268)); */
        /* ((daObjFtree::Act_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->set_tev_color(this->field_0x4, 2, this->field_0x674, this->field_0x676, this->field_0x678); */
        /* mDoExt_modelUpdateDL(this->field_0x2dc); */
        /* if (this->field_0x63c != this->field_0x128) goto L_4448; */
        /* goto L_4468; */
        /* L_4448:; */
        /* if (this->field_0x63c != this->field_0xe8) goto L_445c; */
        /* goto L_4468; */
        /* L_445c:; */
        /* L_4468:; */
        dComIfGd_setSimpleShadow2();
        /* L_44b4:; */
        return _restgpr_29(1);

namespace daObjFtree {
namespace {
/* 0000455C-0000457C       .text Mthd_Create__Q210daObjFtree27@unnamed@d_a_obj_ftree_cpp@FPv */
cPhs_State Mthd_Create(void* i_this) {
    return ((daObjFtree::Act_c*)i_this)->_create();

/* 0000457C-000045A0       .text Mthd_Delete__Q210daObjFtree27@unnamed@d_a_obj_ftree_cpp@FPv */
BOOL Mthd_Delete(void* i_this) {
    return ((daObjFtree::Act_c*)i_this)->_delete();

/* 000045A0-000045C4       .text Mthd_Execute__Q210daObjFtree27@unnamed@d_a_obj_ftree_cpp@FPv */
BOOL Mthd_Execute(void*) {
    /* return (((daObjFtree::Act_c*)(arg0))->_execute(arg1, arg2, arg3, arg4, arg5, arg6, arg7) & 16777215); */

/* 000045C4-000045E8       .text Mthd_Draw__Q210daObjFtree27@unnamed@d_a_obj_ftree_cpp@FPv */
BOOL Mthd_Draw(void* i_this) {
    return ((daObjFtree::Act_c*)i_this)->_draw();

/* 000045E8-000045F0       .text Mthd_IsDelete__Q210daObjFtree27@unnamed@d_a_obj_ftree_cpp@FPv */
BOOL Mthd_IsDelete(void*) {
    return 1;

static actor_method_class Mthd_Table = {
    (process_method_func)Mthd_Create,
    (process_method_func)Mthd_Delete,
    (process_method_func)Mthd_Execute,
    (process_method_func)Mthd_IsDelete,
    (process_method_func)Mthd_Draw,
};
}; // namespace
}; // namespace daObjFtree

actor_process_profile_definition g_profile_Obj_Ftree = {
    /* Layer ID     */ fpcLy_CURRENT_e,
    /* List ID      */ 0x0003,
    /* List Prio    */ fpcPi_CURRENT_e,
    /* Proc Name    */ fpcNm_Obj_Ftree_e,
    /* Proc SubMtd  */ &g_fpcLf_Method.base,
    /* Size         */ sizeof(daObjFtree::Act_c),
    /* Size Other   */ 0,
    /* Parameters   */ 0,
    /* Leaf SubMtd  */ &g_fopAc_Method.base,
    /* Draw Prio    */ fpcDwPi_Obj_Ftree_e,
    /* Actor SubMtd */ &daObjFtree::Mthd_Table,
    /* Status       */ fopAcStts_CULL_e | fopAcStts_UNK40000_e,
    /* Group        */ fopAc_ACTOR_e,
    /* Cull Type    */ fopAc_CULLBOX_CUSTOM_e,
};

/* 由 fix_decomp_braces.py 补齐：反编译产物末尾缺 11 个 } */
}}}}}}}}}}}
