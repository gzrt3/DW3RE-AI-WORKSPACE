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

// Function: FUN_0019b5e8
// Address: 0x19b5e8 - 0x29b5f4
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0019b5e8_part492(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x28b1d8u: goto label_28b1d8;
        case 0x28b1dcu: goto label_28b1dc;
        case 0x28b1e0u: goto label_28b1e0;
        case 0x28b1e4u: goto label_28b1e4;
        case 0x28b1e8u: goto label_28b1e8;
        case 0x28b1ecu: goto label_28b1ec;
        case 0x28b1f0u: goto label_28b1f0;
        case 0x28b1f4u: goto label_28b1f4;
        case 0x28b1f8u: goto label_28b1f8;
        case 0x28b1fcu: goto label_28b1fc;
        case 0x28b200u: goto label_28b200;
        case 0x28b204u: goto label_28b204;
        case 0x28b208u: goto label_28b208;
        case 0x28b20cu: goto label_28b20c;
        case 0x28b210u: goto label_28b210;
        case 0x28b214u: goto label_28b214;
        case 0x28b218u: goto label_28b218;
        case 0x28b21cu: goto label_28b21c;
        case 0x28b220u: goto label_28b220;
        case 0x28b224u: goto label_28b224;
        case 0x28b228u: goto label_28b228;
        case 0x28b22cu: goto label_28b22c;
        case 0x28b230u: goto label_28b230;
        case 0x28b234u: goto label_28b234;
        case 0x28b238u: goto label_28b238;
        case 0x28b23cu: goto label_28b23c;
        case 0x28b240u: goto label_28b240;
        case 0x28b244u: goto label_28b244;
        case 0x28b248u: goto label_28b248;
        case 0x28b24cu: goto label_28b24c;
        case 0x28b250u: goto label_28b250;
        case 0x28b254u: goto label_28b254;
        case 0x28b258u: goto label_28b258;
        case 0x28b25cu: goto label_28b25c;
        case 0x28b260u: goto label_28b260;
        case 0x28b264u: goto label_28b264;
        case 0x28b268u: goto label_28b268;
        case 0x28b26cu: goto label_28b26c;
        case 0x28b270u: goto label_28b270;
        case 0x28b274u: goto label_28b274;
        case 0x28b278u: goto label_28b278;
        case 0x28b27cu: goto label_28b27c;
        case 0x28b280u: goto label_28b280;
        case 0x28b284u: goto label_28b284;
        case 0x28b288u: goto label_28b288;
        case 0x28b28cu: goto label_28b28c;
        case 0x28b290u: goto label_28b290;
        case 0x28b294u: goto label_28b294;
        case 0x28b298u: goto label_28b298;
        case 0x28b29cu: goto label_28b29c;
        case 0x28b2a0u: goto label_28b2a0;
        case 0x28b2a4u: goto label_28b2a4;
        case 0x28b2a8u: goto label_28b2a8;
        case 0x28b2acu: goto label_28b2ac;
        case 0x28b2b0u: goto label_28b2b0;
        case 0x28b2b4u: goto label_28b2b4;
        case 0x28b2b8u: goto label_28b2b8;
        case 0x28b2bcu: goto label_28b2bc;
        case 0x28b2c0u: goto label_28b2c0;
        case 0x28b2c4u: goto label_28b2c4;
        case 0x28b2c8u: goto label_28b2c8;
        case 0x28b2ccu: goto label_28b2cc;
        case 0x28b2d0u: goto label_28b2d0;
        case 0x28b2d4u: goto label_28b2d4;
        case 0x28b2d8u: goto label_28b2d8;
        case 0x28b2dcu: goto label_28b2dc;
        case 0x28b2e0u: goto label_28b2e0;
        case 0x28b2e4u: goto label_28b2e4;
        case 0x28b2e8u: goto label_28b2e8;
        case 0x28b2ecu: goto label_28b2ec;
        case 0x28b2f0u: goto label_28b2f0;
        case 0x28b2f4u: goto label_28b2f4;
        case 0x28b2f8u: goto label_28b2f8;
        case 0x28b2fcu: goto label_28b2fc;
        case 0x28b300u: goto label_28b300;
        case 0x28b304u: goto label_28b304;
        case 0x28b308u: goto label_28b308;
        case 0x28b30cu: goto label_28b30c;
        case 0x28b310u: goto label_28b310;
        case 0x28b314u: goto label_28b314;
        case 0x28b318u: goto label_28b318;
        case 0x28b31cu: goto label_28b31c;
        case 0x28b320u: goto label_28b320;
        case 0x28b324u: goto label_28b324;
        case 0x28b328u: goto label_28b328;
        case 0x28b32cu: goto label_28b32c;
        case 0x28b330u: goto label_28b330;
        case 0x28b334u: goto label_28b334;
        case 0x28b338u: goto label_28b338;
        case 0x28b33cu: goto label_28b33c;
        case 0x28b340u: goto label_28b340;
        case 0x28b344u: goto label_28b344;
        case 0x28b348u: goto label_28b348;
        case 0x28b34cu: goto label_28b34c;
        case 0x28b350u: goto label_28b350;
        case 0x28b354u: goto label_28b354;
        case 0x28b358u: goto label_28b358;
        case 0x28b35cu: goto label_28b35c;
        case 0x28b360u: goto label_28b360;
        case 0x28b364u: goto label_28b364;
        case 0x28b368u: goto label_28b368;
        case 0x28b36cu: goto label_28b36c;
        case 0x28b370u: goto label_28b370;
        case 0x28b374u: goto label_28b374;
        case 0x28b378u: goto label_28b378;
        case 0x28b37cu: goto label_28b37c;
        case 0x28b380u: goto label_28b380;
        case 0x28b384u: goto label_28b384;
        case 0x28b388u: goto label_28b388;
        case 0x28b38cu: goto label_28b38c;
        case 0x28b390u: goto label_28b390;
        case 0x28b394u: goto label_28b394;
        case 0x28b398u: goto label_28b398;
        case 0x28b39cu: goto label_28b39c;
        case 0x28b3a0u: goto label_28b3a0;
        case 0x28b3a4u: goto label_28b3a4;
        case 0x28b3a8u: goto label_28b3a8;
        case 0x28b3acu: goto label_28b3ac;
        case 0x28b3b0u: goto label_28b3b0;
        case 0x28b3b4u: goto label_28b3b4;
        case 0x28b3b8u: goto label_28b3b8;
        case 0x28b3bcu: goto label_28b3bc;
        case 0x28b3c0u: goto label_28b3c0;
        case 0x28b3c4u: goto label_28b3c4;
        case 0x28b3c8u: goto label_28b3c8;
        case 0x28b3ccu: goto label_28b3cc;
        case 0x28b3d0u: goto label_28b3d0;
        case 0x28b3d4u: goto label_28b3d4;
        case 0x28b3d8u: goto label_28b3d8;
        case 0x28b3dcu: goto label_28b3dc;
        case 0x28b3e0u: goto label_28b3e0;
        case 0x28b3e4u: goto label_28b3e4;
        case 0x28b3e8u: goto label_28b3e8;
        case 0x28b3ecu: goto label_28b3ec;
        case 0x28b3f0u: goto label_28b3f0;
        case 0x28b3f4u: goto label_28b3f4;
        case 0x28b3f8u: goto label_28b3f8;
        case 0x28b3fcu: goto label_28b3fc;
        case 0x28b400u: goto label_28b400;
        case 0x28b404u: goto label_28b404;
        case 0x28b408u: goto label_28b408;
        case 0x28b40cu: goto label_28b40c;
        case 0x28b410u: goto label_28b410;
        case 0x28b414u: goto label_28b414;
        case 0x28b418u: goto label_28b418;
        case 0x28b41cu: goto label_28b41c;
        case 0x28b420u: goto label_28b420;
        case 0x28b424u: goto label_28b424;
        case 0x28b428u: goto label_28b428;
        case 0x28b42cu: goto label_28b42c;
        case 0x28b430u: goto label_28b430;
        case 0x28b434u: goto label_28b434;
        case 0x28b438u: goto label_28b438;
        case 0x28b43cu: goto label_28b43c;
        case 0x28b440u: goto label_28b440;
        case 0x28b444u: goto label_28b444;
        case 0x28b448u: goto label_28b448;
        case 0x28b44cu: goto label_28b44c;
        case 0x28b450u: goto label_28b450;
        case 0x28b454u: goto label_28b454;
        case 0x28b458u: goto label_28b458;
        case 0x28b45cu: goto label_28b45c;
        case 0x28b460u: goto label_28b460;
        case 0x28b464u: goto label_28b464;
        case 0x28b468u: goto label_28b468;
        case 0x28b46cu: goto label_28b46c;
        case 0x28b470u: goto label_28b470;
        case 0x28b474u: goto label_28b474;
        case 0x28b478u: goto label_28b478;
        case 0x28b47cu: goto label_28b47c;
        case 0x28b480u: goto label_28b480;
        case 0x28b484u: goto label_28b484;
        case 0x28b488u: goto label_28b488;
        case 0x28b48cu: goto label_28b48c;
        case 0x28b490u: goto label_28b490;
        case 0x28b494u: goto label_28b494;
        case 0x28b498u: goto label_28b498;
        case 0x28b49cu: goto label_28b49c;
        case 0x28b4a0u: goto label_28b4a0;
        case 0x28b4a4u: goto label_28b4a4;
        case 0x28b4a8u: goto label_28b4a8;
        case 0x28b4acu: goto label_28b4ac;
        case 0x28b4b0u: goto label_28b4b0;
        case 0x28b4b4u: goto label_28b4b4;
        case 0x28b4b8u: goto label_28b4b8;
        case 0x28b4bcu: goto label_28b4bc;
        case 0x28b4c0u: goto label_28b4c0;
        case 0x28b4c4u: goto label_28b4c4;
        case 0x28b4c8u: goto label_28b4c8;
        case 0x28b4ccu: goto label_28b4cc;
        case 0x28b4d0u: goto label_28b4d0;
        case 0x28b4d4u: goto label_28b4d4;
        case 0x28b4d8u: goto label_28b4d8;
        case 0x28b4dcu: goto label_28b4dc;
        case 0x28b4e0u: goto label_28b4e0;
        case 0x28b4e4u: goto label_28b4e4;
        case 0x28b4e8u: goto label_28b4e8;
        case 0x28b4ecu: goto label_28b4ec;
        case 0x28b4f0u: goto label_28b4f0;
        case 0x28b4f4u: goto label_28b4f4;
        case 0x28b4f8u: goto label_28b4f8;
        case 0x28b4fcu: goto label_28b4fc;
        case 0x28b500u: goto label_28b500;
        case 0x28b504u: goto label_28b504;
        case 0x28b508u: goto label_28b508;
        case 0x28b50cu: goto label_28b50c;
        case 0x28b510u: goto label_28b510;
        case 0x28b514u: goto label_28b514;
        case 0x28b518u: goto label_28b518;
        case 0x28b51cu: goto label_28b51c;
        case 0x28b520u: goto label_28b520;
        case 0x28b524u: goto label_28b524;
        case 0x28b528u: goto label_28b528;
        case 0x28b52cu: goto label_28b52c;
        case 0x28b530u: goto label_28b530;
        case 0x28b534u: goto label_28b534;
        case 0x28b538u: goto label_28b538;
        case 0x28b53cu: goto label_28b53c;
        case 0x28b540u: goto label_28b540;
        case 0x28b544u: goto label_28b544;
        case 0x28b548u: goto label_28b548;
        case 0x28b54cu: goto label_28b54c;
        case 0x28b550u: goto label_28b550;
        case 0x28b554u: goto label_28b554;
        case 0x28b558u: goto label_28b558;
        case 0x28b55cu: goto label_28b55c;
        case 0x28b560u: goto label_28b560;
        case 0x28b564u: goto label_28b564;
        case 0x28b568u: goto label_28b568;
        case 0x28b56cu: goto label_28b56c;
        case 0x28b570u: goto label_28b570;
        case 0x28b574u: goto label_28b574;
        case 0x28b578u: goto label_28b578;
        case 0x28b57cu: goto label_28b57c;
        case 0x28b580u: goto label_28b580;
        case 0x28b584u: goto label_28b584;
        case 0x28b588u: goto label_28b588;
        case 0x28b58cu: goto label_28b58c;
        case 0x28b590u: goto label_28b590;
        case 0x28b594u: goto label_28b594;
        case 0x28b598u: goto label_28b598;
        case 0x28b59cu: goto label_28b59c;
        case 0x28b5a0u: goto label_28b5a0;
        case 0x28b5a4u: goto label_28b5a4;
        case 0x28b5a8u: goto label_28b5a8;
        case 0x28b5acu: goto label_28b5ac;
        case 0x28b5b0u: goto label_28b5b0;
        case 0x28b5b4u: goto label_28b5b4;
        case 0x28b5b8u: goto label_28b5b8;
        case 0x28b5bcu: goto label_28b5bc;
        case 0x28b5c0u: goto label_28b5c0;
        case 0x28b5c4u: goto label_28b5c4;
        case 0x28b5c8u: goto label_28b5c8;
        case 0x28b5ccu: goto label_28b5cc;
        case 0x28b5d0u: goto label_28b5d0;
        case 0x28b5d4u: goto label_28b5d4;
        case 0x28b5d8u: goto label_28b5d8;
        case 0x28b5dcu: goto label_28b5dc;
        case 0x28b5e0u: goto label_28b5e0;
        case 0x28b5e4u: goto label_28b5e4;
        case 0x28b5e8u: goto label_28b5e8;
        case 0x28b5ecu: goto label_28b5ec;
        case 0x28b5f0u: goto label_28b5f0;
        case 0x28b5f4u: goto label_28b5f4;
        case 0x28b5f8u: goto label_28b5f8;
        case 0x28b5fcu: goto label_28b5fc;
        case 0x28b600u: goto label_28b600;
        case 0x28b604u: goto label_28b604;
        case 0x28b608u: goto label_28b608;
        case 0x28b60cu: goto label_28b60c;
        case 0x28b610u: goto label_28b610;
        case 0x28b614u: goto label_28b614;
        case 0x28b618u: goto label_28b618;
        case 0x28b61cu: goto label_28b61c;
        case 0x28b620u: goto label_28b620;
        case 0x28b624u: goto label_28b624;
        case 0x28b628u: goto label_28b628;
        case 0x28b62cu: goto label_28b62c;
        case 0x28b630u: goto label_28b630;
        case 0x28b634u: goto label_28b634;
        case 0x28b638u: goto label_28b638;
        case 0x28b63cu: goto label_28b63c;
        case 0x28b640u: goto label_28b640;
        case 0x28b644u: goto label_28b644;
        case 0x28b648u: goto label_28b648;
        case 0x28b64cu: goto label_28b64c;
        case 0x28b650u: goto label_28b650;
        case 0x28b654u: goto label_28b654;
        case 0x28b658u: goto label_28b658;
        case 0x28b65cu: goto label_28b65c;
        case 0x28b660u: goto label_28b660;
        case 0x28b664u: goto label_28b664;
        case 0x28b668u: goto label_28b668;
        case 0x28b66cu: goto label_28b66c;
        case 0x28b670u: goto label_28b670;
        case 0x28b674u: goto label_28b674;
        case 0x28b678u: goto label_28b678;
        case 0x28b67cu: goto label_28b67c;
        case 0x28b680u: goto label_28b680;
        case 0x28b684u: goto label_28b684;
        case 0x28b688u: goto label_28b688;
        case 0x28b68cu: goto label_28b68c;
        case 0x28b690u: goto label_28b690;
        case 0x28b694u: goto label_28b694;
        case 0x28b698u: goto label_28b698;
        case 0x28b69cu: goto label_28b69c;
        case 0x28b6a0u: goto label_28b6a0;
        case 0x28b6a4u: goto label_28b6a4;
        case 0x28b6a8u: goto label_28b6a8;
        case 0x28b6acu: goto label_28b6ac;
        case 0x28b6b0u: goto label_28b6b0;
        case 0x28b6b4u: goto label_28b6b4;
        case 0x28b6b8u: goto label_28b6b8;
        case 0x28b6bcu: goto label_28b6bc;
        case 0x28b6c0u: goto label_28b6c0;
        case 0x28b6c4u: goto label_28b6c4;
        case 0x28b6c8u: goto label_28b6c8;
        case 0x28b6ccu: goto label_28b6cc;
        case 0x28b6d0u: goto label_28b6d0;
        case 0x28b6d4u: goto label_28b6d4;
        case 0x28b6d8u: goto label_28b6d8;
        case 0x28b6dcu: goto label_28b6dc;
        case 0x28b6e0u: goto label_28b6e0;
        case 0x28b6e4u: goto label_28b6e4;
        case 0x28b6e8u: goto label_28b6e8;
        case 0x28b6ecu: goto label_28b6ec;
        case 0x28b6f0u: goto label_28b6f0;
        case 0x28b6f4u: goto label_28b6f4;
        case 0x28b6f8u: goto label_28b6f8;
        case 0x28b6fcu: goto label_28b6fc;
        case 0x28b700u: goto label_28b700;
        case 0x28b704u: goto label_28b704;
        case 0x28b708u: goto label_28b708;
        case 0x28b70cu: goto label_28b70c;
        case 0x28b710u: goto label_28b710;
        case 0x28b714u: goto label_28b714;
        case 0x28b718u: goto label_28b718;
        case 0x28b71cu: goto label_28b71c;
        case 0x28b720u: goto label_28b720;
        case 0x28b724u: goto label_28b724;
        case 0x28b728u: goto label_28b728;
        case 0x28b72cu: goto label_28b72c;
        case 0x28b730u: goto label_28b730;
        case 0x28b734u: goto label_28b734;
        case 0x28b738u: goto label_28b738;
        case 0x28b73cu: goto label_28b73c;
        case 0x28b740u: goto label_28b740;
        case 0x28b744u: goto label_28b744;
        case 0x28b748u: goto label_28b748;
        case 0x28b74cu: goto label_28b74c;
        case 0x28b750u: goto label_28b750;
        case 0x28b754u: goto label_28b754;
        case 0x28b758u: goto label_28b758;
        case 0x28b75cu: goto label_28b75c;
        case 0x28b760u: goto label_28b760;
        case 0x28b764u: goto label_28b764;
        case 0x28b768u: goto label_28b768;
        case 0x28b76cu: goto label_28b76c;
        case 0x28b770u: goto label_28b770;
        case 0x28b774u: goto label_28b774;
        case 0x28b778u: goto label_28b778;
        case 0x28b77cu: goto label_28b77c;
        case 0x28b780u: goto label_28b780;
        case 0x28b784u: goto label_28b784;
        case 0x28b788u: goto label_28b788;
        case 0x28b78cu: goto label_28b78c;
        case 0x28b790u: goto label_28b790;
        case 0x28b794u: goto label_28b794;
        case 0x28b798u: goto label_28b798;
        case 0x28b79cu: goto label_28b79c;
        case 0x28b7a0u: goto label_28b7a0;
        case 0x28b7a4u: goto label_28b7a4;
        case 0x28b7a8u: goto label_28b7a8;
        case 0x28b7acu: goto label_28b7ac;
        case 0x28b7b0u: goto label_28b7b0;
        case 0x28b7b4u: goto label_28b7b4;
        case 0x28b7b8u: goto label_28b7b8;
        case 0x28b7bcu: goto label_28b7bc;
        case 0x28b7c0u: goto label_28b7c0;
        case 0x28b7c4u: goto label_28b7c4;
        case 0x28b7c8u: goto label_28b7c8;
        case 0x28b7ccu: goto label_28b7cc;
        case 0x28b7d0u: goto label_28b7d0;
        case 0x28b7d4u: goto label_28b7d4;
        case 0x28b7d8u: goto label_28b7d8;
        case 0x28b7dcu: goto label_28b7dc;
        case 0x28b7e0u: goto label_28b7e0;
        case 0x28b7e4u: goto label_28b7e4;
        case 0x28b7e8u: goto label_28b7e8;
        case 0x28b7ecu: goto label_28b7ec;
        case 0x28b7f0u: goto label_28b7f0;
        case 0x28b7f4u: goto label_28b7f4;
        case 0x28b7f8u: goto label_28b7f8;
        case 0x28b7fcu: goto label_28b7fc;
        case 0x28b800u: goto label_28b800;
        case 0x28b804u: goto label_28b804;
        case 0x28b808u: goto label_28b808;
        case 0x28b80cu: goto label_28b80c;
        case 0x28b810u: goto label_28b810;
        case 0x28b814u: goto label_28b814;
        case 0x28b818u: goto label_28b818;
        case 0x28b81cu: goto label_28b81c;
        case 0x28b820u: goto label_28b820;
        case 0x28b824u: goto label_28b824;
        case 0x28b828u: goto label_28b828;
        case 0x28b82cu: goto label_28b82c;
        case 0x28b830u: goto label_28b830;
        case 0x28b834u: goto label_28b834;
        case 0x28b838u: goto label_28b838;
        case 0x28b83cu: goto label_28b83c;
        case 0x28b840u: goto label_28b840;
        case 0x28b844u: goto label_28b844;
        case 0x28b848u: goto label_28b848;
        case 0x28b84cu: goto label_28b84c;
        case 0x28b850u: goto label_28b850;
        case 0x28b854u: goto label_28b854;
        case 0x28b858u: goto label_28b858;
        case 0x28b85cu: goto label_28b85c;
        case 0x28b860u: goto label_28b860;
        case 0x28b864u: goto label_28b864;
        case 0x28b868u: goto label_28b868;
        case 0x28b86cu: goto label_28b86c;
        case 0x28b870u: goto label_28b870;
        case 0x28b874u: goto label_28b874;
        case 0x28b878u: goto label_28b878;
        case 0x28b87cu: goto label_28b87c;
        case 0x28b880u: goto label_28b880;
        case 0x28b884u: goto label_28b884;
        case 0x28b888u: goto label_28b888;
        case 0x28b88cu: goto label_28b88c;
        case 0x28b890u: goto label_28b890;
        case 0x28b894u: goto label_28b894;
        case 0x28b898u: goto label_28b898;
        case 0x28b89cu: goto label_28b89c;
        case 0x28b8a0u: goto label_28b8a0;
        case 0x28b8a4u: goto label_28b8a4;
        case 0x28b8a8u: goto label_28b8a8;
        case 0x28b8acu: goto label_28b8ac;
        case 0x28b8b0u: goto label_28b8b0;
        case 0x28b8b4u: goto label_28b8b4;
        case 0x28b8b8u: goto label_28b8b8;
        case 0x28b8bcu: goto label_28b8bc;
        case 0x28b8c0u: goto label_28b8c0;
        case 0x28b8c4u: goto label_28b8c4;
        case 0x28b8c8u: goto label_28b8c8;
        case 0x28b8ccu: goto label_28b8cc;
        case 0x28b8d0u: goto label_28b8d0;
        case 0x28b8d4u: goto label_28b8d4;
        case 0x28b8d8u: goto label_28b8d8;
        case 0x28b8dcu: goto label_28b8dc;
        case 0x28b8e0u: goto label_28b8e0;
        case 0x28b8e4u: goto label_28b8e4;
        case 0x28b8e8u: goto label_28b8e8;
        case 0x28b8ecu: goto label_28b8ec;
        case 0x28b8f0u: goto label_28b8f0;
        case 0x28b8f4u: goto label_28b8f4;
        case 0x28b8f8u: goto label_28b8f8;
        case 0x28b8fcu: goto label_28b8fc;
        case 0x28b900u: goto label_28b900;
        case 0x28b904u: goto label_28b904;
        case 0x28b908u: goto label_28b908;
        case 0x28b90cu: goto label_28b90c;
        case 0x28b910u: goto label_28b910;
        case 0x28b914u: goto label_28b914;
        case 0x28b918u: goto label_28b918;
        case 0x28b91cu: goto label_28b91c;
        case 0x28b920u: goto label_28b920;
        case 0x28b924u: goto label_28b924;
        case 0x28b928u: goto label_28b928;
        case 0x28b92cu: goto label_28b92c;
        case 0x28b930u: goto label_28b930;
        case 0x28b934u: goto label_28b934;
        case 0x28b938u: goto label_28b938;
        case 0x28b93cu: goto label_28b93c;
        case 0x28b940u: goto label_28b940;
        case 0x28b944u: goto label_28b944;
        case 0x28b948u: goto label_28b948;
        case 0x28b94cu: goto label_28b94c;
        case 0x28b950u: goto label_28b950;
        case 0x28b954u: goto label_28b954;
        case 0x28b958u: goto label_28b958;
        case 0x28b95cu: goto label_28b95c;
        case 0x28b960u: goto label_28b960;
        case 0x28b964u: goto label_28b964;
        case 0x28b968u: goto label_28b968;
        case 0x28b96cu: goto label_28b96c;
        case 0x28b970u: goto label_28b970;
        case 0x28b974u: goto label_28b974;
        case 0x28b978u: goto label_28b978;
        case 0x28b97cu: goto label_28b97c;
        case 0x28b980u: goto label_28b980;
        case 0x28b984u: goto label_28b984;
        case 0x28b988u: goto label_28b988;
        case 0x28b98cu: goto label_28b98c;
        case 0x28b990u: goto label_28b990;
        case 0x28b994u: goto label_28b994;
        case 0x28b998u: goto label_28b998;
        case 0x28b99cu: goto label_28b99c;
        case 0x28b9a0u: goto label_28b9a0;
        case 0x28b9a4u: goto label_28b9a4;
        default: return;
    }

