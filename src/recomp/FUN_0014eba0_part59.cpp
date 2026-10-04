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


void FUN_0014eba0_part59(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x16b0c0u: goto label_16b0c0;
        case 0x16b0c4u: goto label_16b0c4;
        case 0x16b0c8u: goto label_16b0c8;
        case 0x16b0ccu: goto label_16b0cc;
        case 0x16b0d0u: goto label_16b0d0;
        case 0x16b0d4u: goto label_16b0d4;
        case 0x16b0d8u: goto label_16b0d8;
        case 0x16b0dcu: goto label_16b0dc;
        case 0x16b0e0u: goto label_16b0e0;
        case 0x16b0e4u: goto label_16b0e4;
        case 0x16b0e8u: goto label_16b0e8;
        case 0x16b0ecu: goto label_16b0ec;
        case 0x16b0f0u: goto label_16b0f0;
        case 0x16b0f4u: goto label_16b0f4;
        case 0x16b0f8u: goto label_16b0f8;
        case 0x16b0fcu: goto label_16b0fc;
        case 0x16b100u: goto label_16b100;
        case 0x16b104u: goto label_16b104;
        case 0x16b108u: goto label_16b108;
        case 0x16b10cu: goto label_16b10c;
        case 0x16b110u: goto label_16b110;
        case 0x16b114u: goto label_16b114;
        case 0x16b118u: goto label_16b118;
        case 0x16b11cu: goto label_16b11c;
        case 0x16b120u: goto label_16b120;
        case 0x16b124u: goto label_16b124;
        case 0x16b128u: goto label_16b128;
        case 0x16b12cu: goto label_16b12c;
        case 0x16b130u: goto label_16b130;
        case 0x16b134u: goto label_16b134;
        case 0x16b138u: goto label_16b138;
        case 0x16b13cu: goto label_16b13c;
        case 0x16b140u: goto label_16b140;
        case 0x16b144u: goto label_16b144;
        case 0x16b148u: goto label_16b148;
        case 0x16b14cu: goto label_16b14c;
        case 0x16b150u: goto label_16b150;
        case 0x16b154u: goto label_16b154;
        case 0x16b158u: goto label_16b158;
        case 0x16b15cu: goto label_16b15c;
        case 0x16b160u: goto label_16b160;
        case 0x16b164u: goto label_16b164;
        case 0x16b168u: goto label_16b168;
        case 0x16b16cu: goto label_16b16c;
        case 0x16b170u: goto label_16b170;
        case 0x16b174u: goto label_16b174;
        case 0x16b178u: goto label_16b178;
        case 0x16b17cu: goto label_16b17c;
        case 0x16b180u: goto label_16b180;
        case 0x16b184u: goto label_16b184;
        case 0x16b188u: goto label_16b188;
        case 0x16b18cu: goto label_16b18c;
        case 0x16b190u: goto label_16b190;
        case 0x16b194u: goto label_16b194;
        case 0x16b198u: goto label_16b198;
        case 0x16b19cu: goto label_16b19c;
        case 0x16b1a0u: goto label_16b1a0;
        case 0x16b1a4u: goto label_16b1a4;
        case 0x16b1a8u: goto label_16b1a8;
        case 0x16b1acu: goto label_16b1ac;
        case 0x16b1b0u: goto label_16b1b0;
        case 0x16b1b4u: goto label_16b1b4;
        case 0x16b1b8u: goto label_16b1b8;
        case 0x16b1bcu: goto label_16b1bc;
        case 0x16b1c0u: goto label_16b1c0;
        case 0x16b1c4u: goto label_16b1c4;
        case 0x16b1c8u: goto label_16b1c8;
        case 0x16b1ccu: goto label_16b1cc;
        case 0x16b1d0u: goto label_16b1d0;
        case 0x16b1d4u: goto label_16b1d4;
        case 0x16b1d8u: goto label_16b1d8;
        case 0x16b1dcu: goto label_16b1dc;
        case 0x16b1e0u: goto label_16b1e0;
        case 0x16b1e4u: goto label_16b1e4;
        case 0x16b1e8u: goto label_16b1e8;
        case 0x16b1ecu: goto label_16b1ec;
        case 0x16b1f0u: goto label_16b1f0;
        case 0x16b1f4u: goto label_16b1f4;
        case 0x16b1f8u: goto label_16b1f8;
        case 0x16b1fcu: goto label_16b1fc;
        case 0x16b200u: goto label_16b200;
        case 0x16b204u: goto label_16b204;
        case 0x16b208u: goto label_16b208;
        case 0x16b20cu: goto label_16b20c;
        case 0x16b210u: goto label_16b210;
        case 0x16b214u: goto label_16b214;
        case 0x16b218u: goto label_16b218;
        case 0x16b21cu: goto label_16b21c;
        case 0x16b220u: goto label_16b220;
        case 0x16b224u: goto label_16b224;
        case 0x16b228u: goto label_16b228;
        case 0x16b22cu: goto label_16b22c;
        case 0x16b230u: goto label_16b230;
        case 0x16b234u: goto label_16b234;
        case 0x16b238u: goto label_16b238;
        case 0x16b23cu: goto label_16b23c;
        case 0x16b240u: goto label_16b240;
        case 0x16b244u: goto label_16b244;
        case 0x16b248u: goto label_16b248;
        case 0x16b24cu: goto label_16b24c;
        case 0x16b250u: goto label_16b250;
        case 0x16b254u: goto label_16b254;
        case 0x16b258u: goto label_16b258;
        case 0x16b25cu: goto label_16b25c;
        case 0x16b260u: goto label_16b260;
        case 0x16b264u: goto label_16b264;
        case 0x16b268u: goto label_16b268;
        case 0x16b26cu: goto label_16b26c;
        case 0x16b270u: goto label_16b270;
        case 0x16b274u: goto label_16b274;
        case 0x16b278u: goto label_16b278;
        case 0x16b27cu: goto label_16b27c;
        case 0x16b280u: goto label_16b280;
        case 0x16b284u: goto label_16b284;
        case 0x16b288u: goto label_16b288;
        case 0x16b28cu: goto label_16b28c;
        case 0x16b290u: goto label_16b290;
        case 0x16b294u: goto label_16b294;
        case 0x16b298u: goto label_16b298;
        case 0x16b29cu: goto label_16b29c;
        case 0x16b2a0u: goto label_16b2a0;
        case 0x16b2a4u: goto label_16b2a4;
        case 0x16b2a8u: goto label_16b2a8;
        case 0x16b2acu: goto label_16b2ac;
        case 0x16b2b0u: goto label_16b2b0;
        case 0x16b2b4u: goto label_16b2b4;
        case 0x16b2b8u: goto label_16b2b8;
        case 0x16b2bcu: goto label_16b2bc;
        case 0x16b2c0u: goto label_16b2c0;
        case 0x16b2c4u: goto label_16b2c4;
        case 0x16b2c8u: goto label_16b2c8;
        case 0x16b2ccu: goto label_16b2cc;
        case 0x16b2d0u: goto label_16b2d0;
        case 0x16b2d4u: goto label_16b2d4;
        case 0x16b2d8u: goto label_16b2d8;
        case 0x16b2dcu: goto label_16b2dc;
        case 0x16b2e0u: goto label_16b2e0;
        case 0x16b2e4u: goto label_16b2e4;
        case 0x16b2e8u: goto label_16b2e8;
        case 0x16b2ecu: goto label_16b2ec;
        case 0x16b2f0u: goto label_16b2f0;
        case 0x16b2f4u: goto label_16b2f4;
        case 0x16b2f8u: goto label_16b2f8;
        case 0x16b2fcu: goto label_16b2fc;
        case 0x16b300u: goto label_16b300;
        case 0x16b304u: goto label_16b304;
        case 0x16b308u: goto label_16b308;
        case 0x16b30cu: goto label_16b30c;
        case 0x16b310u: goto label_16b310;
        case 0x16b314u: goto label_16b314;
        case 0x16b318u: goto label_16b318;
        case 0x16b31cu: goto label_16b31c;
        case 0x16b320u: goto label_16b320;
        case 0x16b324u: goto label_16b324;
        case 0x16b328u: goto label_16b328;
        case 0x16b32cu: goto label_16b32c;
        case 0x16b330u: goto label_16b330;
        case 0x16b334u: goto label_16b334;
        case 0x16b338u: goto label_16b338;
        case 0x16b33cu: goto label_16b33c;
        case 0x16b340u: goto label_16b340;
        case 0x16b344u: goto label_16b344;
        case 0x16b348u: goto label_16b348;
        case 0x16b34cu: goto label_16b34c;
        case 0x16b350u: goto label_16b350;
        case 0x16b354u: goto label_16b354;
        case 0x16b358u: goto label_16b358;
        case 0x16b35cu: goto label_16b35c;
        case 0x16b360u: goto label_16b360;
        case 0x16b364u: goto label_16b364;
        case 0x16b368u: goto label_16b368;
        case 0x16b36cu: goto label_16b36c;
        case 0x16b370u: goto label_16b370;
        case 0x16b374u: goto label_16b374;
        case 0x16b378u: goto label_16b378;
        case 0x16b37cu: goto label_16b37c;
        case 0x16b380u: goto label_16b380;
        case 0x16b384u: goto label_16b384;
        case 0x16b388u: goto label_16b388;
        case 0x16b38cu: goto label_16b38c;
        case 0x16b390u: goto label_16b390;
        case 0x16b394u: goto label_16b394;
        case 0x16b398u: goto label_16b398;
        case 0x16b39cu: goto label_16b39c;
        case 0x16b3a0u: goto label_16b3a0;
        case 0x16b3a4u: goto label_16b3a4;
        case 0x16b3a8u: goto label_16b3a8;
        case 0x16b3acu: goto label_16b3ac;
        case 0x16b3b0u: goto label_16b3b0;
        case 0x16b3b4u: goto label_16b3b4;
        case 0x16b3b8u: goto label_16b3b8;
        case 0x16b3bcu: goto label_16b3bc;
        case 0x16b3c0u: goto label_16b3c0;
        case 0x16b3c4u: goto label_16b3c4;
        case 0x16b3c8u: goto label_16b3c8;
        case 0x16b3ccu: goto label_16b3cc;
        case 0x16b3d0u: goto label_16b3d0;
        case 0x16b3d4u: goto label_16b3d4;
        case 0x16b3d8u: goto label_16b3d8;
        case 0x16b3dcu: goto label_16b3dc;
        case 0x16b3e0u: goto label_16b3e0;
        case 0x16b3e4u: goto label_16b3e4;
        case 0x16b3e8u: goto label_16b3e8;
        case 0x16b3ecu: goto label_16b3ec;
        case 0x16b3f0u: goto label_16b3f0;
        case 0x16b3f4u: goto label_16b3f4;
        case 0x16b3f8u: goto label_16b3f8;
        case 0x16b3fcu: goto label_16b3fc;
        case 0x16b400u: goto label_16b400;
        case 0x16b404u: goto label_16b404;
        case 0x16b408u: goto label_16b408;
        case 0x16b40cu: goto label_16b40c;
        case 0x16b410u: goto label_16b410;
        case 0x16b414u: goto label_16b414;
        case 0x16b418u: goto label_16b418;
        case 0x16b41cu: goto label_16b41c;
        case 0x16b420u: goto label_16b420;
        case 0x16b424u: goto label_16b424;
        case 0x16b428u: goto label_16b428;
        case 0x16b42cu: goto label_16b42c;
        case 0x16b430u: goto label_16b430;
        case 0x16b434u: goto label_16b434;
        case 0x16b438u: goto label_16b438;
        case 0x16b43cu: goto label_16b43c;
        case 0x16b440u: goto label_16b440;
        case 0x16b444u: goto label_16b444;
        case 0x16b448u: goto label_16b448;
        case 0x16b44cu: goto label_16b44c;
        case 0x16b450u: goto label_16b450;
        case 0x16b454u: goto label_16b454;
        case 0x16b458u: goto label_16b458;
        case 0x16b45cu: goto label_16b45c;
        case 0x16b460u: goto label_16b460;
        case 0x16b464u: goto label_16b464;
        case 0x16b468u: goto label_16b468;
        case 0x16b46cu: goto label_16b46c;
        case 0x16b470u: goto label_16b470;
        case 0x16b474u: goto label_16b474;
        case 0x16b478u: goto label_16b478;
        case 0x16b47cu: goto label_16b47c;
        case 0x16b480u: goto label_16b480;
        case 0x16b484u: goto label_16b484;
        case 0x16b488u: goto label_16b488;
        case 0x16b48cu: goto label_16b48c;
        case 0x16b490u: goto label_16b490;
        case 0x16b494u: goto label_16b494;
        case 0x16b498u: goto label_16b498;
        case 0x16b49cu: goto label_16b49c;
        case 0x16b4a0u: goto label_16b4a0;
        case 0x16b4a4u: goto label_16b4a4;
        case 0x16b4a8u: goto label_16b4a8;
        case 0x16b4acu: goto label_16b4ac;
        case 0x16b4b0u: goto label_16b4b0;
        case 0x16b4b4u: goto label_16b4b4;
        case 0x16b4b8u: goto label_16b4b8;
        case 0x16b4bcu: goto label_16b4bc;
        case 0x16b4c0u: goto label_16b4c0;
        case 0x16b4c4u: goto label_16b4c4;
        case 0x16b4c8u: goto label_16b4c8;
        case 0x16b4ccu: goto label_16b4cc;
        case 0x16b4d0u: goto label_16b4d0;
        case 0x16b4d4u: goto label_16b4d4;
        case 0x16b4d8u: goto label_16b4d8;
        case 0x16b4dcu: goto label_16b4dc;
        case 0x16b4e0u: goto label_16b4e0;
        case 0x16b4e4u: goto label_16b4e4;
        case 0x16b4e8u: goto label_16b4e8;
        case 0x16b4ecu: goto label_16b4ec;
        case 0x16b4f0u: goto label_16b4f0;
        case 0x16b4f4u: goto label_16b4f4;
        case 0x16b4f8u: goto label_16b4f8;
        case 0x16b4fcu: goto label_16b4fc;
        case 0x16b500u: goto label_16b500;
        case 0x16b504u: goto label_16b504;
        case 0x16b508u: goto label_16b508;
        case 0x16b50cu: goto label_16b50c;
        case 0x16b510u: goto label_16b510;
        case 0x16b514u: goto label_16b514;
        case 0x16b518u: goto label_16b518;
        case 0x16b51cu: goto label_16b51c;
        case 0x16b520u: goto label_16b520;
        case 0x16b524u: goto label_16b524;
        case 0x16b528u: goto label_16b528;
        case 0x16b52cu: goto label_16b52c;
        case 0x16b530u: goto label_16b530;
        case 0x16b534u: goto label_16b534;
        case 0x16b538u: goto label_16b538;
        case 0x16b53cu: goto label_16b53c;
        case 0x16b540u: goto label_16b540;
        case 0x16b544u: goto label_16b544;
        case 0x16b548u: goto label_16b548;
        case 0x16b54cu: goto label_16b54c;
        case 0x16b550u: goto label_16b550;
        case 0x16b554u: goto label_16b554;
        case 0x16b558u: goto label_16b558;
        case 0x16b55cu: goto label_16b55c;
        case 0x16b560u: goto label_16b560;
        case 0x16b564u: goto label_16b564;
        case 0x16b568u: goto label_16b568;
        case 0x16b56cu: goto label_16b56c;
        case 0x16b570u: goto label_16b570;
        case 0x16b574u: goto label_16b574;
        case 0x16b578u: goto label_16b578;
        case 0x16b57cu: goto label_16b57c;
        case 0x16b580u: goto label_16b580;
        case 0x16b584u: goto label_16b584;
        case 0x16b588u: goto label_16b588;
        case 0x16b58cu: goto label_16b58c;
        case 0x16b590u: goto label_16b590;
        case 0x16b594u: goto label_16b594;
        case 0x16b598u: goto label_16b598;
        case 0x16b59cu: goto label_16b59c;
        case 0x16b5a0u: goto label_16b5a0;
        case 0x16b5a4u: goto label_16b5a4;
        case 0x16b5a8u: goto label_16b5a8;
        case 0x16b5acu: goto label_16b5ac;
        case 0x16b5b0u: goto label_16b5b0;
        case 0x16b5b4u: goto label_16b5b4;
        case 0x16b5b8u: goto label_16b5b8;
        case 0x16b5bcu: goto label_16b5bc;
        case 0x16b5c0u: goto label_16b5c0;
        case 0x16b5c4u: goto label_16b5c4;
        case 0x16b5c8u: goto label_16b5c8;
        case 0x16b5ccu: goto label_16b5cc;
        case 0x16b5d0u: goto label_16b5d0;
        case 0x16b5d4u: goto label_16b5d4;
        case 0x16b5d8u: goto label_16b5d8;
        case 0x16b5dcu: goto label_16b5dc;
        case 0x16b5e0u: goto label_16b5e0;
        case 0x16b5e4u: goto label_16b5e4;
        case 0x16b5e8u: goto label_16b5e8;
        case 0x16b5ecu: goto label_16b5ec;
        case 0x16b5f0u: goto label_16b5f0;
        case 0x16b5f4u: goto label_16b5f4;
        case 0x16b5f8u: goto label_16b5f8;
        case 0x16b5fcu: goto label_16b5fc;
        case 0x16b600u: goto label_16b600;
        case 0x16b604u: goto label_16b604;
        case 0x16b608u: goto label_16b608;
        case 0x16b60cu: goto label_16b60c;
        case 0x16b610u: goto label_16b610;
        case 0x16b614u: goto label_16b614;
        case 0x16b618u: goto label_16b618;
        case 0x16b61cu: goto label_16b61c;
        case 0x16b620u: goto label_16b620;
        case 0x16b624u: goto label_16b624;
        case 0x16b628u: goto label_16b628;
        case 0x16b62cu: goto label_16b62c;
        case 0x16b630u: goto label_16b630;
        case 0x16b634u: goto label_16b634;
        case 0x16b638u: goto label_16b638;
        case 0x16b63cu: goto label_16b63c;
        case 0x16b640u: goto label_16b640;
        case 0x16b644u: goto label_16b644;
        case 0x16b648u: goto label_16b648;
        case 0x16b64cu: goto label_16b64c;
        case 0x16b650u: goto label_16b650;
        case 0x16b654u: goto label_16b654;
        case 0x16b658u: goto label_16b658;
        case 0x16b65cu: goto label_16b65c;
        case 0x16b660u: goto label_16b660;
        case 0x16b664u: goto label_16b664;
        case 0x16b668u: goto label_16b668;
        case 0x16b66cu: goto label_16b66c;
        case 0x16b670u: goto label_16b670;
        case 0x16b674u: goto label_16b674;
        case 0x16b678u: goto label_16b678;
        case 0x16b67cu: goto label_16b67c;
        case 0x16b680u: goto label_16b680;
        case 0x16b684u: goto label_16b684;
        case 0x16b688u: goto label_16b688;
        case 0x16b68cu: goto label_16b68c;
        case 0x16b690u: goto label_16b690;
        case 0x16b694u: goto label_16b694;
        case 0x16b698u: goto label_16b698;
        case 0x16b69cu: goto label_16b69c;
        case 0x16b6a0u: goto label_16b6a0;
        case 0x16b6a4u: goto label_16b6a4;
        case 0x16b6a8u: goto label_16b6a8;
        case 0x16b6acu: goto label_16b6ac;
        case 0x16b6b0u: goto label_16b6b0;
        case 0x16b6b4u: goto label_16b6b4;
        case 0x16b6b8u: goto label_16b6b8;
        case 0x16b6bcu: goto label_16b6bc;
        case 0x16b6c0u: goto label_16b6c0;
        case 0x16b6c4u: goto label_16b6c4;
        case 0x16b6c8u: goto label_16b6c8;
        case 0x16b6ccu: goto label_16b6cc;
        case 0x16b6d0u: goto label_16b6d0;
        case 0x16b6d4u: goto label_16b6d4;
        case 0x16b6d8u: goto label_16b6d8;
        case 0x16b6dcu: goto label_16b6dc;
        case 0x16b6e0u: goto label_16b6e0;
        case 0x16b6e4u: goto label_16b6e4;
        case 0x16b6e8u: goto label_16b6e8;
        case 0x16b6ecu: goto label_16b6ec;
        case 0x16b6f0u: goto label_16b6f0;
        case 0x16b6f4u: goto label_16b6f4;
        case 0x16b6f8u: goto label_16b6f8;
        case 0x16b6fcu: goto label_16b6fc;
        case 0x16b700u: goto label_16b700;
        case 0x16b704u: goto label_16b704;
        case 0x16b708u: goto label_16b708;
        case 0x16b70cu: goto label_16b70c;
        case 0x16b710u: goto label_16b710;
        case 0x16b714u: goto label_16b714;
        case 0x16b718u: goto label_16b718;
        case 0x16b71cu: goto label_16b71c;
        case 0x16b720u: goto label_16b720;
        case 0x16b724u: goto label_16b724;
        case 0x16b728u: goto label_16b728;
        case 0x16b72cu: goto label_16b72c;
        case 0x16b730u: goto label_16b730;
        case 0x16b734u: goto label_16b734;
        case 0x16b738u: goto label_16b738;
        case 0x16b73cu: goto label_16b73c;
        case 0x16b740u: goto label_16b740;
        case 0x16b744u: goto label_16b744;
        case 0x16b748u: goto label_16b748;
        case 0x16b74cu: goto label_16b74c;
        case 0x16b750u: goto label_16b750;
        case 0x16b754u: goto label_16b754;
        case 0x16b758u: goto label_16b758;
        case 0x16b75cu: goto label_16b75c;
        case 0x16b760u: goto label_16b760;
        case 0x16b764u: goto label_16b764;
        case 0x16b768u: goto label_16b768;
        case 0x16b76cu: goto label_16b76c;
        case 0x16b770u: goto label_16b770;
        case 0x16b774u: goto label_16b774;
        case 0x16b778u: goto label_16b778;
        case 0x16b77cu: goto label_16b77c;
        case 0x16b780u: goto label_16b780;
        case 0x16b784u: goto label_16b784;
        case 0x16b788u: goto label_16b788;
        case 0x16b78cu: goto label_16b78c;
        case 0x16b790u: goto label_16b790;
        case 0x16b794u: goto label_16b794;
        case 0x16b798u: goto label_16b798;
        case 0x16b79cu: goto label_16b79c;
        case 0x16b7a0u: goto label_16b7a0;
        case 0x16b7a4u: goto label_16b7a4;
        case 0x16b7a8u: goto label_16b7a8;
        case 0x16b7acu: goto label_16b7ac;
        case 0x16b7b0u: goto label_16b7b0;
        case 0x16b7b4u: goto label_16b7b4;
        case 0x16b7b8u: goto label_16b7b8;
        case 0x16b7bcu: goto label_16b7bc;
        case 0x16b7c0u: goto label_16b7c0;
        case 0x16b7c4u: goto label_16b7c4;
        case 0x16b7c8u: goto label_16b7c8;
        case 0x16b7ccu: goto label_16b7cc;
        case 0x16b7d0u: goto label_16b7d0;
        case 0x16b7d4u: goto label_16b7d4;
        case 0x16b7d8u: goto label_16b7d8;
        case 0x16b7dcu: goto label_16b7dc;
        case 0x16b7e0u: goto label_16b7e0;
        case 0x16b7e4u: goto label_16b7e4;
        case 0x16b7e8u: goto label_16b7e8;
        case 0x16b7ecu: goto label_16b7ec;
        case 0x16b7f0u: goto label_16b7f0;
        case 0x16b7f4u: goto label_16b7f4;
        case 0x16b7f8u: goto label_16b7f8;
        case 0x16b7fcu: goto label_16b7fc;
        case 0x16b800u: goto label_16b800;
        case 0x16b804u: goto label_16b804;
        case 0x16b808u: goto label_16b808;
        case 0x16b80cu: goto label_16b80c;
        case 0x16b810u: goto label_16b810;
        case 0x16b814u: goto label_16b814;
        case 0x16b818u: goto label_16b818;
        case 0x16b81cu: goto label_16b81c;
        case 0x16b820u: goto label_16b820;
        case 0x16b824u: goto label_16b824;
        case 0x16b828u: goto label_16b828;
        case 0x16b82cu: goto label_16b82c;
        case 0x16b830u: goto label_16b830;
        case 0x16b834u: goto label_16b834;
        case 0x16b838u: goto label_16b838;
        case 0x16b83cu: goto label_16b83c;
        case 0x16b840u: goto label_16b840;
        case 0x16b844u: goto label_16b844;
        case 0x16b848u: goto label_16b848;
        case 0x16b84cu: goto label_16b84c;
        case 0x16b850u: goto label_16b850;
        case 0x16b854u: goto label_16b854;
        case 0x16b858u: goto label_16b858;
        case 0x16b85cu: goto label_16b85c;
        case 0x16b860u: goto label_16b860;
        case 0x16b864u: goto label_16b864;
        case 0x16b868u: goto label_16b868;
        case 0x16b86cu: goto label_16b86c;
        case 0x16b870u: goto label_16b870;
        case 0x16b874u: goto label_16b874;
        case 0x16b878u: goto label_16b878;
        case 0x16b87cu: goto label_16b87c;
        case 0x16b880u: goto label_16b880;
        case 0x16b884u: goto label_16b884;
        case 0x16b888u: goto label_16b888;
        case 0x16b88cu: goto label_16b88c;
        default: return;
    }

