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


void FUN_0019b8d0_part465(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x27e1d0u: goto label_27e1d0;
        case 0x27e1d4u: goto label_27e1d4;
        case 0x27e1d8u: goto label_27e1d8;
        case 0x27e1dcu: goto label_27e1dc;
        case 0x27e1e0u: goto label_27e1e0;
        case 0x27e1e4u: goto label_27e1e4;
        case 0x27e1e8u: goto label_27e1e8;
        case 0x27e1ecu: goto label_27e1ec;
        case 0x27e1f0u: goto label_27e1f0;
        case 0x27e1f4u: goto label_27e1f4;
        case 0x27e1f8u: goto label_27e1f8;
        case 0x27e1fcu: goto label_27e1fc;
        case 0x27e200u: goto label_27e200;
        case 0x27e204u: goto label_27e204;
        case 0x27e208u: goto label_27e208;
        case 0x27e20cu: goto label_27e20c;
        case 0x27e210u: goto label_27e210;
        case 0x27e214u: goto label_27e214;
        case 0x27e218u: goto label_27e218;
        case 0x27e21cu: goto label_27e21c;
        case 0x27e220u: goto label_27e220;
        case 0x27e224u: goto label_27e224;
        case 0x27e228u: goto label_27e228;
        case 0x27e22cu: goto label_27e22c;
        case 0x27e230u: goto label_27e230;
        case 0x27e234u: goto label_27e234;
        case 0x27e238u: goto label_27e238;
        case 0x27e23cu: goto label_27e23c;
        case 0x27e240u: goto label_27e240;
        case 0x27e244u: goto label_27e244;
        case 0x27e248u: goto label_27e248;
        case 0x27e24cu: goto label_27e24c;
        case 0x27e250u: goto label_27e250;
        case 0x27e254u: goto label_27e254;
        case 0x27e258u: goto label_27e258;
        case 0x27e25cu: goto label_27e25c;
        case 0x27e260u: goto label_27e260;
        case 0x27e264u: goto label_27e264;
        case 0x27e268u: goto label_27e268;
        case 0x27e26cu: goto label_27e26c;
        case 0x27e270u: goto label_27e270;
        case 0x27e274u: goto label_27e274;
        case 0x27e278u: goto label_27e278;
        case 0x27e27cu: goto label_27e27c;
        case 0x27e280u: goto label_27e280;
        case 0x27e284u: goto label_27e284;
        case 0x27e288u: goto label_27e288;
        case 0x27e28cu: goto label_27e28c;
        case 0x27e290u: goto label_27e290;
        case 0x27e294u: goto label_27e294;
        case 0x27e298u: goto label_27e298;
        case 0x27e29cu: goto label_27e29c;
        case 0x27e2a0u: goto label_27e2a0;
        case 0x27e2a4u: goto label_27e2a4;
        case 0x27e2a8u: goto label_27e2a8;
        case 0x27e2acu: goto label_27e2ac;
        case 0x27e2b0u: goto label_27e2b0;
        case 0x27e2b4u: goto label_27e2b4;
        case 0x27e2b8u: goto label_27e2b8;
        case 0x27e2bcu: goto label_27e2bc;
        case 0x27e2c0u: goto label_27e2c0;
        case 0x27e2c4u: goto label_27e2c4;
        case 0x27e2c8u: goto label_27e2c8;
        case 0x27e2ccu: goto label_27e2cc;
        case 0x27e2d0u: goto label_27e2d0;
        case 0x27e2d4u: goto label_27e2d4;
        case 0x27e2d8u: goto label_27e2d8;
        case 0x27e2dcu: goto label_27e2dc;
        case 0x27e2e0u: goto label_27e2e0;
        case 0x27e2e4u: goto label_27e2e4;
        case 0x27e2e8u: goto label_27e2e8;
        case 0x27e2ecu: goto label_27e2ec;
        case 0x27e2f0u: goto label_27e2f0;
        case 0x27e2f4u: goto label_27e2f4;
        case 0x27e2f8u: goto label_27e2f8;
        case 0x27e2fcu: goto label_27e2fc;
        case 0x27e300u: goto label_27e300;
        case 0x27e304u: goto label_27e304;
        case 0x27e308u: goto label_27e308;
        case 0x27e30cu: goto label_27e30c;
        case 0x27e310u: goto label_27e310;
        case 0x27e314u: goto label_27e314;
        case 0x27e318u: goto label_27e318;
        case 0x27e31cu: goto label_27e31c;
        case 0x27e320u: goto label_27e320;
        case 0x27e324u: goto label_27e324;
        case 0x27e328u: goto label_27e328;
        case 0x27e32cu: goto label_27e32c;
        case 0x27e330u: goto label_27e330;
        case 0x27e334u: goto label_27e334;
        case 0x27e338u: goto label_27e338;
        case 0x27e33cu: goto label_27e33c;
        case 0x27e340u: goto label_27e340;
        case 0x27e344u: goto label_27e344;
        case 0x27e348u: goto label_27e348;
        case 0x27e34cu: goto label_27e34c;
        case 0x27e350u: goto label_27e350;
        case 0x27e354u: goto label_27e354;
        case 0x27e358u: goto label_27e358;
        case 0x27e35cu: goto label_27e35c;
        case 0x27e360u: goto label_27e360;
        case 0x27e364u: goto label_27e364;
        case 0x27e368u: goto label_27e368;
        case 0x27e36cu: goto label_27e36c;
        case 0x27e370u: goto label_27e370;
        case 0x27e374u: goto label_27e374;
        case 0x27e378u: goto label_27e378;
        case 0x27e37cu: goto label_27e37c;
        case 0x27e380u: goto label_27e380;
        case 0x27e384u: goto label_27e384;
        case 0x27e388u: goto label_27e388;
        case 0x27e38cu: goto label_27e38c;
        case 0x27e390u: goto label_27e390;
        case 0x27e394u: goto label_27e394;
        case 0x27e398u: goto label_27e398;
        case 0x27e39cu: goto label_27e39c;
        case 0x27e3a0u: goto label_27e3a0;
        case 0x27e3a4u: goto label_27e3a4;
        case 0x27e3a8u: goto label_27e3a8;
        case 0x27e3acu: goto label_27e3ac;
        case 0x27e3b0u: goto label_27e3b0;
        case 0x27e3b4u: goto label_27e3b4;
        case 0x27e3b8u: goto label_27e3b8;
        case 0x27e3bcu: goto label_27e3bc;
        case 0x27e3c0u: goto label_27e3c0;
        case 0x27e3c4u: goto label_27e3c4;
        case 0x27e3c8u: goto label_27e3c8;
        case 0x27e3ccu: goto label_27e3cc;
        case 0x27e3d0u: goto label_27e3d0;
        case 0x27e3d4u: goto label_27e3d4;
        case 0x27e3d8u: goto label_27e3d8;
        case 0x27e3dcu: goto label_27e3dc;
        case 0x27e3e0u: goto label_27e3e0;
        case 0x27e3e4u: goto label_27e3e4;
        case 0x27e3e8u: goto label_27e3e8;
        case 0x27e3ecu: goto label_27e3ec;
        case 0x27e3f0u: goto label_27e3f0;
        case 0x27e3f4u: goto label_27e3f4;
        case 0x27e3f8u: goto label_27e3f8;
        case 0x27e3fcu: goto label_27e3fc;
        case 0x27e400u: goto label_27e400;
        case 0x27e404u: goto label_27e404;
        case 0x27e408u: goto label_27e408;
        case 0x27e40cu: goto label_27e40c;
        case 0x27e410u: goto label_27e410;
        case 0x27e414u: goto label_27e414;
        case 0x27e418u: goto label_27e418;
        case 0x27e41cu: goto label_27e41c;
        case 0x27e420u: goto label_27e420;
        case 0x27e424u: goto label_27e424;
        case 0x27e428u: goto label_27e428;
        case 0x27e42cu: goto label_27e42c;
        case 0x27e430u: goto label_27e430;
        case 0x27e434u: goto label_27e434;
        case 0x27e438u: goto label_27e438;
        case 0x27e43cu: goto label_27e43c;
        case 0x27e440u: goto label_27e440;
        case 0x27e444u: goto label_27e444;
        case 0x27e448u: goto label_27e448;
        case 0x27e44cu: goto label_27e44c;
        case 0x27e450u: goto label_27e450;
        case 0x27e454u: goto label_27e454;
        case 0x27e458u: goto label_27e458;
        case 0x27e45cu: goto label_27e45c;
        case 0x27e460u: goto label_27e460;
        case 0x27e464u: goto label_27e464;
        case 0x27e468u: goto label_27e468;
        case 0x27e46cu: goto label_27e46c;
        case 0x27e470u: goto label_27e470;
        case 0x27e474u: goto label_27e474;
        case 0x27e478u: goto label_27e478;
        case 0x27e47cu: goto label_27e47c;
        case 0x27e480u: goto label_27e480;
        case 0x27e484u: goto label_27e484;
        case 0x27e488u: goto label_27e488;
        case 0x27e48cu: goto label_27e48c;
        case 0x27e490u: goto label_27e490;
        case 0x27e494u: goto label_27e494;
        case 0x27e498u: goto label_27e498;
        case 0x27e49cu: goto label_27e49c;
        case 0x27e4a0u: goto label_27e4a0;
        case 0x27e4a4u: goto label_27e4a4;
        case 0x27e4a8u: goto label_27e4a8;
        case 0x27e4acu: goto label_27e4ac;
        case 0x27e4b0u: goto label_27e4b0;
        case 0x27e4b4u: goto label_27e4b4;
        case 0x27e4b8u: goto label_27e4b8;
        case 0x27e4bcu: goto label_27e4bc;
        case 0x27e4c0u: goto label_27e4c0;
        case 0x27e4c4u: goto label_27e4c4;
        case 0x27e4c8u: goto label_27e4c8;
        case 0x27e4ccu: goto label_27e4cc;
        case 0x27e4d0u: goto label_27e4d0;
        case 0x27e4d4u: goto label_27e4d4;
        case 0x27e4d8u: goto label_27e4d8;
        case 0x27e4dcu: goto label_27e4dc;
        case 0x27e4e0u: goto label_27e4e0;
        case 0x27e4e4u: goto label_27e4e4;
        case 0x27e4e8u: goto label_27e4e8;
        case 0x27e4ecu: goto label_27e4ec;
        case 0x27e4f0u: goto label_27e4f0;
        case 0x27e4f4u: goto label_27e4f4;
        case 0x27e4f8u: goto label_27e4f8;
        case 0x27e4fcu: goto label_27e4fc;
        case 0x27e500u: goto label_27e500;
        case 0x27e504u: goto label_27e504;
        case 0x27e508u: goto label_27e508;
        case 0x27e50cu: goto label_27e50c;
        case 0x27e510u: goto label_27e510;
        case 0x27e514u: goto label_27e514;
        case 0x27e518u: goto label_27e518;
        case 0x27e51cu: goto label_27e51c;
        case 0x27e520u: goto label_27e520;
        case 0x27e524u: goto label_27e524;
        case 0x27e528u: goto label_27e528;
        case 0x27e52cu: goto label_27e52c;
        case 0x27e530u: goto label_27e530;
        case 0x27e534u: goto label_27e534;
        case 0x27e538u: goto label_27e538;
        case 0x27e53cu: goto label_27e53c;
        case 0x27e540u: goto label_27e540;
        case 0x27e544u: goto label_27e544;
        case 0x27e548u: goto label_27e548;
        case 0x27e54cu: goto label_27e54c;
        case 0x27e550u: goto label_27e550;
        case 0x27e554u: goto label_27e554;
        case 0x27e558u: goto label_27e558;
        case 0x27e55cu: goto label_27e55c;
        case 0x27e560u: goto label_27e560;
        case 0x27e564u: goto label_27e564;
        case 0x27e568u: goto label_27e568;
        case 0x27e56cu: goto label_27e56c;
        case 0x27e570u: goto label_27e570;
        case 0x27e574u: goto label_27e574;
        case 0x27e578u: goto label_27e578;
        case 0x27e57cu: goto label_27e57c;
        case 0x27e580u: goto label_27e580;
        case 0x27e584u: goto label_27e584;
        case 0x27e588u: goto label_27e588;
        case 0x27e58cu: goto label_27e58c;
        case 0x27e590u: goto label_27e590;
        case 0x27e594u: goto label_27e594;
        case 0x27e598u: goto label_27e598;
        case 0x27e59cu: goto label_27e59c;
        case 0x27e5a0u: goto label_27e5a0;
        case 0x27e5a4u: goto label_27e5a4;
        case 0x27e5a8u: goto label_27e5a8;
        case 0x27e5acu: goto label_27e5ac;
        case 0x27e5b0u: goto label_27e5b0;
        case 0x27e5b4u: goto label_27e5b4;
        case 0x27e5b8u: goto label_27e5b8;
        case 0x27e5bcu: goto label_27e5bc;
        case 0x27e5c0u: goto label_27e5c0;
        case 0x27e5c4u: goto label_27e5c4;
        case 0x27e5c8u: goto label_27e5c8;
        case 0x27e5ccu: goto label_27e5cc;
        case 0x27e5d0u: goto label_27e5d0;
        case 0x27e5d4u: goto label_27e5d4;
        case 0x27e5d8u: goto label_27e5d8;
        case 0x27e5dcu: goto label_27e5dc;
        case 0x27e5e0u: goto label_27e5e0;
        case 0x27e5e4u: goto label_27e5e4;
        case 0x27e5e8u: goto label_27e5e8;
        case 0x27e5ecu: goto label_27e5ec;
        case 0x27e5f0u: goto label_27e5f0;
        case 0x27e5f4u: goto label_27e5f4;
        case 0x27e5f8u: goto label_27e5f8;
        case 0x27e5fcu: goto label_27e5fc;
        case 0x27e600u: goto label_27e600;
        case 0x27e604u: goto label_27e604;
        case 0x27e608u: goto label_27e608;
        case 0x27e60cu: goto label_27e60c;
        case 0x27e610u: goto label_27e610;
        case 0x27e614u: goto label_27e614;
        case 0x27e618u: goto label_27e618;
        case 0x27e61cu: goto label_27e61c;
        case 0x27e620u: goto label_27e620;
        case 0x27e624u: goto label_27e624;
        case 0x27e628u: goto label_27e628;
        case 0x27e62cu: goto label_27e62c;
        case 0x27e630u: goto label_27e630;
        case 0x27e634u: goto label_27e634;
        case 0x27e638u: goto label_27e638;
        case 0x27e63cu: goto label_27e63c;
        case 0x27e640u: goto label_27e640;
        case 0x27e644u: goto label_27e644;
        case 0x27e648u: goto label_27e648;
        case 0x27e64cu: goto label_27e64c;
        case 0x27e650u: goto label_27e650;
        case 0x27e654u: goto label_27e654;
        case 0x27e658u: goto label_27e658;
        case 0x27e65cu: goto label_27e65c;
        case 0x27e660u: goto label_27e660;
        case 0x27e664u: goto label_27e664;
        case 0x27e668u: goto label_27e668;
        case 0x27e66cu: goto label_27e66c;
        case 0x27e670u: goto label_27e670;
        case 0x27e674u: goto label_27e674;
        case 0x27e678u: goto label_27e678;
        case 0x27e67cu: goto label_27e67c;
        case 0x27e680u: goto label_27e680;
        case 0x27e684u: goto label_27e684;
        case 0x27e688u: goto label_27e688;
        case 0x27e68cu: goto label_27e68c;
        case 0x27e690u: goto label_27e690;
        case 0x27e694u: goto label_27e694;
        case 0x27e698u: goto label_27e698;
        case 0x27e69cu: goto label_27e69c;
        case 0x27e6a0u: goto label_27e6a0;
        case 0x27e6a4u: goto label_27e6a4;
        case 0x27e6a8u: goto label_27e6a8;
        case 0x27e6acu: goto label_27e6ac;
        case 0x27e6b0u: goto label_27e6b0;
        case 0x27e6b4u: goto label_27e6b4;
        case 0x27e6b8u: goto label_27e6b8;
        case 0x27e6bcu: goto label_27e6bc;
        case 0x27e6c0u: goto label_27e6c0;
        case 0x27e6c4u: goto label_27e6c4;
        case 0x27e6c8u: goto label_27e6c8;
        case 0x27e6ccu: goto label_27e6cc;
        case 0x27e6d0u: goto label_27e6d0;
        case 0x27e6d4u: goto label_27e6d4;
        case 0x27e6d8u: goto label_27e6d8;
        case 0x27e6dcu: goto label_27e6dc;
        case 0x27e6e0u: goto label_27e6e0;
        case 0x27e6e4u: goto label_27e6e4;
        case 0x27e6e8u: goto label_27e6e8;
        case 0x27e6ecu: goto label_27e6ec;
        case 0x27e6f0u: goto label_27e6f0;
        case 0x27e6f4u: goto label_27e6f4;
        case 0x27e6f8u: goto label_27e6f8;
        case 0x27e6fcu: goto label_27e6fc;
        case 0x27e700u: goto label_27e700;
        case 0x27e704u: goto label_27e704;
        case 0x27e708u: goto label_27e708;
        case 0x27e70cu: goto label_27e70c;
        case 0x27e710u: goto label_27e710;
        case 0x27e714u: goto label_27e714;
        case 0x27e718u: goto label_27e718;
        case 0x27e71cu: goto label_27e71c;
        case 0x27e720u: goto label_27e720;
        case 0x27e724u: goto label_27e724;
        case 0x27e728u: goto label_27e728;
        case 0x27e72cu: goto label_27e72c;
        case 0x27e730u: goto label_27e730;
        case 0x27e734u: goto label_27e734;
        case 0x27e738u: goto label_27e738;
        case 0x27e73cu: goto label_27e73c;
        case 0x27e740u: goto label_27e740;
        case 0x27e744u: goto label_27e744;
        case 0x27e748u: goto label_27e748;
        case 0x27e74cu: goto label_27e74c;
        case 0x27e750u: goto label_27e750;
        case 0x27e754u: goto label_27e754;
        case 0x27e758u: goto label_27e758;
        case 0x27e75cu: goto label_27e75c;
        case 0x27e760u: goto label_27e760;
        case 0x27e764u: goto label_27e764;
        case 0x27e768u: goto label_27e768;
        case 0x27e76cu: goto label_27e76c;
        case 0x27e770u: goto label_27e770;
        case 0x27e774u: goto label_27e774;
        case 0x27e778u: goto label_27e778;
        case 0x27e77cu: goto label_27e77c;
        case 0x27e780u: goto label_27e780;
        case 0x27e784u: goto label_27e784;
        case 0x27e788u: goto label_27e788;
        case 0x27e78cu: goto label_27e78c;
        case 0x27e790u: goto label_27e790;
        case 0x27e794u: goto label_27e794;
        case 0x27e798u: goto label_27e798;
        case 0x27e79cu: goto label_27e79c;
        case 0x27e7a0u: goto label_27e7a0;
        case 0x27e7a4u: goto label_27e7a4;
        case 0x27e7a8u: goto label_27e7a8;
        case 0x27e7acu: goto label_27e7ac;
        case 0x27e7b0u: goto label_27e7b0;
        case 0x27e7b4u: goto label_27e7b4;
        case 0x27e7b8u: goto label_27e7b8;
        case 0x27e7bcu: goto label_27e7bc;
        case 0x27e7c0u: goto label_27e7c0;
        case 0x27e7c4u: goto label_27e7c4;
        case 0x27e7c8u: goto label_27e7c8;
        case 0x27e7ccu: goto label_27e7cc;
        case 0x27e7d0u: goto label_27e7d0;
        case 0x27e7d4u: goto label_27e7d4;
        case 0x27e7d8u: goto label_27e7d8;
        case 0x27e7dcu: goto label_27e7dc;
        case 0x27e7e0u: goto label_27e7e0;
        case 0x27e7e4u: goto label_27e7e4;
        case 0x27e7e8u: goto label_27e7e8;
        case 0x27e7ecu: goto label_27e7ec;
        case 0x27e7f0u: goto label_27e7f0;
        case 0x27e7f4u: goto label_27e7f4;
        case 0x27e7f8u: goto label_27e7f8;
        case 0x27e7fcu: goto label_27e7fc;
        case 0x27e800u: goto label_27e800;
        case 0x27e804u: goto label_27e804;
        case 0x27e808u: goto label_27e808;
        case 0x27e80cu: goto label_27e80c;
        case 0x27e810u: goto label_27e810;
        case 0x27e814u: goto label_27e814;
        case 0x27e818u: goto label_27e818;
        case 0x27e81cu: goto label_27e81c;
        case 0x27e820u: goto label_27e820;
        case 0x27e824u: goto label_27e824;
        case 0x27e828u: goto label_27e828;
        case 0x27e82cu: goto label_27e82c;
        case 0x27e830u: goto label_27e830;
        case 0x27e834u: goto label_27e834;
        case 0x27e838u: goto label_27e838;
        case 0x27e83cu: goto label_27e83c;
        case 0x27e840u: goto label_27e840;
        case 0x27e844u: goto label_27e844;
        case 0x27e848u: goto label_27e848;
        case 0x27e84cu: goto label_27e84c;
        case 0x27e850u: goto label_27e850;
        case 0x27e854u: goto label_27e854;
        case 0x27e858u: goto label_27e858;
        case 0x27e85cu: goto label_27e85c;
        case 0x27e860u: goto label_27e860;
        case 0x27e864u: goto label_27e864;
        case 0x27e868u: goto label_27e868;
        case 0x27e86cu: goto label_27e86c;
        case 0x27e870u: goto label_27e870;
        case 0x27e874u: goto label_27e874;
        case 0x27e878u: goto label_27e878;
        case 0x27e87cu: goto label_27e87c;
        case 0x27e880u: goto label_27e880;
        case 0x27e884u: goto label_27e884;
        case 0x27e888u: goto label_27e888;
        case 0x27e88cu: goto label_27e88c;
        case 0x27e890u: goto label_27e890;
        case 0x27e894u: goto label_27e894;
        case 0x27e898u: goto label_27e898;
        case 0x27e89cu: goto label_27e89c;
        case 0x27e8a0u: goto label_27e8a0;
        case 0x27e8a4u: goto label_27e8a4;
        case 0x27e8a8u: goto label_27e8a8;
        case 0x27e8acu: goto label_27e8ac;
        case 0x27e8b0u: goto label_27e8b0;
        case 0x27e8b4u: goto label_27e8b4;
        case 0x27e8b8u: goto label_27e8b8;
        case 0x27e8bcu: goto label_27e8bc;
        case 0x27e8c0u: goto label_27e8c0;
        case 0x27e8c4u: goto label_27e8c4;
        case 0x27e8c8u: goto label_27e8c8;
        case 0x27e8ccu: goto label_27e8cc;
        case 0x27e8d0u: goto label_27e8d0;
        case 0x27e8d4u: goto label_27e8d4;
        case 0x27e8d8u: goto label_27e8d8;
        case 0x27e8dcu: goto label_27e8dc;
        case 0x27e8e0u: goto label_27e8e0;
        case 0x27e8e4u: goto label_27e8e4;
        case 0x27e8e8u: goto label_27e8e8;
        case 0x27e8ecu: goto label_27e8ec;
        case 0x27e8f0u: goto label_27e8f0;
        case 0x27e8f4u: goto label_27e8f4;
        case 0x27e8f8u: goto label_27e8f8;
        case 0x27e8fcu: goto label_27e8fc;
        case 0x27e900u: goto label_27e900;
        case 0x27e904u: goto label_27e904;
        case 0x27e908u: goto label_27e908;
        case 0x27e90cu: goto label_27e90c;
        case 0x27e910u: goto label_27e910;
        case 0x27e914u: goto label_27e914;
        case 0x27e918u: goto label_27e918;
        case 0x27e91cu: goto label_27e91c;
        case 0x27e920u: goto label_27e920;
        case 0x27e924u: goto label_27e924;
        case 0x27e928u: goto label_27e928;
        case 0x27e92cu: goto label_27e92c;
        case 0x27e930u: goto label_27e930;
        case 0x27e934u: goto label_27e934;
        case 0x27e938u: goto label_27e938;
        case 0x27e93cu: goto label_27e93c;
        case 0x27e940u: goto label_27e940;
        case 0x27e944u: goto label_27e944;
        case 0x27e948u: goto label_27e948;
        case 0x27e94cu: goto label_27e94c;
        case 0x27e950u: goto label_27e950;
        case 0x27e954u: goto label_27e954;
        case 0x27e958u: goto label_27e958;
        case 0x27e95cu: goto label_27e95c;
        case 0x27e960u: goto label_27e960;
        case 0x27e964u: goto label_27e964;
        case 0x27e968u: goto label_27e968;
        case 0x27e96cu: goto label_27e96c;
        case 0x27e970u: goto label_27e970;
        case 0x27e974u: goto label_27e974;
        case 0x27e978u: goto label_27e978;
        case 0x27e97cu: goto label_27e97c;
        case 0x27e980u: goto label_27e980;
        case 0x27e984u: goto label_27e984;
        case 0x27e988u: goto label_27e988;
        case 0x27e98cu: goto label_27e98c;
        case 0x27e990u: goto label_27e990;
        case 0x27e994u: goto label_27e994;
        case 0x27e998u: goto label_27e998;
        case 0x27e99cu: goto label_27e99c;
        default: return;
    }

