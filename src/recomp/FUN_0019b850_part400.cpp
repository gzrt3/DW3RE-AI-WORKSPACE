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

// Function: FUN_0019b850
// Address: 0x19b850 - 0x29b858
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0019b850_part400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x25e580u: goto label_25e580;
        case 0x25e584u: goto label_25e584;
        case 0x25e588u: goto label_25e588;
        case 0x25e58cu: goto label_25e58c;
        case 0x25e590u: goto label_25e590;
        case 0x25e594u: goto label_25e594;
        case 0x25e598u: goto label_25e598;
        case 0x25e59cu: goto label_25e59c;
        case 0x25e5a0u: goto label_25e5a0;
        case 0x25e5a4u: goto label_25e5a4;
        case 0x25e5a8u: goto label_25e5a8;
        case 0x25e5acu: goto label_25e5ac;
        case 0x25e5b0u: goto label_25e5b0;
        case 0x25e5b4u: goto label_25e5b4;
        case 0x25e5b8u: goto label_25e5b8;
        case 0x25e5bcu: goto label_25e5bc;
        case 0x25e5c0u: goto label_25e5c0;
        case 0x25e5c4u: goto label_25e5c4;
        case 0x25e5c8u: goto label_25e5c8;
        case 0x25e5ccu: goto label_25e5cc;
        case 0x25e5d0u: goto label_25e5d0;
        case 0x25e5d4u: goto label_25e5d4;
        case 0x25e5d8u: goto label_25e5d8;
        case 0x25e5dcu: goto label_25e5dc;
        case 0x25e5e0u: goto label_25e5e0;
        case 0x25e5e4u: goto label_25e5e4;
        case 0x25e5e8u: goto label_25e5e8;
        case 0x25e5ecu: goto label_25e5ec;
        case 0x25e5f0u: goto label_25e5f0;
        case 0x25e5f4u: goto label_25e5f4;
        case 0x25e5f8u: goto label_25e5f8;
        case 0x25e5fcu: goto label_25e5fc;
        case 0x25e600u: goto label_25e600;
        case 0x25e604u: goto label_25e604;
        case 0x25e608u: goto label_25e608;
        case 0x25e60cu: goto label_25e60c;
        case 0x25e610u: goto label_25e610;
        case 0x25e614u: goto label_25e614;
        case 0x25e618u: goto label_25e618;
        case 0x25e61cu: goto label_25e61c;
        case 0x25e620u: goto label_25e620;
        case 0x25e624u: goto label_25e624;
        case 0x25e628u: goto label_25e628;
        case 0x25e62cu: goto label_25e62c;
        case 0x25e630u: goto label_25e630;
        case 0x25e634u: goto label_25e634;
        case 0x25e638u: goto label_25e638;
        case 0x25e63cu: goto label_25e63c;
        case 0x25e640u: goto label_25e640;
        case 0x25e644u: goto label_25e644;
        case 0x25e648u: goto label_25e648;
        case 0x25e64cu: goto label_25e64c;
        case 0x25e650u: goto label_25e650;
        case 0x25e654u: goto label_25e654;
        case 0x25e658u: goto label_25e658;
        case 0x25e65cu: goto label_25e65c;
        case 0x25e660u: goto label_25e660;
        case 0x25e664u: goto label_25e664;
        case 0x25e668u: goto label_25e668;
        case 0x25e66cu: goto label_25e66c;
        case 0x25e670u: goto label_25e670;
        case 0x25e674u: goto label_25e674;
        case 0x25e678u: goto label_25e678;
        case 0x25e67cu: goto label_25e67c;
        case 0x25e680u: goto label_25e680;
        case 0x25e684u: goto label_25e684;
        case 0x25e688u: goto label_25e688;
        case 0x25e68cu: goto label_25e68c;
        case 0x25e690u: goto label_25e690;
        case 0x25e694u: goto label_25e694;
        case 0x25e698u: goto label_25e698;
        case 0x25e69cu: goto label_25e69c;
        case 0x25e6a0u: goto label_25e6a0;
        case 0x25e6a4u: goto label_25e6a4;
        case 0x25e6a8u: goto label_25e6a8;
        case 0x25e6acu: goto label_25e6ac;
        case 0x25e6b0u: goto label_25e6b0;
        case 0x25e6b4u: goto label_25e6b4;
        case 0x25e6b8u: goto label_25e6b8;
        case 0x25e6bcu: goto label_25e6bc;
        case 0x25e6c0u: goto label_25e6c0;
        case 0x25e6c4u: goto label_25e6c4;
        case 0x25e6c8u: goto label_25e6c8;
        case 0x25e6ccu: goto label_25e6cc;
        case 0x25e6d0u: goto label_25e6d0;
        case 0x25e6d4u: goto label_25e6d4;
        case 0x25e6d8u: goto label_25e6d8;
        case 0x25e6dcu: goto label_25e6dc;
        case 0x25e6e0u: goto label_25e6e0;
        case 0x25e6e4u: goto label_25e6e4;
        case 0x25e6e8u: goto label_25e6e8;
        case 0x25e6ecu: goto label_25e6ec;
        case 0x25e6f0u: goto label_25e6f0;
        case 0x25e6f4u: goto label_25e6f4;
        case 0x25e6f8u: goto label_25e6f8;
        case 0x25e6fcu: goto label_25e6fc;
        case 0x25e700u: goto label_25e700;
        case 0x25e704u: goto label_25e704;
        case 0x25e708u: goto label_25e708;
        case 0x25e70cu: goto label_25e70c;
        case 0x25e710u: goto label_25e710;
        case 0x25e714u: goto label_25e714;
        case 0x25e718u: goto label_25e718;
        case 0x25e71cu: goto label_25e71c;
        case 0x25e720u: goto label_25e720;
        case 0x25e724u: goto label_25e724;
        case 0x25e728u: goto label_25e728;
        case 0x25e72cu: goto label_25e72c;
        case 0x25e730u: goto label_25e730;
        case 0x25e734u: goto label_25e734;
        case 0x25e738u: goto label_25e738;
        case 0x25e73cu: goto label_25e73c;
        case 0x25e740u: goto label_25e740;
        case 0x25e744u: goto label_25e744;
        case 0x25e748u: goto label_25e748;
        case 0x25e74cu: goto label_25e74c;
        case 0x25e750u: goto label_25e750;
        case 0x25e754u: goto label_25e754;
        case 0x25e758u: goto label_25e758;
        case 0x25e75cu: goto label_25e75c;
        case 0x25e760u: goto label_25e760;
        case 0x25e764u: goto label_25e764;
        case 0x25e768u: goto label_25e768;
        case 0x25e76cu: goto label_25e76c;
        case 0x25e770u: goto label_25e770;
        case 0x25e774u: goto label_25e774;
        case 0x25e778u: goto label_25e778;
        case 0x25e77cu: goto label_25e77c;
        case 0x25e780u: goto label_25e780;
        case 0x25e784u: goto label_25e784;
        case 0x25e788u: goto label_25e788;
        case 0x25e78cu: goto label_25e78c;
        case 0x25e790u: goto label_25e790;
        case 0x25e794u: goto label_25e794;
        case 0x25e798u: goto label_25e798;
        case 0x25e79cu: goto label_25e79c;
        case 0x25e7a0u: goto label_25e7a0;
        case 0x25e7a4u: goto label_25e7a4;
        case 0x25e7a8u: goto label_25e7a8;
        case 0x25e7acu: goto label_25e7ac;
        case 0x25e7b0u: goto label_25e7b0;
        case 0x25e7b4u: goto label_25e7b4;
        case 0x25e7b8u: goto label_25e7b8;
        case 0x25e7bcu: goto label_25e7bc;
        case 0x25e7c0u: goto label_25e7c0;
        case 0x25e7c4u: goto label_25e7c4;
        case 0x25e7c8u: goto label_25e7c8;
        case 0x25e7ccu: goto label_25e7cc;
        case 0x25e7d0u: goto label_25e7d0;
        case 0x25e7d4u: goto label_25e7d4;
        case 0x25e7d8u: goto label_25e7d8;
        case 0x25e7dcu: goto label_25e7dc;
        case 0x25e7e0u: goto label_25e7e0;
        case 0x25e7e4u: goto label_25e7e4;
        case 0x25e7e8u: goto label_25e7e8;
        case 0x25e7ecu: goto label_25e7ec;
        case 0x25e7f0u: goto label_25e7f0;
        case 0x25e7f4u: goto label_25e7f4;
        case 0x25e7f8u: goto label_25e7f8;
        case 0x25e7fcu: goto label_25e7fc;
        case 0x25e800u: goto label_25e800;
        case 0x25e804u: goto label_25e804;
        case 0x25e808u: goto label_25e808;
        case 0x25e80cu: goto label_25e80c;
        case 0x25e810u: goto label_25e810;
        case 0x25e814u: goto label_25e814;
        case 0x25e818u: goto label_25e818;
        case 0x25e81cu: goto label_25e81c;
        case 0x25e820u: goto label_25e820;
        case 0x25e824u: goto label_25e824;
        case 0x25e828u: goto label_25e828;
        case 0x25e82cu: goto label_25e82c;
        case 0x25e830u: goto label_25e830;
        case 0x25e834u: goto label_25e834;
        case 0x25e838u: goto label_25e838;
        case 0x25e83cu: goto label_25e83c;
        case 0x25e840u: goto label_25e840;
        case 0x25e844u: goto label_25e844;
        case 0x25e848u: goto label_25e848;
        case 0x25e84cu: goto label_25e84c;
        case 0x25e850u: goto label_25e850;
        case 0x25e854u: goto label_25e854;
        case 0x25e858u: goto label_25e858;
        case 0x25e85cu: goto label_25e85c;
        case 0x25e860u: goto label_25e860;
        case 0x25e864u: goto label_25e864;
        case 0x25e868u: goto label_25e868;
        case 0x25e86cu: goto label_25e86c;
        case 0x25e870u: goto label_25e870;
        case 0x25e874u: goto label_25e874;
        case 0x25e878u: goto label_25e878;
        case 0x25e87cu: goto label_25e87c;
        case 0x25e880u: goto label_25e880;
        case 0x25e884u: goto label_25e884;
        case 0x25e888u: goto label_25e888;
        case 0x25e88cu: goto label_25e88c;
        case 0x25e890u: goto label_25e890;
        case 0x25e894u: goto label_25e894;
        case 0x25e898u: goto label_25e898;
        case 0x25e89cu: goto label_25e89c;
        case 0x25e8a0u: goto label_25e8a0;
        case 0x25e8a4u: goto label_25e8a4;
        case 0x25e8a8u: goto label_25e8a8;
        case 0x25e8acu: goto label_25e8ac;
        case 0x25e8b0u: goto label_25e8b0;
        case 0x25e8b4u: goto label_25e8b4;
        case 0x25e8b8u: goto label_25e8b8;
        case 0x25e8bcu: goto label_25e8bc;
        case 0x25e8c0u: goto label_25e8c0;
        case 0x25e8c4u: goto label_25e8c4;
        case 0x25e8c8u: goto label_25e8c8;
        case 0x25e8ccu: goto label_25e8cc;
        case 0x25e8d0u: goto label_25e8d0;
        case 0x25e8d4u: goto label_25e8d4;
        case 0x25e8d8u: goto label_25e8d8;
        case 0x25e8dcu: goto label_25e8dc;
        case 0x25e8e0u: goto label_25e8e0;
        case 0x25e8e4u: goto label_25e8e4;
        case 0x25e8e8u: goto label_25e8e8;
        case 0x25e8ecu: goto label_25e8ec;
        case 0x25e8f0u: goto label_25e8f0;
        case 0x25e8f4u: goto label_25e8f4;
        case 0x25e8f8u: goto label_25e8f8;
        case 0x25e8fcu: goto label_25e8fc;
        case 0x25e900u: goto label_25e900;
        case 0x25e904u: goto label_25e904;
        case 0x25e908u: goto label_25e908;
        case 0x25e90cu: goto label_25e90c;
        case 0x25e910u: goto label_25e910;
        case 0x25e914u: goto label_25e914;
        case 0x25e918u: goto label_25e918;
        case 0x25e91cu: goto label_25e91c;
        case 0x25e920u: goto label_25e920;
        case 0x25e924u: goto label_25e924;
        case 0x25e928u: goto label_25e928;
        case 0x25e92cu: goto label_25e92c;
        case 0x25e930u: goto label_25e930;
        case 0x25e934u: goto label_25e934;
        case 0x25e938u: goto label_25e938;
        case 0x25e93cu: goto label_25e93c;
        case 0x25e940u: goto label_25e940;
        case 0x25e944u: goto label_25e944;
        case 0x25e948u: goto label_25e948;
        case 0x25e94cu: goto label_25e94c;
        case 0x25e950u: goto label_25e950;
        case 0x25e954u: goto label_25e954;
        case 0x25e958u: goto label_25e958;
        case 0x25e95cu: goto label_25e95c;
        case 0x25e960u: goto label_25e960;
        case 0x25e964u: goto label_25e964;
        case 0x25e968u: goto label_25e968;
        case 0x25e96cu: goto label_25e96c;
        case 0x25e970u: goto label_25e970;
        case 0x25e974u: goto label_25e974;
        case 0x25e978u: goto label_25e978;
        case 0x25e97cu: goto label_25e97c;
        case 0x25e980u: goto label_25e980;
        case 0x25e984u: goto label_25e984;
        case 0x25e988u: goto label_25e988;
        case 0x25e98cu: goto label_25e98c;
        case 0x25e990u: goto label_25e990;
        case 0x25e994u: goto label_25e994;
        case 0x25e998u: goto label_25e998;
        case 0x25e99cu: goto label_25e99c;
        case 0x25e9a0u: goto label_25e9a0;
        case 0x25e9a4u: goto label_25e9a4;
        case 0x25e9a8u: goto label_25e9a8;
        case 0x25e9acu: goto label_25e9ac;
        case 0x25e9b0u: goto label_25e9b0;
        case 0x25e9b4u: goto label_25e9b4;
        case 0x25e9b8u: goto label_25e9b8;
        case 0x25e9bcu: goto label_25e9bc;
        case 0x25e9c0u: goto label_25e9c0;
        case 0x25e9c4u: goto label_25e9c4;
        case 0x25e9c8u: goto label_25e9c8;
        case 0x25e9ccu: goto label_25e9cc;
        case 0x25e9d0u: goto label_25e9d0;
        case 0x25e9d4u: goto label_25e9d4;
        case 0x25e9d8u: goto label_25e9d8;
        case 0x25e9dcu: goto label_25e9dc;
        case 0x25e9e0u: goto label_25e9e0;
        case 0x25e9e4u: goto label_25e9e4;
        case 0x25e9e8u: goto label_25e9e8;
        case 0x25e9ecu: goto label_25e9ec;
        case 0x25e9f0u: goto label_25e9f0;
        case 0x25e9f4u: goto label_25e9f4;
        case 0x25e9f8u: goto label_25e9f8;
        case 0x25e9fcu: goto label_25e9fc;
        case 0x25ea00u: goto label_25ea00;
        case 0x25ea04u: goto label_25ea04;
        case 0x25ea08u: goto label_25ea08;
        case 0x25ea0cu: goto label_25ea0c;
        case 0x25ea10u: goto label_25ea10;
        case 0x25ea14u: goto label_25ea14;
        case 0x25ea18u: goto label_25ea18;
        case 0x25ea1cu: goto label_25ea1c;
        case 0x25ea20u: goto label_25ea20;
        case 0x25ea24u: goto label_25ea24;
        case 0x25ea28u: goto label_25ea28;
        case 0x25ea2cu: goto label_25ea2c;
        case 0x25ea30u: goto label_25ea30;
        case 0x25ea34u: goto label_25ea34;
        case 0x25ea38u: goto label_25ea38;
        case 0x25ea3cu: goto label_25ea3c;
        case 0x25ea40u: goto label_25ea40;
        case 0x25ea44u: goto label_25ea44;
        case 0x25ea48u: goto label_25ea48;
        case 0x25ea4cu: goto label_25ea4c;
        case 0x25ea50u: goto label_25ea50;
        case 0x25ea54u: goto label_25ea54;
        case 0x25ea58u: goto label_25ea58;
        case 0x25ea5cu: goto label_25ea5c;
        case 0x25ea60u: goto label_25ea60;
        case 0x25ea64u: goto label_25ea64;
        case 0x25ea68u: goto label_25ea68;
        case 0x25ea6cu: goto label_25ea6c;
        case 0x25ea70u: goto label_25ea70;
        case 0x25ea74u: goto label_25ea74;
        case 0x25ea78u: goto label_25ea78;
        case 0x25ea7cu: goto label_25ea7c;
        case 0x25ea80u: goto label_25ea80;
        case 0x25ea84u: goto label_25ea84;
        case 0x25ea88u: goto label_25ea88;
        case 0x25ea8cu: goto label_25ea8c;
        case 0x25ea90u: goto label_25ea90;
        case 0x25ea94u: goto label_25ea94;
        case 0x25ea98u: goto label_25ea98;
        case 0x25ea9cu: goto label_25ea9c;
        case 0x25eaa0u: goto label_25eaa0;
        case 0x25eaa4u: goto label_25eaa4;
        case 0x25eaa8u: goto label_25eaa8;
        case 0x25eaacu: goto label_25eaac;
        case 0x25eab0u: goto label_25eab0;
        case 0x25eab4u: goto label_25eab4;
        case 0x25eab8u: goto label_25eab8;
        case 0x25eabcu: goto label_25eabc;
        case 0x25eac0u: goto label_25eac0;
        case 0x25eac4u: goto label_25eac4;
        case 0x25eac8u: goto label_25eac8;
        case 0x25eaccu: goto label_25eacc;
        case 0x25ead0u: goto label_25ead0;
        case 0x25ead4u: goto label_25ead4;
        case 0x25ead8u: goto label_25ead8;
        case 0x25eadcu: goto label_25eadc;
        case 0x25eae0u: goto label_25eae0;
        case 0x25eae4u: goto label_25eae4;
        case 0x25eae8u: goto label_25eae8;
        case 0x25eaecu: goto label_25eaec;
        case 0x25eaf0u: goto label_25eaf0;
        case 0x25eaf4u: goto label_25eaf4;
        case 0x25eaf8u: goto label_25eaf8;
        case 0x25eafcu: goto label_25eafc;
        case 0x25eb00u: goto label_25eb00;
        case 0x25eb04u: goto label_25eb04;
        case 0x25eb08u: goto label_25eb08;
        case 0x25eb0cu: goto label_25eb0c;
        case 0x25eb10u: goto label_25eb10;
        case 0x25eb14u: goto label_25eb14;
        case 0x25eb18u: goto label_25eb18;
        case 0x25eb1cu: goto label_25eb1c;
        case 0x25eb20u: goto label_25eb20;
        case 0x25eb24u: goto label_25eb24;
        case 0x25eb28u: goto label_25eb28;
        case 0x25eb2cu: goto label_25eb2c;
        case 0x25eb30u: goto label_25eb30;
        case 0x25eb34u: goto label_25eb34;
        case 0x25eb38u: goto label_25eb38;
        case 0x25eb3cu: goto label_25eb3c;
        case 0x25eb40u: goto label_25eb40;
        case 0x25eb44u: goto label_25eb44;
        case 0x25eb48u: goto label_25eb48;
        case 0x25eb4cu: goto label_25eb4c;
        case 0x25eb50u: goto label_25eb50;
        case 0x25eb54u: goto label_25eb54;
        case 0x25eb58u: goto label_25eb58;
        case 0x25eb5cu: goto label_25eb5c;
        case 0x25eb60u: goto label_25eb60;
        case 0x25eb64u: goto label_25eb64;
        case 0x25eb68u: goto label_25eb68;
        case 0x25eb6cu: goto label_25eb6c;
        case 0x25eb70u: goto label_25eb70;
        case 0x25eb74u: goto label_25eb74;
        case 0x25eb78u: goto label_25eb78;
        case 0x25eb7cu: goto label_25eb7c;
        case 0x25eb80u: goto label_25eb80;
        case 0x25eb84u: goto label_25eb84;
        case 0x25eb88u: goto label_25eb88;
        case 0x25eb8cu: goto label_25eb8c;
        case 0x25eb90u: goto label_25eb90;
        case 0x25eb94u: goto label_25eb94;
        case 0x25eb98u: goto label_25eb98;
        case 0x25eb9cu: goto label_25eb9c;
        case 0x25eba0u: goto label_25eba0;
        case 0x25eba4u: goto label_25eba4;
        case 0x25eba8u: goto label_25eba8;
        case 0x25ebacu: goto label_25ebac;
        case 0x25ebb0u: goto label_25ebb0;
        case 0x25ebb4u: goto label_25ebb4;
        case 0x25ebb8u: goto label_25ebb8;
        case 0x25ebbcu: goto label_25ebbc;
        case 0x25ebc0u: goto label_25ebc0;
        case 0x25ebc4u: goto label_25ebc4;
        case 0x25ebc8u: goto label_25ebc8;
        case 0x25ebccu: goto label_25ebcc;
        case 0x25ebd0u: goto label_25ebd0;
        case 0x25ebd4u: goto label_25ebd4;
        case 0x25ebd8u: goto label_25ebd8;
        case 0x25ebdcu: goto label_25ebdc;
        case 0x25ebe0u: goto label_25ebe0;
        case 0x25ebe4u: goto label_25ebe4;
        case 0x25ebe8u: goto label_25ebe8;
        case 0x25ebecu: goto label_25ebec;
        case 0x25ebf0u: goto label_25ebf0;
        case 0x25ebf4u: goto label_25ebf4;
        case 0x25ebf8u: goto label_25ebf8;
        case 0x25ebfcu: goto label_25ebfc;
        case 0x25ec00u: goto label_25ec00;
        case 0x25ec04u: goto label_25ec04;
        case 0x25ec08u: goto label_25ec08;
        case 0x25ec0cu: goto label_25ec0c;
        case 0x25ec10u: goto label_25ec10;
        case 0x25ec14u: goto label_25ec14;
        case 0x25ec18u: goto label_25ec18;
        case 0x25ec1cu: goto label_25ec1c;
        case 0x25ec20u: goto label_25ec20;
        case 0x25ec24u: goto label_25ec24;
        case 0x25ec28u: goto label_25ec28;
        case 0x25ec2cu: goto label_25ec2c;
        case 0x25ec30u: goto label_25ec30;
        case 0x25ec34u: goto label_25ec34;
        case 0x25ec38u: goto label_25ec38;
        case 0x25ec3cu: goto label_25ec3c;
        case 0x25ec40u: goto label_25ec40;
        case 0x25ec44u: goto label_25ec44;
        case 0x25ec48u: goto label_25ec48;
        case 0x25ec4cu: goto label_25ec4c;
        case 0x25ec50u: goto label_25ec50;
        case 0x25ec54u: goto label_25ec54;
        case 0x25ec58u: goto label_25ec58;
        case 0x25ec5cu: goto label_25ec5c;
        case 0x25ec60u: goto label_25ec60;
        case 0x25ec64u: goto label_25ec64;
        case 0x25ec68u: goto label_25ec68;
        case 0x25ec6cu: goto label_25ec6c;
        case 0x25ec70u: goto label_25ec70;
        case 0x25ec74u: goto label_25ec74;
        case 0x25ec78u: goto label_25ec78;
        case 0x25ec7cu: goto label_25ec7c;
        case 0x25ec80u: goto label_25ec80;
        case 0x25ec84u: goto label_25ec84;
        case 0x25ec88u: goto label_25ec88;
        case 0x25ec8cu: goto label_25ec8c;
        case 0x25ec90u: goto label_25ec90;
        case 0x25ec94u: goto label_25ec94;
        case 0x25ec98u: goto label_25ec98;
        case 0x25ec9cu: goto label_25ec9c;
        case 0x25eca0u: goto label_25eca0;
        case 0x25eca4u: goto label_25eca4;
        case 0x25eca8u: goto label_25eca8;
        case 0x25ecacu: goto label_25ecac;
        case 0x25ecb0u: goto label_25ecb0;
        case 0x25ecb4u: goto label_25ecb4;
        case 0x25ecb8u: goto label_25ecb8;
        case 0x25ecbcu: goto label_25ecbc;
        case 0x25ecc0u: goto label_25ecc0;
        case 0x25ecc4u: goto label_25ecc4;
        case 0x25ecc8u: goto label_25ecc8;
        case 0x25ecccu: goto label_25eccc;
        case 0x25ecd0u: goto label_25ecd0;
        case 0x25ecd4u: goto label_25ecd4;
        case 0x25ecd8u: goto label_25ecd8;
        case 0x25ecdcu: goto label_25ecdc;
        case 0x25ece0u: goto label_25ece0;
        case 0x25ece4u: goto label_25ece4;
        case 0x25ece8u: goto label_25ece8;
        case 0x25ececu: goto label_25ecec;
        case 0x25ecf0u: goto label_25ecf0;
        case 0x25ecf4u: goto label_25ecf4;
        case 0x25ecf8u: goto label_25ecf8;
        case 0x25ecfcu: goto label_25ecfc;
        case 0x25ed00u: goto label_25ed00;
        case 0x25ed04u: goto label_25ed04;
        case 0x25ed08u: goto label_25ed08;
        case 0x25ed0cu: goto label_25ed0c;
        case 0x25ed10u: goto label_25ed10;
        case 0x25ed14u: goto label_25ed14;
        case 0x25ed18u: goto label_25ed18;
        case 0x25ed1cu: goto label_25ed1c;
        case 0x25ed20u: goto label_25ed20;
        case 0x25ed24u: goto label_25ed24;
        case 0x25ed28u: goto label_25ed28;
        case 0x25ed2cu: goto label_25ed2c;
        case 0x25ed30u: goto label_25ed30;
        case 0x25ed34u: goto label_25ed34;
        case 0x25ed38u: goto label_25ed38;
        case 0x25ed3cu: goto label_25ed3c;
        case 0x25ed40u: goto label_25ed40;
        case 0x25ed44u: goto label_25ed44;
        case 0x25ed48u: goto label_25ed48;
        case 0x25ed4cu: goto label_25ed4c;
        default: return;
    }

