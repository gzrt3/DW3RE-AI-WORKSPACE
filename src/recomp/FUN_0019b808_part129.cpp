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


void FUN_0019b808_part129(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x1da008u: goto label_1da008;
        case 0x1da00cu: goto label_1da00c;
        case 0x1da010u: goto label_1da010;
        case 0x1da014u: goto label_1da014;
        case 0x1da018u: goto label_1da018;
        case 0x1da01cu: goto label_1da01c;
        case 0x1da020u: goto label_1da020;
        case 0x1da024u: goto label_1da024;
        case 0x1da028u: goto label_1da028;
        case 0x1da02cu: goto label_1da02c;
        case 0x1da030u: goto label_1da030;
        case 0x1da034u: goto label_1da034;
        case 0x1da038u: goto label_1da038;
        case 0x1da03cu: goto label_1da03c;
        case 0x1da040u: goto label_1da040;
        case 0x1da044u: goto label_1da044;
        case 0x1da048u: goto label_1da048;
        case 0x1da04cu: goto label_1da04c;
        case 0x1da050u: goto label_1da050;
        case 0x1da054u: goto label_1da054;
        case 0x1da058u: goto label_1da058;
        case 0x1da05cu: goto label_1da05c;
        case 0x1da060u: goto label_1da060;
        case 0x1da064u: goto label_1da064;
        case 0x1da068u: goto label_1da068;
        case 0x1da06cu: goto label_1da06c;
        case 0x1da070u: goto label_1da070;
        case 0x1da074u: goto label_1da074;
        case 0x1da078u: goto label_1da078;
        case 0x1da07cu: goto label_1da07c;
        case 0x1da080u: goto label_1da080;
        case 0x1da084u: goto label_1da084;
        case 0x1da088u: goto label_1da088;
        case 0x1da08cu: goto label_1da08c;
        case 0x1da090u: goto label_1da090;
        case 0x1da094u: goto label_1da094;
        case 0x1da098u: goto label_1da098;
        case 0x1da09cu: goto label_1da09c;
        case 0x1da0a0u: goto label_1da0a0;
        case 0x1da0a4u: goto label_1da0a4;
        case 0x1da0a8u: goto label_1da0a8;
        case 0x1da0acu: goto label_1da0ac;
        case 0x1da0b0u: goto label_1da0b0;
        case 0x1da0b4u: goto label_1da0b4;
        case 0x1da0b8u: goto label_1da0b8;
        case 0x1da0bcu: goto label_1da0bc;
        case 0x1da0c0u: goto label_1da0c0;
        case 0x1da0c4u: goto label_1da0c4;
        case 0x1da0c8u: goto label_1da0c8;
        case 0x1da0ccu: goto label_1da0cc;
        case 0x1da0d0u: goto label_1da0d0;
        case 0x1da0d4u: goto label_1da0d4;
        case 0x1da0d8u: goto label_1da0d8;
        case 0x1da0dcu: goto label_1da0dc;
        case 0x1da0e0u: goto label_1da0e0;
        case 0x1da0e4u: goto label_1da0e4;
        case 0x1da0e8u: goto label_1da0e8;
        case 0x1da0ecu: goto label_1da0ec;
        case 0x1da0f0u: goto label_1da0f0;
        case 0x1da0f4u: goto label_1da0f4;
        case 0x1da0f8u: goto label_1da0f8;
        case 0x1da0fcu: goto label_1da0fc;
        case 0x1da100u: goto label_1da100;
        case 0x1da104u: goto label_1da104;
        case 0x1da108u: goto label_1da108;
        case 0x1da10cu: goto label_1da10c;
        case 0x1da110u: goto label_1da110;
        case 0x1da114u: goto label_1da114;
        case 0x1da118u: goto label_1da118;
        case 0x1da11cu: goto label_1da11c;
        case 0x1da120u: goto label_1da120;
        case 0x1da124u: goto label_1da124;
        case 0x1da128u: goto label_1da128;
        case 0x1da12cu: goto label_1da12c;
        case 0x1da130u: goto label_1da130;
        case 0x1da134u: goto label_1da134;
        case 0x1da138u: goto label_1da138;
        case 0x1da13cu: goto label_1da13c;
        case 0x1da140u: goto label_1da140;
        case 0x1da144u: goto label_1da144;
        case 0x1da148u: goto label_1da148;
        case 0x1da14cu: goto label_1da14c;
        case 0x1da150u: goto label_1da150;
        case 0x1da154u: goto label_1da154;
        case 0x1da158u: goto label_1da158;
        case 0x1da15cu: goto label_1da15c;
        case 0x1da160u: goto label_1da160;
        case 0x1da164u: goto label_1da164;
        case 0x1da168u: goto label_1da168;
        case 0x1da16cu: goto label_1da16c;
        case 0x1da170u: goto label_1da170;
        case 0x1da174u: goto label_1da174;
        case 0x1da178u: goto label_1da178;
        case 0x1da17cu: goto label_1da17c;
        case 0x1da180u: goto label_1da180;
        case 0x1da184u: goto label_1da184;
        case 0x1da188u: goto label_1da188;
        case 0x1da18cu: goto label_1da18c;
        case 0x1da190u: goto label_1da190;
        case 0x1da194u: goto label_1da194;
        case 0x1da198u: goto label_1da198;
        case 0x1da19cu: goto label_1da19c;
        case 0x1da1a0u: goto label_1da1a0;
        case 0x1da1a4u: goto label_1da1a4;
        case 0x1da1a8u: goto label_1da1a8;
        case 0x1da1acu: goto label_1da1ac;
        case 0x1da1b0u: goto label_1da1b0;
        case 0x1da1b4u: goto label_1da1b4;
        case 0x1da1b8u: goto label_1da1b8;
        case 0x1da1bcu: goto label_1da1bc;
        case 0x1da1c0u: goto label_1da1c0;
        case 0x1da1c4u: goto label_1da1c4;
        case 0x1da1c8u: goto label_1da1c8;
        case 0x1da1ccu: goto label_1da1cc;
        case 0x1da1d0u: goto label_1da1d0;
        case 0x1da1d4u: goto label_1da1d4;
        case 0x1da1d8u: goto label_1da1d8;
        case 0x1da1dcu: goto label_1da1dc;
        case 0x1da1e0u: goto label_1da1e0;
        case 0x1da1e4u: goto label_1da1e4;
        case 0x1da1e8u: goto label_1da1e8;
        case 0x1da1ecu: goto label_1da1ec;
        case 0x1da1f0u: goto label_1da1f0;
        case 0x1da1f4u: goto label_1da1f4;
        case 0x1da1f8u: goto label_1da1f8;
        case 0x1da1fcu: goto label_1da1fc;
        case 0x1da200u: goto label_1da200;
        case 0x1da204u: goto label_1da204;
        case 0x1da208u: goto label_1da208;
        case 0x1da20cu: goto label_1da20c;
        case 0x1da210u: goto label_1da210;
        case 0x1da214u: goto label_1da214;
        case 0x1da218u: goto label_1da218;
        case 0x1da21cu: goto label_1da21c;
        case 0x1da220u: goto label_1da220;
        case 0x1da224u: goto label_1da224;
        case 0x1da228u: goto label_1da228;
        case 0x1da22cu: goto label_1da22c;
        case 0x1da230u: goto label_1da230;
        case 0x1da234u: goto label_1da234;
        case 0x1da238u: goto label_1da238;
        case 0x1da23cu: goto label_1da23c;
        case 0x1da240u: goto label_1da240;
        case 0x1da244u: goto label_1da244;
        case 0x1da248u: goto label_1da248;
        case 0x1da24cu: goto label_1da24c;
        case 0x1da250u: goto label_1da250;
        case 0x1da254u: goto label_1da254;
        case 0x1da258u: goto label_1da258;
        case 0x1da25cu: goto label_1da25c;
        case 0x1da260u: goto label_1da260;
        case 0x1da264u: goto label_1da264;
        case 0x1da268u: goto label_1da268;
        case 0x1da26cu: goto label_1da26c;
        case 0x1da270u: goto label_1da270;
        case 0x1da274u: goto label_1da274;
        case 0x1da278u: goto label_1da278;
        case 0x1da27cu: goto label_1da27c;
        case 0x1da280u: goto label_1da280;
        case 0x1da284u: goto label_1da284;
        case 0x1da288u: goto label_1da288;
        case 0x1da28cu: goto label_1da28c;
        case 0x1da290u: goto label_1da290;
        case 0x1da294u: goto label_1da294;
        case 0x1da298u: goto label_1da298;
        case 0x1da29cu: goto label_1da29c;
        case 0x1da2a0u: goto label_1da2a0;
        case 0x1da2a4u: goto label_1da2a4;
        case 0x1da2a8u: goto label_1da2a8;
        case 0x1da2acu: goto label_1da2ac;
        case 0x1da2b0u: goto label_1da2b0;
        case 0x1da2b4u: goto label_1da2b4;
        case 0x1da2b8u: goto label_1da2b8;
        case 0x1da2bcu: goto label_1da2bc;
        case 0x1da2c0u: goto label_1da2c0;
        case 0x1da2c4u: goto label_1da2c4;
        case 0x1da2c8u: goto label_1da2c8;
        case 0x1da2ccu: goto label_1da2cc;
        case 0x1da2d0u: goto label_1da2d0;
        case 0x1da2d4u: goto label_1da2d4;
        case 0x1da2d8u: goto label_1da2d8;
        case 0x1da2dcu: goto label_1da2dc;
        case 0x1da2e0u: goto label_1da2e0;
        case 0x1da2e4u: goto label_1da2e4;
        case 0x1da2e8u: goto label_1da2e8;
        case 0x1da2ecu: goto label_1da2ec;
        case 0x1da2f0u: goto label_1da2f0;
        case 0x1da2f4u: goto label_1da2f4;
        case 0x1da2f8u: goto label_1da2f8;
        case 0x1da2fcu: goto label_1da2fc;
        case 0x1da300u: goto label_1da300;
        case 0x1da304u: goto label_1da304;
        case 0x1da308u: goto label_1da308;
        case 0x1da30cu: goto label_1da30c;
        case 0x1da310u: goto label_1da310;
        case 0x1da314u: goto label_1da314;
        case 0x1da318u: goto label_1da318;
        case 0x1da31cu: goto label_1da31c;
        case 0x1da320u: goto label_1da320;
        case 0x1da324u: goto label_1da324;
        case 0x1da328u: goto label_1da328;
        case 0x1da32cu: goto label_1da32c;
        case 0x1da330u: goto label_1da330;
        case 0x1da334u: goto label_1da334;
        case 0x1da338u: goto label_1da338;
        case 0x1da33cu: goto label_1da33c;
        case 0x1da340u: goto label_1da340;
        case 0x1da344u: goto label_1da344;
        case 0x1da348u: goto label_1da348;
        case 0x1da34cu: goto label_1da34c;
        case 0x1da350u: goto label_1da350;
        case 0x1da354u: goto label_1da354;
        case 0x1da358u: goto label_1da358;
        case 0x1da35cu: goto label_1da35c;
        case 0x1da360u: goto label_1da360;
        case 0x1da364u: goto label_1da364;
        case 0x1da368u: goto label_1da368;
        case 0x1da36cu: goto label_1da36c;
        case 0x1da370u: goto label_1da370;
        case 0x1da374u: goto label_1da374;
        case 0x1da378u: goto label_1da378;
        case 0x1da37cu: goto label_1da37c;
        case 0x1da380u: goto label_1da380;
        case 0x1da384u: goto label_1da384;
        case 0x1da388u: goto label_1da388;
        case 0x1da38cu: goto label_1da38c;
        case 0x1da390u: goto label_1da390;
        case 0x1da394u: goto label_1da394;
        case 0x1da398u: goto label_1da398;
        case 0x1da39cu: goto label_1da39c;
        case 0x1da3a0u: goto label_1da3a0;
        case 0x1da3a4u: goto label_1da3a4;
        case 0x1da3a8u: goto label_1da3a8;
        case 0x1da3acu: goto label_1da3ac;
        case 0x1da3b0u: goto label_1da3b0;
        case 0x1da3b4u: goto label_1da3b4;
        case 0x1da3b8u: goto label_1da3b8;
        case 0x1da3bcu: goto label_1da3bc;
        case 0x1da3c0u: goto label_1da3c0;
        case 0x1da3c4u: goto label_1da3c4;
        case 0x1da3c8u: goto label_1da3c8;
        case 0x1da3ccu: goto label_1da3cc;
        case 0x1da3d0u: goto label_1da3d0;
        case 0x1da3d4u: goto label_1da3d4;
        case 0x1da3d8u: goto label_1da3d8;
        case 0x1da3dcu: goto label_1da3dc;
        case 0x1da3e0u: goto label_1da3e0;
        case 0x1da3e4u: goto label_1da3e4;
        case 0x1da3e8u: goto label_1da3e8;
        case 0x1da3ecu: goto label_1da3ec;
        case 0x1da3f0u: goto label_1da3f0;
        case 0x1da3f4u: goto label_1da3f4;
        case 0x1da3f8u: goto label_1da3f8;
        case 0x1da3fcu: goto label_1da3fc;
        case 0x1da400u: goto label_1da400;
        case 0x1da404u: goto label_1da404;
        case 0x1da408u: goto label_1da408;
        case 0x1da40cu: goto label_1da40c;
        case 0x1da410u: goto label_1da410;
        case 0x1da414u: goto label_1da414;
        case 0x1da418u: goto label_1da418;
        case 0x1da41cu: goto label_1da41c;
        case 0x1da420u: goto label_1da420;
        case 0x1da424u: goto label_1da424;
        case 0x1da428u: goto label_1da428;
        case 0x1da42cu: goto label_1da42c;
        case 0x1da430u: goto label_1da430;
        case 0x1da434u: goto label_1da434;
        case 0x1da438u: goto label_1da438;
        case 0x1da43cu: goto label_1da43c;
        case 0x1da440u: goto label_1da440;
        case 0x1da444u: goto label_1da444;
        case 0x1da448u: goto label_1da448;
        case 0x1da44cu: goto label_1da44c;
        case 0x1da450u: goto label_1da450;
        case 0x1da454u: goto label_1da454;
        case 0x1da458u: goto label_1da458;
        case 0x1da45cu: goto label_1da45c;
        case 0x1da460u: goto label_1da460;
        case 0x1da464u: goto label_1da464;
        case 0x1da468u: goto label_1da468;
        case 0x1da46cu: goto label_1da46c;
        case 0x1da470u: goto label_1da470;
        case 0x1da474u: goto label_1da474;
        case 0x1da478u: goto label_1da478;
        case 0x1da47cu: goto label_1da47c;
        case 0x1da480u: goto label_1da480;
        case 0x1da484u: goto label_1da484;
        case 0x1da488u: goto label_1da488;
        case 0x1da48cu: goto label_1da48c;
        case 0x1da490u: goto label_1da490;
        case 0x1da494u: goto label_1da494;
        case 0x1da498u: goto label_1da498;
        case 0x1da49cu: goto label_1da49c;
        case 0x1da4a0u: goto label_1da4a0;
        case 0x1da4a4u: goto label_1da4a4;
        case 0x1da4a8u: goto label_1da4a8;
        case 0x1da4acu: goto label_1da4ac;
        case 0x1da4b0u: goto label_1da4b0;
        case 0x1da4b4u: goto label_1da4b4;
        case 0x1da4b8u: goto label_1da4b8;
        case 0x1da4bcu: goto label_1da4bc;
        case 0x1da4c0u: goto label_1da4c0;
        case 0x1da4c4u: goto label_1da4c4;
        case 0x1da4c8u: goto label_1da4c8;
        case 0x1da4ccu: goto label_1da4cc;
        case 0x1da4d0u: goto label_1da4d0;
        case 0x1da4d4u: goto label_1da4d4;
        case 0x1da4d8u: goto label_1da4d8;
        case 0x1da4dcu: goto label_1da4dc;
        case 0x1da4e0u: goto label_1da4e0;
        case 0x1da4e4u: goto label_1da4e4;
        case 0x1da4e8u: goto label_1da4e8;
        case 0x1da4ecu: goto label_1da4ec;
        case 0x1da4f0u: goto label_1da4f0;
        case 0x1da4f4u: goto label_1da4f4;
        case 0x1da4f8u: goto label_1da4f8;
        case 0x1da4fcu: goto label_1da4fc;
        case 0x1da500u: goto label_1da500;
        case 0x1da504u: goto label_1da504;
        case 0x1da508u: goto label_1da508;
        case 0x1da50cu: goto label_1da50c;
        case 0x1da510u: goto label_1da510;
        case 0x1da514u: goto label_1da514;
        case 0x1da518u: goto label_1da518;
        case 0x1da51cu: goto label_1da51c;
        case 0x1da520u: goto label_1da520;
        case 0x1da524u: goto label_1da524;
        case 0x1da528u: goto label_1da528;
        case 0x1da52cu: goto label_1da52c;
        case 0x1da530u: goto label_1da530;
        case 0x1da534u: goto label_1da534;
        case 0x1da538u: goto label_1da538;
        case 0x1da53cu: goto label_1da53c;
        case 0x1da540u: goto label_1da540;
        case 0x1da544u: goto label_1da544;
        case 0x1da548u: goto label_1da548;
        case 0x1da54cu: goto label_1da54c;
        case 0x1da550u: goto label_1da550;
        case 0x1da554u: goto label_1da554;
        case 0x1da558u: goto label_1da558;
        case 0x1da55cu: goto label_1da55c;
        case 0x1da560u: goto label_1da560;
        case 0x1da564u: goto label_1da564;
        case 0x1da568u: goto label_1da568;
        case 0x1da56cu: goto label_1da56c;
        case 0x1da570u: goto label_1da570;
        case 0x1da574u: goto label_1da574;
        case 0x1da578u: goto label_1da578;
        case 0x1da57cu: goto label_1da57c;
        case 0x1da580u: goto label_1da580;
        case 0x1da584u: goto label_1da584;
        case 0x1da588u: goto label_1da588;
        case 0x1da58cu: goto label_1da58c;
        case 0x1da590u: goto label_1da590;
        case 0x1da594u: goto label_1da594;
        case 0x1da598u: goto label_1da598;
        case 0x1da59cu: goto label_1da59c;
        case 0x1da5a0u: goto label_1da5a0;
        case 0x1da5a4u: goto label_1da5a4;
        case 0x1da5a8u: goto label_1da5a8;
        case 0x1da5acu: goto label_1da5ac;
        case 0x1da5b0u: goto label_1da5b0;
        case 0x1da5b4u: goto label_1da5b4;
        case 0x1da5b8u: goto label_1da5b8;
        case 0x1da5bcu: goto label_1da5bc;
        case 0x1da5c0u: goto label_1da5c0;
        case 0x1da5c4u: goto label_1da5c4;
        case 0x1da5c8u: goto label_1da5c8;
        case 0x1da5ccu: goto label_1da5cc;
        case 0x1da5d0u: goto label_1da5d0;
        case 0x1da5d4u: goto label_1da5d4;
        case 0x1da5d8u: goto label_1da5d8;
        case 0x1da5dcu: goto label_1da5dc;
        case 0x1da5e0u: goto label_1da5e0;
        case 0x1da5e4u: goto label_1da5e4;
        case 0x1da5e8u: goto label_1da5e8;
        case 0x1da5ecu: goto label_1da5ec;
        case 0x1da5f0u: goto label_1da5f0;
        case 0x1da5f4u: goto label_1da5f4;
        case 0x1da5f8u: goto label_1da5f8;
        case 0x1da5fcu: goto label_1da5fc;
        case 0x1da600u: goto label_1da600;
        case 0x1da604u: goto label_1da604;
        case 0x1da608u: goto label_1da608;
        case 0x1da60cu: goto label_1da60c;
        case 0x1da610u: goto label_1da610;
        case 0x1da614u: goto label_1da614;
        case 0x1da618u: goto label_1da618;
        case 0x1da61cu: goto label_1da61c;
        case 0x1da620u: goto label_1da620;
        case 0x1da624u: goto label_1da624;
        case 0x1da628u: goto label_1da628;
        case 0x1da62cu: goto label_1da62c;
        case 0x1da630u: goto label_1da630;
        case 0x1da634u: goto label_1da634;
        case 0x1da638u: goto label_1da638;
        case 0x1da63cu: goto label_1da63c;
        case 0x1da640u: goto label_1da640;
        case 0x1da644u: goto label_1da644;
        case 0x1da648u: goto label_1da648;
        case 0x1da64cu: goto label_1da64c;
        case 0x1da650u: goto label_1da650;
        case 0x1da654u: goto label_1da654;
        case 0x1da658u: goto label_1da658;
        case 0x1da65cu: goto label_1da65c;
        case 0x1da660u: goto label_1da660;
        case 0x1da664u: goto label_1da664;
        case 0x1da668u: goto label_1da668;
        case 0x1da66cu: goto label_1da66c;
        case 0x1da670u: goto label_1da670;
        case 0x1da674u: goto label_1da674;
        case 0x1da678u: goto label_1da678;
        case 0x1da67cu: goto label_1da67c;
        case 0x1da680u: goto label_1da680;
        case 0x1da684u: goto label_1da684;
        case 0x1da688u: goto label_1da688;
        case 0x1da68cu: goto label_1da68c;
        case 0x1da690u: goto label_1da690;
        case 0x1da694u: goto label_1da694;
        case 0x1da698u: goto label_1da698;
        case 0x1da69cu: goto label_1da69c;
        case 0x1da6a0u: goto label_1da6a0;
        case 0x1da6a4u: goto label_1da6a4;
        case 0x1da6a8u: goto label_1da6a8;
        case 0x1da6acu: goto label_1da6ac;
        case 0x1da6b0u: goto label_1da6b0;
        case 0x1da6b4u: goto label_1da6b4;
        case 0x1da6b8u: goto label_1da6b8;
        case 0x1da6bcu: goto label_1da6bc;
        case 0x1da6c0u: goto label_1da6c0;
        case 0x1da6c4u: goto label_1da6c4;
        case 0x1da6c8u: goto label_1da6c8;
        case 0x1da6ccu: goto label_1da6cc;
        case 0x1da6d0u: goto label_1da6d0;
        case 0x1da6d4u: goto label_1da6d4;
        case 0x1da6d8u: goto label_1da6d8;
        case 0x1da6dcu: goto label_1da6dc;
        case 0x1da6e0u: goto label_1da6e0;
        case 0x1da6e4u: goto label_1da6e4;
        case 0x1da6e8u: goto label_1da6e8;
        case 0x1da6ecu: goto label_1da6ec;
        case 0x1da6f0u: goto label_1da6f0;
        case 0x1da6f4u: goto label_1da6f4;
        case 0x1da6f8u: goto label_1da6f8;
        case 0x1da6fcu: goto label_1da6fc;
        case 0x1da700u: goto label_1da700;
        case 0x1da704u: goto label_1da704;
        case 0x1da708u: goto label_1da708;
        case 0x1da70cu: goto label_1da70c;
        case 0x1da710u: goto label_1da710;
        case 0x1da714u: goto label_1da714;
        case 0x1da718u: goto label_1da718;
        case 0x1da71cu: goto label_1da71c;
        case 0x1da720u: goto label_1da720;
        case 0x1da724u: goto label_1da724;
        case 0x1da728u: goto label_1da728;
        case 0x1da72cu: goto label_1da72c;
        case 0x1da730u: goto label_1da730;
        case 0x1da734u: goto label_1da734;
        case 0x1da738u: goto label_1da738;
        case 0x1da73cu: goto label_1da73c;
        case 0x1da740u: goto label_1da740;
        case 0x1da744u: goto label_1da744;
        case 0x1da748u: goto label_1da748;
        case 0x1da74cu: goto label_1da74c;
        case 0x1da750u: goto label_1da750;
        case 0x1da754u: goto label_1da754;
        case 0x1da758u: goto label_1da758;
        case 0x1da75cu: goto label_1da75c;
        case 0x1da760u: goto label_1da760;
        case 0x1da764u: goto label_1da764;
        case 0x1da768u: goto label_1da768;
        case 0x1da76cu: goto label_1da76c;
        case 0x1da770u: goto label_1da770;
        case 0x1da774u: goto label_1da774;
        case 0x1da778u: goto label_1da778;
        case 0x1da77cu: goto label_1da77c;
        case 0x1da780u: goto label_1da780;
        case 0x1da784u: goto label_1da784;
        case 0x1da788u: goto label_1da788;
        case 0x1da78cu: goto label_1da78c;
        case 0x1da790u: goto label_1da790;
        case 0x1da794u: goto label_1da794;
        case 0x1da798u: goto label_1da798;
        case 0x1da79cu: goto label_1da79c;
        case 0x1da7a0u: goto label_1da7a0;
        case 0x1da7a4u: goto label_1da7a4;
        case 0x1da7a8u: goto label_1da7a8;
        case 0x1da7acu: goto label_1da7ac;
        case 0x1da7b0u: goto label_1da7b0;
        case 0x1da7b4u: goto label_1da7b4;
        case 0x1da7b8u: goto label_1da7b8;
        case 0x1da7bcu: goto label_1da7bc;
        case 0x1da7c0u: goto label_1da7c0;
        case 0x1da7c4u: goto label_1da7c4;
        case 0x1da7c8u: goto label_1da7c8;
        case 0x1da7ccu: goto label_1da7cc;
        case 0x1da7d0u: goto label_1da7d0;
        case 0x1da7d4u: goto label_1da7d4;
        default: return;
    }

