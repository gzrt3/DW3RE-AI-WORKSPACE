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


void FUN_0017faa0_part352(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x22b0d0u: goto label_22b0d0;
        case 0x22b0d4u: goto label_22b0d4;
        case 0x22b0d8u: goto label_22b0d8;
        case 0x22b0dcu: goto label_22b0dc;
        case 0x22b0e0u: goto label_22b0e0;
        case 0x22b0e4u: goto label_22b0e4;
        case 0x22b0e8u: goto label_22b0e8;
        case 0x22b0ecu: goto label_22b0ec;
        case 0x22b0f0u: goto label_22b0f0;
        case 0x22b0f4u: goto label_22b0f4;
        case 0x22b0f8u: goto label_22b0f8;
        case 0x22b0fcu: goto label_22b0fc;
        case 0x22b100u: goto label_22b100;
        case 0x22b104u: goto label_22b104;
        case 0x22b108u: goto label_22b108;
        case 0x22b10cu: goto label_22b10c;
        case 0x22b110u: goto label_22b110;
        case 0x22b114u: goto label_22b114;
        case 0x22b118u: goto label_22b118;
        case 0x22b11cu: goto label_22b11c;
        case 0x22b120u: goto label_22b120;
        case 0x22b124u: goto label_22b124;
        case 0x22b128u: goto label_22b128;
        case 0x22b12cu: goto label_22b12c;
        case 0x22b130u: goto label_22b130;
        case 0x22b134u: goto label_22b134;
        case 0x22b138u: goto label_22b138;
        case 0x22b13cu: goto label_22b13c;
        case 0x22b140u: goto label_22b140;
        case 0x22b144u: goto label_22b144;
        case 0x22b148u: goto label_22b148;
        case 0x22b14cu: goto label_22b14c;
        case 0x22b150u: goto label_22b150;
        case 0x22b154u: goto label_22b154;
        case 0x22b158u: goto label_22b158;
        case 0x22b15cu: goto label_22b15c;
        case 0x22b160u: goto label_22b160;
        case 0x22b164u: goto label_22b164;
        case 0x22b168u: goto label_22b168;
        case 0x22b16cu: goto label_22b16c;
        case 0x22b170u: goto label_22b170;
        case 0x22b174u: goto label_22b174;
        case 0x22b178u: goto label_22b178;
        case 0x22b17cu: goto label_22b17c;
        case 0x22b180u: goto label_22b180;
        case 0x22b184u: goto label_22b184;
        case 0x22b188u: goto label_22b188;
        case 0x22b18cu: goto label_22b18c;
        case 0x22b190u: goto label_22b190;
        case 0x22b194u: goto label_22b194;
        case 0x22b198u: goto label_22b198;
        case 0x22b19cu: goto label_22b19c;
        case 0x22b1a0u: goto label_22b1a0;
        case 0x22b1a4u: goto label_22b1a4;
        case 0x22b1a8u: goto label_22b1a8;
        case 0x22b1acu: goto label_22b1ac;
        case 0x22b1b0u: goto label_22b1b0;
        case 0x22b1b4u: goto label_22b1b4;
        case 0x22b1b8u: goto label_22b1b8;
        case 0x22b1bcu: goto label_22b1bc;
        case 0x22b1c0u: goto label_22b1c0;
        case 0x22b1c4u: goto label_22b1c4;
        case 0x22b1c8u: goto label_22b1c8;
        case 0x22b1ccu: goto label_22b1cc;
        case 0x22b1d0u: goto label_22b1d0;
        case 0x22b1d4u: goto label_22b1d4;
        case 0x22b1d8u: goto label_22b1d8;
        case 0x22b1dcu: goto label_22b1dc;
        case 0x22b1e0u: goto label_22b1e0;
        case 0x22b1e4u: goto label_22b1e4;
        case 0x22b1e8u: goto label_22b1e8;
        case 0x22b1ecu: goto label_22b1ec;
        case 0x22b1f0u: goto label_22b1f0;
        case 0x22b1f4u: goto label_22b1f4;
        case 0x22b1f8u: goto label_22b1f8;
        case 0x22b1fcu: goto label_22b1fc;
        case 0x22b200u: goto label_22b200;
        case 0x22b204u: goto label_22b204;
        case 0x22b208u: goto label_22b208;
        case 0x22b20cu: goto label_22b20c;
        case 0x22b210u: goto label_22b210;
        case 0x22b214u: goto label_22b214;
        case 0x22b218u: goto label_22b218;
        case 0x22b21cu: goto label_22b21c;
        case 0x22b220u: goto label_22b220;
        case 0x22b224u: goto label_22b224;
        case 0x22b228u: goto label_22b228;
        case 0x22b22cu: goto label_22b22c;
        case 0x22b230u: goto label_22b230;
        case 0x22b234u: goto label_22b234;
        case 0x22b238u: goto label_22b238;
        case 0x22b23cu: goto label_22b23c;
        case 0x22b240u: goto label_22b240;
        case 0x22b244u: goto label_22b244;
        case 0x22b248u: goto label_22b248;
        case 0x22b24cu: goto label_22b24c;
        case 0x22b250u: goto label_22b250;
        case 0x22b254u: goto label_22b254;
        case 0x22b258u: goto label_22b258;
        case 0x22b25cu: goto label_22b25c;
        case 0x22b260u: goto label_22b260;
        case 0x22b264u: goto label_22b264;
        case 0x22b268u: goto label_22b268;
        case 0x22b26cu: goto label_22b26c;
        case 0x22b270u: goto label_22b270;
        case 0x22b274u: goto label_22b274;
        case 0x22b278u: goto label_22b278;
        case 0x22b27cu: goto label_22b27c;
        case 0x22b280u: goto label_22b280;
        case 0x22b284u: goto label_22b284;
        case 0x22b288u: goto label_22b288;
        case 0x22b28cu: goto label_22b28c;
        case 0x22b290u: goto label_22b290;
        case 0x22b294u: goto label_22b294;
        case 0x22b298u: goto label_22b298;
        case 0x22b29cu: goto label_22b29c;
        case 0x22b2a0u: goto label_22b2a0;
        case 0x22b2a4u: goto label_22b2a4;
        case 0x22b2a8u: goto label_22b2a8;
        case 0x22b2acu: goto label_22b2ac;
        case 0x22b2b0u: goto label_22b2b0;
        case 0x22b2b4u: goto label_22b2b4;
        case 0x22b2b8u: goto label_22b2b8;
        case 0x22b2bcu: goto label_22b2bc;
        case 0x22b2c0u: goto label_22b2c0;
        case 0x22b2c4u: goto label_22b2c4;
        case 0x22b2c8u: goto label_22b2c8;
        case 0x22b2ccu: goto label_22b2cc;
        case 0x22b2d0u: goto label_22b2d0;
        case 0x22b2d4u: goto label_22b2d4;
        case 0x22b2d8u: goto label_22b2d8;
        case 0x22b2dcu: goto label_22b2dc;
        case 0x22b2e0u: goto label_22b2e0;
        case 0x22b2e4u: goto label_22b2e4;
        case 0x22b2e8u: goto label_22b2e8;
        case 0x22b2ecu: goto label_22b2ec;
        case 0x22b2f0u: goto label_22b2f0;
        case 0x22b2f4u: goto label_22b2f4;
        case 0x22b2f8u: goto label_22b2f8;
        case 0x22b2fcu: goto label_22b2fc;
        case 0x22b300u: goto label_22b300;
        case 0x22b304u: goto label_22b304;
        case 0x22b308u: goto label_22b308;
        case 0x22b30cu: goto label_22b30c;
        case 0x22b310u: goto label_22b310;
        case 0x22b314u: goto label_22b314;
        case 0x22b318u: goto label_22b318;
        case 0x22b31cu: goto label_22b31c;
        case 0x22b320u: goto label_22b320;
        case 0x22b324u: goto label_22b324;
        case 0x22b328u: goto label_22b328;
        case 0x22b32cu: goto label_22b32c;
        case 0x22b330u: goto label_22b330;
        case 0x22b334u: goto label_22b334;
        case 0x22b338u: goto label_22b338;
        case 0x22b33cu: goto label_22b33c;
        case 0x22b340u: goto label_22b340;
        case 0x22b344u: goto label_22b344;
        case 0x22b348u: goto label_22b348;
        case 0x22b34cu: goto label_22b34c;
        case 0x22b350u: goto label_22b350;
        case 0x22b354u: goto label_22b354;
        case 0x22b358u: goto label_22b358;
        case 0x22b35cu: goto label_22b35c;
        case 0x22b360u: goto label_22b360;
        case 0x22b364u: goto label_22b364;
        case 0x22b368u: goto label_22b368;
        case 0x22b36cu: goto label_22b36c;
        case 0x22b370u: goto label_22b370;
        case 0x22b374u: goto label_22b374;
        case 0x22b378u: goto label_22b378;
        case 0x22b37cu: goto label_22b37c;
        case 0x22b380u: goto label_22b380;
        case 0x22b384u: goto label_22b384;
        case 0x22b388u: goto label_22b388;
        case 0x22b38cu: goto label_22b38c;
        case 0x22b390u: goto label_22b390;
        case 0x22b394u: goto label_22b394;
        case 0x22b398u: goto label_22b398;
        case 0x22b39cu: goto label_22b39c;
        case 0x22b3a0u: goto label_22b3a0;
        case 0x22b3a4u: goto label_22b3a4;
        case 0x22b3a8u: goto label_22b3a8;
        case 0x22b3acu: goto label_22b3ac;
        case 0x22b3b0u: goto label_22b3b0;
        case 0x22b3b4u: goto label_22b3b4;
        case 0x22b3b8u: goto label_22b3b8;
        case 0x22b3bcu: goto label_22b3bc;
        case 0x22b3c0u: goto label_22b3c0;
        case 0x22b3c4u: goto label_22b3c4;
        case 0x22b3c8u: goto label_22b3c8;
        case 0x22b3ccu: goto label_22b3cc;
        case 0x22b3d0u: goto label_22b3d0;
        case 0x22b3d4u: goto label_22b3d4;
        case 0x22b3d8u: goto label_22b3d8;
        case 0x22b3dcu: goto label_22b3dc;
        case 0x22b3e0u: goto label_22b3e0;
        case 0x22b3e4u: goto label_22b3e4;
        case 0x22b3e8u: goto label_22b3e8;
        case 0x22b3ecu: goto label_22b3ec;
        case 0x22b3f0u: goto label_22b3f0;
        case 0x22b3f4u: goto label_22b3f4;
        case 0x22b3f8u: goto label_22b3f8;
        case 0x22b3fcu: goto label_22b3fc;
        case 0x22b400u: goto label_22b400;
        case 0x22b404u: goto label_22b404;
        case 0x22b408u: goto label_22b408;
        case 0x22b40cu: goto label_22b40c;
        case 0x22b410u: goto label_22b410;
        case 0x22b414u: goto label_22b414;
        case 0x22b418u: goto label_22b418;
        case 0x22b41cu: goto label_22b41c;
        case 0x22b420u: goto label_22b420;
        case 0x22b424u: goto label_22b424;
        case 0x22b428u: goto label_22b428;
        case 0x22b42cu: goto label_22b42c;
        case 0x22b430u: goto label_22b430;
        case 0x22b434u: goto label_22b434;
        case 0x22b438u: goto label_22b438;
        case 0x22b43cu: goto label_22b43c;
        case 0x22b440u: goto label_22b440;
        case 0x22b444u: goto label_22b444;
        case 0x22b448u: goto label_22b448;
        case 0x22b44cu: goto label_22b44c;
        case 0x22b450u: goto label_22b450;
        case 0x22b454u: goto label_22b454;
        case 0x22b458u: goto label_22b458;
        case 0x22b45cu: goto label_22b45c;
        case 0x22b460u: goto label_22b460;
        case 0x22b464u: goto label_22b464;
        case 0x22b468u: goto label_22b468;
        case 0x22b46cu: goto label_22b46c;
        case 0x22b470u: goto label_22b470;
        case 0x22b474u: goto label_22b474;
        case 0x22b478u: goto label_22b478;
        case 0x22b47cu: goto label_22b47c;
        case 0x22b480u: goto label_22b480;
        case 0x22b484u: goto label_22b484;
        case 0x22b488u: goto label_22b488;
        case 0x22b48cu: goto label_22b48c;
        case 0x22b490u: goto label_22b490;
        case 0x22b494u: goto label_22b494;
        case 0x22b498u: goto label_22b498;
        case 0x22b49cu: goto label_22b49c;
        case 0x22b4a0u: goto label_22b4a0;
        case 0x22b4a4u: goto label_22b4a4;
        case 0x22b4a8u: goto label_22b4a8;
        case 0x22b4acu: goto label_22b4ac;
        case 0x22b4b0u: goto label_22b4b0;
        case 0x22b4b4u: goto label_22b4b4;
        case 0x22b4b8u: goto label_22b4b8;
        case 0x22b4bcu: goto label_22b4bc;
        case 0x22b4c0u: goto label_22b4c0;
        case 0x22b4c4u: goto label_22b4c4;
        case 0x22b4c8u: goto label_22b4c8;
        case 0x22b4ccu: goto label_22b4cc;
        case 0x22b4d0u: goto label_22b4d0;
        case 0x22b4d4u: goto label_22b4d4;
        case 0x22b4d8u: goto label_22b4d8;
        case 0x22b4dcu: goto label_22b4dc;
        case 0x22b4e0u: goto label_22b4e0;
        case 0x22b4e4u: goto label_22b4e4;
        case 0x22b4e8u: goto label_22b4e8;
        case 0x22b4ecu: goto label_22b4ec;
        case 0x22b4f0u: goto label_22b4f0;
        case 0x22b4f4u: goto label_22b4f4;
        case 0x22b4f8u: goto label_22b4f8;
        case 0x22b4fcu: goto label_22b4fc;
        case 0x22b500u: goto label_22b500;
        case 0x22b504u: goto label_22b504;
        case 0x22b508u: goto label_22b508;
        case 0x22b50cu: goto label_22b50c;
        case 0x22b510u: goto label_22b510;
        case 0x22b514u: goto label_22b514;
        case 0x22b518u: goto label_22b518;
        case 0x22b51cu: goto label_22b51c;
        case 0x22b520u: goto label_22b520;
        case 0x22b524u: goto label_22b524;
        case 0x22b528u: goto label_22b528;
        case 0x22b52cu: goto label_22b52c;
        case 0x22b530u: goto label_22b530;
        case 0x22b534u: goto label_22b534;
        case 0x22b538u: goto label_22b538;
        case 0x22b53cu: goto label_22b53c;
        case 0x22b540u: goto label_22b540;
        case 0x22b544u: goto label_22b544;
        case 0x22b548u: goto label_22b548;
        case 0x22b54cu: goto label_22b54c;
        case 0x22b550u: goto label_22b550;
        case 0x22b554u: goto label_22b554;
        case 0x22b558u: goto label_22b558;
        case 0x22b55cu: goto label_22b55c;
        case 0x22b560u: goto label_22b560;
        case 0x22b564u: goto label_22b564;
        case 0x22b568u: goto label_22b568;
        case 0x22b56cu: goto label_22b56c;
        case 0x22b570u: goto label_22b570;
        case 0x22b574u: goto label_22b574;
        case 0x22b578u: goto label_22b578;
        case 0x22b57cu: goto label_22b57c;
        case 0x22b580u: goto label_22b580;
        case 0x22b584u: goto label_22b584;
        case 0x22b588u: goto label_22b588;
        case 0x22b58cu: goto label_22b58c;
        case 0x22b590u: goto label_22b590;
        case 0x22b594u: goto label_22b594;
        case 0x22b598u: goto label_22b598;
        case 0x22b59cu: goto label_22b59c;
        case 0x22b5a0u: goto label_22b5a0;
        case 0x22b5a4u: goto label_22b5a4;
        case 0x22b5a8u: goto label_22b5a8;
        case 0x22b5acu: goto label_22b5ac;
        case 0x22b5b0u: goto label_22b5b0;
        case 0x22b5b4u: goto label_22b5b4;
        case 0x22b5b8u: goto label_22b5b8;
        case 0x22b5bcu: goto label_22b5bc;
        case 0x22b5c0u: goto label_22b5c0;
        case 0x22b5c4u: goto label_22b5c4;
        case 0x22b5c8u: goto label_22b5c8;
        case 0x22b5ccu: goto label_22b5cc;
        case 0x22b5d0u: goto label_22b5d0;
        case 0x22b5d4u: goto label_22b5d4;
        case 0x22b5d8u: goto label_22b5d8;
        case 0x22b5dcu: goto label_22b5dc;
        case 0x22b5e0u: goto label_22b5e0;
        case 0x22b5e4u: goto label_22b5e4;
        case 0x22b5e8u: goto label_22b5e8;
        case 0x22b5ecu: goto label_22b5ec;
        case 0x22b5f0u: goto label_22b5f0;
        case 0x22b5f4u: goto label_22b5f4;
        case 0x22b5f8u: goto label_22b5f8;
        case 0x22b5fcu: goto label_22b5fc;
        case 0x22b600u: goto label_22b600;
        case 0x22b604u: goto label_22b604;
        case 0x22b608u: goto label_22b608;
        case 0x22b60cu: goto label_22b60c;
        case 0x22b610u: goto label_22b610;
        case 0x22b614u: goto label_22b614;
        case 0x22b618u: goto label_22b618;
        case 0x22b61cu: goto label_22b61c;
        case 0x22b620u: goto label_22b620;
        case 0x22b624u: goto label_22b624;
        case 0x22b628u: goto label_22b628;
        case 0x22b62cu: goto label_22b62c;
        case 0x22b630u: goto label_22b630;
        case 0x22b634u: goto label_22b634;
        case 0x22b638u: goto label_22b638;
        case 0x22b63cu: goto label_22b63c;
        case 0x22b640u: goto label_22b640;
        case 0x22b644u: goto label_22b644;
        case 0x22b648u: goto label_22b648;
        case 0x22b64cu: goto label_22b64c;
        case 0x22b650u: goto label_22b650;
        case 0x22b654u: goto label_22b654;
        case 0x22b658u: goto label_22b658;
        case 0x22b65cu: goto label_22b65c;
        case 0x22b660u: goto label_22b660;
        case 0x22b664u: goto label_22b664;
        case 0x22b668u: goto label_22b668;
        case 0x22b66cu: goto label_22b66c;
        case 0x22b670u: goto label_22b670;
        case 0x22b674u: goto label_22b674;
        case 0x22b678u: goto label_22b678;
        case 0x22b67cu: goto label_22b67c;
        case 0x22b680u: goto label_22b680;
        case 0x22b684u: goto label_22b684;
        case 0x22b688u: goto label_22b688;
        case 0x22b68cu: goto label_22b68c;
        case 0x22b690u: goto label_22b690;
        case 0x22b694u: goto label_22b694;
        case 0x22b698u: goto label_22b698;
        case 0x22b69cu: goto label_22b69c;
        case 0x22b6a0u: goto label_22b6a0;
        case 0x22b6a4u: goto label_22b6a4;
        case 0x22b6a8u: goto label_22b6a8;
        case 0x22b6acu: goto label_22b6ac;
        case 0x22b6b0u: goto label_22b6b0;
        case 0x22b6b4u: goto label_22b6b4;
        case 0x22b6b8u: goto label_22b6b8;
        case 0x22b6bcu: goto label_22b6bc;
        case 0x22b6c0u: goto label_22b6c0;
        case 0x22b6c4u: goto label_22b6c4;
        case 0x22b6c8u: goto label_22b6c8;
        case 0x22b6ccu: goto label_22b6cc;
        case 0x22b6d0u: goto label_22b6d0;
        case 0x22b6d4u: goto label_22b6d4;
        case 0x22b6d8u: goto label_22b6d8;
        case 0x22b6dcu: goto label_22b6dc;
        case 0x22b6e0u: goto label_22b6e0;
        case 0x22b6e4u: goto label_22b6e4;
        case 0x22b6e8u: goto label_22b6e8;
        case 0x22b6ecu: goto label_22b6ec;
        case 0x22b6f0u: goto label_22b6f0;
        case 0x22b6f4u: goto label_22b6f4;
        case 0x22b6f8u: goto label_22b6f8;
        case 0x22b6fcu: goto label_22b6fc;
        case 0x22b700u: goto label_22b700;
        case 0x22b704u: goto label_22b704;
        case 0x22b708u: goto label_22b708;
        case 0x22b70cu: goto label_22b70c;
        case 0x22b710u: goto label_22b710;
        case 0x22b714u: goto label_22b714;
        case 0x22b718u: goto label_22b718;
        case 0x22b71cu: goto label_22b71c;
        case 0x22b720u: goto label_22b720;
        case 0x22b724u: goto label_22b724;
        case 0x22b728u: goto label_22b728;
        case 0x22b72cu: goto label_22b72c;
        case 0x22b730u: goto label_22b730;
        case 0x22b734u: goto label_22b734;
        case 0x22b738u: goto label_22b738;
        case 0x22b73cu: goto label_22b73c;
        case 0x22b740u: goto label_22b740;
        case 0x22b744u: goto label_22b744;
        case 0x22b748u: goto label_22b748;
        case 0x22b74cu: goto label_22b74c;
        case 0x22b750u: goto label_22b750;
        case 0x22b754u: goto label_22b754;
        case 0x22b758u: goto label_22b758;
        case 0x22b75cu: goto label_22b75c;
        case 0x22b760u: goto label_22b760;
        case 0x22b764u: goto label_22b764;
        case 0x22b768u: goto label_22b768;
        case 0x22b76cu: goto label_22b76c;
        case 0x22b770u: goto label_22b770;
        case 0x22b774u: goto label_22b774;
        case 0x22b778u: goto label_22b778;
        case 0x22b77cu: goto label_22b77c;
        case 0x22b780u: goto label_22b780;
        case 0x22b784u: goto label_22b784;
        case 0x22b788u: goto label_22b788;
        case 0x22b78cu: goto label_22b78c;
        case 0x22b790u: goto label_22b790;
        case 0x22b794u: goto label_22b794;
        case 0x22b798u: goto label_22b798;
        case 0x22b79cu: goto label_22b79c;
        case 0x22b7a0u: goto label_22b7a0;
        case 0x22b7a4u: goto label_22b7a4;
        case 0x22b7a8u: goto label_22b7a8;
        case 0x22b7acu: goto label_22b7ac;
        case 0x22b7b0u: goto label_22b7b0;
        case 0x22b7b4u: goto label_22b7b4;
        case 0x22b7b8u: goto label_22b7b8;
        case 0x22b7bcu: goto label_22b7bc;
        case 0x22b7c0u: goto label_22b7c0;
        case 0x22b7c4u: goto label_22b7c4;
        case 0x22b7c8u: goto label_22b7c8;
        case 0x22b7ccu: goto label_22b7cc;
        case 0x22b7d0u: goto label_22b7d0;
        case 0x22b7d4u: goto label_22b7d4;
        case 0x22b7d8u: goto label_22b7d8;
        case 0x22b7dcu: goto label_22b7dc;
        case 0x22b7e0u: goto label_22b7e0;
        case 0x22b7e4u: goto label_22b7e4;
        case 0x22b7e8u: goto label_22b7e8;
        case 0x22b7ecu: goto label_22b7ec;
        case 0x22b7f0u: goto label_22b7f0;
        case 0x22b7f4u: goto label_22b7f4;
        case 0x22b7f8u: goto label_22b7f8;
        case 0x22b7fcu: goto label_22b7fc;
        case 0x22b800u: goto label_22b800;
        case 0x22b804u: goto label_22b804;
        case 0x22b808u: goto label_22b808;
        case 0x22b80cu: goto label_22b80c;
        case 0x22b810u: goto label_22b810;
        case 0x22b814u: goto label_22b814;
        case 0x22b818u: goto label_22b818;
        case 0x22b81cu: goto label_22b81c;
        case 0x22b820u: goto label_22b820;
        case 0x22b824u: goto label_22b824;
        case 0x22b828u: goto label_22b828;
        case 0x22b82cu: goto label_22b82c;
        case 0x22b830u: goto label_22b830;
        case 0x22b834u: goto label_22b834;
        case 0x22b838u: goto label_22b838;
        case 0x22b83cu: goto label_22b83c;
        case 0x22b840u: goto label_22b840;
        case 0x22b844u: goto label_22b844;
        case 0x22b848u: goto label_22b848;
        case 0x22b84cu: goto label_22b84c;
        case 0x22b850u: goto label_22b850;
        case 0x22b854u: goto label_22b854;
        case 0x22b858u: goto label_22b858;
        case 0x22b85cu: goto label_22b85c;
        case 0x22b860u: goto label_22b860;
        case 0x22b864u: goto label_22b864;
        case 0x22b868u: goto label_22b868;
        case 0x22b86cu: goto label_22b86c;
        case 0x22b870u: goto label_22b870;
        case 0x22b874u: goto label_22b874;
        case 0x22b878u: goto label_22b878;
        case 0x22b87cu: goto label_22b87c;
        case 0x22b880u: goto label_22b880;
        case 0x22b884u: goto label_22b884;
        case 0x22b888u: goto label_22b888;
        case 0x22b88cu: goto label_22b88c;
        case 0x22b890u: goto label_22b890;
        case 0x22b894u: goto label_22b894;
        case 0x22b898u: goto label_22b898;
        case 0x22b89cu: goto label_22b89c;
        default: return;
    }

