/**
 * d_a_npc_ds1.cpp
 * NPC - Doc Bandam (Windfall Potion Shop shopkeeper)
 */

#include "d/dolzel_rel.h" // IWYU pragma: keep
#include "d/actor/d_a_npc_ds1.h"
#include "d/d_cc_d.h"

static dCcD_SrcCyl l_cyl_src = {
    // dCcD_SrcGObjInf
    {
        /* Flags             */ 0,
        /* SrcObjAt  Type    */ 0,
        /* SrcObjAt  Atp     */ 0,
        /* SrcObjAt  SPrm    */ 0,
        /* SrcObjTg  Type    */ AT_TYPE_ALL,
        /* SrcObjTg  SPrm    */ cCcD_TgSPrm_Set_e | cCcD_TgSPrm_IsEnemy_e,
        /* SrcObjCo  SPrm    */ cCcD_CoSPrm_Set_e | cCcD_CoSPrm_IsPlayer_e | cCcD_CoSPrm_VsGrpAll_e,
        /* SrcGObjAt Se      */ 0,
        /* SrcGObjAt HitMark */ dCcG_AtHitMark_None_e,
        /* SrcGObjAt Spl     */ dCcG_At_Spl_UNK0,
        /* SrcGObjAt Mtrl    */ 0,
        /* SrcGObjAt SPrm    */ 0,
        /* SrcGObjTg Se      */ 0,
        /* SrcGObjTg HitMark */ 0,
        /* SrcGObjTg Spl     */ dCcG_Tg_Spl_UNK0,
        /* SrcGObjTg Mtrl    */ 0,
        /* SrcGObjTg SPrm    */ dCcG_TgSPrm_NoHitMark_e,
        /* SrcGObjCo SPrm    */ 0,
    },
    // cM3dGCylS
    {{
        /* Center */ {0.0f, 0.0f, 0.0f},
        /* Radius */ 30.0f,
        /* Height */ 80.0f,
    }},
};


/* 000000EC-00000108       .text __ct__20daNpc_Ds1_childHIO_cFv */
daNpc_Ds1_childHIO_c::daNpc_Ds1_childHIO_c() {
    /* __ct__20daNpc_Ds1_childHIO_cFv: 无实义指令 */
}

/* 00000108-00000194       .text daNpc_Ds1_checkCreateDrugChuchu__FUc */
void daNpc_Ds1_checkCreateDrugChuchu(unsigned char) {
    __mi();
}

/* 00000194-00000298       .text __ct__15daNpc_Ds1_HIO_cFv */
daNpc_Ds1_HIO_c::daNpc_Ds1_HIO_c() {
    /* field_0x0 = farg1; */
    /* field_0x4 = farg0; */
    /* field_0x8 = 0; */
    return arg0;
}

/* 000002F8-00000318       .text daNpc_Ds1_XyEventCB__FPvi */
static s16 daNpc_Ds1_XyEventCB(void* i_this, int i_param) {
    static_cast<daNpc_Ds1_c*>(i_this)->XyEventCB(i_param);
    return 1;
}

/* 00000318-00000550       .text XyEventCB__11daNpc_Ds1_cFi */
void daNpc_Ds1_c::XyEventCB(int) {
        /* _savegpr_29(this, int, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* if (((this->field_0x5bc7 + -73) & 16777215) <= 1) goto L_270; */
        /* if (this->field_0x5bc7 != 75) goto L_440; */
        /* L_270:; */
        /* if (daNpc_Ds1_checkCreateDrugChuchu(this->field_0x5bc7) != 0) goto L_380; */
        /* if (this->field_0x5bc7 != 73) goto L_29c; */
        /* if (this->field_0xa0 >= 10) goto L_2d4; */
        /* L_29c:; */
        /* if (this->field_0x5bc7 != 74) goto L_2b8; */
        /* if (this->field_0xa1 >= 15) goto L_2d4; */
        /* L_2b8:; */
        /* if (this->field_0x5bc7 != 75) goto L_380; */
        /* if (this->field_0xa2 < 15) goto L_380; */
        /* L_2d4:; */
        /* field_0x887 = 5; */
        /* field_0x888 = 2; */
        /* if (__ptmf_cmpr((_savegpr_29(this, int, arg2, arg3, arg4, arg5, arg6, arg7) + 2008)) == 0) goto L_438; */
        /* if (__ptmf_test((_savegpr_29(this, int, arg2, arg3, arg4, arg5, arg6, arg7) + 2008)) == 0) goto L_348; */
        /* field_0x898 = -1; */
        /* __ptmf_scall(_savegpr_29(this, int, arg2, arg3, arg4, arg5, arg6, arg7), 0); */
        /* L_348:; */
        /* field_0x898 = 0; */
        /* __ptmf_scall(_savegpr_29(this, int, arg2, arg3, arg4, arg5, arg6, arg7), 0); */
        /* goto L_438; */
        /* L_380:; */
        /* if (daNpc_Ds1_checkCreateDrugChuchu(this->field_0x5bc7) != 0) goto L_438; */
        /* field_0x887 = 6; */
        /* field_0x888 = 3; */
        /* if (__ptmf_cmpr((_savegpr_29(this, int, arg2, arg3, arg4, arg5, arg6, arg7) + 2008)) == 0) goto L_438; */
        /* if (__ptmf_test((_savegpr_29(this, int, arg2, arg3, arg4, arg5, arg6, arg7) + 2008)) == 0) goto L_404; */
        /* field_0x898 = -1; */
        /* __ptmf_scall(_savegpr_29(this, int, arg2, arg3, arg4, arg5, arg6, arg7), 0); */
        /* L_404:; */
        /* field_0x898 = 0; */
        /* __ptmf_scall(_savegpr_29(this, int, arg2, arg3, arg4, arg5, arg6, arg7), 0); */
        /* L_438:; */
        /* goto L_448; */
        /* L_440:; */
        /* field_0x888 = 4; */
        /* L_448:; */
        /* return _restgpr_29(this->field_0x892); */
}

/* 00000550-00000718       .text nodeCallBack_Ds__FP7J3DNodei */
static BOOL nodeCallBack_Ds(J3DNode*, int) {
        /* _savegpr_27(arg0, int, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* if (/ * bne * / 1) goto L_610; */
        /* if (this->field_0x14 == 0) goto L_610; */
        PSMTXCopy((this->field_0x8c + (this->field_0x18 * 48)), this->field_0x0, C_@4188);
        /* if (this->field_0x18 != (this->field_0x638 & 255)) goto L_5a8; */
        /* mDoMtx_YrotM(this->field_0x0, ((-this->field_0x6aa) & 65535)); */
        /* mDoMtx_ZrotM(this->field_0x0, ((-this->field_0x6a8) & 65535)); */
        MtxPosition();
        /* ((daNpc_Ds1_c*)(this->field_0x14))->setAttentionBasePos(); */
        MtxPosition();
        /* ((daNpc_Ds1_c*)(this->field_0x14))->setEyePos(); */
        /* if (this->field_0x75f == 255) goto L_5e0; */
        /* field_0x75f = (this->field_0x75f + 1); */
        /* goto L_5e0; */
        /* L_5a8:; */
        /* if (this->field_0x18 != (this->field_0x639 & 255)) goto L_5e0; */
        /* mDoMtx_XrotM(this->field_0x0, this->field_0x6ae); */
        /* mDoMtx_ZrotM(this->field_0x0, this->field_0x6ac); */
        /* L_5e0:; */
        PSMTXCopy(this->field_0x0, ((char*)&mCurrentMtx__6J3DSys + 0));
        PSMTXCopy(this->field_0x0, (this->field_0x8c + (this->field_0x18 * 48)));
        /* L_610:; */
        return _restgpr_27(1);
}

/* 00000718-00000824       .text initTexPatternAnm__11daNpc_Ds1_cFb */
void daNpc_Ds1_c::initTexPatternAnm(bool) {
    /* _savegpr_29(this, bool, arg2, arg3, arg4, arg5, arg6, arg7); */
    /* field_0x2a4 = ((dRes_control_c*)(((char*)&m_arcname__11daNpc_Ds1_c + 0)))->getRes(((char*)&l_btp_ix_tbl + 0), ((char*)&g_dComIfG_gameInfo + -16460), 64); */
    if (this->field_0x2a4 == 0) {
        ((JUTAssertion*)(((JUTAssertion*)(((dRes_control_c*)(((char*)&m_arcname__11daNpc_Ds1_c + 0)))->getRes(((char*)&l_btp_ix_tbl + 0), ((char*)&g_dComIfG_gameInfo + -16460), 64)))->getSDevice()))->showAssert(((char*)&@stringBase0 + 0), 488, ((char*)&@stringBase0 + 16));
        OSPanic(((char*)&@stringBase0 + 0), 488, ((char*)&@stringBase0 + 40));
    }
    /* if (((mDoExt_btpAnm*)((_savegpr_29(this, bool, arg2, arg3, arg4, arg5, arg6, arg7) + 680)))->init(this->field_0x4, this->field_0x2a4, 1, 2, 0, -1) == 0) { */
        /* return 0; */
    /* field_0x2bc = 0; */
    /* field_0x2be = 0; */
    return _restgpr_29(1);
}

/* 00000824-000008B0       .text playTexPatternAnm__11daNpc_Ds1_cFv */
void daNpc_Ds1_c::playTexPatternAnm() {
        /* if (cLib_calcTimer<s>__FPs((this + 702), arg1, arg2, arg3, arg4, arg5, arg6, arg7) != 0) goto L_7b0; */
        /* if (this->field_0x2bc < (this->field_0x6 & 65535)) goto L_7a8; */
        /* field_0x2bc = (this->field_0x6 - this->field_0x2bc); */
        cM_rndF(C_@4370);
        /* goto L_7b0; */
        /* L_7a8:; */
        /* field_0x2bc = (C_@4369 + 1); */
        /* L_7b0:; */
        return C_@4369;
}

/* 000008B0-000009A8       .text setAnm__11daNpc_Ds1_cFScf */
void daNpc_Ds1_c::setAnm(signed char, float) {
    if ((char & 255) == (this->field_0x885 & 255)) {
        /* if ((this->field_0x885 & 255) == -1) goto L_8a4; */
    }
    /* field_0x885 = char; */
    if (farg0 > base) {
    }
    /* dNpc_setAnm_2(this->field_0x298, ((C_@2100 + 0) + 144), ((char*)&l_bck_ix_tbl + 0), -1, ((C_@2100 + 0) + 140), arg5, arg6, arg7); */
    if ((char & 255) != 4) {
        /* if ((char & 255) != 6) goto L_888; */
        /* if (((char + -8) & 16777215) > 1) goto L_888; */
        /* if ((char & 255) == 7) goto L_898; */
    }
    /* L_888:; */
    /* field_0x6b3 = 1; */
    /* field_0x6b4 = 1; */
    /* goto L_8a4; */
    /* L_898:; */
    /* field_0x6b3 = 0; */
    /* field_0x6b4 = 0; */
    /* L_8a4:; */
    return (char & 255);
}

