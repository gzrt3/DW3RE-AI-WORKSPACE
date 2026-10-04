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

// Function: FUN_0019b6a8
// Address: 0x19b6a8 - 0x29b6b0
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0019b6a8_part367(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x24e208u: goto label_24e208;
        case 0x24e20cu: goto label_24e20c;
        case 0x24e210u: goto label_24e210;
        case 0x24e214u: goto label_24e214;
        case 0x24e218u: goto label_24e218;
        case 0x24e21cu: goto label_24e21c;
        case 0x24e220u: goto label_24e220;
        case 0x24e224u: goto label_24e224;
        case 0x24e228u: goto label_24e228;
        case 0x24e22cu: goto label_24e22c;
        case 0x24e230u: goto label_24e230;
        case 0x24e234u: goto label_24e234;
        case 0x24e238u: goto label_24e238;
        case 0x24e23cu: goto label_24e23c;
        case 0x24e240u: goto label_24e240;
        case 0x24e244u: goto label_24e244;
        case 0x24e248u: goto label_24e248;
        case 0x24e24cu: goto label_24e24c;
        case 0x24e250u: goto label_24e250;
        case 0x24e254u: goto label_24e254;
        case 0x24e258u: goto label_24e258;
        case 0x24e25cu: goto label_24e25c;
        case 0x24e260u: goto label_24e260;
        case 0x24e264u: goto label_24e264;
        case 0x24e268u: goto label_24e268;
        case 0x24e26cu: goto label_24e26c;
        case 0x24e270u: goto label_24e270;
        case 0x24e274u: goto label_24e274;
        case 0x24e278u: goto label_24e278;
        case 0x24e27cu: goto label_24e27c;
        case 0x24e280u: goto label_24e280;
        case 0x24e284u: goto label_24e284;
        case 0x24e288u: goto label_24e288;
        case 0x24e28cu: goto label_24e28c;
        case 0x24e290u: goto label_24e290;
        case 0x24e294u: goto label_24e294;
        case 0x24e298u: goto label_24e298;
        case 0x24e29cu: goto label_24e29c;
        case 0x24e2a0u: goto label_24e2a0;
        case 0x24e2a4u: goto label_24e2a4;
        case 0x24e2a8u: goto label_24e2a8;
        case 0x24e2acu: goto label_24e2ac;
        case 0x24e2b0u: goto label_24e2b0;
        case 0x24e2b4u: goto label_24e2b4;
        case 0x24e2b8u: goto label_24e2b8;
        case 0x24e2bcu: goto label_24e2bc;
        case 0x24e2c0u: goto label_24e2c0;
        case 0x24e2c4u: goto label_24e2c4;
        case 0x24e2c8u: goto label_24e2c8;
        case 0x24e2ccu: goto label_24e2cc;
        case 0x24e2d0u: goto label_24e2d0;
        case 0x24e2d4u: goto label_24e2d4;
        case 0x24e2d8u: goto label_24e2d8;
        case 0x24e2dcu: goto label_24e2dc;
        case 0x24e2e0u: goto label_24e2e0;
        case 0x24e2e4u: goto label_24e2e4;
        case 0x24e2e8u: goto label_24e2e8;
        case 0x24e2ecu: goto label_24e2ec;
        case 0x24e2f0u: goto label_24e2f0;
        case 0x24e2f4u: goto label_24e2f4;
        case 0x24e2f8u: goto label_24e2f8;
        case 0x24e2fcu: goto label_24e2fc;
        case 0x24e300u: goto label_24e300;
        case 0x24e304u: goto label_24e304;
        case 0x24e308u: goto label_24e308;
        case 0x24e30cu: goto label_24e30c;
        case 0x24e310u: goto label_24e310;
        case 0x24e314u: goto label_24e314;
        case 0x24e318u: goto label_24e318;
        case 0x24e31cu: goto label_24e31c;
        case 0x24e320u: goto label_24e320;
        case 0x24e324u: goto label_24e324;
        case 0x24e328u: goto label_24e328;
        case 0x24e32cu: goto label_24e32c;
        case 0x24e330u: goto label_24e330;
        case 0x24e334u: goto label_24e334;
        case 0x24e338u: goto label_24e338;
        case 0x24e33cu: goto label_24e33c;
        case 0x24e340u: goto label_24e340;
        case 0x24e344u: goto label_24e344;
        case 0x24e348u: goto label_24e348;
        case 0x24e34cu: goto label_24e34c;
        case 0x24e350u: goto label_24e350;
        case 0x24e354u: goto label_24e354;
        case 0x24e358u: goto label_24e358;
        case 0x24e35cu: goto label_24e35c;
        case 0x24e360u: goto label_24e360;
        case 0x24e364u: goto label_24e364;
        case 0x24e368u: goto label_24e368;
        case 0x24e36cu: goto label_24e36c;
        case 0x24e370u: goto label_24e370;
        case 0x24e374u: goto label_24e374;
        case 0x24e378u: goto label_24e378;
        case 0x24e37cu: goto label_24e37c;
        case 0x24e380u: goto label_24e380;
        case 0x24e384u: goto label_24e384;
        case 0x24e388u: goto label_24e388;
        case 0x24e38cu: goto label_24e38c;
        case 0x24e390u: goto label_24e390;
        case 0x24e394u: goto label_24e394;
        case 0x24e398u: goto label_24e398;
        case 0x24e39cu: goto label_24e39c;
        case 0x24e3a0u: goto label_24e3a0;
        case 0x24e3a4u: goto label_24e3a4;
        case 0x24e3a8u: goto label_24e3a8;
        case 0x24e3acu: goto label_24e3ac;
        case 0x24e3b0u: goto label_24e3b0;
        case 0x24e3b4u: goto label_24e3b4;
        case 0x24e3b8u: goto label_24e3b8;
        case 0x24e3bcu: goto label_24e3bc;
        case 0x24e3c0u: goto label_24e3c0;
        case 0x24e3c4u: goto label_24e3c4;
        case 0x24e3c8u: goto label_24e3c8;
        case 0x24e3ccu: goto label_24e3cc;
        case 0x24e3d0u: goto label_24e3d0;
        case 0x24e3d4u: goto label_24e3d4;
        case 0x24e3d8u: goto label_24e3d8;
        case 0x24e3dcu: goto label_24e3dc;
        case 0x24e3e0u: goto label_24e3e0;
        case 0x24e3e4u: goto label_24e3e4;
        case 0x24e3e8u: goto label_24e3e8;
        case 0x24e3ecu: goto label_24e3ec;
        case 0x24e3f0u: goto label_24e3f0;
        case 0x24e3f4u: goto label_24e3f4;
        case 0x24e3f8u: goto label_24e3f8;
        case 0x24e3fcu: goto label_24e3fc;
        case 0x24e400u: goto label_24e400;
        case 0x24e404u: goto label_24e404;
        case 0x24e408u: goto label_24e408;
        case 0x24e40cu: goto label_24e40c;
        case 0x24e410u: goto label_24e410;
        case 0x24e414u: goto label_24e414;
        case 0x24e418u: goto label_24e418;
        case 0x24e41cu: goto label_24e41c;
        case 0x24e420u: goto label_24e420;
        case 0x24e424u: goto label_24e424;
        case 0x24e428u: goto label_24e428;
        case 0x24e42cu: goto label_24e42c;
        case 0x24e430u: goto label_24e430;
        case 0x24e434u: goto label_24e434;
        case 0x24e438u: goto label_24e438;
        case 0x24e43cu: goto label_24e43c;
        case 0x24e440u: goto label_24e440;
        case 0x24e444u: goto label_24e444;
        case 0x24e448u: goto label_24e448;
        case 0x24e44cu: goto label_24e44c;
        case 0x24e450u: goto label_24e450;
        case 0x24e454u: goto label_24e454;
        case 0x24e458u: goto label_24e458;
        case 0x24e45cu: goto label_24e45c;
        case 0x24e460u: goto label_24e460;
        case 0x24e464u: goto label_24e464;
        case 0x24e468u: goto label_24e468;
        case 0x24e46cu: goto label_24e46c;
        case 0x24e470u: goto label_24e470;
        case 0x24e474u: goto label_24e474;
        case 0x24e478u: goto label_24e478;
        case 0x24e47cu: goto label_24e47c;
        case 0x24e480u: goto label_24e480;
        case 0x24e484u: goto label_24e484;
        case 0x24e488u: goto label_24e488;
        case 0x24e48cu: goto label_24e48c;
        case 0x24e490u: goto label_24e490;
        case 0x24e494u: goto label_24e494;
        case 0x24e498u: goto label_24e498;
        case 0x24e49cu: goto label_24e49c;
        case 0x24e4a0u: goto label_24e4a0;
        case 0x24e4a4u: goto label_24e4a4;
        case 0x24e4a8u: goto label_24e4a8;
        case 0x24e4acu: goto label_24e4ac;
        case 0x24e4b0u: goto label_24e4b0;
        case 0x24e4b4u: goto label_24e4b4;
        case 0x24e4b8u: goto label_24e4b8;
        case 0x24e4bcu: goto label_24e4bc;
        case 0x24e4c0u: goto label_24e4c0;
        case 0x24e4c4u: goto label_24e4c4;
        case 0x24e4c8u: goto label_24e4c8;
        case 0x24e4ccu: goto label_24e4cc;
        case 0x24e4d0u: goto label_24e4d0;
        case 0x24e4d4u: goto label_24e4d4;
        case 0x24e4d8u: goto label_24e4d8;
        case 0x24e4dcu: goto label_24e4dc;
        case 0x24e4e0u: goto label_24e4e0;
        case 0x24e4e4u: goto label_24e4e4;
        case 0x24e4e8u: goto label_24e4e8;
        case 0x24e4ecu: goto label_24e4ec;
        case 0x24e4f0u: goto label_24e4f0;
        case 0x24e4f4u: goto label_24e4f4;
        case 0x24e4f8u: goto label_24e4f8;
        case 0x24e4fcu: goto label_24e4fc;
        case 0x24e500u: goto label_24e500;
        case 0x24e504u: goto label_24e504;
        case 0x24e508u: goto label_24e508;
        case 0x24e50cu: goto label_24e50c;
        case 0x24e510u: goto label_24e510;
        case 0x24e514u: goto label_24e514;
        case 0x24e518u: goto label_24e518;
        case 0x24e51cu: goto label_24e51c;
        case 0x24e520u: goto label_24e520;
        case 0x24e524u: goto label_24e524;
        case 0x24e528u: goto label_24e528;
        case 0x24e52cu: goto label_24e52c;
        case 0x24e530u: goto label_24e530;
        case 0x24e534u: goto label_24e534;
        case 0x24e538u: goto label_24e538;
        case 0x24e53cu: goto label_24e53c;
        case 0x24e540u: goto label_24e540;
        case 0x24e544u: goto label_24e544;
        case 0x24e548u: goto label_24e548;
        case 0x24e54cu: goto label_24e54c;
        case 0x24e550u: goto label_24e550;
        case 0x24e554u: goto label_24e554;
        case 0x24e558u: goto label_24e558;
        case 0x24e55cu: goto label_24e55c;
        case 0x24e560u: goto label_24e560;
        case 0x24e564u: goto label_24e564;
        case 0x24e568u: goto label_24e568;
        case 0x24e56cu: goto label_24e56c;
        case 0x24e570u: goto label_24e570;
        case 0x24e574u: goto label_24e574;
        case 0x24e578u: goto label_24e578;
        case 0x24e57cu: goto label_24e57c;
        case 0x24e580u: goto label_24e580;
        case 0x24e584u: goto label_24e584;
        case 0x24e588u: goto label_24e588;
        case 0x24e58cu: goto label_24e58c;
        case 0x24e590u: goto label_24e590;
        case 0x24e594u: goto label_24e594;
        case 0x24e598u: goto label_24e598;
        case 0x24e59cu: goto label_24e59c;
        case 0x24e5a0u: goto label_24e5a0;
        case 0x24e5a4u: goto label_24e5a4;
        case 0x24e5a8u: goto label_24e5a8;
        case 0x24e5acu: goto label_24e5ac;
        case 0x24e5b0u: goto label_24e5b0;
        case 0x24e5b4u: goto label_24e5b4;
        case 0x24e5b8u: goto label_24e5b8;
        case 0x24e5bcu: goto label_24e5bc;
        case 0x24e5c0u: goto label_24e5c0;
        case 0x24e5c4u: goto label_24e5c4;
        case 0x24e5c8u: goto label_24e5c8;
        case 0x24e5ccu: goto label_24e5cc;
        case 0x24e5d0u: goto label_24e5d0;
        case 0x24e5d4u: goto label_24e5d4;
        case 0x24e5d8u: goto label_24e5d8;
        case 0x24e5dcu: goto label_24e5dc;
        case 0x24e5e0u: goto label_24e5e0;
        case 0x24e5e4u: goto label_24e5e4;
        case 0x24e5e8u: goto label_24e5e8;
        case 0x24e5ecu: goto label_24e5ec;
        case 0x24e5f0u: goto label_24e5f0;
        case 0x24e5f4u: goto label_24e5f4;
        case 0x24e5f8u: goto label_24e5f8;
        case 0x24e5fcu: goto label_24e5fc;
        case 0x24e600u: goto label_24e600;
        case 0x24e604u: goto label_24e604;
        case 0x24e608u: goto label_24e608;
        case 0x24e60cu: goto label_24e60c;
        case 0x24e610u: goto label_24e610;
        case 0x24e614u: goto label_24e614;
        case 0x24e618u: goto label_24e618;
        case 0x24e61cu: goto label_24e61c;
        case 0x24e620u: goto label_24e620;
        case 0x24e624u: goto label_24e624;
        case 0x24e628u: goto label_24e628;
        case 0x24e62cu: goto label_24e62c;
        case 0x24e630u: goto label_24e630;
        case 0x24e634u: goto label_24e634;
        case 0x24e638u: goto label_24e638;
        case 0x24e63cu: goto label_24e63c;
        case 0x24e640u: goto label_24e640;
        case 0x24e644u: goto label_24e644;
        case 0x24e648u: goto label_24e648;
        case 0x24e64cu: goto label_24e64c;
        case 0x24e650u: goto label_24e650;
        case 0x24e654u: goto label_24e654;
        case 0x24e658u: goto label_24e658;
        case 0x24e65cu: goto label_24e65c;
        case 0x24e660u: goto label_24e660;
        case 0x24e664u: goto label_24e664;
        case 0x24e668u: goto label_24e668;
        case 0x24e66cu: goto label_24e66c;
        case 0x24e670u: goto label_24e670;
        case 0x24e674u: goto label_24e674;
        case 0x24e678u: goto label_24e678;
        case 0x24e67cu: goto label_24e67c;
        case 0x24e680u: goto label_24e680;
        case 0x24e684u: goto label_24e684;
        case 0x24e688u: goto label_24e688;
        case 0x24e68cu: goto label_24e68c;
        case 0x24e690u: goto label_24e690;
        case 0x24e694u: goto label_24e694;
        case 0x24e698u: goto label_24e698;
        case 0x24e69cu: goto label_24e69c;
        case 0x24e6a0u: goto label_24e6a0;
        case 0x24e6a4u: goto label_24e6a4;
        case 0x24e6a8u: goto label_24e6a8;
        case 0x24e6acu: goto label_24e6ac;
        case 0x24e6b0u: goto label_24e6b0;
        case 0x24e6b4u: goto label_24e6b4;
        case 0x24e6b8u: goto label_24e6b8;
        case 0x24e6bcu: goto label_24e6bc;
        case 0x24e6c0u: goto label_24e6c0;
        case 0x24e6c4u: goto label_24e6c4;
        case 0x24e6c8u: goto label_24e6c8;
        case 0x24e6ccu: goto label_24e6cc;
        case 0x24e6d0u: goto label_24e6d0;
        case 0x24e6d4u: goto label_24e6d4;
        case 0x24e6d8u: goto label_24e6d8;
        case 0x24e6dcu: goto label_24e6dc;
        case 0x24e6e0u: goto label_24e6e0;
        case 0x24e6e4u: goto label_24e6e4;
        case 0x24e6e8u: goto label_24e6e8;
        case 0x24e6ecu: goto label_24e6ec;
        case 0x24e6f0u: goto label_24e6f0;
        case 0x24e6f4u: goto label_24e6f4;
        case 0x24e6f8u: goto label_24e6f8;
        case 0x24e6fcu: goto label_24e6fc;
        case 0x24e700u: goto label_24e700;
        case 0x24e704u: goto label_24e704;
        case 0x24e708u: goto label_24e708;
        case 0x24e70cu: goto label_24e70c;
        case 0x24e710u: goto label_24e710;
        case 0x24e714u: goto label_24e714;
        case 0x24e718u: goto label_24e718;
        case 0x24e71cu: goto label_24e71c;
        case 0x24e720u: goto label_24e720;
        case 0x24e724u: goto label_24e724;
        case 0x24e728u: goto label_24e728;
        case 0x24e72cu: goto label_24e72c;
        case 0x24e730u: goto label_24e730;
        case 0x24e734u: goto label_24e734;
        case 0x24e738u: goto label_24e738;
        case 0x24e73cu: goto label_24e73c;
        case 0x24e740u: goto label_24e740;
        case 0x24e744u: goto label_24e744;
        case 0x24e748u: goto label_24e748;
        case 0x24e74cu: goto label_24e74c;
        case 0x24e750u: goto label_24e750;
        case 0x24e754u: goto label_24e754;
        case 0x24e758u: goto label_24e758;
        case 0x24e75cu: goto label_24e75c;
        case 0x24e760u: goto label_24e760;
        case 0x24e764u: goto label_24e764;
        case 0x24e768u: goto label_24e768;
        case 0x24e76cu: goto label_24e76c;
        case 0x24e770u: goto label_24e770;
        case 0x24e774u: goto label_24e774;
        case 0x24e778u: goto label_24e778;
        case 0x24e77cu: goto label_24e77c;
        case 0x24e780u: goto label_24e780;
        case 0x24e784u: goto label_24e784;
        case 0x24e788u: goto label_24e788;
        case 0x24e78cu: goto label_24e78c;
        case 0x24e790u: goto label_24e790;
        case 0x24e794u: goto label_24e794;
        case 0x24e798u: goto label_24e798;
        case 0x24e79cu: goto label_24e79c;
        case 0x24e7a0u: goto label_24e7a0;
        case 0x24e7a4u: goto label_24e7a4;
        case 0x24e7a8u: goto label_24e7a8;
        case 0x24e7acu: goto label_24e7ac;
        case 0x24e7b0u: goto label_24e7b0;
        case 0x24e7b4u: goto label_24e7b4;
        case 0x24e7b8u: goto label_24e7b8;
        case 0x24e7bcu: goto label_24e7bc;
        case 0x24e7c0u: goto label_24e7c0;
        case 0x24e7c4u: goto label_24e7c4;
        case 0x24e7c8u: goto label_24e7c8;
        case 0x24e7ccu: goto label_24e7cc;
        case 0x24e7d0u: goto label_24e7d0;
        case 0x24e7d4u: goto label_24e7d4;
        case 0x24e7d8u: goto label_24e7d8;
        case 0x24e7dcu: goto label_24e7dc;
        case 0x24e7e0u: goto label_24e7e0;
        case 0x24e7e4u: goto label_24e7e4;
        case 0x24e7e8u: goto label_24e7e8;
        case 0x24e7ecu: goto label_24e7ec;
        case 0x24e7f0u: goto label_24e7f0;
        case 0x24e7f4u: goto label_24e7f4;
        case 0x24e7f8u: goto label_24e7f8;
        case 0x24e7fcu: goto label_24e7fc;
        case 0x24e800u: goto label_24e800;
        case 0x24e804u: goto label_24e804;
        case 0x24e808u: goto label_24e808;
        case 0x24e80cu: goto label_24e80c;
        case 0x24e810u: goto label_24e810;
        case 0x24e814u: goto label_24e814;
        case 0x24e818u: goto label_24e818;
        case 0x24e81cu: goto label_24e81c;
        case 0x24e820u: goto label_24e820;
        case 0x24e824u: goto label_24e824;
        case 0x24e828u: goto label_24e828;
        case 0x24e82cu: goto label_24e82c;
        case 0x24e830u: goto label_24e830;
        case 0x24e834u: goto label_24e834;
        case 0x24e838u: goto label_24e838;
        case 0x24e83cu: goto label_24e83c;
        case 0x24e840u: goto label_24e840;
        case 0x24e844u: goto label_24e844;
        case 0x24e848u: goto label_24e848;
        case 0x24e84cu: goto label_24e84c;
        case 0x24e850u: goto label_24e850;
        case 0x24e854u: goto label_24e854;
        case 0x24e858u: goto label_24e858;
        case 0x24e85cu: goto label_24e85c;
        case 0x24e860u: goto label_24e860;
        case 0x24e864u: goto label_24e864;
        case 0x24e868u: goto label_24e868;
        case 0x24e86cu: goto label_24e86c;
        case 0x24e870u: goto label_24e870;
        case 0x24e874u: goto label_24e874;
        case 0x24e878u: goto label_24e878;
        case 0x24e87cu: goto label_24e87c;
        case 0x24e880u: goto label_24e880;
        case 0x24e884u: goto label_24e884;
        case 0x24e888u: goto label_24e888;
        case 0x24e88cu: goto label_24e88c;
        case 0x24e890u: goto label_24e890;
        case 0x24e894u: goto label_24e894;
        case 0x24e898u: goto label_24e898;
        case 0x24e89cu: goto label_24e89c;
        case 0x24e8a0u: goto label_24e8a0;
        case 0x24e8a4u: goto label_24e8a4;
        case 0x24e8a8u: goto label_24e8a8;
        case 0x24e8acu: goto label_24e8ac;
        case 0x24e8b0u: goto label_24e8b0;
        case 0x24e8b4u: goto label_24e8b4;
        case 0x24e8b8u: goto label_24e8b8;
        case 0x24e8bcu: goto label_24e8bc;
        case 0x24e8c0u: goto label_24e8c0;
        case 0x24e8c4u: goto label_24e8c4;
        case 0x24e8c8u: goto label_24e8c8;
        case 0x24e8ccu: goto label_24e8cc;
        case 0x24e8d0u: goto label_24e8d0;
        case 0x24e8d4u: goto label_24e8d4;
        case 0x24e8d8u: goto label_24e8d8;
        case 0x24e8dcu: goto label_24e8dc;
        case 0x24e8e0u: goto label_24e8e0;
        case 0x24e8e4u: goto label_24e8e4;
        case 0x24e8e8u: goto label_24e8e8;
        case 0x24e8ecu: goto label_24e8ec;
        case 0x24e8f0u: goto label_24e8f0;
        case 0x24e8f4u: goto label_24e8f4;
        case 0x24e8f8u: goto label_24e8f8;
        case 0x24e8fcu: goto label_24e8fc;
        case 0x24e900u: goto label_24e900;
        case 0x24e904u: goto label_24e904;
        case 0x24e908u: goto label_24e908;
        case 0x24e90cu: goto label_24e90c;
        case 0x24e910u: goto label_24e910;
        case 0x24e914u: goto label_24e914;
        case 0x24e918u: goto label_24e918;
        case 0x24e91cu: goto label_24e91c;
        case 0x24e920u: goto label_24e920;
        case 0x24e924u: goto label_24e924;
        case 0x24e928u: goto label_24e928;
        case 0x24e92cu: goto label_24e92c;
        case 0x24e930u: goto label_24e930;
        case 0x24e934u: goto label_24e934;
        case 0x24e938u: goto label_24e938;
        case 0x24e93cu: goto label_24e93c;
        case 0x24e940u: goto label_24e940;
        case 0x24e944u: goto label_24e944;
        case 0x24e948u: goto label_24e948;
        case 0x24e94cu: goto label_24e94c;
        case 0x24e950u: goto label_24e950;
        case 0x24e954u: goto label_24e954;
        case 0x24e958u: goto label_24e958;
        case 0x24e95cu: goto label_24e95c;
        case 0x24e960u: goto label_24e960;
        case 0x24e964u: goto label_24e964;
        case 0x24e968u: goto label_24e968;
        case 0x24e96cu: goto label_24e96c;
        case 0x24e970u: goto label_24e970;
        case 0x24e974u: goto label_24e974;
        case 0x24e978u: goto label_24e978;
        case 0x24e97cu: goto label_24e97c;
        case 0x24e980u: goto label_24e980;
        case 0x24e984u: goto label_24e984;
        case 0x24e988u: goto label_24e988;
        case 0x24e98cu: goto label_24e98c;
        case 0x24e990u: goto label_24e990;
        case 0x24e994u: goto label_24e994;
        case 0x24e998u: goto label_24e998;
        case 0x24e99cu: goto label_24e99c;
        case 0x24e9a0u: goto label_24e9a0;
        case 0x24e9a4u: goto label_24e9a4;
        case 0x24e9a8u: goto label_24e9a8;
        case 0x24e9acu: goto label_24e9ac;
        case 0x24e9b0u: goto label_24e9b0;
        case 0x24e9b4u: goto label_24e9b4;
        case 0x24e9b8u: goto label_24e9b8;
        case 0x24e9bcu: goto label_24e9bc;
        case 0x24e9c0u: goto label_24e9c0;
        case 0x24e9c4u: goto label_24e9c4;
        case 0x24e9c8u: goto label_24e9c8;
        case 0x24e9ccu: goto label_24e9cc;
        case 0x24e9d0u: goto label_24e9d0;
        case 0x24e9d4u: goto label_24e9d4;
        default: return;
    }