label_22b0d0:
    // 0x22b0d0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x22b0d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_22b0d4:
    // 0x22b0d4: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x22b0d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
label_22b0d8:
    // 0x22b0d8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x22b0d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_22b0dc:
    // 0x22b0dc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x22b0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_22b0e0:
    // 0x22b0e0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x22b0e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_22b0e4:
    // 0x22b0e4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x22b0e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_22b0e8:
    // 0x22b0e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x22b0e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_22b0ec:
    // 0x22b0ec: 0x9023a3ea  lbu         $v1, -0x5C16($at)
    ctx->pc = 0x22b0ecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294943722)));
label_22b0f0:
    // 0x22b0f0: 0x8c90005c  lw          $s0, 0x5C($a0)
    ctx->pc = 0x22b0f0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
label_22b0f4:
    // 0x22b0f4: 0x8c910060  lw          $s1, 0x60($a0)
    ctx->pc = 0x22b0f4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
label_22b0f8:
    // 0x22b0f8: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_22b0fc:
    if (ctx->pc == 0x22B0FCu) {
        ctx->pc = 0x22B0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B0F8u;
        // 0x22b0fc: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B100u;
        goto label_22b100;
    }
    ctx->pc = 0x22B0F8u;
    {
        const bool branch_taken_0x22b0f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x22B0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B0F8u;
        // 0x22b0fc: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b0f8) {
            ctx->pc = 0x22B108u;
            goto label_22b108;
        }
    }
    ctx->pc = 0x22B100u;
