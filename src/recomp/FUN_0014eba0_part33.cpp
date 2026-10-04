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


void FUN_0014eba0_part33(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x15e5a0u: goto label_15e5a0;
        case 0x15e5a4u: goto label_15e5a4;
        case 0x15e5a8u: goto label_15e5a8;
        case 0x15e5acu: goto label_15e5ac;
        case 0x15e5b0u: goto label_15e5b0;
        case 0x15e5b4u: goto label_15e5b4;
        case 0x15e5b8u: goto label_15e5b8;
        case 0x15e5bcu: goto label_15e5bc;
        case 0x15e5c0u: goto label_15e5c0;
        case 0x15e5c4u: goto label_15e5c4;
        case 0x15e5c8u: goto label_15e5c8;
        case 0x15e5ccu: goto label_15e5cc;
        case 0x15e5d0u: goto label_15e5d0;
        case 0x15e5d4u: goto label_15e5d4;
        case 0x15e5d8u: goto label_15e5d8;
        case 0x15e5dcu: goto label_15e5dc;
        case 0x15e5e0u: goto label_15e5e0;
        case 0x15e5e4u: goto label_15e5e4;
        case 0x15e5e8u: goto label_15e5e8;
        case 0x15e5ecu: goto label_15e5ec;
        case 0x15e5f0u: goto label_15e5f0;
        case 0x15e5f4u: goto label_15e5f4;
        case 0x15e5f8u: goto label_15e5f8;
        case 0x15e5fcu: goto label_15e5fc;
        case 0x15e600u: goto label_15e600;
        case 0x15e604u: goto label_15e604;
        case 0x15e608u: goto label_15e608;
        case 0x15e60cu: goto label_15e60c;
        case 0x15e610u: goto label_15e610;
        case 0x15e614u: goto label_15e614;
        case 0x15e618u: goto label_15e618;
        case 0x15e61cu: goto label_15e61c;
        case 0x15e620u: goto label_15e620;
        case 0x15e624u: goto label_15e624;
        case 0x15e628u: goto label_15e628;
        case 0x15e62cu: goto label_15e62c;
        case 0x15e630u: goto label_15e630;
        case 0x15e634u: goto label_15e634;
        case 0x15e638u: goto label_15e638;
        case 0x15e63cu: goto label_15e63c;
        case 0x15e640u: goto label_15e640;
        case 0x15e644u: goto label_15e644;
        case 0x15e648u: goto label_15e648;
        case 0x15e64cu: goto label_15e64c;
        case 0x15e650u: goto label_15e650;
        case 0x15e654u: goto label_15e654;
        case 0x15e658u: goto label_15e658;
        case 0x15e65cu: goto label_15e65c;
        case 0x15e660u: goto label_15e660;
        case 0x15e664u: goto label_15e664;
        case 0x15e668u: goto label_15e668;
        case 0x15e66cu: goto label_15e66c;
        case 0x15e670u: goto label_15e670;
        case 0x15e674u: goto label_15e674;
        case 0x15e678u: goto label_15e678;
        case 0x15e67cu: goto label_15e67c;
        case 0x15e680u: goto label_15e680;
        case 0x15e684u: goto label_15e684;
        case 0x15e688u: goto label_15e688;
        case 0x15e68cu: goto label_15e68c;
        case 0x15e690u: goto label_15e690;
        case 0x15e694u: goto label_15e694;
        case 0x15e698u: goto label_15e698;
        case 0x15e69cu: goto label_15e69c;
        case 0x15e6a0u: goto label_15e6a0;
        case 0x15e6a4u: goto label_15e6a4;
        case 0x15e6a8u: goto label_15e6a8;
        case 0x15e6acu: goto label_15e6ac;
        case 0x15e6b0u: goto label_15e6b0;
        case 0x15e6b4u: goto label_15e6b4;
        case 0x15e6b8u: goto label_15e6b8;
        case 0x15e6bcu: goto label_15e6bc;
        case 0x15e6c0u: goto label_15e6c0;
        case 0x15e6c4u: goto label_15e6c4;
        case 0x15e6c8u: goto label_15e6c8;
        case 0x15e6ccu: goto label_15e6cc;
        case 0x15e6d0u: goto label_15e6d0;
        case 0x15e6d4u: goto label_15e6d4;
        case 0x15e6d8u: goto label_15e6d8;
        case 0x15e6dcu: goto label_15e6dc;
        case 0x15e6e0u: goto label_15e6e0;
        case 0x15e6e4u: goto label_15e6e4;
        case 0x15e6e8u: goto label_15e6e8;
        case 0x15e6ecu: goto label_15e6ec;
        case 0x15e6f0u: goto label_15e6f0;
        case 0x15e6f4u: goto label_15e6f4;
        case 0x15e6f8u: goto label_15e6f8;
        case 0x15e6fcu: goto label_15e6fc;
        case 0x15e700u: goto label_15e700;
        case 0x15e704u: goto label_15e704;
        case 0x15e708u: goto label_15e708;
        case 0x15e70cu: goto label_15e70c;
        case 0x15e710u: goto label_15e710;
        case 0x15e714u: goto label_15e714;
        case 0x15e718u: goto label_15e718;
        case 0x15e71cu: goto label_15e71c;
        case 0x15e720u: goto label_15e720;
        case 0x15e724u: goto label_15e724;
        case 0x15e728u: goto label_15e728;
        case 0x15e72cu: goto label_15e72c;
        case 0x15e730u: goto label_15e730;
        case 0x15e734u: goto label_15e734;
        case 0x15e738u: goto label_15e738;
        case 0x15e73cu: goto label_15e73c;
        case 0x15e740u: goto label_15e740;
        case 0x15e744u: goto label_15e744;
        case 0x15e748u: goto label_15e748;
        case 0x15e74cu: goto label_15e74c;
        case 0x15e750u: goto label_15e750;
        case 0x15e754u: goto label_15e754;
        case 0x15e758u: goto label_15e758;
        case 0x15e75cu: goto label_15e75c;
        case 0x15e760u: goto label_15e760;
        case 0x15e764u: goto label_15e764;
        case 0x15e768u: goto label_15e768;
        case 0x15e76cu: goto label_15e76c;
        case 0x15e770u: goto label_15e770;
        case 0x15e774u: goto label_15e774;
        case 0x15e778u: goto label_15e778;
        case 0x15e77cu: goto label_15e77c;
        case 0x15e780u: goto label_15e780;
        case 0x15e784u: goto label_15e784;
        case 0x15e788u: goto label_15e788;
        case 0x15e78cu: goto label_15e78c;
        case 0x15e790u: goto label_15e790;
        case 0x15e794u: goto label_15e794;
        case 0x15e798u: goto label_15e798;
        case 0x15e79cu: goto label_15e79c;
        case 0x15e7a0u: goto label_15e7a0;
        case 0x15e7a4u: goto label_15e7a4;
        case 0x15e7a8u: goto label_15e7a8;
        case 0x15e7acu: goto label_15e7ac;
        case 0x15e7b0u: goto label_15e7b0;
        case 0x15e7b4u: goto label_15e7b4;
        case 0x15e7b8u: goto label_15e7b8;
        case 0x15e7bcu: goto label_15e7bc;
        case 0x15e7c0u: goto label_15e7c0;
        case 0x15e7c4u: goto label_15e7c4;
        case 0x15e7c8u: goto label_15e7c8;
        case 0x15e7ccu: goto label_15e7cc;
        case 0x15e7d0u: goto label_15e7d0;
        case 0x15e7d4u: goto label_15e7d4;
        case 0x15e7d8u: goto label_15e7d8;
        case 0x15e7dcu: goto label_15e7dc;
        case 0x15e7e0u: goto label_15e7e0;
        case 0x15e7e4u: goto label_15e7e4;
        case 0x15e7e8u: goto label_15e7e8;
        case 0x15e7ecu: goto label_15e7ec;
        case 0x15e7f0u: goto label_15e7f0;
        case 0x15e7f4u: goto label_15e7f4;
        case 0x15e7f8u: goto label_15e7f8;
        case 0x15e7fcu: goto label_15e7fc;
        case 0x15e800u: goto label_15e800;
        case 0x15e804u: goto label_15e804;
        case 0x15e808u: goto label_15e808;
        case 0x15e80cu: goto label_15e80c;
        case 0x15e810u: goto label_15e810;
        case 0x15e814u: goto label_15e814;
        case 0x15e818u: goto label_15e818;
        case 0x15e81cu: goto label_15e81c;
        case 0x15e820u: goto label_15e820;
        case 0x15e824u: goto label_15e824;
        case 0x15e828u: goto label_15e828;
        case 0x15e82cu: goto label_15e82c;
        case 0x15e830u: goto label_15e830;
        case 0x15e834u: goto label_15e834;
        case 0x15e838u: goto label_15e838;
        case 0x15e83cu: goto label_15e83c;
        case 0x15e840u: goto label_15e840;
        case 0x15e844u: goto label_15e844;
        case 0x15e848u: goto label_15e848;
        case 0x15e84cu: goto label_15e84c;
        case 0x15e850u: goto label_15e850;
        case 0x15e854u: goto label_15e854;
        case 0x15e858u: goto label_15e858;
        case 0x15e85cu: goto label_15e85c;
        case 0x15e860u: goto label_15e860;
        case 0x15e864u: goto label_15e864;
        case 0x15e868u: goto label_15e868;
        case 0x15e86cu: goto label_15e86c;
        case 0x15e870u: goto label_15e870;
        case 0x15e874u: goto label_15e874;
        case 0x15e878u: goto label_15e878;
        case 0x15e87cu: goto label_15e87c;
        case 0x15e880u: goto label_15e880;
        case 0x15e884u: goto label_15e884;
        case 0x15e888u: goto label_15e888;
        case 0x15e88cu: goto label_15e88c;
        case 0x15e890u: goto label_15e890;
        case 0x15e894u: goto label_15e894;
        case 0x15e898u: goto label_15e898;
        case 0x15e89cu: goto label_15e89c;
        case 0x15e8a0u: goto label_15e8a0;
        case 0x15e8a4u: goto label_15e8a4;
        case 0x15e8a8u: goto label_15e8a8;
        case 0x15e8acu: goto label_15e8ac;
        case 0x15e8b0u: goto label_15e8b0;
        case 0x15e8b4u: goto label_15e8b4;
        case 0x15e8b8u: goto label_15e8b8;
        case 0x15e8bcu: goto label_15e8bc;
        case 0x15e8c0u: goto label_15e8c0;
        case 0x15e8c4u: goto label_15e8c4;
        case 0x15e8c8u: goto label_15e8c8;
        case 0x15e8ccu: goto label_15e8cc;
        case 0x15e8d0u: goto label_15e8d0;
        case 0x15e8d4u: goto label_15e8d4;
        case 0x15e8d8u: goto label_15e8d8;
        case 0x15e8dcu: goto label_15e8dc;
        case 0x15e8e0u: goto label_15e8e0;
        case 0x15e8e4u: goto label_15e8e4;
        case 0x15e8e8u: goto label_15e8e8;
        case 0x15e8ecu: goto label_15e8ec;
        case 0x15e8f0u: goto label_15e8f0;
        case 0x15e8f4u: goto label_15e8f4;
        case 0x15e8f8u: goto label_15e8f8;
        case 0x15e8fcu: goto label_15e8fc;
        case 0x15e900u: goto label_15e900;
        case 0x15e904u: goto label_15e904;
        case 0x15e908u: goto label_15e908;
        case 0x15e90cu: goto label_15e90c;
        case 0x15e910u: goto label_15e910;
        case 0x15e914u: goto label_15e914;
        case 0x15e918u: goto label_15e918;
        case 0x15e91cu: goto label_15e91c;
        case 0x15e920u: goto label_15e920;
        case 0x15e924u: goto label_15e924;
        case 0x15e928u: goto label_15e928;
        case 0x15e92cu: goto label_15e92c;
        case 0x15e930u: goto label_15e930;
        case 0x15e934u: goto label_15e934;
        case 0x15e938u: goto label_15e938;
        case 0x15e93cu: goto label_15e93c;
        case 0x15e940u: goto label_15e940;
        case 0x15e944u: goto label_15e944;
        case 0x15e948u: goto label_15e948;
        case 0x15e94cu: goto label_15e94c;
        case 0x15e950u: goto label_15e950;
        case 0x15e954u: goto label_15e954;
        case 0x15e958u: goto label_15e958;
        case 0x15e95cu: goto label_15e95c;
        case 0x15e960u: goto label_15e960;
        case 0x15e964u: goto label_15e964;
        case 0x15e968u: goto label_15e968;
        case 0x15e96cu: goto label_15e96c;
        case 0x15e970u: goto label_15e970;
        case 0x15e974u: goto label_15e974;
        case 0x15e978u: goto label_15e978;
        case 0x15e97cu: goto label_15e97c;
        case 0x15e980u: goto label_15e980;
        case 0x15e984u: goto label_15e984;
        case 0x15e988u: goto label_15e988;
        case 0x15e98cu: goto label_15e98c;
        case 0x15e990u: goto label_15e990;
        case 0x15e994u: goto label_15e994;
        case 0x15e998u: goto label_15e998;
        case 0x15e99cu: goto label_15e99c;
        case 0x15e9a0u: goto label_15e9a0;
        case 0x15e9a4u: goto label_15e9a4;
        case 0x15e9a8u: goto label_15e9a8;
        case 0x15e9acu: goto label_15e9ac;
        case 0x15e9b0u: goto label_15e9b0;
        case 0x15e9b4u: goto label_15e9b4;
        case 0x15e9b8u: goto label_15e9b8;
        case 0x15e9bcu: goto label_15e9bc;
        case 0x15e9c0u: goto label_15e9c0;
        case 0x15e9c4u: goto label_15e9c4;
        case 0x15e9c8u: goto label_15e9c8;
        case 0x15e9ccu: goto label_15e9cc;
        case 0x15e9d0u: goto label_15e9d0;
        case 0x15e9d4u: goto label_15e9d4;
        case 0x15e9d8u: goto label_15e9d8;
        case 0x15e9dcu: goto label_15e9dc;
        case 0x15e9e0u: goto label_15e9e0;
        case 0x15e9e4u: goto label_15e9e4;
        case 0x15e9e8u: goto label_15e9e8;
        case 0x15e9ecu: goto label_15e9ec;
        case 0x15e9f0u: goto label_15e9f0;
        case 0x15e9f4u: goto label_15e9f4;
        case 0x15e9f8u: goto label_15e9f8;
        case 0x15e9fcu: goto label_15e9fc;
        case 0x15ea00u: goto label_15ea00;
        case 0x15ea04u: goto label_15ea04;
        case 0x15ea08u: goto label_15ea08;
        case 0x15ea0cu: goto label_15ea0c;
        case 0x15ea10u: goto label_15ea10;
        case 0x15ea14u: goto label_15ea14;
        case 0x15ea18u: goto label_15ea18;
        case 0x15ea1cu: goto label_15ea1c;
        case 0x15ea20u: goto label_15ea20;
        case 0x15ea24u: goto label_15ea24;
        case 0x15ea28u: goto label_15ea28;
        case 0x15ea2cu: goto label_15ea2c;
        case 0x15ea30u: goto label_15ea30;
        case 0x15ea34u: goto label_15ea34;
        case 0x15ea38u: goto label_15ea38;
        case 0x15ea3cu: goto label_15ea3c;
        case 0x15ea40u: goto label_15ea40;
        case 0x15ea44u: goto label_15ea44;
        case 0x15ea48u: goto label_15ea48;
        case 0x15ea4cu: goto label_15ea4c;
        case 0x15ea50u: goto label_15ea50;
        case 0x15ea54u: goto label_15ea54;
        case 0x15ea58u: goto label_15ea58;
        case 0x15ea5cu: goto label_15ea5c;
        case 0x15ea60u: goto label_15ea60;
        case 0x15ea64u: goto label_15ea64;
        case 0x15ea68u: goto label_15ea68;
        case 0x15ea6cu: goto label_15ea6c;
        case 0x15ea70u: goto label_15ea70;
        case 0x15ea74u: goto label_15ea74;
        case 0x15ea78u: goto label_15ea78;
        case 0x15ea7cu: goto label_15ea7c;
        case 0x15ea80u: goto label_15ea80;
        case 0x15ea84u: goto label_15ea84;
        case 0x15ea88u: goto label_15ea88;
        case 0x15ea8cu: goto label_15ea8c;
        case 0x15ea90u: goto label_15ea90;
        case 0x15ea94u: goto label_15ea94;
        case 0x15ea98u: goto label_15ea98;
        case 0x15ea9cu: goto label_15ea9c;
        case 0x15eaa0u: goto label_15eaa0;
        case 0x15eaa4u: goto label_15eaa4;
        case 0x15eaa8u: goto label_15eaa8;
        case 0x15eaacu: goto label_15eaac;
        case 0x15eab0u: goto label_15eab0;
        case 0x15eab4u: goto label_15eab4;
        case 0x15eab8u: goto label_15eab8;
        case 0x15eabcu: goto label_15eabc;
        case 0x15eac0u: goto label_15eac0;
        case 0x15eac4u: goto label_15eac4;
        case 0x15eac8u: goto label_15eac8;
        case 0x15eaccu: goto label_15eacc;
        case 0x15ead0u: goto label_15ead0;
        case 0x15ead4u: goto label_15ead4;
        case 0x15ead8u: goto label_15ead8;
        case 0x15eadcu: goto label_15eadc;
        case 0x15eae0u: goto label_15eae0;
        case 0x15eae4u: goto label_15eae4;
        case 0x15eae8u: goto label_15eae8;
        case 0x15eaecu: goto label_15eaec;
        case 0x15eaf0u: goto label_15eaf0;
        case 0x15eaf4u: goto label_15eaf4;
        case 0x15eaf8u: goto label_15eaf8;
        case 0x15eafcu: goto label_15eafc;
        case 0x15eb00u: goto label_15eb00;
        case 0x15eb04u: goto label_15eb04;
        case 0x15eb08u: goto label_15eb08;
        case 0x15eb0cu: goto label_15eb0c;
        case 0x15eb10u: goto label_15eb10;
        case 0x15eb14u: goto label_15eb14;
        case 0x15eb18u: goto label_15eb18;
        case 0x15eb1cu: goto label_15eb1c;
        case 0x15eb20u: goto label_15eb20;
        case 0x15eb24u: goto label_15eb24;
        case 0x15eb28u: goto label_15eb28;
        case 0x15eb2cu: goto label_15eb2c;
        case 0x15eb30u: goto label_15eb30;
        case 0x15eb34u: goto label_15eb34;
        case 0x15eb38u: goto label_15eb38;
        case 0x15eb3cu: goto label_15eb3c;
        case 0x15eb40u: goto label_15eb40;
        case 0x15eb44u: goto label_15eb44;
        case 0x15eb48u: goto label_15eb48;
        case 0x15eb4cu: goto label_15eb4c;
        case 0x15eb50u: goto label_15eb50;
        case 0x15eb54u: goto label_15eb54;
        case 0x15eb58u: goto label_15eb58;
        case 0x15eb5cu: goto label_15eb5c;
        case 0x15eb60u: goto label_15eb60;
        case 0x15eb64u: goto label_15eb64;
        case 0x15eb68u: goto label_15eb68;
        case 0x15eb6cu: goto label_15eb6c;
        case 0x15eb70u: goto label_15eb70;
        case 0x15eb74u: goto label_15eb74;
        case 0x15eb78u: goto label_15eb78;
        case 0x15eb7cu: goto label_15eb7c;
        case 0x15eb80u: goto label_15eb80;
        case 0x15eb84u: goto label_15eb84;
        case 0x15eb88u: goto label_15eb88;
        case 0x15eb8cu: goto label_15eb8c;
        case 0x15eb90u: goto label_15eb90;
        case 0x15eb94u: goto label_15eb94;
        case 0x15eb98u: goto label_15eb98;
        case 0x15eb9cu: goto label_15eb9c;
        case 0x15eba0u: goto label_15eba0;
        case 0x15eba4u: goto label_15eba4;
        case 0x15eba8u: goto label_15eba8;
        case 0x15ebacu: goto label_15ebac;
        case 0x15ebb0u: goto label_15ebb0;
        case 0x15ebb4u: goto label_15ebb4;
        case 0x15ebb8u: goto label_15ebb8;
        case 0x15ebbcu: goto label_15ebbc;
        case 0x15ebc0u: goto label_15ebc0;
        case 0x15ebc4u: goto label_15ebc4;
        case 0x15ebc8u: goto label_15ebc8;
        case 0x15ebccu: goto label_15ebcc;
        case 0x15ebd0u: goto label_15ebd0;
        case 0x15ebd4u: goto label_15ebd4;
        case 0x15ebd8u: goto label_15ebd8;
        case 0x15ebdcu: goto label_15ebdc;
        case 0x15ebe0u: goto label_15ebe0;
        case 0x15ebe4u: goto label_15ebe4;
        case 0x15ebe8u: goto label_15ebe8;
        case 0x15ebecu: goto label_15ebec;
        case 0x15ebf0u: goto label_15ebf0;
        case 0x15ebf4u: goto label_15ebf4;
        case 0x15ebf8u: goto label_15ebf8;
        case 0x15ebfcu: goto label_15ebfc;
        case 0x15ec00u: goto label_15ec00;
        case 0x15ec04u: goto label_15ec04;
        case 0x15ec08u: goto label_15ec08;
        case 0x15ec0cu: goto label_15ec0c;
        case 0x15ec10u: goto label_15ec10;
        case 0x15ec14u: goto label_15ec14;
        case 0x15ec18u: goto label_15ec18;
        case 0x15ec1cu: goto label_15ec1c;
        case 0x15ec20u: goto label_15ec20;
        case 0x15ec24u: goto label_15ec24;
        case 0x15ec28u: goto label_15ec28;
        case 0x15ec2cu: goto label_15ec2c;
        case 0x15ec30u: goto label_15ec30;
        case 0x15ec34u: goto label_15ec34;
        case 0x15ec38u: goto label_15ec38;
        case 0x15ec3cu: goto label_15ec3c;
        case 0x15ec40u: goto label_15ec40;
        case 0x15ec44u: goto label_15ec44;
        case 0x15ec48u: goto label_15ec48;
        case 0x15ec4cu: goto label_15ec4c;
        case 0x15ec50u: goto label_15ec50;
        case 0x15ec54u: goto label_15ec54;
        case 0x15ec58u: goto label_15ec58;
        case 0x15ec5cu: goto label_15ec5c;
        case 0x15ec60u: goto label_15ec60;
        case 0x15ec64u: goto label_15ec64;
        case 0x15ec68u: goto label_15ec68;
        case 0x15ec6cu: goto label_15ec6c;
        case 0x15ec70u: goto label_15ec70;
        case 0x15ec74u: goto label_15ec74;
        case 0x15ec78u: goto label_15ec78;
        case 0x15ec7cu: goto label_15ec7c;
        case 0x15ec80u: goto label_15ec80;
        case 0x15ec84u: goto label_15ec84;
        case 0x15ec88u: goto label_15ec88;
        case 0x15ec8cu: goto label_15ec8c;
        case 0x15ec90u: goto label_15ec90;
        case 0x15ec94u: goto label_15ec94;
        case 0x15ec98u: goto label_15ec98;
        case 0x15ec9cu: goto label_15ec9c;
        case 0x15eca0u: goto label_15eca0;
        case 0x15eca4u: goto label_15eca4;
        case 0x15eca8u: goto label_15eca8;
        case 0x15ecacu: goto label_15ecac;
        case 0x15ecb0u: goto label_15ecb0;
        case 0x15ecb4u: goto label_15ecb4;
        case 0x15ecb8u: goto label_15ecb8;
        case 0x15ecbcu: goto label_15ecbc;
        case 0x15ecc0u: goto label_15ecc0;
        case 0x15ecc4u: goto label_15ecc4;
        case 0x15ecc8u: goto label_15ecc8;
        case 0x15ecccu: goto label_15eccc;
        case 0x15ecd0u: goto label_15ecd0;
        case 0x15ecd4u: goto label_15ecd4;
        case 0x15ecd8u: goto label_15ecd8;
        case 0x15ecdcu: goto label_15ecdc;
        case 0x15ece0u: goto label_15ece0;
        case 0x15ece4u: goto label_15ece4;
        case 0x15ece8u: goto label_15ece8;
        case 0x15ececu: goto label_15ecec;
        case 0x15ecf0u: goto label_15ecf0;
        case 0x15ecf4u: goto label_15ecf4;
        case 0x15ecf8u: goto label_15ecf8;
        case 0x15ecfcu: goto label_15ecfc;
        case 0x15ed00u: goto label_15ed00;
        case 0x15ed04u: goto label_15ed04;
        case 0x15ed08u: goto label_15ed08;
        case 0x15ed0cu: goto label_15ed0c;
        case 0x15ed10u: goto label_15ed10;
        case 0x15ed14u: goto label_15ed14;
        case 0x15ed18u: goto label_15ed18;
        case 0x15ed1cu: goto label_15ed1c;
        case 0x15ed20u: goto label_15ed20;
        case 0x15ed24u: goto label_15ed24;
        case 0x15ed28u: goto label_15ed28;
        case 0x15ed2cu: goto label_15ed2c;
        case 0x15ed30u: goto label_15ed30;
        case 0x15ed34u: goto label_15ed34;
        case 0x15ed38u: goto label_15ed38;
        case 0x15ed3cu: goto label_15ed3c;
        case 0x15ed40u: goto label_15ed40;
        case 0x15ed44u: goto label_15ed44;
        case 0x15ed48u: goto label_15ed48;
        case 0x15ed4cu: goto label_15ed4c;
        case 0x15ed50u: goto label_15ed50;
        case 0x15ed54u: goto label_15ed54;
        case 0x15ed58u: goto label_15ed58;
        case 0x15ed5cu: goto label_15ed5c;
        case 0x15ed60u: goto label_15ed60;
        case 0x15ed64u: goto label_15ed64;
        case 0x15ed68u: goto label_15ed68;
        case 0x15ed6cu: goto label_15ed6c;
        default: return;
    }