/* 000009A8-000009EC       .text setTexAnm__11daNpc_Ds1_cFSc */
void daNpc_Ds1_c::setTexAnm(signed char) {
    if ((m884 & 255) == (char & 255)) {
        /* if ((m884 & 255) == -1) goto L_8f0; */
    }
    m884 = char;
    /* L_8f0:; */
    return initTexPatternAnm(1);
}

/* 000009EC-00000CAC       .text setAnmFromMsgTag__11daNpc_Ds1_cFv */
void daNpc_Ds1_c::setAnmFromMsgTag() {
        /* if (this->field_0x5bcf == 3) goto L_9b8; */
        /* if (/ * bge * / 1) goto L_948; */
        /* if (this->field_0x5bcf == 1) goto L_978; */
        /* if (/ * bge * / 1) goto L_998; */
        /* if (this->field_0x5bcf >= 0) goto L_958; */
        /* goto L_a14; */
        /* L_948:; */
        /* if (this->field_0x5bcf == 5) goto L_9f8; */
        /* if (/ * bge * / 1) goto L_a14; */
        /* goto L_9d8; */
        /* L_958:; */
        /* setAnm(0, C_@4457, arg3, arg4, arg5, arg6, arg7); */
        setTexAnm(0);
        /* goto L_a14; */
        /* L_978:; */
        ((daNpc_Ds1_c*)(setTexAnm(0)))->setAnm(1, C_@4457);
        setTexAnm(0);
        /* goto L_a14; */
        /* L_998:; */
        ((daNpc_Ds1_c*)(setTexAnm(0)))->setAnm(2, C_@4457);
        setTexAnm(1);
        /* goto L_a14; */
        /* L_9b8:; */
        ((daNpc_Ds1_c*)(setTexAnm(1)))->setAnm(3, C_@4457);
        setTexAnm(0);
        /* goto L_a14; */
        /* L_9d8:; */
        ((daNpc_Ds1_c*)(setTexAnm(0)))->setAnm(4, C_@4457);
        setTexAnm(1);
        /* goto L_a14; */
        /* L_9f8:; */
        ((daNpc_Ds1_c*)(setTexAnm(1)))->setAnm(9, C_@4457);
        setTexAnm(1);
        /* L_a14:; */
        /* if (this->field_0x885 != 1) goto L_a98; */
        /* if (((J3DFrameCtrl*)((this->field_0x298 + 88)))->checkPass(C_@4352) == 0) goto L_a98; */
        /* field_0x886 = (this->field_0x886 + 1); */
        /* if (((this->field_0x886 + 1) & 255) <= 1) goto L_a98; */
        setAnm(0, C_@4457);
        /* field_0x886 = 0; */
        /* L_a98:; */
        /* if (this->field_0x885 != 9) goto L_b1c; */
        /* if (((J3DFrameCtrl*)((this->field_0x298 + 88)))->checkPass(C_@4352) == 0) goto L_b1c; */
        /* field_0x886 = (this->field_0x886 + 1); */
        /* if (((this->field_0x886 + 1) & 255) <= 4) goto L_b1c; */
        setAnm(0, C_@4457);
        /* field_0x886 = 0; */
        /* L_b1c:; */
        /* if (this->field_0x885 != 3) goto L_ba0; */
        /* if (((J3DFrameCtrl*)((this->field_0x298 + 88)))->checkPass(C_@4352) == 0) goto L_ba0; */
        /* field_0x886 = (this->field_0x886 + 1); */
        /* if (((this->field_0x886 + 1) & 255) <= 1) goto L_ba0; */
        setAnm(2, C_@4457);
        /* field_0x886 = 0; */
        /* L_ba0:; */
        /* field_0x5bcf = 255; */
        return setAnm(2, C_@4457);
}

/* 00000CAC-00000DB0       .text chkAttention__11daNpc_Ds1_cF4cXyzs */
void daNpc_Ds1_c::chkAttention(cXyz, short) {
    __mi();
    PSVECDotProduct();
    if (/* ble */ 1) {
        /* if (/ * ble * / 1) goto L_c9c; */
    }
    /* L_c9c:; */
    return 1;
}

/* 00000DB0-00000EAC       .text eventOrder__11daNpc_Ds1_cFv */
void daNpc_Ds1_c::eventOrder() {
        /* if ((this->field_0x887 & 255) != 3) goto L_d00; */
        /* fopAcM_orderOtherEventId(this, this->field_0x88e, 255, (arg3 + -1), 0, 1); */
        /* goto L_db0; */
        /* L_d00:; */
        /* if ((this->field_0x887 & 255) != 4) goto L_d28; */
        /* fopAcM_orderOtherEventId(fopAcM_orderOtherEventId(this, this->field_0x88e, 255, (arg3 + -1), 0, 1), this->field_0x88c, 255); */
        /* goto L_db0; */
        /* L_d28:; */
        /* if ((this->field_0x887 & 255) != 5) goto L_d50; */
        /* fopAcM_orderOtherEventId(fopAcM_orderOtherEventId(fopAcM_orderOtherEventId(this, this->field_0x88e, 255, (arg3 + -1), 0, 1), this->field_0x88c, 255), this->field_0x890, 255); */
        /* goto L_db0; */
        /* L_d50:; */
        /* if ((this->field_0x887 & 255) != 6) goto L_d78; */
        /* fopAcM_orderOtherEventId(fopAcM_orderOtherEventId(fopAcM_orderOtherEventId(fopAcM_orderOtherEventId(this, this->field_0x88e, 255, (arg3 + -1), 0, 1), this->field_0x88c, 255), this->field_0x890, 255), this->field_0x892, 255); */
        /* goto L_db0; */
        /* L_d78:; */
        /* if ((this->field_0x887 & 255) == 1) goto L_d88; */
        /* if ((this->field_0x887 & 255) != 2) goto L_db0; */
        /* L_d88:; */
        /* if (this->field_0x887 != 1) goto L_db0; */
        /* L_db0:; */
        /* return fopAcM_orderSpeakEvent(fopAcM_orderOtherEventId(fopAcM_orderOtherEventId(fopAcM_orderOtherEventId(fopAcM_orderOtherEventId(this, this->field_0x88e, 255, (arg3 + -1), 0, 1), this->field_0x88c, 255), this->field_0x890, 255), this->field_0x892, 255)); */
}

/* 00000EAC-000011F8       .text checkOrder__11daNpc_Ds1_cFv */
void daNpc_Ds1_c::checkOrder() {
        /* if (this->field_0xf8 != 2) goto L_fa8; */
        /* if ((this->field_0x887 & 255) != 3) goto L_ebc; */
        /* field_0x887 = 0; */
        /* if (__ptmf_cmpr((this + 2008)) == 0) goto L_10f4; */
        /* if (__ptmf_test((this + 2008)) == 0) goto L_e84; */
        /* field_0x898 = -1; */
        __ptmf_scall(this, 0);
        /* L_e84:; */
        /* field_0x898 = 0; */
        __ptmf_scall(this, 0);
        /* goto L_10f4; */
        /* L_ebc:; */
        /* if (0 != 4) goto L_f84; */
        /* field_0x887 = 0; */
        /* if (__ptmf_cmpr((this + 2008)) == 0) goto L_10f4; */
        /* if (__ptmf_test((this + 2008)) == 0) goto L_f4c; */
        /* field_0x898 = -1; */
        __ptmf_scall(this, 0);
        /* L_f4c:; */
        /* field_0x898 = 0; */
        __ptmf_scall(this, 0);
        /* goto L_10f4; */
        /* L_f84:; */
        /* if (0 != 5) goto L_f98; */
        /* field_0x887 = 0; */
        /* goto L_10f4; */
        /* L_f98:; */
        /* if (/ * bne * / 1) goto L_10f4; */
        /* field_0x887 = 0; */
        /* goto L_10f4; */
        /* L_fa8:; */
        /* if (0 != 1) goto L_10f4; */
        /* if ((this->field_0x887 & 255) == 1) goto L_fc8; */
        /* if ((this->field_0x887 & 255) != 2) goto L_10f4; */
        /* L_fc8:; */
        /* if (this->field_0x52b8 == 1) goto L_ff0; */
        /* if (this->field_0x52b8 == 2) goto L_ff0; */
        /* if (this->field_0x52b8 != 3) goto L_ff4; */
        /* L_ff0:; */
        /* L_ff4:; */
        /* if (1 == 0) goto L_1034; */
        /* field_0x887 = 0; */
        /* if (this->field_0x888 == 2) goto L_1020; */
        /* field_0x761 = 1; */
        talkInit();
        /* L_1020:; */
        /* goto L_10f4; */
        /* L_1034:; */
        /* if (((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->isEventBit(4384) == 0) goto L_1098; */
        ((ShopCam_action_c*)((this + 2020)))->shop_cam_action_init();
        /* goto L_10dc; */
        /* L_1098:; */
        ((ShopCam_action_c*)((this + 2020)))->ds_normal_cam_action_init();
        /* L_10dc:; */
        /* field_0x887 = 0; */
        /* field_0x761 = 1; */
        /* L_10f4:; */
        return talkInit();
}

