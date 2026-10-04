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

// Function: FUN_0017d410
// Address: 0x17d410 - 0x27d534
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0017d410_part3(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x17e3b0u: goto label_17e3b0;
        case 0x17e3b4u: goto label_17e3b4;
        case 0x17e3b8u: goto label_17e3b8;
        case 0x17e3bcu: goto label_17e3bc;
        case 0x17e3c0u: goto label_17e3c0;
        case 0x17e3c4u: goto label_17e3c4;
        case 0x17e3c8u: goto label_17e3c8;
        case 0x17e3ccu: goto label_17e3cc;
        case 0x17e3d0u: goto label_17e3d0;
        case 0x17e3d4u: goto label_17e3d4;
        case 0x17e3d8u: goto label_17e3d8;
        case 0x17e3dcu: goto label_17e3dc;
        case 0x17e3e0u: goto label_17e3e0;
        case 0x17e3e4u: goto label_17e3e4;
        case 0x17e3e8u: goto label_17e3e8;
        case 0x17e3ecu: goto label_17e3ec;
        case 0x17e3f0u: goto label_17e3f0;
        case 0x17e3f4u: goto label_17e3f4;
        case 0x17e3f8u: goto label_17e3f8;
        case 0x17e3fcu: goto label_17e3fc;
        case 0x17e400u: goto label_17e400;
        case 0x17e404u: goto label_17e404;
        case 0x17e408u: goto label_17e408;
        case 0x17e40cu: goto label_17e40c;
        case 0x17e410u: goto label_17e410;
        case 0x17e414u: goto label_17e414;
        case 0x17e418u: goto label_17e418;
        case 0x17e41cu: goto label_17e41c;
        case 0x17e420u: goto label_17e420;
        case 0x17e424u: goto label_17e424;
        case 0x17e428u: goto label_17e428;
        case 0x17e42cu: goto label_17e42c;
        case 0x17e430u: goto label_17e430;
        case 0x17e434u: goto label_17e434;
        case 0x17e438u: goto label_17e438;
        case 0x17e43cu: goto label_17e43c;
        case 0x17e440u: goto label_17e440;
        case 0x17e444u: goto label_17e444;
        case 0x17e448u: goto label_17e448;
        case 0x17e44cu: goto label_17e44c;
        case 0x17e450u: goto label_17e450;
        case 0x17e454u: goto label_17e454;
        case 0x17e458u: goto label_17e458;
        case 0x17e45cu: goto label_17e45c;
        case 0x17e460u: goto label_17e460;
        case 0x17e464u: goto label_17e464;
        case 0x17e468u: goto label_17e468;
        case 0x17e46cu: goto label_17e46c;
        case 0x17e470u: goto label_17e470;
        case 0x17e474u: goto label_17e474;
        case 0x17e478u: goto label_17e478;
        case 0x17e47cu: goto label_17e47c;
        case 0x17e480u: goto label_17e480;
        case 0x17e484u: goto label_17e484;
        case 0x17e488u: goto label_17e488;
        case 0x17e48cu: goto label_17e48c;
        case 0x17e490u: goto label_17e490;
        case 0x17e494u: goto label_17e494;
        case 0x17e498u: goto label_17e498;
        case 0x17e49cu: goto label_17e49c;
        case 0x17e4a0u: goto label_17e4a0;
        case 0x17e4a4u: goto label_17e4a4;
        case 0x17e4a8u: goto label_17e4a8;
        case 0x17e4acu: goto label_17e4ac;
        case 0x17e4b0u: goto label_17e4b0;
        case 0x17e4b4u: goto label_17e4b4;
        case 0x17e4b8u: goto label_17e4b8;
        case 0x17e4bcu: goto label_17e4bc;
        case 0x17e4c0u: goto label_17e4c0;
        case 0x17e4c4u: goto label_17e4c4;
        case 0x17e4c8u: goto label_17e4c8;
        case 0x17e4ccu: goto label_17e4cc;
        case 0x17e4d0u: goto label_17e4d0;
        case 0x17e4d4u: goto label_17e4d4;
        case 0x17e4d8u: goto label_17e4d8;
        case 0x17e4dcu: goto label_17e4dc;
        case 0x17e4e0u: goto label_17e4e0;
        case 0x17e4e4u: goto label_17e4e4;
        case 0x17e4e8u: goto label_17e4e8;
        case 0x17e4ecu: goto label_17e4ec;
        case 0x17e4f0u: goto label_17e4f0;
        case 0x17e4f4u: goto label_17e4f4;
        case 0x17e4f8u: goto label_17e4f8;
        case 0x17e4fcu: goto label_17e4fc;
        case 0x17e500u: goto label_17e500;
        case 0x17e504u: goto label_17e504;
        case 0x17e508u: goto label_17e508;
        case 0x17e50cu: goto label_17e50c;
        case 0x17e510u: goto label_17e510;
        case 0x17e514u: goto label_17e514;
        case 0x17e518u: goto label_17e518;
        case 0x17e51cu: goto label_17e51c;
        case 0x17e520u: goto label_17e520;
        case 0x17e524u: goto label_17e524;
        case 0x17e528u: goto label_17e528;
        case 0x17e52cu: goto label_17e52c;
        case 0x17e530u: goto label_17e530;
        case 0x17e534u: goto label_17e534;
        case 0x17e538u: goto label_17e538;
        case 0x17e53cu: goto label_17e53c;
        case 0x17e540u: goto label_17e540;
        case 0x17e544u: goto label_17e544;
        case 0x17e548u: goto label_17e548;
        case 0x17e54cu: goto label_17e54c;
        case 0x17e550u: goto label_17e550;
        case 0x17e554u: goto label_17e554;
        case 0x17e558u: goto label_17e558;
        case 0x17e55cu: goto label_17e55c;
        case 0x17e560u: goto label_17e560;
        case 0x17e564u: goto label_17e564;
        case 0x17e568u: goto label_17e568;
        case 0x17e56cu: goto label_17e56c;
        case 0x17e570u: goto label_17e570;
        case 0x17e574u: goto label_17e574;
        case 0x17e578u: goto label_17e578;
        case 0x17e57cu: goto label_17e57c;
        case 0x17e580u: goto label_17e580;
        case 0x17e584u: goto label_17e584;
        case 0x17e588u: goto label_17e588;
        case 0x17e58cu: goto label_17e58c;
        case 0x17e590u: goto label_17e590;
        case 0x17e594u: goto label_17e594;
        case 0x17e598u: goto label_17e598;
        case 0x17e59cu: goto label_17e59c;
        case 0x17e5a0u: goto label_17e5a0;
        case 0x17e5a4u: goto label_17e5a4;
        case 0x17e5a8u: goto label_17e5a8;
        case 0x17e5acu: goto label_17e5ac;
        case 0x17e5b0u: goto label_17e5b0;
        case 0x17e5b4u: goto label_17e5b4;
        case 0x17e5b8u: goto label_17e5b8;
        case 0x17e5bcu: goto label_17e5bc;
        case 0x17e5c0u: goto label_17e5c0;
        case 0x17e5c4u: goto label_17e5c4;
        case 0x17e5c8u: goto label_17e5c8;
        case 0x17e5ccu: goto label_17e5cc;
        case 0x17e5d0u: goto label_17e5d0;
        case 0x17e5d4u: goto label_17e5d4;
        case 0x17e5d8u: goto label_17e5d8;
        case 0x17e5dcu: goto label_17e5dc;
        case 0x17e5e0u: goto label_17e5e0;
        case 0x17e5e4u: goto label_17e5e4;
        case 0x17e5e8u: goto label_17e5e8;
        case 0x17e5ecu: goto label_17e5ec;
        case 0x17e5f0u: goto label_17e5f0;
        case 0x17e5f4u: goto label_17e5f4;
        case 0x17e5f8u: goto label_17e5f8;
        case 0x17e5fcu: goto label_17e5fc;
        case 0x17e600u: goto label_17e600;
        case 0x17e604u: goto label_17e604;
        case 0x17e608u: goto label_17e608;
        case 0x17e60cu: goto label_17e60c;
        case 0x17e610u: goto label_17e610;
        case 0x17e614u: goto label_17e614;
        case 0x17e618u: goto label_17e618;
        case 0x17e61cu: goto label_17e61c;
        case 0x17e620u: goto label_17e620;
        case 0x17e624u: goto label_17e624;
        case 0x17e628u: goto label_17e628;
        case 0x17e62cu: goto label_17e62c;
        case 0x17e630u: goto label_17e630;
        case 0x17e634u: goto label_17e634;
        case 0x17e638u: goto label_17e638;
        case 0x17e63cu: goto label_17e63c;
        case 0x17e640u: goto label_17e640;
        case 0x17e644u: goto label_17e644;
        case 0x17e648u: goto label_17e648;
        case 0x17e64cu: goto label_17e64c;
        case 0x17e650u: goto label_17e650;
        case 0x17e654u: goto label_17e654;
        case 0x17e658u: goto label_17e658;
        case 0x17e65cu: goto label_17e65c;
        case 0x17e660u: goto label_17e660;
        case 0x17e664u: goto label_17e664;
        case 0x17e668u: goto label_17e668;
        case 0x17e66cu: goto label_17e66c;
        case 0x17e670u: goto label_17e670;
        case 0x17e674u: goto label_17e674;
        case 0x17e678u: goto label_17e678;
        case 0x17e67cu: goto label_17e67c;
        case 0x17e680u: goto label_17e680;
        case 0x17e684u: goto label_17e684;
        case 0x17e688u: goto label_17e688;
        case 0x17e68cu: goto label_17e68c;
        case 0x17e690u: goto label_17e690;
        case 0x17e694u: goto label_17e694;
        case 0x17e698u: goto label_17e698;
        case 0x17e69cu: goto label_17e69c;
        case 0x17e6a0u: goto label_17e6a0;
        case 0x17e6a4u: goto label_17e6a4;
        case 0x17e6a8u: goto label_17e6a8;
        case 0x17e6acu: goto label_17e6ac;
        case 0x17e6b0u: goto label_17e6b0;
        case 0x17e6b4u: goto label_17e6b4;
        case 0x17e6b8u: goto label_17e6b8;
        case 0x17e6bcu: goto label_17e6bc;
        case 0x17e6c0u: goto label_17e6c0;
        case 0x17e6c4u: goto label_17e6c4;
        case 0x17e6c8u: goto label_17e6c8;
        case 0x17e6ccu: goto label_17e6cc;
        case 0x17e6d0u: goto label_17e6d0;
        case 0x17e6d4u: goto label_17e6d4;
        case 0x17e6d8u: goto label_17e6d8;
        case 0x17e6dcu: goto label_17e6dc;
        case 0x17e6e0u: goto label_17e6e0;
        case 0x17e6e4u: goto label_17e6e4;
        case 0x17e6e8u: goto label_17e6e8;
        case 0x17e6ecu: goto label_17e6ec;
        case 0x17e6f0u: goto label_17e6f0;
        case 0x17e6f4u: goto label_17e6f4;
        case 0x17e6f8u: goto label_17e6f8;
        case 0x17e6fcu: goto label_17e6fc;
        case 0x17e700u: goto label_17e700;
        case 0x17e704u: goto label_17e704;
        case 0x17e708u: goto label_17e708;
        case 0x17e70cu: goto label_17e70c;
        case 0x17e710u: goto label_17e710;
        case 0x17e714u: goto label_17e714;
        case 0x17e718u: goto label_17e718;
        case 0x17e71cu: goto label_17e71c;
        case 0x17e720u: goto label_17e720;
        case 0x17e724u: goto label_17e724;
        case 0x17e728u: goto label_17e728;
        case 0x17e72cu: goto label_17e72c;
        case 0x17e730u: goto label_17e730;
        case 0x17e734u: goto label_17e734;
        case 0x17e738u: goto label_17e738;
        case 0x17e73cu: goto label_17e73c;
        case 0x17e740u: goto label_17e740;
        case 0x17e744u: goto label_17e744;
        case 0x17e748u: goto label_17e748;
        case 0x17e74cu: goto label_17e74c;
        case 0x17e750u: goto label_17e750;
        case 0x17e754u: goto label_17e754;
        case 0x17e758u: goto label_17e758;
        case 0x17e75cu: goto label_17e75c;
        case 0x17e760u: goto label_17e760;
        case 0x17e764u: goto label_17e764;
        case 0x17e768u: goto label_17e768;
        case 0x17e76cu: goto label_17e76c;
        case 0x17e770u: goto label_17e770;
        case 0x17e774u: goto label_17e774;
        case 0x17e778u: goto label_17e778;
        case 0x17e77cu: goto label_17e77c;
        case 0x17e780u: goto label_17e780;
        case 0x17e784u: goto label_17e784;
        case 0x17e788u: goto label_17e788;
        case 0x17e78cu: goto label_17e78c;
        case 0x17e790u: goto label_17e790;
        case 0x17e794u: goto label_17e794;
        case 0x17e798u: goto label_17e798;
        case 0x17e79cu: goto label_17e79c;
        case 0x17e7a0u: goto label_17e7a0;
        case 0x17e7a4u: goto label_17e7a4;
        case 0x17e7a8u: goto label_17e7a8;
        case 0x17e7acu: goto label_17e7ac;
        case 0x17e7b0u: goto label_17e7b0;
        case 0x17e7b4u: goto label_17e7b4;
        case 0x17e7b8u: goto label_17e7b8;
        case 0x17e7bcu: goto label_17e7bc;
        case 0x17e7c0u: goto label_17e7c0;
        case 0x17e7c4u: goto label_17e7c4;
        case 0x17e7c8u: goto label_17e7c8;
        case 0x17e7ccu: goto label_17e7cc;
        case 0x17e7d0u: goto label_17e7d0;
        case 0x17e7d4u: goto label_17e7d4;
        case 0x17e7d8u: goto label_17e7d8;
        case 0x17e7dcu: goto label_17e7dc;
        case 0x17e7e0u: goto label_17e7e0;
        case 0x17e7e4u: goto label_17e7e4;
        case 0x17e7e8u: goto label_17e7e8;
        case 0x17e7ecu: goto label_17e7ec;
        case 0x17e7f0u: goto label_17e7f0;
        case 0x17e7f4u: goto label_17e7f4;
        case 0x17e7f8u: goto label_17e7f8;
        case 0x17e7fcu: goto label_17e7fc;
        case 0x17e800u: goto label_17e800;
        case 0x17e804u: goto label_17e804;
        case 0x17e808u: goto label_17e808;
        case 0x17e80cu: goto label_17e80c;
        case 0x17e810u: goto label_17e810;
        case 0x17e814u: goto label_17e814;
        case 0x17e818u: goto label_17e818;
        case 0x17e81cu: goto label_17e81c;
        case 0x17e820u: goto label_17e820;
        case 0x17e824u: goto label_17e824;
        case 0x17e828u: goto label_17e828;
        case 0x17e82cu: goto label_17e82c;
        case 0x17e830u: goto label_17e830;
        case 0x17e834u: goto label_17e834;
        case 0x17e838u: goto label_17e838;
        case 0x17e83cu: goto label_17e83c;
        case 0x17e840u: goto label_17e840;
        case 0x17e844u: goto label_17e844;
        case 0x17e848u: goto label_17e848;
        case 0x17e84cu: goto label_17e84c;
        case 0x17e850u: goto label_17e850;
        case 0x17e854u: goto label_17e854;
        case 0x17e858u: goto label_17e858;
        case 0x17e85cu: goto label_17e85c;
        case 0x17e860u: goto label_17e860;
        case 0x17e864u: goto label_17e864;
        case 0x17e868u: goto label_17e868;
        case 0x17e86cu: goto label_17e86c;
        case 0x17e870u: goto label_17e870;
        case 0x17e874u: goto label_17e874;
        case 0x17e878u: goto label_17e878;
        case 0x17e87cu: goto label_17e87c;
        case 0x17e880u: goto label_17e880;
        case 0x17e884u: goto label_17e884;
        case 0x17e888u: goto label_17e888;
        case 0x17e88cu: goto label_17e88c;
        case 0x17e890u: goto label_17e890;
        case 0x17e894u: goto label_17e894;
        case 0x17e898u: goto label_17e898;
        case 0x17e89cu: goto label_17e89c;
        case 0x17e8a0u: goto label_17e8a0;
        case 0x17e8a4u: goto label_17e8a4;
        case 0x17e8a8u: goto label_17e8a8;
        case 0x17e8acu: goto label_17e8ac;
        case 0x17e8b0u: goto label_17e8b0;
        case 0x17e8b4u: goto label_17e8b4;
        case 0x17e8b8u: goto label_17e8b8;
        case 0x17e8bcu: goto label_17e8bc;
        case 0x17e8c0u: goto label_17e8c0;
        case 0x17e8c4u: goto label_17e8c4;
        case 0x17e8c8u: goto label_17e8c8;
        case 0x17e8ccu: goto label_17e8cc;
        case 0x17e8d0u: goto label_17e8d0;
        case 0x17e8d4u: goto label_17e8d4;
        case 0x17e8d8u: goto label_17e8d8;
        case 0x17e8dcu: goto label_17e8dc;
        case 0x17e8e0u: goto label_17e8e0;
        case 0x17e8e4u: goto label_17e8e4;
        case 0x17e8e8u: goto label_17e8e8;
        case 0x17e8ecu: goto label_17e8ec;
        case 0x17e8f0u: goto label_17e8f0;
        case 0x17e8f4u: goto label_17e8f4;
        case 0x17e8f8u: goto label_17e8f8;
        case 0x17e8fcu: goto label_17e8fc;
        case 0x17e900u: goto label_17e900;
        case 0x17e904u: goto label_17e904;
        case 0x17e908u: goto label_17e908;
        case 0x17e90cu: goto label_17e90c;
        case 0x17e910u: goto label_17e910;
        case 0x17e914u: goto label_17e914;
        case 0x17e918u: goto label_17e918;
        case 0x17e91cu: goto label_17e91c;
        case 0x17e920u: goto label_17e920;
        case 0x17e924u: goto label_17e924;
        case 0x17e928u: goto label_17e928;
        case 0x17e92cu: goto label_17e92c;
        case 0x17e930u: goto label_17e930;
        case 0x17e934u: goto label_17e934;
        case 0x17e938u: goto label_17e938;
        case 0x17e93cu: goto label_17e93c;
        case 0x17e940u: goto label_17e940;
        case 0x17e944u: goto label_17e944;
        case 0x17e948u: goto label_17e948;
        case 0x17e94cu: goto label_17e94c;
        case 0x17e950u: goto label_17e950;
        case 0x17e954u: goto label_17e954;
        case 0x17e958u: goto label_17e958;
        case 0x17e95cu: goto label_17e95c;
        case 0x17e960u: goto label_17e960;
        case 0x17e964u: goto label_17e964;
        case 0x17e968u: goto label_17e968;
        case 0x17e96cu: goto label_17e96c;
        case 0x17e970u: goto label_17e970;
        case 0x17e974u: goto label_17e974;
        case 0x17e978u: goto label_17e978;
        case 0x17e97cu: goto label_17e97c;
        case 0x17e980u: goto label_17e980;
        case 0x17e984u: goto label_17e984;
        case 0x17e988u: goto label_17e988;
        case 0x17e98cu: goto label_17e98c;
        case 0x17e990u: goto label_17e990;
        case 0x17e994u: goto label_17e994;
        case 0x17e998u: goto label_17e998;
        case 0x17e99cu: goto label_17e99c;
        case 0x17e9a0u: goto label_17e9a0;
        case 0x17e9a4u: goto label_17e9a4;
        case 0x17e9a8u: goto label_17e9a8;
        case 0x17e9acu: goto label_17e9ac;
        case 0x17e9b0u: goto label_17e9b0;
        case 0x17e9b4u: goto label_17e9b4;
        case 0x17e9b8u: goto label_17e9b8;
        case 0x17e9bcu: goto label_17e9bc;
        case 0x17e9c0u: goto label_17e9c0;
        case 0x17e9c4u: goto label_17e9c4;
        case 0x17e9c8u: goto label_17e9c8;
        case 0x17e9ccu: goto label_17e9cc;
        case 0x17e9d0u: goto label_17e9d0;
        case 0x17e9d4u: goto label_17e9d4;
        case 0x17e9d8u: goto label_17e9d8;
        case 0x17e9dcu: goto label_17e9dc;
        case 0x17e9e0u: goto label_17e9e0;
        case 0x17e9e4u: goto label_17e9e4;
        case 0x17e9e8u: goto label_17e9e8;
        case 0x17e9ecu: goto label_17e9ec;
        case 0x17e9f0u: goto label_17e9f0;
        case 0x17e9f4u: goto label_17e9f4;
        case 0x17e9f8u: goto label_17e9f8;
        case 0x17e9fcu: goto label_17e9fc;
        case 0x17ea00u: goto label_17ea00;
        case 0x17ea04u: goto label_17ea04;
        case 0x17ea08u: goto label_17ea08;
        case 0x17ea0cu: goto label_17ea0c;
        case 0x17ea10u: goto label_17ea10;
        case 0x17ea14u: goto label_17ea14;
        case 0x17ea18u: goto label_17ea18;
        case 0x17ea1cu: goto label_17ea1c;
        case 0x17ea20u: goto label_17ea20;
        case 0x17ea24u: goto label_17ea24;
        case 0x17ea28u: goto label_17ea28;
        case 0x17ea2cu: goto label_17ea2c;
        case 0x17ea30u: goto label_17ea30;
        case 0x17ea34u: goto label_17ea34;
        case 0x17ea38u: goto label_17ea38;
        case 0x17ea3cu: goto label_17ea3c;
        case 0x17ea40u: goto label_17ea40;
        case 0x17ea44u: goto label_17ea44;
        case 0x17ea48u: goto label_17ea48;
        case 0x17ea4cu: goto label_17ea4c;
        case 0x17ea50u: goto label_17ea50;
        case 0x17ea54u: goto label_17ea54;
        case 0x17ea58u: goto label_17ea58;
        case 0x17ea5cu: goto label_17ea5c;
        case 0x17ea60u: goto label_17ea60;
        case 0x17ea64u: goto label_17ea64;
        case 0x17ea68u: goto label_17ea68;
        case 0x17ea6cu: goto label_17ea6c;
        case 0x17ea70u: goto label_17ea70;
        case 0x17ea74u: goto label_17ea74;
        case 0x17ea78u: goto label_17ea78;
        case 0x17ea7cu: goto label_17ea7c;
        case 0x17ea80u: goto label_17ea80;
        case 0x17ea84u: goto label_17ea84;
        case 0x17ea88u: goto label_17ea88;
        case 0x17ea8cu: goto label_17ea8c;
        case 0x17ea90u: goto label_17ea90;
        case 0x17ea94u: goto label_17ea94;
        case 0x17ea98u: goto label_17ea98;
        case 0x17ea9cu: goto label_17ea9c;
        case 0x17eaa0u: goto label_17eaa0;
        case 0x17eaa4u: goto label_17eaa4;
        case 0x17eaa8u: goto label_17eaa8;
        case 0x17eaacu: goto label_17eaac;
        case 0x17eab0u: goto label_17eab0;
        case 0x17eab4u: goto label_17eab4;
        case 0x17eab8u: goto label_17eab8;
        case 0x17eabcu: goto label_17eabc;
        case 0x17eac0u: goto label_17eac0;
        case 0x17eac4u: goto label_17eac4;
        case 0x17eac8u: goto label_17eac8;
        case 0x17eaccu: goto label_17eacc;
        case 0x17ead0u: goto label_17ead0;
        case 0x17ead4u: goto label_17ead4;
        case 0x17ead8u: goto label_17ead8;
        case 0x17eadcu: goto label_17eadc;
        case 0x17eae0u: goto label_17eae0;
        case 0x17eae4u: goto label_17eae4;
        case 0x17eae8u: goto label_17eae8;
        case 0x17eaecu: goto label_17eaec;
        case 0x17eaf0u: goto label_17eaf0;
        case 0x17eaf4u: goto label_17eaf4;
        case 0x17eaf8u: goto label_17eaf8;
        case 0x17eafcu: goto label_17eafc;
        case 0x17eb00u: goto label_17eb00;
        case 0x17eb04u: goto label_17eb04;
        case 0x17eb08u: goto label_17eb08;
        case 0x17eb0cu: goto label_17eb0c;
        case 0x17eb10u: goto label_17eb10;
        case 0x17eb14u: goto label_17eb14;
        case 0x17eb18u: goto label_17eb18;
        case 0x17eb1cu: goto label_17eb1c;
        case 0x17eb20u: goto label_17eb20;
        case 0x17eb24u: goto label_17eb24;
        case 0x17eb28u: goto label_17eb28;
        case 0x17eb2cu: goto label_17eb2c;
        case 0x17eb30u: goto label_17eb30;
        case 0x17eb34u: goto label_17eb34;
        case 0x17eb38u: goto label_17eb38;
        case 0x17eb3cu: goto label_17eb3c;
        case 0x17eb40u: goto label_17eb40;
        case 0x17eb44u: goto label_17eb44;
        case 0x17eb48u: goto label_17eb48;
        case 0x17eb4cu: goto label_17eb4c;
        case 0x17eb50u: goto label_17eb50;
        case 0x17eb54u: goto label_17eb54;
        case 0x17eb58u: goto label_17eb58;
        case 0x17eb5cu: goto label_17eb5c;
        case 0x17eb60u: goto label_17eb60;
        case 0x17eb64u: goto label_17eb64;
        case 0x17eb68u: goto label_17eb68;
        case 0x17eb6cu: goto label_17eb6c;
        case 0x17eb70u: goto label_17eb70;
        case 0x17eb74u: goto label_17eb74;
        case 0x17eb78u: goto label_17eb78;
        case 0x17eb7cu: goto label_17eb7c;
        default: return;
    }

