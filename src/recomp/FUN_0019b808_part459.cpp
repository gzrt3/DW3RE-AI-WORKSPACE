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

// Function: FUN_0019b808
// Address: 0x19b808 - 0x29b810
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0019b808_part459(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x27b228u: goto label_27b228;
        case 0x27b22cu: goto label_27b22c;
        case 0x27b230u: goto label_27b230;
        case 0x27b234u: goto label_27b234;
        case 0x27b238u: goto label_27b238;
        case 0x27b23cu: goto label_27b23c;
        case 0x27b240u: goto label_27b240;
        case 0x27b244u: goto label_27b244;
        case 0x27b248u: goto label_27b248;
        case 0x27b24cu: goto label_27b24c;
        case 0x27b250u: goto label_27b250;
        case 0x27b254u: goto label_27b254;
        case 0x27b258u: goto label_27b258;
        case 0x27b25cu: goto label_27b25c;
        case 0x27b260u: goto label_27b260;
        case 0x27b264u: goto label_27b264;
        case 0x27b268u: goto label_27b268;
        case 0x27b26cu: goto label_27b26c;
        case 0x27b270u: goto label_27b270;
        case 0x27b274u: goto label_27b274;
        case 0x27b278u: goto label_27b278;
        case 0x27b27cu: goto label_27b27c;
        case 0x27b280u: goto label_27b280;
        case 0x27b284u: goto label_27b284;
        case 0x27b288u: goto label_27b288;
        case 0x27b28cu: goto label_27b28c;
        case 0x27b290u: goto label_27b290;
        case 0x27b294u: goto label_27b294;
        case 0x27b298u: goto label_27b298;
        case 0x27b29cu: goto label_27b29c;
        case 0x27b2a0u: goto label_27b2a0;
        case 0x27b2a4u: goto label_27b2a4;
        case 0x27b2a8u: goto label_27b2a8;
        case 0x27b2acu: goto label_27b2ac;
        case 0x27b2b0u: goto label_27b2b0;
        case 0x27b2b4u: goto label_27b2b4;
        case 0x27b2b8u: goto label_27b2b8;
        case 0x27b2bcu: goto label_27b2bc;
        case 0x27b2c0u: goto label_27b2c0;
        case 0x27b2c4u: goto label_27b2c4;
        case 0x27b2c8u: goto label_27b2c8;
        case 0x27b2ccu: goto label_27b2cc;
        case 0x27b2d0u: goto label_27b2d0;
        case 0x27b2d4u: goto label_27b2d4;
        case 0x27b2d8u: goto label_27b2d8;
        case 0x27b2dcu: goto label_27b2dc;
        case 0x27b2e0u: goto label_27b2e0;
        case 0x27b2e4u: goto label_27b2e4;
        case 0x27b2e8u: goto label_27b2e8;
        case 0x27b2ecu: goto label_27b2ec;
        case 0x27b2f0u: goto label_27b2f0;
        case 0x27b2f4u: goto label_27b2f4;
        case 0x27b2f8u: goto label_27b2f8;
        case 0x27b2fcu: goto label_27b2fc;
        case 0x27b300u: goto label_27b300;
        case 0x27b304u: goto label_27b304;
        case 0x27b308u: goto label_27b308;
        case 0x27b30cu: goto label_27b30c;
        case 0x27b310u: goto label_27b310;
        case 0x27b314u: goto label_27b314;
        case 0x27b318u: goto label_27b318;
        case 0x27b31cu: goto label_27b31c;
        case 0x27b320u: goto label_27b320;
        case 0x27b324u: goto label_27b324;
        case 0x27b328u: goto label_27b328;
        case 0x27b32cu: goto label_27b32c;
        case 0x27b330u: goto label_27b330;
        case 0x27b334u: goto label_27b334;
        case 0x27b338u: goto label_27b338;
        case 0x27b33cu: goto label_27b33c;
        case 0x27b340u: goto label_27b340;
        case 0x27b344u: goto label_27b344;
        case 0x27b348u: goto label_27b348;
        case 0x27b34cu: goto label_27b34c;
        case 0x27b350u: goto label_27b350;
        case 0x27b354u: goto label_27b354;
        case 0x27b358u: goto label_27b358;
        case 0x27b35cu: goto label_27b35c;
        case 0x27b360u: goto label_27b360;
        case 0x27b364u: goto label_27b364;
        case 0x27b368u: goto label_27b368;
        case 0x27b36cu: goto label_27b36c;
        case 0x27b370u: goto label_27b370;
        case 0x27b374u: goto label_27b374;
        case 0x27b378u: goto label_27b378;
        case 0x27b37cu: goto label_27b37c;
        case 0x27b380u: goto label_27b380;
        case 0x27b384u: goto label_27b384;
        case 0x27b388u: goto label_27b388;
        case 0x27b38cu: goto label_27b38c;
        case 0x27b390u: goto label_27b390;
        case 0x27b394u: goto label_27b394;
        case 0x27b398u: goto label_27b398;
        case 0x27b39cu: goto label_27b39c;
        case 0x27b3a0u: goto label_27b3a0;
        case 0x27b3a4u: goto label_27b3a4;
        case 0x27b3a8u: goto label_27b3a8;
        case 0x27b3acu: goto label_27b3ac;
        case 0x27b3b0u: goto label_27b3b0;
        case 0x27b3b4u: goto label_27b3b4;
        case 0x27b3b8u: goto label_27b3b8;
        case 0x27b3bcu: goto label_27b3bc;
        case 0x27b3c0u: goto label_27b3c0;
        case 0x27b3c4u: goto label_27b3c4;
        case 0x27b3c8u: goto label_27b3c8;
        case 0x27b3ccu: goto label_27b3cc;
        case 0x27b3d0u: goto label_27b3d0;
        case 0x27b3d4u: goto label_27b3d4;
        case 0x27b3d8u: goto label_27b3d8;
        case 0x27b3dcu: goto label_27b3dc;
        case 0x27b3e0u: goto label_27b3e0;
        case 0x27b3e4u: goto label_27b3e4;
        case 0x27b3e8u: goto label_27b3e8;
        case 0x27b3ecu: goto label_27b3ec;
        case 0x27b3f0u: goto label_27b3f0;
        case 0x27b3f4u: goto label_27b3f4;
        case 0x27b3f8u: goto label_27b3f8;
        case 0x27b3fcu: goto label_27b3fc;
        case 0x27b400u: goto label_27b400;
        case 0x27b404u: goto label_27b404;
        case 0x27b408u: goto label_27b408;
        case 0x27b40cu: goto label_27b40c;
        case 0x27b410u: goto label_27b410;
        case 0x27b414u: goto label_27b414;
        case 0x27b418u: goto label_27b418;
        case 0x27b41cu: goto label_27b41c;
        case 0x27b420u: goto label_27b420;
        case 0x27b424u: goto label_27b424;
        case 0x27b428u: goto label_27b428;
        case 0x27b42cu: goto label_27b42c;
        case 0x27b430u: goto label_27b430;
        case 0x27b434u: goto label_27b434;
        case 0x27b438u: goto label_27b438;
        case 0x27b43cu: goto label_27b43c;
        case 0x27b440u: goto label_27b440;
        case 0x27b444u: goto label_27b444;
        case 0x27b448u: goto label_27b448;
        case 0x27b44cu: goto label_27b44c;
        case 0x27b450u: goto label_27b450;
        case 0x27b454u: goto label_27b454;
        case 0x27b458u: goto label_27b458;
        case 0x27b45cu: goto label_27b45c;
        case 0x27b460u: goto label_27b460;
        case 0x27b464u: goto label_27b464;
        case 0x27b468u: goto label_27b468;
        case 0x27b46cu: goto label_27b46c;
        case 0x27b470u: goto label_27b470;
        case 0x27b474u: goto label_27b474;
        case 0x27b478u: goto label_27b478;
        case 0x27b47cu: goto label_27b47c;
        case 0x27b480u: goto label_27b480;
        case 0x27b484u: goto label_27b484;
        case 0x27b488u: goto label_27b488;
        case 0x27b48cu: goto label_27b48c;
        case 0x27b490u: goto label_27b490;
        case 0x27b494u: goto label_27b494;
        case 0x27b498u: goto label_27b498;
        case 0x27b49cu: goto label_27b49c;
        case 0x27b4a0u: goto label_27b4a0;
        case 0x27b4a4u: goto label_27b4a4;
        case 0x27b4a8u: goto label_27b4a8;
        case 0x27b4acu: goto label_27b4ac;
        case 0x27b4b0u: goto label_27b4b0;
        case 0x27b4b4u: goto label_27b4b4;
        case 0x27b4b8u: goto label_27b4b8;
        case 0x27b4bcu: goto label_27b4bc;
        case 0x27b4c0u: goto label_27b4c0;
        case 0x27b4c4u: goto label_27b4c4;
        case 0x27b4c8u: goto label_27b4c8;
        case 0x27b4ccu: goto label_27b4cc;
        case 0x27b4d0u: goto label_27b4d0;
        case 0x27b4d4u: goto label_27b4d4;
        case 0x27b4d8u: goto label_27b4d8;
        case 0x27b4dcu: goto label_27b4dc;
        case 0x27b4e0u: goto label_27b4e0;
        case 0x27b4e4u: goto label_27b4e4;
        case 0x27b4e8u: goto label_27b4e8;
        case 0x27b4ecu: goto label_27b4ec;
        case 0x27b4f0u: goto label_27b4f0;
        case 0x27b4f4u: goto label_27b4f4;
        case 0x27b4f8u: goto label_27b4f8;
        case 0x27b4fcu: goto label_27b4fc;
        case 0x27b500u: goto label_27b500;
        case 0x27b504u: goto label_27b504;
        case 0x27b508u: goto label_27b508;
        case 0x27b50cu: goto label_27b50c;
        case 0x27b510u: goto label_27b510;
        case 0x27b514u: goto label_27b514;
        case 0x27b518u: goto label_27b518;
        case 0x27b51cu: goto label_27b51c;
        case 0x27b520u: goto label_27b520;
        case 0x27b524u: goto label_27b524;
        case 0x27b528u: goto label_27b528;
        case 0x27b52cu: goto label_27b52c;
        case 0x27b530u: goto label_27b530;
        case 0x27b534u: goto label_27b534;
        case 0x27b538u: goto label_27b538;
        case 0x27b53cu: goto label_27b53c;
        case 0x27b540u: goto label_27b540;
        case 0x27b544u: goto label_27b544;
        case 0x27b548u: goto label_27b548;
        case 0x27b54cu: goto label_27b54c;
        case 0x27b550u: goto label_27b550;
        case 0x27b554u: goto label_27b554;
        case 0x27b558u: goto label_27b558;
        case 0x27b55cu: goto label_27b55c;
        case 0x27b560u: goto label_27b560;
        case 0x27b564u: goto label_27b564;
        case 0x27b568u: goto label_27b568;
        case 0x27b56cu: goto label_27b56c;
        case 0x27b570u: goto label_27b570;
        case 0x27b574u: goto label_27b574;
        case 0x27b578u: goto label_27b578;
        case 0x27b57cu: goto label_27b57c;
        case 0x27b580u: goto label_27b580;
        case 0x27b584u: goto label_27b584;
        case 0x27b588u: goto label_27b588;
        case 0x27b58cu: goto label_27b58c;
        case 0x27b590u: goto label_27b590;
        case 0x27b594u: goto label_27b594;
        case 0x27b598u: goto label_27b598;
        case 0x27b59cu: goto label_27b59c;
        case 0x27b5a0u: goto label_27b5a0;
        case 0x27b5a4u: goto label_27b5a4;
        case 0x27b5a8u: goto label_27b5a8;
        case 0x27b5acu: goto label_27b5ac;
        case 0x27b5b0u: goto label_27b5b0;
        case 0x27b5b4u: goto label_27b5b4;
        case 0x27b5b8u: goto label_27b5b8;
        case 0x27b5bcu: goto label_27b5bc;
        case 0x27b5c0u: goto label_27b5c0;
        case 0x27b5c4u: goto label_27b5c4;
        case 0x27b5c8u: goto label_27b5c8;
        case 0x27b5ccu: goto label_27b5cc;
        case 0x27b5d0u: goto label_27b5d0;
        case 0x27b5d4u: goto label_27b5d4;
        case 0x27b5d8u: goto label_27b5d8;
        case 0x27b5dcu: goto label_27b5dc;
        case 0x27b5e0u: goto label_27b5e0;
        case 0x27b5e4u: goto label_27b5e4;
        case 0x27b5e8u: goto label_27b5e8;
        case 0x27b5ecu: goto label_27b5ec;
        case 0x27b5f0u: goto label_27b5f0;
        case 0x27b5f4u: goto label_27b5f4;
        case 0x27b5f8u: goto label_27b5f8;
        case 0x27b5fcu: goto label_27b5fc;
        case 0x27b600u: goto label_27b600;
        case 0x27b604u: goto label_27b604;
        case 0x27b608u: goto label_27b608;
        case 0x27b60cu: goto label_27b60c;
        case 0x27b610u: goto label_27b610;
        case 0x27b614u: goto label_27b614;
        case 0x27b618u: goto label_27b618;
        case 0x27b61cu: goto label_27b61c;
        case 0x27b620u: goto label_27b620;
        case 0x27b624u: goto label_27b624;
        case 0x27b628u: goto label_27b628;
        case 0x27b62cu: goto label_27b62c;
        case 0x27b630u: goto label_27b630;
        case 0x27b634u: goto label_27b634;
        case 0x27b638u: goto label_27b638;
        case 0x27b63cu: goto label_27b63c;
        case 0x27b640u: goto label_27b640;
        case 0x27b644u: goto label_27b644;
        case 0x27b648u: goto label_27b648;
        case 0x27b64cu: goto label_27b64c;
        case 0x27b650u: goto label_27b650;
        case 0x27b654u: goto label_27b654;
        case 0x27b658u: goto label_27b658;
        case 0x27b65cu: goto label_27b65c;
        case 0x27b660u: goto label_27b660;
        case 0x27b664u: goto label_27b664;
        case 0x27b668u: goto label_27b668;
        case 0x27b66cu: goto label_27b66c;
        case 0x27b670u: goto label_27b670;
        case 0x27b674u: goto label_27b674;
        case 0x27b678u: goto label_27b678;
        case 0x27b67cu: goto label_27b67c;
        case 0x27b680u: goto label_27b680;
        case 0x27b684u: goto label_27b684;
        case 0x27b688u: goto label_27b688;
        case 0x27b68cu: goto label_27b68c;
        case 0x27b690u: goto label_27b690;
        case 0x27b694u: goto label_27b694;
        case 0x27b698u: goto label_27b698;
        case 0x27b69cu: goto label_27b69c;
        case 0x27b6a0u: goto label_27b6a0;
        case 0x27b6a4u: goto label_27b6a4;
        case 0x27b6a8u: goto label_27b6a8;
        case 0x27b6acu: goto label_27b6ac;
        case 0x27b6b0u: goto label_27b6b0;
        case 0x27b6b4u: goto label_27b6b4;
        case 0x27b6b8u: goto label_27b6b8;
        case 0x27b6bcu: goto label_27b6bc;
        case 0x27b6c0u: goto label_27b6c0;
        case 0x27b6c4u: goto label_27b6c4;
        case 0x27b6c8u: goto label_27b6c8;
        case 0x27b6ccu: goto label_27b6cc;
        case 0x27b6d0u: goto label_27b6d0;
        case 0x27b6d4u: goto label_27b6d4;
        case 0x27b6d8u: goto label_27b6d8;
        case 0x27b6dcu: goto label_27b6dc;
        case 0x27b6e0u: goto label_27b6e0;
        case 0x27b6e4u: goto label_27b6e4;
        case 0x27b6e8u: goto label_27b6e8;
        case 0x27b6ecu: goto label_27b6ec;
        case 0x27b6f0u: goto label_27b6f0;
        case 0x27b6f4u: goto label_27b6f4;
        case 0x27b6f8u: goto label_27b6f8;
        case 0x27b6fcu: goto label_27b6fc;
        case 0x27b700u: goto label_27b700;
        case 0x27b704u: goto label_27b704;
        case 0x27b708u: goto label_27b708;
        case 0x27b70cu: goto label_27b70c;
        case 0x27b710u: goto label_27b710;
        case 0x27b714u: goto label_27b714;
        case 0x27b718u: goto label_27b718;
        case 0x27b71cu: goto label_27b71c;
        case 0x27b720u: goto label_27b720;
        case 0x27b724u: goto label_27b724;
        case 0x27b728u: goto label_27b728;
        case 0x27b72cu: goto label_27b72c;
        case 0x27b730u: goto label_27b730;
        case 0x27b734u: goto label_27b734;
        case 0x27b738u: goto label_27b738;
        case 0x27b73cu: goto label_27b73c;
        case 0x27b740u: goto label_27b740;
        case 0x27b744u: goto label_27b744;
        case 0x27b748u: goto label_27b748;
        case 0x27b74cu: goto label_27b74c;
        case 0x27b750u: goto label_27b750;
        case 0x27b754u: goto label_27b754;
        case 0x27b758u: goto label_27b758;
        case 0x27b75cu: goto label_27b75c;
        case 0x27b760u: goto label_27b760;
        case 0x27b764u: goto label_27b764;
        case 0x27b768u: goto label_27b768;
        case 0x27b76cu: goto label_27b76c;
        case 0x27b770u: goto label_27b770;
        case 0x27b774u: goto label_27b774;
        case 0x27b778u: goto label_27b778;
        case 0x27b77cu: goto label_27b77c;
        case 0x27b780u: goto label_27b780;
        case 0x27b784u: goto label_27b784;
        case 0x27b788u: goto label_27b788;
        case 0x27b78cu: goto label_27b78c;
        case 0x27b790u: goto label_27b790;
        case 0x27b794u: goto label_27b794;
        case 0x27b798u: goto label_27b798;
        case 0x27b79cu: goto label_27b79c;
        case 0x27b7a0u: goto label_27b7a0;
        case 0x27b7a4u: goto label_27b7a4;
        case 0x27b7a8u: goto label_27b7a8;
        case 0x27b7acu: goto label_27b7ac;
        case 0x27b7b0u: goto label_27b7b0;
        case 0x27b7b4u: goto label_27b7b4;
        case 0x27b7b8u: goto label_27b7b8;
        case 0x27b7bcu: goto label_27b7bc;
        case 0x27b7c0u: goto label_27b7c0;
        case 0x27b7c4u: goto label_27b7c4;
        case 0x27b7c8u: goto label_27b7c8;
        case 0x27b7ccu: goto label_27b7cc;
        case 0x27b7d0u: goto label_27b7d0;
        case 0x27b7d4u: goto label_27b7d4;
        case 0x27b7d8u: goto label_27b7d8;
        case 0x27b7dcu: goto label_27b7dc;
        case 0x27b7e0u: goto label_27b7e0;
        case 0x27b7e4u: goto label_27b7e4;
        case 0x27b7e8u: goto label_27b7e8;
        case 0x27b7ecu: goto label_27b7ec;
        case 0x27b7f0u: goto label_27b7f0;
        case 0x27b7f4u: goto label_27b7f4;
        case 0x27b7f8u: goto label_27b7f8;
        case 0x27b7fcu: goto label_27b7fc;
        case 0x27b800u: goto label_27b800;
        case 0x27b804u: goto label_27b804;
        case 0x27b808u: goto label_27b808;
        case 0x27b80cu: goto label_27b80c;
        case 0x27b810u: goto label_27b810;
        case 0x27b814u: goto label_27b814;
        case 0x27b818u: goto label_27b818;
        case 0x27b81cu: goto label_27b81c;
        case 0x27b820u: goto label_27b820;
        case 0x27b824u: goto label_27b824;
        case 0x27b828u: goto label_27b828;
        case 0x27b82cu: goto label_27b82c;
        case 0x27b830u: goto label_27b830;
        case 0x27b834u: goto label_27b834;
        case 0x27b838u: goto label_27b838;
        case 0x27b83cu: goto label_27b83c;
        case 0x27b840u: goto label_27b840;
        case 0x27b844u: goto label_27b844;
        case 0x27b848u: goto label_27b848;
        case 0x27b84cu: goto label_27b84c;
        case 0x27b850u: goto label_27b850;
        case 0x27b854u: goto label_27b854;
        case 0x27b858u: goto label_27b858;
        case 0x27b85cu: goto label_27b85c;
        case 0x27b860u: goto label_27b860;
        case 0x27b864u: goto label_27b864;
        case 0x27b868u: goto label_27b868;
        case 0x27b86cu: goto label_27b86c;
        case 0x27b870u: goto label_27b870;
        case 0x27b874u: goto label_27b874;
        case 0x27b878u: goto label_27b878;
        case 0x27b87cu: goto label_27b87c;
        case 0x27b880u: goto label_27b880;
        case 0x27b884u: goto label_27b884;
        case 0x27b888u: goto label_27b888;
        case 0x27b88cu: goto label_27b88c;
        case 0x27b890u: goto label_27b890;
        case 0x27b894u: goto label_27b894;
        case 0x27b898u: goto label_27b898;
        case 0x27b89cu: goto label_27b89c;
        case 0x27b8a0u: goto label_27b8a0;
        case 0x27b8a4u: goto label_27b8a4;
        case 0x27b8a8u: goto label_27b8a8;
        case 0x27b8acu: goto label_27b8ac;
        case 0x27b8b0u: goto label_27b8b0;
        case 0x27b8b4u: goto label_27b8b4;
        case 0x27b8b8u: goto label_27b8b8;
        case 0x27b8bcu: goto label_27b8bc;
        case 0x27b8c0u: goto label_27b8c0;
        case 0x27b8c4u: goto label_27b8c4;
        case 0x27b8c8u: goto label_27b8c8;
        case 0x27b8ccu: goto label_27b8cc;
        case 0x27b8d0u: goto label_27b8d0;
        case 0x27b8d4u: goto label_27b8d4;
        case 0x27b8d8u: goto label_27b8d8;
        case 0x27b8dcu: goto label_27b8dc;
        case 0x27b8e0u: goto label_27b8e0;
        case 0x27b8e4u: goto label_27b8e4;
        case 0x27b8e8u: goto label_27b8e8;
        case 0x27b8ecu: goto label_27b8ec;
        case 0x27b8f0u: goto label_27b8f0;
        case 0x27b8f4u: goto label_27b8f4;
        case 0x27b8f8u: goto label_27b8f8;
        case 0x27b8fcu: goto label_27b8fc;
        case 0x27b900u: goto label_27b900;
        case 0x27b904u: goto label_27b904;
        case 0x27b908u: goto label_27b908;
        case 0x27b90cu: goto label_27b90c;
        case 0x27b910u: goto label_27b910;
        case 0x27b914u: goto label_27b914;
        case 0x27b918u: goto label_27b918;
        case 0x27b91cu: goto label_27b91c;
        case 0x27b920u: goto label_27b920;
        case 0x27b924u: goto label_27b924;
        case 0x27b928u: goto label_27b928;
        case 0x27b92cu: goto label_27b92c;
        case 0x27b930u: goto label_27b930;
        case 0x27b934u: goto label_27b934;
        case 0x27b938u: goto label_27b938;
        case 0x27b93cu: goto label_27b93c;
        case 0x27b940u: goto label_27b940;
        case 0x27b944u: goto label_27b944;
        case 0x27b948u: goto label_27b948;
        case 0x27b94cu: goto label_27b94c;
        case 0x27b950u: goto label_27b950;
        case 0x27b954u: goto label_27b954;
        case 0x27b958u: goto label_27b958;
        case 0x27b95cu: goto label_27b95c;
        case 0x27b960u: goto label_27b960;
        case 0x27b964u: goto label_27b964;
        case 0x27b968u: goto label_27b968;
        case 0x27b96cu: goto label_27b96c;
        case 0x27b970u: goto label_27b970;
        case 0x27b974u: goto label_27b974;
        case 0x27b978u: goto label_27b978;
        case 0x27b97cu: goto label_27b97c;
        case 0x27b980u: goto label_27b980;
        case 0x27b984u: goto label_27b984;
        case 0x27b988u: goto label_27b988;
        case 0x27b98cu: goto label_27b98c;
        case 0x27b990u: goto label_27b990;
        case 0x27b994u: goto label_27b994;
        case 0x27b998u: goto label_27b998;
        case 0x27b99cu: goto label_27b99c;
        case 0x27b9a0u: goto label_27b9a0;
        case 0x27b9a4u: goto label_27b9a4;
        case 0x27b9a8u: goto label_27b9a8;
        case 0x27b9acu: goto label_27b9ac;
        case 0x27b9b0u: goto label_27b9b0;
        case 0x27b9b4u: goto label_27b9b4;
        case 0x27b9b8u: goto label_27b9b8;
        case 0x27b9bcu: goto label_27b9bc;
        case 0x27b9c0u: goto label_27b9c0;
        case 0x27b9c4u: goto label_27b9c4;
        case 0x27b9c8u: goto label_27b9c8;
        case 0x27b9ccu: goto label_27b9cc;
        case 0x27b9d0u: goto label_27b9d0;
        case 0x27b9d4u: goto label_27b9d4;
        case 0x27b9d8u: goto label_27b9d8;
        case 0x27b9dcu: goto label_27b9dc;
        case 0x27b9e0u: goto label_27b9e0;
        case 0x27b9e4u: goto label_27b9e4;
        case 0x27b9e8u: goto label_27b9e8;
        case 0x27b9ecu: goto label_27b9ec;
        case 0x27b9f0u: goto label_27b9f0;
        case 0x27b9f4u: goto label_27b9f4;
        default: return;
    }

