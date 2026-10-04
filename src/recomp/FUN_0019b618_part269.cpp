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

// Function: FUN_0019b618
// Address: 0x19b618 - 0x29b620
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0019b618_part269(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x21e3d8u: goto label_21e3d8;
        case 0x21e3dcu: goto label_21e3dc;
        case 0x21e3e0u: goto label_21e3e0;
        case 0x21e3e4u: goto label_21e3e4;
        case 0x21e3e8u: goto label_21e3e8;
        case 0x21e3ecu: goto label_21e3ec;
        case 0x21e3f0u: goto label_21e3f0;
        case 0x21e3f4u: goto label_21e3f4;
        case 0x21e3f8u: goto label_21e3f8;
        case 0x21e3fcu: goto label_21e3fc;
        case 0x21e400u: goto label_21e400;
        case 0x21e404u: goto label_21e404;
        case 0x21e408u: goto label_21e408;
        case 0x21e40cu: goto label_21e40c;
        case 0x21e410u: goto label_21e410;
        case 0x21e414u: goto label_21e414;
        case 0x21e418u: goto label_21e418;
        case 0x21e41cu: goto label_21e41c;
        case 0x21e420u: goto label_21e420;
        case 0x21e424u: goto label_21e424;
        case 0x21e428u: goto label_21e428;
        case 0x21e42cu: goto label_21e42c;
        case 0x21e430u: goto label_21e430;
        case 0x21e434u: goto label_21e434;
        case 0x21e438u: goto label_21e438;
        case 0x21e43cu: goto label_21e43c;
        case 0x21e440u: goto label_21e440;
        case 0x21e444u: goto label_21e444;
        case 0x21e448u: goto label_21e448;
        case 0x21e44cu: goto label_21e44c;
        case 0x21e450u: goto label_21e450;
        case 0x21e454u: goto label_21e454;
        case 0x21e458u: goto label_21e458;
        case 0x21e45cu: goto label_21e45c;
        case 0x21e460u: goto label_21e460;
        case 0x21e464u: goto label_21e464;
        case 0x21e468u: goto label_21e468;
        case 0x21e46cu: goto label_21e46c;
        case 0x21e470u: goto label_21e470;
        case 0x21e474u: goto label_21e474;
        case 0x21e478u: goto label_21e478;
        case 0x21e47cu: goto label_21e47c;
        case 0x21e480u: goto label_21e480;
        case 0x21e484u: goto label_21e484;
        case 0x21e488u: goto label_21e488;
        case 0x21e48cu: goto label_21e48c;
        case 0x21e490u: goto label_21e490;
        case 0x21e494u: goto label_21e494;
        case 0x21e498u: goto label_21e498;
        case 0x21e49cu: goto label_21e49c;
        case 0x21e4a0u: goto label_21e4a0;
        case 0x21e4a4u: goto label_21e4a4;
        case 0x21e4a8u: goto label_21e4a8;
        case 0x21e4acu: goto label_21e4ac;
        case 0x21e4b0u: goto label_21e4b0;
        case 0x21e4b4u: goto label_21e4b4;
        case 0x21e4b8u: goto label_21e4b8;
        case 0x21e4bcu: goto label_21e4bc;
        case 0x21e4c0u: goto label_21e4c0;
        case 0x21e4c4u: goto label_21e4c4;
        case 0x21e4c8u: goto label_21e4c8;
        case 0x21e4ccu: goto label_21e4cc;
        case 0x21e4d0u: goto label_21e4d0;
        case 0x21e4d4u: goto label_21e4d4;
        case 0x21e4d8u: goto label_21e4d8;
        case 0x21e4dcu: goto label_21e4dc;
        case 0x21e4e0u: goto label_21e4e0;
        case 0x21e4e4u: goto label_21e4e4;
        case 0x21e4e8u: goto label_21e4e8;
        case 0x21e4ecu: goto label_21e4ec;
        case 0x21e4f0u: goto label_21e4f0;
        case 0x21e4f4u: goto label_21e4f4;
        case 0x21e4f8u: goto label_21e4f8;
        case 0x21e4fcu: goto label_21e4fc;
        case 0x21e500u: goto label_21e500;
        case 0x21e504u: goto label_21e504;
        case 0x21e508u: goto label_21e508;
        case 0x21e50cu: goto label_21e50c;
        case 0x21e510u: goto label_21e510;
        case 0x21e514u: goto label_21e514;
        case 0x21e518u: goto label_21e518;
        case 0x21e51cu: goto label_21e51c;
        case 0x21e520u: goto label_21e520;
        case 0x21e524u: goto label_21e524;
        case 0x21e528u: goto label_21e528;
        case 0x21e52cu: goto label_21e52c;
        case 0x21e530u: goto label_21e530;
        case 0x21e534u: goto label_21e534;
        case 0x21e538u: goto label_21e538;
        case 0x21e53cu: goto label_21e53c;
        case 0x21e540u: goto label_21e540;
        case 0x21e544u: goto label_21e544;
        case 0x21e548u: goto label_21e548;
        case 0x21e54cu: goto label_21e54c;
        case 0x21e550u: goto label_21e550;
        case 0x21e554u: goto label_21e554;
        case 0x21e558u: goto label_21e558;
        case 0x21e55cu: goto label_21e55c;
        case 0x21e560u: goto label_21e560;
        case 0x21e564u: goto label_21e564;
        case 0x21e568u: goto label_21e568;
        case 0x21e56cu: goto label_21e56c;
        case 0x21e570u: goto label_21e570;
        case 0x21e574u: goto label_21e574;
        case 0x21e578u: goto label_21e578;
        case 0x21e57cu: goto label_21e57c;
        case 0x21e580u: goto label_21e580;
        case 0x21e584u: goto label_21e584;
        case 0x21e588u: goto label_21e588;
        case 0x21e58cu: goto label_21e58c;
        case 0x21e590u: goto label_21e590;
        case 0x21e594u: goto label_21e594;
        case 0x21e598u: goto label_21e598;
        case 0x21e59cu: goto label_21e59c;
        case 0x21e5a0u: goto label_21e5a0;
        case 0x21e5a4u: goto label_21e5a4;
        case 0x21e5a8u: goto label_21e5a8;
        case 0x21e5acu: goto label_21e5ac;
        case 0x21e5b0u: goto label_21e5b0;
        case 0x21e5b4u: goto label_21e5b4;
        case 0x21e5b8u: goto label_21e5b8;
        case 0x21e5bcu: goto label_21e5bc;
        case 0x21e5c0u: goto label_21e5c0;
        case 0x21e5c4u: goto label_21e5c4;
        case 0x21e5c8u: goto label_21e5c8;
        case 0x21e5ccu: goto label_21e5cc;
        case 0x21e5d0u: goto label_21e5d0;
        case 0x21e5d4u: goto label_21e5d4;
        case 0x21e5d8u: goto label_21e5d8;
        case 0x21e5dcu: goto label_21e5dc;
        case 0x21e5e0u: goto label_21e5e0;
        case 0x21e5e4u: goto label_21e5e4;
        case 0x21e5e8u: goto label_21e5e8;
        case 0x21e5ecu: goto label_21e5ec;
        case 0x21e5f0u: goto label_21e5f0;
        case 0x21e5f4u: goto label_21e5f4;
        case 0x21e5f8u: goto label_21e5f8;
        case 0x21e5fcu: goto label_21e5fc;
        case 0x21e600u: goto label_21e600;
        case 0x21e604u: goto label_21e604;
        case 0x21e608u: goto label_21e608;
        case 0x21e60cu: goto label_21e60c;
        case 0x21e610u: goto label_21e610;
        case 0x21e614u: goto label_21e614;
        case 0x21e618u: goto label_21e618;
        case 0x21e61cu: goto label_21e61c;
        case 0x21e620u: goto label_21e620;
        case 0x21e624u: goto label_21e624;
        case 0x21e628u: goto label_21e628;
        case 0x21e62cu: goto label_21e62c;
        case 0x21e630u: goto label_21e630;
        case 0x21e634u: goto label_21e634;
        case 0x21e638u: goto label_21e638;
        case 0x21e63cu: goto label_21e63c;
        case 0x21e640u: goto label_21e640;
        case 0x21e644u: goto label_21e644;
        case 0x21e648u: goto label_21e648;
        case 0x21e64cu: goto label_21e64c;
        case 0x21e650u: goto label_21e650;
        case 0x21e654u: goto label_21e654;
        case 0x21e658u: goto label_21e658;
        case 0x21e65cu: goto label_21e65c;
        case 0x21e660u: goto label_21e660;
        case 0x21e664u: goto label_21e664;
        case 0x21e668u: goto label_21e668;
        case 0x21e66cu: goto label_21e66c;
        case 0x21e670u: goto label_21e670;
        case 0x21e674u: goto label_21e674;
        case 0x21e678u: goto label_21e678;
        case 0x21e67cu: goto label_21e67c;
        case 0x21e680u: goto label_21e680;
        case 0x21e684u: goto label_21e684;
        case 0x21e688u: goto label_21e688;
        case 0x21e68cu: goto label_21e68c;
        case 0x21e690u: goto label_21e690;
        case 0x21e694u: goto label_21e694;
        case 0x21e698u: goto label_21e698;
        case 0x21e69cu: goto label_21e69c;
        case 0x21e6a0u: goto label_21e6a0;
        case 0x21e6a4u: goto label_21e6a4;
        case 0x21e6a8u: goto label_21e6a8;
        case 0x21e6acu: goto label_21e6ac;
        case 0x21e6b0u: goto label_21e6b0;
        case 0x21e6b4u: goto label_21e6b4;
        case 0x21e6b8u: goto label_21e6b8;
        case 0x21e6bcu: goto label_21e6bc;
        case 0x21e6c0u: goto label_21e6c0;
        case 0x21e6c4u: goto label_21e6c4;
        case 0x21e6c8u: goto label_21e6c8;
        case 0x21e6ccu: goto label_21e6cc;
        case 0x21e6d0u: goto label_21e6d0;
        case 0x21e6d4u: goto label_21e6d4;
        case 0x21e6d8u: goto label_21e6d8;
        case 0x21e6dcu: goto label_21e6dc;
        case 0x21e6e0u: goto label_21e6e0;
        case 0x21e6e4u: goto label_21e6e4;
        case 0x21e6e8u: goto label_21e6e8;
        case 0x21e6ecu: goto label_21e6ec;
        case 0x21e6f0u: goto label_21e6f0;
        case 0x21e6f4u: goto label_21e6f4;
        case 0x21e6f8u: goto label_21e6f8;
        case 0x21e6fcu: goto label_21e6fc;
        case 0x21e700u: goto label_21e700;
        case 0x21e704u: goto label_21e704;
        case 0x21e708u: goto label_21e708;
        case 0x21e70cu: goto label_21e70c;
        case 0x21e710u: goto label_21e710;
        case 0x21e714u: goto label_21e714;
        case 0x21e718u: goto label_21e718;
        case 0x21e71cu: goto label_21e71c;
        case 0x21e720u: goto label_21e720;
        case 0x21e724u: goto label_21e724;
        case 0x21e728u: goto label_21e728;
        case 0x21e72cu: goto label_21e72c;
        case 0x21e730u: goto label_21e730;
        case 0x21e734u: goto label_21e734;
        case 0x21e738u: goto label_21e738;
        case 0x21e73cu: goto label_21e73c;
        case 0x21e740u: goto label_21e740;
        case 0x21e744u: goto label_21e744;
        case 0x21e748u: goto label_21e748;
        case 0x21e74cu: goto label_21e74c;
        case 0x21e750u: goto label_21e750;
        case 0x21e754u: goto label_21e754;
        case 0x21e758u: goto label_21e758;
        case 0x21e75cu: goto label_21e75c;
        case 0x21e760u: goto label_21e760;
        case 0x21e764u: goto label_21e764;
        case 0x21e768u: goto label_21e768;
        case 0x21e76cu: goto label_21e76c;
        case 0x21e770u: goto label_21e770;
        case 0x21e774u: goto label_21e774;
        case 0x21e778u: goto label_21e778;
        case 0x21e77cu: goto label_21e77c;
        case 0x21e780u: goto label_21e780;
        case 0x21e784u: goto label_21e784;
        case 0x21e788u: goto label_21e788;
        case 0x21e78cu: goto label_21e78c;
        case 0x21e790u: goto label_21e790;
        case 0x21e794u: goto label_21e794;
        case 0x21e798u: goto label_21e798;
        case 0x21e79cu: goto label_21e79c;
        case 0x21e7a0u: goto label_21e7a0;
        case 0x21e7a4u: goto label_21e7a4;
        case 0x21e7a8u: goto label_21e7a8;
        case 0x21e7acu: goto label_21e7ac;
        case 0x21e7b0u: goto label_21e7b0;
        case 0x21e7b4u: goto label_21e7b4;
        case 0x21e7b8u: goto label_21e7b8;
        case 0x21e7bcu: goto label_21e7bc;
        case 0x21e7c0u: goto label_21e7c0;
        case 0x21e7c4u: goto label_21e7c4;
        case 0x21e7c8u: goto label_21e7c8;
        case 0x21e7ccu: goto label_21e7cc;
        case 0x21e7d0u: goto label_21e7d0;
        case 0x21e7d4u: goto label_21e7d4;
        case 0x21e7d8u: goto label_21e7d8;
        case 0x21e7dcu: goto label_21e7dc;
        case 0x21e7e0u: goto label_21e7e0;
        case 0x21e7e4u: goto label_21e7e4;
        case 0x21e7e8u: goto label_21e7e8;
        case 0x21e7ecu: goto label_21e7ec;
        case 0x21e7f0u: goto label_21e7f0;
        case 0x21e7f4u: goto label_21e7f4;
        case 0x21e7f8u: goto label_21e7f8;
        case 0x21e7fcu: goto label_21e7fc;
        case 0x21e800u: goto label_21e800;
        case 0x21e804u: goto label_21e804;
        case 0x21e808u: goto label_21e808;
        case 0x21e80cu: goto label_21e80c;
        case 0x21e810u: goto label_21e810;
        case 0x21e814u: goto label_21e814;
        case 0x21e818u: goto label_21e818;
        case 0x21e81cu: goto label_21e81c;
        case 0x21e820u: goto label_21e820;
        case 0x21e824u: goto label_21e824;
        case 0x21e828u: goto label_21e828;
        case 0x21e82cu: goto label_21e82c;
        case 0x21e830u: goto label_21e830;
        case 0x21e834u: goto label_21e834;
        case 0x21e838u: goto label_21e838;
        case 0x21e83cu: goto label_21e83c;
        case 0x21e840u: goto label_21e840;
        case 0x21e844u: goto label_21e844;
        case 0x21e848u: goto label_21e848;
        case 0x21e84cu: goto label_21e84c;
        case 0x21e850u: goto label_21e850;
        case 0x21e854u: goto label_21e854;
        case 0x21e858u: goto label_21e858;
        case 0x21e85cu: goto label_21e85c;
        case 0x21e860u: goto label_21e860;
        case 0x21e864u: goto label_21e864;
        case 0x21e868u: goto label_21e868;
        case 0x21e86cu: goto label_21e86c;
        case 0x21e870u: goto label_21e870;
        case 0x21e874u: goto label_21e874;
        case 0x21e878u: goto label_21e878;
        case 0x21e87cu: goto label_21e87c;
        case 0x21e880u: goto label_21e880;
        case 0x21e884u: goto label_21e884;
        case 0x21e888u: goto label_21e888;
        case 0x21e88cu: goto label_21e88c;
        case 0x21e890u: goto label_21e890;
        case 0x21e894u: goto label_21e894;
        case 0x21e898u: goto label_21e898;
        case 0x21e89cu: goto label_21e89c;
        case 0x21e8a0u: goto label_21e8a0;
        case 0x21e8a4u: goto label_21e8a4;
        case 0x21e8a8u: goto label_21e8a8;
        case 0x21e8acu: goto label_21e8ac;
        case 0x21e8b0u: goto label_21e8b0;
        case 0x21e8b4u: goto label_21e8b4;
        case 0x21e8b8u: goto label_21e8b8;
        case 0x21e8bcu: goto label_21e8bc;
        case 0x21e8c0u: goto label_21e8c0;
        case 0x21e8c4u: goto label_21e8c4;
        case 0x21e8c8u: goto label_21e8c8;
        case 0x21e8ccu: goto label_21e8cc;
        case 0x21e8d0u: goto label_21e8d0;
        case 0x21e8d4u: goto label_21e8d4;
        case 0x21e8d8u: goto label_21e8d8;
        case 0x21e8dcu: goto label_21e8dc;
        case 0x21e8e0u: goto label_21e8e0;
        case 0x21e8e4u: goto label_21e8e4;
        case 0x21e8e8u: goto label_21e8e8;
        case 0x21e8ecu: goto label_21e8ec;
        case 0x21e8f0u: goto label_21e8f0;
        case 0x21e8f4u: goto label_21e8f4;
        case 0x21e8f8u: goto label_21e8f8;
        case 0x21e8fcu: goto label_21e8fc;
        case 0x21e900u: goto label_21e900;
        case 0x21e904u: goto label_21e904;
        case 0x21e908u: goto label_21e908;
        case 0x21e90cu: goto label_21e90c;
        case 0x21e910u: goto label_21e910;
        case 0x21e914u: goto label_21e914;
        case 0x21e918u: goto label_21e918;
        case 0x21e91cu: goto label_21e91c;
        case 0x21e920u: goto label_21e920;
        case 0x21e924u: goto label_21e924;
        case 0x21e928u: goto label_21e928;
        case 0x21e92cu: goto label_21e92c;
        case 0x21e930u: goto label_21e930;
        case 0x21e934u: goto label_21e934;
        case 0x21e938u: goto label_21e938;
        case 0x21e93cu: goto label_21e93c;
        case 0x21e940u: goto label_21e940;
        case 0x21e944u: goto label_21e944;
        case 0x21e948u: goto label_21e948;
        case 0x21e94cu: goto label_21e94c;
        case 0x21e950u: goto label_21e950;
        case 0x21e954u: goto label_21e954;
        case 0x21e958u: goto label_21e958;
        case 0x21e95cu: goto label_21e95c;
        case 0x21e960u: goto label_21e960;
        case 0x21e964u: goto label_21e964;
        case 0x21e968u: goto label_21e968;
        case 0x21e96cu: goto label_21e96c;
        case 0x21e970u: goto label_21e970;
        case 0x21e974u: goto label_21e974;
        case 0x21e978u: goto label_21e978;
        case 0x21e97cu: goto label_21e97c;
        case 0x21e980u: goto label_21e980;
        case 0x21e984u: goto label_21e984;
        case 0x21e988u: goto label_21e988;
        case 0x21e98cu: goto label_21e98c;
        case 0x21e990u: goto label_21e990;
        case 0x21e994u: goto label_21e994;
        case 0x21e998u: goto label_21e998;
        case 0x21e99cu: goto label_21e99c;
        case 0x21e9a0u: goto label_21e9a0;
        case 0x21e9a4u: goto label_21e9a4;
        case 0x21e9a8u: goto label_21e9a8;
        case 0x21e9acu: goto label_21e9ac;
        case 0x21e9b0u: goto label_21e9b0;
        case 0x21e9b4u: goto label_21e9b4;
        case 0x21e9b8u: goto label_21e9b8;
        case 0x21e9bcu: goto label_21e9bc;
        case 0x21e9c0u: goto label_21e9c0;
        case 0x21e9c4u: goto label_21e9c4;
        case 0x21e9c8u: goto label_21e9c8;
        case 0x21e9ccu: goto label_21e9cc;
        case 0x21e9d0u: goto label_21e9d0;
        case 0x21e9d4u: goto label_21e9d4;
        case 0x21e9d8u: goto label_21e9d8;
        case 0x21e9dcu: goto label_21e9dc;
        case 0x21e9e0u: goto label_21e9e0;
        case 0x21e9e4u: goto label_21e9e4;
        case 0x21e9e8u: goto label_21e9e8;
        case 0x21e9ecu: goto label_21e9ec;
        case 0x21e9f0u: goto label_21e9f0;
        case 0x21e9f4u: goto label_21e9f4;
        case 0x21e9f8u: goto label_21e9f8;
        case 0x21e9fcu: goto label_21e9fc;
        case 0x21ea00u: goto label_21ea00;
        case 0x21ea04u: goto label_21ea04;
        case 0x21ea08u: goto label_21ea08;
        case 0x21ea0cu: goto label_21ea0c;
        case 0x21ea10u: goto label_21ea10;
        case 0x21ea14u: goto label_21ea14;
        case 0x21ea18u: goto label_21ea18;
        case 0x21ea1cu: goto label_21ea1c;
        case 0x21ea20u: goto label_21ea20;
        case 0x21ea24u: goto label_21ea24;
        case 0x21ea28u: goto label_21ea28;
        case 0x21ea2cu: goto label_21ea2c;
        case 0x21ea30u: goto label_21ea30;
        case 0x21ea34u: goto label_21ea34;
        case 0x21ea38u: goto label_21ea38;
        case 0x21ea3cu: goto label_21ea3c;
        case 0x21ea40u: goto label_21ea40;
        case 0x21ea44u: goto label_21ea44;
        case 0x21ea48u: goto label_21ea48;
        case 0x21ea4cu: goto label_21ea4c;
        case 0x21ea50u: goto label_21ea50;
        case 0x21ea54u: goto label_21ea54;
        case 0x21ea58u: goto label_21ea58;
        case 0x21ea5cu: goto label_21ea5c;
        case 0x21ea60u: goto label_21ea60;
        case 0x21ea64u: goto label_21ea64;
        case 0x21ea68u: goto label_21ea68;
        case 0x21ea6cu: goto label_21ea6c;
        case 0x21ea70u: goto label_21ea70;
        case 0x21ea74u: goto label_21ea74;
        case 0x21ea78u: goto label_21ea78;
        case 0x21ea7cu: goto label_21ea7c;
        case 0x21ea80u: goto label_21ea80;
        case 0x21ea84u: goto label_21ea84;
        case 0x21ea88u: goto label_21ea88;
        case 0x21ea8cu: goto label_21ea8c;
        case 0x21ea90u: goto label_21ea90;
        case 0x21ea94u: goto label_21ea94;
        case 0x21ea98u: goto label_21ea98;
        case 0x21ea9cu: goto label_21ea9c;
        case 0x21eaa0u: goto label_21eaa0;
        case 0x21eaa4u: goto label_21eaa4;
        case 0x21eaa8u: goto label_21eaa8;
        case 0x21eaacu: goto label_21eaac;
        case 0x21eab0u: goto label_21eab0;
        case 0x21eab4u: goto label_21eab4;
        case 0x21eab8u: goto label_21eab8;
        case 0x21eabcu: goto label_21eabc;
        case 0x21eac0u: goto label_21eac0;
        case 0x21eac4u: goto label_21eac4;
        case 0x21eac8u: goto label_21eac8;
        case 0x21eaccu: goto label_21eacc;
        case 0x21ead0u: goto label_21ead0;
        case 0x21ead4u: goto label_21ead4;
        case 0x21ead8u: goto label_21ead8;
        case 0x21eadcu: goto label_21eadc;
        case 0x21eae0u: goto label_21eae0;
        case 0x21eae4u: goto label_21eae4;
        case 0x21eae8u: goto label_21eae8;
        case 0x21eaecu: goto label_21eaec;
        case 0x21eaf0u: goto label_21eaf0;
        case 0x21eaf4u: goto label_21eaf4;
        case 0x21eaf8u: goto label_21eaf8;
        case 0x21eafcu: goto label_21eafc;
        case 0x21eb00u: goto label_21eb00;
        case 0x21eb04u: goto label_21eb04;
        case 0x21eb08u: goto label_21eb08;
        case 0x21eb0cu: goto label_21eb0c;
        case 0x21eb10u: goto label_21eb10;
        case 0x21eb14u: goto label_21eb14;
        case 0x21eb18u: goto label_21eb18;
        case 0x21eb1cu: goto label_21eb1c;
        case 0x21eb20u: goto label_21eb20;
        case 0x21eb24u: goto label_21eb24;
        case 0x21eb28u: goto label_21eb28;
        case 0x21eb2cu: goto label_21eb2c;
        case 0x21eb30u: goto label_21eb30;
        case 0x21eb34u: goto label_21eb34;
        case 0x21eb38u: goto label_21eb38;
        case 0x21eb3cu: goto label_21eb3c;
        case 0x21eb40u: goto label_21eb40;
        case 0x21eb44u: goto label_21eb44;
        case 0x21eb48u: goto label_21eb48;
        case 0x21eb4cu: goto label_21eb4c;
        case 0x21eb50u: goto label_21eb50;
        case 0x21eb54u: goto label_21eb54;
        case 0x21eb58u: goto label_21eb58;
        case 0x21eb5cu: goto label_21eb5c;
        case 0x21eb60u: goto label_21eb60;
        case 0x21eb64u: goto label_21eb64;
        case 0x21eb68u: goto label_21eb68;
        case 0x21eb6cu: goto label_21eb6c;
        case 0x21eb70u: goto label_21eb70;
        case 0x21eb74u: goto label_21eb74;
        case 0x21eb78u: goto label_21eb78;
        case 0x21eb7cu: goto label_21eb7c;
        case 0x21eb80u: goto label_21eb80;
        case 0x21eb84u: goto label_21eb84;
        case 0x21eb88u: goto label_21eb88;
        case 0x21eb8cu: goto label_21eb8c;
        case 0x21eb90u: goto label_21eb90;
        case 0x21eb94u: goto label_21eb94;
        case 0x21eb98u: goto label_21eb98;
        case 0x21eb9cu: goto label_21eb9c;
        case 0x21eba0u: goto label_21eba0;
        case 0x21eba4u: goto label_21eba4;
        default: return;
    }

