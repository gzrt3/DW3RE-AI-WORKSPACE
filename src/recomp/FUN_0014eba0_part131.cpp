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


void FUN_0014eba0_part131(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x18e340u: goto label_18e340;
        case 0x18e344u: goto label_18e344;
        case 0x18e348u: goto label_18e348;
        case 0x18e34cu: goto label_18e34c;
        case 0x18e350u: goto label_18e350;
        case 0x18e354u: goto label_18e354;
        case 0x18e358u: goto label_18e358;
        case 0x18e35cu: goto label_18e35c;
        case 0x18e360u: goto label_18e360;
        case 0x18e364u: goto label_18e364;
        case 0x18e368u: goto label_18e368;
        case 0x18e36cu: goto label_18e36c;
        case 0x18e370u: goto label_18e370;
        case 0x18e374u: goto label_18e374;
        case 0x18e378u: goto label_18e378;
        case 0x18e37cu: goto label_18e37c;
        case 0x18e380u: goto label_18e380;
        case 0x18e384u: goto label_18e384;
        case 0x18e388u: goto label_18e388;
        case 0x18e38cu: goto label_18e38c;
        case 0x18e390u: goto label_18e390;
        case 0x18e394u: goto label_18e394;
        case 0x18e398u: goto label_18e398;
        case 0x18e39cu: goto label_18e39c;
        case 0x18e3a0u: goto label_18e3a0;
        case 0x18e3a4u: goto label_18e3a4;
        case 0x18e3a8u: goto label_18e3a8;
        case 0x18e3acu: goto label_18e3ac;
        case 0x18e3b0u: goto label_18e3b0;
        case 0x18e3b4u: goto label_18e3b4;
        case 0x18e3b8u: goto label_18e3b8;
        case 0x18e3bcu: goto label_18e3bc;
        case 0x18e3c0u: goto label_18e3c0;
        case 0x18e3c4u: goto label_18e3c4;
        case 0x18e3c8u: goto label_18e3c8;
        case 0x18e3ccu: goto label_18e3cc;
        case 0x18e3d0u: goto label_18e3d0;
        case 0x18e3d4u: goto label_18e3d4;
        case 0x18e3d8u: goto label_18e3d8;
        case 0x18e3dcu: goto label_18e3dc;
        case 0x18e3e0u: goto label_18e3e0;
        case 0x18e3e4u: goto label_18e3e4;
        case 0x18e3e8u: goto label_18e3e8;
        case 0x18e3ecu: goto label_18e3ec;
        case 0x18e3f0u: goto label_18e3f0;
        case 0x18e3f4u: goto label_18e3f4;
        case 0x18e3f8u: goto label_18e3f8;
        case 0x18e3fcu: goto label_18e3fc;
        case 0x18e400u: goto label_18e400;
        case 0x18e404u: goto label_18e404;
        case 0x18e408u: goto label_18e408;
        case 0x18e40cu: goto label_18e40c;
        case 0x18e410u: goto label_18e410;
        case 0x18e414u: goto label_18e414;
        case 0x18e418u: goto label_18e418;
        case 0x18e41cu: goto label_18e41c;
        case 0x18e420u: goto label_18e420;
        case 0x18e424u: goto label_18e424;
        case 0x18e428u: goto label_18e428;
        case 0x18e42cu: goto label_18e42c;
        case 0x18e430u: goto label_18e430;
        case 0x18e434u: goto label_18e434;
        case 0x18e438u: goto label_18e438;
        case 0x18e43cu: goto label_18e43c;
        case 0x18e440u: goto label_18e440;
        case 0x18e444u: goto label_18e444;
        case 0x18e448u: goto label_18e448;
        case 0x18e44cu: goto label_18e44c;
        case 0x18e450u: goto label_18e450;
        case 0x18e454u: goto label_18e454;
        case 0x18e458u: goto label_18e458;
        case 0x18e45cu: goto label_18e45c;
        case 0x18e460u: goto label_18e460;
        case 0x18e464u: goto label_18e464;
        case 0x18e468u: goto label_18e468;
        case 0x18e46cu: goto label_18e46c;
        case 0x18e470u: goto label_18e470;
        case 0x18e474u: goto label_18e474;
        case 0x18e478u: goto label_18e478;
        case 0x18e47cu: goto label_18e47c;
        case 0x18e480u: goto label_18e480;
        case 0x18e484u: goto label_18e484;
        case 0x18e488u: goto label_18e488;
        case 0x18e48cu: goto label_18e48c;
        case 0x18e490u: goto label_18e490;
        case 0x18e494u: goto label_18e494;
        case 0x18e498u: goto label_18e498;
        case 0x18e49cu: goto label_18e49c;
        case 0x18e4a0u: goto label_18e4a0;
        case 0x18e4a4u: goto label_18e4a4;
        case 0x18e4a8u: goto label_18e4a8;
        case 0x18e4acu: goto label_18e4ac;
        case 0x18e4b0u: goto label_18e4b0;
        case 0x18e4b4u: goto label_18e4b4;
        case 0x18e4b8u: goto label_18e4b8;
        case 0x18e4bcu: goto label_18e4bc;
        case 0x18e4c0u: goto label_18e4c0;
        case 0x18e4c4u: goto label_18e4c4;
        case 0x18e4c8u: goto label_18e4c8;
        case 0x18e4ccu: goto label_18e4cc;
        case 0x18e4d0u: goto label_18e4d0;
        case 0x18e4d4u: goto label_18e4d4;
        case 0x18e4d8u: goto label_18e4d8;
        case 0x18e4dcu: goto label_18e4dc;
        case 0x18e4e0u: goto label_18e4e0;
        case 0x18e4e4u: goto label_18e4e4;
        case 0x18e4e8u: goto label_18e4e8;
        case 0x18e4ecu: goto label_18e4ec;
        case 0x18e4f0u: goto label_18e4f0;
        case 0x18e4f4u: goto label_18e4f4;
        case 0x18e4f8u: goto label_18e4f8;
        case 0x18e4fcu: goto label_18e4fc;
        case 0x18e500u: goto label_18e500;
        case 0x18e504u: goto label_18e504;
        case 0x18e508u: goto label_18e508;
        case 0x18e50cu: goto label_18e50c;
        case 0x18e510u: goto label_18e510;
        case 0x18e514u: goto label_18e514;
        case 0x18e518u: goto label_18e518;
        case 0x18e51cu: goto label_18e51c;
        case 0x18e520u: goto label_18e520;
        case 0x18e524u: goto label_18e524;
        case 0x18e528u: goto label_18e528;
        case 0x18e52cu: goto label_18e52c;
        case 0x18e530u: goto label_18e530;
        case 0x18e534u: goto label_18e534;
        case 0x18e538u: goto label_18e538;
        case 0x18e53cu: goto label_18e53c;
        case 0x18e540u: goto label_18e540;
        case 0x18e544u: goto label_18e544;
        case 0x18e548u: goto label_18e548;
        case 0x18e54cu: goto label_18e54c;
        case 0x18e550u: goto label_18e550;
        case 0x18e554u: goto label_18e554;
        case 0x18e558u: goto label_18e558;
        case 0x18e55cu: goto label_18e55c;
        case 0x18e560u: goto label_18e560;
        case 0x18e564u: goto label_18e564;
        case 0x18e568u: goto label_18e568;
        case 0x18e56cu: goto label_18e56c;
        case 0x18e570u: goto label_18e570;
        case 0x18e574u: goto label_18e574;
        case 0x18e578u: goto label_18e578;
        case 0x18e57cu: goto label_18e57c;
        case 0x18e580u: goto label_18e580;
        case 0x18e584u: goto label_18e584;
        case 0x18e588u: goto label_18e588;
        case 0x18e58cu: goto label_18e58c;
        case 0x18e590u: goto label_18e590;
        case 0x18e594u: goto label_18e594;
        case 0x18e598u: goto label_18e598;
        case 0x18e59cu: goto label_18e59c;
        case 0x18e5a0u: goto label_18e5a0;
        case 0x18e5a4u: goto label_18e5a4;
        case 0x18e5a8u: goto label_18e5a8;
        case 0x18e5acu: goto label_18e5ac;
        case 0x18e5b0u: goto label_18e5b0;
        case 0x18e5b4u: goto label_18e5b4;
        case 0x18e5b8u: goto label_18e5b8;
        case 0x18e5bcu: goto label_18e5bc;
        case 0x18e5c0u: goto label_18e5c0;
        case 0x18e5c4u: goto label_18e5c4;
        case 0x18e5c8u: goto label_18e5c8;
        case 0x18e5ccu: goto label_18e5cc;
        case 0x18e5d0u: goto label_18e5d0;
        case 0x18e5d4u: goto label_18e5d4;
        case 0x18e5d8u: goto label_18e5d8;
        case 0x18e5dcu: goto label_18e5dc;
        case 0x18e5e0u: goto label_18e5e0;
        case 0x18e5e4u: goto label_18e5e4;
        case 0x18e5e8u: goto label_18e5e8;
        case 0x18e5ecu: goto label_18e5ec;
        case 0x18e5f0u: goto label_18e5f0;
        case 0x18e5f4u: goto label_18e5f4;
        case 0x18e5f8u: goto label_18e5f8;
        case 0x18e5fcu: goto label_18e5fc;
        case 0x18e600u: goto label_18e600;
        case 0x18e604u: goto label_18e604;
        case 0x18e608u: goto label_18e608;
        case 0x18e60cu: goto label_18e60c;
        case 0x18e610u: goto label_18e610;
        case 0x18e614u: goto label_18e614;
        case 0x18e618u: goto label_18e618;
        case 0x18e61cu: goto label_18e61c;
        case 0x18e620u: goto label_18e620;
        case 0x18e624u: goto label_18e624;
        case 0x18e628u: goto label_18e628;
        case 0x18e62cu: goto label_18e62c;
        case 0x18e630u: goto label_18e630;
        case 0x18e634u: goto label_18e634;
        case 0x18e638u: goto label_18e638;
        case 0x18e63cu: goto label_18e63c;
        case 0x18e640u: goto label_18e640;
        case 0x18e644u: goto label_18e644;
        case 0x18e648u: goto label_18e648;
        case 0x18e64cu: goto label_18e64c;
        case 0x18e650u: goto label_18e650;
        case 0x18e654u: goto label_18e654;
        case 0x18e658u: goto label_18e658;
        case 0x18e65cu: goto label_18e65c;
        case 0x18e660u: goto label_18e660;
        case 0x18e664u: goto label_18e664;
        case 0x18e668u: goto label_18e668;
        case 0x18e66cu: goto label_18e66c;
        case 0x18e670u: goto label_18e670;
        case 0x18e674u: goto label_18e674;
        case 0x18e678u: goto label_18e678;
        case 0x18e67cu: goto label_18e67c;
        case 0x18e680u: goto label_18e680;
        case 0x18e684u: goto label_18e684;
        case 0x18e688u: goto label_18e688;
        case 0x18e68cu: goto label_18e68c;
        case 0x18e690u: goto label_18e690;
        case 0x18e694u: goto label_18e694;
        case 0x18e698u: goto label_18e698;
        case 0x18e69cu: goto label_18e69c;
        case 0x18e6a0u: goto label_18e6a0;
        case 0x18e6a4u: goto label_18e6a4;
        case 0x18e6a8u: goto label_18e6a8;
        case 0x18e6acu: goto label_18e6ac;
        case 0x18e6b0u: goto label_18e6b0;
        case 0x18e6b4u: goto label_18e6b4;
        case 0x18e6b8u: goto label_18e6b8;
        case 0x18e6bcu: goto label_18e6bc;
        case 0x18e6c0u: goto label_18e6c0;
        case 0x18e6c4u: goto label_18e6c4;
        case 0x18e6c8u: goto label_18e6c8;
        case 0x18e6ccu: goto label_18e6cc;
        case 0x18e6d0u: goto label_18e6d0;
        case 0x18e6d4u: goto label_18e6d4;
        case 0x18e6d8u: goto label_18e6d8;
        case 0x18e6dcu: goto label_18e6dc;
        case 0x18e6e0u: goto label_18e6e0;
        case 0x18e6e4u: goto label_18e6e4;
        case 0x18e6e8u: goto label_18e6e8;
        case 0x18e6ecu: goto label_18e6ec;
        case 0x18e6f0u: goto label_18e6f0;
        case 0x18e6f4u: goto label_18e6f4;
        case 0x18e6f8u: goto label_18e6f8;
        case 0x18e6fcu: goto label_18e6fc;
        case 0x18e700u: goto label_18e700;
        case 0x18e704u: goto label_18e704;
        case 0x18e708u: goto label_18e708;
        case 0x18e70cu: goto label_18e70c;
        case 0x18e710u: goto label_18e710;
        case 0x18e714u: goto label_18e714;
        case 0x18e718u: goto label_18e718;
        case 0x18e71cu: goto label_18e71c;
        case 0x18e720u: goto label_18e720;
        case 0x18e724u: goto label_18e724;
        case 0x18e728u: goto label_18e728;
        case 0x18e72cu: goto label_18e72c;
        case 0x18e730u: goto label_18e730;
        case 0x18e734u: goto label_18e734;
        case 0x18e738u: goto label_18e738;
        case 0x18e73cu: goto label_18e73c;
        case 0x18e740u: goto label_18e740;
        case 0x18e744u: goto label_18e744;
        case 0x18e748u: goto label_18e748;
        case 0x18e74cu: goto label_18e74c;
        case 0x18e750u: goto label_18e750;
        case 0x18e754u: goto label_18e754;
        case 0x18e758u: goto label_18e758;
        case 0x18e75cu: goto label_18e75c;
        case 0x18e760u: goto label_18e760;
        case 0x18e764u: goto label_18e764;
        case 0x18e768u: goto label_18e768;
        case 0x18e76cu: goto label_18e76c;
        case 0x18e770u: goto label_18e770;
        case 0x18e774u: goto label_18e774;
        case 0x18e778u: goto label_18e778;
        case 0x18e77cu: goto label_18e77c;
        case 0x18e780u: goto label_18e780;
        case 0x18e784u: goto label_18e784;
        case 0x18e788u: goto label_18e788;
        case 0x18e78cu: goto label_18e78c;
        case 0x18e790u: goto label_18e790;
        case 0x18e794u: goto label_18e794;
        case 0x18e798u: goto label_18e798;
        case 0x18e79cu: goto label_18e79c;
        case 0x18e7a0u: goto label_18e7a0;
        case 0x18e7a4u: goto label_18e7a4;
        case 0x18e7a8u: goto label_18e7a8;
        case 0x18e7acu: goto label_18e7ac;
        case 0x18e7b0u: goto label_18e7b0;
        case 0x18e7b4u: goto label_18e7b4;
        case 0x18e7b8u: goto label_18e7b8;
        case 0x18e7bcu: goto label_18e7bc;
        case 0x18e7c0u: goto label_18e7c0;
        case 0x18e7c4u: goto label_18e7c4;
        case 0x18e7c8u: goto label_18e7c8;
        case 0x18e7ccu: goto label_18e7cc;
        case 0x18e7d0u: goto label_18e7d0;
        case 0x18e7d4u: goto label_18e7d4;
        case 0x18e7d8u: goto label_18e7d8;
        case 0x18e7dcu: goto label_18e7dc;
        case 0x18e7e0u: goto label_18e7e0;
        case 0x18e7e4u: goto label_18e7e4;
        case 0x18e7e8u: goto label_18e7e8;
        case 0x18e7ecu: goto label_18e7ec;
        case 0x18e7f0u: goto label_18e7f0;
        case 0x18e7f4u: goto label_18e7f4;
        case 0x18e7f8u: goto label_18e7f8;
        case 0x18e7fcu: goto label_18e7fc;
        case 0x18e800u: goto label_18e800;
        case 0x18e804u: goto label_18e804;
        case 0x18e808u: goto label_18e808;
        case 0x18e80cu: goto label_18e80c;
        case 0x18e810u: goto label_18e810;
        case 0x18e814u: goto label_18e814;
        case 0x18e818u: goto label_18e818;
        case 0x18e81cu: goto label_18e81c;
        case 0x18e820u: goto label_18e820;
        case 0x18e824u: goto label_18e824;
        case 0x18e828u: goto label_18e828;
        case 0x18e82cu: goto label_18e82c;
        case 0x18e830u: goto label_18e830;
        case 0x18e834u: goto label_18e834;
        case 0x18e838u: goto label_18e838;
        case 0x18e83cu: goto label_18e83c;
        case 0x18e840u: goto label_18e840;
        case 0x18e844u: goto label_18e844;
        case 0x18e848u: goto label_18e848;
        case 0x18e84cu: goto label_18e84c;
        case 0x18e850u: goto label_18e850;
        case 0x18e854u: goto label_18e854;
        case 0x18e858u: goto label_18e858;
        case 0x18e85cu: goto label_18e85c;
        case 0x18e860u: goto label_18e860;
        case 0x18e864u: goto label_18e864;
        case 0x18e868u: goto label_18e868;
        case 0x18e86cu: goto label_18e86c;
        case 0x18e870u: goto label_18e870;
        case 0x18e874u: goto label_18e874;
        case 0x18e878u: goto label_18e878;
        case 0x18e87cu: goto label_18e87c;
        case 0x18e880u: goto label_18e880;
        case 0x18e884u: goto label_18e884;
        case 0x18e888u: goto label_18e888;
        case 0x18e88cu: goto label_18e88c;
        case 0x18e890u: goto label_18e890;
        case 0x18e894u: goto label_18e894;
        case 0x18e898u: goto label_18e898;
        case 0x18e89cu: goto label_18e89c;
        case 0x18e8a0u: goto label_18e8a0;
        case 0x18e8a4u: goto label_18e8a4;
        case 0x18e8a8u: goto label_18e8a8;
        case 0x18e8acu: goto label_18e8ac;
        case 0x18e8b0u: goto label_18e8b0;
        case 0x18e8b4u: goto label_18e8b4;
        case 0x18e8b8u: goto label_18e8b8;
        case 0x18e8bcu: goto label_18e8bc;
        case 0x18e8c0u: goto label_18e8c0;
        case 0x18e8c4u: goto label_18e8c4;
        case 0x18e8c8u: goto label_18e8c8;
        case 0x18e8ccu: goto label_18e8cc;
        case 0x18e8d0u: goto label_18e8d0;
        case 0x18e8d4u: goto label_18e8d4;
        case 0x18e8d8u: goto label_18e8d8;
        case 0x18e8dcu: goto label_18e8dc;
        case 0x18e8e0u: goto label_18e8e0;
        case 0x18e8e4u: goto label_18e8e4;
        case 0x18e8e8u: goto label_18e8e8;
        case 0x18e8ecu: goto label_18e8ec;
        case 0x18e8f0u: goto label_18e8f0;
        case 0x18e8f4u: goto label_18e8f4;
        case 0x18e8f8u: goto label_18e8f8;
        case 0x18e8fcu: goto label_18e8fc;
        case 0x18e900u: goto label_18e900;
        case 0x18e904u: goto label_18e904;
        case 0x18e908u: goto label_18e908;
        case 0x18e90cu: goto label_18e90c;
        case 0x18e910u: goto label_18e910;
        case 0x18e914u: goto label_18e914;
        case 0x18e918u: goto label_18e918;
        case 0x18e91cu: goto label_18e91c;
        case 0x18e920u: goto label_18e920;
        case 0x18e924u: goto label_18e924;
        case 0x18e928u: goto label_18e928;
        case 0x18e92cu: goto label_18e92c;
        case 0x18e930u: goto label_18e930;
        case 0x18e934u: goto label_18e934;
        case 0x18e938u: goto label_18e938;
        case 0x18e93cu: goto label_18e93c;
        case 0x18e940u: goto label_18e940;
        case 0x18e944u: goto label_18e944;
        case 0x18e948u: goto label_18e948;
        case 0x18e94cu: goto label_18e94c;
        case 0x18e950u: goto label_18e950;
        case 0x18e954u: goto label_18e954;
        case 0x18e958u: goto label_18e958;
        case 0x18e95cu: goto label_18e95c;
        case 0x18e960u: goto label_18e960;
        case 0x18e964u: goto label_18e964;
        case 0x18e968u: goto label_18e968;
        case 0x18e96cu: goto label_18e96c;
        case 0x18e970u: goto label_18e970;
        case 0x18e974u: goto label_18e974;
        case 0x18e978u: goto label_18e978;
        case 0x18e97cu: goto label_18e97c;
        case 0x18e980u: goto label_18e980;
        case 0x18e984u: goto label_18e984;
        case 0x18e988u: goto label_18e988;
        case 0x18e98cu: goto label_18e98c;
        case 0x18e990u: goto label_18e990;
        case 0x18e994u: goto label_18e994;
        case 0x18e998u: goto label_18e998;
        case 0x18e99cu: goto label_18e99c;
        case 0x18e9a0u: goto label_18e9a0;
        case 0x18e9a4u: goto label_18e9a4;
        case 0x18e9a8u: goto label_18e9a8;
        case 0x18e9acu: goto label_18e9ac;
        case 0x18e9b0u: goto label_18e9b0;
        case 0x18e9b4u: goto label_18e9b4;
        case 0x18e9b8u: goto label_18e9b8;
        case 0x18e9bcu: goto label_18e9bc;
        case 0x18e9c0u: goto label_18e9c0;
        case 0x18e9c4u: goto label_18e9c4;
        case 0x18e9c8u: goto label_18e9c8;
        case 0x18e9ccu: goto label_18e9cc;
        case 0x18e9d0u: goto label_18e9d0;
        case 0x18e9d4u: goto label_18e9d4;
        case 0x18e9d8u: goto label_18e9d8;
        case 0x18e9dcu: goto label_18e9dc;
        case 0x18e9e0u: goto label_18e9e0;
        case 0x18e9e4u: goto label_18e9e4;
        case 0x18e9e8u: goto label_18e9e8;
        case 0x18e9ecu: goto label_18e9ec;
        case 0x18e9f0u: goto label_18e9f0;
        case 0x18e9f4u: goto label_18e9f4;
        case 0x18e9f8u: goto label_18e9f8;
        case 0x18e9fcu: goto label_18e9fc;
        case 0x18ea00u: goto label_18ea00;
        case 0x18ea04u: goto label_18ea04;
        case 0x18ea08u: goto label_18ea08;
        case 0x18ea0cu: goto label_18ea0c;
        case 0x18ea10u: goto label_18ea10;
        case 0x18ea14u: goto label_18ea14;
        case 0x18ea18u: goto label_18ea18;
        case 0x18ea1cu: goto label_18ea1c;
        case 0x18ea20u: goto label_18ea20;
        case 0x18ea24u: goto label_18ea24;
        case 0x18ea28u: goto label_18ea28;
        case 0x18ea2cu: goto label_18ea2c;
        case 0x18ea30u: goto label_18ea30;
        case 0x18ea34u: goto label_18ea34;
        case 0x18ea38u: goto label_18ea38;
        case 0x18ea3cu: goto label_18ea3c;
        case 0x18ea40u: goto label_18ea40;
        case 0x18ea44u: goto label_18ea44;
        case 0x18ea48u: goto label_18ea48;
        case 0x18ea4cu: goto label_18ea4c;
        case 0x18ea50u: goto label_18ea50;
        case 0x18ea54u: goto label_18ea54;
        case 0x18ea58u: goto label_18ea58;
        case 0x18ea5cu: goto label_18ea5c;
        case 0x18ea60u: goto label_18ea60;
        case 0x18ea64u: goto label_18ea64;
        case 0x18ea68u: goto label_18ea68;
        case 0x18ea6cu: goto label_18ea6c;
        case 0x18ea70u: goto label_18ea70;
        case 0x18ea74u: goto label_18ea74;
        case 0x18ea78u: goto label_18ea78;
        case 0x18ea7cu: goto label_18ea7c;
        case 0x18ea80u: goto label_18ea80;
        case 0x18ea84u: goto label_18ea84;
        case 0x18ea88u: goto label_18ea88;
        case 0x18ea8cu: goto label_18ea8c;
        case 0x18ea90u: goto label_18ea90;
        case 0x18ea94u: goto label_18ea94;
        case 0x18ea98u: goto label_18ea98;
        case 0x18ea9cu: goto label_18ea9c;
        case 0x18eaa0u: goto label_18eaa0;
        case 0x18eaa4u: goto label_18eaa4;
        case 0x18eaa8u: goto label_18eaa8;
        case 0x18eaacu: goto label_18eaac;
        case 0x18eab0u: goto label_18eab0;
        case 0x18eab4u: goto label_18eab4;
        case 0x18eab8u: goto label_18eab8;
        case 0x18eabcu: goto label_18eabc;
        case 0x18eac0u: goto label_18eac0;
        case 0x18eac4u: goto label_18eac4;
        case 0x18eac8u: goto label_18eac8;
        case 0x18eaccu: goto label_18eacc;
        case 0x18ead0u: goto label_18ead0;
        case 0x18ead4u: goto label_18ead4;
        case 0x18ead8u: goto label_18ead8;
        case 0x18eadcu: goto label_18eadc;
        case 0x18eae0u: goto label_18eae0;
        case 0x18eae4u: goto label_18eae4;
        case 0x18eae8u: goto label_18eae8;
        case 0x18eaecu: goto label_18eaec;
        case 0x18eaf0u: goto label_18eaf0;
        case 0x18eaf4u: goto label_18eaf4;
        case 0x18eaf8u: goto label_18eaf8;
        case 0x18eafcu: goto label_18eafc;
        case 0x18eb00u: goto label_18eb00;
        case 0x18eb04u: goto label_18eb04;
        case 0x18eb08u: goto label_18eb08;
        case 0x18eb0cu: goto label_18eb0c;
        default: return;
    }

