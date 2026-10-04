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


void FUN_0019b850_part140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x1df640u: goto label_1df640;
        case 0x1df644u: goto label_1df644;
        case 0x1df648u: goto label_1df648;
        case 0x1df64cu: goto label_1df64c;
        case 0x1df650u: goto label_1df650;
        case 0x1df654u: goto label_1df654;
        case 0x1df658u: goto label_1df658;
        case 0x1df65cu: goto label_1df65c;
        case 0x1df660u: goto label_1df660;
        case 0x1df664u: goto label_1df664;
        case 0x1df668u: goto label_1df668;
        case 0x1df66cu: goto label_1df66c;
        case 0x1df670u: goto label_1df670;
        case 0x1df674u: goto label_1df674;
        case 0x1df678u: goto label_1df678;
        case 0x1df67cu: goto label_1df67c;
        case 0x1df680u: goto label_1df680;
        case 0x1df684u: goto label_1df684;
        case 0x1df688u: goto label_1df688;
        case 0x1df68cu: goto label_1df68c;
        case 0x1df690u: goto label_1df690;
        case 0x1df694u: goto label_1df694;
        case 0x1df698u: goto label_1df698;
        case 0x1df69cu: goto label_1df69c;
        case 0x1df6a0u: goto label_1df6a0;
        case 0x1df6a4u: goto label_1df6a4;
        case 0x1df6a8u: goto label_1df6a8;
        case 0x1df6acu: goto label_1df6ac;
        case 0x1df6b0u: goto label_1df6b0;
        case 0x1df6b4u: goto label_1df6b4;
        case 0x1df6b8u: goto label_1df6b8;
        case 0x1df6bcu: goto label_1df6bc;
        case 0x1df6c0u: goto label_1df6c0;
        case 0x1df6c4u: goto label_1df6c4;
        case 0x1df6c8u: goto label_1df6c8;
        case 0x1df6ccu: goto label_1df6cc;
        case 0x1df6d0u: goto label_1df6d0;
        case 0x1df6d4u: goto label_1df6d4;
        case 0x1df6d8u: goto label_1df6d8;
        case 0x1df6dcu: goto label_1df6dc;
        case 0x1df6e0u: goto label_1df6e0;
        case 0x1df6e4u: goto label_1df6e4;
        case 0x1df6e8u: goto label_1df6e8;
        case 0x1df6ecu: goto label_1df6ec;
        case 0x1df6f0u: goto label_1df6f0;
        case 0x1df6f4u: goto label_1df6f4;
        case 0x1df6f8u: goto label_1df6f8;
        case 0x1df6fcu: goto label_1df6fc;
        case 0x1df700u: goto label_1df700;
        case 0x1df704u: goto label_1df704;
        case 0x1df708u: goto label_1df708;
        case 0x1df70cu: goto label_1df70c;
        case 0x1df710u: goto label_1df710;
        case 0x1df714u: goto label_1df714;
        case 0x1df718u: goto label_1df718;
        case 0x1df71cu: goto label_1df71c;
        case 0x1df720u: goto label_1df720;
        case 0x1df724u: goto label_1df724;
        case 0x1df728u: goto label_1df728;
        case 0x1df72cu: goto label_1df72c;
        case 0x1df730u: goto label_1df730;
        case 0x1df734u: goto label_1df734;
        case 0x1df738u: goto label_1df738;
        case 0x1df73cu: goto label_1df73c;
        case 0x1df740u: goto label_1df740;
        case 0x1df744u: goto label_1df744;
        case 0x1df748u: goto label_1df748;
        case 0x1df74cu: goto label_1df74c;
        case 0x1df750u: goto label_1df750;
        case 0x1df754u: goto label_1df754;
        case 0x1df758u: goto label_1df758;
        case 0x1df75cu: goto label_1df75c;
        case 0x1df760u: goto label_1df760;
        case 0x1df764u: goto label_1df764;
        case 0x1df768u: goto label_1df768;
        case 0x1df76cu: goto label_1df76c;
        case 0x1df770u: goto label_1df770;
        case 0x1df774u: goto label_1df774;
        case 0x1df778u: goto label_1df778;
        case 0x1df77cu: goto label_1df77c;
        case 0x1df780u: goto label_1df780;
        case 0x1df784u: goto label_1df784;
        case 0x1df788u: goto label_1df788;
        case 0x1df78cu: goto label_1df78c;
        case 0x1df790u: goto label_1df790;
        case 0x1df794u: goto label_1df794;
        case 0x1df798u: goto label_1df798;
        case 0x1df79cu: goto label_1df79c;
        case 0x1df7a0u: goto label_1df7a0;
        case 0x1df7a4u: goto label_1df7a4;
        case 0x1df7a8u: goto label_1df7a8;
        case 0x1df7acu: goto label_1df7ac;
        case 0x1df7b0u: goto label_1df7b0;
        case 0x1df7b4u: goto label_1df7b4;
        case 0x1df7b8u: goto label_1df7b8;
        case 0x1df7bcu: goto label_1df7bc;
        case 0x1df7c0u: goto label_1df7c0;
        case 0x1df7c4u: goto label_1df7c4;
        case 0x1df7c8u: goto label_1df7c8;
        case 0x1df7ccu: goto label_1df7cc;
        case 0x1df7d0u: goto label_1df7d0;
        case 0x1df7d4u: goto label_1df7d4;
        case 0x1df7d8u: goto label_1df7d8;
        case 0x1df7dcu: goto label_1df7dc;
        case 0x1df7e0u: goto label_1df7e0;
        case 0x1df7e4u: goto label_1df7e4;
        case 0x1df7e8u: goto label_1df7e8;
        case 0x1df7ecu: goto label_1df7ec;
        case 0x1df7f0u: goto label_1df7f0;
        case 0x1df7f4u: goto label_1df7f4;
        case 0x1df7f8u: goto label_1df7f8;
        case 0x1df7fcu: goto label_1df7fc;
        case 0x1df800u: goto label_1df800;
        case 0x1df804u: goto label_1df804;
        case 0x1df808u: goto label_1df808;
        case 0x1df80cu: goto label_1df80c;
        case 0x1df810u: goto label_1df810;
        case 0x1df814u: goto label_1df814;
        case 0x1df818u: goto label_1df818;
        case 0x1df81cu: goto label_1df81c;
        case 0x1df820u: goto label_1df820;
        case 0x1df824u: goto label_1df824;
        case 0x1df828u: goto label_1df828;
        case 0x1df82cu: goto label_1df82c;
        case 0x1df830u: goto label_1df830;
        case 0x1df834u: goto label_1df834;
        case 0x1df838u: goto label_1df838;
        case 0x1df83cu: goto label_1df83c;
        case 0x1df840u: goto label_1df840;
        case 0x1df844u: goto label_1df844;
        case 0x1df848u: goto label_1df848;
        case 0x1df84cu: goto label_1df84c;
        case 0x1df850u: goto label_1df850;
        case 0x1df854u: goto label_1df854;
        case 0x1df858u: goto label_1df858;
        case 0x1df85cu: goto label_1df85c;
        case 0x1df860u: goto label_1df860;
        case 0x1df864u: goto label_1df864;
        case 0x1df868u: goto label_1df868;
        case 0x1df86cu: goto label_1df86c;
        case 0x1df870u: goto label_1df870;
        case 0x1df874u: goto label_1df874;
        case 0x1df878u: goto label_1df878;
        case 0x1df87cu: goto label_1df87c;
        case 0x1df880u: goto label_1df880;
        case 0x1df884u: goto label_1df884;
        case 0x1df888u: goto label_1df888;
        case 0x1df88cu: goto label_1df88c;
        case 0x1df890u: goto label_1df890;
        case 0x1df894u: goto label_1df894;
        case 0x1df898u: goto label_1df898;
        case 0x1df89cu: goto label_1df89c;
        case 0x1df8a0u: goto label_1df8a0;
        case 0x1df8a4u: goto label_1df8a4;
        case 0x1df8a8u: goto label_1df8a8;
        case 0x1df8acu: goto label_1df8ac;
        case 0x1df8b0u: goto label_1df8b0;
        case 0x1df8b4u: goto label_1df8b4;
        case 0x1df8b8u: goto label_1df8b8;
        case 0x1df8bcu: goto label_1df8bc;
        case 0x1df8c0u: goto label_1df8c0;
        case 0x1df8c4u: goto label_1df8c4;
        case 0x1df8c8u: goto label_1df8c8;
        case 0x1df8ccu: goto label_1df8cc;
        case 0x1df8d0u: goto label_1df8d0;
        case 0x1df8d4u: goto label_1df8d4;
        case 0x1df8d8u: goto label_1df8d8;
        case 0x1df8dcu: goto label_1df8dc;
        case 0x1df8e0u: goto label_1df8e0;
        case 0x1df8e4u: goto label_1df8e4;
        case 0x1df8e8u: goto label_1df8e8;
        case 0x1df8ecu: goto label_1df8ec;
        case 0x1df8f0u: goto label_1df8f0;
        case 0x1df8f4u: goto label_1df8f4;
        case 0x1df8f8u: goto label_1df8f8;
        case 0x1df8fcu: goto label_1df8fc;
        case 0x1df900u: goto label_1df900;
        case 0x1df904u: goto label_1df904;
        case 0x1df908u: goto label_1df908;
        case 0x1df90cu: goto label_1df90c;
        case 0x1df910u: goto label_1df910;
        case 0x1df914u: goto label_1df914;
        case 0x1df918u: goto label_1df918;
        case 0x1df91cu: goto label_1df91c;
        case 0x1df920u: goto label_1df920;
        case 0x1df924u: goto label_1df924;
        case 0x1df928u: goto label_1df928;
        case 0x1df92cu: goto label_1df92c;
        case 0x1df930u: goto label_1df930;
        case 0x1df934u: goto label_1df934;
        case 0x1df938u: goto label_1df938;
        case 0x1df93cu: goto label_1df93c;
        case 0x1df940u: goto label_1df940;
        case 0x1df944u: goto label_1df944;
        case 0x1df948u: goto label_1df948;
        case 0x1df94cu: goto label_1df94c;
        case 0x1df950u: goto label_1df950;
        case 0x1df954u: goto label_1df954;
        case 0x1df958u: goto label_1df958;
        case 0x1df95cu: goto label_1df95c;
        case 0x1df960u: goto label_1df960;
        case 0x1df964u: goto label_1df964;
        case 0x1df968u: goto label_1df968;
        case 0x1df96cu: goto label_1df96c;
        case 0x1df970u: goto label_1df970;
        case 0x1df974u: goto label_1df974;
        case 0x1df978u: goto label_1df978;
        case 0x1df97cu: goto label_1df97c;
        case 0x1df980u: goto label_1df980;
        case 0x1df984u: goto label_1df984;
        case 0x1df988u: goto label_1df988;
        case 0x1df98cu: goto label_1df98c;
        case 0x1df990u: goto label_1df990;
        case 0x1df994u: goto label_1df994;
        case 0x1df998u: goto label_1df998;
        case 0x1df99cu: goto label_1df99c;
        case 0x1df9a0u: goto label_1df9a0;
        case 0x1df9a4u: goto label_1df9a4;
        case 0x1df9a8u: goto label_1df9a8;
        case 0x1df9acu: goto label_1df9ac;
        case 0x1df9b0u: goto label_1df9b0;
        case 0x1df9b4u: goto label_1df9b4;
        case 0x1df9b8u: goto label_1df9b8;
        case 0x1df9bcu: goto label_1df9bc;
        case 0x1df9c0u: goto label_1df9c0;
        case 0x1df9c4u: goto label_1df9c4;
        case 0x1df9c8u: goto label_1df9c8;
        case 0x1df9ccu: goto label_1df9cc;
        case 0x1df9d0u: goto label_1df9d0;
        case 0x1df9d4u: goto label_1df9d4;
        case 0x1df9d8u: goto label_1df9d8;
        case 0x1df9dcu: goto label_1df9dc;
        case 0x1df9e0u: goto label_1df9e0;
        case 0x1df9e4u: goto label_1df9e4;
        case 0x1df9e8u: goto label_1df9e8;
        case 0x1df9ecu: goto label_1df9ec;
        case 0x1df9f0u: goto label_1df9f0;
        case 0x1df9f4u: goto label_1df9f4;
        case 0x1df9f8u: goto label_1df9f8;
        case 0x1df9fcu: goto label_1df9fc;
        case 0x1dfa00u: goto label_1dfa00;
        case 0x1dfa04u: goto label_1dfa04;
        case 0x1dfa08u: goto label_1dfa08;
        case 0x1dfa0cu: goto label_1dfa0c;
        case 0x1dfa10u: goto label_1dfa10;
        case 0x1dfa14u: goto label_1dfa14;
        case 0x1dfa18u: goto label_1dfa18;
        case 0x1dfa1cu: goto label_1dfa1c;
        case 0x1dfa20u: goto label_1dfa20;
        case 0x1dfa24u: goto label_1dfa24;
        case 0x1dfa28u: goto label_1dfa28;
        case 0x1dfa2cu: goto label_1dfa2c;
        case 0x1dfa30u: goto label_1dfa30;
        case 0x1dfa34u: goto label_1dfa34;
        case 0x1dfa38u: goto label_1dfa38;
        case 0x1dfa3cu: goto label_1dfa3c;
        case 0x1dfa40u: goto label_1dfa40;
        case 0x1dfa44u: goto label_1dfa44;
        case 0x1dfa48u: goto label_1dfa48;
        case 0x1dfa4cu: goto label_1dfa4c;
        case 0x1dfa50u: goto label_1dfa50;
        case 0x1dfa54u: goto label_1dfa54;
        case 0x1dfa58u: goto label_1dfa58;
        case 0x1dfa5cu: goto label_1dfa5c;
        case 0x1dfa60u: goto label_1dfa60;
        case 0x1dfa64u: goto label_1dfa64;
        case 0x1dfa68u: goto label_1dfa68;
        case 0x1dfa6cu: goto label_1dfa6c;
        case 0x1dfa70u: goto label_1dfa70;
        case 0x1dfa74u: goto label_1dfa74;
        case 0x1dfa78u: goto label_1dfa78;
        case 0x1dfa7cu: goto label_1dfa7c;
        case 0x1dfa80u: goto label_1dfa80;
        case 0x1dfa84u: goto label_1dfa84;
        case 0x1dfa88u: goto label_1dfa88;
        case 0x1dfa8cu: goto label_1dfa8c;
        case 0x1dfa90u: goto label_1dfa90;
        case 0x1dfa94u: goto label_1dfa94;
        case 0x1dfa98u: goto label_1dfa98;
        case 0x1dfa9cu: goto label_1dfa9c;
        case 0x1dfaa0u: goto label_1dfaa0;
        case 0x1dfaa4u: goto label_1dfaa4;
        case 0x1dfaa8u: goto label_1dfaa8;
        case 0x1dfaacu: goto label_1dfaac;
        case 0x1dfab0u: goto label_1dfab0;
        case 0x1dfab4u: goto label_1dfab4;
        case 0x1dfab8u: goto label_1dfab8;
        case 0x1dfabcu: goto label_1dfabc;
        case 0x1dfac0u: goto label_1dfac0;
        case 0x1dfac4u: goto label_1dfac4;
        case 0x1dfac8u: goto label_1dfac8;
        case 0x1dfaccu: goto label_1dfacc;
        case 0x1dfad0u: goto label_1dfad0;
        case 0x1dfad4u: goto label_1dfad4;
        case 0x1dfad8u: goto label_1dfad8;
        case 0x1dfadcu: goto label_1dfadc;
        case 0x1dfae0u: goto label_1dfae0;
        case 0x1dfae4u: goto label_1dfae4;
        case 0x1dfae8u: goto label_1dfae8;
        case 0x1dfaecu: goto label_1dfaec;
        case 0x1dfaf0u: goto label_1dfaf0;
        case 0x1dfaf4u: goto label_1dfaf4;
        case 0x1dfaf8u: goto label_1dfaf8;
        case 0x1dfafcu: goto label_1dfafc;
        case 0x1dfb00u: goto label_1dfb00;
        case 0x1dfb04u: goto label_1dfb04;
        case 0x1dfb08u: goto label_1dfb08;
        case 0x1dfb0cu: goto label_1dfb0c;
        case 0x1dfb10u: goto label_1dfb10;
        case 0x1dfb14u: goto label_1dfb14;
        case 0x1dfb18u: goto label_1dfb18;
        case 0x1dfb1cu: goto label_1dfb1c;
        case 0x1dfb20u: goto label_1dfb20;
        case 0x1dfb24u: goto label_1dfb24;
        case 0x1dfb28u: goto label_1dfb28;
        case 0x1dfb2cu: goto label_1dfb2c;
        case 0x1dfb30u: goto label_1dfb30;
        case 0x1dfb34u: goto label_1dfb34;
        case 0x1dfb38u: goto label_1dfb38;
        case 0x1dfb3cu: goto label_1dfb3c;
        case 0x1dfb40u: goto label_1dfb40;
        case 0x1dfb44u: goto label_1dfb44;
        case 0x1dfb48u: goto label_1dfb48;
        case 0x1dfb4cu: goto label_1dfb4c;
        case 0x1dfb50u: goto label_1dfb50;
        case 0x1dfb54u: goto label_1dfb54;
        case 0x1dfb58u: goto label_1dfb58;
        case 0x1dfb5cu: goto label_1dfb5c;
        case 0x1dfb60u: goto label_1dfb60;
        case 0x1dfb64u: goto label_1dfb64;
        case 0x1dfb68u: goto label_1dfb68;
        case 0x1dfb6cu: goto label_1dfb6c;
        case 0x1dfb70u: goto label_1dfb70;
        case 0x1dfb74u: goto label_1dfb74;
        case 0x1dfb78u: goto label_1dfb78;
        case 0x1dfb7cu: goto label_1dfb7c;
        case 0x1dfb80u: goto label_1dfb80;
        case 0x1dfb84u: goto label_1dfb84;
        case 0x1dfb88u: goto label_1dfb88;
        case 0x1dfb8cu: goto label_1dfb8c;
        case 0x1dfb90u: goto label_1dfb90;
        case 0x1dfb94u: goto label_1dfb94;
        case 0x1dfb98u: goto label_1dfb98;
        case 0x1dfb9cu: goto label_1dfb9c;
        case 0x1dfba0u: goto label_1dfba0;
        case 0x1dfba4u: goto label_1dfba4;
        case 0x1dfba8u: goto label_1dfba8;
        case 0x1dfbacu: goto label_1dfbac;
        case 0x1dfbb0u: goto label_1dfbb0;
        case 0x1dfbb4u: goto label_1dfbb4;
        case 0x1dfbb8u: goto label_1dfbb8;
        case 0x1dfbbcu: goto label_1dfbbc;
        case 0x1dfbc0u: goto label_1dfbc0;
        case 0x1dfbc4u: goto label_1dfbc4;
        case 0x1dfbc8u: goto label_1dfbc8;
        case 0x1dfbccu: goto label_1dfbcc;
        case 0x1dfbd0u: goto label_1dfbd0;
        case 0x1dfbd4u: goto label_1dfbd4;
        case 0x1dfbd8u: goto label_1dfbd8;
        case 0x1dfbdcu: goto label_1dfbdc;
        case 0x1dfbe0u: goto label_1dfbe0;
        case 0x1dfbe4u: goto label_1dfbe4;
        case 0x1dfbe8u: goto label_1dfbe8;
        case 0x1dfbecu: goto label_1dfbec;
        case 0x1dfbf0u: goto label_1dfbf0;
        case 0x1dfbf4u: goto label_1dfbf4;
        case 0x1dfbf8u: goto label_1dfbf8;
        case 0x1dfbfcu: goto label_1dfbfc;
        case 0x1dfc00u: goto label_1dfc00;
        case 0x1dfc04u: goto label_1dfc04;
        case 0x1dfc08u: goto label_1dfc08;
        case 0x1dfc0cu: goto label_1dfc0c;
        case 0x1dfc10u: goto label_1dfc10;
        case 0x1dfc14u: goto label_1dfc14;
        case 0x1dfc18u: goto label_1dfc18;
        case 0x1dfc1cu: goto label_1dfc1c;
        case 0x1dfc20u: goto label_1dfc20;
        case 0x1dfc24u: goto label_1dfc24;
        case 0x1dfc28u: goto label_1dfc28;
        case 0x1dfc2cu: goto label_1dfc2c;
        case 0x1dfc30u: goto label_1dfc30;
        case 0x1dfc34u: goto label_1dfc34;
        case 0x1dfc38u: goto label_1dfc38;
        case 0x1dfc3cu: goto label_1dfc3c;
        case 0x1dfc40u: goto label_1dfc40;
        case 0x1dfc44u: goto label_1dfc44;
        case 0x1dfc48u: goto label_1dfc48;
        case 0x1dfc4cu: goto label_1dfc4c;
        case 0x1dfc50u: goto label_1dfc50;
        case 0x1dfc54u: goto label_1dfc54;
        case 0x1dfc58u: goto label_1dfc58;
        case 0x1dfc5cu: goto label_1dfc5c;
        case 0x1dfc60u: goto label_1dfc60;
        case 0x1dfc64u: goto label_1dfc64;
        case 0x1dfc68u: goto label_1dfc68;
        case 0x1dfc6cu: goto label_1dfc6c;
        case 0x1dfc70u: goto label_1dfc70;
        case 0x1dfc74u: goto label_1dfc74;
        case 0x1dfc78u: goto label_1dfc78;
        case 0x1dfc7cu: goto label_1dfc7c;
        case 0x1dfc80u: goto label_1dfc80;
        case 0x1dfc84u: goto label_1dfc84;
        case 0x1dfc88u: goto label_1dfc88;
        case 0x1dfc8cu: goto label_1dfc8c;
        case 0x1dfc90u: goto label_1dfc90;
        case 0x1dfc94u: goto label_1dfc94;
        case 0x1dfc98u: goto label_1dfc98;
        case 0x1dfc9cu: goto label_1dfc9c;
        case 0x1dfca0u: goto label_1dfca0;
        case 0x1dfca4u: goto label_1dfca4;
        case 0x1dfca8u: goto label_1dfca8;
        case 0x1dfcacu: goto label_1dfcac;
        case 0x1dfcb0u: goto label_1dfcb0;
        case 0x1dfcb4u: goto label_1dfcb4;
        case 0x1dfcb8u: goto label_1dfcb8;
        case 0x1dfcbcu: goto label_1dfcbc;
        case 0x1dfcc0u: goto label_1dfcc0;
        case 0x1dfcc4u: goto label_1dfcc4;
        case 0x1dfcc8u: goto label_1dfcc8;
        case 0x1dfcccu: goto label_1dfccc;
        case 0x1dfcd0u: goto label_1dfcd0;
        case 0x1dfcd4u: goto label_1dfcd4;
        case 0x1dfcd8u: goto label_1dfcd8;
        case 0x1dfcdcu: goto label_1dfcdc;
        case 0x1dfce0u: goto label_1dfce0;
        case 0x1dfce4u: goto label_1dfce4;
        case 0x1dfce8u: goto label_1dfce8;
        case 0x1dfcecu: goto label_1dfcec;
        case 0x1dfcf0u: goto label_1dfcf0;
        case 0x1dfcf4u: goto label_1dfcf4;
        case 0x1dfcf8u: goto label_1dfcf8;
        case 0x1dfcfcu: goto label_1dfcfc;
        case 0x1dfd00u: goto label_1dfd00;
        case 0x1dfd04u: goto label_1dfd04;
        case 0x1dfd08u: goto label_1dfd08;
        case 0x1dfd0cu: goto label_1dfd0c;
        case 0x1dfd10u: goto label_1dfd10;
        case 0x1dfd14u: goto label_1dfd14;
        case 0x1dfd18u: goto label_1dfd18;
        case 0x1dfd1cu: goto label_1dfd1c;
        case 0x1dfd20u: goto label_1dfd20;
        case 0x1dfd24u: goto label_1dfd24;
        case 0x1dfd28u: goto label_1dfd28;
        case 0x1dfd2cu: goto label_1dfd2c;
        case 0x1dfd30u: goto label_1dfd30;
        case 0x1dfd34u: goto label_1dfd34;
        case 0x1dfd38u: goto label_1dfd38;
        case 0x1dfd3cu: goto label_1dfd3c;
        case 0x1dfd40u: goto label_1dfd40;
        case 0x1dfd44u: goto label_1dfd44;
        case 0x1dfd48u: goto label_1dfd48;
        case 0x1dfd4cu: goto label_1dfd4c;
        case 0x1dfd50u: goto label_1dfd50;
        case 0x1dfd54u: goto label_1dfd54;
        case 0x1dfd58u: goto label_1dfd58;
        case 0x1dfd5cu: goto label_1dfd5c;
        case 0x1dfd60u: goto label_1dfd60;
        case 0x1dfd64u: goto label_1dfd64;
        case 0x1dfd68u: goto label_1dfd68;
        case 0x1dfd6cu: goto label_1dfd6c;
        case 0x1dfd70u: goto label_1dfd70;
        case 0x1dfd74u: goto label_1dfd74;
        case 0x1dfd78u: goto label_1dfd78;
        case 0x1dfd7cu: goto label_1dfd7c;
        case 0x1dfd80u: goto label_1dfd80;
        case 0x1dfd84u: goto label_1dfd84;
        case 0x1dfd88u: goto label_1dfd88;
        case 0x1dfd8cu: goto label_1dfd8c;
        case 0x1dfd90u: goto label_1dfd90;
        case 0x1dfd94u: goto label_1dfd94;
        case 0x1dfd98u: goto label_1dfd98;
        case 0x1dfd9cu: goto label_1dfd9c;
        case 0x1dfda0u: goto label_1dfda0;
        case 0x1dfda4u: goto label_1dfda4;
        case 0x1dfda8u: goto label_1dfda8;
        case 0x1dfdacu: goto label_1dfdac;
        case 0x1dfdb0u: goto label_1dfdb0;
        case 0x1dfdb4u: goto label_1dfdb4;
        case 0x1dfdb8u: goto label_1dfdb8;
        case 0x1dfdbcu: goto label_1dfdbc;
        case 0x1dfdc0u: goto label_1dfdc0;
        case 0x1dfdc4u: goto label_1dfdc4;
        case 0x1dfdc8u: goto label_1dfdc8;
        case 0x1dfdccu: goto label_1dfdcc;
        case 0x1dfdd0u: goto label_1dfdd0;
        case 0x1dfdd4u: goto label_1dfdd4;
        case 0x1dfdd8u: goto label_1dfdd8;
        case 0x1dfddcu: goto label_1dfddc;
        case 0x1dfde0u: goto label_1dfde0;
        case 0x1dfde4u: goto label_1dfde4;
        case 0x1dfde8u: goto label_1dfde8;
        case 0x1dfdecu: goto label_1dfdec;
        case 0x1dfdf0u: goto label_1dfdf0;
        case 0x1dfdf4u: goto label_1dfdf4;
        case 0x1dfdf8u: goto label_1dfdf8;
        case 0x1dfdfcu: goto label_1dfdfc;
        case 0x1dfe00u: goto label_1dfe00;
        case 0x1dfe04u: goto label_1dfe04;
        case 0x1dfe08u: goto label_1dfe08;
        case 0x1dfe0cu: goto label_1dfe0c;
        default: return;
    }

