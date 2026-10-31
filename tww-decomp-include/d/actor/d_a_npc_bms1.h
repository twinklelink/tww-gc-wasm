#ifndef D_A_NPC_BMS1_H
#define D_A_NPC_BMS1_H

#include "f_op/f_op_actor.h"
#include "d/d_npc.h"
#include "d/d_shop.h"

class daNpc_Bms1_c : public fopAc_ac_c {
public:
    void getBackboneJntNum() {}
    void getBackbone_x() {}
    void getBackbone_y() {}
    void getHairLJntNum() {}
    void getHairRJntNum() {}
    void getHeadJntNum() {}
    void getHead_x() {}
    void getHead_y() {}
    void setAction(int (daNpc_Bms1_c::*)(void*), void*) {}
    void setAttentionBasePos(cXyz) {}
    void setEyePos(cXyz) {}

    void set_mtx();
    void initTexPatternAnm(bool);
    void playTexPatternAnm();
    void setAnm(signed char, float);
    void setTexAnm(signed char);
    void setAnmFromMsgTag();
    void chkAttention(cXyz, short);
    void eventOrder();
    void checkOrder();
    void next_msgStatus(unsigned long*);
    void getMsg();
    void setCollision();
    void talkInit();
    void normal_talk();
    void shop_talk();
    void talk();
    void CreateInit();
    void setAttention(bool);
    void checkPlayerLanding();
    void lookBack();
    void wait01();
    void talk01();
    void getdemo_action(void*);
    void wait_action(void*);
    void event_action(void*);
    void evn_talk_init(int);
    void evn_continue_talk_init(int);
    void evn_talk();
    void evn_viblation_init(int);
    void evn_head_swing_init(int);
    void privateCut();
    void demo_move();
    void demo_end_init();
    BOOL _draw();
    BOOL _execute();
    BOOL _delete();
    cPhs_State _create();
    void CreateHeap();

public:
    /* 0x290 */ dNpc_HeadAnm_c mHeadAnm;
    /* 0x2B4 */ u8 m2B4[0x7E9 - 0x2B4];
    /* 0x7E9 */ u8 m7E9;
    /* 0x7EA */ u8 m7EA[0x7F8 - 0x7EA];
    /* 0x7F8 */ ShopCam_action_c mShopCam;
    /* 0x850 */ ShopItems_c mShopItems;
    /* 0x894 */ ShopCursor_c* mpShopCursor;
    /* 0x898 */ u8 m898[0x8A1 - 0x898];
    /* 0x8A1 */ u8 m8A1;
    /* 0x8A2 */ u8 m8A2[0x8A8 - 0x8A2];
};

class daNpc_Bms1_childHIO_c {
public:
    daNpc_Bms1_childHIO_c();

public:
    /* Place member variables here */
};

class daNpc_Bms1_HIO_c {
public:
    daNpc_Bms1_HIO_c();

public:
    /* Place member variables here */
};

#endif /* D_A_NPC_BMS1_H */