label_18e340:
    // 0x18e340: 0x3c060028  lui         $a2, 0x28
    ctx->pc = 0x18e340u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)40 << 16));
label_18e344:
    // 0x18e344: 0x26840010  addiu       $a0, $s4, 0x10
    ctx->pc = 0x18e344u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
label_18e348:
    // 0x18e348: 0x27a50160  addiu       $a1, $sp, 0x160
    ctx->pc = 0x18e348u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_18e34c:
    // 0x18e34c: 0xc066d7a  jal         func_19B5E8
label_18e350:
    if (ctx->pc == 0x18E350u) {
        ctx->pc = 0x18E350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E34Cu;
        // 0x18e350: 0x24c62f70  addiu       $a2, $a2, 0x2F70 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E354u;
        goto label_18e354;
    }
    ctx->pc = 0x18E34Cu;
    SET_GPR_U32(ctx, 31, 0x18E354u);
    ctx->pc = 0x18E350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E34Cu;
    // 0x18e350: 0x24c62f70  addiu       $a2, $a2, 0x2F70 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B5E8u;
    { ctx->pc = 0x19b5e8; return; }
    ctx->pc = 0x18E354u;
label_18e354:
    // 0x18e354: 0x3c060028  lui         $a2, 0x28
    ctx->pc = 0x18e354u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)40 << 16));
