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


void entry_00254d38_part53(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x26e378u: goto label_26e378;
        case 0x26e37cu: goto label_26e37c;
        case 0x26e380u: goto label_26e380;
        case 0x26e384u: goto label_26e384;
        case 0x26e388u: goto label_26e388;
        case 0x26e38cu: goto label_26e38c;
        case 0x26e390u: goto label_26e390;
        case 0x26e394u: goto label_26e394;
        case 0x26e398u: goto label_26e398;
        case 0x26e39cu: goto label_26e39c;
        case 0x26e3a0u: goto label_26e3a0;
        case 0x26e3a4u: goto label_26e3a4;
        case 0x26e3a8u: goto label_26e3a8;
        case 0x26e3acu: goto label_26e3ac;
        case 0x26e3b0u: goto label_26e3b0;
        case 0x26e3b4u: goto label_26e3b4;
        case 0x26e3b8u: goto label_26e3b8;
        case 0x26e3bcu: goto label_26e3bc;
        case 0x26e3c0u: goto label_26e3c0;
        case 0x26e3c4u: goto label_26e3c4;
        case 0x26e3c8u: goto label_26e3c8;
        case 0x26e3ccu: goto label_26e3cc;
        case 0x26e3d0u: goto label_26e3d0;
        case 0x26e3d4u: goto label_26e3d4;
        case 0x26e3d8u: goto label_26e3d8;
        case 0x26e3dcu: goto label_26e3dc;
        case 0x26e3e0u: goto label_26e3e0;
        case 0x26e3e4u: goto label_26e3e4;
        case 0x26e3e8u: goto label_26e3e8;
        case 0x26e3ecu: goto label_26e3ec;
        case 0x26e3f0u: goto label_26e3f0;
        case 0x26e3f4u: goto label_26e3f4;
        case 0x26e3f8u: goto label_26e3f8;
        case 0x26e3fcu: goto label_26e3fc;
        case 0x26e400u: goto label_26e400;
        case 0x26e404u: goto label_26e404;
        case 0x26e408u: goto label_26e408;
        case 0x26e40cu: goto label_26e40c;
        case 0x26e410u: goto label_26e410;
        case 0x26e414u: goto label_26e414;
        case 0x26e418u: goto label_26e418;
        case 0x26e41cu: goto label_26e41c;
        case 0x26e420u: goto label_26e420;
        case 0x26e424u: goto label_26e424;
        case 0x26e428u: goto label_26e428;
        case 0x26e42cu: goto label_26e42c;
        case 0x26e430u: goto label_26e430;
        case 0x26e434u: goto label_26e434;
        case 0x26e438u: goto label_26e438;
        case 0x26e43cu: goto label_26e43c;
        case 0x26e440u: goto label_26e440;
        case 0x26e444u: goto label_26e444;
        case 0x26e448u: goto label_26e448;
        case 0x26e44cu: goto label_26e44c;
        case 0x26e450u: goto label_26e450;
        case 0x26e454u: goto label_26e454;
        case 0x26e458u: goto label_26e458;
        case 0x26e45cu: goto label_26e45c;
        case 0x26e460u: goto label_26e460;
        case 0x26e464u: goto label_26e464;
        case 0x26e468u: goto label_26e468;
        case 0x26e46cu: goto label_26e46c;
        case 0x26e470u: goto label_26e470;
        case 0x26e474u: goto label_26e474;
        case 0x26e478u: goto label_26e478;
        case 0x26e47cu: goto label_26e47c;
        case 0x26e480u: goto label_26e480;
        case 0x26e484u: goto label_26e484;
        case 0x26e488u: goto label_26e488;
        case 0x26e48cu: goto label_26e48c;
        case 0x26e490u: goto label_26e490;
        case 0x26e494u: goto label_26e494;
        case 0x26e498u: goto label_26e498;
        case 0x26e49cu: goto label_26e49c;
        case 0x26e4a0u: goto label_26e4a0;
        case 0x26e4a4u: goto label_26e4a4;
        case 0x26e4a8u: goto label_26e4a8;
        case 0x26e4acu: goto label_26e4ac;
        case 0x26e4b0u: goto label_26e4b0;
        case 0x26e4b4u: goto label_26e4b4;
        case 0x26e4b8u: goto label_26e4b8;
        case 0x26e4bcu: goto label_26e4bc;
        case 0x26e4c0u: goto label_26e4c0;
        case 0x26e4c4u: goto label_26e4c4;
        case 0x26e4c8u: goto label_26e4c8;
        case 0x26e4ccu: goto label_26e4cc;
        case 0x26e4d0u: goto label_26e4d0;
        case 0x26e4d4u: goto label_26e4d4;
        case 0x26e4d8u: goto label_26e4d8;
        case 0x26e4dcu: goto label_26e4dc;
        case 0x26e4e0u: goto label_26e4e0;
        case 0x26e4e4u: goto label_26e4e4;
        case 0x26e4e8u: goto label_26e4e8;
        case 0x26e4ecu: goto label_26e4ec;
        case 0x26e4f0u: goto label_26e4f0;
        case 0x26e4f4u: goto label_26e4f4;
        case 0x26e4f8u: goto label_26e4f8;
        case 0x26e4fcu: goto label_26e4fc;
        case 0x26e500u: goto label_26e500;
        case 0x26e504u: goto label_26e504;
        case 0x26e508u: goto label_26e508;
        case 0x26e50cu: goto label_26e50c;
        case 0x26e510u: goto label_26e510;
        case 0x26e514u: goto label_26e514;
        case 0x26e518u: goto label_26e518;
        case 0x26e51cu: goto label_26e51c;
        case 0x26e520u: goto label_26e520;
        case 0x26e524u: goto label_26e524;
        case 0x26e528u: goto label_26e528;
        case 0x26e52cu: goto label_26e52c;
        case 0x26e530u: goto label_26e530;
        case 0x26e534u: goto label_26e534;
        case 0x26e538u: goto label_26e538;
        case 0x26e53cu: goto label_26e53c;
        case 0x26e540u: goto label_26e540;
        case 0x26e544u: goto label_26e544;
        case 0x26e548u: goto label_26e548;
        case 0x26e54cu: goto label_26e54c;
        case 0x26e550u: goto label_26e550;
        case 0x26e554u: goto label_26e554;
        case 0x26e558u: goto label_26e558;
        case 0x26e55cu: goto label_26e55c;
        case 0x26e560u: goto label_26e560;
        case 0x26e564u: goto label_26e564;
        case 0x26e568u: goto label_26e568;
        case 0x26e56cu: goto label_26e56c;
        case 0x26e570u: goto label_26e570;
        case 0x26e574u: goto label_26e574;
        case 0x26e578u: goto label_26e578;
        case 0x26e57cu: goto label_26e57c;
        case 0x26e580u: goto label_26e580;
        case 0x26e584u: goto label_26e584;
        case 0x26e588u: goto label_26e588;
        case 0x26e58cu: goto label_26e58c;
        case 0x26e590u: goto label_26e590;
        case 0x26e594u: goto label_26e594;
        case 0x26e598u: goto label_26e598;
        case 0x26e59cu: goto label_26e59c;
        case 0x26e5a0u: goto label_26e5a0;
        case 0x26e5a4u: goto label_26e5a4;
        case 0x26e5a8u: goto label_26e5a8;
        case 0x26e5acu: goto label_26e5ac;
        case 0x26e5b0u: goto label_26e5b0;
        case 0x26e5b4u: goto label_26e5b4;
        case 0x26e5b8u: goto label_26e5b8;
        case 0x26e5bcu: goto label_26e5bc;
        case 0x26e5c0u: goto label_26e5c0;
        case 0x26e5c4u: goto label_26e5c4;
        case 0x26e5c8u: goto label_26e5c8;
        case 0x26e5ccu: goto label_26e5cc;
        case 0x26e5d0u: goto label_26e5d0;
        case 0x26e5d4u: goto label_26e5d4;
        case 0x26e5d8u: goto label_26e5d8;
        case 0x26e5dcu: goto label_26e5dc;
        case 0x26e5e0u: goto label_26e5e0;
        case 0x26e5e4u: goto label_26e5e4;
        case 0x26e5e8u: goto label_26e5e8;
        case 0x26e5ecu: goto label_26e5ec;
        case 0x26e5f0u: goto label_26e5f0;
        case 0x26e5f4u: goto label_26e5f4;
        case 0x26e5f8u: goto label_26e5f8;
        case 0x26e5fcu: goto label_26e5fc;
        case 0x26e600u: goto label_26e600;
        case 0x26e604u: goto label_26e604;
        case 0x26e608u: goto label_26e608;
        case 0x26e60cu: goto label_26e60c;
        case 0x26e610u: goto label_26e610;
        case 0x26e614u: goto label_26e614;
        case 0x26e618u: goto label_26e618;
        case 0x26e61cu: goto label_26e61c;
        case 0x26e620u: goto label_26e620;
        case 0x26e624u: goto label_26e624;
        case 0x26e628u: goto label_26e628;
        case 0x26e62cu: goto label_26e62c;
        case 0x26e630u: goto label_26e630;
        case 0x26e634u: goto label_26e634;
        case 0x26e638u: goto label_26e638;
        case 0x26e63cu: goto label_26e63c;
        case 0x26e640u: goto label_26e640;
        case 0x26e644u: goto label_26e644;
        case 0x26e648u: goto label_26e648;
        case 0x26e64cu: goto label_26e64c;
        case 0x26e650u: goto label_26e650;
        case 0x26e654u: goto label_26e654;
        case 0x26e658u: goto label_26e658;
        case 0x26e65cu: goto label_26e65c;
        case 0x26e660u: goto label_26e660;
        case 0x26e664u: goto label_26e664;
        case 0x26e668u: goto label_26e668;
        case 0x26e66cu: goto label_26e66c;
        case 0x26e670u: goto label_26e670;
        case 0x26e674u: goto label_26e674;
        case 0x26e678u: goto label_26e678;
        case 0x26e67cu: goto label_26e67c;
        case 0x26e680u: goto label_26e680;
        case 0x26e684u: goto label_26e684;
        case 0x26e688u: goto label_26e688;
        case 0x26e68cu: goto label_26e68c;
        case 0x26e690u: goto label_26e690;
        case 0x26e694u: goto label_26e694;
        case 0x26e698u: goto label_26e698;
        case 0x26e69cu: goto label_26e69c;
        case 0x26e6a0u: goto label_26e6a0;
        case 0x26e6a4u: goto label_26e6a4;
        case 0x26e6a8u: goto label_26e6a8;
        case 0x26e6acu: goto label_26e6ac;
        case 0x26e6b0u: goto label_26e6b0;
        case 0x26e6b4u: goto label_26e6b4;
        case 0x26e6b8u: goto label_26e6b8;
        case 0x26e6bcu: goto label_26e6bc;
        case 0x26e6c0u: goto label_26e6c0;
        case 0x26e6c4u: goto label_26e6c4;
        case 0x26e6c8u: goto label_26e6c8;
        case 0x26e6ccu: goto label_26e6cc;
        case 0x26e6d0u: goto label_26e6d0;
        case 0x26e6d4u: goto label_26e6d4;
        case 0x26e6d8u: goto label_26e6d8;
        case 0x26e6dcu: goto label_26e6dc;
        case 0x26e6e0u: goto label_26e6e0;
        case 0x26e6e4u: goto label_26e6e4;
        case 0x26e6e8u: goto label_26e6e8;
        case 0x26e6ecu: goto label_26e6ec;
        case 0x26e6f0u: goto label_26e6f0;
        case 0x26e6f4u: goto label_26e6f4;
        case 0x26e6f8u: goto label_26e6f8;
        case 0x26e6fcu: goto label_26e6fc;
        case 0x26e700u: goto label_26e700;
        case 0x26e704u: goto label_26e704;
        case 0x26e708u: goto label_26e708;
        case 0x26e70cu: goto label_26e70c;
        case 0x26e710u: goto label_26e710;
        case 0x26e714u: goto label_26e714;
        case 0x26e718u: goto label_26e718;
        case 0x26e71cu: goto label_26e71c;
        case 0x26e720u: goto label_26e720;
        case 0x26e724u: goto label_26e724;
        case 0x26e728u: goto label_26e728;
        case 0x26e72cu: goto label_26e72c;
        case 0x26e730u: goto label_26e730;
        case 0x26e734u: goto label_26e734;
        case 0x26e738u: goto label_26e738;
        case 0x26e73cu: goto label_26e73c;
        case 0x26e740u: goto label_26e740;
        case 0x26e744u: goto label_26e744;
        case 0x26e748u: goto label_26e748;
        case 0x26e74cu: goto label_26e74c;
        case 0x26e750u: goto label_26e750;
        case 0x26e754u: goto label_26e754;
        case 0x26e758u: goto label_26e758;
        case 0x26e75cu: goto label_26e75c;
        case 0x26e760u: goto label_26e760;
        case 0x26e764u: goto label_26e764;
        case 0x26e768u: goto label_26e768;
        case 0x26e76cu: goto label_26e76c;
        case 0x26e770u: goto label_26e770;
        case 0x26e774u: goto label_26e774;
        case 0x26e778u: goto label_26e778;
        case 0x26e77cu: goto label_26e77c;
        case 0x26e780u: goto label_26e780;
        case 0x26e784u: goto label_26e784;
        case 0x26e788u: goto label_26e788;
        case 0x26e78cu: goto label_26e78c;
        case 0x26e790u: goto label_26e790;
        case 0x26e794u: goto label_26e794;
        case 0x26e798u: goto label_26e798;
        case 0x26e79cu: goto label_26e79c;
        case 0x26e7a0u: goto label_26e7a0;
        case 0x26e7a4u: goto label_26e7a4;
        case 0x26e7a8u: goto label_26e7a8;
        case 0x26e7acu: goto label_26e7ac;
        case 0x26e7b0u: goto label_26e7b0;
        case 0x26e7b4u: goto label_26e7b4;
        case 0x26e7b8u: goto label_26e7b8;
        case 0x26e7bcu: goto label_26e7bc;
        case 0x26e7c0u: goto label_26e7c0;
        case 0x26e7c4u: goto label_26e7c4;
        case 0x26e7c8u: goto label_26e7c8;
        case 0x26e7ccu: goto label_26e7cc;
        case 0x26e7d0u: goto label_26e7d0;
        case 0x26e7d4u: goto label_26e7d4;
        case 0x26e7d8u: goto label_26e7d8;
        case 0x26e7dcu: goto label_26e7dc;
        case 0x26e7e0u: goto label_26e7e0;
        case 0x26e7e4u: goto label_26e7e4;
        case 0x26e7e8u: goto label_26e7e8;
        case 0x26e7ecu: goto label_26e7ec;
        case 0x26e7f0u: goto label_26e7f0;
        case 0x26e7f4u: goto label_26e7f4;
        case 0x26e7f8u: goto label_26e7f8;
        case 0x26e7fcu: goto label_26e7fc;
        case 0x26e800u: goto label_26e800;
        case 0x26e804u: goto label_26e804;
        case 0x26e808u: goto label_26e808;
        case 0x26e80cu: goto label_26e80c;
        case 0x26e810u: goto label_26e810;
        case 0x26e814u: goto label_26e814;
        case 0x26e818u: goto label_26e818;
        case 0x26e81cu: goto label_26e81c;
        case 0x26e820u: goto label_26e820;
        case 0x26e824u: goto label_26e824;
        case 0x26e828u: goto label_26e828;
        case 0x26e82cu: goto label_26e82c;
        case 0x26e830u: goto label_26e830;
        case 0x26e834u: goto label_26e834;
        case 0x26e838u: goto label_26e838;
        case 0x26e83cu: goto label_26e83c;
        case 0x26e840u: goto label_26e840;
        case 0x26e844u: goto label_26e844;
        case 0x26e848u: goto label_26e848;
        case 0x26e84cu: goto label_26e84c;
        case 0x26e850u: goto label_26e850;
        case 0x26e854u: goto label_26e854;
        case 0x26e858u: goto label_26e858;
        case 0x26e85cu: goto label_26e85c;
        case 0x26e860u: goto label_26e860;
        case 0x26e864u: goto label_26e864;
        case 0x26e868u: goto label_26e868;
        case 0x26e86cu: goto label_26e86c;
        case 0x26e870u: goto label_26e870;
        case 0x26e874u: goto label_26e874;
        case 0x26e878u: goto label_26e878;
        case 0x26e87cu: goto label_26e87c;
        case 0x26e880u: goto label_26e880;
        case 0x26e884u: goto label_26e884;
        case 0x26e888u: goto label_26e888;
        case 0x26e88cu: goto label_26e88c;
        case 0x26e890u: goto label_26e890;
        case 0x26e894u: goto label_26e894;
        case 0x26e898u: goto label_26e898;
        case 0x26e89cu: goto label_26e89c;
        case 0x26e8a0u: goto label_26e8a0;
        case 0x26e8a4u: goto label_26e8a4;
        case 0x26e8a8u: goto label_26e8a8;
        case 0x26e8acu: goto label_26e8ac;
        case 0x26e8b0u: goto label_26e8b0;
        case 0x26e8b4u: goto label_26e8b4;
        case 0x26e8b8u: goto label_26e8b8;
        case 0x26e8bcu: goto label_26e8bc;
        case 0x26e8c0u: goto label_26e8c0;
        case 0x26e8c4u: goto label_26e8c4;
        case 0x26e8c8u: goto label_26e8c8;
        case 0x26e8ccu: goto label_26e8cc;
        case 0x26e8d0u: goto label_26e8d0;
        case 0x26e8d4u: goto label_26e8d4;
        case 0x26e8d8u: goto label_26e8d8;
        case 0x26e8dcu: goto label_26e8dc;
        case 0x26e8e0u: goto label_26e8e0;
        case 0x26e8e4u: goto label_26e8e4;
        case 0x26e8e8u: goto label_26e8e8;
        case 0x26e8ecu: goto label_26e8ec;
        case 0x26e8f0u: goto label_26e8f0;
        case 0x26e8f4u: goto label_26e8f4;
        case 0x26e8f8u: goto label_26e8f8;
        case 0x26e8fcu: goto label_26e8fc;
        case 0x26e900u: goto label_26e900;
        case 0x26e904u: goto label_26e904;
        case 0x26e908u: goto label_26e908;
        case 0x26e90cu: goto label_26e90c;
        case 0x26e910u: goto label_26e910;
        case 0x26e914u: goto label_26e914;
        case 0x26e918u: goto label_26e918;
        case 0x26e91cu: goto label_26e91c;
        case 0x26e920u: goto label_26e920;
        case 0x26e924u: goto label_26e924;
        case 0x26e928u: goto label_26e928;
        case 0x26e92cu: goto label_26e92c;
        case 0x26e930u: goto label_26e930;
        case 0x26e934u: goto label_26e934;
        case 0x26e938u: goto label_26e938;
        case 0x26e93cu: goto label_26e93c;
        case 0x26e940u: goto label_26e940;
        case 0x26e944u: goto label_26e944;
        case 0x26e948u: goto label_26e948;
        case 0x26e94cu: goto label_26e94c;
        case 0x26e950u: goto label_26e950;
        case 0x26e954u: goto label_26e954;
        case 0x26e958u: goto label_26e958;
        case 0x26e95cu: goto label_26e95c;
        case 0x26e960u: goto label_26e960;
        case 0x26e964u: goto label_26e964;
        case 0x26e968u: goto label_26e968;
        case 0x26e96cu: goto label_26e96c;
        case 0x26e970u: goto label_26e970;
        case 0x26e974u: goto label_26e974;
        case 0x26e978u: goto label_26e978;
        case 0x26e97cu: goto label_26e97c;
        case 0x26e980u: goto label_26e980;
        case 0x26e984u: goto label_26e984;
        case 0x26e988u: goto label_26e988;
        case 0x26e98cu: goto label_26e98c;
        case 0x26e990u: goto label_26e990;
        case 0x26e994u: goto label_26e994;
        case 0x26e998u: goto label_26e998;
        case 0x26e99cu: goto label_26e99c;
        case 0x26e9a0u: goto label_26e9a0;
        case 0x26e9a4u: goto label_26e9a4;
        case 0x26e9a8u: goto label_26e9a8;
        case 0x26e9acu: goto label_26e9ac;
        case 0x26e9b0u: goto label_26e9b0;
        case 0x26e9b4u: goto label_26e9b4;
        case 0x26e9b8u: goto label_26e9b8;
        case 0x26e9bcu: goto label_26e9bc;
        case 0x26e9c0u: goto label_26e9c0;
        case 0x26e9c4u: goto label_26e9c4;
        case 0x26e9c8u: goto label_26e9c8;
        case 0x26e9ccu: goto label_26e9cc;
        case 0x26e9d0u: goto label_26e9d0;
        case 0x26e9d4u: goto label_26e9d4;
        case 0x26e9d8u: goto label_26e9d8;
        case 0x26e9dcu: goto label_26e9dc;
        case 0x26e9e0u: goto label_26e9e0;
        case 0x26e9e4u: goto label_26e9e4;
        case 0x26e9e8u: goto label_26e9e8;
        case 0x26e9ecu: goto label_26e9ec;
        case 0x26e9f0u: goto label_26e9f0;
        case 0x26e9f4u: goto label_26e9f4;
        case 0x26e9f8u: goto label_26e9f8;
        case 0x26e9fcu: goto label_26e9fc;
        case 0x26ea00u: goto label_26ea00;
        case 0x26ea04u: goto label_26ea04;
        case 0x26ea08u: goto label_26ea08;
        case 0x26ea0cu: goto label_26ea0c;
        case 0x26ea10u: goto label_26ea10;
        case 0x26ea14u: goto label_26ea14;
        case 0x26ea18u: goto label_26ea18;
        case 0x26ea1cu: goto label_26ea1c;
        case 0x26ea20u: goto label_26ea20;
        case 0x26ea24u: goto label_26ea24;
        case 0x26ea28u: goto label_26ea28;
        case 0x26ea2cu: goto label_26ea2c;
        case 0x26ea30u: goto label_26ea30;
        case 0x26ea34u: goto label_26ea34;
        case 0x26ea38u: goto label_26ea38;
        case 0x26ea3cu: goto label_26ea3c;
        case 0x26ea40u: goto label_26ea40;
        case 0x26ea44u: goto label_26ea44;
        case 0x26ea48u: goto label_26ea48;
        case 0x26ea4cu: goto label_26ea4c;
        case 0x26ea50u: goto label_26ea50;
        case 0x26ea54u: goto label_26ea54;
        case 0x26ea58u: goto label_26ea58;
        case 0x26ea5cu: goto label_26ea5c;
        case 0x26ea60u: goto label_26ea60;
        case 0x26ea64u: goto label_26ea64;
        case 0x26ea68u: goto label_26ea68;
        case 0x26ea6cu: goto label_26ea6c;
        case 0x26ea70u: goto label_26ea70;
        case 0x26ea74u: goto label_26ea74;
        case 0x26ea78u: goto label_26ea78;
        case 0x26ea7cu: goto label_26ea7c;
        case 0x26ea80u: goto label_26ea80;
        case 0x26ea84u: goto label_26ea84;
        case 0x26ea88u: goto label_26ea88;
        case 0x26ea8cu: goto label_26ea8c;
        case 0x26ea90u: goto label_26ea90;
        case 0x26ea94u: goto label_26ea94;
        case 0x26ea98u: goto label_26ea98;
        case 0x26ea9cu: goto label_26ea9c;
        case 0x26eaa0u: goto label_26eaa0;
        case 0x26eaa4u: goto label_26eaa4;
        case 0x26eaa8u: goto label_26eaa8;
        case 0x26eaacu: goto label_26eaac;
        case 0x26eab0u: goto label_26eab0;
        case 0x26eab4u: goto label_26eab4;
        case 0x26eab8u: goto label_26eab8;
        case 0x26eabcu: goto label_26eabc;
        case 0x26eac0u: goto label_26eac0;
        case 0x26eac4u: goto label_26eac4;
        case 0x26eac8u: goto label_26eac8;
        case 0x26eaccu: goto label_26eacc;
        case 0x26ead0u: goto label_26ead0;
        case 0x26ead4u: goto label_26ead4;
        case 0x26ead8u: goto label_26ead8;
        case 0x26eadcu: goto label_26eadc;
        case 0x26eae0u: goto label_26eae0;
        case 0x26eae4u: goto label_26eae4;
        case 0x26eae8u: goto label_26eae8;
        case 0x26eaecu: goto label_26eaec;
        case 0x26eaf0u: goto label_26eaf0;
        case 0x26eaf4u: goto label_26eaf4;
        case 0x26eaf8u: goto label_26eaf8;
        case 0x26eafcu: goto label_26eafc;
        case 0x26eb00u: goto label_26eb00;
        case 0x26eb04u: goto label_26eb04;
        case 0x26eb08u: goto label_26eb08;
        case 0x26eb0cu: goto label_26eb0c;
        case 0x26eb10u: goto label_26eb10;
        case 0x26eb14u: goto label_26eb14;
        case 0x26eb18u: goto label_26eb18;
        case 0x26eb1cu: goto label_26eb1c;
        case 0x26eb20u: goto label_26eb20;
        case 0x26eb24u: goto label_26eb24;
        case 0x26eb28u: goto label_26eb28;
        case 0x26eb2cu: goto label_26eb2c;
        case 0x26eb30u: goto label_26eb30;
        case 0x26eb34u: goto label_26eb34;
        case 0x26eb38u: goto label_26eb38;
        case 0x26eb3cu: goto label_26eb3c;
        case 0x26eb40u: goto label_26eb40;
        case 0x26eb44u: goto label_26eb44;
        default: return;
    }

