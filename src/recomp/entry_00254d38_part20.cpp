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

// Function: entry_00254d38
// Address: 0x254d38 - 0x27d478
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void entry_00254d38_part20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x25e1a8u: goto label_25e1a8;
        case 0x25e1acu: goto label_25e1ac;
        case 0x25e1b0u: goto label_25e1b0;
        case 0x25e1b4u: goto label_25e1b4;
        case 0x25e1b8u: goto label_25e1b8;
        case 0x25e1bcu: goto label_25e1bc;
        case 0x25e1c0u: goto label_25e1c0;
        case 0x25e1c4u: goto label_25e1c4;
        case 0x25e1c8u: goto label_25e1c8;
        case 0x25e1ccu: goto label_25e1cc;
        case 0x25e1d0u: goto label_25e1d0;
        case 0x25e1d4u: goto label_25e1d4;
        case 0x25e1d8u: goto label_25e1d8;
        case 0x25e1dcu: goto label_25e1dc;
        case 0x25e1e0u: goto label_25e1e0;
        case 0x25e1e4u: goto label_25e1e4;
        case 0x25e1e8u: goto label_25e1e8;
        case 0x25e1ecu: goto label_25e1ec;
        case 0x25e1f0u: goto label_25e1f0;
        case 0x25e1f4u: goto label_25e1f4;
        case 0x25e1f8u: goto label_25e1f8;
        case 0x25e1fcu: goto label_25e1fc;
        case 0x25e200u: goto label_25e200;
        case 0x25e204u: goto label_25e204;
        case 0x25e208u: goto label_25e208;
        case 0x25e20cu: goto label_25e20c;
        case 0x25e210u: goto label_25e210;
        case 0x25e214u: goto label_25e214;
        case 0x25e218u: goto label_25e218;
        case 0x25e21cu: goto label_25e21c;
        case 0x25e220u: goto label_25e220;
        case 0x25e224u: goto label_25e224;
        case 0x25e228u: goto label_25e228;
        case 0x25e22cu: goto label_25e22c;
        case 0x25e230u: goto label_25e230;
        case 0x25e234u: goto label_25e234;
        case 0x25e238u: goto label_25e238;
        case 0x25e23cu: goto label_25e23c;
        case 0x25e240u: goto label_25e240;
        case 0x25e244u: goto label_25e244;
        case 0x25e248u: goto label_25e248;
        case 0x25e24cu: goto label_25e24c;
        case 0x25e250u: goto label_25e250;
        case 0x25e254u: goto label_25e254;
        case 0x25e258u: goto label_25e258;
        case 0x25e25cu: goto label_25e25c;
        case 0x25e260u: goto label_25e260;
        case 0x25e264u: goto label_25e264;
        case 0x25e268u: goto label_25e268;
        case 0x25e26cu: goto label_25e26c;
        case 0x25e270u: goto label_25e270;
        case 0x25e274u: goto label_25e274;
        case 0x25e278u: goto label_25e278;
        case 0x25e27cu: goto label_25e27c;
        case 0x25e280u: goto label_25e280;
        case 0x25e284u: goto label_25e284;
        case 0x25e288u: goto label_25e288;
        case 0x25e28cu: goto label_25e28c;
        case 0x25e290u: goto label_25e290;
        case 0x25e294u: goto label_25e294;
        case 0x25e298u: goto label_25e298;
        case 0x25e29cu: goto label_25e29c;
        case 0x25e2a0u: goto label_25e2a0;
        case 0x25e2a4u: goto label_25e2a4;
        case 0x25e2a8u: goto label_25e2a8;
        case 0x25e2acu: goto label_25e2ac;
        case 0x25e2b0u: goto label_25e2b0;
        case 0x25e2b4u: goto label_25e2b4;
        case 0x25e2b8u: goto label_25e2b8;
        case 0x25e2bcu: goto label_25e2bc;
        case 0x25e2c0u: goto label_25e2c0;
        case 0x25e2c4u: goto label_25e2c4;
        case 0x25e2c8u: goto label_25e2c8;
        case 0x25e2ccu: goto label_25e2cc;
        case 0x25e2d0u: goto label_25e2d0;
        case 0x25e2d4u: goto label_25e2d4;
        case 0x25e2d8u: goto label_25e2d8;
        case 0x25e2dcu: goto label_25e2dc;
        case 0x25e2e0u: goto label_25e2e0;
        case 0x25e2e4u: goto label_25e2e4;
        case 0x25e2e8u: goto label_25e2e8;
        case 0x25e2ecu: goto label_25e2ec;
        case 0x25e2f0u: goto label_25e2f0;
        case 0x25e2f4u: goto label_25e2f4;
        case 0x25e2f8u: goto label_25e2f8;
        case 0x25e2fcu: goto label_25e2fc;
        case 0x25e300u: goto label_25e300;
        case 0x25e304u: goto label_25e304;
        case 0x25e308u: goto label_25e308;
        case 0x25e30cu: goto label_25e30c;
        case 0x25e310u: goto label_25e310;
        case 0x25e314u: goto label_25e314;
        case 0x25e318u: goto label_25e318;
        case 0x25e31cu: goto label_25e31c;
        case 0x25e320u: goto label_25e320;
        case 0x25e324u: goto label_25e324;
        case 0x25e328u: goto label_25e328;
        case 0x25e32cu: goto label_25e32c;
        case 0x25e330u: goto label_25e330;
        case 0x25e334u: goto label_25e334;
        case 0x25e338u: goto label_25e338;
        case 0x25e33cu: goto label_25e33c;
        case 0x25e340u: goto label_25e340;
        case 0x25e344u: goto label_25e344;
        case 0x25e348u: goto label_25e348;
        case 0x25e34cu: goto label_25e34c;
        case 0x25e350u: goto label_25e350;
        case 0x25e354u: goto label_25e354;
        case 0x25e358u: goto label_25e358;
        case 0x25e35cu: goto label_25e35c;
        case 0x25e360u: goto label_25e360;
        case 0x25e364u: goto label_25e364;
        case 0x25e368u: goto label_25e368;
        case 0x25e36cu: goto label_25e36c;
        case 0x25e370u: goto label_25e370;
        case 0x25e374u: goto label_25e374;
        case 0x25e378u: goto label_25e378;
        case 0x25e37cu: goto label_25e37c;
        case 0x25e380u: goto label_25e380;
        case 0x25e384u: goto label_25e384;
        case 0x25e388u: goto label_25e388;
        case 0x25e38cu: goto label_25e38c;
        case 0x25e390u: goto label_25e390;
        case 0x25e394u: goto label_25e394;
        case 0x25e398u: goto label_25e398;
        case 0x25e39cu: goto label_25e39c;
        case 0x25e3a0u: goto label_25e3a0;
        case 0x25e3a4u: goto label_25e3a4;
        case 0x25e3a8u: goto label_25e3a8;
        case 0x25e3acu: goto label_25e3ac;
        case 0x25e3b0u: goto label_25e3b0;
        case 0x25e3b4u: goto label_25e3b4;
        case 0x25e3b8u: goto label_25e3b8;
        case 0x25e3bcu: goto label_25e3bc;
        case 0x25e3c0u: goto label_25e3c0;
        case 0x25e3c4u: goto label_25e3c4;
        case 0x25e3c8u: goto label_25e3c8;
        case 0x25e3ccu: goto label_25e3cc;
        case 0x25e3d0u: goto label_25e3d0;
        case 0x25e3d4u: goto label_25e3d4;
        case 0x25e3d8u: goto label_25e3d8;
        case 0x25e3dcu: goto label_25e3dc;
        case 0x25e3e0u: goto label_25e3e0;
        case 0x25e3e4u: goto label_25e3e4;
        case 0x25e3e8u: goto label_25e3e8;
        case 0x25e3ecu: goto label_25e3ec;
        case 0x25e3f0u: goto label_25e3f0;
        case 0x25e3f4u: goto label_25e3f4;
        case 0x25e3f8u: goto label_25e3f8;
        case 0x25e3fcu: goto label_25e3fc;
        case 0x25e400u: goto label_25e400;
        case 0x25e404u: goto label_25e404;
        case 0x25e408u: goto label_25e408;
        case 0x25e40cu: goto label_25e40c;
        case 0x25e410u: goto label_25e410;
        case 0x25e414u: goto label_25e414;
        case 0x25e418u: goto label_25e418;
        case 0x25e41cu: goto label_25e41c;
        case 0x25e420u: goto label_25e420;
        case 0x25e424u: goto label_25e424;
        case 0x25e428u: goto label_25e428;
        case 0x25e42cu: goto label_25e42c;
        case 0x25e430u: goto label_25e430;
        case 0x25e434u: goto label_25e434;
        case 0x25e438u: goto label_25e438;
        case 0x25e43cu: goto label_25e43c;
        case 0x25e440u: goto label_25e440;
        case 0x25e444u: goto label_25e444;
        case 0x25e448u: goto label_25e448;
        case 0x25e44cu: goto label_25e44c;
        case 0x25e450u: goto label_25e450;
        case 0x25e454u: goto label_25e454;
        case 0x25e458u: goto label_25e458;
        case 0x25e45cu: goto label_25e45c;
        case 0x25e460u: goto label_25e460;
        case 0x25e464u: goto label_25e464;
        case 0x25e468u: goto label_25e468;
        case 0x25e46cu: goto label_25e46c;
        case 0x25e470u: goto label_25e470;
        case 0x25e474u: goto label_25e474;
        case 0x25e478u: goto label_25e478;
        case 0x25e47cu: goto label_25e47c;
        case 0x25e480u: goto label_25e480;
        case 0x25e484u: goto label_25e484;
        case 0x25e488u: goto label_25e488;
        case 0x25e48cu: goto label_25e48c;
        case 0x25e490u: goto label_25e490;
        case 0x25e494u: goto label_25e494;
        case 0x25e498u: goto label_25e498;
        case 0x25e49cu: goto label_25e49c;
        case 0x25e4a0u: goto label_25e4a0;
        case 0x25e4a4u: goto label_25e4a4;
        case 0x25e4a8u: goto label_25e4a8;
        case 0x25e4acu: goto label_25e4ac;
        case 0x25e4b0u: goto label_25e4b0;
        case 0x25e4b4u: goto label_25e4b4;
        case 0x25e4b8u: goto label_25e4b8;
        case 0x25e4bcu: goto label_25e4bc;
        case 0x25e4c0u: goto label_25e4c0;
        case 0x25e4c4u: goto label_25e4c4;
        case 0x25e4c8u: goto label_25e4c8;
        case 0x25e4ccu: goto label_25e4cc;
        case 0x25e4d0u: goto label_25e4d0;
        case 0x25e4d4u: goto label_25e4d4;
        case 0x25e4d8u: goto label_25e4d8;
        case 0x25e4dcu: goto label_25e4dc;
        case 0x25e4e0u: goto label_25e4e0;
        case 0x25e4e4u: goto label_25e4e4;
        case 0x25e4e8u: goto label_25e4e8;
        case 0x25e4ecu: goto label_25e4ec;
        case 0x25e4f0u: goto label_25e4f0;
        case 0x25e4f4u: goto label_25e4f4;
        case 0x25e4f8u: goto label_25e4f8;
        case 0x25e4fcu: goto label_25e4fc;
        case 0x25e500u: goto label_25e500;
        case 0x25e504u: goto label_25e504;
        case 0x25e508u: goto label_25e508;
        case 0x25e50cu: goto label_25e50c;
        case 0x25e510u: goto label_25e510;
        case 0x25e514u: goto label_25e514;
        case 0x25e518u: goto label_25e518;
        case 0x25e51cu: goto label_25e51c;
        case 0x25e520u: goto label_25e520;
        case 0x25e524u: goto label_25e524;
        case 0x25e528u: goto label_25e528;
        case 0x25e52cu: goto label_25e52c;
        case 0x25e530u: goto label_25e530;
        case 0x25e534u: goto label_25e534;
        case 0x25e538u: goto label_25e538;
        case 0x25e53cu: goto label_25e53c;
        case 0x25e540u: goto label_25e540;
        case 0x25e544u: goto label_25e544;
        case 0x25e548u: goto label_25e548;
        case 0x25e54cu: goto label_25e54c;
        case 0x25e550u: goto label_25e550;
        case 0x25e554u: goto label_25e554;
        case 0x25e558u: goto label_25e558;
        case 0x25e55cu: goto label_25e55c;
        case 0x25e560u: goto label_25e560;
        case 0x25e564u: goto label_25e564;
        case 0x25e568u: goto label_25e568;
        case 0x25e56cu: goto label_25e56c;
        case 0x25e570u: goto label_25e570;
        case 0x25e574u: goto label_25e574;
        case 0x25e578u: goto label_25e578;
        case 0x25e57cu: goto label_25e57c;
        case 0x25e580u: goto label_25e580;
        case 0x25e584u: goto label_25e584;
        case 0x25e588u: goto label_25e588;
        case 0x25e58cu: goto label_25e58c;
        case 0x25e590u: goto label_25e590;
        case 0x25e594u: goto label_25e594;
        case 0x25e598u: goto label_25e598;
        case 0x25e59cu: goto label_25e59c;
        case 0x25e5a0u: goto label_25e5a0;
        case 0x25e5a4u: goto label_25e5a4;
        case 0x25e5a8u: goto label_25e5a8;
        case 0x25e5acu: goto label_25e5ac;
        case 0x25e5b0u: goto label_25e5b0;
        case 0x25e5b4u: goto label_25e5b4;
        case 0x25e5b8u: goto label_25e5b8;
        case 0x25e5bcu: goto label_25e5bc;
        case 0x25e5c0u: goto label_25e5c0;
        case 0x25e5c4u: goto label_25e5c4;
        case 0x25e5c8u: goto label_25e5c8;
        case 0x25e5ccu: goto label_25e5cc;
        case 0x25e5d0u: goto label_25e5d0;
        case 0x25e5d4u: goto label_25e5d4;
        case 0x25e5d8u: goto label_25e5d8;
        case 0x25e5dcu: goto label_25e5dc;
        case 0x25e5e0u: goto label_25e5e0;
        case 0x25e5e4u: goto label_25e5e4;
        case 0x25e5e8u: goto label_25e5e8;
        case 0x25e5ecu: goto label_25e5ec;
        case 0x25e5f0u: goto label_25e5f0;
        case 0x25e5f4u: goto label_25e5f4;
        case 0x25e5f8u: goto label_25e5f8;
        case 0x25e5fcu: goto label_25e5fc;
        case 0x25e600u: goto label_25e600;
        case 0x25e604u: goto label_25e604;
        case 0x25e608u: goto label_25e608;
        case 0x25e60cu: goto label_25e60c;
        case 0x25e610u: goto label_25e610;
        case 0x25e614u: goto label_25e614;
        case 0x25e618u: goto label_25e618;
        case 0x25e61cu: goto label_25e61c;
        case 0x25e620u: goto label_25e620;
        case 0x25e624u: goto label_25e624;
        case 0x25e628u: goto label_25e628;
        case 0x25e62cu: goto label_25e62c;
        case 0x25e630u: goto label_25e630;
        case 0x25e634u: goto label_25e634;
        case 0x25e638u: goto label_25e638;
        case 0x25e63cu: goto label_25e63c;
        case 0x25e640u: goto label_25e640;
        case 0x25e644u: goto label_25e644;
        case 0x25e648u: goto label_25e648;
        case 0x25e64cu: goto label_25e64c;
        case 0x25e650u: goto label_25e650;
        case 0x25e654u: goto label_25e654;
        case 0x25e658u: goto label_25e658;
        case 0x25e65cu: goto label_25e65c;
        case 0x25e660u: goto label_25e660;
        case 0x25e664u: goto label_25e664;
        case 0x25e668u: goto label_25e668;
        case 0x25e66cu: goto label_25e66c;
        case 0x25e670u: goto label_25e670;
        case 0x25e674u: goto label_25e674;
        case 0x25e678u: goto label_25e678;
        case 0x25e67cu: goto label_25e67c;
        case 0x25e680u: goto label_25e680;
        case 0x25e684u: goto label_25e684;
        case 0x25e688u: goto label_25e688;
        case 0x25e68cu: goto label_25e68c;
        case 0x25e690u: goto label_25e690;
        case 0x25e694u: goto label_25e694;
        case 0x25e698u: goto label_25e698;
        case 0x25e69cu: goto label_25e69c;
        case 0x25e6a0u: goto label_25e6a0;
        case 0x25e6a4u: goto label_25e6a4;
        case 0x25e6a8u: goto label_25e6a8;
        case 0x25e6acu: goto label_25e6ac;
        case 0x25e6b0u: goto label_25e6b0;
        case 0x25e6b4u: goto label_25e6b4;
        case 0x25e6b8u: goto label_25e6b8;
        case 0x25e6bcu: goto label_25e6bc;
        case 0x25e6c0u: goto label_25e6c0;
        case 0x25e6c4u: goto label_25e6c4;
        case 0x25e6c8u: goto label_25e6c8;
        case 0x25e6ccu: goto label_25e6cc;
        case 0x25e6d0u: goto label_25e6d0;
        case 0x25e6d4u: goto label_25e6d4;
        case 0x25e6d8u: goto label_25e6d8;
        case 0x25e6dcu: goto label_25e6dc;
        case 0x25e6e0u: goto label_25e6e0;
        case 0x25e6e4u: goto label_25e6e4;
        case 0x25e6e8u: goto label_25e6e8;
        case 0x25e6ecu: goto label_25e6ec;
        case 0x25e6f0u: goto label_25e6f0;
        case 0x25e6f4u: goto label_25e6f4;
        case 0x25e6f8u: goto label_25e6f8;
        case 0x25e6fcu: goto label_25e6fc;
        case 0x25e700u: goto label_25e700;
        case 0x25e704u: goto label_25e704;
        case 0x25e708u: goto label_25e708;
        case 0x25e70cu: goto label_25e70c;
        case 0x25e710u: goto label_25e710;
        case 0x25e714u: goto label_25e714;
        case 0x25e718u: goto label_25e718;
        case 0x25e71cu: goto label_25e71c;
        case 0x25e720u: goto label_25e720;
        case 0x25e724u: goto label_25e724;
        case 0x25e728u: goto label_25e728;
        case 0x25e72cu: goto label_25e72c;
        case 0x25e730u: goto label_25e730;
        case 0x25e734u: goto label_25e734;
        case 0x25e738u: goto label_25e738;
        case 0x25e73cu: goto label_25e73c;
        case 0x25e740u: goto label_25e740;
        case 0x25e744u: goto label_25e744;
        case 0x25e748u: goto label_25e748;
        case 0x25e74cu: goto label_25e74c;
        case 0x25e750u: goto label_25e750;
        case 0x25e754u: goto label_25e754;
        case 0x25e758u: goto label_25e758;
        case 0x25e75cu: goto label_25e75c;
        case 0x25e760u: goto label_25e760;
        case 0x25e764u: goto label_25e764;
        case 0x25e768u: goto label_25e768;
        case 0x25e76cu: goto label_25e76c;
        case 0x25e770u: goto label_25e770;
        case 0x25e774u: goto label_25e774;
        case 0x25e778u: goto label_25e778;
        case 0x25e77cu: goto label_25e77c;
        case 0x25e780u: goto label_25e780;
        case 0x25e784u: goto label_25e784;
        case 0x25e788u: goto label_25e788;
        case 0x25e78cu: goto label_25e78c;
        case 0x25e790u: goto label_25e790;
        case 0x25e794u: goto label_25e794;
        case 0x25e798u: goto label_25e798;
        case 0x25e79cu: goto label_25e79c;
        case 0x25e7a0u: goto label_25e7a0;
        case 0x25e7a4u: goto label_25e7a4;
        case 0x25e7a8u: goto label_25e7a8;
        case 0x25e7acu: goto label_25e7ac;
        case 0x25e7b0u: goto label_25e7b0;
        case 0x25e7b4u: goto label_25e7b4;
        case 0x25e7b8u: goto label_25e7b8;
        case 0x25e7bcu: goto label_25e7bc;
        case 0x25e7c0u: goto label_25e7c0;
        case 0x25e7c4u: goto label_25e7c4;
        case 0x25e7c8u: goto label_25e7c8;
        case 0x25e7ccu: goto label_25e7cc;
        case 0x25e7d0u: goto label_25e7d0;
        case 0x25e7d4u: goto label_25e7d4;
        case 0x25e7d8u: goto label_25e7d8;
        case 0x25e7dcu: goto label_25e7dc;
        case 0x25e7e0u: goto label_25e7e0;
        case 0x25e7e4u: goto label_25e7e4;
        case 0x25e7e8u: goto label_25e7e8;
        case 0x25e7ecu: goto label_25e7ec;
        case 0x25e7f0u: goto label_25e7f0;
        case 0x25e7f4u: goto label_25e7f4;
        case 0x25e7f8u: goto label_25e7f8;
        case 0x25e7fcu: goto label_25e7fc;
        case 0x25e800u: goto label_25e800;
        case 0x25e804u: goto label_25e804;
        case 0x25e808u: goto label_25e808;
        case 0x25e80cu: goto label_25e80c;
        case 0x25e810u: goto label_25e810;
        case 0x25e814u: goto label_25e814;
        case 0x25e818u: goto label_25e818;
        case 0x25e81cu: goto label_25e81c;
        case 0x25e820u: goto label_25e820;
        case 0x25e824u: goto label_25e824;
        case 0x25e828u: goto label_25e828;
        case 0x25e82cu: goto label_25e82c;
        case 0x25e830u: goto label_25e830;
        case 0x25e834u: goto label_25e834;
        case 0x25e838u: goto label_25e838;
        case 0x25e83cu: goto label_25e83c;
        case 0x25e840u: goto label_25e840;
        case 0x25e844u: goto label_25e844;
        case 0x25e848u: goto label_25e848;
        case 0x25e84cu: goto label_25e84c;
        case 0x25e850u: goto label_25e850;
        case 0x25e854u: goto label_25e854;
        case 0x25e858u: goto label_25e858;
        case 0x25e85cu: goto label_25e85c;
        case 0x25e860u: goto label_25e860;
        case 0x25e864u: goto label_25e864;
        case 0x25e868u: goto label_25e868;
        case 0x25e86cu: goto label_25e86c;
        case 0x25e870u: goto label_25e870;
        case 0x25e874u: goto label_25e874;
        case 0x25e878u: goto label_25e878;
        case 0x25e87cu: goto label_25e87c;
        case 0x25e880u: goto label_25e880;
        case 0x25e884u: goto label_25e884;
        case 0x25e888u: goto label_25e888;
        case 0x25e88cu: goto label_25e88c;
        case 0x25e890u: goto label_25e890;
        case 0x25e894u: goto label_25e894;
        case 0x25e898u: goto label_25e898;
        case 0x25e89cu: goto label_25e89c;
        case 0x25e8a0u: goto label_25e8a0;
        case 0x25e8a4u: goto label_25e8a4;
        case 0x25e8a8u: goto label_25e8a8;
        case 0x25e8acu: goto label_25e8ac;
        case 0x25e8b0u: goto label_25e8b0;
        case 0x25e8b4u: goto label_25e8b4;
        case 0x25e8b8u: goto label_25e8b8;
        case 0x25e8bcu: goto label_25e8bc;
        case 0x25e8c0u: goto label_25e8c0;
        case 0x25e8c4u: goto label_25e8c4;
        case 0x25e8c8u: goto label_25e8c8;
        case 0x25e8ccu: goto label_25e8cc;
        case 0x25e8d0u: goto label_25e8d0;
        case 0x25e8d4u: goto label_25e8d4;
        case 0x25e8d8u: goto label_25e8d8;
        case 0x25e8dcu: goto label_25e8dc;
        case 0x25e8e0u: goto label_25e8e0;
        case 0x25e8e4u: goto label_25e8e4;
        case 0x25e8e8u: goto label_25e8e8;
        case 0x25e8ecu: goto label_25e8ec;
        case 0x25e8f0u: goto label_25e8f0;
        case 0x25e8f4u: goto label_25e8f4;
        case 0x25e8f8u: goto label_25e8f8;
        case 0x25e8fcu: goto label_25e8fc;
        case 0x25e900u: goto label_25e900;
        case 0x25e904u: goto label_25e904;
        case 0x25e908u: goto label_25e908;
        case 0x25e90cu: goto label_25e90c;
        case 0x25e910u: goto label_25e910;
        case 0x25e914u: goto label_25e914;
        case 0x25e918u: goto label_25e918;
        case 0x25e91cu: goto label_25e91c;
        case 0x25e920u: goto label_25e920;
        case 0x25e924u: goto label_25e924;
        case 0x25e928u: goto label_25e928;
        case 0x25e92cu: goto label_25e92c;
        case 0x25e930u: goto label_25e930;
        case 0x25e934u: goto label_25e934;
        case 0x25e938u: goto label_25e938;
        case 0x25e93cu: goto label_25e93c;
        case 0x25e940u: goto label_25e940;
        case 0x25e944u: goto label_25e944;
        case 0x25e948u: goto label_25e948;
        case 0x25e94cu: goto label_25e94c;
        case 0x25e950u: goto label_25e950;
        case 0x25e954u: goto label_25e954;
        case 0x25e958u: goto label_25e958;
        case 0x25e95cu: goto label_25e95c;
        case 0x25e960u: goto label_25e960;
        case 0x25e964u: goto label_25e964;
        case 0x25e968u: goto label_25e968;
        case 0x25e96cu: goto label_25e96c;
        case 0x25e970u: goto label_25e970;
        case 0x25e974u: goto label_25e974;
        default: return;
    }