label_28b1d8:
    // 0x28b1d8: 0x1c0070  tge         $zero, $gp, 1
    ctx->pc = 0x28b1d8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 28)) { runtime->handleTrap(rdram, ctx); }
label_28b1dc:
    // 0x28b1dc: 0x70033c  .word       0x0070033C                   # dsll32      $zero, $s0, 12 # 00600000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28b1dcu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 16) << (32 + 12));
label_28b1e0:
    // 0x28b1e0: 0x3540018  mult        $zero, $k0, $s4
    ctx->pc = 0x28b1e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 26) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_28b1e4:
    // 0x28b1e4: 0x140070  tge         $zero, $s4, 1
    ctx->pc = 0x28b1e4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 20)) { runtime->handleTrap(rdram, ctx); }
label_28b1e8:
    // 0x28b1e8: 0x700368  .word       0x00700368                   # mfsa        $zero # 00700340 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x28b1e8u;
    SET_GPR_U32(ctx, 0, ctx->sa);
label_28b1ec:
    // 0x28b1ec: 0x374000c  .word       0x0374000C                   # syscall     0 # 03740000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28b1ecu;
    ctx->pc = 0x28B1F0u;
runtime->handleSyscall(rdram, ctx, 0xDD000u);
label_28b1f0:
    // 0x28b1f0: 0x200070  tge         $at, $zero, 1
    ctx->pc = 0x28b1f0u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_28b1f4:
    // 0x28b1f4: 0x800320  .word       0x00800320                   # add         $zero, $a0, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28b1f4u;
    {     int32_t rs_val = GPR_S32(ctx, 4);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_28b1f8:
    // 0x28b1f8: 0x32c000c  .word       0x032C000C                   # syscall     0 # 032C0000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28b1f8u;
    ctx->pc = 0x28B1FCu;
runtime->handleSyscall(rdram, ctx, 0xCB000u);
label_28b1fc:
    // 0x28b1fc: 0xc0080  sll         $zero, $t4, 2
    ctx->pc = 0x28b1fcu;
    
label_28b200:
    // 0x28b200: 0x800338  .word       0x00800338                   # dsll        $zero, $zero, 12 # 00800000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28b200u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << 12);
label_28b204:
    // 0x28b204: 0x344000c  .word       0x0344000C                   # syscall     0 # 03440000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28b204u;
    ctx->pc = 0x28B208u;
runtime->handleSyscall(rdram, ctx, 0xD1000u);
label_28b208:
    // 0x28b208: 0xc0080  sll         $zero, $t4, 2
    ctx->pc = 0x28b208u;
    
label_28b20c:
    // 0x28b20c: 0x800350  .word       0x00800350                   # mfhi        $zero # 00800340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28b20cu;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_28b210:
    // 0x28b210: 0x35c000c  .word       0x035C000C                   # syscall     0 # 035C0000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28b210u;
    ctx->pc = 0x28B214u;
runtime->handleSyscall(rdram, ctx, 0xD7000u);
label_28b214:
    // 0x28b214: 0xc0080  sll         $zero, $t4, 2
    ctx->pc = 0x28b214u;
    
label_28b218:
    // 0x28b218: 0x800368  .word       0x00800368                   # mfsa        $zero # 00800340 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x28b218u;
    SET_GPR_U32(ctx, 0, ctx->sa);
label_28b21c:
    // 0x28b21c: 0x374000c  .word       0x0374000C                   # syscall     0 # 03740000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28b21cu;
    ctx->pc = 0x28B220u;
runtime->handleSyscall(rdram, ctx, 0xDD000u);
label_28b220:
    // 0x28b220: 0xc0080  sll         $zero, $t4, 2
    ctx->pc = 0x28b220u;
    
label_28b224:
    // 0x28b224: 0x800380  .word       0x00800380                   # sll         $zero, $zero, 14 # 00800000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28b224u;
    
label_28b228:
    // 0x28b228: 0x38c000c  .word       0x038C000C                   # syscall     0 # 038C0000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28b228u;
    ctx->pc = 0x28B22Cu;
runtime->handleSyscall(rdram, ctx, 0xE3000u);
label_28b22c:
    // 0x28b22c: 0xc0080  sll         $zero, $t4, 2
    ctx->pc = 0x28b22cu;
    
label_28b230:
    // 0x28b230: 0x900320  .word       0x00900320                   # add         $zero, $a0, $s0 # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28b230u;
    {     int32_t rs_val = GPR_S32(ctx, 4);     int32_t rt_val = GPR_S32(ctx, 16);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_28b234:
    // 0x28b234: 0x3340014  dsllv       $zero, $s4, $t9
    ctx->pc = 0x28b234u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 20) << (GPR_U32(ctx, 25) & 0x3F));
