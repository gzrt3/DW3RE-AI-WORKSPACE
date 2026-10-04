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


void FUN_0019b5e8_part203(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x1fe008u: goto label_1fe008;
        case 0x1fe00cu: goto label_1fe00c;
        case 0x1fe010u: goto label_1fe010;
        case 0x1fe014u: goto label_1fe014;
        case 0x1fe018u: goto label_1fe018;
        case 0x1fe01cu: goto label_1fe01c;
        case 0x1fe020u: goto label_1fe020;
        case 0x1fe024u: goto label_1fe024;
        case 0x1fe028u: goto label_1fe028;
        case 0x1fe02cu: goto label_1fe02c;
        case 0x1fe030u: goto label_1fe030;
        case 0x1fe034u: goto label_1fe034;
        case 0x1fe038u: goto label_1fe038;
        case 0x1fe03cu: goto label_1fe03c;
        case 0x1fe040u: goto label_1fe040;
        case 0x1fe044u: goto label_1fe044;
        case 0x1fe048u: goto label_1fe048;
        case 0x1fe04cu: goto label_1fe04c;
        case 0x1fe050u: goto label_1fe050;
        case 0x1fe054u: goto label_1fe054;
        case 0x1fe058u: goto label_1fe058;
        case 0x1fe05cu: goto label_1fe05c;
        case 0x1fe060u: goto label_1fe060;
        case 0x1fe064u: goto label_1fe064;
        case 0x1fe068u: goto label_1fe068;
        case 0x1fe06cu: goto label_1fe06c;
        case 0x1fe070u: goto label_1fe070;
        case 0x1fe074u: goto label_1fe074;
        case 0x1fe078u: goto label_1fe078;
        case 0x1fe07cu: goto label_1fe07c;
        case 0x1fe080u: goto label_1fe080;
        case 0x1fe084u: goto label_1fe084;
        case 0x1fe088u: goto label_1fe088;
        case 0x1fe08cu: goto label_1fe08c;
        case 0x1fe090u: goto label_1fe090;
        case 0x1fe094u: goto label_1fe094;
        case 0x1fe098u: goto label_1fe098;
        case 0x1fe09cu: goto label_1fe09c;
        case 0x1fe0a0u: goto label_1fe0a0;
        case 0x1fe0a4u: goto label_1fe0a4;
        case 0x1fe0a8u: goto label_1fe0a8;
        case 0x1fe0acu: goto label_1fe0ac;
        case 0x1fe0b0u: goto label_1fe0b0;
        case 0x1fe0b4u: goto label_1fe0b4;
        case 0x1fe0b8u: goto label_1fe0b8;
        case 0x1fe0bcu: goto label_1fe0bc;
        case 0x1fe0c0u: goto label_1fe0c0;
        case 0x1fe0c4u: goto label_1fe0c4;
        case 0x1fe0c8u: goto label_1fe0c8;
        case 0x1fe0ccu: goto label_1fe0cc;
        case 0x1fe0d0u: goto label_1fe0d0;
        case 0x1fe0d4u: goto label_1fe0d4;
        case 0x1fe0d8u: goto label_1fe0d8;
        case 0x1fe0dcu: goto label_1fe0dc;
        case 0x1fe0e0u: goto label_1fe0e0;
        case 0x1fe0e4u: goto label_1fe0e4;
        case 0x1fe0e8u: goto label_1fe0e8;
        case 0x1fe0ecu: goto label_1fe0ec;
        case 0x1fe0f0u: goto label_1fe0f0;
        case 0x1fe0f4u: goto label_1fe0f4;
        case 0x1fe0f8u: goto label_1fe0f8;
        case 0x1fe0fcu: goto label_1fe0fc;
        case 0x1fe100u: goto label_1fe100;
        case 0x1fe104u: goto label_1fe104;
        case 0x1fe108u: goto label_1fe108;
        case 0x1fe10cu: goto label_1fe10c;
        case 0x1fe110u: goto label_1fe110;
        case 0x1fe114u: goto label_1fe114;
        case 0x1fe118u: goto label_1fe118;
        case 0x1fe11cu: goto label_1fe11c;
        case 0x1fe120u: goto label_1fe120;
        case 0x1fe124u: goto label_1fe124;
        case 0x1fe128u: goto label_1fe128;
        case 0x1fe12cu: goto label_1fe12c;
        case 0x1fe130u: goto label_1fe130;
        case 0x1fe134u: goto label_1fe134;
        case 0x1fe138u: goto label_1fe138;
        case 0x1fe13cu: goto label_1fe13c;
        case 0x1fe140u: goto label_1fe140;
        case 0x1fe144u: goto label_1fe144;
        case 0x1fe148u: goto label_1fe148;
        case 0x1fe14cu: goto label_1fe14c;
        case 0x1fe150u: goto label_1fe150;
        case 0x1fe154u: goto label_1fe154;
        case 0x1fe158u: goto label_1fe158;
        case 0x1fe15cu: goto label_1fe15c;
        case 0x1fe160u: goto label_1fe160;
        case 0x1fe164u: goto label_1fe164;
        case 0x1fe168u: goto label_1fe168;
        case 0x1fe16cu: goto label_1fe16c;
        case 0x1fe170u: goto label_1fe170;
        case 0x1fe174u: goto label_1fe174;
        case 0x1fe178u: goto label_1fe178;
        case 0x1fe17cu: goto label_1fe17c;
        case 0x1fe180u: goto label_1fe180;
        case 0x1fe184u: goto label_1fe184;
        case 0x1fe188u: goto label_1fe188;
        case 0x1fe18cu: goto label_1fe18c;
        case 0x1fe190u: goto label_1fe190;
        case 0x1fe194u: goto label_1fe194;
        case 0x1fe198u: goto label_1fe198;
        case 0x1fe19cu: goto label_1fe19c;
        case 0x1fe1a0u: goto label_1fe1a0;
        case 0x1fe1a4u: goto label_1fe1a4;
        case 0x1fe1a8u: goto label_1fe1a8;
        case 0x1fe1acu: goto label_1fe1ac;
        case 0x1fe1b0u: goto label_1fe1b0;
        case 0x1fe1b4u: goto label_1fe1b4;
        case 0x1fe1b8u: goto label_1fe1b8;
        case 0x1fe1bcu: goto label_1fe1bc;
        case 0x1fe1c0u: goto label_1fe1c0;
        case 0x1fe1c4u: goto label_1fe1c4;
        case 0x1fe1c8u: goto label_1fe1c8;
        case 0x1fe1ccu: goto label_1fe1cc;
        case 0x1fe1d0u: goto label_1fe1d0;
        case 0x1fe1d4u: goto label_1fe1d4;
        case 0x1fe1d8u: goto label_1fe1d8;
        case 0x1fe1dcu: goto label_1fe1dc;
        case 0x1fe1e0u: goto label_1fe1e0;
        case 0x1fe1e4u: goto label_1fe1e4;
        case 0x1fe1e8u: goto label_1fe1e8;
        case 0x1fe1ecu: goto label_1fe1ec;
        case 0x1fe1f0u: goto label_1fe1f0;
        case 0x1fe1f4u: goto label_1fe1f4;
        case 0x1fe1f8u: goto label_1fe1f8;
        case 0x1fe1fcu: goto label_1fe1fc;
        case 0x1fe200u: goto label_1fe200;
        case 0x1fe204u: goto label_1fe204;
        case 0x1fe208u: goto label_1fe208;
        case 0x1fe20cu: goto label_1fe20c;
        case 0x1fe210u: goto label_1fe210;
        case 0x1fe214u: goto label_1fe214;
        case 0x1fe218u: goto label_1fe218;
        case 0x1fe21cu: goto label_1fe21c;
        case 0x1fe220u: goto label_1fe220;
        case 0x1fe224u: goto label_1fe224;
        case 0x1fe228u: goto label_1fe228;
        case 0x1fe22cu: goto label_1fe22c;
        case 0x1fe230u: goto label_1fe230;
        case 0x1fe234u: goto label_1fe234;
        case 0x1fe238u: goto label_1fe238;
        case 0x1fe23cu: goto label_1fe23c;
        case 0x1fe240u: goto label_1fe240;
        case 0x1fe244u: goto label_1fe244;
        case 0x1fe248u: goto label_1fe248;
        case 0x1fe24cu: goto label_1fe24c;
        case 0x1fe250u: goto label_1fe250;
        case 0x1fe254u: goto label_1fe254;
        case 0x1fe258u: goto label_1fe258;
        case 0x1fe25cu: goto label_1fe25c;
        case 0x1fe260u: goto label_1fe260;
        case 0x1fe264u: goto label_1fe264;
        case 0x1fe268u: goto label_1fe268;
        case 0x1fe26cu: goto label_1fe26c;
        case 0x1fe270u: goto label_1fe270;
        case 0x1fe274u: goto label_1fe274;
        case 0x1fe278u: goto label_1fe278;
        case 0x1fe27cu: goto label_1fe27c;
        case 0x1fe280u: goto label_1fe280;
        case 0x1fe284u: goto label_1fe284;
        case 0x1fe288u: goto label_1fe288;
        case 0x1fe28cu: goto label_1fe28c;
        case 0x1fe290u: goto label_1fe290;
        case 0x1fe294u: goto label_1fe294;
        case 0x1fe298u: goto label_1fe298;
        case 0x1fe29cu: goto label_1fe29c;
        case 0x1fe2a0u: goto label_1fe2a0;
        case 0x1fe2a4u: goto label_1fe2a4;
        case 0x1fe2a8u: goto label_1fe2a8;
        case 0x1fe2acu: goto label_1fe2ac;
        case 0x1fe2b0u: goto label_1fe2b0;
        case 0x1fe2b4u: goto label_1fe2b4;
        case 0x1fe2b8u: goto label_1fe2b8;
        case 0x1fe2bcu: goto label_1fe2bc;
        case 0x1fe2c0u: goto label_1fe2c0;
        case 0x1fe2c4u: goto label_1fe2c4;
        case 0x1fe2c8u: goto label_1fe2c8;
        case 0x1fe2ccu: goto label_1fe2cc;
        case 0x1fe2d0u: goto label_1fe2d0;
        case 0x1fe2d4u: goto label_1fe2d4;
        case 0x1fe2d8u: goto label_1fe2d8;
        case 0x1fe2dcu: goto label_1fe2dc;
        case 0x1fe2e0u: goto label_1fe2e0;
        case 0x1fe2e4u: goto label_1fe2e4;
        case 0x1fe2e8u: goto label_1fe2e8;
        case 0x1fe2ecu: goto label_1fe2ec;
        case 0x1fe2f0u: goto label_1fe2f0;
        case 0x1fe2f4u: goto label_1fe2f4;
        case 0x1fe2f8u: goto label_1fe2f8;
        case 0x1fe2fcu: goto label_1fe2fc;
        case 0x1fe300u: goto label_1fe300;
        case 0x1fe304u: goto label_1fe304;
        case 0x1fe308u: goto label_1fe308;
        case 0x1fe30cu: goto label_1fe30c;
        case 0x1fe310u: goto label_1fe310;
        case 0x1fe314u: goto label_1fe314;
        case 0x1fe318u: goto label_1fe318;
        case 0x1fe31cu: goto label_1fe31c;
        case 0x1fe320u: goto label_1fe320;
        case 0x1fe324u: goto label_1fe324;
        case 0x1fe328u: goto label_1fe328;
        case 0x1fe32cu: goto label_1fe32c;
        case 0x1fe330u: goto label_1fe330;
        case 0x1fe334u: goto label_1fe334;
        case 0x1fe338u: goto label_1fe338;
        case 0x1fe33cu: goto label_1fe33c;
        case 0x1fe340u: goto label_1fe340;
        case 0x1fe344u: goto label_1fe344;
        case 0x1fe348u: goto label_1fe348;
        case 0x1fe34cu: goto label_1fe34c;
        case 0x1fe350u: goto label_1fe350;
        case 0x1fe354u: goto label_1fe354;
        case 0x1fe358u: goto label_1fe358;
        case 0x1fe35cu: goto label_1fe35c;
        case 0x1fe360u: goto label_1fe360;
        case 0x1fe364u: goto label_1fe364;
        case 0x1fe368u: goto label_1fe368;
        case 0x1fe36cu: goto label_1fe36c;
        case 0x1fe370u: goto label_1fe370;
        case 0x1fe374u: goto label_1fe374;
        case 0x1fe378u: goto label_1fe378;
        case 0x1fe37cu: goto label_1fe37c;
        case 0x1fe380u: goto label_1fe380;
        case 0x1fe384u: goto label_1fe384;
        case 0x1fe388u: goto label_1fe388;
        case 0x1fe38cu: goto label_1fe38c;
        case 0x1fe390u: goto label_1fe390;
        case 0x1fe394u: goto label_1fe394;
        case 0x1fe398u: goto label_1fe398;
        case 0x1fe39cu: goto label_1fe39c;
        case 0x1fe3a0u: goto label_1fe3a0;
        case 0x1fe3a4u: goto label_1fe3a4;
        case 0x1fe3a8u: goto label_1fe3a8;
        case 0x1fe3acu: goto label_1fe3ac;
        case 0x1fe3b0u: goto label_1fe3b0;
        case 0x1fe3b4u: goto label_1fe3b4;
        case 0x1fe3b8u: goto label_1fe3b8;
        case 0x1fe3bcu: goto label_1fe3bc;
        case 0x1fe3c0u: goto label_1fe3c0;
        case 0x1fe3c4u: goto label_1fe3c4;
        case 0x1fe3c8u: goto label_1fe3c8;
        case 0x1fe3ccu: goto label_1fe3cc;
        case 0x1fe3d0u: goto label_1fe3d0;
        case 0x1fe3d4u: goto label_1fe3d4;
        case 0x1fe3d8u: goto label_1fe3d8;
        case 0x1fe3dcu: goto label_1fe3dc;
        case 0x1fe3e0u: goto label_1fe3e0;
        case 0x1fe3e4u: goto label_1fe3e4;
        case 0x1fe3e8u: goto label_1fe3e8;
        case 0x1fe3ecu: goto label_1fe3ec;
        case 0x1fe3f0u: goto label_1fe3f0;
        case 0x1fe3f4u: goto label_1fe3f4;
        case 0x1fe3f8u: goto label_1fe3f8;
        case 0x1fe3fcu: goto label_1fe3fc;
        case 0x1fe400u: goto label_1fe400;
        case 0x1fe404u: goto label_1fe404;
        case 0x1fe408u: goto label_1fe408;
        case 0x1fe40cu: goto label_1fe40c;
        case 0x1fe410u: goto label_1fe410;
        case 0x1fe414u: goto label_1fe414;
        case 0x1fe418u: goto label_1fe418;
        case 0x1fe41cu: goto label_1fe41c;
        case 0x1fe420u: goto label_1fe420;
        case 0x1fe424u: goto label_1fe424;
        case 0x1fe428u: goto label_1fe428;
        case 0x1fe42cu: goto label_1fe42c;
        case 0x1fe430u: goto label_1fe430;
        case 0x1fe434u: goto label_1fe434;
        case 0x1fe438u: goto label_1fe438;
        case 0x1fe43cu: goto label_1fe43c;
        case 0x1fe440u: goto label_1fe440;
        case 0x1fe444u: goto label_1fe444;
        case 0x1fe448u: goto label_1fe448;
        case 0x1fe44cu: goto label_1fe44c;
        case 0x1fe450u: goto label_1fe450;
        case 0x1fe454u: goto label_1fe454;
        case 0x1fe458u: goto label_1fe458;
        case 0x1fe45cu: goto label_1fe45c;
        case 0x1fe460u: goto label_1fe460;
        case 0x1fe464u: goto label_1fe464;
        case 0x1fe468u: goto label_1fe468;
        case 0x1fe46cu: goto label_1fe46c;
        case 0x1fe470u: goto label_1fe470;
        case 0x1fe474u: goto label_1fe474;
        case 0x1fe478u: goto label_1fe478;
        case 0x1fe47cu: goto label_1fe47c;
        case 0x1fe480u: goto label_1fe480;
        case 0x1fe484u: goto label_1fe484;
        case 0x1fe488u: goto label_1fe488;
        case 0x1fe48cu: goto label_1fe48c;
        case 0x1fe490u: goto label_1fe490;
        case 0x1fe494u: goto label_1fe494;
        case 0x1fe498u: goto label_1fe498;
        case 0x1fe49cu: goto label_1fe49c;
        case 0x1fe4a0u: goto label_1fe4a0;
        case 0x1fe4a4u: goto label_1fe4a4;
        case 0x1fe4a8u: goto label_1fe4a8;
        case 0x1fe4acu: goto label_1fe4ac;
        case 0x1fe4b0u: goto label_1fe4b0;
        case 0x1fe4b4u: goto label_1fe4b4;
        case 0x1fe4b8u: goto label_1fe4b8;
        case 0x1fe4bcu: goto label_1fe4bc;
        case 0x1fe4c0u: goto label_1fe4c0;
        case 0x1fe4c4u: goto label_1fe4c4;
        case 0x1fe4c8u: goto label_1fe4c8;
        case 0x1fe4ccu: goto label_1fe4cc;
        case 0x1fe4d0u: goto label_1fe4d0;
        case 0x1fe4d4u: goto label_1fe4d4;
        case 0x1fe4d8u: goto label_1fe4d8;
        case 0x1fe4dcu: goto label_1fe4dc;
        case 0x1fe4e0u: goto label_1fe4e0;
        case 0x1fe4e4u: goto label_1fe4e4;
        case 0x1fe4e8u: goto label_1fe4e8;
        case 0x1fe4ecu: goto label_1fe4ec;
        case 0x1fe4f0u: goto label_1fe4f0;
        case 0x1fe4f4u: goto label_1fe4f4;
        case 0x1fe4f8u: goto label_1fe4f8;
        case 0x1fe4fcu: goto label_1fe4fc;
        case 0x1fe500u: goto label_1fe500;
        case 0x1fe504u: goto label_1fe504;
        case 0x1fe508u: goto label_1fe508;
        case 0x1fe50cu: goto label_1fe50c;
        case 0x1fe510u: goto label_1fe510;
        case 0x1fe514u: goto label_1fe514;
        case 0x1fe518u: goto label_1fe518;
        case 0x1fe51cu: goto label_1fe51c;
        case 0x1fe520u: goto label_1fe520;
        case 0x1fe524u: goto label_1fe524;
        case 0x1fe528u: goto label_1fe528;
        case 0x1fe52cu: goto label_1fe52c;
        case 0x1fe530u: goto label_1fe530;
        case 0x1fe534u: goto label_1fe534;
        case 0x1fe538u: goto label_1fe538;
        case 0x1fe53cu: goto label_1fe53c;
        case 0x1fe540u: goto label_1fe540;
        case 0x1fe544u: goto label_1fe544;
        case 0x1fe548u: goto label_1fe548;
        case 0x1fe54cu: goto label_1fe54c;
        case 0x1fe550u: goto label_1fe550;
        case 0x1fe554u: goto label_1fe554;
        case 0x1fe558u: goto label_1fe558;
        case 0x1fe55cu: goto label_1fe55c;
        case 0x1fe560u: goto label_1fe560;
        case 0x1fe564u: goto label_1fe564;
        case 0x1fe568u: goto label_1fe568;
        case 0x1fe56cu: goto label_1fe56c;
        case 0x1fe570u: goto label_1fe570;
        case 0x1fe574u: goto label_1fe574;
        case 0x1fe578u: goto label_1fe578;
        case 0x1fe57cu: goto label_1fe57c;
        case 0x1fe580u: goto label_1fe580;
        case 0x1fe584u: goto label_1fe584;
        case 0x1fe588u: goto label_1fe588;
        case 0x1fe58cu: goto label_1fe58c;
        case 0x1fe590u: goto label_1fe590;
        case 0x1fe594u: goto label_1fe594;
        case 0x1fe598u: goto label_1fe598;
        case 0x1fe59cu: goto label_1fe59c;
        case 0x1fe5a0u: goto label_1fe5a0;
        case 0x1fe5a4u: goto label_1fe5a4;
        case 0x1fe5a8u: goto label_1fe5a8;
        case 0x1fe5acu: goto label_1fe5ac;
        case 0x1fe5b0u: goto label_1fe5b0;
        case 0x1fe5b4u: goto label_1fe5b4;
        case 0x1fe5b8u: goto label_1fe5b8;
        case 0x1fe5bcu: goto label_1fe5bc;
        case 0x1fe5c0u: goto label_1fe5c0;
        case 0x1fe5c4u: goto label_1fe5c4;
        case 0x1fe5c8u: goto label_1fe5c8;
        case 0x1fe5ccu: goto label_1fe5cc;
        case 0x1fe5d0u: goto label_1fe5d0;
        case 0x1fe5d4u: goto label_1fe5d4;
        case 0x1fe5d8u: goto label_1fe5d8;
        case 0x1fe5dcu: goto label_1fe5dc;
        case 0x1fe5e0u: goto label_1fe5e0;
        case 0x1fe5e4u: goto label_1fe5e4;
        case 0x1fe5e8u: goto label_1fe5e8;
        case 0x1fe5ecu: goto label_1fe5ec;
        case 0x1fe5f0u: goto label_1fe5f0;
        case 0x1fe5f4u: goto label_1fe5f4;
        case 0x1fe5f8u: goto label_1fe5f8;
        case 0x1fe5fcu: goto label_1fe5fc;
        case 0x1fe600u: goto label_1fe600;
        case 0x1fe604u: goto label_1fe604;
        case 0x1fe608u: goto label_1fe608;
        case 0x1fe60cu: goto label_1fe60c;
        case 0x1fe610u: goto label_1fe610;
        case 0x1fe614u: goto label_1fe614;
        case 0x1fe618u: goto label_1fe618;
        case 0x1fe61cu: goto label_1fe61c;
        case 0x1fe620u: goto label_1fe620;
        case 0x1fe624u: goto label_1fe624;
        case 0x1fe628u: goto label_1fe628;
        case 0x1fe62cu: goto label_1fe62c;
        case 0x1fe630u: goto label_1fe630;
        case 0x1fe634u: goto label_1fe634;
        case 0x1fe638u: goto label_1fe638;
        case 0x1fe63cu: goto label_1fe63c;
        case 0x1fe640u: goto label_1fe640;
        case 0x1fe644u: goto label_1fe644;
        case 0x1fe648u: goto label_1fe648;
        case 0x1fe64cu: goto label_1fe64c;
        case 0x1fe650u: goto label_1fe650;
        case 0x1fe654u: goto label_1fe654;
        case 0x1fe658u: goto label_1fe658;
        case 0x1fe65cu: goto label_1fe65c;
        case 0x1fe660u: goto label_1fe660;
        case 0x1fe664u: goto label_1fe664;
        case 0x1fe668u: goto label_1fe668;
        case 0x1fe66cu: goto label_1fe66c;
        case 0x1fe670u: goto label_1fe670;
        case 0x1fe674u: goto label_1fe674;
        case 0x1fe678u: goto label_1fe678;
        case 0x1fe67cu: goto label_1fe67c;
        case 0x1fe680u: goto label_1fe680;
        case 0x1fe684u: goto label_1fe684;
        case 0x1fe688u: goto label_1fe688;
        case 0x1fe68cu: goto label_1fe68c;
        case 0x1fe690u: goto label_1fe690;
        case 0x1fe694u: goto label_1fe694;
        case 0x1fe698u: goto label_1fe698;
        case 0x1fe69cu: goto label_1fe69c;
        case 0x1fe6a0u: goto label_1fe6a0;
        case 0x1fe6a4u: goto label_1fe6a4;
        case 0x1fe6a8u: goto label_1fe6a8;
        case 0x1fe6acu: goto label_1fe6ac;
        case 0x1fe6b0u: goto label_1fe6b0;
        case 0x1fe6b4u: goto label_1fe6b4;
        case 0x1fe6b8u: goto label_1fe6b8;
        case 0x1fe6bcu: goto label_1fe6bc;
        case 0x1fe6c0u: goto label_1fe6c0;
        case 0x1fe6c4u: goto label_1fe6c4;
        case 0x1fe6c8u: goto label_1fe6c8;
        case 0x1fe6ccu: goto label_1fe6cc;
        case 0x1fe6d0u: goto label_1fe6d0;
        case 0x1fe6d4u: goto label_1fe6d4;
        case 0x1fe6d8u: goto label_1fe6d8;
        case 0x1fe6dcu: goto label_1fe6dc;
        case 0x1fe6e0u: goto label_1fe6e0;
        case 0x1fe6e4u: goto label_1fe6e4;
        case 0x1fe6e8u: goto label_1fe6e8;
        case 0x1fe6ecu: goto label_1fe6ec;
        case 0x1fe6f0u: goto label_1fe6f0;
        case 0x1fe6f4u: goto label_1fe6f4;
        case 0x1fe6f8u: goto label_1fe6f8;
        case 0x1fe6fcu: goto label_1fe6fc;
        case 0x1fe700u: goto label_1fe700;
        case 0x1fe704u: goto label_1fe704;
        case 0x1fe708u: goto label_1fe708;
        case 0x1fe70cu: goto label_1fe70c;
        case 0x1fe710u: goto label_1fe710;
        case 0x1fe714u: goto label_1fe714;
        case 0x1fe718u: goto label_1fe718;
        case 0x1fe71cu: goto label_1fe71c;
        case 0x1fe720u: goto label_1fe720;
        case 0x1fe724u: goto label_1fe724;
        case 0x1fe728u: goto label_1fe728;
        case 0x1fe72cu: goto label_1fe72c;
        case 0x1fe730u: goto label_1fe730;
        case 0x1fe734u: goto label_1fe734;
        case 0x1fe738u: goto label_1fe738;
        case 0x1fe73cu: goto label_1fe73c;
        case 0x1fe740u: goto label_1fe740;
        case 0x1fe744u: goto label_1fe744;
        case 0x1fe748u: goto label_1fe748;
        case 0x1fe74cu: goto label_1fe74c;
        case 0x1fe750u: goto label_1fe750;
        case 0x1fe754u: goto label_1fe754;
        case 0x1fe758u: goto label_1fe758;
        case 0x1fe75cu: goto label_1fe75c;
        case 0x1fe760u: goto label_1fe760;
        case 0x1fe764u: goto label_1fe764;
        case 0x1fe768u: goto label_1fe768;
        case 0x1fe76cu: goto label_1fe76c;
        case 0x1fe770u: goto label_1fe770;
        case 0x1fe774u: goto label_1fe774;
        case 0x1fe778u: goto label_1fe778;
        case 0x1fe77cu: goto label_1fe77c;
        case 0x1fe780u: goto label_1fe780;
        case 0x1fe784u: goto label_1fe784;
        case 0x1fe788u: goto label_1fe788;
        case 0x1fe78cu: goto label_1fe78c;
        case 0x1fe790u: goto label_1fe790;
        case 0x1fe794u: goto label_1fe794;
        case 0x1fe798u: goto label_1fe798;
        case 0x1fe79cu: goto label_1fe79c;
        case 0x1fe7a0u: goto label_1fe7a0;
        case 0x1fe7a4u: goto label_1fe7a4;
        case 0x1fe7a8u: goto label_1fe7a8;
        case 0x1fe7acu: goto label_1fe7ac;
        case 0x1fe7b0u: goto label_1fe7b0;
        case 0x1fe7b4u: goto label_1fe7b4;
        case 0x1fe7b8u: goto label_1fe7b8;
        case 0x1fe7bcu: goto label_1fe7bc;
        case 0x1fe7c0u: goto label_1fe7c0;
        case 0x1fe7c4u: goto label_1fe7c4;
        case 0x1fe7c8u: goto label_1fe7c8;
        case 0x1fe7ccu: goto label_1fe7cc;
        case 0x1fe7d0u: goto label_1fe7d0;
        case 0x1fe7d4u: goto label_1fe7d4;
        default: return;
    }