label_26e378:
    // 0x26e378: 0x0  nop
    ctx->pc = 0x26e378u;
    // NOP
label_26e37c:
    // 0x26e37c: 0x0  nop
    ctx->pc = 0x26e37cu;
    // NOP
label_26e380:
    // 0x26e380: 0x41e3  .word       0x000041E3                   # negu        $t0, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e380u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_26e384:
    // 0x26e384: 0xd240  sll         $k0, $zero, 9
    ctx->pc = 0x26e384u;
    SET_GPR_S32(ctx, 26, (int32_t)SLL32(GPR_U32(ctx, 0), 9));
label_26e388:
    // 0x26e388: 0x0  nop
    ctx->pc = 0x26e388u;
    // NOP
label_26e38c:
    // 0x26e38c: 0x0  nop
    ctx->pc = 0x26e38cu;
    // NOP
label_26e390:
    // 0x26e390: 0x41fe  dsrl32      $t0, $zero, 7
    ctx->pc = 0x26e390u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) >> (32 + 7));
label_26e394:
    // 0x26e394: 0x16a80  sll         $t5, $at, 10
    ctx->pc = 0x26e394u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 1), 10));
label_26e398:
    // 0x26e398: 0x0  nop
    ctx->pc = 0x26e398u;
    // NOP