label_22b100:
    // 0x22b100: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
label_22b104:
    if (ctx->pc == 0x22B104u) {
        ctx->pc = 0x22B104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B100u;
        // 0x22b104: 0x26040040  addiu       $a0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B108u;
        goto label_22b108;
    }
    ctx->pc = 0x22B100u;
    {
        const bool branch_taken_0x22b100 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x22B104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B100u;
        // 0x22b104: 0x26040040  addiu       $a0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b100) {
            ctx->pc = 0x22B118u;
            goto label_22b118;
        }
    }
    ctx->pc = 0x22B108u;
label_22b108:
    // 0x22b108: 0xc0591f4  jal         func_1647D0
label_22b10c:
    if (ctx->pc == 0x22B10Cu) {
        ctx->pc = 0x22B10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B108u;
        // 0x22b10c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B110u;
        goto label_22b110;
    }
    ctx->pc = 0x22B108u;
    SET_GPR_U32(ctx, 31, 0x22B110u);
    ctx->pc = 0x22B10Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B108u;
    // 0x22b10c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1647D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1647D0u, 0x22B108u, 0x22B110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B110u;
label_22b110:
    // 0x22b110: 0x10000077  b           . + 4 + (0x77 << 2)
label_22b114:
    if (ctx->pc == 0x22B114u) {
        ctx->pc = 0x22B114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B110u;
        // 0x22b114: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B118u;
        goto label_22b118;
    }
    ctx->pc = 0x22B110u;
    {
        const bool branch_taken_0x22b110 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B110u;
        // 0x22b114: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b110) {
            ctx->pc = 0x22B2F0u;
            goto label_22b2f0;
        }
    }
    ctx->pc = 0x22B118u;
label_22b118:
    // 0x22b118: 0x26460020  addiu       $a2, $s2, 0x20
    ctx->pc = 0x22b118u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
label_22b11c:
    // 0x22b11c: 0xc066e02  jal         func_19B808
label_22b120:
    if (ctx->pc == 0x22B120u) {
        ctx->pc = 0x22B120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B11Cu;
        // 0x22b120: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B124u;
        goto label_22b124;
    }
    ctx->pc = 0x22B11Cu;
    SET_GPR_U32(ctx, 31, 0x22B124u);
    ctx->pc = 0x22B120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B11Cu;
    // 0x22b120: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B808u;
    { ctx->pc = 0x19b808; return; }
    ctx->pc = 0x22B124u;
label_22b124:
    // 0x22b124: 0x26040060  addiu       $a0, $s0, 0x60
    ctx->pc = 0x22b124u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
label_22b128:
    // 0x22b128: 0x26460020  addiu       $a2, $s2, 0x20
    ctx->pc = 0x22b128u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
label_22b12c:
    // 0x22b12c: 0xc066e02  jal         func_19B808
label_22b130:
    if (ctx->pc == 0x22B130u) {
        ctx->pc = 0x22B130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B12Cu;
        // 0x22b130: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B134u;
        goto label_22b134;
    }
    ctx->pc = 0x22B12Cu;
    SET_GPR_U32(ctx, 31, 0x22B134u);
    ctx->pc = 0x22B130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B12Cu;
    // 0x22b130: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B808u;
    { ctx->pc = 0x19b808; return; }
    ctx->pc = 0x22B134u;
label_22b134:
    // 0x22b134: 0x26040070  addiu       $a0, $s0, 0x70
    ctx->pc = 0x22b134u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
label_22b138:
    // 0x22b138: 0x26460020  addiu       $a2, $s2, 0x20
    ctx->pc = 0x22b138u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
label_22b13c:
    // 0x22b13c: 0xc066e02  jal         func_19B808
label_22b140:
    if (ctx->pc == 0x22B140u) {
        ctx->pc = 0x22B140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B13Cu;
        // 0x22b140: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B144u;
        goto label_22b144;
    }
    ctx->pc = 0x22B13Cu;
    SET_GPR_U32(ctx, 31, 0x22B144u);
    ctx->pc = 0x22B140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B13Cu;
    // 0x22b140: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B808u;
    { ctx->pc = 0x19b808; return; }
    ctx->pc = 0x22B144u;
label_22b144:
    // 0x22b144: 0xc6430024  lwc1        $f3, 0x24($s2)
    ctx->pc = 0x22b144u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_22b148:
    // 0x22b148: 0x3c023e89  lui         $v0, 0x3E89
    ctx->pc = 0x22b148u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16009 << 16));
label_22b14c:
    // 0x22b14c: 0x34431870  ori         $v1, $v0, 0x1870
    ctx->pc = 0x22b14cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6256);
label_22b150:
    // 0x22b150: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x22b150u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_22b154:
    // 0x22b154: 0x3c023c8e  lui         $v0, 0x3C8E
    ctx->pc = 0x22b154u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15502 << 16));
label_22b158:
    // 0x22b158: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x22b158u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
label_22b15c:
    // 0x22b15c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x22b15cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_22b160:
    // 0x22b160: 0x46021880  add.s       $f2, $f3, $f2
    ctx->pc = 0x22b160u;
    ctx->f[2] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
label_22b164:
    // 0x22b164: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x22b164u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_22b168:
    // 0x22b168: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x22b168u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_22b16c:
    // 0x22b16c: 0xe6420024  swc1        $f2, 0x24($s2)
    ctx->pc = 0x22b16cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 36), bits); }
label_22b170:
    // 0x22b170: 0xc6020058  lwc1        $f2, 0x58($s0)
    ctx->pc = 0x22b170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_22b174:
    // 0x22b174: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22b174u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22b178:
    // 0x22b178: 0x0  nop
    ctx->pc = 0x22b178u;
    // NOP
label_22b17c:
    // 0x22b17c: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x22b17cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_22b180:
    // 0x22b180: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x22b180u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_22b184:
    // 0x22b184: 0x0  nop
    ctx->pc = 0x22b184u;
    // NOP
label_22b188:
    // 0x22b188: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_22b18c:
    if (ctx->pc == 0x22B18Cu) {
        ctx->pc = 0x22B18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B188u;
        // 0x22b18c: 0xe6010058  swc1        $f1, 0x58($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B190u;
        goto label_22b190;
    }
    ctx->pc = 0x22B188u;
    {
        const bool branch_taken_0x22b188 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x22B18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B188u;
        // 0x22b18c: 0xe6010058  swc1        $f1, 0x58($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b188) {
            ctx->pc = 0x22B1A4u;
            goto label_22b1a4;
        }
    }
    ctx->pc = 0x22B190u;
label_22b190:
    // 0x22b190: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x22b190u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_22b194:
    // 0x22b194: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x22b194u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_22b198:
    // 0x22b198: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22b198u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22b19c:
    // 0x22b19c: 0x1000000d  b           . + 4 + (0xD << 2)
label_22b1a0:
    if (ctx->pc == 0x22B1A0u) {
        ctx->pc = 0x22B1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B19Cu;
        // 0x22b1a0: 0x46000841  sub.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B1A4u;
        goto label_22b1a4;
    }
    ctx->pc = 0x22B19Cu;
    {
        const bool branch_taken_0x22b19c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B19Cu;
        // 0x22b1a0: 0x46000841  sub.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b19c) {
            ctx->pc = 0x22B1D4u;
            goto label_22b1d4;
        }
    }
    ctx->pc = 0x22B1A4u;
label_22b1a4:
    // 0x22b1a4: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x22b1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
label_22b1a8:
    // 0x22b1a8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x22b1a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_22b1ac:
    // 0x22b1ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22b1acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22b1b0:
    // 0x22b1b0: 0x0  nop
    ctx->pc = 0x22b1b0u;
    // NOP
label_22b1b4:
    // 0x22b1b4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x22b1b4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_22b1b8:
    // 0x22b1b8: 0x0  nop
    ctx->pc = 0x22b1b8u;
    // NOP
label_22b1bc:
    // 0x22b1bc: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_22b1c0:
    if (ctx->pc == 0x22B1C0u) {
        ctx->pc = 0x22B1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B1BCu;
        // 0x22b1c0: 0x3c0240c9  lui         $v0, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B1C4u;
        goto label_22b1c4;
    }
    ctx->pc = 0x22B1BCu;
    {
        const bool branch_taken_0x22b1bc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x22B1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B1BCu;
        // 0x22b1c0: 0x3c0240c9  lui         $v0, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b1bc) {
            ctx->pc = 0x22B1D4u;
            goto label_22b1d4;
        }
    }
    ctx->pc = 0x22B1C4u;
label_22b1c4:
    // 0x22b1c4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x22b1c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_22b1c8:
    // 0x22b1c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22b1c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22b1cc:
    // 0x22b1cc: 0x10000001  b           . + 4 + (0x1 << 2)
label_22b1d0:
    if (ctx->pc == 0x22B1D0u) {
        ctx->pc = 0x22B1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B1CCu;
        // 0x22b1d0: 0x46010040  add.s       $f1, $f0, $f1 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B1D4u;
        goto label_22b1d4;
    }
    ctx->pc = 0x22B1CCu;
    {
        const bool branch_taken_0x22b1cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B1CCu;
        // 0x22b1d0: 0x46010040  add.s       $f1, $f0, $f1 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b1cc) {
            ctx->pc = 0x22B1D4u;
            goto label_22b1d4;
        }
    }
    ctx->pc = 0x22B1D4u;
label_22b1d4:
    // 0x22b1d4: 0xe6010058  swc1        $f1, 0x58($s0)
    ctx->pc = 0x22b1d4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
label_22b1d8:
    // 0x22b1d8: 0x26030050  addiu       $v1, $s0, 0x50
    ctx->pc = 0x22b1d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
label_22b1dc:
    // 0x22b1dc: 0x26020040  addiu       $v0, $s0, 0x40
    ctx->pc = 0x22b1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
label_22b1e0:
    // 0x22b1e0: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x22b1e0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_22b1e4:
    // 0x22b1e4: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x22b1e4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_22b1e8:
    // 0x22b1e8: 0x4a0002b8  vcallms     0x50
    ctx->pc = 0x22b1e8u;
    {     ctx->vu0_tpc = 0x50;     runtime->executeVU0Microprogram(rdram, ctx, 0x50); }