label_17e3b0:
    // 0x17e3b0: 0x8f848794  lw          $a0, -0x786C($gp)
    ctx->pc = 0x17e3b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936468)));
label_17e3b4:
    // 0x17e3b4: 0x659821  addu        $s3, $v1, $a1
    ctx->pc = 0x17e3b4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_17e3b8:
    // 0x17e3b8: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x17e3b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_17e3bc:
    // 0x17e3bc: 0x761824  and         $v1, $v1, $s6
    ctx->pc = 0x17e3bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 22));
label_17e3c0:
    // 0x17e3c0: 0x10830067  beq         $a0, $v1, . + 4 + (0x67 << 2)
label_17e3c4:
    if (ctx->pc == 0x17E3C4u) {
        ctx->pc = 0x17E3C8u;
        goto label_17e3c8;
    }
    ctx->pc = 0x17E3C0u;
    {
        const bool branch_taken_0x17e3c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x17e3c0) {
            ctx->pc = 0x17E560u;
            goto label_17e560;
        }
    }
    ctx->pc = 0x17E3C8u;
label_17e3c8:
    // 0x17e3c8: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x17e3c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_17e3cc:
    // 0x17e3cc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x17e3ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_17e3d0:
    // 0x17e3d0: 0x641804  sllv        $v1, $a0, $v1
    ctx->pc = 0x17e3d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 3) & 0x1F));
label_17e3d4:
    // 0x17e3d4: 0x7e1824  and         $v1, $v1, $fp
    ctx->pc = 0x17e3d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 30));
label_17e3d8:
    // 0x17e3d8: 0x10600061  beqz        $v1, . + 4 + (0x61 << 2)
label_17e3dc:
    if (ctx->pc == 0x17E3DCu) {
        ctx->pc = 0x17E3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E3D8u;
        // 0x17e3dc: 0x26640010  addiu       $a0, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17E3E0u;
        goto label_17e3e0;
    }
    ctx->pc = 0x17E3D8u;
    {
        const bool branch_taken_0x17e3d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E3D8u;
        // 0x17e3dc: 0x26640010  addiu       $a0, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e3d8) {
            ctx->pc = 0x17E560u;
            goto label_17e560;
        }
    }
    ctx->pc = 0x17E3E0u;
label_17e3e0:
    // 0x17e3e0: 0xc05fc40  jal         func_17F100
label_17e3e4:
    if (ctx->pc == 0x17E3E4u) {
        ctx->pc = 0x17E3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E3E0u;
        // 0x17e3e4: 0x26650020  addiu       $a1, $s3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17E3E8u;
        goto label_17e3e8;
    }
    ctx->pc = 0x17E3E0u;
    SET_GPR_U32(ctx, 31, 0x17E3E8u);
    ctx->pc = 0x17E3E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E3E0u;
    // 0x17e3e4: 0x26650020  addiu       $a1, $s3, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F100u;
    { ctx->pc = 0x17f100; return; }
    ctx->pc = 0x17E3E8u;
label_17e3e8:
    // 0x17e3e8: 0xc05fb88  jal         func_17EE20
label_17e3ec:
    if (ctx->pc == 0x17E3ECu) {
        ctx->pc = 0x17E3F0u;
        goto label_17e3f0;
    }
    ctx->pc = 0x17E3E8u;
    SET_GPR_U32(ctx, 31, 0x17E3F0u);
    ctx->pc = 0x17EE20u;
    { ctx->pc = 0x17ee20; return; }
    ctx->pc = 0x17E3F0u;