label_1da008:
    // 0x1da008: 0x8f848c80  lw          $a0, -0x7380($gp)
    ctx->pc = 0x1da008u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937728)));
label_1da00c:
    // 0x1da00c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1da00cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1da010:
    // 0x1da010: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1da010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1da014:
    // 0x1da014: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x1da014u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1da018:
    // 0x1da018: 0xc070e2c  jal         func_1C38B0
label_1da01c:
    if (ctx->pc == 0x1DA01Cu) {
        ctx->pc = 0x1DA01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA018u;
        // 0x1da01c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DA020u;
        goto label_1da020;
    }
    ctx->pc = 0x1DA018u;
    SET_GPR_U32(ctx, 31, 0x1DA020u);
    ctx->pc = 0x1DA01Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA018u;
    // 0x1da01c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C38B0u;
    { ctx->pc = 0x1c38b0; return; }
    ctx->pc = 0x1DA020u;
label_1da020:
    // 0x1da020: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1da020u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1da024:
    // 0x1da024: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1da024u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1da028:
    // 0x1da028: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x1da028u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_1da02c:
    // 0x1da02c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1da02cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1da030:
    // 0x1da030: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1da030u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1da034:
    // 0x1da034: 0xc066c72  jal         func_19B1C8
label_1da038:
    if (ctx->pc == 0x1DA038u) {
        ctx->pc = 0x1DA038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA034u;
        // 0x1da038: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DA03Cu;
        goto label_1da03c;
    }
    ctx->pc = 0x1DA034u;
    SET_GPR_U32(ctx, 31, 0x1DA03Cu);
    ctx->pc = 0x1DA038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA034u;
    // 0x1da038: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x1DA034u, 0x1DA03Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA03Cu;
label_1da03c:
    // 0x1da03c: 0x8f828c88  lw          $v0, -0x7378($gp)
    ctx->pc = 0x1da03cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937736)));