label_1df640:
    // 0x1df640: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1df640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1df644:
    // 0x1df644: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1df644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_1df648:
    // 0x1df648: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1df648u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1df64c:
    // 0x1df64c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1df64cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1df650:
    // 0x1df650: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1df650u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1df654:
    // 0x1df654: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1df654u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1df658:
    // 0x1df658: 0x8f838cc4  lw          $v1, -0x733C($gp)
    ctx->pc = 0x1df658u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937796)));
label_1df65c:
    // 0x1df65c: 0x106000e5  beqz        $v1, . + 4 + (0xE5 << 2)
label_1df660:
    if (ctx->pc == 0x1DF660u) {
        ctx->pc = 0x1DF664u;
        goto label_1df664;
    }
    ctx->pc = 0x1DF65Cu;
    {
        const bool branch_taken_0x1df65c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1df65c) {
            ctx->pc = 0x1DF9F4u;
            goto label_1df9f4;
        }
    }
    ctx->pc = 0x1DF664u;
label_1df664:
    // 0x1df664: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1df664u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_1df668:
    // 0x1df668: 0x8f838cb4  lw          $v1, -0x734C($gp)
    ctx->pc = 0x1df668u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937780)));
label_1df66c:
    // 0x1df66c: 0x8c263ffc  lw          $a2, 0x3FFC($at)
    ctx->pc = 0x1df66cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_1df670:
    // 0x1df670: 0x3c02004b  lui         $v0, 0x4B
    ctx->pc = 0x1df670u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