label_24e208:
    // 0x24e208: 0x42a60000  .word       0x42A60000                   # INVALID     $s5, $a2, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24e208u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x15 at 0x24E208 raw=0x42A60000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24e20c:
    // 0x24e20c: 0x43250000  .word       0x43250000                   # INVALID     $t9, $a1, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24e20cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x19 at 0x24E20C raw=0x43250000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24e210:
    // 0x24e210: 0xc0a00000  ll          $zero, 0x0($a1)
    ctx->pc = 0x24e210u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24e214:
    // 0x24e214: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24e214u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24e218:
    // 0x24e218: 0xc1a80000  ll          $t0, 0x0($t5)
    ctx->pc = 0x24e218u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24e21c:
    // 0x24e21c: 0x420c0000  .word       0x420C0000                   # INVALID     $s0, $t4, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24e21cu;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24E21C raw=0x420C0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24e220:
    // 0x24e220: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24e220u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24E220 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24e224:
    // 0x24e224: 0x42480000  .word       0x42480000                   # INVALID     $s2, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24e224u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x12 at 0x24E224 raw=0x42480000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24e228:
    // 0x24e228: 0x42e9c7ae  .word       0x42E9C7AE                   # INVALID     $s7, $t1, -0x3852 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24e228u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x17 at 0x24E228 raw=0x42E9C7AE"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24e22c:
    // 0x24e22c: 0x5  .word       0x00000005                   # INVALID     $zero, $zero, 0x5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24e22cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x24E22C raw=0x00000005"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24e230:
    // 0x24e230: 0xa0000  sll         $zero, $t2, 0
    ctx->pc = 0x24e230u;
    