label_26e39c:
    // 0x26e39c: 0x0  nop
    ctx->pc = 0x26e39cu;
    // NOP
label_26e3a0:
    // 0x26e3a0: 0x422c  .word       0x0000422C                   # dadd        $t0, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e3a0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 8, r); }
label_26e3a4:
    // 0x26e3a4: 0x10fe0  .word       0x00010FE0                   # add         $at, $zero, $at # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e3a4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 1, (int32_t)result);     } }
label_26e3a8:
    // 0x26e3a8: 0x0  nop
    ctx->pc = 0x26e3a8u;
    // NOP
label_26e3ac:
    // 0x26e3ac: 0x0  nop
    ctx->pc = 0x26e3acu;
    // NOP
label_26e3b0:
    // 0x26e3b0: 0x424e  .word       0x0000424E                   # INVALID     $zero, $zero, 0x424E # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e3b0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x26E3B0 raw=0x0000424E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26e3b4:
    // 0x26e3b4: 0xd0c0  sll         $k0, $zero, 3
    ctx->pc = 0x26e3b4u;
    SET_GPR_S32(ctx, 26, (int32_t)SLL32(GPR_U32(ctx, 0), 3));
label_26e3b8:
    // 0x26e3b8: 0x0  nop
    ctx->pc = 0x26e3b8u;
    // NOP
label_26e3bc:
    // 0x26e3bc: 0x0  nop
    ctx->pc = 0x26e3bcu;
    // NOP
label_26e3c0:
    // 0x26e3c0: 0x4269  .word       0x00004269                   # mtsa        $zero # 00004240 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x26e3c0u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_26e3c4:
    // 0x26e3c4: 0x11950  .word       0x00011950                   # mfhi        $v1 # 00010140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e3c4u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_26e3c8:
    // 0x26e3c8: 0x0  nop
    ctx->pc = 0x26e3c8u;
    // NOP
label_26e3cc:
    // 0x26e3cc: 0x0  nop
    ctx->pc = 0x26e3ccu;
    // NOP
label_26e3d0:
    // 0x26e3d0: 0x428d  break       0, 266
    ctx->pc = 0x26e3d0u;
    runtime->handleBreak(rdram, ctx);
label_26e3d4:
    // 0x26e3d4: 0xd820  add         $k1, $zero, $zero
    ctx->pc = 0x26e3d4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 27, (int32_t)result);     } }
label_26e3d8:
    // 0x26e3d8: 0x0  nop
    ctx->pc = 0x26e3d8u;
    // NOP
label_26e3dc:
    // 0x26e3dc: 0x0  nop
    ctx->pc = 0x26e3dcu;
    // NOP
label_26e3e0:
    // 0x26e3e0: 0x42a9  .word       0x000042A9                   # mtsa        $zero # 00004280 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x26e3e0u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_26e3e4:
    // 0x26e3e4: 0xcec0  sll         $t9, $zero, 27
    ctx->pc = 0x26e3e4u;
    SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 0), 27));
label_26e3e8:
    // 0x26e3e8: 0x0  nop
    ctx->pc = 0x26e3e8u;
    // NOP
label_26e3ec:
    // 0x26e3ec: 0x0  nop
    ctx->pc = 0x26e3ecu;
    // NOP
label_26e3f0:
    // 0x26e3f0: 0x42c3  sra         $t0, $zero, 11
    ctx->pc = 0x26e3f0u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 0), 11));
label_26e3f4:
    // 0x26e3f4: 0x14210  .word       0x00014210                   # mfhi        $t0 # 00010200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e3f4u;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_26e3f8:
    // 0x26e3f8: 0x0  nop
    ctx->pc = 0x26e3f8u;
    // NOP
label_26e3fc:
    // 0x26e3fc: 0x0  nop
    ctx->pc = 0x26e3fcu;
    // NOP
label_26e400:
    // 0x26e400: 0x42ec  .word       0x000042EC                   # dadd        $t0, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e400u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 8, r); }
label_26e404:
    // 0x26e404: 0xf8f0  tge         $zero, $zero, 995
    ctx->pc = 0x26e404u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26e408:
    // 0x26e408: 0x0  nop
    ctx->pc = 0x26e408u;
    // NOP
label_26e40c:
    // 0x26e40c: 0x0  nop
    ctx->pc = 0x26e40cu;
    // NOP
label_26e410:
    // 0x26e410: 0x430c  syscall     268
    ctx->pc = 0x26e410u;
    ctx->pc = 0x26E414u;
runtime->handleSyscall(rdram, ctx, 0x10Cu);
label_26e414:
    // 0x26e414: 0xfe70  tge         $zero, $zero, 1017
    ctx->pc = 0x26e414u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26e418:
    // 0x26e418: 0x0  nop
    ctx->pc = 0x26e418u;
    // NOP
label_26e41c:
    // 0x26e41c: 0x0  nop
    ctx->pc = 0x26e41cu;
    // NOP
label_26e420:
    // 0x26e420: 0x432c  .word       0x0000432C                   # dadd        $t0, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e420u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 8, r); }
label_26e424:
    // 0x26e424: 0xd2a0  .word       0x0000D2A0                   # add         $k0, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e424u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 26, (int32_t)result);     } }
label_26e428:
    // 0x26e428: 0x0  nop
    ctx->pc = 0x26e428u;
    // NOP
label_26e42c:
    // 0x26e42c: 0x0  nop
    ctx->pc = 0x26e42cu;
    // NOP
label_26e430:
    // 0x26e430: 0x4347  .word       0x00004347                   # srav        $t0, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e430u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_26e434:
    // 0x26e434: 0xad10  .word       0x0000AD10                   # mfhi        $s5 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e434u;
    SET_GPR_U64(ctx, 21, ctx->hi);
label_26e438:
    // 0x26e438: 0x0  nop
    ctx->pc = 0x26e438u;
    // NOP
label_26e43c:
    // 0x26e43c: 0x0  nop
    ctx->pc = 0x26e43cu;
    // NOP
label_26e440:
    // 0x26e440: 0x435d  .word       0x0000435D                   # dmultu      $zero, $zero # 00004340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e440u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x26E440 raw=0x0000435D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26e444:
    // 0x26e444: 0xcc40  sll         $t9, $zero, 17
    ctx->pc = 0x26e444u;
    SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
label_26e448:
    // 0x26e448: 0x0  nop
    ctx->pc = 0x26e448u;
    // NOP
label_26e44c:
    // 0x26e44c: 0x0  nop
    ctx->pc = 0x26e44cu;
    // NOP
label_26e450:
    // 0x26e450: 0x4377  .word       0x00004377                   # INVALID     $zero, $zero, 0x4377 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e450u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x26E450 raw=0x00004377"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26e454:
    // 0x26e454: 0xcba0  .word       0x0000CBA0                   # add         $t9, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e454u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 25, (int32_t)result);     } }
label_26e458:
    // 0x26e458: 0x0  nop
    ctx->pc = 0x26e458u;
    // NOP
label_26e45c:
    // 0x26e45c: 0x0  nop
    ctx->pc = 0x26e45cu;
    // NOP
label_26e460:
    // 0x26e460: 0x4391  .word       0x00004391                   # mthi        $zero # 00004380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e460u;
    ctx->hi = GPR_U64(ctx, 0);
label_26e464:
    // 0x26e464: 0xc4c0  sll         $t8, $zero, 19
    ctx->pc = 0x26e464u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
label_26e468:
    // 0x26e468: 0x0  nop
    ctx->pc = 0x26e468u;
    // NOP
label_26e46c:
    // 0x26e46c: 0x0  nop
    ctx->pc = 0x26e46cu;
    // NOP
label_26e470:
    // 0x26e470: 0x43aa  .word       0x000043AA                   # slt         $t0, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e470u;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_26e474:
    // 0x26e474: 0x7950  .word       0x00007950                   # mfhi        $t7 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e474u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_26e478:
    // 0x26e478: 0x0  nop
    ctx->pc = 0x26e478u;
    // NOP
label_26e47c:
    // 0x26e47c: 0x0  nop
    ctx->pc = 0x26e47cu;
    // NOP
label_26e480:
    // 0x26e480: 0x43ba  dsrl        $t0, $zero, 14
    ctx->pc = 0x26e480u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) >> 14);
