#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_0014eba0
// Address: 0x14eba0 - 0x2ced24
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0014eba0_part125(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x18b460u: goto label_18b460;
        case 0x18b464u: goto label_18b464;
        case 0x18b468u: goto label_18b468;
        case 0x18b46cu: goto label_18b46c;
        case 0x18b470u: goto label_18b470;
        case 0x18b474u: goto label_18b474;
        case 0x18b478u: goto label_18b478;
        case 0x18b47cu: goto label_18b47c;
        case 0x18b480u: goto label_18b480;
        case 0x18b484u: goto label_18b484;
        case 0x18b488u: goto label_18b488;
        case 0x18b48cu: goto label_18b48c;
        case 0x18b490u: goto label_18b490;
        case 0x18b494u: goto label_18b494;
        case 0x18b498u: goto label_18b498;
        case 0x18b49cu: goto label_18b49c;
        case 0x18b4a0u: goto label_18b4a0;
        case 0x18b4a4u: goto label_18b4a4;
        case 0x18b4a8u: goto label_18b4a8;
        case 0x18b4acu: goto label_18b4ac;
        case 0x18b4b0u: goto label_18b4b0;
        case 0x18b4b4u: goto label_18b4b4;
        case 0x18b4b8u: goto label_18b4b8;
        case 0x18b4bcu: goto label_18b4bc;
        case 0x18b4c0u: goto label_18b4c0;
        case 0x18b4c4u: goto label_18b4c4;
        case 0x18b4c8u: goto label_18b4c8;
        case 0x18b4ccu: goto label_18b4cc;
        case 0x18b4d0u: goto label_18b4d0;
        case 0x18b4d4u: goto label_18b4d4;
        case 0x18b4d8u: goto label_18b4d8;
        case 0x18b4dcu: goto label_18b4dc;
        case 0x18b4e0u: goto label_18b4e0;
        case 0x18b4e4u: goto label_18b4e4;
        case 0x18b4e8u: goto label_18b4e8;
        case 0x18b4ecu: goto label_18b4ec;
        case 0x18b4f0u: goto label_18b4f0;
        case 0x18b4f4u: goto label_18b4f4;
        case 0x18b4f8u: goto label_18b4f8;
        case 0x18b4fcu: goto label_18b4fc;
        case 0x18b500u: goto label_18b500;
        case 0x18b504u: goto label_18b504;
        case 0x18b508u: goto label_18b508;
        case 0x18b50cu: goto label_18b50c;
        case 0x18b510u: goto label_18b510;
        case 0x18b514u: goto label_18b514;
        case 0x18b518u: goto label_18b518;
        case 0x18b51cu: goto label_18b51c;
        case 0x18b520u: goto label_18b520;
        case 0x18b524u: goto label_18b524;
        case 0x18b528u: goto label_18b528;
        case 0x18b52cu: goto label_18b52c;
        case 0x18b530u: goto label_18b530;
        case 0x18b534u: goto label_18b534;
        case 0x18b538u: goto label_18b538;
        case 0x18b53cu: goto label_18b53c;
        case 0x18b540u: goto label_18b540;
        case 0x18b544u: goto label_18b544;
        case 0x18b548u: goto label_18b548;
        case 0x18b54cu: goto label_18b54c;
        case 0x18b550u: goto label_18b550;
        case 0x18b554u: goto label_18b554;
        case 0x18b558u: goto label_18b558;
        case 0x18b55cu: goto label_18b55c;
        case 0x18b560u: goto label_18b560;
        case 0x18b564u: goto label_18b564;
        case 0x18b568u: goto label_18b568;
        case 0x18b56cu: goto label_18b56c;
        case 0x18b570u: goto label_18b570;
        case 0x18b574u: goto label_18b574;
        case 0x18b578u: goto label_18b578;
        case 0x18b57cu: goto label_18b57c;
        case 0x18b580u: goto label_18b580;
        case 0x18b584u: goto label_18b584;
        case 0x18b588u: goto label_18b588;
        case 0x18b58cu: goto label_18b58c;
        case 0x18b590u: goto label_18b590;
        case 0x18b594u: goto label_18b594;
        case 0x18b598u: goto label_18b598;
        case 0x18b59cu: goto label_18b59c;
        case 0x18b5a0u: goto label_18b5a0;
        case 0x18b5a4u: goto label_18b5a4;
        case 0x18b5a8u: goto label_18b5a8;
        case 0x18b5acu: goto label_18b5ac;
        case 0x18b5b0u: goto label_18b5b0;
        case 0x18b5b4u: goto label_18b5b4;
        case 0x18b5b8u: goto label_18b5b8;
        case 0x18b5bcu: goto label_18b5bc;
        case 0x18b5c0u: goto label_18b5c0;
        case 0x18b5c4u: goto label_18b5c4;
        case 0x18b5c8u: goto label_18b5c8;
        case 0x18b5ccu: goto label_18b5cc;
        case 0x18b5d0u: goto label_18b5d0;
        case 0x18b5d4u: goto label_18b5d4;
        case 0x18b5d8u: goto label_18b5d8;
        case 0x18b5dcu: goto label_18b5dc;
        case 0x18b5e0u: goto label_18b5e0;
        case 0x18b5e4u: goto label_18b5e4;
        case 0x18b5e8u: goto label_18b5e8;
        case 0x18b5ecu: goto label_18b5ec;
        case 0x18b5f0u: goto label_18b5f0;
        case 0x18b5f4u: goto label_18b5f4;
        case 0x18b5f8u: goto label_18b5f8;
        case 0x18b5fcu: goto label_18b5fc;
        case 0x18b600u: goto label_18b600;
        case 0x18b604u: goto label_18b604;
        case 0x18b608u: goto label_18b608;
        case 0x18b60cu: goto label_18b60c;
        case 0x18b610u: goto label_18b610;
        case 0x18b614u: goto label_18b614;
        case 0x18b618u: goto label_18b618;
        case 0x18b61cu: goto label_18b61c;
        case 0x18b620u: goto label_18b620;
        case 0x18b624u: goto label_18b624;
        case 0x18b628u: goto label_18b628;
        case 0x18b62cu: goto label_18b62c;
        case 0x18b630u: goto label_18b630;
        case 0x18b634u: goto label_18b634;
        case 0x18b638u: goto label_18b638;
        case 0x18b63cu: goto label_18b63c;
        case 0x18b640u: goto label_18b640;
        case 0x18b644u: goto label_18b644;
        case 0x18b648u: goto label_18b648;
        case 0x18b64cu: goto label_18b64c;
        case 0x18b650u: goto label_18b650;
        case 0x18b654u: goto label_18b654;
        case 0x18b658u: goto label_18b658;
        case 0x18b65cu: goto label_18b65c;
        case 0x18b660u: goto label_18b660;
        case 0x18b664u: goto label_18b664;
        case 0x18b668u: goto label_18b668;
        case 0x18b66cu: goto label_18b66c;
        case 0x18b670u: goto label_18b670;
        case 0x18b674u: goto label_18b674;
        case 0x18b678u: goto label_18b678;
        case 0x18b67cu: goto label_18b67c;
        case 0x18b680u: goto label_18b680;
        case 0x18b684u: goto label_18b684;
        case 0x18b688u: goto label_18b688;
        case 0x18b68cu: goto label_18b68c;
        case 0x18b690u: goto label_18b690;
        case 0x18b694u: goto label_18b694;
        case 0x18b698u: goto label_18b698;
        case 0x18b69cu: goto label_18b69c;
        case 0x18b6a0u: goto label_18b6a0;
        case 0x18b6a4u: goto label_18b6a4;
        case 0x18b6a8u: goto label_18b6a8;
        case 0x18b6acu: goto label_18b6ac;
        case 0x18b6b0u: goto label_18b6b0;
        case 0x18b6b4u: goto label_18b6b4;
        case 0x18b6b8u: goto label_18b6b8;
        case 0x18b6bcu: goto label_18b6bc;
        case 0x18b6c0u: goto label_18b6c0;
        case 0x18b6c4u: goto label_18b6c4;
        case 0x18b6c8u: goto label_18b6c8;
        case 0x18b6ccu: goto label_18b6cc;
        case 0x18b6d0u: goto label_18b6d0;
        case 0x18b6d4u: goto label_18b6d4;
        case 0x18b6d8u: goto label_18b6d8;
        case 0x18b6dcu: goto label_18b6dc;
        case 0x18b6e0u: goto label_18b6e0;
        case 0x18b6e4u: goto label_18b6e4;
        case 0x18b6e8u: goto label_18b6e8;
        case 0x18b6ecu: goto label_18b6ec;
        case 0x18b6f0u: goto label_18b6f0;
        case 0x18b6f4u: goto label_18b6f4;
        case 0x18b6f8u: goto label_18b6f8;
        case 0x18b6fcu: goto label_18b6fc;
        case 0x18b700u: goto label_18b700;
        case 0x18b704u: goto label_18b704;
        case 0x18b708u: goto label_18b708;
        case 0x18b70cu: goto label_18b70c;
        case 0x18b710u: goto label_18b710;
        case 0x18b714u: goto label_18b714;
        case 0x18b718u: goto label_18b718;
        case 0x18b71cu: goto label_18b71c;
        case 0x18b720u: goto label_18b720;
        case 0x18b724u: goto label_18b724;
        case 0x18b728u: goto label_18b728;
        case 0x18b72cu: goto label_18b72c;
        case 0x18b730u: goto label_18b730;
        case 0x18b734u: goto label_18b734;
        case 0x18b738u: goto label_18b738;
        case 0x18b73cu: goto label_18b73c;
        case 0x18b740u: goto label_18b740;
        case 0x18b744u: goto label_18b744;
        case 0x18b748u: goto label_18b748;
        case 0x18b74cu: goto label_18b74c;
        case 0x18b750u: goto label_18b750;
        case 0x18b754u: goto label_18b754;
        case 0x18b758u: goto label_18b758;
        case 0x18b75cu: goto label_18b75c;
        case 0x18b760u: goto label_18b760;
        case 0x18b764u: goto label_18b764;
        case 0x18b768u: goto label_18b768;
        case 0x18b76cu: goto label_18b76c;
        case 0x18b770u: goto label_18b770;
        case 0x18b774u: goto label_18b774;
        case 0x18b778u: goto label_18b778;
        case 0x18b77cu: goto label_18b77c;
        case 0x18b780u: goto label_18b780;
        case 0x18b784u: goto label_18b784;
        case 0x18b788u: goto label_18b788;
        case 0x18b78cu: goto label_18b78c;
        case 0x18b790u: goto label_18b790;
        case 0x18b794u: goto label_18b794;
        case 0x18b798u: goto label_18b798;
        case 0x18b79cu: goto label_18b79c;
        case 0x18b7a0u: goto label_18b7a0;
        case 0x18b7a4u: goto label_18b7a4;
        case 0x18b7a8u: goto label_18b7a8;
        case 0x18b7acu: goto label_18b7ac;
        case 0x18b7b0u: goto label_18b7b0;
        case 0x18b7b4u: goto label_18b7b4;
        case 0x18b7b8u: goto label_18b7b8;
        case 0x18b7bcu: goto label_18b7bc;
        case 0x18b7c0u: goto label_18b7c0;
        case 0x18b7c4u: goto label_18b7c4;
        case 0x18b7c8u: goto label_18b7c8;
        case 0x18b7ccu: goto label_18b7cc;
        case 0x18b7d0u: goto label_18b7d0;
        case 0x18b7d4u: goto label_18b7d4;
        case 0x18b7d8u: goto label_18b7d8;
        case 0x18b7dcu: goto label_18b7dc;
        case 0x18b7e0u: goto label_18b7e0;
        case 0x18b7e4u: goto label_18b7e4;
        case 0x18b7e8u: goto label_18b7e8;
        case 0x18b7ecu: goto label_18b7ec;
        case 0x18b7f0u: goto label_18b7f0;
        case 0x18b7f4u: goto label_18b7f4;
        case 0x18b7f8u: goto label_18b7f8;
        case 0x18b7fcu: goto label_18b7fc;
        case 0x18b800u: goto label_18b800;
        case 0x18b804u: goto label_18b804;
        case 0x18b808u: goto label_18b808;
        case 0x18b80cu: goto label_18b80c;
        case 0x18b810u: goto label_18b810;
        case 0x18b814u: goto label_18b814;
        case 0x18b818u: goto label_18b818;
        case 0x18b81cu: goto label_18b81c;
        case 0x18b820u: goto label_18b820;
        case 0x18b824u: goto label_18b824;
        case 0x18b828u: goto label_18b828;
        case 0x18b82cu: goto label_18b82c;
        case 0x18b830u: goto label_18b830;
        case 0x18b834u: goto label_18b834;
        case 0x18b838u: goto label_18b838;
        case 0x18b83cu: goto label_18b83c;
        case 0x18b840u: goto label_18b840;
        case 0x18b844u: goto label_18b844;
        case 0x18b848u: goto label_18b848;
        case 0x18b84cu: goto label_18b84c;
        case 0x18b850u: goto label_18b850;
        case 0x18b854u: goto label_18b854;
        case 0x18b858u: goto label_18b858;
        case 0x18b85cu: goto label_18b85c;
        case 0x18b860u: goto label_18b860;
        case 0x18b864u: goto label_18b864;
        case 0x18b868u: goto label_18b868;
        case 0x18b86cu: goto label_18b86c;
        case 0x18b870u: goto label_18b870;
        case 0x18b874u: goto label_18b874;
        case 0x18b878u: goto label_18b878;
        case 0x18b87cu: goto label_18b87c;
        case 0x18b880u: goto label_18b880;
        case 0x18b884u: goto label_18b884;
        case 0x18b888u: goto label_18b888;
        case 0x18b88cu: goto label_18b88c;
        case 0x18b890u: goto label_18b890;
        case 0x18b894u: goto label_18b894;
        case 0x18b898u: goto label_18b898;
        case 0x18b89cu: goto label_18b89c;
        case 0x18b8a0u: goto label_18b8a0;
        case 0x18b8a4u: goto label_18b8a4;
        case 0x18b8a8u: goto label_18b8a8;
        case 0x18b8acu: goto label_18b8ac;
        case 0x18b8b0u: goto label_18b8b0;
        case 0x18b8b4u: goto label_18b8b4;
        case 0x18b8b8u: goto label_18b8b8;
        case 0x18b8bcu: goto label_18b8bc;
        case 0x18b8c0u: goto label_18b8c0;
        case 0x18b8c4u: goto label_18b8c4;
        case 0x18b8c8u: goto label_18b8c8;
        case 0x18b8ccu: goto label_18b8cc;
        case 0x18b8d0u: goto label_18b8d0;
        case 0x18b8d4u: goto label_18b8d4;
        case 0x18b8d8u: goto label_18b8d8;
        case 0x18b8dcu: goto label_18b8dc;
        case 0x18b8e0u: goto label_18b8e0;
        case 0x18b8e4u: goto label_18b8e4;
        case 0x18b8e8u: goto label_18b8e8;
        case 0x18b8ecu: goto label_18b8ec;
        case 0x18b8f0u: goto label_18b8f0;
        case 0x18b8f4u: goto label_18b8f4;
        case 0x18b8f8u: goto label_18b8f8;
        case 0x18b8fcu: goto label_18b8fc;
        case 0x18b900u: goto label_18b900;
        case 0x18b904u: goto label_18b904;
        case 0x18b908u: goto label_18b908;
        case 0x18b90cu: goto label_18b90c;
        case 0x18b910u: goto label_18b910;
        case 0x18b914u: goto label_18b914;
        case 0x18b918u: goto label_18b918;
        case 0x18b91cu: goto label_18b91c;
        case 0x18b920u: goto label_18b920;
        case 0x18b924u: goto label_18b924;
        case 0x18b928u: goto label_18b928;
        case 0x18b92cu: goto label_18b92c;
        case 0x18b930u: goto label_18b930;
        case 0x18b934u: goto label_18b934;
        case 0x18b938u: goto label_18b938;
        case 0x18b93cu: goto label_18b93c;
        case 0x18b940u: goto label_18b940;
        case 0x18b944u: goto label_18b944;
        case 0x18b948u: goto label_18b948;
        case 0x18b94cu: goto label_18b94c;
        case 0x18b950u: goto label_18b950;
        case 0x18b954u: goto label_18b954;
        case 0x18b958u: goto label_18b958;
        case 0x18b95cu: goto label_18b95c;
        case 0x18b960u: goto label_18b960;
        case 0x18b964u: goto label_18b964;
        case 0x18b968u: goto label_18b968;
        case 0x18b96cu: goto label_18b96c;
        case 0x18b970u: goto label_18b970;
        case 0x18b974u: goto label_18b974;
        case 0x18b978u: goto label_18b978;
        case 0x18b97cu: goto label_18b97c;
        case 0x18b980u: goto label_18b980;
        case 0x18b984u: goto label_18b984;
        case 0x18b988u: goto label_18b988;
        case 0x18b98cu: goto label_18b98c;
        case 0x18b990u: goto label_18b990;
        case 0x18b994u: goto label_18b994;
        case 0x18b998u: goto label_18b998;
        case 0x18b99cu: goto label_18b99c;
        case 0x18b9a0u: goto label_18b9a0;
        case 0x18b9a4u: goto label_18b9a4;
        case 0x18b9a8u: goto label_18b9a8;
        case 0x18b9acu: goto label_18b9ac;
        case 0x18b9b0u: goto label_18b9b0;
        case 0x18b9b4u: goto label_18b9b4;
        case 0x18b9b8u: goto label_18b9b8;
        case 0x18b9bcu: goto label_18b9bc;
        case 0x18b9c0u: goto label_18b9c0;
        case 0x18b9c4u: goto label_18b9c4;
        case 0x18b9c8u: goto label_18b9c8;
        case 0x18b9ccu: goto label_18b9cc;
        case 0x18b9d0u: goto label_18b9d0;
        case 0x18b9d4u: goto label_18b9d4;
        case 0x18b9d8u: goto label_18b9d8;
        case 0x18b9dcu: goto label_18b9dc;
        case 0x18b9e0u: goto label_18b9e0;
        case 0x18b9e4u: goto label_18b9e4;
        case 0x18b9e8u: goto label_18b9e8;
        case 0x18b9ecu: goto label_18b9ec;
        case 0x18b9f0u: goto label_18b9f0;
        case 0x18b9f4u: goto label_18b9f4;
        case 0x18b9f8u: goto label_18b9f8;
        case 0x18b9fcu: goto label_18b9fc;
        case 0x18ba00u: goto label_18ba00;
        case 0x18ba04u: goto label_18ba04;
        case 0x18ba08u: goto label_18ba08;
        case 0x18ba0cu: goto label_18ba0c;
        case 0x18ba10u: goto label_18ba10;
        case 0x18ba14u: goto label_18ba14;
        case 0x18ba18u: goto label_18ba18;
        case 0x18ba1cu: goto label_18ba1c;
        case 0x18ba20u: goto label_18ba20;
        case 0x18ba24u: goto label_18ba24;
        case 0x18ba28u: goto label_18ba28;
        case 0x18ba2cu: goto label_18ba2c;
        case 0x18ba30u: goto label_18ba30;
        case 0x18ba34u: goto label_18ba34;
        case 0x18ba38u: goto label_18ba38;
        case 0x18ba3cu: goto label_18ba3c;
        case 0x18ba40u: goto label_18ba40;
        case 0x18ba44u: goto label_18ba44;
        case 0x18ba48u: goto label_18ba48;
        case 0x18ba4cu: goto label_18ba4c;
        case 0x18ba50u: goto label_18ba50;
        case 0x18ba54u: goto label_18ba54;
        case 0x18ba58u: goto label_18ba58;
        case 0x18ba5cu: goto label_18ba5c;
        case 0x18ba60u: goto label_18ba60;
        case 0x18ba64u: goto label_18ba64;
        case 0x18ba68u: goto label_18ba68;
        case 0x18ba6cu: goto label_18ba6c;
        case 0x18ba70u: goto label_18ba70;
        case 0x18ba74u: goto label_18ba74;
        case 0x18ba78u: goto label_18ba78;
        case 0x18ba7cu: goto label_18ba7c;
        case 0x18ba80u: goto label_18ba80;
        case 0x18ba84u: goto label_18ba84;
        case 0x18ba88u: goto label_18ba88;
        case 0x18ba8cu: goto label_18ba8c;
        case 0x18ba90u: goto label_18ba90;
        case 0x18ba94u: goto label_18ba94;
        case 0x18ba98u: goto label_18ba98;
        case 0x18ba9cu: goto label_18ba9c;
        case 0x18baa0u: goto label_18baa0;
        case 0x18baa4u: goto label_18baa4;
        case 0x18baa8u: goto label_18baa8;
        case 0x18baacu: goto label_18baac;
        case 0x18bab0u: goto label_18bab0;
        case 0x18bab4u: goto label_18bab4;
        case 0x18bab8u: goto label_18bab8;
        case 0x18babcu: goto label_18babc;
        case 0x18bac0u: goto label_18bac0;
        case 0x18bac4u: goto label_18bac4;
        case 0x18bac8u: goto label_18bac8;
        case 0x18baccu: goto label_18bacc;
        case 0x18bad0u: goto label_18bad0;
        case 0x18bad4u: goto label_18bad4;
        case 0x18bad8u: goto label_18bad8;
        case 0x18badcu: goto label_18badc;
        case 0x18bae0u: goto label_18bae0;
        case 0x18bae4u: goto label_18bae4;
        case 0x18bae8u: goto label_18bae8;
        case 0x18baecu: goto label_18baec;
        case 0x18baf0u: goto label_18baf0;
        case 0x18baf4u: goto label_18baf4;
        case 0x18baf8u: goto label_18baf8;
        case 0x18bafcu: goto label_18bafc;
        case 0x18bb00u: goto label_18bb00;
        case 0x18bb04u: goto label_18bb04;
        case 0x18bb08u: goto label_18bb08;
        case 0x18bb0cu: goto label_18bb0c;
        case 0x18bb10u: goto label_18bb10;
        case 0x18bb14u: goto label_18bb14;
        case 0x18bb18u: goto label_18bb18;
        case 0x18bb1cu: goto label_18bb1c;
        case 0x18bb20u: goto label_18bb20;
        case 0x18bb24u: goto label_18bb24;
        case 0x18bb28u: goto label_18bb28;
        case 0x18bb2cu: goto label_18bb2c;
        case 0x18bb30u: goto label_18bb30;
        case 0x18bb34u: goto label_18bb34;
        case 0x18bb38u: goto label_18bb38;
        case 0x18bb3cu: goto label_18bb3c;
        case 0x18bb40u: goto label_18bb40;
        case 0x18bb44u: goto label_18bb44;
        case 0x18bb48u: goto label_18bb48;
        case 0x18bb4cu: goto label_18bb4c;
        case 0x18bb50u: goto label_18bb50;
        case 0x18bb54u: goto label_18bb54;
        case 0x18bb58u: goto label_18bb58;
        case 0x18bb5cu: goto label_18bb5c;
        case 0x18bb60u: goto label_18bb60;
        case 0x18bb64u: goto label_18bb64;
        case 0x18bb68u: goto label_18bb68;
        case 0x18bb6cu: goto label_18bb6c;
        case 0x18bb70u: goto label_18bb70;
        case 0x18bb74u: goto label_18bb74;
        case 0x18bb78u: goto label_18bb78;
        case 0x18bb7cu: goto label_18bb7c;
        case 0x18bb80u: goto label_18bb80;
        case 0x18bb84u: goto label_18bb84;
        case 0x18bb88u: goto label_18bb88;
        case 0x18bb8cu: goto label_18bb8c;
        case 0x18bb90u: goto label_18bb90;
        case 0x18bb94u: goto label_18bb94;
        case 0x18bb98u: goto label_18bb98;
        case 0x18bb9cu: goto label_18bb9c;
        case 0x18bba0u: goto label_18bba0;
        case 0x18bba4u: goto label_18bba4;
        case 0x18bba8u: goto label_18bba8;
        case 0x18bbacu: goto label_18bbac;
        case 0x18bbb0u: goto label_18bbb0;
        case 0x18bbb4u: goto label_18bbb4;
        case 0x18bbb8u: goto label_18bbb8;
        case 0x18bbbcu: goto label_18bbbc;
        case 0x18bbc0u: goto label_18bbc0;
        case 0x18bbc4u: goto label_18bbc4;
        case 0x18bbc8u: goto label_18bbc8;
        case 0x18bbccu: goto label_18bbcc;
        case 0x18bbd0u: goto label_18bbd0;
        case 0x18bbd4u: goto label_18bbd4;
        case 0x18bbd8u: goto label_18bbd8;
        case 0x18bbdcu: goto label_18bbdc;
        case 0x18bbe0u: goto label_18bbe0;
        case 0x18bbe4u: goto label_18bbe4;
        case 0x18bbe8u: goto label_18bbe8;
        case 0x18bbecu: goto label_18bbec;
        case 0x18bbf0u: goto label_18bbf0;
        case 0x18bbf4u: goto label_18bbf4;
        case 0x18bbf8u: goto label_18bbf8;
        case 0x18bbfcu: goto label_18bbfc;
        case 0x18bc00u: goto label_18bc00;
        case 0x18bc04u: goto label_18bc04;
        case 0x18bc08u: goto label_18bc08;
        case 0x18bc0cu: goto label_18bc0c;
        case 0x18bc10u: goto label_18bc10;
        case 0x18bc14u: goto label_18bc14;
        case 0x18bc18u: goto label_18bc18;
        case 0x18bc1cu: goto label_18bc1c;
        case 0x18bc20u: goto label_18bc20;
        case 0x18bc24u: goto label_18bc24;
        case 0x18bc28u: goto label_18bc28;
        case 0x18bc2cu: goto label_18bc2c;
        default: return;
    }