label_27b228:
    // 0x27b228: 0x0  nop
    ctx->pc = 0x27b228u;
    // NOP
label_27b22c:
    // 0x27b22c: 0x0  nop
    ctx->pc = 0x27b22cu;
    // NOP
label_27b230:
    // 0x27b230: 0x11f3e  dsrl32      $v1, $at, 28
    ctx->pc = 0x27b230u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 1) >> (32 + 28));
label_27b234:
    // 0x27b234: 0x8bf0  tge         $zero, $zero, 559
    ctx->pc = 0x27b234u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27b238:
    // 0x27b238: 0x0  nop
    ctx->pc = 0x27b238u;
    // NOP
label_27b23c:
    // 0x27b23c: 0x0  nop
    ctx->pc = 0x27b23cu;
    // NOP
label_27b240:
    // 0x27b240: 0x11f50  .word       0x00011F50                   # mfhi        $v1 # 00010740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b240u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_27b244:
    // 0x27b244: 0xe390  .word       0x0000E390                   # mfhi        $gp # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b244u;
    SET_GPR_U64(ctx, 28, ctx->hi);
label_27b248:
    // 0x27b248: 0x0  nop
    ctx->pc = 0x27b248u;
    // NOP
label_27b24c:
    // 0x27b24c: 0x0  nop
    ctx->pc = 0x27b24cu;
    // NOP