label_1fe008:
    // 0x1fe008: 0xc054e74  jal         func_1539D0
label_1fe00c:
    if (ctx->pc == 0x1FE00Cu) {
        ctx->pc = 0x1FE00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE008u;
        // 0x1fe00c: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE010u;
        goto label_1fe010;
    }
    ctx->pc = 0x1FE008u;
    SET_GPR_U32(ctx, 31, 0x1FE010u);
    ctx->pc = 0x1FE00Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE008u;
    // 0x1fe00c: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1539D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1539D0u, 0x1FE008u, 0x1FE010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE010u;
label_1fe010:
    // 0x1fe010: 0x8f829060  lw          $v0, -0x6FA0($gp)
    ctx->pc = 0x1fe010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938720)));
label_1fe014:
    // 0x1fe014: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_1fe018:
    if (ctx->pc == 0x1FE018u) {
        ctx->pc = 0x1FE01Cu;
        goto label_1fe01c;
    }
    ctx->pc = 0x1FE014u;
    {
        const bool branch_taken_0x1fe014 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fe014) {
            ctx->pc = 0x1FE038u;
            goto label_1fe038;
        }
    }
    ctx->pc = 0x1FE01Cu;
label_1fe01c:
    // 0x1fe01c: 0x8f869064  lw          $a2, -0x6F9C($gp)
    ctx->pc = 0x1fe01cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938724)));
