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

// Function: FUN_0019b5e8
// Address: 0x19b5e8 - 0x29b5f4
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0019b5e8_part7(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x19e4c8u: goto label_19e4c8;
        case 0x19e4ccu: goto label_19e4cc;
        case 0x19e4d0u: goto label_19e4d0;
        case 0x19e4d4u: goto label_19e4d4;
        case 0x19e4d8u: goto label_19e4d8;
        case 0x19e4dcu: goto label_19e4dc;
        case 0x19e4e0u: goto label_19e4e0;
        case 0x19e4e4u: goto label_19e4e4;
        case 0x19e4e8u: goto label_19e4e8;
        case 0x19e4ecu: goto label_19e4ec;
        case 0x19e4f0u: goto label_19e4f0;
        case 0x19e4f4u: goto label_19e4f4;
        case 0x19e4f8u: goto label_19e4f8;
        case 0x19e4fcu: goto label_19e4fc;
        case 0x19e500u: goto label_19e500;
        case 0x19e504u: goto label_19e504;
        case 0x19e508u: goto label_19e508;
        case 0x19e50cu: goto label_19e50c;
        case 0x19e510u: goto label_19e510;
        case 0x19e514u: goto label_19e514;
        case 0x19e518u: goto label_19e518;
        case 0x19e51cu: goto label_19e51c;
        case 0x19e520u: goto label_19e520;
        case 0x19e524u: goto label_19e524;
        case 0x19e528u: goto label_19e528;
        case 0x19e52cu: goto label_19e52c;
        case 0x19e530u: goto label_19e530;
        case 0x19e534u: goto label_19e534;
        case 0x19e538u: goto label_19e538;
        case 0x19e53cu: goto label_19e53c;
        case 0x19e540u: goto label_19e540;
        case 0x19e544u: goto label_19e544;
        case 0x19e548u: goto label_19e548;
        case 0x19e54cu: goto label_19e54c;
        case 0x19e550u: goto label_19e550;
        case 0x19e554u: goto label_19e554;
        case 0x19e558u: goto label_19e558;
        case 0x19e55cu: goto label_19e55c;
        case 0x19e560u: goto label_19e560;
        case 0x19e564u: goto label_19e564;
        case 0x19e568u: goto label_19e568;
        case 0x19e56cu: goto label_19e56c;
        case 0x19e570u: goto label_19e570;
        case 0x19e574u: goto label_19e574;
        case 0x19e578u: goto label_19e578;
        case 0x19e57cu: goto label_19e57c;
        case 0x19e580u: goto label_19e580;
        case 0x19e584u: goto label_19e584;
        case 0x19e588u: goto label_19e588;
        case 0x19e58cu: goto label_19e58c;
        case 0x19e590u: goto label_19e590;
        case 0x19e594u: goto label_19e594;
        case 0x19e598u: goto label_19e598;
        case 0x19e59cu: goto label_19e59c;
        case 0x19e5a0u: goto label_19e5a0;
        case 0x19e5a4u: goto label_19e5a4;
        case 0x19e5a8u: goto label_19e5a8;
        case 0x19e5acu: goto label_19e5ac;
        case 0x19e5b0u: goto label_19e5b0;
        case 0x19e5b4u: goto label_19e5b4;
        case 0x19e5b8u: goto label_19e5b8;
        case 0x19e5bcu: goto label_19e5bc;
        case 0x19e5c0u: goto label_19e5c0;
        case 0x19e5c4u: goto label_19e5c4;
        case 0x19e5c8u: goto label_19e5c8;
        case 0x19e5ccu: goto label_19e5cc;
        case 0x19e5d0u: goto label_19e5d0;
        case 0x19e5d4u: goto label_19e5d4;
        case 0x19e5d8u: goto label_19e5d8;
        case 0x19e5dcu: goto label_19e5dc;
        case 0x19e5e0u: goto label_19e5e0;
        case 0x19e5e4u: goto label_19e5e4;
        case 0x19e5e8u: goto label_19e5e8;
        case 0x19e5ecu: goto label_19e5ec;
        case 0x19e5f0u: goto label_19e5f0;
        case 0x19e5f4u: goto label_19e5f4;
        case 0x19e5f8u: goto label_19e5f8;
        case 0x19e5fcu: goto label_19e5fc;
        case 0x19e600u: goto label_19e600;
        case 0x19e604u: goto label_19e604;
        case 0x19e608u: goto label_19e608;
        case 0x19e60cu: goto label_19e60c;
        case 0x19e610u: goto label_19e610;
        case 0x19e614u: goto label_19e614;
        case 0x19e618u: goto label_19e618;
        case 0x19e61cu: goto label_19e61c;
        case 0x19e620u: goto label_19e620;
        case 0x19e624u: goto label_19e624;
        case 0x19e628u: goto label_19e628;
        case 0x19e62cu: goto label_19e62c;
        case 0x19e630u: goto label_19e630;
        case 0x19e634u: goto label_19e634;
        case 0x19e638u: goto label_19e638;
        case 0x19e63cu: goto label_19e63c;
        case 0x19e640u: goto label_19e640;
        case 0x19e644u: goto label_19e644;
        case 0x19e648u: goto label_19e648;
        case 0x19e64cu: goto label_19e64c;
        case 0x19e650u: goto label_19e650;
        case 0x19e654u: goto label_19e654;
        case 0x19e658u: goto label_19e658;
        case 0x19e65cu: goto label_19e65c;
        case 0x19e660u: goto label_19e660;
        case 0x19e664u: goto label_19e664;
        case 0x19e668u: goto label_19e668;
        case 0x19e66cu: goto label_19e66c;
        case 0x19e670u: goto label_19e670;
        case 0x19e674u: goto label_19e674;
        case 0x19e678u: goto label_19e678;
        case 0x19e67cu: goto label_19e67c;
        case 0x19e680u: goto label_19e680;
        case 0x19e684u: goto label_19e684;
        case 0x19e688u: goto label_19e688;
        case 0x19e68cu: goto label_19e68c;
        case 0x19e690u: goto label_19e690;
        case 0x19e694u: goto label_19e694;
        case 0x19e698u: goto label_19e698;
        case 0x19e69cu: goto label_19e69c;
        case 0x19e6a0u: goto label_19e6a0;
        case 0x19e6a4u: goto label_19e6a4;
        case 0x19e6a8u: goto label_19e6a8;
        case 0x19e6acu: goto label_19e6ac;
        case 0x19e6b0u: goto label_19e6b0;
        case 0x19e6b4u: goto label_19e6b4;
        case 0x19e6b8u: goto label_19e6b8;
        case 0x19e6bcu: goto label_19e6bc;
        case 0x19e6c0u: goto label_19e6c0;
        case 0x19e6c4u: goto label_19e6c4;
        case 0x19e6c8u: goto label_19e6c8;
        case 0x19e6ccu: goto label_19e6cc;
        case 0x19e6d0u: goto label_19e6d0;
        case 0x19e6d4u: goto label_19e6d4;
        case 0x19e6d8u: goto label_19e6d8;
        case 0x19e6dcu: goto label_19e6dc;
        case 0x19e6e0u: goto label_19e6e0;
        case 0x19e6e4u: goto label_19e6e4;
        case 0x19e6e8u: goto label_19e6e8;
        case 0x19e6ecu: goto label_19e6ec;
        case 0x19e6f0u: goto label_19e6f0;
        case 0x19e6f4u: goto label_19e6f4;
        case 0x19e6f8u: goto label_19e6f8;
        case 0x19e6fcu: goto label_19e6fc;
        case 0x19e700u: goto label_19e700;
        case 0x19e704u: goto label_19e704;
        case 0x19e708u: goto label_19e708;
        case 0x19e70cu: goto label_19e70c;
        case 0x19e710u: goto label_19e710;
        case 0x19e714u: goto label_19e714;
        case 0x19e718u: goto label_19e718;
        case 0x19e71cu: goto label_19e71c;
        case 0x19e720u: goto label_19e720;
        case 0x19e724u: goto label_19e724;
        case 0x19e728u: goto label_19e728;
        case 0x19e72cu: goto label_19e72c;
        case 0x19e730u: goto label_19e730;
        case 0x19e734u: goto label_19e734;
        case 0x19e738u: goto label_19e738;
        case 0x19e73cu: goto label_19e73c;
        case 0x19e740u: goto label_19e740;
        case 0x19e744u: goto label_19e744;
        case 0x19e748u: goto label_19e748;
        case 0x19e74cu: goto label_19e74c;
        case 0x19e750u: goto label_19e750;
        case 0x19e754u: goto label_19e754;
        case 0x19e758u: goto label_19e758;
        case 0x19e75cu: goto label_19e75c;
        case 0x19e760u: goto label_19e760;
        case 0x19e764u: goto label_19e764;
        case 0x19e768u: goto label_19e768;
        case 0x19e76cu: goto label_19e76c;
        case 0x19e770u: goto label_19e770;
        case 0x19e774u: goto label_19e774;
        case 0x19e778u: goto label_19e778;
        case 0x19e77cu: goto label_19e77c;
        case 0x19e780u: goto label_19e780;
        case 0x19e784u: goto label_19e784;
        case 0x19e788u: goto label_19e788;
        case 0x19e78cu: goto label_19e78c;
        case 0x19e790u: goto label_19e790;
        case 0x19e794u: goto label_19e794;
        case 0x19e798u: goto label_19e798;
        case 0x19e79cu: goto label_19e79c;
        case 0x19e7a0u: goto label_19e7a0;
        case 0x19e7a4u: goto label_19e7a4;
        case 0x19e7a8u: goto label_19e7a8;
        case 0x19e7acu: goto label_19e7ac;
        case 0x19e7b0u: goto label_19e7b0;
        case 0x19e7b4u: goto label_19e7b4;
        case 0x19e7b8u: goto label_19e7b8;
        case 0x19e7bcu: goto label_19e7bc;
        case 0x19e7c0u: goto label_19e7c0;
        case 0x19e7c4u: goto label_19e7c4;
        case 0x19e7c8u: goto label_19e7c8;
        case 0x19e7ccu: goto label_19e7cc;
        case 0x19e7d0u: goto label_19e7d0;
        case 0x19e7d4u: goto label_19e7d4;
        case 0x19e7d8u: goto label_19e7d8;
        case 0x19e7dcu: goto label_19e7dc;
        case 0x19e7e0u: goto label_19e7e0;
        case 0x19e7e4u: goto label_19e7e4;
        case 0x19e7e8u: goto label_19e7e8;
        case 0x19e7ecu: goto label_19e7ec;
        case 0x19e7f0u: goto label_19e7f0;
        case 0x19e7f4u: goto label_19e7f4;
        case 0x19e7f8u: goto label_19e7f8;
        case 0x19e7fcu: goto label_19e7fc;
        case 0x19e800u: goto label_19e800;
        case 0x19e804u: goto label_19e804;
        case 0x19e808u: goto label_19e808;
        case 0x19e80cu: goto label_19e80c;
        case 0x19e810u: goto label_19e810;
        case 0x19e814u: goto label_19e814;
        case 0x19e818u: goto label_19e818;
        case 0x19e81cu: goto label_19e81c;
        case 0x19e820u: goto label_19e820;
        case 0x19e824u: goto label_19e824;
        case 0x19e828u: goto label_19e828;
        case 0x19e82cu: goto label_19e82c;
        case 0x19e830u: goto label_19e830;
        case 0x19e834u: goto label_19e834;
        case 0x19e838u: goto label_19e838;
        case 0x19e83cu: goto label_19e83c;
        case 0x19e840u: goto label_19e840;
        case 0x19e844u: goto label_19e844;
        case 0x19e848u: goto label_19e848;
        case 0x19e84cu: goto label_19e84c;
        case 0x19e850u: goto label_19e850;
        case 0x19e854u: goto label_19e854;
        case 0x19e858u: goto label_19e858;
        case 0x19e85cu: goto label_19e85c;
        case 0x19e860u: goto label_19e860;
        case 0x19e864u: goto label_19e864;
        case 0x19e868u: goto label_19e868;
        case 0x19e86cu: goto label_19e86c;
        case 0x19e870u: goto label_19e870;
        case 0x19e874u: goto label_19e874;
        case 0x19e878u: goto label_19e878;
        case 0x19e87cu: goto label_19e87c;
        case 0x19e880u: goto label_19e880;
        case 0x19e884u: goto label_19e884;
        case 0x19e888u: goto label_19e888;
        case 0x19e88cu: goto label_19e88c;
        case 0x19e890u: goto label_19e890;
        case 0x19e894u: goto label_19e894;
        case 0x19e898u: goto label_19e898;
        case 0x19e89cu: goto label_19e89c;
        case 0x19e8a0u: goto label_19e8a0;
        case 0x19e8a4u: goto label_19e8a4;
        case 0x19e8a8u: goto label_19e8a8;
        case 0x19e8acu: goto label_19e8ac;
        case 0x19e8b0u: goto label_19e8b0;
        case 0x19e8b4u: goto label_19e8b4;
        case 0x19e8b8u: goto label_19e8b8;
        case 0x19e8bcu: goto label_19e8bc;
        case 0x19e8c0u: goto label_19e8c0;
        case 0x19e8c4u: goto label_19e8c4;
        case 0x19e8c8u: goto label_19e8c8;
        case 0x19e8ccu: goto label_19e8cc;
        case 0x19e8d0u: goto label_19e8d0;
        case 0x19e8d4u: goto label_19e8d4;
        case 0x19e8d8u: goto label_19e8d8;
        case 0x19e8dcu: goto label_19e8dc;
        case 0x19e8e0u: goto label_19e8e0;
        case 0x19e8e4u: goto label_19e8e4;
        case 0x19e8e8u: goto label_19e8e8;
        case 0x19e8ecu: goto label_19e8ec;
        case 0x19e8f0u: goto label_19e8f0;
        case 0x19e8f4u: goto label_19e8f4;
        case 0x19e8f8u: goto label_19e8f8;
        case 0x19e8fcu: goto label_19e8fc;
        case 0x19e900u: goto label_19e900;
        case 0x19e904u: goto label_19e904;
        case 0x19e908u: goto label_19e908;
        case 0x19e90cu: goto label_19e90c;
        case 0x19e910u: goto label_19e910;
        case 0x19e914u: goto label_19e914;
        case 0x19e918u: goto label_19e918;
        case 0x19e91cu: goto label_19e91c;
        case 0x19e920u: goto label_19e920;
        case 0x19e924u: goto label_19e924;
        case 0x19e928u: goto label_19e928;
        case 0x19e92cu: goto label_19e92c;
        case 0x19e930u: goto label_19e930;
        case 0x19e934u: goto label_19e934;
        case 0x19e938u: goto label_19e938;
        case 0x19e93cu: goto label_19e93c;
        case 0x19e940u: goto label_19e940;
        case 0x19e944u: goto label_19e944;
        case 0x19e948u: goto label_19e948;
        case 0x19e94cu: goto label_19e94c;
        case 0x19e950u: goto label_19e950;
        case 0x19e954u: goto label_19e954;
        case 0x19e958u: goto label_19e958;
        case 0x19e95cu: goto label_19e95c;
        case 0x19e960u: goto label_19e960;
        case 0x19e964u: goto label_19e964;
        case 0x19e968u: goto label_19e968;
        case 0x19e96cu: goto label_19e96c;
        case 0x19e970u: goto label_19e970;
        case 0x19e974u: goto label_19e974;
        case 0x19e978u: goto label_19e978;
        case 0x19e97cu: goto label_19e97c;
        case 0x19e980u: goto label_19e980;
        case 0x19e984u: goto label_19e984;
        case 0x19e988u: goto label_19e988;
        case 0x19e98cu: goto label_19e98c;
        case 0x19e990u: goto label_19e990;
        case 0x19e994u: goto label_19e994;
        case 0x19e998u: goto label_19e998;
        case 0x19e99cu: goto label_19e99c;
        case 0x19e9a0u: goto label_19e9a0;
        case 0x19e9a4u: goto label_19e9a4;
        case 0x19e9a8u: goto label_19e9a8;
        case 0x19e9acu: goto label_19e9ac;
        case 0x19e9b0u: goto label_19e9b0;
        case 0x19e9b4u: goto label_19e9b4;
        case 0x19e9b8u: goto label_19e9b8;
        case 0x19e9bcu: goto label_19e9bc;
        case 0x19e9c0u: goto label_19e9c0;
        case 0x19e9c4u: goto label_19e9c4;
        case 0x19e9c8u: goto label_19e9c8;
        case 0x19e9ccu: goto label_19e9cc;
        case 0x19e9d0u: goto label_19e9d0;
        case 0x19e9d4u: goto label_19e9d4;
        case 0x19e9d8u: goto label_19e9d8;
        case 0x19e9dcu: goto label_19e9dc;
        case 0x19e9e0u: goto label_19e9e0;
        case 0x19e9e4u: goto label_19e9e4;
        case 0x19e9e8u: goto label_19e9e8;
        case 0x19e9ecu: goto label_19e9ec;
        case 0x19e9f0u: goto label_19e9f0;
        case 0x19e9f4u: goto label_19e9f4;
        case 0x19e9f8u: goto label_19e9f8;
        case 0x19e9fcu: goto label_19e9fc;
        case 0x19ea00u: goto label_19ea00;
        case 0x19ea04u: goto label_19ea04;
        case 0x19ea08u: goto label_19ea08;
        case 0x19ea0cu: goto label_19ea0c;
        case 0x19ea10u: goto label_19ea10;
        case 0x19ea14u: goto label_19ea14;
        case 0x19ea18u: goto label_19ea18;
        case 0x19ea1cu: goto label_19ea1c;
        case 0x19ea20u: goto label_19ea20;
        case 0x19ea24u: goto label_19ea24;
        case 0x19ea28u: goto label_19ea28;
        case 0x19ea2cu: goto label_19ea2c;
        case 0x19ea30u: goto label_19ea30;
        case 0x19ea34u: goto label_19ea34;
        case 0x19ea38u: goto label_19ea38;
        case 0x19ea3cu: goto label_19ea3c;
        case 0x19ea40u: goto label_19ea40;
        case 0x19ea44u: goto label_19ea44;
        case 0x19ea48u: goto label_19ea48;
        case 0x19ea4cu: goto label_19ea4c;
        case 0x19ea50u: goto label_19ea50;
        case 0x19ea54u: goto label_19ea54;
        case 0x19ea58u: goto label_19ea58;
        case 0x19ea5cu: goto label_19ea5c;
        case 0x19ea60u: goto label_19ea60;
        case 0x19ea64u: goto label_19ea64;
        case 0x19ea68u: goto label_19ea68;
        case 0x19ea6cu: goto label_19ea6c;
        case 0x19ea70u: goto label_19ea70;
        case 0x19ea74u: goto label_19ea74;
        case 0x19ea78u: goto label_19ea78;
        case 0x19ea7cu: goto label_19ea7c;
        case 0x19ea80u: goto label_19ea80;
        case 0x19ea84u: goto label_19ea84;
        case 0x19ea88u: goto label_19ea88;
        case 0x19ea8cu: goto label_19ea8c;
        case 0x19ea90u: goto label_19ea90;
        case 0x19ea94u: goto label_19ea94;
        case 0x19ea98u: goto label_19ea98;
        case 0x19ea9cu: goto label_19ea9c;
        case 0x19eaa0u: goto label_19eaa0;
        case 0x19eaa4u: goto label_19eaa4;
        case 0x19eaa8u: goto label_19eaa8;
        case 0x19eaacu: goto label_19eaac;
        case 0x19eab0u: goto label_19eab0;
        case 0x19eab4u: goto label_19eab4;
        case 0x19eab8u: goto label_19eab8;
        case 0x19eabcu: goto label_19eabc;
        case 0x19eac0u: goto label_19eac0;
        case 0x19eac4u: goto label_19eac4;
        case 0x19eac8u: goto label_19eac8;
        case 0x19eaccu: goto label_19eacc;
        case 0x19ead0u: goto label_19ead0;
        case 0x19ead4u: goto label_19ead4;
        case 0x19ead8u: goto label_19ead8;
        case 0x19eadcu: goto label_19eadc;
        case 0x19eae0u: goto label_19eae0;
        case 0x19eae4u: goto label_19eae4;
        case 0x19eae8u: goto label_19eae8;
        case 0x19eaecu: goto label_19eaec;
        case 0x19eaf0u: goto label_19eaf0;
        case 0x19eaf4u: goto label_19eaf4;
        case 0x19eaf8u: goto label_19eaf8;
        case 0x19eafcu: goto label_19eafc;
        case 0x19eb00u: goto label_19eb00;
        case 0x19eb04u: goto label_19eb04;
        case 0x19eb08u: goto label_19eb08;
        case 0x19eb0cu: goto label_19eb0c;
        case 0x19eb10u: goto label_19eb10;
        case 0x19eb14u: goto label_19eb14;
        case 0x19eb18u: goto label_19eb18;
        case 0x19eb1cu: goto label_19eb1c;
        case 0x19eb20u: goto label_19eb20;
        case 0x19eb24u: goto label_19eb24;
        case 0x19eb28u: goto label_19eb28;
        case 0x19eb2cu: goto label_19eb2c;
        case 0x19eb30u: goto label_19eb30;
        case 0x19eb34u: goto label_19eb34;
        case 0x19eb38u: goto label_19eb38;
        case 0x19eb3cu: goto label_19eb3c;
        case 0x19eb40u: goto label_19eb40;
        case 0x19eb44u: goto label_19eb44;
        case 0x19eb48u: goto label_19eb48;
        case 0x19eb4cu: goto label_19eb4c;
        case 0x19eb50u: goto label_19eb50;
        case 0x19eb54u: goto label_19eb54;
        case 0x19eb58u: goto label_19eb58;
        case 0x19eb5cu: goto label_19eb5c;
        case 0x19eb60u: goto label_19eb60;
        case 0x19eb64u: goto label_19eb64;
        case 0x19eb68u: goto label_19eb68;
        case 0x19eb6cu: goto label_19eb6c;
        case 0x19eb70u: goto label_19eb70;
        case 0x19eb74u: goto label_19eb74;
        case 0x19eb78u: goto label_19eb78;
        case 0x19eb7cu: goto label_19eb7c;
        case 0x19eb80u: goto label_19eb80;
        case 0x19eb84u: goto label_19eb84;
        case 0x19eb88u: goto label_19eb88;
        case 0x19eb8cu: goto label_19eb8c;
        case 0x19eb90u: goto label_19eb90;
        case 0x19eb94u: goto label_19eb94;
        case 0x19eb98u: goto label_19eb98;
        case 0x19eb9cu: goto label_19eb9c;
        case 0x19eba0u: goto label_19eba0;
        case 0x19eba4u: goto label_19eba4;
        case 0x19eba8u: goto label_19eba8;
        case 0x19ebacu: goto label_19ebac;
        case 0x19ebb0u: goto label_19ebb0;
        case 0x19ebb4u: goto label_19ebb4;
        case 0x19ebb8u: goto label_19ebb8;
        case 0x19ebbcu: goto label_19ebbc;
        case 0x19ebc0u: goto label_19ebc0;
        case 0x19ebc4u: goto label_19ebc4;
        case 0x19ebc8u: goto label_19ebc8;
        case 0x19ebccu: goto label_19ebcc;
        case 0x19ebd0u: goto label_19ebd0;
        case 0x19ebd4u: goto label_19ebd4;
        case 0x19ebd8u: goto label_19ebd8;
        case 0x19ebdcu: goto label_19ebdc;
        case 0x19ebe0u: goto label_19ebe0;
        case 0x19ebe4u: goto label_19ebe4;
        case 0x19ebe8u: goto label_19ebe8;
        case 0x19ebecu: goto label_19ebec;
        case 0x19ebf0u: goto label_19ebf0;
        case 0x19ebf4u: goto label_19ebf4;
        case 0x19ebf8u: goto label_19ebf8;
        case 0x19ebfcu: goto label_19ebfc;
        case 0x19ec00u: goto label_19ec00;
        case 0x19ec04u: goto label_19ec04;
        case 0x19ec08u: goto label_19ec08;
        case 0x19ec0cu: goto label_19ec0c;
        case 0x19ec10u: goto label_19ec10;
        case 0x19ec14u: goto label_19ec14;
        case 0x19ec18u: goto label_19ec18;
        case 0x19ec1cu: goto label_19ec1c;
        case 0x19ec20u: goto label_19ec20;
        case 0x19ec24u: goto label_19ec24;
        case 0x19ec28u: goto label_19ec28;
        case 0x19ec2cu: goto label_19ec2c;
        case 0x19ec30u: goto label_19ec30;
        case 0x19ec34u: goto label_19ec34;
        case 0x19ec38u: goto label_19ec38;
        case 0x19ec3cu: goto label_19ec3c;
        case 0x19ec40u: goto label_19ec40;
        case 0x19ec44u: goto label_19ec44;
        case 0x19ec48u: goto label_19ec48;
        case 0x19ec4cu: goto label_19ec4c;
        case 0x19ec50u: goto label_19ec50;
        case 0x19ec54u: goto label_19ec54;
        case 0x19ec58u: goto label_19ec58;
        case 0x19ec5cu: goto label_19ec5c;
        case 0x19ec60u: goto label_19ec60;
        case 0x19ec64u: goto label_19ec64;
        case 0x19ec68u: goto label_19ec68;
        case 0x19ec6cu: goto label_19ec6c;
        case 0x19ec70u: goto label_19ec70;
        case 0x19ec74u: goto label_19ec74;
        case 0x19ec78u: goto label_19ec78;
        case 0x19ec7cu: goto label_19ec7c;
        case 0x19ec80u: goto label_19ec80;
        case 0x19ec84u: goto label_19ec84;
        case 0x19ec88u: goto label_19ec88;
        case 0x19ec8cu: goto label_19ec8c;
        case 0x19ec90u: goto label_19ec90;
        case 0x19ec94u: goto label_19ec94;
        default: return;
    }