label_28b238:
    // 0x28b238: 0x140090  .word       0x00140090                   # mfhi        $zero # 00140080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28b238u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_28b23c:
    // 0x28b23c: 0x900348  .word       0x00900348                   # jr          $a0 # 00100340 <InstrIdType: CPU_SPECIAL>
label_28b240:
    if (ctx->pc == 0x28B240u) {
        ctx->pc = 0x28B240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B23Cu;
        // 0x28b240: 0x3600018  mult        $zero, $k1, $zero (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 27) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B244u;
        goto label_28b244;
    }
    ctx->pc = 0x28B23Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = 0x28B240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B23Cu;
        // 0x28b240: 0x3600018  mult        $zero, $k1, $zero (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 27) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28B23Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x28B244u;
label_28b244:
    // 0x28b244: 0x180090  .word       0x00180090                   # mfhi        $zero # 00180080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28b244u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_28b248:
    // 0x28b248: 0x900378  .word       0x00900378                   # dsll        $zero, $s0, 13 # 00800000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28b248u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 16) << 13);
label_28b24c:
    // 0x28b24c: 0x3200020  add         $zero, $t9, $zero
    ctx->pc = 0x28b24cu;
    {     int32_t rs_val = GPR_S32(ctx, 25);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_28b250:
    // 0x28b250: 0x40  sll         $zero, $zero, 1
    ctx->pc = 0x28b250u;
    
label_28b254:
    // 0x28b254: 0x0  nop
    ctx->pc = 0x28b254u;
    // NOP
label_28b258:
    // 0x28b258: 0x0  nop
    ctx->pc = 0x28b258u;
    // NOP
label_28b25c:
    // 0x28b25c: 0x0  nop
    ctx->pc = 0x28b25cu;
    // NOP
label_28b260:
    // 0x28b260: 0x0  nop
    ctx->pc = 0x28b260u;
    // NOP
label_28b264:
    // 0x28b264: 0x8  jr          $zero
label_28b268:
    if (ctx->pc == 0x28B268u) {
        ctx->pc = 0x28B268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B264u;
        // 0x28b268: 0xc  syscall     0 (Delay Slot)
        ctx->pc = 0x28B26Cu;
        runtime->handleSyscall(rdram, ctx, 0x0u);
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B26Cu;
        goto label_28b26c;
    }
    ctx->pc = 0x28B264u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x28B268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B264u;
        // 0x28b268: 0xc  syscall     0 (Delay Slot)
        ctx->pc = 0x28B26Cu;
        runtime->handleSyscall(rdram, ctx, 0x0u);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28B264u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x28B26Cu;
label_28b26c:
    // 0x28b26c: 0x13  mtlo        $zero
    ctx->pc = 0x28b26cu;
    ctx->lo = GPR_U64(ctx, 0);
label_28b270:
    // 0x28b270: 0xe  .word       0x0000000E                   # INVALID     $zero, $zero, 0xE # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28b270u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x28B270 raw=0x0000000E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28b274:
    // 0x28b274: 0xe  .word       0x0000000E                   # INVALID     $zero, $zero, 0xE # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28b274u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x28B274 raw=0x0000000E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28b278:
    // 0x28b278: 0x0  nop
    ctx->pc = 0x28b278u;
    // NOP
label_28b27c:
    // 0x28b27c: 0x8  jr          $zero
label_28b280:
    if (ctx->pc == 0x28B280u) {
        ctx->pc = 0x28B280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B27Cu;
        // 0x28b280: 0xc  syscall     0 (Delay Slot)
        ctx->pc = 0x28B284u;
        runtime->handleSyscall(rdram, ctx, 0x0u);
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B284u;
        goto label_28b284;
    }
    ctx->pc = 0x28B27Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x28B280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B27Cu;
        // 0x28b280: 0xc  syscall     0 (Delay Slot)
        ctx->pc = 0x28B284u;
        runtime->handleSyscall(rdram, ctx, 0x0u);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28B27Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x28B284u;
label_28b284:
    // 0x28b284: 0xf  sync
    ctx->pc = 0x28b284u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_28b288:
    // 0x28b288: 0xe  .word       0x0000000E                   # INVALID     $zero, $zero, 0xE # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28b288u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x28B288 raw=0x0000000E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28b28c:
    // 0x28b28c: 0xe  .word       0x0000000E                   # INVALID     $zero, $zero, 0xE # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28b28cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x28B28C raw=0x0000000E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28b290:
    // 0x28b290: 0x0  nop
    ctx->pc = 0x28b290u;
    // NOP
label_28b294:
    // 0x28b294: 0x8  jr          $zero
label_28b298:
    if (ctx->pc == 0x28B298u) {
        ctx->pc = 0x28B298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B294u;
        // 0x28b298: 0xc  syscall     0 (Delay Slot)
        ctx->pc = 0x28B29Cu;
        runtime->handleSyscall(rdram, ctx, 0x0u);
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B29Cu;
        goto label_28b29c;
    }
    ctx->pc = 0x28B294u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x28B298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B294u;
        // 0x28b298: 0xc  syscall     0 (Delay Slot)
        ctx->pc = 0x28B29Cu;
        runtime->handleSyscall(rdram, ctx, 0x0u);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28B294u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x28B29Cu;
label_28b29c:
    // 0x28b29c: 0x10  mfhi        $zero
    ctx->pc = 0x28b29cu;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_28b2a0:
    // 0x28b2a0: 0xe  .word       0x0000000E                   # INVALID     $zero, $zero, 0xE # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28b2a0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x28B2A0 raw=0x0000000E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28b2a4:
    // 0x28b2a4: 0xe  .word       0x0000000E                   # INVALID     $zero, $zero, 0xE # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28b2a4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x28B2A4 raw=0x0000000E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28b2a8:
    // 0x28b2a8: 0x0  nop
    ctx->pc = 0x28b2a8u;
    // NOP
label_28b2ac:
    // 0x28b2ac: 0x8  jr          $zero
label_28b2b0:
    if (ctx->pc == 0x28B2B0u) {
        ctx->pc = 0x28B2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B2ACu;
        // 0x28b2b0: 0xd  break       0 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B2B4u;
        goto label_28b2b4;
    }
    ctx->pc = 0x28B2ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x28B2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B2ACu;
        // 0x28b2b0: 0xd  break       0 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28B2ACu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x28B2B4u;
label_28b2b4:
    // 0x28b2b4: 0x1d  dmultu      $zero, $zero
    ctx->pc = 0x28b2b4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x28B2B4 raw=0x0000001D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28b2b8:
    // 0x28b2b8: 0x1d  dmultu      $zero, $zero
    ctx->pc = 0x28b2b8u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x28B2B8 raw=0x0000001D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28b2bc:
    // 0x28b2bc: 0x1d  dmultu      $zero, $zero
    ctx->pc = 0x28b2bcu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x28B2BC raw=0x0000001D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28b2c0:
    // 0x28b2c0: 0x9  jalr        $zero, $zero
label_28b2c4:
    if (ctx->pc == 0x28B2C4u) {
        ctx->pc = 0x28B2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B2C0u;
        // 0x28b2c4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x28B2C4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B2C8u;
        goto label_28b2c8;
    }
    ctx->pc = 0x28B2C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x28B2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B2C0u;
        // 0x28b2c4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x28B2C4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28B2C0u, 0x28B2C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x28B2C8u;
label_28b2c8:
    // 0x28b2c8: 0xc  syscall     0
    ctx->pc = 0x28b2c8u;
    ctx->pc = 0x28B2CCu;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_28b2cc:
    // 0x28b2cc: 0x13  mtlo        $zero
    ctx->pc = 0x28b2ccu;
    ctx->lo = GPR_U64(ctx, 0);
label_28b2d0:
    // 0x28b2d0: 0x1d  dmultu      $zero, $zero
    ctx->pc = 0x28b2d0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x28B2D0 raw=0x0000001D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28b2d4:
    // 0x28b2d4: 0x1d  dmultu      $zero, $zero
    ctx->pc = 0x28b2d4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x28B2D4 raw=0x0000001D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28b2d8:
    // 0x28b2d8: 0x9  jalr        $zero, $zero
label_28b2dc:
    if (ctx->pc == 0x28B2DCu) {
        ctx->pc = 0x28B2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B2D8u;
        // 0x28b2dc: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x28B2DC raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B2E0u;
        goto label_28b2e0;
    }
    ctx->pc = 0x28B2D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x28B2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B2D8u;
        // 0x28b2dc: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x28B2DC raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28B2D8u, 0x28B2E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x28B2E0u;
label_28b2e0:
    // 0x28b2e0: 0xc  syscall     0
    ctx->pc = 0x28b2e0u;
    ctx->pc = 0x28B2E4u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_28b2e4:
    // 0x28b2e4: 0x18  mult        $zero, $zero, $zero
    ctx->pc = 0x28b2e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_28b2e8:
    // 0x28b2e8: 0x1d  dmultu      $zero, $zero
    ctx->pc = 0x28b2e8u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x28B2E8 raw=0x0000001D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28b2ec:
    // 0x28b2ec: 0x1d  dmultu      $zero, $zero
    ctx->pc = 0x28b2ecu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x28B2EC raw=0x0000001D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28b2f0:
    // 0x28b2f0: 0x9  jalr        $zero, $zero
label_28b2f4:
    if (ctx->pc == 0x28B2F4u) {
        ctx->pc = 0x28B2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B2F0u;
        // 0x28b2f4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x28B2F4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B2F8u;
        goto label_28b2f8;
    }
    ctx->pc = 0x28B2F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x28B2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B2F0u;
        // 0x28b2f4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x28B2F4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28B2F0u, 0x28B2F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x28B2F8u;
label_28b2f8:
    // 0x28b2f8: 0xc  syscall     0
    ctx->pc = 0x28b2f8u;
    ctx->pc = 0x28B2FCu;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_28b2fc:
    // 0x28b2fc: 0x19  multu       $zero, $zero
    ctx->pc = 0x28b2fcu;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_28b300:
    // 0x28b300: 0x1d  dmultu      $zero, $zero
    ctx->pc = 0x28b300u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x28B300 raw=0x0000001D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28b304:
    // 0x28b304: 0x1d  dmultu      $zero, $zero
    ctx->pc = 0x28b304u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x28B304 raw=0x0000001D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28b308:
    // 0x28b308: 0x9  jalr        $zero, $zero
label_28b30c:
    if (ctx->pc == 0x28B30Cu) {
        ctx->pc = 0x28B30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B308u;
        // 0x28b30c: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x28B30C raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B310u;
        goto label_28b310;
    }
    ctx->pc = 0x28B308u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x28B30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B308u;
        // 0x28b30c: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x28B30C raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28B308u, 0x28B310u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x28B310u;
label_28b310:
    // 0x28b310: 0xc  syscall     0
    ctx->pc = 0x28b310u;
    ctx->pc = 0x28B314u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_28b314:
    // 0x28b314: 0x1a  div         $zero, $zero, $zero
    ctx->pc = 0x28b314u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_28b318:
    // 0x28b318: 0x1d  dmultu      $zero, $zero
    ctx->pc = 0x28b318u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x28B318 raw=0x0000001D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28b31c:
    // 0x28b31c: 0x1d  dmultu      $zero, $zero
    ctx->pc = 0x28b31cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x28B31C raw=0x0000001D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28b320:
    // 0x28b320: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x28b320u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_28b324:
    // 0x28b324: 0xa  movz        $zero, $zero, $zero
    ctx->pc = 0x28b324u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_28b328:
    // 0x28b328: 0xc  syscall     0
    ctx->pc = 0x28b328u;
    ctx->pc = 0x28B32Cu;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_28b32c:
    // 0x28b32c: 0xf  sync
    ctx->pc = 0x28b32cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_28b330:
    // 0x28b330: 0x1d  dmultu      $zero, $zero
    ctx->pc = 0x28b330u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x28B330 raw=0x0000001D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28b334:
    // 0x28b334: 0x1d  dmultu      $zero, $zero
    ctx->pc = 0x28b334u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x28B334 raw=0x0000001D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28b338:
    // 0x28b338: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x28b338u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_28b33c:
    // 0x28b33c: 0xa  movz        $zero, $zero, $zero
    ctx->pc = 0x28b33cu;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_28b340:
    // 0x28b340: 0xc  syscall     0
    ctx->pc = 0x28b340u;
    ctx->pc = 0x28B344u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_28b344:
    // 0x28b344: 0x10  mfhi        $zero
    ctx->pc = 0x28b344u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_28b348:
    // 0x28b348: 0x1d  dmultu      $zero, $zero
    ctx->pc = 0x28b348u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x28B348 raw=0x0000001D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28b34c:
    // 0x28b34c: 0x1d  dmultu      $zero, $zero
    ctx->pc = 0x28b34cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x28B34C raw=0x0000001D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28b350:
    // 0x28b350: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x28b350u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_28b354:
    // 0x28b354: 0xa  movz        $zero, $zero, $zero
    ctx->pc = 0x28b354u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_28b358:
    // 0x28b358: 0xc  syscall     0
    ctx->pc = 0x28b358u;
    ctx->pc = 0x28B35Cu;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_28b35c:
    // 0x28b35c: 0x12  mflo        $zero
    ctx->pc = 0x28b35cu;
    SET_GPR_U64(ctx, 0, ctx->lo);
label_28b360:
    // 0x28b360: 0x1d  dmultu      $zero, $zero
    ctx->pc = 0x28b360u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x28B360 raw=0x0000001D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28b364:
    // 0x28b364: 0x1d  dmultu      $zero, $zero
    ctx->pc = 0x28b364u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x28B364 raw=0x0000001D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28b368:
    // 0x28b368: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x28b368u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_28b36c:
    // 0x28b36c: 0xa  movz        $zero, $zero, $zero
    ctx->pc = 0x28b36cu;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_28b370:
    // 0x28b370: 0xc  syscall     0
    ctx->pc = 0x28b370u;
    ctx->pc = 0x28B374u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_28b374:
    // 0x28b374: 0x16  dsrlv       $zero, $zero, $zero
    ctx->pc = 0x28b374u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_28b378:
    // 0x28b378: 0x1d  dmultu      $zero, $zero
    ctx->pc = 0x28b378u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x28B378 raw=0x0000001D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28b37c:
    // 0x28b37c: 0x1d  dmultu      $zero, $zero
    ctx->pc = 0x28b37cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x28B37C raw=0x0000001D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28b380:
    // 0x28b380: 0x3  sra         $zero, $zero, 0
    ctx->pc = 0x28b380u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 0));
