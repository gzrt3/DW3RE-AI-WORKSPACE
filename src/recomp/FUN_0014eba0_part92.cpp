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


void FUN_0014eba0_part92(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x17b290u: goto label_17b290;
        case 0x17b294u: goto label_17b294;
        case 0x17b298u: goto label_17b298;
        case 0x17b29cu: goto label_17b29c;
        case 0x17b2a0u: goto label_17b2a0;
        case 0x17b2a4u: goto label_17b2a4;
        case 0x17b2a8u: goto label_17b2a8;
        case 0x17b2acu: goto label_17b2ac;
        case 0x17b2b0u: goto label_17b2b0;
        case 0x17b2b4u: goto label_17b2b4;
        case 0x17b2b8u: goto label_17b2b8;
        case 0x17b2bcu: goto label_17b2bc;
        case 0x17b2c0u: goto label_17b2c0;
        case 0x17b2c4u: goto label_17b2c4;
        case 0x17b2c8u: goto label_17b2c8;
        case 0x17b2ccu: goto label_17b2cc;
        case 0x17b2d0u: goto label_17b2d0;
        case 0x17b2d4u: goto label_17b2d4;
        case 0x17b2d8u: goto label_17b2d8;
        case 0x17b2dcu: goto label_17b2dc;
        case 0x17b2e0u: goto label_17b2e0;
        case 0x17b2e4u: goto label_17b2e4;
        case 0x17b2e8u: goto label_17b2e8;
        case 0x17b2ecu: goto label_17b2ec;
        case 0x17b2f0u: goto label_17b2f0;
        case 0x17b2f4u: goto label_17b2f4;
        case 0x17b2f8u: goto label_17b2f8;
        case 0x17b2fcu: goto label_17b2fc;
        case 0x17b300u: goto label_17b300;
        case 0x17b304u: goto label_17b304;
        case 0x17b308u: goto label_17b308;
        case 0x17b30cu: goto label_17b30c;
        case 0x17b310u: goto label_17b310;
        case 0x17b314u: goto label_17b314;
        case 0x17b318u: goto label_17b318;
        case 0x17b31cu: goto label_17b31c;
        case 0x17b320u: goto label_17b320;
        case 0x17b324u: goto label_17b324;
        case 0x17b328u: goto label_17b328;
        case 0x17b32cu: goto label_17b32c;
        case 0x17b330u: goto label_17b330;
        case 0x17b334u: goto label_17b334;
        case 0x17b338u: goto label_17b338;
        case 0x17b33cu: goto label_17b33c;
        case 0x17b340u: goto label_17b340;
        case 0x17b344u: goto label_17b344;
        case 0x17b348u: goto label_17b348;
        case 0x17b34cu: goto label_17b34c;
        case 0x17b350u: goto label_17b350;
        case 0x17b354u: goto label_17b354;
        case 0x17b358u: goto label_17b358;
        case 0x17b35cu: goto label_17b35c;
        case 0x17b360u: goto label_17b360;
        case 0x17b364u: goto label_17b364;
        case 0x17b368u: goto label_17b368;
        case 0x17b36cu: goto label_17b36c;
        case 0x17b370u: goto label_17b370;
        case 0x17b374u: goto label_17b374;
        case 0x17b378u: goto label_17b378;
        case 0x17b37cu: goto label_17b37c;
        case 0x17b380u: goto label_17b380;
        case 0x17b384u: goto label_17b384;
        case 0x17b388u: goto label_17b388;
        case 0x17b38cu: goto label_17b38c;
        case 0x17b390u: goto label_17b390;
        case 0x17b394u: goto label_17b394;
        case 0x17b398u: goto label_17b398;
        case 0x17b39cu: goto label_17b39c;
        case 0x17b3a0u: goto label_17b3a0;
        case 0x17b3a4u: goto label_17b3a4;
        case 0x17b3a8u: goto label_17b3a8;
        case 0x17b3acu: goto label_17b3ac;
        case 0x17b3b0u: goto label_17b3b0;
        case 0x17b3b4u: goto label_17b3b4;
        case 0x17b3b8u: goto label_17b3b8;
        case 0x17b3bcu: goto label_17b3bc;
        case 0x17b3c0u: goto label_17b3c0;
        case 0x17b3c4u: goto label_17b3c4;
        case 0x17b3c8u: goto label_17b3c8;
        case 0x17b3ccu: goto label_17b3cc;
        case 0x17b3d0u: goto label_17b3d0;
        case 0x17b3d4u: goto label_17b3d4;
        case 0x17b3d8u: goto label_17b3d8;
        case 0x17b3dcu: goto label_17b3dc;
        case 0x17b3e0u: goto label_17b3e0;
        case 0x17b3e4u: goto label_17b3e4;
        case 0x17b3e8u: goto label_17b3e8;
        case 0x17b3ecu: goto label_17b3ec;
        case 0x17b3f0u: goto label_17b3f0;
        case 0x17b3f4u: goto label_17b3f4;
        case 0x17b3f8u: goto label_17b3f8;
        case 0x17b3fcu: goto label_17b3fc;
        case 0x17b400u: goto label_17b400;
        case 0x17b404u: goto label_17b404;
        case 0x17b408u: goto label_17b408;
        case 0x17b40cu: goto label_17b40c;
        case 0x17b410u: goto label_17b410;
        case 0x17b414u: goto label_17b414;
        case 0x17b418u: goto label_17b418;
        case 0x17b41cu: goto label_17b41c;
        case 0x17b420u: goto label_17b420;
        case 0x17b424u: goto label_17b424;
        case 0x17b428u: goto label_17b428;
        case 0x17b42cu: goto label_17b42c;
        case 0x17b430u: goto label_17b430;
        case 0x17b434u: goto label_17b434;
        case 0x17b438u: goto label_17b438;
        case 0x17b43cu: goto label_17b43c;
        case 0x17b440u: goto label_17b440;
        case 0x17b444u: goto label_17b444;
        case 0x17b448u: goto label_17b448;
        case 0x17b44cu: goto label_17b44c;
        case 0x17b450u: goto label_17b450;
        case 0x17b454u: goto label_17b454;
        case 0x17b458u: goto label_17b458;
        case 0x17b45cu: goto label_17b45c;
        case 0x17b460u: goto label_17b460;
        case 0x17b464u: goto label_17b464;
        case 0x17b468u: goto label_17b468;
        case 0x17b46cu: goto label_17b46c;
        case 0x17b470u: goto label_17b470;
        case 0x17b474u: goto label_17b474;
        case 0x17b478u: goto label_17b478;
        case 0x17b47cu: goto label_17b47c;
        case 0x17b480u: goto label_17b480;
        case 0x17b484u: goto label_17b484;
        case 0x17b488u: goto label_17b488;
        case 0x17b48cu: goto label_17b48c;
        case 0x17b490u: goto label_17b490;
        case 0x17b494u: goto label_17b494;
        case 0x17b498u: goto label_17b498;
        case 0x17b49cu: goto label_17b49c;
        case 0x17b4a0u: goto label_17b4a0;
        case 0x17b4a4u: goto label_17b4a4;
        case 0x17b4a8u: goto label_17b4a8;
        case 0x17b4acu: goto label_17b4ac;
        case 0x17b4b0u: goto label_17b4b0;
        case 0x17b4b4u: goto label_17b4b4;
        case 0x17b4b8u: goto label_17b4b8;
        case 0x17b4bcu: goto label_17b4bc;
        case 0x17b4c0u: goto label_17b4c0;
        case 0x17b4c4u: goto label_17b4c4;
        case 0x17b4c8u: goto label_17b4c8;
        case 0x17b4ccu: goto label_17b4cc;
        case 0x17b4d0u: goto label_17b4d0;
        case 0x17b4d4u: goto label_17b4d4;
        case 0x17b4d8u: goto label_17b4d8;
        case 0x17b4dcu: goto label_17b4dc;
        case 0x17b4e0u: goto label_17b4e0;
        case 0x17b4e4u: goto label_17b4e4;
        case 0x17b4e8u: goto label_17b4e8;
        case 0x17b4ecu: goto label_17b4ec;
        case 0x17b4f0u: goto label_17b4f0;
        case 0x17b4f4u: goto label_17b4f4;
        case 0x17b4f8u: goto label_17b4f8;
        case 0x17b4fcu: goto label_17b4fc;
        case 0x17b500u: goto label_17b500;
        case 0x17b504u: goto label_17b504;
        case 0x17b508u: goto label_17b508;
        case 0x17b50cu: goto label_17b50c;
        case 0x17b510u: goto label_17b510;
        case 0x17b514u: goto label_17b514;
        case 0x17b518u: goto label_17b518;
        case 0x17b51cu: goto label_17b51c;
        case 0x17b520u: goto label_17b520;
        case 0x17b524u: goto label_17b524;
        case 0x17b528u: goto label_17b528;
        case 0x17b52cu: goto label_17b52c;
        case 0x17b530u: goto label_17b530;
        case 0x17b534u: goto label_17b534;
        case 0x17b538u: goto label_17b538;
        case 0x17b53cu: goto label_17b53c;
        case 0x17b540u: goto label_17b540;
        case 0x17b544u: goto label_17b544;
        case 0x17b548u: goto label_17b548;
        case 0x17b54cu: goto label_17b54c;
        case 0x17b550u: goto label_17b550;
        case 0x17b554u: goto label_17b554;
        case 0x17b558u: goto label_17b558;
        case 0x17b55cu: goto label_17b55c;
        case 0x17b560u: goto label_17b560;
        case 0x17b564u: goto label_17b564;
        case 0x17b568u: goto label_17b568;
        case 0x17b56cu: goto label_17b56c;
        case 0x17b570u: goto label_17b570;
        case 0x17b574u: goto label_17b574;
        case 0x17b578u: goto label_17b578;
        case 0x17b57cu: goto label_17b57c;
        case 0x17b580u: goto label_17b580;
        case 0x17b584u: goto label_17b584;
        case 0x17b588u: goto label_17b588;
        case 0x17b58cu: goto label_17b58c;
        case 0x17b590u: goto label_17b590;
        case 0x17b594u: goto label_17b594;
        case 0x17b598u: goto label_17b598;
        case 0x17b59cu: goto label_17b59c;
        case 0x17b5a0u: goto label_17b5a0;
        case 0x17b5a4u: goto label_17b5a4;
        case 0x17b5a8u: goto label_17b5a8;
        case 0x17b5acu: goto label_17b5ac;
        case 0x17b5b0u: goto label_17b5b0;
        case 0x17b5b4u: goto label_17b5b4;
        case 0x17b5b8u: goto label_17b5b8;
        case 0x17b5bcu: goto label_17b5bc;
        case 0x17b5c0u: goto label_17b5c0;
        case 0x17b5c4u: goto label_17b5c4;
        case 0x17b5c8u: goto label_17b5c8;
        case 0x17b5ccu: goto label_17b5cc;
        case 0x17b5d0u: goto label_17b5d0;
        case 0x17b5d4u: goto label_17b5d4;
        case 0x17b5d8u: goto label_17b5d8;
        case 0x17b5dcu: goto label_17b5dc;
        case 0x17b5e0u: goto label_17b5e0;
        case 0x17b5e4u: goto label_17b5e4;
        case 0x17b5e8u: goto label_17b5e8;
        case 0x17b5ecu: goto label_17b5ec;
        case 0x17b5f0u: goto label_17b5f0;
        case 0x17b5f4u: goto label_17b5f4;
        case 0x17b5f8u: goto label_17b5f8;
        case 0x17b5fcu: goto label_17b5fc;
        case 0x17b600u: goto label_17b600;
        case 0x17b604u: goto label_17b604;
        case 0x17b608u: goto label_17b608;
        case 0x17b60cu: goto label_17b60c;
        case 0x17b610u: goto label_17b610;
        case 0x17b614u: goto label_17b614;
        case 0x17b618u: goto label_17b618;
        case 0x17b61cu: goto label_17b61c;
        case 0x17b620u: goto label_17b620;
        case 0x17b624u: goto label_17b624;
        case 0x17b628u: goto label_17b628;
        case 0x17b62cu: goto label_17b62c;
        case 0x17b630u: goto label_17b630;
        case 0x17b634u: goto label_17b634;
        case 0x17b638u: goto label_17b638;
        case 0x17b63cu: goto label_17b63c;
        case 0x17b640u: goto label_17b640;
        case 0x17b644u: goto label_17b644;
        case 0x17b648u: goto label_17b648;
        case 0x17b64cu: goto label_17b64c;
        case 0x17b650u: goto label_17b650;
        case 0x17b654u: goto label_17b654;
        case 0x17b658u: goto label_17b658;
        case 0x17b65cu: goto label_17b65c;
        case 0x17b660u: goto label_17b660;
        case 0x17b664u: goto label_17b664;
        case 0x17b668u: goto label_17b668;
        case 0x17b66cu: goto label_17b66c;
        case 0x17b670u: goto label_17b670;
        case 0x17b674u: goto label_17b674;
        case 0x17b678u: goto label_17b678;
        case 0x17b67cu: goto label_17b67c;
        case 0x17b680u: goto label_17b680;
        case 0x17b684u: goto label_17b684;
        case 0x17b688u: goto label_17b688;
        case 0x17b68cu: goto label_17b68c;
        case 0x17b690u: goto label_17b690;
        case 0x17b694u: goto label_17b694;
        case 0x17b698u: goto label_17b698;
        case 0x17b69cu: goto label_17b69c;
        case 0x17b6a0u: goto label_17b6a0;
        case 0x17b6a4u: goto label_17b6a4;
        case 0x17b6a8u: goto label_17b6a8;
        case 0x17b6acu: goto label_17b6ac;
        case 0x17b6b0u: goto label_17b6b0;
        case 0x17b6b4u: goto label_17b6b4;
        case 0x17b6b8u: goto label_17b6b8;
        case 0x17b6bcu: goto label_17b6bc;
        case 0x17b6c0u: goto label_17b6c0;
        case 0x17b6c4u: goto label_17b6c4;
        case 0x17b6c8u: goto label_17b6c8;
        case 0x17b6ccu: goto label_17b6cc;
        case 0x17b6d0u: goto label_17b6d0;
        case 0x17b6d4u: goto label_17b6d4;
        case 0x17b6d8u: goto label_17b6d8;
        case 0x17b6dcu: goto label_17b6dc;
        case 0x17b6e0u: goto label_17b6e0;
        case 0x17b6e4u: goto label_17b6e4;
        case 0x17b6e8u: goto label_17b6e8;
        case 0x17b6ecu: goto label_17b6ec;
        case 0x17b6f0u: goto label_17b6f0;
        case 0x17b6f4u: goto label_17b6f4;
        case 0x17b6f8u: goto label_17b6f8;
        case 0x17b6fcu: goto label_17b6fc;
        case 0x17b700u: goto label_17b700;
        case 0x17b704u: goto label_17b704;
        case 0x17b708u: goto label_17b708;
        case 0x17b70cu: goto label_17b70c;
        case 0x17b710u: goto label_17b710;
        case 0x17b714u: goto label_17b714;
        case 0x17b718u: goto label_17b718;
        case 0x17b71cu: goto label_17b71c;
        case 0x17b720u: goto label_17b720;
        case 0x17b724u: goto label_17b724;
        case 0x17b728u: goto label_17b728;
        case 0x17b72cu: goto label_17b72c;
        case 0x17b730u: goto label_17b730;
        case 0x17b734u: goto label_17b734;
        case 0x17b738u: goto label_17b738;
        case 0x17b73cu: goto label_17b73c;
        case 0x17b740u: goto label_17b740;
        case 0x17b744u: goto label_17b744;
        case 0x17b748u: goto label_17b748;
        case 0x17b74cu: goto label_17b74c;
        case 0x17b750u: goto label_17b750;
        case 0x17b754u: goto label_17b754;
        case 0x17b758u: goto label_17b758;
        case 0x17b75cu: goto label_17b75c;
        case 0x17b760u: goto label_17b760;
        case 0x17b764u: goto label_17b764;
        case 0x17b768u: goto label_17b768;
        case 0x17b76cu: goto label_17b76c;
        case 0x17b770u: goto label_17b770;
        case 0x17b774u: goto label_17b774;
        case 0x17b778u: goto label_17b778;
        case 0x17b77cu: goto label_17b77c;
        case 0x17b780u: goto label_17b780;
        case 0x17b784u: goto label_17b784;
        case 0x17b788u: goto label_17b788;
        case 0x17b78cu: goto label_17b78c;
        case 0x17b790u: goto label_17b790;
        case 0x17b794u: goto label_17b794;
        case 0x17b798u: goto label_17b798;
        case 0x17b79cu: goto label_17b79c;
        case 0x17b7a0u: goto label_17b7a0;
        case 0x17b7a4u: goto label_17b7a4;
        case 0x17b7a8u: goto label_17b7a8;
        case 0x17b7acu: goto label_17b7ac;
        case 0x17b7b0u: goto label_17b7b0;
        case 0x17b7b4u: goto label_17b7b4;
        case 0x17b7b8u: goto label_17b7b8;
        case 0x17b7bcu: goto label_17b7bc;
        case 0x17b7c0u: goto label_17b7c0;
        case 0x17b7c4u: goto label_17b7c4;
        case 0x17b7c8u: goto label_17b7c8;
        case 0x17b7ccu: goto label_17b7cc;
        case 0x17b7d0u: goto label_17b7d0;
        case 0x17b7d4u: goto label_17b7d4;
        case 0x17b7d8u: goto label_17b7d8;
        case 0x17b7dcu: goto label_17b7dc;
        case 0x17b7e0u: goto label_17b7e0;
        case 0x17b7e4u: goto label_17b7e4;
        case 0x17b7e8u: goto label_17b7e8;
        case 0x17b7ecu: goto label_17b7ec;
        case 0x17b7f0u: goto label_17b7f0;
        case 0x17b7f4u: goto label_17b7f4;
        case 0x17b7f8u: goto label_17b7f8;
        case 0x17b7fcu: goto label_17b7fc;
        case 0x17b800u: goto label_17b800;
        case 0x17b804u: goto label_17b804;
        case 0x17b808u: goto label_17b808;
        case 0x17b80cu: goto label_17b80c;
        case 0x17b810u: goto label_17b810;
        case 0x17b814u: goto label_17b814;
        case 0x17b818u: goto label_17b818;
        case 0x17b81cu: goto label_17b81c;
        case 0x17b820u: goto label_17b820;
        case 0x17b824u: goto label_17b824;
        case 0x17b828u: goto label_17b828;
        case 0x17b82cu: goto label_17b82c;
        case 0x17b830u: goto label_17b830;
        case 0x17b834u: goto label_17b834;
        case 0x17b838u: goto label_17b838;
        case 0x17b83cu: goto label_17b83c;
        case 0x17b840u: goto label_17b840;
        case 0x17b844u: goto label_17b844;
        case 0x17b848u: goto label_17b848;
        case 0x17b84cu: goto label_17b84c;
        case 0x17b850u: goto label_17b850;
        case 0x17b854u: goto label_17b854;
        case 0x17b858u: goto label_17b858;
        case 0x17b85cu: goto label_17b85c;
        case 0x17b860u: goto label_17b860;
        case 0x17b864u: goto label_17b864;
        case 0x17b868u: goto label_17b868;
        case 0x17b86cu: goto label_17b86c;
        case 0x17b870u: goto label_17b870;
        case 0x17b874u: goto label_17b874;
        case 0x17b878u: goto label_17b878;
        case 0x17b87cu: goto label_17b87c;
        case 0x17b880u: goto label_17b880;
        case 0x17b884u: goto label_17b884;
        case 0x17b888u: goto label_17b888;
        case 0x17b88cu: goto label_17b88c;
        case 0x17b890u: goto label_17b890;
        case 0x17b894u: goto label_17b894;
        case 0x17b898u: goto label_17b898;
        case 0x17b89cu: goto label_17b89c;
        case 0x17b8a0u: goto label_17b8a0;
        case 0x17b8a4u: goto label_17b8a4;
        case 0x17b8a8u: goto label_17b8a8;
        case 0x17b8acu: goto label_17b8ac;
        case 0x17b8b0u: goto label_17b8b0;
        case 0x17b8b4u: goto label_17b8b4;
        case 0x17b8b8u: goto label_17b8b8;
        case 0x17b8bcu: goto label_17b8bc;
        case 0x17b8c0u: goto label_17b8c0;
        case 0x17b8c4u: goto label_17b8c4;
        case 0x17b8c8u: goto label_17b8c8;
        case 0x17b8ccu: goto label_17b8cc;
        case 0x17b8d0u: goto label_17b8d0;
        case 0x17b8d4u: goto label_17b8d4;
        case 0x17b8d8u: goto label_17b8d8;
        case 0x17b8dcu: goto label_17b8dc;
        case 0x17b8e0u: goto label_17b8e0;
        case 0x17b8e4u: goto label_17b8e4;
        case 0x17b8e8u: goto label_17b8e8;
        case 0x17b8ecu: goto label_17b8ec;
        case 0x17b8f0u: goto label_17b8f0;
        case 0x17b8f4u: goto label_17b8f4;
        case 0x17b8f8u: goto label_17b8f8;
        case 0x17b8fcu: goto label_17b8fc;
        case 0x17b900u: goto label_17b900;
        case 0x17b904u: goto label_17b904;
        case 0x17b908u: goto label_17b908;
        case 0x17b90cu: goto label_17b90c;
        case 0x17b910u: goto label_17b910;
        case 0x17b914u: goto label_17b914;
        case 0x17b918u: goto label_17b918;
        case 0x17b91cu: goto label_17b91c;
        case 0x17b920u: goto label_17b920;
        case 0x17b924u: goto label_17b924;
        case 0x17b928u: goto label_17b928;
        case 0x17b92cu: goto label_17b92c;
        case 0x17b930u: goto label_17b930;
        case 0x17b934u: goto label_17b934;
        case 0x17b938u: goto label_17b938;
        case 0x17b93cu: goto label_17b93c;
        case 0x17b940u: goto label_17b940;
        case 0x17b944u: goto label_17b944;
        case 0x17b948u: goto label_17b948;
        case 0x17b94cu: goto label_17b94c;
        case 0x17b950u: goto label_17b950;
        case 0x17b954u: goto label_17b954;
        case 0x17b958u: goto label_17b958;
        case 0x17b95cu: goto label_17b95c;
        case 0x17b960u: goto label_17b960;
        case 0x17b964u: goto label_17b964;
        case 0x17b968u: goto label_17b968;
        case 0x17b96cu: goto label_17b96c;
        case 0x17b970u: goto label_17b970;
        case 0x17b974u: goto label_17b974;
        case 0x17b978u: goto label_17b978;
        case 0x17b97cu: goto label_17b97c;
        case 0x17b980u: goto label_17b980;
        case 0x17b984u: goto label_17b984;
        case 0x17b988u: goto label_17b988;
        case 0x17b98cu: goto label_17b98c;
        case 0x17b990u: goto label_17b990;
        case 0x17b994u: goto label_17b994;
        case 0x17b998u: goto label_17b998;
        case 0x17b99cu: goto label_17b99c;
        case 0x17b9a0u: goto label_17b9a0;
        case 0x17b9a4u: goto label_17b9a4;
        case 0x17b9a8u: goto label_17b9a8;
        case 0x17b9acu: goto label_17b9ac;
        case 0x17b9b0u: goto label_17b9b0;
        case 0x17b9b4u: goto label_17b9b4;
        case 0x17b9b8u: goto label_17b9b8;
        case 0x17b9bcu: goto label_17b9bc;
        case 0x17b9c0u: goto label_17b9c0;
        case 0x17b9c4u: goto label_17b9c4;
        case 0x17b9c8u: goto label_17b9c8;
        case 0x17b9ccu: goto label_17b9cc;
        case 0x17b9d0u: goto label_17b9d0;
        case 0x17b9d4u: goto label_17b9d4;
        case 0x17b9d8u: goto label_17b9d8;
        case 0x17b9dcu: goto label_17b9dc;
        case 0x17b9e0u: goto label_17b9e0;
        case 0x17b9e4u: goto label_17b9e4;
        case 0x17b9e8u: goto label_17b9e8;
        case 0x17b9ecu: goto label_17b9ec;
        case 0x17b9f0u: goto label_17b9f0;
        case 0x17b9f4u: goto label_17b9f4;
        case 0x17b9f8u: goto label_17b9f8;
        case 0x17b9fcu: goto label_17b9fc;
        case 0x17ba00u: goto label_17ba00;
        case 0x17ba04u: goto label_17ba04;
        case 0x17ba08u: goto label_17ba08;
        case 0x17ba0cu: goto label_17ba0c;
        case 0x17ba10u: goto label_17ba10;
        case 0x17ba14u: goto label_17ba14;
        case 0x17ba18u: goto label_17ba18;
        case 0x17ba1cu: goto label_17ba1c;
        case 0x17ba20u: goto label_17ba20;
        case 0x17ba24u: goto label_17ba24;
        case 0x17ba28u: goto label_17ba28;
        case 0x17ba2cu: goto label_17ba2c;
        case 0x17ba30u: goto label_17ba30;
        case 0x17ba34u: goto label_17ba34;
        case 0x17ba38u: goto label_17ba38;
        case 0x17ba3cu: goto label_17ba3c;
        case 0x17ba40u: goto label_17ba40;
        case 0x17ba44u: goto label_17ba44;
        case 0x17ba48u: goto label_17ba48;
        case 0x17ba4cu: goto label_17ba4c;
        case 0x17ba50u: goto label_17ba50;
        case 0x17ba54u: goto label_17ba54;
        case 0x17ba58u: goto label_17ba58;
        case 0x17ba5cu: goto label_17ba5c;
        default: return;
    }