label_25e580:
    // 0x25e580: 0x8554  .word       0x00008554                   # dsllv       $s0, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e580u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_25e584:
    // 0x25e584: 0x58c0  sll         $t3, $zero, 3
    ctx->pc = 0x25e584u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 0), 3));
label_25e588:
    // 0x25e588: 0x0  nop
    ctx->pc = 0x25e588u;
    // NOP
label_25e58c:
    // 0x25e58c: 0x0  nop
    ctx->pc = 0x25e58cu;
    // NOP
label_25e590:
    // 0x25e590: 0x8560  .word       0x00008560                   # add         $s0, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e590u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_25e594:
    // 0x25e594: 0x7b20  .word       0x00007B20                   # add         $t7, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e594u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_25e598:
    // 0x25e598: 0x0  nop
    ctx->pc = 0x25e598u;
    // NOP
label_25e59c:
    // 0x25e59c: 0x0  nop
    ctx->pc = 0x25e59cu;
    // NOP
label_25e5a0:
    // 0x25e5a0: 0x8570  tge         $zero, $zero, 533
    ctx->pc = 0x25e5a0u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25e5a4:
    // 0x25e5a4: 0x8910  .word       0x00008910                   # mfhi        $s1 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e5a4u;
    SET_GPR_U64(ctx, 17, ctx->hi);