label_18b460:
    // 0x18b460: 0xa640019c  sh          $zero, 0x19C($s2)
    ctx->pc = 0x18b460u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 412), (uint16_t)GPR_U32(ctx, 0));
label_18b464:
    // 0x18b464: 0x10000084  b           . + 4 + (0x84 << 2)
label_18b468:
    if (ctx->pc == 0x18B468u) {
        ctx->pc = 0x18B468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B464u;
        // 0x18b468: 0xa240023e  sb          $zero, 0x23E($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 574), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18B46Cu;
        goto label_18b46c;
    }
    ctx->pc = 0x18B464u;
    {
        const bool branch_taken_0x18b464 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B464u;
        // 0x18b468: 0xa240023e  sb          $zero, 0x23E($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 574), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b464) {
            ctx->pc = 0x18B678u;
            goto label_18b678;
        }
    }
    ctx->pc = 0x18B46Cu;
label_18b46c:
    // 0x18b46c: 0x9243023e  lbu         $v1, 0x23E($s2)
    ctx->pc = 0x18b46cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 574)));
label_18b470:
    // 0x18b470: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x18b470u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_18b474:
    // 0x18b474: 0x14620081  bne         $v1, $v0, . + 4 + (0x81 << 2)
label_18b478:
    if (ctx->pc == 0x18B478u) {
        ctx->pc = 0x18B478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B474u;
        // 0x18b478: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18B47Cu;
        goto label_18b47c;
    }
    ctx->pc = 0x18B474u;
    {
        const bool branch_taken_0x18b474 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x18B478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B474u;
        // 0x18b478: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b474) {
            ctx->pc = 0x18B67Cu;
            goto label_18b67c;
        }
    }
    ctx->pc = 0x18B47Cu;