label_17e3f0:
    // 0x17e3f0: 0xc05fb50  jal         func_17ED40
label_17e3f4:
    if (ctx->pc == 0x17E3F4u) {
        ctx->pc = 0x17E3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E3F0u;
        // 0x17e3f4: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17E3F8u;
        goto label_17e3f8;
    }
    ctx->pc = 0x17E3F0u;
    SET_GPR_U32(ctx, 31, 0x17E3F8u);
    ctx->pc = 0x17E3F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E3F0u;
    // 0x17e3f4: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17ED40u;
    { ctx->pc = 0x17ed40; return; }
    ctx->pc = 0x17E3F8u;
label_17e3f8:
    // 0x17e3f8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x17e3f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_17e3fc:
    // 0x17e3fc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x17e3fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_17e400:
    // 0x17e400: 0xc05fbc0  jal         func_17EF00
label_17e404:
    if (ctx->pc == 0x17E404u) {
        ctx->pc = 0x17E404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E400u;
        // 0x17e404: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17E408u;
        goto label_17e408;
    }
    ctx->pc = 0x17E400u;
    SET_GPR_U32(ctx, 31, 0x17E408u);
    ctx->pc = 0x17E404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E400u;
    // 0x17e404: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17EF00u;
    { ctx->pc = 0x17ef00; return; }
    ctx->pc = 0x17E408u;
label_17e408:
    // 0x17e408: 0x1040004c  beqz        $v0, . + 4 + (0x4C << 2)
label_17e40c:
    if (ctx->pc == 0x17E40Cu) {
        ctx->pc = 0x17E410u;
        goto label_17e410;
    }
    ctx->pc = 0x17E408u;
    {
        const bool branch_taken_0x17e408 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17e408) {
            ctx->pc = 0x17E53Cu;
            goto label_17e53c;
        }
    }
    ctx->pc = 0x17E410u;
label_17e410:
    // 0x17e410: 0x8f848780  lw          $a0, -0x7880($gp)
    ctx->pc = 0x17e410u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
label_17e414:
    // 0x17e414: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x17e414u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_17e418:
    // 0x17e418: 0x30434000  andi        $v1, $v0, 0x4000
    ctx->pc = 0x17e418u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
label_17e41c:
    // 0x17e41c: 0xac930000  sw          $s3, 0x0($a0)
    ctx->pc = 0x17e41cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 19));
label_17e420:
    // 0x17e420: 0x8f848780  lw          $a0, -0x7880($gp)
    ctx->pc = 0x17e420u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
label_17e424:
    // 0x17e424: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x17e424u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
label_17e428:
    // 0x17e428: 0x8f848780  lw          $a0, -0x7880($gp)
    ctx->pc = 0x17e428u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
label_17e42c:
    // 0x17e42c: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
label_17e430:
    if (ctx->pc == 0x17E430u) {
        ctx->pc = 0x17E430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E42Cu;
        // 0x17e430: 0xac850004  sw          $a1, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17E434u;
        goto label_17e434;
    }
    ctx->pc = 0x17E42Cu;
    {
        const bool branch_taken_0x17e42c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E42Cu;
        // 0x17e430: 0xac850004  sw          $a1, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e42c) {
            ctx->pc = 0x17E470u;
            goto label_17e470;
        }
    }
    ctx->pc = 0x17E434u;
label_17e434:
    // 0x17e434: 0x8f848778  lw          $a0, -0x7888($gp)
    ctx->pc = 0x17e434u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936440)));
label_17e438:
    // 0x17e438: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
label_17e43c:
    if (ctx->pc == 0x17E43Cu) {
        ctx->pc = 0x17E440u;
        goto label_17e440;
    }
    ctx->pc = 0x17E438u;
    {
        const bool branch_taken_0x17e438 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x17e438) {
            ctx->pc = 0x17E450u;
            goto label_17e450;
        }
    }
    ctx->pc = 0x17E440u;
label_17e440:
    // 0x17e440: 0x8f838780  lw          $v1, -0x7880($gp)
    ctx->pc = 0x17e440u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
label_17e444:
    // 0x17e444: 0xaf838778  sw          $v1, -0x7888($gp)
    ctx->pc = 0x17e444u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936440), GPR_U32(ctx, 3));
label_17e448:
    // 0x17e448: 0x10000018  b           . + 4 + (0x18 << 2)
label_17e44c:
    if (ctx->pc == 0x17E44Cu) {
        ctx->pc = 0x17E44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E448u;
        // 0x17e44c: 0xaf838774  sw          $v1, -0x788C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936436), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17E450u;
        goto label_17e450;
    }
    ctx->pc = 0x17E448u;
    {
        const bool branch_taken_0x17e448 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E448u;
        // 0x17e44c: 0xaf838774  sw          $v1, -0x788C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936436), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e448) {
            ctx->pc = 0x17E4ACu;
            goto label_17e4ac;
        }
    }
    ctx->pc = 0x17E450u;
label_17e450:
    // 0x17e450: 0x8f838780  lw          $v1, -0x7880($gp)
    ctx->pc = 0x17e450u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
label_17e454:
    // 0x17e454: 0xac64000c  sw          $a0, 0xC($v1)
    ctx->pc = 0x17e454u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
label_17e458:
    // 0x17e458: 0x8f848780  lw          $a0, -0x7880($gp)
    ctx->pc = 0x17e458u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
label_17e45c:
    // 0x17e45c: 0x8f838778  lw          $v1, -0x7888($gp)
    ctx->pc = 0x17e45cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936440)));
label_17e460:
    // 0x17e460: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x17e460u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
label_17e464:
    // 0x17e464: 0x8f838780  lw          $v1, -0x7880($gp)
    ctx->pc = 0x17e464u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
label_17e468:
    // 0x17e468: 0x10000010  b           . + 4 + (0x10 << 2)
label_17e46c:
    if (ctx->pc == 0x17E46Cu) {
        ctx->pc = 0x17E46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E468u;
        // 0x17e46c: 0xaf838778  sw          $v1, -0x7888($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936440), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17E470u;
        goto label_17e470;
    }
    ctx->pc = 0x17E468u;
    {
        const bool branch_taken_0x17e468 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E468u;
        // 0x17e46c: 0xaf838778  sw          $v1, -0x7888($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936440), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e468) {
            ctx->pc = 0x17E4ACu;
            goto label_17e4ac;
        }
    }
    ctx->pc = 0x17E470u;
label_17e470:
    // 0x17e470: 0x8f84877c  lw          $a0, -0x7884($gp)
    ctx->pc = 0x17e470u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936444)));
label_17e474:
    // 0x17e474: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
label_17e478:
    if (ctx->pc == 0x17E478u) {
        ctx->pc = 0x17E47Cu;
        goto label_17e47c;
    }
    ctx->pc = 0x17E474u;
    {
        const bool branch_taken_0x17e474 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x17e474) {
            ctx->pc = 0x17E48Cu;
            goto label_17e48c;
        }
    }
    ctx->pc = 0x17E47Cu;
label_17e47c:
    // 0x17e47c: 0x8f838780  lw          $v1, -0x7880($gp)
    ctx->pc = 0x17e47cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
label_17e480:
    // 0x17e480: 0xaf83877c  sw          $v1, -0x7884($gp)
    ctx->pc = 0x17e480u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936444), GPR_U32(ctx, 3));
label_17e484:
    // 0x17e484: 0x10000009  b           . + 4 + (0x9 << 2)
label_17e488:
    if (ctx->pc == 0x17E488u) {
        ctx->pc = 0x17E488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E484u;
        // 0x17e488: 0xaf838770  sw          $v1, -0x7890($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936432), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17E48Cu;
        goto label_17e48c;
    }
    ctx->pc = 0x17E484u;
    {
        const bool branch_taken_0x17e484 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E484u;
        // 0x17e488: 0xaf838770  sw          $v1, -0x7890($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936432), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e484) {
            ctx->pc = 0x17E4ACu;
            goto label_17e4ac;
        }
    }
    ctx->pc = 0x17E48Cu;
label_17e48c:
    // 0x17e48c: 0x0  nop
    ctx->pc = 0x17e48cu;
    // NOP
label_17e490:
    // 0x17e490: 0x8f838780  lw          $v1, -0x7880($gp)
    ctx->pc = 0x17e490u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
label_17e494:
    // 0x17e494: 0xac64000c  sw          $a0, 0xC($v1)
    ctx->pc = 0x17e494u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
label_17e498:
    // 0x17e498: 0x8f848780  lw          $a0, -0x7880($gp)
    ctx->pc = 0x17e498u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
label_17e49c:
    // 0x17e49c: 0x8f83877c  lw          $v1, -0x7884($gp)
    ctx->pc = 0x17e49cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936444)));
label_17e4a0:
    // 0x17e4a0: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x17e4a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
label_17e4a4:
    // 0x17e4a4: 0x8f838780  lw          $v1, -0x7880($gp)
    ctx->pc = 0x17e4a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
label_17e4a8:
    // 0x17e4a8: 0xaf83877c  sw          $v1, -0x7884($gp)
    ctx->pc = 0x17e4a8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936444), GPR_U32(ctx, 3));
label_17e4ac:
    // 0x17e4ac: 0x0  nop
    ctx->pc = 0x17e4acu;
    // NOP
label_17e4b0:
    // 0x17e4b0: 0x8f838780  lw          $v1, -0x7880($gp)
    ctx->pc = 0x17e4b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
label_17e4b4:
    // 0x17e4b4: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x17e4b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_17e4b8:
    // 0x17e4b8: 0x34213fb1  ori         $at, $at, 0x3FB1
    ctx->pc = 0x17e4b8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)16305);
label_17e4bc:
    // 0x17e4bc: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x17e4bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_17e4c0:
    // 0x17e4c0: 0xaf838780  sw          $v1, -0x7880($gp)
    ctx->pc = 0x17e4c0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936448), GPR_U32(ctx, 3));
label_17e4c4:
    // 0x17e4c4: 0x8f838780  lw          $v1, -0x7880($gp)
    ctx->pc = 0x17e4c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
label_17e4c8:
    // 0x17e4c8: 0x61082b  sltu        $at, $v1, $at
    ctx->pc = 0x17e4c8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
label_17e4cc:
    // 0x17e4cc: 0x1420001b  bnez        $at, . + 4 + (0x1B << 2)
label_17e4d0:
    if (ctx->pc == 0x17E4D0u) {
        ctx->pc = 0x17E4D4u;
        goto label_17e4d4;
    }
    ctx->pc = 0x17E4CCu;
    {
        const bool branch_taken_0x17e4cc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x17e4cc) {
            ctx->pc = 0x17E53Cu;
            goto label_17e53c;
        }
    }
    ctx->pc = 0x17E4D4u;
label_17e4d4:
    // 0x17e4d4: 0x8f858774  lw          $a1, -0x788C($gp)
    ctx->pc = 0x17e4d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936436)));
label_17e4d8:
    // 0x17e4d8: 0xc05e71c  jal         func_179C70
label_17e4dc:
    if (ctx->pc == 0x17E4DCu) {
        ctx->pc = 0x17E4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E4D8u;
        // 0x17e4dc: 0x8f848770  lw          $a0, -0x7890($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936432)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17E4E0u;
        goto label_17e4e0;
    }
    ctx->pc = 0x17E4D8u;
    SET_GPR_U32(ctx, 31, 0x17E4E0u);
    ctx->pc = 0x17E4DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E4D8u;
    // 0x17e4dc: 0x8f848770  lw          $a0, -0x7890($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936432)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x179C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179C70u, 0x17E4D8u, 0x17E4E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E4E0u;
label_17e4e0:
    // 0x17e4e0: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x17e4e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
label_17e4e4:
    // 0x17e4e4: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x17e4e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
label_17e4e8:
    // 0x17e4e8: 0xaf838780  sw          $v1, -0x7880($gp)
    ctx->pc = 0x17e4e8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936448), GPR_U32(ctx, 3));
label_17e4ec:
    // 0x17e4ec: 0x24849400  addiu       $a0, $a0, -0x6C00
    ctx->pc = 0x17e4ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939648));
label_17e4f0:
    // 0x17e4f0: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x17e4f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
label_17e4f4:
    // 0x17e4f4: 0xaf80877c  sw          $zero, -0x7884($gp)
    ctx->pc = 0x17e4f4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936444), GPR_U32(ctx, 0));
label_17e4f8:
    // 0x17e4f8: 0xaf808778  sw          $zero, -0x7888($gp)
    ctx->pc = 0x17e4f8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936440), GPR_U32(ctx, 0));
label_17e4fc:
    // 0x17e4fc: 0x246393c0  addiu       $v1, $v1, -0x6C40
    ctx->pc = 0x17e4fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939584));
label_17e500:
    // 0x17e500: 0xaf808770  sw          $zero, -0x7890($gp)
    ctx->pc = 0x17e500u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936432), GPR_U32(ctx, 0));
label_17e504:
    // 0x17e504: 0xaf808774  sw          $zero, -0x788C($gp)
    ctx->pc = 0x17e504u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936436), GPR_U32(ctx, 0));
label_17e508:
    // 0x17e508: 0xaf808790  sw          $zero, -0x7870($gp)
    ctx->pc = 0x17e508u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936464), GPR_U32(ctx, 0));
label_17e50c:
    // 0x17e50c: 0xaf80878c  sw          $zero, -0x7874($gp)
    ctx->pc = 0x17e50cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936460), GPR_U32(ctx, 0));
label_17e510:
    // 0x17e510: 0xaf808788  sw          $zero, -0x7878($gp)
    ctx->pc = 0x17e510u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936456), GPR_U32(ctx, 0));
label_17e514:
    // 0x17e514: 0xaf808784  sw          $zero, -0x787C($gp)
    ctx->pc = 0x17e514u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936452), GPR_U32(ctx, 0));
label_17e518:
    // 0x17e518: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x17e518u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_17e51c:
    // 0x17e51c: 0xd8820010  lqc2        $vf2, 0x10($a0)
    ctx->pc = 0x17e51cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 16)));
label_17e520:
    // 0x17e520: 0xd8830020  lqc2        $vf3, 0x20($a0)
    ctx->pc = 0x17e520u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 32)));
label_17e524:
    // 0x17e524: 0xd8840030  lqc2        $vf4, 0x30($a0)
    ctx->pc = 0x17e524u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 48)));
label_17e528:
    // 0x17e528: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x17e528u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_17e52c:
    // 0x17e52c: 0xd8660010  lqc2        $vf6, 0x10($v1)
    ctx->pc = 0x17e52cu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 16)));
label_17e530:
    // 0x17e530: 0xd8670020  lqc2        $vf7, 0x20($v1)
    ctx->pc = 0x17e530u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 32)));