label_27b250:
    // 0x27b250: 0x11f6d  .word       0x00011F6D                   # daddu       $v1, $zero, $at # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b250u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 1));
label_27b254:
    // 0x27b254: 0x7e90  .word       0x00007E90                   # mfhi        $t7 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b254u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_27b258:
    // 0x27b258: 0x0  nop
    ctx->pc = 0x27b258u;
    // NOP
label_27b25c:
    // 0x27b25c: 0x0  nop
    ctx->pc = 0x27b25cu;
    // NOP
label_27b260:
    // 0x27b260: 0x11f7d  .word       0x00011F7D                   # INVALID     $zero, $at, 0x1F7D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b260u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x27B260 raw=0x00011F7D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27b264:
    // 0x27b264: 0x6160  .word       0x00006160                   # add         $t4, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b264u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_27b268:
    // 0x27b268: 0x0  nop
    ctx->pc = 0x27b268u;
    // NOP
label_27b26c:
    // 0x27b26c: 0x0  nop
    ctx->pc = 0x27b26cu;
    // NOP
label_27b270:
    // 0x27b270: 0x11f8a  .word       0x00011F8A                   # movz        $v1, $zero, $at # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b270u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
label_27b274:
    // 0x27b274: 0x5d00  sll         $t3, $zero, 20
    ctx->pc = 0x27b274u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 0), 20));
label_27b278:
    // 0x27b278: 0x0  nop
    ctx->pc = 0x27b278u;
    // NOP
label_27b27c:
    // 0x27b27c: 0x0  nop
    ctx->pc = 0x27b27cu;
    // NOP
label_27b280:
    // 0x27b280: 0x11f96  .word       0x00011F96                   # dsrlv       $v1, $at, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b280u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 1) >> (GPR_U32(ctx, 0) & 0x3F));
label_27b284:
    // 0x27b284: 0x7dc0  sll         $t7, $zero, 23
    ctx->pc = 0x27b284u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 0), 23));
label_27b288:
    // 0x27b288: 0x0  nop
    ctx->pc = 0x27b288u;
    // NOP
label_27b28c:
    // 0x27b28c: 0x0  nop
    ctx->pc = 0x27b28cu;
    // NOP
label_27b290:
    // 0x27b290: 0x11fa6  .word       0x00011FA6                   # xor         $v1, $zero, $at # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b290u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 1));
label_27b294:
    // 0x27b294: 0x8b40  sll         $s1, $zero, 13
    ctx->pc = 0x27b294u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 0), 13));
label_27b298:
    // 0x27b298: 0x0  nop
    ctx->pc = 0x27b298u;
    // NOP
label_27b29c:
    // 0x27b29c: 0x0  nop
    ctx->pc = 0x27b29cu;
    // NOP
label_27b2a0:
    // 0x27b2a0: 0x11fb8  dsll        $v1, $at, 30
    ctx->pc = 0x27b2a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 1) << 30);
label_27b2a4:
    // 0x27b2a4: 0xb710  .word       0x0000B710                   # mfhi        $s6 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b2a4u;
    SET_GPR_U64(ctx, 22, ctx->hi);
label_27b2a8:
    // 0x27b2a8: 0x0  nop
    ctx->pc = 0x27b2a8u;
    // NOP
label_27b2ac:
    // 0x27b2ac: 0x0  nop
    ctx->pc = 0x27b2acu;
    // NOP
label_27b2b0:
    // 0x27b2b0: 0x11fcf  .word       0x00011FCF                   # sync.p # 00011800 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b2b0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_27b2b4:
    // 0x27b2b4: 0x7740  sll         $t6, $zero, 29
    ctx->pc = 0x27b2b4u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 0), 29));
label_27b2b8:
    // 0x27b2b8: 0x0  nop
    ctx->pc = 0x27b2b8u;
    // NOP
label_27b2bc:
    // 0x27b2bc: 0x0  nop
    ctx->pc = 0x27b2bcu;
    // NOP
label_27b2c0:
    // 0x27b2c0: 0x11fde  .word       0x00011FDE                   # ddiv        $v1, $zero, $at # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b2c0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x27B2C0 raw=0x00011FDE"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27b2c4:
    // 0x27b2c4: 0xaa70  tge         $zero, $zero, 681
    ctx->pc = 0x27b2c4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27b2c8:
    // 0x27b2c8: 0x0  nop
    ctx->pc = 0x27b2c8u;
    // NOP
label_27b2cc:
    // 0x27b2cc: 0x0  nop
    ctx->pc = 0x27b2ccu;
    // NOP
label_27b2d0:
    // 0x27b2d0: 0x11ff4  teq         $zero, $at, 127
    ctx->pc = 0x27b2d0u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_27b2d4:
    // 0x27b2d4: 0x4880  sll         $t1, $zero, 2
    ctx->pc = 0x27b2d4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), 2));
label_27b2d8:
    // 0x27b2d8: 0x0  nop
    ctx->pc = 0x27b2d8u;
    // NOP
label_27b2dc:
    // 0x27b2dc: 0x0  nop
    ctx->pc = 0x27b2dcu;
    // NOP
label_27b2e0:
    // 0x27b2e0: 0x11ffe  dsrl32      $v1, $at, 31
    ctx->pc = 0x27b2e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 1) >> (32 + 31));
label_27b2e4:
    // 0x27b2e4: 0x6a80  sll         $t5, $zero, 10
    ctx->pc = 0x27b2e4u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 0), 10));
label_27b2e8:
    // 0x27b2e8: 0x0  nop
    ctx->pc = 0x27b2e8u;
    // NOP
label_27b2ec:
    // 0x27b2ec: 0x0  nop
    ctx->pc = 0x27b2ecu;
    // NOP
label_27b2f0:
    // 0x27b2f0: 0x1200c  .word       0x0001200C                   # syscall     128 # 00010000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b2f0u;
    ctx->pc = 0x27B2F4u;
runtime->handleSyscall(rdram, ctx, 0x480u);
label_27b2f4:
    // 0x27b2f4: 0x6540  sll         $t4, $zero, 21
    ctx->pc = 0x27b2f4u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 21));
label_27b2f8:
    // 0x27b2f8: 0x0  nop
    ctx->pc = 0x27b2f8u;
    // NOP
label_27b2fc:
    // 0x27b2fc: 0x0  nop
    ctx->pc = 0x27b2fcu;
    // NOP
label_27b300:
    // 0x27b300: 0x12019  .word       0x00012019                   # multu       $zero, $at # 00002000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b300u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_27b304:
    // 0x27b304: 0x69d0  .word       0x000069D0                   # mfhi        $t5 # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b304u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_27b308:
    // 0x27b308: 0x0  nop
    ctx->pc = 0x27b308u;
    // NOP
label_27b30c:
    // 0x27b30c: 0x0  nop
    ctx->pc = 0x27b30cu;
    // NOP
label_27b310:
    // 0x27b310: 0x12027  nor         $a0, $zero, $at
    ctx->pc = 0x27b310u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 1)));
label_27b314:
    // 0x27b314: 0x7eb0  tge         $zero, $zero, 506
    ctx->pc = 0x27b314u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27b318:
    // 0x27b318: 0x0  nop
    ctx->pc = 0x27b318u;
    // NOP
label_27b31c:
    // 0x27b31c: 0x0  nop
    ctx->pc = 0x27b31cu;
    // NOP
label_27b320:
    // 0x27b320: 0x12037  .word       0x00012037                   # INVALID     $zero, $at, 0x2037 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b320u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x27B320 raw=0x00012037"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27b324:
    // 0x27b324: 0x6660  .word       0x00006660                   # add         $t4, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b324u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_27b328:
    // 0x27b328: 0x0  nop
    ctx->pc = 0x27b328u;
    // NOP
label_27b32c:
    // 0x27b32c: 0x0  nop
    ctx->pc = 0x27b32cu;
    // NOP
label_27b330:
    // 0x27b330: 0x12044  .word       0x00012044                   # sllv        $a0, $at, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b330u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_27b334:
    // 0x27b334: 0x9b00  sll         $s3, $zero, 12
    ctx->pc = 0x27b334u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 0), 12));
label_27b338:
    // 0x27b338: 0x0  nop
    ctx->pc = 0x27b338u;
    // NOP
label_27b33c:
    // 0x27b33c: 0x0  nop
    ctx->pc = 0x27b33cu;
    // NOP
label_27b340:
    // 0x27b340: 0x12058  .word       0x00012058                   # mult        $a0, $zero, $at # 00000040 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x27b340u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_27b344:
    // 0x27b344: 0x4d10  .word       0x00004D10                   # mfhi        $t1 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b344u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_27b348:
    // 0x27b348: 0x0  nop
    ctx->pc = 0x27b348u;
    // NOP
label_27b34c:
    // 0x27b34c: 0x0  nop
    ctx->pc = 0x27b34cu;
    // NOP
