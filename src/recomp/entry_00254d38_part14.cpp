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


void entry_00254d38_part14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x25b2c8u: goto label_25b2c8;
        case 0x25b2ccu: goto label_25b2cc;
        case 0x25b2d0u: goto label_25b2d0;
        case 0x25b2d4u: goto label_25b2d4;
        case 0x25b2d8u: goto label_25b2d8;
        case 0x25b2dcu: goto label_25b2dc;
        case 0x25b2e0u: goto label_25b2e0;
        case 0x25b2e4u: goto label_25b2e4;
        case 0x25b2e8u: goto label_25b2e8;
        case 0x25b2ecu: goto label_25b2ec;
        case 0x25b2f0u: goto label_25b2f0;
        case 0x25b2f4u: goto label_25b2f4;
        case 0x25b2f8u: goto label_25b2f8;
        case 0x25b2fcu: goto label_25b2fc;
        case 0x25b300u: goto label_25b300;
        case 0x25b304u: goto label_25b304;
        case 0x25b308u: goto label_25b308;
        case 0x25b30cu: goto label_25b30c;
        case 0x25b310u: goto label_25b310;
        case 0x25b314u: goto label_25b314;
        case 0x25b318u: goto label_25b318;
        case 0x25b31cu: goto label_25b31c;
        case 0x25b320u: goto label_25b320;
        case 0x25b324u: goto label_25b324;
        case 0x25b328u: goto label_25b328;
        case 0x25b32cu: goto label_25b32c;
        case 0x25b330u: goto label_25b330;
        case 0x25b334u: goto label_25b334;
        case 0x25b338u: goto label_25b338;
        case 0x25b33cu: goto label_25b33c;
        case 0x25b340u: goto label_25b340;
        case 0x25b344u: goto label_25b344;
        case 0x25b348u: goto label_25b348;
        case 0x25b34cu: goto label_25b34c;
        case 0x25b350u: goto label_25b350;
        case 0x25b354u: goto label_25b354;
        case 0x25b358u: goto label_25b358;
        case 0x25b35cu: goto label_25b35c;
        case 0x25b360u: goto label_25b360;
        case 0x25b364u: goto label_25b364;
        case 0x25b368u: goto label_25b368;
        case 0x25b36cu: goto label_25b36c;
        case 0x25b370u: goto label_25b370;
        case 0x25b374u: goto label_25b374;
        case 0x25b378u: goto label_25b378;
        case 0x25b37cu: goto label_25b37c;
        case 0x25b380u: goto label_25b380;
        case 0x25b384u: goto label_25b384;
        case 0x25b388u: goto label_25b388;
        case 0x25b38cu: goto label_25b38c;
        case 0x25b390u: goto label_25b390;
        case 0x25b394u: goto label_25b394;
        case 0x25b398u: goto label_25b398;
        case 0x25b39cu: goto label_25b39c;
        case 0x25b3a0u: goto label_25b3a0;
        case 0x25b3a4u: goto label_25b3a4;
        case 0x25b3a8u: goto label_25b3a8;
        case 0x25b3acu: goto label_25b3ac;
        case 0x25b3b0u: goto label_25b3b0;
        case 0x25b3b4u: goto label_25b3b4;
        case 0x25b3b8u: goto label_25b3b8;
        case 0x25b3bcu: goto label_25b3bc;
        case 0x25b3c0u: goto label_25b3c0;
        case 0x25b3c4u: goto label_25b3c4;
        case 0x25b3c8u: goto label_25b3c8;
        case 0x25b3ccu: goto label_25b3cc;
        case 0x25b3d0u: goto label_25b3d0;
        case 0x25b3d4u: goto label_25b3d4;
        case 0x25b3d8u: goto label_25b3d8;
        case 0x25b3dcu: goto label_25b3dc;
        case 0x25b3e0u: goto label_25b3e0;
        case 0x25b3e4u: goto label_25b3e4;
        case 0x25b3e8u: goto label_25b3e8;
        case 0x25b3ecu: goto label_25b3ec;
        case 0x25b3f0u: goto label_25b3f0;
        case 0x25b3f4u: goto label_25b3f4;
        case 0x25b3f8u: goto label_25b3f8;
        case 0x25b3fcu: goto label_25b3fc;
        case 0x25b400u: goto label_25b400;
        case 0x25b404u: goto label_25b404;
        case 0x25b408u: goto label_25b408;
        case 0x25b40cu: goto label_25b40c;
        case 0x25b410u: goto label_25b410;
        case 0x25b414u: goto label_25b414;
        case 0x25b418u: goto label_25b418;
        case 0x25b41cu: goto label_25b41c;
        case 0x25b420u: goto label_25b420;
        case 0x25b424u: goto label_25b424;
        case 0x25b428u: goto label_25b428;
        case 0x25b42cu: goto label_25b42c;
        case 0x25b430u: goto label_25b430;
        case 0x25b434u: goto label_25b434;
        case 0x25b438u: goto label_25b438;
        case 0x25b43cu: goto label_25b43c;
        case 0x25b440u: goto label_25b440;
        case 0x25b444u: goto label_25b444;
        case 0x25b448u: goto label_25b448;
        case 0x25b44cu: goto label_25b44c;
        case 0x25b450u: goto label_25b450;
        case 0x25b454u: goto label_25b454;
        case 0x25b458u: goto label_25b458;
        case 0x25b45cu: goto label_25b45c;
        case 0x25b460u: goto label_25b460;
        case 0x25b464u: goto label_25b464;
        case 0x25b468u: goto label_25b468;
        case 0x25b46cu: goto label_25b46c;
        case 0x25b470u: goto label_25b470;
        case 0x25b474u: goto label_25b474;
        case 0x25b478u: goto label_25b478;
        case 0x25b47cu: goto label_25b47c;
        case 0x25b480u: goto label_25b480;
        case 0x25b484u: goto label_25b484;
        case 0x25b488u: goto label_25b488;
        case 0x25b48cu: goto label_25b48c;
        case 0x25b490u: goto label_25b490;
        case 0x25b494u: goto label_25b494;
        case 0x25b498u: goto label_25b498;
        case 0x25b49cu: goto label_25b49c;
        case 0x25b4a0u: goto label_25b4a0;
        case 0x25b4a4u: goto label_25b4a4;
        case 0x25b4a8u: goto label_25b4a8;
        case 0x25b4acu: goto label_25b4ac;
        case 0x25b4b0u: goto label_25b4b0;
        case 0x25b4b4u: goto label_25b4b4;
        case 0x25b4b8u: goto label_25b4b8;
        case 0x25b4bcu: goto label_25b4bc;
        case 0x25b4c0u: goto label_25b4c0;
        case 0x25b4c4u: goto label_25b4c4;
        case 0x25b4c8u: goto label_25b4c8;
        case 0x25b4ccu: goto label_25b4cc;
        case 0x25b4d0u: goto label_25b4d0;
        case 0x25b4d4u: goto label_25b4d4;
        case 0x25b4d8u: goto label_25b4d8;
        case 0x25b4dcu: goto label_25b4dc;
        case 0x25b4e0u: goto label_25b4e0;
        case 0x25b4e4u: goto label_25b4e4;
        case 0x25b4e8u: goto label_25b4e8;
        case 0x25b4ecu: goto label_25b4ec;
        case 0x25b4f0u: goto label_25b4f0;
        case 0x25b4f4u: goto label_25b4f4;
        case 0x25b4f8u: goto label_25b4f8;
        case 0x25b4fcu: goto label_25b4fc;
        case 0x25b500u: goto label_25b500;
        case 0x25b504u: goto label_25b504;
        case 0x25b508u: goto label_25b508;
        case 0x25b50cu: goto label_25b50c;
        case 0x25b510u: goto label_25b510;
        case 0x25b514u: goto label_25b514;
        case 0x25b518u: goto label_25b518;
        case 0x25b51cu: goto label_25b51c;
        case 0x25b520u: goto label_25b520;
        case 0x25b524u: goto label_25b524;
        case 0x25b528u: goto label_25b528;
        case 0x25b52cu: goto label_25b52c;
        case 0x25b530u: goto label_25b530;
        case 0x25b534u: goto label_25b534;
        case 0x25b538u: goto label_25b538;
        case 0x25b53cu: goto label_25b53c;
        case 0x25b540u: goto label_25b540;
        case 0x25b544u: goto label_25b544;
        case 0x25b548u: goto label_25b548;
        case 0x25b54cu: goto label_25b54c;
        case 0x25b550u: goto label_25b550;
        case 0x25b554u: goto label_25b554;
        case 0x25b558u: goto label_25b558;
        case 0x25b55cu: goto label_25b55c;
        case 0x25b560u: goto label_25b560;
        case 0x25b564u: goto label_25b564;
        case 0x25b568u: goto label_25b568;
        case 0x25b56cu: goto label_25b56c;
        case 0x25b570u: goto label_25b570;
        case 0x25b574u: goto label_25b574;
        case 0x25b578u: goto label_25b578;
        case 0x25b57cu: goto label_25b57c;
        case 0x25b580u: goto label_25b580;
        case 0x25b584u: goto label_25b584;
        case 0x25b588u: goto label_25b588;
        case 0x25b58cu: goto label_25b58c;
        case 0x25b590u: goto label_25b590;
        case 0x25b594u: goto label_25b594;
        case 0x25b598u: goto label_25b598;
        case 0x25b59cu: goto label_25b59c;
        case 0x25b5a0u: goto label_25b5a0;
        case 0x25b5a4u: goto label_25b5a4;
        case 0x25b5a8u: goto label_25b5a8;
        case 0x25b5acu: goto label_25b5ac;
        case 0x25b5b0u: goto label_25b5b0;
        case 0x25b5b4u: goto label_25b5b4;
        case 0x25b5b8u: goto label_25b5b8;
        case 0x25b5bcu: goto label_25b5bc;
        case 0x25b5c0u: goto label_25b5c0;
        case 0x25b5c4u: goto label_25b5c4;
        case 0x25b5c8u: goto label_25b5c8;
        case 0x25b5ccu: goto label_25b5cc;
        case 0x25b5d0u: goto label_25b5d0;
        case 0x25b5d4u: goto label_25b5d4;
        case 0x25b5d8u: goto label_25b5d8;
        case 0x25b5dcu: goto label_25b5dc;
        case 0x25b5e0u: goto label_25b5e0;
        case 0x25b5e4u: goto label_25b5e4;
        case 0x25b5e8u: goto label_25b5e8;
        case 0x25b5ecu: goto label_25b5ec;
        case 0x25b5f0u: goto label_25b5f0;
        case 0x25b5f4u: goto label_25b5f4;
        case 0x25b5f8u: goto label_25b5f8;
        case 0x25b5fcu: goto label_25b5fc;
        case 0x25b600u: goto label_25b600;
        case 0x25b604u: goto label_25b604;
        case 0x25b608u: goto label_25b608;
        case 0x25b60cu: goto label_25b60c;
        case 0x25b610u: goto label_25b610;
        case 0x25b614u: goto label_25b614;
        case 0x25b618u: goto label_25b618;
        case 0x25b61cu: goto label_25b61c;
        case 0x25b620u: goto label_25b620;
        case 0x25b624u: goto label_25b624;
        case 0x25b628u: goto label_25b628;
        case 0x25b62cu: goto label_25b62c;
        case 0x25b630u: goto label_25b630;
        case 0x25b634u: goto label_25b634;
        case 0x25b638u: goto label_25b638;
        case 0x25b63cu: goto label_25b63c;
        case 0x25b640u: goto label_25b640;
        case 0x25b644u: goto label_25b644;
        case 0x25b648u: goto label_25b648;
        case 0x25b64cu: goto label_25b64c;
        case 0x25b650u: goto label_25b650;
        case 0x25b654u: goto label_25b654;
        case 0x25b658u: goto label_25b658;
        case 0x25b65cu: goto label_25b65c;
        case 0x25b660u: goto label_25b660;
        case 0x25b664u: goto label_25b664;
        case 0x25b668u: goto label_25b668;
        case 0x25b66cu: goto label_25b66c;
        case 0x25b670u: goto label_25b670;
        case 0x25b674u: goto label_25b674;
        case 0x25b678u: goto label_25b678;
        case 0x25b67cu: goto label_25b67c;
        case 0x25b680u: goto label_25b680;
        case 0x25b684u: goto label_25b684;
        case 0x25b688u: goto label_25b688;
        case 0x25b68cu: goto label_25b68c;
        case 0x25b690u: goto label_25b690;
        case 0x25b694u: goto label_25b694;
        case 0x25b698u: goto label_25b698;
        case 0x25b69cu: goto label_25b69c;
        case 0x25b6a0u: goto label_25b6a0;
        case 0x25b6a4u: goto label_25b6a4;
        case 0x25b6a8u: goto label_25b6a8;
        case 0x25b6acu: goto label_25b6ac;
        case 0x25b6b0u: goto label_25b6b0;
        case 0x25b6b4u: goto label_25b6b4;
        case 0x25b6b8u: goto label_25b6b8;
        case 0x25b6bcu: goto label_25b6bc;
        case 0x25b6c0u: goto label_25b6c0;
        case 0x25b6c4u: goto label_25b6c4;
        case 0x25b6c8u: goto label_25b6c8;
        case 0x25b6ccu: goto label_25b6cc;
        case 0x25b6d0u: goto label_25b6d0;
        case 0x25b6d4u: goto label_25b6d4;
        case 0x25b6d8u: goto label_25b6d8;
        case 0x25b6dcu: goto label_25b6dc;
        case 0x25b6e0u: goto label_25b6e0;
        case 0x25b6e4u: goto label_25b6e4;
        case 0x25b6e8u: goto label_25b6e8;
        case 0x25b6ecu: goto label_25b6ec;
        case 0x25b6f0u: goto label_25b6f0;
        case 0x25b6f4u: goto label_25b6f4;
        case 0x25b6f8u: goto label_25b6f8;
        case 0x25b6fcu: goto label_25b6fc;
        case 0x25b700u: goto label_25b700;
        case 0x25b704u: goto label_25b704;
        case 0x25b708u: goto label_25b708;
        case 0x25b70cu: goto label_25b70c;
        case 0x25b710u: goto label_25b710;
        case 0x25b714u: goto label_25b714;
        case 0x25b718u: goto label_25b718;
        case 0x25b71cu: goto label_25b71c;
        case 0x25b720u: goto label_25b720;
        case 0x25b724u: goto label_25b724;
        case 0x25b728u: goto label_25b728;
        case 0x25b72cu: goto label_25b72c;
        case 0x25b730u: goto label_25b730;
        case 0x25b734u: goto label_25b734;
        case 0x25b738u: goto label_25b738;
        case 0x25b73cu: goto label_25b73c;
        case 0x25b740u: goto label_25b740;
        case 0x25b744u: goto label_25b744;
        case 0x25b748u: goto label_25b748;
        case 0x25b74cu: goto label_25b74c;
        case 0x25b750u: goto label_25b750;
        case 0x25b754u: goto label_25b754;
        case 0x25b758u: goto label_25b758;
        case 0x25b75cu: goto label_25b75c;
        case 0x25b760u: goto label_25b760;
        case 0x25b764u: goto label_25b764;
        case 0x25b768u: goto label_25b768;
        case 0x25b76cu: goto label_25b76c;
        case 0x25b770u: goto label_25b770;
        case 0x25b774u: goto label_25b774;
        case 0x25b778u: goto label_25b778;
        case 0x25b77cu: goto label_25b77c;
        case 0x25b780u: goto label_25b780;
        case 0x25b784u: goto label_25b784;
        case 0x25b788u: goto label_25b788;
        case 0x25b78cu: goto label_25b78c;
        case 0x25b790u: goto label_25b790;
        case 0x25b794u: goto label_25b794;
        case 0x25b798u: goto label_25b798;
        case 0x25b79cu: goto label_25b79c;
        case 0x25b7a0u: goto label_25b7a0;
        case 0x25b7a4u: goto label_25b7a4;
        case 0x25b7a8u: goto label_25b7a8;
        case 0x25b7acu: goto label_25b7ac;
        case 0x25b7b0u: goto label_25b7b0;
        case 0x25b7b4u: goto label_25b7b4;
        case 0x25b7b8u: goto label_25b7b8;
        case 0x25b7bcu: goto label_25b7bc;
        case 0x25b7c0u: goto label_25b7c0;
        case 0x25b7c4u: goto label_25b7c4;
        case 0x25b7c8u: goto label_25b7c8;
        case 0x25b7ccu: goto label_25b7cc;
        case 0x25b7d0u: goto label_25b7d0;
        case 0x25b7d4u: goto label_25b7d4;
        case 0x25b7d8u: goto label_25b7d8;
        case 0x25b7dcu: goto label_25b7dc;
        case 0x25b7e0u: goto label_25b7e0;
        case 0x25b7e4u: goto label_25b7e4;
        case 0x25b7e8u: goto label_25b7e8;
        case 0x25b7ecu: goto label_25b7ec;
        case 0x25b7f0u: goto label_25b7f0;
        case 0x25b7f4u: goto label_25b7f4;
        case 0x25b7f8u: goto label_25b7f8;
        case 0x25b7fcu: goto label_25b7fc;
        case 0x25b800u: goto label_25b800;
        case 0x25b804u: goto label_25b804;
        case 0x25b808u: goto label_25b808;
        case 0x25b80cu: goto label_25b80c;
        case 0x25b810u: goto label_25b810;
        case 0x25b814u: goto label_25b814;
        case 0x25b818u: goto label_25b818;
        case 0x25b81cu: goto label_25b81c;
        case 0x25b820u: goto label_25b820;
        case 0x25b824u: goto label_25b824;
        case 0x25b828u: goto label_25b828;
        case 0x25b82cu: goto label_25b82c;
        case 0x25b830u: goto label_25b830;
        case 0x25b834u: goto label_25b834;
        case 0x25b838u: goto label_25b838;
        case 0x25b83cu: goto label_25b83c;
        case 0x25b840u: goto label_25b840;
        case 0x25b844u: goto label_25b844;
        case 0x25b848u: goto label_25b848;
        case 0x25b84cu: goto label_25b84c;
        case 0x25b850u: goto label_25b850;
        case 0x25b854u: goto label_25b854;
        case 0x25b858u: goto label_25b858;
        case 0x25b85cu: goto label_25b85c;
        case 0x25b860u: goto label_25b860;
        case 0x25b864u: goto label_25b864;
        case 0x25b868u: goto label_25b868;
        case 0x25b86cu: goto label_25b86c;
        case 0x25b870u: goto label_25b870;
        case 0x25b874u: goto label_25b874;
        case 0x25b878u: goto label_25b878;
        case 0x25b87cu: goto label_25b87c;
        case 0x25b880u: goto label_25b880;
        case 0x25b884u: goto label_25b884;
        case 0x25b888u: goto label_25b888;
        case 0x25b88cu: goto label_25b88c;
        case 0x25b890u: goto label_25b890;
        case 0x25b894u: goto label_25b894;
        case 0x25b898u: goto label_25b898;
        case 0x25b89cu: goto label_25b89c;
        case 0x25b8a0u: goto label_25b8a0;
        case 0x25b8a4u: goto label_25b8a4;
        case 0x25b8a8u: goto label_25b8a8;
        case 0x25b8acu: goto label_25b8ac;
        case 0x25b8b0u: goto label_25b8b0;
        case 0x25b8b4u: goto label_25b8b4;
        case 0x25b8b8u: goto label_25b8b8;
        case 0x25b8bcu: goto label_25b8bc;
        case 0x25b8c0u: goto label_25b8c0;
        case 0x25b8c4u: goto label_25b8c4;
        case 0x25b8c8u: goto label_25b8c8;
        case 0x25b8ccu: goto label_25b8cc;
        case 0x25b8d0u: goto label_25b8d0;
        case 0x25b8d4u: goto label_25b8d4;
        case 0x25b8d8u: goto label_25b8d8;
        case 0x25b8dcu: goto label_25b8dc;
        case 0x25b8e0u: goto label_25b8e0;
        case 0x25b8e4u: goto label_25b8e4;
        case 0x25b8e8u: goto label_25b8e8;
        case 0x25b8ecu: goto label_25b8ec;
        case 0x25b8f0u: goto label_25b8f0;
        case 0x25b8f4u: goto label_25b8f4;
        case 0x25b8f8u: goto label_25b8f8;
        case 0x25b8fcu: goto label_25b8fc;
        case 0x25b900u: goto label_25b900;
        case 0x25b904u: goto label_25b904;
        case 0x25b908u: goto label_25b908;
        case 0x25b90cu: goto label_25b90c;
        case 0x25b910u: goto label_25b910;
        case 0x25b914u: goto label_25b914;
        case 0x25b918u: goto label_25b918;
        case 0x25b91cu: goto label_25b91c;
        case 0x25b920u: goto label_25b920;
        case 0x25b924u: goto label_25b924;
        case 0x25b928u: goto label_25b928;
        case 0x25b92cu: goto label_25b92c;
        case 0x25b930u: goto label_25b930;
        case 0x25b934u: goto label_25b934;
        case 0x25b938u: goto label_25b938;
        case 0x25b93cu: goto label_25b93c;
        case 0x25b940u: goto label_25b940;
        case 0x25b944u: goto label_25b944;
        case 0x25b948u: goto label_25b948;
        case 0x25b94cu: goto label_25b94c;
        case 0x25b950u: goto label_25b950;
        case 0x25b954u: goto label_25b954;
        case 0x25b958u: goto label_25b958;
        case 0x25b95cu: goto label_25b95c;
        case 0x25b960u: goto label_25b960;
        case 0x25b964u: goto label_25b964;
        case 0x25b968u: goto label_25b968;
        case 0x25b96cu: goto label_25b96c;
        case 0x25b970u: goto label_25b970;
        case 0x25b974u: goto label_25b974;
        case 0x25b978u: goto label_25b978;
        case 0x25b97cu: goto label_25b97c;
        case 0x25b980u: goto label_25b980;
        case 0x25b984u: goto label_25b984;
        case 0x25b988u: goto label_25b988;
        case 0x25b98cu: goto label_25b98c;
        case 0x25b990u: goto label_25b990;
        case 0x25b994u: goto label_25b994;
        case 0x25b998u: goto label_25b998;
        case 0x25b99cu: goto label_25b99c;
        case 0x25b9a0u: goto label_25b9a0;
        case 0x25b9a4u: goto label_25b9a4;
        case 0x25b9a8u: goto label_25b9a8;
        case 0x25b9acu: goto label_25b9ac;
        case 0x25b9b0u: goto label_25b9b0;
        case 0x25b9b4u: goto label_25b9b4;
        case 0x25b9b8u: goto label_25b9b8;
        case 0x25b9bcu: goto label_25b9bc;
        case 0x25b9c0u: goto label_25b9c0;
        case 0x25b9c4u: goto label_25b9c4;
        case 0x25b9c8u: goto label_25b9c8;
        case 0x25b9ccu: goto label_25b9cc;
        case 0x25b9d0u: goto label_25b9d0;
        case 0x25b9d4u: goto label_25b9d4;
        case 0x25b9d8u: goto label_25b9d8;
        case 0x25b9dcu: goto label_25b9dc;
        case 0x25b9e0u: goto label_25b9e0;
        case 0x25b9e4u: goto label_25b9e4;
        case 0x25b9e8u: goto label_25b9e8;
        case 0x25b9ecu: goto label_25b9ec;
        case 0x25b9f0u: goto label_25b9f0;
        case 0x25b9f4u: goto label_25b9f4;
        case 0x25b9f8u: goto label_25b9f8;
        case 0x25b9fcu: goto label_25b9fc;
        case 0x25ba00u: goto label_25ba00;
        case 0x25ba04u: goto label_25ba04;
        case 0x25ba08u: goto label_25ba08;
        case 0x25ba0cu: goto label_25ba0c;
        case 0x25ba10u: goto label_25ba10;
        case 0x25ba14u: goto label_25ba14;
        case 0x25ba18u: goto label_25ba18;
        case 0x25ba1cu: goto label_25ba1c;
        case 0x25ba20u: goto label_25ba20;
        case 0x25ba24u: goto label_25ba24;
        case 0x25ba28u: goto label_25ba28;
        case 0x25ba2cu: goto label_25ba2c;
        case 0x25ba30u: goto label_25ba30;
        case 0x25ba34u: goto label_25ba34;
        case 0x25ba38u: goto label_25ba38;
        case 0x25ba3cu: goto label_25ba3c;
        case 0x25ba40u: goto label_25ba40;
        case 0x25ba44u: goto label_25ba44;
        case 0x25ba48u: goto label_25ba48;
        case 0x25ba4cu: goto label_25ba4c;
        case 0x25ba50u: goto label_25ba50;
        case 0x25ba54u: goto label_25ba54;
        case 0x25ba58u: goto label_25ba58;
        case 0x25ba5cu: goto label_25ba5c;
        case 0x25ba60u: goto label_25ba60;
        case 0x25ba64u: goto label_25ba64;
        case 0x25ba68u: goto label_25ba68;
        case 0x25ba6cu: goto label_25ba6c;
        case 0x25ba70u: goto label_25ba70;
        case 0x25ba74u: goto label_25ba74;
        case 0x25ba78u: goto label_25ba78;
        case 0x25ba7cu: goto label_25ba7c;
        case 0x25ba80u: goto label_25ba80;
        case 0x25ba84u: goto label_25ba84;
        case 0x25ba88u: goto label_25ba88;
        case 0x25ba8cu: goto label_25ba8c;
        case 0x25ba90u: goto label_25ba90;
        case 0x25ba94u: goto label_25ba94;
        default: return;
    }