label_21e3d8:
    // 0x21e3d8: 0x83001b  divu        $zero, $a0, $v1
    ctx->pc = 0x21e3d8u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
label_21e3dc:
    // 0x21e3dc: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x21e3dcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_21e3e0:
    // 0x21e3e0: 0xa21006  srlv        $v0, $v0, $a1
    ctx->pc = 0x21e3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 5) & 0x1F));
label_21e3e4:
    // 0x21e3e4: 0x2810  mfhi        $a1
    ctx->pc = 0x21e3e4u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_21e3e8:
    // 0x21e3e8: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x21e3e8u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_21e3ec:
    // 0x21e3ec: 0x0  nop
    ctx->pc = 0x21e3ecu;
    // NOP
label_21e3f0:
    // 0x21e3f0: 0x0  nop
    ctx->pc = 0x21e3f0u;
    // NOP
label_21e3f4:
    // 0x21e3f4: 0x3010  mfhi        $a2
    ctx->pc = 0x21e3f4u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_21e3f8:
    // 0x21e3f8: 0xc087588  jal         func_21D620
label_21e3fc:
    if (ctx->pc == 0x21E3FCu) {
        ctx->pc = 0x21E3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E3F8u;
        // 0x21e3fc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E400u;
        goto label_21e400;
    }
    ctx->pc = 0x21E3F8u;
    SET_GPR_U32(ctx, 31, 0x21E400u);
    ctx->pc = 0x21E3FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E3F8u;
    // 0x21e3fc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D620u;
    { ctx->pc = 0x21d620; return; }
    ctx->pc = 0x21E400u;