label_26e484:
    // 0x26e484: 0x8fe0  .word       0x00008FE0                   # add         $s1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e484u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_26e488:
    // 0x26e488: 0x0  nop
    ctx->pc = 0x26e488u;
    // NOP
label_26e48c:
    // 0x26e48c: 0x0  nop
    ctx->pc = 0x26e48cu;
    // NOP
label_26e490:
    // 0x26e490: 0x43cc  syscall     271
    ctx->pc = 0x26e490u;
    ctx->pc = 0x26E494u;
runtime->handleSyscall(rdram, ctx, 0x10Fu);
label_26e494:
    // 0x26e494: 0x70d0  .word       0x000070D0                   # mfhi        $t6 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e494u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_26e498:
    // 0x26e498: 0x0  nop
    ctx->pc = 0x26e498u;
    // NOP
label_26e49c:
    // 0x26e49c: 0x0  nop
    ctx->pc = 0x26e49cu;
    // NOP
label_26e4a0:
    // 0x26e4a0: 0x43db  .word       0x000043DB                   # divu        $t0, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e4a0u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_26e4a4:
    // 0x26e4a4: 0x65f0  tge         $zero, $zero, 407
    ctx->pc = 0x26e4a4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26e4a8:
    // 0x26e4a8: 0x0  nop
    ctx->pc = 0x26e4a8u;
    // NOP
label_26e4ac:
    // 0x26e4ac: 0x0  nop
    ctx->pc = 0x26e4acu;
    // NOP
label_26e4b0:
    // 0x26e4b0: 0x43e8  .word       0x000043E8                   # mfsa        $t0 # 000003C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x26e4b0u;
    SET_GPR_U32(ctx, 8, ctx->sa);
label_26e4b4:
    // 0x26e4b4: 0x7f90  .word       0x00007F90                   # mfhi        $t7 # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e4b4u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_26e4b8:
    // 0x26e4b8: 0x0  nop
    ctx->pc = 0x26e4b8u;
    // NOP
label_26e4bc:
    // 0x26e4bc: 0x0  nop
    ctx->pc = 0x26e4bcu;
    // NOP
label_26e4c0:
    // 0x26e4c0: 0x43f8  dsll        $t0, $zero, 15
    ctx->pc = 0x26e4c0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) << 15);
label_26e4c4:
    // 0x26e4c4: 0xbfe0  .word       0x0000BFE0                   # add         $s7, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e4c4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 23, (int32_t)result);     } }
label_26e4c8:
    // 0x26e4c8: 0x0  nop
    ctx->pc = 0x26e4c8u;
    // NOP
label_26e4cc:
    // 0x26e4cc: 0x0  nop
    ctx->pc = 0x26e4ccu;
    // NOP
label_26e4d0:
    // 0x26e4d0: 0x4410  .word       0x00004410                   # mfhi        $t0 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e4d0u;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_26e4d4:
    // 0x26e4d4: 0x88c0  sll         $s1, $zero, 3
    ctx->pc = 0x26e4d4u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 0), 3));
label_26e4d8:
    // 0x26e4d8: 0x0  nop
    ctx->pc = 0x26e4d8u;
    // NOP
label_26e4dc:
    // 0x26e4dc: 0x0  nop
    ctx->pc = 0x26e4dcu;
    // NOP
label_26e4e0:
    // 0x26e4e0: 0x4422  .word       0x00004422                   # neg         $t0, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e4e0u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 8, (int32_t)tmp); }
label_26e4e4:
    // 0x26e4e4: 0x5d90  .word       0x00005D90                   # mfhi        $t3 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e4e4u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_26e4e8:
    // 0x26e4e8: 0x0  nop
    ctx->pc = 0x26e4e8u;
    // NOP
label_26e4ec:
    // 0x26e4ec: 0x0  nop
    ctx->pc = 0x26e4ecu;
    // NOP
label_26e4f0:
    // 0x26e4f0: 0x442e  .word       0x0000442E                   # dsub        $t0, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e4f0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 8, r); }
label_26e4f4:
    // 0x26e4f4: 0x6800  sll         $t5, $zero, 0
    ctx->pc = 0x26e4f4u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_26e4f8:
    // 0x26e4f8: 0x0  nop
    ctx->pc = 0x26e4f8u;
    // NOP
label_26e4fc:
    // 0x26e4fc: 0x0  nop
    ctx->pc = 0x26e4fcu;
    // NOP
label_26e500:
    // 0x26e500: 0x443b  dsra        $t0, $zero, 16
    ctx->pc = 0x26e500u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 0) >> 16);
label_26e504:
    // 0x26e504: 0x6e70  tge         $zero, $zero, 441
    ctx->pc = 0x26e504u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26e508:
    // 0x26e508: 0x0  nop
    ctx->pc = 0x26e508u;
    // NOP
label_26e50c:
    // 0x26e50c: 0x0  nop
    ctx->pc = 0x26e50cu;
    // NOP
label_26e510:
    // 0x26e510: 0x4449  .word       0x00004449                   # jalr        $t0, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
label_26e514:
    if (ctx->pc == 0x26E514u) {
        ctx->pc = 0x26E514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E510u;
        // 0x26e514: 0x3d00  sll         $a3, $zero, 20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26E518u;
        goto label_26e518;
    }
    ctx->pc = 0x26E510u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 8, 0x26E518u);
        ctx->pc = 0x26E514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E510u;
        // 0x26e514: 0x3d00  sll         $a3, $zero, 20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26E510u, 0x26E518u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26E518u;
label_26e518:
    // 0x26e518: 0x0  nop
    ctx->pc = 0x26e518u;
    // NOP
label_26e51c:
    // 0x26e51c: 0x0  nop
    ctx->pc = 0x26e51cu;
    // NOP
label_26e520:
    // 0x26e520: 0x4451  .word       0x00004451                   # mthi        $zero # 00004440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e520u;
    ctx->hi = GPR_U64(ctx, 0);
label_26e524:
    // 0x26e524: 0x8150  .word       0x00008150                   # mfhi        $s0 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e524u;
    SET_GPR_U64(ctx, 16, ctx->hi);
label_26e528:
    // 0x26e528: 0x0  nop
    ctx->pc = 0x26e528u;
    // NOP
label_26e52c:
    // 0x26e52c: 0x0  nop
    ctx->pc = 0x26e52cu;
    // NOP
label_26e530:
    // 0x26e530: 0x4462  .word       0x00004462                   # neg         $t0, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e530u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 8, (int32_t)tmp); }
label_26e534:
    // 0x26e534: 0x67e0  .word       0x000067E0                   # add         $t4, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e534u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_26e538:
    // 0x26e538: 0x0  nop
    ctx->pc = 0x26e538u;
    // NOP
label_26e53c:
    // 0x26e53c: 0x0  nop
    ctx->pc = 0x26e53cu;
    // NOP
label_26e540:
    // 0x26e540: 0x446f  .word       0x0000446F                   # dsubu       $t0, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e540u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_26e544:
    // 0x26e544: 0x6d40  sll         $t5, $zero, 21
    ctx->pc = 0x26e544u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 0), 21));
label_26e548:
    // 0x26e548: 0x0  nop
    ctx->pc = 0x26e548u;
    // NOP
label_26e54c:
    // 0x26e54c: 0x0  nop
    ctx->pc = 0x26e54cu;
    // NOP
label_26e550:
    // 0x26e550: 0x447d  .word       0x0000447D                   # INVALID     $zero, $zero, 0x447D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e550u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x26E550 raw=0x0000447D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26e554:
    // 0x26e554: 0x8280  sll         $s0, $zero, 10
    ctx->pc = 0x26e554u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 0), 10));
label_26e558:
    // 0x26e558: 0x0  nop
    ctx->pc = 0x26e558u;
    // NOP
label_26e55c:
    // 0x26e55c: 0x0  nop
    ctx->pc = 0x26e55cu;
    // NOP
label_26e560:
    // 0x26e560: 0x448e  .word       0x0000448E                   # INVALID     $zero, $zero, 0x448E # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e560u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x26E560 raw=0x0000448E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26e564:
    // 0x26e564: 0x6120  .word       0x00006120                   # add         $t4, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e564u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_26e568:
    // 0x26e568: 0x0  nop
    ctx->pc = 0x26e568u;
    // NOP
label_26e56c:
    // 0x26e56c: 0x0  nop
    ctx->pc = 0x26e56cu;
    // NOP
label_26e570:
    // 0x26e570: 0x449b  .word       0x0000449B                   # divu        $t0, $zero, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e570u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_26e574:
    // 0x26e574: 0x6020  add         $t4, $zero, $zero
    ctx->pc = 0x26e574u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_26e578:
    // 0x26e578: 0x0  nop
    ctx->pc = 0x26e578u;
    // NOP
label_26e57c:
    // 0x26e57c: 0x0  nop
    ctx->pc = 0x26e57cu;
    // NOP
label_26e580:
    // 0x26e580: 0x44a8  .word       0x000044A8                   # mfsa        $t0 # 00000480 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x26e580u;
    SET_GPR_U32(ctx, 8, ctx->sa);
label_26e584:
    // 0x26e584: 0x8590  .word       0x00008590                   # mfhi        $s0 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e584u;
    SET_GPR_U64(ctx, 16, ctx->hi);
label_26e588:
    // 0x26e588: 0x0  nop
    ctx->pc = 0x26e588u;
    // NOP
label_26e58c:
    // 0x26e58c: 0x0  nop
    ctx->pc = 0x26e58cu;
    // NOP
label_26e590:
    // 0x26e590: 0x44b9  .word       0x000044B9                   # INVALID     $zero, $zero, 0x44B9 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e590u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x26E590 raw=0x000044B9"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26e594:
    // 0x26e594: 0x6ba0  .word       0x00006BA0                   # add         $t5, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e594u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_26e598:
    // 0x26e598: 0x0  nop
    ctx->pc = 0x26e598u;
    // NOP
label_26e59c:
    // 0x26e59c: 0x0  nop
    ctx->pc = 0x26e59cu;
    // NOP
label_26e5a0:
    // 0x26e5a0: 0x44c7  .word       0x000044C7                   # srav        $t0, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e5a0u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_26e5a4:
    // 0x26e5a4: 0x6500  sll         $t4, $zero, 20
    ctx->pc = 0x26e5a4u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 20));
label_26e5a8:
    // 0x26e5a8: 0x0  nop
    ctx->pc = 0x26e5a8u;
    // NOP
label_26e5ac:
    // 0x26e5ac: 0x0  nop
    ctx->pc = 0x26e5acu;
    // NOP
label_26e5b0:
    // 0x26e5b0: 0x44d4  .word       0x000044D4                   # dsllv       $t0, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e5b0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_26e5b4:
    // 0x26e5b4: 0xd870  tge         $zero, $zero, 865
    ctx->pc = 0x26e5b4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26e5b8:
    // 0x26e5b8: 0x0  nop
    ctx->pc = 0x26e5b8u;
    // NOP
label_26e5bc:
    // 0x26e5bc: 0x0  nop
    ctx->pc = 0x26e5bcu;
    // NOP
label_26e5c0:
    // 0x26e5c0: 0x44f0  tge         $zero, $zero, 275
    ctx->pc = 0x26e5c0u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26e5c4:
    // 0x26e5c4: 0x7570  tge         $zero, $zero, 469
    ctx->pc = 0x26e5c4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26e5c8:
    // 0x26e5c8: 0x0  nop
    ctx->pc = 0x26e5c8u;
    // NOP
label_26e5cc:
    // 0x26e5cc: 0x0  nop
    ctx->pc = 0x26e5ccu;
    // NOP
label_26e5d0:
    // 0x26e5d0: 0x44ff  dsra32      $t0, $zero, 19
    ctx->pc = 0x26e5d0u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 0) >> (32 + 19));
label_26e5d4:
    // 0x26e5d4: 0x8100  sll         $s0, $zero, 4
    ctx->pc = 0x26e5d4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 0), 4));