label_27b350:
    // 0x27b350: 0x12062  .word       0x00012062                   # neg         $a0, $at # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b350u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 1), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
label_27b354:
    // 0x27b354: 0x92c0  sll         $s2, $zero, 11
    ctx->pc = 0x27b354u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 0), 11));
label_27b358:
    // 0x27b358: 0x0  nop
    ctx->pc = 0x27b358u;
    // NOP
label_27b35c:
    // 0x27b35c: 0x0  nop
    ctx->pc = 0x27b35cu;
    // NOP
label_27b360:
    // 0x27b360: 0x12075  .word       0x00012075                   # INVALID     $zero, $at, 0x2075 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b360u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x27B360 raw=0x00012075"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27b364:
    // 0x27b364: 0x6b10  .word       0x00006B10                   # mfhi        $t5 # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b364u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_27b368:
    // 0x27b368: 0x0  nop
    ctx->pc = 0x27b368u;
    // NOP
label_27b36c:
    // 0x27b36c: 0x0  nop
    ctx->pc = 0x27b36cu;
    // NOP
label_27b370:
    // 0x27b370: 0x12083  sra         $a0, $at, 2
    ctx->pc = 0x27b370u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 1), 2));
label_27b374:
    // 0x27b374: 0xa580  sll         $s4, $zero, 22
    ctx->pc = 0x27b374u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 0), 22));
label_27b378:
    // 0x27b378: 0x0  nop
    ctx->pc = 0x27b378u;
    // NOP
label_27b37c:
    // 0x27b37c: 0x0  nop
    ctx->pc = 0x27b37cu;
    // NOP
label_27b380:
    // 0x27b380: 0x12098  .word       0x00012098                   # mult        $a0, $zero, $at # 00000080 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x27b380u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_27b384:
    // 0x27b384: 0x6650  .word       0x00006650                   # mfhi        $t4 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b384u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_27b388:
    // 0x27b388: 0x0  nop
    ctx->pc = 0x27b388u;
    // NOP
label_27b38c:
    // 0x27b38c: 0x0  nop
    ctx->pc = 0x27b38cu;
    // NOP
label_27b390:
    // 0x27b390: 0x120a5  .word       0x000120A5                   # or          $a0, $zero, $at # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b390u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | GPR_U64(ctx, 1));
label_27b394:
    // 0x27b394: 0x8520  .word       0x00008520                   # add         $s0, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b394u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_27b398:
    // 0x27b398: 0x0  nop
    ctx->pc = 0x27b398u;
    // NOP
label_27b39c:
    // 0x27b39c: 0x0  nop
    ctx->pc = 0x27b39cu;
    // NOP
label_27b3a0:
    // 0x27b3a0: 0x120b6  tne         $zero, $at, 130
    ctx->pc = 0x27b3a0u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_27b3a4:
    // 0x27b3a4: 0x43e0  .word       0x000043E0                   # add         $t0, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b3a4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
label_27b3a8:
    // 0x27b3a8: 0x0  nop
    ctx->pc = 0x27b3a8u;
    // NOP
label_27b3ac:
    // 0x27b3ac: 0x0  nop
    ctx->pc = 0x27b3acu;
    // NOP
label_27b3b0:
    // 0x27b3b0: 0x120bf  dsra32      $a0, $at, 2
    ctx->pc = 0x27b3b0u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 1) >> (32 + 2));
label_27b3b4:
    // 0x27b3b4: 0xab20  .word       0x0000AB20                   # add         $s5, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b3b4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 21, (int32_t)result);     } }
label_27b3b8:
    // 0x27b3b8: 0x0  nop
    ctx->pc = 0x27b3b8u;
    // NOP
label_27b3bc:
    // 0x27b3bc: 0x0  nop
    ctx->pc = 0x27b3bcu;
    // NOP
label_27b3c0:
    // 0x27b3c0: 0x120d5  .word       0x000120D5                   # INVALID     $zero, $at, 0x20D5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b3c0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x27B3C0 raw=0x000120D5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27b3c4:
    // 0x27b3c4: 0x53e0  .word       0x000053E0                   # add         $t2, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b3c4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
label_27b3c8:
    // 0x27b3c8: 0x0  nop
    ctx->pc = 0x27b3c8u;
    // NOP
label_27b3cc:
    // 0x27b3cc: 0x0  nop
    ctx->pc = 0x27b3ccu;
    // NOP
label_27b3d0:
    // 0x27b3d0: 0x120e0  .word       0x000120E0                   # add         $a0, $zero, $at # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b3d0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 4, (int32_t)result);     } }
label_27b3d4:
    // 0x27b3d4: 0x6f40  sll         $t5, $zero, 29
    ctx->pc = 0x27b3d4u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 0), 29));
label_27b3d8:
    // 0x27b3d8: 0x0  nop
    ctx->pc = 0x27b3d8u;
    // NOP
label_27b3dc:
    // 0x27b3dc: 0x0  nop
    ctx->pc = 0x27b3dcu;
    // NOP
label_27b3e0:
    // 0x27b3e0: 0x120ee  .word       0x000120EE                   # dsub        $a0, $zero, $at # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b3e0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 1); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 4, r); }
label_27b3e4:
    // 0x27b3e4: 0x5900  sll         $t3, $zero, 4
    ctx->pc = 0x27b3e4u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 0), 4));
label_27b3e8:
    // 0x27b3e8: 0x0  nop
    ctx->pc = 0x27b3e8u;
    // NOP
label_27b3ec:
    // 0x27b3ec: 0x0  nop
    ctx->pc = 0x27b3ecu;
    // NOP
label_27b3f0:
    // 0x27b3f0: 0x120fa  dsrl        $a0, $at, 3
    ctx->pc = 0x27b3f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 1) >> 3);
label_27b3f4:
    // 0x27b3f4: 0x8f60  .word       0x00008F60                   # add         $s1, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b3f4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_27b3f8:
    // 0x27b3f8: 0x0  nop
    ctx->pc = 0x27b3f8u;
    // NOP
label_27b3fc:
    // 0x27b3fc: 0x0  nop
    ctx->pc = 0x27b3fcu;
    // NOP
label_27b400:
    // 0x27b400: 0x1210c  .word       0x0001210C                   # syscall     132 # 00010000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b400u;
    ctx->pc = 0x27B404u;
runtime->handleSyscall(rdram, ctx, 0x484u);
label_27b404:
    // 0x27b404: 0x5a10  .word       0x00005A10                   # mfhi        $t3 # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b404u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_27b408:
    // 0x27b408: 0x0  nop
    ctx->pc = 0x27b408u;
    // NOP
label_27b40c:
    // 0x27b40c: 0x0  nop
    ctx->pc = 0x27b40cu;
    // NOP
label_27b410:
    // 0x27b410: 0x12118  .word       0x00012118                   # mult        $a0, $zero, $at # 00000100 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x27b410u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_27b414:
    // 0x27b414: 0x99f0  tge         $zero, $zero, 615
    ctx->pc = 0x27b414u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27b418:
    // 0x27b418: 0x0  nop
    ctx->pc = 0x27b418u;
    // NOP
label_27b41c:
    // 0x27b41c: 0x0  nop
    ctx->pc = 0x27b41cu;
    // NOP
label_27b420:
    // 0x27b420: 0x1212c  .word       0x0001212C                   # dadd        $a0, $zero, $at # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b420u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 1); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 4, r); }
label_27b424:
    // 0x27b424: 0x93b0  tge         $zero, $zero, 590
    ctx->pc = 0x27b424u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27b428:
    // 0x27b428: 0x0  nop
    ctx->pc = 0x27b428u;
    // NOP
label_27b42c:
    // 0x27b42c: 0x0  nop
    ctx->pc = 0x27b42cu;
    // NOP
label_27b430:
    // 0x27b430: 0x1213f  dsra32      $a0, $at, 4
    ctx->pc = 0x27b430u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 1) >> (32 + 4));
label_27b434:
    // 0x27b434: 0x8fc0  sll         $s1, $zero, 31
    ctx->pc = 0x27b434u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 0), 31));
label_27b438:
    // 0x27b438: 0x0  nop
    ctx->pc = 0x27b438u;
    // NOP
label_27b43c:
    // 0x27b43c: 0x0  nop
    ctx->pc = 0x27b43cu;
    // NOP
label_27b440:
    // 0x27b440: 0x12151  .word       0x00012151                   # mthi        $zero # 00012140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b440u;
    ctx->hi = GPR_U64(ctx, 0);
label_27b444:
    // 0x27b444: 0x8b20  .word       0x00008B20                   # add         $s1, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b444u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_27b448:
    // 0x27b448: 0x0  nop
    ctx->pc = 0x27b448u;
    // NOP
label_27b44c:
    // 0x27b44c: 0x0  nop
    ctx->pc = 0x27b44cu;
    // NOP
label_27b450:
    // 0x27b450: 0x12163  .word       0x00012163                   # negu        $a0, $at # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b450u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 1)));
label_27b454:
    // 0x27b454: 0x7bb0  tge         $zero, $zero, 494
    ctx->pc = 0x27b454u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27b458:
    // 0x27b458: 0x0  nop
    ctx->pc = 0x27b458u;
    // NOP
label_27b45c:
    // 0x27b45c: 0x0  nop
    ctx->pc = 0x27b45cu;
    // NOP
label_27b460:
    // 0x27b460: 0x12173  tltu        $zero, $at, 133
    ctx->pc = 0x27b460u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_27b464:
    // 0x27b464: 0x8950  .word       0x00008950                   # mfhi        $s1 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b464u;
    SET_GPR_U64(ctx, 17, ctx->hi);
label_27b468:
    // 0x27b468: 0x0  nop
    ctx->pc = 0x27b468u;
    // NOP
label_27b46c:
    // 0x27b46c: 0x0  nop
    ctx->pc = 0x27b46cu;
    // NOP
label_27b470:
    // 0x27b470: 0x12185  .word       0x00012185                   # INVALID     $zero, $at, 0x2185 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b470u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x27B470 raw=0x00012185"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27b474:
    // 0x27b474: 0xa290  .word       0x0000A290                   # mfhi        $s4 # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b474u;
    SET_GPR_U64(ctx, 20, ctx->hi);
label_27b478:
    // 0x27b478: 0x0  nop
    ctx->pc = 0x27b478u;
    // NOP
label_27b47c:
    // 0x27b47c: 0x0  nop
    ctx->pc = 0x27b47cu;
    // NOP
label_27b480:
    // 0x27b480: 0x1219a  .word       0x0001219A                   # div         $a0, $zero, $at # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b480u;
    { int32_t divisor = GPR_S32(ctx, 1);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_27b484:
    // 0x27b484: 0x9580  sll         $s2, $zero, 22
    ctx->pc = 0x27b484u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 0), 22));
label_27b488:
    // 0x27b488: 0x0  nop
    ctx->pc = 0x27b488u;
    // NOP
label_27b48c:
    // 0x27b48c: 0x0  nop
    ctx->pc = 0x27b48cu;
    // NOP
label_27b490:
    // 0x27b490: 0x121ad  .word       0x000121AD                   # daddu       $a0, $zero, $at # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b490u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 1));
label_27b494:
    // 0x27b494: 0xab00  sll         $s5, $zero, 12
    ctx->pc = 0x27b494u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 0), 12));
label_27b498:
    // 0x27b498: 0x0  nop
    ctx->pc = 0x27b498u;
    // NOP
label_27b49c:
    // 0x27b49c: 0x0  nop
    ctx->pc = 0x27b49cu;
    // NOP
label_27b4a0:
    // 0x27b4a0: 0x121c3  sra         $a0, $at, 7
    ctx->pc = 0x27b4a0u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 1), 7));
label_27b4a4:
    // 0x27b4a4: 0x9500  sll         $s2, $zero, 20
    ctx->pc = 0x27b4a4u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 0), 20));
label_27b4a8:
    // 0x27b4a8: 0x0  nop
    ctx->pc = 0x27b4a8u;
    // NOP
label_27b4ac:
    // 0x27b4ac: 0x0  nop
    ctx->pc = 0x27b4acu;
    // NOP