label_21e400:
    // 0x21e400: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x21e400u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_21e404:
    // 0x21e404: 0x2a620008  slti        $v0, $s3, 0x8
    ctx->pc = 0x21e404u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)8) ? 1 : 0);
label_21e408:
    // 0x21e408: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
label_21e40c:
    if (ctx->pc == 0x21E40Cu) {
        ctx->pc = 0x21E40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E408u;
        // 0x21e40c: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E410u;
        goto label_21e410;
    }
    ctx->pc = 0x21E408u;
    {
        const bool branch_taken_0x21e408 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21E40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E408u;
        // 0x21e40c: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e408) {
            ctx->pc = 0x21E3C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x21e3c8; return; }
        }
    }
    ctx->pc = 0x21E410u;
label_21e410:
    // 0x21e410: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x21e410u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_21e414:
    // 0x21e414: 0x2c610035  sltiu       $at, $v1, 0x35
    ctx->pc = 0x21e414u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)53) ? 1 : 0);
label_21e418:
    // 0x21e418: 0x14200005  bnez        $at, . + 4 + (0x5 << 2)
label_21e41c:
    if (ctx->pc == 0x21E41Cu) {
        ctx->pc = 0x21E41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E418u;
        // 0x21e41c: 0x24020034  addiu       $v0, $zero, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E420u;
        goto label_21e420;
    }
    ctx->pc = 0x21E418u;
    {
        const bool branch_taken_0x21e418 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x21E41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E418u;
        // 0x21e41c: 0x24020034  addiu       $v0, $zero, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e418) {
            ctx->pc = 0x21E430u;
            goto label_21e430;
        }
    }
    ctx->pc = 0x21E420u;
label_21e420:
    // 0x21e420: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x21e420u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
label_21e424:
    // 0x21e424: 0x0  nop
    ctx->pc = 0x21e424u;
    // NOP
label_21e428:
    // 0x21e428: 0x0  nop
    ctx->pc = 0x21e428u;
    // NOP
label_21e42c:
    // 0x21e42c: 0x1810  mfhi        $v1
    ctx->pc = 0x21e42cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_21e430:
    // 0x21e430: 0xde530000  ld          $s3, 0x0($s2)
    ctx->pc = 0x21e430u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 18), 0)));
label_21e434:
    // 0x21e434: 0x24020034  addiu       $v0, $zero, 0x34
    ctx->pc = 0x21e434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
label_21e438:
    // 0x21e438: 0x43a023  subu        $s4, $v0, $v1
    ctx->pc = 0x21e438u;
    SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_21e43c:
    // 0x21e43c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21e43cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21e440:
    // 0x21e440: 0x2822814  dsllv       $a1, $v0, $s4
    ctx->pc = 0x21e440u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (GPR_U32(ctx, 20) & 0x3F));
label_21e444:
    // 0x21e444: 0xc06d9fe  jal         func_1B67F8
label_21e448:
    if (ctx->pc == 0x21E448u) {
        ctx->pc = 0x21E448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E444u;
        // 0x21e448: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E44Cu;
        goto label_21e44c;
    }
    ctx->pc = 0x21E444u;
    SET_GPR_U32(ctx, 31, 0x21E44Cu);
    ctx->pc = 0x21E448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E444u;
    // 0x21e448: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B67F8u;
    { ctx->pc = 0x1b67f8; return; }
    ctx->pc = 0x21E44Cu;
label_21e44c:
    // 0x21e44c: 0x24030034  addiu       $v1, $zero, 0x34
    ctx->pc = 0x21e44cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
label_21e450:
    // 0x21e450: 0x2932016  dsrlv       $a0, $s3, $s4
    ctx->pc = 0x21e450u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) >> (GPR_U32(ctx, 20) & 0x3F));
label_21e454:
    // 0x21e454: 0x742823  subu        $a1, $v1, $s4
    ctx->pc = 0x21e454u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
label_21e458:
    // 0x21e458: 0x5303c  dsll32      $a2, $a1, 0
    ctx->pc = 0x21e458u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) << (32 + 0));
label_21e45c:
    // 0x21e45c: 0x24034000  addiu       $v1, $zero, 0x4000
    ctx->pc = 0x21e45cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
label_21e460:
    // 0x21e460: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x21e460u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
label_21e464:
    // 0x21e464: 0x3283c  dsll32      $a1, $v1, 0
    ctx->pc = 0x21e464u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
label_21e468:
    // 0x21e468: 0xc21014  dsllv       $v0, $v0, $a2
    ctx->pc = 0x21e468u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 6) & 0x3F));
label_21e46c:
    // 0x21e46c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x21e46cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_21e470:
    // 0x21e470: 0xfe420000  sd          $v0, 0x0($s2)
    ctx->pc = 0x21e470u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 2));
label_21e474:
    // 0x21e474: 0xdfa400c0  ld          $a0, 0xC0($sp)
    ctx->pc = 0x21e474u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 192)));
label_21e478:
    // 0x21e478: 0x413be  dsrl32      $v0, $a0, 14
    ctx->pc = 0x21e478u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) >> (32 + 14));
label_21e47c:
    // 0x21e47c: 0xc06d9fe  jal         func_1B67F8
label_21e480:
    if (ctx->pc == 0x21E480u) {
        ctx->pc = 0x21E480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E47Cu;
        // 0x21e480: 0x3053003f  andi        $s3, $v0, 0x3F (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E484u;
        goto label_21e484;
    }
    ctx->pc = 0x21E47Cu;
    SET_GPR_U32(ctx, 31, 0x21E484u);
    ctx->pc = 0x21E480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E47Cu;
    // 0x21e480: 0x3053003f  andi        $s3, $v0, 0x3F (Delay Slot)
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B67F8u;
    { ctx->pc = 0x1b67f8; return; }
    ctx->pc = 0x21E484u;
label_21e484:
    // 0x21e484: 0xffa200d0  sd          $v0, 0xD0($sp)
    ctx->pc = 0x21e484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 2));
label_21e488:
    // 0x21e488: 0x27a900d0  addiu       $t1, $sp, 0xD0
    ctx->pc = 0x21e488u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_21e48c:
    // 0x21e48c: 0x91240000  lbu         $a0, 0x0($t1)
    ctx->pc = 0x21e48cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
label_21e490:
    // 0x21e490: 0x340bffff  ori         $t3, $zero, 0xFFFF
    ctx->pc = 0x21e490u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_21e494:
    // 0x21e494: 0x91230001  lbu         $v1, 0x1($t1)
    ctx->pc = 0x21e494u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 1)));
label_21e498:
    // 0x21e498: 0x326200ff  andi        $v0, $s3, 0xFF
    ctx->pc = 0x21e498u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
label_21e49c:
    // 0x21e49c: 0x91280002  lbu         $t0, 0x2($t1)
    ctx->pc = 0x21e49cu;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 2)));
label_21e4a0:
    // 0x21e4a0: 0x91270003  lbu         $a3, 0x3($t1)
    ctx->pc = 0x21e4a0u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 3)));
label_21e4a4:
    // 0x21e4a4: 0x91260004  lbu         $a2, 0x4($t1)
    ctx->pc = 0x21e4a4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 4)));
label_21e4a8:
    // 0x21e4a8: 0x91250005  lbu         $a1, 0x5($t1)
    ctx->pc = 0x21e4a8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 5)));
label_21e4ac:
    // 0x21e4ac: 0x45021  addu        $t2, $zero, $a0
    ctx->pc = 0x21e4acu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
label_21e4b0:
    // 0x21e4b0: 0x1435021  addu        $t2, $t2, $v1
    ctx->pc = 0x21e4b0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
label_21e4b4:
    // 0x21e4b4: 0x91240006  lbu         $a0, 0x6($t1)
    ctx->pc = 0x21e4b4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 6)));
label_21e4b8:
    // 0x21e4b8: 0x91230007  lbu         $v1, 0x7($t1)
    ctx->pc = 0x21e4b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 7)));
label_21e4bc:
    // 0x21e4bc: 0x1485021  addu        $t2, $t2, $t0
    ctx->pc = 0x21e4bcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 8)));
label_21e4c0:
    // 0x21e4c0: 0x1475021  addu        $t2, $t2, $a3
    ctx->pc = 0x21e4c0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 7)));
label_21e4c4:
    // 0x21e4c4: 0x1465021  addu        $t2, $t2, $a2
    ctx->pc = 0x21e4c4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 6)));
label_21e4c8:
    // 0x21e4c8: 0x1455021  addu        $t2, $t2, $a1
    ctx->pc = 0x21e4c8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 5)));
label_21e4cc:
    // 0x21e4cc: 0x1445021  addu        $t2, $t2, $a0
    ctx->pc = 0x21e4ccu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
label_21e4d0:
    // 0x21e4d0: 0x1435021  addu        $t2, $t2, $v1
    ctx->pc = 0x21e4d0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
label_21e4d4:
    // 0x21e4d4: 0x14b2024  and         $a0, $t2, $t3
    ctx->pc = 0x21e4d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 10) & GPR_U64(ctx, 11));
label_21e4d8:
    // 0x21e4d8: 0xa1c02  srl         $v1, $t2, 16
    ctx->pc = 0x21e4d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 10), 16));
label_21e4dc:
    // 0x21e4dc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x21e4dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_21e4e0:
    // 0x21e4e0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x21e4e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_21e4e4:
    // 0x21e4e4: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x21e4e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
label_21e4e8:
    // 0x21e4e8: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x21e4e8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
label_21e4ec:
    // 0x21e4ec: 0x3063003f  andi        $v1, $v1, 0x3F
    ctx->pc = 0x21e4ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
label_21e4f0:
    // 0x21e4f0: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
label_21e4f4:
    if (ctx->pc == 0x21E4F4u) {
        ctx->pc = 0x21E4F8u;
        goto label_21e4f8;
    }
    ctx->pc = 0x21E4F0u;
    {
        const bool branch_taken_0x21e4f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x21e4f0) {
            ctx->pc = 0x21E500u;
            goto label_21e500;
        }
    }
    ctx->pc = 0x21E4F8u;
label_21e4f8:
    // 0x21e4f8: 0x10000025  b           . + 4 + (0x25 << 2)
label_21e4fc:
    if (ctx->pc == 0x21E4FCu) {
        ctx->pc = 0x21E4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E4F8u;
        // 0x21e4fc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E500u;
        goto label_21e500;
    }
    ctx->pc = 0x21E4F8u;
    {
        const bool branch_taken_0x21e4f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E4F8u;
        // 0x21e4fc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e4f8) {
            ctx->pc = 0x21E590u;
            goto label_21e590;
        }
    }
    ctx->pc = 0x21E500u;
label_21e500:
    // 0x21e500: 0xde440000  ld          $a0, 0x0($s2)
    ctx->pc = 0x21e500u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 18), 0)));
label_21e504:
    // 0x21e504: 0x24020800  addiu       $v0, $zero, 0x800
    ctx->pc = 0x21e504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
label_21e508:
    // 0x21e508: 0x2283c  dsll32      $a1, $v0, 0
    ctx->pc = 0x21e508u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
label_21e50c:
    // 0x21e50c: 0x412fe  dsrl32      $v0, $a0, 11
    ctx->pc = 0x21e50cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) >> (32 + 11));
label_21e510:
    // 0x21e510: 0xc06d9fe  jal         func_1B67F8
label_21e514:
    if (ctx->pc == 0x21E514u) {
        ctx->pc = 0x21E514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E510u;
        // 0x21e514: 0x30530007  andi        $s3, $v0, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E518u;
        goto label_21e518;
    }
    ctx->pc = 0x21E510u;
    SET_GPR_U32(ctx, 31, 0x21E518u);
    ctx->pc = 0x21E514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E510u;
    // 0x21e514: 0x30530007  andi        $s3, $v0, 0x7 (Delay Slot)
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B67F8u;
    { ctx->pc = 0x1b67f8; return; }
    ctx->pc = 0x21E518u;