label_27e1d0:
    // 0x27e1d0: 0x1588a  .word       0x0001588A                   # movz        $t3, $zero, $at # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e1d0u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 11, GPR_VEC(ctx, 0));
label_27e1d4:
    // 0x27e1d4: 0xb370  tge         $zero, $zero, 717
    ctx->pc = 0x27e1d4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27e1d8:
    // 0x27e1d8: 0x0  nop
    ctx->pc = 0x27e1d8u;
    // NOP
label_27e1dc:
    // 0x27e1dc: 0x0  nop
    ctx->pc = 0x27e1dcu;
    // NOP
label_27e1e0:
    // 0x27e1e0: 0x158a1  .word       0x000158A1                   # addu        $t3, $zero, $at # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e1e0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 1)));
label_27e1e4:
    // 0x27e1e4: 0x6820  add         $t5, $zero, $zero
    ctx->pc = 0x27e1e4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_27e1e8:
    // 0x27e1e8: 0x0  nop
    ctx->pc = 0x27e1e8u;
    // NOP
label_27e1ec:
    // 0x27e1ec: 0x0  nop
    ctx->pc = 0x27e1ecu;
    // NOP
label_27e1f0:
    // 0x27e1f0: 0x158af  .word       0x000158AF                   # dsubu       $t3, $zero, $at # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e1f0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 0) - GPR_U64(ctx, 1));