label_27b4b0:
    // 0x27b4b0: 0x121d6  .word       0x000121D6                   # dsrlv       $a0, $at, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b4b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 1) >> (GPR_U32(ctx, 0) & 0x3F));
label_27b4b4:
    // 0x27b4b4: 0x8aa0  .word       0x00008AA0                   # add         $s1, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b4b4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_27b4b8:
    // 0x27b4b8: 0x0  nop
    ctx->pc = 0x27b4b8u;
    // NOP
label_27b4bc:
    // 0x27b4bc: 0x0  nop
    ctx->pc = 0x27b4bcu;
    // NOP
label_27b4c0:
    // 0x27b4c0: 0x121e8  .word       0x000121E8                   # mfsa        $a0 # 000101C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x27b4c0u;
    SET_GPR_U32(ctx, 4, ctx->sa);
label_27b4c4:
    // 0x27b4c4: 0x79b0  tge         $zero, $zero, 486
    ctx->pc = 0x27b4c4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27b4c8:
    // 0x27b4c8: 0x0  nop
    ctx->pc = 0x27b4c8u;
    // NOP
label_27b4cc:
    // 0x27b4cc: 0x0  nop
    ctx->pc = 0x27b4ccu;
    // NOP
label_27b4d0:
    // 0x27b4d0: 0x121f8  dsll        $a0, $at, 7
    ctx->pc = 0x27b4d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 1) << 7);
label_27b4d4:
    // 0x27b4d4: 0x8cb0  tge         $zero, $zero, 562
    ctx->pc = 0x27b4d4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27b4d8:
    // 0x27b4d8: 0x0  nop
    ctx->pc = 0x27b4d8u;
    // NOP
label_27b4dc:
    // 0x27b4dc: 0x0  nop
    ctx->pc = 0x27b4dcu;
    // NOP
label_27b4e0:
    // 0x27b4e0: 0x1220a  .word       0x0001220A                   # movz        $a0, $zero, $at # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b4e0u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
label_27b4e4:
    // 0x27b4e4: 0x6460  .word       0x00006460                   # add         $t4, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b4e4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_27b4e8:
    // 0x27b4e8: 0x0  nop
    ctx->pc = 0x27b4e8u;
    // NOP
label_27b4ec:
    // 0x27b4ec: 0x0  nop
    ctx->pc = 0x27b4ecu;
    // NOP
label_27b4f0:
    // 0x27b4f0: 0x12217  .word       0x00012217                   # dsrav       $a0, $at, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b4f0u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 1) >> (GPR_U32(ctx, 0) & 0x3F));
label_27b4f4:
    // 0x27b4f4: 0x6810  mfhi        $t5
    ctx->pc = 0x27b4f4u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_27b4f8:
    // 0x27b4f8: 0x0  nop
    ctx->pc = 0x27b4f8u;
    // NOP
label_27b4fc:
    // 0x27b4fc: 0x0  nop
    ctx->pc = 0x27b4fcu;
    // NOP
label_27b500:
    // 0x27b500: 0x12225  .word       0x00012225                   # or          $a0, $zero, $at # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b500u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | GPR_U64(ctx, 1));
label_27b504:
    // 0x27b504: 0x7e90  .word       0x00007E90                   # mfhi        $t7 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b504u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_27b508:
    // 0x27b508: 0x0  nop
    ctx->pc = 0x27b508u;
    // NOP
label_27b50c:
    // 0x27b50c: 0x0  nop
    ctx->pc = 0x27b50cu;
    // NOP
label_27b510:
    // 0x27b510: 0x12235  .word       0x00012235                   # INVALID     $zero, $at, 0x2235 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b510u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x27B510 raw=0x00012235"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27b514:
    // 0x27b514: 0xc8f0  tge         $zero, $zero, 803
    ctx->pc = 0x27b514u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27b518:
    // 0x27b518: 0x0  nop
    ctx->pc = 0x27b518u;
    // NOP
label_27b51c:
    // 0x27b51c: 0x0  nop
    ctx->pc = 0x27b51cu;
    // NOP
label_27b520:
    // 0x27b520: 0x1224f  .word       0x0001224F                   # sync # 00012000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b520u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_27b524:
    // 0x27b524: 0xaf50  .word       0x0000AF50                   # mfhi        $s5 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b524u;
    SET_GPR_U64(ctx, 21, ctx->hi);
label_27b528:
    // 0x27b528: 0x0  nop
    ctx->pc = 0x27b528u;
    // NOP
label_27b52c:
    // 0x27b52c: 0x0  nop
    ctx->pc = 0x27b52cu;
    // NOP
label_27b530:
    // 0x27b530: 0x12265  .word       0x00012265                   # or          $a0, $zero, $at # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b530u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | GPR_U64(ctx, 1));
label_27b534:
    // 0x27b534: 0xaf50  .word       0x0000AF50                   # mfhi        $s5 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b534u;
    SET_GPR_U64(ctx, 21, ctx->hi);
label_27b538:
    // 0x27b538: 0x0  nop
    ctx->pc = 0x27b538u;
    // NOP
label_27b53c:
    // 0x27b53c: 0x0  nop
    ctx->pc = 0x27b53cu;
    // NOP
label_27b540:
    // 0x27b540: 0x1227b  dsra        $a0, $at, 9
    ctx->pc = 0x27b540u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 1) >> 9);
label_27b544:
    // 0x27b544: 0xab60  .word       0x0000AB60                   # add         $s5, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b544u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 21, (int32_t)result);     } }
label_27b548:
    // 0x27b548: 0x0  nop
    ctx->pc = 0x27b548u;
    // NOP
label_27b54c:
    // 0x27b54c: 0x0  nop
    ctx->pc = 0x27b54cu;
    // NOP
label_27b550:
    // 0x27b550: 0x12291  .word       0x00012291                   # mthi        $zero # 00012280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b550u;
    ctx->hi = GPR_U64(ctx, 0);
label_27b554:
    // 0x27b554: 0xc840  sll         $t9, $zero, 1
    ctx->pc = 0x27b554u;
    SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 0), 1));
label_27b558:
    // 0x27b558: 0x0  nop
    ctx->pc = 0x27b558u;
    // NOP
label_27b55c:
    // 0x27b55c: 0x0  nop
    ctx->pc = 0x27b55cu;
    // NOP
label_27b560:
    // 0x27b560: 0x122ab  .word       0x000122AB                   # sltu        $a0, $zero, $at # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b560u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
label_27b564:
    // 0x27b564: 0xaf10  .word       0x0000AF10                   # mfhi        $s5 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b564u;
    SET_GPR_U64(ctx, 21, ctx->hi);
label_27b568:
    // 0x27b568: 0x0  nop
    ctx->pc = 0x27b568u;
    // NOP
label_27b56c:
    // 0x27b56c: 0x0  nop
    ctx->pc = 0x27b56cu;
    // NOP
label_27b570:
    // 0x27b570: 0x122c1  .word       0x000122C1                   # INVALID     $zero, $at, 0x22C1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b570u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x27B570 raw=0x000122C1"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27b574:
    // 0x27b574: 0x8550  .word       0x00008550                   # mfhi        $s0 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b574u;
    SET_GPR_U64(ctx, 16, ctx->hi);
label_27b578:
    // 0x27b578: 0x0  nop
    ctx->pc = 0x27b578u;
    // NOP
label_27b57c:
    // 0x27b57c: 0x0  nop
    ctx->pc = 0x27b57cu;
    // NOP
label_27b580:
    // 0x27b580: 0x122d2  .word       0x000122D2                   # mflo        $a0 # 000102C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b580u;
    SET_GPR_U64(ctx, 4, ctx->lo);
label_27b584:
    // 0x27b584: 0x9f90  .word       0x00009F90                   # mfhi        $s3 # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b584u;
    SET_GPR_U64(ctx, 19, ctx->hi);
label_27b588:
    // 0x27b588: 0x0  nop
    ctx->pc = 0x27b588u;
    // NOP
label_27b58c:
    // 0x27b58c: 0x0  nop
    ctx->pc = 0x27b58cu;
    // NOP
label_27b590:
    // 0x27b590: 0x122e6  .word       0x000122E6                   # xor         $a0, $zero, $at # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b590u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 1));
label_27b594:
    // 0x27b594: 0x9dc0  sll         $s3, $zero, 23
    ctx->pc = 0x27b594u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 0), 23));
label_27b598:
    // 0x27b598: 0x0  nop
    ctx->pc = 0x27b598u;
    // NOP
label_27b59c:
    // 0x27b59c: 0x0  nop
    ctx->pc = 0x27b59cu;
    // NOP
label_27b5a0:
    // 0x27b5a0: 0x122fa  dsrl        $a0, $at, 11
    ctx->pc = 0x27b5a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 1) >> 11);
label_27b5a4:
    // 0x27b5a4: 0xb780  sll         $s6, $zero, 30
    ctx->pc = 0x27b5a4u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 0), 30));
label_27b5a8:
    // 0x27b5a8: 0x0  nop
    ctx->pc = 0x27b5a8u;
    // NOP
label_27b5ac:
    // 0x27b5ac: 0x0  nop
    ctx->pc = 0x27b5acu;
    // NOP
label_27b5b0:
    // 0x27b5b0: 0x12311  .word       0x00012311                   # mthi        $zero # 00012300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b5b0u;
    ctx->hi = GPR_U64(ctx, 0);
label_27b5b4:
    // 0x27b5b4: 0x98e0  .word       0x000098E0                   # add         $s3, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b5b4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 19, (int32_t)result);     } }
label_27b5b8:
    // 0x27b5b8: 0x0  nop
    ctx->pc = 0x27b5b8u;
    // NOP
label_27b5bc:
    // 0x27b5bc: 0x0  nop
    ctx->pc = 0x27b5bcu;
    // NOP
label_27b5c0:
    // 0x27b5c0: 0x12325  .word       0x00012325                   # or          $a0, $zero, $at # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b5c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | GPR_U64(ctx, 1));
label_27b5c4:
    // 0x27b5c4: 0xaf00  sll         $s5, $zero, 28
    ctx->pc = 0x27b5c4u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 0), 28));
label_27b5c8:
    // 0x27b5c8: 0x0  nop
    ctx->pc = 0x27b5c8u;
    // NOP
label_27b5cc:
    // 0x27b5cc: 0x0  nop
    ctx->pc = 0x27b5ccu;
    // NOP
label_27b5d0:
    // 0x27b5d0: 0x1233b  dsra        $a0, $at, 12
    ctx->pc = 0x27b5d0u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 1) >> 12);
label_27b5d4:
    // 0x27b5d4: 0x92c0  sll         $s2, $zero, 11
    ctx->pc = 0x27b5d4u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 0), 11));
label_27b5d8:
    // 0x27b5d8: 0x0  nop
    ctx->pc = 0x27b5d8u;
    // NOP
label_27b5dc:
    // 0x27b5dc: 0x0  nop
    ctx->pc = 0x27b5dcu;
    // NOP
label_27b5e0:
    // 0x27b5e0: 0x1234e  .word       0x0001234E                   # INVALID     $zero, $at, 0x234E # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b5e0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x27B5E0 raw=0x0001234E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27b5e4:
    // 0x27b5e4: 0xb3d0  .word       0x0000B3D0                   # mfhi        $s6 # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b5e4u;
    SET_GPR_U64(ctx, 22, ctx->hi);
label_27b5e8:
    // 0x27b5e8: 0x0  nop
    ctx->pc = 0x27b5e8u;
    // NOP
label_27b5ec:
    // 0x27b5ec: 0x0  nop
    ctx->pc = 0x27b5ecu;
    // NOP
label_27b5f0:
    // 0x27b5f0: 0x12365  .word       0x00012365                   # or          $a0, $zero, $at # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b5f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | GPR_U64(ctx, 1));
label_27b5f4:
    // 0x27b5f4: 0xa190  .word       0x0000A190                   # mfhi        $s4 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b5f4u;
    SET_GPR_U64(ctx, 20, ctx->hi);
