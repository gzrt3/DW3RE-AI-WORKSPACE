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


void FUN_0017faa0_part555(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x28e2c0u: goto label_28e2c0;
        case 0x28e2c4u: goto label_28e2c4;
        case 0x28e2c8u: goto label_28e2c8;
        case 0x28e2ccu: goto label_28e2cc;
        case 0x28e2d0u: goto label_28e2d0;
        case 0x28e2d4u: goto label_28e2d4;
        case 0x28e2d8u: goto label_28e2d8;
        case 0x28e2dcu: goto label_28e2dc;
        case 0x28e2e0u: goto label_28e2e0;
        case 0x28e2e4u: goto label_28e2e4;
        case 0x28e2e8u: goto label_28e2e8;
        case 0x28e2ecu: goto label_28e2ec;
        case 0x28e2f0u: goto label_28e2f0;
        case 0x28e2f4u: goto label_28e2f4;
        case 0x28e2f8u: goto label_28e2f8;
        case 0x28e2fcu: goto label_28e2fc;
        case 0x28e300u: goto label_28e300;
        case 0x28e304u: goto label_28e304;
        case 0x28e308u: goto label_28e308;
        case 0x28e30cu: goto label_28e30c;
        case 0x28e310u: goto label_28e310;
        case 0x28e314u: goto label_28e314;
        case 0x28e318u: goto label_28e318;
        case 0x28e31cu: goto label_28e31c;
        case 0x28e320u: goto label_28e320;
        case 0x28e324u: goto label_28e324;
        case 0x28e328u: goto label_28e328;
        case 0x28e32cu: goto label_28e32c;
        case 0x28e330u: goto label_28e330;
        case 0x28e334u: goto label_28e334;
        case 0x28e338u: goto label_28e338;
        case 0x28e33cu: goto label_28e33c;
        case 0x28e340u: goto label_28e340;
        case 0x28e344u: goto label_28e344;
        case 0x28e348u: goto label_28e348;
        case 0x28e34cu: goto label_28e34c;
        case 0x28e350u: goto label_28e350;
        case 0x28e354u: goto label_28e354;
        case 0x28e358u: goto label_28e358;
        case 0x28e35cu: goto label_28e35c;
        case 0x28e360u: goto label_28e360;
        case 0x28e364u: goto label_28e364;
        case 0x28e368u: goto label_28e368;
        case 0x28e36cu: goto label_28e36c;
        case 0x28e370u: goto label_28e370;
        case 0x28e374u: goto label_28e374;
        case 0x28e378u: goto label_28e378;
        case 0x28e37cu: goto label_28e37c;
        case 0x28e380u: goto label_28e380;
        case 0x28e384u: goto label_28e384;
        case 0x28e388u: goto label_28e388;
        case 0x28e38cu: goto label_28e38c;
        case 0x28e390u: goto label_28e390;
        case 0x28e394u: goto label_28e394;
        case 0x28e398u: goto label_28e398;
        case 0x28e39cu: goto label_28e39c;
        case 0x28e3a0u: goto label_28e3a0;
        case 0x28e3a4u: goto label_28e3a4;
        case 0x28e3a8u: goto label_28e3a8;
        case 0x28e3acu: goto label_28e3ac;
        case 0x28e3b0u: goto label_28e3b0;
        case 0x28e3b4u: goto label_28e3b4;
        case 0x28e3b8u: goto label_28e3b8;
        case 0x28e3bcu: goto label_28e3bc;
        case 0x28e3c0u: goto label_28e3c0;
        case 0x28e3c4u: goto label_28e3c4;
        case 0x28e3c8u: goto label_28e3c8;
        case 0x28e3ccu: goto label_28e3cc;
        case 0x28e3d0u: goto label_28e3d0;
        case 0x28e3d4u: goto label_28e3d4;
        case 0x28e3d8u: goto label_28e3d8;
        case 0x28e3dcu: goto label_28e3dc;
        case 0x28e3e0u: goto label_28e3e0;
        case 0x28e3e4u: goto label_28e3e4;
        case 0x28e3e8u: goto label_28e3e8;
        case 0x28e3ecu: goto label_28e3ec;
        case 0x28e3f0u: goto label_28e3f0;
        case 0x28e3f4u: goto label_28e3f4;
        case 0x28e3f8u: goto label_28e3f8;
        case 0x28e3fcu: goto label_28e3fc;
        case 0x28e400u: goto label_28e400;
        case 0x28e404u: goto label_28e404;
        case 0x28e408u: goto label_28e408;
        case 0x28e40cu: goto label_28e40c;
        case 0x28e410u: goto label_28e410;
        case 0x28e414u: goto label_28e414;
        case 0x28e418u: goto label_28e418;
        case 0x28e41cu: goto label_28e41c;
        case 0x28e420u: goto label_28e420;
        case 0x28e424u: goto label_28e424;
        case 0x28e428u: goto label_28e428;
        case 0x28e42cu: goto label_28e42c;
        case 0x28e430u: goto label_28e430;
        case 0x28e434u: goto label_28e434;
        case 0x28e438u: goto label_28e438;
        case 0x28e43cu: goto label_28e43c;
        case 0x28e440u: goto label_28e440;
        case 0x28e444u: goto label_28e444;
        case 0x28e448u: goto label_28e448;
        case 0x28e44cu: goto label_28e44c;
        case 0x28e450u: goto label_28e450;
        case 0x28e454u: goto label_28e454;
        case 0x28e458u: goto label_28e458;
        case 0x28e45cu: goto label_28e45c;
        case 0x28e460u: goto label_28e460;
        case 0x28e464u: goto label_28e464;
        case 0x28e468u: goto label_28e468;
        case 0x28e46cu: goto label_28e46c;
        case 0x28e470u: goto label_28e470;
        case 0x28e474u: goto label_28e474;
        case 0x28e478u: goto label_28e478;
        case 0x28e47cu: goto label_28e47c;
        case 0x28e480u: goto label_28e480;
        case 0x28e484u: goto label_28e484;
        case 0x28e488u: goto label_28e488;
        case 0x28e48cu: goto label_28e48c;
        case 0x28e490u: goto label_28e490;
        case 0x28e494u: goto label_28e494;
        case 0x28e498u: goto label_28e498;
        case 0x28e49cu: goto label_28e49c;
        case 0x28e4a0u: goto label_28e4a0;
        case 0x28e4a4u: goto label_28e4a4;
        case 0x28e4a8u: goto label_28e4a8;
        case 0x28e4acu: goto label_28e4ac;
        case 0x28e4b0u: goto label_28e4b0;
        case 0x28e4b4u: goto label_28e4b4;
        case 0x28e4b8u: goto label_28e4b8;
        case 0x28e4bcu: goto label_28e4bc;
        case 0x28e4c0u: goto label_28e4c0;
        case 0x28e4c4u: goto label_28e4c4;
        case 0x28e4c8u: goto label_28e4c8;
        case 0x28e4ccu: goto label_28e4cc;
        case 0x28e4d0u: goto label_28e4d0;
        case 0x28e4d4u: goto label_28e4d4;
        case 0x28e4d8u: goto label_28e4d8;
        case 0x28e4dcu: goto label_28e4dc;
        case 0x28e4e0u: goto label_28e4e0;
        case 0x28e4e4u: goto label_28e4e4;
        case 0x28e4e8u: goto label_28e4e8;
        case 0x28e4ecu: goto label_28e4ec;
        case 0x28e4f0u: goto label_28e4f0;
        case 0x28e4f4u: goto label_28e4f4;
        case 0x28e4f8u: goto label_28e4f8;
        case 0x28e4fcu: goto label_28e4fc;
        case 0x28e500u: goto label_28e500;
        case 0x28e504u: goto label_28e504;
        case 0x28e508u: goto label_28e508;
        case 0x28e50cu: goto label_28e50c;
        case 0x28e510u: goto label_28e510;
        case 0x28e514u: goto label_28e514;
        case 0x28e518u: goto label_28e518;
        case 0x28e51cu: goto label_28e51c;
        case 0x28e520u: goto label_28e520;
        case 0x28e524u: goto label_28e524;
        case 0x28e528u: goto label_28e528;
        case 0x28e52cu: goto label_28e52c;
        case 0x28e530u: goto label_28e530;
        case 0x28e534u: goto label_28e534;
        case 0x28e538u: goto label_28e538;
        case 0x28e53cu: goto label_28e53c;
        case 0x28e540u: goto label_28e540;
        case 0x28e544u: goto label_28e544;
        case 0x28e548u: goto label_28e548;
        case 0x28e54cu: goto label_28e54c;
        case 0x28e550u: goto label_28e550;
        case 0x28e554u: goto label_28e554;
        case 0x28e558u: goto label_28e558;
        case 0x28e55cu: goto label_28e55c;
        case 0x28e560u: goto label_28e560;
        case 0x28e564u: goto label_28e564;
        case 0x28e568u: goto label_28e568;
        case 0x28e56cu: goto label_28e56c;
        case 0x28e570u: goto label_28e570;
        case 0x28e574u: goto label_28e574;
        case 0x28e578u: goto label_28e578;
        case 0x28e57cu: goto label_28e57c;
        case 0x28e580u: goto label_28e580;
        case 0x28e584u: goto label_28e584;
        case 0x28e588u: goto label_28e588;
        case 0x28e58cu: goto label_28e58c;
        case 0x28e590u: goto label_28e590;
        case 0x28e594u: goto label_28e594;
        case 0x28e598u: goto label_28e598;
        case 0x28e59cu: goto label_28e59c;
        case 0x28e5a0u: goto label_28e5a0;
        case 0x28e5a4u: goto label_28e5a4;
        case 0x28e5a8u: goto label_28e5a8;
        case 0x28e5acu: goto label_28e5ac;
        case 0x28e5b0u: goto label_28e5b0;
        case 0x28e5b4u: goto label_28e5b4;
        case 0x28e5b8u: goto label_28e5b8;
        case 0x28e5bcu: goto label_28e5bc;
        case 0x28e5c0u: goto label_28e5c0;
        case 0x28e5c4u: goto label_28e5c4;
        case 0x28e5c8u: goto label_28e5c8;
        case 0x28e5ccu: goto label_28e5cc;
        case 0x28e5d0u: goto label_28e5d0;
        case 0x28e5d4u: goto label_28e5d4;
        case 0x28e5d8u: goto label_28e5d8;
        case 0x28e5dcu: goto label_28e5dc;
        case 0x28e5e0u: goto label_28e5e0;
        case 0x28e5e4u: goto label_28e5e4;
        case 0x28e5e8u: goto label_28e5e8;
        case 0x28e5ecu: goto label_28e5ec;
        case 0x28e5f0u: goto label_28e5f0;
        case 0x28e5f4u: goto label_28e5f4;
        case 0x28e5f8u: goto label_28e5f8;
        case 0x28e5fcu: goto label_28e5fc;
        case 0x28e600u: goto label_28e600;
        case 0x28e604u: goto label_28e604;
        case 0x28e608u: goto label_28e608;
        case 0x28e60cu: goto label_28e60c;
        case 0x28e610u: goto label_28e610;
        case 0x28e614u: goto label_28e614;
        case 0x28e618u: goto label_28e618;
        case 0x28e61cu: goto label_28e61c;
        case 0x28e620u: goto label_28e620;
        case 0x28e624u: goto label_28e624;
        case 0x28e628u: goto label_28e628;
        case 0x28e62cu: goto label_28e62c;
        case 0x28e630u: goto label_28e630;
        case 0x28e634u: goto label_28e634;
        case 0x28e638u: goto label_28e638;
        case 0x28e63cu: goto label_28e63c;
        case 0x28e640u: goto label_28e640;
        case 0x28e644u: goto label_28e644;
        case 0x28e648u: goto label_28e648;
        case 0x28e64cu: goto label_28e64c;
        case 0x28e650u: goto label_28e650;
        case 0x28e654u: goto label_28e654;
        case 0x28e658u: goto label_28e658;
        case 0x28e65cu: goto label_28e65c;
        case 0x28e660u: goto label_28e660;
        case 0x28e664u: goto label_28e664;
        case 0x28e668u: goto label_28e668;
        case 0x28e66cu: goto label_28e66c;
        case 0x28e670u: goto label_28e670;
        case 0x28e674u: goto label_28e674;
        case 0x28e678u: goto label_28e678;
        case 0x28e67cu: goto label_28e67c;
        case 0x28e680u: goto label_28e680;
        case 0x28e684u: goto label_28e684;
        case 0x28e688u: goto label_28e688;
        case 0x28e68cu: goto label_28e68c;
        case 0x28e690u: goto label_28e690;
        case 0x28e694u: goto label_28e694;
        case 0x28e698u: goto label_28e698;
        case 0x28e69cu: goto label_28e69c;
        case 0x28e6a0u: goto label_28e6a0;
        case 0x28e6a4u: goto label_28e6a4;
        case 0x28e6a8u: goto label_28e6a8;
        case 0x28e6acu: goto label_28e6ac;
        case 0x28e6b0u: goto label_28e6b0;
        case 0x28e6b4u: goto label_28e6b4;
        case 0x28e6b8u: goto label_28e6b8;
        case 0x28e6bcu: goto label_28e6bc;
        case 0x28e6c0u: goto label_28e6c0;
        case 0x28e6c4u: goto label_28e6c4;
        case 0x28e6c8u: goto label_28e6c8;
        case 0x28e6ccu: goto label_28e6cc;
        case 0x28e6d0u: goto label_28e6d0;
        case 0x28e6d4u: goto label_28e6d4;
        case 0x28e6d8u: goto label_28e6d8;
        case 0x28e6dcu: goto label_28e6dc;
        case 0x28e6e0u: goto label_28e6e0;
        case 0x28e6e4u: goto label_28e6e4;
        case 0x28e6e8u: goto label_28e6e8;
        case 0x28e6ecu: goto label_28e6ec;
        case 0x28e6f0u: goto label_28e6f0;
        case 0x28e6f4u: goto label_28e6f4;
        case 0x28e6f8u: goto label_28e6f8;
        case 0x28e6fcu: goto label_28e6fc;
        case 0x28e700u: goto label_28e700;
        case 0x28e704u: goto label_28e704;
        case 0x28e708u: goto label_28e708;
        case 0x28e70cu: goto label_28e70c;
        case 0x28e710u: goto label_28e710;
        case 0x28e714u: goto label_28e714;
        case 0x28e718u: goto label_28e718;
        case 0x28e71cu: goto label_28e71c;
        case 0x28e720u: goto label_28e720;
        case 0x28e724u: goto label_28e724;
        case 0x28e728u: goto label_28e728;
        case 0x28e72cu: goto label_28e72c;
        case 0x28e730u: goto label_28e730;
        case 0x28e734u: goto label_28e734;
        case 0x28e738u: goto label_28e738;
        case 0x28e73cu: goto label_28e73c;
        case 0x28e740u: goto label_28e740;
        case 0x28e744u: goto label_28e744;
        case 0x28e748u: goto label_28e748;
        case 0x28e74cu: goto label_28e74c;
        case 0x28e750u: goto label_28e750;
        case 0x28e754u: goto label_28e754;
        case 0x28e758u: goto label_28e758;
        case 0x28e75cu: goto label_28e75c;
        case 0x28e760u: goto label_28e760;
        case 0x28e764u: goto label_28e764;
        case 0x28e768u: goto label_28e768;
        case 0x28e76cu: goto label_28e76c;
        case 0x28e770u: goto label_28e770;
        case 0x28e774u: goto label_28e774;
        case 0x28e778u: goto label_28e778;
        case 0x28e77cu: goto label_28e77c;
        case 0x28e780u: goto label_28e780;
        case 0x28e784u: goto label_28e784;
        case 0x28e788u: goto label_28e788;
        case 0x28e78cu: goto label_28e78c;
        case 0x28e790u: goto label_28e790;
        case 0x28e794u: goto label_28e794;
        case 0x28e798u: goto label_28e798;
        case 0x28e79cu: goto label_28e79c;
        case 0x28e7a0u: goto label_28e7a0;
        case 0x28e7a4u: goto label_28e7a4;
        case 0x28e7a8u: goto label_28e7a8;
        case 0x28e7acu: goto label_28e7ac;
        case 0x28e7b0u: goto label_28e7b0;
        case 0x28e7b4u: goto label_28e7b4;
        case 0x28e7b8u: goto label_28e7b8;
        case 0x28e7bcu: goto label_28e7bc;
        case 0x28e7c0u: goto label_28e7c0;
        case 0x28e7c4u: goto label_28e7c4;
        case 0x28e7c8u: goto label_28e7c8;
        case 0x28e7ccu: goto label_28e7cc;
        case 0x28e7d0u: goto label_28e7d0;
        case 0x28e7d4u: goto label_28e7d4;
        case 0x28e7d8u: goto label_28e7d8;
        case 0x28e7dcu: goto label_28e7dc;
        case 0x28e7e0u: goto label_28e7e0;
        case 0x28e7e4u: goto label_28e7e4;
        case 0x28e7e8u: goto label_28e7e8;
        case 0x28e7ecu: goto label_28e7ec;
        case 0x28e7f0u: goto label_28e7f0;
        case 0x28e7f4u: goto label_28e7f4;
        case 0x28e7f8u: goto label_28e7f8;
        case 0x28e7fcu: goto label_28e7fc;
        case 0x28e800u: goto label_28e800;
        case 0x28e804u: goto label_28e804;
        case 0x28e808u: goto label_28e808;
        case 0x28e80cu: goto label_28e80c;
        case 0x28e810u: goto label_28e810;
        case 0x28e814u: goto label_28e814;
        case 0x28e818u: goto label_28e818;
        case 0x28e81cu: goto label_28e81c;
        case 0x28e820u: goto label_28e820;
        case 0x28e824u: goto label_28e824;
        case 0x28e828u: goto label_28e828;
        case 0x28e82cu: goto label_28e82c;
        case 0x28e830u: goto label_28e830;
        case 0x28e834u: goto label_28e834;
        case 0x28e838u: goto label_28e838;
        case 0x28e83cu: goto label_28e83c;
        case 0x28e840u: goto label_28e840;
        case 0x28e844u: goto label_28e844;
        case 0x28e848u: goto label_28e848;
        case 0x28e84cu: goto label_28e84c;
        case 0x28e850u: goto label_28e850;
        case 0x28e854u: goto label_28e854;
        case 0x28e858u: goto label_28e858;
        case 0x28e85cu: goto label_28e85c;
        case 0x28e860u: goto label_28e860;
        case 0x28e864u: goto label_28e864;
        case 0x28e868u: goto label_28e868;
        case 0x28e86cu: goto label_28e86c;
        case 0x28e870u: goto label_28e870;
        case 0x28e874u: goto label_28e874;
        case 0x28e878u: goto label_28e878;
        case 0x28e87cu: goto label_28e87c;
        case 0x28e880u: goto label_28e880;
        case 0x28e884u: goto label_28e884;
        case 0x28e888u: goto label_28e888;
        case 0x28e88cu: goto label_28e88c;
        case 0x28e890u: goto label_28e890;
        case 0x28e894u: goto label_28e894;
        case 0x28e898u: goto label_28e898;
        case 0x28e89cu: goto label_28e89c;
        case 0x28e8a0u: goto label_28e8a0;
        case 0x28e8a4u: goto label_28e8a4;
        case 0x28e8a8u: goto label_28e8a8;
        case 0x28e8acu: goto label_28e8ac;
        case 0x28e8b0u: goto label_28e8b0;
        case 0x28e8b4u: goto label_28e8b4;
        case 0x28e8b8u: goto label_28e8b8;
        case 0x28e8bcu: goto label_28e8bc;
        case 0x28e8c0u: goto label_28e8c0;
        case 0x28e8c4u: goto label_28e8c4;
        case 0x28e8c8u: goto label_28e8c8;
        case 0x28e8ccu: goto label_28e8cc;
        case 0x28e8d0u: goto label_28e8d0;
        case 0x28e8d4u: goto label_28e8d4;
        case 0x28e8d8u: goto label_28e8d8;
        case 0x28e8dcu: goto label_28e8dc;
        case 0x28e8e0u: goto label_28e8e0;
        case 0x28e8e4u: goto label_28e8e4;
        case 0x28e8e8u: goto label_28e8e8;
        case 0x28e8ecu: goto label_28e8ec;
        case 0x28e8f0u: goto label_28e8f0;
        case 0x28e8f4u: goto label_28e8f4;
        case 0x28e8f8u: goto label_28e8f8;
        case 0x28e8fcu: goto label_28e8fc;
        case 0x28e900u: goto label_28e900;
        case 0x28e904u: goto label_28e904;
        case 0x28e908u: goto label_28e908;
        case 0x28e90cu: goto label_28e90c;
        case 0x28e910u: goto label_28e910;
        case 0x28e914u: goto label_28e914;
        case 0x28e918u: goto label_28e918;
        case 0x28e91cu: goto label_28e91c;
        case 0x28e920u: goto label_28e920;
        case 0x28e924u: goto label_28e924;
        case 0x28e928u: goto label_28e928;
        case 0x28e92cu: goto label_28e92c;
        case 0x28e930u: goto label_28e930;
        case 0x28e934u: goto label_28e934;
        case 0x28e938u: goto label_28e938;
        case 0x28e93cu: goto label_28e93c;
        case 0x28e940u: goto label_28e940;
        case 0x28e944u: goto label_28e944;
        case 0x28e948u: goto label_28e948;
        case 0x28e94cu: goto label_28e94c;
        case 0x28e950u: goto label_28e950;
        case 0x28e954u: goto label_28e954;
        case 0x28e958u: goto label_28e958;
        case 0x28e95cu: goto label_28e95c;
        case 0x28e960u: goto label_28e960;
        case 0x28e964u: goto label_28e964;
        case 0x28e968u: goto label_28e968;
        case 0x28e96cu: goto label_28e96c;
        case 0x28e970u: goto label_28e970;
        case 0x28e974u: goto label_28e974;
        case 0x28e978u: goto label_28e978;
        case 0x28e97cu: goto label_28e97c;
        case 0x28e980u: goto label_28e980;
        case 0x28e984u: goto label_28e984;
        case 0x28e988u: goto label_28e988;
        case 0x28e98cu: goto label_28e98c;
        case 0x28e990u: goto label_28e990;
        case 0x28e994u: goto label_28e994;
        case 0x28e998u: goto label_28e998;
        case 0x28e99cu: goto label_28e99c;
        case 0x28e9a0u: goto label_28e9a0;
        case 0x28e9a4u: goto label_28e9a4;
        case 0x28e9a8u: goto label_28e9a8;
        case 0x28e9acu: goto label_28e9ac;
        case 0x28e9b0u: goto label_28e9b0;
        case 0x28e9b4u: goto label_28e9b4;
        case 0x28e9b8u: goto label_28e9b8;
        case 0x28e9bcu: goto label_28e9bc;
        case 0x28e9c0u: goto label_28e9c0;
        case 0x28e9c4u: goto label_28e9c4;
        case 0x28e9c8u: goto label_28e9c8;
        case 0x28e9ccu: goto label_28e9cc;
        case 0x28e9d0u: goto label_28e9d0;
        case 0x28e9d4u: goto label_28e9d4;
        case 0x28e9d8u: goto label_28e9d8;
        case 0x28e9dcu: goto label_28e9dc;
        case 0x28e9e0u: goto label_28e9e0;
        case 0x28e9e4u: goto label_28e9e4;
        case 0x28e9e8u: goto label_28e9e8;
        case 0x28e9ecu: goto label_28e9ec;
        case 0x28e9f0u: goto label_28e9f0;
        case 0x28e9f4u: goto label_28e9f4;
        case 0x28e9f8u: goto label_28e9f8;
        case 0x28e9fcu: goto label_28e9fc;
        case 0x28ea00u: goto label_28ea00;
        case 0x28ea04u: goto label_28ea04;
        case 0x28ea08u: goto label_28ea08;
        case 0x28ea0cu: goto label_28ea0c;
        case 0x28ea10u: goto label_28ea10;
        case 0x28ea14u: goto label_28ea14;
        case 0x28ea18u: goto label_28ea18;
        case 0x28ea1cu: goto label_28ea1c;
        case 0x28ea20u: goto label_28ea20;
        case 0x28ea24u: goto label_28ea24;
        case 0x28ea28u: goto label_28ea28;
        case 0x28ea2cu: goto label_28ea2c;
        case 0x28ea30u: goto label_28ea30;
        case 0x28ea34u: goto label_28ea34;
        case 0x28ea38u: goto label_28ea38;
        case 0x28ea3cu: goto label_28ea3c;
        case 0x28ea40u: goto label_28ea40;
        case 0x28ea44u: goto label_28ea44;
        case 0x28ea48u: goto label_28ea48;
        case 0x28ea4cu: goto label_28ea4c;
        case 0x28ea50u: goto label_28ea50;
        case 0x28ea54u: goto label_28ea54;
        case 0x28ea58u: goto label_28ea58;
        case 0x28ea5cu: goto label_28ea5c;
        case 0x28ea60u: goto label_28ea60;
        case 0x28ea64u: goto label_28ea64;
        case 0x28ea68u: goto label_28ea68;
        case 0x28ea6cu: goto label_28ea6c;
        case 0x28ea70u: goto label_28ea70;
        case 0x28ea74u: goto label_28ea74;
        case 0x28ea78u: goto label_28ea78;
        case 0x28ea7cu: goto label_28ea7c;
        case 0x28ea80u: goto label_28ea80;
        case 0x28ea84u: goto label_28ea84;
        case 0x28ea88u: goto label_28ea88;
        case 0x28ea8cu: goto label_28ea8c;
        default: return;
    }