label_17b290:
    // 0x17b290: 0x10d5021  addu        $t2, $t0, $t5
    ctx->pc = 0x17b290u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 13)));
label_17b294:
    // 0x17b294: 0xad430000  sw          $v1, 0x0($t2)
    ctx->pc = 0x17b294u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 3));
label_17b298:
    // 0x17b298: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x17b298u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
label_17b29c:
    // 0x17b29c: 0xad400004  sw          $zero, 0x4($t2)
    ctx->pc = 0x17b29cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 4), GPR_U32(ctx, 0));
label_17b2a0:
    // 0x17b2a0: 0x29640002  slti        $a0, $t3, 0x2
    ctx->pc = 0x17b2a0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 11) < (int64_t)(int32_t)2) ? 1 : 0);
label_17b2a4:
    // 0x17b2a4: 0xad400008  sw          $zero, 0x8($t2)
    ctx->pc = 0x17b2a4u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 8), GPR_U32(ctx, 0));
label_17b2a8:
    // 0x17b2a8: 0x25ad0fd0  addiu       $t5, $t5, 0xFD0
    ctx->pc = 0x17b2a8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4048));
label_17b2ac:
    // 0x17b2ac: 0xad47000c  sw          $a3, 0xC($t2)
    ctx->pc = 0x17b2acu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 12), GPR_U32(ctx, 7));