label_25e1a8:
    // 0x25e1a8: 0x0  nop
    ctx->pc = 0x25e1a8u;
    // NOP
label_25e1ac:
    // 0x25e1ac: 0x0  nop
    ctx->pc = 0x25e1acu;
    // NOP
label_25e1b0:
    // 0x25e1b0: 0x81f6  tne         $zero, $zero, 519
    ctx->pc = 0x25e1b0u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25e1b4:
    // 0x25e1b4: 0x6640  sll         $t4, $zero, 25
    ctx->pc = 0x25e1b4u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 25));
label_25e1b8:
    // 0x25e1b8: 0x0  nop
    ctx->pc = 0x25e1b8u;
    // NOP
label_25e1bc:
    // 0x25e1bc: 0x0  nop
    ctx->pc = 0x25e1bcu;
    // NOP
label_25e1c0:
    // 0x25e1c0: 0x8203  sra         $s0, $zero, 8
    ctx->pc = 0x25e1c0u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 0), 8));
label_25e1c4:
    // 0x25e1c4: 0x43a0  .word       0x000043A0                   # add         $t0, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e1c4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
label_25e1c8:
    // 0x25e1c8: 0x0  nop
    ctx->pc = 0x25e1c8u;
    // NOP
label_25e1cc:
    // 0x25e1cc: 0x0  nop
    ctx->pc = 0x25e1ccu;
    // NOP