label_24e234:
    // 0x24e234: 0xf900b0  tge         $a3, $t9, 2
    ctx->pc = 0x24e234u;
    if (GPR_S64(ctx, 7) >= GPR_S64(ctx, 25)) { runtime->handleTrap(rdram, ctx); }
label_24e238:
    // 0x24e238: 0x6f006f  .word       0x006F006F                   # dsubu       $zero, $v1, $t7 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24e238u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 3) - GPR_U64(ctx, 15));
label_24e23c:
    // 0x24e23c: 0x1210121  .word       0x01210121                   # addu        $zero, $t1, $at # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24e23cu;
    SET_GPR_S32(ctx, 0, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 1)));
label_24e240:
    // 0x24e240: 0xc2d0c2d  jal         func_B430B4
label_24e244:
    if (ctx->pc == 0x24E244u) {
        ctx->pc = 0x24E244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E240u;
        // 0x24e244: 0xc2d0c2d  jal         func_B430B4 (Delay Slot)
        // JAL 0xB430B4 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x24E248u;
        goto label_24e248;
    }
    ctx->pc = 0x24E240u;
    SET_GPR_U32(ctx, 31, 0x24E248u);
    ctx->pc = 0x24E244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24E240u;
    // 0x24e244: 0xc2d0c2d  jal         func_B430B4 (Delay Slot)
    // JAL 0xB430B4 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0xB430B4u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xB430B4u, 0x24E240u, 0x24E248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E248u;
label_24e248:
    // 0x24e248: 0x530c2d  .word       0x00530C2D                   # daddu       $at, $v0, $s3 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24e248u;
    SET_GPR_U64(ctx, 1, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 19));
label_24e24c:
    // 0x24e24c: 0x10000  sll         $zero, $at, 0
    ctx->pc = 0x24e24cu;
    
label_24e250:
    // 0x24e250: 0x0  nop
    ctx->pc = 0x24e250u;
    // NOP
label_24e254:
    // 0x24e254: 0x0  nop
    ctx->pc = 0x24e254u;
    // NOP
label_24e258:
    // 0x24e258: 0x0  nop
    ctx->pc = 0x24e258u;
    // NOP
label_24e25c:
    // 0x24e25c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24e25cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_24e260:
    // 0x24e260: 0x0  nop
    ctx->pc = 0x24e260u;
    // NOP
label_24e264:
    // 0x24e264: 0x0  nop
    ctx->pc = 0x24e264u;
    // NOP
label_24e268:
    // 0x24e268: 0x40000000  mfc0        $zero, Index
    ctx->pc = 0x24e268u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_24e26c:
    // 0x24e26c: 0x41400000  .word       0x41400000                   # INVALID     $t2, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24e26cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xA at 0x24E26C raw=0x41400000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24e270:
    // 0x24e270: 0x0  nop
    ctx->pc = 0x24e270u;
    // NOP
label_24e274:
    // 0x24e274: 0x0  nop
    ctx->pc = 0x24e274u;
    // NOP
label_24e278:
    // 0x24e278: 0x0  nop
    ctx->pc = 0x24e278u;
    // NOP
label_24e27c:
    // 0x24e27c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24e27cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_24e280:
    // 0x24e280: 0x0  nop
    ctx->pc = 0x24e280u;
    // NOP
label_24e284:
    // 0x24e284: 0x0  nop
    ctx->pc = 0x24e284u;
    // NOP
label_24e288:
    // 0x24e288: 0x40000000  mfc0        $zero, Index
    ctx->pc = 0x24e288u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_24e28c:
    // 0x24e28c: 0x41400000  .word       0x41400000                   # INVALID     $t2, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24e28cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xA at 0x24E28C raw=0x41400000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24e290:
    // 0x24e290: 0x0  nop
    ctx->pc = 0x24e290u;
    // NOP
label_24e294:
    // 0x24e294: 0x0  nop
    ctx->pc = 0x24e294u;
    // NOP
label_24e298:
    // 0x24e298: 0x0  nop
    ctx->pc = 0x24e298u;
    // NOP
label_24e29c:
    // 0x24e29c: 0x0  nop
    ctx->pc = 0x24e29cu;
    // NOP
label_24e2a0:
    // 0x24e2a0: 0x0  nop
    ctx->pc = 0x24e2a0u;
    // NOP
label_24e2a4:
    // 0x24e2a4: 0x0  nop
    ctx->pc = 0x24e2a4u;
    // NOP
label_24e2a8:
    // 0x24e2a8: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24e2a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24e2ac:
    // 0x24e2ac: 0xc1800000  ll          $zero, 0x0($t4)
    ctx->pc = 0x24e2acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24e2b0:
    // 0x24e2b0: 0xc1a80000  ll          $t0, 0x0($t5)
    ctx->pc = 0x24e2b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24e2b4:
    // 0x24e2b4: 0x42800000  .word       0x42800000                   # INVALID     $s4, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24e2b4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24E2B4 raw=0x42800000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24e2b8:
    // 0x24e2b8: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24e2b8u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24E2B8 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24e2bc:
    // 0x24e2bc: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24e2bcu;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24E2BC raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24e2c0:
    // 0x24e2c0: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24e2c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24e2c4:
    // 0x24e2c4: 0xc1800000  ll          $zero, 0x0($t4)
    ctx->pc = 0x24e2c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24e2c8:
    // 0x24e2c8: 0xc1a80000  ll          $t0, 0x0($t5)
    ctx->pc = 0x24e2c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24e2cc:
    // 0x24e2cc: 0x42800000  .word       0x42800000                   # INVALID     $s4, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24e2ccu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24E2CC raw=0x42800000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24e2d0:
    // 0x24e2d0: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24e2d0u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24E2D0 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24e2d4:
    // 0x24e2d4: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24e2d4u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24E2D4 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24e2d8:
    // 0x24e2d8: 0xc0800000  ll          $zero, 0x0($a0)
    ctx->pc = 0x24e2d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24e2dc:
    // 0x24e2dc: 0xc1b80000  ll          $t8, 0x0($t5)
    ctx->pc = 0x24e2dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 24, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24e2e0:
    // 0x24e2e0: 0xc1100000  ll          $s0, 0x0($t0)
    ctx->pc = 0x24e2e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24e2e4:
    // 0x24e2e4: 0x42840000  .word       0x42840000                   # INVALID     $s4, $a0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24e2e4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24E2E4 raw=0x42840000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24e2e8:
    // 0x24e2e8: 0x42100000  .word       0x42100000                   # INVALID     $s0, $s0, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24e2e8u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24E2E8 raw=0x42100000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24e2ec:
    // 0x24e2ec: 0x41600000  .word       0x41600000                   # INVALID     $t3, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24e2ecu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xB at 0x24E2EC raw=0x41600000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24e2f0:
    // 0x24e2f0: 0xc0800000  ll          $zero, 0x0($a0)
    ctx->pc = 0x24e2f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24e2f4:
    // 0x24e2f4: 0xc1900000  ll          $s0, 0x0($t4)
    ctx->pc = 0x24e2f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24e2f8:
    // 0x24e2f8: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24e2f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24e2fc:
    // 0x24e2fc: 0x42800000  .word       0x42800000                   # INVALID     $s4, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24e2fcu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24E2FC raw=0x42800000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24e300:
    // 0x24e300: 0x42340000  .word       0x42340000                   # INVALID     $s1, $s4, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24e300u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x11 at 0x24E300 raw=0x42340000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24e304:
    // 0x24e304: 0x41d80000  .word       0x41D80000                   # INVALID     $t6, $t8, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24e304u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xE at 0x24E304 raw=0x41D80000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24e308:
    // 0x24e308: 0xc1e80000  ll          $t0, 0x0($t7)
    ctx->pc = 0x24e308u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24e30c:
    // 0x24e30c: 0xc1500000  ll          $s0, 0x0($t2)
    ctx->pc = 0x24e30cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24e310:
    // 0x24e310: 0xc2e00000  ll          $zero, 0x0($s7)
    ctx->pc = 0x24e310u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 23), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24e314:
    // 0x24e314: 0x42cc0000  .word       0x42CC0000                   # INVALID     $s6, $t4, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24e314u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x16 at 0x24E314 raw=0x42CC0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24e318:
    // 0x24e318: 0x42a60000  .word       0x42A60000                   # INVALID     $s5, $a2, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24e318u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x15 at 0x24E318 raw=0x42A60000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24e31c:
    // 0x24e31c: 0x43250000  .word       0x43250000                   # INVALID     $t9, $a1, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24e31cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x19 at 0x24E31C raw=0x43250000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24e320:
    // 0x24e320: 0xc0a00000  ll          $zero, 0x0($a1)
    ctx->pc = 0x24e320u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24e324:
    // 0x24e324: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24e324u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24e328:
    // 0x24e328: 0xc1a80000  ll          $t0, 0x0($t5)
    ctx->pc = 0x24e328u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24e32c:
    // 0x24e32c: 0x420c0000  .word       0x420C0000                   # INVALID     $s0, $t4, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24e32cu;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24E32C raw=0x420C0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24e330:
    // 0x24e330: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24e330u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24E330 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24e334:
    // 0x24e334: 0x42480000  .word       0x42480000                   # INVALID     $s2, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24e334u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x12 at 0x24E334 raw=0x42480000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24e338:
    // 0x24e338: 0x42ea0000  .word       0x42EA0000                   # INVALID     $s7, $t2, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24e338u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x17 at 0x24E338 raw=0x42EA0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24e33c:
    // 0x24e33c: 0x30005  .word       0x00030005                   # INVALID     $zero, $v1, 0x5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24e33cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x24E33C raw=0x00030005"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24e340:
    // 0x24e340: 0xa0000  sll         $zero, $t2, 0
    ctx->pc = 0x24e340u;
    
label_24e344:
    // 0x24e344: 0xfa00b1  tgeu        $a3, $k0, 2
    ctx->pc = 0x24e344u;
    if (GPR_U64(ctx, 7) >= GPR_U64(ctx, 26)) { runtime->handleTrap(rdram, ctx); }
label_24e348:
    // 0x24e348: 0x700070  tge         $v1, $s0, 1
    ctx->pc = 0x24e348u;
    if (GPR_S64(ctx, 3) >= GPR_S64(ctx, 16)) { runtime->handleTrap(rdram, ctx); }