label_17b2b0:
    // 0x17b2b0: 0xad460010  sw          $a2, 0x10($t2)
    ctx->pc = 0x17b2b0u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 16), GPR_U32(ctx, 6));
label_17b2b4:
    // 0x17b2b4: 0xad400014  sw          $zero, 0x14($t2)
    ctx->pc = 0x17b2b4u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 20), GPR_U32(ctx, 0));
label_17b2b8:
    // 0x17b2b8: 0xad400018  sw          $zero, 0x18($t2)
    ctx->pc = 0x17b2b8u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 24), GPR_U32(ctx, 0));
label_17b2bc:
    // 0x17b2bc: 0xad40001c  sw          $zero, 0x1C($t2)
    ctx->pc = 0x17b2bcu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 28), GPR_U32(ctx, 0));
label_17b2c0:
    // 0x17b2c0: 0xad450fc0  sw          $a1, 0xFC0($t2)
    ctx->pc = 0x17b2c0u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 4032), GPR_U32(ctx, 5));
label_17b2c4:
    // 0x17b2c4: 0xad400fc4  sw          $zero, 0xFC4($t2)
    ctx->pc = 0x17b2c4u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 4036), GPR_U32(ctx, 0));
label_17b2c8:
    // 0x17b2c8: 0xad400fc8  sw          $zero, 0xFC8($t2)
    ctx->pc = 0x17b2c8u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 4040), GPR_U32(ctx, 0));
label_17b2cc:
    // 0x17b2cc: 0x1480ffef  bnez        $a0, . + 4 + (-0x11 << 2)
label_17b2d0:
    if (ctx->pc == 0x17B2D0u) {
        ctx->pc = 0x17B2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B2CCu;
        // 0x17b2d0: 0xad400fcc  sw          $zero, 0xFCC($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 4044), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17B2D4u;
        goto label_17b2d4;
    }
    ctx->pc = 0x17B2CCu;
    {
        const bool branch_taken_0x17b2cc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x17B2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B2CCu;
        // 0x17b2d0: 0xad400fcc  sw          $zero, 0xFCC($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 4044), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b2cc) {
            ctx->pc = 0x17B28Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x17b28c; return; }
        }
    }
    ctx->pc = 0x17B2D4u;
label_17b2d4:
    // 0x17b2d4: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x17b2d4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
label_17b2d8:
    // 0x17b2d8: 0x29840002  slti        $a0, $t4, 0x2
    ctx->pc = 0x17b2d8u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 12) < (int64_t)(int32_t)2) ? 1 : 0);
label_17b2dc:
    // 0x17b2dc: 0x1480ffe7  bnez        $a0, . + 4 + (-0x19 << 2)
label_17b2e0:
    if (ctx->pc == 0x17B2E0u) {
        ctx->pc = 0x17B2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B2DCu;
        // 0x17b2e0: 0x25ce1fa0  addiu       $t6, $t6, 0x1FA0 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 8096));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17B2E4u;
        goto label_17b2e4;
    }
    ctx->pc = 0x17B2DCu;
    {
        const bool branch_taken_0x17b2dc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x17B2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B2DCu;
        // 0x17b2e0: 0x25ce1fa0  addiu       $t6, $t6, 0x1FA0 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 8096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b2dc) {
            ctx->pc = 0x17B27Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x17b27c; return; }
        }
    }
    ctx->pc = 0x17B2E4u;
label_17b2e4:
    // 0x17b2e4: 0x3e00008  jr          $ra
label_17b2e8:
    if (ctx->pc == 0x17B2E8u) {
        ctx->pc = 0x17B2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B2E4u;
        // 0x17b2e8: 0xaf808754  sw          $zero, -0x78AC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936404), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17B2ECu;
        goto label_17b2ec;
    }
    ctx->pc = 0x17B2E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17B2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B2E4u;
        // 0x17b2e8: 0xaf808754  sw          $zero, -0x78AC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936404), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17B2E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17B2ECu;
label_17b2ec:
    // 0x17b2ec: 0x0  nop
    ctx->pc = 0x17b2ecu;
    // NOP
label_17b2f0:
    // 0x17b2f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x17b2f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_17b2f4:
    // 0x17b2f4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x17b2f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_17b2f8:
    // 0x17b2f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17b2f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_17b2fc:
    // 0x17b2fc: 0xc08f0cc  jal         func_23C330
label_17b300:
    if (ctx->pc == 0x17B300u) {
        ctx->pc = 0x17B300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B2FCu;
        // 0x17b300: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17B304u;
        goto label_17b304;
    }
    ctx->pc = 0x17B2FCu;
    SET_GPR_U32(ctx, 31, 0x17B304u);
    ctx->pc = 0x17B300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B2FCu;
    // 0x17b300: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x17B304u;
label_17b304:
    // 0x17b304: 0x8f918454  lw          $s1, -0x7BAC($gp)
    ctx->pc = 0x17b304u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935636)));
label_17b308:
    // 0x17b308: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
label_17b30c:
    if (ctx->pc == 0x17B30Cu) {
        ctx->pc = 0x17B30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B308u;
        // 0x17b30c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17B310u;
        goto label_17b310;
    }
    ctx->pc = 0x17B308u;
    {
        const bool branch_taken_0x17b308 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B308u;
        // 0x17b30c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b308) {
            ctx->pc = 0x17B338u;
            goto label_17b338;
        }
    }
    ctx->pc = 0x17B310u;
label_17b310:
    // 0x17b310: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x17b310u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_17b314:
    // 0x17b314: 0xc05ece4  jal         func_17B390
label_17b318:
    if (ctx->pc == 0x17B318u) {
        ctx->pc = 0x17B318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B314u;
        // 0x17b318: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17B31Cu;
        goto label_17b31c;
    }
    ctx->pc = 0x17B314u;
    SET_GPR_U32(ctx, 31, 0x17B31Cu);
    ctx->pc = 0x17B318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B314u;
    // 0x17b318: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17B390u;
    goto label_17b390;
    ctx->pc = 0x17B31Cu;
label_17b31c:
    // 0x17b31c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x17b31cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_17b320:
    // 0x17b320: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x17b320u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_17b324:
    // 0x17b324: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x17b324u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_17b328:
    // 0x17b328: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_17b32c:
    if (ctx->pc == 0x17B32Cu) {
        ctx->pc = 0x17B330u;
        goto label_17b330;
    }
    ctx->pc = 0x17B328u;
    {
        const bool branch_taken_0x17b328 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17b328) {
            ctx->pc = 0x17B338u;
            goto label_17b338;
        }
    }
    ctx->pc = 0x17B330u;
label_17b330:
    // 0x17b330: 0x1000fff7  b           . + 4 + (-0x9 << 2)
label_17b334:
    if (ctx->pc == 0x17B334u) {
        ctx->pc = 0x17B334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B330u;
        // 0x17b334: 0x26310054  addiu       $s1, $s1, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 84));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17B338u;
        goto label_17b338;
    }
    ctx->pc = 0x17B330u;
    {
        const bool branch_taken_0x17b330 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B330u;
        // 0x17b334: 0x26310054  addiu       $s1, $s1, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 84));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b330) {
            ctx->pc = 0x17B310u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17b310;
        }
    }
    ctx->pc = 0x17B338u;
label_17b338:
    // 0x17b338: 0xc05ee84  jal         func_17BA10
label_17b33c:
    if (ctx->pc == 0x17B33Cu) {
        ctx->pc = 0x17B33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B338u;
        // 0x17b33c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17B340u;
        goto label_17b340;
    }
    ctx->pc = 0x17B338u;
    SET_GPR_U32(ctx, 31, 0x17B340u);
    ctx->pc = 0x17B33Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B338u;
    // 0x17b33c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17BA10u;
    goto label_17ba10;
    ctx->pc = 0x17B340u;
label_17b340:
    // 0x17b340: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x17b340u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_17b344:
    // 0x17b344: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17b344u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_17b348:
    // 0x17b348: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17b348u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_17b34c:
    // 0x17b34c: 0x3e00008  jr          $ra
label_17b350:
    if (ctx->pc == 0x17B350u) {
        ctx->pc = 0x17B350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B34Cu;
        // 0x17b350: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17B354u;
        goto label_17b354;
    }
    ctx->pc = 0x17B34Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17B350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B34Cu;
        // 0x17b350: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17B34Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17B354u;
label_17b354:
    // 0x17b354: 0x0  nop
    ctx->pc = 0x17b354u;
    // NOP
label_17b358:
    // 0x17b358: 0x0  nop
    ctx->pc = 0x17b358u;
    // NOP
label_17b35c:
    // 0x17b35c: 0x0  nop
    ctx->pc = 0x17b35cu;
    // NOP
label_17b360:
    // 0x17b360: 0x3c033c23  lui         $v1, 0x3C23
    ctx->pc = 0x17b360u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15395 << 16));
label_17b364:
    // 0x17b364: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x17b364u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
label_17b368:
    // 0x17b368: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x17b368u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_17b36c:
    // 0x17b36c: 0x0  nop
    ctx->pc = 0x17b36cu;
    // NOP
label_17b370:
    // 0x17b370: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x17b370u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_17b374:
    // 0x17b374: 0x0  nop
    ctx->pc = 0x17b374u;
    // NOP
label_17b378:
    // 0x17b378: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_17b37c:
    if (ctx->pc == 0x17B37Cu) {
        ctx->pc = 0x17B380u;
        goto label_17b380;
    }
    ctx->pc = 0x17B378u;
    {
        const bool branch_taken_0x17b378 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x17b378) {
            ctx->pc = 0x17B384u;
            goto label_17b384;
        }
    }
    ctx->pc = 0x17B380u;
label_17b380:
    // 0x17b380: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x17b380u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_17b384:
    // 0x17b384: 0x3e00008  jr          $ra
label_17b388:
    if (ctx->pc == 0x17B388u) {
        ctx->pc = 0x17B388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B384u;
        // 0x17b388: 0xe78c81e0  swc1        $f12, -0x7E20($gp) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294935008), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x17B38Cu;
        goto label_17b38c;
    }
    ctx->pc = 0x17B384u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17B388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B384u;
        // 0x17b388: 0xe78c81e0  swc1        $f12, -0x7E20($gp) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294935008), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17B384u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17B38Cu;
label_17b38c:
    // 0x17b38c: 0x0  nop
    ctx->pc = 0x17b38cu;
    // NOP
label_17b390:
    // 0x17b390: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x17b390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
label_17b394:
    // 0x17b394: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x17b394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_17b398:
    // 0x17b398: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x17b398u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_17b39c:
    // 0x17b39c: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x17b39cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_17b3a0:
    // 0x17b3a0: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x17b3a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_17b3a4:
    // 0x17b3a4: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x17b3a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_17b3a8:
    // 0x17b3a8: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x17b3a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_17b3ac:
    // 0x17b3ac: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x17b3acu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_17b3b0:
    // 0x17b3b0: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x17b3b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_17b3b4:
    // 0x17b3b4: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x17b3b4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_17b3b8:
    // 0x17b3b8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x17b3b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_17b3bc:
    // 0x17b3bc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x17b3bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_17b3c0:
    // 0x17b3c0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x17b3c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_17b3c4:
    // 0x17b3c4: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x17b3c4u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_17b3c8:
    // 0x17b3c8: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x17b3c8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_17b3cc:
    // 0x17b3cc: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x17b3ccu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_17b3d0:
    // 0x17b3d0: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x17b3d0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_17b3d4:
    // 0x17b3d4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x17b3d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_17b3d8:
    // 0x17b3d8: 0x8f868454  lw          $a2, -0x7BAC($gp)
    ctx->pc = 0x17b3d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935636)));
