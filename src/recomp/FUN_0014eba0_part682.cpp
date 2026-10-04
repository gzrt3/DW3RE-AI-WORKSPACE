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


void FUN_0014eba0_part682(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x29b3f0u: goto label_29b3f0;
        case 0x29b3f4u: goto label_29b3f4;
        case 0x29b3f8u: goto label_29b3f8;
        case 0x29b3fcu: goto label_29b3fc;
        case 0x29b400u: goto label_29b400;
        case 0x29b404u: goto label_29b404;
        case 0x29b408u: goto label_29b408;
        case 0x29b40cu: goto label_29b40c;
        case 0x29b410u: goto label_29b410;
        case 0x29b414u: goto label_29b414;
        case 0x29b418u: goto label_29b418;
        case 0x29b41cu: goto label_29b41c;
        case 0x29b420u: goto label_29b420;
        case 0x29b424u: goto label_29b424;
        case 0x29b428u: goto label_29b428;
        case 0x29b42cu: goto label_29b42c;
        case 0x29b430u: goto label_29b430;
        case 0x29b434u: goto label_29b434;
        case 0x29b438u: goto label_29b438;
        case 0x29b43cu: goto label_29b43c;
        case 0x29b440u: goto label_29b440;
        case 0x29b444u: goto label_29b444;
        case 0x29b448u: goto label_29b448;
        case 0x29b44cu: goto label_29b44c;
        case 0x29b450u: goto label_29b450;
        case 0x29b454u: goto label_29b454;
        case 0x29b458u: goto label_29b458;
        case 0x29b45cu: goto label_29b45c;
        case 0x29b460u: goto label_29b460;
        case 0x29b464u: goto label_29b464;
        case 0x29b468u: goto label_29b468;
        case 0x29b46cu: goto label_29b46c;
        case 0x29b470u: goto label_29b470;
        case 0x29b474u: goto label_29b474;
        case 0x29b478u: goto label_29b478;
        case 0x29b47cu: goto label_29b47c;
        case 0x29b480u: goto label_29b480;
        case 0x29b484u: goto label_29b484;
        case 0x29b488u: goto label_29b488;
        case 0x29b48cu: goto label_29b48c;
        case 0x29b490u: goto label_29b490;
        case 0x29b494u: goto label_29b494;
        case 0x29b498u: goto label_29b498;
        case 0x29b49cu: goto label_29b49c;
        case 0x29b4a0u: goto label_29b4a0;
        case 0x29b4a4u: goto label_29b4a4;
        case 0x29b4a8u: goto label_29b4a8;
        case 0x29b4acu: goto label_29b4ac;
        case 0x29b4b0u: goto label_29b4b0;
        case 0x29b4b4u: goto label_29b4b4;
        case 0x29b4b8u: goto label_29b4b8;
        case 0x29b4bcu: goto label_29b4bc;
        case 0x29b4c0u: goto label_29b4c0;
        case 0x29b4c4u: goto label_29b4c4;
        case 0x29b4c8u: goto label_29b4c8;
        case 0x29b4ccu: goto label_29b4cc;
        case 0x29b4d0u: goto label_29b4d0;
        case 0x29b4d4u: goto label_29b4d4;
        case 0x29b4d8u: goto label_29b4d8;
        case 0x29b4dcu: goto label_29b4dc;
        case 0x29b4e0u: goto label_29b4e0;
        case 0x29b4e4u: goto label_29b4e4;
        case 0x29b4e8u: goto label_29b4e8;
        case 0x29b4ecu: goto label_29b4ec;
        case 0x29b4f0u: goto label_29b4f0;
        case 0x29b4f4u: goto label_29b4f4;
        case 0x29b4f8u: goto label_29b4f8;
        case 0x29b4fcu: goto label_29b4fc;
        case 0x29b500u: goto label_29b500;
        case 0x29b504u: goto label_29b504;
        case 0x29b508u: goto label_29b508;
        case 0x29b50cu: goto label_29b50c;
        case 0x29b510u: goto label_29b510;
        case 0x29b514u: goto label_29b514;
        case 0x29b518u: goto label_29b518;
        case 0x29b51cu: goto label_29b51c;
        case 0x29b520u: goto label_29b520;
        case 0x29b524u: goto label_29b524;
        case 0x29b528u: goto label_29b528;
        case 0x29b52cu: goto label_29b52c;
        case 0x29b530u: goto label_29b530;
        case 0x29b534u: goto label_29b534;
        case 0x29b538u: goto label_29b538;
        case 0x29b53cu: goto label_29b53c;
        case 0x29b540u: goto label_29b540;
        case 0x29b544u: goto label_29b544;
        case 0x29b548u: goto label_29b548;
        case 0x29b54cu: goto label_29b54c;
        case 0x29b550u: goto label_29b550;
        case 0x29b554u: goto label_29b554;
        case 0x29b558u: goto label_29b558;
        case 0x29b55cu: goto label_29b55c;
        case 0x29b560u: goto label_29b560;
        case 0x29b564u: goto label_29b564;
        case 0x29b568u: goto label_29b568;
        case 0x29b56cu: goto label_29b56c;
        case 0x29b570u: goto label_29b570;
        case 0x29b574u: goto label_29b574;
        case 0x29b578u: goto label_29b578;
        case 0x29b57cu: goto label_29b57c;
        case 0x29b580u: goto label_29b580;
        case 0x29b584u: goto label_29b584;
        case 0x29b588u: goto label_29b588;
        case 0x29b58cu: goto label_29b58c;
        case 0x29b590u: goto label_29b590;
        case 0x29b594u: goto label_29b594;
        case 0x29b598u: goto label_29b598;
        case 0x29b59cu: goto label_29b59c;
        case 0x29b5a0u: goto label_29b5a0;
        case 0x29b5a4u: goto label_29b5a4;
        case 0x29b5a8u: goto label_29b5a8;
        case 0x29b5acu: goto label_29b5ac;
        case 0x29b5b0u: goto label_29b5b0;
        case 0x29b5b4u: goto label_29b5b4;
        case 0x29b5b8u: goto label_29b5b8;
        case 0x29b5bcu: goto label_29b5bc;
        case 0x29b5c0u: goto label_29b5c0;
        case 0x29b5c4u: goto label_29b5c4;
        case 0x29b5c8u: goto label_29b5c8;
        case 0x29b5ccu: goto label_29b5cc;
        case 0x29b5d0u: goto label_29b5d0;
        case 0x29b5d4u: goto label_29b5d4;
        case 0x29b5d8u: goto label_29b5d8;
        case 0x29b5dcu: goto label_29b5dc;
        case 0x29b5e0u: goto label_29b5e0;
        case 0x29b5e4u: goto label_29b5e4;
        case 0x29b5e8u: goto label_29b5e8;
        case 0x29b5ecu: goto label_29b5ec;
        case 0x29b5f0u: goto label_29b5f0;
        case 0x29b5f4u: goto label_29b5f4;
        case 0x29b5f8u: goto label_29b5f8;
        case 0x29b5fcu: goto label_29b5fc;
        case 0x29b600u: goto label_29b600;
        case 0x29b604u: goto label_29b604;
        case 0x29b608u: goto label_29b608;
        case 0x29b60cu: goto label_29b60c;
        case 0x29b610u: goto label_29b610;
        case 0x29b614u: goto label_29b614;
        case 0x29b618u: goto label_29b618;
        case 0x29b61cu: goto label_29b61c;
        case 0x29b620u: goto label_29b620;
        case 0x29b624u: goto label_29b624;
        case 0x29b628u: goto label_29b628;
        case 0x29b62cu: goto label_29b62c;
        case 0x29b630u: goto label_29b630;
        case 0x29b634u: goto label_29b634;
        case 0x29b638u: goto label_29b638;
        case 0x29b63cu: goto label_29b63c;
        case 0x29b640u: goto label_29b640;
        case 0x29b644u: goto label_29b644;
        case 0x29b648u: goto label_29b648;
        case 0x29b64cu: goto label_29b64c;
        case 0x29b650u: goto label_29b650;
        case 0x29b654u: goto label_29b654;
        case 0x29b658u: goto label_29b658;
        case 0x29b65cu: goto label_29b65c;
        case 0x29b660u: goto label_29b660;
        case 0x29b664u: goto label_29b664;
        case 0x29b668u: goto label_29b668;
        case 0x29b66cu: goto label_29b66c;
        case 0x29b670u: goto label_29b670;
        case 0x29b674u: goto label_29b674;
        case 0x29b678u: goto label_29b678;
        case 0x29b67cu: goto label_29b67c;
        case 0x29b680u: goto label_29b680;
        case 0x29b684u: goto label_29b684;
        case 0x29b688u: goto label_29b688;
        case 0x29b68cu: goto label_29b68c;
        case 0x29b690u: goto label_29b690;
        case 0x29b694u: goto label_29b694;
        case 0x29b698u: goto label_29b698;
        case 0x29b69cu: goto label_29b69c;
        case 0x29b6a0u: goto label_29b6a0;
        case 0x29b6a4u: goto label_29b6a4;
        case 0x29b6a8u: goto label_29b6a8;
        case 0x29b6acu: goto label_29b6ac;
        case 0x29b6b0u: goto label_29b6b0;
        case 0x29b6b4u: goto label_29b6b4;
        case 0x29b6b8u: goto label_29b6b8;
        case 0x29b6bcu: goto label_29b6bc;
        case 0x29b6c0u: goto label_29b6c0;
        case 0x29b6c4u: goto label_29b6c4;
        case 0x29b6c8u: goto label_29b6c8;
        case 0x29b6ccu: goto label_29b6cc;
        case 0x29b6d0u: goto label_29b6d0;
        case 0x29b6d4u: goto label_29b6d4;
        case 0x29b6d8u: goto label_29b6d8;
        case 0x29b6dcu: goto label_29b6dc;
        case 0x29b6e0u: goto label_29b6e0;
        case 0x29b6e4u: goto label_29b6e4;
        case 0x29b6e8u: goto label_29b6e8;
        case 0x29b6ecu: goto label_29b6ec;
        case 0x29b6f0u: goto label_29b6f0;
        case 0x29b6f4u: goto label_29b6f4;
        case 0x29b6f8u: goto label_29b6f8;
        case 0x29b6fcu: goto label_29b6fc;
        case 0x29b700u: goto label_29b700;
        case 0x29b704u: goto label_29b704;
        case 0x29b708u: goto label_29b708;
        case 0x29b70cu: goto label_29b70c;
        case 0x29b710u: goto label_29b710;
        case 0x29b714u: goto label_29b714;
        case 0x29b718u: goto label_29b718;
        case 0x29b71cu: goto label_29b71c;
        case 0x29b720u: goto label_29b720;
        case 0x29b724u: goto label_29b724;
        case 0x29b728u: goto label_29b728;
        case 0x29b72cu: goto label_29b72c;
        case 0x29b730u: goto label_29b730;
        case 0x29b734u: goto label_29b734;
        case 0x29b738u: goto label_29b738;
        case 0x29b73cu: goto label_29b73c;
        case 0x29b740u: goto label_29b740;
        case 0x29b744u: goto label_29b744;
        case 0x29b748u: goto label_29b748;
        case 0x29b74cu: goto label_29b74c;
        case 0x29b750u: goto label_29b750;
        case 0x29b754u: goto label_29b754;
        case 0x29b758u: goto label_29b758;
        case 0x29b75cu: goto label_29b75c;
        case 0x29b760u: goto label_29b760;
        case 0x29b764u: goto label_29b764;
        case 0x29b768u: goto label_29b768;
        case 0x29b76cu: goto label_29b76c;
        case 0x29b770u: goto label_29b770;
        case 0x29b774u: goto label_29b774;
        case 0x29b778u: goto label_29b778;
        case 0x29b77cu: goto label_29b77c;
        case 0x29b780u: goto label_29b780;
        case 0x29b784u: goto label_29b784;
        case 0x29b788u: goto label_29b788;
        case 0x29b78cu: goto label_29b78c;
        case 0x29b790u: goto label_29b790;
        case 0x29b794u: goto label_29b794;
        case 0x29b798u: goto label_29b798;
        case 0x29b79cu: goto label_29b79c;
        case 0x29b7a0u: goto label_29b7a0;
        case 0x29b7a4u: goto label_29b7a4;
        case 0x29b7a8u: goto label_29b7a8;
        case 0x29b7acu: goto label_29b7ac;
        case 0x29b7b0u: goto label_29b7b0;
        case 0x29b7b4u: goto label_29b7b4;
        case 0x29b7b8u: goto label_29b7b8;
        case 0x29b7bcu: goto label_29b7bc;
        case 0x29b7c0u: goto label_29b7c0;
        case 0x29b7c4u: goto label_29b7c4;
        case 0x29b7c8u: goto label_29b7c8;
        case 0x29b7ccu: goto label_29b7cc;
        case 0x29b7d0u: goto label_29b7d0;
        case 0x29b7d4u: goto label_29b7d4;
        case 0x29b7d8u: goto label_29b7d8;
        case 0x29b7dcu: goto label_29b7dc;
        case 0x29b7e0u: goto label_29b7e0;
        case 0x29b7e4u: goto label_29b7e4;
        case 0x29b7e8u: goto label_29b7e8;
        case 0x29b7ecu: goto label_29b7ec;
        case 0x29b7f0u: goto label_29b7f0;
        case 0x29b7f4u: goto label_29b7f4;
        case 0x29b7f8u: goto label_29b7f8;
        case 0x29b7fcu: goto label_29b7fc;
        case 0x29b800u: goto label_29b800;
        case 0x29b804u: goto label_29b804;
        case 0x29b808u: goto label_29b808;
        case 0x29b80cu: goto label_29b80c;
        case 0x29b810u: goto label_29b810;
        case 0x29b814u: goto label_29b814;
        case 0x29b818u: goto label_29b818;
        case 0x29b81cu: goto label_29b81c;
        case 0x29b820u: goto label_29b820;
        case 0x29b824u: goto label_29b824;
        case 0x29b828u: goto label_29b828;
        case 0x29b82cu: goto label_29b82c;
        case 0x29b830u: goto label_29b830;
        case 0x29b834u: goto label_29b834;
        case 0x29b838u: goto label_29b838;
        case 0x29b83cu: goto label_29b83c;
        case 0x29b840u: goto label_29b840;
        case 0x29b844u: goto label_29b844;
        case 0x29b848u: goto label_29b848;
        case 0x29b84cu: goto label_29b84c;
        case 0x29b850u: goto label_29b850;
        case 0x29b854u: goto label_29b854;
        case 0x29b858u: goto label_29b858;
        case 0x29b85cu: goto label_29b85c;
        case 0x29b860u: goto label_29b860;
        case 0x29b864u: goto label_29b864;
        case 0x29b868u: goto label_29b868;
        case 0x29b86cu: goto label_29b86c;
        case 0x29b870u: goto label_29b870;
        case 0x29b874u: goto label_29b874;
        case 0x29b878u: goto label_29b878;
        case 0x29b87cu: goto label_29b87c;
        case 0x29b880u: goto label_29b880;
        case 0x29b884u: goto label_29b884;
        case 0x29b888u: goto label_29b888;
        case 0x29b88cu: goto label_29b88c;
        case 0x29b890u: goto label_29b890;
        case 0x29b894u: goto label_29b894;
        case 0x29b898u: goto label_29b898;
        case 0x29b89cu: goto label_29b89c;
        case 0x29b8a0u: goto label_29b8a0;
        case 0x29b8a4u: goto label_29b8a4;
        case 0x29b8a8u: goto label_29b8a8;
        case 0x29b8acu: goto label_29b8ac;
        case 0x29b8b0u: goto label_29b8b0;
        case 0x29b8b4u: goto label_29b8b4;
        case 0x29b8b8u: goto label_29b8b8;
        case 0x29b8bcu: goto label_29b8bc;
        case 0x29b8c0u: goto label_29b8c0;
        case 0x29b8c4u: goto label_29b8c4;
        case 0x29b8c8u: goto label_29b8c8;
        case 0x29b8ccu: goto label_29b8cc;
        case 0x29b8d0u: goto label_29b8d0;
        case 0x29b8d4u: goto label_29b8d4;
        case 0x29b8d8u: goto label_29b8d8;
        case 0x29b8dcu: goto label_29b8dc;
        case 0x29b8e0u: goto label_29b8e0;
        case 0x29b8e4u: goto label_29b8e4;
        case 0x29b8e8u: goto label_29b8e8;
        case 0x29b8ecu: goto label_29b8ec;
        case 0x29b8f0u: goto label_29b8f0;
        case 0x29b8f4u: goto label_29b8f4;
        case 0x29b8f8u: goto label_29b8f8;
        case 0x29b8fcu: goto label_29b8fc;
        case 0x29b900u: goto label_29b900;
        case 0x29b904u: goto label_29b904;
        case 0x29b908u: goto label_29b908;
        case 0x29b90cu: goto label_29b90c;
        case 0x29b910u: goto label_29b910;
        case 0x29b914u: goto label_29b914;
        case 0x29b918u: goto label_29b918;
        case 0x29b91cu: goto label_29b91c;
        case 0x29b920u: goto label_29b920;
        case 0x29b924u: goto label_29b924;
        case 0x29b928u: goto label_29b928;
        case 0x29b92cu: goto label_29b92c;
        case 0x29b930u: goto label_29b930;
        case 0x29b934u: goto label_29b934;
        case 0x29b938u: goto label_29b938;
        case 0x29b93cu: goto label_29b93c;
        case 0x29b940u: goto label_29b940;
        case 0x29b944u: goto label_29b944;
        case 0x29b948u: goto label_29b948;
        case 0x29b94cu: goto label_29b94c;
        case 0x29b950u: goto label_29b950;
        case 0x29b954u: goto label_29b954;
        case 0x29b958u: goto label_29b958;
        case 0x29b95cu: goto label_29b95c;
        case 0x29b960u: goto label_29b960;
        case 0x29b964u: goto label_29b964;
        case 0x29b968u: goto label_29b968;
        case 0x29b96cu: goto label_29b96c;
        case 0x29b970u: goto label_29b970;
        case 0x29b974u: goto label_29b974;
        case 0x29b978u: goto label_29b978;
        case 0x29b97cu: goto label_29b97c;
        case 0x29b980u: goto label_29b980;
        case 0x29b984u: goto label_29b984;
        case 0x29b988u: goto label_29b988;
        case 0x29b98cu: goto label_29b98c;
        case 0x29b990u: goto label_29b990;
        case 0x29b994u: goto label_29b994;
        case 0x29b998u: goto label_29b998;
        case 0x29b99cu: goto label_29b99c;
        case 0x29b9a0u: goto label_29b9a0;
        case 0x29b9a4u: goto label_29b9a4;
        case 0x29b9a8u: goto label_29b9a8;
        case 0x29b9acu: goto label_29b9ac;
        case 0x29b9b0u: goto label_29b9b0;
        case 0x29b9b4u: goto label_29b9b4;
        case 0x29b9b8u: goto label_29b9b8;
        case 0x29b9bcu: goto label_29b9bc;
        case 0x29b9c0u: goto label_29b9c0;
        case 0x29b9c4u: goto label_29b9c4;
        case 0x29b9c8u: goto label_29b9c8;
        case 0x29b9ccu: goto label_29b9cc;
        case 0x29b9d0u: goto label_29b9d0;
        case 0x29b9d4u: goto label_29b9d4;
        case 0x29b9d8u: goto label_29b9d8;
        case 0x29b9dcu: goto label_29b9dc;
        case 0x29b9e0u: goto label_29b9e0;
        case 0x29b9e4u: goto label_29b9e4;
        case 0x29b9e8u: goto label_29b9e8;
        case 0x29b9ecu: goto label_29b9ec;
        case 0x29b9f0u: goto label_29b9f0;
        case 0x29b9f4u: goto label_29b9f4;
        case 0x29b9f8u: goto label_29b9f8;
        case 0x29b9fcu: goto label_29b9fc;
        case 0x29ba00u: goto label_29ba00;
        case 0x29ba04u: goto label_29ba04;
        case 0x29ba08u: goto label_29ba08;
        case 0x29ba0cu: goto label_29ba0c;
        case 0x29ba10u: goto label_29ba10;
        case 0x29ba14u: goto label_29ba14;
        case 0x29ba18u: goto label_29ba18;
        case 0x29ba1cu: goto label_29ba1c;
        case 0x29ba20u: goto label_29ba20;
        case 0x29ba24u: goto label_29ba24;
        case 0x29ba28u: goto label_29ba28;
        case 0x29ba2cu: goto label_29ba2c;
        case 0x29ba30u: goto label_29ba30;
        case 0x29ba34u: goto label_29ba34;
        case 0x29ba38u: goto label_29ba38;
        case 0x29ba3cu: goto label_29ba3c;
        case 0x29ba40u: goto label_29ba40;
        case 0x29ba44u: goto label_29ba44;
        case 0x29ba48u: goto label_29ba48;
        case 0x29ba4cu: goto label_29ba4c;
        case 0x29ba50u: goto label_29ba50;
        case 0x29ba54u: goto label_29ba54;
        case 0x29ba58u: goto label_29ba58;
        case 0x29ba5cu: goto label_29ba5c;
        case 0x29ba60u: goto label_29ba60;
        case 0x29ba64u: goto label_29ba64;
        case 0x29ba68u: goto label_29ba68;
        case 0x29ba6cu: goto label_29ba6c;
        case 0x29ba70u: goto label_29ba70;
        case 0x29ba74u: goto label_29ba74;
        case 0x29ba78u: goto label_29ba78;
        case 0x29ba7cu: goto label_29ba7c;
        case 0x29ba80u: goto label_29ba80;
        case 0x29ba84u: goto label_29ba84;
        case 0x29ba88u: goto label_29ba88;
        case 0x29ba8cu: goto label_29ba8c;
        case 0x29ba90u: goto label_29ba90;
        case 0x29ba94u: goto label_29ba94;
        case 0x29ba98u: goto label_29ba98;
        case 0x29ba9cu: goto label_29ba9c;
        case 0x29baa0u: goto label_29baa0;
        case 0x29baa4u: goto label_29baa4;
        case 0x29baa8u: goto label_29baa8;
        case 0x29baacu: goto label_29baac;
        case 0x29bab0u: goto label_29bab0;
        case 0x29bab4u: goto label_29bab4;
        case 0x29bab8u: goto label_29bab8;
        case 0x29babcu: goto label_29babc;
        case 0x29bac0u: goto label_29bac0;
        case 0x29bac4u: goto label_29bac4;
        case 0x29bac8u: goto label_29bac8;
        case 0x29baccu: goto label_29bacc;
        case 0x29bad0u: goto label_29bad0;
        case 0x29bad4u: goto label_29bad4;
        case 0x29bad8u: goto label_29bad8;
        case 0x29badcu: goto label_29badc;
        case 0x29bae0u: goto label_29bae0;
        case 0x29bae4u: goto label_29bae4;
        case 0x29bae8u: goto label_29bae8;
        case 0x29baecu: goto label_29baec;
        case 0x29baf0u: goto label_29baf0;
        case 0x29baf4u: goto label_29baf4;
        case 0x29baf8u: goto label_29baf8;
        case 0x29bafcu: goto label_29bafc;
        case 0x29bb00u: goto label_29bb00;
        case 0x29bb04u: goto label_29bb04;
        case 0x29bb08u: goto label_29bb08;
        case 0x29bb0cu: goto label_29bb0c;
        case 0x29bb10u: goto label_29bb10;
        case 0x29bb14u: goto label_29bb14;
        case 0x29bb18u: goto label_29bb18;
        case 0x29bb1cu: goto label_29bb1c;
        case 0x29bb20u: goto label_29bb20;
        case 0x29bb24u: goto label_29bb24;
        case 0x29bb28u: goto label_29bb28;
        case 0x29bb2cu: goto label_29bb2c;
        case 0x29bb30u: goto label_29bb30;
        case 0x29bb34u: goto label_29bb34;
        case 0x29bb38u: goto label_29bb38;
        case 0x29bb3cu: goto label_29bb3c;
        case 0x29bb40u: goto label_29bb40;
        case 0x29bb44u: goto label_29bb44;
        case 0x29bb48u: goto label_29bb48;
        case 0x29bb4cu: goto label_29bb4c;
        case 0x29bb50u: goto label_29bb50;
        case 0x29bb54u: goto label_29bb54;
        case 0x29bb58u: goto label_29bb58;
        case 0x29bb5cu: goto label_29bb5c;
        case 0x29bb60u: goto label_29bb60;
        case 0x29bb64u: goto label_29bb64;
        case 0x29bb68u: goto label_29bb68;
        case 0x29bb6cu: goto label_29bb6c;
        case 0x29bb70u: goto label_29bb70;
        case 0x29bb74u: goto label_29bb74;
        case 0x29bb78u: goto label_29bb78;
        case 0x29bb7cu: goto label_29bb7c;
        case 0x29bb80u: goto label_29bb80;
        case 0x29bb84u: goto label_29bb84;
        case 0x29bb88u: goto label_29bb88;
        case 0x29bb8cu: goto label_29bb8c;
        case 0x29bb90u: goto label_29bb90;
        case 0x29bb94u: goto label_29bb94;
        case 0x29bb98u: goto label_29bb98;
        case 0x29bb9cu: goto label_29bb9c;
        case 0x29bba0u: goto label_29bba0;
        case 0x29bba4u: goto label_29bba4;
        case 0x29bba8u: goto label_29bba8;
        case 0x29bbacu: goto label_29bbac;
        case 0x29bbb0u: goto label_29bbb0;
        case 0x29bbb4u: goto label_29bbb4;
        case 0x29bbb8u: goto label_29bbb8;
        case 0x29bbbcu: goto label_29bbbc;
        default: return;
    }