label_15e5a0:
    // 0x15e5a0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x15e5a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_15e5a4:
    // 0x15e5a4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x15e5a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_15e5a8:
    // 0x15e5a8: 0xc066d10  jal         func_19B440
label_15e5ac:
    if (ctx->pc == 0x15E5ACu) {
        ctx->pc = 0x15E5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E5A8u;
        // 0x15e5ac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E5B0u;
        goto label_15e5b0;
    }
    ctx->pc = 0x15E5A8u;
    SET_GPR_U32(ctx, 31, 0x15E5B0u);
    ctx->pc = 0x15E5ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E5A8u;
    // 0x15e5ac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B440u;
    { ctx->pc = 0x19b440; return; }
    ctx->pc = 0x15E5B0u;
label_15e5b0:
    // 0x15e5b0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x15e5b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_15e5b4:
    // 0x15e5b4: 0xc066d30  jal         func_19B4C0
label_15e5b8:
    if (ctx->pc == 0x15E5B8u) {
        ctx->pc = 0x15E5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E5B4u;
        // 0x15e5b8: 0x3c051400  lui         $a1, 0x1400 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)5120 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E5BCu;
        goto label_15e5bc;
    }
    ctx->pc = 0x15E5B4u;
    SET_GPR_U32(ctx, 31, 0x15E5BCu);
    ctx->pc = 0x15E5B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E5B4u;
    // 0x15e5b8: 0x3c051400  lui         $a1, 0x1400 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)5120 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B4C0u;
    { ctx->pc = 0x19b4c0; return; }
    ctx->pc = 0x15E5BCu;