label_17e534:
    // 0x17e534: 0xd8680030  lqc2        $vf8, 0x30($v1)
    ctx->pc = 0x17e534u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 48)));
label_17e538:
    // 0x17e538: 0x0  nop
    ctx->pc = 0x17e538u;
    // NOP
label_17e53c:
    // 0x17e53c: 0x0  nop
    ctx->pc = 0x17e53cu;
    // NOP
label_17e540:
    // 0x17e540: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x17e540u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_17e544:
    // 0x17e544: 0x2c02027  not         $a0, $s6
    ctx->pc = 0x17e544u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 22) | GPR_U64(ctx, 0)));
label_17e548:
    // 0x17e548: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x17e548u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_17e54c:
    // 0x17e54c: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x17e54cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_17e550:
    // 0x17e550: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x17e550u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_17e554:
    // 0x17e554: 0x8f838794  lw          $v1, -0x786C($gp)
    ctx->pc = 0x17e554u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936468)));
label_17e558:
    // 0x17e558: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x17e558u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_17e55c:
    // 0x17e55c: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x17e55cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_17e560:
    // 0x17e560: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x17e560u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_17e564:
    // 0x17e564: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x17e564u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_17e568:
    // 0x17e568: 0x257182b  sltu        $v1, $s2, $s7
    ctx->pc = 0x17e568u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 23)) ? 1 : 0);
label_17e56c:
    // 0x17e56c: 0x1460ff8e  bnez        $v1, . + 4 + (-0x72 << 2)
label_17e570:
    if (ctx->pc == 0x17E570u) {
        ctx->pc = 0x17E574u;
        goto label_17e574;
    }
    ctx->pc = 0x17E56Cu;
    {
        const bool branch_taken_0x17e56c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x17e56c) {
            ctx->pc = 0x17E3A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x17e3a8; return; }
        }
    }
    ctx->pc = 0x17E574u;
label_17e574:
    // 0x17e574: 0x0  nop
    ctx->pc = 0x17e574u;
    // NOP
label_17e578:
    // 0x17e578: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x17e578u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_17e57c:
    // 0x17e57c: 0x26940004  addiu       $s4, $s4, 0x4
    ctx->pc = 0x17e57cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
label_17e580:
    // 0x17e580: 0x8fa300bc  lw          $v1, 0xBC($sp)
    ctx->pc = 0x17e580u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
label_17e584:
    // 0x17e584: 0x70082a  slt         $at, $v1, $s0
    ctx->pc = 0x17e584u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_17e588:
    // 0x17e588: 0x1020ff73  beqz        $at, . + 4 + (-0x8D << 2)
label_17e58c:
    if (ctx->pc == 0x17E58Cu) {
        ctx->pc = 0x17E590u;
        goto label_17e590;
    }
    ctx->pc = 0x17E588u;
    {
        const bool branch_taken_0x17e588 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x17e588) {
            ctx->pc = 0x17E358u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x17e358; return; }
        }
    }
    ctx->pc = 0x17E590u;
label_17e590:
    // 0x17e590: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x17e590u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_17e594:
    // 0x17e594: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x17e594u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_17e598:
    // 0x17e598: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x17e598u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_17e59c:
    // 0x17e59c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x17e59cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_17e5a0:
    // 0x17e5a0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x17e5a0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_17e5a4:
    // 0x17e5a4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x17e5a4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_17e5a8:
    // 0x17e5a8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x17e5a8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_17e5ac:
    // 0x17e5ac: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x17e5acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_17e5b0:
    // 0x17e5b0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17e5b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_17e5b4:
    // 0x17e5b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17e5b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_17e5b8:
    // 0x17e5b8: 0x3e00008  jr          $ra
label_17e5bc:
    if (ctx->pc == 0x17E5BCu) {
        ctx->pc = 0x17E5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E5B8u;
        // 0x17e5bc: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17E5C0u;
        goto label_17e5c0;
    }
    ctx->pc = 0x17E5B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17E5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E5B8u;
        // 0x17e5bc: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17E5B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17E5C0u;
label_17e5c0:
    // 0x17e5c0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x17e5c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_17e5c4:
    // 0x17e5c4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x17e5c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_17e5c8:
    // 0x17e5c8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x17e5c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_17e5cc:
    // 0x17e5cc: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x17e5ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_17e5d0:
    // 0x17e5d0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x17e5d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_17e5d4:
    // 0x17e5d4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x17e5d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_17e5d8:
    // 0x17e5d8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x17e5d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_17e5dc:
    // 0x17e5dc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x17e5dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_17e5e0:
    // 0x17e5e0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x17e5e0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_17e5e4:
    // 0x17e5e4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x17e5e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_17e5e8:
    // 0x17e5e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17e5e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_17e5ec:
    // 0x17e5ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17e5ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_17e5f0:
    // 0x17e5f0: 0x14e00003  bnez        $a3, . + 4 + (0x3 << 2)
label_17e5f4:
    if (ctx->pc == 0x17E5F4u) {
        ctx->pc = 0x17E5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E5F0u;
        // 0x17e5f4: 0xafa600ac  sw          $a2, 0xAC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17E5F8u;
        goto label_17e5f8;
    }
    ctx->pc = 0x17E5F0u;
    {
        const bool branch_taken_0x17e5f0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x17E5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E5F0u;
        // 0x17e5f4: 0xafa600ac  sw          $a2, 0xAC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e5f0) {
            ctx->pc = 0x17E600u;
            goto label_17e600;
        }
    }
    ctx->pc = 0x17E5F8u;
label_17e5f8:
    // 0x17e5f8: 0x10000002  b           . + 4 + (0x2 << 2)
label_17e5fc:
    if (ctx->pc == 0x17E5FCu) {
        ctx->pc = 0x17E5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E5F8u;
        // 0x17e5fc: 0x241600c0  addiu       $s6, $zero, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17E600u;
        goto label_17e600;
    }
    ctx->pc = 0x17E5F8u;
    {
        const bool branch_taken_0x17e5f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E5F8u;
        // 0x17e5fc: 0x241600c0  addiu       $s6, $zero, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e5f8) {
            ctx->pc = 0x17E604u;
            goto label_17e604;
        }
    }
    ctx->pc = 0x17E600u;
label_17e600:
    // 0x17e600: 0x24160300  addiu       $s6, $zero, 0x300
    ctx->pc = 0x17e600u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 768));
label_17e604:
    // 0x17e604: 0x8f9e8458  lw          $fp, -0x7BA8($gp)
    ctx->pc = 0x17e604u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935640)));
label_17e608:
    // 0x17e608: 0x1000007d  b           . + 4 + (0x7D << 2)
label_17e60c:
    if (ctx->pc == 0x17E60Cu) {
        ctx->pc = 0x17E60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E608u;
        // 0x17e60c: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17E610u;
        goto label_17e610;
    }
    ctx->pc = 0x17E608u;
    {
        const bool branch_taken_0x17e608 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E608u;
        // 0x17e60c: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e608) {
            ctx->pc = 0x17E800u;
            goto label_17e800;
        }
    }
    ctx->pc = 0x17E610u;
label_17e610:
    // 0x17e610: 0x0  nop
    ctx->pc = 0x17e610u;
    // NOP
label_17e614:
    // 0x17e614: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x17e614u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_17e618:
    // 0x17e618: 0x10600076  beqz        $v1, . + 4 + (0x76 << 2)
label_17e61c:
    if (ctx->pc == 0x17E61Cu) {
        ctx->pc = 0x17E620u;
        goto label_17e620;
    }
    ctx->pc = 0x17E618u;
    {
        const bool branch_taken_0x17e618 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x17e618) {
            ctx->pc = 0x17E7F4u;
            goto label_17e7f4;
        }
    }
    ctx->pc = 0x17E620u;
label_17e620:
    // 0x17e620: 0x7e1821  addu        $v1, $v1, $fp
    ctx->pc = 0x17e620u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 30)));
label_17e624:
    // 0x17e624: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x17e624u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_17e628:
    // 0x17e628: 0x10600072  beqz        $v1, . + 4 + (0x72 << 2)
label_17e62c:
    if (ctx->pc == 0x17E62Cu) {
        ctx->pc = 0x17E62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E628u;
        // 0x17e62c: 0x3c38821  addu        $s1, $fp, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17E630u;
        goto label_17e630;
    }
    ctx->pc = 0x17E628u;
    {
        const bool branch_taken_0x17e628 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E628u;
        // 0x17e62c: 0x3c38821  addu        $s1, $fp, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e628) {
            ctx->pc = 0x17E7F4u;
            goto label_17e7f4;
        }
    }
    ctx->pc = 0x17E630u;
label_17e630:
    // 0x17e630: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x17e630u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17e634:
    // 0x17e634: 0x8e370000  lw          $s7, 0x0($s1)
    ctx->pc = 0x17e634u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_17e638:
    // 0x17e638: 0x1000006b  b           . + 4 + (0x6B << 2)
label_17e63c:
    if (ctx->pc == 0x17E63Cu) {
        ctx->pc = 0x17E63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E638u;
        // 0x17e63c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17E640u;
        goto label_17e640;
    }
    ctx->pc = 0x17E638u;
    {
        const bool branch_taken_0x17e638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E638u;
        // 0x17e63c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e638) {
            ctx->pc = 0x17E7E8u;
            goto label_17e7e8;
        }
    }
    ctx->pc = 0x17E640u;
label_17e640:
    // 0x17e640: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x17e640u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_17e644:
    // 0x17e644: 0x8f848794  lw          $a0, -0x786C($gp)
    ctx->pc = 0x17e644u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936468)));
label_17e648:
    // 0x17e648: 0x3c39821  addu        $s3, $fp, $v1
    ctx->pc = 0x17e648u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 3)));
label_17e64c:
    // 0x17e64c: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x17e64cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_17e650:
    // 0x17e650: 0x761824  and         $v1, $v1, $s6
    ctx->pc = 0x17e650u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 22));
label_17e654:
    // 0x17e654: 0x10830062  beq         $a0, $v1, . + 4 + (0x62 << 2)
label_17e658:
    if (ctx->pc == 0x17E658u) {
        ctx->pc = 0x17E658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E654u;
        // 0x17e658: 0x26640010  addiu       $a0, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17E65Cu;
        goto label_17e65c;
    }
    ctx->pc = 0x17E654u;
    {
        const bool branch_taken_0x17e654 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x17E658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E654u;
        // 0x17e658: 0x26640010  addiu       $a0, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e654) {
            ctx->pc = 0x17E7E0u;
            goto label_17e7e0;
        }
    }
    ctx->pc = 0x17E65Cu;
label_17e65c:
    // 0x17e65c: 0xc05fc40  jal         func_17F100
label_17e660:
    if (ctx->pc == 0x17E660u) {
        ctx->pc = 0x17E660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E65Cu;
        // 0x17e660: 0x26650020  addiu       $a1, $s3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17E664u;
        goto label_17e664;
    }
    ctx->pc = 0x17E65Cu;
    SET_GPR_U32(ctx, 31, 0x17E664u);
    ctx->pc = 0x17E660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E65Cu;
    // 0x17e660: 0x26650020  addiu       $a1, $s3, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F100u;
    { ctx->pc = 0x17f100; return; }
    ctx->pc = 0x17E664u;
label_17e664:
    // 0x17e664: 0xc05fb88  jal         func_17EE20
label_17e668:
    if (ctx->pc == 0x17E668u) {
        ctx->pc = 0x17E66Cu;
        goto label_17e66c;
    }
    ctx->pc = 0x17E664u;
    SET_GPR_U32(ctx, 31, 0x17E66Cu);
    ctx->pc = 0x17EE20u;
    { ctx->pc = 0x17ee20; return; }
    ctx->pc = 0x17E66Cu;
label_17e66c:
    // 0x17e66c: 0xc05fb50  jal         func_17ED40
label_17e670:
    if (ctx->pc == 0x17E670u) {
        ctx->pc = 0x17E670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E66Cu;
        // 0x17e670: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17E674u;
        goto label_17e674;
    }
    ctx->pc = 0x17E66Cu;
    SET_GPR_U32(ctx, 31, 0x17E674u);
    ctx->pc = 0x17E670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E66Cu;
    // 0x17e670: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17ED40u;
    { ctx->pc = 0x17ed40; return; }
    ctx->pc = 0x17E674u;
label_17e674:
    // 0x17e674: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x17e674u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_17e678:
    // 0x17e678: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x17e678u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_17e67c:
    // 0x17e67c: 0xc05fbc0  jal         func_17EF00
label_17e680:
    if (ctx->pc == 0x17E680u) {
        ctx->pc = 0x17E680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E67Cu;
        // 0x17e680: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17E684u;
        goto label_17e684;
    }
    ctx->pc = 0x17E67Cu;
    SET_GPR_U32(ctx, 31, 0x17E684u);
    ctx->pc = 0x17E680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E67Cu;
    // 0x17e680: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17EF00u;
    { ctx->pc = 0x17ef00; return; }
    ctx->pc = 0x17E684u;
label_17e684:
    // 0x17e684: 0x1040004d  beqz        $v0, . + 4 + (0x4D << 2)
label_17e688:
    if (ctx->pc == 0x17E688u) {
        ctx->pc = 0x17E68Cu;
        goto label_17e68c;
    }
    ctx->pc = 0x17E684u;
    {
        const bool branch_taken_0x17e684 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17e684) {
            ctx->pc = 0x17E7BCu;
            goto label_17e7bc;
        }
    }
    ctx->pc = 0x17E68Cu;
label_17e68c:
    // 0x17e68c: 0x8f848780  lw          $a0, -0x7880($gp)
    ctx->pc = 0x17e68cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
label_17e690:
    // 0x17e690: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x17e690u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_17e694:
    // 0x17e694: 0x30434000  andi        $v1, $v0, 0x4000
    ctx->pc = 0x17e694u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
label_17e698:
    // 0x17e698: 0xac930000  sw          $s3, 0x0($a0)
    ctx->pc = 0x17e698u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 19));
label_17e69c:
    // 0x17e69c: 0x8f848780  lw          $a0, -0x7880($gp)
    ctx->pc = 0x17e69cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
label_17e6a0:
    // 0x17e6a0: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x17e6a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
label_17e6a4:
    // 0x17e6a4: 0x8f848780  lw          $a0, -0x7880($gp)
    ctx->pc = 0x17e6a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
label_17e6a8:
    // 0x17e6a8: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
label_17e6ac:
    if (ctx->pc == 0x17E6ACu) {
        ctx->pc = 0x17E6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E6A8u;
        // 0x17e6ac: 0xac850004  sw          $a1, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17E6B0u;
        goto label_17e6b0;
    }
    ctx->pc = 0x17E6A8u;
    {
        const bool branch_taken_0x17e6a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E6A8u;
        // 0x17e6ac: 0xac850004  sw          $a1, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e6a8) {
            ctx->pc = 0x17E6F0u;
            goto label_17e6f0;
        }
    }
    ctx->pc = 0x17E6B0u;