label_27e1f4:
    // 0x27e1f4: 0x5800  sll         $t3, $zero, 0
    ctx->pc = 0x27e1f4u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_27e1f8:
    // 0x27e1f8: 0x0  nop
    ctx->pc = 0x27e1f8u;
    // NOP
label_27e1fc:
    // 0x27e1fc: 0x0  nop
    ctx->pc = 0x27e1fcu;
    // NOP
label_27e200:
    // 0x27e200: 0x158ba  dsrl        $t3, $at, 2
    ctx->pc = 0x27e200u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 1) >> 2);
label_27e204:
    // 0x27e204: 0x2d50  .word       0x00002D50                   # mfhi        $a1 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e204u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_27e208:
    // 0x27e208: 0x0  nop
    ctx->pc = 0x27e208u;
    // NOP
label_27e20c:
    // 0x27e20c: 0x0  nop
    ctx->pc = 0x27e20cu;
    // NOP
label_27e210:
    // 0x27e210: 0x158c0  sll         $t3, $at, 3
    ctx->pc = 0x27e210u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 1), 3));
label_27e214:
    // 0x27e214: 0x4180  sll         $t0, $zero, 6
    ctx->pc = 0x27e214u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 6));
label_27e218:
    // 0x27e218: 0x0  nop
    ctx->pc = 0x27e218u;
    // NOP
label_27e21c:
    // 0x27e21c: 0x0  nop
    ctx->pc = 0x27e21cu;
    // NOP
label_27e220:
    // 0x27e220: 0x158c9  .word       0x000158C9                   # jalr        $t3, $zero # 000100C0 <InstrIdType: CPU_SPECIAL>
label_27e224:
    if (ctx->pc == 0x27E224u) {
        ctx->pc = 0x27E224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E220u;
        // 0x27e224: 0x5b90  .word       0x00005B90                   # mfhi        $t3 # 00000380 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 11, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = 0x27E228u;
        goto label_27e228;
    }
    ctx->pc = 0x27E220u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 11, 0x27E228u);
        ctx->pc = 0x27E224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E220u;
        // 0x27e224: 0x5b90  .word       0x00005B90                   # mfhi        $t3 # 00000380 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 11, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27E220u, 0x27E228u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x27E228u;
label_27e228:
    // 0x27e228: 0x0  nop
    ctx->pc = 0x27e228u;
    // NOP
label_27e22c:
    // 0x27e22c: 0x0  nop
    ctx->pc = 0x27e22cu;
    // NOP
label_27e230:
    // 0x27e230: 0x158d5  .word       0x000158D5                   # INVALID     $zero, $at, 0x58D5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e230u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x27E230 raw=0x000158D5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27e234:
    // 0x27e234: 0xb5a0  .word       0x0000B5A0                   # add         $s6, $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e234u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
label_27e238:
    // 0x27e238: 0x0  nop
    ctx->pc = 0x27e238u;
    // NOP
label_27e23c:
    // 0x27e23c: 0x0  nop
    ctx->pc = 0x27e23cu;
    // NOP
label_27e240:
    // 0x27e240: 0x158ec  .word       0x000158EC                   # dadd        $t3, $zero, $at # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e240u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 1); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 11, r); }
label_27e244:
    // 0x27e244: 0xaef0  tge         $zero, $zero, 699
    ctx->pc = 0x27e244u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27e248:
    // 0x27e248: 0x0  nop
    ctx->pc = 0x27e248u;
    // NOP
label_27e24c:
    // 0x27e24c: 0x0  nop
    ctx->pc = 0x27e24cu;
    // NOP
label_27e250:
    // 0x27e250: 0x15902  srl         $t3, $at, 4
    ctx->pc = 0x27e250u;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 1), 4));
label_27e254:
    // 0x27e254: 0x9410  .word       0x00009410                   # mfhi        $s2 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e254u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_27e258:
    // 0x27e258: 0x0  nop
    ctx->pc = 0x27e258u;
    // NOP
label_27e25c:
    // 0x27e25c: 0x0  nop
    ctx->pc = 0x27e25cu;
    // NOP
label_27e260:
    // 0x27e260: 0x15915  .word       0x00015915                   # INVALID     $zero, $at, 0x5915 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e260u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x27E260 raw=0x00015915"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27e264:
    // 0x27e264: 0xb3c0  sll         $s6, $zero, 15
    ctx->pc = 0x27e264u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 0), 15));
label_27e268:
    // 0x27e268: 0x0  nop
    ctx->pc = 0x27e268u;
    // NOP
label_27e26c:
    // 0x27e26c: 0x0  nop
    ctx->pc = 0x27e26cu;
    // NOP
label_27e270:
    // 0x27e270: 0x1592c  .word       0x0001592C                   # dadd        $t3, $zero, $at # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e270u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 1); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 11, r); }
label_27e274:
    // 0x27e274: 0xb3b0  tge         $zero, $zero, 718
    ctx->pc = 0x27e274u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27e278:
    // 0x27e278: 0x0  nop
    ctx->pc = 0x27e278u;
    // NOP
label_27e27c:
    // 0x27e27c: 0x0  nop
    ctx->pc = 0x27e27cu;
    // NOP
label_27e280:
    // 0x27e280: 0x15943  sra         $t3, $at, 5
    ctx->pc = 0x27e280u;
    SET_GPR_S32(ctx, 11, SRA32(GPR_S32(ctx, 1), 5));
label_27e284:
    // 0x27e284: 0x52b0  tge         $zero, $zero, 330
    ctx->pc = 0x27e284u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27e288:
    // 0x27e288: 0x0  nop
    ctx->pc = 0x27e288u;
    // NOP
label_27e28c:
    // 0x27e28c: 0x0  nop
    ctx->pc = 0x27e28cu;
    // NOP
label_27e290:
    // 0x27e290: 0x449  .word       0x00000449                   # jalr        $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
label_27e294:
    if (ctx->pc == 0x27E294u) {
        ctx->pc = 0x27E294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E290u;
        // 0x27e294: 0x44a  .word       0x0000044A                   # movz        $zero, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27E298u;
        goto label_27e298;
    }
    ctx->pc = 0x27E290u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x27E294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E290u;
        // 0x27e294: 0x44a  .word       0x0000044A                   # movz        $zero, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27E290u, 0x27E298u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x27E298u;
label_27e298:
    // 0x27e298: 0x44b  .word       0x0000044B                   # movn        $zero, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e298u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_27e29c:
    // 0x27e29c: 0x44c  syscall     17
    ctx->pc = 0x27e29cu;
    ctx->pc = 0x27E2A0u;
runtime->handleSyscall(rdram, ctx, 0x11u);
label_27e2a0:
    // 0x27e2a0: 0x44f  sync.p
    ctx->pc = 0x27e2a0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_27e2a4:
    // 0x27e2a4: 0x0  nop
    ctx->pc = 0x27e2a4u;
    // NOP
label_27e2a8:
    // 0x27e2a8: 0x0  nop
    ctx->pc = 0x27e2a8u;
    // NOP
label_27e2ac:
    // 0x27e2ac: 0x0  nop
    ctx->pc = 0x27e2acu;
    // NOP
label_27e2b0:
    // 0x27e2b0: 0x4ca  .word       0x000004CA                   # movz        $zero, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e2b0u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_27e2b4:
    // 0x27e2b4: 0x4cb  .word       0x000004CB                   # movn        $zero, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e2b4u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_27e2b8:
    // 0x27e2b8: 0x4cc  syscall     19
    ctx->pc = 0x27e2b8u;
    ctx->pc = 0x27E2BCu;
runtime->handleSyscall(rdram, ctx, 0x13u);
label_27e2bc:
    // 0x27e2bc: 0x4cd  break       0, 19
    ctx->pc = 0x27e2bcu;
    runtime->handleBreak(rdram, ctx);
label_27e2c0:
    // 0x27e2c0: 0x4d0  .word       0x000004D0                   # mfhi        $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e2c0u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_27e2c4:
    // 0x27e2c4: 0x0  nop
    ctx->pc = 0x27e2c4u;
    // NOP
label_27e2c8:
    // 0x27e2c8: 0x449  .word       0x00000449                   # jalr        $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
label_27e2cc:
    if (ctx->pc == 0x27E2CCu) {
        ctx->pc = 0x27E2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E2C8u;
        // 0x27e2cc: 0x44d  break       0, 17 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x27E2D0u;
        goto label_27e2d0;
    }
    ctx->pc = 0x27E2C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x27E2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E2C8u;
        // 0x27e2cc: 0x44d  break       0, 17 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27E2C8u, 0x27E2D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x27E2D0u;
label_27e2d0:
    // 0x27e2d0: 0x450  .word       0x00000450                   # mfhi        $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e2d0u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_27e2d4:
    // 0x27e2d4: 0x0  nop
    ctx->pc = 0x27e2d4u;
    // NOP
label_27e2d8:
    // 0x27e2d8: 0x4ca  .word       0x000004CA                   # movz        $zero, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e2d8u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_27e2dc:
    // 0x27e2dc: 0x4ce  .word       0x000004CE                   # INVALID     $zero, $zero, 0x4CE # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e2dcu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x27E2DC raw=0x000004CE"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27e2e0:
    // 0x27e2e0: 0x4d1  .word       0x000004D1                   # mthi        $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e2e0u;
    ctx->hi = GPR_U64(ctx, 0);
label_27e2e4:
    // 0x27e2e4: 0x0  nop
    ctx->pc = 0x27e2e4u;
    // NOP
label_27e2e8:
    // 0x27e2e8: 0x0  nop
    ctx->pc = 0x27e2e8u;
    // NOP
label_27e2ec:
    // 0x27e2ec: 0x0  nop
    ctx->pc = 0x27e2ecu;
    // NOP
label_27e2f0:
    // 0x27e2f0: 0x0  nop
    ctx->pc = 0x27e2f0u;
    // NOP
label_27e2f4:
    // 0x27e2f4: 0x120  .word       0x00000120                   # add         $zero, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e2f4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_27e2f8:
    // 0x27e2f8: 0x0  nop
    ctx->pc = 0x27e2f8u;
    // NOP