label_25e1d0:
    // 0x25e1d0: 0x820c  syscall     520
    ctx->pc = 0x25e1d0u;
    ctx->pc = 0x25E1D4u;
runtime->handleSyscall(rdram, ctx, 0x208u);
label_25e1d4:
    // 0x25e1d4: 0x6bf0  tge         $zero, $zero, 431
    ctx->pc = 0x25e1d4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25e1d8:
    // 0x25e1d8: 0x0  nop
    ctx->pc = 0x25e1d8u;
    // NOP
label_25e1dc:
    // 0x25e1dc: 0x0  nop
    ctx->pc = 0x25e1dcu;
    // NOP
label_25e1e0:
    // 0x25e1e0: 0x821a  .word       0x0000821A                   # div         $s0, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e1e0u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_25e1e4:
    // 0x25e1e4: 0x6550  .word       0x00006550                   # mfhi        $t4 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e1e4u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_25e1e8:
    // 0x25e1e8: 0x0  nop
    ctx->pc = 0x25e1e8u;
    // NOP
label_25e1ec:
    // 0x25e1ec: 0x0  nop
    ctx->pc = 0x25e1ecu;
    // NOP
label_25e1f0:
    // 0x25e1f0: 0x8227  .word       0x00008227                   # not         $s0, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e1f0u;
    SET_GPR_U64(ctx, 16, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_25e1f4:
    // 0x25e1f4: 0x4d00  sll         $t1, $zero, 20
    ctx->pc = 0x25e1f4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), 20));
label_25e1f8:
    // 0x25e1f8: 0x0  nop
    ctx->pc = 0x25e1f8u;
    // NOP
label_25e1fc:
    // 0x25e1fc: 0x0  nop
    ctx->pc = 0x25e1fcu;
    // NOP
label_25e200:
    // 0x25e200: 0x8231  tgeu        $zero, $zero, 520
    ctx->pc = 0x25e200u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25e204:
    // 0x25e204: 0x6df0  tge         $zero, $zero, 439
    ctx->pc = 0x25e204u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25e208:
    // 0x25e208: 0x0  nop
    ctx->pc = 0x25e208u;
    // NOP
label_25e20c:
    // 0x25e20c: 0x0  nop
    ctx->pc = 0x25e20cu;
    // NOP
label_25e210:
    // 0x25e210: 0x823f  dsra32      $s0, $zero, 8
    ctx->pc = 0x25e210u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 0) >> (32 + 8));
label_25e214:
    // 0x25e214: 0x43f0  tge         $zero, $zero, 271
    ctx->pc = 0x25e214u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25e218:
    // 0x25e218: 0x0  nop
    ctx->pc = 0x25e218u;
    // NOP
label_25e21c:
    // 0x25e21c: 0x0  nop
    ctx->pc = 0x25e21cu;
    // NOP
label_25e220:
    // 0x25e220: 0x8248  .word       0x00008248                   # jr          $zero # 00008240 <InstrIdType: CPU_SPECIAL>
label_25e224:
    if (ctx->pc == 0x25E224u) {
        ctx->pc = 0x25E224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E220u;
        // 0x25e224: 0x8020  add         $s0, $zero, $zero (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E228u;
        goto label_25e228;
    }
    ctx->pc = 0x25E220u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x25E224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E220u;
        // 0x25e224: 0x8020  add         $s0, $zero, $zero (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25E220u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x25E228u;
label_25e228:
    // 0x25e228: 0x0  nop
    ctx->pc = 0x25e228u;
    // NOP
label_25e22c:
    // 0x25e22c: 0x0  nop
    ctx->pc = 0x25e22cu;
    // NOP
label_25e230:
    // 0x25e230: 0x8259  .word       0x00008259                   # multu       $zero, $zero # 00008240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e230u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
label_25e234:
    // 0x25e234: 0x6b90  .word       0x00006B90                   # mfhi        $t5 # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e234u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_25e238:
    // 0x25e238: 0x0  nop
    ctx->pc = 0x25e238u;
    // NOP
label_25e23c:
    // 0x25e23c: 0x0  nop
    ctx->pc = 0x25e23cu;
    // NOP
label_25e240:
    // 0x25e240: 0x8267  .word       0x00008267                   # not         $s0, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e240u;
    SET_GPR_U64(ctx, 16, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_25e244:
    // 0x25e244: 0x25c0  sll         $a0, $zero, 23
    ctx->pc = 0x25e244u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 0), 23));
label_25e248:
    // 0x25e248: 0x0  nop
    ctx->pc = 0x25e248u;
    // NOP
label_25e24c:
    // 0x25e24c: 0x0  nop
    ctx->pc = 0x25e24cu;
    // NOP
label_25e250:
    // 0x25e250: 0x826c  .word       0x0000826C                   # dadd        $s0, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e250u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 16, r); }
label_25e254:
    // 0x25e254: 0x38a0  .word       0x000038A0                   # add         $a3, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e254u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
label_25e258:
    // 0x25e258: 0x0  nop
    ctx->pc = 0x25e258u;
    // NOP
label_25e25c:
    // 0x25e25c: 0x0  nop
    ctx->pc = 0x25e25cu;
    // NOP
label_25e260:
    // 0x25e260: 0x8274  teq         $zero, $zero, 521
    ctx->pc = 0x25e260u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25e264:
    // 0x25e264: 0x7bf0  tge         $zero, $zero, 495
    ctx->pc = 0x25e264u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25e268:
    // 0x25e268: 0x0  nop
    ctx->pc = 0x25e268u;
    // NOP
label_25e26c:
    // 0x25e26c: 0x0  nop
    ctx->pc = 0x25e26cu;
    // NOP
label_25e270:
    // 0x25e270: 0x8284  .word       0x00008284                   # sllv        $s0, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e270u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_25e274:
    // 0x25e274: 0x5470  tge         $zero, $zero, 337
    ctx->pc = 0x25e274u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25e278:
    // 0x25e278: 0x0  nop
    ctx->pc = 0x25e278u;
    // NOP
label_25e27c:
    // 0x25e27c: 0x0  nop
    ctx->pc = 0x25e27cu;
    // NOP
label_25e280:
    // 0x25e280: 0x828f  .word       0x0000828F                   # sync # 00008000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e280u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_25e284:
    // 0x25e284: 0x7f90  .word       0x00007F90                   # mfhi        $t7 # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e284u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_25e288:
    // 0x25e288: 0x0  nop
    ctx->pc = 0x25e288u;
    // NOP
label_25e28c:
    // 0x25e28c: 0x0  nop
    ctx->pc = 0x25e28cu;
    // NOP
label_25e290:
    // 0x25e290: 0x829f  .word       0x0000829F                   # ddivu       $s0, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e290u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x25E290 raw=0x0000829F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25e294:
    // 0x25e294: 0x8fa0  .word       0x00008FA0                   # add         $s1, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e294u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_25e298:
    // 0x25e298: 0x0  nop
    ctx->pc = 0x25e298u;
    // NOP
label_25e29c:
    // 0x25e29c: 0x0  nop
    ctx->pc = 0x25e29cu;
    // NOP
label_25e2a0:
    // 0x25e2a0: 0x82b1  tgeu        $zero, $zero, 522
    ctx->pc = 0x25e2a0u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25e2a4:
    // 0x25e2a4: 0x8f80  sll         $s1, $zero, 30
    ctx->pc = 0x25e2a4u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 0), 30));
label_25e2a8:
    // 0x25e2a8: 0x0  nop
    ctx->pc = 0x25e2a8u;
    // NOP
label_25e2ac:
    // 0x25e2ac: 0x0  nop
    ctx->pc = 0x25e2acu;
    // NOP
label_25e2b0:
    // 0x25e2b0: 0x82c3  sra         $s0, $zero, 11
    ctx->pc = 0x25e2b0u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 0), 11));
label_25e2b4:
    // 0x25e2b4: 0x7a20  .word       0x00007A20                   # add         $t7, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e2b4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_25e2b8:
    // 0x25e2b8: 0x0  nop
    ctx->pc = 0x25e2b8u;
    // NOP
label_25e2bc:
    // 0x25e2bc: 0x0  nop
    ctx->pc = 0x25e2bcu;
    // NOP
label_25e2c0:
    // 0x25e2c0: 0x82d3  .word       0x000082D3                   # mtlo        $zero # 000082C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e2c0u;
    ctx->lo = GPR_U64(ctx, 0);
label_25e2c4:
    // 0x25e2c4: 0xd970  tge         $zero, $zero, 869
    ctx->pc = 0x25e2c4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25e2c8:
    // 0x25e2c8: 0x0  nop
    ctx->pc = 0x25e2c8u;
    // NOP