label_1da040:
    // 0x1da040: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_1da044:
    if (ctx->pc == 0x1DA044u) {
        ctx->pc = 0x1DA044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA040u;
        // 0x1da044: 0x3c017000  lui         $at, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DA048u;
        goto label_1da048;
    }
    ctx->pc = 0x1DA040u;
    {
        const bool branch_taken_0x1da040 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA040u;
        // 0x1da044: 0x3c017000  lui         $at, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da040) {
            ctx->pc = 0x1DA088u;
            goto label_1da088;
        }
    }
    ctx->pc = 0x1DA048u;
label_1da048:
    // 0x1da048: 0x3c02004b  lui         $v0, 0x4B
    ctx->pc = 0x1da048u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
label_1da04c:
    // 0x1da04c: 0x8c233ffc  lw          $v1, 0x3FFC($at)
    ctx->pc = 0x1da04cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_1da050:
    // 0x1da050: 0x24420548  addiu       $v0, $v0, 0x548
    ctx->pc = 0x1da050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1352));
label_1da054:
    // 0x1da054: 0x8f848c84  lw          $a0, -0x737C($gp)
    ctx->pc = 0x1da054u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937732)));
label_1da058:
    // 0x1da058: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1da058u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1da05c:
    // 0x1da05c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1da05cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1da060:
    // 0x1da060: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x1da060u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1da064:
    // 0x1da064: 0xc070e2c  jal         func_1C38B0
label_1da068:
    if (ctx->pc == 0x1DA068u) {
        ctx->pc = 0x1DA068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA064u;
        // 0x1da068: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DA06Cu;
        goto label_1da06c;
    }
    ctx->pc = 0x1DA064u;
    SET_GPR_U32(ctx, 31, 0x1DA06Cu);
    ctx->pc = 0x1DA068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA064u;
    // 0x1da068: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C38B0u;
    { ctx->pc = 0x1c38b0; return; }
    ctx->pc = 0x1DA06Cu;
label_1da06c:
    // 0x1da06c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1da06cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1da070:
    // 0x1da070: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1da070u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1da074:
    // 0x1da074: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x1da074u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_1da078:
    // 0x1da078: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1da078u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1da07c:
    // 0x1da07c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1da07cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1da080:
    // 0x1da080: 0xc066c72  jal         func_19B1C8
label_1da084:
    if (ctx->pc == 0x1DA084u) {
        ctx->pc = 0x1DA084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA080u;
        // 0x1da084: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DA088u;
        goto label_1da088;
    }
    ctx->pc = 0x1DA080u;
    SET_GPR_U32(ctx, 31, 0x1DA088u);
    ctx->pc = 0x1DA084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA080u;
    // 0x1da084: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x1DA080u, 0x1DA088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA088u;
label_1da088:
    // 0x1da088: 0xc07a86c  jal         func_1EA1B0
label_1da08c:
    if (ctx->pc == 0x1DA08Cu) {
        ctx->pc = 0x1DA090u;
        goto label_1da090;
    }
    ctx->pc = 0x1DA088u;
    SET_GPR_U32(ctx, 31, 0x1DA090u);
    ctx->pc = 0x1EA1B0u;
    { ctx->pc = 0x1ea1b0; return; }
    ctx->pc = 0x1DA090u;
label_1da090:
    // 0x1da090: 0xc04e120  jal         func_138480
label_1da094:
    if (ctx->pc == 0x1DA094u) {
        ctx->pc = 0x1DA098u;
        goto label_1da098;
    }
    ctx->pc = 0x1DA090u;
    SET_GPR_U32(ctx, 31, 0x1DA098u);
    ctx->pc = 0x138480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138480u, 0x1DA090u, 0x1DA098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA098u;
label_1da098:
    // 0x1da098: 0xc05b578  jal         func_16D5E0
label_1da09c:
    if (ctx->pc == 0x1DA09Cu) {
        ctx->pc = 0x1DA09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA098u;
        // 0x1da09c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DA0A0u;
        goto label_1da0a0;
    }
    ctx->pc = 0x1DA098u;
    SET_GPR_U32(ctx, 31, 0x1DA0A0u);
    ctx->pc = 0x1DA09Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA098u;
    // 0x1da09c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D5E0u, 0x1DA098u, 0x1DA0A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA0A0u;
label_1da0a0:
    // 0x1da0a0: 0xc060258  jal         func_180960
label_1da0a4:
    if (ctx->pc == 0x1DA0A4u) {
        ctx->pc = 0x1DA0A8u;
        goto label_1da0a8;
    }
    ctx->pc = 0x1DA0A0u;
    SET_GPR_U32(ctx, 31, 0x1DA0A8u);
    ctx->pc = 0x180960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180960u, 0x1DA0A0u, 0x1DA0A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA0A8u;
label_1da0a8:
    // 0x1da0a8: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1da0a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1da0ac:
    // 0x1da0ac: 0xaf908cd4  sw          $s0, -0x732C($gp)
    ctx->pc = 0x1da0acu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937812), GPR_U32(ctx, 16));
label_1da0b0:
    // 0x1da0b0: 0xaf908cc4  sw          $s0, -0x733C($gp)
    ctx->pc = 0x1da0b0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937796), GPR_U32(ctx, 16));
label_1da0b4:
    // 0x1da0b4: 0xaf908ca4  sw          $s0, -0x735C($gp)
    ctx->pc = 0x1da0b4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937764), GPR_U32(ctx, 16));
label_1da0b8:
    // 0x1da0b8: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x1da0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_1da0bc:
    // 0x1da0bc: 0x24030168  addiu       $v1, $zero, 0x168
    ctx->pc = 0x1da0bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 360));
label_1da0c0:
    // 0x1da0c0: 0x502023  subu        $a0, $v0, $s0
    ctx->pc = 0x1da0c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_1da0c4:
    // 0x1da0c4: 0x8f868208  lw          $a2, -0x7DF8($gp)
    ctx->pc = 0x1da0c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935048)));
label_1da0c8:
    // 0x1da0c8: 0x3c022aaa  lui         $v0, 0x2AAA
    ctx->pc = 0x1da0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10922 << 16));
label_1da0cc:
    // 0x1da0cc: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1da0ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1da0d0:
    // 0x1da0d0: 0x344baaab  ori         $t3, $v0, 0xAAAB
    ctx->pc = 0x1da0d0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43691);
label_1da0d4:
    // 0x1da0d4: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x1da0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1da0d8:
    // 0x1da0d8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1da0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1da0dc:
    // 0x1da0dc: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x1da0dcu;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1da0e0:
    // 0x1da0e0: 0x24980  sll         $t1, $v0, 6
    ctx->pc = 0x1da0e0u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_1da0e4:
    // 0x1da0e4: 0x957c2  srl         $t2, $t1, 31
    ctx->pc = 0x1da0e4u;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 9), 31));
label_1da0e8:
    // 0x1da0e8: 0x2810  mfhi        $a1
    ctx->pc = 0x1da0e8u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_1da0ec:
    // 0x1da0ec: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x1da0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_1da0f0:
    // 0x1da0f0: 0x441823  subu        $v1, $v0, $a0
    ctx->pc = 0x1da0f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1da0f4:
    // 0x1da0f4: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x1da0f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_1da0f8:
    // 0x1da0f8: 0x8f82820c  lw          $v0, -0x7DF4($gp)
    ctx->pc = 0x1da0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935052)));
label_1da0fc:
    // 0x1da0fc: 0x1690018  mult        $zero, $t3, $t1
    ctx->pc = 0x1da0fcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1da100:
    // 0x1da100: 0x33fc2  srl         $a3, $v1, 31
    ctx->pc = 0x1da100u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
label_1da104:
    // 0x1da104: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1da104u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1da108:
    // 0x1da108: 0x4810  mfhi        $t1
    ctx->pc = 0x1da108u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_1da10c:
    // 0x1da10c: 0x1630018  mult        $zero, $t3, $v1
    ctx->pc = 0x1da10cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1da110:
    // 0x1da110: 0x918c3  sra         $v1, $t1, 3
    ctx->pc = 0x1da110u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 9), 3));
label_1da114:
    // 0x1da114: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x1da114u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
label_1da118:
    // 0x1da118: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x1da118u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_1da11c:
    // 0x1da11c: 0x1810  mfhi        $v1
    ctx->pc = 0x1da11cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_1da120:
    // 0x1da120: 0x318c3  sra         $v1, $v1, 3
    ctx->pc = 0x1da120u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 3));
label_1da124:
    // 0x1da124: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x1da124u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_1da128:
    // 0x1da128: 0xc077b70  jal         func_1DEDC0
label_1da12c:
    if (ctx->pc == 0x1DA12Cu) {
        ctx->pc = 0x1DA12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA128u;
        // 0x1da12c: 0x433821  addu        $a3, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DA130u;
        goto label_1da130;
    }
    ctx->pc = 0x1DA128u;
    SET_GPR_U32(ctx, 31, 0x1DA130u);
    ctx->pc = 0x1DA12Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA128u;
    // 0x1da12c: 0x433821  addu        $a3, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DEDC0u;
    { ctx->pc = 0x1dedc0; return; }
    ctx->pc = 0x1DA130u;
label_1da130:
    // 0x1da130: 0xdf8287d0  ld          $v0, -0x7830($gp)
    ctx->pc = 0x1da130u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294936528)));
label_1da134:
    // 0x1da134: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1da138:
    if (ctx->pc == 0x1DA138u) {
        ctx->pc = 0x1DA13Cu;
        goto label_1da13c;
    }
    ctx->pc = 0x1DA134u;
    {
        const bool branch_taken_0x1da134 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1da134) {
            ctx->pc = 0x1DA144u;
            goto label_1da144;
        }
    }
    ctx->pc = 0x1DA13Cu;
label_1da13c:
    // 0x1da13c: 0x10000005  b           . + 4 + (0x5 << 2)
label_1da140:
    if (ctx->pc == 0x1DA140u) {
        ctx->pc = 0x1DA140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA13Cu;
        // 0x1da140: 0xaf808cf4  sw          $zero, -0x730C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937844), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DA144u;
        goto label_1da144;
    }
    ctx->pc = 0x1DA13Cu;
    {
        const bool branch_taken_0x1da13c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA13Cu;
        // 0x1da140: 0xaf808cf4  sw          $zero, -0x730C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937844), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da13c) {
            ctx->pc = 0x1DA154u;
            goto label_1da154;
        }
    }
    ctx->pc = 0x1DA144u;
label_1da144:
    // 0x1da144: 0x0  nop
    ctx->pc = 0x1da144u;
    // NOP
label_1da148:
    // 0x1da148: 0x8f828cf4  lw          $v0, -0x730C($gp)
    ctx->pc = 0x1da148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937844)));
label_1da14c:
    // 0x1da14c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1da14cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1da150:
    // 0x1da150: 0xaf828cf4  sw          $v0, -0x730C($gp)
    ctx->pc = 0x1da150u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937844), GPR_U32(ctx, 2));
label_1da154:
    // 0x1da154: 0x0  nop
    ctx->pc = 0x1da154u;
    // NOP
label_1da158:
    // 0x1da158: 0x8f828cd4  lw          $v0, -0x732C($gp)
    ctx->pc = 0x1da158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937812)));
label_1da15c:
    // 0x1da15c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1da160:
    if (ctx->pc == 0x1DA160u) {
        ctx->pc = 0x1DA164u;
        goto label_1da164;
    }
    ctx->pc = 0x1DA15Cu;
    {
        const bool branch_taken_0x1da15c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1da15c) {
            ctx->pc = 0x1DA170u;
            goto label_1da170;
        }
    }
    ctx->pc = 0x1DA164u;
label_1da164:
    // 0x1da164: 0x8f828cd0  lw          $v0, -0x7330($gp)
    ctx->pc = 0x1da164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937808)));
label_1da168:
    // 0x1da168: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1da168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1da16c:
    // 0x1da16c: 0xaf828cd0  sw          $v0, -0x7330($gp)
    ctx->pc = 0x1da16cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937808), GPR_U32(ctx, 2));
label_1da170:
    // 0x1da170: 0x8f828cc4  lw          $v0, -0x733C($gp)
    ctx->pc = 0x1da170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937796)));
label_1da174:
    // 0x1da174: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_1da178:
    if (ctx->pc == 0x1DA178u) {
        ctx->pc = 0x1DA17Cu;
        goto label_1da17c;
    }
    ctx->pc = 0x1DA174u;
    {
        const bool branch_taken_0x1da174 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1da174) {
            ctx->pc = 0x1DA1D8u;
            goto label_1da1d8;
        }
    }
    ctx->pc = 0x1DA17Cu;
label_1da17c:
    // 0x1da17c: 0x8f828cc0  lw          $v0, -0x7340($gp)
    ctx->pc = 0x1da17cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937792)));
label_1da180:
    // 0x1da180: 0x28410080  slti        $at, $v0, 0x80
    ctx->pc = 0x1da180u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)128) ? 1 : 0);
label_1da184:
    // 0x1da184: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
label_1da188:
    if (ctx->pc == 0x1DA188u) {
        ctx->pc = 0x1DA18Cu;
        goto label_1da18c;
    }
    ctx->pc = 0x1DA184u;
    {
        const bool branch_taken_0x1da184 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1da184) {
            ctx->pc = 0x1DA1ACu;
            goto label_1da1ac;
        }
    }
    ctx->pc = 0x1DA18Cu;
label_1da18c:
    // 0x1da18c: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x1da18cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
label_1da190:
    // 0x1da190: 0x28410080  slti        $at, $v0, 0x80
    ctx->pc = 0x1da190u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)128) ? 1 : 0);
label_1da194:
    // 0x1da194: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_1da198:
    if (ctx->pc == 0x1DA198u) {
        ctx->pc = 0x1DA19Cu;
        goto label_1da19c;
    }
    ctx->pc = 0x1DA194u;
    {
        const bool branch_taken_0x1da194 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1da194) {
            ctx->pc = 0x1DA1A4u;
            goto label_1da1a4;
        }
    }
    ctx->pc = 0x1DA19Cu;