label_1fe020:
    // 0x1fe020: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x1fe020u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
label_1fe024:
    // 0x1fe024: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1fe024u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1fe028:
    // 0x1fe028: 0xc08f20e  jal         func_23C838
label_1fe02c:
    if (ctx->pc == 0x1FE02Cu) {
        ctx->pc = 0x1FE02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE028u;
        // 0x1fe02c: 0x24a5d550  addiu       $a1, $a1, -0x2AB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956368));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE030u;
        goto label_1fe030;
    }
    ctx->pc = 0x1FE028u;
    SET_GPR_U32(ctx, 31, 0x1FE030u);
    ctx->pc = 0x1FE02Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE028u;
    // 0x1fe02c: 0x24a5d550  addiu       $a1, $a1, -0x2AB0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C838u;
    { ctx->pc = 0x23c838; return; }
    ctx->pc = 0x1FE030u;
label_1fe030:
    // 0x1fe030: 0x10000003  b           . + 4 + (0x3 << 2)
label_1fe034:
    if (ctx->pc == 0x1FE034u) {
        ctx->pc = 0x1FE034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE030u;
        // 0x1fe034: 0x8f82907c  lw          $v0, -0x6F84($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938748)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE038u;
        goto label_1fe038;
    }
    ctx->pc = 0x1FE030u;
    {
        const bool branch_taken_0x1fe030 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE030u;
        // 0x1fe034: 0x8f82907c  lw          $v0, -0x6F84($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938748)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe030) {
            ctx->pc = 0x1FE040u;
            goto label_1fe040;
        }
    }
    ctx->pc = 0x1FE038u;
label_1fe038:
    // 0x1fe038: 0xa3a00070  sb          $zero, 0x70($sp)
    ctx->pc = 0x1fe038u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 112), (uint8_t)GPR_U32(ctx, 0));
label_1fe03c:
    // 0x1fe03c: 0x8f82907c  lw          $v0, -0x6F84($gp)
    ctx->pc = 0x1fe03cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938748)));
label_1fe040:
    // 0x1fe040: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_1fe044:
    if (ctx->pc == 0x1FE044u) {
        ctx->pc = 0x1FE044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE040u;
        // 0x1fe044: 0x26060140  addiu       $a2, $s0, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 320));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE048u;
        goto label_1fe048;
    }
    ctx->pc = 0x1FE040u;
    {
        const bool branch_taken_0x1fe040 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FE044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE040u;
        // 0x1fe044: 0x26060140  addiu       $a2, $s0, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 320));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe040) {
            ctx->pc = 0x1FE054u;
            goto label_1fe054;
        }
    }
    ctx->pc = 0x1FE048u;
label_1fe048:
    // 0x1fe048: 0x26060098  addiu       $a2, $s0, 0x98
    ctx->pc = 0x1fe048u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 152));
label_1fe04c:
    // 0x1fe04c: 0x10000002  b           . + 4 + (0x2 << 2)
label_1fe050:
    if (ctx->pc == 0x1FE050u) {
        ctx->pc = 0x1FE050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE04Cu;
        // 0x1fe050: 0x262700c8  addiu       $a3, $s1, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 200));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE054u;
        goto label_1fe054;
    }
    ctx->pc = 0x1FE04Cu;
    {
        const bool branch_taken_0x1fe04c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE04Cu;
        // 0x1fe050: 0x262700c8  addiu       $a3, $s1, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe04c) {
            ctx->pc = 0x1FE058u;
            goto label_1fe058;
        }
    }
    ctx->pc = 0x1FE054u;
label_1fe054:
    // 0x1fe054: 0x26270058  addiu       $a3, $s1, 0x58
    ctx->pc = 0x1fe054u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
label_1fe058:
    // 0x1fe058: 0x26444380  addiu       $a0, $s2, 0x4380
    ctx->pc = 0x1fe058u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 17280));
label_1fe05c:
    // 0x1fe05c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1fe05cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1fe060:
    // 0x1fe060: 0x3408fe00  ori         $t0, $zero, 0xFE00
    ctx->pc = 0x1fe060u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_1fe064:
    // 0x1fe064: 0x24090010  addiu       $t1, $zero, 0x10
    ctx->pc = 0x1fe064u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1fe068:
    // 0x1fe068: 0x240a0018  addiu       $t2, $zero, 0x18
    ctx->pc = 0x1fe068u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_1fe06c:
    // 0x1fe06c: 0xc0708ac  jal         func_1C22B0
label_1fe070:
    if (ctx->pc == 0x1FE070u) {
        ctx->pc = 0x1FE070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE06Cu;
        // 0x1fe070: 0x27ab0070  addiu       $t3, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE074u;
        goto label_1fe074;
    }
    ctx->pc = 0x1FE06Cu;
    SET_GPR_U32(ctx, 31, 0x1FE074u);
    ctx->pc = 0x1FE070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE06Cu;
    // 0x1fe070: 0x27ab0070  addiu       $t3, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C22B0u;
    { ctx->pc = 0x1c22b0; return; }
    ctx->pc = 0x1FE074u;
label_1fe074:
    // 0x1fe074: 0x8f849070  lw          $a0, -0x6F90($gp)
    ctx->pc = 0x1fe074u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938736)));
label_1fe078:
    // 0x1fe078: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1fe078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1fe07c:
    // 0x1fe07c: 0x14820005  bne         $a0, $v0, . + 4 + (0x5 << 2)
label_1fe080:
    if (ctx->pc == 0x1FE080u) {
        ctx->pc = 0x1FE084u;
        goto label_1fe084;
    }
    ctx->pc = 0x1FE07Cu;
    {
        const bool branch_taken_0x1fe07c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x1fe07c) {
            ctx->pc = 0x1FE094u;
            goto label_1fe094;
        }
    }
    ctx->pc = 0x1FE084u;
label_1fe084:
    // 0x1fe084: 0xc070d40  jal         func_1C3500
label_1fe088:
    if (ctx->pc == 0x1FE088u) {
        ctx->pc = 0x1FE088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE084u;
        // 0x1fe088: 0x8f849068  lw          $a0, -0x6F98($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938728)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE08Cu;
        goto label_1fe08c;
    }
    ctx->pc = 0x1FE084u;
    SET_GPR_U32(ctx, 31, 0x1FE08Cu);
    ctx->pc = 0x1FE088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE084u;
    // 0x1fe088: 0x8f849068  lw          $a0, -0x6F98($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938728)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C3500u;
    { ctx->pc = 0x1c3500; return; }
    ctx->pc = 0x1FE08Cu;
label_1fe08c:
    // 0x1fe08c: 0x10000004  b           . + 4 + (0x4 << 2)
label_1fe090:
    if (ctx->pc == 0x1FE090u) {
        ctx->pc = 0x1FE090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE08Cu;
        // 0x1fe090: 0x2602fff8  addiu       $v0, $s0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE094u;
        goto label_1fe094;
    }
    ctx->pc = 0x1FE08Cu;
    {
        const bool branch_taken_0x1fe08c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE08Cu;
        // 0x1fe090: 0x2602fff8  addiu       $v0, $s0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe08c) {
            ctx->pc = 0x1FE0A0u;
            goto label_1fe0a0;
        }
    }
    ctx->pc = 0x1FE094u;
label_1fe094:
    // 0x1fe094: 0xc070db0  jal         func_1C36C0
label_1fe098:
    if (ctx->pc == 0x1FE098u) {
        ctx->pc = 0x1FE098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE094u;
        // 0x1fe098: 0x8f85906c  lw          $a1, -0x6F94($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938732)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE09Cu;
        goto label_1fe09c;
    }
    ctx->pc = 0x1FE094u;
    SET_GPR_U32(ctx, 31, 0x1FE09Cu);
    ctx->pc = 0x1FE098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE094u;
    // 0x1fe098: 0x8f85906c  lw          $a1, -0x6F94($gp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938732)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C36C0u;
    { ctx->pc = 0x1c36c0; return; }
    ctx->pc = 0x1FE09Cu;
label_1fe09c:
    // 0x1fe09c: 0x2602fff8  addiu       $v0, $s0, -0x8
    ctx->pc = 0x1fe09cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
label_1fe0a0:
    // 0x1fe0a0: 0x2625fff0  addiu       $a1, $s1, -0x10
    ctx->pc = 0x1fe0a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967280));
label_1fe0a4:
    // 0x1fe0a4: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1fe0a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_1fe0a8:
    // 0x1fe0a8: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x1fe0a8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_1fe0ac:
    // 0x1fe0ac: 0x24420048  addiu       $v0, $v0, 0x48
    ctx->pc = 0x1fe0acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
label_1fe0b0:
    // 0x1fe0b0: 0x24636c00  addiu       $v1, $v1, 0x6C00
    ctx->pc = 0x1fe0b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27648));
label_1fe0b4:
    // 0x1fe0b4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1fe0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_1fe0b8:
    // 0x1fe0b8: 0xa64345e0  sh          $v1, 0x45E0($s2)
    ctx->pc = 0x1fe0b8u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 17888), (uint16_t)GPR_U32(ctx, 3));
label_1fe0bc:
    // 0x1fe0bc: 0x24847900  addiu       $a0, $a0, 0x7900
    ctx->pc = 0x1fe0bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30976));
label_1fe0c0:
    // 0x1fe0c0: 0x24436c00  addiu       $v1, $v0, 0x6C00
    ctx->pc = 0x1fe0c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 27648));
label_1fe0c4:
    // 0x1fe0c4: 0xa64445e2  sh          $a0, 0x45E2($s2)
    ctx->pc = 0x1fe0c4u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 17890), (uint16_t)GPR_U32(ctx, 4));
label_1fe0c8:
    // 0x1fe0c8: 0x24a20018  addiu       $v0, $a1, 0x18
    ctx->pc = 0x1fe0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 24));
label_1fe0cc:
    // 0x1fe0cc: 0x3404fe00  ori         $a0, $zero, 0xFE00
    ctx->pc = 0x1fe0ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_1fe0d0:
    // 0x1fe0d0: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1fe0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1fe0d4:
    // 0x1fe0d4: 0xae4445e4  sw          $a0, 0x45E4($s2)
    ctx->pc = 0x1fe0d4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 17892), GPR_U32(ctx, 4));
label_1fe0d8:
    // 0x1fe0d8: 0x24427900  addiu       $v0, $v0, 0x7900
    ctx->pc = 0x1fe0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
label_1fe0dc:
    // 0x1fe0dc: 0xa64345f0  sh          $v1, 0x45F0($s2)
    ctx->pc = 0x1fe0dcu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 17904), (uint16_t)GPR_U32(ctx, 3));
label_1fe0e0:
    // 0x1fe0e0: 0xa64245f2  sh          $v0, 0x45F2($s2)
    ctx->pc = 0x1fe0e0u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 17906), (uint16_t)GPR_U32(ctx, 2));
label_1fe0e4:
    // 0x1fe0e4: 0xae4445f4  sw          $a0, 0x45F4($s2)
    ctx->pc = 0x1fe0e4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 17908), GPR_U32(ctx, 4));
label_1fe0e8:
    // 0x1fe0e8: 0x8f829058  lw          $v0, -0x6FA8($gp)
    ctx->pc = 0x1fe0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938712)));
label_1fe0ec:
    // 0x1fe0ec: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
label_1fe0f0:
    if (ctx->pc == 0x1FE0F0u) {
        ctx->pc = 0x1FE0F4u;
        goto label_1fe0f4;
    }
    ctx->pc = 0x1FE0ECu;
    {
        const bool branch_taken_0x1fe0ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fe0ec) {
            ctx->pc = 0x1FE158u;
            goto label_1fe158;
        }
    }
    ctx->pc = 0x1FE0F4u;
label_1fe0f4:
    // 0x1fe0f4: 0x8f82905c  lw          $v0, -0x6FA4($gp)
    ctx->pc = 0x1fe0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938716)));
label_1fe0f8:
    // 0x1fe0f8: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
label_1fe0fc:
    if (ctx->pc == 0x1FE0FCu) {
        ctx->pc = 0x1FE0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE0F8u;
        // 0x1fe0fc: 0x3043003f  andi        $v1, $v0, 0x3F (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE100u;
        goto label_1fe100;
    }
    ctx->pc = 0x1FE0F8u;
    {
        const bool branch_taken_0x1fe0f8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1FE0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE0F8u;
        // 0x1fe0fc: 0x3043003f  andi        $v1, $v0, 0x3F (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe0f8) {
            ctx->pc = 0x1FE10Cu;
            goto label_1fe10c;
        }
    }
    ctx->pc = 0x1FE100u;
label_1fe100:
    // 0x1fe100: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_1fe104:
    if (ctx->pc == 0x1FE104u) {
        ctx->pc = 0x1FE104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE100u;
        // 0x1fe104: 0x28610020  slti        $at, $v1, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)32) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE108u;
        goto label_1fe108;
    }
    ctx->pc = 0x1FE100u;
    {
        const bool branch_taken_0x1fe100 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE100u;
        // 0x1fe104: 0x28610020  slti        $at, $v1, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)32) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe100) {
            ctx->pc = 0x1FE110u;
            goto label_1fe110;
        }
    }
    ctx->pc = 0x1FE108u;
label_1fe108:
    // 0x1fe108: 0x2463ffc0  addiu       $v1, $v1, -0x40
    ctx->pc = 0x1fe108u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967232));
label_1fe10c:
    // 0x1fe10c: 0x28610020  slti        $at, $v1, 0x20
    ctx->pc = 0x1fe10cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)32) ? 1 : 0);
label_1fe110:
    // 0x1fe110: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
label_1fe114:
    if (ctx->pc == 0x1FE114u) {
        ctx->pc = 0x1FE114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE110u;
        // 0x1fe114: 0x24020040  addiu       $v0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE118u;
        goto label_1fe118;
    }
    ctx->pc = 0x1FE110u;
    {
        const bool branch_taken_0x1fe110 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE110u;
        // 0x1fe114: 0x24020040  addiu       $v0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe110) {
            ctx->pc = 0x1FE134u;
            goto label_1fe134;
        }
    }
    ctx->pc = 0x1FE118u;
