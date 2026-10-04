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

// Function: FUN_001d49b0
// Address: 0x1d49b0 - 0x254d4c
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_001d49b0_part211(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x23b250u: goto label_23b250;
        case 0x23b254u: goto label_23b254;
        case 0x23b258u: goto label_23b258;
        case 0x23b25cu: goto label_23b25c;
        case 0x23b260u: goto label_23b260;
        case 0x23b264u: goto label_23b264;
        case 0x23b268u: goto label_23b268;
        case 0x23b26cu: goto label_23b26c;
        case 0x23b270u: goto label_23b270;
        case 0x23b274u: goto label_23b274;
        case 0x23b278u: goto label_23b278;
        case 0x23b27cu: goto label_23b27c;
        case 0x23b280u: goto label_23b280;
        case 0x23b284u: goto label_23b284;
        case 0x23b288u: goto label_23b288;
        case 0x23b28cu: goto label_23b28c;
        case 0x23b290u: goto label_23b290;
        case 0x23b294u: goto label_23b294;
        case 0x23b298u: goto label_23b298;
        case 0x23b29cu: goto label_23b29c;
        case 0x23b2a0u: goto label_23b2a0;
        case 0x23b2a4u: goto label_23b2a4;
        case 0x23b2a8u: goto label_23b2a8;
        case 0x23b2acu: goto label_23b2ac;
        case 0x23b2b0u: goto label_23b2b0;
        case 0x23b2b4u: goto label_23b2b4;
        case 0x23b2b8u: goto label_23b2b8;
        case 0x23b2bcu: goto label_23b2bc;
        case 0x23b2c0u: goto label_23b2c0;
        case 0x23b2c4u: goto label_23b2c4;
        case 0x23b2c8u: goto label_23b2c8;
        case 0x23b2ccu: goto label_23b2cc;
        case 0x23b2d0u: goto label_23b2d0;
        case 0x23b2d4u: goto label_23b2d4;
        case 0x23b2d8u: goto label_23b2d8;
        case 0x23b2dcu: goto label_23b2dc;
        case 0x23b2e0u: goto label_23b2e0;
        case 0x23b2e4u: goto label_23b2e4;
        case 0x23b2e8u: goto label_23b2e8;
        case 0x23b2ecu: goto label_23b2ec;
        case 0x23b2f0u: goto label_23b2f0;
        case 0x23b2f4u: goto label_23b2f4;
        case 0x23b2f8u: goto label_23b2f8;
        case 0x23b2fcu: goto label_23b2fc;
        case 0x23b300u: goto label_23b300;
        case 0x23b304u: goto label_23b304;
        case 0x23b308u: goto label_23b308;
        case 0x23b30cu: goto label_23b30c;
        case 0x23b310u: goto label_23b310;
        case 0x23b314u: goto label_23b314;
        case 0x23b318u: goto label_23b318;
        case 0x23b31cu: goto label_23b31c;
        case 0x23b320u: goto label_23b320;
        case 0x23b324u: goto label_23b324;
        case 0x23b328u: goto label_23b328;
        case 0x23b32cu: goto label_23b32c;
        case 0x23b330u: goto label_23b330;
        case 0x23b334u: goto label_23b334;
        case 0x23b338u: goto label_23b338;
        case 0x23b33cu: goto label_23b33c;
        case 0x23b340u: goto label_23b340;
        case 0x23b344u: goto label_23b344;
        case 0x23b348u: goto label_23b348;
        case 0x23b34cu: goto label_23b34c;
        case 0x23b350u: goto label_23b350;
        case 0x23b354u: goto label_23b354;
        case 0x23b358u: goto label_23b358;
        case 0x23b35cu: goto label_23b35c;
        case 0x23b360u: goto label_23b360;
        case 0x23b364u: goto label_23b364;
        case 0x23b368u: goto label_23b368;
        case 0x23b36cu: goto label_23b36c;
        case 0x23b370u: goto label_23b370;
        case 0x23b374u: goto label_23b374;
        case 0x23b378u: goto label_23b378;
        case 0x23b37cu: goto label_23b37c;
        case 0x23b380u: goto label_23b380;
        case 0x23b384u: goto label_23b384;
        case 0x23b388u: goto label_23b388;
        case 0x23b38cu: goto label_23b38c;
        case 0x23b390u: goto label_23b390;
        case 0x23b394u: goto label_23b394;
        case 0x23b398u: goto label_23b398;
        case 0x23b39cu: goto label_23b39c;
        case 0x23b3a0u: goto label_23b3a0;
        case 0x23b3a4u: goto label_23b3a4;
        case 0x23b3a8u: goto label_23b3a8;
        case 0x23b3acu: goto label_23b3ac;
        case 0x23b3b0u: goto label_23b3b0;
        case 0x23b3b4u: goto label_23b3b4;
        case 0x23b3b8u: goto label_23b3b8;
        case 0x23b3bcu: goto label_23b3bc;
        case 0x23b3c0u: goto label_23b3c0;
        case 0x23b3c4u: goto label_23b3c4;
        case 0x23b3c8u: goto label_23b3c8;
        case 0x23b3ccu: goto label_23b3cc;
        case 0x23b3d0u: goto label_23b3d0;
        case 0x23b3d4u: goto label_23b3d4;
        case 0x23b3d8u: goto label_23b3d8;
        case 0x23b3dcu: goto label_23b3dc;
        case 0x23b3e0u: goto label_23b3e0;
        case 0x23b3e4u: goto label_23b3e4;
        case 0x23b3e8u: goto label_23b3e8;
        case 0x23b3ecu: goto label_23b3ec;
        case 0x23b3f0u: goto label_23b3f0;
        case 0x23b3f4u: goto label_23b3f4;
        case 0x23b3f8u: goto label_23b3f8;
        case 0x23b3fcu: goto label_23b3fc;
        case 0x23b400u: goto label_23b400;
        case 0x23b404u: goto label_23b404;
        case 0x23b408u: goto label_23b408;
        case 0x23b40cu: goto label_23b40c;
        case 0x23b410u: goto label_23b410;
        case 0x23b414u: goto label_23b414;
        case 0x23b418u: goto label_23b418;
        case 0x23b41cu: goto label_23b41c;
        case 0x23b420u: goto label_23b420;
        case 0x23b424u: goto label_23b424;
        case 0x23b428u: goto label_23b428;
        case 0x23b42cu: goto label_23b42c;
        case 0x23b430u: goto label_23b430;
        case 0x23b434u: goto label_23b434;
        case 0x23b438u: goto label_23b438;
        case 0x23b43cu: goto label_23b43c;
        case 0x23b440u: goto label_23b440;
        case 0x23b444u: goto label_23b444;
        case 0x23b448u: goto label_23b448;
        case 0x23b44cu: goto label_23b44c;
        case 0x23b450u: goto label_23b450;
        case 0x23b454u: goto label_23b454;
        case 0x23b458u: goto label_23b458;
        case 0x23b45cu: goto label_23b45c;
        case 0x23b460u: goto label_23b460;
        case 0x23b464u: goto label_23b464;
        case 0x23b468u: goto label_23b468;
        case 0x23b46cu: goto label_23b46c;
        case 0x23b470u: goto label_23b470;
        case 0x23b474u: goto label_23b474;
        case 0x23b478u: goto label_23b478;
        case 0x23b47cu: goto label_23b47c;
        case 0x23b480u: goto label_23b480;
        case 0x23b484u: goto label_23b484;
        case 0x23b488u: goto label_23b488;
        case 0x23b48cu: goto label_23b48c;
        case 0x23b490u: goto label_23b490;
        case 0x23b494u: goto label_23b494;
        case 0x23b498u: goto label_23b498;
        case 0x23b49cu: goto label_23b49c;
        case 0x23b4a0u: goto label_23b4a0;
        case 0x23b4a4u: goto label_23b4a4;
        case 0x23b4a8u: goto label_23b4a8;
        case 0x23b4acu: goto label_23b4ac;
        case 0x23b4b0u: goto label_23b4b0;
        case 0x23b4b4u: goto label_23b4b4;
        case 0x23b4b8u: goto label_23b4b8;
        case 0x23b4bcu: goto label_23b4bc;
        case 0x23b4c0u: goto label_23b4c0;
        case 0x23b4c4u: goto label_23b4c4;
        case 0x23b4c8u: goto label_23b4c8;
        case 0x23b4ccu: goto label_23b4cc;
        case 0x23b4d0u: goto label_23b4d0;
        case 0x23b4d4u: goto label_23b4d4;
        case 0x23b4d8u: goto label_23b4d8;
        case 0x23b4dcu: goto label_23b4dc;
        case 0x23b4e0u: goto label_23b4e0;
        case 0x23b4e4u: goto label_23b4e4;
        case 0x23b4e8u: goto label_23b4e8;
        case 0x23b4ecu: goto label_23b4ec;
        case 0x23b4f0u: goto label_23b4f0;
        case 0x23b4f4u: goto label_23b4f4;
        case 0x23b4f8u: goto label_23b4f8;
        case 0x23b4fcu: goto label_23b4fc;
        case 0x23b500u: goto label_23b500;
        case 0x23b504u: goto label_23b504;
        case 0x23b508u: goto label_23b508;
        case 0x23b50cu: goto label_23b50c;
        case 0x23b510u: goto label_23b510;
        case 0x23b514u: goto label_23b514;
        case 0x23b518u: goto label_23b518;
        case 0x23b51cu: goto label_23b51c;
        case 0x23b520u: goto label_23b520;
        case 0x23b524u: goto label_23b524;
        case 0x23b528u: goto label_23b528;
        case 0x23b52cu: goto label_23b52c;
        case 0x23b530u: goto label_23b530;
        case 0x23b534u: goto label_23b534;
        case 0x23b538u: goto label_23b538;
        case 0x23b53cu: goto label_23b53c;
        case 0x23b540u: goto label_23b540;
        case 0x23b544u: goto label_23b544;
        case 0x23b548u: goto label_23b548;
        case 0x23b54cu: goto label_23b54c;
        case 0x23b550u: goto label_23b550;
        case 0x23b554u: goto label_23b554;
        case 0x23b558u: goto label_23b558;
        case 0x23b55cu: goto label_23b55c;
        case 0x23b560u: goto label_23b560;
        case 0x23b564u: goto label_23b564;
        case 0x23b568u: goto label_23b568;
        case 0x23b56cu: goto label_23b56c;
        case 0x23b570u: goto label_23b570;
        case 0x23b574u: goto label_23b574;
        case 0x23b578u: goto label_23b578;
        case 0x23b57cu: goto label_23b57c;
        case 0x23b580u: goto label_23b580;
        case 0x23b584u: goto label_23b584;
        case 0x23b588u: goto label_23b588;
        case 0x23b58cu: goto label_23b58c;
        case 0x23b590u: goto label_23b590;
        case 0x23b594u: goto label_23b594;
        case 0x23b598u: goto label_23b598;
        case 0x23b59cu: goto label_23b59c;
        case 0x23b5a0u: goto label_23b5a0;
        case 0x23b5a4u: goto label_23b5a4;
        case 0x23b5a8u: goto label_23b5a8;
        case 0x23b5acu: goto label_23b5ac;
        case 0x23b5b0u: goto label_23b5b0;
        case 0x23b5b4u: goto label_23b5b4;
        case 0x23b5b8u: goto label_23b5b8;
        case 0x23b5bcu: goto label_23b5bc;
        case 0x23b5c0u: goto label_23b5c0;
        case 0x23b5c4u: goto label_23b5c4;
        case 0x23b5c8u: goto label_23b5c8;
        case 0x23b5ccu: goto label_23b5cc;
        case 0x23b5d0u: goto label_23b5d0;
        case 0x23b5d4u: goto label_23b5d4;
        case 0x23b5d8u: goto label_23b5d8;
        case 0x23b5dcu: goto label_23b5dc;
        case 0x23b5e0u: goto label_23b5e0;
        case 0x23b5e4u: goto label_23b5e4;
        case 0x23b5e8u: goto label_23b5e8;
        case 0x23b5ecu: goto label_23b5ec;
        case 0x23b5f0u: goto label_23b5f0;
        case 0x23b5f4u: goto label_23b5f4;
        case 0x23b5f8u: goto label_23b5f8;
        case 0x23b5fcu: goto label_23b5fc;
        case 0x23b600u: goto label_23b600;
        case 0x23b604u: goto label_23b604;
        case 0x23b608u: goto label_23b608;
        case 0x23b60cu: goto label_23b60c;
        case 0x23b610u: goto label_23b610;
        case 0x23b614u: goto label_23b614;
        case 0x23b618u: goto label_23b618;
        case 0x23b61cu: goto label_23b61c;
        case 0x23b620u: goto label_23b620;
        case 0x23b624u: goto label_23b624;
        case 0x23b628u: goto label_23b628;
        case 0x23b62cu: goto label_23b62c;
        case 0x23b630u: goto label_23b630;
        case 0x23b634u: goto label_23b634;
        case 0x23b638u: goto label_23b638;
        case 0x23b63cu: goto label_23b63c;
        case 0x23b640u: goto label_23b640;
        case 0x23b644u: goto label_23b644;
        case 0x23b648u: goto label_23b648;
        case 0x23b64cu: goto label_23b64c;
        case 0x23b650u: goto label_23b650;
        case 0x23b654u: goto label_23b654;
        case 0x23b658u: goto label_23b658;
        case 0x23b65cu: goto label_23b65c;
        case 0x23b660u: goto label_23b660;
        case 0x23b664u: goto label_23b664;
        case 0x23b668u: goto label_23b668;
        case 0x23b66cu: goto label_23b66c;
        case 0x23b670u: goto label_23b670;
        case 0x23b674u: goto label_23b674;
        case 0x23b678u: goto label_23b678;
        case 0x23b67cu: goto label_23b67c;
        case 0x23b680u: goto label_23b680;
        case 0x23b684u: goto label_23b684;
        case 0x23b688u: goto label_23b688;
        case 0x23b68cu: goto label_23b68c;
        case 0x23b690u: goto label_23b690;
        case 0x23b694u: goto label_23b694;
        case 0x23b698u: goto label_23b698;
        case 0x23b69cu: goto label_23b69c;
        case 0x23b6a0u: goto label_23b6a0;
        case 0x23b6a4u: goto label_23b6a4;
        case 0x23b6a8u: goto label_23b6a8;
        case 0x23b6acu: goto label_23b6ac;
        case 0x23b6b0u: goto label_23b6b0;
        case 0x23b6b4u: goto label_23b6b4;
        case 0x23b6b8u: goto label_23b6b8;
        case 0x23b6bcu: goto label_23b6bc;
        case 0x23b6c0u: goto label_23b6c0;
        case 0x23b6c4u: goto label_23b6c4;
        case 0x23b6c8u: goto label_23b6c8;
        case 0x23b6ccu: goto label_23b6cc;
        case 0x23b6d0u: goto label_23b6d0;
        case 0x23b6d4u: goto label_23b6d4;
        case 0x23b6d8u: goto label_23b6d8;
        case 0x23b6dcu: goto label_23b6dc;
        case 0x23b6e0u: goto label_23b6e0;
        case 0x23b6e4u: goto label_23b6e4;
        case 0x23b6e8u: goto label_23b6e8;
        case 0x23b6ecu: goto label_23b6ec;
        case 0x23b6f0u: goto label_23b6f0;
        case 0x23b6f4u: goto label_23b6f4;
        case 0x23b6f8u: goto label_23b6f8;
        case 0x23b6fcu: goto label_23b6fc;
        case 0x23b700u: goto label_23b700;
        case 0x23b704u: goto label_23b704;
        case 0x23b708u: goto label_23b708;
        case 0x23b70cu: goto label_23b70c;
        case 0x23b710u: goto label_23b710;
        case 0x23b714u: goto label_23b714;
        case 0x23b718u: goto label_23b718;
        case 0x23b71cu: goto label_23b71c;
        case 0x23b720u: goto label_23b720;
        case 0x23b724u: goto label_23b724;
        case 0x23b728u: goto label_23b728;
        case 0x23b72cu: goto label_23b72c;
        case 0x23b730u: goto label_23b730;
        case 0x23b734u: goto label_23b734;
        case 0x23b738u: goto label_23b738;
        case 0x23b73cu: goto label_23b73c;
        case 0x23b740u: goto label_23b740;
        case 0x23b744u: goto label_23b744;
        case 0x23b748u: goto label_23b748;
        case 0x23b74cu: goto label_23b74c;
        case 0x23b750u: goto label_23b750;
        case 0x23b754u: goto label_23b754;
        case 0x23b758u: goto label_23b758;
        case 0x23b75cu: goto label_23b75c;
        case 0x23b760u: goto label_23b760;
        case 0x23b764u: goto label_23b764;
        case 0x23b768u: goto label_23b768;
        case 0x23b76cu: goto label_23b76c;
        case 0x23b770u: goto label_23b770;
        case 0x23b774u: goto label_23b774;
        case 0x23b778u: goto label_23b778;
        case 0x23b77cu: goto label_23b77c;
        case 0x23b780u: goto label_23b780;
        case 0x23b784u: goto label_23b784;
        case 0x23b788u: goto label_23b788;
        case 0x23b78cu: goto label_23b78c;
        case 0x23b790u: goto label_23b790;
        case 0x23b794u: goto label_23b794;
        case 0x23b798u: goto label_23b798;
        case 0x23b79cu: goto label_23b79c;
        case 0x23b7a0u: goto label_23b7a0;
        case 0x23b7a4u: goto label_23b7a4;
        case 0x23b7a8u: goto label_23b7a8;
        case 0x23b7acu: goto label_23b7ac;
        case 0x23b7b0u: goto label_23b7b0;
        case 0x23b7b4u: goto label_23b7b4;
        case 0x23b7b8u: goto label_23b7b8;
        case 0x23b7bcu: goto label_23b7bc;
        case 0x23b7c0u: goto label_23b7c0;
        case 0x23b7c4u: goto label_23b7c4;
        case 0x23b7c8u: goto label_23b7c8;
        case 0x23b7ccu: goto label_23b7cc;
        case 0x23b7d0u: goto label_23b7d0;
        case 0x23b7d4u: goto label_23b7d4;
        case 0x23b7d8u: goto label_23b7d8;
        case 0x23b7dcu: goto label_23b7dc;
        case 0x23b7e0u: goto label_23b7e0;
        case 0x23b7e4u: goto label_23b7e4;
        case 0x23b7e8u: goto label_23b7e8;
        case 0x23b7ecu: goto label_23b7ec;
        case 0x23b7f0u: goto label_23b7f0;
        case 0x23b7f4u: goto label_23b7f4;
        case 0x23b7f8u: goto label_23b7f8;
        case 0x23b7fcu: goto label_23b7fc;
        case 0x23b800u: goto label_23b800;
        case 0x23b804u: goto label_23b804;
        case 0x23b808u: goto label_23b808;
        case 0x23b80cu: goto label_23b80c;
        case 0x23b810u: goto label_23b810;
        case 0x23b814u: goto label_23b814;
        case 0x23b818u: goto label_23b818;
        case 0x23b81cu: goto label_23b81c;
        case 0x23b820u: goto label_23b820;
        case 0x23b824u: goto label_23b824;
        case 0x23b828u: goto label_23b828;
        case 0x23b82cu: goto label_23b82c;
        case 0x23b830u: goto label_23b830;
        case 0x23b834u: goto label_23b834;
        case 0x23b838u: goto label_23b838;
        case 0x23b83cu: goto label_23b83c;
        case 0x23b840u: goto label_23b840;
        case 0x23b844u: goto label_23b844;
        case 0x23b848u: goto label_23b848;
        case 0x23b84cu: goto label_23b84c;
        case 0x23b850u: goto label_23b850;
        case 0x23b854u: goto label_23b854;
        case 0x23b858u: goto label_23b858;
        case 0x23b85cu: goto label_23b85c;
        case 0x23b860u: goto label_23b860;
        case 0x23b864u: goto label_23b864;
        case 0x23b868u: goto label_23b868;
        case 0x23b86cu: goto label_23b86c;
        case 0x23b870u: goto label_23b870;
        case 0x23b874u: goto label_23b874;
        case 0x23b878u: goto label_23b878;
        case 0x23b87cu: goto label_23b87c;
        case 0x23b880u: goto label_23b880;
        case 0x23b884u: goto label_23b884;
        case 0x23b888u: goto label_23b888;
        case 0x23b88cu: goto label_23b88c;
        case 0x23b890u: goto label_23b890;
        case 0x23b894u: goto label_23b894;
        case 0x23b898u: goto label_23b898;
        case 0x23b89cu: goto label_23b89c;
        case 0x23b8a0u: goto label_23b8a0;
        case 0x23b8a4u: goto label_23b8a4;
        case 0x23b8a8u: goto label_23b8a8;
        case 0x23b8acu: goto label_23b8ac;
        case 0x23b8b0u: goto label_23b8b0;
        case 0x23b8b4u: goto label_23b8b4;
        case 0x23b8b8u: goto label_23b8b8;
        case 0x23b8bcu: goto label_23b8bc;
        case 0x23b8c0u: goto label_23b8c0;
        case 0x23b8c4u: goto label_23b8c4;
        case 0x23b8c8u: goto label_23b8c8;
        case 0x23b8ccu: goto label_23b8cc;
        case 0x23b8d0u: goto label_23b8d0;
        case 0x23b8d4u: goto label_23b8d4;
        case 0x23b8d8u: goto label_23b8d8;
        case 0x23b8dcu: goto label_23b8dc;
        case 0x23b8e0u: goto label_23b8e0;
        case 0x23b8e4u: goto label_23b8e4;
        case 0x23b8e8u: goto label_23b8e8;
        case 0x23b8ecu: goto label_23b8ec;
        case 0x23b8f0u: goto label_23b8f0;
        case 0x23b8f4u: goto label_23b8f4;
        case 0x23b8f8u: goto label_23b8f8;
        case 0x23b8fcu: goto label_23b8fc;
        case 0x23b900u: goto label_23b900;
        case 0x23b904u: goto label_23b904;
        case 0x23b908u: goto label_23b908;
        case 0x23b90cu: goto label_23b90c;
        case 0x23b910u: goto label_23b910;
        case 0x23b914u: goto label_23b914;
        case 0x23b918u: goto label_23b918;
        case 0x23b91cu: goto label_23b91c;
        case 0x23b920u: goto label_23b920;
        case 0x23b924u: goto label_23b924;
        case 0x23b928u: goto label_23b928;
        case 0x23b92cu: goto label_23b92c;
        case 0x23b930u: goto label_23b930;
        case 0x23b934u: goto label_23b934;
        case 0x23b938u: goto label_23b938;
        case 0x23b93cu: goto label_23b93c;
        case 0x23b940u: goto label_23b940;
        case 0x23b944u: goto label_23b944;
        case 0x23b948u: goto label_23b948;
        case 0x23b94cu: goto label_23b94c;
        case 0x23b950u: goto label_23b950;
        case 0x23b954u: goto label_23b954;
        case 0x23b958u: goto label_23b958;
        case 0x23b95cu: goto label_23b95c;
        case 0x23b960u: goto label_23b960;
        case 0x23b964u: goto label_23b964;
        case 0x23b968u: goto label_23b968;
        case 0x23b96cu: goto label_23b96c;
        case 0x23b970u: goto label_23b970;
        case 0x23b974u: goto label_23b974;
        case 0x23b978u: goto label_23b978;
        case 0x23b97cu: goto label_23b97c;
        case 0x23b980u: goto label_23b980;
        case 0x23b984u: goto label_23b984;
        case 0x23b988u: goto label_23b988;
        case 0x23b98cu: goto label_23b98c;
        case 0x23b990u: goto label_23b990;
        case 0x23b994u: goto label_23b994;
        case 0x23b998u: goto label_23b998;
        case 0x23b99cu: goto label_23b99c;
        case 0x23b9a0u: goto label_23b9a0;
        case 0x23b9a4u: goto label_23b9a4;
        case 0x23b9a8u: goto label_23b9a8;
        case 0x23b9acu: goto label_23b9ac;
        case 0x23b9b0u: goto label_23b9b0;
        case 0x23b9b4u: goto label_23b9b4;
        case 0x23b9b8u: goto label_23b9b8;
        case 0x23b9bcu: goto label_23b9bc;
        case 0x23b9c0u: goto label_23b9c0;
        case 0x23b9c4u: goto label_23b9c4;
        case 0x23b9c8u: goto label_23b9c8;
        case 0x23b9ccu: goto label_23b9cc;
        case 0x23b9d0u: goto label_23b9d0;
        case 0x23b9d4u: goto label_23b9d4;
        case 0x23b9d8u: goto label_23b9d8;
        case 0x23b9dcu: goto label_23b9dc;
        case 0x23b9e0u: goto label_23b9e0;
        case 0x23b9e4u: goto label_23b9e4;
        case 0x23b9e8u: goto label_23b9e8;
        case 0x23b9ecu: goto label_23b9ec;
        case 0x23b9f0u: goto label_23b9f0;
        case 0x23b9f4u: goto label_23b9f4;
        case 0x23b9f8u: goto label_23b9f8;
        case 0x23b9fcu: goto label_23b9fc;
        case 0x23ba00u: goto label_23ba00;
        case 0x23ba04u: goto label_23ba04;
        case 0x23ba08u: goto label_23ba08;
        case 0x23ba0cu: goto label_23ba0c;
        case 0x23ba10u: goto label_23ba10;
        case 0x23ba14u: goto label_23ba14;
        case 0x23ba18u: goto label_23ba18;
        case 0x23ba1cu: goto label_23ba1c;
        default: return;
    }