label_19e4c8:
    // 0x19e4c8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x19e4c8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19e4cc:
    // 0x19e4cc: 0x8e220848  lw          $v0, 0x848($s1)
    ctx->pc = 0x19e4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2120)));
label_19e4d0:
    // 0x19e4d0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_19e4d4:
    if (ctx->pc == 0x19E4D4u) {
        ctx->pc = 0x19E4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E4D0u;
        // 0x19e4d4: 0x2685a068  addiu       $a1, $s4, -0x5F98 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 4294942824));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E4D8u;
        goto label_19e4d8;
    }
    ctx->pc = 0x19E4D0u;
    {
        const bool branch_taken_0x19e4d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E4D0u;
        // 0x19e4d4: 0x2685a068  addiu       $a1, $s4, -0x5F98 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 4294942824));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e4d0) {
            ctx->pc = 0x19E4F4u;
            goto label_19e4f4;
        }
    }
    ctx->pc = 0x19E4D8u;
label_19e4d8:
    // 0x19e4d8: 0x14730007  bne         $v1, $s3, . + 4 + (0x7 << 2)
label_19e4dc:
    if (ctx->pc == 0x19E4DCu) {
        ctx->pc = 0x19E4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E4D8u;
        // 0x19e4dc: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E4E0u;
        goto label_19e4e0;
    }
    ctx->pc = 0x19E4D8u;
    {
        const bool branch_taken_0x19e4d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 19));
        ctx->pc = 0x19E4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E4D8u;
        // 0x19e4dc: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e4d8) {
            ctx->pc = 0x19E4F8u;
            goto label_19e4f8;
        }
    }
    ctx->pc = 0x19E4E0u;
label_19e4e0:
    // 0x19e4e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19e4e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_19e4e4:
    // 0x19e4e4: 0xc067d96  jal         func_19F658
label_19e4e8:
    if (ctx->pc == 0x19E4E8u) {
        ctx->pc = 0x19E4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E4E4u;
        // 0x19e4e8: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E4ECu;
        goto label_19e4ec;
    }
    ctx->pc = 0x19E4E4u;
    SET_GPR_U32(ctx, 31, 0x19E4ECu);
    ctx->pc = 0x19E4E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E4E4u;
    // 0x19e4e8: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F658u;
    { ctx->pc = 0x19f658; return; }
    ctx->pc = 0x19E4ECu;
label_19e4ec:
    // 0x19e4ec: 0x10000008  b           . + 4 + (0x8 << 2)
label_19e4f0:
    if (ctx->pc == 0x19E4F0u) {
        ctx->pc = 0x19E4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E4ECu;
        // 0x19e4f0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E4F4u;
        goto label_19e4f4;
    }
    ctx->pc = 0x19E4ECu;
    {
        const bool branch_taken_0x19e4ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E4ECu;
        // 0x19e4f0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e4ec) {
            ctx->pc = 0x19E510u;
            goto label_19e510;
        }
    }
    ctx->pc = 0x19E4F4u;
label_19e4f4:
    // 0x19e4f4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x19e4f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19e4f8:
    // 0x19e4f8: 0xc068d1e  jal         func_1A3478