label_25e5a8:
    // 0x25e5a8: 0x0  nop
    ctx->pc = 0x25e5a8u;
    // NOP
label_25e5ac:
    // 0x25e5ac: 0x0  nop
    ctx->pc = 0x25e5acu;
    // NOP
label_25e5b0:
    // 0x25e5b0: 0x8582  srl         $s0, $zero, 22
    ctx->pc = 0x25e5b0u;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 0), 22));
label_25e5b4:
    // 0x25e5b4: 0xa650  .word       0x0000A650                   # mfhi        $s4 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e5b4u;
    SET_GPR_U64(ctx, 20, ctx->hi);
label_25e5b8:
    // 0x25e5b8: 0x0  nop
    ctx->pc = 0x25e5b8u;
    // NOP
label_25e5bc:
    // 0x25e5bc: 0x0  nop
    ctx->pc = 0x25e5bcu;
    // NOP
label_25e5c0:
    // 0x25e5c0: 0x8597  .word       0x00008597                   # dsrav       $s0, $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e5c0u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_25e5c4:
    // 0x25e5c4: 0xd6c0  sll         $k0, $zero, 27
    ctx->pc = 0x25e5c4u;
    SET_GPR_S32(ctx, 26, (int32_t)SLL32(GPR_U32(ctx, 0), 27));
label_25e5c8:
    // 0x25e5c8: 0x0  nop
    ctx->pc = 0x25e5c8u;
    // NOP
label_25e5cc:
    // 0x25e5cc: 0x0  nop
    ctx->pc = 0x25e5ccu;
    // NOP
label_25e5d0:
    // 0x25e5d0: 0x85b2  tlt         $zero, $zero, 534
    ctx->pc = 0x25e5d0u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25e5d4:
    // 0x25e5d4: 0x7720  .word       0x00007720                   # add         $t6, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e5d4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_25e5d8:
    // 0x25e5d8: 0x0  nop
    ctx->pc = 0x25e5d8u;
    // NOP
label_25e5dc:
    // 0x25e5dc: 0x0  nop
    ctx->pc = 0x25e5dcu;
    // NOP
label_25e5e0:
    // 0x25e5e0: 0x85c1  .word       0x000085C1                   # INVALID     $zero, $zero, -0x7A3F # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e5e0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x25E5E0 raw=0x000085C1"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25e5e4:
    // 0x25e5e4: 0x8cc0  sll         $s1, $zero, 19
    ctx->pc = 0x25e5e4u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
label_25e5e8:
    // 0x25e5e8: 0x0  nop
    ctx->pc = 0x25e5e8u;
    // NOP
label_25e5ec:
    // 0x25e5ec: 0x0  nop
    ctx->pc = 0x25e5ecu;
    // NOP
label_25e5f0:
    // 0x25e5f0: 0x85d3  .word       0x000085D3                   # mtlo        $zero # 000085C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e5f0u;
    ctx->lo = GPR_U64(ctx, 0);
label_25e5f4:
    // 0x25e5f4: 0x5b00  sll         $t3, $zero, 12
    ctx->pc = 0x25e5f4u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 0), 12));
label_25e5f8:
    // 0x25e5f8: 0x0  nop
    ctx->pc = 0x25e5f8u;
    // NOP
label_25e5fc:
    // 0x25e5fc: 0x0  nop
    ctx->pc = 0x25e5fcu;
    // NOP
label_25e600:
    // 0x25e600: 0x85df  .word       0x000085DF                   # ddivu       $s0, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e600u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x25E600 raw=0x000085DF"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25e604:
    // 0x25e604: 0x8630  tge         $zero, $zero, 536
    ctx->pc = 0x25e604u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25e608:
    // 0x25e608: 0x0  nop
    ctx->pc = 0x25e608u;
    // NOP
label_25e60c:
    // 0x25e60c: 0x0  nop
    ctx->pc = 0x25e60cu;
    // NOP
label_25e610:
    // 0x25e610: 0x85f0  tge         $zero, $zero, 535
    ctx->pc = 0x25e610u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25e614:
    // 0x25e614: 0x6080  sll         $t4, $zero, 2
    ctx->pc = 0x25e614u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 2));
label_25e618:
    // 0x25e618: 0x0  nop
    ctx->pc = 0x25e618u;
    // NOP
label_25e61c:
    // 0x25e61c: 0x0  nop
    ctx->pc = 0x25e61cu;
    // NOP
label_25e620:
    // 0x25e620: 0x85fd  .word       0x000085FD                   # INVALID     $zero, $zero, -0x7A03 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e620u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x25E620 raw=0x000085FD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25e624:
    // 0x25e624: 0x3fe0  .word       0x00003FE0                   # add         $a3, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e624u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
label_25e628:
    // 0x25e628: 0x0  nop
    ctx->pc = 0x25e628u;
    // NOP
label_25e62c:
    // 0x25e62c: 0x0  nop
    ctx->pc = 0x25e62cu;
    // NOP
label_25e630:
    // 0x25e630: 0x8605  .word       0x00008605                   # INVALID     $zero, $zero, -0x79FB # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e630u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x25E630 raw=0x00008605"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25e634:
    // 0x25e634: 0x8f10  .word       0x00008F10                   # mfhi        $s1 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e634u;
    SET_GPR_U64(ctx, 17, ctx->hi);
label_25e638:
    // 0x25e638: 0x0  nop
    ctx->pc = 0x25e638u;
    // NOP
label_25e63c:
    // 0x25e63c: 0x0  nop
    ctx->pc = 0x25e63cu;
    // NOP
label_25e640:
    // 0x25e640: 0x8617  .word       0x00008617                   # dsrav       $s0, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e640u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_25e644:
    // 0x25e644: 0x7820  add         $t7, $zero, $zero
    ctx->pc = 0x25e644u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_25e648:
    // 0x25e648: 0x0  nop
    ctx->pc = 0x25e648u;
    // NOP
label_25e64c:
    // 0x25e64c: 0x0  nop
    ctx->pc = 0x25e64cu;
    // NOP
label_25e650:
    // 0x25e650: 0x8627  .word       0x00008627                   # not         $s0, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e650u;
    SET_GPR_U64(ctx, 16, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_25e654:
    // 0x25e654: 0x80d0  .word       0x000080D0                   # mfhi        $s0 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e654u;
    SET_GPR_U64(ctx, 16, ctx->hi);
label_25e658:
    // 0x25e658: 0x0  nop
    ctx->pc = 0x25e658u;
    // NOP
label_25e65c:
    // 0x25e65c: 0x0  nop
    ctx->pc = 0x25e65cu;
    // NOP
label_25e660:
    // 0x25e660: 0x8638  dsll        $s0, $zero, 24
    ctx->pc = 0x25e660u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) << 24);
label_25e664:
    // 0x25e664: 0x58c0  sll         $t3, $zero, 3
    ctx->pc = 0x25e664u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 0), 3));
label_25e668:
    // 0x25e668: 0x0  nop
    ctx->pc = 0x25e668u;
    // NOP
label_25e66c:
    // 0x25e66c: 0x0  nop
    ctx->pc = 0x25e66cu;
    // NOP
label_25e670:
    // 0x25e670: 0x8644  .word       0x00008644                   # sllv        $s0, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e670u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_25e674:
    // 0x25e674: 0x6b50  .word       0x00006B50                   # mfhi        $t5 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e674u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_25e678:
    // 0x25e678: 0x0  nop
    ctx->pc = 0x25e678u;
    // NOP
label_25e67c:
    // 0x25e67c: 0x0  nop
    ctx->pc = 0x25e67cu;
    // NOP
label_25e680:
    // 0x25e680: 0x8652  .word       0x00008652                   # mflo        $s0 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e680u;
    SET_GPR_U64(ctx, 16, ctx->lo);
label_25e684:
    // 0x25e684: 0x94c0  sll         $s2, $zero, 19
    ctx->pc = 0x25e684u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
label_25e688:
    // 0x25e688: 0x0  nop
    ctx->pc = 0x25e688u;
    // NOP
label_25e68c:
    // 0x25e68c: 0x0  nop
    ctx->pc = 0x25e68cu;
    // NOP
label_25e690:
    // 0x25e690: 0x8665  .word       0x00008665                   # move        $s0, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e690u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_25e694:
    // 0x25e694: 0x8680  sll         $s0, $zero, 26
    ctx->pc = 0x25e694u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 0), 26));
label_25e698:
    // 0x25e698: 0x0  nop
    ctx->pc = 0x25e698u;
    // NOP
label_25e69c:
    // 0x25e69c: 0x0  nop
    ctx->pc = 0x25e69cu;
    // NOP