label_18b47c:
    // 0x18b47c: 0x8e420194  lw          $v0, 0x194($s2)
    ctx->pc = 0x18b47cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 404)));
label_18b480:
    // 0x18b480: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x18b480u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
label_18b484:
    // 0x18b484: 0x1000007c  b           . + 4 + (0x7C << 2)
label_18b488:
    if (ctx->pc == 0x18B488u) {
        ctx->pc = 0x18B488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B484u;
        // 0x18b488: 0xae420194  sw          $v0, 0x194($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 404), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18B48Cu;
        goto label_18b48c;
    }
    ctx->pc = 0x18B484u;
    {
        const bool branch_taken_0x18b484 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B484u;
        // 0x18b488: 0xae420194  sw          $v0, 0x194($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 404), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b484) {
            ctx->pc = 0x18B678u;
            goto label_18b678;
        }
    }
    ctx->pc = 0x18B48Cu;
label_18b48c:
    // 0x18b48c: 0x14620041  bne         $v1, $v0, . + 4 + (0x41 << 2)
label_18b490:
    if (ctx->pc == 0x18B490u) {
        ctx->pc = 0x18B494u;
        goto label_18b494;
    }
    ctx->pc = 0x18B48Cu;
    {
        const bool branch_taken_0x18b48c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x18b48c) {
            ctx->pc = 0x18B594u;
            goto label_18b594;
        }
    }
    ctx->pc = 0x18B494u;
label_18b494:
    // 0x18b494: 0xae400194  sw          $zero, 0x194($s2)
    ctx->pc = 0x18b494u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 404), GPR_U32(ctx, 0));
label_18b498:
    // 0x18b498: 0x864401aa  lh          $a0, 0x1AA($s2)
    ctx->pc = 0x18b498u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 426)));
label_18b49c:
    // 0x18b49c: 0x28810002  slti        $at, $a0, 0x2
    ctx->pc = 0x18b49cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
label_18b4a0:
    // 0x18b4a0: 0x10200031  beqz        $at, . + 4 + (0x31 << 2)
label_18b4a4:
    if (ctx->pc == 0x18B4A4u) {
        ctx->pc = 0x18B4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B4A0u;
        // 0x18b4a4: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18B4A8u;
        goto label_18b4a8;
    }
    ctx->pc = 0x18B4A0u;
    {
        const bool branch_taken_0x18b4a0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B4A0u;
        // 0x18b4a4: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b4a0) {
            ctx->pc = 0x18B568u;
            goto label_18b568;
        }
    }
    ctx->pc = 0x18B4A8u;
label_18b4a8:
    // 0x18b4a8: 0x92430230  lbu         $v1, 0x230($s2)
    ctx->pc = 0x18b4a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 560)));
label_18b4ac:
    // 0x18b4ac: 0x28620014  slti        $v0, $v1, 0x14
    ctx->pc = 0x18b4acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)20) ? 1 : 0);
label_18b4b0:
    // 0x18b4b0: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_18b4b4:
    if (ctx->pc == 0x18B4B4u) {
        ctx->pc = 0x18B4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B4B0u;
        // 0x18b4b4: 0x2462ffec  addiu       $v0, $v1, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18B4B8u;
        goto label_18b4b8;
    }
    ctx->pc = 0x18B4B0u;
    {
        const bool branch_taken_0x18b4b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18B4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B4B0u;
        // 0x18b4b4: 0x2462ffec  addiu       $v0, $v1, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b4b0) {
            ctx->pc = 0x18B4E0u;
            goto label_18b4e0;
        }
    }
    ctx->pc = 0x18B4B8u;
label_18b4b8:
    // 0x18b4b8: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
label_18b4bc:
    if (ctx->pc == 0x18B4BCu) {
        ctx->pc = 0x18B4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B4B8u;
        // 0x18b4bc: 0x30430003  andi        $v1, $v0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        ctx->pc = 0x18B4C0u;
        goto label_18b4c0;
    }
    ctx->pc = 0x18B4B8u;
    {
        const bool branch_taken_0x18b4b8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x18B4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B4B8u;
        // 0x18b4bc: 0x30430003  andi        $v1, $v0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b4b8) {
            ctx->pc = 0x18B4CCu;
            goto label_18b4cc;
        }
    }
    ctx->pc = 0x18B4C0u;
label_18b4c0:
    // 0x18b4c0: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
label_18b4c4:
    if (ctx->pc == 0x18B4C4u) {
        ctx->pc = 0x18B4C8u;
        goto label_18b4c8;
    }
    ctx->pc = 0x18B4C0u;
    {
        const bool branch_taken_0x18b4c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18b4c0) {
            ctx->pc = 0x18B4CCu;
            goto label_18b4cc;
        }
    }
    ctx->pc = 0x18B4C8u;
label_18b4c8:
    // 0x18b4c8: 0x2463fffc  addiu       $v1, $v1, -0x4
    ctx->pc = 0x18b4c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
label_18b4cc:
    // 0x18b4cc: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x18b4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_18b4d0:
    // 0x18b4d0: 0x24425384  addiu       $v0, $v0, 0x5384
    ctx->pc = 0x18b4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21380));
label_18b4d4:
    // 0x18b4d4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18b4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_18b4d8:
    // 0x18b4d8: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x18b4d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_18b4dc:
    // 0x18b4dc: 0x0  nop
    ctx->pc = 0x18b4dcu;
    // NOP
label_18b4e0:
    // 0x18b4e0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x18b4e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_18b4e4:
    // 0x18b4e4: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x18b4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_18b4e8:
    // 0x18b4e8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x18b4e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_18b4ec:
    // 0x18b4ec: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x18b4ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_18b4f0:
    // 0x18b4f0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x18b4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_18b4f4:
    // 0x18b4f4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18b4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_18b4f8:
    // 0x18b4f8: 0xc08f0cc  jal         func_23C330
label_18b4fc:
    if (ctx->pc == 0x18B4FCu) {
        ctx->pc = 0x18B4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B4F8u;
        // 0x18b4fc: 0x628018  mult        $s0, $v1, $v0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x18B500u;
        goto label_18b500;
    }
    ctx->pc = 0x18B4F8u;
    SET_GPR_U32(ctx, 31, 0x18B500u);
    ctx->pc = 0x18B4FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18B4F8u;
    // 0x18b4fc: 0x628018  mult        $s0, $v1, $v0 (Delay Slot)
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x18B500u;
label_18b500:
    // 0x18b500: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x18b500u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_18b504:
    // 0x18b504: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x18b504u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
label_18b508:
    // 0x18b508: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x18b508u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_18b50c:
    // 0x18b50c: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x18b50cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
label_18b510:
    // 0x18b510: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18b510u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18b514:
    // 0x18b514: 0x0  nop
    ctx->pc = 0x18b514u;
    // NOP
label_18b518:
    // 0x18b518: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x18b518u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_18b51c:
    // 0x18b51c: 0x3c026666  lui         $v0, 0x6666
    ctx->pc = 0x18b51cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26214 << 16));
label_18b520:
    // 0x18b520: 0x34426667  ori         $v0, $v0, 0x6667
    ctx->pc = 0x18b520u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26215);
label_18b524:
    // 0x18b524: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x18b524u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18b528:
    // 0x18b528: 0x0  nop
    ctx->pc = 0x18b528u;
    // NOP
label_18b52c:
    // 0x18b52c: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x18b52cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_18b530:
    // 0x18b530: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x18b530u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_18b534:
    // 0x18b534: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x18b534u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_18b538:
    // 0x18b538: 0x0  nop
    ctx->pc = 0x18b538u;
    // NOP
label_18b53c:
    // 0x18b53c: 0x2463001e  addiu       $v1, $v1, 0x1E
    ctx->pc = 0x18b53cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30));
label_18b540:
    // 0x18b540: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x18b540u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_18b544:
    // 0x18b544: 0x430018  mult        $zero, $v0, $v1
    ctx->pc = 0x18b544u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_18b548:
    // 0x18b548: 0x0  nop
    ctx->pc = 0x18b548u;
    // NOP
label_18b54c:
    // 0x18b54c: 0x0  nop
    ctx->pc = 0x18b54cu;
    // NOP
label_18b550:
    // 0x18b550: 0x1010  mfhi        $v0
    ctx->pc = 0x18b550u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_18b554:
    // 0x18b554: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x18b554u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
label_18b558:
    // 0x18b558: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x18b558u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_18b55c:
    // 0x18b55c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18b55cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_18b560:
    // 0x18b560: 0x10000045  b           . + 4 + (0x45 << 2)
label_18b564:
    if (ctx->pc == 0x18B564u) {
        ctx->pc = 0x18B564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B560u;
        // 0x18b564: 0xa242023e  sb          $v0, 0x23E($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 574), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18B568u;
        goto label_18b568;
    }
    ctx->pc = 0x18B560u;
    {
        const bool branch_taken_0x18b560 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B560u;
        // 0x18b564: 0xa242023e  sb          $v0, 0x23E($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 574), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b560) {
            ctx->pc = 0x18B678u;
            goto label_18b678;
        }
    }
    ctx->pc = 0x18B568u;
label_18b568:
    // 0x18b568: 0x9243023e  lbu         $v1, 0x23E($s2)
    ctx->pc = 0x18b568u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 574)));
label_18b56c:
    // 0x18b56c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x18b56cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_18b570:
    // 0x18b570: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18b570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_18b574:
    // 0x18b574: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x18b574u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_18b578:
    // 0x18b578: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x18b578u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_18b57c:
    // 0x18b57c: 0x1440003e  bnez        $v0, . + 4 + (0x3E << 2)
label_18b580:
    if (ctx->pc == 0x18B580u) {
        ctx->pc = 0x18B584u;
        goto label_18b584;
    }
    ctx->pc = 0x18B57Cu;
    {
        const bool branch_taken_0x18b57c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18b57c) {
            ctx->pc = 0x18B678u;
            goto label_18b678;
        }
    }
    ctx->pc = 0x18B584u;
label_18b584:
    // 0x18b584: 0x8e420194  lw          $v0, 0x194($s2)
    ctx->pc = 0x18b584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 404)));
label_18b588:
    // 0x18b588: 0x34420401  ori         $v0, $v0, 0x401
    ctx->pc = 0x18b588u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1025);
label_18b58c:
    // 0x18b58c: 0x1000003a  b           . + 4 + (0x3A << 2)
label_18b590:
    if (ctx->pc == 0x18B590u) {
        ctx->pc = 0x18B590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B58Cu;
        // 0x18b590: 0xae420194  sw          $v0, 0x194($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 404), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18B594u;
        goto label_18b594;
    }
    ctx->pc = 0x18B58Cu;
    {
        const bool branch_taken_0x18b58c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B58Cu;
        // 0x18b590: 0xae420194  sw          $v0, 0x194($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 404), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b58c) {
            ctx->pc = 0x18B678u;
            goto label_18b678;
        }
    }
    ctx->pc = 0x18B594u;
label_18b594:
    // 0x18b594: 0x2402006d  addiu       $v0, $zero, 0x6D
    ctx->pc = 0x18b594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 109));
label_18b598:
    // 0x18b598: 0x14620037  bne         $v1, $v0, . + 4 + (0x37 << 2)
label_18b59c:
    if (ctx->pc == 0x18B59Cu) {
        ctx->pc = 0x18B5A0u;
        goto label_18b5a0;
    }
    ctx->pc = 0x18B598u;
    {
        const bool branch_taken_0x18b598 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x18b598) {
            ctx->pc = 0x18B678u;
            goto label_18b678;
        }
    }
    ctx->pc = 0x18B5A0u;
label_18b5a0:
    // 0x18b5a0: 0xae400194  sw          $zero, 0x194($s2)
    ctx->pc = 0x18b5a0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 404), GPR_U32(ctx, 0));
label_18b5a4:
    // 0x18b5a4: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x18b5a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18b5a8:
    // 0x18b5a8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x18b5a8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_18b5ac:
    // 0x18b5ac: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x18b5acu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_18b5b0:
    // 0x18b5b0: 0x0  nop
    ctx->pc = 0x18b5b0u;
    // NOP
label_18b5b4:
    // 0x18b5b4: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x18b5b4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_18b5b8:
    // 0x18b5b8: 0x10200024  beqz        $at, . + 4 + (0x24 << 2)
label_18b5bc:
    if (ctx->pc == 0x18B5BCu) {
        ctx->pc = 0x18B5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B5B8u;
        // 0x18b5bc: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18B5C0u;
        goto label_18b5c0;
    }
    ctx->pc = 0x18B5B8u;
    {
        const bool branch_taken_0x18b5b8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B5B8u;
        // 0x18b5bc: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b5b8) {
            ctx->pc = 0x18B64Cu;
            goto label_18b64c;
        }
    }
    ctx->pc = 0x18B5C0u;
