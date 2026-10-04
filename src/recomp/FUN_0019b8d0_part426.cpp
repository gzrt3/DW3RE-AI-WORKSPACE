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

// Function: FUN_0019b8d0
// Address: 0x19b8d0 - 0x29b8d8
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0019b8d0_part426(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x26b120u: goto label_26b120;
        case 0x26b124u: goto label_26b124;
        case 0x26b128u: goto label_26b128;
        case 0x26b12cu: goto label_26b12c;
        case 0x26b130u: goto label_26b130;
        case 0x26b134u: goto label_26b134;
        case 0x26b138u: goto label_26b138;
        case 0x26b13cu: goto label_26b13c;
        case 0x26b140u: goto label_26b140;
        case 0x26b144u: goto label_26b144;
        case 0x26b148u: goto label_26b148;
        case 0x26b14cu: goto label_26b14c;
        case 0x26b150u: goto label_26b150;
        case 0x26b154u: goto label_26b154;
        case 0x26b158u: goto label_26b158;
        case 0x26b15cu: goto label_26b15c;
        case 0x26b160u: goto label_26b160;
        case 0x26b164u: goto label_26b164;
        case 0x26b168u: goto label_26b168;
        case 0x26b16cu: goto label_26b16c;
        case 0x26b170u: goto label_26b170;
        case 0x26b174u: goto label_26b174;
        case 0x26b178u: goto label_26b178;
        case 0x26b17cu: goto label_26b17c;
        case 0x26b180u: goto label_26b180;
        case 0x26b184u: goto label_26b184;
        case 0x26b188u: goto label_26b188;
        case 0x26b18cu: goto label_26b18c;
        case 0x26b190u: goto label_26b190;
        case 0x26b194u: goto label_26b194;
        case 0x26b198u: goto label_26b198;
        case 0x26b19cu: goto label_26b19c;
        case 0x26b1a0u: goto label_26b1a0;
        case 0x26b1a4u: goto label_26b1a4;
        case 0x26b1a8u: goto label_26b1a8;
        case 0x26b1acu: goto label_26b1ac;
        case 0x26b1b0u: goto label_26b1b0;
        case 0x26b1b4u: goto label_26b1b4;
        case 0x26b1b8u: goto label_26b1b8;
        case 0x26b1bcu: goto label_26b1bc;
        case 0x26b1c0u: goto label_26b1c0;
        case 0x26b1c4u: goto label_26b1c4;
        case 0x26b1c8u: goto label_26b1c8;
        case 0x26b1ccu: goto label_26b1cc;
        case 0x26b1d0u: goto label_26b1d0;
        case 0x26b1d4u: goto label_26b1d4;
        case 0x26b1d8u: goto label_26b1d8;
        case 0x26b1dcu: goto label_26b1dc;
        case 0x26b1e0u: goto label_26b1e0;
        case 0x26b1e4u: goto label_26b1e4;
        case 0x26b1e8u: goto label_26b1e8;
        case 0x26b1ecu: goto label_26b1ec;
        case 0x26b1f0u: goto label_26b1f0;
        case 0x26b1f4u: goto label_26b1f4;
        case 0x26b1f8u: goto label_26b1f8;
        case 0x26b1fcu: goto label_26b1fc;
        case 0x26b200u: goto label_26b200;
        case 0x26b204u: goto label_26b204;
        case 0x26b208u: goto label_26b208;
        case 0x26b20cu: goto label_26b20c;
        case 0x26b210u: goto label_26b210;
        case 0x26b214u: goto label_26b214;
        case 0x26b218u: goto label_26b218;
        case 0x26b21cu: goto label_26b21c;
        case 0x26b220u: goto label_26b220;
        case 0x26b224u: goto label_26b224;
        case 0x26b228u: goto label_26b228;
        case 0x26b22cu: goto label_26b22c;
        case 0x26b230u: goto label_26b230;
        case 0x26b234u: goto label_26b234;
        case 0x26b238u: goto label_26b238;
        case 0x26b23cu: goto label_26b23c;
        case 0x26b240u: goto label_26b240;
        case 0x26b244u: goto label_26b244;
        case 0x26b248u: goto label_26b248;
        case 0x26b24cu: goto label_26b24c;
        case 0x26b250u: goto label_26b250;
        case 0x26b254u: goto label_26b254;
        case 0x26b258u: goto label_26b258;
        case 0x26b25cu: goto label_26b25c;
        case 0x26b260u: goto label_26b260;
        case 0x26b264u: goto label_26b264;
        case 0x26b268u: goto label_26b268;
        case 0x26b26cu: goto label_26b26c;
        case 0x26b270u: goto label_26b270;
        case 0x26b274u: goto label_26b274;
        case 0x26b278u: goto label_26b278;
        case 0x26b27cu: goto label_26b27c;
        case 0x26b280u: goto label_26b280;
        case 0x26b284u: goto label_26b284;
        case 0x26b288u: goto label_26b288;
        case 0x26b28cu: goto label_26b28c;
        case 0x26b290u: goto label_26b290;
        case 0x26b294u: goto label_26b294;
        case 0x26b298u: goto label_26b298;
        case 0x26b29cu: goto label_26b29c;
        case 0x26b2a0u: goto label_26b2a0;
        case 0x26b2a4u: goto label_26b2a4;
        case 0x26b2a8u: goto label_26b2a8;
        case 0x26b2acu: goto label_26b2ac;
        case 0x26b2b0u: goto label_26b2b0;
        case 0x26b2b4u: goto label_26b2b4;
        case 0x26b2b8u: goto label_26b2b8;
        case 0x26b2bcu: goto label_26b2bc;
        case 0x26b2c0u: goto label_26b2c0;
        case 0x26b2c4u: goto label_26b2c4;
        case 0x26b2c8u: goto label_26b2c8;
        case 0x26b2ccu: goto label_26b2cc;
        case 0x26b2d0u: goto label_26b2d0;
        case 0x26b2d4u: goto label_26b2d4;
        case 0x26b2d8u: goto label_26b2d8;
        case 0x26b2dcu: goto label_26b2dc;
        case 0x26b2e0u: goto label_26b2e0;
        case 0x26b2e4u: goto label_26b2e4;
        case 0x26b2e8u: goto label_26b2e8;
        case 0x26b2ecu: goto label_26b2ec;
        case 0x26b2f0u: goto label_26b2f0;
        case 0x26b2f4u: goto label_26b2f4;
        case 0x26b2f8u: goto label_26b2f8;
        case 0x26b2fcu: goto label_26b2fc;
        case 0x26b300u: goto label_26b300;
        case 0x26b304u: goto label_26b304;
        case 0x26b308u: goto label_26b308;
        case 0x26b30cu: goto label_26b30c;
        case 0x26b310u: goto label_26b310;
        case 0x26b314u: goto label_26b314;
        case 0x26b318u: goto label_26b318;
        case 0x26b31cu: goto label_26b31c;
        case 0x26b320u: goto label_26b320;
        case 0x26b324u: goto label_26b324;
        case 0x26b328u: goto label_26b328;
        case 0x26b32cu: goto label_26b32c;
        case 0x26b330u: goto label_26b330;
        case 0x26b334u: goto label_26b334;
        case 0x26b338u: goto label_26b338;
        case 0x26b33cu: goto label_26b33c;
        case 0x26b340u: goto label_26b340;
        case 0x26b344u: goto label_26b344;
        case 0x26b348u: goto label_26b348;
        case 0x26b34cu: goto label_26b34c;
        case 0x26b350u: goto label_26b350;
        case 0x26b354u: goto label_26b354;
        case 0x26b358u: goto label_26b358;
        case 0x26b35cu: goto label_26b35c;
        case 0x26b360u: goto label_26b360;
        case 0x26b364u: goto label_26b364;
        case 0x26b368u: goto label_26b368;
        case 0x26b36cu: goto label_26b36c;
        case 0x26b370u: goto label_26b370;
        case 0x26b374u: goto label_26b374;
        case 0x26b378u: goto label_26b378;
        case 0x26b37cu: goto label_26b37c;
        case 0x26b380u: goto label_26b380;
        case 0x26b384u: goto label_26b384;
        case 0x26b388u: goto label_26b388;
        case 0x26b38cu: goto label_26b38c;
        case 0x26b390u: goto label_26b390;
        case 0x26b394u: goto label_26b394;
        case 0x26b398u: goto label_26b398;
        case 0x26b39cu: goto label_26b39c;
        case 0x26b3a0u: goto label_26b3a0;
        case 0x26b3a4u: goto label_26b3a4;
        case 0x26b3a8u: goto label_26b3a8;
        case 0x26b3acu: goto label_26b3ac;
        case 0x26b3b0u: goto label_26b3b0;
        case 0x26b3b4u: goto label_26b3b4;
        case 0x26b3b8u: goto label_26b3b8;
        case 0x26b3bcu: goto label_26b3bc;
        case 0x26b3c0u: goto label_26b3c0;
        case 0x26b3c4u: goto label_26b3c4;
        case 0x26b3c8u: goto label_26b3c8;
        case 0x26b3ccu: goto label_26b3cc;
        case 0x26b3d0u: goto label_26b3d0;
        case 0x26b3d4u: goto label_26b3d4;
        case 0x26b3d8u: goto label_26b3d8;
        case 0x26b3dcu: goto label_26b3dc;
        case 0x26b3e0u: goto label_26b3e0;
        case 0x26b3e4u: goto label_26b3e4;
        case 0x26b3e8u: goto label_26b3e8;
        case 0x26b3ecu: goto label_26b3ec;
        case 0x26b3f0u: goto label_26b3f0;
        case 0x26b3f4u: goto label_26b3f4;
        case 0x26b3f8u: goto label_26b3f8;
        case 0x26b3fcu: goto label_26b3fc;
        case 0x26b400u: goto label_26b400;
        case 0x26b404u: goto label_26b404;
        case 0x26b408u: goto label_26b408;
        case 0x26b40cu: goto label_26b40c;
        case 0x26b410u: goto label_26b410;
        case 0x26b414u: goto label_26b414;
        case 0x26b418u: goto label_26b418;
        case 0x26b41cu: goto label_26b41c;
        case 0x26b420u: goto label_26b420;
        case 0x26b424u: goto label_26b424;
        case 0x26b428u: goto label_26b428;
        case 0x26b42cu: goto label_26b42c;
        case 0x26b430u: goto label_26b430;
        case 0x26b434u: goto label_26b434;
        case 0x26b438u: goto label_26b438;
        case 0x26b43cu: goto label_26b43c;
        case 0x26b440u: goto label_26b440;
        case 0x26b444u: goto label_26b444;
        case 0x26b448u: goto label_26b448;
        case 0x26b44cu: goto label_26b44c;
        case 0x26b450u: goto label_26b450;
        case 0x26b454u: goto label_26b454;
        case 0x26b458u: goto label_26b458;
        case 0x26b45cu: goto label_26b45c;
        case 0x26b460u: goto label_26b460;
        case 0x26b464u: goto label_26b464;
        case 0x26b468u: goto label_26b468;
        case 0x26b46cu: goto label_26b46c;
        case 0x26b470u: goto label_26b470;
        case 0x26b474u: goto label_26b474;
        case 0x26b478u: goto label_26b478;
        case 0x26b47cu: goto label_26b47c;
        case 0x26b480u: goto label_26b480;
        case 0x26b484u: goto label_26b484;
        case 0x26b488u: goto label_26b488;
        case 0x26b48cu: goto label_26b48c;
        case 0x26b490u: goto label_26b490;
        case 0x26b494u: goto label_26b494;
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
        default: return;
    }