label_15e5bc:
    // 0x15e5bc: 0xc066c46  jal         func_19B118
label_15e5c0:
    if (ctx->pc == 0x15E5C0u) {
        ctx->pc = 0x15E5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E5BCu;
        // 0x15e5c0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E5C4u;
        goto label_15e5c4;
    }
    ctx->pc = 0x15E5BCu;
    SET_GPR_U32(ctx, 31, 0x15E5C4u);
    ctx->pc = 0x15E5C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E5BCu;
    // 0x15e5c0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B118u;
    { ctx->pc = 0x19b118; return; }
    ctx->pc = 0x15E5C4u;
label_15e5c4:
    // 0x15e5c4: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x15e5c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_15e5c8:
    // 0x15e5c8: 0x8c7200c0  lw          $s2, 0xC0($v1)
    ctx->pc = 0x15e5c8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 192)));
label_15e5cc:
    // 0x15e5cc: 0x1000000e  b           . + 4 + (0xE << 2)
label_15e5d0:
    if (ctx->pc == 0x15E5D0u) {
        ctx->pc = 0x15E5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E5CCu;
        // 0x15e5d0: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E5D4u;
        goto label_15e5d4;
    }
    ctx->pc = 0x15E5CCu;
    {
        const bool branch_taken_0x15e5cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E5CCu;
        // 0x15e5d0: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e5cc) {
            ctx->pc = 0x15E608u;
            goto label_15e608;
        }
    }
    ctx->pc = 0x15E5D4u;
label_15e5d4:
    // 0x15e5d4: 0x0  nop
    ctx->pc = 0x15e5d4u;
    // NOP
label_15e5d8:
    // 0x15e5d8: 0x0  nop
    ctx->pc = 0x15e5d8u;
    // NOP
label_15e5dc:
    // 0x15e5dc: 0x8e460004  lw          $a2, 0x4($s2)
    ctx->pc = 0x15e5dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_15e5e0:
    // 0x15e5e0: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_15e5e4:
    if (ctx->pc == 0x15E5E4u) {
        ctx->pc = 0x15E5E8u;
        goto label_15e5e8;
    }
    ctx->pc = 0x15E5E0u;
    {
        const bool branch_taken_0x15e5e0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x15e5e0) {
            ctx->pc = 0x15E600u;
            goto label_15e600;
        }
    }
    ctx->pc = 0x15E5E8u;
label_15e5e8:
    // 0x15e5e8: 0x8e450008  lw          $a1, 0x8($s2)
    ctx->pc = 0x15e5e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_15e5ec:
    // 0x15e5ec: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x15e5ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_15e5f0:
    // 0x15e5f0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x15e5f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15e5f4:
    // 0x15e5f4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x15e5f4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15e5f8:
    // 0x15e5f8: 0xc066c72  jal         func_19B1C8
label_15e5fc:
    if (ctx->pc == 0x15E5FCu) {
        ctx->pc = 0x15E5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E5F8u;
        // 0x15e5fc: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E600u;
        goto label_15e600;
    }
    ctx->pc = 0x15E5F8u;
    SET_GPR_U32(ctx, 31, 0x15E600u);
    ctx->pc = 0x15E5FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E5F8u;
    // 0x15e5fc: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    { ctx->pc = 0x19b1c8; return; }
    ctx->pc = 0x15E600u;
label_15e600:
    // 0x15e600: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x15e600u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_15e604:
    // 0x15e604: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x15e604u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_15e608:
    // 0x15e608: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x15e608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_15e60c:
    // 0x15e60c: 0x806300be  lb          $v1, 0xBE($v1)
    ctx->pc = 0x15e60cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 190)));
label_15e610:
    // 0x15e610: 0x2c3182a  slt         $v1, $s6, $v1
    ctx->pc = 0x15e610u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_15e614:
    // 0x15e614: 0x1460ffef  bnez        $v1, . + 4 + (-0x11 << 2)
label_15e618:
    if (ctx->pc == 0x15E618u) {
        ctx->pc = 0x15E61Cu;
        goto label_15e61c;
    }
    ctx->pc = 0x15E614u;
    {
        const bool branch_taken_0x15e614 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x15e614) {
            ctx->pc = 0x15E5D4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15e5d4;
        }
    }
    ctx->pc = 0x15E61Cu;
label_15e61c:
    // 0x15e61c: 0x26b50003  addiu       $s5, $s5, 0x3
    ctx->pc = 0x15e61cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 3));
label_15e620:
    // 0x15e620: 0x2aa3000d  slti        $v1, $s5, 0xD
    ctx->pc = 0x15e620u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)13) ? 1 : 0);
label_15e624:
    // 0x15e624: 0x1460ffb2  bnez        $v1, . + 4 + (-0x4E << 2)
label_15e628:
    if (ctx->pc == 0x15E628u) {
        ctx->pc = 0x15E628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E624u;
        // 0x15e628: 0x2b41821  addu        $v1, $s5, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E62Cu;
        goto label_15e62c;
    }
    ctx->pc = 0x15E624u;
    {
        const bool branch_taken_0x15e624 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15E628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E624u;
        // 0x15e628: 0x2b41821  addu        $v1, $s5, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e624) {
            ctx->pc = 0x15E4F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x15e4f0; return; }
        }
    }
    ctx->pc = 0x15E62Cu;
label_15e62c:
    // 0x15e62c: 0x0  nop
    ctx->pc = 0x15e62cu;
    // NOP
label_15e630:
    // 0x15e630: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x15e630u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_15e634:
    // 0x15e634: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x15e634u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_15e638:
    // 0x15e638: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x15e638u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_15e63c:
    // 0x15e63c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x15e63cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_15e640:
    // 0x15e640: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x15e640u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_15e644:
    // 0x15e644: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x15e644u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_15e648:
    // 0x15e648: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15e648u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_15e64c:
    // 0x15e64c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15e64cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_15e650:
    // 0x15e650: 0x3e00008  jr          $ra
label_15e654:
    if (ctx->pc == 0x15E654u) {
        ctx->pc = 0x15E654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E650u;
        // 0x15e654: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E658u;
        goto label_15e658;
    }
    ctx->pc = 0x15E650u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15E654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E650u;
        // 0x15e654: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15E650u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15E658u;
label_15e658:
    // 0x15e658: 0x0  nop
    ctx->pc = 0x15e658u;
    // NOP
label_15e65c:
    // 0x15e65c: 0x0  nop
    ctx->pc = 0x15e65cu;
    // NOP
label_15e660:
    // 0x15e660: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x15e660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_15e664:
    // 0x15e664: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x15e664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_15e668:
    // 0x15e668: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x15e668u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_15e66c:
    // 0x15e66c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x15e66cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_15e670:
    // 0x15e670: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x15e670u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_15e674:
    // 0x15e674: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x15e674u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_15e678:
    // 0x15e678: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15e678u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_15e67c:
    // 0x15e67c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x15e67cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_15e680:
    // 0x15e680: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15e680u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_15e684:
    // 0x15e684: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x15e684u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_15e688:
    // 0x15e688: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x15e688u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_15e68c:
    // 0x15e68c: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x15e68cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_15e690:
    // 0x15e690: 0xaca00008  sw          $zero, 0x8($a1)
    ctx->pc = 0x15e690u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
label_15e694:
    // 0x15e694: 0xaca0000c  sw          $zero, 0xC($a1)
    ctx->pc = 0x15e694u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
label_15e698:
    // 0x15e698: 0x8cc30198  lw          $v1, 0x198($a2)
    ctx->pc = 0x15e698u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 408)));
label_15e69c:
    // 0x15e69c: 0x30622004  andi        $v0, $v1, 0x2004
    ctx->pc = 0x15e69cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8196);
label_15e6a0:
    // 0x15e6a0: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_15e6a4:
    if (ctx->pc == 0x15E6A4u) {
        ctx->pc = 0x15E6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E6A0u;
        // 0x15e6a4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E6A8u;
        goto label_15e6a8;
    }
    ctx->pc = 0x15E6A0u;
    {
        const bool branch_taken_0x15e6a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E6A0u;
        // 0x15e6a4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e6a0) {
            ctx->pc = 0x15E744u;
            goto label_15e744;
        }
    }
    ctx->pc = 0x15E6A8u;
label_15e6a8:
    // 0x15e6a8: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x15e6a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
label_15e6ac:
    // 0x15e6ac: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_15e6b0:
    if (ctx->pc == 0x15E6B0u) {
        ctx->pc = 0x15E6B4u;
        goto label_15e6b4;
    }
    ctx->pc = 0x15E6ACu;
    {
        const bool branch_taken_0x15e6ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15e6ac) {
            ctx->pc = 0x15E6BCu;
            goto label_15e6bc;
        }
    }
    ctx->pc = 0x15E6B4u;
label_15e6b4:
    // 0x15e6b4: 0x10000003  b           . + 4 + (0x3 << 2)
label_15e6b8:
    if (ctx->pc == 0x15E6B8u) {
        ctx->pc = 0x15E6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E6B4u;
        // 0x15e6b8: 0x86230200  lh          $v1, 0x200($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 512)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E6BCu;
        goto label_15e6bc;
    }
    ctx->pc = 0x15E6B4u;
    {
        const bool branch_taken_0x15e6b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E6B4u;
        // 0x15e6b8: 0x86230200  lh          $v1, 0x200($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 512)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e6b4) {
            ctx->pc = 0x15E6C4u;
            goto label_15e6c4;
        }
    }
    ctx->pc = 0x15E6BCu;
label_15e6bc:
    // 0x15e6bc: 0x8623027c  lh          $v1, 0x27C($s1)
    ctx->pc = 0x15e6bcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 636)));
label_15e6c0:
    // 0x15e6c0: 0x0  nop
    ctx->pc = 0x15e6c0u;
    // NOP
label_15e6c4:
    // 0x15e6c4: 0x24700014  addiu       $s0, $v1, 0x14
    ctx->pc = 0x15e6c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
label_15e6c8:
    // 0x15e6c8: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_15e6cc:
    if (ctx->pc == 0x15E6CCu) {
        ctx->pc = 0x15E6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E6C8u;
        // 0x15e6cc: 0x31143  sra         $v0, $v1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E6D0u;
        goto label_15e6d0;
    }
    ctx->pc = 0x15E6C8u;
    {
        const bool branch_taken_0x15e6c8 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x15E6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E6C8u;
        // 0x15e6cc: 0x31143  sra         $v0, $v1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e6c8) {
            ctx->pc = 0x15E6D8u;
            goto label_15e6d8;
        }
    }
    ctx->pc = 0x15E6D0u;
label_15e6d0:
    // 0x15e6d0: 0x2462001f  addiu       $v0, $v1, 0x1F
    ctx->pc = 0x15e6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 31));
label_15e6d4:
    // 0x15e6d4: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x15e6d4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
label_15e6d8:
    // 0x15e6d8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x15e6d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_15e6dc:
    // 0x15e6dc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_15e6e0:
    if (ctx->pc == 0x15E6E0u) {
        ctx->pc = 0x15E6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E6DCu;
        // 0x15e6e0: 0x3074001f  andi        $s4, $v1, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E6E4u;
        goto label_15e6e4;
    }
    ctx->pc = 0x15E6DCu;
    {
        const bool branch_taken_0x15e6dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E6DCu;
        // 0x15e6e0: 0x3074001f  andi        $s4, $v1, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e6dc) {
            ctx->pc = 0x15E6F0u;
            goto label_15e6f0;
        }
    }
    ctx->pc = 0x15E6E4u;
label_15e6e4:
    // 0x15e6e4: 0x3062001f  andi        $v0, $v1, 0x1F
    ctx->pc = 0x15e6e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
label_15e6e8:
    // 0x15e6e8: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x15e6e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_15e6ec:
    // 0x15e6ec: 0x62a023  subu        $s4, $v1, $v0
    ctx->pc = 0x15e6ecu;
    SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_15e6f0:
    // 0x15e6f0: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x15e6f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
label_15e6f4:
    // 0x15e6f4: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x15e6f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_15e6f8:
    // 0x15e6f8: 0x24a555b0  addiu       $a1, $a1, 0x55B0
    ctx->pc = 0x15e6f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21936));
label_15e6fc:
    // 0x15e6fc: 0xc066e08  jal         func_19B820