label_17b3dc:
    // 0x17b3dc: 0x8c850008  lw          $a1, 0x8($a0)
    ctx->pc = 0x17b3dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_17b3e0:
    // 0x17b3e0: 0x30630200  andi        $v1, $v1, 0x200
    ctx->pc = 0x17b3e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
label_17b3e4:
    // 0x17b3e4: 0xa62021  addu        $a0, $a1, $a2
    ctx->pc = 0x17b3e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_17b3e8:
    // 0x17b3e8: 0x10600091  beqz        $v1, . + 4 + (0x91 << 2)
label_17b3ec:
    if (ctx->pc == 0x17B3ECu) {
        ctx->pc = 0x17B3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B3E8u;
        // 0x17b3ec: 0x24900024  addiu       $s0, $a0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 36));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17B3F0u;
        goto label_17b3f0;
    }
    ctx->pc = 0x17B3E8u;
    {
        const bool branch_taken_0x17b3e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B3E8u;
        // 0x17b3ec: 0x24900024  addiu       $s0, $a0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b3e8) {
            ctx->pc = 0x17B630u;
            goto label_17b630;
        }
    }
    ctx->pc = 0x17B3F0u;
label_17b3f0:
    // 0x17b3f0: 0x3c033d75  lui         $v1, 0x3D75
    ctx->pc = 0x17b3f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15733 << 16));
label_17b3f4:
    // 0x17b3f4: 0x32a60007  andi        $a2, $s5, 0x7
    ctx->pc = 0x17b3f4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)7);
label_17b3f8:
    // 0x17b3f8: 0x3463c28f  ori         $v1, $v1, 0xC28F
    ctx->pc = 0x17b3f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)49807);
label_17b3fc:
    // 0x17b3fc: 0x6082b  sltu        $at, $zero, $a2
    ctx->pc = 0x17b3fcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_17b400:
    // 0x17b400: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x17b400u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_17b404:
    // 0x17b404: 0x10200025  beqz        $at, . + 4 + (0x25 << 2)
label_17b408:
    if (ctx->pc == 0x17B408u) {
        ctx->pc = 0x17B408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B404u;
        // 0x17b408: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17B40Cu;
        goto label_17b40c;
    }
    ctx->pc = 0x17B404u;
    {
        const bool branch_taken_0x17b404 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B404u;
        // 0x17b408: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b404) {
            ctx->pc = 0x17B49Cu;
            goto label_17b49c;
        }
    }
    ctx->pc = 0x17B40Cu;
label_17b40c:
    // 0x17b40c: 0x2cc10009  sltiu       $at, $a2, 0x9
    ctx->pc = 0x17b40cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
label_17b410:
    // 0x17b410: 0x1420001e  bnez        $at, . + 4 + (0x1E << 2)
label_17b414:
    if (ctx->pc == 0x17B414u) {
        ctx->pc = 0x17B414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B410u;
        // 0x17b414: 0x24c5fff8  addiu       $a1, $a2, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17B418u;
        goto label_17b418;
    }
    ctx->pc = 0x17B410u;
    {
        const bool branch_taken_0x17b410 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x17B414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B410u;
        // 0x17b414: 0x24c5fff8  addiu       $a1, $a2, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b410) {
            ctx->pc = 0x17B48Cu;
            goto label_17b48c;
        }
    }
    ctx->pc = 0x17B418u;
label_17b418:
    // 0x17b418: 0xc78081e0  lwc1        $f0, -0x7E20($gp)
    ctx->pc = 0x17b418u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935008)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_17b41c:
    // 0x17b41c: 0x3c033c23  lui         $v1, 0x3C23
    ctx->pc = 0x17b41cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15395 << 16));
label_17b420:
    // 0x17b420: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x17b420u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
label_17b424:
    // 0x17b424: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x17b424u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_17b428:
    // 0x17b428: 0x0  nop
    ctx->pc = 0x17b428u;
    // NOP
label_17b42c:
    // 0x17b42c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x17b42cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_17b430:
    // 0x17b430: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x17b430u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_17b434:
    // 0x17b434: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x17b434u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_17b438:
    // 0x17b438: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x17b438u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_17b43c:
    // 0x17b43c: 0x85182b  sltu        $v1, $a0, $a1
    ctx->pc = 0x17b43cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_17b440:
    // 0x17b440: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x17b440u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_17b444:
    // 0x17b444: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x17b444u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_17b448:
    // 0x17b448: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x17b448u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_17b44c:
    // 0x17b44c: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x17b44cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_17b450:
    // 0x17b450: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x17b450u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_17b454:
    // 0x17b454: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x17b454u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_17b458:
    // 0x17b458: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
label_17b45c:
    if (ctx->pc == 0x17B45Cu) {
        ctx->pc = 0x17B45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B458u;
        // 0x17b45c: 0x460018c0  add.s       $f3, $f3, $f0 (Delay Slot)
        ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x17B460u;
        goto label_17b460;
    }
    ctx->pc = 0x17B458u;
    {
        const bool branch_taken_0x17b458 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x17B45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B458u;
        // 0x17b45c: 0x460018c0  add.s       $f3, $f3, $f0 (Delay Slot)
        ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b458) {
            ctx->pc = 0x17B434u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17b434;
        }
    }
    ctx->pc = 0x17B460u;
label_17b460:
    // 0x17b460: 0x1000000a  b           . + 4 + (0xA << 2)
label_17b464:
    if (ctx->pc == 0x17B464u) {
        ctx->pc = 0x17B468u;
        goto label_17b468;
    }
    ctx->pc = 0x17B460u;
    {
        const bool branch_taken_0x17b460 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17b460) {
            ctx->pc = 0x17B48Cu;
            goto label_17b48c;
        }
    }
    ctx->pc = 0x17B468u;
label_17b468:
    // 0x17b468: 0xc78081e0  lwc1        $f0, -0x7E20($gp)
    ctx->pc = 0x17b468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935008)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_17b46c:
    // 0x17b46c: 0x3c033c23  lui         $v1, 0x3C23
    ctx->pc = 0x17b46cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15395 << 16));
label_17b470:
    // 0x17b470: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x17b470u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
label_17b474:
    // 0x17b474: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x17b474u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_17b478:
    // 0x17b478: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x17b478u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_17b47c:
    // 0x17b47c: 0x0  nop
    ctx->pc = 0x17b47cu;
    // NOP
label_17b480:
    // 0x17b480: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x17b480u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_17b484:
    // 0x17b484: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x17b484u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_17b488:
    // 0x17b488: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x17b488u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_17b48c:
    // 0x17b48c: 0x0  nop
    ctx->pc = 0x17b48cu;
    // NOP
label_17b490:
    // 0x17b490: 0x86182b  sltu        $v1, $a0, $a2
    ctx->pc = 0x17b490u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_17b494:
    // 0x17b494: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
label_17b498:
    if (ctx->pc == 0x17B498u) {
        ctx->pc = 0x17B49Cu;
        goto label_17b49c;
    }
    ctx->pc = 0x17B494u;
    {
        const bool branch_taken_0x17b494 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x17b494) {
            ctx->pc = 0x17B468u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17b468;
        }
    }
    ctx->pc = 0x17B49Cu;
label_17b49c:
    // 0x17b49c: 0x0  nop
    ctx->pc = 0x17b49cu;
    // NOP
label_17b4a0:
    // 0x17b4a0: 0x3c043f00  lui         $a0, 0x3F00
    ctx->pc = 0x17b4a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16128 << 16));
label_17b4a4:
    // 0x17b4a4: 0xc682003c  lwc1        $f2, 0x3C($s4)
    ctx->pc = 0x17b4a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_17b4a8:
    // 0x17b4a8: 0x26110014  addiu       $s1, $s0, 0x14
    ctx->pc = 0x17b4a8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
label_17b4ac:
    // 0x17b4ac: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x17b4acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_17b4b0:
    // 0x17b4b0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x17b4b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_17b4b4:
    // 0x17b4b4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x17b4b4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_17b4b8:
    // 0x17b4b8: 0x27b700c4  addiu       $s7, $sp, 0xC4
    ctx->pc = 0x17b4b8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 196));
label_17b4bc:
    // 0x17b4bc: 0x27b600c8  addiu       $s6, $sp, 0xC8
    ctx->pc = 0x17b4bcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
label_17b4c0:
    // 0x17b4c0: 0x27be00b4  addiu       $fp, $sp, 0xB4
    ctx->pc = 0x17b4c0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 180));
label_17b4c4:
    // 0x17b4c4: 0x26320018  addiu       $s2, $s1, 0x18
    ctx->pc = 0x17b4c4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
label_17b4c8:
    // 0x17b4c8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x17b4c8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17b4cc:
    // 0x17b4cc: 0x4600ad06  mov.s       $f20, $f21
    ctx->pc = 0x17b4ccu;
    ctx->f[20] = FPU_MOV_S(ctx->f[21]);
label_17b4d0:
    // 0x17b4d0: 0x46021841  sub.s       $f1, $f3, $f2
    ctx->pc = 0x17b4d0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
label_17b4d4:
    // 0x17b4d4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x17b4d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_17b4d8:
    // 0x17b4d8: 0x46001580  add.s       $f22, $f2, $f0
    ctx->pc = 0x17b4d8u;
    ctx->f[22] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_17b4dc:
    // 0x17b4dc: 0xe696003c  swc1        $f22, 0x3C($s4)
    ctx->pc = 0x17b4dcu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 60), bits); }
label_17b4e0:
    // 0x17b4e0: 0xafa300bc  sw          $v1, 0xBC($sp)
    ctx->pc = 0x17b4e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 3));
label_17b4e4:
    // 0x17b4e4: 0xc680001c  lwc1        $f0, 0x1C($s4)
    ctx->pc = 0x17b4e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_17b4e8:
    // 0x17b4e8: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x17b4e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_17b4ec:
    // 0x17b4ec: 0xc6800020  lwc1        $f0, 0x20($s4)
    ctx->pc = 0x17b4ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_17b4f0:
    // 0x17b4f0: 0xe6e00000  swc1        $f0, 0x0($s7)
    ctx->pc = 0x17b4f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
label_17b4f4:
    // 0x17b4f4: 0xaec00000  sw          $zero, 0x0($s6)
    ctx->pc = 0x17b4f4u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 0));
label_17b4f8:
    // 0x17b4f8: 0xafa300cc  sw          $v1, 0xCC($sp)
    ctx->pc = 0x17b4f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 3));
label_17b4fc:
    // 0x17b4fc: 0xc680001c  lwc1        $f0, 0x1C($s4)
    ctx->pc = 0x17b4fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_17b500:
    // 0x17b500: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x17b500u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_17b504:
    // 0x17b504: 0xafc00000  sw          $zero, 0x0($fp)
    ctx->pc = 0x17b504u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 0));
label_17b508:
    // 0x17b508: 0x10000045  b           . + 4 + (0x45 << 2)
label_17b50c:
    if (ctx->pc == 0x17B50Cu) {
        ctx->pc = 0x17B50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B508u;
        // 0x17b50c: 0xafa000b8  sw          $zero, 0xB8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17B510u;
        goto label_17b510;
    }
    ctx->pc = 0x17B508u;
    {
        const bool branch_taken_0x17b508 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B508u;
        // 0x17b50c: 0xafa000b8  sw          $zero, 0xB8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b508) {
            ctx->pc = 0x17B620u;
            goto label_17b620;
        }
    }
    ctx->pc = 0x17B510u;
label_17b510:
    // 0x17b510: 0xc066e44  jal         func_19B910
label_17b514:
    if (ctx->pc == 0x17B514u) {
        ctx->pc = 0x17B514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B510u;
        // 0x17b514: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17B518u;
        goto label_17b518;
    }
    ctx->pc = 0x17B510u;
    SET_GPR_U32(ctx, 31, 0x17B518u);
    ctx->pc = 0x17B514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B510u;
    // 0x17b514: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B910u;
    { ctx->pc = 0x19b910; return; }
    ctx->pc = 0x17B518u;
label_17b518:
    // 0x17b518: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x17b518u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_17b51c:
    // 0x17b51c: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x17b51cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_17b520:
    // 0x17b520: 0xc066e6c  jal         func_19B9B0
label_17b524:
    if (ctx->pc == 0x17B524u) {
        ctx->pc = 0x17B524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B520u;
        // 0x17b524: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17B528u;
        goto label_17b528;
    }
    ctx->pc = 0x17B520u;
    SET_GPR_U32(ctx, 31, 0x17B528u);
    ctx->pc = 0x17B524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B520u;
    // 0x17b524: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B9B0u;
    { ctx->pc = 0x19b9b0; return; }
    ctx->pc = 0x17B528u;
label_17b528:
    // 0x17b528: 0xc6800020  lwc1        $f0, 0x20($s4)
    ctx->pc = 0x17b528u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_17b52c:
    // 0x17b52c: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x17b52cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_17b530:
    // 0x17b530: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x17b530u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_17b534:
    // 0x17b534: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x17b534u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_17b538:
    // 0x17b538: 0xc066d7a  jal         func_19B5E8