label_25b2c8:
    // 0x25b2c8: 0x0  nop
    ctx->pc = 0x25b2c8u;
    // NOP
label_25b2cc:
    // 0x25b2cc: 0x0  nop
    ctx->pc = 0x25b2ccu;
    // NOP
label_25b2d0:
    // 0x25b2d0: 0x4a2a  .word       0x00004A2A                   # slt         $t1, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b2d0u;
    SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_25b2d4:
    // 0x25b2d4: 0x6260  .word       0x00006260                   # add         $t4, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b2d4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_25b2d8:
    // 0x25b2d8: 0x0  nop
    ctx->pc = 0x25b2d8u;
    // NOP
label_25b2dc:
    // 0x25b2dc: 0x0  nop
    ctx->pc = 0x25b2dcu;
    // NOP
label_25b2e0:
    // 0x25b2e0: 0x4a37  .word       0x00004A37                   # INVALID     $zero, $zero, 0x4A37 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b2e0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x25B2E0 raw=0x00004A37"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25b2e4:
    // 0x25b2e4: 0x9520  .word       0x00009520                   # add         $s2, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b2e4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 18, (int32_t)result);     } }
label_25b2e8:
    // 0x25b2e8: 0x0  nop
    ctx->pc = 0x25b2e8u;
    // NOP