label_28e2c0:
    // 0x28e2c0: 0x400000  .word       0x00400000                   # sll         $zero, $zero, 0 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28e2c0u;
    // NOP
label_28e2c4:
    // 0x28e2c4: 0x0  nop
    ctx->pc = 0x28e2c4u;
    // NOP
label_28e2c8:
    // 0x28e2c8: 0x0  nop
    ctx->pc = 0x28e2c8u;
    // NOP
label_28e2cc:
    // 0x28e2cc: 0x0  nop
    ctx->pc = 0x28e2ccu;
    // NOP
label_28e2d0:
    // 0x28e2d0: 0x0  nop
    ctx->pc = 0x28e2d0u;
    // NOP
label_28e2d4:
    // 0x28e2d4: 0x0  nop
    ctx->pc = 0x28e2d4u;
    // NOP
label_28e2d8:
    // 0x28e2d8: 0x0  nop
    ctx->pc = 0x28e2d8u;
    // NOP
label_28e2dc:
    // 0x28e2dc: 0x0  nop
    ctx->pc = 0x28e2dcu;
    // NOP
label_28e2e0:
    // 0x28e2e0: 0x0  nop
    ctx->pc = 0x28e2e0u;
    // NOP
label_28e2e4:
    // 0x28e2e4: 0x0  nop
    ctx->pc = 0x28e2e4u;
    // NOP
label_28e2e8:
    // 0x28e2e8: 0x0  nop
    ctx->pc = 0x28e2e8u;
    // NOP
label_28e2ec:
    // 0x28e2ec: 0x0  nop
    ctx->pc = 0x28e2ecu;
    // NOP
label_28e2f0:
    // 0x28e2f0: 0x70e00838  .word       0x70E00838                   # INVALID     $a3, $zero, 0x838 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x28e2f0u;
// //     throw std::runtime_error("Unhandled MMI instruction: function 0x38 at 0x28E2F0 raw=0x70E00838"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28e2f4:
    // 0x28e2f4: 0x0  nop
    ctx->pc = 0x28e2f4u;
    // NOP
label_28e2f8:
    // 0x28e2f8: 0x70e00838  .word       0x70E00838                   # INVALID     $a3, $zero, 0x838 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x28e2f8u;
// //     throw std::runtime_error("Unhandled MMI instruction: function 0x38 at 0x28E2F8 raw=0x70E00838"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28e2fc:
    // 0x28e2fc: 0x0  nop
    ctx->pc = 0x28e2fcu;
    // NOP
label_28e300:
    // 0x28e300: 0x0  nop
    ctx->pc = 0x28e300u;
    // NOP
label_28e304:
    // 0x28e304: 0x0  nop
    ctx->pc = 0x28e304u;
    // NOP
label_28e308:
    // 0x28e308: 0x0  nop
    ctx->pc = 0x28e308u;
    // NOP
label_28e30c:
    // 0x28e30c: 0x0  nop
    ctx->pc = 0x28e30cu;
    // NOP
label_28e310:
    // 0x28e310: 0x0  nop
    ctx->pc = 0x28e310u;
    // NOP
label_28e314:
    // 0x28e314: 0x0  nop
    ctx->pc = 0x28e314u;
    // NOP
label_28e318:
    // 0x28e318: 0x0  nop
    ctx->pc = 0x28e318u;
    // NOP
label_28e31c:
    // 0x28e31c: 0x0  nop
    ctx->pc = 0x28e31cu;
    // NOP
label_28e320:
    // 0x28e320: 0x70e00838  .word       0x70E00838                   # INVALID     $a3, $zero, 0x838 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x28e320u;
// //     throw std::runtime_error("Unhandled MMI instruction: function 0x38 at 0x28E320 raw=0x70E00838"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28e324:
    // 0x28e324: 0x0  nop
    ctx->pc = 0x28e324u;
    // NOP
label_28e328:
    // 0x28e328: 0x0  nop
    ctx->pc = 0x28e328u;
    // NOP
label_28e32c:
    // 0x28e32c: 0x0  nop
    ctx->pc = 0x28e32cu;
    // NOP
label_28e330:
    // 0x28e330: 0x0  nop
    ctx->pc = 0x28e330u;
    // NOP
label_28e334:
    // 0x28e334: 0x0  nop
    ctx->pc = 0x28e334u;
    // NOP
label_28e338:
    // 0x28e338: 0x70e00838  .word       0x70E00838                   # INVALID     $a3, $zero, 0x838 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x28e338u;