label_27b5f8:
    // 0x27b5f8: 0x0  nop
    ctx->pc = 0x27b5f8u;
    // NOP
label_27b5fc:
    // 0x27b5fc: 0x0  nop
    ctx->pc = 0x27b5fcu;
    // NOP
label_27b600:
    // 0x27b600: 0x1237a  dsrl        $a0, $at, 13
    ctx->pc = 0x27b600u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 1) >> 13);
label_27b604:
    // 0x27b604: 0xb340  sll         $s6, $zero, 13
    ctx->pc = 0x27b604u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 0), 13));
label_27b608:
    // 0x27b608: 0x0  nop
    ctx->pc = 0x27b608u;
    // NOP
label_27b60c:
    // 0x27b60c: 0x0  nop
    ctx->pc = 0x27b60cu;
    // NOP
label_27b610:
    // 0x27b610: 0x12391  .word       0x00012391                   # mthi        $zero # 00012380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b610u;
    ctx->hi = GPR_U64(ctx, 0);
label_27b614:
    // 0x27b614: 0xd250  .word       0x0000D250                   # mfhi        $k0 # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b614u;
    SET_GPR_U64(ctx, 26, ctx->hi);
label_27b618:
    // 0x27b618: 0x0  nop
    ctx->pc = 0x27b618u;
    // NOP
label_27b61c:
    // 0x27b61c: 0x0  nop
    ctx->pc = 0x27b61cu;
    // NOP
label_27b620:
    // 0x27b620: 0x123ac  .word       0x000123AC                   # dadd        $a0, $zero, $at # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b620u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 1); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 4, r); }
label_27b624:
    // 0x27b624: 0xa830  tge         $zero, $zero, 672
    ctx->pc = 0x27b624u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27b628:
    // 0x27b628: 0x0  nop
    ctx->pc = 0x27b628u;
    // NOP
label_27b62c:
    // 0x27b62c: 0x0  nop
    ctx->pc = 0x27b62cu;
    // NOP
label_27b630:
    // 0x27b630: 0x123c2  srl         $a0, $at, 15
    ctx->pc = 0x27b630u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 1), 15));
label_27b634:
    // 0x27b634: 0xaf90  .word       0x0000AF90                   # mfhi        $s5 # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b634u;
    SET_GPR_U64(ctx, 21, ctx->hi);
label_27b638:
    // 0x27b638: 0x0  nop
    ctx->pc = 0x27b638u;
    // NOP
label_27b63c:
    // 0x27b63c: 0x0  nop
    ctx->pc = 0x27b63cu;
    // NOP
label_27b640:
    // 0x27b640: 0x123d8  .word       0x000123D8                   # mult        $a0, $zero, $at # 000003C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x27b640u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_27b644:
    // 0x27b644: 0xd830  tge         $zero, $zero, 864
    ctx->pc = 0x27b644u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27b648:
    // 0x27b648: 0x0  nop
    ctx->pc = 0x27b648u;
    // NOP
label_27b64c:
    // 0x27b64c: 0x0  nop
    ctx->pc = 0x27b64cu;
    // NOP
label_27b650:
    // 0x27b650: 0x123f4  teq         $zero, $at, 143
    ctx->pc = 0x27b650u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_27b654:
    // 0x27b654: 0x80e0  .word       0x000080E0                   # add         $s0, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b654u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_27b658:
    // 0x27b658: 0x0  nop
    ctx->pc = 0x27b658u;
    // NOP
label_27b65c:
    // 0x27b65c: 0x0  nop
    ctx->pc = 0x27b65cu;
    // NOP
label_27b660:
    // 0x27b660: 0x12405  .word       0x00012405                   # INVALID     $zero, $at, 0x2405 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b660u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x27B660 raw=0x00012405"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27b664:
    // 0x27b664: 0xb710  .word       0x0000B710                   # mfhi        $s6 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b664u;
    SET_GPR_U64(ctx, 22, ctx->hi);
label_27b668:
    // 0x27b668: 0x0  nop
    ctx->pc = 0x27b668u;
    // NOP
label_27b66c:
    // 0x27b66c: 0x0  nop
    ctx->pc = 0x27b66cu;
    // NOP
label_27b670:
    // 0x27b670: 0x1241c  .word       0x0001241C                   # dmult       $zero, $at # 00002400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b670u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x27B670 raw=0x0001241C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27b674:
    // 0x27b674: 0xc5e0  .word       0x0000C5E0                   # add         $t8, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b674u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 24, (int32_t)result);     } }
label_27b678:
    // 0x27b678: 0x0  nop
    ctx->pc = 0x27b678u;
    // NOP
label_27b67c:
    // 0x27b67c: 0x0  nop
    ctx->pc = 0x27b67cu;
    // NOP
label_27b680:
    // 0x27b680: 0x12435  .word       0x00012435                   # INVALID     $zero, $at, 0x2435 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b680u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x27B680 raw=0x00012435"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27b684:
    // 0x27b684: 0xc4c0  sll         $t8, $zero, 19
    ctx->pc = 0x27b684u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
label_27b688:
    // 0x27b688: 0x0  nop
    ctx->pc = 0x27b688u;
    // NOP
label_27b68c:
    // 0x27b68c: 0x0  nop
    ctx->pc = 0x27b68cu;
    // NOP
label_27b690:
    // 0x27b690: 0x1244e  .word       0x0001244E                   # INVALID     $zero, $at, 0x244E # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b690u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x27B690 raw=0x0001244E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27b694:
    // 0x27b694: 0xadd0  .word       0x0000ADD0                   # mfhi        $s5 # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b694u;
    SET_GPR_U64(ctx, 21, ctx->hi);
label_27b698:
    // 0x27b698: 0x0  nop
    ctx->pc = 0x27b698u;
    // NOP
label_27b69c:
    // 0x27b69c: 0x0  nop
    ctx->pc = 0x27b69cu;
    // NOP
label_27b6a0:
    // 0x27b6a0: 0x12464  .word       0x00012464                   # and         $a0, $zero, $at # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b6a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) & GPR_U64(ctx, 1));
label_27b6a4:
    // 0x27b6a4: 0xa6f0  tge         $zero, $zero, 667
    ctx->pc = 0x27b6a4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27b6a8:
    // 0x27b6a8: 0x0  nop
    ctx->pc = 0x27b6a8u;
    // NOP
label_27b6ac:
    // 0x27b6ac: 0x0  nop
    ctx->pc = 0x27b6acu;
    // NOP
label_27b6b0:
    // 0x27b6b0: 0x12479  .word       0x00012479                   # INVALID     $zero, $at, 0x2479 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b6b0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x27B6B0 raw=0x00012479"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27b6b4:
    // 0x27b6b4: 0xad30  tge         $zero, $zero, 692
    ctx->pc = 0x27b6b4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27b6b8:
    // 0x27b6b8: 0x0  nop
    ctx->pc = 0x27b6b8u;
    // NOP
label_27b6bc:
    // 0x27b6bc: 0x0  nop
    ctx->pc = 0x27b6bcu;
    // NOP
label_27b6c0:
    // 0x27b6c0: 0x1248f  .word       0x0001248F                   # sync.p # 00012000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b6c0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_27b6c4:
    // 0x27b6c4: 0xa1e0  .word       0x0000A1E0                   # add         $s4, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b6c4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_27b6c8:
    // 0x27b6c8: 0x0  nop
    ctx->pc = 0x27b6c8u;
    // NOP
label_27b6cc:
    // 0x27b6cc: 0x0  nop
    ctx->pc = 0x27b6ccu;
    // NOP
label_27b6d0:
    // 0x27b6d0: 0x124a4  .word       0x000124A4                   # and         $a0, $zero, $at # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b6d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) & GPR_U64(ctx, 1));
label_27b6d4:
    // 0x27b6d4: 0xb2b0  tge         $zero, $zero, 714
    ctx->pc = 0x27b6d4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27b6d8:
    // 0x27b6d8: 0x0  nop
    ctx->pc = 0x27b6d8u;
    // NOP
label_27b6dc:
    // 0x27b6dc: 0x0  nop
    ctx->pc = 0x27b6dcu;
    // NOP
label_27b6e0:
    // 0x27b6e0: 0x124bb  dsra        $a0, $at, 18
    ctx->pc = 0x27b6e0u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 1) >> 18);
label_27b6e4:
    // 0x27b6e4: 0x9b90  .word       0x00009B90                   # mfhi        $s3 # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b6e4u;
    SET_GPR_U64(ctx, 19, ctx->hi);
label_27b6e8:
    // 0x27b6e8: 0x0  nop
    ctx->pc = 0x27b6e8u;
    // NOP
label_27b6ec:
    // 0x27b6ec: 0x0  nop
    ctx->pc = 0x27b6ecu;
    // NOP
label_27b6f0:
    // 0x27b6f0: 0x124cf  .word       0x000124CF                   # sync.p # 00012000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b6f0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_27b6f4:
    // 0x27b6f4: 0xc680  sll         $t8, $zero, 26
    ctx->pc = 0x27b6f4u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 0), 26));
label_27b6f8:
    // 0x27b6f8: 0x0  nop
    ctx->pc = 0x27b6f8u;
    // NOP
label_27b6fc:
    // 0x27b6fc: 0x0  nop
    ctx->pc = 0x27b6fcu;
    // NOP
label_27b700:
    // 0x27b700: 0x124e8  .word       0x000124E8                   # mfsa        $a0 # 000104C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x27b700u;
    SET_GPR_U32(ctx, 4, ctx->sa);
label_27b704:
    // 0x27b704: 0xbf50  .word       0x0000BF50                   # mfhi        $s7 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b704u;
    SET_GPR_U64(ctx, 23, ctx->hi);
label_27b708:
    // 0x27b708: 0x0  nop
    ctx->pc = 0x27b708u;
    // NOP
label_27b70c:
    // 0x27b70c: 0x0  nop
    ctx->pc = 0x27b70cu;
    // NOP
label_27b710:
    // 0x27b710: 0x12500  sll         $a0, $at, 20
    ctx->pc = 0x27b710u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 1), 20));
label_27b714:
    // 0x27b714: 0xca90  .word       0x0000CA90                   # mfhi        $t9 # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b714u;
    SET_GPR_U64(ctx, 25, ctx->hi);
label_27b718:
    // 0x27b718: 0x0  nop
    ctx->pc = 0x27b718u;
    // NOP
label_27b71c:
    // 0x27b71c: 0x0  nop
    ctx->pc = 0x27b71cu;
    // NOP
label_27b720:
    // 0x27b720: 0x1251a  .word       0x0001251A                   # div         $a0, $zero, $at # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b720u;
    { int32_t divisor = GPR_S32(ctx, 1);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_27b724:
    // 0x27b724: 0xba80  sll         $s7, $zero, 10
    ctx->pc = 0x27b724u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 0), 10));
label_27b728:
    // 0x27b728: 0x0  nop
    ctx->pc = 0x27b728u;
    // NOP
label_27b72c:
    // 0x27b72c: 0x0  nop
    ctx->pc = 0x27b72cu;
    // NOP
label_27b730:
    // 0x27b730: 0x12532  tlt         $zero, $at, 148
    ctx->pc = 0x27b730u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_27b734:
    // 0x27b734: 0xab80  sll         $s5, $zero, 14
    ctx->pc = 0x27b734u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 0), 14));
label_27b738:
    // 0x27b738: 0x0  nop
    ctx->pc = 0x27b738u;
    // NOP
label_27b73c:
    // 0x27b73c: 0x0  nop
    ctx->pc = 0x27b73cu;
    // NOP
label_27b740:
    // 0x27b740: 0x12548  .word       0x00012548                   # jr          $zero # 00012540 <InstrIdType: CPU_SPECIAL>
label_27b744:
    if (ctx->pc == 0x27B744u) {
        ctx->pc = 0x27B744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B740u;
        // 0x27b744: 0x87e0  .word       0x000087E0                   # add         $s0, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = 0x27B748u;
        goto label_27b748;
    }
    ctx->pc = 0x27B740u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x27B744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B740u;
        // 0x27b744: 0x87e0  .word       0x000087E0                   # add         $s0, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27B740u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x27B748u;