label_24e34c:
    // 0x24e34c: 0x1220122  .word       0x01220122                   # sub         $zero, $t1, $v0 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24e34cu;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 9), GPR_U32(ctx, 2), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 0, (int32_t)tmp); }
label_24e350:
    // 0x24e350: 0xc2d0c2d  jal         func_B430B4
label_24e354:
    if (ctx->pc == 0x24E354u) {
        ctx->pc = 0x24E354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E350u;
        // 0x24e354: 0xc2d0c2d  jal         func_B430B4 (Delay Slot)
        // JAL 0xB430B4 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x24E358u;
        goto label_24e358;
    }
    ctx->pc = 0x24E350u;
    SET_GPR_U32(ctx, 31, 0x24E358u);
    ctx->pc = 0x24E354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24E350u;
    // 0x24e354: 0xc2d0c2d  jal         func_B430B4 (Delay Slot)
    // JAL 0xB430B4 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0xB430B4u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xB430B4u, 0x24E350u, 0x24E358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E358u;
label_24e358:
    // 0x24e358: 0x540c2d  .word       0x00540C2D                   # daddu       $at, $v0, $s4 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24e358u;
    SET_GPR_U64(ctx, 1, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 20));
label_24e35c:
    // 0x24e35c: 0x10000  sll         $zero, $at, 0
    ctx->pc = 0x24e35cu;
    
label_24e360:
    // 0x24e360: 0x0  nop
    ctx->pc = 0x24e360u;
    // NOP
label_24e364:
    // 0x24e364: 0x0  nop
    ctx->pc = 0x24e364u;
    // NOP
label_24e368:
    // 0x24e368: 0x0  nop
    ctx->pc = 0x24e368u;
    // NOP
label_24e36c:
    // 0x24e36c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24e36cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_24e370:
    // 0x24e370: 0x0  nop
    ctx->pc = 0x24e370u;
    // NOP
label_24e374:
    // 0x24e374: 0x0  nop
    ctx->pc = 0x24e374u;
    // NOP
label_24e378:
    // 0x24e378: 0x40000000  mfc0        $zero, Index
    ctx->pc = 0x24e378u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_24e37c:
    // 0x24e37c: 0x41400000  .word       0x41400000                   # INVALID     $t2, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24e37cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xA at 0x24E37C raw=0x41400000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24e380:
    // 0x24e380: 0x0  nop
    ctx->pc = 0x24e380u;
    // NOP
label_24e384:
    // 0x24e384: 0x0  nop
    ctx->pc = 0x24e384u;
    // NOP
label_24e388:
    // 0x24e388: 0x0  nop
    ctx->pc = 0x24e388u;
    // NOP
label_24e38c:
    // 0x24e38c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24e38cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_24e390:
    // 0x24e390: 0x0  nop
    ctx->pc = 0x24e390u;
    // NOP
label_24e394:
    // 0x24e394: 0x0  nop
    ctx->pc = 0x24e394u;
    // NOP
label_24e398:
    // 0x24e398: 0x40000000  mfc0        $zero, Index
    ctx->pc = 0x24e398u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_24e39c:
    // 0x24e39c: 0x41400000  .word       0x41400000                   # INVALID     $t2, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24e39cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xA at 0x24E39C raw=0x41400000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24e3a0:
    // 0x24e3a0: 0x0  nop
    ctx->pc = 0x24e3a0u;
    // NOP
label_24e3a4:
    // 0x24e3a4: 0x0  nop
    ctx->pc = 0x24e3a4u;
    // NOP
label_24e3a8:
    // 0x24e3a8: 0x0  nop
    ctx->pc = 0x24e3a8u;
    // NOP
label_24e3ac:
    // 0x24e3ac: 0x0  nop
    ctx->pc = 0x24e3acu;
    // NOP
label_24e3b0:
    // 0x24e3b0: 0x0  nop
    ctx->pc = 0x24e3b0u;
    // NOP
label_24e3b4:
    // 0x24e3b4: 0x0  nop
    ctx->pc = 0x24e3b4u;
    // NOP
label_24e3b8:
    // 0x24e3b8: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24e3b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24e3bc:
    // 0x24e3bc: 0xc1800000  ll          $zero, 0x0($t4)
    ctx->pc = 0x24e3bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24e3c0:
    // 0x24e3c0: 0xc1a80000  ll          $t0, 0x0($t5)
    ctx->pc = 0x24e3c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24e3c4:
    // 0x24e3c4: 0x42800000  .word       0x42800000                   # INVALID     $s4, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24e3c4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24E3C4 raw=0x42800000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24e3c8:
    // 0x24e3c8: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24e3c8u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24E3C8 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24e3cc:
    // 0x24e3cc: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24e3ccu;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24E3CC raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24e3d0:
    // 0x24e3d0: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24e3d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24e3d4:
    // 0x24e3d4: 0xc1800000  ll          $zero, 0x0($t4)
    ctx->pc = 0x24e3d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24e3d8:
    // 0x24e3d8: 0xc1a80000  ll          $t0, 0x0($t5)
    ctx->pc = 0x24e3d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24e3dc:
    // 0x24e3dc: 0x42800000  .word       0x42800000                   # INVALID     $s4, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24e3dcu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24E3DC raw=0x42800000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24e3e0:
    // 0x24e3e0: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24e3e0u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24E3E0 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24e3e4:
    // 0x24e3e4: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24e3e4u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24E3E4 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24e3e8:
    // 0x24e3e8: 0xc0800000  ll          $zero, 0x0($a0)
    ctx->pc = 0x24e3e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24e3ec:
    // 0x24e3ec: 0xc1b80000  ll          $t8, 0x0($t5)
    ctx->pc = 0x24e3ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 24, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24e3f0:
    // 0x24e3f0: 0xc1100000  ll          $s0, 0x0($t0)
    ctx->pc = 0x24e3f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24e3f4:
    // 0x24e3f4: 0x42840000  .word       0x42840000                   # INVALID     $s4, $a0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24e3f4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24E3F4 raw=0x42840000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24e3f8:
    // 0x24e3f8: 0x42100000  .word       0x42100000                   # INVALID     $s0, $s0, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24e3f8u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24E3F8 raw=0x42100000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24e3fc:
    // 0x24e3fc: 0x41600000  .word       0x41600000                   # INVALID     $t3, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24e3fcu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xB at 0x24E3FC raw=0x41600000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24e400:
    // 0x24e400: 0xc0800000  ll          $zero, 0x0($a0)
    ctx->pc = 0x24e400u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24e404:
    // 0x24e404: 0xc1900000  ll          $s0, 0x0($t4)
    ctx->pc = 0x24e404u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24e408:
    // 0x24e408: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24e408u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24e40c:
    // 0x24e40c: 0x42800000  .word       0x42800000                   # INVALID     $s4, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24e40cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24E40C raw=0x42800000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24e410:
    // 0x24e410: 0x42340000  .word       0x42340000                   # INVALID     $s1, $s4, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24e410u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x11 at 0x24E410 raw=0x42340000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24e414:
    // 0x24e414: 0x41d80000  .word       0x41D80000                   # INVALID     $t6, $t8, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24e414u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xE at 0x24E414 raw=0x41D80000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24e418:
    // 0x24e418: 0xc1e80000  ll          $t0, 0x0($t7)
    ctx->pc = 0x24e418u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24e41c:
    // 0x24e41c: 0xc1500000  ll          $s0, 0x0($t2)
    ctx->pc = 0x24e41cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24e420:
    // 0x24e420: 0xc2e00000  ll          $zero, 0x0($s7)
    ctx->pc = 0x24e420u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 23), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24e424:
    // 0x24e424: 0x42cc0000  .word       0x42CC0000                   # INVALID     $s6, $t4, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24e424u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x16 at 0x24E424 raw=0x42CC0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24e428:
    // 0x24e428: 0x42a60000  .word       0x42A60000                   # INVALID     $s5, $a2, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24e428u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x15 at 0x24E428 raw=0x42A60000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24e42c:
    // 0x24e42c: 0x43250000  .word       0x43250000                   # INVALID     $t9, $a1, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24e42cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x19 at 0x24E42C raw=0x43250000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24e430:
    // 0x24e430: 0xc0a00000  ll          $zero, 0x0($a1)
    ctx->pc = 0x24e430u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24e434:
    // 0x24e434: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24e434u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24e438:
    // 0x24e438: 0xc1a80000  ll          $t0, 0x0($t5)
    ctx->pc = 0x24e438u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24e43c:
    // 0x24e43c: 0x420c0000  .word       0x420C0000                   # INVALID     $s0, $t4, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24e43cu;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24E43C raw=0x420C0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24e440:
    // 0x24e440: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24e440u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24E440 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24e444:
    // 0x24e444: 0x42480000  .word       0x42480000                   # INVALID     $s2, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24e444u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x12 at 0x24E444 raw=0x42480000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24e448:
    // 0x24e448: 0x42e9c7ae  .word       0x42E9C7AE                   # INVALID     $s7, $t1, -0x3852 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24e448u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x17 at 0x24E448 raw=0x42E9C7AE"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24e44c:
    // 0x24e44c: 0x5  .word       0x00000005                   # INVALID     $zero, $zero, 0x5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24e44cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x24E44C raw=0x00000005"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24e450:
    // 0x24e450: 0x20000  sll         $zero, $v0, 0
    ctx->pc = 0x24e450u;
    
label_24e454:
    // 0x24e454: 0xfb00b2  tlt         $a3, $k1, 2
    ctx->pc = 0x24e454u;
    if (GPR_S64(ctx, 7) < GPR_S64(ctx, 27)) { runtime->handleTrap(rdram, ctx); }
label_24e458:
    // 0x24e458: 0x710071  tgeu        $v1, $s1, 1
    ctx->pc = 0x24e458u;
    if (GPR_U64(ctx, 3) >= GPR_U64(ctx, 17)) { runtime->handleTrap(rdram, ctx); }