label_22b1ec:
    // 0x22b1ec: 0x48290801  qmfc2.i     $t1, $vf1
    ctx->pc = 0x22b1ecu;
    SET_GPR_VEC(ctx, 9, _mm_castps_si128(ctx->vu0_vf[1]));
label_22b1f0:
    // 0x22b1f0: 0xfa100000  sqc2        $vf16, 0x0($s0)
    ctx->pc = 0x22b1f0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[16]));
label_22b1f4:
    // 0x22b1f4: 0xfa110010  sqc2        $vf17, 0x10($s0)
    ctx->pc = 0x22b1f4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[17]));
label_22b1f8:
    // 0x22b1f8: 0xfa120020  sqc2        $vf18, 0x20($s0)
    ctx->pc = 0x22b1f8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[18]));
label_22b1fc:
    // 0x22b1fc: 0xfa130030  sqc2        $vf19, 0x30($s0)
    ctx->pc = 0x22b1fcu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), _mm_castps_si128(ctx->vu0_vf[19]));
label_22b200:
    // 0x22b200: 0x26240040  addiu       $a0, $s1, 0x40
    ctx->pc = 0x22b200u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
label_22b204:
    // 0x22b204: 0x26460020  addiu       $a2, $s2, 0x20
    ctx->pc = 0x22b204u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
label_22b208:
    // 0x22b208: 0xc066e02  jal         func_19B808
label_22b20c:
    if (ctx->pc == 0x22B20Cu) {
        ctx->pc = 0x22B20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B208u;
        // 0x22b20c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B210u;
        goto label_22b210;
    }
    ctx->pc = 0x22B208u;
    SET_GPR_U32(ctx, 31, 0x22B210u);
    ctx->pc = 0x22B20Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B208u;
    // 0x22b20c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B808u;
    { ctx->pc = 0x19b808; return; }
    ctx->pc = 0x22B210u;
label_22b210:
    // 0x22b210: 0x26240060  addiu       $a0, $s1, 0x60
    ctx->pc = 0x22b210u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
label_22b214:
    // 0x22b214: 0x26460020  addiu       $a2, $s2, 0x20
    ctx->pc = 0x22b214u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
label_22b218:
    // 0x22b218: 0xc066e02  jal         func_19B808
label_22b21c:
    if (ctx->pc == 0x22B21Cu) {
        ctx->pc = 0x22B21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B218u;
        // 0x22b21c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B220u;
        goto label_22b220;
    }
    ctx->pc = 0x22B218u;
    SET_GPR_U32(ctx, 31, 0x22B220u);
    ctx->pc = 0x22B21Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B218u;
    // 0x22b21c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B808u;
    { ctx->pc = 0x19b808; return; }
    ctx->pc = 0x22B220u;
label_22b220:
    // 0x22b220: 0x26240070  addiu       $a0, $s1, 0x70
    ctx->pc = 0x22b220u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
label_22b224:
    // 0x22b224: 0x26460020  addiu       $a2, $s2, 0x20
    ctx->pc = 0x22b224u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
label_22b228:
    // 0x22b228: 0xc066e02  jal         func_19B808
label_22b22c:
    if (ctx->pc == 0x22B22Cu) {
        ctx->pc = 0x22B22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B228u;
        // 0x22b22c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B230u;
        goto label_22b230;
    }
    ctx->pc = 0x22B228u;
    SET_GPR_U32(ctx, 31, 0x22B230u);
    ctx->pc = 0x22B22Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B228u;
    // 0x22b22c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B808u;
    { ctx->pc = 0x19b808; return; }
    ctx->pc = 0x22B230u;
label_22b230:
    // 0x22b230: 0xc6430024  lwc1        $f3, 0x24($s2)
    ctx->pc = 0x22b230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_22b234:
    // 0x22b234: 0x3c033e89  lui         $v1, 0x3E89
    ctx->pc = 0x22b234u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16009 << 16));
label_22b238:
    // 0x22b238: 0x34641870  ori         $a0, $v1, 0x1870
    ctx->pc = 0x22b238u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)6256);
label_22b23c:
    // 0x22b23c: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x22b23cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_22b240:
    // 0x22b240: 0x3c033c8e  lui         $v1, 0x3C8E
    ctx->pc = 0x22b240u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15502 << 16));
label_22b244:
    // 0x22b244: 0x3463fa35  ori         $v1, $v1, 0xFA35
    ctx->pc = 0x22b244u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64053);
label_22b248:
    // 0x22b248: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x22b248u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_22b24c:
    // 0x22b24c: 0x46021880  add.s       $f2, $f3, $f2
    ctx->pc = 0x22b24cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
label_22b250:
    // 0x22b250: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x22b250u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
label_22b254:
    // 0x22b254: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x22b254u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_22b258:
    // 0x22b258: 0xe6420024  swc1        $f2, 0x24($s2)
    ctx->pc = 0x22b258u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 36), bits); }
label_22b25c:
    // 0x22b25c: 0xc6220058  lwc1        $f2, 0x58($s1)
    ctx->pc = 0x22b25cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_22b260:
    // 0x22b260: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x22b260u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22b264:
    // 0x22b264: 0x0  nop
    ctx->pc = 0x22b264u;
    // NOP
label_22b268:
    // 0x22b268: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x22b268u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_22b26c:
    // 0x22b26c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x22b26cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_22b270:
    // 0x22b270: 0x0  nop
    ctx->pc = 0x22b270u;
    // NOP
label_22b274:
    // 0x22b274: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_22b278:
    if (ctx->pc == 0x22B278u) {
        ctx->pc = 0x22B278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B274u;
        // 0x22b278: 0xe6210058  swc1        $f1, 0x58($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 88), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B27Cu;
        goto label_22b27c;
    }
    ctx->pc = 0x22B274u;
    {
        const bool branch_taken_0x22b274 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x22B278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B274u;
        // 0x22b278: 0xe6210058  swc1        $f1, 0x58($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 88), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b274) {
            ctx->pc = 0x22B290u;
            goto label_22b290;
        }
    }
    ctx->pc = 0x22B27Cu;
label_22b27c:
    // 0x22b27c: 0x3c0340c9  lui         $v1, 0x40C9
    ctx->pc = 0x22b27cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
label_22b280:
    // 0x22b280: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x22b280u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_22b284:
    // 0x22b284: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x22b284u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22b288:
    // 0x22b288: 0x1000000d  b           . + 4 + (0xD << 2)
label_22b28c:
    if (ctx->pc == 0x22B28Cu) {
        ctx->pc = 0x22B28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B288u;
        // 0x22b28c: 0x46000841  sub.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B290u;
        goto label_22b290;
    }
    ctx->pc = 0x22B288u;
    {
        const bool branch_taken_0x22b288 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B288u;
        // 0x22b28c: 0x46000841  sub.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b288) {
            ctx->pc = 0x22B2C0u;
            goto label_22b2c0;
        }
    }
    ctx->pc = 0x22B290u;
label_22b290:
    // 0x22b290: 0x3c03c049  lui         $v1, 0xC049
    ctx->pc = 0x22b290u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49225 << 16));
label_22b294:
    // 0x22b294: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x22b294u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_22b298:
    // 0x22b298: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x22b298u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22b29c:
    // 0x22b29c: 0x0  nop
    ctx->pc = 0x22b29cu;
    // NOP
label_22b2a0:
    // 0x22b2a0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x22b2a0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_22b2a4:
    // 0x22b2a4: 0x0  nop
    ctx->pc = 0x22b2a4u;
    // NOP
label_22b2a8:
    // 0x22b2a8: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_22b2ac:
    if (ctx->pc == 0x22B2ACu) {
        ctx->pc = 0x22B2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B2A8u;
        // 0x22b2ac: 0x3c0340c9  lui         $v1, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B2B0u;
        goto label_22b2b0;
    }
    ctx->pc = 0x22B2A8u;
    {
        const bool branch_taken_0x22b2a8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x22B2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B2A8u;
        // 0x22b2ac: 0x3c0340c9  lui         $v1, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b2a8) {
            ctx->pc = 0x22B2C0u;
            goto label_22b2c0;
        }
    }
    ctx->pc = 0x22B2B0u;
label_22b2b0:
    // 0x22b2b0: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x22b2b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_22b2b4:
    // 0x22b2b4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x22b2b4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22b2b8:
    // 0x22b2b8: 0x10000001  b           . + 4 + (0x1 << 2)
label_22b2bc:
    if (ctx->pc == 0x22B2BCu) {
        ctx->pc = 0x22B2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B2B8u;
        // 0x22b2bc: 0x46010040  add.s       $f1, $f0, $f1 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B2C0u;
        goto label_22b2c0;
    }
    ctx->pc = 0x22B2B8u;
    {
        const bool branch_taken_0x22b2b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B2B8u;
        // 0x22b2bc: 0x46010040  add.s       $f1, $f0, $f1 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b2b8) {
            ctx->pc = 0x22B2C0u;
            goto label_22b2c0;
        }
    }
    ctx->pc = 0x22B2C0u;
label_22b2c0:
    // 0x22b2c0: 0xe6210058  swc1        $f1, 0x58($s1)
    ctx->pc = 0x22b2c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 88), bits); }
label_22b2c4:
    // 0x22b2c4: 0x26240050  addiu       $a0, $s1, 0x50
    ctx->pc = 0x22b2c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
label_22b2c8:
    // 0x22b2c8: 0x26230040  addiu       $v1, $s1, 0x40
    ctx->pc = 0x22b2c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
label_22b2cc:
    // 0x22b2cc: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x22b2ccu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_22b2d0:
    // 0x22b2d0: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x22b2d0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_22b2d4:
    // 0x22b2d4: 0x4a0002b8  vcallms     0x50
    ctx->pc = 0x22b2d4u;
    {     ctx->vu0_tpc = 0x50;     runtime->executeVU0Microprogram(rdram, ctx, 0x50); }
label_22b2d8:
    // 0x22b2d8: 0x48290801  qmfc2.i     $t1, $vf1
    ctx->pc = 0x22b2d8u;
    SET_GPR_VEC(ctx, 9, _mm_castps_si128(ctx->vu0_vf[1]));
label_22b2dc:
    // 0x22b2dc: 0xfa300000  sqc2        $vf16, 0x0($s1)
    ctx->pc = 0x22b2dcu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[16]));
label_22b2e0:
    // 0x22b2e0: 0xfa310010  sqc2        $vf17, 0x10($s1)
    ctx->pc = 0x22b2e0u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), _mm_castps_si128(ctx->vu0_vf[17]));
label_22b2e4:
    // 0x22b2e4: 0xfa320020  sqc2        $vf18, 0x20($s1)
    ctx->pc = 0x22b2e4u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), _mm_castps_si128(ctx->vu0_vf[18]));
label_22b2e8:
    // 0x22b2e8: 0xfa330030  sqc2        $vf19, 0x30($s1)
    ctx->pc = 0x22b2e8u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 48), _mm_castps_si128(ctx->vu0_vf[19]));
label_22b2ec:
    // 0x22b2ec: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x22b2ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_22b2f0:
    // 0x22b2f0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x22b2f0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_22b2f4:
    // 0x22b2f4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x22b2f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_22b2f8:
    // 0x22b2f8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22b2f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_22b2fc:
    // 0x22b2fc: 0x3e00008  jr          $ra
label_22b300:
    if (ctx->pc == 0x22B300u) {
        ctx->pc = 0x22B300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B2FCu;
        // 0x22b300: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B304u;
        goto label_22b304;
    }
    ctx->pc = 0x22B2FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22B300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B2FCu;
        // 0x22b300: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22B2FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22B304u;
label_22b304:
    // 0x22b304: 0x0  nop
    ctx->pc = 0x22b304u;
    // NOP
label_22b308:
    // 0x22b308: 0x0  nop
    ctx->pc = 0x22b308u;
    // NOP
label_22b30c:
    // 0x22b30c: 0x0  nop
    ctx->pc = 0x22b30cu;
    // NOP
label_22b310:
    // 0x22b310: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x22b310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_22b314:
    // 0x22b314: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x22b314u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_22b318:
    // 0x22b318: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x22b318u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_22b31c:
    // 0x22b31c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x22b31cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_22b320:
    // 0x22b320: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x22b320u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_22b324:
    // 0x22b324: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x22b324u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_22b328:
    // 0x22b328: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x22b328u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_22b32c:
    // 0x22b32c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x22b32cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_22b330:
    // 0x22b330: 0xc0590dc  jal         func_164370