label_16b0c0:
    if (ctx->pc == 0x16B0C0u) {
        ctx->pc = 0x16B0C4u;
        goto label_16b0c4;
    }
    ctx->pc = 0x16B0BCu;
    {
        const bool branch_taken_0x16b0bc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x16b0bc) {
            ctx->pc = 0x16AFBCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x16afbc; return; }
        }
    }
    ctx->pc = 0x16B0C4u;
label_16b0c4:
    // 0x16b0c4: 0x0  nop
    ctx->pc = 0x16b0c4u;
    // NOP
label_16b0c8:
    // 0x16b0c8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x16b0c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_16b0cc:
    // 0x16b0cc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x16b0ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_16b0d0:
    // 0x16b0d0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16b0d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_16b0d4:
    // 0x16b0d4: 0x3e00008  jr          $ra
label_16b0d8:
    if (ctx->pc == 0x16B0D8u) {
        ctx->pc = 0x16B0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B0D4u;
        // 0x16b0d8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16B0DCu;
        goto label_16b0dc;
    }
    ctx->pc = 0x16B0D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16B0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B0D4u;
        // 0x16b0d8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16B0D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16B0DCu;
label_16b0dc:
    // 0x16b0dc: 0x0  nop
    ctx->pc = 0x16b0dcu;
    // NOP
