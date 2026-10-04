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

// Function: FUN_0019b910
// Address: 0x19b910 - 0x29b9f0
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0019b910_part236(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x20e500u: goto label_20e500;
        case 0x20e504u: goto label_20e504;
        case 0x20e508u: goto label_20e508;
        case 0x20e50cu: goto label_20e50c;
        case 0x20e510u: goto label_20e510;
        case 0x20e514u: goto label_20e514;
        case 0x20e518u: goto label_20e518;
        case 0x20e51cu: goto label_20e51c;
        case 0x20e520u: goto label_20e520;
        case 0x20e524u: goto label_20e524;
        case 0x20e528u: goto label_20e528;
        case 0x20e52cu: goto label_20e52c;
        case 0x20e530u: goto label_20e530;
        case 0x20e534u: goto label_20e534;
        case 0x20e538u: goto label_20e538;
        case 0x20e53cu: goto label_20e53c;
        case 0x20e540u: goto label_20e540;
        case 0x20e544u: goto label_20e544;
        case 0x20e548u: goto label_20e548;
        case 0x20e54cu: goto label_20e54c;
        case 0x20e550u: goto label_20e550;
        case 0x20e554u: goto label_20e554;
        case 0x20e558u: goto label_20e558;
        case 0x20e55cu: goto label_20e55c;
        case 0x20e560u: goto label_20e560;
        case 0x20e564u: goto label_20e564;
        case 0x20e568u: goto label_20e568;
        case 0x20e56cu: goto label_20e56c;
        case 0x20e570u: goto label_20e570;
        case 0x20e574u: goto label_20e574;
        case 0x20e578u: goto label_20e578;
        case 0x20e57cu: goto label_20e57c;
        case 0x20e580u: goto label_20e580;
        case 0x20e584u: goto label_20e584;
        case 0x20e588u: goto label_20e588;
        case 0x20e58cu: goto label_20e58c;
        case 0x20e590u: goto label_20e590;
        case 0x20e594u: goto label_20e594;
        case 0x20e598u: goto label_20e598;
        case 0x20e59cu: goto label_20e59c;
        case 0x20e5a0u: goto label_20e5a0;
        case 0x20e5a4u: goto label_20e5a4;
        case 0x20e5a8u: goto label_20e5a8;
        case 0x20e5acu: goto label_20e5ac;
        case 0x20e5b0u: goto label_20e5b0;
        case 0x20e5b4u: goto label_20e5b4;
        case 0x20e5b8u: goto label_20e5b8;
        case 0x20e5bcu: goto label_20e5bc;
        case 0x20e5c0u: goto label_20e5c0;
        case 0x20e5c4u: goto label_20e5c4;
        case 0x20e5c8u: goto label_20e5c8;
        case 0x20e5ccu: goto label_20e5cc;
        case 0x20e5d0u: goto label_20e5d0;
        case 0x20e5d4u: goto label_20e5d4;
        case 0x20e5d8u: goto label_20e5d8;
        case 0x20e5dcu: goto label_20e5dc;
        case 0x20e5e0u: goto label_20e5e0;
        case 0x20e5e4u: goto label_20e5e4;
        case 0x20e5e8u: goto label_20e5e8;
        case 0x20e5ecu: goto label_20e5ec;
        case 0x20e5f0u: goto label_20e5f0;
        case 0x20e5f4u: goto label_20e5f4;
        case 0x20e5f8u: goto label_20e5f8;
        case 0x20e5fcu: goto label_20e5fc;
        case 0x20e600u: goto label_20e600;
        case 0x20e604u: goto label_20e604;
        case 0x20e608u: goto label_20e608;
        case 0x20e60cu: goto label_20e60c;
        case 0x20e610u: goto label_20e610;
        case 0x20e614u: goto label_20e614;
        case 0x20e618u: goto label_20e618;
        case 0x20e61cu: goto label_20e61c;
        case 0x20e620u: goto label_20e620;
        case 0x20e624u: goto label_20e624;
        case 0x20e628u: goto label_20e628;
        case 0x20e62cu: goto label_20e62c;
        case 0x20e630u: goto label_20e630;
        case 0x20e634u: goto label_20e634;
        case 0x20e638u: goto label_20e638;
        case 0x20e63cu: goto label_20e63c;
        case 0x20e640u: goto label_20e640;
        case 0x20e644u: goto label_20e644;
        case 0x20e648u: goto label_20e648;
        case 0x20e64cu: goto label_20e64c;
        case 0x20e650u: goto label_20e650;
        case 0x20e654u: goto label_20e654;
        case 0x20e658u: goto label_20e658;
        case 0x20e65cu: goto label_20e65c;
        case 0x20e660u: goto label_20e660;
        case 0x20e664u: goto label_20e664;
        case 0x20e668u: goto label_20e668;
        case 0x20e66cu: goto label_20e66c;
        case 0x20e670u: goto label_20e670;
        case 0x20e674u: goto label_20e674;
        case 0x20e678u: goto label_20e678;
        case 0x20e67cu: goto label_20e67c;
        case 0x20e680u: goto label_20e680;
        case 0x20e684u: goto label_20e684;
        case 0x20e688u: goto label_20e688;
        case 0x20e68cu: goto label_20e68c;
        case 0x20e690u: goto label_20e690;
        case 0x20e694u: goto label_20e694;
        case 0x20e698u: goto label_20e698;
        case 0x20e69cu: goto label_20e69c;
        case 0x20e6a0u: goto label_20e6a0;
        case 0x20e6a4u: goto label_20e6a4;
        case 0x20e6a8u: goto label_20e6a8;
        case 0x20e6acu: goto label_20e6ac;
        case 0x20e6b0u: goto label_20e6b0;
        case 0x20e6b4u: goto label_20e6b4;
        case 0x20e6b8u: goto label_20e6b8;
        case 0x20e6bcu: goto label_20e6bc;
        case 0x20e6c0u: goto label_20e6c0;
        case 0x20e6c4u: goto label_20e6c4;
        case 0x20e6c8u: goto label_20e6c8;
        case 0x20e6ccu: goto label_20e6cc;
        case 0x20e6d0u: goto label_20e6d0;
        case 0x20e6d4u: goto label_20e6d4;
        case 0x20e6d8u: goto label_20e6d8;
        case 0x20e6dcu: goto label_20e6dc;
        case 0x20e6e0u: goto label_20e6e0;
        case 0x20e6e4u: goto label_20e6e4;
        case 0x20e6e8u: goto label_20e6e8;
        case 0x20e6ecu: goto label_20e6ec;
        case 0x20e6f0u: goto label_20e6f0;
        case 0x20e6f4u: goto label_20e6f4;
        case 0x20e6f8u: goto label_20e6f8;
        case 0x20e6fcu: goto label_20e6fc;
        case 0x20e700u: goto label_20e700;
        case 0x20e704u: goto label_20e704;
        case 0x20e708u: goto label_20e708;
        case 0x20e70cu: goto label_20e70c;
        case 0x20e710u: goto label_20e710;
        case 0x20e714u: goto label_20e714;
        case 0x20e718u: goto label_20e718;
        case 0x20e71cu: goto label_20e71c;
        case 0x20e720u: goto label_20e720;
        case 0x20e724u: goto label_20e724;
        case 0x20e728u: goto label_20e728;
        case 0x20e72cu: goto label_20e72c;
        case 0x20e730u: goto label_20e730;
        case 0x20e734u: goto label_20e734;
        case 0x20e738u: goto label_20e738;
        case 0x20e73cu: goto label_20e73c;
        case 0x20e740u: goto label_20e740;
        case 0x20e744u: goto label_20e744;
        case 0x20e748u: goto label_20e748;
        case 0x20e74cu: goto label_20e74c;
        case 0x20e750u: goto label_20e750;
        case 0x20e754u: goto label_20e754;
        case 0x20e758u: goto label_20e758;
        case 0x20e75cu: goto label_20e75c;
        case 0x20e760u: goto label_20e760;
        case 0x20e764u: goto label_20e764;
        case 0x20e768u: goto label_20e768;
        case 0x20e76cu: goto label_20e76c;
        case 0x20e770u: goto label_20e770;
        case 0x20e774u: goto label_20e774;
        case 0x20e778u: goto label_20e778;
        case 0x20e77cu: goto label_20e77c;
        case 0x20e780u: goto label_20e780;
        case 0x20e784u: goto label_20e784;
        case 0x20e788u: goto label_20e788;
        case 0x20e78cu: goto label_20e78c;
        case 0x20e790u: goto label_20e790;
        case 0x20e794u: goto label_20e794;
        case 0x20e798u: goto label_20e798;
        case 0x20e79cu: goto label_20e79c;
        case 0x20e7a0u: goto label_20e7a0;
        case 0x20e7a4u: goto label_20e7a4;
        case 0x20e7a8u: goto label_20e7a8;
        case 0x20e7acu: goto label_20e7ac;
        case 0x20e7b0u: goto label_20e7b0;
        case 0x20e7b4u: goto label_20e7b4;
        case 0x20e7b8u: goto label_20e7b8;
        case 0x20e7bcu: goto label_20e7bc;
        case 0x20e7c0u: goto label_20e7c0;
        case 0x20e7c4u: goto label_20e7c4;
        case 0x20e7c8u: goto label_20e7c8;
        case 0x20e7ccu: goto label_20e7cc;
        case 0x20e7d0u: goto label_20e7d0;
        case 0x20e7d4u: goto label_20e7d4;
        case 0x20e7d8u: goto label_20e7d8;
        case 0x20e7dcu: goto label_20e7dc;
        case 0x20e7e0u: goto label_20e7e0;
        case 0x20e7e4u: goto label_20e7e4;
        case 0x20e7e8u: goto label_20e7e8;
        case 0x20e7ecu: goto label_20e7ec;
        case 0x20e7f0u: goto label_20e7f0;
        case 0x20e7f4u: goto label_20e7f4;
        case 0x20e7f8u: goto label_20e7f8;
        case 0x20e7fcu: goto label_20e7fc;
        case 0x20e800u: goto label_20e800;
        case 0x20e804u: goto label_20e804;
        case 0x20e808u: goto label_20e808;
        case 0x20e80cu: goto label_20e80c;
        case 0x20e810u: goto label_20e810;
        case 0x20e814u: goto label_20e814;
        case 0x20e818u: goto label_20e818;
        case 0x20e81cu: goto label_20e81c;
        case 0x20e820u: goto label_20e820;
        case 0x20e824u: goto label_20e824;
        case 0x20e828u: goto label_20e828;
        case 0x20e82cu: goto label_20e82c;
        case 0x20e830u: goto label_20e830;
        case 0x20e834u: goto label_20e834;
        case 0x20e838u: goto label_20e838;
        case 0x20e83cu: goto label_20e83c;
        case 0x20e840u: goto label_20e840;
        case 0x20e844u: goto label_20e844;
        case 0x20e848u: goto label_20e848;
        case 0x20e84cu: goto label_20e84c;
        case 0x20e850u: goto label_20e850;
        case 0x20e854u: goto label_20e854;
        case 0x20e858u: goto label_20e858;
        case 0x20e85cu: goto label_20e85c;
        case 0x20e860u: goto label_20e860;
        case 0x20e864u: goto label_20e864;
        case 0x20e868u: goto label_20e868;
        case 0x20e86cu: goto label_20e86c;
        case 0x20e870u: goto label_20e870;
        case 0x20e874u: goto label_20e874;
        case 0x20e878u: goto label_20e878;
        case 0x20e87cu: goto label_20e87c;
        case 0x20e880u: goto label_20e880;
        case 0x20e884u: goto label_20e884;
        case 0x20e888u: goto label_20e888;
        case 0x20e88cu: goto label_20e88c;
        case 0x20e890u: goto label_20e890;
        case 0x20e894u: goto label_20e894;
        case 0x20e898u: goto label_20e898;
        case 0x20e89cu: goto label_20e89c;
        case 0x20e8a0u: goto label_20e8a0;
        case 0x20e8a4u: goto label_20e8a4;
        case 0x20e8a8u: goto label_20e8a8;
        case 0x20e8acu: goto label_20e8ac;
        case 0x20e8b0u: goto label_20e8b0;
        case 0x20e8b4u: goto label_20e8b4;
        case 0x20e8b8u: goto label_20e8b8;
        case 0x20e8bcu: goto label_20e8bc;
        case 0x20e8c0u: goto label_20e8c0;
        case 0x20e8c4u: goto label_20e8c4;
        case 0x20e8c8u: goto label_20e8c8;
        case 0x20e8ccu: goto label_20e8cc;
        case 0x20e8d0u: goto label_20e8d0;
        case 0x20e8d4u: goto label_20e8d4;
        case 0x20e8d8u: goto label_20e8d8;
        case 0x20e8dcu: goto label_20e8dc;
        case 0x20e8e0u: goto label_20e8e0;
        case 0x20e8e4u: goto label_20e8e4;
        case 0x20e8e8u: goto label_20e8e8;
        case 0x20e8ecu: goto label_20e8ec;
        case 0x20e8f0u: goto label_20e8f0;
        case 0x20e8f4u: goto label_20e8f4;
        case 0x20e8f8u: goto label_20e8f8;
        case 0x20e8fcu: goto label_20e8fc;
        case 0x20e900u: goto label_20e900;
        case 0x20e904u: goto label_20e904;
        case 0x20e908u: goto label_20e908;
        case 0x20e90cu: goto label_20e90c;
        case 0x20e910u: goto label_20e910;
        case 0x20e914u: goto label_20e914;
        case 0x20e918u: goto label_20e918;
        case 0x20e91cu: goto label_20e91c;
        case 0x20e920u: goto label_20e920;
        case 0x20e924u: goto label_20e924;
        case 0x20e928u: goto label_20e928;
        case 0x20e92cu: goto label_20e92c;
        case 0x20e930u: goto label_20e930;
        case 0x20e934u: goto label_20e934;
        case 0x20e938u: goto label_20e938;
        case 0x20e93cu: goto label_20e93c;
        case 0x20e940u: goto label_20e940;
        case 0x20e944u: goto label_20e944;
        case 0x20e948u: goto label_20e948;
        case 0x20e94cu: goto label_20e94c;
        case 0x20e950u: goto label_20e950;
        case 0x20e954u: goto label_20e954;
        case 0x20e958u: goto label_20e958;
        case 0x20e95cu: goto label_20e95c;
        case 0x20e960u: goto label_20e960;
        case 0x20e964u: goto label_20e964;
        case 0x20e968u: goto label_20e968;
        case 0x20e96cu: goto label_20e96c;
        case 0x20e970u: goto label_20e970;
        case 0x20e974u: goto label_20e974;
        case 0x20e978u: goto label_20e978;
        case 0x20e97cu: goto label_20e97c;
        case 0x20e980u: goto label_20e980;
        case 0x20e984u: goto label_20e984;
        case 0x20e988u: goto label_20e988;
        case 0x20e98cu: goto label_20e98c;
        case 0x20e990u: goto label_20e990;
        case 0x20e994u: goto label_20e994;
        case 0x20e998u: goto label_20e998;
        case 0x20e99cu: goto label_20e99c;
        case 0x20e9a0u: goto label_20e9a0;
        case 0x20e9a4u: goto label_20e9a4;
        case 0x20e9a8u: goto label_20e9a8;
        case 0x20e9acu: goto label_20e9ac;
        case 0x20e9b0u: goto label_20e9b0;
        case 0x20e9b4u: goto label_20e9b4;
        case 0x20e9b8u: goto label_20e9b8;
        case 0x20e9bcu: goto label_20e9bc;
        case 0x20e9c0u: goto label_20e9c0;
        case 0x20e9c4u: goto label_20e9c4;
        case 0x20e9c8u: goto label_20e9c8;
        case 0x20e9ccu: goto label_20e9cc;
        case 0x20e9d0u: goto label_20e9d0;
        case 0x20e9d4u: goto label_20e9d4;
        case 0x20e9d8u: goto label_20e9d8;
        case 0x20e9dcu: goto label_20e9dc;
        case 0x20e9e0u: goto label_20e9e0;
        case 0x20e9e4u: goto label_20e9e4;
        case 0x20e9e8u: goto label_20e9e8;
        case 0x20e9ecu: goto label_20e9ec;
        case 0x20e9f0u: goto label_20e9f0;
        case 0x20e9f4u: goto label_20e9f4;
        case 0x20e9f8u: goto label_20e9f8;
        case 0x20e9fcu: goto label_20e9fc;
        case 0x20ea00u: goto label_20ea00;
        case 0x20ea04u: goto label_20ea04;
        case 0x20ea08u: goto label_20ea08;
        case 0x20ea0cu: goto label_20ea0c;
        case 0x20ea10u: goto label_20ea10;
        case 0x20ea14u: goto label_20ea14;
        case 0x20ea18u: goto label_20ea18;
        case 0x20ea1cu: goto label_20ea1c;
        case 0x20ea20u: goto label_20ea20;
        case 0x20ea24u: goto label_20ea24;
        case 0x20ea28u: goto label_20ea28;
        case 0x20ea2cu: goto label_20ea2c;
        case 0x20ea30u: goto label_20ea30;
        case 0x20ea34u: goto label_20ea34;
        case 0x20ea38u: goto label_20ea38;
        case 0x20ea3cu: goto label_20ea3c;
        case 0x20ea40u: goto label_20ea40;
        case 0x20ea44u: goto label_20ea44;
        case 0x20ea48u: goto label_20ea48;
        case 0x20ea4cu: goto label_20ea4c;
        case 0x20ea50u: goto label_20ea50;
        case 0x20ea54u: goto label_20ea54;
        case 0x20ea58u: goto label_20ea58;
        case 0x20ea5cu: goto label_20ea5c;
        case 0x20ea60u: goto label_20ea60;
        case 0x20ea64u: goto label_20ea64;
        case 0x20ea68u: goto label_20ea68;
        case 0x20ea6cu: goto label_20ea6c;
        case 0x20ea70u: goto label_20ea70;
        case 0x20ea74u: goto label_20ea74;
        case 0x20ea78u: goto label_20ea78;
        case 0x20ea7cu: goto label_20ea7c;
        case 0x20ea80u: goto label_20ea80;
        case 0x20ea84u: goto label_20ea84;
        case 0x20ea88u: goto label_20ea88;
        case 0x20ea8cu: goto label_20ea8c;
        case 0x20ea90u: goto label_20ea90;
        case 0x20ea94u: goto label_20ea94;
        case 0x20ea98u: goto label_20ea98;
        case 0x20ea9cu: goto label_20ea9c;
        case 0x20eaa0u: goto label_20eaa0;
        case 0x20eaa4u: goto label_20eaa4;
        case 0x20eaa8u: goto label_20eaa8;
        case 0x20eaacu: goto label_20eaac;
        case 0x20eab0u: goto label_20eab0;
        case 0x20eab4u: goto label_20eab4;
        case 0x20eab8u: goto label_20eab8;
        case 0x20eabcu: goto label_20eabc;
        case 0x20eac0u: goto label_20eac0;
        case 0x20eac4u: goto label_20eac4;
        case 0x20eac8u: goto label_20eac8;
        case 0x20eaccu: goto label_20eacc;
        case 0x20ead0u: goto label_20ead0;
        case 0x20ead4u: goto label_20ead4;
        case 0x20ead8u: goto label_20ead8;
        case 0x20eadcu: goto label_20eadc;
        case 0x20eae0u: goto label_20eae0;
        case 0x20eae4u: goto label_20eae4;
        case 0x20eae8u: goto label_20eae8;
        case 0x20eaecu: goto label_20eaec;
        case 0x20eaf0u: goto label_20eaf0;
        case 0x20eaf4u: goto label_20eaf4;
        case 0x20eaf8u: goto label_20eaf8;
        case 0x20eafcu: goto label_20eafc;
        case 0x20eb00u: goto label_20eb00;
        case 0x20eb04u: goto label_20eb04;
        case 0x20eb08u: goto label_20eb08;
        case 0x20eb0cu: goto label_20eb0c;
        case 0x20eb10u: goto label_20eb10;
        case 0x20eb14u: goto label_20eb14;
        case 0x20eb18u: goto label_20eb18;
        case 0x20eb1cu: goto label_20eb1c;
        case 0x20eb20u: goto label_20eb20;
        case 0x20eb24u: goto label_20eb24;
        case 0x20eb28u: goto label_20eb28;
        case 0x20eb2cu: goto label_20eb2c;
        case 0x20eb30u: goto label_20eb30;
        case 0x20eb34u: goto label_20eb34;
        case 0x20eb38u: goto label_20eb38;
        case 0x20eb3cu: goto label_20eb3c;
        case 0x20eb40u: goto label_20eb40;
        case 0x20eb44u: goto label_20eb44;
        case 0x20eb48u: goto label_20eb48;
        case 0x20eb4cu: goto label_20eb4c;
        case 0x20eb50u: goto label_20eb50;
        case 0x20eb54u: goto label_20eb54;
        case 0x20eb58u: goto label_20eb58;
        case 0x20eb5cu: goto label_20eb5c;
        case 0x20eb60u: goto label_20eb60;
        case 0x20eb64u: goto label_20eb64;
        case 0x20eb68u: goto label_20eb68;
        case 0x20eb6cu: goto label_20eb6c;
        case 0x20eb70u: goto label_20eb70;
        case 0x20eb74u: goto label_20eb74;
        case 0x20eb78u: goto label_20eb78;
        case 0x20eb7cu: goto label_20eb7c;
        case 0x20eb80u: goto label_20eb80;
        case 0x20eb84u: goto label_20eb84;
        case 0x20eb88u: goto label_20eb88;
        case 0x20eb8cu: goto label_20eb8c;
        case 0x20eb90u: goto label_20eb90;
        case 0x20eb94u: goto label_20eb94;
        case 0x20eb98u: goto label_20eb98;
        case 0x20eb9cu: goto label_20eb9c;
        case 0x20eba0u: goto label_20eba0;
        case 0x20eba4u: goto label_20eba4;
        case 0x20eba8u: goto label_20eba8;
        case 0x20ebacu: goto label_20ebac;
        case 0x20ebb0u: goto label_20ebb0;
        case 0x20ebb4u: goto label_20ebb4;
        case 0x20ebb8u: goto label_20ebb8;
        case 0x20ebbcu: goto label_20ebbc;
        case 0x20ebc0u: goto label_20ebc0;
        case 0x20ebc4u: goto label_20ebc4;
        case 0x20ebc8u: goto label_20ebc8;
        case 0x20ebccu: goto label_20ebcc;
        case 0x20ebd0u: goto label_20ebd0;
        case 0x20ebd4u: goto label_20ebd4;
        case 0x20ebd8u: goto label_20ebd8;
        case 0x20ebdcu: goto label_20ebdc;
        case 0x20ebe0u: goto label_20ebe0;
        case 0x20ebe4u: goto label_20ebe4;
        case 0x20ebe8u: goto label_20ebe8;
        case 0x20ebecu: goto label_20ebec;
        case 0x20ebf0u: goto label_20ebf0;
        case 0x20ebf4u: goto label_20ebf4;
        case 0x20ebf8u: goto label_20ebf8;
        case 0x20ebfcu: goto label_20ebfc;
        case 0x20ec00u: goto label_20ec00;
        case 0x20ec04u: goto label_20ec04;
        case 0x20ec08u: goto label_20ec08;
        case 0x20ec0cu: goto label_20ec0c;
        case 0x20ec10u: goto label_20ec10;
        case 0x20ec14u: goto label_20ec14;
        case 0x20ec18u: goto label_20ec18;
        case 0x20ec1cu: goto label_20ec1c;
        case 0x20ec20u: goto label_20ec20;
        case 0x20ec24u: goto label_20ec24;
        case 0x20ec28u: goto label_20ec28;
        case 0x20ec2cu: goto label_20ec2c;
        case 0x20ec30u: goto label_20ec30;
        case 0x20ec34u: goto label_20ec34;
        case 0x20ec38u: goto label_20ec38;
        case 0x20ec3cu: goto label_20ec3c;
        case 0x20ec40u: goto label_20ec40;
        case 0x20ec44u: goto label_20ec44;
        case 0x20ec48u: goto label_20ec48;
        case 0x20ec4cu: goto label_20ec4c;
        case 0x20ec50u: goto label_20ec50;
        case 0x20ec54u: goto label_20ec54;
        case 0x20ec58u: goto label_20ec58;
        case 0x20ec5cu: goto label_20ec5c;
        case 0x20ec60u: goto label_20ec60;
        case 0x20ec64u: goto label_20ec64;
        case 0x20ec68u: goto label_20ec68;
        case 0x20ec6cu: goto label_20ec6c;
        case 0x20ec70u: goto label_20ec70;
        case 0x20ec74u: goto label_20ec74;
        case 0x20ec78u: goto label_20ec78;
        case 0x20ec7cu: goto label_20ec7c;
        case 0x20ec80u: goto label_20ec80;
        case 0x20ec84u: goto label_20ec84;
        case 0x20ec88u: goto label_20ec88;
        case 0x20ec8cu: goto label_20ec8c;
        case 0x20ec90u: goto label_20ec90;
        case 0x20ec94u: goto label_20ec94;
        case 0x20ec98u: goto label_20ec98;
        case 0x20ec9cu: goto label_20ec9c;
        case 0x20eca0u: goto label_20eca0;
        case 0x20eca4u: goto label_20eca4;
        case 0x20eca8u: goto label_20eca8;
        case 0x20ecacu: goto label_20ecac;
        case 0x20ecb0u: goto label_20ecb0;
        case 0x20ecb4u: goto label_20ecb4;
        case 0x20ecb8u: goto label_20ecb8;
        case 0x20ecbcu: goto label_20ecbc;
        case 0x20ecc0u: goto label_20ecc0;
        case 0x20ecc4u: goto label_20ecc4;
        case 0x20ecc8u: goto label_20ecc8;
        case 0x20ecccu: goto label_20eccc;
        default: return;
    }

