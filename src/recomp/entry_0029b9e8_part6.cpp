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

// Function: entry_0029b9e8
// Address: 0x29b9e8 - 0x2bfab4
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void entry_0029b9e8_part6(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x29e0f8u: goto label_29e0f8;
        case 0x29e0fcu: goto label_29e0fc;
        case 0x29e100u: goto label_29e100;
        case 0x29e104u: goto label_29e104;
        case 0x29e108u: goto label_29e108;
        case 0x29e10cu: goto label_29e10c;
        case 0x29e110u: goto label_29e110;
        case 0x29e114u: goto label_29e114;
        case 0x29e118u: goto label_29e118;
        case 0x29e11cu: goto label_29e11c;
        case 0x29e120u: goto label_29e120;
        case 0x29e124u: goto label_29e124;
        case 0x29e128u: goto label_29e128;
        case 0x29e12cu: goto label_29e12c;
        case 0x29e130u: goto label_29e130;
        case 0x29e134u: goto label_29e134;
        case 0x29e138u: goto label_29e138;
        case 0x29e13cu: goto label_29e13c;
        case 0x29e140u: goto label_29e140;
        case 0x29e144u: goto label_29e144;
        case 0x29e148u: goto label_29e148;
        case 0x29e14cu: goto label_29e14c;
        case 0x29e150u: goto label_29e150;
        case 0x29e154u: goto label_29e154;
        case 0x29e158u: goto label_29e158;
        case 0x29e15cu: goto label_29e15c;
        case 0x29e160u: goto label_29e160;
        case 0x29e164u: goto label_29e164;
        case 0x29e168u: goto label_29e168;
        case 0x29e16cu: goto label_29e16c;
        case 0x29e170u: goto label_29e170;
        case 0x29e174u: goto label_29e174;
        case 0x29e178u: goto label_29e178;
        case 0x29e17cu: goto label_29e17c;
        case 0x29e180u: goto label_29e180;
        case 0x29e184u: goto label_29e184;
        case 0x29e188u: goto label_29e188;
        case 0x29e18cu: goto label_29e18c;
        case 0x29e190u: goto label_29e190;
        case 0x29e194u: goto label_29e194;
        case 0x29e198u: goto label_29e198;
        case 0x29e19cu: goto label_29e19c;
        case 0x29e1a0u: goto label_29e1a0;
        case 0x29e1a4u: goto label_29e1a4;
        case 0x29e1a8u: goto label_29e1a8;
        case 0x29e1acu: goto label_29e1ac;
        case 0x29e1b0u: goto label_29e1b0;
        case 0x29e1b4u: goto label_29e1b4;
        case 0x29e1b8u: goto label_29e1b8;
        case 0x29e1bcu: goto label_29e1bc;
        case 0x29e1c0u: goto label_29e1c0;
        case 0x29e1c4u: goto label_29e1c4;
        case 0x29e1c8u: goto label_29e1c8;
        case 0x29e1ccu: goto label_29e1cc;
        case 0x29e1d0u: goto label_29e1d0;
        case 0x29e1d4u: goto label_29e1d4;
        case 0x29e1d8u: goto label_29e1d8;
        case 0x29e1dcu: goto label_29e1dc;
        case 0x29e1e0u: goto label_29e1e0;
        case 0x29e1e4u: goto label_29e1e4;
        case 0x29e1e8u: goto label_29e1e8;
        case 0x29e1ecu: goto label_29e1ec;
        case 0x29e1f0u: goto label_29e1f0;
        case 0x29e1f4u: goto label_29e1f4;
        case 0x29e1f8u: goto label_29e1f8;
        case 0x29e1fcu: goto label_29e1fc;
        case 0x29e200u: goto label_29e200;
        case 0x29e204u: goto label_29e204;
        case 0x29e208u: goto label_29e208;
        case 0x29e20cu: goto label_29e20c;
        case 0x29e210u: goto label_29e210;
        case 0x29e214u: goto label_29e214;
        case 0x29e218u: goto label_29e218;
        case 0x29e21cu: goto label_29e21c;
        case 0x29e220u: goto label_29e220;
        case 0x29e224u: goto label_29e224;
        case 0x29e228u: goto label_29e228;
        case 0x29e22cu: goto label_29e22c;
        case 0x29e230u: goto label_29e230;
        case 0x29e234u: goto label_29e234;
        case 0x29e238u: goto label_29e238;
        case 0x29e23cu: goto label_29e23c;
        case 0x29e240u: goto label_29e240;
        case 0x29e244u: goto label_29e244;
        case 0x29e248u: goto label_29e248;
        case 0x29e24cu: goto label_29e24c;
        case 0x29e250u: goto label_29e250;
        case 0x29e254u: goto label_29e254;
        case 0x29e258u: goto label_29e258;
        case 0x29e25cu: goto label_29e25c;
        case 0x29e260u: goto label_29e260;
        case 0x29e264u: goto label_29e264;
        case 0x29e268u: goto label_29e268;
        case 0x29e26cu: goto label_29e26c;
        case 0x29e270u: goto label_29e270;
        case 0x29e274u: goto label_29e274;
        case 0x29e278u: goto label_29e278;
        case 0x29e27cu: goto label_29e27c;
        case 0x29e280u: goto label_29e280;
        case 0x29e284u: goto label_29e284;
        case 0x29e288u: goto label_29e288;
        case 0x29e28cu: goto label_29e28c;
        case 0x29e290u: goto label_29e290;
        case 0x29e294u: goto label_29e294;
        case 0x29e298u: goto label_29e298;
        case 0x29e29cu: goto label_29e29c;
        case 0x29e2a0u: goto label_29e2a0;
        case 0x29e2a4u: goto label_29e2a4;
        case 0x29e2a8u: goto label_29e2a8;
        case 0x29e2acu: goto label_29e2ac;
        case 0x29e2b0u: goto label_29e2b0;
        case 0x29e2b4u: goto label_29e2b4;
        case 0x29e2b8u: goto label_29e2b8;
        case 0x29e2bcu: goto label_29e2bc;
        case 0x29e2c0u: goto label_29e2c0;
        case 0x29e2c4u: goto label_29e2c4;
        case 0x29e2c8u: goto label_29e2c8;
        case 0x29e2ccu: goto label_29e2cc;
        case 0x29e2d0u: goto label_29e2d0;
        case 0x29e2d4u: goto label_29e2d4;
        case 0x29e2d8u: goto label_29e2d8;
        case 0x29e2dcu: goto label_29e2dc;
        case 0x29e2e0u: goto label_29e2e0;
        case 0x29e2e4u: goto label_29e2e4;
        case 0x29e2e8u: goto label_29e2e8;
        case 0x29e2ecu: goto label_29e2ec;
        case 0x29e2f0u: goto label_29e2f0;
        case 0x29e2f4u: goto label_29e2f4;
        case 0x29e2f8u: goto label_29e2f8;
        case 0x29e2fcu: goto label_29e2fc;
        case 0x29e300u: goto label_29e300;
        case 0x29e304u: goto label_29e304;
        case 0x29e308u: goto label_29e308;
        case 0x29e30cu: goto label_29e30c;
        case 0x29e310u: goto label_29e310;
        case 0x29e314u: goto label_29e314;
        case 0x29e318u: goto label_29e318;
        case 0x29e31cu: goto label_29e31c;
        case 0x29e320u: goto label_29e320;
        case 0x29e324u: goto label_29e324;
        case 0x29e328u: goto label_29e328;
        case 0x29e32cu: goto label_29e32c;
        case 0x29e330u: goto label_29e330;
        case 0x29e334u: goto label_29e334;
        case 0x29e338u: goto label_29e338;
        case 0x29e33cu: goto label_29e33c;
        case 0x29e340u: goto label_29e340;
        case 0x29e344u: goto label_29e344;
        case 0x29e348u: goto label_29e348;
        case 0x29e34cu: goto label_29e34c;
        case 0x29e350u: goto label_29e350;
        case 0x29e354u: goto label_29e354;
        case 0x29e358u: goto label_29e358;
        case 0x29e35cu: goto label_29e35c;
        case 0x29e360u: goto label_29e360;
        case 0x29e364u: goto label_29e364;
        case 0x29e368u: goto label_29e368;
        case 0x29e36cu: goto label_29e36c;
        case 0x29e370u: goto label_29e370;
        case 0x29e374u: goto label_29e374;
        case 0x29e378u: goto label_29e378;
        case 0x29e37cu: goto label_29e37c;
        case 0x29e380u: goto label_29e380;
        case 0x29e384u: goto label_29e384;
        case 0x29e388u: goto label_29e388;
        case 0x29e38cu: goto label_29e38c;
        case 0x29e390u: goto label_29e390;
        case 0x29e394u: goto label_29e394;
        case 0x29e398u: goto label_29e398;
        case 0x29e39cu: goto label_29e39c;
        case 0x29e3a0u: goto label_29e3a0;
        case 0x29e3a4u: goto label_29e3a4;
        case 0x29e3a8u: goto label_29e3a8;
        case 0x29e3acu: goto label_29e3ac;
        case 0x29e3b0u: goto label_29e3b0;
        case 0x29e3b4u: goto label_29e3b4;
        case 0x29e3b8u: goto label_29e3b8;
        case 0x29e3bcu: goto label_29e3bc;
        case 0x29e3c0u: goto label_29e3c0;
        case 0x29e3c4u: goto label_29e3c4;
        case 0x29e3c8u: goto label_29e3c8;
        case 0x29e3ccu: goto label_29e3cc;
        case 0x29e3d0u: goto label_29e3d0;
        case 0x29e3d4u: goto label_29e3d4;
        case 0x29e3d8u: goto label_29e3d8;
        case 0x29e3dcu: goto label_29e3dc;
        case 0x29e3e0u: goto label_29e3e0;
        case 0x29e3e4u: goto label_29e3e4;
        case 0x29e3e8u: goto label_29e3e8;
        case 0x29e3ecu: goto label_29e3ec;
        case 0x29e3f0u: goto label_29e3f0;
        case 0x29e3f4u: goto label_29e3f4;
        case 0x29e3f8u: goto label_29e3f8;
        case 0x29e3fcu: goto label_29e3fc;
        case 0x29e400u: goto label_29e400;
        case 0x29e404u: goto label_29e404;
        case 0x29e408u: goto label_29e408;
        case 0x29e40cu: goto label_29e40c;
        case 0x29e410u: goto label_29e410;
        case 0x29e414u: goto label_29e414;
        case 0x29e418u: goto label_29e418;
        case 0x29e41cu: goto label_29e41c;
        case 0x29e420u: goto label_29e420;
        case 0x29e424u: goto label_29e424;
        case 0x29e428u: goto label_29e428;
        case 0x29e42cu: goto label_29e42c;
        case 0x29e430u: goto label_29e430;
        case 0x29e434u: goto label_29e434;
        case 0x29e438u: goto label_29e438;
        case 0x29e43cu: goto label_29e43c;
        case 0x29e440u: goto label_29e440;
        case 0x29e444u: goto label_29e444;
        case 0x29e448u: goto label_29e448;
        case 0x29e44cu: goto label_29e44c;
        case 0x29e450u: goto label_29e450;
        case 0x29e454u: goto label_29e454;
        case 0x29e458u: goto label_29e458;
        case 0x29e45cu: goto label_29e45c;
        case 0x29e460u: goto label_29e460;
        case 0x29e464u: goto label_29e464;
        case 0x29e468u: goto label_29e468;
        case 0x29e46cu: goto label_29e46c;
        case 0x29e470u: goto label_29e470;
        case 0x29e474u: goto label_29e474;
        case 0x29e478u: goto label_29e478;
        case 0x29e47cu: goto label_29e47c;
        case 0x29e480u: goto label_29e480;
        case 0x29e484u: goto label_29e484;
        case 0x29e488u: goto label_29e488;
        case 0x29e48cu: goto label_29e48c;
        case 0x29e490u: goto label_29e490;
        case 0x29e494u: goto label_29e494;
        case 0x29e498u: goto label_29e498;
        case 0x29e49cu: goto label_29e49c;
        case 0x29e4a0u: goto label_29e4a0;
        case 0x29e4a4u: goto label_29e4a4;
        case 0x29e4a8u: goto label_29e4a8;
        case 0x29e4acu: goto label_29e4ac;
        case 0x29e4b0u: goto label_29e4b0;
        case 0x29e4b4u: goto label_29e4b4;
        case 0x29e4b8u: goto label_29e4b8;
        case 0x29e4bcu: goto label_29e4bc;
        case 0x29e4c0u: goto label_29e4c0;
        case 0x29e4c4u: goto label_29e4c4;
        case 0x29e4c8u: goto label_29e4c8;
        case 0x29e4ccu: goto label_29e4cc;
        case 0x29e4d0u: goto label_29e4d0;
        case 0x29e4d4u: goto label_29e4d4;
        case 0x29e4d8u: goto label_29e4d8;
        case 0x29e4dcu: goto label_29e4dc;
        case 0x29e4e0u: goto label_29e4e0;
        case 0x29e4e4u: goto label_29e4e4;
        case 0x29e4e8u: goto label_29e4e8;
        case 0x29e4ecu: goto label_29e4ec;
        case 0x29e4f0u: goto label_29e4f0;
        case 0x29e4f4u: goto label_29e4f4;
        case 0x29e4f8u: goto label_29e4f8;
        case 0x29e4fcu: goto label_29e4fc;
        case 0x29e500u: goto label_29e500;
        case 0x29e504u: goto label_29e504;
        case 0x29e508u: goto label_29e508;
        case 0x29e50cu: goto label_29e50c;
        case 0x29e510u: goto label_29e510;
        case 0x29e514u: goto label_29e514;
        case 0x29e518u: goto label_29e518;
        case 0x29e51cu: goto label_29e51c;
        case 0x29e520u: goto label_29e520;
        case 0x29e524u: goto label_29e524;
        case 0x29e528u: goto label_29e528;
        case 0x29e52cu: goto label_29e52c;
        case 0x29e530u: goto label_29e530;
        case 0x29e534u: goto label_29e534;
        case 0x29e538u: goto label_29e538;
        case 0x29e53cu: goto label_29e53c;
        case 0x29e540u: goto label_29e540;
        case 0x29e544u: goto label_29e544;
        case 0x29e548u: goto label_29e548;
        case 0x29e54cu: goto label_29e54c;
        case 0x29e550u: goto label_29e550;
        case 0x29e554u: goto label_29e554;
        case 0x29e558u: goto label_29e558;
        case 0x29e55cu: goto label_29e55c;
        case 0x29e560u: goto label_29e560;
        case 0x29e564u: goto label_29e564;
        case 0x29e568u: goto label_29e568;
        case 0x29e56cu: goto label_29e56c;
        case 0x29e570u: goto label_29e570;
        case 0x29e574u: goto label_29e574;
        case 0x29e578u: goto label_29e578;
        case 0x29e57cu: goto label_29e57c;
        case 0x29e580u: goto label_29e580;
        case 0x29e584u: goto label_29e584;
        case 0x29e588u: goto label_29e588;
        case 0x29e58cu: goto label_29e58c;
        case 0x29e590u: goto label_29e590;
        case 0x29e594u: goto label_29e594;
        case 0x29e598u: goto label_29e598;
        case 0x29e59cu: goto label_29e59c;
        case 0x29e5a0u: goto label_29e5a0;
        case 0x29e5a4u: goto label_29e5a4;
        case 0x29e5a8u: goto label_29e5a8;
        case 0x29e5acu: goto label_29e5ac;
        case 0x29e5b0u: goto label_29e5b0;
        case 0x29e5b4u: goto label_29e5b4;
        case 0x29e5b8u: goto label_29e5b8;
        case 0x29e5bcu: goto label_29e5bc;
        case 0x29e5c0u: goto label_29e5c0;
        case 0x29e5c4u: goto label_29e5c4;
        case 0x29e5c8u: goto label_29e5c8;
        case 0x29e5ccu: goto label_29e5cc;
        case 0x29e5d0u: goto label_29e5d0;
        case 0x29e5d4u: goto label_29e5d4;
        case 0x29e5d8u: goto label_29e5d8;
        case 0x29e5dcu: goto label_29e5dc;
        case 0x29e5e0u: goto label_29e5e0;
        case 0x29e5e4u: goto label_29e5e4;
        case 0x29e5e8u: goto label_29e5e8;
        case 0x29e5ecu: goto label_29e5ec;
        case 0x29e5f0u: goto label_29e5f0;
        case 0x29e5f4u: goto label_29e5f4;
        case 0x29e5f8u: goto label_29e5f8;
        case 0x29e5fcu: goto label_29e5fc;
        case 0x29e600u: goto label_29e600;
        case 0x29e604u: goto label_29e604;
        case 0x29e608u: goto label_29e608;
        case 0x29e60cu: goto label_29e60c;
        case 0x29e610u: goto label_29e610;
        case 0x29e614u: goto label_29e614;
        case 0x29e618u: goto label_29e618;
        case 0x29e61cu: goto label_29e61c;
        case 0x29e620u: goto label_29e620;
        case 0x29e624u: goto label_29e624;
        case 0x29e628u: goto label_29e628;
        case 0x29e62cu: goto label_29e62c;
        case 0x29e630u: goto label_29e630;
        case 0x29e634u: goto label_29e634;
        case 0x29e638u: goto label_29e638;
        case 0x29e63cu: goto label_29e63c;
        case 0x29e640u: goto label_29e640;
        case 0x29e644u: goto label_29e644;
        case 0x29e648u: goto label_29e648;
        case 0x29e64cu: goto label_29e64c;
        case 0x29e650u: goto label_29e650;
        case 0x29e654u: goto label_29e654;
        case 0x29e658u: goto label_29e658;
        case 0x29e65cu: goto label_29e65c;
        case 0x29e660u: goto label_29e660;
        case 0x29e664u: goto label_29e664;
        case 0x29e668u: goto label_29e668;
        case 0x29e66cu: goto label_29e66c;
        case 0x29e670u: goto label_29e670;
        case 0x29e674u: goto label_29e674;
        case 0x29e678u: goto label_29e678;
        case 0x29e67cu: goto label_29e67c;
        case 0x29e680u: goto label_29e680;
        case 0x29e684u: goto label_29e684;
        case 0x29e688u: goto label_29e688;
        case 0x29e68cu: goto label_29e68c;
        case 0x29e690u: goto label_29e690;
        case 0x29e694u: goto label_29e694;
        case 0x29e698u: goto label_29e698;
        case 0x29e69cu: goto label_29e69c;
        case 0x29e6a0u: goto label_29e6a0;
        case 0x29e6a4u: goto label_29e6a4;
        case 0x29e6a8u: goto label_29e6a8;
        case 0x29e6acu: goto label_29e6ac;
        case 0x29e6b0u: goto label_29e6b0;
        case 0x29e6b4u: goto label_29e6b4;
        case 0x29e6b8u: goto label_29e6b8;
        case 0x29e6bcu: goto label_29e6bc;
        case 0x29e6c0u: goto label_29e6c0;
        case 0x29e6c4u: goto label_29e6c4;
        case 0x29e6c8u: goto label_29e6c8;
        case 0x29e6ccu: goto label_29e6cc;
        case 0x29e6d0u: goto label_29e6d0;
        case 0x29e6d4u: goto label_29e6d4;
        case 0x29e6d8u: goto label_29e6d8;
        case 0x29e6dcu: goto label_29e6dc;
        case 0x29e6e0u: goto label_29e6e0;
        case 0x29e6e4u: goto label_29e6e4;
        case 0x29e6e8u: goto label_29e6e8;
        case 0x29e6ecu: goto label_29e6ec;
        case 0x29e6f0u: goto label_29e6f0;
        case 0x29e6f4u: goto label_29e6f4;
        case 0x29e6f8u: goto label_29e6f8;
        case 0x29e6fcu: goto label_29e6fc;
        case 0x29e700u: goto label_29e700;
        case 0x29e704u: goto label_29e704;
        case 0x29e708u: goto label_29e708;
        case 0x29e70cu: goto label_29e70c;
        case 0x29e710u: goto label_29e710;
        case 0x29e714u: goto label_29e714;
        case 0x29e718u: goto label_29e718;
        case 0x29e71cu: goto label_29e71c;
        case 0x29e720u: goto label_29e720;
        case 0x29e724u: goto label_29e724;
        case 0x29e728u: goto label_29e728;
        case 0x29e72cu: goto label_29e72c;
        case 0x29e730u: goto label_29e730;
        case 0x29e734u: goto label_29e734;
        case 0x29e738u: goto label_29e738;
        case 0x29e73cu: goto label_29e73c;
        case 0x29e740u: goto label_29e740;
        case 0x29e744u: goto label_29e744;
        case 0x29e748u: goto label_29e748;
        case 0x29e74cu: goto label_29e74c;
        case 0x29e750u: goto label_29e750;
        case 0x29e754u: goto label_29e754;
        case 0x29e758u: goto label_29e758;
        case 0x29e75cu: goto label_29e75c;
        case 0x29e760u: goto label_29e760;
        case 0x29e764u: goto label_29e764;
        case 0x29e768u: goto label_29e768;
        case 0x29e76cu: goto label_29e76c;
        case 0x29e770u: goto label_29e770;
        case 0x29e774u: goto label_29e774;
        case 0x29e778u: goto label_29e778;
        case 0x29e77cu: goto label_29e77c;
        case 0x29e780u: goto label_29e780;
        case 0x29e784u: goto label_29e784;
        case 0x29e788u: goto label_29e788;
        case 0x29e78cu: goto label_29e78c;
        case 0x29e790u: goto label_29e790;
        case 0x29e794u: goto label_29e794;
        case 0x29e798u: goto label_29e798;
        case 0x29e79cu: goto label_29e79c;
        case 0x29e7a0u: goto label_29e7a0;
        case 0x29e7a4u: goto label_29e7a4;
        case 0x29e7a8u: goto label_29e7a8;
        case 0x29e7acu: goto label_29e7ac;
        case 0x29e7b0u: goto label_29e7b0;
        case 0x29e7b4u: goto label_29e7b4;
        case 0x29e7b8u: goto label_29e7b8;
        case 0x29e7bcu: goto label_29e7bc;
        case 0x29e7c0u: goto label_29e7c0;
        case 0x29e7c4u: goto label_29e7c4;
        case 0x29e7c8u: goto label_29e7c8;
        case 0x29e7ccu: goto label_29e7cc;
        case 0x29e7d0u: goto label_29e7d0;
        case 0x29e7d4u: goto label_29e7d4;
        case 0x29e7d8u: goto label_29e7d8;
        case 0x29e7dcu: goto label_29e7dc;
        case 0x29e7e0u: goto label_29e7e0;
        case 0x29e7e4u: goto label_29e7e4;
        case 0x29e7e8u: goto label_29e7e8;
        case 0x29e7ecu: goto label_29e7ec;
        case 0x29e7f0u: goto label_29e7f0;
        case 0x29e7f4u: goto label_29e7f4;
        case 0x29e7f8u: goto label_29e7f8;
        case 0x29e7fcu: goto label_29e7fc;
        case 0x29e800u: goto label_29e800;
        case 0x29e804u: goto label_29e804;
        case 0x29e808u: goto label_29e808;
        case 0x29e80cu: goto label_29e80c;
        case 0x29e810u: goto label_29e810;
        case 0x29e814u: goto label_29e814;
        case 0x29e818u: goto label_29e818;
        case 0x29e81cu: goto label_29e81c;
        case 0x29e820u: goto label_29e820;
        case 0x29e824u: goto label_29e824;
        case 0x29e828u: goto label_29e828;
        case 0x29e82cu: goto label_29e82c;
        case 0x29e830u: goto label_29e830;
        case 0x29e834u: goto label_29e834;
        case 0x29e838u: goto label_29e838;
        case 0x29e83cu: goto label_29e83c;
        case 0x29e840u: goto label_29e840;
        case 0x29e844u: goto label_29e844;
        case 0x29e848u: goto label_29e848;
        case 0x29e84cu: goto label_29e84c;
        case 0x29e850u: goto label_29e850;
        case 0x29e854u: goto label_29e854;
        case 0x29e858u: goto label_29e858;
        case 0x29e85cu: goto label_29e85c;
        case 0x29e860u: goto label_29e860;
        case 0x29e864u: goto label_29e864;
        case 0x29e868u: goto label_29e868;
        case 0x29e86cu: goto label_29e86c;
        case 0x29e870u: goto label_29e870;
        case 0x29e874u: goto label_29e874;
        case 0x29e878u: goto label_29e878;
        case 0x29e87cu: goto label_29e87c;
        case 0x29e880u: goto label_29e880;
        case 0x29e884u: goto label_29e884;
        case 0x29e888u: goto label_29e888;
        case 0x29e88cu: goto label_29e88c;
        case 0x29e890u: goto label_29e890;
        case 0x29e894u: goto label_29e894;
        case 0x29e898u: goto label_29e898;
        case 0x29e89cu: goto label_29e89c;
        case 0x29e8a0u: goto label_29e8a0;
        case 0x29e8a4u: goto label_29e8a4;
        case 0x29e8a8u: goto label_29e8a8;
        case 0x29e8acu: goto label_29e8ac;
        case 0x29e8b0u: goto label_29e8b0;
        case 0x29e8b4u: goto label_29e8b4;
        case 0x29e8b8u: goto label_29e8b8;
        case 0x29e8bcu: goto label_29e8bc;
        case 0x29e8c0u: goto label_29e8c0;
        case 0x29e8c4u: goto label_29e8c4;
        default: return;
    }