label_22b334:
    if (ctx->pc == 0x22B334u) {
        ctx->pc = 0x22B334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B330u;
        // 0x22b334: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B338u;
        goto label_22b338;
    }
    ctx->pc = 0x22B330u;
    SET_GPR_U32(ctx, 31, 0x22B338u);
    ctx->pc = 0x22B334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B330u;
    // 0x22b334: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164370u, 0x22B330u, 0x22B338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B338u;
label_22b338:
    // 0x22b338: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
label_22b33c:
    if (ctx->pc == 0x22B33Cu) {
        ctx->pc = 0x22B340u;
        goto label_22b340;
    }
    ctx->pc = 0x22B338u;
    {
        const bool branch_taken_0x22b338 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22b338) {
            ctx->pc = 0x22B394u;
            goto label_22b394;
        }
    }
    ctx->pc = 0x22B340u;
label_22b340:
    // 0x22b340: 0x44920800  mtc1        $s2, $f1
    ctx->pc = 0x22b340u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_22b344:
    // 0x22b344: 0x3c033c23  lui         $v1, 0x3C23
    ctx->pc = 0x22b344u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15395 << 16));
label_22b348:
    // 0x22b348: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x22b348u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22b34c:
    // 0x22b34c: 0x3464d70a  ori         $a0, $v1, 0xD70A
    ctx->pc = 0x22b34cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
label_22b350:
    // 0x22b350: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x22b350u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_22b354:
    // 0x22b354: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x22b354u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
label_22b358:
    // 0x22b358: 0xa4500014  sh          $s0, 0x14($v0)
    ctx->pc = 0x22b358u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 20), (uint16_t)GPR_U32(ctx, 16));
label_22b35c:
    // 0x22b35c: 0x2463b3b0  addiu       $v1, $v1, -0x4C50
    ctx->pc = 0x22b35cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294947760));
label_22b360:
    // 0x22b360: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x22b360u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_22b364:
    // 0x22b364: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x22b364u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_22b368:
    // 0x22b368: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x22b368u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_22b36c:
    // 0x22b36c: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x22b36cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_22b370:
    // 0x22b370: 0xe4410050  swc1        $f1, 0x50($v0)
    ctx->pc = 0x22b370u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 80), bits); }
label_22b374:
    // 0x22b374: 0x46010041  sub.s       $f1, $f0, $f1
    ctx->pc = 0x22b374u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_22b378:
    // 0x22b378: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x22b378u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22b37c:
    // 0x22b37c: 0x0  nop
    ctx->pc = 0x22b37cu;
    // NOP
label_22b380:
    // 0x22b380: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x22b380u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_22b384:
    // 0x22b384: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x22b384u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_22b388:
    // 0x22b388: 0xe4400054  swc1        $f0, 0x54($v0)
    ctx->pc = 0x22b388u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 84), bits); }
label_22b38c:
    // 0x22b38c: 0xa4400012  sh          $zero, 0x12($v0)
    ctx->pc = 0x22b38cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 18), (uint16_t)GPR_U32(ctx, 0));
label_22b390:
    // 0x22b390: 0xac43001c  sw          $v1, 0x1C($v0)
    ctx->pc = 0x22b390u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 3));
label_22b394:
    // 0x22b394: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x22b394u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_22b398:
    // 0x22b398: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x22b398u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_22b39c:
    // 0x22b39c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x22b39cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_22b3a0:
    // 0x22b3a0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22b3a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_22b3a4:
    // 0x22b3a4: 0x3e00008  jr          $ra
label_22b3a8:
    if (ctx->pc == 0x22B3A8u) {
        ctx->pc = 0x22B3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B3A4u;
        // 0x22b3a8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B3ACu;
        goto label_22b3ac;
    }
    ctx->pc = 0x22B3A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22B3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B3A4u;
        // 0x22b3a8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22B3A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22B3ACu;
label_22b3ac:
    // 0x22b3ac: 0x0  nop
    ctx->pc = 0x22b3acu;
    // NOP
label_22b3b0:
    // 0x22b3b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x22b3b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_22b3b4:
    // 0x22b3b4: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x22b3b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
label_22b3b8:
    // 0x22b3b8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x22b3b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_22b3bc:
    // 0x22b3bc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x22b3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_22b3c0:
    // 0x22b3c0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x22b3c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_22b3c4:
    // 0x22b3c4: 0x9023a3ea  lbu         $v1, -0x5C16($at)
    ctx->pc = 0x22b3c4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294943722)));
label_22b3c8:
    // 0x22b3c8: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_22b3cc:
    if (ctx->pc == 0x22B3CCu) {
        ctx->pc = 0x22B3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B3C8u;
        // 0x22b3cc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B3D0u;
        goto label_22b3d0;
    }
    ctx->pc = 0x22B3C8u;
    {
        const bool branch_taken_0x22b3c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x22B3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B3C8u;
        // 0x22b3cc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b3c8) {
            ctx->pc = 0x22B3D8u;
            goto label_22b3d8;
        }
    }
    ctx->pc = 0x22B3D0u;
label_22b3d0:
    // 0x22b3d0: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
label_22b3d4:
    if (ctx->pc == 0x22B3D4u) {
        ctx->pc = 0x22B3D8u;
        goto label_22b3d8;
    }
    ctx->pc = 0x22B3D0u;
    {
        const bool branch_taken_0x22b3d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x22b3d0) {
            ctx->pc = 0x22B3F4u;
            goto label_22b3f4;
        }
    }
    ctx->pc = 0x22B3D8u;
label_22b3d8:
    // 0x22b3d8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x22b3d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_22b3dc:
    // 0x22b3dc: 0xc05ecd8  jal         func_17B360
label_22b3e0:
    if (ctx->pc == 0x22B3E0u) {
        ctx->pc = 0x22B3E4u;
        goto label_22b3e4;
    }
    ctx->pc = 0x22B3DCu;
    SET_GPR_U32(ctx, 31, 0x22B3E4u);
    ctx->pc = 0x17B360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17B360u, 0x22B3DCu, 0x22B3E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B3E4u;
label_22b3e4:
    // 0x22b3e4: 0xc0591f4  jal         func_1647D0
label_22b3e8:
    if (ctx->pc == 0x22B3E8u) {
        ctx->pc = 0x22B3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B3E4u;
        // 0x22b3e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B3ECu;
        goto label_22b3ec;
    }
    ctx->pc = 0x22B3E4u;
    SET_GPR_U32(ctx, 31, 0x22B3ECu);
    ctx->pc = 0x22B3E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B3E4u;
    // 0x22b3e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1647D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1647D0u, 0x22B3E4u, 0x22B3ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B3ECu;
label_22b3ec:
    // 0x22b3ec: 0x10000013  b           . + 4 + (0x13 << 2)
label_22b3f0:
    if (ctx->pc == 0x22B3F0u) {
        ctx->pc = 0x22B3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B3ECu;
        // 0x22b3f0: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B3F4u;
        goto label_22b3f4;
    }
    ctx->pc = 0x22B3ECu;
    {
        const bool branch_taken_0x22b3ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B3ECu;
        // 0x22b3f0: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b3ec) {
            ctx->pc = 0x22B43Cu;
            goto label_22b43c;
        }
    }
    ctx->pc = 0x22B3F4u;
label_22b3f4:
    // 0x22b3f4: 0x96030012  lhu         $v1, 0x12($s0)
    ctx->pc = 0x22b3f4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
label_22b3f8:
    // 0x22b3f8: 0x96020014  lhu         $v0, 0x14($s0)
    ctx->pc = 0x22b3f8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 20)));
label_22b3fc:
    // 0x22b3fc: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x22b3fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_22b400:
    // 0x22b400: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_22b404:
    if (ctx->pc == 0x22B404u) {
        ctx->pc = 0x22B408u;
        goto label_22b408;
    }
    ctx->pc = 0x22B400u;
    {
        const bool branch_taken_0x22b400 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22b400) {
            ctx->pc = 0x22B418u;
            goto label_22b418;
        }
    }
    ctx->pc = 0x22B408u;
label_22b408:
    // 0x22b408: 0xc0591f4  jal         func_1647D0
label_22b40c:
    if (ctx->pc == 0x22B40Cu) {
        ctx->pc = 0x22B410u;
        goto label_22b410;
    }
    ctx->pc = 0x22B408u;
    SET_GPR_U32(ctx, 31, 0x22B410u);
    ctx->pc = 0x1647D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1647D0u, 0x22B408u, 0x22B410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B410u;
label_22b410:
    // 0x22b410: 0x10000009  b           . + 4 + (0x9 << 2)
label_22b414:
    if (ctx->pc == 0x22B414u) {
        ctx->pc = 0x22B418u;
        goto label_22b418;
    }
    ctx->pc = 0x22B410u;
    {
        const bool branch_taken_0x22b410 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22b410) {
            ctx->pc = 0x22B438u;
            goto label_22b438;
        }
    }
    ctx->pc = 0x22B418u;
label_22b418:
    // 0x22b418: 0xc6010054  lwc1        $f1, 0x54($s0)
    ctx->pc = 0x22b418u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_22b41c:
    // 0x22b41c: 0xc6000050  lwc1        $f0, 0x50($s0)
    ctx->pc = 0x22b41cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22b420:
    // 0x22b420: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x22b420u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_22b424:
    // 0x22b424: 0xc05ecd8  jal         func_17B360
label_22b428:
    if (ctx->pc == 0x22B428u) {
        ctx->pc = 0x22B428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B424u;
        // 0x22b428: 0xe60c0050  swc1        $f12, 0x50($s0) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B42Cu;
        goto label_22b42c;
    }
    ctx->pc = 0x22B424u;
    SET_GPR_U32(ctx, 31, 0x22B42Cu);
    ctx->pc = 0x22B428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B424u;
    // 0x22b428: 0xe60c0050  swc1        $f12, 0x50($s0) (Delay Slot)
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x17B360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17B360u, 0x22B424u, 0x22B42Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B42Cu;
label_22b42c:
    // 0x22b42c: 0x96030012  lhu         $v1, 0x12($s0)
    ctx->pc = 0x22b42cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
label_22b430:
    // 0x22b430: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x22b430u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_22b434:
    // 0x22b434: 0xa6030012  sh          $v1, 0x12($s0)
    ctx->pc = 0x22b434u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 18), (uint16_t)GPR_U32(ctx, 3));
label_22b438:
    // 0x22b438: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x22b438u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_22b43c:
    // 0x22b43c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22b43cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_22b440:
    // 0x22b440: 0x3e00008  jr          $ra
label_22b444:
    if (ctx->pc == 0x22B444u) {
        ctx->pc = 0x22B444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B440u;
        // 0x22b444: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B448u;
        goto label_22b448;
    }
    ctx->pc = 0x22B440u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22B444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B440u;
        // 0x22b444: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22B440u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22B448u;
label_22b448:
    // 0x22b448: 0x0  nop
    ctx->pc = 0x22b448u;
    // NOP
label_22b44c:
    // 0x22b44c: 0x0  nop
    ctx->pc = 0x22b44cu;
    // NOP
label_22b450:
    // 0x22b450: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x22b450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_22b454:
    // 0x22b454: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x22b454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_22b458:
    // 0x22b458: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x22b458u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_22b45c:
    // 0x22b45c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x22b45cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_22b460:
    // 0x22b460: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x22b460u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_22b464:
    // 0x22b464: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x22b464u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_22b468:
    // 0x22b468: 0x8f8585d0  lw          $a1, -0x7A30($gp)
    ctx->pc = 0x22b468u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936016)));
label_22b46c:
    // 0x22b46c: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
label_22b470:
    if (ctx->pc == 0x22B470u) {
        ctx->pc = 0x22B470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B46Cu;
        // 0x22b470: 0x308300ff  andi        $v1, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B474u;
        goto label_22b474;
    }
    ctx->pc = 0x22B46Cu;
    {
        const bool branch_taken_0x22b46c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B46Cu;
        // 0x22b470: 0x308300ff  andi        $v1, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b46c) {
            ctx->pc = 0x22B48Cu;
            goto label_22b48c;
        }
    }
    ctx->pc = 0x22B474u;
label_22b474:
    // 0x22b474: 0x90a40096  lbu         $a0, 0x96($a1)
    ctx->pc = 0x22b474u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 150)));