label_19e4fc:
    if (ctx->pc == 0x19E4FCu) {
        ctx->pc = 0x19E4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E4F8u;
        // 0x19e4fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E500u;
        goto label_19e500;
    }
    ctx->pc = 0x19E4F8u;
    SET_GPR_U32(ctx, 31, 0x19E500u);
    ctx->pc = 0x19E4FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E4F8u;
    // 0x19e4fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A3478u;
    { ctx->pc = 0x1a3478; return; }
    ctx->pc = 0x19E500u;
label_19e500:
    // 0x19e500: 0xae37011c  sw          $s7, 0x11C($s1)
    ctx->pc = 0x19e500u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 284), GPR_U32(ctx, 23));
label_19e504:
    // 0x19e504: 0x10000005  b           . + 4 + (0x5 << 2)
label_19e508:
    if (ctx->pc == 0x19E508u) {
        ctx->pc = 0x19E508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E504u;
        // 0x19e508: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E50Cu;
        goto label_19e50c;
    }
    ctx->pc = 0x19E504u;
    {
        const bool branch_taken_0x19e504 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E504u;
        // 0x19e508: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e504) {
            ctx->pc = 0x19E51Cu;
            goto label_19e51c;
        }
    }
    ctx->pc = 0x19E50Cu;
label_19e50c:
    // 0x19e50c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x19e50cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19e510:
    // 0x19e510: 0x1440ffdb  bnez        $v0, . + 4 + (-0x25 << 2)
label_19e514:
    if (ctx->pc == 0x19E514u) {
        ctx->pc = 0x19E514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E510u;
        // 0x19e514: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E518u;
        goto label_19e518;
    }
    ctx->pc = 0x19E510u;
    {
        const bool branch_taken_0x19e510 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19E514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E510u;
        // 0x19e514: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e510) {
            ctx->pc = 0x19E480u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x19e480; return; }
        }
    }
    ctx->pc = 0x19E518u;
label_19e518:
    // 0x19e518: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x19e518u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_19e51c:
    // 0x19e51c: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x19e51cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_19e520:
    // 0x19e520: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x19e520u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_19e524:
    // 0x19e524: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x19e524u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_19e528:
    // 0x19e528: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x19e528u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_19e52c:
    // 0x19e52c: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x19e52cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_19e530:
    // 0x19e530: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x19e530u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_19e534:
    // 0x19e534: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x19e534u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_19e538:
    // 0x19e538: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x19e538u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_19e53c:
    // 0x19e53c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19e53cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_19e540:
    // 0x19e540: 0x3e00008  jr          $ra
label_19e544:
    if (ctx->pc == 0x19E544u) {
        ctx->pc = 0x19E544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E540u;
        // 0x19e544: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E548u;
        goto label_19e548;
    }
    ctx->pc = 0x19E540u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19E544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E540u;
        // 0x19e544: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19E540u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19E548u;
label_19e548:
    // 0x19e548: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x19e548u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_19e54c:
    // 0x19e54c: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x19e54cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_19e550:
    // 0x19e550: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x19e550u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_19e554:
    // 0x19e554: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x19e554u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19e558:
    // 0x19e558: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x19e558u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_19e55c:
    // 0x19e55c: 0x24130003  addiu       $s3, $zero, 0x3
    ctx->pc = 0x19e55cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_19e560:
    // 0x19e560: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x19e560u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_19e564:
    // 0x19e564: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x19e564u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19e568:
    // 0x19e568: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x19e568u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_19e56c:
    // 0x19e56c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19e56cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_19e570:
    // 0x19e570: 0xae400810  sw          $zero, 0x810($s2)
    ctx->pc = 0x19e570u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2064), GPR_U32(ctx, 0));
label_19e574:
    // 0x19e574: 0x8e420130  lw          $v0, 0x130($s2)
    ctx->pc = 0x19e574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 304)));
label_19e578:
    // 0x19e578: 0x8e44012c  lw          $a0, 0x12C($s2)
    ctx->pc = 0x19e578u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 300)));
label_19e57c:
    // 0x19e57c: 0x8e430174  lw          $v1, 0x174($s2)
    ctx->pc = 0x19e57cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 372)));
label_19e580:
    // 0x19e580: 0x828818  mult        $s1, $a0, $v0
    ctx->pc = 0x19e580u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
label_19e584:
    // 0x19e584: 0xae400814  sw          $zero, 0x814($s2)
    ctx->pc = 0x19e584u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2068), GPR_U32(ctx, 0));
label_19e588:
    // 0x19e588: 0x38630003  xori        $v1, $v1, 0x3
    ctx->pc = 0x19e588u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)3);
label_19e58c:
    // 0x19e58c: 0x111043  sra         $v0, $s1, 1
    ctx->pc = 0x19e58cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 17), 1));
label_19e590:
    // 0x19e590: 0x43880b  movn        $s1, $v0, $v1
    ctx->pc = 0x19e590u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 2));
label_19e594:
    // 0x19e594: 0x0  nop
    ctx->pc = 0x19e594u;
    // NOP
label_19e598:
    // 0x19e598: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x19e598u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_19e59c:
    // 0x19e59c: 0xc0679e0  jal         func_19E780
label_19e5a0:
    if (ctx->pc == 0x19E5A0u) {
        ctx->pc = 0x19E5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E59Cu;
        // 0x19e5a0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E5A4u;
        goto label_19e5a4;
    }
    ctx->pc = 0x19E59Cu;
    SET_GPR_U32(ctx, 31, 0x19E5A4u);
    ctx->pc = 0x19E5A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E59Cu;
    // 0x19e5a0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19E780u;
    goto label_19e780;
    ctx->pc = 0x19E5A4u;
label_19e5a4:
    // 0x19e5a4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x19e5a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19e5a8:
    // 0x19e5a8: 0x1214fffc  beq         $s0, $s4, . + 4 + (-0x4 << 2)
label_19e5ac:
    if (ctx->pc == 0x19E5ACu) {
        ctx->pc = 0x19E5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E5A8u;
        // 0x19e5ac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E5B0u;
        goto label_19e5b0;
    }
    ctx->pc = 0x19E5A8u;
    {
        const bool branch_taken_0x19e5a8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 20));
        ctx->pc = 0x19E5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E5A8u;
        // 0x19e5ac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e5a8) {
            ctx->pc = 0x19E59Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19e59c;
        }
    }
    ctx->pc = 0x19E5B0u;
label_19e5b0:
    // 0x19e5b0: 0x1213fff9  beq         $s0, $s3, . + 4 + (-0x7 << 2)
label_19e5b4:
    if (ctx->pc == 0x19E5B4u) {
        ctx->pc = 0x19E5B8u;
        goto label_19e5b8;
    }
    ctx->pc = 0x19E5B0u;
    {
        const bool branch_taken_0x19e5b0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 19));
        if (branch_taken_0x19e5b0) {
            ctx->pc = 0x19E598u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19e598;
        }
    }
    ctx->pc = 0x19E5B8u;
label_19e5b8:
    // 0x19e5b8: 0xc067ca0  jal         func_19F280
label_19e5bc:
    if (ctx->pc == 0x19E5BCu) {
        ctx->pc = 0x19E5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E5B8u;
        // 0x19e5bc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E5C0u;
        goto label_19e5c0;
    }
    ctx->pc = 0x19E5B8u;
    SET_GPR_U32(ctx, 31, 0x19E5C0u);
    ctx->pc = 0x19E5BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E5B8u;
    // 0x19e5bc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F280u;
    { ctx->pc = 0x19f280; return; }
    ctx->pc = 0x19E5C0u;
label_19e5c0:
    // 0x19e5c0: 0xc067828  jal         func_19E0A0
label_19e5c4:
    if (ctx->pc == 0x19E5C4u) {
        ctx->pc = 0x19E5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E5C0u;
        // 0x19e5c4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E5C8u;
        goto label_19e5c8;
    }
    ctx->pc = 0x19E5C0u;
    SET_GPR_U32(ctx, 31, 0x19E5C8u);
    ctx->pc = 0x19E5C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E5C0u;
    // 0x19e5c4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19E0A0u;
    { ctx->pc = 0x19e0a0; return; }
    ctx->pc = 0x19E5C8u;
label_19e5c8:
    // 0x19e5c8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x19e5c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_19e5cc:
    // 0x19e5cc: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x19e5ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
label_19e5d0:
    // 0x19e5d0: 0x62800a  movz        $s0, $v1, $v0
    ctx->pc = 0x19e5d0u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
label_19e5d4:
    // 0x19e5d4: 0x3484d400  ori         $a0, $a0, 0xD400
    ctx->pc = 0x19e5d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)54272);
label_19e5d8:
    // 0x19e5d8: 0x2611ffff  addiu       $s1, $s0, -0x1
    ctx->pc = 0x19e5d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_19e5dc:
    // 0x19e5dc: 0x2e130001  sltiu       $s3, $s0, 0x1
    ctx->pc = 0x19e5dcu;
    SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_19e5e0:
    // 0x19e5e0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x19e5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_19e5e4:
    // 0x19e5e4: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x19e5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
label_19e5e8:
    // 0x19e5e8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x19e5e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_19e5ec:
    // 0x19e5ec: 0x0  nop
    ctx->pc = 0x19e5ecu;
    // NOP
label_19e5f0:
    // 0x19e5f0: 0x0  nop
    ctx->pc = 0x19e5f0u;
    // NOP
label_19e5f4:
    // 0x19e5f4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_19e5f8:
    if (ctx->pc == 0x19E5F8u) {
        ctx->pc = 0x19E5FCu;
        goto label_19e5fc;
    }
    ctx->pc = 0x19E5F4u;
    {
        const bool branch_taken_0x19e5f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19e5f4) {
            ctx->pc = 0x19E5E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19e5e0;
        }
    }
    ctx->pc = 0x19E5FCu;
label_19e5fc:
    // 0x19e5fc: 0x16000006  bnez        $s0, . + 4 + (0x6 << 2)
label_19e600:
    if (ctx->pc == 0x19E600u) {
        ctx->pc = 0x19E600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E5FCu;
        // 0x19e600: 0x2e220002  sltiu       $v0, $s1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E604u;
        goto label_19e604;
    }
    ctx->pc = 0x19E5FCu;
    {
        const bool branch_taken_0x19e5fc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x19E600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E5FCu;
        // 0x19e600: 0x2e220002  sltiu       $v0, $s1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e5fc) {
            ctx->pc = 0x19E618u;
            goto label_19e618;
        }
    }
    ctx->pc = 0x19E604u;
label_19e604:
    // 0x19e604: 0x8e450810  lw          $a1, 0x810($s2)
    ctx->pc = 0x19e604u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2064)));
label_19e608:
    // 0x19e608: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x19e608u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_19e60c:
    // 0x19e60c: 0xc06742a  jal         func_19D0A8
label_19e610:
    if (ctx->pc == 0x19E610u) {
        ctx->pc = 0x19E610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E60Cu;
        // 0x19e610: 0x2ca50001  sltiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E614u;
        goto label_19e614;
    }
    ctx->pc = 0x19E60Cu;
    SET_GPR_U32(ctx, 31, 0x19E614u);
    ctx->pc = 0x19E610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E60Cu;
    // 0x19e610: 0x2ca50001  sltiu       $a1, $a1, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x19D0A8u;
    { ctx->pc = 0x19d0a8; return; }
    ctx->pc = 0x19E614u;
label_19e614:
    // 0x19e614: 0x2e220002  sltiu       $v0, $s1, 0x2
    ctx->pc = 0x19e614u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_19e618:
    // 0x19e618: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_19e61c:
    if (ctx->pc == 0x19E61Cu) {
        ctx->pc = 0x19E61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E618u;
        // 0x19e61c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E620u;
        goto label_19e620;
    }
    ctx->pc = 0x19E618u;
    {
        const bool branch_taken_0x19e618 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E618u;
        // 0x19e61c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e618) {
            ctx->pc = 0x19E62Cu;
            goto label_19e62c;
        }
    }
    ctx->pc = 0x19E620u;
label_19e620:
    // 0x19e620: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x19e620u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
label_19e624:
    // 0x19e624: 0xc068d2c  jal         func_1A34B0
label_19e628:
    if (ctx->pc == 0x19E628u) {
        ctx->pc = 0x19E628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E624u;
        // 0x19e628: 0x24a5a0a0  addiu       $a1, $a1, -0x5F60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942880));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E62Cu;
        goto label_19e62c;
    }
    ctx->pc = 0x19E624u;
    SET_GPR_U32(ctx, 31, 0x19E62Cu);
    ctx->pc = 0x19E628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E624u;
    // 0x19e628: 0x24a5a0a0  addiu       $a1, $a1, -0x5F60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942880));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A34B0u;
    { ctx->pc = 0x1a34b0; return; }
    ctx->pc = 0x19E62Cu;
label_19e62c:
    // 0x19e62c: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x19e62cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_19e630:
    // 0x19e630: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x19e630u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_19e634:
    // 0x19e634: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x19e634u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_19e638:
    // 0x19e638: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x19e638u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_19e63c:
    // 0x19e63c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x19e63cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_19e640:
    // 0x19e640: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x19e640u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_19e644:
    // 0x19e644: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19e644u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_19e648:
    // 0x19e648: 0x3e00008  jr          $ra
label_19e64c:
    if (ctx->pc == 0x19E64Cu) {
        ctx->pc = 0x19E64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E648u;
        // 0x19e64c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E650u;
        goto label_19e650;
    }
    ctx->pc = 0x19E648u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19E64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E648u;
        // 0x19e64c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19E648u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19E650u;
label_19e650:
    // 0x19e650: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x19e650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_19e654:
    // 0x19e654: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19e654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_19e658:
    // 0x19e658: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x19e658u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
label_19e65c:
    // 0x19e65c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19e65cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19e660:
    // 0x19e660: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x19e660u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_19e664:
    // 0x19e664: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x19e664u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_19e668:
    // 0x19e668: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x19e668u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_19e66c:
    // 0x19e66c: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x19e66cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_19e670:
    // 0x19e670: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x19e670u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_19e674:
    // 0x19e674: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x19e674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_19e678:
    // 0x19e678: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x19e678u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_19e67c:
    // 0x19e67c: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x19e67cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_19e680:
    // 0x19e680: 0xc067e26  jal         func_19F898
label_19e684:
    if (ctx->pc == 0x19E684u) {
        ctx->pc = 0x19E684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E680u;
        // 0x19e684: 0xae00011c  sw          $zero, 0x11C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 284), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E688u;
        goto label_19e688;
    }
    ctx->pc = 0x19E680u;
    SET_GPR_U32(ctx, 31, 0x19E688u);
    ctx->pc = 0x19E684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E680u;
    // 0x19e684: 0xae00011c  sw          $zero, 0x11C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 284), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F898u;
    { ctx->pc = 0x19f898; return; }
    ctx->pc = 0x19E688u;