label_29e0f8:
    // 0x29e0f8: 0x18  mult        $zero, $zero, $zero
    ctx->pc = 0x29e0f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_29e0fc:
    // 0x29e0fc: 0x11940  sll         $v1, $at, 5
    ctx->pc = 0x29e0fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 1), 5));
label_29e100:
    // 0x29e100: 0xc  syscall     0
    ctx->pc = 0x29e100u;
    ctx->pc = 0x29E104u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_29e104:
    // 0x29e104: 0xd2f0  tge         $zero, $zero, 843
    ctx->pc = 0x29e104u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29e108:
    // 0x29e108: 0x23  negu        $zero, $zero
    ctx->pc = 0x29e108u;
    SET_GPR_S32(ctx, 0, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_29e10c:
    // 0x29e10c: 0x11940  sll         $v1, $at, 5
    ctx->pc = 0x29e10cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 1), 5));
label_29e110:
    // 0x29e110: 0x24  and         $zero, $zero, $zero
    ctx->pc = 0x29e110u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_29e114:
    // 0x29e114: 0x15f90  .word       0x00015F90                   # mfhi        $t3 # 00010780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29e114u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_29e118:
    // 0x29e118: 0x9  jalr        $zero, $zero
label_29e11c:
    if (ctx->pc == 0x29E11Cu) {
        ctx->pc = 0x29E11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E118u;
        // 0x29e11c: 0x1a5e0  .word       0x0001A5E0                   # add         $s4, $zero, $at # 000005C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E120u;
        goto label_29e120;
    }
    ctx->pc = 0x29E118u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x29E11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E118u;
        // 0x29e11c: 0x1a5e0  .word       0x0001A5E0                   # add         $s4, $zero, $at # 000005C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29E118u, 0x29E120u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29E120u;