label_20e500:
    // 0x20e500: 0xae6311b4  sw          $v1, 0x11B4($s3)
    ctx->pc = 0x20e500u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4532), GPR_U32(ctx, 3));
label_20e504:
    // 0x20e504: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x20e504u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_20e508:
    // 0x20e508: 0x8e860020  lw          $a2, 0x20($s4)
    ctx->pc = 0x20e508u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
label_20e50c:
    // 0x20e50c: 0x3443c00a  ori         $v1, $v0, 0xC00A
    ctx->pc = 0x20e50cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49162);
label_20e510:
    // 0x20e510: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x20e510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_20e514:
    // 0x20e514: 0xa6641198  sh          $a0, 0x1198($s3)
    ctx->pc = 0x20e514u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 4504), (uint16_t)GPR_U32(ctx, 4));
label_20e518:
    // 0x20e518: 0x62040  sll         $a0, $a2, 1
    ctx->pc = 0x20e518u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
label_20e51c:
    // 0x20e51c: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x20e51cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_20e520:
    // 0x20e520: 0x438c0  sll         $a3, $a0, 3
    ctx->pc = 0x20e520u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_20e524:
    // 0x20e524: 0x421c0  sll         $a0, $a0, 7
    ctx->pc = 0x20e524u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 7));
label_20e528:
    // 0x20e528: 0x24860008  addiu       $a2, $a0, 0x8
    ctx->pc = 0x20e528u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_20e52c:
    // 0x20e52c: 0x24e40018  addiu       $a0, $a3, 0x18
    ctx->pc = 0x20e52cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 24));