label_1fe118:
    // 0x1fe118: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x1fe118u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
label_1fe11c:
    // 0x1fe11c: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_1fe120:
    if (ctx->pc == 0x1FE120u) {
        ctx->pc = 0x1FE120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE11Cu;
        // 0x1fe120: 0x31143  sra         $v0, $v1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE124u;
        goto label_1fe124;
    }
    ctx->pc = 0x1FE11Cu;
    {
        const bool branch_taken_0x1fe11c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1FE120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE11Cu;
        // 0x1fe120: 0x31143  sra         $v0, $v1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe11c) {
            ctx->pc = 0x1FE12Cu;
            goto label_1fe12c;
        }
    }
    ctx->pc = 0x1FE124u;
label_1fe124:
    // 0x1fe124: 0x2462001f  addiu       $v0, $v1, 0x1F
    ctx->pc = 0x1fe124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 31));
label_1fe128:
    // 0x1fe128: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x1fe128u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
label_1fe12c:
    // 0x1fe12c: 0x10000008  b           . + 4 + (0x8 << 2)
label_1fe130:
    if (ctx->pc == 0x1FE130u) {
        ctx->pc = 0x1FE130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE12Cu;
        // 0x1fe130: 0x24420020  addiu       $v0, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE134u;
        goto label_1fe134;
    }
    ctx->pc = 0x1FE12Cu;
    {
        const bool branch_taken_0x1fe12c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE12Cu;
        // 0x1fe130: 0x24420020  addiu       $v0, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe12c) {
            ctx->pc = 0x1FE150u;
            goto label_1fe150;
        }
    }
    ctx->pc = 0x1FE134u;
label_1fe134:
    // 0x1fe134: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1fe134u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1fe138:
    // 0x1fe138: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x1fe138u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_1fe13c:
    // 0x1fe13c: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_1fe140:
    if (ctx->pc == 0x1FE140u) {
        ctx->pc = 0x1FE140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE13Cu;
        // 0x1fe140: 0x31143  sra         $v0, $v1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE144u;
        goto label_1fe144;
    }
    ctx->pc = 0x1FE13Cu;
    {
        const bool branch_taken_0x1fe13c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1FE140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE13Cu;
        // 0x1fe140: 0x31143  sra         $v0, $v1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe13c) {
            ctx->pc = 0x1FE14Cu;
            goto label_1fe14c;
        }
    }
    ctx->pc = 0x1FE144u;
label_1fe144:
    // 0x1fe144: 0x2462001f  addiu       $v0, $v1, 0x1F
    ctx->pc = 0x1fe144u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 31));
label_1fe148:
    // 0x1fe148: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x1fe148u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
label_1fe14c:
    // 0x1fe14c: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x1fe14cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
label_1fe150:
    // 0x1fe150: 0x10000002  b           . + 4 + (0x2 << 2)
label_1fe154:
    if (ctx->pc == 0x1FE154u) {
        ctx->pc = 0x1FE154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE150u;
        // 0x1fe154: 0xa24245d3  sb          $v0, 0x45D3($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 17875), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE158u;
        goto label_1fe158;
    }
    ctx->pc = 0x1FE150u;
    {
        const bool branch_taken_0x1fe150 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE150u;
        // 0x1fe154: 0xa24245d3  sb          $v0, 0x45D3($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 17875), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe150) {
            ctx->pc = 0x1FE15Cu;
            goto label_1fe15c;
        }
    }
    ctx->pc = 0x1FE158u;
label_1fe158:
    // 0x1fe158: 0xa24045d3  sb          $zero, 0x45D3($s2)
    ctx->pc = 0x1fe158u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 17875), (uint8_t)GPR_U32(ctx, 0));
label_1fe15c:
    // 0x1fe15c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1fe15cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1fe160:
    // 0x1fe160: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1fe160u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1fe164:
    // 0x1fe164: 0x24060460  addiu       $a2, $zero, 0x460
    ctx->pc = 0x1fe164u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1120));
label_1fe168:
    // 0x1fe168: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1fe168u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fe16c:
    // 0x1fe16c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1fe16cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fe170:
    // 0x1fe170: 0xc066c72  jal         func_19B1C8
label_1fe174:
    if (ctx->pc == 0x1FE174u) {
        ctx->pc = 0x1FE174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE170u;
        // 0x1fe174: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE178u;
        goto label_1fe178;
    }
    ctx->pc = 0x1FE170u;
    SET_GPR_U32(ctx, 31, 0x1FE178u);
    ctx->pc = 0x1FE174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE170u;
    // 0x1fe174: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x1FE170u, 0x1FE178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE178u;
label_1fe178:
    // 0x1fe178: 0x100000d7  b           . + 4 + (0xD7 << 2)
label_1fe17c:
    if (ctx->pc == 0x1FE17Cu) {
        ctx->pc = 0x1FE17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE178u;
        // 0x1fe17c: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE180u;
        goto label_1fe180;
    }
    ctx->pc = 0x1FE178u;
    {
        const bool branch_taken_0x1fe178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE178u;
        // 0x1fe17c: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe178) {
            ctx->pc = 0x1FE4D8u;
            goto label_1fe4d8;
        }
    }
    ctx->pc = 0x1FE180u;
label_1fe180:
    // 0x1fe180: 0x8f839080  lw          $v1, -0x6F80($gp)
    ctx->pc = 0x1fe180u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938752)));
label_1fe184:
    // 0x1fe184: 0x106000d3  beqz        $v1, . + 4 + (0xD3 << 2)
label_1fe188:
    if (ctx->pc == 0x1FE188u) {
        ctx->pc = 0x1FE188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE184u;
        // 0x1fe188: 0x3c017000  lui         $at, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE18Cu;
        goto label_1fe18c;
    }
    ctx->pc = 0x1FE184u;
    {
        const bool branch_taken_0x1fe184 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE184u;
        // 0x1fe188: 0x3c017000  lui         $at, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe184) {
            ctx->pc = 0x1FE4D4u;
            goto label_1fe4d4;
        }
    }
    ctx->pc = 0x1FE18Cu;
label_1fe18c:
    // 0x1fe18c: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x1fe18cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
label_1fe190:
    // 0x1fe190: 0x8c2c3ffc  lw          $t4, 0x3FFC($at)
    ctx->pc = 0x1fe190u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_1fe194:
    // 0x1fe194: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x1fe194u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_1fe198:
    // 0x1fe198: 0x8f859078  lw          $a1, -0x6F88($gp)
    ctx->pc = 0x1fe198u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938744)));
label_1fe19c:
    // 0x1fe19c: 0x24841e00  addiu       $a0, $a0, 0x1E00
    ctx->pc = 0x1fe19cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7680));
label_1fe1a0:
    // 0x1fe1a0: 0x8f869074  lw          $a2, -0x6F8C($gp)
    ctx->pc = 0x1fe1a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938740)));
label_1fe1a4:
    // 0x1fe1a4: 0x2442bee0  addiu       $v0, $v0, -0x4120
    ctx->pc = 0x1fe1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950624));
label_1fe1a8:
    // 0x1fe1a8: 0x240700d0  addiu       $a3, $zero, 0xD0
    ctx->pc = 0x1fe1a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
label_1fe1ac:
    // 0x1fe1ac: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1fe1acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_1fe1b0:
    // 0x1fe1b0: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x1fe1b0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1fe1b4:
    // 0x1fe1b4: 0x240a0050  addiu       $t2, $zero, 0x50
    ctx->pc = 0x1fe1b4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_1fe1b8:
    // 0x1fe1b8: 0xc5940  sll         $t3, $t4, 5
    ctx->pc = 0x1fe1b8u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 12), 5));
label_1fe1bc:
    // 0x1fe1bc: 0xc18c0  sll         $v1, $t4, 3
    ctx->pc = 0x1fe1bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 12), 3));
label_1fe1c0:
    // 0x1fe1c0: 0x8ba821  addu        $s5, $a0, $t3
    ctx->pc = 0x1fe1c0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
label_1fe1c4:
    // 0x1fe1c4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1fe1c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1fe1c8:
    // 0x1fe1c8: 0x6c2023  subu        $a0, $v1, $t4
    ctx->pc = 0x1fe1c8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
label_1fe1cc:
    // 0x1fe1cc: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1fe1ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1fe1d0:
    // 0x1fe1d0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1fe1d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1fe1d4:
    // 0x1fe1d4: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1fe1d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1fe1d8:
    // 0x1fe1d8: 0x31a40  sll         $v1, $v1, 9
    ctx->pc = 0x1fe1d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 9));
label_1fe1dc:
    // 0x1fe1dc: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x1fe1dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1fe1e0:
    // 0x1fe1e0: 0xc07c17c  jal         func_1F05F0
label_1fe1e4:
    if (ctx->pc == 0x1FE1E4u) {
        ctx->pc = 0x1FE1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE1E0u;
        // 0x1fe1e4: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE1E8u;
        goto label_1fe1e8;
    }
    ctx->pc = 0x1FE1E0u;
    SET_GPR_U32(ctx, 31, 0x1FE1E8u);
    ctx->pc = 0x1FE1E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE1E0u;
    // 0x1fe1e4: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F05F0u;
    { ctx->pc = 0x1f05f0; return; }
    ctx->pc = 0x1FE1E8u;
label_1fe1e8:
    // 0x1fe1e8: 0x26220018  addiu       $v0, $s1, 0x18
    ctx->pc = 0x1fe1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
label_1fe1ec:
    // 0x1fe1ec: 0x26450008  addiu       $a1, $s2, 0x8
    ctx->pc = 0x1fe1ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
label_1fe1f0:
    // 0x1fe1f0: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1fe1f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_1fe1f4:
    // 0x1fe1f4: 0x3407fe00  ori         $a3, $zero, 0xFE00
    ctx->pc = 0x1fe1f4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_1fe1f8:
    // 0x1fe1f8: 0x24636c00  addiu       $v1, $v1, 0x6C00
    ctx->pc = 0x1fe1f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27648));
label_1fe1fc:
    // 0x1fe1fc: 0x244200a0  addiu       $v0, $v0, 0xA0
    ctx->pc = 0x1fe1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
label_1fe200:
    // 0x1fe200: 0xa6030400  sh          $v1, 0x400($s0)
    ctx->pc = 0x1fe200u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1024), (uint16_t)GPR_U32(ctx, 3));
label_1fe204:
    // 0x1fe204: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1fe204u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_1fe208:
    // 0x1fe208: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x1fe208u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_1fe20c:
    // 0x1fe20c: 0x24446c00  addiu       $a0, $v0, 0x6C00
    ctx->pc = 0x1fe20cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 27648));
label_1fe210:
    // 0x1fe210: 0x24637900  addiu       $v1, $v1, 0x7900
    ctx->pc = 0x1fe210u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30976));
label_1fe214:
    // 0x1fe214: 0x24a20090  addiu       $v0, $a1, 0x90
    ctx->pc = 0x1fe214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 144));
label_1fe218:
    // 0x1fe218: 0xa6030402  sh          $v1, 0x402($s0)
    ctx->pc = 0x1fe218u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1026), (uint16_t)GPR_U32(ctx, 3));
label_1fe21c:
    // 0x1fe21c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1fe21cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1fe220:
    // 0x1fe220: 0xae070404  sw          $a3, 0x404($s0)
    ctx->pc = 0x1fe220u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1028), GPR_U32(ctx, 7));
label_1fe224:
    // 0x1fe224: 0x24437900  addiu       $v1, $v0, 0x7900
    ctx->pc = 0x1fe224u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
label_1fe228:
    // 0x1fe228: 0xa6040410  sh          $a0, 0x410($s0)
    ctx->pc = 0x1fe228u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1040), (uint16_t)GPR_U32(ctx, 4));
label_1fe22c:
    // 0x1fe22c: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1fe22cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_1fe230:
    // 0x1fe230: 0xa6030412  sh          $v1, 0x412($s0)
    ctx->pc = 0x1fe230u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1042), (uint16_t)GPR_U32(ctx, 3));
label_1fe234:
    // 0x1fe234: 0x24423020  addiu       $v0, $v0, 0x3020
    ctx->pc = 0x1fe234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12320));
label_1fe238:
    // 0x1fe238: 0xae070414  sw          $a3, 0x414($s0)
    ctx->pc = 0x1fe238u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1044), GPR_U32(ctx, 7));
label_1fe23c:
    // 0x1fe23c: 0x240500c0  addiu       $a1, $zero, 0xC0
    ctx->pc = 0x1fe23cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
label_1fe240:
    // 0x1fe240: 0x8f839068  lw          $v1, -0x6F98($gp)
    ctx->pc = 0x1fe240u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938728)));
label_1fe244:
    // 0x1fe244: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x1fe244u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1fe248:
    // 0x1fe248: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1fe248u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1fe24c:
    // 0x1fe24c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1fe24cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1fe250:
    // 0x1fe250: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1fe250u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1fe254:
    // 0x1fe254: 0xc055148  jal         func_154520
label_1fe258:
    if (ctx->pc == 0x1FE258u) {
        ctx->pc = 0x1FE258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE254u;
        // 0x1fe258: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE25Cu;
        goto label_1fe25c;
    }
    ctx->pc = 0x1FE254u;
    SET_GPR_U32(ctx, 31, 0x1FE25Cu);
    ctx->pc = 0x1FE258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE254u;
    // 0x1fe258: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154520u, 0x1FE254u, 0x1FE25Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE25Cu;
label_1fe25c:
    // 0x1fe25c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_1fe260:
    if (ctx->pc == 0x1FE260u) {
        ctx->pc = 0x1FE260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE25Cu;
        // 0x1fe260: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE264u;
        goto label_1fe264;
    }
    ctx->pc = 0x1FE25Cu;
    {
        const bool branch_taken_0x1fe25c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE25Cu;
        // 0x1fe260: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe25c) {
            ctx->pc = 0x1FE268u;
            goto label_1fe268;
        }
    }
    ctx->pc = 0x1FE264u;
label_1fe264:
    // 0x1fe264: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x1fe264u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fe268:
    // 0x1fe268: 0x24070018  addiu       $a3, $zero, 0x18
    ctx->pc = 0x1fe268u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_1fe26c:
    // 0x1fe26c: 0x2628002c  addiu       $t0, $s1, 0x2C
    ctx->pc = 0x1fe26cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 44));
label_1fe270:
    // 0x1fe270: 0x264900a8  addiu       $t1, $s2, 0xA8
    ctx->pc = 0x1fe270u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 18), 168));