/* 000011F8-00001698       .text next_msgStatus__11daNpc_Ds1_cFPUl */
void daNpc_Ds1_c::next_msgStatus(unsigned long*) {
        /* _savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* if (/ * bgt * / 1) goto L_158c; */
        base = (base + 1);
        /* goto L_1590; */
        /* if (this->field_0x89b != 73) goto L_117c; */
        base = 7632;
        /* goto L_1590; */
        /* L_117c:; */
        base = 7646;
        /* goto L_1590; */
        /* if (/ * beq * / 1) goto L_11a8; */
        base = 7644;
        /* goto L_1590; */
        /* L_11a8:; */
        /* field_0x5bc6 = 23; */
        /* field_0x5bc5 = 39; */
        /* goto L_1590; */
        base = 7616;
        /* goto L_1590; */
        base = 7616;
        /* goto L_1590; */
        /* if (/ * beq * / 1) goto L_1200; */
        base = 7644;
        /* goto L_1590; */
        /* L_1200:; */
        /* field_0x5bc6 = 23; */
        /* field_0x5bc5 = 39; */
        base = (base + 3);
        /* goto L_1590; */
        /* if (daNpc_Ds1_checkCreateDrugChuchu(this->field_0x89b) != 0) goto L_1244; */
        base = 7624;
        /* goto L_1590; */
        /* L_1244:; */
        /* if (this->field_0x89b != 73) goto L_1264; */
        /* if (this->field_0xa0 >= 5) goto L_129c; */
        /* L_1264:; */
        /* if (this->field_0x89b != 74) goto L_1280; */
        /* if (this->field_0xa1 >= 5) goto L_129c; */
        /* L_1280:; */
        /* if (this->field_0x89b != 75) goto L_12a8; */
        /* if (this->field_0xa2 < 5) goto L_12a8; */
        /* L_129c:; */
        base = 7620;
        /* goto L_1590; */
        /* L_12a8:; */
        base = 7623;
        /* goto L_1590; */
        /* if (((dSv_player_item_c*)(((char*)&g_dComIfG_gameInfo + 60)))->checkEmptyBottle() == 0) goto L_12d4; */
        /* goto L_1590; */
        /* L_12d4:; */
        base = 7621;
        /* goto L_1590; */
        /* if (this->field_0x89b != 73) goto L_1300; */
        /* if (this->field_0xa0 >= 10) goto L_1338; */
        /* L_1300:; */
        /* if (this->field_0x89b != 74) goto L_131c; */
        /* if (this->field_0xa1 >= 15) goto L_1338; */
        /* L_131c:; */
        /* if (this->field_0x89b != 75) goto L_1344; */
        /* if (this->field_0xa2 < 15) goto L_1344; */
        /* L_1338:; */
        base = 7625;
        /* goto L_1590; */
        /* L_1344:; */
        base = 7630;
        /* goto L_1590; */
        base = 7616;
        /* goto L_1590; */
        /* if (((dSv_player_item_c*)(((char*)&g_dComIfG_gameInfo + 60)))->checkEmptyBottle() == 0) goto L_137c; */
        /* goto L_1590; */
        /* L_137c:; */
        base = 7628;
        /* goto L_1590; */
        /* if (this->field_0x5bdd == 0) goto L_13a8; */
        base = 0;
        /* goto L_1590; */
        /* L_13a8:; */
        /* if (this->field_0xfa != 0) goto L_154c; */
        /* dShop_BoughtErrorStatus((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 2108), 0, this->field_0x5bb0); */
        /* if (/ * beq * / 1) goto L_13ec; */
        base = 7639;
        /* goto L_1590; */
        /* L_13ec:; */
        /* if (/ * beq * / 1) goto L_1400; */
        base = 7640;
        /* goto L_1590; */
        /* L_1400:; */
        /* if (/ * beq * / 1) goto L_1414; */
        base = 7641;
        /* goto L_1590; */
        /* L_1414:; */
        /* if (checkItemGet((((ShopItems_c*)((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 2108)))->getSelectItemNo() & 16777215), 0) != 0) goto L_14bc; */
        /* ((JAIZelBasic*)(base))->seStart(2175, (_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 608), 0, dComIfGp_getReverb((this->field_0x20a & 255)), 0); */
        /* ((ShopItems_c*)((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 2108)))->hideSelectItem(); */
        /* field_0x7d4 = ((ShopItems_c*)((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 2108)))->getSelectItemNo(); */
        /* field_0x5b54 = (this->field_0x5b54 + (-this->field_0x5bb0)); */
        /* field_0x887 = 3; */
        /* field_0x888 = 4; */
        /* goto L_1590; */
        /* L_14bc:; */
        /* ((JAIZelBasic*)(base))->seStart(2175, (_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 608), 0, dComIfGp_getReverb((this->field_0x20a & 255)), 0); */
        /* ((ShopItems_c*)((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 2108)))->hideSelectItem(); */
        /* field_0x7d4 = ((ShopItems_c*)((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 2108)))->getSelectItemNo(); */
        /* execItemGet((((ShopItems_c*)((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 2108)))->getSelectItemNo() & 16777215)); */
        /* field_0x5b54 = (this->field_0x5b54 + (-this->field_0x5bb0)); */
        base = 7642;
        /* goto L_1590; */
        /* L_154c:; */
        base = (base + -3);
        /* goto L_1590; */
        /* if (this->field_0xfa != 0) goto L_1580; */
        base = 7611;
        /* goto L_1590; */
        /* L_1580:; */
        base = 7610;
        /* goto L_1590; */
        /* L_158c:; */
        /* L_1590:; */
        return _restgpr_28(16, ((char*)&g_dComIfG_gameInfo + 0));
}

