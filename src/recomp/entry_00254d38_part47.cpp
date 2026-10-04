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

// Function: entry_00254d38
// Address: 0x254d38 - 0x27d478
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void entry_00254d38_part47(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x26b498u: goto label_26b498;
        case 0x26b49cu: goto label_26b49c;
        case 0x26b4a0u: goto label_26b4a0;
        case 0x26b4a4u: goto label_26b4a4;
        case 0x26b4a8u: goto label_26b4a8;
        case 0x26b4acu: goto label_26b4ac;
        case 0x26b4b0u: goto label_26b4b0;
        case 0x26b4b4u: goto label_26b4b4;
        case 0x26b4b8u: goto label_26b4b8;
        case 0x26b4bcu: goto label_26b4bc;
        case 0x26b4c0u: goto label_26b4c0;
        case 0x26b4c4u: goto label_26b4c4;
        case 0x26b4c8u: goto label_26b4c8;
        case 0x26b4ccu: goto label_26b4cc;
        case 0x26b4d0u: goto label_26b4d0;
        case 0x26b4d4u: goto label_26b4d4;
        case 0x26b4d8u: goto label_26b4d8;
        case 0x26b4dcu: goto label_26b4dc;
        case 0x26b4e0u: goto label_26b4e0;
        case 0x26b4e4u: goto label_26b4e4;
        case 0x26b4e8u: goto label_26b4e8;
        case 0x26b4ecu: goto label_26b4ec;
        case 0x26b4f0u: goto label_26b4f0;
        case 0x26b4f4u: goto label_26b4f4;
        case 0x26b4f8u: goto label_26b4f8;
        case 0x26b4fcu: goto label_26b4fc;
        case 0x26b500u: goto label_26b500;
        case 0x26b504u: goto label_26b504;
        case 0x26b508u: goto label_26b508;
        case 0x26b50cu: goto label_26b50c;
        case 0x26b510u: goto label_26b510;
        case 0x26b514u: goto label_26b514;
        case 0x26b518u: goto label_26b518;
        case 0x26b51cu: goto label_26b51c;
        case 0x26b520u: goto label_26b520;
        case 0x26b524u: goto label_26b524;
        case 0x26b528u: goto label_26b528;
        case 0x26b52cu: goto label_26b52c;
        case 0x26b530u: goto label_26b530;
        case 0x26b534u: goto label_26b534;
        case 0x26b538u: goto label_26b538;
        case 0x26b53cu: goto label_26b53c;
        case 0x26b540u: goto label_26b540;
        case 0x26b544u: goto label_26b544;
        case 0x26b548u: goto label_26b548;
        case 0x26b54cu: goto label_26b54c;
        case 0x26b550u: goto label_26b550;
        case 0x26b554u: goto label_26b554;
        case 0x26b558u: goto label_26b558;
        case 0x26b55cu: goto label_26b55c;
        case 0x26b560u: goto label_26b560;
        case 0x26b564u: goto label_26b564;
        case 0x26b568u: goto label_26b568;
        case 0x26b56cu: goto label_26b56c;
        case 0x26b570u: goto label_26b570;
        case 0x26b574u: goto label_26b574;
        case 0x26b578u: goto label_26b578;
        case 0x26b57cu: goto label_26b57c;
        case 0x26b580u: goto label_26b580;
        case 0x26b584u: goto label_26b584;
        case 0x26b588u: goto label_26b588;
        case 0x26b58cu: goto label_26b58c;
        case 0x26b590u: goto label_26b590;
        case 0x26b594u: goto label_26b594;
        case 0x26b598u: goto label_26b598;
        case 0x26b59cu: goto label_26b59c;
        case 0x26b5a0u: goto label_26b5a0;
        case 0x26b5a4u: goto label_26b5a4;
        case 0x26b5a8u: goto label_26b5a8;
        case 0x26b5acu: goto label_26b5ac;
        case 0x26b5b0u: goto label_26b5b0;
        case 0x26b5b4u: goto label_26b5b4;
        case 0x26b5b8u: goto label_26b5b8;
        case 0x26b5bcu: goto label_26b5bc;
        case 0x26b5c0u: goto label_26b5c0;
        case 0x26b5c4u: goto label_26b5c4;
        case 0x26b5c8u: goto label_26b5c8;
        case 0x26b5ccu: goto label_26b5cc;
        case 0x26b5d0u: goto label_26b5d0;
        case 0x26b5d4u: goto label_26b5d4;
        case 0x26b5d8u: goto label_26b5d8;
        case 0x26b5dcu: goto label_26b5dc;
        case 0x26b5e0u: goto label_26b5e0;
        case 0x26b5e4u: goto label_26b5e4;
        case 0x26b5e8u: goto label_26b5e8;
        case 0x26b5ecu: goto label_26b5ec;
        case 0x26b5f0u: goto label_26b5f0;
        case 0x26b5f4u: goto label_26b5f4;
        case 0x26b5f8u: goto label_26b5f8;
        case 0x26b5fcu: goto label_26b5fc;
        case 0x26b600u: goto label_26b600;
        case 0x26b604u: goto label_26b604;
        case 0x26b608u: goto label_26b608;
        case 0x26b60cu: goto label_26b60c;
        case 0x26b610u: goto label_26b610;
        case 0x26b614u: goto label_26b614;
        case 0x26b618u: goto label_26b618;
        case 0x26b61cu: goto label_26b61c;
        case 0x26b620u: goto label_26b620;
        case 0x26b624u: goto label_26b624;
        case 0x26b628u: goto label_26b628;
        case 0x26b62cu: goto label_26b62c;
        case 0x26b630u: goto label_26b630;
        case 0x26b634u: goto label_26b634;
        case 0x26b638u: goto label_26b638;
        case 0x26b63cu: goto label_26b63c;
        case 0x26b640u: goto label_26b640;
        case 0x26b644u: goto label_26b644;
        case 0x26b648u: goto label_26b648;
        case 0x26b64cu: goto label_26b64c;
        case 0x26b650u: goto label_26b650;
        case 0x26b654u: goto label_26b654;
        case 0x26b658u: goto label_26b658;
        case 0x26b65cu: goto label_26b65c;
        case 0x26b660u: goto label_26b660;
        case 0x26b664u: goto label_26b664;
        case 0x26b668u: goto label_26b668;
        case 0x26b66cu: goto label_26b66c;
        case 0x26b670u: goto label_26b670;
        case 0x26b674u: goto label_26b674;
        case 0x26b678u: goto label_26b678;
        case 0x26b67cu: goto label_26b67c;
        case 0x26b680u: goto label_26b680;
        case 0x26b684u: goto label_26b684;
        case 0x26b688u: goto label_26b688;
        case 0x26b68cu: goto label_26b68c;
        case 0x26b690u: goto label_26b690;
        case 0x26b694u: goto label_26b694;
        case 0x26b698u: goto label_26b698;
        case 0x26b69cu: goto label_26b69c;
        case 0x26b6a0u: goto label_26b6a0;
        case 0x26b6a4u: goto label_26b6a4;
        case 0x26b6a8u: goto label_26b6a8;
        case 0x26b6acu: goto label_26b6ac;
        case 0x26b6b0u: goto label_26b6b0;
        case 0x26b6b4u: goto label_26b6b4;
        case 0x26b6b8u: goto label_26b6b8;
        case 0x26b6bcu: goto label_26b6bc;
        case 0x26b6c0u: goto label_26b6c0;
        case 0x26b6c4u: goto label_26b6c4;
        case 0x26b6c8u: goto label_26b6c8;
        case 0x26b6ccu: goto label_26b6cc;
        case 0x26b6d0u: goto label_26b6d0;
        case 0x26b6d4u: goto label_26b6d4;
        case 0x26b6d8u: goto label_26b6d8;
        case 0x26b6dcu: goto label_26b6dc;
        case 0x26b6e0u: goto label_26b6e0;
        case 0x26b6e4u: goto label_26b6e4;
        case 0x26b6e8u: goto label_26b6e8;
        case 0x26b6ecu: goto label_26b6ec;
        case 0x26b6f0u: goto label_26b6f0;
        case 0x26b6f4u: goto label_26b6f4;
        case 0x26b6f8u: goto label_26b6f8;
        case 0x26b6fcu: goto label_26b6fc;
        case 0x26b700u: goto label_26b700;
        case 0x26b704u: goto label_26b704;
        case 0x26b708u: goto label_26b708;
        case 0x26b70cu: goto label_26b70c;
        case 0x26b710u: goto label_26b710;
        case 0x26b714u: goto label_26b714;
        case 0x26b718u: goto label_26b718;
        case 0x26b71cu: goto label_26b71c;
        case 0x26b720u: goto label_26b720;
        case 0x26b724u: goto label_26b724;
        case 0x26b728u: goto label_26b728;
        case 0x26b72cu: goto label_26b72c;
        case 0x26b730u: goto label_26b730;
        case 0x26b734u: goto label_26b734;
        case 0x26b738u: goto label_26b738;
        case 0x26b73cu: goto label_26b73c;
        case 0x26b740u: goto label_26b740;
        case 0x26b744u: goto label_26b744;
        case 0x26b748u: goto label_26b748;
        case 0x26b74cu: goto label_26b74c;
        case 0x26b750u: goto label_26b750;
        case 0x26b754u: goto label_26b754;
        case 0x26b758u: goto label_26b758;
        case 0x26b75cu: goto label_26b75c;
        case 0x26b760u: goto label_26b760;
        case 0x26b764u: goto label_26b764;
        case 0x26b768u: goto label_26b768;
        case 0x26b76cu: goto label_26b76c;
        case 0x26b770u: goto label_26b770;
        case 0x26b774u: goto label_26b774;
        case 0x26b778u: goto label_26b778;
        case 0x26b77cu: goto label_26b77c;
        case 0x26b780u: goto label_26b780;
        case 0x26b784u: goto label_26b784;
        case 0x26b788u: goto label_26b788;
        case 0x26b78cu: goto label_26b78c;
        case 0x26b790u: goto label_26b790;
        case 0x26b794u: goto label_26b794;
        case 0x26b798u: goto label_26b798;
        case 0x26b79cu: goto label_26b79c;
        case 0x26b7a0u: goto label_26b7a0;
        case 0x26b7a4u: goto label_26b7a4;
        case 0x26b7a8u: goto label_26b7a8;
        case 0x26b7acu: goto label_26b7ac;
        case 0x26b7b0u: goto label_26b7b0;
        case 0x26b7b4u: goto label_26b7b4;
        case 0x26b7b8u: goto label_26b7b8;
        case 0x26b7bcu: goto label_26b7bc;
        case 0x26b7c0u: goto label_26b7c0;
        case 0x26b7c4u: goto label_26b7c4;
        case 0x26b7c8u: goto label_26b7c8;
        case 0x26b7ccu: goto label_26b7cc;
        case 0x26b7d0u: goto label_26b7d0;
        case 0x26b7d4u: goto label_26b7d4;
        case 0x26b7d8u: goto label_26b7d8;
        case 0x26b7dcu: goto label_26b7dc;
        case 0x26b7e0u: goto label_26b7e0;
        case 0x26b7e4u: goto label_26b7e4;
        case 0x26b7e8u: goto label_26b7e8;
        case 0x26b7ecu: goto label_26b7ec;
        case 0x26b7f0u: goto label_26b7f0;
        case 0x26b7f4u: goto label_26b7f4;
        case 0x26b7f8u: goto label_26b7f8;
        case 0x26b7fcu: goto label_26b7fc;
        case 0x26b800u: goto label_26b800;
        case 0x26b804u: goto label_26b804;
        case 0x26b808u: goto label_26b808;
        case 0x26b80cu: goto label_26b80c;
        case 0x26b810u: goto label_26b810;
        case 0x26b814u: goto label_26b814;
        case 0x26b818u: goto label_26b818;
        case 0x26b81cu: goto label_26b81c;
        case 0x26b820u: goto label_26b820;
        case 0x26b824u: goto label_26b824;
        case 0x26b828u: goto label_26b828;
        case 0x26b82cu: goto label_26b82c;
        case 0x26b830u: goto label_26b830;
        case 0x26b834u: goto label_26b834;
        case 0x26b838u: goto label_26b838;
        case 0x26b83cu: goto label_26b83c;
        case 0x26b840u: goto label_26b840;
        case 0x26b844u: goto label_26b844;
        case 0x26b848u: goto label_26b848;
        case 0x26b84cu: goto label_26b84c;
        case 0x26b850u: goto label_26b850;
        case 0x26b854u: goto label_26b854;
        case 0x26b858u: goto label_26b858;
        case 0x26b85cu: goto label_26b85c;
        case 0x26b860u: goto label_26b860;
        case 0x26b864u: goto label_26b864;
        case 0x26b868u: goto label_26b868;
        case 0x26b86cu: goto label_26b86c;
        case 0x26b870u: goto label_26b870;
        case 0x26b874u: goto label_26b874;
        case 0x26b878u: goto label_26b878;
        case 0x26b87cu: goto label_26b87c;
        case 0x26b880u: goto label_26b880;
        case 0x26b884u: goto label_26b884;
        case 0x26b888u: goto label_26b888;
        case 0x26b88cu: goto label_26b88c;
        case 0x26b890u: goto label_26b890;
        case 0x26b894u: goto label_26b894;
        case 0x26b898u: goto label_26b898;
        case 0x26b89cu: goto label_26b89c;
        case 0x26b8a0u: goto label_26b8a0;
        case 0x26b8a4u: goto label_26b8a4;
        case 0x26b8a8u: goto label_26b8a8;
        case 0x26b8acu: goto label_26b8ac;
        case 0x26b8b0u: goto label_26b8b0;
        case 0x26b8b4u: goto label_26b8b4;
        case 0x26b8b8u: goto label_26b8b8;
        case 0x26b8bcu: goto label_26b8bc;
        case 0x26b8c0u: goto label_26b8c0;
        case 0x26b8c4u: goto label_26b8c4;
        case 0x26b8c8u: goto label_26b8c8;
        case 0x26b8ccu: goto label_26b8cc;
        case 0x26b8d0u: goto label_26b8d0;
        case 0x26b8d4u: goto label_26b8d4;
        case 0x26b8d8u: goto label_26b8d8;
        case 0x26b8dcu: goto label_26b8dc;
        case 0x26b8e0u: goto label_26b8e0;
        case 0x26b8e4u: goto label_26b8e4;
        case 0x26b8e8u: goto label_26b8e8;
        case 0x26b8ecu: goto label_26b8ec;
        case 0x26b8f0u: goto label_26b8f0;
        case 0x26b8f4u: goto label_26b8f4;
        case 0x26b8f8u: goto label_26b8f8;
        case 0x26b8fcu: goto label_26b8fc;
        case 0x26b900u: goto label_26b900;
        case 0x26b904u: goto label_26b904;
        case 0x26b908u: goto label_26b908;
        case 0x26b90cu: goto label_26b90c;
        case 0x26b910u: goto label_26b910;
        case 0x26b914u: goto label_26b914;
        case 0x26b918u: goto label_26b918;
        case 0x26b91cu: goto label_26b91c;
        case 0x26b920u: goto label_26b920;
        case 0x26b924u: goto label_26b924;
        case 0x26b928u: goto label_26b928;
        case 0x26b92cu: goto label_26b92c;
        case 0x26b930u: goto label_26b930;
        case 0x26b934u: goto label_26b934;
        case 0x26b938u: goto label_26b938;
        case 0x26b93cu: goto label_26b93c;
        case 0x26b940u: goto label_26b940;
        case 0x26b944u: goto label_26b944;
        case 0x26b948u: goto label_26b948;
        case 0x26b94cu: goto label_26b94c;
        case 0x26b950u: goto label_26b950;
        case 0x26b954u: goto label_26b954;
        case 0x26b958u: goto label_26b958;
        case 0x26b95cu: goto label_26b95c;
        case 0x26b960u: goto label_26b960;
        case 0x26b964u: goto label_26b964;
        case 0x26b968u: goto label_26b968;
        case 0x26b96cu: goto label_26b96c;
        case 0x26b970u: goto label_26b970;
        case 0x26b974u: goto label_26b974;
        case 0x26b978u: goto label_26b978;
        case 0x26b97cu: goto label_26b97c;
        case 0x26b980u: goto label_26b980;
        case 0x26b984u: goto label_26b984;
        case 0x26b988u: goto label_26b988;
        case 0x26b98cu: goto label_26b98c;
        case 0x26b990u: goto label_26b990;
        case 0x26b994u: goto label_26b994;
        case 0x26b998u: goto label_26b998;
        case 0x26b99cu: goto label_26b99c;
        case 0x26b9a0u: goto label_26b9a0;
        case 0x26b9a4u: goto label_26b9a4;
        case 0x26b9a8u: goto label_26b9a8;
        case 0x26b9acu: goto label_26b9ac;
        case 0x26b9b0u: goto label_26b9b0;
        case 0x26b9b4u: goto label_26b9b4;
        case 0x26b9b8u: goto label_26b9b8;
        case 0x26b9bcu: goto label_26b9bc;
        case 0x26b9c0u: goto label_26b9c0;
        case 0x26b9c4u: goto label_26b9c4;
        case 0x26b9c8u: goto label_26b9c8;
        case 0x26b9ccu: goto label_26b9cc;
        case 0x26b9d0u: goto label_26b9d0;
        case 0x26b9d4u: goto label_26b9d4;
        case 0x26b9d8u: goto label_26b9d8;
        case 0x26b9dcu: goto label_26b9dc;
        case 0x26b9e0u: goto label_26b9e0;
        case 0x26b9e4u: goto label_26b9e4;
        case 0x26b9e8u: goto label_26b9e8;
        case 0x26b9ecu: goto label_26b9ec;
        case 0x26b9f0u: goto label_26b9f0;
        case 0x26b9f4u: goto label_26b9f4;
        case 0x26b9f8u: goto label_26b9f8;
        case 0x26b9fcu: goto label_26b9fc;
        case 0x26ba00u: goto label_26ba00;
        case 0x26ba04u: goto label_26ba04;
        case 0x26ba08u: goto label_26ba08;
        case 0x26ba0cu: goto label_26ba0c;
        case 0x26ba10u: goto label_26ba10;
        case 0x26ba14u: goto label_26ba14;
        case 0x26ba18u: goto label_26ba18;
        case 0x26ba1cu: goto label_26ba1c;
        case 0x26ba20u: goto label_26ba20;
        case 0x26ba24u: goto label_26ba24;
        case 0x26ba28u: goto label_26ba28;
        case 0x26ba2cu: goto label_26ba2c;
        case 0x26ba30u: goto label_26ba30;
        case 0x26ba34u: goto label_26ba34;
        case 0x26ba38u: goto label_26ba38;
        case 0x26ba3cu: goto label_26ba3c;
        case 0x26ba40u: goto label_26ba40;
        case 0x26ba44u: goto label_26ba44;
        case 0x26ba48u: goto label_26ba48;
        case 0x26ba4cu: goto label_26ba4c;
        case 0x26ba50u: goto label_26ba50;
        case 0x26ba54u: goto label_26ba54;
        case 0x26ba58u: goto label_26ba58;
        case 0x26ba5cu: goto label_26ba5c;
        case 0x26ba60u: goto label_26ba60;
        case 0x26ba64u: goto label_26ba64;
        case 0x26ba68u: goto label_26ba68;
        case 0x26ba6cu: goto label_26ba6c;
        case 0x26ba70u: goto label_26ba70;
        case 0x26ba74u: goto label_26ba74;
        case 0x26ba78u: goto label_26ba78;
        case 0x26ba7cu: goto label_26ba7c;
        case 0x26ba80u: goto label_26ba80;
        case 0x26ba84u: goto label_26ba84;
        case 0x26ba88u: goto label_26ba88;
        case 0x26ba8cu: goto label_26ba8c;
        case 0x26ba90u: goto label_26ba90;
        case 0x26ba94u: goto label_26ba94;
        case 0x26ba98u: goto label_26ba98;
        case 0x26ba9cu: goto label_26ba9c;
        case 0x26baa0u: goto label_26baa0;
        case 0x26baa4u: goto label_26baa4;
        case 0x26baa8u: goto label_26baa8;
        case 0x26baacu: goto label_26baac;
        case 0x26bab0u: goto label_26bab0;
        case 0x26bab4u: goto label_26bab4;
        case 0x26bab8u: goto label_26bab8;
        case 0x26babcu: goto label_26babc;
        case 0x26bac0u: goto label_26bac0;
        case 0x26bac4u: goto label_26bac4;
        case 0x26bac8u: goto label_26bac8;
        case 0x26baccu: goto label_26bacc;
        case 0x26bad0u: goto label_26bad0;
        case 0x26bad4u: goto label_26bad4;
        case 0x26bad8u: goto label_26bad8;
        case 0x26badcu: goto label_26badc;
        case 0x26bae0u: goto label_26bae0;
        case 0x26bae4u: goto label_26bae4;
        case 0x26bae8u: goto label_26bae8;
        case 0x26baecu: goto label_26baec;
        case 0x26baf0u: goto label_26baf0;
        case 0x26baf4u: goto label_26baf4;
        case 0x26baf8u: goto label_26baf8;
        case 0x26bafcu: goto label_26bafc;
        case 0x26bb00u: goto label_26bb00;
        case 0x26bb04u: goto label_26bb04;
        case 0x26bb08u: goto label_26bb08;
        case 0x26bb0cu: goto label_26bb0c;
        case 0x26bb10u: goto label_26bb10;
        case 0x26bb14u: goto label_26bb14;
        case 0x26bb18u: goto label_26bb18;
        case 0x26bb1cu: goto label_26bb1c;
        case 0x26bb20u: goto label_26bb20;
        case 0x26bb24u: goto label_26bb24;
        case 0x26bb28u: goto label_26bb28;
        case 0x26bb2cu: goto label_26bb2c;
        case 0x26bb30u: goto label_26bb30;
        case 0x26bb34u: goto label_26bb34;
        case 0x26bb38u: goto label_26bb38;
        case 0x26bb3cu: goto label_26bb3c;
        case 0x26bb40u: goto label_26bb40;
        case 0x26bb44u: goto label_26bb44;
        case 0x26bb48u: goto label_26bb48;
        case 0x26bb4cu: goto label_26bb4c;
        case 0x26bb50u: goto label_26bb50;
        case 0x26bb54u: goto label_26bb54;
        case 0x26bb58u: goto label_26bb58;
        case 0x26bb5cu: goto label_26bb5c;
        case 0x26bb60u: goto label_26bb60;
        case 0x26bb64u: goto label_26bb64;
        case 0x26bb68u: goto label_26bb68;
        case 0x26bb6cu: goto label_26bb6c;
        case 0x26bb70u: goto label_26bb70;
        case 0x26bb74u: goto label_26bb74;
        case 0x26bb78u: goto label_26bb78;
        case 0x26bb7cu: goto label_26bb7c;
        case 0x26bb80u: goto label_26bb80;
        case 0x26bb84u: goto label_26bb84;
        case 0x26bb88u: goto label_26bb88;
        case 0x26bb8cu: goto label_26bb8c;
        case 0x26bb90u: goto label_26bb90;
        case 0x26bb94u: goto label_26bb94;
        case 0x26bb98u: goto label_26bb98;
        case 0x26bb9cu: goto label_26bb9c;
        case 0x26bba0u: goto label_26bba0;
        case 0x26bba4u: goto label_26bba4;
        case 0x26bba8u: goto label_26bba8;
        case 0x26bbacu: goto label_26bbac;
        case 0x26bbb0u: goto label_26bbb0;
        case 0x26bbb4u: goto label_26bbb4;
        case 0x26bbb8u: goto label_26bbb8;
        case 0x26bbbcu: goto label_26bbbc;
        case 0x26bbc0u: goto label_26bbc0;
        case 0x26bbc4u: goto label_26bbc4;
        case 0x26bbc8u: goto label_26bbc8;
        case 0x26bbccu: goto label_26bbcc;
        case 0x26bbd0u: goto label_26bbd0;
        case 0x26bbd4u: goto label_26bbd4;
        case 0x26bbd8u: goto label_26bbd8;
        case 0x26bbdcu: goto label_26bbdc;
        case 0x26bbe0u: goto label_26bbe0;
        case 0x26bbe4u: goto label_26bbe4;
        case 0x26bbe8u: goto label_26bbe8;
        case 0x26bbecu: goto label_26bbec;
        case 0x26bbf0u: goto label_26bbf0;
        case 0x26bbf4u: goto label_26bbf4;
        case 0x26bbf8u: goto label_26bbf8;
        case 0x26bbfcu: goto label_26bbfc;
        case 0x26bc00u: goto label_26bc00;
        case 0x26bc04u: goto label_26bc04;
        case 0x26bc08u: goto label_26bc08;
        case 0x26bc0cu: goto label_26bc0c;
        case 0x26bc10u: goto label_26bc10;
        case 0x26bc14u: goto label_26bc14;
        case 0x26bc18u: goto label_26bc18;
        case 0x26bc1cu: goto label_26bc1c;
        case 0x26bc20u: goto label_26bc20;
        case 0x26bc24u: goto label_26bc24;
        case 0x26bc28u: goto label_26bc28;
        case 0x26bc2cu: goto label_26bc2c;
        case 0x26bc30u: goto label_26bc30;
        case 0x26bc34u: goto label_26bc34;
        case 0x26bc38u: goto label_26bc38;
        case 0x26bc3cu: goto label_26bc3c;
        case 0x26bc40u: goto label_26bc40;
        case 0x26bc44u: goto label_26bc44;
        case 0x26bc48u: goto label_26bc48;
        case 0x26bc4cu: goto label_26bc4c;
        case 0x26bc50u: goto label_26bc50;
        case 0x26bc54u: goto label_26bc54;
        case 0x26bc58u: goto label_26bc58;
        case 0x26bc5cu: goto label_26bc5c;
        case 0x26bc60u: goto label_26bc60;
        case 0x26bc64u: goto label_26bc64;
        default: return;
    }