label_25e2cc:
    // 0x25e2cc: 0x0  nop
    ctx->pc = 0x25e2ccu;
    // NOP
label_25e2d0:
    // 0x25e2d0: 0x82ef  .word       0x000082EF                   # dsubu       $s0, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e2d0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_25e2d4:
    // 0x25e2d4: 0x43f0  tge         $zero, $zero, 271
    ctx->pc = 0x25e2d4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25e2d8:
    // 0x25e2d8: 0x0  nop
    ctx->pc = 0x25e2d8u;
    // NOP
label_25e2dc:
    // 0x25e2dc: 0x0  nop
    ctx->pc = 0x25e2dcu;
    // NOP
label_25e2e0:
    // 0x25e2e0: 0x82f8  dsll        $s0, $zero, 11
    ctx->pc = 0x25e2e0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) << 11);
label_25e2e4:
    // 0x25e2e4: 0x6ff0  tge         $zero, $zero, 447
    ctx->pc = 0x25e2e4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25e2e8:
    // 0x25e2e8: 0x0  nop
    ctx->pc = 0x25e2e8u;
    // NOP
label_25e2ec:
    // 0x25e2ec: 0x0  nop
    ctx->pc = 0x25e2ecu;
    // NOP
label_25e2f0:
    // 0x25e2f0: 0x8306  .word       0x00008306                   # srlv        $s0, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e2f0u;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_25e2f4:
    // 0x25e2f4: 0x7ac0  sll         $t7, $zero, 11
    ctx->pc = 0x25e2f4u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 0), 11));
label_25e2f8:
    // 0x25e2f8: 0x0  nop
    ctx->pc = 0x25e2f8u;
    // NOP
label_25e2fc:
    // 0x25e2fc: 0x0  nop
    ctx->pc = 0x25e2fcu;
    // NOP
label_25e300:
    // 0x25e300: 0x8316  .word       0x00008316                   # dsrlv       $s0, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e300u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_25e304:
    // 0x25e304: 0x8050  .word       0x00008050                   # mfhi        $s0 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e304u;
    SET_GPR_U64(ctx, 16, ctx->hi);
label_25e308:
    // 0x25e308: 0x0  nop
    ctx->pc = 0x25e308u;
    // NOP
label_25e30c:
    // 0x25e30c: 0x0  nop
    ctx->pc = 0x25e30cu;
    // NOP
label_25e310:
    // 0x25e310: 0x8327  .word       0x00008327                   # not         $s0, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e310u;
    SET_GPR_U64(ctx, 16, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_25e314:
    // 0x25e314: 0x4a40  sll         $t1, $zero, 9
    ctx->pc = 0x25e314u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), 9));
label_25e318:
    // 0x25e318: 0x0  nop
    ctx->pc = 0x25e318u;
    // NOP
label_25e31c:
    // 0x25e31c: 0x0  nop
    ctx->pc = 0x25e31cu;
    // NOP
label_25e320:
    // 0x25e320: 0x8331  tgeu        $zero, $zero, 524
    ctx->pc = 0x25e320u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25e324:
    // 0x25e324: 0x8450  .word       0x00008450                   # mfhi        $s0 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e324u;
    SET_GPR_U64(ctx, 16, ctx->hi);
label_25e328:
    // 0x25e328: 0x0  nop
    ctx->pc = 0x25e328u;
    // NOP
label_25e32c:
    // 0x25e32c: 0x0  nop
    ctx->pc = 0x25e32cu;
    // NOP
label_25e330:
    // 0x25e330: 0x8342  srl         $s0, $zero, 13
    ctx->pc = 0x25e330u;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 0), 13));
label_25e334:
    // 0x25e334: 0x9330  tge         $zero, $zero, 588
    ctx->pc = 0x25e334u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25e338:
    // 0x25e338: 0x0  nop
    ctx->pc = 0x25e338u;
    // NOP
label_25e33c:
    // 0x25e33c: 0x0  nop
    ctx->pc = 0x25e33cu;
    // NOP
label_25e340:
    // 0x25e340: 0x8355  .word       0x00008355                   # INVALID     $zero, $zero, -0x7CAB # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e340u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x25E340 raw=0x00008355"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25e344:
    // 0x25e344: 0x7f20  .word       0x00007F20                   # add         $t7, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e344u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_25e348:
    // 0x25e348: 0x0  nop
    ctx->pc = 0x25e348u;
    // NOP
label_25e34c:
    // 0x25e34c: 0x0  nop
    ctx->pc = 0x25e34cu;
    // NOP
label_25e350:
    // 0x25e350: 0x8365  .word       0x00008365                   # move        $s0, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e350u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_25e354:
    // 0x25e354: 0x7620  .word       0x00007620                   # add         $t6, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e354u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_25e358:
    // 0x25e358: 0x0  nop
    ctx->pc = 0x25e358u;
    // NOP
label_25e35c:
    // 0x25e35c: 0x0  nop
    ctx->pc = 0x25e35cu;
    // NOP
label_25e360:
    // 0x25e360: 0x8374  teq         $zero, $zero, 525
    ctx->pc = 0x25e360u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25e364:
    // 0x25e364: 0x4e30  tge         $zero, $zero, 312
    ctx->pc = 0x25e364u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25e368:
    // 0x25e368: 0x0  nop
    ctx->pc = 0x25e368u;
    // NOP
label_25e36c:
    // 0x25e36c: 0x0  nop
    ctx->pc = 0x25e36cu;
    // NOP
label_25e370:
    // 0x25e370: 0x837e  dsrl32      $s0, $zero, 13
    ctx->pc = 0x25e370u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) >> (32 + 13));
label_25e374:
    // 0x25e374: 0x5900  sll         $t3, $zero, 4
    ctx->pc = 0x25e374u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 0), 4));
label_25e378:
    // 0x25e378: 0x0  nop
    ctx->pc = 0x25e378u;
    // NOP
label_25e37c:
    // 0x25e37c: 0x0  nop
    ctx->pc = 0x25e37cu;
    // NOP
label_25e380:
    // 0x25e380: 0x838a  .word       0x0000838A                   # movz        $s0, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e380u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
label_25e384:
    // 0x25e384: 0x7c30  tge         $zero, $zero, 496
    ctx->pc = 0x25e384u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25e388:
    // 0x25e388: 0x0  nop
    ctx->pc = 0x25e388u;
    // NOP
label_25e38c:
    // 0x25e38c: 0x0  nop
    ctx->pc = 0x25e38cu;
    // NOP
label_25e390:
    // 0x25e390: 0x839a  .word       0x0000839A                   # div         $s0, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e390u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_25e394:
    // 0x25e394: 0x7cc0  sll         $t7, $zero, 19
    ctx->pc = 0x25e394u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
label_25e398:
    // 0x25e398: 0x0  nop
    ctx->pc = 0x25e398u;
    // NOP
label_25e39c:
    // 0x25e39c: 0x0  nop
    ctx->pc = 0x25e39cu;
    // NOP
label_25e3a0:
    // 0x25e3a0: 0x83aa  .word       0x000083AA                   # slt         $s0, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e3a0u;
    SET_GPR_U64(ctx, 16, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_25e3a4:
    // 0x25e3a4: 0xa7a0  .word       0x0000A7A0                   # add         $s4, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e3a4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_25e3a8:
    // 0x25e3a8: 0x0  nop
    ctx->pc = 0x25e3a8u;
    // NOP
label_25e3ac:
    // 0x25e3ac: 0x0  nop
    ctx->pc = 0x25e3acu;
    // NOP
label_25e3b0:
    // 0x25e3b0: 0x83bf  dsra32      $s0, $zero, 14
    ctx->pc = 0x25e3b0u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 0) >> (32 + 14));
label_25e3b4:
    // 0x25e3b4: 0x5670  tge         $zero, $zero, 345
    ctx->pc = 0x25e3b4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25e3b8:
    // 0x25e3b8: 0x0  nop
    ctx->pc = 0x25e3b8u;
    // NOP
label_25e3bc:
    // 0x25e3bc: 0x0  nop
    ctx->pc = 0x25e3bcu;
    // NOP
label_25e3c0:
    // 0x25e3c0: 0x83ca  .word       0x000083CA                   # movz        $s0, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e3c0u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
label_25e3c4:
    // 0x25e3c4: 0x8bb0  tge         $zero, $zero, 558
    ctx->pc = 0x25e3c4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25e3c8:
    // 0x25e3c8: 0x0  nop
    ctx->pc = 0x25e3c8u;
    // NOP
label_25e3cc:
    // 0x25e3cc: 0x0  nop
    ctx->pc = 0x25e3ccu;
    // NOP
label_25e3d0:
    // 0x25e3d0: 0x83dc  .word       0x000083DC                   # dmult       $zero, $zero # 000083C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e3d0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x25E3D0 raw=0x000083DC"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25e3d4:
    // 0x25e3d4: 0x6ba0  .word       0x00006BA0                   # add         $t5, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e3d4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_25e3d8:
    // 0x25e3d8: 0x0  nop
    ctx->pc = 0x25e3d8u;
    // NOP
label_25e3dc:
    // 0x25e3dc: 0x0  nop
    ctx->pc = 0x25e3dcu;
    // NOP
label_25e3e0:
    // 0x25e3e0: 0x83ea  .word       0x000083EA                   # slt         $s0, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e3e0u;
    SET_GPR_U64(ctx, 16, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_25e3e4:
    // 0x25e3e4: 0x8950  .word       0x00008950                   # mfhi        $s1 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e3e4u;
    SET_GPR_U64(ctx, 17, ctx->hi);
label_25e3e8:
    // 0x25e3e8: 0x0  nop
    ctx->pc = 0x25e3e8u;
    // NOP
label_25e3ec:
    // 0x25e3ec: 0x0  nop
    ctx->pc = 0x25e3ecu;
    // NOP
label_25e3f0:
    // 0x25e3f0: 0x83fc  dsll32      $s0, $zero, 15
    ctx->pc = 0x25e3f0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) << (32 + 15));
label_25e3f4:
    // 0x25e3f4: 0x99f0  tge         $zero, $zero, 615
    ctx->pc = 0x25e3f4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25e3f8:
    // 0x25e3f8: 0x0  nop
    ctx->pc = 0x25e3f8u;
    // NOP
label_25e3fc:
    // 0x25e3fc: 0x0  nop
    ctx->pc = 0x25e3fcu;
    // NOP
label_25e400:
    // 0x25e400: 0x8410  .word       0x00008410                   # mfhi        $s0 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e400u;
    SET_GPR_U64(ctx, 16, ctx->hi);
label_25e404:
    // 0x25e404: 0x7280  sll         $t6, $zero, 10
    ctx->pc = 0x25e404u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 0), 10));
label_25e408:
    // 0x25e408: 0x0  nop
    ctx->pc = 0x25e408u;
    // NOP
label_25e40c:
    // 0x25e40c: 0x0  nop
    ctx->pc = 0x25e40cu;
    // NOP
label_25e410:
    // 0x25e410: 0x841f  .word       0x0000841F                   # ddivu       $s0, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e410u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x25E410 raw=0x0000841F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25e414:
    // 0x25e414: 0x5c20  .word       0x00005C20                   # add         $t3, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e414u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_25e418:
    // 0x25e418: 0x0  nop
    ctx->pc = 0x25e418u;
    // NOP
label_25e41c:
    // 0x25e41c: 0x0  nop
    ctx->pc = 0x25e41cu;
    // NOP
label_25e420:
    // 0x25e420: 0x842b  .word       0x0000842B                   # sltu        $s0, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e420u;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_25e424:
    // 0x25e424: 0x5ec0  sll         $t3, $zero, 27
    ctx->pc = 0x25e424u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 0), 27));
label_25e428:
    // 0x25e428: 0x0  nop
    ctx->pc = 0x25e428u;
    // NOP
label_25e42c:
    // 0x25e42c: 0x0  nop
    ctx->pc = 0x25e42cu;
    // NOP