label_23b250:
    // 0x23b250: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x23b250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_23b254:
    // 0x23b254: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x23b254u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
label_23b258:
    // 0x23b258: 0x30a3ffff  andi        $v1, $a1, 0xFFFF
    ctx->pc = 0x23b258u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
label_23b25c:
    // 0x23b25c: 0x52c02  srl         $a1, $a1, 16
    ctx->pc = 0x23b25cu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 16));
label_23b260:
    // 0x23b260: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x23b260u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_23b264:
    // 0x23b264: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x23b264u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
label_23b268:
    // 0x23b268: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x23b268u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_23b26c:
    // 0x23b26c: 0xa22823  subu        $a1, $a1, $v0
    ctx->pc = 0x23b26cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_23b270:
    // 0x23b270: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x23b270u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
label_23b274:
    // 0x23b274: 0x126102b  sltu        $v0, $t1, $a2
    ctx->pc = 0x23b274u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_23b278:
    // 0x23b278: 0x35403  sra         $t2, $v1, 16
    ctx->pc = 0x23b278u;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 3), 16));
label_23b27c:
    // 0x23b27c: 0xa4e30000  sh          $v1, 0x0($a3)
    ctx->pc = 0x23b27cu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 3));
label_23b280:
    // 0x23b280: 0xaa2821  addu        $a1, $a1, $t2
    ctx->pc = 0x23b280u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 10)));