label_17b53c:
    if (ctx->pc == 0x17B53Cu) {
        ctx->pc = 0x17B53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B538u;
        // 0x17b53c: 0xe7c00000  swc1        $f0, 0x0($fp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x17B540u;
        goto label_17b540;
    }
    ctx->pc = 0x17B538u;
    SET_GPR_U32(ctx, 31, 0x17B540u);
    ctx->pc = 0x17B53Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B538u;
    // 0x17b53c: 0xe7c00000  swc1        $f0, 0x0($fp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B5E8u;
    { ctx->pc = 0x19b5e8; return; }
    ctx->pc = 0x17B540u;
label_17b540:
    // 0x17b540: 0xc622000c  lwc1        $f2, 0xC($s1)
    ctx->pc = 0x17b540u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_17b544:
    // 0x17b544: 0xc7a100c0  lwc1        $f1, 0xC0($sp)
    ctx->pc = 0x17b544u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_17b548:
    // 0x17b548: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x17b548u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_17b54c:
    // 0x17b54c: 0x0  nop
    ctx->pc = 0x17b54cu;
    // NOP
label_17b550:
    // 0x17b550: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x17b550u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_17b554:
    // 0x17b554: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x17b554u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_17b558:
    // 0x17b558: 0x0  nop
    ctx->pc = 0x17b558u;
    // NOP
label_17b55c:
    // 0x17b55c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_17b560:
    if (ctx->pc == 0x17B560u) {
        ctx->pc = 0x17B560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B55Cu;
        // 0x17b560: 0xe6410000  swc1        $f1, 0x0($s2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x17B564u;
        goto label_17b564;
    }
    ctx->pc = 0x17B55Cu;
    {
        const bool branch_taken_0x17b55c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x17B560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B55Cu;
        // 0x17b560: 0xe6410000  swc1        $f1, 0x0($s2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b55c) {
            ctx->pc = 0x17B568u;
            goto label_17b568;
        }
    }
    ctx->pc = 0x17B564u;
label_17b564:
    // 0x17b564: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x17b564u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
label_17b568:
    // 0x17b568: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x17b568u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_17b56c:
    // 0x17b56c: 0xc6210010  lwc1        $f1, 0x10($s1)
    ctx->pc = 0x17b56cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_17b570:
    // 0x17b570: 0xc6e00000  lwc1        $f0, 0x0($s7)
    ctx->pc = 0x17b570u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_17b574:
    // 0x17b574: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x17b574u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_17b578:
    // 0x17b578: 0xe6400004  swc1        $f0, 0x4($s2)
    ctx->pc = 0x17b578u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
label_17b57c:
    // 0x17b57c: 0xc6210014  lwc1        $f1, 0x14($s1)
    ctx->pc = 0x17b57cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_17b580:
    // 0x17b580: 0xc6c00000  lwc1        $f0, 0x0($s6)
    ctx->pc = 0x17b580u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_17b584:
    // 0x17b584: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x17b584u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_17b588:
    // 0x17b588: 0xc066e44  jal         func_19B910
label_17b58c:
    if (ctx->pc == 0x17B58Cu) {
        ctx->pc = 0x17B58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B588u;
        // 0x17b58c: 0xe6400008  swc1        $f0, 0x8($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x17B590u;
        goto label_17b590;
    }
    ctx->pc = 0x17B588u;
    SET_GPR_U32(ctx, 31, 0x17B590u);
    ctx->pc = 0x17B58Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B588u;
    // 0x17b58c: 0xe6400008  swc1        $f0, 0x8($s2) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B910u;
    { ctx->pc = 0x19b910; return; }
    ctx->pc = 0x17B590u;
label_17b590:
    // 0x17b590: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x17b590u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_17b594:
    // 0x17b594: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x17b594u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_17b598:
    // 0x17b598: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17b598u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_17b59c:
    // 0x17b59c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x17b59cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_17b5a0:
    // 0x17b5a0: 0x46160002  mul.s       $f0, $f0, $f22
    ctx->pc = 0x17b5a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
label_17b5a4:
    // 0x17b5a4: 0xc066e6c  jal         func_19B9B0
label_17b5a8:
    if (ctx->pc == 0x17B5A8u) {
        ctx->pc = 0x17B5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B5A4u;
        // 0x17b5a8: 0x46140300  add.s       $f12, $f0, $f20 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x17B5ACu;
        goto label_17b5ac;
    }
    ctx->pc = 0x17B5A4u;
    SET_GPR_U32(ctx, 31, 0x17B5ACu);
    ctx->pc = 0x17B5A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B5A4u;
    // 0x17b5a8: 0x46140300  add.s       $f12, $f0, $f20 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B9B0u;
    { ctx->pc = 0x19b9b0; return; }
    ctx->pc = 0x17B5ACu;
label_17b5ac:
    // 0x17b5ac: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x17b5acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_17b5b0:
    // 0x17b5b0: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x17b5b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_17b5b4:
    // 0x17b5b4: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x17b5b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_17b5b8:
    // 0x17b5b8: 0xc066d7a  jal         func_19B5E8
label_17b5bc:
    if (ctx->pc == 0x17B5BCu) {
        ctx->pc = 0x17B5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B5B8u;
        // 0x17b5bc: 0xafc00000  sw          $zero, 0x0($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17B5C0u;
        goto label_17b5c0;
    }
    ctx->pc = 0x17B5B8u;
    SET_GPR_U32(ctx, 31, 0x17B5C0u);
    ctx->pc = 0x17B5BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B5B8u;
    // 0x17b5bc: 0xafc00000  sw          $zero, 0x0($fp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B5E8u;
    { ctx->pc = 0x19b5e8; return; }
    ctx->pc = 0x17B5C0u;
label_17b5c0:
    // 0x17b5c0: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x17b5c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
label_17b5c4:
    // 0x17b5c4: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x17b5c4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_17b5c8:
    // 0x17b5c8: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x17b5c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
label_17b5cc:
    // 0x17b5cc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x17b5ccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_17b5d0:
    // 0x17b5d0: 0xc622000c  lwc1        $f2, 0xC($s1)
    ctx->pc = 0x17b5d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_17b5d4:
    // 0x17b5d4: 0xc7a100c0  lwc1        $f1, 0xC0($sp)
    ctx->pc = 0x17b5d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_17b5d8:
    // 0x17b5d8: 0x46160002  mul.s       $f0, $f0, $f22
    ctx->pc = 0x17b5d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
label_17b5dc:
    // 0x17b5dc: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x17b5dcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_17b5e0:
    // 0x17b5e0: 0xe641000c  swc1        $f1, 0xC($s2)
    ctx->pc = 0x17b5e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
label_17b5e4:
    // 0x17b5e4: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x17b5e4u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_17b5e8:
    // 0x17b5e8: 0xc6210010  lwc1        $f1, 0x10($s1)
    ctx->pc = 0x17b5e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_17b5ec:
    // 0x17b5ec: 0xc6e00000  lwc1        $f0, 0x0($s7)
    ctx->pc = 0x17b5ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_17b5f0:
    // 0x17b5f0: 0x4616ad40  add.s       $f21, $f21, $f22
    ctx->pc = 0x17b5f0u;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[22]);
label_17b5f4:
    // 0x17b5f4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x17b5f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_17b5f8:
    // 0x17b5f8: 0xe6400010  swc1        $f0, 0x10($s2)
    ctx->pc = 0x17b5f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 16), bits); }
label_17b5fc:
    // 0x17b5fc: 0xc6210014  lwc1        $f1, 0x14($s1)
    ctx->pc = 0x17b5fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_17b600:
    // 0x17b600: 0xc6c00000  lwc1        $f0, 0x0($s6)
    ctx->pc = 0x17b600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_17b604:
    // 0x17b604: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x17b604u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_17b608:
    // 0x17b608: 0xe6400014  swc1        $f0, 0x14($s2)
    ctx->pc = 0x17b608u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 20), bits); }
label_17b60c:
    // 0x17b60c: 0xc681001c  lwc1        $f1, 0x1C($s4)
    ctx->pc = 0x17b60cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_17b610:
    // 0x17b610: 0x26520018  addiu       $s2, $s2, 0x18
    ctx->pc = 0x17b610u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
label_17b614:
    // 0x17b614: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x17b614u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_17b618:
    // 0x17b618: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x17b618u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_17b61c:
    // 0x17b61c: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x17b61cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_17b620:
    // 0x17b620: 0x8e830014  lw          $v1, 0x14($s4)
    ctx->pc = 0x17b620u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
label_17b624:
    // 0x17b624: 0x263182b  sltu        $v1, $s3, $v1
    ctx->pc = 0x17b624u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_17b628:
    // 0x17b628: 0x1460ffb9  bnez        $v1, . + 4 + (-0x47 << 2)
label_17b62c:
    if (ctx->pc == 0x17B62Cu) {
        ctx->pc = 0x17B630u;
        goto label_17b630;
    }
    ctx->pc = 0x17B628u;
    {
        const bool branch_taken_0x17b628 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x17b628) {
            ctx->pc = 0x17B510u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17b510;
        }
    }
    ctx->pc = 0x17B630u;
label_17b630:
    // 0x17b630: 0x2610002c  addiu       $s0, $s0, 0x2C
    ctx->pc = 0x17b630u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
label_17b634:
    // 0x17b634: 0xc6940030  lwc1        $f20, 0x30($s4)
    ctx->pc = 0x17b634u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_17b638:
    // 0x17b638: 0x2611000c  addiu       $s1, $s0, 0xC
    ctx->pc = 0x17b638u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_17b63c:
    // 0x17b63c: 0xc6960028  lwc1        $f22, 0x28($s4)
    ctx->pc = 0x17b63cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_17b640:
    // 0x17b640: 0xc6950034  lwc1        $f21, 0x34($s4)
    ctx->pc = 0x17b640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_17b644:
    // 0x17b644: 0x4480b800  mtc1        $zero, $f23
    ctx->pc = 0x17b644u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
label_17b648:
    // 0x17b648: 0x1000002c  b           . + 4 + (0x2C << 2)
label_17b64c:
    if (ctx->pc == 0x17B64Cu) {
        ctx->pc = 0x17B64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B648u;
        // 0x17b64c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17B650u;
        goto label_17b650;
    }
    ctx->pc = 0x17B648u;
    {
        const bool branch_taken_0x17b648 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B648u;
        // 0x17b64c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b648) {
            ctx->pc = 0x17B6FCu;
            goto label_17b6fc;
        }
    }
    ctx->pc = 0x17B650u;
label_17b650:
    // 0x17b650: 0xc06d4c0  jal         func_1B5300
label_17b654:
    if (ctx->pc == 0x17B654u) {
        ctx->pc = 0x17B654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B650u;
        // 0x17b654: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x17B658u;
        goto label_17b658;
    }
    ctx->pc = 0x17B650u;
    SET_GPR_U32(ctx, 31, 0x17B658u);
    ctx->pc = 0x17B654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B650u;
    // 0x17b654: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5300u;
    { ctx->pc = 0x1b5300; return; }
    ctx->pc = 0x17B658u;
label_17b658:
    // 0x17b658: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x17b658u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_17b65c:
    // 0x17b65c: 0x32a30100  andi        $v1, $s5, 0x100
    ctx->pc = 0x17b65cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)256);
label_17b660:
    // 0x17b660: 0x46170040  add.s       $f1, $f0, $f23
    ctx->pc = 0x17b660u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[23]);
label_17b664:
    // 0x17b664: 0xe6010008  swc1        $f1, 0x8($s0)
    ctx->pc = 0x17b664u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_17b668:
    // 0x17b668: 0xe6210008  swc1        $f1, 0x8($s1)
    ctx->pc = 0x17b668u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_17b66c:
    // 0x17b66c: 0x26100018  addiu       $s0, $s0, 0x18
    ctx->pc = 0x17b66cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
label_17b670:
    // 0x17b670: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_17b674:
    if (ctx->pc == 0x17B674u) {
        ctx->pc = 0x17B674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B670u;
        // 0x17b674: 0x26310018  addiu       $s1, $s1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17B678u;
        goto label_17b678;
    }
    ctx->pc = 0x17B670u;
    {
        const bool branch_taken_0x17b670 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B670u;
        // 0x17b674: 0x26310018  addiu       $s1, $s1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b670) {
            ctx->pc = 0x17B68Cu;
            goto label_17b68c;
        }
    }
    ctx->pc = 0x17B678u;
label_17b678:
    // 0x17b678: 0x3c033ca3  lui         $v1, 0x3CA3
    ctx->pc = 0x17b678u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15523 << 16));
label_17b67c:
    // 0x17b67c: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x17b67cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
label_17b680:
    // 0x17b680: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x17b680u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_17b684:
    // 0x17b684: 0x0  nop
    ctx->pc = 0x17b684u;
    // NOP