// //     throw std::runtime_error("Unhandled MMI instruction: function 0x38 at 0x28E338 raw=0x70E00838"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28e33c:
    // 0x28e33c: 0x0  nop
    ctx->pc = 0x28e33cu;
    // NOP
label_28e340:
    // 0x28e340: 0x0  nop
    ctx->pc = 0x28e340u;
    // NOP
label_28e344:
    // 0x28e344: 0x0  nop
    ctx->pc = 0x28e344u;
    // NOP
label_28e348:
    // 0x28e348: 0x0  nop
    ctx->pc = 0x28e348u;
    // NOP
label_28e34c:
    // 0x28e34c: 0x0  nop
    ctx->pc = 0x28e34cu;
    // NOP
label_28e350:
    // 0x28e350: 0x0  nop
    ctx->pc = 0x28e350u;
    // NOP
label_28e354:
    // 0x28e354: 0x0  nop
    ctx->pc = 0x28e354u;
    // NOP
label_28e358:
    // 0x28e358: 0x0  nop
    ctx->pc = 0x28e358u;
    // NOP
label_28e35c:
    // 0x28e35c: 0x0  nop
    ctx->pc = 0x28e35cu;
    // NOP
label_28e360:
    // 0x28e360: 0x0  nop
    ctx->pc = 0x28e360u;
    // NOP
label_28e364:
    // 0x28e364: 0x0  nop
    ctx->pc = 0x28e364u;
    // NOP
label_28e368:
    // 0x28e368: 0x0  nop
    ctx->pc = 0x28e368u;
    // NOP
label_28e36c:
    // 0x28e36c: 0x0  nop
    ctx->pc = 0x28e36cu;
    // NOP
label_28e370:
    // 0x28e370: 0x8020c80e  lb          $zero, -0x37F2($at)
    ctx->pc = 0x28e370u;
    SET_GPR_S32(ctx, 0, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294952974)));
label_28e374:
    // 0x28e374: 0x0  nop
    ctx->pc = 0x28e374u;
    // NOP
label_28e378:
    // 0x28e378: 0x0  nop
    ctx->pc = 0x28e378u;
    // NOP
label_28e37c:
    // 0x28e37c: 0x0  nop
    ctx->pc = 0x28e37cu;
    // NOP
label_28e380:
    // 0x28e380: 0x480e  .word       0x0000480E                   # INVALID     $zero, $zero, 0x480E # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28e380u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x28E380 raw=0x0000480E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28e384:
    // 0x28e384: 0x0  nop
    ctx->pc = 0x28e384u;
    // NOP
label_28e388:
    // 0x28e388: 0x400000  .word       0x00400000                   # sll         $zero, $zero, 0 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28e388u;
    // NOP
label_28e38c:
    // 0x28e38c: 0x0  nop
    ctx->pc = 0x28e38cu;
    // NOP
label_28e390:
    // 0x28e390: 0x1200  sll         $v0, $zero, 8
    ctx->pc = 0x28e390u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 0), 8));
label_28e394:
    // 0x28e394: 0x0  nop
    ctx->pc = 0x28e394u;
    // NOP
label_28e398:
    // 0x28e398: 0x80008000  lb          $zero, -0x8000($zero)
    ctx->pc = 0x28e398u;
    SET_GPR_S32(ctx, 0, (int8_t)runtime->Load8(rdram, ctx, 0xFFFF8000u));
label_28e39c:
    // 0x28e39c: 0x21  addu        $zero, $zero, $zero
    ctx->pc = 0x28e39cu;
    SET_GPR_S32(ctx, 0, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_28e3a0:
    // 0x28e3a0: 0x4007  srav        $t0, $zero, $zero
    ctx->pc = 0x28e3a0u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_28e3a4:
    // 0x28e3a4: 0x0  nop
    ctx->pc = 0x28e3a4u;
    // NOP
label_28e3a8:
    // 0x28e3a8: 0x0  nop
    ctx->pc = 0x28e3a8u;
    // NOP
label_28e3ac:
    // 0x28e3ac: 0x0  nop
    ctx->pc = 0x28e3acu;
    // NOP
label_28e3b0:
    // 0x28e3b0: 0x20000428  addi        $zero, $zero, 0x428
    ctx->pc = 0x28e3b0u;
    // NOP (addi to $zero)
label_28e3b4:
    // 0x28e3b4: 0x0  nop
    ctx->pc = 0x28e3b4u;
    // NOP
label_28e3b8:
    // 0x28e3b8: 0x1060082a  beqz        $v1, . + 4 + (0x82A << 2)
label_28e3bc:
    if (ctx->pc == 0x28E3BCu) {
        ctx->pc = 0x28E3C0u;
        goto label_28e3c0;
    }
    ctx->pc = 0x28E3B8u;
    {
        const bool branch_taken_0x28e3b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x28e3b8) {
            ctx->pc = 0x290464u;
            { ctx->pc = 0x290464; return; }
        }
    }
    ctx->pc = 0x28E3C0u;
label_28e3c0:
    // 0x28e3c0: 0x82400000  lb          $zero, 0x0($s2)
    ctx->pc = 0x28e3c0u;
    SET_GPR_S32(ctx, 0, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_28e3c4:
    // 0x28e3c4: 0x0  nop
    ctx->pc = 0x28e3c4u;
    // NOP
label_28e3c8:
    // 0x28e3c8: 0x0  nop
    ctx->pc = 0x28e3c8u;
    // NOP
label_28e3cc:
    // 0x28e3cc: 0x0  nop
    ctx->pc = 0x28e3ccu;
    // NOP
label_28e3d0:
    // 0x28e3d0: 0x6  srlv        $zero, $zero, $zero
    ctx->pc = 0x28e3d0u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_28e3d4:
    // 0x28e3d4: 0x0  nop
    ctx->pc = 0x28e3d4u;
    // NOP
label_28e3d8:
    // 0x28e3d8: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x28e3d8u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_28e3dc:
    // 0x28e3dc: 0x0  nop
    ctx->pc = 0x28e3dcu;
    // NOP
label_28e3e0:
    // 0x28e3e0: 0x20044006  addi        $a0, $zero, 0x4006
    ctx->pc = 0x28e3e0u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 0), (int32_t)16390, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
label_28e3e4:
    // 0x28e3e4: 0x0  nop
    ctx->pc = 0x28e3e4u;
    // NOP
label_28e3e8:
    // 0x28e3e8: 0x400  sll         $zero, $zero, 16
    ctx->pc = 0x28e3e8u;
    
label_28e3ec:
    // 0x28e3ec: 0x0  nop
    ctx->pc = 0x28e3ecu;
    // NOP
label_28e3f0:
    // 0x28e3f0: 0x1000100  .word       0x01000100                   # sll         $zero, $zero, 4 # 01000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28e3f0u;
    
label_28e3f4:
    // 0x28e3f4: 0x0  nop
    ctx->pc = 0x28e3f4u;
    // NOP
label_28e3f8:
    // 0x28e3f8: 0x0  nop
    ctx->pc = 0x28e3f8u;
    // NOP
label_28e3fc:
    // 0x28e3fc: 0x0  nop
    ctx->pc = 0x28e3fcu;
    // NOP
label_28e400:
    // 0x28e400: 0x4c84b  .word       0x0004C84B                   # movn        $t9, $zero, $a0 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28e400u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 25, GPR_VEC(ctx, 0));
label_28e404:
    // 0x28e404: 0x0  nop
    ctx->pc = 0x28e404u;
    // NOP
label_28e408:
    // 0x28e408: 0x40000000  mfc0        $zero, Index
    ctx->pc = 0x28e408u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_28e40c:
    // 0x28e40c: 0x0  nop
    ctx->pc = 0x28e40cu;
    // NOP
label_28e410:
    // 0x28e410: 0x4400  sll         $t0, $zero, 16
    ctx->pc = 0x28e410u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 16));
label_28e414:
    // 0x28e414: 0x0  nop
    ctx->pc = 0x28e414u;
    // NOP
label_28e418:
    // 0x28e418: 0x80004  sllv        $zero, $t0, $zero
    ctx->pc = 0x28e418u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 0) & 0x1F));
label_28e41c:
    // 0x28e41c: 0x0  nop
    ctx->pc = 0x28e41cu;
    // NOP
label_28e420:
    // 0x28e420: 0x3000100  .word       0x03000100                   # sll         $zero, $zero, 4 # 03000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28e420u;
    
label_28e424:
    // 0x28e424: 0x0  nop
    ctx->pc = 0x28e424u;
    // NOP
label_28e428:
    // 0x28e428: 0x0  nop
    ctx->pc = 0x28e428u;
    // NOP
label_28e42c:
    // 0x28e42c: 0x0  nop
    ctx->pc = 0x28e42cu;
    // NOP
label_28e430:
    // 0x28e430: 0x0  nop
    ctx->pc = 0x28e430u;
    // NOP
label_28e434:
    // 0x28e434: 0x0  nop
    ctx->pc = 0x28e434u;
    // NOP
label_28e438:
    // 0x28e438: 0x3010180  .word       0x03010180                   # sll         $zero, $at, 6 # 03000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28e438u;
    
label_28e43c:
    // 0x28e43c: 0x0  nop
    ctx->pc = 0x28e43cu;
    // NOP
label_28e440:
    // 0x28e440: 0x104401  .word       0x00104401                   # INVALID     $zero, $s0, 0x4401 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28e440u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x28E440 raw=0x00104401"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28e444:
    // 0x28e444: 0x0  nop
    ctx->pc = 0x28e444u;
    // NOP
label_28e448:
    // 0x28e448: 0x100001  .word       0x00100001                   # INVALID     $zero, $s0, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28e448u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x28E448 raw=0x00100001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28e44c:
    // 0x28e44c: 0x0  nop
    ctx->pc = 0x28e44cu;
    // NOP
label_28e450:
    // 0x28e450: 0x400  sll         $zero, $zero, 16
    ctx->pc = 0x28e450u;
    
label_28e454:
    // 0x28e454: 0x0  nop
    ctx->pc = 0x28e454u;
    // NOP
label_28e458:
    // 0x28e458: 0x2000480  .word       0x02000480                   # sll         $zero, $zero, 18 # 02000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28e458u;
    
label_28e45c:
    // 0x28e45c: 0x0  nop
    ctx->pc = 0x28e45cu;
    // NOP
label_28e460:
    // 0x28e460: 0x400  sll         $zero, $zero, 16
    ctx->pc = 0x28e460u;
    
label_28e464:
    // 0x28e464: 0x18  mult        $zero, $zero, $zero
    ctx->pc = 0x28e464u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_28e468:
    // 0x28e468: 0x86400  sll         $t4, $t0, 16
    ctx->pc = 0x28e468u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 8), 16));
label_28e46c:
    // 0x28e46c: 0x0  nop
    ctx->pc = 0x28e46cu;
    // NOP
label_28e470:
    // 0x28e470: 0x50e00038  beql        $a3, $zero, . + 4 + (0x38 << 2)
label_28e474:
    if (ctx->pc == 0x28E474u) {
        ctx->pc = 0x28E478u;
        goto label_28e478;
    }
    ctx->pc = 0x28E470u;
    {
        const bool branch_taken_0x28e470 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x28e470) {
            ctx->pc = 0x28E554u;
            goto label_28e554;
        }
    }
    ctx->pc = 0x28E478u;
label_28e478:
    // 0x28e478: 0x2080  sll         $a0, $zero, 2
    ctx->pc = 0x28e478u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 0), 2));
label_28e47c:
    // 0x28e47c: 0x61  .word       0x00000061                   # addu        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28e47cu;
    SET_GPR_S32(ctx, 0, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_28e480:
    // 0x28e480: 0x3000000  .word       0x03000000                   # sll         $zero, $zero, 0 # 03000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28e480u;
    // NOP
label_28e484:
    // 0x28e484: 0x0  nop
    ctx->pc = 0x28e484u;
    // NOP
label_28e488:
    // 0x28e488: 0xc00  sll         $at, $zero, 16
    ctx->pc = 0x28e488u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 16));
label_28e48c:
    // 0x28e48c: 0x0  nop
    ctx->pc = 0x28e48cu;
    // NOP
label_28e490:
    // 0x28e490: 0x0  nop
    ctx->pc = 0x28e490u;
    // NOP
label_28e494:
    // 0x28e494: 0x0  nop
    ctx->pc = 0x28e494u;
    // NOP
label_28e498:
    // 0x28e498: 0x6  srlv        $zero, $zero, $zero
    ctx->pc = 0x28e498u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_28e49c:
    // 0x28e49c: 0x0  nop
    ctx->pc = 0x28e49cu;
    // NOP
label_28e4a0:
    // 0x28e4a0: 0x0  nop
    ctx->pc = 0x28e4a0u;
    // NOP
label_28e4a4:
    // 0x28e4a4: 0x0  nop
    ctx->pc = 0x28e4a4u;
    // NOP
label_28e4a8:
    // 0x28e4a8: 0x0  nop
    ctx->pc = 0x28e4a8u;
    // NOP
label_28e4ac:
    // 0x28e4ac: 0x0  nop
    ctx->pc = 0x28e4acu;
    // NOP
label_28e4b0:
    // 0x28e4b0: 0x10  mfhi        $zero
    ctx->pc = 0x28e4b0u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_28e4b4:
    // 0x28e4b4: 0x0  nop
    ctx->pc = 0x28e4b4u;
    // NOP
label_28e4b8:
    // 0x28e4b8: 0x2000140  .word       0x02000140                   # sll         $zero, $zero, 5 # 02000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28e4b8u;
    
label_28e4bc:
    // 0x28e4bc: 0x40  sll         $zero, $zero, 1
    ctx->pc = 0x28e4bcu;
    
label_28e4c0:
    // 0x28e4c0: 0x1010101  .word       0x01010101                   # INVALID     $t0, $at, 0x101 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28e4c0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x28E4C0 raw=0x01010101"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28e4c4:
    // 0x28e4c4: 0x1010101  .word       0x01010101                   # INVALID     $t0, $at, 0x101 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28e4c4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x28E4C4 raw=0x01010101"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28e4c8:
    // 0x28e4c8: 0x1010101  .word       0x01010101                   # INVALID     $t0, $at, 0x101 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28e4c8u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x28E4C8 raw=0x01010101"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28e4cc:
    // 0x28e4cc: 0x1010101  .word       0x01010101                   # INVALID     $t0, $at, 0x101 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28e4ccu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x28E4CC raw=0x01010101"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28e4d0:
    // 0x28e4d0: 0x1010101  .word       0x01010101                   # INVALID     $t0, $at, 0x101 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28e4d0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x28E4D0 raw=0x01010101"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28e4d4:
    // 0x28e4d4: 0x1010101  .word       0x01010101                   # INVALID     $t0, $at, 0x101 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28e4d4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x28E4D4 raw=0x01010101"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28e4d8:
    // 0x28e4d8: 0x1010101  .word       0x01010101                   # INVALID     $t0, $at, 0x101 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28e4d8u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x28E4D8 raw=0x01010101"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28e4dc:
    // 0x28e4dc: 0x1010101  .word       0x01010101                   # INVALID     $t0, $at, 0x101 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28e4dcu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x28E4DC raw=0x01010101"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28e4e0:
    // 0x28e4e0: 0x1010101  .word       0x01010101                   # INVALID     $t0, $at, 0x101 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28e4e0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x28E4E0 raw=0x01010101"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28e4e4:
    // 0x28e4e4: 0x1010101  .word       0x01010101                   # INVALID     $t0, $at, 0x101 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28e4e4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x28E4E4 raw=0x01010101"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28e4e8:
    // 0x28e4e8: 0x101  .word       0x00000101                   # INVALID     $zero, $zero, 0x101 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28e4e8u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x28E4E8 raw=0x00000101"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28e4ec:
    // 0x28e4ec: 0x0  nop
    ctx->pc = 0x28e4ecu;
    // NOP