label_24e45c:
    // 0x24e45c: 0x1230123  .word       0x01230123                   # subu        $zero, $t1, $v1 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24e45cu;
    SET_GPR_S32(ctx, 0, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
label_24e460:
    // 0x24e460: 0xc2d0c2d  jal         func_B430B4
label_24e464:
    if (ctx->pc == 0x24E464u) {
        ctx->pc = 0x24E464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E460u;
        // 0x24e464: 0xc2d0c2d  jal         func_B430B4 (Delay Slot)
        // JAL 0xB430B4 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x24E468u;
        goto label_24e468;
    }
    ctx->pc = 0x24E460u;
    SET_GPR_U32(ctx, 31, 0x24E468u);
    ctx->pc = 0x24E464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24E460u;
    // 0x24e464: 0xc2d0c2d  jal         func_B430B4 (Delay Slot)
    // JAL 0xB430B4 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0xB430B4u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xB430B4u, 0x24E460u, 0x24E468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E468u;
label_24e468:
    // 0x24e468: 0xc2d  .word       0x00000C2D                   # daddu       $at, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24e468u;
    SET_GPR_U64(ctx, 1, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24e46c:
    // 0x24e46c: 0x10000  sll         $zero, $at, 0
    ctx->pc = 0x24e46cu;
    
label_24e470:
    // 0x24e470: 0x0  nop
    ctx->pc = 0x24e470u;
    // NOP
label_24e474:
    // 0x24e474: 0xc1880000  ll          $t0, 0x0($t4)
    ctx->pc = 0x24e474u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24e478:
    // 0x24e478: 0x0  nop
    ctx->pc = 0x24e478u;
    // NOP
label_24e47c:
    // 0x24e47c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24e47cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_24e480:
    // 0x24e480: 0x42640000  .word       0x42640000                   # INVALID     $s3, $a0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24e480u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x13 at 0x24E480 raw=0x42640000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24e484:
    // 0x24e484: 0x41880000  .word       0x41880000                   # INVALID     $t4, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24e484u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xC at 0x24E484 raw=0x41880000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24e488:
    // 0x24e488: 0x40000000  mfc0        $zero, Index
    ctx->pc = 0x24e488u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_24e48c:
    // 0x24e48c: 0x41400000  .word       0x41400000                   # INVALID     $t2, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24e48cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xA at 0x24E48C raw=0x41400000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24e490:
    // 0x24e490: 0x0  nop
    ctx->pc = 0x24e490u;
    // NOP
label_24e494:
    // 0x24e494: 0x41800000  .word       0x41800000                   # INVALID     $t4, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24e494u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xC at 0x24E494 raw=0x41800000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24e498:
    // 0x24e498: 0x0  nop
    ctx->pc = 0x24e498u;
    // NOP
label_24e49c:
    // 0x24e49c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24e49cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_24e4a0:
    // 0x24e4a0: 0x42680000  .word       0x42680000                   # INVALID     $s3, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24e4a0u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x13 at 0x24E4A0 raw=0x42680000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24e4a4:
    // 0x24e4a4: 0x41800000  .word       0x41800000                   # INVALID     $t4, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24e4a4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xC at 0x24E4A4 raw=0x41800000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24e4a8:
    // 0x24e4a8: 0x40000000  mfc0        $zero, Index
    ctx->pc = 0x24e4a8u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_24e4ac:
    // 0x24e4ac: 0x41400000  .word       0x41400000                   # INVALID     $t2, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24e4acu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xA at 0x24E4AC raw=0x41400000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24e4b0:
    // 0x24e4b0: 0x0  nop
    ctx->pc = 0x24e4b0u;
    // NOP
label_24e4b4:
    // 0x24e4b4: 0x0  nop
    ctx->pc = 0x24e4b4u;
    // NOP
label_24e4b8:
    // 0x24e4b8: 0x0  nop
    ctx->pc = 0x24e4b8u;
    // NOP
label_24e4bc:
    // 0x24e4bc: 0x0  nop
    ctx->pc = 0x24e4bcu;
    // NOP
label_24e4c0:
    // 0x24e4c0: 0x0  nop
    ctx->pc = 0x24e4c0u;
    // NOP
label_24e4c4:
    // 0x24e4c4: 0x0  nop
    ctx->pc = 0x24e4c4u;
    // NOP
label_24e4c8:
    // 0x24e4c8: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24e4c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24e4cc:
    // 0x24e4cc: 0xc1800000  ll          $zero, 0x0($t4)
    ctx->pc = 0x24e4ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24e4d0:
    // 0x24e4d0: 0xc1a80000  ll          $t0, 0x0($t5)
    ctx->pc = 0x24e4d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24e4d4:
    // 0x24e4d4: 0x42800000  .word       0x42800000                   # INVALID     $s4, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24e4d4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24E4D4 raw=0x42800000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24e4d8:
    // 0x24e4d8: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24e4d8u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24E4D8 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24e4dc:
    // 0x24e4dc: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24e4dcu;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24E4DC raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24e4e0:
    // 0x24e4e0: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24e4e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24e4e4:
    // 0x24e4e4: 0xc1800000  ll          $zero, 0x0($t4)
    ctx->pc = 0x24e4e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24e4e8:
    // 0x24e4e8: 0xc1a80000  ll          $t0, 0x0($t5)
    ctx->pc = 0x24e4e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24e4ec:
    // 0x24e4ec: 0x42800000  .word       0x42800000                   # INVALID     $s4, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24e4ecu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24E4EC raw=0x42800000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24e4f0:
    // 0x24e4f0: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24e4f0u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24E4F0 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24e4f4:
    // 0x24e4f4: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24e4f4u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24E4F4 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24e4f8:
    // 0x24e4f8: 0xc0800000  ll          $zero, 0x0($a0)
    ctx->pc = 0x24e4f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24e4fc:
    // 0x24e4fc: 0xc1b80000  ll          $t8, 0x0($t5)
    ctx->pc = 0x24e4fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 24, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24e500:
    // 0x24e500: 0xc1100000  ll          $s0, 0x0($t0)
    ctx->pc = 0x24e500u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24e504:
    // 0x24e504: 0x42840000  .word       0x42840000                   # INVALID     $s4, $a0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24e504u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24E504 raw=0x42840000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24e508:
    // 0x24e508: 0x42100000  .word       0x42100000                   # INVALID     $s0, $s0, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24e508u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24E508 raw=0x42100000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24e50c:
    // 0x24e50c: 0x41600000  .word       0x41600000                   # INVALID     $t3, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24e50cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xB at 0x24E50C raw=0x41600000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24e510:
    // 0x24e510: 0xc0800000  ll          $zero, 0x0($a0)
    ctx->pc = 0x24e510u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24e514:
    // 0x24e514: 0xc1900000  ll          $s0, 0x0($t4)
    ctx->pc = 0x24e514u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24e518:
    // 0x24e518: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24e518u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24e51c:
    // 0x24e51c: 0x42800000  .word       0x42800000                   # INVALID     $s4, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24e51cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24E51C raw=0x42800000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24e520:
    // 0x24e520: 0x42340000  .word       0x42340000                   # INVALID     $s1, $s4, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24e520u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x11 at 0x24E520 raw=0x42340000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24e524:
    // 0x24e524: 0x41d80000  .word       0x41D80000                   # INVALID     $t6, $t8, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24e524u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xE at 0x24E524 raw=0x41D80000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24e528:
    // 0x24e528: 0xc1e80000  ll          $t0, 0x0($t7)
    ctx->pc = 0x24e528u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24e52c:
    // 0x24e52c: 0xc1500000  ll          $s0, 0x0($t2)
    ctx->pc = 0x24e52cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24e530:
    // 0x24e530: 0xc2e00000  ll          $zero, 0x0($s7)
    ctx->pc = 0x24e530u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 23), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24e534:
    // 0x24e534: 0x42cc0000  .word       0x42CC0000                   # INVALID     $s6, $t4, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24e534u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x16 at 0x24E534 raw=0x42CC0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24e538:
    // 0x24e538: 0x42a60000  .word       0x42A60000                   # INVALID     $s5, $a2, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24e538u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x15 at 0x24E538 raw=0x42A60000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24e53c:
    // 0x24e53c: 0x43250000  .word       0x43250000                   # INVALID     $t9, $a1, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24e53cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x19 at 0x24E53C raw=0x43250000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24e540:
    // 0x24e540: 0xc0a00000  ll          $zero, 0x0($a1)
    ctx->pc = 0x24e540u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24e544:
    // 0x24e544: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24e544u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24e548:
    // 0x24e548: 0xc1a80000  ll          $t0, 0x0($t5)
    ctx->pc = 0x24e548u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24e54c:
    // 0x24e54c: 0x420c0000  .word       0x420C0000                   # INVALID     $s0, $t4, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24e54cu;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24E54C raw=0x420C0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24e550:
    // 0x24e550: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24e550u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24E550 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24e554:
    // 0x24e554: 0x42480000  .word       0x42480000                   # INVALID     $s2, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24e554u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x12 at 0x24E554 raw=0x42480000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24e558:
    // 0x24e558: 0x42e9c7ae  .word       0x42E9C7AE                   # INVALID     $s7, $t1, -0x3852 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24e558u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x17 at 0x24E558 raw=0x42E9C7AE"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24e55c:
    // 0x24e55c: 0x30005  .word       0x00030005                   # INVALID     $zero, $v1, 0x5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24e55cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x24E55C raw=0x00030005"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24e560:
    // 0x24e560: 0x20000  sll         $zero, $v0, 0
    ctx->pc = 0x24e560u;
    
label_24e564:
    // 0x24e564: 0xfc00b3  tltu        $a3, $gp, 2
    ctx->pc = 0x24e564u;
    if (GPR_U64(ctx, 7) < GPR_U64(ctx, 28)) { runtime->handleTrap(rdram, ctx); }
label_24e568:
    // 0x24e568: 0x720072  tlt         $v1, $s2, 1
    ctx->pc = 0x24e568u;
    if (GPR_S64(ctx, 3) < GPR_S64(ctx, 18)) { runtime->handleTrap(rdram, ctx); }
label_24e56c:
    // 0x24e56c: 0x1240124  .word       0x01240124                   # and         $zero, $t1, $a0 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24e56cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 9) & GPR_U64(ctx, 4));
label_24e570:
    // 0x24e570: 0xc2d0c2d  jal         func_B430B4
label_24e574:
    if (ctx->pc == 0x24E574u) {
        ctx->pc = 0x24E574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E570u;
        // 0x24e574: 0xc2d0c2d  jal         func_B430B4 (Delay Slot)
        // JAL 0xB430B4 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x24E578u;
        goto label_24e578;
    }
    ctx->pc = 0x24E570u;
    SET_GPR_U32(ctx, 31, 0x24E578u);
    ctx->pc = 0x24E574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24E570u;
    // 0x24e574: 0xc2d0c2d  jal         func_B430B4 (Delay Slot)
    // JAL 0xB430B4 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0xB430B4u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xB430B4u, 0x24E570u, 0x24E578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E578u;
label_24e578:
    // 0x24e578: 0xc2d  .word       0x00000C2D                   # daddu       $at, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24e578u;
    SET_GPR_U64(ctx, 1, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24e57c:
    // 0x24e57c: 0x10000  sll         $zero, $at, 0
    ctx->pc = 0x24e57cu;
    
label_24e580:
    // 0x24e580: 0x41f00000  .word       0x41F00000                   # INVALID     $t7, $s0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24e580u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xF at 0x24E580 raw=0x41F00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24e584:
    // 0x24e584: 0x42080000  .word       0x42080000                   # INVALID     $s0, $t0, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24e584u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24E584 raw=0x42080000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24e588:
    // 0x24e588: 0x0  nop
    ctx->pc = 0x24e588u;
    // NOP
label_24e58c:
    // 0x24e58c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24e58cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_24e590:
    // 0x24e590: 0x42f00000  .word       0x42F00000                   # INVALID     $s7, $s0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24e590u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x17 at 0x24E590 raw=0x42F00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24e594:
    // 0x24e594: 0x42080000  .word       0x42080000                   # INVALID     $s0, $t0, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24e594u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24E594 raw=0x42080000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24e598:
    // 0x24e598: 0x40c00000  ctc0        $zero, Index
    ctx->pc = 0x24e598u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x6 at 0x24E598 raw=0x40C00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24e59c:
    // 0x24e59c: 0x41000000  bc0f        . + 4 + (0x0 << 2)
label_24e5a0:
    if (ctx->pc == 0x24E5A0u) {
        ctx->pc = 0x24E5A4u;
        goto label_24e5a4;
    }
    ctx->pc = 0x24E59Cu;
    {
        const bool branch_taken_0x24e59c = (false);
        if (branch_taken_0x24e59c) {
            ctx->pc = 0x24E5A0u;
            goto label_24e5a0;
        }
    }
    ctx->pc = 0x24E5A4u;
label_24e5a4:
    // 0x24e5a4: 0xc1a00000  ll          $zero, 0x0($t5)
    ctx->pc = 0x24e5a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24e5a8:
    // 0x24e5a8: 0x0  nop
    ctx->pc = 0x24e5a8u;
    // NOP
label_24e5ac:
    // 0x24e5ac: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24e5acu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_24e5b0:
    // 0x24e5b0: 0x42a00000  .word       0x42A00000                   # INVALID     $s5, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24e5b0u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x15 at 0x24E5B0 raw=0x42A00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24e5b4:
    // 0x24e5b4: 0x41a00000  .word       0x41A00000                   # INVALID     $t5, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24e5b4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xD at 0x24E5B4 raw=0x41A00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24e5b8:
    // 0x24e5b8: 0x40800000  mtc0        $zero, Index
    ctx->pc = 0x24e5b8u;
    ctx->cop0_index = GPR_U32(ctx, 0) & 0x3F;
label_24e5bc:
    // 0x24e5bc: 0x40c00000  ctc0        $zero, Index
    ctx->pc = 0x24e5bcu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x6 at 0x24E5BC raw=0x40C00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24e5c0:
    // 0x24e5c0: 0x0  nop
    ctx->pc = 0x24e5c0u;
    // NOP
label_24e5c4:
    // 0x24e5c4: 0x0  nop
    ctx->pc = 0x24e5c4u;
    // NOP
label_24e5c8:
    // 0x24e5c8: 0x0  nop
    ctx->pc = 0x24e5c8u;
    // NOP
label_24e5cc:
    // 0x24e5cc: 0x0  nop
    ctx->pc = 0x24e5ccu;
    // NOP
label_24e5d0:
    // 0x24e5d0: 0x0  nop
    ctx->pc = 0x24e5d0u;
    // NOP
label_24e5d4:
    // 0x24e5d4: 0x0  nop
    ctx->pc = 0x24e5d4u;
    // NOP
label_24e5d8:
    // 0x24e5d8: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24e5d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24e5dc:
    // 0x24e5dc: 0xc1800000  ll          $zero, 0x0($t4)
    ctx->pc = 0x24e5dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24e5e0:
    // 0x24e5e0: 0xc1a80000  ll          $t0, 0x0($t5)
    ctx->pc = 0x24e5e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24e5e4:
    // 0x24e5e4: 0x42800000  .word       0x42800000                   # INVALID     $s4, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24e5e4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24E5E4 raw=0x42800000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24e5e8:
    // 0x24e5e8: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24e5e8u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24E5E8 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24e5ec:
    // 0x24e5ec: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24e5ecu;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24E5EC raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24e5f0:
    // 0x24e5f0: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24e5f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24e5f4:
    // 0x24e5f4: 0xc1800000  ll          $zero, 0x0($t4)
    ctx->pc = 0x24e5f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24e5f8:
    // 0x24e5f8: 0xc1a80000  ll          $t0, 0x0($t5)
    ctx->pc = 0x24e5f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24e5fc:
    // 0x24e5fc: 0x42800000  .word       0x42800000                   # INVALID     $s4, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24e5fcu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24E5FC raw=0x42800000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24e600:
    // 0x24e600: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24e600u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24E600 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24e604:
    // 0x24e604: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24e604u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24E604 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24e608:
    // 0x24e608: 0xc0800000  ll          $zero, 0x0($a0)
    ctx->pc = 0x24e608u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24e60c:
    // 0x24e60c: 0xc1b80000  ll          $t8, 0x0($t5)
    ctx->pc = 0x24e60cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 24, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24e610:
    // 0x24e610: 0xc1100000  ll          $s0, 0x0($t0)
    ctx->pc = 0x24e610u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24e614:
    // 0x24e614: 0x42840000  .word       0x42840000                   # INVALID     $s4, $a0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24e614u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24E614 raw=0x42840000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24e618:
    // 0x24e618: 0x42100000  .word       0x42100000                   # INVALID     $s0, $s0, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24e618u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24E618 raw=0x42100000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24e61c:
    // 0x24e61c: 0x41600000  .word       0x41600000                   # INVALID     $t3, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24e61cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xB at 0x24E61C raw=0x41600000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24e620:
    // 0x24e620: 0xc0800000  ll          $zero, 0x0($a0)
    ctx->pc = 0x24e620u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24e624:
    // 0x24e624: 0xc1900000  ll          $s0, 0x0($t4)
    ctx->pc = 0x24e624u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24e628:
    // 0x24e628: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24e628u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24e62c:
    // 0x24e62c: 0x42800000  .word       0x42800000                   # INVALID     $s4, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24e62cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24E62C raw=0x42800000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24e630:
    // 0x24e630: 0x42340000  .word       0x42340000                   # INVALID     $s1, $s4, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24e630u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x11 at 0x24E630 raw=0x42340000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24e634:
    // 0x24e634: 0x41d80000  .word       0x41D80000                   # INVALID     $t6, $t8, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24e634u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xE at 0x24E634 raw=0x41D80000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24e638:
    // 0x24e638: 0xc1e80000  ll          $t0, 0x0($t7)
    ctx->pc = 0x24e638u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24e63c:
    // 0x24e63c: 0xc1500000  ll          $s0, 0x0($t2)
    ctx->pc = 0x24e63cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24e640:
    // 0x24e640: 0xc2e00000  ll          $zero, 0x0($s7)
    ctx->pc = 0x24e640u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 23), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24e644:
    // 0x24e644: 0x42cc0000  .word       0x42CC0000                   # INVALID     $s6, $t4, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24e644u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x16 at 0x24E644 raw=0x42CC0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24e648:
    // 0x24e648: 0x42a60000  .word       0x42A60000                   # INVALID     $s5, $a2, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24e648u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x15 at 0x24E648 raw=0x42A60000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24e64c:
    // 0x24e64c: 0x43250000  .word       0x43250000                   # INVALID     $t9, $a1, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24e64cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x19 at 0x24E64C raw=0x43250000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24e650:
    // 0x24e650: 0xc0a00000  ll          $zero, 0x0($a1)
    ctx->pc = 0x24e650u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24e654:
    // 0x24e654: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24e654u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24e658:
    // 0x24e658: 0xc1a80000  ll          $t0, 0x0($t5)
    ctx->pc = 0x24e658u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24e65c:
    // 0x24e65c: 0x420c0000  .word       0x420C0000                   # INVALID     $s0, $t4, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24e65cu;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24E65C raw=0x420C0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24e660:
    // 0x24e660: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24e660u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24E660 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24e664:
    // 0x24e664: 0x42480000  .word       0x42480000                   # INVALID     $s2, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24e664u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x12 at 0x24E664 raw=0x42480000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24e668:
    // 0x24e668: 0x42e9c7ae  .word       0x42E9C7AE                   # INVALID     $s7, $t1, -0x3852 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24e668u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x17 at 0x24E668 raw=0x42E9C7AE"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24e66c:
    // 0x24e66c: 0x40005  .word       0x00040005                   # INVALID     $zero, $a0, 0x5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24e66cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x24E66C raw=0x00040005"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24e670:
    // 0x24e670: 0xa0011  .word       0x000A0011                   # mthi        $zero # 000A0000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24e670u;
    ctx->hi = GPR_U64(ctx, 0);
label_24e674:
    // 0x24e674: 0xfd00b4  teq         $a3, $sp, 2
    ctx->pc = 0x24e674u;
    if (GPR_U64(ctx, 7) == GPR_U64(ctx, 29)) { runtime->handleTrap(rdram, ctx); }
label_24e678:
    // 0x24e678: 0x6c006c  .word       0x006C006C                   # dadd        $zero, $v1, $t4 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24e678u;
    { int64_t a = (int64_t)GPR_S64(ctx, 3); int64_t b = (int64_t)GPR_S64(ctx, 12); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_24e67c:
    // 0x24e67c: 0x1250125  .word       0x01250125                   # or          $zero, $t1, $a1 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24e67cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 9) | GPR_U64(ctx, 5));
label_24e680:
    // 0x24e680: 0xc2d0c2d  jal         func_B430B4
label_24e684:
    if (ctx->pc == 0x24E684u) {
        ctx->pc = 0x24E684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E680u;
        // 0x24e684: 0xc2d0c2d  jal         func_B430B4 (Delay Slot)
        // JAL 0xB430B4 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x24E688u;
        goto label_24e688;
    }
    ctx->pc = 0x24E680u;
    SET_GPR_U32(ctx, 31, 0x24E688u);
    ctx->pc = 0x24E684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24E680u;
    // 0x24e684: 0xc2d0c2d  jal         func_B430B4 (Delay Slot)
    // JAL 0xB430B4 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0xB430B4u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xB430B4u, 0x24E680u, 0x24E688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E688u;
label_24e688:
    // 0x24e688: 0xb5  .word       0x000000B5                   # INVALID     $zero, $zero, 0xB5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24e688u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x24E688 raw=0x000000B5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24e68c:
    // 0x24e68c: 0x10000  sll         $zero, $at, 0
    ctx->pc = 0x24e68cu;
    
label_24e690:
    // 0x24e690: 0x0  nop
    ctx->pc = 0x24e690u;
    // NOP
label_24e694:
    // 0x24e694: 0x41a00000  .word       0x41A00000                   # INVALID     $t5, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24e694u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xD at 0x24E694 raw=0x41A00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24e698:
    // 0x24e698: 0x0  nop
    ctx->pc = 0x24e698u;
    // NOP
label_24e69c:
    // 0x24e69c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24e69cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_24e6a0:
    // 0x24e6a0: 0x42860000  .word       0x42860000                   # INVALID     $s4, $a2, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24e6a0u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24E6A0 raw=0x42860000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24e6a4:
    // 0x24e6a4: 0x41a00000  .word       0x41A00000                   # INVALID     $t5, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24e6a4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xD at 0x24E6A4 raw=0x41A00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24e6a8:
    // 0x24e6a8: 0x40800000  mtc0        $zero, Index
    ctx->pc = 0x24e6a8u;
    ctx->cop0_index = GPR_U32(ctx, 0) & 0x3F;
label_24e6ac:
    // 0x24e6ac: 0x41200000  .word       0x41200000                   # INVALID     $t1, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24e6acu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x9 at 0x24E6AC raw=0x41200000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24e6b0:
    // 0x24e6b0: 0x0  nop
    ctx->pc = 0x24e6b0u;
    // NOP
label_24e6b4:
    // 0x24e6b4: 0xc1900000  ll          $s0, 0x0($t4)
    ctx->pc = 0x24e6b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24e6b8:
    // 0x24e6b8: 0x0  nop
    ctx->pc = 0x24e6b8u;
    // NOP
label_24e6bc:
    // 0x24e6bc: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24e6bcu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_24e6c0:
    // 0x24e6c0: 0x42480000  .word       0x42480000                   # INVALID     $s2, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24e6c0u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x12 at 0x24E6C0 raw=0x42480000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24e6c4:
    // 0x24e6c4: 0x41900000  .word       0x41900000                   # INVALID     $t4, $s0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24e6c4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xC at 0x24E6C4 raw=0x41900000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24e6c8:
    // 0x24e6c8: 0x40c00000  ctc0        $zero, Index
    ctx->pc = 0x24e6c8u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x6 at 0x24E6C8 raw=0x40C00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24e6cc:
    // 0x24e6cc: 0x41200000  .word       0x41200000                   # INVALID     $t1, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24e6ccu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x9 at 0x24E6CC raw=0x41200000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24e6d0:
    // 0x24e6d0: 0x0  nop
    ctx->pc = 0x24e6d0u;
    // NOP
label_24e6d4:
    // 0x24e6d4: 0x0  nop
    ctx->pc = 0x24e6d4u;
    // NOP
label_24e6d8:
    // 0x24e6d8: 0x0  nop
    ctx->pc = 0x24e6d8u;
    // NOP
label_24e6dc:
    // 0x24e6dc: 0x0  nop
    ctx->pc = 0x24e6dcu;
    // NOP
label_24e6e0:
    // 0x24e6e0: 0x0  nop
    ctx->pc = 0x24e6e0u;
    // NOP
label_24e6e4:
    // 0x24e6e4: 0x0  nop
    ctx->pc = 0x24e6e4u;
    // NOP
label_24e6e8:
    // 0x24e6e8: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24e6e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24e6ec:
    // 0x24e6ec: 0xc1800000  ll          $zero, 0x0($t4)
    ctx->pc = 0x24e6ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24e6f0:
    // 0x24e6f0: 0xc1a80000  ll          $t0, 0x0($t5)
    ctx->pc = 0x24e6f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24e6f4:
    // 0x24e6f4: 0x42800000  .word       0x42800000                   # INVALID     $s4, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24e6f4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24E6F4 raw=0x42800000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24e6f8:
    // 0x24e6f8: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24e6f8u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24E6F8 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24e6fc:
    // 0x24e6fc: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24e6fcu;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24E6FC raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24e700:
    // 0x24e700: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24e700u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24e704:
    // 0x24e704: 0xc1800000  ll          $zero, 0x0($t4)
    ctx->pc = 0x24e704u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24e708:
    // 0x24e708: 0xc1a80000  ll          $t0, 0x0($t5)
    ctx->pc = 0x24e708u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24e70c:
    // 0x24e70c: 0x42800000  .word       0x42800000                   # INVALID     $s4, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24e70cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24E70C raw=0x42800000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24e710:
    // 0x24e710: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24e710u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24E710 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24e714:
    // 0x24e714: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24e714u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24E714 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24e718:
    // 0x24e718: 0xc0800000  ll          $zero, 0x0($a0)
    ctx->pc = 0x24e718u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24e71c:
    // 0x24e71c: 0xc1b80000  ll          $t8, 0x0($t5)
    ctx->pc = 0x24e71cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 24, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24e720:
    // 0x24e720: 0xc1100000  ll          $s0, 0x0($t0)
    ctx->pc = 0x24e720u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24e724:
    // 0x24e724: 0x42840000  .word       0x42840000                   # INVALID     $s4, $a0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24e724u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24E724 raw=0x42840000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24e728:
    // 0x24e728: 0x42100000  .word       0x42100000                   # INVALID     $s0, $s0, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24e728u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24E728 raw=0x42100000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24e72c:
    // 0x24e72c: 0x41600000  .word       0x41600000                   # INVALID     $t3, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24e72cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xB at 0x24E72C raw=0x41600000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24e730:
    // 0x24e730: 0xc0800000  ll          $zero, 0x0($a0)
    ctx->pc = 0x24e730u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24e734:
    // 0x24e734: 0xc1900000  ll          $s0, 0x0($t4)
    ctx->pc = 0x24e734u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24e738:
    // 0x24e738: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24e738u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24e73c:
    // 0x24e73c: 0x42800000  .word       0x42800000                   # INVALID     $s4, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24e73cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24E73C raw=0x42800000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24e740:
    // 0x24e740: 0x42340000  .word       0x42340000                   # INVALID     $s1, $s4, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24e740u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x11 at 0x24E740 raw=0x42340000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24e744:
    // 0x24e744: 0x41d80000  .word       0x41D80000                   # INVALID     $t6, $t8, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24e744u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xE at 0x24E744 raw=0x41D80000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24e748:
    // 0x24e748: 0xc1e80000  ll          $t0, 0x0($t7)
    ctx->pc = 0x24e748u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24e74c:
    // 0x24e74c: 0xc1500000  ll          $s0, 0x0($t2)
    ctx->pc = 0x24e74cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24e750:
    // 0x24e750: 0xc2e00000  ll          $zero, 0x0($s7)
    ctx->pc = 0x24e750u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 23), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24e754:
    // 0x24e754: 0x42cc0000  .word       0x42CC0000                   # INVALID     $s6, $t4, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24e754u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x16 at 0x24E754 raw=0x42CC0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24e758:
    // 0x24e758: 0x42a60000  .word       0x42A60000                   # INVALID     $s5, $a2, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24e758u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x15 at 0x24E758 raw=0x42A60000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24e75c:
    // 0x24e75c: 0x43250000  .word       0x43250000                   # INVALID     $t9, $a1, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24e75cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x19 at 0x24E75C raw=0x43250000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24e760:
    // 0x24e760: 0xc0a00000  ll          $zero, 0x0($a1)
    ctx->pc = 0x24e760u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24e764:
    // 0x24e764: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24e764u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24e768:
    // 0x24e768: 0xc1a80000  ll          $t0, 0x0($t5)
    ctx->pc = 0x24e768u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24e76c:
    // 0x24e76c: 0x420c0000  .word       0x420C0000                   # INVALID     $s0, $t4, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24e76cu;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24E76C raw=0x420C0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24e770:
    // 0x24e770: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24e770u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24E770 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24e774:
    // 0x24e774: 0x42480000  .word       0x42480000                   # INVALID     $s2, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24e774u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x12 at 0x24E774 raw=0x42480000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24e778:
    // 0x24e778: 0x42eeeb85  .word       0x42EEEB85                   # INVALID     $s7, $t6, -0x147B # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24e778u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x17 at 0x24E778 raw=0x42EEEB85"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24e77c:
    // 0x24e77c: 0x50005  .word       0x00050005                   # INVALID     $zero, $a1, 0x5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24e77cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x24E77C raw=0x00050005"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24e780:
    // 0x24e780: 0xa0011  .word       0x000A0011                   # mthi        $zero # 000A0000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24e780u;
    ctx->hi = GPR_U64(ctx, 0);
label_24e784:
    // 0x24e784: 0xfe00b6  tne         $a3, $fp, 2
    ctx->pc = 0x24e784u;
    if (GPR_U64(ctx, 7) != GPR_U64(ctx, 30)) { runtime->handleTrap(rdram, ctx); }
label_24e788:
    // 0x24e788: 0x6d006d  .word       0x006D006D                   # daddu       $zero, $v1, $t5 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24e788u;
    SET_GPR_U64(ctx, 0, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 13));