label_17e6b0:
    // 0x17e6b0: 0x8f848778  lw          $a0, -0x7888($gp)
    ctx->pc = 0x17e6b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936440)));
label_17e6b4:
    // 0x17e6b4: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
label_17e6b8:
    if (ctx->pc == 0x17E6B8u) {
        ctx->pc = 0x17E6BCu;
        goto label_17e6bc;
    }
    ctx->pc = 0x17E6B4u;
    {
        const bool branch_taken_0x17e6b4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x17e6b4) {
            ctx->pc = 0x17E6CCu;
            goto label_17e6cc;
        }
    }
    ctx->pc = 0x17E6BCu;
label_17e6bc:
    // 0x17e6bc: 0x8f838780  lw          $v1, -0x7880($gp)
    ctx->pc = 0x17e6bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
label_17e6c0:
    // 0x17e6c0: 0xaf838778  sw          $v1, -0x7888($gp)
    ctx->pc = 0x17e6c0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936440), GPR_U32(ctx, 3));
label_17e6c4:
    // 0x17e6c4: 0x10000019  b           . + 4 + (0x19 << 2)
label_17e6c8:
    if (ctx->pc == 0x17E6C8u) {
        ctx->pc = 0x17E6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E6C4u;
        // 0x17e6c8: 0xaf838774  sw          $v1, -0x788C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936436), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17E6CCu;
        goto label_17e6cc;
    }
    ctx->pc = 0x17E6C4u;
    {
        const bool branch_taken_0x17e6c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E6C4u;
        // 0x17e6c8: 0xaf838774  sw          $v1, -0x788C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936436), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e6c4) {
            ctx->pc = 0x17E72Cu;
            goto label_17e72c;
        }
    }
    ctx->pc = 0x17E6CCu;
label_17e6cc:
    // 0x17e6cc: 0x0  nop
    ctx->pc = 0x17e6ccu;
    // NOP
label_17e6d0:
    // 0x17e6d0: 0x8f838780  lw          $v1, -0x7880($gp)
    ctx->pc = 0x17e6d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
label_17e6d4:
    // 0x17e6d4: 0xac64000c  sw          $a0, 0xC($v1)
    ctx->pc = 0x17e6d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
label_17e6d8:
    // 0x17e6d8: 0x8f848780  lw          $a0, -0x7880($gp)
    ctx->pc = 0x17e6d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
label_17e6dc:
    // 0x17e6dc: 0x8f838778  lw          $v1, -0x7888($gp)
    ctx->pc = 0x17e6dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936440)));
label_17e6e0:
    // 0x17e6e0: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x17e6e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
label_17e6e4:
    // 0x17e6e4: 0x8f838780  lw          $v1, -0x7880($gp)
    ctx->pc = 0x17e6e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
label_17e6e8:
    // 0x17e6e8: 0x10000010  b           . + 4 + (0x10 << 2)
label_17e6ec:
    if (ctx->pc == 0x17E6ECu) {
        ctx->pc = 0x17E6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E6E8u;
        // 0x17e6ec: 0xaf838778  sw          $v1, -0x7888($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936440), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17E6F0u;
        goto label_17e6f0;
    }
    ctx->pc = 0x17E6E8u;
    {
        const bool branch_taken_0x17e6e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E6E8u;
        // 0x17e6ec: 0xaf838778  sw          $v1, -0x7888($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936440), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e6e8) {
            ctx->pc = 0x17E72Cu;
            goto label_17e72c;
        }
    }
    ctx->pc = 0x17E6F0u;
label_17e6f0:
    // 0x17e6f0: 0x8f84877c  lw          $a0, -0x7884($gp)
    ctx->pc = 0x17e6f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936444)));
label_17e6f4:
    // 0x17e6f4: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
label_17e6f8:
    if (ctx->pc == 0x17E6F8u) {
        ctx->pc = 0x17E6FCu;
        goto label_17e6fc;
    }
    ctx->pc = 0x17E6F4u;
    {
        const bool branch_taken_0x17e6f4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x17e6f4) {
            ctx->pc = 0x17E70Cu;
            goto label_17e70c;
        }
    }
    ctx->pc = 0x17E6FCu;
label_17e6fc:
    // 0x17e6fc: 0x8f838780  lw          $v1, -0x7880($gp)
    ctx->pc = 0x17e6fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
label_17e700:
    // 0x17e700: 0xaf83877c  sw          $v1, -0x7884($gp)
    ctx->pc = 0x17e700u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936444), GPR_U32(ctx, 3));
label_17e704:
    // 0x17e704: 0x10000009  b           . + 4 + (0x9 << 2)
label_17e708:
    if (ctx->pc == 0x17E708u) {
        ctx->pc = 0x17E708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E704u;
        // 0x17e708: 0xaf838770  sw          $v1, -0x7890($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936432), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17E70Cu;
        goto label_17e70c;
    }
    ctx->pc = 0x17E704u;
    {
        const bool branch_taken_0x17e704 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E704u;
        // 0x17e708: 0xaf838770  sw          $v1, -0x7890($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936432), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e704) {
            ctx->pc = 0x17E72Cu;
            goto label_17e72c;
        }
    }
    ctx->pc = 0x17E70Cu;
label_17e70c:
    // 0x17e70c: 0x0  nop
    ctx->pc = 0x17e70cu;
    // NOP
label_17e710:
    // 0x17e710: 0x8f838780  lw          $v1, -0x7880($gp)
    ctx->pc = 0x17e710u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
label_17e714:
    // 0x17e714: 0xac64000c  sw          $a0, 0xC($v1)
    ctx->pc = 0x17e714u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
label_17e718:
    // 0x17e718: 0x8f848780  lw          $a0, -0x7880($gp)
    ctx->pc = 0x17e718u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
label_17e71c:
    // 0x17e71c: 0x8f83877c  lw          $v1, -0x7884($gp)
    ctx->pc = 0x17e71cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936444)));
label_17e720:
    // 0x17e720: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x17e720u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
label_17e724:
    // 0x17e724: 0x8f838780  lw          $v1, -0x7880($gp)
    ctx->pc = 0x17e724u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
label_17e728:
    // 0x17e728: 0xaf83877c  sw          $v1, -0x7884($gp)
    ctx->pc = 0x17e728u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936444), GPR_U32(ctx, 3));
label_17e72c:
    // 0x17e72c: 0x0  nop
    ctx->pc = 0x17e72cu;
    // NOP
label_17e730:
    // 0x17e730: 0x8f838780  lw          $v1, -0x7880($gp)
    ctx->pc = 0x17e730u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
label_17e734:
    // 0x17e734: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x17e734u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_17e738:
    // 0x17e738: 0x34213fb1  ori         $at, $at, 0x3FB1
    ctx->pc = 0x17e738u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)16305);
label_17e73c:
    // 0x17e73c: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x17e73cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_17e740:
    // 0x17e740: 0xaf838780  sw          $v1, -0x7880($gp)
    ctx->pc = 0x17e740u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936448), GPR_U32(ctx, 3));
label_17e744:
    // 0x17e744: 0x8f838780  lw          $v1, -0x7880($gp)
    ctx->pc = 0x17e744u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
label_17e748:
    // 0x17e748: 0x61082b  sltu        $at, $v1, $at
    ctx->pc = 0x17e748u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
label_17e74c:
    // 0x17e74c: 0x1420001b  bnez        $at, . + 4 + (0x1B << 2)
label_17e750:
    if (ctx->pc == 0x17E750u) {
        ctx->pc = 0x17E754u;
        goto label_17e754;
    }
    ctx->pc = 0x17E74Cu;
    {
        const bool branch_taken_0x17e74c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x17e74c) {
            ctx->pc = 0x17E7BCu;
            goto label_17e7bc;
        }
    }
    ctx->pc = 0x17E754u;
label_17e754:
    // 0x17e754: 0x8f858774  lw          $a1, -0x788C($gp)
    ctx->pc = 0x17e754u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936436)));
label_17e758:
    // 0x17e758: 0xc05e71c  jal         func_179C70
label_17e75c:
    if (ctx->pc == 0x17E75Cu) {
        ctx->pc = 0x17E75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E758u;
        // 0x17e75c: 0x8f848770  lw          $a0, -0x7890($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936432)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17E760u;
        goto label_17e760;
    }
    ctx->pc = 0x17E758u;
    SET_GPR_U32(ctx, 31, 0x17E760u);
    ctx->pc = 0x17E75Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E758u;
    // 0x17e75c: 0x8f848770  lw          $a0, -0x7890($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936432)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x179C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179C70u, 0x17E758u, 0x17E760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E760u;
label_17e760:
    // 0x17e760: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x17e760u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
label_17e764:
    // 0x17e764: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x17e764u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
label_17e768:
    // 0x17e768: 0xaf838780  sw          $v1, -0x7880($gp)
    ctx->pc = 0x17e768u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936448), GPR_U32(ctx, 3));
label_17e76c:
    // 0x17e76c: 0x24849400  addiu       $a0, $a0, -0x6C00
    ctx->pc = 0x17e76cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939648));
label_17e770:
    // 0x17e770: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x17e770u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
label_17e774:
    // 0x17e774: 0xaf80877c  sw          $zero, -0x7884($gp)
    ctx->pc = 0x17e774u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936444), GPR_U32(ctx, 0));
label_17e778:
    // 0x17e778: 0xaf808778  sw          $zero, -0x7888($gp)
    ctx->pc = 0x17e778u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936440), GPR_U32(ctx, 0));
label_17e77c:
    // 0x17e77c: 0x246393c0  addiu       $v1, $v1, -0x6C40
    ctx->pc = 0x17e77cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939584));
label_17e780:
    // 0x17e780: 0xaf808770  sw          $zero, -0x7890($gp)
    ctx->pc = 0x17e780u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936432), GPR_U32(ctx, 0));
label_17e784:
    // 0x17e784: 0xaf808774  sw          $zero, -0x788C($gp)
    ctx->pc = 0x17e784u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936436), GPR_U32(ctx, 0));
label_17e788:
    // 0x17e788: 0xaf808790  sw          $zero, -0x7870($gp)
    ctx->pc = 0x17e788u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936464), GPR_U32(ctx, 0));
label_17e78c:
    // 0x17e78c: 0xaf80878c  sw          $zero, -0x7874($gp)
    ctx->pc = 0x17e78cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936460), GPR_U32(ctx, 0));
label_17e790:
    // 0x17e790: 0xaf808788  sw          $zero, -0x7878($gp)
    ctx->pc = 0x17e790u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936456), GPR_U32(ctx, 0));
label_17e794:
    // 0x17e794: 0xaf808784  sw          $zero, -0x787C($gp)
    ctx->pc = 0x17e794u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936452), GPR_U32(ctx, 0));
label_17e798:
    // 0x17e798: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x17e798u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_17e79c:
    // 0x17e79c: 0xd8820010  lqc2        $vf2, 0x10($a0)
    ctx->pc = 0x17e79cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 16)));
label_17e7a0:
    // 0x17e7a0: 0xd8830020  lqc2        $vf3, 0x20($a0)
    ctx->pc = 0x17e7a0u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 32)));
label_17e7a4:
    // 0x17e7a4: 0xd8840030  lqc2        $vf4, 0x30($a0)
    ctx->pc = 0x17e7a4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 48)));
label_17e7a8:
    // 0x17e7a8: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x17e7a8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_17e7ac:
    // 0x17e7ac: 0xd8660010  lqc2        $vf6, 0x10($v1)
    ctx->pc = 0x17e7acu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 16)));
label_17e7b0:
    // 0x17e7b0: 0xd8670020  lqc2        $vf7, 0x20($v1)
    ctx->pc = 0x17e7b0u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 32)));
label_17e7b4:
    // 0x17e7b4: 0xd8680030  lqc2        $vf8, 0x30($v1)
    ctx->pc = 0x17e7b4u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 48)));
label_17e7b8:
    // 0x17e7b8: 0x0  nop
    ctx->pc = 0x17e7b8u;
    // NOP
label_17e7bc:
    // 0x17e7bc: 0x0  nop
    ctx->pc = 0x17e7bcu;
    // NOP
label_17e7c0:
    // 0x17e7c0: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x17e7c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_17e7c4:
    // 0x17e7c4: 0x2c02027  not         $a0, $s6
    ctx->pc = 0x17e7c4u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 22) | GPR_U64(ctx, 0)));
label_17e7c8:
    // 0x17e7c8: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x17e7c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_17e7cc:
    // 0x17e7cc: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x17e7ccu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_17e7d0:
    // 0x17e7d0: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x17e7d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_17e7d4:
    // 0x17e7d4: 0x8f838794  lw          $v1, -0x786C($gp)
    ctx->pc = 0x17e7d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936468)));
label_17e7d8:
    // 0x17e7d8: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x17e7d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_17e7dc:
    // 0x17e7dc: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x17e7dcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_17e7e0:
    // 0x17e7e0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x17e7e0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_17e7e4:
    // 0x17e7e4: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x17e7e4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_17e7e8:
    // 0x17e7e8: 0x257182b  sltu        $v1, $s2, $s7
    ctx->pc = 0x17e7e8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 23)) ? 1 : 0);
label_17e7ec:
    // 0x17e7ec: 0x1460ff94  bnez        $v1, . + 4 + (-0x6C << 2)
label_17e7f0:
    if (ctx->pc == 0x17E7F0u) {
        ctx->pc = 0x17E7F4u;
        goto label_17e7f4;
    }
    ctx->pc = 0x17E7ECu;
    {
        const bool branch_taken_0x17e7ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x17e7ec) {
            ctx->pc = 0x17E640u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17e640;
        }
    }
    ctx->pc = 0x17E7F4u;
label_17e7f4:
    // 0x17e7f4: 0x0  nop
    ctx->pc = 0x17e7f4u;
    // NOP
label_17e7f8:
    // 0x17e7f8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x17e7f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_17e7fc:
    // 0x17e7fc: 0x26940004  addiu       $s4, $s4, 0x4
    ctx->pc = 0x17e7fcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
label_17e800:
    // 0x17e800: 0x8fa300ac  lw          $v1, 0xAC($sp)
    ctx->pc = 0x17e800u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_17e804:
    // 0x17e804: 0x70082a  slt         $at, $v1, $s0
    ctx->pc = 0x17e804u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_17e808:
    // 0x17e808: 0x1020ff81  beqz        $at, . + 4 + (-0x7F << 2)