label_19e688:
    // 0x19e688: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19e688u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19e68c:
    // 0x19e68c: 0xc067d54  jal         func_19F550
label_19e690:
    if (ctx->pc == 0x19E690u) {
        ctx->pc = 0x19E690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E68Cu;
        // 0x19e690: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E694u;
        goto label_19e694;
    }
    ctx->pc = 0x19E68Cu;
    SET_GPR_U32(ctx, 31, 0x19E694u);
    ctx->pc = 0x19E690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E68Cu;
    // 0x19e690: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F550u;
    { ctx->pc = 0x19f550; return; }
    ctx->pc = 0x19E694u;
label_19e694:
    // 0x19e694: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x19e694u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19e698:
    // 0x19e698: 0x2642feff  addiu       $v0, $s2, -0x101
    ctx->pc = 0x19e698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967039));
label_19e69c:
    // 0x19e69c: 0x2c4200af  sltiu       $v0, $v0, 0xAF
    ctx->pc = 0x19e69cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)175) ? 1 : 0);
label_19e6a0:
    // 0x19e6a0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_19e6a4:
    if (ctx->pc == 0x19E6A4u) {
        ctx->pc = 0x19E6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E6A0u;
        // 0x19e6a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E6A8u;
        goto label_19e6a8;
    }
    ctx->pc = 0x19E6A0u;
    {
        const bool branch_taken_0x19e6a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19E6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E6A0u;
        // 0x19e6a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e6a0) {
            ctx->pc = 0x19E6C0u;
            goto label_19e6c0;
        }
    }
    ctx->pc = 0x19E6A8u;
label_19e6a8:
    // 0x19e6a8: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x19e6a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
label_19e6ac:
    // 0x19e6ac: 0x24a5a0c0  addiu       $a1, $a1, -0x5F40
    ctx->pc = 0x19e6acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942912));
label_19e6b0:
    // 0x19e6b0: 0xc068d1e  jal         func_1A3478
label_19e6b4:
    if (ctx->pc == 0x19E6B4u) {
        ctx->pc = 0x19E6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E6B0u;
        // 0x19e6b4: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E6B8u;
        goto label_19e6b8;
    }
    ctx->pc = 0x19E6B0u;
    SET_GPR_U32(ctx, 31, 0x19E6B8u);
    ctx->pc = 0x19E6B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E6B0u;
    // 0x19e6b4: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A3478u;
    { ctx->pc = 0x1a3478; return; }
    ctx->pc = 0x19E6B8u;
label_19e6b8:
    // 0x19e6b8: 0x10000027  b           . + 4 + (0x27 << 2)
label_19e6bc:
    if (ctx->pc == 0x19E6BCu) {
        ctx->pc = 0x19E6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E6B8u;
        // 0x19e6bc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E6C0u;
        goto label_19e6c0;
    }
    ctx->pc = 0x19E6B8u;
    {
        const bool branch_taken_0x19e6b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E6B8u;
        // 0x19e6bc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e6b8) {
            ctx->pc = 0x19E758u;
            goto label_19e758;
        }
    }
    ctx->pc = 0x19E6C0u;
label_19e6c0:
    // 0x19e6c0: 0xc067d96  jal         func_19F658
label_19e6c4:
    if (ctx->pc == 0x19E6C4u) {
        ctx->pc = 0x19E6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E6C0u;
        // 0x19e6c4: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E6C8u;
        goto label_19e6c8;
    }
    ctx->pc = 0x19E6C0u;
    SET_GPR_U32(ctx, 31, 0x19E6C8u);
    ctx->pc = 0x19E6C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E6C0u;
    // 0x19e6c4: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F658u;
    { ctx->pc = 0x19f658; return; }
    ctx->pc = 0x19E6C8u;
label_19e6c8:
    // 0x19e6c8: 0xc067e46  jal         func_19F918
label_19e6cc:
    if (ctx->pc == 0x19E6CCu) {
        ctx->pc = 0x19E6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E6C8u;
        // 0x19e6cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E6D0u;
        goto label_19e6d0;
    }
    ctx->pc = 0x19E6C8u;
    SET_GPR_U32(ctx, 31, 0x19E6D0u);
    ctx->pc = 0x19E6CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E6C8u;
    // 0x19e6cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F918u;
    { ctx->pc = 0x19f918; return; }
    ctx->pc = 0x19E6D0u;
label_19e6d0:
    // 0x19e6d0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x19e6d0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19e6d4:
    // 0x19e6d4: 0xc06790e  jal         func_19E438
label_19e6d8:
    if (ctx->pc == 0x19E6D8u) {
        ctx->pc = 0x19E6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E6D4u;
        // 0x19e6d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E6DCu;
        goto label_19e6dc;
    }
    ctx->pc = 0x19E6D4u;
    SET_GPR_U32(ctx, 31, 0x19E6DCu);
    ctx->pc = 0x19E6D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E6D4u;
    // 0x19e6d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19E438u;
    { ctx->pc = 0x19e438; return; }
    ctx->pc = 0x19E6DCu;
label_19e6dc:
    // 0x19e6dc: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x19e6dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19e6e0:
    // 0x19e6e0: 0xae860000  sw          $a2, 0x0($s4)
    ctx->pc = 0x19e6e0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 6));
label_19e6e4:
    // 0x19e6e4: 0x8e02011c  lw          $v0, 0x11C($s0)
    ctx->pc = 0x19e6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 284)));
label_19e6e8:
    // 0x19e6e8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_19e6ec:
    if (ctx->pc == 0x19E6ECu) {
        ctx->pc = 0x19E6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E6E8u;
        // 0x19e6ec: 0x3c05002d  lui         $a1, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E6F0u;
        goto label_19e6f0;
    }
    ctx->pc = 0x19E6E8u;
    {
        const bool branch_taken_0x19e6e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E6E8u;
        // 0x19e6ec: 0x3c05002d  lui         $a1, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e6e8) {
            ctx->pc = 0x19E704u;
            goto label_19e704;
        }
    }
    ctx->pc = 0x19E6F0u;
label_19e6f0:
    // 0x19e6f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19e6f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19e6f4:
    // 0x19e6f4: 0xc068d2c  jal         func_1A34B0
label_19e6f8:
    if (ctx->pc == 0x19E6F8u) {
        ctx->pc = 0x19E6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E6F4u;
        // 0x19e6f8: 0x24a5a0e8  addiu       $a1, $a1, -0x5F18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942952));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E6FCu;
        goto label_19e6fc;
    }
    ctx->pc = 0x19E6F4u;
    SET_GPR_U32(ctx, 31, 0x19E6FCu);
    ctx->pc = 0x19E6F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E6F4u;
    // 0x19e6f8: 0x24a5a0e8  addiu       $a1, $a1, -0x5F18 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A34B0u;
    { ctx->pc = 0x1a34b0; return; }
    ctx->pc = 0x19E6FCu;
label_19e6fc:
    // 0x19e6fc: 0x10000016  b           . + 4 + (0x16 << 2)
label_19e700:
    if (ctx->pc == 0x19E700u) {
        ctx->pc = 0x19E700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E6FCu;
        // 0x19e700: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E704u;
        goto label_19e704;
    }
    ctx->pc = 0x19E6FCu;
    {
        const bool branch_taken_0x19e6fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E6FCu;
        // 0x19e700: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e6fc) {
            ctx->pc = 0x19E758u;
            goto label_19e758;
        }
    }
    ctx->pc = 0x19E704u;
label_19e704:
    // 0x19e704: 0x324200ff  andi        $v0, $s2, 0xFF
    ctx->pc = 0x19e704u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
label_19e708:
    // 0x19e708: 0x1319c0  sll         $v1, $s3, 7
    ctx->pc = 0x19e708u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 7));
label_19e70c:
    // 0x19e70c: 0x8e04012c  lw          $a0, 0x12C($s0)
    ctx->pc = 0x19e70cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 300)));
label_19e710:
    // 0x19e710: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x19e710u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_19e714:
    // 0x19e714: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x19e714u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_19e718:
    // 0x19e718: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x19e718u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19e71c:
    // 0x19e71c: 0x641018  mult        $v0, $v1, $a0
    ctx->pc = 0x19e71cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_19e720:
    // 0x19e720: 0x461821  addu        $v1, $v0, $a2
    ctx->pc = 0x19e720u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_19e724:
    // 0x19e724: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x19e724u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_19e728:
    // 0x19e728: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x19e728u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19e72c:
    // 0x19e72c: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x19e72cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
label_19e730:
    // 0x19e730: 0xae850000  sw          $a1, 0x0($s4)
    ctx->pc = 0x19e730u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 5));
label_19e734:
    // 0x19e734: 0xae0501b0  sw          $a1, 0x1B0($s0)
    ctx->pc = 0x19e734u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 432), GPR_U32(ctx, 5));
label_19e738:
    // 0x19e738: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x19e738u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
label_19e73c:
    // 0x19e73c: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x19e73cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
label_19e740:
    // 0x19e740: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x19e740u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
label_19e744:
    // 0x19e744: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x19e744u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_19e748:
    // 0x19e748: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x19e748u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_19e74c:
    // 0x19e74c: 0xae20001c  sw          $zero, 0x1C($s1)
    ctx->pc = 0x19e74cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 0));
label_19e750:
    // 0x19e750: 0xae200018  sw          $zero, 0x18($s1)
    ctx->pc = 0x19e750u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 0));
label_19e754:
    // 0x19e754: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x19e754u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
label_19e758:
    // 0x19e758: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x19e758u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_19e75c:
    // 0x19e75c: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x19e75cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_19e760:
    // 0x19e760: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x19e760u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_19e764:
    // 0x19e764: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x19e764u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_19e768:
    // 0x19e768: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x19e768u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_19e76c:
    // 0x19e76c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x19e76cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_19e770:
    // 0x19e770: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19e770u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_19e774:
    // 0x19e774: 0x3e00008  jr          $ra
label_19e778:
    if (ctx->pc == 0x19E778u) {
        ctx->pc = 0x19E778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E774u;
        // 0x19e778: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E77Cu;
        goto label_19e77c;
    }
    ctx->pc = 0x19E774u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19E778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E774u;
        // 0x19e778: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19E774u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19E77Cu;
label_19e77c:
    // 0x19e77c: 0x0  nop
    ctx->pc = 0x19e77cu;
    // NOP
label_19e780:
    // 0x19e780: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x19e780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_19e784:
    // 0x19e784: 0xffb30090  sd          $s3, 0x90($sp)
    ctx->pc = 0x19e784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 19));
label_19e788:
    // 0x19e788: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x19e788u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_19e78c:
    // 0x19e78c: 0xffb00060  sd          $s0, 0x60($sp)
    ctx->pc = 0x19e78cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
label_19e790:
    // 0x19e790: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x19e790u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_19e794:
    // 0x19e794: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19e794u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19e798:
    // 0x19e798: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x19e798u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
label_19e79c:
    // 0x19e79c: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x19e79cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
label_19e7a0:
    // 0x19e7a0: 0x27a70044  addiu       $a3, $sp, 0x44
    ctx->pc = 0x19e7a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
label_19e7a4:
    // 0x19e7a4: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x19e7a4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_19e7a8:
    // 0x19e7a8: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x19e7a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_19e7ac:
    // 0x19e7ac: 0xffb20080  sd          $s2, 0x80($sp)
    ctx->pc = 0x19e7acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 18));
label_19e7b0:
    // 0x19e7b0: 0xc067994  jal         func_19E650
label_19e7b4:
    if (ctx->pc == 0x19E7B4u) {
        ctx->pc = 0x19E7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E7B0u;
        // 0x19e7b4: 0xffb10070  sd          $s1, 0x70($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E7B8u;
        goto label_19e7b8;
    }
    ctx->pc = 0x19E7B0u;
    SET_GPR_U32(ctx, 31, 0x19E7B8u);
    ctx->pc = 0x19E7B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E7B0u;
    // 0x19e7b4: 0xffb10070  sd          $s1, 0x70($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19E650u;
    goto label_19e650;
    ctx->pc = 0x19E7B8u;
label_19e7b8:
    // 0x19e7b8: 0x14400067  bnez        $v0, . + 4 + (0x67 << 2)
label_19e7bc:
    if (ctx->pc == 0x19E7BCu) {
        ctx->pc = 0x19E7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E7B8u;
        // 0x19e7bc: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E7C0u;
        goto label_19e7c0;
    }
    ctx->pc = 0x19E7B8u;
    {
        const bool branch_taken_0x19e7b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19E7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E7B8u;
        // 0x19e7bc: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e7b8) {
            ctx->pc = 0x19E958u;
            goto label_19e958;
        }
    }
    ctx->pc = 0x19E7C0u;
label_19e7c0:
    // 0x19e7c0: 0xae00011c  sw          $zero, 0x11C($s0)
    ctx->pc = 0x19e7c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 284), GPR_U32(ctx, 0));
label_19e7c4:
    // 0x19e7c4: 0x0  nop
    ctx->pc = 0x19e7c4u;
    // NOP
label_19e7c8:
    // 0x19e7c8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x19e7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_19e7cc:
    // 0x19e7cc: 0x53102a  slt         $v0, $v0, $s3
    ctx->pc = 0x19e7ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
label_19e7d0:
    // 0x19e7d0: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_19e7d4:
    if (ctx->pc == 0x19E7D4u) {
        ctx->pc = 0x19E7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E7D0u;
        // 0x19e7d4: 0x8e020810  lw          $v0, 0x810($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2064)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E7D8u;
        goto label_19e7d8;
    }
    ctx->pc = 0x19E7D0u;
    {
        const bool branch_taken_0x19e7d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19e7d0) {
            ctx->pc = 0x19E7D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19E7D0u;
            // 0x19e7d4: 0x8e020810  lw          $v0, 0x810($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2064)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19E7E0u;
            goto label_19e7e0;
        }
    }
    ctx->pc = 0x19E7D8u;
label_19e7d8:
    // 0x19e7d8: 0x1000005e  b           . + 4 + (0x5E << 2)
label_19e7dc:
    if (ctx->pc == 0x19E7DCu) {
        ctx->pc = 0x19E7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E7D8u;
        // 0x19e7dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E7E0u;
        goto label_19e7e0;
    }
    ctx->pc = 0x19E7D8u;
    {
        const bool branch_taken_0x19e7d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E7D8u;
        // 0x19e7dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e7d8) {
            ctx->pc = 0x19E954u;
            goto label_19e954;
        }
    }
    ctx->pc = 0x19E7E0u;