label_22b478:
    // 0x22b478: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
label_22b47c:
    if (ctx->pc == 0x22B47Cu) {
        ctx->pc = 0x22B480u;
        goto label_22b480;
    }
    ctx->pc = 0x22B478u;
    {
        const bool branch_taken_0x22b478 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x22b478) {
            ctx->pc = 0x22B48Cu;
            goto label_22b48c;
        }
    }
    ctx->pc = 0x22B480u;
label_22b480:
    // 0x22b480: 0x8ca50084  lw          $a1, 0x84($a1)
    ctx->pc = 0x22b480u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 132)));
label_22b484:
    // 0x22b484: 0x14a0fffb  bnez        $a1, . + 4 + (-0x5 << 2)
label_22b488:
    if (ctx->pc == 0x22B488u) {
        ctx->pc = 0x22B48Cu;
        goto label_22b48c;
    }
    ctx->pc = 0x22B484u;
    {
        const bool branch_taken_0x22b484 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x22b484) {
            ctx->pc = 0x22B474u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22b474;
        }
    }
    ctx->pc = 0x22B48Cu;
label_22b48c:
    // 0x22b48c: 0x0  nop
    ctx->pc = 0x22b48cu;
    // NOP
label_22b490:
    // 0x22b490: 0x10a000a1  beqz        $a1, . + 4 + (0xA1 << 2)
label_22b494:
    if (ctx->pc == 0x22B494u) {
        ctx->pc = 0x22B498u;
        goto label_22b498;
    }
    ctx->pc = 0x22B490u;
    {
        const bool branch_taken_0x22b490 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x22b490) {
            ctx->pc = 0x22B718u;
            goto label_22b718;
        }
    }
    ctx->pc = 0x22B498u;
label_22b498:
    // 0x22b498: 0x24a50040  addiu       $a1, $a1, 0x40
    ctx->pc = 0x22b498u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
label_22b49c:
    // 0x22b49c: 0xc066e26  jal         func_19B898
label_22b4a0:
    if (ctx->pc == 0x22B4A0u) {
        ctx->pc = 0x22B4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B49Cu;
        // 0x22b4a0: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B4A4u;
        goto label_22b4a4;
    }
    ctx->pc = 0x22B49Cu;
    SET_GPR_U32(ctx, 31, 0x22B4A4u);
    ctx->pc = 0x22B4A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B49Cu;
    // 0x22b4a0: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x22B4A4u;
label_22b4a4:
    // 0x22b4a4: 0x8f9385d0  lw          $s3, -0x7A30($gp)
    ctx->pc = 0x22b4a4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936016)));
label_22b4a8:
    // 0x22b4a8: 0x1260009a  beqz        $s3, . + 4 + (0x9A << 2)
label_22b4ac:
    if (ctx->pc == 0x22B4ACu) {
        ctx->pc = 0x22B4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B4A8u;
        // 0x22b4ac: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B4B0u;
        goto label_22b4b0;
    }
    ctx->pc = 0x22B4A8u;
    {
        const bool branch_taken_0x22b4a8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B4A8u;
        // 0x22b4ac: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b4a8) {
            ctx->pc = 0x22B714u;
            goto label_22b714;
        }
    }
    ctx->pc = 0x22B4B0u;
label_22b4b0:
    // 0x22b4b0: 0x92640096  lbu         $a0, 0x96($s3)
    ctx->pc = 0x22b4b0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 150)));
label_22b4b4:
    // 0x22b4b4: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x22b4b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_22b4b8:
    // 0x22b4b8: 0x14830093  bne         $a0, $v1, . + 4 + (0x93 << 2)
label_22b4bc:
    if (ctx->pc == 0x22B4BCu) {
        ctx->pc = 0x22B4C0u;
        goto label_22b4c0;
    }
    ctx->pc = 0x22B4B8u;
    {
        const bool branch_taken_0x22b4b8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x22b4b8) {
            ctx->pc = 0x22B708u;
            goto label_22b708;
        }
    }
    ctx->pc = 0x22B4C0u;
label_22b4c0:
    // 0x22b4c0: 0x92640094  lbu         $a0, 0x94($s3)
    ctx->pc = 0x22b4c0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 148)));
label_22b4c4:
    // 0x22b4c4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x22b4c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_22b4c8:
    // 0x22b4c8: 0x1483008f  bne         $a0, $v1, . + 4 + (0x8F << 2)
label_22b4cc:
    if (ctx->pc == 0x22B4CCu) {
        ctx->pc = 0x22B4D0u;
        goto label_22b4d0;
    }
    ctx->pc = 0x22B4C8u;
    {
        const bool branch_taken_0x22b4c8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x22b4c8) {
            ctx->pc = 0x22B708u;
            goto label_22b708;
        }
    }
    ctx->pc = 0x22B4D0u;
label_22b4d0:
    // 0x22b4d0: 0xc08f0cc  jal         func_23C330
label_22b4d4:
    if (ctx->pc == 0x22B4D4u) {
        ctx->pc = 0x22B4D8u;
        goto label_22b4d8;
    }
    ctx->pc = 0x22B4D0u;
    SET_GPR_U32(ctx, 31, 0x22B4D8u);
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x22B4D8u;
label_22b4d8:
    // 0x22b4d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22b4d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22b4dc:
    // 0x22b4dc: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x22b4dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
label_22b4e0:
    // 0x22b4e0: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x22b4e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_22b4e4:
    // 0x22b4e4: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x22b4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
label_22b4e8:
    // 0x22b4e8: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x22b4e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_22b4ec:
    // 0x22b4ec: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x22b4ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22b4f0:
    // 0x22b4f0: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x22b4f0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_22b4f4:
    // 0x22b4f4: 0x3c02c248  lui         $v0, 0xC248
    ctx->pc = 0x22b4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49736 << 16));
label_22b4f8:
    // 0x22b4f8: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x22b4f8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_22b4fc:
    // 0x22b4fc: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x22b4fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_22b500:
    // 0x22b500: 0x0  nop
    ctx->pc = 0x22b500u;
    // NOP
label_22b504:
    // 0x22b504: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x22b504u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[2];
label_22b508:
    // 0x22b508: 0x46011840  add.s       $f1, $f3, $f1
    ctx->pc = 0x22b508u;
    ctx->f[1] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
label_22b50c:
    // 0x22b50c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x22b50cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_22b510:
    // 0x22b510: 0xc08f0cc  jal         func_23C330
label_22b514:
    if (ctx->pc == 0x22B514u) {
        ctx->pc = 0x22B514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B510u;
        // 0x22b514: 0xe7a00060  swc1        $f0, 0x60($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B518u;
        goto label_22b518;
    }
    ctx->pc = 0x22B510u;
    SET_GPR_U32(ctx, 31, 0x22B518u);
    ctx->pc = 0x22B514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B510u;
    // 0x22b514: 0xe7a00060  swc1        $f0, 0x60($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x22B518u;
label_22b518:
    // 0x22b518: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22b518u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22b51c:
    // 0x22b51c: 0x3c054f00  lui         $a1, 0x4F00
    ctx->pc = 0x22b51cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)20224 << 16));
label_22b520:
    // 0x22b520: 0x3c04c1c8  lui         $a0, 0xC1C8
    ctx->pc = 0x22b520u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49608 << 16));
label_22b524:
    // 0x22b524: 0x3c0341c8  lui         $v1, 0x41C8
    ctx->pc = 0x22b524u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16840 << 16));
label_22b528:
    // 0x22b528: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x22b528u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_22b52c:
    // 0x22b52c: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x22b52cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
label_22b530:
    // 0x22b530: 0x27b10054  addiu       $s1, $sp, 0x54
    ctx->pc = 0x22b530u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
label_22b534:
    // 0x22b534: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x22b534u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_22b538:
    // 0x22b538: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x22b538u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22b53c:
    // 0x22b53c: 0x460208c2  mul.s       $f3, $f1, $f2
    ctx->pc = 0x22b53cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_22b540:
    // 0x22b540: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x22b540u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_22b544:
    // 0x22b544: 0x44851000  mtc1        $a1, $f2
    ctx->pc = 0x22b544u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_22b548:
    // 0x22b548: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x22b548u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_22b54c:
    // 0x22b54c: 0x46021883  div.s       $f2, $f3, $f2
    ctx->pc = 0x22b54cu;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[3] * 0.0f); } else ctx->f[2] = ctx->f[3] / ctx->f[2];
label_22b550:
    // 0x22b550: 0x46020880  add.s       $f2, $f1, $f2
    ctx->pc = 0x22b550u;
    ctx->f[2] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_22b554:
    // 0x22b554: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x22b554u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_22b558:
    // 0x22b558: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x22b558u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_22b55c:
    // 0x22b55c: 0x0  nop
    ctx->pc = 0x22b55cu;
    // NOP
label_22b560:
    // 0x22b560: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x22b560u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_22b564:
    // 0x22b564: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x22b564u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_22b568:
    // 0x22b568: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x22b568u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_22b56c:
    // 0x22b56c: 0xc08f0cc  jal         func_23C330
label_22b570:
    if (ctx->pc == 0x22B570u) {
        ctx->pc = 0x22B570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B56Cu;
        // 0x22b570: 0xe7a00064  swc1        $f0, 0x64($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B574u;
        goto label_22b574;
    }
    ctx->pc = 0x22B56Cu;
    SET_GPR_U32(ctx, 31, 0x22B574u);
    ctx->pc = 0x22B570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B56Cu;
    // 0x22b570: 0xe7a00064  swc1        $f0, 0x64($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x22B574u;
label_22b574:
    // 0x22b574: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22b574u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22b578:
    // 0x22b578: 0x3c044f00  lui         $a0, 0x4F00
    ctx->pc = 0x22b578u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20224 << 16));
label_22b57c:
    // 0x22b57c: 0x3c03c248  lui         $v1, 0xC248
    ctx->pc = 0x22b57cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49736 << 16));
label_22b580:
    // 0x22b580: 0x27b20058  addiu       $s2, $sp, 0x58
    ctx->pc = 0x22b580u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
label_22b584:
    // 0x22b584: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x22b584u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_22b588:
    // 0x22b588: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x22b588u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
label_22b58c:
    // 0x22b58c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x22b58cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_22b590:
    // 0x22b590: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x22b590u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22b594:
    // 0x22b594: 0x460208c2  mul.s       $f3, $f1, $f2
    ctx->pc = 0x22b594u;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_22b598:
    // 0x22b598: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x22b598u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_22b59c:
    // 0x22b59c: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x22b59cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_22b5a0:
    // 0x22b5a0: 0xafa2006c  sw          $v0, 0x6C($sp)
    ctx->pc = 0x22b5a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 2));
label_22b5a4:
    // 0x22b5a4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x22b5a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_22b5a8:
    // 0x22b5a8: 0x46021883  div.s       $f2, $f3, $f2
    ctx->pc = 0x22b5a8u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[3] * 0.0f); } else ctx->f[2] = ctx->f[3] / ctx->f[2];
label_22b5ac:
    // 0x22b5ac: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x22b5acu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_22b5b0:
    // 0x22b5b0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x22b5b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_22b5b4:
    // 0x22b5b4: 0xc08f0cc  jal         func_23C330
label_22b5b8:
    if (ctx->pc == 0x22B5B8u) {
        ctx->pc = 0x22B5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B5B4u;
        // 0x22b5b8: 0xe7a00068  swc1        $f0, 0x68($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B5BCu;
        goto label_22b5bc;
    }
    ctx->pc = 0x22B5B4u;
    SET_GPR_U32(ctx, 31, 0x22B5BCu);
    ctx->pc = 0x22B5B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B5B4u;
    // 0x22b5b8: 0xe7a00068  swc1        $f0, 0x68($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x22B5BCu;
label_22b5bc:
    // 0x22b5bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22b5bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22b5c0:
    // 0x22b5c0: 0x0  nop
    ctx->pc = 0x22b5c0u;
    // NOP
label_22b5c4:
    // 0x22b5c4: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x22b5c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_22b5c8:
    // 0x22b5c8: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x22b5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_22b5cc:
    // 0x22b5cc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x22b5ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_22b5d0:
    // 0x22b5d0: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x22b5d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22b5d4:
    // 0x22b5d4: 0x46020882  mul.s       $f2, $f1, $f2
    ctx->pc = 0x22b5d4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_22b5d8:
    // 0x22b5d8: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x22b5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_22b5dc:
    // 0x22b5dc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x22b5dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_22b5e0:
    // 0x22b5e0: 0x0  nop
    ctx->pc = 0x22b5e0u;
    // NOP