label_25b2ec:
    // 0x25b2ec: 0x0  nop
    ctx->pc = 0x25b2ecu;
    // NOP
label_25b2f0:
    // 0x25b2f0: 0x4a4a  .word       0x00004A4A                   # movz        $t1, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b2f0u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 0));
label_25b2f4:
    // 0x25b2f4: 0xa350  .word       0x0000A350                   # mfhi        $s4 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b2f4u;
    SET_GPR_U64(ctx, 20, ctx->hi);
label_25b2f8:
    // 0x25b2f8: 0x0  nop
    ctx->pc = 0x25b2f8u;
    // NOP
label_25b2fc:
    // 0x25b2fc: 0x0  nop
    ctx->pc = 0x25b2fcu;
    // NOP
label_25b300:
    // 0x25b300: 0x4a5f  .word       0x00004A5F                   # ddivu       $t1, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b300u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x25B300 raw=0x00004A5F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25b304:
    // 0x25b304: 0xc4c0  sll         $t8, $zero, 19
    ctx->pc = 0x25b304u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
label_25b308:
    // 0x25b308: 0x0  nop
    ctx->pc = 0x25b308u;
    // NOP
label_25b30c:
    // 0x25b30c: 0x0  nop
    ctx->pc = 0x25b30cu;
    // NOP
label_25b310:
    // 0x25b310: 0x4a78  dsll        $t1, $zero, 9
    ctx->pc = 0x25b310u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) << 9);
label_25b314:
    // 0x25b314: 0x8dc0  sll         $s1, $zero, 23
    ctx->pc = 0x25b314u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 0), 23));
label_25b318:
    // 0x25b318: 0x0  nop
    ctx->pc = 0x25b318u;
    // NOP
label_25b31c:
    // 0x25b31c: 0x0  nop
    ctx->pc = 0x25b31cu;
    // NOP
label_25b320:
    // 0x25b320: 0x4a8a  .word       0x00004A8A                   # movz        $t1, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b320u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 0));
label_25b324:
    // 0x25b324: 0x90f0  tge         $zero, $zero, 579
    ctx->pc = 0x25b324u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25b328:
    // 0x25b328: 0x0  nop
    ctx->pc = 0x25b328u;
    // NOP
label_25b32c:
    // 0x25b32c: 0x0  nop
    ctx->pc = 0x25b32cu;
    // NOP
label_25b330:
    // 0x25b330: 0x4a9d  .word       0x00004A9D                   # dmultu      $zero, $zero # 00004A80 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b330u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x25B330 raw=0x00004A9D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25b334:
    // 0x25b334: 0x7f30  tge         $zero, $zero, 508
    ctx->pc = 0x25b334u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25b338:
    // 0x25b338: 0x0  nop
    ctx->pc = 0x25b338u;
    // NOP
label_25b33c:
    // 0x25b33c: 0x0  nop
    ctx->pc = 0x25b33cu;
    // NOP
label_25b340:
    // 0x25b340: 0x4aad  .word       0x00004AAD                   # daddu       $t1, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b340u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25b344:
    // 0x25b344: 0x9a60  .word       0x00009A60                   # add         $s3, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b344u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 19, (int32_t)result);     } }
label_25b348:
    // 0x25b348: 0x0  nop
    ctx->pc = 0x25b348u;
    // NOP
label_25b34c:
    // 0x25b34c: 0x0  nop
    ctx->pc = 0x25b34cu;
    // NOP
label_25b350:
    // 0x25b350: 0x4ac1  .word       0x00004AC1                   # INVALID     $zero, $zero, 0x4AC1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b350u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x25B350 raw=0x00004AC1"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25b354:
    // 0x25b354: 0xa090  .word       0x0000A090                   # mfhi        $s4 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b354u;
    SET_GPR_U64(ctx, 20, ctx->hi);
label_25b358:
    // 0x25b358: 0x0  nop
    ctx->pc = 0x25b358u;
    // NOP
label_25b35c:
    // 0x25b35c: 0x0  nop
    ctx->pc = 0x25b35cu;
    // NOP
label_25b360:
    // 0x25b360: 0x4ad6  .word       0x00004AD6                   # dsrlv       $t1, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b360u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_25b364:
    // 0x25b364: 0x8370  tge         $zero, $zero, 525
    ctx->pc = 0x25b364u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25b368:
    // 0x25b368: 0x0  nop
    ctx->pc = 0x25b368u;
    // NOP
label_25b36c:
    // 0x25b36c: 0x0  nop
    ctx->pc = 0x25b36cu;
    // NOP
label_25b370:
    // 0x25b370: 0x4ae7  .word       0x00004AE7                   # not         $t1, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b370u;
    SET_GPR_U64(ctx, 9, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_25b374:
    // 0x25b374: 0x5f90  .word       0x00005F90                   # mfhi        $t3 # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b374u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_25b378:
    // 0x25b378: 0x0  nop
    ctx->pc = 0x25b378u;
    // NOP
label_25b37c:
    // 0x25b37c: 0x0  nop
    ctx->pc = 0x25b37cu;
    // NOP
label_25b380:
    // 0x25b380: 0x4af3  tltu        $zero, $zero, 299
    ctx->pc = 0x25b380u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25b384:
    // 0x25b384: 0x7100  sll         $t6, $zero, 4
    ctx->pc = 0x25b384u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 0), 4));
label_25b388:
    // 0x25b388: 0x0  nop
    ctx->pc = 0x25b388u;
    // NOP
label_25b38c:
    // 0x25b38c: 0x0  nop
    ctx->pc = 0x25b38cu;
    // NOP
label_25b390:
    // 0x25b390: 0x4b02  srl         $t1, $zero, 12
    ctx->pc = 0x25b390u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 0), 12));
label_25b394:
    // 0x25b394: 0x4b40  sll         $t1, $zero, 13
    ctx->pc = 0x25b394u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), 13));
label_25b398:
    // 0x25b398: 0x0  nop
    ctx->pc = 0x25b398u;
    // NOP
label_25b39c:
    // 0x25b39c: 0x0  nop
    ctx->pc = 0x25b39cu;
    // NOP
label_25b3a0:
    // 0x25b3a0: 0x4b0c  syscall     300
    ctx->pc = 0x25b3a0u;
    ctx->pc = 0x25B3A4u;
runtime->handleSyscall(rdram, ctx, 0x12Cu);
label_25b3a4:
    // 0x25b3a4: 0x7100  sll         $t6, $zero, 4
    ctx->pc = 0x25b3a4u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 0), 4));
label_25b3a8:
    // 0x25b3a8: 0x0  nop
    ctx->pc = 0x25b3a8u;
    // NOP
label_25b3ac:
    // 0x25b3ac: 0x0  nop
    ctx->pc = 0x25b3acu;
    // NOP
label_25b3b0:
    // 0x25b3b0: 0x4b1b  .word       0x00004B1B                   # divu        $t1, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b3b0u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_25b3b4:
    // 0x25b3b4: 0x6490  .word       0x00006490                   # mfhi        $t4 # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b3b4u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_25b3b8:
    // 0x25b3b8: 0x0  nop
    ctx->pc = 0x25b3b8u;
    // NOP
label_25b3bc:
    // 0x25b3bc: 0x0  nop
    ctx->pc = 0x25b3bcu;
    // NOP
label_25b3c0:
    // 0x25b3c0: 0x4b28  .word       0x00004B28                   # mfsa        $t1 # 00000300 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x25b3c0u;
    SET_GPR_U32(ctx, 9, ctx->sa);
label_25b3c4:
    // 0x25b3c4: 0x7340  sll         $t6, $zero, 13
    ctx->pc = 0x25b3c4u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 0), 13));
label_25b3c8:
    // 0x25b3c8: 0x0  nop
    ctx->pc = 0x25b3c8u;
    // NOP
label_25b3cc:
    // 0x25b3cc: 0x0  nop
    ctx->pc = 0x25b3ccu;
    // NOP
label_25b3d0:
    // 0x25b3d0: 0x4b37  .word       0x00004B37                   # INVALID     $zero, $zero, 0x4B37 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b3d0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x25B3D0 raw=0x00004B37"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25b3d4:
    // 0x25b3d4: 0x4220  .word       0x00004220                   # add         $t0, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b3d4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