label_1df674:
    // 0x1df674: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x1df674u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
label_1df678:
    // 0x1df678: 0x24420660  addiu       $v0, $v0, 0x660
    ctx->pc = 0x1df678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1632));
label_1df67c:
    // 0x1df67c: 0x27858cc8  addiu       $a1, $gp, -0x7338
    ctx->pc = 0x1df67cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937800));
label_1df680:
    // 0x1df680: 0x8f848c54  lw          $a0, -0x73AC($gp)
    ctx->pc = 0x1df680u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937684)));
label_1df684:
    // 0x1df684: 0x87928c58  lh          $s2, -0x73A8($gp)
    ctx->pc = 0x1df684u;
    SET_GPR_S32(ctx, 18, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294937688)));
label_1df688:
    // 0x1df688: 0x24e71e00  addiu       $a3, $a3, 0x1E00
    ctx->pc = 0x1df688u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 7680));
label_1df68c:
    // 0x1df68c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1df68cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1df690:
    // 0x1df690: 0x64140  sll         $t0, $a2, 5
    ctx->pc = 0x1df690u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
label_1df694:
    // 0x1df694: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1df694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1df698:
    // 0x1df698: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x1df698u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_1df69c:
    // 0x1df69c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1df69cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1df6a0:
    // 0x1df6a0: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x1df6a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_1df6a4:
    // 0x1df6a4: 0xe88821  addu        $s1, $a3, $t0
    ctx->pc = 0x1df6a4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_1df6a8:
    // 0x1df6a8: 0x8cb00000  lw          $s0, 0x0($a1)
    ctx->pc = 0x1df6a8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1df6ac:
    // 0x1df6ac: 0x2453000c  addiu       $s3, $v0, 0xC
    ctx->pc = 0x1df6acu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
label_1df6b0:
    // 0x1df6b0: 0xc0602c8  jal         func_180B20
label_1df6b4:
    if (ctx->pc == 0x1DF6B4u) {
        ctx->pc = 0x1DF6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF6B0u;
        // 0x1df6b4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DF6B8u;
        goto label_1df6b8;
    }
    ctx->pc = 0x1DF6B0u;
    SET_GPR_U32(ctx, 31, 0x1DF6B8u);
    ctx->pc = 0x1DF6B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF6B0u;
    // 0x1df6b4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180B20u, 0x1DF6B0u, 0x1DF6B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF6B8u;
label_1df6b8:
    // 0x1df6b8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1df6b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1df6bc:
    // 0x1df6bc: 0x26670018  addiu       $a3, $s3, 0x18
    ctx->pc = 0x1df6bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 24));
label_1df6c0:
    // 0x1df6c0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1df6c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1df6c4:
    // 0x1df6c4: 0x27a6005e  addiu       $a2, $sp, 0x5E
    ctx->pc = 0x1df6c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 94));
label_1df6c8:
    // 0x1df6c8: 0xc060390  jal         func_180E40
label_1df6cc:
    if (ctx->pc == 0x1DF6CCu) {
        ctx->pc = 0x1DF6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF6C8u;
        // 0x1df6cc: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DF6D0u;
        goto label_1df6d0;
    }
    ctx->pc = 0x1DF6C8u;
    SET_GPR_U32(ctx, 31, 0x1DF6D0u);
    ctx->pc = 0x1DF6CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF6C8u;
    // 0x1df6cc: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180E40u, 0x1DF6C8u, 0x1DF6D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF6D0u;
label_1df6d0:
    // 0x1df6d0: 0x3c03004b  lui         $v1, 0x4B
    ctx->pc = 0x1df6d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)75 << 16));
label_1df6d4:
    // 0x1df6d4: 0x1320c0  sll         $a0, $s3, 3
    ctx->pc = 0x1df6d4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
label_1df6d8:
    // 0x1df6d8: 0x24630480  addiu       $v1, $v1, 0x480
    ctx->pc = 0x1df6d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1152));
label_1df6dc:
    // 0x1df6dc: 0x649021  addu        $s2, $v1, $a0
    ctx->pc = 0x1df6dcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1df6e0:
    // 0x1df6e0: 0xfe420000  sd          $v0, 0x0($s2)
    ctx->pc = 0x1df6e0u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 2));
label_1df6e4:
    // 0x1df6e4: 0xde440000  ld          $a0, 0x0($s2)
    ctx->pc = 0x1df6e4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 18), 0)));
label_1df6e8:
    // 0x1df6e8: 0xc06063c  jal         func_1818F0
label_1df6ec:
    if (ctx->pc == 0x1DF6ECu) {
        ctx->pc = 0x1DF6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF6E8u;
        // 0x1df6ec: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DF6F0u;
        goto label_1df6f0;
    }
    ctx->pc = 0x1DF6E8u;
    SET_GPR_U32(ctx, 31, 0x1DF6F0u);
    ctx->pc = 0x1DF6ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF6E8u;
    // 0x1df6ec: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1818F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1818F0u, 0x1DF6E8u, 0x1DF6F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF6F0u;
label_1df6f0:
    // 0x1df6f0: 0xfe420000  sd          $v0, 0x0($s2)
    ctx->pc = 0x1df6f0u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 2));
label_1df6f4:
    // 0x1df6f4: 0x8f838ca8  lw          $v1, -0x7358($gp)
    ctx->pc = 0x1df6f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937768)));
label_1df6f8:
    // 0x1df6f8: 0x3c02004b  lui         $v0, 0x4B
    ctx->pc = 0x1df6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
label_1df6fc:
    // 0x1df6fc: 0x24420660  addiu       $v0, $v0, 0x660
    ctx->pc = 0x1df6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1632));
label_1df700:
    // 0x1df700: 0x8f848c54  lw          $a0, -0x73AC($gp)
    ctx->pc = 0x1df700u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937684)));
label_1df704:
    // 0x1df704: 0x87b2005e  lh          $s2, 0x5E($sp)
    ctx->pc = 0x1df704u;
    SET_GPR_S32(ctx, 18, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 94)));
label_1df708:
    // 0x1df708: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1df708u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1df70c:
    // 0x1df70c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1df70cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1df710:
    // 0x1df710: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1df710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1df714:
    // 0x1df714: 0x2453000c  addiu       $s3, $v0, 0xC
    ctx->pc = 0x1df714u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
label_1df718:
    // 0x1df718: 0xc0602c8  jal         func_180B20
label_1df71c:
    if (ctx->pc == 0x1DF71Cu) {
        ctx->pc = 0x1DF71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF718u;
        // 0x1df71c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DF720u;
        goto label_1df720;
    }
    ctx->pc = 0x1DF718u;
    SET_GPR_U32(ctx, 31, 0x1DF720u);
    ctx->pc = 0x1DF71Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF718u;
    // 0x1df71c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180B20u, 0x1DF718u, 0x1DF720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF720u;
label_1df720:
    // 0x1df720: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1df720u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1df724:
    // 0x1df724: 0x26670018  addiu       $a3, $s3, 0x18
    ctx->pc = 0x1df724u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 24));
label_1df728:
    // 0x1df728: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1df728u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1df72c:
    // 0x1df72c: 0x27a6005e  addiu       $a2, $sp, 0x5E
    ctx->pc = 0x1df72cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 94));
label_1df730:
    // 0x1df730: 0xc060390  jal         func_180E40
label_1df734:
    if (ctx->pc == 0x1DF734u) {
        ctx->pc = 0x1DF734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF730u;
        // 0x1df734: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DF738u;
        goto label_1df738;
    }
    ctx->pc = 0x1DF730u;
    SET_GPR_U32(ctx, 31, 0x1DF738u);
    ctx->pc = 0x1DF734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF730u;
    // 0x1df734: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180E40u, 0x1DF730u, 0x1DF738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF738u;
label_1df738:
    // 0x1df738: 0x3c03004b  lui         $v1, 0x4B
    ctx->pc = 0x1df738u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)75 << 16));
label_1df73c:
    // 0x1df73c: 0x1320c0  sll         $a0, $s3, 3
    ctx->pc = 0x1df73cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
label_1df740:
    // 0x1df740: 0x24630480  addiu       $v1, $v1, 0x480
    ctx->pc = 0x1df740u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1152));
label_1df744:
    // 0x1df744: 0x649021  addu        $s2, $v1, $a0
    ctx->pc = 0x1df744u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1df748:
    // 0x1df748: 0xfe420000  sd          $v0, 0x0($s2)
    ctx->pc = 0x1df748u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 2));
label_1df74c:
    // 0x1df74c: 0xde440000  ld          $a0, 0x0($s2)
    ctx->pc = 0x1df74cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 18), 0)));
label_1df750:
    // 0x1df750: 0xc06063c  jal         func_1818F0
label_1df754:
    if (ctx->pc == 0x1DF754u) {
        ctx->pc = 0x1DF754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF750u;
        // 0x1df754: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DF758u;
        goto label_1df758;
    }
    ctx->pc = 0x1DF750u;
    SET_GPR_U32(ctx, 31, 0x1DF758u);
    ctx->pc = 0x1DF754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF750u;
    // 0x1df754: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1818F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1818F0u, 0x1DF750u, 0x1DF758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF758u;
label_1df758:
    // 0x1df758: 0xfe420000  sd          $v0, 0x0($s2)
    ctx->pc = 0x1df758u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 2));
label_1df75c:
    // 0x1df75c: 0x8f838cac  lw          $v1, -0x7354($gp)
    ctx->pc = 0x1df75cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937772)));
label_1df760:
    // 0x1df760: 0x3c02004b  lui         $v0, 0x4B
    ctx->pc = 0x1df760u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
label_1df764:
    // 0x1df764: 0x24420660  addiu       $v0, $v0, 0x660
    ctx->pc = 0x1df764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1632));
label_1df768:
    // 0x1df768: 0x8f848c54  lw          $a0, -0x73AC($gp)
    ctx->pc = 0x1df768u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937684)));
label_1df76c:
    // 0x1df76c: 0x87b2005e  lh          $s2, 0x5E($sp)
    ctx->pc = 0x1df76cu;
    SET_GPR_S32(ctx, 18, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 94)));
label_1df770:
    // 0x1df770: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1df770u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1df774:
    // 0x1df774: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1df774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1df778:
    // 0x1df778: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1df778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1df77c:
    // 0x1df77c: 0x2453000c  addiu       $s3, $v0, 0xC
    ctx->pc = 0x1df77cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
label_1df780:
    // 0x1df780: 0xc0602c8  jal         func_180B20
label_1df784:
    if (ctx->pc == 0x1DF784u) {
        ctx->pc = 0x1DF784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF780u;
        // 0x1df784: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DF788u;
        goto label_1df788;
    }
    ctx->pc = 0x1DF780u;
    SET_GPR_U32(ctx, 31, 0x1DF788u);
    ctx->pc = 0x1DF784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF780u;
    // 0x1df784: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180B20u, 0x1DF780u, 0x1DF788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF788u;
label_1df788:
    // 0x1df788: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1df788u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1df78c:
    // 0x1df78c: 0x26670018  addiu       $a3, $s3, 0x18
    ctx->pc = 0x1df78cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 24));
label_1df790:
    // 0x1df790: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1df790u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1df794:
    // 0x1df794: 0x27a6005e  addiu       $a2, $sp, 0x5E
    ctx->pc = 0x1df794u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 94));
label_1df798:
    // 0x1df798: 0xc060390  jal         func_180E40
label_1df79c:
    if (ctx->pc == 0x1DF79Cu) {
        ctx->pc = 0x1DF79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF798u;
        // 0x1df79c: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DF7A0u;
        goto label_1df7a0;
    }
    ctx->pc = 0x1DF798u;
    SET_GPR_U32(ctx, 31, 0x1DF7A0u);
    ctx->pc = 0x1DF79Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF798u;
    // 0x1df79c: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180E40u, 0x1DF798u, 0x1DF7A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF7A0u;
label_1df7a0:
    // 0x1df7a0: 0x3c03004b  lui         $v1, 0x4B
    ctx->pc = 0x1df7a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)75 << 16));
label_1df7a4:
    // 0x1df7a4: 0x1320c0  sll         $a0, $s3, 3
    ctx->pc = 0x1df7a4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
label_1df7a8:
    // 0x1df7a8: 0x24630480  addiu       $v1, $v1, 0x480
    ctx->pc = 0x1df7a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1152));
label_1df7ac:
    // 0x1df7ac: 0x649021  addu        $s2, $v1, $a0
    ctx->pc = 0x1df7acu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1df7b0:
    // 0x1df7b0: 0xfe420000  sd          $v0, 0x0($s2)
    ctx->pc = 0x1df7b0u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 2));
label_1df7b4:
    // 0x1df7b4: 0xde440000  ld          $a0, 0x0($s2)
    ctx->pc = 0x1df7b4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 18), 0)));
label_1df7b8:
    // 0x1df7b8: 0xc06063c  jal         func_1818F0
label_1df7bc:
    if (ctx->pc == 0x1DF7BCu) {
        ctx->pc = 0x1DF7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF7B8u;
        // 0x1df7bc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DF7C0u;
        goto label_1df7c0;
    }
    ctx->pc = 0x1DF7B8u;
    SET_GPR_U32(ctx, 31, 0x1DF7C0u);
    ctx->pc = 0x1DF7BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF7B8u;
    // 0x1df7bc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1818F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1818F0u, 0x1DF7B8u, 0x1DF7C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF7C0u;
