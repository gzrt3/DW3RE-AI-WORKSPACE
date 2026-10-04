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

// Function: FUN_0017faa0
// Address: 0x17faa0 - 0x2bfb1c
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0017faa0_part418(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x24b470u: goto label_24b470;
        case 0x24b474u: goto label_24b474;
        case 0x24b478u: goto label_24b478;
        case 0x24b47cu: goto label_24b47c;
        case 0x24b480u: goto label_24b480;
        case 0x24b484u: goto label_24b484;
        case 0x24b488u: goto label_24b488;
        case 0x24b48cu: goto label_24b48c;
        case 0x24b490u: goto label_24b490;
        case 0x24b494u: goto label_24b494;
        case 0x24b498u: goto label_24b498;
        case 0x24b49cu: goto label_24b49c;
        case 0x24b4a0u: goto label_24b4a0;
        case 0x24b4a4u: goto label_24b4a4;
        case 0x24b4a8u: goto label_24b4a8;
        case 0x24b4acu: goto label_24b4ac;
        case 0x24b4b0u: goto label_24b4b0;
        case 0x24b4b4u: goto label_24b4b4;
        case 0x24b4b8u: goto label_24b4b8;
        case 0x24b4bcu: goto label_24b4bc;
        case 0x24b4c0u: goto label_24b4c0;
        case 0x24b4c4u: goto label_24b4c4;
        case 0x24b4c8u: goto label_24b4c8;
        case 0x24b4ccu: goto label_24b4cc;
        case 0x24b4d0u: goto label_24b4d0;
        case 0x24b4d4u: goto label_24b4d4;
        case 0x24b4d8u: goto label_24b4d8;
        case 0x24b4dcu: goto label_24b4dc;
        case 0x24b4e0u: goto label_24b4e0;
        case 0x24b4e4u: goto label_24b4e4;
        case 0x24b4e8u: goto label_24b4e8;
        case 0x24b4ecu: goto label_24b4ec;
        case 0x24b4f0u: goto label_24b4f0;
        case 0x24b4f4u: goto label_24b4f4;
        case 0x24b4f8u: goto label_24b4f8;
        case 0x24b4fcu: goto label_24b4fc;
        case 0x24b500u: goto label_24b500;
        case 0x24b504u: goto label_24b504;
        case 0x24b508u: goto label_24b508;
        case 0x24b50cu: goto label_24b50c;
        case 0x24b510u: goto label_24b510;
        case 0x24b514u: goto label_24b514;
        case 0x24b518u: goto label_24b518;
        case 0x24b51cu: goto label_24b51c;
        case 0x24b520u: goto label_24b520;
        case 0x24b524u: goto label_24b524;
        case 0x24b528u: goto label_24b528;
        case 0x24b52cu: goto label_24b52c;
        case 0x24b530u: goto label_24b530;
        case 0x24b534u: goto label_24b534;
        case 0x24b538u: goto label_24b538;
        case 0x24b53cu: goto label_24b53c;
        case 0x24b540u: goto label_24b540;
        case 0x24b544u: goto label_24b544;
        case 0x24b548u: goto label_24b548;
        case 0x24b54cu: goto label_24b54c;
        case 0x24b550u: goto label_24b550;
        case 0x24b554u: goto label_24b554;
        case 0x24b558u: goto label_24b558;
        case 0x24b55cu: goto label_24b55c;
        case 0x24b560u: goto label_24b560;
        case 0x24b564u: goto label_24b564;
        case 0x24b568u: goto label_24b568;
        case 0x24b56cu: goto label_24b56c;
        case 0x24b570u: goto label_24b570;
        case 0x24b574u: goto label_24b574;
        case 0x24b578u: goto label_24b578;
        case 0x24b57cu: goto label_24b57c;
        case 0x24b580u: goto label_24b580;
        case 0x24b584u: goto label_24b584;
        case 0x24b588u: goto label_24b588;
        case 0x24b58cu: goto label_24b58c;
        case 0x24b590u: goto label_24b590;
        case 0x24b594u: goto label_24b594;
        case 0x24b598u: goto label_24b598;
        case 0x24b59cu: goto label_24b59c;
        case 0x24b5a0u: goto label_24b5a0;
        case 0x24b5a4u: goto label_24b5a4;
        case 0x24b5a8u: goto label_24b5a8;
        case 0x24b5acu: goto label_24b5ac;
        case 0x24b5b0u: goto label_24b5b0;
        case 0x24b5b4u: goto label_24b5b4;
        case 0x24b5b8u: goto label_24b5b8;
        case 0x24b5bcu: goto label_24b5bc;
        case 0x24b5c0u: goto label_24b5c0;
        case 0x24b5c4u: goto label_24b5c4;
        case 0x24b5c8u: goto label_24b5c8;
        case 0x24b5ccu: goto label_24b5cc;
        case 0x24b5d0u: goto label_24b5d0;
        case 0x24b5d4u: goto label_24b5d4;
        case 0x24b5d8u: goto label_24b5d8;
        case 0x24b5dcu: goto label_24b5dc;
        case 0x24b5e0u: goto label_24b5e0;
        case 0x24b5e4u: goto label_24b5e4;
        case 0x24b5e8u: goto label_24b5e8;
        case 0x24b5ecu: goto label_24b5ec;
        case 0x24b5f0u: goto label_24b5f0;
        case 0x24b5f4u: goto label_24b5f4;
        case 0x24b5f8u: goto label_24b5f8;
        case 0x24b5fcu: goto label_24b5fc;
        case 0x24b600u: goto label_24b600;
        case 0x24b604u: goto label_24b604;
        case 0x24b608u: goto label_24b608;
        case 0x24b60cu: goto label_24b60c;
        case 0x24b610u: goto label_24b610;
        case 0x24b614u: goto label_24b614;
        case 0x24b618u: goto label_24b618;
        case 0x24b61cu: goto label_24b61c;
        case 0x24b620u: goto label_24b620;
        case 0x24b624u: goto label_24b624;
        case 0x24b628u: goto label_24b628;
        case 0x24b62cu: goto label_24b62c;
        case 0x24b630u: goto label_24b630;
        case 0x24b634u: goto label_24b634;
        case 0x24b638u: goto label_24b638;
        case 0x24b63cu: goto label_24b63c;
        case 0x24b640u: goto label_24b640;
        case 0x24b644u: goto label_24b644;
        case 0x24b648u: goto label_24b648;
        case 0x24b64cu: goto label_24b64c;
        case 0x24b650u: goto label_24b650;
        case 0x24b654u: goto label_24b654;
        case 0x24b658u: goto label_24b658;
        case 0x24b65cu: goto label_24b65c;
        case 0x24b660u: goto label_24b660;
        case 0x24b664u: goto label_24b664;
        case 0x24b668u: goto label_24b668;
        case 0x24b66cu: goto label_24b66c;
        case 0x24b670u: goto label_24b670;
        case 0x24b674u: goto label_24b674;
        case 0x24b678u: goto label_24b678;
        case 0x24b67cu: goto label_24b67c;
        case 0x24b680u: goto label_24b680;
        case 0x24b684u: goto label_24b684;
        case 0x24b688u: goto label_24b688;
        case 0x24b68cu: goto label_24b68c;
        case 0x24b690u: goto label_24b690;
        case 0x24b694u: goto label_24b694;
        case 0x24b698u: goto label_24b698;
        case 0x24b69cu: goto label_24b69c;
        case 0x24b6a0u: goto label_24b6a0;
        case 0x24b6a4u: goto label_24b6a4;
        case 0x24b6a8u: goto label_24b6a8;
        case 0x24b6acu: goto label_24b6ac;
        case 0x24b6b0u: goto label_24b6b0;
        case 0x24b6b4u: goto label_24b6b4;
        case 0x24b6b8u: goto label_24b6b8;
        case 0x24b6bcu: goto label_24b6bc;
        case 0x24b6c0u: goto label_24b6c0;
        case 0x24b6c4u: goto label_24b6c4;
        case 0x24b6c8u: goto label_24b6c8;
        case 0x24b6ccu: goto label_24b6cc;
        case 0x24b6d0u: goto label_24b6d0;
        case 0x24b6d4u: goto label_24b6d4;
        case 0x24b6d8u: goto label_24b6d8;
        case 0x24b6dcu: goto label_24b6dc;
        case 0x24b6e0u: goto label_24b6e0;
        case 0x24b6e4u: goto label_24b6e4;
        case 0x24b6e8u: goto label_24b6e8;
        case 0x24b6ecu: goto label_24b6ec;
        case 0x24b6f0u: goto label_24b6f0;
        case 0x24b6f4u: goto label_24b6f4;
        case 0x24b6f8u: goto label_24b6f8;
        case 0x24b6fcu: goto label_24b6fc;
        case 0x24b700u: goto label_24b700;
        case 0x24b704u: goto label_24b704;
        case 0x24b708u: goto label_24b708;
        case 0x24b70cu: goto label_24b70c;
        case 0x24b710u: goto label_24b710;
        case 0x24b714u: goto label_24b714;
        case 0x24b718u: goto label_24b718;
        case 0x24b71cu: goto label_24b71c;
        case 0x24b720u: goto label_24b720;
        case 0x24b724u: goto label_24b724;
        case 0x24b728u: goto label_24b728;
        case 0x24b72cu: goto label_24b72c;
        case 0x24b730u: goto label_24b730;
        case 0x24b734u: goto label_24b734;
        case 0x24b738u: goto label_24b738;
        case 0x24b73cu: goto label_24b73c;
        case 0x24b740u: goto label_24b740;
        case 0x24b744u: goto label_24b744;
        case 0x24b748u: goto label_24b748;
        case 0x24b74cu: goto label_24b74c;
        case 0x24b750u: goto label_24b750;
        case 0x24b754u: goto label_24b754;
        case 0x24b758u: goto label_24b758;
        case 0x24b75cu: goto label_24b75c;
        case 0x24b760u: goto label_24b760;
        case 0x24b764u: goto label_24b764;
        case 0x24b768u: goto label_24b768;
        case 0x24b76cu: goto label_24b76c;
        case 0x24b770u: goto label_24b770;
        case 0x24b774u: goto label_24b774;
        case 0x24b778u: goto label_24b778;
        case 0x24b77cu: goto label_24b77c;
        case 0x24b780u: goto label_24b780;
        case 0x24b784u: goto label_24b784;
        case 0x24b788u: goto label_24b788;
        case 0x24b78cu: goto label_24b78c;
        case 0x24b790u: goto label_24b790;
        case 0x24b794u: goto label_24b794;
        case 0x24b798u: goto label_24b798;
        case 0x24b79cu: goto label_24b79c;
        case 0x24b7a0u: goto label_24b7a0;
        case 0x24b7a4u: goto label_24b7a4;
        case 0x24b7a8u: goto label_24b7a8;
        case 0x24b7acu: goto label_24b7ac;
        case 0x24b7b0u: goto label_24b7b0;
        case 0x24b7b4u: goto label_24b7b4;
        case 0x24b7b8u: goto label_24b7b8;
        case 0x24b7bcu: goto label_24b7bc;
        case 0x24b7c0u: goto label_24b7c0;
        case 0x24b7c4u: goto label_24b7c4;
        case 0x24b7c8u: goto label_24b7c8;
        case 0x24b7ccu: goto label_24b7cc;
        case 0x24b7d0u: goto label_24b7d0;
        case 0x24b7d4u: goto label_24b7d4;
        case 0x24b7d8u: goto label_24b7d8;
        case 0x24b7dcu: goto label_24b7dc;
        case 0x24b7e0u: goto label_24b7e0;
        case 0x24b7e4u: goto label_24b7e4;
        case 0x24b7e8u: goto label_24b7e8;
        case 0x24b7ecu: goto label_24b7ec;
        case 0x24b7f0u: goto label_24b7f0;
        case 0x24b7f4u: goto label_24b7f4;
        case 0x24b7f8u: goto label_24b7f8;
        case 0x24b7fcu: goto label_24b7fc;
        case 0x24b800u: goto label_24b800;
        case 0x24b804u: goto label_24b804;
        case 0x24b808u: goto label_24b808;
        case 0x24b80cu: goto label_24b80c;
        case 0x24b810u: goto label_24b810;
        case 0x24b814u: goto label_24b814;
        case 0x24b818u: goto label_24b818;
        case 0x24b81cu: goto label_24b81c;
        case 0x24b820u: goto label_24b820;
        case 0x24b824u: goto label_24b824;
        case 0x24b828u: goto label_24b828;
        case 0x24b82cu: goto label_24b82c;
        case 0x24b830u: goto label_24b830;
        case 0x24b834u: goto label_24b834;
        case 0x24b838u: goto label_24b838;
        case 0x24b83cu: goto label_24b83c;
        case 0x24b840u: goto label_24b840;
        case 0x24b844u: goto label_24b844;
        case 0x24b848u: goto label_24b848;
        case 0x24b84cu: goto label_24b84c;
        case 0x24b850u: goto label_24b850;
        case 0x24b854u: goto label_24b854;
        case 0x24b858u: goto label_24b858;
        case 0x24b85cu: goto label_24b85c;
        case 0x24b860u: goto label_24b860;
        case 0x24b864u: goto label_24b864;
        case 0x24b868u: goto label_24b868;
        case 0x24b86cu: goto label_24b86c;
        case 0x24b870u: goto label_24b870;
        case 0x24b874u: goto label_24b874;
        case 0x24b878u: goto label_24b878;
        case 0x24b87cu: goto label_24b87c;
        case 0x24b880u: goto label_24b880;
        case 0x24b884u: goto label_24b884;
        case 0x24b888u: goto label_24b888;
        case 0x24b88cu: goto label_24b88c;
        case 0x24b890u: goto label_24b890;
        case 0x24b894u: goto label_24b894;
        case 0x24b898u: goto label_24b898;
        case 0x24b89cu: goto label_24b89c;
        case 0x24b8a0u: goto label_24b8a0;
        case 0x24b8a4u: goto label_24b8a4;
        case 0x24b8a8u: goto label_24b8a8;
        case 0x24b8acu: goto label_24b8ac;
        case 0x24b8b0u: goto label_24b8b0;
        case 0x24b8b4u: goto label_24b8b4;
        case 0x24b8b8u: goto label_24b8b8;
        case 0x24b8bcu: goto label_24b8bc;
        case 0x24b8c0u: goto label_24b8c0;
        case 0x24b8c4u: goto label_24b8c4;
        case 0x24b8c8u: goto label_24b8c8;
        case 0x24b8ccu: goto label_24b8cc;
        case 0x24b8d0u: goto label_24b8d0;
        case 0x24b8d4u: goto label_24b8d4;
        case 0x24b8d8u: goto label_24b8d8;
        case 0x24b8dcu: goto label_24b8dc;
        case 0x24b8e0u: goto label_24b8e0;
        case 0x24b8e4u: goto label_24b8e4;
        case 0x24b8e8u: goto label_24b8e8;
        case 0x24b8ecu: goto label_24b8ec;
        case 0x24b8f0u: goto label_24b8f0;
        case 0x24b8f4u: goto label_24b8f4;
        case 0x24b8f8u: goto label_24b8f8;
        case 0x24b8fcu: goto label_24b8fc;
        case 0x24b900u: goto label_24b900;
        case 0x24b904u: goto label_24b904;
        case 0x24b908u: goto label_24b908;
        case 0x24b90cu: goto label_24b90c;
        case 0x24b910u: goto label_24b910;
        case 0x24b914u: goto label_24b914;
        case 0x24b918u: goto label_24b918;
        case 0x24b91cu: goto label_24b91c;
        case 0x24b920u: goto label_24b920;
        case 0x24b924u: goto label_24b924;
        case 0x24b928u: goto label_24b928;
        case 0x24b92cu: goto label_24b92c;
        case 0x24b930u: goto label_24b930;
        case 0x24b934u: goto label_24b934;
        case 0x24b938u: goto label_24b938;
        case 0x24b93cu: goto label_24b93c;
        case 0x24b940u: goto label_24b940;
        case 0x24b944u: goto label_24b944;
        case 0x24b948u: goto label_24b948;
        case 0x24b94cu: goto label_24b94c;
        case 0x24b950u: goto label_24b950;
        case 0x24b954u: goto label_24b954;
        case 0x24b958u: goto label_24b958;
        case 0x24b95cu: goto label_24b95c;
        case 0x24b960u: goto label_24b960;
        case 0x24b964u: goto label_24b964;
        case 0x24b968u: goto label_24b968;
        case 0x24b96cu: goto label_24b96c;
        case 0x24b970u: goto label_24b970;
        case 0x24b974u: goto label_24b974;
        case 0x24b978u: goto label_24b978;
        case 0x24b97cu: goto label_24b97c;
        case 0x24b980u: goto label_24b980;
        case 0x24b984u: goto label_24b984;
        case 0x24b988u: goto label_24b988;
        case 0x24b98cu: goto label_24b98c;
        case 0x24b990u: goto label_24b990;
        case 0x24b994u: goto label_24b994;
        case 0x24b998u: goto label_24b998;
        case 0x24b99cu: goto label_24b99c;
        case 0x24b9a0u: goto label_24b9a0;
        case 0x24b9a4u: goto label_24b9a4;
        case 0x24b9a8u: goto label_24b9a8;
        case 0x24b9acu: goto label_24b9ac;
        case 0x24b9b0u: goto label_24b9b0;
        case 0x24b9b4u: goto label_24b9b4;
        case 0x24b9b8u: goto label_24b9b8;
        case 0x24b9bcu: goto label_24b9bc;
        case 0x24b9c0u: goto label_24b9c0;
        case 0x24b9c4u: goto label_24b9c4;
        case 0x24b9c8u: goto label_24b9c8;
        case 0x24b9ccu: goto label_24b9cc;
        case 0x24b9d0u: goto label_24b9d0;
        case 0x24b9d4u: goto label_24b9d4;
        case 0x24b9d8u: goto label_24b9d8;
        case 0x24b9dcu: goto label_24b9dc;
        case 0x24b9e0u: goto label_24b9e0;
        case 0x24b9e4u: goto label_24b9e4;
        case 0x24b9e8u: goto label_24b9e8;
        case 0x24b9ecu: goto label_24b9ec;
        case 0x24b9f0u: goto label_24b9f0;
        case 0x24b9f4u: goto label_24b9f4;
        case 0x24b9f8u: goto label_24b9f8;
        case 0x24b9fcu: goto label_24b9fc;
        case 0x24ba00u: goto label_24ba00;
        case 0x24ba04u: goto label_24ba04;
        case 0x24ba08u: goto label_24ba08;
        case 0x24ba0cu: goto label_24ba0c;
        case 0x24ba10u: goto label_24ba10;
        case 0x24ba14u: goto label_24ba14;
        case 0x24ba18u: goto label_24ba18;
        case 0x24ba1cu: goto label_24ba1c;
        case 0x24ba20u: goto label_24ba20;
        case 0x24ba24u: goto label_24ba24;
        case 0x24ba28u: goto label_24ba28;
        case 0x24ba2cu: goto label_24ba2c;
        case 0x24ba30u: goto label_24ba30;
        case 0x24ba34u: goto label_24ba34;
        case 0x24ba38u: goto label_24ba38;
        case 0x24ba3cu: goto label_24ba3c;
        case 0x24ba40u: goto label_24ba40;
        case 0x24ba44u: goto label_24ba44;
        case 0x24ba48u: goto label_24ba48;
        case 0x24ba4cu: goto label_24ba4c;
        case 0x24ba50u: goto label_24ba50;
        case 0x24ba54u: goto label_24ba54;
        case 0x24ba58u: goto label_24ba58;
        case 0x24ba5cu: goto label_24ba5c;
        case 0x24ba60u: goto label_24ba60;
        case 0x24ba64u: goto label_24ba64;
        case 0x24ba68u: goto label_24ba68;
        case 0x24ba6cu: goto label_24ba6c;
        case 0x24ba70u: goto label_24ba70;
        case 0x24ba74u: goto label_24ba74;
        case 0x24ba78u: goto label_24ba78;
        case 0x24ba7cu: goto label_24ba7c;
        case 0x24ba80u: goto label_24ba80;
        case 0x24ba84u: goto label_24ba84;
        case 0x24ba88u: goto label_24ba88;
        case 0x24ba8cu: goto label_24ba8c;
        case 0x24ba90u: goto label_24ba90;
        case 0x24ba94u: goto label_24ba94;
        case 0x24ba98u: goto label_24ba98;
        case 0x24ba9cu: goto label_24ba9c;
        case 0x24baa0u: goto label_24baa0;
        case 0x24baa4u: goto label_24baa4;
        case 0x24baa8u: goto label_24baa8;
        case 0x24baacu: goto label_24baac;
        case 0x24bab0u: goto label_24bab0;
        case 0x24bab4u: goto label_24bab4;
        case 0x24bab8u: goto label_24bab8;
        case 0x24babcu: goto label_24babc;
        case 0x24bac0u: goto label_24bac0;
        case 0x24bac4u: goto label_24bac4;
        case 0x24bac8u: goto label_24bac8;
        case 0x24baccu: goto label_24bacc;
        case 0x24bad0u: goto label_24bad0;
        case 0x24bad4u: goto label_24bad4;
        case 0x24bad8u: goto label_24bad8;
        case 0x24badcu: goto label_24badc;
        case 0x24bae0u: goto label_24bae0;
        case 0x24bae4u: goto label_24bae4;
        case 0x24bae8u: goto label_24bae8;
        case 0x24baecu: goto label_24baec;
        case 0x24baf0u: goto label_24baf0;
        case 0x24baf4u: goto label_24baf4;
        case 0x24baf8u: goto label_24baf8;
        case 0x24bafcu: goto label_24bafc;
        case 0x24bb00u: goto label_24bb00;
        case 0x24bb04u: goto label_24bb04;
        case 0x24bb08u: goto label_24bb08;
        case 0x24bb0cu: goto label_24bb0c;
        case 0x24bb10u: goto label_24bb10;
        case 0x24bb14u: goto label_24bb14;
        case 0x24bb18u: goto label_24bb18;
        case 0x24bb1cu: goto label_24bb1c;
        case 0x24bb20u: goto label_24bb20;
        case 0x24bb24u: goto label_24bb24;
        case 0x24bb28u: goto label_24bb28;
        case 0x24bb2cu: goto label_24bb2c;
        case 0x24bb30u: goto label_24bb30;
        case 0x24bb34u: goto label_24bb34;
        case 0x24bb38u: goto label_24bb38;
        case 0x24bb3cu: goto label_24bb3c;
        case 0x24bb40u: goto label_24bb40;
        case 0x24bb44u: goto label_24bb44;
        case 0x24bb48u: goto label_24bb48;
        case 0x24bb4cu: goto label_24bb4c;
        case 0x24bb50u: goto label_24bb50;
        case 0x24bb54u: goto label_24bb54;
        case 0x24bb58u: goto label_24bb58;
        case 0x24bb5cu: goto label_24bb5c;
        case 0x24bb60u: goto label_24bb60;
        case 0x24bb64u: goto label_24bb64;
        case 0x24bb68u: goto label_24bb68;
        case 0x24bb6cu: goto label_24bb6c;
        case 0x24bb70u: goto label_24bb70;
        case 0x24bb74u: goto label_24bb74;
        case 0x24bb78u: goto label_24bb78;
        case 0x24bb7cu: goto label_24bb7c;
        case 0x24bb80u: goto label_24bb80;
        case 0x24bb84u: goto label_24bb84;
        case 0x24bb88u: goto label_24bb88;
        case 0x24bb8cu: goto label_24bb8c;
        case 0x24bb90u: goto label_24bb90;
        case 0x24bb94u: goto label_24bb94;
        case 0x24bb98u: goto label_24bb98;
        case 0x24bb9cu: goto label_24bb9c;
        case 0x24bba0u: goto label_24bba0;
        case 0x24bba4u: goto label_24bba4;
        case 0x24bba8u: goto label_24bba8;
        case 0x24bbacu: goto label_24bbac;
        case 0x24bbb0u: goto label_24bbb0;
        case 0x24bbb4u: goto label_24bbb4;
        case 0x24bbb8u: goto label_24bbb8;
        case 0x24bbbcu: goto label_24bbbc;
        case 0x24bbc0u: goto label_24bbc0;
        case 0x24bbc4u: goto label_24bbc4;
        case 0x24bbc8u: goto label_24bbc8;
        case 0x24bbccu: goto label_24bbcc;
        case 0x24bbd0u: goto label_24bbd0;
        case 0x24bbd4u: goto label_24bbd4;
        case 0x24bbd8u: goto label_24bbd8;
        case 0x24bbdcu: goto label_24bbdc;
        case 0x24bbe0u: goto label_24bbe0;
        case 0x24bbe4u: goto label_24bbe4;
        case 0x24bbe8u: goto label_24bbe8;
        case 0x24bbecu: goto label_24bbec;
        case 0x24bbf0u: goto label_24bbf0;
        case 0x24bbf4u: goto label_24bbf4;
        case 0x24bbf8u: goto label_24bbf8;
        case 0x24bbfcu: goto label_24bbfc;
        case 0x24bc00u: goto label_24bc00;
        case 0x24bc04u: goto label_24bc04;
        case 0x24bc08u: goto label_24bc08;
        case 0x24bc0cu: goto label_24bc0c;
        case 0x24bc10u: goto label_24bc10;
        case 0x24bc14u: goto label_24bc14;
        case 0x24bc18u: goto label_24bc18;
        case 0x24bc1cu: goto label_24bc1c;
        case 0x24bc20u: goto label_24bc20;
        case 0x24bc24u: goto label_24bc24;
        case 0x24bc28u: goto label_24bc28;
        case 0x24bc2cu: goto label_24bc2c;
        case 0x24bc30u: goto label_24bc30;
        case 0x24bc34u: goto label_24bc34;
        case 0x24bc38u: goto label_24bc38;
        case 0x24bc3cu: goto label_24bc3c;
        default: return;
    }