label_19e7e0:
    // 0x19e7e0: 0x24030140  addiu       $v1, $zero, 0x140
    ctx->pc = 0x19e7e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
label_19e7e4:
    // 0x19e7e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19e7e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19e7e8:
    // 0x19e7e8: 0x432818  mult        $a1, $v0, $v1
    ctx->pc = 0x19e7e8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_19e7ec:
    // 0x19e7ec: 0xb01021  addu        $v0, $a1, $s0
    ctx->pc = 0x19e7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
label_19e7f0:
    // 0x19e7f0: 0xc067828  jal         func_19E0A0
label_19e7f4:
    if (ctx->pc == 0x19E7F4u) {
        ctx->pc = 0x19E7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E7F0u;
        // 0x19e7f4: 0xac4006cc  sw          $zero, 0x6CC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1740), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E7F8u;
        goto label_19e7f8;
    }
    ctx->pc = 0x19E7F0u;
    SET_GPR_U32(ctx, 31, 0x19E7F8u);
    ctx->pc = 0x19E7F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E7F0u;
    // 0x19e7f4: 0xac4006cc  sw          $zero, 0x6CC($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 1740), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19E0A0u;
    { ctx->pc = 0x19e0a0; return; }
    ctx->pc = 0x19E7F8u;
label_19e7f8:
    // 0x19e7f8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_19e7fc:
    if (ctx->pc == 0x19E7FCu) {
        ctx->pc = 0x19E7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E7F8u;
        // 0x19e7fc: 0x8fa20044  lw          $v0, 0x44($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E800u;
        goto label_19e800;
    }
    ctx->pc = 0x19E7F8u;
    {
        const bool branch_taken_0x19e7f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19E7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E7F8u;
        // 0x19e7fc: 0x8fa20044  lw          $v0, 0x44($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e7f8) {
            ctx->pc = 0x19E808u;
            goto label_19e808;
        }
    }
    ctx->pc = 0x19E800u;
label_19e800:
    // 0x19e800: 0x10000054  b           . + 4 + (0x54 << 2)
label_19e804:
    if (ctx->pc == 0x19E804u) {
        ctx->pc = 0x19E804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E800u;
        // 0x19e804: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E808u;
        goto label_19e808;
    }
    ctx->pc = 0x19E800u;
    {
        const bool branch_taken_0x19e800 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E800u;
        // 0x19e804: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e800) {
            ctx->pc = 0x19E954u;
            goto label_19e954;
        }
    }
    ctx->pc = 0x19E808u;
label_19e808:
    // 0x19e808: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
label_19e80c:
    if (ctx->pc == 0x19E80Cu) {
        ctx->pc = 0x19E80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E808u;
        // 0x19e80c: 0x8fa20040  lw          $v0, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E810u;
        goto label_19e810;
    }
    ctx->pc = 0x19E808u;
    {
        const bool branch_taken_0x19e808 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19E80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E808u;
        // 0x19e80c: 0x8fa20040  lw          $v0, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e808) {
            ctx->pc = 0x19E854u;
            goto label_19e854;
        }
    }
    ctx->pc = 0x19E810u;
label_19e810:
    // 0x19e810: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19e810u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19e814:
    // 0x19e814: 0xc067d54  jal         func_19F550
label_19e818:
    if (ctx->pc == 0x19E818u) {
        ctx->pc = 0x19E818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E814u;
        // 0x19e818: 0x24050017  addiu       $a1, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E81Cu;
        goto label_19e81c;
    }
    ctx->pc = 0x19E814u;
    SET_GPR_U32(ctx, 31, 0x19E81Cu);
    ctx->pc = 0x19E818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E814u;
    // 0x19e818: 0x24050017  addiu       $a1, $zero, 0x17 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F550u;
    { ctx->pc = 0x19f550; return; }
    ctx->pc = 0x19E81Cu;
label_19e81c:
    // 0x19e81c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_19e820:
    if (ctx->pc == 0x19E820u) {
        ctx->pc = 0x19E820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E81Cu;
        // 0x19e820: 0xae00011c  sw          $zero, 0x11C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 284), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E824u;
        goto label_19e824;
    }
    ctx->pc = 0x19E81Cu;
    {
        const bool branch_taken_0x19e81c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19e81c) {
            ctx->pc = 0x19E820u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19E81Cu;
            // 0x19e820: 0xae00011c  sw          $zero, 0x11C($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 284), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19E834u;
            goto label_19e834;
        }
    }
    ctx->pc = 0x19E824u;
label_19e824:
    // 0x19e824: 0x8e02011c  lw          $v0, 0x11C($s0)
    ctx->pc = 0x19e824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 284)));
label_19e828:
    // 0x19e828: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_19e82c:
    if (ctx->pc == 0x19E82Cu) {
        ctx->pc = 0x19E830u;
        goto label_19e830;
    }
    ctx->pc = 0x19E828u;
    {
        const bool branch_taken_0x19e828 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19e828) {
            ctx->pc = 0x19E83Cu;
            goto label_19e83c;
        }
    }
    ctx->pc = 0x19E830u;
label_19e830:
    // 0x19e830: 0xae00011c  sw          $zero, 0x11C($s0)
    ctx->pc = 0x19e830u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 284), GPR_U32(ctx, 0));
label_19e834:
    // 0x19e834: 0x10000047  b           . + 4 + (0x47 << 2)
label_19e838:
    if (ctx->pc == 0x19E838u) {
        ctx->pc = 0x19E838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E834u;
        // 0x19e838: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E83Cu;
        goto label_19e83c;
    }
    ctx->pc = 0x19E834u;
    {
        const bool branch_taken_0x19e834 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E834u;
        // 0x19e838: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e834) {
            ctx->pc = 0x19E954u;
            goto label_19e954;
        }
    }
    ctx->pc = 0x19E83Cu;
label_19e83c:
    // 0x19e83c: 0xc06790e  jal         func_19E438
label_19e840:
    if (ctx->pc == 0x19E840u) {
        ctx->pc = 0x19E840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E83Cu;
        // 0x19e840: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E844u;
        goto label_19e844;
    }
    ctx->pc = 0x19E83Cu;
    SET_GPR_U32(ctx, 31, 0x19E844u);
    ctx->pc = 0x19E840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E83Cu;
    // 0x19e840: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19E438u;
    { ctx->pc = 0x19e438; return; }
    ctx->pc = 0x19E844u;
label_19e844:
    // 0x19e844: 0x8e03011c  lw          $v1, 0x11C($s0)
    ctx->pc = 0x19e844u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 284)));
label_19e848:
    // 0x19e848: 0x14600019  bnez        $v1, . + 4 + (0x19 << 2)
label_19e84c:
    if (ctx->pc == 0x19E84Cu) {
        ctx->pc = 0x19E84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E848u;
        // 0x19e84c: 0xafa20044  sw          $v0, 0x44($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E850u;
        goto label_19e850;
    }
    ctx->pc = 0x19E848u;
    {
        const bool branch_taken_0x19e848 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x19E84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E848u;
        // 0x19e84c: 0xafa20044  sw          $v0, 0x44($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e848) {
            ctx->pc = 0x19E8B0u;
            goto label_19e8b0;
        }
    }
    ctx->pc = 0x19E850u;
label_19e850:
    // 0x19e850: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x19e850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_19e854:
    // 0x19e854: 0x53102a  slt         $v0, $v0, $s3
    ctx->pc = 0x19e854u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
label_19e858:
    // 0x19e858: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_19e85c:
    if (ctx->pc == 0x19E85Cu) {
        ctx->pc = 0x19E85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E858u;
        // 0x19e85c: 0x8fa30044  lw          $v1, 0x44($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E860u;
        goto label_19e860;
    }
    ctx->pc = 0x19E858u;
    {
        const bool branch_taken_0x19e858 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19E85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E858u;
        // 0x19e85c: 0x8fa30044  lw          $v1, 0x44($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e858) {
            ctx->pc = 0x19E878u;
            goto label_19e878;
        }
    }
    ctx->pc = 0x19E860u;
label_19e860:
    // 0x19e860: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x19e860u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
label_19e864:
    // 0x19e864: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19e864u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19e868:
    // 0x19e868: 0xc068d2c  jal         func_1A34B0
label_19e86c:
    if (ctx->pc == 0x19E86Cu) {
        ctx->pc = 0x19E86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E868u;
        // 0x19e86c: 0x24a5a108  addiu       $a1, $a1, -0x5EF8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942984));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E870u;
        goto label_19e870;
    }
    ctx->pc = 0x19E868u;
    SET_GPR_U32(ctx, 31, 0x19E870u);
    ctx->pc = 0x19E86Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E868u;
    // 0x19e86c: 0x24a5a108  addiu       $a1, $a1, -0x5EF8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A34B0u;
    { ctx->pc = 0x1a34b0; return; }
    ctx->pc = 0x19E870u;
label_19e870:
    // 0x19e870: 0x10000038  b           . + 4 + (0x38 << 2)
label_19e874:
    if (ctx->pc == 0x19E874u) {
        ctx->pc = 0x19E874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E870u;
        // 0x19e874: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E878u;
        goto label_19e878;
    }
    ctx->pc = 0x19E870u;
    {
        const bool branch_taken_0x19e870 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E870u;
        // 0x19e874: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e870) {
            ctx->pc = 0x19E954u;
            goto label_19e954;
        }
    }
    ctx->pc = 0x19E878u;
label_19e878:
    // 0x19e878: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19e878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19e87c:
    // 0x19e87c: 0x1462000f  bne         $v1, $v0, . + 4 + (0xF << 2)
label_19e880:
    if (ctx->pc == 0x19E880u) {
        ctx->pc = 0x19E880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E87Cu;
        // 0x19e880: 0x27b20020  addiu       $s2, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E884u;
        goto label_19e884;
    }
    ctx->pc = 0x19E87Cu;
    {
        const bool branch_taken_0x19e87c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x19E880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E87Cu;
        // 0x19e880: 0x27b20020  addiu       $s2, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e87c) {
            ctx->pc = 0x19E8BCu;
            goto label_19e8bc;
        }
    }
    ctx->pc = 0x19E884u;
label_19e884:
    // 0x19e884: 0x27b10030  addiu       $s1, $sp, 0x30
    ctx->pc = 0x19e884u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_19e888:
    // 0x19e888: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19e888u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19e88c:
    // 0x19e88c: 0x27a50048  addiu       $a1, $sp, 0x48
    ctx->pc = 0x19e88cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
label_19e890:
    // 0x19e890: 0x27a6004c  addiu       $a2, $sp, 0x4C
    ctx->pc = 0x19e890u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
label_19e894:
    // 0x19e894: 0x27a70050  addiu       $a3, $sp, 0x50
    ctx->pc = 0x19e894u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_19e898:
    // 0x19e898: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x19e898u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_19e89c:
    // 0x19e89c: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x19e89cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_19e8a0:
    // 0x19e8a0: 0xc067a8c  jal         func_19EA30
label_19e8a4:
    if (ctx->pc == 0x19E8A4u) {
        ctx->pc = 0x19E8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E8A0u;
        // 0x19e8a4: 0x220502d  daddu       $t2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E8A8u;
        goto label_19e8a8;
    }
    ctx->pc = 0x19E8A0u;
    SET_GPR_U32(ctx, 31, 0x19E8A8u);
    ctx->pc = 0x19E8A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E8A0u;
    // 0x19e8a4: 0x220502d  daddu       $t2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EA30u;
    goto label_19ea30;
    ctx->pc = 0x19E8A8u;
label_19e8a8:
    // 0x19e8a8: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_19e8ac:
    if (ctx->pc == 0x19E8ACu) {
        ctx->pc = 0x19E8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E8A8u;
        // 0x19e8ac: 0x8fa50040  lw          $a1, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E8B0u;
        goto label_19e8b0;
    }
    ctx->pc = 0x19E8A8u;
    {
        const bool branch_taken_0x19e8a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19E8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E8A8u;
        // 0x19e8ac: 0x8fa50040  lw          $a1, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e8a8) {
            ctx->pc = 0x19E8E0u;
            goto label_19e8e0;
        }
    }
    ctx->pc = 0x19E8B0u;
label_19e8b0:
    // 0x19e8b0: 0xae00011c  sw          $zero, 0x11C($s0)
    ctx->pc = 0x19e8b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 284), GPR_U32(ctx, 0));
label_19e8b4:
    // 0x19e8b4: 0x10000027  b           . + 4 + (0x27 << 2)
label_19e8b8:
    if (ctx->pc == 0x19E8B8u) {
        ctx->pc = 0x19E8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E8B4u;
        // 0x19e8b8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E8BCu;
        goto label_19e8bc;
    }
    ctx->pc = 0x19E8B4u;
    {
        const bool branch_taken_0x19e8b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E8B4u;
        // 0x19e8b8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e8b4) {
            ctx->pc = 0x19E954u;
            goto label_19e954;
        }
    }
    ctx->pc = 0x19E8BCu;
label_19e8bc:
    // 0x19e8bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19e8bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19e8c0:
    // 0x19e8c0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x19e8c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_19e8c4:
    // 0x19e8c4: 0x27a6004c  addiu       $a2, $sp, 0x4C
    ctx->pc = 0x19e8c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
label_19e8c8:
    // 0x19e8c8: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x19e8c8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_19e8cc:
    // 0x19e8cc: 0xc067a5c  jal         func_19E970
label_19e8d0:
    if (ctx->pc == 0x19E8D0u) {
        ctx->pc = 0x19E8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E8CCu;
        // 0x19e8d0: 0x27a80048  addiu       $t0, $sp, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E8D4u;
        goto label_19e8d4;
    }
    ctx->pc = 0x19E8CCu;
    SET_GPR_U32(ctx, 31, 0x19E8D4u);
    ctx->pc = 0x19E8D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E8CCu;
    // 0x19e8d0: 0x27a80048  addiu       $t0, $sp, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19E970u;
    goto label_19e970;
    ctx->pc = 0x19E8D4u;
label_19e8d4:
    // 0x19e8d4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_19e8d8:
    if (ctx->pc == 0x19E8D8u) {
        ctx->pc = 0x19E8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E8D4u;
        // 0x19e8d8: 0x27b10030  addiu       $s1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E8DCu;
        goto label_19e8dc;
    }
    ctx->pc = 0x19E8D4u;
    {
        const bool branch_taken_0x19e8d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E8D4u;
        // 0x19e8d8: 0x27b10030  addiu       $s1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e8d4) {
            ctx->pc = 0x19E908u;
            goto label_19e908;
        }
    }
    ctx->pc = 0x19E8DCu;
