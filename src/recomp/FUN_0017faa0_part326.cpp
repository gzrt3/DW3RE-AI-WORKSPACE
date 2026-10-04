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


void FUN_0017faa0_part326(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
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
        case 0x21eba8u: goto label_21eba8;
        case 0x21ebacu: goto label_21ebac;
        case 0x21ebb0u: goto label_21ebb0;
        case 0x21ebb4u: goto label_21ebb4;
        case 0x21ebb8u: goto label_21ebb8;
        case 0x21ebbcu: goto label_21ebbc;
        case 0x21ebc0u: goto label_21ebc0;
        case 0x21ebc4u: goto label_21ebc4;
        case 0x21ebc8u: goto label_21ebc8;
        case 0x21ebccu: goto label_21ebcc;
        case 0x21ebd0u: goto label_21ebd0;
        case 0x21ebd4u: goto label_21ebd4;
        case 0x21ebd8u: goto label_21ebd8;
        case 0x21ebdcu: goto label_21ebdc;
        case 0x21ebe0u: goto label_21ebe0;
        case 0x21ebe4u: goto label_21ebe4;
        case 0x21ebe8u: goto label_21ebe8;
        case 0x21ebecu: goto label_21ebec;
        case 0x21ebf0u: goto label_21ebf0;
        case 0x21ebf4u: goto label_21ebf4;
        case 0x21ebf8u: goto label_21ebf8;
        case 0x21ebfcu: goto label_21ebfc;
        case 0x21ec00u: goto label_21ec00;
        case 0x21ec04u: goto label_21ec04;
        case 0x21ec08u: goto label_21ec08;
        case 0x21ec0cu: goto label_21ec0c;
        case 0x21ec10u: goto label_21ec10;
        case 0x21ec14u: goto label_21ec14;
        case 0x21ec18u: goto label_21ec18;
        case 0x21ec1cu: goto label_21ec1c;
        case 0x21ec20u: goto label_21ec20;
        case 0x21ec24u: goto label_21ec24;
        case 0x21ec28u: goto label_21ec28;
        case 0x21ec2cu: goto label_21ec2c;
        case 0x21ec30u: goto label_21ec30;
        case 0x21ec34u: goto label_21ec34;
        case 0x21ec38u: goto label_21ec38;
        case 0x21ec3cu: goto label_21ec3c;
        case 0x21ec40u: goto label_21ec40;
        case 0x21ec44u: goto label_21ec44;
        case 0x21ec48u: goto label_21ec48;
        case 0x21ec4cu: goto label_21ec4c;
        case 0x21ec50u: goto label_21ec50;
        case 0x21ec54u: goto label_21ec54;
        case 0x21ec58u: goto label_21ec58;
        case 0x21ec5cu: goto label_21ec5c;
        case 0x21ec60u: goto label_21ec60;
        case 0x21ec64u: goto label_21ec64;
        case 0x21ec68u: goto label_21ec68;
        case 0x21ec6cu: goto label_21ec6c;
        case 0x21ec70u: goto label_21ec70;
        case 0x21ec74u: goto label_21ec74;
        case 0x21ec78u: goto label_21ec78;
        case 0x21ec7cu: goto label_21ec7c;
        case 0x21ec80u: goto label_21ec80;
        case 0x21ec84u: goto label_21ec84;
        case 0x21ec88u: goto label_21ec88;
        case 0x21ec8cu: goto label_21ec8c;
        case 0x21ec90u: goto label_21ec90;
        case 0x21ec94u: goto label_21ec94;
        case 0x21ec98u: goto label_21ec98;
        case 0x21ec9cu: goto label_21ec9c;
        case 0x21eca0u: goto label_21eca0;
        case 0x21eca4u: goto label_21eca4;
        case 0x21eca8u: goto label_21eca8;
        case 0x21ecacu: goto label_21ecac;
        case 0x21ecb0u: goto label_21ecb0;
        case 0x21ecb4u: goto label_21ecb4;
        case 0x21ecb8u: goto label_21ecb8;
        case 0x21ecbcu: goto label_21ecbc;
        case 0x21ecc0u: goto label_21ecc0;
        case 0x21ecc4u: goto label_21ecc4;
        case 0x21ecc8u: goto label_21ecc8;
        case 0x21ecccu: goto label_21eccc;
        case 0x21ecd0u: goto label_21ecd0;
        case 0x21ecd4u: goto label_21ecd4;
        case 0x21ecd8u: goto label_21ecd8;
        case 0x21ecdcu: goto label_21ecdc;
        case 0x21ece0u: goto label_21ece0;
        case 0x21ece4u: goto label_21ece4;
        case 0x21ece8u: goto label_21ece8;
        case 0x21ececu: goto label_21ecec;
        case 0x21ecf0u: goto label_21ecf0;
        case 0x21ecf4u: goto label_21ecf4;
        case 0x21ecf8u: goto label_21ecf8;
        case 0x21ecfcu: goto label_21ecfc;
        case 0x21ed00u: goto label_21ed00;
        case 0x21ed04u: goto label_21ed04;
        case 0x21ed08u: goto label_21ed08;
        case 0x21ed0cu: goto label_21ed0c;
        case 0x21ed10u: goto label_21ed10;
        case 0x21ed14u: goto label_21ed14;
        case 0x21ed18u: goto label_21ed18;
        case 0x21ed1cu: goto label_21ed1c;
        case 0x21ed20u: goto label_21ed20;
        case 0x21ed24u: goto label_21ed24;
        case 0x21ed28u: goto label_21ed28;
        case 0x21ed2cu: goto label_21ed2c;
        case 0x21ed30u: goto label_21ed30;
        case 0x21ed34u: goto label_21ed34;
        case 0x21ed38u: goto label_21ed38;
        case 0x21ed3cu: goto label_21ed3c;
        case 0x21ed40u: goto label_21ed40;
        case 0x21ed44u: goto label_21ed44;
        case 0x21ed48u: goto label_21ed48;
        case 0x21ed4cu: goto label_21ed4c;
        case 0x21ed50u: goto label_21ed50;
        case 0x21ed54u: goto label_21ed54;
        case 0x21ed58u: goto label_21ed58;
        case 0x21ed5cu: goto label_21ed5c;
        case 0x21ed60u: goto label_21ed60;
        case 0x21ed64u: goto label_21ed64;
        case 0x21ed68u: goto label_21ed68;
        case 0x21ed6cu: goto label_21ed6c;
        case 0x21ed70u: goto label_21ed70;
        case 0x21ed74u: goto label_21ed74;
        case 0x21ed78u: goto label_21ed78;
        case 0x21ed7cu: goto label_21ed7c;
        default: return;
    }

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
label_21eba8:
    // 0x21eba8: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x21eba8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