label_25b3d8:
    // 0x25b3d8: 0x0  nop
    ctx->pc = 0x25b3d8u;
    // NOP
label_25b3dc:
    // 0x25b3dc: 0x0  nop
    ctx->pc = 0x25b3dcu;
    // NOP
label_25b3e0:
    // 0x25b3e0: 0x4b40  sll         $t1, $zero, 13
    ctx->pc = 0x25b3e0u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), 13));
label_25b3e4:
    // 0x25b3e4: 0x5720  .word       0x00005720                   # add         $t2, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b3e4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
label_25b3e8:
    // 0x25b3e8: 0x0  nop
    ctx->pc = 0x25b3e8u;
    // NOP
label_25b3ec:
    // 0x25b3ec: 0x0  nop
    ctx->pc = 0x25b3ecu;
    // NOP
label_25b3f0:
    // 0x25b3f0: 0x4b4b  .word       0x00004B4B                   # movn        $t1, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b3f0u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 0));
label_25b3f4:
    // 0x25b3f4: 0x5d00  sll         $t3, $zero, 20
    ctx->pc = 0x25b3f4u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 0), 20));
label_25b3f8:
    // 0x25b3f8: 0x0  nop
    ctx->pc = 0x25b3f8u;
    // NOP
label_25b3fc:
    // 0x25b3fc: 0x0  nop
    ctx->pc = 0x25b3fcu;
    // NOP
label_25b400:
    // 0x25b400: 0x4b57  .word       0x00004B57                   # dsrav       $t1, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b400u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_25b404:
    // 0x25b404: 0x2ed0  .word       0x00002ED0                   # mfhi        $a1 # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b404u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_25b408:
    // 0x25b408: 0x0  nop
    ctx->pc = 0x25b408u;
    // NOP
label_25b40c:
    // 0x25b40c: 0x0  nop
    ctx->pc = 0x25b40cu;
    // NOP
label_25b410:
    // 0x25b410: 0x4b5d  .word       0x00004B5D                   # dmultu      $zero, $zero # 00004B40 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b410u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x25B410 raw=0x00004B5D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25b414:
    // 0x25b414: 0x2170  tge         $zero, $zero, 133
    ctx->pc = 0x25b414u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25b418:
    // 0x25b418: 0x0  nop
    ctx->pc = 0x25b418u;
    // NOP
label_25b41c:
    // 0x25b41c: 0x0  nop
    ctx->pc = 0x25b41cu;
    // NOP
label_25b420:
    // 0x25b420: 0x4b62  .word       0x00004B62                   # neg         $t1, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b420u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 9, (int32_t)tmp); }
label_25b424:
    // 0x25b424: 0x1b50  .word       0x00001B50                   # mfhi        $v1 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b424u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_25b428:
    // 0x25b428: 0x0  nop
    ctx->pc = 0x25b428u;
    // NOP
label_25b42c:
    // 0x25b42c: 0x0  nop
    ctx->pc = 0x25b42cu;
    // NOP
label_25b430:
    // 0x25b430: 0x4b66  .word       0x00004B66                   # xor         $t1, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b430u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_25b434:
    // 0x25b434: 0x1d20  .word       0x00001D20                   # add         $v1, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b434u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_25b438:
    // 0x25b438: 0x0  nop
    ctx->pc = 0x25b438u;
    // NOP
label_25b43c:
    // 0x25b43c: 0x0  nop
    ctx->pc = 0x25b43cu;
    // NOP
label_25b440:
    // 0x25b440: 0x4b6a  .word       0x00004B6A                   # slt         $t1, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b440u;
    SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_25b444:
    // 0x25b444: 0x6170  tge         $zero, $zero, 389
    ctx->pc = 0x25b444u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25b448:
    // 0x25b448: 0x0  nop
    ctx->pc = 0x25b448u;
    // NOP
label_25b44c:
    // 0x25b44c: 0x0  nop
    ctx->pc = 0x25b44cu;
    // NOP
label_25b450:
    // 0x25b450: 0x4b77  .word       0x00004B77                   # INVALID     $zero, $zero, 0x4B77 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b450u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x25B450 raw=0x00004B77"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25b454:
    // 0x25b454: 0x8020  add         $s0, $zero, $zero
    ctx->pc = 0x25b454u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_25b458:
    // 0x25b458: 0x0  nop
    ctx->pc = 0x25b458u;
    // NOP
label_25b45c:
    // 0x25b45c: 0x0  nop
    ctx->pc = 0x25b45cu;
    // NOP
label_25b460:
    // 0x25b460: 0x4b88  .word       0x00004B88                   # jr          $zero # 00004B80 <InstrIdType: CPU_SPECIAL>
label_25b464:
    if (ctx->pc == 0x25B464u) {
        ctx->pc = 0x25B464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B460u;
        // 0x25b464: 0x8020  add         $s0, $zero, $zero (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = 0x25B468u;
        goto label_25b468;
    }
    ctx->pc = 0x25B460u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x25B464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B460u;
        // 0x25b464: 0x8020  add         $s0, $zero, $zero (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25B460u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x25B468u;
label_25b468:
    // 0x25b468: 0x0  nop
    ctx->pc = 0x25b468u;
    // NOP
label_25b46c:
    // 0x25b46c: 0x0  nop
    ctx->pc = 0x25b46cu;
    // NOP
label_25b470:
    // 0x25b470: 0x4b99  .word       0x00004B99                   # multu       $zero, $zero # 00004B80 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b470u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
label_25b474:
    // 0x25b474: 0x4800  sll         $t1, $zero, 0
    ctx->pc = 0x25b474u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_25b478:
    // 0x25b478: 0x0  nop
    ctx->pc = 0x25b478u;
    // NOP
label_25b47c:
    // 0x25b47c: 0x0  nop
    ctx->pc = 0x25b47cu;
    // NOP
label_25b480:
    // 0x25b480: 0x4ba2  .word       0x00004BA2                   # neg         $t1, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b480u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 9, (int32_t)tmp); }
label_25b484:
    // 0x25b484: 0x4a90  .word       0x00004A90                   # mfhi        $t1 # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b484u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_25b488:
    // 0x25b488: 0x0  nop
    ctx->pc = 0x25b488u;
    // NOP
label_25b48c:
    // 0x25b48c: 0x0  nop
    ctx->pc = 0x25b48cu;
    // NOP
label_25b490:
    // 0x25b490: 0x4bac  .word       0x00004BAC                   # dadd        $t1, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b490u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 9, r); }
label_25b494:
    // 0x25b494: 0x58a0  .word       0x000058A0                   # add         $t3, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b494u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_25b498:
    // 0x25b498: 0x0  nop
    ctx->pc = 0x25b498u;
    // NOP
label_25b49c:
    // 0x25b49c: 0x0  nop
    ctx->pc = 0x25b49cu;
    // NOP
label_25b4a0:
    // 0x25b4a0: 0x4bb8  dsll        $t1, $zero, 14
    ctx->pc = 0x25b4a0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) << 14);
label_25b4a4:
    // 0x25b4a4: 0x4c90  .word       0x00004C90                   # mfhi        $t1 # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b4a4u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_25b4a8:
    // 0x25b4a8: 0x0  nop
    ctx->pc = 0x25b4a8u;
    // NOP
label_25b4ac:
    // 0x25b4ac: 0x0  nop
    ctx->pc = 0x25b4acu;
    // NOP
label_25b4b0:
    // 0x25b4b0: 0x4bc2  srl         $t1, $zero, 15
    ctx->pc = 0x25b4b0u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 0), 15));
label_25b4b4:
    // 0x25b4b4: 0x5370  tge         $zero, $zero, 333
    ctx->pc = 0x25b4b4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25b4b8:
    // 0x25b4b8: 0x0  nop
    ctx->pc = 0x25b4b8u;
    // NOP
label_25b4bc:
    // 0x25b4bc: 0x0  nop
    ctx->pc = 0x25b4bcu;
    // NOP
label_25b4c0:
    // 0x25b4c0: 0x4bcd  break       0, 303
    ctx->pc = 0x25b4c0u;
    runtime->handleBreak(rdram, ctx);
label_25b4c4:
    // 0x25b4c4: 0x6550  .word       0x00006550                   # mfhi        $t4 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b4c4u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_25b4c8:
    // 0x25b4c8: 0x0  nop
    ctx->pc = 0x25b4c8u;
    // NOP
label_25b4cc:
    // 0x25b4cc: 0x0  nop
    ctx->pc = 0x25b4ccu;
    // NOP
label_25b4d0:
    // 0x25b4d0: 0x4bda  .word       0x00004BDA                   # div         $t1, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b4d0u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_25b4d4:
    // 0x25b4d4: 0x1e00  sll         $v1, $zero, 24
    ctx->pc = 0x25b4d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 0), 24));
label_25b4d8:
    // 0x25b4d8: 0x0  nop
    ctx->pc = 0x25b4d8u;
    // NOP
label_25b4dc:
    // 0x25b4dc: 0x0  nop
    ctx->pc = 0x25b4dcu;
    // NOP
label_25b4e0:
    // 0x25b4e0: 0x4bde  .word       0x00004BDE                   # ddiv        $t1, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b4e0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x25B4E0 raw=0x00004BDE"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25b4e4:
    // 0x25b4e4: 0x5890  .word       0x00005890                   # mfhi        $t3 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b4e4u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_25b4e8:
    // 0x25b4e8: 0x0  nop
    ctx->pc = 0x25b4e8u;
    // NOP
label_25b4ec:
    // 0x25b4ec: 0x0  nop
    ctx->pc = 0x25b4ecu;
    // NOP
label_25b4f0:
    // 0x25b4f0: 0x4bea  .word       0x00004BEA                   # slt         $t1, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b4f0u;
    SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_25b4f4:
    // 0x25b4f4: 0x6250  .word       0x00006250                   # mfhi        $t4 # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b4f4u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_25b4f8:
    // 0x25b4f8: 0x0  nop
    ctx->pc = 0x25b4f8u;
    // NOP
label_25b4fc:
    // 0x25b4fc: 0x0  nop
    ctx->pc = 0x25b4fcu;
    // NOP
label_25b500:
    // 0x25b500: 0x4bf7  .word       0x00004BF7                   # INVALID     $zero, $zero, 0x4BF7 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b500u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x25B500 raw=0x00004BF7"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25b504:
    // 0x25b504: 0x4f70  tge         $zero, $zero, 317
    ctx->pc = 0x25b504u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25b508:
    // 0x25b508: 0x0  nop
    ctx->pc = 0x25b508u;
    // NOP
label_25b50c:
    // 0x25b50c: 0x0  nop
    ctx->pc = 0x25b50cu;
    // NOP
label_25b510:
    // 0x25b510: 0x4c01  .word       0x00004C01                   # INVALID     $zero, $zero, 0x4C01 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b510u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x25B510 raw=0x00004C01"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25b514:
    // 0x25b514: 0x1490  .word       0x00001490                   # mfhi        $v0 # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b514u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_25b518:
    // 0x25b518: 0x0  nop
    ctx->pc = 0x25b518u;
    // NOP
label_25b51c:
    // 0x25b51c: 0x0  nop
    ctx->pc = 0x25b51cu;
    // NOP
label_25b520:
    // 0x25b520: 0x4c04  .word       0x00004C04                   # sllv        $t1, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b520u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_25b524:
    // 0x25b524: 0x5490  .word       0x00005490                   # mfhi        $t2 # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b524u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_25b528:
    // 0x25b528: 0x0  nop
    ctx->pc = 0x25b528u;
    // NOP
label_25b52c:
    // 0x25b52c: 0x0  nop
    ctx->pc = 0x25b52cu;
    // NOP