label_16b0e0:
    // 0x16b0e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16b0e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_16b0e4:
    // 0x16b0e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16b0e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_16b0e8:
    // 0x16b0e8: 0xc05a6c4  jal         func_169B10
label_16b0ec:
    if (ctx->pc == 0x16B0ECu) {
        ctx->pc = 0x16B0F0u;
        goto label_16b0f0;
    }
    ctx->pc = 0x16B0E8u;
    SET_GPR_U32(ctx, 31, 0x16B0F0u);
    ctx->pc = 0x169B10u;
    { ctx->pc = 0x169b10; return; }
    ctx->pc = 0x16B0F0u;
label_16b0f0:
    // 0x16b0f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16b0f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_16b0f4:
    // 0x16b0f4: 0x3e00008  jr          $ra
label_16b0f8:
    if (ctx->pc == 0x16B0F8u) {
        ctx->pc = 0x16B0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B0F4u;
        // 0x16b0f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16B0FCu;
        goto label_16b0fc;
    }
    ctx->pc = 0x16B0F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16B0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B0F4u;
        // 0x16b0f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16B0F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16B0FCu;
label_16b0fc:
    // 0x16b0fc: 0x0  nop
    ctx->pc = 0x16b0fcu;
    // NOP
label_16b100:
    // 0x16b100: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x16b100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_16b104:
    // 0x16b104: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x16b104u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16b108:
    // 0x16b108: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x16b108u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_16b10c:
    // 0x16b10c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16b10cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_16b110:
    // 0x16b110: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x16b110u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_16b114:
    // 0x16b114: 0x8f848700  lw          $a0, -0x7900($gp)
    ctx->pc = 0x16b114u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936320)));
label_16b118:
    // 0x16b118: 0x10830017  beq         $a0, $v1, . + 4 + (0x17 << 2)
label_16b11c:
    if (ctx->pc == 0x16B11Cu) {
        ctx->pc = 0x16B11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B118u;
        // 0x16b11c: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16B120u;
        goto label_16b120;
    }
    ctx->pc = 0x16B118u;
    {
        const bool branch_taken_0x16b118 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x16B11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B118u;
        // 0x16b11c: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b118) {
            ctx->pc = 0x16B178u;
            goto label_16b178;
        }
    }
    ctx->pc = 0x16B120u;
label_16b120:
    // 0x16b120: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x16b120u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_16b124:
    // 0x16b124: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
label_16b128:
    if (ctx->pc == 0x16B128u) {
        ctx->pc = 0x16B128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B124u;
        // 0x16b128: 0x3c033f80  lui         $v1, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16B12Cu;
        goto label_16b12c;
    }
    ctx->pc = 0x16B124u;
    {
        const bool branch_taken_0x16b124 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x16B128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B124u;
        // 0x16b128: 0x3c033f80  lui         $v1, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b124) {
            ctx->pc = 0x16B138u;
            goto label_16b138;
        }
    }
    ctx->pc = 0x16B12Cu;
label_16b12c:
    // 0x16b12c: 0x10000013  b           . + 4 + (0x13 << 2)
label_16b130:
    if (ctx->pc == 0x16B130u) {
        ctx->pc = 0x16B130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B12Cu;
        // 0x16b130: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16B134u;
        goto label_16b134;
    }
    ctx->pc = 0x16B12Cu;
    {
        const bool branch_taken_0x16b12c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B12Cu;
        // 0x16b130: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b12c) {
            ctx->pc = 0x16B17Cu;
            goto label_16b17c;
        }
    }
    ctx->pc = 0x16B134u;
label_16b134:
    // 0x16b134: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x16b134u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_16b138:
    // 0x16b138: 0x3c02457a  lui         $v0, 0x457A
    ctx->pc = 0x16b138u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17786 << 16));
label_16b13c:
    // 0x16b13c: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x16b13cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_16b140:
    // 0x16b140: 0x27a4002e  addiu       $a0, $sp, 0x2E
    ctx->pc = 0x16b140u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 46));
label_16b144:
    // 0x16b144: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x16b144u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_16b148:
    // 0x16b148: 0x27a5002f  addiu       $a1, $sp, 0x2F
    ctx->pc = 0x16b148u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 47));
label_16b14c:
    // 0x16b14c: 0x24070006  addiu       $a3, $zero, 0x6
    ctx->pc = 0x16b14cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_16b150:
    // 0x16b150: 0xc05ac64  jal         func_16B190
label_16b154:
    if (ctx->pc == 0x16B154u) {
        ctx->pc = 0x16B154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B150u;
        // 0x16b154: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16B158u;
        goto label_16b158;
    }
    ctx->pc = 0x16B150u;
    SET_GPR_U32(ctx, 31, 0x16B158u);
    ctx->pc = 0x16B154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B150u;
    // 0x16b154: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16B190u;
    goto label_16b190;
    ctx->pc = 0x16B158u;
label_16b158:
    // 0x16b158: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_16b15c:
    if (ctx->pc == 0x16B15Cu) {
        ctx->pc = 0x16B160u;
        goto label_16b160;
    }
    ctx->pc = 0x16B158u;
    {
        const bool branch_taken_0x16b158 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16b158) {
            ctx->pc = 0x16B178u;
            goto label_16b178;
        }
    }
    ctx->pc = 0x16B160u;
label_16b160:
    // 0x16b160: 0x93a6002e  lbu         $a2, 0x2E($sp)
    ctx->pc = 0x16b160u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 46)));
label_16b164:
    // 0x16b164: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x16b164u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16b168:
    // 0x16b168: 0x93a7002f  lbu         $a3, 0x2F($sp)
    ctx->pc = 0x16b168u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 47)));
label_16b16c:
    // 0x16b16c: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x16b16cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_16b170:
    // 0x16b170: 0xc05b4d4  jal         func_16D350
label_16b174:
    if (ctx->pc == 0x16B174u) {
        ctx->pc = 0x16B174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B170u;
        // 0x16b174: 0x2408003c  addiu       $t0, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16B178u;
        goto label_16b178;
    }
    ctx->pc = 0x16B170u;
    SET_GPR_U32(ctx, 31, 0x16B178u);
    ctx->pc = 0x16B174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B170u;
    // 0x16b174: 0x2408003c  addiu       $t0, $zero, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D350u;
    { ctx->pc = 0x16d350; return; }
    ctx->pc = 0x16B178u;
label_16b178:
    // 0x16b178: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x16b178u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_16b17c:
    // 0x16b17c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16b17cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_16b180:
    // 0x16b180: 0x3e00008  jr          $ra
label_16b184:
    if (ctx->pc == 0x16B184u) {
        ctx->pc = 0x16B184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B180u;
        // 0x16b184: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16B188u;
        goto label_16b188;
    }
    ctx->pc = 0x16B180u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16B184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B180u;
        // 0x16b184: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16B180u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16B188u;
label_16b188:
    // 0x16b188: 0x0  nop
    ctx->pc = 0x16b188u;
    // NOP
label_16b18c:
    // 0x16b18c: 0x0  nop
    ctx->pc = 0x16b18cu;
    // NOP
label_16b190:
    // 0x16b190: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x16b190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_16b194:
    // 0x16b194: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x16b194u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_16b198:
    // 0x16b198: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x16b198u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_16b19c:
    // 0x16b19c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x16b19cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_16b1a0:
    // 0x16b1a0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x16b1a0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_16b1a4:
    // 0x16b1a4: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x16b1a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_16b1a8:
    // 0x16b1a8: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x16b1a8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_16b1ac:
    // 0x16b1ac: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x16b1acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_16b1b0:
    // 0x16b1b0: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x16b1b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_16b1b4:
    // 0x16b1b4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x16b1b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_16b1b8:
    // 0x16b1b8: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x16b1b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_16b1bc:
    // 0x16b1bc: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x16b1bcu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_16b1c0:
    // 0x16b1c0: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x16b1c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_16b1c4:
    // 0x16b1c4: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x16b1c4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_16b1c8:
    // 0x16b1c8: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x16b1c8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_16b1cc:
    // 0x16b1cc: 0x8f828590  lw          $v0, -0x7A70($gp)
    ctx->pc = 0x16b1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
label_16b1d0:
    // 0x16b1d0: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x16b1d0u;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
label_16b1d4:
    // 0x16b1d4: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x16b1d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
label_16b1d8:
    // 0x16b1d8: 0x14400051  bnez        $v0, . + 4 + (0x51 << 2)
label_16b1dc:
    if (ctx->pc == 0x16B1DCu) {
        ctx->pc = 0x16B1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B1D8u;
        // 0x16b1dc: 0x46006d06  mov.s       $f20, $f13 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x16B1E0u;
        goto label_16b1e0;
    }
    ctx->pc = 0x16B1D8u;
    {
        const bool branch_taken_0x16b1d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16B1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B1D8u;
        // 0x16b1dc: 0x46006d06  mov.s       $f20, $f13 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b1d8) {
            ctx->pc = 0x16B320u;
            goto label_16b320;
        }
    }
    ctx->pc = 0x16B1E0u;
label_16b1e0:
    // 0x16b1e0: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x16b1e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_16b1e4:
    // 0x16b1e4: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x16b1e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_16b1e8:
    // 0x16b1e8: 0xc066d7a  jal         func_19B5E8
label_16b1ec:
    if (ctx->pc == 0x16B1ECu) {
        ctx->pc = 0x16B1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B1E8u;
        // 0x16b1ec: 0x24a59c40  addiu       $a1, $a1, -0x63C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941760));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16B1F0u;
        goto label_16b1f0;
    }
    ctx->pc = 0x16B1E8u;
    SET_GPR_U32(ctx, 31, 0x16B1F0u);
    ctx->pc = 0x16B1ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B1E8u;
    // 0x16b1ec: 0x24a59c40  addiu       $a1, $a1, -0x63C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941760));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B5E8u;
    { ctx->pc = 0x19b5e8; return; }
    ctx->pc = 0x16B1F0u;
label_16b1f0:
    // 0x16b1f0: 0x27b20078  addiu       $s2, $sp, 0x78
    ctx->pc = 0x16b1f0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
label_16b1f4:
    // 0x16b1f4: 0xc64d0000  lwc1        $f13, 0x0($s2)
    ctx->pc = 0x16b1f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_16b1f8:
    // 0x16b1f8: 0xc06d51e  jal         func_1B5478
label_16b1fc:
    if (ctx->pc == 0x16B1FCu) {
        ctx->pc = 0x16B1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B1F8u;
        // 0x16b1fc: 0xc7ac0070  lwc1        $f12, 0x70($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x16B200u;
        goto label_16b200;
    }
    ctx->pc = 0x16B1F8u;
    SET_GPR_U32(ctx, 31, 0x16B200u);
    ctx->pc = 0x16B1FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B1F8u;
    // 0x16b1fc: 0xc7ac0070  lwc1        $f12, 0x70($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5478u;
    { ctx->pc = 0x1b5478; return; }
    ctx->pc = 0x16B200u;
label_16b200:
    // 0x16b200: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x16b200u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
label_16b204:
    // 0x16b204: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x16b204u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
label_16b208:
    // 0x16b208: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x16b208u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_16b20c:
    // 0x16b20c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x16b20cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_16b210:
    // 0x16b210: 0x0  nop
    ctx->pc = 0x16b210u;
    // NOP
label_16b214:
    // 0x16b214: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x16b214u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_16b218:
    // 0x16b218: 0x0  nop
    ctx->pc = 0x16b218u;
    // NOP
label_16b21c:
    // 0x16b21c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_16b220:
    if (ctx->pc == 0x16B220u) {
        ctx->pc = 0x16B220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B21Cu;
        // 0x16b220: 0x3c024049  lui         $v0, 0x4049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16B224u;
        goto label_16b224;
    }
    ctx->pc = 0x16B21Cu;
    {
        const bool branch_taken_0x16b21c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x16B220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B21Cu;
        // 0x16b220: 0x3c024049  lui         $v0, 0x4049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b21c) {
            ctx->pc = 0x16B22Cu;
            goto label_16b22c;
        }
    }
    ctx->pc = 0x16B224u;
label_16b224:
    // 0x16b224: 0x1000000a  b           . + 4 + (0xA << 2)
label_16b228:
    if (ctx->pc == 0x16B228u) {
        ctx->pc = 0x16B228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B224u;
        // 0x16b228: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x16B22Cu;
        goto label_16b22c;
    }
    ctx->pc = 0x16B224u;
    {
        const bool branch_taken_0x16b224 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B224u;
        // 0x16b228: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b224) {
            ctx->pc = 0x16B250u;
            goto label_16b250;
        }
    }
    ctx->pc = 0x16B22Cu;
label_16b22c:
    // 0x16b22c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x16b22cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_16b230:
    // 0x16b230: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x16b230u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_16b234:
    // 0x16b234: 0x0  nop
    ctx->pc = 0x16b234u;
    // NOP
label_16b238:
    // 0x16b238: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x16b238u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_16b23c:
    // 0x16b23c: 0x0  nop
    ctx->pc = 0x16b23cu;
    // NOP