label_1df7c0:
    // 0x1df7c0: 0xfe420000  sd          $v0, 0x0($s2)
    ctx->pc = 0x1df7c0u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 2));
label_1df7c4:
    // 0x1df7c4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1df7c4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1df7c8:
    // 0x1df7c8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1df7c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1df7cc:
    // 0x1df7cc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1df7ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1df7d0:
    // 0x1df7d0: 0x3c05004b  lui         $a1, 0x4B
    ctx->pc = 0x1df7d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)75 << 16));
label_1df7d4:
    // 0x1df7d4: 0x3c04004b  lui         $a0, 0x4B
    ctx->pc = 0x1df7d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)75 << 16));
label_1df7d8:
    // 0x1df7d8: 0x3c036666  lui         $v1, 0x6666
    ctx->pc = 0x1df7d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)26214 << 16));
label_1df7dc:
    // 0x1df7dc: 0x24a50660  addiu       $a1, $a1, 0x660
    ctx->pc = 0x1df7dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1632));
label_1df7e0:
    // 0x1df7e0: 0x24840480  addiu       $a0, $a0, 0x480
    ctx->pc = 0x1df7e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
label_1df7e4:
    // 0x1df7e4: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1df7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1df7e8:
    // 0x1df7e8: 0x34636667  ori         $v1, $v1, 0x6667
    ctx->pc = 0x1df7e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26215);
label_1df7ec:
    // 0x1df7ec: 0x8f898cb0  lw          $t1, -0x7350($gp)
    ctx->pc = 0x1df7ecu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
label_1df7f0:
    // 0x1df7f0: 0x1520000c  bnez        $t1, . + 4 + (0xC << 2)
label_1df7f4:
    if (ctx->pc == 0x1DF7F4u) {
        ctx->pc = 0x1DF7F8u;
        goto label_1df7f8;
    }
    ctx->pc = 0x1DF7F0u;
    {
        const bool branch_taken_0x1df7f0 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        if (branch_taken_0x1df7f0) {
            ctx->pc = 0x1DF824u;
            goto label_1df824;
        }
    }
    ctx->pc = 0x1DF7F8u;
label_1df7f8:
    // 0x1df7f8: 0x8f8a8cb4  lw          $t2, -0x734C($gp)
    ctx->pc = 0x1df7f8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937780)));
label_1df7fc:
    // 0x1df7fc: 0x2064821  addu        $t1, $s0, $a2
    ctx->pc = 0x1df7fcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
label_1df800:
    // 0x1df800: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1df800u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1df804:
    // 0x1df804: 0xa5080  sll         $t2, $t2, 2
    ctx->pc = 0x1df804u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
label_1df808:
    // 0x1df808: 0xaa5021  addu        $t2, $a1, $t2
    ctx->pc = 0x1df808u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 10)));
label_1df80c:
    // 0x1df80c: 0x8d4a0000  lw          $t2, 0x0($t2)
    ctx->pc = 0x1df80cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_1df810:
    // 0x1df810: 0xa50c0  sll         $t2, $t2, 3
    ctx->pc = 0x1df810u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
label_1df814:
    // 0x1df814: 0x8a5021  addu        $t2, $a0, $t2
    ctx->pc = 0x1df814u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
label_1df818:
    // 0x1df818: 0xdd4a0060  ld          $t2, 0x60($t2)
    ctx->pc = 0x1df818u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 10), 96)));
label_1df81c:
    // 0x1df81c: 0x1000002a  b           . + 4 + (0x2A << 2)
label_1df820:
    if (ctx->pc == 0x1DF820u) {
        ctx->pc = 0x1DF820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF81Cu;
        // 0x1df820: 0xfd2a0070  sd          $t2, 0x70($t1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 9), 112), GPR_U64(ctx, 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DF824u;
        goto label_1df824;
    }
    ctx->pc = 0x1DF81Cu;
    {
        const bool branch_taken_0x1df81c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF81Cu;
        // 0x1df820: 0xfd2a0070  sd          $t2, 0x70($t1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 9), 112), GPR_U64(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df81c) {
            ctx->pc = 0x1DF8C8u;
            goto label_1df8c8;
        }
    }
    ctx->pc = 0x1DF824u;
label_1df824:
    // 0x1df824: 0x0  nop
    ctx->pc = 0x1df824u;
    // NOP
label_1df828:
    // 0x1df828: 0x29210005  slti        $at, $t1, 0x5
    ctx->pc = 0x1df828u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)5) ? 1 : 0);
label_1df82c:
    // 0x1df82c: 0x10200013  beqz        $at, . + 4 + (0x13 << 2)
label_1df830:
    if (ctx->pc == 0x1DF830u) {
        ctx->pc = 0x1DF834u;
        goto label_1df834;
    }
    ctx->pc = 0x1DF82Cu;
    {
        const bool branch_taken_0x1df82c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1df82c) {
            ctx->pc = 0x1DF87Cu;
            goto label_1df87c;
        }
    }
    ctx->pc = 0x1DF834u;
label_1df834:
    // 0x1df834: 0x8f8a8ca8  lw          $t2, -0x7358($gp)
    ctx->pc = 0x1df834u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937768)));
label_1df838:
    // 0x1df838: 0x2064821  addu        $t1, $s0, $a2
    ctx->pc = 0x1df838u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
label_1df83c:
    // 0x1df83c: 0xa5080  sll         $t2, $t2, 2
    ctx->pc = 0x1df83cu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
label_1df840:
    // 0x1df840: 0xaa5021  addu        $t2, $a1, $t2
    ctx->pc = 0x1df840u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 10)));
label_1df844:
    // 0x1df844: 0x8d4a0000  lw          $t2, 0x0($t2)
    ctx->pc = 0x1df844u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_1df848:
    // 0x1df848: 0xa50c0  sll         $t2, $t2, 3
    ctx->pc = 0x1df848u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
label_1df84c:
    // 0x1df84c: 0x8a5021  addu        $t2, $a0, $t2
    ctx->pc = 0x1df84cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
label_1df850:
    // 0x1df850: 0xdd4a0060  ld          $t2, 0x60($t2)
    ctx->pc = 0x1df850u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 10), 96)));
label_1df854:
    // 0x1df854: 0xfd2a0070  sd          $t2, 0x70($t1)
    ctx->pc = 0x1df854u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 112), GPR_U64(ctx, 10));
label_1df858:
    // 0x1df858: 0x8f898cb0  lw          $t1, -0x7350($gp)
    ctx->pc = 0x1df858u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
label_1df85c:
    // 0x1df85c: 0x94900  sll         $t1, $t1, 4
    ctx->pc = 0x1df85cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
label_1df860:
    // 0x1df860: 0x690018  mult        $zero, $v1, $t1
    ctx->pc = 0x1df860u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1df864:
    // 0x1df864: 0x957c2  srl         $t2, $t1, 31
    ctx->pc = 0x1df864u;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 9), 31));
label_1df868:
    // 0x1df868: 0x0  nop
    ctx->pc = 0x1df868u;
    // NOP
label_1df86c:
    // 0x1df86c: 0x4810  mfhi        $t1
    ctx->pc = 0x1df86cu;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_1df870:
    // 0x1df870: 0x94843  sra         $t1, $t1, 1
    ctx->pc = 0x1df870u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 9), 1));
label_1df874:
    // 0x1df874: 0x10000014  b           . + 4 + (0x14 << 2)
label_1df878:
    if (ctx->pc == 0x1DF878u) {
        ctx->pc = 0x1DF878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF874u;
        // 0x1df878: 0x12a5821  addu        $t3, $t1, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DF87Cu;
        goto label_1df87c;
    }
    ctx->pc = 0x1DF874u;
    {
        const bool branch_taken_0x1df874 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF874u;
        // 0x1df878: 0x12a5821  addu        $t3, $t1, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df874) {
            ctx->pc = 0x1DF8C8u;
            goto label_1df8c8;
        }
    }
    ctx->pc = 0x1DF87Cu;
label_1df87c:
    // 0x1df87c: 0x0  nop
    ctx->pc = 0x1df87cu;
    // NOP
label_1df880:
    // 0x1df880: 0x8f8a8cac  lw          $t2, -0x7354($gp)
    ctx->pc = 0x1df880u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937772)));
label_1df884:
    // 0x1df884: 0x2064821  addu        $t1, $s0, $a2
    ctx->pc = 0x1df884u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
label_1df888:
    // 0x1df888: 0xa5080  sll         $t2, $t2, 2
    ctx->pc = 0x1df888u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
label_1df88c:
    // 0x1df88c: 0xaa5021  addu        $t2, $a1, $t2
    ctx->pc = 0x1df88cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 10)));
label_1df890:
    // 0x1df890: 0x8d4a0000  lw          $t2, 0x0($t2)
    ctx->pc = 0x1df890u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_1df894:
    // 0x1df894: 0xa50c0  sll         $t2, $t2, 3
    ctx->pc = 0x1df894u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
label_1df898:
    // 0x1df898: 0x8a5021  addu        $t2, $a0, $t2
    ctx->pc = 0x1df898u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
label_1df89c:
    // 0x1df89c: 0xdd4a0060  ld          $t2, 0x60($t2)
    ctx->pc = 0x1df89cu;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 10), 96)));
label_1df8a0:
    // 0x1df8a0: 0xfd2a0070  sd          $t2, 0x70($t1)
    ctx->pc = 0x1df8a0u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 112), GPR_U64(ctx, 10));
label_1df8a4:
    // 0x1df8a4: 0x8f898cb0  lw          $t1, -0x7350($gp)
    ctx->pc = 0x1df8a4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
label_1df8a8:
    // 0x1df8a8: 0x494823  subu        $t1, $v0, $t1
    ctx->pc = 0x1df8a8u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
label_1df8ac:
    // 0x1df8ac: 0x94900  sll         $t1, $t1, 4
    ctx->pc = 0x1df8acu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
label_1df8b0:
    // 0x1df8b0: 0x690018  mult        $zero, $v1, $t1
    ctx->pc = 0x1df8b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1df8b4:
    // 0x1df8b4: 0x957c2  srl         $t2, $t1, 31
    ctx->pc = 0x1df8b4u;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 9), 31));
label_1df8b8:
    // 0x1df8b8: 0x0  nop
    ctx->pc = 0x1df8b8u;
    // NOP
label_1df8bc:
    // 0x1df8bc: 0x4810  mfhi        $t1
    ctx->pc = 0x1df8bcu;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_1df8c0:
    // 0x1df8c0: 0x94843  sra         $t1, $t1, 1
    ctx->pc = 0x1df8c0u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 9), 1));
label_1df8c4:
    // 0x1df8c4: 0x12a5821  addu        $t3, $t1, $t2
    ctx->pc = 0x1df8c4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
label_1df8c8:
    // 0x1df8c8: 0x5610003  bgez        $t3, . + 4 + (0x3 << 2)
label_1df8cc:
    if (ctx->pc == 0x1DF8CCu) {
        ctx->pc = 0x1DF8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF8C8u;
        // 0x1df8cc: 0xb6043  sra         $t4, $t3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 11), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DF8D0u;
        goto label_1df8d0;
    }
    ctx->pc = 0x1DF8C8u;
    {
        const bool branch_taken_0x1df8c8 = (GPR_S32(ctx, 11) >= 0);
        ctx->pc = 0x1DF8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF8C8u;
        // 0x1df8cc: 0xb6043  sra         $t4, $t3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 11), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df8c8) {
            ctx->pc = 0x1DF8D8u;
            goto label_1df8d8;
        }
    }
    ctx->pc = 0x1DF8D0u;
label_1df8d0:
    // 0x1df8d0: 0x25690001  addiu       $t1, $t3, 0x1
    ctx->pc = 0x1df8d0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
label_1df8d4:
    // 0x1df8d4: 0x96043  sra         $t4, $t1, 1
    ctx->pc = 0x1df8d4u;
    SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 9), 1));
label_1df8d8:
    // 0x1df8d8: 0x24e90180  addiu       $t1, $a3, 0x180
    ctx->pc = 0x1df8d8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), 384));
label_1df8dc:
    // 0x1df8dc: 0x2065821  addu        $t3, $s0, $a2
    ctx->pc = 0x1df8dcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
label_1df8e0:
    // 0x1df8e0: 0x1895021  addu        $t2, $t4, $t1
    ctx->pc = 0x1df8e0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 9)));
label_1df8e4:
    // 0x1df8e4: 0x24c600d0  addiu       $a2, $a2, 0xD0
    ctx->pc = 0x1df8e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 208));
label_1df8e8:
    // 0x1df8e8: 0x25090001  addiu       $t1, $t0, 0x1
    ctx->pc = 0x1df8e8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1df8ec:
    // 0x1df8ec: 0xa5100  sll         $t2, $t2, 4
    ctx->pc = 0x1df8ecu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 4));
label_1df8f0:
    // 0x1df8f0: 0x94900  sll         $t1, $t1, 4
    ctx->pc = 0x1df8f0u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
label_1df8f4:
    // 0x1df8f4: 0x254a6c00  addiu       $t2, $t2, 0x6C00
    ctx->pc = 0x1df8f4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 27648));
label_1df8f8:
    // 0x1df8f8: 0x25290180  addiu       $t1, $t1, 0x180
    ctx->pc = 0x1df8f8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 384));
label_1df8fc:
    // 0x1df8fc: 0xa56a0090  sh          $t2, 0x90($t3)
    ctx->pc = 0x1df8fcu;
    WRITE16(ADD32(GPR_U32(ctx, 11), 144), (uint16_t)GPR_U32(ctx, 10));
label_1df900:
    // 0x1df900: 0x12c4823  subu        $t1, $t1, $t4
    ctx->pc = 0x1df900u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 12)));
label_1df904:
    // 0x1df904: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1df904u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1df908:
    // 0x1df908: 0x94900  sll         $t1, $t1, 4
    ctx->pc = 0x1df908u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
label_1df90c:
    // 0x1df90c: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x1df90cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
label_1df910:
    // 0x1df910: 0x252c6c00  addiu       $t4, $t1, 0x6C00
    ctx->pc = 0x1df910u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 9), 27648));