label_1da19c:
    // 0x1da19c: 0x10000003  b           . + 4 + (0x3 << 2)
label_1da1a0:
    if (ctx->pc == 0x1DA1A0u) {
        ctx->pc = 0x1DA1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA19Cu;
        // 0x1da1a0: 0xaf828cc0  sw          $v0, -0x7340($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937792), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DA1A4u;
        goto label_1da1a4;
    }
    ctx->pc = 0x1DA19Cu;
    {
        const bool branch_taken_0x1da19c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA19Cu;
        // 0x1da1a0: 0xaf828cc0  sw          $v0, -0x7340($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937792), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da19c) {
            ctx->pc = 0x1DA1ACu;
            goto label_1da1ac;
        }
    }
    ctx->pc = 0x1DA1A4u;
label_1da1a4:
    // 0x1da1a4: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1da1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1da1a8:
    // 0x1da1a8: 0xaf828cc0  sw          $v0, -0x7340($gp)
    ctx->pc = 0x1da1a8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937792), GPR_U32(ctx, 2));
label_1da1ac:
    // 0x1da1ac: 0x0  nop
    ctx->pc = 0x1da1acu;
    // NOP
label_1da1b0:
    // 0x1da1b0: 0x8f828cb0  lw          $v0, -0x7350($gp)
    ctx->pc = 0x1da1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
label_1da1b4:
    // 0x1da1b4: 0x18400008  blez        $v0, . + 4 + (0x8 << 2)
label_1da1b8:
    if (ctx->pc == 0x1DA1B8u) {
        ctx->pc = 0x1DA1BCu;
        goto label_1da1bc;
    }
    ctx->pc = 0x1DA1B4u;
    {
        const bool branch_taken_0x1da1b4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1da1b4) {
            ctx->pc = 0x1DA1D8u;
            goto label_1da1d8;
        }
    }
    ctx->pc = 0x1DA1BCu;
label_1da1bc:
    // 0x1da1bc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1da1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1da1c0:
    // 0x1da1c0: 0xaf828cb0  sw          $v0, -0x7350($gp)
    ctx->pc = 0x1da1c0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937776), GPR_U32(ctx, 2));
label_1da1c4:
    // 0x1da1c4: 0x8f828cb0  lw          $v0, -0x7350($gp)
    ctx->pc = 0x1da1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
label_1da1c8:
    // 0x1da1c8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1da1cc:
    if (ctx->pc == 0x1DA1CCu) {
        ctx->pc = 0x1DA1D0u;
        goto label_1da1d0;
    }
    ctx->pc = 0x1DA1C8u;
    {
        const bool branch_taken_0x1da1c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1da1c8) {
            ctx->pc = 0x1DA1D8u;
            goto label_1da1d8;
        }
    }
    ctx->pc = 0x1DA1D0u;
label_1da1d0:
    // 0x1da1d0: 0x8f828ca8  lw          $v0, -0x7358($gp)
    ctx->pc = 0x1da1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937768)));
label_1da1d4:
    // 0x1da1d4: 0xaf828cb4  sw          $v0, -0x734C($gp)
    ctx->pc = 0x1da1d4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937780), GPR_U32(ctx, 2));
label_1da1d8:
    // 0x1da1d8: 0xc077a7c  jal         func_1DE9F0
label_1da1dc:
    if (ctx->pc == 0x1DA1DCu) {
        ctx->pc = 0x1DA1E0u;
        goto label_1da1e0;
    }
    ctx->pc = 0x1DA1D8u;
    SET_GPR_U32(ctx, 31, 0x1DA1E0u);
    ctx->pc = 0x1DE9F0u;
    { ctx->pc = 0x1de9f0; return; }
    ctx->pc = 0x1DA1E0u;
label_1da1e0:
    // 0x1da1e0: 0x8f848ca0  lw          $a0, -0x7360($gp)
    ctx->pc = 0x1da1e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937760)));
label_1da1e4:
    // 0x1da1e4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1da1e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1da1e8:
    // 0x1da1e8: 0x10830020  beq         $a0, $v1, . + 4 + (0x20 << 2)
label_1da1ec:
    if (ctx->pc == 0x1DA1ECu) {
        ctx->pc = 0x1DA1F0u;
        goto label_1da1f0;
    }
    ctx->pc = 0x1DA1E8u;
    {
        const bool branch_taken_0x1da1e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1da1e8) {
            ctx->pc = 0x1DA26Cu;
            goto label_1da26c;
        }
    }
    ctx->pc = 0x1DA1F0u;
label_1da1f0:
    // 0x1da1f0: 0x8f828c9c  lw          $v0, -0x7364($gp)
    ctx->pc = 0x1da1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937756)));
label_1da1f4:
    // 0x1da1f4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1da1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1da1f8:
    // 0x1da1f8: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
label_1da1fc:
    if (ctx->pc == 0x1DA1FCu) {
        ctx->pc = 0x1DA1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA1F8u;
        // 0x1da1fc: 0xaf828c9c  sw          $v0, -0x7364($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937756), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DA200u;
        goto label_1da200;
    }
    ctx->pc = 0x1DA1F8u;
    {
        const bool branch_taken_0x1da1f8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DA1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA1F8u;
        // 0x1da1fc: 0xaf828c9c  sw          $v0, -0x7364($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937756), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da1f8) {
            ctx->pc = 0x1DA21Cu;
            goto label_1da21c;
        }
    }
    ctx->pc = 0x1DA200u;
label_1da200:
    // 0x1da200: 0x8f828c9c  lw          $v0, -0x7364($gp)
    ctx->pc = 0x1da200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937756)));
label_1da204:
    // 0x1da204: 0x28420010  slti        $v0, $v0, 0x10
    ctx->pc = 0x1da204u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16) ? 1 : 0);
label_1da208:
    // 0x1da208: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
label_1da20c:
    if (ctx->pc == 0x1DA20Cu) {
        ctx->pc = 0x1DA20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA208u;
        // 0x1da20c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DA210u;
        goto label_1da210;
    }
    ctx->pc = 0x1DA208u;
    {
        const bool branch_taken_0x1da208 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DA20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA208u;
        // 0x1da20c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da208) {
            ctx->pc = 0x1DA26Cu;
            goto label_1da26c;
        }
    }
    ctx->pc = 0x1DA210u;
label_1da210:
    // 0x1da210: 0xaf808c9c  sw          $zero, -0x7364($gp)
    ctx->pc = 0x1da210u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937756), GPR_U32(ctx, 0));
label_1da214:
    // 0x1da214: 0x10000015  b           . + 4 + (0x15 << 2)
label_1da218:
    if (ctx->pc == 0x1DA218u) {
        ctx->pc = 0x1DA218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA214u;
        // 0x1da218: 0xaf828ca0  sw          $v0, -0x7360($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937760), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DA21Cu;
        goto label_1da21c;
    }
    ctx->pc = 0x1DA214u;
    {
        const bool branch_taken_0x1da214 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA214u;
        // 0x1da218: 0xaf828ca0  sw          $v0, -0x7360($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937760), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da214) {
            ctx->pc = 0x1DA26Cu;
            goto label_1da26c;
        }
    }
    ctx->pc = 0x1DA21Cu;
label_1da21c:
    // 0x1da21c: 0x0  nop
    ctx->pc = 0x1da21cu;
    // NOP
label_1da220:
    // 0x1da220: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1da220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1da224:
    // 0x1da224: 0x14820008  bne         $a0, $v0, . + 4 + (0x8 << 2)
label_1da228:
    if (ctx->pc == 0x1DA228u) {
        ctx->pc = 0x1DA22Cu;
        goto label_1da22c;
    }
    ctx->pc = 0x1DA224u;
    {
        const bool branch_taken_0x1da224 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x1da224) {
            ctx->pc = 0x1DA248u;
            goto label_1da248;
        }
    }
    ctx->pc = 0x1DA22Cu;
label_1da22c:
    // 0x1da22c: 0x8f828c9c  lw          $v0, -0x7364($gp)
    ctx->pc = 0x1da22cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937756)));
label_1da230:
    // 0x1da230: 0x28420030  slti        $v0, $v0, 0x30
    ctx->pc = 0x1da230u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)48) ? 1 : 0);
label_1da234:
    // 0x1da234: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_1da238:
    if (ctx->pc == 0x1DA238u) {
        ctx->pc = 0x1DA238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA234u;
        // 0x1da238: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DA23Cu;
        goto label_1da23c;
    }
    ctx->pc = 0x1DA234u;
    {
        const bool branch_taken_0x1da234 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DA238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA234u;
        // 0x1da238: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da234) {
            ctx->pc = 0x1DA26Cu;
            goto label_1da26c;
        }
    }
    ctx->pc = 0x1DA23Cu;
label_1da23c:
    // 0x1da23c: 0xaf808c9c  sw          $zero, -0x7364($gp)
    ctx->pc = 0x1da23cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937756), GPR_U32(ctx, 0));
label_1da240:
    // 0x1da240: 0x1000000a  b           . + 4 + (0xA << 2)
label_1da244:
    if (ctx->pc == 0x1DA244u) {
        ctx->pc = 0x1DA244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA240u;
        // 0x1da244: 0xaf828ca0  sw          $v0, -0x7360($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937760), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DA248u;
        goto label_1da248;
    }
    ctx->pc = 0x1DA240u;
    {
        const bool branch_taken_0x1da240 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA240u;
        // 0x1da244: 0xaf828ca0  sw          $v0, -0x7360($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937760), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da240) {
            ctx->pc = 0x1DA26Cu;
            goto label_1da26c;
        }
    }
    ctx->pc = 0x1DA248u;
label_1da248:
    // 0x1da248: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1da248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1da24c:
    // 0x1da24c: 0x14820007  bne         $a0, $v0, . + 4 + (0x7 << 2)
label_1da250:
    if (ctx->pc == 0x1DA250u) {
        ctx->pc = 0x1DA254u;
        goto label_1da254;
    }
    ctx->pc = 0x1DA24Cu;
    {
        const bool branch_taken_0x1da24c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x1da24c) {
            ctx->pc = 0x1DA26Cu;
            goto label_1da26c;
        }
    }
    ctx->pc = 0x1DA254u;
label_1da254:
    // 0x1da254: 0x8f828c9c  lw          $v0, -0x7364($gp)
    ctx->pc = 0x1da254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937756)));
label_1da258:
    // 0x1da258: 0x28420008  slti        $v0, $v0, 0x8
    ctx->pc = 0x1da258u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
label_1da25c:
    // 0x1da25c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1da260:
    if (ctx->pc == 0x1DA260u) {
        ctx->pc = 0x1DA264u;
        goto label_1da264;
    }
    ctx->pc = 0x1DA25Cu;
    {
        const bool branch_taken_0x1da25c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1da25c) {
            ctx->pc = 0x1DA26Cu;
            goto label_1da26c;
        }
    }
    ctx->pc = 0x1DA264u;
label_1da264:
    // 0x1da264: 0xaf838ca0  sw          $v1, -0x7360($gp)
    ctx->pc = 0x1da264u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937760), GPR_U32(ctx, 3));
label_1da268:
    // 0x1da268: 0xaf808c9c  sw          $zero, -0x7364($gp)
    ctx->pc = 0x1da268u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937756), GPR_U32(ctx, 0));
label_1da26c:
    // 0x1da26c: 0x0  nop
    ctx->pc = 0x1da26cu;
    // NOP
label_1da270:
    // 0x1da270: 0xc07a9d8  jal         func_1EA760
label_1da274:
    if (ctx->pc == 0x1DA274u) {
        ctx->pc = 0x1DA278u;
        goto label_1da278;
    }
    ctx->pc = 0x1DA270u;
    SET_GPR_U32(ctx, 31, 0x1DA278u);
    ctx->pc = 0x1EA760u;
    { ctx->pc = 0x1ea760; return; }
    ctx->pc = 0x1DA278u;
label_1da278:
    // 0x1da278: 0xc04e168  jal         func_1385A0
label_1da27c:
    if (ctx->pc == 0x1DA27Cu) {
        ctx->pc = 0x1DA280u;
        goto label_1da280;
    }
    ctx->pc = 0x1DA278u;
    SET_GPR_U32(ctx, 31, 0x1DA280u);
    ctx->pc = 0x1385A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1385A0u, 0x1DA278u, 0x1DA280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA280u;
label_1da280:
    // 0x1da280: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1da280u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_1da284:
    // 0x1da284: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x1da284u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
label_1da288:
    // 0x1da288: 0x8c233ffc  lw          $v1, 0x3FFC($at)
    ctx->pc = 0x1da288u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_1da28c:
    // 0x1da28c: 0x24841e00  addiu       $a0, $a0, 0x1E00
    ctx->pc = 0x1da28cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7680));
label_1da290:
    // 0x1da290: 0x27828ce0  addiu       $v0, $gp, -0x7320
    ctx->pc = 0x1da290u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937824));
label_1da294:
    // 0x1da294: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x1da294u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_1da298:
    // 0x1da298: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1da298u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1da29c:
    // 0x1da29c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1da29cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1da2a0:
    // 0x1da2a0: 0x32940  sll         $a1, $v1, 5
    ctx->pc = 0x1da2a0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_1da2a4:
    // 0x1da2a4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1da2a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1da2a8:
    // 0x1da2a8: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1da2a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1da2ac:
    // 0x1da2ac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1da2acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1da2b0:
    // 0x1da2b0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1da2b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1da2b4:
    // 0x1da2b4: 0xc066c72  jal         func_19B1C8
label_1da2b8:
    if (ctx->pc == 0x1DA2B8u) {
        ctx->pc = 0x1DA2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA2B4u;
        // 0x1da2b8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DA2BCu;
        goto label_1da2bc;
    }
    ctx->pc = 0x1DA2B4u;
    SET_GPR_U32(ctx, 31, 0x1DA2BCu);
    ctx->pc = 0x1DA2B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA2B4u;
    // 0x1da2b8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x1DA2B4u, 0x1DA2BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA2BCu;