label_21e518:
    // 0x21e518: 0xffa200d8  sd          $v0, 0xD8($sp)
    ctx->pc = 0x21e518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 216), GPR_U64(ctx, 2));
label_21e51c:
    // 0x21e51c: 0x27a900d8  addiu       $t1, $sp, 0xD8
    ctx->pc = 0x21e51cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
label_21e520:
    // 0x21e520: 0x91230000  lbu         $v1, 0x0($t1)
    ctx->pc = 0x21e520u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
label_21e524:
    // 0x21e524: 0x326400ff  andi        $a0, $s3, 0xFF
    ctx->pc = 0x21e524u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
label_21e528:
    // 0x21e528: 0x91220001  lbu         $v0, 0x1($t1)
    ctx->pc = 0x21e528u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 1)));
label_21e52c:
    // 0x21e52c: 0x91280002  lbu         $t0, 0x2($t1)
    ctx->pc = 0x21e52cu;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 2)));
label_21e530:
    // 0x21e530: 0x91270003  lbu         $a3, 0x3($t1)
    ctx->pc = 0x21e530u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 3)));
label_21e534:
    // 0x21e534: 0x91260004  lbu         $a2, 0x4($t1)
    ctx->pc = 0x21e534u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 4)));
label_21e538:
    // 0x21e538: 0x91250005  lbu         $a1, 0x5($t1)
    ctx->pc = 0x21e538u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 5)));
label_21e53c:
    // 0x21e53c: 0x35021  addu        $t2, $zero, $v1
    ctx->pc = 0x21e53cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
label_21e540:
    // 0x21e540: 0x1425021  addu        $t2, $t2, $v0
    ctx->pc = 0x21e540u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
label_21e544:
    // 0x21e544: 0x91230006  lbu         $v1, 0x6($t1)
    ctx->pc = 0x21e544u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 6)));
label_21e548:
    // 0x21e548: 0x91220007  lbu         $v0, 0x7($t1)
    ctx->pc = 0x21e548u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 7)));
label_21e54c:
    // 0x21e54c: 0x1485021  addu        $t2, $t2, $t0
    ctx->pc = 0x21e54cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 8)));
label_21e550:
    // 0x21e550: 0x1475021  addu        $t2, $t2, $a3
    ctx->pc = 0x21e550u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 7)));
label_21e554:
    // 0x21e554: 0x1465021  addu        $t2, $t2, $a2
    ctx->pc = 0x21e554u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 6)));
label_21e558:
    // 0x21e558: 0x1455021  addu        $t2, $t2, $a1
    ctx->pc = 0x21e558u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 5)));
label_21e55c:
    // 0x21e55c: 0x1435021  addu        $t2, $t2, $v1
    ctx->pc = 0x21e55cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
label_21e560:
    // 0x21e560: 0x1425021  addu        $t2, $t2, $v0
    ctx->pc = 0x21e560u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
label_21e564:
    // 0x21e564: 0xa1c02  srl         $v1, $t2, 16
    ctx->pc = 0x21e564u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 10), 16));
label_21e568:
    // 0x21e568: 0x3142ffff  andi        $v0, $t2, 0xFFFF
    ctx->pc = 0x21e568u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)65535);
label_21e56c:
    // 0x21e56c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x21e56cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_21e570:
    // 0x21e570: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21e570u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_21e574:
    // 0x21e574: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x21e574u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
label_21e578:
    // 0x21e578: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x21e578u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
label_21e57c:
    // 0x21e57c: 0x10820003  beq         $a0, $v0, . + 4 + (0x3 << 2)
label_21e580:
    if (ctx->pc == 0x21E580u) {
        ctx->pc = 0x21E584u;
        goto label_21e584;
    }
    ctx->pc = 0x21E57Cu;
    {
        const bool branch_taken_0x21e57c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x21e57c) {
            ctx->pc = 0x21E58Cu;
            goto label_21e58c;
        }
    }
    ctx->pc = 0x21E584u;
label_21e584:
    // 0x21e584: 0x10000002  b           . + 4 + (0x2 << 2)
label_21e588:
    if (ctx->pc == 0x21E588u) {
        ctx->pc = 0x21E588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E584u;
        // 0x21e588: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E58Cu;
        goto label_21e58c;
    }
    ctx->pc = 0x21E584u;
    {
        const bool branch_taken_0x21e584 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E584u;
        // 0x21e588: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e584) {
            ctx->pc = 0x21E590u;
            goto label_21e590;
        }
    }
    ctx->pc = 0x21E58Cu;
label_21e58c:
    // 0x21e58c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21e58cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21e590:
    // 0x21e590: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
label_21e594:
    if (ctx->pc == 0x21E594u) {
        ctx->pc = 0x21E598u;
        goto label_21e598;
    }
    ctx->pc = 0x21E590u;
    {
        const bool branch_taken_0x21e590 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x21e590) {
            ctx->pc = 0x21E5A0u;
            goto label_21e5a0;
        }
    }
    ctx->pc = 0x21E598u;
label_21e598:
    // 0x21e598: 0x10000032  b           . + 4 + (0x32 << 2)
label_21e59c:
    if (ctx->pc == 0x21E59Cu) {
        ctx->pc = 0x21E59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E598u;
        // 0x21e59c: 0x24020080  addiu       $v0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E5A0u;
        goto label_21e5a0;
    }
    ctx->pc = 0x21E598u;
    {
        const bool branch_taken_0x21e598 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E598u;
        // 0x21e59c: 0x24020080  addiu       $v0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e598) {
            ctx->pc = 0x21E664u;
            goto label_21e664;
        }
    }
    ctx->pc = 0x21E5A0u;
label_21e5a0:
    // 0x21e5a0: 0xdfa400c0  ld          $a0, 0xC0($sp)
    ctx->pc = 0x21e5a0u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 192)));
label_21e5a4:
    // 0x21e5a4: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x21e5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
label_21e5a8:
    // 0x21e5a8: 0xc06d9fe  jal         func_1B67F8
label_21e5ac:
    if (ctx->pc == 0x21E5ACu) {
        ctx->pc = 0x21E5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E5A8u;
        // 0x21e5ac: 0x2283c  dsll32      $a1, $v0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E5B0u;
        goto label_21e5b0;
    }
    ctx->pc = 0x21E5A8u;
    SET_GPR_U32(ctx, 31, 0x21E5B0u);
    ctx->pc = 0x21E5ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E5A8u;
    // 0x21e5ac: 0x2283c  dsll32      $a1, $v0, 0 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B67F8u;
    { ctx->pc = 0x1b67f8; return; }
    ctx->pc = 0x21E5B0u;
label_21e5b0:
    // 0x21e5b0: 0xffa200c0  sd          $v0, 0xC0($sp)
    ctx->pc = 0x21e5b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 2));
label_21e5b4:
    // 0x21e5b4: 0xde440000  ld          $a0, 0x0($s2)
    ctx->pc = 0x21e5b4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 18), 0)));
label_21e5b8:
    // 0x21e5b8: 0x24020800  addiu       $v0, $zero, 0x800
    ctx->pc = 0x21e5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
label_21e5bc:
    // 0x21e5bc: 0xc06d9fe  jal         func_1B67F8
label_21e5c0:
    if (ctx->pc == 0x21E5C0u) {
        ctx->pc = 0x21E5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E5BCu;
        // 0x21e5c0: 0x2283c  dsll32      $a1, $v0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E5C4u;
        goto label_21e5c4;
    }
    ctx->pc = 0x21E5BCu;
    SET_GPR_U32(ctx, 31, 0x21E5C4u);
    ctx->pc = 0x21E5C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E5BCu;
    // 0x21e5c0: 0x2283c  dsll32      $a1, $v0, 0 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B67F8u;
    { ctx->pc = 0x1b67f8; return; }
    ctx->pc = 0x21E5C4u;
label_21e5c4:
    // 0x21e5c4: 0xfe420000  sd          $v0, 0x0($s2)
    ctx->pc = 0x21e5c4u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 2));
label_21e5c8:
    // 0x21e5c8: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x21e5c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_21e5cc:
    // 0x21e5cc: 0xc0875d0  jal         func_21D740
label_21e5d0:
    if (ctx->pc == 0x21E5D0u) {
        ctx->pc = 0x21E5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E5CCu;
        // 0x21e5d0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E5D4u;
        goto label_21e5d4;
    }
    ctx->pc = 0x21E5CCu;
    SET_GPR_U32(ctx, 31, 0x21E5D4u);
    ctx->pc = 0x21E5D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E5CCu;
    // 0x21e5d0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D740u;
    { ctx->pc = 0x21d740; return; }
    ctx->pc = 0x21E5D4u;
label_21e5d4:
    // 0x21e5d4: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x21e5d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_21e5d8:
    // 0x21e5d8: 0x0  nop
    ctx->pc = 0x21e5d8u;
    // NOP
label_21e5dc:
    // 0x21e5dc: 0x2c810010  sltiu       $at, $a0, 0x10
    ctx->pc = 0x21e5dcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_21e5e0:
    // 0x21e5e0: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
label_21e5e4:
    if (ctx->pc == 0x21E5E4u) {
        ctx->pc = 0x21E5E8u;
        goto label_21e5e8;
    }
    ctx->pc = 0x21E5E0u;
    {
        const bool branch_taken_0x21e5e0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x21e5e0) {
            ctx->pc = 0x21E5F0u;
            goto label_21e5f0;
        }
    }
    ctx->pc = 0x21E5E8u;
label_21e5e8:
    // 0x21e5e8: 0x1000fffc  b           . + 4 + (-0x4 << 2)
label_21e5ec:
    if (ctx->pc == 0x21E5ECu) {
        ctx->pc = 0x21E5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E5E8u;
        // 0x21e5ec: 0x42042  srl         $a0, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E5F0u;
        goto label_21e5f0;
    }
    ctx->pc = 0x21E5E8u;
    {
        const bool branch_taken_0x21e5e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E5E8u;
        // 0x21e5ec: 0x42042  srl         $a0, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e5e8) {
            ctx->pc = 0x21E5DCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21e5dc;
        }
    }
    ctx->pc = 0x21E5F0u;
label_21e5f0:
    // 0x21e5f0: 0x3084000f  andi        $a0, $a0, 0xF
    ctx->pc = 0x21e5f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
label_21e5f4:
    // 0x21e5f4: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x21e5f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
label_21e5f8:
    // 0x21e5f8: 0x41082  srl         $v0, $a0, 2
    ctx->pc = 0x21e5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 2));
label_21e5fc:
    // 0x21e5fc: 0x30650001  andi        $a1, $v1, 0x1
    ctx->pc = 0x21e5fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_21e600:
    // 0x21e600: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x21e600u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_21e604:
    // 0x21e604: 0x2182b  sltu        $v1, $zero, $v0
    ctx->pc = 0x21e604u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_21e608:
    // 0x21e608: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x21e608u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_21e60c:
    // 0x21e60c: 0x38640001  xori        $a0, $v1, 0x1
    ctx->pc = 0x21e60cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_21e610:
    // 0x21e610: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x21e610u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_21e614:
    // 0x21e614: 0x38430001  xori        $v1, $v0, 0x1
    ctx->pc = 0x21e614u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_21e618:
    // 0x21e618: 0x111042  srl         $v0, $s1, 1
    ctx->pc = 0x21e618u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
label_21e61c:
    // 0x21e61c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x21e61cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_21e620:
    // 0x21e620: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
label_21e624:
    if (ctx->pc == 0x21E624u) {
        ctx->pc = 0x21E624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E620u;
        // 0x21e624: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E628u;
        goto label_21e628;
    }
    ctx->pc = 0x21E620u;
    {
        const bool branch_taken_0x21e620 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x21E624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E620u;
        // 0x21e624: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e620) {
            ctx->pc = 0x21E650u;
            goto label_21e650;
        }
    }
    ctx->pc = 0x21E628u;
label_21e628:
    // 0x21e628: 0x1110c2  srl         $v0, $s1, 3
    ctx->pc = 0x21e628u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 17), 3));
label_21e62c:
    // 0x21e62c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x21e62cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_21e630:
    // 0x21e630: 0x14a20006  bne         $a1, $v0, . + 4 + (0x6 << 2)
label_21e634:
    if (ctx->pc == 0x21E634u) {
        ctx->pc = 0x21E634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E630u;
        // 0x21e634: 0x1111c2  srl         $v0, $s1, 7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 17), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E638u;
        goto label_21e638;
    }
    ctx->pc = 0x21E630u;
    {
        const bool branch_taken_0x21e630 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x21E634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E630u;
        // 0x21e634: 0x1111c2  srl         $v0, $s1, 7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 17), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e630) {
            ctx->pc = 0x21E64Cu;
            goto label_21e64c;
        }
    }
    ctx->pc = 0x21E638u;
label_21e638:
    // 0x21e638: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x21e638u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_21e63c:
    // 0x21e63c: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