label_25e430:
    // 0x25e430: 0x8437  .word       0x00008437                   # INVALID     $zero, $zero, -0x7BC9 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e430u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x25E430 raw=0x00008437"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25e434:
    // 0x25e434: 0x5ea0  .word       0x00005EA0                   # add         $t3, $zero, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e434u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_25e438:
    // 0x25e438: 0x0  nop
    ctx->pc = 0x25e438u;
    // NOP
label_25e43c:
    // 0x25e43c: 0x0  nop
    ctx->pc = 0x25e43cu;
    // NOP
label_25e440:
    // 0x25e440: 0x8443  sra         $s0, $zero, 17
    ctx->pc = 0x25e440u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 0), 17));
label_25e444:
    // 0x25e444: 0x6a90  .word       0x00006A90                   # mfhi        $t5 # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e444u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_25e448:
    // 0x25e448: 0x0  nop
    ctx->pc = 0x25e448u;
    // NOP
label_25e44c:
    // 0x25e44c: 0x0  nop
    ctx->pc = 0x25e44cu;
    // NOP
label_25e450:
    // 0x25e450: 0x8451  .word       0x00008451                   # mthi        $zero # 00008440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e450u;
    ctx->hi = GPR_U64(ctx, 0);
label_25e454:
    // 0x25e454: 0x7c40  sll         $t7, $zero, 17
    ctx->pc = 0x25e454u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
label_25e458:
    // 0x25e458: 0x0  nop
    ctx->pc = 0x25e458u;
    // NOP
label_25e45c:
    // 0x25e45c: 0x0  nop
    ctx->pc = 0x25e45cu;
    // NOP
label_25e460:
    // 0x25e460: 0x8461  .word       0x00008461                   # addu        $s0, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e460u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_25e464:
    // 0x25e464: 0xa840  sll         $s5, $zero, 1
    ctx->pc = 0x25e464u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 0), 1));
label_25e468:
    // 0x25e468: 0x0  nop
    ctx->pc = 0x25e468u;
    // NOP
label_25e46c:
    // 0x25e46c: 0x0  nop
    ctx->pc = 0x25e46cu;
    // NOP
label_25e470:
    // 0x25e470: 0x8477  .word       0x00008477                   # INVALID     $zero, $zero, -0x7B89 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e470u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x25E470 raw=0x00008477"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25e474:
    // 0x25e474: 0x6fb0  tge         $zero, $zero, 446
    ctx->pc = 0x25e474u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25e478:
    // 0x25e478: 0x0  nop
    ctx->pc = 0x25e478u;
    // NOP
label_25e47c:
    // 0x25e47c: 0x0  nop
    ctx->pc = 0x25e47cu;
    // NOP
label_25e480:
    // 0x25e480: 0x8485  .word       0x00008485                   # INVALID     $zero, $zero, -0x7B7B # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e480u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x25E480 raw=0x00008485"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25e484:
    // 0x25e484: 0x6250  .word       0x00006250                   # mfhi        $t4 # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e484u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_25e488:
    // 0x25e488: 0x0  nop
    ctx->pc = 0x25e488u;
    // NOP
label_25e48c:
    // 0x25e48c: 0x0  nop
    ctx->pc = 0x25e48cu;
    // NOP
label_25e490:
    // 0x25e490: 0x8492  .word       0x00008492                   # mflo        $s0 # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e490u;
    SET_GPR_U64(ctx, 16, ctx->lo);
label_25e494:
    // 0x25e494: 0x5800  sll         $t3, $zero, 0
    ctx->pc = 0x25e494u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_25e498:
    // 0x25e498: 0x0  nop
    ctx->pc = 0x25e498u;
    // NOP
label_25e49c:
    // 0x25e49c: 0x0  nop
    ctx->pc = 0x25e49cu;
    // NOP
label_25e4a0:
    // 0x25e4a0: 0x849d  .word       0x0000849D                   # dmultu      $zero, $zero # 00008480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e4a0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x25E4A0 raw=0x0000849D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25e4a4:
    // 0x25e4a4: 0x59a0  .word       0x000059A0                   # add         $t3, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e4a4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_25e4a8:
    // 0x25e4a8: 0x0  nop
    ctx->pc = 0x25e4a8u;
    // NOP
label_25e4ac:
    // 0x25e4ac: 0x0  nop
    ctx->pc = 0x25e4acu;
    // NOP
label_25e4b0:
    // 0x25e4b0: 0x84a9  .word       0x000084A9                   # mtsa        $zero # 00008480 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x25e4b0u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_25e4b4:
    // 0x25e4b4: 0x8020  add         $s0, $zero, $zero
    ctx->pc = 0x25e4b4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_25e4b8:
    // 0x25e4b8: 0x0  nop
    ctx->pc = 0x25e4b8u;
    // NOP
label_25e4bc:
    // 0x25e4bc: 0x0  nop
    ctx->pc = 0x25e4bcu;
    // NOP
label_25e4c0:
    // 0x25e4c0: 0x84ba  dsrl        $s0, $zero, 18
    ctx->pc = 0x25e4c0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) >> 18);
label_25e4c4:
    // 0x25e4c4: 0x6c20  .word       0x00006C20                   # add         $t5, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e4c4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_25e4c8:
    // 0x25e4c8: 0x0  nop
    ctx->pc = 0x25e4c8u;
    // NOP
label_25e4cc:
    // 0x25e4cc: 0x0  nop
    ctx->pc = 0x25e4ccu;
    // NOP
label_25e4d0:
    // 0x25e4d0: 0x84c8  .word       0x000084C8                   # jr          $zero # 000084C0 <InstrIdType: CPU_SPECIAL>
label_25e4d4:
    if (ctx->pc == 0x25E4D4u) {
        ctx->pc = 0x25E4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E4D0u;
        // 0x25e4d4: 0x6230  tge         $zero, $zero, 392 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E4D8u;
        goto label_25e4d8;
    }
    ctx->pc = 0x25E4D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x25E4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E4D0u;
        // 0x25e4d4: 0x6230  tge         $zero, $zero, 392 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25E4D0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x25E4D8u;
label_25e4d8:
    // 0x25e4d8: 0x0  nop
    ctx->pc = 0x25e4d8u;
    // NOP
label_25e4dc:
    // 0x25e4dc: 0x0  nop
    ctx->pc = 0x25e4dcu;
    // NOP
label_25e4e0:
    // 0x25e4e0: 0x84d5  .word       0x000084D5                   # INVALID     $zero, $zero, -0x7B2B # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e4e0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x25E4E0 raw=0x000084D5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25e4e4:
    // 0x25e4e4: 0x56c0  sll         $t2, $zero, 27
    ctx->pc = 0x25e4e4u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 0), 27));
label_25e4e8:
    // 0x25e4e8: 0x0  nop
    ctx->pc = 0x25e4e8u;
    // NOP
label_25e4ec:
    // 0x25e4ec: 0x0  nop
    ctx->pc = 0x25e4ecu;
    // NOP
label_25e4f0:
    // 0x25e4f0: 0x84e0  .word       0x000084E0                   # add         $s0, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e4f0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_25e4f4:
    // 0x25e4f4: 0x5e90  .word       0x00005E90                   # mfhi        $t3 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e4f4u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_25e4f8:
    // 0x25e4f8: 0x0  nop
    ctx->pc = 0x25e4f8u;
    // NOP
label_25e4fc:
    // 0x25e4fc: 0x0  nop
    ctx->pc = 0x25e4fcu;
    // NOP
label_25e500:
    // 0x25e500: 0x84ec  .word       0x000084EC                   # dadd        $s0, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e500u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 16, r); }
label_25e504:
    // 0x25e504: 0x52c0  sll         $t2, $zero, 11
    ctx->pc = 0x25e504u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 0), 11));
label_25e508:
    // 0x25e508: 0x0  nop
    ctx->pc = 0x25e508u;
    // NOP
label_25e50c:
    // 0x25e50c: 0x0  nop
    ctx->pc = 0x25e50cu;
    // NOP
label_25e510:
    // 0x25e510: 0x84f7  .word       0x000084F7                   # INVALID     $zero, $zero, -0x7B09 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e510u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x25E510 raw=0x000084F7"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25e514:
    // 0x25e514: 0x67a0  .word       0x000067A0                   # add         $t4, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e514u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_25e518:
    // 0x25e518: 0x0  nop
    ctx->pc = 0x25e518u;
    // NOP
label_25e51c:
    // 0x25e51c: 0x0  nop
    ctx->pc = 0x25e51cu;
    // NOP
label_25e520:
    // 0x25e520: 0x8504  .word       0x00008504                   # sllv        $s0, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e520u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_25e524:
    // 0x25e524: 0x66c0  sll         $t4, $zero, 27
    ctx->pc = 0x25e524u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 27));
label_25e528:
    // 0x25e528: 0x0  nop
    ctx->pc = 0x25e528u;
    // NOP
label_25e52c:
    // 0x25e52c: 0x0  nop
    ctx->pc = 0x25e52cu;
    // NOP
label_25e530:
    // 0x25e530: 0x8511  .word       0x00008511                   # mthi        $zero # 00008500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e530u;
    ctx->hi = GPR_U64(ctx, 0);
label_25e534:
    // 0x25e534: 0x5f60  .word       0x00005F60                   # add         $t3, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e534u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_25e538:
    // 0x25e538: 0x0  nop
    ctx->pc = 0x25e538u;
    // NOP
label_25e53c:
    // 0x25e53c: 0x0  nop
    ctx->pc = 0x25e53cu;
    // NOP
label_25e540:
    // 0x25e540: 0x851d  .word       0x0000851D                   # dmultu      $zero, $zero # 00008500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e540u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x25E540 raw=0x0000851D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25e544:
    // 0x25e544: 0x6550  .word       0x00006550                   # mfhi        $t4 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e544u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_25e548:
    // 0x25e548: 0x0  nop
    ctx->pc = 0x25e548u;
    // NOP
label_25e54c:
    // 0x25e54c: 0x0  nop
    ctx->pc = 0x25e54cu;
    // NOP
label_25e550:
    // 0x25e550: 0x852a  .word       0x0000852A                   # slt         $s0, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e550u;
    SET_GPR_U64(ctx, 16, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_25e554:
    // 0x25e554: 0x9080  sll         $s2, $zero, 2
    ctx->pc = 0x25e554u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 0), 2));
label_25e558:
    // 0x25e558: 0x0  nop
    ctx->pc = 0x25e558u;
    // NOP
label_25e55c:
    // 0x25e55c: 0x0  nop
    ctx->pc = 0x25e55cu;
    // NOP
label_25e560:
    // 0x25e560: 0x853d  .word       0x0000853D                   # INVALID     $zero, $zero, -0x7AC3 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e560u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x25E560 raw=0x0000853D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25e564:
    // 0x25e564: 0x5d50  .word       0x00005D50                   # mfhi        $t3 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e564u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_25e568:
    // 0x25e568: 0x0  nop
    ctx->pc = 0x25e568u;
    // NOP
label_25e56c:
    // 0x25e56c: 0x0  nop
    ctx->pc = 0x25e56cu;
    // NOP
label_25e570:
    // 0x25e570: 0x8549  .word       0x00008549                   # jalr        $s0, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
label_25e574:
    if (ctx->pc == 0x25E574u) {
        ctx->pc = 0x25E574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E570u;
        // 0x25e574: 0x5230  tge         $zero, $zero, 328 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E578u;
        goto label_25e578;
    }
    ctx->pc = 0x25E570u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 16, 0x25E578u);
        ctx->pc = 0x25E574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E570u;
        // 0x25e574: 0x5230  tge         $zero, $zero, 328 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25E570u, 0x25E578u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25E578u;
label_25e578:
    // 0x25e578: 0x0  nop
    ctx->pc = 0x25e578u;
    // NOP
label_25e57c:
    // 0x25e57c: 0x0  nop
    ctx->pc = 0x25e57cu;
    // NOP
label_25e580:
    // 0x25e580: 0x8554  .word       0x00008554                   # dsllv       $s0, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e580u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_25e584:
    // 0x25e584: 0x58c0  sll         $t3, $zero, 3
    ctx->pc = 0x25e584u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 0), 3));