label_16b240:
    // 0x16b240: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_16b244:
    if (ctx->pc == 0x16B244u) {
        ctx->pc = 0x16B248u;
        goto label_16b248;
    }
    ctx->pc = 0x16B240u;
    {
        const bool branch_taken_0x16b240 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x16b240) {
            ctx->pc = 0x16B250u;
            goto label_16b250;
        }
    }
    ctx->pc = 0x16B248u;
label_16b248:
    // 0x16b248: 0x10000001  b           . + 4 + (0x1 << 2)
label_16b24c:
    if (ctx->pc == 0x16B24Cu) {
        ctx->pc = 0x16B24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B248u;
        // 0x16b24c: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x16B250u;
        goto label_16b250;
    }
    ctx->pc = 0x16B248u;
    {
        const bool branch_taken_0x16b248 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B248u;
        // 0x16b24c: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b248) {
            ctx->pc = 0x16B250u;
            goto label_16b250;
        }
    }
    ctx->pc = 0x16B250u;
label_16b250:
    // 0x16b250: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x16b250u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_16b254:
    // 0x16b254: 0x3c03427c  lui         $v1, 0x427C
    ctx->pc = 0x16b254u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17020 << 16));
label_16b258:
    // 0x16b258: 0x34440fdb  ori         $a0, $v0, 0xFDB
    ctx->pc = 0x16b258u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_16b25c:
    // 0x16b25c: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x16b25cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_16b260:
    // 0x16b260: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x16b260u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_16b264:
    // 0x16b264: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x16b264u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_16b268:
    // 0x16b268: 0x0  nop
    ctx->pc = 0x16b268u;
    // NOP
label_16b26c:
    // 0x16b26c: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x16b26cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_16b270:
    // 0x16b270: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x16b270u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_16b274:
    // 0x16b274: 0x46020043  div.s       $f1, $f0, $f2
    ctx->pc = 0x16b274u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[1] = ctx->f[0] / ctx->f[2];
label_16b278:
    // 0x16b278: 0x0  nop
    ctx->pc = 0x16b278u;
    // NOP
label_16b27c:
    // 0x16b27c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16b27cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_16b280:
    // 0x16b280: 0x0  nop
    ctx->pc = 0x16b280u;
    // NOP
label_16b284:
    // 0x16b284: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x16b284u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_16b288:
    // 0x16b288: 0x0  nop
    ctx->pc = 0x16b288u;
    // NOP
label_16b28c:
    // 0x16b28c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_16b290:
    if (ctx->pc == 0x16B290u) {
        ctx->pc = 0x16B294u;
        goto label_16b294;
    }
    ctx->pc = 0x16B28Cu;
    {
        const bool branch_taken_0x16b28c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x16b28c) {
            ctx->pc = 0x16B2A4u;
            goto label_16b2a4;
        }
    }
    ctx->pc = 0x16B294u;
label_16b294:
    // 0x16b294: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x16b294u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_16b298:
    // 0x16b298: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x16b298u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_16b29c:
    // 0x16b29c: 0x10000008  b           . + 4 + (0x8 << 2)
label_16b2a0:
    if (ctx->pc == 0x16B2A0u) {
        ctx->pc = 0x16B2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B29Cu;
        // 0x16b2a0: 0xa2630000  sb          $v1, 0x0($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16B2A4u;
        goto label_16b2a4;
    }
    ctx->pc = 0x16B29Cu;
    {
        const bool branch_taken_0x16b29c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B29Cu;
        // 0x16b2a0: 0xa2630000  sb          $v1, 0x0($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b29c) {
            ctx->pc = 0x16B2C0u;
            goto label_16b2c0;
        }
    }
    ctx->pc = 0x16B2A4u;
label_16b2a4:
    // 0x16b2a4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x16b2a4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_16b2a8:
    // 0x16b2a8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x16b2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_16b2ac:
    // 0x16b2ac: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x16b2acu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_16b2b0:
    // 0x16b2b0: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x16b2b0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_16b2b4:
    // 0x16b2b4: 0x0  nop
    ctx->pc = 0x16b2b4u;
    // NOP
label_16b2b8:
    // 0x16b2b8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x16b2b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_16b2bc:
    // 0x16b2bc: 0xa2630000  sb          $v1, 0x0($s3)
    ctx->pc = 0x16b2bcu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 3));
label_16b2c0:
    // 0x16b2c0: 0xc06d448  jal         func_1B5120
label_16b2c4:
    if (ctx->pc == 0x16B2C4u) {
        ctx->pc = 0x16B2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B2C0u;
        // 0x16b2c4: 0xc7ac0070  lwc1        $f12, 0x70($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x16B2C8u;
        goto label_16b2c8;
    }
    ctx->pc = 0x16B2C0u;
    SET_GPR_U32(ctx, 31, 0x16B2C8u);
    ctx->pc = 0x16B2C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B2C0u;
    // 0x16b2c4: 0xc7ac0070  lwc1        $f12, 0x70($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5120u;
    { ctx->pc = 0x1b5120; return; }
    ctx->pc = 0x16B2C8u;
label_16b2c8:
    // 0x16b2c8: 0xc64c0000  lwc1        $f12, 0x0($s2)
    ctx->pc = 0x16b2c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_16b2cc:
    // 0x16b2cc: 0xc06d448  jal         func_1B5120
label_16b2d0:
    if (ctx->pc == 0x16B2D0u) {
        ctx->pc = 0x16B2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B2CCu;
        // 0x16b2d0: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x16B2D4u;
        goto label_16b2d4;
    }
    ctx->pc = 0x16B2CCu;
    SET_GPR_U32(ctx, 31, 0x16B2D4u);
    ctx->pc = 0x16B2D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B2CCu;
    // 0x16b2d0: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5120u;
    { ctx->pc = 0x1b5120; return; }
    ctx->pc = 0x16B2D4u;
label_16b2d4:
    // 0x16b2d4: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x16b2d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_16b2d8:
    // 0x16b2d8: 0x0  nop
    ctx->pc = 0x16b2d8u;
    // NOP
label_16b2dc:
    // 0x16b2dc: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_16b2e0:
    if (ctx->pc == 0x16B2E0u) {
        ctx->pc = 0x16B2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B2DCu;
        // 0x16b2e0: 0x3c023f00  lui         $v0, 0x3F00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16B2E4u;
        goto label_16b2e4;
    }
    ctx->pc = 0x16B2DCu;
    {
        const bool branch_taken_0x16b2dc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x16B2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B2DCu;
        // 0x16b2e0: 0x3c023f00  lui         $v0, 0x3F00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b2dc) {
            ctx->pc = 0x16B2F8u;
            goto label_16b2f8;
        }
    }
    ctx->pc = 0x16B2E4u;
label_16b2e4:
    // 0x16b2e4: 0x4600a818  adda.s      $f21, $f0
    ctx->pc = 0x16b2e4u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[21], ctx->f[0]));
label_16b2e8:
    // 0x16b2e8: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x16b2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_16b2ec:
    // 0x16b2ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16b2ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_16b2f0:
    // 0x16b2f0: 0x10000005  b           . + 4 + (0x5 << 2)
label_16b2f4:
    if (ctx->pc == 0x16B2F4u) {
        ctx->pc = 0x16B2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B2F0u;
        // 0x16b2f4: 0x4615055d  msub.s      $f21, $f0, $f21 (Delay Slot)
        ctx->f[21] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[21]));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16B2F8u;
        goto label_16b2f8;
    }
    ctx->pc = 0x16B2F0u;
    {
        const bool branch_taken_0x16b2f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B2F0u;
        // 0x16b2f4: 0x4615055d  msub.s      $f21, $f0, $f21 (Delay Slot)
        ctx->f[21] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[21]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b2f0) {
            ctx->pc = 0x16B308u;
            goto label_16b308;
        }
    }
    ctx->pc = 0x16B2F8u;
label_16b2f8:
    // 0x16b2f8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x16b2f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_16b2fc:
    // 0x16b2fc: 0x0  nop
    ctx->pc = 0x16b2fcu;
    // NOP
label_16b300:
    // 0x16b300: 0x4600a818  adda.s      $f21, $f0
    ctx->pc = 0x16b300u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[21], ctx->f[0]));
label_16b304:
    // 0x16b304: 0x46000d5d  msub.s      $f21, $f1, $f0
    ctx->pc = 0x16b304u;
    ctx->f[21] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[1], ctx->f[0]));
label_16b308:
    // 0x16b308: 0x4614a836  c.le.s      $f21, $f20
    ctx->pc = 0x16b308u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_16b30c:
    // 0x16b30c: 0x0  nop
    ctx->pc = 0x16b30cu;
    // NOP
label_16b310:
    // 0x16b310: 0x45010082  bc1t        . + 4 + (0x82 << 2)
label_16b314:
    if (ctx->pc == 0x16B314u) {
        ctx->pc = 0x16B314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B310u;
        // 0x16b314: 0x3c02442f  lui         $v0, 0x442F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17455 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16B318u;
        goto label_16b318;
    }
    ctx->pc = 0x16B310u;
    {
        const bool branch_taken_0x16b310 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x16B314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B310u;
        // 0x16b314: 0x3c02442f  lui         $v0, 0x442F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17455 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b310) {
            ctx->pc = 0x16B51Cu;
            goto label_16b51c;
        }
    }
    ctx->pc = 0x16B318u;
label_16b318:
    // 0x16b318: 0x100000b8  b           . + 4 + (0xB8 << 2)
label_16b31c:
    if (ctx->pc == 0x16B31Cu) {
        ctx->pc = 0x16B31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B318u;
        // 0x16b31c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16B320u;
        goto label_16b320;
    }
    ctx->pc = 0x16B318u;
    {
        const bool branch_taken_0x16b318 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B318u;
        // 0x16b31c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b318) {
            ctx->pc = 0x16B5FCu;
            goto label_16b5fc;
        }
    }
    ctx->pc = 0x16B320u;
label_16b320:
    // 0x16b320: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x16b320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_16b324:
    // 0x16b324: 0x2a21000c  slti        $at, $s1, 0xC
    ctx->pc = 0x16b324u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)12) ? 1 : 0);
label_16b328:
    // 0x16b328: 0x1420001d  bnez        $at, . + 4 + (0x1D << 2)
label_16b32c:
    if (ctx->pc == 0x16B32Cu) {
        ctx->pc = 0x16B32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B328u;
        // 0x16b32c: 0xa2620000  sb          $v0, 0x0($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16B330u;
        goto label_16b330;
    }
    ctx->pc = 0x16B328u;
    {
        const bool branch_taken_0x16b328 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x16B32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B328u;
        // 0x16b32c: 0xa2620000  sb          $v0, 0x0($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b328) {
            ctx->pc = 0x16B3A0u;
            goto label_16b3a0;
        }
    }
    ctx->pc = 0x16B330u;
label_16b330:
    // 0x16b330: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x16b330u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_16b334:
    // 0x16b334: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x16b334u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_16b338:
    // 0x16b338: 0xc066d7a  jal         func_19B5E8
label_16b33c:
    if (ctx->pc == 0x16B33Cu) {
        ctx->pc = 0x16B33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B338u;
        // 0x16b33c: 0x24a59c80  addiu       $a1, $a1, -0x6380 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941824));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16B340u;
        goto label_16b340;
    }
    ctx->pc = 0x16B338u;
    SET_GPR_U32(ctx, 31, 0x16B340u);
    ctx->pc = 0x16B33Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B338u;
    // 0x16b33c: 0x24a59c80  addiu       $a1, $a1, -0x6380 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941824));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B5E8u;
    { ctx->pc = 0x19b5e8; return; }
    ctx->pc = 0x16B340u;
label_16b340:
    // 0x16b340: 0xc06d448  jal         func_1B5120
label_16b344:
    if (ctx->pc == 0x16B344u) {
        ctx->pc = 0x16B344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B340u;
        // 0x16b344: 0xc7ac0070  lwc1        $f12, 0x70($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x16B348u;
        goto label_16b348;
    }
    ctx->pc = 0x16B340u;
    SET_GPR_U32(ctx, 31, 0x16B348u);
    ctx->pc = 0x16B344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B340u;
    // 0x16b344: 0xc7ac0070  lwc1        $f12, 0x70($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5120u;
    { ctx->pc = 0x1b5120; return; }
    ctx->pc = 0x16B348u;
label_16b348:
    // 0x16b348: 0xc7ac0078  lwc1        $f12, 0x78($sp)
    ctx->pc = 0x16b348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_16b34c:
    // 0x16b34c: 0xc06d448  jal         func_1B5120
label_16b350:
    if (ctx->pc == 0x16B350u) {
        ctx->pc = 0x16B350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B34Cu;
        // 0x16b350: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x16B354u;
        goto label_16b354;
    }
    ctx->pc = 0x16B34Cu;
    SET_GPR_U32(ctx, 31, 0x16B354u);
    ctx->pc = 0x16B350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B34Cu;
    // 0x16b350: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5120u;
    { ctx->pc = 0x1b5120; return; }
    ctx->pc = 0x16B354u;
label_16b354:
    // 0x16b354: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x16b354u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_16b358:
    // 0x16b358: 0x0  nop
    ctx->pc = 0x16b358u;
    // NOP