label_28b384:
    // 0x28b384: 0xa  movz        $zero, $zero, $zero
    ctx->pc = 0x28b384u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_28b388:
    // 0x28b388: 0xc  syscall     0
    ctx->pc = 0x28b388u;
    ctx->pc = 0x28B38Cu;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_28b38c:
    // 0x28b38c: 0xf  sync
    ctx->pc = 0x28b38cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_28b390:
    // 0x28b390: 0x1d  dmultu      $zero, $zero
    ctx->pc = 0x28b390u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x28B390 raw=0x0000001D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28b394:
    // 0x28b394: 0x1d  dmultu      $zero, $zero
    ctx->pc = 0x28b394u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x28B394 raw=0x0000001D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28b398:
    // 0x28b398: 0x3  sra         $zero, $zero, 0
    ctx->pc = 0x28b398u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 0));
label_28b39c:
    // 0x28b39c: 0xa  movz        $zero, $zero, $zero
    ctx->pc = 0x28b39cu;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_28b3a0:
    // 0x28b3a0: 0xc  syscall     0
    ctx->pc = 0x28b3a0u;
    ctx->pc = 0x28B3A4u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_28b3a4:
    // 0x28b3a4: 0x10  mfhi        $zero
    ctx->pc = 0x28b3a4u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_28b3a8:
    // 0x28b3a8: 0x1d  dmultu      $zero, $zero
    ctx->pc = 0x28b3a8u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x28B3A8 raw=0x0000001D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28b3ac:
    // 0x28b3ac: 0x1d  dmultu      $zero, $zero
    ctx->pc = 0x28b3acu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x28B3AC raw=0x0000001D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28b3b0:
    // 0x28b3b0: 0x3  sra         $zero, $zero, 0
    ctx->pc = 0x28b3b0u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 0));
label_28b3b4:
    // 0x28b3b4: 0xa  movz        $zero, $zero, $zero
    ctx->pc = 0x28b3b4u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_28b3b8:
    // 0x28b3b8: 0xc  syscall     0
    ctx->pc = 0x28b3b8u;
    ctx->pc = 0x28B3BCu;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_28b3bc:
    // 0x28b3bc: 0x12  mflo        $zero
    ctx->pc = 0x28b3bcu;
    SET_GPR_U64(ctx, 0, ctx->lo);
label_28b3c0:
    // 0x28b3c0: 0x1d  dmultu      $zero, $zero
    ctx->pc = 0x28b3c0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x28B3C0 raw=0x0000001D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28b3c4:
    // 0x28b3c4: 0x1d  dmultu      $zero, $zero
    ctx->pc = 0x28b3c4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x28B3C4 raw=0x0000001D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28b3c8:
    // 0x28b3c8: 0x3  sra         $zero, $zero, 0
    ctx->pc = 0x28b3c8u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 0));
label_28b3cc:
    // 0x28b3cc: 0xa  movz        $zero, $zero, $zero
    ctx->pc = 0x28b3ccu;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_28b3d0:
    // 0x28b3d0: 0xc  syscall     0
    ctx->pc = 0x28b3d0u;
    ctx->pc = 0x28B3D4u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_28b3d4:
    // 0x28b3d4: 0x16  dsrlv       $zero, $zero, $zero
    ctx->pc = 0x28b3d4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_28b3d8:
    // 0x28b3d8: 0x1d  dmultu      $zero, $zero
    ctx->pc = 0x28b3d8u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x28B3D8 raw=0x0000001D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28b3dc:
    // 0x28b3dc: 0x1d  dmultu      $zero, $zero
    ctx->pc = 0x28b3dcu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x28B3DC raw=0x0000001D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28b3e0:
    // 0x28b3e0: 0x0  nop
    ctx->pc = 0x28b3e0u;
    // NOP
label_28b3e4:
    // 0x28b3e4: 0xa  movz        $zero, $zero, $zero
    ctx->pc = 0x28b3e4u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_28b3e8:
    // 0x28b3e8: 0xc  syscall     0
    ctx->pc = 0x28b3e8u;
    ctx->pc = 0x28B3ECu;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_28b3ec:
    // 0x28b3ec: 0x18  mult        $zero, $zero, $zero
    ctx->pc = 0x28b3ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_28b3f0:
    // 0x28b3f0: 0x1d  dmultu      $zero, $zero
    ctx->pc = 0x28b3f0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x28B3F0 raw=0x0000001D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28b3f4:
    // 0x28b3f4: 0x1d  dmultu      $zero, $zero
    ctx->pc = 0x28b3f4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x28B3F4 raw=0x0000001D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28b3f8:
    // 0x28b3f8: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x28b3f8u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_28b3fc:
    // 0x28b3fc: 0x8  jr          $zero
label_28b400:
    if (ctx->pc == 0x28B400u) {
        ctx->pc = 0x28B400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B3FCu;
        // 0x28b400: 0xd  break       0 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B404u;
        goto label_28b404;
    }
    ctx->pc = 0x28B3FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x28B400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B3FCu;
        // 0x28b400: 0xd  break       0 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28B3FCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x28B404u;
label_28b404:
    // 0x28b404: 0x1d  dmultu      $zero, $zero
    ctx->pc = 0x28b404u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x28B404 raw=0x0000001D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28b408:
    // 0x28b408: 0x1d  dmultu      $zero, $zero
    ctx->pc = 0x28b408u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x28B408 raw=0x0000001D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28b40c:
    // 0x28b40c: 0x1d  dmultu      $zero, $zero
    ctx->pc = 0x28b40cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x28B40C raw=0x0000001D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28b410:
    // 0x28b410: 0x5  .word       0x00000005                   # INVALID     $zero, $zero, 0x5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28b410u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x28B410 raw=0x00000005"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28b414:
    // 0x28b414: 0x8  jr          $zero
label_28b418:
    if (ctx->pc == 0x28B418u) {
        ctx->pc = 0x28B418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B414u;
        // 0x28b418: 0xd  break       0 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B41Cu;
        goto label_28b41c;
    }
    ctx->pc = 0x28B414u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x28B418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B414u;
        // 0x28b418: 0xd  break       0 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28B414u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x28B41Cu;
label_28b41c:
    // 0x28b41c: 0x1d  dmultu      $zero, $zero
    ctx->pc = 0x28b41cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x28B41C raw=0x0000001D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28b420:
    // 0x28b420: 0x1d  dmultu      $zero, $zero
    ctx->pc = 0x28b420u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x28B420 raw=0x0000001D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28b424:
    // 0x28b424: 0x1d  dmultu      $zero, $zero
    ctx->pc = 0x28b424u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x28B424 raw=0x0000001D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28b428:
    // 0x28b428: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x28b428u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_28b42c:
    // 0x28b42c: 0xb  movn        $zero, $zero, $zero
    ctx->pc = 0x28b42cu;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_28b430:
    // 0x28b430: 0x1b  divu        $zero, $zero, $zero
    ctx->pc = 0x28b430u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_28b434:
    // 0x28b434: 0x1c  dmult       $zero, $zero
    ctx->pc = 0x28b434u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x28B434 raw=0x0000001C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28b438:
    // 0x28b438: 0x1d  dmultu      $zero, $zero
    ctx->pc = 0x28b438u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x28B438 raw=0x0000001D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28b43c:
    // 0x28b43c: 0x1d  dmultu      $zero, $zero
    ctx->pc = 0x28b43cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x28B43C raw=0x0000001D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28b440:
    // 0x28b440: 0x3  sra         $zero, $zero, 0
    ctx->pc = 0x28b440u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 0));
label_28b444:
    // 0x28b444: 0xb  movn        $zero, $zero, $zero
    ctx->pc = 0x28b444u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_28b448:
    // 0x28b448: 0x1b  divu        $zero, $zero, $zero
    ctx->pc = 0x28b448u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_28b44c:
    // 0x28b44c: 0x1c  dmult       $zero, $zero
    ctx->pc = 0x28b44cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x28B44C raw=0x0000001C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28b450:
    // 0x28b450: 0x1d  dmultu      $zero, $zero
    ctx->pc = 0x28b450u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x28B450 raw=0x0000001D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28b454:
    // 0x28b454: 0x1d  dmultu      $zero, $zero
    ctx->pc = 0x28b454u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x28B454 raw=0x0000001D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28b458:
    // 0x28b458: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x28b458u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_28b45c:
    // 0x28b45c: 0xd  break       0
    ctx->pc = 0x28b45cu;
    runtime->handleBreak(rdram, ctx);
label_28b460:
    // 0x28b460: 0x18  mult        $zero, $zero, $zero
    ctx->pc = 0x28b460u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_28b464:
    // 0x28b464: 0x1c  dmult       $zero, $zero
    ctx->pc = 0x28b464u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x28B464 raw=0x0000001C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28b468:
    // 0x28b468: 0x1d  dmultu      $zero, $zero
    ctx->pc = 0x28b468u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x28B468 raw=0x0000001D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28b46c:
    // 0x28b46c: 0x1d  dmultu      $zero, $zero
    ctx->pc = 0x28b46cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x28B46C raw=0x0000001D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28b470:
    // 0x28b470: 0x9  jalr        $zero, $zero
label_28b474:
    if (ctx->pc == 0x28B474u) {
        ctx->pc = 0x28B474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B470u;
        // 0x28b474: 0x6  srlv        $zero, $zero, $zero (Delay Slot)
        SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B478u;
        goto label_28b478;
    }
    ctx->pc = 0x28B470u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x28B474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B470u;
        // 0x28b474: 0x6  srlv        $zero, $zero, $zero (Delay Slot)
        SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28B470u, 0x28B478u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x28B478u;
label_28b478:
    // 0x28b478: 0x1d  dmultu      $zero, $zero
    ctx->pc = 0x28b478u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x28B478 raw=0x0000001D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28b47c:
    // 0x28b47c: 0x1d  dmultu      $zero, $zero
    ctx->pc = 0x28b47cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x28B47C raw=0x0000001D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28b480:
    // 0x28b480: 0x1d  dmultu      $zero, $zero
    ctx->pc = 0x28b480u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x28B480 raw=0x0000001D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28b484:
    // 0x28b484: 0x1d  dmultu      $zero, $zero
    ctx->pc = 0x28b484u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x28B484 raw=0x0000001D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28b488:
    // 0x28b488: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x28b488u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_28b48c:
    // 0x28b48c: 0xa  movz        $zero, $zero, $zero
    ctx->pc = 0x28b48cu;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_28b490:
    // 0x28b490: 0xc  syscall     0
    ctx->pc = 0x28b490u;
    ctx->pc = 0x28B494u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_28b494:
    // 0x28b494: 0x18  mult        $zero, $zero, $zero
    ctx->pc = 0x28b494u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_28b498:
    // 0x28b498: 0x1d  dmultu      $zero, $zero
    ctx->pc = 0x28b498u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x28B498 raw=0x0000001D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28b49c:
    // 0x28b49c: 0x1d  dmultu      $zero, $zero
    ctx->pc = 0x28b49cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x28B49C raw=0x0000001D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28b4a0:
    // 0x28b4a0: 0x9  jalr        $zero, $zero