label_1df914:
    // 0x1df914: 0xa56c00a8  sh          $t4, 0xA8($t3)
    ctx->pc = 0x1df914u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 168), (uint16_t)GPR_U32(ctx, 12));
label_1df918:
    // 0x1df918: 0x29090010  slti        $t1, $t0, 0x10
    ctx->pc = 0x1df918u;
    SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)16) ? 1 : 0);
label_1df91c:
    // 0x1df91c: 0xa56a00c0  sh          $t2, 0xC0($t3)
    ctx->pc = 0x1df91cu;
    WRITE16(ADD32(GPR_U32(ctx, 11), 192), (uint16_t)GPR_U32(ctx, 10));
label_1df920:
    // 0x1df920: 0xa56c00d8  sh          $t4, 0xD8($t3)
    ctx->pc = 0x1df920u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 216), (uint16_t)GPR_U32(ctx, 12));
label_1df924:
    // 0x1df924: 0x838a8cc0  lb          $t2, -0x7340($gp)
    ctx->pc = 0x1df924u;
    SET_GPR_S32(ctx, 10, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937792)));
label_1df928:
    // 0x1df928: 0xa16a00cb  sb          $t2, 0xCB($t3)
    ctx->pc = 0x1df928u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 203), (uint8_t)GPR_U32(ctx, 10));
label_1df92c:
    // 0x1df92c: 0xa16a00b3  sb          $t2, 0xB3($t3)
    ctx->pc = 0x1df92cu;
    WRITE8(ADD32(GPR_U32(ctx, 11), 179), (uint8_t)GPR_U32(ctx, 10));
label_1df930:
    // 0x1df930: 0xa16a009b  sb          $t2, 0x9B($t3)
    ctx->pc = 0x1df930u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 155), (uint8_t)GPR_U32(ctx, 10));
label_1df934:
    // 0x1df934: 0x1520ffad  bnez        $t1, . + 4 + (-0x53 << 2)
label_1df938:
    if (ctx->pc == 0x1DF938u) {
        ctx->pc = 0x1DF938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF934u;
        // 0x1df938: 0xa16a0083  sb          $t2, 0x83($t3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 11), 131), (uint8_t)GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DF93Cu;
        goto label_1df93c;
    }
    ctx->pc = 0x1DF934u;
    {
        const bool branch_taken_0x1df934 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DF938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF934u;
        // 0x1df938: 0xa16a0083  sb          $t2, 0x83($t3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 11), 131), (uint8_t)GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df934) {
            ctx->pc = 0x1DF7ECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1df7ec;
        }
    }
    ctx->pc = 0x1DF93Cu;
label_1df93c:
    // 0x1df93c: 0x83838cc0  lb          $v1, -0x7340($gp)
    ctx->pc = 0x1df93cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937792)));
label_1df940:
    // 0x1df940: 0x3c02004b  lui         $v0, 0x4B
    ctx->pc = 0x1df940u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
label_1df944:
    // 0x1df944: 0x24420660  addiu       $v0, $v0, 0x660
    ctx->pc = 0x1df944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1632));
label_1df948:
    // 0x1df948: 0xa2030d83  sb          $v1, 0xD83($s0)
    ctx->pc = 0x1df948u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3459), (uint8_t)GPR_U32(ctx, 3));
label_1df94c:
    // 0x1df94c: 0x8f838cb8  lw          $v1, -0x7348($gp)
    ctx->pc = 0x1df94cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937784)));
label_1df950:
    // 0x1df950: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1df950u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1df954:
    // 0x1df954: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1df954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1df958:
    // 0x1df958: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1df958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1df95c:
    // 0x1df95c: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x1df95cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1df960:
    // 0x1df960: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x1df960u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1df964:
    // 0x1df964: 0x1180a  movz        $v1, $zero, $at
    ctx->pc = 0x1df964u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
label_1df968:
    // 0x1df968: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1df968u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1df96c:
    // 0x1df96c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1df96cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1df970:
    // 0x1df970: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x1df970u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1df974:
    // 0x1df974: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1df974u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1df978:
    // 0x1df978: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1df978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1df97c:
    // 0x1df97c: 0x33100  sll         $a2, $v1, 4
    ctx->pc = 0x1df97cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_1df980:
    // 0x1df980: 0xa6020e28  sh          $v0, 0xE28($s0)
    ctx->pc = 0x1df980u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 3624), (uint16_t)GPR_U32(ctx, 2));
label_1df984:
    // 0x1df984: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1df984u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1df988:
    // 0x1df988: 0x31200  sll         $v0, $v1, 8
    ctx->pc = 0x1df988u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
label_1df98c:
    // 0x1df98c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1df98cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1df990:
    // 0x1df990: 0x24450008  addiu       $a1, $v0, 0x8
    ctx->pc = 0x1df990u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_1df994:
    // 0x1df994: 0x24031708  addiu       $v1, $zero, 0x1708
    ctx->pc = 0x1df994u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5896));
label_1df998:
    // 0x1df998: 0x24c20070  addiu       $v0, $a2, 0x70
    ctx->pc = 0x1df998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 112));
label_1df99c:
    // 0x1df99c: 0xa6050e2a  sh          $a1, 0xE2A($s0)
    ctx->pc = 0x1df99cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 3626), (uint16_t)GPR_U32(ctx, 5));
label_1df9a0:
    // 0x1df9a0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1df9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_1df9a4:
    // 0x1df9a4: 0xa6030e38  sh          $v1, 0xE38($s0)
    ctx->pc = 0x1df9a4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 3640), (uint16_t)GPR_U32(ctx, 3));
label_1df9a8:
    // 0x1df9a8: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x1df9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_1df9ac:
    // 0x1df9ac: 0x3c03005b  lui         $v1, 0x5B
    ctx->pc = 0x1df9acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)91 << 16));
label_1df9b0:
    // 0x1df9b0: 0xa6020e3a  sh          $v0, 0xE3A($s0)
    ctx->pc = 0x1df9b0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 3642), (uint16_t)GPR_U32(ctx, 2));
label_1df9b4:
    // 0x1df9b4: 0x62e38  dsll        $a1, $a2, 24
    ctx->pc = 0x1df9b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) << 24);
label_1df9b8:
    // 0x1df9b8: 0x24c2006f  addiu       $v0, $a2, 0x6F
    ctx->pc = 0x1df9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 111));
label_1df9bc:
    // 0x1df9bc: 0x3463c00a  ori         $v1, $v1, 0xC00A
    ctx->pc = 0x1df9bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)49162);
label_1df9c0:
    // 0x1df9c0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1df9c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_1df9c4:
    // 0x1df9c4: 0xa31825  or          $v1, $a1, $v1
    ctx->pc = 0x1df9c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_1df9c8:
    // 0x1df9c8: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1df9c8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_1df9cc:
    // 0x1df9cc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1df9ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1df9d0:
    // 0x1df9d0: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x1df9d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
label_1df9d4:
    // 0x1df9d4: 0x240600ef  addiu       $a2, $zero, 0xEF
    ctx->pc = 0x1df9d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 239));
label_1df9d8:
    // 0x1df9d8: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1df9d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_1df9dc:
    // 0x1df9dc: 0xfe020df0  sd          $v0, 0xDF0($s0)
    ctx->pc = 0x1df9dcu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 3568), GPR_U64(ctx, 2));
label_1df9e0:
    // 0x1df9e0: 0x83828cc0  lb          $v0, -0x7340($gp)
    ctx->pc = 0x1df9e0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937792)));
label_1df9e4:
    // 0x1df9e4: 0xa2020e23  sb          $v0, 0xE23($s0)
    ctx->pc = 0x1df9e4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3619), (uint8_t)GPR_U32(ctx, 2));
label_1df9e8:
    // 0x1df9e8: 0x83828cbc  lb          $v0, -0x7344($gp)
    ctx->pc = 0x1df9e8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937788)));
label_1df9ec:
    // 0x1df9ec: 0xc066c72  jal         func_19B1C8
label_1df9f0:
    if (ctx->pc == 0x1DF9F0u) {
        ctx->pc = 0x1DF9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF9ECu;
        // 0x1df9f0: 0xa2020ec3  sb          $v0, 0xEC3($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 3779), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DF9F4u;
        goto label_1df9f4;
    }
    ctx->pc = 0x1DF9ECu;
    SET_GPR_U32(ctx, 31, 0x1DF9F4u);
    ctx->pc = 0x1DF9F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF9ECu;
    // 0x1df9f0: 0xa2020ec3  sb          $v0, 0xEC3($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 3779), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x1DF9ECu, 0x1DF9F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF9F4u;
label_1df9f4:
    // 0x1df9f4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1df9f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1df9f8:
    // 0x1df9f8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1df9f8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1df9fc:
    // 0x1df9fc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1df9fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1dfa00:
    // 0x1dfa00: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1dfa00u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1dfa04:
    // 0x1dfa04: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1dfa04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1dfa08:
    // 0x1dfa08: 0x3e00008  jr          $ra
label_1dfa0c:
    if (ctx->pc == 0x1DFA0Cu) {
        ctx->pc = 0x1DFA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFA08u;
        // 0x1dfa0c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DFA10u;
        goto label_1dfa10;
    }
    ctx->pc = 0x1DFA08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DFA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFA08u;
        // 0x1dfa0c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DFA08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DFA10u;
label_1dfa10:
    // 0x1dfa10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1dfa10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1dfa14:
    // 0x1dfa14: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1dfa14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1dfa18:
    // 0x1dfa18: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1dfa18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1dfa1c:
    // 0x1dfa1c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1dfa1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1dfa20:
    // 0x1dfa20: 0x8f838cd4  lw          $v1, -0x732C($gp)
    ctx->pc = 0x1dfa20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937812)));
label_1dfa24:
    // 0x1dfa24: 0x106000a0  beqz        $v1, . + 4 + (0xA0 << 2)
label_1dfa28:
    if (ctx->pc == 0x1DFA28u) {
        ctx->pc = 0x1DFA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFA24u;
        // 0x1dfa28: 0x3c017000  lui         $at, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DFA2Cu;
        goto label_1dfa2c;
    }
    ctx->pc = 0x1DFA24u;
    {
        const bool branch_taken_0x1dfa24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DFA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFA24u;
        // 0x1dfa28: 0x3c017000  lui         $at, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfa24) {
            ctx->pc = 0x1DFCA8u;
            goto label_1dfca8;
        }
    }
    ctx->pc = 0x1DFA2Cu;
label_1dfa2c:
    // 0x1dfa2c: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x1dfa2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
label_1dfa30:
    // 0x1dfa30: 0x8c253ffc  lw          $a1, 0x3FFC($at)
    ctx->pc = 0x1dfa30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_1dfa34:
    // 0x1dfa34: 0x27828cd8  addiu       $v0, $gp, -0x7328
    ctx->pc = 0x1dfa34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937816));
label_1dfa38:
    // 0x1dfa38: 0x24841e00  addiu       $a0, $a0, 0x1E00
    ctx->pc = 0x1dfa38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7680));
label_1dfa3c:
    // 0x1dfa3c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1dfa3cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dfa40:
    // 0x1dfa40: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1dfa40u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dfa44:
    // 0x1dfa44: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1dfa44u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dfa48:
    // 0x1dfa48: 0x53140  sll         $a2, $a1, 5
    ctx->pc = 0x1dfa48u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_1dfa4c:
    // 0x1dfa4c: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x1dfa4cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_1dfa50:
    // 0x1dfa50: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x1dfa50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_1dfa54:
    // 0x1dfa54: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1dfa54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_1dfa58:
    // 0x1dfa58: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1dfa58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1dfa5c:
    // 0x1dfa5c: 0x0  nop
    ctx->pc = 0x1dfa5cu;
    // NOP
label_1dfa60:
    // 0x1dfa60: 0x3c029249  lui         $v0, 0x9249
    ctx->pc = 0x1dfa60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37449 << 16));
label_1dfa64:
    // 0x1dfa64: 0x240f0038  addiu       $t7, $zero, 0x38
    ctx->pc = 0x1dfa64u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
label_1dfa68:
    // 0x1dfa68: 0x34422493  ori         $v0, $v0, 0x2493
    ctx->pc = 0x1dfa68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9363);
label_1dfa6c:
    // 0x1dfa6c: 0x240e000a  addiu       $t6, $zero, 0xA
    ctx->pc = 0x1dfa6cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1dfa70:
    // 0x1dfa70: 0x8f868cd0  lw          $a2, -0x7330($gp)
    ctx->pc = 0x1dfa70u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937808)));
label_1dfa74:
    // 0x1dfa74: 0xc85823  subu        $t3, $a2, $t0
    ctx->pc = 0x1dfa74u;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
label_1dfa78:
    // 0x1dfa78: 0x5610003  bgez        $t3, . + 4 + (0x3 << 2)
label_1dfa7c:
    if (ctx->pc == 0x1DFA7Cu) {
        ctx->pc = 0x1DFA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFA78u;
        // 0x1dfa7c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DFA80u;
        goto label_1dfa80;
    }
    ctx->pc = 0x1DFA78u;
    {
        const bool branch_taken_0x1dfa78 = (GPR_S32(ctx, 11) >= 0);
        ctx->pc = 0x1DFA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFA78u;
        // 0x1dfa7c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfa78) {
            ctx->pc = 0x1DFA88u;
            goto label_1dfa88;
        }
    }
    ctx->pc = 0x1DFA80u;
label_1dfa80:
    // 0x1dfa80: 0x10000018  b           . + 4 + (0x18 << 2)
label_1dfa84:
    if (ctx->pc == 0x1DFA84u) {
        ctx->pc = 0x1DFA88u;
        goto label_1dfa88;
    }
    ctx->pc = 0x1DFA80u;
    {
        const bool branch_taken_0x1dfa80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dfa80) {
            ctx->pc = 0x1DFAE4u;
            goto label_1dfae4;
        }
    }
    ctx->pc = 0x1DFA88u;
label_1dfa88:
    // 0x1dfa88: 0x29610039  slti        $at, $t3, 0x39
    ctx->pc = 0x1dfa88u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 11) < (int64_t)(int32_t)57) ? 1 : 0);