label_1fe274:
    // 0x1fe274: 0xf3280a  movz        $a1, $a3, $s3
    ctx->pc = 0x1fe274u;
    if (GPR_U64(ctx, 19) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 7));
label_1fe278:
    // 0x1fe278: 0x340afe00  ori         $t2, $zero, 0xFE00
    ctx->pc = 0x1fe278u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_1fe27c:
    // 0x1fe27c: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x1fe27cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1fe280:
    // 0x1fe280: 0xc054e5c  jal         func_153970
label_1fe284:
    if (ctx->pc == 0x1FE284u) {
        ctx->pc = 0x1FE284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE280u;
        // 0x1fe284: 0x240600c0  addiu       $a2, $zero, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE288u;
        goto label_1fe288;
    }
    ctx->pc = 0x1FE280u;
    SET_GPR_U32(ctx, 31, 0x1FE288u);
    ctx->pc = 0x1FE284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE280u;
    // 0x1fe284: 0x240600c0  addiu       $a2, $zero, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x153970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153970u, 0x1FE280u, 0x1FE288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE288u;
label_1fe288:
    // 0x1fe288: 0x8f839060  lw          $v1, -0x6FA0($gp)
    ctx->pc = 0x1fe288u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938720)));
label_1fe28c:
    // 0x1fe28c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1fe28cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1fe290:
    // 0x1fe290: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1fe290u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fe294:
    // 0x1fe294: 0xc054e70  jal         func_1539C0
label_1fe298:
    if (ctx->pc == 0x1FE298u) {
        ctx->pc = 0x1FE298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE294u;
        // 0x1fe298: 0x43200b  movn        $a0, $v0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE29Cu;
        goto label_1fe29c;
    }
    ctx->pc = 0x1FE294u;
    SET_GPR_U32(ctx, 31, 0x1FE29Cu);
    ctx->pc = 0x1FE298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE294u;
    // 0x1fe298: 0x43200b  movn        $a0, $v0, $v1 (Delay Slot)
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1539C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1539C0u, 0x1FE294u, 0x1FE29Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE29Cu;
label_1fe29c:
    // 0x1fe29c: 0x8f839068  lw          $v1, -0x6F98($gp)
    ctx->pc = 0x1fe29cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938728)));
label_1fe2a0:
    // 0x1fe2a0: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1fe2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_1fe2a4:
    // 0x1fe2a4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1fe2a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fe2a8:
    // 0x1fe2a8: 0x24423020  addiu       $v0, $v0, 0x3020
    ctx->pc = 0x1fe2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12320));
label_1fe2ac:
    // 0x1fe2ac: 0x26040420  addiu       $a0, $s0, 0x420
    ctx->pc = 0x1fe2acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1056));
label_1fe2b0:
    // 0x1fe2b0: 0x24060012  addiu       $a2, $zero, 0x12
    ctx->pc = 0x1fe2b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_1fe2b4:
    // 0x1fe2b4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1fe2b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1fe2b8:
    // 0x1fe2b8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1fe2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1fe2bc:
    // 0x1fe2bc: 0x8c480000  lw          $t0, 0x0($v0)
    ctx->pc = 0x1fe2bcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1fe2c0:
    // 0x1fe2c0: 0xc054e74  jal         func_1539D0
label_1fe2c4:
    if (ctx->pc == 0x1FE2C4u) {
        ctx->pc = 0x1FE2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE2C0u;
        // 0x1fe2c4: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE2C8u;
        goto label_1fe2c8;
    }
    ctx->pc = 0x1FE2C0u;
    SET_GPR_U32(ctx, 31, 0x1FE2C8u);
    ctx->pc = 0x1FE2C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE2C0u;
    // 0x1fe2c4: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1539D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1539D0u, 0x1FE2C0u, 0x1FE2C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE2C8u;
label_1fe2c8:
    // 0x1fe2c8: 0x8f829060  lw          $v0, -0x6FA0($gp)
    ctx->pc = 0x1fe2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938720)));
label_1fe2cc:
    // 0x1fe2cc: 0x26330008  addiu       $s3, $s1, 0x8
    ctx->pc = 0x1fe2ccu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
label_1fe2d0:
    // 0x1fe2d0: 0x14400020  bnez        $v0, . + 4 + (0x20 << 2)
label_1fe2d4:
    if (ctx->pc == 0x1FE2D4u) {
        ctx->pc = 0x1FE2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE2D0u;
        // 0x1fe2d4: 0x265400c8  addiu       $s4, $s2, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 200));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE2D8u;
        goto label_1fe2d8;
    }
    ctx->pc = 0x1FE2D0u;
    {
        const bool branch_taken_0x1fe2d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FE2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE2D0u;
        // 0x1fe2d4: 0x265400c8  addiu       $s4, $s2, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe2d0) {
            ctx->pc = 0x1FE354u;
            goto label_1fe354;
        }
    }
    ctx->pc = 0x1FE2D8u;
label_1fe2d8:
    // 0x1fe2d8: 0x8f839068  lw          $v1, -0x6F98($gp)
    ctx->pc = 0x1fe2d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938728)));
label_1fe2dc:
    // 0x1fe2dc: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1fe2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_1fe2e0:
    // 0x1fe2e0: 0x24423050  addiu       $v0, $v0, 0x3050
    ctx->pc = 0x1fe2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12368));
label_1fe2e4:
    // 0x1fe2e4: 0x24050078  addiu       $a1, $zero, 0x78
    ctx->pc = 0x1fe2e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_1fe2e8:
    // 0x1fe2e8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1fe2e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1fe2ec:
    // 0x1fe2ec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1fe2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1fe2f0:
    // 0x1fe2f0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1fe2f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1fe2f4:
    // 0x1fe2f4: 0xc055148  jal         func_154520
label_1fe2f8:
    if (ctx->pc == 0x1FE2F8u) {
        ctx->pc = 0x1FE2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE2F4u;
        // 0x1fe2f8: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE2FCu;
        goto label_1fe2fc;
    }
    ctx->pc = 0x1FE2F4u;
    SET_GPR_U32(ctx, 31, 0x1FE2FCu);
    ctx->pc = 0x1FE2F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE2F4u;
    // 0x1fe2f8: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154520u, 0x1FE2F4u, 0x1FE2FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE2FCu;
label_1fe2fc:
    // 0x1fe2fc: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x1fe2fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_1fe300:
    // 0x1fe300: 0x24070018  addiu       $a3, $zero, 0x18
    ctx->pc = 0x1fe300u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_1fe304:
    // 0x1fe304: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x1fe304u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1fe308:
    // 0x1fe308: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x1fe308u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1fe30c:
    // 0x1fe30c: 0xe2280a  movz        $a1, $a3, $v0
    ctx->pc = 0x1fe30cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 7));
label_1fe310:
    // 0x1fe310: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x1fe310u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1fe314:
    // 0x1fe314: 0x24060078  addiu       $a2, $zero, 0x78
    ctx->pc = 0x1fe314u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_1fe318:
    // 0x1fe318: 0xc054e5c  jal         func_153970
label_1fe31c:
    if (ctx->pc == 0x1FE31Cu) {
        ctx->pc = 0x1FE31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE318u;
        // 0x1fe31c: 0x340afe00  ori         $t2, $zero, 0xFE00 (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE320u;
        goto label_1fe320;
    }
    ctx->pc = 0x1FE318u;
    SET_GPR_U32(ctx, 31, 0x1FE320u);
    ctx->pc = 0x1FE31Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE318u;
    // 0x1fe31c: 0x340afe00  ori         $t2, $zero, 0xFE00 (Delay Slot)
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
    ctx->in_delay_slot = false;
    ctx->pc = 0x153970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153970u, 0x1FE318u, 0x1FE320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE320u;
label_1fe320:
    // 0x1fe320: 0x8f839068  lw          $v1, -0x6F98($gp)
    ctx->pc = 0x1fe320u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938728)));
label_1fe324:
    // 0x1fe324: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1fe324u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_1fe328:
    // 0x1fe328: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1fe328u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fe32c:
    // 0x1fe32c: 0x24423050  addiu       $v0, $v0, 0x3050
    ctx->pc = 0x1fe32cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12368));
label_1fe330:
    // 0x1fe330: 0x260412c0  addiu       $a0, $s0, 0x12C0
    ctx->pc = 0x1fe330u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4800));
label_1fe334:
    // 0x1fe334: 0x2406003c  addiu       $a2, $zero, 0x3C
    ctx->pc = 0x1fe334u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_1fe338:
    // 0x1fe338: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1fe338u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1fe33c:
    // 0x1fe33c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1fe33cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1fe340:
    // 0x1fe340: 0x8c480000  lw          $t0, 0x0($v0)
    ctx->pc = 0x1fe340u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1fe344:
    // 0x1fe344: 0xc054e74  jal         func_1539D0
label_1fe348:
    if (ctx->pc == 0x1FE348u) {
        ctx->pc = 0x1FE348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE344u;
        // 0x1fe348: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE34Cu;
        goto label_1fe34c;
    }
    ctx->pc = 0x1FE344u;
    SET_GPR_U32(ctx, 31, 0x1FE34Cu);
    ctx->pc = 0x1FE348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE344u;
    // 0x1fe348: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1539D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1539D0u, 0x1FE344u, 0x1FE34Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE34Cu;
label_1fe34c:
    // 0x1fe34c: 0x10000015  b           . + 4 + (0x15 << 2)
label_1fe350:
    if (ctx->pc == 0x1FE350u) {
        ctx->pc = 0x1FE350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE34Cu;
        // 0x1fe350: 0x8f829060  lw          $v0, -0x6FA0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938720)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE354u;
        goto label_1fe354;
    }
    ctx->pc = 0x1FE34Cu;
    {
        const bool branch_taken_0x1fe34c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE34Cu;
        // 0x1fe350: 0x8f829060  lw          $v0, -0x6FA0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938720)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe34c) {
            ctx->pc = 0x1FE3A4u;
            goto label_1fe3a4;
        }
    }
    ctx->pc = 0x1FE354u;
label_1fe354:
    // 0x1fe354: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x1fe354u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1fe358:
    // 0x1fe358: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x1fe358u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1fe35c:
    // 0x1fe35c: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x1fe35cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_1fe360:
    // 0x1fe360: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x1fe360u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_1fe364:
    // 0x1fe364: 0x240600cc  addiu       $a2, $zero, 0xCC
    ctx->pc = 0x1fe364u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 204));
label_1fe368:
    // 0x1fe368: 0x24070036  addiu       $a3, $zero, 0x36
    ctx->pc = 0x1fe368u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
label_1fe36c:
    // 0x1fe36c: 0xc054e5c  jal         func_153970
label_1fe370:
    if (ctx->pc == 0x1FE370u) {
        ctx->pc = 0x1FE370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE36Cu;
        // 0x1fe370: 0x340afe00  ori         $t2, $zero, 0xFE00 (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE374u;
        goto label_1fe374;
    }
    ctx->pc = 0x1FE36Cu;
    SET_GPR_U32(ctx, 31, 0x1FE374u);
    ctx->pc = 0x1FE370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE36Cu;
    // 0x1fe370: 0x340afe00  ori         $t2, $zero, 0xFE00 (Delay Slot)
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
    ctx->in_delay_slot = false;
    ctx->pc = 0x153970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153970u, 0x1FE36Cu, 0x1FE374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE374u;
label_1fe374:
    // 0x1fe374: 0x8f839068  lw          $v1, -0x6F98($gp)
    ctx->pc = 0x1fe374u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938728)));
label_1fe378:
    // 0x1fe378: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1fe378u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_1fe37c:
    // 0x1fe37c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1fe37cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fe380:
    // 0x1fe380: 0x24423050  addiu       $v0, $v0, 0x3050
    ctx->pc = 0x1fe380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12368));
label_1fe384:
    // 0x1fe384: 0x260412c0  addiu       $a0, $s0, 0x12C0
    ctx->pc = 0x1fe384u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4800));
label_1fe388:
    // 0x1fe388: 0x2406003c  addiu       $a2, $zero, 0x3C
    ctx->pc = 0x1fe388u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_1fe38c:
    // 0x1fe38c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1fe38cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1fe390:
    // 0x1fe390: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1fe390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1fe394:
    // 0x1fe394: 0x8c480000  lw          $t0, 0x0($v0)
    ctx->pc = 0x1fe394u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1fe398:
    // 0x1fe398: 0xc054e74  jal         func_1539D0
label_1fe39c:
    if (ctx->pc == 0x1FE39Cu) {
        ctx->pc = 0x1FE39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE398u;
        // 0x1fe39c: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE3A0u;
        goto label_1fe3a0;
    }
    ctx->pc = 0x1FE398u;
    SET_GPR_U32(ctx, 31, 0x1FE3A0u);
    ctx->pc = 0x1FE39Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE398u;
    // 0x1fe39c: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1539D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1539D0u, 0x1FE398u, 0x1FE3A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE3A0u;
label_1fe3a0:
    // 0x1fe3a0: 0x8f829060  lw          $v0, -0x6FA0($gp)
    ctx->pc = 0x1fe3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938720)));
label_1fe3a4:
    // 0x1fe3a4: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_1fe3a8:
    if (ctx->pc == 0x1FE3A8u) {
        ctx->pc = 0x1FE3ACu;
        goto label_1fe3ac;
    }
    ctx->pc = 0x1FE3A4u;
    {
        const bool branch_taken_0x1fe3a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fe3a4) {
            ctx->pc = 0x1FE3C8u;
            goto label_1fe3c8;
        }
    }
    ctx->pc = 0x1FE3ACu;
label_1fe3ac:
    // 0x1fe3ac: 0x8f869064  lw          $a2, -0x6F9C($gp)
    ctx->pc = 0x1fe3acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938724)));
label_1fe3b0:
    // 0x1fe3b0: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x1fe3b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
label_1fe3b4:
    // 0x1fe3b4: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1fe3b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1fe3b8:
    // 0x1fe3b8: 0xc08f20e  jal         func_23C838
label_1fe3bc:
    if (ctx->pc == 0x1FE3BCu) {
        ctx->pc = 0x1FE3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE3B8u;
        // 0x1fe3bc: 0x24a5d550  addiu       $a1, $a1, -0x2AB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956368));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE3C0u;
        goto label_1fe3c0;
    }
    ctx->pc = 0x1FE3B8u;
    SET_GPR_U32(ctx, 31, 0x1FE3C0u);
    ctx->pc = 0x1FE3BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE3B8u;
    // 0x1fe3bc: 0x24a5d550  addiu       $a1, $a1, -0x2AB0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C838u;
    { ctx->pc = 0x23c838; return; }
    ctx->pc = 0x1FE3C0u;