label_28e4f0:
    // 0x28e4f0: 0x2317211b  addi        $s7, $t8, 0x211B
    ctx->pc = 0x28e4f0u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 24), (int32_t)8475, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 23, (int32_t)tmp); }
label_28e4f4:
    // 0x28e4f4: 0x110c1503  beq         $t0, $t4, . + 4 + (0x1503 << 2)
label_28e4f8:
    if (ctx->pc == 0x28E4F8u) {
        ctx->pc = 0x28E4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E4F4u;
        // 0x28e4f8: 0x29292909  slti        $t1, $t1, 0x2909 (Delay Slot)
        SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)10505) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E4FCu;
        goto label_28e4fc;
    }
    ctx->pc = 0x28E4F4u;
    {
        const bool branch_taken_0x28e4f4 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 12));
        ctx->pc = 0x28E4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E4F4u;
        // 0x28e4f8: 0x29292909  slti        $t1, $t1, 0x2909 (Delay Slot)
        SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)10505) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e4f4) {
            ctx->pc = 0x293904u;
            { ctx->pc = 0x293904; return; }
        }
    }
    ctx->pc = 0x28E4FCu;
label_28e4fc:
    // 0x28e4fc: 0x29190d24  slti        $t9, $t0, 0xD24
    ctx->pc = 0x28e4fcu;
    SET_GPR_U64(ctx, 25, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)3364) ? 1 : 0);
label_28e500:
    // 0x28e500: 0x90c2929  j           func_430A4A4
label_28e504:
    if (ctx->pc == 0x28E504u) {
        ctx->pc = 0x28E504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E500u;
        // 0x28e504: 0x2929291f  slti        $t1, $t1, 0x291F (Delay Slot)
        SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)10527) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E508u;
        goto label_28e508;
    }
    ctx->pc = 0x28E500u;
    ctx->pc = 0x28E504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E500u;
    // 0x28e504: 0x2929291f  slti        $t1, $t1, 0x291F (Delay Slot)
    SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)10527) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x430A4A4u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430A4A4u, 0x28E500u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x28E508u;
label_28e508:
    // 0x28e508: 0x12292929  beq         $s1, $t1, . + 4 + (0x2929 << 2)
label_28e50c:
    if (ctx->pc == 0x28E50Cu) {
        ctx->pc = 0x28E50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E508u;
        // 0x28e50c: 0x29291302  slti        $t1, $t1, 0x1302 (Delay Slot)
        SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)4866) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E510u;
        goto label_28e510;
    }
    ctx->pc = 0x28E508u;
    {
        const bool branch_taken_0x28e508 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 9));
        ctx->pc = 0x28E50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E508u;
        // 0x28e50c: 0x29291302  slti        $t1, $t1, 0x1302 (Delay Slot)
        SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)4866) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e508) {
            ctx->pc = 0x2989B0u;
            { ctx->pc = 0x2989b0; return; }
        }
    }
    ctx->pc = 0x28E510u;
label_28e510:
    // 0x28e510: 0x29292929  slti        $t1, $t1, 0x2929
    ctx->pc = 0x28e510u;
    SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)10537) ? 1 : 0);
label_28e514:
    // 0x28e514: 0x29292929  slti        $t1, $t1, 0x2929
    ctx->pc = 0x28e514u;
    SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)10537) ? 1 : 0);
label_28e518:
    // 0x28e518: 0x29292929  slti        $t1, $t1, 0x2929
    ctx->pc = 0x28e518u;
    SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)10537) ? 1 : 0);
label_28e51c:
    // 0x28e51c: 0x7242329  .word       0x07242329                   # INVALID     $t9, $a0, 0x2329 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x28e51cu;
//     throw std::runtime_error("Unhandled REGIMM instruction: 0x4 at 0x28E51C raw=0x07242329");
 /* MITIGATED */
label_28e520:
    // 0x28e520: 0x2925200c  slti        $a1, $t1, 0x200C
    ctx->pc = 0x28e520u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)8204) ? 1 : 0);
label_28e524:
    // 0x28e524: 0x29292929  slti        $t1, $t1, 0x2929
    ctx->pc = 0x28e524u;
    SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)10537) ? 1 : 0);
label_28e528:
    // 0x28e528: 0x141a2329  bne         $zero, $k0, . + 4 + (0x2329 << 2)
label_28e52c:
    if (ctx->pc == 0x28E52Cu) {
        ctx->pc = 0x28E52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E528u;
        // 0x28e52c: 0x11050423  beq         $t0, $a1, . + 4 + (0x423 << 2) (Delay Slot)
        // Likely branch instruction at 0x28E52C - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E530u;
        goto label_28e530;
    }
    ctx->pc = 0x28E528u;
    {
        const bool branch_taken_0x28e528 = (GPR_U64(ctx, 0) != GPR_U64(ctx, 26));
        ctx->pc = 0x28E52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E528u;
        // 0x28e52c: 0x11050423  beq         $t0, $a1, . + 4 + (0x423 << 2) (Delay Slot)
        // Likely branch instruction at 0x28E52C - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e528) {
            ctx->pc = 0x2971D0u;
            { ctx->pc = 0x2971d0; return; }
        }
    }
    ctx->pc = 0x28E530u;
label_28e530:
    // 0x28e530: 0xe112606  jal         func_8449818
label_28e534:
    if (ctx->pc == 0x28E534u) {
        ctx->pc = 0x28E534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E530u;
        // 0x28e534: 0x2929290a  slti        $t1, $t1, 0x290A (Delay Slot)
        SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)10506) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E538u;
        goto label_28e538;
    }
    ctx->pc = 0x28E530u;
    SET_GPR_U32(ctx, 31, 0x28E538u);
    ctx->pc = 0x28E534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E530u;
    // 0x28e534: 0x2929290a  slti        $t1, $t1, 0x290A (Delay Slot)
    SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)10506) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x8449818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x8449818u, 0x28E530u, 0x28E538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E538u;
label_28e538:
    // 0x28e538: 0x121c0024  beq         $s0, $gp, . + 4 + (0x24 << 2)
label_28e53c:
    if (ctx->pc == 0x28E53Cu) {
        ctx->pc = 0x28E53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E538u;
        // 0x28e53c: 0x2929221d  slti        $t1, $t1, 0x221D (Delay Slot)
        SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)8733) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E540u;
        goto label_28e540;
    }
    ctx->pc = 0x28E538u;
    {
        const bool branch_taken_0x28e538 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 28));
        ctx->pc = 0x28E53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E538u;
        // 0x28e53c: 0x2929221d  slti        $t1, $t1, 0x221D (Delay Slot)
        SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)8733) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e538) {
            ctx->pc = 0x28E5CCu;
            goto label_28e5cc;
        }
    }
    ctx->pc = 0x28E540u;
label_28e540:
    // 0x28e540: 0x29292929  slti        $t1, $t1, 0x2929
    ctx->pc = 0x28e540u;
    SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)10537) ? 1 : 0);
label_28e544:
    // 0x28e544: 0x23292929  addi        $t1, $t9, 0x2929
    ctx->pc = 0x28e544u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 25), (int32_t)10537, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 9, (int32_t)tmp); }
label_28e548:
    // 0x28e548: 0x29290b24  slti        $t1, $t1, 0xB24
    ctx->pc = 0x28e548u;
    SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)2852) ? 1 : 0);
label_28e54c:
    // 0x28e54c: 0xf242329  jal         func_C908CA4
label_28e550:
    if (ctx->pc == 0x28E550u) {
        ctx->pc = 0x28E550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E54Cu;
        // 0x28e550: 0x291e1d12  slti        $fp, $t0, 0x1D12 (Delay Slot)
        SET_GPR_U64(ctx, 30, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)7442) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E554u;
        goto label_28e554;
    }
    ctx->pc = 0x28E54Cu;
    SET_GPR_U32(ctx, 31, 0x28E554u);
    ctx->pc = 0x28E550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E54Cu;
    // 0x28e550: 0x291e1d12  slti        $fp, $t0, 0x1D12 (Delay Slot)
    SET_GPR_U64(ctx, 30, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)7442) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0xC908CA4u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xC908CA4u, 0x28E54Cu, 0x28E554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E554u;
label_28e554:
    // 0x28e554: 0x90c2929  j           func_430A4A4
label_28e558:
    if (ctx->pc == 0x28E558u) {
        ctx->pc = 0x28E558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E554u;
        // 0x28e558: 0x29292916  slti        $t1, $t1, 0x2916 (Delay Slot)
        SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)10518) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E55Cu;
        goto label_28e55c;
    }
    ctx->pc = 0x28E554u;
    ctx->pc = 0x28E558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E554u;
    // 0x28e558: 0x29292916  slti        $t1, $t1, 0x2916 (Delay Slot)
    SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)10518) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x430A4A4u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430A4A4u, 0x28E554u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x28E55Cu;
label_28e55c:
    // 0x28e55c: 0x29292929  slti        $t1, $t1, 0x2929
    ctx->pc = 0x28e55cu;
    SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)10537) ? 1 : 0);
label_28e560:
    // 0x28e560: 0x18122929  .word       0x18122929                   # blez        $zero, . + 4 + (0x2929 << 2) # 00120000 <InstrIdType: CPU_NORMAL>
label_28e564:
    if (ctx->pc == 0x28E564u) {
        ctx->pc = 0x28E564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E560u;
        // 0x28e564: 0x29292908  slti        $t1, $t1, 0x2908 (Delay Slot)
        SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)10504) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E568u;
        goto label_28e568;
    }
    ctx->pc = 0x28E560u;
    {
        const bool branch_taken_0x28e560 = (GPR_S32(ctx, 0) <= 0);
        ctx->pc = 0x28E564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E560u;
        // 0x28e564: 0x29292908  slti        $t1, $t1, 0x2908 (Delay Slot)
        SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)10504) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e560) {
            ctx->pc = 0x298A08u;
            { ctx->pc = 0x298a08; return; }
        }
    }
    ctx->pc = 0x28E568u;
label_28e568:
    // 0x28e568: 0x29292929  slti        $t1, $t1, 0x2929
    ctx->pc = 0x28e568u;
    SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)10537) ? 1 : 0);
label_28e56c:
    // 0x28e56c: 0x2929  .word       0x00002929                   # mtsa        $zero # 00002900 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x28e56cu;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_28e570:
    // 0x28e570: 0x504030e  .word       0x0504030E                   # INVALID     $t0, $a0, 0x30E # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x28e570u;
//     throw std::runtime_error("Unhandled REGIMM instruction: 0x4 at 0x28E570 raw=0x0504030E");
 /* MITIGATED */
label_28e574:
    // 0x28e574: 0x9080706  j           func_4201C18
label_28e578:
    if (ctx->pc == 0x28E578u) {
        ctx->pc = 0x28E578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E574u;
        // 0x28e578: 0xd0c0b0a  jal         func_4302C28 (Delay Slot)
        // JAL 0x4302C28 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E57Cu;
        goto label_28e57c;
    }
    ctx->pc = 0x28E574u;
    ctx->pc = 0x28E578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E574u;
    // 0x28e578: 0xd0c0b0a  jal         func_4302C28 (Delay Slot)
    // JAL 0x4302C28 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x4201C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4201C18u, 0x28E574u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x28E57Cu;
label_28e57c:
    // 0x28e57c: 0x150f0e  .word       0x00150F0E                   # INVALID     $zero, $s5, 0xF0E # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28e57cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x28E57C raw=0x00150F0E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28e580:
    // 0x28e580: 0x0  nop
    ctx->pc = 0x28e580u;
    // NOP
label_28e584:
    // 0x28e584: 0x0  nop
    ctx->pc = 0x28e584u;
    // NOP
label_28e588:
    // 0x28e588: 0x0  nop
    ctx->pc = 0x28e588u;
    // NOP
label_28e58c:
    // 0x28e58c: 0x2d0400  .word       0x002D0400                   # sll         $zero, $t5, 16 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28e58cu;
    
label_28e590:
    // 0x28e590: 0x0  nop
    ctx->pc = 0x28e590u;
    // NOP
label_28e594:
    // 0x28e594: 0x2d0408  .word       0x002D0408                   # jr          $at # 000D0400 <InstrIdType: CPU_SPECIAL>
label_28e598:
    if (ctx->pc == 0x28E598u) {
        ctx->pc = 0x28E59Cu;
        goto label_28e59c;
    }
    ctx->pc = 0x28E594u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28E594u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x28E59Cu;
label_28e59c:
    // 0x28e59c: 0x0  nop
    ctx->pc = 0x28e59cu;
    // NOP
label_28e5a0:
    // 0x28e5a0: 0x28e570  tge         $at, $t0, 917
    ctx->pc = 0x28e5a0u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 8)) { runtime->handleTrap(rdram, ctx); }
label_28e5a4:
    // 0x28e5a4: 0x0  nop
    ctx->pc = 0x28e5a4u;
    // NOP
label_28e5a8:
    // 0x28e5a8: 0x0  nop
    ctx->pc = 0x28e5a8u;
    // NOP
label_28e5ac:
    // 0x28e5ac: 0x0  nop
    ctx->pc = 0x28e5acu;
    // NOP
label_28e5b0:
    // 0x28e5b0: 0x0  nop
    ctx->pc = 0x28e5b0u;
    // NOP
label_28e5b4:
    // 0x28e5b4: 0x0  nop
    ctx->pc = 0x28e5b4u;
    // NOP
label_28e5b8:
    // 0x28e5b8: 0x2d0410  .word       0x002D0410                   # mfhi        $zero # 002D0400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28e5b8u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_28e5bc:
    // 0x28e5bc: 0x0  nop
    ctx->pc = 0x28e5bcu;
    // NOP
label_28e5c0:
    // 0x28e5c0: 0x0  nop
    ctx->pc = 0x28e5c0u;
    // NOP
label_28e5c4:
    // 0x28e5c4: 0x0  nop
    ctx->pc = 0x28e5c4u;
    // NOP
label_28e5c8:
    // 0x28e5c8: 0x2d0414  .word       0x002D0414                   # dsllv       $zero, $t5, $at # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28e5c8u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 13) << (GPR_U32(ctx, 1) & 0x3F));
label_28e5cc:
    // 0x28e5cc: 0x0  nop
    ctx->pc = 0x28e5ccu;
    // NOP
label_28e5d0:
    // 0x28e5d0: 0x0  nop
    ctx->pc = 0x28e5d0u;
    // NOP
label_28e5d4:
    // 0x28e5d4: 0x0  nop
    ctx->pc = 0x28e5d4u;
    // NOP