label_29b3f0:
    // 0x29b3f0: 0x34b60  .word       0x00034B60                   # add         $t1, $zero, $v1 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b3f0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_29b3f4:
    // 0x29b3f4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b3f4u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29B3F4 raw=0x00000001");
 /* MITIGATED */
label_29b3f8:
    // 0x29b3f8: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x29b3f8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29b3fc:
    // 0x29b3fc: 0x0  nop
    ctx->pc = 0x29b3fcu;
    // NOP
label_29b400:
    // 0x29b400: 0x34b61  .word       0x00034B61                   # addu        $t1, $zero, $v1 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b400u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
label_29b404:
    // 0x29b404: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29b404u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29b408:
    // 0x29b408: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b408u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29b40c:
    // 0x29b40c: 0x0  nop
    ctx->pc = 0x29b40cu;
    // NOP
label_29b410:
    // 0x29b410: 0x34b65  .word       0x00034B65                   # or          $t1, $zero, $v1 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b410u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) | GPR_U64(ctx, 3));
label_29b414:
    // 0x29b414: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29b414u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29b418:
    // 0x29b418: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b418u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29b41c:
    // 0x29b41c: 0x0  nop
    ctx->pc = 0x29b41cu;
    // NOP
label_29b420:
    // 0x29b420: 0x34b69  .word       0x00034B69                   # mtsa        $zero # 00034B40 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x29b420u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_29b424:
    // 0x29b424: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b424u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29B424 raw=0x00000001");
 /* MITIGATED */