label_24b470:
    // 0x24b470: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24b470u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24B470 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24b474:
    // 0x24b474: 0x42480000  .word       0x42480000                   # INVALID     $s2, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24b474u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x12 at 0x24B474 raw=0x42480000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24b478:
    // 0x24b478: 0x42f60000  .word       0x42F60000                   # INVALID     $s7, $s6, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24b478u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x17 at 0x24B478 raw=0x42F60000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24b47c:
    // 0x24b47c: 0x20009  .word       0x00020009                   # jalr        $zero, $zero # 00020000 <InstrIdType: CPU_SPECIAL>
label_24b480:
    if (ctx->pc == 0x24B480u) {
        ctx->pc = 0x24B480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B47Cu;
        // 0x24b480: 0x10011  .word       0x00010011                   # mthi        $zero # 00010000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        ctx->hi = GPR_U64(ctx, 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x24B484u;
        goto label_24b484;
    }
    ctx->pc = 0x24B47Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x24B480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B47Cu;
        // 0x24b480: 0x10011  .word       0x00010011                   # mthi        $zero # 00010000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        ctx->hi = GPR_U64(ctx, 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24B47Cu, 0x24B484u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24B484u;
label_24b484:
    // 0x24b484: 0x7c007c  .word       0x007C007C                   # dsll32      $zero, $gp, 1 # 00600000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24b484u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 28) << (32 + 1));