label_28e5d8:
    // 0x28e5d8: 0x0  nop
    ctx->pc = 0x28e5d8u;
    // NOP
label_28e5dc:
    // 0x28e5dc: 0x0  nop
    ctx->pc = 0x28e5dcu;
    // NOP
label_28e5e0:
    // 0x28e5e0: 0x47814c00  .word       0x47814C00                   # INVALID     $gp, $at, 0x4C00 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28e5e0u;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x1C, function 0x0 at 0x28E5E0 raw=0x47814C00"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28e5e4:
    // 0x28e5e4: 0xc54fd000  lwc1        $f15, -0x3000($t2)
    ctx->pc = 0x28e5e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 4294955008)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
label_28e5e8:
    // 0x28e5e8: 0x46d09800  .word       0x46D09800                   # INVALID     $s6, $s0, -0x6800 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28e5e8u;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x16, function 0x0 at 0x28E5E8 raw=0x46D09800"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28e5ec:
    // 0x28e5ec: 0x47824600  .word       0x47824600                   # INVALID     $gp, $v0, 0x4600 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28e5ecu;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x1C, function 0x0 at 0x28E5EC raw=0x47824600"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28e5f0:
    // 0x28e5f0: 0xc54fd000  lwc1        $f15, -0x3000($t2)
    ctx->pc = 0x28e5f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 4294955008)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
label_28e5f4:
    // 0x28e5f4: 0x46d09800  .word       0x46D09800                   # INVALID     $s6, $s0, -0x6800 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28e5f4u;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x16, function 0x0 at 0x28E5F4 raw=0x46D09800"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28e5f8:
    // 0x28e5f8: 0x47834000  .word       0x47834000                   # INVALID     $gp, $v1, 0x4000 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28e5f8u;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x1C, function 0x0 at 0x28E5F8 raw=0x47834000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28e5fc:
    // 0x28e5fc: 0xc54fd000  lwc1        $f15, -0x3000($t2)
    ctx->pc = 0x28e5fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 4294955008)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
label_28e600:
    // 0x28e600: 0x46d09800  .word       0x46D09800                   # INVALID     $s6, $s0, -0x6800 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28e600u;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x16, function 0x0 at 0x28E600 raw=0x46D09800"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28e604:
    // 0x28e604: 0x47843a00  .word       0x47843A00                   # INVALID     $gp, $a0, 0x3A00 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28e604u;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x1C, function 0x0 at 0x28E604 raw=0x47843A00"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28e608:
    // 0x28e608: 0xc54fd000  lwc1        $f15, -0x3000($t2)
    ctx->pc = 0x28e608u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 4294955008)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
label_28e60c:
    // 0x28e60c: 0x46d09800  .word       0x46D09800                   # INVALID     $s6, $s0, -0x6800 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28e60cu;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x16, function 0x0 at 0x28E60C raw=0x46D09800"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28e610:
    // 0x28e610: 0x47853400  .word       0x47853400                   # INVALID     $gp, $a1, 0x3400 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28e610u;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x1C, function 0x0 at 0x28E610 raw=0x47853400"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28e614:
    // 0x28e614: 0xc54fd000  lwc1        $f15, -0x3000($t2)
    ctx->pc = 0x28e614u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 4294955008)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
label_28e618:
    // 0x28e618: 0x46d09800  .word       0x46D09800                   # INVALID     $s6, $s0, -0x6800 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28e618u;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x16, function 0x0 at 0x28E618 raw=0x46D09800"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28e61c:
    // 0x28e61c: 0x47805200  .word       0x47805200                   # INVALID     $gp, $zero, 0x5200 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28e61cu;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x1C, function 0x0 at 0x28E61C raw=0x47805200"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28e620:
    // 0x28e620: 0xc54fd000  lwc1        $f15, -0x3000($t2)
    ctx->pc = 0x28e620u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 4294955008)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
label_28e624:
    // 0x28e624: 0x46d48000  .word       0x46D48000                   # INVALID     $s6, $s4, -0x8000 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28e624u;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x16, function 0x0 at 0x28E624 raw=0x46D48000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28e628:
    // 0x28e628: 0x47814c00  .word       0x47814C00                   # INVALID     $gp, $at, 0x4C00 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28e628u;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x1C, function 0x0 at 0x28E628 raw=0x47814C00"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28e62c:
    // 0x28e62c: 0xc54fd000  lwc1        $f15, -0x3000($t2)
    ctx->pc = 0x28e62cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 4294955008)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
label_28e630:
    // 0x28e630: 0x46d48000  .word       0x46D48000                   # INVALID     $s6, $s4, -0x8000 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28e630u;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x16, function 0x0 at 0x28E630 raw=0x46D48000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28e634:
    // 0x28e634: 0x47824600  .word       0x47824600                   # INVALID     $gp, $v0, 0x4600 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28e634u;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x1C, function 0x0 at 0x28E634 raw=0x47824600"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28e638:
    // 0x28e638: 0xc54fd000  lwc1        $f15, -0x3000($t2)
    ctx->pc = 0x28e638u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 4294955008)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
label_28e63c:
    // 0x28e63c: 0x46d48000  .word       0x46D48000                   # INVALID     $s6, $s4, -0x8000 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28e63cu;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x16, function 0x0 at 0x28E63C raw=0x46D48000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28e640:
    // 0x28e640: 0x47834000  .word       0x47834000                   # INVALID     $gp, $v1, 0x4000 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28e640u;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x1C, function 0x0 at 0x28E640 raw=0x47834000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28e644:
    // 0x28e644: 0xc54fd000  lwc1        $f15, -0x3000($t2)
    ctx->pc = 0x28e644u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 4294955008)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
label_28e648:
    // 0x28e648: 0x46d48000  .word       0x46D48000                   # INVALID     $s6, $s4, -0x8000 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28e648u;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x16, function 0x0 at 0x28E648 raw=0x46D48000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28e64c:
    // 0x28e64c: 0x47843a00  .word       0x47843A00                   # INVALID     $gp, $a0, 0x3A00 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28e64cu;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x1C, function 0x0 at 0x28E64C raw=0x47843A00"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28e650:
    // 0x28e650: 0xc54fd000  lwc1        $f15, -0x3000($t2)
    ctx->pc = 0x28e650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 4294955008)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
label_28e654:
    // 0x28e654: 0x46d48000  .word       0x46D48000                   # INVALID     $s6, $s4, -0x8000 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28e654u;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x16, function 0x0 at 0x28E654 raw=0x46D48000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28e658:
    // 0x28e658: 0x47853400  .word       0x47853400                   # INVALID     $gp, $a1, 0x3400 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28e658u;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x1C, function 0x0 at 0x28E658 raw=0x47853400"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28e65c:
    // 0x28e65c: 0xc54fd000  lwc1        $f15, -0x3000($t2)
    ctx->pc = 0x28e65cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 4294955008)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
label_28e660:
    // 0x28e660: 0x46d48000  .word       0x46D48000                   # INVALID     $s6, $s4, -0x8000 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28e660u;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x16, function 0x0 at 0x28E660 raw=0x46D48000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28e664:
    // 0x28e664: 0x47862e00  .word       0x47862E00                   # INVALID     $gp, $a2, 0x2E00 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28e664u;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x1C, function 0x0 at 0x28E664 raw=0x47862E00"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28e668:
    // 0x28e668: 0xc54fd000  lwc1        $f15, -0x3000($t2)
    ctx->pc = 0x28e668u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 4294955008)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
label_28e66c:
    // 0x28e66c: 0x46d48000  .word       0x46D48000                   # INVALID     $s6, $s4, -0x8000 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28e66cu;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x16, function 0x0 at 0x28E66C raw=0x46D48000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28e670:
    // 0x28e670: 0x47805200  .word       0x47805200                   # INVALID     $gp, $zero, 0x5200 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28e670u;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x1C, function 0x0 at 0x28E670 raw=0x47805200"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28e674:
    // 0x28e674: 0xc54fd000  lwc1        $f15, -0x3000($t2)
    ctx->pc = 0x28e674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 4294955008)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
label_28e678:
    // 0x28e678: 0x46d86800  .word       0x46D86800                   # INVALID     $s6, $t8, 0x6800 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28e678u;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x16, function 0x0 at 0x28E678 raw=0x46D86800"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28e67c:
    // 0x28e67c: 0x47814c00  .word       0x47814C00                   # INVALID     $gp, $at, 0x4C00 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28e67cu;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x1C, function 0x0 at 0x28E67C raw=0x47814C00"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28e680:
    // 0x28e680: 0xc54fd000  lwc1        $f15, -0x3000($t2)
    ctx->pc = 0x28e680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 4294955008)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
label_28e684:
    // 0x28e684: 0x46d86800  .word       0x46D86800                   # INVALID     $s6, $t8, 0x6800 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28e684u;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x16, function 0x0 at 0x28E684 raw=0x46D86800"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28e688:
    // 0x28e688: 0x47824600  .word       0x47824600                   # INVALID     $gp, $v0, 0x4600 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28e688u;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x1C, function 0x0 at 0x28E688 raw=0x47824600"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28e68c:
    // 0x28e68c: 0xc54fd000  lwc1        $f15, -0x3000($t2)
    ctx->pc = 0x28e68cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 4294955008)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
label_28e690:
    // 0x28e690: 0x46d86800  .word       0x46D86800                   # INVALID     $s6, $t8, 0x6800 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28e690u;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x16, function 0x0 at 0x28E690 raw=0x46D86800"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28e694:
    // 0x28e694: 0x47834000  .word       0x47834000                   # INVALID     $gp, $v1, 0x4000 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28e694u;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x1C, function 0x0 at 0x28E694 raw=0x47834000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28e698:
    // 0x28e698: 0xc54fd000  lwc1        $f15, -0x3000($t2)
    ctx->pc = 0x28e698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 4294955008)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
label_28e69c:
    // 0x28e69c: 0x46d86800  .word       0x46D86800                   # INVALID     $s6, $t8, 0x6800 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28e69cu;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x16, function 0x0 at 0x28E69C raw=0x46D86800"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28e6a0:
    // 0x28e6a0: 0x47843a00  .word       0x47843A00                   # INVALID     $gp, $a0, 0x3A00 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28e6a0u;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x1C, function 0x0 at 0x28E6A0 raw=0x47843A00"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28e6a4:
    // 0x28e6a4: 0xc54fd000  lwc1        $f15, -0x3000($t2)
    ctx->pc = 0x28e6a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 4294955008)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
label_28e6a8:
    // 0x28e6a8: 0x46d86800  .word       0x46D86800                   # INVALID     $s6, $t8, 0x6800 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28e6a8u;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x16, function 0x0 at 0x28E6A8 raw=0x46D86800"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28e6ac:
    // 0x28e6ac: 0x47853400  .word       0x47853400                   # INVALID     $gp, $a1, 0x3400 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28e6acu;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x1C, function 0x0 at 0x28E6AC raw=0x47853400"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28e6b0:
    // 0x28e6b0: 0xc54fd000  lwc1        $f15, -0x3000($t2)
    ctx->pc = 0x28e6b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 4294955008)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
label_28e6b4:
    // 0x28e6b4: 0x46d86800  .word       0x46D86800                   # INVALID     $s6, $t8, 0x6800 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28e6b4u;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x16, function 0x0 at 0x28E6B4 raw=0x46D86800"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28e6b8:
    // 0x28e6b8: 0x47862e00  .word       0x47862E00                   # INVALID     $gp, $a2, 0x2E00 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28e6b8u;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x1C, function 0x0 at 0x28E6B8 raw=0x47862E00"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28e6bc:
    // 0x28e6bc: 0xc54fd000  lwc1        $f15, -0x3000($t2)
    ctx->pc = 0x28e6bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 4294955008)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
label_28e6c0:
    // 0x28e6c0: 0x46d86800  .word       0x46D86800                   # INVALID     $s6, $t8, 0x6800 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28e6c0u;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x16, function 0x0 at 0x28E6C0 raw=0x46D86800"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28e6c4:
    // 0x28e6c4: 0x47814c00  .word       0x47814C00                   # INVALID     $gp, $at, 0x4C00 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28e6c4u;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x1C, function 0x0 at 0x28E6C4 raw=0x47814C00"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28e6c8:
    // 0x28e6c8: 0xc54fd000  lwc1        $f15, -0x3000($t2)
    ctx->pc = 0x28e6c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 4294955008)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
label_28e6cc:
    // 0x28e6cc: 0x46dc5000  .word       0x46DC5000                   # INVALID     $s6, $gp, 0x5000 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28e6ccu;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x16, function 0x0 at 0x28E6CC raw=0x46DC5000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28e6d0:
    // 0x28e6d0: 0x47824600  .word       0x47824600                   # INVALID     $gp, $v0, 0x4600 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28e6d0u;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x1C, function 0x0 at 0x28E6D0 raw=0x47824600"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28e6d4:
    // 0x28e6d4: 0xc54fd000  lwc1        $f15, -0x3000($t2)
    ctx->pc = 0x28e6d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 4294955008)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
label_28e6d8:
    // 0x28e6d8: 0x46dc5000  .word       0x46DC5000                   # INVALID     $s6, $gp, 0x5000 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28e6d8u;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x16, function 0x0 at 0x28E6D8 raw=0x46DC5000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28e6dc:
    // 0x28e6dc: 0x47834000  .word       0x47834000                   # INVALID     $gp, $v1, 0x4000 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28e6dcu;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x1C, function 0x0 at 0x28E6DC raw=0x47834000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28e6e0:
    // 0x28e6e0: 0xc54fd000  lwc1        $f15, -0x3000($t2)
    ctx->pc = 0x28e6e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 4294955008)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
label_28e6e4:
    // 0x28e6e4: 0x46dc5000  .word       0x46DC5000                   # INVALID     $s6, $gp, 0x5000 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28e6e4u;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x16, function 0x0 at 0x28E6E4 raw=0x46DC5000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28e6e8:
    // 0x28e6e8: 0x47843a00  .word       0x47843A00                   # INVALID     $gp, $a0, 0x3A00 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28e6e8u;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x1C, function 0x0 at 0x28E6E8 raw=0x47843A00"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28e6ec:
    // 0x28e6ec: 0xc54fd000  lwc1        $f15, -0x3000($t2)
    ctx->pc = 0x28e6ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 4294955008)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
label_28e6f0:
    // 0x28e6f0: 0x46dc5000  .word       0x46DC5000                   # INVALID     $s6, $gp, 0x5000 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28e6f0u;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x16, function 0x0 at 0x28E6F0 raw=0x46DC5000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28e6f4:
    // 0x28e6f4: 0x47853400  .word       0x47853400                   # INVALID     $gp, $a1, 0x3400 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28e6f4u;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x1C, function 0x0 at 0x28E6F4 raw=0x47853400"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28e6f8:
    // 0x28e6f8: 0xc54fd000  lwc1        $f15, -0x3000($t2)
    ctx->pc = 0x28e6f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 4294955008)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