label_23b284:
    // 0x23b284: 0xa4e50002  sh          $a1, 0x2($a3)
    ctx->pc = 0x23b284u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 2), (uint16_t)GPR_U32(ctx, 5));
label_23b288:
    // 0x23b288: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x23b288u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
label_23b28c:
    // 0x23b28c: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
label_23b290:
    if (ctx->pc == 0x23B290u) {
        ctx->pc = 0x23B290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B28Cu;
        // 0x23b290: 0x55403  sra         $t2, $a1, 16 (Delay Slot)
        SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B294u;
        goto label_23b294;
    }
    ctx->pc = 0x23B28Cu;
    {
        const bool branch_taken_0x23b28c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23B290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B28Cu;
        // 0x23b290: 0x55403  sra         $t2, $a1, 16 (Delay Slot)
        SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b28c) {
            ctx->pc = 0x23B248u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x23b248; return; }
        }
    }
    ctx->pc = 0x23B294u;
label_23b294:
    // 0x23b294: 0x10d102b  sltu        $v0, $t0, $t5
    ctx->pc = 0x23b294u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 13)) ? 1 : 0);
label_23b298:
    // 0x23b298: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
label_23b29c:
    if (ctx->pc == 0x23B29Cu) {
        ctx->pc = 0x23B29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B298u;
        // 0x23b29c: 0x24e7fffc  addiu       $a3, $a3, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B2A0u;
        goto label_23b2a0;
    }
    ctx->pc = 0x23B298u;
    {
        const bool branch_taken_0x23b298 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23b298) {
            ctx->pc = 0x23B29Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23B298u;
            // 0x23b29c: 0x24e7fffc  addiu       $a3, $a3, -0x4 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967292));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23B2D8u;
            goto label_23b2d8;
        }
    }
    ctx->pc = 0x23B2A0u;
label_23b2a0:
    // 0x23b2a0: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x23b2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_23b2a4:
    // 0x23b2a4: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x23b2a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
label_23b2a8:
    // 0x23b2a8: 0x10d202b  sltu        $a0, $t0, $t5
    ctx->pc = 0x23b2a8u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 13)) ? 1 : 0);
label_23b2ac:
    // 0x23b2ac: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x23b2acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_23b2b0:
    // 0x23b2b0: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x23b2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
label_23b2b4:
    // 0x23b2b4: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x23b2b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
label_23b2b8:
    // 0x23b2b8: 0x35403  sra         $t2, $v1, 16
    ctx->pc = 0x23b2b8u;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 3), 16));
label_23b2bc:
    // 0x23b2bc: 0xa4e30000  sh          $v1, 0x0($a3)
    ctx->pc = 0x23b2bcu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 3));
label_23b2c0:
    // 0x23b2c0: 0x4a2821  addu        $a1, $v0, $t2
    ctx->pc = 0x23b2c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
label_23b2c4:
    // 0x23b2c4: 0xa4e50002  sh          $a1, 0x2($a3)
    ctx->pc = 0x23b2c4u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 2), (uint16_t)GPR_U32(ctx, 5));
label_23b2c8:
    // 0x23b2c8: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x23b2c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
label_23b2cc:
    // 0x23b2cc: 0x1480fff4  bnez        $a0, . + 4 + (-0xC << 2)
label_23b2d0:
    if (ctx->pc == 0x23B2D0u) {
        ctx->pc = 0x23B2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B2CCu;
        // 0x23b2d0: 0x55403  sra         $t2, $a1, 16 (Delay Slot)
        SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B2D4u;
        goto label_23b2d4;
    }
    ctx->pc = 0x23B2CCu;
    {
        const bool branch_taken_0x23b2cc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x23B2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B2CCu;
        // 0x23b2d0: 0x55403  sra         $t2, $a1, 16 (Delay Slot)
        SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b2cc) {
            ctx->pc = 0x23B2A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23b2a0;
        }
    }
    ctx->pc = 0x23B2D4u;
label_23b2d4:
    // 0x23b2d4: 0x24e7fffc  addiu       $a3, $a3, -0x4
    ctx->pc = 0x23b2d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967292));
label_23b2d8:
    // 0x23b2d8: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x23b2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_23b2dc:
    // 0x23b2dc: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
label_23b2e0:
    if (ctx->pc == 0x23B2E0u) {
        ctx->pc = 0x23B2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B2DCu;
        // 0x23b2e0: 0xad6c0010  sw          $t4, 0x10($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 16), GPR_U32(ctx, 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B2E4u;
        goto label_23b2e4;
    }
    ctx->pc = 0x23B2DCu;
    {
        const bool branch_taken_0x23b2dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23b2dc) {
            ctx->pc = 0x23B2E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23B2DCu;
            // 0x23b2e0: 0xad6c0010  sw          $t4, 0x10($t3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 11), 16), GPR_U32(ctx, 12));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23B308u;
            goto label_23b308;
        }
    }
    ctx->pc = 0x23B2E4u;
label_23b2e4:
    // 0x23b2e4: 0x0  nop
    ctx->pc = 0x23b2e4u;
    // NOP
label_23b2e8:
    // 0x23b2e8: 0x24e7fffc  addiu       $a3, $a3, -0x4
    ctx->pc = 0x23b2e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967292));
label_23b2ec:
    // 0x23b2ec: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x23b2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_23b2f0:
    // 0x23b2f0: 0x0  nop
    ctx->pc = 0x23b2f0u;
    // NOP
label_23b2f4:
    // 0x23b2f4: 0x0  nop
    ctx->pc = 0x23b2f4u;
    // NOP
label_23b2f8:
    // 0x23b2f8: 0x0  nop
    ctx->pc = 0x23b2f8u;
    // NOP
label_23b2fc:
    // 0x23b2fc: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
label_23b300:
    if (ctx->pc == 0x23B300u) {
        ctx->pc = 0x23B300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B2FCu;
        // 0x23b300: 0x258cffff  addiu       $t4, $t4, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B304u;
        goto label_23b304;
    }
    ctx->pc = 0x23B2FCu;
    {
        const bool branch_taken_0x23b2fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B2FCu;
        // 0x23b300: 0x258cffff  addiu       $t4, $t4, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b2fc) {
            ctx->pc = 0x23B2E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23b2e8;
        }
    }
    ctx->pc = 0x23B304u;
label_23b304:
    // 0x23b304: 0xad6c0010  sw          $t4, 0x10($t3)
    ctx->pc = 0x23b304u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 16), GPR_U32(ctx, 12));
label_23b308:
    // 0x23b308: 0x160102d  daddu       $v0, $t3, $zero
    ctx->pc = 0x23b308u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_23b30c:
    // 0x23b30c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23b30cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_23b310:
    // 0x23b310: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x23b310u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_23b314:
    // 0x23b314: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x23b314u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_23b318:
    // 0x23b318: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x23b318u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_23b31c:
    // 0x23b31c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x23b31cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_23b320:
    // 0x23b320: 0x3e00008  jr          $ra
label_23b324:
    if (ctx->pc == 0x23B324u) {
        ctx->pc = 0x23B324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B320u;
        // 0x23b324: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B328u;
        goto label_23b328;
    }
    ctx->pc = 0x23B320u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23B324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B320u;
        // 0x23b324: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23B320u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23B328u;
label_23b328:
    // 0x23b328: 0x3c027ff0  lui         $v0, 0x7FF0
    ctx->pc = 0x23b328u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32752 << 16));
label_23b32c:
    // 0x23b32c: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x23b32cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
label_23b330:
    // 0x23b330: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x23b330u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_23b334:
    // 0x23b334: 0x3c03fcc0  lui         $v1, 0xFCC0
    ctx->pc = 0x23b334u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64704 << 16));
label_23b338:
    // 0x23b338: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x23b338u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_23b33c:
    // 0x23b33c: 0x41023  negu        $v0, $a0
    ctx->pc = 0x23b33cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
label_23b340:
    // 0x23b340: 0x18800009  blez        $a0, . + 4 + (0x9 << 2)
label_23b344:
    if (ctx->pc == 0x23B344u) {
        ctx->pc = 0x23B344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B340u;
        // 0x23b344: 0x4303c  dsll32      $a2, $a0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) << (32 + 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B348u;
        goto label_23b348;
    }
    ctx->pc = 0x23B340u;
    {
        const bool branch_taken_0x23b340 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x23B344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B340u;
        // 0x23b344: 0x4303c  dsll32      $a2, $a0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b340) {
            ctx->pc = 0x23B368u;
            goto label_23b368;
        }
    }
    ctx->pc = 0x23B348u;
label_23b348:
    // 0x23b348: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x23b348u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_23b34c:
    // 0x23b34c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x23b34cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_23b350:
    // 0x23b350: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x23b350u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_23b354:
    // 0x23b354: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x23b354u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_23b358:
    // 0x23b358: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x23b358u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
label_23b35c:
    // 0x23b35c: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x23b35cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
label_23b360:
    // 0x23b360: 0x10000022  b           . + 4 + (0x22 << 2)
label_23b364:
    if (ctx->pc == 0x23B364u) {
        ctx->pc = 0x23B364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B360u;
        // 0x23b364: 0xa32824  and         $a1, $a1, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B368u;
        goto label_23b368;
    }
    ctx->pc = 0x23B360u;
    {
        const bool branch_taken_0x23b360 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B360u;
        // 0x23b364: 0xa32824  and         $a1, $a1, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b360) {
            ctx->pc = 0x23B3ECu;
            goto label_23b3ec;
        }
    }
    ctx->pc = 0x23B368u;
label_23b368:
    // 0x23b368: 0x22503  sra         $a0, $v0, 20
    ctx->pc = 0x23b368u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 20));
label_23b36c:
    // 0x23b36c: 0x28820014  slti        $v0, $a0, 0x14
    ctx->pc = 0x23b36cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)20) ? 1 : 0);
label_23b370:
    // 0x23b370: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
label_23b374:
    if (ctx->pc == 0x23B374u) {
        ctx->pc = 0x23B374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B370u;
        // 0x23b374: 0x2484ffec  addiu       $a0, $a0, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967276));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B378u;
        goto label_23b378;
    }
    ctx->pc = 0x23B370u;
    {
        const bool branch_taken_0x23b370 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23b370) {
            ctx->pc = 0x23B374u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23B370u;
            // 0x23b374: 0x2484ffec  addiu       $a0, $a0, -0x14 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967276));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23B3A8u;
            goto label_23b3a8;
        }
    }
    ctx->pc = 0x23B378u;