label_27e2fc:
    // 0x27e2fc: 0x0  nop
    ctx->pc = 0x27e2fcu;
    // NOP
label_27e300:
    // 0x27e300: 0x14c03  sra         $t1, $at, 16
    ctx->pc = 0x27e300u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 1), 16));
label_27e304:
    // 0x27e304: 0x31c80  sll         $v1, $v1, 18
    ctx->pc = 0x27e304u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 18));
label_27e308:
    // 0x27e308: 0x0  nop
    ctx->pc = 0x27e308u;
    // NOP
label_27e30c:
    // 0x27e30c: 0x0  nop
    ctx->pc = 0x27e30cu;
    // NOP
label_27e310:
    // 0x27e310: 0x14c67  .word       0x00014C67                   # nor         $t1, $zero, $at # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e310u;
    SET_GPR_U64(ctx, 9, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 1)));
label_27e314:
    // 0x27e314: 0x2b030  tge         $zero, $v0, 704
    ctx->pc = 0x27e314u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
label_27e318:
    // 0x27e318: 0x0  nop
    ctx->pc = 0x27e318u;
    // NOP
label_27e31c:
    // 0x27e31c: 0x0  nop
    ctx->pc = 0x27e31cu;
    // NOP
label_27e320:
    // 0x27e320: 0x14cbe  dsrl32      $t1, $at, 18
    ctx->pc = 0x27e320u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 1) >> (32 + 18));
label_27e324:
    // 0x27e324: 0x3cf20  .word       0x0003CF20                   # add         $t9, $zero, $v1 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e324u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 25, (int32_t)result);     } }
label_27e328:
    // 0x27e328: 0x0  nop
    ctx->pc = 0x27e328u;
    // NOP
label_27e32c:
    // 0x27e32c: 0x0  nop
    ctx->pc = 0x27e32cu;
    // NOP
label_27e330:
    // 0x27e330: 0x14d38  dsll        $t1, $at, 20
    ctx->pc = 0x27e330u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 1) << 20);
label_27e334:
    // 0x27e334: 0x293a0  .word       0x000293A0                   # add         $s2, $zero, $v0 # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e334u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 18, (int32_t)result);     } }
label_27e338:
    // 0x27e338: 0x0  nop
    ctx->pc = 0x27e338u;
    // NOP
label_27e33c:
    // 0x27e33c: 0x0  nop
    ctx->pc = 0x27e33cu;
    // NOP
label_27e340:
    // 0x27e340: 0x14d8b  .word       0x00014D8B                   # movn        $t1, $zero, $at # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e340u;
    if (GPR_U64(ctx, 1) != 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 0));
label_27e344:
    // 0x27e344: 0x394c0  sll         $s2, $v1, 19
    ctx->pc = 0x27e344u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 3), 19));
label_27e348:
    // 0x27e348: 0x0  nop
    ctx->pc = 0x27e348u;
    // NOP
label_27e34c:
    // 0x27e34c: 0x0  nop
    ctx->pc = 0x27e34cu;
    // NOP
label_27e350:
    // 0x27e350: 0x14dfe  dsrl32      $t1, $at, 23
    ctx->pc = 0x27e350u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 1) >> (32 + 23));
label_27e354:
    // 0x27e354: 0x32210  .word       0x00032210                   # mfhi        $a0 # 00030200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e354u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_27e358:
    // 0x27e358: 0x0  nop
    ctx->pc = 0x27e358u;
    // NOP
label_27e35c:
    // 0x27e35c: 0x0  nop
    ctx->pc = 0x27e35cu;
    // NOP
label_27e360:
    // 0x27e360: 0x14e63  .word       0x00014E63                   # negu        $t1, $at # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e360u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 1)));
label_27e364:
    // 0x27e364: 0x2be30  tge         $zero, $v0, 760
    ctx->pc = 0x27e364u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
label_27e368:
    // 0x27e368: 0x0  nop
    ctx->pc = 0x27e368u;
    // NOP
label_27e36c:
    // 0x27e36c: 0x0  nop
    ctx->pc = 0x27e36cu;
    // NOP
label_27e370:
    // 0x27e370: 0x14ebb  dsra        $t1, $at, 26
    ctx->pc = 0x27e370u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 1) >> 26);
label_27e374:
    // 0x27e374: 0x33ec0  sll         $a3, $v1, 27
    ctx->pc = 0x27e374u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 27));
label_27e378:
    // 0x27e378: 0x0  nop
    ctx->pc = 0x27e378u;
    // NOP
label_27e37c:
    // 0x27e37c: 0x0  nop
    ctx->pc = 0x27e37cu;
    // NOP
label_27e380:
    // 0x27e380: 0x14f23  .word       0x00014F23                   # negu        $t1, $at # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e380u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 1)));
label_27e384:
    // 0x27e384: 0x39160  .word       0x00039160                   # add         $s2, $zero, $v1 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e384u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 18, (int32_t)result);     } }
label_27e388:
    // 0x27e388: 0x0  nop
    ctx->pc = 0x27e388u;
    // NOP
label_27e38c:
    // 0x27e38c: 0x0  nop
    ctx->pc = 0x27e38cu;
    // NOP
label_27e390:
    // 0x27e390: 0x14f96  .word       0x00014F96                   # dsrlv       $t1, $at, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e390u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 1) >> (GPR_U32(ctx, 0) & 0x3F));
label_27e394:
    // 0x27e394: 0x2da70  tge         $zero, $v0, 873
    ctx->pc = 0x27e394u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
label_27e398:
    // 0x27e398: 0x0  nop
    ctx->pc = 0x27e398u;
    // NOP
label_27e39c:
    // 0x27e39c: 0x0  nop
    ctx->pc = 0x27e39cu;
    // NOP
label_27e3a0:
    // 0x27e3a0: 0x14ff2  tlt         $zero, $at, 319
    ctx->pc = 0x27e3a0u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_27e3a4:
    // 0x27e3a4: 0x34540  sll         $t0, $v1, 21
    ctx->pc = 0x27e3a4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 3), 21));
label_27e3a8:
    // 0x27e3a8: 0x0  nop
    ctx->pc = 0x27e3a8u;
    // NOP
label_27e3ac:
    // 0x27e3ac: 0x0  nop
    ctx->pc = 0x27e3acu;
    // NOP
label_27e3b0:
    // 0x27e3b0: 0x1505b  .word       0x0001505B                   # divu        $t2, $zero, $at # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e3b0u;
    { uint32_t divisor = GPR_U32(ctx, 1); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_27e3b4:
    // 0x27e3b4: 0x34a20  .word       0x00034A20                   # add         $t1, $zero, $v1 # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e3b4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_27e3b8:
    // 0x27e3b8: 0x0  nop
    ctx->pc = 0x27e3b8u;
    // NOP
label_27e3bc:
    // 0x27e3bc: 0x0  nop
    ctx->pc = 0x27e3bcu;
    // NOP
label_27e3c0:
    // 0x27e3c0: 0x150c5  .word       0x000150C5                   # INVALID     $zero, $at, 0x50C5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e3c0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x27E3C0 raw=0x000150C5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27e3c4:
    // 0x27e3c4: 0x31120  .word       0x00031120                   # add         $v0, $zero, $v1 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e3c4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 2, (int32_t)result);     } }
label_27e3c8:
    // 0x27e3c8: 0x0  nop
    ctx->pc = 0x27e3c8u;
    // NOP
label_27e3cc:
    // 0x27e3cc: 0x0  nop
    ctx->pc = 0x27e3ccu;
    // NOP
label_27e3d0:
    // 0x27e3d0: 0x15128  .word       0x00015128                   # mfsa        $t2 # 00010100 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x27e3d0u;
    SET_GPR_U32(ctx, 10, ctx->sa);
label_27e3d4:
    // 0x27e3d4: 0x25aa0  .word       0x00025AA0                   # add         $t3, $zero, $v0 # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e3d4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_27e3d8:
    // 0x27e3d8: 0x0  nop
    ctx->pc = 0x27e3d8u;
    // NOP
label_27e3dc:
    // 0x27e3dc: 0x0  nop
    ctx->pc = 0x27e3dcu;
    // NOP
label_27e3e0:
    // 0x27e3e0: 0x15174  teq         $zero, $at, 325
    ctx->pc = 0x27e3e0u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_27e3e4:
    // 0x27e3e4: 0x33100  sll         $a2, $v1, 4
    ctx->pc = 0x27e3e4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_27e3e8:
    // 0x27e3e8: 0x0  nop
    ctx->pc = 0x27e3e8u;
    // NOP
label_27e3ec:
    // 0x27e3ec: 0x0  nop
    ctx->pc = 0x27e3ecu;
    // NOP
label_27e3f0:
    // 0x27e3f0: 0x151db  .word       0x000151DB                   # divu        $t2, $zero, $at # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e3f0u;
    { uint32_t divisor = GPR_U32(ctx, 1); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_27e3f4:
    // 0x27e3f4: 0x33280  sll         $a2, $v1, 10
    ctx->pc = 0x27e3f4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 10));
label_27e3f8:
    // 0x27e3f8: 0x0  nop
    ctx->pc = 0x27e3f8u;
    // NOP
label_27e3fc:
    // 0x27e3fc: 0x0  nop
    ctx->pc = 0x27e3fcu;
    // NOP
label_27e400:
    // 0x27e400: 0x15242  srl         $t2, $at, 9
    ctx->pc = 0x27e400u;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 1), 9));
label_27e404:
    // 0x27e404: 0x2ed30  tge         $zero, $v0, 948
    ctx->pc = 0x27e404u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
label_27e408:
    // 0x27e408: 0x0  nop
    ctx->pc = 0x27e408u;
    // NOP
label_27e40c:
    // 0x27e40c: 0x0  nop
    ctx->pc = 0x27e40cu;
    // NOP
label_27e410:
    // 0x27e410: 0x152a0  .word       0x000152A0                   # add         $t2, $zero, $at # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e410u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
label_27e414:
    // 0x27e414: 0x39420  .word       0x00039420                   # add         $s2, $zero, $v1 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e414u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 18, (int32_t)result);     } }
label_27e418:
    // 0x27e418: 0x0  nop
    ctx->pc = 0x27e418u;
    // NOP
label_27e41c:
    // 0x27e41c: 0x0  nop
    ctx->pc = 0x27e41cu;
    // NOP
label_27e420:
    // 0x27e420: 0x15313  .word       0x00015313                   # mtlo        $zero # 00015300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e420u;
    ctx->lo = GPR_U64(ctx, 0);
label_27e424:
    // 0x27e424: 0x361a0  .word       0x000361A0                   # add         $t4, $zero, $v1 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e424u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_27e428:
    // 0x27e428: 0x0  nop
    ctx->pc = 0x27e428u;
    // NOP
label_27e42c:
    // 0x27e42c: 0x0  nop
    ctx->pc = 0x27e42cu;
    // NOP
label_27e430:
    // 0x27e430: 0x15380  sll         $t2, $at, 14
    ctx->pc = 0x27e430u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 1), 14));
label_27e434:
    // 0x27e434: 0x3a1f0  tge         $zero, $v1, 647
    ctx->pc = 0x27e434u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_27e438:
    // 0x27e438: 0x0  nop
    ctx->pc = 0x27e438u;
    // NOP
label_27e43c:
    // 0x27e43c: 0x0  nop
    ctx->pc = 0x27e43cu;
    // NOP
label_27e440:
    // 0x27e440: 0x153f5  .word       0x000153F5                   # INVALID     $zero, $at, 0x53F5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e440u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x27E440 raw=0x000153F5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27e444:
    // 0x27e444: 0x2bac0  sll         $s7, $v0, 11
    ctx->pc = 0x27e444u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
label_27e448:
    // 0x27e448: 0x0  nop
    ctx->pc = 0x27e448u;
    // NOP
label_27e44c:
    // 0x27e44c: 0x0  nop
    ctx->pc = 0x27e44cu;
    // NOP
label_27e450:
    // 0x27e450: 0x1544d  break       1, 337
    ctx->pc = 0x27e450u;
    runtime->handleBreak(rdram, ctx);
label_27e454:
    // 0x27e454: 0x33760  .word       0x00033760                   # add         $a2, $zero, $v1 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e454u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 6, (int32_t)result);     } }
label_27e458:
    // 0x27e458: 0x0  nop
    ctx->pc = 0x27e458u;
    // NOP
label_27e45c:
    // 0x27e45c: 0x0  nop
    ctx->pc = 0x27e45cu;
    // NOP