label_28e6fc:
    // 0x28e6fc: 0x46dc5000  .word       0x46DC5000                   # INVALID     $s6, $gp, 0x5000 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28e6fcu;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x16, function 0x0 at 0x28E6FC raw=0x46DC5000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28e700:
    // 0x28e700: 0x47824600  .word       0x47824600                   # INVALID     $gp, $v0, 0x4600 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28e700u;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x1C, function 0x0 at 0x28E700 raw=0x47824600"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28e704:
    // 0x28e704: 0xc54fd000  lwc1        $f15, -0x3000($t2)
    ctx->pc = 0x28e704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 4294955008)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
label_28e708:
    // 0x28e708: 0x46e03800  .word       0x46E03800                   # INVALID     $s7, $zero, 0x3800 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28e708u;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x17, function 0x0 at 0x28E708 raw=0x46E03800"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28e70c:
    // 0x28e70c: 0x47834000  .word       0x47834000                   # INVALID     $gp, $v1, 0x4000 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28e70cu;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x1C, function 0x0 at 0x28E70C raw=0x47834000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28e710:
    // 0x28e710: 0xc54fd000  lwc1        $f15, -0x3000($t2)
    ctx->pc = 0x28e710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 4294955008)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
label_28e714:
    // 0x28e714: 0x46e42000  .word       0x46E42000                   # INVALID     $s7, $a0, 0x2000 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28e714u;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x17, function 0x0 at 0x28E714 raw=0x46E42000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28e718:
    // 0x28e718: 0x4772f800  .word       0x4772F800                   # INVALID     $k1, $s2, -0x800 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28e718u;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x1B, function 0x0 at 0x28E718 raw=0x4772F800"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28e71c:
    // 0x28e71c: 0xc538b000  lwc1        $f24, -0x5000($t1)
    ctx->pc = 0x28e71cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4294946816)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_28e720:
    // 0x28e720: 0x46f3c000  .word       0x46F3C000                   # INVALID     $s7, $s3, -0x4000 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28e720u;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x17, function 0x0 at 0x28E720 raw=0x46F3C000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28e724:
    // 0x28e724: 0x4774ec00  .word       0x4774EC00                   # INVALID     $k1, $s4, -0x1400 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28e724u;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x1B, function 0x0 at 0x28E724 raw=0x4774EC00"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28e728:
    // 0x28e728: 0xc538b000  lwc1        $f24, -0x5000($t1)
    ctx->pc = 0x28e728u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4294946816)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_28e72c:
    // 0x28e72c: 0x46f3c000  .word       0x46F3C000                   # INVALID     $s7, $s3, -0x4000 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28e72cu;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x17, function 0x0 at 0x28E72C raw=0x46F3C000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28e730:
    // 0x28e730: 0x47710400  .word       0x47710400                   # INVALID     $k1, $s1, 0x400 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28e730u;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x1B, function 0x0 at 0x28E730 raw=0x47710400"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28e734:
    // 0x28e734: 0xc538b000  lwc1        $f24, -0x5000($t1)
    ctx->pc = 0x28e734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4294946816)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_28e738:
    // 0x28e738: 0x46f7a800  .word       0x46F7A800                   # INVALID     $s7, $s7, -0x5800 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28e738u;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x17, function 0x0 at 0x28E738 raw=0x46F7A800"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28e73c:
    // 0x28e73c: 0x4772f800  .word       0x4772F800                   # INVALID     $k1, $s2, -0x800 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28e73cu;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x1B, function 0x0 at 0x28E73C raw=0x4772F800"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28e740:
    // 0x28e740: 0xc538b000  lwc1        $f24, -0x5000($t1)
    ctx->pc = 0x28e740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4294946816)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_28e744:
    // 0x28e744: 0x46f7a800  .word       0x46F7A800                   # INVALID     $s7, $s7, -0x5800 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28e744u;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x17, function 0x0 at 0x28E744 raw=0x46F7A800"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28e748:
    // 0x28e748: 0x4774ec00  .word       0x4774EC00                   # INVALID     $k1, $s4, -0x1400 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28e748u;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x1B, function 0x0 at 0x28E748 raw=0x4774EC00"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28e74c:
    // 0x28e74c: 0xc538b000  lwc1        $f24, -0x5000($t1)
    ctx->pc = 0x28e74cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4294946816)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_28e750:
    // 0x28e750: 0x46f7a800  .word       0x46F7A800                   # INVALID     $s7, $s7, -0x5800 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28e750u;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x17, function 0x0 at 0x28E750 raw=0x46F7A800"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28e754:
    // 0x28e754: 0x4776e000  .word       0x4776E000                   # INVALID     $k1, $s6, -0x2000 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28e754u;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x1B, function 0x0 at 0x28E754 raw=0x4776E000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28e758:
    // 0x28e758: 0xc538b000  lwc1        $f24, -0x5000($t1)
    ctx->pc = 0x28e758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4294946816)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_28e75c:
    // 0x28e75c: 0x46f7a800  .word       0x46F7A800                   # INVALID     $s7, $s7, -0x5800 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28e75cu;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x17, function 0x0 at 0x28E75C raw=0x46F7A800"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28e760:
    // 0x28e760: 0x47710400  .word       0x47710400                   # INVALID     $k1, $s1, 0x400 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28e760u;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x1B, function 0x0 at 0x28E760 raw=0x47710400"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28e764:
    // 0x28e764: 0xc538b000  lwc1        $f24, -0x5000($t1)
    ctx->pc = 0x28e764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4294946816)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_28e768:
    // 0x28e768: 0x46fb9000  .word       0x46FB9000                   # INVALID     $s7, $k1, -0x7000 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28e768u;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x17, function 0x0 at 0x28E768 raw=0x46FB9000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28e76c:
    // 0x28e76c: 0x4772f800  .word       0x4772F800                   # INVALID     $k1, $s2, -0x800 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28e76cu;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x1B, function 0x0 at 0x28E76C raw=0x4772F800"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28e770:
    // 0x28e770: 0xc538b000  lwc1        $f24, -0x5000($t1)
    ctx->pc = 0x28e770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4294946816)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_28e774:
    // 0x28e774: 0x46fb9000  .word       0x46FB9000                   # INVALID     $s7, $k1, -0x7000 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28e774u;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x17, function 0x0 at 0x28E774 raw=0x46FB9000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28e778:
    // 0x28e778: 0x4774ec00  .word       0x4774EC00                   # INVALID     $k1, $s4, -0x1400 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28e778u;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x1B, function 0x0 at 0x28E778 raw=0x4774EC00"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28e77c:
    // 0x28e77c: 0xc538b000  lwc1        $f24, -0x5000($t1)
    ctx->pc = 0x28e77cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4294946816)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_28e780:
    // 0x28e780: 0x46fb9000  .word       0x46FB9000                   # INVALID     $s7, $k1, -0x7000 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28e780u;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x17, function 0x0 at 0x28E780 raw=0x46FB9000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28e784:
    // 0x28e784: 0x4776e000  .word       0x4776E000                   # INVALID     $k1, $s6, -0x2000 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28e784u;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x1B, function 0x0 at 0x28E784 raw=0x4776E000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28e788:
    // 0x28e788: 0xc538b000  lwc1        $f24, -0x5000($t1)
    ctx->pc = 0x28e788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4294946816)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_28e78c:
    // 0x28e78c: 0x46fb9000  .word       0x46FB9000                   # INVALID     $s7, $k1, -0x7000 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28e78cu;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x17, function 0x0 at 0x28E78C raw=0x46FB9000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28e790:
    // 0x28e790: 0x47710400  .word       0x47710400                   # INVALID     $k1, $s1, 0x400 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28e790u;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x1B, function 0x0 at 0x28E790 raw=0x47710400"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28e794:
    // 0x28e794: 0xc538b000  lwc1        $f24, -0x5000($t1)
    ctx->pc = 0x28e794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4294946816)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_28e798:
    // 0x28e798: 0x46ff7800  .word       0x46FF7800                   # INVALID     $s7, $ra, 0x7800 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28e798u;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x17, function 0x0 at 0x28E798 raw=0x46FF7800"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28e79c:
    // 0x28e79c: 0x4772f800  .word       0x4772F800                   # INVALID     $k1, $s2, -0x800 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28e79cu;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x1B, function 0x0 at 0x28E79C raw=0x4772F800"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28e7a0:
    // 0x28e7a0: 0xc538b000  lwc1        $f24, -0x5000($t1)
    ctx->pc = 0x28e7a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4294946816)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_28e7a4:
    // 0x28e7a4: 0x46ff7800  .word       0x46FF7800                   # INVALID     $s7, $ra, 0x7800 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28e7a4u;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x17, function 0x0 at 0x28E7A4 raw=0x46FF7800"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28e7a8:
    // 0x28e7a8: 0x4774ec00  .word       0x4774EC00                   # INVALID     $k1, $s4, -0x1400 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28e7a8u;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x1B, function 0x0 at 0x28E7A8 raw=0x4774EC00"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28e7ac:
    // 0x28e7ac: 0xc538b000  lwc1        $f24, -0x5000($t1)
    ctx->pc = 0x28e7acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4294946816)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_28e7b0:
    // 0x28e7b0: 0x46ff7800  .word       0x46FF7800                   # INVALID     $s7, $ra, 0x7800 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28e7b0u;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x17, function 0x0 at 0x28E7B0 raw=0x46FF7800"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28e7b4:
    // 0x28e7b4: 0x4772f800  .word       0x4772F800                   # INVALID     $k1, $s2, -0x800 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28e7b4u;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x1B, function 0x0 at 0x28E7B4 raw=0x4772F800"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28e7b8:
    // 0x28e7b8: 0xc538b000  lwc1        $f24, -0x5000($t1)
    ctx->pc = 0x28e7b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4294946816)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_28e7bc:
    // 0x28e7bc: 0x4701b000  .word       0x4701B000                   # INVALID     $t8, $at, -0x5000 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28e7bcu;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x18, function 0x0 at 0x28E7BC raw=0x4701B000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28e7c0:
    // 0x28e7c0: 0x478d0400  .word       0x478D0400                   # INVALID     $gp, $t5, 0x400 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28e7c0u;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x1C, function 0x0 at 0x28E7C0 raw=0x478D0400"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28e7c4:
    // 0x28e7c4: 0xc510e000  lwc1        $f16, -0x2000($t0)
    ctx->pc = 0x28e7c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4294959104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
label_28e7c8:
    // 0x28e7c8: 0x46f7a800  .word       0x46F7A800                   # INVALID     $s7, $s7, -0x5800 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28e7c8u;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x17, function 0x0 at 0x28E7C8 raw=0x46F7A800"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28e7cc:
    // 0x28e7cc: 0x478dfe00  .word       0x478DFE00                   # INVALID     $gp, $t5, -0x200 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28e7ccu;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x1C, function 0x0 at 0x28E7CC raw=0x478DFE00"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28e7d0:
    // 0x28e7d0: 0xc510e000  lwc1        $f16, -0x2000($t0)
    ctx->pc = 0x28e7d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4294959104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
label_28e7d4:
    // 0x28e7d4: 0x46f7a800  .word       0x46F7A800                   # INVALID     $s7, $s7, -0x5800 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28e7d4u;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x17, function 0x0 at 0x28E7D4 raw=0x46F7A800"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28e7d8:
    // 0x28e7d8: 0x478c0a00  .word       0x478C0A00                   # INVALID     $gp, $t4, 0xA00 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28e7d8u;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x1C, function 0x0 at 0x28E7D8 raw=0x478C0A00"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28e7dc:
    // 0x28e7dc: 0xc510e000  lwc1        $f16, -0x2000($t0)
    ctx->pc = 0x28e7dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4294959104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
label_28e7e0:
    // 0x28e7e0: 0x46fb9000  .word       0x46FB9000                   # INVALID     $s7, $k1, -0x7000 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28e7e0u;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x17, function 0x0 at 0x28E7E0 raw=0x46FB9000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28e7e4:
    // 0x28e7e4: 0x478d0400  .word       0x478D0400                   # INVALID     $gp, $t5, 0x400 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28e7e4u;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x1C, function 0x0 at 0x28E7E4 raw=0x478D0400"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28e7e8:
    // 0x28e7e8: 0xc510e000  lwc1        $f16, -0x2000($t0)
    ctx->pc = 0x28e7e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4294959104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
label_28e7ec:
    // 0x28e7ec: 0x46fb9000  .word       0x46FB9000                   # INVALID     $s7, $k1, -0x7000 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28e7ecu;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x17, function 0x0 at 0x28E7EC raw=0x46FB9000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28e7f0:
    // 0x28e7f0: 0x478dfe00  .word       0x478DFE00                   # INVALID     $gp, $t5, -0x200 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28e7f0u;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x1C, function 0x0 at 0x28E7F0 raw=0x478DFE00"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28e7f4:
    // 0x28e7f4: 0xc510e000  lwc1        $f16, -0x2000($t0)
    ctx->pc = 0x28e7f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4294959104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
label_28e7f8:
    // 0x28e7f8: 0x46fb9000  .word       0x46FB9000                   # INVALID     $s7, $k1, -0x7000 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28e7f8u;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x17, function 0x0 at 0x28E7F8 raw=0x46FB9000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28e7fc:
    // 0x28e7fc: 0x478ef800  .word       0x478EF800                   # INVALID     $gp, $t6, -0x800 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28e7fcu;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x1C, function 0x0 at 0x28E7FC raw=0x478EF800"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28e800:
    // 0x28e800: 0xc510e000  lwc1        $f16, -0x2000($t0)
    ctx->pc = 0x28e800u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4294959104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
label_28e804:
    // 0x28e804: 0x46fb9000  .word       0x46FB9000                   # INVALID     $s7, $k1, -0x7000 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28e804u;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x17, function 0x0 at 0x28E804 raw=0x46FB9000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28e808:
    // 0x28e808: 0x478c0a00  .word       0x478C0A00                   # INVALID     $gp, $t4, 0xA00 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28e808u;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x1C, function 0x0 at 0x28E808 raw=0x478C0A00"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28e80c:
    // 0x28e80c: 0xc510e000  lwc1        $f16, -0x2000($t0)
    ctx->pc = 0x28e80cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4294959104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
label_28e810:
    // 0x28e810: 0x46ff7800  .word       0x46FF7800                   # INVALID     $s7, $ra, 0x7800 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28e810u;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x17, function 0x0 at 0x28E810 raw=0x46FF7800"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28e814:
    // 0x28e814: 0x478d0400  .word       0x478D0400                   # INVALID     $gp, $t5, 0x400 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28e814u;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x1C, function 0x0 at 0x28E814 raw=0x478D0400"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28e818:
    // 0x28e818: 0xc510e000  lwc1        $f16, -0x2000($t0)
    ctx->pc = 0x28e818u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4294959104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
label_28e81c:
    // 0x28e81c: 0x46ff7800  .word       0x46FF7800                   # INVALID     $s7, $ra, 0x7800 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28e81cu;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x17, function 0x0 at 0x28E81C raw=0x46FF7800"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28e820:
    // 0x28e820: 0x478dfe00  .word       0x478DFE00                   # INVALID     $gp, $t5, -0x200 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28e820u;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x1C, function 0x0 at 0x28E820 raw=0x478DFE00"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28e824:
    // 0x28e824: 0xc510e000  lwc1        $f16, -0x2000($t0)
    ctx->pc = 0x28e824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4294959104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