label_29e120:
    // 0x29e120: 0x16  dsrlv       $zero, $zero, $zero
    ctx->pc = 0x29e120u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_29e124:
    // 0x29e124: 0x1ec30  tge         $zero, $at, 944
    ctx->pc = 0x29e124u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_29e128:
    // 0x29e128: 0x20  add         $zero, $zero, $zero
    ctx->pc = 0x29e128u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_29e12c:
    // 0x29e12c: 0x23280  sll         $a2, $v0, 10
    ctx->pc = 0x29e12cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 10));
label_29e130:
    // 0x29e130: 0x7  srav        $zero, $zero, $zero
    ctx->pc = 0x29e130u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29e134:
    // 0x29e134: 0x278d0  .word       0x000278D0                   # mfhi        $t7 # 000200C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29e134u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_29e138:
    // 0x29e138: 0x19  multu       $zero, $zero
    ctx->pc = 0x29e138u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_29e13c:
    // 0x29e13c: 0x2bf20  .word       0x0002BF20                   # add         $s7, $zero, $v0 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29e13cu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 23, (int32_t)result);     } }
label_29e140:
    // 0x29e140: 0x18  mult        $zero, $zero, $zero
    ctx->pc = 0x29e140u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_29e144:
    // 0x29e144: 0x30570  tge         $zero, $v1, 21
    ctx->pc = 0x29e144u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_29e148:
    // 0x29e148: 0xd  break       0
    ctx->pc = 0x29e148u;
    runtime->handleBreak(rdram, ctx);
label_29e14c:
    // 0x29e14c: 0x34bc0  sll         $t1, $v1, 15
    ctx->pc = 0x29e14cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 3), 15));
label_29e150:
    // 0x29e150: 0x12  mflo        $zero
    ctx->pc = 0x29e150u;
    SET_GPR_U64(ctx, 0, ctx->lo);
label_29e154:
    // 0x29e154: 0xd2f0  tge         $zero, $zero, 843
    ctx->pc = 0x29e154u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29e158:
    // 0x29e158: 0x11  mthi        $zero
    ctx->pc = 0x29e158u;
    ctx->hi = GPR_U64(ctx, 0);
label_29e15c:
    // 0x29e15c: 0x11940  sll         $v1, $at, 5
    ctx->pc = 0x29e15cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 1), 5));
label_29e160:
    // 0x29e160: 0x1d  dmultu      $zero, $zero
    ctx->pc = 0x29e160u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x29E160 raw=0x0000001D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29e164:
    // 0x29e164: 0x15f90  .word       0x00015F90                   # mfhi        $t3 # 00010780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29e164u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_29e168:
    // 0x29e168: 0xb  movn        $zero, $zero, $zero
    ctx->pc = 0x29e168u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_29e16c:
    // 0x29e16c: 0x1a5e0  .word       0x0001A5E0                   # add         $s4, $zero, $at # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29e16cu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_29e170:
    // 0x29e170: 0x17  dsrav       $zero, $zero, $zero
    ctx->pc = 0x29e170u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_29e174:
    // 0x29e174: 0x1ec30  tge         $zero, $at, 944
    ctx->pc = 0x29e174u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_29e178:
    // 0x29e178: 0xa  movz        $zero, $zero, $zero
    ctx->pc = 0x29e178u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_29e17c:
    // 0x29e17c: 0x23280  sll         $a2, $v0, 10
    ctx->pc = 0x29e17cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 10));
label_29e180:
    // 0x29e180: 0x1a  div         $zero, $zero, $zero
    ctx->pc = 0x29e180u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_29e184:
    // 0x29e184: 0x278d0  .word       0x000278D0                   # mfhi        $t7 # 000200C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29e184u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_29e188:
    // 0x29e188: 0x21  addu        $zero, $zero, $zero
    ctx->pc = 0x29e188u;
    SET_GPR_S32(ctx, 0, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_29e18c:
    // 0x29e18c: 0x2bf20  .word       0x0002BF20                   # add         $s7, $zero, $v0 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29e18cu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 23, (int32_t)result);     } }
label_29e190:
    // 0x29e190: 0xe  .word       0x0000000E                   # INVALID     $zero, $zero, 0xE # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29e190u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x29E190 raw=0x0000000E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29e194:
    // 0x29e194: 0x30570  tge         $zero, $v1, 21
    ctx->pc = 0x29e194u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_29e198:
    // 0x29e198: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29e198u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29e19c:
    // 0x29e19c: 0x34bc0  sll         $t1, $v1, 15
    ctx->pc = 0x29e19cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 3), 15));
label_29e1a0:
    // 0x29e1a0: 0x1b  divu        $zero, $zero, $zero
    ctx->pc = 0x29e1a0u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_29e1a4:
    // 0x29e1a4: 0x8ca0  .word       0x00008CA0                   # add         $s1, $zero, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29e1a4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_29e1a8:
    // 0x29e1a8: 0x16  dsrlv       $zero, $zero, $zero
    ctx->pc = 0x29e1a8u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_29e1ac:
    // 0x29e1ac: 0x9ab0  tge         $zero, $zero, 618
    ctx->pc = 0x29e1acu;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29e1b0:
    // 0x29e1b0: 0x5  .word       0x00000005                   # INVALID     $zero, $zero, 0x5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29e1b0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x29E1B0 raw=0x00000005"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29e1b4:
    // 0x29e1b4: 0xa8c0  sll         $s5, $zero, 3
    ctx->pc = 0x29e1b4u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 0), 3));
label_29e1b8:
    // 0x29e1b8: 0x6  srlv        $zero, $zero, $zero
    ctx->pc = 0x29e1b8u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29e1bc:
    // 0x29e1bc: 0xb6d0  .word       0x0000B6D0                   # mfhi        $s6 # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29e1bcu;
    SET_GPR_U64(ctx, 22, ctx->hi);
label_29e1c0:
    // 0x29e1c0: 0x26  xor         $zero, $zero, $zero
    ctx->pc = 0x29e1c0u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_29e1c4:
    // 0x29e1c4: 0xc4e0  .word       0x0000C4E0                   # add         $t8, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29e1c4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 24, (int32_t)result);     } }
label_29e1c8:
    // 0x29e1c8: 0xd  break       0
    ctx->pc = 0x29e1c8u;
    runtime->handleBreak(rdram, ctx);