label_17b688:
    // 0x17b688: 0x4601bdc0  add.s       $f23, $f23, $f1
    ctx->pc = 0x17b688u;
    ctx->f[23] = FPU_ADD_S(ctx->f[23], ctx->f[1]);
label_17b68c:
    // 0x17b68c: 0x0  nop
    ctx->pc = 0x17b68cu;
    // NOP
label_17b690:
    // 0x17b690: 0x4600bdc0  add.s       $f23, $f23, $f0
    ctx->pc = 0x17b690u;
    ctx->f[23] = FPU_ADD_S(ctx->f[23], ctx->f[0]);
label_17b694:
    // 0x17b694: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x17b694u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_17b698:
    // 0x17b698: 0x0  nop
    ctx->pc = 0x17b698u;
    // NOP
label_17b69c:
    // 0x17b69c: 0x4600b834  c.lt.s      $f23, $f0
    ctx->pc = 0x17b69cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[23], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_17b6a0:
    // 0x17b6a0: 0x0  nop
    ctx->pc = 0x17b6a0u;
    // NOP
label_17b6a4:
    // 0x17b6a4: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_17b6a8:
    if (ctx->pc == 0x17B6A8u) {
        ctx->pc = 0x17B6ACu;
        goto label_17b6ac;
    }
    ctx->pc = 0x17B6A4u;
    {
        const bool branch_taken_0x17b6a4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x17b6a4) {
            ctx->pc = 0x17B6B0u;
            goto label_17b6b0;
        }
    }
    ctx->pc = 0x17B6ACu;
label_17b6ac:
    // 0x17b6ac: 0x460005c6  mov.s       $f23, $f0
    ctx->pc = 0x17b6acu;
    ctx->f[23] = FPU_MOV_S(ctx->f[0]);
label_17b6b0:
    // 0x17b6b0: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x17b6b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_17b6b4:
    // 0x17b6b4: 0x30830200  andi        $v1, $a0, 0x200
    ctx->pc = 0x17b6b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)512);
label_17b6b8:
    // 0x17b6b8: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_17b6bc:
    if (ctx->pc == 0x17B6BCu) {
        ctx->pc = 0x17B6C0u;
        goto label_17b6c0;
    }
    ctx->pc = 0x17B6B8u;
    {
        const bool branch_taken_0x17b6b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x17b6b8) {
            ctx->pc = 0x17B6D8u;
            goto label_17b6d8;
        }
    }
    ctx->pc = 0x17B6C0u;
label_17b6c0:
    // 0x17b6c0: 0xc681001c  lwc1        $f1, 0x1C($s4)
    ctx->pc = 0x17b6c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_17b6c4:
    // 0x17b6c4: 0xc78081e0  lwc1        $f0, -0x7E20($gp)
    ctx->pc = 0x17b6c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935008)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_17b6c8:
    // 0x17b6c8: 0x46150842  mul.s       $f1, $f1, $f21
    ctx->pc = 0x17b6c8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[21]);
label_17b6cc:
    // 0x17b6cc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x17b6ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_17b6d0:
    // 0x17b6d0: 0x10000009  b           . + 4 + (0x9 << 2)
label_17b6d4:
    if (ctx->pc == 0x17B6D4u) {
        ctx->pc = 0x17B6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B6D0u;
        // 0x17b6d4: 0x4600b580  add.s       $f22, $f22, $f0 (Delay Slot)
        ctx->f[22] = FPU_ADD_S(ctx->f[22], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x17B6D8u;
        goto label_17b6d8;
    }
    ctx->pc = 0x17B6D0u;
    {
        const bool branch_taken_0x17b6d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B6D0u;
        // 0x17b6d4: 0x4600b580  add.s       $f22, $f22, $f0 (Delay Slot)
        ctx->f[22] = FPU_ADD_S(ctx->f[22], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b6d0) {
            ctx->pc = 0x17B6F8u;
            goto label_17b6f8;
        }
    }
    ctx->pc = 0x17B6D8u;
label_17b6d8:
    // 0x17b6d8: 0x30830100  andi        $v1, $a0, 0x100
    ctx->pc = 0x17b6d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)256);
label_17b6dc:
    // 0x17b6dc: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_17b6e0:
    if (ctx->pc == 0x17B6E0u) {
        ctx->pc = 0x17B6E4u;
        goto label_17b6e4;
    }
    ctx->pc = 0x17B6DCu;
    {
        const bool branch_taken_0x17b6dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x17b6dc) {
            ctx->pc = 0x17B6F8u;
            goto label_17b6f8;
        }
    }
    ctx->pc = 0x17B6E4u;
label_17b6e4:
    // 0x17b6e4: 0xc6810020  lwc1        $f1, 0x20($s4)
    ctx->pc = 0x17b6e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_17b6e8:
    // 0x17b6e8: 0xc78081e0  lwc1        $f0, -0x7E20($gp)
    ctx->pc = 0x17b6e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935008)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_17b6ec:
    // 0x17b6ec: 0x46150842  mul.s       $f1, $f1, $f21
    ctx->pc = 0x17b6ecu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[21]);
label_17b6f0:
    // 0x17b6f0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x17b6f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_17b6f4:
    // 0x17b6f4: 0x4600b580  add.s       $f22, $f22, $f0
    ctx->pc = 0x17b6f4u;
    ctx->f[22] = FPU_ADD_S(ctx->f[22], ctx->f[0]);
label_17b6f8:
    // 0x17b6f8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x17b6f8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_17b6fc:
    // 0x17b6fc: 0x0  nop
    ctx->pc = 0x17b6fcu;
    // NOP
label_17b700:
    // 0x17b700: 0x8e830014  lw          $v1, 0x14($s4)
    ctx->pc = 0x17b700u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
label_17b704:
    // 0x17b704: 0x243182b  sltu        $v1, $s2, $v1
    ctx->pc = 0x17b704u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_17b708:
    // 0x17b708: 0x1460ffd1  bnez        $v1, . + 4 + (-0x2F << 2)
label_17b70c:
    if (ctx->pc == 0x17B70Cu) {
        ctx->pc = 0x17B710u;
        goto label_17b710;
    }
    ctx->pc = 0x17B708u;
    {
        const bool branch_taken_0x17b708 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x17b708) {
            ctx->pc = 0x17B650u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17b650;
        }
    }
    ctx->pc = 0x17B710u;
label_17b710:
    // 0x17b710: 0xc6810028  lwc1        $f1, 0x28($s4)
    ctx->pc = 0x17b710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_17b714:
    // 0x17b714: 0x32a30001  andi        $v1, $s5, 0x1
    ctx->pc = 0x17b714u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
label_17b718:
    // 0x17b718: 0xc78081e0  lwc1        $f0, -0x7E20($gp)
    ctx->pc = 0x17b718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935008)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_17b71c:
    // 0x17b71c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x17b71cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_17b720:
    // 0x17b720: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_17b724:
    if (ctx->pc == 0x17B724u) {
        ctx->pc = 0x17B724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B720u;
        // 0x17b724: 0xe6800028  swc1        $f0, 0x28($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 40), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x17B728u;
        goto label_17b728;
    }
    ctx->pc = 0x17B720u;
    {
        const bool branch_taken_0x17b720 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B720u;
        // 0x17b724: 0xe6800028  swc1        $f0, 0x28($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 40), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b720) {
            ctx->pc = 0x17B744u;
            goto label_17b744;
        }
    }
    ctx->pc = 0x17B728u;
label_17b728:
    // 0x17b728: 0xc6810028  lwc1        $f1, 0x28($s4)
    ctx->pc = 0x17b728u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_17b72c:
    // 0x17b72c: 0x3c033c23  lui         $v1, 0x3C23
    ctx->pc = 0x17b72cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15395 << 16));
label_17b730:
    // 0x17b730: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x17b730u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
label_17b734:
    // 0x17b734: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x17b734u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_17b738:
    // 0x17b738: 0x0  nop
    ctx->pc = 0x17b738u;
    // NOP
label_17b73c:
    // 0x17b73c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x17b73cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_17b740:
    // 0x17b740: 0xe6800028  swc1        $f0, 0x28($s4)
    ctx->pc = 0x17b740u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 40), bits); }
label_17b744:
    // 0x17b744: 0xc6800028  lwc1        $f0, 0x28($s4)
    ctx->pc = 0x17b744u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_17b748:
    // 0x17b748: 0x3c0340c9  lui         $v1, 0x40C9
    ctx->pc = 0x17b748u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
label_17b74c:
    // 0x17b74c: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x17b74cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_17b750:
    // 0x17b750: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x17b750u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_17b754:
    // 0x17b754: 0x0  nop
    ctx->pc = 0x17b754u;
    // NOP
label_17b758:
    // 0x17b758: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x17b758u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_17b75c:
    // 0x17b75c: 0x0  nop
    ctx->pc = 0x17b75cu;
    // NOP
label_17b760:
    // 0x17b760: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_17b764:
    if (ctx->pc == 0x17B764u) {
        ctx->pc = 0x17B768u;
        goto label_17b768;
    }
    ctx->pc = 0x17B760u;
    {
        const bool branch_taken_0x17b760 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x17b760) {
            ctx->pc = 0x17B770u;
            goto label_17b770;
        }
    }
    ctx->pc = 0x17B768u;
label_17b768:
    // 0x17b768: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x17b768u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_17b76c:
    // 0x17b76c: 0xe6800028  swc1        $f0, 0x28($s4)
    ctx->pc = 0x17b76cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 40), bits); }
label_17b770:
    // 0x17b770: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x17b770u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_17b774:
    // 0x17b774: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x17b774u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
label_17b778:
    // 0x17b778: 0x1060003d  beqz        $v1, . + 4 + (0x3D << 2)
label_17b77c:
    if (ctx->pc == 0x17B77Cu) {
        ctx->pc = 0x17B780u;
        goto label_17b780;
    }
    ctx->pc = 0x17B778u;
    {
        const bool branch_taken_0x17b778 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x17b778) {
            ctx->pc = 0x17B870u;
            goto label_17b870;
        }
    }
    ctx->pc = 0x17B780u;
label_17b780:
    // 0x17b780: 0xc78381e0  lwc1        $f3, -0x7E20($gp)
    ctx->pc = 0x17b780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935008)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_17b784:
    // 0x17b784: 0x3c04c049  lui         $a0, 0xC049
    ctx->pc = 0x17b784u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49225 << 16));
label_17b788:
    // 0x17b788: 0x34850fdb  ori         $a1, $a0, 0xFDB
    ctx->pc = 0x17b788u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4059);
label_17b78c:
    // 0x17b78c: 0x3c033e99  lui         $v1, 0x3E99
    ctx->pc = 0x17b78cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16025 << 16));
label_17b790:
    // 0x17b790: 0x44851000  mtc1        $a1, $f2
    ctx->pc = 0x17b790u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_17b794:
    // 0x17b794: 0x3464999a  ori         $a0, $v1, 0x999A
    ctx->pc = 0x17b794u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
label_17b798:
    // 0x17b798: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x17b798u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
label_17b79c:
    // 0x17b79c: 0x32a60007  andi        $a2, $s5, 0x7
    ctx->pc = 0x17b79cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)7);
label_17b7a0:
    // 0x17b7a0: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x17b7a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
label_17b7a4:
    // 0x17b7a4: 0x6082b  sltu        $at, $zero, $a2
    ctx->pc = 0x17b7a4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_17b7a8:
    // 0x17b7a8: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x17b7a8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_17b7ac:
    // 0x17b7ac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17b7acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17b7b0:
    // 0x17b7b0: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x17b7b0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_17b7b4:
    // 0x17b7b4: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x17b7b4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_17b7b8:
    // 0x17b7b8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x17b7b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_17b7bc:
    // 0x17b7bc: 0x1020001d  beqz        $at, . + 4 + (0x1D << 2)
label_17b7c0:
    if (ctx->pc == 0x17B7C0u) {
        ctx->pc = 0x17B7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B7BCu;
        // 0x17b7c0: 0x46000901  sub.s       $f4, $f1, $f0 (Delay Slot)
        ctx->f[4] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x17B7C4u;
        goto label_17b7c4;
    }
    ctx->pc = 0x17B7BCu;
    {
        const bool branch_taken_0x17b7bc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B7BCu;
        // 0x17b7c0: 0x46000901  sub.s       $f4, $f1, $f0 (Delay Slot)
        ctx->f[4] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b7bc) {
            ctx->pc = 0x17B834u;
            goto label_17b834;
        }
    }
    ctx->pc = 0x17B7C4u;
label_17b7c4:
    // 0x17b7c4: 0x2cc10009  sltiu       $at, $a2, 0x9
    ctx->pc = 0x17b7c4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
label_17b7c8:
    // 0x17b7c8: 0x14200017  bnez        $at, . + 4 + (0x17 << 2)