label_17e80c:
    if (ctx->pc == 0x17E80Cu) {
        ctx->pc = 0x17E810u;
        goto label_17e810;
    }
    ctx->pc = 0x17E808u;
    {
        const bool branch_taken_0x17e808 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x17e808) {
            ctx->pc = 0x17E610u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17e610;
        }
    }
    ctx->pc = 0x17E810u;
label_17e810:
    // 0x17e810: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x17e810u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_17e814:
    // 0x17e814: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x17e814u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_17e818:
    // 0x17e818: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x17e818u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_17e81c:
    // 0x17e81c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x17e81cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_17e820:
    // 0x17e820: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x17e820u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_17e824:
    // 0x17e824: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x17e824u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_17e828:
    // 0x17e828: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x17e828u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_17e82c:
    // 0x17e82c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x17e82cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_17e830:
    // 0x17e830: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17e830u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_17e834:
    // 0x17e834: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17e834u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_17e838:
    // 0x17e838: 0x3e00008  jr          $ra
label_17e83c:
    if (ctx->pc == 0x17E83Cu) {
        ctx->pc = 0x17E83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E838u;
        // 0x17e83c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17E840u;
        goto label_17e840;
    }
    ctx->pc = 0x17E838u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17E83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E838u;
        // 0x17e83c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17E838u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17E840u;
label_17e840:
    // 0x17e840: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x17e840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_17e844:
    // 0x17e844: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x17e844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_17e848:
    // 0x17e848: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x17e848u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_17e84c:
    // 0x17e84c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x17e84cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_17e850:
    // 0x17e850: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x17e850u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_17e854:
    // 0x17e854: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x17e854u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_17e858:
    // 0x17e858: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x17e858u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_17e85c:
    // 0x17e85c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x17e85cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_17e860:
    // 0x17e860: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x17e860u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_17e864:
    // 0x17e864: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x17e864u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_17e868:
    // 0x17e868: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17e868u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_17e86c:
    // 0x17e86c: 0x16800003  bnez        $s4, . + 4 + (0x3 << 2)
label_17e870:
    if (ctx->pc == 0x17E870u) {
        ctx->pc = 0x17E870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E86Cu;
        // 0x17e870: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17E874u;
        goto label_17e874;
    }
    ctx->pc = 0x17E86Cu;
    {
        const bool branch_taken_0x17e86c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x17E870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E86Cu;
        // 0x17e870: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e86c) {
            ctx->pc = 0x17E87Cu;
            goto label_17e87c;
        }
    }
    ctx->pc = 0x17E874u;
label_17e874:
    // 0x17e874: 0x10000002  b           . + 4 + (0x2 << 2)
label_17e878:
    if (ctx->pc == 0x17E878u) {
        ctx->pc = 0x17E878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E874u;
        // 0x17e878: 0x241200c0  addiu       $s2, $zero, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17E87Cu;
        goto label_17e87c;
    }
    ctx->pc = 0x17E874u;
    {
        const bool branch_taken_0x17e874 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E874u;
        // 0x17e878: 0x241200c0  addiu       $s2, $zero, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e874) {
            ctx->pc = 0x17E880u;
            goto label_17e880;
        }
    }
    ctx->pc = 0x17E87Cu;
label_17e87c:
    // 0x17e87c: 0x24120300  addiu       $s2, $zero, 0x300
    ctx->pc = 0x17e87cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 768));
label_17e880:
    // 0x17e880: 0x16a00005  bnez        $s5, . + 4 + (0x5 << 2)
label_17e884:
    if (ctx->pc == 0x17E884u) {
        ctx->pc = 0x17E888u;
        goto label_17e888;
    }
    ctx->pc = 0x17E880u;
    {
        const bool branch_taken_0x17e880 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x17e880) {
            ctx->pc = 0x17E898u;
            goto label_17e898;
        }
    }
    ctx->pc = 0x17E888u;
label_17e888:
    // 0x17e888: 0x8f97879c  lw          $s7, -0x7864($gp)
    ctx->pc = 0x17e888u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936476)));
label_17e88c:
    // 0x17e88c: 0x3c100037  lui         $s0, 0x37
    ctx->pc = 0x17e88cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)55 << 16));
label_17e890:
    // 0x17e890: 0x10000004  b           . + 4 + (0x4 << 2)
label_17e894:
    if (ctx->pc == 0x17E894u) {
        ctx->pc = 0x17E894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E890u;
        // 0x17e894: 0x261092c0  addiu       $s0, $s0, -0x6D40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294939328));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17E898u;
        goto label_17e898;
    }
    ctx->pc = 0x17E890u;
    {
        const bool branch_taken_0x17e890 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E890u;
        // 0x17e894: 0x261092c0  addiu       $s0, $s0, -0x6D40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294939328));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e890) {
            ctx->pc = 0x17E8A4u;
            goto label_17e8a4;
        }
    }
    ctx->pc = 0x17E898u;
label_17e898:
    // 0x17e898: 0x8f978798  lw          $s7, -0x7868($gp)
    ctx->pc = 0x17e898u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936472)));
label_17e89c:
    // 0x17e89c: 0x3c100037  lui         $s0, 0x37
    ctx->pc = 0x17e89cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)55 << 16));
label_17e8a0:
    // 0x17e8a0: 0x261091c0  addiu       $s0, $s0, -0x6E40
    ctx->pc = 0x17e8a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294939072));
label_17e8a4:
    // 0x17e8a4: 0x10000118  b           . + 4 + (0x118 << 2)
label_17e8a8:
    if (ctx->pc == 0x17E8A8u) {
        ctx->pc = 0x17E8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E8A4u;
        // 0x17e8a8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17E8ACu;
        goto label_17e8ac;
    }
    ctx->pc = 0x17E8A4u;
    {
        const bool branch_taken_0x17e8a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E8A4u;
        // 0x17e8a8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e8a4) {
            ctx->pc = 0x17ED08u;
            { ctx->pc = 0x17ed08; return; }
        }
    }
    ctx->pc = 0x17E8ACu;
label_17e8ac:
    // 0x17e8ac: 0x12a00006  beqz        $s5, . + 4 + (0x6 << 2)
label_17e8b0:
    if (ctx->pc == 0x17E8B0u) {
        ctx->pc = 0x17E8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E8ACu;
        // 0x17e8b0: 0x8e130000  lw          $s3, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17E8B4u;
        goto label_17e8b4;
    }
    ctx->pc = 0x17E8ACu;
    {
        const bool branch_taken_0x17e8ac = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E8ACu;
        // 0x17e8b0: 0x8e130000  lw          $s3, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e8ac) {
            ctx->pc = 0x17E8C8u;
            goto label_17e8c8;
        }
    }
    ctx->pc = 0x17E8B4u;
label_17e8b4:
    // 0x17e8b4: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x17e8b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_17e8b8:
    // 0x17e8b8: 0x14740111  bne         $v1, $s4, . + 4 + (0x111 << 2)
label_17e8bc:
    if (ctx->pc == 0x17E8BCu) {
        ctx->pc = 0x17E8C0u;
        goto label_17e8c0;
    }
    ctx->pc = 0x17E8B8u;
    {
        const bool branch_taken_0x17e8b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 20));
        if (branch_taken_0x17e8b8) {
            ctx->pc = 0x17ED00u;
            { ctx->pc = 0x17ed00; return; }
        }
    }
    ctx->pc = 0x17E8C0u;
label_17e8c0:
    // 0x17e8c0: 0x10000006  b           . + 4 + (0x6 << 2)
label_17e8c4:
    if (ctx->pc == 0x17E8C4u) {
        ctx->pc = 0x17E8C8u;
        goto label_17e8c8;
    }
    ctx->pc = 0x17E8C0u;
    {
        const bool branch_taken_0x17e8c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17e8c0) {
            ctx->pc = 0x17E8DCu;
            goto label_17e8dc;
        }
    }
    ctx->pc = 0x17E8C8u;
label_17e8c8:
    // 0x17e8c8: 0x8e630090  lw          $v1, 0x90($s3)
    ctx->pc = 0x17e8c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 144)));
label_17e8cc:
    // 0x17e8cc: 0x8f848794  lw          $a0, -0x786C($gp)
    ctx->pc = 0x17e8ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936468)));
label_17e8d0:
    // 0x17e8d0: 0x721824  and         $v1, $v1, $s2
    ctx->pc = 0x17e8d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 18));
label_17e8d4:
    // 0x17e8d4: 0x1083010a  beq         $a0, $v1, . + 4 + (0x10A << 2)
label_17e8d8:
    if (ctx->pc == 0x17E8D8u) {
        ctx->pc = 0x17E8DCu;
        goto label_17e8dc;
    }
    ctx->pc = 0x17E8D4u;
    {
        const bool branch_taken_0x17e8d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x17e8d4) {
            ctx->pc = 0x17ED00u;
            { ctx->pc = 0x17ed00; return; }
        }
    }
    ctx->pc = 0x17E8DCu;
label_17e8dc:
    // 0x17e8dc: 0x0  nop
    ctx->pc = 0x17e8dcu;
    // NOP
label_17e8e0:
    // 0x17e8e0: 0x8e630090  lw          $v1, 0x90($s3)
    ctx->pc = 0x17e8e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 144)));
label_17e8e4:
    // 0x17e8e4: 0x30631000  andi        $v1, $v1, 0x1000
    ctx->pc = 0x17e8e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4096);
label_17e8e8:
    // 0x17e8e8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_17e8ec:
    if (ctx->pc == 0x17E8ECu) {
        ctx->pc = 0x17E8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E8E8u;
        // 0x17e8ec: 0x24044000  addiu       $a0, $zero, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17E8F0u;
        goto label_17e8f0;
    }
    ctx->pc = 0x17E8E8u;
    {
        const bool branch_taken_0x17e8e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E8E8u;
        // 0x17e8ec: 0x24044000  addiu       $a0, $zero, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e8e8) {
            ctx->pc = 0x17E8F8u;
            goto label_17e8f8;
        }
    }
    ctx->pc = 0x17E8F0u;
label_17e8f0:
    // 0x17e8f0: 0x1000000d  b           . + 4 + (0xD << 2)
label_17e8f4:
    if (ctx->pc == 0x17E8F4u) {
        ctx->pc = 0x17E8F8u;
        goto label_17e8f8;
    }
    ctx->pc = 0x17E8F0u;
    {
        const bool branch_taken_0x17e8f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17e8f0) {
            ctx->pc = 0x17E928u;
            goto label_17e928;
        }
    }
    ctx->pc = 0x17E8F8u;
label_17e8f8:
    // 0x17e8f8: 0x26640060  addiu       $a0, $s3, 0x60
    ctx->pc = 0x17e8f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 96));
label_17e8fc:
    // 0x17e8fc: 0xc05fc40  jal         func_17F100
label_17e900:
    if (ctx->pc == 0x17E900u) {
        ctx->pc = 0x17E900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E8FCu;
        // 0x17e900: 0x26650070  addiu       $a1, $s3, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17E904u;
        goto label_17e904;
    }
    ctx->pc = 0x17E8FCu;
    SET_GPR_U32(ctx, 31, 0x17E904u);
    ctx->pc = 0x17E900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E8FCu;
    // 0x17e900: 0x26650070  addiu       $a1, $s3, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F100u;
    { ctx->pc = 0x17f100; return; }
    ctx->pc = 0x17E904u;
label_17e904:
    // 0x17e904: 0xc05fb88  jal         func_17EE20
label_17e908:
    if (ctx->pc == 0x17E908u) {
        ctx->pc = 0x17E90Cu;
        goto label_17e90c;
    }
    ctx->pc = 0x17E904u;
    SET_GPR_U32(ctx, 31, 0x17E90Cu);
    ctx->pc = 0x17EE20u;
    { ctx->pc = 0x17ee20; return; }
    ctx->pc = 0x17E90Cu;
label_17e90c:
    // 0x17e90c: 0xc05fb50  jal         func_17ED40
label_17e910:
    if (ctx->pc == 0x17E910u) {
        ctx->pc = 0x17E910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E90Cu;
        // 0x17e910: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17E914u;
        goto label_17e914;
    }
    ctx->pc = 0x17E90Cu;
    SET_GPR_U32(ctx, 31, 0x17E914u);
    ctx->pc = 0x17E910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E90Cu;
    // 0x17e910: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17ED40u;
    { ctx->pc = 0x17ed40; return; }
    ctx->pc = 0x17E914u;
label_17e914:
    // 0x17e914: 0x8e660090  lw          $a2, 0x90($s3)
    ctx->pc = 0x17e914u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 144)));
label_17e918:
    // 0x17e918: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x17e918u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_17e91c:
    // 0x17e91c: 0xc05fbc0  jal         func_17EF00
label_17e920:
    if (ctx->pc == 0x17E920u) {
        ctx->pc = 0x17E920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E91Cu;
        // 0x17e920: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17E924u;
        goto label_17e924;
    }
    ctx->pc = 0x17E91Cu;
    SET_GPR_U32(ctx, 31, 0x17E924u);
    ctx->pc = 0x17E920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E91Cu;
    // 0x17e920: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17EF00u;
    { ctx->pc = 0x17ef00; return; }
    ctx->pc = 0x17E924u;
label_17e924:
    // 0x17e924: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x17e924u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_17e928:
    // 0x17e928: 0x108000e5  beqz        $a0, . + 4 + (0xE5 << 2)
label_17e92c:
    if (ctx->pc == 0x17E92Cu) {
        ctx->pc = 0x17E930u;
        goto label_17e930;
    }
    ctx->pc = 0x17E928u;
    {
        const bool branch_taken_0x17e928 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x17e928) {
            ctx->pc = 0x17ECC0u;
            { ctx->pc = 0x17ecc0; return; }
        }
    }
    ctx->pc = 0x17E930u;
label_17e930:
    // 0x17e930: 0x8e630090  lw          $v1, 0x90($s3)
    ctx->pc = 0x17e930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 144)));
label_17e934:
    // 0x17e934: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x17e934u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_17e938:
    // 0x17e938: 0xae630090  sw          $v1, 0x90($s3)
    ctx->pc = 0x17e938u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 144), GPR_U32(ctx, 3));
label_17e93c:
    // 0x17e93c: 0x8e630090  lw          $v1, 0x90($s3)
    ctx->pc = 0x17e93cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 144)));
label_17e940:
    // 0x17e940: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x17e940u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
label_17e944:
    // 0x17e944: 0x146000e6  bnez        $v1, . + 4 + (0xE6 << 2)
label_17e948:
    if (ctx->pc == 0x17E948u) {
        ctx->pc = 0x17E94Cu;
        goto label_17e94c;
    }
    ctx->pc = 0x17E944u;
    {
        const bool branch_taken_0x17e944 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x17e944) {
            ctx->pc = 0x17ECE0u;
            { ctx->pc = 0x17ece0; return; }
        }
    }
    ctx->pc = 0x17E94Cu;