label_25b530:
    // 0x25b530: 0x4c0f  .word       0x00004C0F                   # sync.p # 00004800 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b530u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_25b534:
    // 0x25b534: 0x4fc0  sll         $t1, $zero, 31
    ctx->pc = 0x25b534u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), 31));
label_25b538:
    // 0x25b538: 0x0  nop
    ctx->pc = 0x25b538u;
    // NOP
label_25b53c:
    // 0x25b53c: 0x0  nop
    ctx->pc = 0x25b53cu;
    // NOP
label_25b540:
    // 0x25b540: 0x4c19  .word       0x00004C19                   # multu       $zero, $zero # 00004C00 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b540u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
label_25b544:
    // 0x25b544: 0x5ae0  .word       0x00005AE0                   # add         $t3, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b544u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_25b548:
    // 0x25b548: 0x0  nop
    ctx->pc = 0x25b548u;
    // NOP
label_25b54c:
    // 0x25b54c: 0x0  nop
    ctx->pc = 0x25b54cu;
    // NOP
label_25b550:
    // 0x25b550: 0x4c25  .word       0x00004C25                   # move        $t1, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b550u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_25b554:
    // 0x25b554: 0x3dc0  sll         $a3, $zero, 23
    ctx->pc = 0x25b554u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 0), 23));
label_25b558:
    // 0x25b558: 0x0  nop
    ctx->pc = 0x25b558u;
    // NOP
label_25b55c:
    // 0x25b55c: 0x0  nop
    ctx->pc = 0x25b55cu;
    // NOP
label_25b560:
    // 0x25b560: 0x4c2d  .word       0x00004C2D                   # daddu       $t1, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b560u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25b564:
    // 0x25b564: 0x8020  add         $s0, $zero, $zero
    ctx->pc = 0x25b564u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_25b568:
    // 0x25b568: 0x0  nop
    ctx->pc = 0x25b568u;
    // NOP
label_25b56c:
    // 0x25b56c: 0x0  nop
    ctx->pc = 0x25b56cu;
    // NOP
label_25b570:
    // 0x25b570: 0x4c3e  dsrl32      $t1, $zero, 16
    ctx->pc = 0x25b570u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) >> (32 + 16));
label_25b574:
    // 0x25b574: 0x2540  sll         $a0, $zero, 21
    ctx->pc = 0x25b574u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 0), 21));
label_25b578:
    // 0x25b578: 0x0  nop
    ctx->pc = 0x25b578u;
    // NOP
label_25b57c:
    // 0x25b57c: 0x0  nop
    ctx->pc = 0x25b57cu;
    // NOP
label_25b580:
    // 0x25b580: 0x4c43  sra         $t1, $zero, 17
    ctx->pc = 0x25b580u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 0), 17));
label_25b584:
    // 0x25b584: 0x5e70  tge         $zero, $zero, 377
    ctx->pc = 0x25b584u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25b588:
    // 0x25b588: 0x0  nop
    ctx->pc = 0x25b588u;
    // NOP
label_25b58c:
    // 0x25b58c: 0x0  nop
    ctx->pc = 0x25b58cu;
    // NOP
label_25b590:
    // 0x25b590: 0x4c4f  .word       0x00004C4F                   # sync.p # 00004800 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b590u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_25b594:
    // 0x25b594: 0x64c0  sll         $t4, $zero, 19
    ctx->pc = 0x25b594u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
label_25b598:
    // 0x25b598: 0x0  nop
    ctx->pc = 0x25b598u;
    // NOP
label_25b59c:
    // 0x25b59c: 0x0  nop
    ctx->pc = 0x25b59cu;
    // NOP
label_25b5a0:
    // 0x25b5a0: 0x4c5c  .word       0x00004C5C                   # dmult       $zero, $zero # 00004C40 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b5a0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x25B5A0 raw=0x00004C5C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25b5a4:
    // 0x25b5a4: 0x70e0  .word       0x000070E0                   # add         $t6, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b5a4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_25b5a8:
    // 0x25b5a8: 0x0  nop
    ctx->pc = 0x25b5a8u;
    // NOP
label_25b5ac:
    // 0x25b5ac: 0x0  nop
    ctx->pc = 0x25b5acu;
    // NOP
label_25b5b0:
    // 0x25b5b0: 0x4c6b  .word       0x00004C6B                   # sltu        $t1, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b5b0u;
    SET_GPR_U64(ctx, 9, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_25b5b4:
    // 0x25b5b4: 0x65b0  tge         $zero, $zero, 406
    ctx->pc = 0x25b5b4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25b5b8:
    // 0x25b5b8: 0x0  nop
    ctx->pc = 0x25b5b8u;
    // NOP
label_25b5bc:
    // 0x25b5bc: 0x0  nop
    ctx->pc = 0x25b5bcu;
    // NOP
label_25b5c0:
    // 0x25b5c0: 0x4c78  dsll        $t1, $zero, 17
    ctx->pc = 0x25b5c0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) << 17);
label_25b5c4:
    // 0x25b5c4: 0x5ec0  sll         $t3, $zero, 27
    ctx->pc = 0x25b5c4u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 0), 27));
label_25b5c8:
    // 0x25b5c8: 0x0  nop
    ctx->pc = 0x25b5c8u;
    // NOP
label_25b5cc:
    // 0x25b5cc: 0x0  nop
    ctx->pc = 0x25b5ccu;
    // NOP
label_25b5d0:
    // 0x25b5d0: 0x4c84  .word       0x00004C84                   # sllv        $t1, $zero, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b5d0u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_25b5d4:
    // 0x25b5d4: 0x5180  sll         $t2, $zero, 6
    ctx->pc = 0x25b5d4u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 0), 6));
label_25b5d8:
    // 0x25b5d8: 0x0  nop
    ctx->pc = 0x25b5d8u;
    // NOP
label_25b5dc:
    // 0x25b5dc: 0x0  nop
    ctx->pc = 0x25b5dcu;
    // NOP
label_25b5e0:
    // 0x25b5e0: 0x4c8f  .word       0x00004C8F                   # sync.p # 00004800 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b5e0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_25b5e4:
    // 0x25b5e4: 0x4be0  .word       0x00004BE0                   # add         $t1, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b5e4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_25b5e8:
    // 0x25b5e8: 0x0  nop
    ctx->pc = 0x25b5e8u;
    // NOP
label_25b5ec:
    // 0x25b5ec: 0x0  nop
    ctx->pc = 0x25b5ecu;
    // NOP
label_25b5f0:
    // 0x25b5f0: 0x4c99  .word       0x00004C99                   # multu       $zero, $zero # 00004C80 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b5f0u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
label_25b5f4:
    // 0x25b5f4: 0x3d90  .word       0x00003D90                   # mfhi        $a3 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b5f4u;
    SET_GPR_U64(ctx, 7, ctx->hi);
label_25b5f8:
    // 0x25b5f8: 0x0  nop
    ctx->pc = 0x25b5f8u;
    // NOP
label_25b5fc:
    // 0x25b5fc: 0x0  nop
    ctx->pc = 0x25b5fcu;
    // NOP
label_25b600:
    // 0x25b600: 0x4ca1  .word       0x00004CA1                   # addu        $t1, $zero, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b600u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_25b604:
    // 0x25b604: 0x4290  .word       0x00004290                   # mfhi        $t0 # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b604u;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_25b608:
    // 0x25b608: 0x0  nop
    ctx->pc = 0x25b608u;
    // NOP
label_25b60c:
    // 0x25b60c: 0x0  nop
    ctx->pc = 0x25b60cu;
    // NOP
label_25b610:
    // 0x25b610: 0x4caa  .word       0x00004CAA                   # slt         $t1, $zero, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b610u;
    SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_25b614:
    // 0x25b614: 0x5a20  .word       0x00005A20                   # add         $t3, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b614u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_25b618:
    // 0x25b618: 0x0  nop
    ctx->pc = 0x25b618u;
    // NOP
label_25b61c:
    // 0x25b61c: 0x0  nop
    ctx->pc = 0x25b61cu;
    // NOP
label_25b620:
    // 0x25b620: 0x4cb6  tne         $zero, $zero, 306
    ctx->pc = 0x25b620u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25b624:
    // 0x25b624: 0x3840  sll         $a3, $zero, 1
    ctx->pc = 0x25b624u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 0), 1));
label_25b628:
    // 0x25b628: 0x0  nop
    ctx->pc = 0x25b628u;
    // NOP
label_25b62c:
    // 0x25b62c: 0x0  nop
    ctx->pc = 0x25b62cu;
    // NOP
label_25b630:
    // 0x25b630: 0x4cbe  dsrl32      $t1, $zero, 18
    ctx->pc = 0x25b630u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) >> (32 + 18));
label_25b634:
    // 0x25b634: 0x50c0  sll         $t2, $zero, 3
    ctx->pc = 0x25b634u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 0), 3));
label_25b638:
    // 0x25b638: 0x0  nop
    ctx->pc = 0x25b638u;
    // NOP
label_25b63c:
    // 0x25b63c: 0x0  nop
    ctx->pc = 0x25b63cu;
    // NOP
label_25b640:
    // 0x25b640: 0x4cc9  .word       0x00004CC9                   # jalr        $t1, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
label_25b644:
    if (ctx->pc == 0x25B644u) {
        ctx->pc = 0x25B644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B640u;
        // 0x25b644: 0xc6c0  sll         $t8, $zero, 27 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 0), 27));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25B648u;
        goto label_25b648;
    }
    ctx->pc = 0x25B640u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 9, 0x25B648u);
        ctx->pc = 0x25B644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B640u;
        // 0x25b644: 0xc6c0  sll         $t8, $zero, 27 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 0), 27));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25B640u, 0x25B648u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25B648u;
label_25b648:
    // 0x25b648: 0x0  nop
    ctx->pc = 0x25b648u;
    // NOP
label_25b64c:
    // 0x25b64c: 0x0  nop
    ctx->pc = 0x25b64cu;
    // NOP
label_25b650:
    // 0x25b650: 0x4ce2  .word       0x00004CE2                   # neg         $t1, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b650u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 9, (int32_t)tmp); }
label_25b654:
    // 0x25b654: 0x4820  add         $t1, $zero, $zero
    ctx->pc = 0x25b654u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_25b658:
    // 0x25b658: 0x0  nop
    ctx->pc = 0x25b658u;
    // NOP
label_25b65c:
    // 0x25b65c: 0x0  nop
    ctx->pc = 0x25b65cu;
    // NOP
label_25b660:
    // 0x25b660: 0x4cec  .word       0x00004CEC                   # dadd        $t1, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b660u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 9, r); }
label_25b664:
    // 0x25b664: 0x3a10  .word       0x00003A10                   # mfhi        $a3 # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b664u;
    SET_GPR_U64(ctx, 7, ctx->hi);
label_25b668:
    // 0x25b668: 0x0  nop
    ctx->pc = 0x25b668u;
    // NOP
label_25b66c:
    // 0x25b66c: 0x0  nop
    ctx->pc = 0x25b66cu;
    // NOP
label_25b670:
    // 0x25b670: 0x4cf4  teq         $zero, $zero, 307
    ctx->pc = 0x25b670u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25b674:
    // 0x25b674: 0x49f0  tge         $zero, $zero, 295
    ctx->pc = 0x25b674u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25b678:
    // 0x25b678: 0x0  nop
    ctx->pc = 0x25b678u;
    // NOP
label_25b67c:
    // 0x25b67c: 0x0  nop
    ctx->pc = 0x25b67cu;
    // NOP
label_25b680:
    // 0x25b680: 0x4cfe  dsrl32      $t1, $zero, 19
    ctx->pc = 0x25b680u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) >> (32 + 19));
label_25b684:
    // 0x25b684: 0x3ba0  .word       0x00003BA0                   # add         $a3, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b684u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
label_25b688:
    // 0x25b688: 0x0  nop
    ctx->pc = 0x25b688u;
    // NOP