/* 00001698-00001794       .text getMsg__11daNpc_Ds1_cFv */
void daNpc_Ds1_c::getMsg() {
        /* if (this->field_0x7d0 == 0) goto L_15d4; */
        /* field_0x7d0 = 0; */
        /* goto L_1694; */
        /* L_15d4:; */
        /* if (this->field_0x52b8 == 1) goto L_15fc; */
        /* if (this->field_0x52b8 == 2) goto L_15fc; */
        /* if (this->field_0x52b8 != 3) goto L_1600; */
        /* L_15fc:; */
        /* L_1600:; */
        /* if (1 == 0) goto L_166c; */
        /* if (this->field_0x89b == 73) goto L_1624; */
        /* if (this->field_0x89b == 74) goto L_1624; */
        /* if (this->field_0x89b != 75) goto L_1640; */
        /* L_1624:; */
        ((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->onEventBit(4384);
        /* goto L_1694; */
        /* L_1640:; */
        /* if (((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->isEventBit(4384) != 0) goto L_1664; */
        /* goto L_1694; */
        /* L_1664:; */
        /* goto L_1694; */
        /* L_166c:; */
        /* if (((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->isEventBit(4384) == 0) goto L_1690; */
        /* goto L_1694; */
        /* L_1690:; */
        /* L_1694:; */
        return 7601;
}

/* 00001794-00001850       .text setCollision__11daNpc_Ds1_cFv */
void daNpc_Ds1_c::setCollision() {
    /* MtxTrans(0, arg1, arg2, arg3); */
    /* mDoMtx_YrotM(base, this->field_0x758); */
    MtxPosition();
    ((cM3dGCyl*)((this + 1568)))->SetC();
    ((cM3dGCyl*)((this + 1568)))->SetR();
    ((cM3dGCyl*)((this + 1568)))->SetH();
    return ((cCcS*)(((char*)&g_dComIfG_gameInfo + 9892)))->Set((this + 1288));
}

/* 00001850-0000185C       .text talkInit__11daNpc_Ds1_cFv */
void daNpc_Ds1_c::talkInit() {
    m899 = 0;
}

/* 0000185C-00001884       .text daNpc_Ds1_shopMsgCheck__FUl */
void daNpc_Ds1_shopMsgCheck(unsigned long) {
        /* if (long < 7633) goto L_1780; */
        /* if (long <= 7642) goto L_1788; */
        /* L_1780:; */
        /* if (long != 7616) goto L_1790; */
        /* L_1788:; */
        return 1;
}

/* 00001884-000018AC       .text daNpc_Ds1_shopStickMoveMsgCheck__FUl */
void daNpc_Ds1_shopStickMoveMsgCheck(unsigned long) {
        /* if (long < 7633) goto L_17a8; */
        /* if (long <= 7635) goto L_17b0; */
        /* L_17a8:; */
        /* if (long != 7616) goto L_17b8; */
        /* L_17b0:; */
        return 1;
}

/* 000018AC-00001B04       .text normal_talk__11daNpc_Ds1_cFv */
void daNpc_Ds1_c::normal_talk() {
        /* if (this->field_0xf8 != 14) goto L_1824; */
        /* field_0xf8 = next_msgStatus((this + 1988), arg2); */
        /* if (this->field_0xf8 != 15) goto L_19b8; */
        /* fopMsgM_messageSet(this->field_0x7c4); */
        /* goto L_19b8; */
        /* L_1824:; */
        /* if (this->field_0xf8 != 18) goto L_19ac; */
        /* if (this->field_0x7c4 != 7626) goto L_188c; */
        /* if (this->field_0x89b != 73) goto L_1850; */
        /* goto L_186c; */
        /* L_1850:; */
        /* if (4 != 74) goto L_1864; */
        /* goto L_186c; */
        /* L_1864:; */
        /* L_186c:; */
        /* field_0x5b7c = (this->field_0x5b7c + -15); */
        /* goto L_18d8; */
        /* L_188c:; */
        /* if ((this->field_0x5b7c + -15) != 7620) goto L_18d8; */
        /* if (this->field_0x89b != 73) goto L_18a8; */
        /* goto L_18bc; */
        /* L_18a8:; */
        /* if (4 != 74) goto L_18b8; */
        /* goto L_18bc; */
        /* L_18b8:; */
        /* L_18bc:; */
        /* field_0x5b7c = (this->field_0x5b7c + -5); */
        /* L_18d8:; */
        /* if (this->field_0x7c4 != 7626) goto L_18f0; */
        /* field_0x887 = 4; */
        /* goto L_1994; */
        /* L_18f0:; */
        /* if (4 == 7627) goto L_1900; */
        /* if (4 != 7620) goto L_190c; */
        /* L_1900:; */
        /* field_0x887 = 3; */
        /* goto L_1994; */
        /* L_190c:; */
        /* if (3 == 7629) goto L_191c; */
        /* if (3 != 7628) goto L_1994; */
        /* L_191c:; */
        /* field_0x887 = 0; */
        /* if (this->field_0x89b == 73) goto L_1964; */
        /* if (this->field_0x89b != 74) goto L_1950; */
        ((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->onEventBit(3332);
        /* goto L_1964; */
        /* L_1950:; */
        ((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->onEventBit(3330);
        /* L_1964:; */
        dComIfGp_setNextStage(((char*)&@stringBase0 + 45), 1, this->field_0x20a, -1, 0, 1, 0);
        /* L_1994:; */
        /* field_0xf8 = 19; */
        /* goto L_19b8; */
        /* L_19ac:; */
        /* if (this->field_0xf8 != 1) goto L_19b8; */
        fopMsgM_demoMsgFlagOn();
        /* L_19b8:; */
        getItemZoomPos((this + 2020));
        ((ShopItems_c*)((this + 2108)))->Item_ZoomUp();
        /* field_0x54 = 0; */
        /* return this->field_0xf8; */
}

/* 00001B04-00001C4C       .text shop_talk__11daNpc_Ds1_cFv */
void daNpc_Ds1_c::shop_talk() {
        /* field_0x54 = 1; */
        /* if (dShop_now_triggercheck(base, (this + 1808), (this + 2108), (this + 1988), 0, 0, arg6, arg7) == 0) goto L_1a78; */
        /* field_0x738 = 1; */
        /* field_0x7c8 = 0; */
        /* L_1a78:; */
        /* if (this->field_0xf8 == 14) goto L_1a98; */
        /* if (this->field_0xf8 != 15) goto L_1af0; */
        /* L_1a98:; */
        /* if (this->field_0x738 == 0) goto L_1ab0; */
        /* field_0x738 = 0; */
        /* goto L_1b44; */
        /* L_1ab0:; */
        /* field_0xf8 = next_msgStatus((this + 1992)); */
        /* if (this->field_0xf8 != 15) goto L_1b44; */
        /* fopMsgM_messageSet(this->field_0x7c8); */
        /* goto L_1b44; */
        /* L_1af0:; */
        /* if (this->field_0xf8 != 18) goto L_1b38; */
        /* field_0xf8 = 19; */
        /* if (this->field_0x7c4 == 7636) goto L_1b24; */
        /* if (this->field_0x7c4 == 7637) goto L_1b24; */
        /* if (this->field_0x7c4 == 7638) goto L_1b24; */
        /* if (this->field_0x7c4 != 7620) goto L_1b2c; */
        /* L_1b24:; */
        /* field_0x887 = 3; */
        /* L_1b2c:; */
        mShopItems = -1;
        /* goto L_1b44; */
        /* L_1b38:; */
        /* if (this->field_0xf8 != 1) goto L_1b44; */
        fopMsgM_demoMsgFlagOn();
        /* L_1b44:; */
        /* return this->field_0xf8; */
}

/* 00001C4C-00001E84       .text talk__11daNpc_Ds1_cFv */
void daNpc_Ds1_c::talk() {
        /* if (m899 != 0) goto L_1bc4; */
        base = -1;
        base = 0;
        /* field_0x7c4 = getMsg(); */
        /* field_0x7c8 = 0; */
        m899 = 1;
        /* field_0x7d4 = 255; */
        /* goto L_1d74; */
        /* L_1bc4:; */
        /* if (/ * beq * / 1) goto L_1d74; */
        /* if (/ * bne * / 1) goto L_1c48; */
        /* if (this->field_0x52b8 == 1) goto L_1c0c; */
        /* if (this->field_0x52b8 == 2) goto L_1c0c; */
        /* if (this->field_0x52b8 != 3) goto L_1c10; */
        /* L_1c0c:; */
        /* L_1c10:; */
        /* if (1 == 0) goto L_1c30; */
        /* if (((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->ChkPresentEnd() != 0) goto L_1c30; */
        return 255;
        /* L_1c30:; */
        base = fopMsgM_messageSet(this->field_0x7c4, this);
        /* goto L_1d74; */
        /* L_1c48:; */
        /* if (base != 0) goto L_1c94; */
        base = fopMsgM_SearchByID(fopMsgM_messageSet(this->field_0x7c4, this));
        /* if (fopMsgM_SearchByID(fopMsgM_messageSet(this->field_0x7c4, this)) == 0) goto L_1d74; */
        /* if (this->field_0x7c4 == 7616) goto L_1c88; */
        m899 = 2;
        /* goto L_1d74; */
        /* L_1c88:; */
        m899 = 3;
        /* goto L_1d74; */
        /* L_1c94:; */
        ((daNpc_Ds1_c*)(fopMsgM_SearchByID(fopMsgM_messageSet(this->field_0x7c4, this))))->setAnmFromMsgTag();
        /* if ((m899 & 255) == 3) goto L_1cc8; */
        /* if (/ * bge * / 1) goto L_1cd4; */
        /* if ((m899 & 255) >= 2) goto L_1cb8; */
        /* goto L_1cd4; */
        /* L_1cb8:; */
        normal_talk();
        /* goto L_1cd4; */
        /* L_1cc8:; */
        shop_talk();
        /* L_1cd4:; */
        /* if (this->field_0x5bdc == 0) goto L_1d74; */
        /* if (daNpc_Ds1_shopStickMoveMsgCheck(this->field_0x7c4) != 0) goto L_1d44; */
        /* if (daNpc_Ds1_shopMsgCheck(this->field_0x7c4) != 0) goto L_1d38; */
        mShopItems = -1;
        /* if (this->field_0x87a == 0) goto L_1d38; */
        ((ShopItems_c*)((this + 2108)))->showItem();
        /* L_1d38:; */
        m899 = 2;
        /* goto L_1d74; */
        /* L_1d44:; */
        /* if (this->field_0x7c4 != 7616) goto L_1d6c; */
        mShopItems = -1;
        /* if (this->field_0x87a == 0) goto L_1d6c; */
        ((ShopItems_c*)((this + 2108)))->showItem();
        /* L_1d6c:; */
        m899 = 3;
        /* L_1d74:; */
        return shop_talk();
}

/* 00001E84-00002158       .text CreateInit__11daNpc_Ds1_cFv */
void daNpc_Ds1_c::CreateInit() {
        /* _savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* field_0x280 = 10; */
        gravity = 0;
        /* if (this->field_0x896 == 0) goto L_1e00; */
        /* goto L_1e94; */
        /* L_1e00:; */
        /* if (__ptmf_cmpr((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 2008)) == 0) goto L_1e94; */
        /* if (__ptmf_test((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 2008)) == 0) goto L_1e60; */
        /* field_0x898 = -1; */
        /* __ptmf_scall(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7), 0); */
        /* L_1e60:; */
        /* field_0x898 = 0; */
        /* __ptmf_scall(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7), 0); */
        /* L_1e94:; */
        /* field_0x748 = 0; */
        /* field_0x74c = 0; */
        /* field_0x750 = 0; */
        /* ((dCcD_Stts*)((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1228)))->Init(255, 255, _savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* ((dCcD_Cyl*)((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1288)))->Set(((char*)&l_cyl_src + 0)); */
        /* field_0x54c = (_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1228); */
        m89A = 0;
        /* field_0x738 = 0; */
        /* field_0x7d0 = 0; */
        /* field_0x7d4 = 255; */
        /* field_0x886 = 0; */
        /* field_0x83a = 0; */
        /* field_0x87e = 0; */
        /* ((ShopItems_c*)((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 2108)))->setItemSetDataList(); */
        /* ((ShopItems_c*)((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 2108)))->createItem(3, (this->field_0x20a & 255)); */
        /* field_0x100 = 0; */
        /* ((dNpc_EventCut_c*)((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1596)))->setActorInfo(((char*)&@stringBase0 + 52), _savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* field_0x6a4 = (_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1704); */
        /* field_0x888 = 4; */
        /* field_0x88c = ((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getEventIdx(((char*)&@stringBase0 + 56), 255); */
        /* field_0x88e = ((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getEventIdx(((char*)&@stringBase0 + 68), 255); */
        /* field_0x890 = ((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getEventIdx(((char*)&@stringBase0 + 77), 255); */
        /* field_0x892 = ((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getEventIdx(((char*)&@stringBase0 + 86), 255); */
        /* if (this->field_0x7d6 == 0) goto L_2010; */
        PSMTXCopy(((char*)&g_mDoMtx_identity + 0), (this->field_0x78c + 36));
        /* ((daNpc_Ds1_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->RoomEffectSet(); */
        /* L_2010:; */
        /* field_0x7a4 = 0; */
        /* field_0x7a8 = 0; */
        /* field_0x7ac = 0; */
        /* field_0x7b0 = 0; */
        /* field_0x7b2 = 0; */
        /* field_0x7b4 = 0; */
        /* field_0x7b8 = 0; */
        /* field_0x7bc = 0; */
        /* dKy_plight_set((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1956)); */
        return _restgpr_29(1);
}

/* 00002158-000021A8       .text setAttention__11daNpc_Ds1_cFb */
void daNpc_Ds1_c::setAttention(bool) {
    if (bool != 0) {
    }
    /* field_0x274 = 0; */
    /* field_0x278 = (this->field_0x74c + this->field_0x2c); */
    /* field_0x27c = 0; */
    return this;
}

/* 000021A8-00002524       .text lookBack__11daNpc_Ds1_cFv */
void daNpc_Ds1_c::lookBack() {
        /* _savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* if ((this->field_0x894 & 255) == 2) goto L_219c; */
        /* if (/ * bge * / 1) goto L_2310; */
        /* if ((this->field_0x894 & 255) >= 1) goto L_2110; */
        /* goto L_2310; */
        /* L_2110:; */
        /* if (this->field_0x760 == 0) goto L_218c; */
        dNpc_playerEyePos();
        /* ((daNpc_Ds1_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->setTexAnm(0); */
        /* goto L_2310; */
        /* L_218c:; */
        /* ((daNpc_Ds1_c*)(((daNpc_Ds1_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->setTexAnm(0)))->setTexAnm(0); */
        /* goto L_2310; */
        /* L_219c:; */
        /* if (__ptmf_cmpr((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 2020)) != 0) goto L_2210; */
        dNpc_playerEyePos();
        /* goto L_22ec; */
        /* L_2210:; */
        /* if (mShopItems != -1) goto L_224c; */
        /* getItemZoomPos((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 2020)); */
        /* goto L_22ec; */
        /* L_224c:; */
        getSelectItemBasePos();
        getSelectItemPos();
        ((ShopCursor_c*)(mpShopCursor))->setPos();
        /* field_0x48 = 0; */
        /* field_0x4c = 0; */
        /* field_0x50 = 0; */
        /* field_0x38 = 0; */
        /* field_0x3c = 0; */
        ((ShopCursor_c*)(mpShopCursor))->anm_play();
        /* L_22ec:; */
        /* L_2310:; */
        /* if (__ptmf_cmpr((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 2008)) != 0) goto L_23a4; */
        dNpc_playerEyePos();
        /* L_23a4:; */
        /* if (this->field_0x6b2 == 0) goto L_23e0; */
        /* cLib_addCalcAngleS2((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1876), this->field_0x2a, 4, 2048); */
        /* goto L_23e8; */
        /* L_23e0:; */
        /* field_0x754 = 0; */
        /* L_23e8:; */
        /* return _restgpr_29(((dNpc_JntCtrl_c*)((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1704)))->lookAtTarget((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 518))); */
}

/* 00002524-00002578       .text wait01__11daNpc_Ds1_cFv */
void daNpc_Ds1_c::wait01() {
        /* if (this->field_0x761 == 0) goto L_2458; */
        /* field_0x894 = 2; */
        /* goto L_2484; */
        /* L_2458:; */
        /* if (this->field_0x760 == 0) goto L_2470; */
        /* field_0x887 = 2; */
        /* goto L_2484; */
        /* L_2470:; */
        /* if (this->field_0x887 != 2) goto L_2484; */
        /* field_0x887 = 0; */
        /* L_2484:; */
        return 1;
}

/* 00002578-00002760       .text talk01__11daNpc_Ds1_cFv */
void daNpc_Ds1_c::talk01() {
        /* if ((talk() & 65535) != 18) goto L_25f4; */
        /* if (this->field_0x7c4 == 7629) goto L_2520; */
        /* if (this->field_0x7c4 == 7628) goto L_2520; */
        /* if (this->field_0x887 == 3) goto L_2510; */
        /* L_2510:; */
        /* field_0x29c = ((this->field_0x29c >> 0) & 0); */
        /* goto L_25b4; */
        /* L_2520:; */
        /* if (__ptmf_cmpr((this + 2008)) == 0) goto L_25b4; */
        /* if (__ptmf_test((this + 2008)) == 0) goto L_2580; */
        /* field_0x898 = -1; */
        __ptmf_scall(this, 0);
        /* L_2580:; */
        /* field_0x898 = 0; */
        __ptmf_scall(this, 0);
        /* L_25b4:; */
        /* field_0x761 = 0; */
        setAnm(0, C_@4457);
        /* if (this->field_0x7c4 != 7604) goto L_2638; */
        ((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->onEventBit(4384);
        /* goto L_2638; */
        /* L_25f4:; */
        /* if (this->field_0x7c4 != 8) goto L_2638; */
        /* if (daNpc_Ds1_shopMsgCheck(this->field_0x7c4) == 0) goto L_2638; */
        /* if (this->field_0x7c4 != ((ShopItems_c*)((this + 2108)))->getSelectItemBuyMsg()) goto L_2638; */
        /* field_0x5bc6 = 23; */
        /* field_0x5bc5 = 39; */
        /* L_2638:; */
        return (((39 >> 31) + -1) & 16777215);
}

/* 00002760-00002A04       .text getdemo_action__11daNpc_Ds1_cFPv */
void daNpc_Ds1_c::getdemo_action(void*) {
        /* _savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        ((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMyStaffId(((char*)&@stringBase0 + 52), 0, 0);
        /* if (this->field_0x898 != 0) goto L_2790; */
        /* if (this->field_0x7d4 == 255) goto L_26d8; */
        /* goto L_2700; */
        /* L_26d8:; */
        /* if (this->field_0x89b != 73) goto L_26ec; */
        /* goto L_2700; */
        /* L_26ec:; */
        /* if (this->field_0x89b != 74) goto L_26fc; */
        /* goto L_2700; */
        /* L_26fc:; */
        /* L_2700:; */
        /* field_0x29c = ((this->field_0x29c >> 0) & 0); */
        /* fopAcM_createItemForPresentDemo((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 504), (83 & 16777215), 0, -1, (this->field_0x20a & 255), 0, 0); */
        /* if (this->field_0x8 == 65535) goto L_2774; */
        /* field_0x52a8 = fopAcM_createItemForPresentDemo((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 504), (83 & 16777215), 0, -1, (this->field_0x20a & 255), 0, 0); */
        /* L_2774:; */
        ((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->cutEnd(((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMyStaffId(((char*)&@stringBase0 + 52), 0, 0));
        /* field_0x898 = (this->field_0x898 + 1); */
        /* goto L_28fc; */
        /* L_2790:; */
        /* if ((this->field_0x898 & 255) == -1) goto L_28fc; */
        fopMsgM_demoMsgFlagOn();
        ((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->cutEnd(((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMyStaffId(((char*)&@stringBase0 + 52), 0, 0));
        /* if (((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->endCheck(this->field_0x88e) == 0) goto L_28fc; */
        /* field_0x887 = 1; */
        /* if (this->field_0x7d4 == 255) goto L_27f8; */
        /* field_0x7d0 = 7642; */
        /* ((ShopItems_c*)((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 2108)))->showItem(); */
        /* field_0x7d4 = 255; */
        mShopItems = -1;
        /* goto L_281c; */
        /* L_27f8:; */
        /* if (daNpc_Ds1_checkCreateDrugChuchu(this->field_0x89b) == 0) goto L_2814; */
        /* field_0x7d0 = 7622; */
        /* goto L_281c; */
        /* L_2814:; */
        /* field_0x7d0 = 7629; */
        /* L_281c:; */
        /* if (this->field_0x89b != 74) goto L_284c; */
        ((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->onEventBit(3332);
        /* goto L_2868; */
        /* L_284c:; */
        /* if (this->field_0x89b != 75) goto L_2868; */
        ((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->onEventBit(3330);
        /* L_2868:; */
        /* if (__ptmf_cmpr((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 2008)) == 0) goto L_28fc; */
        /* if (__ptmf_test((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 2008)) == 0) goto L_28c8; */
        /* field_0x898 = -1; */
        /* __ptmf_scall(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7), 0); */
        /* L_28c8:; */
        /* field_0x898 = 0; */
        /* __ptmf_scall(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7), 0); */
        /* L_28fc:; */
        return _restgpr_28(1);
}

/* 00002A04-00002BD0       .text privateCut__11daNpc_Ds1_cFv */
void daNpc_Ds1_c::privateCut() {
        /* _savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* if (((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMyStaffId(this->field_0x63c, 0, 0) != -1) goto L_2964; */
        return 0;
        /* L_2964:; */
        /* if (((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMyActIdx(((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMyStaffId(this->field_0x63c, 0, 0), ((char*)&cut_name_tbl$5315 + 0), 10, 1, 0) != -1) goto L_29a0; */
        ((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->cutEnd(((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMyStaffId(this->field_0x63c, 0, 0));
        /* goto L_2ac8; */
        /* L_29a0:; */
        /* if (((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getIsAddvance(((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMyStaffId(this->field_0x63c, 0, 0)) == 0) goto L_2a60; */
        /* if (((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMyActIdx(((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMyStaffId(this->field_0x63c, 0, 0), ((char*)&cut_name_tbl$5315 + 0), 10, 1, 0) > 9) goto L_2a60; */
        /* ((daNpc_Ds1_c*)(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->evn_talk_init(((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMyStaffId(this->field_0x63c, 0, 0)); */
        /* goto L_2a60; */
        /* ((daNpc_Ds1_c*)(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->evn_continue_talk_init(((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMyStaffId(this->field_0x63c, 0, 0)); */
        /* goto L_2a60; */
        /* ((daNpc_Ds1_c*)(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->evn_ItemModel_init(((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMyStaffId(this->field_0x63c, 0, 0)); */
        /* goto L_2a60; */
        /* ((daNpc_Ds1_c*)(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->evn_head_swing_init(((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMyStaffId(this->field_0x63c, 0, 0)); */
        /* goto L_2a60; */
        /* ((daNpc_Ds1_c*)(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->evn_setAnm_init(((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMyStaffId(this->field_0x63c, 0, 0)); */
        /* goto L_2a60; */
        /* ((daNpc_Ds1_c*)(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->evn_move_pos_init(((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMyStaffId(this->field_0x63c, 0, 0)); */
        /* goto L_2a60; */
        /* ((daNpc_Ds1_c*)(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->evn_init_pos_init(((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMyStaffId(this->field_0x63c, 0, 0)); */
        /* goto L_2a60; */
        /* ((daNpc_Ds1_c*)(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->evn_jnt_lock_init(((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMyStaffId(this->field_0x63c, 0, 0)); */
        /* goto L_2a60; */
        /* ((daNpc_Ds1_c*)(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->evn_player_hide_init(((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMyStaffId(this->field_0x63c, 0, 0)); */
        /* L_2a60:; */
        /* if (((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMyActIdx(((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMyStaffId(this->field_0x63c, 0, 0), ((char*)&cut_name_tbl$5315 + 0), 10, 1, 0) == 5) goto L_2a98; */
        /* if (/ * bge * / 1) goto L_2a80; */
        /* if (((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMyActIdx(((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMyStaffId(this->field_0x63c, 0, 0), ((char*)&cut_name_tbl$5315 + 0), 10, 1, 0) >= 2) goto L_2ab0; */
        /* if (((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMyActIdx(((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMyStaffId(this->field_0x63c, 0, 0), ((char*)&cut_name_tbl$5315 + 0), 10, 1, 0) >= 0) goto L_2a8c; */
        /* goto L_2ab0; */
        /* L_2a80:; */
        /* if (((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMyActIdx(((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMyStaffId(this->field_0x63c, 0, 0), ((char*)&cut_name_tbl$5315 + 0), 10, 1, 0) >= 7) goto L_2ab0; */
        /* goto L_2aa4; */
        /* L_2a8c:; */
        /* ((daNpc_Ds1_c*)(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->evn_talk(); */
        /* goto L_2ab4; */
        /* L_2a98:; */
        /* ((daNpc_Ds1_c*)(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->evn_Anm(); */
        /* goto L_2ab4; */
        /* L_2aa4:; */
        /* ((daNpc_Ds1_c*)(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->evn_move_pos(); */
        /* goto L_2ab4; */
        /* L_2ab0:; */
        /* L_2ab4:; */
        /* if (1 == 0) goto L_2ac8; */
        ((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->cutEnd(((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMyStaffId(this->field_0x63c, 0, 0));
        /* L_2ac8:; */
        return _restgpr_28(1);
}

/* 00002BD0-00002E00       .text evn_setAnm_init__11daNpc_Ds1_cFi */
void daNpc_Ds1_c::evn_setAnm_init(int) {
        /* _savegpr_27(this, int, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* if (((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMySubstanceP() == 0) goto L_2bac; */
        /* if (((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMySubstanceP() == 0) goto L_2b80; */
        /* L_2b80:; */
        /* ((daNpc_Ds1_c*)(_savegpr_27(this, int, arg2, arg3, arg4, arg5, arg6, arg7)))->setAnm((base & 255)); */
        /* if (((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMySubstanceP() == 0) goto L_2ba4; */
        /* goto L_2bac; */
        /* L_2ba4:; */
        /* field_0x886 = 0; */
        /* L_2bac:; */
        /* if (this->field_0x885 != 6) goto L_2cf8; */
        /* if (this->field_0x89b != 73) goto L_2bcc; */
        /* goto L_2be0; */
        /* L_2bcc:; */
        /* if (this->field_0x89b != 74) goto L_2bdc; */
        /* goto L_2be0; */
        /* L_2bdc:; */
        /* L_2be0:; */
        /* if (this->field_0x768 != 0) goto L_2c84; */
        /* field_0x768 = ((dPa_control_c*)(this->field_0x5ab8))->set(0); */
        /* field_0x7b0 = (base << 2); */
        /* field_0x7b2 = (this->field_0x1 << 2); */
        /* field_0x7b4 = (this->field_0x2 << 2); */
        /* L_2c84:; */
        /* if (this->field_0x76c != 0) goto L_2cf8; */
        /* field_0x76c = ((dPa_control_c*)(this->field_0x5ab8))->set(0, ((2 << 2) + -32322), (_savegpr_27(this, int, arg2, arg3, arg4, arg5, arg6, arg7) + 504), 0, 0, 255, 0); */
        /* L_2cf8:; */
        return _restgpr_27(1);
}

/* 00002E00-000030A0       .text evn_Anm__11daNpc_Ds1_cFv */
void daNpc_Ds1_c::evn_Anm() {
        /* if (((J3DFrameCtrl*)((this->field_0x298 + 88)))->checkPass(arg1, arg2, arg3, arg4, arg5, arg6, arg7) == 0) goto L_2d7c; */
        /* field_0x886 = (this->field_0x886 + -1); */
        /* L_2d7c:; */
        /* if (this->field_0x886 != 0) goto L_2d90; */
        return 1;
        /* L_2d90:; */
        /* if ((this->field_0x885 & 255) != 6) goto L_2f6c; */
        PSMTXCopy((this->field_0x8c + ((this->field_0x63a & 255) * 48)), ((char*)&now__14mDoMtx_stack_c + 0));
        /* if (this->field_0x768 == 0) goto L_2e00; */
        old = 0;
        /* field_0x1e8 = 0; */
        /* field_0x1ec = 0; */
        /* L_2e00:; */
        /* if (this->field_0x76c == 0) goto L_2e24; */
        old = 0;
        /* field_0x1e8 = 0; */
        /* field_0x1ec = 0; */
        /* L_2e24:; */
        /* if (((J3DFrameCtrl*)((this->field_0x298 + 88)))->checkPass() == 0) goto L_2eb0; */
        /* if (this->field_0x768 == 0) goto L_2e88; */
        /* field_0x60 = -1; */
        /* field_0x768 = 0; */
        /* L_2e88:; */
        /* if (this->field_0x76c == 0) goto L_2eb0; */
        /* field_0x60 = -1; */
        /* field_0x76c = 0; */
        /* L_2eb0:; */
        /* if (((J3DFrameCtrl*)((this->field_0x298 + 88)))->checkPass() == 0) goto L_2f44; */
        ((dVibration_c*)(((char*)&g_dComIfG_gameInfo + 22944)))->StartShock(5, -17);
        ((JAIZelBasic*)(base))->seStart(27040, (this + 608), 0, dComIfGp_getReverb((this->field_0x20a & 255)), 0);
        /* field_0x7b8 = 0; */
        /* goto L_2f98; */
        /* L_2f44:; */
        /* if (((J3DFrameCtrl*)((this->field_0x298 + 88)))->checkPass() == 0) goto L_2f98; */
        /* goto L_2f98; */
        /* L_2f6c:; */
        /* if (this->field_0x7d5 != 8) goto L_2f98; */
        /* if (((J3DFrameCtrl*)((this->field_0x298 + 88)))->checkPass() == 0) goto L_2f98; */
        /* L_2f98:; */
        return 0;
}

/* 000030A0-00003168       .text evn_talk_init__11daNpc_Ds1_cFi */
void daNpc_Ds1_c::evn_talk_init(int) {
    /* _savegpr_28(this, int, arg2, arg3, arg4, arg5, arg6, arg7); */
    ((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMySubstanceP();
    base = -1;
    base = 0;
    }
    if (((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMySubstanceP() != 0) {
    } else {
        /* field_0x7cc = 0; */
    }
    return _restgpr_28(1, l_msg);


/* 00003168-000031D0       .text evn_continue_talk_init__11daNpc_Ds1_cFi */
void daNpc_Ds1_c::evn_continue_talk_init(int) {
    /* if (((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMySubstanceP(int, ((char*)&@stringBase0 + 214), 3, arg4) != 0) { */
    /* } else { */
        /* field_0x7cc = 0; */
    /* } */
    /* return 1; */

/* 000031D0-000033AC       .text evn_talk__11daNpc_Ds1_cFv */
void daNpc_Ds1_c::evn_talk() {
        /* if (/ * bne * / 1) goto L_3124; */
        base = fopMsgM_messageSet(this->field_0x7c4, (this + 608));
        /* goto L_32a8; */
        /* L_3124:; */
        /* if (base != 0) goto L_314c; */
        base = fopMsgM_SearchByID(fopMsgM_messageSet(this->field_0x7c4, (this + 608)));
        fopMsgM_demoMsgFlagOn();
        /* goto L_32a8; */
        /* L_314c:; */
        ((daNpc_Ds1_c*)(fopMsgM_demoMsgFlagOn()))->setAnmFromMsgTag();
        /* if (this->field_0xf8 != 14) goto L_319c; */
        /* field_0xf8 = next_msgStatus((this + 1988), base); */
        /* if (this->field_0xf8 != 15) goto L_32a8; */
        /* fopMsgM_messageSet(this->field_0x7c4); */
        /* goto L_32a8; */
        /* L_319c:; */
        /* if (this->field_0xf8 != 18) goto L_3278; */
        /* if (this->field_0x7c4 != 7626) goto L_3204; */
        /* if (this->field_0x89b != 73) goto L_31c8; */
        /* goto L_31e4; */
        /* L_31c8:; */
        /* if (4 != 74) goto L_31dc; */
        /* goto L_31e4; */
        /* L_31dc:; */
        /* L_31e4:; */
        /* field_0x5b7c = (this->field_0x5b7c + -15); */
        /* goto L_3250; */
        /* L_3204:; */
        /* if ((this->field_0x5b7c + -15) != 7620) goto L_3250; */
        /* if (this->field_0x89b != 73) goto L_3220; */
        /* goto L_3234; */
        /* L_3220:; */
        /* if (4 != 74) goto L_3230; */
        /* goto L_3234; */
        /* L_3230:; */
        /* L_3234:; */
        /* field_0x5b7c = (this->field_0x5b7c + -5); */
        /* L_3250:; */
        /* field_0xf8 = 19; */
        base = 0;
        base = -1;
        return 1;
        /* L_3278:; */
        /* if (-1 == 2) goto L_3288; */
        /* if (-1 != 6) goto L_32a8; */
        /* L_3288:; */
        /* if (this->field_0x7c4 != this->field_0x7cc) goto L_32a8; */
        /* field_0x7cc = 0; */
        return 1;
        /* L_32a8:; */
        return 0;
}

/* 000033AC-00003478       .text evn_jnt_lock_init__11daNpc_Ds1_cFi */
void daNpc_Ds1_c::evn_jnt_lock_init(int) {
        /* if (((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMySubstanceP(int, ((char*)&@stringBase0 + 223), 3, arg4) == 0) goto L_3304; */
        /* goto L_3308; */
        /* L_3304:; */
        /* L_3308:; */
        /* if (0 == 2) goto L_3354; */
        /* if (/ * bge * / 1) goto L_3324; */
        /* if (0 == 0) goto L_3330; */
        /* if (/ * bge * / 1) goto L_3340; */
        /* goto L_3374; */
        /* L_3324:; */
        /* if (0 >= 4) goto L_3374; */
        /* goto L_3368; */
        /* L_3330:; */
        /* field_0x6b3 = 0; */
        /* field_0x6b4 = 0; */
        /* goto L_3374; */
        /* L_3340:; */
        /* field_0x6b3 = 1; */
        /* field_0x6b4 = 0; */
        /* goto L_3374; */
        /* L_3354:; */
        /* field_0x6b3 = 0; */
        /* field_0x6b4 = 1; */
        /* goto L_3374; */
        /* L_3368:; */
        /* field_0x6b3 = 1; */
        /* field_0x6b4 = 1; */
        /* L_3374:; */
        return 1;
}

/* 00003478-0000350C       .text evn_player_hide_init__11daNpc_Ds1_cFi */
void daNpc_Ds1_c::evn_player_hide_init(int) {
        /* if (((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMySubstanceP(int, ((char*)&@stringBase0 + 223), 3, arg4) == 0) goto L_33c8; */
        /* goto L_33cc; */
        /* L_33c8:; */
        /* L_33cc:; */
        /* if (0 == 1) goto L_3400; */
        /* if (/ * bge * / 1) goto L_340c; */
        /* if (0 >= 0) goto L_33f0; */
        /* goto L_340c; */
        /* L_33f0:; */
        /* field_0x29c = ((this->field_0x29c >> 0) & 0); */
        /* goto L_340c; */
        /* L_3400:; */
        /* L_340c:; */
        return 1;
}

/* 0000350C-000035B8       .text evn_head_swing_init__11daNpc_Ds1_cFi */
void daNpc_Ds1_c::evn_head_swing_init(int) {
        /* if (((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMySubstanceP(int, ((char*)&@stringBase0 + 223), 3, arg4) == 0) goto L_3464; */
        /* goto L_3468; */
        /* L_3464:; */
        /* L_3468:; */
        /* if (0 == 1) goto L_349c; */
        /* if (/ * bge * / 1) goto L_34b4; */
        /* if (0 >= 0) goto L_3480; */
        /* goto L_34b4; */
        /* L_3480:; */
        ((dNpc_HeadAnm_c*)((this + 1756)))->swing_horizone_init(2, 4096, 4096, 1);
        /* goto L_34b4; */
        /* L_349c:; */
        ((dNpc_HeadAnm_c*)((this + 1756)))->swing_vertical_init(2, 4096, 2048, 1);
        /* L_34b4:; */
        return 1;
}

/* 000035B8-0000361C       .text evn_ItemModel_init__11daNpc_Ds1_cFi */
void daNpc_Ds1_c::evn_ItemModel_init(int) {
    }
    /* field_0x7d5 = 0; */
    return 1;


/* 0000361C-000036D4       .text evn_move_pos_init__11daNpc_Ds1_cFi */
void daNpc_Ds1_c::evn_move_pos_init(int) {
    /* _savegpr_28(this, int, arg2, arg3, arg4, arg5, arg6, arg7); */
    if (((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMySubstanceP() != 0) {
        /* field_0x700 = 0; */
        /* field_0x704 = 0; */
        /* field_0x708 = 0; */
    } else {
        /* field_0x700 = 0; */
        /* field_0x704 = 0; */
        /* field_0x708 = 0; */
    }
    return _restgpr_28(1);
}

/* 000036D4-000037F0       .text evn_move_pos__11daNpc_Ds1_cFv */
void daNpc_Ds1_c::evn_move_pos() {
    /* cLib_addCalcPos2((this + 504), (this + 1792), arg2, arg3, arg4); */
    __mi();
    PSVECSquareMag();
    if (/* ble */ 1) {
    }
    /* if (this->field_0x8 > this->field_0x58) { */
        /* return 1; */
    /* field_0x70c = cLib_targetAngleY((this + 504), (this + 1792)); */
    cLib_addCalcAngleS2((this + 518), this->field_0x70c, 4, 4096);
    return 0;
}

/* 000037F0-000038F4       .text evn_init_pos_init__11daNpc_Ds1_cFi */
void daNpc_Ds1_c::evn_init_pos_init(int) {
    /* _savegpr_28(this, int, arg2, arg3, arg4, arg5, arg6, arg7); */
    if (((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMySubstanceP() != 0) {
        old = 0;
        /* field_0x1e8 = 0; */
        /* field_0x1ec = 0; */
        current = 0;
        /* field_0x1fc = 0; */
        /* field_0x200 = 0; */
    } else {
        old = 0;
        /* field_0x1e8 = 0; */
        /* field_0x1ec = 0; */
        current = 0;
        /* field_0x1fc = 0; */
        /* field_0x200 = 0; */
    }
    }
    return _restgpr_28(1);


/* 000038F4-00003AF8       .text event_action__11daNpc_Ds1_cFPv */
void daNpc_Ds1_c::event_action(void*) {
        /* if (this->field_0x898 != 0) goto L_38a8; */
        /* ((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMyStaffId(((char*)&@stringBase0 + 52), 0, 0, arg4); */
        /* field_0x29c = ((this->field_0x29c >> 0) & 0); */
        /* field_0x887 = 0; */
        /* field_0x898 = (this->field_0x898 + 1); */
        /* goto L_39f0; */
        /* L_38a8:; */
        /* if ((((char*)&__ptmf_null + 0) & 255) == -1) goto L_39f0; */
        /* ((daNpc_Ds1_c*)(this->field_0x898))->privateCut(); */
        /* if (((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->endCheck(this->field_0x88c) == 0) goto L_39e8; */
        /* if (this->field_0x888 != 2) goto L_3900; */
        /* field_0x887 = 4; */
        /* field_0x888 = 0; */
        /* goto L_3948; */
        /* L_3900:; */
        /* if (this->field_0x888 != 3) goto L_3928; */
        /* if (this->field_0x7c4 != 7620) goto L_3928; */
        /* field_0x887 = 3; */
        /* field_0x888 = 4; */
        /* goto L_3948; */
        /* L_3928:; */
        /* if (this->field_0x888 != 0) goto L_3948; */
        /* field_0x887 = 1; */
        /* field_0x7d0 = 7627; */
        /* field_0x888 = 4; */
        /* L_3948:; */
        /* if (__ptmf_cmpr((this + 2008)) == 0) goto L_39e8; */
        /* if (__ptmf_test((this + 2008)) == 0) goto L_39b4; */
        /* field_0x898 = -1; */
        __ptmf_scall(this, 0);
        /* L_39b4:; */
        /* field_0x898 = 0; */
        __ptmf_scall(this, 0);
        /* L_39e8:; */
        lookBack();
        /* L_39f0:; */
        return 1;
}

/* 00003AF8-00003BF0       .text wait_action__11daNpc_Ds1_cFPv */
void daNpc_Ds1_c::wait_action(void*) {
        /* if (this->field_0x898 != 0) goto L_3a48; */
        /* field_0x894 = 1; */
        /* field_0x898 = (this->field_0x898 + 1); */
        /* goto L_3ae8; */
        /* L_3a48:; */
        /* if ((this->field_0x898 & 255) == -1) goto L_3ae8; */
        /* field_0x760 = ((daNpc_Ds1_c*)(this->field_0x898))->chkAttention(); */
        /* if ((this->field_0x894 & 255) == 2) goto L_3ac0; */
        /* if (/ * bge * / 1) goto L_3ad0; */
        /* if ((this->field_0x894 & 255) >= 1) goto L_3ab0; */
        /* goto L_3ad0; */
        /* L_3ab0:; */
        wait01();
        /* goto L_3ad4; */
        /* L_3ac0:; */
        talk01();
        /* goto L_3ad4; */
        /* L_3ad0:; */
        /* L_3ad4:; */
        lookBack();
        setAttention(0);
        /* L_3ae8:; */
        return 1;
}

/* 00003BF0-00003C0C       .text dummy_action__11daNpc_Ds1_cFPv */
void daNpc_Ds1_c::dummy_action(void*) {
    if (this->field_0x898 != 0) {
        /* field_0x898 = (this->field_0x898 + 1); */
    }
    return 1;
}

/* 00003C0C-00003EE4       .text RoomEffectSet__11daNpc_Ds1_cFv */
void daNpc_Ds1_c::RoomEffectSet() {
    *(int*)(this + 1904) = 0;
    *(int*)(this + 1908) = 0;
    *(int*)(this + 1912) = 0;
    *(int*)(this + 1916) = 0;
    *(int*)(this + 1920) = 0;
    *(int*)(this + 1924) = 0;
    *(int*)(this + 1928) = 0;
}

/* 00003EE4-00003F20       .text RoomEffectDelete__11daNpc_Ds1_cFv */
void daNpc_Ds1_c::RoomEffectDelete() {
    /* if (arg3 != 0) { */
        /* field_0x60 = -1; */
    return this;
}

/* 00003F20-000041D0       .text _draw__11daNpc_Ds1_cFv */
BOOL daNpc_Ds1_c::_draw() {
    /* ((dScnKy_env_light_c*)(((char*)&g_env_light + 0)))->settingTevStruct(0, (_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 504), (_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 268)); */
    /* ((dScnKy_env_light_c*)(((char*)&g_env_light + 0)))->setLightTevColorType(this->field_0x50, (_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 268)); */
    /* ((mDoExt_btpAnm*)((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 680)))->entry(this->field_0x4, this->field_0x2bc); */
    /* ((mDoExt_McaMorf*)(this->field_0x298))->updateDL(); */
    /* ((J3DMaterialTable*)((this->field_0x4 + 88)))->removeTexNoAnimator(this->field_0x2b0); */
    if (this->field_0x7d5 == 0) {
        /* ((dScnKy_env_light_c*)(((char*)&g_env_light + 0)))->setLightTevColorType(this->field_0x2c0, (_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 268)); */
        PSMTXCopy((this->field_0x8c + ((this->field_0x63a & 255) * 48)), (this->field_0x2c0 + 36));
        /* mDoExt_modelUpdateDL(this->field_0x2c0); */
    } else {
        /* ((dScnKy_env_light_c*)(((char*)&g_env_light + 0)))->setLightTevColorType(this->field_0x2c0, (_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 268)); */
        PSMTXTrans(((char*)&now__14mDoMtx_stack_c + 0));
        mDoMtx_ZXYrotM(((char*)&now__14mDoMtx_stack_c + 0), 1900, 0);
        PSMTXCopy(((char*)&now__14mDoMtx_stack_c + 0), (this->field_0x2c0 + 36));
        /* mDoExt_modelUpdateDL(this->field_0x2c0); */
    }
    if (/* beq */ 1) {
        /* ((dScnKy_env_light_c*)(((char*)&g_env_light + 0)))->setLightTevColorType(this->field_0x2c4, (_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 268)); */
        PSMTXCopy((this->field_0x8c + ((this->field_0x63b & 255) * 48)), (this->field_0x2c4 + 36));
        /* mDoExt_modelUpdateDL(this->field_0x2c4); */
    } else {
        /* ((dScnKy_env_light_c*)(((char*)&g_env_light + 0)))->setLightTevColorType(this->field_0x2c4, (_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 268)); */
        PSMTXTrans(((char*)&now__14mDoMtx_stack_c + 0));
        mDoMtx_ZXYrotM(((char*)&now__14mDoMtx_stack_c + 0), -32768, 15500);
        PSMTXCopy(((char*)&now__14mDoMtx_stack_c + 0), (this->field_0x2c4 + 36));
        /* mDoExt_modelUpdateDL(this->field_0x2c4); */
    }
    /* field_0x29c = dComIfGd_setShadow(this->field_0x29c, 1, this->field_0x50); */
    if (mShopItems >= 0) {
        ((ShopCursor_c*)(mpShopCursor))->draw();
    }
    if (this->field_0x7d6 != 0) {
        /* ((mDoExt_btkAnm*)((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1936)))->entry(this->field_0x4); */
        /* mDoExt_modelUpdateDL(this->field_0x78c); */
    }
    /* dSnap_RegistFig(93, _savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7), (_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 504), this->field_0x206); */
    return _restgpr_28(1);
}

/* 000041D0-00004554       .text _execute__11daNpc_Ds1_cFv */
BOOL daNpc_Ds1_c::_execute() {
        /* if (__ptmf_cmpr((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 2008)) == 0) goto L_4164; */
        /* goto L_4174; */
        /* L_4164:; */
        /* L_4174:; */
        /* ((dNpc_JntCtrl_c*)((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1704)))->setParam(this->field_0x1a, 7280, this->field_0x22, -14560, this->field_0x18, 14560, this->field_0x20); */
        /* ((daNpc_Ds1_c*)(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->playTexPatternAnm(); */
        /* if (/ * beq * / 1) goto L_41e4; */
        /* ((dBgS*)(((char*)&g_dComIfG_gameInfo + 4768)))->GetMtrlSndId((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 944)); */
        /* goto L_41e8; */
        /* L_41e4:; */
        /* L_41e8:; */
        /* field_0x75e = ((mDoExt_McaMorf*)(this->field_0x298))->play((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 608), 0, dComIfGp_getReverb((this->field_0x20a & 255))); */
        /* if (this->field_0x68 >= this->field_0x764) goto L_4224; */
        /* field_0x75e = 1; */
        /* L_4224:; */
        /* field_0x764 = 0; */
        /* ((daNpc_Ds1_c*)(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->checkOrder(); */
        /* __ptmf_scall(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7), 0); */
        /* ((ShopCam_action_c*)((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 2020)))->move(); */
        /* ((ShopItems_c*)((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 2108)))->Item_Move(); */
        /* ((daNpc_Ds1_c*)(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->eventOrder(); */
        /* fopAcM_posMoveF(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7), (_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1228)); */
        /* ((dBgS_Acch*)((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 712)))->CrrPos(((char*)&g_dComIfG_gameInfo + 4768)); */
        /* field_0x1b5 = ((dBgS*)(((char*)&g_dComIfG_gameInfo + 4768)))->GetRoomId((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 944)); */
        /* field_0x1b6 = ((dBgS*)(((char*)&g_dComIfG_gameInfo + 4768)))->GetPolyColor((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 944)); */
        PSMTXTrans(((char*)&now__14mDoMtx_stack_c + 0));
        /* mDoMtx_YrotM(((char*)&now__14mDoMtx_stack_c + 0), this->field_0x206); */
        PSMTXCopy(((char*)&now__14mDoMtx_stack_c + 0), (this->field_0x50 + 36));
        /* ((daNpc_Ds1_c*)(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->setCollision(); */
        /* if (this->field_0x7d6 == 0) goto L_443c; */
        ((JAIZelBasic*)(base))->seStart(28732, ((char*)&se_pos + 0), 0, dComIfGp_getReverb((this->field_0x20a & 255)), 0);
        ((JAIZelBasic*)(base))->seStart(28733, ((char*)&se_pos + 12), 0, dComIfGp_getReverb((this->field_0x20a & 255)), 0);
        ((JAIZelBasic*)(base))->seStart(28734, ((char*)&se_pos + 24), 0, dComIfGp_getReverb((this->field_0x20a & 255)), 0);
        /* field_0x7d7 = (this->field_0x7d7 + 1); */
        /* if (this->field_0x7d7 < 50) goto L_4434; */
        ((JAIZelBasic*)(base))->seStart(27041, ((char*)&se_pos + 36), 0, dComIfGp_getReverb((this->field_0x20a & 255)), 0);
        /* field_0x7d7 = 0; */
        /* L_4434:; */
        /* ((mDoExt_baseAnm*)((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1936)))->play(); */
        /* L_443c:; */
        /* cLib_addCalc0((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1976)); */
        return _restgpr_28(1);
}

/* 00004554-0000465C       .text _delete__11daNpc_Ds1_cFv */
BOOL daNpc_Ds1_c::_delete() {
    dKy_plight_cut((this + 1956));
    dComIfG_resDelete((this + 656), ((char*)&m_arcname__11daNpc_Ds1_c + 0));
    if (heap != 0) {
        /* if (this->field_0x298 != 0) goto L_44b0; */
        /* ((mDoExt_McaMorf*)(this->field_0x298))->stopZelAnime(); */
    }
    /* L_44b0:; */
    ((JAIZelBasic*)(base))->seDeleteObject(((char*)&se_pos + 0));
    ((JAIZelBasic*)(base))->seDeleteObject(((char*)&se_pos + 12));
    ((JAIZelBasic*)(base))->seDeleteObject(((char*)&se_pos + 24));
    ((JAIZelBasic*)(base))->seDeleteObject(((char*)&se_pos + 36));
    RoomEffectDelete();
    if (this->field_0x8 >= 0) {
        /* if (/ * bge * / 1) goto L_4558; */
        /* ((mDoHIO_subRoot_c*)(((char*)&mDoHIO_root + 4)))->deleteChild(this->field_0x4); */
    }
    /* L_4558:; */
    return 1;
}

/* 0000465C-0000467C       .text CheckCreateHeap__FP10fopAc_ac_c */
static BOOL CheckCreateHeap(fopAc_ac_c* i_this) {
    ((daNpc_Ds1_c*)i_this)->CreateHeap();
    return TRUE;
}

/* 0000467C-000047BC       .text _create__11daNpc_Ds1_cFv */
cPhs_State daNpc_Ds1_c::_create() {
        /* _savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* if (/ * bne * / 1) goto L_45cc; */
        /* if (_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) == 0) goto L_45c0; */
        __ct();
        /* L_45c0:; */
        /* L_45cc:; */
        /* if (dComIfG_resLoad((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 656), ((char*)&m_arcname__11daNpc_Ds1_c + 0)) != 4) goto L_46b4; */
        /* if (this->field_0x896 == 0) goto L_4604; */
        /* goto L_4610; */
        /* L_4604:; */
        /* field_0x896 = 0; */
        /* goto L_4618; */
        /* L_4610:; */
        /* field_0x896 = 0; */
        /* L_4618:; */
        /* if (fopAcM_entrySolidHeap(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7), ((char*)&CheckCreateHeap__FP10fopAc_ac_c + 0)) != 0) goto L_4640; */
        return 5;
        /* L_4640:; */
        cullMtx = (this->field_0x50 + 36);
        /* if (this->field_0x8 >= 0) goto L_4690; */
        /* field_0x4 = ((mDoHIO_subRoot_c*)(((char*)&mDoHIO_root + 4)))->createChild(((char*)&@stringBase0 + 237), ((char*)&l_HIO + 0)); */
        /* L_4690:; */
        /* field_0x8 = (this->field_0x8 + 1); */
        /* if (((daNpc_Ds1_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->CreateInit() != 0) goto L_46b4; */
        return 5;
        /* L_46b4:; */
        /* return _restgpr_29(dComIfG_resLoad((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 656), ((char*)&m_arcname__11daNpc_Ds1_c + 0))); */
}

/* 00004E08-000052D4       .text CreateHeap__11daNpc_Ds1_cFv */
void daNpc_Ds1_c::CreateHeap() {
    /* _savegpr_26(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
    ((dRes_control_c*)(((char*)&m_arcname__11daNpc_Ds1_c + 0)))->getRes(19);
    __nw(180);
    if (/* beq */ 1) {
    }
    /* field_0x298 = __ct(((dRes_control_c*)(((char*)&m_arcname__11daNpc_Ds1_c + 0)))->getRes(35), 1, ((dRes_control_c*)(((char*)&m_arcname__11daNpc_Ds1_c + 0)))->getRes(19), 0, 0, ((dRes_control_c*)(((char*)&m_arcname__11daNpc_Ds1_c + 0)))->getRes(35), 2, 0); */
    if (this->field_0x298 != 0) {
        /* if (this->field_0x50 == 0) goto L_4e10; */
    }
    /* field_0x298 = 0; */
    return 0;
    /* L_4e10:; */
    /* field_0x638 = ((JUTNameTab*)(this->field_0x54))->getIndex(((char*)&@stringBase0 + 246)); */
    if (this->field_0x638 != 0) {
        /* ((JUTAssertion*)(((JUTAssertion*)(((JUTNameTab*)(this->field_0x54))->getIndex(((char*)&@stringBase0 + 246))))->getSDevice()))->showAssert(((char*)&@stringBase0 + 0), 2527, ((char*)&@stringBase0 + 251)); */
        OSPanic(((char*)&@stringBase0 + 0), 2527, ((char*)&@stringBase0 + 40));
    }
    /* field_0x639 = ((JUTNameTab*)(this->field_0x54))->getIndex(((char*)&@stringBase0 + 271)); */
    if (this->field_0x639 != 0) {
        /* ((JUTAssertion*)(((JUTAssertion*)(((JUTNameTab*)(this->field_0x54))->getIndex(((char*)&@stringBase0 + 271))))->getSDevice()))->showAssert(((char*)&@stringBase0 + 0), 2530, ((char*)&@stringBase0 + 280)); */
        OSPanic(((char*)&@stringBase0 + 0), 2530, ((char*)&@stringBase0 + 40));
    }
    /* field_0x63a = ((JUTNameTab*)(this->field_0x54))->getIndex(((char*)&@stringBase0 + 304)); */
    if (this->field_0x63a != 0) {
        /* ((JUTAssertion*)(((JUTAssertion*)(((JUTNameTab*)(this->field_0x54))->getIndex(((char*)&@stringBase0 + 304))))->getSDevice()))->showAssert(((char*)&@stringBase0 + 0), 2533, ((char*)&@stringBase0 + 310)); */
        OSPanic(((char*)&@stringBase0 + 0), 2533, ((char*)&@stringBase0 + 40));
    }
    /* field_0x63b = ((JUTNameTab*)(this->field_0x54))->getIndex(((char*)&@stringBase0 + 331)); */
    if (this->field_0x63b != 0) {
        /* ((JUTAssertion*)(((JUTAssertion*)(((JUTNameTab*)(this->field_0x54))->getIndex(((char*)&@stringBase0 + 331))))->getSDevice()))->showAssert(((char*)&@stringBase0 + 0), 2535, ((char*)&@stringBase0 + 337)); */
        OSPanic(((char*)&@stringBase0 + 0), 2535, ((char*)&@stringBase0 + 40));
    }
    if (this->field_0x896 != 0) {
    } else {
        m884 = 1;
    }
    /* if (((daNpc_Ds1_c*)(_savegpr_26(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->initTexPatternAnm(0) == 0) { */
        /* return 0; */
    ((dRes_control_c*)(((char*)&m_arcname__11daNpc_Ds1_c + 0)))->getRes(20);
    ((dRes_control_c*)(((char*)&m_arcname__11daNpc_Ds1_c + 0)))->getRes(27);
    /* field_0x78c = mDoExt_J3DModel(((dRes_control_c*)(((char*)&m_arcname__11daNpc_Ds1_c + 0)))->getRes(20), 0); */
    /* ((mDoExt_btkAnm*)((_savegpr_26(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1936)))->init(((dRes_control_c*)(((char*)&m_arcname__11daNpc_Ds1_c + 0)))->getRes(20), ((dRes_control_c*)(((char*)&m_arcname__11daNpc_Ds1_c + 0)))->getRes(27), 1, 2, 0, -1, 0); */
    /* field_0x7d6 = 1; */
    ((dRes_control_c*)(((char*)&m_arcname__11daNpc_Ds1_c + 0)))->getRes(23);
    ((dRes_control_c*)(((char*)&m_arcname__11daNpc_Ds1_c + 0)))->getRes(24);
    if (((dRes_control_c*)(((char*)&m_arcname__11daNpc_Ds1_c + 0)))->getRes(23) != 0) {
        /* if (((dRes_control_c*)(((char*)&m_arcname__11daNpc_Ds1_c + 0)))->getRes(24) == 0) goto L_506c; */
    }
    return 0;
    /* L_506c:; */
    /* field_0x2c0 = mDoExt_J3DModel(((dRes_control_c*)(((char*)&m_arcname__11daNpc_Ds1_c + 0)))->getRes(23), 0); */
    /* field_0x2c4 = mDoExt_J3DModel(((dRes_control_c*)(((char*)&m_arcname__11daNpc_Ds1_c + 0)))->getRes(24), 0); */
    if (this->field_0x2c0 != 0) {
        /* if (this->field_0x2c4 == 0) goto L_50bc; */
    }
    return 0;
    /* L_50bc:; */
    /* goto L_5110; */
    /* L_50cc:; */
    if ((0 & 65535) != (this->field_0x638 & 255)) {
        /* if ((0 & 65535) == (this->field_0x639 & 255)) goto L_510c; */
    }
    /* field_0x8 = 0; */
    /* L_510c:; */
    /* L_5110:; */
    /* if (((0 + 1) & 65535) >= this->field_0x28) goto L_50cc; */
    /* field_0x14 = _savegpr_26(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
    /* ((dBgS_AcchCir*)((_savegpr_26(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1164)))->SetWall(((char*)&nodeCallBack_Ds__FP7J3DNodei + 0), (0 + 1)); */
    /* ((dBgS_Acch*)((_savegpr_26(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 712)))->Set((_savegpr_26(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 504), (_savegpr_26(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 484), _savegpr_26(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7), 1, (_savegpr_26(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1164), (_savegpr_26(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 544), 0); */
    ((dRes_control_c*)(((char*)&m_arcname__11daNpc_Ds1_c + 0)))->getRes(12);
    mpShopCursor = ShopCursor_create(((dRes_control_c*)(((char*)&m_arcname__11daNpc_Ds1_c + 0)))->getRes(9), ((dRes_control_c*)(((char*)&m_arcname__11daNpc_Ds1_c + 0)))->getRes(12), (((char*)&l_HIO + 0) + ((this->field_0x896 & 255) * 72)));
    return _restgpr_26(mpShopCursor);
}

/* 000052D4-000052F4       .text daNpc_Ds1_Create__FP10fopAc_ac_c */
static cPhs_State daNpc_Ds1_Create(fopAc_ac_c* i_this) {
    return ((daNpc_Ds1_c*)i_this)->_create();
}

/* 000052F4-00005314       .text daNpc_Ds1_Delete__FP11daNpc_Ds1_c */
static BOOL daNpc_Ds1_Delete(daNpc_Ds1_c* i_this) {
    return ((daNpc_Ds1_c*)i_this)->_delete();

/* 00005314-00005334       .text daNpc_Ds1_Execute__FP11daNpc_Ds1_c */
static BOOL daNpc_Ds1_Execute(daNpc_Ds1_c* i_this) {
    return ((daNpc_Ds1_c*)i_this)->_execute();

/* 00005334-00005354       .text daNpc_Ds1_Draw__FP11daNpc_Ds1_c */
static BOOL daNpc_Ds1_Draw(daNpc_Ds1_c* i_this) {
    return ((daNpc_Ds1_c*)i_this)->_draw();

/* 00005354-0000535C       .text daNpc_Ds1_IsDelete__FP11daNpc_Ds1_c */
static BOOL daNpc_Ds1_IsDelete(daNpc_Ds1_c*) {
    return 1;

static actor_method_class l_daNpc_Ds1_Method = {
    (process_method_func)daNpc_Ds1_Create,
    (process_method_func)daNpc_Ds1_Delete,
    (process_method_func)daNpc_Ds1_Execute,
    (process_method_func)daNpc_Ds1_IsDelete,
    (process_method_func)daNpc_Ds1_Draw,
};

actor_process_profile_definition g_profile_NPC_DS1 = {
    /* Layer ID     */ fpcLy_CURRENT_e,
    /* List ID      */ 0x0007,
    /* List Prio    */ fpcPi_CURRENT_e,
    /* Proc Name    */ fpcNm_NPC_DS1_e,
    /* Proc SubMtd  */ &g_fpcLf_Method.base,
    /* Size         */ sizeof(daNpc_Ds1_c),
    /* Size Other   */ 0,
    /* Parameters   */ 0,
    /* Leaf SubMtd  */ &g_fopAc_Method.base,
    /* Draw Prio    */ fpcDwPi_NPC_DS1_e,
    /* Actor SubMtd */ &l_daNpc_Ds1_Method,
    /* Status       */ fopAcStts_UNK40000_e,
    /* Group        */ fopAc_ACTOR_e,
    /* Cull Type    */ fopAc_CULLBOX_12_e,
};

/* 由 fix_decomp_braces.py 补齐：反编译产物末尾缺 5 个 } */
}}}}}