label_19e8dc:
    // 0x19e8dc: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x19e8dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_19e8e0:
    // 0x19e8e0: 0x240502d  daddu       $t2, $s2, $zero
    ctx->pc = 0x19e8e0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_19e8e4:
    // 0x19e8e4: 0x8fa60044  lw          $a2, 0x44($sp)
    ctx->pc = 0x19e8e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_19e8e8:
    // 0x19e8e8: 0x220582d  daddu       $t3, $s1, $zero
    ctx->pc = 0x19e8e8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_19e8ec:
    // 0x19e8ec: 0x8fa70048  lw          $a3, 0x48($sp)
    ctx->pc = 0x19e8ecu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_19e8f0:
    // 0x19e8f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19e8f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19e8f4:
    // 0x19e8f4: 0x8fa8004c  lw          $t0, 0x4C($sp)
    ctx->pc = 0x19e8f4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_19e8f8:
    // 0x19e8f8: 0xc0670cc  jal         func_19C330
label_19e8fc:
    if (ctx->pc == 0x19E8FCu) {
        ctx->pc = 0x19E8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E8F8u;
        // 0x19e8fc: 0x3a0482d  daddu       $t1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E900u;
        goto label_19e900;
    }
    ctx->pc = 0x19E8F8u;
    SET_GPR_U32(ctx, 31, 0x19E900u);
    ctx->pc = 0x19E8FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E8F8u;
    // 0x19e8fc: 0x3a0482d  daddu       $t1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19C330u;
    { ctx->pc = 0x19c330; return; }
    ctx->pc = 0x19E900u;
label_19e900:
    // 0x19e900: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_19e904:
    if (ctx->pc == 0x19E904u) {
        ctx->pc = 0x19E904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E900u;
        // 0x19e904: 0x8fa40040  lw          $a0, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E908u;
        goto label_19e908;
    }
    ctx->pc = 0x19E900u;
    {
        const bool branch_taken_0x19e900 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19E904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E900u;
        // 0x19e904: 0x8fa40040  lw          $a0, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e900) {
            ctx->pc = 0x19E914u;
            goto label_19e914;
        }
    }
    ctx->pc = 0x19E908u;
label_19e908:
    // 0x19e908: 0xae00011c  sw          $zero, 0x11C($s0)
    ctx->pc = 0x19e908u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 284), GPR_U32(ctx, 0));
label_19e90c:
    // 0x19e90c: 0x10000011  b           . + 4 + (0x11 << 2)
label_19e910:
    if (ctx->pc == 0x19E910u) {
        ctx->pc = 0x19E910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E90Cu;
        // 0x19e910: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E914u;
        goto label_19e914;
    }
    ctx->pc = 0x19E90Cu;
    {
        const bool branch_taken_0x19e90c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E90Cu;
        // 0x19e910: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e90c) {
            ctx->pc = 0x19E954u;
            goto label_19e954;
        }
    }
    ctx->pc = 0x19E914u;
label_19e914:
    // 0x19e914: 0x50800007  beql        $a0, $zero, . + 4 + (0x7 << 2)
label_19e918:
    if (ctx->pc == 0x19E918u) {
        ctx->pc = 0x19E918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E914u;
        // 0x19e918: 0x8e020810  lw          $v0, 0x810($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2064)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E91Cu;
        goto label_19e91c;
    }
    ctx->pc = 0x19E914u;
    {
        const bool branch_taken_0x19e914 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x19e914) {
            ctx->pc = 0x19E918u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19E914u;
            // 0x19e918: 0x8e020810  lw          $v0, 0x810($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2064)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19E934u;
            goto label_19e934;
        }
    }
    ctx->pc = 0x19E91Cu;
label_19e91c:
    // 0x19e91c: 0x8e050810  lw          $a1, 0x810($s0)
    ctx->pc = 0x19e91cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2064)));
label_19e920:
    // 0x19e920: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19e920u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19e924:
    // 0x19e924: 0xc06742a  jal         func_19D0A8
label_19e928:
    if (ctx->pc == 0x19E928u) {
        ctx->pc = 0x19E928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E924u;
        // 0x19e928: 0x38a50001  xori        $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E92Cu;
        goto label_19e92c;
    }
    ctx->pc = 0x19E924u;
    SET_GPR_U32(ctx, 31, 0x19E92Cu);
    ctx->pc = 0x19E928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E924u;
    // 0x19e928: 0x38a50001  xori        $a1, $a1, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)1);
    ctx->in_delay_slot = false;
    ctx->pc = 0x19D0A8u;
    { ctx->pc = 0x19d0a8; return; }
    ctx->pc = 0x19E92Cu;
label_19e92c:
    // 0x19e92c: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x19e92cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_19e930:
    // 0x19e930: 0x8e020810  lw          $v0, 0x810($s0)
    ctx->pc = 0x19e930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2064)));
label_19e934:
    // 0x19e934: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x19e934u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_19e938:
    // 0x19e938: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x19e938u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_19e93c:
    // 0x19e93c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x19e93cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_19e940:
    // 0x19e940: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x19e940u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
label_19e944:
    // 0x19e944: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x19e944u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_19e948:
    // 0x19e948: 0xae020810  sw          $v0, 0x810($s0)
    ctx->pc = 0x19e948u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2064), GPR_U32(ctx, 2));
label_19e94c:
    // 0x19e94c: 0x1000ff9e  b           . + 4 + (-0x62 << 2)
label_19e950:
    if (ctx->pc == 0x19E950u) {
        ctx->pc = 0x19E950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E94Cu;
        // 0x19e950: 0xafa30044  sw          $v1, 0x44($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E954u;
        goto label_19e954;
    }
    ctx->pc = 0x19E94Cu;
    {
        const bool branch_taken_0x19e94c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E94Cu;
        // 0x19e950: 0xafa30044  sw          $v1, 0x44($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e94c) {
            ctx->pc = 0x19E7C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19e7c8;
        }
    }
    ctx->pc = 0x19E954u;
label_19e954:
    // 0x19e954: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x19e954u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_19e958:
    // 0x19e958: 0xdfb30090  ld          $s3, 0x90($sp)
    ctx->pc = 0x19e958u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_19e95c:
    // 0x19e95c: 0xdfb20080  ld          $s2, 0x80($sp)
    ctx->pc = 0x19e95cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_19e960:
    // 0x19e960: 0xdfb10070  ld          $s1, 0x70($sp)
    ctx->pc = 0x19e960u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_19e964:
    // 0x19e964: 0xdfb00060  ld          $s0, 0x60($sp)
    ctx->pc = 0x19e964u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_19e968:
    // 0x19e968: 0x3e00008  jr          $ra
label_19e96c:
    if (ctx->pc == 0x19E96Cu) {
        ctx->pc = 0x19E96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E968u;
        // 0x19e96c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E970u;
        goto label_19e970;
    }
    ctx->pc = 0x19E968u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19E96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E968u;
        // 0x19e96c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19E968u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19E970u;
label_19e970:
    // 0x19e970: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19e970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_19e974:
    // 0x19e974: 0x24030140  addiu       $v1, $zero, 0x140
    ctx->pc = 0x19e974u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
label_19e978:
    // 0x19e978: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19e978u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_19e97c:
    // 0x19e97c: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x19e97cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19e980:
    // 0x19e980: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x19e980u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_19e984:
    // 0x19e984: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x19e984u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_19e988:
    // 0x19e988: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x19e988u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_19e98c:
    // 0x19e98c: 0x8c820810  lw          $v0, 0x810($a0)
    ctx->pc = 0x19e98cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2064)));
label_19e990:
    // 0x19e990: 0x435018  mult        $t2, $v0, $v1
    ctx->pc = 0x19e990u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
label_19e994:
    // 0x19e994: 0x1441021  addu        $v0, $t2, $a0
    ctx->pc = 0x19e994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
label_19e998:
    // 0x19e998: 0xac4906cc  sw          $t1, 0x6CC($v0)
    ctx->pc = 0x19e998u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1740), GPR_U32(ctx, 9));
label_19e99c:
    // 0x19e99c: 0xac8901b0  sw          $t1, 0x1B0($a0)
    ctx->pc = 0x19e99cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 432), GPR_U32(ctx, 9));
label_19e9a0:
    // 0x19e9a0: 0x8c820150  lw          $v0, 0x150($a0)
    ctx->pc = 0x19e9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 336)));
label_19e9a4:
    // 0x19e9a4: 0x54480006  bnel        $v0, $t0, . + 4 + (0x6 << 2)
label_19e9a8:
    if (ctx->pc == 0x19E9A8u) {
        ctx->pc = 0x19E9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E9A4u;
        // 0x19e9a8: 0x8c830174  lw          $v1, 0x174($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 372)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E9ACu;
        goto label_19e9ac;
    }
    ctx->pc = 0x19E9A4u;
    {
        const bool branch_taken_0x19e9a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 8));
        if (branch_taken_0x19e9a4) {
            ctx->pc = 0x19E9A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19E9A4u;
            // 0x19e9a8: 0x8c830174  lw          $v1, 0x174($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 372)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19E9C0u;
            goto label_19e9c0;
        }
    }
    ctx->pc = 0x19E9ACu;
label_19e9ac:
    // 0x19e9ac: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x19e9acu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_19e9b0:
    // 0x19e9b0: 0xaca00014  sw          $zero, 0x14($a1)
    ctx->pc = 0x19e9b0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 0));
label_19e9b4:
    // 0x19e9b4: 0xaca00010  sw          $zero, 0x10($a1)
    ctx->pc = 0x19e9b4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 0));
label_19e9b8:
    // 0x19e9b8: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x19e9b8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_19e9bc:
    // 0x19e9bc: 0x8c830174  lw          $v1, 0x174($a0)
    ctx->pc = 0x19e9bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 372)));
label_19e9c0:
    // 0x19e9c0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x19e9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_19e9c4:
    // 0x19e9c4: 0x54620003  bnel        $v1, $v0, . + 4 + (0x3 << 2)
label_19e9c8:
    if (ctx->pc == 0x19E9C8u) {
        ctx->pc = 0x19E9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E9C4u;
        // 0x19e9c8: 0xacc90000  sw          $t1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E9CCu;
        goto label_19e9cc;
    }
    ctx->pc = 0x19E9C4u;
    {
        const bool branch_taken_0x19e9c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x19e9c4) {
            ctx->pc = 0x19E9C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19E9C4u;
            // 0x19e9c8: 0xacc90000  sw          $t1, 0x0($a2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 9));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19E9D4u;
            goto label_19e9d4;
        }
    }
    ctx->pc = 0x19E9CCu;
label_19e9cc:
    // 0x19e9cc: 0x10000006  b           . + 4 + (0x6 << 2)
label_19e9d0:
    if (ctx->pc == 0x19E9D0u) {
        ctx->pc = 0x19E9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E9CCu;
        // 0x19e9d0: 0xacc80000  sw          $t0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E9D4u;
        goto label_19e9d4;
    }
    ctx->pc = 0x19E9CCu;
    {
        const bool branch_taken_0x19e9cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E9CCu;
        // 0x19e9d0: 0xacc80000  sw          $t0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e9cc) {
            ctx->pc = 0x19E9E8u;
            goto label_19e9e8;
        }
    }
    ctx->pc = 0x19E9D4u;
label_19e9d4:
    // 0x19e9d4: 0x8c820174  lw          $v0, 0x174($a0)
    ctx->pc = 0x19e9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 372)));
label_19e9d8:
    // 0x19e9d8: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x19e9d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
label_19e9dc:
    // 0x19e9dc: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x19e9dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_19e9e0:
    // 0x19e9e0: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x19e9e0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
label_19e9e4:
    // 0x19e9e4: 0xace20004  sw          $v0, 0x4($a3)
    ctx->pc = 0x19e9e4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 2));
label_19e9e8:
    // 0x19e9e8: 0x8c830150  lw          $v1, 0x150($a0)
    ctx->pc = 0x19e9e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 336)));
label_19e9ec:
    // 0x19e9ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19e9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19e9f0:
    // 0x19e9f0: 0x54620006  bnel        $v1, $v0, . + 4 + (0x6 << 2)
label_19e9f4:
    if (ctx->pc == 0x19E9F4u) {
        ctx->pc = 0x19E9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E9F0u;
        // 0x19e9f4: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E9F8u;
        goto label_19e9f8;
    }
    ctx->pc = 0x19E9F0u;
    {
        const bool branch_taken_0x19e9f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x19e9f0) {
            ctx->pc = 0x19E9F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19E9F0u;
            // 0x19e9f4: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19EA0Cu;
            goto label_19ea0c;
        }
    }
    ctx->pc = 0x19E9F8u;
label_19e9f8:
    // 0x19e9f8: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x19e9f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
label_19e9fc:
    // 0x19e9fc: 0xc068d2c  jal         func_1A34B0
label_19ea00:
    if (ctx->pc == 0x19EA00u) {
        ctx->pc = 0x19EA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E9FCu;
        // 0x19ea00: 0x24a5a128  addiu       $a1, $a1, -0x5ED8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943016));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19EA04u;
        goto label_19ea04;
    }
    ctx->pc = 0x19E9FCu;
    SET_GPR_U32(ctx, 31, 0x19EA04u);
    ctx->pc = 0x19EA00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E9FCu;
    // 0x19ea00: 0x24a5a128  addiu       $a1, $a1, -0x5ED8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943016));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A34B0u;
    { ctx->pc = 0x1a34b0; return; }
    ctx->pc = 0x19EA04u;
label_19ea04:
    // 0x19ea04: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x19ea04u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19ea08:
    // 0x19ea08: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x19ea08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_19ea0c:
    // 0x19ea0c: 0x2404fffe  addiu       $a0, $zero, -0x2
    ctx->pc = 0x19ea0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_19ea10:
    // 0x19ea10: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x19ea10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_19ea14:
    // 0x19ea14: 0x120102d  daddu       $v0, $t1, $zero
    ctx->pc = 0x19ea14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_19ea18:
    // 0x19ea18: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x19ea18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_19ea1c:
    // 0x19ea1c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x19ea1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_19ea20:
    // 0x19ea20: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19ea20u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_19ea24:
    // 0x19ea24: 0x3e00008  jr          $ra
label_19ea28:
    if (ctx->pc == 0x19EA28u) {
        ctx->pc = 0x19EA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EA24u;
        // 0x19ea28: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19EA2Cu;
        goto label_19ea2c;
    }
    ctx->pc = 0x19EA24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19EA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EA24u;
        // 0x19ea28: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19EA24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19EA2Cu;
label_19ea2c:
    // 0x19ea2c: 0x0  nop
    ctx->pc = 0x19ea2cu;
    // NOP