label_29b428:
    // 0x29b428: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x29b428u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29b42c:
    // 0x29b42c: 0x0  nop
    ctx->pc = 0x29b42cu;
    // NOP
label_29b430:
    // 0x29b430: 0x34b6a  .word       0x00034B6A                   # slt         $t1, $zero, $v1 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b430u;
    SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_29b434:
    // 0x29b434: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b434u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29B434 raw=0x00000001");
 /* MITIGATED */
label_29b438:
    // 0x29b438: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x29b438u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29b43c:
    // 0x29b43c: 0x0  nop
    ctx->pc = 0x29b43cu;
    // NOP
label_29b440:
    // 0x29b440: 0x34b6b  .word       0x00034B6B                   # sltu        $t1, $zero, $v1 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b440u;
    SET_GPR_U64(ctx, 9, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_29b444:
    // 0x29b444: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29b444u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29b448:
    // 0x29b448: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b448u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29b44c:
    // 0x29b44c: 0x0  nop
    ctx->pc = 0x29b44cu;
    // NOP
label_29b450:
    // 0x29b450: 0x34b6f  .word       0x00034B6F                   # dsubu       $t1, $zero, $v1 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b450u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) - GPR_U64(ctx, 3));
label_29b454:
    // 0x29b454: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29b454u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29b458:
    // 0x29b458: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b458u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29b45c:
    // 0x29b45c: 0x0  nop
    ctx->pc = 0x29b45cu;
    // NOP
label_29b460:
    // 0x29b460: 0x34b73  tltu        $zero, $v1, 301
    ctx->pc = 0x29b460u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_29b464:
    // 0x29b464: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b464u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29B464 raw=0x00000001");
 /* MITIGATED */
label_29b468:
    // 0x29b468: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x29b468u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29b46c:
    // 0x29b46c: 0x0  nop
    ctx->pc = 0x29b46cu;
    // NOP
label_29b470:
    // 0x29b470: 0x34b74  teq         $zero, $v1, 301
    ctx->pc = 0x29b470u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_29b474:
    // 0x29b474: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b474u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29B474 raw=0x00000001");
 /* MITIGATED */
label_29b478:
    // 0x29b478: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x29b478u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29b47c:
    // 0x29b47c: 0x0  nop
    ctx->pc = 0x29b47cu;
    // NOP
label_29b480:
    // 0x29b480: 0x34b75  .word       0x00034B75                   # INVALID     $zero, $v1, 0x4B75 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b480u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x29B480 raw=0x00034B75");
 /* MITIGATED */
label_29b484:
    // 0x29b484: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29b484u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29b488:
    // 0x29b488: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b488u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29b48c:
    // 0x29b48c: 0x0  nop
    ctx->pc = 0x29b48cu;
    // NOP
label_29b490:
    // 0x29b490: 0x34b79  .word       0x00034B79                   # INVALID     $zero, $v1, 0x4B79 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b490u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x29B490 raw=0x00034B79");
 /* MITIGATED */
label_29b494:
    // 0x29b494: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29b494u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29b498:
    // 0x29b498: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b498u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29b49c:
    // 0x29b49c: 0x0  nop
    ctx->pc = 0x29b49cu;
    // NOP
label_29b4a0:
    // 0x29b4a0: 0x34b7d  .word       0x00034B7D                   # INVALID     $zero, $v1, 0x4B7D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b4a0u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x29B4A0 raw=0x00034B7D");
 /* MITIGATED */
label_29b4a4:
    // 0x29b4a4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b4a4u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29B4A4 raw=0x00000001");
 /* MITIGATED */
label_29b4a8:
    // 0x29b4a8: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x29b4a8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29b4ac:
    // 0x29b4ac: 0x0  nop
    ctx->pc = 0x29b4acu;
    // NOP
label_29b4b0:
    // 0x29b4b0: 0x34b7e  dsrl32      $t1, $v1, 13
    ctx->pc = 0x29b4b0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) >> (32 + 13));
label_29b4b4:
    // 0x29b4b4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b4b4u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29B4B4 raw=0x00000001");
 /* MITIGATED */