label_26b498:
    // 0x26b498: 0x0  nop
    ctx->pc = 0x26b498u;
    // NOP
label_26b49c:
    // 0x26b49c: 0x0  nop
    ctx->pc = 0x26b49cu;
    // NOP
label_26b4a0:
    // 0x26b4a0: 0x14a3  .word       0x000014A3                   # negu        $v0, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26b4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_26b4a4:
    // 0x26b4a4: 0x6960  .word       0x00006960                   # add         $t5, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26b4a4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_26b4a8:
    // 0x26b4a8: 0x0  nop
    ctx->pc = 0x26b4a8u;
    // NOP
label_26b4ac:
    // 0x26b4ac: 0x0  nop
    ctx->pc = 0x26b4acu;
    // NOP
label_26b4b0:
    // 0x26b4b0: 0x14b1  tgeu        $zero, $zero, 82
    ctx->pc = 0x26b4b0u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26b4b4:
    // 0x26b4b4: 0x8480  sll         $s0, $zero, 18
    ctx->pc = 0x26b4b4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 0), 18));
label_26b4b8:
    // 0x26b4b8: 0x0  nop
    ctx->pc = 0x26b4b8u;
    // NOP
label_26b4bc:
    // 0x26b4bc: 0x0  nop
    ctx->pc = 0x26b4bcu;
    // NOP