label_29e1cc:
    // 0x29e1cc: 0xd2f0  tge         $zero, $zero, 843
    ctx->pc = 0x29e1ccu;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29e1d0:
    // 0x29e1d0: 0x22  neg         $zero, $zero
    ctx->pc = 0x29e1d0u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 0, (int32_t)tmp); }
label_29e1d4:
    // 0x29e1d4: 0xe100  sll         $gp, $zero, 4
    ctx->pc = 0x29e1d4u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 0), 4));
label_29e1d8:
    // 0x29e1d8: 0xa  movz        $zero, $zero, $zero
    ctx->pc = 0x29e1d8u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_29e1dc:
    // 0x29e1dc: 0xef10  .word       0x0000EF10                   # mfhi        $sp # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29e1dcu;
    SET_GPR_U64(ctx, 29, ctx->hi);
label_29e1e0:
    // 0x29e1e0: 0x13  mtlo        $zero
    ctx->pc = 0x29e1e0u;
    ctx->lo = GPR_U64(ctx, 0);
label_29e1e4:
    // 0x29e1e4: 0xfd20  .word       0x0000FD20                   # add         $ra, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29e1e4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 31, (int32_t)result);     } }
label_29e1e8:
    // 0x29e1e8: 0xe  .word       0x0000000E                   # INVALID     $zero, $zero, 0xE # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29e1e8u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x29E1E8 raw=0x0000000E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29e1ec:
    // 0x29e1ec: 0x11940  sll         $v1, $at, 5
    ctx->pc = 0x29e1ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 1), 5));
label_29e1f0:
    // 0x29e1f0: 0x11  mthi        $zero
    ctx->pc = 0x29e1f0u;
    ctx->hi = GPR_U64(ctx, 0);
label_29e1f4:
    // 0x29e1f4: 0x8ca0  .word       0x00008CA0                   # add         $s1, $zero, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29e1f4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_29e1f8:
    // 0x29e1f8: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29e1f8u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29e1fc:
    // 0x29e1fc: 0x9ab0  tge         $zero, $zero, 618
    ctx->pc = 0x29e1fcu;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29e200:
    // 0x29e200: 0x5  .word       0x00000005                   # INVALID     $zero, $zero, 0x5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29e200u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x29E200 raw=0x00000005"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29e204:
    // 0x29e204: 0xa8c0  sll         $s5, $zero, 3
    ctx->pc = 0x29e204u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 0), 3));
label_29e208:
    // 0x29e208: 0x15  .word       0x00000015                   # INVALID     $zero, $zero, 0x15 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29e208u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x29E208 raw=0x00000015"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29e20c:
    // 0x29e20c: 0xb6d0  .word       0x0000B6D0                   # mfhi        $s6 # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29e20cu;
    SET_GPR_U64(ctx, 22, ctx->hi);
label_29e210:
    // 0x29e210: 0x1e  ddiv        $zero, $zero, $zero
    ctx->pc = 0x29e210u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x29E210 raw=0x0000001E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29e214:
    // 0x29e214: 0xc4e0  .word       0x0000C4E0                   # add         $t8, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29e214u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 24, (int32_t)result);     } }
label_29e218:
    // 0x29e218: 0x8  jr          $zero
label_29e21c:
    if (ctx->pc == 0x29E21Cu) {
        ctx->pc = 0x29E21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E218u;
        // 0x29e21c: 0xd2f0  tge         $zero, $zero, 843 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E220u;
        goto label_29e220;
    }
    ctx->pc = 0x29E218u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x29E21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E218u;
        // 0x29e21c: 0xd2f0  tge         $zero, $zero, 843 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29E218u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x29E220u;
label_29e220:
    // 0x29e220: 0x10  mfhi        $zero
    ctx->pc = 0x29e220u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_29e224:
    // 0x29e224: 0xe100  sll         $gp, $zero, 4
    ctx->pc = 0x29e224u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 0), 4));
label_29e228:
    // 0x29e228: 0xd  break       0
    ctx->pc = 0x29e228u;
    runtime->handleBreak(rdram, ctx);
label_29e22c:
    // 0x29e22c: 0xef10  .word       0x0000EF10                   # mfhi        $sp # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29e22cu;
    SET_GPR_U64(ctx, 29, ctx->hi);
label_29e230:
    // 0x29e230: 0x21  addu        $zero, $zero, $zero
    ctx->pc = 0x29e230u;
    SET_GPR_S32(ctx, 0, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_29e234:
    // 0x29e234: 0xfd20  .word       0x0000FD20                   # add         $ra, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29e234u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 31, (int32_t)result);     } }
label_29e238:
    // 0x29e238: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x29e238u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_29e23c:
    // 0x29e23c: 0x11940  sll         $v1, $at, 5
    ctx->pc = 0x29e23cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 1), 5));
label_29e240:
    // 0x29e240: 0x24  and         $zero, $zero, $zero
    ctx->pc = 0x29e240u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_29e244:
    // 0x29e244: 0x8ca0  .word       0x00008CA0                   # add         $s1, $zero, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29e244u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_29e248:
    // 0x29e248: 0x6  srlv        $zero, $zero, $zero
    ctx->pc = 0x29e248u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29e24c:
    // 0x29e24c: 0x9ab0  tge         $zero, $zero, 618
    ctx->pc = 0x29e24cu;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29e250:
    // 0x29e250: 0x26  xor         $zero, $zero, $zero
    ctx->pc = 0x29e250u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_29e254:
    // 0x29e254: 0xa8c0  sll         $s5, $zero, 3
    ctx->pc = 0x29e254u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 0), 3));
label_29e258:
    // 0x29e258: 0x19  multu       $zero, $zero
    ctx->pc = 0x29e258u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_29e25c:
    // 0x29e25c: 0xb6d0  .word       0x0000B6D0                   # mfhi        $s6 # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29e25cu;
    SET_GPR_U64(ctx, 22, ctx->hi);
label_29e260:
    // 0x29e260: 0x8  jr          $zero
label_29e264:
    if (ctx->pc == 0x29E264u) {
        ctx->pc = 0x29E264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E260u;
        // 0x29e264: 0xc4e0  .word       0x0000C4E0                   # add         $t8, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 24, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E268u;
        goto label_29e268;
    }
    ctx->pc = 0x29E260u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x29E264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E260u;
        // 0x29e264: 0xc4e0  .word       0x0000C4E0                   # add         $t8, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 24, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29E260u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x29E268u;
label_29e268:
    // 0x29e268: 0xf  sync
    ctx->pc = 0x29e268u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_29e26c:
    // 0x29e26c: 0xd2f0  tge         $zero, $zero, 843
    ctx->pc = 0x29e26cu;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29e270:
    // 0x29e270: 0x20  add         $zero, $zero, $zero
    ctx->pc = 0x29e270u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_29e274:
    // 0x29e274: 0xe100  sll         $gp, $zero, 4
    ctx->pc = 0x29e274u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 0), 4));
label_29e278:
    // 0x29e278: 0x18  mult        $zero, $zero, $zero
    ctx->pc = 0x29e278u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_29e27c:
    // 0x29e27c: 0xef10  .word       0x0000EF10                   # mfhi        $sp # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29e27cu;
    SET_GPR_U64(ctx, 29, ctx->hi);
label_29e280:
    // 0x29e280: 0x10  mfhi        $zero
    ctx->pc = 0x29e280u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_29e284:
    // 0x29e284: 0xfd20  .word       0x0000FD20                   # add         $ra, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29e284u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 31, (int32_t)result);     } }
label_29e288:
    // 0x29e288: 0xd  break       0
    ctx->pc = 0x29e288u;
    runtime->handleBreak(rdram, ctx);
label_29e28c:
    // 0x29e28c: 0x11940  sll         $v1, $at, 5
    ctx->pc = 0x29e28cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 1), 5));
label_29e290:
    // 0x29e290: 0x0  nop
    ctx->pc = 0x29e290u;
    // NOP
label_29e294:
    // 0x29e294: 0x0  nop
    ctx->pc = 0x29e294u;
    // NOP
label_29e298:
    // 0x29e298: 0x0  nop
    ctx->pc = 0x29e298u;
    // NOP
label_29e29c:
    // 0x29e29c: 0x0  nop
    ctx->pc = 0x29e29cu;
    // NOP
label_29e2a0:
    // 0x29e2a0: 0x0  nop
    ctx->pc = 0x29e2a0u;
    // NOP
label_29e2a4:
    // 0x29e2a4: 0x0  nop
    ctx->pc = 0x29e2a4u;
    // NOP
label_29e2a8:
    // 0x29e2a8: 0x0  nop
    ctx->pc = 0x29e2a8u;
    // NOP
label_29e2ac:
    // 0x29e2ac: 0x0  nop
    ctx->pc = 0x29e2acu;
    // NOP
label_29e2b0:
    // 0x29e2b0: 0x0  nop
    ctx->pc = 0x29e2b0u;
    // NOP
label_29e2b4:
    // 0x29e2b4: 0x0  nop
    ctx->pc = 0x29e2b4u;
    // NOP
label_29e2b8:
    // 0x29e2b8: 0x0  nop
    ctx->pc = 0x29e2b8u;
    // NOP
label_29e2bc:
    // 0x29e2bc: 0x0  nop
    ctx->pc = 0x29e2bcu;
    // NOP
label_29e2c0:
    // 0x29e2c0: 0x0  nop
    ctx->pc = 0x29e2c0u;
    // NOP
label_29e2c4:
    // 0x29e2c4: 0x0  nop
    ctx->pc = 0x29e2c4u;
    // NOP
label_29e2c8:
    // 0x29e2c8: 0x0  nop
    ctx->pc = 0x29e2c8u;
    // NOP
label_29e2cc:
    // 0x29e2cc: 0x0  nop
    ctx->pc = 0x29e2ccu;
    // NOP
label_29e2d0:
    // 0x29e2d0: 0x0  nop
    ctx->pc = 0x29e2d0u;
    // NOP
label_29e2d4:
    // 0x29e2d4: 0x0  nop
    ctx->pc = 0x29e2d4u;
    // NOP
label_29e2d8:
    // 0x29e2d8: 0x0  nop
    ctx->pc = 0x29e2d8u;
    // NOP
label_29e2dc:
    // 0x29e2dc: 0x0  nop
    ctx->pc = 0x29e2dcu;
    // NOP
label_29e2e0:
    // 0x29e2e0: 0x0  nop
    ctx->pc = 0x29e2e0u;
    // NOP
label_29e2e4:
    // 0x29e2e4: 0x0  nop
    ctx->pc = 0x29e2e4u;
    // NOP
label_29e2e8:
    // 0x29e2e8: 0x0  nop
    ctx->pc = 0x29e2e8u;
    // NOP
label_29e2ec:
    // 0x29e2ec: 0x0  nop
    ctx->pc = 0x29e2ecu;
    // NOP
label_29e2f0:
    // 0x29e2f0: 0x0  nop
    ctx->pc = 0x29e2f0u;
    // NOP
label_29e2f4:
    // 0x29e2f4: 0x0  nop
    ctx->pc = 0x29e2f4u;
    // NOP
label_29e2f8:
    // 0x29e2f8: 0x0  nop
    ctx->pc = 0x29e2f8u;
    // NOP
label_29e2fc:
    // 0x29e2fc: 0x0  nop
    ctx->pc = 0x29e2fcu;
    // NOP
label_29e300:
    // 0x29e300: 0x0  nop
    ctx->pc = 0x29e300u;
    // NOP