label_18b5c0:
    // 0x18b5c0: 0x92500230  lbu         $s0, 0x230($s2)
    ctx->pc = 0x18b5c0u;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 560)));
label_18b5c4:
    // 0x18b5c4: 0x2a020014  slti        $v0, $s0, 0x14
    ctx->pc = 0x18b5c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)20) ? 1 : 0);
label_18b5c8:
    // 0x18b5c8: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_18b5cc:
    if (ctx->pc == 0x18B5CCu) {
        ctx->pc = 0x18B5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B5C8u;
        // 0x18b5cc: 0x2602ffec  addiu       $v0, $s0, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967276));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18B5D0u;
        goto label_18b5d0;
    }
    ctx->pc = 0x18B5C8u;
    {
        const bool branch_taken_0x18b5c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18B5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B5C8u;
        // 0x18b5cc: 0x2602ffec  addiu       $v0, $s0, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b5c8) {
            ctx->pc = 0x18B5F8u;
            goto label_18b5f8;
        }
    }
    ctx->pc = 0x18B5D0u;
label_18b5d0:
    // 0x18b5d0: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
label_18b5d4:
    if (ctx->pc == 0x18B5D4u) {
        ctx->pc = 0x18B5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B5D0u;
        // 0x18b5d4: 0x30430003  andi        $v1, $v0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        ctx->pc = 0x18B5D8u;
        goto label_18b5d8;
    }
    ctx->pc = 0x18B5D0u;
    {
        const bool branch_taken_0x18b5d0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x18B5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B5D0u;
        // 0x18b5d4: 0x30430003  andi        $v1, $v0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b5d0) {
            ctx->pc = 0x18B5E4u;
            goto label_18b5e4;
        }
    }
    ctx->pc = 0x18B5D8u;
label_18b5d8:
    // 0x18b5d8: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
label_18b5dc:
    if (ctx->pc == 0x18B5DCu) {
        ctx->pc = 0x18B5E0u;
        goto label_18b5e0;
    }
    ctx->pc = 0x18B5D8u;
    {
        const bool branch_taken_0x18b5d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18b5d8) {
            ctx->pc = 0x18B5E4u;
            goto label_18b5e4;
        }
    }
    ctx->pc = 0x18B5E0u;
label_18b5e0:
    // 0x18b5e0: 0x2463fffc  addiu       $v1, $v1, -0x4
    ctx->pc = 0x18b5e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
label_18b5e4:
    // 0x18b5e4: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x18b5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_18b5e8:
    // 0x18b5e8: 0x24425384  addiu       $v0, $v0, 0x5384
    ctx->pc = 0x18b5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21380));
label_18b5ec:
    // 0x18b5ec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18b5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_18b5f0:
    // 0x18b5f0: 0x90500000  lbu         $s0, 0x0($v0)
    ctx->pc = 0x18b5f0u;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_18b5f4:
    // 0x18b5f4: 0x0  nop
    ctx->pc = 0x18b5f4u;
    // NOP
label_18b5f8:
    // 0x18b5f8: 0xc08f0cc  jal         func_23C330
label_18b5fc:
    if (ctx->pc == 0x18B5FCu) {
        ctx->pc = 0x18B600u;
        goto label_18b600;
    }
    ctx->pc = 0x18B5F8u;
    SET_GPR_U32(ctx, 31, 0x18B600u);
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x18B600u;
label_18b600:
    // 0x18b600: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x18b600u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_18b604:
    // 0x18b604: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x18b604u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
label_18b608:
    // 0x18b608: 0x90244af2  lbu         $a0, 0x4AF2($at)
    ctx->pc = 0x18b608u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 19186)));
label_18b60c:
    // 0x18b60c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18b60cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18b610:
    // 0x18b610: 0x0  nop
    ctx->pc = 0x18b610u;
    // NOP
label_18b614:
    // 0x18b614: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x18b614u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_18b618:
    // 0x18b618: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x18b618u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_18b61c:
    // 0x18b61c: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x18b61cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_18b620:
    // 0x18b620: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x18b620u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_18b624:
    // 0x18b624: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x18b624u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18b628:
    // 0x18b628: 0x0  nop
    ctx->pc = 0x18b628u;
    // NOP
label_18b62c:
    // 0x18b62c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x18b62cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_18b630:
    // 0x18b630: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x18b630u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_18b634:
    // 0x18b634: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x18b634u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_18b638:
    // 0x18b638: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x18b638u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_18b63c:
    // 0x18b63c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x18b63cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_18b640:
    // 0x18b640: 0x0  nop
    ctx->pc = 0x18b640u;
    // NOP
label_18b644:
    // 0x18b644: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18b644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_18b648:
    // 0x18b648: 0xa242023e  sb          $v0, 0x23E($s2)
    ctx->pc = 0x18b648u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 574), (uint8_t)GPR_U32(ctx, 2));
label_18b64c:
    // 0x18b64c: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x18b64cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18b650:
    // 0x18b650: 0x9242023e  lbu         $v0, 0x23E($s2)
    ctx->pc = 0x18b650u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 574)));
label_18b654:
    // 0x18b654: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x18b654u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_18b658:
    // 0x18b658: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x18b658u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_18b65c:
    // 0x18b65c: 0x0  nop
    ctx->pc = 0x18b65cu;
    // NOP
label_18b660:
    // 0x18b660: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x18b660u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_18b664:
    // 0x18b664: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
label_18b668:
    if (ctx->pc == 0x18B668u) {
        ctx->pc = 0x18B66Cu;
        goto label_18b66c;
    }
    ctx->pc = 0x18B664u;
    {
        const bool branch_taken_0x18b664 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x18b664) {
            ctx->pc = 0x18B678u;
            goto label_18b678;
        }
    }
    ctx->pc = 0x18B66Cu;
label_18b66c:
    // 0x18b66c: 0x8e420194  lw          $v0, 0x194($s2)
    ctx->pc = 0x18b66cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 404)));
label_18b670:
    // 0x18b670: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x18b670u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_18b674:
    // 0x18b674: 0xae420194  sw          $v0, 0x194($s2)
    ctx->pc = 0x18b674u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 404), GPR_U32(ctx, 2));
label_18b678:
    // 0x18b678: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x18b678u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_18b67c:
    // 0x18b67c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x18b67cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_18b680:
    // 0x18b680: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x18b680u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_18b684:
    // 0x18b684: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x18b684u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_18b688:
    // 0x18b688: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x18b688u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_18b68c:
    // 0x18b68c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x18b68cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_18b690:
    // 0x18b690: 0x3e00008  jr          $ra
label_18b694:
    if (ctx->pc == 0x18B694u) {
        ctx->pc = 0x18B694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B690u;
        // 0x18b694: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18B698u;
        goto label_18b698;
    }
    ctx->pc = 0x18B690u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18B694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B690u;
        // 0x18b694: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18B690u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18B698u;
label_18b698:
    // 0x18b698: 0x0  nop
    ctx->pc = 0x18b698u;
    // NOP
label_18b69c:
    // 0x18b69c: 0x0  nop
    ctx->pc = 0x18b69cu;
    // NOP
label_18b6a0:
    // 0x18b6a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x18b6a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_18b6a4:
    // 0x18b6a4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x18b6a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_18b6a8:
    // 0x18b6a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18b6a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_18b6ac:
    // 0x18b6ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18b6acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_18b6b0:
    // 0x18b6b0: 0x90830232  lbu         $v1, 0x232($a0)
    ctx->pc = 0x18b6b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 562)));
label_18b6b4:
    // 0x18b6b4: 0x10600080  beqz        $v1, . + 4 + (0x80 << 2)
label_18b6b8:
    if (ctx->pc == 0x18B6B8u) {
        ctx->pc = 0x18B6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B6B4u;
        // 0x18b6b8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18B6BCu;
        goto label_18b6bc;
    }
    ctx->pc = 0x18B6B4u;
    {
        const bool branch_taken_0x18b6b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B6B4u;
        // 0x18b6b8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b6b4) {
            ctx->pc = 0x18B8B8u;
            goto label_18b8b8;
        }
    }
    ctx->pc = 0x18B6BCu;
label_18b6bc:
    // 0x18b6bc: 0x92240240  lbu         $a0, 0x240($s1)
    ctx->pc = 0x18b6bcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 576)));
label_18b6c0:
    // 0x18b6c0: 0x30830070  andi        $v1, $a0, 0x70
    ctx->pc = 0x18b6c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)112);
label_18b6c4:
    // 0x18b6c4: 0x1060001e  beqz        $v1, . + 4 + (0x1E << 2)
label_18b6c8:
    if (ctx->pc == 0x18B6C8u) {
        ctx->pc = 0x18B6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B6C4u;
        // 0x18b6c8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18B6CCu;
        goto label_18b6cc;
    }
    ctx->pc = 0x18B6C4u;
    {
        const bool branch_taken_0x18b6c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B6C4u;
        // 0x18b6c8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b6c4) {
            ctx->pc = 0x18B740u;
            goto label_18b740;
        }
    }
    ctx->pc = 0x18B6CCu;
label_18b6cc:
    // 0x18b6cc: 0x30830010  andi        $v1, $a0, 0x10
    ctx->pc = 0x18b6ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16);
label_18b6d0:
    // 0x18b6d0: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_18b6d4:
    if (ctx->pc == 0x18B6D4u) {
        ctx->pc = 0x18B6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B6D0u;
        // 0x18b6d4: 0x30830020  andi        $v1, $a0, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        ctx->pc = 0x18B6D8u;
        goto label_18b6d8;
    }
    ctx->pc = 0x18B6D0u;
    {
        const bool branch_taken_0x18b6d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B6D0u;
        // 0x18b6d4: 0x30830020  andi        $v1, $a0, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b6d0) {
            ctx->pc = 0x18B6F4u;
            goto label_18b6f4;
        }
    }
    ctx->pc = 0x18B6D8u;
label_18b6d8:
    // 0x18b6d8: 0x38820010  xori        $v0, $a0, 0x10
    ctx->pc = 0x18b6d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)16);
label_18b6dc:
    // 0x18b6dc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x18b6dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_18b6e0:
    // 0x18b6e0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x18b6e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18b6e4:
    // 0x18b6e4: 0xc05482c  jal         func_1520B0
label_18b6e8:
    if (ctx->pc == 0x18B6E8u) {
        ctx->pc = 0x18B6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B6E4u;
        // 0x18b6e8: 0xa2220240  sb          $v0, 0x240($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 576), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18B6ECu;
        goto label_18b6ec;
    }
    ctx->pc = 0x18B6E4u;
    SET_GPR_U32(ctx, 31, 0x18B6ECu);
    ctx->pc = 0x18B6E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18B6E4u;
    // 0x18b6e8: 0xa2220240  sb          $v0, 0x240($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 576), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1520B0u;
    { ctx->pc = 0x1520b0; return; }
    ctx->pc = 0x18B6ECu;
label_18b6ec:
    // 0x18b6ec: 0x10000073  b           . + 4 + (0x73 << 2)
label_18b6f0:
    if (ctx->pc == 0x18B6F0u) {
        ctx->pc = 0x18B6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B6ECu;
        // 0x18b6f0: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18B6F4u;
        goto label_18b6f4;
    }
    ctx->pc = 0x18B6ECu;
    {
        const bool branch_taken_0x18b6ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B6ECu;
        // 0x18b6f0: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b6ec) {
            ctx->pc = 0x18B8BCu;
            goto label_18b8bc;
        }
    }
    ctx->pc = 0x18B6F4u;
label_18b6f4:
    // 0x18b6f4: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_18b6f8:
    if (ctx->pc == 0x18B6F8u) {
        ctx->pc = 0x18B6FCu;
        goto label_18b6fc;
    }
    ctx->pc = 0x18B6F4u;
    {
        const bool branch_taken_0x18b6f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18b6f4) {
            ctx->pc = 0x18B718u;
            goto label_18b718;
        }
    }
    ctx->pc = 0x18B6FCu;
label_18b6fc:
    // 0x18b6fc: 0x38820020  xori        $v0, $a0, 0x20
    ctx->pc = 0x18b6fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)32);
label_18b700:
    // 0x18b700: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x18b700u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_18b704:
    // 0x18b704: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x18b704u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_18b708:
    // 0x18b708: 0xc05482c  jal         func_1520B0
label_18b70c:
    if (ctx->pc == 0x18B70Cu) {
        ctx->pc = 0x18B70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B708u;
        // 0x18b70c: 0xa2220240  sb          $v0, 0x240($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 576), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18B710u;
        goto label_18b710;
    }
    ctx->pc = 0x18B708u;
    SET_GPR_U32(ctx, 31, 0x18B710u);
    ctx->pc = 0x18B70Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18B708u;
    // 0x18b70c: 0xa2220240  sb          $v0, 0x240($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 576), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1520B0u;
    { ctx->pc = 0x1520b0; return; }
    ctx->pc = 0x18B710u;
label_18b710:
    // 0x18b710: 0x10000069  b           . + 4 + (0x69 << 2)
label_18b714:
    if (ctx->pc == 0x18B714u) {
        ctx->pc = 0x18B718u;
        goto label_18b718;
    }
    ctx->pc = 0x18B710u;
    {
        const bool branch_taken_0x18b710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18b710) {
            ctx->pc = 0x18B8B8u;
            goto label_18b8b8;
        }
    }
    ctx->pc = 0x18B718u;