label_25e588:
    // 0x25e588: 0x0  nop
    ctx->pc = 0x25e588u;
    // NOP
label_25e58c:
    // 0x25e58c: 0x0  nop
    ctx->pc = 0x25e58cu;
    // NOP
label_25e590:
    // 0x25e590: 0x8560  .word       0x00008560                   # add         $s0, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e590u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_25e594:
    // 0x25e594: 0x7b20  .word       0x00007B20                   # add         $t7, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e594u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_25e598:
    // 0x25e598: 0x0  nop
    ctx->pc = 0x25e598u;
    // NOP
label_25e59c:
    // 0x25e59c: 0x0  nop
    ctx->pc = 0x25e59cu;
    // NOP
label_25e5a0:
    // 0x25e5a0: 0x8570  tge         $zero, $zero, 533
    ctx->pc = 0x25e5a0u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25e5a4:
    // 0x25e5a4: 0x8910  .word       0x00008910                   # mfhi        $s1 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e5a4u;
    SET_GPR_U64(ctx, 17, ctx->hi);
label_25e5a8:
    // 0x25e5a8: 0x0  nop
    ctx->pc = 0x25e5a8u;
    // NOP
label_25e5ac:
    // 0x25e5ac: 0x0  nop
    ctx->pc = 0x25e5acu;
    // NOP
label_25e5b0:
    // 0x25e5b0: 0x8582  srl         $s0, $zero, 22
    ctx->pc = 0x25e5b0u;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 0), 22));
label_25e5b4:
    // 0x25e5b4: 0xa650  .word       0x0000A650                   # mfhi        $s4 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e5b4u;
    SET_GPR_U64(ctx, 20, ctx->hi);
label_25e5b8:
    // 0x25e5b8: 0x0  nop
    ctx->pc = 0x25e5b8u;
    // NOP
label_25e5bc:
    // 0x25e5bc: 0x0  nop
    ctx->pc = 0x25e5bcu;
    // NOP
label_25e5c0:
    // 0x25e5c0: 0x8597  .word       0x00008597                   # dsrav       $s0, $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e5c0u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_25e5c4:
    // 0x25e5c4: 0xd6c0  sll         $k0, $zero, 27
    ctx->pc = 0x25e5c4u;
    SET_GPR_S32(ctx, 26, (int32_t)SLL32(GPR_U32(ctx, 0), 27));
label_25e5c8:
    // 0x25e5c8: 0x0  nop
    ctx->pc = 0x25e5c8u;
    // NOP
label_25e5cc:
    // 0x25e5cc: 0x0  nop
    ctx->pc = 0x25e5ccu;
    // NOP
label_25e5d0:
    // 0x25e5d0: 0x85b2  tlt         $zero, $zero, 534
    ctx->pc = 0x25e5d0u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25e5d4:
    // 0x25e5d4: 0x7720  .word       0x00007720                   # add         $t6, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e5d4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_25e5d8:
    // 0x25e5d8: 0x0  nop
    ctx->pc = 0x25e5d8u;
    // NOP
label_25e5dc:
    // 0x25e5dc: 0x0  nop
    ctx->pc = 0x25e5dcu;
    // NOP
label_25e5e0:
    // 0x25e5e0: 0x85c1  .word       0x000085C1                   # INVALID     $zero, $zero, -0x7A3F # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e5e0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x25E5E0 raw=0x000085C1"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25e5e4:
    // 0x25e5e4: 0x8cc0  sll         $s1, $zero, 19
    ctx->pc = 0x25e5e4u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
label_25e5e8:
    // 0x25e5e8: 0x0  nop
    ctx->pc = 0x25e5e8u;
    // NOP
label_25e5ec:
    // 0x25e5ec: 0x0  nop
    ctx->pc = 0x25e5ecu;
    // NOP
label_25e5f0:
    // 0x25e5f0: 0x85d3  .word       0x000085D3                   # mtlo        $zero # 000085C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e5f0u;
    ctx->lo = GPR_U64(ctx, 0);
label_25e5f4:
    // 0x25e5f4: 0x5b00  sll         $t3, $zero, 12
    ctx->pc = 0x25e5f4u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 0), 12));
label_25e5f8:
    // 0x25e5f8: 0x0  nop
    ctx->pc = 0x25e5f8u;
    // NOP
label_25e5fc:
    // 0x25e5fc: 0x0  nop
    ctx->pc = 0x25e5fcu;
    // NOP
label_25e600:
    // 0x25e600: 0x85df  .word       0x000085DF                   # ddivu       $s0, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e600u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x25E600 raw=0x000085DF"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25e604:
    // 0x25e604: 0x8630  tge         $zero, $zero, 536
    ctx->pc = 0x25e604u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25e608:
    // 0x25e608: 0x0  nop
    ctx->pc = 0x25e608u;
    // NOP
label_25e60c:
    // 0x25e60c: 0x0  nop
    ctx->pc = 0x25e60cu;
    // NOP
label_25e610:
    // 0x25e610: 0x85f0  tge         $zero, $zero, 535
    ctx->pc = 0x25e610u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25e614:
    // 0x25e614: 0x6080  sll         $t4, $zero, 2
    ctx->pc = 0x25e614u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 2));
label_25e618:
    // 0x25e618: 0x0  nop
    ctx->pc = 0x25e618u;
    // NOP
label_25e61c:
    // 0x25e61c: 0x0  nop
    ctx->pc = 0x25e61cu;
    // NOP
label_25e620:
    // 0x25e620: 0x85fd  .word       0x000085FD                   # INVALID     $zero, $zero, -0x7A03 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e620u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x25E620 raw=0x000085FD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25e624:
    // 0x25e624: 0x3fe0  .word       0x00003FE0                   # add         $a3, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e624u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
label_25e628:
    // 0x25e628: 0x0  nop
    ctx->pc = 0x25e628u;
    // NOP
label_25e62c:
    // 0x25e62c: 0x0  nop
    ctx->pc = 0x25e62cu;
    // NOP
label_25e630:
    // 0x25e630: 0x8605  .word       0x00008605                   # INVALID     $zero, $zero, -0x79FB # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e630u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x25E630 raw=0x00008605"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25e634:
    // 0x25e634: 0x8f10  .word       0x00008F10                   # mfhi        $s1 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e634u;
    SET_GPR_U64(ctx, 17, ctx->hi);
label_25e638:
    // 0x25e638: 0x0  nop
    ctx->pc = 0x25e638u;
    // NOP
label_25e63c:
    // 0x25e63c: 0x0  nop
    ctx->pc = 0x25e63cu;
    // NOP
label_25e640:
    // 0x25e640: 0x8617  .word       0x00008617                   # dsrav       $s0, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e640u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_25e644:
    // 0x25e644: 0x7820  add         $t7, $zero, $zero
    ctx->pc = 0x25e644u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_25e648:
    // 0x25e648: 0x0  nop
    ctx->pc = 0x25e648u;
    // NOP
label_25e64c:
    // 0x25e64c: 0x0  nop
    ctx->pc = 0x25e64cu;
    // NOP
label_25e650:
    // 0x25e650: 0x8627  .word       0x00008627                   # not         $s0, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e650u;
    SET_GPR_U64(ctx, 16, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_25e654:
    // 0x25e654: 0x80d0  .word       0x000080D0                   # mfhi        $s0 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e654u;
    SET_GPR_U64(ctx, 16, ctx->hi);
label_25e658:
    // 0x25e658: 0x0  nop
    ctx->pc = 0x25e658u;
    // NOP
label_25e65c:
    // 0x25e65c: 0x0  nop
    ctx->pc = 0x25e65cu;
    // NOP
label_25e660:
    // 0x25e660: 0x8638  dsll        $s0, $zero, 24
    ctx->pc = 0x25e660u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) << 24);
label_25e664:
    // 0x25e664: 0x58c0  sll         $t3, $zero, 3
    ctx->pc = 0x25e664u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 0), 3));
label_25e668:
    // 0x25e668: 0x0  nop
    ctx->pc = 0x25e668u;
    // NOP
label_25e66c:
    // 0x25e66c: 0x0  nop
    ctx->pc = 0x25e66cu;
    // NOP
label_25e670:
    // 0x25e670: 0x8644  .word       0x00008644                   # sllv        $s0, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e670u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_25e674:
    // 0x25e674: 0x6b50  .word       0x00006B50                   # mfhi        $t5 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e674u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_25e678:
    // 0x25e678: 0x0  nop
    ctx->pc = 0x25e678u;
    // NOP
label_25e67c:
    // 0x25e67c: 0x0  nop
    ctx->pc = 0x25e67cu;
    // NOP
label_25e680:
    // 0x25e680: 0x8652  .word       0x00008652                   # mflo        $s0 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e680u;
    SET_GPR_U64(ctx, 16, ctx->lo);
label_25e684:
    // 0x25e684: 0x94c0  sll         $s2, $zero, 19
    ctx->pc = 0x25e684u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
label_25e688:
    // 0x25e688: 0x0  nop
    ctx->pc = 0x25e688u;
    // NOP
label_25e68c:
    // 0x25e68c: 0x0  nop
    ctx->pc = 0x25e68cu;
    // NOP
label_25e690:
    // 0x25e690: 0x8665  .word       0x00008665                   # move        $s0, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e690u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_25e694:
    // 0x25e694: 0x8680  sll         $s0, $zero, 26
    ctx->pc = 0x25e694u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 0), 26));
label_25e698:
    // 0x25e698: 0x0  nop
    ctx->pc = 0x25e698u;
    // NOP
label_25e69c:
    // 0x25e69c: 0x0  nop
    ctx->pc = 0x25e69cu;
    // NOP
label_25e6a0:
    // 0x25e6a0: 0x8676  tne         $zero, $zero, 537
    ctx->pc = 0x25e6a0u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25e6a4:
    // 0x25e6a4: 0x2240  sll         $a0, $zero, 9
    ctx->pc = 0x25e6a4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 0), 9));
label_25e6a8:
    // 0x25e6a8: 0x0  nop
    ctx->pc = 0x25e6a8u;
    // NOP
label_25e6ac:
    // 0x25e6ac: 0x0  nop
    ctx->pc = 0x25e6acu;
    // NOP
label_25e6b0:
    // 0x25e6b0: 0x867b  dsra        $s0, $zero, 25
    ctx->pc = 0x25e6b0u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 0) >> 25);
label_25e6b4:
    // 0x25e6b4: 0x2d80  sll         $a1, $zero, 22
    ctx->pc = 0x25e6b4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 0), 22));
label_25e6b8:
    // 0x25e6b8: 0x0  nop
    ctx->pc = 0x25e6b8u;
    // NOP
label_25e6bc:
    // 0x25e6bc: 0x0  nop
    ctx->pc = 0x25e6bcu;
    // NOP
label_25e6c0:
    // 0x25e6c0: 0x8681  .word       0x00008681                   # INVALID     $zero, $zero, -0x797F # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e6c0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x25E6C0 raw=0x00008681"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25e6c4:
    // 0x25e6c4: 0x3400  sll         $a2, $zero, 16
    ctx->pc = 0x25e6c4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 0), 16));
label_25e6c8:
    // 0x25e6c8: 0x0  nop
    ctx->pc = 0x25e6c8u;
    // NOP
label_25e6cc:
    // 0x25e6cc: 0x0  nop
    ctx->pc = 0x25e6ccu;
    // NOP
label_25e6d0:
    // 0x25e6d0: 0x8688  .word       0x00008688                   # jr          $zero # 00008680 <InstrIdType: CPU_SPECIAL>
label_25e6d4:
    if (ctx->pc == 0x25E6D4u) {
        ctx->pc = 0x25E6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E6D0u;
        // 0x25e6d4: 0x2ec0  sll         $a1, $zero, 27 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 0), 27));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E6D8u;
        goto label_25e6d8;
    }
    ctx->pc = 0x25E6D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x25E6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E6D0u;
        // 0x25e6d4: 0x2ec0  sll         $a1, $zero, 27 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 0), 27));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25E6D0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x25E6D8u;