label_26b120:
    // 0x26b120: 0x1078  dsll        $v0, $zero, 1
    ctx->pc = 0x26b120u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) << 1);
label_26b124:
    // 0x26b124: 0x59f0  tge         $zero, $zero, 359
    ctx->pc = 0x26b124u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26b128:
    // 0x26b128: 0x0  nop
    ctx->pc = 0x26b128u;
    // NOP
label_26b12c:
    // 0x26b12c: 0x0  nop
    ctx->pc = 0x26b12cu;
    // NOP
label_26b130:
    // 0x26b130: 0x1084  .word       0x00001084                   # sllv        $v0, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26b130u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_26b134:
    // 0x26b134: 0x8360  .word       0x00008360                   # add         $s0, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26b134u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_26b138:
    // 0x26b138: 0x0  nop
    ctx->pc = 0x26b138u;
    // NOP
label_26b13c:
    // 0x26b13c: 0x0  nop
    ctx->pc = 0x26b13cu;
    // NOP
label_26b140:
    // 0x26b140: 0x1095  .word       0x00001095                   # INVALID     $zero, $zero, 0x1095 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26b140u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x26B140 raw=0x00001095"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26b144:
    // 0x26b144: 0x46b0  tge         $zero, $zero, 282
    ctx->pc = 0x26b144u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26b148:
    // 0x26b148: 0x0  nop
    ctx->pc = 0x26b148u;
    // NOP