label_18b718:
    // 0x18b718: 0x30830040  andi        $v1, $a0, 0x40
    ctx->pc = 0x18b718u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)64);
label_18b71c:
    // 0x18b71c: 0x10600066  beqz        $v1, . + 4 + (0x66 << 2)
label_18b720:
    if (ctx->pc == 0x18B720u) {
        ctx->pc = 0x18B724u;
        goto label_18b724;
    }
    ctx->pc = 0x18B71Cu;
    {
        const bool branch_taken_0x18b71c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18b71c) {
            ctx->pc = 0x18B8B8u;
            goto label_18b8b8;
        }
    }
    ctx->pc = 0x18B724u;
label_18b724:
    // 0x18b724: 0x38820040  xori        $v0, $a0, 0x40
    ctx->pc = 0x18b724u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)64);
label_18b728:
    // 0x18b728: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x18b728u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_18b72c:
    // 0x18b72c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x18b72cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_18b730:
    // 0x18b730: 0xc05482c  jal         func_1520B0
label_18b734:
    if (ctx->pc == 0x18B734u) {
        ctx->pc = 0x18B734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B730u;
        // 0x18b734: 0xa2220240  sb          $v0, 0x240($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 576), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18B738u;
        goto label_18b738;
    }
    ctx->pc = 0x18B730u;
    SET_GPR_U32(ctx, 31, 0x18B738u);
    ctx->pc = 0x18B734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18B730u;
    // 0x18b734: 0xa2220240  sb          $v0, 0x240($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 576), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1520B0u;
    { ctx->pc = 0x1520b0; return; }
    ctx->pc = 0x18B738u;
label_18b738:
    // 0x18b738: 0x1000005f  b           . + 4 + (0x5F << 2)
label_18b73c:
    if (ctx->pc == 0x18B73Cu) {
        ctx->pc = 0x18B740u;
        goto label_18b740;
    }
    ctx->pc = 0x18B738u;
    {
        const bool branch_taken_0x18b738 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18b738) {
            ctx->pc = 0x18B8B8u;
            goto label_18b8b8;
        }
    }
    ctx->pc = 0x18B740u;
label_18b740:
    // 0x18b740: 0x30830008  andi        $v1, $a0, 0x8
    ctx->pc = 0x18b740u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8);
label_18b744:
    // 0x18b744: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
label_18b748:
    if (ctx->pc == 0x18B748u) {
        ctx->pc = 0x18B74Cu;
        goto label_18b74c;
    }
    ctx->pc = 0x18B744u;
    {
        const bool branch_taken_0x18b744 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18b744) {
            ctx->pc = 0x18B7A0u;
            goto label_18b7a0;
        }
    }
    ctx->pc = 0x18B74Cu;
label_18b74c:
    // 0x18b74c: 0xc08f0cc  jal         func_23C330
label_18b750:
    if (ctx->pc == 0x18B750u) {
        ctx->pc = 0x18B754u;
        goto label_18b754;
    }
    ctx->pc = 0x18B74Cu;
    SET_GPR_U32(ctx, 31, 0x18B754u);
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x18B754u;
label_18b754:
    // 0x18b754: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x18b754u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_18b758:
    // 0x18b758: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x18b758u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
label_18b75c:
    // 0x18b75c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x18b75cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18b760:
    // 0x18b760: 0x0  nop
    ctx->pc = 0x18b760u;
    // NOP
label_18b764:
    // 0x18b764: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x18b764u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_18b768:
    // 0x18b768: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x18b768u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
label_18b76c:
    // 0x18b76c: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x18b76cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_18b770:
    // 0x18b770: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x18b770u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18b774:
    // 0x18b774: 0x0  nop
    ctx->pc = 0x18b774u;
    // NOP
label_18b778:
    // 0x18b778: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x18b778u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_18b77c:
    // 0x18b77c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x18b77cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_18b780:
    // 0x18b780: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x18b780u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_18b784:
    // 0x18b784: 0x0  nop
    ctx->pc = 0x18b784u;
    // NOP
label_18b788:
    // 0x18b788: 0x2861000a  slti        $at, $v1, 0xA
    ctx->pc = 0x18b788u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)10) ? 1 : 0);
label_18b78c:
    // 0x18b78c: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
label_18b790:
    if (ctx->pc == 0x18B790u) {
        ctx->pc = 0x18B790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B78Cu;
        // 0x18b790: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18B794u;
        goto label_18b794;
    }
    ctx->pc = 0x18B78Cu;
    {
        const bool branch_taken_0x18b78c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B78Cu;
        // 0x18b790: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b78c) {
            ctx->pc = 0x18B7A0u;
            goto label_18b7a0;
        }
    }
    ctx->pc = 0x18B794u;
label_18b794:
    // 0x18b794: 0xc05482c  jal         func_1520B0
label_18b798:
    if (ctx->pc == 0x18B798u) {
        ctx->pc = 0x18B798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B794u;
        // 0x18b798: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18B79Cu;
        goto label_18b79c;
    }
    ctx->pc = 0x18B794u;
    SET_GPR_U32(ctx, 31, 0x18B79Cu);
    ctx->pc = 0x18B798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18B794u;
    // 0x18b798: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1520B0u;
    { ctx->pc = 0x1520b0; return; }
    ctx->pc = 0x18B79Cu;
label_18b79c:
    // 0x18b79c: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x18b79cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18b7a0:
    // 0x18b7a0: 0x1600001a  bnez        $s0, . + 4 + (0x1A << 2)
label_18b7a4:
    if (ctx->pc == 0x18B7A4u) {
        ctx->pc = 0x18B7A8u;
        goto label_18b7a8;
    }
    ctx->pc = 0x18B7A0u;
    {
        const bool branch_taken_0x18b7a0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x18b7a0) {
            ctx->pc = 0x18B80Cu;
            goto label_18b80c;
        }
    }
    ctx->pc = 0x18B7A8u;
label_18b7a8:
    // 0x18b7a8: 0x92230240  lbu         $v1, 0x240($s1)
    ctx->pc = 0x18b7a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 576)));
label_18b7ac:
    // 0x18b7ac: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x18b7acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
label_18b7b0:
    // 0x18b7b0: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
label_18b7b4:
    if (ctx->pc == 0x18B7B4u) {
        ctx->pc = 0x18B7B8u;
        goto label_18b7b8;
    }
    ctx->pc = 0x18B7B0u;
    {
        const bool branch_taken_0x18b7b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18b7b0) {
            ctx->pc = 0x18B80Cu;
            goto label_18b80c;
        }
    }
    ctx->pc = 0x18B7B8u;
label_18b7b8:
    // 0x18b7b8: 0xc08f0cc  jal         func_23C330
label_18b7bc:
    if (ctx->pc == 0x18B7BCu) {
        ctx->pc = 0x18B7C0u;
        goto label_18b7c0;
    }
    ctx->pc = 0x18B7B8u;
    SET_GPR_U32(ctx, 31, 0x18B7C0u);
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x18B7C0u;
label_18b7c0:
    // 0x18b7c0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x18b7c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_18b7c4:
    // 0x18b7c4: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x18b7c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
label_18b7c8:
    // 0x18b7c8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x18b7c8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18b7cc:
    // 0x18b7cc: 0x0  nop
    ctx->pc = 0x18b7ccu;
    // NOP
label_18b7d0:
    // 0x18b7d0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x18b7d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_18b7d4:
    // 0x18b7d4: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x18b7d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
label_18b7d8:
    // 0x18b7d8: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x18b7d8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_18b7dc:
    // 0x18b7dc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x18b7dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18b7e0:
    // 0x18b7e0: 0x0  nop
    ctx->pc = 0x18b7e0u;
    // NOP
label_18b7e4:
    // 0x18b7e4: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x18b7e4u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_18b7e8:
    // 0x18b7e8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x18b7e8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_18b7ec:
    // 0x18b7ec: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x18b7ecu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_18b7f0:
    // 0x18b7f0: 0x0  nop
    ctx->pc = 0x18b7f0u;
    // NOP
label_18b7f4:
    // 0x18b7f4: 0x28610014  slti        $at, $v1, 0x14
    ctx->pc = 0x18b7f4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)20) ? 1 : 0);
label_18b7f8:
    // 0x18b7f8: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
label_18b7fc:
    if (ctx->pc == 0x18B7FCu) {
        ctx->pc = 0x18B7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B7F8u;
        // 0x18b7fc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18B800u;
        goto label_18b800;
    }
    ctx->pc = 0x18B7F8u;
    {
        const bool branch_taken_0x18b7f8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B7F8u;
        // 0x18b7fc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b7f8) {
            ctx->pc = 0x18B80Cu;
            goto label_18b80c;
        }
    }
    ctx->pc = 0x18B800u;
label_18b800:
    // 0x18b800: 0xc05482c  jal         func_1520B0
label_18b804:
    if (ctx->pc == 0x18B804u) {
        ctx->pc = 0x18B804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B800u;
        // 0x18b804: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18B808u;
        goto label_18b808;
    }
    ctx->pc = 0x18B800u;
    SET_GPR_U32(ctx, 31, 0x18B808u);
    ctx->pc = 0x18B804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18B800u;
    // 0x18b804: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1520B0u;
    { ctx->pc = 0x1520b0; return; }
    ctx->pc = 0x18B808u;
label_18b808:
    // 0x18b808: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x18b808u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18b80c:
    // 0x18b80c: 0x1600002a  bnez        $s0, . + 4 + (0x2A << 2)
label_18b810:
    if (ctx->pc == 0x18B810u) {
        ctx->pc = 0x18B814u;
        goto label_18b814;
    }
    ctx->pc = 0x18B80Cu;
    {
        const bool branch_taken_0x18b80c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x18b80c) {
            ctx->pc = 0x18B8B8u;
            goto label_18b8b8;
        }
    }
    ctx->pc = 0x18B814u;
label_18b814:
    // 0x18b814: 0x92230240  lbu         $v1, 0x240($s1)
    ctx->pc = 0x18b814u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 576)));
label_18b818:
    // 0x18b818: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x18b818u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_18b81c:
    // 0x18b81c: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
label_18b820:
    if (ctx->pc == 0x18B820u) {
        ctx->pc = 0x18B820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B81Cu;
        // 0x18b820: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18B824u;
        goto label_18b824;
    }
    ctx->pc = 0x18B81Cu;
    {
        const bool branch_taken_0x18b81c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B81Cu;
        // 0x18b820: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b81c) {
            ctx->pc = 0x18B8B0u;
            goto label_18b8b0;
        }
    }
    ctx->pc = 0x18B824u;
label_18b824:
    // 0x18b824: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x18b824u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_18b828:
    // 0x18b828: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_18b82c:
    if (ctx->pc == 0x18B82Cu) {
        ctx->pc = 0x18B82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B828u;
        // 0x18b82c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18B830u;
        goto label_18b830;
    }
    ctx->pc = 0x18B828u;
    {
        const bool branch_taken_0x18b828 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B828u;
        // 0x18b82c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b828) {
            ctx->pc = 0x18B8A0u;
            goto label_18b8a0;
        }
    }
    ctx->pc = 0x18B830u;
label_18b830:
    // 0x18b830: 0xc08f0cc  jal         func_23C330
label_18b834:
    if (ctx->pc == 0x18B834u) {
        ctx->pc = 0x18B838u;
        goto label_18b838;
    }
    ctx->pc = 0x18B830u;
    SET_GPR_U32(ctx, 31, 0x18B838u);
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x18B838u;
label_18b838:
    // 0x18b838: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x18b838u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_18b83c:
    // 0x18b83c: 0x0  nop
    ctx->pc = 0x18b83cu;
    // NOP
label_18b840:
    // 0x18b840: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x18b840u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_18b844:
    // 0x18b844: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x18b844u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
label_18b848:
    // 0x18b848: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18b848u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18b84c:
    // 0x18b84c: 0x0  nop
    ctx->pc = 0x18b84cu;
    // NOP
label_18b850:
    // 0x18b850: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x18b850u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_18b854:
    // 0x18b854: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x18b854u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_18b858:
    // 0x18b858: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18b858u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18b85c:
    // 0x18b85c: 0x0  nop
    ctx->pc = 0x18b85cu;
    // NOP
label_18b860:
    // 0x18b860: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x18b860u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_18b864:
    // 0x18b864: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x18b864u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_18b868:
    // 0x18b868: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x18b868u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_18b86c:
    // 0x18b86c: 0x0  nop
    ctx->pc = 0x18b86cu;
    // NOP
label_18b870:
    // 0x18b870: 0x28410032  slti        $at, $v0, 0x32
    ctx->pc = 0x18b870u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)50) ? 1 : 0);
label_18b874:
    // 0x18b874: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
label_18b878:
    if (ctx->pc == 0x18B878u) {
        ctx->pc = 0x18B878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B874u;
        // 0x18b878: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18B87Cu;
        goto label_18b87c;
    }
    ctx->pc = 0x18B874u;
    {
        const bool branch_taken_0x18b874 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B874u;
        // 0x18b878: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b874) {
            ctx->pc = 0x18B890u;
            goto label_18b890;
        }
    }
    ctx->pc = 0x18B87Cu;
label_18b87c:
    // 0x18b87c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x18b87cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_18b880:
    // 0x18b880: 0xc05482c  jal         func_1520B0