label_25e6a0:
    // 0x25e6a0: 0x8676  tne         $zero, $zero, 537
    ctx->pc = 0x25e6a0u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25e6a4:
    // 0x25e6a4: 0x2240  sll         $a0, $zero, 9
    ctx->pc = 0x25e6a4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 0), 9));
label_25e6a8:
    // 0x25e6a8: 0x0  nop
    ctx->pc = 0x25e6a8u;
    // NOP
label_25e6ac:
    // 0x25e6ac: 0x0  nop
    ctx->pc = 0x25e6acu;
    // NOP
label_25e6b0:
    // 0x25e6b0: 0x867b  dsra        $s0, $zero, 25
    ctx->pc = 0x25e6b0u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 0) >> 25);
label_25e6b4:
    // 0x25e6b4: 0x2d80  sll         $a1, $zero, 22
    ctx->pc = 0x25e6b4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 0), 22));
label_25e6b8:
    // 0x25e6b8: 0x0  nop
    ctx->pc = 0x25e6b8u;
    // NOP
label_25e6bc:
    // 0x25e6bc: 0x0  nop
    ctx->pc = 0x25e6bcu;
    // NOP
label_25e6c0:
    // 0x25e6c0: 0x8681  .word       0x00008681                   # INVALID     $zero, $zero, -0x797F # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e6c0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x25E6C0 raw=0x00008681"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25e6c4:
    // 0x25e6c4: 0x3400  sll         $a2, $zero, 16
    ctx->pc = 0x25e6c4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 0), 16));
label_25e6c8:
    // 0x25e6c8: 0x0  nop
    ctx->pc = 0x25e6c8u;
    // NOP
label_25e6cc:
    // 0x25e6cc: 0x0  nop
    ctx->pc = 0x25e6ccu;
    // NOP
label_25e6d0:
    // 0x25e6d0: 0x8688  .word       0x00008688                   # jr          $zero # 00008680 <InstrIdType: CPU_SPECIAL>
label_25e6d4:
    if (ctx->pc == 0x25E6D4u) {
        ctx->pc = 0x25E6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E6D0u;
        // 0x25e6d4: 0x2ec0  sll         $a1, $zero, 27 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 0), 27));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E6D8u;
        goto label_25e6d8;
    }
    ctx->pc = 0x25E6D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x25E6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E6D0u;
        // 0x25e6d4: 0x2ec0  sll         $a1, $zero, 27 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 0), 27));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25E6D0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x25E6D8u;
label_25e6d8:
    // 0x25e6d8: 0x0  nop
    ctx->pc = 0x25e6d8u;
    // NOP
label_25e6dc:
    // 0x25e6dc: 0x0  nop
    ctx->pc = 0x25e6dcu;
    // NOP
label_25e6e0:
    // 0x25e6e0: 0x868e  .word       0x0000868E                   # INVALID     $zero, $zero, -0x7972 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e6e0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x25E6E0 raw=0x0000868E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25e6e4:
    // 0x25e6e4: 0x6150  .word       0x00006150                   # mfhi        $t4 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e6e4u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_25e6e8:
    // 0x25e6e8: 0x0  nop
    ctx->pc = 0x25e6e8u;
    // NOP
label_25e6ec:
    // 0x25e6ec: 0x0  nop
    ctx->pc = 0x25e6ecu;
    // NOP
label_25e6f0:
    // 0x25e6f0: 0x869b  .word       0x0000869B                   # divu        $s0, $zero, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e6f0u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_25e6f4:
    // 0x25e6f4: 0x3680  sll         $a2, $zero, 26
    ctx->pc = 0x25e6f4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 0), 26));
label_25e6f8:
    // 0x25e6f8: 0x0  nop
    ctx->pc = 0x25e6f8u;
    // NOP
label_25e6fc:
    // 0x25e6fc: 0x0  nop
    ctx->pc = 0x25e6fcu;
    // NOP
label_25e700:
    // 0x25e700: 0x86a2  .word       0x000086A2                   # neg         $s0, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e700u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 16, (int32_t)tmp); }
label_25e704:
    // 0x25e704: 0x2d10  .word       0x00002D10                   # mfhi        $a1 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e704u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_25e708:
    // 0x25e708: 0x0  nop
    ctx->pc = 0x25e708u;
    // NOP
label_25e70c:
    // 0x25e70c: 0x0  nop
    ctx->pc = 0x25e70cu;
    // NOP
label_25e710:
    // 0x25e710: 0x86a8  .word       0x000086A8                   # mfsa        $s0 # 00000680 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x25e710u;
    SET_GPR_U32(ctx, 16, ctx->sa);
label_25e714:
    // 0x25e714: 0x2810  mfhi        $a1
    ctx->pc = 0x25e714u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_25e718:
    // 0x25e718: 0x0  nop
    ctx->pc = 0x25e718u;
    // NOP
label_25e71c:
    // 0x25e71c: 0x0  nop
    ctx->pc = 0x25e71cu;
    // NOP
label_25e720:
    // 0x25e720: 0x86ae  .word       0x000086AE                   # dsub        $s0, $zero, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e720u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 16, r); }
label_25e724:
    // 0x25e724: 0x29a0  .word       0x000029A0                   # add         $a1, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e724u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 5, (int32_t)result);     } }
label_25e728:
    // 0x25e728: 0x0  nop
    ctx->pc = 0x25e728u;
    // NOP
label_25e72c:
    // 0x25e72c: 0x0  nop
    ctx->pc = 0x25e72cu;
    // NOP
label_25e730:
    // 0x25e730: 0x86b4  teq         $zero, $zero, 538
    ctx->pc = 0x25e730u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25e734:
    // 0x25e734: 0x25d0  .word       0x000025D0                   # mfhi        $a0 # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e734u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_25e738:
    // 0x25e738: 0x0  nop
    ctx->pc = 0x25e738u;
    // NOP
label_25e73c:
    // 0x25e73c: 0x0  nop
    ctx->pc = 0x25e73cu;
    // NOP
label_25e740:
    // 0x25e740: 0x86b9  .word       0x000086B9                   # INVALID     $zero, $zero, -0x7947 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e740u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x25E740 raw=0x000086B9"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25e744:
    // 0x25e744: 0x39d0  .word       0x000039D0                   # mfhi        $a3 # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e744u;
    SET_GPR_U64(ctx, 7, ctx->hi);
label_25e748:
    // 0x25e748: 0x0  nop
    ctx->pc = 0x25e748u;
    // NOP
label_25e74c:
    // 0x25e74c: 0x0  nop
    ctx->pc = 0x25e74cu;
    // NOP
label_25e750:
    // 0x25e750: 0x86c1  .word       0x000086C1                   # INVALID     $zero, $zero, -0x793F # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e750u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x25E750 raw=0x000086C1"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25e754:
    // 0x25e754: 0x3a00  sll         $a3, $zero, 8
    ctx->pc = 0x25e754u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 0), 8));
label_25e758:
    // 0x25e758: 0x0  nop
    ctx->pc = 0x25e758u;
    // NOP
label_25e75c:
    // 0x25e75c: 0x0  nop
    ctx->pc = 0x25e75cu;
    // NOP
label_25e760:
    // 0x25e760: 0x86c9  .word       0x000086C9                   # jalr        $s0, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
label_25e764:
    if (ctx->pc == 0x25E764u) {
        ctx->pc = 0x25E764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E760u;
        // 0x25e764: 0x2950  .word       0x00002950                   # mfhi        $a1 # 00000140 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 5, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E768u;
        goto label_25e768;
    }
    ctx->pc = 0x25E760u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 16, 0x25E768u);
        ctx->pc = 0x25E764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E760u;
        // 0x25e764: 0x2950  .word       0x00002950                   # mfhi        $a1 # 00000140 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 5, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25E760u, 0x25E768u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25E768u;
label_25e768:
    // 0x25e768: 0x0  nop
    ctx->pc = 0x25e768u;
    // NOP
label_25e76c:
    // 0x25e76c: 0x0  nop
    ctx->pc = 0x25e76cu;
    // NOP
label_25e770:
    // 0x25e770: 0x86cf  .word       0x000086CF                   # sync.p # 00008000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e770u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_25e774:
    // 0x25e774: 0x3290  .word       0x00003290                   # mfhi        $a2 # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e774u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_25e778:
    // 0x25e778: 0x0  nop
    ctx->pc = 0x25e778u;
    // NOP
label_25e77c:
    // 0x25e77c: 0x0  nop
    ctx->pc = 0x25e77cu;
    // NOP
label_25e780:
    // 0x25e780: 0x86d6  .word       0x000086D6                   # dsrlv       $s0, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e780u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_25e784:
    // 0x25e784: 0x2d90  .word       0x00002D90                   # mfhi        $a1 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e784u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_25e788:
    // 0x25e788: 0x0  nop
    ctx->pc = 0x25e788u;
    // NOP
label_25e78c:
    // 0x25e78c: 0x0  nop
    ctx->pc = 0x25e78cu;
    // NOP
label_25e790:
    // 0x25e790: 0x86dc  .word       0x000086DC                   # dmult       $zero, $zero # 000086C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e790u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x25E790 raw=0x000086DC"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25e794:
    // 0x25e794: 0x3120  .word       0x00003120                   # add         $a2, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e794u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 6, (int32_t)result);     } }
label_25e798:
    // 0x25e798: 0x0  nop
    ctx->pc = 0x25e798u;
    // NOP
label_25e79c:
    // 0x25e79c: 0x0  nop
    ctx->pc = 0x25e79cu;
    // NOP
label_25e7a0:
    // 0x25e7a0: 0x86e3  .word       0x000086E3                   # negu        $s0, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e7a0u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_25e7a4:
    // 0x25e7a4: 0x2000  sll         $a0, $zero, 0
    ctx->pc = 0x25e7a4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_25e7a8:
    // 0x25e7a8: 0x0  nop
    ctx->pc = 0x25e7a8u;
    // NOP
label_25e7ac:
    // 0x25e7ac: 0x0  nop
    ctx->pc = 0x25e7acu;
    // NOP
label_25e7b0:
    // 0x25e7b0: 0x86e7  .word       0x000086E7                   # not         $s0, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e7b0u;
    SET_GPR_U64(ctx, 16, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_25e7b4:
    // 0x25e7b4: 0x31c0  sll         $a2, $zero, 7
    ctx->pc = 0x25e7b4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 0), 7));
label_25e7b8:
    // 0x25e7b8: 0x0  nop
    ctx->pc = 0x25e7b8u;
    // NOP
label_25e7bc:
    // 0x25e7bc: 0x0  nop
    ctx->pc = 0x25e7bcu;
    // NOP
label_25e7c0:
    // 0x25e7c0: 0x86ee  .word       0x000086EE                   # dsub        $s0, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e7c0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 16, r); }
label_25e7c4:
    // 0x25e7c4: 0x3420  .word       0x00003420                   # add         $a2, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e7c4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 6, (int32_t)result);     } }
label_25e7c8:
    // 0x25e7c8: 0x0  nop
    ctx->pc = 0x25e7c8u;
    // NOP
label_25e7cc:
    // 0x25e7cc: 0x0  nop
    ctx->pc = 0x25e7ccu;
    // NOP
label_25e7d0:
    // 0x25e7d0: 0x86f5  .word       0x000086F5                   # INVALID     $zero, $zero, -0x790B # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e7d0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x25E7D0 raw=0x000086F5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25e7d4:
    // 0x25e7d4: 0x3060  .word       0x00003060                   # add         $a2, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e7d4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 6, (int32_t)result);     } }
label_25e7d8:
    // 0x25e7d8: 0x0  nop
    ctx->pc = 0x25e7d8u;
    // NOP
label_25e7dc:
    // 0x25e7dc: 0x0  nop
    ctx->pc = 0x25e7dcu;
    // NOP
label_25e7e0:
    // 0x25e7e0: 0x86fc  dsll32      $s0, $zero, 27
    ctx->pc = 0x25e7e0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) << (32 + 27));
label_25e7e4:
    // 0x25e7e4: 0x3e90  .word       0x00003E90                   # mfhi        $a3 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e7e4u;
    SET_GPR_U64(ctx, 7, ctx->hi);