label_18e358:
    // 0x18e358: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x18e358u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_18e35c:
    // 0x18e35c: 0x27a50160  addiu       $a1, $sp, 0x160
    ctx->pc = 0x18e35cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_18e360:
    // 0x18e360: 0xc066d7a  jal         func_19B5E8
label_18e364:
    if (ctx->pc == 0x18E364u) {
        ctx->pc = 0x18E364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E360u;
        // 0x18e364: 0x24c62f80  addiu       $a2, $a2, 0x2F80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E368u;
        goto label_18e368;
    }
    ctx->pc = 0x18E360u;
    SET_GPR_U32(ctx, 31, 0x18E368u);
    ctx->pc = 0x18E364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E360u;
    // 0x18e364: 0x24c62f80  addiu       $a2, $a2, 0x2F80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B5E8u;
    { ctx->pc = 0x19b5e8; return; }
    ctx->pc = 0x18E368u;
label_18e368:
    // 0x18e368: 0x8e8300e8  lw          $v1, 0xE8($s4)
    ctx->pc = 0x18e368u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 232)));
label_18e36c:
    // 0x18e36c: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x18e36cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_18e370:
    // 0x18e370: 0x24429c40  addiu       $v0, $v0, -0x63C0
    ctx->pc = 0x18e370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941760));
label_18e374:
    // 0x18e374: 0x26850030  addiu       $a1, $s4, 0x30
    ctx->pc = 0x18e374u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
label_18e378:
    // 0x18e378: 0x26860010  addiu       $a2, $s4, 0x10
    ctx->pc = 0x18e378u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
label_18e37c:
    // 0x18e37c: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x18e37cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_18e380:
    // 0x18e380: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x18e380u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
label_18e384:
    // 0x18e384: 0xc066f08  jal         func_19BC20
label_18e388:
    if (ctx->pc == 0x18E388u) {
        ctx->pc = 0x18E388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E384u;
        // 0x18e388: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E38Cu;
        goto label_18e38c;
    }
    ctx->pc = 0x18E384u;
    SET_GPR_U32(ctx, 31, 0x18E38Cu);
    ctx->pc = 0x18E388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E384u;
    // 0x18e388: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BC20u;
    { ctx->pc = 0x19bc20; return; }
    ctx->pc = 0x18E38Cu;
label_18e38c:
    // 0x18e38c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x18e38cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_18e390:
    // 0x18e390: 0xc0643e4  jal         func_190F90
label_18e394:
    if (ctx->pc == 0x18E394u) {
        ctx->pc = 0x18E394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E390u;
        // 0x18e394: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E398u;
        goto label_18e398;
    }
    ctx->pc = 0x18E390u;
    SET_GPR_U32(ctx, 31, 0x18E398u);
    ctx->pc = 0x18E394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E390u;
    // 0x18e394: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190F90u;
    { ctx->pc = 0x190f90; return; }
    ctx->pc = 0x18E398u;
label_18e398:
    // 0x18e398: 0x1000038e  b           . + 4 + (0x38E << 2)
label_18e39c:
    if (ctx->pc == 0x18E39Cu) {
        ctx->pc = 0x18E3A0u;
        goto label_18e3a0;
    }
    ctx->pc = 0x18E398u;
    {
        const bool branch_taken_0x18e398 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e398) {
            ctx->pc = 0x18F1D4u;
            { ctx->pc = 0x18f1d4; return; }
        }
    }
    ctx->pc = 0x18E3A0u;
label_18e3a0:
    // 0x18e3a0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x18e3a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_18e3a4:
    // 0x18e3a4: 0x16230248  bne         $s1, $v1, . + 4 + (0x248 << 2)
label_18e3a8:
    if (ctx->pc == 0x18E3A8u) {
        ctx->pc = 0x18E3ACu;
        goto label_18e3ac;
    }
    ctx->pc = 0x18E3A4u;
    {
        const bool branch_taken_0x18e3a4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        if (branch_taken_0x18e3a4) {
            ctx->pc = 0x18ECC8u;
            { ctx->pc = 0x18ecc8; return; }
        }
    }
    ctx->pc = 0x18E3ACu;
label_18e3ac:
    // 0x18e3ac: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x18e3acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18e3b0:
    // 0x18e3b0: 0x14430245  bne         $v0, $v1, . + 4 + (0x245 << 2)
label_18e3b4:
    if (ctx->pc == 0x18E3B4u) {
        ctx->pc = 0x18E3B8u;
        goto label_18e3b8;
    }
    ctx->pc = 0x18E3B0u;
    {
        const bool branch_taken_0x18e3b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x18e3b0) {
            ctx->pc = 0x18ECC8u;
            { ctx->pc = 0x18ecc8; return; }
        }
    }
    ctx->pc = 0x18E3B8u;
label_18e3b8:
    // 0x18e3b8: 0x3c02002d  lui         $v0, 0x2D
    ctx->pc = 0x18e3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
label_18e3bc:
    // 0x18e3bc: 0x244262e0  addiu       $v0, $v0, 0x62E0
    ctx->pc = 0x18e3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25312));
label_18e3c0:
    // 0x18e3c0: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x18e3c0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
label_18e3c4:
    // 0x18e3c4: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x18e3c4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_18e3c8:
    // 0x18e3c8: 0x4be110ec  vsub.xyzw   $vf3, $vf2, $vf1
    ctx->pc = 0x18e3c8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_18e3cc:
    // 0x18e3cc: 0x4a0002ff  vnop
    ctx->pc = 0x18e3ccu;
    // NOP operation, no action needed for VU0
label_18e3d0:
    // 0x18e3d0: 0x4a0002ff  vnop
    ctx->pc = 0x18e3d0u;
    // NOP operation, no action needed for VU0
label_18e3d4:
    // 0x18e3d4: 0x4a0002ff  vnop
    ctx->pc = 0x18e3d4u;
    // NOP operation, no action needed for VU0
label_18e3d8:
    // 0x18e3d8: 0x4b03f99a  vmulz.x     $vf6, $vf31, $vf3z
    ctx->pc = 0x18e3d8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
label_18e3dc:
    // 0x18e3dc: 0x4a0002ff  vnop
    ctx->pc = 0x18e3dcu;
    // NOP operation, no action needed for VU0
label_18e3e0:
    // 0x18e3e0: 0x4a0002ff  vnop
    ctx->pc = 0x18e3e0u;
    // NOP operation, no action needed for VU0
label_18e3e4:
    // 0x18e3e4: 0x4b0319bc  vmulax.x    $ACC, $vf3, $vf3x
    ctx->pc = 0x18e3e4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
label_18e3e8:
    // 0x18e3e8: 0x4b03310a  vmaddz.x    $vf4, $vf6, $vf3z
    ctx->pc = 0x18e3e8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_18e3ec:
    // 0x18e3ec: 0x4a0002ff  vnop
    ctx->pc = 0x18e3ecu;
    // NOP operation, no action needed for VU0
label_18e3f0:
    // 0x18e3f0: 0x4a0002ff  vnop
    ctx->pc = 0x18e3f0u;
    // NOP operation, no action needed for VU0
label_18e3f4:
    // 0x18e3f4: 0x4a0002ff  vnop
    ctx->pc = 0x18e3f4u;
    // NOP operation, no action needed for VU0
label_18e3f8:
    // 0x18e3f8: 0x4a0403bd  .word       0x4A0403BD                   # vsqrt       $Q, $vf4x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x18e3f8u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
label_18e3fc:
    // 0x18e3fc: 0x4a0003bf  vwaitq
    ctx->pc = 0x18e3fcu;
    // VWAITQ (Q already resolved in this runtime)
label_18e400:
    // 0x18e400: 0x4849b000  cfc2.ni     $t1, $vi22
    ctx->pc = 0x18e400u;
    { uint32_t bits; std::memcpy(&bits, &ctx->vu0_q, sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
label_18e404:
    // 0x18e404: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x18e404u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18e408:
    // 0x18e408: 0x3c02002d  lui         $v0, 0x2D
    ctx->pc = 0x18e408u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
label_18e40c:
    // 0x18e40c: 0xaf898858  sw          $t1, -0x77A8($gp)
    ctx->pc = 0x18e40cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936664), GPR_U32(ctx, 9));
label_18e410:
    // 0x18e410: 0x244262f0  addiu       $v0, $v0, 0x62F0
    ctx->pc = 0x18e410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25328));
label_18e414:
    // 0x18e414: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x18e414u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
label_18e418:
    // 0x18e418: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x18e418u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_18e41c:
    // 0x18e41c: 0x4be110ec  vsub.xyzw   $vf3, $vf2, $vf1
    ctx->pc = 0x18e41cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_18e420:
    // 0x18e420: 0x4a0002ff  vnop
    ctx->pc = 0x18e420u;
    // NOP operation, no action needed for VU0
label_18e424:
    // 0x18e424: 0x4a0002ff  vnop
    ctx->pc = 0x18e424u;
    // NOP operation, no action needed for VU0
label_18e428:
    // 0x18e428: 0x4a0002ff  vnop
    ctx->pc = 0x18e428u;
    // NOP operation, no action needed for VU0
label_18e42c:
    // 0x18e42c: 0x4b03f99a  vmulz.x     $vf6, $vf31, $vf3z
    ctx->pc = 0x18e42cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
label_18e430:
    // 0x18e430: 0x4a0002ff  vnop
    ctx->pc = 0x18e430u;
    // NOP operation, no action needed for VU0
label_18e434:
    // 0x18e434: 0x4a0002ff  vnop
    ctx->pc = 0x18e434u;
    // NOP operation, no action needed for VU0
label_18e438:
    // 0x18e438: 0x4b0319bc  vmulax.x    $ACC, $vf3, $vf3x
    ctx->pc = 0x18e438u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
label_18e43c:
    // 0x18e43c: 0x4b03310a  vmaddz.x    $vf4, $vf6, $vf3z
    ctx->pc = 0x18e43cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_18e440:
    // 0x18e440: 0x4a0002ff  vnop
    ctx->pc = 0x18e440u;
    // NOP operation, no action needed for VU0
label_18e444:
    // 0x18e444: 0x4a0002ff  vnop
    ctx->pc = 0x18e444u;
    // NOP operation, no action needed for VU0
label_18e448:
    // 0x18e448: 0x4a0002ff  vnop
    ctx->pc = 0x18e448u;
    // NOP operation, no action needed for VU0
label_18e44c:
    // 0x18e44c: 0x4a0403bd  .word       0x4A0403BD                   # vsqrt       $Q, $vf4x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x18e44cu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
label_18e450:
    // 0x18e450: 0x4a0003bf  vwaitq
    ctx->pc = 0x18e450u;
    // VWAITQ (Q already resolved in this runtime)
label_18e454:
    // 0x18e454: 0x4849b000  cfc2.ni     $t1, $vi22
    ctx->pc = 0x18e454u;
    { uint32_t bits; std::memcpy(&bits, &ctx->vu0_q, sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
label_18e458:
    // 0x18e458: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x18e458u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18e45c:
    // 0x18e45c: 0x3c02002d  lui         $v0, 0x2D
    ctx->pc = 0x18e45cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
label_18e460:
    // 0x18e460: 0xaf898854  sw          $t1, -0x77AC($gp)
    ctx->pc = 0x18e460u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936660), GPR_U32(ctx, 9));
label_18e464:
    // 0x18e464: 0x24426380  addiu       $v0, $v0, 0x6380
    ctx->pc = 0x18e464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25472));
label_18e468:
    // 0x18e468: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x18e468u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
label_18e46c:
    // 0x18e46c: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x18e46cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_18e470:
    // 0x18e470: 0x4be110ec  vsub.xyzw   $vf3, $vf2, $vf1
    ctx->pc = 0x18e470u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_18e474:
    // 0x18e474: 0x4a0002ff  vnop
    ctx->pc = 0x18e474u;
    // NOP operation, no action needed for VU0
label_18e478:
    // 0x18e478: 0x4a0002ff  vnop
    ctx->pc = 0x18e478u;
    // NOP operation, no action needed for VU0
label_18e47c:
    // 0x18e47c: 0x4a0002ff  vnop
    ctx->pc = 0x18e47cu;
    // NOP operation, no action needed for VU0
label_18e480:
    // 0x18e480: 0x4b03f99a  vmulz.x     $vf6, $vf31, $vf3z
    ctx->pc = 0x18e480u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
label_18e484:
    // 0x18e484: 0x4a0002ff  vnop
    ctx->pc = 0x18e484u;
    // NOP operation, no action needed for VU0
label_18e488:
    // 0x18e488: 0x4a0002ff  vnop
    ctx->pc = 0x18e488u;
    // NOP operation, no action needed for VU0
label_18e48c:
    // 0x18e48c: 0x4b0319bc  vmulax.x    $ACC, $vf3, $vf3x
    ctx->pc = 0x18e48cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
label_18e490:
    // 0x18e490: 0x4b03310a  vmaddz.x    $vf4, $vf6, $vf3z
    ctx->pc = 0x18e490u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_18e494:
    // 0x18e494: 0x4a0002ff  vnop
    ctx->pc = 0x18e494u;
    // NOP operation, no action needed for VU0
label_18e498:
    // 0x18e498: 0x4a0002ff  vnop
    ctx->pc = 0x18e498u;
    // NOP operation, no action needed for VU0