label_25b68c:
    // 0x25b68c: 0x0  nop
    ctx->pc = 0x25b68cu;
    // NOP
label_25b690:
    // 0x25b690: 0x4d06  .word       0x00004D06                   # srlv        $t1, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b690u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_25b694:
    // 0x25b694: 0x3f50  .word       0x00003F50                   # mfhi        $a3 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b694u;
    SET_GPR_U64(ctx, 7, ctx->hi);
label_25b698:
    // 0x25b698: 0x0  nop
    ctx->pc = 0x25b698u;
    // NOP
label_25b69c:
    // 0x25b69c: 0x0  nop
    ctx->pc = 0x25b69cu;
    // NOP
label_25b6a0:
    // 0x25b6a0: 0x4d0e  .word       0x00004D0E                   # INVALID     $zero, $zero, 0x4D0E # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b6a0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x25B6A0 raw=0x00004D0E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25b6a4:
    // 0x25b6a4: 0x4ba0  .word       0x00004BA0                   # add         $t1, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b6a4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_25b6a8:
    // 0x25b6a8: 0x0  nop
    ctx->pc = 0x25b6a8u;
    // NOP
label_25b6ac:
    // 0x25b6ac: 0x0  nop
    ctx->pc = 0x25b6acu;
    // NOP
label_25b6b0:
    // 0x25b6b0: 0x4d18  .word       0x00004D18                   # mult        $t1, $zero, $zero # 00000500 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x25b6b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
label_25b6b4:
    // 0x25b6b4: 0x39e0  .word       0x000039E0                   # add         $a3, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b6b4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
label_25b6b8:
    // 0x25b6b8: 0x0  nop
    ctx->pc = 0x25b6b8u;
    // NOP
label_25b6bc:
    // 0x25b6bc: 0x0  nop
    ctx->pc = 0x25b6bcu;
    // NOP
label_25b6c0:
    // 0x25b6c0: 0x4d20  .word       0x00004D20                   # add         $t1, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b6c0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_25b6c4:
    // 0x25b6c4: 0x4230  tge         $zero, $zero, 264
    ctx->pc = 0x25b6c4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25b6c8:
    // 0x25b6c8: 0x0  nop
    ctx->pc = 0x25b6c8u;
    // NOP
label_25b6cc:
    // 0x25b6cc: 0x0  nop
    ctx->pc = 0x25b6ccu;
    // NOP
label_25b6d0:
    // 0x25b6d0: 0x4d29  .word       0x00004D29                   # mtsa        $zero # 00004D00 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x25b6d0u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_25b6d4:
    // 0x25b6d4: 0x49c0  sll         $t1, $zero, 7
    ctx->pc = 0x25b6d4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), 7));
label_25b6d8:
    // 0x25b6d8: 0x0  nop
    ctx->pc = 0x25b6d8u;
    // NOP
label_25b6dc:
    // 0x25b6dc: 0x0  nop
    ctx->pc = 0x25b6dcu;
    // NOP
label_25b6e0:
    // 0x25b6e0: 0x4d33  tltu        $zero, $zero, 308
    ctx->pc = 0x25b6e0u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25b6e4:
    // 0x25b6e4: 0x8020  add         $s0, $zero, $zero
    ctx->pc = 0x25b6e4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_25b6e8:
    // 0x25b6e8: 0x0  nop
    ctx->pc = 0x25b6e8u;
    // NOP
label_25b6ec:
    // 0x25b6ec: 0x0  nop
    ctx->pc = 0x25b6ecu;
    // NOP
label_25b6f0:
    // 0x25b6f0: 0x4d44  .word       0x00004D44                   # sllv        $t1, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b6f0u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_25b6f4:
    // 0x25b6f4: 0x8020  add         $s0, $zero, $zero
    ctx->pc = 0x25b6f4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_25b6f8:
    // 0x25b6f8: 0x0  nop
    ctx->pc = 0x25b6f8u;
    // NOP
label_25b6fc:
    // 0x25b6fc: 0x0  nop
    ctx->pc = 0x25b6fcu;
    // NOP
label_25b700:
    // 0x25b700: 0x4d55  .word       0x00004D55                   # INVALID     $zero, $zero, 0x4D55 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b700u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x25B700 raw=0x00004D55"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25b704:
    // 0x25b704: 0x5370  tge         $zero, $zero, 333
    ctx->pc = 0x25b704u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25b708:
    // 0x25b708: 0x0  nop
    ctx->pc = 0x25b708u;
    // NOP
label_25b70c:
    // 0x25b70c: 0x0  nop
    ctx->pc = 0x25b70cu;
    // NOP
label_25b710:
    // 0x25b710: 0x4d60  .word       0x00004D60                   # add         $t1, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b710u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_25b714:
    // 0x25b714: 0x5150  .word       0x00005150                   # mfhi        $t2 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b714u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_25b718:
    // 0x25b718: 0x0  nop
    ctx->pc = 0x25b718u;
    // NOP
label_25b71c:
    // 0x25b71c: 0x0  nop
    ctx->pc = 0x25b71cu;
    // NOP
label_25b720:
    // 0x25b720: 0x4d6b  .word       0x00004D6B                   # sltu        $t1, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b720u;
    SET_GPR_U64(ctx, 9, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_25b724:
    // 0x25b724: 0x3ac0  sll         $a3, $zero, 11
    ctx->pc = 0x25b724u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 0), 11));
label_25b728:
    // 0x25b728: 0x0  nop
    ctx->pc = 0x25b728u;
    // NOP
label_25b72c:
    // 0x25b72c: 0x0  nop
    ctx->pc = 0x25b72cu;
    // NOP
label_25b730:
    // 0x25b730: 0x4d73  tltu        $zero, $zero, 309
    ctx->pc = 0x25b730u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25b734:
    // 0x25b734: 0x6150  .word       0x00006150                   # mfhi        $t4 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b734u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_25b738:
    // 0x25b738: 0x0  nop
    ctx->pc = 0x25b738u;
    // NOP
label_25b73c:
    // 0x25b73c: 0x0  nop
    ctx->pc = 0x25b73cu;
    // NOP
label_25b740:
    // 0x25b740: 0x4d80  sll         $t1, $zero, 22
    ctx->pc = 0x25b740u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), 22));
label_25b744:
    // 0x25b744: 0x4ed0  .word       0x00004ED0                   # mfhi        $t1 # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b744u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_25b748:
    // 0x25b748: 0x0  nop
    ctx->pc = 0x25b748u;
    // NOP
label_25b74c:
    // 0x25b74c: 0x0  nop
    ctx->pc = 0x25b74cu;
    // NOP
label_25b750:
    // 0x25b750: 0x4d8a  .word       0x00004D8A                   # movz        $t1, $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b750u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 0));
label_25b754:
    // 0x25b754: 0x3490  .word       0x00003490                   # mfhi        $a2 # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b754u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_25b758:
    // 0x25b758: 0x0  nop
    ctx->pc = 0x25b758u;
    // NOP
label_25b75c:
    // 0x25b75c: 0x0  nop
    ctx->pc = 0x25b75cu;
    // NOP
label_25b760:
    // 0x25b760: 0x4d91  .word       0x00004D91                   # mthi        $zero # 00004D80 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b760u;
    ctx->hi = GPR_U64(ctx, 0);
label_25b764:
    // 0x25b764: 0x37e0  .word       0x000037E0                   # add         $a2, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b764u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 6, (int32_t)result);     } }
label_25b768:
    // 0x25b768: 0x0  nop
    ctx->pc = 0x25b768u;
    // NOP
label_25b76c:
    // 0x25b76c: 0x0  nop
    ctx->pc = 0x25b76cu;
    // NOP
label_25b770:
    // 0x25b770: 0x4d98  .word       0x00004D98                   # mult        $t1, $zero, $zero # 00000580 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x25b770u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
label_25b774:
    // 0x25b774: 0x4100  sll         $t0, $zero, 4
    ctx->pc = 0x25b774u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 4));
label_25b778:
    // 0x25b778: 0x0  nop
    ctx->pc = 0x25b778u;
    // NOP
label_25b77c:
    // 0x25b77c: 0x0  nop
    ctx->pc = 0x25b77cu;
    // NOP
label_25b780:
    // 0x25b780: 0x4da1  .word       0x00004DA1                   # addu        $t1, $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b780u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_25b784:
    // 0x25b784: 0x6e30  tge         $zero, $zero, 440
    ctx->pc = 0x25b784u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25b788:
    // 0x25b788: 0x0  nop
    ctx->pc = 0x25b788u;
    // NOP
label_25b78c:
    // 0x25b78c: 0x0  nop
    ctx->pc = 0x25b78cu;
    // NOP
label_25b790:
    // 0x25b790: 0x4daf  .word       0x00004DAF                   # dsubu       $t1, $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b790u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_25b794:
    // 0x25b794: 0x4840  sll         $t1, $zero, 1
    ctx->pc = 0x25b794u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), 1));
label_25b798:
    // 0x25b798: 0x0  nop
    ctx->pc = 0x25b798u;
    // NOP
label_25b79c:
    // 0x25b79c: 0x0  nop
    ctx->pc = 0x25b79cu;
    // NOP
label_25b7a0:
    // 0x25b7a0: 0x4db9  .word       0x00004DB9                   # INVALID     $zero, $zero, 0x4DB9 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b7a0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x25B7A0 raw=0x00004DB9"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25b7a4:
    // 0x25b7a4: 0x72c0  sll         $t6, $zero, 11
    ctx->pc = 0x25b7a4u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 0), 11));
label_25b7a8:
    // 0x25b7a8: 0x0  nop
    ctx->pc = 0x25b7a8u;
    // NOP
label_25b7ac:
    // 0x25b7ac: 0x0  nop
    ctx->pc = 0x25b7acu;
    // NOP
label_25b7b0:
    // 0x25b7b0: 0x4dc8  .word       0x00004DC8                   # jr          $zero # 00004DC0 <InstrIdType: CPU_SPECIAL>
label_25b7b4:
    if (ctx->pc == 0x25B7B4u) {
        ctx->pc = 0x25B7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B7B0u;
        // 0x25b7b4: 0x3a30  tge         $zero, $zero, 232 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x25B7B8u;
        goto label_25b7b8;
    }
    ctx->pc = 0x25B7B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x25B7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B7B0u;
        // 0x25b7b4: 0x3a30  tge         $zero, $zero, 232 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25B7B0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x25B7B8u;
label_25b7b8:
    // 0x25b7b8: 0x0  nop
    ctx->pc = 0x25b7b8u;
    // NOP
label_25b7bc:
    // 0x25b7bc: 0x0  nop
    ctx->pc = 0x25b7bcu;
    // NOP
label_25b7c0:
    // 0x25b7c0: 0x4dd0  .word       0x00004DD0                   # mfhi        $t1 # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b7c0u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_25b7c4:
    // 0x25b7c4: 0x49e0  .word       0x000049E0                   # add         $t1, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b7c4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_25b7c8:
    // 0x25b7c8: 0x0  nop
    ctx->pc = 0x25b7c8u;
    // NOP
label_25b7cc:
    // 0x25b7cc: 0x0  nop
    ctx->pc = 0x25b7ccu;
    // NOP
label_25b7d0:
    // 0x25b7d0: 0x4dda  .word       0x00004DDA                   # div         $t1, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b7d0u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_25b7d4:
    // 0x25b7d4: 0x3db0  tge         $zero, $zero, 246
    ctx->pc = 0x25b7d4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25b7d8:
    // 0x25b7d8: 0x0  nop
    ctx->pc = 0x25b7d8u;
    // NOP
label_25b7dc:
    // 0x25b7dc: 0x0  nop
    ctx->pc = 0x25b7dcu;
    // NOP