label_23b378:
    // 0x23b378: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x23b378u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
label_23b37c:
    // 0x23b37c: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x23b37cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_23b380:
    // 0x23b380: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x23b380u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_23b384:
    // 0x23b384: 0x821007  srav        $v0, $v0, $a0
    ctx->pc = 0x23b384u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
label_23b388:
    // 0x23b388: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x23b388u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
label_23b38c:
    // 0x23b38c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x23b38cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_23b390:
    // 0x23b390: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x23b390u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_23b394:
    // 0x23b394: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x23b394u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_23b398:
    // 0x23b398: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x23b398u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_23b39c:
    // 0x23b39c: 0x10000013  b           . + 4 + (0x13 << 2)
label_23b3a0:
    if (ctx->pc == 0x23B3A0u) {
        ctx->pc = 0x23B3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B39Cu;
        // 0x23b3a0: 0xa32824  and         $a1, $a1, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B3A4u;
        goto label_23b3a4;
    }
    ctx->pc = 0x23B39Cu;
    {
        const bool branch_taken_0x23b39c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B39Cu;
        // 0x23b3a0: 0xa32824  and         $a1, $a1, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b39c) {
            ctx->pc = 0x23B3ECu;
            goto label_23b3ec;
        }
    }
    ctx->pc = 0x23B3A4u;
label_23b3a4:
    // 0x23b3a4: 0x0  nop
    ctx->pc = 0x23b3a4u;
    // NOP
label_23b3a8:
    // 0x23b3a8: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x23b3a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_23b3ac:
    // 0x23b3ac: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x23b3acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_23b3b0:
    // 0x23b3b0: 0x2882001f  slti        $v0, $a0, 0x1F
    ctx->pc = 0x23b3b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)31) ? 1 : 0);
label_23b3b4:
    // 0x23b3b4: 0x43027  nor         $a2, $zero, $a0
    ctx->pc = 0x23b3b4u;
    SET_GPR_U64(ctx, 6, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 4)));
label_23b3b8:
    // 0x23b3b8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_23b3bc:
    if (ctx->pc == 0x23B3BCu) {
        ctx->pc = 0x23B3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B3B8u;
        // 0x23b3bc: 0xa32824  and         $a1, $a1, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B3C0u;
        goto label_23b3c0;
    }
    ctx->pc = 0x23B3B8u;
    {
        const bool branch_taken_0x23b3b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B3B8u;
        // 0x23b3bc: 0xa32824  and         $a1, $a1, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b3b8) {
            ctx->pc = 0x23B3D0u;
            goto label_23b3d0;
        }
    }
    ctx->pc = 0x23B3C0u;
label_23b3c0:
    // 0x23b3c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23b3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23b3c4:
    // 0x23b3c4: 0x10000003  b           . + 4 + (0x3 << 2)
label_23b3c8:
    if (ctx->pc == 0x23B3C8u) {
        ctx->pc = 0x23B3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B3C4u;
        // 0x23b3c8: 0xc21004  sllv        $v0, $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 6) & 0x1F));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B3CCu;
        goto label_23b3cc;
    }
    ctx->pc = 0x23B3C4u;
    {
        const bool branch_taken_0x23b3c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B3C4u;
        // 0x23b3c8: 0xc21004  sllv        $v0, $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 6) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b3c4) {
            ctx->pc = 0x23B3D4u;
            goto label_23b3d4;
        }
    }
    ctx->pc = 0x23B3CCu;
label_23b3cc:
    // 0x23b3cc: 0x0  nop
    ctx->pc = 0x23b3ccu;
    // NOP
label_23b3d0:
    // 0x23b3d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23b3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23b3d4:
    // 0x23b3d4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x23b3d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_23b3d8:
    // 0x23b3d8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x23b3d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_23b3dc:
    // 0x23b3dc: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x23b3dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_23b3e0:
    // 0x23b3e0: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x23b3e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_23b3e4:
    // 0x23b3e4: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x23b3e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
label_23b3e8:
    // 0x23b3e8: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x23b3e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_23b3ec:
    // 0x23b3ec: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x23b3ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_23b3f0:
    // 0x23b3f0: 0x3e00008  jr          $ra
label_23b3f4:
    if (ctx->pc == 0x23B3F4u) {
        ctx->pc = 0x23B3F8u;
        goto label_23b3f8;
    }
    ctx->pc = 0x23B3F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23B3F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23B3F8u;
label_23b3f8:
    // 0x23b3f8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x23b3f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_23b3fc:
    // 0x23b3fc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23b3fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_23b400:
    // 0x23b400: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x23b400u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_23b404:
    // 0x23b404: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x23b404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_23b408:
    // 0x23b408: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x23b408u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_23b40c:
    // 0x23b40c: 0x24940014  addiu       $s4, $a0, 0x14
    ctx->pc = 0x23b40cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
label_23b410:
    // 0x23b410: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x23b410u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_23b414:
    // 0x23b414: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x23b414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_23b418:
    // 0x23b418: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x23b418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_23b41c:
    // 0x23b41c: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x23b41cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_23b420:
    // 0x23b420: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x23b420u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_23b424:
    // 0x23b424: 0x2829021  addu        $s2, $s4, $v0
    ctx->pc = 0x23b424u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_23b428:
    // 0x23b428: 0x2652fffc  addiu       $s2, $s2, -0x4
    ctx->pc = 0x23b428u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967292));
label_23b42c:
    // 0x23b42c: 0x8e530000  lw          $s3, 0x0($s2)
    ctx->pc = 0x23b42cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_23b430:
    // 0x23b430: 0xc08ead4  jal         func_23AB50
label_23b434:
    if (ctx->pc == 0x23B434u) {
        ctx->pc = 0x23B434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B430u;
        // 0x23b434: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B438u;
        goto label_23b438;
    }
    ctx->pc = 0x23B430u;
    SET_GPR_U32(ctx, 31, 0x23B438u);
    ctx->pc = 0x23B434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B430u;
    // 0x23b434: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23AB50u;
    { ctx->pc = 0x23ab50; return; }
    ctx->pc = 0x23B438u;
label_23b438:
    // 0x23b438: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x23b438u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23b43c:
    // 0x23b43c: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x23b43cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_23b440:
    // 0x23b440: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x23b440u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_23b444:
    // 0x23b444: 0x28c3000b  slti        $v1, $a2, 0xB
    ctx->pc = 0x23b444u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)11) ? 1 : 0);
label_23b448:
    // 0x23b448: 0x1060001b  beqz        $v1, . + 4 + (0x1B << 2)
label_23b44c:
    if (ctx->pc == 0x23B44Cu) {
        ctx->pc = 0x23B44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B448u;
        // 0x23b44c: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B450u;
        goto label_23b450;
    }
    ctx->pc = 0x23B448u;
    {
        const bool branch_taken_0x23b448 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B448u;
        // 0x23b44c: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b448) {
            ctx->pc = 0x23B4B8u;
            goto label_23b4b8;
        }
    }
    ctx->pc = 0x23B450u;
label_23b450:
    // 0x23b450: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x23b450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_23b454:
    // 0x23b454: 0x3c043ff0  lui         $a0, 0x3FF0
    ctx->pc = 0x23b454u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16368 << 16));
label_23b458:
    // 0x23b458: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x23b458u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_23b45c:
    // 0x23b45c: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x23b45cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_23b460:
    // 0x23b460: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x23b460u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_23b464:
    // 0x23b464: 0x531006  srlv        $v0, $s3, $v0
    ctx->pc = 0x23b464u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 19), GPR_U32(ctx, 2) & 0x1F));
label_23b468:
    // 0x23b468: 0x2238824  and         $s1, $s1, $v1
    ctx->pc = 0x23b468u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 3));
label_23b46c:
    // 0x23b46c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x23b46cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_23b470:
    // 0x23b470: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x23b470u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23b474:
    // 0x23b474: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x23b474u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_23b478:
    // 0x23b478: 0x292182b  sltu        $v1, $s4, $s2
    ctx->pc = 0x23b478u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
label_23b47c:
    // 0x23b47c: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
label_23b480:
    if (ctx->pc == 0x23B480u) {
        ctx->pc = 0x23B480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B47Cu;
        // 0x23b480: 0x2228825  or          $s1, $s1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B484u;
        goto label_23b484;
    }
    ctx->pc = 0x23B47Cu;
    {
        const bool branch_taken_0x23b47c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B47Cu;
        // 0x23b480: 0x2228825  or          $s1, $s1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b47c) {
            ctx->pc = 0x23B488u;
            goto label_23b488;
        }
    }
    ctx->pc = 0x23B484u;
label_23b484:
    // 0x23b484: 0x8e44fffc  lw          $a0, -0x4($s2)
    ctx->pc = 0x23b484u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294967292)));
label_23b488:
    // 0x23b488: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x23b488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_23b48c:
    // 0x23b48c: 0x24c30015  addiu       $v1, $a2, 0x15
    ctx->pc = 0x23b48cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 21));
label_23b490:
    // 0x23b490: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x23b490u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_23b494:
    // 0x23b494: 0x731804  sllv        $v1, $s3, $v1
    ctx->pc = 0x23b494u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), GPR_U32(ctx, 3) & 0x1F));
label_23b498:
    // 0x23b498: 0x441006  srlv        $v0, $a0, $v0
    ctx->pc = 0x23b498u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), GPR_U32(ctx, 2) & 0x1F));
label_23b49c:
    // 0x23b49c: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x23b49cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_23b4a0:
    // 0x23b4a0: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x23b4a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
label_23b4a4:
    // 0x23b4a4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x23b4a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_23b4a8:
    // 0x23b4a8: 0x2248824  and         $s1, $s1, $a0
    ctx->pc = 0x23b4a8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 4));
label_23b4ac:
    // 0x23b4ac: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x23b4acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_23b4b0:
    // 0x23b4b0: 0x1000002d  b           . + 4 + (0x2D << 2)
label_23b4b4:
    if (ctx->pc == 0x23B4B4u) {
        ctx->pc = 0x23B4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B4B0u;
        // 0x23b4b4: 0x3183e  dsrl32      $v1, $v1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B4B8u;
        goto label_23b4b8;
    }
    ctx->pc = 0x23B4B0u;
    {
        const bool branch_taken_0x23b4b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B4B0u;
        // 0x23b4b4: 0x3183e  dsrl32      $v1, $v1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b4b0) {
            ctx->pc = 0x23B568u;
            goto label_23b568;
        }
    }
    ctx->pc = 0x23B4B8u;
label_23b4b8:
    // 0x23b4b8: 0x292102b  sltu        $v0, $s4, $s2
    ctx->pc = 0x23b4b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
label_23b4bc:
    // 0x23b4bc: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_23b4c0:
    if (ctx->pc == 0x23B4C0u) {
        ctx->pc = 0x23B4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B4BCu;
        // 0x23b4c0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B4C4u;
        goto label_23b4c4;
    }
    ctx->pc = 0x23B4BCu;
    {
        const bool branch_taken_0x23b4bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23b4bc) {
            ctx->pc = 0x23B4C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23B4BCu;
            // 0x23b4c0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23B4CCu;
            goto label_23b4cc;
        }
    }
    ctx->pc = 0x23B4C4u;
label_23b4c4:
    // 0x23b4c4: 0x2652fffc  addiu       $s2, $s2, -0x4
    ctx->pc = 0x23b4c4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967292));
label_23b4c8:
    // 0x23b4c8: 0x8e470000  lw          $a3, 0x0($s2)
    ctx->pc = 0x23b4c8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_23b4cc:
    // 0x23b4cc: 0x24c6fff5  addiu       $a2, $a2, -0xB
    ctx->pc = 0x23b4ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967285));
label_23b4d0:
    // 0x23b4d0: 0x10c00019  beqz        $a2, . + 4 + (0x19 << 2)
label_23b4d4:
    if (ctx->pc == 0x23B4D4u) {
        ctx->pc = 0x23B4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B4D0u;
        // 0x23b4d4: 0x61823  negu        $v1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B4D8u;
        goto label_23b4d8;
    }
    ctx->pc = 0x23B4D0u;
    {
        const bool branch_taken_0x23b4d0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B4D0u;
        // 0x23b4d4: 0x61823  negu        $v1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b4d0) {
            ctx->pc = 0x23B538u;
            goto label_23b538;
        }
    }
    ctx->pc = 0x23B4D8u;