label_18e49c:
    // 0x18e49c: 0x4a0002ff  vnop
    ctx->pc = 0x18e49cu;
    // NOP operation, no action needed for VU0
label_18e4a0:
    // 0x18e4a0: 0x4a0403bd  .word       0x4A0403BD                   # vsqrt       $Q, $vf4x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x18e4a0u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
label_18e4a4:
    // 0x18e4a4: 0x4a0003bf  vwaitq
    ctx->pc = 0x18e4a4u;
    // VWAITQ (Q already resolved in this runtime)
label_18e4a8:
    // 0x18e4a8: 0x4849b000  cfc2.ni     $t1, $vi22
    ctx->pc = 0x18e4a8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->vu0_q, sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
label_18e4ac:
    // 0x18e4ac: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x18e4acu;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18e4b0:
    // 0x18e4b0: 0xaf898850  sw          $t1, -0x77B0($gp)
    ctx->pc = 0x18e4b0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936656), GPR_U32(ctx, 9));
label_18e4b4:
    // 0x18e4b4: 0xc7818858  lwc1        $f1, -0x77A8($gp)
    ctx->pc = 0x18e4b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936664)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_18e4b8:
    // 0x18e4b8: 0xaf80884c  sw          $zero, -0x77B4($gp)
    ctx->pc = 0x18e4b8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936652), GPR_U32(ctx, 0));
label_18e4bc:
    // 0x18e4bc: 0xc7808854  lwc1        $f0, -0x77AC($gp)
    ctx->pc = 0x18e4bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936660)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18e4c0:
    // 0x18e4c0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x18e4c0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18e4c4:
    // 0x18e4c4: 0x0  nop
    ctx->pc = 0x18e4c4u;
    // NOP
label_18e4c8:
    // 0x18e4c8: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_18e4cc:
    if (ctx->pc == 0x18E4CCu) {
        ctx->pc = 0x18E4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E4C8u;
        // 0x18e4cc: 0xaf838848  sw          $v1, -0x77B8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936648), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E4D0u;
        goto label_18e4d0;
    }
    ctx->pc = 0x18E4C8u;
    {
        const bool branch_taken_0x18e4c8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x18E4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E4C8u;
        // 0x18e4cc: 0xaf838848  sw          $v1, -0x77B8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936648), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e4c8) {
            ctx->pc = 0x18E4D8u;
            goto label_18e4d8;
        }
    }
    ctx->pc = 0x18E4D0u;
label_18e4d0:
    // 0x18e4d0: 0xaf83884c  sw          $v1, -0x77B4($gp)
    ctx->pc = 0x18e4d0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936652), GPR_U32(ctx, 3));
label_18e4d4:
    // 0x18e4d4: 0xaf808848  sw          $zero, -0x77B8($gp)
    ctx->pc = 0x18e4d4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936648), GPR_U32(ctx, 0));
label_18e4d8:
    // 0x18e4d8: 0x8f83884c  lw          $v1, -0x77B4($gp)
    ctx->pc = 0x18e4d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936652)));
label_18e4dc:
    // 0x18e4dc: 0x3c02002d  lui         $v0, 0x2D
    ctx->pc = 0x18e4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
label_18e4e0:
    // 0x18e4e0: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x18e4e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
label_18e4e4:
    // 0x18e4e4: 0x244261a0  addiu       $v0, $v0, 0x61A0
    ctx->pc = 0x18e4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24992));
label_18e4e8:
    // 0x18e4e8: 0x24a56240  addiu       $a1, $a1, 0x6240
    ctx->pc = 0x18e4e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25152));
label_18e4ec:
    // 0x18e4ec: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x18e4ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_18e4f0:
    // 0x18e4f0: 0xc066da0  jal         func_19B680
label_18e4f4:
    if (ctx->pc == 0x18E4F4u) {
        ctx->pc = 0x18E4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E4F0u;
        // 0x18e4f4: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E4F8u;
        goto label_18e4f8;
    }
    ctx->pc = 0x18E4F0u;
    SET_GPR_U32(ctx, 31, 0x18E4F8u);
    ctx->pc = 0x18E4F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E4F0u;
    // 0x18e4f4: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B680u;
    { ctx->pc = 0x19b680; return; }
    ctx->pc = 0x18E4F8u;
label_18e4f8:
    // 0x18e4f8: 0xc06d448  jal         func_1B5120
label_18e4fc:
    if (ctx->pc == 0x18E4FCu) {
        ctx->pc = 0x18E4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E4F8u;
        // 0x18e4fc: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E500u;
        goto label_18e500;
    }
    ctx->pc = 0x18E4F8u;
    SET_GPR_U32(ctx, 31, 0x18E500u);
    ctx->pc = 0x18E4FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E4F8u;
    // 0x18e4fc: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5120u;
    { ctx->pc = 0x1b5120; return; }
    ctx->pc = 0x18E500u;
label_18e500:
    // 0x18e500: 0x3c023f7d  lui         $v0, 0x3F7D
    ctx->pc = 0x18e500u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16253 << 16));
label_18e504:
    // 0x18e504: 0x344270a4  ori         $v0, $v0, 0x70A4
    ctx->pc = 0x18e504u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28836);
label_18e508:
    // 0x18e508: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x18e508u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_18e50c:
    // 0x18e50c: 0x0  nop
    ctx->pc = 0x18e50cu;
    // NOP
label_18e510:
    // 0x18e510: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x18e510u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18e514:
    // 0x18e514: 0x0  nop
    ctx->pc = 0x18e514u;
    // NOP
label_18e518:
    // 0x18e518: 0x4501000c  bc1t        . + 4 + (0xC << 2)
label_18e51c:
    if (ctx->pc == 0x18E51Cu) {
        ctx->pc = 0x18E520u;
        goto label_18e520;
    }
    ctx->pc = 0x18E518u;
    {
        const bool branch_taken_0x18e518 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x18e518) {
            ctx->pc = 0x18E54Cu;
            goto label_18e54c;
        }
    }
    ctx->pc = 0x18E520u;
label_18e520:
    // 0x18e520: 0xae8000a4  sw          $zero, 0xA4($s4)
    ctx->pc = 0x18e520u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 164), GPR_U32(ctx, 0));
label_18e524:
    // 0x18e524: 0x3c02002d  lui         $v0, 0x2D
    ctx->pc = 0x18e524u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
label_18e528:
    // 0x18e528: 0x8f83884c  lw          $v1, -0x77B4($gp)
    ctx->pc = 0x18e528u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936652)));
label_18e52c:
    // 0x18e52c: 0x244262e0  addiu       $v0, $v0, 0x62E0
    ctx->pc = 0x18e52cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25312));
label_18e530:
    // 0x18e530: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x18e530u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_18e534:
    // 0x18e534: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x18e534u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18e538:
    // 0x18e538: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x18e538u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_18e53c:
    // 0x18e53c: 0xc066e26  jal         func_19B898
label_18e540:
    if (ctx->pc == 0x18E540u) {
        ctx->pc = 0x18E540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E53Cu;
        // 0x18e540: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E544u;
        goto label_18e544;
    }
    ctx->pc = 0x18E53Cu;
    SET_GPR_U32(ctx, 31, 0x18E544u);
    ctx->pc = 0x18E540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E53Cu;
    // 0x18e540: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x18E544u;
label_18e544:
    // 0x18e544: 0x10000323  b           . + 4 + (0x323 << 2)
label_18e548:
    if (ctx->pc == 0x18E548u) {
        ctx->pc = 0x18E54Cu;
        goto label_18e54c;
    }
    ctx->pc = 0x18E544u;
    {
        const bool branch_taken_0x18e544 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e544) {
            ctx->pc = 0x18F1D4u;
            { ctx->pc = 0x18f1d4; return; }
        }
    }
    ctx->pc = 0x18E54Cu;
label_18e54c:
    // 0x18e54c: 0xc7818850  lwc1        $f1, -0x77B0($gp)
    ctx->pc = 0x18e54cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936656)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_18e550:
    // 0x18e550: 0xc7808854  lwc1        $f0, -0x77AC($gp)
    ctx->pc = 0x18e550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936660)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18e554:
    // 0x18e554: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x18e554u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18e558:
    // 0x18e558: 0x0  nop
    ctx->pc = 0x18e558u;
    // NOP
label_18e55c:
    // 0x18e55c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_18e560:
    if (ctx->pc == 0x18E560u) {
        ctx->pc = 0x18E564u;
        goto label_18e564;
    }
    ctx->pc = 0x18E55Cu;
    {
        const bool branch_taken_0x18e55c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x18e55c) {
            ctx->pc = 0x18E578u;
            goto label_18e578;
        }
    }
    ctx->pc = 0x18E564u;
label_18e564:
    // 0x18e564: 0xc7808858  lwc1        $f0, -0x77A8($gp)
    ctx->pc = 0x18e564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936664)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18e568:
    // 0x18e568: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x18e568u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18e56c:
    // 0x18e56c: 0x0  nop
    ctx->pc = 0x18e56cu;
    // NOP
label_18e570:
    // 0x18e570: 0x4500000c  bc1f        . + 4 + (0xC << 2)
label_18e574:
    if (ctx->pc == 0x18E574u) {
        ctx->pc = 0x18E578u;
        goto label_18e578;
    }
    ctx->pc = 0x18E570u;
    {
        const bool branch_taken_0x18e570 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x18e570) {
            ctx->pc = 0x18E5A4u;
            goto label_18e5a4;
        }
    }
    ctx->pc = 0x18E578u;
label_18e578:
    // 0x18e578: 0xc7818850  lwc1        $f1, -0x77B0($gp)
    ctx->pc = 0x18e578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936656)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_18e57c:
    // 0x18e57c: 0xc7808858  lwc1        $f0, -0x77A8($gp)
    ctx->pc = 0x18e57cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936664)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18e580:
    // 0x18e580: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x18e580u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18e584:
    // 0x18e584: 0x0  nop
    ctx->pc = 0x18e584u;
    // NOP
label_18e588:
    // 0x18e588: 0x450001c4  bc1f        . + 4 + (0x1C4 << 2)
label_18e58c:
    if (ctx->pc == 0x18E58Cu) {
        ctx->pc = 0x18E590u;
        goto label_18e590;
    }
    ctx->pc = 0x18E588u;
    {
        const bool branch_taken_0x18e588 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x18e588) {
            ctx->pc = 0x18EC9Cu;
            { ctx->pc = 0x18ec9c; return; }
        }
    }
    ctx->pc = 0x18E590u;
label_18e590:
    // 0x18e590: 0xc7808854  lwc1        $f0, -0x77AC($gp)
    ctx->pc = 0x18e590u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936660)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18e594:
    // 0x18e594: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x18e594u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18e598:
    // 0x18e598: 0x0  nop
    ctx->pc = 0x18e598u;
    // NOP
label_18e59c:
    // 0x18e59c: 0x450101bf  bc1t        . + 4 + (0x1BF << 2)
label_18e5a0:
    if (ctx->pc == 0x18E5A0u) {
        ctx->pc = 0x18E5A4u;
        goto label_18e5a4;
    }
    ctx->pc = 0x18E59Cu;
    {
        const bool branch_taken_0x18e59c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x18e59c) {
            ctx->pc = 0x18EC9Cu;
            { ctx->pc = 0x18ec9c; return; }
        }
    }
    ctx->pc = 0x18E5A4u;
label_18e5a4:
    // 0x18e5a4: 0x8f84884c  lw          $a0, -0x77B4($gp)
    ctx->pc = 0x18e5a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936652)));
label_18e5a8:
    // 0x18e5a8: 0x3c03002d  lui         $v1, 0x2D
    ctx->pc = 0x18e5a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)45 << 16));
label_18e5ac:
    // 0x18e5ac: 0x3c02002d  lui         $v0, 0x2D
    ctx->pc = 0x18e5acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
label_18e5b0:
    // 0x18e5b0: 0x246361a0  addiu       $v1, $v1, 0x61A0
    ctx->pc = 0x18e5b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24992));
label_18e5b4:
    // 0x18e5b4: 0x244261a8  addiu       $v0, $v0, 0x61A8
    ctx->pc = 0x18e5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25000));
label_18e5b8:
    // 0x18e5b8: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x18e5b8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_18e5bc:
    // 0x18e5bc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x18e5bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_18e5c0:
    // 0x18e5c0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x18e5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_18e5c4:
    // 0x18e5c4: 0xc44d0000  lwc1        $f13, 0x0($v0)
    ctx->pc = 0x18e5c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_18e5c8:
    // 0x18e5c8: 0xc06d51e  jal         func_1B5478
label_18e5cc:
    if (ctx->pc == 0x18E5CCu) {
        ctx->pc = 0x18E5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E5C8u;
        // 0x18e5cc: 0xc46c0000  lwc1        $f12, 0x0($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E5D0u;
        goto label_18e5d0;
    }
    ctx->pc = 0x18E5C8u;
    SET_GPR_U32(ctx, 31, 0x18E5D0u);
    ctx->pc = 0x18E5CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E5C8u;
    // 0x18e5cc: 0xc46c0000  lwc1        $f12, 0x0($v1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5478u;
    { ctx->pc = 0x1b5478; return; }
    ctx->pc = 0x18E5D0u;
label_18e5d0:
    // 0x18e5d0: 0x3c01002d  lui         $at, 0x2D
    ctx->pc = 0x18e5d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)45 << 16));
label_18e5d4:
    // 0x18e5d4: 0xc42c6240  lwc1        $f12, 0x6240($at)
    ctx->pc = 0x18e5d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 25152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_18e5d8:
    // 0x18e5d8: 0x3c01002d  lui         $at, 0x2D
    ctx->pc = 0x18e5d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)45 << 16));