label_15e700:
    if (ctx->pc == 0x15E700u) {
        ctx->pc = 0x15E700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E6FCu;
        // 0x15e700: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E704u;
        goto label_15e704;
    }
    ctx->pc = 0x15E6FCu;
    SET_GPR_U32(ctx, 31, 0x15E704u);
    ctx->pc = 0x15E700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E6FCu;
    // 0x15e700: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B820u;
    { ctx->pc = 0x19b820; return; }
    ctx->pc = 0x15E704u;
label_15e704:
    // 0x15e704: 0x44940800  mtc1        $s4, $f1
    ctx->pc = 0x15e704u;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_15e708:
    // 0x15e708: 0x3c024200  lui         $v0, 0x4200
    ctx->pc = 0x15e708u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16896 << 16));
label_15e70c:
    // 0x15e70c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x15e70cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_15e710:
    // 0x15e710: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x15e710u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_15e714:
    // 0x15e714: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x15e714u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_15e718:
    // 0x15e718: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15e718u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_15e71c:
    // 0x15e71c: 0x0  nop
    ctx->pc = 0x15e71cu;
    // NOP
label_15e720:
    // 0x15e720: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x15e720u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[12] = ctx->f[1] / ctx->f[0];
label_15e724:
    // 0x15e724: 0x0  nop
    ctx->pc = 0x15e724u;
    // NOP
label_15e728:
    // 0x15e728: 0x0  nop
    ctx->pc = 0x15e728u;
    // NOP
label_15e72c:
    // 0x15e72c: 0xc066e14  jal         func_19B850
label_15e730:
    if (ctx->pc == 0x15E730u) {
        ctx->pc = 0x15E734u;
        goto label_15e734;
    }
    ctx->pc = 0x15E72Cu;
    SET_GPR_U32(ctx, 31, 0x15E734u);
    ctx->pc = 0x19B850u;
    { ctx->pc = 0x19b850; return; }
    ctx->pc = 0x15E734u;
label_15e734:
    // 0x15e734: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x15e734u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_15e738:
    // 0x15e738: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x15e738u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_15e73c:
    // 0x15e73c: 0xc066e02  jal         func_19B808
label_15e740:
    if (ctx->pc == 0x15E740u) {
        ctx->pc = 0x15E740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E73Cu;
        // 0x15e740: 0x27a60060  addiu       $a2, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E744u;
        goto label_15e744;
    }
    ctx->pc = 0x15E73Cu;
    SET_GPR_U32(ctx, 31, 0x15E744u);
    ctx->pc = 0x15E740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E73Cu;
    // 0x15e740: 0x27a60060  addiu       $a2, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B808u;
    { ctx->pc = 0x19b808; return; }
    ctx->pc = 0x15E744u;
label_15e744:
    // 0x15e744: 0x8e220198  lw          $v0, 0x198($s1)
    ctx->pc = 0x15e744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 408)));
label_15e748:
    // 0x15e748: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x15e748u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_15e74c:
    // 0x15e74c: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
label_15e750:
    if (ctx->pc == 0x15E750u) {
        ctx->pc = 0x15E754u;
        goto label_15e754;
    }
    ctx->pc = 0x15E74Cu;
    {
        const bool branch_taken_0x15e74c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15e74c) {
            ctx->pc = 0x15E7ECu;
            goto label_15e7ec;
        }
    }
    ctx->pc = 0x15E754u;
label_15e754:
    // 0x15e754: 0x1a000003  blez        $s0, . + 4 + (0x3 << 2)
label_15e758:
    if (ctx->pc == 0x15E758u) {
        ctx->pc = 0x15E758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E754u;
        // 0x15e758: 0x200182d  daddu       $v1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E75Cu;
        goto label_15e75c;
    }
    ctx->pc = 0x15E754u;
    {
        const bool branch_taken_0x15e754 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x15E758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E754u;
        // 0x15e758: 0x200182d  daddu       $v1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e754) {
            ctx->pc = 0x15E764u;
            goto label_15e764;
        }
    }
    ctx->pc = 0x15E75Cu;
label_15e75c:
    // 0x15e75c: 0x10000004  b           . + 4 + (0x4 << 2)
label_15e760:
    if (ctx->pc == 0x15E760u) {
        ctx->pc = 0x15E760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E75Cu;
        // 0x15e760: 0x31143  sra         $v0, $v1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E764u;
        goto label_15e764;
    }
    ctx->pc = 0x15E75Cu;
    {
        const bool branch_taken_0x15e75c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E75Cu;
        // 0x15e760: 0x31143  sra         $v0, $v1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e75c) {
            ctx->pc = 0x15E770u;
            goto label_15e770;
        }
    }
    ctx->pc = 0x15E764u;
label_15e764:
    // 0x15e764: 0x86230204  lh          $v1, 0x204($s1)
    ctx->pc = 0x15e764u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 516)));
label_15e768:
    // 0x15e768: 0x24700014  addiu       $s0, $v1, 0x14
    ctx->pc = 0x15e768u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
label_15e76c:
    // 0x15e76c: 0x31143  sra         $v0, $v1, 5
    ctx->pc = 0x15e76cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 5));
label_15e770:
    // 0x15e770: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_15e774:
    if (ctx->pc == 0x15E774u) {
        ctx->pc = 0x15E778u;
        goto label_15e778;
    }
    ctx->pc = 0x15E770u;
    {
        const bool branch_taken_0x15e770 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x15e770) {
            ctx->pc = 0x15E780u;
            goto label_15e780;
        }
    }
    ctx->pc = 0x15E778u;
label_15e778:
    // 0x15e778: 0x2462001f  addiu       $v0, $v1, 0x1F
    ctx->pc = 0x15e778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 31));
label_15e77c:
    // 0x15e77c: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x15e77cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
label_15e780:
    // 0x15e780: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x15e780u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_15e784:
    // 0x15e784: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_15e788:
    if (ctx->pc == 0x15E788u) {
        ctx->pc = 0x15E788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E784u;
        // 0x15e788: 0x3074001f  andi        $s4, $v1, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E78Cu;
        goto label_15e78c;
    }
    ctx->pc = 0x15E784u;
    {
        const bool branch_taken_0x15e784 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E784u;
        // 0x15e788: 0x3074001f  andi        $s4, $v1, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e784) {
            ctx->pc = 0x15E798u;
            goto label_15e798;
        }
    }
    ctx->pc = 0x15E78Cu;
label_15e78c:
    // 0x15e78c: 0x3062001f  andi        $v0, $v1, 0x1F
    ctx->pc = 0x15e78cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
label_15e790:
    // 0x15e790: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x15e790u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_15e794:
    // 0x15e794: 0x62a023  subu        $s4, $v1, $v0
    ctx->pc = 0x15e794u;
    SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_15e798:
    // 0x15e798: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x15e798u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
label_15e79c:
    // 0x15e79c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x15e79cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_15e7a0:
    // 0x15e7a0: 0x24a555c0  addiu       $a1, $a1, 0x55C0
    ctx->pc = 0x15e7a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21952));
label_15e7a4:
    // 0x15e7a4: 0xc066e08  jal         func_19B820
label_15e7a8:
    if (ctx->pc == 0x15E7A8u) {
        ctx->pc = 0x15E7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E7A4u;
        // 0x15e7a8: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E7ACu;
        goto label_15e7ac;
    }
    ctx->pc = 0x15E7A4u;
    SET_GPR_U32(ctx, 31, 0x15E7ACu);
    ctx->pc = 0x15E7A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E7A4u;
    // 0x15e7a8: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B820u;
    { ctx->pc = 0x19b820; return; }
    ctx->pc = 0x15E7ACu;
label_15e7ac:
    // 0x15e7ac: 0x44940800  mtc1        $s4, $f1
    ctx->pc = 0x15e7acu;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_15e7b0:
    // 0x15e7b0: 0x3c024200  lui         $v0, 0x4200
    ctx->pc = 0x15e7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16896 << 16));
label_15e7b4:
    // 0x15e7b4: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x15e7b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_15e7b8:
    // 0x15e7b8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x15e7b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_15e7bc:
    // 0x15e7bc: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x15e7bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_15e7c0:
    // 0x15e7c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15e7c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_15e7c4:
    // 0x15e7c4: 0x0  nop
    ctx->pc = 0x15e7c4u;
    // NOP
label_15e7c8:
    // 0x15e7c8: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x15e7c8u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[12] = ctx->f[1] / ctx->f[0];
label_15e7cc:
    // 0x15e7cc: 0x0  nop
    ctx->pc = 0x15e7ccu;
    // NOP
label_15e7d0:
    // 0x15e7d0: 0x0  nop
    ctx->pc = 0x15e7d0u;
    // NOP
label_15e7d4:
    // 0x15e7d4: 0xc066e14  jal         func_19B850
label_15e7d8:
    if (ctx->pc == 0x15E7D8u) {
        ctx->pc = 0x15E7DCu;
        goto label_15e7dc;
    }
    ctx->pc = 0x15E7D4u;
    SET_GPR_U32(ctx, 31, 0x15E7DCu);
    ctx->pc = 0x19B850u;
    { ctx->pc = 0x19b850; return; }
    ctx->pc = 0x15E7DCu;
label_15e7dc:
    // 0x15e7dc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x15e7dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_15e7e0:
    // 0x15e7e0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x15e7e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_15e7e4:
    // 0x15e7e4: 0xc066e02  jal         func_19B808
label_15e7e8:
    if (ctx->pc == 0x15E7E8u) {
        ctx->pc = 0x15E7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E7E4u;
        // 0x15e7e8: 0x27a60060  addiu       $a2, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E7ECu;
        goto label_15e7ec;
    }
    ctx->pc = 0x15E7E4u;
    SET_GPR_U32(ctx, 31, 0x15E7ECu);
    ctx->pc = 0x15E7E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E7E4u;
    // 0x15e7e8: 0x27a60060  addiu       $a2, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B808u;
    { ctx->pc = 0x19b808; return; }
    ctx->pc = 0x15E7ECu;
label_15e7ec:
    // 0x15e7ec: 0x8e220198  lw          $v0, 0x198($s1)
    ctx->pc = 0x15e7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 408)));
label_15e7f0:
    // 0x15e7f0: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x15e7f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_15e7f4:
    // 0x15e7f4: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
label_15e7f8:
    if (ctx->pc == 0x15E7F8u) {
        ctx->pc = 0x15E7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E7F4u;
        // 0x15e7f8: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E7FCu;
        goto label_15e7fc;
    }
    ctx->pc = 0x15E7F4u;
    {
        const bool branch_taken_0x15e7f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E7F4u;
        // 0x15e7f8: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e7f4) {
            ctx->pc = 0x15E8A0u;
            goto label_15e8a0;
        }
    }
    ctx->pc = 0x15E7FCu;
label_15e7fc:
    // 0x15e7fc: 0x1a000003  blez        $s0, . + 4 + (0x3 << 2)
label_15e800:
    if (ctx->pc == 0x15E800u) {
        ctx->pc = 0x15E804u;
        goto label_15e804;
    }
    ctx->pc = 0x15E7FCu;
    {
        const bool branch_taken_0x15e7fc = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x15e7fc) {
            ctx->pc = 0x15E80Cu;
            goto label_15e80c;
        }
    }
    ctx->pc = 0x15E804u;
label_15e804:
    // 0x15e804: 0x10000004  b           . + 4 + (0x4 << 2)
label_15e808:
    if (ctx->pc == 0x15E808u) {
        ctx->pc = 0x15E808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E804u;
        // 0x15e808: 0x101143  sra         $v0, $s0, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 16), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E80Cu;
        goto label_15e80c;
    }
    ctx->pc = 0x15E804u;
    {
        const bool branch_taken_0x15e804 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E804u;
        // 0x15e808: 0x101143  sra         $v0, $s0, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 16), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e804) {
            ctx->pc = 0x15E818u;
            goto label_15e818;
        }
    }
    ctx->pc = 0x15E80Cu;
label_15e80c:
    // 0x15e80c: 0x86300208  lh          $s0, 0x208($s1)
    ctx->pc = 0x15e80cu;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 520)));
label_15e810:
    // 0x15e810: 0x0  nop
    ctx->pc = 0x15e810u;
    // NOP
label_15e814:
    // 0x15e814: 0x101143  sra         $v0, $s0, 5
    ctx->pc = 0x15e814u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 16), 5));
label_15e818:
    // 0x15e818: 0x6010003  bgez        $s0, . + 4 + (0x3 << 2)
label_15e81c:
    if (ctx->pc == 0x15E81Cu) {
        ctx->pc = 0x15E820u;
        goto label_15e820;
    }
    ctx->pc = 0x15E818u;
    {
        const bool branch_taken_0x15e818 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x15e818) {
            ctx->pc = 0x15E828u;
            goto label_15e828;
        }
    }
    ctx->pc = 0x15E820u;
label_15e820:
    // 0x15e820: 0x2602001f  addiu       $v0, $s0, 0x1F
    ctx->pc = 0x15e820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 31));
label_15e824:
    // 0x15e824: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x15e824u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
label_15e828:
    // 0x15e828: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x15e828u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_15e82c:
    // 0x15e82c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_15e830:
    if (ctx->pc == 0x15E830u) {
        ctx->pc = 0x15E834u;
        goto label_15e834;
    }
    ctx->pc = 0x15E82Cu;
    {
        const bool branch_taken_0x15e82c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15e82c) {
            ctx->pc = 0x15E844u;
            goto label_15e844;
        }
    }
    ctx->pc = 0x15E834u;
label_15e834:
    // 0x15e834: 0x3202001f  andi        $v0, $s0, 0x1F
    ctx->pc = 0x15e834u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)31);