label_29b4b8:
    // 0x29b4b8: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x29b4b8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29b4bc:
    // 0x29b4bc: 0x0  nop
    ctx->pc = 0x29b4bcu;
    // NOP
label_29b4c0:
    // 0x29b4c0: 0x34b7f  dsra32      $t1, $v1, 13
    ctx->pc = 0x29b4c0u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 3) >> (32 + 13));
label_29b4c4:
    // 0x29b4c4: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29b4c4u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29b4c8:
    // 0x29b4c8: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b4c8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29b4cc:
    // 0x29b4cc: 0x0  nop
    ctx->pc = 0x29b4ccu;
    // NOP
label_29b4d0:
    // 0x29b4d0: 0x34b83  sra         $t1, $v1, 14
    ctx->pc = 0x29b4d0u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 3), 14));
label_29b4d4:
    // 0x29b4d4: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29b4d4u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29b4d8:
    // 0x29b4d8: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b4d8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29b4dc:
    // 0x29b4dc: 0x0  nop
    ctx->pc = 0x29b4dcu;
    // NOP
label_29b4e0:
    // 0x29b4e0: 0x34b87  .word       0x00034B87                   # srav        $t1, $v1, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b4e0u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 3), GPR_U32(ctx, 0) & 0x1F));
label_29b4e4:
    // 0x29b4e4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b4e4u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29B4E4 raw=0x00000001");
 /* MITIGATED */
label_29b4e8:
    // 0x29b4e8: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x29b4e8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29b4ec:
    // 0x29b4ec: 0x0  nop
    ctx->pc = 0x29b4ecu;
    // NOP
label_29b4f0:
    // 0x29b4f0: 0x34b88  .word       0x00034B88                   # jr          $zero # 00034B80 <InstrIdType: CPU_SPECIAL>
label_29b4f4:
    if (ctx->pc == 0x29B4F4u) {
        ctx->pc = 0x29B4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B4F0u;
        // 0x29b4f4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
//         throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29B4F4 raw=0x00000001");
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x29B4F8u;
        goto label_29b4f8;
    }
    ctx->pc = 0x29B4F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x29B4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B4F0u;
        // 0x29b4f4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
//         throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29B4F4 raw=0x00000001");
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29B4F0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x29B4F8u;
label_29b4f8:
    // 0x29b4f8: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x29b4f8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29b4fc:
    // 0x29b4fc: 0x0  nop
    ctx->pc = 0x29b4fcu;
    // NOP
label_29b500:
    // 0x29b500: 0x34b89  .word       0x00034B89                   # jalr        $t1, $zero # 00030380 <InstrIdType: CPU_SPECIAL>
label_29b504:
    if (ctx->pc == 0x29B504u) {
        ctx->pc = 0x29B504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B500u;
        // 0x29b504: 0x4  sllv        $zero, $zero, $zero (Delay Slot)
        SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29B508u;
        goto label_29b508;
    }
    ctx->pc = 0x29B500u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 9, 0x29B508u);
        ctx->pc = 0x29B504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B500u;
        // 0x29b504: 0x4  sllv        $zero, $zero, $zero (Delay Slot)
        SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29B500u, 0x29B508u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29B508u;
label_29b508:
    // 0x29b508: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b508u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29b50c:
    // 0x29b50c: 0x0  nop
    ctx->pc = 0x29b50cu;
    // NOP
label_29b510:
    // 0x29b510: 0x34b8d  break       3, 302
    ctx->pc = 0x29b510u;
    runtime->handleBreak(rdram, ctx);
label_29b514:
    // 0x29b514: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29b514u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29b518:
    // 0x29b518: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b518u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29b51c:
    // 0x29b51c: 0x0  nop
    ctx->pc = 0x29b51cu;
    // NOP
label_29b520:
    // 0x29b520: 0x34b91  .word       0x00034B91                   # mthi        $zero # 00034B80 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b520u;
    ctx->hi = GPR_U64(ctx, 0);
label_29b524:
    // 0x29b524: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b524u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29B524 raw=0x00000001");
 /* MITIGATED */
label_29b528:
    // 0x29b528: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x29b528u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29b52c:
    // 0x29b52c: 0x0  nop
    ctx->pc = 0x29b52cu;
    // NOP
label_29b530:
    // 0x29b530: 0x34b92  .word       0x00034B92                   # mflo        $t1 # 00030380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b530u;
    SET_GPR_U64(ctx, 9, ctx->lo);
label_29b534:
    // 0x29b534: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b534u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29B534 raw=0x00000001");
 /* MITIGATED */
label_29b538:
    // 0x29b538: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x29b538u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29b53c:
    // 0x29b53c: 0x0  nop
    ctx->pc = 0x29b53cu;
    // NOP
label_29b540:
    // 0x29b540: 0x34b93  .word       0x00034B93                   # mtlo        $zero # 00034B80 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b540u;
    ctx->lo = GPR_U64(ctx, 0);
label_29b544:
    // 0x29b544: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29b544u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29b548:
    // 0x29b548: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b548u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29b54c:
    // 0x29b54c: 0x0  nop
    ctx->pc = 0x29b54cu;
    // NOP
label_29b550:
    // 0x29b550: 0x34b97  .word       0x00034B97                   # dsrav       $t1, $v1, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b550u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 3) >> (GPR_U32(ctx, 0) & 0x3F));
label_29b554:
    // 0x29b554: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29b554u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29b558:
    // 0x29b558: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b558u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29b55c:
    // 0x29b55c: 0x0  nop
    ctx->pc = 0x29b55cu;
    // NOP
label_29b560:
    // 0x29b560: 0x34b9b  .word       0x00034B9B                   # divu        $t1, $zero, $v1 # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b560u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_29b564:
    // 0x29b564: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b564u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29B564 raw=0x00000001");
 /* MITIGATED */
label_29b568:
    // 0x29b568: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x29b568u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29b56c:
    // 0x29b56c: 0x0  nop
    ctx->pc = 0x29b56cu;
    // NOP
label_29b570:
    // 0x29b570: 0x34b9c  .word       0x00034B9C                   # dmult       $zero, $v1 # 00004B80 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b570u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x29B570 raw=0x00034B9C");
 /* MITIGATED */
label_29b574:
    // 0x29b574: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b574u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29B574 raw=0x00000001");
 /* MITIGATED */
label_29b578:
    // 0x29b578: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x29b578u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29b57c:
    // 0x29b57c: 0x0  nop
    ctx->pc = 0x29b57cu;
    // NOP
label_29b580:
    // 0x29b580: 0x34b9d  .word       0x00034B9D                   # dmultu      $zero, $v1 # 00004B80 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b580u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x29B580 raw=0x00034B9D");
 /* MITIGATED */
label_29b584:
    // 0x29b584: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29b584u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29b588:
    // 0x29b588: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b588u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29b58c:
    // 0x29b58c: 0x0  nop
    ctx->pc = 0x29b58cu;
    // NOP
label_29b590:
    // 0x29b590: 0x34ba1  .word       0x00034BA1                   # addu        $t1, $zero, $v1 # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b590u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
label_29b594:
    // 0x29b594: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29b594u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29b598:
    // 0x29b598: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b598u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29b59c:
    // 0x29b59c: 0x0  nop
    ctx->pc = 0x29b59cu;
    // NOP
label_29b5a0:
    // 0x29b5a0: 0x34ba5  .word       0x00034BA5                   # or          $t1, $zero, $v1 # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b5a0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) | GPR_U64(ctx, 3));
label_29b5a4:
    // 0x29b5a4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b5a4u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29B5A4 raw=0x00000001");
 /* MITIGATED */
label_29b5a8:
    // 0x29b5a8: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x29b5a8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29b5ac:
    // 0x29b5ac: 0x0  nop
    ctx->pc = 0x29b5acu;
    // NOP
label_29b5b0:
    // 0x29b5b0: 0x34ba6  .word       0x00034BA6                   # xor         $t1, $zero, $v1 # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b5b0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 3));
label_29b5b4:
    // 0x29b5b4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b5b4u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29B5B4 raw=0x00000001");
 /* MITIGATED */
label_29b5b8:
    // 0x29b5b8: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x29b5b8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29b5bc:
    // 0x29b5bc: 0x0  nop
    ctx->pc = 0x29b5bcu;
    // NOP
label_29b5c0:
    // 0x29b5c0: 0x34ba7  .word       0x00034BA7                   # nor         $t1, $zero, $v1 # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b5c0u;
    SET_GPR_U64(ctx, 9, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
label_29b5c4:
    // 0x29b5c4: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29b5c4u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29b5c8:
    // 0x29b5c8: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b5c8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29b5cc:
    // 0x29b5cc: 0x0  nop
    ctx->pc = 0x29b5ccu;
    // NOP
label_29b5d0:
    // 0x29b5d0: 0x34bab  .word       0x00034BAB                   # sltu        $t1, $zero, $v1 # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b5d0u;
    SET_GPR_U64(ctx, 9, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_29b5d4:
    // 0x29b5d4: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29b5d4u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29b5d8:
    // 0x29b5d8: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b5d8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29b5dc:
    // 0x29b5dc: 0x0  nop
    ctx->pc = 0x29b5dcu;
    // NOP
label_29b5e0:
    // 0x29b5e0: 0x34baf  .word       0x00034BAF                   # dsubu       $t1, $zero, $v1 # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b5e0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) - GPR_U64(ctx, 3));
label_29b5e4:
    // 0x29b5e4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b5e4u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29B5E4 raw=0x00000001");
 /* MITIGATED */
label_29b5e8:
    // 0x29b5e8: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x29b5e8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29b5ec:
    // 0x29b5ec: 0x0  nop
    ctx->pc = 0x29b5ecu;
    // NOP
label_29b5f0:
    // 0x29b5f0: 0x34bb0  tge         $zero, $v1, 302
    ctx->pc = 0x29b5f0u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_29b5f4:
    // 0x29b5f4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b5f4u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29B5F4 raw=0x00000001");
 /* MITIGATED */
label_29b5f8:
    // 0x29b5f8: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x29b5f8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29b5fc:
    // 0x29b5fc: 0x0  nop
    ctx->pc = 0x29b5fcu;
    // NOP
label_29b600:
    // 0x29b600: 0x34bb1  tgeu        $zero, $v1, 302
    ctx->pc = 0x29b600u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_29b604:
    // 0x29b604: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29b604u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29b608:
    // 0x29b608: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b608u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29b60c:
    // 0x29b60c: 0x0  nop
    ctx->pc = 0x29b60cu;
    // NOP
label_29b610:
    // 0x29b610: 0x34bb5  .word       0x00034BB5                   # INVALID     $zero, $v1, 0x4BB5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b610u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x29B610 raw=0x00034BB5");
 /* MITIGATED */
label_29b614:
    // 0x29b614: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29b614u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29b618:
    // 0x29b618: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b618u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29b61c:
    // 0x29b61c: 0x0  nop
    ctx->pc = 0x29b61cu;
    // NOP
label_29b620:
    // 0x29b620: 0x34bb9  .word       0x00034BB9                   # INVALID     $zero, $v1, 0x4BB9 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b620u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x29B620 raw=0x00034BB9");
 /* MITIGATED */
label_29b624:
    // 0x29b624: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b624u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29B624 raw=0x00000001");
 /* MITIGATED */
label_29b628:
    // 0x29b628: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x29b628u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29b62c:
    // 0x29b62c: 0x0  nop
    ctx->pc = 0x29b62cu;
    // NOP
label_29b630:
    // 0x29b630: 0x34bba  dsrl        $t1, $v1, 14
    ctx->pc = 0x29b630u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) >> 14);