label_18b884:
    if (ctx->pc == 0x18B884u) {
        ctx->pc = 0x18B884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B880u;
        // 0x18b884: 0x24040013  addiu       $a0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18B888u;
        goto label_18b888;
    }
    ctx->pc = 0x18B880u;
    SET_GPR_U32(ctx, 31, 0x18B888u);
    ctx->pc = 0x18B884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18B880u;
    // 0x18b884: 0x24040013  addiu       $a0, $zero, 0x13 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1520B0u;
    { ctx->pc = 0x1520b0; return; }
    ctx->pc = 0x18B888u;
label_18b888:
    // 0x18b888: 0x1000000b  b           . + 4 + (0xB << 2)
label_18b88c:
    if (ctx->pc == 0x18B88Cu) {
        ctx->pc = 0x18B890u;
        goto label_18b890;
    }
    ctx->pc = 0x18B888u;
    {
        const bool branch_taken_0x18b888 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18b888) {
            ctx->pc = 0x18B8B8u;
            goto label_18b8b8;
        }
    }
    ctx->pc = 0x18B890u;
label_18b890:
    // 0x18b890: 0xc05482c  jal         func_1520B0
label_18b894:
    if (ctx->pc == 0x18B894u) {
        ctx->pc = 0x18B894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B890u;
        // 0x18b894: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18B898u;
        goto label_18b898;
    }
    ctx->pc = 0x18B890u;
    SET_GPR_U32(ctx, 31, 0x18B898u);
    ctx->pc = 0x18B894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18B890u;
    // 0x18b894: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1520B0u;
    { ctx->pc = 0x1520b0; return; }
    ctx->pc = 0x18B898u;
label_18b898:
    // 0x18b898: 0x10000007  b           . + 4 + (0x7 << 2)
label_18b89c:
    if (ctx->pc == 0x18B89Cu) {
        ctx->pc = 0x18B8A0u;
        goto label_18b8a0;
    }
    ctx->pc = 0x18B898u;
    {
        const bool branch_taken_0x18b898 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18b898) {
            ctx->pc = 0x18B8B8u;
            goto label_18b8b8;
        }
    }
    ctx->pc = 0x18B8A0u;
label_18b8a0:
    // 0x18b8a0: 0xc05482c  jal         func_1520B0
label_18b8a4:
    if (ctx->pc == 0x18B8A4u) {
        ctx->pc = 0x18B8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B8A0u;
        // 0x18b8a4: 0x24040013  addiu       $a0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18B8A8u;
        goto label_18b8a8;
    }
    ctx->pc = 0x18B8A0u;
    SET_GPR_U32(ctx, 31, 0x18B8A8u);
    ctx->pc = 0x18B8A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18B8A0u;
    // 0x18b8a4: 0x24040013  addiu       $a0, $zero, 0x13 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1520B0u;
    { ctx->pc = 0x1520b0; return; }
    ctx->pc = 0x18B8A8u;
label_18b8a8:
    // 0x18b8a8: 0x10000003  b           . + 4 + (0x3 << 2)
label_18b8ac:
    if (ctx->pc == 0x18B8ACu) {
        ctx->pc = 0x18B8B0u;
        goto label_18b8b0;
    }
    ctx->pc = 0x18B8A8u;
    {
        const bool branch_taken_0x18b8a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18b8a8) {
            ctx->pc = 0x18B8B8u;
            goto label_18b8b8;
        }
    }
    ctx->pc = 0x18B8B0u;
label_18b8b0:
    // 0x18b8b0: 0xc05482c  jal         func_1520B0
label_18b8b4:
    if (ctx->pc == 0x18B8B4u) {
        ctx->pc = 0x18B8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B8B0u;
        // 0x18b8b4: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18B8B8u;
        goto label_18b8b8;
    }
    ctx->pc = 0x18B8B0u;
    SET_GPR_U32(ctx, 31, 0x18B8B8u);
    ctx->pc = 0x18B8B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18B8B0u;
    // 0x18b8b4: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1520B0u;
    { ctx->pc = 0x1520b0; return; }
    ctx->pc = 0x18B8B8u;
label_18b8b8:
    // 0x18b8b8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x18b8b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_18b8bc:
    // 0x18b8bc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18b8bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_18b8c0:
    // 0x18b8c0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18b8c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_18b8c4:
    // 0x18b8c4: 0x3e00008  jr          $ra
label_18b8c8:
    if (ctx->pc == 0x18B8C8u) {
        ctx->pc = 0x18B8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B8C4u;
        // 0x18b8c8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18B8CCu;
        goto label_18b8cc;
    }
    ctx->pc = 0x18B8C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18B8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B8C4u;
        // 0x18b8c8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18B8C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18B8CCu;
label_18b8cc:
    // 0x18b8cc: 0x0  nop
    ctx->pc = 0x18b8ccu;
    // NOP
label_18b8d0:
    // 0x18b8d0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x18b8d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_18b8d4:
    // 0x18b8d4: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x18b8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
label_18b8d8:
    // 0x18b8d8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x18b8d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_18b8dc:
    // 0x18b8dc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x18b8dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_18b8e0:
    // 0x18b8e0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x18b8e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_18b8e4:
    // 0x18b8e4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x18b8e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_18b8e8:
    // 0x18b8e8: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x18b8e8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_18b8ec:
    // 0x18b8ec: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x18b8ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18b8f0:
    // 0x18b8f0: 0x8c830024  lw          $v1, 0x24($a0)
    ctx->pc = 0x18b8f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
label_18b8f4:
    // 0x18b8f4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x18b8f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_18b8f8:
    // 0x18b8f8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x18b8f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_18b8fc:
    // 0x18b8fc: 0x1040004b  beqz        $v0, . + 4 + (0x4B << 2)
label_18b900:
    if (ctx->pc == 0x18B900u) {
        ctx->pc = 0x18B900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B8FCu;
        // 0x18b900: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x18B904u;
        goto label_18b904;
    }
    ctx->pc = 0x18B8FCu;
    {
        const bool branch_taken_0x18b8fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B8FCu;
        // 0x18b900: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b8fc) {
            ctx->pc = 0x18BA2Cu;
            goto label_18ba2c;
        }
    }
    ctx->pc = 0x18B904u;
label_18b904:
    // 0x18b904: 0x8e220038  lw          $v0, 0x38($s1)
    ctx->pc = 0x18b904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
label_18b908:
    // 0x18b908: 0x10400048  beqz        $v0, . + 4 + (0x48 << 2)
label_18b90c:
    if (ctx->pc == 0x18B90Cu) {
        ctx->pc = 0x18B910u;
        goto label_18b910;
    }
    ctx->pc = 0x18B908u;
    {
        const bool branch_taken_0x18b908 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18b908) {
            ctx->pc = 0x18BA2Cu;
            goto label_18ba2c;
        }
    }
    ctx->pc = 0x18B910u;
label_18b910:
    // 0x18b910: 0xc4410044  lwc1        $f1, 0x44($v0)
    ctx->pc = 0x18b910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_18b914:
    // 0x18b914: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x18b914u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_18b918:
    // 0x18b918: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x18b918u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_18b91c:
    // 0x18b91c: 0x4601a301  sub.s       $f12, $f20, $f1
    ctx->pc = 0x18b91cu;
    ctx->f[12] = FPU_SUB_S(ctx->f[20], ctx->f[1]);
label_18b920:
    // 0x18b920: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18b920u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18b924:
    // 0x18b924: 0x0  nop
    ctx->pc = 0x18b924u;
    // NOP
label_18b928:
    // 0x18b928: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x18b928u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18b92c:
    // 0x18b92c: 0x0  nop
    ctx->pc = 0x18b92cu;
    // NOP
label_18b930:
    // 0x18b930: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_18b934:
    if (ctx->pc == 0x18B934u) {
        ctx->pc = 0x18B938u;
        goto label_18b938;
    }
    ctx->pc = 0x18B930u;
    {
        const bool branch_taken_0x18b930 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x18b930) {
            ctx->pc = 0x18B94Cu;
            goto label_18b94c;
        }
    }
    ctx->pc = 0x18B938u;
label_18b938:
    // 0x18b938: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x18b938u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_18b93c:
    // 0x18b93c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x18b93cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_18b940:
    // 0x18b940: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18b940u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18b944:
    // 0x18b944: 0x1000000d  b           . + 4 + (0xD << 2)
label_18b948:
    if (ctx->pc == 0x18B948u) {
        ctx->pc = 0x18B948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B944u;
        // 0x18b948: 0x46006301  sub.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x18B94Cu;
        goto label_18b94c;
    }
    ctx->pc = 0x18B944u;
    {
        const bool branch_taken_0x18b944 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B944u;
        // 0x18b948: 0x46006301  sub.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b944) {
            ctx->pc = 0x18B97Cu;
            goto label_18b97c;
        }
    }
    ctx->pc = 0x18B94Cu;
label_18b94c:
    // 0x18b94c: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x18b94cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
label_18b950:
    // 0x18b950: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x18b950u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_18b954:
    // 0x18b954: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18b954u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18b958:
    // 0x18b958: 0x0  nop
    ctx->pc = 0x18b958u;
    // NOP
label_18b95c:
    // 0x18b95c: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x18b95cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18b960:
    // 0x18b960: 0x0  nop
    ctx->pc = 0x18b960u;
    // NOP
label_18b964:
    // 0x18b964: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_18b968:
    if (ctx->pc == 0x18B968u) {
        ctx->pc = 0x18B968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B964u;
        // 0x18b968: 0x3c0240c9  lui         $v0, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18B96Cu;
        goto label_18b96c;
    }
    ctx->pc = 0x18B964u;
    {
        const bool branch_taken_0x18b964 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x18B968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B964u;
        // 0x18b968: 0x3c0240c9  lui         $v0, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b964) {
            ctx->pc = 0x18B97Cu;
            goto label_18b97c;
        }
    }
    ctx->pc = 0x18B96Cu;
label_18b96c:
    // 0x18b96c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x18b96cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_18b970:
    // 0x18b970: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18b970u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18b974:
    // 0x18b974: 0x10000001  b           . + 4 + (0x1 << 2)
label_18b978:
    if (ctx->pc == 0x18B978u) {
        ctx->pc = 0x18B978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B974u;
        // 0x18b978: 0x460c0300  add.s       $f12, $f0, $f12 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x18B97Cu;
        goto label_18b97c;
    }
    ctx->pc = 0x18B974u;
    {
        const bool branch_taken_0x18b974 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B974u;
        // 0x18b978: 0x460c0300  add.s       $f12, $f0, $f12 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b974) {
            ctx->pc = 0x18B97Cu;
            goto label_18b97c;
        }
    }
    ctx->pc = 0x18B97Cu;
label_18b97c:
    // 0x18b97c: 0xc06d448  jal         func_1B5120
label_18b980:
    if (ctx->pc == 0x18B980u) {
        ctx->pc = 0x18B984u;
        goto label_18b984;
    }
    ctx->pc = 0x18B97Cu;
    SET_GPR_U32(ctx, 31, 0x18B984u);
    ctx->pc = 0x1B5120u;
    { ctx->pc = 0x1b5120; return; }
    ctx->pc = 0x18B984u;
label_18b984:
    // 0x18b984: 0x3c023e32  lui         $v0, 0x3E32
    ctx->pc = 0x18b984u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15922 << 16));
label_18b988:
    // 0x18b988: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x18b988u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_18b98c:
    // 0x18b98c: 0x3442b8c3  ori         $v0, $v0, 0xB8C3
    ctx->pc = 0x18b98cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)47299);
label_18b990:
    // 0x18b990: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18b990u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18b994:
    // 0x18b994: 0x0  nop
    ctx->pc = 0x18b994u;
    // NOP
label_18b998:
    // 0x18b998: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x18b998u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18b99c:
    // 0x18b99c: 0x0  nop
    ctx->pc = 0x18b99cu;
    // NOP
label_18b9a0:
    // 0x18b9a0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_18b9a4:
    if (ctx->pc == 0x18B9A4u) {
        ctx->pc = 0x18B9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B9A0u;
        // 0x18b9a4: 0x3c023fc9  lui         $v0, 0x3FC9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18B9A8u;
        goto label_18b9a8;
    }
    ctx->pc = 0x18B9A0u;
    {
        const bool branch_taken_0x18b9a0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x18B9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B9A0u;
        // 0x18b9a4: 0x3c023fc9  lui         $v0, 0x3FC9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b9a0) {
            ctx->pc = 0x18B9B0u;
            goto label_18b9b0;
        }
    }
    ctx->pc = 0x18B9A8u;
label_18b9a8:
    // 0x18b9a8: 0x1000006c  b           . + 4 + (0x6C << 2)
label_18b9ac:
    if (ctx->pc == 0x18B9ACu) {
        ctx->pc = 0x18B9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B9A8u;
        // 0x18b9ac: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18B9B0u;
        goto label_18b9b0;
    }
    ctx->pc = 0x18B9A8u;
    {
        const bool branch_taken_0x18b9a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B9A8u;
        // 0x18b9ac: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b9a8) {
            ctx->pc = 0x18BB5Cu;
            goto label_18bb5c;
        }
    }
    ctx->pc = 0x18B9B0u;
label_18b9b0:
    // 0x18b9b0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x18b9b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_18b9b4:
    // 0x18b9b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18b9b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18b9b8:
    // 0x18b9b8: 0x0  nop
    ctx->pc = 0x18b9b8u;
    // NOP
label_18b9bc:
    // 0x18b9bc: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x18b9bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18b9c0:
    // 0x18b9c0: 0x0  nop
    ctx->pc = 0x18b9c0u;
    // NOP