label_1da2bc:
    // 0x1da2bc: 0xc077e84  jal         func_1DFA10
label_1da2c0:
    if (ctx->pc == 0x1DA2C0u) {
        ctx->pc = 0x1DA2C4u;
        goto label_1da2c4;
    }
    ctx->pc = 0x1DA2BCu;
    SET_GPR_U32(ctx, 31, 0x1DA2C4u);
    ctx->pc = 0x1DFA10u;
    { ctx->pc = 0x1dfa10; return; }
    ctx->pc = 0x1DA2C4u;
label_1da2c4:
    // 0x1da2c4: 0xc077d90  jal         func_1DF640
label_1da2c8:
    if (ctx->pc == 0x1DA2C8u) {
        ctx->pc = 0x1DA2CCu;
        goto label_1da2cc;
    }
    ctx->pc = 0x1DA2C4u;
    SET_GPR_U32(ctx, 31, 0x1DA2CCu);
    ctx->pc = 0x1DF640u;
    { ctx->pc = 0x1df640; return; }
    ctx->pc = 0x1DA2CCu;
label_1da2cc:
    // 0x1da2cc: 0xc077ab4  jal         func_1DEAD0
label_1da2d0:
    if (ctx->pc == 0x1DA2D0u) {
        ctx->pc = 0x1DA2D4u;
        goto label_1da2d4;
    }
    ctx->pc = 0x1DA2CCu;
    SET_GPR_U32(ctx, 31, 0x1DA2D4u);
    ctx->pc = 0x1DEAD0u;
    { ctx->pc = 0x1dead0; return; }
    ctx->pc = 0x1DA2D4u;
label_1da2d4:
    // 0x1da2d4: 0xc077880  jal         func_1DE200
label_1da2d8:
    if (ctx->pc == 0x1DA2D8u) {
        ctx->pc = 0x1DA2DCu;
        goto label_1da2dc;
    }
    ctx->pc = 0x1DA2D4u;
    SET_GPR_U32(ctx, 31, 0x1DA2DCu);
    ctx->pc = 0x1DE200u;
    { ctx->pc = 0x1de200; return; }
    ctx->pc = 0x1DA2DCu;
label_1da2dc:
    // 0x1da2dc: 0x8f828c8c  lw          $v0, -0x7374($gp)
    ctx->pc = 0x1da2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937740)));
label_1da2e0:
    // 0x1da2e0: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
label_1da2e4:
    if (ctx->pc == 0x1DA2E4u) {
        ctx->pc = 0x1DA2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA2E0u;
        // 0x1da2e4: 0x3c017000  lui         $at, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DA2E8u;
        goto label_1da2e8;
    }
    ctx->pc = 0x1DA2E0u;
    {
        const bool branch_taken_0x1da2e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA2E0u;
        // 0x1da2e4: 0x3c017000  lui         $at, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da2e0) {
            ctx->pc = 0x1DA3B4u;
            goto label_1da3b4;
        }
    }
    ctx->pc = 0x1DA2E8u;
label_1da2e8:
    // 0x1da2e8: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x1da2e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
label_1da2ec:
    // 0x1da2ec: 0x8c233ffc  lw          $v1, 0x3FFC($at)
    ctx->pc = 0x1da2ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_1da2f0:
    // 0x1da2f0: 0x24841e00  addiu       $a0, $a0, 0x1E00
    ctx->pc = 0x1da2f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7680));
label_1da2f4:
    // 0x1da2f4: 0x27828c90  addiu       $v0, $gp, -0x7370
    ctx->pc = 0x1da2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937744));
label_1da2f8:
    // 0x1da2f8: 0x2406027a  addiu       $a2, $zero, 0x27A
    ctx->pc = 0x1da2f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 634));
label_1da2fc:
    // 0x1da2fc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1da2fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1da300:
    // 0x1da300: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1da300u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1da304:
    // 0x1da304: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1da304u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1da308:
    // 0x1da308: 0x32940  sll         $a1, $v1, 5
    ctx->pc = 0x1da308u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_1da30c:
    // 0x1da30c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1da30cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1da310:
    // 0x1da310: 0x858821  addu        $s1, $a0, $a1
    ctx->pc = 0x1da310u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1da314:
    // 0x1da314: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1da314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1da318:
    // 0x1da318: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1da318u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1da31c:
    // 0x1da31c: 0xc066c72  jal         func_19B1C8
label_1da320:
    if (ctx->pc == 0x1DA320u) {
        ctx->pc = 0x1DA320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA31Cu;
        // 0x1da320: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DA324u;
        goto label_1da324;
    }
    ctx->pc = 0x1DA31Cu;
    SET_GPR_U32(ctx, 31, 0x1DA324u);
    ctx->pc = 0x1DA320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA31Cu;
    // 0x1da320: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x1DA31Cu, 0x1DA324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA324u;
label_1da324:
    // 0x1da324: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1da324u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_1da328:
    // 0x1da328: 0x3c02004b  lui         $v0, 0x4B
    ctx->pc = 0x1da328u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
label_1da32c:
    // 0x1da32c: 0x8c233ffc  lw          $v1, 0x3FFC($at)
    ctx->pc = 0x1da32cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_1da330:
    // 0x1da330: 0x24420540  addiu       $v0, $v0, 0x540
    ctx->pc = 0x1da330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1344));
label_1da334:
    // 0x1da334: 0x8f848c80  lw          $a0, -0x7380($gp)
    ctx->pc = 0x1da334u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937728)));
label_1da338:
    // 0x1da338: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1da338u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1da33c:
    // 0x1da33c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1da33cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1da340:
    // 0x1da340: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x1da340u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1da344:
    // 0x1da344: 0xc070e2c  jal         func_1C38B0
label_1da348:
    if (ctx->pc == 0x1DA348u) {
        ctx->pc = 0x1DA348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA344u;
        // 0x1da348: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DA34Cu;
        goto label_1da34c;
    }
    ctx->pc = 0x1DA344u;
    SET_GPR_U32(ctx, 31, 0x1DA34Cu);
    ctx->pc = 0x1DA348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA344u;
    // 0x1da348: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C38B0u;
    { ctx->pc = 0x1c38b0; return; }
    ctx->pc = 0x1DA34Cu;
label_1da34c:
    // 0x1da34c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1da34cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1da350:
    // 0x1da350: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1da350u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1da354:
    // 0x1da354: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x1da354u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_1da358:
    // 0x1da358: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1da358u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1da35c:
    // 0x1da35c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1da35cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1da360:
    // 0x1da360: 0xc066c72  jal         func_19B1C8
label_1da364:
    if (ctx->pc == 0x1DA364u) {
        ctx->pc = 0x1DA364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA360u;
        // 0x1da364: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DA368u;
        goto label_1da368;
    }
    ctx->pc = 0x1DA360u;
    SET_GPR_U32(ctx, 31, 0x1DA368u);
    ctx->pc = 0x1DA364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA360u;
    // 0x1da364: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x1DA360u, 0x1DA368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA368u;
label_1da368:
    // 0x1da368: 0x8f828c88  lw          $v0, -0x7378($gp)
    ctx->pc = 0x1da368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937736)));
label_1da36c:
    // 0x1da36c: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_1da370:
    if (ctx->pc == 0x1DA370u) {
        ctx->pc = 0x1DA370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA36Cu;
        // 0x1da370: 0x3c017000  lui         $at, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DA374u;
        goto label_1da374;
    }
    ctx->pc = 0x1DA36Cu;
    {
        const bool branch_taken_0x1da36c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA36Cu;
        // 0x1da370: 0x3c017000  lui         $at, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da36c) {
            ctx->pc = 0x1DA3B4u;
            goto label_1da3b4;
        }
    }
    ctx->pc = 0x1DA374u;
label_1da374:
    // 0x1da374: 0x3c02004b  lui         $v0, 0x4B
    ctx->pc = 0x1da374u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
label_1da378:
    // 0x1da378: 0x8c233ffc  lw          $v1, 0x3FFC($at)
    ctx->pc = 0x1da378u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_1da37c:
    // 0x1da37c: 0x24420540  addiu       $v0, $v0, 0x540
    ctx->pc = 0x1da37cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1344));
label_1da380:
    // 0x1da380: 0x8f848c84  lw          $a0, -0x737C($gp)
    ctx->pc = 0x1da380u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937732)));
label_1da384:
    // 0x1da384: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1da384u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1da388:
    // 0x1da388: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1da388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1da38c:
    // 0x1da38c: 0x8c530008  lw          $s3, 0x8($v0)
    ctx->pc = 0x1da38cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1da390:
    // 0x1da390: 0xc070e2c  jal         func_1C38B0
label_1da394:
    if (ctx->pc == 0x1DA394u) {
        ctx->pc = 0x1DA394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA390u;
        // 0x1da394: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DA398u;
        goto label_1da398;
    }
    ctx->pc = 0x1DA390u;
    SET_GPR_U32(ctx, 31, 0x1DA398u);
    ctx->pc = 0x1DA394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA390u;
    // 0x1da394: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C38B0u;
    { ctx->pc = 0x1c38b0; return; }
    ctx->pc = 0x1DA398u;
label_1da398:
    // 0x1da398: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1da398u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1da39c:
    // 0x1da39c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1da39cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1da3a0:
    // 0x1da3a0: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x1da3a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_1da3a4:
    // 0x1da3a4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1da3a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1da3a8:
    // 0x1da3a8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1da3a8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1da3ac:
    // 0x1da3ac: 0xc066c72  jal         func_19B1C8
label_1da3b0:
    if (ctx->pc == 0x1DA3B0u) {
        ctx->pc = 0x1DA3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA3ACu;
        // 0x1da3b0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DA3B4u;
        goto label_1da3b4;
    }
    ctx->pc = 0x1DA3ACu;
    SET_GPR_U32(ctx, 31, 0x1DA3B4u);
    ctx->pc = 0x1DA3B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA3ACu;
    // 0x1da3b0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x1DA3ACu, 0x1DA3B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA3B4u;
label_1da3b4:
    // 0x1da3b4: 0x0  nop
    ctx->pc = 0x1da3b4u;
    // NOP
label_1da3b8:
    // 0x1da3b8: 0xc07a86c  jal         func_1EA1B0
label_1da3bc:
    if (ctx->pc == 0x1DA3BCu) {
        ctx->pc = 0x1DA3C0u;
        goto label_1da3c0;
    }
    ctx->pc = 0x1DA3B8u;
    SET_GPR_U32(ctx, 31, 0x1DA3C0u);
    ctx->pc = 0x1EA1B0u;
    { ctx->pc = 0x1ea1b0; return; }
    ctx->pc = 0x1DA3C0u;
label_1da3c0:
    // 0x1da3c0: 0xc04e120  jal         func_138480
label_1da3c4:
    if (ctx->pc == 0x1DA3C4u) {
        ctx->pc = 0x1DA3C8u;
        goto label_1da3c8;
    }
    ctx->pc = 0x1DA3C0u;
    SET_GPR_U32(ctx, 31, 0x1DA3C8u);
    ctx->pc = 0x138480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138480u, 0x1DA3C0u, 0x1DA3C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA3C8u;
label_1da3c8:
    // 0x1da3c8: 0xc05b578  jal         func_16D5E0
label_1da3cc:
    if (ctx->pc == 0x1DA3CCu) {
        ctx->pc = 0x1DA3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA3C8u;
        // 0x1da3cc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DA3D0u;
        goto label_1da3d0;
    }
    ctx->pc = 0x1DA3C8u;
    SET_GPR_U32(ctx, 31, 0x1DA3D0u);
    ctx->pc = 0x1DA3CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA3C8u;
    // 0x1da3cc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D5E0u, 0x1DA3C8u, 0x1DA3D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA3D0u;
label_1da3d0:
    // 0x1da3d0: 0xc060258  jal         func_180960
label_1da3d4:
    if (ctx->pc == 0x1DA3D4u) {
        ctx->pc = 0x1DA3D8u;
        goto label_1da3d8;
    }
    ctx->pc = 0x1DA3D0u;
    SET_GPR_U32(ctx, 31, 0x1DA3D8u);
    ctx->pc = 0x180960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180960u, 0x1DA3D0u, 0x1DA3D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA3D8u;
label_1da3d8:
    // 0x1da3d8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1da3d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1da3dc:
    // 0x1da3dc: 0x2a010031  slti        $at, $s0, 0x31
    ctx->pc = 0x1da3dcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)49) ? 1 : 0);
label_1da3e0:
    // 0x1da3e0: 0x1420ff35  bnez        $at, . + 4 + (-0xCB << 2)
label_1da3e4:
    if (ctx->pc == 0x1DA3E4u) {
        ctx->pc = 0x1DA3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA3E0u;
        // 0x1da3e4: 0x3c03004b  lui         $v1, 0x4B (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)75 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DA3E8u;
        goto label_1da3e8;
    }
    ctx->pc = 0x1DA3E0u;
    {
        const bool branch_taken_0x1da3e0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DA3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA3E0u;
        // 0x1da3e4: 0x3c03004b  lui         $v1, 0x4B (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)75 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da3e0) {
            ctx->pc = 0x1DA0B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1da0b8;
        }
    }
    ctx->pc = 0x1DA3E8u;
label_1da3e8:
    // 0x1da3e8: 0x123080  sll         $a2, $s2, 2
    ctx->pc = 0x1da3e8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_1da3ec:
    // 0x1da3ec: 0x24630560  addiu       $v1, $v1, 0x560
    ctx->pc = 0x1da3ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1376));
label_1da3f0:
    // 0x1da3f0: 0x663821  addu        $a3, $v1, $a2
    ctx->pc = 0x1da3f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_1da3f4:
    // 0x1da3f4: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x1da3f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_1da3f8:
    // 0x1da3f8: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