label_22b5e4:
    // 0x22b5e4: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x22b5e4u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[1] = ctx->f[2] / ctx->f[1];
label_22b5e8:
    // 0x22b5e8: 0x0  nop
    ctx->pc = 0x22b5e8u;
    // NOP
label_22b5ec:
    // 0x22b5ec: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x22b5ecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_22b5f0:
    // 0x22b5f0: 0xc08f0cc  jal         func_23C330
label_22b5f4:
    if (ctx->pc == 0x22B5F4u) {
        ctx->pc = 0x22B5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B5F0u;
        // 0x22b5f4: 0xe7a00070  swc1        $f0, 0x70($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B5F8u;
        goto label_22b5f8;
    }
    ctx->pc = 0x22B5F0u;
    SET_GPR_U32(ctx, 31, 0x22B5F8u);
    ctx->pc = 0x22B5F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B5F0u;
    // 0x22b5f4: 0xe7a00070  swc1        $f0, 0x70($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x22B5F8u;
label_22b5f8:
    // 0x22b5f8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x22b5f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_22b5fc:
    // 0x22b5fc: 0x3c0440a0  lui         $a0, 0x40A0
    ctx->pc = 0x22b5fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16544 << 16));
label_22b600:
    // 0x22b600: 0x44841800  mtc1        $a0, $f3
    ctx->pc = 0x22b600u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_22b604:
    // 0x22b604: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x22b604u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
label_22b608:
    // 0x22b608: 0x468008a0  cvt.s.w     $f2, $f1
    ctx->pc = 0x22b608u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_22b60c:
    // 0x22b60c: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x22b60cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_22b610:
    // 0x22b610: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x22b610u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_22b614:
    // 0x22b614: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x22b614u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_22b618:
    // 0x22b618: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x22b618u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22b61c:
    // 0x22b61c: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x22b61cu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[1] = ctx->f[2] / ctx->f[1];
label_22b620:
    // 0x22b620: 0x46011880  add.s       $f2, $f3, $f1
    ctx->pc = 0x22b620u;
    ctx->f[2] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
label_22b624:
    // 0x22b624: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x22b624u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_22b628:
    // 0x22b628: 0x0  nop
    ctx->pc = 0x22b628u;
    // NOP
label_22b62c:
    // 0x22b62c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x22b62cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_22b630:
    // 0x22b630: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x22b630u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_22b634:
    // 0x22b634: 0xc08f0cc  jal         func_23C330
label_22b638:
    if (ctx->pc == 0x22B638u) {
        ctx->pc = 0x22B638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B634u;
        // 0x22b638: 0xe7a00074  swc1        $f0, 0x74($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B63Cu;
        goto label_22b63c;
    }
    ctx->pc = 0x22B634u;
    SET_GPR_U32(ctx, 31, 0x22B63Cu);
    ctx->pc = 0x22B638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B634u;
    // 0x22b638: 0xe7a00074  swc1        $f0, 0x74($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x22B63Cu;
label_22b63c:
    // 0x22b63c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x22b63cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_22b640:
    // 0x22b640: 0x3c0741a0  lui         $a3, 0x41A0
    ctx->pc = 0x22b640u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16800 << 16));
label_22b644:
    // 0x22b644: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x22b644u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22b648:
    // 0x22b648: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x22b648u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_22b64c:
    // 0x22b64c: 0x468008e0  cvt.s.w     $f3, $f1
    ctx->pc = 0x22b64cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_22b650:
    // 0x22b650: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x22b650u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
label_22b654:
    // 0x22b654: 0x3c02c120  lui         $v0, 0xC120
    ctx->pc = 0x22b654u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49440 << 16));
label_22b658:
    // 0x22b658: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x22b658u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_22b65c:
    // 0x22b65c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x22b65cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_22b660:
    // 0x22b660: 0xafa0007c  sw          $zero, 0x7C($sp)
    ctx->pc = 0x22b660u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 0));
label_22b664:
    // 0x22b664: 0x44871000  mtc1        $a3, $f2
    ctx->pc = 0x22b664u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_22b668:
    // 0x22b668: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x22b668u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_22b66c:
    // 0x22b66c: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x22b66cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_22b670:
    // 0x22b670: 0x46011083  div.s       $f2, $f2, $f1
    ctx->pc = 0x22b670u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[2] = ctx->f[2] / ctx->f[1];
label_22b674:
    // 0x22b674: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x22b674u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_22b678:
    // 0x22b678: 0x0  nop
    ctx->pc = 0x22b678u;
    // NOP
label_22b67c:
    // 0x22b67c: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x22b67cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_22b680:
    // 0x22b680: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x22b680u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_22b684:
    // 0x22b684: 0xc066e08  jal         func_19B820
label_22b688:
    if (ctx->pc == 0x22B688u) {
        ctx->pc = 0x22B688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B684u;
        // 0x22b688: 0xe7a00078  swc1        $f0, 0x78($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B68Cu;
        goto label_22b68c;
    }
    ctx->pc = 0x22B684u;
    SET_GPR_U32(ctx, 31, 0x22B68Cu);
    ctx->pc = 0x22B688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B684u;
    // 0x22b688: 0xe7a00078  swc1        $f0, 0x78($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B820u;
    { ctx->pc = 0x19b820; return; }
    ctx->pc = 0x22B68Cu;
label_22b68c:
    // 0x22b68c: 0x26640040  addiu       $a0, $s3, 0x40
    ctx->pc = 0x22b68cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
label_22b690:
    // 0x22b690: 0xc066e26  jal         func_19B898
label_22b694:
    if (ctx->pc == 0x22B694u) {
        ctx->pc = 0x22B694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B690u;
        // 0x22b694: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B698u;
        goto label_22b698;
    }
    ctx->pc = 0x22B690u;
    SET_GPR_U32(ctx, 31, 0x22B698u);
    ctx->pc = 0x22B694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B690u;
    // 0x22b694: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x22B698u;
label_22b698:
    // 0x22b698: 0x26640060  addiu       $a0, $s3, 0x60
    ctx->pc = 0x22b698u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 96));
label_22b69c:
    // 0x22b69c: 0xc066e26  jal         func_19B898
label_22b6a0:
    if (ctx->pc == 0x22B6A0u) {
        ctx->pc = 0x22B6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B69Cu;
        // 0x22b6a0: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B6A4u;
        goto label_22b6a4;
    }
    ctx->pc = 0x22B69Cu;
    SET_GPR_U32(ctx, 31, 0x22B6A4u);
    ctx->pc = 0x22B6A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B69Cu;
    // 0x22b6a0: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x22B6A4u;
label_22b6a4:
    // 0x22b6a4: 0x26640070  addiu       $a0, $s3, 0x70
    ctx->pc = 0x22b6a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 112));
label_22b6a8:
    // 0x22b6a8: 0xc066e26  jal         func_19B898
label_22b6ac:
    if (ctx->pc == 0x22B6ACu) {
        ctx->pc = 0x22B6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B6A8u;
        // 0x22b6ac: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B6B0u;
        goto label_22b6b0;
    }
    ctx->pc = 0x22B6A8u;
    SET_GPR_U32(ctx, 31, 0x22B6B0u);
    ctx->pc = 0x22B6ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B6A8u;
    // 0x22b6ac: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x22B6B0u;
label_22b6b0:
    // 0x22b6b0: 0xc0590dc  jal         func_164370
label_22b6b4:
    if (ctx->pc == 0x22B6B4u) {
        ctx->pc = 0x22B6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B6B0u;
        // 0x22b6b4: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B6B8u;
        goto label_22b6b8;
    }
    ctx->pc = 0x22B6B0u;
    SET_GPR_U32(ctx, 31, 0x22B6B8u);
    ctx->pc = 0x22B6B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B6B0u;
    // 0x22b6b4: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164370u, 0x22B6B0u, 0x22B6B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B6B8u;
label_22b6b8:
    // 0x22b6b8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x22b6b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22b6bc:
    // 0x22b6bc: 0x1220000e  beqz        $s1, . + 4 + (0xE << 2)
label_22b6c0:
    if (ctx->pc == 0x22B6C0u) {
        ctx->pc = 0x22B6C4u;
        goto label_22b6c4;
    }
    ctx->pc = 0x22B6BCu;
    {
        const bool branch_taken_0x22b6bc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x22b6bc) {
            ctx->pc = 0x22B6F8u;
            goto label_22b6f8;
        }
    }
    ctx->pc = 0x22B6C4u;
label_22b6c4:
    // 0x22b6c4: 0xa6200014  sh          $zero, 0x14($s1)
    ctx->pc = 0x22b6c4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 20), (uint16_t)GPR_U32(ctx, 0));
label_22b6c8:
    // 0x22b6c8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x22b6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_22b6cc:
    // 0x22b6cc: 0x3c0341f0  lui         $v1, 0x41F0
    ctx->pc = 0x22b6ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16880 << 16));
label_22b6d0:
    // 0x22b6d0: 0xae33005c  sw          $s3, 0x5C($s1)
    ctx->pc = 0x22b6d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 92), GPR_U32(ctx, 19));
label_22b6d4:
    // 0x22b6d4: 0xae230050  sw          $v1, 0x50($s1)
    ctx->pc = 0x22b6d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 3));
label_22b6d8:
    // 0x22b6d8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x22b6d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_22b6dc:
    // 0x22b6dc: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x22b6dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
label_22b6e0:
    // 0x22b6e0: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x22b6e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_22b6e4:
    // 0x22b6e4: 0xc066e14  jal         func_19B850
label_22b6e8:
    if (ctx->pc == 0x22B6E8u) {
        ctx->pc = 0x22B6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B6E4u;
        // 0x22b6e8: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B6ECu;
        goto label_22b6ec;
    }
    ctx->pc = 0x22B6E4u;
    SET_GPR_U32(ctx, 31, 0x22B6ECu);
    ctx->pc = 0x22B6E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B6E4u;
    // 0x22b6e8: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B850u;
    { ctx->pc = 0x19b850; return; }
    ctx->pc = 0x22B6ECu;
label_22b6ec:
    // 0x22b6ec: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x22b6ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
label_22b6f0:
    // 0x22b6f0: 0x2463cc00  addiu       $v1, $v1, -0x3400
    ctx->pc = 0x22b6f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953984));
label_22b6f4:
    // 0x22b6f4: 0xae23001c  sw          $v1, 0x1C($s1)
    ctx->pc = 0x22b6f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 3));
label_22b6f8:
    // 0x22b6f8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x22b6f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_22b6fc:
    // 0x22b6fc: 0x2a010008  slti        $at, $s0, 0x8
    ctx->pc = 0x22b6fcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)8) ? 1 : 0);
label_22b700:
    // 0x22b700: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
label_22b704:
    if (ctx->pc == 0x22B704u) {
        ctx->pc = 0x22B708u;
        goto label_22b708;
    }
    ctx->pc = 0x22B700u;
    {
        const bool branch_taken_0x22b700 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x22b700) {
            ctx->pc = 0x22B714u;
            goto label_22b714;
        }
    }
    ctx->pc = 0x22B708u;
label_22b708:
    // 0x22b708: 0x8e730084  lw          $s3, 0x84($s3)
    ctx->pc = 0x22b708u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 132)));
label_22b70c:
    // 0x22b70c: 0x1660ff68  bnez        $s3, . + 4 + (-0x98 << 2)
label_22b710:
    if (ctx->pc == 0x22B710u) {
        ctx->pc = 0x22B714u;
        goto label_22b714;
    }
    ctx->pc = 0x22B70Cu;
    {
        const bool branch_taken_0x22b70c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x22b70c) {
            ctx->pc = 0x22B4B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22b4b0;
        }
    }
    ctx->pc = 0x22B714u;
label_22b714:
    // 0x22b714: 0x0  nop
    ctx->pc = 0x22b714u;
    // NOP
label_22b718:
    // 0x22b718: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x22b718u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_22b71c:
    // 0x22b71c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x22b71cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_22b720:
    // 0x22b720: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x22b720u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_22b724:
    // 0x22b724: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x22b724u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_22b728:
    // 0x22b728: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22b728u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_22b72c:
    // 0x22b72c: 0x3e00008  jr          $ra