label_20e530:
    // 0x20e530: 0xa666119a  sh          $a2, 0x119A($s3)
    ctx->pc = 0x20e530u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 4506), (uint16_t)GPR_U32(ctx, 6));
label_20e534:
    // 0x20e534: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x20e534u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_20e538:
    // 0x20e538: 0xa66511a8  sh          $a1, 0x11A8($s3)
    ctx->pc = 0x20e538u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 4520), (uint16_t)GPR_U32(ctx, 5));
label_20e53c:
    // 0x20e53c: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x20e53cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_20e540:
    // 0x20e540: 0xa66411aa  sh          $a0, 0x11AA($s3)
    ctx->pc = 0x20e540u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 4522), (uint16_t)GPR_U32(ctx, 4));
label_20e544:
    // 0x20e544: 0x72638  dsll        $a0, $a3, 24
    ctx->pc = 0x20e544u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) << 24);
label_20e548:
    // 0x20e548: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x20e548u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_20e54c:
    // 0x20e54c: 0x24e30017  addiu       $v1, $a3, 0x17
    ctx->pc = 0x20e54cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 23));
label_20e550:
    // 0x20e550: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x20e550u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_20e554:
    // 0x20e554: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x20e554u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
label_20e558:
    // 0x20e558: 0x318bc  dsll32      $v1, $v1, 2
    ctx->pc = 0x20e558u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 2));
label_20e55c:
    // 0x20e55c: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x20e55cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_20e560:
    // 0x20e560: 0xfe631160  sd          $v1, 0x1160($s3)
    ctx->pc = 0x20e560u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 4448), GPR_U64(ctx, 3));
label_20e564:
    // 0x20e564: 0xa2621193  sb          $v0, 0x1193($s3)
    ctx->pc = 0x20e564u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 4499), (uint8_t)GPR_U32(ctx, 2));
label_20e568:
    // 0x20e568: 0xa26010f3  sb          $zero, 0x10F3($s3)
    ctx->pc = 0x20e568u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 4339), (uint8_t)GPR_U32(ctx, 0));
label_20e56c:
    // 0x20e56c: 0x0  nop
    ctx->pc = 0x20e56cu;
    // NOP
label_20e570:
    // 0x20e570: 0x8e840024  lw          $a0, 0x24($s4)
    ctx->pc = 0x20e570u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
label_20e574:
    // 0x20e574: 0x26220040  addiu       $v0, $s1, 0x40
    ctx->pc = 0x20e574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
label_20e578:
    // 0x20e578: 0x1080001b  beqz        $a0, . + 4 + (0x1B << 2)
label_20e57c:
    if (ctx->pc == 0x20E57Cu) {
        ctx->pc = 0x20E57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E578u;
        // 0x20e57c: 0x2643000c  addiu       $v1, $s2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20E580u;
        goto label_20e580;
    }
    ctx->pc = 0x20E578u;
    {
        const bool branch_taken_0x20e578 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E578u;
        // 0x20e57c: 0x2643000c  addiu       $v1, $s2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e578) {
            ctx->pc = 0x20E5E8u;
            goto label_20e5e8;
        }
    }
    ctx->pc = 0x20E580u;
label_20e580:
    // 0x20e580: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x20e580u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_20e584:
    // 0x20e584: 0x24050188  addiu       $a1, $zero, 0x188
    ctx->pc = 0x20e584u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 392));
label_20e588:
    // 0x20e588: 0xa6641058  sh          $a0, 0x1058($s3)
    ctx->pc = 0x20e588u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 4184), (uint16_t)GPR_U32(ctx, 4));
label_20e58c:
    // 0x20e58c: 0xa665105a  sh          $a1, 0x105A($s3)
    ctx->pc = 0x20e58cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 4186), (uint16_t)GPR_U32(ctx, 5));
label_20e590:
    // 0x20e590: 0x24040608  addiu       $a0, $zero, 0x608
    ctx->pc = 0x20e590u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1544));
label_20e594:
    // 0x20e594: 0xa6641068  sh          $a0, 0x1068($s3)
    ctx->pc = 0x20e594u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 4200), (uint16_t)GPR_U32(ctx, 4));
label_20e598:
    // 0x20e598: 0x24050308  addiu       $a1, $zero, 0x308
    ctx->pc = 0x20e598u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 776));
label_20e59c:
    // 0x20e59c: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x20e59cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_20e5a0:
    // 0x20e5a0: 0xa665106a  sh          $a1, 0x106A($s3)
    ctx->pc = 0x20e5a0u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 4202), (uint16_t)GPR_U32(ctx, 5));
label_20e5a4:
    // 0x20e5a4: 0x24846c00  addiu       $a0, $a0, 0x6C00
    ctx->pc = 0x20e5a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27648));
label_20e5a8:
    // 0x20e5a8: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x20e5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
label_20e5ac:
    // 0x20e5ac: 0xa6641060  sh          $a0, 0x1060($s3)
    ctx->pc = 0x20e5acu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 4192), (uint16_t)GPR_U32(ctx, 4));
label_20e5b0:
    // 0x20e5b0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x20e5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_20e5b4:
    // 0x20e5b4: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x20e5b4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_20e5b8:
    // 0x20e5b8: 0x24857900  addiu       $a1, $a0, 0x7900
    ctx->pc = 0x20e5b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 30976));
label_20e5bc:
    // 0x20e5bc: 0x24446c00  addiu       $a0, $v0, 0x6C00
    ctx->pc = 0x20e5bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 27648));
label_20e5c0:
    // 0x20e5c0: 0xa6651062  sh          $a1, 0x1062($s3)
    ctx->pc = 0x20e5c0u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 4194), (uint16_t)GPR_U32(ctx, 5));
label_20e5c4:
    // 0x20e5c4: 0x24620018  addiu       $v0, $v1, 0x18
    ctx->pc = 0x20e5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
label_20e5c8:
    // 0x20e5c8: 0x24030384  addiu       $v1, $zero, 0x384
    ctx->pc = 0x20e5c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 900));
label_20e5cc:
    // 0x20e5cc: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x20e5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_20e5d0:
    // 0x20e5d0: 0xae631064  sw          $v1, 0x1064($s3)
    ctx->pc = 0x20e5d0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4196), GPR_U32(ctx, 3));
label_20e5d4:
    // 0x20e5d4: 0x24427900  addiu       $v0, $v0, 0x7900
    ctx->pc = 0x20e5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
label_20e5d8:
    // 0x20e5d8: 0xa6641070  sh          $a0, 0x1070($s3)
    ctx->pc = 0x20e5d8u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 4208), (uint16_t)GPR_U32(ctx, 4));
label_20e5dc:
    // 0x20e5dc: 0xa6621072  sh          $v0, 0x1072($s3)
    ctx->pc = 0x20e5dcu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 4210), (uint16_t)GPR_U32(ctx, 2));
label_20e5e0:
    // 0x20e5e0: 0x1000001a  b           . + 4 + (0x1A << 2)
label_20e5e4:
    if (ctx->pc == 0x20E5E4u) {
        ctx->pc = 0x20E5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E5E0u;
        // 0x20e5e4: 0xae631074  sw          $v1, 0x1074($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4212), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20E5E8u;
        goto label_20e5e8;
    }
    ctx->pc = 0x20E5E0u;
    {
        const bool branch_taken_0x20e5e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E5E0u;
        // 0x20e5e4: 0xae631074  sw          $v1, 0x1074($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4212), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e5e0) {
            ctx->pc = 0x20E64Cu;
            goto label_20e64c;
        }
    }
    ctx->pc = 0x20E5E8u;
label_20e5e8:
    // 0x20e5e8: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x20e5e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_20e5ec:
    // 0x20e5ec: 0xa6651058  sh          $a1, 0x1058($s3)
    ctx->pc = 0x20e5ecu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 4184), (uint16_t)GPR_U32(ctx, 5));
label_20e5f0:
    // 0x20e5f0: 0x24040608  addiu       $a0, $zero, 0x608
    ctx->pc = 0x20e5f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1544));
label_20e5f4:
    // 0x20e5f4: 0xa665105a  sh          $a1, 0x105A($s3)
    ctx->pc = 0x20e5f4u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 4186), (uint16_t)GPR_U32(ctx, 5));
label_20e5f8:
    // 0x20e5f8: 0xa6641068  sh          $a0, 0x1068($s3)
    ctx->pc = 0x20e5f8u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 4200), (uint16_t)GPR_U32(ctx, 4));
label_20e5fc:
    // 0x20e5fc: 0x24050188  addiu       $a1, $zero, 0x188
    ctx->pc = 0x20e5fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 392));
label_20e600:
    // 0x20e600: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x20e600u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_20e604:
    // 0x20e604: 0xa665106a  sh          $a1, 0x106A($s3)
    ctx->pc = 0x20e604u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 4202), (uint16_t)GPR_U32(ctx, 5));
label_20e608:
    // 0x20e608: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x20e608u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_20e60c:
    // 0x20e60c: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x20e60cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
label_20e610:
    // 0x20e610: 0x24846c00  addiu       $a0, $a0, 0x6C00
    ctx->pc = 0x20e610u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27648));
label_20e614:
    // 0x20e614: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x20e614u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_20e618:
    // 0x20e618: 0xa6641060  sh          $a0, 0x1060($s3)
    ctx->pc = 0x20e618u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 4192), (uint16_t)GPR_U32(ctx, 4));
label_20e61c:
    // 0x20e61c: 0x24446c00  addiu       $a0, $v0, 0x6C00
    ctx->pc = 0x20e61cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 27648));
label_20e620:
    // 0x20e620: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x20e620u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_20e624:
    // 0x20e624: 0x24457900  addiu       $a1, $v0, 0x7900
    ctx->pc = 0x20e624u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
label_20e628:
    // 0x20e628: 0x24620018  addiu       $v0, $v1, 0x18
    ctx->pc = 0x20e628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
label_20e62c:
    // 0x20e62c: 0xa6651062  sh          $a1, 0x1062($s3)
    ctx->pc = 0x20e62cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 4194), (uint16_t)GPR_U32(ctx, 5));
label_20e630:
    // 0x20e630: 0x24030384  addiu       $v1, $zero, 0x384
    ctx->pc = 0x20e630u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 900));
label_20e634:
    // 0x20e634: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x20e634u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_20e638:
    // 0x20e638: 0xae631064  sw          $v1, 0x1064($s3)
    ctx->pc = 0x20e638u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4196), GPR_U32(ctx, 3));
label_20e63c:
    // 0x20e63c: 0x24427900  addiu       $v0, $v0, 0x7900
    ctx->pc = 0x20e63cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
label_20e640:
    // 0x20e640: 0xa6641070  sh          $a0, 0x1070($s3)
    ctx->pc = 0x20e640u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 4208), (uint16_t)GPR_U32(ctx, 4));
label_20e644:
    // 0x20e644: 0xa6621072  sh          $v0, 0x1072($s3)
    ctx->pc = 0x20e644u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 4210), (uint16_t)GPR_U32(ctx, 2));
label_20e648:
    // 0x20e648: 0xae631074  sw          $v1, 0x1074($s3)
    ctx->pc = 0x20e648u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4212), GPR_U32(ctx, 3));
label_20e64c:
    // 0x20e64c: 0x0  nop
    ctx->pc = 0x20e64cu;
    // NOP
label_20e650:
    // 0x20e650: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x20e650u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_20e654:
    // 0x20e654: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x20e654u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_20e658:
    // 0x20e658: 0x24060176  addiu       $a2, $zero, 0x176
    ctx->pc = 0x20e658u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 374));
label_20e65c:
    // 0x20e65c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x20e65cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20e660:
    // 0x20e660: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x20e660u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20e664:
    // 0x20e664: 0xc066c72  jal         func_19B1C8
label_20e668:
    if (ctx->pc == 0x20E668u) {
        ctx->pc = 0x20E668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E664u;
        // 0x20e668: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20E66Cu;
        goto label_20e66c;
    }
    ctx->pc = 0x20E664u;
    SET_GPR_U32(ctx, 31, 0x20E66Cu);
    ctx->pc = 0x20E668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E664u;
    // 0x20e668: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x20E664u, 0x20E66Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E66Cu;