label_27e460:
    // 0x27e460: 0x154b4  teq         $zero, $at, 338
    ctx->pc = 0x27e460u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_27e464:
    // 0x27e464: 0x23510  .word       0x00023510                   # mfhi        $a2 # 00020500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e464u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_27e468:
    // 0x27e468: 0x0  nop
    ctx->pc = 0x27e468u;
    // NOP
label_27e46c:
    // 0x27e46c: 0x0  nop
    ctx->pc = 0x27e46cu;
    // NOP
label_27e470:
    // 0x27e470: 0x154fb  dsra        $t2, $at, 19
    ctx->pc = 0x27e470u;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 1) >> 19);
label_27e474:
    // 0x27e474: 0x2b480  sll         $s6, $v0, 18
    ctx->pc = 0x27e474u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 2), 18));
label_27e478:
    // 0x27e478: 0x0  nop
    ctx->pc = 0x27e478u;
    // NOP
label_27e47c:
    // 0x27e47c: 0x0  nop
    ctx->pc = 0x27e47cu;
    // NOP
label_27e480:
    // 0x27e480: 0x15552  .word       0x00015552                   # mflo        $t2 # 00010540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e480u;
    SET_GPR_U64(ctx, 10, ctx->lo);
label_27e484:
    // 0x27e484: 0x2bd90  .word       0x0002BD90                   # mfhi        $s7 # 00020580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e484u;
    SET_GPR_U64(ctx, 23, ctx->hi);
label_27e488:
    // 0x27e488: 0x0  nop
    ctx->pc = 0x27e488u;
    // NOP
label_27e48c:
    // 0x27e48c: 0x0  nop
    ctx->pc = 0x27e48cu;
    // NOP
label_27e490:
    // 0x27e490: 0x155aa  .word       0x000155AA                   # slt         $t2, $zero, $at # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e490u;
    SET_GPR_U64(ctx, 10, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
label_27e494:
    // 0x27e494: 0x35a90  .word       0x00035A90                   # mfhi        $t3 # 00030280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e494u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_27e498:
    // 0x27e498: 0x0  nop
    ctx->pc = 0x27e498u;
    // NOP
label_27e49c:
    // 0x27e49c: 0x0  nop
    ctx->pc = 0x27e49cu;
    // NOP
label_27e4a0:
    // 0x27e4a0: 0x15616  .word       0x00015616                   # dsrlv       $t2, $at, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e4a0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 1) >> (GPR_U32(ctx, 0) & 0x3F));
label_27e4a4:
    // 0x27e4a4: 0x2ade0  .word       0x0002ADE0                   # add         $s5, $zero, $v0 # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e4a4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 21, (int32_t)result);     } }
label_27e4a8:
    // 0x27e4a8: 0x0  nop
    ctx->pc = 0x27e4a8u;
    // NOP
label_27e4ac:
    // 0x27e4ac: 0x0  nop
    ctx->pc = 0x27e4acu;
    // NOP
label_27e4b0:
    // 0x27e4b0: 0x1566c  .word       0x0001566C                   # dadd        $t2, $zero, $at # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e4b0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 1); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 10, r); }
label_27e4b4:
    // 0x27e4b4: 0x2e3d0  .word       0x0002E3D0                   # mfhi        $gp # 000203C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e4b4u;
    SET_GPR_U64(ctx, 28, ctx->hi);
label_27e4b8:
    // 0x27e4b8: 0x0  nop
    ctx->pc = 0x27e4b8u;
    // NOP
label_27e4bc:
    // 0x27e4bc: 0x0  nop
    ctx->pc = 0x27e4bcu;
    // NOP
label_27e4c0:
    // 0x27e4c0: 0x156c9  .word       0x000156C9                   # jalr        $t2, $zero # 000106C0 <InstrIdType: CPU_SPECIAL>
label_27e4c4:
    if (ctx->pc == 0x27E4C4u) {
        ctx->pc = 0x27E4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E4C0u;
        // 0x27e4c4: 0x2cd40  sll         $t9, $v0, 21 (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 2), 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27E4C8u;
        goto label_27e4c8;
    }
    ctx->pc = 0x27E4C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 10, 0x27E4C8u);
        ctx->pc = 0x27E4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E4C0u;
        // 0x27e4c4: 0x2cd40  sll         $t9, $v0, 21 (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 2), 21));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27E4C0u, 0x27E4C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x27E4C8u;
label_27e4c8:
    // 0x27e4c8: 0x0  nop
    ctx->pc = 0x27e4c8u;
    // NOP
label_27e4cc:
    // 0x27e4cc: 0x0  nop
    ctx->pc = 0x27e4ccu;
    // NOP
label_27e4d0:
    // 0x27e4d0: 0x15723  .word       0x00015723                   # negu        $t2, $at # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e4d0u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 1)));
label_27e4d4:
    // 0x27e4d4: 0x38ca0  .word       0x00038CA0                   # add         $s1, $zero, $v1 # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e4d4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_27e4d8:
    // 0x27e4d8: 0x0  nop
    ctx->pc = 0x27e4d8u;
    // NOP
label_27e4dc:
    // 0x27e4dc: 0x0  nop
    ctx->pc = 0x27e4dcu;
    // NOP
label_27e4e0:
    // 0x27e4e0: 0x15795  .word       0x00015795                   # INVALID     $zero, $at, 0x5795 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e4e0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x27E4E0 raw=0x00015795"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27e4e4:
    // 0x27e4e4: 0x28500  sll         $s0, $v0, 20
    ctx->pc = 0x27e4e4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 20));
label_27e4e8:
    // 0x27e4e8: 0x0  nop
    ctx->pc = 0x27e4e8u;
    // NOP
label_27e4ec:
    // 0x27e4ec: 0x0  nop
    ctx->pc = 0x27e4ecu;
    // NOP
label_27e4f0:
    // 0x27e4f0: 0x157e6  .word       0x000157E6                   # xor         $t2, $zero, $at # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e4f0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 1));
label_27e4f4:
    // 0x27e4f4: 0x2a860  .word       0x0002A860                   # add         $s5, $zero, $v0 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e4f4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 21, (int32_t)result);     } }
label_27e4f8:
    // 0x27e4f8: 0x0  nop
    ctx->pc = 0x27e4f8u;
    // NOP
label_27e4fc:
    // 0x27e4fc: 0x0  nop
    ctx->pc = 0x27e4fcu;
    // NOP
label_27e500:
    // 0x27e500: 0x1583c  dsll32      $t3, $at, 0
    ctx->pc = 0x27e500u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 1) << (32 + 0));
label_27e504:
    // 0x27e504: 0x2ef60  .word       0x0002EF60                   # add         $sp, $zero, $v0 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e504u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 29, (int32_t)result);     } }
label_27e508:
    // 0x27e508: 0x0  nop
    ctx->pc = 0x27e508u;
    // NOP
label_27e50c:
    // 0x27e50c: 0x0  nop
    ctx->pc = 0x27e50cu;
    // NOP
label_27e510:
    // 0x27e510: 0x1589a  .word       0x0001589A                   # div         $t3, $zero, $at # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e510u;
    { int32_t divisor = GPR_S32(ctx, 1);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_27e514:
    // 0x27e514: 0x36690  .word       0x00036690                   # mfhi        $t4 # 00030680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e514u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_27e518:
    // 0x27e518: 0x0  nop
    ctx->pc = 0x27e518u;
    // NOP
label_27e51c:
    // 0x27e51c: 0x0  nop
    ctx->pc = 0x27e51cu;
    // NOP
label_27e520:
    // 0x27e520: 0x15907  .word       0x00015907                   # srav        $t3, $at, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e520u;
    SET_GPR_S32(ctx, 11, SRA32(GPR_S32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_27e524:
    // 0x27e524: 0x2fe80  sll         $ra, $v0, 26
    ctx->pc = 0x27e524u;
    SET_GPR_S32(ctx, 31, (int32_t)SLL32(GPR_U32(ctx, 2), 26));
label_27e528:
    // 0x27e528: 0x0  nop
    ctx->pc = 0x27e528u;
    // NOP
label_27e52c:
    // 0x27e52c: 0x0  nop
    ctx->pc = 0x27e52cu;
    // NOP
label_27e530:
    // 0x27e530: 0x15967  .word       0x00015967                   # nor         $t3, $zero, $at # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e530u;
    SET_GPR_U64(ctx, 11, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 1)));
label_27e534:
    // 0x27e534: 0x3afd0  .word       0x0003AFD0                   # mfhi        $s5 # 000307C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e534u;
    SET_GPR_U64(ctx, 21, ctx->hi);
label_27e538:
    // 0x27e538: 0x0  nop
    ctx->pc = 0x27e538u;
    // NOP
label_27e53c:
    // 0x27e53c: 0x0  nop
    ctx->pc = 0x27e53cu;
    // NOP
label_27e540:
    // 0x27e540: 0x159dd  .word       0x000159DD                   # dmultu      $zero, $at # 000059C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e540u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x27E540 raw=0x000159DD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27e544:
    // 0x27e544: 0x27fe0  .word       0x00027FE0                   # add         $t7, $zero, $v0 # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e544u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_27e548:
    // 0x27e548: 0x0  nop
    ctx->pc = 0x27e548u;
    // NOP
label_27e54c:
    // 0x27e54c: 0x0  nop
    ctx->pc = 0x27e54cu;
    // NOP
label_27e550:
    // 0x27e550: 0x15a2d  .word       0x00015A2D                   # daddu       $t3, $zero, $at # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e550u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 1));
label_27e554:
    // 0x27e554: 0x2f770  tge         $zero, $v0, 989
    ctx->pc = 0x27e554u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
label_27e558:
    // 0x27e558: 0x0  nop
    ctx->pc = 0x27e558u;
    // NOP
label_27e55c:
    // 0x27e55c: 0x0  nop
    ctx->pc = 0x27e55cu;
    // NOP
label_27e560:
    // 0x27e560: 0x15a8c  .word       0x00015A8C                   # syscall     362 # 00010000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e560u;
    ctx->pc = 0x27E564u;
runtime->handleSyscall(rdram, ctx, 0x56Au);
label_27e564:
    // 0x27e564: 0x342b0  tge         $zero, $v1, 266
    ctx->pc = 0x27e564u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_27e568:
    // 0x27e568: 0x0  nop
    ctx->pc = 0x27e568u;
    // NOP
label_27e56c:
    // 0x27e56c: 0x0  nop
    ctx->pc = 0x27e56cu;
    // NOP
label_27e570:
    // 0x27e570: 0x15af5  .word       0x00015AF5                   # INVALID     $zero, $at, 0x5AF5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e570u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x27E570 raw=0x00015AF5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27e574:
    // 0x27e574: 0x36a90  .word       0x00036A90                   # mfhi        $t5 # 00030280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e574u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_27e578:
    // 0x27e578: 0x0  nop
    ctx->pc = 0x27e578u;
    // NOP
label_27e57c:
    // 0x27e57c: 0x0  nop
    ctx->pc = 0x27e57cu;
    // NOP
label_27e580:
    // 0x27e580: 0x15b63  .word       0x00015B63                   # negu        $t3, $at # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e580u;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 1)));
label_27e584:
    // 0x27e584: 0x2d880  sll         $k1, $v0, 2
    ctx->pc = 0x27e584u;
    SET_GPR_S32(ctx, 27, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_27e588:
    // 0x27e588: 0x0  nop
    ctx->pc = 0x27e588u;
    // NOP
label_27e58c:
    // 0x27e58c: 0x0  nop
    ctx->pc = 0x27e58cu;
    // NOP
label_27e590:
    // 0x27e590: 0x15bbf  dsra32      $t3, $at, 14
    ctx->pc = 0x27e590u;
    SET_GPR_S64(ctx, 11, GPR_S64(ctx, 1) >> (32 + 14));
label_27e594:
    // 0x27e594: 0x2ce80  sll         $t9, $v0, 26
    ctx->pc = 0x27e594u;
    SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 2), 26));
label_27e598:
    // 0x27e598: 0x0  nop
    ctx->pc = 0x27e598u;
    // NOP
label_27e59c:
    // 0x27e59c: 0x0  nop
    ctx->pc = 0x27e59cu;
    // NOP
label_27e5a0:
    // 0x27e5a0: 0x15c19  .word       0x00015C19                   # multu       $zero, $at # 00005C00 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e5a0u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