label_24b488:
    // 0x24b488: 0x8280041  j           func_A00104
label_24b48c:
    if (ctx->pc == 0x24B48Cu) {
        ctx->pc = 0x24B48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B488u;
        // 0x24b48c: 0x8550107  j           func_154041C (Delay Slot)
        // J 0x154041C - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x24B490u;
        goto label_24b490;
    }
    ctx->pc = 0x24B488u;
    ctx->pc = 0x24B48Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B488u;
    // 0x24b48c: 0x8550107  j           func_154041C (Delay Slot)
    // J 0x154041C - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0xA00104u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xA00104u, 0x24B488u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x24B490u;
label_24b490:
    // 0x24b490: 0x19a0199  .word       0x019A0199                   # multu       $t4, $k0 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24b490u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 12) * (uint64_t)GPR_U32(ctx, 26); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_24b494:
    // 0x24b494: 0x1690140  .word       0x01690140                   # sll         $zero, $t1, 5 # 01600000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24b494u;
    
label_24b498:
    // 0x24b498: 0x34007d  .word       0x0034007D                   # INVALID     $at, $s4, 0x7D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24b498u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x24B498 raw=0x0034007D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24b49c:
    // 0x24b49c: 0x6  srlv        $zero, $zero, $zero
    ctx->pc = 0x24b49cu;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_24b4a0:
    // 0x24b4a0: 0x42180000  .word       0x42180000                   # INVALID     $s0, $t8, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24b4a0u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24B4A0 raw=0x42180000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24b4a4:
    // 0x24b4a4: 0x42280000  .word       0x42280000                   # INVALID     $s1, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24b4a4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x11 at 0x24B4A4 raw=0x42280000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24b4a8:
    // 0x24b4a8: 0x0  nop
    ctx->pc = 0x24b4a8u;
    // NOP
label_24b4ac:
    // 0x24b4ac: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24b4acu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_24b4b0:
    // 0x24b4b0: 0x430e0000  .word       0x430E0000                   # INVALID     $t8, $t6, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24b4b0u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x18 at 0x24B4B0 raw=0x430E0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24b4b4:
    // 0x24b4b4: 0x42280000  .word       0x42280000                   # INVALID     $s1, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24b4b4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x11 at 0x24B4B4 raw=0x42280000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24b4b8:
    // 0x24b4b8: 0x40c00000  ctc0        $zero, Index
    ctx->pc = 0x24b4b8u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x6 at 0x24B4B8 raw=0x40C00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24b4bc:
    // 0x24b4bc: 0x41000000  bc0f        . + 4 + (0x0 << 2)
label_24b4c0:
    if (ctx->pc == 0x24B4C0u) {
        ctx->pc = 0x24B4C4u;
        goto label_24b4c4;
    }
    ctx->pc = 0x24B4BCu;
    {
        const bool branch_taken_0x24b4bc = (false);
        if (branch_taken_0x24b4bc) {
            ctx->pc = 0x24B4C0u;
            goto label_24b4c0;
        }
    }
    ctx->pc = 0x24B4C4u;
label_24b4c4:
    // 0x24b4c4: 0x0  nop
    ctx->pc = 0x24b4c4u;
    // NOP
label_24b4c8:
    // 0x24b4c8: 0x0  nop
    ctx->pc = 0x24b4c8u;
    // NOP
label_24b4cc:
    // 0x24b4cc: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24b4ccu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_24b4d0:
    // 0x24b4d0: 0x0  nop
    ctx->pc = 0x24b4d0u;
    // NOP
label_24b4d4:
    // 0x24b4d4: 0x0  nop
    ctx->pc = 0x24b4d4u;
    // NOP
label_24b4d8:
    // 0x24b4d8: 0x40000000  mfc0        $zero, Index
    ctx->pc = 0x24b4d8u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_24b4dc:
    // 0x24b4dc: 0x41400000  .word       0x41400000                   # INVALID     $t2, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24b4dcu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xA at 0x24B4DC raw=0x41400000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24b4e0:
    // 0x24b4e0: 0x0  nop
    ctx->pc = 0x24b4e0u;
    // NOP
label_24b4e4:
    // 0x24b4e4: 0x0  nop
    ctx->pc = 0x24b4e4u;
    // NOP
label_24b4e8:
    // 0x24b4e8: 0x0  nop
    ctx->pc = 0x24b4e8u;
    // NOP
label_24b4ec:
    // 0x24b4ec: 0x0  nop
    ctx->pc = 0x24b4ecu;
    // NOP
label_24b4f0:
    // 0x24b4f0: 0x0  nop
    ctx->pc = 0x24b4f0u;
    // NOP
label_24b4f4:
    // 0x24b4f4: 0x0  nop
    ctx->pc = 0x24b4f4u;
    // NOP
label_24b4f8:
    // 0x24b4f8: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24b4f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24b4fc:
    // 0x24b4fc: 0xc1800000  ll          $zero, 0x0($t4)
    ctx->pc = 0x24b4fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24b500:
    // 0x24b500: 0xc1a80000  ll          $t0, 0x0($t5)
    ctx->pc = 0x24b500u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24b504:
    // 0x24b504: 0x42800000  .word       0x42800000                   # INVALID     $s4, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24b504u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24B504 raw=0x42800000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24b508:
    // 0x24b508: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24b508u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24B508 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24b50c:
    // 0x24b50c: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24b50cu;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24B50C raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24b510:
    // 0x24b510: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24b510u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24b514:
    // 0x24b514: 0xc1800000  ll          $zero, 0x0($t4)
    ctx->pc = 0x24b514u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24b518:
    // 0x24b518: 0xc1a80000  ll          $t0, 0x0($t5)
    ctx->pc = 0x24b518u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24b51c:
    // 0x24b51c: 0x42800000  .word       0x42800000                   # INVALID     $s4, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24b51cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24B51C raw=0x42800000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24b520:
    // 0x24b520: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24b520u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24B520 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24b524:
    // 0x24b524: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24b524u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24B524 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24b528:
    // 0x24b528: 0xc0800000  ll          $zero, 0x0($a0)
    ctx->pc = 0x24b528u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24b52c:
    // 0x24b52c: 0xc1b80000  ll          $t8, 0x0($t5)
    ctx->pc = 0x24b52cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 24, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24b530:
    // 0x24b530: 0xc1100000  ll          $s0, 0x0($t0)
    ctx->pc = 0x24b530u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24b534:
    // 0x24b534: 0x42840000  .word       0x42840000                   # INVALID     $s4, $a0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24b534u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24B534 raw=0x42840000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24b538:
    // 0x24b538: 0x42100000  .word       0x42100000                   # INVALID     $s0, $s0, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24b538u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24B538 raw=0x42100000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24b53c:
    // 0x24b53c: 0x41600000  .word       0x41600000                   # INVALID     $t3, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24b53cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xB at 0x24B53C raw=0x41600000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24b540:
    // 0x24b540: 0xc0800000  ll          $zero, 0x0($a0)
    ctx->pc = 0x24b540u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24b544:
    // 0x24b544: 0xc1900000  ll          $s0, 0x0($t4)
    ctx->pc = 0x24b544u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24b548:
    // 0x24b548: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24b548u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24b54c:
    // 0x24b54c: 0x42800000  .word       0x42800000                   # INVALID     $s4, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24b54cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24B54C raw=0x42800000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24b550:
    // 0x24b550: 0x42340000  .word       0x42340000                   # INVALID     $s1, $s4, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24b550u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x11 at 0x24B550 raw=0x42340000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24b554:
    // 0x24b554: 0x41d80000  .word       0x41D80000                   # INVALID     $t6, $t8, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24b554u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xE at 0x24B554 raw=0x41D80000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24b558:
    // 0x24b558: 0xc1e80000  ll          $t0, 0x0($t7)
    ctx->pc = 0x24b558u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24b55c:
    // 0x24b55c: 0xc1500000  ll          $s0, 0x0($t2)
    ctx->pc = 0x24b55cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24b560:
    // 0x24b560: 0xc2e00000  ll          $zero, 0x0($s7)
    ctx->pc = 0x24b560u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 23), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24b564:
    // 0x24b564: 0x42cc0000  .word       0x42CC0000                   # INVALID     $s6, $t4, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24b564u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x16 at 0x24B564 raw=0x42CC0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24b568:
    // 0x24b568: 0x42a60000  .word       0x42A60000                   # INVALID     $s5, $a2, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24b568u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x15 at 0x24B568 raw=0x42A60000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24b56c:
    // 0x24b56c: 0x43250000  .word       0x43250000                   # INVALID     $t9, $a1, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24b56cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x19 at 0x24B56C raw=0x43250000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24b570:
    // 0x24b570: 0xc0a00000  ll          $zero, 0x0($a1)
    ctx->pc = 0x24b570u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24b574:
    // 0x24b574: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24b574u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24b578:
    // 0x24b578: 0xc1a80000  ll          $t0, 0x0($t5)
    ctx->pc = 0x24b578u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24b57c:
    // 0x24b57c: 0x420c0000  .word       0x420C0000                   # INVALID     $s0, $t4, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24b57cu;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24B57C raw=0x420C0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24b580:
    // 0x24b580: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24b580u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24B580 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24b584:
    // 0x24b584: 0x42480000  .word       0x42480000                   # INVALID     $s2, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24b584u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x12 at 0x24B584 raw=0x42480000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24b588:
    // 0x24b588: 0x42f40000  .word       0x42F40000                   # INVALID     $s7, $s4, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24b588u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x17 at 0x24B588 raw=0x42F40000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24b58c:
    // 0x24b58c: 0x30009  .word       0x00030009                   # jalr        $zero, $zero # 00030000 <InstrIdType: CPU_SPECIAL>
label_24b590:
    if (ctx->pc == 0x24B590u) {
        ctx->pc = 0x24B590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B58Cu;
        // 0x24b590: 0x10011  .word       0x00010011                   # mthi        $zero # 00010000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        ctx->hi = GPR_U64(ctx, 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x24B594u;
        goto label_24b594;
    }
    ctx->pc = 0x24B58Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x24B590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B58Cu;
        // 0x24b590: 0x10011  .word       0x00010011                   # mthi        $zero # 00010000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        ctx->hi = GPR_U64(ctx, 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24B58Cu, 0x24B594u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24B594u;
label_24b594:
    // 0x24b594: 0x7e007e  .word       0x007E007E                   # dsrl32      $zero, $fp, 1 # 00600000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24b594u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 30) >> (32 + 1));
label_24b598:
    // 0x24b598: 0x8290042  j           func_A40108
label_24b59c:
    if (ctx->pc == 0x24B59Cu) {
        ctx->pc = 0x24B59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B598u;
        // 0x24b59c: 0x8560108  j           func_1580420 (Delay Slot)
        // J 0x1580420 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x24B5A0u;
        goto label_24b5a0;
    }
    ctx->pc = 0x24B598u;
    ctx->pc = 0x24B59Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B598u;
    // 0x24b59c: 0x8560108  j           func_1580420 (Delay Slot)
    // J 0x1580420 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0xA40108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xA40108u, 0x24B598u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x24B5A0u;
label_24b5a0:
    // 0x24b5a0: 0x19d019c  .word       0x019D019C                   # dmult       $t4, $sp # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24b5a0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x24B5A0 raw=0x019D019C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24b5a4:
    // 0x24b5a4: 0x16a0141  .word       0x016A0141                   # INVALID     $t3, $t2, 0x141 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24b5a4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x24B5A4 raw=0x016A0141"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24b5a8:
    // 0x24b5a8: 0x35007f  .word       0x0035007F                   # dsra32      $zero, $s5, 1 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24b5a8u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 21) >> (32 + 1));
label_24b5ac:
    // 0x24b5ac: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x24b5acu;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_24b5b0:
    // 0x24b5b0: 0x0  nop
    ctx->pc = 0x24b5b0u;
    // NOP
label_24b5b4:
    // 0x24b5b4: 0x0  nop
    ctx->pc = 0x24b5b4u;
    // NOP
label_24b5b8:
    // 0x24b5b8: 0x0  nop
    ctx->pc = 0x24b5b8u;
    // NOP