label_26b14c:
    // 0x26b14c: 0x0  nop
    ctx->pc = 0x26b14cu;
    // NOP
label_26b150:
    // 0x26b150: 0x109e  .word       0x0000109E                   # ddiv        $v0, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26b150u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x26B150 raw=0x0000109E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26b154:
    // 0x26b154: 0xfe80  sll         $ra, $zero, 26
    ctx->pc = 0x26b154u;
    SET_GPR_S32(ctx, 31, (int32_t)SLL32(GPR_U32(ctx, 0), 26));
label_26b158:
    // 0x26b158: 0x0  nop
    ctx->pc = 0x26b158u;
    // NOP
label_26b15c:
    // 0x26b15c: 0x0  nop
    ctx->pc = 0x26b15cu;
    // NOP
label_26b160:
    // 0x26b160: 0x10be  dsrl32      $v0, $zero, 2
    ctx->pc = 0x26b160u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) >> (32 + 2));
label_26b164:
    // 0x26b164: 0x5860  .word       0x00005860                   # add         $t3, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26b164u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_26b168:
    // 0x26b168: 0x0  nop
    ctx->pc = 0x26b168u;
    // NOP
label_26b16c:
    // 0x26b16c: 0x0  nop
    ctx->pc = 0x26b16cu;
    // NOP
label_26b170:
    // 0x26b170: 0x10ca  .word       0x000010CA                   # movz        $v0, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26b170u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
label_26b174:
    // 0x26b174: 0x7180  sll         $t6, $zero, 6
    ctx->pc = 0x26b174u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 0), 6));
label_26b178:
    // 0x26b178: 0x0  nop
    ctx->pc = 0x26b178u;
    // NOP
label_26b17c:
    // 0x26b17c: 0x0  nop
    ctx->pc = 0x26b17cu;
    // NOP
label_26b180:
    // 0x26b180: 0x10d9  .word       0x000010D9                   # multu       $zero, $zero # 000010C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26b180u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_26b184:
    // 0x26b184: 0x7b80  sll         $t7, $zero, 14
    ctx->pc = 0x26b184u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 0), 14));
label_26b188:
    // 0x26b188: 0x0  nop
    ctx->pc = 0x26b188u;
    // NOP
label_26b18c:
    // 0x26b18c: 0x0  nop
    ctx->pc = 0x26b18cu;
    // NOP
label_26b190:
    // 0x26b190: 0x10e9  .word       0x000010E9                   # mtsa        $zero # 000010C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x26b190u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_26b194:
    // 0x26b194: 0xac50  .word       0x0000AC50                   # mfhi        $s5 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26b194u;
    SET_GPR_U64(ctx, 21, ctx->hi);
label_26b198:
    // 0x26b198: 0x0  nop
    ctx->pc = 0x26b198u;
    // NOP
label_26b19c:
    // 0x26b19c: 0x0  nop
    ctx->pc = 0x26b19cu;
    // NOP