label_28b4a4:
    if (ctx->pc == 0x28B4A4u) {
        ctx->pc = 0x28B4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B4A0u;
        // 0x28b4a4: 0x7  srav        $zero, $zero, $zero (Delay Slot)
        SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B4A8u;
        goto label_28b4a8;
    }
    ctx->pc = 0x28B4A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x28B4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B4A0u;
        // 0x28b4a4: 0x7  srav        $zero, $zero, $zero (Delay Slot)
        SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28B4A0u, 0x28B4A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x28B4A8u;
label_28b4a8:
    // 0x28b4a8: 0x1d  dmultu      $zero, $zero
    ctx->pc = 0x28b4a8u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x28B4A8 raw=0x0000001D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28b4ac:
    // 0x28b4ac: 0x1d  dmultu      $zero, $zero
    ctx->pc = 0x28b4acu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x28B4AC raw=0x0000001D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28b4b0:
    // 0x28b4b0: 0x1d  dmultu      $zero, $zero
    ctx->pc = 0x28b4b0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x28B4B0 raw=0x0000001D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28b4b4:
    // 0x28b4b4: 0x1d  dmultu      $zero, $zero
    ctx->pc = 0x28b4b4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x28B4B4 raw=0x0000001D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28b4b8:
    // 0x28b4b8: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x28b4b8u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_28b4bc:
    // 0x28b4bc: 0xb  movn        $zero, $zero, $zero
    ctx->pc = 0x28b4bcu;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_28b4c0:
    // 0x28b4c0: 0x18  mult        $zero, $zero, $zero
    ctx->pc = 0x28b4c0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_28b4c4:
    // 0x28b4c4: 0x1c  dmult       $zero, $zero
    ctx->pc = 0x28b4c4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x28B4C4 raw=0x0000001C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28b4c8:
    // 0x28b4c8: 0x1d  dmultu      $zero, $zero
    ctx->pc = 0x28b4c8u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x28B4C8 raw=0x0000001D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28b4cc:
    // 0x28b4cc: 0x1d  dmultu      $zero, $zero
    ctx->pc = 0x28b4ccu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x28B4CC raw=0x0000001D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28b4d0:
    // 0x28b4d0: 0x0  nop
    ctx->pc = 0x28b4d0u;
    // NOP
label_28b4d4:
    // 0x28b4d4: 0x0  nop
    ctx->pc = 0x28b4d4u;
    // NOP
label_28b4d8:
    // 0x28b4d8: 0x0  nop
    ctx->pc = 0x28b4d8u;
    // NOP
label_28b4dc:
    // 0x28b4dc: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28b4dcu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_28b4e0:
    // 0x28b4e0: 0x0  nop
    ctx->pc = 0x28b4e0u;
    // NOP
label_28b4e4:
    // 0x28b4e4: 0x41800000  .word       0x41800000                   # INVALID     $t4, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x28b4e4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xC at 0x28B4E4 raw=0x41800000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28b4e8:
    // 0x28b4e8: 0x0  nop
    ctx->pc = 0x28b4e8u;
    // NOP
label_28b4ec:
    // 0x28b4ec: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28b4ecu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_28b4f0:
    // 0x28b4f0: 0x0  nop
    ctx->pc = 0x28b4f0u;
    // NOP
label_28b4f4:
    // 0x28b4f4: 0x0  nop
    ctx->pc = 0x28b4f4u;
    // NOP
label_28b4f8:
    // 0x28b4f8: 0x0  nop
    ctx->pc = 0x28b4f8u;
    // NOP
label_28b4fc:
    // 0x28b4fc: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28b4fcu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_28b500:
    // 0x28b500: 0x0  nop
    ctx->pc = 0x28b500u;
    // NOP
label_28b504:
    // 0x28b504: 0x41800000  .word       0x41800000                   # INVALID     $t4, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x28b504u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xC at 0x28B504 raw=0x41800000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28b508:
    // 0x28b508: 0x0  nop
    ctx->pc = 0x28b508u;
    // NOP
label_28b50c:
    // 0x28b50c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28b50cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_28b510:
    // 0x28b510: 0x0  nop
    ctx->pc = 0x28b510u;
    // NOP
label_28b514:
    // 0x28b514: 0x41800000  .word       0x41800000                   # INVALID     $t4, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x28b514u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xC at 0x28B514 raw=0x41800000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28b518:
    // 0x28b518: 0x0  nop
    ctx->pc = 0x28b518u;
    // NOP
label_28b51c:
    // 0x28b51c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28b51cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_28b520:
    // 0x28b520: 0x0  nop
    ctx->pc = 0x28b520u;
    // NOP
label_28b524:
    // 0x28b524: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x28b524u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x28B524 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28b528:
    // 0x28b528: 0x0  nop
    ctx->pc = 0x28b528u;
    // NOP
label_28b52c:
    // 0x28b52c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28b52cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_28b530:
    // 0x28b530: 0x0  nop
    ctx->pc = 0x28b530u;
    // NOP
label_28b534:
    // 0x28b534: 0x41800000  .word       0x41800000                   # INVALID     $t4, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x28b534u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xC at 0x28B534 raw=0x41800000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28b538:
    // 0x28b538: 0x0  nop
    ctx->pc = 0x28b538u;
    // NOP
label_28b53c:
    // 0x28b53c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28b53cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_28b540:
    // 0x28b540: 0x0  nop
    ctx->pc = 0x28b540u;
    // NOP
label_28b544:
    // 0x28b544: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x28b544u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x28B544 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28b548:
    // 0x28b548: 0x0  nop
    ctx->pc = 0x28b548u;
    // NOP
label_28b54c:
    // 0x28b54c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28b54cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_28b550:
    // 0x28b550: 0x0  nop
    ctx->pc = 0x28b550u;
    // NOP
label_28b554:
    // 0x28b554: 0x41800000  .word       0x41800000                   # INVALID     $t4, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x28b554u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xC at 0x28B554 raw=0x41800000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28b558:
    // 0x28b558: 0x0  nop
    ctx->pc = 0x28b558u;
    // NOP
label_28b55c:
    // 0x28b55c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28b55cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_28b560:
    // 0x28b560: 0x0  nop
    ctx->pc = 0x28b560u;
    // NOP
label_28b564:
    // 0x28b564: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x28b564u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x28B564 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28b568:
    // 0x28b568: 0x0  nop
    ctx->pc = 0x28b568u;
    // NOP
label_28b56c:
    // 0x28b56c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28b56cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_28b570:
    // 0x28b570: 0x0  nop
    ctx->pc = 0x28b570u;
    // NOP
label_28b574:
    // 0x28b574: 0x41800000  .word       0x41800000                   # INVALID     $t4, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x28b574u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xC at 0x28B574 raw=0x41800000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28b578:
    // 0x28b578: 0x0  nop
    ctx->pc = 0x28b578u;
    // NOP
label_28b57c:
    // 0x28b57c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28b57cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_28b580:
    // 0x28b580: 0x0  nop
    ctx->pc = 0x28b580u;
    // NOP
label_28b584:
    // 0x28b584: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x28b584u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x28B584 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28b588:
    // 0x28b588: 0x0  nop
    ctx->pc = 0x28b588u;
    // NOP
label_28b58c:
    // 0x28b58c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28b58cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_28b590:
    // 0x28b590: 0x0  nop
    ctx->pc = 0x28b590u;
    // NOP
label_28b594:
    // 0x28b594: 0x0  nop
    ctx->pc = 0x28b594u;
    // NOP
label_28b598:
    // 0x28b598: 0x0  nop
    ctx->pc = 0x28b598u;
    // NOP
label_28b59c:
    // 0x28b59c: 0x0  nop
    ctx->pc = 0x28b59cu;
    // NOP
label_28b5a0:
    // 0x28b5a0: 0x0  nop
    ctx->pc = 0x28b5a0u;
    // NOP
label_28b5a4:
    // 0x28b5a4: 0x90000000  lbu         $zero, 0x0($zero)
    ctx->pc = 0x28b5a4u;
    SET_GPR_ZE32(ctx, 0, (uint8_t)FAST_READ8(0x0u));
label_28b5a8:
    // 0x28b5a8: 0x0  nop
    ctx->pc = 0x28b5a8u;
    // NOP
label_28b5ac:
    // 0x28b5ac: 0xff00  sll         $ra, $zero, 28
    ctx->pc = 0x28b5acu;
    SET_GPR_S32(ctx, 31, (int32_t)SLL32(GPR_U32(ctx, 0), 28));
label_28b5b0:
    // 0x28b5b0: 0x230a0d  break       35, 40
    ctx->pc = 0x28b5b0u;
    runtime->handleBreak(rdram, ctx);
label_28b5b4:
    // 0x28b5b4: 0x0  nop
    ctx->pc = 0x28b5b4u;
    // NOP
label_28b5b8:
    // 0x28b5b8: 0xb00  sll         $at, $zero, 12
    ctx->pc = 0x28b5b8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 12));
label_28b5bc:
    // 0x28b5bc: 0x0  nop
    ctx->pc = 0x28b5bcu;
    // NOP
label_28b5c0:
    // 0x28b5c0: 0x0  nop
    ctx->pc = 0x28b5c0u;
    // NOP
label_28b5c4:
    // 0x28b5c4: 0x90000000  lbu         $zero, 0x0($zero)
    ctx->pc = 0x28b5c4u;
    SET_GPR_ZE32(ctx, 0, (uint8_t)FAST_READ8(0x0u));
label_28b5c8:
    // 0x28b5c8: 0x0  nop
    ctx->pc = 0x28b5c8u;
    // NOP
label_28b5cc:
    // 0x28b5cc: 0xff00  sll         $ra, $zero, 28
    ctx->pc = 0x28b5ccu;
    SET_GPR_S32(ctx, 31, (int32_t)SLL32(GPR_U32(ctx, 0), 28));
label_28b5d0:
    // 0x28b5d0: 0x23120a  .word       0x0023120A                   # movz        $v0, $at, $v1 # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28b5d0u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 1));
label_28b5d4:
    // 0x28b5d4: 0x0  nop
    ctx->pc = 0x28b5d4u;
    // NOP
label_28b5d8:
    // 0x28b5d8: 0xb00  sll         $at, $zero, 12
    ctx->pc = 0x28b5d8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 12));
label_28b5dc:
    // 0x28b5dc: 0x0  nop
    ctx->pc = 0x28b5dcu;
    // NOP
label_28b5e0:
    // 0x28b5e0: 0x0  nop
    ctx->pc = 0x28b5e0u;
    // NOP
label_28b5e4:
    // 0x28b5e4: 0x90000000  lbu         $zero, 0x0($zero)
    ctx->pc = 0x28b5e4u;
    SET_GPR_ZE32(ctx, 0, (uint8_t)FAST_READ8(0x0u));
label_28b5e8:
    // 0x28b5e8: 0x0  nop
    ctx->pc = 0x28b5e8u;
    // NOP
label_28b5ec:
    // 0x28b5ec: 0xff00  sll         $ra, $zero, 28
    ctx->pc = 0x28b5ecu;
    SET_GPR_S32(ctx, 31, (int32_t)SLL32(GPR_U32(ctx, 0), 28));
label_28b5f0:
    // 0x28b5f0: 0x21140e  .word       0x0021140E                   # INVALID     $at, $at, 0x140E # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28b5f0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x28B5F0 raw=0x0021140E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28b5f4:
    // 0x28b5f4: 0x0  nop
    ctx->pc = 0x28b5f4u;
    // NOP
label_28b5f8:
    // 0x28b5f8: 0xb00  sll         $at, $zero, 12
    ctx->pc = 0x28b5f8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 12));
label_28b5fc:
    // 0x28b5fc: 0x0  nop
    ctx->pc = 0x28b5fcu;
    // NOP
label_28b600:
    // 0x28b600: 0x0  nop
    ctx->pc = 0x28b600u;
    // NOP
label_28b604:
    // 0x28b604: 0x90000000  lbu         $zero, 0x0($zero)
    ctx->pc = 0x28b604u;
    SET_GPR_ZE32(ctx, 0, (uint8_t)FAST_READ8(0x0u));
label_28b608:
    // 0x28b608: 0x0  nop
    ctx->pc = 0x28b608u;
    // NOP
label_28b60c:
    // 0x28b60c: 0xff00  sll         $ra, $zero, 28
    ctx->pc = 0x28b60cu;
    SET_GPR_S32(ctx, 31, (int32_t)SLL32(GPR_U32(ctx, 0), 28));
label_28b610:
    // 0x28b610: 0x1f0000  sll         $zero, $ra, 0
    ctx->pc = 0x28b610u;
    
label_28b614:
    // 0x28b614: 0x0  nop
    ctx->pc = 0x28b614u;
    // NOP
label_28b618:
    // 0x28b618: 0xb00  sll         $at, $zero, 12
    ctx->pc = 0x28b618u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 12));
label_28b61c:
    // 0x28b61c: 0x0  nop
    ctx->pc = 0x28b61cu;
    // NOP
label_28b620:
    // 0x28b620: 0x0  nop
    ctx->pc = 0x28b620u;
    // NOP
label_28b624:
    // 0x28b624: 0x90000000  lbu         $zero, 0x0($zero)
    ctx->pc = 0x28b624u;
    SET_GPR_ZE32(ctx, 0, (uint8_t)FAST_READ8(0x0u));
label_28b628:
    // 0x28b628: 0x0  nop
    ctx->pc = 0x28b628u;
    // NOP
label_28b62c:
    // 0x28b62c: 0xff00  sll         $ra, $zero, 28
    ctx->pc = 0x28b62cu;
    SET_GPR_S32(ctx, 31, (int32_t)SLL32(GPR_U32(ctx, 0), 28));
label_28b630:
    // 0x28b630: 0x350032  tlt         $at, $s5, 0
    ctx->pc = 0x28b630u;
    if (GPR_S64(ctx, 1) < GPR_S64(ctx, 21)) { runtime->handleTrap(rdram, ctx); }
label_28b634:
    // 0x28b634: 0x0  nop
    ctx->pc = 0x28b634u;
    // NOP