label_21ebac:
    // 0x21ebac: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x21ebacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
label_21ebb0:
    // 0x21ebb0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x21ebb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_21ebb4:
    // 0x21ebb4: 0xffa200c0  sd          $v0, 0xC0($sp)
    ctx->pc = 0x21ebb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 2));
label_21ebb8:
    // 0x21ebb8: 0x8ef40000  lw          $s4, 0x0($s7)
    ctx->pc = 0x21ebb8u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_21ebbc:
    // 0x21ebbc: 0x2e810035  sltiu       $at, $s4, 0x35
    ctx->pc = 0x21ebbcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)53) ? 1 : 0);
label_21ebc0:
    // 0x21ebc0: 0x14200005  bnez        $at, . + 4 + (0x5 << 2)
label_21ebc4:
    if (ctx->pc == 0x21EBC4u) {
        ctx->pc = 0x21EBC8u;
        goto label_21ebc8;
    }
    ctx->pc = 0x21EBC0u;
    {
        const bool branch_taken_0x21ebc0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x21ebc0) {
            ctx->pc = 0x21EBD8u;
            goto label_21ebd8;
        }
    }
    ctx->pc = 0x21EBC8u;
label_21ebc8:
    // 0x21ebc8: 0x285001b  divu        $zero, $s4, $a1
    ctx->pc = 0x21ebc8u;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 20) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 20) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,20); } }
label_21ebcc:
    // 0x21ebcc: 0x0  nop
    ctx->pc = 0x21ebccu;
    // NOP