label_29b634:
    // 0x29b634: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b634u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29B634 raw=0x00000001");
 /* MITIGATED */
label_29b638:
    // 0x29b638: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x29b638u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29b63c:
    // 0x29b63c: 0x0  nop
    ctx->pc = 0x29b63cu;
    // NOP
label_29b640:
    // 0x29b640: 0x34bbb  dsra        $t1, $v1, 14
    ctx->pc = 0x29b640u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 3) >> 14);
label_29b644:
    // 0x29b644: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29b644u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29b648:
    // 0x29b648: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b648u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29b64c:
    // 0x29b64c: 0x0  nop
    ctx->pc = 0x29b64cu;
    // NOP
label_29b650:
    // 0x29b650: 0x34bbf  dsra32      $t1, $v1, 14
    ctx->pc = 0x29b650u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 3) >> (32 + 14));
label_29b654:
    // 0x29b654: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29b654u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29b658:
    // 0x29b658: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b658u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29b65c:
    // 0x29b65c: 0x0  nop
    ctx->pc = 0x29b65cu;
    // NOP
label_29b660:
    // 0x29b660: 0x34bc3  sra         $t1, $v1, 15
    ctx->pc = 0x29b660u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 3), 15));
label_29b664:
    // 0x29b664: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b664u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29B664 raw=0x00000001");
 /* MITIGATED */
label_29b668:
    // 0x29b668: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x29b668u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29b66c:
    // 0x29b66c: 0x0  nop
    ctx->pc = 0x29b66cu;
    // NOP
label_29b670:
    // 0x29b670: 0x34bc4  .word       0x00034BC4                   # sllv        $t1, $v1, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b670u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 0) & 0x1F));
label_29b674:
    // 0x29b674: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b674u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29B674 raw=0x00000001");
 /* MITIGATED */
label_29b678:
    // 0x29b678: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x29b678u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29b67c:
    // 0x29b67c: 0x0  nop
    ctx->pc = 0x29b67cu;
    // NOP
label_29b680:
    // 0x29b680: 0x34bc5  .word       0x00034BC5                   # INVALID     $zero, $v1, 0x4BC5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b680u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x29B680 raw=0x00034BC5");
 /* MITIGATED */
label_29b684:
    // 0x29b684: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29b684u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29b688:
    // 0x29b688: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b688u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29b68c:
    // 0x29b68c: 0x0  nop
    ctx->pc = 0x29b68cu;
    // NOP
label_29b690:
    // 0x29b690: 0x34bc9  .word       0x00034BC9                   # jalr        $t1, $zero # 000303C0 <InstrIdType: CPU_SPECIAL>
label_29b694:
    if (ctx->pc == 0x29B694u) {
        ctx->pc = 0x29B694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B690u;
        // 0x29b694: 0x4  sllv        $zero, $zero, $zero (Delay Slot)
        SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29B698u;
        goto label_29b698;
    }
    ctx->pc = 0x29B690u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 9, 0x29B698u);
        ctx->pc = 0x29B694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B690u;
        // 0x29b694: 0x4  sllv        $zero, $zero, $zero (Delay Slot)
        SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29B690u, 0x29B698u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29B698u;
label_29b698:
    // 0x29b698: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b698u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29b69c:
    // 0x29b69c: 0x0  nop
    ctx->pc = 0x29b69cu;
    // NOP
label_29b6a0:
    // 0x29b6a0: 0x34bcd  break       3, 303
    ctx->pc = 0x29b6a0u;
    runtime->handleBreak(rdram, ctx);
label_29b6a4:
    // 0x29b6a4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b6a4u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29B6A4 raw=0x00000001");
 /* MITIGATED */
label_29b6a8:
    // 0x29b6a8: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x29b6a8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29b6ac:
    // 0x29b6ac: 0x0  nop
    ctx->pc = 0x29b6acu;
    // NOP
label_29b6b0:
    // 0x29b6b0: 0x34bce  .word       0x00034BCE                   # INVALID     $zero, $v1, 0x4BCE # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b6b0u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x29B6B0 raw=0x00034BCE");
 /* MITIGATED */
label_29b6b4:
    // 0x29b6b4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b6b4u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29B6B4 raw=0x00000001");
 /* MITIGATED */
label_29b6b8:
    // 0x29b6b8: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x29b6b8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29b6bc:
    // 0x29b6bc: 0x0  nop
    ctx->pc = 0x29b6bcu;
    // NOP
label_29b6c0:
    // 0x29b6c0: 0x34bcf  .word       0x00034BCF                   # sync # 00034800 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b6c0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_29b6c4:
    // 0x29b6c4: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29b6c4u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29b6c8:
    // 0x29b6c8: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b6c8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29b6cc:
    // 0x29b6cc: 0x0  nop
    ctx->pc = 0x29b6ccu;
    // NOP
label_29b6d0:
    // 0x29b6d0: 0x34bd3  .word       0x00034BD3                   # mtlo        $zero # 00034BC0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b6d0u;
    ctx->lo = GPR_U64(ctx, 0);
label_29b6d4:
    // 0x29b6d4: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29b6d4u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29b6d8:
    // 0x29b6d8: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b6d8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29b6dc:
    // 0x29b6dc: 0x0  nop
    ctx->pc = 0x29b6dcu;
    // NOP
label_29b6e0:
    // 0x29b6e0: 0x34bd7  .word       0x00034BD7                   # dsrav       $t1, $v1, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b6e0u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 3) >> (GPR_U32(ctx, 0) & 0x3F));
label_29b6e4:
    // 0x29b6e4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b6e4u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29B6E4 raw=0x00000001");
 /* MITIGATED */
label_29b6e8:
    // 0x29b6e8: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x29b6e8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29b6ec:
    // 0x29b6ec: 0x0  nop
    ctx->pc = 0x29b6ecu;
    // NOP
label_29b6f0:
    // 0x29b6f0: 0x34bd8  .word       0x00034BD8                   # mult        $t1, $zero, $v1 # 000003C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x29b6f0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
label_29b6f4:
    // 0x29b6f4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b6f4u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29B6F4 raw=0x00000001");
 /* MITIGATED */
label_29b6f8:
    // 0x29b6f8: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x29b6f8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29b6fc:
    // 0x29b6fc: 0x0  nop
    ctx->pc = 0x29b6fcu;
    // NOP
label_29b700:
    // 0x29b700: 0x34bd9  .word       0x00034BD9                   # multu       $zero, $v1 # 00004BC0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b700u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
label_29b704:
    // 0x29b704: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29b704u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29b708:
    // 0x29b708: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b708u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29b70c:
    // 0x29b70c: 0x0  nop
    ctx->pc = 0x29b70cu;
    // NOP
label_29b710:
    // 0x29b710: 0x34bdd  .word       0x00034BDD                   # dmultu      $zero, $v1 # 00004BC0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b710u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x29B710 raw=0x00034BDD");
 /* MITIGATED */
label_29b714:
    // 0x29b714: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29b714u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29b718:
    // 0x29b718: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b718u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29b71c:
    // 0x29b71c: 0x0  nop
    ctx->pc = 0x29b71cu;
    // NOP
label_29b720:
    // 0x29b720: 0x34be1  .word       0x00034BE1                   # addu        $t1, $zero, $v1 # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b720u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
label_29b724:
    // 0x29b724: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b724u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29B724 raw=0x00000001");
 /* MITIGATED */
label_29b728:
    // 0x29b728: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x29b728u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29b72c:
    // 0x29b72c: 0x0  nop
    ctx->pc = 0x29b72cu;
    // NOP
label_29b730:
    // 0x29b730: 0x34be2  .word       0x00034BE2                   # neg         $t1, $v1 # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b730u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 3), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 9, (int32_t)tmp); }
label_29b734:
    // 0x29b734: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b734u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29B734 raw=0x00000001");
 /* MITIGATED */
label_29b738:
    // 0x29b738: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x29b738u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29b73c:
    // 0x29b73c: 0x0  nop
    ctx->pc = 0x29b73cu;
    // NOP
label_29b740:
    // 0x29b740: 0x34be3  .word       0x00034BE3                   # negu        $t1, $v1 # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b740u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
label_29b744:
    // 0x29b744: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29b744u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29b748:
    // 0x29b748: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b748u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29b74c:
    // 0x29b74c: 0x0  nop
    ctx->pc = 0x29b74cu;
    // NOP