label_28b638:
    // 0x28b638: 0xb00  sll         $at, $zero, 12
    ctx->pc = 0x28b638u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 12));
label_28b63c:
    // 0x28b63c: 0x0  nop
    ctx->pc = 0x28b63cu;
    // NOP
label_28b640:
    // 0x28b640: 0x0  nop
    ctx->pc = 0x28b640u;
    // NOP
label_28b644:
    // 0x28b644: 0x90000000  lbu         $zero, 0x0($zero)
    ctx->pc = 0x28b644u;
    SET_GPR_ZE32(ctx, 0, (uint8_t)FAST_READ8(0x0u));
label_28b648:
    // 0x28b648: 0x0  nop
    ctx->pc = 0x28b648u;
    // NOP
label_28b64c:
    // 0x28b64c: 0xff00  sll         $ra, $zero, 28
    ctx->pc = 0x28b64cu;
    SET_GPR_S32(ctx, 31, (int32_t)SLL32(GPR_U32(ctx, 0), 28));
label_28b650:
    // 0x28b650: 0x110032  tlt         $zero, $s1, 0
    ctx->pc = 0x28b650u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 17)) { runtime->handleTrap(rdram, ctx); }
label_28b654:
    // 0x28b654: 0x0  nop
    ctx->pc = 0x28b654u;
    // NOP
label_28b658:
    // 0x28b658: 0xb00  sll         $at, $zero, 12
    ctx->pc = 0x28b658u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 12));
label_28b65c:
    // 0x28b65c: 0x0  nop
    ctx->pc = 0x28b65cu;
    // NOP
label_28b660:
    // 0x28b660: 0x0  nop
    ctx->pc = 0x28b660u;
    // NOP
label_28b664:
    // 0x28b664: 0x90000000  lbu         $zero, 0x0($zero)
    ctx->pc = 0x28b664u;
    SET_GPR_ZE32(ctx, 0, (uint8_t)FAST_READ8(0x0u));
label_28b668:
    // 0x28b668: 0x0  nop
    ctx->pc = 0x28b668u;
    // NOP
label_28b66c:
    // 0x28b66c: 0xff00  sll         $ra, $zero, 28
    ctx->pc = 0x28b66cu;
    SET_GPR_S32(ctx, 31, (int32_t)SLL32(GPR_U32(ctx, 0), 28));
label_28b670:
    // 0x28b670: 0x110028  .word       0x00110028                   # mfsa        $zero # 00110000 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x28b670u;
    SET_GPR_U32(ctx, 0, ctx->sa);
label_28b674:
    // 0x28b674: 0x0  nop
    ctx->pc = 0x28b674u;
    // NOP
label_28b678:
    // 0x28b678: 0xb00  sll         $at, $zero, 12
    ctx->pc = 0x28b678u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 12));
label_28b67c:
    // 0x28b67c: 0x0  nop
    ctx->pc = 0x28b67cu;
    // NOP
label_28b680:
    // 0x28b680: 0x6  srlv        $zero, $zero, $zero
    ctx->pc = 0x28b680u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_28b684:
    // 0x28b684: 0x8  jr          $zero
label_28b688:
    if (ctx->pc == 0x28B688u) {
        ctx->pc = 0x28B688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B684u;
        // 0x28b688: 0x4  sllv        $zero, $zero, $zero (Delay Slot)
        SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B68Cu;
        goto label_28b68c;
    }
    ctx->pc = 0x28B684u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x28B688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B684u;
        // 0x28b688: 0x4  sllv        $zero, $zero, $zero (Delay Slot)
        SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28B684u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x28B68Cu;
label_28b68c:
    // 0x28b68c: 0x7  srav        $zero, $zero, $zero
    ctx->pc = 0x28b68cu;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_28b690:
    // 0x28b690: 0x9  jalr        $zero, $zero
label_28b694:
    if (ctx->pc == 0x28B694u) {
        ctx->pc = 0x28B694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B690u;
        // 0x28b694: 0xa  movz        $zero, $zero, $zero (Delay Slot)
        if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B698u;
        goto label_28b698;
    }
    ctx->pc = 0x28B690u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x28B694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B690u;
        // 0x28b694: 0xa  movz        $zero, $zero, $zero (Delay Slot)
        if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28B690u, 0x28B698u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x28B698u;
label_28b698:
    // 0x28b698: 0xb  movn        $zero, $zero, $zero
    ctx->pc = 0x28b698u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_28b69c:
    // 0x28b69c: 0xc  syscall     0
    ctx->pc = 0x28b69cu;
    ctx->pc = 0x28B6A0u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_28b6a0:
    // 0x28b6a0: 0x15  .word       0x00000015                   # INVALID     $zero, $zero, 0x15 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28b6a0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x28B6A0 raw=0x00000015"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28b6a4:
    // 0x28b6a4: 0x0  nop
    ctx->pc = 0x28b6a4u;
    // NOP
label_28b6a8:
    // 0x28b6a8: 0x0  nop
    ctx->pc = 0x28b6a8u;
    // NOP
label_28b6ac:
    // 0x28b6ac: 0x0  nop
    ctx->pc = 0x28b6acu;
    // NOP
label_28b6b0:
    // 0x28b6b0: 0x2cc420  .word       0x002CC420                   # add         $t8, $at, $t4 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28b6b0u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 24, (int32_t)result);     } }
label_28b6b4:
    // 0x28b6b4: 0x2cc450  .word       0x002CC450                   # mfhi        $t8 # 002C0440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28b6b4u;
    SET_GPR_U64(ctx, 24, ctx->hi);
label_28b6b8:
    // 0x28b6b8: 0x2cc480  .word       0x002CC480                   # sll         $t8, $t4, 18 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28b6b8u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 12), 18));
label_28b6bc:
    // 0x28b6bc: 0x2cc4e0  .word       0x002CC4E0                   # add         $t8, $at, $t4 # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28b6bcu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 24, (int32_t)result);     } }
label_28b6c0:
    // 0x28b6c0: 0x2cc580  .word       0x002CC580                   # sll         $t8, $t4, 22 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28b6c0u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 12), 22));
label_28b6c4:
    // 0x28b6c4: 0x2cc5b0  tge         $at, $t4, 790
    ctx->pc = 0x28b6c4u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 12)) { runtime->handleTrap(rdram, ctx); }
label_28b6c8:
    // 0x28b6c8: 0x2cc5f0  tge         $at, $t4, 791
    ctx->pc = 0x28b6c8u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 12)) { runtime->handleTrap(rdram, ctx); }
label_28b6cc:
    // 0x28b6cc: 0x2cc610  .word       0x002CC610                   # mfhi        $t8 # 002C0600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28b6ccu;
    SET_GPR_U64(ctx, 24, ctx->hi);
label_28b6d0:
    // 0x28b6d0: 0x2cc640  .word       0x002CC640                   # sll         $t8, $t4, 25 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28b6d0u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 12), 25));
label_28b6d4:
    // 0x28b6d4: 0x2cc660  .word       0x002CC660                   # add         $t8, $at, $t4 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28b6d4u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 24, (int32_t)result);     } }
label_28b6d8:
    // 0x28b6d8: 0x2cc640  .word       0x002CC640                   # sll         $t8, $t4, 25 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28b6d8u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 12), 25));
label_28b6dc:
    // 0x28b6dc: 0x2cc640  .word       0x002CC640                   # sll         $t8, $t4, 25 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28b6dcu;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 12), 25));
label_28b6e0:
    // 0x28b6e0: 0x2cc660  .word       0x002CC660                   # add         $t8, $at, $t4 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28b6e0u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 24, (int32_t)result);     } }
label_28b6e4:
    // 0x28b6e4: 0x2cc680  .word       0x002CC680                   # sll         $t8, $t4, 26 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28b6e4u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 12), 26));
label_28b6e8:
    // 0x28b6e8: 0x2cc6b0  tge         $at, $t4, 794
    ctx->pc = 0x28b6e8u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 12)) { runtime->handleTrap(rdram, ctx); }
label_28b6ec:
    // 0x28b6ec: 0x2cc6e0  .word       0x002CC6E0                   # add         $t8, $at, $t4 # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28b6ecu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 24, (int32_t)result);     } }
label_28b6f0:
    // 0x28b6f0: 0x2cc700  .word       0x002CC700                   # sll         $t8, $t4, 28 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28b6f0u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 12), 28));
label_28b6f4:
    // 0x28b6f4: 0x2cc720  .word       0x002CC720                   # add         $t8, $at, $t4 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28b6f4u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 24, (int32_t)result);     } }
label_28b6f8:
    // 0x28b6f8: 0x2cc700  .word       0x002CC700                   # sll         $t8, $t4, 28 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28b6f8u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 12), 28));
label_28b6fc:
    // 0x28b6fc: 0x2cc750  .word       0x002CC750                   # mfhi        $t8 # 002C0740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28b6fcu;
    SET_GPR_U64(ctx, 24, ctx->hi);
label_28b700:
    // 0x28b700: 0x2cc770  tge         $at, $t4, 797
    ctx->pc = 0x28b700u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 12)) { runtime->handleTrap(rdram, ctx); }
label_28b704:
    // 0x28b704: 0x2cc798  .word       0x002CC798                   # mult        $t8, $at, $t4 # 00000780 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x28b704u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 24, (int32_t)result); }
label_28b708:
    // 0x28b708: 0x2cc7a0  .word       0x002CC7A0                   # add         $t8, $at, $t4 # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28b708u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 24, (int32_t)result);     } }
label_28b70c:
    // 0x28b70c: 0x2cc7c0  .word       0x002CC7C0                   # sll         $t8, $t4, 31 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28b70cu;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 12), 31));
label_28b710:
    // 0x28b710: 0x2cc7d0  .word       0x002CC7D0                   # mfhi        $t8 # 002C07C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28b710u;
    SET_GPR_U64(ctx, 24, ctx->hi);
label_28b714:
    // 0x28b714: 0x2cc7e0  .word       0x002CC7E0                   # add         $t8, $at, $t4 # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28b714u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 24, (int32_t)result);     } }
label_28b718:
    // 0x28b718: 0x2cc800  .word       0x002CC800                   # sll         $t9, $t4, 0 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28b718u;
    SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 12), 0));
label_28b71c:
    // 0x28b71c: 0x2cc828  .word       0x002CC828                   # mfsa        $t9 # 002C0000 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x28b71cu;
    SET_GPR_U32(ctx, 25, ctx->sa);
label_28b720:
    // 0x28b720: 0x2cc830  tge         $at, $t4, 800
    ctx->pc = 0x28b720u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 12)) { runtime->handleTrap(rdram, ctx); }
label_28b724:
    // 0x28b724: 0x2cc850  .word       0x002CC850                   # mfhi        $t9 # 002C0040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28b724u;
    SET_GPR_U64(ctx, 25, ctx->hi);
label_28b728:
    // 0x28b728: 0x2cc870  tge         $at, $t4, 801
    ctx->pc = 0x28b728u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 12)) { runtime->handleTrap(rdram, ctx); }
label_28b72c:
    // 0x28b72c: 0x2cc890  .word       0x002CC890                   # mfhi        $t9 # 002C0080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28b72cu;
    SET_GPR_U64(ctx, 25, ctx->hi);
label_28b730:
    // 0x28b730: 0x2cc640  .word       0x002CC640                   # sll         $t8, $t4, 25 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28b730u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 12), 25));
label_28b734:
    // 0x28b734: 0x2cc8b0  tge         $at, $t4, 802
    ctx->pc = 0x28b734u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 12)) { runtime->handleTrap(rdram, ctx); }
label_28b738:
    // 0x28b738: 0x2cc8d0  .word       0x002CC8D0                   # mfhi        $t9 # 002C00C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28b738u;
    SET_GPR_U64(ctx, 25, ctx->hi);
label_28b73c:
    // 0x28b73c: 0x2cc900  .word       0x002CC900                   # sll         $t9, $t4, 4 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28b73cu;
    SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 12), 4));
label_28b740:
    // 0x28b740: 0x2cc920  .word       0x002CC920                   # add         $t9, $at, $t4 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28b740u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 25, (int32_t)result);     } }
label_28b744:
    // 0x28b744: 0x2cc7a0  .word       0x002CC7A0                   # add         $t8, $at, $t4 # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28b744u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 24, (int32_t)result);     } }
label_28b748:
    // 0x28b748: 0x2cc950  .word       0x002CC950                   # mfhi        $t9 # 002C0140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28b748u;
    SET_GPR_U64(ctx, 25, ctx->hi);
label_28b74c:
    // 0x28b74c: 0x2cc970  tge         $at, $t4, 805
    ctx->pc = 0x28b74cu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 12)) { runtime->handleTrap(rdram, ctx); }
label_28b750:
    // 0x28b750: 0x2cc9a0  .word       0x002CC9A0                   # add         $t9, $at, $t4 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28b750u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 25, (int32_t)result);     } }
label_28b754:
    // 0x28b754: 0x2cc9b0  tge         $at, $t4, 806
    ctx->pc = 0x28b754u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 12)) { runtime->handleTrap(rdram, ctx); }
label_28b758:
    // 0x28b758: 0x2cc9d0  .word       0x002CC9D0                   # mfhi        $t9 # 002C01C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28b758u;
    SET_GPR_U64(ctx, 25, ctx->hi);
label_28b75c:
    // 0x28b75c: 0x2cca00  .word       0x002CCA00                   # sll         $t9, $t4, 8 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28b75cu;
    SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 12), 8));
label_28b760:
    // 0x28b760: 0x2cca30  tge         $at, $t4, 808
    ctx->pc = 0x28b760u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 12)) { runtime->handleTrap(rdram, ctx); }
label_28b764:
    // 0x28b764: 0x2cca60  .word       0x002CCA60                   # add         $t9, $at, $t4 # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28b764u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 25, (int32_t)result);     } }
label_28b768:
    // 0x28b768: 0x2ccaa0  .word       0x002CCAA0                   # add         $t9, $at, $t4 # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28b768u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 25, (int32_t)result);     } }