label_23b4d8:
    // 0x23b4d8: 0xd31004  sllv        $v0, $s3, $a2
    ctx->pc = 0x23b4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), GPR_U32(ctx, 6) & 0x1F));
label_23b4dc:
    // 0x23b4dc: 0x671806  srlv        $v1, $a3, $v1
    ctx->pc = 0x23b4dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 3) & 0x1F));
label_23b4e0:
    // 0x23b4e0: 0x3c053ff0  lui         $a1, 0x3FF0
    ctx->pc = 0x23b4e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16368 << 16));
label_23b4e4:
    // 0x23b4e4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x23b4e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_23b4e8:
    // 0x23b4e8: 0x292182b  sltu        $v1, $s4, $s2
    ctx->pc = 0x23b4e8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
label_23b4ec:
    // 0x23b4ec: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x23b4ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
label_23b4f0:
    // 0x23b4f0: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x23b4f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
label_23b4f4:
    // 0x23b4f4: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x23b4f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
label_23b4f8:
    // 0x23b4f8: 0x2248824  and         $s1, $s1, $a0
    ctx->pc = 0x23b4f8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 4));
label_23b4fc:
    // 0x23b4fc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x23b4fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_23b500:
    // 0x23b500: 0x2228825  or          $s1, $s1, $v0
    ctx->pc = 0x23b500u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
label_23b504:
    // 0x23b504: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
label_23b508:
    if (ctx->pc == 0x23B508u) {
        ctx->pc = 0x23B508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B504u;
        // 0x23b508: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B50Cu;
        goto label_23b50c;
    }
    ctx->pc = 0x23B504u;
    {
        const bool branch_taken_0x23b504 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B504u;
        // 0x23b508: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b504) {
            ctx->pc = 0x23B510u;
            goto label_23b510;
        }
    }
    ctx->pc = 0x23B50Cu;
label_23b50c:
    // 0x23b50c: 0x8e53fffc  lw          $s3, -0x4($s2)
    ctx->pc = 0x23b50cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294967292)));
label_23b510:
    // 0x23b510: 0x61023  negu        $v0, $a2
    ctx->pc = 0x23b510u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
label_23b514:
    // 0x23b514: 0xc71804  sllv        $v1, $a3, $a2
    ctx->pc = 0x23b514u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 6) & 0x1F));
label_23b518:
    // 0x23b518: 0x531006  srlv        $v0, $s3, $v0
    ctx->pc = 0x23b518u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 19), GPR_U32(ctx, 2) & 0x1F));
label_23b51c:
    // 0x23b51c: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x23b51cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_23b520:
    // 0x23b520: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x23b520u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
label_23b524:
    // 0x23b524: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x23b524u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_23b528:
    // 0x23b528: 0x2248824  and         $s1, $s1, $a0
    ctx->pc = 0x23b528u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 4));
label_23b52c:
    // 0x23b52c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x23b52cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_23b530:
    // 0x23b530: 0x1000000d  b           . + 4 + (0xD << 2)
label_23b534:
    if (ctx->pc == 0x23B534u) {
        ctx->pc = 0x23B534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B530u;
        // 0x23b534: 0x3183e  dsrl32      $v1, $v1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B538u;
        goto label_23b538;
    }
    ctx->pc = 0x23B530u;
    {
        const bool branch_taken_0x23b530 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B530u;
        // 0x23b534: 0x3183e  dsrl32      $v1, $v1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b530) {
            ctx->pc = 0x23B568u;
            goto label_23b568;
        }
    }
    ctx->pc = 0x23B538u;
label_23b538:
    // 0x23b538: 0x3c023ff0  lui         $v0, 0x3FF0
    ctx->pc = 0x23b538u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16368 << 16));
label_23b53c:
    // 0x23b53c: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x23b53cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_23b540:
    // 0x23b540: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x23b540u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_23b544:
    // 0x23b544: 0x2621025  or          $v0, $s3, $v0
    ctx->pc = 0x23b544u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) | GPR_U64(ctx, 2));
label_23b548:
    // 0x23b548: 0x2238824  and         $s1, $s1, $v1
    ctx->pc = 0x23b548u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 3));
label_23b54c:
    // 0x23b54c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x23b54cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_23b550:
    // 0x23b550: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x23b550u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_23b554:
    // 0x23b554: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x23b554u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
label_23b558:
    // 0x23b558: 0x7183c  dsll32      $v1, $a3, 0
    ctx->pc = 0x23b558u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) << (32 + 0));
label_23b55c:
    // 0x23b55c: 0x2228825  or          $s1, $s1, $v0
    ctx->pc = 0x23b55cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
label_23b560:
    // 0x23b560: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x23b560u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_23b564:
    // 0x23b564: 0x2248824  and         $s1, $s1, $a0
    ctx->pc = 0x23b564u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 4));
label_23b568:
    // 0x23b568: 0x2238825  or          $s1, $s1, $v1
    ctx->pc = 0x23b568u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 3));
label_23b56c:
    // 0x23b56c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x23b56cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_23b570:
    // 0x23b570: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23b570u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_23b574:
    // 0x23b574: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x23b574u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_23b578:
    // 0x23b578: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x23b578u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_23b57c:
    // 0x23b57c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x23b57cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_23b580:
    // 0x23b580: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x23b580u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_23b584:
    // 0x23b584: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x23b584u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_23b588:
    // 0x23b588: 0x3e00008  jr          $ra
label_23b58c:
    if (ctx->pc == 0x23B58Cu) {
        ctx->pc = 0x23B58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B588u;
        // 0x23b58c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B590u;
        goto label_23b590;
    }
    ctx->pc = 0x23B588u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23B58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B588u;
        // 0x23b58c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23B588u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23B590u;
label_23b590:
    // 0x23b590: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x23b590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_23b594:
    // 0x23b594: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x23b594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_23b598:
    // 0x23b598: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x23b598u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_23b59c:
    // 0x23b59c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x23b59cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23b5a0:
    // 0x23b5a0: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x23b5a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_23b5a4:
    // 0x23b5a4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x23b5a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_23b5a8:
    // 0x23b5a8: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x23b5a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_23b5ac:
    // 0x23b5ac: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x23b5acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
label_23b5b0:
    // 0x23b5b0: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x23b5b0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_23b5b4:
    // 0x23b5b4: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x23b5b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
label_23b5b8:
    // 0x23b5b8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x23b5b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_23b5bc:
    // 0x23b5bc: 0xc08ea10  jal         func_23A840
label_23b5c0:
    if (ctx->pc == 0x23B5C0u) {
        ctx->pc = 0x23B5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B5BCu;
        // 0x23b5c0: 0xe0a82d  daddu       $s5, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B5C4u;
        goto label_23b5c4;
    }
    ctx->pc = 0x23B5BCu;
    SET_GPR_U32(ctx, 31, 0x23B5C4u);
    ctx->pc = 0x23B5C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B5BCu;
    // 0x23b5c0: 0xe0a82d  daddu       $s5, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A840u;
    { ctx->pc = 0x23a840; return; }
    ctx->pc = 0x23B5C4u;
label_23b5c4:
    // 0x23b5c4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x23b5c4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23b5c8:
    // 0x23b5c8: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x23b5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
label_23b5cc:
    // 0x23b5cc: 0x10203f  dsra32      $a0, $s0, 0
    ctx->pc = 0x23b5ccu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 16) >> (32 + 0));
label_23b5d0:
    // 0x23b5d0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x23b5d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_23b5d4:
    // 0x23b5d4: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x23b5d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_23b5d8:
    // 0x23b5d8: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x23b5d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_23b5dc:
    // 0x23b5dc: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x23b5dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_23b5e0:
    // 0x23b5e0: 0x2038024  and         $s0, $s0, $v1
    ctx->pc = 0x23b5e0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 3));
label_23b5e4:
    // 0x23b5e4: 0x3c03000f  lui         $v1, 0xF
    ctx->pc = 0x23b5e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15 << 16));
label_23b5e8:
    // 0x23b5e8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x23b5e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_23b5ec:
    // 0x23b5ec: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x23b5ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_23b5f0:
    // 0x23b5f0: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x23b5f0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
label_23b5f4:
    // 0x23b5f4: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x23b5f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_23b5f8:
    // 0x23b5f8: 0x10953e  dsrl32      $s2, $s0, 20
    ctx->pc = 0x23b5f8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 16) >> (32 + 20));
label_23b5fc:
    // 0x23b5fc: 0xafa40004  sw          $a0, 0x4($sp)
    ctx->pc = 0x23b5fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 4));
label_23b600:
    // 0x23b600: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
label_23b604:
    if (ctx->pc == 0x23B604u) {
        ctx->pc = 0x23B604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B600u;
        // 0x23b604: 0x26710014  addiu       $s1, $s3, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B608u;
        goto label_23b608;
    }
    ctx->pc = 0x23B600u;
    {
        const bool branch_taken_0x23b600 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B600u;
        // 0x23b604: 0x26710014  addiu       $s1, $s3, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b600) {
            ctx->pc = 0x23B614u;
            goto label_23b614;
        }
    }
    ctx->pc = 0x23B608u;
label_23b608:
    // 0x23b608: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x23b608u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
label_23b60c:
    // 0x23b60c: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x23b60cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_23b610:
    // 0x23b610: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x23b610u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
label_23b614:
    // 0x23b614: 0x10283c  dsll32      $a1, $s0, 0
    ctx->pc = 0x23b614u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) << (32 + 0));
label_23b618:
    // 0x23b618: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x23b618u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
label_23b61c:
    // 0x23b61c: 0x10a0001a  beqz        $a1, . + 4 + (0x1A << 2)
label_23b620:
    if (ctx->pc == 0x23B620u) {
        ctx->pc = 0x23B620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B61Cu;
        // 0x23b620: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B624u;
        goto label_23b624;
    }
    ctx->pc = 0x23B61Cu;
    {
        const bool branch_taken_0x23b61c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B61Cu;
        // 0x23b620: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b61c) {
            ctx->pc = 0x23B688u;
            goto label_23b688;
        }
    }
    ctx->pc = 0x23B624u;
label_23b624:
    // 0x23b624: 0xc08eaf4  jal         func_23ABD0
label_23b628:
    if (ctx->pc == 0x23B628u) {
        ctx->pc = 0x23B628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B624u;
        // 0x23b628: 0xafa50000  sw          $a1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B62Cu;
        goto label_23b62c;
    }
    ctx->pc = 0x23B624u;
    SET_GPR_U32(ctx, 31, 0x23B62Cu);
    ctx->pc = 0x23B628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B624u;
    // 0x23b628: 0xafa50000  sw          $a1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23ABD0u;
    { ctx->pc = 0x23abd0; return; }
    ctx->pc = 0x23B62Cu;
label_23b62c:
    // 0x23b62c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x23b62cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23b630:
    // 0x23b630: 0x10a0000b  beqz        $a1, . + 4 + (0xB << 2)
label_23b634:
    if (ctx->pc == 0x23B634u) {
        ctx->pc = 0x23B634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B630u;
        // 0x23b634: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B638u;
        goto label_23b638;
    }
    ctx->pc = 0x23B630u;
    {
        const bool branch_taken_0x23b630 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B630u;
        // 0x23b634: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b630) {
            ctx->pc = 0x23B660u;
            goto label_23b660;
        }
    }
    ctx->pc = 0x23B638u;
label_23b638:
    // 0x23b638: 0x52023  negu        $a0, $a1
    ctx->pc = 0x23b638u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 5)));
label_23b63c:
    // 0x23b63c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x23b63cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_23b640:
    // 0x23b640: 0x821004  sllv        $v0, $v0, $a0
    ctx->pc = 0x23b640u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
label_23b644:
    // 0x23b644: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x23b644u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_23b648:
    // 0x23b648: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x23b648u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_23b64c:
    // 0x23b64c: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x23b64cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_23b650:
    // 0x23b650: 0xa21006  srlv        $v0, $v0, $a1
    ctx->pc = 0x23b650u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 5) & 0x1F));
label_23b654:
    // 0x23b654: 0x10000004  b           . + 4 + (0x4 << 2)
label_23b658:
    if (ctx->pc == 0x23B658u) {
        ctx->pc = 0x23B658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B654u;
        // 0x23b658: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B65Cu;
        goto label_23b65c;
    }
    ctx->pc = 0x23B654u;
    {
        const bool branch_taken_0x23b654 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B654u;
        // 0x23b658: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b654) {
            ctx->pc = 0x23B668u;
            goto label_23b668;
        }
    }
    ctx->pc = 0x23B65Cu;
label_23b65c:
    // 0x23b65c: 0x0  nop
    ctx->pc = 0x23b65cu;
    // NOP