label_18b9c4:
    // 0x18b9c4: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_18b9c8:
    if (ctx->pc == 0x18B9C8u) {
        ctx->pc = 0x18B9CCu;
        goto label_18b9cc;
    }
    ctx->pc = 0x18B9C4u;
    {
        const bool branch_taken_0x18b9c4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x18b9c4) {
            ctx->pc = 0x18B9E0u;
            goto label_18b9e0;
        }
    }
    ctx->pc = 0x18B9CCu;
label_18b9cc:
    // 0x18b9cc: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x18b9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_18b9d0:
    // 0x18b9d0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x18b9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_18b9d4:
    // 0x18b9d4: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x18b9d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
label_18b9d8:
    // 0x18b9d8: 0x14400061  bnez        $v0, . + 4 + (0x61 << 2)
label_18b9dc:
    if (ctx->pc == 0x18B9DCu) {
        ctx->pc = 0x18B9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B9D8u;
        // 0x18b9dc: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18B9E0u;
        goto label_18b9e0;
    }
    ctx->pc = 0x18B9D8u;
    {
        const bool branch_taken_0x18b9d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18B9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B9D8u;
        // 0x18b9dc: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b9d8) {
            ctx->pc = 0x18BB60u;
            goto label_18bb60;
        }
    }
    ctx->pc = 0x18B9E0u;
label_18b9e0:
    // 0x18b9e0: 0x4409a000  mfc1        $t1, $f20
    ctx->pc = 0x18b9e0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
label_18b9e4:
    // 0x18b9e4: 0x48a90800  qmtc2.ni    $t1, $vf1
    ctx->pc = 0x18b9e4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 9));
label_18b9e8:
    // 0x18b9e8: 0x4a000138  vcallms     0x20
    ctx->pc = 0x18b9e8u;
    {     ctx->vu0_tpc = 0x20;     runtime->executeVU0Microprogram(rdram, ctx, 0x20); }
label_18b9ec:
    // 0x18b9ec: 0x48290801  qmfc2.i     $t1, $vf1
    ctx->pc = 0x18b9ecu;
    SET_GPR_VEC(ctx, 9, _mm_castps_si128(ctx->vu0_vf[1]));
label_18b9f0:
    // 0x18b9f0: 0x44890800  mtc1        $t1, $f1
    ctx->pc = 0x18b9f0u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_18b9f4:
    // 0x18b9f4: 0x48291000  qmfc2.ni    $t1, $vf2
    ctx->pc = 0x18b9f4u;
    SET_GPR_VEC(ctx, 9, _mm_castps_si128(ctx->vu0_vf[2]));
label_18b9f8:
    // 0x18b9f8: 0x44891000  mtc1        $t1, $f2
    ctx->pc = 0x18b9f8u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_18b9fc:
    // 0x18b9fc: 0x3c0242fe  lui         $v0, 0x42FE
    ctx->pc = 0x18b9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17150 << 16));
label_18ba00:
    // 0x18ba00: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18ba00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18ba04:
    // 0x18ba04: 0x0  nop
    ctx->pc = 0x18ba04u;
    // NOP
label_18ba08:
    // 0x18ba08: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x18ba08u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_18ba0c:
    // 0x18ba0c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x18ba0cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_18ba10:
    // 0x18ba10: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x18ba10u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_18ba14:
    // 0x18ba14: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x18ba14u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_18ba18:
    // 0x18ba18: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x18ba18u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_18ba1c:
    // 0x18ba1c: 0xa622019c  sh          $v0, 0x19C($s1)
    ctx->pc = 0x18ba1cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 412), (uint16_t)GPR_U32(ctx, 2));
label_18ba20:
    // 0x18ba20: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x18ba20u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_18ba24:
    // 0x18ba24: 0x1000004d  b           . + 4 + (0x4D << 2)
label_18ba28:
    if (ctx->pc == 0x18BA28u) {
        ctx->pc = 0x18BA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BA24u;
        // 0x18ba28: 0xa622019e  sh          $v0, 0x19E($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 414), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18BA2Cu;
        goto label_18ba2c;
    }
    ctx->pc = 0x18BA24u;
    {
        const bool branch_taken_0x18ba24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18BA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BA24u;
        // 0x18ba28: 0xa622019e  sh          $v0, 0x19E($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 414), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ba24) {
            ctx->pc = 0x18BB5Cu;
            goto label_18bb5c;
        }
    }
    ctx->pc = 0x18BA2Cu;
label_18ba2c:
    // 0x18ba2c: 0x922201a2  lbu         $v0, 0x1A2($s1)
    ctx->pc = 0x18ba2cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 418)));
label_18ba30:
    // 0x18ba30: 0x10400048  beqz        $v0, . + 4 + (0x48 << 2)
label_18ba34:
    if (ctx->pc == 0x18BA34u) {
        ctx->pc = 0x18BA38u;
        goto label_18ba38;
    }
    ctx->pc = 0x18BA30u;
    {
        const bool branch_taken_0x18ba30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18ba30) {
            ctx->pc = 0x18BB54u;
            goto label_18bb54;
        }
    }
    ctx->pc = 0x18BA38u;
label_18ba38:
    // 0x18ba38: 0xc6210044  lwc1        $f1, 0x44($s1)
    ctx->pc = 0x18ba38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_18ba3c:
    // 0x18ba3c: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x18ba3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_18ba40:
    // 0x18ba40: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x18ba40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_18ba44:
    // 0x18ba44: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18ba44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18ba48:
    // 0x18ba48: 0x0  nop
    ctx->pc = 0x18ba48u;
    // NOP
label_18ba4c:
    // 0x18ba4c: 0x4601a301  sub.s       $f12, $f20, $f1
    ctx->pc = 0x18ba4cu;
    ctx->f[12] = FPU_SUB_S(ctx->f[20], ctx->f[1]);
label_18ba50:
    // 0x18ba50: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x18ba50u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18ba54:
    // 0x18ba54: 0x0  nop
    ctx->pc = 0x18ba54u;
    // NOP
label_18ba58:
    // 0x18ba58: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_18ba5c:
    if (ctx->pc == 0x18BA5Cu) {
        ctx->pc = 0x18BA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BA58u;
        // 0x18ba5c: 0x3c02c049  lui         $v0, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18BA60u;
        goto label_18ba60;
    }
    ctx->pc = 0x18BA58u;
    {
        const bool branch_taken_0x18ba58 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x18BA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BA58u;
        // 0x18ba5c: 0x3c02c049  lui         $v0, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ba58) {
            ctx->pc = 0x18BA74u;
            goto label_18ba74;
        }
    }
    ctx->pc = 0x18BA60u;
label_18ba60:
    // 0x18ba60: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x18ba60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_18ba64:
    // 0x18ba64: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x18ba64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_18ba68:
    // 0x18ba68: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18ba68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18ba6c:
    // 0x18ba6c: 0x1000000d  b           . + 4 + (0xD << 2)
label_18ba70:
    if (ctx->pc == 0x18BA70u) {
        ctx->pc = 0x18BA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BA6Cu;
        // 0x18ba70: 0x46006301  sub.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x18BA74u;
        goto label_18ba74;
    }
    ctx->pc = 0x18BA6Cu;
    {
        const bool branch_taken_0x18ba6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18BA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BA6Cu;
        // 0x18ba70: 0x46006301  sub.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ba6c) {
            ctx->pc = 0x18BAA4u;
            goto label_18baa4;
        }
    }
    ctx->pc = 0x18BA74u;
label_18ba74:
    // 0x18ba74: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x18ba74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_18ba78:
    // 0x18ba78: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18ba78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18ba7c:
    // 0x18ba7c: 0x0  nop
    ctx->pc = 0x18ba7cu;
    // NOP
label_18ba80:
    // 0x18ba80: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x18ba80u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18ba84:
    // 0x18ba84: 0x0  nop
    ctx->pc = 0x18ba84u;
    // NOP
label_18ba88:
    // 0x18ba88: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_18ba8c:
    if (ctx->pc == 0x18BA8Cu) {
        ctx->pc = 0x18BA90u;
        goto label_18ba90;
    }
    ctx->pc = 0x18BA88u;
    {
        const bool branch_taken_0x18ba88 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x18ba88) {
            ctx->pc = 0x18BAA4u;
            goto label_18baa4;
        }
    }
    ctx->pc = 0x18BA90u;
label_18ba90:
    // 0x18ba90: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x18ba90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_18ba94:
    // 0x18ba94: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x18ba94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_18ba98:
    // 0x18ba98: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18ba98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18ba9c:
    // 0x18ba9c: 0x10000001  b           . + 4 + (0x1 << 2)
label_18baa0:
    if (ctx->pc == 0x18BAA0u) {
        ctx->pc = 0x18BAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BA9Cu;
        // 0x18baa0: 0x460c0300  add.s       $f12, $f0, $f12 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x18BAA4u;
        goto label_18baa4;
    }
    ctx->pc = 0x18BA9Cu;
    {
        const bool branch_taken_0x18ba9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18BAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BA9Cu;
        // 0x18baa0: 0x460c0300  add.s       $f12, $f0, $f12 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ba9c) {
            ctx->pc = 0x18BAA4u;
            goto label_18baa4;
        }
    }
    ctx->pc = 0x18BAA4u;
label_18baa4:
    // 0x18baa4: 0xc06d448  jal         func_1B5120
label_18baa8:
    if (ctx->pc == 0x18BAA8u) {
        ctx->pc = 0x18BAACu;
        goto label_18baac;
    }
    ctx->pc = 0x18BAA4u;
    SET_GPR_U32(ctx, 31, 0x18BAACu);
    ctx->pc = 0x1B5120u;
    { ctx->pc = 0x1b5120; return; }
    ctx->pc = 0x18BAACu;
label_18baac:
    // 0x18baac: 0x3c023e32  lui         $v0, 0x3E32
    ctx->pc = 0x18baacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15922 << 16));
label_18bab0:
    // 0x18bab0: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x18bab0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_18bab4:
    // 0x18bab4: 0x3442b8c3  ori         $v0, $v0, 0xB8C3
    ctx->pc = 0x18bab4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)47299);
label_18bab8:
    // 0x18bab8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18bab8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18babc:
    // 0x18babc: 0x0  nop
    ctx->pc = 0x18babcu;
    // NOP
label_18bac0:
    // 0x18bac0: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x18bac0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18bac4:
    // 0x18bac4: 0x0  nop
    ctx->pc = 0x18bac4u;
    // NOP
label_18bac8:
    // 0x18bac8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_18bacc:
    if (ctx->pc == 0x18BACCu) {
        ctx->pc = 0x18BACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BAC8u;
        // 0x18bacc: 0x3c023fc9  lui         $v0, 0x3FC9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18BAD0u;
        goto label_18bad0;
    }
    ctx->pc = 0x18BAC8u;
    {
        const bool branch_taken_0x18bac8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x18BACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BAC8u;
        // 0x18bacc: 0x3c023fc9  lui         $v0, 0x3FC9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18bac8) {
            ctx->pc = 0x18BAD8u;
            goto label_18bad8;
        }
    }
    ctx->pc = 0x18BAD0u;
label_18bad0:
    // 0x18bad0: 0x10000022  b           . + 4 + (0x22 << 2)
label_18bad4:
    if (ctx->pc == 0x18BAD4u) {
        ctx->pc = 0x18BAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BAD0u;
        // 0x18bad4: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18BAD8u;
        goto label_18bad8;
    }
    ctx->pc = 0x18BAD0u;
    {
        const bool branch_taken_0x18bad0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18BAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BAD0u;
        // 0x18bad4: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18bad0) {
            ctx->pc = 0x18BB5Cu;
            goto label_18bb5c;
        }
    }
    ctx->pc = 0x18BAD8u;
label_18bad8:
    // 0x18bad8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x18bad8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_18badc:
    // 0x18badc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18badcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18bae0:
    // 0x18bae0: 0x0  nop
    ctx->pc = 0x18bae0u;
    // NOP
label_18bae4:
    // 0x18bae4: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x18bae4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18bae8:
    // 0x18bae8: 0x0  nop
    ctx->pc = 0x18bae8u;
    // NOP
label_18baec:
    // 0x18baec: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_18baf0:
    if (ctx->pc == 0x18BAF0u) {
        ctx->pc = 0x18BAF4u;
        goto label_18baf4;
    }
    ctx->pc = 0x18BAECu;
    {
        const bool branch_taken_0x18baec = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x18baec) {
            ctx->pc = 0x18BB08u;
            goto label_18bb08;
        }
    }
    ctx->pc = 0x18BAF4u;
label_18baf4:
    // 0x18baf4: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x18baf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_18baf8:
    // 0x18baf8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x18baf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_18bafc:
    // 0x18bafc: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x18bafcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
label_18bb00:
    // 0x18bb00: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
label_18bb04:
    if (ctx->pc == 0x18BB04u) {
        ctx->pc = 0x18BB08u;
        goto label_18bb08;
    }
    ctx->pc = 0x18BB00u;
    {
        const bool branch_taken_0x18bb00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18bb00) {
            ctx->pc = 0x18BB5Cu;
            goto label_18bb5c;
        }
    }
    ctx->pc = 0x18BB08u;
label_18bb08:
    // 0x18bb08: 0x4409a000  mfc1        $t1, $f20
    ctx->pc = 0x18bb08u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
label_18bb0c:
    // 0x18bb0c: 0x48a90800  qmtc2.ni    $t1, $vf1
    ctx->pc = 0x18bb0cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 9));