label_24e78c:
    // 0x24e78c: 0x1260126  .word       0x01260126                   # xor         $zero, $t1, $a2 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24e78cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 9) ^ GPR_U64(ctx, 6));
label_24e790:
    // 0x24e790: 0xc2d0c2d  jal         func_B430B4
label_24e794:
    if (ctx->pc == 0x24E794u) {
        ctx->pc = 0x24E794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E790u;
        // 0x24e794: 0xc2d0c2d  jal         func_B430B4 (Delay Slot)
        // JAL 0xB430B4 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x24E798u;
        goto label_24e798;
    }
    ctx->pc = 0x24E790u;
    SET_GPR_U32(ctx, 31, 0x24E798u);
    ctx->pc = 0x24E794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24E790u;
    // 0x24e794: 0xc2d0c2d  jal         func_B430B4 (Delay Slot)
    // JAL 0xB430B4 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0xB430B4u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xB430B4u, 0x24E790u, 0x24E798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E798u;
label_24e798:
    // 0x24e798: 0xb7  .word       0x000000B7                   # INVALID     $zero, $zero, 0xB7 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24e798u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x24E798 raw=0x000000B7"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24e79c:
    // 0x24e79c: 0x10000  sll         $zero, $at, 0
    ctx->pc = 0x24e79cu;
    