label_16b35c:
    // 0x16b35c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_16b360:
    if (ctx->pc == 0x16B360u) {
        ctx->pc = 0x16B360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B35Cu;
        // 0x16b360: 0x3c023f00  lui         $v0, 0x3F00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16B364u;
        goto label_16b364;
    }
    ctx->pc = 0x16B35Cu;
    {
        const bool branch_taken_0x16b35c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x16B360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B35Cu;
        // 0x16b360: 0x3c023f00  lui         $v0, 0x3F00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b35c) {
            ctx->pc = 0x16B378u;
            goto label_16b378;
        }
    }
    ctx->pc = 0x16B364u;
label_16b364:
    // 0x16b364: 0x4600a818  adda.s      $f21, $f0
    ctx->pc = 0x16b364u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[21], ctx->f[0]));
label_16b368:
    // 0x16b368: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x16b368u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_16b36c:
    // 0x16b36c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16b36cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_16b370:
    // 0x16b370: 0x10000005  b           . + 4 + (0x5 << 2)
label_16b374:
    if (ctx->pc == 0x16B374u) {
        ctx->pc = 0x16B374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B370u;
        // 0x16b374: 0x4615055d  msub.s      $f21, $f0, $f21 (Delay Slot)
        ctx->f[21] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[21]));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16B378u;
        goto label_16b378;
    }
    ctx->pc = 0x16B370u;
    {
        const bool branch_taken_0x16b370 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B370u;
        // 0x16b374: 0x4615055d  msub.s      $f21, $f0, $f21 (Delay Slot)
        ctx->f[21] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[21]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b370) {
            ctx->pc = 0x16B388u;
            goto label_16b388;
        }
    }
    ctx->pc = 0x16B378u;
label_16b378:
    // 0x16b378: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x16b378u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_16b37c:
    // 0x16b37c: 0x0  nop
    ctx->pc = 0x16b37cu;
    // NOP
label_16b380:
    // 0x16b380: 0x4600a818  adda.s      $f21, $f0
    ctx->pc = 0x16b380u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[21], ctx->f[0]));
label_16b384:
    // 0x16b384: 0x46000d5d  msub.s      $f21, $f1, $f0
    ctx->pc = 0x16b384u;
    ctx->f[21] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[1], ctx->f[0]));
label_16b388:
    // 0x16b388: 0x4614a836  c.le.s      $f21, $f20
    ctx->pc = 0x16b388u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_16b38c:
    // 0x16b38c: 0x0  nop
    ctx->pc = 0x16b38cu;
    // NOP
label_16b390:
    // 0x16b390: 0x45010061  bc1t        . + 4 + (0x61 << 2)
label_16b394:
    if (ctx->pc == 0x16B394u) {
        ctx->pc = 0x16B394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B390u;
        // 0x16b394: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16B398u;
        goto label_16b398;
    }
    ctx->pc = 0x16B390u;
    {
        const bool branch_taken_0x16b390 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x16B394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B390u;
        // 0x16b394: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b390) {
            ctx->pc = 0x16B518u;
            goto label_16b518;
        }
    }
    ctx->pc = 0x16B398u;
label_16b398:
    // 0x16b398: 0x10000099  b           . + 4 + (0x99 << 2)
label_16b39c:
    if (ctx->pc == 0x16B39Cu) {
        ctx->pc = 0x16B39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B398u;
        // 0x16b39c: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16B3A0u;
        goto label_16b3a0;
    }
    ctx->pc = 0x16B398u;
    {
        const bool branch_taken_0x16b398 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B398u;
        // 0x16b39c: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b398) {
            ctx->pc = 0x16B600u;
            goto label_16b600;
        }
    }
    ctx->pc = 0x16B3A0u;
label_16b3a0:
    // 0x16b3a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16b3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16b3a4:
    // 0x16b3a4: 0x12220007  beq         $s1, $v0, . + 4 + (0x7 << 2)
label_16b3a8:
    if (ctx->pc == 0x16B3A8u) {
        ctx->pc = 0x16B3ACu;
        goto label_16b3ac;
    }
    ctx->pc = 0x16B3A4u;
    {
        const bool branch_taken_0x16b3a4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x16b3a4) {
            ctx->pc = 0x16B3C4u;
            goto label_16b3c4;
        }
    }
    ctx->pc = 0x16B3ACu;
label_16b3ac:
    // 0x16b3ac: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x16b3acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_16b3b0:
    // 0x16b3b0: 0x12220004  beq         $s1, $v0, . + 4 + (0x4 << 2)
label_16b3b4:
    if (ctx->pc == 0x16B3B4u) {
        ctx->pc = 0x16B3B8u;
        goto label_16b3b8;
    }
    ctx->pc = 0x16B3B0u;
    {
        const bool branch_taken_0x16b3b0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x16b3b0) {
            ctx->pc = 0x16B3C4u;
            goto label_16b3c4;
        }
    }
    ctx->pc = 0x16B3B8u;
label_16b3b8:
    // 0x16b3b8: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x16b3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_16b3bc:
    // 0x16b3bc: 0x1622001e  bne         $s1, $v0, . + 4 + (0x1E << 2)
label_16b3c0:
    if (ctx->pc == 0x16B3C0u) {
        ctx->pc = 0x16B3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B3BCu;
        // 0x16b3c0: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16B3C4u;
        goto label_16b3c4;
    }
    ctx->pc = 0x16B3BCu;
    {
        const bool branch_taken_0x16b3bc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x16B3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B3BCu;
        // 0x16b3c0: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b3bc) {
            ctx->pc = 0x16B438u;
            goto label_16b438;
        }
    }
    ctx->pc = 0x16B3C4u;
label_16b3c4:
    // 0x16b3c4: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x16b3c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_16b3c8:
    // 0x16b3c8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x16b3c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_16b3cc:
    // 0x16b3cc: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x16b3ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_16b3d0:
    // 0x16b3d0: 0xc066d7a  jal         func_19B5E8
label_16b3d4:
    if (ctx->pc == 0x16B3D4u) {
        ctx->pc = 0x16B3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B3D0u;
        // 0x16b3d4: 0x24a59c40  addiu       $a1, $a1, -0x63C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941760));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16B3D8u;
        goto label_16b3d8;
    }
    ctx->pc = 0x16B3D0u;
    SET_GPR_U32(ctx, 31, 0x16B3D8u);
    ctx->pc = 0x16B3D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B3D0u;
    // 0x16b3d4: 0x24a59c40  addiu       $a1, $a1, -0x63C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941760));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B5E8u;
    { ctx->pc = 0x19b5e8; return; }
    ctx->pc = 0x16B3D8u;
label_16b3d8:
    // 0x16b3d8: 0xc06d448  jal         func_1B5120
label_16b3dc:
    if (ctx->pc == 0x16B3DCu) {
        ctx->pc = 0x16B3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B3D8u;
        // 0x16b3dc: 0xc7ac0070  lwc1        $f12, 0x70($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x16B3E0u;
        goto label_16b3e0;
    }
    ctx->pc = 0x16B3D8u;
    SET_GPR_U32(ctx, 31, 0x16B3E0u);
    ctx->pc = 0x16B3DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B3D8u;
    // 0x16b3dc: 0xc7ac0070  lwc1        $f12, 0x70($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5120u;
    { ctx->pc = 0x1b5120; return; }
    ctx->pc = 0x16B3E0u;
label_16b3e0:
    // 0x16b3e0: 0xc7ac0078  lwc1        $f12, 0x78($sp)
    ctx->pc = 0x16b3e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_16b3e4:
    // 0x16b3e4: 0xc06d448  jal         func_1B5120
label_16b3e8:
    if (ctx->pc == 0x16B3E8u) {
        ctx->pc = 0x16B3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B3E4u;
        // 0x16b3e8: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x16B3ECu;
        goto label_16b3ec;
    }
    ctx->pc = 0x16B3E4u;
    SET_GPR_U32(ctx, 31, 0x16B3ECu);
    ctx->pc = 0x16B3E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B3E4u;
    // 0x16b3e8: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5120u;
    { ctx->pc = 0x1b5120; return; }
    ctx->pc = 0x16B3ECu;
label_16b3ec:
    // 0x16b3ec: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x16b3ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_16b3f0:
    // 0x16b3f0: 0x0  nop
    ctx->pc = 0x16b3f0u;
    // NOP
label_16b3f4:
    // 0x16b3f4: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_16b3f8:
    if (ctx->pc == 0x16B3F8u) {
        ctx->pc = 0x16B3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B3F4u;
        // 0x16b3f8: 0x3c023f00  lui         $v0, 0x3F00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16B3FCu;
        goto label_16b3fc;
    }
    ctx->pc = 0x16B3F4u;
    {
        const bool branch_taken_0x16b3f4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x16B3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B3F4u;
        // 0x16b3f8: 0x3c023f00  lui         $v0, 0x3F00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b3f4) {
            ctx->pc = 0x16B410u;
            goto label_16b410;
        }
    }
    ctx->pc = 0x16B3FCu;
label_16b3fc:
    // 0x16b3fc: 0x4600a818  adda.s      $f21, $f0
    ctx->pc = 0x16b3fcu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[21], ctx->f[0]));
label_16b400:
    // 0x16b400: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x16b400u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_16b404:
    // 0x16b404: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16b404u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_16b408:
    // 0x16b408: 0x10000005  b           . + 4 + (0x5 << 2)
label_16b40c:
    if (ctx->pc == 0x16B40Cu) {
        ctx->pc = 0x16B40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B408u;
        // 0x16b40c: 0x4615055d  msub.s      $f21, $f0, $f21 (Delay Slot)
        ctx->f[21] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[21]));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16B410u;
        goto label_16b410;
    }
    ctx->pc = 0x16B408u;
    {
        const bool branch_taken_0x16b408 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B408u;
        // 0x16b40c: 0x4615055d  msub.s      $f21, $f0, $f21 (Delay Slot)
        ctx->f[21] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[21]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b408) {
            ctx->pc = 0x16B420u;
            goto label_16b420;
        }
    }
    ctx->pc = 0x16B410u;
label_16b410:
    // 0x16b410: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x16b410u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_16b414:
    // 0x16b414: 0x0  nop
    ctx->pc = 0x16b414u;
    // NOP
label_16b418:
    // 0x16b418: 0x4600a818  adda.s      $f21, $f0
    ctx->pc = 0x16b418u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[21], ctx->f[0]));
label_16b41c:
    // 0x16b41c: 0x46000d5d  msub.s      $f21, $f1, $f0
    ctx->pc = 0x16b41cu;
    ctx->f[21] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[1], ctx->f[0]));
label_16b420:
    // 0x16b420: 0x4614a836  c.le.s      $f21, $f20
    ctx->pc = 0x16b420u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_16b424:
    // 0x16b424: 0x0  nop
    ctx->pc = 0x16b424u;
    // NOP
label_16b428:
    // 0x16b428: 0x4501003b  bc1t        . + 4 + (0x3B << 2)
label_16b42c:
    if (ctx->pc == 0x16B42Cu) {
        ctx->pc = 0x16B42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B428u;
        // 0x16b42c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16B430u;
        goto label_16b430;
    }
    ctx->pc = 0x16B428u;
    {
        const bool branch_taken_0x16b428 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x16B42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B428u;
        // 0x16b42c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b428) {
            ctx->pc = 0x16B518u;
            goto label_16b518;
        }
    }
    ctx->pc = 0x16B430u;
label_16b430:
    // 0x16b430: 0x10000072  b           . + 4 + (0x72 << 2)
label_16b434:
    if (ctx->pc == 0x16B434u) {
        ctx->pc = 0x16B438u;
        goto label_16b438;
    }
    ctx->pc = 0x16B430u;
    {
        const bool branch_taken_0x16b430 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16b430) {
            ctx->pc = 0x16B5FCu;
            goto label_16b5fc;
        }
    }
    ctx->pc = 0x16B438u;
label_16b438:
    // 0x16b438: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x16b438u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_16b43c:
    // 0x16b43c: 0xc066d7a  jal         func_19B5E8
label_16b440:
    if (ctx->pc == 0x16B440u) {
        ctx->pc = 0x16B440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B43Cu;
        // 0x16b440: 0x24a59c40  addiu       $a1, $a1, -0x63C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941760));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16B444u;
        goto label_16b444;
    }
    ctx->pc = 0x16B43Cu;
    SET_GPR_U32(ctx, 31, 0x16B444u);
    ctx->pc = 0x16B440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B43Cu;
    // 0x16b440: 0x24a59c40  addiu       $a1, $a1, -0x63C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941760));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B5E8u;
    { ctx->pc = 0x19b5e8; return; }
    ctx->pc = 0x16B444u;
label_16b444:
    // 0x16b444: 0xc06d448  jal         func_1B5120
label_16b448:
    if (ctx->pc == 0x16B448u) {
        ctx->pc = 0x16B448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B444u;
        // 0x16b448: 0xc7ac0070  lwc1        $f12, 0x70($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x16B44Cu;
        goto label_16b44c;
    }
    ctx->pc = 0x16B444u;
    SET_GPR_U32(ctx, 31, 0x16B44Cu);
    ctx->pc = 0x16B448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B444u;
    // 0x16b448: 0xc7ac0070  lwc1        $f12, 0x70($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5120u;
    { ctx->pc = 0x1b5120; return; }
    ctx->pc = 0x16B44Cu;
label_16b44c:
    // 0x16b44c: 0x27b30078  addiu       $s3, $sp, 0x78
    ctx->pc = 0x16b44cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