label_29b750:
    // 0x29b750: 0x34be7  .word       0x00034BE7                   # nor         $t1, $zero, $v1 # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b750u;
    SET_GPR_U64(ctx, 9, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
label_29b754:
    // 0x29b754: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29b754u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29b758:
    // 0x29b758: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b758u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29b75c:
    // 0x29b75c: 0x0  nop
    ctx->pc = 0x29b75cu;
    // NOP
label_29b760:
    // 0x29b760: 0x34beb  .word       0x00034BEB                   # sltu        $t1, $zero, $v1 # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b760u;
    SET_GPR_U64(ctx, 9, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_29b764:
    // 0x29b764: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b764u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29B764 raw=0x00000001");
 /* MITIGATED */
label_29b768:
    // 0x29b768: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x29b768u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29b76c:
    // 0x29b76c: 0x0  nop
    ctx->pc = 0x29b76cu;
    // NOP
label_29b770:
    // 0x29b770: 0x34bec  .word       0x00034BEC                   # dadd        $t1, $zero, $v1 # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b770u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 3); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 9, r); }
label_29b774:
    // 0x29b774: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b774u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29B774 raw=0x00000001");
 /* MITIGATED */
label_29b778:
    // 0x29b778: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x29b778u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29b77c:
    // 0x29b77c: 0x0  nop
    ctx->pc = 0x29b77cu;
    // NOP
label_29b780:
    // 0x29b780: 0x34bed  .word       0x00034BED                   # daddu       $t1, $zero, $v1 # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b780u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 3));
label_29b784:
    // 0x29b784: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29b784u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29b788:
    // 0x29b788: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b788u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29b78c:
    // 0x29b78c: 0x0  nop
    ctx->pc = 0x29b78cu;
    // NOP
label_29b790:
    // 0x29b790: 0x34bf1  tgeu        $zero, $v1, 303
    ctx->pc = 0x29b790u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_29b794:
    // 0x29b794: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29b794u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29b798:
    // 0x29b798: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b798u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29b79c:
    // 0x29b79c: 0x0  nop
    ctx->pc = 0x29b79cu;
    // NOP
label_29b7a0:
    // 0x29b7a0: 0x34bf5  .word       0x00034BF5                   # INVALID     $zero, $v1, 0x4BF5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b7a0u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x29B7A0 raw=0x00034BF5");
 /* MITIGATED */
label_29b7a4:
    // 0x29b7a4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b7a4u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29B7A4 raw=0x00000001");
 /* MITIGATED */
label_29b7a8:
    // 0x29b7a8: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x29b7a8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29b7ac:
    // 0x29b7ac: 0x0  nop
    ctx->pc = 0x29b7acu;
    // NOP
label_29b7b0:
    // 0x29b7b0: 0x34bf6  tne         $zero, $v1, 303
    ctx->pc = 0x29b7b0u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_29b7b4:
    // 0x29b7b4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b7b4u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29B7B4 raw=0x00000001");
 /* MITIGATED */
label_29b7b8:
    // 0x29b7b8: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x29b7b8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29b7bc:
    // 0x29b7bc: 0x0  nop
    ctx->pc = 0x29b7bcu;
    // NOP
label_29b7c0:
    // 0x29b7c0: 0x34bf7  .word       0x00034BF7                   # INVALID     $zero, $v1, 0x4BF7 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b7c0u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x29B7C0 raw=0x00034BF7");
 /* MITIGATED */
label_29b7c4:
    // 0x29b7c4: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29b7c4u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29b7c8:
    // 0x29b7c8: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b7c8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29b7cc:
    // 0x29b7cc: 0x0  nop
    ctx->pc = 0x29b7ccu;
    // NOP
label_29b7d0:
    // 0x29b7d0: 0x34bfb  dsra        $t1, $v1, 15
    ctx->pc = 0x29b7d0u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 3) >> 15);
label_29b7d4:
    // 0x29b7d4: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29b7d4u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29b7d8:
    // 0x29b7d8: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b7d8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29b7dc:
    // 0x29b7dc: 0x0  nop
    ctx->pc = 0x29b7dcu;
    // NOP
label_29b7e0:
    // 0x29b7e0: 0x34bff  dsra32      $t1, $v1, 15
    ctx->pc = 0x29b7e0u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 3) >> (32 + 15));
label_29b7e4:
    // 0x29b7e4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b7e4u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29B7E4 raw=0x00000001");
 /* MITIGATED */
label_29b7e8:
    // 0x29b7e8: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x29b7e8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29b7ec:
    // 0x29b7ec: 0x0  nop
    ctx->pc = 0x29b7ecu;
    // NOP
label_29b7f0:
    // 0x29b7f0: 0x34c00  sll         $t1, $v1, 16
    ctx->pc = 0x29b7f0u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
label_29b7f4:
    // 0x29b7f4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b7f4u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29B7F4 raw=0x00000001");
 /* MITIGATED */
label_29b7f8:
    // 0x29b7f8: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x29b7f8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29b7fc:
    // 0x29b7fc: 0x0  nop
    ctx->pc = 0x29b7fcu;
    // NOP
label_29b800:
    // 0x29b800: 0x34c01  .word       0x00034C01                   # INVALID     $zero, $v1, 0x4C01 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b800u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29B800 raw=0x00034C01");
 /* MITIGATED */
label_29b804:
    // 0x29b804: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29b804u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29b808:
    // 0x29b808: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b808u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29b80c:
    // 0x29b80c: 0x0  nop
    ctx->pc = 0x29b80cu;
    // NOP
label_29b810:
    // 0x29b810: 0x34c05  .word       0x00034C05                   # INVALID     $zero, $v1, 0x4C05 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b810u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x29B810 raw=0x00034C05");
 /* MITIGATED */
label_29b814:
    // 0x29b814: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29b814u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29b818:
    // 0x29b818: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b818u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29b81c:
    // 0x29b81c: 0x0  nop
    ctx->pc = 0x29b81cu;
    // NOP
label_29b820:
    // 0x29b820: 0x34c09  .word       0x00034C09                   # jalr        $t1, $zero # 00030400 <InstrIdType: CPU_SPECIAL>
label_29b824:
    if (ctx->pc == 0x29B824u) {
        ctx->pc = 0x29B824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B820u;
        // 0x29b824: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
//         throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29B824 raw=0x00000001");
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x29B828u;
        goto label_29b828;
    }
    ctx->pc = 0x29B820u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 9, 0x29B828u);
        ctx->pc = 0x29B824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B820u;
        // 0x29b824: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
//         throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29B824 raw=0x00000001");
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29B820u, 0x29B828u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29B828u;
label_29b828:
    // 0x29b828: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x29b828u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29b82c:
    // 0x29b82c: 0x0  nop
    ctx->pc = 0x29b82cu;
    // NOP
label_29b830:
    // 0x29b830: 0x34c0a  .word       0x00034C0A                   # movz        $t1, $zero, $v1 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b830u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 0));
label_29b834:
    // 0x29b834: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b834u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29B834 raw=0x00000001");
 /* MITIGATED */
label_29b838:
    // 0x29b838: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x29b838u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29b83c:
    // 0x29b83c: 0x0  nop
    ctx->pc = 0x29b83cu;
    // NOP
label_29b840:
    // 0x29b840: 0x34c0b  .word       0x00034C0B                   # movn        $t1, $zero, $v1 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b840u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 0));
label_29b844:
    // 0x29b844: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29b844u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29b848:
    // 0x29b848: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b848u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29b84c:
    // 0x29b84c: 0x0  nop
    ctx->pc = 0x29b84cu;
    // NOP
label_29b850:
    // 0x29b850: 0x34c0f  .word       0x00034C0F                   # sync.p # 00034800 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b850u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_29b854:
    // 0x29b854: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29b854u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29b858:
    // 0x29b858: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b858u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29b85c:
    // 0x29b85c: 0x0  nop
    ctx->pc = 0x29b85cu;
    // NOP
label_29b860:
    // 0x29b860: 0x34c13  .word       0x00034C13                   # mtlo        $zero # 00034C00 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b860u;
    ctx->lo = GPR_U64(ctx, 0);
label_29b864:
    // 0x29b864: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b864u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29B864 raw=0x00000001");
 /* MITIGATED */
label_29b868:
    // 0x29b868: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x29b868u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29b86c:
    // 0x29b86c: 0x0  nop
    ctx->pc = 0x29b86cu;
    // NOP
label_29b870:
    // 0x29b870: 0x34c14  .word       0x00034C14                   # dsllv       $t1, $v1, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b870u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) << (GPR_U32(ctx, 0) & 0x3F));
label_29b874:
    // 0x29b874: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b874u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29B874 raw=0x00000001");
 /* MITIGATED */
label_29b878:
    // 0x29b878: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x29b878u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29b87c:
    // 0x29b87c: 0x0  nop
    ctx->pc = 0x29b87cu;
    // NOP
label_29b880:
    // 0x29b880: 0x34c15  .word       0x00034C15                   # INVALID     $zero, $v1, 0x4C15 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b880u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x29B880 raw=0x00034C15");
 /* MITIGATED */
label_29b884:
    // 0x29b884: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29b884u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29b888:
    // 0x29b888: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b888u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29b88c:
    // 0x29b88c: 0x0  nop
    ctx->pc = 0x29b88cu;
    // NOP
label_29b890:
    // 0x29b890: 0x34c19  .word       0x00034C19                   # multu       $zero, $v1 # 00004C00 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b890u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
label_29b894:
    // 0x29b894: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29b894u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29b898:
    // 0x29b898: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b898u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29b89c:
    // 0x29b89c: 0x0  nop
    ctx->pc = 0x29b89cu;
    // NOP
label_29b8a0:
    // 0x29b8a0: 0x34c1d  .word       0x00034C1D                   # dmultu      $zero, $v1 # 00004C00 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b8a0u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x29B8A0 raw=0x00034C1D");
 /* MITIGATED */
label_29b8a4:
    // 0x29b8a4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b8a4u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29B8A4 raw=0x00000001");
 /* MITIGATED */
label_29b8a8:
    // 0x29b8a8: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x29b8a8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29b8ac:
    // 0x29b8ac: 0x0  nop
    ctx->pc = 0x29b8acu;
    // NOP
label_29b8b0:
    // 0x29b8b0: 0x34c1e  .word       0x00034C1E                   # ddiv        $t1, $zero, $v1 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b8b0u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x29B8B0 raw=0x00034C1E");
 /* MITIGATED */
label_29b8b4:
    // 0x29b8b4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b8b4u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29B8B4 raw=0x00000001");
 /* MITIGATED */
label_29b8b8:
    // 0x29b8b8: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x29b8b8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29b8bc:
    // 0x29b8bc: 0x0  nop
    ctx->pc = 0x29b8bcu;
    // NOP
label_29b8c0:
    // 0x29b8c0: 0x34c1f  .word       0x00034C1F                   # ddivu       $t1, $zero, $v1 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b8c0u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x29B8C0 raw=0x00034C1F");
 /* MITIGATED */
label_29b8c4:
    // 0x29b8c4: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29b8c4u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29b8c8:
    // 0x29b8c8: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b8c8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29b8cc:
    // 0x29b8cc: 0x0  nop
    ctx->pc = 0x29b8ccu;
    // NOP
label_29b8d0:
    // 0x29b8d0: 0x34c23  .word       0x00034C23                   # negu        $t1, $v1 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b8d0u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
label_29b8d4:
    // 0x29b8d4: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29b8d4u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29b8d8:
    // 0x29b8d8: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b8d8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29b8dc:
    // 0x29b8dc: 0x0  nop
    ctx->pc = 0x29b8dcu;
    // NOP