label_17e94c:
    // 0x17e94c: 0x8f838780  lw          $v1, -0x7880($gp)
    ctx->pc = 0x17e94cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
label_17e950:
    // 0x17e950: 0xac730000  sw          $s3, 0x0($v1)
    ctx->pc = 0x17e950u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 19));
label_17e954:
    // 0x17e954: 0x8f838780  lw          $v1, -0x7880($gp)
    ctx->pc = 0x17e954u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
label_17e958:
    // 0x17e958: 0x12a00003  beqz        $s5, . + 4 + (0x3 << 2)
label_17e95c:
    if (ctx->pc == 0x17E95Cu) {
        ctx->pc = 0x17E95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E958u;
        // 0x17e95c: 0xac600008  sw          $zero, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17E960u;
        goto label_17e960;
    }
    ctx->pc = 0x17E958u;
    {
        const bool branch_taken_0x17e958 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E958u;
        // 0x17e95c: 0xac600008  sw          $zero, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e958) {
            ctx->pc = 0x17E968u;
            goto label_17e968;
        }
    }
    ctx->pc = 0x17E960u;
label_17e960:
    // 0x17e960: 0x10000002  b           . + 4 + (0x2 << 2)
label_17e964:
    if (ctx->pc == 0x17E964u) {
        ctx->pc = 0x17E964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E960u;
        // 0x17e964: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17E968u;
        goto label_17e968;
    }
    ctx->pc = 0x17E960u;
    {
        const bool branch_taken_0x17e960 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E960u;
        // 0x17e964: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e960) {
            ctx->pc = 0x17E96Cu;
            goto label_17e96c;
        }
    }
    ctx->pc = 0x17E968u;
label_17e968:
    // 0x17e968: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17e968u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17e96c:
    // 0x17e96c: 0x0  nop
    ctx->pc = 0x17e96cu;
    // NOP
label_17e970:
    // 0x17e970: 0x30834000  andi        $v1, $a0, 0x4000
    ctx->pc = 0x17e970u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16384);
label_17e974:
    // 0x17e974: 0x8f848780  lw          $a0, -0x7880($gp)
    ctx->pc = 0x17e974u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
label_17e978:
    // 0x17e978: 0x10600057  beqz        $v1, . + 4 + (0x57 << 2)
label_17e97c:
    if (ctx->pc == 0x17E97Cu) {
        ctx->pc = 0x17E97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E978u;
        // 0x17e97c: 0xac850004  sw          $a1, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17E980u;
        goto label_17e980;
    }
    ctx->pc = 0x17E978u;
    {
        const bool branch_taken_0x17e978 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E978u;
        // 0x17e97c: 0xac850004  sw          $a1, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e978) {
            ctx->pc = 0x17EAD8u;
            goto label_17ead8;
        }
    }
    ctx->pc = 0x17E980u;
label_17e980:
    // 0x17e980: 0x8f848778  lw          $a0, -0x7888($gp)
    ctx->pc = 0x17e980u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936440)));
label_17e984:
    // 0x17e984: 0x8f838780  lw          $v1, -0x7880($gp)
    ctx->pc = 0x17e984u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
label_17e988:
    // 0x17e988: 0xac64000c  sw          $a0, 0xC($v1)
    ctx->pc = 0x17e988u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
label_17e98c:
    // 0x17e98c: 0x8f838778  lw          $v1, -0x7888($gp)
    ctx->pc = 0x17e98cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936440)));
label_17e990:
    // 0x17e990: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
label_17e994:
    if (ctx->pc == 0x17E994u) {
        ctx->pc = 0x17E998u;
        goto label_17e998;
    }
    ctx->pc = 0x17E990u;
    {
        const bool branch_taken_0x17e990 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x17e990) {
            ctx->pc = 0x17E9A8u;
            goto label_17e9a8;
        }
    }
    ctx->pc = 0x17E998u;
label_17e998:
    // 0x17e998: 0x8f838780  lw          $v1, -0x7880($gp)
    ctx->pc = 0x17e998u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
label_17e99c:
    // 0x17e99c: 0xaf838778  sw          $v1, -0x7888($gp)
    ctx->pc = 0x17e99cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936440), GPR_U32(ctx, 3));
label_17e9a0:
    // 0x17e9a0: 0x100000a2  b           . + 4 + (0xA2 << 2)
label_17e9a4:
    if (ctx->pc == 0x17E9A4u) {
        ctx->pc = 0x17E9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E9A0u;
        // 0x17e9a4: 0xaf838774  sw          $v1, -0x788C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936436), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17E9A8u;
        goto label_17e9a8;
    }
    ctx->pc = 0x17E9A0u;
    {
        const bool branch_taken_0x17e9a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E9A0u;
        // 0x17e9a4: 0xaf838774  sw          $v1, -0x788C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936436), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e9a0) {
            ctx->pc = 0x17EC2Cu;
            { ctx->pc = 0x17ec2c; return; }
        }
    }
    ctx->pc = 0x17E9A8u;
label_17e9a8:
    // 0x17e9a8: 0x12a00003  beqz        $s5, . + 4 + (0x3 << 2)
label_17e9ac:
    if (ctx->pc == 0x17E9ACu) {
        ctx->pc = 0x17E9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E9A8u;
        // 0x17e9ac: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17E9B0u;
        goto label_17e9b0;
    }
    ctx->pc = 0x17E9A8u;
    {
        const bool branch_taken_0x17e9a8 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E9A8u;
        // 0x17e9ac: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e9a8) {
            ctx->pc = 0x17E9B8u;
            goto label_17e9b8;
        }
    }
    ctx->pc = 0x17E9B0u;
label_17e9b0:
    // 0x17e9b0: 0x10000002  b           . + 4 + (0x2 << 2)
label_17e9b4:
    if (ctx->pc == 0x17E9B4u) {
        ctx->pc = 0x17E9B8u;
        goto label_17e9b8;
    }
    ctx->pc = 0x17E9B0u;
    {
        const bool branch_taken_0x17e9b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17e9b0) {
            ctx->pc = 0x17E9BCu;
            goto label_17e9bc;
        }
    }
    ctx->pc = 0x17E9B8u;
label_17e9b8:
    // 0x17e9b8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x17e9b8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17e9bc:
    // 0x17e9bc: 0x0  nop
    ctx->pc = 0x17e9bcu;
    // NOP
label_17e9c0:
    // 0x17e9c0: 0x1460003e  bnez        $v1, . + 4 + (0x3E << 2)
label_17e9c4:
    if (ctx->pc == 0x17E9C4u) {
        ctx->pc = 0x17E9C8u;
        goto label_17e9c8;
    }
    ctx->pc = 0x17E9C0u;
    {
        const bool branch_taken_0x17e9c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x17e9c0) {
            ctx->pc = 0x17EABCu;
            goto label_17eabc;
        }
    }
    ctx->pc = 0x17E9C8u;
label_17e9c8:
    // 0x17e9c8: 0x8f84878c  lw          $a0, -0x7874($gp)
    ctx->pc = 0x17e9c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936460)));
label_17e9cc:
    // 0x17e9cc: 0x9663008c  lhu         $v1, 0x8C($s3)
    ctx->pc = 0x17e9ccu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 140)));
label_17e9d0:
    // 0x17e9d0: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x17e9d0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_17e9d4:
    // 0x17e9d4: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
label_17e9d8:
    if (ctx->pc == 0x17E9D8u) {
        ctx->pc = 0x17E9DCu;
        goto label_17e9dc;
    }
    ctx->pc = 0x17E9D4u;
    {
        const bool branch_taken_0x17e9d4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x17e9d4) {
            ctx->pc = 0x17E9E4u;
            goto label_17e9e4;
        }
    }
    ctx->pc = 0x17E9DCu;
label_17e9dc:
    // 0x17e9dc: 0x10000004  b           . + 4 + (0x4 << 2)
label_17e9e0:
    if (ctx->pc == 0x17E9E0u) {
        ctx->pc = 0x17E9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E9DCu;
        // 0x17e9e0: 0x8f838784  lw          $v1, -0x787C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936452)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17E9E4u;
        goto label_17e9e4;
    }
    ctx->pc = 0x17E9DCu;
    {
        const bool branch_taken_0x17e9dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E9DCu;
        // 0x17e9e0: 0x8f838784  lw          $v1, -0x787C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936452)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e9dc) {
            ctx->pc = 0x17E9F0u;
            goto label_17e9f0;
        }
    }
    ctx->pc = 0x17E9E4u;
label_17e9e4:
    // 0x17e9e4: 0x0  nop
    ctx->pc = 0x17e9e4u;
    // NOP
label_17e9e8:
    // 0x17e9e8: 0x8f838774  lw          $v1, -0x788C($gp)
    ctx->pc = 0x17e9e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936436)));
label_17e9ec:
    // 0x17e9ec: 0x0  nop
    ctx->pc = 0x17e9ecu;
    // NOP
label_17e9f0:
    // 0x17e9f0: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
label_17e9f4:
    if (ctx->pc == 0x17E9F4u) {
        ctx->pc = 0x17E9F8u;
        goto label_17e9f8;
    }
    ctx->pc = 0x17E9F0u;
    {
        const bool branch_taken_0x17e9f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x17e9f0) {
            ctx->pc = 0x17EA18u;
            goto label_17ea18;
        }
    }
    ctx->pc = 0x17E9F8u;
label_17e9f8:
    // 0x17e9f8: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x17e9f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_17e9fc:
    // 0x17e9fc: 0x9664008c  lhu         $a0, 0x8C($s3)
    ctx->pc = 0x17e9fcu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 140)));
label_17ea00:
    // 0x17ea00: 0x94a5008c  lhu         $a1, 0x8C($a1)
    ctx->pc = 0x17ea00u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 140)));
label_17ea04:
    // 0x17ea04: 0xa4082a  slt         $at, $a1, $a0
    ctx->pc = 0x17ea04u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_17ea08:
    // 0x17ea08: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_17ea0c:
    if (ctx->pc == 0x17EA0Cu) {
        ctx->pc = 0x17EA10u;
        goto label_17ea10;
    }
    ctx->pc = 0x17EA08u;
    {
        const bool branch_taken_0x17ea08 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x17ea08) {
            ctx->pc = 0x17EA18u;
            goto label_17ea18;
        }
    }
    ctx->pc = 0x17EA10u;
label_17ea10:
    // 0x17ea10: 0x1000fff7  b           . + 4 + (-0x9 << 2)
label_17ea14:
    if (ctx->pc == 0x17EA14u) {
        ctx->pc = 0x17EA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EA10u;
        // 0x17ea14: 0x8c630008  lw          $v1, 0x8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17EA18u;
        goto label_17ea18;
    }
    ctx->pc = 0x17EA10u;
    {
        const bool branch_taken_0x17ea10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17EA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EA10u;
        // 0x17ea14: 0x8c630008  lw          $v1, 0x8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ea10) {
            ctx->pc = 0x17E9F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17e9f0;
        }
    }
    ctx->pc = 0x17EA18u;
label_17ea18:
    // 0x17ea18: 0x8f848774  lw          $a0, -0x788C($gp)
    ctx->pc = 0x17ea18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936436)));
label_17ea1c:
    // 0x17ea1c: 0x1464000b  bne         $v1, $a0, . + 4 + (0xB << 2)
label_17ea20:
    if (ctx->pc == 0x17EA20u) {
        ctx->pc = 0x17EA24u;
        goto label_17ea24;
    }
    ctx->pc = 0x17EA1Cu;
    {
        const bool branch_taken_0x17ea1c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x17ea1c) {
            ctx->pc = 0x17EA4Cu;
            goto label_17ea4c;
        }
    }
    ctx->pc = 0x17EA24u;
label_17ea24:
    // 0x17ea24: 0x8f838780  lw          $v1, -0x7880($gp)
    ctx->pc = 0x17ea24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
label_17ea28:
    // 0x17ea28: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x17ea28u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
label_17ea2c:
    // 0x17ea2c: 0x8f838780  lw          $v1, -0x7880($gp)
    ctx->pc = 0x17ea2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
label_17ea30:
    // 0x17ea30: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x17ea30u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
label_17ea34:
    // 0x17ea34: 0x8f848780  lw          $a0, -0x7880($gp)
    ctx->pc = 0x17ea34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
label_17ea38:
    // 0x17ea38: 0x8f838774  lw          $v1, -0x788C($gp)
    ctx->pc = 0x17ea38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936436)));
label_17ea3c:
    // 0x17ea3c: 0xac64000c  sw          $a0, 0xC($v1)
    ctx->pc = 0x17ea3cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
label_17ea40:
    // 0x17ea40: 0x8f838780  lw          $v1, -0x7880($gp)
    ctx->pc = 0x17ea40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
label_17ea44:
    // 0x17ea44: 0x10000018  b           . + 4 + (0x18 << 2)
label_17ea48:
    if (ctx->pc == 0x17EA48u) {
        ctx->pc = 0x17EA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EA44u;
        // 0x17ea48: 0xaf838774  sw          $v1, -0x788C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936436), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17EA4Cu;
        goto label_17ea4c;
    }
    ctx->pc = 0x17EA44u;
    {
        const bool branch_taken_0x17ea44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17EA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EA44u;
        // 0x17ea48: 0xaf838774  sw          $v1, -0x788C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936436), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ea44) {
            ctx->pc = 0x17EAA8u;
            goto label_17eaa8;
        }
    }
    ctx->pc = 0x17EA4Cu;
label_17ea4c:
    // 0x17ea4c: 0x0  nop
    ctx->pc = 0x17ea4cu;
    // NOP
label_17ea50:
    // 0x17ea50: 0x8f848778  lw          $a0, -0x7888($gp)
    ctx->pc = 0x17ea50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936440)));
label_17ea54:
    // 0x17ea54: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
label_17ea58:
    if (ctx->pc == 0x17EA58u) {
        ctx->pc = 0x17EA5Cu;
        goto label_17ea5c;
    }
    ctx->pc = 0x17EA54u;
    {
        const bool branch_taken_0x17ea54 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x17ea54) {
            ctx->pc = 0x17EA64u;
            goto label_17ea64;
        }
    }
    ctx->pc = 0x17EA5Cu;
label_17ea5c:
    // 0x17ea5c: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
label_17ea60:
    if (ctx->pc == 0x17EA60u) {
        ctx->pc = 0x17EA64u;
        goto label_17ea64;
    }
    ctx->pc = 0x17EA5Cu;
    {
        const bool branch_taken_0x17ea5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x17ea5c) {
            ctx->pc = 0x17EA80u;
            goto label_17ea80;
        }
    }
    ctx->pc = 0x17EA64u;
label_17ea64:
    // 0x17ea64: 0x0  nop
    ctx->pc = 0x17ea64u;
    // NOP