label_25e7e8:
    // 0x25e7e8: 0x0  nop
    ctx->pc = 0x25e7e8u;
    // NOP
label_25e7ec:
    // 0x25e7ec: 0x0  nop
    ctx->pc = 0x25e7ecu;
    // NOP
label_25e7f0:
    // 0x25e7f0: 0x8704  .word       0x00008704                   # sllv        $s0, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e7f0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_25e7f4:
    // 0x25e7f4: 0x36c0  sll         $a2, $zero, 27
    ctx->pc = 0x25e7f4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 0), 27));
label_25e7f8:
    // 0x25e7f8: 0x0  nop
    ctx->pc = 0x25e7f8u;
    // NOP
label_25e7fc:
    // 0x25e7fc: 0x0  nop
    ctx->pc = 0x25e7fcu;
    // NOP
label_25e800:
    // 0x25e800: 0x870b  .word       0x0000870B                   # movn        $s0, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e800u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
label_25e804:
    // 0x25e804: 0x2720  .word       0x00002720                   # add         $a0, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e804u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 4, (int32_t)result);     } }
label_25e808:
    // 0x25e808: 0x0  nop
    ctx->pc = 0x25e808u;
    // NOP
label_25e80c:
    // 0x25e80c: 0x0  nop
    ctx->pc = 0x25e80cu;
    // NOP
label_25e810:
    // 0x25e810: 0x8710  .word       0x00008710                   # mfhi        $s0 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e810u;
    SET_GPR_U64(ctx, 16, ctx->hi);
label_25e814:
    // 0x25e814: 0x3620  .word       0x00003620                   # add         $a2, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e814u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 6, (int32_t)result);     } }
label_25e818:
    // 0x25e818: 0x0  nop
    ctx->pc = 0x25e818u;
    // NOP
label_25e81c:
    // 0x25e81c: 0x0  nop
    ctx->pc = 0x25e81cu;
    // NOP
label_25e820:
    // 0x25e820: 0x8717  .word       0x00008717                   # dsrav       $s0, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e820u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_25e824:
    // 0x25e824: 0x2f20  .word       0x00002F20                   # add         $a1, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e824u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 5, (int32_t)result);     } }
label_25e828:
    // 0x25e828: 0x0  nop
    ctx->pc = 0x25e828u;
    // NOP
label_25e82c:
    // 0x25e82c: 0x0  nop
    ctx->pc = 0x25e82cu;
    // NOP
label_25e830:
    // 0x25e830: 0x871d  .word       0x0000871D                   # dmultu      $zero, $zero # 00008700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e830u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x25E830 raw=0x0000871D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25e834:
    // 0x25e834: 0x4300  sll         $t0, $zero, 12
    ctx->pc = 0x25e834u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 12));
label_25e838:
    // 0x25e838: 0x0  nop
    ctx->pc = 0x25e838u;
    // NOP
label_25e83c:
    // 0x25e83c: 0x0  nop
    ctx->pc = 0x25e83cu;
    // NOP
label_25e840:
    // 0x25e840: 0x8726  .word       0x00008726                   # xor         $s0, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e840u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_25e844:
    // 0x25e844: 0x2920  .word       0x00002920                   # add         $a1, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e844u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 5, (int32_t)result);     } }
label_25e848:
    // 0x25e848: 0x0  nop
    ctx->pc = 0x25e848u;
    // NOP
label_25e84c:
    // 0x25e84c: 0x0  nop
    ctx->pc = 0x25e84cu;
    // NOP
label_25e850:
    // 0x25e850: 0x872c  .word       0x0000872C                   # dadd        $s0, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e850u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 16, r); }
label_25e854:
    // 0x25e854: 0x3070  tge         $zero, $zero, 193
    ctx->pc = 0x25e854u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25e858:
    // 0x25e858: 0x0  nop
    ctx->pc = 0x25e858u;
    // NOP
label_25e85c:
    // 0x25e85c: 0x0  nop
    ctx->pc = 0x25e85cu;
    // NOP
label_25e860:
    // 0x25e860: 0x8733  tltu        $zero, $zero, 540
    ctx->pc = 0x25e860u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25e864:
    // 0x25e864: 0x2a50  .word       0x00002A50                   # mfhi        $a1 # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e864u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_25e868:
    // 0x25e868: 0x0  nop
    ctx->pc = 0x25e868u;
    // NOP
label_25e86c:
    // 0x25e86c: 0x0  nop
    ctx->pc = 0x25e86cu;
    // NOP
label_25e870:
    // 0x25e870: 0x8739  .word       0x00008739                   # INVALID     $zero, $zero, -0x78C7 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e870u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x25E870 raw=0x00008739"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25e874:
    // 0x25e874: 0x2be0  .word       0x00002BE0                   # add         $a1, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e874u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 5, (int32_t)result);     } }
label_25e878:
    // 0x25e878: 0x0  nop
    ctx->pc = 0x25e878u;
    // NOP
label_25e87c:
    // 0x25e87c: 0x0  nop
    ctx->pc = 0x25e87cu;
    // NOP
label_25e880:
    // 0x25e880: 0x873f  dsra32      $s0, $zero, 28
    ctx->pc = 0x25e880u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 0) >> (32 + 28));
label_25e884:
    // 0x25e884: 0x29e0  .word       0x000029E0                   # add         $a1, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e884u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 5, (int32_t)result);     } }
label_25e888:
    // 0x25e888: 0x0  nop
    ctx->pc = 0x25e888u;
    // NOP
label_25e88c:
    // 0x25e88c: 0x0  nop
    ctx->pc = 0x25e88cu;
    // NOP
label_25e890:
    // 0x25e890: 0x8745  .word       0x00008745                   # INVALID     $zero, $zero, -0x78BB # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e890u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x25E890 raw=0x00008745"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25e894:
    // 0x25e894: 0x3020  add         $a2, $zero, $zero
    ctx->pc = 0x25e894u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 6, (int32_t)result);     } }
label_25e898:
    // 0x25e898: 0x0  nop
    ctx->pc = 0x25e898u;
    // NOP
label_25e89c:
    // 0x25e89c: 0x0  nop
    ctx->pc = 0x25e89cu;
    // NOP
label_25e8a0:
    // 0x25e8a0: 0x874c  syscall     541
    ctx->pc = 0x25e8a0u;
    ctx->pc = 0x25E8A4u;
runtime->handleSyscall(rdram, ctx, 0x21Du);
label_25e8a4:
    // 0x25e8a4: 0x2de0  .word       0x00002DE0                   # add         $a1, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e8a4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 5, (int32_t)result);     } }
label_25e8a8:
    // 0x25e8a8: 0x0  nop
    ctx->pc = 0x25e8a8u;
    // NOP
label_25e8ac:
    // 0x25e8ac: 0x0  nop
    ctx->pc = 0x25e8acu;
    // NOP
label_25e8b0:
    // 0x25e8b0: 0x8752  .word       0x00008752                   # mflo        $s0 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e8b0u;
    SET_GPR_U64(ctx, 16, ctx->lo);
label_25e8b4:
    // 0x25e8b4: 0x31e0  .word       0x000031E0                   # add         $a2, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e8b4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 6, (int32_t)result);     } }
label_25e8b8:
    // 0x25e8b8: 0x0  nop
    ctx->pc = 0x25e8b8u;
    // NOP
label_25e8bc:
    // 0x25e8bc: 0x0  nop
    ctx->pc = 0x25e8bcu;
    // NOP
label_25e8c0:
    // 0x25e8c0: 0x8759  .word       0x00008759                   # multu       $zero, $zero # 00008740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e8c0u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
label_25e8c4:
    // 0x25e8c4: 0x7990  .word       0x00007990                   # mfhi        $t7 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e8c4u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_25e8c8:
    // 0x25e8c8: 0x0  nop
    ctx->pc = 0x25e8c8u;
    // NOP
label_25e8cc:
    // 0x25e8cc: 0x0  nop
    ctx->pc = 0x25e8ccu;
    // NOP
label_25e8d0:
    // 0x25e8d0: 0x8769  .word       0x00008769                   # mtsa        $zero # 00008740 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x25e8d0u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_25e8d4:
    // 0x25e8d4: 0x3ae0  .word       0x00003AE0                   # add         $a3, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e8d4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
label_25e8d8:
    // 0x25e8d8: 0x0  nop
    ctx->pc = 0x25e8d8u;
    // NOP
label_25e8dc:
    // 0x25e8dc: 0x0  nop
    ctx->pc = 0x25e8dcu;
    // NOP
label_25e8e0:
    // 0x25e8e0: 0x8771  tgeu        $zero, $zero, 541
    ctx->pc = 0x25e8e0u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25e8e4:
    // 0x25e8e4: 0x3870  tge         $zero, $zero, 225
    ctx->pc = 0x25e8e4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25e8e8:
    // 0x25e8e8: 0x0  nop
    ctx->pc = 0x25e8e8u;
    // NOP
label_25e8ec:
    // 0x25e8ec: 0x0  nop
    ctx->pc = 0x25e8ecu;
    // NOP
label_25e8f0:
    // 0x25e8f0: 0x8779  .word       0x00008779                   # INVALID     $zero, $zero, -0x7887 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e8f0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x25E8F0 raw=0x00008779"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25e8f4:
    // 0x25e8f4: 0x3660  .word       0x00003660                   # add         $a2, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e8f4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 6, (int32_t)result);     } }
label_25e8f8:
    // 0x25e8f8: 0x0  nop
    ctx->pc = 0x25e8f8u;
    // NOP
label_25e8fc:
    // 0x25e8fc: 0x0  nop
    ctx->pc = 0x25e8fcu;
    // NOP
label_25e900:
    // 0x25e900: 0x8780  sll         $s0, $zero, 30
    ctx->pc = 0x25e900u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 0), 30));
label_25e904:
    // 0x25e904: 0x3aa0  .word       0x00003AA0                   # add         $a3, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e904u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
label_25e908:
    // 0x25e908: 0x0  nop
    ctx->pc = 0x25e908u;
    // NOP
label_25e90c:
    // 0x25e90c: 0x0  nop
    ctx->pc = 0x25e90cu;
    // NOP
label_25e910:
    // 0x25e910: 0x8788  .word       0x00008788                   # jr          $zero # 00008780 <InstrIdType: CPU_SPECIAL>
label_25e914:
    if (ctx->pc == 0x25E914u) {
        ctx->pc = 0x25E914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E910u;
        // 0x25e914: 0x2ca0  .word       0x00002CA0                   # add         $a1, $zero, $zero # 00000480 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 5, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E918u;
        goto label_25e918;
    }
    ctx->pc = 0x25E910u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x25E914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E910u;
        // 0x25e914: 0x2ca0  .word       0x00002CA0                   # add         $a1, $zero, $zero # 00000480 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 5, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25E910u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x25E918u;
label_25e918:
    // 0x25e918: 0x0  nop
    ctx->pc = 0x25e918u;
    // NOP
label_25e91c:
    // 0x25e91c: 0x0  nop
    ctx->pc = 0x25e91cu;
    // NOP
label_25e920:
    // 0x25e920: 0x878e  .word       0x0000878E                   # INVALID     $zero, $zero, -0x7872 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e920u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x25E920 raw=0x0000878E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25e924:
    // 0x25e924: 0x3070  tge         $zero, $zero, 193
    ctx->pc = 0x25e924u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25e928:
    // 0x25e928: 0x0  nop
    ctx->pc = 0x25e928u;
    // NOP
label_25e92c:
    // 0x25e92c: 0x0  nop
    ctx->pc = 0x25e92cu;
    // NOP
label_25e930:
    // 0x25e930: 0x8795  .word       0x00008795                   # INVALID     $zero, $zero, -0x786B # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e930u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x25E930 raw=0x00008795"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25e934:
    // 0x25e934: 0x6cd0  .word       0x00006CD0                   # mfhi        $t5 # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e934u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_25e938:
    // 0x25e938: 0x0  nop
    ctx->pc = 0x25e938u;
    // NOP
label_25e93c:
    // 0x25e93c: 0x0  nop
    ctx->pc = 0x25e93cu;
    // NOP