label_26b1a0:
    // 0x26b1a0: 0x10ff  dsra32      $v0, $zero, 3
    ctx->pc = 0x26b1a0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 0) >> (32 + 3));
label_26b1a4:
    // 0x26b1a4: 0x8680  sll         $s0, $zero, 26
    ctx->pc = 0x26b1a4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 0), 26));
label_26b1a8:
    // 0x26b1a8: 0x0  nop
    ctx->pc = 0x26b1a8u;
    // NOP
label_26b1ac:
    // 0x26b1ac: 0x0  nop
    ctx->pc = 0x26b1acu;
    // NOP
label_26b1b0:
    // 0x26b1b0: 0x1110  .word       0x00001110                   # mfhi        $v0 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26b1b0u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_26b1b4:
    // 0x26b1b4: 0x6340  sll         $t4, $zero, 13
    ctx->pc = 0x26b1b4u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 13));
label_26b1b8:
    // 0x26b1b8: 0x0  nop
    ctx->pc = 0x26b1b8u;
    // NOP
label_26b1bc:
    // 0x26b1bc: 0x0  nop
    ctx->pc = 0x26b1bcu;
    // NOP
label_26b1c0:
    // 0x26b1c0: 0x111d  .word       0x0000111D                   # dmultu      $zero, $zero # 00001100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26b1c0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x26B1C0 raw=0x0000111D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26b1c4:
    // 0x26b1c4: 0x18990  .word       0x00018990                   # mfhi        $s1 # 00010180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26b1c4u;
    SET_GPR_U64(ctx, 17, ctx->hi);
label_26b1c8:
    // 0x26b1c8: 0x0  nop
    ctx->pc = 0x26b1c8u;
    // NOP
label_26b1cc:
    // 0x26b1cc: 0x0  nop
    ctx->pc = 0x26b1ccu;
    // NOP
label_26b1d0:
    // 0x26b1d0: 0x114f  .word       0x0000114F                   # sync # 00001000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26b1d0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_26b1d4:
    // 0x26b1d4: 0x5920  .word       0x00005920                   # add         $t3, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26b1d4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_26b1d8:
    // 0x26b1d8: 0x0  nop
    ctx->pc = 0x26b1d8u;
    // NOP
label_26b1dc:
    // 0x26b1dc: 0x0  nop
    ctx->pc = 0x26b1dcu;
    // NOP
label_26b1e0:
    // 0x26b1e0: 0x115b  .word       0x0000115B                   # divu        $v0, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26b1e0u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_26b1e4:
    // 0x26b1e4: 0x91e0  .word       0x000091E0                   # add         $s2, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26b1e4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 18, (int32_t)result);     } }
label_26b1e8:
    // 0x26b1e8: 0x0  nop
    ctx->pc = 0x26b1e8u;
    // NOP
label_26b1ec:
    // 0x26b1ec: 0x0  nop
    ctx->pc = 0x26b1ecu;
    // NOP
label_26b1f0:
    // 0x26b1f0: 0x116e  .word       0x0000116E                   # dsub        $v0, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26b1f0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 2, r); }
label_26b1f4:
    // 0x26b1f4: 0x4e00  sll         $t1, $zero, 24
    ctx->pc = 0x26b1f4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), 24));
label_26b1f8:
    // 0x26b1f8: 0x0  nop
    ctx->pc = 0x26b1f8u;
    // NOP
label_26b1fc:
    // 0x26b1fc: 0x0  nop
    ctx->pc = 0x26b1fcu;
    // NOP
label_26b200:
    // 0x26b200: 0x1178  dsll        $v0, $zero, 5
    ctx->pc = 0x26b200u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) << 5);
label_26b204:
    // 0x26b204: 0x6110  .word       0x00006110                   # mfhi        $t4 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26b204u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_26b208:
    // 0x26b208: 0x0  nop
    ctx->pc = 0x26b208u;
    // NOP
label_26b20c:
    // 0x26b20c: 0x0  nop
    ctx->pc = 0x26b20cu;
    // NOP
label_26b210:
    // 0x26b210: 0x1185  .word       0x00001185                   # INVALID     $zero, $zero, 0x1185 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26b210u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x26B210 raw=0x00001185"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26b214:
    // 0x26b214: 0x79d0  .word       0x000079D0                   # mfhi        $t7 # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26b214u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_26b218:
    // 0x26b218: 0x0  nop
    ctx->pc = 0x26b218u;
    // NOP
label_26b21c:
    // 0x26b21c: 0x0  nop
    ctx->pc = 0x26b21cu;
    // NOP
label_26b220:
    // 0x26b220: 0x1195  .word       0x00001195                   # INVALID     $zero, $zero, 0x1195 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26b220u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x26B220 raw=0x00001195"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26b224:
    // 0x26b224: 0x3de0  .word       0x00003DE0                   # add         $a3, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26b224u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
label_26b228:
    // 0x26b228: 0x0  nop
    ctx->pc = 0x26b228u;
    // NOP
label_26b22c:
    // 0x26b22c: 0x0  nop
    ctx->pc = 0x26b22cu;
    // NOP
label_26b230:
    // 0x26b230: 0x119d  .word       0x0000119D                   # dmultu      $zero, $zero # 00001180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26b230u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x26B230 raw=0x0000119D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26b234:
    // 0x26b234: 0xcc10  .word       0x0000CC10                   # mfhi        $t9 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26b234u;
    SET_GPR_U64(ctx, 25, ctx->hi);