label_27b748:
    // 0x27b748: 0x0  nop
    ctx->pc = 0x27b748u;
    // NOP
label_27b74c:
    // 0x27b74c: 0x0  nop
    ctx->pc = 0x27b74cu;
    // NOP
label_27b750:
    // 0x27b750: 0x12559  .word       0x00012559                   # multu       $zero, $at # 00002540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b750u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_27b754:
    // 0x27b754: 0x9360  .word       0x00009360                   # add         $s2, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b754u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 18, (int32_t)result);     } }
label_27b758:
    // 0x27b758: 0x0  nop
    ctx->pc = 0x27b758u;
    // NOP
label_27b75c:
    // 0x27b75c: 0x0  nop
    ctx->pc = 0x27b75cu;
    // NOP
label_27b760:
    // 0x27b760: 0x1256c  .word       0x0001256C                   # dadd        $a0, $zero, $at # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b760u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 1); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 4, r); }
label_27b764:
    // 0x27b764: 0xa6e0  .word       0x0000A6E0                   # add         $s4, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b764u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_27b768:
    // 0x27b768: 0x0  nop
    ctx->pc = 0x27b768u;
    // NOP
label_27b76c:
    // 0x27b76c: 0x0  nop
    ctx->pc = 0x27b76cu;
    // NOP
label_27b770:
    // 0x27b770: 0x12581  .word       0x00012581                   # INVALID     $zero, $at, 0x2581 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b770u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x27B770 raw=0x00012581"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27b774:
    // 0x27b774: 0x6950  .word       0x00006950                   # mfhi        $t5 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b774u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_27b778:
    // 0x27b778: 0x0  nop
    ctx->pc = 0x27b778u;
    // NOP
label_27b77c:
    // 0x27b77c: 0x0  nop
    ctx->pc = 0x27b77cu;
    // NOP
label_27b780:
    // 0x27b780: 0x1258f  .word       0x0001258F                   # sync.p # 00012000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b780u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_27b784:
    // 0x27b784: 0x9200  sll         $s2, $zero, 8
    ctx->pc = 0x27b784u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 0), 8));
label_27b788:
    // 0x27b788: 0x0  nop
    ctx->pc = 0x27b788u;
    // NOP
label_27b78c:
    // 0x27b78c: 0x0  nop
    ctx->pc = 0x27b78cu;
    // NOP
label_27b790:
    // 0x27b790: 0x125a2  .word       0x000125A2                   # neg         $a0, $at # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b790u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 1), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
label_27b794:
    // 0x27b794: 0x8020  add         $s0, $zero, $zero
    ctx->pc = 0x27b794u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_27b798:
    // 0x27b798: 0x0  nop
    ctx->pc = 0x27b798u;
    // NOP
label_27b79c:
    // 0x27b79c: 0x0  nop
    ctx->pc = 0x27b79cu;
    // NOP
label_27b7a0:
    // 0x27b7a0: 0x125b3  tltu        $zero, $at, 150
    ctx->pc = 0x27b7a0u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_27b7a4:
    // 0x27b7a4: 0x78b0  tge         $zero, $zero, 482
    ctx->pc = 0x27b7a4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27b7a8:
    // 0x27b7a8: 0x0  nop
    ctx->pc = 0x27b7a8u;
    // NOP
label_27b7ac:
    // 0x27b7ac: 0x0  nop
    ctx->pc = 0x27b7acu;
    // NOP
label_27b7b0:
    // 0x27b7b0: 0x125c3  sra         $a0, $at, 23
    ctx->pc = 0x27b7b0u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 1), 23));
label_27b7b4:
    // 0x27b7b4: 0x80f0  tge         $zero, $zero, 515
    ctx->pc = 0x27b7b4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27b7b8:
    // 0x27b7b8: 0x0  nop
    ctx->pc = 0x27b7b8u;
    // NOP
label_27b7bc:
    // 0x27b7bc: 0x0  nop
    ctx->pc = 0x27b7bcu;
    // NOP
label_27b7c0:
    // 0x27b7c0: 0x125d4  .word       0x000125D4                   # dsllv       $a0, $at, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b7c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 1) << (GPR_U32(ctx, 0) & 0x3F));
label_27b7c4:
    // 0x27b7c4: 0xe160  .word       0x0000E160                   # add         $gp, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b7c4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 28, (int32_t)result);     } }
label_27b7c8:
    // 0x27b7c8: 0x0  nop
    ctx->pc = 0x27b7c8u;
    // NOP
label_27b7cc:
    // 0x27b7cc: 0x0  nop
    ctx->pc = 0x27b7ccu;
    // NOP
label_27b7d0:
    // 0x27b7d0: 0x125f1  tgeu        $zero, $at, 151
    ctx->pc = 0x27b7d0u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_27b7d4:
    // 0x27b7d4: 0x8000  sll         $s0, $zero, 0
    ctx->pc = 0x27b7d4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_27b7d8:
    // 0x27b7d8: 0x0  nop
    ctx->pc = 0x27b7d8u;
    // NOP
label_27b7dc:
    // 0x27b7dc: 0x0  nop
    ctx->pc = 0x27b7dcu;
    // NOP
label_27b7e0:
    // 0x27b7e0: 0x12601  .word       0x00012601                   # INVALID     $zero, $at, 0x2601 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b7e0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x27B7E0 raw=0x00012601"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27b7e4:
    // 0x27b7e4: 0xcbe0  .word       0x0000CBE0                   # add         $t9, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b7e4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 25, (int32_t)result);     } }
label_27b7e8:
    // 0x27b7e8: 0x0  nop
    ctx->pc = 0x27b7e8u;
    // NOP
label_27b7ec:
    // 0x27b7ec: 0x0  nop
    ctx->pc = 0x27b7ecu;
    // NOP
label_27b7f0:
    // 0x27b7f0: 0x1261b  .word       0x0001261B                   # divu        $a0, $zero, $at # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b7f0u;
    { uint32_t divisor = GPR_U32(ctx, 1); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_27b7f4:
    // 0x27b7f4: 0x6bb0  tge         $zero, $zero, 430
    ctx->pc = 0x27b7f4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27b7f8:
    // 0x27b7f8: 0x0  nop
    ctx->pc = 0x27b7f8u;
    // NOP
label_27b7fc:
    // 0x27b7fc: 0x0  nop
    ctx->pc = 0x27b7fcu;
    // NOP
label_27b800:
    // 0x27b800: 0x12629  .word       0x00012629                   # mtsa        $zero # 00012600 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x27b800u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_27b804:
    // 0x27b804: 0x8880  sll         $s1, $zero, 2
    ctx->pc = 0x27b804u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 0), 2));
label_27b808:
    // 0x27b808: 0x0  nop
    ctx->pc = 0x27b808u;
    // NOP
label_27b80c:
    // 0x27b80c: 0x0  nop
    ctx->pc = 0x27b80cu;
    // NOP
label_27b810:
    // 0x27b810: 0x1263b  dsra        $a0, $at, 24
    ctx->pc = 0x27b810u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 1) >> 24);
label_27b814:
    // 0x27b814: 0x4830  tge         $zero, $zero, 288
    ctx->pc = 0x27b814u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27b818:
    // 0x27b818: 0x0  nop
    ctx->pc = 0x27b818u;
    // NOP
label_27b81c:
    // 0x27b81c: 0x0  nop
    ctx->pc = 0x27b81cu;
    // NOP
label_27b820:
    // 0x27b820: 0x12645  .word       0x00012645                   # INVALID     $zero, $at, 0x2645 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b820u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x27B820 raw=0x00012645"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27b824:
    // 0x27b824: 0x84c0  sll         $s0, $zero, 19
    ctx->pc = 0x27b824u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
label_27b828:
    // 0x27b828: 0x0  nop
    ctx->pc = 0x27b828u;
    // NOP
label_27b82c:
    // 0x27b82c: 0x0  nop
    ctx->pc = 0x27b82cu;
    // NOP
label_27b830:
    // 0x27b830: 0x12656  .word       0x00012656                   # dsrlv       $a0, $at, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b830u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 1) >> (GPR_U32(ctx, 0) & 0x3F));
label_27b834:
    // 0x27b834: 0x6150  .word       0x00006150                   # mfhi        $t4 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b834u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_27b838:
    // 0x27b838: 0x0  nop
    ctx->pc = 0x27b838u;
    // NOP
label_27b83c:
    // 0x27b83c: 0x0  nop
    ctx->pc = 0x27b83cu;
    // NOP
label_27b840:
    // 0x27b840: 0x12663  .word       0x00012663                   # negu        $a0, $at # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b840u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 1)));
label_27b844:
    // 0x27b844: 0x85f0  tge         $zero, $zero, 535
    ctx->pc = 0x27b844u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27b848:
    // 0x27b848: 0x0  nop
    ctx->pc = 0x27b848u;
    // NOP
label_27b84c:
    // 0x27b84c: 0x0  nop
    ctx->pc = 0x27b84cu;
    // NOP
label_27b850:
    // 0x27b850: 0x12674  teq         $zero, $at, 153
    ctx->pc = 0x27b850u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_27b854:
    // 0x27b854: 0x59a0  .word       0x000059A0                   # add         $t3, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b854u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_27b858:
    // 0x27b858: 0x0  nop
    ctx->pc = 0x27b858u;
    // NOP
label_27b85c:
    // 0x27b85c: 0x0  nop
    ctx->pc = 0x27b85cu;
    // NOP
label_27b860:
    // 0x27b860: 0x12680  sll         $a0, $at, 26
    ctx->pc = 0x27b860u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 1), 26));
label_27b864:
    // 0x27b864: 0x8650  .word       0x00008650                   # mfhi        $s0 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b864u;
    SET_GPR_U64(ctx, 16, ctx->hi);
label_27b868:
    // 0x27b868: 0x0  nop
    ctx->pc = 0x27b868u;
    // NOP
label_27b86c:
    // 0x27b86c: 0x0  nop
    ctx->pc = 0x27b86cu;
    // NOP
label_27b870:
    // 0x27b870: 0x12691  .word       0x00012691                   # mthi        $zero # 00012680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b870u;
    ctx->hi = GPR_U64(ctx, 0);
label_27b874:
    // 0x27b874: 0xb8a0  .word       0x0000B8A0                   # add         $s7, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b874u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 23, (int32_t)result);     } }
label_27b878:
    // 0x27b878: 0x0  nop
    ctx->pc = 0x27b878u;
    // NOP
label_27b87c:
    // 0x27b87c: 0x0  nop
    ctx->pc = 0x27b87cu;
    // NOP
label_27b880:
    // 0x27b880: 0x126a9  .word       0x000126A9                   # mtsa        $zero # 00012680 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x27b880u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_27b884:
    // 0x27b884: 0x9ae0  .word       0x00009AE0                   # add         $s3, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b884u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 19, (int32_t)result);     } }
label_27b888:
    // 0x27b888: 0x0  nop
    ctx->pc = 0x27b888u;
    // NOP
label_27b88c:
    // 0x27b88c: 0x0  nop
    ctx->pc = 0x27b88cu;
    // NOP
label_27b890:
    // 0x27b890: 0x126bd  .word       0x000126BD                   # INVALID     $zero, $at, 0x26BD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b890u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x27B890 raw=0x000126BD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27b894:
    // 0x27b894: 0xf570  tge         $zero, $zero, 981
    ctx->pc = 0x27b894u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27b898:
    // 0x27b898: 0x0  nop
    ctx->pc = 0x27b898u;
    // NOP
label_27b89c:
    // 0x27b89c: 0x0  nop
    ctx->pc = 0x27b89cu;
    // NOP
label_27b8a0:
    // 0x27b8a0: 0x126dc  .word       0x000126DC                   # dmult       $zero, $at # 000026C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b8a0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x27B8A0 raw=0x000126DC"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27b8a4:
    // 0x27b8a4: 0xa510  .word       0x0000A510                   # mfhi        $s4 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b8a4u;
    SET_GPR_U64(ctx, 20, ctx->hi);