label_17b7cc:
    if (ctx->pc == 0x17B7CCu) {
        ctx->pc = 0x17B7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B7C8u;
        // 0x17b7cc: 0x24c4fff8  addiu       $a0, $a2, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17B7D0u;
        goto label_17b7d0;
    }
    ctx->pc = 0x17B7C8u;
    {
        const bool branch_taken_0x17b7c8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x17B7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B7C8u;
        // 0x17b7cc: 0x24c4fff8  addiu       $a0, $a2, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b7c8) {
            ctx->pc = 0x17B828u;
            goto label_17b828;
        }
    }
    ctx->pc = 0x17B7D0u;
label_17b7d0:
    // 0x17b7d0: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x17b7d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
label_17b7d4:
    // 0x17b7d4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x17b7d4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_17b7d8:
    // 0x17b7d8: 0x46001807  neg.s       $f0, $f3
    ctx->pc = 0x17b7d8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[3]);
label_17b7dc:
    // 0x17b7dc: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x17b7dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_17b7e0:
    // 0x17b7e0: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x17b7e0u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
label_17b7e4:
    // 0x17b7e4: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x17b7e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
label_17b7e8:
    // 0x17b7e8: 0xa4182b  sltu        $v1, $a1, $a0
    ctx->pc = 0x17b7e8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_17b7ec:
    // 0x17b7ec: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x17b7ecu;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
label_17b7f0:
    // 0x17b7f0: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x17b7f0u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
label_17b7f4:
    // 0x17b7f4: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x17b7f4u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
label_17b7f8:
    // 0x17b7f8: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x17b7f8u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
label_17b7fc:
    // 0x17b7fc: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x17b7fcu;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
label_17b800:
    // 0x17b800: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x17b800u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
label_17b804:
    // 0x17b804: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
label_17b808:
    if (ctx->pc == 0x17B808u) {
        ctx->pc = 0x17B808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B804u;
        // 0x17b808: 0x46002100  add.s       $f4, $f4, $f0 (Delay Slot)
        ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x17B80Cu;
        goto label_17b80c;
    }
    ctx->pc = 0x17B804u;
    {
        const bool branch_taken_0x17b804 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x17B808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B804u;
        // 0x17b808: 0x46002100  add.s       $f4, $f4, $f0 (Delay Slot)
        ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b804) {
            ctx->pc = 0x17B7E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17b7e0;
        }
    }
    ctx->pc = 0x17B80Cu;
label_17b80c:
    // 0x17b80c: 0x10000006  b           . + 4 + (0x6 << 2)
label_17b810:
    if (ctx->pc == 0x17B810u) {
        ctx->pc = 0x17B814u;
        goto label_17b814;
    }
    ctx->pc = 0x17B80Cu;
    {
        const bool branch_taken_0x17b80c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17b80c) {
            ctx->pc = 0x17B828u;
            goto label_17b828;
        }
    }
    ctx->pc = 0x17B814u;
label_17b814:
    // 0x17b814: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x17b814u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_17b818:
    // 0x17b818: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x17b818u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_17b81c:
    // 0x17b81c: 0x46001807  neg.s       $f0, $f3
    ctx->pc = 0x17b81cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[3]);
label_17b820:
    // 0x17b820: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x17b820u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_17b824:
    // 0x17b824: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x17b824u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
label_17b828:
    // 0x17b828: 0xa6182b  sltu        $v1, $a1, $a2
    ctx->pc = 0x17b828u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_17b82c:
    // 0x17b82c: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
label_17b830:
    if (ctx->pc == 0x17B830u) {
        ctx->pc = 0x17B830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B82Cu;
        // 0x17b830: 0x3c033f00  lui         $v1, 0x3F00 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17B834u;
        goto label_17b834;
    }
    ctx->pc = 0x17B82Cu;
    {
        const bool branch_taken_0x17b82c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x17B830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B82Cu;
        // 0x17b830: 0x3c033f00  lui         $v1, 0x3F00 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b82c) {
            ctx->pc = 0x17B814u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17b814;
        }
    }
    ctx->pc = 0x17B834u;
label_17b834:
    // 0x17b834: 0x0  nop
    ctx->pc = 0x17b834u;
    // NOP
label_17b838:
    // 0x17b838: 0x3c044180  lui         $a0, 0x4180
    ctx->pc = 0x17b838u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16768 << 16));
label_17b83c:
    // 0x17b83c: 0xc6810024  lwc1        $f1, 0x24($s4)
    ctx->pc = 0x17b83cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_17b840:
    // 0x17b840: 0x3c03bdcc  lui         $v1, 0xBDCC
    ctx->pc = 0x17b840u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48588 << 16));
label_17b844:
    // 0x17b844: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x17b844u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
label_17b848:
    // 0x17b848: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x17b848u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_17b84c:
    // 0x17b84c: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x17b84cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_17b850:
    // 0x17b850: 0x46012101  sub.s       $f4, $f4, $f1
    ctx->pc = 0x17b850u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[1]);
label_17b854:
    // 0x17b854: 0x46002003  div.s       $f0, $f4, $f0
    ctx->pc = 0x17b854u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[4] * 0.0f); } else ctx->f[0] = ctx->f[4] / ctx->f[0];
label_17b858:
    // 0x17b858: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x17b858u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_17b85c:
    // 0x17b85c: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x17b85cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_17b860:
    // 0x17b860: 0x0  nop
    ctx->pc = 0x17b860u;
    // NOP
label_17b864:
    // 0x17b864: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_17b868:
    if (ctx->pc == 0x17B868u) {
        ctx->pc = 0x17B868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B864u;
        // 0x17b868: 0xe6800024  swc1        $f0, 0x24($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 36), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x17B86Cu;
        goto label_17b86c;
    }
    ctx->pc = 0x17B864u;
    {
        const bool branch_taken_0x17b864 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x17B868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B864u;
        // 0x17b868: 0xe6800024  swc1        $f0, 0x24($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 36), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b864) {
            ctx->pc = 0x17B870u;
            goto label_17b870;
        }
    }
    ctx->pc = 0x17B86Cu;
label_17b86c:
    // 0x17b86c: 0xe6820024  swc1        $f2, 0x24($s4)
    ctx->pc = 0x17b86cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 36), bits); }
label_17b870:
    // 0x17b870: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x17b870u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_17b874:
    // 0x17b874: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x17b874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_17b878:
    // 0x17b878: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x17b878u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_17b87c:
    // 0x17b87c: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x17b87cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_17b880:
    // 0x17b880: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x17b880u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_17b884:
    // 0x17b884: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x17b884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_17b888:
    // 0x17b888: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x17b888u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_17b88c:
    // 0x17b88c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x17b88cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_17b890:
    // 0x17b890: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x17b890u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_17b894:
    // 0x17b894: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x17b894u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_17b898:
    // 0x17b898: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x17b898u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_17b89c:
    // 0x17b89c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x17b89cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_17b8a0:
    // 0x17b8a0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x17b8a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_17b8a4:
    // 0x17b8a4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x17b8a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_17b8a8:
    // 0x17b8a8: 0x3e00008  jr          $ra
label_17b8ac:
    if (ctx->pc == 0x17B8ACu) {
        ctx->pc = 0x17B8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B8A8u;
        // 0x17b8ac: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17B8B0u;
        goto label_17b8b0;
    }
    ctx->pc = 0x17B8A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17B8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B8A8u;
        // 0x17b8ac: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17B8A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17B8B0u;
label_17b8b0:
    // 0x17b8b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17b8b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_17b8b4:
    // 0x17b8b4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x17b8b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_17b8b8:
    // 0x17b8b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17b8b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_17b8bc:
    // 0x17b8bc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x17b8bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_17b8c0:
    // 0x17b8c0: 0xc066d0a  jal         func_19B428
label_17b8c4:
    if (ctx->pc == 0x17B8C4u) {
        ctx->pc = 0x17B8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B8C0u;
        // 0x17b8c4: 0x2405001c  addiu       $a1, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17B8C8u;
        goto label_17b8c8;
    }
    ctx->pc = 0x17B8C0u;
    SET_GPR_U32(ctx, 31, 0x17B8C8u);
    ctx->pc = 0x17B8C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B8C0u;
    // 0x17b8c4: 0x2405001c  addiu       $a1, $zero, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B428u;
    { ctx->pc = 0x19b428; return; }
    ctx->pc = 0x17B8C8u;
label_17b8c8:
    // 0x17b8c8: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x17b8c8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_17b8cc:
    // 0x17b8cc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17b8ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17b8d0:
    // 0x17b8d0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x17b8d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_17b8d4:
    // 0x17b8d4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x17b8d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17b8d8:
    // 0x17b8d8: 0xc05e990  jal         func_17A640
label_17b8dc:
    if (ctx->pc == 0x17B8DCu) {
        ctx->pc = 0x17B8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B8D8u;
        // 0x17b8dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17B8E0u;
        goto label_17b8e0;
    }
    ctx->pc = 0x17B8D8u;
    SET_GPR_U32(ctx, 31, 0x17B8E0u);
    ctx->pc = 0x17B8DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B8D8u;
    // 0x17b8dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A640u;
    { ctx->pc = 0x17a640; return; }
    ctx->pc = 0x17B8E0u;
label_17b8e0:
    // 0x17b8e0: 0x8f838450  lw          $v1, -0x7BB0($gp)
    ctx->pc = 0x17b8e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935632)));
label_17b8e4:
    // 0x17b8e4: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_17b8e8:
    if (ctx->pc == 0x17B8E8u) {
        ctx->pc = 0x17B8ECu;
        goto label_17b8ec;
    }
    ctx->pc = 0x17B8E4u;
    {
        const bool branch_taken_0x17b8e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x17b8e4) {
            ctx->pc = 0x17B8F4u;
            goto label_17b8f4;
        }
    }
    ctx->pc = 0x17B8ECu;
label_17b8ec:
    // 0x17b8ec: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x17b8ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_17b8f0:
    // 0x17b8f0: 0xe6000044  swc1        $f0, 0x44($s0)
    ctx->pc = 0x17b8f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
label_17b8f4:
    // 0x17b8f4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x17b8f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_17b8f8:
    // 0x17b8f8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17b8f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_17b8fc:
    // 0x17b8fc: 0x3e00008  jr          $ra
label_17b900:
    if (ctx->pc == 0x17B900u) {
        ctx->pc = 0x17B900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B8FCu;
        // 0x17b900: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17B904u;
        goto label_17b904;
    }
    ctx->pc = 0x17B8FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17B900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B8FCu;
        // 0x17b900: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17B8FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17B904u;
label_17b904:
    // 0x17b904: 0x0  nop
    ctx->pc = 0x17b904u;
    // NOP
label_17b908:
    // 0x17b908: 0x0  nop
    ctx->pc = 0x17b908u;
    // NOP
label_17b90c:
    // 0x17b90c: 0x0  nop
    ctx->pc = 0x17b90cu;
    // NOP
label_17b910:
    // 0x17b910: 0x8f828450  lw          $v0, -0x7BB0($gp)
    ctx->pc = 0x17b910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935632)));
label_17b914:
    // 0x17b914: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_17b918:
    if (ctx->pc == 0x17B918u) {
        ctx->pc = 0x17B918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B914u;
        // 0x17b918: 0x24480008  addiu       $t0, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17B91Cu;
        goto label_17b91c;
    }
    ctx->pc = 0x17B914u;
    {
        const bool branch_taken_0x17b914 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17B918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B914u;
        // 0x17b918: 0x24480008  addiu       $t0, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b914) {
            ctx->pc = 0x17B924u;
            goto label_17b924;
        }
    }
    ctx->pc = 0x17B91Cu;
label_17b91c:
    // 0x17b91c: 0x10000012  b           . + 4 + (0x12 << 2)
label_17b920:
    if (ctx->pc == 0x17B920u) {
        ctx->pc = 0x17B920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B91Cu;
        // 0x17b920: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17B924u;
        goto label_17b924;
    }
    ctx->pc = 0x17B91Cu;
    {
        const bool branch_taken_0x17b91c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B91Cu;
        // 0x17b920: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b91c) {
            ctx->pc = 0x17B968u;
            goto label_17b968;
        }
    }
    ctx->pc = 0x17B924u;
label_17b924:
    // 0x17b924: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x17b924u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17b928:
    // 0x17b928: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x17b928u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17b92c:
    // 0x17b92c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x17b92cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_17b930:
    // 0x17b930: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x17b930u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_17b934:
    // 0x17b934: 0x3c064000  lui         $a2, 0x4000
    ctx->pc = 0x17b934u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16384 << 16));
label_17b938:
    // 0x17b938: 0x8d090000  lw          $t1, 0x0($t0)
    ctx->pc = 0x17b938u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_17b93c:
    // 0x17b93c: 0x1261824  and         $v1, $t1, $a2
    ctx->pc = 0x17b93cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) & GPR_U64(ctx, 6));
label_17b940:
    // 0x17b940: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