label_16b450:
    // 0x16b450: 0xc66c0000  lwc1        $f12, 0x0($s3)
    ctx->pc = 0x16b450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_16b454:
    // 0x16b454: 0xc06d448  jal         func_1B5120
label_16b458:
    if (ctx->pc == 0x16B458u) {
        ctx->pc = 0x16B458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B454u;
        // 0x16b458: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x16B45Cu;
        goto label_16b45c;
    }
    ctx->pc = 0x16B454u;
    SET_GPR_U32(ctx, 31, 0x16B45Cu);
    ctx->pc = 0x16B458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B454u;
    // 0x16b458: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5120u;
    { ctx->pc = 0x1b5120; return; }
    ctx->pc = 0x16B45Cu;
label_16b45c:
    // 0x16b45c: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x16b45cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_16b460:
    // 0x16b460: 0x0  nop
    ctx->pc = 0x16b460u;
    // NOP
label_16b464:
    // 0x16b464: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_16b468:
    if (ctx->pc == 0x16B468u) {
        ctx->pc = 0x16B468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B464u;
        // 0x16b468: 0x3c023f00  lui         $v0, 0x3F00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16B46Cu;
        goto label_16b46c;
    }
    ctx->pc = 0x16B464u;
    {
        const bool branch_taken_0x16b464 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x16B468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B464u;
        // 0x16b468: 0x3c023f00  lui         $v0, 0x3F00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b464) {
            ctx->pc = 0x16B480u;
            goto label_16b480;
        }
    }
    ctx->pc = 0x16B46Cu;
label_16b46c:
    // 0x16b46c: 0x4600a818  adda.s      $f21, $f0
    ctx->pc = 0x16b46cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[21], ctx->f[0]));
label_16b470:
    // 0x16b470: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x16b470u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_16b474:
    // 0x16b474: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16b474u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_16b478:
    // 0x16b478: 0x10000005  b           . + 4 + (0x5 << 2)
label_16b47c:
    if (ctx->pc == 0x16B47Cu) {
        ctx->pc = 0x16B47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B478u;
        // 0x16b47c: 0x4615055d  msub.s      $f21, $f0, $f21 (Delay Slot)
        ctx->f[21] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[21]));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16B480u;
        goto label_16b480;
    }
    ctx->pc = 0x16B478u;
    {
        const bool branch_taken_0x16b478 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B478u;
        // 0x16b47c: 0x4615055d  msub.s      $f21, $f0, $f21 (Delay Slot)
        ctx->f[21] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[21]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b478) {
            ctx->pc = 0x16B490u;
            goto label_16b490;
        }
    }
    ctx->pc = 0x16B480u;
label_16b480:
    // 0x16b480: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x16b480u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_16b484:
    // 0x16b484: 0x0  nop
    ctx->pc = 0x16b484u;
    // NOP
label_16b488:
    // 0x16b488: 0x4600a818  adda.s      $f21, $f0
    ctx->pc = 0x16b488u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[21], ctx->f[0]));
label_16b48c:
    // 0x16b48c: 0x46000d5d  msub.s      $f21, $f1, $f0
    ctx->pc = 0x16b48cu;
    ctx->f[21] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[1], ctx->f[0]));
label_16b490:
    // 0x16b490: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x16b490u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_16b494:
    // 0x16b494: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x16b494u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_16b498:
    // 0x16b498: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x16b498u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_16b49c:
    // 0x16b49c: 0xc066d7a  jal         func_19B5E8
label_16b4a0:
    if (ctx->pc == 0x16B4A0u) {
        ctx->pc = 0x16B4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B49Cu;
        // 0x16b4a0: 0x24a59c80  addiu       $a1, $a1, -0x6380 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941824));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16B4A4u;
        goto label_16b4a4;
    }
    ctx->pc = 0x16B49Cu;
    SET_GPR_U32(ctx, 31, 0x16B4A4u);
    ctx->pc = 0x16B4A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B49Cu;
    // 0x16b4a0: 0x24a59c80  addiu       $a1, $a1, -0x6380 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941824));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B5E8u;
    { ctx->pc = 0x19b5e8; return; }
    ctx->pc = 0x16B4A4u;
label_16b4a4:
    // 0x16b4a4: 0xc06d448  jal         func_1B5120
label_16b4a8:
    if (ctx->pc == 0x16B4A8u) {
        ctx->pc = 0x16B4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B4A4u;
        // 0x16b4a8: 0xc7ac0070  lwc1        $f12, 0x70($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x16B4ACu;
        goto label_16b4ac;
    }
    ctx->pc = 0x16B4A4u;
    SET_GPR_U32(ctx, 31, 0x16B4ACu);
    ctx->pc = 0x16B4A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B4A4u;
    // 0x16b4a8: 0xc7ac0070  lwc1        $f12, 0x70($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5120u;
    { ctx->pc = 0x1b5120; return; }
    ctx->pc = 0x16B4ACu;
label_16b4ac:
    // 0x16b4ac: 0xc66c0000  lwc1        $f12, 0x0($s3)
    ctx->pc = 0x16b4acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_16b4b0:
    // 0x16b4b0: 0xc06d448  jal         func_1B5120
label_16b4b4:
    if (ctx->pc == 0x16B4B4u) {
        ctx->pc = 0x16B4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B4B0u;
        // 0x16b4b4: 0x46000586  mov.s       $f22, $f0 (Delay Slot)
        ctx->f[22] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x16B4B8u;
        goto label_16b4b8;
    }
    ctx->pc = 0x16B4B0u;
    SET_GPR_U32(ctx, 31, 0x16B4B8u);
    ctx->pc = 0x16B4B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B4B0u;
    // 0x16b4b4: 0x46000586  mov.s       $f22, $f0 (Delay Slot)
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5120u;
    { ctx->pc = 0x1b5120; return; }
    ctx->pc = 0x16B4B8u;
label_16b4b8:
    // 0x16b4b8: 0x4600b034  c.lt.s      $f22, $f0
    ctx->pc = 0x16b4b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_16b4bc:
    // 0x16b4bc: 0x0  nop
    ctx->pc = 0x16b4bcu;
    // NOP
label_16b4c0:
    // 0x16b4c0: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_16b4c4:
    if (ctx->pc == 0x16B4C4u) {
        ctx->pc = 0x16B4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B4C0u;
        // 0x16b4c4: 0x3c023f00  lui         $v0, 0x3F00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16B4C8u;
        goto label_16b4c8;
    }
    ctx->pc = 0x16B4C0u;
    {
        const bool branch_taken_0x16b4c0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x16B4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B4C0u;
        // 0x16b4c4: 0x3c023f00  lui         $v0, 0x3F00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b4c0) {
            ctx->pc = 0x16B4DCu;
            goto label_16b4dc;
        }
    }
    ctx->pc = 0x16B4C8u;
label_16b4c8:
    // 0x16b4c8: 0x4600b018  adda.s      $f22, $f0
    ctx->pc = 0x16b4c8u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[22], ctx->f[0]));
label_16b4cc:
    // 0x16b4cc: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x16b4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_16b4d0:
    // 0x16b4d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16b4d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_16b4d4:
    // 0x16b4d4: 0x10000005  b           . + 4 + (0x5 << 2)
label_16b4d8:
    if (ctx->pc == 0x16B4D8u) {
        ctx->pc = 0x16B4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B4D4u;
        // 0x16b4d8: 0x4616001d  msub.s      $f0, $f0, $f22 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[22]));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16B4DCu;
        goto label_16b4dc;
    }
    ctx->pc = 0x16B4D4u;
    {
        const bool branch_taken_0x16b4d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B4D4u;
        // 0x16b4d8: 0x4616001d  msub.s      $f0, $f0, $f22 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[22]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b4d4) {
            ctx->pc = 0x16B4ECu;
            goto label_16b4ec;
        }
    }
    ctx->pc = 0x16B4DCu;
label_16b4dc:
    // 0x16b4dc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x16b4dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_16b4e0:
    // 0x16b4e0: 0x0  nop
    ctx->pc = 0x16b4e0u;
    // NOP
label_16b4e4:
    // 0x16b4e4: 0x4600b018  adda.s      $f22, $f0
    ctx->pc = 0x16b4e4u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[22], ctx->f[0]));
label_16b4e8:
    // 0x16b4e8: 0x4600081d  msub.s      $f0, $f1, $f0
    ctx->pc = 0x16b4e8u;
    ctx->f[0] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[1], ctx->f[0]));
label_16b4ec:
    // 0x16b4ec: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x16b4ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_16b4f0:
    // 0x16b4f0: 0x0  nop
    ctx->pc = 0x16b4f0u;
    // NOP
label_16b4f4:
    // 0x16b4f4: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_16b4f8:
    if (ctx->pc == 0x16B4F8u) {
        ctx->pc = 0x16B4FCu;
        goto label_16b4fc;
    }
    ctx->pc = 0x16B4F4u;
    {
        const bool branch_taken_0x16b4f4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16b4f4) {
            ctx->pc = 0x16B500u;
            goto label_16b500;
        }
    }
    ctx->pc = 0x16B4FCu;
label_16b4fc:
    // 0x16b4fc: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x16b4fcu;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_16b500:
    // 0x16b500: 0x4614a836  c.le.s      $f21, $f20
    ctx->pc = 0x16b500u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_16b504:
    // 0x16b504: 0x0  nop
    ctx->pc = 0x16b504u;
    // NOP
label_16b508:
    // 0x16b508: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_16b50c:
    if (ctx->pc == 0x16B50Cu) {
        ctx->pc = 0x16B50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B508u;
        // 0x16b50c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16B510u;
        goto label_16b510;
    }
    ctx->pc = 0x16B508u;
    {
        const bool branch_taken_0x16b508 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x16B50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B508u;
        // 0x16b50c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b508) {
            ctx->pc = 0x16B518u;
            goto label_16b518;
        }
    }
    ctx->pc = 0x16B510u;
label_16b510:
    // 0x16b510: 0x1000003a  b           . + 4 + (0x3A << 2)
label_16b514:
    if (ctx->pc == 0x16B514u) {
        ctx->pc = 0x16B518u;
        goto label_16b518;
    }
    ctx->pc = 0x16B510u;
    {
        const bool branch_taken_0x16b510 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16b510) {
            ctx->pc = 0x16B5FCu;
            goto label_16b5fc;
        }
    }
    ctx->pc = 0x16B518u;
label_16b518:
    // 0x16b518: 0x3c02442f  lui         $v0, 0x442F
    ctx->pc = 0x16b518u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17455 << 16));
label_16b51c:
    // 0x16b51c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16b51cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_16b520:
    // 0x16b520: 0x0  nop
    ctx->pc = 0x16b520u;
    // NOP
label_16b524:
    // 0x16b524: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x16b524u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_16b528:
    // 0x16b528: 0x0  nop
    ctx->pc = 0x16b528u;
    // NOP
label_16b52c:
    // 0x16b52c: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_16b530:
    if (ctx->pc == 0x16B530u) {
        ctx->pc = 0x16B530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B52Cu;
        // 0x16b530: 0x3c02450f  lui         $v0, 0x450F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17679 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16B534u;
        goto label_16b534;
    }
    ctx->pc = 0x16B52Cu;
    {
        const bool branch_taken_0x16b52c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x16B530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B52Cu;
        // 0x16b530: 0x3c02450f  lui         $v0, 0x450F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17679 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b52c) {
            ctx->pc = 0x16B544u;
            goto label_16b544;
        }
    }
    ctx->pc = 0x16B534u;
label_16b534:
    // 0x16b534: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x16b534u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_16b538:
    // 0x16b538: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x16b538u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_16b53c:
    // 0x16b53c: 0x10000009  b           . + 4 + (0x9 << 2)
label_16b540:
    if (ctx->pc == 0x16B540u) {
        ctx->pc = 0x16B544u;
        goto label_16b544;
    }
    ctx->pc = 0x16B53Cu;
    {
        const bool branch_taken_0x16b53c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16b53c) {
            ctx->pc = 0x16B564u;
            goto label_16b564;
        }
    }
    ctx->pc = 0x16B544u;
label_16b544:
    // 0x16b544: 0x3c03453b  lui         $v1, 0x453B
    ctx->pc = 0x16b544u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17723 << 16));
label_16b548:
    // 0x16b548: 0x3442c000  ori         $v0, $v0, 0xC000
    ctx->pc = 0x16b548u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49152);
label_16b54c:
    // 0x16b54c: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x16b54cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
label_16b550:
    // 0x16b550: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16b550u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_16b554:
    // 0x16b554: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x16b554u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_16b558:
    // 0x16b558: 0x0  nop
    ctx->pc = 0x16b558u;
    // NOP
label_16b55c:
    // 0x16b55c: 0x46150000  add.s       $f0, $f0, $f21
    ctx->pc = 0x16b55cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
label_16b560:
    // 0x16b560: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x16b560u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
label_16b564:
    // 0x16b564: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x16b564u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
label_16b568:
    // 0x16b568: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x16b568u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_16b56c:
    // 0x16b56c: 0x24421e70  addiu       $v0, $v0, 0x1E70
    ctx->pc = 0x16b56cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7792));