label_25e940:
    // 0x25e940: 0x87a3  .word       0x000087A3                   # negu        $s0, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e940u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_25e944:
    // 0x25e944: 0x77e0  .word       0x000077E0                   # add         $t6, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e944u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_25e948:
    // 0x25e948: 0x0  nop
    ctx->pc = 0x25e948u;
    // NOP
label_25e94c:
    // 0x25e94c: 0x0  nop
    ctx->pc = 0x25e94cu;
    // NOP
label_25e950:
    // 0x25e950: 0x87b2  tlt         $zero, $zero, 542
    ctx->pc = 0x25e950u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25e954:
    // 0x25e954: 0x7de0  .word       0x00007DE0                   # add         $t7, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e954u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_25e958:
    // 0x25e958: 0x0  nop
    ctx->pc = 0x25e958u;
    // NOP
label_25e95c:
    // 0x25e95c: 0x0  nop
    ctx->pc = 0x25e95cu;
    // NOP
label_25e960:
    // 0x25e960: 0x87c2  srl         $s0, $zero, 31
    ctx->pc = 0x25e960u;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 0), 31));
label_25e964:
    // 0x25e964: 0x5c10  .word       0x00005C10                   # mfhi        $t3 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e964u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_25e968:
    // 0x25e968: 0x0  nop
    ctx->pc = 0x25e968u;
    // NOP
label_25e96c:
    // 0x25e96c: 0x0  nop
    ctx->pc = 0x25e96cu;
    // NOP
label_25e970:
    // 0x25e970: 0x87ce  .word       0x000087CE                   # INVALID     $zero, $zero, -0x7832 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e970u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x25E970 raw=0x000087CE"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25e974:
    // 0x25e974: 0x9490  .word       0x00009490                   # mfhi        $s2 # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e974u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_25e978:
    // 0x25e978: 0x0  nop
    ctx->pc = 0x25e978u;
    // NOP
label_25e97c:
    // 0x25e97c: 0x0  nop
    ctx->pc = 0x25e97cu;
    // NOP
label_25e980:
    // 0x25e980: 0x87e1  .word       0x000087E1                   # addu        $s0, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e980u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_25e984:
    // 0x25e984: 0x2fe0  .word       0x00002FE0                   # add         $a1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e984u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 5, (int32_t)result);     } }
label_25e988:
    // 0x25e988: 0x0  nop
    ctx->pc = 0x25e988u;
    // NOP
label_25e98c:
    // 0x25e98c: 0x0  nop
    ctx->pc = 0x25e98cu;
    // NOP
label_25e990:
    // 0x25e990: 0x87e7  .word       0x000087E7                   # not         $s0, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e990u;
    SET_GPR_U64(ctx, 16, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_25e994:
    // 0x25e994: 0x5ae0  .word       0x00005AE0                   # add         $t3, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e994u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_25e998:
    // 0x25e998: 0x0  nop
    ctx->pc = 0x25e998u;
    // NOP
label_25e99c:
    // 0x25e99c: 0x0  nop
    ctx->pc = 0x25e99cu;
    // NOP
label_25e9a0:
    // 0x25e9a0: 0x87f3  tltu        $zero, $zero, 543
    ctx->pc = 0x25e9a0u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25e9a4:
    // 0x25e9a4: 0x6f70  tge         $zero, $zero, 445
    ctx->pc = 0x25e9a4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25e9a8:
    // 0x25e9a8: 0x0  nop
    ctx->pc = 0x25e9a8u;
    // NOP
label_25e9ac:
    // 0x25e9ac: 0x0  nop
    ctx->pc = 0x25e9acu;
    // NOP
label_25e9b0:
    // 0x25e9b0: 0x8801  .word       0x00008801                   # INVALID     $zero, $zero, -0x77FF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e9b0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x25E9B0 raw=0x00008801"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25e9b4:
    // 0x25e9b4: 0x7a30  tge         $zero, $zero, 488
    ctx->pc = 0x25e9b4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25e9b8:
    // 0x25e9b8: 0x0  nop
    ctx->pc = 0x25e9b8u;
    // NOP
label_25e9bc:
    // 0x25e9bc: 0x0  nop
    ctx->pc = 0x25e9bcu;
    // NOP
label_25e9c0:
    // 0x25e9c0: 0x8811  .word       0x00008811                   # mthi        $zero # 00008800 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e9c0u;
    ctx->hi = GPR_U64(ctx, 0);
label_25e9c4:
    // 0x25e9c4: 0x6950  .word       0x00006950                   # mfhi        $t5 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e9c4u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_25e9c8:
    // 0x25e9c8: 0x0  nop
    ctx->pc = 0x25e9c8u;
    // NOP
label_25e9cc:
    // 0x25e9cc: 0x0  nop
    ctx->pc = 0x25e9ccu;
    // NOP
label_25e9d0:
    // 0x25e9d0: 0x881f  ddivu       $s1, $zero, $zero
    ctx->pc = 0x25e9d0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x25E9D0 raw=0x0000881F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25e9d4:
    // 0x25e9d4: 0x8620  .word       0x00008620                   # add         $s0, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25e9d4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_25e9d8:
    // 0x25e9d8: 0x0  nop
    ctx->pc = 0x25e9d8u;
    // NOP
label_25e9dc:
    // 0x25e9dc: 0x0  nop
    ctx->pc = 0x25e9dcu;
    // NOP
label_25e9e0:
    // 0x25e9e0: 0x8830  tge         $zero, $zero, 544
    ctx->pc = 0x25e9e0u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25e9e4:
    // 0x25e9e4: 0x5e70  tge         $zero, $zero, 377
    ctx->pc = 0x25e9e4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25e9e8:
    // 0x25e9e8: 0x0  nop
    ctx->pc = 0x25e9e8u;
    // NOP
label_25e9ec:
    // 0x25e9ec: 0x0  nop
    ctx->pc = 0x25e9ecu;
    // NOP
label_25e9f0:
    // 0x25e9f0: 0x883c  dsll32      $s1, $zero, 0
    ctx->pc = 0x25e9f0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0) << (32 + 0));
label_25e9f4:
    // 0x25e9f4: 0x7020  add         $t6, $zero, $zero
    ctx->pc = 0x25e9f4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_25e9f8:
    // 0x25e9f8: 0x0  nop
    ctx->pc = 0x25e9f8u;
    // NOP
label_25e9fc:
    // 0x25e9fc: 0x0  nop
    ctx->pc = 0x25e9fcu;
    // NOP
label_25ea00:
    // 0x25ea00: 0x884b  .word       0x0000884B                   # movn        $s1, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25ea00u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 0));
label_25ea04:
    // 0x25ea04: 0x8c50  .word       0x00008C50                   # mfhi        $s1 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25ea04u;
    SET_GPR_U64(ctx, 17, ctx->hi);
label_25ea08:
    // 0x25ea08: 0x0  nop
    ctx->pc = 0x25ea08u;
    // NOP
label_25ea0c:
    // 0x25ea0c: 0x0  nop
    ctx->pc = 0x25ea0cu;
    // NOP
label_25ea10:
    // 0x25ea10: 0x885d  .word       0x0000885D                   # dmultu      $zero, $zero # 00008840 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25ea10u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x25EA10 raw=0x0000885D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25ea14:
    // 0x25ea14: 0x68c0  sll         $t5, $zero, 3
    ctx->pc = 0x25ea14u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 0), 3));
label_25ea18:
    // 0x25ea18: 0x0  nop
    ctx->pc = 0x25ea18u;
    // NOP
label_25ea1c:
    // 0x25ea1c: 0x0  nop
    ctx->pc = 0x25ea1cu;
    // NOP
label_25ea20:
    // 0x25ea20: 0x886b  .word       0x0000886B                   # sltu        $s1, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25ea20u;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_25ea24:
    // 0x25ea24: 0x6c70  tge         $zero, $zero, 433
    ctx->pc = 0x25ea24u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25ea28:
    // 0x25ea28: 0x0  nop
    ctx->pc = 0x25ea28u;
    // NOP
label_25ea2c:
    // 0x25ea2c: 0x0  nop
    ctx->pc = 0x25ea2cu;
    // NOP
label_25ea30:
    // 0x25ea30: 0x8879  .word       0x00008879                   # INVALID     $zero, $zero, -0x7787 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25ea30u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x25EA30 raw=0x00008879"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25ea34:
    // 0x25ea34: 0x4450  .word       0x00004450                   # mfhi        $t0 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25ea34u;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_25ea38:
    // 0x25ea38: 0x0  nop
    ctx->pc = 0x25ea38u;
    // NOP
label_25ea3c:
    // 0x25ea3c: 0x0  nop
    ctx->pc = 0x25ea3cu;
    // NOP
label_25ea40:
    // 0x25ea40: 0x8882  srl         $s1, $zero, 2
    ctx->pc = 0x25ea40u;
    SET_GPR_S32(ctx, 17, (int32_t)SRL32(GPR_U32(ctx, 0), 2));
label_25ea44:
    // 0x25ea44: 0x4ac0  sll         $t1, $zero, 11
    ctx->pc = 0x25ea44u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), 11));
label_25ea48:
    // 0x25ea48: 0x0  nop
    ctx->pc = 0x25ea48u;
    // NOP
label_25ea4c:
    // 0x25ea4c: 0x0  nop
    ctx->pc = 0x25ea4cu;
    // NOP
label_25ea50:
    // 0x25ea50: 0x888c  syscall     546
    ctx->pc = 0x25ea50u;
    ctx->pc = 0x25EA54u;
runtime->handleSyscall(rdram, ctx, 0x222u);
label_25ea54:
    // 0x25ea54: 0x75d0  .word       0x000075D0                   # mfhi        $t6 # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25ea54u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_25ea58:
    // 0x25ea58: 0x0  nop
    ctx->pc = 0x25ea58u;
    // NOP
label_25ea5c:
    // 0x25ea5c: 0x0  nop
    ctx->pc = 0x25ea5cu;
    // NOP
label_25ea60:
    // 0x25ea60: 0x889b  .word       0x0000889B                   # divu        $s1, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25ea60u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_25ea64:
    // 0x25ea64: 0x7920  .word       0x00007920                   # add         $t7, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25ea64u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_25ea68:
    // 0x25ea68: 0x0  nop
    ctx->pc = 0x25ea68u;
    // NOP
label_25ea6c:
    // 0x25ea6c: 0x0  nop
    ctx->pc = 0x25ea6cu;
    // NOP
label_25ea70:
    // 0x25ea70: 0x88ab  .word       0x000088AB                   # sltu        $s1, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25ea70u;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_25ea74:
    // 0x25ea74: 0x2c20  .word       0x00002C20                   # add         $a1, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25ea74u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 5, (int32_t)result);     } }
label_25ea78:
    // 0x25ea78: 0x0  nop
    ctx->pc = 0x25ea78u;
    // NOP
label_25ea7c:
    // 0x25ea7c: 0x0  nop
    ctx->pc = 0x25ea7cu;
    // NOP
label_25ea80:
    // 0x25ea80: 0x88b1  tgeu        $zero, $zero, 546
    ctx->pc = 0x25ea80u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25ea84:
    // 0x25ea84: 0x6e50  .word       0x00006E50                   # mfhi        $t5 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25ea84u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_25ea88:
    // 0x25ea88: 0x0  nop
    ctx->pc = 0x25ea88u;
    // NOP
label_25ea8c:
    // 0x25ea8c: 0x0  nop
    ctx->pc = 0x25ea8cu;
    // NOP
label_25ea90:
    // 0x25ea90: 0x88bf  dsra32      $s1, $zero, 2
    ctx->pc = 0x25ea90u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 0) >> (32 + 2));
label_25ea94:
    // 0x25ea94: 0x6760  .word       0x00006760                   # add         $t4, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25ea94u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_25ea98:
    // 0x25ea98: 0x0  nop
    ctx->pc = 0x25ea98u;
    // NOP
label_25ea9c:
    // 0x25ea9c: 0x0  nop
    ctx->pc = 0x25ea9cu;
    // NOP