label_1dfa8c:
    // 0x1dfa8c: 0x14200008  bnez        $at, . + 4 + (0x8 << 2)
label_1dfa90:
    if (ctx->pc == 0x1DFA90u) {
        ctx->pc = 0x1DFA94u;
        goto label_1dfa94;
    }
    ctx->pc = 0x1DFA8Cu;
    {
        const bool branch_taken_0x1dfa8c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dfa8c) {
            ctx->pc = 0x1DFAB0u;
            goto label_1dfab0;
        }
    }
    ctx->pc = 0x1DFA94u;
label_1dfa94:
    // 0x1dfa94: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_1dfa98:
    if (ctx->pc == 0x1DFA98u) {
        ctx->pc = 0x1DFA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFA94u;
        // 0x1dfa98: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DFA9Cu;
        goto label_1dfa9c;
    }
    ctx->pc = 0x1DFA94u;
    {
        const bool branch_taken_0x1dfa94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DFA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFA94u;
        // 0x1dfa98: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfa94) {
            ctx->pc = 0x1DFAA4u;
            goto label_1dfaa4;
        }
    }
    ctx->pc = 0x1DFA9Cu;
label_1dfa9c:
    // 0x1dfa9c: 0x10000011  b           . + 4 + (0x11 << 2)
label_1dfaa0:
    if (ctx->pc == 0x1DFAA0u) {
        ctx->pc = 0x1DFAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFA9Cu;
        // 0x1dfaa0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DFAA4u;
        goto label_1dfaa4;
    }
    ctx->pc = 0x1DFA9Cu;
    {
        const bool branch_taken_0x1dfa9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DFAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFA9Cu;
        // 0x1dfaa0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfa9c) {
            ctx->pc = 0x1DFAE4u;
            goto label_1dfae4;
        }
    }
    ctx->pc = 0x1DFAA4u;
label_1dfaa4:
    // 0x1dfaa4: 0x0  nop
    ctx->pc = 0x1dfaa4u;
    // NOP
label_1dfaa8:
    // 0x1dfaa8: 0x1000000e  b           . + 4 + (0xE << 2)
label_1dfaac:
    if (ctx->pc == 0x1DFAACu) {
        ctx->pc = 0x1DFAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFAA8u;
        // 0x1dfaac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DFAB0u;
        goto label_1dfab0;
    }
    ctx->pc = 0x1DFAA8u;
    {
        const bool branch_taken_0x1dfaa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DFAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFAA8u;
        // 0x1dfaac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfaa8) {
            ctx->pc = 0x1DFAE4u;
            goto label_1dfae4;
        }
    }
    ctx->pc = 0x1DFAB0u;
label_1dfab0:
    // 0x1dfab0: 0xb51c0  sll         $t2, $t3, 7
    ctx->pc = 0x1dfab0u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 11), 7));
label_1dfab4:
    // 0x1dfab4: 0x4a0018  mult        $zero, $v0, $t2
    ctx->pc = 0x1dfab4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1dfab8:
    // 0x1dfab8: 0xa3fc2  srl         $a3, $t2, 31
    ctx->pc = 0x1dfab8u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 10), 31));
label_1dfabc:
    // 0x1dfabc: 0x0  nop
    ctx->pc = 0x1dfabcu;
    // NOP
label_1dfac0:
    // 0x1dfac0: 0x3010  mfhi        $a2
    ctx->pc = 0x1dfac0u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_1dfac4:
    // 0x1dfac4: 0xca3021  addu        $a2, $a2, $t2
    ctx->pc = 0x1dfac4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 10)));
label_1dfac8:
    // 0x1dfac8: 0x63143  sra         $a2, $a2, 5
    ctx->pc = 0x1dfac8u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 5));
label_1dfacc:
    // 0x1dfacc: 0xc73821  addu        $a3, $a2, $a3
    ctx->pc = 0x1dfaccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_1dfad0:
    // 0x1dfad0: 0x4e10003  bgez        $a3, . + 4 + (0x3 << 2)
label_1dfad4:
    if (ctx->pc == 0x1DFAD4u) {
        ctx->pc = 0x1DFAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFAD0u;
        // 0x1dfad4: 0x73043  sra         $a2, $a3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DFAD8u;
        goto label_1dfad8;
    }
    ctx->pc = 0x1DFAD0u;
    {
        const bool branch_taken_0x1dfad0 = (GPR_S32(ctx, 7) >= 0);
        ctx->pc = 0x1DFAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFAD0u;
        // 0x1dfad4: 0x73043  sra         $a2, $a3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfad0) {
            ctx->pc = 0x1DFAE0u;
            goto label_1dfae0;
        }
    }
    ctx->pc = 0x1DFAD8u;
label_1dfad8:
    // 0x1dfad8: 0x24e60001  addiu       $a2, $a3, 0x1
    ctx->pc = 0x1dfad8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_1dfadc:
    // 0x1dfadc: 0x63043  sra         $a2, $a2, 1
    ctx->pc = 0x1dfadcu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 1));
label_1dfae0:
    // 0x1dfae0: 0x1eb3823  subu        $a3, $t7, $t3
    ctx->pc = 0x1dfae0u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 11)));
label_1dfae4:
    // 0x1dfae4: 0x0  nop
    ctx->pc = 0x1dfae4u;
    // NOP
label_1dfae8:
    // 0x1dfae8: 0x14c00005  bnez        $a2, . + 4 + (0x5 << 2)
label_1dfaec:
    if (ctx->pc == 0x1DFAECu) {
        ctx->pc = 0x1DFAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFAE8u;
        // 0x1dfaec: 0xc82d  daddu       $t9, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DFAF0u;
        goto label_1dfaf0;
    }
    ctx->pc = 0x1DFAE8u;
    {
        const bool branch_taken_0x1dfae8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DFAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFAE8u;
        // 0x1dfaec: 0xc82d  daddu       $t9, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfae8) {
            ctx->pc = 0x1DFB00u;
            goto label_1dfb00;
        }
    }
    ctx->pc = 0x1DFAF0u;
label_1dfaf0:
    // 0x1dfaf0: 0xc02d  daddu       $t8, $zero, $zero
    ctx->pc = 0x1dfaf0u;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dfaf4:
    // 0x1dfaf4: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1dfaf4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dfaf8:
    // 0x1dfaf8: 0x10000009  b           . + 4 + (0x9 << 2)
label_1dfafc:
    if (ctx->pc == 0x1DFAFCu) {
        ctx->pc = 0x1DFAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFAF8u;
        // 0x1dfafc: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DFB00u;
        goto label_1dfb00;
    }
    ctx->pc = 0x1DFAF8u;
    {
        const bool branch_taken_0x1dfaf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DFAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFAF8u;
        // 0x1dfafc: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfaf8) {
            ctx->pc = 0x1DFB20u;
            goto label_1dfb20;
        }
    }
    ctx->pc = 0x1DFB00u;
label_1dfb00:
    // 0x1dfb00: 0x246a0006  addiu       $t2, $v1, 0x6
    ctx->pc = 0x1dfb00u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), 6));
label_1dfb04:
    // 0x1dfb04: 0xea5818  mult        $t3, $a3, $t2
    ctx->pc = 0x1dfb04u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
label_1dfb08:
    // 0x1dfb08: 0x1c35023  subu        $t2, $t6, $v1
    ctx->pc = 0x1dfb08u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 3)));
label_1dfb0c:
    // 0x1dfb0c: 0xb5823  negu        $t3, $t3
    ctx->pc = 0x1dfb0cu;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 11)));
label_1dfb10:
    // 0x1dfb10: 0x70ea5018  mult1       $t2, $a3, $t2
    ctx->pc = 0x1dfb10u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 10); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
label_1dfb14:
    // 0x1dfb14: 0x255801e0  addiu       $t8, $t2, 0x1E0
    ctx->pc = 0x1dfb14u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 10), 480));
label_1dfb18:
    // 0x1dfb18: 0x255901c0  addiu       $t9, $t2, 0x1C0
    ctx->pc = 0x1dfb18u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 10), 448));
label_1dfb1c:
    // 0x1dfb1c: 0x160502d  daddu       $t2, $t3, $zero
    ctx->pc = 0x1dfb1cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_1dfb20:
    // 0x1dfb20: 0xa5100  sll         $t2, $t2, 4
    ctx->pc = 0x1dfb20u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 4));
label_1dfb24:
    // 0x1dfb24: 0x254d6c00  addiu       $t5, $t2, 0x6C00
    ctx->pc = 0x1dfb24u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 10), 27648));
label_1dfb28:
    // 0x1dfb28: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1dfb28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1dfb2c:
    // 0x1dfb2c: 0xb50c0  sll         $t2, $t3, 3
    ctx->pc = 0x1dfb2cu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 11), 3));
label_1dfb30:
    // 0x1dfb30: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x1dfb30u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
label_1dfb34:
    // 0x1dfb34: 0x254c7900  addiu       $t4, $t2, 0x7900
    ctx->pc = 0x1dfb34u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 10), 30976));
label_1dfb38:
    // 0x1dfb38: 0x185100  sll         $t2, $t8, 4
    ctx->pc = 0x1dfb38u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 24), 4));
label_1dfb3c:
    // 0x1dfb3c: 0xa9c021  addu        $t8, $a1, $t1
    ctx->pc = 0x1dfb3cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
label_1dfb40:
    // 0x1dfb40: 0x254b6c00  addiu       $t3, $t2, 0x6C00
    ctx->pc = 0x1dfb40u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 10), 27648));
label_1dfb44:
    // 0x1dfb44: 0xa70d0090  sh          $t5, 0x90($t8)
    ctx->pc = 0x1dfb44u;
    WRITE16(ADD32(GPR_U32(ctx, 24), 144), (uint16_t)GPR_U32(ctx, 13));
label_1dfb48:
    // 0x1dfb48: 0x1950c0  sll         $t2, $t9, 3
    ctx->pc = 0x1dfb48u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 25), 3));
label_1dfb4c:
    // 0x1dfb4c: 0xa70c0092  sh          $t4, 0x92($t8)
    ctx->pc = 0x1dfb4cu;
    WRITE16(ADD32(GPR_U32(ctx, 24), 146), (uint16_t)GPR_U32(ctx, 12));
label_1dfb50:
    // 0x1dfb50: 0x254a7900  addiu       $t2, $t2, 0x7900
    ctx->pc = 0x1dfb50u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 30976));
label_1dfb54:
    // 0x1dfb54: 0xa70b00a0  sh          $t3, 0xA0($t8)
    ctx->pc = 0x1dfb54u;
    WRITE16(ADD32(GPR_U32(ctx, 24), 160), (uint16_t)GPR_U32(ctx, 11));
label_1dfb58:
    // 0x1dfb58: 0x252900a0  addiu       $t1, $t1, 0xA0
    ctx->pc = 0x1dfb58u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 160));
label_1dfb5c:
    // 0x1dfb5c: 0xa70a00a2  sh          $t2, 0xA2($t8)
    ctx->pc = 0x1dfb5cu;
    WRITE16(ADD32(GPR_U32(ctx, 24), 162), (uint16_t)GPR_U32(ctx, 10));
label_1dfb60:
    // 0x1dfb60: 0x286a0006  slti        $t2, $v1, 0x6
    ctx->pc = 0x1dfb60u;
    SET_GPR_U64(ctx, 10, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)6) ? 1 : 0);
label_1dfb64:
    // 0x1dfb64: 0x1540ffc2  bnez        $t2, . + 4 + (-0x3E << 2)
label_1dfb68:
    if (ctx->pc == 0x1DFB68u) {
        ctx->pc = 0x1DFB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFB64u;
        // 0x1dfb68: 0xa3060083  sb          $a2, 0x83($t8) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 24), 131), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DFB6Cu;
        goto label_1dfb6c;
    }
    ctx->pc = 0x1DFB64u;
    {
        const bool branch_taken_0x1dfb64 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DFB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFB64u;
        // 0x1dfb68: 0xa3060083  sb          $a2, 0x83($t8) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 24), 131), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfb64) {
            ctx->pc = 0x1DFA70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dfa70;
        }
    }
    ctx->pc = 0x1DFB6Cu;
label_1dfb6c:
    // 0x1dfb6c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1dfb6cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dfb70:
    // 0x1dfb70: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1dfb70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dfb74:
    // 0x1dfb74: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1dfb74u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dfb78:
    // 0x1dfb78: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1dfb78u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dfb7c:
    // 0x1dfb7c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1dfb7cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dfb80:
    // 0x1dfb80: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x1dfb80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_1dfb84:
    // 0x1dfb84: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1dfb84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1dfb88:
    // 0x1dfb88: 0x24190006  addiu       $t9, $zero, 0x6
    ctx->pc = 0x1dfb88u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1dfb8c:
    // 0x1dfb8c: 0x8f8c8cd0  lw          $t4, -0x7330($gp)
    ctx->pc = 0x1dfb8cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937808)));
label_1dfb90:
    // 0x1dfb90: 0x1866823  subu        $t5, $t4, $a2
    ctx->pc = 0x1dfb90u;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 6)));
label_1dfb94:
    // 0x1dfb94: 0x5a10003  bgez        $t5, . + 4 + (0x3 << 2)
label_1dfb98:
    if (ctx->pc == 0x1DFB98u) {
        ctx->pc = 0x1DFB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFB94u;
        // 0x1dfb98: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DFB9Cu;
        goto label_1dfb9c;
    }
    ctx->pc = 0x1DFB94u;
    {
        const bool branch_taken_0x1dfb94 = (GPR_S32(ctx, 13) >= 0);
        ctx->pc = 0x1DFB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFB94u;
        // 0x1dfb98: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfb94) {
            ctx->pc = 0x1DFBA4u;
            goto label_1dfba4;
        }
    }
    ctx->pc = 0x1DFB9Cu;
label_1dfb9c:
    // 0x1dfb9c: 0x10000016  b           . + 4 + (0x16 << 2)
label_1dfba0:
    if (ctx->pc == 0x1DFBA0u) {
        ctx->pc = 0x1DFBA4u;
        goto label_1dfba4;
    }
    ctx->pc = 0x1DFB9Cu;
    {
        const bool branch_taken_0x1dfb9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dfb9c) {
            ctx->pc = 0x1DFBF8u;
            goto label_1dfbf8;
        }
    }
    ctx->pc = 0x1DFBA4u;