label_21ebd0:
    // 0x21ebd0: 0x0  nop
    ctx->pc = 0x21ebd0u;
    // NOP
label_21ebd4:
    // 0x21ebd4: 0xa010  mfhi        $s4
    ctx->pc = 0x21ebd4u;
    SET_GPR_U64(ctx, 20, ctx->hi);
label_21ebd8:
    // 0x21ebd8: 0xde150000  ld          $s5, 0x0($s0)
    ctx->pc = 0x21ebd8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 16), 0)));
label_21ebdc:
    // 0x21ebdc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21ebdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21ebe0:
    // 0x21ebe0: 0x2822814  dsllv       $a1, $v0, $s4
    ctx->pc = 0x21ebe0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (GPR_U32(ctx, 20) & 0x3F));
label_21ebe4:
    // 0x21ebe4: 0xc06d9fe  jal         func_1B67F8
label_21ebe8:
    if (ctx->pc == 0x21EBE8u) {
        ctx->pc = 0x21EBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EBE4u;
        // 0x21ebe8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21EBECu;
        goto label_21ebec;
    }
    ctx->pc = 0x21EBE4u;
    SET_GPR_U32(ctx, 31, 0x21EBECu);
    ctx->pc = 0x21EBE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21EBE4u;
    // 0x21ebe8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B67F8u;
    { ctx->pc = 0x1b67f8; return; }
    ctx->pc = 0x21EBECu;
label_21ebec:
    // 0x21ebec: 0x24040034  addiu       $a0, $zero, 0x34
    ctx->pc = 0x21ebecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
label_21ebf0:
    // 0x21ebf0: 0x2951816  dsrlv       $v1, $s5, $s4
    ctx->pc = 0x21ebf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) >> (GPR_U32(ctx, 20) & 0x3F));
label_21ebf4:
    // 0x21ebf4: 0x942023  subu        $a0, $a0, $s4
    ctx->pc = 0x21ebf4u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
label_21ebf8:
    // 0x21ebf8: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x21ebf8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
label_21ebfc:
    // 0x21ebfc: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x21ebfcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21ec00:
    // 0x21ec00: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x21ec00u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
label_21ec04:
    // 0x21ec04: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x21ec04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
label_21ec08:
    // 0x21ec08: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x21ec08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_21ec0c:
    // 0x21ec0c: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x21ec0cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
label_21ec10:
    // 0x21ec10: 0x27a200b0  addiu       $v0, $sp, 0xB0
    ctx->pc = 0x21ec10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_21ec14:
    // 0x21ec14: 0x8fb500a0  lw          $s5, 0xA0($sp)
    ctx->pc = 0x21ec14u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_21ec18:
    // 0x21ec18: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x21ec18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_21ec1c:
    // 0x21ec1c: 0x0  nop
    ctx->pc = 0x21ec1cu;
    // NOP
label_21ec20:
    // 0x21ec20: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x21ec20u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_21ec24:
    // 0x21ec24: 0x2403000d  addiu       $v1, $zero, 0xD
    ctx->pc = 0x21ec24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_21ec28:
    // 0x21ec28: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x21ec28u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_21ec2c:
    // 0x21ec2c: 0x15a842  srl         $s5, $s5, 1
    ctx->pc = 0x21ec2cu;
    SET_GPR_S32(ctx, 21, (int32_t)SRL32(GPR_U32(ctx, 21), 1));
label_21ec30:
    // 0x21ec30: 0x0  nop
    ctx->pc = 0x21ec30u;
    // NOP
label_21ec34:
    // 0x21ec34: 0x2810  mfhi        $a1
    ctx->pc = 0x21ec34u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_21ec38:
    // 0x21ec38: 0x2a3001b  divu        $zero, $s5, $v1
    ctx->pc = 0x21ec38u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 21) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 21) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,21); } }
label_21ec3c:
    // 0x21ec3c: 0x0  nop
    ctx->pc = 0x21ec3cu;
    // NOP
label_21ec40:
    // 0x21ec40: 0x0  nop
    ctx->pc = 0x21ec40u;
    // NOP