label_23b660:
    // 0x23b660: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x23b660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_23b664:
    // 0x23b664: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x23b664u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_23b668:
    // 0x23b668: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x23b668u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_23b66c:
    // 0x23b66c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x23b66cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23b670:
    // 0x23b670: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x23b670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_23b674:
    // 0x23b674: 0x64100a  movz        $v0, $v1, $a0
    ctx->pc = 0x23b674u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
label_23b678:
    // 0x23b678: 0xae240004  sw          $a0, 0x4($s1)
    ctx->pc = 0x23b678u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 4));
label_23b67c:
    // 0x23b67c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x23b67cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23b680:
    // 0x23b680: 0x10000009  b           . + 4 + (0x9 << 2)
label_23b684:
    if (ctx->pc == 0x23B684u) {
        ctx->pc = 0x23B684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B680u;
        // 0x23b684: 0xae620010  sw          $v0, 0x10($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B688u;
        goto label_23b688;
    }
    ctx->pc = 0x23B680u;
    {
        const bool branch_taken_0x23b680 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B680u;
        // 0x23b684: 0xae620010  sw          $v0, 0x10($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b680) {
            ctx->pc = 0x23B6A8u;
            goto label_23b6a8;
        }
    }
    ctx->pc = 0x23B688u;
label_23b688:
    // 0x23b688: 0x27a40004  addiu       $a0, $sp, 0x4
    ctx->pc = 0x23b688u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
label_23b68c:
    // 0x23b68c: 0xc08eaf4  jal         func_23ABD0
label_23b690:
    if (ctx->pc == 0x23B690u) {
        ctx->pc = 0x23B690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B68Cu;
        // 0x23b690: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B694u;
        goto label_23b694;
    }
    ctx->pc = 0x23B68Cu;
    SET_GPR_U32(ctx, 31, 0x23B694u);
    ctx->pc = 0x23B690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B68Cu;
    // 0x23b690: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23ABD0u;
    { ctx->pc = 0x23abd0; return; }
    ctx->pc = 0x23B694u;
label_23b694:
    // 0x23b694: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x23b694u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23b698:
    // 0x23b698: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x23b698u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_23b69c:
    // 0x23b69c: 0x24450020  addiu       $a1, $v0, 0x20
    ctx->pc = 0x23b69cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
label_23b6a0:
    // 0x23b6a0: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x23b6a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_23b6a4:
    // 0x23b6a4: 0xae640010  sw          $a0, 0x10($s3)
    ctx->pc = 0x23b6a4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 4));
label_23b6a8:
    // 0x23b6a8: 0x12400007  beqz        $s2, . + 4 + (0x7 << 2)
label_23b6ac:
    if (ctx->pc == 0x23B6ACu) {
        ctx->pc = 0x23B6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B6A8u;
        // 0x23b6ac: 0x2451021  addu        $v0, $s2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B6B0u;
        goto label_23b6b0;
    }
    ctx->pc = 0x23B6A8u;
    {
        const bool branch_taken_0x23b6a8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B6A8u;
        // 0x23b6ac: 0x2451021  addu        $v0, $s2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b6a8) {
            ctx->pc = 0x23B6C8u;
            goto label_23b6c8;
        }
    }
    ctx->pc = 0x23B6B0u;
label_23b6b0:
    // 0x23b6b0: 0x24030035  addiu       $v1, $zero, 0x35
    ctx->pc = 0x23b6b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
label_23b6b4:
    // 0x23b6b4: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x23b6b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_23b6b8:
    // 0x23b6b8: 0x2442fbcd  addiu       $v0, $v0, -0x433
    ctx->pc = 0x23b6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966221));
label_23b6bc:
    // 0x23b6bc: 0x1000000a  b           . + 4 + (0xA << 2)
label_23b6c0:
    if (ctx->pc == 0x23B6C0u) {
        ctx->pc = 0x23B6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B6BCu;
        // 0x23b6c0: 0xae820000  sw          $v0, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B6C4u;
        goto label_23b6c4;
    }
    ctx->pc = 0x23B6BCu;
    {
        const bool branch_taken_0x23b6bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B6BCu;
        // 0x23b6c0: 0xae820000  sw          $v0, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b6bc) {
            ctx->pc = 0x23B6E8u;
            goto label_23b6e8;
        }
    }
    ctx->pc = 0x23B6C4u;
label_23b6c4:
    // 0x23b6c4: 0x0  nop
    ctx->pc = 0x23b6c4u;
    // NOP
label_23b6c8:
    // 0x23b6c8: 0x24a3fbce  addiu       $v1, $a1, -0x432
    ctx->pc = 0x23b6c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966222));
label_23b6cc:
    // 0x23b6cc: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x23b6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_23b6d0:
    // 0x23b6d0: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x23b6d0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
label_23b6d4:
    // 0x23b6d4: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x23b6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_23b6d8:
    // 0x23b6d8: 0xc08ead4  jal         func_23AB50
label_23b6dc:
    if (ctx->pc == 0x23B6DCu) {
        ctx->pc = 0x23B6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B6D8u;
        // 0x23b6dc: 0x8c44fffc  lw          $a0, -0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B6E0u;
        goto label_23b6e0;
    }
    ctx->pc = 0x23B6D8u;
    SET_GPR_U32(ctx, 31, 0x23B6E0u);
    ctx->pc = 0x23B6DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B6D8u;
    // 0x23b6dc: 0x8c44fffc  lw          $a0, -0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23AB50u;
    { ctx->pc = 0x23ab50; return; }
    ctx->pc = 0x23B6E0u;
label_23b6e0:
    // 0x23b6e0: 0x101940  sll         $v1, $s0, 5
    ctx->pc = 0x23b6e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
label_23b6e4:
    // 0x23b6e4: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x23b6e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_23b6e8:
    // 0x23b6e8: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x23b6e8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
label_23b6ec:
    // 0x23b6ec: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x23b6ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_23b6f0:
    // 0x23b6f0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x23b6f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_23b6f4:
    // 0x23b6f4: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x23b6f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_23b6f8:
    // 0x23b6f8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x23b6f8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_23b6fc:
    // 0x23b6fc: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x23b6fcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_23b700:
    // 0x23b700: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x23b700u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_23b704:
    // 0x23b704: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x23b704u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_23b708:
    // 0x23b708: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x23b708u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_23b70c:
    // 0x23b70c: 0x3e00008  jr          $ra
label_23b710:
    if (ctx->pc == 0x23B710u) {
        ctx->pc = 0x23B710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B70Cu;
        // 0x23b710: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B714u;
        goto label_23b714;
    }
    ctx->pc = 0x23B70Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23B710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B70Cu;
        // 0x23b710: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23B70Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23B714u;
label_23b714:
    // 0x23b714: 0x0  nop
    ctx->pc = 0x23b714u;
    // NOP
label_23b718:
    // 0x23b718: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x23b718u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_23b71c:
    // 0x23b71c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x23b71cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_23b720:
    // 0x23b720: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x23b720u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_23b724:
    // 0x23b724: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x23b724u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_23b728:
    // 0x23b728: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x23b728u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_23b72c:
    // 0x23b72c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x23b72cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_23b730:
    // 0x23b730: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x23b730u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_23b734:
    // 0x23b734: 0xc08ecfe  jal         func_23B3F8
label_23b738:
    if (ctx->pc == 0x23B738u) {
        ctx->pc = 0x23B738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B734u;
        // 0x23b738: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B73Cu;
        goto label_23b73c;
    }
    ctx->pc = 0x23B734u;
    SET_GPR_U32(ctx, 31, 0x23B73Cu);
    ctx->pc = 0x23B738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B734u;
    // 0x23b738: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23B3F8u;
    goto label_23b3f8;
    ctx->pc = 0x23B73Cu;
label_23b73c:
    // 0x23b73c: 0x27a50004  addiu       $a1, $sp, 0x4
    ctx->pc = 0x23b73cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
label_23b740:
    // 0x23b740: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x23b740u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_23b744:
    // 0x23b744: 0xc08ecfe  jal         func_23B3F8
label_23b748:
    if (ctx->pc == 0x23B748u) {
        ctx->pc = 0x23B748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B744u;
        // 0x23b748: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B74Cu;
        goto label_23b74c;
    }
    ctx->pc = 0x23B744u;
    SET_GPR_U32(ctx, 31, 0x23B74Cu);
    ctx->pc = 0x23B748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B744u;
    // 0x23b748: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23B3F8u;
    goto label_23b3f8;
    ctx->pc = 0x23B74Cu;
label_23b74c:
    // 0x23b74c: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x23b74cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_23b750:
    // 0x23b750: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x23b750u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23b754:
    // 0x23b754: 0x8e260010  lw          $a2, 0x10($s1)
    ctx->pc = 0x23b754u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_23b758:
    // 0x23b758: 0x12283f  dsra32      $a1, $s2, 0
    ctx->pc = 0x23b758u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 18) >> (32 + 0));
label_23b75c:
    // 0x23b75c: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x23b75cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_23b760:
    // 0x23b760: 0x8383f  dsra32      $a3, $t0, 0
    ctx->pc = 0x23b760u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 8) >> (32 + 0));
label_23b764:
    // 0x23b764: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x23b764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_23b768:
    // 0x23b768: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x23b768u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_23b76c:
    // 0x23b76c: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x23b76cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_23b770:
    // 0x23b770: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x23b770u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_23b774:
    // 0x23b774: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x23b774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_23b778:
    // 0x23b778: 0x22500  sll         $a0, $v0, 20
    ctx->pc = 0x23b778u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 20));
label_23b77c:
    // 0x23b77c: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x23b77cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_23b780:
    // 0x23b780: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x23b780u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_23b784:
    // 0x23b784: 0xe31823  subu        $v1, $a3, $v1
    ctx->pc = 0x23b784u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
label_23b788:
    // 0x23b788: 0x18400007  blez        $v0, . + 4 + (0x7 << 2)
label_23b78c:
    if (ctx->pc == 0x23B78Cu) {
        ctx->pc = 0x23B78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B788u;
        // 0x23b78c: 0x5283c  dsll32      $a1, $a1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B790u;
        goto label_23b790;
    }
    ctx->pc = 0x23B788u;
    {
        const bool branch_taken_0x23b788 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x23B78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B788u;
        // 0x23b78c: 0x5283c  dsll32      $a1, $a1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b788) {
            ctx->pc = 0x23B7A8u;
            goto label_23b7a8;
        }
    }
    ctx->pc = 0x23B790u;
label_23b790:
    // 0x23b790: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x23b790u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_23b794:
    // 0x23b794: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x23b794u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_23b798:
    // 0x23b798: 0x2429024  and         $s2, $s2, $v0
    ctx->pc = 0x23b798u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) & GPR_U64(ctx, 2));
label_23b79c:
    // 0x23b79c: 0x10000007  b           . + 4 + (0x7 << 2)
label_23b7a0:
    if (ctx->pc == 0x23B7A0u) {
        ctx->pc = 0x23B7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B79Cu;
        // 0x23b7a0: 0x2459025  or          $s2, $s2, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B7A4u;
        goto label_23b7a4;
    }
    ctx->pc = 0x23B79Cu;
    {
        const bool branch_taken_0x23b79c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B79Cu;
        // 0x23b7a0: 0x2459025  or          $s2, $s2, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b79c) {
            ctx->pc = 0x23B7BCu;
            goto label_23b7bc;
        }
    }
    ctx->pc = 0x23B7A4u;
label_23b7a4:
    // 0x23b7a4: 0x0  nop
    ctx->pc = 0x23b7a4u;
    // NOP
label_23b7a8:
    // 0x23b7a8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x23b7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_23b7ac:
    // 0x23b7ac: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x23b7acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_23b7b0:
    // 0x23b7b0: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x23b7b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_23b7b4:
    // 0x23b7b4: 0x1024024  and         $t0, $t0, $v0
    ctx->pc = 0x23b7b4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
label_23b7b8:
    // 0x23b7b8: 0x1034025  or          $t0, $t0, $v1
    ctx->pc = 0x23b7b8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
label_23b7bc:
    // 0x23b7bc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x23b7bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_23b7c0:
    // 0x23b7c0: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x23b7c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_23b7c4:
    // 0x23b7c4: 0xc06de50  jal         func_1B7940
label_23b7c8:
    if (ctx->pc == 0x23B7C8u) {
        ctx->pc = 0x23B7CCu;
        goto label_23b7cc;
    }
    ctx->pc = 0x23B7C4u;
    SET_GPR_U32(ctx, 31, 0x23B7CCu);
    ctx->pc = 0x1B7940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7940u, 0x23B7C4u, 0x23B7CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B7CCu;