label_26b4c0:
    // 0x26b4c0: 0x14c2  srl         $v0, $zero, 19
    ctx->pc = 0x26b4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 0), 19));
label_26b4c4:
    // 0x26b4c4: 0x7450  .word       0x00007450                   # mfhi        $t6 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26b4c4u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_26b4c8:
    // 0x26b4c8: 0x0  nop
    ctx->pc = 0x26b4c8u;
    // NOP
label_26b4cc:
    // 0x26b4cc: 0x0  nop
    ctx->pc = 0x26b4ccu;
    // NOP
label_26b4d0:
    // 0x26b4d0: 0x14d1  .word       0x000014D1                   # mthi        $zero # 000014C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26b4d0u;
    ctx->hi = GPR_U64(ctx, 0);
label_26b4d4:
    // 0x26b4d4: 0x109e0  .word       0x000109E0                   # add         $at, $zero, $at # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26b4d4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 1, (int32_t)result);     } }
label_26b4d8:
    // 0x26b4d8: 0x0  nop
    ctx->pc = 0x26b4d8u;
    // NOP
label_26b4dc:
    // 0x26b4dc: 0x0  nop
    ctx->pc = 0x26b4dcu;
    // NOP
label_26b4e0:
    // 0x26b4e0: 0x14f3  tltu        $zero, $zero, 83
    ctx->pc = 0x26b4e0u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26b4e4:
    // 0x26b4e4: 0x5360  .word       0x00005360                   # add         $t2, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26b4e4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
label_26b4e8:
    // 0x26b4e8: 0x0  nop
    ctx->pc = 0x26b4e8u;
    // NOP
label_26b4ec:
    // 0x26b4ec: 0x0  nop
    ctx->pc = 0x26b4ecu;
    // NOP
label_26b4f0:
    // 0x26b4f0: 0x14fe  dsrl32      $v0, $zero, 19
    ctx->pc = 0x26b4f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) >> (32 + 19));
label_26b4f4:
    // 0x26b4f4: 0x7480  sll         $t6, $zero, 18
    ctx->pc = 0x26b4f4u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 0), 18));
label_26b4f8:
    // 0x26b4f8: 0x0  nop
    ctx->pc = 0x26b4f8u;
    // NOP
label_26b4fc:
    // 0x26b4fc: 0x0  nop
    ctx->pc = 0x26b4fcu;
    // NOP
label_26b500:
    // 0x26b500: 0x150d  break       0, 84
    ctx->pc = 0x26b500u;
    runtime->handleBreak(rdram, ctx);
label_26b504:
    // 0x26b504: 0x66d0  .word       0x000066D0                   # mfhi        $t4 # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26b504u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_26b508:
    // 0x26b508: 0x0  nop
    ctx->pc = 0x26b508u;
    // NOP
label_26b50c:
    // 0x26b50c: 0x0  nop
    ctx->pc = 0x26b50cu;
    // NOP
label_26b510:
    // 0x26b510: 0x151a  .word       0x0000151A                   # div         $v0, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26b510u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_26b514:
    // 0x26b514: 0xa310  .word       0x0000A310                   # mfhi        $s4 # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26b514u;
    SET_GPR_U64(ctx, 20, ctx->hi);
label_26b518:
    // 0x26b518: 0x0  nop
    ctx->pc = 0x26b518u;
    // NOP
label_26b51c:
    // 0x26b51c: 0x0  nop
    ctx->pc = 0x26b51cu;
    // NOP
label_26b520:
    // 0x26b520: 0x152f  .word       0x0000152F                   # dsubu       $v0, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26b520u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_26b524:
    // 0x26b524: 0x9bc0  sll         $s3, $zero, 15
    ctx->pc = 0x26b524u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 0), 15));
label_26b528:
    // 0x26b528: 0x0  nop
    ctx->pc = 0x26b528u;
    // NOP
label_26b52c:
    // 0x26b52c: 0x0  nop
    ctx->pc = 0x26b52cu;
    // NOP
label_26b530:
    // 0x26b530: 0x1543  sra         $v0, $zero, 21
    ctx->pc = 0x26b530u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 0), 21));
label_26b534:
    // 0x26b534: 0x8410  .word       0x00008410                   # mfhi        $s0 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26b534u;
    SET_GPR_U64(ctx, 16, ctx->hi);
label_26b538:
    // 0x26b538: 0x0  nop
    ctx->pc = 0x26b538u;
    // NOP
label_26b53c:
    // 0x26b53c: 0x0  nop
    ctx->pc = 0x26b53cu;
    // NOP
label_26b540:
    // 0x26b540: 0x1554  .word       0x00001554                   # dsllv       $v0, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26b540u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_26b544:
    // 0x26b544: 0x124a0  .word       0x000124A0                   # add         $a0, $zero, $at # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26b544u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 4, (int32_t)result);     } }
label_26b548:
    // 0x26b548: 0x0  nop
    ctx->pc = 0x26b548u;
    // NOP
label_26b54c:
    // 0x26b54c: 0x0  nop
    ctx->pc = 0x26b54cu;
    // NOP
label_26b550:
    // 0x26b550: 0x1579  .word       0x00001579                   # INVALID     $zero, $zero, 0x1579 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26b550u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x26B550 raw=0x00001579"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26b554:
    // 0x26b554: 0x4700  sll         $t0, $zero, 28
    ctx->pc = 0x26b554u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 28));
label_26b558:
    // 0x26b558: 0x0  nop
    ctx->pc = 0x26b558u;
    // NOP
label_26b55c:
    // 0x26b55c: 0x0  nop
    ctx->pc = 0x26b55cu;
    // NOP
label_26b560:
    // 0x26b560: 0x1582  srl         $v0, $zero, 22
    ctx->pc = 0x26b560u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 0), 22));
label_26b564:
    // 0x26b564: 0x5c80  sll         $t3, $zero, 18
    ctx->pc = 0x26b564u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 0), 18));
label_26b568:
    // 0x26b568: 0x0  nop
    ctx->pc = 0x26b568u;
    // NOP
label_26b56c:
    // 0x26b56c: 0x0  nop
    ctx->pc = 0x26b56cu;
    // NOP
label_26b570:
    // 0x26b570: 0x158e  .word       0x0000158E                   # INVALID     $zero, $zero, 0x158E # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26b570u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x26B570 raw=0x0000158E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26b574:
    // 0x26b574: 0x5000  sll         $t2, $zero, 0
    ctx->pc = 0x26b574u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_26b578:
    // 0x26b578: 0x0  nop
    ctx->pc = 0x26b578u;
    // NOP
label_26b57c:
    // 0x26b57c: 0x0  nop
    ctx->pc = 0x26b57cu;
    // NOP
label_26b580:
    // 0x26b580: 0x1598  .word       0x00001598                   # mult        $v0, $zero, $zero # 00000580 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x26b580u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_26b584:
    // 0x26b584: 0x8c30  tge         $zero, $zero, 560
    ctx->pc = 0x26b584u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26b588:
    // 0x26b588: 0x0  nop
    ctx->pc = 0x26b588u;
    // NOP
label_26b58c:
    // 0x26b58c: 0x0  nop
    ctx->pc = 0x26b58cu;
    // NOP