label_17ea68:
    // 0x17ea68: 0x8f848780  lw          $a0, -0x7880($gp)
    ctx->pc = 0x17ea68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
label_17ea6c:
    // 0x17ea6c: 0x8f838778  lw          $v1, -0x7888($gp)
    ctx->pc = 0x17ea6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936440)));
label_17ea70:
    // 0x17ea70: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x17ea70u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
label_17ea74:
    // 0x17ea74: 0x8f838780  lw          $v1, -0x7880($gp)
    ctx->pc = 0x17ea74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
label_17ea78:
    // 0x17ea78: 0x1000000b  b           . + 4 + (0xB << 2)
label_17ea7c:
    if (ctx->pc == 0x17EA7Cu) {
        ctx->pc = 0x17EA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EA78u;
        // 0x17ea7c: 0xaf838778  sw          $v1, -0x7888($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936440), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17EA80u;
        goto label_17ea80;
    }
    ctx->pc = 0x17EA78u;
    {
        const bool branch_taken_0x17ea78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17EA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EA78u;
        // 0x17ea7c: 0xaf838778  sw          $v1, -0x7888($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936440), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ea78) {
            ctx->pc = 0x17EAA8u;
            goto label_17eaa8;
        }
    }
    ctx->pc = 0x17EA80u;
label_17ea80:
    // 0x17ea80: 0x8f848780  lw          $a0, -0x7880($gp)
    ctx->pc = 0x17ea80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
label_17ea84:
    // 0x17ea84: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x17ea84u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
label_17ea88:
    // 0x17ea88: 0x8c65000c  lw          $a1, 0xC($v1)
    ctx->pc = 0x17ea88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_17ea8c:
    // 0x17ea8c: 0x8f848780  lw          $a0, -0x7880($gp)
    ctx->pc = 0x17ea8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
label_17ea90:
    // 0x17ea90: 0xac64000c  sw          $a0, 0xC($v1)
    ctx->pc = 0x17ea90u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
label_17ea94:
    // 0x17ea94: 0x8f838780  lw          $v1, -0x7880($gp)
    ctx->pc = 0x17ea94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
label_17ea98:
    // 0x17ea98: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
label_17ea9c:
    if (ctx->pc == 0x17EA9Cu) {
        ctx->pc = 0x17EA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EA98u;
        // 0x17ea9c: 0xac65000c  sw          $a1, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17EAA0u;
        goto label_17eaa0;
    }
    ctx->pc = 0x17EA98u;
    {
        const bool branch_taken_0x17ea98 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x17EA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EA98u;
        // 0x17ea9c: 0xac65000c  sw          $a1, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ea98) {
            ctx->pc = 0x17EAA8u;
            goto label_17eaa8;
        }
    }
    ctx->pc = 0x17EAA0u;
label_17eaa0:
    // 0x17eaa0: 0x8f838780  lw          $v1, -0x7880($gp)
    ctx->pc = 0x17eaa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
label_17eaa4:
    // 0x17eaa4: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x17eaa4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
label_17eaa8:
    // 0x17eaa8: 0x9664008c  lhu         $a0, 0x8C($s3)
    ctx->pc = 0x17eaa8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 140)));
label_17eaac:
    // 0x17eaac: 0x8f838780  lw          $v1, -0x7880($gp)
    ctx->pc = 0x17eaacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
label_17eab0:
    // 0x17eab0: 0xaf84878c  sw          $a0, -0x7874($gp)
    ctx->pc = 0x17eab0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936460), GPR_U32(ctx, 4));
label_17eab4:
    // 0x17eab4: 0x1000005d  b           . + 4 + (0x5D << 2)
label_17eab8:
    if (ctx->pc == 0x17EAB8u) {
        ctx->pc = 0x17EAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EAB4u;
        // 0x17eab8: 0xaf838784  sw          $v1, -0x787C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936452), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17EABCu;
        goto label_17eabc;
    }
    ctx->pc = 0x17EAB4u;
    {
        const bool branch_taken_0x17eab4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17EAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EAB4u;
        // 0x17eab8: 0xaf838784  sw          $v1, -0x787C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936452), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17eab4) {
            ctx->pc = 0x17EC2Cu;
            { ctx->pc = 0x17ec2c; return; }
        }
    }
    ctx->pc = 0x17EABCu;
label_17eabc:
    // 0x17eabc: 0x0  nop
    ctx->pc = 0x17eabcu;
    // NOP
label_17eac0:
    // 0x17eac0: 0x8f848780  lw          $a0, -0x7880($gp)
    ctx->pc = 0x17eac0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
label_17eac4:
    // 0x17eac4: 0x8f838778  lw          $v1, -0x7888($gp)
    ctx->pc = 0x17eac4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936440)));
label_17eac8:
    // 0x17eac8: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x17eac8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
label_17eacc:
    // 0x17eacc: 0x8f838780  lw          $v1, -0x7880($gp)
    ctx->pc = 0x17eaccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
label_17ead0:
    // 0x17ead0: 0x10000056  b           . + 4 + (0x56 << 2)
label_17ead4:
    if (ctx->pc == 0x17EAD4u) {
        ctx->pc = 0x17EAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EAD0u;
        // 0x17ead4: 0xaf838778  sw          $v1, -0x7888($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936440), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17EAD8u;
        goto label_17ead8;
    }
    ctx->pc = 0x17EAD0u;
    {
        const bool branch_taken_0x17ead0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17EAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EAD0u;
        // 0x17ead4: 0xaf838778  sw          $v1, -0x7888($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936440), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ead0) {
            ctx->pc = 0x17EC2Cu;
            { ctx->pc = 0x17ec2c; return; }
        }
    }
    ctx->pc = 0x17EAD8u;
label_17ead8:
    // 0x17ead8: 0x8f84877c  lw          $a0, -0x7884($gp)
    ctx->pc = 0x17ead8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936444)));
label_17eadc:
    // 0x17eadc: 0x8f838780  lw          $v1, -0x7880($gp)
    ctx->pc = 0x17eadcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
label_17eae0:
    // 0x17eae0: 0xac64000c  sw          $a0, 0xC($v1)
    ctx->pc = 0x17eae0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
label_17eae4:
    // 0x17eae4: 0x8f83877c  lw          $v1, -0x7884($gp)
    ctx->pc = 0x17eae4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936444)));
label_17eae8:
    // 0x17eae8: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
label_17eaec:
    if (ctx->pc == 0x17EAECu) {
        ctx->pc = 0x17EAF0u;
        goto label_17eaf0;
    }
    ctx->pc = 0x17EAE8u;
    {
        const bool branch_taken_0x17eae8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x17eae8) {
            ctx->pc = 0x17EB00u;
            goto label_17eb00;
        }
    }
    ctx->pc = 0x17EAF0u;
label_17eaf0:
    // 0x17eaf0: 0x8f838780  lw          $v1, -0x7880($gp)
    ctx->pc = 0x17eaf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
label_17eaf4:
    // 0x17eaf4: 0xaf83877c  sw          $v1, -0x7884($gp)
    ctx->pc = 0x17eaf4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936444), GPR_U32(ctx, 3));
label_17eaf8:
    // 0x17eaf8: 0x1000004c  b           . + 4 + (0x4C << 2)
label_17eafc:
    if (ctx->pc == 0x17EAFCu) {
        ctx->pc = 0x17EAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EAF8u;
        // 0x17eafc: 0xaf838770  sw          $v1, -0x7890($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936432), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17EB00u;
        goto label_17eb00;
    }
    ctx->pc = 0x17EAF8u;
    {
        const bool branch_taken_0x17eaf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17EAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EAF8u;
        // 0x17eafc: 0xaf838770  sw          $v1, -0x7890($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936432), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17eaf8) {
            ctx->pc = 0x17EC2Cu;
            { ctx->pc = 0x17ec2c; return; }
        }
    }
    ctx->pc = 0x17EB00u;
label_17eb00:
    // 0x17eb00: 0x12a00003  beqz        $s5, . + 4 + (0x3 << 2)
label_17eb04:
    if (ctx->pc == 0x17EB04u) {
        ctx->pc = 0x17EB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EB00u;
        // 0x17eb04: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17EB08u;
        goto label_17eb08;
    }
    ctx->pc = 0x17EB00u;
    {
        const bool branch_taken_0x17eb00 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x17EB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EB00u;
        // 0x17eb04: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17eb00) {
            ctx->pc = 0x17EB10u;
            goto label_17eb10;
        }
    }
    ctx->pc = 0x17EB08u;
label_17eb08:
    // 0x17eb08: 0x10000002  b           . + 4 + (0x2 << 2)
label_17eb0c:
    if (ctx->pc == 0x17EB0Cu) {
        ctx->pc = 0x17EB10u;
        goto label_17eb10;
    }
    ctx->pc = 0x17EB08u;
    {
        const bool branch_taken_0x17eb08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17eb08) {
            ctx->pc = 0x17EB14u;
            goto label_17eb14;
        }
    }
    ctx->pc = 0x17EB10u;
label_17eb10:
    // 0x17eb10: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x17eb10u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17eb14:
    // 0x17eb14: 0x0  nop
    ctx->pc = 0x17eb14u;
    // NOP
label_17eb18:
    // 0x17eb18: 0x1460003e  bnez        $v1, . + 4 + (0x3E << 2)
label_17eb1c:
    if (ctx->pc == 0x17EB1Cu) {
        ctx->pc = 0x17EB20u;
        goto label_17eb20;
    }
    ctx->pc = 0x17EB18u;
    {
        const bool branch_taken_0x17eb18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x17eb18) {
            ctx->pc = 0x17EC14u;
            { ctx->pc = 0x17ec14; return; }
        }
    }
    ctx->pc = 0x17EB20u;
label_17eb20:
    // 0x17eb20: 0x8f848790  lw          $a0, -0x7870($gp)
    ctx->pc = 0x17eb20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936464)));
label_17eb24:
    // 0x17eb24: 0x9663008c  lhu         $v1, 0x8C($s3)
    ctx->pc = 0x17eb24u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 140)));
label_17eb28:
    // 0x17eb28: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x17eb28u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_17eb2c:
    // 0x17eb2c: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
label_17eb30:
    if (ctx->pc == 0x17EB30u) {
        ctx->pc = 0x17EB34u;
        goto label_17eb34;
    }
    ctx->pc = 0x17EB2Cu;
    {
        const bool branch_taken_0x17eb2c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x17eb2c) {
            ctx->pc = 0x17EB3Cu;
            goto label_17eb3c;
        }
    }
    ctx->pc = 0x17EB34u;
label_17eb34:
    // 0x17eb34: 0x10000004  b           . + 4 + (0x4 << 2)
label_17eb38:
    if (ctx->pc == 0x17EB38u) {
        ctx->pc = 0x17EB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EB34u;
        // 0x17eb38: 0x8f838788  lw          $v1, -0x7878($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936456)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17EB3Cu;
        goto label_17eb3c;
    }
    ctx->pc = 0x17EB34u;
    {
        const bool branch_taken_0x17eb34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17EB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EB34u;
        // 0x17eb38: 0x8f838788  lw          $v1, -0x7878($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936456)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17eb34) {
            ctx->pc = 0x17EB48u;
            goto label_17eb48;
        }
    }
    ctx->pc = 0x17EB3Cu;
label_17eb3c:
    // 0x17eb3c: 0x0  nop
    ctx->pc = 0x17eb3cu;
    // NOP
label_17eb40:
    // 0x17eb40: 0x8f838770  lw          $v1, -0x7890($gp)
    ctx->pc = 0x17eb40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936432)));
label_17eb44:
    // 0x17eb44: 0x0  nop
    ctx->pc = 0x17eb44u;
    // NOP
label_17eb48:
    // 0x17eb48: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
label_17eb4c:
    if (ctx->pc == 0x17EB4Cu) {
        ctx->pc = 0x17EB50u;
        goto label_17eb50;
    }
    ctx->pc = 0x17EB48u;
    {
        const bool branch_taken_0x17eb48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x17eb48) {
            ctx->pc = 0x17EB70u;
            goto label_17eb70;
        }
    }
    ctx->pc = 0x17EB50u;
label_17eb50:
    // 0x17eb50: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x17eb50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_17eb54:
    // 0x17eb54: 0x9664008c  lhu         $a0, 0x8C($s3)
    ctx->pc = 0x17eb54u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 140)));
label_17eb58:
    // 0x17eb58: 0x94a5008c  lhu         $a1, 0x8C($a1)
    ctx->pc = 0x17eb58u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 140)));
label_17eb5c:
    // 0x17eb5c: 0xa4082a  slt         $at, $a1, $a0
    ctx->pc = 0x17eb5cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_17eb60:
    // 0x17eb60: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_17eb64:
    if (ctx->pc == 0x17EB64u) {
        ctx->pc = 0x17EB68u;
        goto label_17eb68;
    }
    ctx->pc = 0x17EB60u;
    {
        const bool branch_taken_0x17eb60 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x17eb60) {
            ctx->pc = 0x17EB70u;
            goto label_17eb70;
        }
    }
    ctx->pc = 0x17EB68u;
label_17eb68:
    // 0x17eb68: 0x1000fff7  b           . + 4 + (-0x9 << 2)
label_17eb6c:
    if (ctx->pc == 0x17EB6Cu) {
        ctx->pc = 0x17EB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EB68u;
        // 0x17eb6c: 0x8c630008  lw          $v1, 0x8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17EB70u;
        goto label_17eb70;
    }
    ctx->pc = 0x17EB68u;
    {
        const bool branch_taken_0x17eb68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17EB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EB68u;
        // 0x17eb6c: 0x8c630008  lw          $v1, 0x8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17eb68) {
            ctx->pc = 0x17EB48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17eb48;
        }
    }
    ctx->pc = 0x17EB70u;
label_17eb70:
    // 0x17eb70: 0x8f848770  lw          $a0, -0x7890($gp)
    ctx->pc = 0x17eb70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936432)));
label_17eb74:
    // 0x17eb74: 0x1464000b  bne         $v1, $a0, . + 4 + (0xB << 2)
label_17eb78:
    if (ctx->pc == 0x17EB78u) {
        ctx->pc = 0x17EB7Cu;
        goto label_17eb7c;
    }
    ctx->pc = 0x17EB74u;
    {
        const bool branch_taken_0x17eb74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x17eb74) {
            ctx->pc = 0x17EBA4u;
            { ctx->pc = 0x17eba4; return; }
        }
    }
    ctx->pc = 0x17EB7Cu;
label_17eb7c:
    // 0x17eb7c: 0x8f838780  lw          $v1, -0x7880($gp)
    ctx->pc = 0x17eb7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
    ctx->pc = 0x17eb80u;
    return;
}