label_28e828:
    // 0x28e828: 0x46ff7800  .word       0x46FF7800                   # INVALID     $s7, $ra, 0x7800 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28e828u;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x17, function 0x0 at 0x28E828 raw=0x46FF7800"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28e82c:
    // 0x28e82c: 0x478c0a00  .word       0x478C0A00                   # INVALID     $gp, $t4, 0xA00 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28e82cu;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x1C, function 0x0 at 0x28E82C raw=0x478C0A00"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28e830:
    // 0x28e830: 0xc510e000  lwc1        $f16, -0x2000($t0)
    ctx->pc = 0x28e830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4294959104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
label_28e834:
    // 0x28e834: 0x4701b000  .word       0x4701B000                   # INVALID     $t8, $at, -0x5000 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28e834u;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x18, function 0x0 at 0x28E834 raw=0x4701B000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28e838:
    // 0x28e838: 0x478d0400  .word       0x478D0400                   # INVALID     $gp, $t5, 0x400 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28e838u;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x1C, function 0x0 at 0x28E838 raw=0x478D0400"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28e83c:
    // 0x28e83c: 0xc510e000  lwc1        $f16, -0x2000($t0)
    ctx->pc = 0x28e83cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4294959104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
label_28e840:
    // 0x28e840: 0x4701b000  .word       0x4701B000                   # INVALID     $t8, $at, -0x5000 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28e840u;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x18, function 0x0 at 0x28E840 raw=0x4701B000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28e844:
    // 0x28e844: 0x478c0a00  .word       0x478C0A00                   # INVALID     $gp, $t4, 0xA00 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28e844u;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x1C, function 0x0 at 0x28E844 raw=0x478C0A00"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28e848:
    // 0x28e848: 0xc4cae000  lwc1        $f10, -0x2000($a2)
    ctx->pc = 0x28e848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4294959104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
label_28e84c:
    // 0x28e84c: 0x4724d800  .word       0x4724D800                   # INVALID     $t9, $a0, -0x2800 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28e84cu;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x19, function 0x0 at 0x28E84C raw=0x4724D800"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28e850:
    // 0x28e850: 0x478d0400  .word       0x478D0400                   # INVALID     $gp, $t5, 0x400 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28e850u;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x1C, function 0x0 at 0x28E850 raw=0x478D0400"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28e854:
    // 0x28e854: 0xc4cae000  lwc1        $f10, -0x2000($a2)
    ctx->pc = 0x28e854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4294959104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
label_28e858:
    // 0x28e858: 0x4724d800  .word       0x4724D800                   # INVALID     $t9, $a0, -0x2800 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28e858u;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x19, function 0x0 at 0x28E858 raw=0x4724D800"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28e85c:
    // 0x28e85c: 0x478c0a00  .word       0x478C0A00                   # INVALID     $gp, $t4, 0xA00 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28e85cu;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x1C, function 0x0 at 0x28E85C raw=0x478C0A00"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28e860:
    // 0x28e860: 0xc4cae000  lwc1        $f10, -0x2000($a2)
    ctx->pc = 0x28e860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4294959104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
label_28e864:
    // 0x28e864: 0x4726cc00  .word       0x4726CC00                   # INVALID     $t9, $a2, -0x3400 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28e864u;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x19, function 0x0 at 0x28E864 raw=0x4726CC00"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28e868:
    // 0x28e868: 0x478d0400  .word       0x478D0400                   # INVALID     $gp, $t5, 0x400 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28e868u;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x1C, function 0x0 at 0x28E868 raw=0x478D0400"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28e86c:
    // 0x28e86c: 0xc4cae000  lwc1        $f10, -0x2000($a2)
    ctx->pc = 0x28e86cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4294959104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
label_28e870:
    // 0x28e870: 0x4726cc00  .word       0x4726CC00                   # INVALID     $t9, $a2, -0x3400 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28e870u;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x19, function 0x0 at 0x28E870 raw=0x4726CC00"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28e874:
    // 0x28e874: 0x478c0a00  .word       0x478C0A00                   # INVALID     $gp, $t4, 0xA00 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28e874u;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x1C, function 0x0 at 0x28E874 raw=0x478C0A00"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28e878:
    // 0x28e878: 0xc4cae000  lwc1        $f10, -0x2000($a2)
    ctx->pc = 0x28e878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4294959104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
label_28e87c:
    // 0x28e87c: 0x4728c000  .word       0x4728C000                   # INVALID     $t9, $t0, -0x4000 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28e87cu;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x19, function 0x0 at 0x28E87C raw=0x4728C000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28e880:
    // 0x28e880: 0x478d0400  .word       0x478D0400                   # INVALID     $gp, $t5, 0x400 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28e880u;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x1C, function 0x0 at 0x28E880 raw=0x478D0400"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28e884:
    // 0x28e884: 0xc4cae000  lwc1        $f10, -0x2000($a2)
    ctx->pc = 0x28e884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4294959104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
label_28e888:
    // 0x28e888: 0x4728c000  .word       0x4728C000                   # INVALID     $t9, $t0, -0x4000 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28e888u;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x19, function 0x0 at 0x28E888 raw=0x4728C000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28e88c:
    // 0x28e88c: 0x0  nop
    ctx->pc = 0x28e88cu;
    // NOP
label_28e890:
    // 0x28e890: 0x6d7  .word       0x000006D7                   # dsrav       $zero, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28e890u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_28e894:
    // 0x28e894: 0x6db  .word       0x000006DB                   # divu        $zero, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28e894u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_28e898:
    // 0x28e898: 0x6df  .word       0x000006DF                   # ddivu       $zero, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28e898u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x28E898 raw=0x000006DF"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28e89c:
    // 0x28e89c: 0x6e3  .word       0x000006E3                   # negu        $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28e89cu;
    SET_GPR_S32(ctx, 0, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_28e8a0:
    // 0x28e8a0: 0x6e7  .word       0x000006E7                   # not         $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28e8a0u;
    SET_GPR_U64(ctx, 0, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_28e8a4:
    // 0x28e8a4: 0x6eb  .word       0x000006EB                   # sltu        $zero, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28e8a4u;
    SET_GPR_U64(ctx, 0, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_28e8a8:
    // 0x28e8a8: 0x6ef  .word       0x000006EF                   # dsubu       $zero, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28e8a8u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_28e8ac:
    // 0x28e8ac: 0x6f3  tltu        $zero, $zero, 27
    ctx->pc = 0x28e8acu;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_28e8b0:
    // 0x28e8b0: 0x6f7  .word       0x000006F7                   # INVALID     $zero, $zero, 0x6F7 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28e8b0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x28E8B0 raw=0x000006F7"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28e8b4:
    // 0x28e8b4: 0x6fb  dsra        $zero, $zero, 27
    ctx->pc = 0x28e8b4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> 27);
label_28e8b8:
    // 0x28e8b8: 0x6ff  dsra32      $zero, $zero, 27
    ctx->pc = 0x28e8b8u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 27));
label_28e8bc:
    // 0x28e8bc: 0x703  sra         $zero, $zero, 28
    ctx->pc = 0x28e8bcu;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 28));
label_28e8c0:
    // 0x28e8c0: 0x707  .word       0x00000707                   # srav        $zero, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28e8c0u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_28e8c4:
    // 0x28e8c4: 0x70b  .word       0x0000070B                   # movn        $zero, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28e8c4u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_28e8c8:
    // 0x28e8c8: 0x70f  sync.p
    ctx->pc = 0x28e8c8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_28e8cc:
    // 0x28e8cc: 0x713  .word       0x00000713                   # mtlo        $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28e8ccu;
    ctx->lo = GPR_U64(ctx, 0);
label_28e8d0:
    // 0x28e8d0: 0x717  .word       0x00000717                   # dsrav       $zero, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28e8d0u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_28e8d4:
    // 0x28e8d4: 0x71b  .word       0x0000071B                   # divu        $zero, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28e8d4u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_28e8d8:
    // 0x28e8d8: 0x71f  .word       0x0000071F                   # ddivu       $zero, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28e8d8u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x28E8D8 raw=0x0000071F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28e8dc:
    // 0x28e8dc: 0x723  .word       0x00000723                   # negu        $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28e8dcu;
    SET_GPR_S32(ctx, 0, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_28e8e0:
    // 0x28e8e0: 0x727  .word       0x00000727                   # not         $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28e8e0u;
    SET_GPR_U64(ctx, 0, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_28e8e4:
    // 0x28e8e4: 0x72b  .word       0x0000072B                   # sltu        $zero, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28e8e4u;
    SET_GPR_U64(ctx, 0, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_28e8e8:
    // 0x28e8e8: 0x72f  .word       0x0000072F                   # dsubu       $zero, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28e8e8u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_28e8ec:
    // 0x28e8ec: 0x733  tltu        $zero, $zero, 28
    ctx->pc = 0x28e8ecu;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_28e8f0:
    // 0x28e8f0: 0x737  .word       0x00000737                   # INVALID     $zero, $zero, 0x737 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28e8f0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x28E8F0 raw=0x00000737"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28e8f4:
    // 0x28e8f4: 0x73b  dsra        $zero, $zero, 28
    ctx->pc = 0x28e8f4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> 28);
label_28e8f8:
    // 0x28e8f8: 0x73f  dsra32      $zero, $zero, 28
    ctx->pc = 0x28e8f8u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 28));
label_28e8fc:
    // 0x28e8fc: 0x743  sra         $zero, $zero, 29
    ctx->pc = 0x28e8fcu;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 29));
label_28e900:
    // 0x28e900: 0x747  .word       0x00000747                   # srav        $zero, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28e900u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_28e904:
    // 0x28e904: 0x74b  .word       0x0000074B                   # movn        $zero, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28e904u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_28e908:
    // 0x28e908: 0x74f  sync.p
    ctx->pc = 0x28e908u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_28e90c:
    // 0x28e90c: 0x753  .word       0x00000753                   # mtlo        $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28e90cu;
    ctx->lo = GPR_U64(ctx, 0);
label_28e910:
    // 0x28e910: 0x757  .word       0x00000757                   # dsrav       $zero, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28e910u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_28e914:
    // 0x28e914: 0x75b  .word       0x0000075B                   # divu        $zero, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28e914u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_28e918:
    // 0x28e918: 0x75f  .word       0x0000075F                   # ddivu       $zero, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28e918u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x28E918 raw=0x0000075F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28e91c:
    // 0x28e91c: 0x763  .word       0x00000763                   # negu        $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28e91cu;
    SET_GPR_S32(ctx, 0, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_28e920:
    // 0x28e920: 0x767  .word       0x00000767                   # not         $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28e920u;
    SET_GPR_U64(ctx, 0, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_28e924:
    // 0x28e924: 0x76b  .word       0x0000076B                   # sltu        $zero, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28e924u;
    SET_GPR_U64(ctx, 0, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_28e928:
    // 0x28e928: 0x76f  .word       0x0000076F                   # dsubu       $zero, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28e928u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_28e92c:
    // 0x28e92c: 0x773  tltu        $zero, $zero, 29
    ctx->pc = 0x28e92cu;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_28e930:
    // 0x28e930: 0x777  .word       0x00000777                   # INVALID     $zero, $zero, 0x777 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28e930u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x28E930 raw=0x00000777"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28e934:
    // 0x28e934: 0x77b  dsra        $zero, $zero, 29
    ctx->pc = 0x28e934u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> 29);
label_28e938:
    // 0x28e938: 0x77f  dsra32      $zero, $zero, 29
    ctx->pc = 0x28e938u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 29));
label_28e93c:
    // 0x28e93c: 0x783  sra         $zero, $zero, 30
    ctx->pc = 0x28e93cu;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 30));
label_28e940:
    // 0x28e940: 0x787  .word       0x00000787                   # srav        $zero, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28e940u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_28e944:
    // 0x28e944: 0x78b  .word       0x0000078B                   # movn        $zero, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28e944u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_28e948:
    // 0x28e948: 0x78f  sync.p
    ctx->pc = 0x28e948u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_28e94c:
    // 0x28e94c: 0x793  .word       0x00000793                   # mtlo        $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28e94cu;
    ctx->lo = GPR_U64(ctx, 0);