label_29b8e0:
    // 0x29b8e0: 0x34c27  .word       0x00034C27                   # nor         $t1, $zero, $v1 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b8e0u;
    SET_GPR_U64(ctx, 9, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
label_29b8e4:
    // 0x29b8e4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b8e4u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29B8E4 raw=0x00000001");
 /* MITIGATED */
label_29b8e8:
    // 0x29b8e8: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x29b8e8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29b8ec:
    // 0x29b8ec: 0x0  nop
    ctx->pc = 0x29b8ecu;
    // NOP
label_29b8f0:
    // 0x29b8f0: 0x34c28  .word       0x00034C28                   # mfsa        $t1 # 00030400 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x29b8f0u;
    SET_GPR_U32(ctx, 9, ctx->sa);
label_29b8f4:
    // 0x29b8f4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b8f4u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29B8F4 raw=0x00000001");
 /* MITIGATED */
label_29b8f8:
    // 0x29b8f8: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x29b8f8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29b8fc:
    // 0x29b8fc: 0x0  nop
    ctx->pc = 0x29b8fcu;
    // NOP
label_29b900:
    // 0x29b900: 0x34c29  .word       0x00034C29                   # mtsa        $zero # 00034C00 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x29b900u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_29b904:
    // 0x29b904: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29b904u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29b908:
    // 0x29b908: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b908u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29b90c:
    // 0x29b90c: 0x0  nop
    ctx->pc = 0x29b90cu;
    // NOP
label_29b910:
    // 0x29b910: 0x34c2d  .word       0x00034C2D                   # daddu       $t1, $zero, $v1 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b910u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 3));
label_29b914:
    // 0x29b914: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29b914u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29b918:
    // 0x29b918: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b918u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29b91c:
    // 0x29b91c: 0x0  nop
    ctx->pc = 0x29b91cu;
    // NOP
label_29b920:
    // 0x29b920: 0x34c31  tgeu        $zero, $v1, 304
    ctx->pc = 0x29b920u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_29b924:
    // 0x29b924: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b924u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29B924 raw=0x00000001");
 /* MITIGATED */
label_29b928:
    // 0x29b928: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x29b928u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29b92c:
    // 0x29b92c: 0x0  nop
    ctx->pc = 0x29b92cu;
    // NOP
label_29b930:
    // 0x29b930: 0x34c32  tlt         $zero, $v1, 304
    ctx->pc = 0x29b930u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_29b934:
    // 0x29b934: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b934u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29B934 raw=0x00000001");
 /* MITIGATED */
label_29b938:
    // 0x29b938: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x29b938u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29b93c:
    // 0x29b93c: 0x0  nop
    ctx->pc = 0x29b93cu;
    // NOP
label_29b940:
    // 0x29b940: 0x34c33  tltu        $zero, $v1, 304
    ctx->pc = 0x29b940u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_29b944:
    // 0x29b944: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29b944u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29b948:
    // 0x29b948: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b948u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29b94c:
    // 0x29b94c: 0x0  nop
    ctx->pc = 0x29b94cu;
    // NOP
label_29b950:
    // 0x29b950: 0x34c37  .word       0x00034C37                   # INVALID     $zero, $v1, 0x4C37 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b950u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x29B950 raw=0x00034C37");
 /* MITIGATED */
label_29b954:
    // 0x29b954: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29b954u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29b958:
    // 0x29b958: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b958u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29b95c:
    // 0x29b95c: 0x0  nop
    ctx->pc = 0x29b95cu;
    // NOP
label_29b960:
    // 0x29b960: 0x34c3b  dsra        $t1, $v1, 16
    ctx->pc = 0x29b960u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 3) >> 16);
label_29b964:
    // 0x29b964: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b964u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29B964 raw=0x00000001");
 /* MITIGATED */
label_29b968:
    // 0x29b968: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x29b968u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29b96c:
    // 0x29b96c: 0x0  nop
    ctx->pc = 0x29b96cu;
    // NOP
label_29b970:
    // 0x29b970: 0x34c3c  dsll32      $t1, $v1, 16
    ctx->pc = 0x29b970u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) << (32 + 16));
label_29b974:
    // 0x29b974: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b974u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29B974 raw=0x00000001");
 /* MITIGATED */
label_29b978:
    // 0x29b978: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x29b978u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29b97c:
    // 0x29b97c: 0x0  nop
    ctx->pc = 0x29b97cu;
    // NOP
label_29b980:
    // 0x29b980: 0x34c3d  .word       0x00034C3D                   # INVALID     $zero, $v1, 0x4C3D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b980u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x29B980 raw=0x00034C3D");
 /* MITIGATED */
label_29b984:
    // 0x29b984: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29b984u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29b988:
    // 0x29b988: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b988u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29b98c:
    // 0x29b98c: 0x0  nop
    ctx->pc = 0x29b98cu;
    // NOP
label_29b990:
    // 0x29b990: 0x34c41  .word       0x00034C41                   # INVALID     $zero, $v1, 0x4C41 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b990u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29B990 raw=0x00034C41");
 /* MITIGATED */
label_29b994:
    // 0x29b994: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29b994u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29b998:
    // 0x29b998: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b998u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29b99c:
    // 0x29b99c: 0x0  nop
    ctx->pc = 0x29b99cu;
    // NOP
label_29b9a0:
    // 0x29b9a0: 0x34c45  .word       0x00034C45                   # INVALID     $zero, $v1, 0x4C45 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b9a0u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x29B9A0 raw=0x00034C45");
 /* MITIGATED */
label_29b9a4:
    // 0x29b9a4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b9a4u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29B9A4 raw=0x00000001");
 /* MITIGATED */
label_29b9a8:
    // 0x29b9a8: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x29b9a8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29b9ac:
    // 0x29b9ac: 0x0  nop
    ctx->pc = 0x29b9acu;
    // NOP
label_29b9b0:
    // 0x29b9b0: 0x34c46  .word       0x00034C46                   # srlv        $t1, $v1, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b9b0u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 3), GPR_U32(ctx, 0) & 0x1F));
label_29b9b4:
    // 0x29b9b4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b9b4u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29B9B4 raw=0x00000001");
 /* MITIGATED */
label_29b9b8:
    // 0x29b9b8: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x29b9b8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29b9bc:
    // 0x29b9bc: 0x0  nop
    ctx->pc = 0x29b9bcu;
    // NOP
label_29b9c0:
    // 0x29b9c0: 0x34c47  .word       0x00034C47                   # srav        $t1, $v1, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b9c0u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 3), GPR_U32(ctx, 0) & 0x1F));
label_29b9c4:
    // 0x29b9c4: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29b9c4u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29b9c8:
    // 0x29b9c8: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b9c8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29b9cc:
    // 0x29b9cc: 0x0  nop
    ctx->pc = 0x29b9ccu;
    // NOP
label_29b9d0:
    // 0x29b9d0: 0x34c4b  .word       0x00034C4B                   # movn        $t1, $zero, $v1 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b9d0u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 0));
label_29b9d4:
    // 0x29b9d4: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29b9d4u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29b9d8:
    // 0x29b9d8: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b9d8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29b9dc:
    // 0x29b9dc: 0x0  nop
    ctx->pc = 0x29b9dcu;
    // NOP
label_29b9e0:
    // 0x29b9e0: 0x34c4f  .word       0x00034C4F                   # sync.p # 00034800 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b9e0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_29b9e4:
    // 0x29b9e4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b9e4u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29B9E4 raw=0x00000001");
 /* MITIGATED */
label_29b9e8:
    // 0x29b9e8: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x29b9e8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29b9ec:
    // 0x29b9ec: 0x0  nop
    ctx->pc = 0x29b9ecu;
    // NOP
label_29b9f0:
    // 0x29b9f0: 0x34c50  .word       0x00034C50                   # mfhi        $t1 # 00030440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b9f0u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_29b9f4:
    // 0x29b9f4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b9f4u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29B9F4 raw=0x00000001");
 /* MITIGATED */
label_29b9f8:
    // 0x29b9f8: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x29b9f8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29b9fc:
    // 0x29b9fc: 0x0  nop
    ctx->pc = 0x29b9fcu;
    // NOP
label_29ba00:
    // 0x29ba00: 0x34c51  .word       0x00034C51                   # mthi        $zero # 00034C40 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29ba00u;
    ctx->hi = GPR_U64(ctx, 0);
label_29ba04:
    // 0x29ba04: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29ba04u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29ba08:
    // 0x29ba08: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29ba08u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29ba0c:
    // 0x29ba0c: 0x0  nop
    ctx->pc = 0x29ba0cu;
    // NOP
label_29ba10:
    // 0x29ba10: 0x34c55  .word       0x00034C55                   # INVALID     $zero, $v1, 0x4C55 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29ba10u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x29BA10 raw=0x00034C55");
 /* MITIGATED */
label_29ba14:
    // 0x29ba14: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29ba14u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29ba18:
    // 0x29ba18: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29ba18u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29ba1c:
    // 0x29ba1c: 0x0  nop
    ctx->pc = 0x29ba1cu;
    // NOP
label_29ba20:
    // 0x29ba20: 0x34c59  .word       0x00034C59                   # multu       $zero, $v1 # 00004C40 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29ba20u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
label_29ba24:
    // 0x29ba24: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29ba24u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29BA24 raw=0x00000001");
 /* MITIGATED */
label_29ba28:
    // 0x29ba28: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x29ba28u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29ba2c:
    // 0x29ba2c: 0x0  nop
    ctx->pc = 0x29ba2cu;
    // NOP
label_29ba30:
    // 0x29ba30: 0x34c5a  .word       0x00034C5A                   # div         $t1, $zero, $v1 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29ba30u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_29ba34:
    // 0x29ba34: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29ba34u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29BA34 raw=0x00000001");
 /* MITIGATED */
label_29ba38:
    // 0x29ba38: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x29ba38u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29ba3c:
    // 0x29ba3c: 0x0  nop
    ctx->pc = 0x29ba3cu;
    // NOP
label_29ba40:
    // 0x29ba40: 0x34c5b  .word       0x00034C5B                   # divu        $t1, $zero, $v1 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29ba40u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_29ba44:
    // 0x29ba44: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29ba44u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29ba48:
    // 0x29ba48: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29ba48u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29ba4c:
    // 0x29ba4c: 0x0  nop
    ctx->pc = 0x29ba4cu;
    // NOP
label_29ba50:
    // 0x29ba50: 0x34c5f  .word       0x00034C5F                   # ddivu       $t1, $zero, $v1 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29ba50u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x29BA50 raw=0x00034C5F");
 /* MITIGATED */