label_23b7cc:
    // 0x23b7cc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x23b7ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_23b7d0:
    // 0x23b7d0: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x23b7d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_23b7d4:
    // 0x23b7d4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x23b7d4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_23b7d8:
    // 0x23b7d8: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x23b7d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_23b7dc:
    // 0x23b7dc: 0x3e00008  jr          $ra
label_23b7e0:
    if (ctx->pc == 0x23B7E0u) {
        ctx->pc = 0x23B7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B7DCu;
        // 0x23b7e0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B7E4u;
        goto label_23b7e4;
    }
    ctx->pc = 0x23B7DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23B7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B7DCu;
        // 0x23b7e0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23B7DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23B7E4u;
label_23b7e4:
    // 0x23b7e4: 0x0  nop
    ctx->pc = 0x23b7e4u;
    // NOP
label_23b7e8:
    // 0x23b7e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x23b7e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_23b7ec:
    // 0x23b7ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23b7ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_23b7f0:
    // 0x23b7f0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x23b7f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_23b7f4:
    // 0x23b7f4: 0x2a020018  slti        $v0, $s0, 0x18
    ctx->pc = 0x23b7f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)24) ? 1 : 0);
label_23b7f8:
    // 0x23b7f8: 0x3404ffc0  ori         $a0, $zero, 0xFFC0
    ctx->pc = 0x23b7f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
label_23b7fc:
    // 0x23b7fc: 0x423bc  dsll32      $a0, $a0, 14
    ctx->pc = 0x23b7fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 14));
label_23b800:
    // 0x23b800: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_23b804:
    if (ctx->pc == 0x23B804u) {
        ctx->pc = 0x23B804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B800u;
        // 0x23b804: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B808u;
        goto label_23b808;
    }
    ctx->pc = 0x23B800u;
    {
        const bool branch_taken_0x23b800 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B800u;
        // 0x23b804: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b800) {
            ctx->pc = 0x23B820u;
            goto label_23b820;
        }
    }
    ctx->pc = 0x23B808u;
label_23b808:
    // 0x23b808: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x23b808u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_23b80c:
    // 0x23b80c: 0x3c02002d  lui         $v0, 0x2D
    ctx->pc = 0x23b80cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
label_23b810:
    // 0x23b810: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x23b810u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_23b814:
    // 0x23b814: 0xdc42e3b8  ld          $v0, -0x1C48($v0)
    ctx->pc = 0x23b814u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 4294960056)));
label_23b818:
    // 0x23b818: 0x1000000c  b           . + 4 + (0xC << 2)
label_23b81c:
    if (ctx->pc == 0x23B81Cu) {
        ctx->pc = 0x23B81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B818u;
        // 0x23b81c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B820u;
        goto label_23b820;
    }
    ctx->pc = 0x23B818u;
    {
        const bool branch_taken_0x23b818 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B818u;
        // 0x23b81c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b818) {
            ctx->pc = 0x23B84Cu;
            goto label_23b84c;
        }
    }
    ctx->pc = 0x23B820u;
label_23b820:
    // 0x23b820: 0x1a000008  blez        $s0, . + 4 + (0x8 << 2)
label_23b824:
    if (ctx->pc == 0x23B824u) {
        ctx->pc = 0x23B828u;
        goto label_23b828;
    }
    ctx->pc = 0x23B820u;
    {
        const bool branch_taken_0x23b820 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x23b820) {
            ctx->pc = 0x23B844u;
            goto label_23b844;
        }
    }
    ctx->pc = 0x23B828u;
label_23b828:
    // 0x23b828: 0x34058048  ori         $a1, $zero, 0x8048
    ctx->pc = 0x23b828u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32840);
label_23b82c:
    // 0x23b82c: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x23b82cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
label_23b830:
    // 0x23b830: 0xc06dda4  jal         func_1B7690
label_23b834:
    if (ctx->pc == 0x23B834u) {
        ctx->pc = 0x23B834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B830u;
        // 0x23b834: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B838u;
        goto label_23b838;
    }
    ctx->pc = 0x23B830u;
    SET_GPR_U32(ctx, 31, 0x23B838u);
    ctx->pc = 0x23B834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B830u;
    // 0x23b834: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7690u, 0x23B830u, 0x23B838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B838u;
label_23b838:
    // 0x23b838: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x23b838u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23b83c:
    // 0x23b83c: 0x1e00fffa  bgtz        $s0, . + 4 + (-0x6 << 2)
label_23b840:
    if (ctx->pc == 0x23B840u) {
        ctx->pc = 0x23B844u;
        goto label_23b844;
    }
    ctx->pc = 0x23B83Cu;
    {
        const bool branch_taken_0x23b83c = (GPR_S32(ctx, 16) > 0);
        if (branch_taken_0x23b83c) {
            ctx->pc = 0x23B828u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23b828;
        }
    }
    ctx->pc = 0x23B844u;
label_23b844:
    // 0x23b844: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x23b844u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_23b848:
    // 0x23b848: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23b848u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_23b84c:
    // 0x23b84c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x23b84cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_23b850:
    // 0x23b850: 0x3e00008  jr          $ra
label_23b854:
    if (ctx->pc == 0x23B854u) {
        ctx->pc = 0x23B854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B850u;
        // 0x23b854: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B858u;
        goto label_23b858;
    }
    ctx->pc = 0x23B850u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23B854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B850u;
        // 0x23b854: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23B850u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23B858u;
label_23b858:
    // 0x23b858: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x23b858u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_23b85c:
    // 0x23b85c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23b85cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_23b860:
    // 0x23b860: 0xffa60030  sd          $a2, 0x30($sp)
    ctx->pc = 0x23b860u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 6));
label_23b864:
    // 0x23b864: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x23b864u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_23b868:
    // 0x23b868: 0xffa70038  sd          $a3, 0x38($sp)
    ctx->pc = 0x23b868u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 7));
label_23b86c:
    // 0x23b86c: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x23b86cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_23b870:
    // 0x23b870: 0xffa80040  sd          $t0, 0x40($sp)
    ctx->pc = 0x23b870u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 8));
label_23b874:
    // 0x23b874: 0xffa90048  sd          $t1, 0x48($sp)
    ctx->pc = 0x23b874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 9));
label_23b878:
    // 0x23b878: 0xffaa0050  sd          $t2, 0x50($sp)
    ctx->pc = 0x23b878u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 10));
label_23b87c:
    // 0x23b87c: 0xffab0058  sd          $t3, 0x58($sp)
    ctx->pc = 0x23b87cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 11));
label_23b880:
    // 0x23b880: 0xe7ac0010  swc1        $f12, 0x10($sp)
    ctx->pc = 0x23b880u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_23b884:
    // 0x23b884: 0xe7ad0014  swc1        $f13, 0x14($sp)
    ctx->pc = 0x23b884u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_23b888:
    // 0x23b888: 0xe7ae0018  swc1        $f14, 0x18($sp)
    ctx->pc = 0x23b888u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_23b88c:
    // 0x23b88c: 0xe7af001c  swc1        $f15, 0x1C($sp)
    ctx->pc = 0x23b88cu;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_23b890:
    // 0x23b890: 0xe7b00020  swc1        $f16, 0x20($sp)
    ctx->pc = 0x23b890u;
    { float f = ctx->f[16]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_23b894:
    // 0x23b894: 0xe7b10024  swc1        $f17, 0x24($sp)
    ctx->pc = 0x23b894u;
    { float f = ctx->f[17]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_23b898:
    // 0x23b898: 0xe7b20028  swc1        $f18, 0x28($sp)
    ctx->pc = 0x23b898u;
    { float f = ctx->f[18]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_23b89c:
    // 0x23b89c: 0xe7b3002c  swc1        $f19, 0x2C($sp)
    ctx->pc = 0x23b89cu;
    { float f = ctx->f[19]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_23b8a0:
    // 0x23b8a0: 0xc08f66e  jal         func_23D9B8
label_23b8a4:
    if (ctx->pc == 0x23B8A4u) {
        ctx->pc = 0x23B8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B8A0u;
        // 0x23b8a4: 0x8c850008  lw          $a1, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B8A8u;
        goto label_23b8a8;
    }
    ctx->pc = 0x23B8A0u;
    SET_GPR_U32(ctx, 31, 0x23B8A8u);
    ctx->pc = 0x23B8A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B8A0u;
    // 0x23b8a4: 0x8c850008  lw          $a1, 0x8($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D9B8u;
    { ctx->pc = 0x23d9b8; return; }
    ctx->pc = 0x23B8A8u;
label_23b8a8:
    // 0x23b8a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23b8a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_23b8ac:
    // 0x23b8ac: 0x3e00008  jr          $ra
label_23b8b0:
    if (ctx->pc == 0x23B8B0u) {
        ctx->pc = 0x23B8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B8ACu;
        // 0x23b8b0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B8B4u;
        goto label_23b8b4;
    }
    ctx->pc = 0x23B8ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23B8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B8ACu;
        // 0x23b8b0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23B8ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23B8B4u;
label_23b8b4:
    // 0x23b8b4: 0x0  nop
    ctx->pc = 0x23b8b4u;
    // NOP
label_23b8b8:
    // 0x23b8b8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x23b8b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_23b8bc:
    // 0x23b8bc: 0x3c0c0029  lui         $t4, 0x29
    ctx->pc = 0x23b8bcu;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)41 << 16));
label_23b8c0:
    // 0x23b8c0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23b8c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_23b8c4:
    // 0x23b8c4: 0xffa50038  sd          $a1, 0x38($sp)
    ctx->pc = 0x23b8c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 5));
label_23b8c8:
    // 0x23b8c8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x23b8c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_23b8cc:
    // 0x23b8cc: 0xffa60040  sd          $a2, 0x40($sp)
    ctx->pc = 0x23b8ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 6));
label_23b8d0:
    // 0x23b8d0: 0x27a60038  addiu       $a2, $sp, 0x38
    ctx->pc = 0x23b8d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
label_23b8d4:
    // 0x23b8d4: 0xffa70048  sd          $a3, 0x48($sp)
    ctx->pc = 0x23b8d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 7));
label_23b8d8:
    // 0x23b8d8: 0xffa80050  sd          $t0, 0x50($sp)
    ctx->pc = 0x23b8d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 8));
label_23b8dc:
    // 0x23b8dc: 0xffa90058  sd          $t1, 0x58($sp)
    ctx->pc = 0x23b8dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 9));
label_23b8e0:
    // 0x23b8e0: 0xffaa0060  sd          $t2, 0x60($sp)
    ctx->pc = 0x23b8e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 10));
label_23b8e4:
    // 0x23b8e4: 0xffab0068  sd          $t3, 0x68($sp)
    ctx->pc = 0x23b8e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 11));
label_23b8e8:
    // 0x23b8e8: 0xe7ac0018  swc1        $f12, 0x18($sp)
    ctx->pc = 0x23b8e8u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_23b8ec:
    // 0x23b8ec: 0xe7ad001c  swc1        $f13, 0x1C($sp)
    ctx->pc = 0x23b8ecu;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_23b8f0:
    // 0x23b8f0: 0xe7ae0020  swc1        $f14, 0x20($sp)
    ctx->pc = 0x23b8f0u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_23b8f4:
    // 0x23b8f4: 0xe7af0024  swc1        $f15, 0x24($sp)
    ctx->pc = 0x23b8f4u;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_23b8f8:
    // 0x23b8f8: 0xe7b00028  swc1        $f16, 0x28($sp)
    ctx->pc = 0x23b8f8u;
    { float f = ctx->f[16]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_23b8fc:
    // 0x23b8fc: 0xe7b1002c  swc1        $f17, 0x2C($sp)
    ctx->pc = 0x23b8fcu;
    { float f = ctx->f[17]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_23b900:
    // 0x23b900: 0xe7b20030  swc1        $f18, 0x30($sp)
    ctx->pc = 0x23b900u;
    { float f = ctx->f[18]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_23b904:
    // 0x23b904: 0xe7b30034  swc1        $f19, 0x34($sp)
    ctx->pc = 0x23b904u;
    { float f = ctx->f[19]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_23b908:
    // 0x23b908: 0x8d820818  lw          $v0, 0x818($t4)
    ctx->pc = 0x23b908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 2072)));
label_23b90c:
    // 0x23b90c: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x23b90cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_23b910:
    // 0x23b910: 0xac620054  sw          $v0, 0x54($v1)
    ctx->pc = 0x23b910u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 2));