label_21e640:
    if (ctx->pc == 0x21E640u) {
        ctx->pc = 0x21E644u;
        goto label_21e644;
    }
    ctx->pc = 0x21E63Cu;
    {
        const bool branch_taken_0x21e63c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x21e63c) {
            ctx->pc = 0x21E64Cu;
            goto label_21e64c;
        }
    }
    ctx->pc = 0x21E644u;
label_21e644:
    // 0x21e644: 0x10000002  b           . + 4 + (0x2 << 2)
label_21e648:
    if (ctx->pc == 0x21E648u) {
        ctx->pc = 0x21E648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E644u;
        // 0x21e648: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E64Cu;
        goto label_21e64c;
    }
    ctx->pc = 0x21E644u;
    {
        const bool branch_taken_0x21e644 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E644u;
        // 0x21e648: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e644) {
            ctx->pc = 0x21E650u;
            goto label_21e650;
        }
    }
    ctx->pc = 0x21E64Cu;
label_21e64c:
    // 0x21e64c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x21e64cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_21e650:
    // 0x21e650: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
label_21e654:
    if (ctx->pc == 0x21E654u) {
        ctx->pc = 0x21E658u;
        goto label_21e658;
    }
    ctx->pc = 0x21E650u;
    {
        const bool branch_taken_0x21e650 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x21e650) {
            ctx->pc = 0x21E660u;
            goto label_21e660;
        }
    }
    ctx->pc = 0x21E658u;
label_21e658:
    // 0x21e658: 0x10000002  b           . + 4 + (0x2 << 2)
label_21e65c:
    if (ctx->pc == 0x21E65Cu) {
        ctx->pc = 0x21E65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E658u;
        // 0x21e65c: 0x24020400  addiu       $v0, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E660u;
        goto label_21e660;
    }
    ctx->pc = 0x21E658u;
    {
        const bool branch_taken_0x21e658 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E658u;
        // 0x21e65c: 0x24020400  addiu       $v0, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e658) {
            ctx->pc = 0x21E664u;
            goto label_21e664;
        }
    }
    ctx->pc = 0x21E660u;
label_21e660:
    // 0x21e660: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x21e660u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21e664:
    // 0x21e664: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x21e664u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_21e668:
    // 0x21e668: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x21e668u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_21e66c:
    // 0x21e66c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x21e66cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_21e670:
    // 0x21e670: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x21e670u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_21e674:
    // 0x21e674: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x21e674u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_21e678:
    // 0x21e678: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x21e678u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_21e67c:
    // 0x21e67c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x21e67cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_21e680:
    // 0x21e680: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x21e680u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_21e684:
    // 0x21e684: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x21e684u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_21e688:
    // 0x21e688: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x21e688u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_21e68c:
    // 0x21e68c: 0x3e00008  jr          $ra
label_21e690:
    if (ctx->pc == 0x21E690u) {
        ctx->pc = 0x21E690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E68Cu;
        // 0x21e690: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E694u;
        goto label_21e694;
    }
    ctx->pc = 0x21E68Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21E690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E68Cu;
        // 0x21e690: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21E68Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21E694u;
label_21e694:
    // 0x21e694: 0x0  nop
    ctx->pc = 0x21e694u;
    // NOP
label_21e698:
    // 0x21e698: 0x0  nop
    ctx->pc = 0x21e698u;
    // NOP
label_21e69c:
    // 0x21e69c: 0x0  nop
    ctx->pc = 0x21e69cu;
    // NOP
label_21e6a0:
    // 0x21e6a0: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x21e6a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
label_21e6a4:
    // 0x21e6a4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x21e6a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_21e6a8:
    // 0x21e6a8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x21e6a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_21e6ac:
    // 0x21e6ac: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x21e6acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_21e6b0:
    // 0x21e6b0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x21e6b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_21e6b4:
    // 0x21e6b4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x21e6b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_21e6b8:
    // 0x21e6b8: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x21e6b8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_21e6bc:
    // 0x21e6bc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x21e6bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_21e6c0:
    // 0x21e6c0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x21e6c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_21e6c4:
    // 0x21e6c4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x21e6c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_21e6c8:
    // 0x21e6c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x21e6c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_21e6cc:
    // 0x21e6cc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x21e6ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21e6d0:
    // 0x21e6d0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x21e6d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_21e6d4:
    // 0x21e6d4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x21e6d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_21e6d8:
    // 0x21e6d8: 0xc08770c  jal         func_21DC30
label_21e6dc:
    if (ctx->pc == 0x21E6DCu) {
        ctx->pc = 0x21E6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E6D8u;
        // 0x21e6dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E6E0u;
        goto label_21e6e0;
    }
    ctx->pc = 0x21E6D8u;
    SET_GPR_U32(ctx, 31, 0x21E6E0u);
    ctx->pc = 0x21E6DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E6D8u;
    // 0x21e6dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21DC30u;
    { ctx->pc = 0x21dc30; return; }
    ctx->pc = 0x21E6E0u;
label_21e6e0:
    // 0x21e6e0: 0x8e300050  lw          $s0, 0x50($s1)
    ctx->pc = 0x21e6e0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_21e6e4:
    // 0x21e6e4: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x21e6e4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
label_21e6e8:
    // 0x21e6e8: 0x2e010010  sltiu       $at, $s0, 0x10
    ctx->pc = 0x21e6e8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_21e6ec:
    // 0x21e6ec: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
label_21e6f0:
    if (ctx->pc == 0x21E6F0u) {
        ctx->pc = 0x21E6F4u;
        goto label_21e6f4;
    }
    ctx->pc = 0x21E6ECu;
    {
        const bool branch_taken_0x21e6ec = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x21e6ec) {
            ctx->pc = 0x21E6FCu;
            goto label_21e6fc;
        }
    }
    ctx->pc = 0x21E6F4u;
label_21e6f4:
    // 0x21e6f4: 0x1000fffc  b           . + 4 + (-0x4 << 2)
label_21e6f8:
    if (ctx->pc == 0x21E6F8u) {
        ctx->pc = 0x21E6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E6F4u;
        // 0x21e6f8: 0x108042  srl         $s0, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E6FCu;
        goto label_21e6fc;
    }
    ctx->pc = 0x21E6F4u;
    {
        const bool branch_taken_0x21e6f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E6F4u;
        // 0x21e6f8: 0x108042  srl         $s0, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e6f4) {
            ctx->pc = 0x21E6E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21e6e8;
        }
    }
    ctx->pc = 0x21E6FCu;
label_21e6fc:
    // 0x21e6fc: 0x0  nop
    ctx->pc = 0x21e6fcu;
    // NOP
label_21e700:
    // 0x21e700: 0xc06c236  jal         func_1B08D8
label_21e704:
    if (ctx->pc == 0x21E704u) {
        ctx->pc = 0x21E704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E700u;
        // 0x21e704: 0x27a40138  addiu       $a0, $sp, 0x138 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 312));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E708u;
        goto label_21e708;
    }
    ctx->pc = 0x21E700u;
    SET_GPR_U32(ctx, 31, 0x21E708u);
    ctx->pc = 0x21E704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E700u;
    // 0x21e704: 0x27a40138  addiu       $a0, $sp, 0x138 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 312));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B08D8u;
    { ctx->pc = 0x1b08d8; return; }
    ctx->pc = 0x21E708u;
label_21e708:
    // 0x21e708: 0x93a20138  lbu         $v0, 0x138($sp)
    ctx->pc = 0x21e708u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 312)));
label_21e70c:
    // 0x21e70c: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
label_21e710:
    if (ctx->pc == 0x21E710u) {
        ctx->pc = 0x21E714u;
        goto label_21e714;
    }
    ctx->pc = 0x21E70Cu;
    {
        const bool branch_taken_0x21e70c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21e70c) {
            ctx->pc = 0x21E77Cu;
            goto label_21e77c;
        }
    }
    ctx->pc = 0x21E714u;
label_21e714:
    // 0x21e714: 0xc08f0cc  jal         func_23C330
label_21e718:
    if (ctx->pc == 0x21E718u) {
        ctx->pc = 0x21E71Cu;
        goto label_21e71c;
    }
    ctx->pc = 0x21E714u;
    SET_GPR_U32(ctx, 31, 0x21E71Cu);
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x21E71Cu;
label_21e71c:
    // 0x21e71c: 0xc08f0c6  jal         func_23C318
label_21e720:
    if (ctx->pc == 0x21E720u) {
        ctx->pc = 0x21E720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E71Cu;
        // 0x21e720: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E724u;
        goto label_21e724;
    }
    ctx->pc = 0x21E71Cu;
    SET_GPR_U32(ctx, 31, 0x21E724u);
    ctx->pc = 0x21E720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E71Cu;
    // 0x21e720: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C318u;
    { ctx->pc = 0x23c318; return; }
    ctx->pc = 0x21E724u;
label_21e724:
    // 0x21e724: 0xc08f0cc  jal         func_23C330
label_21e728:
    if (ctx->pc == 0x21E728u) {
        ctx->pc = 0x21E72Cu;
        goto label_21e72c;
    }
    ctx->pc = 0x21E724u;
    SET_GPR_U32(ctx, 31, 0x21E72Cu);
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x21E72Cu;
label_21e72c:
    // 0x21e72c: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x21e72cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_21e730:
    // 0x21e730: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x21e730u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_21e734:
    // 0x21e734: 0x0  nop
    ctx->pc = 0x21e734u;
    // NOP
label_21e738:
    // 0x21e738: 0x0  nop
    ctx->pc = 0x21e738u;
    // NOP
label_21e73c:
    // 0x21e73c: 0x1010  mfhi        $v0
    ctx->pc = 0x21e73cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_21e740:
    // 0x21e740: 0xc08f0cc  jal         func_23C330
label_21e744:
    if (ctx->pc == 0x21E744u) {
        ctx->pc = 0x21E744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E740u;
        // 0x21e744: 0xa3a2013a  sb          $v0, 0x13A($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 314), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E748u;
        goto label_21e748;
    }
    ctx->pc = 0x21E740u;
    SET_GPR_U32(ctx, 31, 0x21E748u);
    ctx->pc = 0x21E744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E740u;
    // 0x21e744: 0xa3a2013a  sb          $v0, 0x13A($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 314), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x21E748u;
label_21e748:
    // 0x21e748: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x21e748u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_21e74c:
    // 0x21e74c: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x21e74cu;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_21e750:
    // 0x21e750: 0x0  nop
    ctx->pc = 0x21e750u;
    // NOP
label_21e754:
    // 0x21e754: 0x0  nop
    ctx->pc = 0x21e754u;
    // NOP
label_21e758:
    // 0x21e758: 0x1010  mfhi        $v0
    ctx->pc = 0x21e758u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_21e75c:
    // 0x21e75c: 0xc08f0cc  jal         func_23C330
label_21e760:
    if (ctx->pc == 0x21E760u) {
        ctx->pc = 0x21E760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E75Cu;
        // 0x21e760: 0xa3a20139  sb          $v0, 0x139($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 313), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E764u;
        goto label_21e764;
    }
    ctx->pc = 0x21E75Cu;
    SET_GPR_U32(ctx, 31, 0x21E764u);
    ctx->pc = 0x21E760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E75Cu;
    // 0x21e760: 0xa3a20139  sb          $v0, 0x139($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 313), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x21E764u;
label_21e764:
    // 0x21e764: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x21e764u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_21e768:
    // 0x21e768: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x21e768u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_21e76c:
    // 0x21e76c: 0x0  nop
    ctx->pc = 0x21e76cu;
    // NOP
label_21e770:
    // 0x21e770: 0x0  nop
    ctx->pc = 0x21e770u;
    // NOP
label_21e774:
    // 0x21e774: 0x1010  mfhi        $v0
    ctx->pc = 0x21e774u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_21e778:
    // 0x21e778: 0xa3a2013b  sb          $v0, 0x13B($sp)
    ctx->pc = 0x21e778u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 315), (uint8_t)GPR_U32(ctx, 2));
label_21e77c:
    // 0x21e77c: 0x3210000f  andi        $s0, $s0, 0xF
    ctx->pc = 0x21e77cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)15);
label_21e780:
    // 0x21e780: 0x93a8013b  lbu         $t0, 0x13B($sp)
    ctx->pc = 0x21e780u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 315)));
label_21e784:
    // 0x21e784: 0x93a7013a  lbu         $a3, 0x13A($sp)
    ctx->pc = 0x21e784u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 314)));
label_21e788:
    // 0x21e788: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x21e788u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
label_21e78c:
    // 0x21e78c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x21e78cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_21e790:
    // 0x21e790: 0x93a60139  lbu         $a2, 0x139($sp)
    ctx->pc = 0x21e790u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 313)));
label_21e794:
    // 0x21e794: 0x38430001  xori        $v1, $v0, 0x1
    ctx->pc = 0x21e794u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_21e798:
    // 0x21e798: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x21e798u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_21e79c:
    // 0x21e79c: 0x101042  srl         $v0, $s0, 1
    ctx->pc = 0x21e79cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