label_20e66c:
    // 0x20e66c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x20e66cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_20e670:
    // 0x20e670: 0x26f70008  addiu       $s7, $s7, 0x8
    ctx->pc = 0x20e670u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 8));
label_20e674:
    // 0x20e674: 0x2a030003  slti        $v1, $s0, 0x3
    ctx->pc = 0x20e674u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
label_20e678:
    // 0x20e678: 0x26d6002c  addiu       $s6, $s6, 0x2C
    ctx->pc = 0x20e678u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 44));
label_20e67c:
    // 0x20e67c: 0x1460fdb0  bnez        $v1, . + 4 + (-0x250 << 2)
label_20e680:
    if (ctx->pc == 0x20E680u) {
        ctx->pc = 0x20E680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E67Cu;
        // 0x20e680: 0x26b50074  addiu       $s5, $s5, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 116));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20E684u;
        goto label_20e684;
    }
    ctx->pc = 0x20E67Cu;
    {
        const bool branch_taken_0x20e67c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x20E680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E67Cu;
        // 0x20e680: 0x26b50074  addiu       $s5, $s5, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 116));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e67c) {
            ctx->pc = 0x20DD40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x20dd40; return; }
        }
    }
    ctx->pc = 0x20E684u;
label_20e684:
    // 0x20e684: 0x0  nop
    ctx->pc = 0x20e684u;
    // NOP
label_20e688:
    // 0x20e688: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x20e688u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_20e68c:
    // 0x20e68c: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x20e68cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_20e690:
    // 0x20e690: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x20e690u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_20e694:
    // 0x20e694: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x20e694u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_20e698:
    // 0x20e698: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x20e698u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_20e69c:
    // 0x20e69c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x20e69cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_20e6a0:
    // 0x20e6a0: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x20e6a0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_20e6a4:
    // 0x20e6a4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x20e6a4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_20e6a8:
    // 0x20e6a8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x20e6a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_20e6ac:
    // 0x20e6ac: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x20e6acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_20e6b0:
    // 0x20e6b0: 0x3e00008  jr          $ra
label_20e6b4:
    if (ctx->pc == 0x20E6B4u) {
        ctx->pc = 0x20E6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E6B0u;
        // 0x20e6b4: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20E6B8u;
        goto label_20e6b8;
    }
    ctx->pc = 0x20E6B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20E6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E6B0u;
        // 0x20e6b4: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20E6B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20E6B8u;
label_20e6b8:
    // 0x20e6b8: 0x0  nop
    ctx->pc = 0x20e6b8u;
    // NOP
label_20e6bc:
    // 0x20e6bc: 0x0  nop
    ctx->pc = 0x20e6bcu;
    // NOP
label_20e6c0:
    // 0x20e6c0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x20e6c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_20e6c4:
    // 0x20e6c4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x20e6c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_20e6c8:
    // 0x20e6c8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x20e6c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_20e6cc:
    // 0x20e6cc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x20e6ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_20e6d0:
    // 0x20e6d0: 0xc083a58  jal         func_20E960
label_20e6d4:
    if (ctx->pc == 0x20E6D4u) {
        ctx->pc = 0x20E6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E6D0u;
        // 0x20e6d4: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20E6D8u;
        goto label_20e6d8;
    }
    ctx->pc = 0x20E6D0u;
    SET_GPR_U32(ctx, 31, 0x20E6D8u);
    ctx->pc = 0x20E6D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E6D0u;
    // 0x20e6d4: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20E960u;
    goto label_20e960;
    ctx->pc = 0x20E6D8u;
label_20e6d8:
    // 0x20e6d8: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x20e6d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_20e6dc:
    // 0x20e6dc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x20e6dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20e6e0:
    // 0x20e6e0: 0xc04e188  jal         func_138620
label_20e6e4:
    if (ctx->pc == 0x20E6E4u) {
        ctx->pc = 0x20E6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E6E0u;
        // 0x20e6e4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20E6E8u;
        goto label_20e6e8;
    }
    ctx->pc = 0x20E6E0u;
    SET_GPR_U32(ctx, 31, 0x20E6E8u);
    ctx->pc = 0x20E6E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E6E0u;
    // 0x20e6e4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x138620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138620u, 0x20E6E0u, 0x20E6E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E6E8u;
label_20e6e8:
    // 0x20e6e8: 0xc04e198  jal         func_138660
label_20e6ec:
    if (ctx->pc == 0x20E6ECu) {
        ctx->pc = 0x20E6F0u;
        goto label_20e6f0;
    }
    ctx->pc = 0x20E6E8u;
    SET_GPR_U32(ctx, 31, 0x20E6F0u);
    ctx->pc = 0x138660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138660u, 0x20E6E8u, 0x20E6F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E6F0u;
label_20e6f0:
    // 0x20e6f0: 0x14400021  bnez        $v0, . + 4 + (0x21 << 2)
label_20e6f4:
    if (ctx->pc == 0x20E6F4u) {
        ctx->pc = 0x20E6F8u;
        goto label_20e6f8;
    }
    ctx->pc = 0x20E6F0u;
    {
        const bool branch_taken_0x20e6f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20e6f0) {
            ctx->pc = 0x20E778u;
            goto label_20e778;
        }
    }
    ctx->pc = 0x20E6F8u;
label_20e6f8:
    // 0x20e6f8: 0xc04e168  jal         func_1385A0
label_20e6fc:
    if (ctx->pc == 0x20E6FCu) {
        ctx->pc = 0x20E700u;
        goto label_20e700;
    }
    ctx->pc = 0x20E6F8u;
    SET_GPR_U32(ctx, 31, 0x20E700u);
    ctx->pc = 0x1385A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1385A0u, 0x20E6F8u, 0x20E700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E700u;
label_20e700:
    // 0x20e700: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x20e700u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_20e704:
    // 0x20e704: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x20e704u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
label_20e708:
    // 0x20e708: 0x8c233ffc  lw          $v1, 0x3FFC($at)
    ctx->pc = 0x20e708u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_20e70c:
    // 0x20e70c: 0x24841e00  addiu       $a0, $a0, 0x1E00
    ctx->pc = 0x20e70cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7680));
label_20e710:
    // 0x20e710: 0x27829180  addiu       $v0, $gp, -0x6E80
    ctx->pc = 0x20e710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294939008));
label_20e714:
    // 0x20e714: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x20e714u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_20e718:
    // 0x20e718: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x20e718u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20e71c:
    // 0x20e71c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x20e71cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20e720:
    // 0x20e720: 0x32940  sll         $a1, $v1, 5
    ctx->pc = 0x20e720u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_20e724:
    // 0x20e724: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x20e724u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_20e728:
    // 0x20e728: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x20e728u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_20e72c:
    // 0x20e72c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x20e72cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_20e730:
    // 0x20e730: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x20e730u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_20e734:
    // 0x20e734: 0xc066c72  jal         func_19B1C8
label_20e738:
    if (ctx->pc == 0x20E738u) {
        ctx->pc = 0x20E738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E734u;
        // 0x20e738: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20E73Cu;
        goto label_20e73c;
    }
    ctx->pc = 0x20E734u;
    SET_GPR_U32(ctx, 31, 0x20E73Cu);
    ctx->pc = 0x20E738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E734u;
    // 0x20e738: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x20E734u, 0x20E73Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E73Cu;
label_20e73c:
    // 0x20e73c: 0xc04e120  jal         func_138480
label_20e740:
    if (ctx->pc == 0x20E740u) {
        ctx->pc = 0x20E744u;
        goto label_20e744;
    }
    ctx->pc = 0x20E73Cu;
    SET_GPR_U32(ctx, 31, 0x20E744u);
    ctx->pc = 0x138480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138480u, 0x20E73Cu, 0x20E744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E744u;
label_20e744:
    // 0x20e744: 0xc05b578  jal         func_16D5E0
label_20e748:
    if (ctx->pc == 0x20E748u) {
        ctx->pc = 0x20E748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E744u;
        // 0x20e748: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20E74Cu;
        goto label_20e74c;
    }
    ctx->pc = 0x20E744u;
    SET_GPR_U32(ctx, 31, 0x20E74Cu);
    ctx->pc = 0x20E748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E744u;
    // 0x20e748: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D5E0u, 0x20E744u, 0x20E74Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E74Cu;
label_20e74c:
    // 0x20e74c: 0xc060258  jal         func_180960
label_20e750:
    if (ctx->pc == 0x20E750u) {
        ctx->pc = 0x20E754u;
        goto label_20e754;
    }
    ctx->pc = 0x20E74Cu;
    SET_GPR_U32(ctx, 31, 0x20E754u);
    ctx->pc = 0x180960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180960u, 0x20E74Cu, 0x20E754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E754u;
label_20e754:
    // 0x20e754: 0x8f828730  lw          $v0, -0x78D0($gp)
    ctx->pc = 0x20e754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936368)));
label_20e758:
    // 0x20e758: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_20e75c:
    if (ctx->pc == 0x20E75Cu) {
        ctx->pc = 0x20E75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E758u;
        // 0x20e75c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20E760u;
        goto label_20e760;
    }
    ctx->pc = 0x20E758u;
    {
        const bool branch_taken_0x20e758 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E758u;
        // 0x20e75c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e758) {
            ctx->pc = 0x20E764u;
            goto label_20e764;
        }
    }
    ctx->pc = 0x20E760u;
label_20e760:
    // 0x20e760: 0xaf829170  sw          $v0, -0x6E90($gp)
    ctx->pc = 0x20e760u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938992), GPR_U32(ctx, 2));
label_20e764:
    // 0x20e764: 0x0  nop
    ctx->pc = 0x20e764u;
    // NOP
label_20e768:
    // 0x20e768: 0xc04e198  jal         func_138660
label_20e76c:
    if (ctx->pc == 0x20E76Cu) {
        ctx->pc = 0x20E770u;
        goto label_20e770;
    }
    ctx->pc = 0x20E768u;
    SET_GPR_U32(ctx, 31, 0x20E770u);
    ctx->pc = 0x138660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138660u, 0x20E768u, 0x20E770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E770u;
label_20e770:
    // 0x20e770: 0x1040ffe1  beqz        $v0, . + 4 + (-0x1F << 2)
label_20e774:
    if (ctx->pc == 0x20E774u) {
        ctx->pc = 0x20E778u;
        goto label_20e778;
    }
    ctx->pc = 0x20E770u;
    {
        const bool branch_taken_0x20e770 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20e770) {
            ctx->pc = 0x20E6F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20e6f8;
        }
    }
    ctx->pc = 0x20E778u;
label_20e778:
    // 0x20e778: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x20e778u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20e77c:
    // 0x20e77c: 0x8f829170  lw          $v0, -0x6E90($gp)
    ctx->pc = 0x20e77cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938992)));
label_20e780:
    // 0x20e780: 0x14400027  bnez        $v0, . + 4 + (0x27 << 2)
label_20e784:
    if (ctx->pc == 0x20E784u) {
        ctx->pc = 0x20E784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E780u;
        // 0x20e784: 0x2a0100b5  slti        $at, $s0, 0xB5 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)181) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x20E788u;
        goto label_20e788;
    }
    ctx->pc = 0x20E780u;
    {
        const bool branch_taken_0x20e780 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20E784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E780u;
        // 0x20e784: 0x2a0100b5  slti        $at, $s0, 0xB5 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)181) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e780) {
            ctx->pc = 0x20E820u;
            goto label_20e820;
        }
    }
    ctx->pc = 0x20E788u;
label_20e788:
    // 0x20e788: 0x14200005  bnez        $at, . + 4 + (0x5 << 2)
label_20e78c:
    if (ctx->pc == 0x20E78Cu) {
        ctx->pc = 0x20E790u;
        goto label_20e790;
    }
    ctx->pc = 0x20E788u;
    {
        const bool branch_taken_0x20e788 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x20e788) {
            ctx->pc = 0x20E7A0u;
            goto label_20e7a0;
        }
    }
    ctx->pc = 0x20E790u;
label_20e790:
    // 0x20e790: 0xdf8287c8  ld          $v0, -0x7838($gp)
    ctx->pc = 0x20e790u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294936520)));
label_20e794:
    // 0x20e794: 0x30421008  andi        $v0, $v0, 0x1008
    ctx->pc = 0x20e794u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4104);
label_20e798:
    // 0x20e798: 0x14400021  bnez        $v0, . + 4 + (0x21 << 2)
label_20e79c:
    if (ctx->pc == 0x20E79Cu) {
        ctx->pc = 0x20E7A0u;
        goto label_20e7a0;
    }
    ctx->pc = 0x20E798u;
    {
        const bool branch_taken_0x20e798 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20e798) {
            ctx->pc = 0x20E820u;
            goto label_20e820;
        }
    }
    ctx->pc = 0x20E7A0u;
label_20e7a0:
    // 0x20e7a0: 0xc04e168  jal         func_1385A0
label_20e7a4:
    if (ctx->pc == 0x20E7A4u) {
        ctx->pc = 0x20E7A8u;
        goto label_20e7a8;
    }
    ctx->pc = 0x20E7A0u;
    SET_GPR_U32(ctx, 31, 0x20E7A8u);
    ctx->pc = 0x1385A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1385A0u, 0x20E7A0u, 0x20E7A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E7A8u;