label_18e5dc:
    // 0x18e5dc: 0xc42d6248  lwc1        $f13, 0x6248($at)
    ctx->pc = 0x18e5dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 25160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_18e5e0:
    // 0x18e5e0: 0xc06d51e  jal         func_1B5478
label_18e5e4:
    if (ctx->pc == 0x18E5E4u) {
        ctx->pc = 0x18E5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E5E0u;
        // 0x18e5e4: 0xe7808844  swc1        $f0, -0x77BC($gp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294936644), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E5E8u;
        goto label_18e5e8;
    }
    ctx->pc = 0x18E5E0u;
    SET_GPR_U32(ctx, 31, 0x18E5E8u);
    ctx->pc = 0x18E5E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E5E0u;
    // 0x18e5e4: 0xe7808844  swc1        $f0, -0x77BC($gp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294936644), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5478u;
    { ctx->pc = 0x1b5478; return; }
    ctx->pc = 0x18E5E8u;
label_18e5e8:
    // 0x18e5e8: 0xe7808840  swc1        $f0, -0x77C0($gp)
    ctx->pc = 0x18e5e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294936640), bits); }
label_18e5ec:
    // 0x18e5ec: 0xc7818844  lwc1        $f1, -0x77BC($gp)
    ctx->pc = 0x18e5ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936644)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_18e5f0:
    // 0x18e5f0: 0xc7808840  lwc1        $f0, -0x77C0($gp)
    ctx->pc = 0x18e5f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18e5f4:
    // 0x18e5f4: 0x46000d01  sub.s       $f20, $f1, $f0
    ctx->pc = 0x18e5f4u;
    ctx->f[20] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_18e5f8:
    // 0x18e5f8: 0xc06d448  jal         func_1B5120
label_18e5fc:
    if (ctx->pc == 0x18E5FCu) {
        ctx->pc = 0x18E5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E5F8u;
        // 0x18e5fc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E600u;
        goto label_18e600;
    }
    ctx->pc = 0x18E5F8u;
    SET_GPR_U32(ctx, 31, 0x18E600u);
    ctx->pc = 0x18E5FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E5F8u;
    // 0x18e5fc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5120u;
    { ctx->pc = 0x1b5120; return; }
    ctx->pc = 0x18E600u;
label_18e600:
    // 0x18e600: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x18e600u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_18e604:
    // 0x18e604: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x18e604u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_18e608:
    // 0x18e608: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x18e608u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_18e60c:
    // 0x18e60c: 0x0  nop
    ctx->pc = 0x18e60cu;
    // NOP
label_18e610:
    // 0x18e610: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x18e610u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18e614:
    // 0x18e614: 0x0  nop
    ctx->pc = 0x18e614u;
    // NOP
label_18e618:
    // 0x18e618: 0x45010009  bc1t        . + 4 + (0x9 << 2)
label_18e61c:
    if (ctx->pc == 0x18E61Cu) {
        ctx->pc = 0x18E61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E618u;
        // 0x18e61c: 0x3c024049  lui         $v0, 0x4049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E620u;
        goto label_18e620;
    }
    ctx->pc = 0x18E618u;
    {
        const bool branch_taken_0x18e618 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x18E61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E618u;
        // 0x18e61c: 0x3c024049  lui         $v0, 0x4049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e618) {
            ctx->pc = 0x18E640u;
            goto label_18e640;
        }
    }
    ctx->pc = 0x18E620u;
label_18e620:
    // 0x18e620: 0x0  nop
    ctx->pc = 0x18e620u;
    // NOP
label_18e624:
    // 0x18e624: 0x0  nop
    ctx->pc = 0x18e624u;
    // NOP
label_18e628:
    // 0x18e628: 0x4601a003  div.s       $f0, $f20, $f1
    ctx->pc = 0x18e628u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[0] = ctx->f[20] / ctx->f[1];
label_18e62c:
    // 0x18e62c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x18e62cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_18e630:
    // 0x18e630: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x18e630u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_18e634:
    // 0x18e634: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x18e634u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_18e638:
    // 0x18e638: 0x4600a501  sub.s       $f20, $f20, $f0
    ctx->pc = 0x18e638u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_18e63c:
    // 0x18e63c: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x18e63cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_18e640:
    // 0x18e640: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x18e640u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_18e644:
    // 0x18e644: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18e644u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18e648:
    // 0x18e648: 0x0  nop
    ctx->pc = 0x18e648u;
    // NOP
label_18e64c:
    // 0x18e64c: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x18e64cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18e650:
    // 0x18e650: 0x0  nop
    ctx->pc = 0x18e650u;
    // NOP
label_18e654:
    // 0x18e654: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_18e658:
    if (ctx->pc == 0x18E658u) {
        ctx->pc = 0x18E658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E654u;
        // 0x18e658: 0x3c02c049  lui         $v0, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E65Cu;
        goto label_18e65c;
    }
    ctx->pc = 0x18E654u;
    {
        const bool branch_taken_0x18e654 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x18E658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E654u;
        // 0x18e658: 0x3c02c049  lui         $v0, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e654) {
            ctx->pc = 0x18E674u;
            goto label_18e674;
        }
    }
    ctx->pc = 0x18E65Cu;
label_18e65c:
    // 0x18e65c: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x18e65cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_18e660:
    // 0x18e660: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x18e660u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_18e664:
    // 0x18e664: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18e664u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18e668:
    // 0x18e668: 0x1000000e  b           . + 4 + (0xE << 2)
label_18e66c:
    if (ctx->pc == 0x18E66Cu) {
        ctx->pc = 0x18E66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E668u;
        // 0x18e66c: 0x4600a501  sub.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E670u;
        goto label_18e670;
    }
    ctx->pc = 0x18E668u;
    {
        const bool branch_taken_0x18e668 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E668u;
        // 0x18e66c: 0x4600a501  sub.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e668) {
            ctx->pc = 0x18E6A4u;
            goto label_18e6a4;
        }
    }
    ctx->pc = 0x18E670u;
label_18e670:
    // 0x18e670: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x18e670u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
label_18e674:
    // 0x18e674: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x18e674u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_18e678:
    // 0x18e678: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18e678u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18e67c:
    // 0x18e67c: 0x0  nop
    ctx->pc = 0x18e67cu;
    // NOP
label_18e680:
    // 0x18e680: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x18e680u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18e684:
    // 0x18e684: 0x0  nop
    ctx->pc = 0x18e684u;
    // NOP
label_18e688:
    // 0x18e688: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_18e68c:
    if (ctx->pc == 0x18E68Cu) {
        ctx->pc = 0x18E690u;
        goto label_18e690;
    }
    ctx->pc = 0x18E688u;
    {
        const bool branch_taken_0x18e688 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x18e688) {
            ctx->pc = 0x18E6A4u;
            goto label_18e6a4;
        }
    }
    ctx->pc = 0x18E690u;
label_18e690:
    // 0x18e690: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x18e690u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_18e694:
    // 0x18e694: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x18e694u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_18e698:
    // 0x18e698: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18e698u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18e69c:
    // 0x18e69c: 0x0  nop
    ctx->pc = 0x18e69cu;
    // NOP
label_18e6a0:
    // 0x18e6a0: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x18e6a0u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_18e6a4:
    // 0x18e6a4: 0x8f83884c  lw          $v1, -0x77B4($gp)
    ctx->pc = 0x18e6a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936652)));
label_18e6a8:
    // 0x18e6a8: 0x3c02002d  lui         $v0, 0x2D
    ctx->pc = 0x18e6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
label_18e6ac:
    // 0x18e6ac: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x18e6acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
label_18e6b0:
    // 0x18e6b0: 0x244261a0  addiu       $v0, $v0, 0x61A0
    ctx->pc = 0x18e6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24992));
label_18e6b4:
    // 0x18e6b4: 0x24849910  addiu       $a0, $a0, -0x66F0
    ctx->pc = 0x18e6b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940944));
label_18e6b8:
    // 0x18e6b8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x18e6b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_18e6bc:
    // 0x18e6bc: 0xe7948838  swc1        $f20, -0x77C8($gp)
    ctx->pc = 0x18e6bcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294936632), bits); }
label_18e6c0:
    // 0x18e6c0: 0xaf808830  sw          $zero, -0x77D0($gp)
    ctx->pc = 0x18e6c0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936624), GPR_U32(ctx, 0));
label_18e6c4:
    // 0x18e6c4: 0xaf80882c  sw          $zero, -0x77D4($gp)
    ctx->pc = 0x18e6c4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936620), GPR_U32(ctx, 0));
label_18e6c8:
    // 0x18e6c8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x18e6c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_18e6cc:
    // 0x18e6cc: 0xc066d98  jal         func_19B660
label_18e6d0:
    if (ctx->pc == 0x18E6D0u) {
        ctx->pc = 0x18E6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E6CCu;
        // 0x18e6d0: 0x433021  addu        $a2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E6D4u;
        goto label_18e6d4;
    }
    ctx->pc = 0x18E6CCu;
    SET_GPR_U32(ctx, 31, 0x18E6D4u);
    ctx->pc = 0x18E6D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E6CCu;
    // 0x18e6d0: 0x433021  addu        $a2, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B660u;
    { ctx->pc = 0x19b660; return; }
    ctx->pc = 0x18E6D4u;
label_18e6d4:
    // 0x18e6d4: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x18e6d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
label_18e6d8:
    // 0x18e6d8: 0x24849910  addiu       $a0, $a0, -0x66F0
    ctx->pc = 0x18e6d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940944));
label_18e6dc:
    // 0x18e6dc: 0xc066daa  jal         func_19B6A8
label_18e6e0:
    if (ctx->pc == 0x18E6E0u) {
        ctx->pc = 0x18E6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E6DCu;
        // 0x18e6e0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E6E4u;
        goto label_18e6e4;
    }
    ctx->pc = 0x18E6DCu;
    SET_GPR_U32(ctx, 31, 0x18E6E4u);
    ctx->pc = 0x18E6E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E6DCu;
    // 0x18e6e0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B6A8u;
    { ctx->pc = 0x19b6a8; return; }
    ctx->pc = 0x18E6E4u;
label_18e6e4:
    // 0x18e6e4: 0xc7818838  lwc1        $f1, -0x77C8($gp)
    ctx->pc = 0x18e6e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_18e6e8:
    // 0x18e6e8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x18e6e8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18e6ec:
    // 0x18e6ec: 0x0  nop
    ctx->pc = 0x18e6ecu;
    // NOP
label_18e6f0:
    // 0x18e6f0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x18e6f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18e6f4:
    // 0x18e6f4: 0x0  nop
    ctx->pc = 0x18e6f4u;
    // NOP
label_18e6f8:
    // 0x18e6f8: 0x4500000a  bc1f        . + 4 + (0xA << 2)
label_18e6fc:
    if (ctx->pc == 0x18E6FCu) {
        ctx->pc = 0x18E6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E6F8u;
        // 0x18e6fc: 0x3c02c396  lui         $v0, 0xC396 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50070 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E700u;
        goto label_18e700;
    }
    ctx->pc = 0x18E6F8u;
    {
        const bool branch_taken_0x18e6f8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x18E6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E6F8u;
        // 0x18e6fc: 0x3c02c396  lui         $v0, 0xC396 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50070 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e6f8) {
            ctx->pc = 0x18E724u;
            goto label_18e724;
        }
    }
    ctx->pc = 0x18E700u;
label_18e700:
    // 0x18e700: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x18e700u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
label_18e704:
    // 0x18e704: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x18e704u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
label_18e708:
    // 0x18e708: 0x24849910  addiu       $a0, $a0, -0x66F0
    ctx->pc = 0x18e708u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940944));
label_18e70c:
    // 0x18e70c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x18e70cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_18e710:
    // 0x18e710: 0xc066e14  jal         func_19B850
label_18e714:
    if (ctx->pc == 0x18E714u) {
        ctx->pc = 0x18E714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E710u;
        // 0x18e714: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E718u;
        goto label_18e718;
    }
    ctx->pc = 0x18E710u;
    SET_GPR_U32(ctx, 31, 0x18E718u);
    ctx->pc = 0x18E714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E710u;
    // 0x18e714: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B850u;
    { ctx->pc = 0x19b850; return; }
    ctx->pc = 0x18E718u;
label_18e718:
    // 0x18e718: 0x10000008  b           . + 4 + (0x8 << 2)
label_18e71c:
    if (ctx->pc == 0x18E71Cu) {
        ctx->pc = 0x18E71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E718u;
        // 0x18e71c: 0x8f85884c  lw          $a1, -0x77B4($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936652)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E720u;
        goto label_18e720;
    }
    ctx->pc = 0x18E718u;
    {
        const bool branch_taken_0x18e718 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E718u;
        // 0x18e71c: 0x8f85884c  lw          $a1, -0x77B4($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936652)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e718) {
            ctx->pc = 0x18E73Cu;
            goto label_18e73c;
        }
    }
    ctx->pc = 0x18E720u;
label_18e720:
    // 0x18e720: 0x3c02c396  lui         $v0, 0xC396
    ctx->pc = 0x18e720u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50070 << 16));
label_18e724:
    // 0x18e724: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x18e724u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
label_18e728:
    // 0x18e728: 0x24849910  addiu       $a0, $a0, -0x66F0
    ctx->pc = 0x18e728u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940944));
label_18e72c:
    // 0x18e72c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x18e72cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_18e730:
    // 0x18e730: 0xc066e14  jal         func_19B850