label_21e7a0:
    // 0x21e7a0: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x21e7a0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_21e7a4:
    // 0x21e7a4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x21e7a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_21e7a8:
    // 0x21e7a8: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x21e7a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_21e7ac:
    // 0x21e7ac: 0x101082  srl         $v0, $s0, 2
    ctx->pc = 0x21e7acu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), 2));
label_21e7b0:
    // 0x21e7b0: 0x1073821  addu        $a3, $t0, $a3
    ctx->pc = 0x21e7b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
label_21e7b4:
    // 0x21e7b4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x21e7b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_21e7b8:
    // 0x21e7b8: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x21e7b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_21e7bc:
    // 0x21e7bc: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x21e7bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_21e7c0:
    // 0x21e7c0: 0x30d30075  andi        $s3, $a2, 0x75
    ctx->pc = 0x21e7c0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)117);
label_21e7c4:
    // 0x21e7c4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x21e7c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_21e7c8:
    // 0x21e7c8: 0x2649825  or          $s3, $s3, $a0
    ctx->pc = 0x21e7c8u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | GPR_U64(ctx, 4));
label_21e7cc:
    // 0x21e7cc: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x21e7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
label_21e7d0:
    // 0x21e7d0: 0x2639825  or          $s3, $s3, $v1
    ctx->pc = 0x21e7d0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | GPR_U64(ctx, 3));
label_21e7d4:
    // 0x21e7d4: 0x2629825  or          $s3, $s3, $v0
    ctx->pc = 0x21e7d4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | GPR_U64(ctx, 2));
label_21e7d8:
    // 0x21e7d8: 0xc08774c  jal         func_21DD30
label_21e7dc:
    if (ctx->pc == 0x21E7DCu) {
        ctx->pc = 0x21E7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E7D8u;
        // 0x21e7dc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E7E0u;
        goto label_21e7e0;
    }
    ctx->pc = 0x21E7D8u;
    SET_GPR_U32(ctx, 31, 0x21E7E0u);
    ctx->pc = 0x21E7DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E7D8u;
    // 0x21e7dc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21DD30u;
    { ctx->pc = 0x21dd30; return; }
    ctx->pc = 0x21E7E0u;
label_21e7e0:
    // 0x21e7e0: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x21e7e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_21e7e4:
    // 0x21e7e4: 0xc08763c  jal         func_21D8F0
label_21e7e8:
    if (ctx->pc == 0x21E7E8u) {
        ctx->pc = 0x21E7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E7E4u;
        // 0x21e7e8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E7ECu;
        goto label_21e7ec;
    }
    ctx->pc = 0x21E7E4u;
    SET_GPR_U32(ctx, 31, 0x21E7ECu);
    ctx->pc = 0x21E7E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E7E4u;
    // 0x21e7e8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D8F0u;
    { ctx->pc = 0x21d8f0; return; }
    ctx->pc = 0x21E7ECu;
label_21e7ec:
    // 0x21e7ec: 0xc6210058  lwc1        $f1, 0x58($s1)
    ctx->pc = 0x21e7ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_21e7f0:
    // 0x21e7f0: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x21e7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_21e7f4:
    // 0x21e7f4: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x21e7f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_21e7f8:
    // 0x21e7f8: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x21e7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_21e7fc:
    // 0x21e7fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21e7fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_21e800:
    // 0x21e800: 0x0  nop
    ctx->pc = 0x21e800u;
    // NOP
label_21e804:
    // 0x21e804: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x21e804u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_21e808:
    // 0x21e808: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x21e808u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_21e80c:
    // 0x21e80c: 0x0  nop
    ctx->pc = 0x21e80cu;
    // NOP
label_21e810:
    // 0x21e810: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_21e814:
    if (ctx->pc == 0x21E814u) {
        ctx->pc = 0x21E818u;
        goto label_21e818;
    }
    ctx->pc = 0x21E810u;
    {
        const bool branch_taken_0x21e810 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x21e810) {
            ctx->pc = 0x21E828u;
            goto label_21e828;
        }
    }
    ctx->pc = 0x21E818u;
label_21e818:
    // 0x21e818: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x21e818u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_21e81c:
    // 0x21e81c: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x21e81cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_21e820:
    // 0x21e820: 0x10000008  b           . + 4 + (0x8 << 2)
label_21e824:
    if (ctx->pc == 0x21E824u) {
        ctx->pc = 0x21E824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E820u;
        // 0x21e824: 0x2c6100bf  sltiu       $at, $v1, 0xBF (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)191) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E828u;
        goto label_21e828;
    }
    ctx->pc = 0x21E820u;
    {
        const bool branch_taken_0x21e820 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E820u;
        // 0x21e824: 0x2c6100bf  sltiu       $at, $v1, 0xBF (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)191) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e820) {
            ctx->pc = 0x21E844u;
            goto label_21e844;
        }
    }
    ctx->pc = 0x21E828u;
label_21e828:
    // 0x21e828: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x21e828u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_21e82c:
    // 0x21e82c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x21e82cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_21e830:
    // 0x21e830: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x21e830u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_21e834:
    // 0x21e834: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x21e834u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_21e838:
    // 0x21e838: 0x0  nop
    ctx->pc = 0x21e838u;
    // NOP
label_21e83c:
    // 0x21e83c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x21e83cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_21e840:
    // 0x21e840: 0x2c6100bf  sltiu       $at, $v1, 0xBF
    ctx->pc = 0x21e840u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)191) ? 1 : 0);
label_21e844:
    // 0x21e844: 0x14200020  bnez        $at, . + 4 + (0x20 << 2)
label_21e848:
    if (ctx->pc == 0x21E848u) {
        ctx->pc = 0x21E848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E844u;
        // 0x21e848: 0x3c02cccc  lui         $v0, 0xCCCC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52428 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E84Cu;
        goto label_21e84c;
    }
    ctx->pc = 0x21E844u;
    {
        const bool branch_taken_0x21e844 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x21E848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E844u;
        // 0x21e848: 0x3c02cccc  lui         $v0, 0xCCCC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52428 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e844) {
            ctx->pc = 0x21E8C8u;
            goto label_21e8c8;
        }
    }
    ctx->pc = 0x21E84Cu;
label_21e84c:
    // 0x21e84c: 0xc08f0cc  jal         func_23C330
label_21e850:
    if (ctx->pc == 0x21E850u) {
        ctx->pc = 0x21E854u;
        goto label_21e854;
    }
    ctx->pc = 0x21E84Cu;
    SET_GPR_U32(ctx, 31, 0x21E854u);
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x21E854u;
label_21e854:
    // 0x21e854: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
label_21e858:
    if (ctx->pc == 0x21E858u) {
        ctx->pc = 0x21E858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E854u;
        // 0x21e858: 0x3043001f  andi        $v1, $v0, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E85Cu;
        goto label_21e85c;
    }
    ctx->pc = 0x21E854u;
    {
        const bool branch_taken_0x21e854 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x21E858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E854u;
        // 0x21e858: 0x3043001f  andi        $v1, $v0, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e854) {
            ctx->pc = 0x21E868u;
            goto label_21e868;
        }
    }
    ctx->pc = 0x21E85Cu;
label_21e85c:
    // 0x21e85c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_21e860:
    if (ctx->pc == 0x21E860u) {
        ctx->pc = 0x21E860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E85Cu;
        // 0x21e860: 0x24640020  addiu       $a0, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E864u;
        goto label_21e864;
    }
    ctx->pc = 0x21E85Cu;
    {
        const bool branch_taken_0x21e85c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E85Cu;
        // 0x21e860: 0x24640020  addiu       $a0, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e85c) {
            ctx->pc = 0x21E86Cu;
            goto label_21e86c;
        }
    }
    ctx->pc = 0x21E864u;
label_21e864:
    // 0x21e864: 0x2463ffe0  addiu       $v1, $v1, -0x20
    ctx->pc = 0x21e864u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967264));
label_21e868:
    // 0x21e868: 0x24640020  addiu       $a0, $v1, 0x20
    ctx->pc = 0x21e868u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
label_21e86c:
    // 0x21e86c: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x21e86cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_21e870:
    // 0x21e870: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x21e870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_21e874:
    // 0x21e874: 0x2442005a  addiu       $v0, $v0, 0x5A
    ctx->pc = 0x21e874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 90));
label_21e878:
    // 0x21e878: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_21e87c:
    if (ctx->pc == 0x21E87Cu) {
        ctx->pc = 0x21E880u;
        goto label_21e880;
    }
    ctx->pc = 0x21E878u;
    {
        const bool branch_taken_0x21e878 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x21e878) {
            ctx->pc = 0x21E88Cu;
            goto label_21e88c;
        }
    }
    ctx->pc = 0x21E880u;
label_21e880:
    // 0x21e880: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21e880u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_21e884:
    // 0x21e884: 0x10000008  b           . + 4 + (0x8 << 2)
label_21e888:
    if (ctx->pc == 0x21E888u) {
        ctx->pc = 0x21E888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E884u;
        // 0x21e888: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E88Cu;
        goto label_21e88c;
    }
    ctx->pc = 0x21E884u;
    {
        const bool branch_taken_0x21e884 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E884u;
        // 0x21e888: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e884) {
            ctx->pc = 0x21E8A8u;
            goto label_21e8a8;
        }
    }
    ctx->pc = 0x21E88Cu;
label_21e88c:
    // 0x21e88c: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x21e88cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_21e890:
    // 0x21e890: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x21e890u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_21e894:
    // 0x21e894: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x21e894u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_21e898:
    // 0x21e898: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x21e898u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_21e89c:
    // 0x21e89c: 0x0  nop
    ctx->pc = 0x21e89cu;
    // NOP
label_21e8a0:
    // 0x21e8a0: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x21e8a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_21e8a4:
    // 0x21e8a4: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x21e8a4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_21e8a8:
    // 0x21e8a8: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x21e8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_21e8ac:
    // 0x21e8ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21e8acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_21e8b0:
    // 0x21e8b0: 0x0  nop
    ctx->pc = 0x21e8b0u;
    // NOP
label_21e8b4:
    // 0x21e8b4: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x21e8b4u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_21e8b8:
    // 0x21e8b8: 0x0  nop
    ctx->pc = 0x21e8b8u;
    // NOP
label_21e8bc:
    // 0x21e8bc: 0x0  nop
    ctx->pc = 0x21e8bcu;
    // NOP
label_21e8c0:
    // 0x21e8c0: 0x10000008  b           . + 4 + (0x8 << 2)
label_21e8c4:
    if (ctx->pc == 0x21E8C4u) {
        ctx->pc = 0x21E8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E8C0u;
        // 0x21e8c4: 0xe6200058  swc1        $f0, 0x58($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 88), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E8C8u;
        goto label_21e8c8;
    }
    ctx->pc = 0x21E8C0u;
    {
        const bool branch_taken_0x21e8c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E8C0u;
        // 0x21e8c4: 0xe6200058  swc1        $f0, 0x58($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 88), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e8c0) {
            ctx->pc = 0x21E8E4u;
            goto label_21e8e4;
        }
    }
    ctx->pc = 0x21E8C8u;
label_21e8c8:
    // 0x21e8c8: 0x2463ffa6  addiu       $v1, $v1, -0x5A
    ctx->pc = 0x21e8c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967206));
label_21e8cc:
    // 0x21e8cc: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x21e8ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_21e8d0:
    // 0x21e8d0: 0x430019  multu       $v0, $v1
    ctx->pc = 0x21e8d0u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 2) * (uint64_t)GPR_U32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_21e8d4:
    // 0x21e8d4: 0x0  nop
    ctx->pc = 0x21e8d4u;
    // NOP
label_21e8d8:
    // 0x21e8d8: 0x0  nop
    ctx->pc = 0x21e8d8u;
    // NOP
label_21e8dc:
    // 0x21e8dc: 0x1010  mfhi        $v0
    ctx->pc = 0x21e8dcu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_21e8e0:
    // 0x21e8e0: 0x22082  srl         $a0, $v0, 2
    ctx->pc = 0x21e8e0u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
label_21e8e4:
    // 0x21e8e4: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x21e8e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
label_21e8e8:
    // 0x21e8e8: 0x27b000c8  addiu       $s0, $sp, 0xC8
    ctx->pc = 0x21e8e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
label_21e8ec:
    // 0x21e8ec: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x21e8ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_21e8f0:
    // 0x21e8f0: 0x27aa0140  addiu       $t2, $sp, 0x140
    ctx->pc = 0x21e8f0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_21e8f4:
    // 0x21e8f4: 0x3043003f  andi        $v1, $v0, 0x3F
    ctx->pc = 0x21e8f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
label_21e8f8:
    // 0x21e8f8: 0x340cffff  ori         $t4, $zero, 0xFFFF
    ctx->pc = 0x21e8f8u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_21e8fc:
    // 0x21e8fc: 0xde020000  ld          $v0, 0x0($s0)
    ctx->pc = 0x21e8fcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 0)));
label_21e900:
    // 0x21e900: 0x3217c  dsll32      $a0, $v1, 5
    ctx->pc = 0x21e900u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 5));