label_24b5bc:
    // 0x24b5bc: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24b5bcu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_24b5c0:
    // 0x24b5c0: 0x0  nop
    ctx->pc = 0x24b5c0u;
    // NOP
label_24b5c4:
    // 0x24b5c4: 0x0  nop
    ctx->pc = 0x24b5c4u;
    // NOP
label_24b5c8:
    // 0x24b5c8: 0x40000000  mfc0        $zero, Index
    ctx->pc = 0x24b5c8u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_24b5cc:
    // 0x24b5cc: 0x41400000  .word       0x41400000                   # INVALID     $t2, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24b5ccu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xA at 0x24B5CC raw=0x41400000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24b5d0:
    // 0x24b5d0: 0x0  nop
    ctx->pc = 0x24b5d0u;
    // NOP
label_24b5d4:
    // 0x24b5d4: 0x0  nop
    ctx->pc = 0x24b5d4u;
    // NOP
label_24b5d8:
    // 0x24b5d8: 0x0  nop
    ctx->pc = 0x24b5d8u;
    // NOP
label_24b5dc:
    // 0x24b5dc: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24b5dcu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_24b5e0:
    // 0x24b5e0: 0x0  nop
    ctx->pc = 0x24b5e0u;
    // NOP
label_24b5e4:
    // 0x24b5e4: 0x0  nop
    ctx->pc = 0x24b5e4u;
    // NOP
label_24b5e8:
    // 0x24b5e8: 0x40000000  mfc0        $zero, Index
    ctx->pc = 0x24b5e8u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_24b5ec:
    // 0x24b5ec: 0x41400000  .word       0x41400000                   # INVALID     $t2, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24b5ecu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xA at 0x24B5EC raw=0x41400000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24b5f0:
    // 0x24b5f0: 0x0  nop
    ctx->pc = 0x24b5f0u;
    // NOP
label_24b5f4:
    // 0x24b5f4: 0x0  nop
    ctx->pc = 0x24b5f4u;
    // NOP
label_24b5f8:
    // 0x24b5f8: 0x0  nop
    ctx->pc = 0x24b5f8u;
    // NOP
label_24b5fc:
    // 0x24b5fc: 0x0  nop
    ctx->pc = 0x24b5fcu;
    // NOP
label_24b600:
    // 0x24b600: 0x0  nop
    ctx->pc = 0x24b600u;
    // NOP
label_24b604:
    // 0x24b604: 0x0  nop
    ctx->pc = 0x24b604u;
    // NOP
label_24b608:
    // 0x24b608: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24b608u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24b60c:
    // 0x24b60c: 0xc1800000  ll          $zero, 0x0($t4)
    ctx->pc = 0x24b60cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24b610:
    // 0x24b610: 0xc1a80000  ll          $t0, 0x0($t5)
    ctx->pc = 0x24b610u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24b614:
    // 0x24b614: 0x42800000  .word       0x42800000                   # INVALID     $s4, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24b614u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24B614 raw=0x42800000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24b618:
    // 0x24b618: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24b618u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24B618 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24b61c:
    // 0x24b61c: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24b61cu;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24B61C raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24b620:
    // 0x24b620: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24b620u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24b624:
    // 0x24b624: 0xc1800000  ll          $zero, 0x0($t4)
    ctx->pc = 0x24b624u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24b628:
    // 0x24b628: 0xc1a80000  ll          $t0, 0x0($t5)
    ctx->pc = 0x24b628u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24b62c:
    // 0x24b62c: 0x42800000  .word       0x42800000                   # INVALID     $s4, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24b62cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24B62C raw=0x42800000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24b630:
    // 0x24b630: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24b630u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24B630 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24b634:
    // 0x24b634: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24b634u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24B634 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24b638:
    // 0x24b638: 0xc0800000  ll          $zero, 0x0($a0)
    ctx->pc = 0x24b638u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24b63c:
    // 0x24b63c: 0xc1b80000  ll          $t8, 0x0($t5)
    ctx->pc = 0x24b63cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 24, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24b640:
    // 0x24b640: 0xc1100000  ll          $s0, 0x0($t0)
    ctx->pc = 0x24b640u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24b644:
    // 0x24b644: 0x42840000  .word       0x42840000                   # INVALID     $s4, $a0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24b644u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24B644 raw=0x42840000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24b648:
    // 0x24b648: 0x42100000  .word       0x42100000                   # INVALID     $s0, $s0, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24b648u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24B648 raw=0x42100000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24b64c:
    // 0x24b64c: 0x41600000  .word       0x41600000                   # INVALID     $t3, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24b64cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xB at 0x24B64C raw=0x41600000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24b650:
    // 0x24b650: 0xc0800000  ll          $zero, 0x0($a0)
    ctx->pc = 0x24b650u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24b654:
    // 0x24b654: 0xc1900000  ll          $s0, 0x0($t4)
    ctx->pc = 0x24b654u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24b658:
    // 0x24b658: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24b658u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24b65c:
    // 0x24b65c: 0x42800000  .word       0x42800000                   # INVALID     $s4, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24b65cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24B65C raw=0x42800000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24b660:
    // 0x24b660: 0x42340000  .word       0x42340000                   # INVALID     $s1, $s4, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24b660u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x11 at 0x24B660 raw=0x42340000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24b664:
    // 0x24b664: 0x41d80000  .word       0x41D80000                   # INVALID     $t6, $t8, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24b664u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xE at 0x24B664 raw=0x41D80000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24b668:
    // 0x24b668: 0xc1e80000  ll          $t0, 0x0($t7)
    ctx->pc = 0x24b668u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24b66c:
    // 0x24b66c: 0xc1500000  ll          $s0, 0x0($t2)
    ctx->pc = 0x24b66cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24b670:
    // 0x24b670: 0xc2e00000  ll          $zero, 0x0($s7)
    ctx->pc = 0x24b670u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 23), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24b674:
    // 0x24b674: 0x42cc0000  .word       0x42CC0000                   # INVALID     $s6, $t4, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24b674u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x16 at 0x24B674 raw=0x42CC0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24b678:
    // 0x24b678: 0x42a60000  .word       0x42A60000                   # INVALID     $s5, $a2, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24b678u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x15 at 0x24B678 raw=0x42A60000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24b67c:
    // 0x24b67c: 0x43250000  .word       0x43250000                   # INVALID     $t9, $a1, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24b67cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x19 at 0x24B67C raw=0x43250000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24b680:
    // 0x24b680: 0xc0a00000  ll          $zero, 0x0($a1)
    ctx->pc = 0x24b680u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24b684:
    // 0x24b684: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24b684u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24b688:
    // 0x24b688: 0xc1a80000  ll          $t0, 0x0($t5)
    ctx->pc = 0x24b688u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24b68c:
    // 0x24b68c: 0x420c0000  .word       0x420C0000                   # INVALID     $s0, $t4, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24b68cu;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24B68C raw=0x420C0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24b690:
    // 0x24b690: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24b690u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24B690 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24b694:
    // 0x24b694: 0x42480000  .word       0x42480000                   # INVALID     $s2, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24b694u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x12 at 0x24B694 raw=0x42480000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24b698:
    // 0x24b698: 0x42f5428f  .word       0x42F5428F                   # INVALID     $s7, $s5, 0x428F # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24b698u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x17 at 0x24B698 raw=0x42F5428F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24b69c:
    // 0x24b69c: 0x40009  .word       0x00040009                   # jalr        $zero, $zero # 00040000 <InstrIdType: CPU_SPECIAL>
label_24b6a0:
    if (ctx->pc == 0x24B6A0u) {
        ctx->pc = 0x24B6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B69Cu;
        // 0x24b6a0: 0x10011  .word       0x00010011                   # mthi        $zero # 00010000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        ctx->hi = GPR_U64(ctx, 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x24B6A4u;
        goto label_24b6a4;
    }
    ctx->pc = 0x24B69Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x24B6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B69Cu;
        // 0x24b6a0: 0x10011  .word       0x00010011                   # mthi        $zero # 00010000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        ctx->hi = GPR_U64(ctx, 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24B69Cu, 0x24B6A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24B6A4u;
label_24b6a4:
    // 0x24b6a4: 0x800080  .word       0x00800080                   # sll         $zero, $zero, 2 # 00800000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24b6a4u;
    
label_24b6a8:
    // 0x24b6a8: 0x82a0043  j           func_A8010C
label_24b6ac:
    if (ctx->pc == 0x24B6ACu) {
        ctx->pc = 0x24B6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B6A8u;
        // 0x24b6ac: 0x8570109  j           func_15C0424 (Delay Slot)
        // J 0x15C0424 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x24B6B0u;
        goto label_24b6b0;
    }
    ctx->pc = 0x24B6A8u;
    ctx->pc = 0x24B6ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B6A8u;
    // 0x24b6ac: 0x8570109  j           func_15C0424 (Delay Slot)
    // J 0x15C0424 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0xA8010Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xA8010Cu, 0x24B6A8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x24B6B0u;
label_24b6b0:
    // 0x24b6b0: 0x1a0019f  .word       0x01A0019F                   # ddivu       $zero, $t5, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24b6b0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x24B6B0 raw=0x01A0019F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24b6b4:
    // 0x24b6b4: 0x16b0142  .word       0x016B0142                   # srl         $zero, $t3, 5 # 01600000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24b6b4u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 11), 5));
label_24b6b8:
    // 0x24b6b8: 0x360081  .word       0x00360081                   # INVALID     $at, $s6, 0x81 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24b6b8u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x24B6B8 raw=0x00360081"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24b6bc:
    // 0x24b6bc: 0xa  movz        $zero, $zero, $zero
    ctx->pc = 0x24b6bcu;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_24b6c0:
    // 0x24b6c0: 0x0  nop
    ctx->pc = 0x24b6c0u;
    // NOP
label_24b6c4:
    // 0x24b6c4: 0xc1f00000  ll          $s0, 0x0($t7)
    ctx->pc = 0x24b6c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24b6c8:
    // 0x24b6c8: 0x0  nop
    ctx->pc = 0x24b6c8u;
    // NOP
label_24b6cc:
    // 0x24b6cc: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24b6ccu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_24b6d0:
    // 0x24b6d0: 0x42280000  .word       0x42280000                   # INVALID     $s1, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24b6d0u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x11 at 0x24B6D0 raw=0x42280000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24b6d4:
    // 0x24b6d4: 0x41f00000  .word       0x41F00000                   # INVALID     $t7, $s0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24b6d4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xF at 0x24B6D4 raw=0x41F00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24b6d8:
    // 0x24b6d8: 0x40000000  mfc0        $zero, Index
    ctx->pc = 0x24b6d8u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_24b6dc:
    // 0x24b6dc: 0x41400000  .word       0x41400000                   # INVALID     $t2, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24b6dcu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xA at 0x24B6DC raw=0x41400000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24b6e0:
    // 0x24b6e0: 0x0  nop
    ctx->pc = 0x24b6e0u;
    // NOP
label_24b6e4:
    // 0x24b6e4: 0xc1f00000  ll          $s0, 0x0($t7)
    ctx->pc = 0x24b6e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24b6e8:
    // 0x24b6e8: 0x0  nop
    ctx->pc = 0x24b6e8u;
    // NOP
label_24b6ec:
    // 0x24b6ec: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24b6ecu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_24b6f0:
    // 0x24b6f0: 0x421c0000  .word       0x421C0000                   # INVALID     $s0, $gp, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24b6f0u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24B6F0 raw=0x421C0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24b6f4:
    // 0x24b6f4: 0x41f00000  .word       0x41F00000                   # INVALID     $t7, $s0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24b6f4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xF at 0x24B6F4 raw=0x41F00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24b6f8:
    // 0x24b6f8: 0x40000000  mfc0        $zero, Index
    ctx->pc = 0x24b6f8u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_24b6fc:
    // 0x24b6fc: 0x41400000  .word       0x41400000                   # INVALID     $t2, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24b6fcu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xA at 0x24B6FC raw=0x41400000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24b700:
    // 0x24b700: 0x0  nop
    ctx->pc = 0x24b700u;
    // NOP
label_24b704:
    // 0x24b704: 0x0  nop
    ctx->pc = 0x24b704u;
    // NOP
label_24b708:
    // 0x24b708: 0x0  nop
    ctx->pc = 0x24b708u;
    // NOP
label_24b70c:
    // 0x24b70c: 0x0  nop
    ctx->pc = 0x24b70cu;
    // NOP
label_24b710:
    // 0x24b710: 0x0  nop
    ctx->pc = 0x24b710u;
    // NOP
label_24b714:
    // 0x24b714: 0x0  nop
    ctx->pc = 0x24b714u;
    // NOP