label_1da3fc:
    if (ctx->pc == 0x1DA3FCu) {
        ctx->pc = 0x1DA400u;
        goto label_1da400;
    }
    ctx->pc = 0x1DA3F8u;
    {
        const bool branch_taken_0x1da3f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1da3f8) {
            ctx->pc = 0x1DA41Cu;
            goto label_1da41c;
        }
    }
    ctx->pc = 0x1DA400u;
label_1da400:
    // 0x1da400: 0x3c03004b  lui         $v1, 0x4B
    ctx->pc = 0x1da400u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)75 << 16));
label_1da404:
    // 0x1da404: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x1da404u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1da408:
    // 0x1da408: 0x24630580  addiu       $v1, $v1, 0x580
    ctx->pc = 0x1da408u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1408));
label_1da40c:
    // 0x1da40c: 0x662021  addu        $a0, $v1, $a2
    ctx->pc = 0x1da40cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_1da410:
    // 0x1da410: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x1da410u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_1da414:
    // 0x1da414: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x1da414u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
label_1da418:
    // 0x1da418: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x1da418u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
label_1da41c:
    // 0x1da41c: 0x8f848cec  lw          $a0, -0x7314($gp)
    ctx->pc = 0x1da41cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937836)));
label_1da420:
    // 0x1da420: 0x24030016  addiu       $v1, $zero, 0x16
    ctx->pc = 0x1da420u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_1da424:
    // 0x1da424: 0x1083000b  beq         $a0, $v1, . + 4 + (0xB << 2)
label_1da428:
    if (ctx->pc == 0x1DA428u) {
        ctx->pc = 0x1DA428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA424u;
        // 0x1da428: 0x3c03004b  lui         $v1, 0x4B (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)75 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DA42Cu;
        goto label_1da42c;
    }
    ctx->pc = 0x1DA424u;
    {
        const bool branch_taken_0x1da424 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1DA428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA424u;
        // 0x1da428: 0x3c03004b  lui         $v1, 0x4B (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)75 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da424) {
            ctx->pc = 0x1DA454u;
            goto label_1da454;
        }
    }
    ctx->pc = 0x1DA42Cu;
label_1da42c:
    // 0x1da42c: 0x24630660  addiu       $v1, $v1, 0x660
    ctx->pc = 0x1da42cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1632));
label_1da430:
    // 0x1da430: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x1da430u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_1da434:
    // 0x1da434: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1da434u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1da438:
    // 0x1da438: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_1da43c:
    if (ctx->pc == 0x1DA43Cu) {
        ctx->pc = 0x1DA440u;
        goto label_1da440;
    }
    ctx->pc = 0x1DA438u;
    {
        const bool branch_taken_0x1da438 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1da438) {
            ctx->pc = 0x1DA44Cu;
            goto label_1da44c;
        }
    }
    ctx->pc = 0x1DA440u;
label_1da440:
    // 0x1da440: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1da440u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1da444:
    // 0x1da444: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
label_1da448:
    if (ctx->pc == 0x1DA448u) {
        ctx->pc = 0x1DA44Cu;
        goto label_1da44c;
    }
    ctx->pc = 0x1DA444u;
    {
        const bool branch_taken_0x1da444 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1da444) {
            ctx->pc = 0x1DA454u;
            goto label_1da454;
        }
    }
    ctx->pc = 0x1DA44Cu;
label_1da44c:
    // 0x1da44c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1da44cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1da450:
    // 0x1da450: 0xaf838c8c  sw          $v1, -0x7374($gp)
    ctx->pc = 0x1da450u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937740), GPR_U32(ctx, 3));
label_1da454:
    // 0x1da454: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1da454u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1da458:
    // 0x1da458: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1da458u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1da45c:
    // 0x1da45c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1da45cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1da460:
    // 0x1da460: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1da460u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1da464:
    // 0x1da464: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1da464u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1da468:
    // 0x1da468: 0x3e00008  jr          $ra
label_1da46c:
    if (ctx->pc == 0x1DA46Cu) {
        ctx->pc = 0x1DA46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA468u;
        // 0x1da46c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DA470u;
        goto label_1da470;
    }
    ctx->pc = 0x1DA468u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DA46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA468u;
        // 0x1da46c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DA468u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DA470u;
label_1da470:
    // 0x1da470: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1da470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_1da474:
    // 0x1da474: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1da474u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1da478:
    // 0x1da478: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1da478u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_1da47c:
    // 0x1da47c: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1da47cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1da480:
    // 0x1da480: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1da480u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_1da484:
    // 0x1da484: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1da484u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_1da488:
    // 0x1da488: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x1da488u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1da48c:
    // 0x1da48c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1da48cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1da490:
    // 0x1da490: 0x24150168  addiu       $s5, $zero, 0x168
    ctx->pc = 0x1da490u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 360));
label_1da494:
    // 0x1da494: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1da494u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1da498:
    // 0x1da498: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1da498u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1da49c:
    // 0x1da49c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1da49cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1da4a0:
    // 0x1da4a0: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x1da4a0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1da4a4:
    // 0x1da4a4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1da4a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1da4a8:
    // 0x1da4a8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1da4a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1da4ac:
    // 0x1da4ac: 0x8f848cb4  lw          $a0, -0x734C($gp)
    ctx->pc = 0x1da4acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937780)));
label_1da4b0:
    // 0x1da4b0: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1da4b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1da4b4:
    // 0x1da4b4: 0xaf828cb0  sw          $v0, -0x7350($gp)
    ctx->pc = 0x1da4b4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937776), GPR_U32(ctx, 2));
label_1da4b8:
    // 0x1da4b8: 0x3c02004b  lui         $v0, 0x4B
    ctx->pc = 0x1da4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
label_1da4bc:
    // 0x1da4bc: 0xaf968ca8  sw          $s6, -0x7358($gp)
    ctx->pc = 0x1da4bcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937768), GPR_U32(ctx, 22));
label_1da4c0:
    // 0x1da4c0: 0x24420560  addiu       $v0, $v0, 0x560
    ctx->pc = 0x1da4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1376));
label_1da4c4:
    // 0x1da4c4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1da4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1da4c8:
    // 0x1da4c8: 0xaf848cac  sw          $a0, -0x7354($gp)
    ctx->pc = 0x1da4c8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937772), GPR_U32(ctx, 4));
label_1da4cc:
    // 0x1da4cc: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1da4ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_1da4d0:
    // 0x1da4d0: 0x8f838cf0  lw          $v1, -0x7310($gp)
    ctx->pc = 0x1da4d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937840)));
label_1da4d4:
    // 0x1da4d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1da4d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1da4d8:
    // 0x1da4d8: 0x8f868208  lw          $a2, -0x7DF8($gp)
    ctx->pc = 0x1da4d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935048)));
label_1da4dc:
    // 0x1da4dc: 0x8f87820c  lw          $a3, -0x7DF4($gp)
    ctx->pc = 0x1da4dcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935052)));
label_1da4e0:
    // 0x1da4e0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1da4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1da4e4:
    // 0x1da4e4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1da4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1da4e8:
    // 0x1da4e8: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1da4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_1da4ec:
    // 0x1da4ec: 0x2a2001a  div         $zero, $s5, $v0
    ctx->pc = 0x1da4ecu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 21);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1da4f0:
    // 0x1da4f0: 0x0  nop
    ctx->pc = 0x1da4f0u;
    // NOP
label_1da4f4:
    // 0x1da4f4: 0x0  nop
    ctx->pc = 0x1da4f4u;
    // NOP
label_1da4f8:
    // 0x1da4f8: 0x2812  mflo        $a1
    ctx->pc = 0x1da4f8u;
    SET_GPR_U64(ctx, 5, ctx->lo);
label_1da4fc:
    // 0x1da4fc: 0xc077b70  jal         func_1DEDC0
label_1da500:
    if (ctx->pc == 0x1DA500u) {
        ctx->pc = 0x1DA500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA4FCu;
        // 0x1da500: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DA504u;
        goto label_1da504;
    }
    ctx->pc = 0x1DA4FCu;
    SET_GPR_U32(ctx, 31, 0x1DA504u);
    ctx->pc = 0x1DA500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA4FCu;
    // 0x1da500: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DEDC0u;
    { ctx->pc = 0x1dedc0; return; }
    ctx->pc = 0x1DA504u;
label_1da504:
    // 0x1da504: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x1da504u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1da508:
    // 0x1da508: 0x124300ab  beq         $s2, $v1, . + 4 + (0xAB << 2)
label_1da50c:
    if (ctx->pc == 0x1DA50Cu) {
        ctx->pc = 0x1DA510u;
        goto label_1da510;
    }
    ctx->pc = 0x1DA508u;
    {
        const bool branch_taken_0x1da508 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 3));
        if (branch_taken_0x1da508) {
            ctx->pc = 0x1DA7B8u;
            goto label_1da7b8;
        }
    }
    ctx->pc = 0x1DA510u;
label_1da510:
    // 0x1da510: 0xdf8287d0  ld          $v0, -0x7830($gp)
    ctx->pc = 0x1da510u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294936528)));
label_1da514:
    // 0x1da514: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1da518:
    if (ctx->pc == 0x1DA518u) {
        ctx->pc = 0x1DA51Cu;
        goto label_1da51c;
    }
    ctx->pc = 0x1DA514u;
    {
        const bool branch_taken_0x1da514 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1da514) {
            ctx->pc = 0x1DA524u;
            goto label_1da524;
        }
    }
    ctx->pc = 0x1DA51Cu;
label_1da51c:
    // 0x1da51c: 0x10000005  b           . + 4 + (0x5 << 2)
label_1da520:
    if (ctx->pc == 0x1DA520u) {
        ctx->pc = 0x1DA520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA51Cu;
        // 0x1da520: 0xaf808cf4  sw          $zero, -0x730C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937844), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DA524u;
        goto label_1da524;
    }
    ctx->pc = 0x1DA51Cu;
    {
        const bool branch_taken_0x1da51c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA51Cu;
        // 0x1da520: 0xaf808cf4  sw          $zero, -0x730C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937844), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da51c) {
            ctx->pc = 0x1DA534u;
            goto label_1da534;
        }
    }
    ctx->pc = 0x1DA524u;
label_1da524:
    // 0x1da524: 0x0  nop
    ctx->pc = 0x1da524u;
    // NOP
label_1da528:
    // 0x1da528: 0x8f828cf4  lw          $v0, -0x730C($gp)
    ctx->pc = 0x1da528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937844)));
label_1da52c:
    // 0x1da52c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1da52cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1da530:
    // 0x1da530: 0xaf828cf4  sw          $v0, -0x730C($gp)
    ctx->pc = 0x1da530u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937844), GPR_U32(ctx, 2));
label_1da534:
    // 0x1da534: 0x0  nop
    ctx->pc = 0x1da534u;
    // NOP
label_1da538:
    // 0x1da538: 0x8f828cd4  lw          $v0, -0x732C($gp)
    ctx->pc = 0x1da538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937812)));
label_1da53c:
    // 0x1da53c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1da540:
    if (ctx->pc == 0x1DA540u) {
        ctx->pc = 0x1DA544u;
        goto label_1da544;
    }
    ctx->pc = 0x1DA53Cu;
    {
        const bool branch_taken_0x1da53c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1da53c) {
            ctx->pc = 0x1DA550u;
            goto label_1da550;
        }
    }
    ctx->pc = 0x1DA544u;
label_1da544:
    // 0x1da544: 0x8f828cd0  lw          $v0, -0x7330($gp)
    ctx->pc = 0x1da544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937808)));
label_1da548:
    // 0x1da548: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1da548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1da54c:
    // 0x1da54c: 0xaf828cd0  sw          $v0, -0x7330($gp)
    ctx->pc = 0x1da54cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937808), GPR_U32(ctx, 2));
label_1da550:
    // 0x1da550: 0x8f828cc4  lw          $v0, -0x733C($gp)
    ctx->pc = 0x1da550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937796)));
label_1da554:
    // 0x1da554: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_1da558:
    if (ctx->pc == 0x1DA558u) {
        ctx->pc = 0x1DA55Cu;
        goto label_1da55c;
    }
    ctx->pc = 0x1DA554u;
    {
        const bool branch_taken_0x1da554 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1da554) {
            ctx->pc = 0x1DA5B8u;
            goto label_1da5b8;
        }
    }
    ctx->pc = 0x1DA55Cu;
label_1da55c:
    // 0x1da55c: 0x8f828cc0  lw          $v0, -0x7340($gp)
    ctx->pc = 0x1da55cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937792)));
label_1da560:
    // 0x1da560: 0x28410080  slti        $at, $v0, 0x80
    ctx->pc = 0x1da560u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)128) ? 1 : 0);
label_1da564:
    // 0x1da564: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
label_1da568:
    if (ctx->pc == 0x1DA568u) {
        ctx->pc = 0x1DA56Cu;
        goto label_1da56c;
    }
    ctx->pc = 0x1DA564u;
    {
        const bool branch_taken_0x1da564 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1da564) {
            ctx->pc = 0x1DA58Cu;
            goto label_1da58c;
        }
    }
    ctx->pc = 0x1DA56Cu;
label_1da56c:
    // 0x1da56c: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x1da56cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
label_1da570:
    // 0x1da570: 0x28410080  slti        $at, $v0, 0x80
    ctx->pc = 0x1da570u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)128) ? 1 : 0);
label_1da574:
    // 0x1da574: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_1da578:
    if (ctx->pc == 0x1DA578u) {
        ctx->pc = 0x1DA57Cu;
        goto label_1da57c;
    }
    ctx->pc = 0x1DA574u;
    {
        const bool branch_taken_0x1da574 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1da574) {
            ctx->pc = 0x1DA584u;
            goto label_1da584;
        }
    }
    ctx->pc = 0x1DA57Cu;