label_21e904:
    // 0x21e904: 0x27a30148  addiu       $v1, $sp, 0x148
    ctx->pc = 0x21e904u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 328));
label_21e908:
    // 0x21e908: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x21e908u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_21e90c:
    // 0x21e90c: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x21e90cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
label_21e910:
    // 0x21e910: 0xdfa900c0  ld          $t1, 0xC0($sp)
    ctx->pc = 0x21e910u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 29), 192)));
label_21e914:
    // 0x21e914: 0xffa90140  sd          $t1, 0x140($sp)
    ctx->pc = 0x21e914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 9));
label_21e918:
    // 0x21e918: 0x91440000  lbu         $a0, 0x0($t2)
    ctx->pc = 0x21e918u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
label_21e91c:
    // 0x21e91c: 0x91420001  lbu         $v0, 0x1($t2)
    ctx->pc = 0x21e91cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 1)));
label_21e920:
    // 0x21e920: 0x91480002  lbu         $t0, 0x2($t2)
    ctx->pc = 0x21e920u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 2)));
label_21e924:
    // 0x21e924: 0x91470003  lbu         $a3, 0x3($t2)
    ctx->pc = 0x21e924u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 3)));
label_21e928:
    // 0x21e928: 0x91460004  lbu         $a2, 0x4($t2)
    ctx->pc = 0x21e928u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 4)));
label_21e92c:
    // 0x21e92c: 0x91450005  lbu         $a1, 0x5($t2)
    ctx->pc = 0x21e92cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 5)));
label_21e930:
    // 0x21e930: 0x45821  addu        $t3, $zero, $a0
    ctx->pc = 0x21e930u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
label_21e934:
    // 0x21e934: 0x1625821  addu        $t3, $t3, $v0
    ctx->pc = 0x21e934u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
label_21e938:
    // 0x21e938: 0x91440006  lbu         $a0, 0x6($t2)
    ctx->pc = 0x21e938u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 6)));
label_21e93c:
    // 0x21e93c: 0x91420007  lbu         $v0, 0x7($t2)
    ctx->pc = 0x21e93cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 7)));
label_21e940:
    // 0x21e940: 0x1685821  addu        $t3, $t3, $t0
    ctx->pc = 0x21e940u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 8)));
label_21e944:
    // 0x21e944: 0x1675821  addu        $t3, $t3, $a3
    ctx->pc = 0x21e944u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 7)));
label_21e948:
    // 0x21e948: 0x1665821  addu        $t3, $t3, $a2
    ctx->pc = 0x21e948u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 6)));
label_21e94c:
    // 0x21e94c: 0x1655821  addu        $t3, $t3, $a1
    ctx->pc = 0x21e94cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 5)));
label_21e950:
    // 0x21e950: 0x1645821  addu        $t3, $t3, $a0
    ctx->pc = 0x21e950u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 4)));
label_21e954:
    // 0x21e954: 0x1625821  addu        $t3, $t3, $v0
    ctx->pc = 0x21e954u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
label_21e958:
    // 0x21e958: 0x16c2024  and         $a0, $t3, $t4
    ctx->pc = 0x21e958u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 11) & GPR_U64(ctx, 12));
label_21e95c:
    // 0x21e95c: 0xb1402  srl         $v0, $t3, 16
    ctx->pc = 0x21e95cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 11), 16));
label_21e960:
    // 0x21e960: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x21e960u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_21e964:
    // 0x21e964: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21e964u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_21e968:
    // 0x21e968: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x21e968u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
label_21e96c:
    // 0x21e96c: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x21e96cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
label_21e970:
    // 0x21e970: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x21e970u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
label_21e974:
    // 0x21e974: 0x223bc  dsll32      $a0, $v0, 14
    ctx->pc = 0x21e974u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 14));
label_21e978:
    // 0x21e978: 0x1242025  or          $a0, $t1, $a0
    ctx->pc = 0x21e978u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 9) | GPR_U64(ctx, 4));
label_21e97c:
    // 0x21e97c: 0xffa400c0  sd          $a0, 0xC0($sp)
    ctx->pc = 0x21e97cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 4));
label_21e980:
    // 0x21e980: 0xde040000  ld          $a0, 0x0($s0)
    ctx->pc = 0x21e980u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 0)));
label_21e984:
    // 0x21e984: 0xffa40148  sd          $a0, 0x148($sp)
    ctx->pc = 0x21e984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 328), GPR_U64(ctx, 4));
label_21e988:
    // 0x21e988: 0x90650000  lbu         $a1, 0x0($v1)
    ctx->pc = 0x21e988u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_21e98c:
    // 0x21e98c: 0x90640001  lbu         $a0, 0x1($v1)
    ctx->pc = 0x21e98cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
label_21e990:
    // 0x21e990: 0x90690002  lbu         $t1, 0x2($v1)
    ctx->pc = 0x21e990u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_21e994:
    // 0x21e994: 0x90680003  lbu         $t0, 0x3($v1)
    ctx->pc = 0x21e994u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
label_21e998:
    // 0x21e998: 0x90670004  lbu         $a3, 0x4($v1)
    ctx->pc = 0x21e998u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4)));
label_21e99c:
    // 0x21e99c: 0x90660005  lbu         $a2, 0x5($v1)
    ctx->pc = 0x21e99cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 5)));
label_21e9a0:
    // 0x21e9a0: 0x55021  addu        $t2, $zero, $a1
    ctx->pc = 0x21e9a0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 5)));
label_21e9a4:
    // 0x21e9a4: 0x1445021  addu        $t2, $t2, $a0
    ctx->pc = 0x21e9a4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
label_21e9a8:
    // 0x21e9a8: 0x90650006  lbu         $a1, 0x6($v1)
    ctx->pc = 0x21e9a8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 6)));
label_21e9ac:
    // 0x21e9ac: 0x90640007  lbu         $a0, 0x7($v1)
    ctx->pc = 0x21e9acu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 7)));
label_21e9b0:
    // 0x21e9b0: 0x1495021  addu        $t2, $t2, $t1
    ctx->pc = 0x21e9b0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
label_21e9b4:
    // 0x21e9b4: 0x1485021  addu        $t2, $t2, $t0
    ctx->pc = 0x21e9b4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 8)));
label_21e9b8:
    // 0x21e9b8: 0x1475021  addu        $t2, $t2, $a3
    ctx->pc = 0x21e9b8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 7)));
label_21e9bc:
    // 0x21e9bc: 0x1465021  addu        $t2, $t2, $a2
    ctx->pc = 0x21e9bcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 6)));
label_21e9c0:
    // 0x21e9c0: 0x1455021  addu        $t2, $t2, $a1
    ctx->pc = 0x21e9c0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 5)));
label_21e9c4:
    // 0x21e9c4: 0x1445021  addu        $t2, $t2, $a0
    ctx->pc = 0x21e9c4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
label_21e9c8:
    // 0x21e9c8: 0xde030000  ld          $v1, 0x0($s0)
    ctx->pc = 0x21e9c8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 0)));
label_21e9cc:
    // 0x21e9cc: 0xa2c02  srl         $a1, $t2, 16
    ctx->pc = 0x21e9ccu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 10), 16));
label_21e9d0:
    // 0x21e9d0: 0x3144ffff  andi        $a0, $t2, 0xFFFF
    ctx->pc = 0x21e9d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)65535);
label_21e9d4:
    // 0x21e9d4: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x21e9d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_21e9d8:
    // 0x21e9d8: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x21e9d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_21e9dc:
    // 0x21e9dc: 0x3084003f  andi        $a0, $a0, 0x3F
    ctx->pc = 0x21e9dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)63);
label_21e9e0:
    // 0x21e9e0: 0x30840007  andi        $a0, $a0, 0x7
    ctx->pc = 0x21e9e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)7);
label_21e9e4:
    // 0x21e9e4: 0x442825  or          $a1, $v0, $a0
    ctx->pc = 0x21e9e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_21e9e8:
    // 0x21e9e8: 0x412fc  dsll32      $v0, $a0, 11
    ctx->pc = 0x21e9e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 11));
label_21e9ec:
    // 0x21e9ec: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x21e9ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_21e9f0:
    // 0x21e9f0: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x21e9f0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
label_21e9f4:
    // 0x21e9f4: 0x519ba  dsrl        $v1, $a1, 6
    ctx->pc = 0x21e9f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) >> 6);
label_21e9f8:
    // 0x21e9f8: 0x30a2003f  andi        $v0, $a1, 0x3F
    ctx->pc = 0x21e9f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)63);
label_21e9fc:
    // 0x21e9fc: 0x62182d  daddu       $v1, $v1, $v0
    ctx->pc = 0x21e9fcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 2));
label_21ea00:
    // 0x21ea00: 0x8f8292d4  lw          $v0, -0x6D2C($gp)
    ctx->pc = 0x21ea00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939348)));
label_21ea04:
    // 0x21ea04: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_21ea08:
    if (ctx->pc == 0x21EA08u) {
        ctx->pc = 0x21EA0Cu;
        goto label_21ea0c;
    }
    ctx->pc = 0x21EA04u;
    {
        const bool branch_taken_0x21ea04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21ea04) {
            ctx->pc = 0x21EA10u;
            goto label_21ea10;
        }
    }
    ctx->pc = 0x21EA0Cu;
label_21ea0c:
    // 0x21ea0c: 0x64630001  daddiu      $v1, $v1, 0x1
    ctx->pc = 0x21ea0cu;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)1);
label_21ea10:
    // 0x21ea10: 0xde020000  ld          $v0, 0x0($s0)
    ctx->pc = 0x21ea10u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 0)));
label_21ea14:
    // 0x21ea14: 0x3063003f  andi        $v1, $v1, 0x3F
    ctx->pc = 0x21ea14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
label_21ea18:
    // 0x21ea18: 0x31bbc  dsll32      $v1, $v1, 14
    ctx->pc = 0x21ea18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 14));
label_21ea1c:
    // 0x21ea1c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x21ea1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_21ea20:
    // 0x21ea20: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x21ea20u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
label_21ea24:
    // 0x21ea24: 0x27a200a8  addiu       $v0, $sp, 0xA8
    ctx->pc = 0x21ea24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
label_21ea28:
    // 0x21ea28: 0x8c540000  lw          $s4, 0x0($v0)
    ctx->pc = 0x21ea28u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_21ea2c:
    // 0x21ea2c: 0x2e810035  sltiu       $at, $s4, 0x35
    ctx->pc = 0x21ea2cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)53) ? 1 : 0);
label_21ea30:
    // 0x21ea30: 0x14200005  bnez        $at, . + 4 + (0x5 << 2)
label_21ea34:
    if (ctx->pc == 0x21EA34u) {
        ctx->pc = 0x21EA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EA30u;
        // 0x21ea34: 0x24020034  addiu       $v0, $zero, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21EA38u;
        goto label_21ea38;
    }
    ctx->pc = 0x21EA30u;
    {
        const bool branch_taken_0x21ea30 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x21EA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EA30u;
        // 0x21ea34: 0x24020034  addiu       $v0, $zero, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ea30) {
            ctx->pc = 0x21EA48u;
            goto label_21ea48;
        }
    }
    ctx->pc = 0x21EA38u;
label_21ea38:
    // 0x21ea38: 0x282001b  divu        $zero, $s4, $v0
    ctx->pc = 0x21ea38u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 20) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 20) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,20); } }
label_21ea3c:
    // 0x21ea3c: 0x0  nop
    ctx->pc = 0x21ea3cu;
    // NOP
label_21ea40:
    // 0x21ea40: 0x0  nop
    ctx->pc = 0x21ea40u;
    // NOP
label_21ea44:
    // 0x21ea44: 0xa010  mfhi        $s4
    ctx->pc = 0x21ea44u;
    SET_GPR_U64(ctx, 20, ctx->hi);
label_21ea48:
    // 0x21ea48: 0xdfb500c0  ld          $s5, 0xC0($sp)
    ctx->pc = 0x21ea48u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 192)));
label_21ea4c:
    // 0x21ea4c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21ea4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21ea50:
    // 0x21ea50: 0x2822814  dsllv       $a1, $v0, $s4
    ctx->pc = 0x21ea50u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (GPR_U32(ctx, 20) & 0x3F));
label_21ea54:
    // 0x21ea54: 0xc06d9fe  jal         func_1B67F8
label_21ea58:
    if (ctx->pc == 0x21EA58u) {
        ctx->pc = 0x21EA58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EA54u;
        // 0x21ea58: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21EA5Cu;
        goto label_21ea5c;
    }
    ctx->pc = 0x21EA54u;
    SET_GPR_U32(ctx, 31, 0x21EA5Cu);
    ctx->pc = 0x21EA58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21EA54u;
    // 0x21ea58: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B67F8u;
    { ctx->pc = 0x1b67f8; return; }
    ctx->pc = 0x21EA5Cu;
label_21ea5c:
    // 0x21ea5c: 0x24040034  addiu       $a0, $zero, 0x34
    ctx->pc = 0x21ea5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
label_21ea60:
    // 0x21ea60: 0x2951816  dsrlv       $v1, $s5, $s4
    ctx->pc = 0x21ea60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) >> (GPR_U32(ctx, 20) & 0x3F));