label_26e5d8:
    // 0x26e5d8: 0x0  nop
    ctx->pc = 0x26e5d8u;
    // NOP
label_26e5dc:
    // 0x26e5dc: 0x0  nop
    ctx->pc = 0x26e5dcu;
    // NOP
label_26e5e0:
    // 0x26e5e0: 0x4510  .word       0x00004510                   # mfhi        $t0 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e5e0u;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_26e5e4:
    // 0x26e5e4: 0x78c0  sll         $t7, $zero, 3
    ctx->pc = 0x26e5e4u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 0), 3));
label_26e5e8:
    // 0x26e5e8: 0x0  nop
    ctx->pc = 0x26e5e8u;
    // NOP
label_26e5ec:
    // 0x26e5ec: 0x0  nop
    ctx->pc = 0x26e5ecu;
    // NOP
label_26e5f0:
    // 0x26e5f0: 0x4520  .word       0x00004520                   # add         $t0, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e5f0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
label_26e5f4:
    // 0x26e5f4: 0xa1e0  .word       0x0000A1E0                   # add         $s4, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e5f4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_26e5f8:
    // 0x26e5f8: 0x0  nop
    ctx->pc = 0x26e5f8u;
    // NOP
label_26e5fc:
    // 0x26e5fc: 0x0  nop
    ctx->pc = 0x26e5fcu;
    // NOP
label_26e600:
    // 0x26e600: 0x4535  .word       0x00004535                   # INVALID     $zero, $zero, 0x4535 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e600u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x26E600 raw=0x00004535"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26e604:
    // 0x26e604: 0xa630  tge         $zero, $zero, 664
    ctx->pc = 0x26e604u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26e608:
    // 0x26e608: 0x0  nop
    ctx->pc = 0x26e608u;
    // NOP
label_26e60c:
    // 0x26e60c: 0x0  nop
    ctx->pc = 0x26e60cu;
    // NOP
label_26e610:
    // 0x26e610: 0x454a  .word       0x0000454A                   # movz        $t0, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e610u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 0));
label_26e614:
    // 0x26e614: 0x6270  tge         $zero, $zero, 393
    ctx->pc = 0x26e614u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26e618:
    // 0x26e618: 0x0  nop
    ctx->pc = 0x26e618u;
    // NOP
label_26e61c:
    // 0x26e61c: 0x0  nop
    ctx->pc = 0x26e61cu;
    // NOP
label_26e620:
    // 0x26e620: 0x4557  .word       0x00004557                   # dsrav       $t0, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e620u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_26e624:
    // 0x26e624: 0xc9a0  .word       0x0000C9A0                   # add         $t9, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e624u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 25, (int32_t)result);     } }
label_26e628:
    // 0x26e628: 0x0  nop
    ctx->pc = 0x26e628u;
    // NOP
label_26e62c:
    // 0x26e62c: 0x0  nop
    ctx->pc = 0x26e62cu;
    // NOP
label_26e630:
    // 0x26e630: 0x4571  tgeu        $zero, $zero, 277
    ctx->pc = 0x26e630u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26e634:
    // 0x26e634: 0x7aa0  .word       0x00007AA0                   # add         $t7, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e634u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_26e638:
    // 0x26e638: 0x0  nop
    ctx->pc = 0x26e638u;
    // NOP
label_26e63c:
    // 0x26e63c: 0x0  nop
    ctx->pc = 0x26e63cu;
    // NOP
label_26e640:
    // 0x26e640: 0x4581  .word       0x00004581                   # INVALID     $zero, $zero, 0x4581 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e640u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x26E640 raw=0x00004581"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26e644:
    // 0x26e644: 0x73e0  .word       0x000073E0                   # add         $t6, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e644u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_26e648:
    // 0x26e648: 0x0  nop
    ctx->pc = 0x26e648u;
    // NOP
label_26e64c:
    // 0x26e64c: 0x0  nop
    ctx->pc = 0x26e64cu;
    // NOP
label_26e650:
    // 0x26e650: 0x4590  .word       0x00004590                   # mfhi        $t0 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e650u;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_26e654:
    // 0x26e654: 0x7cd0  .word       0x00007CD0                   # mfhi        $t7 # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e654u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_26e658:
    // 0x26e658: 0x0  nop
    ctx->pc = 0x26e658u;
    // NOP
label_26e65c:
    // 0x26e65c: 0x0  nop
    ctx->pc = 0x26e65cu;
    // NOP
label_26e660:
    // 0x26e660: 0x45a0  .word       0x000045A0                   # add         $t0, $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e660u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
label_26e664:
    // 0x26e664: 0xab00  sll         $s5, $zero, 12
    ctx->pc = 0x26e664u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 0), 12));
label_26e668:
    // 0x26e668: 0x0  nop
    ctx->pc = 0x26e668u;
    // NOP
label_26e66c:
    // 0x26e66c: 0x0  nop
    ctx->pc = 0x26e66cu;
    // NOP
label_26e670:
    // 0x26e670: 0x45b6  tne         $zero, $zero, 278
    ctx->pc = 0x26e670u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26e674:
    // 0x26e674: 0x5ee0  .word       0x00005EE0                   # add         $t3, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e674u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_26e678:
    // 0x26e678: 0x0  nop
    ctx->pc = 0x26e678u;
    // NOP
label_26e67c:
    // 0x26e67c: 0x0  nop
    ctx->pc = 0x26e67cu;
    // NOP
label_26e680:
    // 0x26e680: 0x45c2  srl         $t0, $zero, 23
    ctx->pc = 0x26e680u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 0), 23));
label_26e684:
    // 0x26e684: 0x98d0  .word       0x000098D0                   # mfhi        $s3 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e684u;
    SET_GPR_U64(ctx, 19, ctx->hi);
label_26e688:
    // 0x26e688: 0x0  nop
    ctx->pc = 0x26e688u;
    // NOP
label_26e68c:
    // 0x26e68c: 0x0  nop
    ctx->pc = 0x26e68cu;
    // NOP
label_26e690:
    // 0x26e690: 0x45d6  .word       0x000045D6                   # dsrlv       $t0, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e690u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_26e694:
    // 0x26e694: 0xc240  sll         $t8, $zero, 9
    ctx->pc = 0x26e694u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 0), 9));
label_26e698:
    // 0x26e698: 0x0  nop
    ctx->pc = 0x26e698u;
    // NOP
label_26e69c:
    // 0x26e69c: 0x0  nop
    ctx->pc = 0x26e69cu;
    // NOP
label_26e6a0:
    // 0x26e6a0: 0x45ef  .word       0x000045EF                   # dsubu       $t0, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e6a0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_26e6a4:
    // 0x26e6a4: 0xa190  .word       0x0000A190                   # mfhi        $s4 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e6a4u;
    SET_GPR_U64(ctx, 20, ctx->hi);
label_26e6a8:
    // 0x26e6a8: 0x0  nop
    ctx->pc = 0x26e6a8u;
    // NOP
label_26e6ac:
    // 0x26e6ac: 0x0  nop
    ctx->pc = 0x26e6acu;
    // NOP
label_26e6b0:
    // 0x26e6b0: 0x4604  .word       0x00004604                   # sllv        $t0, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e6b0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_26e6b4:
    // 0x26e6b4: 0x7d90  .word       0x00007D90                   # mfhi        $t7 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e6b4u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_26e6b8:
    // 0x26e6b8: 0x0  nop
    ctx->pc = 0x26e6b8u;
    // NOP
label_26e6bc:
    // 0x26e6bc: 0x0  nop
    ctx->pc = 0x26e6bcu;
    // NOP
label_26e6c0:
    // 0x26e6c0: 0x4614  .word       0x00004614                   # dsllv       $t0, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e6c0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_26e6c4:
    // 0x26e6c4: 0x79a0  .word       0x000079A0                   # add         $t7, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e6c4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_26e6c8:
    // 0x26e6c8: 0x0  nop
    ctx->pc = 0x26e6c8u;
    // NOP
label_26e6cc:
    // 0x26e6cc: 0x0  nop
    ctx->pc = 0x26e6ccu;
    // NOP
label_26e6d0:
    // 0x26e6d0: 0x4624  .word       0x00004624                   # and         $t0, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e6d0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_26e6d4:
    // 0x26e6d4: 0x71c0  sll         $t6, $zero, 7
    ctx->pc = 0x26e6d4u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 0), 7));
label_26e6d8:
    // 0x26e6d8: 0x0  nop
    ctx->pc = 0x26e6d8u;
    // NOP
label_26e6dc:
    // 0x26e6dc: 0x0  nop
    ctx->pc = 0x26e6dcu;
    // NOP
label_26e6e0:
    // 0x26e6e0: 0x4633  tltu        $zero, $zero, 280
    ctx->pc = 0x26e6e0u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26e6e4:
    // 0x26e6e4: 0x70c0  sll         $t6, $zero, 3
    ctx->pc = 0x26e6e4u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 0), 3));
label_26e6e8:
    // 0x26e6e8: 0x0  nop
    ctx->pc = 0x26e6e8u;
    // NOP
label_26e6ec:
    // 0x26e6ec: 0x0  nop
    ctx->pc = 0x26e6ecu;
    // NOP
label_26e6f0:
    // 0x26e6f0: 0x4642  srl         $t0, $zero, 25
    ctx->pc = 0x26e6f0u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 0), 25));
label_26e6f4:
    // 0x26e6f4: 0x5b90  .word       0x00005B90                   # mfhi        $t3 # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e6f4u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_26e6f8:
    // 0x26e6f8: 0x0  nop
    ctx->pc = 0x26e6f8u;
    // NOP
label_26e6fc:
    // 0x26e6fc: 0x0  nop
    ctx->pc = 0x26e6fcu;
    // NOP
label_26e700:
    // 0x26e700: 0x464e  .word       0x0000464E                   # INVALID     $zero, $zero, 0x464E # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e700u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x26E700 raw=0x0000464E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26e704:
    // 0x26e704: 0x7300  sll         $t6, $zero, 12
    ctx->pc = 0x26e704u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 0), 12));
label_26e708:
    // 0x26e708: 0x0  nop
    ctx->pc = 0x26e708u;
    // NOP
label_26e70c:
    // 0x26e70c: 0x0  nop
    ctx->pc = 0x26e70cu;
    // NOP
label_26e710:
    // 0x26e710: 0x465d  .word       0x0000465D                   # dmultu      $zero, $zero # 00004640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e710u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x26E710 raw=0x0000465D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26e714:
    // 0x26e714: 0x5e40  sll         $t3, $zero, 25
    ctx->pc = 0x26e714u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 0), 25));
label_26e718:
    // 0x26e718: 0x0  nop
    ctx->pc = 0x26e718u;
    // NOP
label_26e71c:
    // 0x26e71c: 0x0  nop
    ctx->pc = 0x26e71cu;
    // NOP
label_26e720:
    // 0x26e720: 0x4669  .word       0x00004669                   # mtsa        $zero # 00004640 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x26e720u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_26e724:
    // 0x26e724: 0x2e30  tge         $zero, $zero, 184
    ctx->pc = 0x26e724u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26e728:
    // 0x26e728: 0x0  nop
    ctx->pc = 0x26e728u;
    // NOP
label_26e72c:
    // 0x26e72c: 0x0  nop
    ctx->pc = 0x26e72cu;
    // NOP
label_26e730:
    // 0x26e730: 0x466f  .word       0x0000466F                   # dsubu       $t0, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e730u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_26e734:
    // 0x26e734: 0x6870  tge         $zero, $zero, 417
    ctx->pc = 0x26e734u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26e738:
    // 0x26e738: 0x0  nop
    ctx->pc = 0x26e738u;
    // NOP
label_26e73c:
    // 0x26e73c: 0x0  nop
    ctx->pc = 0x26e73cu;
    // NOP