label_21ec44:
    // 0x21ec44: 0x3010  mfhi        $a2
    ctx->pc = 0x21ec44u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_21ec48:
    // 0x21ec48: 0xc087588  jal         func_21D620
label_21ec4c:
    if (ctx->pc == 0x21EC4Cu) {
        ctx->pc = 0x21EC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EC48u;
        // 0x21ec4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21EC50u;
        goto label_21ec50;
    }
    ctx->pc = 0x21EC48u;
    SET_GPR_U32(ctx, 31, 0x21EC50u);
    ctx->pc = 0x21EC4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21EC48u;
    // 0x21ec4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D620u;
    { ctx->pc = 0x21d620; return; }
    ctx->pc = 0x21EC50u;
label_21ec50:
    // 0x21ec50: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x21ec50u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_21ec54:
    // 0x21ec54: 0x2a830008  slti        $v1, $s4, 0x8
    ctx->pc = 0x21ec54u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)8) ? 1 : 0);
label_21ec58:
    // 0x21ec58: 0x1460fff1  bnez        $v1, . + 4 + (-0xF << 2)
label_21ec5c:
    if (ctx->pc == 0x21EC5Cu) {
        ctx->pc = 0x21EC60u;
        goto label_21ec60;
    }
    ctx->pc = 0x21EC58u;
    {
        const bool branch_taken_0x21ec58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x21ec58) {
            ctx->pc = 0x21EC20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21ec20;
        }
    }
    ctx->pc = 0x21EC60u;
label_21ec60:
    // 0x21ec60: 0x8fc40000  lw          $a0, 0x0($fp)
    ctx->pc = 0x21ec60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_21ec64:
    // 0x21ec64: 0x9ee30000  lwu         $v1, 0x0($s7)
    ctx->pc = 0x21ec64u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_21ec68:
    // 0x21ec68: 0xde020000  ld          $v0, 0x0($s0)
    ctx->pc = 0x21ec68u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 0)));
label_21ec6c:
    // 0x21ec6c: 0x4233c  dsll32      $a0, $a0, 12
    ctx->pc = 0x21ec6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 12));
label_21ec70:
    // 0x21ec70: 0x4233e  dsrl32      $a0, $a0, 12
    ctx->pc = 0x21ec70u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 12));
label_21ec74:
    // 0x21ec74: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x21ec74u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
label_21ec78:
    // 0x21ec78: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x21ec78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_21ec7c:
    // 0x21ec7c: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x21ec7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
label_21ec80:
    // 0x21ec80: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x21ec80u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
label_21ec84:
    // 0x21ec84: 0x27a200b0  addiu       $v0, $sp, 0xB0
    ctx->pc = 0x21ec84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_21ec88:
    // 0x21ec88: 0x8c540000  lw          $s4, 0x0($v0)
    ctx->pc = 0x21ec88u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_21ec8c:
    // 0x21ec8c: 0x2e810035  sltiu       $at, $s4, 0x35
    ctx->pc = 0x21ec8cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)53) ? 1 : 0);
label_21ec90:
    // 0x21ec90: 0x14200005  bnez        $at, . + 4 + (0x5 << 2)
label_21ec94:
    if (ctx->pc == 0x21EC94u) {
        ctx->pc = 0x21EC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EC90u;
        // 0x21ec94: 0x24020034  addiu       $v0, $zero, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21EC98u;
        goto label_21ec98;
    }
    ctx->pc = 0x21EC90u;
    {
        const bool branch_taken_0x21ec90 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x21EC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EC90u;
        // 0x21ec94: 0x24020034  addiu       $v0, $zero, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ec90) {
            ctx->pc = 0x21ECA8u;
            goto label_21eca8;
        }
    }
    ctx->pc = 0x21EC98u;
label_21ec98:
    // 0x21ec98: 0x282001b  divu        $zero, $s4, $v0
    ctx->pc = 0x21ec98u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 20) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 20) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,20); } }
label_21ec9c:
    // 0x21ec9c: 0x0  nop
    ctx->pc = 0x21ec9cu;
    // NOP
label_21eca0:
    // 0x21eca0: 0x0  nop
    ctx->pc = 0x21eca0u;
    // NOP