label_26b238:
    // 0x26b238: 0x0  nop
    ctx->pc = 0x26b238u;
    // NOP
label_26b23c:
    // 0x26b23c: 0x0  nop
    ctx->pc = 0x26b23cu;
    // NOP
label_26b240:
    // 0x26b240: 0x11b7  .word       0x000011B7                   # INVALID     $zero, $zero, 0x11B7 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26b240u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x26B240 raw=0x000011B7"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26b244:
    // 0x26b244: 0x8400  sll         $s0, $zero, 16
    ctx->pc = 0x26b244u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 0), 16));
label_26b248:
    // 0x26b248: 0x0  nop
    ctx->pc = 0x26b248u;
    // NOP
label_26b24c:
    // 0x26b24c: 0x0  nop
    ctx->pc = 0x26b24cu;
    // NOP
label_26b250:
    // 0x26b250: 0x11c8  .word       0x000011C8                   # jr          $zero # 000011C0 <InstrIdType: CPU_SPECIAL>
label_26b254:
    if (ctx->pc == 0x26B254u) {
        ctx->pc = 0x26B254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B250u;
        // 0x26b254: 0x8640  sll         $s0, $zero, 25 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26B258u;
        goto label_26b258;
    }
    ctx->pc = 0x26B250u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x26B254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B250u;
        // 0x26b254: 0x8640  sll         $s0, $zero, 25 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26B250u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x26B258u;
label_26b258:
    // 0x26b258: 0x0  nop
    ctx->pc = 0x26b258u;
    // NOP
label_26b25c:
    // 0x26b25c: 0x0  nop
    ctx->pc = 0x26b25cu;
    // NOP
label_26b260:
    // 0x26b260: 0x11d9  .word       0x000011D9                   # multu       $zero, $zero # 000011C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26b260u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_26b264:
    // 0x26b264: 0x7890  .word       0x00007890                   # mfhi        $t7 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26b264u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_26b268:
    // 0x26b268: 0x0  nop
    ctx->pc = 0x26b268u;
    // NOP
label_26b26c:
    // 0x26b26c: 0x0  nop
    ctx->pc = 0x26b26cu;
    // NOP
label_26b270:
    // 0x26b270: 0x11e9  .word       0x000011E9                   # mtsa        $zero # 000011C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x26b270u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_26b274:
    // 0x26b274: 0x6dc0  sll         $t5, $zero, 23
    ctx->pc = 0x26b274u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 0), 23));
label_26b278:
    // 0x26b278: 0x0  nop
    ctx->pc = 0x26b278u;
    // NOP
label_26b27c:
    // 0x26b27c: 0x0  nop
    ctx->pc = 0x26b27cu;
    // NOP
label_26b280:
    // 0x26b280: 0x11f7  .word       0x000011F7                   # INVALID     $zero, $zero, 0x11F7 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26b280u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x26B280 raw=0x000011F7"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26b284:
    // 0x26b284: 0x7700  sll         $t6, $zero, 28
    ctx->pc = 0x26b284u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 0), 28));
label_26b288:
    // 0x26b288: 0x0  nop
    ctx->pc = 0x26b288u;
    // NOP
label_26b28c:
    // 0x26b28c: 0x0  nop
    ctx->pc = 0x26b28cu;
    // NOP
label_26b290:
    // 0x26b290: 0x1206  .word       0x00001206                   # srlv        $v0, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26b290u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_26b294:
    // 0x26b294: 0x9e90  .word       0x00009E90                   # mfhi        $s3 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26b294u;
    SET_GPR_U64(ctx, 19, ctx->hi);
label_26b298:
    // 0x26b298: 0x0  nop
    ctx->pc = 0x26b298u;
    // NOP
label_26b29c:
    // 0x26b29c: 0x0  nop
    ctx->pc = 0x26b29cu;
    // NOP
label_26b2a0:
    // 0x26b2a0: 0x121a  .word       0x0000121A                   # div         $v0, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26b2a0u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_26b2a4:
    // 0x26b2a4: 0xb790  .word       0x0000B790                   # mfhi        $s6 # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26b2a4u;
    SET_GPR_U64(ctx, 22, ctx->hi);
label_26b2a8:
    // 0x26b2a8: 0x0  nop
    ctx->pc = 0x26b2a8u;
    // NOP
label_26b2ac:
    // 0x26b2ac: 0x0  nop
    ctx->pc = 0x26b2acu;
    // NOP
label_26b2b0:
    // 0x26b2b0: 0x1231  tgeu        $zero, $zero, 72
    ctx->pc = 0x26b2b0u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26b2b4:
    // 0x26b2b4: 0x8b10  .word       0x00008B10                   # mfhi        $s1 # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26b2b4u;
    SET_GPR_U64(ctx, 17, ctx->hi);
label_26b2b8:
    // 0x26b2b8: 0x0  nop
    ctx->pc = 0x26b2b8u;
    // NOP
label_26b2bc:
    // 0x26b2bc: 0x0  nop
    ctx->pc = 0x26b2bcu;
    // NOP
label_26b2c0:
    // 0x26b2c0: 0x1243  sra         $v0, $zero, 9
    ctx->pc = 0x26b2c0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 0), 9));