label_19ea30:
    // 0x19ea30: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x19ea30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_19ea34:
    // 0x19ea34: 0x3c0b1000  lui         $t3, 0x1000
    ctx->pc = 0x19ea34u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)4096 << 16));
label_19ea38:
    // 0x19ea38: 0xffb60090  sd          $s6, 0x90($sp)
    ctx->pc = 0x19ea38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 22));
label_19ea3c:
    // 0x19ea3c: 0x356b2010  ori         $t3, $t3, 0x2010
    ctx->pc = 0x19ea3cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)8208);
label_19ea40:
    // 0x19ea40: 0xffb50080  sd          $s5, 0x80($sp)
    ctx->pc = 0x19ea40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 21));
label_19ea44:
    // 0x19ea44: 0x3c02f8ff  lui         $v0, 0xF8FF
    ctx->pc = 0x19ea44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63743 << 16));
label_19ea48:
    // 0x19ea48: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x19ea48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
label_19ea4c:
    // 0x19ea4c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x19ea4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_19ea50:
    // 0x19ea50: 0xffb10040  sd          $s1, 0x40($sp)
    ctx->pc = 0x19ea50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 17));
label_19ea54:
    // 0x19ea54: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x19ea54u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_19ea58:
    // 0x19ea58: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x19ea58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
label_19ea5c:
    // 0x19ea5c: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x19ea5cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_19ea60:
    // 0x19ea60: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x19ea60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
label_19ea64:
    // 0x19ea64: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19ea64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19ea68:
    // 0x19ea68: 0xffbe00b0  sd          $fp, 0xB0($sp)
    ctx->pc = 0x19ea68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 30));
label_19ea6c:
    // 0x19ea6c: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x19ea6cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_19ea70:
    // 0x19ea70: 0xffb700a0  sd          $s7, 0xA0($sp)
    ctx->pc = 0x19ea70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 23));
label_19ea74:
    // 0x19ea74: 0x140b02d  daddu       $s6, $t2, $zero
    ctx->pc = 0x19ea74u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_19ea78:
    // 0x19ea78: 0xffb40070  sd          $s4, 0x70($sp)
    ctx->pc = 0x19ea78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
label_19ea7c:
    // 0x19ea7c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x19ea7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19ea80:
    // 0x19ea80: 0xffb30060  sd          $s3, 0x60($sp)
    ctx->pc = 0x19ea80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 19));
label_19ea84:
    // 0x19ea84: 0x8e040150  lw          $a0, 0x150($s0)
    ctx->pc = 0x19ea84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
label_19ea88:
    // 0x19ea88: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x19ea88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
label_19ea8c:
    // 0x19ea8c: 0x42600  sll         $a0, $a0, 24
    ctx->pc = 0x19ea8cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
label_19ea90:
    // 0x19ea90: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x19ea90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_19ea94:
    // 0x19ea94: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x19ea94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_19ea98:
    // 0x19ea98: 0xad630000  sw          $v1, 0x0($t3)
    ctx->pc = 0x19ea98u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 3));
label_19ea9c:
    // 0x19ea9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19ea9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19eaa0:
    // 0x19eaa0: 0xafa70020  sw          $a3, 0x20($sp)
    ctx->pc = 0x19eaa0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 7));
label_19eaa4:
    // 0x19eaa4: 0xc067cf6  jal         func_19F3D8
label_19eaa8:
    if (ctx->pc == 0x19EAA8u) {
        ctx->pc = 0x19EAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EAA4u;
        // 0x19eaa8: 0xafa90024  sw          $t1, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19EAACu;
        goto label_19eaac;
    }
    ctx->pc = 0x19EAA4u;
    SET_GPR_U32(ctx, 31, 0x19EAACu);
    ctx->pc = 0x19EAA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19EAA4u;
    // 0x19eaa8: 0xafa90024  sw          $t1, 0x24($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F3D8u;
    { ctx->pc = 0x19f3d8; return; }
    ctx->pc = 0x19EAACu;
label_19eaac:
    // 0x19eaac: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x19eaacu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19eab0:
    // 0x19eab0: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
label_19eab4:
    if (ctx->pc == 0x19EAB4u) {
        ctx->pc = 0x19EAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EAB0u;
        // 0x19eab4: 0xae430000  sw          $v1, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19EAB8u;
        goto label_19eab8;
    }
    ctx->pc = 0x19EAB0u;
    {
        const bool branch_taken_0x19eab0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x19EAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EAB0u;
        // 0x19eab4: 0xae430000  sw          $v1, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19eab0) {
            ctx->pc = 0x19EAD8u;
            goto label_19ead8;
        }
    }
    ctx->pc = 0x19EAB8u;
label_19eab8:
    // 0x19eab8: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x19eab8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
label_19eabc:
    // 0x19eabc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19eabcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19eac0:
    // 0x19eac0: 0xc068d2c  jal         func_1A34B0
label_19eac4:
    if (ctx->pc == 0x19EAC4u) {
        ctx->pc = 0x19EAC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EAC0u;
        // 0x19eac4: 0x24a5a158  addiu       $a1, $a1, -0x5EA8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943064));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19EAC8u;
        goto label_19eac8;
    }
    ctx->pc = 0x19EAC0u;
    SET_GPR_U32(ctx, 31, 0x19EAC8u);
    ctx->pc = 0x19EAC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19EAC0u;
    // 0x19eac4: 0x24a5a158  addiu       $a1, $a1, -0x5EA8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943064));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A34B0u;
    { ctx->pc = 0x1a34b0; return; }
    ctx->pc = 0x19EAC8u;
label_19eac8:
    // 0x19eac8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19eac8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19eacc:
    // 0x19eacc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x19eaccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19ead0:
    // 0x19ead0: 0x100000f5  b           . + 4 + (0xF5 << 2)
label_19ead4:
    if (ctx->pc == 0x19EAD4u) {
        ctx->pc = 0x19EAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EAD0u;
        // 0x19ead4: 0xae03011c  sw          $v1, 0x11C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 284), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19EAD8u;
        goto label_19ead8;
    }
    ctx->pc = 0x19EAD0u;
    {
        const bool branch_taken_0x19ead0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19EAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EAD0u;
        // 0x19ead4: 0xae03011c  sw          $v1, 0x11C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 284), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ead0) {
            ctx->pc = 0x19EEA8u;
            { ctx->pc = 0x19eea8; return; }
        }
    }
    ctx->pc = 0x19EAD8u;
label_19ead8:
    // 0x19ead8: 0x3062000c  andi        $v0, $v1, 0xC
    ctx->pc = 0x19ead8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)12);
label_19eadc:
    // 0x19eadc: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_19eae0:
    if (ctx->pc == 0x19EAE0u) {
        ctx->pc = 0x19EAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EADCu;
        // 0x19eae0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19EAE4u;
        goto label_19eae4;
    }
    ctx->pc = 0x19EADCu;
    {
        const bool branch_taken_0x19eadc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19EAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EADCu;
        // 0x19eae0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19eadc) {
            ctx->pc = 0x19EB14u;
            goto label_19eb14;
        }
    }
    ctx->pc = 0x19EAE4u;
label_19eae4:
    // 0x19eae4: 0x8e030174  lw          $v1, 0x174($s0)
    ctx->pc = 0x19eae4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
label_19eae8:
    // 0x19eae8: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
label_19eaec:
    if (ctx->pc == 0x19EAECu) {
        ctx->pc = 0x19EAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EAE8u;
        // 0x19eaec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19EAF0u;
        goto label_19eaf0;
    }
    ctx->pc = 0x19EAE8u;
    {
        const bool branch_taken_0x19eae8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x19EAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EAE8u;
        // 0x19eaec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19eae8) {
            ctx->pc = 0x19EB04u;
            goto label_19eb04;
        }
    }
    ctx->pc = 0x19EAF0u;
label_19eaf0:
    // 0x19eaf0: 0x8e02017c  lw          $v0, 0x17C($s0)
    ctx->pc = 0x19eaf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 380)));
label_19eaf4:
    // 0x19eaf4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_19eaf8:
    if (ctx->pc == 0x19EAF8u) {
        ctx->pc = 0x19EAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EAF4u;
        // 0x19eaf8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19EAFCu;
        goto label_19eafc;
    }
    ctx->pc = 0x19EAF4u;
    {
        const bool branch_taken_0x19eaf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19EAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EAF4u;
        // 0x19eaf8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19eaf4) {
            ctx->pc = 0x19EB04u;
            goto label_19eb04;
        }
    }
    ctx->pc = 0x19EAFCu;
label_19eafc:
    // 0x19eafc: 0x10000010  b           . + 4 + (0x10 << 2)
label_19eb00:
    if (ctx->pc == 0x19EB00u) {
        ctx->pc = 0x19EB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EAFCu;
        // 0x19eb00: 0xaea20000  sw          $v0, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19EB04u;
        goto label_19eb04;
    }
    ctx->pc = 0x19EAFCu;
    {
        const bool branch_taken_0x19eafc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19EB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EAFCu;
        // 0x19eb00: 0xaea20000  sw          $v0, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19eafc) {
            ctx->pc = 0x19EB40u;
            goto label_19eb40;
        }
    }
    ctx->pc = 0x19EB04u;
label_19eb04:
    // 0x19eb04: 0xc067dd2  jal         func_19F748
label_19eb08:
    if (ctx->pc == 0x19EB08u) {
        ctx->pc = 0x19EB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EB04u;
        // 0x19eb08: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19EB0Cu;
        goto label_19eb0c;
    }
    ctx->pc = 0x19EB04u;
    SET_GPR_U32(ctx, 31, 0x19EB0Cu);
    ctx->pc = 0x19EB08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19EB04u;
    // 0x19eb08: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F748u;
    { ctx->pc = 0x19f748; return; }
    ctx->pc = 0x19EB0Cu;
label_19eb0c:
    // 0x19eb0c: 0x1000000c  b           . + 4 + (0xC << 2)
label_19eb10:
    if (ctx->pc == 0x19EB10u) {
        ctx->pc = 0x19EB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EB0Cu;
        // 0x19eb10: 0xaea20000  sw          $v0, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19EB14u;
        goto label_19eb14;
    }
    ctx->pc = 0x19EB0Cu;
    {
        const bool branch_taken_0x19eb0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19EB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EB0Cu;
        // 0x19eb10: 0xaea20000  sw          $v0, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19eb0c) {
            ctx->pc = 0x19EB40u;
            goto label_19eb40;
        }
    }
    ctx->pc = 0x19EB14u;
label_19eb14:
    // 0x19eb14: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x19eb14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_19eb18:
    // 0x19eb18: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
label_19eb1c:
    if (ctx->pc == 0x19EB1Cu) {
        ctx->pc = 0x19EB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EB18u;
        // 0x19eb1c: 0x8e060174  lw          $a2, 0x174($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19EB20u;
        goto label_19eb20;
    }
    ctx->pc = 0x19EB18u;
    {
        const bool branch_taken_0x19eb18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19eb18) {
            ctx->pc = 0x19EB1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19EB18u;
            // 0x19eb1c: 0x8e060174  lw          $a2, 0x174($s0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19EB44u;
            goto label_19eb44;
        }
    }
    ctx->pc = 0x19EB20u;
label_19eb20:
    // 0x19eb20: 0x8e020180  lw          $v0, 0x180($s0)
    ctx->pc = 0x19eb20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
label_19eb24:
    // 0x19eb24: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_19eb28:
    if (ctx->pc == 0x19EB28u) {
        ctx->pc = 0x19EB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EB24u;
        // 0x19eb28: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19EB2Cu;
        goto label_19eb2c;
    }
    ctx->pc = 0x19EB24u;
    {
        const bool branch_taken_0x19eb24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19EB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EB24u;
        // 0x19eb28: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19eb24) {
            ctx->pc = 0x19EB40u;
            goto label_19eb40;
        }
    }
    ctx->pc = 0x19EB2Cu;
label_19eb2c:
    // 0x19eb2c: 0x8e020174  lw          $v0, 0x174($s0)
    ctx->pc = 0x19eb2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
label_19eb30:
    // 0x19eb30: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x19eb30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_19eb34:
    // 0x19eb34: 0x38420003  xori        $v0, $v0, 0x3
    ctx->pc = 0x19eb34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)3);
label_19eb38:
    // 0x19eb38: 0x82180a  movz        $v1, $a0, $v0
    ctx->pc = 0x19eb38u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
label_19eb3c:
    // 0x19eb3c: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x19eb3cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
label_19eb40:
    // 0x19eb40: 0x8e060174  lw          $a2, 0x174($s0)
    ctx->pc = 0x19eb40u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
label_19eb44:
    // 0x19eb44: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x19eb44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_19eb48:
    // 0x19eb48: 0x14c20008  bne         $a2, $v0, . + 4 + (0x8 << 2)
label_19eb4c:
    if (ctx->pc == 0x19EB4Cu) {
        ctx->pc = 0x19EB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EB48u;
        // 0x19eb4c: 0x8ea50000  lw          $a1, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19EB50u;
        goto label_19eb50;
    }
    ctx->pc = 0x19EB48u;
    {
        const bool branch_taken_0x19eb48 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x19EB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EB48u;
        // 0x19eb4c: 0x8ea50000  lw          $a1, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19eb48) {
            ctx->pc = 0x19EB6Cu;
            goto label_19eb6c;
        }
    }
    ctx->pc = 0x19EB50u;
label_19eb50:
    // 0x19eb50: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x19eb50u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19eb54:
    // 0x19eb54: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x19eb54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_19eb58:
    // 0x19eb58: 0x38a30001  xori        $v1, $a1, 0x1
    ctx->pc = 0x19eb58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)1);
label_19eb5c:
    // 0x19eb5c: 0x38a40002  xori        $a0, $a1, 0x2
    ctx->pc = 0x19eb5cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)2);
label_19eb60:
    // 0x19eb60: 0x43980a  movz        $s3, $v0, $v1
    ctx->pc = 0x19eb60u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 2));
label_19eb64:
    // 0x19eb64: 0x10000006  b           . + 4 + (0x6 << 2)
label_19eb68:
    if (ctx->pc == 0x19EB68u) {
        ctx->pc = 0x19EB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EB64u;
        // 0x19eb68: 0x2c940001  sltiu       $s4, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x19EB6Cu;
        goto label_19eb6c;
    }
    ctx->pc = 0x19EB64u;
    {
        const bool branch_taken_0x19eb64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19EB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EB64u;
        // 0x19eb68: 0x2c940001  sltiu       $s4, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19eb64) {
            ctx->pc = 0x19EB80u;
            goto label_19eb80;
        }
    }
    ctx->pc = 0x19EB6Cu;