label_1dfba4:
    // 0x1dfba4: 0x0  nop
    ctx->pc = 0x1dfba4u;
    // NOP
label_1dfba8:
    // 0x1dfba8: 0x29a10041  slti        $at, $t5, 0x41
    ctx->pc = 0x1dfba8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 13) < (int64_t)(int32_t)65) ? 1 : 0);
label_1dfbac:
    // 0x1dfbac: 0x14200008  bnez        $at, . + 4 + (0x8 << 2)
label_1dfbb0:
    if (ctx->pc == 0x1DFBB0u) {
        ctx->pc = 0x1DFBB4u;
        goto label_1dfbb4;
    }
    ctx->pc = 0x1DFBACu;
    {
        const bool branch_taken_0x1dfbac = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dfbac) {
            ctx->pc = 0x1DFBD0u;
            goto label_1dfbd0;
        }
    }
    ctx->pc = 0x1DFBB4u;
label_1dfbb4:
    // 0x1dfbb4: 0x15600003  bnez        $t3, . + 4 + (0x3 << 2)
label_1dfbb8:
    if (ctx->pc == 0x1DFBB8u) {
        ctx->pc = 0x1DFBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFBB4u;
        // 0x1dfbb8: 0x240c0080  addiu       $t4, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DFBBCu;
        goto label_1dfbbc;
    }
    ctx->pc = 0x1DFBB4u;
    {
        const bool branch_taken_0x1dfbb4 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DFBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFBB4u;
        // 0x1dfbb8: 0x240c0080  addiu       $t4, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfbb4) {
            ctx->pc = 0x1DFBC4u;
            goto label_1dfbc4;
        }
    }
    ctx->pc = 0x1DFBBCu;
label_1dfbbc:
    // 0x1dfbbc: 0x1000000e  b           . + 4 + (0xE << 2)
label_1dfbc0:
    if (ctx->pc == 0x1DFBC0u) {
        ctx->pc = 0x1DFBC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFBBCu;
        // 0x1dfbc0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DFBC4u;
        goto label_1dfbc4;
    }
    ctx->pc = 0x1DFBBCu;
    {
        const bool branch_taken_0x1dfbbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DFBC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFBBCu;
        // 0x1dfbc0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfbbc) {
            ctx->pc = 0x1DFBF8u;
            goto label_1dfbf8;
        }
    }
    ctx->pc = 0x1DFBC4u;
label_1dfbc4:
    // 0x1dfbc4: 0x0  nop
    ctx->pc = 0x1dfbc4u;
    // NOP
label_1dfbc8:
    // 0x1dfbc8: 0x1000000b  b           . + 4 + (0xB << 2)
label_1dfbcc:
    if (ctx->pc == 0x1DFBCCu) {
        ctx->pc = 0x1DFBCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFBC8u;
        // 0x1dfbcc: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DFBD0u;
        goto label_1dfbd0;
    }
    ctx->pc = 0x1DFBC8u;
    {
        const bool branch_taken_0x1dfbc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DFBCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFBC8u;
        // 0x1dfbcc: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfbc8) {
            ctx->pc = 0x1DFBF8u;
            goto label_1dfbf8;
        }
    }
    ctx->pc = 0x1DFBD0u;
label_1dfbd0:
    // 0x1dfbd0: 0xd61c0  sll         $t4, $t5, 7
    ctx->pc = 0x1dfbd0u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 13), 7));
label_1dfbd4:
    // 0x1dfbd4: 0x5810003  bgez        $t4, . + 4 + (0x3 << 2)
label_1dfbd8:
    if (ctx->pc == 0x1DFBD8u) {
        ctx->pc = 0x1DFBD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFBD4u;
        // 0x1dfbd8: 0xc3983  sra         $a3, $t4, 6 (Delay Slot)
        SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 12), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DFBDCu;
        goto label_1dfbdc;
    }
    ctx->pc = 0x1DFBD4u;
    {
        const bool branch_taken_0x1dfbd4 = (GPR_S32(ctx, 12) >= 0);
        ctx->pc = 0x1DFBD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFBD4u;
        // 0x1dfbd8: 0xc3983  sra         $a3, $t4, 6 (Delay Slot)
        SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 12), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfbd4) {
            ctx->pc = 0x1DFBE4u;
            goto label_1dfbe4;
        }
    }
    ctx->pc = 0x1DFBDCu;
label_1dfbdc:
    // 0x1dfbdc: 0x2587003f  addiu       $a3, $t4, 0x3F
    ctx->pc = 0x1dfbdcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 12), 63));
label_1dfbe0:
    // 0x1dfbe0: 0x73983  sra         $a3, $a3, 6
    ctx->pc = 0x1dfbe0u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 6));
label_1dfbe4:
    // 0x1dfbe4: 0x4e10003  bgez        $a3, . + 4 + (0x3 << 2)
label_1dfbe8:
    if (ctx->pc == 0x1DFBE8u) {
        ctx->pc = 0x1DFBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFBE4u;
        // 0x1dfbe8: 0x76043  sra         $t4, $a3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DFBECu;
        goto label_1dfbec;
    }
    ctx->pc = 0x1DFBE4u;
    {
        const bool branch_taken_0x1dfbe4 = (GPR_S32(ctx, 7) >= 0);
        ctx->pc = 0x1DFBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFBE4u;
        // 0x1dfbe8: 0x76043  sra         $t4, $a3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfbe4) {
            ctx->pc = 0x1DFBF4u;
            goto label_1dfbf4;
        }
    }
    ctx->pc = 0x1DFBECu;
label_1dfbec:
    // 0x1dfbec: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1dfbecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_1dfbf0:
    // 0x1dfbf0: 0x76043  sra         $t4, $a3, 1
    ctx->pc = 0x1dfbf0u;
    SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 7), 1));
label_1dfbf4:
    // 0x1dfbf4: 0x6d3823  subu        $a3, $v1, $t5
    ctx->pc = 0x1dfbf4u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 13)));
label_1dfbf8:
    // 0x1dfbf8: 0x15800005  bnez        $t4, . + 4 + (0x5 << 2)
label_1dfbfc:
    if (ctx->pc == 0x1DFBFCu) {
        ctx->pc = 0x1DFBFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFBF8u;
        // 0x1dfbfc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DFC00u;
        goto label_1dfc00;
    }
    ctx->pc = 0x1DFBF8u;
    {
        const bool branch_taken_0x1dfbf8 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DFBFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFBF8u;
        // 0x1dfbfc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfbf8) {
            ctx->pc = 0x1DFC10u;
            goto label_1dfc10;
        }
    }
    ctx->pc = 0x1DFC00u;
label_1dfc00:
    // 0x1dfc00: 0x702d  daddu       $t6, $zero, $zero
    ctx->pc = 0x1dfc00u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dfc04:
    // 0x1dfc04: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1dfc04u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dfc08:
    // 0x1dfc08: 0x1000000d  b           . + 4 + (0xD << 2)
label_1dfc0c:
    if (ctx->pc == 0x1DFC0Cu) {
        ctx->pc = 0x1DFC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFC08u;
        // 0x1dfc0c: 0x782d  daddu       $t7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DFC10u;
        goto label_1dfc10;
    }
    ctx->pc = 0x1DFC08u;
    {
        const bool branch_taken_0x1dfc08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DFC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFC08u;
        // 0x1dfc0c: 0x782d  daddu       $t7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfc08) {
            ctx->pc = 0x1DFC40u;
            goto label_1dfc40;
        }
    }
    ctx->pc = 0x1DFC10u;
label_1dfc10:
    // 0x1dfc10: 0x250d0005  addiu       $t5, $t0, 0x5
    ctx->pc = 0x1dfc10u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 8), 5));
label_1dfc14:
    // 0x1dfc14: 0xed7818  mult        $t7, $a3, $t5
    ctx->pc = 0x1dfc14u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 13); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
label_1dfc18:
    // 0x1dfc18: 0x24ce0005  addiu       $t6, $a2, 0x5
    ctx->pc = 0x1dfc18u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 6), 5));
label_1dfc1c:
    // 0x1dfc1c: 0x486823  subu        $t5, $v0, $t0
    ctx->pc = 0x1dfc1cu;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
label_1dfc20:
    // 0x1dfc20: 0x6f7823  subu        $t7, $v1, $t7
    ctx->pc = 0x1dfc20u;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 15)));
label_1dfc24:
    // 0x1dfc24: 0x70ed6818  mult1       $t5, $a3, $t5
    ctx->pc = 0x1dfc24u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 13); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
label_1dfc28:
    // 0x1dfc28: 0x6d8823  subu        $s1, $v1, $t5
    ctx->pc = 0x1dfc28u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 13)));
label_1dfc2c:
    // 0x1dfc2c: 0x3296823  subu        $t5, $t9, $t1
    ctx->pc = 0x1dfc2cu;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 25), GPR_U32(ctx, 9)));
label_1dfc30:
    // 0x1dfc30: 0x70ed6818  mult1       $t5, $a3, $t5
    ctx->pc = 0x1dfc30u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 13); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
label_1dfc34:
    // 0x1dfc34: 0x25b00160  addiu       $s0, $t5, 0x160
    ctx->pc = 0x1dfc34u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 13), 352));
label_1dfc38:
    // 0x1dfc38: 0xee6818  mult        $t5, $a3, $t6
    ctx->pc = 0x1dfc38u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
label_1dfc3c:
    // 0x1dfc3c: 0x25ae0180  addiu       $t6, $t5, 0x180
    ctx->pc = 0x1dfc3cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 13), 384));
label_1dfc40:
    // 0x1dfc40: 0xf6900  sll         $t5, $t7, 4
    ctx->pc = 0x1dfc40u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 15), 4));
label_1dfc44:
    // 0x1dfc44: 0x25b86c00  addiu       $t8, $t5, 0x6C00
    ctx->pc = 0x1dfc44u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 13), 27648));
label_1dfc48:
    // 0x1dfc48: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x1dfc48u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
label_1dfc4c:
    // 0x1dfc4c: 0x1168c0  sll         $t5, $s1, 3
    ctx->pc = 0x1dfc4cu;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
label_1dfc50:
    // 0x1dfc50: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x1dfc50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_1dfc54:
    // 0x1dfc54: 0x25af7900  addiu       $t7, $t5, 0x7900
    ctx->pc = 0x1dfc54u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 13), 30976));
label_1dfc58:
    // 0x1dfc58: 0x25080002  addiu       $t0, $t0, 0x2
    ctx->pc = 0x1dfc58u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
label_1dfc5c:
    // 0x1dfc5c: 0xe6900  sll         $t5, $t6, 4
    ctx->pc = 0x1dfc5cu;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 14), 4));
label_1dfc60:
    // 0x1dfc60: 0x25290003  addiu       $t1, $t1, 0x3
    ctx->pc = 0x1dfc60u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 3));
label_1dfc64:
    // 0x1dfc64: 0x25ae6c00  addiu       $t6, $t5, 0x6C00
    ctx->pc = 0x1dfc64u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 13), 27648));
label_1dfc68:
    // 0x1dfc68: 0x1068c0  sll         $t5, $s0, 3
    ctx->pc = 0x1dfc68u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_1dfc6c:
    // 0x1dfc6c: 0xaa8021  addu        $s0, $a1, $t2
    ctx->pc = 0x1dfc6cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 10)));
label_1dfc70:
    // 0x1dfc70: 0x25ad7900  addiu       $t5, $t5, 0x7900
    ctx->pc = 0x1dfc70u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 30976));
label_1dfc74:
    // 0x1dfc74: 0xa6180450  sh          $t8, 0x450($s0)
    ctx->pc = 0x1dfc74u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1104), (uint16_t)GPR_U32(ctx, 24));
label_1dfc78:
    // 0x1dfc78: 0xa60f0452  sh          $t7, 0x452($s0)
    ctx->pc = 0x1dfc78u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1106), (uint16_t)GPR_U32(ctx, 15));
label_1dfc7c:
    // 0x1dfc7c: 0xa60e0460  sh          $t6, 0x460($s0)
    ctx->pc = 0x1dfc7cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1120), (uint16_t)GPR_U32(ctx, 14));
label_1dfc80:
    // 0x1dfc80: 0xa60d0462  sh          $t5, 0x462($s0)
    ctx->pc = 0x1dfc80u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1122), (uint16_t)GPR_U32(ctx, 13));
label_1dfc84:
    // 0x1dfc84: 0xa20c0443  sb          $t4, 0x443($s0)
    ctx->pc = 0x1dfc84u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1091), (uint8_t)GPR_U32(ctx, 12));
label_1dfc88:
    // 0x1dfc88: 0x296c0006  slti        $t4, $t3, 0x6
    ctx->pc = 0x1dfc88u;
    SET_GPR_U64(ctx, 12, ((int64_t)GPR_S64(ctx, 11) < (int64_t)(int32_t)6) ? 1 : 0);
label_1dfc8c:
    // 0x1dfc8c: 0x1580ffbf  bnez        $t4, . + 4 + (-0x41 << 2)
label_1dfc90:
    if (ctx->pc == 0x1DFC90u) {
        ctx->pc = 0x1DFC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFC8Cu;
        // 0x1dfc90: 0x254a00a0  addiu       $t2, $t2, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DFC94u;
        goto label_1dfc94;
    }
    ctx->pc = 0x1DFC8Cu;
    {
        const bool branch_taken_0x1dfc8c = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DFC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFC8Cu;
        // 0x1dfc90: 0x254a00a0  addiu       $t2, $t2, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfc8c) {
            ctx->pc = 0x1DFB8Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dfb8c;
        }
    }
    ctx->pc = 0x1DFC94u;
label_1dfc94:
    // 0x1dfc94: 0x24060079  addiu       $a2, $zero, 0x79
    ctx->pc = 0x1dfc94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 121));
label_1dfc98:
    // 0x1dfc98: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1dfc98u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dfc9c:
    // 0x1dfc9c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1dfc9cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dfca0:
    // 0x1dfca0: 0xc066c72  jal         func_19B1C8