label_29e304:
    // 0x29e304: 0x0  nop
    ctx->pc = 0x29e304u;
    // NOP
label_29e308:
    // 0x29e308: 0x0  nop
    ctx->pc = 0x29e308u;
    // NOP
label_29e30c:
    // 0x29e30c: 0x0  nop
    ctx->pc = 0x29e30cu;
    // NOP
label_29e310:
    // 0x29e310: 0x0  nop
    ctx->pc = 0x29e310u;
    // NOP
label_29e314:
    // 0x29e314: 0x0  nop
    ctx->pc = 0x29e314u;
    // NOP
label_29e318:
    // 0x29e318: 0x0  nop
    ctx->pc = 0x29e318u;
    // NOP
label_29e31c:
    // 0x29e31c: 0x0  nop
    ctx->pc = 0x29e31cu;
    // NOP
label_29e320:
    // 0x29e320: 0x0  nop
    ctx->pc = 0x29e320u;
    // NOP
label_29e324:
    // 0x29e324: 0x0  nop
    ctx->pc = 0x29e324u;
    // NOP
label_29e328:
    // 0x29e328: 0x0  nop
    ctx->pc = 0x29e328u;
    // NOP
label_29e32c:
    // 0x29e32c: 0x0  nop
    ctx->pc = 0x29e32cu;
    // NOP
label_29e330:
    // 0x29e330: 0x0  nop
    ctx->pc = 0x29e330u;
    // NOP
label_29e334:
    // 0x29e334: 0x0  nop
    ctx->pc = 0x29e334u;
    // NOP
label_29e338:
    // 0x29e338: 0x0  nop
    ctx->pc = 0x29e338u;
    // NOP
label_29e33c:
    // 0x29e33c: 0x0  nop
    ctx->pc = 0x29e33cu;
    // NOP
label_29e340:
    // 0x29e340: 0x0  nop
    ctx->pc = 0x29e340u;
    // NOP
label_29e344:
    // 0x29e344: 0x0  nop
    ctx->pc = 0x29e344u;
    // NOP
label_29e348:
    // 0x29e348: 0x0  nop
    ctx->pc = 0x29e348u;
    // NOP
label_29e34c:
    // 0x29e34c: 0x0  nop
    ctx->pc = 0x29e34cu;
    // NOP
label_29e350:
    // 0x29e350: 0x0  nop
    ctx->pc = 0x29e350u;
    // NOP
label_29e354:
    // 0x29e354: 0x0  nop
    ctx->pc = 0x29e354u;
    // NOP
label_29e358:
    // 0x29e358: 0x0  nop
    ctx->pc = 0x29e358u;
    // NOP
label_29e35c:
    // 0x29e35c: 0x0  nop
    ctx->pc = 0x29e35cu;
    // NOP
label_29e360:
    // 0x29e360: 0x0  nop
    ctx->pc = 0x29e360u;
    // NOP
label_29e364:
    // 0x29e364: 0x0  nop
    ctx->pc = 0x29e364u;
    // NOP
label_29e368:
    // 0x29e368: 0x0  nop
    ctx->pc = 0x29e368u;
    // NOP
label_29e36c:
    // 0x29e36c: 0x0  nop
    ctx->pc = 0x29e36cu;
    // NOP
label_29e370:
    // 0x29e370: 0x0  nop
    ctx->pc = 0x29e370u;
    // NOP
label_29e374:
    // 0x29e374: 0x0  nop
    ctx->pc = 0x29e374u;
    // NOP
label_29e378:
    // 0x29e378: 0x0  nop
    ctx->pc = 0x29e378u;
    // NOP
label_29e37c:
    // 0x29e37c: 0x0  nop
    ctx->pc = 0x29e37cu;
    // NOP
label_29e380:
    // 0x29e380: 0x0  nop
    ctx->pc = 0x29e380u;
    // NOP
label_29e384:
    // 0x29e384: 0x0  nop
    ctx->pc = 0x29e384u;
    // NOP
label_29e388:
    // 0x29e388: 0x0  nop
    ctx->pc = 0x29e388u;
    // NOP
label_29e38c:
    // 0x29e38c: 0x0  nop
    ctx->pc = 0x29e38cu;
    // NOP
label_29e390:
    // 0x29e390: 0x0  nop
    ctx->pc = 0x29e390u;
    // NOP
label_29e394:
    // 0x29e394: 0x0  nop
    ctx->pc = 0x29e394u;
    // NOP
label_29e398:
    // 0x29e398: 0x0  nop
    ctx->pc = 0x29e398u;
    // NOP
label_29e39c:
    // 0x29e39c: 0x0  nop
    ctx->pc = 0x29e39cu;
    // NOP
label_29e3a0:
    // 0x29e3a0: 0x0  nop
    ctx->pc = 0x29e3a0u;
    // NOP
label_29e3a4:
    // 0x29e3a4: 0x0  nop
    ctx->pc = 0x29e3a4u;
    // NOP
label_29e3a8:
    // 0x29e3a8: 0x0  nop
    ctx->pc = 0x29e3a8u;
    // NOP
label_29e3ac:
    // 0x29e3ac: 0x0  nop
    ctx->pc = 0x29e3acu;
    // NOP
label_29e3b0:
    // 0x29e3b0: 0x0  nop
    ctx->pc = 0x29e3b0u;
    // NOP
label_29e3b4:
    // 0x29e3b4: 0x0  nop
    ctx->pc = 0x29e3b4u;
    // NOP
label_29e3b8:
    // 0x29e3b8: 0x0  nop
    ctx->pc = 0x29e3b8u;
    // NOP
label_29e3bc:
    // 0x29e3bc: 0x0  nop
    ctx->pc = 0x29e3bcu;
    // NOP
label_29e3c0:
    // 0x29e3c0: 0x0  nop
    ctx->pc = 0x29e3c0u;
    // NOP
label_29e3c4:
    // 0x29e3c4: 0x0  nop
    ctx->pc = 0x29e3c4u;
    // NOP
label_29e3c8:
    // 0x29e3c8: 0x0  nop
    ctx->pc = 0x29e3c8u;
    // NOP
label_29e3cc:
    // 0x29e3cc: 0x0  nop
    ctx->pc = 0x29e3ccu;
    // NOP
label_29e3d0:
    // 0x29e3d0: 0x0  nop
    ctx->pc = 0x29e3d0u;
    // NOP
label_29e3d4:
    // 0x29e3d4: 0x0  nop
    ctx->pc = 0x29e3d4u;
    // NOP
label_29e3d8:
    // 0x29e3d8: 0x0  nop
    ctx->pc = 0x29e3d8u;
    // NOP
label_29e3dc:
    // 0x29e3dc: 0x0  nop
    ctx->pc = 0x29e3dcu;
    // NOP
label_29e3e0:
    // 0x29e3e0: 0x0  nop
    ctx->pc = 0x29e3e0u;
    // NOP
label_29e3e4:
    // 0x29e3e4: 0x0  nop
    ctx->pc = 0x29e3e4u;
    // NOP
label_29e3e8:
    // 0x29e3e8: 0x0  nop
    ctx->pc = 0x29e3e8u;
    // NOP
label_29e3ec:
    // 0x29e3ec: 0x0  nop
    ctx->pc = 0x29e3ecu;
    // NOP
label_29e3f0:
    // 0x29e3f0: 0x0  nop
    ctx->pc = 0x29e3f0u;
    // NOP
label_29e3f4:
    // 0x29e3f4: 0x0  nop
    ctx->pc = 0x29e3f4u;
    // NOP
label_29e3f8:
    // 0x29e3f8: 0x0  nop
    ctx->pc = 0x29e3f8u;
    // NOP
label_29e3fc:
    // 0x29e3fc: 0x0  nop
    ctx->pc = 0x29e3fcu;
    // NOP
label_29e400:
    // 0x29e400: 0x0  nop
    ctx->pc = 0x29e400u;
    // NOP
label_29e404:
    // 0x29e404: 0x0  nop
    ctx->pc = 0x29e404u;
    // NOP
label_29e408:
    // 0x29e408: 0x0  nop
    ctx->pc = 0x29e408u;
    // NOP
label_29e40c:
    // 0x29e40c: 0x0  nop
    ctx->pc = 0x29e40cu;
    // NOP
label_29e410:
    // 0x29e410: 0x0  nop
    ctx->pc = 0x29e410u;
    // NOP
label_29e414:
    // 0x29e414: 0x0  nop
    ctx->pc = 0x29e414u;
    // NOP
label_29e418:
    // 0x29e418: 0x0  nop
    ctx->pc = 0x29e418u;
    // NOP
label_29e41c:
    // 0x29e41c: 0x0  nop
    ctx->pc = 0x29e41cu;
    // NOP
label_29e420:
    // 0x29e420: 0x0  nop
    ctx->pc = 0x29e420u;
    // NOP
label_29e424:
    // 0x29e424: 0x0  nop
    ctx->pc = 0x29e424u;
    // NOP
label_29e428:
    // 0x29e428: 0x0  nop
    ctx->pc = 0x29e428u;
    // NOP
label_29e42c:
    // 0x29e42c: 0x0  nop
    ctx->pc = 0x29e42cu;
    // NOP
label_29e430:
    // 0x29e430: 0x0  nop
    ctx->pc = 0x29e430u;
    // NOP
label_29e434:
    // 0x29e434: 0x0  nop
    ctx->pc = 0x29e434u;
    // NOP
label_29e438:
    // 0x29e438: 0x0  nop
    ctx->pc = 0x29e438u;
    // NOP
label_29e43c:
    // 0x29e43c: 0x0  nop
    ctx->pc = 0x29e43cu;
    // NOP
label_29e440:
    // 0x29e440: 0x0  nop
    ctx->pc = 0x29e440u;
    // NOP
label_29e444:
    // 0x29e444: 0x0  nop
    ctx->pc = 0x29e444u;
    // NOP
label_29e448:
    // 0x29e448: 0x0  nop
    ctx->pc = 0x29e448u;
    // NOP
label_29e44c:
    // 0x29e44c: 0x0  nop
    ctx->pc = 0x29e44cu;
    // NOP
label_29e450:
    // 0x29e450: 0x0  nop
    ctx->pc = 0x29e450u;
    // NOP
label_29e454:
    // 0x29e454: 0x0  nop
    ctx->pc = 0x29e454u;
    // NOP
label_29e458:
    // 0x29e458: 0x0  nop
    ctx->pc = 0x29e458u;
    // NOP
label_29e45c:
    // 0x29e45c: 0x0  nop
    ctx->pc = 0x29e45cu;
    // NOP
label_29e460:
    // 0x29e460: 0x0  nop
    ctx->pc = 0x29e460u;
    // NOP
label_29e464:
    // 0x29e464: 0x0  nop
    ctx->pc = 0x29e464u;
    // NOP
label_29e468:
    // 0x29e468: 0x0  nop
    ctx->pc = 0x29e468u;
    // NOP
label_29e46c:
    // 0x29e46c: 0x0  nop
    ctx->pc = 0x29e46cu;
    // NOP
label_29e470:
    // 0x29e470: 0x0  nop
    ctx->pc = 0x29e470u;
    // NOP
label_29e474:
    // 0x29e474: 0x0  nop
    ctx->pc = 0x29e474u;
    // NOP