label_15e838:
    // 0x15e838: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x15e838u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_15e83c:
    // 0x15e83c: 0x10000002  b           . + 4 + (0x2 << 2)
label_15e840:
    if (ctx->pc == 0x15E840u) {
        ctx->pc = 0x15E840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E83Cu;
        // 0x15e840: 0x628023  subu        $s0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E844u;
        goto label_15e844;
    }
    ctx->pc = 0x15E83Cu;
    {
        const bool branch_taken_0x15e83c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E83Cu;
        // 0x15e840: 0x628023  subu        $s0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e83c) {
            ctx->pc = 0x15E848u;
            goto label_15e848;
        }
    }
    ctx->pc = 0x15E844u;
label_15e844:
    // 0x15e844: 0x3210001f  andi        $s0, $s0, 0x1F
    ctx->pc = 0x15e844u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)31);
label_15e848:
    // 0x15e848: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x15e848u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
label_15e84c:
    // 0x15e84c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x15e84cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_15e850:
    // 0x15e850: 0x24a555d0  addiu       $a1, $a1, 0x55D0
    ctx->pc = 0x15e850u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21968));
label_15e854:
    // 0x15e854: 0xc066e08  jal         func_19B820
label_15e858:
    if (ctx->pc == 0x15E858u) {
        ctx->pc = 0x15E858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E854u;
        // 0x15e858: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E85Cu;
        goto label_15e85c;
    }
    ctx->pc = 0x15E854u;
    SET_GPR_U32(ctx, 31, 0x15E85Cu);
    ctx->pc = 0x15E858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E854u;
    // 0x15e858: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B820u;
    { ctx->pc = 0x19b820; return; }
    ctx->pc = 0x15E85Cu;
label_15e85c:
    // 0x15e85c: 0x44900800  mtc1        $s0, $f1
    ctx->pc = 0x15e85cu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_15e860:
    // 0x15e860: 0x3c024200  lui         $v0, 0x4200
    ctx->pc = 0x15e860u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16896 << 16));
label_15e864:
    // 0x15e864: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x15e864u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_15e868:
    // 0x15e868: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x15e868u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_15e86c:
    // 0x15e86c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x15e86cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_15e870:
    // 0x15e870: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15e870u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_15e874:
    // 0x15e874: 0x0  nop
    ctx->pc = 0x15e874u;
    // NOP
label_15e878:
    // 0x15e878: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x15e878u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[12] = ctx->f[1] / ctx->f[0];
label_15e87c:
    // 0x15e87c: 0x0  nop
    ctx->pc = 0x15e87cu;
    // NOP
label_15e880:
    // 0x15e880: 0x0  nop
    ctx->pc = 0x15e880u;
    // NOP
label_15e884:
    // 0x15e884: 0xc066e14  jal         func_19B850
label_15e888:
    if (ctx->pc == 0x15E888u) {
        ctx->pc = 0x15E88Cu;
        goto label_15e88c;
    }
    ctx->pc = 0x15E884u;
    SET_GPR_U32(ctx, 31, 0x15E88Cu);
    ctx->pc = 0x19B850u;
    { ctx->pc = 0x19b850; return; }
    ctx->pc = 0x15E88Cu;
label_15e88c:
    // 0x15e88c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x15e88cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_15e890:
    // 0x15e890: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x15e890u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_15e894:
    // 0x15e894: 0xc066e02  jal         func_19B808
label_15e898:
    if (ctx->pc == 0x15E898u) {
        ctx->pc = 0x15E898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E894u;
        // 0x15e898: 0x27a60060  addiu       $a2, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E89Cu;
        goto label_15e89c;
    }
    ctx->pc = 0x15E894u;
    SET_GPR_U32(ctx, 31, 0x15E89Cu);
    ctx->pc = 0x15E898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E894u;
    // 0x15e898: 0x27a60060  addiu       $a2, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B808u;
    { ctx->pc = 0x19b808; return; }
    ctx->pc = 0x15E89Cu;
label_15e89c:
    // 0x15e89c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x15e89cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_15e8a0:
    // 0x15e8a0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x15e8a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_15e8a4:
    // 0x15e8a4: 0xc066e02  jal         func_19B808
label_15e8a8:
    if (ctx->pc == 0x15E8A8u) {
        ctx->pc = 0x15E8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E8A4u;
        // 0x15e8a8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E8ACu;
        goto label_15e8ac;
    }
    ctx->pc = 0x15E8A4u;
    SET_GPR_U32(ctx, 31, 0x15E8ACu);
    ctx->pc = 0x15E8A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E8A4u;
    // 0x15e8a8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B808u;
    { ctx->pc = 0x19b808; return; }
    ctx->pc = 0x15E8ACu;
label_15e8ac:
    // 0x15e8ac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x15e8acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15e8b0:
    // 0x15e8b0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x15e8b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15e8b4:
    // 0x15e8b4: 0x3c054380  lui         $a1, 0x4380
    ctx->pc = 0x15e8b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17280 << 16));
label_15e8b8:
    // 0x15e8b8: 0x3c03437e  lui         $v1, 0x437E
    ctx->pc = 0x15e8b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17278 << 16));
label_15e8bc:
    // 0x15e8bc: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x15e8bcu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_15e8c0:
    // 0x15e8c0: 0x3464b852  ori         $a0, $v1, 0xB852
    ctx->pc = 0x15e8c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)47186);
label_15e8c4:
    // 0x15e8c4: 0x2471821  addu        $v1, $s2, $a3
    ctx->pc = 0x15e8c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 7)));
label_15e8c8:
    // 0x15e8c8: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x15e8c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_15e8cc:
    // 0x15e8cc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x15e8ccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_15e8d0:
    // 0x15e8d0: 0x0  nop
    ctx->pc = 0x15e8d0u;
    // NOP
label_15e8d4:
    // 0x15e8d4: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_15e8d8:
    if (ctx->pc == 0x15E8D8u) {
        ctx->pc = 0x15E8DCu;
        goto label_15e8dc;
    }
    ctx->pc = 0x15E8D4u;
    {
        const bool branch_taken_0x15e8d4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x15e8d4) {
            ctx->pc = 0x15E8E0u;
            goto label_15e8e0;
        }
    }
    ctx->pc = 0x15E8DCu;
label_15e8dc:
    // 0x15e8dc: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x15e8dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_15e8e0:
    // 0x15e8e0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x15e8e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_15e8e4:
    // 0x15e8e4: 0x28c30003  slti        $v1, $a2, 0x3
    ctx->pc = 0x15e8e4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)3) ? 1 : 0);
label_15e8e8:
    // 0x15e8e8: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
label_15e8ec:
    if (ctx->pc == 0x15E8ECu) {
        ctx->pc = 0x15E8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E8E8u;
        // 0x15e8ec: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E8F0u;
        goto label_15e8f0;
    }
    ctx->pc = 0x15E8E8u;
    {
        const bool branch_taken_0x15e8e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15E8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E8E8u;
        // 0x15e8ec: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e8e8) {
            ctx->pc = 0x15E8C4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15e8c4;
        }
    }
    ctx->pc = 0x15E8F0u;
label_15e8f0:
    // 0x15e8f0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x15e8f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_15e8f4:
    // 0x15e8f4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x15e8f4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_15e8f8:
    // 0x15e8f8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x15e8f8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_15e8fc:
    // 0x15e8fc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x15e8fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_15e900:
    // 0x15e900: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15e900u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_15e904:
    // 0x15e904: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15e904u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_15e908:
    // 0x15e908: 0x3e00008  jr          $ra
label_15e90c:
    if (ctx->pc == 0x15E90Cu) {
        ctx->pc = 0x15E90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E908u;
        // 0x15e90c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E910u;
        goto label_15e910;
    }
    ctx->pc = 0x15E908u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15E90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E908u;
        // 0x15e90c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15E908u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15E910u;
label_15e910:
    // 0x15e910: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x15e910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_15e914:
    // 0x15e914: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x15e914u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
label_15e918:
    // 0x15e918: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x15e918u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_15e91c:
    // 0x15e91c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x15e91cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_15e920:
    // 0x15e920: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x15e920u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_15e924:
    // 0x15e924: 0x24631e00  addiu       $v1, $v1, 0x1E00
    ctx->pc = 0x15e924u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7680));
label_15e928:
    // 0x15e928: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15e928u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_15e92c:
    // 0x15e92c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x15e92cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_15e930:
    // 0x15e930: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15e930u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_15e934:
    // 0x15e934: 0x8c253ffc  lw          $a1, 0x3FFC($at)
    ctx->pc = 0x15e934u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_15e938:
    // 0x15e938: 0x8f828590  lw          $v0, -0x7A70($gp)
    ctx->pc = 0x15e938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
label_15e93c:
    // 0x15e93c: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x15e93cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_15e940:
    // 0x15e940: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x15e940u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_15e944:
    // 0x15e944: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x15e944u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_15e948:
    // 0x15e948: 0x3813c  dsll32      $s0, $v1, 4
    ctx->pc = 0x15e948u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) << (32 + 4));
label_15e94c:
    // 0x15e94c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_15e950:
    if (ctx->pc == 0x15E950u) {
        ctx->pc = 0x15E950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E94Cu;
        // 0x15e950: 0x10813e  dsrl32      $s0, $s0, 4 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> (32 + 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E954u;
        goto label_15e954;
    }
    ctx->pc = 0x15E94Cu;
    {
        const bool branch_taken_0x15e94c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E94Cu;
        // 0x15e950: 0x10813e  dsrl32      $s0, $s0, 4 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> (32 + 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e94c) {
            ctx->pc = 0x15E980u;
            goto label_15e980;
        }
    }
    ctx->pc = 0x15E954u;
label_15e954:
    // 0x15e954: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x15e954u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
label_15e958:
    // 0x15e958: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x15e958u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_15e95c:
    // 0x15e95c: 0x122940  sll         $a1, $s2, 5
    ctx->pc = 0x15e95cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), 5));
label_15e960:
    // 0x15e960: 0x24635588  addiu       $v1, $v1, 0x5588
    ctx->pc = 0x15e960u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 21896));
label_15e964:
    // 0x15e964: 0x2442558c  addiu       $v0, $v0, 0x558C
    ctx->pc = 0x15e964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21900));
label_15e968:
    // 0x15e968: 0x3c04437f  lui         $a0, 0x437F
    ctx->pc = 0x15e968u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17279 << 16));
label_15e96c:
    // 0x15e96c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x15e96cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_15e970:
    // 0x15e970: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x15e970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_15e974:
    // 0x15e974: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x15e974u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_15e978:
    // 0x15e978: 0x1000000e  b           . + 4 + (0xE << 2)
label_15e97c:
    if (ctx->pc == 0x15E97Cu) {
        ctx->pc = 0x15E97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E978u;
        // 0x15e97c: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E980u;
        goto label_15e980;
    }
    ctx->pc = 0x15E978u;
    {
        const bool branch_taken_0x15e978 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E978u;
        // 0x15e97c: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e978) {
            ctx->pc = 0x15E9B4u;
            goto label_15e9b4;
        }
    }
    ctx->pc = 0x15E980u;
label_15e980:
    // 0x15e980: 0xc07f198  jal         func_1FC660
label_15e984:
    if (ctx->pc == 0x15E984u) {
        ctx->pc = 0x15E988u;
        goto label_15e988;
    }
    ctx->pc = 0x15E980u;
    SET_GPR_U32(ctx, 31, 0x15E988u);
    ctx->pc = 0x1FC660u;
    { ctx->pc = 0x1fc660; return; }
    ctx->pc = 0x15E988u;
label_15e988:
    // 0x15e988: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x15e988u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_15e98c:
    // 0x15e98c: 0x128940  sll         $s1, $s2, 5
    ctx->pc = 0x15e98cu;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 18), 5));
label_15e990:
    // 0x15e990: 0x24425588  addiu       $v0, $v0, 0x5588
    ctx->pc = 0x15e990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21896));
label_15e994:
    // 0x15e994: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x15e994u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_15e998:
    // 0x15e998: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x15e998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_15e99c:
    // 0x15e99c: 0xc07f190  jal         func_1FC640
label_15e9a0:
    if (ctx->pc == 0x15E9A0u) {
        ctx->pc = 0x15E9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E99Cu;
        // 0x15e9a0: 0xe4400000  swc1        $f0, 0x0($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E9A4u;
        goto label_15e9a4;
    }
    ctx->pc = 0x15E99Cu;
    SET_GPR_U32(ctx, 31, 0x15E9A4u);
    ctx->pc = 0x15E9A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E99Cu;
    // 0x15e9a0: 0xe4400000  swc1        $f0, 0x0($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC640u;
    { ctx->pc = 0x1fc640; return; }
    ctx->pc = 0x15E9A4u;
label_15e9a4:
    // 0x15e9a4: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x15e9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_15e9a8:
    // 0x15e9a8: 0x2442558c  addiu       $v0, $v0, 0x558C
    ctx->pc = 0x15e9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21900));
label_15e9ac:
    // 0x15e9ac: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x15e9acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_15e9b0:
    // 0x15e9b0: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x15e9b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_15e9b4:
    // 0x15e9b4: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x15e9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_15e9b8:
    // 0x15e9b8: 0x121940  sll         $v1, $s2, 5
    ctx->pc = 0x15e9b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 5));