label_26b590:
    // 0x26b590: 0x15aa  .word       0x000015AA                   # slt         $v0, $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26b590u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_26b594:
    // 0x26b594: 0xc3a0  .word       0x0000C3A0                   # add         $t8, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26b594u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 24, (int32_t)result);     } }
label_26b598:
    // 0x26b598: 0x0  nop
    ctx->pc = 0x26b598u;
    // NOP
label_26b59c:
    // 0x26b59c: 0x0  nop
    ctx->pc = 0x26b59cu;
    // NOP
label_26b5a0:
    // 0x26b5a0: 0x15c3  sra         $v0, $zero, 23
    ctx->pc = 0x26b5a0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 0), 23));
label_26b5a4:
    // 0x26b5a4: 0x6e10  .word       0x00006E10                   # mfhi        $t5 # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26b5a4u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_26b5a8:
    // 0x26b5a8: 0x0  nop
    ctx->pc = 0x26b5a8u;
    // NOP
label_26b5ac:
    // 0x26b5ac: 0x0  nop
    ctx->pc = 0x26b5acu;
    // NOP
label_26b5b0:
    // 0x26b5b0: 0x15d1  .word       0x000015D1                   # mthi        $zero # 000015C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26b5b0u;
    ctx->hi = GPR_U64(ctx, 0);
label_26b5b4:
    // 0x26b5b4: 0x174f0  tge         $zero, $at, 467
    ctx->pc = 0x26b5b4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_26b5b8:
    // 0x26b5b8: 0x0  nop
    ctx->pc = 0x26b5b8u;
    // NOP
label_26b5bc:
    // 0x26b5bc: 0x0  nop
    ctx->pc = 0x26b5bcu;
    // NOP
label_26b5c0:
    // 0x26b5c0: 0x1600  sll         $v0, $zero, 24
    ctx->pc = 0x26b5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 0), 24));
label_26b5c4:
    // 0x26b5c4: 0x6410  .word       0x00006410                   # mfhi        $t4 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26b5c4u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_26b5c8:
    // 0x26b5c8: 0x0  nop
    ctx->pc = 0x26b5c8u;
    // NOP
label_26b5cc:
    // 0x26b5cc: 0x0  nop
    ctx->pc = 0x26b5ccu;
    // NOP
label_26b5d0:
    // 0x26b5d0: 0x160d  break       0, 88
    ctx->pc = 0x26b5d0u;
    runtime->handleBreak(rdram, ctx);
label_26b5d4:
    // 0x26b5d4: 0x5090  .word       0x00005090                   # mfhi        $t2 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26b5d4u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_26b5d8:
    // 0x26b5d8: 0x0  nop
    ctx->pc = 0x26b5d8u;
    // NOP
label_26b5dc:
    // 0x26b5dc: 0x0  nop
    ctx->pc = 0x26b5dcu;
    // NOP
label_26b5e0:
    // 0x26b5e0: 0x1618  .word       0x00001618                   # mult        $v0, $zero, $zero # 00000600 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x26b5e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_26b5e4:
    // 0x26b5e4: 0x9e40  sll         $s3, $zero, 25
    ctx->pc = 0x26b5e4u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 0), 25));
label_26b5e8:
    // 0x26b5e8: 0x0  nop
    ctx->pc = 0x26b5e8u;
    // NOP
label_26b5ec:
    // 0x26b5ec: 0x0  nop
    ctx->pc = 0x26b5ecu;
    // NOP
label_26b5f0:
    // 0x26b5f0: 0x162c  .word       0x0000162C                   # dadd        $v0, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26b5f0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 2, r); }
label_26b5f4:
    // 0x26b5f4: 0x8540  sll         $s0, $zero, 21
    ctx->pc = 0x26b5f4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 0), 21));
label_26b5f8:
    // 0x26b5f8: 0x0  nop
    ctx->pc = 0x26b5f8u;
    // NOP
label_26b5fc:
    // 0x26b5fc: 0x0  nop
    ctx->pc = 0x26b5fcu;
    // NOP
label_26b600:
    // 0x26b600: 0x163d  .word       0x0000163D                   # INVALID     $zero, $zero, 0x163D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26b600u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x26B600 raw=0x0000163D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26b604:
    // 0x26b604: 0x79f0  tge         $zero, $zero, 487
    ctx->pc = 0x26b604u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26b608:
    // 0x26b608: 0x0  nop
    ctx->pc = 0x26b608u;
    // NOP
label_26b60c:
    // 0x26b60c: 0x0  nop
    ctx->pc = 0x26b60cu;
    // NOP
label_26b610:
    // 0x26b610: 0x164d  break       0, 89
    ctx->pc = 0x26b610u;
    runtime->handleBreak(rdram, ctx);
label_26b614:
    // 0x26b614: 0x9690  .word       0x00009690                   # mfhi        $s2 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26b614u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_26b618:
    // 0x26b618: 0x0  nop
    ctx->pc = 0x26b618u;
    // NOP
label_26b61c:
    // 0x26b61c: 0x0  nop
    ctx->pc = 0x26b61cu;
    // NOP
label_26b620:
    // 0x26b620: 0x1660  .word       0x00001660                   # add         $v0, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26b620u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 2, (int32_t)result);     } }
label_26b624:
    // 0x26b624: 0xb5b0  tge         $zero, $zero, 726
    ctx->pc = 0x26b624u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26b628:
    // 0x26b628: 0x0  nop
    ctx->pc = 0x26b628u;
    // NOP
label_26b62c:
    // 0x26b62c: 0x0  nop
    ctx->pc = 0x26b62cu;
    // NOP
label_26b630:
    // 0x26b630: 0x1677  .word       0x00001677                   # INVALID     $zero, $zero, 0x1677 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26b630u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x26B630 raw=0x00001677"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26b634:
    // 0x26b634: 0x5ec0  sll         $t3, $zero, 27
    ctx->pc = 0x26b634u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 0), 27));
label_26b638:
    // 0x26b638: 0x0  nop
    ctx->pc = 0x26b638u;
    // NOP
label_26b63c:
    // 0x26b63c: 0x0  nop
    ctx->pc = 0x26b63cu;
    // NOP
label_26b640:
    // 0x26b640: 0x1683  sra         $v0, $zero, 26
    ctx->pc = 0x26b640u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 0), 26));
label_26b644:
    // 0x26b644: 0x5230  tge         $zero, $zero, 328
    ctx->pc = 0x26b644u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26b648:
    // 0x26b648: 0x0  nop
    ctx->pc = 0x26b648u;
    // NOP
label_26b64c:
    // 0x26b64c: 0x0  nop
    ctx->pc = 0x26b64cu;
    // NOP
label_26b650:
    // 0x26b650: 0x168e  .word       0x0000168E                   # INVALID     $zero, $zero, 0x168E # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26b650u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x26B650 raw=0x0000168E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26b654:
    // 0x26b654: 0x3cb0  tge         $zero, $zero, 242
    ctx->pc = 0x26b654u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26b658:
    // 0x26b658: 0x0  nop
    ctx->pc = 0x26b658u;
    // NOP
label_26b65c:
    // 0x26b65c: 0x0  nop
    ctx->pc = 0x26b65cu;
    // NOP
label_26b660:
    // 0x26b660: 0x1696  .word       0x00001696                   # dsrlv       $v0, $zero, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26b660u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_26b664:
    // 0x26b664: 0x4280  sll         $t0, $zero, 10
    ctx->pc = 0x26b664u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 10));
label_26b668:
    // 0x26b668: 0x0  nop
    ctx->pc = 0x26b668u;
    // NOP
label_26b66c:
    // 0x26b66c: 0x0  nop
    ctx->pc = 0x26b66cu;
    // NOP
label_26b670:
    // 0x26b670: 0x169f  .word       0x0000169F                   # ddivu       $v0, $zero, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26b670u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x26B670 raw=0x0000169F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26b674:
    // 0x26b674: 0x9b50  .word       0x00009B50                   # mfhi        $s3 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26b674u;
    SET_GPR_U64(ctx, 19, ctx->hi);
label_26b678:
    // 0x26b678: 0x0  nop
    ctx->pc = 0x26b678u;
    // NOP
label_26b67c:
    // 0x26b67c: 0x0  nop
    ctx->pc = 0x26b67cu;
    // NOP
label_26b680:
    // 0x26b680: 0x16b3  tltu        $zero, $zero, 90
    ctx->pc = 0x26b680u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26b684:
    // 0x26b684: 0x41a0  .word       0x000041A0                   # add         $t0, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26b684u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
label_26b688:
    // 0x26b688: 0x0  nop
    ctx->pc = 0x26b688u;
    // NOP
label_26b68c:
    // 0x26b68c: 0x0  nop
    ctx->pc = 0x26b68cu;
    // NOP
label_26b690:
    // 0x26b690: 0x16bc  dsll32      $v0, $zero, 26
    ctx->pc = 0x26b690u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) << (32 + 26));
label_26b694:
    // 0x26b694: 0xb9d0  .word       0x0000B9D0                   # mfhi        $s7 # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26b694u;
    SET_GPR_U64(ctx, 23, ctx->hi);
label_26b698:
    // 0x26b698: 0x0  nop
    ctx->pc = 0x26b698u;
    // NOP
label_26b69c:
    // 0x26b69c: 0x0  nop
    ctx->pc = 0x26b69cu;
    // NOP
label_26b6a0:
    // 0x26b6a0: 0x16d4  .word       0x000016D4                   # dsllv       $v0, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26b6a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_26b6a4:
    // 0x26b6a4: 0x0  nop
    ctx->pc = 0x26b6a4u;
    // NOP
label_26b6a8:
    // 0x26b6a8: 0x0  nop
    ctx->pc = 0x26b6a8u;
    // NOP
label_26b6ac:
    // 0x26b6ac: 0x0  nop
    ctx->pc = 0x26b6acu;
    // NOP
label_26b6b0:
    // 0x26b6b0: 0x16d4  .word       0x000016D4                   # dsllv       $v0, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26b6b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_26b6b4:
    // 0x26b6b4: 0x0  nop
    ctx->pc = 0x26b6b4u;
    // NOP
label_26b6b8:
    // 0x26b6b8: 0x0  nop
    ctx->pc = 0x26b6b8u;
    // NOP
label_26b6bc:
    // 0x26b6bc: 0x0  nop
    ctx->pc = 0x26b6bcu;
    // NOP
label_26b6c0:
    // 0x26b6c0: 0x16d4  .word       0x000016D4                   # dsllv       $v0, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26b6c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_26b6c4:
    // 0x26b6c4: 0x0  nop
    ctx->pc = 0x26b6c4u;
    // NOP
label_26b6c8:
    // 0x26b6c8: 0x0  nop
    ctx->pc = 0x26b6c8u;
    // NOP
label_26b6cc:
    // 0x26b6cc: 0x0  nop
    ctx->pc = 0x26b6ccu;
    // NOP
label_26b6d0:
    // 0x26b6d0: 0x16d4  .word       0x000016D4                   # dsllv       $v0, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26b6d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_26b6d4:
    // 0x26b6d4: 0x0  nop
    ctx->pc = 0x26b6d4u;
    // NOP
label_26b6d8:
    // 0x26b6d8: 0x0  nop
    ctx->pc = 0x26b6d8u;
    // NOP
label_26b6dc:
    // 0x26b6dc: 0x0  nop
    ctx->pc = 0x26b6dcu;
    // NOP
label_26b6e0:
    // 0x26b6e0: 0x16d4  .word       0x000016D4                   # dsllv       $v0, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26b6e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_26b6e4:
    // 0x26b6e4: 0x0  nop
    ctx->pc = 0x26b6e4u;
    // NOP