label_29e478:
    // 0x29e478: 0x0  nop
    ctx->pc = 0x29e478u;
    // NOP
label_29e47c:
    // 0x29e47c: 0x0  nop
    ctx->pc = 0x29e47cu;
    // NOP
label_29e480:
    // 0x29e480: 0x0  nop
    ctx->pc = 0x29e480u;
    // NOP
label_29e484:
    // 0x29e484: 0x0  nop
    ctx->pc = 0x29e484u;
    // NOP
label_29e488:
    // 0x29e488: 0x0  nop
    ctx->pc = 0x29e488u;
    // NOP
label_29e48c:
    // 0x29e48c: 0x0  nop
    ctx->pc = 0x29e48cu;
    // NOP
label_29e490:
    // 0x29e490: 0x0  nop
    ctx->pc = 0x29e490u;
    // NOP
label_29e494:
    // 0x29e494: 0x0  nop
    ctx->pc = 0x29e494u;
    // NOP
label_29e498:
    // 0x29e498: 0x0  nop
    ctx->pc = 0x29e498u;
    // NOP
label_29e49c:
    // 0x29e49c: 0x0  nop
    ctx->pc = 0x29e49cu;
    // NOP
label_29e4a0:
    // 0x29e4a0: 0x0  nop
    ctx->pc = 0x29e4a0u;
    // NOP
label_29e4a4:
    // 0x29e4a4: 0x0  nop
    ctx->pc = 0x29e4a4u;
    // NOP
label_29e4a8:
    // 0x29e4a8: 0x0  nop
    ctx->pc = 0x29e4a8u;
    // NOP
label_29e4ac:
    // 0x29e4ac: 0x0  nop
    ctx->pc = 0x29e4acu;
    // NOP
label_29e4b0:
    // 0x29e4b0: 0x0  nop
    ctx->pc = 0x29e4b0u;
    // NOP
label_29e4b4:
    // 0x29e4b4: 0x0  nop
    ctx->pc = 0x29e4b4u;
    // NOP
label_29e4b8:
    // 0x29e4b8: 0x0  nop
    ctx->pc = 0x29e4b8u;
    // NOP
label_29e4bc:
    // 0x29e4bc: 0x0  nop
    ctx->pc = 0x29e4bcu;
    // NOP
label_29e4c0:
    // 0x29e4c0: 0x0  nop
    ctx->pc = 0x29e4c0u;
    // NOP
label_29e4c4:
    // 0x29e4c4: 0x0  nop
    ctx->pc = 0x29e4c4u;
    // NOP
label_29e4c8:
    // 0x29e4c8: 0x0  nop
    ctx->pc = 0x29e4c8u;
    // NOP
label_29e4cc:
    // 0x29e4cc: 0x0  nop
    ctx->pc = 0x29e4ccu;
    // NOP
label_29e4d0:
    // 0x29e4d0: 0x0  nop
    ctx->pc = 0x29e4d0u;
    // NOP
label_29e4d4:
    // 0x29e4d4: 0x0  nop
    ctx->pc = 0x29e4d4u;
    // NOP
label_29e4d8:
    // 0x29e4d8: 0x0  nop
    ctx->pc = 0x29e4d8u;
    // NOP
label_29e4dc:
    // 0x29e4dc: 0x0  nop
    ctx->pc = 0x29e4dcu;
    // NOP
label_29e4e0:
    // 0x29e4e0: 0x0  nop
    ctx->pc = 0x29e4e0u;
    // NOP
label_29e4e4:
    // 0x29e4e4: 0x0  nop
    ctx->pc = 0x29e4e4u;
    // NOP
label_29e4e8:
    // 0x29e4e8: 0x0  nop
    ctx->pc = 0x29e4e8u;
    // NOP
label_29e4ec:
    // 0x29e4ec: 0x0  nop
    ctx->pc = 0x29e4ecu;
    // NOP
label_29e4f0:
    // 0x29e4f0: 0x0  nop
    ctx->pc = 0x29e4f0u;
    // NOP
label_29e4f4:
    // 0x29e4f4: 0x0  nop
    ctx->pc = 0x29e4f4u;
    // NOP
label_29e4f8:
    // 0x29e4f8: 0x0  nop
    ctx->pc = 0x29e4f8u;
    // NOP
label_29e4fc:
    // 0x29e4fc: 0x0  nop
    ctx->pc = 0x29e4fcu;
    // NOP
label_29e500:
    // 0x29e500: 0x0  nop
    ctx->pc = 0x29e500u;
    // NOP
label_29e504:
    // 0x29e504: 0x0  nop
    ctx->pc = 0x29e504u;
    // NOP
label_29e508:
    // 0x29e508: 0x0  nop
    ctx->pc = 0x29e508u;
    // NOP
label_29e50c:
    // 0x29e50c: 0x0  nop
    ctx->pc = 0x29e50cu;
    // NOP
label_29e510:
    // 0x29e510: 0x0  nop
    ctx->pc = 0x29e510u;
    // NOP
label_29e514:
    // 0x29e514: 0x0  nop
    ctx->pc = 0x29e514u;
    // NOP
label_29e518:
    // 0x29e518: 0x0  nop
    ctx->pc = 0x29e518u;
    // NOP
label_29e51c:
    // 0x29e51c: 0x0  nop
    ctx->pc = 0x29e51cu;
    // NOP
label_29e520:
    // 0x29e520: 0x0  nop
    ctx->pc = 0x29e520u;
    // NOP
label_29e524:
    // 0x29e524: 0x0  nop
    ctx->pc = 0x29e524u;
    // NOP
label_29e528:
    // 0x29e528: 0x0  nop
    ctx->pc = 0x29e528u;
    // NOP
label_29e52c:
    // 0x29e52c: 0x0  nop
    ctx->pc = 0x29e52cu;
    // NOP
label_29e530:
    // 0x29e530: 0x0  nop
    ctx->pc = 0x29e530u;
    // NOP
label_29e534:
    // 0x29e534: 0x0  nop
    ctx->pc = 0x29e534u;
    // NOP
label_29e538:
    // 0x29e538: 0x0  nop
    ctx->pc = 0x29e538u;
    // NOP
label_29e53c:
    // 0x29e53c: 0x0  nop
    ctx->pc = 0x29e53cu;
    // NOP
label_29e540:
    // 0x29e540: 0x0  nop
    ctx->pc = 0x29e540u;
    // NOP
label_29e544:
    // 0x29e544: 0x0  nop
    ctx->pc = 0x29e544u;
    // NOP
label_29e548:
    // 0x29e548: 0x0  nop
    ctx->pc = 0x29e548u;
    // NOP
label_29e54c:
    // 0x29e54c: 0x0  nop
    ctx->pc = 0x29e54cu;
    // NOP
label_29e550:
    // 0x29e550: 0x0  nop
    ctx->pc = 0x29e550u;
    // NOP
label_29e554:
    // 0x29e554: 0x0  nop
    ctx->pc = 0x29e554u;
    // NOP
label_29e558:
    // 0x29e558: 0x0  nop
    ctx->pc = 0x29e558u;
    // NOP
label_29e55c:
    // 0x29e55c: 0x0  nop
    ctx->pc = 0x29e55cu;
    // NOP
label_29e560:
    // 0x29e560: 0x0  nop
    ctx->pc = 0x29e560u;
    // NOP
label_29e564:
    // 0x29e564: 0x0  nop
    ctx->pc = 0x29e564u;
    // NOP
label_29e568:
    // 0x29e568: 0x0  nop
    ctx->pc = 0x29e568u;
    // NOP
label_29e56c:
    // 0x29e56c: 0x0  nop
    ctx->pc = 0x29e56cu;
    // NOP
label_29e570:
    // 0x29e570: 0x0  nop
    ctx->pc = 0x29e570u;
    // NOP
label_29e574:
    // 0x29e574: 0x0  nop
    ctx->pc = 0x29e574u;
    // NOP
label_29e578:
    // 0x29e578: 0x0  nop
    ctx->pc = 0x29e578u;
    // NOP
label_29e57c:
    // 0x29e57c: 0x0  nop
    ctx->pc = 0x29e57cu;
    // NOP
label_29e580:
    // 0x29e580: 0x0  nop
    ctx->pc = 0x29e580u;
    // NOP
label_29e584:
    // 0x29e584: 0x0  nop
    ctx->pc = 0x29e584u;
    // NOP
label_29e588:
    // 0x29e588: 0x0  nop
    ctx->pc = 0x29e588u;
    // NOP
label_29e58c:
    // 0x29e58c: 0x0  nop
    ctx->pc = 0x29e58cu;
    // NOP
label_29e590:
    // 0x29e590: 0x0  nop
    ctx->pc = 0x29e590u;
    // NOP
label_29e594:
    // 0x29e594: 0x0  nop
    ctx->pc = 0x29e594u;
    // NOP
label_29e598:
    // 0x29e598: 0x0  nop
    ctx->pc = 0x29e598u;
    // NOP
label_29e59c:
    // 0x29e59c: 0x0  nop
    ctx->pc = 0x29e59cu;
    // NOP
label_29e5a0:
    // 0x29e5a0: 0x0  nop
    ctx->pc = 0x29e5a0u;
    // NOP
label_29e5a4:
    // 0x29e5a4: 0x0  nop
    ctx->pc = 0x29e5a4u;
    // NOP
label_29e5a8:
    // 0x29e5a8: 0x0  nop
    ctx->pc = 0x29e5a8u;
    // NOP
label_29e5ac:
    // 0x29e5ac: 0x0  nop
    ctx->pc = 0x29e5acu;
    // NOP
label_29e5b0:
    // 0x29e5b0: 0x0  nop
    ctx->pc = 0x29e5b0u;
    // NOP
label_29e5b4:
    // 0x29e5b4: 0x0  nop
    ctx->pc = 0x29e5b4u;
    // NOP
label_29e5b8:
    // 0x29e5b8: 0x0  nop
    ctx->pc = 0x29e5b8u;
    // NOP
label_29e5bc:
    // 0x29e5bc: 0x0  nop
    ctx->pc = 0x29e5bcu;
    // NOP
label_29e5c0:
    // 0x29e5c0: 0x0  nop
    ctx->pc = 0x29e5c0u;
    // NOP
label_29e5c4:
    // 0x29e5c4: 0x0  nop
    ctx->pc = 0x29e5c4u;
    // NOP
label_29e5c8:
    // 0x29e5c8: 0x0  nop
    ctx->pc = 0x29e5c8u;
    // NOP
label_29e5cc:
    // 0x29e5cc: 0x0  nop
    ctx->pc = 0x29e5ccu;
    // NOP
label_29e5d0:
    // 0x29e5d0: 0x0  nop
    ctx->pc = 0x29e5d0u;
    // NOP
label_29e5d4:
    // 0x29e5d4: 0x0  nop
    ctx->pc = 0x29e5d4u;
    // NOP
label_29e5d8:
    // 0x29e5d8: 0x0  nop
    ctx->pc = 0x29e5d8u;
    // NOP
label_29e5dc:
    // 0x29e5dc: 0x0  nop
    ctx->pc = 0x29e5dcu;
    // NOP
label_29e5e0:
    // 0x29e5e0: 0x0  nop
    ctx->pc = 0x29e5e0u;
    // NOP
label_29e5e4:
    // 0x29e5e4: 0x0  nop
    ctx->pc = 0x29e5e4u;
    // NOP