label_27e5a4:
    // 0x27e5a4: 0x26800  sll         $t5, $v0, 0
    ctx->pc = 0x27e5a4u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
label_27e5a8:
    // 0x27e5a8: 0x0  nop
    ctx->pc = 0x27e5a8u;
    // NOP
label_27e5ac:
    // 0x27e5ac: 0x0  nop
    ctx->pc = 0x27e5acu;
    // NOP
label_27e5b0:
    // 0x27e5b0: 0x15c66  .word       0x00015C66                   # xor         $t3, $zero, $at # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e5b0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 1));
label_27e5b4:
    // 0x27e5b4: 0x345d0  .word       0x000345D0                   # mfhi        $t0 # 000305C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e5b4u;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_27e5b8:
    // 0x27e5b8: 0x0  nop
    ctx->pc = 0x27e5b8u;
    // NOP
label_27e5bc:
    // 0x27e5bc: 0x0  nop
    ctx->pc = 0x27e5bcu;
    // NOP
label_27e5c0:
    // 0x27e5c0: 0x15ccf  .word       0x00015CCF                   # sync.p # 00015800 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e5c0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_27e5c4:
    // 0x27e5c4: 0x2c230  tge         $zero, $v0, 776
    ctx->pc = 0x27e5c4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
label_27e5c8:
    // 0x27e5c8: 0x0  nop
    ctx->pc = 0x27e5c8u;
    // NOP
label_27e5cc:
    // 0x27e5cc: 0x0  nop
    ctx->pc = 0x27e5ccu;
    // NOP
label_27e5d0:
    // 0x27e5d0: 0x15d28  .word       0x00015D28                   # mfsa        $t3 # 00010500 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x27e5d0u;
    SET_GPR_U32(ctx, 11, ctx->sa);
label_27e5d4:
    // 0x27e5d4: 0x32af0  tge         $zero, $v1, 171
    ctx->pc = 0x27e5d4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_27e5d8:
    // 0x27e5d8: 0x0  nop
    ctx->pc = 0x27e5d8u;
    // NOP
label_27e5dc:
    // 0x27e5dc: 0x0  nop
    ctx->pc = 0x27e5dcu;
    // NOP
label_27e5e0:
    // 0x27e5e0: 0x15d8e  .word       0x00015D8E                   # INVALID     $zero, $at, 0x5D8E # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e5e0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x27E5E0 raw=0x00015D8E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27e5e4:
    // 0x27e5e4: 0x2c9e0  .word       0x0002C9E0                   # add         $t9, $zero, $v0 # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e5e4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 25, (int32_t)result);     } }
label_27e5e8:
    // 0x27e5e8: 0x0  nop
    ctx->pc = 0x27e5e8u;
    // NOP
label_27e5ec:
    // 0x27e5ec: 0x0  nop
    ctx->pc = 0x27e5ecu;
    // NOP
label_27e5f0:
    // 0x27e5f0: 0x15de8  .word       0x00015DE8                   # mfsa        $t3 # 000105C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x27e5f0u;
    SET_GPR_U32(ctx, 11, ctx->sa);
label_27e5f4:
    // 0x27e5f4: 0x334c0  sll         $a2, $v1, 19
    ctx->pc = 0x27e5f4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 19));
label_27e5f8:
    // 0x27e5f8: 0x0  nop
    ctx->pc = 0x27e5f8u;
    // NOP
label_27e5fc:
    // 0x27e5fc: 0x0  nop
    ctx->pc = 0x27e5fcu;
    // NOP
label_27e600:
    // 0x27e600: 0x15e4f  .word       0x00015E4F                   # sync.p # 00015800 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e600u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_27e604:
    // 0x27e604: 0x21220  .word       0x00021220                   # add         $v0, $zero, $v0 # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e604u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 2, (int32_t)result);     } }
label_27e608:
    // 0x27e608: 0x0  nop
    ctx->pc = 0x27e608u;
    // NOP
label_27e60c:
    // 0x27e60c: 0x0  nop
    ctx->pc = 0x27e60cu;
    // NOP
label_27e610:
    // 0x27e610: 0x15e92  .word       0x00015E92                   # mflo        $t3 # 00010680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e610u;
    SET_GPR_U64(ctx, 11, ctx->lo);
label_27e614:
    // 0x27e614: 0x2d800  sll         $k1, $v0, 0
    ctx->pc = 0x27e614u;
    SET_GPR_S32(ctx, 27, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
label_27e618:
    // 0x27e618: 0x0  nop
    ctx->pc = 0x27e618u;
    // NOP
label_27e61c:
    // 0x27e61c: 0x0  nop
    ctx->pc = 0x27e61cu;
    // NOP
label_27e620:
    // 0x27e620: 0x15eed  .word       0x00015EED                   # daddu       $t3, $zero, $at # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e620u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 1));
label_27e624:
    // 0x27e624: 0x2c390  .word       0x0002C390                   # mfhi        $t8 # 00020380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e624u;
    SET_GPR_U64(ctx, 24, ctx->hi);
label_27e628:
    // 0x27e628: 0x0  nop
    ctx->pc = 0x27e628u;
    // NOP
label_27e62c:
    // 0x27e62c: 0x0  nop
    ctx->pc = 0x27e62cu;
    // NOP
label_27e630:
    // 0x27e630: 0x15f46  .word       0x00015F46                   # srlv        $t3, $at, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e630u;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_27e634:
    // 0x27e634: 0x2e560  .word       0x0002E560                   # add         $gp, $zero, $v0 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e634u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 28, (int32_t)result);     } }
label_27e638:
    // 0x27e638: 0x0  nop
    ctx->pc = 0x27e638u;
    // NOP
label_27e63c:
    // 0x27e63c: 0x0  nop
    ctx->pc = 0x27e63cu;
    // NOP
label_27e640:
    // 0x27e640: 0x15fa3  .word       0x00015FA3                   # negu        $t3, $at # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e640u;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 1)));
label_27e644:
    // 0x27e644: 0x2deb0  tge         $zero, $v0, 890
    ctx->pc = 0x27e644u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
label_27e648:
    // 0x27e648: 0x0  nop
    ctx->pc = 0x27e648u;
    // NOP
label_27e64c:
    // 0x27e64c: 0x0  nop
    ctx->pc = 0x27e64cu;
    // NOP
label_27e650:
    // 0x27e650: 0x15fff  dsra32      $t3, $at, 31
    ctx->pc = 0x27e650u;
    SET_GPR_S64(ctx, 11, GPR_S64(ctx, 1) >> (32 + 31));
label_27e654:
    // 0x27e654: 0x326c0  sll         $a0, $v1, 27
    ctx->pc = 0x27e654u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 27));
label_27e658:
    // 0x27e658: 0x0  nop
    ctx->pc = 0x27e658u;
    // NOP
label_27e65c:
    // 0x27e65c: 0x0  nop
    ctx->pc = 0x27e65cu;
    // NOP
label_27e660:
    // 0x27e660: 0x16064  .word       0x00016064                   # and         $t4, $zero, $at # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e660u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) & GPR_U64(ctx, 1));
label_27e664:
    // 0x27e664: 0x2e200  sll         $gp, $v0, 8
    ctx->pc = 0x27e664u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
label_27e668:
    // 0x27e668: 0x0  nop
    ctx->pc = 0x27e668u;
    // NOP
label_27e66c:
    // 0x27e66c: 0x0  nop
    ctx->pc = 0x27e66cu;
    // NOP
label_27e670:
    // 0x27e670: 0x160c1  .word       0x000160C1                   # INVALID     $zero, $at, 0x60C1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e670u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x27E670 raw=0x000160C1"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27e674:
    // 0x27e674: 0x2bcd0  .word       0x0002BCD0                   # mfhi        $s7 # 000204C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e674u;
    SET_GPR_U64(ctx, 23, ctx->hi);
label_27e678:
    // 0x27e678: 0x0  nop
    ctx->pc = 0x27e678u;
    // NOP
label_27e67c:
    // 0x27e67c: 0x0  nop
    ctx->pc = 0x27e67cu;
    // NOP
label_27e680:
    // 0x27e680: 0x16119  .word       0x00016119                   # multu       $zero, $at # 00006100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e680u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
label_27e684:
    // 0x27e684: 0x2d8c0  sll         $k1, $v0, 3
    ctx->pc = 0x27e684u;
    SET_GPR_S32(ctx, 27, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_27e688:
    // 0x27e688: 0x0  nop
    ctx->pc = 0x27e688u;
    // NOP
label_27e68c:
    // 0x27e68c: 0x0  nop
    ctx->pc = 0x27e68cu;
    // NOP
label_27e690:
    // 0x27e690: 0x16175  .word       0x00016175                   # INVALID     $zero, $at, 0x6175 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e690u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x27E690 raw=0x00016175"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27e694:
    // 0x27e694: 0x2d420  .word       0x0002D420                   # add         $k0, $zero, $v0 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e694u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 26, (int32_t)result);     } }
label_27e698:
    // 0x27e698: 0x0  nop
    ctx->pc = 0x27e698u;
    // NOP
label_27e69c:
    // 0x27e69c: 0x0  nop
    ctx->pc = 0x27e69cu;
    // NOP
label_27e6a0:
    // 0x27e6a0: 0x161d0  .word       0x000161D0                   # mfhi        $t4 # 000101C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e6a0u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_27e6a4:
    // 0x27e6a4: 0x36830  tge         $zero, $v1, 416
    ctx->pc = 0x27e6a4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_27e6a8:
    // 0x27e6a8: 0x0  nop
    ctx->pc = 0x27e6a8u;
    // NOP
label_27e6ac:
    // 0x27e6ac: 0x0  nop
    ctx->pc = 0x27e6acu;
    // NOP
label_27e6b0:
    // 0x27e6b0: 0x1623e  dsrl32      $t4, $at, 8
    ctx->pc = 0x27e6b0u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 1) >> (32 + 8));
label_27e6b4:
    // 0x27e6b4: 0x2d6a0  .word       0x0002D6A0                   # add         $k0, $zero, $v0 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e6b4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 26, (int32_t)result);     } }
label_27e6b8:
    // 0x27e6b8: 0x0  nop
    ctx->pc = 0x27e6b8u;
    // NOP
label_27e6bc:
    // 0x27e6bc: 0x0  nop
    ctx->pc = 0x27e6bcu;
    // NOP
label_27e6c0:
    // 0x27e6c0: 0x16299  .word       0x00016299                   # multu       $zero, $at # 00006280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e6c0u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
label_27e6c4:
    // 0x27e6c4: 0x2ec00  sll         $sp, $v0, 16
    ctx->pc = 0x27e6c4u;
    SET_GPR_S32(ctx, 29, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_27e6c8:
    // 0x27e6c8: 0x0  nop
    ctx->pc = 0x27e6c8u;
    // NOP
label_27e6cc:
    // 0x27e6cc: 0x0  nop
    ctx->pc = 0x27e6ccu;
    // NOP
label_27e6d0:
    // 0x27e6d0: 0x162f7  .word       0x000162F7                   # INVALID     $zero, $at, 0x62F7 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e6d0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x27E6D0 raw=0x000162F7"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27e6d4:
    // 0x27e6d4: 0x2e430  tge         $zero, $v0, 912
    ctx->pc = 0x27e6d4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
label_27e6d8:
    // 0x27e6d8: 0x0  nop
    ctx->pc = 0x27e6d8u;
    // NOP
label_27e6dc:
    // 0x27e6dc: 0x0  nop
    ctx->pc = 0x27e6dcu;
    // NOP
label_27e6e0:
    // 0x27e6e0: 0x16354  .word       0x00016354                   # dsllv       $t4, $at, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e6e0u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 1) << (GPR_U32(ctx, 0) & 0x3F));
label_27e6e4:
    // 0x27e6e4: 0x2e0b0  tge         $zero, $v0, 898
    ctx->pc = 0x27e6e4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
label_27e6e8:
    // 0x27e6e8: 0x0  nop
    ctx->pc = 0x27e6e8u;
    // NOP
label_27e6ec:
    // 0x27e6ec: 0x0  nop
    ctx->pc = 0x27e6ecu;
    // NOP
label_27e6f0:
    // 0x27e6f0: 0x163b1  tgeu        $zero, $at, 398
    ctx->pc = 0x27e6f0u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_27e6f4:
    // 0x27e6f4: 0x2dbb0  tge         $zero, $v0, 878
    ctx->pc = 0x27e6f4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
label_27e6f8:
    // 0x27e6f8: 0x0  nop
    ctx->pc = 0x27e6f8u;
    // NOP
label_27e6fc:
    // 0x27e6fc: 0x0  nop
    ctx->pc = 0x27e6fcu;
    // NOP
label_27e700:
    // 0x27e700: 0x1640d  break       1, 400
    ctx->pc = 0x27e700u;
    runtime->handleBreak(rdram, ctx);
label_27e704:
    // 0x27e704: 0x284f0  tge         $zero, $v0, 531
    ctx->pc = 0x27e704u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
label_27e708:
    // 0x27e708: 0x0  nop
    ctx->pc = 0x27e708u;
    // NOP
label_27e70c:
    // 0x27e70c: 0x0  nop
    ctx->pc = 0x27e70cu;
    // NOP
label_27e710:
    // 0x27e710: 0x1645e  .word       0x0001645E                   # ddiv        $t4, $zero, $at # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e710u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x27E710 raw=0x0001645E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27e714:
    // 0x27e714: 0x33140  sll         $a2, $v1, 5
    ctx->pc = 0x27e714u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_27e718:
    // 0x27e718: 0x0  nop
    ctx->pc = 0x27e718u;
    // NOP
label_27e71c:
    // 0x27e71c: 0x0  nop
    ctx->pc = 0x27e71cu;
    // NOP
label_27e720:
    // 0x27e720: 0x164c5  .word       0x000164C5                   # INVALID     $zero, $at, 0x64C5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e720u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x27E720 raw=0x000164C5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27e724:
    // 0x27e724: 0x28340  sll         $s0, $v0, 13
    ctx->pc = 0x27e724u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 13));