label_15e9bc:
    // 0x15e9bc: 0x24425570  addiu       $v0, $v0, 0x5570
    ctx->pc = 0x15e9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21872));
label_15e9c0:
    // 0x15e9c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15e9c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15e9c4:
    // 0x15e9c4: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x15e9c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_15e9c8:
    // 0x15e9c8: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x15e9c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_15e9cc:
    // 0x15e9cc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x15e9ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15e9d0:
    // 0x15e9d0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x15e9d0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15e9d4:
    // 0x15e9d4: 0xc066c72  jal         func_19B1C8
label_15e9d8:
    if (ctx->pc == 0x15E9D8u) {
        ctx->pc = 0x15E9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E9D4u;
        // 0x15e9d8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E9DCu;
        goto label_15e9dc;
    }
    ctx->pc = 0x15E9D4u;
    SET_GPR_U32(ctx, 31, 0x15E9DCu);
    ctx->pc = 0x15E9D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E9D4u;
    // 0x15e9d8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    { ctx->pc = 0x19b1c8; return; }
    ctx->pc = 0x15E9DCu;
label_15e9dc:
    // 0x15e9dc: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x15e9dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
label_15e9e0:
    // 0x15e9e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15e9e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15e9e4:
    // 0x15e9e4: 0x24a55530  addiu       $a1, $a1, 0x5530
    ctx->pc = 0x15e9e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21808));
label_15e9e8:
    // 0x15e9e8: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x15e9e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_15e9ec:
    // 0x15e9ec: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x15e9ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15e9f0:
    // 0x15e9f0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x15e9f0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15e9f4:
    // 0x15e9f4: 0xc066c72  jal         func_19B1C8
label_15e9f8:
    if (ctx->pc == 0x15E9F8u) {
        ctx->pc = 0x15E9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E9F4u;
        // 0x15e9f8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E9FCu;
        goto label_15e9fc;
    }
    ctx->pc = 0x15E9F4u;
    SET_GPR_U32(ctx, 31, 0x15E9FCu);
    ctx->pc = 0x15E9F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E9F4u;
    // 0x15e9f8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    { ctx->pc = 0x19b1c8; return; }
    ctx->pc = 0x15E9FCu;
label_15e9fc:
    // 0x15e9fc: 0x3c02002b  lui         $v0, 0x2B
    ctx->pc = 0x15e9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
label_15ea00:
    // 0x15ea00: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x15ea00u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
label_15ea04:
    // 0x15ea04: 0x244230c0  addiu       $v0, $v0, 0x30C0
    ctx->pc = 0x15ea04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12480));
label_15ea08:
    // 0x15ea08: 0x24a51f00  addiu       $a1, $a1, 0x1F00
    ctx->pc = 0x15ea08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7936));
label_15ea0c:
    // 0x15ea0c: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x15ea0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_15ea10:
    // 0x15ea10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15ea10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15ea14:
    // 0x15ea14: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x15ea14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
label_15ea18:
    // 0x15ea18: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x15ea18u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15ea1c:
    // 0x15ea1c: 0x23102  srl         $a2, $v0, 4
    ctx->pc = 0x15ea1cu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
label_15ea20:
    // 0x15ea20: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x15ea20u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15ea24:
    // 0x15ea24: 0xc066c72  jal         func_19B1C8
label_15ea28:
    if (ctx->pc == 0x15EA28u) {
        ctx->pc = 0x15EA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EA24u;
        // 0x15ea28: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15EA2Cu;
        goto label_15ea2c;
    }
    ctx->pc = 0x15EA24u;
    SET_GPR_U32(ctx, 31, 0x15EA2Cu);
    ctx->pc = 0x15EA28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15EA24u;
    // 0x15ea28: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    { ctx->pc = 0x19b1c8; return; }
    ctx->pc = 0x15EA2Cu;
label_15ea2c:
    // 0x15ea2c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15ea2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15ea30:
    // 0x15ea30: 0xc066c5c  jal         func_19B170
label_15ea34:
    if (ctx->pc == 0x15EA34u) {
        ctx->pc = 0x15EA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EA30u;
        // 0x15ea34: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15EA38u;
        goto label_15ea38;
    }
    ctx->pc = 0x15EA30u;
    SET_GPR_U32(ctx, 31, 0x15EA38u);
    ctx->pc = 0x15EA34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15EA30u;
    // 0x15ea34: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B170u;
    { ctx->pc = 0x19b170; return; }
    ctx->pc = 0x15EA38u;
label_15ea38:
    // 0x15ea38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15ea38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15ea3c:
    // 0x15ea3c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x15ea3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_15ea40:
    // 0x15ea40: 0xc066d10  jal         func_19B440
label_15ea44:
    if (ctx->pc == 0x15EA44u) {
        ctx->pc = 0x15EA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EA40u;
        // 0x15ea44: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15EA48u;
        goto label_15ea48;
    }
    ctx->pc = 0x15EA40u;
    SET_GPR_U32(ctx, 31, 0x15EA48u);
    ctx->pc = 0x15EA44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15EA40u;
    // 0x15ea44: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B440u;
    { ctx->pc = 0x19b440; return; }
    ctx->pc = 0x15EA48u;
label_15ea48:
    // 0x15ea48: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x15ea48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_15ea4c:
    // 0x15ea4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15ea4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15ea50:
    // 0x15ea50: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x15ea50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_15ea54:
    // 0x15ea54: 0x2406006c  addiu       $a2, $zero, 0x6C
    ctx->pc = 0x15ea54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
label_15ea58:
    // 0x15ea58: 0xc066cae  jal         func_19B2B8
label_15ea5c:
    if (ctx->pc == 0x15EA5Cu) {
        ctx->pc = 0x15EA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EA58u;
        // 0x15ea5c: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15EA60u;
        goto label_15ea60;
    }
    ctx->pc = 0x15EA58u;
    SET_GPR_U32(ctx, 31, 0x15EA60u);
    ctx->pc = 0x15EA5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15EA58u;
    // 0x15ea5c: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B2B8u;
    { ctx->pc = 0x19b2b8; return; }
    ctx->pc = 0x15EA60u;
label_15ea60:
    // 0x15ea60: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x15ea60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_15ea64:
    // 0x15ea64: 0xc06468c  jal         func_191A30
label_15ea68:
    if (ctx->pc == 0x15EA68u) {
        ctx->pc = 0x15EA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EA64u;
        // 0x15ea68: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15EA6Cu;
        goto label_15ea6c;
    }
    ctx->pc = 0x15EA64u;
    SET_GPR_U32(ctx, 31, 0x15EA6Cu);
    ctx->pc = 0x15EA68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15EA64u;
    // 0x15ea68: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x191A30u;
    { ctx->pc = 0x191a30; return; }
    ctx->pc = 0x15EA6Cu;
label_15ea6c:
    // 0x15ea6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15ea6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15ea70:
    // 0x15ea70: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x15ea70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_15ea74:
    // 0x15ea74: 0xc066d4c  jal         func_19B530
label_15ea78:
    if (ctx->pc == 0x15EA78u) {
        ctx->pc = 0x15EA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EA74u;
        // 0x15ea78: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15EA7Cu;
        goto label_15ea7c;
    }
    ctx->pc = 0x15EA74u;
    SET_GPR_U32(ctx, 31, 0x15EA7Cu);
    ctx->pc = 0x15EA78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15EA74u;
    // 0x15ea78: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B530u;
    { ctx->pc = 0x19b530; return; }
    ctx->pc = 0x15EA7Cu;
label_15ea7c:
    // 0x15ea7c: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x15ea7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_15ea80:
    // 0x15ea80: 0x121980  sll         $v1, $s2, 6
    ctx->pc = 0x15ea80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 6));
label_15ea84:
    // 0x15ea84: 0x24429bc0  addiu       $v0, $v0, -0x6440
    ctx->pc = 0x15ea84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941632));
label_15ea88:
    // 0x15ea88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15ea88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15ea8c:
    // 0x15ea8c: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x15ea8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_15ea90:
    // 0x15ea90: 0xc066d4c  jal         func_19B530
label_15ea94:
    if (ctx->pc == 0x15EA94u) {
        ctx->pc = 0x15EA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EA90u;
        // 0x15ea94: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15EA98u;
        goto label_15ea98;
    }
    ctx->pc = 0x15EA90u;
    SET_GPR_U32(ctx, 31, 0x15EA98u);
    ctx->pc = 0x15EA94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15EA90u;
    // 0x15ea94: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B530u;
    { ctx->pc = 0x19b530; return; }
    ctx->pc = 0x15EA98u;
label_15ea98:
    // 0x15ea98: 0xc066cd2  jal         func_19B348
label_15ea9c:
    if (ctx->pc == 0x15EA9Cu) {
        ctx->pc = 0x15EA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EA98u;
        // 0x15ea9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15EAA0u;
        goto label_15eaa0;
    }
    ctx->pc = 0x15EA98u;
    SET_GPR_U32(ctx, 31, 0x15EAA0u);
    ctx->pc = 0x15EA9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15EA98u;
    // 0x15ea9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B348u;
    { ctx->pc = 0x19b348; return; }
    ctx->pc = 0x15EAA0u;
label_15eaa0:
    // 0x15eaa0: 0x8f838590  lw          $v1, -0x7A70($gp)
    ctx->pc = 0x15eaa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
label_15eaa4:
    // 0x15eaa4: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x15eaa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
label_15eaa8:
    // 0x15eaa8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_15eaac:
    if (ctx->pc == 0x15EAACu) {
        ctx->pc = 0x15EAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EAA8u;
        // 0x15eaac: 0x30620040  andi        $v0, $v1, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        ctx->pc = 0x15EAB0u;
        goto label_15eab0;
    }
    ctx->pc = 0x15EAA8u;
    {
        const bool branch_taken_0x15eaa8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15EAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EAA8u;
        // 0x15eaac: 0x30620040  andi        $v0, $v1, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15eaa8) {
            ctx->pc = 0x15EAC0u;
            goto label_15eac0;
        }
    }
    ctx->pc = 0x15EAB0u;
label_15eab0:
    // 0x15eab0: 0x30620020  andi        $v0, $v1, 0x20
    ctx->pc = 0x15eab0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
label_15eab4:
    // 0x15eab4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_15eab8:
    if (ctx->pc == 0x15EAB8u) {
        ctx->pc = 0x15EAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EAB4u;
        // 0x15eab8: 0x3c021500  lui         $v0, 0x1500 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5376 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15EABCu;
        goto label_15eabc;
    }
    ctx->pc = 0x15EAB4u;
    {
        const bool branch_taken_0x15eab4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15EAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EAB4u;
        // 0x15eab8: 0x3c021500  lui         $v0, 0x1500 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5376 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15eab4) {
            ctx->pc = 0x15EACCu;
            goto label_15eacc;
        }
    }
    ctx->pc = 0x15EABCu;
label_15eabc:
    // 0x15eabc: 0x30620040  andi        $v0, $v1, 0x40
    ctx->pc = 0x15eabcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
label_15eac0:
    // 0x15eac0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_15eac4:
    if (ctx->pc == 0x15EAC4u) {
        ctx->pc = 0x15EAC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EAC0u;
        // 0x15eac4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15EAC8u;
        goto label_15eac8;
    }
    ctx->pc = 0x15EAC0u;
    {
        const bool branch_taken_0x15eac0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15EAC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EAC0u;
        // 0x15eac4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15eac0) {
            ctx->pc = 0x15EAE0u;
            goto label_15eae0;
        }
    }
    ctx->pc = 0x15EAC8u;
label_15eac8:
    // 0x15eac8: 0x3c021500  lui         $v0, 0x1500
    ctx->pc = 0x15eac8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5376 << 16));
label_15eacc:
    // 0x15eacc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15eaccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15ead0:
    // 0x15ead0: 0xc066d30  jal         func_19B4C0
label_15ead4:
    if (ctx->pc == 0x15EAD4u) {
        ctx->pc = 0x15EAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EAD0u;
        // 0x15ead4: 0x3445000c  ori         $a1, $v0, 0xC (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12);
        ctx->in_delay_slot = false;
        ctx->pc = 0x15EAD8u;
        goto label_15ead8;
    }
    ctx->pc = 0x15EAD0u;
    SET_GPR_U32(ctx, 31, 0x15EAD8u);
    ctx->pc = 0x15EAD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15EAD0u;
    // 0x15ead4: 0x3445000c  ori         $a1, $v0, 0xC (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12);
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B4C0u;
    { ctx->pc = 0x19b4c0; return; }
    ctx->pc = 0x15EAD8u;
label_15ead8:
    // 0x15ead8: 0x10000014  b           . + 4 + (0x14 << 2)
label_15eadc:
    if (ctx->pc == 0x15EADCu) {
        ctx->pc = 0x15EADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EAD8u;
        // 0x15eadc: 0x3c020300  lui         $v0, 0x300 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)768 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15EAE0u;
        goto label_15eae0;
    }
    ctx->pc = 0x15EAD8u;
    {
        const bool branch_taken_0x15ead8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15EADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EAD8u;
        // 0x15eadc: 0x3c020300  lui         $v0, 0x300 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)768 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ead8) {
            ctx->pc = 0x15EB2Cu;
            goto label_15eb2c;
        }
    }
    ctx->pc = 0x15EAE0u;
label_15eae0:
    // 0x15eae0: 0xc064654  jal         func_191950