label_28e950:
    // 0x28e950: 0x797  .word       0x00000797                   # dsrav       $zero, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28e950u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_28e954:
    // 0x28e954: 0x79b  .word       0x0000079B                   # divu        $zero, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28e954u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_28e958:
    // 0x28e958: 0x79f  .word       0x0000079F                   # ddivu       $zero, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28e958u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x28E958 raw=0x0000079F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28e95c:
    // 0x28e95c: 0x7a3  .word       0x000007A3                   # negu        $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28e95cu;
    SET_GPR_S32(ctx, 0, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_28e960:
    // 0x28e960: 0x7a7  .word       0x000007A7                   # not         $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28e960u;
    SET_GPR_U64(ctx, 0, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_28e964:
    // 0x28e964: 0x7ab  .word       0x000007AB                   # sltu        $zero, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28e964u;
    SET_GPR_U64(ctx, 0, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_28e968:
    // 0x28e968: 0x7af  .word       0x000007AF                   # dsubu       $zero, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28e968u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_28e96c:
    // 0x28e96c: 0x7b3  tltu        $zero, $zero, 30
    ctx->pc = 0x28e96cu;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_28e970:
    // 0x28e970: 0xa47  .word       0x00000A47                   # srav        $at, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28e970u;
    SET_GPR_S32(ctx, 1, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_28e974:
    // 0x28e974: 0xa4b  .word       0x00000A4B                   # movn        $at, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28e974u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 1, GPR_VEC(ctx, 0));
label_28e978:
    // 0x28e978: 0xa4f  .word       0x00000A4F                   # sync # 00000800 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28e978u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_28e97c:
    // 0x28e97c: 0xa53  .word       0x00000A53                   # mtlo        $zero # 00000A40 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28e97cu;
    ctx->lo = GPR_U64(ctx, 0);
label_28e980:
    // 0x28e980: 0xa57  .word       0x00000A57                   # dsrav       $at, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28e980u;
    SET_GPR_S64(ctx, 1, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_28e984:
    // 0x28e984: 0xa5b  .word       0x00000A5B                   # divu        $at, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28e984u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_28e988:
    // 0x28e988: 0xa5f  .word       0x00000A5F                   # ddivu       $at, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28e988u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x28E988 raw=0x00000A5F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28e98c:
    // 0x28e98c: 0xa63  .word       0x00000A63                   # negu        $at, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28e98cu;
    SET_GPR_S32(ctx, 1, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_28e990:
    // 0x28e990: 0xa67  .word       0x00000A67                   # not         $at, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28e990u;
    SET_GPR_U64(ctx, 1, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_28e994:
    // 0x28e994: 0xa6b  .word       0x00000A6B                   # sltu        $at, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28e994u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_28e998:
    // 0x28e998: 0xa6f  .word       0x00000A6F                   # dsubu       $at, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28e998u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_28e99c:
    // 0x28e99c: 0xa73  tltu        $zero, $zero, 41
    ctx->pc = 0x28e99cu;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_28e9a0:
    // 0x28e9a0: 0xa77  .word       0x00000A77                   # INVALID     $zero, $zero, 0xA77 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28e9a0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x28E9A0 raw=0x00000A77"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28e9a4:
    // 0x28e9a4: 0xa7b  dsra        $at, $zero, 9
    ctx->pc = 0x28e9a4u;
    SET_GPR_S64(ctx, 1, GPR_S64(ctx, 0) >> 9);
label_28e9a8:
    // 0x28e9a8: 0xa7f  dsra32      $at, $zero, 9
    ctx->pc = 0x28e9a8u;
    SET_GPR_S64(ctx, 1, GPR_S64(ctx, 0) >> (32 + 9));
label_28e9ac:
    // 0x28e9ac: 0xa83  sra         $at, $zero, 10
    ctx->pc = 0x28e9acu;
    SET_GPR_S32(ctx, 1, SRA32(GPR_S32(ctx, 0), 10));
label_28e9b0:
    // 0x28e9b0: 0xa87  .word       0x00000A87                   # srav        $at, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28e9b0u;
    SET_GPR_S32(ctx, 1, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_28e9b4:
    // 0x28e9b4: 0xa8b  .word       0x00000A8B                   # movn        $at, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28e9b4u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 1, GPR_VEC(ctx, 0));
label_28e9b8:
    // 0x28e9b8: 0xa8f  .word       0x00000A8F                   # sync # 00000800 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28e9b8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_28e9bc:
    // 0x28e9bc: 0xa93  .word       0x00000A93                   # mtlo        $zero # 00000A80 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28e9bcu;
    ctx->lo = GPR_U64(ctx, 0);
label_28e9c0:
    // 0x28e9c0: 0xa97  .word       0x00000A97                   # dsrav       $at, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28e9c0u;
    SET_GPR_S64(ctx, 1, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_28e9c4:
    // 0x28e9c4: 0xa9b  .word       0x00000A9B                   # divu        $at, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28e9c4u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_28e9c8:
    // 0x28e9c8: 0xa9f  .word       0x00000A9F                   # ddivu       $at, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28e9c8u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x28E9C8 raw=0x00000A9F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28e9cc:
    // 0x28e9cc: 0xaa3  .word       0x00000AA3                   # negu        $at, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28e9ccu;
    SET_GPR_S32(ctx, 1, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_28e9d0:
    // 0x28e9d0: 0xaa7  .word       0x00000AA7                   # not         $at, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28e9d0u;
    SET_GPR_U64(ctx, 1, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_28e9d4:
    // 0x28e9d4: 0xaab  .word       0x00000AAB                   # sltu        $at, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28e9d4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_28e9d8:
    // 0x28e9d8: 0xaaf  .word       0x00000AAF                   # dsubu       $at, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28e9d8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_28e9dc:
    // 0x28e9dc: 0xab3  tltu        $zero, $zero, 42
    ctx->pc = 0x28e9dcu;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_28e9e0:
    // 0x28e9e0: 0xab7  .word       0x00000AB7                   # INVALID     $zero, $zero, 0xAB7 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28e9e0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x28E9E0 raw=0x00000AB7"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28e9e4:
    // 0x28e9e4: 0xabb  dsra        $at, $zero, 10
    ctx->pc = 0x28e9e4u;
    SET_GPR_S64(ctx, 1, GPR_S64(ctx, 0) >> 10);
label_28e9e8:
    // 0x28e9e8: 0xabf  dsra32      $at, $zero, 10
    ctx->pc = 0x28e9e8u;
    SET_GPR_S64(ctx, 1, GPR_S64(ctx, 0) >> (32 + 10));
label_28e9ec:
    // 0x28e9ec: 0xac3  sra         $at, $zero, 11
    ctx->pc = 0x28e9ecu;
    SET_GPR_S32(ctx, 1, SRA32(GPR_S32(ctx, 0), 11));
label_28e9f0:
    // 0x28e9f0: 0xac7  .word       0x00000AC7                   # srav        $at, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28e9f0u;
    SET_GPR_S32(ctx, 1, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_28e9f4:
    // 0x28e9f4: 0xacb  .word       0x00000ACB                   # movn        $at, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28e9f4u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 1, GPR_VEC(ctx, 0));
label_28e9f8:
    // 0x28e9f8: 0xacf  .word       0x00000ACF                   # sync # 00000800 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28e9f8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_28e9fc:
    // 0x28e9fc: 0xad3  .word       0x00000AD3                   # mtlo        $zero # 00000AC0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28e9fcu;
    ctx->lo = GPR_U64(ctx, 0);
label_28ea00:
    // 0x28ea00: 0xad7  .word       0x00000AD7                   # dsrav       $at, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28ea00u;
    SET_GPR_S64(ctx, 1, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_28ea04:
    // 0x28ea04: 0xadb  .word       0x00000ADB                   # divu        $at, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28ea04u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_28ea08:
    // 0x28ea08: 0xadf  .word       0x00000ADF                   # ddivu       $at, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28ea08u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x28EA08 raw=0x00000ADF"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28ea0c:
    // 0x28ea0c: 0xae3  .word       0x00000AE3                   # negu        $at, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28ea0cu;
    SET_GPR_S32(ctx, 1, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_28ea10:
    // 0x28ea10: 0xae7  .word       0x00000AE7                   # not         $at, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28ea10u;
    SET_GPR_U64(ctx, 1, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_28ea14:
    // 0x28ea14: 0xaeb  .word       0x00000AEB                   # sltu        $at, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28ea14u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_28ea18:
    // 0x28ea18: 0xaef  .word       0x00000AEF                   # dsubu       $at, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28ea18u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_28ea1c:
    // 0x28ea1c: 0xaf3  tltu        $zero, $zero, 43
    ctx->pc = 0x28ea1cu;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_28ea20:
    // 0x28ea20: 0xaf7  .word       0x00000AF7                   # INVALID     $zero, $zero, 0xAF7 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28ea20u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x28EA20 raw=0x00000AF7"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28ea24:
    // 0x28ea24: 0x0  nop
    ctx->pc = 0x28ea24u;
    // NOP
label_28ea28:
    // 0x28ea28: 0x0  nop
    ctx->pc = 0x28ea28u;
    // NOP
label_28ea2c:
    // 0x28ea2c: 0x0  nop
    ctx->pc = 0x28ea2cu;
    // NOP
label_28ea30:
    // 0x28ea30: 0x7010900  bgez        $t8, . + 4 + (0x900 << 2)
label_28ea34:
    if (ctx->pc == 0x28EA34u) {
        ctx->pc = 0x28EA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EA30u;
        // 0x28ea34: 0x9010901  j           func_4042404 (Delay Slot)
        // J 0x4042404 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x28EA38u;
        goto label_28ea38;
    }
    ctx->pc = 0x28EA30u;
    {
        const bool branch_taken_0x28ea30 = (GPR_S32(ctx, 24) >= 0);
        ctx->pc = 0x28EA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EA30u;
        // 0x28ea34: 0x9010901  j           func_4042404 (Delay Slot)
        // J 0x4042404 - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ea30) {
            ctx->pc = 0x290E34u;
            { ctx->pc = 0x290e34; return; }
        }
    }
    ctx->pc = 0x28EA38u;
label_28ea38:
    // 0x28ea38: 0x9010701  j           func_4041C04
label_28ea3c:
    if (ctx->pc == 0x28EA3Cu) {
        ctx->pc = 0x28EA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EA38u;
        // 0x28ea3c: 0x9010701  j           func_4041C04 (Delay Slot)
        // J 0x4041C04 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x28EA40u;
        goto label_28ea40;
    }
    ctx->pc = 0x28EA38u;
    ctx->pc = 0x28EA3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28EA38u;
    // 0x28ea3c: 0x9010701  j           func_4041C04 (Delay Slot)
    // J 0x4041C04 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x4041C04u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4041C04u, 0x28EA38u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x28EA40u;
label_28ea40:
    // 0x28ea40: 0x9010901  j           func_4042404
label_28ea44:
    if (ctx->pc == 0x28EA44u) {
        ctx->pc = 0x28EA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EA40u;
        // 0x28ea44: 0xb020b02  j           func_C082C08 (Delay Slot)
        // J 0xC082C08 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x28EA48u;
        goto label_28ea48;
    }
    ctx->pc = 0x28EA40u;
    ctx->pc = 0x28EA44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28EA40u;
    // 0x28ea44: 0xb020b02  j           func_C082C08 (Delay Slot)
    // J 0xC082C08 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x4042404u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4042404u, 0x28EA40u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x28EA48u;
label_28ea48:
    // 0x28ea48: 0xb020b02  j           func_C082C08
label_28ea4c:
    if (ctx->pc == 0x28EA4Cu) {
        ctx->pc = 0x28EA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EA48u;
        // 0x28ea4c: 0xb020b02  j           func_C082C08 (Delay Slot)
        // J 0xC082C08 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x28EA50u;
        goto label_28ea50;
    }
    ctx->pc = 0x28EA48u;
    ctx->pc = 0x28EA4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28EA48u;
    // 0x28ea4c: 0xb020b02  j           func_C082C08 (Delay Slot)
    // J 0xC082C08 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0xC082C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xC082C08u, 0x28EA48u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x28EA50u;
label_28ea50:
    // 0x28ea50: 0xb020b02  j           func_C082C08
label_28ea54:
    if (ctx->pc == 0x28EA54u) {
        ctx->pc = 0x28EA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EA50u;
        // 0x28ea54: 0x8030803  j           func_0C200C (Delay Slot)
        // J 0xC200C - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x28EA58u;
        goto label_28ea58;
    }
    ctx->pc = 0x28EA50u;
    ctx->pc = 0x28EA54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28EA50u;
    // 0x28ea54: 0x8030803  j           func_0C200C (Delay Slot)
    // J 0xC200C - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0xC082C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xC082C08u, 0x28EA50u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x28EA58u;
label_28ea58:
    // 0x28ea58: 0x8030803  j           func_0C200C
label_28ea5c:
    if (ctx->pc == 0x28EA5Cu) {
        ctx->pc = 0x28EA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EA58u;
        // 0x28ea5c: 0xf020803  jal         func_C08200C (Delay Slot)
        // JAL 0xC08200C - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x28EA60u;
        goto label_28ea60;
    }
    ctx->pc = 0x28EA58u;
    ctx->pc = 0x28EA5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28EA58u;
    // 0x28ea5c: 0xf020803  jal         func_C08200C (Delay Slot)
    // JAL 0xC08200C - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0xC200Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xC200Cu, 0x28EA58u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x28EA60u;
label_28ea60:
    // 0x28ea60: 0xf020f02  jal         func_C083C08
label_28ea64:
    if (ctx->pc == 0x28EA64u) {
        ctx->pc = 0x28EA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EA60u;
        // 0x28ea64: 0x9020902  j           func_4082408 (Delay Slot)
        // J 0x4082408 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x28EA68u;
        goto label_28ea68;
    }
    ctx->pc = 0x28EA60u;
    SET_GPR_U32(ctx, 31, 0x28EA68u);
    ctx->pc = 0x28EA64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28EA60u;
    // 0x28ea64: 0x9020902  j           func_4082408 (Delay Slot)
    // J 0x4082408 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0xC083C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xC083C08u, 0x28EA60u, 0x28EA68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28EA68u;
label_28ea68:
    // 0x28ea68: 0xf030f03  jal         func_C0C3C0C
label_28ea6c:
    if (ctx->pc == 0x28EA6Cu) {
        ctx->pc = 0x28EA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EA68u;
        // 0x28ea6c: 0xf030f03  jal         func_C0C3C0C (Delay Slot)
        // JAL 0xC0C3C0C - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x28EA70u;
        goto label_28ea70;
    }
    ctx->pc = 0x28EA68u;
    SET_GPR_U32(ctx, 31, 0x28EA70u);
    ctx->pc = 0x28EA6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28EA68u;
    // 0x28ea6c: 0xf030f03  jal         func_C0C3C0C (Delay Slot)
    // JAL 0xC0C3C0C - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0xC0C3C0Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xC0C3C0Cu, 0x28EA68u, 0x28EA70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28EA70u;
label_28ea70:
    // 0x28ea70: 0xf000f03  jal         func_C003C0C
label_28ea74:
    if (ctx->pc == 0x28EA74u) {
        ctx->pc = 0x28EA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EA70u;
        // 0x28ea74: 0xf000f00  jal         func_C003C00 (Delay Slot)
        // JAL 0xC003C00 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x28EA78u;
        goto label_28ea78;
    }
    ctx->pc = 0x28EA70u;
    SET_GPR_U32(ctx, 31, 0x28EA78u);
    ctx->pc = 0x28EA74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28EA70u;
    // 0x28ea74: 0xf000f00  jal         func_C003C00 (Delay Slot)
    // JAL 0xC003C00 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0xC003C0Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xC003C0Cu, 0x28EA70u, 0x28EA78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28EA78u;
label_28ea78:
    // 0x28ea78: 0xf000f00  jal         func_C003C00
label_28ea7c:
    if (ctx->pc == 0x28EA7Cu) {
        ctx->pc = 0x28EA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EA78u;
        // 0x28ea7c: 0xa000a00  j           func_8002800 (Delay Slot)
        // J 0x8002800 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x28EA80u;
        goto label_28ea80;
    }
    ctx->pc = 0x28EA78u;
    SET_GPR_U32(ctx, 31, 0x28EA80u);
    ctx->pc = 0x28EA7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28EA78u;
    // 0x28ea7c: 0xa000a00  j           func_8002800 (Delay Slot)
    // J 0x8002800 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0xC003C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xC003C00u, 0x28EA78u, 0x28EA80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28EA80u;
label_28ea80:
    // 0x28ea80: 0xa010a00  j           func_8042800
label_28ea84:
    if (ctx->pc == 0x28EA84u) {
        ctx->pc = 0x28EA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EA80u;
        // 0x28ea84: 0xa010a01  j           func_8042804 (Delay Slot)
        // J 0x8042804 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x28EA88u;
        goto label_28ea88;
    }
    ctx->pc = 0x28EA80u;
    ctx->pc = 0x28EA84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28EA80u;
    // 0x28ea84: 0xa010a01  j           func_8042804 (Delay Slot)
    // J 0x8042804 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x8042800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x8042800u, 0x28EA80u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x28EA88u;
label_28ea88:
    // 0x28ea88: 0xf020f02  jal         func_C083C08
label_28ea8c:
    if (ctx->pc == 0x28EA8Cu) {
        ctx->pc = 0x28EA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EA88u;
        // 0x28ea8c: 0xf020f02  jal         func_C083C08 (Delay Slot)
        // JAL 0xC083C08 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x28EA90u;
        { ctx->pc = 0x28ea90; return; }
    }
    ctx->pc = 0x28EA88u;
    SET_GPR_U32(ctx, 31, 0x28EA90u);
    ctx->pc = 0x28EA8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28EA88u;
    // 0x28ea8c: 0xf020f02  jal         func_C083C08 (Delay Slot)
    // JAL 0xC083C08 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0xC083C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xC083C08u, 0x28EA88u, 0x28EA90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28EA90u;
    ctx->pc = 0x28ea90u;
    return;
}