label_26e740:
    // 0x26e740: 0x467d  .word       0x0000467D                   # INVALID     $zero, $zero, 0x467D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e740u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x26E740 raw=0x0000467D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26e744:
    // 0x26e744: 0x3390  .word       0x00003390                   # mfhi        $a2 # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e744u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_26e748:
    // 0x26e748: 0x0  nop
    ctx->pc = 0x26e748u;
    // NOP
label_26e74c:
    // 0x26e74c: 0x0  nop
    ctx->pc = 0x26e74cu;
    // NOP
label_26e750:
    // 0x26e750: 0x4684  .word       0x00004684                   # sllv        $t0, $zero, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e750u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_26e754:
    // 0x26e754: 0x6870  tge         $zero, $zero, 417
    ctx->pc = 0x26e754u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26e758:
    // 0x26e758: 0x0  nop
    ctx->pc = 0x26e758u;
    // NOP
label_26e75c:
    // 0x26e75c: 0x0  nop
    ctx->pc = 0x26e75cu;
    // NOP
label_26e760:
    // 0x26e760: 0x4692  .word       0x00004692                   # mflo        $t0 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e760u;
    SET_GPR_U64(ctx, 8, ctx->lo);
label_26e764:
    // 0x26e764: 0x67c0  sll         $t4, $zero, 31
    ctx->pc = 0x26e764u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 31));
label_26e768:
    // 0x26e768: 0x0  nop
    ctx->pc = 0x26e768u;
    // NOP
label_26e76c:
    // 0x26e76c: 0x0  nop
    ctx->pc = 0x26e76cu;
    // NOP
label_26e770:
    // 0x26e770: 0x469f  .word       0x0000469F                   # ddivu       $t0, $zero, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e770u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x26E770 raw=0x0000469F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26e774:
    // 0x26e774: 0x2710  .word       0x00002710                   # mfhi        $a0 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e774u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_26e778:
    // 0x26e778: 0x0  nop
    ctx->pc = 0x26e778u;
    // NOP
label_26e77c:
    // 0x26e77c: 0x0  nop
    ctx->pc = 0x26e77cu;
    // NOP
label_26e780:
    // 0x26e780: 0x46a4  .word       0x000046A4                   # and         $t0, $zero, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e780u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_26e784:
    // 0x26e784: 0x7460  .word       0x00007460                   # add         $t6, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e784u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_26e788:
    // 0x26e788: 0x0  nop
    ctx->pc = 0x26e788u;
    // NOP
label_26e78c:
    // 0x26e78c: 0x0  nop
    ctx->pc = 0x26e78cu;
    // NOP
label_26e790:
    // 0x26e790: 0x46b3  tltu        $zero, $zero, 282
    ctx->pc = 0x26e790u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26e794:
    // 0x26e794: 0x29a0  .word       0x000029A0                   # add         $a1, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e794u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 5, (int32_t)result);     } }
label_26e798:
    // 0x26e798: 0x0  nop
    ctx->pc = 0x26e798u;
    // NOP
label_26e79c:
    // 0x26e79c: 0x0  nop
    ctx->pc = 0x26e79cu;
    // NOP
label_26e7a0:
    // 0x26e7a0: 0x46b9  .word       0x000046B9                   # INVALID     $zero, $zero, 0x46B9 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e7a0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x26E7A0 raw=0x000046B9"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26e7a4:
    // 0x26e7a4: 0x3820  add         $a3, $zero, $zero
    ctx->pc = 0x26e7a4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
label_26e7a8:
    // 0x26e7a8: 0x0  nop
    ctx->pc = 0x26e7a8u;
    // NOP
label_26e7ac:
    // 0x26e7ac: 0x0  nop
    ctx->pc = 0x26e7acu;
    // NOP
label_26e7b0:
    // 0x26e7b0: 0x46c1  .word       0x000046C1                   # INVALID     $zero, $zero, 0x46C1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e7b0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x26E7B0 raw=0x000046C1"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26e7b4:
    // 0x26e7b4: 0x6f50  .word       0x00006F50                   # mfhi        $t5 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e7b4u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_26e7b8:
    // 0x26e7b8: 0x0  nop
    ctx->pc = 0x26e7b8u;
    // NOP
label_26e7bc:
    // 0x26e7bc: 0x0  nop
    ctx->pc = 0x26e7bcu;
    // NOP
label_26e7c0:
    // 0x26e7c0: 0x46cf  .word       0x000046CF                   # sync.p # 00004000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e7c0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_26e7c4:
    // 0x26e7c4: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e7c4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_26e7c8:
    // 0x26e7c8: 0x0  nop
    ctx->pc = 0x26e7c8u;
    // NOP
label_26e7cc:
    // 0x26e7cc: 0x0  nop
    ctx->pc = 0x26e7ccu;
    // NOP
label_26e7d0:
    // 0x26e7d0: 0x46d3  .word       0x000046D3                   # mtlo        $zero # 000046C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e7d0u;
    ctx->lo = GPR_U64(ctx, 0);
label_26e7d4:
    // 0x26e7d4: 0x3440  sll         $a2, $zero, 17
    ctx->pc = 0x26e7d4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
label_26e7d8:
    // 0x26e7d8: 0x0  nop
    ctx->pc = 0x26e7d8u;
    // NOP
label_26e7dc:
    // 0x26e7dc: 0x0  nop
    ctx->pc = 0x26e7dcu;
    // NOP
label_26e7e0:
    // 0x26e7e0: 0x46da  .word       0x000046DA                   # div         $t0, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e7e0u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_26e7e4:
    // 0x26e7e4: 0x7c30  tge         $zero, $zero, 496
    ctx->pc = 0x26e7e4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26e7e8:
    // 0x26e7e8: 0x0  nop
    ctx->pc = 0x26e7e8u;
    // NOP
label_26e7ec:
    // 0x26e7ec: 0x0  nop
    ctx->pc = 0x26e7ecu;
    // NOP
label_26e7f0:
    // 0x26e7f0: 0x46ea  .word       0x000046EA                   # slt         $t0, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e7f0u;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_26e7f4:
    // 0x26e7f4: 0x3f60  .word       0x00003F60                   # add         $a3, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e7f4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
label_26e7f8:
    // 0x26e7f8: 0x0  nop
    ctx->pc = 0x26e7f8u;
    // NOP
label_26e7fc:
    // 0x26e7fc: 0x0  nop
    ctx->pc = 0x26e7fcu;
    // NOP
label_26e800:
    // 0x26e800: 0x46f2  tlt         $zero, $zero, 283
    ctx->pc = 0x26e800u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26e804:
    // 0x26e804: 0x63f0  tge         $zero, $zero, 399
    ctx->pc = 0x26e804u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26e808:
    // 0x26e808: 0x0  nop
    ctx->pc = 0x26e808u;
    // NOP
label_26e80c:
    // 0x26e80c: 0x0  nop
    ctx->pc = 0x26e80cu;
    // NOP
label_26e810:
    // 0x26e810: 0x46ff  dsra32      $t0, $zero, 27
    ctx->pc = 0x26e810u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 0) >> (32 + 27));
label_26e814:
    // 0x26e814: 0x4950  .word       0x00004950                   # mfhi        $t1 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e814u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_26e818:
    // 0x26e818: 0x0  nop
    ctx->pc = 0x26e818u;
    // NOP
label_26e81c:
    // 0x26e81c: 0x0  nop
    ctx->pc = 0x26e81cu;
    // NOP
label_26e820:
    // 0x26e820: 0x4709  .word       0x00004709                   # jalr        $t0, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
label_26e824:
    if (ctx->pc == 0x26E824u) {
        ctx->pc = 0x26E824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E820u;
        // 0x26e824: 0x6f10  .word       0x00006F10                   # mfhi        $t5 # 00000700 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 13, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = 0x26E828u;
        goto label_26e828;
    }
    ctx->pc = 0x26E820u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 8, 0x26E828u);
        ctx->pc = 0x26E824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E820u;
        // 0x26e824: 0x6f10  .word       0x00006F10                   # mfhi        $t5 # 00000700 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 13, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26E820u, 0x26E828u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26E828u;
label_26e828:
    // 0x26e828: 0x0  nop
    ctx->pc = 0x26e828u;
    // NOP
label_26e82c:
    // 0x26e82c: 0x0  nop
    ctx->pc = 0x26e82cu;
    // NOP
label_26e830:
    // 0x26e830: 0x4717  .word       0x00004717                   # dsrav       $t0, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e830u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_26e834:
    // 0x26e834: 0x45e0  .word       0x000045E0                   # add         $t0, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e834u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
label_26e838:
    // 0x26e838: 0x0  nop
    ctx->pc = 0x26e838u;
    // NOP
label_26e83c:
    // 0x26e83c: 0x0  nop
    ctx->pc = 0x26e83cu;
    // NOP
label_26e840:
    // 0x26e840: 0x4720  .word       0x00004720                   # add         $t0, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e840u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
label_26e844:
    // 0x26e844: 0x4510  .word       0x00004510                   # mfhi        $t0 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e844u;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_26e848:
    // 0x26e848: 0x0  nop
    ctx->pc = 0x26e848u;
    // NOP
label_26e84c:
    // 0x26e84c: 0x0  nop
    ctx->pc = 0x26e84cu;
    // NOP
label_26e850:
    // 0x26e850: 0x4729  .word       0x00004729                   # mtsa        $zero # 00004700 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x26e850u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_26e854:
    // 0x26e854: 0x3070  tge         $zero, $zero, 193
    ctx->pc = 0x26e854u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26e858:
    // 0x26e858: 0x0  nop
    ctx->pc = 0x26e858u;
    // NOP
label_26e85c:
    // 0x26e85c: 0x0  nop
    ctx->pc = 0x26e85cu;
    // NOP
label_26e860:
    // 0x26e860: 0x4730  tge         $zero, $zero, 284
    ctx->pc = 0x26e860u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26e864:
    // 0x26e864: 0x5070  tge         $zero, $zero, 321
    ctx->pc = 0x26e864u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26e868:
    // 0x26e868: 0x0  nop
    ctx->pc = 0x26e868u;
    // NOP
label_26e86c:
    // 0x26e86c: 0x0  nop
    ctx->pc = 0x26e86cu;
    // NOP
label_26e870:
    // 0x26e870: 0x473b  dsra        $t0, $zero, 28
    ctx->pc = 0x26e870u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 0) >> 28);
label_26e874:
    // 0x26e874: 0x22c0  sll         $a0, $zero, 11
    ctx->pc = 0x26e874u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 0), 11));
label_26e878:
    // 0x26e878: 0x0  nop
    ctx->pc = 0x26e878u;
    // NOP
label_26e87c:
    // 0x26e87c: 0x0  nop
    ctx->pc = 0x26e87cu;
    // NOP
label_26e880:
    // 0x26e880: 0x4740  sll         $t0, $zero, 29
    ctx->pc = 0x26e880u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 29));
label_26e884:
    // 0x26e884: 0x67c0  sll         $t4, $zero, 31
    ctx->pc = 0x26e884u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 31));
label_26e888:
    // 0x26e888: 0x0  nop
    ctx->pc = 0x26e888u;
    // NOP
label_26e88c:
    // 0x26e88c: 0x0  nop
    ctx->pc = 0x26e88cu;
    // NOP
label_26e890:
    // 0x26e890: 0x474d  break       0, 285
    ctx->pc = 0x26e890u;
    runtime->handleBreak(rdram, ctx);
label_26e894:
    // 0x26e894: 0x3740  sll         $a2, $zero, 29
    ctx->pc = 0x26e894u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 0), 29));
label_26e898:
    // 0x26e898: 0x0  nop
    ctx->pc = 0x26e898u;
    // NOP
label_26e89c:
    // 0x26e89c: 0x0  nop
    ctx->pc = 0x26e89cu;
    // NOP