label_17b944:
    if (ctx->pc == 0x17B944u) {
        ctx->pc = 0x17B944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B940u;
        // 0x17b944: 0xe51804  sllv        $v1, $a1, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 7) & 0x1F));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17B948u;
        goto label_17b948;
    }
    ctx->pc = 0x17B940u;
    {
        const bool branch_taken_0x17b940 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x17B944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B940u;
        // 0x17b944: 0xe51804  sllv        $v1, $a1, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 7) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b940) {
            ctx->pc = 0x17B94Cu;
            goto label_17b94c;
        }
    }
    ctx->pc = 0x17B948u;
label_17b948:
    // 0x17b948: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x17b948u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_17b94c:
    // 0x17b94c: 0x0  nop
    ctx->pc = 0x17b94cu;
    // NOP
label_17b950:
    // 0x17b950: 0x1241824  and         $v1, $t1, $a0
    ctx->pc = 0x17b950u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) & GPR_U64(ctx, 4));
label_17b954:
    // 0x17b954: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
label_17b958:
    if (ctx->pc == 0x17B958u) {
        ctx->pc = 0x17B95Cu;
        goto label_17b95c;
    }
    ctx->pc = 0x17B954u;
    {
        const bool branch_taken_0x17b954 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x17b954) {
            ctx->pc = 0x17B968u;
            goto label_17b968;
        }
    }
    ctx->pc = 0x17B95Cu;
label_17b95c:
    // 0x17b95c: 0x25080044  addiu       $t0, $t0, 0x44
    ctx->pc = 0x17b95cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 68));
label_17b960:
    // 0x17b960: 0x1000fff5  b           . + 4 + (-0xB << 2)
label_17b964:
    if (ctx->pc == 0x17B964u) {
        ctx->pc = 0x17B964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B960u;
        // 0x17b964: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17B968u;
        goto label_17b968;
    }
    ctx->pc = 0x17B960u;
    {
        const bool branch_taken_0x17b960 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B960u;
        // 0x17b964: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b960) {
            ctx->pc = 0x17B938u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17b938;
        }
    }
    ctx->pc = 0x17B968u;
label_17b968:
    // 0x17b968: 0x3e00008  jr          $ra
label_17b96c:
    if (ctx->pc == 0x17B96Cu) {
        ctx->pc = 0x17B970u;
        goto label_17b970;
    }
    ctx->pc = 0x17B968u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17B968u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17B970u;
label_17b970:
    // 0x17b970: 0x8f848450  lw          $a0, -0x7BB0($gp)
    ctx->pc = 0x17b970u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935632)));
label_17b974:
    // 0x17b974: 0x10800024  beqz        $a0, . + 4 + (0x24 << 2)
label_17b978:
    if (ctx->pc == 0x17B978u) {
        ctx->pc = 0x17B978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B974u;
        // 0x17b978: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17B97Cu;
        goto label_17b97c;
    }
    ctx->pc = 0x17B974u;
    {
        const bool branch_taken_0x17b974 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B974u;
        // 0x17b978: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b974) {
            ctx->pc = 0x17BA08u;
            goto label_17ba08;
        }
    }
    ctx->pc = 0x17B97Cu;
label_17b97c:
    // 0x17b97c: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x17b97cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_17b980:
    // 0x17b980: 0x8f838450  lw          $v1, -0x7BB0($gp)
    ctx->pc = 0x17b980u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935632)));
label_17b984:
    // 0x17b984: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x17b984u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_17b988:
    // 0x17b988: 0x8f838450  lw          $v1, -0x7BB0($gp)
    ctx->pc = 0x17b988u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935632)));
label_17b98c:
    // 0x17b98c: 0x246b0008  addiu       $t3, $v1, 0x8
    ctx->pc = 0x17b98cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
label_17b990:
    // 0x17b990: 0x3c043b90  lui         $a0, 0x3B90
    ctx->pc = 0x17b990u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15248 << 16));
label_17b994:
    // 0x17b994: 0x3c033da3  lui         $v1, 0x3DA3
    ctx->pc = 0x17b994u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15779 << 16));
label_17b998:
    // 0x17b998: 0x34862de0  ori         $a2, $a0, 0x2DE0
    ctx->pc = 0x17b998u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)11744);
label_17b99c:
    // 0x17b99c: 0x3465d70a  ori         $a1, $v1, 0xD70A
    ctx->pc = 0x17b99cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
label_17b9a0:
    // 0x17b9a0: 0x3c073f80  lui         $a3, 0x3F80
    ctx->pc = 0x17b9a0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16256 << 16));
label_17b9a4:
    // 0x17b9a4: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x17b9a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_17b9a8:
    // 0x17b9a8: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x17b9a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_17b9ac:
    // 0x17b9ac: 0x256a0004  addiu       $t2, $t3, 0x4
    ctx->pc = 0x17b9acu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
label_17b9b0:
    // 0x17b9b0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x17b9b0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17b9b4:
    // 0x17b9b4: 0x0  nop
    ctx->pc = 0x17b9b4u;
    // NOP
label_17b9b8:
    // 0x17b9b8: 0x15280005  bne         $t1, $t0, . + 4 + (0x5 << 2)
label_17b9bc:
    if (ctx->pc == 0x17B9BCu) {
        ctx->pc = 0x17B9C0u;
        goto label_17b9c0;
    }
    ctx->pc = 0x17B9B8u;
    {
        const bool branch_taken_0x17b9b8 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 8));
        if (branch_taken_0x17b9b8) {
            ctx->pc = 0x17B9D0u;
            goto label_17b9d0;
        }
    }
    ctx->pc = 0x17B9C0u;
label_17b9c0:
    // 0x17b9c0: 0xad40000c  sw          $zero, 0xC($t2)
    ctx->pc = 0x17b9c0u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 12), GPR_U32(ctx, 0));
label_17b9c4:
    // 0x17b9c4: 0xad400010  sw          $zero, 0x10($t2)
    ctx->pc = 0x17b9c4u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 16), GPR_U32(ctx, 0));
label_17b9c8:
    // 0x17b9c8: 0x10000004  b           . + 4 + (0x4 << 2)
label_17b9cc:
    if (ctx->pc == 0x17B9CCu) {
        ctx->pc = 0x17B9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B9C8u;
        // 0x17b9cc: 0xad47001c  sw          $a3, 0x1C($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 28), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17B9D0u;
        goto label_17b9d0;
    }
    ctx->pc = 0x17B9C8u;
    {
        const bool branch_taken_0x17b9c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B9C8u;
        // 0x17b9cc: 0xad47001c  sw          $a3, 0x1C($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 28), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b9c8) {
            ctx->pc = 0x17B9DCu;
            goto label_17b9dc;
        }
    }
    ctx->pc = 0x17B9D0u;
label_17b9d0:
    // 0x17b9d0: 0xad40000c  sw          $zero, 0xC($t2)
    ctx->pc = 0x17b9d0u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 12), GPR_U32(ctx, 0));
label_17b9d4:
    // 0x17b9d4: 0xad460010  sw          $a2, 0x10($t2)
    ctx->pc = 0x17b9d4u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 16), GPR_U32(ctx, 6));
label_17b9d8:
    // 0x17b9d8: 0xad45001c  sw          $a1, 0x1C($t2)
    ctx->pc = 0x17b9d8u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 28), GPR_U32(ctx, 5));
label_17b9dc:
    // 0x17b9dc: 0x0  nop
    ctx->pc = 0x17b9dcu;
    // NOP
label_17b9e0:
    // 0x17b9e0: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x17b9e0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_17b9e4:
    // 0x17b9e4: 0x2d230002  sltiu       $v1, $t1, 0x2
    ctx->pc = 0x17b9e4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_17b9e8:
    // 0x17b9e8: 0x1460fff2  bnez        $v1, . + 4 + (-0xE << 2)
label_17b9ec:
    if (ctx->pc == 0x17B9ECu) {
        ctx->pc = 0x17B9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B9E8u;
        // 0x17b9ec: 0x254a0020  addiu       $t2, $t2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17B9F0u;
        goto label_17b9f0;
    }
    ctx->pc = 0x17B9E8u;
    {
        const bool branch_taken_0x17b9e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x17B9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B9E8u;
        // 0x17b9ec: 0x254a0020  addiu       $t2, $t2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b9e8) {
            ctx->pc = 0x17B9B4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17b9b4;
        }
    }
    ctx->pc = 0x17B9F0u;
label_17b9f0:
    // 0x17b9f0: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x17b9f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
label_17b9f4:
    // 0x17b9f4: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x17b9f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_17b9f8:
    // 0x17b9f8: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_17b9fc:
    if (ctx->pc == 0x17B9FCu) {
        ctx->pc = 0x17BA00u;
        goto label_17ba00;
    }
    ctx->pc = 0x17B9F8u;
    {
        const bool branch_taken_0x17b9f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x17b9f8) {
            ctx->pc = 0x17BA08u;
            goto label_17ba08;
        }
    }
    ctx->pc = 0x17BA00u;
label_17ba00:
    // 0x17ba00: 0x1000ffea  b           . + 4 + (-0x16 << 2)
label_17ba04:
    if (ctx->pc == 0x17BA04u) {
        ctx->pc = 0x17BA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BA00u;
        // 0x17ba04: 0x256b0044  addiu       $t3, $t3, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 68));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17BA08u;
        goto label_17ba08;
    }
    ctx->pc = 0x17BA00u;
    {
        const bool branch_taken_0x17ba00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17BA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BA00u;
        // 0x17ba04: 0x256b0044  addiu       $t3, $t3, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 68));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ba00) {
            ctx->pc = 0x17B9ACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17b9ac;
        }
    }
    ctx->pc = 0x17BA08u;
label_17ba08:
    // 0x17ba08: 0x3e00008  jr          $ra
label_17ba0c:
    if (ctx->pc == 0x17BA0Cu) {
        ctx->pc = 0x17BA10u;
        goto label_17ba10;
    }
    ctx->pc = 0x17BA08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17BA08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17BA10u;
label_17ba10:
    // 0x17ba10: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x17ba10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_17ba14:
    // 0x17ba14: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x17ba14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_17ba18:
    // 0x17ba18: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x17ba18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_17ba1c:
    // 0x17ba1c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17ba1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_17ba20:
    // 0x17ba20: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17ba20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_17ba24:
    // 0x17ba24: 0x8f858450  lw          $a1, -0x7BB0($gp)
    ctx->pc = 0x17ba24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935632)));
label_17ba28:
    // 0x17ba28: 0x10a0009b  beqz        $a1, . + 4 + (0x9B << 2)
label_17ba2c:
    if (ctx->pc == 0x17BA2Cu) {
        ctx->pc = 0x17BA30u;
        goto label_17ba30;
    }
    ctx->pc = 0x17BA28u;
    {
        const bool branch_taken_0x17ba28 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x17ba28) {
            ctx->pc = 0x17BC98u;
            { ctx->pc = 0x17bc98; return; }
        }
    }
    ctx->pc = 0x17BA30u;
label_17ba30:
    // 0x17ba30: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x17ba30u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_17ba34:
    // 0x17ba34: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x17ba34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_17ba38:
    // 0x17ba38: 0x10c3001a  beq         $a2, $v1, . + 4 + (0x1A << 2)
label_17ba3c:
    if (ctx->pc == 0x17BA3Cu) {
        ctx->pc = 0x17BA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BA38u;
        // 0x17ba3c: 0x30c303c0  andi        $v1, $a2, 0x3C0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)960);
        ctx->in_delay_slot = false;
        ctx->pc = 0x17BA40u;
        goto label_17ba40;
    }
    ctx->pc = 0x17BA38u;
    {
        const bool branch_taken_0x17ba38 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x17BA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BA38u;
        // 0x17ba3c: 0x30c303c0  andi        $v1, $a2, 0x3C0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)960);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ba38) {
            ctx->pc = 0x17BAA4u;
            { ctx->pc = 0x17baa4; return; }
        }
    }
    ctx->pc = 0x17BA40u;
label_17ba40:
    // 0x17ba40: 0x31982  srl         $v1, $v1, 6
    ctx->pc = 0x17ba40u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 6));
label_17ba44:
    // 0x17ba44: 0x2c610008  sltiu       $at, $v1, 0x8
    ctx->pc = 0x17ba44u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_17ba48:
    // 0x17ba48: 0x14200009  bnez        $at, . + 4 + (0x9 << 2)
label_17ba4c:
    if (ctx->pc == 0x17BA4Cu) {
        ctx->pc = 0x17BA50u;
        goto label_17ba50;
    }
    ctx->pc = 0x17BA48u;
    {
        const bool branch_taken_0x17ba48 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x17ba48) {
            ctx->pc = 0x17BA70u;
            { ctx->pc = 0x17ba70; return; }
        }
    }
    ctx->pc = 0x17BA50u;
label_17ba50:
    // 0x17ba50: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x17ba50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_17ba54:
    // 0x17ba54: 0x3c033c23  lui         $v1, 0x3C23
    ctx->pc = 0x17ba54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15395 << 16));
label_17ba58:
    // 0x17ba58: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x17ba58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
label_17ba5c:
    // 0x17ba5c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x17ba5cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    ctx->pc = 0x17ba60u;
    return;
}