label_1fe3c0:
    // 0x1fe3c0: 0x10000003  b           . + 4 + (0x3 << 2)
label_1fe3c4:
    if (ctx->pc == 0x1FE3C4u) {
        ctx->pc = 0x1FE3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE3C0u;
        // 0x1fe3c4: 0x26260098  addiu       $a2, $s1, 0x98 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 152));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE3C8u;
        goto label_1fe3c8;
    }
    ctx->pc = 0x1FE3C0u;
    {
        const bool branch_taken_0x1fe3c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE3C0u;
        // 0x1fe3c4: 0x26260098  addiu       $a2, $s1, 0x98 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 152));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe3c0) {
            ctx->pc = 0x1FE3D0u;
            goto label_1fe3d0;
        }
    }
    ctx->pc = 0x1FE3C8u;
label_1fe3c8:
    // 0x1fe3c8: 0xa3a00070  sb          $zero, 0x70($sp)
    ctx->pc = 0x1fe3c8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 112), (uint8_t)GPR_U32(ctx, 0));
label_1fe3cc:
    // 0x1fe3cc: 0x26260098  addiu       $a2, $s1, 0x98
    ctx->pc = 0x1fe3ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 152));
label_1fe3d0:
    // 0x1fe3d0: 0x264700c8  addiu       $a3, $s2, 0xC8
    ctx->pc = 0x1fe3d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 200));
label_1fe3d4:
    // 0x1fe3d4: 0x26044380  addiu       $a0, $s0, 0x4380
    ctx->pc = 0x1fe3d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 17280));
label_1fe3d8:
    // 0x1fe3d8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1fe3d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1fe3dc:
    // 0x1fe3dc: 0x3408fe00  ori         $t0, $zero, 0xFE00
    ctx->pc = 0x1fe3dcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_1fe3e0:
    // 0x1fe3e0: 0x24090010  addiu       $t1, $zero, 0x10
    ctx->pc = 0x1fe3e0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1fe3e4:
    // 0x1fe3e4: 0x240a0018  addiu       $t2, $zero, 0x18
    ctx->pc = 0x1fe3e4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_1fe3e8:
    // 0x1fe3e8: 0xc0708ac  jal         func_1C22B0
label_1fe3ec:
    if (ctx->pc == 0x1FE3ECu) {
        ctx->pc = 0x1FE3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE3E8u;
        // 0x1fe3ec: 0x27ab0070  addiu       $t3, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE3F0u;
        goto label_1fe3f0;
    }
    ctx->pc = 0x1FE3E8u;
    SET_GPR_U32(ctx, 31, 0x1FE3F0u);
    ctx->pc = 0x1FE3ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE3E8u;
    // 0x1fe3ec: 0x27ab0070  addiu       $t3, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C22B0u;
    { ctx->pc = 0x1c22b0; return; }
    ctx->pc = 0x1FE3F0u;
label_1fe3f0:
    // 0x1fe3f0: 0xc070ae4  jal         func_1C2B90
label_1fe3f4:
    if (ctx->pc == 0x1FE3F4u) {
        ctx->pc = 0x1FE3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE3F0u;
        // 0x1fe3f4: 0x8f849068  lw          $a0, -0x6F98($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938728)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE3F8u;
        goto label_1fe3f8;
    }
    ctx->pc = 0x1FE3F0u;
    SET_GPR_U32(ctx, 31, 0x1FE3F8u);
    ctx->pc = 0x1FE3F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE3F0u;
    // 0x1fe3f4: 0x8f849068  lw          $a0, -0x6F98($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938728)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2B90u;
    { ctx->pc = 0x1c2b90; return; }
    ctx->pc = 0x1FE3F8u;
label_1fe3f8:
    // 0x1fe3f8: 0x2622fff8  addiu       $v0, $s1, -0x8
    ctx->pc = 0x1fe3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967288));
label_1fe3fc:
    // 0x1fe3fc: 0x2645fff0  addiu       $a1, $s2, -0x10
    ctx->pc = 0x1fe3fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967280));
label_1fe400:
    // 0x1fe400: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1fe400u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_1fe404:
    // 0x1fe404: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x1fe404u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_1fe408:
    // 0x1fe408: 0x24420048  addiu       $v0, $v0, 0x48
    ctx->pc = 0x1fe408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
label_1fe40c:
    // 0x1fe40c: 0x24636c00  addiu       $v1, $v1, 0x6C00
    ctx->pc = 0x1fe40cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27648));
label_1fe410:
    // 0x1fe410: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1fe410u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_1fe414:
    // 0x1fe414: 0xa60345e0  sh          $v1, 0x45E0($s0)
    ctx->pc = 0x1fe414u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 17888), (uint16_t)GPR_U32(ctx, 3));
label_1fe418:
    // 0x1fe418: 0x24847900  addiu       $a0, $a0, 0x7900
    ctx->pc = 0x1fe418u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30976));
label_1fe41c:
    // 0x1fe41c: 0x24436c00  addiu       $v1, $v0, 0x6C00
    ctx->pc = 0x1fe41cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 27648));
label_1fe420:
    // 0x1fe420: 0xa60445e2  sh          $a0, 0x45E2($s0)
    ctx->pc = 0x1fe420u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 17890), (uint16_t)GPR_U32(ctx, 4));
label_1fe424:
    // 0x1fe424: 0x24a20018  addiu       $v0, $a1, 0x18
    ctx->pc = 0x1fe424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 24));
label_1fe428:
    // 0x1fe428: 0x3404fe00  ori         $a0, $zero, 0xFE00
    ctx->pc = 0x1fe428u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_1fe42c:
    // 0x1fe42c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1fe42cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1fe430:
    // 0x1fe430: 0xae0445e4  sw          $a0, 0x45E4($s0)
    ctx->pc = 0x1fe430u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 17892), GPR_U32(ctx, 4));
label_1fe434:
    // 0x1fe434: 0x24427900  addiu       $v0, $v0, 0x7900
    ctx->pc = 0x1fe434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
label_1fe438:
    // 0x1fe438: 0xa60345f0  sh          $v1, 0x45F0($s0)
    ctx->pc = 0x1fe438u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 17904), (uint16_t)GPR_U32(ctx, 3));
label_1fe43c:
    // 0x1fe43c: 0xa60245f2  sh          $v0, 0x45F2($s0)
    ctx->pc = 0x1fe43cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 17906), (uint16_t)GPR_U32(ctx, 2));
label_1fe440:
    // 0x1fe440: 0xae0445f4  sw          $a0, 0x45F4($s0)
    ctx->pc = 0x1fe440u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 17908), GPR_U32(ctx, 4));
label_1fe444:
    // 0x1fe444: 0x8f829058  lw          $v0, -0x6FA8($gp)
    ctx->pc = 0x1fe444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938712)));
label_1fe448:
    // 0x1fe448: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
label_1fe44c:
    if (ctx->pc == 0x1FE44Cu) {
        ctx->pc = 0x1FE450u;
        goto label_1fe450;
    }
    ctx->pc = 0x1FE448u;
    {
        const bool branch_taken_0x1fe448 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fe448) {
            ctx->pc = 0x1FE4B4u;
            goto label_1fe4b4;
        }
    }
    ctx->pc = 0x1FE450u;
label_1fe450:
    // 0x1fe450: 0x8f82905c  lw          $v0, -0x6FA4($gp)
    ctx->pc = 0x1fe450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938716)));
label_1fe454:
    // 0x1fe454: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
label_1fe458:
    if (ctx->pc == 0x1FE458u) {
        ctx->pc = 0x1FE458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE454u;
        // 0x1fe458: 0x3043003f  andi        $v1, $v0, 0x3F (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE45Cu;
        goto label_1fe45c;
    }
    ctx->pc = 0x1FE454u;
    {
        const bool branch_taken_0x1fe454 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1FE458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE454u;
        // 0x1fe458: 0x3043003f  andi        $v1, $v0, 0x3F (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe454) {
            ctx->pc = 0x1FE468u;
            goto label_1fe468;
        }
    }
    ctx->pc = 0x1FE45Cu;
label_1fe45c:
    // 0x1fe45c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_1fe460:
    if (ctx->pc == 0x1FE460u) {
        ctx->pc = 0x1FE460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE45Cu;
        // 0x1fe460: 0x28610020  slti        $at, $v1, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)32) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE464u;
        goto label_1fe464;
    }
    ctx->pc = 0x1FE45Cu;
    {
        const bool branch_taken_0x1fe45c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE45Cu;
        // 0x1fe460: 0x28610020  slti        $at, $v1, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)32) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe45c) {
            ctx->pc = 0x1FE46Cu;
            goto label_1fe46c;
        }
    }
    ctx->pc = 0x1FE464u;
label_1fe464:
    // 0x1fe464: 0x2463ffc0  addiu       $v1, $v1, -0x40
    ctx->pc = 0x1fe464u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967232));
label_1fe468:
    // 0x1fe468: 0x28610020  slti        $at, $v1, 0x20
    ctx->pc = 0x1fe468u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)32) ? 1 : 0);
label_1fe46c:
    // 0x1fe46c: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
label_1fe470:
    if (ctx->pc == 0x1FE470u) {
        ctx->pc = 0x1FE470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE46Cu;
        // 0x1fe470: 0x24020040  addiu       $v0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE474u;
        goto label_1fe474;
    }
    ctx->pc = 0x1FE46Cu;
    {
        const bool branch_taken_0x1fe46c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE46Cu;
        // 0x1fe470: 0x24020040  addiu       $v0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe46c) {
            ctx->pc = 0x1FE490u;
            goto label_1fe490;
        }
    }
    ctx->pc = 0x1FE474u;
label_1fe474:
    // 0x1fe474: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x1fe474u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
label_1fe478:
    // 0x1fe478: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_1fe47c:
    if (ctx->pc == 0x1FE47Cu) {
        ctx->pc = 0x1FE47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE478u;
        // 0x1fe47c: 0x31143  sra         $v0, $v1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE480u;
        goto label_1fe480;
    }
    ctx->pc = 0x1FE478u;
    {
        const bool branch_taken_0x1fe478 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1FE47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE478u;
        // 0x1fe47c: 0x31143  sra         $v0, $v1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe478) {
            ctx->pc = 0x1FE488u;
            goto label_1fe488;
        }
    }
    ctx->pc = 0x1FE480u;
label_1fe480:
    // 0x1fe480: 0x2462001f  addiu       $v0, $v1, 0x1F
    ctx->pc = 0x1fe480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 31));
label_1fe484:
    // 0x1fe484: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x1fe484u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
label_1fe488:
    // 0x1fe488: 0x10000008  b           . + 4 + (0x8 << 2)
label_1fe48c:
    if (ctx->pc == 0x1FE48Cu) {
        ctx->pc = 0x1FE48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE488u;
        // 0x1fe48c: 0x24420020  addiu       $v0, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE490u;
        goto label_1fe490;
    }
    ctx->pc = 0x1FE488u;
    {
        const bool branch_taken_0x1fe488 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE488u;
        // 0x1fe48c: 0x24420020  addiu       $v0, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe488) {
            ctx->pc = 0x1FE4ACu;
            goto label_1fe4ac;
        }
    }
    ctx->pc = 0x1FE490u;
label_1fe490:
    // 0x1fe490: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1fe490u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1fe494:
    // 0x1fe494: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x1fe494u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_1fe498:
    // 0x1fe498: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_1fe49c:
    if (ctx->pc == 0x1FE49Cu) {
        ctx->pc = 0x1FE49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE498u;
        // 0x1fe49c: 0x31143  sra         $v0, $v1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE4A0u;
        goto label_1fe4a0;
    }
    ctx->pc = 0x1FE498u;
    {
        const bool branch_taken_0x1fe498 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1FE49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE498u;
        // 0x1fe49c: 0x31143  sra         $v0, $v1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe498) {
            ctx->pc = 0x1FE4A8u;
            goto label_1fe4a8;
        }
    }
    ctx->pc = 0x1FE4A0u;
label_1fe4a0:
    // 0x1fe4a0: 0x2462001f  addiu       $v0, $v1, 0x1F
    ctx->pc = 0x1fe4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 31));
label_1fe4a4:
    // 0x1fe4a4: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x1fe4a4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
label_1fe4a8:
    // 0x1fe4a8: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x1fe4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
label_1fe4ac:
    // 0x1fe4ac: 0x10000002  b           . + 4 + (0x2 << 2)
label_1fe4b0:
    if (ctx->pc == 0x1FE4B0u) {
        ctx->pc = 0x1FE4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE4ACu;
        // 0x1fe4b0: 0xa20245d3  sb          $v0, 0x45D3($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 17875), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE4B4u;
        goto label_1fe4b4;
    }
    ctx->pc = 0x1FE4ACu;
    {
        const bool branch_taken_0x1fe4ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE4ACu;
        // 0x1fe4b0: 0xa20245d3  sb          $v0, 0x45D3($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 17875), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe4ac) {
            ctx->pc = 0x1FE4B8u;
            goto label_1fe4b8;
        }
    }
    ctx->pc = 0x1FE4B4u;
label_1fe4b4:
    // 0x1fe4b4: 0xa20045d3  sb          $zero, 0x45D3($s0)
    ctx->pc = 0x1fe4b4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 17875), (uint8_t)GPR_U32(ctx, 0));
label_1fe4b8:
    // 0x1fe4b8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1fe4b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1fe4bc:
    // 0x1fe4bc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1fe4bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1fe4c0:
    // 0x1fe4c0: 0x24060460  addiu       $a2, $zero, 0x460
    ctx->pc = 0x1fe4c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1120));
label_1fe4c4:
    // 0x1fe4c4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1fe4c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fe4c8:
    // 0x1fe4c8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1fe4c8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fe4cc:
    // 0x1fe4cc: 0xc066c72  jal         func_19B1C8
label_1fe4d0:
    if (ctx->pc == 0x1FE4D0u) {
        ctx->pc = 0x1FE4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE4CCu;
        // 0x1fe4d0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE4D4u;
        goto label_1fe4d4;
    }
    ctx->pc = 0x1FE4CCu;
    SET_GPR_U32(ctx, 31, 0x1FE4D4u);
    ctx->pc = 0x1FE4D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE4CCu;
    // 0x1fe4d0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x1FE4CCu, 0x1FE4D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE4D4u;