label_24b718:
    // 0x24b718: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24b718u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24b71c:
    // 0x24b71c: 0xc1800000  ll          $zero, 0x0($t4)
    ctx->pc = 0x24b71cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24b720:
    // 0x24b720: 0xc1a80000  ll          $t0, 0x0($t5)
    ctx->pc = 0x24b720u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24b724:
    // 0x24b724: 0x42800000  .word       0x42800000                   # INVALID     $s4, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24b724u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24B724 raw=0x42800000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24b728:
    // 0x24b728: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24b728u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24B728 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24b72c:
    // 0x24b72c: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24b72cu;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24B72C raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24b730:
    // 0x24b730: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24b730u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24b734:
    // 0x24b734: 0xc1800000  ll          $zero, 0x0($t4)
    ctx->pc = 0x24b734u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24b738:
    // 0x24b738: 0xc1a80000  ll          $t0, 0x0($t5)
    ctx->pc = 0x24b738u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24b73c:
    // 0x24b73c: 0x42800000  .word       0x42800000                   # INVALID     $s4, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24b73cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24B73C raw=0x42800000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24b740:
    // 0x24b740: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24b740u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24B740 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24b744:
    // 0x24b744: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24b744u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24B744 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24b748:
    // 0x24b748: 0xc0800000  ll          $zero, 0x0($a0)
    ctx->pc = 0x24b748u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24b74c:
    // 0x24b74c: 0xc1b80000  ll          $t8, 0x0($t5)
    ctx->pc = 0x24b74cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 24, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24b750:
    // 0x24b750: 0xc1100000  ll          $s0, 0x0($t0)
    ctx->pc = 0x24b750u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24b754:
    // 0x24b754: 0x42840000  .word       0x42840000                   # INVALID     $s4, $a0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24b754u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24B754 raw=0x42840000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24b758:
    // 0x24b758: 0x42100000  .word       0x42100000                   # INVALID     $s0, $s0, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24b758u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24B758 raw=0x42100000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24b75c:
    // 0x24b75c: 0x41600000  .word       0x41600000                   # INVALID     $t3, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24b75cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xB at 0x24B75C raw=0x41600000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24b760:
    // 0x24b760: 0xc0800000  ll          $zero, 0x0($a0)
    ctx->pc = 0x24b760u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24b764:
    // 0x24b764: 0xc1900000  ll          $s0, 0x0($t4)
    ctx->pc = 0x24b764u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24b768:
    // 0x24b768: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24b768u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24b76c:
    // 0x24b76c: 0x42800000  .word       0x42800000                   # INVALID     $s4, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24b76cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24B76C raw=0x42800000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24b770:
    // 0x24b770: 0x42340000  .word       0x42340000                   # INVALID     $s1, $s4, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24b770u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x11 at 0x24B770 raw=0x42340000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24b774:
    // 0x24b774: 0x41d80000  .word       0x41D80000                   # INVALID     $t6, $t8, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24b774u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xE at 0x24B774 raw=0x41D80000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24b778:
    // 0x24b778: 0xc1e80000  ll          $t0, 0x0($t7)
    ctx->pc = 0x24b778u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24b77c:
    // 0x24b77c: 0xc1500000  ll          $s0, 0x0($t2)
    ctx->pc = 0x24b77cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24b780:
    // 0x24b780: 0xc2e00000  ll          $zero, 0x0($s7)
    ctx->pc = 0x24b780u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 23), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24b784:
    // 0x24b784: 0x42cc0000  .word       0x42CC0000                   # INVALID     $s6, $t4, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24b784u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x16 at 0x24B784 raw=0x42CC0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24b788:
    // 0x24b788: 0x42a60000  .word       0x42A60000                   # INVALID     $s5, $a2, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24b788u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x15 at 0x24B788 raw=0x42A60000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24b78c:
    // 0x24b78c: 0x43250000  .word       0x43250000                   # INVALID     $t9, $a1, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24b78cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x19 at 0x24B78C raw=0x43250000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24b790:
    // 0x24b790: 0xc0a00000  ll          $zero, 0x0($a1)
    ctx->pc = 0x24b790u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24b794:
    // 0x24b794: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24b794u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24b798:
    // 0x24b798: 0xc1a80000  ll          $t0, 0x0($t5)
    ctx->pc = 0x24b798u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24b79c:
    // 0x24b79c: 0x420c0000  .word       0x420C0000                   # INVALID     $s0, $t4, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24b79cu;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24B79C raw=0x420C0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24b7a0:
    // 0x24b7a0: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24b7a0u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24B7A0 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24b7a4:
    // 0x24b7a4: 0x42480000  .word       0x42480000                   # INVALID     $s2, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24b7a4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x12 at 0x24B7A4 raw=0x42480000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24b7a8:
    // 0x24b7a8: 0x42ed0000  .word       0x42ED0000                   # INVALID     $s7, $t5, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24b7a8u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x17 at 0x24B7A8 raw=0x42ED0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24b7ac:
    // 0x24b7ac: 0x50009  .word       0x00050009                   # jalr        $zero, $zero # 00050000 <InstrIdType: CPU_SPECIAL>
label_24b7b0:
    if (ctx->pc == 0x24B7B0u) {
        ctx->pc = 0x24B7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B7ACu;
        // 0x24b7b0: 0x10011  .word       0x00010011                   # mthi        $zero # 00010000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        ctx->hi = GPR_U64(ctx, 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x24B7B4u;
        goto label_24b7b4;
    }
    ctx->pc = 0x24B7ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x24B7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B7ACu;
        // 0x24b7b0: 0x10011  .word       0x00010011                   # mthi        $zero # 00010000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        ctx->hi = GPR_U64(ctx, 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24B7ACu, 0x24B7B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24B7B4u;
label_24b7b4:
    // 0x24b7b4: 0x820082  .word       0x00820082                   # srl         $zero, $v0, 2 # 00800000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24b7b4u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
label_24b7b8:
    // 0x24b7b8: 0x82b0044  j           func_AC0110
label_24b7bc:
    if (ctx->pc == 0x24B7BCu) {
        ctx->pc = 0x24B7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B7B8u;
        // 0x24b7bc: 0x858010a  j           func_1600428 (Delay Slot)
        // J 0x1600428 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x24B7C0u;
        goto label_24b7c0;
    }
    ctx->pc = 0x24B7B8u;
    ctx->pc = 0x24B7BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B7B8u;
    // 0x24b7bc: 0x858010a  j           func_1600428 (Delay Slot)
    // J 0x1600428 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0xAC0110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xAC0110u, 0x24B7B8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x24B7C0u;
label_24b7c0:
    // 0x24b7c0: 0x1a301a2  .word       0x01A301A2                   # sub         $zero, $t5, $v1 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24b7c0u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 13), GPR_U32(ctx, 3), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 0, (int32_t)tmp); }
label_24b7c4:
    // 0x24b7c4: 0x16c0143  .word       0x016C0143                   # sra         $zero, $t4, 5 # 01600000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24b7c4u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 12), 5));
label_24b7c8:
    // 0x24b7c8: 0x370083  .word       0x00370083                   # sra         $zero, $s7, 2 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24b7c8u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 23), 2));
label_24b7cc:
    // 0x24b7cc: 0xc  syscall     0
    ctx->pc = 0x24b7ccu;
    ctx->pc = 0x24B7D0u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_24b7d0:
    // 0x24b7d0: 0x0  nop
    ctx->pc = 0x24b7d0u;
    // NOP
label_24b7d4:
    // 0x24b7d4: 0x41900000  .word       0x41900000                   # INVALID     $t4, $s0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24b7d4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xC at 0x24B7D4 raw=0x41900000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24b7d8:
    // 0x24b7d8: 0x0  nop
    ctx->pc = 0x24b7d8u;
    // NOP
label_24b7dc:
    // 0x24b7dc: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24b7dcu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_24b7e0:
    // 0x24b7e0: 0x42be0000  .word       0x42BE0000                   # INVALID     $s5, $fp, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24b7e0u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x15 at 0x24B7E0 raw=0x42BE0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24b7e4:
    // 0x24b7e4: 0x41900000  .word       0x41900000                   # INVALID     $t4, $s0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24b7e4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xC at 0x24B7E4 raw=0x41900000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24b7e8:
    // 0x24b7e8: 0x40800000  mtc0        $zero, Index
    ctx->pc = 0x24b7e8u;
    ctx->cop0_index = GPR_U32(ctx, 0) & 0x3F;
label_24b7ec:
    // 0x24b7ec: 0x41200000  .word       0x41200000                   # INVALID     $t1, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24b7ecu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x9 at 0x24B7EC raw=0x41200000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24b7f0:
    // 0x24b7f0: 0x0  nop
    ctx->pc = 0x24b7f0u;
    // NOP
label_24b7f4:
    // 0x24b7f4: 0xc1900000  ll          $s0, 0x0($t4)
    ctx->pc = 0x24b7f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24b7f8:
    // 0x24b7f8: 0x0  nop
    ctx->pc = 0x24b7f8u;
    // NOP
label_24b7fc:
    // 0x24b7fc: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24b7fcu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_24b800:
    // 0x24b800: 0x42a00000  .word       0x42A00000                   # INVALID     $s5, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24b800u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x15 at 0x24B800 raw=0x42A00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24b804:
    // 0x24b804: 0x41900000  .word       0x41900000                   # INVALID     $t4, $s0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24b804u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xC at 0x24B804 raw=0x41900000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24b808:
    // 0x24b808: 0x41000000  bc0f        . + 4 + (0x0 << 2)
label_24b80c:
    if (ctx->pc == 0x24B80Cu) {
        ctx->pc = 0x24B80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B808u;
        // 0x24b80c: 0x41200000  .word       0x41200000                   # INVALID     $t1, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0> (Delay Slot)
// //         throw std::runtime_error("Unhandled COP0 instruction format: 0x9 at 0x24B80C raw=0x41200000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x24B810u;
        goto label_24b810;
    }
    ctx->pc = 0x24B808u;
    {
        const bool branch_taken_0x24b808 = (false);
        ctx->pc = 0x24B80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B808u;
        // 0x24b80c: 0x41200000  .word       0x41200000                   # INVALID     $t1, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0> (Delay Slot)
// //         throw std::runtime_error("Unhandled COP0 instruction format: 0x9 at 0x24B80C raw=0x41200000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b808) {
            ctx->pc = 0x24B80Cu;
            goto label_24b80c;
        }
    }
    ctx->pc = 0x24B810u;
label_24b810:
    // 0x24b810: 0x0  nop
    ctx->pc = 0x24b810u;
    // NOP
label_24b814:
    // 0x24b814: 0x0  nop
    ctx->pc = 0x24b814u;
    // NOP
label_24b818:
    // 0x24b818: 0x0  nop
    ctx->pc = 0x24b818u;
    // NOP
label_24b81c:
    // 0x24b81c: 0x0  nop
    ctx->pc = 0x24b81cu;
    // NOP
label_24b820:
    // 0x24b820: 0x0  nop
    ctx->pc = 0x24b820u;
    // NOP
label_24b824:
    // 0x24b824: 0x0  nop
    ctx->pc = 0x24b824u;
    // NOP
label_24b828:
    // 0x24b828: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24b828u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24b82c:
    // 0x24b82c: 0xc1800000  ll          $zero, 0x0($t4)
    ctx->pc = 0x24b82cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24b830:
    // 0x24b830: 0xc1a80000  ll          $t0, 0x0($t5)
    ctx->pc = 0x24b830u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24b834:
    // 0x24b834: 0x42800000  .word       0x42800000                   # INVALID     $s4, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24b834u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24B834 raw=0x42800000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24b838:
    // 0x24b838: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24b838u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24B838 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24b83c:
    // 0x24b83c: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24b83cu;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24B83C raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24b840:
    // 0x24b840: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24b840u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24b844:
    // 0x24b844: 0xc1800000  ll          $zero, 0x0($t4)
    ctx->pc = 0x24b844u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24b848:
    // 0x24b848: 0xc1a80000  ll          $t0, 0x0($t5)
    ctx->pc = 0x24b848u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24b84c:
    // 0x24b84c: 0x42800000  .word       0x42800000                   # INVALID     $s4, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24b84cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24B84C raw=0x42800000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24b850:
    // 0x24b850: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24b850u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24B850 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24b854:
    // 0x24b854: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24b854u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24B854 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24b858:
    // 0x24b858: 0xc0800000  ll          $zero, 0x0($a0)
    ctx->pc = 0x24b858u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24b85c:
    // 0x24b85c: 0xc1b80000  ll          $t8, 0x0($t5)
    ctx->pc = 0x24b85cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 24, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24b860:
    // 0x24b860: 0xc1100000  ll          $s0, 0x0($t0)
    ctx->pc = 0x24b860u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24b864:
    // 0x24b864: 0x42840000  .word       0x42840000                   # INVALID     $s4, $a0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24b864u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24B864 raw=0x42840000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24b868:
    // 0x24b868: 0x42100000  .word       0x42100000                   # INVALID     $s0, $s0, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24b868u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24B868 raw=0x42100000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24b86c:
    // 0x24b86c: 0x41600000  .word       0x41600000                   # INVALID     $t3, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24b86cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xB at 0x24B86C raw=0x41600000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24b870:
    // 0x24b870: 0xc0800000  ll          $zero, 0x0($a0)
    ctx->pc = 0x24b870u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24b874:
    // 0x24b874: 0xc1900000  ll          $s0, 0x0($t4)
    ctx->pc = 0x24b874u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24b878:
    // 0x24b878: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24b878u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24b87c:
    // 0x24b87c: 0x42800000  .word       0x42800000                   # INVALID     $s4, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24b87cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24B87C raw=0x42800000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24b880:
    // 0x24b880: 0x42340000  .word       0x42340000                   # INVALID     $s1, $s4, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24b880u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x11 at 0x24B880 raw=0x42340000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24b884:
    // 0x24b884: 0x41d80000  .word       0x41D80000                   # INVALID     $t6, $t8, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24b884u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xE at 0x24B884 raw=0x41D80000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24b888:
    // 0x24b888: 0xc1e80000  ll          $t0, 0x0($t7)
    ctx->pc = 0x24b888u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24b88c:
    // 0x24b88c: 0xc1500000  ll          $s0, 0x0($t2)
    ctx->pc = 0x24b88cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24b890:
    // 0x24b890: 0xc2e00000  ll          $zero, 0x0($s7)
    ctx->pc = 0x24b890u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 23), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24b894:
    // 0x24b894: 0x42cc0000  .word       0x42CC0000                   # INVALID     $s6, $t4, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24b894u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x16 at 0x24B894 raw=0x42CC0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24b898:
    // 0x24b898: 0x42a60000  .word       0x42A60000                   # INVALID     $s5, $a2, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24b898u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x15 at 0x24B898 raw=0x42A60000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24b89c:
    // 0x24b89c: 0x43250000  .word       0x43250000                   # INVALID     $t9, $a1, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24b89cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x19 at 0x24B89C raw=0x43250000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24b8a0:
    // 0x24b8a0: 0xc0a00000  ll          $zero, 0x0($a1)
    ctx->pc = 0x24b8a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24b8a4:
    // 0x24b8a4: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24b8a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24b8a8:
    // 0x24b8a8: 0xc1a80000  ll          $t0, 0x0($t5)
    ctx->pc = 0x24b8a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24b8ac:
    // 0x24b8ac: 0x420c0000  .word       0x420C0000                   # INVALID     $s0, $t4, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24b8acu;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24B8AC raw=0x420C0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24b8b0:
    // 0x24b8b0: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24b8b0u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24B8B0 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24b8b4:
    // 0x24b8b4: 0x42480000  .word       0x42480000                   # INVALID     $s2, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24b8b4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x12 at 0x24B8B4 raw=0x42480000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24b8b8:
    // 0x24b8b8: 0x42ec0000  .word       0x42EC0000                   # INVALID     $s7, $t4, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24b8b8u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x17 at 0x24B8B8 raw=0x42EC0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24b8bc:
    // 0x24b8bc: 0x60009  .word       0x00060009                   # jalr        $zero, $zero # 00060000 <InstrIdType: CPU_SPECIAL>