label_20e7a8:
    // 0x20e7a8: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x20e7a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_20e7ac:
    // 0x20e7ac: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x20e7acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
label_20e7b0:
    // 0x20e7b0: 0x8c233ffc  lw          $v1, 0x3FFC($at)
    ctx->pc = 0x20e7b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_20e7b4:
    // 0x20e7b4: 0x24841e00  addiu       $a0, $a0, 0x1E00
    ctx->pc = 0x20e7b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7680));
label_20e7b8:
    // 0x20e7b8: 0x27829180  addiu       $v0, $gp, -0x6E80
    ctx->pc = 0x20e7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294939008));
label_20e7bc:
    // 0x20e7bc: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x20e7bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_20e7c0:
    // 0x20e7c0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x20e7c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20e7c4:
    // 0x20e7c4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x20e7c4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20e7c8:
    // 0x20e7c8: 0x32940  sll         $a1, $v1, 5
    ctx->pc = 0x20e7c8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_20e7cc:
    // 0x20e7cc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x20e7ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_20e7d0:
    // 0x20e7d0: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x20e7d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_20e7d4:
    // 0x20e7d4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x20e7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_20e7d8:
    // 0x20e7d8: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x20e7d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_20e7dc:
    // 0x20e7dc: 0xc066c72  jal         func_19B1C8
label_20e7e0:
    if (ctx->pc == 0x20E7E0u) {
        ctx->pc = 0x20E7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E7DCu;
        // 0x20e7e0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20E7E4u;
        goto label_20e7e4;
    }
    ctx->pc = 0x20E7DCu;
    SET_GPR_U32(ctx, 31, 0x20E7E4u);
    ctx->pc = 0x20E7E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E7DCu;
    // 0x20e7e0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x20E7DCu, 0x20E7E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E7E4u;
label_20e7e4:
    // 0x20e7e4: 0xc04e120  jal         func_138480
label_20e7e8:
    if (ctx->pc == 0x20E7E8u) {
        ctx->pc = 0x20E7ECu;
        goto label_20e7ec;
    }
    ctx->pc = 0x20E7E4u;
    SET_GPR_U32(ctx, 31, 0x20E7ECu);
    ctx->pc = 0x138480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138480u, 0x20E7E4u, 0x20E7ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E7ECu;
label_20e7ec:
    // 0x20e7ec: 0xc05b578  jal         func_16D5E0
label_20e7f0:
    if (ctx->pc == 0x20E7F0u) {
        ctx->pc = 0x20E7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E7ECu;
        // 0x20e7f0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20E7F4u;
        goto label_20e7f4;
    }
    ctx->pc = 0x20E7ECu;
    SET_GPR_U32(ctx, 31, 0x20E7F4u);
    ctx->pc = 0x20E7F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E7ECu;
    // 0x20e7f0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D5E0u, 0x20E7ECu, 0x20E7F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E7F4u;
label_20e7f4:
    // 0x20e7f4: 0xc060258  jal         func_180960
label_20e7f8:
    if (ctx->pc == 0x20E7F8u) {
        ctx->pc = 0x20E7FCu;
        goto label_20e7fc;
    }
    ctx->pc = 0x20E7F4u;
    SET_GPR_U32(ctx, 31, 0x20E7FCu);
    ctx->pc = 0x180960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180960u, 0x20E7F4u, 0x20E7FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E7FCu;
label_20e7fc:
    // 0x20e7fc: 0x8f828730  lw          $v0, -0x78D0($gp)
    ctx->pc = 0x20e7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936368)));
label_20e800:
    // 0x20e800: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_20e804:
    if (ctx->pc == 0x20E804u) {
        ctx->pc = 0x20E804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E800u;
        // 0x20e804: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20E808u;
        goto label_20e808;
    }
    ctx->pc = 0x20E800u;
    {
        const bool branch_taken_0x20e800 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E800u;
        // 0x20e804: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e800) {
            ctx->pc = 0x20E80Cu;
            goto label_20e80c;
        }
    }
    ctx->pc = 0x20E808u;
label_20e808:
    // 0x20e808: 0xaf829170  sw          $v0, -0x6E90($gp)
    ctx->pc = 0x20e808u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938992), GPR_U32(ctx, 2));
label_20e80c:
    // 0x20e80c: 0x0  nop
    ctx->pc = 0x20e80cu;
    // NOP
label_20e810:
    // 0x20e810: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x20e810u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_20e814:
    // 0x20e814: 0x2a0200f0  slti        $v0, $s0, 0xF0
    ctx->pc = 0x20e814u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)240) ? 1 : 0);
label_20e818:
    // 0x20e818: 0x1440ffd8  bnez        $v0, . + 4 + (-0x28 << 2)
label_20e81c:
    if (ctx->pc == 0x20E81Cu) {
        ctx->pc = 0x20E820u;
        goto label_20e820;
    }
    ctx->pc = 0x20E818u;
    {
        const bool branch_taken_0x20e818 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20e818) {
            ctx->pc = 0x20E77Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20e77c;
        }
    }
    ctx->pc = 0x20E820u;
label_20e820:
    // 0x20e820: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x20e820u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_20e824:
    // 0x20e824: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x20e824u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20e828:
    // 0x20e828: 0xc04e188  jal         func_138620
label_20e82c:
    if (ctx->pc == 0x20E82Cu) {
        ctx->pc = 0x20E82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E828u;
        // 0x20e82c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20E830u;
        goto label_20e830;
    }
    ctx->pc = 0x20E828u;
    SET_GPR_U32(ctx, 31, 0x20E830u);
    ctx->pc = 0x20E82Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E828u;
    // 0x20e82c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x138620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138620u, 0x20E828u, 0x20E830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E830u;
label_20e830:
    // 0x20e830: 0xc04e198  jal         func_138660
label_20e834:
    if (ctx->pc == 0x20E834u) {
        ctx->pc = 0x20E838u;
        goto label_20e838;
    }
    ctx->pc = 0x20E830u;
    SET_GPR_U32(ctx, 31, 0x20E838u);
    ctx->pc = 0x138660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138660u, 0x20E830u, 0x20E838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E838u;
label_20e838:
    // 0x20e838: 0x14400021  bnez        $v0, . + 4 + (0x21 << 2)
label_20e83c:
    if (ctx->pc == 0x20E83Cu) {
        ctx->pc = 0x20E840u;
        goto label_20e840;
    }
    ctx->pc = 0x20E838u;
    {
        const bool branch_taken_0x20e838 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20e838) {
            ctx->pc = 0x20E8C0u;
            goto label_20e8c0;
        }
    }
    ctx->pc = 0x20E840u;
label_20e840:
    // 0x20e840: 0xc04e168  jal         func_1385A0
label_20e844:
    if (ctx->pc == 0x20E844u) {
        ctx->pc = 0x20E848u;
        goto label_20e848;
    }
    ctx->pc = 0x20E840u;
    SET_GPR_U32(ctx, 31, 0x20E848u);
    ctx->pc = 0x1385A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1385A0u, 0x20E840u, 0x20E848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E848u;
label_20e848:
    // 0x20e848: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x20e848u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_20e84c:
    // 0x20e84c: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x20e84cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
label_20e850:
    // 0x20e850: 0x8c233ffc  lw          $v1, 0x3FFC($at)
    ctx->pc = 0x20e850u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_20e854:
    // 0x20e854: 0x24841e00  addiu       $a0, $a0, 0x1E00
    ctx->pc = 0x20e854u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7680));
label_20e858:
    // 0x20e858: 0x27829180  addiu       $v0, $gp, -0x6E80
    ctx->pc = 0x20e858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294939008));
label_20e85c:
    // 0x20e85c: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x20e85cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_20e860:
    // 0x20e860: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x20e860u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20e864:
    // 0x20e864: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x20e864u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20e868:
    // 0x20e868: 0x32940  sll         $a1, $v1, 5
    ctx->pc = 0x20e868u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_20e86c:
    // 0x20e86c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x20e86cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_20e870:
    // 0x20e870: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x20e870u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_20e874:
    // 0x20e874: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x20e874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_20e878:
    // 0x20e878: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x20e878u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_20e87c:
    // 0x20e87c: 0xc066c72  jal         func_19B1C8
label_20e880:
    if (ctx->pc == 0x20E880u) {
        ctx->pc = 0x20E880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E87Cu;
        // 0x20e880: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20E884u;
        goto label_20e884;
    }
    ctx->pc = 0x20E87Cu;
    SET_GPR_U32(ctx, 31, 0x20E884u);
    ctx->pc = 0x20E880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E87Cu;
    // 0x20e880: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x20E87Cu, 0x20E884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E884u;
label_20e884:
    // 0x20e884: 0xc04e120  jal         func_138480
label_20e888:
    if (ctx->pc == 0x20E888u) {
        ctx->pc = 0x20E88Cu;
        goto label_20e88c;
    }
    ctx->pc = 0x20E884u;
    SET_GPR_U32(ctx, 31, 0x20E88Cu);
    ctx->pc = 0x138480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138480u, 0x20E884u, 0x20E88Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E88Cu;
label_20e88c:
    // 0x20e88c: 0xc05b578  jal         func_16D5E0
label_20e890:
    if (ctx->pc == 0x20E890u) {
        ctx->pc = 0x20E890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E88Cu;
        // 0x20e890: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20E894u;
        goto label_20e894;
    }
    ctx->pc = 0x20E88Cu;
    SET_GPR_U32(ctx, 31, 0x20E894u);
    ctx->pc = 0x20E890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E88Cu;
    // 0x20e890: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D5E0u, 0x20E88Cu, 0x20E894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E894u;
label_20e894:
    // 0x20e894: 0xc060258  jal         func_180960
label_20e898:
    if (ctx->pc == 0x20E898u) {
        ctx->pc = 0x20E89Cu;
        goto label_20e89c;
    }
    ctx->pc = 0x20E894u;
    SET_GPR_U32(ctx, 31, 0x20E89Cu);
    ctx->pc = 0x180960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180960u, 0x20E894u, 0x20E89Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E89Cu;
label_20e89c:
    // 0x20e89c: 0x8f828730  lw          $v0, -0x78D0($gp)
    ctx->pc = 0x20e89cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936368)));
label_20e8a0:
    // 0x20e8a0: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_20e8a4:
    if (ctx->pc == 0x20E8A4u) {
        ctx->pc = 0x20E8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E8A0u;
        // 0x20e8a4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20E8A8u;
        goto label_20e8a8;
    }
    ctx->pc = 0x20E8A0u;
    {
        const bool branch_taken_0x20e8a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E8A0u;
        // 0x20e8a4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e8a0) {
            ctx->pc = 0x20E8ACu;
            goto label_20e8ac;
        }
    }
    ctx->pc = 0x20E8A8u;
label_20e8a8:
    // 0x20e8a8: 0xaf829170  sw          $v0, -0x6E90($gp)
    ctx->pc = 0x20e8a8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938992), GPR_U32(ctx, 2));
label_20e8ac:
    // 0x20e8ac: 0x0  nop
    ctx->pc = 0x20e8acu;
    // NOP
label_20e8b0:
    // 0x20e8b0: 0xc04e198  jal         func_138660
label_20e8b4:
    if (ctx->pc == 0x20E8B4u) {
        ctx->pc = 0x20E8B8u;
        goto label_20e8b8;
    }
    ctx->pc = 0x20E8B0u;
    SET_GPR_U32(ctx, 31, 0x20E8B8u);
    ctx->pc = 0x138660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138660u, 0x20E8B0u, 0x20E8B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E8B8u;
label_20e8b8:
    // 0x20e8b8: 0x1040ffe1  beqz        $v0, . + 4 + (-0x1F << 2)
label_20e8bc:
    if (ctx->pc == 0x20E8BCu) {
        ctx->pc = 0x20E8C0u;
        goto label_20e8c0;
    }
    ctx->pc = 0x20E8B8u;
    {
        const bool branch_taken_0x20e8b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20e8b8) {
            ctx->pc = 0x20E840u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20e840;
        }
    }
    ctx->pc = 0x20E8C0u;
label_20e8c0:
    // 0x20e8c0: 0xc05b1e0  jal         func_16C780
label_20e8c4:
    if (ctx->pc == 0x20E8C4u) {
        ctx->pc = 0x20E8C8u;
        goto label_20e8c8;
    }
    ctx->pc = 0x20E8C0u;
    SET_GPR_U32(ctx, 31, 0x20E8C8u);
    ctx->pc = 0x16C780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16C780u, 0x20E8C0u, 0x20E8C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E8C8u;
label_20e8c8:
    // 0x20e8c8: 0xc060258  jal         func_180960
label_20e8cc:
    if (ctx->pc == 0x20E8CCu) {
        ctx->pc = 0x20E8D0u;
        goto label_20e8d0;
    }
    ctx->pc = 0x20E8C8u;
    SET_GPR_U32(ctx, 31, 0x20E8D0u);
    ctx->pc = 0x180960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180960u, 0x20E8C8u, 0x20E8D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E8D0u;
label_20e8d0:
    // 0x20e8d0: 0xc060258  jal         func_180960