label_27b8a8:
    // 0x27b8a8: 0x0  nop
    ctx->pc = 0x27b8a8u;
    // NOP
label_27b8ac:
    // 0x27b8ac: 0x0  nop
    ctx->pc = 0x27b8acu;
    // NOP
label_27b8b0:
    // 0x27b8b0: 0x126f1  tgeu        $zero, $at, 155
    ctx->pc = 0x27b8b0u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_27b8b4:
    // 0x27b8b4: 0xabe0  .word       0x0000ABE0                   # add         $s5, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b8b4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 21, (int32_t)result);     } }
label_27b8b8:
    // 0x27b8b8: 0x0  nop
    ctx->pc = 0x27b8b8u;
    // NOP
label_27b8bc:
    // 0x27b8bc: 0x0  nop
    ctx->pc = 0x27b8bcu;
    // NOP
label_27b8c0:
    // 0x27b8c0: 0x12707  .word       0x00012707                   # srav        $a0, $at, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b8c0u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_27b8c4:
    // 0x27b8c4: 0x4d50  .word       0x00004D50                   # mfhi        $t1 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b8c4u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_27b8c8:
    // 0x27b8c8: 0x0  nop
    ctx->pc = 0x27b8c8u;
    // NOP
label_27b8cc:
    // 0x27b8cc: 0x0  nop
    ctx->pc = 0x27b8ccu;
    // NOP
label_27b8d0:
    // 0x27b8d0: 0x12711  .word       0x00012711                   # mthi        $zero # 00012700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b8d0u;
    ctx->hi = GPR_U64(ctx, 0);
label_27b8d4:
    // 0x27b8d4: 0x5b50  .word       0x00005B50                   # mfhi        $t3 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b8d4u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_27b8d8:
    // 0x27b8d8: 0x0  nop
    ctx->pc = 0x27b8d8u;
    // NOP
label_27b8dc:
    // 0x27b8dc: 0x0  nop
    ctx->pc = 0x27b8dcu;
    // NOP
label_27b8e0:
    // 0x27b8e0: 0x1271d  .word       0x0001271D                   # dmultu      $zero, $at # 00002700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b8e0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x27B8E0 raw=0x0001271D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27b8e4:
    // 0x27b8e4: 0xa8a0  .word       0x0000A8A0                   # add         $s5, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b8e4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 21, (int32_t)result);     } }
label_27b8e8:
    // 0x27b8e8: 0x0  nop
    ctx->pc = 0x27b8e8u;
    // NOP
label_27b8ec:
    // 0x27b8ec: 0x0  nop
    ctx->pc = 0x27b8ecu;
    // NOP
label_27b8f0:
    // 0x27b8f0: 0x12733  tltu        $zero, $at, 156
    ctx->pc = 0x27b8f0u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_27b8f4:
    // 0x27b8f4: 0x7e30  tge         $zero, $zero, 504
    ctx->pc = 0x27b8f4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27b8f8:
    // 0x27b8f8: 0x0  nop
    ctx->pc = 0x27b8f8u;
    // NOP
label_27b8fc:
    // 0x27b8fc: 0x0  nop
    ctx->pc = 0x27b8fcu;
    // NOP
label_27b900:
    // 0x27b900: 0x12743  sra         $a0, $at, 29
    ctx->pc = 0x27b900u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 1), 29));
label_27b904:
    // 0x27b904: 0x5690  .word       0x00005690                   # mfhi        $t2 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b904u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_27b908:
    // 0x27b908: 0x0  nop
    ctx->pc = 0x27b908u;
    // NOP
label_27b90c:
    // 0x27b90c: 0x0  nop
    ctx->pc = 0x27b90cu;
    // NOP
label_27b910:
    // 0x27b910: 0x1274e  .word       0x0001274E                   # INVALID     $zero, $at, 0x274E # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b910u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x27B910 raw=0x0001274E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27b914:
    // 0x27b914: 0xa940  sll         $s5, $zero, 5
    ctx->pc = 0x27b914u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 0), 5));
label_27b918:
    // 0x27b918: 0x0  nop
    ctx->pc = 0x27b918u;
    // NOP
label_27b91c:
    // 0x27b91c: 0x0  nop
    ctx->pc = 0x27b91cu;
    // NOP
label_27b920:
    // 0x27b920: 0x12764  .word       0x00012764                   # and         $a0, $zero, $at # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b920u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) & GPR_U64(ctx, 1));
label_27b924:
    // 0x27b924: 0xf4f0  tge         $zero, $zero, 979
    ctx->pc = 0x27b924u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27b928:
    // 0x27b928: 0x0  nop
    ctx->pc = 0x27b928u;
    // NOP
label_27b92c:
    // 0x27b92c: 0x0  nop
    ctx->pc = 0x27b92cu;
    // NOP
label_27b930:
    // 0x27b930: 0x12783  sra         $a0, $at, 30
    ctx->pc = 0x27b930u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 1), 30));
label_27b934:
    // 0x27b934: 0xa310  .word       0x0000A310                   # mfhi        $s4 # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b934u;
    SET_GPR_U64(ctx, 20, ctx->hi);
label_27b938:
    // 0x27b938: 0x0  nop
    ctx->pc = 0x27b938u;
    // NOP
label_27b93c:
    // 0x27b93c: 0x0  nop
    ctx->pc = 0x27b93cu;
    // NOP
label_27b940:
    // 0x27b940: 0x12798  .word       0x00012798                   # mult        $a0, $zero, $at # 00000780 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x27b940u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_27b944:
    // 0x27b944: 0x9aa0  .word       0x00009AA0                   # add         $s3, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b944u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 19, (int32_t)result);     } }
label_27b948:
    // 0x27b948: 0x0  nop
    ctx->pc = 0x27b948u;
    // NOP
label_27b94c:
    // 0x27b94c: 0x0  nop
    ctx->pc = 0x27b94cu;
    // NOP
label_27b950:
    // 0x27b950: 0x127ac  .word       0x000127AC                   # dadd        $a0, $zero, $at # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b950u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 1); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 4, r); }
label_27b954:
    // 0x27b954: 0x87b0  tge         $zero, $zero, 542
    ctx->pc = 0x27b954u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27b958:
    // 0x27b958: 0x0  nop
    ctx->pc = 0x27b958u;
    // NOP
label_27b95c:
    // 0x27b95c: 0x0  nop
    ctx->pc = 0x27b95cu;
    // NOP
label_27b960:
    // 0x27b960: 0x127bd  .word       0x000127BD                   # INVALID     $zero, $at, 0x27BD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b960u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x27B960 raw=0x000127BD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27b964:
    // 0x27b964: 0x6670  tge         $zero, $zero, 409
    ctx->pc = 0x27b964u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27b968:
    // 0x27b968: 0x0  nop
    ctx->pc = 0x27b968u;
    // NOP
label_27b96c:
    // 0x27b96c: 0x0  nop
    ctx->pc = 0x27b96cu;
    // NOP
label_27b970:
    // 0x27b970: 0x127ca  .word       0x000127CA                   # movz        $a0, $zero, $at # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b970u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
label_27b974:
    // 0x27b974: 0x53e0  .word       0x000053E0                   # add         $t2, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b974u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
label_27b978:
    // 0x27b978: 0x0  nop
    ctx->pc = 0x27b978u;
    // NOP
label_27b97c:
    // 0x27b97c: 0x0  nop
    ctx->pc = 0x27b97cu;
    // NOP
label_27b980:
    // 0x27b980: 0x127d5  .word       0x000127D5                   # INVALID     $zero, $at, 0x27D5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b980u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x27B980 raw=0x000127D5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27b984:
    // 0x27b984: 0x7070  tge         $zero, $zero, 449
    ctx->pc = 0x27b984u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27b988:
    // 0x27b988: 0x0  nop
    ctx->pc = 0x27b988u;
    // NOP
label_27b98c:
    // 0x27b98c: 0x0  nop
    ctx->pc = 0x27b98cu;
    // NOP
label_27b990:
    // 0x27b990: 0x127e4  .word       0x000127E4                   # and         $a0, $zero, $at # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b990u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) & GPR_U64(ctx, 1));
label_27b994:
    // 0x27b994: 0x5440  sll         $t2, $zero, 17
    ctx->pc = 0x27b994u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
label_27b998:
    // 0x27b998: 0x0  nop
    ctx->pc = 0x27b998u;
    // NOP
label_27b99c:
    // 0x27b99c: 0x0  nop
    ctx->pc = 0x27b99cu;
    // NOP
label_27b9a0:
    // 0x27b9a0: 0x127ef  .word       0x000127EF                   # dsubu       $a0, $zero, $at # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b9a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) - GPR_U64(ctx, 1));
label_27b9a4:
    // 0x27b9a4: 0xa2e0  .word       0x0000A2E0                   # add         $s4, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b9a4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_27b9a8:
    // 0x27b9a8: 0x0  nop
    ctx->pc = 0x27b9a8u;
    // NOP
label_27b9ac:
    // 0x27b9ac: 0x0  nop
    ctx->pc = 0x27b9acu;
    // NOP
label_27b9b0:
    // 0x27b9b0: 0x12804  sllv        $a1, $at, $zero
    ctx->pc = 0x27b9b0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_27b9b4:
    // 0x27b9b4: 0xa5b0  tge         $zero, $zero, 662
    ctx->pc = 0x27b9b4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27b9b8:
    // 0x27b9b8: 0x0  nop
    ctx->pc = 0x27b9b8u;
    // NOP
label_27b9bc:
    // 0x27b9bc: 0x0  nop
    ctx->pc = 0x27b9bcu;
    // NOP
label_27b9c0:
    // 0x27b9c0: 0x12819  .word       0x00012819                   # multu       $zero, $at # 00002800 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b9c0u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_27b9c4:
    // 0x27b9c4: 0x5a90  .word       0x00005A90                   # mfhi        $t3 # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b9c4u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_27b9c8:
    // 0x27b9c8: 0x0  nop
    ctx->pc = 0x27b9c8u;
    // NOP
label_27b9cc:
    // 0x27b9cc: 0x0  nop
    ctx->pc = 0x27b9ccu;
    // NOP
label_27b9d0:
    // 0x27b9d0: 0x12825  or          $a1, $zero, $at
    ctx->pc = 0x27b9d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | GPR_U64(ctx, 1));
label_27b9d4:
    // 0x27b9d4: 0x59f0  tge         $zero, $zero, 359
    ctx->pc = 0x27b9d4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27b9d8:
    // 0x27b9d8: 0x0  nop
    ctx->pc = 0x27b9d8u;
    // NOP
label_27b9dc:
    // 0x27b9dc: 0x0  nop
    ctx->pc = 0x27b9dcu;
    // NOP
label_27b9e0:
    // 0x27b9e0: 0x12831  tgeu        $zero, $at, 160
    ctx->pc = 0x27b9e0u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_27b9e4:
    // 0x27b9e4: 0xb060  .word       0x0000B060                   # add         $s6, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b9e4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
label_27b9e8:
    // 0x27b9e8: 0x0  nop
    ctx->pc = 0x27b9e8u;
    // NOP
label_27b9ec:
    // 0x27b9ec: 0x0  nop
    ctx->pc = 0x27b9ecu;
    // NOP
label_27b9f0:
    // 0x27b9f0: 0x12848  .word       0x00012848                   # jr          $zero # 00012840 <InstrIdType: CPU_SPECIAL>
label_27b9f4:
    if (ctx->pc == 0x27B9F4u) {
        ctx->pc = 0x27B9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B9F0u;
        // 0x27b9f4: 0x8c40  sll         $s1, $zero, 17 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27B9F8u;
        { ctx->pc = 0x27b9f8; return; }
    }
    ctx->pc = 0x27B9F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x27B9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B9F0u;
        // 0x27b9f4: 0x8c40  sll         $s1, $zero, 17 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27B9F0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x27B9F8u;
    ctx->pc = 0x27b9f8u;
    return;
}