label_21ea64:
    // 0x21ea64: 0x942023  subu        $a0, $a0, $s4
    ctx->pc = 0x21ea64u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
label_21ea68:
    // 0x21ea68: 0x27b700ac  addiu       $s7, $sp, 0xAC
    ctx->pc = 0x21ea68u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
label_21ea6c:
    // 0x21ea6c: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x21ea6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
label_21ea70:
    // 0x21ea70: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x21ea70u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21ea74:
    // 0x21ea74: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x21ea74u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
label_21ea78:
    // 0x21ea78: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x21ea78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
label_21ea7c:
    // 0x21ea7c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x21ea7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_21ea80:
    // 0x21ea80: 0xffa200c0  sd          $v0, 0xC0($sp)
    ctx->pc = 0x21ea80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 2));
label_21ea84:
    // 0x21ea84: 0x27a200b0  addiu       $v0, $sp, 0xB0
    ctx->pc = 0x21ea84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_21ea88:
    // 0x21ea88: 0x8c550000  lw          $s5, 0x0($v0)
    ctx->pc = 0x21ea88u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_21ea8c:
    // 0x21ea8c: 0x8ee20000  lw          $v0, 0x0($s7)
    ctx->pc = 0x21ea8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_21ea90:
    // 0x21ea90: 0x0  nop
    ctx->pc = 0x21ea90u;
    // NOP
label_21ea94:
    // 0x21ea94: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x21ea94u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_21ea98:
    // 0x21ea98: 0x2403000d  addiu       $v1, $zero, 0xD
    ctx->pc = 0x21ea98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_21ea9c:
    // 0x21ea9c: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x21ea9cu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_21eaa0:
    // 0x21eaa0: 0x15a842  srl         $s5, $s5, 1
    ctx->pc = 0x21eaa0u;
    SET_GPR_S32(ctx, 21, (int32_t)SRL32(GPR_U32(ctx, 21), 1));
label_21eaa4:
    // 0x21eaa4: 0x0  nop
    ctx->pc = 0x21eaa4u;
    // NOP
label_21eaa8:
    // 0x21eaa8: 0x2810  mfhi        $a1
    ctx->pc = 0x21eaa8u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_21eaac:
    // 0x21eaac: 0x2a3001b  divu        $zero, $s5, $v1
    ctx->pc = 0x21eaacu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 21) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 21) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,21); } }
label_21eab0:
    // 0x21eab0: 0x0  nop
    ctx->pc = 0x21eab0u;
    // NOP
label_21eab4:
    // 0x21eab4: 0x0  nop
    ctx->pc = 0x21eab4u;
    // NOP
label_21eab8:
    // 0x21eab8: 0x3010  mfhi        $a2
    ctx->pc = 0x21eab8u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_21eabc:
    // 0x21eabc: 0xc087588  jal         func_21D620
label_21eac0:
    if (ctx->pc == 0x21EAC0u) {
        ctx->pc = 0x21EAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EABCu;
        // 0x21eac0: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21EAC4u;
        goto label_21eac4;
    }
    ctx->pc = 0x21EABCu;
    SET_GPR_U32(ctx, 31, 0x21EAC4u);
    ctx->pc = 0x21EAC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21EABCu;
    // 0x21eac0: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D620u;
    { ctx->pc = 0x21d620; return; }
    ctx->pc = 0x21EAC4u;
label_21eac4:
    // 0x21eac4: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x21eac4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_21eac8:
    // 0x21eac8: 0x2a830008  slti        $v1, $s4, 0x8
    ctx->pc = 0x21eac8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)8) ? 1 : 0);
label_21eacc:
    // 0x21eacc: 0x1460fff1  bnez        $v1, . + 4 + (-0xF << 2)
label_21ead0:
    if (ctx->pc == 0x21EAD0u) {
        ctx->pc = 0x21EAD4u;
        goto label_21ead4;
    }
    ctx->pc = 0x21EACCu;
    {
        const bool branch_taken_0x21eacc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x21eacc) {
            ctx->pc = 0x21EA94u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21ea94;
        }
    }
    ctx->pc = 0x21EAD4u;
label_21ead4:
    // 0x21ead4: 0x8fb500a0  lw          $s5, 0xA0($sp)
    ctx->pc = 0x21ead4u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_21ead8:
    // 0x21ead8: 0x27be00a4  addiu       $fp, $sp, 0xA4
    ctx->pc = 0x21ead8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 164));
label_21eadc:
    // 0x21eadc: 0x3c02000f  lui         $v0, 0xF
    ctx->pc = 0x21eadcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
label_21eae0:
    // 0x21eae0: 0x9fc40000  lwu         $a0, 0x0($fp)
    ctx->pc = 0x21eae0u;
    SET_GPR_ZE32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_21eae4:
    // 0x21eae4: 0x3445ffff  ori         $a1, $v0, 0xFFFF
    ctx->pc = 0x21eae4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_21eae8:
    // 0x21eae8: 0xdfa300c0  ld          $v1, 0xC0($sp)
    ctx->pc = 0x21eae8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 192)));
label_21eaec:
    // 0x21eaec: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x21eaecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21eaf0:
    // 0x21eaf0: 0x2a52824  and         $a1, $s5, $a1
    ctx->pc = 0x21eaf0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 21) & GPR_U64(ctx, 5));
label_21eaf4:
    // 0x21eaf4: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x21eaf4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
label_21eaf8:
    // 0x21eaf8: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x21eaf8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
label_21eafc:
    // 0x21eafc: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x21eafcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
label_21eb00:
    // 0x21eb00: 0xa42025  or          $a0, $a1, $a0
    ctx->pc = 0x21eb00u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
label_21eb04:
    // 0x21eb04: 0x642026  xor         $a0, $v1, $a0
    ctx->pc = 0x21eb04u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 4));
label_21eb08:
    // 0x21eb08: 0xffa400c0  sd          $a0, 0xC0($sp)
    ctx->pc = 0x21eb08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 4));
label_21eb0c:
    // 0x21eb0c: 0x9ee30000  lwu         $v1, 0x0($s7)
    ctx->pc = 0x21eb0cu;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_21eb10:
    // 0x21eb10: 0x83182d  daddu       $v1, $a0, $v1
    ctx->pc = 0x21eb10u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 3));
label_21eb14:
    // 0x21eb14: 0xffa300c0  sd          $v1, 0xC0($sp)
    ctx->pc = 0x21eb14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 3));
label_21eb18:
    // 0x21eb18: 0x27a300a8  addiu       $v1, $sp, 0xA8
    ctx->pc = 0x21eb18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
label_21eb1c:
    // 0x21eb1c: 0x8c740000  lw          $s4, 0x0($v1)
    ctx->pc = 0x21eb1cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_21eb20:
    // 0x21eb20: 0x0  nop
    ctx->pc = 0x21eb20u;
    // NOP
label_21eb24:
    // 0x21eb24: 0x14a042  srl         $s4, $s4, 1
    ctx->pc = 0x21eb24u;
    SET_GPR_S32(ctx, 20, (int32_t)SRL32(GPR_U32(ctx, 20), 1));
label_21eb28:
    // 0x21eb28: 0x2403000d  addiu       $v1, $zero, 0xD
    ctx->pc = 0x21eb28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_21eb2c:
    // 0x21eb2c: 0x283001b  divu        $zero, $s4, $v1
    ctx->pc = 0x21eb2cu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 20) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 20) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,20); } }
label_21eb30:
    // 0x21eb30: 0x15a842  srl         $s5, $s5, 1
    ctx->pc = 0x21eb30u;
    SET_GPR_S32(ctx, 21, (int32_t)SRL32(GPR_U32(ctx, 21), 1));
label_21eb34:
    // 0x21eb34: 0x0  nop
    ctx->pc = 0x21eb34u;
    // NOP
label_21eb38:
    // 0x21eb38: 0x2810  mfhi        $a1
    ctx->pc = 0x21eb38u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_21eb3c:
    // 0x21eb3c: 0x2a3001b  divu        $zero, $s5, $v1
    ctx->pc = 0x21eb3cu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 21) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 21) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,21); } }
label_21eb40:
    // 0x21eb40: 0x0  nop
    ctx->pc = 0x21eb40u;
    // NOP
label_21eb44:
    // 0x21eb44: 0x0  nop
    ctx->pc = 0x21eb44u;
    // NOP
label_21eb48:
    // 0x21eb48: 0x3010  mfhi        $a2
    ctx->pc = 0x21eb48u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_21eb4c:
    // 0x21eb4c: 0xc087588  jal         func_21D620
label_21eb50:
    if (ctx->pc == 0x21EB50u) {
        ctx->pc = 0x21EB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EB4Cu;
        // 0x21eb50: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21EB54u;
        goto label_21eb54;
    }
    ctx->pc = 0x21EB4Cu;
    SET_GPR_U32(ctx, 31, 0x21EB54u);
    ctx->pc = 0x21EB50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21EB4Cu;
    // 0x21eb50: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D620u;
    { ctx->pc = 0x21d620; return; }
    ctx->pc = 0x21EB54u;
label_21eb54:
    // 0x21eb54: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x21eb54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_21eb58:
    // 0x21eb58: 0x28430008  slti        $v1, $v0, 0x8
    ctx->pc = 0x21eb58u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
label_21eb5c:
    // 0x21eb5c: 0x1460fff1  bnez        $v1, . + 4 + (-0xF << 2)
label_21eb60:
    if (ctx->pc == 0x21EB60u) {
        ctx->pc = 0x21EB64u;
        goto label_21eb64;
    }
    ctx->pc = 0x21EB5Cu;
    {
        const bool branch_taken_0x21eb5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x21eb5c) {
            ctx->pc = 0x21EB24u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21eb24;
        }
    }
    ctx->pc = 0x21EB64u;
label_21eb64:
    // 0x21eb64: 0x8fd40000  lw          $s4, 0x0($fp)
    ctx->pc = 0x21eb64u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_21eb68:
    // 0x21eb68: 0x2e810035  sltiu       $at, $s4, 0x35
    ctx->pc = 0x21eb68u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)53) ? 1 : 0);
label_21eb6c:
    // 0x21eb6c: 0x14200005  bnez        $at, . + 4 + (0x5 << 2)
label_21eb70:
    if (ctx->pc == 0x21EB70u) {
        ctx->pc = 0x21EB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EB6Cu;
        // 0x21eb70: 0x24020034  addiu       $v0, $zero, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21EB74u;
        goto label_21eb74;
    }
    ctx->pc = 0x21EB6Cu;
    {
        const bool branch_taken_0x21eb6c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x21EB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EB6Cu;
        // 0x21eb70: 0x24020034  addiu       $v0, $zero, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21eb6c) {
            ctx->pc = 0x21EB84u;
            goto label_21eb84;
        }
    }
    ctx->pc = 0x21EB74u;
label_21eb74:
    // 0x21eb74: 0x282001b  divu        $zero, $s4, $v0
    ctx->pc = 0x21eb74u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 20) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 20) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,20); } }
label_21eb78:
    // 0x21eb78: 0x0  nop
    ctx->pc = 0x21eb78u;
    // NOP
label_21eb7c:
    // 0x21eb7c: 0x0  nop
    ctx->pc = 0x21eb7cu;
    // NOP
label_21eb80:
    // 0x21eb80: 0xa010  mfhi        $s4
    ctx->pc = 0x21eb80u;
    SET_GPR_U64(ctx, 20, ctx->hi);
label_21eb84:
    // 0x21eb84: 0xdfb500c0  ld          $s5, 0xC0($sp)
    ctx->pc = 0x21eb84u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 192)));
label_21eb88:
    // 0x21eb88: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21eb88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21eb8c:
    // 0x21eb8c: 0x2822814  dsllv       $a1, $v0, $s4
    ctx->pc = 0x21eb8cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (GPR_U32(ctx, 20) & 0x3F));
label_21eb90:
    // 0x21eb90: 0xc06d9fe  jal         func_1B67F8
label_21eb94:
    if (ctx->pc == 0x21EB94u) {
        ctx->pc = 0x21EB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EB90u;
        // 0x21eb94: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21EB98u;
        goto label_21eb98;
    }
    ctx->pc = 0x21EB90u;
    SET_GPR_U32(ctx, 31, 0x21EB98u);
    ctx->pc = 0x21EB94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21EB90u;
    // 0x21eb94: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B67F8u;
    { ctx->pc = 0x1b67f8; return; }
    ctx->pc = 0x21EB98u;
label_21eb98:
    // 0x21eb98: 0x24050034  addiu       $a1, $zero, 0x34
    ctx->pc = 0x21eb98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
label_21eb9c:
    // 0x21eb9c: 0x2951816  dsrlv       $v1, $s5, $s4
    ctx->pc = 0x21eb9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) >> (GPR_U32(ctx, 20) & 0x3F));
label_21eba0:
    // 0x21eba0: 0xb42023  subu        $a0, $a1, $s4
    ctx->pc = 0x21eba0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 20)));
label_21eba4:
    // 0x21eba4: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x21eba4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    ctx->pc = 0x21eba8u;
    return;
}