label_1da57c:
    // 0x1da57c: 0x10000003  b           . + 4 + (0x3 << 2)
label_1da580:
    if (ctx->pc == 0x1DA580u) {
        ctx->pc = 0x1DA580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA57Cu;
        // 0x1da580: 0xaf828cc0  sw          $v0, -0x7340($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937792), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DA584u;
        goto label_1da584;
    }
    ctx->pc = 0x1DA57Cu;
    {
        const bool branch_taken_0x1da57c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA57Cu;
        // 0x1da580: 0xaf828cc0  sw          $v0, -0x7340($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937792), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da57c) {
            ctx->pc = 0x1DA58Cu;
            goto label_1da58c;
        }
    }
    ctx->pc = 0x1DA584u;
label_1da584:
    // 0x1da584: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1da584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1da588:
    // 0x1da588: 0xaf828cc0  sw          $v0, -0x7340($gp)
    ctx->pc = 0x1da588u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937792), GPR_U32(ctx, 2));
label_1da58c:
    // 0x1da58c: 0x0  nop
    ctx->pc = 0x1da58cu;
    // NOP
label_1da590:
    // 0x1da590: 0x8f828cb0  lw          $v0, -0x7350($gp)
    ctx->pc = 0x1da590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
label_1da594:
    // 0x1da594: 0x18400008  blez        $v0, . + 4 + (0x8 << 2)
label_1da598:
    if (ctx->pc == 0x1DA598u) {
        ctx->pc = 0x1DA59Cu;
        goto label_1da59c;
    }
    ctx->pc = 0x1DA594u;
    {
        const bool branch_taken_0x1da594 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1da594) {
            ctx->pc = 0x1DA5B8u;
            goto label_1da5b8;
        }
    }
    ctx->pc = 0x1DA59Cu;
label_1da59c:
    // 0x1da59c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1da59cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1da5a0:
    // 0x1da5a0: 0xaf828cb0  sw          $v0, -0x7350($gp)
    ctx->pc = 0x1da5a0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937776), GPR_U32(ctx, 2));
label_1da5a4:
    // 0x1da5a4: 0x8f828cb0  lw          $v0, -0x7350($gp)
    ctx->pc = 0x1da5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
label_1da5a8:
    // 0x1da5a8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1da5ac:
    if (ctx->pc == 0x1DA5ACu) {
        ctx->pc = 0x1DA5B0u;
        goto label_1da5b0;
    }
    ctx->pc = 0x1DA5A8u;
    {
        const bool branch_taken_0x1da5a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1da5a8) {
            ctx->pc = 0x1DA5B8u;
            goto label_1da5b8;
        }
    }
    ctx->pc = 0x1DA5B0u;
label_1da5b0:
    // 0x1da5b0: 0x8f828ca8  lw          $v0, -0x7358($gp)
    ctx->pc = 0x1da5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937768)));
label_1da5b4:
    // 0x1da5b4: 0xaf828cb4  sw          $v0, -0x734C($gp)
    ctx->pc = 0x1da5b4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937780), GPR_U32(ctx, 2));
label_1da5b8:
    // 0x1da5b8: 0xc077a7c  jal         func_1DE9F0
label_1da5bc:
    if (ctx->pc == 0x1DA5BCu) {
        ctx->pc = 0x1DA5C0u;
        goto label_1da5c0;
    }
    ctx->pc = 0x1DA5B8u;
    SET_GPR_U32(ctx, 31, 0x1DA5C0u);
    ctx->pc = 0x1DE9F0u;
    { ctx->pc = 0x1de9f0; return; }
    ctx->pc = 0x1DA5C0u;
label_1da5c0:
    // 0x1da5c0: 0x8f848ca0  lw          $a0, -0x7360($gp)
    ctx->pc = 0x1da5c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937760)));
label_1da5c4:
    // 0x1da5c4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1da5c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1da5c8:
    // 0x1da5c8: 0x10830020  beq         $a0, $v1, . + 4 + (0x20 << 2)
label_1da5cc:
    if (ctx->pc == 0x1DA5CCu) {
        ctx->pc = 0x1DA5D0u;
        goto label_1da5d0;
    }
    ctx->pc = 0x1DA5C8u;
    {
        const bool branch_taken_0x1da5c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1da5c8) {
            ctx->pc = 0x1DA64Cu;
            goto label_1da64c;
        }
    }
    ctx->pc = 0x1DA5D0u;
label_1da5d0:
    // 0x1da5d0: 0x8f828c9c  lw          $v0, -0x7364($gp)
    ctx->pc = 0x1da5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937756)));
label_1da5d4:
    // 0x1da5d4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1da5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1da5d8:
    // 0x1da5d8: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
label_1da5dc:
    if (ctx->pc == 0x1DA5DCu) {
        ctx->pc = 0x1DA5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA5D8u;
        // 0x1da5dc: 0xaf828c9c  sw          $v0, -0x7364($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937756), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DA5E0u;
        goto label_1da5e0;
    }
    ctx->pc = 0x1DA5D8u;
    {
        const bool branch_taken_0x1da5d8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DA5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA5D8u;
        // 0x1da5dc: 0xaf828c9c  sw          $v0, -0x7364($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937756), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da5d8) {
            ctx->pc = 0x1DA5FCu;
            goto label_1da5fc;
        }
    }
    ctx->pc = 0x1DA5E0u;
label_1da5e0:
    // 0x1da5e0: 0x8f828c9c  lw          $v0, -0x7364($gp)
    ctx->pc = 0x1da5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937756)));
label_1da5e4:
    // 0x1da5e4: 0x28420010  slti        $v0, $v0, 0x10
    ctx->pc = 0x1da5e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16) ? 1 : 0);
label_1da5e8:
    // 0x1da5e8: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
label_1da5ec:
    if (ctx->pc == 0x1DA5ECu) {
        ctx->pc = 0x1DA5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA5E8u;
        // 0x1da5ec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DA5F0u;
        goto label_1da5f0;
    }
    ctx->pc = 0x1DA5E8u;
    {
        const bool branch_taken_0x1da5e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DA5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA5E8u;
        // 0x1da5ec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da5e8) {
            ctx->pc = 0x1DA64Cu;
            goto label_1da64c;
        }
    }
    ctx->pc = 0x1DA5F0u;
label_1da5f0:
    // 0x1da5f0: 0xaf808c9c  sw          $zero, -0x7364($gp)
    ctx->pc = 0x1da5f0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937756), GPR_U32(ctx, 0));
label_1da5f4:
    // 0x1da5f4: 0x10000015  b           . + 4 + (0x15 << 2)
label_1da5f8:
    if (ctx->pc == 0x1DA5F8u) {
        ctx->pc = 0x1DA5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA5F4u;
        // 0x1da5f8: 0xaf828ca0  sw          $v0, -0x7360($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937760), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DA5FCu;
        goto label_1da5fc;
    }
    ctx->pc = 0x1DA5F4u;
    {
        const bool branch_taken_0x1da5f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA5F4u;
        // 0x1da5f8: 0xaf828ca0  sw          $v0, -0x7360($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937760), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da5f4) {
            ctx->pc = 0x1DA64Cu;
            goto label_1da64c;
        }
    }
    ctx->pc = 0x1DA5FCu;
label_1da5fc:
    // 0x1da5fc: 0x0  nop
    ctx->pc = 0x1da5fcu;
    // NOP
label_1da600:
    // 0x1da600: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1da600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1da604:
    // 0x1da604: 0x14820008  bne         $a0, $v0, . + 4 + (0x8 << 2)
label_1da608:
    if (ctx->pc == 0x1DA608u) {
        ctx->pc = 0x1DA60Cu;
        goto label_1da60c;
    }
    ctx->pc = 0x1DA604u;
    {
        const bool branch_taken_0x1da604 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x1da604) {
            ctx->pc = 0x1DA628u;
            goto label_1da628;
        }
    }
    ctx->pc = 0x1DA60Cu;
label_1da60c:
    // 0x1da60c: 0x8f828c9c  lw          $v0, -0x7364($gp)
    ctx->pc = 0x1da60cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937756)));
label_1da610:
    // 0x1da610: 0x28420030  slti        $v0, $v0, 0x30
    ctx->pc = 0x1da610u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)48) ? 1 : 0);
label_1da614:
    // 0x1da614: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_1da618:
    if (ctx->pc == 0x1DA618u) {
        ctx->pc = 0x1DA618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA614u;
        // 0x1da618: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DA61Cu;
        goto label_1da61c;
    }
    ctx->pc = 0x1DA614u;
    {
        const bool branch_taken_0x1da614 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DA618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA614u;
        // 0x1da618: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da614) {
            ctx->pc = 0x1DA64Cu;
            goto label_1da64c;
        }
    }
    ctx->pc = 0x1DA61Cu;
label_1da61c:
    // 0x1da61c: 0xaf808c9c  sw          $zero, -0x7364($gp)
    ctx->pc = 0x1da61cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937756), GPR_U32(ctx, 0));
label_1da620:
    // 0x1da620: 0x1000000a  b           . + 4 + (0xA << 2)
label_1da624:
    if (ctx->pc == 0x1DA624u) {
        ctx->pc = 0x1DA624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA620u;
        // 0x1da624: 0xaf828ca0  sw          $v0, -0x7360($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937760), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DA628u;
        goto label_1da628;
    }
    ctx->pc = 0x1DA620u;
    {
        const bool branch_taken_0x1da620 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA620u;
        // 0x1da624: 0xaf828ca0  sw          $v0, -0x7360($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937760), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da620) {
            ctx->pc = 0x1DA64Cu;
            goto label_1da64c;
        }
    }
    ctx->pc = 0x1DA628u;
label_1da628:
    // 0x1da628: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1da628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1da62c:
    // 0x1da62c: 0x14820007  bne         $a0, $v0, . + 4 + (0x7 << 2)
label_1da630:
    if (ctx->pc == 0x1DA630u) {
        ctx->pc = 0x1DA634u;
        goto label_1da634;
    }
    ctx->pc = 0x1DA62Cu;
    {
        const bool branch_taken_0x1da62c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x1da62c) {
            ctx->pc = 0x1DA64Cu;
            goto label_1da64c;
        }
    }
    ctx->pc = 0x1DA634u;
label_1da634:
    // 0x1da634: 0x8f828c9c  lw          $v0, -0x7364($gp)
    ctx->pc = 0x1da634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937756)));
label_1da638:
    // 0x1da638: 0x28420008  slti        $v0, $v0, 0x8
    ctx->pc = 0x1da638u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
label_1da63c:
    // 0x1da63c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1da640:
    if (ctx->pc == 0x1DA640u) {
        ctx->pc = 0x1DA644u;
        goto label_1da644;
    }
    ctx->pc = 0x1DA63Cu;
    {
        const bool branch_taken_0x1da63c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1da63c) {
            ctx->pc = 0x1DA64Cu;
            goto label_1da64c;
        }
    }
    ctx->pc = 0x1DA644u;
label_1da644:
    // 0x1da644: 0xaf838ca0  sw          $v1, -0x7360($gp)
    ctx->pc = 0x1da644u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937760), GPR_U32(ctx, 3));
label_1da648:
    // 0x1da648: 0xaf808c9c  sw          $zero, -0x7364($gp)
    ctx->pc = 0x1da648u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937756), GPR_U32(ctx, 0));
label_1da64c:
    // 0x1da64c: 0x0  nop
    ctx->pc = 0x1da64cu;
    // NOP
label_1da650:
    // 0x1da650: 0xc07a9d8  jal         func_1EA760
label_1da654:
    if (ctx->pc == 0x1DA654u) {
        ctx->pc = 0x1DA658u;
        goto label_1da658;
    }
    ctx->pc = 0x1DA650u;
    SET_GPR_U32(ctx, 31, 0x1DA658u);
    ctx->pc = 0x1EA760u;
    { ctx->pc = 0x1ea760; return; }
    ctx->pc = 0x1DA658u;
label_1da658:
    // 0x1da658: 0xc04e168  jal         func_1385A0
label_1da65c:
    if (ctx->pc == 0x1DA65Cu) {
        ctx->pc = 0x1DA660u;
        goto label_1da660;
    }
    ctx->pc = 0x1DA658u;
    SET_GPR_U32(ctx, 31, 0x1DA660u);
    ctx->pc = 0x1385A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1385A0u, 0x1DA658u, 0x1DA660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA660u;
label_1da660:
    // 0x1da660: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x1da660u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
label_1da664:
    // 0x1da664: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x1da664u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
label_1da668:
    // 0x1da668: 0x34433ffc  ori         $v1, $v0, 0x3FFC
    ctx->pc = 0x1da668u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16380);
label_1da66c:
    // 0x1da66c: 0x24841e00  addiu       $a0, $a0, 0x1E00
    ctx->pc = 0x1da66cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7680));
label_1da670:
    // 0x1da670: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1da670u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1da674:
    // 0x1da674: 0x27828ce0  addiu       $v0, $gp, -0x7320
    ctx->pc = 0x1da674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937824));
label_1da678:
    // 0x1da678: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x1da678u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_1da67c:
    // 0x1da67c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1da67cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1da680:
    // 0x1da680: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1da680u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1da684:
    // 0x1da684: 0x32940  sll         $a1, $v1, 5
    ctx->pc = 0x1da684u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_1da688:
    // 0x1da688: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1da688u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1da68c:
    // 0x1da68c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1da68cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1da690:
    // 0x1da690: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1da690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1da694:
    // 0x1da694: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1da694u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1da698:
    // 0x1da698: 0xc066c72  jal         func_19B1C8
label_1da69c:
    if (ctx->pc == 0x1DA69Cu) {
        ctx->pc = 0x1DA69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA698u;
        // 0x1da69c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DA6A0u;
        goto label_1da6a0;
    }
    ctx->pc = 0x1DA698u;
    SET_GPR_U32(ctx, 31, 0x1DA6A0u);
    ctx->pc = 0x1DA69Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA698u;
    // 0x1da69c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x1DA698u, 0x1DA6A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA6A0u;