label_25e6d8:
    // 0x25e6d8: 0x0  nop
    ctx->pc = 0x25e6d8u;
    // NOP
label_25e6dc:
    // 0x25e6dc: 0x0  nop
    ctx->pc = 0x25e6dcu;
    // NOP
label_25e6e0:
    // 0x25e6e0: 0x868e  .word       0x0000868E                   # INVALID     $zero, $zero, -0x7972 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e6e0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x25E6E0 raw=0x0000868E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25e6e4:
    // 0x25e6e4: 0x6150  .word       0x00006150                   # mfhi        $t4 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e6e4u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_25e6e8:
    // 0x25e6e8: 0x0  nop
    ctx->pc = 0x25e6e8u;
    // NOP
label_25e6ec:
    // 0x25e6ec: 0x0  nop
    ctx->pc = 0x25e6ecu;
    // NOP
label_25e6f0:
    // 0x25e6f0: 0x869b  .word       0x0000869B                   # divu        $s0, $zero, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e6f0u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_25e6f4:
    // 0x25e6f4: 0x3680  sll         $a2, $zero, 26
    ctx->pc = 0x25e6f4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 0), 26));
label_25e6f8:
    // 0x25e6f8: 0x0  nop
    ctx->pc = 0x25e6f8u;
    // NOP
label_25e6fc:
    // 0x25e6fc: 0x0  nop
    ctx->pc = 0x25e6fcu;
    // NOP
label_25e700:
    // 0x25e700: 0x86a2  .word       0x000086A2                   # neg         $s0, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e700u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 16, (int32_t)tmp); }
label_25e704:
    // 0x25e704: 0x2d10  .word       0x00002D10                   # mfhi        $a1 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e704u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_25e708:
    // 0x25e708: 0x0  nop
    ctx->pc = 0x25e708u;
    // NOP
label_25e70c:
    // 0x25e70c: 0x0  nop
    ctx->pc = 0x25e70cu;
    // NOP
label_25e710:
    // 0x25e710: 0x86a8  .word       0x000086A8                   # mfsa        $s0 # 00000680 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x25e710u;
    SET_GPR_U32(ctx, 16, ctx->sa);
label_25e714:
    // 0x25e714: 0x2810  mfhi        $a1
    ctx->pc = 0x25e714u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_25e718:
    // 0x25e718: 0x0  nop
    ctx->pc = 0x25e718u;
    // NOP
label_25e71c:
    // 0x25e71c: 0x0  nop
    ctx->pc = 0x25e71cu;
    // NOP
label_25e720:
    // 0x25e720: 0x86ae  .word       0x000086AE                   # dsub        $s0, $zero, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e720u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 16, r); }
label_25e724:
    // 0x25e724: 0x29a0  .word       0x000029A0                   # add         $a1, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e724u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 5, (int32_t)result);     } }
label_25e728:
    // 0x25e728: 0x0  nop
    ctx->pc = 0x25e728u;
    // NOP
label_25e72c:
    // 0x25e72c: 0x0  nop
    ctx->pc = 0x25e72cu;
    // NOP
label_25e730:
    // 0x25e730: 0x86b4  teq         $zero, $zero, 538
    ctx->pc = 0x25e730u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25e734:
    // 0x25e734: 0x25d0  .word       0x000025D0                   # mfhi        $a0 # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e734u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_25e738:
    // 0x25e738: 0x0  nop
    ctx->pc = 0x25e738u;
    // NOP
label_25e73c:
    // 0x25e73c: 0x0  nop
    ctx->pc = 0x25e73cu;
    // NOP
label_25e740:
    // 0x25e740: 0x86b9  .word       0x000086B9                   # INVALID     $zero, $zero, -0x7947 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e740u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x25E740 raw=0x000086B9"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25e744:
    // 0x25e744: 0x39d0  .word       0x000039D0                   # mfhi        $a3 # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e744u;
    SET_GPR_U64(ctx, 7, ctx->hi);
label_25e748:
    // 0x25e748: 0x0  nop
    ctx->pc = 0x25e748u;
    // NOP
label_25e74c:
    // 0x25e74c: 0x0  nop
    ctx->pc = 0x25e74cu;
    // NOP
label_25e750:
    // 0x25e750: 0x86c1  .word       0x000086C1                   # INVALID     $zero, $zero, -0x793F # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e750u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x25E750 raw=0x000086C1"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25e754:
    // 0x25e754: 0x3a00  sll         $a3, $zero, 8
    ctx->pc = 0x25e754u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 0), 8));
label_25e758:
    // 0x25e758: 0x0  nop
    ctx->pc = 0x25e758u;
    // NOP
label_25e75c:
    // 0x25e75c: 0x0  nop
    ctx->pc = 0x25e75cu;
    // NOP
label_25e760:
    // 0x25e760: 0x86c9  .word       0x000086C9                   # jalr        $s0, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
label_25e764:
    if (ctx->pc == 0x25E764u) {
        ctx->pc = 0x25E764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E760u;
        // 0x25e764: 0x2950  .word       0x00002950                   # mfhi        $a1 # 00000140 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 5, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E768u;
        goto label_25e768;
    }
    ctx->pc = 0x25E760u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 16, 0x25E768u);
        ctx->pc = 0x25E764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E760u;
        // 0x25e764: 0x2950  .word       0x00002950                   # mfhi        $a1 # 00000140 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 5, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25E760u, 0x25E768u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25E768u;
label_25e768:
    // 0x25e768: 0x0  nop
    ctx->pc = 0x25e768u;
    // NOP
label_25e76c:
    // 0x25e76c: 0x0  nop
    ctx->pc = 0x25e76cu;
    // NOP
label_25e770:
    // 0x25e770: 0x86cf  .word       0x000086CF                   # sync.p # 00008000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e770u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_25e774:
    // 0x25e774: 0x3290  .word       0x00003290                   # mfhi        $a2 # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e774u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_25e778:
    // 0x25e778: 0x0  nop
    ctx->pc = 0x25e778u;
    // NOP
label_25e77c:
    // 0x25e77c: 0x0  nop
    ctx->pc = 0x25e77cu;
    // NOP
label_25e780:
    // 0x25e780: 0x86d6  .word       0x000086D6                   # dsrlv       $s0, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e780u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_25e784:
    // 0x25e784: 0x2d90  .word       0x00002D90                   # mfhi        $a1 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e784u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_25e788:
    // 0x25e788: 0x0  nop
    ctx->pc = 0x25e788u;
    // NOP
label_25e78c:
    // 0x25e78c: 0x0  nop
    ctx->pc = 0x25e78cu;
    // NOP
label_25e790:
    // 0x25e790: 0x86dc  .word       0x000086DC                   # dmult       $zero, $zero # 000086C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e790u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x25E790 raw=0x000086DC"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25e794:
    // 0x25e794: 0x3120  .word       0x00003120                   # add         $a2, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e794u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 6, (int32_t)result);     } }
label_25e798:
    // 0x25e798: 0x0  nop
    ctx->pc = 0x25e798u;
    // NOP
label_25e79c:
    // 0x25e79c: 0x0  nop
    ctx->pc = 0x25e79cu;
    // NOP
label_25e7a0:
    // 0x25e7a0: 0x86e3  .word       0x000086E3                   # negu        $s0, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e7a0u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_25e7a4:
    // 0x25e7a4: 0x2000  sll         $a0, $zero, 0
    ctx->pc = 0x25e7a4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_25e7a8:
    // 0x25e7a8: 0x0  nop
    ctx->pc = 0x25e7a8u;
    // NOP
label_25e7ac:
    // 0x25e7ac: 0x0  nop
    ctx->pc = 0x25e7acu;
    // NOP
label_25e7b0:
    // 0x25e7b0: 0x86e7  .word       0x000086E7                   # not         $s0, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e7b0u;
    SET_GPR_U64(ctx, 16, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_25e7b4:
    // 0x25e7b4: 0x31c0  sll         $a2, $zero, 7
    ctx->pc = 0x25e7b4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 0), 7));
label_25e7b8:
    // 0x25e7b8: 0x0  nop
    ctx->pc = 0x25e7b8u;
    // NOP
label_25e7bc:
    // 0x25e7bc: 0x0  nop
    ctx->pc = 0x25e7bcu;
    // NOP
label_25e7c0:
    // 0x25e7c0: 0x86ee  .word       0x000086EE                   # dsub        $s0, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e7c0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 16, r); }
label_25e7c4:
    // 0x25e7c4: 0x3420  .word       0x00003420                   # add         $a2, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e7c4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 6, (int32_t)result);     } }
label_25e7c8:
    // 0x25e7c8: 0x0  nop
    ctx->pc = 0x25e7c8u;
    // NOP
label_25e7cc:
    // 0x25e7cc: 0x0  nop
    ctx->pc = 0x25e7ccu;
    // NOP
label_25e7d0:
    // 0x25e7d0: 0x86f5  .word       0x000086F5                   # INVALID     $zero, $zero, -0x790B # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e7d0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x25E7D0 raw=0x000086F5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25e7d4:
    // 0x25e7d4: 0x3060  .word       0x00003060                   # add         $a2, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e7d4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 6, (int32_t)result);     } }
label_25e7d8:
    // 0x25e7d8: 0x0  nop
    ctx->pc = 0x25e7d8u;
    // NOP
label_25e7dc:
    // 0x25e7dc: 0x0  nop
    ctx->pc = 0x25e7dcu;
    // NOP
label_25e7e0:
    // 0x25e7e0: 0x86fc  dsll32      $s0, $zero, 27
    ctx->pc = 0x25e7e0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) << (32 + 27));
label_25e7e4:
    // 0x25e7e4: 0x3e90  .word       0x00003E90                   # mfhi        $a3 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e7e4u;
    SET_GPR_U64(ctx, 7, ctx->hi);
label_25e7e8:
    // 0x25e7e8: 0x0  nop
    ctx->pc = 0x25e7e8u;
    // NOP
label_25e7ec:
    // 0x25e7ec: 0x0  nop
    ctx->pc = 0x25e7ecu;
    // NOP
label_25e7f0:
    // 0x25e7f0: 0x8704  .word       0x00008704                   # sllv        $s0, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e7f0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_25e7f4:
    // 0x25e7f4: 0x36c0  sll         $a2, $zero, 27
    ctx->pc = 0x25e7f4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 0), 27));
label_25e7f8:
    // 0x25e7f8: 0x0  nop
    ctx->pc = 0x25e7f8u;
    // NOP
label_25e7fc:
    // 0x25e7fc: 0x0  nop
    ctx->pc = 0x25e7fcu;
    // NOP
label_25e800:
    // 0x25e800: 0x870b  .word       0x0000870B                   # movn        $s0, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e800u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
label_25e804:
    // 0x25e804: 0x2720  .word       0x00002720                   # add         $a0, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e804u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 4, (int32_t)result);     } }
label_25e808:
    // 0x25e808: 0x0  nop
    ctx->pc = 0x25e808u;
    // NOP
label_25e80c:
    // 0x25e80c: 0x0  nop
    ctx->pc = 0x25e80cu;
    // NOP
label_25e810:
    // 0x25e810: 0x8710  .word       0x00008710                   # mfhi        $s0 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e810u;
    SET_GPR_U64(ctx, 16, ctx->hi);
label_25e814:
    // 0x25e814: 0x3620  .word       0x00003620                   # add         $a2, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e814u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 6, (int32_t)result);     } }
label_25e818:
    // 0x25e818: 0x0  nop
    ctx->pc = 0x25e818u;
    // NOP
label_25e81c:
    // 0x25e81c: 0x0  nop
    ctx->pc = 0x25e81cu;
    // NOP
label_25e820:
    // 0x25e820: 0x8717  .word       0x00008717                   # dsrav       $s0, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e820u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_25e824:
    // 0x25e824: 0x2f20  .word       0x00002F20                   # add         $a1, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e824u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 5, (int32_t)result);     } }