label_26b6e8:
    // 0x26b6e8: 0x0  nop
    ctx->pc = 0x26b6e8u;
    // NOP
label_26b6ec:
    // 0x26b6ec: 0x0  nop
    ctx->pc = 0x26b6ecu;
    // NOP
label_26b6f0:
    // 0x26b6f0: 0x16d4  .word       0x000016D4                   # dsllv       $v0, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26b6f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_26b6f4:
    // 0x26b6f4: 0x0  nop
    ctx->pc = 0x26b6f4u;
    // NOP
label_26b6f8:
    // 0x26b6f8: 0x0  nop
    ctx->pc = 0x26b6f8u;
    // NOP
label_26b6fc:
    // 0x26b6fc: 0x0  nop
    ctx->pc = 0x26b6fcu;
    // NOP
label_26b700:
    // 0x26b700: 0x16d4  .word       0x000016D4                   # dsllv       $v0, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26b700u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_26b704:
    // 0x26b704: 0x0  nop
    ctx->pc = 0x26b704u;
    // NOP
label_26b708:
    // 0x26b708: 0x0  nop
    ctx->pc = 0x26b708u;
    // NOP
label_26b70c:
    // 0x26b70c: 0x0  nop
    ctx->pc = 0x26b70cu;
    // NOP
label_26b710:
    // 0x26b710: 0x16d4  .word       0x000016D4                   # dsllv       $v0, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26b710u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_26b714:
    // 0x26b714: 0x0  nop
    ctx->pc = 0x26b714u;
    // NOP
label_26b718:
    // 0x26b718: 0x0  nop
    ctx->pc = 0x26b718u;
    // NOP
label_26b71c:
    // 0x26b71c: 0x0  nop
    ctx->pc = 0x26b71cu;
    // NOP
label_26b720:
    // 0x26b720: 0x16d4  .word       0x000016D4                   # dsllv       $v0, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26b720u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_26b724:
    // 0x26b724: 0x0  nop
    ctx->pc = 0x26b724u;
    // NOP
label_26b728:
    // 0x26b728: 0x0  nop
    ctx->pc = 0x26b728u;
    // NOP
label_26b72c:
    // 0x26b72c: 0x0  nop
    ctx->pc = 0x26b72cu;
    // NOP
label_26b730:
    // 0x26b730: 0x16d4  .word       0x000016D4                   # dsllv       $v0, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26b730u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_26b734:
    // 0x26b734: 0x0  nop
    ctx->pc = 0x26b734u;
    // NOP
label_26b738:
    // 0x26b738: 0x0  nop
    ctx->pc = 0x26b738u;
    // NOP
label_26b73c:
    // 0x26b73c: 0x0  nop
    ctx->pc = 0x26b73cu;
    // NOP
label_26b740:
    // 0x26b740: 0x16d4  .word       0x000016D4                   # dsllv       $v0, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26b740u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_26b744:
    // 0x26b744: 0x0  nop
    ctx->pc = 0x26b744u;
    // NOP
label_26b748:
    // 0x26b748: 0x0  nop
    ctx->pc = 0x26b748u;
    // NOP
label_26b74c:
    // 0x26b74c: 0x0  nop
    ctx->pc = 0x26b74cu;
    // NOP
label_26b750:
    // 0x26b750: 0x16d4  .word       0x000016D4                   # dsllv       $v0, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26b750u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_26b754:
    // 0x26b754: 0x0  nop
    ctx->pc = 0x26b754u;
    // NOP
label_26b758:
    // 0x26b758: 0x0  nop
    ctx->pc = 0x26b758u;
    // NOP
label_26b75c:
    // 0x26b75c: 0x0  nop
    ctx->pc = 0x26b75cu;
    // NOP
label_26b760:
    // 0x26b760: 0x16d4  .word       0x000016D4                   # dsllv       $v0, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26b760u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_26b764:
    // 0x26b764: 0x0  nop
    ctx->pc = 0x26b764u;
    // NOP
label_26b768:
    // 0x26b768: 0x0  nop
    ctx->pc = 0x26b768u;
    // NOP
label_26b76c:
    // 0x26b76c: 0x0  nop
    ctx->pc = 0x26b76cu;
    // NOP
label_26b770:
    // 0x26b770: 0x16d4  .word       0x000016D4                   # dsllv       $v0, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26b770u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_26b774:
    // 0x26b774: 0x0  nop
    ctx->pc = 0x26b774u;
    // NOP
label_26b778:
    // 0x26b778: 0x0  nop
    ctx->pc = 0x26b778u;
    // NOP
label_26b77c:
    // 0x26b77c: 0x0  nop
    ctx->pc = 0x26b77cu;
    // NOP
label_26b780:
    // 0x26b780: 0x16d4  .word       0x000016D4                   # dsllv       $v0, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26b780u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_26b784:
    // 0x26b784: 0x0  nop
    ctx->pc = 0x26b784u;
    // NOP
label_26b788:
    // 0x26b788: 0x0  nop
    ctx->pc = 0x26b788u;
    // NOP
label_26b78c:
    // 0x26b78c: 0x0  nop
    ctx->pc = 0x26b78cu;
    // NOP
label_26b790:
    // 0x26b790: 0x16d4  .word       0x000016D4                   # dsllv       $v0, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26b790u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_26b794:
    // 0x26b794: 0x0  nop
    ctx->pc = 0x26b794u;
    // NOP
label_26b798:
    // 0x26b798: 0x0  nop
    ctx->pc = 0x26b798u;
    // NOP
label_26b79c:
    // 0x26b79c: 0x0  nop
    ctx->pc = 0x26b79cu;
    // NOP
label_26b7a0:
    // 0x26b7a0: 0x16d4  .word       0x000016D4                   # dsllv       $v0, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26b7a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_26b7a4:
    // 0x26b7a4: 0x0  nop
    ctx->pc = 0x26b7a4u;
    // NOP
label_26b7a8:
    // 0x26b7a8: 0x0  nop
    ctx->pc = 0x26b7a8u;
    // NOP
label_26b7ac:
    // 0x26b7ac: 0x0  nop
    ctx->pc = 0x26b7acu;
    // NOP
label_26b7b0:
    // 0x26b7b0: 0x16d4  .word       0x000016D4                   # dsllv       $v0, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26b7b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_26b7b4:
    // 0x26b7b4: 0x0  nop
    ctx->pc = 0x26b7b4u;
    // NOP
label_26b7b8:
    // 0x26b7b8: 0x0  nop
    ctx->pc = 0x26b7b8u;
    // NOP
label_26b7bc:
    // 0x26b7bc: 0x0  nop
    ctx->pc = 0x26b7bcu;
    // NOP
label_26b7c0:
    // 0x26b7c0: 0x16d4  .word       0x000016D4                   # dsllv       $v0, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26b7c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_26b7c4:
    // 0x26b7c4: 0x0  nop
    ctx->pc = 0x26b7c4u;
    // NOP
label_26b7c8:
    // 0x26b7c8: 0x0  nop
    ctx->pc = 0x26b7c8u;
    // NOP
label_26b7cc:
    // 0x26b7cc: 0x0  nop
    ctx->pc = 0x26b7ccu;
    // NOP
label_26b7d0:
    // 0x26b7d0: 0x16d4  .word       0x000016D4                   # dsllv       $v0, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26b7d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_26b7d4:
    // 0x26b7d4: 0x0  nop
    ctx->pc = 0x26b7d4u;
    // NOP
label_26b7d8:
    // 0x26b7d8: 0x0  nop
    ctx->pc = 0x26b7d8u;
    // NOP
label_26b7dc:
    // 0x26b7dc: 0x0  nop
    ctx->pc = 0x26b7dcu;
    // NOP
label_26b7e0:
    // 0x26b7e0: 0x16d4  .word       0x000016D4                   # dsllv       $v0, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26b7e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_26b7e4:
    // 0x26b7e4: 0x0  nop
    ctx->pc = 0x26b7e4u;
    // NOP
label_26b7e8:
    // 0x26b7e8: 0x0  nop
    ctx->pc = 0x26b7e8u;
    // NOP
label_26b7ec:
    // 0x26b7ec: 0x0  nop
    ctx->pc = 0x26b7ecu;
    // NOP
label_26b7f0:
    // 0x26b7f0: 0x16d4  .word       0x000016D4                   # dsllv       $v0, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26b7f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_26b7f4:
    // 0x26b7f4: 0x0  nop
    ctx->pc = 0x26b7f4u;
    // NOP
label_26b7f8:
    // 0x26b7f8: 0x0  nop
    ctx->pc = 0x26b7f8u;
    // NOP
label_26b7fc:
    // 0x26b7fc: 0x0  nop
    ctx->pc = 0x26b7fcu;
    // NOP
label_26b800:
    // 0x26b800: 0x16d4  .word       0x000016D4                   # dsllv       $v0, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26b800u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_26b804:
    // 0x26b804: 0x0  nop
    ctx->pc = 0x26b804u;
    // NOP
label_26b808:
    // 0x26b808: 0x0  nop
    ctx->pc = 0x26b808u;
    // NOP
label_26b80c:
    // 0x26b80c: 0x0  nop
    ctx->pc = 0x26b80cu;
    // NOP
label_26b810:
    // 0x26b810: 0x16d4  .word       0x000016D4                   # dsllv       $v0, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26b810u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_26b814:
    // 0x26b814: 0x0  nop
    ctx->pc = 0x26b814u;
    // NOP
label_26b818:
    // 0x26b818: 0x0  nop
    ctx->pc = 0x26b818u;
    // NOP
label_26b81c:
    // 0x26b81c: 0x0  nop
    ctx->pc = 0x26b81cu;
    // NOP
label_26b820:
    // 0x26b820: 0x16d4  .word       0x000016D4                   # dsllv       $v0, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26b820u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_26b824:
    // 0x26b824: 0x0  nop
    ctx->pc = 0x26b824u;
    // NOP
label_26b828:
    // 0x26b828: 0x0  nop
    ctx->pc = 0x26b828u;
    // NOP
label_26b82c:
    // 0x26b82c: 0x0  nop
    ctx->pc = 0x26b82cu;
    // NOP
label_26b830:
    // 0x26b830: 0x16d4  .word       0x000016D4                   # dsllv       $v0, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26b830u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_26b834:
    // 0x26b834: 0x0  nop
    ctx->pc = 0x26b834u;
    // NOP
label_26b838:
    // 0x26b838: 0x0  nop
    ctx->pc = 0x26b838u;
    // NOP
label_26b83c:
    // 0x26b83c: 0x0  nop
    ctx->pc = 0x26b83cu;
    // NOP
label_26b840:
    // 0x26b840: 0x16d4  .word       0x000016D4                   # dsllv       $v0, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26b840u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_26b844:
    // 0x26b844: 0x0  nop
    ctx->pc = 0x26b844u;
    // NOP
label_26b848:
    // 0x26b848: 0x0  nop
    ctx->pc = 0x26b848u;
    // NOP
label_26b84c:
    // 0x26b84c: 0x0  nop
    ctx->pc = 0x26b84cu;
    // NOP
label_26b850:
    // 0x26b850: 0x16d4  .word       0x000016D4                   # dsllv       $v0, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26b850u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_26b854:
    // 0x26b854: 0x0  nop
    ctx->pc = 0x26b854u;
    // NOP
label_26b858:
    // 0x26b858: 0x0  nop
    ctx->pc = 0x26b858u;
    // NOP
label_26b85c:
    // 0x26b85c: 0x0  nop
    ctx->pc = 0x26b85cu;
    // NOP