label_26b2c4:
    // 0x26b2c4: 0x8fa0  .word       0x00008FA0                   # add         $s1, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26b2c4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_26b2c8:
    // 0x26b2c8: 0x0  nop
    ctx->pc = 0x26b2c8u;
    // NOP
label_26b2cc:
    // 0x26b2cc: 0x0  nop
    ctx->pc = 0x26b2ccu;
    // NOP
label_26b2d0:
    // 0x26b2d0: 0x1255  .word       0x00001255                   # INVALID     $zero, $zero, 0x1255 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26b2d0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x26B2D0 raw=0x00001255"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26b2d4:
    // 0x26b2d4: 0x8100  sll         $s0, $zero, 4
    ctx->pc = 0x26b2d4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 0), 4));
label_26b2d8:
    // 0x26b2d8: 0x0  nop
    ctx->pc = 0x26b2d8u;
    // NOP
label_26b2dc:
    // 0x26b2dc: 0x0  nop
    ctx->pc = 0x26b2dcu;
    // NOP
label_26b2e0:
    // 0x26b2e0: 0x1266  .word       0x00001266                   # xor         $v0, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26b2e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_26b2e4:
    // 0x26b2e4: 0x7240  sll         $t6, $zero, 9
    ctx->pc = 0x26b2e4u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 0), 9));
label_26b2e8:
    // 0x26b2e8: 0x0  nop
    ctx->pc = 0x26b2e8u;
    // NOP
label_26b2ec:
    // 0x26b2ec: 0x0  nop
    ctx->pc = 0x26b2ecu;
    // NOP
label_26b2f0:
    // 0x26b2f0: 0x1275  .word       0x00001275                   # INVALID     $zero, $zero, 0x1275 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26b2f0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x26B2F0 raw=0x00001275"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26b2f4:
    // 0x26b2f4: 0x8580  sll         $s0, $zero, 22
    ctx->pc = 0x26b2f4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 0), 22));
label_26b2f8:
    // 0x26b2f8: 0x0  nop
    ctx->pc = 0x26b2f8u;
    // NOP
label_26b2fc:
    // 0x26b2fc: 0x0  nop
    ctx->pc = 0x26b2fcu;
    // NOP
label_26b300:
    // 0x26b300: 0x1286  .word       0x00001286                   # srlv        $v0, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26b300u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_26b304:
    // 0x26b304: 0x9770  tge         $zero, $zero, 605
    ctx->pc = 0x26b304u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26b308:
    // 0x26b308: 0x0  nop
    ctx->pc = 0x26b308u;
    // NOP
label_26b30c:
    // 0x26b30c: 0x0  nop
    ctx->pc = 0x26b30cu;
    // NOP
label_26b310:
    // 0x26b310: 0x1299  .word       0x00001299                   # multu       $zero, $zero # 00001280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26b310u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_26b314:
    // 0x26b314: 0x14bc0  sll         $t1, $at, 15
    ctx->pc = 0x26b314u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 1), 15));
label_26b318:
    // 0x26b318: 0x0  nop
    ctx->pc = 0x26b318u;
    // NOP
label_26b31c:
    // 0x26b31c: 0x0  nop
    ctx->pc = 0x26b31cu;
    // NOP
label_26b320:
    // 0x26b320: 0x12c3  sra         $v0, $zero, 11
    ctx->pc = 0x26b320u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 0), 11));
label_26b324:
    // 0x26b324: 0xc160  .word       0x0000C160                   # add         $t8, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26b324u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 24, (int32_t)result);     } }
label_26b328:
    // 0x26b328: 0x0  nop
    ctx->pc = 0x26b328u;
    // NOP
label_26b32c:
    // 0x26b32c: 0x0  nop
    ctx->pc = 0x26b32cu;
    // NOP
label_26b330:
    // 0x26b330: 0x12dc  .word       0x000012DC                   # dmult       $zero, $zero # 000012C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26b330u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x26B330 raw=0x000012DC"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26b334:
    // 0x26b334: 0x8da0  .word       0x00008DA0                   # add         $s1, $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26b334u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_26b338:
    // 0x26b338: 0x0  nop
    ctx->pc = 0x26b338u;
    // NOP
label_26b33c:
    // 0x26b33c: 0x0  nop
    ctx->pc = 0x26b33cu;
    // NOP
label_26b340:
    // 0x26b340: 0x12ee  .word       0x000012EE                   # dsub        $v0, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26b340u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 2, r); }
label_26b344:
    // 0x26b344: 0x6890  .word       0x00006890                   # mfhi        $t5 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26b344u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_26b348:
    // 0x26b348: 0x0  nop
    ctx->pc = 0x26b348u;
    // NOP
label_26b34c:
    // 0x26b34c: 0x0  nop
    ctx->pc = 0x26b34cu;
    // NOP
label_26b350:
    // 0x26b350: 0x12fc  dsll32      $v0, $zero, 11
    ctx->pc = 0x26b350u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) << (32 + 11));
label_26b354:
    // 0x26b354: 0x7c90  .word       0x00007C90                   # mfhi        $t7 # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26b354u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_26b358:
    // 0x26b358: 0x0  nop
    ctx->pc = 0x26b358u;
    // NOP
label_26b35c:
    // 0x26b35c: 0x0  nop
    ctx->pc = 0x26b35cu;
    // NOP
label_26b360:
    // 0x26b360: 0x130c  syscall     76
    ctx->pc = 0x26b360u;
    ctx->pc = 0x26B364u;