label_18e734:
    if (ctx->pc == 0x18E734u) {
        ctx->pc = 0x18E734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E730u;
        // 0x18e734: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E738u;
        goto label_18e738;
    }
    ctx->pc = 0x18E730u;
    SET_GPR_U32(ctx, 31, 0x18E738u);
    ctx->pc = 0x18E734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E730u;
    // 0x18e734: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B850u;
    { ctx->pc = 0x19b850; return; }
    ctx->pc = 0x18E738u;
label_18e738:
    // 0x18e738: 0x8f85884c  lw          $a1, -0x77B4($gp)
    ctx->pc = 0x18e738u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936652)));
label_18e73c:
    // 0x18e73c: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x18e73cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_18e740:
    // 0x18e740: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x18e740u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_18e744:
    // 0x18e744: 0x3c03002d  lui         $v1, 0x2D
    ctx->pc = 0x18e744u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)45 << 16));
label_18e748:
    // 0x18e748: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x18e748u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
label_18e74c:
    // 0x18e74c: 0x246361a0  addiu       $v1, $v1, 0x61A0
    ctx->pc = 0x18e74cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24992));
label_18e750:
    // 0x18e750: 0x248498e0  addiu       $a0, $a0, -0x6720
    ctx->pc = 0x18e750u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940896));
label_18e754:
    // 0x18e754: 0x51100  sll         $v0, $a1, 4
    ctx->pc = 0x18e754u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_18e758:
    // 0x18e758: 0xc066e14  jal         func_19B850
label_18e75c:
    if (ctx->pc == 0x18E75Cu) {
        ctx->pc = 0x18E75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E758u;
        // 0x18e75c: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E760u;
        goto label_18e760;
    }
    ctx->pc = 0x18E758u;
    SET_GPR_U32(ctx, 31, 0x18E760u);
    ctx->pc = 0x18E75Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E758u;
    // 0x18e75c: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B850u;
    { ctx->pc = 0x19b850; return; }
    ctx->pc = 0x18E760u;
label_18e760:
    // 0x18e760: 0x8f83884c  lw          $v1, -0x77B4($gp)
    ctx->pc = 0x18e760u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936652)));
label_18e764:
    // 0x18e764: 0x3c02002d  lui         $v0, 0x2D
    ctx->pc = 0x18e764u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
label_18e768:
    // 0x18e768: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x18e768u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
label_18e76c:
    // 0x18e76c: 0x244262e0  addiu       $v0, $v0, 0x62E0
    ctx->pc = 0x18e76cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25312));
label_18e770:
    // 0x18e770: 0x248498e0  addiu       $a0, $a0, -0x6720
    ctx->pc = 0x18e770u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940896));
label_18e774:
    // 0x18e774: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x18e774u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_18e778:
    // 0x18e778: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x18e778u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_18e77c:
    // 0x18e77c: 0xc066e02  jal         func_19B808
label_18e780:
    if (ctx->pc == 0x18E780u) {
        ctx->pc = 0x18E780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E77Cu;
        // 0x18e780: 0x433021  addu        $a2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E784u;
        goto label_18e784;
    }
    ctx->pc = 0x18E77Cu;
    SET_GPR_U32(ctx, 31, 0x18E784u);
    ctx->pc = 0x18E780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E77Cu;
    // 0x18e780: 0x433021  addu        $a2, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B808u;
    { ctx->pc = 0x19b808; return; }
    ctx->pc = 0x18E784u;
label_18e784:
    // 0x18e784: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x18e784u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
label_18e788:
    // 0x18e788: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x18e788u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
label_18e78c:
    // 0x18e78c: 0x24849910  addiu       $a0, $a0, -0x66F0
    ctx->pc = 0x18e78cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940944));
label_18e790:
    // 0x18e790: 0x24c698e0  addiu       $a2, $a2, -0x6720
    ctx->pc = 0x18e790u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294940896));
label_18e794:
    // 0x18e794: 0xc066e02  jal         func_19B808
label_18e798:
    if (ctx->pc == 0x18E798u) {
        ctx->pc = 0x18E798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E794u;
        // 0x18e798: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E79Cu;
        goto label_18e79c;
    }
    ctx->pc = 0x18E794u;
    SET_GPR_U32(ctx, 31, 0x18E79Cu);
    ctx->pc = 0x18E798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E794u;
    // 0x18e798: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B808u;
    { ctx->pc = 0x19b808; return; }
    ctx->pc = 0x18E79Cu;
label_18e79c:
    // 0x18e79c: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x18e79cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
label_18e7a0:
    // 0x18e7a0: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x18e7a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_18e7a4:
    // 0x18e7a4: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x18e7a4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
label_18e7a8:
    // 0x18e7a8: 0x3c070037  lui         $a3, 0x37
    ctx->pc = 0x18e7a8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)55 << 16));
label_18e7ac:
    // 0x18e7ac: 0x248498e0  addiu       $a0, $a0, -0x6720
    ctx->pc = 0x18e7acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940896));
label_18e7b0:
    // 0x18e7b0: 0x24a59910  addiu       $a1, $a1, -0x66F0
    ctx->pc = 0x18e7b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940944));
label_18e7b4:
    // 0x18e7b4: 0x24c69900  addiu       $a2, $a2, -0x6700
    ctx->pc = 0x18e7b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294940928));
label_18e7b8:
    // 0x18e7b8: 0x24e798f0  addiu       $a3, $a3, -0x6710
    ctx->pc = 0x18e7b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294940912));
label_18e7bc:
    // 0x18e7bc: 0xc064978  jal         func_1925E0
label_18e7c0:
    if (ctx->pc == 0x18E7C0u) {
        ctx->pc = 0x18E7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E7BCu;
        // 0x18e7c0: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E7C4u;
        goto label_18e7c4;
    }
    ctx->pc = 0x18E7BCu;
    SET_GPR_U32(ctx, 31, 0x18E7C4u);
    ctx->pc = 0x18E7C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E7BCu;
    // 0x18e7c0: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1925E0u;
    { ctx->pc = 0x1925e0; return; }
    ctx->pc = 0x18E7C4u;
label_18e7c4:
    // 0x18e7c4: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_18e7c8:
    if (ctx->pc == 0x18E7C8u) {
        ctx->pc = 0x18E7CCu;
        goto label_18e7cc;
    }
    ctx->pc = 0x18E7C4u;
    {
        const bool branch_taken_0x18e7c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18e7c4) {
            ctx->pc = 0x18E7FCu;
            goto label_18e7fc;
        }
    }
    ctx->pc = 0x18E7CCu;
label_18e7cc:
    // 0x18e7cc: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x18e7ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
label_18e7d0:
    // 0x18e7d0: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x18e7d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_18e7d4:
    // 0x18e7d4: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x18e7d4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
label_18e7d8:
    // 0x18e7d8: 0x3c070037  lui         $a3, 0x37
    ctx->pc = 0x18e7d8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)55 << 16));
label_18e7dc:
    // 0x18e7dc: 0x24849910  addiu       $a0, $a0, -0x66F0
    ctx->pc = 0x18e7dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940944));
label_18e7e0:
    // 0x18e7e0: 0x24a598e0  addiu       $a1, $a1, -0x6720
    ctx->pc = 0x18e7e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940896));
label_18e7e4:
    // 0x18e7e4: 0x24c69900  addiu       $a2, $a2, -0x6700
    ctx->pc = 0x18e7e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294940928));
label_18e7e8:
    // 0x18e7e8: 0x24e798f0  addiu       $a3, $a3, -0x6710
    ctx->pc = 0x18e7e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294940912));
label_18e7ec:
    // 0x18e7ec: 0xc064978  jal         func_1925E0
label_18e7f0:
    if (ctx->pc == 0x18E7F0u) {
        ctx->pc = 0x18E7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E7ECu;
        // 0x18e7f0: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E7F4u;
        goto label_18e7f4;
    }
    ctx->pc = 0x18E7ECu;
    SET_GPR_U32(ctx, 31, 0x18E7F4u);
    ctx->pc = 0x18E7F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E7ECu;
    // 0x18e7f0: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1925E0u;
    { ctx->pc = 0x1925e0; return; }
    ctx->pc = 0x18E7F4u;
label_18e7f4:
    // 0x18e7f4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_18e7f8:
    if (ctx->pc == 0x18E7F8u) {
        ctx->pc = 0x18E7FCu;
        goto label_18e7fc;
    }
    ctx->pc = 0x18E7F4u;
    {
        const bool branch_taken_0x18e7f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e7f4) {
            ctx->pc = 0x18E808u;
            goto label_18e808;
        }
    }
    ctx->pc = 0x18E7FCu;
label_18e7fc:
    // 0x18e7fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18e7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18e800:
    // 0x18e800: 0x1000004d  b           . + 4 + (0x4D << 2)
label_18e804:
    if (ctx->pc == 0x18E804u) {
        ctx->pc = 0x18E804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E800u;
        // 0x18e804: 0xaf828830  sw          $v0, -0x77D0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936624), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E808u;
        goto label_18e808;
    }
    ctx->pc = 0x18E800u;
    {
        const bool branch_taken_0x18e800 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E800u;
        // 0x18e804: 0xaf828830  sw          $v0, -0x77D0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936624), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e800) {
            ctx->pc = 0x18E938u;
            goto label_18e938;
        }
    }
    ctx->pc = 0x18E808u;
label_18e808:
    // 0x18e808: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x18e808u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
label_18e80c:
    // 0x18e80c: 0x3c06002d  lui         $a2, 0x2D
    ctx->pc = 0x18e80cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)45 << 16));
label_18e810:
    // 0x18e810: 0x24849910  addiu       $a0, $a0, -0x66F0
    ctx->pc = 0x18e810u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940944));
label_18e814:
    // 0x18e814: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x18e814u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_18e818:
    // 0x18e818: 0xc066d98  jal         func_19B660
label_18e81c:
    if (ctx->pc == 0x18E81Cu) {
        ctx->pc = 0x18E81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E818u;
        // 0x18e81c: 0x24c66240  addiu       $a2, $a2, 0x6240 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 25152));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E820u;
        goto label_18e820;
    }
    ctx->pc = 0x18E818u;
    SET_GPR_U32(ctx, 31, 0x18E820u);
    ctx->pc = 0x18E81Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E818u;
    // 0x18e81c: 0x24c66240  addiu       $a2, $a2, 0x6240 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 25152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B660u;
    { ctx->pc = 0x19b660; return; }
    ctx->pc = 0x18E820u;
label_18e820:
    // 0x18e820: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x18e820u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
label_18e824:
    // 0x18e824: 0x24849910  addiu       $a0, $a0, -0x66F0
    ctx->pc = 0x18e824u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940944));
label_18e828:
    // 0x18e828: 0xc066daa  jal         func_19B6A8
label_18e82c:
    if (ctx->pc == 0x18E82Cu) {
        ctx->pc = 0x18E82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E828u;
        // 0x18e82c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E830u;
        goto label_18e830;
    }
    ctx->pc = 0x18E828u;
    SET_GPR_U32(ctx, 31, 0x18E830u);
    ctx->pc = 0x18E82Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E828u;
    // 0x18e82c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B6A8u;
    { ctx->pc = 0x19b6a8; return; }
    ctx->pc = 0x18E830u;
label_18e830:
    // 0x18e830: 0xc7818838  lwc1        $f1, -0x77C8($gp)
    ctx->pc = 0x18e830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_18e834:
    // 0x18e834: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x18e834u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18e838:
    // 0x18e838: 0x0  nop
    ctx->pc = 0x18e838u;
    // NOP
label_18e83c:
    // 0x18e83c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x18e83cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18e840:
    // 0x18e840: 0x0  nop
    ctx->pc = 0x18e840u;
    // NOP
label_18e844:
    // 0x18e844: 0x4500000a  bc1f        . + 4 + (0xA << 2)
label_18e848:
    if (ctx->pc == 0x18E848u) {
        ctx->pc = 0x18E848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E844u;
        // 0x18e848: 0x3c024396  lui         $v0, 0x4396 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E84Cu;
        goto label_18e84c;
    }
    ctx->pc = 0x18E844u;
    {
        const bool branch_taken_0x18e844 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x18E848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E844u;
        // 0x18e848: 0x3c024396  lui         $v0, 0x4396 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e844) {
            ctx->pc = 0x18E870u;
            goto label_18e870;
        }
    }
    ctx->pc = 0x18E84Cu;
label_18e84c:
    // 0x18e84c: 0x3c02c396  lui         $v0, 0xC396
    ctx->pc = 0x18e84cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50070 << 16));
label_18e850:
    // 0x18e850: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x18e850u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
label_18e854:
    // 0x18e854: 0x24849910  addiu       $a0, $a0, -0x66F0
    ctx->pc = 0x18e854u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940944));
label_18e858:
    // 0x18e858: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x18e858u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_18e85c:
    // 0x18e85c: 0xc066e14  jal         func_19B850
label_18e860:
    if (ctx->pc == 0x18E860u) {
        ctx->pc = 0x18E860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E85Cu;
        // 0x18e860: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E864u;
        goto label_18e864;
    }
    ctx->pc = 0x18E85Cu;
    SET_GPR_U32(ctx, 31, 0x18E864u);
    ctx->pc = 0x18E860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E85Cu;
    // 0x18e860: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B850u;
    { ctx->pc = 0x19b850; return; }
    ctx->pc = 0x18E864u;
label_18e864:
    // 0x18e864: 0x10000008  b           . + 4 + (0x8 << 2)