label_29e5e8:
    // 0x29e5e8: 0x0  nop
    ctx->pc = 0x29e5e8u;
    // NOP
label_29e5ec:
    // 0x29e5ec: 0x0  nop
    ctx->pc = 0x29e5ecu;
    // NOP
label_29e5f0:
    // 0x29e5f0: 0x0  nop
    ctx->pc = 0x29e5f0u;
    // NOP
label_29e5f4:
    // 0x29e5f4: 0x0  nop
    ctx->pc = 0x29e5f4u;
    // NOP
label_29e5f8:
    // 0x29e5f8: 0x0  nop
    ctx->pc = 0x29e5f8u;
    // NOP
label_29e5fc:
    // 0x29e5fc: 0x0  nop
    ctx->pc = 0x29e5fcu;
    // NOP
label_29e600:
    // 0x29e600: 0x0  nop
    ctx->pc = 0x29e600u;
    // NOP
label_29e604:
    // 0x29e604: 0x0  nop
    ctx->pc = 0x29e604u;
    // NOP
label_29e608:
    // 0x29e608: 0x0  nop
    ctx->pc = 0x29e608u;
    // NOP
label_29e60c:
    // 0x29e60c: 0x0  nop
    ctx->pc = 0x29e60cu;
    // NOP
label_29e610:
    // 0x29e610: 0x0  nop
    ctx->pc = 0x29e610u;
    // NOP
label_29e614:
    // 0x29e614: 0x0  nop
    ctx->pc = 0x29e614u;
    // NOP
label_29e618:
    // 0x29e618: 0x0  nop
    ctx->pc = 0x29e618u;
    // NOP
label_29e61c:
    // 0x29e61c: 0x0  nop
    ctx->pc = 0x29e61cu;
    // NOP
label_29e620:
    // 0x29e620: 0x0  nop
    ctx->pc = 0x29e620u;
    // NOP
label_29e624:
    // 0x29e624: 0x0  nop
    ctx->pc = 0x29e624u;
    // NOP
label_29e628:
    // 0x29e628: 0x0  nop
    ctx->pc = 0x29e628u;
    // NOP
label_29e62c:
    // 0x29e62c: 0x0  nop
    ctx->pc = 0x29e62cu;
    // NOP
label_29e630:
    // 0x29e630: 0x0  nop
    ctx->pc = 0x29e630u;
    // NOP
label_29e634:
    // 0x29e634: 0x0  nop
    ctx->pc = 0x29e634u;
    // NOP
label_29e638:
    // 0x29e638: 0x0  nop
    ctx->pc = 0x29e638u;
    // NOP
label_29e63c:
    // 0x29e63c: 0x0  nop
    ctx->pc = 0x29e63cu;
    // NOP
label_29e640:
    // 0x29e640: 0x0  nop
    ctx->pc = 0x29e640u;
    // NOP
label_29e644:
    // 0x29e644: 0x0  nop
    ctx->pc = 0x29e644u;
    // NOP
label_29e648:
    // 0x29e648: 0x0  nop
    ctx->pc = 0x29e648u;
    // NOP
label_29e64c:
    // 0x29e64c: 0x0  nop
    ctx->pc = 0x29e64cu;
    // NOP
label_29e650:
    // 0x29e650: 0x0  nop
    ctx->pc = 0x29e650u;
    // NOP
label_29e654:
    // 0x29e654: 0x0  nop
    ctx->pc = 0x29e654u;
    // NOP
label_29e658:
    // 0x29e658: 0x0  nop
    ctx->pc = 0x29e658u;
    // NOP
label_29e65c:
    // 0x29e65c: 0x0  nop
    ctx->pc = 0x29e65cu;
    // NOP
label_29e660:
    // 0x29e660: 0x0  nop
    ctx->pc = 0x29e660u;
    // NOP
label_29e664:
    // 0x29e664: 0x0  nop
    ctx->pc = 0x29e664u;
    // NOP
label_29e668:
    // 0x29e668: 0x0  nop
    ctx->pc = 0x29e668u;
    // NOP
label_29e66c:
    // 0x29e66c: 0x0  nop
    ctx->pc = 0x29e66cu;
    // NOP
label_29e670:
    // 0x29e670: 0x0  nop
    ctx->pc = 0x29e670u;
    // NOP
label_29e674:
    // 0x29e674: 0x0  nop
    ctx->pc = 0x29e674u;
    // NOP
label_29e678:
    // 0x29e678: 0x0  nop
    ctx->pc = 0x29e678u;
    // NOP
label_29e67c:
    // 0x29e67c: 0x0  nop
    ctx->pc = 0x29e67cu;
    // NOP
label_29e680:
    // 0x29e680: 0x0  nop
    ctx->pc = 0x29e680u;
    // NOP
label_29e684:
    // 0x29e684: 0x0  nop
    ctx->pc = 0x29e684u;
    // NOP
label_29e688:
    // 0x29e688: 0x0  nop
    ctx->pc = 0x29e688u;
    // NOP
label_29e68c:
    // 0x29e68c: 0x0  nop
    ctx->pc = 0x29e68cu;
    // NOP
label_29e690:
    // 0x29e690: 0x0  nop
    ctx->pc = 0x29e690u;
    // NOP
label_29e694:
    // 0x29e694: 0x0  nop
    ctx->pc = 0x29e694u;
    // NOP
label_29e698:
    // 0x29e698: 0x0  nop
    ctx->pc = 0x29e698u;
    // NOP
label_29e69c:
    // 0x29e69c: 0x0  nop
    ctx->pc = 0x29e69cu;
    // NOP
label_29e6a0:
    // 0x29e6a0: 0x0  nop
    ctx->pc = 0x29e6a0u;
    // NOP
label_29e6a4:
    // 0x29e6a4: 0x0  nop
    ctx->pc = 0x29e6a4u;
    // NOP
label_29e6a8:
    // 0x29e6a8: 0x0  nop
    ctx->pc = 0x29e6a8u;
    // NOP
label_29e6ac:
    // 0x29e6ac: 0x0  nop
    ctx->pc = 0x29e6acu;
    // NOP
label_29e6b0:
    // 0x29e6b0: 0x0  nop
    ctx->pc = 0x29e6b0u;
    // NOP
label_29e6b4:
    // 0x29e6b4: 0x0  nop
    ctx->pc = 0x29e6b4u;
    // NOP
label_29e6b8:
    // 0x29e6b8: 0x0  nop
    ctx->pc = 0x29e6b8u;
    // NOP
label_29e6bc:
    // 0x29e6bc: 0x0  nop
    ctx->pc = 0x29e6bcu;
    // NOP
label_29e6c0:
    // 0x29e6c0: 0x0  nop
    ctx->pc = 0x29e6c0u;
    // NOP
label_29e6c4:
    // 0x29e6c4: 0x0  nop
    ctx->pc = 0x29e6c4u;
    // NOP
label_29e6c8:
    // 0x29e6c8: 0x0  nop
    ctx->pc = 0x29e6c8u;
    // NOP
label_29e6cc:
    // 0x29e6cc: 0x0  nop
    ctx->pc = 0x29e6ccu;
    // NOP
label_29e6d0:
    // 0x29e6d0: 0x0  nop
    ctx->pc = 0x29e6d0u;
    // NOP
label_29e6d4:
    // 0x29e6d4: 0x0  nop
    ctx->pc = 0x29e6d4u;
    // NOP
label_29e6d8:
    // 0x29e6d8: 0x0  nop
    ctx->pc = 0x29e6d8u;
    // NOP
label_29e6dc:
    // 0x29e6dc: 0x0  nop
    ctx->pc = 0x29e6dcu;
    // NOP
label_29e6e0:
    // 0x29e6e0: 0x0  nop
    ctx->pc = 0x29e6e0u;
    // NOP
label_29e6e4:
    // 0x29e6e4: 0x0  nop
    ctx->pc = 0x29e6e4u;
    // NOP
label_29e6e8:
    // 0x29e6e8: 0x0  nop
    ctx->pc = 0x29e6e8u;
    // NOP
label_29e6ec:
    // 0x29e6ec: 0x0  nop
    ctx->pc = 0x29e6ecu;
    // NOP
label_29e6f0:
    // 0x29e6f0: 0x0  nop
    ctx->pc = 0x29e6f0u;
    // NOP
label_29e6f4:
    // 0x29e6f4: 0x0  nop
    ctx->pc = 0x29e6f4u;
    // NOP
label_29e6f8:
    // 0x29e6f8: 0x0  nop
    ctx->pc = 0x29e6f8u;
    // NOP
label_29e6fc:
    // 0x29e6fc: 0x0  nop
    ctx->pc = 0x29e6fcu;
    // NOP
label_29e700:
    // 0x29e700: 0x0  nop
    ctx->pc = 0x29e700u;
    // NOP
label_29e704:
    // 0x29e704: 0x0  nop
    ctx->pc = 0x29e704u;
    // NOP
label_29e708:
    // 0x29e708: 0x0  nop
    ctx->pc = 0x29e708u;
    // NOP
label_29e70c:
    // 0x29e70c: 0x0  nop
    ctx->pc = 0x29e70cu;
    // NOP
label_29e710:
    // 0x29e710: 0x0  nop
    ctx->pc = 0x29e710u;
    // NOP
label_29e714:
    // 0x29e714: 0x0  nop
    ctx->pc = 0x29e714u;
    // NOP
label_29e718:
    // 0x29e718: 0x0  nop
    ctx->pc = 0x29e718u;
    // NOP
label_29e71c:
    // 0x29e71c: 0x0  nop
    ctx->pc = 0x29e71cu;
    // NOP
label_29e720:
    // 0x29e720: 0x0  nop
    ctx->pc = 0x29e720u;
    // NOP
label_29e724:
    // 0x29e724: 0x0  nop
    ctx->pc = 0x29e724u;
    // NOP
label_29e728:
    // 0x29e728: 0x0  nop
    ctx->pc = 0x29e728u;
    // NOP
label_29e72c:
    // 0x29e72c: 0x0  nop
    ctx->pc = 0x29e72cu;
    // NOP
label_29e730:
    // 0x29e730: 0x0  nop
    ctx->pc = 0x29e730u;
    // NOP
label_29e734:
    // 0x29e734: 0x0  nop
    ctx->pc = 0x29e734u;
    // NOP
label_29e738:
    // 0x29e738: 0x0  nop
    ctx->pc = 0x29e738u;
    // NOP
label_29e73c:
    // 0x29e73c: 0x0  nop
    ctx->pc = 0x29e73cu;
    // NOP
label_29e740:
    // 0x29e740: 0x0  nop
    ctx->pc = 0x29e740u;
    // NOP
label_29e744:
    // 0x29e744: 0x0  nop
    ctx->pc = 0x29e744u;
    // NOP
label_29e748:
    // 0x29e748: 0x0  nop
    ctx->pc = 0x29e748u;
    // NOP
label_29e74c:
    // 0x29e74c: 0x0  nop
    ctx->pc = 0x29e74cu;
    // NOP
label_29e750:
    // 0x29e750: 0x0  nop
    ctx->pc = 0x29e750u;
    // NOP
label_29e754:
    // 0x29e754: 0x0  nop
    ctx->pc = 0x29e754u;
    // NOP