label_26e8a0:
    // 0x26e8a0: 0x4754  .word       0x00004754                   # dsllv       $t0, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e8a0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_26e8a4:
    // 0x26e8a4: 0x2e10  .word       0x00002E10                   # mfhi        $a1 # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e8a4u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_26e8a8:
    // 0x26e8a8: 0x0  nop
    ctx->pc = 0x26e8a8u;
    // NOP
label_26e8ac:
    // 0x26e8ac: 0x0  nop
    ctx->pc = 0x26e8acu;
    // NOP
label_26e8b0:
    // 0x26e8b0: 0x475a  .word       0x0000475A                   # div         $t0, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e8b0u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_26e8b4:
    // 0x26e8b4: 0x6da0  .word       0x00006DA0                   # add         $t5, $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e8b4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_26e8b8:
    // 0x26e8b8: 0x0  nop
    ctx->pc = 0x26e8b8u;
    // NOP
label_26e8bc:
    // 0x26e8bc: 0x0  nop
    ctx->pc = 0x26e8bcu;
    // NOP
label_26e8c0:
    // 0x26e8c0: 0x4768  .word       0x00004768                   # mfsa        $t0 # 00000740 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x26e8c0u;
    SET_GPR_U32(ctx, 8, ctx->sa);
label_26e8c4:
    // 0x26e8c4: 0x6c30  tge         $zero, $zero, 432
    ctx->pc = 0x26e8c4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26e8c8:
    // 0x26e8c8: 0x0  nop
    ctx->pc = 0x26e8c8u;
    // NOP
label_26e8cc:
    // 0x26e8cc: 0x0  nop
    ctx->pc = 0x26e8ccu;
    // NOP
label_26e8d0:
    // 0x26e8d0: 0x4776  tne         $zero, $zero, 285
    ctx->pc = 0x26e8d0u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26e8d4:
    // 0x26e8d4: 0x3990  .word       0x00003990                   # mfhi        $a3 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e8d4u;
    SET_GPR_U64(ctx, 7, ctx->hi);
label_26e8d8:
    // 0x26e8d8: 0x0  nop
    ctx->pc = 0x26e8d8u;
    // NOP
label_26e8dc:
    // 0x26e8dc: 0x0  nop
    ctx->pc = 0x26e8dcu;
    // NOP
label_26e8e0:
    // 0x26e8e0: 0x477e  dsrl32      $t0, $zero, 29
    ctx->pc = 0x26e8e0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) >> (32 + 29));
label_26e8e4:
    // 0x26e8e4: 0x3f80  sll         $a3, $zero, 30
    ctx->pc = 0x26e8e4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 0), 30));
label_26e8e8:
    // 0x26e8e8: 0x0  nop
    ctx->pc = 0x26e8e8u;
    // NOP
label_26e8ec:
    // 0x26e8ec: 0x0  nop
    ctx->pc = 0x26e8ecu;
    // NOP
label_26e8f0:
    // 0x26e8f0: 0x4786  .word       0x00004786                   # srlv        $t0, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e8f0u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_26e8f4:
    // 0x26e8f4: 0x3470  tge         $zero, $zero, 209
    ctx->pc = 0x26e8f4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26e8f8:
    // 0x26e8f8: 0x0  nop
    ctx->pc = 0x26e8f8u;
    // NOP
label_26e8fc:
    // 0x26e8fc: 0x0  nop
    ctx->pc = 0x26e8fcu;
    // NOP
label_26e900:
    // 0x26e900: 0x478d  break       0, 286
    ctx->pc = 0x26e900u;
    runtime->handleBreak(rdram, ctx);
label_26e904:
    // 0x26e904: 0x2230  tge         $zero, $zero, 136
    ctx->pc = 0x26e904u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26e908:
    // 0x26e908: 0x0  nop
    ctx->pc = 0x26e908u;
    // NOP
label_26e90c:
    // 0x26e90c: 0x0  nop
    ctx->pc = 0x26e90cu;
    // NOP
label_26e910:
    // 0x26e910: 0x4792  .word       0x00004792                   # mflo        $t0 # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e910u;
    SET_GPR_U64(ctx, 8, ctx->lo);
label_26e914:
    // 0x26e914: 0x2e50  .word       0x00002E50                   # mfhi        $a1 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e914u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_26e918:
    // 0x26e918: 0x0  nop
    ctx->pc = 0x26e918u;
    // NOP
label_26e91c:
    // 0x26e91c: 0x0  nop
    ctx->pc = 0x26e91cu;
    // NOP
label_26e920:
    // 0x26e920: 0x4798  .word       0x00004798                   # mult        $t0, $zero, $zero # 00000780 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x26e920u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
label_26e924:
    // 0x26e924: 0x6310  .word       0x00006310                   # mfhi        $t4 # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e924u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_26e928:
    // 0x26e928: 0x0  nop
    ctx->pc = 0x26e928u;
    // NOP
label_26e92c:
    // 0x26e92c: 0x0  nop
    ctx->pc = 0x26e92cu;
    // NOP
label_26e930:
    // 0x26e930: 0x47a5  .word       0x000047A5                   # move        $t0, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e930u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_26e934:
    // 0x26e934: 0x3020  add         $a2, $zero, $zero
    ctx->pc = 0x26e934u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 6, (int32_t)result);     } }
label_26e938:
    // 0x26e938: 0x0  nop
    ctx->pc = 0x26e938u;
    // NOP
label_26e93c:
    // 0x26e93c: 0x0  nop
    ctx->pc = 0x26e93cu;
    // NOP
label_26e940:
    // 0x26e940: 0x47ac  .word       0x000047AC                   # dadd        $t0, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e940u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 8, r); }
label_26e944:
    // 0x26e944: 0x52d0  .word       0x000052D0                   # mfhi        $t2 # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e944u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_26e948:
    // 0x26e948: 0x0  nop
    ctx->pc = 0x26e948u;
    // NOP
label_26e94c:
    // 0x26e94c: 0x0  nop
    ctx->pc = 0x26e94cu;
    // NOP
label_26e950:
    // 0x26e950: 0x47b7  .word       0x000047B7                   # INVALID     $zero, $zero, 0x47B7 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e950u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x26E950 raw=0x000047B7"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26e954:
    // 0x26e954: 0x7d60  .word       0x00007D60                   # add         $t7, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e954u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_26e958:
    // 0x26e958: 0x0  nop
    ctx->pc = 0x26e958u;
    // NOP
label_26e95c:
    // 0x26e95c: 0x0  nop
    ctx->pc = 0x26e95cu;
    // NOP
label_26e960:
    // 0x26e960: 0x47c7  .word       0x000047C7                   # srav        $t0, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e960u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_26e964:
    // 0x26e964: 0x3e30  tge         $zero, $zero, 248
    ctx->pc = 0x26e964u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26e968:
    // 0x26e968: 0x0  nop
    ctx->pc = 0x26e968u;
    // NOP
label_26e96c:
    // 0x26e96c: 0x0  nop
    ctx->pc = 0x26e96cu;
    // NOP
label_26e970:
    // 0x26e970: 0x47cf  .word       0x000047CF                   # sync.p # 00004000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e970u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_26e974:
    // 0x26e974: 0x59f0  tge         $zero, $zero, 359
    ctx->pc = 0x26e974u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26e978:
    // 0x26e978: 0x0  nop
    ctx->pc = 0x26e978u;
    // NOP
label_26e97c:
    // 0x26e97c: 0x0  nop
    ctx->pc = 0x26e97cu;
    // NOP
label_26e980:
    // 0x26e980: 0x47db  .word       0x000047DB                   # divu        $t0, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e980u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_26e984:
    // 0x26e984: 0x2c30  tge         $zero, $zero, 176
    ctx->pc = 0x26e984u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26e988:
    // 0x26e988: 0x0  nop
    ctx->pc = 0x26e988u;
    // NOP
label_26e98c:
    // 0x26e98c: 0x0  nop
    ctx->pc = 0x26e98cu;
    // NOP
label_26e990:
    // 0x26e990: 0x47e1  .word       0x000047E1                   # addu        $t0, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e990u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_26e994:
    // 0x26e994: 0x85e0  .word       0x000085E0                   # add         $s0, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e994u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_26e998:
    // 0x26e998: 0x0  nop
    ctx->pc = 0x26e998u;
    // NOP
label_26e99c:
    // 0x26e99c: 0x0  nop
    ctx->pc = 0x26e99cu;
    // NOP
label_26e9a0:
    // 0x26e9a0: 0x47f2  tlt         $zero, $zero, 287
    ctx->pc = 0x26e9a0u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26e9a4:
    // 0x26e9a4: 0x4960  .word       0x00004960                   # add         $t1, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e9a4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_26e9a8:
    // 0x26e9a8: 0x0  nop
    ctx->pc = 0x26e9a8u;
    // NOP
label_26e9ac:
    // 0x26e9ac: 0x0  nop
    ctx->pc = 0x26e9acu;
    // NOP
label_26e9b0:
    // 0x26e9b0: 0x47fc  dsll32      $t0, $zero, 31
    ctx->pc = 0x26e9b0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) << (32 + 31));
label_26e9b4:
    // 0x26e9b4: 0x5f10  .word       0x00005F10                   # mfhi        $t3 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e9b4u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_26e9b8:
    // 0x26e9b8: 0x0  nop
    ctx->pc = 0x26e9b8u;
    // NOP
label_26e9bc:
    // 0x26e9bc: 0x0  nop
    ctx->pc = 0x26e9bcu;
    // NOP
label_26e9c0:
    // 0x26e9c0: 0x4808  .word       0x00004808                   # jr          $zero # 00004800 <InstrIdType: CPU_SPECIAL>
label_26e9c4:
    if (ctx->pc == 0x26E9C4u) {
        ctx->pc = 0x26E9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E9C0u;
        // 0x26e9c4: 0x5030  tge         $zero, $zero, 320 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x26E9C8u;
        goto label_26e9c8;
    }
    ctx->pc = 0x26E9C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x26E9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E9C0u;
        // 0x26e9c4: 0x5030  tge         $zero, $zero, 320 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26E9C0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x26E9C8u;
label_26e9c8:
    // 0x26e9c8: 0x0  nop
    ctx->pc = 0x26e9c8u;
    // NOP
label_26e9cc:
    // 0x26e9cc: 0x0  nop
    ctx->pc = 0x26e9ccu;
    // NOP
label_26e9d0:
    // 0x26e9d0: 0x4813  .word       0x00004813                   # mtlo        $zero # 00004800 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e9d0u;
    ctx->lo = GPR_U64(ctx, 0);
label_26e9d4:
    // 0x26e9d4: 0x3be0  .word       0x00003BE0                   # add         $a3, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26e9d4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
label_26e9d8:
    // 0x26e9d8: 0x0  nop
    ctx->pc = 0x26e9d8u;
    // NOP
label_26e9dc:
    // 0x26e9dc: 0x0  nop
    ctx->pc = 0x26e9dcu;
    // NOP
label_26e9e0:
    // 0x26e9e0: 0x481b  divu        $t1, $zero, $zero
    ctx->pc = 0x26e9e0u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_26e9e4:
    // 0x26e9e4: 0x7cc0  sll         $t7, $zero, 19
    ctx->pc = 0x26e9e4u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
label_26e9e8:
    // 0x26e9e8: 0x0  nop
    ctx->pc = 0x26e9e8u;
    // NOP
label_26e9ec:
    // 0x26e9ec: 0x0  nop
    ctx->pc = 0x26e9ecu;
    // NOP
label_26e9f0:
    // 0x26e9f0: 0x482b  sltu        $t1, $zero, $zero
    ctx->pc = 0x26e9f0u;
    SET_GPR_U64(ctx, 9, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_26e9f4:
    // 0x26e9f4: 0x7a40  sll         $t7, $zero, 9
    ctx->pc = 0x26e9f4u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 0), 9));