label_15eae4:
    if (ctx->pc == 0x15EAE4u) {
        ctx->pc = 0x15EAE8u;
        goto label_15eae8;
    }
    ctx->pc = 0x15EAE0u;
    SET_GPR_U32(ctx, 31, 0x15EAE8u);
    ctx->pc = 0x191950u;
    { ctx->pc = 0x191950; return; }
    ctx->pc = 0x15EAE8u;
label_15eae8:
    // 0x15eae8: 0x3c024416  lui         $v0, 0x4416
    ctx->pc = 0x15eae8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17430 << 16));
label_15eaec:
    // 0x15eaec: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x15eaecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_15eaf0:
    // 0x15eaf0: 0x0  nop
    ctx->pc = 0x15eaf0u;
    // NOP
label_15eaf4:
    // 0x15eaf4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x15eaf4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_15eaf8:
    // 0x15eaf8: 0x0  nop
    ctx->pc = 0x15eaf8u;
    // NOP
label_15eafc:
    // 0x15eafc: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_15eb00:
    if (ctx->pc == 0x15EB00u) {
        ctx->pc = 0x15EB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EAFCu;
        // 0x15eb00: 0x3c021500  lui         $v0, 0x1500 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5376 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15EB04u;
        goto label_15eb04;
    }
    ctx->pc = 0x15EAFCu;
    {
        const bool branch_taken_0x15eafc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x15EB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EAFCu;
        // 0x15eb00: 0x3c021500  lui         $v0, 0x1500 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5376 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15eafc) {
            ctx->pc = 0x15EB1Cu;
            goto label_15eb1c;
        }
    }
    ctx->pc = 0x15EB04u;
label_15eb04:
    // 0x15eb04: 0x3c021500  lui         $v0, 0x1500
    ctx->pc = 0x15eb04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5376 << 16));
label_15eb08:
    // 0x15eb08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15eb08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15eb0c:
    // 0x15eb0c: 0xc066d30  jal         func_19B4C0
label_15eb10:
    if (ctx->pc == 0x15EB10u) {
        ctx->pc = 0x15EB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EB0Cu;
        // 0x15eb10: 0x3445000e  ori         $a1, $v0, 0xE (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)14);
        ctx->in_delay_slot = false;
        ctx->pc = 0x15EB14u;
        goto label_15eb14;
    }
    ctx->pc = 0x15EB0Cu;
    SET_GPR_U32(ctx, 31, 0x15EB14u);
    ctx->pc = 0x15EB10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15EB0Cu;
    // 0x15eb10: 0x3445000e  ori         $a1, $v0, 0xE (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)14);
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B4C0u;
    { ctx->pc = 0x19b4c0; return; }
    ctx->pc = 0x15EB14u;
label_15eb14:
    // 0x15eb14: 0x10000004  b           . + 4 + (0x4 << 2)
label_15eb18:
    if (ctx->pc == 0x15EB18u) {
        ctx->pc = 0x15EB1Cu;
        goto label_15eb1c;
    }
    ctx->pc = 0x15EB14u;
    {
        const bool branch_taken_0x15eb14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15eb14) {
            ctx->pc = 0x15EB28u;
            goto label_15eb28;
        }
    }
    ctx->pc = 0x15EB1Cu;
label_15eb1c:
    // 0x15eb1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15eb1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15eb20:
    // 0x15eb20: 0xc066d30  jal         func_19B4C0
label_15eb24:
    if (ctx->pc == 0x15EB24u) {
        ctx->pc = 0x15EB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EB20u;
        // 0x15eb24: 0x34450010  ori         $a1, $v0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        ctx->pc = 0x15EB28u;
        goto label_15eb28;
    }
    ctx->pc = 0x15EB20u;
    SET_GPR_U32(ctx, 31, 0x15EB28u);
    ctx->pc = 0x15EB24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15EB20u;
    // 0x15eb24: 0x34450010  ori         $a1, $v0, 0x10 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B4C0u;
    { ctx->pc = 0x19b4c0; return; }
    ctx->pc = 0x15EB28u;
label_15eb28:
    // 0x15eb28: 0x3c020300  lui         $v0, 0x300
    ctx->pc = 0x15eb28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)768 << 16));
label_15eb2c:
    // 0x15eb2c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15eb2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15eb30:
    // 0x15eb30: 0xc066d30  jal         func_19B4C0
label_15eb34:
    if (ctx->pc == 0x15EB34u) {
        ctx->pc = 0x15EB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EB30u;
        // 0x15eb34: 0x344501b8  ori         $a1, $v0, 0x1B8 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)440);
        ctx->in_delay_slot = false;
        ctx->pc = 0x15EB38u;
        goto label_15eb38;
    }
    ctx->pc = 0x15EB30u;
    SET_GPR_U32(ctx, 31, 0x15EB38u);
    ctx->pc = 0x15EB34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15EB30u;
    // 0x15eb34: 0x344501b8  ori         $a1, $v0, 0x1B8 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)440);
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B4C0u;
    { ctx->pc = 0x19b4c0; return; }
    ctx->pc = 0x15EB38u;
label_15eb38:
    // 0x15eb38: 0x3c020200  lui         $v0, 0x200
    ctx->pc = 0x15eb38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)512 << 16));
label_15eb3c:
    // 0x15eb3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15eb3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15eb40:
    // 0x15eb40: 0xc066d30  jal         func_19B4C0
label_15eb44:
    if (ctx->pc == 0x15EB44u) {
        ctx->pc = 0x15EB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EB40u;
        // 0x15eb44: 0x344500b3  ori         $a1, $v0, 0xB3 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)179);
        ctx->in_delay_slot = false;
        ctx->pc = 0x15EB48u;
        goto label_15eb48;
    }
    ctx->pc = 0x15EB40u;
    SET_GPR_U32(ctx, 31, 0x15EB48u);
    ctx->pc = 0x15EB44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15EB40u;
    // 0x15eb44: 0x344500b3  ori         $a1, $v0, 0xB3 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)179);
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B4C0u;
    { ctx->pc = 0x19b4c0; return; }
    ctx->pc = 0x15EB48u;
label_15eb48:
    // 0x15eb48: 0xc066c46  jal         func_19B118
label_15eb4c:
    if (ctx->pc == 0x15EB4Cu) {
        ctx->pc = 0x15EB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EB48u;
        // 0x15eb4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15EB50u;
        goto label_15eb50;
    }
    ctx->pc = 0x15EB48u;
    SET_GPR_U32(ctx, 31, 0x15EB50u);
    ctx->pc = 0x15EB4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15EB48u;
    // 0x15eb4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B118u;
    { ctx->pc = 0x19b118; return; }
    ctx->pc = 0x15EB50u;
label_15eb50:
    // 0x15eb50: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x15eb50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_15eb54:
    // 0x15eb54: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x15eb54u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_15eb58:
    // 0x15eb58: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15eb58u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_15eb5c:
    // 0x15eb5c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15eb5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_15eb60:
    // 0x15eb60: 0x3e00008  jr          $ra
label_15eb64:
    if (ctx->pc == 0x15EB64u) {
        ctx->pc = 0x15EB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EB60u;
        // 0x15eb64: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15EB68u;
        goto label_15eb68;
    }
    ctx->pc = 0x15EB60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15EB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EB60u;
        // 0x15eb64: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15EB60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15EB68u;
label_15eb68:
    // 0x15eb68: 0x0  nop
    ctx->pc = 0x15eb68u;
    // NOP
label_15eb6c:
    // 0x15eb6c: 0x0  nop
    ctx->pc = 0x15eb6cu;
    // NOP
label_15eb70:
    // 0x15eb70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x15eb70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_15eb74:
    // 0x15eb74: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x15eb74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_15eb78:
    // 0x15eb78: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15eb78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_15eb7c:
    // 0x15eb7c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15eb7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_15eb80:
    // 0x15eb80: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x15eb80u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15eb84:
    // 0x15eb84: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x15eb84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15eb88:
    // 0x15eb88: 0x0  nop
    ctx->pc = 0x15eb88u;
    // NOP
label_15eb8c:
    // 0x15eb8c: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x15eb8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
label_15eb90:
    // 0x15eb90: 0x24634b00  addiu       $v1, $v1, 0x4B00
    ctx->pc = 0x15eb90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19200));
label_15eb94:
    // 0x15eb94: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x15eb94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_15eb98:
    // 0x15eb98: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x15eb98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_15eb9c:
    // 0x15eb9c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_15eba0:
    if (ctx->pc == 0x15EBA0u) {
        ctx->pc = 0x15EBA4u;
        goto label_15eba4;
    }
    ctx->pc = 0x15EB9Cu;
    {
        const bool branch_taken_0x15eb9c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x15eb9c) {
            ctx->pc = 0x15EBACu;
            goto label_15ebac;
        }
    }
    ctx->pc = 0x15EBA4u;
label_15eba4:
    // 0x15eba4: 0xc070038  jal         func_1C00E0
label_15eba8:
    if (ctx->pc == 0x15EBA8u) {
        ctx->pc = 0x15EBACu;
        goto label_15ebac;
    }
    ctx->pc = 0x15EBA4u;
    SET_GPR_U32(ctx, 31, 0x15EBACu);
    ctx->pc = 0x1C00E0u;
    { ctx->pc = 0x1c00e0; return; }
    ctx->pc = 0x15EBACu;
label_15ebac:
    // 0x15ebac: 0x0  nop
    ctx->pc = 0x15ebacu;
    // NOP
label_15ebb0:
    // 0x15ebb0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x15ebb0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_15ebb4:
    // 0x15ebb4: 0x2a03000d  slti        $v1, $s0, 0xD
    ctx->pc = 0x15ebb4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)13) ? 1 : 0);
label_15ebb8:
    // 0x15ebb8: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
label_15ebbc:
    if (ctx->pc == 0x15EBBCu) {
        ctx->pc = 0x15EBBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EBB8u;
        // 0x15ebbc: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15EBC0u;
        goto label_15ebc0;
    }
    ctx->pc = 0x15EBB8u;
    {
        const bool branch_taken_0x15ebb8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15EBBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EBB8u;
        // 0x15ebbc: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ebb8) {
            ctx->pc = 0x15EB88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15eb88;
        }
    }
    ctx->pc = 0x15EBC0u;
label_15ebc0:
    // 0x15ebc0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x15ebc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_15ebc4:
    // 0x15ebc4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15ebc4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_15ebc8:
    // 0x15ebc8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15ebc8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_15ebcc:
    // 0x15ebcc: 0x3e00008  jr          $ra
label_15ebd0:
    if (ctx->pc == 0x15EBD0u) {
        ctx->pc = 0x15EBD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EBCCu;
        // 0x15ebd0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15EBD4u;
        goto label_15ebd4;
    }
    ctx->pc = 0x15EBCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15EBD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EBCCu;
        // 0x15ebd0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15EBCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15EBD4u;
label_15ebd4:
    // 0x15ebd4: 0x0  nop
    ctx->pc = 0x15ebd4u;
    // NOP
label_15ebd8:
    // 0x15ebd8: 0x0  nop
    ctx->pc = 0x15ebd8u;
    // NOP
label_15ebdc:
    // 0x15ebdc: 0x0  nop
    ctx->pc = 0x15ebdcu;
    // NOP
label_15ebe0:
    // 0x15ebe0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x15ebe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_15ebe4:
    // 0x15ebe4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x15ebe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_15ebe8:
    // 0x15ebe8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15ebe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_15ebec:
    // 0x15ebec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15ebecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_15ebf0:
    // 0x15ebf0: 0x8f838590  lw          $v1, -0x7A70($gp)
    ctx->pc = 0x15ebf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
label_15ebf4:
    // 0x15ebf4: 0x30630400  andi        $v1, $v1, 0x400
    ctx->pc = 0x15ebf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1024);
label_15ebf8:
    // 0x15ebf8: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
label_15ebfc:
    if (ctx->pc == 0x15EBFCu) {
        ctx->pc = 0x15EBFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EBF8u;
        // 0x15ebfc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15EC00u;
        goto label_15ec00;
    }
    ctx->pc = 0x15EBF8u;
    {
        const bool branch_taken_0x15ebf8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x15EBFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EBF8u;
        // 0x15ebfc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ebf8) {
            ctx->pc = 0x15EC34u;
            goto label_15ec34;
        }
    }
    ctx->pc = 0x15EC00u;
label_15ec00:
    // 0x15ec00: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x15ec00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15ec04:
    // 0x15ec04: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x15ec04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
label_15ec08:
    // 0x15ec08: 0x24844b00  addiu       $a0, $a0, 0x4B00
    ctx->pc = 0x15ec08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19200));
label_15ec0c:
    // 0x15ec0c: 0x0  nop
    ctx->pc = 0x15ec0cu;
    // NOP
label_15ec10:
    // 0x15ec10: 0x861821  addu        $v1, $a0, $a2
    ctx->pc = 0x15ec10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_15ec14:
    // 0x15ec14: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x15ec14u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_15ec18:
    // 0x15ec18: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x15ec18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_15ec1c:
    // 0x15ec1c: 0x28a3000d  slti        $v1, $a1, 0xD
    ctx->pc = 0x15ec1cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)13) ? 1 : 0);
label_15ec20:
    // 0x15ec20: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x15ec20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_15ec24:
    // 0x15ec24: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
label_15ec28:
    if (ctx->pc == 0x15EC28u) {
        ctx->pc = 0x15EC2Cu;
        goto label_15ec2c;
    }
    ctx->pc = 0x15EC24u;
    {
        const bool branch_taken_0x15ec24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x15ec24) {
            ctx->pc = 0x15EC0Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15ec0c;
        }
    }
    ctx->pc = 0x15EC2Cu;