label_16b570:
    // 0x16b570: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x16b570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_16b574:
    // 0x16b574: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x16b574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_16b578:
    // 0x16b578: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x16b578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_16b57c:
    // 0x16b57c: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x16b57cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_16b580:
    // 0x16b580: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_16b584:
    if (ctx->pc == 0x16B584u) {
        ctx->pc = 0x16B584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B580u;
        // 0x16b584: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16B588u;
        goto label_16b588;
    }
    ctx->pc = 0x16B580u;
    {
        const bool branch_taken_0x16b580 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x16B584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B580u;
        // 0x16b584: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b580) {
            ctx->pc = 0x16B594u;
            goto label_16b594;
        }
    }
    ctx->pc = 0x16B588u;
label_16b588:
    // 0x16b588: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16b588u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_16b58c:
    // 0x16b58c: 0x10000007  b           . + 4 + (0x7 << 2)
label_16b590:
    if (ctx->pc == 0x16B590u) {
        ctx->pc = 0x16B590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B58Cu;
        // 0x16b590: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x16B594u;
        goto label_16b594;
    }
    ctx->pc = 0x16B58Cu;
    {
        const bool branch_taken_0x16b58c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B58Cu;
        // 0x16b590: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b58c) {
            ctx->pc = 0x16B5ACu;
            goto label_16b5ac;
        }
    }
    ctx->pc = 0x16B594u;
label_16b594:
    // 0x16b594: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x16b594u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_16b598:
    // 0x16b598: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x16b598u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_16b59c:
    // 0x16b59c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x16b59cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_16b5a0:
    // 0x16b5a0: 0x0  nop
    ctx->pc = 0x16b5a0u;
    // NOP
label_16b5a4:
    // 0x16b5a4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x16b5a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_16b5a8:
    // 0x16b5a8: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x16b5a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_16b5ac:
    // 0x16b5ac: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x16b5acu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_16b5b0:
    // 0x16b5b0: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x16b5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_16b5b4:
    // 0x16b5b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16b5b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_16b5b8:
    // 0x16b5b8: 0x0  nop
    ctx->pc = 0x16b5b8u;
    // NOP
label_16b5bc:
    // 0x16b5bc: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x16b5bcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_16b5c0:
    // 0x16b5c0: 0x0  nop
    ctx->pc = 0x16b5c0u;
    // NOP
label_16b5c4:
    // 0x16b5c4: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_16b5c8:
    if (ctx->pc == 0x16B5C8u) {
        ctx->pc = 0x16B5CCu;
        goto label_16b5cc;
    }
    ctx->pc = 0x16B5C4u;
    {
        const bool branch_taken_0x16b5c4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x16b5c4) {
            ctx->pc = 0x16B5DCu;
            goto label_16b5dc;
        }
    }
    ctx->pc = 0x16B5CCu;
label_16b5cc:
    // 0x16b5cc: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x16b5ccu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_16b5d0:
    // 0x16b5d0: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x16b5d0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_16b5d4:
    // 0x16b5d4: 0x10000008  b           . + 4 + (0x8 << 2)
label_16b5d8:
    if (ctx->pc == 0x16B5D8u) {
        ctx->pc = 0x16B5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B5D4u;
        // 0x16b5d8: 0xa2830000  sb          $v1, 0x0($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16B5DCu;
        goto label_16b5dc;
    }
    ctx->pc = 0x16B5D4u;
    {
        const bool branch_taken_0x16b5d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B5D4u;
        // 0x16b5d8: 0xa2830000  sb          $v1, 0x0($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b5d4) {
            ctx->pc = 0x16B5F8u;
            goto label_16b5f8;
        }
    }
    ctx->pc = 0x16B5DCu;
label_16b5dc:
    // 0x16b5dc: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x16b5dcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_16b5e0:
    // 0x16b5e0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x16b5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_16b5e4:
    // 0x16b5e4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x16b5e4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_16b5e8:
    // 0x16b5e8: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x16b5e8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_16b5ec:
    // 0x16b5ec: 0x0  nop
    ctx->pc = 0x16b5ecu;
    // NOP
label_16b5f0:
    // 0x16b5f0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x16b5f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_16b5f4:
    // 0x16b5f4: 0xa2830000  sb          $v1, 0x0($s4)
    ctx->pc = 0x16b5f4u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 0), (uint8_t)GPR_U32(ctx, 3));
label_16b5f8:
    // 0x16b5f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16b5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16b5fc:
    // 0x16b5fc: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x16b5fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_16b600:
    // 0x16b600: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x16b600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_16b604:
    // 0x16b604: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x16b604u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_16b608:
    // 0x16b608: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x16b608u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_16b60c:
    // 0x16b60c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x16b60cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_16b610:
    // 0x16b610: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x16b610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_16b614:
    // 0x16b614: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x16b614u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_16b618:
    // 0x16b618: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x16b618u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_16b61c:
    // 0x16b61c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x16b61cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_16b620:
    // 0x16b620: 0x3e00008  jr          $ra
label_16b624:
    if (ctx->pc == 0x16B624u) {
        ctx->pc = 0x16B624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B620u;
        // 0x16b624: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16B628u;
        goto label_16b628;
    }
    ctx->pc = 0x16B620u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16B624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B620u;
        // 0x16b624: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16B620u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16B628u;
label_16b628:
    // 0x16b628: 0x0  nop
    ctx->pc = 0x16b628u;
    // NOP
label_16b62c:
    // 0x16b62c: 0x0  nop
    ctx->pc = 0x16b62cu;
    // NOP
label_16b630:
    // 0x16b630: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x16b630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_16b634:
    // 0x16b634: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x16b634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_16b638:
    // 0x16b638: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x16b638u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_16b63c:
    // 0x16b63c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x16b63cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_16b640:
    // 0x16b640: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x16b640u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_16b644:
    // 0x16b644: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x16b644u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_16b648:
    // 0x16b648: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x16b648u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_16b64c:
    // 0x16b64c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x16b64cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_16b650:
    // 0x16b650: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x16b650u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_16b654:
    // 0x16b654: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16b654u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_16b658:
    // 0x16b658: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x16b658u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_16b65c:
    // 0x16b65c: 0x16620014  bne         $s3, $v0, . + 4 + (0x14 << 2)
label_16b660:
    if (ctx->pc == 0x16B660u) {
        ctx->pc = 0x16B660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B65Cu;
        // 0x16b660: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16B664u;
        goto label_16b664;
    }
    ctx->pc = 0x16B65Cu;
    {
        const bool branch_taken_0x16b65c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x16B660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B65Cu;
        // 0x16b660: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b65c) {
            ctx->pc = 0x16B6B0u;
            goto label_16b6b0;
        }
    }
    ctx->pc = 0x16B664u;
label_16b664:
    // 0x16b664: 0xc08f0cc  jal         func_23C330
label_16b668:
    if (ctx->pc == 0x16B668u) {
        ctx->pc = 0x16B66Cu;
        goto label_16b66c;
    }
    ctx->pc = 0x16B664u;
    SET_GPR_U32(ctx, 31, 0x16B66Cu);
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x16B66Cu;
label_16b66c:
    // 0x16b66c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x16b66cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_16b670:
    // 0x16b670: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x16b670u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
label_16b674:
    // 0x16b674: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x16b674u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_16b678:
    // 0x16b678: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x16b678u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
label_16b67c:
    // 0x16b67c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16b67cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_16b680:
    // 0x16b680: 0x0  nop
    ctx->pc = 0x16b680u;
    // NOP
label_16b684:
    // 0x16b684: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x16b684u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_16b688:
    // 0x16b688: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x16b688u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_16b68c:
    // 0x16b68c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x16b68cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_16b690:
    // 0x16b690: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x16b690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
label_16b694:
    // 0x16b694: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x16b694u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_16b698:
    // 0x16b698: 0x0  nop
    ctx->pc = 0x16b698u;
    // NOP
label_16b69c:
    // 0x16b69c: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x16b69cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_16b6a0:
    // 0x16b6a0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x16b6a0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_16b6a4:
    // 0x16b6a4: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x16b6a4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_16b6a8:
    // 0x16b6a8: 0x0  nop
    ctx->pc = 0x16b6a8u;
    // NOP
label_16b6ac:
    // 0x16b6ac: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x16b6acu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_16b6b0:
    // 0x16b6b0: 0x3c0240c0  lui         $v0, 0x40C0
    ctx->pc = 0x16b6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16576 << 16));
label_16b6b4:
    // 0x16b6b4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x16b6b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16b6b8:
    // 0x16b6b8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x16b6b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_16b6bc:
    // 0x16b6bc: 0x27a4006e  addiu       $a0, $sp, 0x6E
    ctx->pc = 0x16b6bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 110));
label_16b6c0:
    // 0x16b6c0: 0x27a5006f  addiu       $a1, $sp, 0x6F
    ctx->pc = 0x16b6c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 111));
label_16b6c4:
    // 0x16b6c4: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x16b6c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_16b6c8:
    // 0x16b6c8: 0x3c02457a  lui         $v0, 0x457A
    ctx->pc = 0x16b6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17786 << 16));
label_16b6cc:
    // 0x16b6cc: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x16b6ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_16b6d0:
    // 0x16b6d0: 0xc05ac64  jal         func_16B190
label_16b6d4:
    if (ctx->pc == 0x16B6D4u) {
        ctx->pc = 0x16B6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B6D0u;
        // 0x16b6d4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16B6D8u;
        goto label_16b6d8;
    }
    ctx->pc = 0x16B6D0u;
    SET_GPR_U32(ctx, 31, 0x16B6D8u);
    ctx->pc = 0x16B6D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B6D0u;
    // 0x16b6d4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16B190u;
    goto label_16b190;
    ctx->pc = 0x16B6D8u;
label_16b6d8:
    // 0x16b6d8: 0x1040005b  beqz        $v0, . + 4 + (0x5B << 2)
label_16b6dc:
    if (ctx->pc == 0x16B6DCu) {
        ctx->pc = 0x16B6E0u;
        goto label_16b6e0;
    }
    ctx->pc = 0x16B6D8u;
    {
        const bool branch_taken_0x16b6d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16b6d8) {
            ctx->pc = 0x16B848u;
            goto label_16b848;
        }
    }
    ctx->pc = 0x16B6E0u;
label_16b6e0:
    // 0x16b6e0: 0x2a61000f  slti        $at, $s3, 0xF
    ctx->pc = 0x16b6e0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)15) ? 1 : 0);
label_16b6e4:
    // 0x16b6e4: 0x93b4006e  lbu         $s4, 0x6E($sp)
    ctx->pc = 0x16b6e4u;
    SET_GPR_ZE32(ctx, 20, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 110)));
label_16b6e8:
    // 0x16b6e8: 0x10200057  beqz        $at, . + 4 + (0x57 << 2)
label_16b6ec:
    if (ctx->pc == 0x16B6ECu) {
        ctx->pc = 0x16B6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B6E8u;
        // 0x16b6ec: 0x93b0006f  lbu         $s0, 0x6F($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 111)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16B6F0u;
        goto label_16b6f0;
    }
    ctx->pc = 0x16B6E8u;
    {
        const bool branch_taken_0x16b6e8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B6E8u;
        // 0x16b6ec: 0x93b0006f  lbu         $s0, 0x6F($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 111)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b6e8) {
            ctx->pc = 0x16B848u;
            goto label_16b848;
        }
    }
    ctx->pc = 0x16B6F0u;
label_16b6f0:
    // 0x16b6f0: 0x8f858700  lw          $a1, -0x7900($gp)
    ctx->pc = 0x16b6f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936320)));
label_16b6f4:
    // 0x16b6f4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x16b6f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16b6f8:
    // 0x16b6f8: 0x10a40053  beq         $a1, $a0, . + 4 + (0x53 << 2)
label_16b6fc:
    if (ctx->pc == 0x16B6FCu) {
        ctx->pc = 0x16B6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B6F8u;
        // 0x16b6fc: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16B700u;
        goto label_16b700;
    }
    ctx->pc = 0x16B6F8u;
    {
        const bool branch_taken_0x16b6f8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x16B6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B6F8u;
        // 0x16b6fc: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b6f8) {
            ctx->pc = 0x16B848u;
            goto label_16b848;
        }
    }
    ctx->pc = 0x16B700u;
label_16b700:
    // 0x16b700: 0x10a30051  beq         $a1, $v1, . + 4 + (0x51 << 2)
label_16b704:
    if (ctx->pc == 0x16B704u) {
        ctx->pc = 0x16B708u;
        goto label_16b708;
    }
    ctx->pc = 0x16B700u;
    {
        const bool branch_taken_0x16b700 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x16b700) {
            ctx->pc = 0x16B848u;
            goto label_16b848;
        }
    }
    ctx->pc = 0x16B708u;
label_16b708:
    // 0x16b708: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x16b708u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_16b70c:
    // 0x16b70c: 0x1263000b  beq         $s3, $v1, . + 4 + (0xB << 2)
label_16b710:
    if (ctx->pc == 0x16B710u) {
        ctx->pc = 0x16B714u;
        goto label_16b714;
    }
    ctx->pc = 0x16B70Cu;
    {
        const bool branch_taken_0x16b70c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 3));
        if (branch_taken_0x16b70c) {
            ctx->pc = 0x16B73Cu;
            goto label_16b73c;
        }
    }
    ctx->pc = 0x16B714u;
label_16b714:
    // 0x16b714: 0x8f838704  lw          $v1, -0x78FC($gp)
    ctx->pc = 0x16b714u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936324)));
label_16b718:
    // 0x16b718: 0x3200a  movz        $a0, $zero, $v1
    ctx->pc = 0x16b718u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