label_25b7e0:
    // 0x25b7e0: 0x4de2  .word       0x00004DE2                   # neg         $t1, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b7e0u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 9, (int32_t)tmp); }
label_25b7e4:
    // 0x25b7e4: 0x3ff0  tge         $zero, $zero, 255
    ctx->pc = 0x25b7e4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25b7e8:
    // 0x25b7e8: 0x0  nop
    ctx->pc = 0x25b7e8u;
    // NOP
label_25b7ec:
    // 0x25b7ec: 0x0  nop
    ctx->pc = 0x25b7ecu;
    // NOP
label_25b7f0:
    // 0x25b7f0: 0x4dea  .word       0x00004DEA                   # slt         $t1, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b7f0u;
    SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_25b7f4:
    // 0x25b7f4: 0x8020  add         $s0, $zero, $zero
    ctx->pc = 0x25b7f4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_25b7f8:
    // 0x25b7f8: 0x0  nop
    ctx->pc = 0x25b7f8u;
    // NOP
label_25b7fc:
    // 0x25b7fc: 0x0  nop
    ctx->pc = 0x25b7fcu;
    // NOP
label_25b800:
    // 0x25b800: 0x4dfb  dsra        $t1, $zero, 23
    ctx->pc = 0x25b800u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 0) >> 23);
label_25b804:
    // 0x25b804: 0x4190  .word       0x00004190                   # mfhi        $t0 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b804u;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_25b808:
    // 0x25b808: 0x0  nop
    ctx->pc = 0x25b808u;
    // NOP
label_25b80c:
    // 0x25b80c: 0x0  nop
    ctx->pc = 0x25b80cu;
    // NOP
label_25b810:
    // 0x25b810: 0x4e04  .word       0x00004E04                   # sllv        $t1, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b810u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_25b814:
    // 0x25b814: 0x8460  .word       0x00008460                   # add         $s0, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b814u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_25b818:
    // 0x25b818: 0x0  nop
    ctx->pc = 0x25b818u;
    // NOP
label_25b81c:
    // 0x25b81c: 0x0  nop
    ctx->pc = 0x25b81cu;
    // NOP
label_25b820:
    // 0x25b820: 0x4e15  .word       0x00004E15                   # INVALID     $zero, $zero, 0x4E15 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b820u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x25B820 raw=0x00004E15"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25b824:
    // 0x25b824: 0x48c0  sll         $t1, $zero, 3
    ctx->pc = 0x25b824u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), 3));
label_25b828:
    // 0x25b828: 0x0  nop
    ctx->pc = 0x25b828u;
    // NOP
label_25b82c:
    // 0x25b82c: 0x0  nop
    ctx->pc = 0x25b82cu;
    // NOP
label_25b830:
    // 0x25b830: 0x4e1f  .word       0x00004E1F                   # ddivu       $t1, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b830u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x25B830 raw=0x00004E1F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25b834:
    // 0x25b834: 0x4120  .word       0x00004120                   # add         $t0, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b834u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
label_25b838:
    // 0x25b838: 0x0  nop
    ctx->pc = 0x25b838u;
    // NOP
label_25b83c:
    // 0x25b83c: 0x0  nop
    ctx->pc = 0x25b83cu;
    // NOP
label_25b840:
    // 0x25b840: 0x4e28  .word       0x00004E28                   # mfsa        $t1 # 00000600 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x25b840u;
    SET_GPR_U32(ctx, 9, ctx->sa);
label_25b844:
    // 0x25b844: 0x2f60  .word       0x00002F60                   # add         $a1, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b844u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 5, (int32_t)result);     } }
label_25b848:
    // 0x25b848: 0x0  nop
    ctx->pc = 0x25b848u;
    // NOP
label_25b84c:
    // 0x25b84c: 0x0  nop
    ctx->pc = 0x25b84cu;
    // NOP
label_25b850:
    // 0x25b850: 0x4e2e  .word       0x00004E2E                   # dsub        $t1, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b850u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 9, r); }
label_25b854:
    // 0x25b854: 0x35b0  tge         $zero, $zero, 214
    ctx->pc = 0x25b854u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25b858:
    // 0x25b858: 0x0  nop
    ctx->pc = 0x25b858u;
    // NOP
label_25b85c:
    // 0x25b85c: 0x0  nop
    ctx->pc = 0x25b85cu;
    // NOP
label_25b860:
    // 0x25b860: 0x4e35  .word       0x00004E35                   # INVALID     $zero, $zero, 0x4E35 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b860u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x25B860 raw=0x00004E35"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25b864:
    // 0x25b864: 0x3840  sll         $a3, $zero, 1
    ctx->pc = 0x25b864u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 0), 1));
label_25b868:
    // 0x25b868: 0x0  nop
    ctx->pc = 0x25b868u;
    // NOP
label_25b86c:
    // 0x25b86c: 0x0  nop
    ctx->pc = 0x25b86cu;
    // NOP
label_25b870:
    // 0x25b870: 0x4e3d  .word       0x00004E3D                   # INVALID     $zero, $zero, 0x4E3D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b870u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x25B870 raw=0x00004E3D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25b874:
    // 0x25b874: 0x41a0  .word       0x000041A0                   # add         $t0, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b874u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
label_25b878:
    // 0x25b878: 0x0  nop
    ctx->pc = 0x25b878u;
    // NOP
label_25b87c:
    // 0x25b87c: 0x0  nop
    ctx->pc = 0x25b87cu;
    // NOP
label_25b880:
    // 0x25b880: 0x4e46  .word       0x00004E46                   # srlv        $t1, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b880u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_25b884:
    // 0x25b884: 0x2310  .word       0x00002310                   # mfhi        $a0 # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b884u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_25b888:
    // 0x25b888: 0x0  nop
    ctx->pc = 0x25b888u;
    // NOP
label_25b88c:
    // 0x25b88c: 0x0  nop
    ctx->pc = 0x25b88cu;
    // NOP
label_25b890:
    // 0x25b890: 0x4e4b  .word       0x00004E4B                   # movn        $t1, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b890u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 0));
label_25b894:
    // 0x25b894: 0x1cc0  sll         $v1, $zero, 19
    ctx->pc = 0x25b894u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
label_25b898:
    // 0x25b898: 0x0  nop
    ctx->pc = 0x25b898u;
    // NOP
label_25b89c:
    // 0x25b89c: 0x0  nop
    ctx->pc = 0x25b89cu;
    // NOP
label_25b8a0:
    // 0x25b8a0: 0x4e4f  .word       0x00004E4F                   # sync.p # 00004800 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b8a0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_25b8a4:
    // 0x25b8a4: 0x2a10  .word       0x00002A10                   # mfhi        $a1 # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b8a4u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_25b8a8:
    // 0x25b8a8: 0x0  nop
    ctx->pc = 0x25b8a8u;
    // NOP
label_25b8ac:
    // 0x25b8ac: 0x0  nop
    ctx->pc = 0x25b8acu;
    // NOP
label_25b8b0:
    // 0x25b8b0: 0x4e55  .word       0x00004E55                   # INVALID     $zero, $zero, 0x4E55 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b8b0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x25B8B0 raw=0x00004E55"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25b8b4:
    // 0x25b8b4: 0x1ca0  .word       0x00001CA0                   # add         $v1, $zero, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b8b4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_25b8b8:
    // 0x25b8b8: 0x0  nop
    ctx->pc = 0x25b8b8u;
    // NOP
label_25b8bc:
    // 0x25b8bc: 0x0  nop
    ctx->pc = 0x25b8bcu;
    // NOP
label_25b8c0:
    // 0x25b8c0: 0x4e59  .word       0x00004E59                   # multu       $zero, $zero # 00004E40 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b8c0u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
label_25b8c4:
    // 0x25b8c4: 0x2a10  .word       0x00002A10                   # mfhi        $a1 # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b8c4u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_25b8c8:
    // 0x25b8c8: 0x0  nop
    ctx->pc = 0x25b8c8u;
    // NOP
label_25b8cc:
    // 0x25b8cc: 0x0  nop
    ctx->pc = 0x25b8ccu;
    // NOP
label_25b8d0:
    // 0x25b8d0: 0x4e5f  .word       0x00004E5F                   # ddivu       $t1, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b8d0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x25B8D0 raw=0x00004E5F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25b8d4:
    // 0x25b8d4: 0x3070  tge         $zero, $zero, 193
    ctx->pc = 0x25b8d4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25b8d8:
    // 0x25b8d8: 0x0  nop
    ctx->pc = 0x25b8d8u;
    // NOP
label_25b8dc:
    // 0x25b8dc: 0x0  nop
    ctx->pc = 0x25b8dcu;
    // NOP
label_25b8e0:
    // 0x25b8e0: 0x4e66  .word       0x00004E66                   # xor         $t1, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b8e0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_25b8e4:
    // 0x25b8e4: 0x17c0  sll         $v0, $zero, 31
    ctx->pc = 0x25b8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 0), 31));
label_25b8e8:
    // 0x25b8e8: 0x0  nop
    ctx->pc = 0x25b8e8u;
    // NOP
label_25b8ec:
    // 0x25b8ec: 0x0  nop
    ctx->pc = 0x25b8ecu;
    // NOP
label_25b8f0:
    // 0x25b8f0: 0x4e69  .word       0x00004E69                   # mtsa        $zero # 00004E40 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x25b8f0u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_25b8f4:
    // 0x25b8f4: 0x1f10  .word       0x00001F10                   # mfhi        $v1 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b8f4u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_25b8f8:
    // 0x25b8f8: 0x0  nop
    ctx->pc = 0x25b8f8u;
    // NOP
label_25b8fc:
    // 0x25b8fc: 0x0  nop
    ctx->pc = 0x25b8fcu;
    // NOP
label_25b900:
    // 0x25b900: 0x4e6d  .word       0x00004E6D                   # daddu       $t1, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b900u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25b904:
    // 0x25b904: 0x3330  tge         $zero, $zero, 204
    ctx->pc = 0x25b904u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25b908:
    // 0x25b908: 0x0  nop
    ctx->pc = 0x25b908u;
    // NOP
label_25b90c:
    // 0x25b90c: 0x0  nop
    ctx->pc = 0x25b90cu;
    // NOP
label_25b910:
    // 0x25b910: 0x4e74  teq         $zero, $zero, 313
    ctx->pc = 0x25b910u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25b914:
    // 0x25b914: 0x17b0  tge         $zero, $zero, 94
    ctx->pc = 0x25b914u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25b918:
    // 0x25b918: 0x0  nop
    ctx->pc = 0x25b918u;
    // NOP
label_25b91c:
    // 0x25b91c: 0x0  nop
    ctx->pc = 0x25b91cu;
    // NOP
label_25b920:
    // 0x25b920: 0x4e77  .word       0x00004E77                   # INVALID     $zero, $zero, 0x4E77 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b920u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x25B920 raw=0x00004E77"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25b924:
    // 0x25b924: 0x2810  mfhi        $a1
    ctx->pc = 0x25b924u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_25b928:
    // 0x25b928: 0x0  nop
    ctx->pc = 0x25b928u;
    // NOP
label_25b92c:
    // 0x25b92c: 0x0  nop
    ctx->pc = 0x25b92cu;
    // NOP
label_25b930:
    // 0x25b930: 0x4e7d  .word       0x00004E7D                   # INVALID     $zero, $zero, 0x4E7D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b930u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x25B930 raw=0x00004E7D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25b934:
    // 0x25b934: 0x27e0  .word       0x000027E0                   # add         $a0, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b934u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 4, (int32_t)result);     } }
label_25b938:
    // 0x25b938: 0x0  nop
    ctx->pc = 0x25b938u;
    // NOP
label_25b93c:
    // 0x25b93c: 0x0  nop
    ctx->pc = 0x25b93cu;
    // NOP