runtime->handleSyscall(rdram, ctx, 0x4Cu);
label_26b364:
    // 0x26b364: 0x8a40  sll         $s1, $zero, 9
    ctx->pc = 0x26b364u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 0), 9));
label_26b368:
    // 0x26b368: 0x0  nop
    ctx->pc = 0x26b368u;
    // NOP
label_26b36c:
    // 0x26b36c: 0x0  nop
    ctx->pc = 0x26b36cu;
    // NOP
label_26b370:
    // 0x26b370: 0x131e  .word       0x0000131E                   # ddiv        $v0, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26b370u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x26B370 raw=0x0000131E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26b374:
    // 0x26b374: 0xb560  .word       0x0000B560                   # add         $s6, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26b374u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
label_26b378:
    // 0x26b378: 0x0  nop
    ctx->pc = 0x26b378u;
    // NOP
label_26b37c:
    // 0x26b37c: 0x0  nop
    ctx->pc = 0x26b37cu;
    // NOP
label_26b380:
    // 0x26b380: 0x1335  .word       0x00001335                   # INVALID     $zero, $zero, 0x1335 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26b380u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x26B380 raw=0x00001335"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26b384:
    // 0x26b384: 0x11de0  .word       0x00011DE0                   # add         $v1, $zero, $at # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26b384u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_26b388:
    // 0x26b388: 0x0  nop
    ctx->pc = 0x26b388u;
    // NOP
label_26b38c:
    // 0x26b38c: 0x0  nop
    ctx->pc = 0x26b38cu;
    // NOP
label_26b390:
    // 0x26b390: 0x1359  .word       0x00001359                   # multu       $zero, $zero # 00001340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26b390u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_26b394:
    // 0x26b394: 0xb330  tge         $zero, $zero, 716
    ctx->pc = 0x26b394u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26b398:
    // 0x26b398: 0x0  nop
    ctx->pc = 0x26b398u;
    // NOP
label_26b39c:
    // 0x26b39c: 0x0  nop
    ctx->pc = 0x26b39cu;
    // NOP
label_26b3a0:
    // 0x26b3a0: 0x1370  tge         $zero, $zero, 77
    ctx->pc = 0x26b3a0u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26b3a4:
    // 0x26b3a4: 0xa9d0  .word       0x0000A9D0                   # mfhi        $s5 # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26b3a4u;
    SET_GPR_U64(ctx, 21, ctx->hi);
label_26b3a8:
    // 0x26b3a8: 0x0  nop
    ctx->pc = 0x26b3a8u;
    // NOP
label_26b3ac:
    // 0x26b3ac: 0x0  nop
    ctx->pc = 0x26b3acu;
    // NOP
label_26b3b0:
    // 0x26b3b0: 0x1386  .word       0x00001386                   # srlv        $v0, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26b3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_26b3b4:
    // 0x26b3b4: 0x8ec0  sll         $s1, $zero, 27
    ctx->pc = 0x26b3b4u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 0), 27));
label_26b3b8:
    // 0x26b3b8: 0x0  nop
    ctx->pc = 0x26b3b8u;
    // NOP
label_26b3bc:
    // 0x26b3bc: 0x0  nop
    ctx->pc = 0x26b3bcu;
    // NOP
label_26b3c0:
    // 0x26b3c0: 0x1398  .word       0x00001398                   # mult        $v0, $zero, $zero # 00000380 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x26b3c0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_26b3c4:
    // 0x26b3c4: 0xafc0  sll         $s5, $zero, 31
    ctx->pc = 0x26b3c4u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 0), 31));
label_26b3c8:
    // 0x26b3c8: 0x0  nop
    ctx->pc = 0x26b3c8u;
    // NOP
label_26b3cc:
    // 0x26b3cc: 0x0  nop
    ctx->pc = 0x26b3ccu;
    // NOP
label_26b3d0:
    // 0x26b3d0: 0x13ae  .word       0x000013AE                   # dsub        $v0, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26b3d0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 2, r); }
label_26b3d4:
    // 0x26b3d4: 0x8ca0  .word       0x00008CA0                   # add         $s1, $zero, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26b3d4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_26b3d8:
    // 0x26b3d8: 0x0  nop
    ctx->pc = 0x26b3d8u;
    // NOP
label_26b3dc:
    // 0x26b3dc: 0x0  nop
    ctx->pc = 0x26b3dcu;
    // NOP
label_26b3e0:
    // 0x26b3e0: 0x13c0  sll         $v0, $zero, 15
    ctx->pc = 0x26b3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 0), 15));
label_26b3e4:
    // 0x26b3e4: 0xabd0  .word       0x0000ABD0                   # mfhi        $s5 # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26b3e4u;
    SET_GPR_U64(ctx, 21, ctx->hi);
label_26b3e8:
    // 0x26b3e8: 0x0  nop
    ctx->pc = 0x26b3e8u;
    // NOP
label_26b3ec:
    // 0x26b3ec: 0x0  nop
    ctx->pc = 0x26b3ecu;
    // NOP
label_26b3f0:
    // 0x26b3f0: 0x13d6  .word       0x000013D6                   # dsrlv       $v0, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26b3f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_26b3f4:
    // 0x26b3f4: 0xe590  .word       0x0000E590                   # mfhi        $gp # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26b3f4u;
    SET_GPR_U64(ctx, 28, ctx->hi);