label_27e728:
    // 0x27e728: 0x0  nop
    ctx->pc = 0x27e728u;
    // NOP
label_27e72c:
    // 0x27e72c: 0x0  nop
    ctx->pc = 0x27e72cu;
    // NOP
label_27e730:
    // 0x27e730: 0x16516  .word       0x00016516                   # dsrlv       $t4, $at, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e730u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 1) >> (GPR_U32(ctx, 0) & 0x3F));
label_27e734:
    // 0x27e734: 0x2a2b0  tge         $zero, $v0, 650
    ctx->pc = 0x27e734u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
label_27e738:
    // 0x27e738: 0x0  nop
    ctx->pc = 0x27e738u;
    // NOP
label_27e73c:
    // 0x27e73c: 0x0  nop
    ctx->pc = 0x27e73cu;
    // NOP
label_27e740:
    // 0x27e740: 0x1656b  .word       0x0001656B                   # sltu        $t4, $zero, $at # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e740u;
    SET_GPR_U64(ctx, 12, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
label_27e744:
    // 0x27e744: 0x32eb0  tge         $zero, $v1, 186
    ctx->pc = 0x27e744u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_27e748:
    // 0x27e748: 0x0  nop
    ctx->pc = 0x27e748u;
    // NOP
label_27e74c:
    // 0x27e74c: 0x0  nop
    ctx->pc = 0x27e74cu;
    // NOP
label_27e750:
    // 0x27e750: 0x165d1  .word       0x000165D1                   # mthi        $zero # 000165C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e750u;
    ctx->hi = GPR_U64(ctx, 0);
label_27e754:
    // 0x27e754: 0x2d770  tge         $zero, $v0, 861
    ctx->pc = 0x27e754u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
label_27e758:
    // 0x27e758: 0x0  nop
    ctx->pc = 0x27e758u;
    // NOP
label_27e75c:
    // 0x27e75c: 0x0  nop
    ctx->pc = 0x27e75cu;
    // NOP
label_27e760:
    // 0x27e760: 0x1662c  .word       0x0001662C                   # dadd        $t4, $zero, $at # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e760u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 1); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 12, r); }
label_27e764:
    // 0x27e764: 0x28be0  .word       0x00028BE0                   # add         $s1, $zero, $v0 # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e764u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_27e768:
    // 0x27e768: 0x0  nop
    ctx->pc = 0x27e768u;
    // NOP
label_27e76c:
    // 0x27e76c: 0x0  nop
    ctx->pc = 0x27e76cu;
    // NOP
label_27e770:
    // 0x27e770: 0x1667e  dsrl32      $t4, $at, 25
    ctx->pc = 0x27e770u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 1) >> (32 + 25));
label_27e774:
    // 0x27e774: 0x38de0  .word       0x00038DE0                   # add         $s1, $zero, $v1 # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e774u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_27e778:
    // 0x27e778: 0x0  nop
    ctx->pc = 0x27e778u;
    // NOP
label_27e77c:
    // 0x27e77c: 0x0  nop
    ctx->pc = 0x27e77cu;
    // NOP
label_27e780:
    // 0x27e780: 0x166f0  tge         $zero, $at, 411
    ctx->pc = 0x27e780u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_27e784:
    // 0x27e784: 0x24520  .word       0x00024520                   # add         $t0, $zero, $v0 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e784u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
label_27e788:
    // 0x27e788: 0x0  nop
    ctx->pc = 0x27e788u;
    // NOP
label_27e78c:
    // 0x27e78c: 0x0  nop
    ctx->pc = 0x27e78cu;
    // NOP
label_27e790:
    // 0x27e790: 0x16739  .word       0x00016739                   # INVALID     $zero, $at, 0x6739 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e790u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x27E790 raw=0x00016739"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27e794:
    // 0x27e794: 0x23020  add         $a2, $zero, $v0
    ctx->pc = 0x27e794u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 6, (int32_t)result);     } }
label_27e798:
    // 0x27e798: 0x0  nop
    ctx->pc = 0x27e798u;
    // NOP
label_27e79c:
    // 0x27e79c: 0x0  nop
    ctx->pc = 0x27e79cu;
    // NOP
label_27e7a0:
    // 0x27e7a0: 0x16780  sll         $t4, $at, 30
    ctx->pc = 0x27e7a0u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 1), 30));
label_27e7a4:
    // 0x27e7a4: 0x2e1e0  .word       0x0002E1E0                   # add         $gp, $zero, $v0 # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e7a4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 28, (int32_t)result);     } }
label_27e7a8:
    // 0x27e7a8: 0x0  nop
    ctx->pc = 0x27e7a8u;
    // NOP
label_27e7ac:
    // 0x27e7ac: 0x0  nop
    ctx->pc = 0x27e7acu;
    // NOP
label_27e7b0:
    // 0x27e7b0: 0x167dd  .word       0x000167DD                   # dmultu      $zero, $at # 000067C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e7b0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x27E7B0 raw=0x000167DD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27e7b4:
    // 0x27e7b4: 0x263a0  .word       0x000263A0                   # add         $t4, $zero, $v0 # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e7b4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_27e7b8:
    // 0x27e7b8: 0x0  nop
    ctx->pc = 0x27e7b8u;
    // NOP
label_27e7bc:
    // 0x27e7bc: 0x0  nop
    ctx->pc = 0x27e7bcu;
    // NOP
label_27e7c0:
    // 0x27e7c0: 0x1682a  slt         $t5, $zero, $at
    ctx->pc = 0x27e7c0u;
    SET_GPR_U64(ctx, 13, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
label_27e7c4:
    // 0x27e7c4: 0x31550  .word       0x00031550                   # mfhi        $v0 # 00030540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e7c4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_27e7c8:
    // 0x27e7c8: 0x0  nop
    ctx->pc = 0x27e7c8u;
    // NOP
label_27e7cc:
    // 0x27e7cc: 0x0  nop
    ctx->pc = 0x27e7ccu;
    // NOP
label_27e7d0:
    // 0x27e7d0: 0x1688d  break       1, 418
    ctx->pc = 0x27e7d0u;
    runtime->handleBreak(rdram, ctx);
label_27e7d4:
    // 0x27e7d4: 0x2f410  .word       0x0002F410                   # mfhi        $fp # 00020400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e7d4u;
    SET_GPR_U64(ctx, 30, ctx->hi);
label_27e7d8:
    // 0x27e7d8: 0x0  nop
    ctx->pc = 0x27e7d8u;
    // NOP
label_27e7dc:
    // 0x27e7dc: 0x0  nop
    ctx->pc = 0x27e7dcu;
    // NOP
label_27e7e0:
    // 0x27e7e0: 0x168ec  .word       0x000168EC                   # dadd        $t5, $zero, $at # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e7e0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 1); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 13, r); }
label_27e7e4:
    // 0x27e7e4: 0x31b70  tge         $zero, $v1, 109
    ctx->pc = 0x27e7e4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_27e7e8:
    // 0x27e7e8: 0x0  nop
    ctx->pc = 0x27e7e8u;
    // NOP
label_27e7ec:
    // 0x27e7ec: 0x0  nop
    ctx->pc = 0x27e7ecu;
    // NOP
label_27e7f0:
    // 0x27e7f0: 0x16950  .word       0x00016950                   # mfhi        $t5 # 00010140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e7f0u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_27e7f4:
    // 0x27e7f4: 0x2ac30  tge         $zero, $v0, 688
    ctx->pc = 0x27e7f4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
label_27e7f8:
    // 0x27e7f8: 0x0  nop
    ctx->pc = 0x27e7f8u;
    // NOP
label_27e7fc:
    // 0x27e7fc: 0x0  nop
    ctx->pc = 0x27e7fcu;
    // NOP
label_27e800:
    // 0x27e800: 0x169a6  .word       0x000169A6                   # xor         $t5, $zero, $at # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e800u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 1));
label_27e804:
    // 0x27e804: 0x34bd0  .word       0x00034BD0                   # mfhi        $t1 # 000303C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e804u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_27e808:
    // 0x27e808: 0x0  nop
    ctx->pc = 0x27e808u;
    // NOP
label_27e80c:
    // 0x27e80c: 0x0  nop
    ctx->pc = 0x27e80cu;
    // NOP
label_27e810:
    // 0x27e810: 0x16a10  .word       0x00016A10                   # mfhi        $t5 # 00010200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e810u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_27e814:
    // 0x27e814: 0x39bc0  sll         $s3, $v1, 15
    ctx->pc = 0x27e814u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 3), 15));
label_27e818:
    // 0x27e818: 0x0  nop
    ctx->pc = 0x27e818u;
    // NOP
label_27e81c:
    // 0x27e81c: 0x0  nop
    ctx->pc = 0x27e81cu;
    // NOP
label_27e820:
    // 0x27e820: 0x16a84  .word       0x00016A84                   # sllv        $t5, $at, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e820u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_27e824:
    // 0x27e824: 0x34230  tge         $zero, $v1, 264
    ctx->pc = 0x27e824u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_27e828:
    // 0x27e828: 0x0  nop
    ctx->pc = 0x27e828u;
    // NOP
label_27e82c:
    // 0x27e82c: 0x0  nop
    ctx->pc = 0x27e82cu;
    // NOP
label_27e830:
    // 0x27e830: 0x16aed  .word       0x00016AED                   # daddu       $t5, $zero, $at # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e830u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 1));
label_27e834:
    // 0x27e834: 0x37040  sll         $t6, $v1, 1
    ctx->pc = 0x27e834u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_27e838:
    // 0x27e838: 0x0  nop
    ctx->pc = 0x27e838u;
    // NOP
label_27e83c:
    // 0x27e83c: 0x0  nop
    ctx->pc = 0x27e83cu;
    // NOP
label_27e840:
    // 0x27e840: 0x16b5c  .word       0x00016B5C                   # dmult       $zero, $at # 00006B40 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e840u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x27E840 raw=0x00016B5C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27e844:
    // 0x27e844: 0x33750  .word       0x00033750                   # mfhi        $a2 # 00030740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e844u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_27e848:
    // 0x27e848: 0x0  nop
    ctx->pc = 0x27e848u;
    // NOP
label_27e84c:
    // 0x27e84c: 0x0  nop
    ctx->pc = 0x27e84cu;
    // NOP
label_27e850:
    // 0x27e850: 0x16bc3  sra         $t5, $at, 15
    ctx->pc = 0x27e850u;
    SET_GPR_S32(ctx, 13, SRA32(GPR_S32(ctx, 1), 15));
label_27e854:
    // 0x27e854: 0x33800  sll         $a3, $v1, 0
    ctx->pc = 0x27e854u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 0));