label_25b940:
    // 0x25b940: 0x4e82  srl         $t1, $zero, 26
    ctx->pc = 0x25b940u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 0), 26));
label_25b944:
    // 0x25b944: 0x2200  sll         $a0, $zero, 8
    ctx->pc = 0x25b944u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 0), 8));
label_25b948:
    // 0x25b948: 0x0  nop
    ctx->pc = 0x25b948u;
    // NOP
label_25b94c:
    // 0x25b94c: 0x0  nop
    ctx->pc = 0x25b94cu;
    // NOP
label_25b950:
    // 0x25b950: 0x4e87  .word       0x00004E87                   # srav        $t1, $zero, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b950u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_25b954:
    // 0x25b954: 0x1ce0  .word       0x00001CE0                   # add         $v1, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b954u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_25b958:
    // 0x25b958: 0x0  nop
    ctx->pc = 0x25b958u;
    // NOP
label_25b95c:
    // 0x25b95c: 0x0  nop
    ctx->pc = 0x25b95cu;
    // NOP
label_25b960:
    // 0x25b960: 0x4e8b  .word       0x00004E8B                   # movn        $t1, $zero, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b960u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 0));
label_25b964:
    // 0x25b964: 0x1cc0  sll         $v1, $zero, 19
    ctx->pc = 0x25b964u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
label_25b968:
    // 0x25b968: 0x0  nop
    ctx->pc = 0x25b968u;
    // NOP
label_25b96c:
    // 0x25b96c: 0x0  nop
    ctx->pc = 0x25b96cu;
    // NOP
label_25b970:
    // 0x25b970: 0x4e8f  .word       0x00004E8F                   # sync.p # 00004800 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b970u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_25b974:
    // 0x25b974: 0x8020  add         $s0, $zero, $zero
    ctx->pc = 0x25b974u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_25b978:
    // 0x25b978: 0x0  nop
    ctx->pc = 0x25b978u;
    // NOP
label_25b97c:
    // 0x25b97c: 0x0  nop
    ctx->pc = 0x25b97cu;
    // NOP
label_25b980:
    // 0x25b980: 0x4ea0  .word       0x00004EA0                   # add         $t1, $zero, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b980u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_25b984:
    // 0x25b984: 0x8020  add         $s0, $zero, $zero
    ctx->pc = 0x25b984u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_25b988:
    // 0x25b988: 0x0  nop
    ctx->pc = 0x25b988u;
    // NOP
label_25b98c:
    // 0x25b98c: 0x0  nop
    ctx->pc = 0x25b98cu;
    // NOP
label_25b990:
    // 0x25b990: 0x4eb1  tgeu        $zero, $zero, 314
    ctx->pc = 0x25b990u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25b994:
    // 0x25b994: 0x13e0  .word       0x000013E0                   # add         $v0, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b994u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 2, (int32_t)result);     } }
label_25b998:
    // 0x25b998: 0x0  nop
    ctx->pc = 0x25b998u;
    // NOP
label_25b99c:
    // 0x25b99c: 0x0  nop
    ctx->pc = 0x25b99cu;
    // NOP
label_25b9a0:
    // 0x25b9a0: 0x4eb4  teq         $zero, $zero, 314
    ctx->pc = 0x25b9a0u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25b9a4:
    // 0x25b9a4: 0x1db0  tge         $zero, $zero, 118
    ctx->pc = 0x25b9a4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25b9a8:
    // 0x25b9a8: 0x0  nop
    ctx->pc = 0x25b9a8u;
    // NOP
label_25b9ac:
    // 0x25b9ac: 0x0  nop
    ctx->pc = 0x25b9acu;
    // NOP
label_25b9b0:
    // 0x25b9b0: 0x4eb8  dsll        $t1, $zero, 26
    ctx->pc = 0x25b9b0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) << 26);
label_25b9b4:
    // 0x25b9b4: 0x1fa0  .word       0x00001FA0                   # add         $v1, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b9b4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_25b9b8:
    // 0x25b9b8: 0x0  nop
    ctx->pc = 0x25b9b8u;
    // NOP
label_25b9bc:
    // 0x25b9bc: 0x0  nop
    ctx->pc = 0x25b9bcu;
    // NOP
label_25b9c0:
    // 0x25b9c0: 0x4ebc  dsll32      $t1, $zero, 26
    ctx->pc = 0x25b9c0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) << (32 + 26));
label_25b9c4:
    // 0x25b9c4: 0x1e70  tge         $zero, $zero, 121
    ctx->pc = 0x25b9c4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25b9c8:
    // 0x25b9c8: 0x0  nop
    ctx->pc = 0x25b9c8u;
    // NOP
label_25b9cc:
    // 0x25b9cc: 0x0  nop
    ctx->pc = 0x25b9ccu;
    // NOP
label_25b9d0:
    // 0x25b9d0: 0x4ec0  sll         $t1, $zero, 27
    ctx->pc = 0x25b9d0u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), 27));
label_25b9d4:
    // 0x25b9d4: 0x14c0  sll         $v0, $zero, 19
    ctx->pc = 0x25b9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
label_25b9d8:
    // 0x25b9d8: 0x0  nop
    ctx->pc = 0x25b9d8u;
    // NOP
label_25b9dc:
    // 0x25b9dc: 0x0  nop
    ctx->pc = 0x25b9dcu;
    // NOP
label_25b9e0:
    // 0x25b9e0: 0x4ec3  sra         $t1, $zero, 27
    ctx->pc = 0x25b9e0u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 0), 27));
label_25b9e4:
    // 0x25b9e4: 0x1dd0  .word       0x00001DD0                   # mfhi        $v1 # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b9e4u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_25b9e8:
    // 0x25b9e8: 0x0  nop
    ctx->pc = 0x25b9e8u;
    // NOP
label_25b9ec:
    // 0x25b9ec: 0x0  nop
    ctx->pc = 0x25b9ecu;
    // NOP
label_25b9f0:
    // 0x25b9f0: 0x4ec7  .word       0x00004EC7                   # srav        $t1, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b9f0u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_25b9f4:
    // 0x25b9f4: 0x3470  tge         $zero, $zero, 209
    ctx->pc = 0x25b9f4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25b9f8:
    // 0x25b9f8: 0x0  nop
    ctx->pc = 0x25b9f8u;
    // NOP
label_25b9fc:
    // 0x25b9fc: 0x0  nop
    ctx->pc = 0x25b9fcu;
    // NOP
label_25ba00:
    // 0x25ba00: 0x4ece  .word       0x00004ECE                   # INVALID     $zero, $zero, 0x4ECE # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25ba00u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x25BA00 raw=0x00004ECE"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25ba04:
    // 0x25ba04: 0x1600  sll         $v0, $zero, 24
    ctx->pc = 0x25ba04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 0), 24));
label_25ba08:
    // 0x25ba08: 0x0  nop
    ctx->pc = 0x25ba08u;
    // NOP
label_25ba0c:
    // 0x25ba0c: 0x0  nop
    ctx->pc = 0x25ba0cu;
    // NOP
label_25ba10:
    // 0x25ba10: 0x4ed1  .word       0x00004ED1                   # mthi        $zero # 00004EC0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25ba10u;
    ctx->hi = GPR_U64(ctx, 0);
label_25ba14:
    // 0x25ba14: 0x13c0  sll         $v0, $zero, 15
    ctx->pc = 0x25ba14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 0), 15));
label_25ba18:
    // 0x25ba18: 0x0  nop
    ctx->pc = 0x25ba18u;
    // NOP
label_25ba1c:
    // 0x25ba1c: 0x0  nop
    ctx->pc = 0x25ba1cu;
    // NOP
label_25ba20:
    // 0x25ba20: 0x4ed4  .word       0x00004ED4                   # dsllv       $t1, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25ba20u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_25ba24:
    // 0x25ba24: 0x1bc0  sll         $v1, $zero, 15
    ctx->pc = 0x25ba24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 0), 15));
label_25ba28:
    // 0x25ba28: 0x0  nop
    ctx->pc = 0x25ba28u;
    // NOP
label_25ba2c:
    // 0x25ba2c: 0x0  nop
    ctx->pc = 0x25ba2cu;
    // NOP
label_25ba30:
    // 0x25ba30: 0x4ed8  .word       0x00004ED8                   # mult        $t1, $zero, $zero # 000006C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x25ba30u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
label_25ba34:
    // 0x25ba34: 0x2170  tge         $zero, $zero, 133
    ctx->pc = 0x25ba34u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25ba38:
    // 0x25ba38: 0x0  nop
    ctx->pc = 0x25ba38u;
    // NOP
label_25ba3c:
    // 0x25ba3c: 0x0  nop
    ctx->pc = 0x25ba3cu;
    // NOP
label_25ba40:
    // 0x25ba40: 0x4edd  .word       0x00004EDD                   # dmultu      $zero, $zero # 00004EC0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25ba40u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x25BA40 raw=0x00004EDD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25ba44:
    // 0x25ba44: 0x1a00  sll         $v1, $zero, 8
    ctx->pc = 0x25ba44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 0), 8));
label_25ba48:
    // 0x25ba48: 0x0  nop
    ctx->pc = 0x25ba48u;
    // NOP
label_25ba4c:
    // 0x25ba4c: 0x0  nop
    ctx->pc = 0x25ba4cu;
    // NOP
label_25ba50:
    // 0x25ba50: 0x4ee1  .word       0x00004EE1                   # addu        $t1, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25ba50u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_25ba54:
    // 0x25ba54: 0x3200  sll         $a2, $zero, 8
    ctx->pc = 0x25ba54u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 0), 8));
label_25ba58:
    // 0x25ba58: 0x0  nop
    ctx->pc = 0x25ba58u;
    // NOP
label_25ba5c:
    // 0x25ba5c: 0x0  nop
    ctx->pc = 0x25ba5cu;
    // NOP
label_25ba60:
    // 0x25ba60: 0x4ee8  .word       0x00004EE8                   # mfsa        $t1 # 000006C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x25ba60u;
    SET_GPR_U32(ctx, 9, ctx->sa);
label_25ba64:
    // 0x25ba64: 0x1f90  .word       0x00001F90                   # mfhi        $v1 # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25ba64u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_25ba68:
    // 0x25ba68: 0x0  nop
    ctx->pc = 0x25ba68u;
    // NOP
label_25ba6c:
    // 0x25ba6c: 0x0  nop
    ctx->pc = 0x25ba6cu;
    // NOP
label_25ba70:
    // 0x25ba70: 0x4eec  .word       0x00004EEC                   # dadd        $t1, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25ba70u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 9, r); }
label_25ba74:
    // 0x25ba74: 0x2690  .word       0x00002690                   # mfhi        $a0 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25ba74u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_25ba78:
    // 0x25ba78: 0x0  nop
    ctx->pc = 0x25ba78u;
    // NOP
label_25ba7c:
    // 0x25ba7c: 0x0  nop
    ctx->pc = 0x25ba7cu;
    // NOP
label_25ba80:
    // 0x25ba80: 0x4ef1  tgeu        $zero, $zero, 315
    ctx->pc = 0x25ba80u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25ba84:
    // 0x25ba84: 0x8020  add         $s0, $zero, $zero
    ctx->pc = 0x25ba84u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_25ba88:
    // 0x25ba88: 0x0  nop
    ctx->pc = 0x25ba88u;
    // NOP
label_25ba8c:
    // 0x25ba8c: 0x0  nop
    ctx->pc = 0x25ba8cu;
    // NOP
label_25ba90:
    // 0x25ba90: 0x4f02  srl         $t1, $zero, 28
    ctx->pc = 0x25ba90u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 0), 28));
label_25ba94:
    // 0x25ba94: 0x1660  .word       0x00001660                   # add         $v0, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25ba94u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 2, (int32_t)result);     } }
    ctx->pc = 0x25ba98u;
    return;
}