label_28b76c:
    // 0x28b76c: 0x2ccae0  .word       0x002CCAE0                   # add         $t9, $at, $t4 # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28b76cu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 25, (int32_t)result);     } }
label_28b770:
    // 0x28b770: 0x2ccb00  .word       0x002CCB00                   # sll         $t9, $t4, 12 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28b770u;
    SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 12), 12));
label_28b774:
    // 0x28b774: 0x2cc830  tge         $at, $t4, 800
    ctx->pc = 0x28b774u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 12)) { runtime->handleTrap(rdram, ctx); }
label_28b778:
    // 0x28b778: 0x2ccb20  .word       0x002CCB20                   # add         $t9, $at, $t4 # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28b778u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 25, (int32_t)result);     } }
label_28b77c:
    // 0x28b77c: 0x2ccb00  .word       0x002CCB00                   # sll         $t9, $t4, 12 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28b77cu;
    SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 12), 12));
label_28b780:
    // 0x28b780: 0x2ccb40  .word       0x002CCB40                   # sll         $t9, $t4, 13 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28b780u;
    SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 12), 13));
label_28b784:
    // 0x28b784: 0x2ccb70  tge         $at, $t4, 813
    ctx->pc = 0x28b784u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 12)) { runtime->handleTrap(rdram, ctx); }
label_28b788:
    // 0x28b788: 0x2ccba0  .word       0x002CCBA0                   # add         $t9, $at, $t4 # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28b788u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 25, (int32_t)result);     } }
label_28b78c:
    // 0x28b78c: 0x2cc5f0  tge         $at, $t4, 791
    ctx->pc = 0x28b78cu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 12)) { runtime->handleTrap(rdram, ctx); }
label_28b790:
    // 0x28b790: 0x2ccbc0  .word       0x002CCBC0                   # sll         $t9, $t4, 15 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28b790u;
    SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 12), 15));
label_28b794:
    // 0x28b794: 0x2cc720  .word       0x002CC720                   # add         $t8, $at, $t4 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28b794u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 24, (int32_t)result);     } }
label_28b798:
    // 0x28b798: 0x2ccbe0  .word       0x002CCBE0                   # add         $t9, $at, $t4 # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28b798u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 25, (int32_t)result);     } }
label_28b79c:
    // 0x28b79c: 0x2cc700  .word       0x002CC700                   # sll         $t8, $t4, 28 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28b79cu;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 12), 28));
label_28b7a0:
    // 0x28b7a0: 0x2ccc00  .word       0x002CCC00                   # sll         $t9, $t4, 16 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28b7a0u;
    SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 12), 16));
label_28b7a4:
    // 0x28b7a4: 0x2cc7a0  .word       0x002CC7A0                   # add         $t8, $at, $t4 # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28b7a4u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 24, (int32_t)result);     } }
label_28b7a8:
    // 0x28b7a8: 0x0  nop
    ctx->pc = 0x28b7a8u;
    // NOP
label_28b7ac:
    // 0x28b7ac: 0x0  nop
    ctx->pc = 0x28b7acu;
    // NOP
label_28b7b0:
    // 0x28b7b0: 0x740197  .word       0x00740197                   # dsrav       $zero, $s4, $v1 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28b7b0u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 20) >> (GPR_U32(ctx, 3) & 0x3F));
label_28b7b4:
    // 0x28b7b4: 0x4901a8  .word       0x004901A8                   # mfsa        $zero # 00490180 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x28b7b4u;
    SET_GPR_U32(ctx, 0, ctx->sa);
label_28b7b8:
    // 0x28b7b8: 0x88018a  .word       0x0088018A                   # movz        $zero, $a0, $t0 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28b7b8u;
    if (GPR_U64(ctx, 8) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 4));
label_28b7bc:
    // 0x28b7bc: 0x60019a  .word       0x0060019A                   # div         $zero, $v1, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28b7bcu;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_28b7c0:
    // 0x28b7c0: 0x7a022e  .word       0x007A022E                   # dsub        $zero, $v1, $k0 # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28b7c0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 3); int64_t b = (int64_t)GPR_S64(ctx, 26); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_28b7c4:
    // 0x28b7c4: 0x4701c8  .word       0x004701C8                   # jr          $v0 # 000701C0 <InstrIdType: CPU_SPECIAL>
label_28b7c8:
    if (ctx->pc == 0x28B7C8u) {
        ctx->pc = 0x28B7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B7C4u;
        // 0x28b7c8: 0x5f01b7  .word       0x005F01B7                   # INVALID     $v0, $ra, 0x1B7 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x28B7C8 raw=0x005F01B7"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B7CCu;
        goto label_28b7cc;
    }
    ctx->pc = 0x28B7C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = 0x28B7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B7C4u;
        // 0x28b7c8: 0x5f01b7  .word       0x005F01B7                   # INVALID     $v0, $ra, 0x1B7 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x28B7C8 raw=0x005F01B7"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28B7C4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x28B7CCu;
label_28b7cc:
    // 0x28b7cc: 0x93019e  .word       0x0093019E                   # ddiv        $zero, $a0, $s3 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28b7ccu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x28B7CC raw=0x0093019E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28b7d0:
    // 0x28b7d0: 0x9c01b8  .word       0x009C01B8                   # dsll        $zero, $gp, 6 # 00800000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28b7d0u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 28) << 6);
label_28b7d4:
    // 0x28b7d4: 0x8e0113  .word       0x008E0113                   # mtlo        $a0 # 000E0100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28b7d4u;
    ctx->lo = GPR_U64(ctx, 4);
label_28b7d8:
    // 0x28b7d8: 0x5a017c  .word       0x005A017C                   # dsll32      $zero, $k0, 5 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28b7d8u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 26) << (32 + 5));
label_28b7dc:
    // 0x28b7dc: 0x6601f1  tgeu        $v1, $a2, 7
    ctx->pc = 0x28b7dcu;
    if (GPR_U64(ctx, 3) >= GPR_U64(ctx, 6)) { runtime->handleTrap(rdram, ctx); }
label_28b7e0:
    // 0x28b7e0: 0x8101a7  .word       0x008101A7                   # nor         $zero, $a0, $at # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28b7e0u;
    SET_GPR_U64(ctx, 0, ~(GPR_U64(ctx, 4) | GPR_U64(ctx, 1)));
label_28b7e4:
    // 0x28b7e4: 0x6e013f  .word       0x006E013F                   # dsra32      $zero, $t6, 4 # 00600000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28b7e4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 14) >> (32 + 4));
label_28b7e8:
    // 0x28b7e8: 0xa2018e  .word       0x00A2018E                   # INVALID     $a1, $v0, 0x18E # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28b7e8u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x28B7E8 raw=0x00A2018E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28b7ec:
    // 0x28b7ec: 0xdb00f1  tgeu        $a2, $k1, 3
    ctx->pc = 0x28b7ecu;
    if (GPR_U64(ctx, 6) >= GPR_U64(ctx, 27)) { runtime->handleTrap(rdram, ctx); }
label_28b7f0:
    // 0x28b7f0: 0x4f013b  .word       0x004F013B                   # dsra        $zero, $t7, 4 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28b7f0u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 15) >> 4);
label_28b7f4:
    // 0x28b7f4: 0x9501e7  .word       0x009501E7                   # nor         $zero, $a0, $s5 # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28b7f4u;
    SET_GPR_U64(ctx, 0, ~(GPR_U64(ctx, 4) | GPR_U64(ctx, 21)));
label_28b7f8:
    // 0x28b7f8: 0x7d01f2  tlt         $v1, $sp, 7
    ctx->pc = 0x28b7f8u;
    if (GPR_S64(ctx, 3) < GPR_S64(ctx, 29)) { runtime->handleTrap(rdram, ctx); }
label_28b7fc:
    // 0x28b7fc: 0x5c014e  .word       0x005C014E                   # INVALID     $v0, $gp, 0x14E # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28b7fcu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x28B7FC raw=0x005C014E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28b800:
    // 0x28b800: 0x8101c8  .word       0x008101C8                   # jr          $a0 # 000101C0 <InstrIdType: CPU_SPECIAL>
label_28b804:
    if (ctx->pc == 0x28B804u) {
        ctx->pc = 0x28B804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B800u;
        // 0x28b804: 0x49017c  .word       0x0049017C                   # dsll32      $zero, $t1, 5 # 00400000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 0, GPR_U64(ctx, 9) << (32 + 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B808u;
        goto label_28b808;
    }
    ctx->pc = 0x28B800u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = 0x28B804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B800u;
        // 0x28b804: 0x49017c  .word       0x0049017C                   # dsll32      $zero, $t1, 5 # 00400000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 0, GPR_U64(ctx, 9) << (32 + 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28B800u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x28B808u;
label_28b808:
    // 0x28b808: 0xbe014e  .word       0x00BE014E                   # INVALID     $a1, $fp, 0x14E # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28b808u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x28B808 raw=0x00BE014E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28b80c:
    // 0x28b80c: 0x0  nop
    ctx->pc = 0x28b80cu;
    // NOP
label_28b810:
    // 0x28b810: 0x1000500  .word       0x01000500                   # sll         $zero, $zero, 20 # 01000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28b810u;
    
label_28b814:
    // 0x28b814: 0x1008000d  beq         $zero, $t0, . + 4 + (0xD << 2)
label_28b818:
    if (ctx->pc == 0x28B818u) {
        ctx->pc = 0x28B818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B814u;
        // 0x28b818: 0xf0700  sll         $zero, $t7, 28 (Delay Slot)
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B81Cu;
        goto label_28b81c;
    }
    ctx->pc = 0x28B814u;
    {
        const bool branch_taken_0x28b814 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 8));
        ctx->pc = 0x28B818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B814u;
        // 0x28b818: 0xf0700  sll         $zero, $t7, 28 (Delay Slot)
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b814) {
            ctx->pc = 0x28B84Cu;
            goto label_28b84c;
        }
    }
    ctx->pc = 0x28B81Cu;
label_28b81c:
    // 0x28b81c: 0x7000109  bltz        $t8, . + 4 + (0x109 << 2)
label_28b820:
    if (ctx->pc == 0x28B820u) {
        ctx->pc = 0x28B820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B81Cu;
        // 0x28b820: 0x70c000e  teqi        $t8, 0xE (Delay Slot)
        if (GPR_S64(ctx, 24) == (int64_t)(int32_t)14) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B824u;
        goto label_28b824;
    }
    ctx->pc = 0x28B81Cu;
    {
        const bool branch_taken_0x28b81c = (GPR_S32(ctx, 24) < 0);
        ctx->pc = 0x28B820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B81Cu;
        // 0x28b820: 0x70c000e  teqi        $t8, 0xE (Delay Slot)
        if (GPR_S64(ctx, 24) == (int64_t)(int32_t)14) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b81c) {
            ctx->pc = 0x28BC44u;
            { ctx->pc = 0x28bc44; return; }
        }
    }
    ctx->pc = 0x28B824u;
label_28b824:
    // 0x28b824: 0x70b00  sll         $at, $a3, 12
    ctx->pc = 0x28b824u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 7), 12));
label_28b828:
    // 0x28b828: 0xb0a070b  j           func_C281C2C
label_28b82c:
    if (ctx->pc == 0x28B82Cu) {
        ctx->pc = 0x28B82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B828u;
        // 0x28b82c: 0x7010011  bgez        $t8, . + 4 + (0x11 << 2) (Delay Slot)
        // REGIMM branch instruction to 0x28B874 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B830u;
        goto label_28b830;
    }
    ctx->pc = 0x28B828u;
    ctx->pc = 0x28B82Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B828u;
    // 0x28b82c: 0x7010011  bgez        $t8, . + 4 + (0x11 << 2) (Delay Slot)
    // REGIMM branch instruction to 0x28B874 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0xC281C2Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xC281C2Cu, 0x28B828u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x28B830u;
label_28b830:
    // 0x28b830: 0x30200  sll         $zero, $v1, 8
    ctx->pc = 0x28b830u;
    
label_28b834:
    // 0x28b834: 0x4030204  bgezl       $zero, . + 4 + (0x204 << 2)
label_28b838:
    if (ctx->pc == 0x28B838u) {
        ctx->pc = 0x28B838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B834u;
        // 0x28b838: 0x3040002  .word       0x03040002                   # srl         $zero, $a0, 0 # 03000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 4), 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B83Cu;
        goto label_28b83c;
    }
    ctx->pc = 0x28B834u;
    {
        const bool branch_taken_0x28b834 = (GPR_S32(ctx, 0) >= 0);
        if (branch_taken_0x28b834) {
            ctx->pc = 0x28B838u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28B834u;
            // 0x28b838: 0x3040002  .word       0x03040002                   # srl         $zero, $a0, 0 # 03000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
            SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 4), 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28C048u;
            { ctx->pc = 0x28c048; return; }
        }
    }
    ctx->pc = 0x28B83Cu;
label_28b83c:
    // 0x28b83c: 0x6030400  bgezl       $s0, . + 4 + (0x400 << 2)
label_28b840:
    if (ctx->pc == 0x28B840u) {
        ctx->pc = 0x28B840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B83Cu;
        // 0x28b840: 0x2000204  .word       0x02000204                   # sllv        $zero, $zero, $s0 # 00000200 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 16) & 0x1F));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B844u;
        goto label_28b844;
    }
    ctx->pc = 0x28B83Cu;
    {
        const bool branch_taken_0x28b83c = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x28b83c) {
            ctx->pc = 0x28B840u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28B83Cu;
            // 0x28b840: 0x2000204  .word       0x02000204                   # sllv        $zero, $zero, $s0 # 00000200 <InstrIdType: CPU_SPECIAL> (Delay Slot)
            SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 16) & 0x1F));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28C840u;
            { ctx->pc = 0x28c840; return; }
        }
    }
    ctx->pc = 0x28B844u;
label_28b844:
    // 0x28b844: 0x3020003  .word       0x03020003                   # sra         $zero, $v0, 0 # 03000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28b844u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 2), 0));
label_28b848:
    // 0x28b848: 0x20400  sll         $zero, $v0, 16
    ctx->pc = 0x28b848u;
    