label_1fe4d4:
    // 0x1fe4d4: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1fe4d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1fe4d8:
    // 0x1fe4d8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1fe4d8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1fe4dc:
    // 0x1fe4dc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1fe4dcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1fe4e0:
    // 0x1fe4e0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1fe4e0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1fe4e4:
    // 0x1fe4e4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1fe4e4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1fe4e8:
    // 0x1fe4e8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1fe4e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1fe4ec:
    // 0x1fe4ec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1fe4ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1fe4f0:
    // 0x1fe4f0: 0x3e00008  jr          $ra
label_1fe4f4:
    if (ctx->pc == 0x1FE4F4u) {
        ctx->pc = 0x1FE4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE4F0u;
        // 0x1fe4f4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE4F8u;
        goto label_1fe4f8;
    }
    ctx->pc = 0x1FE4F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FE4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE4F0u;
        // 0x1fe4f4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FE4F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FE4F8u;
label_1fe4f8:
    // 0x1fe4f8: 0x0  nop
    ctx->pc = 0x1fe4f8u;
    // NOP
label_1fe4fc:
    // 0x1fe4fc: 0x0  nop
    ctx->pc = 0x1fe4fcu;
    // NOP
label_1fe500:
    // 0x1fe500: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1fe500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_1fe504:
    // 0x1fe504: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1fe504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_1fe508:
    // 0x1fe508: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x1fe508u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
label_1fe50c:
    // 0x1fe50c: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x1fe50cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
label_1fe510:
    // 0x1fe510: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x1fe510u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_1fe514:
    // 0x1fe514: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x1fe514u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_1fe518:
    // 0x1fe518: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x1fe518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_1fe51c:
    // 0x1fe51c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1fe51cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_1fe520:
    // 0x1fe520: 0xc07fa38  jal         func_1FE8E0
label_1fe524:
    if (ctx->pc == 0x1FE524u) {
        ctx->pc = 0x1FE524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE520u;
        // 0x1fe524: 0x7fb00020  sq          $s0, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE528u;
        goto label_1fe528;
    }
    ctx->pc = 0x1FE520u;
    SET_GPR_U32(ctx, 31, 0x1FE528u);
    ctx->pc = 0x1FE524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE520u;
    // 0x1fe524: 0x7fb00020  sq          $s0, 0x20($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE8E0u;
    { ctx->pc = 0x1fe8e0; return; }
    ctx->pc = 0x1FE528u;
label_1fe528:
    // 0x1fe528: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x1fe528u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fe52c:
    // 0x1fe52c: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x1fe52cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fe530:
    // 0x1fe530: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x1fe530u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_1fe534:
    // 0x1fe534: 0x240506df  addiu       $a1, $zero, 0x6DF
    ctx->pc = 0x1fe534u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1759));
label_1fe538:
    // 0x1fe538: 0x24424b20  addiu       $v0, $v0, 0x4B20
    ctx->pc = 0x1fe538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19232));
label_1fe53c:
    // 0x1fe53c: 0x558821  addu        $s1, $v0, $s5
    ctx->pc = 0x1fe53cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_1fe540:
    // 0x1fe540: 0xc05e234  jal         func_1788D0
label_1fe544:
    if (ctx->pc == 0x1FE544u) {
        ctx->pc = 0x1FE544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE540u;
        // 0x1fe544: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE548u;
        goto label_1fe548;
    }
    ctx->pc = 0x1FE540u;
    SET_GPR_U32(ctx, 31, 0x1FE548u);
    ctx->pc = 0x1FE544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE540u;
    // 0x1fe544: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1788D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1788D0u, 0x1FE540u, 0x1FE548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE548u;
label_1fe548:
    // 0x1fe548: 0x240a0008  addiu       $t2, $zero, 0x8
    ctx->pc = 0x1fe548u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1fe54c:
    // 0x1fe54c: 0x24030028  addiu       $v1, $zero, 0x28
    ctx->pc = 0x1fe54cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_1fe550:
    // 0x1fe550: 0xffaa0000  sd          $t2, 0x0($sp)
    ctx->pc = 0x1fe550u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 10));
label_1fe554:
    // 0x1fe554: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x1fe554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_1fe558:
    // 0x1fe558: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x1fe558u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
label_1fe55c:
    // 0x1fe55c: 0x3407fe00  ori         $a3, $zero, 0xFE00
    ctx->pc = 0x1fe55cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_1fe560:
    // 0x1fe560: 0xffa20010  sd          $v0, 0x10($sp)
    ctx->pc = 0x1fe560u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
label_1fe564:
    // 0x1fe564: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x1fe564u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_1fe568:
    // 0x1fe568: 0x24050280  addiu       $a1, $zero, 0x280
    ctx->pc = 0x1fe568u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_1fe56c:
    // 0x1fe56c: 0x240601c0  addiu       $a2, $zero, 0x1C0
    ctx->pc = 0x1fe56cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_1fe570:
    // 0x1fe570: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1fe570u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fe574:
    // 0x1fe574: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1fe574u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fe578:
    // 0x1fe578: 0xc07c110  jal         func_1F0440
label_1fe57c:
    if (ctx->pc == 0x1FE57Cu) {
        ctx->pc = 0x1FE57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE578u;
        // 0x1fe57c: 0x240b0010  addiu       $t3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE580u;
        goto label_1fe580;
    }
    ctx->pc = 0x1FE578u;
    SET_GPR_U32(ctx, 31, 0x1FE580u);
    ctx->pc = 0x1FE57Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE578u;
    // 0x1fe57c: 0x240b0010  addiu       $t3, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F0440u;
    { ctx->pc = 0x1f0440; return; }
    ctx->pc = 0x1FE580u;
label_1fe580:
    // 0x1fe580: 0x240400c0  addiu       $a0, $zero, 0xC0
    ctx->pc = 0x1fe580u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
label_1fe584:
    // 0x1fe584: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x1fe584u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1fe588:
    // 0x1fe588: 0xc07091c  jal         func_1C2470
label_1fe58c:
    if (ctx->pc == 0x1FE58Cu) {
        ctx->pc = 0x1FE58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE588u;
        // 0x1fe58c: 0x24060013  addiu       $a2, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE590u;
        goto label_1fe590;
    }
    ctx->pc = 0x1FE588u;
    SET_GPR_U32(ctx, 31, 0x1FE590u);
    ctx->pc = 0x1FE58Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE588u;
    // 0x1fe58c: 0x24060013  addiu       $a2, $zero, 0x13 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2470u;
    { ctx->pc = 0x1c2470; return; }
    ctx->pc = 0x1FE590u;
label_1fe590:
    // 0x1fe590: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1fe590u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1fe594:
    // 0x1fe594: 0x26240380  addiu       $a0, $s1, 0x380
    ctx->pc = 0x1fe594u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 896));
label_1fe598:
    // 0x1fe598: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1fe598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1fe59c:
    // 0x1fe59c: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0x1fe59cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_1fe5a0:
    // 0x1fe5a0: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x1fe5a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_1fe5a4:
    // 0x1fe5a4: 0x240701c0  addiu       $a3, $zero, 0x1C0
    ctx->pc = 0x1fe5a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_1fe5a8:
    // 0x1fe5a8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1fe5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1fe5ac:
    // 0x1fe5ac: 0x3408fe00  ori         $t0, $zero, 0xFE00
    ctx->pc = 0x1fe5acu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_1fe5b0:
    // 0x1fe5b0: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x1fe5b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
label_1fe5b4:
    // 0x1fe5b4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1fe5b4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fe5b8:
    // 0x1fe5b8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1fe5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fe5bc:
    // 0x1fe5bc: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x1fe5bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
label_1fe5c0:
    // 0x1fe5c0: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x1fe5c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_1fe5c4:
    // 0x1fe5c4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1fe5c4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fe5c8:
    // 0x1fe5c8: 0xc05de30  jal         func_1778C0
label_1fe5cc:
    if (ctx->pc == 0x1FE5CCu) {
        ctx->pc = 0x1FE5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE5C8u;
        // 0x1fe5cc: 0x240b00c0  addiu       $t3, $zero, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE5D0u;
        goto label_1fe5d0;
    }
    ctx->pc = 0x1FE5C8u;
    SET_GPR_U32(ctx, 31, 0x1FE5D0u);
    ctx->pc = 0x1FE5CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE5C8u;
    // 0x1fe5cc: 0x240b00c0  addiu       $t3, $zero, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1778C0u, 0x1FE5C8u, 0x1FE5D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE5D0u;
label_1fe5d0:
    // 0x1fe5d0: 0xc070834  jal         func_1C20D0
label_1fe5d4:
    if (ctx->pc == 0x1FE5D4u) {
        ctx->pc = 0x1FE5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE5D0u;
        // 0x1fe5d4: 0x24040031  addiu       $a0, $zero, 0x31 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE5D8u;
        goto label_1fe5d8;
    }
    ctx->pc = 0x1FE5D0u;
    SET_GPR_U32(ctx, 31, 0x1FE5D8u);
    ctx->pc = 0x1FE5D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE5D0u;
    // 0x1fe5d4: 0x24040031  addiu       $a0, $zero, 0x31 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C20D0u;
    { ctx->pc = 0x1c20d0; return; }
    ctx->pc = 0x1FE5D8u;
label_1fe5d8:
    // 0x1fe5d8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1fe5d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1fe5dc:
    // 0x1fe5dc: 0x26240420  addiu       $a0, $s1, 0x420
    ctx->pc = 0x1fe5dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1056));
label_1fe5e0:
    // 0x1fe5e0: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x1fe5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1fe5e4:
    // 0x1fe5e4: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0x1fe5e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_1fe5e8:
    // 0x1fe5e8: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x1fe5e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_1fe5ec:
    // 0x1fe5ec: 0x240701c0  addiu       $a3, $zero, 0x1C0
    ctx->pc = 0x1fe5ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_1fe5f0:
    // 0x1fe5f0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1fe5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1fe5f4:
    // 0x1fe5f4: 0x3408fe00  ori         $t0, $zero, 0xFE00
    ctx->pc = 0x1fe5f4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_1fe5f8:
    // 0x1fe5f8: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x1fe5f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
label_1fe5fc:
    // 0x1fe5fc: 0x24090158  addiu       $t1, $zero, 0x158
    ctx->pc = 0x1fe5fcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 344));
label_1fe600:
    // 0x1fe600: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1fe600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fe604:
    // 0x1fe604: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x1fe604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
label_1fe608:
    // 0x1fe608: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x1fe608u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_1fe60c:
    // 0x1fe60c: 0x240a00b0  addiu       $t2, $zero, 0xB0
    ctx->pc = 0x1fe60cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
label_1fe610:
    // 0x1fe610: 0xc05de30  jal         func_1778C0
label_1fe614:
    if (ctx->pc == 0x1FE614u) {
        ctx->pc = 0x1FE614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE610u;
        // 0x1fe614: 0x240b0050  addiu       $t3, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE618u;
        goto label_1fe618;
    }
    ctx->pc = 0x1FE610u;
    SET_GPR_U32(ctx, 31, 0x1FE618u);
    ctx->pc = 0x1FE614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE610u;
    // 0x1fe614: 0x240b0050  addiu       $t3, $zero, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1778C0u, 0x1FE610u, 0x1FE618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE618u;
label_1fe618:
    // 0x1fe618: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x1fe618u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_1fe61c:
    // 0x1fe61c: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x1fe61cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1fe620:
    // 0x1fe620: 0x240600c0  addiu       $a2, $zero, 0xC0
    ctx->pc = 0x1fe620u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
label_1fe624:
    // 0x1fe624: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x1fe624u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1fe628:
    // 0x1fe628: 0x24080280  addiu       $t0, $zero, 0x280
    ctx->pc = 0x1fe628u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_1fe62c:
    // 0x1fe62c: 0x240901c0  addiu       $t1, $zero, 0x1C0
    ctx->pc = 0x1fe62cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_1fe630:
    // 0x1fe630: 0xc054e5c  jal         func_153970
label_1fe634:
    if (ctx->pc == 0x1FE634u) {
        ctx->pc = 0x1FE634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE630u;
        // 0x1fe634: 0x340afe00  ori         $t2, $zero, 0xFE00 (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE638u;
        goto label_1fe638;
    }
    ctx->pc = 0x1FE630u;
    SET_GPR_U32(ctx, 31, 0x1FE638u);
    ctx->pc = 0x1FE634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE630u;
    // 0x1fe634: 0x340afe00  ori         $t2, $zero, 0xFE00 (Delay Slot)
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
    ctx->in_delay_slot = false;
    ctx->pc = 0x153970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153970u, 0x1FE630u, 0x1FE638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE638u;
label_1fe638:
    // 0x1fe638: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1fe638u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fe63c:
    // 0x1fe63c: 0x3c08002d  lui         $t0, 0x2D
    ctx->pc = 0x1fe63cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)45 << 16));
label_1fe640:
    // 0x1fe640: 0x262404c0  addiu       $a0, $s1, 0x4C0
    ctx->pc = 0x1fe640u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1216));
label_1fe644:
    // 0x1fe644: 0x24060012  addiu       $a2, $zero, 0x12
    ctx->pc = 0x1fe644u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_1fe648:
    // 0x1fe648: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x1fe648u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1fe64c:
    // 0x1fe64c: 0xc054e74  jal         func_1539D0
label_1fe650:
    if (ctx->pc == 0x1FE650u) {
        ctx->pc = 0x1FE650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE64Cu;
        // 0x1fe650: 0x2508d548  addiu       $t0, $t0, -0x2AB8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294956360));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE654u;
        goto label_1fe654;
    }
    ctx->pc = 0x1FE64Cu;
    SET_GPR_U32(ctx, 31, 0x1FE654u);
    ctx->pc = 0x1FE650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE64Cu;
    // 0x1fe650: 0x2508d548  addiu       $t0, $t0, -0x2AB8 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294956360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1539D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1539D0u, 0x1FE64Cu, 0x1FE654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE654u;
label_1fe654:
    // 0x1fe654: 0xc07082c  jal         func_1C20B0
label_1fe658:
    if (ctx->pc == 0x1FE658u) {
        ctx->pc = 0x1FE658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE654u;
        // 0x1fe658: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE65Cu;
        goto label_1fe65c;
    }
    ctx->pc = 0x1FE654u;
    SET_GPR_U32(ctx, 31, 0x1FE65Cu);
    ctx->pc = 0x1FE658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE654u;
    // 0x1fe658: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C20B0u;
    { ctx->pc = 0x1c20b0; return; }
    ctx->pc = 0x1FE65Cu;