label_21eca4:
    // 0x21eca4: 0xa010  mfhi        $s4
    ctx->pc = 0x21eca4u;
    SET_GPR_U64(ctx, 20, ctx->hi);
label_21eca8:
    // 0x21eca8: 0xde150000  ld          $s5, 0x0($s0)
    ctx->pc = 0x21eca8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 16), 0)));
label_21ecac:
    // 0x21ecac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21ecacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21ecb0:
    // 0x21ecb0: 0x2822814  dsllv       $a1, $v0, $s4
    ctx->pc = 0x21ecb0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (GPR_U32(ctx, 20) & 0x3F));
label_21ecb4:
    // 0x21ecb4: 0xc06d9fe  jal         func_1B67F8
label_21ecb8:
    if (ctx->pc == 0x21ECB8u) {
        ctx->pc = 0x21ECB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21ECB4u;
        // 0x21ecb8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21ECBCu;
        goto label_21ecbc;
    }
    ctx->pc = 0x21ECB4u;
    SET_GPR_U32(ctx, 31, 0x21ECBCu);
    ctx->pc = 0x21ECB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21ECB4u;
    // 0x21ecb8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B67F8u;
    { ctx->pc = 0x1b67f8; return; }
    ctx->pc = 0x21ECBCu;
label_21ecbc:
    // 0x21ecbc: 0x24030034  addiu       $v1, $zero, 0x34
    ctx->pc = 0x21ecbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
label_21ecc0:
    // 0x21ecc0: 0x2952016  dsrlv       $a0, $s5, $s4
    ctx->pc = 0x21ecc0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 21) >> (GPR_U32(ctx, 20) & 0x3F));
label_21ecc4:
    // 0x21ecc4: 0x742823  subu        $a1, $v1, $s4
    ctx->pc = 0x21ecc4u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
label_21ecc8:
    // 0x21ecc8: 0x13183c  dsll32      $v1, $s3, 0
    ctx->pc = 0x21ecc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) << (32 + 0));
label_21eccc:
    // 0x21eccc: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x21ecccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
label_21ecd0:
    // 0x21ecd0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x21ecd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_21ecd4:
    // 0x21ecd4: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x21ecd4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
label_21ecd8:
    // 0x21ecd8: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x21ecd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
label_21ecdc:
    // 0x21ecdc: 0xa21014  dsllv       $v0, $v0, $a1
    ctx->pc = 0x21ecdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 5) & 0x3F));
label_21ece0:
    // 0x21ece0: 0x3353c  dsll32      $a2, $v1, 20
    ctx->pc = 0x21ece0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 20));
label_21ece4:
    // 0x21ece4: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x21ece4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_21ece8:
    // 0x21ece8: 0x441825  or          $v1, $v0, $a0
    ctx->pc = 0x21ece8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_21ecec:
    // 0x21ecec: 0x131102  srl         $v0, $s3, 4
    ctx->pc = 0x21ececu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 19), 4));
label_21ecf0:
    // 0x21ecf0: 0xfe030000  sd          $v1, 0x0($s0)
    ctx->pc = 0x21ecf0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 3));
label_21ecf4:
    // 0x21ecf4: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x21ecf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_21ecf8:
    // 0x21ecf8: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x21ecf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_21ecfc:
    // 0x21ecfc: 0x27a200a8  addiu       $v0, $sp, 0xA8
    ctx->pc = 0x21ecfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
label_21ed00:
    // 0x21ed00: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x21ed00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_21ed04:
    // 0x21ed04: 0x9c470000  lwu         $a3, 0x0($v0)
    ctx->pc = 0x21ed04u;
    SET_GPR_ZE32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_21ed08:
    // 0x21ed08: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x21ed08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
label_21ed0c:
    // 0x21ed0c: 0x21d3c  dsll32      $v1, $v0, 20
    ctx->pc = 0x21ed0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 20));
label_21ed10:
    // 0x21ed10: 0xde020000  ld          $v0, 0x0($s0)
    ctx->pc = 0x21ed10u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 0)));