label_1dfca4:
    if (ctx->pc == 0x1DFCA4u) {
        ctx->pc = 0x1DFCA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFCA0u;
        // 0x1dfca4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DFCA8u;
        goto label_1dfca8;
    }
    ctx->pc = 0x1DFCA0u;
    SET_GPR_U32(ctx, 31, 0x1DFCA8u);
    ctx->pc = 0x1DFCA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DFCA0u;
    // 0x1dfca4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x1DFCA0u, 0x1DFCA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DFCA8u;
label_1dfca8:
    // 0x1dfca8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1dfca8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1dfcac:
    // 0x1dfcac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1dfcacu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1dfcb0:
    // 0x1dfcb0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1dfcb0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1dfcb4:
    // 0x1dfcb4: 0x3e00008  jr          $ra
label_1dfcb8:
    if (ctx->pc == 0x1DFCB8u) {
        ctx->pc = 0x1DFCB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFCB4u;
        // 0x1dfcb8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DFCBCu;
        goto label_1dfcbc;
    }
    ctx->pc = 0x1DFCB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DFCB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFCB4u;
        // 0x1dfcb8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DFCB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DFCBCu;
label_1dfcbc:
    // 0x1dfcbc: 0x0  nop
    ctx->pc = 0x1dfcbcu;
    // NOP
label_1dfcc0:
    // 0x1dfcc0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1dfcc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_1dfcc4:
    // 0x1dfcc4: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1dfcc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_1dfcc8:
    // 0x1dfcc8: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1dfcc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_1dfccc:
    // 0x1dfccc: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1dfcccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_1dfcd0:
    // 0x1dfcd0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1dfcd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1dfcd4:
    // 0x1dfcd4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1dfcd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1dfcd8:
    // 0x1dfcd8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1dfcd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1dfcdc:
    // 0x1dfcdc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1dfcdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1dfce0:
    // 0x1dfce0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1dfce0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1dfce4:
    // 0x1dfce4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1dfce4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dfce8:
    // 0x1dfce8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1dfce8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dfcec:
    // 0x1dfcec: 0x0  nop
    ctx->pc = 0x1dfcecu;
    // NOP
label_1dfcf0:
    // 0x1dfcf0: 0x27828d08  addiu       $v0, $gp, -0x72F8
    ctx->pc = 0x1dfcf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937864));
label_1dfcf4:
    // 0x1dfcf4: 0x519021  addu        $s2, $v0, $s1
    ctx->pc = 0x1dfcf4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_1dfcf8:
    // 0x1dfcf8: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1dfcf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1dfcfc:
    // 0x1dfcfc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_1dfd00:
    if (ctx->pc == 0x1DFD00u) {
        ctx->pc = 0x1DFD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFCFCu;
        // 0x1dfd00: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DFD04u;
        goto label_1dfd04;
    }
    ctx->pc = 0x1DFCFCu;
    {
        const bool branch_taken_0x1dfcfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DFD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFCFCu;
        // 0x1dfd00: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfcfc) {
            ctx->pc = 0x1DFD10u;
            goto label_1dfd10;
        }
    }
    ctx->pc = 0x1DFD04u;
label_1dfd04:
    // 0x1dfd04: 0xc070080  jal         func_1C0200
label_1dfd08:
    if (ctx->pc == 0x1DFD08u) {
        ctx->pc = 0x1DFD08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFD04u;
        // 0x1dfd08: 0x24052280  addiu       $a1, $zero, 0x2280 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8832));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DFD0Cu;
        goto label_1dfd0c;
    }
    ctx->pc = 0x1DFD04u;
    SET_GPR_U32(ctx, 31, 0x1DFD0Cu);
    ctx->pc = 0x1DFD08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DFD04u;
    // 0x1dfd08: 0x24052280  addiu       $a1, $zero, 0x2280 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8832));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    { ctx->pc = 0x1c0200; return; }
    ctx->pc = 0x1DFD0Cu;
label_1dfd0c:
    // 0x1dfd0c: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x1dfd0cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_1dfd10:
    // 0x1dfd10: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1dfd10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1dfd14:
    // 0x1dfd14: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x1dfd14u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
label_1dfd18:
    // 0x1dfd18: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_1dfd1c:
    if (ctx->pc == 0x1DFD1Cu) {
        ctx->pc = 0x1DFD1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFD18u;
        // 0x1dfd1c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DFD20u;
        goto label_1dfd20;
    }
    ctx->pc = 0x1DFD18u;
    {
        const bool branch_taken_0x1dfd18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DFD1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFD18u;
        // 0x1dfd1c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfd18) {
            ctx->pc = 0x1DFCECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dfcec;
        }
    }
    ctx->pc = 0x1DFD20u;
label_1dfd20:
    // 0x1dfd20: 0x24020194  addiu       $v0, $zero, 0x194
    ctx->pc = 0x1dfd20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 404));
label_1dfd24:
    // 0x1dfd24: 0xaf808d00  sw          $zero, -0x7300($gp)
    ctx->pc = 0x1dfd24u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937856), GPR_U32(ctx, 0));
label_1dfd28:
    // 0x1dfd28: 0xafa20080  sw          $v0, 0x80($sp)
    ctx->pc = 0x1dfd28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 2));
label_1dfd2c:
    // 0x1dfd2c: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x1dfd2cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dfd30:
    // 0x1dfd30: 0x2402019a  addiu       $v0, $zero, 0x19A
    ctx->pc = 0x1dfd30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 410));
label_1dfd34:
    // 0x1dfd34: 0xaf808cf8  sw          $zero, -0x7308($gp)
    ctx->pc = 0x1dfd34u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937848), GPR_U32(ctx, 0));
label_1dfd38:
    // 0x1dfd38: 0xafa20084  sw          $v0, 0x84($sp)
    ctx->pc = 0x1dfd38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 2));
label_1dfd3c:
    // 0x1dfd3c: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x1dfd3cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dfd40:
    // 0x1dfd40: 0x240201ae  addiu       $v0, $zero, 0x1AE
    ctx->pc = 0x1dfd40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 430));
label_1dfd44:
    // 0x1dfd44: 0xafa20088  sw          $v0, 0x88($sp)
    ctx->pc = 0x1dfd44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 2));
label_1dfd48:
    // 0x1dfd48: 0x240201b4  addiu       $v0, $zero, 0x1B4
    ctx->pc = 0x1dfd48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 436));
label_1dfd4c:
    // 0x1dfd4c: 0xafa2008c  sw          $v0, 0x8C($sp)
    ctx->pc = 0x1dfd4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 2));
label_1dfd50:
    // 0x1dfd50: 0x27828d08  addiu       $v0, $gp, -0x72F8
    ctx->pc = 0x1dfd50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937864));
label_1dfd54:
    // 0x1dfd54: 0x24050227  addiu       $a1, $zero, 0x227
    ctx->pc = 0x1dfd54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 551));
label_1dfd58:
    // 0x1dfd58: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x1dfd58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
label_1dfd5c:
    // 0x1dfd5c: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x1dfd5cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1dfd60:
    // 0x1dfd60: 0xc05e234  jal         func_1788D0
label_1dfd64:
    if (ctx->pc == 0x1DFD64u) {
        ctx->pc = 0x1DFD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFD60u;
        // 0x1dfd64: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DFD68u;
        goto label_1dfd68;
    }
    ctx->pc = 0x1DFD60u;
    SET_GPR_U32(ctx, 31, 0x1DFD68u);
    ctx->pc = 0x1DFD64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DFD60u;
    // 0x1dfd64: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1788D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1788D0u, 0x1DFD60u, 0x1DFD68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DFD68u;
label_1dfd68:
    // 0x1dfd68: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1dfd68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dfd6c:
    // 0x1dfd6c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1dfd6cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dfd70:
    // 0x1dfd70: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1dfd70u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dfd74:
    // 0x1dfd74: 0x0  nop
    ctx->pc = 0x1dfd74u;
    // NOP
label_1dfd78:
    // 0x1dfd78: 0x27a20080  addiu       $v0, $sp, 0x80
    ctx->pc = 0x1dfd78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_1dfd7c:
    // 0x1dfd7c: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1dfd7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_1dfd80:
    // 0x1dfd80: 0x233a021  addu        $s4, $s1, $s3
    ctx->pc = 0x1dfd80u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
label_1dfd84:
    // 0x1dfd84: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1dfd84u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1dfd88:
    // 0x1dfd88: 0x26840010  addiu       $a0, $s4, 0x10
    ctx->pc = 0x1dfd88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
label_1dfd8c:
    // 0x1dfd8c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1dfd8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dfd90:
    // 0x1dfd90: 0x3407ffe0  ori         $a3, $zero, 0xFFE0
    ctx->pc = 0x1dfd90u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65504);
label_1dfd94:
    // 0x1dfd94: 0x24080280  addiu       $t0, $zero, 0x280
    ctx->pc = 0x1dfd94u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_1dfd98:
    // 0x1dfd98: 0x240a0002  addiu       $t2, $zero, 0x2
    ctx->pc = 0x1dfd98u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1dfd9c:
    // 0x1dfd9c: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x1dfd9cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1dfda0:
    // 0x1dfda0: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x1dfda0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1dfda4:
    // 0x1dfda4: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x1dfda4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_1dfda8:
    // 0x1dfda8: 0xc05e060  jal         func_178180
label_1dfdac:
    if (ctx->pc == 0x1DFDACu) {
        ctx->pc = 0x1DFDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFDA8u;
        // 0x1dfdac: 0x3049ffff  andi        $t1, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DFDB0u;
        goto label_1dfdb0;
    }
    ctx->pc = 0x1DFDA8u;
    SET_GPR_U32(ctx, 31, 0x1DFDB0u);
    ctx->pc = 0x1DFDACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DFDA8u;
    // 0x1dfdac: 0x3049ffff  andi        $t1, $v0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x178180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178180u, 0x1DFDA8u, 0x1DFDB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DFDB0u;
label_1dfdb0:
    // 0x1dfdb0: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x1dfdb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_1dfdb4:
    // 0x1dfdb4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1dfdb4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1dfdb8:
    // 0x1dfdb8: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x1dfdb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1dfdbc:
    // 0x1dfdbc: 0xa2860078  sb          $a2, 0x78($s4)
    ctx->pc = 0x1dfdbcu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 120), (uint8_t)GPR_U32(ctx, 6));
label_1dfdc0:
    // 0x1dfdc0: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x1dfdc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_1dfdc4:
    // 0x1dfdc4: 0xa2850079  sb          $a1, 0x79($s4)
    ctx->pc = 0x1dfdc4u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 121), (uint8_t)GPR_U32(ctx, 5));
label_1dfdc8:
    // 0x1dfdc8: 0xa284007a  sb          $a0, 0x7A($s4)
    ctx->pc = 0x1dfdc8u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 122), (uint8_t)GPR_U32(ctx, 4));
label_1dfdcc:
    // 0x1dfdcc: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1dfdccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_1dfdd0:
    // 0x1dfdd0: 0xa280007b  sb          $zero, 0x7B($s4)
    ctx->pc = 0x1dfdd0u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 123), (uint8_t)GPR_U32(ctx, 0));
label_1dfdd4:
    // 0x1dfdd4: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x1dfdd4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
label_1dfdd8:
    // 0x1dfdd8: 0xae83007c  sw          $v1, 0x7C($s4)
    ctx->pc = 0x1dfdd8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 124), GPR_U32(ctx, 3));
label_1dfddc:
    // 0x1dfddc: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x1dfddcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_1dfde0:
    // 0x1dfde0: 0xa2860088  sb          $a2, 0x88($s4)
    ctx->pc = 0x1dfde0u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 136), (uint8_t)GPR_U32(ctx, 6));
label_1dfde4:
    // 0x1dfde4: 0x267300b0  addiu       $s3, $s3, 0xB0
    ctx->pc = 0x1dfde4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 176));
label_1dfde8:
    // 0x1dfde8: 0xa2850089  sb          $a1, 0x89($s4)
    ctx->pc = 0x1dfde8u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 137), (uint8_t)GPR_U32(ctx, 5));
label_1dfdec:
    // 0x1dfdec: 0xa284008a  sb          $a0, 0x8A($s4)
    ctx->pc = 0x1dfdecu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 138), (uint8_t)GPR_U32(ctx, 4));
label_1dfdf0:
    // 0x1dfdf0: 0xa280008b  sb          $zero, 0x8B($s4)
    ctx->pc = 0x1dfdf0u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 139), (uint8_t)GPR_U32(ctx, 0));
label_1dfdf4:
    // 0x1dfdf4: 0xae83008c  sw          $v1, 0x8C($s4)
    ctx->pc = 0x1dfdf4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 140), GPR_U32(ctx, 3));
label_1dfdf8:
    // 0x1dfdf8: 0xa2860098  sb          $a2, 0x98($s4)
    ctx->pc = 0x1dfdf8u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 152), (uint8_t)GPR_U32(ctx, 6));
label_1dfdfc:
    // 0x1dfdfc: 0xa2850099  sb          $a1, 0x99($s4)
    ctx->pc = 0x1dfdfcu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 153), (uint8_t)GPR_U32(ctx, 5));
label_1dfe00:
    // 0x1dfe00: 0xa284009a  sb          $a0, 0x9A($s4)
    ctx->pc = 0x1dfe00u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 154), (uint8_t)GPR_U32(ctx, 4));
label_1dfe04:
    // 0x1dfe04: 0xa280009b  sb          $zero, 0x9B($s4)
    ctx->pc = 0x1dfe04u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 155), (uint8_t)GPR_U32(ctx, 0));
label_1dfe08:
    // 0x1dfe08: 0xae83009c  sw          $v1, 0x9C($s4)
    ctx->pc = 0x1dfe08u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 156), GPR_U32(ctx, 3));
label_1dfe0c:
    // 0x1dfe0c: 0xa28600a8  sb          $a2, 0xA8($s4)
    ctx->pc = 0x1dfe0cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 168), (uint8_t)GPR_U32(ctx, 6));
    ctx->pc = 0x1dfe10u;
    return;
}