label_15ec2c:
    // 0x15ec2c: 0x1000000e  b           . + 4 + (0xE << 2)
label_15ec30:
    if (ctx->pc == 0x15EC30u) {
        ctx->pc = 0x15EC34u;
        goto label_15ec34;
    }
    ctx->pc = 0x15EC2Cu;
    {
        const bool branch_taken_0x15ec2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15ec2c) {
            ctx->pc = 0x15EC68u;
            goto label_15ec68;
        }
    }
    ctx->pc = 0x15EC34u;
label_15ec34:
    // 0x15ec34: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x15ec34u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15ec38:
    // 0x15ec38: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x15ec38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15ec3c:
    // 0x15ec3c: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x15ec3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_15ec40:
    // 0x15ec40: 0xc070080  jal         func_1C0200
label_15ec44:
    if (ctx->pc == 0x15EC44u) {
        ctx->pc = 0x15EC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EC40u;
        // 0x15ec44: 0x24050e40  addiu       $a1, $zero, 0xE40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3648));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15EC48u;
        goto label_15ec48;
    }
    ctx->pc = 0x15EC40u;
    SET_GPR_U32(ctx, 31, 0x15EC48u);
    ctx->pc = 0x15EC44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15EC40u;
    // 0x15ec44: 0x24050e40  addiu       $a1, $zero, 0xE40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3648));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    { ctx->pc = 0x1c0200; return; }
    ctx->pc = 0x15EC48u;
label_15ec48:
    // 0x15ec48: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x15ec48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
label_15ec4c:
    // 0x15ec4c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x15ec4cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_15ec50:
    // 0x15ec50: 0x24634b00  addiu       $v1, $v1, 0x4B00
    ctx->pc = 0x15ec50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19200));
label_15ec54:
    // 0x15ec54: 0x702021  addu        $a0, $v1, $s0
    ctx->pc = 0x15ec54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_15ec58:
    // 0x15ec58: 0x2a23000d  slti        $v1, $s1, 0xD
    ctx->pc = 0x15ec58u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)13) ? 1 : 0);
label_15ec5c:
    // 0x15ec5c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x15ec5cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_15ec60:
    // 0x15ec60: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
label_15ec64:
    if (ctx->pc == 0x15EC64u) {
        ctx->pc = 0x15EC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EC60u;
        // 0x15ec64: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15EC68u;
        goto label_15ec68;
    }
    ctx->pc = 0x15EC60u;
    {
        const bool branch_taken_0x15ec60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15EC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EC60u;
        // 0x15ec64: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ec60) {
            ctx->pc = 0x15EC3Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15ec3c;
        }
    }
    ctx->pc = 0x15EC68u;
label_15ec68:
    // 0x15ec68: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x15ec68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_15ec6c:
    // 0x15ec6c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15ec6cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_15ec70:
    // 0x15ec70: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15ec70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_15ec74:
    // 0x15ec74: 0x3e00008  jr          $ra
label_15ec78:
    if (ctx->pc == 0x15EC78u) {
        ctx->pc = 0x15EC78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EC74u;
        // 0x15ec78: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15EC7Cu;
        goto label_15ec7c;
    }
    ctx->pc = 0x15EC74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15EC78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EC74u;
        // 0x15ec78: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15EC74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15EC7Cu;
label_15ec7c:
    // 0x15ec7c: 0x0  nop
    ctx->pc = 0x15ec7cu;
    // NOP
label_15ec80:
    // 0x15ec80: 0x3e00008  jr          $ra
label_15ec84:
    if (ctx->pc == 0x15EC84u) {
        ctx->pc = 0x15EC88u;
        goto label_15ec88;
    }
    ctx->pc = 0x15EC80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15EC80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15EC88u;
label_15ec88:
    // 0x15ec88: 0x0  nop
    ctx->pc = 0x15ec88u;
    // NOP
label_15ec8c:
    // 0x15ec8c: 0x0  nop
    ctx->pc = 0x15ec8cu;
    // NOP
label_15ec90:
    // 0x15ec90: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x15ec90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_15ec94:
    // 0x15ec94: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x15ec94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_15ec98:
    // 0x15ec98: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x15ec98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_15ec9c:
    // 0x15ec9c: 0x24030063  addiu       $v1, $zero, 0x63
    ctx->pc = 0x15ec9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
label_15eca0:
    // 0x15eca0: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x15eca0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_15eca4:
    // 0x15eca4: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x15eca4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_15eca8:
    // 0x15eca8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x15eca8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_15ecac:
    // 0x15ecac: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x15ecacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_15ecb0:
    // 0x15ecb0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x15ecb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_15ecb4:
    // 0x15ecb4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x15ecb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_15ecb8:
    // 0x15ecb8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15ecb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_15ecbc:
    // 0x15ecbc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15ecbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_15ecc0:
    // 0x15ecc0: 0x9025490c  lbu         $a1, 0x490C($at)
    ctx->pc = 0x15ecc0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18700)));
label_15ecc4:
    // 0x15ecc4: 0x10a30172  beq         $a1, $v1, . + 4 + (0x172 << 2)
label_15ecc8:
    if (ctx->pc == 0x15ECC8u) {
        ctx->pc = 0x15ECCCu;
        goto label_15eccc;
    }
    ctx->pc = 0x15ECC4u;
    {
        const bool branch_taken_0x15ecc4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x15ecc4) {
            ctx->pc = 0x15F290u;
            { ctx->pc = 0x15f290; return; }
        }
    }
    ctx->pc = 0x15ECCCu;
label_15eccc:
    // 0x15eccc: 0x24030064  addiu       $v1, $zero, 0x64
    ctx->pc = 0x15ecccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_15ecd0:
    // 0x15ecd0: 0x14a30003  bne         $a1, $v1, . + 4 + (0x3 << 2)
label_15ecd4:
    if (ctx->pc == 0x15ECD4u) {
        ctx->pc = 0x15ECD8u;
        goto label_15ecd8;
    }
    ctx->pc = 0x15ECD0u;
    {
        const bool branch_taken_0x15ecd0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x15ecd0) {
            ctx->pc = 0x15ECE0u;
            goto label_15ece0;
        }
    }
    ctx->pc = 0x15ECD8u;
label_15ecd8:
    // 0x15ecd8: 0x1000016e  b           . + 4 + (0x16E << 2)
label_15ecdc:
    if (ctx->pc == 0x15ECDCu) {
        ctx->pc = 0x15ECDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15ECD8u;
        // 0x15ecdc: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15ECE0u;
        goto label_15ece0;
    }
    ctx->pc = 0x15ECD8u;
    {
        const bool branch_taken_0x15ecd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15ECDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15ECD8u;
        // 0x15ecdc: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ecd8) {
            ctx->pc = 0x15F294u;
            { ctx->pc = 0x15f294; return; }
        }
    }
    ctx->pc = 0x15ECE0u;
label_15ece0:
    // 0x15ece0: 0x8f858590  lw          $a1, -0x7A70($gp)
    ctx->pc = 0x15ece0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
label_15ece4:
    // 0x15ece4: 0x30a30004  andi        $v1, $a1, 0x4
    ctx->pc = 0x15ece4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4);
label_15ece8:
    // 0x15ece8: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_15ecec:
    if (ctx->pc == 0x15ECECu) {
        ctx->pc = 0x15ECECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15ECE8u;
        // 0x15ecec: 0x41940  sll         $v1, $a0, 5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15ECF0u;
        goto label_15ecf0;
    }
    ctx->pc = 0x15ECE8u;
    {
        const bool branch_taken_0x15ece8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x15ECECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15ECE8u;
        // 0x15ecec: 0x41940  sll         $v1, $a0, 5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ece8) {
            ctx->pc = 0x15ED00u;
            goto label_15ed00;
        }
    }
    ctx->pc = 0x15ECF0u;
label_15ecf0:
    // 0x15ecf0: 0x30a30020  andi        $v1, $a1, 0x20
    ctx->pc = 0x15ecf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)32);
label_15ecf4:
    // 0x15ecf4: 0x10600165  beqz        $v1, . + 4 + (0x165 << 2)
label_15ecf8:
    if (ctx->pc == 0x15ECF8u) {
        ctx->pc = 0x15ECFCu;
        goto label_15ecfc;
    }
    ctx->pc = 0x15ECF4u;
    {
        const bool branch_taken_0x15ecf4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x15ecf4) {
            ctx->pc = 0x15F28Cu;
            { ctx->pc = 0x15f28c; return; }
        }
    }
    ctx->pc = 0x15ECFCu;
label_15ecfc:
    // 0x15ecfc: 0x41940  sll         $v1, $a0, 5
    ctx->pc = 0x15ecfcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_15ed00:
    // 0x15ed00: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x15ed00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
label_15ed04:
    // 0x15ed04: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x15ed04u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_15ed08:
    // 0x15ed08: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x15ed08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_15ed0c:
    // 0x15ed0c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x15ed0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_15ed10:
    // 0x15ed10: 0x24424b40  addiu       $v0, $v0, 0x4B40
    ctx->pc = 0x15ed10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19264));
label_15ed14:
    // 0x15ed14: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x15ed14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_15ed18:
    // 0x15ed18: 0x34217610  ori         $at, $at, 0x7610
    ctx->pc = 0x15ed18u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)30224);
label_15ed1c:
    // 0x15ed1c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x15ed1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_15ed20:
    // 0x15ed20: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x15ed20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_15ed24:
    // 0x15ed24: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x15ed24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_15ed28:
    // 0x15ed28: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x15ed28u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_15ed2c:
    // 0x15ed2c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x15ed2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_15ed30:
    // 0x15ed30: 0x439021  addu        $s2, $v0, $v1
    ctx->pc = 0x15ed30u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_15ed34:
    // 0x15ed34: 0xae404d10  sw          $zero, 0x4D10($s2)
    ctx->pc = 0x15ed34u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 19728), GPR_U32(ctx, 0));
label_15ed38:
    // 0x15ed38: 0x2418021  addu        $s0, $s2, $at
    ctx->pc = 0x15ed38u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 1)));
label_15ed3c:
    // 0x15ed3c: 0x9202000d  lbu         $v0, 0xD($s0)
    ctx->pc = 0x15ed3cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 13)));
label_15ed40:
    // 0x15ed40: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_15ed44:
    if (ctx->pc == 0x15ED44u) {
        ctx->pc = 0x15ED48u;
        goto label_15ed48;
    }
    ctx->pc = 0x15ED40u;
    {
        const bool branch_taken_0x15ed40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15ed40) {
            ctx->pc = 0x15ED54u;
            goto label_15ed54;
        }
    }
    ctx->pc = 0x15ED48u;
label_15ed48:
    // 0x15ed48: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x15ed48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_15ed4c:
    // 0x15ed4c: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_15ed50:
    if (ctx->pc == 0x15ED50u) {
        ctx->pc = 0x15ED50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15ED4Cu;
        // 0x15ed50: 0x3c010001  lui         $at, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15ED54u;
        goto label_15ed54;
    }
    ctx->pc = 0x15ED4Cu;
    {
        const bool branch_taken_0x15ed4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15ED50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15ED4Cu;
        // 0x15ed50: 0x3c010001  lui         $at, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ed4c) {
            ctx->pc = 0x15ED90u;
            { ctx->pc = 0x15ed90; return; }
        }
    }
    ctx->pc = 0x15ED54u;
label_15ed54:
    // 0x15ed54: 0xc058c94  jal         func_163250
label_15ed58:
    if (ctx->pc == 0x15ED58u) {
        ctx->pc = 0x15ED58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15ED54u;
        // 0x15ed58: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15ED5Cu;
        goto label_15ed5c;
    }
    ctx->pc = 0x15ED54u;
    SET_GPR_U32(ctx, 31, 0x15ED5Cu);
    ctx->pc = 0x15ED58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15ED54u;
    // 0x15ed58: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x163250u;
    { ctx->pc = 0x163250; return; }
    ctx->pc = 0x15ED5Cu;
label_15ed5c:
    // 0x15ed5c: 0xc0588b4  jal         func_1622D0
label_15ed60:
    if (ctx->pc == 0x15ED60u) {
        ctx->pc = 0x15ED60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15ED5Cu;
        // 0x15ed60: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15ED64u;
        goto label_15ed64;
    }
    ctx->pc = 0x15ED5Cu;
    SET_GPR_U32(ctx, 31, 0x15ED64u);
    ctx->pc = 0x15ED60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15ED5Cu;
    // 0x15ed60: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1622D0u;
    { ctx->pc = 0x1622d0; return; }
    ctx->pc = 0x15ED64u;
label_15ed64:
    // 0x15ed64: 0xc0587ec  jal         func_161FB0
label_15ed68:
    if (ctx->pc == 0x15ED68u) {
        ctx->pc = 0x15ED68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15ED64u;
        // 0x15ed68: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15ED6Cu;
        goto label_15ed6c;
    }
    ctx->pc = 0x15ED64u;
    SET_GPR_U32(ctx, 31, 0x15ED6Cu);
    ctx->pc = 0x15ED68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15ED64u;
    // 0x15ed68: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x161FB0u;
    { ctx->pc = 0x161fb0; return; }
    ctx->pc = 0x15ED6Cu;
label_15ed6c:
    // 0x15ed6c: 0xc058568  jal         func_1615A0
    ctx->pc = 0x15ed70u;
    return;
}