label_24b8c0:
    if (ctx->pc == 0x24B8C0u) {
        ctx->pc = 0x24B8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B8BCu;
        // 0x24b8c0: 0x10011  .word       0x00010011                   # mthi        $zero # 00010000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        ctx->hi = GPR_U64(ctx, 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x24B8C4u;
        goto label_24b8c4;
    }
    ctx->pc = 0x24B8BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x24B8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B8BCu;
        // 0x24b8c0: 0x10011  .word       0x00010011                   # mthi        $zero # 00010000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        ctx->hi = GPR_U64(ctx, 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24B8BCu, 0x24B8C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24B8C4u;
label_24b8c4:
    // 0x24b8c4: 0x840084  .word       0x00840084                   # sllv        $zero, $a0, $a0 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24b8c4u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 4) & 0x1F));
label_24b8c8:
    // 0x24b8c8: 0x82c0045  j           func_B00114
label_24b8cc:
    if (ctx->pc == 0x24B8CCu) {
        ctx->pc = 0x24B8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B8C8u;
        // 0x24b8cc: 0x859010b  j           func_164042C (Delay Slot)
        // J 0x164042C - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x24B8D0u;
        goto label_24b8d0;
    }
    ctx->pc = 0x24B8C8u;
    ctx->pc = 0x24B8CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B8C8u;
    // 0x24b8cc: 0x859010b  j           func_164042C (Delay Slot)
    // J 0x164042C - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0xB00114u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xB00114u, 0x24B8C8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x24B8D0u;
label_24b8d0:
    // 0x24b8d0: 0x1a601a5  .word       0x01A601A5                   # or          $zero, $t5, $a2 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24b8d0u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 13) | GPR_U64(ctx, 6));
label_24b8d4:
    // 0x24b8d4: 0x16d0144  .word       0x016D0144                   # sllv        $zero, $t5, $t3 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24b8d4u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 13), GPR_U32(ctx, 11) & 0x1F));
label_24b8d8:
    // 0x24b8d8: 0x380085  .word       0x00380085                   # INVALID     $at, $t8, 0x85 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24b8d8u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x24B8D8 raw=0x00380085"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24b8dc:
    // 0x24b8dc: 0x0  nop
    ctx->pc = 0x24b8dcu;
    // NOP
label_24b8e0:
    // 0x24b8e0: 0x0  nop
    ctx->pc = 0x24b8e0u;
    // NOP
label_24b8e4:
    // 0x24b8e4: 0x41a00000  .word       0x41A00000                   # INVALID     $t5, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24b8e4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xD at 0x24B8E4 raw=0x41A00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24b8e8:
    // 0x24b8e8: 0x0  nop
    ctx->pc = 0x24b8e8u;
    // NOP
label_24b8ec:
    // 0x24b8ec: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24b8ecu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_24b8f0:
    // 0x24b8f0: 0x42a00000  .word       0x42A00000                   # INVALID     $s5, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24b8f0u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x15 at 0x24B8F0 raw=0x42A00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24b8f4:
    // 0x24b8f4: 0x41a00000  .word       0x41A00000                   # INVALID     $t5, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24b8f4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xD at 0x24B8F4 raw=0x41A00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24b8f8:
    // 0x24b8f8: 0x40800000  mtc0        $zero, Index
    ctx->pc = 0x24b8f8u;
    ctx->cop0_index = GPR_U32(ctx, 0) & 0x3F;
label_24b8fc:
    // 0x24b8fc: 0x41200000  .word       0x41200000                   # INVALID     $t1, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24b8fcu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x9 at 0x24B8FC raw=0x41200000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24b900:
    // 0x24b900: 0x0  nop
    ctx->pc = 0x24b900u;
    // NOP
label_24b904:
    // 0x24b904: 0x0  nop
    ctx->pc = 0x24b904u;
    // NOP
label_24b908:
    // 0x24b908: 0x0  nop
    ctx->pc = 0x24b908u;
    // NOP
label_24b90c:
    // 0x24b90c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24b90cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_24b910:
    // 0x24b910: 0x0  nop
    ctx->pc = 0x24b910u;
    // NOP
label_24b914:
    // 0x24b914: 0x0  nop
    ctx->pc = 0x24b914u;
    // NOP
label_24b918:
    // 0x24b918: 0x40000000  mfc0        $zero, Index
    ctx->pc = 0x24b918u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_24b91c:
    // 0x24b91c: 0x41400000  .word       0x41400000                   # INVALID     $t2, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24b91cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xA at 0x24B91C raw=0x41400000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24b920:
    // 0x24b920: 0x0  nop
    ctx->pc = 0x24b920u;
    // NOP
label_24b924:
    // 0x24b924: 0x0  nop
    ctx->pc = 0x24b924u;
    // NOP
label_24b928:
    // 0x24b928: 0x0  nop
    ctx->pc = 0x24b928u;
    // NOP
label_24b92c:
    // 0x24b92c: 0x0  nop
    ctx->pc = 0x24b92cu;
    // NOP
label_24b930:
    // 0x24b930: 0x0  nop
    ctx->pc = 0x24b930u;
    // NOP
label_24b934:
    // 0x24b934: 0x0  nop
    ctx->pc = 0x24b934u;
    // NOP
label_24b938:
    // 0x24b938: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24b938u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24b93c:
    // 0x24b93c: 0xc1800000  ll          $zero, 0x0($t4)
    ctx->pc = 0x24b93cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24b940:
    // 0x24b940: 0xc1a80000  ll          $t0, 0x0($t5)
    ctx->pc = 0x24b940u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24b944:
    // 0x24b944: 0x42800000  .word       0x42800000                   # INVALID     $s4, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24b944u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24B944 raw=0x42800000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24b948:
    // 0x24b948: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24b948u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24B948 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24b94c:
    // 0x24b94c: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24b94cu;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24B94C raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24b950:
    // 0x24b950: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24b950u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24b954:
    // 0x24b954: 0xc1800000  ll          $zero, 0x0($t4)
    ctx->pc = 0x24b954u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24b958:
    // 0x24b958: 0xc1a80000  ll          $t0, 0x0($t5)
    ctx->pc = 0x24b958u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24b95c:
    // 0x24b95c: 0x42800000  .word       0x42800000                   # INVALID     $s4, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24b95cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24B95C raw=0x42800000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24b960:
    // 0x24b960: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24b960u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24B960 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24b964:
    // 0x24b964: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24b964u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24B964 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24b968:
    // 0x24b968: 0xc0800000  ll          $zero, 0x0($a0)
    ctx->pc = 0x24b968u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24b96c:
    // 0x24b96c: 0xc1b80000  ll          $t8, 0x0($t5)
    ctx->pc = 0x24b96cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 24, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24b970:
    // 0x24b970: 0xc1100000  ll          $s0, 0x0($t0)
    ctx->pc = 0x24b970u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24b974:
    // 0x24b974: 0x42840000  .word       0x42840000                   # INVALID     $s4, $a0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24b974u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24B974 raw=0x42840000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24b978:
    // 0x24b978: 0x42100000  .word       0x42100000                   # INVALID     $s0, $s0, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24b978u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24B978 raw=0x42100000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24b97c:
    // 0x24b97c: 0x41600000  .word       0x41600000                   # INVALID     $t3, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24b97cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xB at 0x24B97C raw=0x41600000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24b980:
    // 0x24b980: 0xc0800000  ll          $zero, 0x0($a0)
    ctx->pc = 0x24b980u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24b984:
    // 0x24b984: 0xc1900000  ll          $s0, 0x0($t4)
    ctx->pc = 0x24b984u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24b988:
    // 0x24b988: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24b988u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24b98c:
    // 0x24b98c: 0x42800000  .word       0x42800000                   # INVALID     $s4, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24b98cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24B98C raw=0x42800000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24b990:
    // 0x24b990: 0x42340000  .word       0x42340000                   # INVALID     $s1, $s4, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24b990u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x11 at 0x24B990 raw=0x42340000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24b994:
    // 0x24b994: 0x41d80000  .word       0x41D80000                   # INVALID     $t6, $t8, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24b994u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xE at 0x24B994 raw=0x41D80000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24b998:
    // 0x24b998: 0xc1e80000  ll          $t0, 0x0($t7)
    ctx->pc = 0x24b998u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24b99c:
    // 0x24b99c: 0xc1500000  ll          $s0, 0x0($t2)
    ctx->pc = 0x24b99cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24b9a0:
    // 0x24b9a0: 0xc2e00000  ll          $zero, 0x0($s7)
    ctx->pc = 0x24b9a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 23), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24b9a4:
    // 0x24b9a4: 0x42cc0000  .word       0x42CC0000                   # INVALID     $s6, $t4, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24b9a4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x16 at 0x24B9A4 raw=0x42CC0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24b9a8:
    // 0x24b9a8: 0x42a60000  .word       0x42A60000                   # INVALID     $s5, $a2, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24b9a8u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x15 at 0x24B9A8 raw=0x42A60000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24b9ac:
    // 0x24b9ac: 0x43250000  .word       0x43250000                   # INVALID     $t9, $a1, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24b9acu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x19 at 0x24B9AC raw=0x43250000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24b9b0:
    // 0x24b9b0: 0xc0a00000  ll          $zero, 0x0($a1)
    ctx->pc = 0x24b9b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24b9b4:
    // 0x24b9b4: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24b9b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24b9b8:
    // 0x24b9b8: 0xc1a80000  ll          $t0, 0x0($t5)
    ctx->pc = 0x24b9b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24b9bc:
    // 0x24b9bc: 0x420c0000  .word       0x420C0000                   # INVALID     $s0, $t4, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24b9bcu;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24B9BC raw=0x420C0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24b9c0:
    // 0x24b9c0: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24b9c0u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24B9C0 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24b9c4:
    // 0x24b9c4: 0x42480000  .word       0x42480000                   # INVALID     $s2, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24b9c4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x12 at 0x24B9C4 raw=0x42480000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24b9c8:
    // 0x24b9c8: 0x42dd2e14  .word       0x42DD2E14                   # INVALID     $s6, $sp, 0x2E14 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24b9c8u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x16 at 0x24B9C8 raw=0x42DD2E14"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24b9cc:
    // 0x24b9cc: 0x70009  .word       0x00070009                   # jalr        $zero, $zero # 00070000 <InstrIdType: CPU_SPECIAL>
label_24b9d0:
    if (ctx->pc == 0x24B9D0u) {
        ctx->pc = 0x24B9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B9CCu;
        // 0x24b9d0: 0x10011  .word       0x00010011                   # mthi        $zero # 00010000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        ctx->hi = GPR_U64(ctx, 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x24B9D4u;
        goto label_24b9d4;
    }
    ctx->pc = 0x24B9CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x24B9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B9CCu;
        // 0x24b9d0: 0x10011  .word       0x00010011                   # mthi        $zero # 00010000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        ctx->hi = GPR_U64(ctx, 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24B9CCu, 0x24B9D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24B9D4u;