label_26b3f8:
    // 0x26b3f8: 0x0  nop
    ctx->pc = 0x26b3f8u;
    // NOP
label_26b3fc:
    // 0x26b3fc: 0x0  nop
    ctx->pc = 0x26b3fcu;
    // NOP
label_26b400:
    // 0x26b400: 0x13f3  tltu        $zero, $zero, 79
    ctx->pc = 0x26b400u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26b404:
    // 0x26b404: 0x7f40  sll         $t7, $zero, 29
    ctx->pc = 0x26b404u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 0), 29));
label_26b408:
    // 0x26b408: 0x0  nop
    ctx->pc = 0x26b408u;
    // NOP
label_26b40c:
    // 0x26b40c: 0x0  nop
    ctx->pc = 0x26b40cu;
    // NOP
label_26b410:
    // 0x26b410: 0x1403  sra         $v0, $zero, 16
    ctx->pc = 0x26b410u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 0), 16));
label_26b414:
    // 0x26b414: 0x6580  sll         $t4, $zero, 22
    ctx->pc = 0x26b414u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 22));
label_26b418:
    // 0x26b418: 0x0  nop
    ctx->pc = 0x26b418u;
    // NOP
label_26b41c:
    // 0x26b41c: 0x0  nop
    ctx->pc = 0x26b41cu;
    // NOP
label_26b420:
    // 0x26b420: 0x1410  .word       0x00001410                   # mfhi        $v0 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26b420u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_26b424:
    // 0x26b424: 0x7f50  .word       0x00007F50                   # mfhi        $t7 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26b424u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_26b428:
    // 0x26b428: 0x0  nop
    ctx->pc = 0x26b428u;
    // NOP
label_26b42c:
    // 0x26b42c: 0x0  nop
    ctx->pc = 0x26b42cu;
    // NOP
label_26b430:
    // 0x26b430: 0x1420  .word       0x00001420                   # add         $v0, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26b430u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 2, (int32_t)result);     } }
label_26b434:
    // 0x26b434: 0x5720  .word       0x00005720                   # add         $t2, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26b434u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
label_26b438:
    // 0x26b438: 0x0  nop
    ctx->pc = 0x26b438u;
    // NOP
label_26b43c:
    // 0x26b43c: 0x0  nop
    ctx->pc = 0x26b43cu;
    // NOP
label_26b440:
    // 0x26b440: 0x142b  .word       0x0000142B                   # sltu        $v0, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26b440u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_26b444:
    // 0x26b444: 0x5ac0  sll         $t3, $zero, 11
    ctx->pc = 0x26b444u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 0), 11));
label_26b448:
    // 0x26b448: 0x0  nop
    ctx->pc = 0x26b448u;
    // NOP
label_26b44c:
    // 0x26b44c: 0x0  nop
    ctx->pc = 0x26b44cu;
    // NOP
label_26b450:
    // 0x26b450: 0x1437  .word       0x00001437                   # INVALID     $zero, $zero, 0x1437 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26b450u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x26B450 raw=0x00001437"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26b454:
    // 0x26b454: 0x9a90  .word       0x00009A90                   # mfhi        $s3 # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26b454u;
    SET_GPR_U64(ctx, 19, ctx->hi);
label_26b458:
    // 0x26b458: 0x0  nop
    ctx->pc = 0x26b458u;
    // NOP
label_26b45c:
    // 0x26b45c: 0x0  nop
    ctx->pc = 0x26b45cu;
    // NOP
label_26b460:
    // 0x26b460: 0x144b  .word       0x0000144B                   # movn        $v0, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26b460u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
label_26b464:
    // 0x26b464: 0x196a0  .word       0x000196A0                   # add         $s2, $zero, $at # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26b464u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 18, (int32_t)result);     } }
label_26b468:
    // 0x26b468: 0x0  nop
    ctx->pc = 0x26b468u;
    // NOP
label_26b46c:
    // 0x26b46c: 0x0  nop
    ctx->pc = 0x26b46cu;
    // NOP
label_26b470:
    // 0x26b470: 0x147e  dsrl32      $v0, $zero, 17
    ctx->pc = 0x26b470u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) >> (32 + 17));
label_26b474:
    // 0x26b474: 0x69f0  tge         $zero, $zero, 423
    ctx->pc = 0x26b474u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26b478:
    // 0x26b478: 0x0  nop
    ctx->pc = 0x26b478u;
    // NOP
label_26b47c:
    // 0x26b47c: 0x0  nop
    ctx->pc = 0x26b47cu;
    // NOP
label_26b480:
    // 0x26b480: 0x148c  syscall     82
    ctx->pc = 0x26b480u;
    ctx->pc = 0x26B484u;
runtime->handleSyscall(rdram, ctx, 0x52u);
label_26b484:
    // 0x26b484: 0x50b0  tge         $zero, $zero, 322
    ctx->pc = 0x26b484u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26b488:
    // 0x26b488: 0x0  nop
    ctx->pc = 0x26b488u;
    // NOP
label_26b48c:
    // 0x26b48c: 0x0  nop
    ctx->pc = 0x26b48cu;
    // NOP
label_26b490:
    // 0x26b490: 0x1497  .word       0x00001497                   # dsrav       $v0, $zero, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26b490u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_26b494:
    // 0x26b494: 0x5920  .word       0x00005920                   # add         $t3, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26b494u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
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
    ctx->pc = 0x26b8f0u;
    return;
}