label_21ed14:
    // 0x21ed14: 0x47102d  daddu       $v0, $v0, $a3
    ctx->pc = 0x21ed14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 7));
label_21ed18:
    // 0x21ed18: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x21ed18u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
label_21ed1c:
    // 0x21ed1c: 0xdfa200c0  ld          $v0, 0xC0($sp)
    ctx->pc = 0x21ed1cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 192)));
label_21ed20:
    // 0x21ed20: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x21ed20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
label_21ed24:
    // 0x21ed24: 0xffa200c0  sd          $v0, 0xC0($sp)
    ctx->pc = 0x21ed24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 2));
label_21ed28:
    // 0x21ed28: 0xde020000  ld          $v0, 0x0($s0)
    ctx->pc = 0x21ed28u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 0)));
label_21ed2c:
    // 0x21ed2c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x21ed2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_21ed30:
    // 0x21ed30: 0xc087484  jal         func_21D210
label_21ed34:
    if (ctx->pc == 0x21ED34u) {
        ctx->pc = 0x21ED34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21ED30u;
        // 0x21ed34: 0xfe020000  sd          $v0, 0x0($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21ED38u;
        goto label_21ed38;
    }
    ctx->pc = 0x21ED30u;
    SET_GPR_U32(ctx, 31, 0x21ED38u);
    ctx->pc = 0x21ED34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21ED30u;
    // 0x21ed34: 0xfe020000  sd          $v0, 0x0($s0) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D210u;
    { ctx->pc = 0x21d210; return; }
    ctx->pc = 0x21ED38u;
label_21ed38:
    // 0x21ed38: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x21ed38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_21ed3c:
    // 0x21ed3c: 0xc08782c  jal         func_21E0B0
label_21ed40:
    if (ctx->pc == 0x21ED40u) {
        ctx->pc = 0x21ED40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21ED3Cu;
        // 0x21ed40: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21ED44u;
        goto label_21ed44;
    }
    ctx->pc = 0x21ED3Cu;
    SET_GPR_U32(ctx, 31, 0x21ED44u);
    ctx->pc = 0x21ED40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21ED3Cu;
    // 0x21ed40: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21E0B0u;
    { ctx->pc = 0x21e0b0; return; }
    ctx->pc = 0x21ED44u;
label_21ed44:
    // 0x21ed44: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x21ed44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_21ed48:
    // 0x21ed48: 0xc08730c  jal         func_21CC30
label_21ed4c:
    if (ctx->pc == 0x21ED4Cu) {
        ctx->pc = 0x21ED4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21ED48u;
        // 0x21ed4c: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21ED50u;
        goto label_21ed50;
    }
    ctx->pc = 0x21ED48u;
    SET_GPR_U32(ctx, 31, 0x21ED50u);
    ctx->pc = 0x21ED4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21ED48u;
    // 0x21ed4c: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21CC30u;
    { ctx->pc = 0x21cc30; return; }
    ctx->pc = 0x21ED50u;
label_21ed50:
    // 0x21ed50: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
label_21ed54:
    if (ctx->pc == 0x21ED54u) {
        ctx->pc = 0x21ED58u;
        goto label_21ed58;
    }
    ctx->pc = 0x21ED50u;
    {
        const bool branch_taken_0x21ed50 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x21ed50) {
            ctx->pc = 0x21ED5Cu;
            goto label_21ed5c;
        }
    }
    ctx->pc = 0x21ED58u;
label_21ed58:
    // 0x21ed58: 0x36520001  ori         $s2, $s2, 0x1
    ctx->pc = 0x21ed58u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)1);
label_21ed5c:
    // 0x21ed5c: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x21ed5cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_21ed60:
    // 0x21ed60: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x21ed60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_21ed64:
    // 0x21ed64: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x21ed64u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_21ed68:
    // 0x21ed68: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x21ed68u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_21ed6c:
    // 0x21ed6c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x21ed6cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_21ed70:
    // 0x21ed70: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x21ed70u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_21ed74:
    // 0x21ed74: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x21ed74u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_21ed78:
    // 0x21ed78: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x21ed78u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_21ed7c:
    // 0x21ed7c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x21ed7cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x21ed80u;
    return;
}