label_18e868:
    if (ctx->pc == 0x18E868u) {
        ctx->pc = 0x18E868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E864u;
        // 0x18e868: 0x3c024120  lui         $v0, 0x4120 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E86Cu;
        goto label_18e86c;
    }
    ctx->pc = 0x18E864u;
    {
        const bool branch_taken_0x18e864 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E864u;
        // 0x18e868: 0x3c024120  lui         $v0, 0x4120 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e864) {
            ctx->pc = 0x18E888u;
            goto label_18e888;
        }
    }
    ctx->pc = 0x18E86Cu;
label_18e86c:
    // 0x18e86c: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x18e86cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
label_18e870:
    // 0x18e870: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x18e870u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
label_18e874:
    // 0x18e874: 0x24849910  addiu       $a0, $a0, -0x66F0
    ctx->pc = 0x18e874u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940944));
label_18e878:
    // 0x18e878: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x18e878u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_18e87c:
    // 0x18e87c: 0xc066e14  jal         func_19B850
label_18e880:
    if (ctx->pc == 0x18E880u) {
        ctx->pc = 0x18E880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E87Cu;
        // 0x18e880: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E884u;
        goto label_18e884;
    }
    ctx->pc = 0x18E87Cu;
    SET_GPR_U32(ctx, 31, 0x18E884u);
    ctx->pc = 0x18E880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E87Cu;
    // 0x18e880: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B850u;
    { ctx->pc = 0x19b850; return; }
    ctx->pc = 0x18E884u;
label_18e884:
    // 0x18e884: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x18e884u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_18e888:
    // 0x18e888: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x18e888u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
label_18e88c:
    // 0x18e88c: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x18e88cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
label_18e890:
    // 0x18e890: 0x248498e0  addiu       $a0, $a0, -0x6720
    ctx->pc = 0x18e890u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940896));
label_18e894:
    // 0x18e894: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x18e894u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_18e898:
    // 0x18e898: 0xc066e14  jal         func_19B850
label_18e89c:
    if (ctx->pc == 0x18E89Cu) {
        ctx->pc = 0x18E89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E898u;
        // 0x18e89c: 0x24a56240  addiu       $a1, $a1, 0x6240 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25152));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E8A0u;
        goto label_18e8a0;
    }
    ctx->pc = 0x18E898u;
    SET_GPR_U32(ctx, 31, 0x18E8A0u);
    ctx->pc = 0x18E89Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E898u;
    // 0x18e89c: 0x24a56240  addiu       $a1, $a1, 0x6240 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B850u;
    { ctx->pc = 0x19b850; return; }
    ctx->pc = 0x18E8A0u;
label_18e8a0:
    // 0x18e8a0: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x18e8a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
label_18e8a4:
    // 0x18e8a4: 0x3c06002d  lui         $a2, 0x2D
    ctx->pc = 0x18e8a4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)45 << 16));
label_18e8a8:
    // 0x18e8a8: 0x248498e0  addiu       $a0, $a0, -0x6720
    ctx->pc = 0x18e8a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940896));
label_18e8ac:
    // 0x18e8ac: 0x24c66380  addiu       $a2, $a2, 0x6380
    ctx->pc = 0x18e8acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 25472));
label_18e8b0:
    // 0x18e8b0: 0xc066e02  jal         func_19B808
label_18e8b4:
    if (ctx->pc == 0x18E8B4u) {
        ctx->pc = 0x18E8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E8B0u;
        // 0x18e8b4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E8B8u;
        goto label_18e8b8;
    }
    ctx->pc = 0x18E8B0u;
    SET_GPR_U32(ctx, 31, 0x18E8B8u);
    ctx->pc = 0x18E8B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E8B0u;
    // 0x18e8b4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B808u;
    { ctx->pc = 0x19b808; return; }
    ctx->pc = 0x18E8B8u;
label_18e8b8:
    // 0x18e8b8: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x18e8b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
label_18e8bc:
    // 0x18e8bc: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x18e8bcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
label_18e8c0:
    // 0x18e8c0: 0x24849910  addiu       $a0, $a0, -0x66F0
    ctx->pc = 0x18e8c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940944));
label_18e8c4:
    // 0x18e8c4: 0x24c698e0  addiu       $a2, $a2, -0x6720
    ctx->pc = 0x18e8c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294940896));
label_18e8c8:
    // 0x18e8c8: 0xc066e02  jal         func_19B808
label_18e8cc:
    if (ctx->pc == 0x18E8CCu) {
        ctx->pc = 0x18E8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E8C8u;
        // 0x18e8cc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E8D0u;
        goto label_18e8d0;
    }
    ctx->pc = 0x18E8C8u;
    SET_GPR_U32(ctx, 31, 0x18E8D0u);
    ctx->pc = 0x18E8CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E8C8u;
    // 0x18e8cc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B808u;
    { ctx->pc = 0x19b808; return; }
    ctx->pc = 0x18E8D0u;
label_18e8d0:
    // 0x18e8d0: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x18e8d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
label_18e8d4:
    // 0x18e8d4: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x18e8d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_18e8d8:
    // 0x18e8d8: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x18e8d8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
label_18e8dc:
    // 0x18e8dc: 0x3c070037  lui         $a3, 0x37
    ctx->pc = 0x18e8dcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)55 << 16));
label_18e8e0:
    // 0x18e8e0: 0x248498e0  addiu       $a0, $a0, -0x6720
    ctx->pc = 0x18e8e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940896));
label_18e8e4:
    // 0x18e8e4: 0x24a59910  addiu       $a1, $a1, -0x66F0
    ctx->pc = 0x18e8e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940944));
label_18e8e8:
    // 0x18e8e8: 0x24c69900  addiu       $a2, $a2, -0x6700
    ctx->pc = 0x18e8e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294940928));
label_18e8ec:
    // 0x18e8ec: 0x24e798f0  addiu       $a3, $a3, -0x6710
    ctx->pc = 0x18e8ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294940912));
label_18e8f0:
    // 0x18e8f0: 0xc064978  jal         func_1925E0
label_18e8f4:
    if (ctx->pc == 0x18E8F4u) {
        ctx->pc = 0x18E8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E8F0u;
        // 0x18e8f4: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E8F8u;
        goto label_18e8f8;
    }
    ctx->pc = 0x18E8F0u;
    SET_GPR_U32(ctx, 31, 0x18E8F8u);
    ctx->pc = 0x18E8F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E8F0u;
    // 0x18e8f4: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1925E0u;
    { ctx->pc = 0x1925e0; return; }
    ctx->pc = 0x18E8F8u;
label_18e8f8:
    // 0x18e8f8: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_18e8fc:
    if (ctx->pc == 0x18E8FCu) {
        ctx->pc = 0x18E900u;
        goto label_18e900;
    }
    ctx->pc = 0x18E8F8u;
    {
        const bool branch_taken_0x18e8f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18e8f8) {
            ctx->pc = 0x18E930u;
            goto label_18e930;
        }
    }
    ctx->pc = 0x18E900u;
label_18e900:
    // 0x18e900: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x18e900u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
label_18e904:
    // 0x18e904: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x18e904u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_18e908:
    // 0x18e908: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x18e908u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
label_18e90c:
    // 0x18e90c: 0x3c070037  lui         $a3, 0x37
    ctx->pc = 0x18e90cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)55 << 16));
label_18e910:
    // 0x18e910: 0x24849910  addiu       $a0, $a0, -0x66F0
    ctx->pc = 0x18e910u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940944));
label_18e914:
    // 0x18e914: 0x24a598e0  addiu       $a1, $a1, -0x6720
    ctx->pc = 0x18e914u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940896));
label_18e918:
    // 0x18e918: 0x24c69900  addiu       $a2, $a2, -0x6700
    ctx->pc = 0x18e918u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294940928));
label_18e91c:
    // 0x18e91c: 0x24e798f0  addiu       $a3, $a3, -0x6710
    ctx->pc = 0x18e91cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294940912));
label_18e920:
    // 0x18e920: 0xc064978  jal         func_1925E0
label_18e924:
    if (ctx->pc == 0x18E924u) {
        ctx->pc = 0x18E924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E920u;
        // 0x18e924: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E928u;
        goto label_18e928;
    }
    ctx->pc = 0x18E920u;
    SET_GPR_U32(ctx, 31, 0x18E928u);
    ctx->pc = 0x18E924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E920u;
    // 0x18e924: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1925E0u;
    { ctx->pc = 0x1925e0; return; }
    ctx->pc = 0x18E928u;
label_18e928:
    // 0x18e928: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_18e92c:
    if (ctx->pc == 0x18E92Cu) {
        ctx->pc = 0x18E930u;
        goto label_18e930;
    }
    ctx->pc = 0x18E928u;
    {
        const bool branch_taken_0x18e928 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e928) {
            ctx->pc = 0x18E938u;
            goto label_18e938;
        }
    }
    ctx->pc = 0x18E930u;
label_18e930:
    // 0x18e930: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18e930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18e934:
    // 0x18e934: 0xaf82882c  sw          $v0, -0x77D4($gp)
    ctx->pc = 0x18e934u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936620), GPR_U32(ctx, 2));
label_18e938:
    // 0x18e938: 0x8f828830  lw          $v0, -0x77D0($gp)
    ctx->pc = 0x18e938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936624)));
label_18e93c:
    // 0x18e93c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_18e940:
    if (ctx->pc == 0x18E940u) {
        ctx->pc = 0x18E944u;
        goto label_18e944;
    }
    ctx->pc = 0x18E93Cu;
    {
        const bool branch_taken_0x18e93c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18e93c) {
            ctx->pc = 0x18E950u;
            goto label_18e950;
        }
    }
    ctx->pc = 0x18E944u;
label_18e944:
    // 0x18e944: 0x8f82882c  lw          $v0, -0x77D4($gp)
    ctx->pc = 0x18e944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936620)));
label_18e948:
    // 0x18e948: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_18e94c:
    if (ctx->pc == 0x18E94Cu) {
        ctx->pc = 0x18E950u;
        goto label_18e950;
    }
    ctx->pc = 0x18E948u;
    {
        const bool branch_taken_0x18e948 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e948) {
            ctx->pc = 0x18E97Cu;
            goto label_18e97c;
        }
    }
    ctx->pc = 0x18E950u;
label_18e950:
    // 0x18e950: 0xae8000a4  sw          $zero, 0xA4($s4)
    ctx->pc = 0x18e950u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 164), GPR_U32(ctx, 0));
label_18e954:
    // 0x18e954: 0x3c02002d  lui         $v0, 0x2D
    ctx->pc = 0x18e954u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
label_18e958:
    // 0x18e958: 0x8f83884c  lw          $v1, -0x77B4($gp)
    ctx->pc = 0x18e958u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936652)));
label_18e95c:
    // 0x18e95c: 0x244262e0  addiu       $v0, $v0, 0x62E0
    ctx->pc = 0x18e95cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25312));
label_18e960:
    // 0x18e960: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x18e960u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_18e964:
    // 0x18e964: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x18e964u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18e968:
    // 0x18e968: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x18e968u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_18e96c:
    // 0x18e96c: 0xc066e26  jal         func_19B898
label_18e970:
    if (ctx->pc == 0x18E970u) {
        ctx->pc = 0x18E970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E96Cu;
        // 0x18e970: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E974u;
        goto label_18e974;
    }
    ctx->pc = 0x18E96Cu;
    SET_GPR_U32(ctx, 31, 0x18E974u);
    ctx->pc = 0x18E970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E96Cu;
    // 0x18e970: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x18E974u;
label_18e974:
    // 0x18e974: 0x10000217  b           . + 4 + (0x217 << 2)
label_18e978:
    if (ctx->pc == 0x18E978u) {
        ctx->pc = 0x18E97Cu;
        goto label_18e97c;
    }
    ctx->pc = 0x18E974u;
    {
        const bool branch_taken_0x18e974 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e974) {
            ctx->pc = 0x18F1D4u;
            { ctx->pc = 0x18f1d4; return; }
        }
    }
    ctx->pc = 0x18E97Cu;
label_18e97c:
    // 0x18e97c: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x18e97cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
label_18e980:
    // 0x18e980: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x18e980u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_18e984:
    // 0x18e984: 0x24849920  addiu       $a0, $a0, -0x66E0
    ctx->pc = 0x18e984u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940960));
label_18e988:
    // 0x18e988: 0xc066e08  jal         func_19B820
label_18e98c:
    if (ctx->pc == 0x18E98Cu) {
        ctx->pc = 0x18E98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E988u;
        // 0x18e98c: 0x26860070  addiu       $a2, $s4, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E990u;
        goto label_18e990;
    }
    ctx->pc = 0x18E988u;
    SET_GPR_U32(ctx, 31, 0x18E990u);
    ctx->pc = 0x18E98Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E988u;
    // 0x18e98c: 0x26860070  addiu       $a2, $s4, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B820u;
    { ctx->pc = 0x19b820; return; }
    ctx->pc = 0x18E990u;
label_18e990:
    // 0x18e990: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x18e990u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_18e994:
    // 0x18e994: 0xc42c9920  lwc1        $f12, -0x66E0($at)
    ctx->pc = 0x18e994u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294940960)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_18e998:
    // 0x18e998: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x18e998u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_18e99c:
    // 0x18e99c: 0xc06d51e  jal         func_1B5478