label_26b860:
    // 0x26b860: 0x16d4  .word       0x000016D4                   # dsllv       $v0, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26b860u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_26b864:
    // 0x26b864: 0x0  nop
    ctx->pc = 0x26b864u;
    // NOP
label_26b868:
    // 0x26b868: 0x0  nop
    ctx->pc = 0x26b868u;
    // NOP
label_26b86c:
    // 0x26b86c: 0x0  nop
    ctx->pc = 0x26b86cu;
    // NOP
label_26b870:
    // 0x26b870: 0x16d4  .word       0x000016D4                   # dsllv       $v0, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26b870u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_26b874:
    // 0x26b874: 0x0  nop
    ctx->pc = 0x26b874u;
    // NOP
label_26b878:
    // 0x26b878: 0x0  nop
    ctx->pc = 0x26b878u;
    // NOP
label_26b87c:
    // 0x26b87c: 0x0  nop
    ctx->pc = 0x26b87cu;
    // NOP
label_26b880:
    // 0x26b880: 0x16d4  .word       0x000016D4                   # dsllv       $v0, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26b880u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_26b884:
    // 0x26b884: 0x0  nop
    ctx->pc = 0x26b884u;
    // NOP
label_26b888:
    // 0x26b888: 0x0  nop
    ctx->pc = 0x26b888u;
    // NOP
label_26b88c:
    // 0x26b88c: 0x0  nop
    ctx->pc = 0x26b88cu;
    // NOP
label_26b890:
    // 0x26b890: 0x16d4  .word       0x000016D4                   # dsllv       $v0, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26b890u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_26b894:
    // 0x26b894: 0x0  nop
    ctx->pc = 0x26b894u;
    // NOP
label_26b898:
    // 0x26b898: 0x0  nop
    ctx->pc = 0x26b898u;
    // NOP
label_26b89c:
    // 0x26b89c: 0x0  nop
    ctx->pc = 0x26b89cu;
    // NOP
label_26b8a0:
    // 0x26b8a0: 0x16d4  .word       0x000016D4                   # dsllv       $v0, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26b8a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_26b8a4:
    // 0x26b8a4: 0x0  nop
    ctx->pc = 0x26b8a4u;
    // NOP
label_26b8a8:
    // 0x26b8a8: 0x0  nop
    ctx->pc = 0x26b8a8u;
    // NOP
label_26b8ac:
    // 0x26b8ac: 0x0  nop
    ctx->pc = 0x26b8acu;
    // NOP
label_26b8b0:
    // 0x26b8b0: 0x16d4  .word       0x000016D4                   # dsllv       $v0, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26b8b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_26b8b4:
    // 0x26b8b4: 0x0  nop
    ctx->pc = 0x26b8b4u;
    // NOP
label_26b8b8:
    // 0x26b8b8: 0x0  nop
    ctx->pc = 0x26b8b8u;
    // NOP
label_26b8bc:
    // 0x26b8bc: 0x0  nop
    ctx->pc = 0x26b8bcu;
    // NOP
label_26b8c0:
    // 0x26b8c0: 0x16d4  .word       0x000016D4                   # dsllv       $v0, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26b8c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_26b8c4:
    // 0x26b8c4: 0x0  nop
    ctx->pc = 0x26b8c4u;
    // NOP
label_26b8c8:
    // 0x26b8c8: 0x0  nop
    ctx->pc = 0x26b8c8u;
    // NOP
label_26b8cc:
    // 0x26b8cc: 0x0  nop
    ctx->pc = 0x26b8ccu;
    // NOP
label_26b8d0:
    // 0x26b8d0: 0x16d4  .word       0x000016D4                   # dsllv       $v0, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26b8d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_26b8d4:
    // 0x26b8d4: 0x0  nop
    ctx->pc = 0x26b8d4u;
    // NOP
label_26b8d8:
    // 0x26b8d8: 0x0  nop
    ctx->pc = 0x26b8d8u;
    // NOP
label_26b8dc:
    // 0x26b8dc: 0x0  nop
    ctx->pc = 0x26b8dcu;
    // NOP
label_26b8e0:
    // 0x26b8e0: 0x16d4  .word       0x000016D4                   # dsllv       $v0, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26b8e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_26b8e4:
    // 0x26b8e4: 0x0  nop
    ctx->pc = 0x26b8e4u;
    // NOP
label_26b8e8:
    // 0x26b8e8: 0x0  nop
    ctx->pc = 0x26b8e8u;
    // NOP
label_26b8ec:
    // 0x26b8ec: 0x0  nop
    ctx->pc = 0x26b8ecu;
    // NOP
label_26b8f0:
    // 0x26b8f0: 0x16d4  .word       0x000016D4                   # dsllv       $v0, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26b8f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_26b8f4:
    // 0x26b8f4: 0x0  nop
    ctx->pc = 0x26b8f4u;
    // NOP
label_26b8f8:
    // 0x26b8f8: 0x0  nop
    ctx->pc = 0x26b8f8u;
    // NOP
label_26b8fc:
    // 0x26b8fc: 0x0  nop
    ctx->pc = 0x26b8fcu;
    // NOP
label_26b900:
    // 0x26b900: 0x16d4  .word       0x000016D4                   # dsllv       $v0, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26b900u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_26b904:
    // 0x26b904: 0x0  nop
    ctx->pc = 0x26b904u;
    // NOP
label_26b908:
    // 0x26b908: 0x0  nop
    ctx->pc = 0x26b908u;
    // NOP
label_26b90c:
    // 0x26b90c: 0x0  nop
    ctx->pc = 0x26b90cu;
    // NOP
label_26b910:
    // 0x26b910: 0x16d4  .word       0x000016D4                   # dsllv       $v0, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26b910u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_26b914:
    // 0x26b914: 0x0  nop
    ctx->pc = 0x26b914u;
    // NOP
label_26b918:
    // 0x26b918: 0x0  nop
    ctx->pc = 0x26b918u;
    // NOP
label_26b91c:
    // 0x26b91c: 0x0  nop
    ctx->pc = 0x26b91cu;
    // NOP
label_26b920:
    // 0x26b920: 0x16d4  .word       0x000016D4                   # dsllv       $v0, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26b920u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_26b924:
    // 0x26b924: 0x0  nop
    ctx->pc = 0x26b924u;
    // NOP
label_26b928:
    // 0x26b928: 0x0  nop
    ctx->pc = 0x26b928u;
    // NOP
label_26b92c:
    // 0x26b92c: 0x0  nop
    ctx->pc = 0x26b92cu;
    // NOP
label_26b930:
    // 0x26b930: 0x16d4  .word       0x000016D4                   # dsllv       $v0, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26b930u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_26b934:
    // 0x26b934: 0x0  nop
    ctx->pc = 0x26b934u;
    // NOP
label_26b938:
    // 0x26b938: 0x0  nop
    ctx->pc = 0x26b938u;
    // NOP
label_26b93c:
    // 0x26b93c: 0x0  nop
    ctx->pc = 0x26b93cu;
    // NOP
label_26b940:
    // 0x26b940: 0x16d4  .word       0x000016D4                   # dsllv       $v0, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26b940u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_26b944:
    // 0x26b944: 0x0  nop
    ctx->pc = 0x26b944u;
    // NOP
label_26b948:
    // 0x26b948: 0x0  nop
    ctx->pc = 0x26b948u;
    // NOP
label_26b94c:
    // 0x26b94c: 0x0  nop
    ctx->pc = 0x26b94cu;
    // NOP
label_26b950:
    // 0x26b950: 0x16d4  .word       0x000016D4                   # dsllv       $v0, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26b950u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_26b954:
    // 0x26b954: 0x0  nop
    ctx->pc = 0x26b954u;
    // NOP
label_26b958:
    // 0x26b958: 0x0  nop
    ctx->pc = 0x26b958u;
    // NOP
label_26b95c:
    // 0x26b95c: 0x0  nop
    ctx->pc = 0x26b95cu;
    // NOP
label_26b960:
    // 0x26b960: 0x16d4  .word       0x000016D4                   # dsllv       $v0, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26b960u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_26b964:
    // 0x26b964: 0x0  nop
    ctx->pc = 0x26b964u;
    // NOP
label_26b968:
    // 0x26b968: 0x0  nop
    ctx->pc = 0x26b968u;
    // NOP
label_26b96c:
    // 0x26b96c: 0x0  nop
    ctx->pc = 0x26b96cu;
    // NOP
label_26b970:
    // 0x26b970: 0x16d4  .word       0x000016D4                   # dsllv       $v0, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26b970u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_26b974:
    // 0x26b974: 0x0  nop
    ctx->pc = 0x26b974u;
    // NOP
label_26b978:
    // 0x26b978: 0x0  nop
    ctx->pc = 0x26b978u;
    // NOP
label_26b97c:
    // 0x26b97c: 0x0  nop
    ctx->pc = 0x26b97cu;
    // NOP
label_26b980:
    // 0x26b980: 0x16d4  .word       0x000016D4                   # dsllv       $v0, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26b980u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_26b984:
    // 0x26b984: 0x0  nop
    ctx->pc = 0x26b984u;
    // NOP
label_26b988:
    // 0x26b988: 0x0  nop
    ctx->pc = 0x26b988u;
    // NOP
label_26b98c:
    // 0x26b98c: 0x0  nop
    ctx->pc = 0x26b98cu;
    // NOP
label_26b990:
    // 0x26b990: 0x16d4  .word       0x000016D4                   # dsllv       $v0, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26b990u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_26b994:
    // 0x26b994: 0x0  nop
    ctx->pc = 0x26b994u;
    // NOP
label_26b998:
    // 0x26b998: 0x0  nop
    ctx->pc = 0x26b998u;
    // NOP
label_26b99c:
    // 0x26b99c: 0x0  nop
    ctx->pc = 0x26b99cu;
    // NOP
label_26b9a0:
    // 0x26b9a0: 0x16d4  .word       0x000016D4                   # dsllv       $v0, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26b9a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_26b9a4:
    // 0x26b9a4: 0x0  nop
    ctx->pc = 0x26b9a4u;
    // NOP
label_26b9a8:
    // 0x26b9a8: 0x0  nop
    ctx->pc = 0x26b9a8u;
    // NOP
label_26b9ac:
    // 0x26b9ac: 0x0  nop
    ctx->pc = 0x26b9acu;
    // NOP
label_26b9b0:
    // 0x26b9b0: 0x16d4  .word       0x000016D4                   # dsllv       $v0, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26b9b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_26b9b4:
    // 0x26b9b4: 0x0  nop
    ctx->pc = 0x26b9b4u;
    // NOP
label_26b9b8:
    // 0x26b9b8: 0x0  nop
    ctx->pc = 0x26b9b8u;
    // NOP
label_26b9bc:
    // 0x26b9bc: 0x0  nop
    ctx->pc = 0x26b9bcu;
    // NOP
label_26b9c0:
    // 0x26b9c0: 0x16d4  .word       0x000016D4                   # dsllv       $v0, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26b9c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_26b9c4:
    // 0x26b9c4: 0x0  nop
    ctx->pc = 0x26b9c4u;
    // NOP
label_26b9c8:
    // 0x26b9c8: 0x0  nop
    ctx->pc = 0x26b9c8u;
    // NOP
label_26b9cc:
    // 0x26b9cc: 0x0  nop
    ctx->pc = 0x26b9ccu;
    // NOP
label_26b9d0:
    // 0x26b9d0: 0x16d4  .word       0x000016D4                   # dsllv       $v0, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26b9d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_26b9d4:
    // 0x26b9d4: 0x0  nop
    ctx->pc = 0x26b9d4u;
    // NOP