label_22b730:
    if (ctx->pc == 0x22B730u) {
        ctx->pc = 0x22B730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B72Cu;
        // 0x22b730: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B734u;
        goto label_22b734;
    }
    ctx->pc = 0x22B72Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22B730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B72Cu;
        // 0x22b730: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22B72Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22B734u;
label_22b734:
    // 0x22b734: 0x0  nop
    ctx->pc = 0x22b734u;
    // NOP
label_22b738:
    // 0x22b738: 0x0  nop
    ctx->pc = 0x22b738u;
    // NOP
label_22b73c:
    // 0x22b73c: 0x0  nop
    ctx->pc = 0x22b73cu;
    // NOP
label_22b740:
    // 0x22b740: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x22b740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_22b744:
    // 0x22b744: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x22b744u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
label_22b748:
    // 0x22b748: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x22b748u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_22b74c:
    // 0x22b74c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x22b74cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_22b750:
    // 0x22b750: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x22b750u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_22b754:
    // 0x22b754: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x22b754u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_22b758:
    // 0x22b758: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x22b758u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_22b75c:
    // 0x22b75c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x22b75cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_22b760:
    // 0x22b760: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x22b760u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_22b764:
    // 0x22b764: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x22b764u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_22b768:
    // 0x22b768: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x22b768u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_22b76c:
    // 0x22b76c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x22b76cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_22b770:
    // 0x22b770: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x22b770u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_22b774:
    // 0x22b774: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x22b774u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_22b778:
    // 0x22b778: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x22b778u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_22b77c:
    // 0x22b77c: 0x9023a3ea  lbu         $v1, -0x5C16($at)
    ctx->pc = 0x22b77cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294943722)));
label_22b780:
    // 0x22b780: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_22b784:
    if (ctx->pc == 0x22B784u) {
        ctx->pc = 0x22B784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B780u;
        // 0x22b784: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B788u;
        goto label_22b788;
    }
    ctx->pc = 0x22B780u;
    {
        const bool branch_taken_0x22b780 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x22B784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B780u;
        // 0x22b784: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b780) {
            ctx->pc = 0x22B790u;
            goto label_22b790;
        }
    }
    ctx->pc = 0x22B788u;
label_22b788:
    // 0x22b788: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
label_22b78c:
    if (ctx->pc == 0x22B78Cu) {
        ctx->pc = 0x22B78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B788u;
        // 0x22b78c: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B790u;
        goto label_22b790;
    }
    ctx->pc = 0x22B788u;
    {
        const bool branch_taken_0x22b788 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x22B78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B788u;
        // 0x22b78c: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b788) {
            ctx->pc = 0x22B7A0u;
            goto label_22b7a0;
        }
    }
    ctx->pc = 0x22B790u;
label_22b790:
    // 0x22b790: 0xc0591f4  jal         func_1647D0
label_22b794:
    if (ctx->pc == 0x22B794u) {
        ctx->pc = 0x22B794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B790u;
        // 0x22b794: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B798u;
        goto label_22b798;
    }
    ctx->pc = 0x22B790u;
    SET_GPR_U32(ctx, 31, 0x22B798u);
    ctx->pc = 0x22B794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B790u;
    // 0x22b794: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1647D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1647D0u, 0x22B790u, 0x22B798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B798u;
label_22b798:
    // 0x22b798: 0x10000185  b           . + 4 + (0x185 << 2)
label_22b79c:
    if (ctx->pc == 0x22B79Cu) {
        ctx->pc = 0x22B79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B798u;
        // 0x22b79c: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B7A0u;
        goto label_22b7a0;
    }
    ctx->pc = 0x22B798u;
    {
        const bool branch_taken_0x22b798 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B798u;
        // 0x22b79c: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b798) {
            ctx->pc = 0x22BDB0u;
            { ctx->pc = 0x22bdb0; return; }
        }
    }
    ctx->pc = 0x22B7A0u;
label_22b7a0:
    // 0x22b7a0: 0xc066e26  jal         func_19B898
label_22b7a4:
    if (ctx->pc == 0x22B7A4u) {
        ctx->pc = 0x22B7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B7A0u;
        // 0x22b7a4: 0x26450020  addiu       $a1, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B7A8u;
        goto label_22b7a8;
    }
    ctx->pc = 0x22B7A0u;
    SET_GPR_U32(ctx, 31, 0x22B7A8u);
    ctx->pc = 0x22B7A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B7A0u;
    // 0x22b7a4: 0x26450020  addiu       $a1, $s2, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x22B7A8u;
label_22b7a8:
    // 0x22b7a8: 0x96440012  lhu         $a0, 0x12($s2)
    ctx->pc = 0x22b7a8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 18)));
label_22b7ac:
    // 0x22b7ac: 0x28810037  slti        $at, $a0, 0x37
    ctx->pc = 0x22b7acu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)55) ? 1 : 0);
label_22b7b0:
    // 0x22b7b0: 0x10200068  beqz        $at, . + 4 + (0x68 << 2)
label_22b7b4:
    if (ctx->pc == 0x22B7B4u) {
        ctx->pc = 0x22B7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B7B0u;
        // 0x22b7b4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B7B8u;
        goto label_22b7b8;
    }
    ctx->pc = 0x22B7B0u;
    {
        const bool branch_taken_0x22b7b0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B7B0u;
        // 0x22b7b4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b7b0) {
            ctx->pc = 0x22B954u;
            { ctx->pc = 0x22b954; return; }
        }
    }
    ctx->pc = 0x22B7B8u;
label_22b7b8:
    // 0x22b7b8: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x22b7b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_22b7bc:
    // 0x22b7bc: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x22b7bcu;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_22b7c0:
    // 0x22b7c0: 0x0  nop
    ctx->pc = 0x22b7c0u;
    // NOP
label_22b7c4:
    // 0x22b7c4: 0x0  nop
    ctx->pc = 0x22b7c4u;
    // NOP
label_22b7c8:
    // 0x22b7c8: 0x1810  mfhi        $v1
    ctx->pc = 0x22b7c8u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_22b7cc:
    // 0x22b7cc: 0x14600073  bnez        $v1, . + 4 + (0x73 << 2)
label_22b7d0:
    if (ctx->pc == 0x22B7D0u) {
        ctx->pc = 0x22B7D4u;
        goto label_22b7d4;
    }
    ctx->pc = 0x22B7CCu;
    {
        const bool branch_taken_0x22b7cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x22b7cc) {
            ctx->pc = 0x22B99Cu;
            { ctx->pc = 0x22b99c; return; }
        }
    }
    ctx->pc = 0x22B7D4u;
label_22b7d4:
    // 0x22b7d4: 0xc08f0cc  jal         func_23C330
label_22b7d8:
    if (ctx->pc == 0x22B7D8u) {
        ctx->pc = 0x22B7DCu;
        goto label_22b7dc;
    }
    ctx->pc = 0x22B7D4u;
    SET_GPR_U32(ctx, 31, 0x22B7DCu);
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x22B7DCu;
label_22b7dc:
    // 0x22b7dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22b7dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22b7e0:
    // 0x22b7e0: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x22b7e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
label_22b7e4:
    // 0x22b7e4: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x22b7e4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_22b7e8:
    // 0x22b7e8: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x22b7e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_22b7ec:
    // 0x22b7ec: 0x3c02453b  lui         $v0, 0x453B
    ctx->pc = 0x22b7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17723 << 16));
label_22b7f0:
    // 0x22b7f0: 0x34448000  ori         $a0, $v0, 0x8000
    ctx->pc = 0x22b7f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_22b7f4:
    // 0x22b7f4: 0x3c02c4bb  lui         $v0, 0xC4BB
    ctx->pc = 0x22b7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50363 << 16));
label_22b7f8:
    // 0x22b7f8: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x22b7f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_22b7fc:
    // 0x22b7fc: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x22b7fcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_22b800:
    // 0x22b800: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x22b800u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22b804:
    // 0x22b804: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x22b804u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_22b808:
    // 0x22b808: 0x46030883  div.s       $f2, $f1, $f3
    ctx->pc = 0x22b808u;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[2] = ctx->f[1] / ctx->f[3];
label_22b80c:
    // 0x22b80c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x22b80cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_22b810:
    // 0x22b810: 0x0  nop
    ctx->pc = 0x22b810u;
    // NOP
label_22b814:
    // 0x22b814: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x22b814u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_22b818:
    // 0x22b818: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x22b818u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_22b81c:
    // 0x22b81c: 0xc08f0cc  jal         func_23C330
label_22b820:
    if (ctx->pc == 0x22B820u) {
        ctx->pc = 0x22B820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B81Cu;
        // 0x22b820: 0xe7a000b0  swc1        $f0, 0xB0($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B824u;
        goto label_22b824;
    }
    ctx->pc = 0x22B81Cu;
    SET_GPR_U32(ctx, 31, 0x22B824u);
    ctx->pc = 0x22B820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B81Cu;
    // 0x22b820: 0xe7a000b0  swc1        $f0, 0xB0($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x22B824u;
label_22b824:
    // 0x22b824: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22b824u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22b828:
    // 0x22b828: 0x3c044f00  lui         $a0, 0x4F00
    ctx->pc = 0x22b828u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20224 << 16));
label_22b82c:
    // 0x22b82c: 0x3c03c396  lui         $v1, 0xC396
    ctx->pc = 0x22b82cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50070 << 16));
label_22b830:
    // 0x22b830: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x22b830u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_22b834:
    // 0x22b834: 0x3c024416  lui         $v0, 0x4416
    ctx->pc = 0x22b834u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17430 << 16));
label_22b838:
    // 0x22b838: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x22b838u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_22b83c:
    // 0x22b83c: 0xc7a000a4  lwc1        $f0, 0xA4($sp)
    ctx->pc = 0x22b83cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22b840:
    // 0x22b840: 0x460208c2  mul.s       $f3, $f1, $f2
    ctx->pc = 0x22b840u;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_22b844:
    // 0x22b844: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x22b844u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
label_22b848:
    // 0x22b848: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x22b848u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_22b84c:
    // 0x22b84c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x22b84cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_22b850:
    // 0x22b850: 0x46021883  div.s       $f2, $f3, $f2
    ctx->pc = 0x22b850u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[3] * 0.0f); } else ctx->f[2] = ctx->f[3] / ctx->f[2];
label_22b854:
    // 0x22b854: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x22b854u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_22b858:
    // 0x22b858: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x22b858u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_22b85c:
    // 0x22b85c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x22b85cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_22b860:
    // 0x22b860: 0x0  nop
    ctx->pc = 0x22b860u;
    // NOP
label_22b864:
    // 0x22b864: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x22b864u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_22b868:
    // 0x22b868: 0xc08f0cc  jal         func_23C330
label_22b86c:
    if (ctx->pc == 0x22B86Cu) {
        ctx->pc = 0x22B86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B868u;
        // 0x22b86c: 0xe7a000b4  swc1        $f0, 0xB4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B870u;
        goto label_22b870;
    }
    ctx->pc = 0x22B868u;
    SET_GPR_U32(ctx, 31, 0x22B870u);
    ctx->pc = 0x22B86Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B868u;
    // 0x22b86c: 0xe7a000b4  swc1        $f0, 0xB4($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x22B870u;
label_22b870:
    // 0x22b870: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22b870u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22b874:
    // 0x22b874: 0x3c054f00  lui         $a1, 0x4F00
    ctx->pc = 0x22b874u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)20224 << 16));
label_22b878:
    // 0x22b878: 0x3c04c348  lui         $a0, 0xC348
    ctx->pc = 0x22b878u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49992 << 16));
label_22b87c:
    // 0x22b87c: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x22b87cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
label_22b880:
    // 0x22b880: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x22b880u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_22b884:
    // 0x22b884: 0x3c0243c8  lui         $v0, 0x43C8
    ctx->pc = 0x22b884u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17352 << 16));
label_22b888:
    // 0x22b888: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x22b888u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_22b88c:
    // 0x22b88c: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x22b88cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22b890:
    // 0x22b890: 0x460208c2  mul.s       $f3, $f1, $f2
    ctx->pc = 0x22b890u;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_22b894:
    // 0x22b894: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x22b894u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_22b898:
    // 0x22b898: 0xafa200bc  sw          $v0, 0xBC($sp)
    ctx->pc = 0x22b898u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 2));
label_22b89c:
    // 0x22b89c: 0x44851000  mtc1        $a1, $f2
    ctx->pc = 0x22b89cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    ctx->pc = 0x22b8a0u;
    return;
}