label_25e828:
    // 0x25e828: 0x0  nop
    ctx->pc = 0x25e828u;
    // NOP
label_25e82c:
    // 0x25e82c: 0x0  nop
    ctx->pc = 0x25e82cu;
    // NOP
label_25e830:
    // 0x25e830: 0x871d  .word       0x0000871D                   # dmultu      $zero, $zero # 00008700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e830u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x25E830 raw=0x0000871D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25e834:
    // 0x25e834: 0x4300  sll         $t0, $zero, 12
    ctx->pc = 0x25e834u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 12));
label_25e838:
    // 0x25e838: 0x0  nop
    ctx->pc = 0x25e838u;
    // NOP
label_25e83c:
    // 0x25e83c: 0x0  nop
    ctx->pc = 0x25e83cu;
    // NOP
label_25e840:
    // 0x25e840: 0x8726  .word       0x00008726                   # xor         $s0, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e840u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_25e844:
    // 0x25e844: 0x2920  .word       0x00002920                   # add         $a1, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e844u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 5, (int32_t)result);     } }
label_25e848:
    // 0x25e848: 0x0  nop
    ctx->pc = 0x25e848u;
    // NOP
label_25e84c:
    // 0x25e84c: 0x0  nop
    ctx->pc = 0x25e84cu;
    // NOP
label_25e850:
    // 0x25e850: 0x872c  .word       0x0000872C                   # dadd        $s0, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e850u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 16, r); }
label_25e854:
    // 0x25e854: 0x3070  tge         $zero, $zero, 193
    ctx->pc = 0x25e854u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25e858:
    // 0x25e858: 0x0  nop
    ctx->pc = 0x25e858u;
    // NOP
label_25e85c:
    // 0x25e85c: 0x0  nop
    ctx->pc = 0x25e85cu;
    // NOP
label_25e860:
    // 0x25e860: 0x8733  tltu        $zero, $zero, 540
    ctx->pc = 0x25e860u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25e864:
    // 0x25e864: 0x2a50  .word       0x00002A50                   # mfhi        $a1 # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e864u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_25e868:
    // 0x25e868: 0x0  nop
    ctx->pc = 0x25e868u;
    // NOP
label_25e86c:
    // 0x25e86c: 0x0  nop
    ctx->pc = 0x25e86cu;
    // NOP
label_25e870:
    // 0x25e870: 0x8739  .word       0x00008739                   # INVALID     $zero, $zero, -0x78C7 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e870u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x25E870 raw=0x00008739"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25e874:
    // 0x25e874: 0x2be0  .word       0x00002BE0                   # add         $a1, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e874u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 5, (int32_t)result);     } }
label_25e878:
    // 0x25e878: 0x0  nop
    ctx->pc = 0x25e878u;
    // NOP
label_25e87c:
    // 0x25e87c: 0x0  nop
    ctx->pc = 0x25e87cu;
    // NOP
label_25e880:
    // 0x25e880: 0x873f  dsra32      $s0, $zero, 28
    ctx->pc = 0x25e880u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 0) >> (32 + 28));
label_25e884:
    // 0x25e884: 0x29e0  .word       0x000029E0                   # add         $a1, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e884u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 5, (int32_t)result);     } }
label_25e888:
    // 0x25e888: 0x0  nop
    ctx->pc = 0x25e888u;
    // NOP
label_25e88c:
    // 0x25e88c: 0x0  nop
    ctx->pc = 0x25e88cu;
    // NOP
label_25e890:
    // 0x25e890: 0x8745  .word       0x00008745                   # INVALID     $zero, $zero, -0x78BB # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e890u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x25E890 raw=0x00008745"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25e894:
    // 0x25e894: 0x3020  add         $a2, $zero, $zero
    ctx->pc = 0x25e894u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 6, (int32_t)result);     } }
label_25e898:
    // 0x25e898: 0x0  nop
    ctx->pc = 0x25e898u;
    // NOP
label_25e89c:
    // 0x25e89c: 0x0  nop
    ctx->pc = 0x25e89cu;
    // NOP
label_25e8a0:
    // 0x25e8a0: 0x874c  syscall     541
    ctx->pc = 0x25e8a0u;
    ctx->pc = 0x25E8A4u;
runtime->handleSyscall(rdram, ctx, 0x21Du);
label_25e8a4:
    // 0x25e8a4: 0x2de0  .word       0x00002DE0                   # add         $a1, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e8a4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 5, (int32_t)result);     } }
label_25e8a8:
    // 0x25e8a8: 0x0  nop
    ctx->pc = 0x25e8a8u;
    // NOP
label_25e8ac:
    // 0x25e8ac: 0x0  nop
    ctx->pc = 0x25e8acu;
    // NOP
label_25e8b0:
    // 0x25e8b0: 0x8752  .word       0x00008752                   # mflo        $s0 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e8b0u;
    SET_GPR_U64(ctx, 16, ctx->lo);
label_25e8b4:
    // 0x25e8b4: 0x31e0  .word       0x000031E0                   # add         $a2, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e8b4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 6, (int32_t)result);     } }
label_25e8b8:
    // 0x25e8b8: 0x0  nop
    ctx->pc = 0x25e8b8u;
    // NOP
label_25e8bc:
    // 0x25e8bc: 0x0  nop
    ctx->pc = 0x25e8bcu;
    // NOP
label_25e8c0:
    // 0x25e8c0: 0x8759  .word       0x00008759                   # multu       $zero, $zero # 00008740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e8c0u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
label_25e8c4:
    // 0x25e8c4: 0x7990  .word       0x00007990                   # mfhi        $t7 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e8c4u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_25e8c8:
    // 0x25e8c8: 0x0  nop
    ctx->pc = 0x25e8c8u;
    // NOP
label_25e8cc:
    // 0x25e8cc: 0x0  nop
    ctx->pc = 0x25e8ccu;
    // NOP
label_25e8d0:
    // 0x25e8d0: 0x8769  .word       0x00008769                   # mtsa        $zero # 00008740 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x25e8d0u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_25e8d4:
    // 0x25e8d4: 0x3ae0  .word       0x00003AE0                   # add         $a3, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e8d4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
label_25e8d8:
    // 0x25e8d8: 0x0  nop
    ctx->pc = 0x25e8d8u;
    // NOP
label_25e8dc:
    // 0x25e8dc: 0x0  nop
    ctx->pc = 0x25e8dcu;
    // NOP
label_25e8e0:
    // 0x25e8e0: 0x8771  tgeu        $zero, $zero, 541
    ctx->pc = 0x25e8e0u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25e8e4:
    // 0x25e8e4: 0x3870  tge         $zero, $zero, 225
    ctx->pc = 0x25e8e4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25e8e8:
    // 0x25e8e8: 0x0  nop
    ctx->pc = 0x25e8e8u;
    // NOP
label_25e8ec:
    // 0x25e8ec: 0x0  nop
    ctx->pc = 0x25e8ecu;
    // NOP
label_25e8f0:
    // 0x25e8f0: 0x8779  .word       0x00008779                   # INVALID     $zero, $zero, -0x7887 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e8f0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x25E8F0 raw=0x00008779"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25e8f4:
    // 0x25e8f4: 0x3660  .word       0x00003660                   # add         $a2, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e8f4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 6, (int32_t)result);     } }
label_25e8f8:
    // 0x25e8f8: 0x0  nop
    ctx->pc = 0x25e8f8u;
    // NOP
label_25e8fc:
    // 0x25e8fc: 0x0  nop
    ctx->pc = 0x25e8fcu;
    // NOP
label_25e900:
    // 0x25e900: 0x8780  sll         $s0, $zero, 30
    ctx->pc = 0x25e900u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 0), 30));
label_25e904:
    // 0x25e904: 0x3aa0  .word       0x00003AA0                   # add         $a3, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e904u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
label_25e908:
    // 0x25e908: 0x0  nop
    ctx->pc = 0x25e908u;
    // NOP
label_25e90c:
    // 0x25e90c: 0x0  nop
    ctx->pc = 0x25e90cu;
    // NOP
label_25e910:
    // 0x25e910: 0x8788  .word       0x00008788                   # jr          $zero # 00008780 <InstrIdType: CPU_SPECIAL>
label_25e914:
    if (ctx->pc == 0x25E914u) {
        ctx->pc = 0x25E914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E910u;
        // 0x25e914: 0x2ca0  .word       0x00002CA0                   # add         $a1, $zero, $zero # 00000480 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 5, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E918u;
        goto label_25e918;
    }
    ctx->pc = 0x25E910u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x25E914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E910u;
        // 0x25e914: 0x2ca0  .word       0x00002CA0                   # add         $a1, $zero, $zero # 00000480 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 5, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25E910u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x25E918u;
label_25e918:
    // 0x25e918: 0x0  nop
    ctx->pc = 0x25e918u;
    // NOP
label_25e91c:
    // 0x25e91c: 0x0  nop
    ctx->pc = 0x25e91cu;
    // NOP
label_25e920:
    // 0x25e920: 0x878e  .word       0x0000878E                   # INVALID     $zero, $zero, -0x7872 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e920u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x25E920 raw=0x0000878E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25e924:
    // 0x25e924: 0x3070  tge         $zero, $zero, 193
    ctx->pc = 0x25e924u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25e928:
    // 0x25e928: 0x0  nop
    ctx->pc = 0x25e928u;
    // NOP
label_25e92c:
    // 0x25e92c: 0x0  nop
    ctx->pc = 0x25e92cu;
    // NOP
label_25e930:
    // 0x25e930: 0x8795  .word       0x00008795                   # INVALID     $zero, $zero, -0x786B # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e930u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x25E930 raw=0x00008795"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25e934:
    // 0x25e934: 0x6cd0  .word       0x00006CD0                   # mfhi        $t5 # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e934u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_25e938:
    // 0x25e938: 0x0  nop
    ctx->pc = 0x25e938u;
    // NOP
label_25e93c:
    // 0x25e93c: 0x0  nop
    ctx->pc = 0x25e93cu;
    // NOP
label_25e940:
    // 0x25e940: 0x87a3  .word       0x000087A3                   # negu        $s0, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e940u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_25e944:
    // 0x25e944: 0x77e0  .word       0x000077E0                   # add         $t6, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e944u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_25e948:
    // 0x25e948: 0x0  nop
    ctx->pc = 0x25e948u;
    // NOP
label_25e94c:
    // 0x25e94c: 0x0  nop
    ctx->pc = 0x25e94cu;
    // NOP
label_25e950:
    // 0x25e950: 0x87b2  tlt         $zero, $zero, 542
    ctx->pc = 0x25e950u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25e954:
    // 0x25e954: 0x7de0  .word       0x00007DE0                   # add         $t7, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e954u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_25e958:
    // 0x25e958: 0x0  nop
    ctx->pc = 0x25e958u;
    // NOP
label_25e95c:
    // 0x25e95c: 0x0  nop
    ctx->pc = 0x25e95cu;
    // NOP
label_25e960:
    // 0x25e960: 0x87c2  srl         $s0, $zero, 31
    ctx->pc = 0x25e960u;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 0), 31));
label_25e964:
    // 0x25e964: 0x5c10  .word       0x00005C10                   # mfhi        $t3 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e964u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_25e968:
    // 0x25e968: 0x0  nop
    ctx->pc = 0x25e968u;
    // NOP
label_25e96c:
    // 0x25e96c: 0x0  nop
    ctx->pc = 0x25e96cu;
    // NOP
label_25e970:
    // 0x25e970: 0x87ce  .word       0x000087CE                   # INVALID     $zero, $zero, -0x7832 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e970u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x25E970 raw=0x000087CE"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25e974:
    // 0x25e974: 0x9490  .word       0x00009490                   # mfhi        $s2 # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e974u;
    SET_GPR_U64(ctx, 18, ctx->hi);
    ctx->pc = 0x25e978u;
    return;
}