label_1fe65c:
    // 0x1fe65c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1fe65cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1fe660:
    // 0x1fe660: 0x26241360  addiu       $a0, $s1, 0x1360
    ctx->pc = 0x1fe660u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4960));
label_1fe664:
    // 0x1fe664: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x1fe664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1fe668:
    // 0x1fe668: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0x1fe668u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_1fe66c:
    // 0x1fe66c: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x1fe66cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_1fe670:
    // 0x1fe670: 0x240701c0  addiu       $a3, $zero, 0x1C0
    ctx->pc = 0x1fe670u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_1fe674:
    // 0x1fe674: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1fe674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1fe678:
    // 0x1fe678: 0x3408fe00  ori         $t0, $zero, 0xFE00
    ctx->pc = 0x1fe678u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_1fe67c:
    // 0x1fe67c: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x1fe67cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
label_1fe680:
    // 0x1fe680: 0x24090080  addiu       $t1, $zero, 0x80
    ctx->pc = 0x1fe680u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1fe684:
    // 0x1fe684: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1fe684u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fe688:
    // 0x1fe688: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x1fe688u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
label_1fe68c:
    // 0x1fe68c: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x1fe68cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_1fe690:
    // 0x1fe690: 0x240a0198  addiu       $t2, $zero, 0x198
    ctx->pc = 0x1fe690u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 408));
label_1fe694:
    // 0x1fe694: 0xc05de30  jal         func_1778C0
label_1fe698:
    if (ctx->pc == 0x1FE698u) {
        ctx->pc = 0x1FE698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE694u;
        // 0x1fe698: 0x240b0058  addiu       $t3, $zero, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE69Cu;
        goto label_1fe69c;
    }
    ctx->pc = 0x1FE694u;
    SET_GPR_U32(ctx, 31, 0x1FE69Cu);
    ctx->pc = 0x1FE698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE694u;
    // 0x1fe698: 0x240b0058  addiu       $t3, $zero, 0x58 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1778C0u, 0x1FE694u, 0x1FE69Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE69Cu;
label_1fe69c:
    // 0x1fe69c: 0x3c0b002d  lui         $t3, 0x2D
    ctx->pc = 0x1fe69cu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)45 << 16));
label_1fe6a0:
    // 0x1fe6a0: 0x26241400  addiu       $a0, $s1, 0x1400
    ctx->pc = 0x1fe6a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 5120));
label_1fe6a4:
    // 0x1fe6a4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1fe6a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1fe6a8:
    // 0x1fe6a8: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0x1fe6a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_1fe6ac:
    // 0x1fe6ac: 0x240701c0  addiu       $a3, $zero, 0x1C0
    ctx->pc = 0x1fe6acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_1fe6b0:
    // 0x1fe6b0: 0x3408fe00  ori         $t0, $zero, 0xFE00
    ctx->pc = 0x1fe6b0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_1fe6b4:
    // 0x1fe6b4: 0x24090010  addiu       $t1, $zero, 0x10
    ctx->pc = 0x1fe6b4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1fe6b8:
    // 0x1fe6b8: 0x240a0018  addiu       $t2, $zero, 0x18
    ctx->pc = 0x1fe6b8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_1fe6bc:
    // 0x1fe6bc: 0xc0708ac  jal         func_1C22B0
label_1fe6c0:
    if (ctx->pc == 0x1FE6C0u) {
        ctx->pc = 0x1FE6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE6BCu;
        // 0x1fe6c0: 0x256bd548  addiu       $t3, $t3, -0x2AB8 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294956360));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE6C4u;
        goto label_1fe6c4;
    }
    ctx->pc = 0x1FE6BCu;
    SET_GPR_U32(ctx, 31, 0x1FE6C4u);
    ctx->pc = 0x1FE6C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE6BCu;
    // 0x1fe6c0: 0x256bd548  addiu       $t3, $t3, -0x2AB8 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294956360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C22B0u;
    { ctx->pc = 0x1c22b0; return; }
    ctx->pc = 0x1FE6C4u;
label_1fe6c4:
    // 0x1fe6c4: 0xc07082c  jal         func_1C20B0
label_1fe6c8:
    if (ctx->pc == 0x1FE6C8u) {
        ctx->pc = 0x1FE6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE6C4u;
        // 0x1fe6c8: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE6CCu;
        goto label_1fe6cc;
    }
    ctx->pc = 0x1FE6C4u;
    SET_GPR_U32(ctx, 31, 0x1FE6CCu);
    ctx->pc = 0x1FE6C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE6C4u;
    // 0x1fe6c8: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C20B0u;
    { ctx->pc = 0x1c20b0; return; }
    ctx->pc = 0x1FE6CCu;
label_1fe6cc:
    // 0x1fe6cc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1fe6ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1fe6d0:
    // 0x1fe6d0: 0x262415e0  addiu       $a0, $s1, 0x15E0
    ctx->pc = 0x1fe6d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 5600));
label_1fe6d4:
    // 0x1fe6d4: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x1fe6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1fe6d8:
    // 0x1fe6d8: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0x1fe6d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_1fe6dc:
    // 0x1fe6dc: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x1fe6dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_1fe6e0:
    // 0x1fe6e0: 0x240701c0  addiu       $a3, $zero, 0x1C0
    ctx->pc = 0x1fe6e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_1fe6e4:
    // 0x1fe6e4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1fe6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1fe6e8:
    // 0x1fe6e8: 0x3408fe00  ori         $t0, $zero, 0xFE00
    ctx->pc = 0x1fe6e8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_1fe6ec:
    // 0x1fe6ec: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x1fe6ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
label_1fe6f0:
    // 0x1fe6f0: 0x24090080  addiu       $t1, $zero, 0x80
    ctx->pc = 0x1fe6f0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1fe6f4:
    // 0x1fe6f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1fe6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fe6f8:
    // 0x1fe6f8: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x1fe6f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
label_1fe6fc:
    // 0x1fe6fc: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x1fe6fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_1fe700:
    // 0x1fe700: 0x240a01a8  addiu       $t2, $zero, 0x1A8
    ctx->pc = 0x1fe700u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 424));
label_1fe704:
    // 0x1fe704: 0xc05de30  jal         func_1778C0
label_1fe708:
    if (ctx->pc == 0x1FE708u) {
        ctx->pc = 0x1FE708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE704u;
        // 0x1fe708: 0x240b0058  addiu       $t3, $zero, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE70Cu;
        goto label_1fe70c;
    }
    ctx->pc = 0x1FE704u;
    SET_GPR_U32(ctx, 31, 0x1FE70Cu);
    ctx->pc = 0x1FE708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE704u;
    // 0x1fe708: 0x240b0058  addiu       $t3, $zero, 0x58 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1778C0u, 0x1FE704u, 0x1FE70Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE70Cu;
label_1fe70c:
    // 0x1fe70c: 0xc070834  jal         func_1C20D0
label_1fe710:
    if (ctx->pc == 0x1FE710u) {
        ctx->pc = 0x1FE710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE70Cu;
        // 0x1fe710: 0x24040035  addiu       $a0, $zero, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE714u;
        goto label_1fe714;
    }
    ctx->pc = 0x1FE70Cu;
    SET_GPR_U32(ctx, 31, 0x1FE714u);
    ctx->pc = 0x1FE710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE70Cu;
    // 0x1fe710: 0x24040035  addiu       $a0, $zero, 0x35 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C20D0u;
    { ctx->pc = 0x1c20d0; return; }
    ctx->pc = 0x1FE714u;
label_1fe714:
    // 0x1fe714: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1fe714u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1fe718:
    // 0x1fe718: 0x240b0018  addiu       $t3, $zero, 0x18
    ctx->pc = 0x1fe718u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_1fe71c:
    // 0x1fe71c: 0xffab0000  sd          $t3, 0x0($sp)
    ctx->pc = 0x1fe71cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 11));
label_1fe720:
    // 0x1fe720: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1fe720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1fe724:
    // 0x1fe724: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x1fe724u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
label_1fe728:
    // 0x1fe728: 0x26241680  addiu       $a0, $s1, 0x1680
    ctx->pc = 0x1fe728u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 5760));
label_1fe72c:
    // 0x1fe72c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1fe72cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fe730:
    // 0x1fe730: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x1fe730u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
label_1fe734:
    // 0x1fe734: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x1fe734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_1fe738:
    // 0x1fe738: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0x1fe738u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_1fe73c:
    // 0x1fe73c: 0x240701c0  addiu       $a3, $zero, 0x1C0
    ctx->pc = 0x1fe73cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_1fe740:
    // 0x1fe740: 0x3408fe00  ori         $t0, $zero, 0xFE00
    ctx->pc = 0x1fe740u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_1fe744:
    // 0x1fe744: 0x240903e0  addiu       $t1, $zero, 0x3E0
    ctx->pc = 0x1fe744u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 992));
label_1fe748:
    // 0x1fe748: 0xc05de30  jal         func_1778C0
label_1fe74c:
    if (ctx->pc == 0x1FE74Cu) {
        ctx->pc = 0x1FE74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE748u;
        // 0x1fe74c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE750u;
        goto label_1fe750;
    }
    ctx->pc = 0x1FE748u;
    SET_GPR_U32(ctx, 31, 0x1FE750u);
    ctx->pc = 0x1FE74Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE748u;
    // 0x1fe74c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1778C0u, 0x1FE748u, 0x1FE750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE750u;
label_1fe750:
    // 0x1fe750: 0x3c0b002d  lui         $t3, 0x2D
    ctx->pc = 0x1fe750u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)45 << 16));
label_1fe754:
    // 0x1fe754: 0x26241720  addiu       $a0, $s1, 0x1720
    ctx->pc = 0x1fe754u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 5920));
label_1fe758:
    // 0x1fe758: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1fe758u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fe75c:
    // 0x1fe75c: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0x1fe75cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_1fe760:
    // 0x1fe760: 0x240701c0  addiu       $a3, $zero, 0x1C0
    ctx->pc = 0x1fe760u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_1fe764:
    // 0x1fe764: 0x3408fe00  ori         $t0, $zero, 0xFE00
    ctx->pc = 0x1fe764u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_1fe768:
    // 0x1fe768: 0x24090010  addiu       $t1, $zero, 0x10
    ctx->pc = 0x1fe768u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1fe76c:
    // 0x1fe76c: 0x240a0018  addiu       $t2, $zero, 0x18
    ctx->pc = 0x1fe76cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_1fe770:
    // 0x1fe770: 0xc0708ac  jal         func_1C22B0
label_1fe774:
    if (ctx->pc == 0x1FE774u) {
        ctx->pc = 0x1FE774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE770u;
        // 0x1fe774: 0x256bd548  addiu       $t3, $t3, -0x2AB8 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294956360));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE778u;
        goto label_1fe778;
    }
    ctx->pc = 0x1FE770u;
    SET_GPR_U32(ctx, 31, 0x1FE778u);
    ctx->pc = 0x1FE774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE770u;
    // 0x1fe774: 0x256bd548  addiu       $t3, $t3, -0x2AB8 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294956360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C22B0u;
    { ctx->pc = 0x1c22b0; return; }
    ctx->pc = 0x1FE778u;
label_1fe778:
    // 0x1fe778: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1fe778u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fe77c:
    // 0x1fe77c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1fe77cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fe780:
    // 0x1fe780: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1fe780u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fe784:
    // 0x1fe784: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1fe784u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fe788:
    // 0x1fe788: 0xc070834  jal         func_1C20D0
label_1fe78c:
    if (ctx->pc == 0x1FE78Cu) {
        ctx->pc = 0x1FE78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE788u;
        // 0x1fe78c: 0x24040030  addiu       $a0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE790u;
        goto label_1fe790;
    }
    ctx->pc = 0x1FE788u;
    SET_GPR_U32(ctx, 31, 0x1FE790u);
    ctx->pc = 0x1FE78Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE788u;
    // 0x1fe78c: 0x24040030  addiu       $a0, $zero, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C20D0u;
    { ctx->pc = 0x1c20d0; return; }
    ctx->pc = 0x1FE790u;
label_1fe790:
    // 0x1fe790: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1fe790u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1fe794:
    // 0x1fe794: 0x240b0010  addiu       $t3, $zero, 0x10
    ctx->pc = 0x1fe794u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1fe798:
    // 0x1fe798: 0xffab0000  sd          $t3, 0x0($sp)
    ctx->pc = 0x1fe798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 11));
label_1fe79c:
    // 0x1fe79c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1fe79cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1fe7a0:
    // 0x1fe7a0: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x1fe7a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
label_1fe7a4:
    // 0x1fe7a4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1fe7a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fe7a8:
    // 0x1fe7a8: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x1fe7a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
label_1fe7ac:
    // 0x1fe7ac: 0x2321021  addu        $v0, $s1, $s2
    ctx->pc = 0x1fe7acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
label_1fe7b0:
    // 0x1fe7b0: 0xffa30018  sd          $v1, 0x18($sp)
    ctx->pc = 0x1fe7b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 3));
label_1fe7b4:
    // 0x1fe7b4: 0x244417c0  addiu       $a0, $v0, 0x17C0
    ctx->pc = 0x1fe7b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 6080));
label_1fe7b8:
    // 0x1fe7b8: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0x1fe7b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_1fe7bc:
    // 0x1fe7bc: 0x240701c0  addiu       $a3, $zero, 0x1C0
    ctx->pc = 0x1fe7bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_1fe7c0:
    // 0x1fe7c0: 0x3408fe00  ori         $t0, $zero, 0xFE00
    ctx->pc = 0x1fe7c0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_1fe7c4:
    // 0x1fe7c4: 0x24090310  addiu       $t1, $zero, 0x310
    ctx->pc = 0x1fe7c4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 784));
label_1fe7c8:
    // 0x1fe7c8: 0xc05de30  jal         func_1778C0
label_1fe7cc:
    if (ctx->pc == 0x1FE7CCu) {
        ctx->pc = 0x1FE7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE7C8u;
        // 0x1fe7cc: 0x240a0050  addiu       $t2, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE7D0u;
        goto label_1fe7d0;
    }
    ctx->pc = 0x1FE7C8u;
    SET_GPR_U32(ctx, 31, 0x1FE7D0u);
    ctx->pc = 0x1FE7CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE7C8u;
    // 0x1fe7cc: 0x240a0050  addiu       $t2, $zero, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1778C0u, 0x1FE7C8u, 0x1FE7D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE7D0u;
label_1fe7d0:
    // 0x1fe7d0: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x1fe7d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_1fe7d4:
    // 0x1fe7d4: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x1fe7d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->pc = 0x1fe7d8u;
    return;
}