label_20e8d4:
    if (ctx->pc == 0x20E8D4u) {
        ctx->pc = 0x20E8D8u;
        goto label_20e8d8;
    }
    ctx->pc = 0x20E8D0u;
    SET_GPR_U32(ctx, 31, 0x20E8D8u);
    ctx->pc = 0x180960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180960u, 0x20E8D0u, 0x20E8D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E8D8u;
label_20e8d8:
    // 0x20e8d8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x20e8d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20e8dc:
    // 0x20e8dc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x20e8dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20e8e0:
    // 0x20e8e0: 0x0  nop
    ctx->pc = 0x20e8e0u;
    // NOP
label_20e8e4:
    // 0x20e8e4: 0x27829180  addiu       $v0, $gp, -0x6E80
    ctx->pc = 0x20e8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294939008));
label_20e8e8:
    // 0x20e8e8: 0x519021  addu        $s2, $v0, $s1
    ctx->pc = 0x20e8e8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_20e8ec:
    // 0x20e8ec: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x20e8ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_20e8f0:
    // 0x20e8f0: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_20e8f4:
    if (ctx->pc == 0x20E8F4u) {
        ctx->pc = 0x20E8F8u;
        goto label_20e8f8;
    }
    ctx->pc = 0x20E8F0u;
    {
        const bool branch_taken_0x20e8f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x20e8f0) {
            ctx->pc = 0x20E904u;
            goto label_20e904;
        }
    }
    ctx->pc = 0x20E8F8u;
label_20e8f8:
    // 0x20e8f8: 0xc070038  jal         func_1C00E0
label_20e8fc:
    if (ctx->pc == 0x20E8FCu) {
        ctx->pc = 0x20E900u;
        goto label_20e900;
    }
    ctx->pc = 0x20E8F8u;
    SET_GPR_U32(ctx, 31, 0x20E900u);
    ctx->pc = 0x1C00E0u;
    { ctx->pc = 0x1c00e0; return; }
    ctx->pc = 0x20E900u;
label_20e900:
    // 0x20e900: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x20e900u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_20e904:
    // 0x20e904: 0x0  nop
    ctx->pc = 0x20e904u;
    // NOP
label_20e908:
    // 0x20e908: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x20e908u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_20e90c:
    // 0x20e90c: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x20e90cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
label_20e910:
    // 0x20e910: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
label_20e914:
    if (ctx->pc == 0x20E914u) {
        ctx->pc = 0x20E914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E910u;
        // 0x20e914: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20E918u;
        goto label_20e918;
    }
    ctx->pc = 0x20E910u;
    {
        const bool branch_taken_0x20e910 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20E914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E910u;
        // 0x20e914: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e910) {
            ctx->pc = 0x20E8E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20e8e0;
        }
    }
    ctx->pc = 0x20E918u;
label_20e918:
    // 0x20e918: 0xc05af50  jal         func_16BD40
label_20e91c:
    if (ctx->pc == 0x20E91Cu) {
        ctx->pc = 0x20E920u;
        goto label_20e920;
    }
    ctx->pc = 0x20E918u;
    SET_GPR_U32(ctx, 31, 0x20E920u);
    ctx->pc = 0x16BD40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16BD40u, 0x20E918u, 0x20E920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E920u;
label_20e920:
    // 0x20e920: 0xc05b578  jal         func_16D5E0
label_20e924:
    if (ctx->pc == 0x20E924u) {
        ctx->pc = 0x20E924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E920u;
        // 0x20e924: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20E928u;
        goto label_20e928;
    }
    ctx->pc = 0x20E920u;
    SET_GPR_U32(ctx, 31, 0x20E928u);
    ctx->pc = 0x20E924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E920u;
    // 0x20e924: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D5E0u, 0x20E920u, 0x20E928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E928u;
label_20e928:
    // 0x20e928: 0xc04e19c  jal         func_138670
label_20e92c:
    if (ctx->pc == 0x20E92Cu) {
        ctx->pc = 0x20E930u;
        goto label_20e930;
    }
    ctx->pc = 0x20E928u;
    SET_GPR_U32(ctx, 31, 0x20E930u);
    ctx->pc = 0x138670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138670u, 0x20E928u, 0x20E930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E930u;
label_20e930:
    // 0x20e930: 0x8f849170  lw          $a0, -0x6E90($gp)
    ctx->pc = 0x20e930u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938992)));
label_20e934:
    // 0x20e934: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x20e934u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20e938:
    // 0x20e938: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x20e938u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_20e93c:
    // 0x20e93c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x20e93cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20e940:
    // 0x20e940: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x20e940u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_20e944:
    // 0x20e944: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x20e944u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_20e948:
    // 0x20e948: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x20e948u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_20e94c:
    // 0x20e94c: 0x64100a  movz        $v0, $v1, $a0
    ctx->pc = 0x20e94cu;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
label_20e950:
    // 0x20e950: 0x3e00008  jr          $ra
label_20e954:
    if (ctx->pc == 0x20E954u) {
        ctx->pc = 0x20E954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E950u;
        // 0x20e954: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20E958u;
        goto label_20e958;
    }
    ctx->pc = 0x20E950u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20E954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E950u;
        // 0x20e954: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20E950u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20E958u;
label_20e958:
    // 0x20e958: 0x0  nop
    ctx->pc = 0x20e958u;
    // NOP
label_20e95c:
    // 0x20e95c: 0x0  nop
    ctx->pc = 0x20e95cu;
    // NOP
label_20e960:
    // 0x20e960: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x20e960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_20e964:
    // 0x20e964: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x20e964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_20e968:
    // 0x20e968: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x20e968u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_20e96c:
    // 0x20e96c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x20e96cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_20e970:
    // 0x20e970: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x20e970u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_20e974:
    // 0x20e974: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x20e974u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20e978:
    // 0x20e978: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x20e978u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20e97c:
    // 0x20e97c: 0x0  nop
    ctx->pc = 0x20e97cu;
    // NOP
label_20e980:
    // 0x20e980: 0x27829180  addiu       $v0, $gp, -0x6E80
    ctx->pc = 0x20e980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294939008));
label_20e984:
    // 0x20e984: 0x519021  addu        $s2, $v0, $s1
    ctx->pc = 0x20e984u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_20e988:
    // 0x20e988: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x20e988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_20e98c:
    // 0x20e98c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_20e990:
    if (ctx->pc == 0x20E990u) {
        ctx->pc = 0x20E990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E98Cu;
        // 0x20e990: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20E994u;
        goto label_20e994;
    }
    ctx->pc = 0x20E98Cu;
    {
        const bool branch_taken_0x20e98c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20E990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E98Cu;
        // 0x20e990: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e98c) {
            ctx->pc = 0x20E9A0u;
            goto label_20e9a0;
        }
    }
    ctx->pc = 0x20E994u;
label_20e994:
    // 0x20e994: 0xc070080  jal         func_1C0200
label_20e998:
    if (ctx->pc == 0x20E998u) {
        ctx->pc = 0x20E998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E994u;
        // 0x20e998: 0x240500b0  addiu       $a1, $zero, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20E99Cu;
        goto label_20e99c;
    }
    ctx->pc = 0x20E994u;
    SET_GPR_U32(ctx, 31, 0x20E99Cu);
    ctx->pc = 0x20E998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E994u;
    // 0x20e998: 0x240500b0  addiu       $a1, $zero, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    { ctx->pc = 0x1c0200; return; }
    ctx->pc = 0x20E99Cu;
label_20e99c:
    // 0x20e99c: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x20e99cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_20e9a0:
    // 0x20e9a0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x20e9a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_20e9a4:
    // 0x20e9a4: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x20e9a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
label_20e9a8:
    // 0x20e9a8: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_20e9ac:
    if (ctx->pc == 0x20E9ACu) {
        ctx->pc = 0x20E9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E9A8u;
        // 0x20e9ac: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20E9B0u;
        goto label_20e9b0;
    }
    ctx->pc = 0x20E9A8u;
    {
        const bool branch_taken_0x20e9a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20E9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E9A8u;
        // 0x20e9ac: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e9a8) {
            ctx->pc = 0x20E97Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20e97c;
        }
    }
    ctx->pc = 0x20E9B0u;
label_20e9b0:
    // 0x20e9b0: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x20e9b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_20e9b4:
    // 0x20e9b4: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x20e9b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
label_20e9b8:
    // 0x20e9b8: 0x8c264970  lw          $a2, 0x4970($at)
    ctx->pc = 0x20e9b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 18800)));
label_20e9bc:
    // 0x20e9bc: 0x24843b82  addiu       $a0, $a0, 0x3B82
    ctx->pc = 0x20e9bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15234));
label_20e9c0:
    // 0x20e9c0: 0x24030029  addiu       $v1, $zero, 0x29
    ctx->pc = 0x20e9c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
label_20e9c4:
    // 0x20e9c4: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x20e9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_20e9c8:
    // 0x20e9c8: 0x62900  sll         $a1, $a2, 4
    ctx->pc = 0x20e9c8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_20e9cc:
    // 0x20e9cc: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x20e9ccu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_20e9d0:
    // 0x20e9d0: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x20e9d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_20e9d4:
    // 0x20e9d4: 0x90840000  lbu         $a0, 0x0($a0)
    ctx->pc = 0x20e9d4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_20e9d8:
    // 0x20e9d8: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x20e9d8u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_20e9dc:
    // 0x20e9dc: 0x0  nop
    ctx->pc = 0x20e9dcu;
    // NOP
label_20e9e0:
    // 0x20e9e0: 0x0  nop
    ctx->pc = 0x20e9e0u;
    // NOP
label_20e9e4:
    // 0x20e9e4: 0x8010  mfhi        $s0
    ctx->pc = 0x20e9e4u;
    SET_GPR_U64(ctx, 16, ctx->hi);
label_20e9e8:
    // 0x20e9e8: 0x14c20012  bne         $a2, $v0, . + 4 + (0x12 << 2)
label_20e9ec:
    if (ctx->pc == 0x20E9ECu) {
        ctx->pc = 0x20E9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E9E8u;
        // 0x20e9ec: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20E9F0u;
        goto label_20e9f0;
    }
    ctx->pc = 0x20E9E8u;
    {
        const bool branch_taken_0x20e9e8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x20E9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E9E8u;
        // 0x20e9ec: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e9e8) {
            ctx->pc = 0x20EA34u;
            goto label_20ea34;
        }
    }
    ctx->pc = 0x20E9F0u;
label_20e9f0:
    // 0x20e9f0: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x20e9f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_20e9f4:
    // 0x20e9f4: 0x90224af7  lbu         $v0, 0x4AF7($at)
    ctx->pc = 0x20e9f4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 19191)));
label_20e9f8:
    // 0x20e9f8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x20e9f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_20e9fc:
    // 0x20e9fc: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_20ea00:
    if (ctx->pc == 0x20EA00u) {
        ctx->pc = 0x20EA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E9FCu;
        // 0x20ea00: 0x3c010029  lui         $at, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20EA04u;
        goto label_20ea04;
    }
    ctx->pc = 0x20E9FCu;
    {
        const bool branch_taken_0x20e9fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20EA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E9FCu;
        // 0x20ea00: 0x3c010029  lui         $at, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e9fc) {
            ctx->pc = 0x20EA30u;
            goto label_20ea30;
        }
    }
    ctx->pc = 0x20EA04u;
label_20ea04:
    // 0x20ea04: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x20ea04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
label_20ea08:
    // 0x20ea08: 0x8c300d30  lw          $s0, 0xD30($at)
    ctx->pc = 0x20ea08u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 3376)));
label_20ea0c:
    // 0x20ea0c: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x20ea0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_20ea10:
    // 0x20ea10: 0xc070080  jal         func_1C0200
label_20ea14:
    if (ctx->pc == 0x20EA14u) {
        ctx->pc = 0x20EA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EA10u;
        // 0x20ea14: 0x34456800  ori         $a1, $v0, 0x6800 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26624);
        ctx->in_delay_slot = false;
        ctx->pc = 0x20EA18u;
        goto label_20ea18;
    }
    ctx->pc = 0x20EA10u;
    SET_GPR_U32(ctx, 31, 0x20EA18u);
    ctx->pc = 0x20EA14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20EA10u;
    // 0x20ea14: 0x34456800  ori         $a1, $v0, 0x6800 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26624);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    { ctx->pc = 0x1c0200; return; }
    ctx->pc = 0x20EA18u;
label_20ea18:
    // 0x20ea18: 0x26041695  addiu       $a0, $s0, 0x1695
    ctx->pc = 0x20ea18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 5781));
label_20ea1c:
    // 0x20ea1c: 0x2405008d  addiu       $a1, $zero, 0x8D
    ctx->pc = 0x20ea1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 141));
label_20ea20:
    // 0x20ea20: 0xc041744  jal         func_105D10
label_20ea24:
    if (ctx->pc == 0x20EA24u) {
        ctx->pc = 0x20EA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EA20u;
        // 0x20ea24: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20EA28u;
        goto label_20ea28;
    }
    ctx->pc = 0x20EA20u;
    SET_GPR_U32(ctx, 31, 0x20EA28u);
    ctx->pc = 0x20EA24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20EA20u;
    // 0x20ea24: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105D10u, 0x20EA20u, 0x20EA28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20EA28u;