label_27e858:
    // 0x27e858: 0x0  nop
    ctx->pc = 0x27e858u;
    // NOP
label_27e85c:
    // 0x27e85c: 0x0  nop
    ctx->pc = 0x27e85cu;
    // NOP
label_27e860:
    // 0x27e860: 0x16c2a  .word       0x00016C2A                   # slt         $t5, $zero, $at # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e860u;
    SET_GPR_U64(ctx, 13, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
label_27e864:
    // 0x27e864: 0x2f5d0  .word       0x0002F5D0                   # mfhi        $fp # 000205C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e864u;
    SET_GPR_U64(ctx, 30, ctx->hi);
label_27e868:
    // 0x27e868: 0x0  nop
    ctx->pc = 0x27e868u;
    // NOP
label_27e86c:
    // 0x27e86c: 0x0  nop
    ctx->pc = 0x27e86cu;
    // NOP
label_27e870:
    // 0x27e870: 0x16c89  .word       0x00016C89                   # jalr        $t5, $zero # 00010480 <InstrIdType: CPU_SPECIAL>
label_27e874:
    if (ctx->pc == 0x27E874u) {
        ctx->pc = 0x27E874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E870u;
        // 0x27e874: 0x32cf0  tge         $zero, $v1, 179 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x27E878u;
        goto label_27e878;
    }
    ctx->pc = 0x27E870u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 13, 0x27E878u);
        ctx->pc = 0x27E874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E870u;
        // 0x27e874: 0x32cf0  tge         $zero, $v1, 179 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27E870u, 0x27E878u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x27E878u;
label_27e878:
    // 0x27e878: 0x0  nop
    ctx->pc = 0x27e878u;
    // NOP
label_27e87c:
    // 0x27e87c: 0x0  nop
    ctx->pc = 0x27e87cu;
    // NOP
label_27e880:
    // 0x27e880: 0x16cef  .word       0x00016CEF                   # dsubu       $t5, $zero, $at # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e880u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 0) - GPR_U64(ctx, 1));
label_27e884:
    // 0x27e884: 0x239d0  .word       0x000239D0                   # mfhi        $a3 # 000201C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e884u;
    SET_GPR_U64(ctx, 7, ctx->hi);
label_27e888:
    // 0x27e888: 0x0  nop
    ctx->pc = 0x27e888u;
    // NOP
label_27e88c:
    // 0x27e88c: 0x0  nop
    ctx->pc = 0x27e88cu;
    // NOP
label_27e890:
    // 0x27e890: 0x16d37  .word       0x00016D37                   # INVALID     $zero, $at, 0x6D37 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e890u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x27E890 raw=0x00016D37"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27e894:
    // 0x27e894: 0x267a0  .word       0x000267A0                   # add         $t4, $zero, $v0 # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e894u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_27e898:
    // 0x27e898: 0x0  nop
    ctx->pc = 0x27e898u;
    // NOP
label_27e89c:
    // 0x27e89c: 0x0  nop
    ctx->pc = 0x27e89cu;
    // NOP
label_27e8a0:
    // 0x27e8a0: 0x16d84  .word       0x00016D84                   # sllv        $t5, $at, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e8a0u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_27e8a4:
    // 0x27e8a4: 0x2b080  sll         $s6, $v0, 2
    ctx->pc = 0x27e8a4u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_27e8a8:
    // 0x27e8a8: 0x0  nop
    ctx->pc = 0x27e8a8u;
    // NOP
label_27e8ac:
    // 0x27e8ac: 0x0  nop
    ctx->pc = 0x27e8acu;
    // NOP
label_27e8b0:
    // 0x27e8b0: 0x16ddb  .word       0x00016DDB                   # divu        $t5, $zero, $at # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e8b0u;
    { uint32_t divisor = GPR_U32(ctx, 1); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_27e8b4:
    // 0x27e8b4: 0x2a450  .word       0x0002A450                   # mfhi        $s4 # 00020440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e8b4u;
    SET_GPR_U64(ctx, 20, ctx->hi);
label_27e8b8:
    // 0x27e8b8: 0x0  nop
    ctx->pc = 0x27e8b8u;
    // NOP
label_27e8bc:
    // 0x27e8bc: 0x0  nop
    ctx->pc = 0x27e8bcu;
    // NOP
label_27e8c0:
    // 0x27e8c0: 0x16e30  tge         $zero, $at, 440
    ctx->pc = 0x27e8c0u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_27e8c4:
    // 0x27e8c4: 0x28120  .word       0x00028120                   # add         $s0, $zero, $v0 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e8c4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_27e8c8:
    // 0x27e8c8: 0x0  nop
    ctx->pc = 0x27e8c8u;
    // NOP
label_27e8cc:
    // 0x27e8cc: 0x0  nop
    ctx->pc = 0x27e8ccu;
    // NOP
label_27e8d0:
    // 0x27e8d0: 0x16e81  .word       0x00016E81                   # INVALID     $zero, $at, 0x6E81 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e8d0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x27E8D0 raw=0x00016E81"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27e8d4:
    // 0x27e8d4: 0x36580  sll         $t4, $v1, 22
    ctx->pc = 0x27e8d4u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 3), 22));
label_27e8d8:
    // 0x27e8d8: 0x0  nop
    ctx->pc = 0x27e8d8u;
    // NOP
label_27e8dc:
    // 0x27e8dc: 0x0  nop
    ctx->pc = 0x27e8dcu;
    // NOP
label_27e8e0:
    // 0x27e8e0: 0x16eee  .word       0x00016EEE                   # dsub        $t5, $zero, $at # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e8e0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 1); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 13, r); }
label_27e8e4:
    // 0x27e8e4: 0x2dad0  .word       0x0002DAD0                   # mfhi        $k1 # 000202C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e8e4u;
    SET_GPR_U64(ctx, 27, ctx->hi);
label_27e8e8:
    // 0x27e8e8: 0x0  nop
    ctx->pc = 0x27e8e8u;
    // NOP
label_27e8ec:
    // 0x27e8ec: 0x0  nop
    ctx->pc = 0x27e8ecu;
    // NOP
label_27e8f0:
    // 0x27e8f0: 0x16f4a  .word       0x00016F4A                   # movz        $t5, $zero, $at # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e8f0u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 13, GPR_VEC(ctx, 0));
label_27e8f4:
    // 0x27e8f4: 0x275c0  sll         $t6, $v0, 23
    ctx->pc = 0x27e8f4u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 2), 23));
label_27e8f8:
    // 0x27e8f8: 0x0  nop
    ctx->pc = 0x27e8f8u;
    // NOP
label_27e8fc:
    // 0x27e8fc: 0x0  nop
    ctx->pc = 0x27e8fcu;
    // NOP
label_27e900:
    // 0x27e900: 0x16f99  .word       0x00016F99                   # multu       $zero, $at # 00006F80 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e900u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
label_27e904:
    // 0x27e904: 0x2cd30  tge         $zero, $v0, 820
    ctx->pc = 0x27e904u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
label_27e908:
    // 0x27e908: 0x0  nop
    ctx->pc = 0x27e908u;
    // NOP
label_27e90c:
    // 0x27e90c: 0x0  nop
    ctx->pc = 0x27e90cu;
    // NOP
label_27e910:
    // 0x27e910: 0x16ff3  tltu        $zero, $at, 447
    ctx->pc = 0x27e910u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_27e914:
    // 0x27e914: 0x2c980  sll         $t9, $v0, 6
    ctx->pc = 0x27e914u;
    SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_27e918:
    // 0x27e918: 0x0  nop
    ctx->pc = 0x27e918u;
    // NOP
label_27e91c:
    // 0x27e91c: 0x0  nop
    ctx->pc = 0x27e91cu;
    // NOP
label_27e920:
    // 0x27e920: 0x1704d  break       1, 449
    ctx->pc = 0x27e920u;
    runtime->handleBreak(rdram, ctx);
label_27e924:
    // 0x27e924: 0x2b8c0  sll         $s7, $v0, 3
    ctx->pc = 0x27e924u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_27e928:
    // 0x27e928: 0x0  nop
    ctx->pc = 0x27e928u;
    // NOP
label_27e92c:
    // 0x27e92c: 0x0  nop
    ctx->pc = 0x27e92cu;
    // NOP
label_27e930:
    // 0x27e930: 0x170a5  .word       0x000170A5                   # or          $t6, $zero, $at # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e930u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) | GPR_U64(ctx, 1));
label_27e934:
    // 0x27e934: 0x25340  sll         $t2, $v0, 13
    ctx->pc = 0x27e934u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 2), 13));
label_27e938:
    // 0x27e938: 0x0  nop
    ctx->pc = 0x27e938u;
    // NOP
label_27e93c:
    // 0x27e93c: 0x0  nop
    ctx->pc = 0x27e93cu;
    // NOP
label_27e940:
    // 0x27e940: 0x170f0  tge         $zero, $at, 451
    ctx->pc = 0x27e940u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_27e944:
    // 0x27e944: 0x28450  .word       0x00028450                   # mfhi        $s0 # 00020440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e944u;
    SET_GPR_U64(ctx, 16, ctx->hi);
label_27e948:
    // 0x27e948: 0x0  nop
    ctx->pc = 0x27e948u;
    // NOP
label_27e94c:
    // 0x27e94c: 0x0  nop
    ctx->pc = 0x27e94cu;
    // NOP
label_27e950:
    // 0x27e950: 0x17141  .word       0x00017141                   # INVALID     $zero, $at, 0x7141 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e950u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x27E950 raw=0x00017141"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27e954:
    // 0x27e954: 0x29d10  .word       0x00029D10                   # mfhi        $s3 # 00020500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e954u;
    SET_GPR_U64(ctx, 19, ctx->hi);
label_27e958:
    // 0x27e958: 0x0  nop
    ctx->pc = 0x27e958u;
    // NOP
label_27e95c:
    // 0x27e95c: 0x0  nop
    ctx->pc = 0x27e95cu;
    // NOP
label_27e960:
    // 0x27e960: 0x17195  .word       0x00017195                   # INVALID     $zero, $at, 0x7195 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e960u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x27E960 raw=0x00017195"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27e964:
    // 0x27e964: 0x3aa40  sll         $s5, $v1, 9
    ctx->pc = 0x27e964u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 3), 9));
label_27e968:
    // 0x27e968: 0x0  nop
    ctx->pc = 0x27e968u;
    // NOP
label_27e96c:
    // 0x27e96c: 0x0  nop
    ctx->pc = 0x27e96cu;
    // NOP
label_27e970:
    // 0x27e970: 0x1720b  .word       0x0001720B                   # movn        $t6, $zero, $at # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e970u;
    if (GPR_U64(ctx, 1) != 0) SET_GPR_VEC(ctx, 14, GPR_VEC(ctx, 0));
label_27e974:
    // 0x27e974: 0x28150  .word       0x00028150                   # mfhi        $s0 # 00020140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e974u;
    SET_GPR_U64(ctx, 16, ctx->hi);
label_27e978:
    // 0x27e978: 0x0  nop
    ctx->pc = 0x27e978u;
    // NOP
label_27e97c:
    // 0x27e97c: 0x0  nop
    ctx->pc = 0x27e97cu;
    // NOP
label_27e980:
    // 0x27e980: 0x1725c  .word       0x0001725C                   # dmult       $zero, $at # 00007240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e980u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x27E980 raw=0x0001725C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27e984:
    // 0x27e984: 0x2e370  tge         $zero, $v0, 909
    ctx->pc = 0x27e984u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
label_27e988:
    // 0x27e988: 0x0  nop
    ctx->pc = 0x27e988u;
    // NOP
label_27e98c:
    // 0x27e98c: 0x0  nop
    ctx->pc = 0x27e98cu;
    // NOP
label_27e990:
    // 0x27e990: 0x172b9  .word       0x000172B9                   # INVALID     $zero, $at, 0x72B9 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e990u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x27E990 raw=0x000172B9"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27e994:
    // 0x27e994: 0x1ed20  .word       0x0001ED20                   # add         $sp, $zero, $at # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27e994u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 29, (int32_t)result);     } }
label_27e998:
    // 0x27e998: 0x0  nop
    ctx->pc = 0x27e998u;
    // NOP
label_27e99c:
    // 0x27e99c: 0x0  nop
    ctx->pc = 0x27e99cu;
    // NOP
    ctx->pc = 0x27e9a0u;
    return;
}