label_24e7a0:
    // 0x24e7a0: 0x0  nop
    ctx->pc = 0x24e7a0u;
    // NOP
label_24e7a4:
    // 0x24e7a4: 0x0  nop
    ctx->pc = 0x24e7a4u;
    // NOP
label_24e7a8:
    // 0x24e7a8: 0x0  nop
    ctx->pc = 0x24e7a8u;
    // NOP
label_24e7ac:
    // 0x24e7ac: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24e7acu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_24e7b0:
    // 0x24e7b0: 0x0  nop
    ctx->pc = 0x24e7b0u;
    // NOP
label_24e7b4:
    // 0x24e7b4: 0x0  nop
    ctx->pc = 0x24e7b4u;
    // NOP
label_24e7b8:
    // 0x24e7b8: 0x40000000  mfc0        $zero, Index
    ctx->pc = 0x24e7b8u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_24e7bc:
    // 0x24e7bc: 0x41400000  .word       0x41400000                   # INVALID     $t2, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24e7bcu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xA at 0x24E7BC raw=0x41400000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24e7c0:
    // 0x24e7c0: 0x0  nop
    ctx->pc = 0x24e7c0u;
    // NOP
label_24e7c4:
    // 0x24e7c4: 0x0  nop
    ctx->pc = 0x24e7c4u;
    // NOP
label_24e7c8:
    // 0x24e7c8: 0x0  nop
    ctx->pc = 0x24e7c8u;
    // NOP
label_24e7cc:
    // 0x24e7cc: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24e7ccu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_24e7d0:
    // 0x24e7d0: 0x0  nop
    ctx->pc = 0x24e7d0u;
    // NOP
label_24e7d4:
    // 0x24e7d4: 0x0  nop
    ctx->pc = 0x24e7d4u;
    // NOP
label_24e7d8:
    // 0x24e7d8: 0x40000000  mfc0        $zero, Index
    ctx->pc = 0x24e7d8u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_24e7dc:
    // 0x24e7dc: 0x41400000  .word       0x41400000                   # INVALID     $t2, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24e7dcu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xA at 0x24E7DC raw=0x41400000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24e7e0:
    // 0x24e7e0: 0x0  nop
    ctx->pc = 0x24e7e0u;
    // NOP
label_24e7e4:
    // 0x24e7e4: 0x0  nop
    ctx->pc = 0x24e7e4u;
    // NOP
label_24e7e8:
    // 0x24e7e8: 0x0  nop
    ctx->pc = 0x24e7e8u;
    // NOP
label_24e7ec:
    // 0x24e7ec: 0x0  nop
    ctx->pc = 0x24e7ecu;
    // NOP
label_24e7f0:
    // 0x24e7f0: 0x0  nop
    ctx->pc = 0x24e7f0u;
    // NOP
label_24e7f4:
    // 0x24e7f4: 0x0  nop
    ctx->pc = 0x24e7f4u;
    // NOP
label_24e7f8:
    // 0x24e7f8: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24e7f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24e7fc:
    // 0x24e7fc: 0xc1800000  ll          $zero, 0x0($t4)
    ctx->pc = 0x24e7fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24e800:
    // 0x24e800: 0xc1a80000  ll          $t0, 0x0($t5)
    ctx->pc = 0x24e800u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24e804:
    // 0x24e804: 0x42800000  .word       0x42800000                   # INVALID     $s4, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24e804u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24E804 raw=0x42800000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24e808:
    // 0x24e808: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24e808u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24E808 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24e80c:
    // 0x24e80c: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24e80cu;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24E80C raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24e810:
    // 0x24e810: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24e810u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24e814:
    // 0x24e814: 0xc1800000  ll          $zero, 0x0($t4)
    ctx->pc = 0x24e814u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24e818:
    // 0x24e818: 0xc1a80000  ll          $t0, 0x0($t5)
    ctx->pc = 0x24e818u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24e81c:
    // 0x24e81c: 0x42800000  .word       0x42800000                   # INVALID     $s4, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24e81cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24E81C raw=0x42800000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24e820:
    // 0x24e820: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24e820u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24E820 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24e824:
    // 0x24e824: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24e824u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24E824 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24e828:
    // 0x24e828: 0xc0800000  ll          $zero, 0x0($a0)
    ctx->pc = 0x24e828u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24e82c:
    // 0x24e82c: 0xc1b80000  ll          $t8, 0x0($t5)
    ctx->pc = 0x24e82cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 24, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24e830:
    // 0x24e830: 0xc1100000  ll          $s0, 0x0($t0)
    ctx->pc = 0x24e830u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24e834:
    // 0x24e834: 0x42840000  .word       0x42840000                   # INVALID     $s4, $a0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24e834u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24E834 raw=0x42840000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24e838:
    // 0x24e838: 0x42100000  .word       0x42100000                   # INVALID     $s0, $s0, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24e838u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24E838 raw=0x42100000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24e83c:
    // 0x24e83c: 0x41600000  .word       0x41600000                   # INVALID     $t3, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24e83cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xB at 0x24E83C raw=0x41600000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24e840:
    // 0x24e840: 0xc0800000  ll          $zero, 0x0($a0)
    ctx->pc = 0x24e840u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24e844:
    // 0x24e844: 0xc1900000  ll          $s0, 0x0($t4)
    ctx->pc = 0x24e844u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24e848:
    // 0x24e848: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24e848u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24e84c:
    // 0x24e84c: 0x42800000  .word       0x42800000                   # INVALID     $s4, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24e84cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24E84C raw=0x42800000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24e850:
    // 0x24e850: 0x42340000  .word       0x42340000                   # INVALID     $s1, $s4, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24e850u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x11 at 0x24E850 raw=0x42340000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24e854:
    // 0x24e854: 0x41d80000  .word       0x41D80000                   # INVALID     $t6, $t8, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24e854u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xE at 0x24E854 raw=0x41D80000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24e858:
    // 0x24e858: 0xc1e80000  ll          $t0, 0x0($t7)
    ctx->pc = 0x24e858u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24e85c:
    // 0x24e85c: 0xc1500000  ll          $s0, 0x0($t2)
    ctx->pc = 0x24e85cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24e860:
    // 0x24e860: 0xc2e00000  ll          $zero, 0x0($s7)
    ctx->pc = 0x24e860u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 23), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24e864:
    // 0x24e864: 0x42cc0000  .word       0x42CC0000                   # INVALID     $s6, $t4, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24e864u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x16 at 0x24E864 raw=0x42CC0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24e868:
    // 0x24e868: 0x42a60000  .word       0x42A60000                   # INVALID     $s5, $a2, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24e868u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x15 at 0x24E868 raw=0x42A60000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24e86c:
    // 0x24e86c: 0x43250000  .word       0x43250000                   # INVALID     $t9, $a1, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24e86cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x19 at 0x24E86C raw=0x43250000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24e870:
    // 0x24e870: 0xc0a00000  ll          $zero, 0x0($a1)
    ctx->pc = 0x24e870u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24e874:
    // 0x24e874: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24e874u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24e878:
    // 0x24e878: 0xc1a80000  ll          $t0, 0x0($t5)
    ctx->pc = 0x24e878u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24e87c:
    // 0x24e87c: 0x420c0000  .word       0x420C0000                   # INVALID     $s0, $t4, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24e87cu;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24E87C raw=0x420C0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24e880:
    // 0x24e880: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24e880u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24E880 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24e884:
    // 0x24e884: 0x42480000  .word       0x42480000                   # INVALID     $s2, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24e884u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x12 at 0x24E884 raw=0x42480000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24e888:
    // 0x24e888: 0x42e9c7ae  .word       0x42E9C7AE                   # INVALID     $s7, $t1, -0x3852 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24e888u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x17 at 0x24E888 raw=0x42E9C7AE"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24e88c:
    // 0x24e88c: 0x60005  .word       0x00060005                   # INVALID     $zero, $a2, 0x5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24e88cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x24E88C raw=0x00060005"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24e890:
    // 0x24e890: 0xa0011  .word       0x000A0011                   # mthi        $zero # 000A0000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24e890u;
    ctx->hi = GPR_U64(ctx, 0);