label_18bb10:
    // 0x18bb10: 0x4a000138  vcallms     0x20
    ctx->pc = 0x18bb10u;
    {     ctx->vu0_tpc = 0x20;     runtime->executeVU0Microprogram(rdram, ctx, 0x20); }
label_18bb14:
    // 0x18bb14: 0x48290801  qmfc2.i     $t1, $vf1
    ctx->pc = 0x18bb14u;
    SET_GPR_VEC(ctx, 9, _mm_castps_si128(ctx->vu0_vf[1]));
label_18bb18:
    // 0x18bb18: 0x44890800  mtc1        $t1, $f1
    ctx->pc = 0x18bb18u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_18bb1c:
    // 0x18bb1c: 0x48291000  qmfc2.ni    $t1, $vf2
    ctx->pc = 0x18bb1cu;
    SET_GPR_VEC(ctx, 9, _mm_castps_si128(ctx->vu0_vf[2]));
label_18bb20:
    // 0x18bb20: 0x44891000  mtc1        $t1, $f2
    ctx->pc = 0x18bb20u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_18bb24:
    // 0x18bb24: 0x3c0242fe  lui         $v0, 0x42FE
    ctx->pc = 0x18bb24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17150 << 16));
label_18bb28:
    // 0x18bb28: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18bb28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18bb2c:
    // 0x18bb2c: 0x0  nop
    ctx->pc = 0x18bb2cu;
    // NOP
label_18bb30:
    // 0x18bb30: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x18bb30u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_18bb34:
    // 0x18bb34: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x18bb34u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_18bb38:
    // 0x18bb38: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x18bb38u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_18bb3c:
    // 0x18bb3c: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x18bb3cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_18bb40:
    // 0x18bb40: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x18bb40u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_18bb44:
    // 0x18bb44: 0xa622019c  sh          $v0, 0x19C($s1)
    ctx->pc = 0x18bb44u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 412), (uint16_t)GPR_U32(ctx, 2));
label_18bb48:
    // 0x18bb48: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x18bb48u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_18bb4c:
    // 0x18bb4c: 0x10000003  b           . + 4 + (0x3 << 2)
label_18bb50:
    if (ctx->pc == 0x18BB50u) {
        ctx->pc = 0x18BB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BB4Cu;
        // 0x18bb50: 0xa622019e  sh          $v0, 0x19E($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 414), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18BB54u;
        goto label_18bb54;
    }
    ctx->pc = 0x18BB4Cu;
    {
        const bool branch_taken_0x18bb4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18BB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BB4Cu;
        // 0x18bb50: 0xa622019e  sh          $v0, 0x19E($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 414), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18bb4c) {
            ctx->pc = 0x18BB5Cu;
            goto label_18bb5c;
        }
    }
    ctx->pc = 0x18BB54u;
label_18bb54:
    // 0x18bb54: 0xe6340044  swc1        $f20, 0x44($s1)
    ctx->pc = 0x18bb54u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 68), bits); }
label_18bb58:
    // 0x18bb58: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x18bb58u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18bb5c:
    // 0x18bb5c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x18bb5cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_18bb60:
    // 0x18bb60: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x18bb60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_18bb64:
    // 0x18bb64: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x18bb64u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_18bb68:
    // 0x18bb68: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x18bb68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_18bb6c:
    // 0x18bb6c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x18bb6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_18bb70:
    // 0x18bb70: 0x3e00008  jr          $ra
label_18bb74:
    if (ctx->pc == 0x18BB74u) {
        ctx->pc = 0x18BB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BB70u;
        // 0x18bb74: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18BB78u;
        goto label_18bb78;
    }
    ctx->pc = 0x18BB70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18BB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BB70u;
        // 0x18bb74: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18BB70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18BB78u;
label_18bb78:
    // 0x18bb78: 0x0  nop
    ctx->pc = 0x18bb78u;
    // NOP
label_18bb7c:
    // 0x18bb7c: 0x0  nop
    ctx->pc = 0x18bb7cu;
    // NOP
label_18bb80:
    // 0x18bb80: 0x8483019c  lh          $v1, 0x19C($a0)
    ctx->pc = 0x18bb80u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 412)));
label_18bb84:
    // 0x18bb84: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
label_18bb88:
    if (ctx->pc == 0x18BB88u) {
        ctx->pc = 0x18BB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BB84u;
        // 0x18bb88: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18BB8Cu;
        goto label_18bb8c;
    }
    ctx->pc = 0x18BB84u;
    {
        const bool branch_taken_0x18bb84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x18BB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BB84u;
        // 0x18bb88: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18bb84) {
            ctx->pc = 0x18BB98u;
            goto label_18bb98;
        }
    }
    ctx->pc = 0x18BB8Cu;
label_18bb8c:
    // 0x18bb8c: 0x8483019e  lh          $v1, 0x19E($a0)
    ctx->pc = 0x18bb8cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 414)));
label_18bb90:
    // 0x18bb90: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_18bb94:
    if (ctx->pc == 0x18BB94u) {
        ctx->pc = 0x18BB98u;
        goto label_18bb98;
    }
    ctx->pc = 0x18BB90u;
    {
        const bool branch_taken_0x18bb90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18bb90) {
            ctx->pc = 0x18BBA0u;
            goto label_18bba0;
        }
    }
    ctx->pc = 0x18BB98u;
label_18bb98:
    // 0x18bb98: 0x10000018  b           . + 4 + (0x18 << 2)
label_18bb9c:
    if (ctx->pc == 0x18BB9Cu) {
        ctx->pc = 0x18BB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BB98u;
        // 0x18bb9c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18BBA0u;
        goto label_18bba0;
    }
    ctx->pc = 0x18BB98u;
    {
        const bool branch_taken_0x18bb98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18BB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BB98u;
        // 0x18bb9c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18bb98) {
            ctx->pc = 0x18BBFCu;
            goto label_18bbfc;
        }
    }
    ctx->pc = 0x18BBA0u;
label_18bba0:
    // 0x18bba0: 0x8483003c  lh          $v1, 0x3C($a0)
    ctx->pc = 0x18bba0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 60)));
label_18bba4:
    // 0x18bba4: 0x18600005  blez        $v1, . + 4 + (0x5 << 2)
label_18bba8:
    if (ctx->pc == 0x18BBA8u) {
        ctx->pc = 0x18BBA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BBA4u;
        // 0x18bba8: 0x28610006  slti        $at, $v1, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)6) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x18BBACu;
        goto label_18bbac;
    }
    ctx->pc = 0x18BBA4u;
    {
        const bool branch_taken_0x18bba4 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x18BBA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BBA4u;
        // 0x18bba8: 0x28610006  slti        $at, $v1, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)6) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18bba4) {
            ctx->pc = 0x18BBBCu;
            goto label_18bbbc;
        }
    }
    ctx->pc = 0x18BBACu;
label_18bbac:
    // 0x18bbac: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_18bbb0:
    if (ctx->pc == 0x18BBB0u) {
        ctx->pc = 0x18BBB4u;
        goto label_18bbb4;
    }
    ctx->pc = 0x18BBACu;
    {
        const bool branch_taken_0x18bbac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x18bbac) {
            ctx->pc = 0x18BBBCu;
            goto label_18bbbc;
        }
    }
    ctx->pc = 0x18BBB4u;
label_18bbb4:
    // 0x18bbb4: 0x10000011  b           . + 4 + (0x11 << 2)
label_18bbb8:
    if (ctx->pc == 0x18BBB8u) {
        ctx->pc = 0x18BBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BBB4u;
        // 0x18bbb8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18BBBCu;
        goto label_18bbbc;
    }
    ctx->pc = 0x18BBB4u;
    {
        const bool branch_taken_0x18bbb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18BBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BBB4u;
        // 0x18bbb8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18bbb4) {
            ctx->pc = 0x18BBFCu;
            goto label_18bbfc;
        }
    }
    ctx->pc = 0x18BBBCu;
label_18bbbc:
    // 0x18bbbc: 0x8c850024  lw          $a1, 0x24($a0)
    ctx->pc = 0x18bbbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
label_18bbc0:
    // 0x18bbc0: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x18bbc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
label_18bbc4:
    // 0x18bbc4: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x18bbc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_18bbc8:
    // 0x18bbc8: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x18bbc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
label_18bbcc:
    // 0x18bbcc: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_18bbd0:
    if (ctx->pc == 0x18BBD0u) {
        ctx->pc = 0x18BBD4u;
        goto label_18bbd4;
    }
    ctx->pc = 0x18BBCCu;
    {
        const bool branch_taken_0x18bbcc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18bbcc) {
            ctx->pc = 0x18BBFCu;
            goto label_18bbfc;
        }
    }
    ctx->pc = 0x18BBD4u;
label_18bbd4:
    // 0x18bbd4: 0x8c830038  lw          $v1, 0x38($a0)
    ctx->pc = 0x18bbd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
label_18bbd8:
    // 0x18bbd8: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_18bbdc:
    if (ctx->pc == 0x18BBDCu) {
        ctx->pc = 0x18BBE0u;
        goto label_18bbe0;
    }
    ctx->pc = 0x18BBD8u;
    {
        const bool branch_taken_0x18bbd8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18bbd8) {
            ctx->pc = 0x18BBFCu;
            goto label_18bbfc;
        }
    }
    ctx->pc = 0x18BBE0u;
label_18bbe0:
    // 0x18bbe0: 0x8464003c  lh          $a0, 0x3C($v1)
    ctx->pc = 0x18bbe0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 60)));
label_18bbe4:
    // 0x18bbe4: 0x28830007  slti        $v1, $a0, 0x7
    ctx->pc = 0x18bbe4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)7) ? 1 : 0);
label_18bbe8:
    // 0x18bbe8: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
label_18bbec:
    if (ctx->pc == 0x18BBECu) {
        ctx->pc = 0x18BBECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BBE8u;
        // 0x18bbec: 0x2881000e  slti        $at, $a0, 0xE (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)14) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x18BBF0u;
        goto label_18bbf0;
    }
    ctx->pc = 0x18BBE8u;
    {
        const bool branch_taken_0x18bbe8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x18BBECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BBE8u;
        // 0x18bbec: 0x2881000e  slti        $at, $a0, 0xE (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)14) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18bbe8) {
            ctx->pc = 0x18BBFCu;
            goto label_18bbfc;
        }
    }
    ctx->pc = 0x18BBF0u;
label_18bbf0:
    // 0x18bbf0: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_18bbf4:
    if (ctx->pc == 0x18BBF4u) {
        ctx->pc = 0x18BBF8u;
        goto label_18bbf8;
    }
    ctx->pc = 0x18BBF0u;
    {
        const bool branch_taken_0x18bbf0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x18bbf0) {
            ctx->pc = 0x18BBFCu;
            goto label_18bbfc;
        }
    }
    ctx->pc = 0x18BBF8u;
label_18bbf8:
    // 0x18bbf8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18bbf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18bbfc:
    // 0x18bbfc: 0x3e00008  jr          $ra
label_18bc00:
    if (ctx->pc == 0x18BC00u) {
        ctx->pc = 0x18BC04u;
        goto label_18bc04;
    }
    ctx->pc = 0x18BBFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18BBFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18BC04u;
label_18bc04:
    // 0x18bc04: 0x0  nop
    ctx->pc = 0x18bc04u;
    // NOP
label_18bc08:
    // 0x18bc08: 0x0  nop
    ctx->pc = 0x18bc08u;
    // NOP
label_18bc0c:
    // 0x18bc0c: 0x0  nop
    ctx->pc = 0x18bc0cu;
    // NOP
label_18bc10:
    // 0x18bc10: 0x90830234  lbu         $v1, 0x234($a0)
    ctx->pc = 0x18bc10u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 564)));
label_18bc14:
    // 0x18bc14: 0x90a70234  lbu         $a3, 0x234($a1)
    ctx->pc = 0x18bc14u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 564)));
label_18bc18:
    // 0x18bc18: 0x10670050  beq         $v1, $a3, . + 4 + (0x50 << 2)
label_18bc1c:
    if (ctx->pc == 0x18BC1Cu) {
        ctx->pc = 0x18BC20u;
        goto label_18bc20;
    }
    ctx->pc = 0x18BC18u;
    {
        const bool branch_taken_0x18bc18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 7));
        if (branch_taken_0x18bc18) {
            ctx->pc = 0x18BD5Cu;
            { ctx->pc = 0x18bd5c; return; }
        }
    }
    ctx->pc = 0x18BC20u;
label_18bc20:
    // 0x18bc20: 0x8f838590  lw          $v1, -0x7A70($gp)
    ctx->pc = 0x18bc20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
label_18bc24:
    // 0x18bc24: 0x30630024  andi        $v1, $v1, 0x24
    ctx->pc = 0x18bc24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)36);
label_18bc28:
    // 0x18bc28: 0x1460004c  bnez        $v1, . + 4 + (0x4C << 2)
label_18bc2c:
    if (ctx->pc == 0x18BC2Cu) {
        ctx->pc = 0x18BC30u;
        { ctx->pc = 0x18bc30; return; }
    }
    ctx->pc = 0x18BC28u;
    {
        const bool branch_taken_0x18bc28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x18bc28) {
            ctx->pc = 0x18BD5Cu;
            { ctx->pc = 0x18bd5c; return; }
        }
    }
    ctx->pc = 0x18BC30u;
    ctx->pc = 0x18bc30u;
    return;
}