label_18e9a0:
    if (ctx->pc == 0x18E9A0u) {
        ctx->pc = 0x18E9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E99Cu;
        // 0x18e9a0: 0xc42d9928  lwc1        $f13, -0x66D8($at) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294940968)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E9A4u;
        goto label_18e9a4;
    }
    ctx->pc = 0x18E99Cu;
    SET_GPR_U32(ctx, 31, 0x18E9A4u);
    ctx->pc = 0x18E9A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E99Cu;
    // 0x18e9a0: 0xc42d9928  lwc1        $f13, -0x66D8($at) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294940968)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5478u;
    { ctx->pc = 0x1b5478; return; }
    ctx->pc = 0x18E9A4u;
label_18e9a4:
    // 0x18e9a4: 0xe780883c  swc1        $f0, -0x77C4($gp)
    ctx->pc = 0x18e9a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294936636), bits); }
label_18e9a8:
    // 0x18e9a8: 0xc7818844  lwc1        $f1, -0x77BC($gp)
    ctx->pc = 0x18e9a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936644)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_18e9ac:
    // 0x18e9ac: 0xc780883c  lwc1        $f0, -0x77C4($gp)
    ctx->pc = 0x18e9acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936636)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18e9b0:
    // 0x18e9b0: 0x46000d01  sub.s       $f20, $f1, $f0
    ctx->pc = 0x18e9b0u;
    ctx->f[20] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_18e9b4:
    // 0x18e9b4: 0xc06d448  jal         func_1B5120
label_18e9b8:
    if (ctx->pc == 0x18E9B8u) {
        ctx->pc = 0x18E9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E9B4u;
        // 0x18e9b8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E9BCu;
        goto label_18e9bc;
    }
    ctx->pc = 0x18E9B4u;
    SET_GPR_U32(ctx, 31, 0x18E9BCu);
    ctx->pc = 0x18E9B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E9B4u;
    // 0x18e9b8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5120u;
    { ctx->pc = 0x1b5120; return; }
    ctx->pc = 0x18E9BCu;
label_18e9bc:
    // 0x18e9bc: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x18e9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_18e9c0:
    // 0x18e9c0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x18e9c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_18e9c4:
    // 0x18e9c4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x18e9c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_18e9c8:
    // 0x18e9c8: 0x0  nop
    ctx->pc = 0x18e9c8u;
    // NOP
label_18e9cc:
    // 0x18e9cc: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x18e9ccu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18e9d0:
    // 0x18e9d0: 0x0  nop
    ctx->pc = 0x18e9d0u;
    // NOP
label_18e9d4:
    // 0x18e9d4: 0x45010009  bc1t        . + 4 + (0x9 << 2)
label_18e9d8:
    if (ctx->pc == 0x18E9D8u) {
        ctx->pc = 0x18E9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E9D4u;
        // 0x18e9d8: 0x3c024049  lui         $v0, 0x4049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E9DCu;
        goto label_18e9dc;
    }
    ctx->pc = 0x18E9D4u;
    {
        const bool branch_taken_0x18e9d4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x18E9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E9D4u;
        // 0x18e9d8: 0x3c024049  lui         $v0, 0x4049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e9d4) {
            ctx->pc = 0x18E9FCu;
            goto label_18e9fc;
        }
    }
    ctx->pc = 0x18E9DCu;
label_18e9dc:
    // 0x18e9dc: 0x0  nop
    ctx->pc = 0x18e9dcu;
    // NOP
label_18e9e0:
    // 0x18e9e0: 0x0  nop
    ctx->pc = 0x18e9e0u;
    // NOP
label_18e9e4:
    // 0x18e9e4: 0x4601a003  div.s       $f0, $f20, $f1
    ctx->pc = 0x18e9e4u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[0] = ctx->f[20] / ctx->f[1];
label_18e9e8:
    // 0x18e9e8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x18e9e8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_18e9ec:
    // 0x18e9ec: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x18e9ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_18e9f0:
    // 0x18e9f0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x18e9f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_18e9f4:
    // 0x18e9f4: 0x4600a501  sub.s       $f20, $f20, $f0
    ctx->pc = 0x18e9f4u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_18e9f8:
    // 0x18e9f8: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x18e9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_18e9fc:
    // 0x18e9fc: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x18e9fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_18ea00:
    // 0x18ea00: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18ea00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18ea04:
    // 0x18ea04: 0x0  nop
    ctx->pc = 0x18ea04u;
    // NOP
label_18ea08:
    // 0x18ea08: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x18ea08u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18ea0c:
    // 0x18ea0c: 0x0  nop
    ctx->pc = 0x18ea0cu;
    // NOP
label_18ea10:
    // 0x18ea10: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_18ea14:
    if (ctx->pc == 0x18EA14u) {
        ctx->pc = 0x18EA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EA10u;
        // 0x18ea14: 0x3c02c049  lui         $v0, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18EA18u;
        goto label_18ea18;
    }
    ctx->pc = 0x18EA10u;
    {
        const bool branch_taken_0x18ea10 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x18EA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EA10u;
        // 0x18ea14: 0x3c02c049  lui         $v0, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ea10) {
            ctx->pc = 0x18EA30u;
            goto label_18ea30;
        }
    }
    ctx->pc = 0x18EA18u;
label_18ea18:
    // 0x18ea18: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x18ea18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_18ea1c:
    // 0x18ea1c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x18ea1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_18ea20:
    // 0x18ea20: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18ea20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18ea24:
    // 0x18ea24: 0x1000000e  b           . + 4 + (0xE << 2)
label_18ea28:
    if (ctx->pc == 0x18EA28u) {
        ctx->pc = 0x18EA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EA24u;
        // 0x18ea28: 0x4600a501  sub.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x18EA2Cu;
        goto label_18ea2c;
    }
    ctx->pc = 0x18EA24u;
    {
        const bool branch_taken_0x18ea24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18EA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EA24u;
        // 0x18ea28: 0x4600a501  sub.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ea24) {
            ctx->pc = 0x18EA60u;
            goto label_18ea60;
        }
    }
    ctx->pc = 0x18EA2Cu;
label_18ea2c:
    // 0x18ea2c: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x18ea2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
label_18ea30:
    // 0x18ea30: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x18ea30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_18ea34:
    // 0x18ea34: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18ea34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18ea38:
    // 0x18ea38: 0x0  nop
    ctx->pc = 0x18ea38u;
    // NOP
label_18ea3c:
    // 0x18ea3c: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x18ea3cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18ea40:
    // 0x18ea40: 0x0  nop
    ctx->pc = 0x18ea40u;
    // NOP
label_18ea44:
    // 0x18ea44: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_18ea48:
    if (ctx->pc == 0x18EA48u) {
        ctx->pc = 0x18EA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EA44u;
        // 0x18ea48: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x18EA4Cu;
        goto label_18ea4c;
    }
    ctx->pc = 0x18EA44u;
    {
        const bool branch_taken_0x18ea44 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x18EA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EA44u;
        // 0x18ea48: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ea44) {
            ctx->pc = 0x18EA64u;
            goto label_18ea64;
        }
    }
    ctx->pc = 0x18EA4Cu;
label_18ea4c:
    // 0x18ea4c: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x18ea4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_18ea50:
    // 0x18ea50: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x18ea50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_18ea54:
    // 0x18ea54: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18ea54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18ea58:
    // 0x18ea58: 0x0  nop
    ctx->pc = 0x18ea58u;
    // NOP
label_18ea5c:
    // 0x18ea5c: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x18ea5cu;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_18ea60:
    // 0x18ea60: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x18ea60u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_18ea64:
    // 0x18ea64: 0xc06d448  jal         func_1B5120
label_18ea68:
    if (ctx->pc == 0x18EA68u) {
        ctx->pc = 0x18EA6Cu;
        goto label_18ea6c;
    }
    ctx->pc = 0x18EA64u;
    SET_GPR_U32(ctx, 31, 0x18EA6Cu);
    ctx->pc = 0x1B5120u;
    { ctx->pc = 0x1b5120; return; }
    ctx->pc = 0x18EA6Cu;
label_18ea6c:
    // 0x18ea6c: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x18ea6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
label_18ea70:
    // 0x18ea70: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x18ea70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_18ea74:
    // 0x18ea74: 0xe7808834  swc1        $f0, -0x77CC($gp)
    ctx->pc = 0x18ea74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294936628), bits); }
label_18ea78:
    // 0x18ea78: 0xc066e26  jal         func_19B898
label_18ea7c:
    if (ctx->pc == 0x18EA7Cu) {
        ctx->pc = 0x18EA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EA78u;
        // 0x18ea7c: 0x24849930  addiu       $a0, $a0, -0x66D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940976));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18EA80u;
        goto label_18ea80;
    }
    ctx->pc = 0x18EA78u;
    SET_GPR_U32(ctx, 31, 0x18EA80u);
    ctx->pc = 0x18EA7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18EA78u;
    // 0x18ea7c: 0x24849930  addiu       $a0, $a0, -0x66D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940976));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x18EA80u;
label_18ea80:
    // 0x18ea80: 0xc7818838  lwc1        $f1, -0x77C8($gp)
    ctx->pc = 0x18ea80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_18ea84:
    // 0x18ea84: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x18ea84u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18ea88:
    // 0x18ea88: 0x0  nop
    ctx->pc = 0x18ea88u;
    // NOP
label_18ea8c:
    // 0x18ea8c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x18ea8cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18ea90:
    // 0x18ea90: 0x0  nop
    ctx->pc = 0x18ea90u;
    // NOP
label_18ea94:
    // 0x18ea94: 0x4500000a  bc1f        . + 4 + (0xA << 2)
label_18ea98:
    if (ctx->pc == 0x18EA98u) {
        ctx->pc = 0x18EA9Cu;
        goto label_18ea9c;
    }
    ctx->pc = 0x18EA94u;
    {
        const bool branch_taken_0x18ea94 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x18ea94) {
            ctx->pc = 0x18EAC0u;
            goto label_18eac0;
        }
    }
    ctx->pc = 0x18EA9Cu;
label_18ea9c:
    // 0x18ea9c: 0xc7818844  lwc1        $f1, -0x77BC($gp)
    ctx->pc = 0x18ea9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936644)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_18eaa0:
    // 0x18eaa0: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x18eaa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
label_18eaa4:
    // 0x18eaa4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x18eaa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_18eaa8:
    // 0x18eaa8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x18eaa8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_18eaac:
    // 0x18eaac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18eaacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18eab0:
    // 0x18eab0: 0x0  nop
    ctx->pc = 0x18eab0u;
    // NOP
label_18eab4:
    // 0x18eab4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x18eab4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_18eab8:
    // 0x18eab8: 0x10000009  b           . + 4 + (0x9 << 2)
label_18eabc:
    if (ctx->pc == 0x18EABCu) {
        ctx->pc = 0x18EABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EAB8u;
        // 0x18eabc: 0xe4209934  swc1        $f0, -0x66CC($at) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294940980), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x18EAC0u;
        goto label_18eac0;
    }
    ctx->pc = 0x18EAB8u;
    {
        const bool branch_taken_0x18eab8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18EABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EAB8u;
        // 0x18eabc: 0xe4209934  swc1        $f0, -0x66CC($at) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294940980), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x18eab8) {
            ctx->pc = 0x18EAE0u;
            goto label_18eae0;
        }
    }
    ctx->pc = 0x18EAC0u;
label_18eac0:
    // 0x18eac0: 0xc7808844  lwc1        $f0, -0x77BC($gp)
    ctx->pc = 0x18eac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936644)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18eac4:
    // 0x18eac4: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x18eac4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
label_18eac8:
    // 0x18eac8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x18eac8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_18eacc:
    // 0x18eacc: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x18eaccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_18ead0:
    // 0x18ead0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x18ead0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_18ead4:
    // 0x18ead4: 0x0  nop
    ctx->pc = 0x18ead4u;
    // NOP
label_18ead8:
    // 0x18ead8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x18ead8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_18eadc:
    // 0x18eadc: 0xe4209934  swc1        $f0, -0x66CC($at)
    ctx->pc = 0x18eadcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294940980), bits); }
label_18eae0:
    // 0x18eae0: 0xc7818834  lwc1        $f1, -0x77CC($gp)
    ctx->pc = 0x18eae0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936628)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_18eae4:
    // 0x18eae4: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x18eae4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
label_18eae8:
    // 0x18eae8: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x18eae8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_18eaec:
    // 0x18eaec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18eaecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18eaf0:
    // 0x18eaf0: 0x0  nop
    ctx->pc = 0x18eaf0u;
    // NOP
label_18eaf4:
    // 0x18eaf4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x18eaf4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18eaf8:
    // 0x18eaf8: 0x0  nop
    ctx->pc = 0x18eaf8u;
    // NOP
label_18eafc:
    // 0x18eafc: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_18eb00:
    if (ctx->pc == 0x18EB00u) {
        ctx->pc = 0x18EB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EAFCu;
        // 0x18eb00: 0x3c024170  lui         $v0, 0x4170 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18EB04u;
        goto label_18eb04;
    }
    ctx->pc = 0x18EAFCu;
    {
        const bool branch_taken_0x18eafc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x18EB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EAFCu;
        // 0x18eb00: 0x3c024170  lui         $v0, 0x4170 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18eafc) {
            ctx->pc = 0x18EB0Cu;
            goto label_18eb0c;
        }
    }
    ctx->pc = 0x18EB04u;
label_18eb04:
    // 0x18eb04: 0xe7808834  swc1        $f0, -0x77CC($gp)
    ctx->pc = 0x18eb04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294936628), bits); }
label_18eb08:
    // 0x18eb08: 0x3c024170  lui         $v0, 0x4170
    ctx->pc = 0x18eb08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
label_18eb0c:
    // 0x18eb0c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18eb0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    ctx->pc = 0x18eb10u;
    return;
}