label_25eaa0:
    // 0x25eaa0: 0x88cc  syscall     547
    ctx->pc = 0x25eaa0u;
    ctx->pc = 0x25EAA4u;
runtime->handleSyscall(rdram, ctx, 0x223u);
label_25eaa4:
    // 0x25eaa4: 0x4d50  .word       0x00004D50                   # mfhi        $t1 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25eaa4u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_25eaa8:
    // 0x25eaa8: 0x0  nop
    ctx->pc = 0x25eaa8u;
    // NOP
label_25eaac:
    // 0x25eaac: 0x0  nop
    ctx->pc = 0x25eaacu;
    // NOP
label_25eab0:
    // 0x25eab0: 0x88d6  .word       0x000088D6                   # dsrlv       $s1, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25eab0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_25eab4:
    // 0x25eab4: 0x6770  tge         $zero, $zero, 413
    ctx->pc = 0x25eab4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25eab8:
    // 0x25eab8: 0x0  nop
    ctx->pc = 0x25eab8u;
    // NOP
label_25eabc:
    // 0x25eabc: 0x0  nop
    ctx->pc = 0x25eabcu;
    // NOP
label_25eac0:
    // 0x25eac0: 0x88e3  .word       0x000088E3                   # negu        $s1, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25eac0u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_25eac4:
    // 0x25eac4: 0x9200  sll         $s2, $zero, 8
    ctx->pc = 0x25eac4u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 0), 8));
label_25eac8:
    // 0x25eac8: 0x0  nop
    ctx->pc = 0x25eac8u;
    // NOP
label_25eacc:
    // 0x25eacc: 0x0  nop
    ctx->pc = 0x25eaccu;
    // NOP
label_25ead0:
    // 0x25ead0: 0x88f6  tne         $zero, $zero, 547
    ctx->pc = 0x25ead0u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25ead4:
    // 0x25ead4: 0x7a90  .word       0x00007A90                   # mfhi        $t7 # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25ead4u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_25ead8:
    // 0x25ead8: 0x0  nop
    ctx->pc = 0x25ead8u;
    // NOP
label_25eadc:
    // 0x25eadc: 0x0  nop
    ctx->pc = 0x25eadcu;
    // NOP
label_25eae0:
    // 0x25eae0: 0x8906  .word       0x00008906                   # srlv        $s1, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25eae0u;
    SET_GPR_S32(ctx, 17, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_25eae4:
    // 0x25eae4: 0xa790  .word       0x0000A790                   # mfhi        $s4 # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25eae4u;
    SET_GPR_U64(ctx, 20, ctx->hi);
label_25eae8:
    // 0x25eae8: 0x0  nop
    ctx->pc = 0x25eae8u;
    // NOP
label_25eaec:
    // 0x25eaec: 0x0  nop
    ctx->pc = 0x25eaecu;
    // NOP
label_25eaf0:
    // 0x25eaf0: 0x891b  .word       0x0000891B                   # divu        $s1, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25eaf0u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_25eaf4:
    // 0x25eaf4: 0x8090  .word       0x00008090                   # mfhi        $s0 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25eaf4u;
    SET_GPR_U64(ctx, 16, ctx->hi);
label_25eaf8:
    // 0x25eaf8: 0x0  nop
    ctx->pc = 0x25eaf8u;
    // NOP
label_25eafc:
    // 0x25eafc: 0x0  nop
    ctx->pc = 0x25eafcu;
    // NOP
label_25eb00:
    // 0x25eb00: 0x892c  .word       0x0000892C                   # dadd        $s1, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25eb00u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 17, r); }
label_25eb04:
    // 0x25eb04: 0x46c0  sll         $t0, $zero, 27
    ctx->pc = 0x25eb04u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 27));
label_25eb08:
    // 0x25eb08: 0x0  nop
    ctx->pc = 0x25eb08u;
    // NOP
label_25eb0c:
    // 0x25eb0c: 0x0  nop
    ctx->pc = 0x25eb0cu;
    // NOP
label_25eb10:
    // 0x25eb10: 0x8935  .word       0x00008935                   # INVALID     $zero, $zero, -0x76CB # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25eb10u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x25EB10 raw=0x00008935"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25eb14:
    // 0x25eb14: 0x8a90  .word       0x00008A90                   # mfhi        $s1 # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25eb14u;
    SET_GPR_U64(ctx, 17, ctx->hi);
label_25eb18:
    // 0x25eb18: 0x0  nop
    ctx->pc = 0x25eb18u;
    // NOP
label_25eb1c:
    // 0x25eb1c: 0x0  nop
    ctx->pc = 0x25eb1cu;
    // NOP
label_25eb20:
    // 0x25eb20: 0x8947  .word       0x00008947                   # srav        $s1, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25eb20u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_25eb24:
    // 0x25eb24: 0x5cc0  sll         $t3, $zero, 19
    ctx->pc = 0x25eb24u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
label_25eb28:
    // 0x25eb28: 0x0  nop
    ctx->pc = 0x25eb28u;
    // NOP
label_25eb2c:
    // 0x25eb2c: 0x0  nop
    ctx->pc = 0x25eb2cu;
    // NOP
label_25eb30:
    // 0x25eb30: 0x8953  .word       0x00008953                   # mtlo        $zero # 00008940 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25eb30u;
    ctx->lo = GPR_U64(ctx, 0);
label_25eb34:
    // 0x25eb34: 0x7e70  tge         $zero, $zero, 505
    ctx->pc = 0x25eb34u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25eb38:
    // 0x25eb38: 0x0  nop
    ctx->pc = 0x25eb38u;
    // NOP
label_25eb3c:
    // 0x25eb3c: 0x0  nop
    ctx->pc = 0x25eb3cu;
    // NOP
label_25eb40:
    // 0x25eb40: 0x8963  .word       0x00008963                   # negu        $s1, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25eb40u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_25eb44:
    // 0x25eb44: 0x6bc0  sll         $t5, $zero, 15
    ctx->pc = 0x25eb44u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 0), 15));
label_25eb48:
    // 0x25eb48: 0x0  nop
    ctx->pc = 0x25eb48u;
    // NOP
label_25eb4c:
    // 0x25eb4c: 0x0  nop
    ctx->pc = 0x25eb4cu;
    // NOP
label_25eb50:
    // 0x25eb50: 0x8971  tgeu        $zero, $zero, 549
    ctx->pc = 0x25eb50u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25eb54:
    // 0x25eb54: 0xac00  sll         $s5, $zero, 16
    ctx->pc = 0x25eb54u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 0), 16));
label_25eb58:
    // 0x25eb58: 0x0  nop
    ctx->pc = 0x25eb58u;
    // NOP
label_25eb5c:
    // 0x25eb5c: 0x0  nop
    ctx->pc = 0x25eb5cu;
    // NOP
label_25eb60:
    // 0x25eb60: 0x8987  .word       0x00008987                   # srav        $s1, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25eb60u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_25eb64:
    // 0x25eb64: 0x80e0  .word       0x000080E0                   # add         $s0, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25eb64u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_25eb68:
    // 0x25eb68: 0x0  nop
    ctx->pc = 0x25eb68u;
    // NOP
label_25eb6c:
    // 0x25eb6c: 0x0  nop
    ctx->pc = 0x25eb6cu;
    // NOP
label_25eb70:
    // 0x25eb70: 0x8998  .word       0x00008998                   # mult        $s1, $zero, $zero # 00000180 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x25eb70u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
label_25eb74:
    // 0x25eb74: 0x9240  sll         $s2, $zero, 9
    ctx->pc = 0x25eb74u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 0), 9));
label_25eb78:
    // 0x25eb78: 0x0  nop
    ctx->pc = 0x25eb78u;
    // NOP
label_25eb7c:
    // 0x25eb7c: 0x0  nop
    ctx->pc = 0x25eb7cu;
    // NOP
label_25eb80:
    // 0x25eb80: 0x89ab  .word       0x000089AB                   # sltu        $s1, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25eb80u;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_25eb84:
    // 0x25eb84: 0x4800  sll         $t1, $zero, 0
    ctx->pc = 0x25eb84u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_25eb88:
    // 0x25eb88: 0x0  nop
    ctx->pc = 0x25eb88u;
    // NOP
label_25eb8c:
    // 0x25eb8c: 0x0  nop
    ctx->pc = 0x25eb8cu;
    // NOP
label_25eb90:
    // 0x25eb90: 0x89b4  teq         $zero, $zero, 550
    ctx->pc = 0x25eb90u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25eb94:
    // 0x25eb94: 0x4250  .word       0x00004250                   # mfhi        $t0 # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25eb94u;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_25eb98:
    // 0x25eb98: 0x0  nop
    ctx->pc = 0x25eb98u;
    // NOP
label_25eb9c:
    // 0x25eb9c: 0x0  nop
    ctx->pc = 0x25eb9cu;
    // NOP
label_25eba0:
    // 0x25eba0: 0x89bd  .word       0x000089BD                   # INVALID     $zero, $zero, -0x7643 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25eba0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x25EBA0 raw=0x000089BD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25eba4:
    // 0x25eba4: 0x7100  sll         $t6, $zero, 4
    ctx->pc = 0x25eba4u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 0), 4));
label_25eba8:
    // 0x25eba8: 0x0  nop
    ctx->pc = 0x25eba8u;
    // NOP
label_25ebac:
    // 0x25ebac: 0x0  nop
    ctx->pc = 0x25ebacu;
    // NOP
label_25ebb0:
    // 0x25ebb0: 0x89cc  syscall     551
    ctx->pc = 0x25ebb0u;
    ctx->pc = 0x25EBB4u;
runtime->handleSyscall(rdram, ctx, 0x227u);
label_25ebb4:
    // 0x25ebb4: 0x70a0  .word       0x000070A0                   # add         $t6, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25ebb4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_25ebb8:
    // 0x25ebb8: 0x0  nop
    ctx->pc = 0x25ebb8u;
    // NOP
label_25ebbc:
    // 0x25ebbc: 0x0  nop
    ctx->pc = 0x25ebbcu;
    // NOP
label_25ebc0:
    // 0x25ebc0: 0x89db  .word       0x000089DB                   # divu        $s1, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25ebc0u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_25ebc4:
    // 0x25ebc4: 0x6b60  .word       0x00006B60                   # add         $t5, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25ebc4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_25ebc8:
    // 0x25ebc8: 0x0  nop
    ctx->pc = 0x25ebc8u;
    // NOP
label_25ebcc:
    // 0x25ebcc: 0x0  nop
    ctx->pc = 0x25ebccu;
    // NOP
label_25ebd0:
    // 0x25ebd0: 0x89e9  .word       0x000089E9                   # mtsa        $zero # 000089C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x25ebd0u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_25ebd4:
    // 0x25ebd4: 0x58e0  .word       0x000058E0                   # add         $t3, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25ebd4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_25ebd8:
    // 0x25ebd8: 0x0  nop
    ctx->pc = 0x25ebd8u;
    // NOP
label_25ebdc:
    // 0x25ebdc: 0x0  nop
    ctx->pc = 0x25ebdcu;
    // NOP
label_25ebe0:
    // 0x25ebe0: 0x89f5  .word       0x000089F5                   # INVALID     $zero, $zero, -0x760B # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25ebe0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x25EBE0 raw=0x000089F5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25ebe4:
    // 0x25ebe4: 0x5ae0  .word       0x00005AE0                   # add         $t3, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25ebe4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_25ebe8:
    // 0x25ebe8: 0x0  nop
    ctx->pc = 0x25ebe8u;
    // NOP
label_25ebec:
    // 0x25ebec: 0x0  nop
    ctx->pc = 0x25ebecu;
    // NOP
label_25ebf0:
    // 0x25ebf0: 0x8a01  .word       0x00008A01                   # INVALID     $zero, $zero, -0x75FF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25ebf0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x25EBF0 raw=0x00008A01"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25ebf4:
    // 0x25ebf4: 0x66e0  .word       0x000066E0                   # add         $t4, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25ebf4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_25ebf8:
    // 0x25ebf8: 0x0  nop
    ctx->pc = 0x25ebf8u;
    // NOP