label_26e9f8:
    // 0x26e9f8: 0x0  nop
    ctx->pc = 0x26e9f8u;
    // NOP
label_26e9fc:
    // 0x26e9fc: 0x0  nop
    ctx->pc = 0x26e9fcu;
    // NOP
label_26ea00:
    // 0x26ea00: 0x483b  dsra        $t1, $zero, 0
    ctx->pc = 0x26ea00u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 0) >> 0);
label_26ea04:
    // 0x26ea04: 0x36d0  .word       0x000036D0                   # mfhi        $a2 # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26ea04u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_26ea08:
    // 0x26ea08: 0x0  nop
    ctx->pc = 0x26ea08u;
    // NOP
label_26ea0c:
    // 0x26ea0c: 0x0  nop
    ctx->pc = 0x26ea0cu;
    // NOP
label_26ea10:
    // 0x26ea10: 0x4842  srl         $t1, $zero, 1
    ctx->pc = 0x26ea10u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 0), 1));
label_26ea14:
    // 0x26ea14: 0x4730  tge         $zero, $zero, 284
    ctx->pc = 0x26ea14u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26ea18:
    // 0x26ea18: 0x0  nop
    ctx->pc = 0x26ea18u;
    // NOP
label_26ea1c:
    // 0x26ea1c: 0x0  nop
    ctx->pc = 0x26ea1cu;
    // NOP
label_26ea20:
    // 0x26ea20: 0x484b  .word       0x0000484B                   # movn        $t1, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26ea20u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 0));
label_26ea24:
    // 0x26ea24: 0x4350  .word       0x00004350                   # mfhi        $t0 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26ea24u;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_26ea28:
    // 0x26ea28: 0x0  nop
    ctx->pc = 0x26ea28u;
    // NOP
label_26ea2c:
    // 0x26ea2c: 0x0  nop
    ctx->pc = 0x26ea2cu;
    // NOP
label_26ea30:
    // 0x26ea30: 0x4854  .word       0x00004854                   # dsllv       $t1, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26ea30u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_26ea34:
    // 0x26ea34: 0x3e70  tge         $zero, $zero, 249
    ctx->pc = 0x26ea34u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26ea38:
    // 0x26ea38: 0x0  nop
    ctx->pc = 0x26ea38u;
    // NOP
label_26ea3c:
    // 0x26ea3c: 0x0  nop
    ctx->pc = 0x26ea3cu;
    // NOP
label_26ea40:
    // 0x26ea40: 0x485c  .word       0x0000485C                   # dmult       $zero, $zero # 00004840 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26ea40u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x26EA40 raw=0x0000485C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26ea44:
    // 0x26ea44: 0x71a0  .word       0x000071A0                   # add         $t6, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26ea44u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_26ea48:
    // 0x26ea48: 0x0  nop
    ctx->pc = 0x26ea48u;
    // NOP
label_26ea4c:
    // 0x26ea4c: 0x0  nop
    ctx->pc = 0x26ea4cu;
    // NOP
label_26ea50:
    // 0x26ea50: 0x486b  .word       0x0000486B                   # sltu        $t1, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26ea50u;
    SET_GPR_U64(ctx, 9, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_26ea54:
    // 0x26ea54: 0x4750  .word       0x00004750                   # mfhi        $t0 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26ea54u;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_26ea58:
    // 0x26ea58: 0x0  nop
    ctx->pc = 0x26ea58u;
    // NOP
label_26ea5c:
    // 0x26ea5c: 0x0  nop
    ctx->pc = 0x26ea5cu;
    // NOP
label_26ea60:
    // 0x26ea60: 0x4874  teq         $zero, $zero, 289
    ctx->pc = 0x26ea60u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26ea64:
    // 0x26ea64: 0x4950  .word       0x00004950                   # mfhi        $t1 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26ea64u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_26ea68:
    // 0x26ea68: 0x0  nop
    ctx->pc = 0x26ea68u;
    // NOP
label_26ea6c:
    // 0x26ea6c: 0x0  nop
    ctx->pc = 0x26ea6cu;
    // NOP
label_26ea70:
    // 0x26ea70: 0x487e  dsrl32      $t1, $zero, 1
    ctx->pc = 0x26ea70u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) >> (32 + 1));
label_26ea74:
    // 0x26ea74: 0x81b0  tge         $zero, $zero, 518
    ctx->pc = 0x26ea74u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26ea78:
    // 0x26ea78: 0x0  nop
    ctx->pc = 0x26ea78u;
    // NOP
label_26ea7c:
    // 0x26ea7c: 0x0  nop
    ctx->pc = 0x26ea7cu;
    // NOP
label_26ea80:
    // 0x26ea80: 0x488f  .word       0x0000488F                   # sync # 00004800 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26ea80u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_26ea84:
    // 0x26ea84: 0x40f0  tge         $zero, $zero, 259
    ctx->pc = 0x26ea84u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26ea88:
    // 0x26ea88: 0x0  nop
    ctx->pc = 0x26ea88u;
    // NOP
label_26ea8c:
    // 0x26ea8c: 0x0  nop
    ctx->pc = 0x26ea8cu;
    // NOP
label_26ea90:
    // 0x26ea90: 0x4898  .word       0x00004898                   # mult        $t1, $zero, $zero # 00000080 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x26ea90u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
label_26ea94:
    // 0x26ea94: 0x7350  .word       0x00007350                   # mfhi        $t6 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26ea94u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_26ea98:
    // 0x26ea98: 0x0  nop
    ctx->pc = 0x26ea98u;
    // NOP
label_26ea9c:
    // 0x26ea9c: 0x0  nop
    ctx->pc = 0x26ea9cu;
    // NOP
label_26eaa0:
    // 0x26eaa0: 0x48a7  .word       0x000048A7                   # not         $t1, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26eaa0u;
    SET_GPR_U64(ctx, 9, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_26eaa4:
    // 0x26eaa4: 0x4ea0  .word       0x00004EA0                   # add         $t1, $zero, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26eaa4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_26eaa8:
    // 0x26eaa8: 0x0  nop
    ctx->pc = 0x26eaa8u;
    // NOP
label_26eaac:
    // 0x26eaac: 0x0  nop
    ctx->pc = 0x26eaacu;
    // NOP
label_26eab0:
    // 0x26eab0: 0x48b1  tgeu        $zero, $zero, 290
    ctx->pc = 0x26eab0u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26eab4:
    // 0x26eab4: 0x58c0  sll         $t3, $zero, 3
    ctx->pc = 0x26eab4u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 0), 3));
label_26eab8:
    // 0x26eab8: 0x0  nop
    ctx->pc = 0x26eab8u;
    // NOP
label_26eabc:
    // 0x26eabc: 0x0  nop
    ctx->pc = 0x26eabcu;
    // NOP
label_26eac0:
    // 0x26eac0: 0x48bd  .word       0x000048BD                   # INVALID     $zero, $zero, 0x48BD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26eac0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x26EAC0 raw=0x000048BD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26eac4:
    // 0x26eac4: 0x6f00  sll         $t5, $zero, 28
    ctx->pc = 0x26eac4u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 0), 28));
label_26eac8:
    // 0x26eac8: 0x0  nop
    ctx->pc = 0x26eac8u;
    // NOP
label_26eacc:
    // 0x26eacc: 0x0  nop
    ctx->pc = 0x26eaccu;
    // NOP
label_26ead0:
    // 0x26ead0: 0x48cb  .word       0x000048CB                   # movn        $t1, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26ead0u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 0));
label_26ead4:
    // 0x26ead4: 0x6cc0  sll         $t5, $zero, 19
    ctx->pc = 0x26ead4u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
label_26ead8:
    // 0x26ead8: 0x0  nop
    ctx->pc = 0x26ead8u;
    // NOP
label_26eadc:
    // 0x26eadc: 0x0  nop
    ctx->pc = 0x26eadcu;
    // NOP
label_26eae0:
    // 0x26eae0: 0x48d9  .word       0x000048D9                   # multu       $zero, $zero # 000048C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26eae0u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
label_26eae4:
    // 0x26eae4: 0x6c40  sll         $t5, $zero, 17
    ctx->pc = 0x26eae4u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
label_26eae8:
    // 0x26eae8: 0x0  nop
    ctx->pc = 0x26eae8u;
    // NOP
label_26eaec:
    // 0x26eaec: 0x0  nop
    ctx->pc = 0x26eaecu;
    // NOP
label_26eaf0:
    // 0x26eaf0: 0x48e7  .word       0x000048E7                   # not         $t1, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26eaf0u;
    SET_GPR_U64(ctx, 9, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_26eaf4:
    // 0x26eaf4: 0x4720  .word       0x00004720                   # add         $t0, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26eaf4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
label_26eaf8:
    // 0x26eaf8: 0x0  nop
    ctx->pc = 0x26eaf8u;
    // NOP
label_26eafc:
    // 0x26eafc: 0x0  nop
    ctx->pc = 0x26eafcu;
    // NOP
label_26eb00:
    // 0x26eb00: 0x48f0  tge         $zero, $zero, 291
    ctx->pc = 0x26eb00u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26eb04:
    // 0x26eb04: 0xbcc0  sll         $s7, $zero, 19
    ctx->pc = 0x26eb04u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
label_26eb08:
    // 0x26eb08: 0x0  nop
    ctx->pc = 0x26eb08u;
    // NOP
label_26eb0c:
    // 0x26eb0c: 0x0  nop
    ctx->pc = 0x26eb0cu;
    // NOP
label_26eb10:
    // 0x26eb10: 0x4908  .word       0x00004908                   # jr          $zero # 00004900 <InstrIdType: CPU_SPECIAL>
label_26eb14:
    if (ctx->pc == 0x26EB14u) {
        ctx->pc = 0x26EB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EB10u;
        // 0x26eb14: 0x6330  tge         $zero, $zero, 396 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x26EB18u;
        goto label_26eb18;
    }
    ctx->pc = 0x26EB10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x26EB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EB10u;
        // 0x26eb14: 0x6330  tge         $zero, $zero, 396 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26EB10u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x26EB18u;
label_26eb18:
    // 0x26eb18: 0x0  nop
    ctx->pc = 0x26eb18u;
    // NOP
label_26eb1c:
    // 0x26eb1c: 0x0  nop
    ctx->pc = 0x26eb1cu;
    // NOP
label_26eb20:
    // 0x26eb20: 0x4915  .word       0x00004915                   # INVALID     $zero, $zero, 0x4915 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26eb20u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x26EB20 raw=0x00004915"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26eb24:
    // 0x26eb24: 0x5850  .word       0x00005850                   # mfhi        $t3 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26eb24u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_26eb28:
    // 0x26eb28: 0x0  nop
    ctx->pc = 0x26eb28u;
    // NOP
label_26eb2c:
    // 0x26eb2c: 0x0  nop
    ctx->pc = 0x26eb2cu;
    // NOP
label_26eb30:
    // 0x26eb30: 0x4921  .word       0x00004921                   # addu        $t1, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26eb30u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_26eb34:
    // 0x26eb34: 0x3e80  sll         $a3, $zero, 26
    ctx->pc = 0x26eb34u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 0), 26));
label_26eb38:
    // 0x26eb38: 0x0  nop
    ctx->pc = 0x26eb38u;
    // NOP
label_26eb3c:
    // 0x26eb3c: 0x0  nop
    ctx->pc = 0x26eb3cu;
    // NOP
label_26eb40:
    // 0x26eb40: 0x4929  .word       0x00004929                   # mtsa        $zero # 00004900 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x26eb40u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_26eb44:
    // 0x26eb44: 0xcac0  sll         $t9, $zero, 11
    ctx->pc = 0x26eb44u;
    SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 0), 11));
    ctx->pc = 0x26eb48u;
    return;
}