label_20ea28:
    // 0x20ea28: 0x10000021  b           . + 4 + (0x21 << 2)
label_20ea2c:
    if (ctx->pc == 0x20EA2Cu) {
        ctx->pc = 0x20EA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EA28u;
        // 0x20ea2c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20EA30u;
        goto label_20ea30;
    }
    ctx->pc = 0x20EA28u;
    {
        const bool branch_taken_0x20ea28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20EA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EA28u;
        // 0x20ea2c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ea28) {
            ctx->pc = 0x20EAB0u;
            goto label_20eab0;
        }
    }
    ctx->pc = 0x20EA30u;
label_20ea30:
    // 0x20ea30: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x20ea30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_20ea34:
    // 0x20ea34: 0x14c20012  bne         $a2, $v0, . + 4 + (0x12 << 2)
label_20ea38:
    if (ctx->pc == 0x20EA38u) {
        ctx->pc = 0x20EA3Cu;
        goto label_20ea3c;
    }
    ctx->pc = 0x20EA34u;
    {
        const bool branch_taken_0x20ea34 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x20ea34) {
            ctx->pc = 0x20EA80u;
            goto label_20ea80;
        }
    }
    ctx->pc = 0x20EA3Cu;
label_20ea3c:
    // 0x20ea3c: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x20ea3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_20ea40:
    // 0x20ea40: 0x90224af7  lbu         $v0, 0x4AF7($at)
    ctx->pc = 0x20ea40u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 19191)));
label_20ea44:
    // 0x20ea44: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x20ea44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_20ea48:
    // 0x20ea48: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_20ea4c:
    if (ctx->pc == 0x20EA4Cu) {
        ctx->pc = 0x20EA50u;
        goto label_20ea50;
    }
    ctx->pc = 0x20EA48u;
    {
        const bool branch_taken_0x20ea48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20ea48) {
            ctx->pc = 0x20EA80u;
            goto label_20ea80;
        }
    }
    ctx->pc = 0x20EA50u;
label_20ea50:
    // 0x20ea50: 0x3c010029  lui         $at, 0x29
    ctx->pc = 0x20ea50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)41 << 16));
label_20ea54:
    // 0x20ea54: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x20ea54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
label_20ea58:
    // 0x20ea58: 0x8c300d30  lw          $s0, 0xD30($at)
    ctx->pc = 0x20ea58u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 3376)));
label_20ea5c:
    // 0x20ea5c: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x20ea5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_20ea60:
    // 0x20ea60: 0xc070080  jal         func_1C0200
label_20ea64:
    if (ctx->pc == 0x20EA64u) {
        ctx->pc = 0x20EA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EA60u;
        // 0x20ea64: 0x34456800  ori         $a1, $v0, 0x6800 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26624);
        ctx->in_delay_slot = false;
        ctx->pc = 0x20EA68u;
        goto label_20ea68;
    }
    ctx->pc = 0x20EA60u;
    SET_GPR_U32(ctx, 31, 0x20EA68u);
    ctx->pc = 0x20EA64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20EA60u;
    // 0x20ea64: 0x34456800  ori         $a1, $v0, 0x6800 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26624);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    { ctx->pc = 0x1c0200; return; }
    ctx->pc = 0x20EA68u;
label_20ea68:
    // 0x20ea68: 0x26041722  addiu       $a0, $s0, 0x1722
    ctx->pc = 0x20ea68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 5922));
label_20ea6c:
    // 0x20ea6c: 0x2405008d  addiu       $a1, $zero, 0x8D
    ctx->pc = 0x20ea6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 141));
label_20ea70:
    // 0x20ea70: 0xc041744  jal         func_105D10
label_20ea74:
    if (ctx->pc == 0x20EA74u) {
        ctx->pc = 0x20EA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EA70u;
        // 0x20ea74: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20EA78u;
        goto label_20ea78;
    }
    ctx->pc = 0x20EA70u;
    SET_GPR_U32(ctx, 31, 0x20EA78u);
    ctx->pc = 0x20EA74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20EA70u;
    // 0x20ea74: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105D10u, 0x20EA70u, 0x20EA78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20EA78u;
label_20ea78:
    // 0x20ea78: 0x1000000d  b           . + 4 + (0xD << 2)
label_20ea7c:
    if (ctx->pc == 0x20EA7Cu) {
        ctx->pc = 0x20EA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EA78u;
        // 0x20ea7c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20EA80u;
        goto label_20ea80;
    }
    ctx->pc = 0x20EA78u;
    {
        const bool branch_taken_0x20ea78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20EA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EA78u;
        // 0x20ea7c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ea78) {
            ctx->pc = 0x20EAB0u;
            goto label_20eab0;
        }
    }
    ctx->pc = 0x20EA80u;
label_20ea80:
    // 0x20ea80: 0x3c010029  lui         $at, 0x29
    ctx->pc = 0x20ea80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)41 << 16));
label_20ea84:
    // 0x20ea84: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x20ea84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
label_20ea88:
    // 0x20ea88: 0x8c310d30  lw          $s1, 0xD30($at)
    ctx->pc = 0x20ea88u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 3376)));
label_20ea8c:
    // 0x20ea8c: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x20ea8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_20ea90:
    // 0x20ea90: 0xc070080  jal         func_1C0200
label_20ea94:
    if (ctx->pc == 0x20EA94u) {
        ctx->pc = 0x20EA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EA90u;
        // 0x20ea94: 0x34456800  ori         $a1, $v0, 0x6800 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26624);
        ctx->in_delay_slot = false;
        ctx->pc = 0x20EA98u;
        goto label_20ea98;
    }
    ctx->pc = 0x20EA90u;
    SET_GPR_U32(ctx, 31, 0x20EA98u);
    ctx->pc = 0x20EA94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20EA90u;
    // 0x20ea94: 0x34456800  ori         $a1, $v0, 0x6800 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26624);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    { ctx->pc = 0x1c0200; return; }
    ctx->pc = 0x20EA98u;
label_20ea98:
    // 0x20ea98: 0x2405008d  addiu       $a1, $zero, 0x8D
    ctx->pc = 0x20ea98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 141));
label_20ea9c:
    // 0x20ea9c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x20ea9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20eaa0:
    // 0x20eaa0: 0x2051018  mult        $v0, $s0, $a1
    ctx->pc = 0x20eaa0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_20eaa4:
    // 0x20eaa4: 0xc041744  jal         func_105D10
label_20eaa8:
    if (ctx->pc == 0x20EAA8u) {
        ctx->pc = 0x20EAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EAA4u;
        // 0x20eaa8: 0x512021  addu        $a0, $v0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20EAACu;
        goto label_20eaac;
    }
    ctx->pc = 0x20EAA4u;
    SET_GPR_U32(ctx, 31, 0x20EAACu);
    ctx->pc = 0x20EAA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20EAA4u;
    // 0x20eaa8: 0x512021  addu        $a0, $v0, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105D10u, 0x20EAA4u, 0x20EAACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20EAACu;
label_20eaac:
    // 0x20eaac: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x20eaacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20eab0:
    // 0x20eab0: 0xc060678  jal         func_1819E0
label_20eab4:
    if (ctx->pc == 0x20EAB4u) {
        ctx->pc = 0x20EAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EAB0u;
        // 0x20eab4: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20EAB8u;
        goto label_20eab8;
    }
    ctx->pc = 0x20EAB0u;
    SET_GPR_U32(ctx, 31, 0x20EAB8u);
    ctx->pc = 0x20EAB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20EAB0u;
    // 0x20eab4: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1819E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1819E0u, 0x20EAB0u, 0x20EAB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20EAB8u;
label_20eab8:
    // 0x20eab8: 0x22c3c  dsll32      $a1, $v0, 16
    ctx->pc = 0x20eab8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 16));
label_20eabc:
    // 0x20eabc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20eabcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20eac0:
    // 0x20eac0: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x20eac0u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
label_20eac4:
    // 0x20eac4: 0x27a6006e  addiu       $a2, $sp, 0x6E
    ctx->pc = 0x20eac4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 110));
label_20eac8:
    // 0x20eac8: 0x24070018  addiu       $a3, $zero, 0x18
    ctx->pc = 0x20eac8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_20eacc:
    // 0x20eacc: 0xc060390  jal         func_180E40
label_20ead0:
    if (ctx->pc == 0x20EAD0u) {
        ctx->pc = 0x20EAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EACCu;
        // 0x20ead0: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20EAD4u;
        goto label_20ead4;
    }
    ctx->pc = 0x20EACCu;
    SET_GPR_U32(ctx, 31, 0x20EAD4u);
    ctx->pc = 0x20EAD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20EACCu;
    // 0x20ead0: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180E40u, 0x20EACCu, 0x20EAD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20EAD4u;
label_20ead4:
    // 0x20ead4: 0xff829178  sd          $v0, -0x6E88($gp)
    ctx->pc = 0x20ead4u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294939000), GPR_U64(ctx, 2));
label_20ead8:
    // 0x20ead8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x20ead8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20eadc:
    // 0x20eadc: 0xc06063c  jal         func_1818F0
label_20eae0:
    if (ctx->pc == 0x20EAE0u) {
        ctx->pc = 0x20EAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EADCu;
        // 0x20eae0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20EAE4u;
        goto label_20eae4;
    }
    ctx->pc = 0x20EADCu;
    SET_GPR_U32(ctx, 31, 0x20EAE4u);
    ctx->pc = 0x20EAE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20EADCu;
    // 0x20eae0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1818F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1818F0u, 0x20EADCu, 0x20EAE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20EAE4u;
label_20eae4:
    // 0x20eae4: 0xff829178  sd          $v0, -0x6E88($gp)
    ctx->pc = 0x20eae4u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294939000), GPR_U64(ctx, 2));
label_20eae8:
    // 0x20eae8: 0xc070038  jal         func_1C00E0
label_20eaec:
    if (ctx->pc == 0x20EAECu) {
        ctx->pc = 0x20EAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EAE8u;
        // 0x20eaec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20EAF0u;
        goto label_20eaf0;
    }
    ctx->pc = 0x20EAE8u;
    SET_GPR_U32(ctx, 31, 0x20EAF0u);
    ctx->pc = 0x20EAECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20EAE8u;
    // 0x20eaec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C00E0u;
    { ctx->pc = 0x1c00e0; return; }
    ctx->pc = 0x20EAF0u;
label_20eaf0:
    // 0x20eaf0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x20eaf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20eaf4:
    // 0x20eaf4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x20eaf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20eaf8:
    // 0x20eaf8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x20eaf8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20eafc:
    // 0x20eafc: 0xc06dfd4  jal         func_1B7F50
label_20eb00:
    if (ctx->pc == 0x20EB00u) {
        ctx->pc = 0x20EB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EAFCu;
        // 0x20eb00: 0xaf809170  sw          $zero, -0x6E90($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938992), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20EB04u;
        goto label_20eb04;
    }
    ctx->pc = 0x20EAFCu;
    SET_GPR_U32(ctx, 31, 0x20EB04u);
    ctx->pc = 0x20EB00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20EAFCu;
    // 0x20eb00: 0xaf809170  sw          $zero, -0x6E90($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938992), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7F50u;
    { ctx->pc = 0x1b7f50; return; }
    ctx->pc = 0x20EB04u;
label_20eb04:
    // 0x20eb04: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x20eb04u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20eb08:
    // 0x20eb08: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x20eb08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20eb0c:
    // 0x20eb0c: 0x27829180  addiu       $v0, $gp, -0x6E80
    ctx->pc = 0x20eb0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294939008));
label_20eb10:
    // 0x20eb10: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x20eb10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_20eb14:
    // 0x20eb14: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x20eb14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_20eb18:
    // 0x20eb18: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x20eb18u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_20eb1c:
    // 0x20eb1c: 0xc05e234  jal         func_1788D0
label_20eb20:
    if (ctx->pc == 0x20EB20u) {
        ctx->pc = 0x20EB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EB1Cu;
        // 0x20eb20: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20EB24u;
        goto label_20eb24;
    }
    ctx->pc = 0x20EB1Cu;
    SET_GPR_U32(ctx, 31, 0x20EB24u);
    ctx->pc = 0x20EB20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20EB1Cu;
    // 0x20eb20: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1788D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1788D0u, 0x20EB1Cu, 0x20EB24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20EB24u;
label_20eb24:
    // 0x20eb24: 0x240201c0  addiu       $v0, $zero, 0x1C0
    ctx->pc = 0x20eb24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_20eb28:
    // 0x20eb28: 0x26440010  addiu       $a0, $s2, 0x10
    ctx->pc = 0x20eb28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_20eb2c:
    // 0x20eb2c: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x20eb2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_20eb30:
    // 0x20eb30: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x20eb30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20eb34:
    // 0x20eb34: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x20eb34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_20eb38:
    // 0x20eb38: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x20eb38u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20eb3c:
    // 0x20eb3c: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x20eb3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
label_20eb40:
    // 0x20eb40: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x20eb40u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20eb44:
    // 0x20eb44: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20eb44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20eb48:
    // 0x20eb48: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x20eb48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
label_20eb4c:
    // 0x20eb4c: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x20eb4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_20eb50:
    // 0x20eb50: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x20eb50u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20eb54:
    // 0x20eb54: 0xdf859178  ld          $a1, -0x6E88($gp)
    ctx->pc = 0x20eb54u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 28), 4294939000)));