label_24b9d4:
    // 0x24b9d4: 0x860086  .word       0x00860086                   # srlv        $zero, $a2, $a0 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24b9d4u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 6), GPR_U32(ctx, 4) & 0x1F));
label_24b9d8:
    // 0x24b9d8: 0x82d0046  j           func_B40118
label_24b9dc:
    if (ctx->pc == 0x24B9DCu) {
        ctx->pc = 0x24B9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B9D8u;
        // 0x24b9dc: 0x85a010c  j           func_1680430 (Delay Slot)
        // J 0x1680430 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x24B9E0u;
        goto label_24b9e0;
    }
    ctx->pc = 0x24B9D8u;
    ctx->pc = 0x24B9DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B9D8u;
    // 0x24b9dc: 0x85a010c  j           func_1680430 (Delay Slot)
    // J 0x1680430 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0xB40118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xB40118u, 0x24B9D8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x24B9E0u;
label_24b9e0:
    // 0x24b9e0: 0x1a901a8  .word       0x01A901A8                   # mfsa        $zero # 01A90180 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x24b9e0u;
    SET_GPR_U32(ctx, 0, ctx->sa);
label_24b9e4:
    // 0x24b9e4: 0x16e0145  .word       0x016E0145                   # INVALID     $t3, $t6, 0x145 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24b9e4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x24B9E4 raw=0x016E0145"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24b9e8:
    // 0x24b9e8: 0x390087  .word       0x00390087                   # srav        $zero, $t9, $at # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24b9e8u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 25), GPR_U32(ctx, 1) & 0x1F));
label_24b9ec:
    // 0x24b9ec: 0xe  .word       0x0000000E                   # INVALID     $zero, $zero, 0xE # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24b9ecu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x24B9EC raw=0x0000000E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24b9f0:
    // 0x24b9f0: 0x0  nop
    ctx->pc = 0x24b9f0u;
    // NOP
label_24b9f4:
    // 0x24b9f4: 0x0  nop
    ctx->pc = 0x24b9f4u;
    // NOP
label_24b9f8:
    // 0x24b9f8: 0x0  nop
    ctx->pc = 0x24b9f8u;
    // NOP
label_24b9fc:
    // 0x24b9fc: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24b9fcu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_24ba00:
    // 0x24ba00: 0x0  nop
    ctx->pc = 0x24ba00u;
    // NOP
label_24ba04:
    // 0x24ba04: 0x0  nop
    ctx->pc = 0x24ba04u;
    // NOP
label_24ba08:
    // 0x24ba08: 0x40000000  mfc0        $zero, Index
    ctx->pc = 0x24ba08u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_24ba0c:
    // 0x24ba0c: 0x41400000  .word       0x41400000                   # INVALID     $t2, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24ba0cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xA at 0x24BA0C raw=0x41400000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24ba10:
    // 0x24ba10: 0x0  nop
    ctx->pc = 0x24ba10u;
    // NOP
label_24ba14:
    // 0x24ba14: 0x0  nop
    ctx->pc = 0x24ba14u;
    // NOP
label_24ba18:
    // 0x24ba18: 0x0  nop
    ctx->pc = 0x24ba18u;
    // NOP
label_24ba1c:
    // 0x24ba1c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24ba1cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_24ba20:
    // 0x24ba20: 0x0  nop
    ctx->pc = 0x24ba20u;
    // NOP
label_24ba24:
    // 0x24ba24: 0x0  nop
    ctx->pc = 0x24ba24u;
    // NOP
label_24ba28:
    // 0x24ba28: 0x40000000  mfc0        $zero, Index
    ctx->pc = 0x24ba28u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_24ba2c:
    // 0x24ba2c: 0x41400000  .word       0x41400000                   # INVALID     $t2, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24ba2cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xA at 0x24BA2C raw=0x41400000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24ba30:
    // 0x24ba30: 0x0  nop
    ctx->pc = 0x24ba30u;
    // NOP
label_24ba34:
    // 0x24ba34: 0x0  nop
    ctx->pc = 0x24ba34u;
    // NOP
label_24ba38:
    // 0x24ba38: 0x0  nop
    ctx->pc = 0x24ba38u;
    // NOP
label_24ba3c:
    // 0x24ba3c: 0x0  nop
    ctx->pc = 0x24ba3cu;
    // NOP
label_24ba40:
    // 0x24ba40: 0x0  nop
    ctx->pc = 0x24ba40u;
    // NOP
label_24ba44:
    // 0x24ba44: 0x0  nop
    ctx->pc = 0x24ba44u;
    // NOP
label_24ba48:
    // 0x24ba48: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24ba48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24ba4c:
    // 0x24ba4c: 0xc1800000  ll          $zero, 0x0($t4)
    ctx->pc = 0x24ba4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24ba50:
    // 0x24ba50: 0xc1a80000  ll          $t0, 0x0($t5)
    ctx->pc = 0x24ba50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24ba54:
    // 0x24ba54: 0x42800000  .word       0x42800000                   # INVALID     $s4, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24ba54u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24BA54 raw=0x42800000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24ba58:
    // 0x24ba58: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24ba58u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24BA58 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24ba5c:
    // 0x24ba5c: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24ba5cu;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24BA5C raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24ba60:
    // 0x24ba60: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24ba60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24ba64:
    // 0x24ba64: 0xc1800000  ll          $zero, 0x0($t4)
    ctx->pc = 0x24ba64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24ba68:
    // 0x24ba68: 0xc1a80000  ll          $t0, 0x0($t5)
    ctx->pc = 0x24ba68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24ba6c:
    // 0x24ba6c: 0x42800000  .word       0x42800000                   # INVALID     $s4, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24ba6cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24BA6C raw=0x42800000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24ba70:
    // 0x24ba70: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24ba70u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24BA70 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24ba74:
    // 0x24ba74: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24ba74u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24BA74 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24ba78:
    // 0x24ba78: 0xc0800000  ll          $zero, 0x0($a0)
    ctx->pc = 0x24ba78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24ba7c:
    // 0x24ba7c: 0xc1b80000  ll          $t8, 0x0($t5)
    ctx->pc = 0x24ba7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 24, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24ba80:
    // 0x24ba80: 0xc1100000  ll          $s0, 0x0($t0)
    ctx->pc = 0x24ba80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24ba84:
    // 0x24ba84: 0x42840000  .word       0x42840000                   # INVALID     $s4, $a0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24ba84u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24BA84 raw=0x42840000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24ba88:
    // 0x24ba88: 0x42100000  .word       0x42100000                   # INVALID     $s0, $s0, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24ba88u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24BA88 raw=0x42100000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24ba8c:
    // 0x24ba8c: 0x41600000  .word       0x41600000                   # INVALID     $t3, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24ba8cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xB at 0x24BA8C raw=0x41600000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24ba90:
    // 0x24ba90: 0xc0800000  ll          $zero, 0x0($a0)
    ctx->pc = 0x24ba90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24ba94:
    // 0x24ba94: 0xc1900000  ll          $s0, 0x0($t4)
    ctx->pc = 0x24ba94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24ba98:
    // 0x24ba98: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24ba98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24ba9c:
    // 0x24ba9c: 0x42800000  .word       0x42800000                   # INVALID     $s4, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24ba9cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24BA9C raw=0x42800000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24baa0:
    // 0x24baa0: 0x42340000  .word       0x42340000                   # INVALID     $s1, $s4, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24baa0u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x11 at 0x24BAA0 raw=0x42340000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24baa4:
    // 0x24baa4: 0x41d80000  .word       0x41D80000                   # INVALID     $t6, $t8, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24baa4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xE at 0x24BAA4 raw=0x41D80000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24baa8:
    // 0x24baa8: 0xc1e80000  ll          $t0, 0x0($t7)
    ctx->pc = 0x24baa8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24baac:
    // 0x24baac: 0xc1500000  ll          $s0, 0x0($t2)
    ctx->pc = 0x24baacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24bab0:
    // 0x24bab0: 0xc2e00000  ll          $zero, 0x0($s7)
    ctx->pc = 0x24bab0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 23), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24bab4:
    // 0x24bab4: 0x42cc0000  .word       0x42CC0000                   # INVALID     $s6, $t4, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24bab4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x16 at 0x24BAB4 raw=0x42CC0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24bab8:
    // 0x24bab8: 0x42a60000  .word       0x42A60000                   # INVALID     $s5, $a2, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24bab8u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x15 at 0x24BAB8 raw=0x42A60000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24babc:
    // 0x24babc: 0x43250000  .word       0x43250000                   # INVALID     $t9, $a1, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24babcu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x19 at 0x24BABC raw=0x43250000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24bac0:
    // 0x24bac0: 0xc0a00000  ll          $zero, 0x0($a1)
    ctx->pc = 0x24bac0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24bac4:
    // 0x24bac4: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24bac4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24bac8:
    // 0x24bac8: 0xc1a80000  ll          $t0, 0x0($t5)
    ctx->pc = 0x24bac8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24bacc:
    // 0x24bacc: 0x420c0000  .word       0x420C0000                   # INVALID     $s0, $t4, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24baccu;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24BACC raw=0x420C0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24bad0:
    // 0x24bad0: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24bad0u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24BAD0 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24bad4:
    // 0x24bad4: 0x42480000  .word       0x42480000                   # INVALID     $s2, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24bad4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x12 at 0x24BAD4 raw=0x42480000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24bad8:
    // 0x24bad8: 0x42f2147b  .word       0x42F2147B                   # INVALID     $s7, $s2, 0x147B # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24bad8u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x17 at 0x24BAD8 raw=0x42F2147B"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24badc:
    // 0x24badc: 0x80009  .word       0x00080009                   # jalr        $zero, $zero # 00080000 <InstrIdType: CPU_SPECIAL>
label_24bae0:
    if (ctx->pc == 0x24BAE0u) {
        ctx->pc = 0x24BAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BADCu;
        // 0x24bae0: 0x10011  .word       0x00010011                   # mthi        $zero # 00010000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        ctx->hi = GPR_U64(ctx, 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x24BAE4u;
        goto label_24bae4;
    }
    ctx->pc = 0x24BADCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x24BAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BADCu;
        // 0x24bae0: 0x10011  .word       0x00010011                   # mthi        $zero # 00010000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        ctx->hi = GPR_U64(ctx, 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24BADCu, 0x24BAE4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24BAE4u;
label_24bae4:
    // 0x24bae4: 0x880088  .word       0x00880088                   # jr          $a0 # 00080080 <InstrIdType: CPU_SPECIAL>
label_24bae8:
    if (ctx->pc == 0x24BAE8u) {
        ctx->pc = 0x24BAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BAE4u;
        // 0x24bae8: 0x82e0047  j           func_B8011C (Delay Slot)
        // J 0xB8011C - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x24BAECu;
        goto label_24baec;
    }
    ctx->pc = 0x24BAE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = 0x24BAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BAE4u;
        // 0x24bae8: 0x82e0047  j           func_B8011C (Delay Slot)
        // J 0xB8011C - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24BAE4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x24BAECu;
label_24baec:
    // 0x24baec: 0x85b010d  j           func_16C0434
label_24baf0:
    if (ctx->pc == 0x24BAF0u) {
        ctx->pc = 0x24BAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BAECu;
        // 0x24baf0: 0x1ac01ab  .word       0x01AC01AB                   # sltu        $zero, $t5, $t4 # 00000180 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 0, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)GPR_U64(ctx, 12)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x24BAF4u;
        goto label_24baf4;
    }
    ctx->pc = 0x24BAECu;
    ctx->pc = 0x24BAF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24BAECu;
    // 0x24baf0: 0x1ac01ab  .word       0x01AC01AB                   # sltu        $zero, $t5, $t4 # 00000180 <InstrIdType: CPU_SPECIAL> (Delay Slot)
    SET_GPR_U64(ctx, 0, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)GPR_U64(ctx, 12)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x16C0434u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16C0434u, 0x24BAECu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x24BAF4u;
label_24baf4:
    // 0x24baf4: 0x16f0146  .word       0x016F0146                   # srlv        $zero, $t7, $t3 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24baf4u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 15), GPR_U32(ctx, 11) & 0x1F));
label_24baf8:
    // 0x24baf8: 0x3a0089  .word       0x003A0089                   # jalr        $zero, $at # 001A0080 <InstrIdType: CPU_SPECIAL>