label_28b84c:
    // 0x28b84c: 0x0  nop
    ctx->pc = 0x28b84cu;
    // NOP
label_28b850:
    // 0x28b850: 0x605  .word       0x00000605                   # INVALID     $zero, $zero, 0x605 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28b850u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x28B850 raw=0x00000605"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28b854:
    // 0x28b854: 0x6010d  break       6, 4
    ctx->pc = 0x28b854u;
    runtime->handleBreak(rdram, ctx);
label_28b858:
    // 0x28b858: 0x5  .word       0x00000005                   # INVALID     $zero, $zero, 0x5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28b858u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x28B858 raw=0x00000005"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28b85c:
    // 0x28b85c: 0xd  break       0
    ctx->pc = 0x28b85cu;
    runtime->handleBreak(rdram, ctx);
label_28b860:
    // 0x28b860: 0x6  srlv        $zero, $zero, $zero
    ctx->pc = 0x28b860u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_28b864:
    // 0x28b864: 0xe0d  break       0, 56
    ctx->pc = 0x28b864u;
    runtime->handleBreak(rdram, ctx);
label_28b868:
    // 0x28b868: 0x1516  .word       0x00001516                   # dsrlv       $v0, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28b868u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_28b86c:
    // 0x28b86c: 0x6050e0d  .word       0x06050E0D                   # INVALID     $s0, $a1, 0xE0D # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x28b86cu;
//     throw std::runtime_error("Unhandled REGIMM instruction: 0x5 at 0x28B86C raw=0x06050E0D");
 /* MITIGATED */
label_28b870:
    // 0x28b870: 0x6050d16  .word       0x06050D16                   # INVALID     $s0, $a1, 0xD16 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x28b870u;
//     throw std::runtime_error("Unhandled REGIMM instruction: 0x5 at 0x28B870 raw=0x06050D16");
 /* MITIGATED */
label_28b874:
    // 0x28b874: 0x6  srlv        $zero, $zero, $zero
    ctx->pc = 0x28b874u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_28b878:
    // 0x28b878: 0xd  break       0
    ctx->pc = 0x28b878u;
    runtime->handleBreak(rdram, ctx);
label_28b87c:
    // 0x28b87c: 0x60e0d  break       6, 56
    ctx->pc = 0x28b87cu;
    runtime->handleBreak(rdram, ctx);
label_28b880:
    // 0x28b880: 0xe  .word       0x0000000E                   # INVALID     $zero, $zero, 0xE # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28b880u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x28B880 raw=0x0000000E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28b884:
    // 0x28b884: 0xd  break       0
    ctx->pc = 0x28b884u;
    runtime->handleBreak(rdram, ctx);
label_28b888:
    // 0x28b888: 0x6050d  break       6, 20
    ctx->pc = 0x28b888u;
    runtime->handleBreak(rdram, ctx);
label_28b88c:
    // 0x28b88c: 0x605  .word       0x00000605                   # INVALID     $zero, $zero, 0x605 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28b88cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x28B88C raw=0x00000605"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28b890:
    // 0x28b890: 0xe  .word       0x0000000E                   # INVALID     $zero, $zero, 0xE # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28b890u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x28B890 raw=0x0000000E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28b894:
    // 0x28b894: 0x6  srlv        $zero, $zero, $zero
    ctx->pc = 0x28b894u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_28b898:
    // 0x28b898: 0x18170d  break       24, 92
    ctx->pc = 0x28b898u;
    runtime->handleBreak(rdram, ctx);
label_28b89c:
    // 0x28b89c: 0xe0d  break       0, 56
    ctx->pc = 0x28b89cu;
    runtime->handleBreak(rdram, ctx);
label_28b8a0:
    // 0x28b8a0: 0x5  .word       0x00000005                   # INVALID     $zero, $zero, 0x5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28b8a0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x28B8A0 raw=0x00000005"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28b8a4:
    // 0x28b8a4: 0xd  break       0
    ctx->pc = 0x28b8a4u;
    runtime->handleBreak(rdram, ctx);
label_28b8a8:
    // 0x28b8a8: 0x6  srlv        $zero, $zero, $zero
    ctx->pc = 0x28b8a8u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_28b8ac:
    // 0x28b8ac: 0x0  nop
    ctx->pc = 0x28b8acu;
    // NOP
label_28b8b0:
    // 0x28b8b0: 0xffffff00  sd          $ra, -0x100($ra)
    ctx->pc = 0x28b8b0u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967040), GPR_U64(ctx, 31));
label_28b8b4:
    // 0x28b8b4: 0xff01ffff  sd          $at, -0x1($t8)
    ctx->pc = 0x28b8b4u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 4294967295), GPR_U64(ctx, 1));
label_28b8b8:
    // 0x28b8b8: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x28b8b8u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_28b8bc:
    // 0x28b8bc: 0x4ffffff  .word       0x04FFFFFF                   # INVALID     $a3, $ra, -0x1 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x28b8bcu;
//     throw std::runtime_error("Unhandled REGIMM instruction: 0x1F at 0x28B8BC raw=0x04FFFFFF");
 /* MITIGATED */
label_28b8c0:
    // 0x28b8c0: 0xffff02ff  sd          $ra, 0x2FF($ra)
    ctx->pc = 0x28b8c0u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 767), GPR_U64(ctx, 31));
label_28b8c4:
    // 0x28b8c4: 0x30605  .word       0x00030605                   # INVALID     $zero, $v1, 0x605 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28b8c4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x28B8C4 raw=0x00030605"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28b8c8:
    // 0x28b8c8: 0x0  nop
    ctx->pc = 0x28b8c8u;
    // NOP
label_28b8cc:
    // 0x28b8cc: 0x0  nop
    ctx->pc = 0x28b8ccu;
    // NOP
label_28b8d0:
    // 0x28b8d0: 0x20  add         $zero, $zero, $zero
    ctx->pc = 0x28b8d0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_28b8d4:
    // 0x28b8d4: 0x20  add         $zero, $zero, $zero
    ctx->pc = 0x28b8d4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_28b8d8:
    // 0x28b8d8: 0x50  .word       0x00000050                   # mfhi        $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28b8d8u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_28b8dc:
    // 0x28b8dc: 0x38  dsll        $zero, $zero, 0
    ctx->pc = 0x28b8dcu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << 0);
label_28b8e0:
    // 0x28b8e0: 0x10  mfhi        $zero
    ctx->pc = 0x28b8e0u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_28b8e4:
    // 0x28b8e4: 0x18  mult        $zero, $zero, $zero
    ctx->pc = 0x28b8e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_28b8e8:
    // 0x28b8e8: 0x10  mfhi        $zero
    ctx->pc = 0x28b8e8u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_28b8ec:
    // 0x28b8ec: 0x38  dsll        $zero, $zero, 0
    ctx->pc = 0x28b8ecu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << 0);
label_28b8f0:
    // 0x28b8f0: 0x20  add         $zero, $zero, $zero
    ctx->pc = 0x28b8f0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_28b8f4:
    // 0x28b8f4: 0x30  tge         $zero, $zero, 0
    ctx->pc = 0x28b8f4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_28b8f8:
    // 0x28b8f8: 0x18  mult        $zero, $zero, $zero
    ctx->pc = 0x28b8f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_28b8fc:
    // 0x28b8fc: 0x10  mfhi        $zero
    ctx->pc = 0x28b8fcu;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_28b900:
    // 0x28b900: 0x30  tge         $zero, $zero, 0
    ctx->pc = 0x28b900u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_28b904:
    // 0x28b904: 0x18  mult        $zero, $zero, $zero
    ctx->pc = 0x28b904u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_28b908:
    // 0x28b908: 0x10  mfhi        $zero
    ctx->pc = 0x28b908u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_28b90c:
    // 0x28b90c: 0x30  tge         $zero, $zero, 0
    ctx->pc = 0x28b90cu;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_28b910:
    // 0x28b910: 0x18  mult        $zero, $zero, $zero
    ctx->pc = 0x28b910u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_28b914:
    // 0x28b914: 0x10  mfhi        $zero
    ctx->pc = 0x28b914u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_28b918:
    // 0x28b918: 0x30  tge         $zero, $zero, 0
    ctx->pc = 0x28b918u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_28b91c:
    // 0x28b91c: 0x18  mult        $zero, $zero, $zero
    ctx->pc = 0x28b91cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_28b920:
    // 0x28b920: 0x10  mfhi        $zero
    ctx->pc = 0x28b920u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_28b924:
    // 0x28b924: 0x30  tge         $zero, $zero, 0
    ctx->pc = 0x28b924u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_28b928:
    // 0x28b928: 0x18  mult        $zero, $zero, $zero
    ctx->pc = 0x28b928u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_28b92c:
    // 0x28b92c: 0x10  mfhi        $zero
    ctx->pc = 0x28b92cu;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_28b930:
    // 0x28b930: 0x0  nop
    ctx->pc = 0x28b930u;
    // NOP
label_28b934:
    // 0x28b934: 0x0  nop
    ctx->pc = 0x28b934u;
    // NOP
label_28b938:
    // 0x28b938: 0x0  nop
    ctx->pc = 0x28b938u;
    // NOP
label_28b93c:
    // 0x28b93c: 0x0  nop
    ctx->pc = 0x28b93cu;
    // NOP
label_28b940:
    // 0x28b940: 0x0  nop
    ctx->pc = 0x28b940u;
    // NOP
label_28b944:
    // 0x28b944: 0x40020000  mfc0        $v0, Index
    ctx->pc = 0x28b944u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_index);
label_28b948:
    // 0x28b948: 0x50000000  beql        $zero, $zero, . + 4 + (0x0 << 2)
label_28b94c:
    if (ctx->pc == 0x28B94Cu) {
        ctx->pc = 0x28B94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B948u;
        // 0x28b94c: 0x900  sll         $at, $zero, 4 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B950u;
        goto label_28b950;
    }
    ctx->pc = 0x28B948u;
    {
        const bool branch_taken_0x28b948 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28b948) {
            ctx->pc = 0x28B94Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28B948u;
            // 0x28b94c: 0x900  sll         $at, $zero, 4 (Delay Slot)
            SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28B94Cu;
            goto label_28b94c;
        }
    }
    ctx->pc = 0x28B950u;
label_28b950:
    // 0x28b950: 0x170014  dsllv       $zero, $s7, $zero
    ctx->pc = 0x28b950u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 23) << (GPR_U32(ctx, 0) & 0x3F));
label_28b954:
    // 0x28b954: 0x230000  .word       0x00230000                   # sll         $zero, $v1, 0 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28b954u;
    
label_28b958:
    // 0x28b958: 0xa00  sll         $at, $zero, 8
    ctx->pc = 0x28b958u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 8));
label_28b95c:
    // 0x28b95c: 0x0  nop
    ctx->pc = 0x28b95cu;
    // NOP
label_28b960:
    // 0x28b960: 0x42a00000  .word       0x42A00000                   # INVALID     $s5, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x28b960u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x15 at 0x28B960 raw=0x42A00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28b964:
    // 0x28b964: 0x41f00000  .word       0x41F00000                   # INVALID     $t7, $s0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x28b964u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xF at 0x28B964 raw=0x41F00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28b968:
    // 0x28b968: 0xa  movz        $zero, $zero, $zero
    ctx->pc = 0x28b968u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_28b96c:
    // 0x28b96c: 0xe  .word       0x0000000E                   # INVALID     $zero, $zero, 0xE # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28b96cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x28B96C raw=0x0000000E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28b970:
    // 0x28b970: 0x0  nop
    ctx->pc = 0x28b970u;
    // NOP
label_28b974:
    // 0x28b974: 0x40000000  mfc0        $zero, Index
    ctx->pc = 0x28b974u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_28b978:
    // 0x28b978: 0x14000000  bnez        $zero, . + 4 + (0x0 << 2)
label_28b97c:
    if (ctx->pc == 0x28B97Cu) {
        ctx->pc = 0x28B97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B978u;
        // 0x28b97c: 0x1d00  sll         $v1, $zero, 20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B980u;
        goto label_28b980;
    }
    ctx->pc = 0x28B978u;
    {
        const bool branch_taken_0x28b978 = (GPR_U64(ctx, 0) != GPR_U64(ctx, 0));
        ctx->pc = 0x28B97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B978u;
        // 0x28b97c: 0x1d00  sll         $v1, $zero, 20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b978) {
            ctx->pc = 0x28B97Cu;
            goto label_28b97c;
        }
    }
    ctx->pc = 0x28B980u;
label_28b980:
    // 0x28b980: 0x110014  dsllv       $zero, $s1, $zero
    ctx->pc = 0x28b980u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 17) << (GPR_U32(ctx, 0) & 0x3F));
label_28b984:
    // 0x28b984: 0x230000  .word       0x00230000                   # sll         $zero, $v1, 0 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28b984u;
    
label_28b988:
    // 0x28b988: 0xa00  sll         $at, $zero, 8
    ctx->pc = 0x28b988u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 8));
label_28b98c:
    // 0x28b98c: 0x0  nop
    ctx->pc = 0x28b98cu;
    // NOP
label_28b990:
    // 0x28b990: 0x42480000  .word       0x42480000                   # INVALID     $s2, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x28b990u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x12 at 0x28B990 raw=0x42480000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28b994:
    // 0x28b994: 0x42200000  .word       0x42200000                   # INVALID     $s1, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x28b994u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x11 at 0x28B994 raw=0x42200000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28b998:
    // 0x28b998: 0x1e  ddiv        $zero, $zero, $zero
    ctx->pc = 0x28b998u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x28B998 raw=0x0000001E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28b99c:
    // 0x28b99c: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x28b99cu;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_28b9a0:
    // 0x28b9a0: 0x0  nop
    ctx->pc = 0x28b9a0u;
    // NOP
label_28b9a4:
    // 0x28b9a4: 0x40000000  mfc0        $zero, Index
    ctx->pc = 0x28b9a4u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
    ctx->pc = 0x28b9a8u;
    return;
}