label_20eb58:
    // 0x20eb58: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x20eb58u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20eb5c:
    // 0x20eb5c: 0xc05de30  jal         func_1778C0
label_20eb60:
    if (ctx->pc == 0x20EB60u) {
        ctx->pc = 0x20EB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EB5Cu;
        // 0x20eb60: 0x240b0280  addiu       $t3, $zero, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20EB64u;
        goto label_20eb64;
    }
    ctx->pc = 0x20EB5Cu;
    SET_GPR_U32(ctx, 31, 0x20EB64u);
    ctx->pc = 0x20EB60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20EB5Cu;
    // 0x20eb60: 0x240b0280  addiu       $t3, $zero, 0x280 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1778C0u, 0x20EB5Cu, 0x20EB64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20EB64u;
label_20eb64:
    // 0x20eb64: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x20eb64u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_20eb68:
    // 0x20eb68: 0x2a220002  slti        $v0, $s1, 0x2
    ctx->pc = 0x20eb68u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
label_20eb6c:
    // 0x20eb6c: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
label_20eb70:
    if (ctx->pc == 0x20EB70u) {
        ctx->pc = 0x20EB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EB6Cu;
        // 0x20eb70: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20EB74u;
        goto label_20eb74;
    }
    ctx->pc = 0x20EB6Cu;
    {
        const bool branch_taken_0x20eb6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20EB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EB6Cu;
        // 0x20eb70: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20eb6c) {
            ctx->pc = 0x20EB0Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20eb0c;
        }
    }
    ctx->pc = 0x20EB74u;
label_20eb74:
    // 0x20eb74: 0xc04e19c  jal         func_138670
label_20eb78:
    if (ctx->pc == 0x20EB78u) {
        ctx->pc = 0x20EB7Cu;
        goto label_20eb7c;
    }
    ctx->pc = 0x20EB74u;
    SET_GPR_U32(ctx, 31, 0x20EB7Cu);
    ctx->pc = 0x138670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138670u, 0x20EB74u, 0x20EB7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20EB7Cu;
label_20eb7c:
    // 0x20eb7c: 0x24040023  addiu       $a0, $zero, 0x23
    ctx->pc = 0x20eb7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
label_20eb80:
    // 0x20eb80: 0xc05af64  jal         func_16BD90
label_20eb84:
    if (ctx->pc == 0x20EB84u) {
        ctx->pc = 0x20EB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EB80u;
        // 0x20eb84: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20EB88u;
        goto label_20eb88;
    }
    ctx->pc = 0x20EB80u;
    SET_GPR_U32(ctx, 31, 0x20EB88u);
    ctx->pc = 0x20EB84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20EB80u;
    // 0x20eb84: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16BD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16BD90u, 0x20EB80u, 0x20EB88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20EB88u;
label_20eb88:
    // 0x20eb88: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x20eb88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_20eb8c:
    // 0x20eb8c: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x20eb8cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_20eb90:
    // 0x20eb90: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x20eb90u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_20eb94:
    // 0x20eb94: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x20eb94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_20eb98:
    // 0x20eb98: 0x3e00008  jr          $ra
label_20eb9c:
    if (ctx->pc == 0x20EB9Cu) {
        ctx->pc = 0x20EB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EB98u;
        // 0x20eb9c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20EBA0u;
        goto label_20eba0;
    }
    ctx->pc = 0x20EB98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20EB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EB98u;
        // 0x20eb9c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20EB98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20EBA0u;
label_20eba0:
    // 0x20eba0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x20eba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_20eba4:
    // 0x20eba4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x20eba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_20eba8:
    // 0x20eba8: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x20eba8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_20ebac:
    // 0x20ebac: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x20ebacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_20ebb0:
    // 0x20ebb0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x20ebb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_20ebb4:
    // 0x20ebb4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x20ebb4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_20ebb8:
    // 0x20ebb8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x20ebb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_20ebbc:
    // 0x20ebbc: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x20ebbcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_20ebc0:
    // 0x20ebc0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x20ebc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_20ebc4:
    // 0x20ebc4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x20ebc4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_20ebc8:
    // 0x20ebc8: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x20ebc8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_20ebcc:
    // 0x20ebcc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x20ebccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20ebd0:
    // 0x20ebd0: 0xc040058  jal         func_100160
label_20ebd4:
    if (ctx->pc == 0x20EBD4u) {
        ctx->pc = 0x20EBD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EBD0u;
        // 0x20ebd4: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x20EBD8u;
        goto label_20ebd8;
    }
    ctx->pc = 0x20EBD0u;
    SET_GPR_U32(ctx, 31, 0x20EBD8u);
    ctx->pc = 0x20EBD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20EBD0u;
    // 0x20ebd4: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x100160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100160u, 0x20EBD0u, 0x20EBD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20EBD8u;
label_20ebd8:
    // 0x20ebd8: 0xc040058  jal         func_100160
label_20ebdc:
    if (ctx->pc == 0x20EBDCu) {
        ctx->pc = 0x20EBDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EBD8u;
        // 0x20ebdc: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20EBE0u;
        goto label_20ebe0;
    }
    ctx->pc = 0x20EBD8u;
    SET_GPR_U32(ctx, 31, 0x20EBE0u);
    ctx->pc = 0x20EBDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20EBD8u;
    // 0x20ebdc: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100160u, 0x20EBD8u, 0x20EBE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20EBE0u;
label_20ebe0:
    // 0x20ebe0: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x20ebe0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_20ebe4:
    // 0x20ebe4: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x20ebe4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
label_20ebe8:
    // 0x20ebe8: 0x8c233ffc  lw          $v1, 0x3FFC($at)
    ctx->pc = 0x20ebe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_20ebec:
    // 0x20ebec: 0x24421e00  addiu       $v0, $v0, 0x1E00
    ctx->pc = 0x20ebecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7680));
label_20ebf0:
    // 0x20ebf0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x20ebf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20ebf4:
    // 0x20ebf4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x20ebf4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20ebf8:
    // 0x20ebf8: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x20ebf8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_20ebfc:
    // 0x20ebfc: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x20ebfcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_20ec00:
    // 0x20ec00: 0xc05eab4  jal         func_17AAD0
label_20ec04:
    if (ctx->pc == 0x20EC04u) {
        ctx->pc = 0x20EC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EC00u;
        // 0x20ec04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20EC08u;
        goto label_20ec08;
    }
    ctx->pc = 0x20EC00u;
    SET_GPR_U32(ctx, 31, 0x20EC08u);
    ctx->pc = 0x20EC04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20EC00u;
    // 0x20ec04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17AAD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17AAD0u, 0x20EC00u, 0x20EC08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20EC08u;
label_20ec08:
    // 0x20ec08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20ec08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20ec0c:
    // 0x20ec0c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x20ec0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20ec10:
    // 0x20ec10: 0xc05ea18  jal         func_17A860
label_20ec14:
    if (ctx->pc == 0x20EC14u) {
        ctx->pc = 0x20EC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EC10u;
        // 0x20ec14: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20EC18u;
        goto label_20ec18;
    }
    ctx->pc = 0x20EC10u;
    SET_GPR_U32(ctx, 31, 0x20EC18u);
    ctx->pc = 0x20EC14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20EC10u;
    // 0x20ec14: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A860u, 0x20EC10u, 0x20EC18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20EC18u;
label_20ec18:
    // 0x20ec18: 0x8f82918c  lw          $v0, -0x6E74($gp)
    ctx->pc = 0x20ec18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939020)));
label_20ec1c:
    // 0x20ec1c: 0x121900  sll         $v1, $s2, 4
    ctx->pc = 0x20ec1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
label_20ec20:
    // 0x20ec20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20ec20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20ec24:
    // 0x20ec24: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x20ec24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_20ec28:
    // 0x20ec28: 0xc066d0a  jal         func_19B428
label_20ec2c:
    if (ctx->pc == 0x20EC2Cu) {
        ctx->pc = 0x20EC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EC28u;
        // 0x20ec2c: 0x439021  addu        $s2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20EC30u;
        goto label_20ec30;
    }
    ctx->pc = 0x20EC28u;
    SET_GPR_U32(ctx, 31, 0x20EC30u);
    ctx->pc = 0x20EC2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20EC28u;
    // 0x20ec2c: 0x439021  addu        $s2, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B428u, 0x20EC28u, 0x20EC30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20EC30u;
label_20ec30:
    // 0x20ec30: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x20ec30u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20ec34:
    // 0x20ec34: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x20ec34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_20ec38:
    // 0x20ec38: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x20ec38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_20ec3c:
    // 0x20ec3c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x20ec3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_20ec40:
    // 0x20ec40: 0xc05e990  jal         func_17A640
label_20ec44:
    if (ctx->pc == 0x20EC44u) {
        ctx->pc = 0x20EC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EC40u;
        // 0x20ec44: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20EC48u;
        goto label_20ec48;
    }
    ctx->pc = 0x20EC40u;
    SET_GPR_U32(ctx, 31, 0x20EC48u);
    ctx->pc = 0x20EC44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20EC40u;
    // 0x20ec44: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A640u, 0x20EC40u, 0x20EC48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20EC48u;
label_20ec48:
    // 0x20ec48: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x20ec48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_20ec4c:
    // 0x20ec4c: 0xc066e26  jal         func_19B898
label_20ec50:
    if (ctx->pc == 0x20EC50u) {
        ctx->pc = 0x20EC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EC4Cu;
        // 0x20ec50: 0x26840050  addiu       $a0, $s4, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20EC54u;
        goto label_20ec54;
    }
    ctx->pc = 0x20EC4Cu;
    SET_GPR_U32(ctx, 31, 0x20EC54u);
    ctx->pc = 0x20EC50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20EC4Cu;
    // 0x20ec50: 0x26840050  addiu       $a0, $s4, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B898u, 0x20EC4Cu, 0x20EC54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20EC54u;
label_20ec54:
    // 0x20ec54: 0xe694005c  swc1        $f20, 0x5C($s4)
    ctx->pc = 0x20ec54u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 92), bits); }
label_20ec58:
    // 0x20ec58: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x20ec58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20ec5c:
    // 0x20ec5c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x20ec5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_20ec60:
    // 0x20ec60: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x20ec60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20ec64:
    // 0x20ec64: 0x8f83918c  lw          $v1, -0x6E74($gp)
    ctx->pc = 0x20ec64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939020)));
label_20ec68:
    // 0x20ec68: 0xc083b9c  jal         func_20EE70
label_20ec6c:
    if (ctx->pc == 0x20EC6Cu) {
        ctx->pc = 0x20EC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EC68u;
        // 0x20ec6c: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20EC70u;
        goto label_20ec70;
    }
    ctx->pc = 0x20EC68u;
    SET_GPR_U32(ctx, 31, 0x20EC70u);
    ctx->pc = 0x20EC6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20EC68u;
    // 0x20ec6c: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20EE70u;
    { ctx->pc = 0x20ee70; return; }
    ctx->pc = 0x20EC70u;
label_20ec70:
    // 0x20ec70: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x20ec70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_20ec74:
    // 0x20ec74: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x20ec74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_20ec78:
    // 0x20ec78: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x20ec78u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_20ec7c:
    // 0x20ec7c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x20ec7cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_20ec80:
    // 0x20ec80: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x20ec80u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_20ec84:
    // 0x20ec84: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x20ec84u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_20ec88:
    // 0x20ec88: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x20ec88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_20ec8c:
    // 0x20ec8c: 0x3e00008  jr          $ra
label_20ec90:
    if (ctx->pc == 0x20EC90u) {
        ctx->pc = 0x20EC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EC8Cu;
        // 0x20ec90: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20EC94u;
        goto label_20ec94;
    }
    ctx->pc = 0x20EC8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20EC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EC8Cu;
        // 0x20ec90: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20EC8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20EC94u;
label_20ec94:
    // 0x20ec94: 0x0  nop
    ctx->pc = 0x20ec94u;
    // NOP
label_20ec98:
    // 0x20ec98: 0x0  nop
    ctx->pc = 0x20ec98u;
    // NOP
label_20ec9c:
    // 0x20ec9c: 0x0  nop
    ctx->pc = 0x20ec9cu;
    // NOP
label_20eca0:
    // 0x20eca0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x20eca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_20eca4:
    // 0x20eca4: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x20eca4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
label_20eca8:
    // 0x20eca8: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x20eca8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_20ecac:
    // 0x20ecac: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x20ecacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
label_20ecb0:
    // 0x20ecb0: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x20ecb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_20ecb4:
    // 0x20ecb4: 0x34633ffc  ori         $v1, $v1, 0x3FFC
    ctx->pc = 0x20ecb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16380);
label_20ecb8:
    // 0x20ecb8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x20ecb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_20ecbc:
    // 0x20ecbc: 0x24421e00  addiu       $v0, $v0, 0x1E00
    ctx->pc = 0x20ecbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7680));
label_20ecc0:
    // 0x20ecc0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x20ecc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_20ecc4:
    // 0x20ecc4: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x20ecc4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_20ecc8:
    // 0x20ecc8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x20ecc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_20eccc:
    // 0x20eccc: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x20ecccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x20ecd0u;
    return;
}