label_23b914:
    // 0x23b914: 0xc08f650  jal         func_23D940
label_23b918:
    if (ctx->pc == 0x23B918u) {
        ctx->pc = 0x23B918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B914u;
        // 0x23b918: 0x8c440008  lw          $a0, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B91Cu;
        goto label_23b91c;
    }
    ctx->pc = 0x23B914u;
    SET_GPR_U32(ctx, 31, 0x23B91Cu);
    ctx->pc = 0x23B918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B914u;
    // 0x23b918: 0x8c440008  lw          $a0, 0x8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D940u;
    { ctx->pc = 0x23d940; return; }
    ctx->pc = 0x23B91Cu;
label_23b91c:
    // 0x23b91c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23b91cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_23b920:
    // 0x23b920: 0x3e00008  jr          $ra
label_23b924:
    if (ctx->pc == 0x23B924u) {
        ctx->pc = 0x23B924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B920u;
        // 0x23b924: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B928u;
        goto label_23b928;
    }
    ctx->pc = 0x23B920u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23B924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B920u;
        // 0x23b924: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23B920u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23B928u;
label_23b928:
    // 0x23b928: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x23b928u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_23b92c:
    // 0x23b92c: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x23b92cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
label_23b930:
    // 0x23b930: 0xffb10078  sd          $s1, 0x78($sp)
    ctx->pc = 0x23b930u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 17));
label_23b934:
    // 0x23b934: 0xffb20080  sd          $s2, 0x80($sp)
    ctx->pc = 0x23b934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 18));
label_23b938:
    // 0x23b938: 0xffb30088  sd          $s3, 0x88($sp)
    ctx->pc = 0x23b938u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 19));
label_23b93c:
    // 0x23b93c: 0xffb50098  sd          $s5, 0x98($sp)
    ctx->pc = 0x23b93cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 21));
label_23b940:
    // 0x23b940: 0xffb700a8  sd          $s7, 0xA8($sp)
    ctx->pc = 0x23b940u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 23));
label_23b944:
    // 0x23b944: 0xffbf00b8  sd          $ra, 0xB8($sp)
    ctx->pc = 0x23b944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 31));
label_23b948:
    // 0x23b948: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x23b948u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
label_23b94c:
    // 0x23b94c: 0xffb40090  sd          $s4, 0x90($sp)
    ctx->pc = 0x23b94cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 20));
label_23b950:
    // 0x23b950: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x23b950u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_23b954:
    // 0x23b954: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x23b954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
label_23b958:
    // 0x23b958: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x23b958u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_23b95c:
    // 0x23b95c: 0xffbe00b0  sd          $fp, 0xB0($sp)
    ctx->pc = 0x23b95cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 30));
label_23b960:
    // 0x23b960: 0xe0f02d  daddu       $fp, $a3, $zero
    ctx->pc = 0x23b960u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_23b964:
    // 0x23b964: 0x32c20007  andi        $v0, $s6, 0x7
    ctx->pc = 0x23b964u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)7);
label_23b968:
    // 0x23b968: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_23b96c:
    if (ctx->pc == 0x23B96Cu) {
        ctx->pc = 0x23B96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B968u;
        // 0x23b96c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B970u;
        goto label_23b970;
    }
    ctx->pc = 0x23B968u;
    {
        const bool branch_taken_0x23b968 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23B96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B968u;
        // 0x23b96c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b968) {
            ctx->pc = 0x23B984u;
            goto label_23b984;
        }
    }
    ctx->pc = 0x23B970u;
label_23b970:
    // 0x23b970: 0x32820007  andi        $v0, $s4, 0x7
    ctx->pc = 0x23b970u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)7);
label_23b974:
    // 0x23b974: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_23b978:
    if (ctx->pc == 0x23B978u) {
        ctx->pc = 0x23B978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B974u;
        // 0x23b978: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B97Cu;
        goto label_23b97c;
    }
    ctx->pc = 0x23B974u;
    {
        const bool branch_taken_0x23b974 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23b974) {
            ctx->pc = 0x23B978u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23B974u;
            // 0x23b978: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23B984u;
            goto label_23b984;
        }
    }
    ctx->pc = 0x23B97Cu;
label_23b97c:
    // 0x23b97c: 0x3a820008  xori        $v0, $s4, 0x8
    ctx->pc = 0x23b97cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) ^ (uint64_t)(uint16_t)8);
label_23b980:
    // 0x23b980: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x23b980u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_23b984:
    // 0x23b984: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x23b984u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
label_23b988:
    // 0x23b988: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x23b988u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_23b98c:
    // 0x23b98c: 0x2c620007  sltiu       $v0, $v1, 0x7
    ctx->pc = 0x23b98cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
label_23b990:
    // 0x23b990: 0x10400041  beqz        $v0, . + 4 + (0x41 << 2)
label_23b994:
    if (ctx->pc == 0x23B994u) {
        ctx->pc = 0x23B994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B990u;
        // 0x23b994: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B998u;
        goto label_23b998;
    }
    ctx->pc = 0x23B990u;
    {
        const bool branch_taken_0x23b990 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B990u;
        // 0x23b994: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b990) {
            ctx->pc = 0x23BA98u;
            { ctx->pc = 0x23ba98; return; }
        }
    }
    ctx->pc = 0x23B998u;
label_23b998:
    // 0x23b998: 0x741018  mult        $v0, $v1, $s4
    ctx->pc = 0x23b998u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_23b99c:
    // 0x23b99c: 0x2d49821  addu        $s3, $s6, $s4
    ctx->pc = 0x23b99cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 20)));
label_23b9a0:
    // 0x23b9a0: 0x561821  addu        $v1, $v0, $s6
    ctx->pc = 0x23b9a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
label_23b9a4:
    // 0x23b9a4: 0x263102b  sltu        $v0, $s3, $v1
    ctx->pc = 0x23b9a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_23b9a8:
    // 0x23b9a8: 0x5040024f  beql        $v0, $zero, . + 4 + (0x24F << 2)
label_23b9ac:
    if (ctx->pc == 0x23B9ACu) {
        ctx->pc = 0x23B9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B9A8u;
        // 0x23b9ac: 0xdfb00070  ld          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B9B0u;
        goto label_23b9b0;
    }
    ctx->pc = 0x23B9A8u;
    {
        const bool branch_taken_0x23b9a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23b9a8) {
            ctx->pc = 0x23B9ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23B9A8u;
            // 0x23b9ac: 0xdfb00070  ld          $s0, 0x70($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23C2E8u;
            { ctx->pc = 0x23c2e8; return; }
        }
    }
    ctx->pc = 0x23B9B0u;
label_23b9b0:
    // 0x23b9b0: 0xafa3000c  sw          $v1, 0xC($sp)
    ctx->pc = 0x23b9b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 3));
label_23b9b4:
    // 0x23b9b4: 0x1410c2  srl         $v0, $s4, 3
    ctx->pc = 0x23b9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 20), 3));
label_23b9b8:
    // 0x23b9b8: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x23b9b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_23b9bc:
    // 0x23b9bc: 0x2b83c  dsll32      $s7, $v0, 0
    ctx->pc = 0x23b9bcu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 2) << (32 + 0));
label_23b9c0:
    // 0x23b9c0: 0x14903c  dsll32      $s2, $s4, 0
    ctx->pc = 0x23b9c0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 20) << (32 + 0));
label_23b9c4:
    // 0x23b9c4: 0x28750002  slti        $s5, $v1, 0x2
    ctx->pc = 0x23b9c4u;
    SET_GPR_U64(ctx, 21, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_23b9c8:
    // 0x23b9c8: 0x10000022  b           . + 4 + (0x22 << 2)
label_23b9cc:
    if (ctx->pc == 0x23B9CCu) {
        ctx->pc = 0x23B9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B9C8u;
        // 0x23b9cc: 0x260802d  daddu       $s0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B9D0u;
        goto label_23b9d0;
    }
    ctx->pc = 0x23B9C8u;
    {
        const bool branch_taken_0x23b9c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B9C8u;
        // 0x23b9cc: 0x260802d  daddu       $s0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b9c8) {
            ctx->pc = 0x23BA54u;
            { ctx->pc = 0x23ba54; return; }
        }
    }
    ctx->pc = 0x23B9D0u;
label_23b9d0:
    // 0x23b9d0: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
label_23b9d4:
    if (ctx->pc == 0x23B9D4u) {
        ctx->pc = 0x23B9D8u;
        goto label_23b9d8;
    }
    ctx->pc = 0x23B9D0u;
    {
        const bool branch_taken_0x23b9d0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x23b9d0) {
            ctx->pc = 0x23B9F0u;
            goto label_23b9f0;
        }
    }
    ctx->pc = 0x23B9D8u;
label_23b9d8:
    // 0x23b9d8: 0xde030000  ld          $v1, 0x0($s0)
    ctx->pc = 0x23b9d8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 0)));
label_23b9dc:
    // 0x23b9dc: 0xde220000  ld          $v0, 0x0($s1)
    ctx->pc = 0x23b9dcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 0)));
label_23b9e0:
    // 0x23b9e0: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x23b9e0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
label_23b9e4:
    // 0x23b9e4: 0x1000001a  b           . + 4 + (0x1A << 2)
label_23b9e8:
    if (ctx->pc == 0x23B9E8u) {
        ctx->pc = 0x23B9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B9E4u;
        // 0x23b9e8: 0xfe230000  sd          $v1, 0x0($s1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B9ECu;
        goto label_23b9ec;
    }
    ctx->pc = 0x23B9E4u;
    {
        const bool branch_taken_0x23b9e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B9E4u;
        // 0x23b9e8: 0xfe230000  sd          $v1, 0x0($s1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b9e4) {
            ctx->pc = 0x23BA50u;
            { ctx->pc = 0x23ba50; return; }
        }
    }
    ctx->pc = 0x23B9ECu;
label_23b9ec:
    // 0x23b9ec: 0x0  nop
    ctx->pc = 0x23b9ecu;
    // NOP
label_23b9f0:
    // 0x23b9f0: 0x12a0000d  beqz        $s5, . + 4 + (0xD << 2)
label_23b9f4:
    if (ctx->pc == 0x23B9F4u) {
        ctx->pc = 0x23B9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B9F0u;
        // 0x23b9f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B9F8u;
        goto label_23b9f8;
    }
    ctx->pc = 0x23B9F0u;
    {
        const bool branch_taken_0x23b9f0 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B9F0u;
        // 0x23b9f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b9f0) {
            ctx->pc = 0x23BA28u;
            { ctx->pc = 0x23ba28; return; }
        }
    }
    ctx->pc = 0x23B9F8u;
label_23b9f8:
    // 0x23b9f8: 0x17283e  dsrl32      $a1, $s7, 0
    ctx->pc = 0x23b9f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 23) >> (32 + 0));
label_23b9fc:
    // 0x23b9fc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x23b9fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_23ba00:
    // 0x23ba00: 0xdc830000  ld          $v1, 0x0($a0)
    ctx->pc = 0x23ba00u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 0)));
label_23ba04:
    // 0x23ba04: 0x64a5ffff  daddiu      $a1, $a1, -0x1
    ctx->pc = 0x23ba04u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)4294967295);
label_23ba08:
    // 0x23ba08: 0xdcc20000  ld          $v0, 0x0($a2)
    ctx->pc = 0x23ba08u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 0)));
label_23ba0c:
    // 0x23ba0c: 0xfc820000  sd          $v0, 0x0($a0)
    ctx->pc = 0x23ba0cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 2));
label_23ba10:
    // 0x23ba10: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x23ba10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_23ba14:
    // 0x23ba14: 0xfcc30000  sd          $v1, 0x0($a2)
    ctx->pc = 0x23ba14u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 3));
label_23ba18:
    // 0x23ba18: 0x1ca0fff9  bgtz        $a1, . + 4 + (-0x7 << 2)
label_23ba1c:
    if (ctx->pc == 0x23BA1Cu) {
        ctx->pc = 0x23BA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BA18u;
        // 0x23ba1c: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BA20u;
        { ctx->pc = 0x23ba20; return; }
    }
    ctx->pc = 0x23BA18u;
    {
        const bool branch_taken_0x23ba18 = (GPR_S32(ctx, 5) > 0);
        ctx->pc = 0x23BA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BA18u;
        // 0x23ba1c: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ba18) {
            ctx->pc = 0x23BA00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23ba00;
        }
    }
    ctx->pc = 0x23BA20u;
    ctx->pc = 0x23ba20u;
    return;
}