label_24bafc:
    if (ctx->pc == 0x24BAFCu) {
        ctx->pc = 0x24BAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BAF8u;
        // 0x24bafc: 0x10  mfhi        $zero (Delay Slot)
        SET_GPR_U64(ctx, 0, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = 0x24BB00u;
        goto label_24bb00;
    }
    ctx->pc = 0x24BAF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = 0x24BAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BAF8u;
        // 0x24bafc: 0x10  mfhi        $zero (Delay Slot)
        SET_GPR_U64(ctx, 0, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24BAF8u, 0x24BB00u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24BB00u;
label_24bb00:
    // 0x24bb00: 0x0  nop
    ctx->pc = 0x24bb00u;
    // NOP
label_24bb04:
    // 0x24bb04: 0x41a00000  .word       0x41A00000                   # INVALID     $t5, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24bb04u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xD at 0x24BB04 raw=0x41A00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24bb08:
    // 0x24bb08: 0x0  nop
    ctx->pc = 0x24bb08u;
    // NOP
label_24bb0c:
    // 0x24bb0c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24bb0cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_24bb10:
    // 0x24bb10: 0x42a00000  .word       0x42A00000                   # INVALID     $s5, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24bb10u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x15 at 0x24BB10 raw=0x42A00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24bb14:
    // 0x24bb14: 0x41a00000  .word       0x41A00000                   # INVALID     $t5, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24bb14u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xD at 0x24BB14 raw=0x41A00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24bb18:
    // 0x24bb18: 0x40800000  mtc0        $zero, Index
    ctx->pc = 0x24bb18u;
    ctx->cop0_index = GPR_U32(ctx, 0) & 0x3F;
label_24bb1c:
    // 0x24bb1c: 0x41000000  bc0f        . + 4 + (0x0 << 2)
label_24bb20:
    if (ctx->pc == 0x24BB20u) {
        ctx->pc = 0x24BB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BB1Cu;
        // 0x24bb20: 0x41a00000  .word       0x41A00000                   # INVALID     $t5, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0> (Delay Slot)
// //         throw std::runtime_error("Unhandled COP0 instruction format: 0xD at 0x24BB20 raw=0x41A00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x24BB24u;
        goto label_24bb24;
    }
    ctx->pc = 0x24BB1Cu;
    {
        const bool branch_taken_0x24bb1c = (false);
        ctx->pc = 0x24BB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BB1Cu;
        // 0x24bb20: 0x41a00000  .word       0x41A00000                   # INVALID     $t5, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0> (Delay Slot)
// //         throw std::runtime_error("Unhandled COP0 instruction format: 0xD at 0x24BB20 raw=0x41A00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        if (branch_taken_0x24bb1c) {
            ctx->pc = 0x24BB20u;
            goto label_24bb20;
        }
    }
    ctx->pc = 0x24BB24u;
label_24bb24:
    // 0x24bb24: 0x41a00000  .word       0x41A00000                   # INVALID     $t5, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24bb24u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xD at 0x24BB24 raw=0x41A00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24bb28:
    // 0x24bb28: 0xc1a00000  ll          $zero, 0x0($t5)
    ctx->pc = 0x24bb28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24bb2c:
    // 0x24bb2c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24bb2cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_24bb30:
    // 0x24bb30: 0x0  nop
    ctx->pc = 0x24bb30u;
    // NOP
label_24bb34:
    // 0x24bb34: 0x41a00000  .word       0x41A00000                   # INVALID     $t5, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24bb34u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xD at 0x24BB34 raw=0x41A00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24bb38:
    // 0x24bb38: 0x40000000  mfc0        $zero, Index
    ctx->pc = 0x24bb38u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_24bb3c:
    // 0x24bb3c: 0x40800000  mtc0        $zero, Index
    ctx->pc = 0x24bb3cu;
    ctx->cop0_index = GPR_U32(ctx, 0) & 0x3F;
label_24bb40:
    // 0x24bb40: 0x0  nop
    ctx->pc = 0x24bb40u;
    // NOP
label_24bb44:
    // 0x24bb44: 0x0  nop
    ctx->pc = 0x24bb44u;
    // NOP
label_24bb48:
    // 0x24bb48: 0x0  nop
    ctx->pc = 0x24bb48u;
    // NOP
label_24bb4c:
    // 0x24bb4c: 0x0  nop
    ctx->pc = 0x24bb4cu;
    // NOP
label_24bb50:
    // 0x24bb50: 0x0  nop
    ctx->pc = 0x24bb50u;
    // NOP
label_24bb54:
    // 0x24bb54: 0x0  nop
    ctx->pc = 0x24bb54u;
    // NOP
label_24bb58:
    // 0x24bb58: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24bb58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24bb5c:
    // 0x24bb5c: 0xc1800000  ll          $zero, 0x0($t4)
    ctx->pc = 0x24bb5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24bb60:
    // 0x24bb60: 0xc1a80000  ll          $t0, 0x0($t5)
    ctx->pc = 0x24bb60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24bb64:
    // 0x24bb64: 0x42800000  .word       0x42800000                   # INVALID     $s4, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24bb64u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24BB64 raw=0x42800000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24bb68:
    // 0x24bb68: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24bb68u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24BB68 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24bb6c:
    // 0x24bb6c: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24bb6cu;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24BB6C raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24bb70:
    // 0x24bb70: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24bb70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24bb74:
    // 0x24bb74: 0xc1800000  ll          $zero, 0x0($t4)
    ctx->pc = 0x24bb74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24bb78:
    // 0x24bb78: 0xc1a80000  ll          $t0, 0x0($t5)
    ctx->pc = 0x24bb78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24bb7c:
    // 0x24bb7c: 0x42800000  .word       0x42800000                   # INVALID     $s4, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24bb7cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24BB7C raw=0x42800000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24bb80:
    // 0x24bb80: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24bb80u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24BB80 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24bb84:
    // 0x24bb84: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24bb84u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24BB84 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24bb88:
    // 0x24bb88: 0x422c0000  .word       0x422C0000                   # INVALID     $s1, $t4, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24bb88u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x11 at 0x24BB88 raw=0x422C0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24bb8c:
    // 0x24bb8c: 0xc1000000  ll          $zero, 0x0($t0)
    ctx->pc = 0x24bb8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24bb90:
    // 0x24bb90: 0xc1000000  ll          $zero, 0x0($t0)
    ctx->pc = 0x24bb90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24bb94:
    // 0x24bb94: 0x41a80000  .word       0x41A80000                   # INVALID     $t5, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24bb94u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xD at 0x24BB94 raw=0x41A80000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24bb98:
    // 0x24bb98: 0x41800000  .word       0x41800000                   # INVALID     $t4, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24bb98u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xC at 0x24BB98 raw=0x41800000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24bb9c:
    // 0x24bb9c: 0x41700000  .word       0x41700000                   # INVALID     $t3, $s0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24bb9cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xB at 0x24BB9C raw=0x41700000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24bba0:
    // 0x24bba0: 0xc0800000  ll          $zero, 0x0($a0)
    ctx->pc = 0x24bba0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24bba4:
    // 0x24bba4: 0xc1900000  ll          $s0, 0x0($t4)
    ctx->pc = 0x24bba4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24bba8:
    // 0x24bba8: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24bba8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24bbac:
    // 0x24bbac: 0x42800000  .word       0x42800000                   # INVALID     $s4, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24bbacu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24BBAC raw=0x42800000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24bbb0:
    // 0x24bbb0: 0x42340000  .word       0x42340000                   # INVALID     $s1, $s4, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24bbb0u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x11 at 0x24BBB0 raw=0x42340000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24bbb4:
    // 0x24bbb4: 0x41d80000  .word       0x41D80000                   # INVALID     $t6, $t8, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24bbb4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xE at 0x24BBB4 raw=0x41D80000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24bbb8:
    // 0x24bbb8: 0xc1e80000  ll          $t0, 0x0($t7)
    ctx->pc = 0x24bbb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24bbbc:
    // 0x24bbbc: 0xc1500000  ll          $s0, 0x0($t2)
    ctx->pc = 0x24bbbcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24bbc0:
    // 0x24bbc0: 0xc2e00000  ll          $zero, 0x0($s7)
    ctx->pc = 0x24bbc0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 23), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24bbc4:
    // 0x24bbc4: 0x42cc0000  .word       0x42CC0000                   # INVALID     $s6, $t4, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24bbc4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x16 at 0x24BBC4 raw=0x42CC0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24bbc8:
    // 0x24bbc8: 0x42a60000  .word       0x42A60000                   # INVALID     $s5, $a2, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24bbc8u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x15 at 0x24BBC8 raw=0x42A60000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24bbcc:
    // 0x24bbcc: 0x43250000  .word       0x43250000                   # INVALID     $t9, $a1, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24bbccu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x19 at 0x24BBCC raw=0x43250000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24bbd0:
    // 0x24bbd0: 0xc0a00000  ll          $zero, 0x0($a1)
    ctx->pc = 0x24bbd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24bbd4:
    // 0x24bbd4: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24bbd4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24bbd8:
    // 0x24bbd8: 0xc1a80000  ll          $t0, 0x0($t5)
    ctx->pc = 0x24bbd8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24bbdc:
    // 0x24bbdc: 0x420c0000  .word       0x420C0000                   # INVALID     $s0, $t4, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24bbdcu;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24BBDC raw=0x420C0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24bbe0:
    // 0x24bbe0: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24bbe0u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24BBE0 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24bbe4:
    // 0x24bbe4: 0x42480000  .word       0x42480000                   # INVALID     $s2, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24bbe4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x12 at 0x24BBE4 raw=0x42480000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24bbe8:
    // 0x24bbe8: 0x42de0000  .word       0x42DE0000                   # INVALID     $s6, $fp, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24bbe8u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x16 at 0x24BBE8 raw=0x42DE0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24bbec:
    // 0x24bbec: 0x90009  .word       0x00090009                   # jalr        $zero, $zero # 00090000 <InstrIdType: CPU_SPECIAL>
label_24bbf0:
    if (ctx->pc == 0x24BBF0u) {
        ctx->pc = 0x24BBF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BBECu;
        // 0x24bbf0: 0x10011  .word       0x00010011                   # mthi        $zero # 00010000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        ctx->hi = GPR_U64(ctx, 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x24BBF4u;
        goto label_24bbf4;
    }
    ctx->pc = 0x24BBECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x24BBF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BBECu;
        // 0x24bbf0: 0x10011  .word       0x00010011                   # mthi        $zero # 00010000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        ctx->hi = GPR_U64(ctx, 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24BBECu, 0x24BBF4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24BBF4u;
label_24bbf4:
    // 0x24bbf4: 0x8a008a  .word       0x008A008A                   # movz        $zero, $a0, $t2 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24bbf4u;
    if (GPR_U64(ctx, 10) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 4));
label_24bbf8:
    // 0x24bbf8: 0x82f0048  j           func_BC0120
label_24bbfc:
    if (ctx->pc == 0x24BBFCu) {
        ctx->pc = 0x24BBFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BBF8u;
        // 0x24bbfc: 0x85c010e  j           func_1700438 (Delay Slot)
        // J 0x1700438 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x24BC00u;
        goto label_24bc00;
    }
    ctx->pc = 0x24BBF8u;
    ctx->pc = 0x24BBFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24BBF8u;
    // 0x24bbfc: 0x85c010e  j           func_1700438 (Delay Slot)
    // J 0x1700438 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0xBC0120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xBC0120u, 0x24BBF8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x24BC00u;
label_24bc00:
    // 0x24bc00: 0x1af01ae  .word       0x01AF01AE                   # dsub        $zero, $t5, $t7 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24bc00u;
    { int64_t a = (int64_t)GPR_S64(ctx, 13); int64_t b = (int64_t)GPR_S64(ctx, 15); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_24bc04:
    // 0x24bc04: 0x1700147  .word       0x01700147                   # srav        $zero, $s0, $t3 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24bc04u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 16), GPR_U32(ctx, 11) & 0x1F));
label_24bc08:
    // 0x24bc08: 0x3b008b  .word       0x003B008B                   # movn        $zero, $at, $k1 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24bc08u;
    if (GPR_U64(ctx, 27) != 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 1));
label_24bc0c:
    // 0x24bc0c: 0x12  mflo        $zero
    ctx->pc = 0x24bc0cu;
    SET_GPR_U64(ctx, 0, ctx->lo);
label_24bc10:
    // 0x24bc10: 0x0  nop
    ctx->pc = 0x24bc10u;
    // NOP
label_24bc14:
    // 0x24bc14: 0x0  nop
    ctx->pc = 0x24bc14u;
    // NOP
label_24bc18:
    // 0x24bc18: 0x0  nop
    ctx->pc = 0x24bc18u;
    // NOP
label_24bc1c:
    // 0x24bc1c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24bc1cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_24bc20:
    // 0x24bc20: 0x0  nop
    ctx->pc = 0x24bc20u;
    // NOP
label_24bc24:
    // 0x24bc24: 0x0  nop
    ctx->pc = 0x24bc24u;
    // NOP
label_24bc28:
    // 0x24bc28: 0x40000000  mfc0        $zero, Index
    ctx->pc = 0x24bc28u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_24bc2c:
    // 0x24bc2c: 0x41400000  .word       0x41400000                   # INVALID     $t2, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24bc2cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xA at 0x24BC2C raw=0x41400000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24bc30:
    // 0x24bc30: 0x0  nop
    ctx->pc = 0x24bc30u;
    // NOP
label_24bc34:
    // 0x24bc34: 0x0  nop
    ctx->pc = 0x24bc34u;
    // NOP
label_24bc38:
    // 0x24bc38: 0x0  nop
    ctx->pc = 0x24bc38u;
    // NOP
label_24bc3c:
    // 0x24bc3c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24bc3cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
    ctx->pc = 0x24bc40u;
    return;
}