label_26b9d8:
    // 0x26b9d8: 0x0  nop
    ctx->pc = 0x26b9d8u;
    // NOP
label_26b9dc:
    // 0x26b9dc: 0x0  nop
    ctx->pc = 0x26b9dcu;
    // NOP
label_26b9e0:
    // 0x26b9e0: 0x16d4  .word       0x000016D4                   # dsllv       $v0, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26b9e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_26b9e4:
    // 0x26b9e4: 0x0  nop
    ctx->pc = 0x26b9e4u;
    // NOP
label_26b9e8:
    // 0x26b9e8: 0x0  nop
    ctx->pc = 0x26b9e8u;
    // NOP
label_26b9ec:
    // 0x26b9ec: 0x0  nop
    ctx->pc = 0x26b9ecu;
    // NOP
label_26b9f0:
    // 0x26b9f0: 0x16d4  .word       0x000016D4                   # dsllv       $v0, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26b9f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_26b9f4:
    // 0x26b9f4: 0x0  nop
    ctx->pc = 0x26b9f4u;
    // NOP
label_26b9f8:
    // 0x26b9f8: 0x0  nop
    ctx->pc = 0x26b9f8u;
    // NOP
label_26b9fc:
    // 0x26b9fc: 0x0  nop
    ctx->pc = 0x26b9fcu;
    // NOP
label_26ba00:
    // 0x26ba00: 0x16d4  .word       0x000016D4                   # dsllv       $v0, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26ba00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_26ba04:
    // 0x26ba04: 0x0  nop
    ctx->pc = 0x26ba04u;
    // NOP
label_26ba08:
    // 0x26ba08: 0x0  nop
    ctx->pc = 0x26ba08u;
    // NOP
label_26ba0c:
    // 0x26ba0c: 0x0  nop
    ctx->pc = 0x26ba0cu;
    // NOP
label_26ba10:
    // 0x26ba10: 0x16d4  .word       0x000016D4                   # dsllv       $v0, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26ba10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_26ba14:
    // 0x26ba14: 0x0  nop
    ctx->pc = 0x26ba14u;
    // NOP
label_26ba18:
    // 0x26ba18: 0x0  nop
    ctx->pc = 0x26ba18u;
    // NOP
label_26ba1c:
    // 0x26ba1c: 0x0  nop
    ctx->pc = 0x26ba1cu;
    // NOP
label_26ba20:
    // 0x26ba20: 0x16d4  .word       0x000016D4                   # dsllv       $v0, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26ba20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_26ba24:
    // 0x26ba24: 0x43f0  tge         $zero, $zero, 271
    ctx->pc = 0x26ba24u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26ba28:
    // 0x26ba28: 0x0  nop
    ctx->pc = 0x26ba28u;
    // NOP
label_26ba2c:
    // 0x26ba2c: 0x0  nop
    ctx->pc = 0x26ba2cu;
    // NOP
label_26ba30:
    // 0x26ba30: 0x16dd  .word       0x000016DD                   # dmultu      $zero, $zero # 000016C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26ba30u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x26BA30 raw=0x000016DD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26ba34:
    // 0x26ba34: 0x4d30  tge         $zero, $zero, 308
    ctx->pc = 0x26ba34u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26ba38:
    // 0x26ba38: 0x0  nop
    ctx->pc = 0x26ba38u;
    // NOP
label_26ba3c:
    // 0x26ba3c: 0x0  nop
    ctx->pc = 0x26ba3cu;
    // NOP
label_26ba40:
    // 0x26ba40: 0x16e7  .word       0x000016E7                   # not         $v0, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26ba40u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_26ba44:
    // 0x26ba44: 0x6990  .word       0x00006990                   # mfhi        $t5 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26ba44u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_26ba48:
    // 0x26ba48: 0x0  nop
    ctx->pc = 0x26ba48u;
    // NOP
label_26ba4c:
    // 0x26ba4c: 0x0  nop
    ctx->pc = 0x26ba4cu;
    // NOP
label_26ba50:
    // 0x26ba50: 0x16f5  .word       0x000016F5                   # INVALID     $zero, $zero, 0x16F5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26ba50u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x26BA50 raw=0x000016F5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26ba54:
    // 0x26ba54: 0x3f50  .word       0x00003F50                   # mfhi        $a3 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26ba54u;
    SET_GPR_U64(ctx, 7, ctx->hi);
label_26ba58:
    // 0x26ba58: 0x0  nop
    ctx->pc = 0x26ba58u;
    // NOP
label_26ba5c:
    // 0x26ba5c: 0x0  nop
    ctx->pc = 0x26ba5cu;
    // NOP
label_26ba60:
    // 0x26ba60: 0x16fd  .word       0x000016FD                   # INVALID     $zero, $zero, 0x16FD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26ba60u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x26BA60 raw=0x000016FD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26ba64:
    // 0x26ba64: 0x5030  tge         $zero, $zero, 320
    ctx->pc = 0x26ba64u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26ba68:
    // 0x26ba68: 0x0  nop
    ctx->pc = 0x26ba68u;
    // NOP
label_26ba6c:
    // 0x26ba6c: 0x0  nop
    ctx->pc = 0x26ba6cu;
    // NOP
label_26ba70:
    // 0x26ba70: 0x1708  .word       0x00001708                   # jr          $zero # 00001700 <InstrIdType: CPU_SPECIAL>
label_26ba74:
    if (ctx->pc == 0x26BA74u) {
        ctx->pc = 0x26BA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BA70u;
        // 0x26ba74: 0x4370  tge         $zero, $zero, 269 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x26BA78u;
        goto label_26ba78;
    }
    ctx->pc = 0x26BA70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x26BA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BA70u;
        // 0x26ba74: 0x4370  tge         $zero, $zero, 269 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26BA70u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x26BA78u;
label_26ba78:
    // 0x26ba78: 0x0  nop
    ctx->pc = 0x26ba78u;
    // NOP
label_26ba7c:
    // 0x26ba7c: 0x0  nop
    ctx->pc = 0x26ba7cu;
    // NOP
label_26ba80:
    // 0x26ba80: 0x1711  .word       0x00001711                   # mthi        $zero # 00001700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26ba80u;
    ctx->hi = GPR_U64(ctx, 0);
label_26ba84:
    // 0x26ba84: 0x6c70  tge         $zero, $zero, 433
    ctx->pc = 0x26ba84u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26ba88:
    // 0x26ba88: 0x0  nop
    ctx->pc = 0x26ba88u;
    // NOP
label_26ba8c:
    // 0x26ba8c: 0x0  nop
    ctx->pc = 0x26ba8cu;
    // NOP
label_26ba90:
    // 0x26ba90: 0x171f  .word       0x0000171F                   # ddivu       $v0, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26ba90u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x26BA90 raw=0x0000171F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26ba94:
    // 0x26ba94: 0x51b0  tge         $zero, $zero, 326
    ctx->pc = 0x26ba94u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26ba98:
    // 0x26ba98: 0x0  nop
    ctx->pc = 0x26ba98u;
    // NOP
label_26ba9c:
    // 0x26ba9c: 0x0  nop
    ctx->pc = 0x26ba9cu;
    // NOP
label_26baa0:
    // 0x26baa0: 0x172a  .word       0x0000172A                   # slt         $v0, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26baa0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_26baa4:
    // 0x26baa4: 0xb2a0  .word       0x0000B2A0                   # add         $s6, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26baa4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
label_26baa8:
    // 0x26baa8: 0x0  nop
    ctx->pc = 0x26baa8u;
    // NOP
label_26baac:
    // 0x26baac: 0x0  nop
    ctx->pc = 0x26baacu;
    // NOP
label_26bab0:
    // 0x26bab0: 0x1741  .word       0x00001741                   # INVALID     $zero, $zero, 0x1741 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26bab0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x26BAB0 raw=0x00001741"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26bab4:
    // 0x26bab4: 0x69a0  .word       0x000069A0                   # add         $t5, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26bab4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_26bab8:
    // 0x26bab8: 0x0  nop
    ctx->pc = 0x26bab8u;
    // NOP
label_26babc:
    // 0x26babc: 0x0  nop
    ctx->pc = 0x26babcu;
    // NOP
label_26bac0:
    // 0x26bac0: 0x174f  .word       0x0000174F                   # sync.p # 00001000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26bac0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_26bac4:
    // 0x26bac4: 0x6f90  .word       0x00006F90                   # mfhi        $t5 # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26bac4u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_26bac8:
    // 0x26bac8: 0x0  nop
    ctx->pc = 0x26bac8u;
    // NOP
label_26bacc:
    // 0x26bacc: 0x0  nop
    ctx->pc = 0x26baccu;
    // NOP
label_26bad0:
    // 0x26bad0: 0x175d  .word       0x0000175D                   # dmultu      $zero, $zero # 00001740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26bad0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x26BAD0 raw=0x0000175D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26bad4:
    // 0x26bad4: 0xda80  sll         $k1, $zero, 10
    ctx->pc = 0x26bad4u;
    SET_GPR_S32(ctx, 27, (int32_t)SLL32(GPR_U32(ctx, 0), 10));
label_26bad8:
    // 0x26bad8: 0x0  nop
    ctx->pc = 0x26bad8u;
    // NOP
label_26badc:
    // 0x26badc: 0x0  nop
    ctx->pc = 0x26badcu;
    // NOP
label_26bae0:
    // 0x26bae0: 0x1779  .word       0x00001779                   # INVALID     $zero, $zero, 0x1779 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26bae0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x26BAE0 raw=0x00001779"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26bae4:
    // 0x26bae4: 0xb2a0  .word       0x0000B2A0                   # add         $s6, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26bae4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
label_26bae8:
    // 0x26bae8: 0x0  nop
    ctx->pc = 0x26bae8u;
    // NOP
label_26baec:
    // 0x26baec: 0x0  nop
    ctx->pc = 0x26baecu;
    // NOP
label_26baf0:
    // 0x26baf0: 0x1790  .word       0x00001790                   # mfhi        $v0 # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26baf0u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_26baf4:
    // 0x26baf4: 0x11ef0  tge         $zero, $at, 123
    ctx->pc = 0x26baf4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_26baf8:
    // 0x26baf8: 0x0  nop
    ctx->pc = 0x26baf8u;
    // NOP
label_26bafc:
    // 0x26bafc: 0x0  nop
    ctx->pc = 0x26bafcu;
    // NOP
label_26bb00:
    // 0x26bb00: 0x17b4  teq         $zero, $zero, 94
    ctx->pc = 0x26bb00u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26bb04:
    // 0x26bb04: 0x6ad0  .word       0x00006AD0                   # mfhi        $t5 # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26bb04u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_26bb08:
    // 0x26bb08: 0x0  nop
    ctx->pc = 0x26bb08u;
    // NOP
label_26bb0c:
    // 0x26bb0c: 0x0  nop
    ctx->pc = 0x26bb0cu;
    // NOP
label_26bb10:
    // 0x26bb10: 0x17c2  srl         $v0, $zero, 31
    ctx->pc = 0x26bb10u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 0), 31));
label_26bb14:
    // 0x26bb14: 0x5d70  tge         $zero, $zero, 373
    ctx->pc = 0x26bb14u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26bb18:
    // 0x26bb18: 0x0  nop
    ctx->pc = 0x26bb18u;
    // NOP
label_26bb1c:
    // 0x26bb1c: 0x0  nop
    ctx->pc = 0x26bb1cu;
    // NOP
label_26bb20:
    // 0x26bb20: 0x17ce  .word       0x000017CE                   # INVALID     $zero, $zero, 0x17CE # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26bb20u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x26BB20 raw=0x000017CE"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26bb24:
    // 0x26bb24: 0x5e80  sll         $t3, $zero, 26
    ctx->pc = 0x26bb24u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 0), 26));