label_25ebfc:
    // 0x25ebfc: 0x0  nop
    ctx->pc = 0x25ebfcu;
    // NOP
label_25ec00:
    // 0x25ec00: 0x8a0e  .word       0x00008A0E                   # INVALID     $zero, $zero, -0x75F2 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25ec00u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x25EC00 raw=0x00008A0E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25ec04:
    // 0x25ec04: 0x7400  sll         $t6, $zero, 16
    ctx->pc = 0x25ec04u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 0), 16));
label_25ec08:
    // 0x25ec08: 0x0  nop
    ctx->pc = 0x25ec08u;
    // NOP
label_25ec0c:
    // 0x25ec0c: 0x0  nop
    ctx->pc = 0x25ec0cu;
    // NOP
label_25ec10:
    // 0x25ec10: 0x8a1d  .word       0x00008A1D                   # dmultu      $zero, $zero # 00008A00 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25ec10u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x25EC10 raw=0x00008A1D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25ec14:
    // 0x25ec14: 0x5490  .word       0x00005490                   # mfhi        $t2 # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25ec14u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_25ec18:
    // 0x25ec18: 0x0  nop
    ctx->pc = 0x25ec18u;
    // NOP
label_25ec1c:
    // 0x25ec1c: 0x0  nop
    ctx->pc = 0x25ec1cu;
    // NOP
label_25ec20:
    // 0x25ec20: 0x8a28  .word       0x00008A28                   # mfsa        $s1 # 00000200 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x25ec20u;
    SET_GPR_U32(ctx, 17, ctx->sa);
label_25ec24:
    // 0x25ec24: 0x6bd0  .word       0x00006BD0                   # mfhi        $t5 # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25ec24u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_25ec28:
    // 0x25ec28: 0x0  nop
    ctx->pc = 0x25ec28u;
    // NOP
label_25ec2c:
    // 0x25ec2c: 0x0  nop
    ctx->pc = 0x25ec2cu;
    // NOP
label_25ec30:
    // 0x25ec30: 0x8a36  tne         $zero, $zero, 552
    ctx->pc = 0x25ec30u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25ec34:
    // 0x25ec34: 0x59d0  .word       0x000059D0                   # mfhi        $t3 # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25ec34u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_25ec38:
    // 0x25ec38: 0x0  nop
    ctx->pc = 0x25ec38u;
    // NOP
label_25ec3c:
    // 0x25ec3c: 0x0  nop
    ctx->pc = 0x25ec3cu;
    // NOP
label_25ec40:
    // 0x25ec40: 0x8a42  srl         $s1, $zero, 9
    ctx->pc = 0x25ec40u;
    SET_GPR_S32(ctx, 17, (int32_t)SRL32(GPR_U32(ctx, 0), 9));
label_25ec44:
    // 0x25ec44: 0x6980  sll         $t5, $zero, 6
    ctx->pc = 0x25ec44u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 0), 6));
label_25ec48:
    // 0x25ec48: 0x0  nop
    ctx->pc = 0x25ec48u;
    // NOP
label_25ec4c:
    // 0x25ec4c: 0x0  nop
    ctx->pc = 0x25ec4cu;
    // NOP
label_25ec50:
    // 0x25ec50: 0x8a50  .word       0x00008A50                   # mfhi        $s1 # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25ec50u;
    SET_GPR_U64(ctx, 17, ctx->hi);
label_25ec54:
    // 0x25ec54: 0x5c10  .word       0x00005C10                   # mfhi        $t3 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25ec54u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_25ec58:
    // 0x25ec58: 0x0  nop
    ctx->pc = 0x25ec58u;
    // NOP
label_25ec5c:
    // 0x25ec5c: 0x0  nop
    ctx->pc = 0x25ec5cu;
    // NOP
label_25ec60:
    // 0x25ec60: 0x8a5c  .word       0x00008A5C                   # dmult       $zero, $zero # 00008A40 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25ec60u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x25EC60 raw=0x00008A5C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25ec64:
    // 0x25ec64: 0x6440  sll         $t4, $zero, 17
    ctx->pc = 0x25ec64u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
label_25ec68:
    // 0x25ec68: 0x0  nop
    ctx->pc = 0x25ec68u;
    // NOP
label_25ec6c:
    // 0x25ec6c: 0x0  nop
    ctx->pc = 0x25ec6cu;
    // NOP
label_25ec70:
    // 0x25ec70: 0x8a69  .word       0x00008A69                   # mtsa        $zero # 00008A40 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x25ec70u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_25ec74:
    // 0x25ec74: 0x6b90  .word       0x00006B90                   # mfhi        $t5 # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25ec74u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_25ec78:
    // 0x25ec78: 0x0  nop
    ctx->pc = 0x25ec78u;
    // NOP
label_25ec7c:
    // 0x25ec7c: 0x0  nop
    ctx->pc = 0x25ec7cu;
    // NOP
label_25ec80:
    // 0x25ec80: 0x8a77  .word       0x00008A77                   # INVALID     $zero, $zero, -0x7589 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25ec80u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x25EC80 raw=0x00008A77"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25ec84:
    // 0x25ec84: 0x5a70  tge         $zero, $zero, 361
    ctx->pc = 0x25ec84u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25ec88:
    // 0x25ec88: 0x0  nop
    ctx->pc = 0x25ec88u;
    // NOP
label_25ec8c:
    // 0x25ec8c: 0x0  nop
    ctx->pc = 0x25ec8cu;
    // NOP
label_25ec90:
    // 0x25ec90: 0x8a83  sra         $s1, $zero, 10
    ctx->pc = 0x25ec90u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 0), 10));
label_25ec94:
    // 0x25ec94: 0x7ec0  sll         $t7, $zero, 27
    ctx->pc = 0x25ec94u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 0), 27));
label_25ec98:
    // 0x25ec98: 0x0  nop
    ctx->pc = 0x25ec98u;
    // NOP
label_25ec9c:
    // 0x25ec9c: 0x0  nop
    ctx->pc = 0x25ec9cu;
    // NOP
label_25eca0:
    // 0x25eca0: 0x8a93  .word       0x00008A93                   # mtlo        $zero # 00008A80 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25eca0u;
    ctx->lo = GPR_U64(ctx, 0);
label_25eca4:
    // 0x25eca4: 0x6920  .word       0x00006920                   # add         $t5, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25eca4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_25eca8:
    // 0x25eca8: 0x0  nop
    ctx->pc = 0x25eca8u;
    // NOP
label_25ecac:
    // 0x25ecac: 0x0  nop
    ctx->pc = 0x25ecacu;
    // NOP
label_25ecb0:
    // 0x25ecb0: 0x8aa1  .word       0x00008AA1                   # addu        $s1, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25ecb0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_25ecb4:
    // 0x25ecb4: 0x5ce0  .word       0x00005CE0                   # add         $t3, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25ecb4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_25ecb8:
    // 0x25ecb8: 0x0  nop
    ctx->pc = 0x25ecb8u;
    // NOP
label_25ecbc:
    // 0x25ecbc: 0x0  nop
    ctx->pc = 0x25ecbcu;
    // NOP
label_25ecc0:
    // 0x25ecc0: 0x8aad  .word       0x00008AAD                   # daddu       $s1, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25ecc0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25ecc4:
    // 0x25ecc4: 0x9620  .word       0x00009620                   # add         $s2, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25ecc4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 18, (int32_t)result);     } }
label_25ecc8:
    // 0x25ecc8: 0x0  nop
    ctx->pc = 0x25ecc8u;
    // NOP
label_25eccc:
    // 0x25eccc: 0x0  nop
    ctx->pc = 0x25ecccu;
    // NOP
label_25ecd0:
    // 0x25ecd0: 0x8ac0  sll         $s1, $zero, 11
    ctx->pc = 0x25ecd0u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 0), 11));
label_25ecd4:
    // 0x25ecd4: 0x67d0  .word       0x000067D0                   # mfhi        $t4 # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25ecd4u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_25ecd8:
    // 0x25ecd8: 0x0  nop
    ctx->pc = 0x25ecd8u;
    // NOP
label_25ecdc:
    // 0x25ecdc: 0x0  nop
    ctx->pc = 0x25ecdcu;
    // NOP
label_25ece0:
    // 0x25ece0: 0x8acd  break       0, 555
    ctx->pc = 0x25ece0u;
    runtime->handleBreak(rdram, ctx);
label_25ece4:
    // 0x25ece4: 0x81e0  .word       0x000081E0                   # add         $s0, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25ece4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_25ece8:
    // 0x25ece8: 0x0  nop
    ctx->pc = 0x25ece8u;
    // NOP
label_25ecec:
    // 0x25ecec: 0x0  nop
    ctx->pc = 0x25ececu;
    // NOP
label_25ecf0:
    // 0x25ecf0: 0x8ade  .word       0x00008ADE                   # ddiv        $s1, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25ecf0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x25ECF0 raw=0x00008ADE"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25ecf4:
    // 0x25ecf4: 0x5870  tge         $zero, $zero, 353
    ctx->pc = 0x25ecf4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25ecf8:
    // 0x25ecf8: 0x0  nop
    ctx->pc = 0x25ecf8u;
    // NOP
label_25ecfc:
    // 0x25ecfc: 0x0  nop
    ctx->pc = 0x25ecfcu;
    // NOP
label_25ed00:
    // 0x25ed00: 0x8aea  .word       0x00008AEA                   # slt         $s1, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25ed00u;
    SET_GPR_U64(ctx, 17, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_25ed04:
    // 0x25ed04: 0x6d90  .word       0x00006D90                   # mfhi        $t5 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25ed04u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_25ed08:
    // 0x25ed08: 0x0  nop
    ctx->pc = 0x25ed08u;
    // NOP
label_25ed0c:
    // 0x25ed0c: 0x0  nop
    ctx->pc = 0x25ed0cu;
    // NOP
label_25ed10:
    // 0x25ed10: 0x8af8  dsll        $s1, $zero, 11
    ctx->pc = 0x25ed10u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0) << 11);
label_25ed14:
    // 0x25ed14: 0x6650  .word       0x00006650                   # mfhi        $t4 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25ed14u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_25ed18:
    // 0x25ed18: 0x0  nop
    ctx->pc = 0x25ed18u;
    // NOP
label_25ed1c:
    // 0x25ed1c: 0x0  nop
    ctx->pc = 0x25ed1cu;
    // NOP
label_25ed20:
    // 0x25ed20: 0x8b05  .word       0x00008B05                   # INVALID     $zero, $zero, -0x74FB # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25ed20u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x25ED20 raw=0x00008B05"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25ed24:
    // 0x25ed24: 0x52d0  .word       0x000052D0                   # mfhi        $t2 # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25ed24u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_25ed28:
    // 0x25ed28: 0x0  nop
    ctx->pc = 0x25ed28u;
    // NOP
label_25ed2c:
    // 0x25ed2c: 0x0  nop
    ctx->pc = 0x25ed2cu;
    // NOP
label_25ed30:
    // 0x25ed30: 0x8b10  .word       0x00008B10                   # mfhi        $s1 # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25ed30u;
    SET_GPR_U64(ctx, 17, ctx->hi);
label_25ed34:
    // 0x25ed34: 0x6520  .word       0x00006520                   # add         $t4, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25ed34u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_25ed38:
    // 0x25ed38: 0x0  nop
    ctx->pc = 0x25ed38u;
    // NOP
label_25ed3c:
    // 0x25ed3c: 0x0  nop
    ctx->pc = 0x25ed3cu;
    // NOP
label_25ed40:
    // 0x25ed40: 0x8b1d  .word       0x00008B1D                   # dmultu      $zero, $zero # 00008B00 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25ed40u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x25ED40 raw=0x00008B1D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25ed44:
    // 0x25ed44: 0x6920  .word       0x00006920                   # add         $t5, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25ed44u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_25ed48:
    // 0x25ed48: 0x0  nop
    ctx->pc = 0x25ed48u;
    // NOP
label_25ed4c:
    // 0x25ed4c: 0x0  nop
    ctx->pc = 0x25ed4cu;
    // NOP
    ctx->pc = 0x25ed50u;
    return;
}