label_29ba54:
    // 0x29ba54: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29ba54u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29ba58:
    // 0x29ba58: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29ba58u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29ba5c:
    // 0x29ba5c: 0x0  nop
    ctx->pc = 0x29ba5cu;
    // NOP
label_29ba60:
    // 0x29ba60: 0x34c63  .word       0x00034C63                   # negu        $t1, $v1 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29ba60u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
label_29ba64:
    // 0x29ba64: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29ba64u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29BA64 raw=0x00000001");
 /* MITIGATED */
label_29ba68:
    // 0x29ba68: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x29ba68u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29ba6c:
    // 0x29ba6c: 0x0  nop
    ctx->pc = 0x29ba6cu;
    // NOP
label_29ba70:
    // 0x29ba70: 0x34c64  .word       0x00034C64                   # and         $t1, $zero, $v1 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29ba70u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) & GPR_U64(ctx, 3));
label_29ba74:
    // 0x29ba74: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29ba74u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29BA74 raw=0x00000001");
 /* MITIGATED */
label_29ba78:
    // 0x29ba78: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x29ba78u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29ba7c:
    // 0x29ba7c: 0x0  nop
    ctx->pc = 0x29ba7cu;
    // NOP
label_29ba80:
    // 0x29ba80: 0x34c65  .word       0x00034C65                   # or          $t1, $zero, $v1 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29ba80u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) | GPR_U64(ctx, 3));
label_29ba84:
    // 0x29ba84: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29ba84u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29ba88:
    // 0x29ba88: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29ba88u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29ba8c:
    // 0x29ba8c: 0x0  nop
    ctx->pc = 0x29ba8cu;
    // NOP
label_29ba90:
    // 0x29ba90: 0x34c69  .word       0x00034C69                   # mtsa        $zero # 00034C40 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x29ba90u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_29ba94:
    // 0x29ba94: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29ba94u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29ba98:
    // 0x29ba98: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29ba98u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29ba9c:
    // 0x29ba9c: 0x0  nop
    ctx->pc = 0x29ba9cu;
    // NOP
label_29baa0:
    // 0x29baa0: 0x34c6d  .word       0x00034C6D                   # daddu       $t1, $zero, $v1 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29baa0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 3));
label_29baa4:
    // 0x29baa4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29baa4u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29BAA4 raw=0x00000001");
 /* MITIGATED */
label_29baa8:
    // 0x29baa8: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x29baa8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29baac:
    // 0x29baac: 0x0  nop
    ctx->pc = 0x29baacu;
    // NOP
label_29bab0:
    // 0x29bab0: 0x34c6e  .word       0x00034C6E                   # dsub        $t1, $zero, $v1 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29bab0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 3); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 9, r); }
label_29bab4:
    // 0x29bab4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29bab4u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29BAB4 raw=0x00000001");
 /* MITIGATED */
label_29bab8:
    // 0x29bab8: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x29bab8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29babc:
    // 0x29babc: 0x0  nop
    ctx->pc = 0x29babcu;
    // NOP
label_29bac0:
    // 0x29bac0: 0x34c6f  .word       0x00034C6F                   # dsubu       $t1, $zero, $v1 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29bac0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) - GPR_U64(ctx, 3));
label_29bac4:
    // 0x29bac4: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29bac4u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29bac8:
    // 0x29bac8: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29bac8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29bacc:
    // 0x29bacc: 0x0  nop
    ctx->pc = 0x29baccu;
    // NOP
label_29bad0:
    // 0x29bad0: 0x34c73  tltu        $zero, $v1, 305
    ctx->pc = 0x29bad0u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_29bad4:
    // 0x29bad4: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29bad4u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29bad8:
    // 0x29bad8: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29bad8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29badc:
    // 0x29badc: 0x0  nop
    ctx->pc = 0x29badcu;
    // NOP
label_29bae0:
    // 0x29bae0: 0x34c77  .word       0x00034C77                   # INVALID     $zero, $v1, 0x4C77 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29bae0u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x29BAE0 raw=0x00034C77");
 /* MITIGATED */
label_29bae4:
    // 0x29bae4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29bae4u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29BAE4 raw=0x00000001");
 /* MITIGATED */
label_29bae8:
    // 0x29bae8: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x29bae8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29baec:
    // 0x29baec: 0x0  nop
    ctx->pc = 0x29baecu;
    // NOP
label_29baf0:
    // 0x29baf0: 0x34c78  dsll        $t1, $v1, 17
    ctx->pc = 0x29baf0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) << 17);
label_29baf4:
    // 0x29baf4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29baf4u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29BAF4 raw=0x00000001");
 /* MITIGATED */
label_29baf8:
    // 0x29baf8: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x29baf8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29bafc:
    // 0x29bafc: 0x0  nop
    ctx->pc = 0x29bafcu;
    // NOP
label_29bb00:
    // 0x29bb00: 0x34c79  .word       0x00034C79                   # INVALID     $zero, $v1, 0x4C79 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29bb00u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x29BB00 raw=0x00034C79");
 /* MITIGATED */
label_29bb04:
    // 0x29bb04: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29bb04u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29bb08:
    // 0x29bb08: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29bb08u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29bb0c:
    // 0x29bb0c: 0x0  nop
    ctx->pc = 0x29bb0cu;
    // NOP
label_29bb10:
    // 0x29bb10: 0x34c7d  .word       0x00034C7D                   # INVALID     $zero, $v1, 0x4C7D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29bb10u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x29BB10 raw=0x00034C7D");
 /* MITIGATED */
label_29bb14:
    // 0x29bb14: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29bb14u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29bb18:
    // 0x29bb18: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29bb18u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29bb1c:
    // 0x29bb1c: 0x0  nop
    ctx->pc = 0x29bb1cu;
    // NOP
label_29bb20:
    // 0x29bb20: 0x34c81  .word       0x00034C81                   # INVALID     $zero, $v1, 0x4C81 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29bb20u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29BB20 raw=0x00034C81");
 /* MITIGATED */
label_29bb24:
    // 0x29bb24: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29bb24u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29BB24 raw=0x00000001");
 /* MITIGATED */
label_29bb28:
    // 0x29bb28: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x29bb28u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29bb2c:
    // 0x29bb2c: 0x0  nop
    ctx->pc = 0x29bb2cu;
    // NOP
label_29bb30:
    // 0x29bb30: 0x34c82  srl         $t1, $v1, 18
    ctx->pc = 0x29bb30u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 3), 18));
label_29bb34:
    // 0x29bb34: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29bb34u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29BB34 raw=0x00000001");
 /* MITIGATED */
label_29bb38:
    // 0x29bb38: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x29bb38u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29bb3c:
    // 0x29bb3c: 0x0  nop
    ctx->pc = 0x29bb3cu;
    // NOP
label_29bb40:
    // 0x29bb40: 0x34c83  sra         $t1, $v1, 18
    ctx->pc = 0x29bb40u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 3), 18));
label_29bb44:
    // 0x29bb44: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29bb44u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29bb48:
    // 0x29bb48: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29bb48u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29bb4c:
    // 0x29bb4c: 0x0  nop
    ctx->pc = 0x29bb4cu;
    // NOP
label_29bb50:
    // 0x29bb50: 0x34c87  .word       0x00034C87                   # srav        $t1, $v1, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29bb50u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 3), GPR_U32(ctx, 0) & 0x1F));
label_29bb54:
    // 0x29bb54: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29bb54u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29bb58:
    // 0x29bb58: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29bb58u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29bb5c:
    // 0x29bb5c: 0x0  nop
    ctx->pc = 0x29bb5cu;
    // NOP
label_29bb60:
    // 0x29bb60: 0x34c8b  .word       0x00034C8B                   # movn        $t1, $zero, $v1 # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29bb60u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 0));
label_29bb64:
    // 0x29bb64: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29bb64u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29BB64 raw=0x00000001");
 /* MITIGATED */
label_29bb68:
    // 0x29bb68: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x29bb68u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29bb6c:
    // 0x29bb6c: 0x0  nop
    ctx->pc = 0x29bb6cu;
    // NOP
label_29bb70:
    // 0x29bb70: 0x34c8c  .word       0x00034C8C                   # syscall     306 # 00030000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29bb70u;
    ctx->pc = 0x29BB74u;
runtime->handleSyscall(rdram, ctx, 0xD32u);
label_29bb74:
    // 0x29bb74: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29bb74u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29BB74 raw=0x00000001");
 /* MITIGATED */
label_29bb78:
    // 0x29bb78: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x29bb78u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29bb7c:
    // 0x29bb7c: 0x0  nop
    ctx->pc = 0x29bb7cu;
    // NOP
label_29bb80:
    // 0x29bb80: 0x34c8d  break       3, 306
    ctx->pc = 0x29bb80u;
    runtime->handleBreak(rdram, ctx);
label_29bb84:
    // 0x29bb84: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29bb84u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29bb88:
    // 0x29bb88: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29bb88u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29bb8c:
    // 0x29bb8c: 0x0  nop
    ctx->pc = 0x29bb8cu;
    // NOP
label_29bb90:
    // 0x29bb90: 0x34c91  .word       0x00034C91                   # mthi        $zero # 00034C80 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29bb90u;
    ctx->hi = GPR_U64(ctx, 0);
label_29bb94:
    // 0x29bb94: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29bb94u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29bb98:
    // 0x29bb98: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29bb98u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29bb9c:
    // 0x29bb9c: 0x0  nop
    ctx->pc = 0x29bb9cu;
    // NOP
label_29bba0:
    // 0x29bba0: 0x34c95  .word       0x00034C95                   # INVALID     $zero, $v1, 0x4C95 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29bba0u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x29BBA0 raw=0x00034C95");
 /* MITIGATED */
label_29bba4:
    // 0x29bba4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29bba4u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29BBA4 raw=0x00000001");
 /* MITIGATED */
label_29bba8:
    // 0x29bba8: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x29bba8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29bbac:
    // 0x29bbac: 0x0  nop
    ctx->pc = 0x29bbacu;
    // NOP
label_29bbb0:
    // 0x29bbb0: 0x34c96  .word       0x00034C96                   # dsrlv       $t1, $v1, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29bbb0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) >> (GPR_U32(ctx, 0) & 0x3F));
label_29bbb4:
    // 0x29bbb4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29bbb4u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29BBB4 raw=0x00000001");
 /* MITIGATED */
label_29bbb8:
    // 0x29bbb8: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x29bbb8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29bbbc:
    // 0x29bbbc: 0x0  nop
    ctx->pc = 0x29bbbcu;
    // NOP
    ctx->pc = 0x29bbc0u;
    return;
}