label_16b71c:
    // 0x16b71c: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_16b720:
    if (ctx->pc == 0x16B720u) {
        ctx->pc = 0x16B724u;
        goto label_16b724;
    }
    ctx->pc = 0x16B71Cu;
    {
        const bool branch_taken_0x16b71c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x16b71c) {
            ctx->pc = 0x16B73Cu;
            goto label_16b73c;
        }
    }
    ctx->pc = 0x16B724u;
label_16b724:
    // 0x16b724: 0x328400ff  andi        $a0, $s4, 0xFF
    ctx->pc = 0x16b724u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
label_16b728:
    // 0x16b728: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
label_16b72c:
    if (ctx->pc == 0x16B72Cu) {
        ctx->pc = 0x16B72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B728u;
        // 0x16b72c: 0x41843  sra         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16B730u;
        goto label_16b730;
    }
    ctx->pc = 0x16B728u;
    {
        const bool branch_taken_0x16b728 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x16B72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B728u;
        // 0x16b72c: 0x41843  sra         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b728) {
            ctx->pc = 0x16B738u;
            goto label_16b738;
        }
    }
    ctx->pc = 0x16B730u;
label_16b730:
    // 0x16b730: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x16b730u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_16b734:
    // 0x16b734: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x16b734u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
label_16b738:
    // 0x16b738: 0x307400ff  andi        $s4, $v1, 0xFF
    ctx->pc = 0x16b738u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_16b73c:
    // 0x16b73c: 0x8f83817c  lw          $v1, -0x7E84($gp)
    ctx->pc = 0x16b73cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934908)));
label_16b740:
    // 0x16b740: 0x10600041  beqz        $v1, . + 4 + (0x41 << 2)
label_16b744:
    if (ctx->pc == 0x16B744u) {
        ctx->pc = 0x16B748u;
        goto label_16b748;
    }
    ctx->pc = 0x16B740u;
    {
        const bool branch_taken_0x16b740 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x16b740) {
            ctx->pc = 0x16B848u;
            goto label_16b848;
        }
    }
    ctx->pc = 0x16B748u;
label_16b748:
    // 0x16b748: 0x8f838710  lw          $v1, -0x78F0($gp)
    ctx->pc = 0x16b748u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16b74c:
    // 0x16b74c: 0x2624003c  addiu       $a0, $s1, 0x3C
    ctx->pc = 0x16b74cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 60));
label_16b750:
    // 0x16b750: 0x2c63007f  sltiu       $v1, $v1, 0x7F
    ctx->pc = 0x16b750u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)127) ? 1 : 0);
label_16b754:
    // 0x16b754: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
label_16b758:
    if (ctx->pc == 0x16B758u) {
        ctx->pc = 0x16B758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B754u;
        // 0x16b758: 0x309100ff  andi        $s1, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x16B75Cu;
        goto label_16b75c;
    }
    ctx->pc = 0x16B754u;
    {
        const bool branch_taken_0x16b754 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x16B758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B754u;
        // 0x16b758: 0x309100ff  andi        $s1, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b754) {
            ctx->pc = 0x16B780u;
            goto label_16b780;
        }
    }
    ctx->pc = 0x16B75Cu;
label_16b75c:
    // 0x16b75c: 0x8f858710  lw          $a1, -0x78F0($gp)
    ctx->pc = 0x16b75cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16b760:
    // 0x16b760: 0x3c060036  lui         $a2, 0x36
    ctx->pc = 0x16b760u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)54 << 16));
label_16b764:
    // 0x16b764: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x16b764u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_16b768:
    // 0x16b768: 0xc08d61c  jal         func_235870
label_16b76c:
    if (ctx->pc == 0x16B76Cu) {
        ctx->pc = 0x16B76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B768u;
        // 0x16b76c: 0x24c63ef0  addiu       $a2, $a2, 0x3EF0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16B770u;
        goto label_16b770;
    }
    ctx->pc = 0x16B768u;
    SET_GPR_U32(ctx, 31, 0x16B770u);
    ctx->pc = 0x16B76Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B768u;
    // 0x16b76c: 0x24c63ef0  addiu       $a2, $a2, 0x3EF0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235870u;
    { ctx->pc = 0x235870; return; }
    ctx->pc = 0x16B770u;
label_16b770:
    // 0x16b770: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x16b770u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_16b774:
    // 0x16b774: 0x1043fff9  beq         $v0, $v1, . + 4 + (-0x7 << 2)
label_16b778:
    if (ctx->pc == 0x16B778u) {
        ctx->pc = 0x16B77Cu;
        goto label_16b77c;
    }
    ctx->pc = 0x16B774u;
    {
        const bool branch_taken_0x16b774 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x16b774) {
            ctx->pc = 0x16B75Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16b75c;
        }
    }
    ctx->pc = 0x16B77Cu;
label_16b77c:
    // 0x16b77c: 0xaf808710  sw          $zero, -0x78F0($gp)
    ctx->pc = 0x16b77cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936336), GPR_U32(ctx, 0));
label_16b780:
    // 0x16b780: 0x123380  sll         $a2, $s2, 14
    ctx->pc = 0x16b780u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 18), 14));
label_16b784:
    // 0x16b784: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x16b784u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
label_16b788:
    // 0x16b788: 0x322300ff  andi        $v1, $s1, 0xFF
    ctx->pc = 0x16b788u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
label_16b78c:
    // 0x16b78c: 0x328700ff  andi        $a3, $s4, 0xFF
    ctx->pc = 0x16b78cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
label_16b790:
    // 0x16b790: 0xc43025  or          $a2, $a2, $a0
    ctx->pc = 0x16b790u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 4));
label_16b794:
    // 0x16b794: 0x31b80  sll         $v1, $v1, 14
    ctx->pc = 0x16b794u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 14));
label_16b798:
    // 0x16b798: 0x721c0  sll         $a0, $a3, 7
    ctx->pc = 0x16b798u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 7));
label_16b79c:
    // 0x16b79c: 0x320500ff  andi        $a1, $s0, 0xFF
    ctx->pc = 0x16b79cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_16b7a0:
    // 0x16b7a0: 0xc43025  or          $a2, $a2, $a0
    ctx->pc = 0x16b7a0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 4));
label_16b7a4:
    // 0x16b7a4: 0x34633f80  ori         $v1, $v1, 0x3F80
    ctx->pc = 0x16b7a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16256);
label_16b7a8:
    // 0x16b7a8: 0x672025  or          $a0, $v1, $a3
    ctx->pc = 0x16b7a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
label_16b7ac:
    // 0x16b7ac: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x16b7acu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
label_16b7b0:
    // 0x16b7b0: 0x134600  sll         $t0, $s3, 24
    ctx->pc = 0x16b7b0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 19), 24));
label_16b7b4:
    // 0x16b7b4: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x16b7b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_16b7b8:
    // 0x16b7b8: 0x1031825  or          $v1, $t0, $v1
    ctx->pc = 0x16b7b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
label_16b7bc:
    // 0x16b7bc: 0x8f868710  lw          $a2, -0x78F0($gp)
    ctx->pc = 0x16b7bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16b7c0:
    // 0x16b7c0: 0x653825  or          $a3, $v1, $a1
    ctx->pc = 0x16b7c0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
label_16b7c4:
    // 0x16b7c4: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x16b7c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
label_16b7c8:
    // 0x16b7c8: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x16b7c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_16b7cc:
    // 0x16b7cc: 0x1031825  or          $v1, $t0, $v1
    ctx->pc = 0x16b7ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
label_16b7d0:
    // 0x16b7d0: 0x24a53ef0  addiu       $a1, $a1, 0x3EF0
    ctx->pc = 0x16b7d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16112));
label_16b7d4:
    // 0x16b7d4: 0x648025  or          $s0, $v1, $a0
    ctx->pc = 0x16b7d4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_16b7d8:
    // 0x16b7d8: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x16b7d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_16b7dc:
    // 0x16b7dc: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x16b7dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_16b7e0:
    // 0x16b7e0: 0xac670000  sw          $a3, 0x0($v1)
    ctx->pc = 0x16b7e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 7));
label_16b7e4:
    // 0x16b7e4: 0x8f838710  lw          $v1, -0x78F0($gp)
    ctx->pc = 0x16b7e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16b7e8:
    // 0x16b7e8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x16b7e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_16b7ec:
    // 0x16b7ec: 0xaf838710  sw          $v1, -0x78F0($gp)
    ctx->pc = 0x16b7ecu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936336), GPR_U32(ctx, 3));
label_16b7f0:
    // 0x16b7f0: 0x8f838710  lw          $v1, -0x78F0($gp)
    ctx->pc = 0x16b7f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16b7f4:
    // 0x16b7f4: 0x2c63007f  sltiu       $v1, $v1, 0x7F
    ctx->pc = 0x16b7f4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)127) ? 1 : 0);
label_16b7f8:
    // 0x16b7f8: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
label_16b7fc:
    if (ctx->pc == 0x16B7FCu) {
        ctx->pc = 0x16B800u;
        goto label_16b800;
    }
    ctx->pc = 0x16B7F8u;
    {
        const bool branch_taken_0x16b7f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x16b7f8) {
            ctx->pc = 0x16B824u;
            goto label_16b824;
        }
    }
    ctx->pc = 0x16B800u;
label_16b800:
    // 0x16b800: 0x8f858710  lw          $a1, -0x78F0($gp)
    ctx->pc = 0x16b800u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16b804:
    // 0x16b804: 0x3c060036  lui         $a2, 0x36
    ctx->pc = 0x16b804u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)54 << 16));
label_16b808:
    // 0x16b808: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x16b808u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_16b80c:
    // 0x16b80c: 0xc08d61c  jal         func_235870
label_16b810:
    if (ctx->pc == 0x16B810u) {
        ctx->pc = 0x16B810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B80Cu;
        // 0x16b810: 0x24c63ef0  addiu       $a2, $a2, 0x3EF0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16B814u;
        goto label_16b814;
    }
    ctx->pc = 0x16B80Cu;
    SET_GPR_U32(ctx, 31, 0x16B814u);
    ctx->pc = 0x16B810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B80Cu;
    // 0x16b810: 0x24c63ef0  addiu       $a2, $a2, 0x3EF0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235870u;
    { ctx->pc = 0x235870; return; }
    ctx->pc = 0x16B814u;
label_16b814:
    // 0x16b814: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x16b814u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_16b818:
    // 0x16b818: 0x1043fff9  beq         $v0, $v1, . + 4 + (-0x7 << 2)
label_16b81c:
    if (ctx->pc == 0x16B81Cu) {
        ctx->pc = 0x16B820u;
        goto label_16b820;
    }
    ctx->pc = 0x16B818u;
    {
        const bool branch_taken_0x16b818 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x16b818) {
            ctx->pc = 0x16B800u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16b800;
        }
    }
    ctx->pc = 0x16B820u;
label_16b820:
    // 0x16b820: 0xaf808710  sw          $zero, -0x78F0($gp)
    ctx->pc = 0x16b820u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936336), GPR_U32(ctx, 0));
label_16b824:
    // 0x16b824: 0x8f848710  lw          $a0, -0x78F0($gp)
    ctx->pc = 0x16b824u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16b828:
    // 0x16b828: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x16b828u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
label_16b82c:
    // 0x16b82c: 0x24633ef0  addiu       $v1, $v1, 0x3EF0
    ctx->pc = 0x16b82cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16112));
label_16b830:
    // 0x16b830: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x16b830u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_16b834:
    // 0x16b834: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x16b834u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_16b838:
    // 0x16b838: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x16b838u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
label_16b83c:
    // 0x16b83c: 0x8f838710  lw          $v1, -0x78F0($gp)
    ctx->pc = 0x16b83cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16b840:
    // 0x16b840: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x16b840u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_16b844:
    // 0x16b844: 0xaf838710  sw          $v1, -0x78F0($gp)
    ctx->pc = 0x16b844u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936336), GPR_U32(ctx, 3));
label_16b848:
    // 0x16b848: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x16b848u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_16b84c:
    // 0x16b84c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x16b84cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_16b850:
    // 0x16b850: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x16b850u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_16b854:
    // 0x16b854: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x16b854u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_16b858:
    // 0x16b858: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x16b858u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_16b85c:
    // 0x16b85c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16b85cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_16b860:
    // 0x16b860: 0x3e00008  jr          $ra
label_16b864:
    if (ctx->pc == 0x16B864u) {
        ctx->pc = 0x16B864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B860u;
        // 0x16b864: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16B868u;
        goto label_16b868;
    }
    ctx->pc = 0x16B860u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16B864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B860u;
        // 0x16b864: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16B860u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16B868u;
label_16b868:
    // 0x16b868: 0x0  nop
    ctx->pc = 0x16b868u;
    // NOP
label_16b86c:
    // 0x16b86c: 0x0  nop
    ctx->pc = 0x16b86cu;
    // NOP
label_16b870:
    // 0x16b870: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x16b870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_16b874:
    // 0x16b874: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x16b874u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16b878:
    // 0x16b878: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x16b878u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_16b87c:
    // 0x16b87c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x16b87cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_16b880:
    // 0x16b880: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x16b880u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_16b884:
    // 0x16b884: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x16b884u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_16b888:
    // 0x16b888: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x16b888u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_16b88c:
    // 0x16b88c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x16b88cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x16b890u;
    return;
}