label_24e894:
    // 0x24e894: 0xff00b8  .word       0x00FF00B8                   # dsll        $zero, $ra, 2 # 00E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24e894u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 31) << 2);
label_24e898:
    // 0x24e898: 0x6e006e  .word       0x006E006E                   # dsub        $zero, $v1, $t6 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24e898u;
    { int64_t a = (int64_t)GPR_S64(ctx, 3); int64_t b = (int64_t)GPR_S64(ctx, 14); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_24e89c:
    // 0x24e89c: 0x1270127  .word       0x01270127                   # nor         $zero, $t1, $a3 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24e89cu;
    SET_GPR_U64(ctx, 0, ~(GPR_U64(ctx, 9) | GPR_U64(ctx, 7)));
label_24e8a0:
    // 0x24e8a0: 0xc2d0c2d  jal         func_B430B4
label_24e8a4:
    if (ctx->pc == 0x24E8A4u) {
        ctx->pc = 0x24E8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E8A0u;
        // 0x24e8a4: 0xc2d0c2d  jal         func_B430B4 (Delay Slot)
        // JAL 0xB430B4 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x24E8A8u;
        goto label_24e8a8;
    }
    ctx->pc = 0x24E8A0u;
    SET_GPR_U32(ctx, 31, 0x24E8A8u);
    ctx->pc = 0x24E8A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24E8A0u;
    // 0x24e8a4: 0xc2d0c2d  jal         func_B430B4 (Delay Slot)
    // JAL 0xB430B4 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0xB430B4u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xB430B4u, 0x24E8A0u, 0x24E8A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E8A8u;
label_24e8a8:
    // 0x24e8a8: 0xb9  .word       0x000000B9                   # INVALID     $zero, $zero, 0xB9 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24e8a8u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x24E8A8 raw=0x000000B9"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24e8ac:
    // 0x24e8ac: 0x10000  sll         $zero, $at, 0
    ctx->pc = 0x24e8acu;
    
label_24e8b0:
    // 0x24e8b0: 0x0  nop
    ctx->pc = 0x24e8b0u;
    // NOP
label_24e8b4:
    // 0x24e8b4: 0x0  nop
    ctx->pc = 0x24e8b4u;
    // NOP
label_24e8b8:
    // 0x24e8b8: 0x0  nop
    ctx->pc = 0x24e8b8u;
    // NOP
label_24e8bc:
    // 0x24e8bc: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24e8bcu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_24e8c0:
    // 0x24e8c0: 0x0  nop
    ctx->pc = 0x24e8c0u;
    // NOP
label_24e8c4:
    // 0x24e8c4: 0x0  nop
    ctx->pc = 0x24e8c4u;
    // NOP
label_24e8c8:
    // 0x24e8c8: 0x40000000  mfc0        $zero, Index
    ctx->pc = 0x24e8c8u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_24e8cc:
    // 0x24e8cc: 0x41400000  .word       0x41400000                   # INVALID     $t2, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24e8ccu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xA at 0x24E8CC raw=0x41400000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24e8d0:
    // 0x24e8d0: 0x0  nop
    ctx->pc = 0x24e8d0u;
    // NOP
label_24e8d4:
    // 0x24e8d4: 0x0  nop
    ctx->pc = 0x24e8d4u;
    // NOP
label_24e8d8:
    // 0x24e8d8: 0x0  nop
    ctx->pc = 0x24e8d8u;
    // NOP
label_24e8dc:
    // 0x24e8dc: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24e8dcu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_24e8e0:
    // 0x24e8e0: 0x0  nop
    ctx->pc = 0x24e8e0u;
    // NOP
label_24e8e4:
    // 0x24e8e4: 0x0  nop
    ctx->pc = 0x24e8e4u;
    // NOP
label_24e8e8:
    // 0x24e8e8: 0x40000000  mfc0        $zero, Index
    ctx->pc = 0x24e8e8u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_24e8ec:
    // 0x24e8ec: 0x41400000  .word       0x41400000                   # INVALID     $t2, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24e8ecu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xA at 0x24E8EC raw=0x41400000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24e8f0:
    // 0x24e8f0: 0x0  nop
    ctx->pc = 0x24e8f0u;
    // NOP
label_24e8f4:
    // 0x24e8f4: 0x0  nop
    ctx->pc = 0x24e8f4u;
    // NOP
label_24e8f8:
    // 0x24e8f8: 0x0  nop
    ctx->pc = 0x24e8f8u;
    // NOP
label_24e8fc:
    // 0x24e8fc: 0x0  nop
    ctx->pc = 0x24e8fcu;
    // NOP
label_24e900:
    // 0x24e900: 0x0  nop
    ctx->pc = 0x24e900u;
    // NOP
label_24e904:
    // 0x24e904: 0x0  nop
    ctx->pc = 0x24e904u;
    // NOP
label_24e908:
    // 0x24e908: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24e908u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24e90c:
    // 0x24e90c: 0xc1800000  ll          $zero, 0x0($t4)
    ctx->pc = 0x24e90cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24e910:
    // 0x24e910: 0xc1a80000  ll          $t0, 0x0($t5)
    ctx->pc = 0x24e910u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24e914:
    // 0x24e914: 0x42800000  .word       0x42800000                   # INVALID     $s4, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24e914u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24E914 raw=0x42800000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24e918:
    // 0x24e918: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24e918u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24E918 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24e91c:
    // 0x24e91c: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24e91cu;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24E91C raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24e920:
    // 0x24e920: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24e920u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24e924:
    // 0x24e924: 0xc1800000  ll          $zero, 0x0($t4)
    ctx->pc = 0x24e924u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24e928:
    // 0x24e928: 0xc1a80000  ll          $t0, 0x0($t5)
    ctx->pc = 0x24e928u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24e92c:
    // 0x24e92c: 0x42800000  .word       0x42800000                   # INVALID     $s4, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24e92cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24E92C raw=0x42800000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24e930:
    // 0x24e930: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24e930u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24E930 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24e934:
    // 0x24e934: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24e934u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24E934 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24e938:
    // 0x24e938: 0xc0800000  ll          $zero, 0x0($a0)
    ctx->pc = 0x24e938u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24e93c:
    // 0x24e93c: 0xc1b80000  ll          $t8, 0x0($t5)
    ctx->pc = 0x24e93cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 24, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24e940:
    // 0x24e940: 0xc1100000  ll          $s0, 0x0($t0)
    ctx->pc = 0x24e940u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24e944:
    // 0x24e944: 0x42840000  .word       0x42840000                   # INVALID     $s4, $a0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24e944u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24E944 raw=0x42840000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24e948:
    // 0x24e948: 0x42100000  .word       0x42100000                   # INVALID     $s0, $s0, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24e948u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24E948 raw=0x42100000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24e94c:
    // 0x24e94c: 0x41600000  .word       0x41600000                   # INVALID     $t3, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24e94cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xB at 0x24E94C raw=0x41600000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24e950:
    // 0x24e950: 0xc0800000  ll          $zero, 0x0($a0)
    ctx->pc = 0x24e950u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24e954:
    // 0x24e954: 0xc1900000  ll          $s0, 0x0($t4)
    ctx->pc = 0x24e954u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24e958:
    // 0x24e958: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24e958u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24e95c:
    // 0x24e95c: 0x42800000  .word       0x42800000                   # INVALID     $s4, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24e95cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24E95C raw=0x42800000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24e960:
    // 0x24e960: 0x42340000  .word       0x42340000                   # INVALID     $s1, $s4, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24e960u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x11 at 0x24E960 raw=0x42340000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24e964:
    // 0x24e964: 0x41d80000  .word       0x41D80000                   # INVALID     $t6, $t8, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24e964u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xE at 0x24E964 raw=0x41D80000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24e968:
    // 0x24e968: 0xc1e80000  ll          $t0, 0x0($t7)
    ctx->pc = 0x24e968u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24e96c:
    // 0x24e96c: 0xc1500000  ll          $s0, 0x0($t2)
    ctx->pc = 0x24e96cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24e970:
    // 0x24e970: 0xc2e00000  ll          $zero, 0x0($s7)
    ctx->pc = 0x24e970u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 23), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24e974:
    // 0x24e974: 0x42cc0000  .word       0x42CC0000                   # INVALID     $s6, $t4, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24e974u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x16 at 0x24E974 raw=0x42CC0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24e978:
    // 0x24e978: 0x42a60000  .word       0x42A60000                   # INVALID     $s5, $a2, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24e978u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x15 at 0x24E978 raw=0x42A60000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24e97c:
    // 0x24e97c: 0x43250000  .word       0x43250000                   # INVALID     $t9, $a1, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24e97cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x19 at 0x24E97C raw=0x43250000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24e980:
    // 0x24e980: 0xc0a00000  ll          $zero, 0x0($a1)
    ctx->pc = 0x24e980u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24e984:
    // 0x24e984: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24e984u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24e988:
    // 0x24e988: 0xc1a80000  ll          $t0, 0x0($t5)
    ctx->pc = 0x24e988u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24e98c:
    // 0x24e98c: 0x420c0000  .word       0x420C0000                   # INVALID     $s0, $t4, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24e98cu;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24E98C raw=0x420C0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24e990:
    // 0x24e990: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24e990u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24E990 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24e994:
    // 0x24e994: 0x42480000  .word       0x42480000                   # INVALID     $s2, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24e994u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x12 at 0x24E994 raw=0x42480000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24e998:
    // 0x24e998: 0x42e9c7ae  .word       0x42E9C7AE                   # INVALID     $s7, $t1, -0x3852 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24e998u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x17 at 0x24E998 raw=0x42E9C7AE"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24e99c:
    // 0x24e99c: 0x70005  .word       0x00070005                   # INVALID     $zero, $a3, 0x5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24e99cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x24E99C raw=0x00070005"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24e9a0:
    // 0x24e9a0: 0x20000  sll         $zero, $v0, 0
    ctx->pc = 0x24e9a0u;
    
label_24e9a4:
    // 0x24e9a4: 0x10000d8  .word       0x010000D8                   # mult        $zero, $t0, $zero # 000000C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x24e9a4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_24e9a8:
    // 0x24e9a8: 0x730073  tltu        $v1, $s3, 1
    ctx->pc = 0x24e9a8u;
    if (GPR_U64(ctx, 3) < GPR_U64(ctx, 19)) { runtime->handleTrap(rdram, ctx); }
label_24e9ac:
    // 0x24e9ac: 0x1390139  .word       0x01390139                   # INVALID     $t1, $t9, 0x139 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24e9acu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x24E9AC raw=0x01390139"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24e9b0:
    // 0x24e9b0: 0xc2d0c2d  jal         func_B430B4
label_24e9b4:
    if (ctx->pc == 0x24E9B4u) {
        ctx->pc = 0x24E9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E9B0u;
        // 0x24e9b4: 0xc2d0c2d  jal         func_B430B4 (Delay Slot)
        // JAL 0xB430B4 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x24E9B8u;
        goto label_24e9b8;
    }
    ctx->pc = 0x24E9B0u;
    SET_GPR_U32(ctx, 31, 0x24E9B8u);
    ctx->pc = 0x24E9B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24E9B0u;
    // 0x24e9b4: 0xc2d0c2d  jal         func_B430B4 (Delay Slot)
    // JAL 0xB430B4 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0xB430B4u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xB430B4u, 0x24E9B0u, 0x24E9B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E9B8u;
label_24e9b8:
    // 0x24e9b8: 0xc2d  .word       0x00000C2D                   # daddu       $at, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24e9b8u;
    SET_GPR_U64(ctx, 1, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24e9bc:
    // 0x24e9bc: 0x10000  sll         $zero, $at, 0
    ctx->pc = 0x24e9bcu;
    
label_24e9c0:
    // 0x24e9c0: 0x0  nop
    ctx->pc = 0x24e9c0u;
    // NOP
label_24e9c4:
    // 0x24e9c4: 0x0  nop
    ctx->pc = 0x24e9c4u;
    // NOP
label_24e9c8:
    // 0x24e9c8: 0x0  nop
    ctx->pc = 0x24e9c8u;
    // NOP
label_24e9cc:
    // 0x24e9cc: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24e9ccu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_24e9d0:
    // 0x24e9d0: 0x0  nop
    ctx->pc = 0x24e9d0u;
    // NOP
label_24e9d4:
    // 0x24e9d4: 0x0  nop
    ctx->pc = 0x24e9d4u;
    // NOP
    ctx->pc = 0x24e9d8u;
    return;
}