label_29e758:
    // 0x29e758: 0x0  nop
    ctx->pc = 0x29e758u;
    // NOP
label_29e75c:
    // 0x29e75c: 0x0  nop
    ctx->pc = 0x29e75cu;
    // NOP
label_29e760:
    // 0x29e760: 0x0  nop
    ctx->pc = 0x29e760u;
    // NOP
label_29e764:
    // 0x29e764: 0x0  nop
    ctx->pc = 0x29e764u;
    // NOP
label_29e768:
    // 0x29e768: 0x0  nop
    ctx->pc = 0x29e768u;
    // NOP
label_29e76c:
    // 0x29e76c: 0x0  nop
    ctx->pc = 0x29e76cu;
    // NOP
label_29e770:
    // 0x29e770: 0x0  nop
    ctx->pc = 0x29e770u;
    // NOP
label_29e774:
    // 0x29e774: 0x0  nop
    ctx->pc = 0x29e774u;
    // NOP
label_29e778:
    // 0x29e778: 0x0  nop
    ctx->pc = 0x29e778u;
    // NOP
label_29e77c:
    // 0x29e77c: 0x0  nop
    ctx->pc = 0x29e77cu;
    // NOP
label_29e780:
    // 0x29e780: 0x0  nop
    ctx->pc = 0x29e780u;
    // NOP
label_29e784:
    // 0x29e784: 0x0  nop
    ctx->pc = 0x29e784u;
    // NOP
label_29e788:
    // 0x29e788: 0x0  nop
    ctx->pc = 0x29e788u;
    // NOP
label_29e78c:
    // 0x29e78c: 0x0  nop
    ctx->pc = 0x29e78cu;
    // NOP
label_29e790:
    // 0x29e790: 0x0  nop
    ctx->pc = 0x29e790u;
    // NOP
label_29e794:
    // 0x29e794: 0x0  nop
    ctx->pc = 0x29e794u;
    // NOP
label_29e798:
    // 0x29e798: 0x0  nop
    ctx->pc = 0x29e798u;
    // NOP
label_29e79c:
    // 0x29e79c: 0x0  nop
    ctx->pc = 0x29e79cu;
    // NOP
label_29e7a0:
    // 0x29e7a0: 0x0  nop
    ctx->pc = 0x29e7a0u;
    // NOP
label_29e7a4:
    // 0x29e7a4: 0x0  nop
    ctx->pc = 0x29e7a4u;
    // NOP
label_29e7a8:
    // 0x29e7a8: 0x0  nop
    ctx->pc = 0x29e7a8u;
    // NOP
label_29e7ac:
    // 0x29e7ac: 0x0  nop
    ctx->pc = 0x29e7acu;
    // NOP
label_29e7b0:
    // 0x29e7b0: 0x0  nop
    ctx->pc = 0x29e7b0u;
    // NOP
label_29e7b4:
    // 0x29e7b4: 0x0  nop
    ctx->pc = 0x29e7b4u;
    // NOP
label_29e7b8:
    // 0x29e7b8: 0x0  nop
    ctx->pc = 0x29e7b8u;
    // NOP
label_29e7bc:
    // 0x29e7bc: 0x0  nop
    ctx->pc = 0x29e7bcu;
    // NOP
label_29e7c0:
    // 0x29e7c0: 0x0  nop
    ctx->pc = 0x29e7c0u;
    // NOP
label_29e7c4:
    // 0x29e7c4: 0x0  nop
    ctx->pc = 0x29e7c4u;
    // NOP
label_29e7c8:
    // 0x29e7c8: 0x0  nop
    ctx->pc = 0x29e7c8u;
    // NOP
label_29e7cc:
    // 0x29e7cc: 0x0  nop
    ctx->pc = 0x29e7ccu;
    // NOP
label_29e7d0:
    // 0x29e7d0: 0x0  nop
    ctx->pc = 0x29e7d0u;
    // NOP
label_29e7d4:
    // 0x29e7d4: 0x0  nop
    ctx->pc = 0x29e7d4u;
    // NOP
label_29e7d8:
    // 0x29e7d8: 0x0  nop
    ctx->pc = 0x29e7d8u;
    // NOP
label_29e7dc:
    // 0x29e7dc: 0x0  nop
    ctx->pc = 0x29e7dcu;
    // NOP
label_29e7e0:
    // 0x29e7e0: 0x0  nop
    ctx->pc = 0x29e7e0u;
    // NOP
label_29e7e4:
    // 0x29e7e4: 0x0  nop
    ctx->pc = 0x29e7e4u;
    // NOP
label_29e7e8:
    // 0x29e7e8: 0x0  nop
    ctx->pc = 0x29e7e8u;
    // NOP
label_29e7ec:
    // 0x29e7ec: 0x0  nop
    ctx->pc = 0x29e7ecu;
    // NOP
label_29e7f0:
    // 0x29e7f0: 0x0  nop
    ctx->pc = 0x29e7f0u;
    // NOP
label_29e7f4:
    // 0x29e7f4: 0x0  nop
    ctx->pc = 0x29e7f4u;
    // NOP
label_29e7f8:
    // 0x29e7f8: 0x0  nop
    ctx->pc = 0x29e7f8u;
    // NOP
label_29e7fc:
    // 0x29e7fc: 0x0  nop
    ctx->pc = 0x29e7fcu;
    // NOP
label_29e800:
    // 0x29e800: 0x0  nop
    ctx->pc = 0x29e800u;
    // NOP
label_29e804:
    // 0x29e804: 0x0  nop
    ctx->pc = 0x29e804u;
    // NOP
label_29e808:
    // 0x29e808: 0x0  nop
    ctx->pc = 0x29e808u;
    // NOP
label_29e80c:
    // 0x29e80c: 0x0  nop
    ctx->pc = 0x29e80cu;
    // NOP
label_29e810:
    // 0x29e810: 0x0  nop
    ctx->pc = 0x29e810u;
    // NOP
label_29e814:
    // 0x29e814: 0x0  nop
    ctx->pc = 0x29e814u;
    // NOP
label_29e818:
    // 0x29e818: 0x0  nop
    ctx->pc = 0x29e818u;
    // NOP
label_29e81c:
    // 0x29e81c: 0x0  nop
    ctx->pc = 0x29e81cu;
    // NOP
label_29e820:
    // 0x29e820: 0x0  nop
    ctx->pc = 0x29e820u;
    // NOP
label_29e824:
    // 0x29e824: 0x0  nop
    ctx->pc = 0x29e824u;
    // NOP
label_29e828:
    // 0x29e828: 0x0  nop
    ctx->pc = 0x29e828u;
    // NOP
label_29e82c:
    // 0x29e82c: 0x0  nop
    ctx->pc = 0x29e82cu;
    // NOP
label_29e830:
    // 0x29e830: 0x0  nop
    ctx->pc = 0x29e830u;
    // NOP
label_29e834:
    // 0x29e834: 0x0  nop
    ctx->pc = 0x29e834u;
    // NOP
label_29e838:
    // 0x29e838: 0x0  nop
    ctx->pc = 0x29e838u;
    // NOP
label_29e83c:
    // 0x29e83c: 0x0  nop
    ctx->pc = 0x29e83cu;
    // NOP
label_29e840:
    // 0x29e840: 0x0  nop
    ctx->pc = 0x29e840u;
    // NOP
label_29e844:
    // 0x29e844: 0x0  nop
    ctx->pc = 0x29e844u;
    // NOP
label_29e848:
    // 0x29e848: 0x0  nop
    ctx->pc = 0x29e848u;
    // NOP
label_29e84c:
    // 0x29e84c: 0x0  nop
    ctx->pc = 0x29e84cu;
    // NOP
label_29e850:
    // 0x29e850: 0x0  nop
    ctx->pc = 0x29e850u;
    // NOP
label_29e854:
    // 0x29e854: 0x0  nop
    ctx->pc = 0x29e854u;
    // NOP
label_29e858:
    // 0x29e858: 0x0  nop
    ctx->pc = 0x29e858u;
    // NOP
label_29e85c:
    // 0x29e85c: 0x0  nop
    ctx->pc = 0x29e85cu;
    // NOP
label_29e860:
    // 0x29e860: 0x0  nop
    ctx->pc = 0x29e860u;
    // NOP
label_29e864:
    // 0x29e864: 0x0  nop
    ctx->pc = 0x29e864u;
    // NOP
label_29e868:
    // 0x29e868: 0x0  nop
    ctx->pc = 0x29e868u;
    // NOP
label_29e86c:
    // 0x29e86c: 0x0  nop
    ctx->pc = 0x29e86cu;
    // NOP
label_29e870:
    // 0x29e870: 0x0  nop
    ctx->pc = 0x29e870u;
    // NOP
label_29e874:
    // 0x29e874: 0x0  nop
    ctx->pc = 0x29e874u;
    // NOP
label_29e878:
    // 0x29e878: 0x0  nop
    ctx->pc = 0x29e878u;
    // NOP
label_29e87c:
    // 0x29e87c: 0x0  nop
    ctx->pc = 0x29e87cu;
    // NOP
label_29e880:
    // 0x29e880: 0x0  nop
    ctx->pc = 0x29e880u;
    // NOP
label_29e884:
    // 0x29e884: 0x0  nop
    ctx->pc = 0x29e884u;
    // NOP
label_29e888:
    // 0x29e888: 0x0  nop
    ctx->pc = 0x29e888u;
    // NOP
label_29e88c:
    // 0x29e88c: 0x0  nop
    ctx->pc = 0x29e88cu;
    // NOP
label_29e890:
    // 0x29e890: 0x0  nop
    ctx->pc = 0x29e890u;
    // NOP
label_29e894:
    // 0x29e894: 0x0  nop
    ctx->pc = 0x29e894u;
    // NOP
label_29e898:
    // 0x29e898: 0x0  nop
    ctx->pc = 0x29e898u;
    // NOP
label_29e89c:
    // 0x29e89c: 0x0  nop
    ctx->pc = 0x29e89cu;
    // NOP
label_29e8a0:
    // 0x29e8a0: 0x0  nop
    ctx->pc = 0x29e8a0u;
    // NOP
label_29e8a4:
    // 0x29e8a4: 0x0  nop
    ctx->pc = 0x29e8a4u;
    // NOP
label_29e8a8:
    // 0x29e8a8: 0x0  nop
    ctx->pc = 0x29e8a8u;
    // NOP
label_29e8ac:
    // 0x29e8ac: 0x0  nop
    ctx->pc = 0x29e8acu;
    // NOP
label_29e8b0:
    // 0x29e8b0: 0x0  nop
    ctx->pc = 0x29e8b0u;
    // NOP
label_29e8b4:
    // 0x29e8b4: 0x0  nop
    ctx->pc = 0x29e8b4u;
    // NOP
label_29e8b8:
    // 0x29e8b8: 0x0  nop
    ctx->pc = 0x29e8b8u;
    // NOP
label_29e8bc:
    // 0x29e8bc: 0x0  nop
    ctx->pc = 0x29e8bcu;
    // NOP
label_29e8c0:
    // 0x29e8c0: 0x0  nop
    ctx->pc = 0x29e8c0u;
    // NOP
label_29e8c4:
    // 0x29e8c4: 0x0  nop
    ctx->pc = 0x29e8c4u;
    // NOP
    ctx->pc = 0x29e8c8u;
    return;
}