label_1da6a0:
    // 0x1da6a0: 0xc077e84  jal         func_1DFA10
label_1da6a4:
    if (ctx->pc == 0x1DA6A4u) {
        ctx->pc = 0x1DA6A8u;
        goto label_1da6a8;
    }
    ctx->pc = 0x1DA6A0u;
    SET_GPR_U32(ctx, 31, 0x1DA6A8u);
    ctx->pc = 0x1DFA10u;
    { ctx->pc = 0x1dfa10; return; }
    ctx->pc = 0x1DA6A8u;
label_1da6a8:
    // 0x1da6a8: 0xc077d90  jal         func_1DF640
label_1da6ac:
    if (ctx->pc == 0x1DA6ACu) {
        ctx->pc = 0x1DA6B0u;
        goto label_1da6b0;
    }
    ctx->pc = 0x1DA6A8u;
    SET_GPR_U32(ctx, 31, 0x1DA6B0u);
    ctx->pc = 0x1DF640u;
    { ctx->pc = 0x1df640; return; }
    ctx->pc = 0x1DA6B0u;
label_1da6b0:
    // 0x1da6b0: 0xc077ab4  jal         func_1DEAD0
label_1da6b4:
    if (ctx->pc == 0x1DA6B4u) {
        ctx->pc = 0x1DA6B8u;
        goto label_1da6b8;
    }
    ctx->pc = 0x1DA6B0u;
    SET_GPR_U32(ctx, 31, 0x1DA6B8u);
    ctx->pc = 0x1DEAD0u;
    { ctx->pc = 0x1dead0; return; }
    ctx->pc = 0x1DA6B8u;
label_1da6b8:
    // 0x1da6b8: 0xc077880  jal         func_1DE200
label_1da6bc:
    if (ctx->pc == 0x1DA6BCu) {
        ctx->pc = 0x1DA6C0u;
        goto label_1da6c0;
    }
    ctx->pc = 0x1DA6B8u;
    SET_GPR_U32(ctx, 31, 0x1DA6C0u);
    ctx->pc = 0x1DE200u;
    { ctx->pc = 0x1de200; return; }
    ctx->pc = 0x1DA6C0u;
label_1da6c0:
    // 0x1da6c0: 0x8f828c8c  lw          $v0, -0x7374($gp)
    ctx->pc = 0x1da6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937740)));
label_1da6c4:
    // 0x1da6c4: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
label_1da6c8:
    if (ctx->pc == 0x1DA6C8u) {
        ctx->pc = 0x1DA6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA6C4u;
        // 0x1da6c8: 0x3c017000  lui         $at, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DA6CCu;
        goto label_1da6cc;
    }
    ctx->pc = 0x1DA6C4u;
    {
        const bool branch_taken_0x1da6c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA6C4u;
        // 0x1da6c8: 0x3c017000  lui         $at, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da6c4) {
            ctx->pc = 0x1DA798u;
            goto label_1da798;
        }
    }
    ctx->pc = 0x1DA6CCu;
label_1da6cc:
    // 0x1da6cc: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x1da6ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
label_1da6d0:
    // 0x1da6d0: 0x8c233ffc  lw          $v1, 0x3FFC($at)
    ctx->pc = 0x1da6d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_1da6d4:
    // 0x1da6d4: 0x24841e00  addiu       $a0, $a0, 0x1E00
    ctx->pc = 0x1da6d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7680));
label_1da6d8:
    // 0x1da6d8: 0x27828c90  addiu       $v0, $gp, -0x7370
    ctx->pc = 0x1da6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937744));
label_1da6dc:
    // 0x1da6dc: 0x2406027a  addiu       $a2, $zero, 0x27A
    ctx->pc = 0x1da6dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 634));
label_1da6e0:
    // 0x1da6e0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1da6e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1da6e4:
    // 0x1da6e4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1da6e4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1da6e8:
    // 0x1da6e8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1da6e8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1da6ec:
    // 0x1da6ec: 0x32940  sll         $a1, $v1, 5
    ctx->pc = 0x1da6ecu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_1da6f0:
    // 0x1da6f0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1da6f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1da6f4:
    // 0x1da6f4: 0x859821  addu        $s3, $a0, $a1
    ctx->pc = 0x1da6f4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1da6f8:
    // 0x1da6f8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1da6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1da6fc:
    // 0x1da6fc: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1da6fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1da700:
    // 0x1da700: 0xc066c72  jal         func_19B1C8
label_1da704:
    if (ctx->pc == 0x1DA704u) {
        ctx->pc = 0x1DA704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA700u;
        // 0x1da704: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DA708u;
        goto label_1da708;
    }
    ctx->pc = 0x1DA700u;
    SET_GPR_U32(ctx, 31, 0x1DA708u);
    ctx->pc = 0x1DA704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA700u;
    // 0x1da704: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x1DA700u, 0x1DA708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA708u;
label_1da708:
    // 0x1da708: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1da708u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_1da70c:
    // 0x1da70c: 0x3c02004b  lui         $v0, 0x4B
    ctx->pc = 0x1da70cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
label_1da710:
    // 0x1da710: 0x8c233ffc  lw          $v1, 0x3FFC($at)
    ctx->pc = 0x1da710u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_1da714:
    // 0x1da714: 0x24420540  addiu       $v0, $v0, 0x540
    ctx->pc = 0x1da714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1344));
label_1da718:
    // 0x1da718: 0x8f848c80  lw          $a0, -0x7380($gp)
    ctx->pc = 0x1da718u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937728)));
label_1da71c:
    // 0x1da71c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1da71cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1da720:
    // 0x1da720: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1da720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1da724:
    // 0x1da724: 0x8c540000  lw          $s4, 0x0($v0)
    ctx->pc = 0x1da724u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1da728:
    // 0x1da728: 0xc070e2c  jal         func_1C38B0
label_1da72c:
    if (ctx->pc == 0x1DA72Cu) {
        ctx->pc = 0x1DA72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA728u;
        // 0x1da72c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DA730u;
        goto label_1da730;
    }
    ctx->pc = 0x1DA728u;
    SET_GPR_U32(ctx, 31, 0x1DA730u);
    ctx->pc = 0x1DA72Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA728u;
    // 0x1da72c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C38B0u;
    { ctx->pc = 0x1c38b0; return; }
    ctx->pc = 0x1DA730u;
label_1da730:
    // 0x1da730: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1da730u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1da734:
    // 0x1da734: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1da734u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1da738:
    // 0x1da738: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x1da738u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_1da73c:
    // 0x1da73c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1da73cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1da740:
    // 0x1da740: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1da740u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1da744:
    // 0x1da744: 0xc066c72  jal         func_19B1C8
label_1da748:
    if (ctx->pc == 0x1DA748u) {
        ctx->pc = 0x1DA748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA744u;
        // 0x1da748: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DA74Cu;
        goto label_1da74c;
    }
    ctx->pc = 0x1DA744u;
    SET_GPR_U32(ctx, 31, 0x1DA74Cu);
    ctx->pc = 0x1DA748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA744u;
    // 0x1da748: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x1DA744u, 0x1DA74Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA74Cu;
label_1da74c:
    // 0x1da74c: 0x8f828c88  lw          $v0, -0x7378($gp)
    ctx->pc = 0x1da74cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937736)));
label_1da750:
    // 0x1da750: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_1da754:
    if (ctx->pc == 0x1DA754u) {
        ctx->pc = 0x1DA754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA750u;
        // 0x1da754: 0x3c017000  lui         $at, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DA758u;
        goto label_1da758;
    }
    ctx->pc = 0x1DA750u;
    {
        const bool branch_taken_0x1da750 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA750u;
        // 0x1da754: 0x3c017000  lui         $at, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da750) {
            ctx->pc = 0x1DA798u;
            goto label_1da798;
        }
    }
    ctx->pc = 0x1DA758u;
label_1da758:
    // 0x1da758: 0x3c02004b  lui         $v0, 0x4B
    ctx->pc = 0x1da758u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
label_1da75c:
    // 0x1da75c: 0x8c233ffc  lw          $v1, 0x3FFC($at)
    ctx->pc = 0x1da75cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_1da760:
    // 0x1da760: 0x24420540  addiu       $v0, $v0, 0x540
    ctx->pc = 0x1da760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1344));
label_1da764:
    // 0x1da764: 0x8f848c84  lw          $a0, -0x737C($gp)
    ctx->pc = 0x1da764u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937732)));
label_1da768:
    // 0x1da768: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1da768u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1da76c:
    // 0x1da76c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1da76cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1da770:
    // 0x1da770: 0x8c540008  lw          $s4, 0x8($v0)
    ctx->pc = 0x1da770u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1da774:
    // 0x1da774: 0xc070e2c  jal         func_1C38B0
label_1da778:
    if (ctx->pc == 0x1DA778u) {
        ctx->pc = 0x1DA778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA774u;
        // 0x1da778: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DA77Cu;
        goto label_1da77c;
    }
    ctx->pc = 0x1DA774u;
    SET_GPR_U32(ctx, 31, 0x1DA77Cu);
    ctx->pc = 0x1DA778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA774u;
    // 0x1da778: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C38B0u;
    { ctx->pc = 0x1c38b0; return; }
    ctx->pc = 0x1DA77Cu;
label_1da77c:
    // 0x1da77c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1da77cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1da780:
    // 0x1da780: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1da780u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1da784:
    // 0x1da784: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x1da784u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_1da788:
    // 0x1da788: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1da788u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1da78c:
    // 0x1da78c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1da78cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1da790:
    // 0x1da790: 0xc066c72  jal         func_19B1C8
label_1da794:
    if (ctx->pc == 0x1DA794u) {
        ctx->pc = 0x1DA794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA790u;
        // 0x1da794: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DA798u;
        goto label_1da798;
    }
    ctx->pc = 0x1DA790u;
    SET_GPR_U32(ctx, 31, 0x1DA798u);
    ctx->pc = 0x1DA794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA790u;
    // 0x1da794: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x1DA790u, 0x1DA798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA798u;
label_1da798:
    // 0x1da798: 0xc07a86c  jal         func_1EA1B0
label_1da79c:
    if (ctx->pc == 0x1DA79Cu) {
        ctx->pc = 0x1DA7A0u;
        goto label_1da7a0;
    }
    ctx->pc = 0x1DA798u;
    SET_GPR_U32(ctx, 31, 0x1DA7A0u);
    ctx->pc = 0x1EA1B0u;
    { ctx->pc = 0x1ea1b0; return; }
    ctx->pc = 0x1DA7A0u;
label_1da7a0:
    // 0x1da7a0: 0xc04e120  jal         func_138480
label_1da7a4:
    if (ctx->pc == 0x1DA7A4u) {
        ctx->pc = 0x1DA7A8u;
        goto label_1da7a8;
    }
    ctx->pc = 0x1DA7A0u;
    SET_GPR_U32(ctx, 31, 0x1DA7A8u);
    ctx->pc = 0x138480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138480u, 0x1DA7A0u, 0x1DA7A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA7A8u;
label_1da7a8:
    // 0x1da7a8: 0xc05b578  jal         func_16D5E0
label_1da7ac:
    if (ctx->pc == 0x1DA7ACu) {
        ctx->pc = 0x1DA7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA7A8u;
        // 0x1da7ac: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DA7B0u;
        goto label_1da7b0;
    }
    ctx->pc = 0x1DA7A8u;
    SET_GPR_U32(ctx, 31, 0x1DA7B0u);
    ctx->pc = 0x1DA7ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA7A8u;
    // 0x1da7ac: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D5E0u, 0x1DA7A8u, 0x1DA7B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA7B0u;
label_1da7b0:
    // 0x1da7b0: 0xc060258  jal         func_180960
label_1da7b4:
    if (ctx->pc == 0x1DA7B4u) {
        ctx->pc = 0x1DA7B8u;
        goto label_1da7b8;
    }
    ctx->pc = 0x1DA7B0u;
    SET_GPR_U32(ctx, 31, 0x1DA7B8u);
    ctx->pc = 0x180960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180960u, 0x1DA7B0u, 0x1DA7B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA7B8u;
label_1da7b8:
    // 0x1da7b8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1da7b8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1da7bc:
    // 0x1da7bc: 0x2a41000b  slti        $at, $s2, 0xB
    ctx->pc = 0x1da7bcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)11) ? 1 : 0);
label_1da7c0:
    // 0x1da7c0: 0x1420ff43  bnez        $at, . + 4 + (-0xBD << 2)
label_1da7c4:
    if (ctx->pc == 0x1DA7C4u) {
        ctx->pc = 0x1DA7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA7C0u;
        // 0x1da7c4: 0x26b50168  addiu       $s5, $s5, 0x168 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 360));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DA7C8u;
        goto label_1da7c8;
    }
    ctx->pc = 0x1DA7C0u;
    {
        const bool branch_taken_0x1da7c0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DA7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA7C0u;
        // 0x1da7c4: 0x26b50168  addiu       $s5, $s5, 0x168 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 360));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da7c0) {
            ctx->pc = 0x1DA4D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1da4d0;
        }
    }
    ctx->pc = 0x1DA7C8u;
label_1da7c8:
    // 0x1da7c8: 0x3c03004b  lui         $v1, 0x4B
    ctx->pc = 0x1da7c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)75 << 16));
label_1da7cc:
    // 0x1da7cc: 0x163080  sll         $a2, $s6, 2
    ctx->pc = 0x1da7ccu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
label_1da7d0:
    // 0x1da7d0: 0x24630560  addiu       $v1, $v1, 0x560
    ctx->pc = 0x1da7d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1376));
label_1da7d4:
    // 0x1da7d4: 0x663821  addu        $a3, $v1, $a2
    ctx->pc = 0x1da7d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    ctx->pc = 0x1da7d8u;
    return;
}