label_26bb28:
    // 0x26bb28: 0x0  nop
    ctx->pc = 0x26bb28u;
    // NOP
label_26bb2c:
    // 0x26bb2c: 0x0  nop
    ctx->pc = 0x26bb2cu;
    // NOP
label_26bb30:
    // 0x26bb30: 0x17da  .word       0x000017DA                   # div         $v0, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26bb30u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_26bb34:
    // 0x26bb34: 0x64d0  .word       0x000064D0                   # mfhi        $t4 # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26bb34u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_26bb38:
    // 0x26bb38: 0x0  nop
    ctx->pc = 0x26bb38u;
    // NOP
label_26bb3c:
    // 0x26bb3c: 0x0  nop
    ctx->pc = 0x26bb3cu;
    // NOP
label_26bb40:
    // 0x26bb40: 0x17e7  .word       0x000017E7                   # not         $v0, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26bb40u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_26bb44:
    // 0x26bb44: 0x5890  .word       0x00005890                   # mfhi        $t3 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26bb44u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_26bb48:
    // 0x26bb48: 0x0  nop
    ctx->pc = 0x26bb48u;
    // NOP
label_26bb4c:
    // 0x26bb4c: 0x0  nop
    ctx->pc = 0x26bb4cu;
    // NOP
label_26bb50:
    // 0x26bb50: 0x17f3  tltu        $zero, $zero, 95
    ctx->pc = 0x26bb50u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26bb54:
    // 0x26bb54: 0x3ed0  .word       0x00003ED0                   # mfhi        $a3 # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26bb54u;
    SET_GPR_U64(ctx, 7, ctx->hi);
label_26bb58:
    // 0x26bb58: 0x0  nop
    ctx->pc = 0x26bb58u;
    // NOP
label_26bb5c:
    // 0x26bb5c: 0x0  nop
    ctx->pc = 0x26bb5cu;
    // NOP
label_26bb60:
    // 0x26bb60: 0x17fb  dsra        $v0, $zero, 31
    ctx->pc = 0x26bb60u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 0) >> 31);
label_26bb64:
    // 0x26bb64: 0x4c00  sll         $t1, $zero, 16
    ctx->pc = 0x26bb64u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), 16));
label_26bb68:
    // 0x26bb68: 0x0  nop
    ctx->pc = 0x26bb68u;
    // NOP
label_26bb6c:
    // 0x26bb6c: 0x0  nop
    ctx->pc = 0x26bb6cu;
    // NOP
label_26bb70:
    // 0x26bb70: 0x1805  .word       0x00001805                   # INVALID     $zero, $zero, 0x1805 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26bb70u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x26BB70 raw=0x00001805"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26bb74:
    // 0x26bb74: 0xbf50  .word       0x0000BF50                   # mfhi        $s7 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26bb74u;
    SET_GPR_U64(ctx, 23, ctx->hi);
label_26bb78:
    // 0x26bb78: 0x0  nop
    ctx->pc = 0x26bb78u;
    // NOP
label_26bb7c:
    // 0x26bb7c: 0x0  nop
    ctx->pc = 0x26bb7cu;
    // NOP
label_26bb80:
    // 0x26bb80: 0x181d  .word       0x0000181D                   # dmultu      $zero, $zero # 00001800 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26bb80u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x26BB80 raw=0x0000181D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26bb84:
    // 0x26bb84: 0x85f0  tge         $zero, $zero, 535
    ctx->pc = 0x26bb84u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26bb88:
    // 0x26bb88: 0x0  nop
    ctx->pc = 0x26bb88u;
    // NOP
label_26bb8c:
    // 0x26bb8c: 0x0  nop
    ctx->pc = 0x26bb8cu;
    // NOP
label_26bb90:
    // 0x26bb90: 0x182e  dsub        $v1, $zero, $zero
    ctx->pc = 0x26bb90u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 3, r); }
label_26bb94:
    // 0x26bb94: 0xbfa0  .word       0x0000BFA0                   # add         $s7, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26bb94u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 23, (int32_t)result);     } }
label_26bb98:
    // 0x26bb98: 0x0  nop
    ctx->pc = 0x26bb98u;
    // NOP
label_26bb9c:
    // 0x26bb9c: 0x0  nop
    ctx->pc = 0x26bb9cu;
    // NOP
label_26bba0:
    // 0x26bba0: 0x1846  .word       0x00001846                   # srlv        $v1, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26bba0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_26bba4:
    // 0x26bba4: 0x8ba0  .word       0x00008BA0                   # add         $s1, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26bba4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_26bba8:
    // 0x26bba8: 0x0  nop
    ctx->pc = 0x26bba8u;
    // NOP
label_26bbac:
    // 0x26bbac: 0x0  nop
    ctx->pc = 0x26bbacu;
    // NOP
label_26bbb0:
    // 0x26bbb0: 0x1858  .word       0x00001858                   # mult        $v1, $zero, $zero # 00000040 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x26bbb0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_26bbb4:
    // 0x26bbb4: 0xb710  .word       0x0000B710                   # mfhi        $s6 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26bbb4u;
    SET_GPR_U64(ctx, 22, ctx->hi);
label_26bbb8:
    // 0x26bbb8: 0x0  nop
    ctx->pc = 0x26bbb8u;
    // NOP
label_26bbbc:
    // 0x26bbbc: 0x0  nop
    ctx->pc = 0x26bbbcu;
    // NOP
label_26bbc0:
    // 0x26bbc0: 0x186f  .word       0x0000186F                   # dsubu       $v1, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26bbc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_26bbc4:
    // 0x26bbc4: 0x8f20  .word       0x00008F20                   # add         $s1, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26bbc4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_26bbc8:
    // 0x26bbc8: 0x0  nop
    ctx->pc = 0x26bbc8u;
    // NOP
label_26bbcc:
    // 0x26bbcc: 0x0  nop
    ctx->pc = 0x26bbccu;
    // NOP
label_26bbd0:
    // 0x26bbd0: 0x1881  .word       0x00001881                   # INVALID     $zero, $zero, 0x1881 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26bbd0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x26BBD0 raw=0x00001881"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26bbd4:
    // 0x26bbd4: 0xb9a0  .word       0x0000B9A0                   # add         $s7, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26bbd4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 23, (int32_t)result);     } }
label_26bbd8:
    // 0x26bbd8: 0x0  nop
    ctx->pc = 0x26bbd8u;
    // NOP
label_26bbdc:
    // 0x26bbdc: 0x0  nop
    ctx->pc = 0x26bbdcu;
    // NOP
label_26bbe0:
    // 0x26bbe0: 0x1899  .word       0x00001899                   # multu       $zero, $zero # 00001880 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26bbe0u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_26bbe4:
    // 0x26bbe4: 0x8de0  .word       0x00008DE0                   # add         $s1, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26bbe4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_26bbe8:
    // 0x26bbe8: 0x0  nop
    ctx->pc = 0x26bbe8u;
    // NOP
label_26bbec:
    // 0x26bbec: 0x0  nop
    ctx->pc = 0x26bbecu;
    // NOP
label_26bbf0:
    // 0x26bbf0: 0x18ab  .word       0x000018AB                   # sltu        $v1, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26bbf0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_26bbf4:
    // 0x26bbf4: 0xc080  sll         $t8, $zero, 2
    ctx->pc = 0x26bbf4u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 0), 2));
label_26bbf8:
    // 0x26bbf8: 0x0  nop
    ctx->pc = 0x26bbf8u;
    // NOP
label_26bbfc:
    // 0x26bbfc: 0x0  nop
    ctx->pc = 0x26bbfcu;
    // NOP
label_26bc00:
    // 0x26bc00: 0x18c4  .word       0x000018C4                   # sllv        $v1, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26bc00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_26bc04:
    // 0x26bc04: 0xa5e0  .word       0x0000A5E0                   # add         $s4, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26bc04u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_26bc08:
    // 0x26bc08: 0x0  nop
    ctx->pc = 0x26bc08u;
    // NOP
label_26bc0c:
    // 0x26bc0c: 0x0  nop
    ctx->pc = 0x26bc0cu;
    // NOP
label_26bc10:
    // 0x26bc10: 0x18d9  .word       0x000018D9                   # multu       $zero, $zero # 000018C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26bc10u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_26bc14:
    // 0x26bc14: 0x13c30  tge         $zero, $at, 240
    ctx->pc = 0x26bc14u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_26bc18:
    // 0x26bc18: 0x0  nop
    ctx->pc = 0x26bc18u;
    // NOP
label_26bc1c:
    // 0x26bc1c: 0x0  nop
    ctx->pc = 0x26bc1cu;
    // NOP
label_26bc20:
    // 0x26bc20: 0x1901  .word       0x00001901                   # INVALID     $zero, $zero, 0x1901 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26bc20u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x26BC20 raw=0x00001901"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26bc24:
    // 0x26bc24: 0xd840  sll         $k1, $zero, 1
    ctx->pc = 0x26bc24u;
    SET_GPR_S32(ctx, 27, (int32_t)SLL32(GPR_U32(ctx, 0), 1));
label_26bc28:
    // 0x26bc28: 0x0  nop
    ctx->pc = 0x26bc28u;
    // NOP
label_26bc2c:
    // 0x26bc2c: 0x0  nop
    ctx->pc = 0x26bc2cu;
    // NOP
label_26bc30:
    // 0x26bc30: 0x191d  .word       0x0000191D                   # dmultu      $zero, $zero # 00001900 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26bc30u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x26BC30 raw=0x0000191D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26bc34:
    // 0x26bc34: 0xf820  add         $ra, $zero, $zero
    ctx->pc = 0x26bc34u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 31, (int32_t)result);     } }
label_26bc38:
    // 0x26bc38: 0x0  nop
    ctx->pc = 0x26bc38u;
    // NOP
label_26bc3c:
    // 0x26bc3c: 0x0  nop
    ctx->pc = 0x26bc3cu;
    // NOP
label_26bc40:
    // 0x26bc40: 0x193d  .word       0x0000193D                   # INVALID     $zero, $zero, 0x193D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26bc40u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x26BC40 raw=0x0000193D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26bc44:
    // 0x26bc44: 0x9cd0  .word       0x00009CD0                   # mfhi        $s3 # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26bc44u;
    SET_GPR_U64(ctx, 19, ctx->hi);
label_26bc48:
    // 0x26bc48: 0x0  nop
    ctx->pc = 0x26bc48u;
    // NOP
label_26bc4c:
    // 0x26bc4c: 0x0  nop
    ctx->pc = 0x26bc4cu;
    // NOP
label_26bc50:
    // 0x26bc50: 0x1951  .word       0x00001951                   # mthi        $zero # 00001940 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26bc50u;
    ctx->hi = GPR_U64(ctx, 0);
label_26bc54:
    // 0x26bc54: 0xe1c0  sll         $gp, $zero, 7
    ctx->pc = 0x26bc54u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 0), 7));
label_26bc58:
    // 0x26bc58: 0x0  nop
    ctx->pc = 0x26bc58u;
    // NOP
label_26bc5c:
    // 0x26bc5c: 0x0  nop
    ctx->pc = 0x26bc5cu;
    // NOP
label_26bc60:
    // 0x26bc60: 0x196e  .word       0x0000196E                   # dsub        $v1, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26bc60u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 3, r); }
label_26bc64:
    // 0x26bc64: 0x7030  tge         $zero, $zero, 448
    ctx->pc = 0x26bc64u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
    ctx->pc = 0x26bc68u;
    return;
}