label_19eb6c:
    // 0x19eb6c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x19eb6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_19eb70:
    // 0x19eb70: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x19eb70u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19eb74:
    // 0x19eb74: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x19eb74u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19eb78:
    // 0x19eb78: 0x38a20002  xori        $v0, $a1, 0x2
    ctx->pc = 0x19eb78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)2);
label_19eb7c:
    // 0x19eb7c: 0x62980a  movz        $s3, $v1, $v0
    ctx->pc = 0x19eb7cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 3));
label_19eb80:
    // 0x19eb80: 0x38a20003  xori        $v0, $a1, 0x3
    ctx->pc = 0x19eb80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)3);
label_19eb84:
    // 0x19eb84: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x19eb84u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19eb88:
    // 0x19eb88: 0x16800003  bnez        $s4, . + 4 + (0x3 << 2)
label_19eb8c:
    if (ctx->pc == 0x19EB8Cu) {
        ctx->pc = 0x19EB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EB88u;
        // 0x19eb8c: 0x2c5e0001  sltiu       $fp, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 30, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x19EB90u;
        goto label_19eb90;
    }
    ctx->pc = 0x19EB88u;
    {
        const bool branch_taken_0x19eb88 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x19EB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EB88u;
        // 0x19eb8c: 0x2c5e0001  sltiu       $fp, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 30, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19eb88) {
            ctx->pc = 0x19EB98u;
            goto label_19eb98;
        }
    }
    ctx->pc = 0x19EB90u;
label_19eb90:
    // 0x19eb90: 0x38c20003  xori        $v0, $a2, 0x3
    ctx->pc = 0x19eb90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)3);
label_19eb94:
    // 0x19eb94: 0x2c570001  sltiu       $s7, $v0, 0x1
    ctx->pc = 0x19eb94u;
    SET_GPR_U64(ctx, 23, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_19eb98:
    // 0x19eb98: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x19eb98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_19eb9c:
    // 0x19eb9c: 0x14c2000d  bne         $a2, $v0, . + 4 + (0xD << 2)
label_19eba0:
    if (ctx->pc == 0x19EBA0u) {
        ctx->pc = 0x19EBA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EB9Cu;
        // 0x19eba0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19EBA4u;
        goto label_19eba4;
    }
    ctx->pc = 0x19EB9Cu;
    {
        const bool branch_taken_0x19eb9c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x19EBA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EB9Cu;
        // 0x19eba0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19eb9c) {
            ctx->pc = 0x19EBD4u;
            goto label_19ebd4;
        }
    }
    ctx->pc = 0x19EBA4u;
label_19eba4:
    // 0x19eba4: 0x8e02017c  lw          $v0, 0x17C($s0)
    ctx->pc = 0x19eba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 380)));
label_19eba8:
    // 0x19eba8: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_19ebac:
    if (ctx->pc == 0x19EBACu) {
        ctx->pc = 0x19EBACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EBA8u;
        // 0x19ebac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19EBB0u;
        goto label_19ebb0;
    }
    ctx->pc = 0x19EBA8u;
    {
        const bool branch_taken_0x19eba8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19EBACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EBA8u;
        // 0x19ebac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19eba8) {
            ctx->pc = 0x19EBD4u;
            goto label_19ebd4;
        }
    }
    ctx->pc = 0x19EBB0u;
label_19ebb0:
    // 0x19ebb0: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x19ebb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_19ebb4:
    // 0x19ebb4: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x19ebb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_19ebb8:
    // 0x19ebb8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_19ebbc:
    if (ctx->pc == 0x19EBBCu) {
        ctx->pc = 0x19EBBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EBB8u;
        // 0x19ebbc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19EBC0u;
        goto label_19ebc0;
    }
    ctx->pc = 0x19EBB8u;
    {
        const bool branch_taken_0x19ebb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19EBBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EBB8u;
        // 0x19ebbc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ebb8) {
            ctx->pc = 0x19EBD0u;
            goto label_19ebd0;
        }
    }
    ctx->pc = 0x19EBC0u;
label_19ebc0:
    // 0x19ebc0: 0xc067dd2  jal         func_19F748
label_19ebc4:
    if (ctx->pc == 0x19EBC4u) {
        ctx->pc = 0x19EBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EBC0u;
        // 0x19ebc4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19EBC8u;
        goto label_19ebc8;
    }
    ctx->pc = 0x19EBC0u;
    SET_GPR_U32(ctx, 31, 0x19EBC8u);
    ctx->pc = 0x19EBC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19EBC0u;
    // 0x19ebc4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F748u;
    { ctx->pc = 0x19f748; return; }
    ctx->pc = 0x19EBC8u;
label_19ebc8:
    // 0x19ebc8: 0x10000003  b           . + 4 + (0x3 << 2)
label_19ebcc:
    if (ctx->pc == 0x19EBCCu) {
        ctx->pc = 0x19EBCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EBC8u;
        // 0x19ebcc: 0x8fa30020  lw          $v1, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19EBD0u;
        goto label_19ebd0;
    }
    ctx->pc = 0x19EBC8u;
    {
        const bool branch_taken_0x19ebc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19EBCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EBC8u;
        // 0x19ebcc: 0x8fa30020  lw          $v1, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ebc8) {
            ctx->pc = 0x19EBD8u;
            goto label_19ebd8;
        }
    }
    ctx->pc = 0x19EBD0u;
label_19ebd0:
    // 0x19ebd0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x19ebd0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19ebd4:
    // 0x19ebd4: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x19ebd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_19ebd8:
    // 0x19ebd8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x19ebd8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_19ebdc:
    // 0x19ebdc: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x19ebdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_19ebe0:
    // 0x19ebe0: 0x30620010  andi        $v0, $v1, 0x10
    ctx->pc = 0x19ebe0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
label_19ebe4:
    // 0x19ebe4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_19ebe8:
    if (ctx->pc == 0x19EBE8u) {
        ctx->pc = 0x19EBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EBE4u;
        // 0x19ebe8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19EBECu;
        goto label_19ebec;
    }
    ctx->pc = 0x19EBE4u;
    {
        const bool branch_taken_0x19ebe4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19EBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EBE4u;
        // 0x19ebe8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ebe4) {
            ctx->pc = 0x19EBFCu;
            goto label_19ebfc;
        }
    }
    ctx->pc = 0x19EBECu;
label_19ebec:
    // 0x19ebec: 0xc067dd2  jal         func_19F748
label_19ebf0:
    if (ctx->pc == 0x19EBF0u) {
        ctx->pc = 0x19EBF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EBECu;
        // 0x19ebf0: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19EBF4u;
        goto label_19ebf4;
    }
    ctx->pc = 0x19EBECu;
    SET_GPR_U32(ctx, 31, 0x19EBF4u);
    ctx->pc = 0x19EBF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19EBECu;
    // 0x19ebf0: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F748u;
    { ctx->pc = 0x19f748; return; }
    ctx->pc = 0x19EBF4u;
label_19ebf4:
    // 0x19ebf4: 0xae0201b4  sw          $v0, 0x1B4($s0)
    ctx->pc = 0x19ebf4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 436), GPR_U32(ctx, 2));
label_19ebf8:
    // 0x19ebf8: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x19ebf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_19ebfc:
    // 0x19ebfc: 0x30620008  andi        $v0, $v1, 0x8
    ctx->pc = 0x19ebfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
label_19ec00:
    // 0x19ec00: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
label_19ec04:
    if (ctx->pc == 0x19EC04u) {
        ctx->pc = 0x19EC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EC00u;
        // 0x19ec04: 0x8e020848  lw          $v0, 0x848($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2120)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19EC08u;
        goto label_19ec08;
    }
    ctx->pc = 0x19EC00u;
    {
        const bool branch_taken_0x19ec00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19ec00) {
            ctx->pc = 0x19EC04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19EC00u;
            // 0x19ec04: 0x8e020848  lw          $v0, 0x848($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2120)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19EC24u;
            goto label_19ec24;
        }
    }
    ctx->pc = 0x19EC08u;
label_19ec08:
    // 0x19ec08: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x19ec08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_19ec0c:
    // 0x19ec0c: 0x50400021  beql        $v0, $zero, . + 4 + (0x21 << 2)
label_19ec10:
    if (ctx->pc == 0x19EC10u) {
        ctx->pc = 0x19EC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EC0Cu;
        // 0x19ec10: 0x8e03011c  lw          $v1, 0x11C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 284)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19EC14u;
        goto label_19ec14;
    }
    ctx->pc = 0x19EC0Cu;
    {
        const bool branch_taken_0x19ec0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19ec0c) {
            ctx->pc = 0x19EC10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19EC0Cu;
            // 0x19ec10: 0x8e03011c  lw          $v1, 0x11C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 284)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19EC94u;
            goto label_19ec94;
        }
    }
    ctx->pc = 0x19EC14u;
label_19ec14:
    // 0x19ec14: 0x8e020180  lw          $v0, 0x180($s0)
    ctx->pc = 0x19ec14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
label_19ec18:
    // 0x19ec18: 0x5040001e  beql        $v0, $zero, . + 4 + (0x1E << 2)
label_19ec1c:
    if (ctx->pc == 0x19EC1Cu) {
        ctx->pc = 0x19EC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EC18u;
        // 0x19ec1c: 0x8e03011c  lw          $v1, 0x11C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 284)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19EC20u;
        goto label_19ec20;
    }
    ctx->pc = 0x19EC18u;
    {
        const bool branch_taken_0x19ec18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19ec18) {
            ctx->pc = 0x19EC1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19EC18u;
            // 0x19ec1c: 0x8e03011c  lw          $v1, 0x11C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 284)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19EC94u;
            goto label_19ec94;
        }
    }
    ctx->pc = 0x19EC20u;
label_19ec20:
    // 0x19ec20: 0x8e020848  lw          $v0, 0x848($s0)
    ctx->pc = 0x19ec20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2120)));
label_19ec24:
    // 0x19ec24: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_19ec28:
    if (ctx->pc == 0x19EC28u) {
        ctx->pc = 0x19EC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EC24u;
        // 0x19ec28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19EC2Cu;
        goto label_19ec2c;
    }
    ctx->pc = 0x19EC24u;
    {
        const bool branch_taken_0x19ec24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19EC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EC24u;
        // 0x19ec28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ec24) {
            ctx->pc = 0x19EC6Cu;
            goto label_19ec6c;
        }
    }
    ctx->pc = 0x19EC2Cu;
label_19ec2c:
    // 0x19ec2c: 0x8e020168  lw          $v0, 0x168($s0)
    ctx->pc = 0x19ec2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 360)));
label_19ec30:
    // 0x19ec30: 0x8e0b0164  lw          $t3, 0x164($s0)
    ctx->pc = 0x19ec30u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 356)));
label_19ec34:
    // 0x19ec34: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x19ec34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_19ec38:
    // 0x19ec38: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x19ec38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_19ec3c:
    // 0x19ec3c: 0x8fa70024  lw          $a3, 0x24($sp)
    ctx->pc = 0x19ec3cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_19ec40:
    // 0x19ec40: 0xafbe0008  sw          $fp, 0x8($sp)
    ctx->pc = 0x19ec40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 30));
label_19ec44:
    // 0x19ec44: 0x256bffff  addiu       $t3, $t3, -0x1
    ctx->pc = 0x19ec44u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
label_19ec48:
    // 0x19ec48: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x19ec48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_19ec4c:
    // 0x19ec4c: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x19ec4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_19ec50:
    // 0x19ec50: 0xafb70010  sw          $s7, 0x10($sp)
    ctx->pc = 0x19ec50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 23));
label_19ec54:
    // 0x19ec54: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x19ec54u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19ec58:
    // 0x19ec58: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x19ec58u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_19ec5c:
    // 0x19ec5c: 0xc067bd8  jal         func_19EF60
label_19ec60:
    if (ctx->pc == 0x19EC60u) {
        ctx->pc = 0x19EC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EC5Cu;
        // 0x19ec60: 0x280502d  daddu       $t2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19EC64u;
        goto label_19ec64;
    }
    ctx->pc = 0x19EC5Cu;
    SET_GPR_U32(ctx, 31, 0x19EC64u);
    ctx->pc = 0x19EC60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19EC5Cu;
    // 0x19ec60: 0x280502d  daddu       $t2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EF60u;
    { ctx->pc = 0x19ef60; return; }
    ctx->pc = 0x19EC64u;
label_19ec64:
    // 0x19ec64: 0x1000000b  b           . + 4 + (0xB << 2)
label_19ec68:
    if (ctx->pc == 0x19EC68u) {
        ctx->pc = 0x19EC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EC64u;
        // 0x19ec68: 0x8e03011c  lw          $v1, 0x11C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 284)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19EC6Cu;
        goto label_19ec6c;
    }
    ctx->pc = 0x19EC64u;
    {
        const bool branch_taken_0x19ec64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19EC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EC64u;
        // 0x19ec68: 0x8e03011c  lw          $v1, 0x11C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 284)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ec64) {
            ctx->pc = 0x19EC94u;
            goto label_19ec94;
        }
    }
    ctx->pc = 0x19EC6Cu;
label_19ec6c:
    // 0x19ec6c: 0x8e070158  lw          $a3, 0x158($s0)
    ctx->pc = 0x19ec6cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 344)));
label_19ec70:
    // 0x19ec70: 0x8e0b0154  lw          $t3, 0x154($s0)
    ctx->pc = 0x19ec70u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 340)));
label_19ec74:
    // 0x19ec74: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x19ec74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_19ec78:
    // 0x19ec78: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x19ec78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
label_19ec7c:
    // 0x19ec7c: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x19ec7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_19ec80:
    // 0x19ec80: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x19ec80u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19ec84:
    // 0x19ec84: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x19ec84u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_19ec88:
    // 0x19ec88: 0xc067c40  jal         func_19F100
label_19ec8c:
    if (ctx->pc == 0x19EC8Cu) {
        ctx->pc = 0x19EC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EC88u;
        // 0x19ec8c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19EC90u;
        goto label_19ec90;
    }
    ctx->pc = 0x19EC88u;
    SET_GPR_U32(ctx, 31, 0x19EC90u);
    ctx->pc = 0x19EC8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19EC88u;
    // 0x19ec8c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F100u;
    { ctx->pc = 0x19f100; return; }
    ctx->pc = 0x19EC90u;
label_19ec90:
    // 0x19ec90: 0x8e03011c  lw          $v1, 0x11C($s0)
    ctx->pc = 0x19ec90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 284)));
label_19ec94:
    // 0x19ec94: 0x14600084  bnez        $v1, . + 4 + (0x84 << 2)
    ctx->pc = 0x19ec98u;
    return;
}
