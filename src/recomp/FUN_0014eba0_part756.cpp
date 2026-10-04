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


void FUN_0014eba0_part756(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x2bf610u: goto label_2bf610;
        case 0x2bf614u: goto label_2bf614;
        case 0x2bf618u: goto label_2bf618;
        case 0x2bf61cu: goto label_2bf61c;
        case 0x2bf620u: goto label_2bf620;
        case 0x2bf624u: goto label_2bf624;
        case 0x2bf628u: goto label_2bf628;
        case 0x2bf62cu: goto label_2bf62c;
        case 0x2bf630u: goto label_2bf630;
        case 0x2bf634u: goto label_2bf634;
        case 0x2bf638u: goto label_2bf638;
        case 0x2bf63cu: goto label_2bf63c;
        case 0x2bf640u: goto label_2bf640;
        case 0x2bf644u: goto label_2bf644;
        case 0x2bf648u: goto label_2bf648;
        case 0x2bf64cu: goto label_2bf64c;
        case 0x2bf650u: goto label_2bf650;
        case 0x2bf654u: goto label_2bf654;
        case 0x2bf658u: goto label_2bf658;
        case 0x2bf65cu: goto label_2bf65c;
        case 0x2bf660u: goto label_2bf660;
        case 0x2bf664u: goto label_2bf664;
        case 0x2bf668u: goto label_2bf668;
        case 0x2bf66cu: goto label_2bf66c;
        case 0x2bf670u: goto label_2bf670;
        case 0x2bf674u: goto label_2bf674;
        case 0x2bf678u: goto label_2bf678;
        case 0x2bf67cu: goto label_2bf67c;
        case 0x2bf680u: goto label_2bf680;
        case 0x2bf684u: goto label_2bf684;
        case 0x2bf688u: goto label_2bf688;
        case 0x2bf68cu: goto label_2bf68c;
        case 0x2bf690u: goto label_2bf690;
        case 0x2bf694u: goto label_2bf694;
        case 0x2bf698u: goto label_2bf698;
        case 0x2bf69cu: goto label_2bf69c;
        case 0x2bf6a0u: goto label_2bf6a0;
        case 0x2bf6a4u: goto label_2bf6a4;
        case 0x2bf6a8u: goto label_2bf6a8;
        case 0x2bf6acu: goto label_2bf6ac;
        case 0x2bf6b0u: goto label_2bf6b0;
        case 0x2bf6b4u: goto label_2bf6b4;
        case 0x2bf6b8u: goto label_2bf6b8;
        case 0x2bf6bcu: goto label_2bf6bc;
        case 0x2bf6c0u: goto label_2bf6c0;
        case 0x2bf6c4u: goto label_2bf6c4;
        case 0x2bf6c8u: goto label_2bf6c8;
        case 0x2bf6ccu: goto label_2bf6cc;
        case 0x2bf6d0u: goto label_2bf6d0;
        case 0x2bf6d4u: goto label_2bf6d4;
        case 0x2bf6d8u: goto label_2bf6d8;
        case 0x2bf6dcu: goto label_2bf6dc;
        case 0x2bf6e0u: goto label_2bf6e0;
        case 0x2bf6e4u: goto label_2bf6e4;
        case 0x2bf6e8u: goto label_2bf6e8;
        case 0x2bf6ecu: goto label_2bf6ec;
        case 0x2bf6f0u: goto label_2bf6f0;
        case 0x2bf6f4u: goto label_2bf6f4;
        case 0x2bf6f8u: goto label_2bf6f8;
        case 0x2bf6fcu: goto label_2bf6fc;
        case 0x2bf700u: goto label_2bf700;
        case 0x2bf704u: goto label_2bf704;
        case 0x2bf708u: goto label_2bf708;
        case 0x2bf70cu: goto label_2bf70c;
        case 0x2bf710u: goto label_2bf710;
        case 0x2bf714u: goto label_2bf714;
        case 0x2bf718u: goto label_2bf718;
        case 0x2bf71cu: goto label_2bf71c;
        case 0x2bf720u: goto label_2bf720;
        case 0x2bf724u: goto label_2bf724;
        case 0x2bf728u: goto label_2bf728;
        case 0x2bf72cu: goto label_2bf72c;
        case 0x2bf730u: goto label_2bf730;
        case 0x2bf734u: goto label_2bf734;
        case 0x2bf738u: goto label_2bf738;
        case 0x2bf73cu: goto label_2bf73c;
        case 0x2bf740u: goto label_2bf740;
        case 0x2bf744u: goto label_2bf744;
        case 0x2bf748u: goto label_2bf748;
        case 0x2bf74cu: goto label_2bf74c;
        case 0x2bf750u: goto label_2bf750;
        case 0x2bf754u: goto label_2bf754;
        case 0x2bf758u: goto label_2bf758;
        case 0x2bf75cu: goto label_2bf75c;
        case 0x2bf760u: goto label_2bf760;
        case 0x2bf764u: goto label_2bf764;
        case 0x2bf768u: goto label_2bf768;
        case 0x2bf76cu: goto label_2bf76c;
        case 0x2bf770u: goto label_2bf770;
        case 0x2bf774u: goto label_2bf774;
        case 0x2bf778u: goto label_2bf778;
        case 0x2bf77cu: goto label_2bf77c;
        case 0x2bf780u: goto label_2bf780;
        case 0x2bf784u: goto label_2bf784;
        case 0x2bf788u: goto label_2bf788;
        case 0x2bf78cu: goto label_2bf78c;
        case 0x2bf790u: goto label_2bf790;
        case 0x2bf794u: goto label_2bf794;
        case 0x2bf798u: goto label_2bf798;
        case 0x2bf79cu: goto label_2bf79c;
        case 0x2bf7a0u: goto label_2bf7a0;
        case 0x2bf7a4u: goto label_2bf7a4;
        case 0x2bf7a8u: goto label_2bf7a8;
        case 0x2bf7acu: goto label_2bf7ac;
        case 0x2bf7b0u: goto label_2bf7b0;
        case 0x2bf7b4u: goto label_2bf7b4;
        case 0x2bf7b8u: goto label_2bf7b8;
        case 0x2bf7bcu: goto label_2bf7bc;
        case 0x2bf7c0u: goto label_2bf7c0;
        case 0x2bf7c4u: goto label_2bf7c4;
        case 0x2bf7c8u: goto label_2bf7c8;
        case 0x2bf7ccu: goto label_2bf7cc;
        case 0x2bf7d0u: goto label_2bf7d0;
        case 0x2bf7d4u: goto label_2bf7d4;
        case 0x2bf7d8u: goto label_2bf7d8;
        case 0x2bf7dcu: goto label_2bf7dc;
        case 0x2bf7e0u: goto label_2bf7e0;
        case 0x2bf7e4u: goto label_2bf7e4;
        case 0x2bf7e8u: goto label_2bf7e8;
        case 0x2bf7ecu: goto label_2bf7ec;
        case 0x2bf7f0u: goto label_2bf7f0;
        case 0x2bf7f4u: goto label_2bf7f4;
        case 0x2bf7f8u: goto label_2bf7f8;
        case 0x2bf7fcu: goto label_2bf7fc;
        case 0x2bf800u: goto label_2bf800;
        case 0x2bf804u: goto label_2bf804;
        case 0x2bf808u: goto label_2bf808;
        case 0x2bf80cu: goto label_2bf80c;
        case 0x2bf810u: goto label_2bf810;
        case 0x2bf814u: goto label_2bf814;
        case 0x2bf818u: goto label_2bf818;
        case 0x2bf81cu: goto label_2bf81c;
        case 0x2bf820u: goto label_2bf820;
        case 0x2bf824u: goto label_2bf824;
        case 0x2bf828u: goto label_2bf828;
        case 0x2bf82cu: goto label_2bf82c;
        case 0x2bf830u: goto label_2bf830;
        case 0x2bf834u: goto label_2bf834;
        case 0x2bf838u: goto label_2bf838;
        case 0x2bf83cu: goto label_2bf83c;
        case 0x2bf840u: goto label_2bf840;
        case 0x2bf844u: goto label_2bf844;
        case 0x2bf848u: goto label_2bf848;
        case 0x2bf84cu: goto label_2bf84c;
        case 0x2bf850u: goto label_2bf850;
        case 0x2bf854u: goto label_2bf854;
        case 0x2bf858u: goto label_2bf858;
        case 0x2bf85cu: goto label_2bf85c;
        case 0x2bf860u: goto label_2bf860;
        case 0x2bf864u: goto label_2bf864;
        case 0x2bf868u: goto label_2bf868;
        case 0x2bf86cu: goto label_2bf86c;
        case 0x2bf870u: goto label_2bf870;
        case 0x2bf874u: goto label_2bf874;
        case 0x2bf878u: goto label_2bf878;
        case 0x2bf87cu: goto label_2bf87c;
        case 0x2bf880u: goto label_2bf880;
        case 0x2bf884u: goto label_2bf884;
        case 0x2bf888u: goto label_2bf888;
        case 0x2bf88cu: goto label_2bf88c;
        case 0x2bf890u: goto label_2bf890;
        case 0x2bf894u: goto label_2bf894;
        case 0x2bf898u: goto label_2bf898;
        case 0x2bf89cu: goto label_2bf89c;
        case 0x2bf8a0u: goto label_2bf8a0;
        case 0x2bf8a4u: goto label_2bf8a4;
        case 0x2bf8a8u: goto label_2bf8a8;
        case 0x2bf8acu: goto label_2bf8ac;
        case 0x2bf8b0u: goto label_2bf8b0;
        case 0x2bf8b4u: goto label_2bf8b4;
        case 0x2bf8b8u: goto label_2bf8b8;
        case 0x2bf8bcu: goto label_2bf8bc;
        case 0x2bf8c0u: goto label_2bf8c0;
        case 0x2bf8c4u: goto label_2bf8c4;
        case 0x2bf8c8u: goto label_2bf8c8;
        case 0x2bf8ccu: goto label_2bf8cc;
        case 0x2bf8d0u: goto label_2bf8d0;
        case 0x2bf8d4u: goto label_2bf8d4;
        case 0x2bf8d8u: goto label_2bf8d8;
        case 0x2bf8dcu: goto label_2bf8dc;
        case 0x2bf8e0u: goto label_2bf8e0;
        case 0x2bf8e4u: goto label_2bf8e4;
        case 0x2bf8e8u: goto label_2bf8e8;
        case 0x2bf8ecu: goto label_2bf8ec;
        case 0x2bf8f0u: goto label_2bf8f0;
        case 0x2bf8f4u: goto label_2bf8f4;
        case 0x2bf8f8u: goto label_2bf8f8;
        case 0x2bf8fcu: goto label_2bf8fc;
        case 0x2bf900u: goto label_2bf900;
        case 0x2bf904u: goto label_2bf904;
        case 0x2bf908u: goto label_2bf908;
        case 0x2bf90cu: goto label_2bf90c;
        case 0x2bf910u: goto label_2bf910;
        case 0x2bf914u: goto label_2bf914;
        case 0x2bf918u: goto label_2bf918;
        case 0x2bf91cu: goto label_2bf91c;
        case 0x2bf920u: goto label_2bf920;
        case 0x2bf924u: goto label_2bf924;
        case 0x2bf928u: goto label_2bf928;
        case 0x2bf92cu: goto label_2bf92c;
        case 0x2bf930u: goto label_2bf930;
        case 0x2bf934u: goto label_2bf934;
        case 0x2bf938u: goto label_2bf938;
        case 0x2bf93cu: goto label_2bf93c;
        case 0x2bf940u: goto label_2bf940;
        case 0x2bf944u: goto label_2bf944;
        case 0x2bf948u: goto label_2bf948;
        case 0x2bf94cu: goto label_2bf94c;
        case 0x2bf950u: goto label_2bf950;
        case 0x2bf954u: goto label_2bf954;
        case 0x2bf958u: goto label_2bf958;
        case 0x2bf95cu: goto label_2bf95c;
        case 0x2bf960u: goto label_2bf960;
        case 0x2bf964u: goto label_2bf964;
        case 0x2bf968u: goto label_2bf968;
        case 0x2bf96cu: goto label_2bf96c;
        case 0x2bf970u: goto label_2bf970;
        case 0x2bf974u: goto label_2bf974;
        case 0x2bf978u: goto label_2bf978;
        case 0x2bf97cu: goto label_2bf97c;
        case 0x2bf980u: goto label_2bf980;
        case 0x2bf984u: goto label_2bf984;
        case 0x2bf988u: goto label_2bf988;
        case 0x2bf98cu: goto label_2bf98c;
        case 0x2bf990u: goto label_2bf990;
        case 0x2bf994u: goto label_2bf994;
        case 0x2bf998u: goto label_2bf998;
        case 0x2bf99cu: goto label_2bf99c;
        case 0x2bf9a0u: goto label_2bf9a0;
        case 0x2bf9a4u: goto label_2bf9a4;
        case 0x2bf9a8u: goto label_2bf9a8;
        case 0x2bf9acu: goto label_2bf9ac;
        case 0x2bf9b0u: goto label_2bf9b0;
        case 0x2bf9b4u: goto label_2bf9b4;
        case 0x2bf9b8u: goto label_2bf9b8;
        case 0x2bf9bcu: goto label_2bf9bc;
        case 0x2bf9c0u: goto label_2bf9c0;
        case 0x2bf9c4u: goto label_2bf9c4;
        case 0x2bf9c8u: goto label_2bf9c8;
        case 0x2bf9ccu: goto label_2bf9cc;
        case 0x2bf9d0u: goto label_2bf9d0;
        case 0x2bf9d4u: goto label_2bf9d4;
        case 0x2bf9d8u: goto label_2bf9d8;
        case 0x2bf9dcu: goto label_2bf9dc;
        case 0x2bf9e0u: goto label_2bf9e0;
        case 0x2bf9e4u: goto label_2bf9e4;
        case 0x2bf9e8u: goto label_2bf9e8;
        case 0x2bf9ecu: goto label_2bf9ec;
        case 0x2bf9f0u: goto label_2bf9f0;
        case 0x2bf9f4u: goto label_2bf9f4;
        case 0x2bf9f8u: goto label_2bf9f8;
        case 0x2bf9fcu: goto label_2bf9fc;
        case 0x2bfa00u: goto label_2bfa00;
        case 0x2bfa04u: goto label_2bfa04;
        case 0x2bfa08u: goto label_2bfa08;
        case 0x2bfa0cu: goto label_2bfa0c;
        case 0x2bfa10u: goto label_2bfa10;
        case 0x2bfa14u: goto label_2bfa14;
        case 0x2bfa18u: goto label_2bfa18;
        case 0x2bfa1cu: goto label_2bfa1c;
        case 0x2bfa20u: goto label_2bfa20;
        case 0x2bfa24u: goto label_2bfa24;
        case 0x2bfa28u: goto label_2bfa28;
        case 0x2bfa2cu: goto label_2bfa2c;
        case 0x2bfa30u: goto label_2bfa30;
        case 0x2bfa34u: goto label_2bfa34;
        case 0x2bfa38u: goto label_2bfa38;
        case 0x2bfa3cu: goto label_2bfa3c;
        case 0x2bfa40u: goto label_2bfa40;
        case 0x2bfa44u: goto label_2bfa44;
        case 0x2bfa48u: goto label_2bfa48;
        case 0x2bfa4cu: goto label_2bfa4c;
        case 0x2bfa50u: goto label_2bfa50;
        case 0x2bfa54u: goto label_2bfa54;
        case 0x2bfa58u: goto label_2bfa58;
        case 0x2bfa5cu: goto label_2bfa5c;
        case 0x2bfa60u: goto label_2bfa60;
        case 0x2bfa64u: goto label_2bfa64;
        case 0x2bfa68u: goto label_2bfa68;
        case 0x2bfa6cu: goto label_2bfa6c;
        case 0x2bfa70u: goto label_2bfa70;
        case 0x2bfa74u: goto label_2bfa74;
        case 0x2bfa78u: goto label_2bfa78;
        case 0x2bfa7cu: goto label_2bfa7c;
        case 0x2bfa80u: goto label_2bfa80;
        case 0x2bfa84u: goto label_2bfa84;
        case 0x2bfa88u: goto label_2bfa88;
        case 0x2bfa8cu: goto label_2bfa8c;
        case 0x2bfa90u: goto label_2bfa90;
        case 0x2bfa94u: goto label_2bfa94;
        case 0x2bfa98u: goto label_2bfa98;
        case 0x2bfa9cu: goto label_2bfa9c;
        case 0x2bfaa0u: goto label_2bfaa0;
        case 0x2bfaa4u: goto label_2bfaa4;
        case 0x2bfaa8u: goto label_2bfaa8;
        case 0x2bfaacu: goto label_2bfaac;
        case 0x2bfab0u: goto label_2bfab0;
        case 0x2bfab4u: goto label_2bfab4;
        case 0x2bfab8u: goto label_2bfab8;
        case 0x2bfabcu: goto label_2bfabc;
        case 0x2bfac0u: goto label_2bfac0;
        case 0x2bfac4u: goto label_2bfac4;
        case 0x2bfac8u: goto label_2bfac8;
        case 0x2bfaccu: goto label_2bfacc;
        case 0x2bfad0u: goto label_2bfad0;
        case 0x2bfad4u: goto label_2bfad4;
        case 0x2bfad8u: goto label_2bfad8;
        case 0x2bfadcu: goto label_2bfadc;
        case 0x2bfae0u: goto label_2bfae0;
        case 0x2bfae4u: goto label_2bfae4;
        case 0x2bfae8u: goto label_2bfae8;
        case 0x2bfaecu: goto label_2bfaec;
        case 0x2bfaf0u: goto label_2bfaf0;
        case 0x2bfaf4u: goto label_2bfaf4;
        case 0x2bfaf8u: goto label_2bfaf8;
        case 0x2bfafcu: goto label_2bfafc;
        case 0x2bfb00u: goto label_2bfb00;
        case 0x2bfb04u: goto label_2bfb04;
        case 0x2bfb08u: goto label_2bfb08;
        case 0x2bfb0cu: goto label_2bfb0c;
        case 0x2bfb10u: goto label_2bfb10;
        case 0x2bfb14u: goto label_2bfb14;
        case 0x2bfb18u: goto label_2bfb18;
        case 0x2bfb1cu: goto label_2bfb1c;
        case 0x2bfb20u: goto label_2bfb20;
        case 0x2bfb24u: goto label_2bfb24;
        case 0x2bfb28u: goto label_2bfb28;
        case 0x2bfb2cu: goto label_2bfb2c;
        case 0x2bfb30u: goto label_2bfb30;
        case 0x2bfb34u: goto label_2bfb34;
        case 0x2bfb38u: goto label_2bfb38;
        case 0x2bfb3cu: goto label_2bfb3c;
        case 0x2bfb40u: goto label_2bfb40;
        case 0x2bfb44u: goto label_2bfb44;
        case 0x2bfb48u: goto label_2bfb48;
        case 0x2bfb4cu: goto label_2bfb4c;
        case 0x2bfb50u: goto label_2bfb50;
        case 0x2bfb54u: goto label_2bfb54;
        case 0x2bfb58u: goto label_2bfb58;
        case 0x2bfb5cu: goto label_2bfb5c;
        case 0x2bfb60u: goto label_2bfb60;
        case 0x2bfb64u: goto label_2bfb64;
        case 0x2bfb68u: goto label_2bfb68;
        case 0x2bfb6cu: goto label_2bfb6c;
        case 0x2bfb70u: goto label_2bfb70;
        case 0x2bfb74u: goto label_2bfb74;
        case 0x2bfb78u: goto label_2bfb78;
        case 0x2bfb7cu: goto label_2bfb7c;
        case 0x2bfb80u: goto label_2bfb80;
        case 0x2bfb84u: goto label_2bfb84;
        case 0x2bfb88u: goto label_2bfb88;
        case 0x2bfb8cu: goto label_2bfb8c;
        case 0x2bfb90u: goto label_2bfb90;
        case 0x2bfb94u: goto label_2bfb94;
        case 0x2bfb98u: goto label_2bfb98;
        case 0x2bfb9cu: goto label_2bfb9c;
        case 0x2bfba0u: goto label_2bfba0;
        case 0x2bfba4u: goto label_2bfba4;
        case 0x2bfba8u: goto label_2bfba8;
        case 0x2bfbacu: goto label_2bfbac;
        case 0x2bfbb0u: goto label_2bfbb0;
        case 0x2bfbb4u: goto label_2bfbb4;
        case 0x2bfbb8u: goto label_2bfbb8;
        case 0x2bfbbcu: goto label_2bfbbc;
        case 0x2bfbc0u: goto label_2bfbc0;
        case 0x2bfbc4u: goto label_2bfbc4;
        case 0x2bfbc8u: goto label_2bfbc8;
        case 0x2bfbccu: goto label_2bfbcc;
        case 0x2bfbd0u: goto label_2bfbd0;
        case 0x2bfbd4u: goto label_2bfbd4;
        case 0x2bfbd8u: goto label_2bfbd8;
        case 0x2bfbdcu: goto label_2bfbdc;
        case 0x2bfbe0u: goto label_2bfbe0;
        case 0x2bfbe4u: goto label_2bfbe4;
        case 0x2bfbe8u: goto label_2bfbe8;
        case 0x2bfbecu: goto label_2bfbec;
        case 0x2bfbf0u: goto label_2bfbf0;
        case 0x2bfbf4u: goto label_2bfbf4;
        case 0x2bfbf8u: goto label_2bfbf8;
        case 0x2bfbfcu: goto label_2bfbfc;
        case 0x2bfc00u: goto label_2bfc00;
        case 0x2bfc04u: goto label_2bfc04;
        case 0x2bfc08u: goto label_2bfc08;
        case 0x2bfc0cu: goto label_2bfc0c;
        case 0x2bfc10u: goto label_2bfc10;
        case 0x2bfc14u: goto label_2bfc14;
        case 0x2bfc18u: goto label_2bfc18;
        case 0x2bfc1cu: goto label_2bfc1c;
        case 0x2bfc20u: goto label_2bfc20;
        case 0x2bfc24u: goto label_2bfc24;
        case 0x2bfc28u: goto label_2bfc28;
        case 0x2bfc2cu: goto label_2bfc2c;
        case 0x2bfc30u: goto label_2bfc30;
        case 0x2bfc34u: goto label_2bfc34;
        case 0x2bfc38u: goto label_2bfc38;
        case 0x2bfc3cu: goto label_2bfc3c;
        case 0x2bfc40u: goto label_2bfc40;
        case 0x2bfc44u: goto label_2bfc44;
        case 0x2bfc48u: goto label_2bfc48;
        case 0x2bfc4cu: goto label_2bfc4c;
        case 0x2bfc50u: goto label_2bfc50;
        case 0x2bfc54u: goto label_2bfc54;
        case 0x2bfc58u: goto label_2bfc58;
        case 0x2bfc5cu: goto label_2bfc5c;
        case 0x2bfc60u: goto label_2bfc60;
        case 0x2bfc64u: goto label_2bfc64;
        case 0x2bfc68u: goto label_2bfc68;
        case 0x2bfc6cu: goto label_2bfc6c;
        case 0x2bfc70u: goto label_2bfc70;
        case 0x2bfc74u: goto label_2bfc74;
        case 0x2bfc78u: goto label_2bfc78;
        case 0x2bfc7cu: goto label_2bfc7c;
        case 0x2bfc80u: goto label_2bfc80;
        case 0x2bfc84u: goto label_2bfc84;
        case 0x2bfc88u: goto label_2bfc88;
        case 0x2bfc8cu: goto label_2bfc8c;
        case 0x2bfc90u: goto label_2bfc90;
        case 0x2bfc94u: goto label_2bfc94;
        case 0x2bfc98u: goto label_2bfc98;
        case 0x2bfc9cu: goto label_2bfc9c;
        case 0x2bfca0u: goto label_2bfca0;
        case 0x2bfca4u: goto label_2bfca4;
        case 0x2bfca8u: goto label_2bfca8;
        case 0x2bfcacu: goto label_2bfcac;
        case 0x2bfcb0u: goto label_2bfcb0;
        case 0x2bfcb4u: goto label_2bfcb4;
        case 0x2bfcb8u: goto label_2bfcb8;
        case 0x2bfcbcu: goto label_2bfcbc;
        case 0x2bfcc0u: goto label_2bfcc0;
        case 0x2bfcc4u: goto label_2bfcc4;
        case 0x2bfcc8u: goto label_2bfcc8;
        case 0x2bfcccu: goto label_2bfccc;
        case 0x2bfcd0u: goto label_2bfcd0;
        case 0x2bfcd4u: goto label_2bfcd4;
        case 0x2bfcd8u: goto label_2bfcd8;
        case 0x2bfcdcu: goto label_2bfcdc;
        case 0x2bfce0u: goto label_2bfce0;
        case 0x2bfce4u: goto label_2bfce4;
        case 0x2bfce8u: goto label_2bfce8;
        case 0x2bfcecu: goto label_2bfcec;
        case 0x2bfcf0u: goto label_2bfcf0;
        case 0x2bfcf4u: goto label_2bfcf4;
        case 0x2bfcf8u: goto label_2bfcf8;
        case 0x2bfcfcu: goto label_2bfcfc;
        case 0x2bfd00u: goto label_2bfd00;
        case 0x2bfd04u: goto label_2bfd04;
        case 0x2bfd08u: goto label_2bfd08;
        case 0x2bfd0cu: goto label_2bfd0c;
        case 0x2bfd10u: goto label_2bfd10;
        case 0x2bfd14u: goto label_2bfd14;
        case 0x2bfd18u: goto label_2bfd18;
        case 0x2bfd1cu: goto label_2bfd1c;
        case 0x2bfd20u: goto label_2bfd20;
        case 0x2bfd24u: goto label_2bfd24;
        case 0x2bfd28u: goto label_2bfd28;
        case 0x2bfd2cu: goto label_2bfd2c;
        case 0x2bfd30u: goto label_2bfd30;
        case 0x2bfd34u: goto label_2bfd34;
        case 0x2bfd38u: goto label_2bfd38;
        case 0x2bfd3cu: goto label_2bfd3c;
        case 0x2bfd40u: goto label_2bfd40;
        case 0x2bfd44u: goto label_2bfd44;
        case 0x2bfd48u: goto label_2bfd48;
        case 0x2bfd4cu: goto label_2bfd4c;
        case 0x2bfd50u: goto label_2bfd50;
        case 0x2bfd54u: goto label_2bfd54;
        case 0x2bfd58u: goto label_2bfd58;
        case 0x2bfd5cu: goto label_2bfd5c;
        case 0x2bfd60u: goto label_2bfd60;
        case 0x2bfd64u: goto label_2bfd64;
        case 0x2bfd68u: goto label_2bfd68;
        case 0x2bfd6cu: goto label_2bfd6c;
        case 0x2bfd70u: goto label_2bfd70;
        case 0x2bfd74u: goto label_2bfd74;
        case 0x2bfd78u: goto label_2bfd78;
        case 0x2bfd7cu: goto label_2bfd7c;
        case 0x2bfd80u: goto label_2bfd80;
        case 0x2bfd84u: goto label_2bfd84;
        case 0x2bfd88u: goto label_2bfd88;
        case 0x2bfd8cu: goto label_2bfd8c;
        case 0x2bfd90u: goto label_2bfd90;
        case 0x2bfd94u: goto label_2bfd94;
        case 0x2bfd98u: goto label_2bfd98;
        case 0x2bfd9cu: goto label_2bfd9c;
        case 0x2bfda0u: goto label_2bfda0;
        case 0x2bfda4u: goto label_2bfda4;
        case 0x2bfda8u: goto label_2bfda8;
        case 0x2bfdacu: goto label_2bfdac;
        case 0x2bfdb0u: goto label_2bfdb0;
        case 0x2bfdb4u: goto label_2bfdb4;
        case 0x2bfdb8u: goto label_2bfdb8;
        case 0x2bfdbcu: goto label_2bfdbc;
        case 0x2bfdc0u: goto label_2bfdc0;
        case 0x2bfdc4u: goto label_2bfdc4;
        case 0x2bfdc8u: goto label_2bfdc8;
        case 0x2bfdccu: goto label_2bfdcc;
        case 0x2bfdd0u: goto label_2bfdd0;
        case 0x2bfdd4u: goto label_2bfdd4;
        case 0x2bfdd8u: goto label_2bfdd8;
        case 0x2bfddcu: goto label_2bfddc;
        default: return;
    }

label_2bf610:
    // 0x2bf610: 0x81f6437c  lb          $s6, 0x437C($t7)
    ctx->pc = 0x2bf610u;
    SET_GPR_S32(ctx, 22, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2bf614:
    // 0x2bf614: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf614u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf618:
    // 0x2bf618: 0x81f7437c  lb          $s7, 0x437C($t7)
    ctx->pc = 0x2bf618u;
    SET_GPR_S32(ctx, 23, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2bf61c:
    // 0x2bf61c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf61cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf620:
    // 0x2bf620: 0x4202006d  .word       0x4202006D                   # INVALID     $s0, $v0, 0x6D # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2bf620u;
//     throw std::runtime_error("Unhandled COP0 CO-OP: 0x2D at 0x2BF620 raw=0x4202006D");
 /* MITIGATED */
label_2bf624:
    // 0x2bf624: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf624u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf628:
    // 0x2bf628: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bf628u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bf62c:
    // 0x2bf62c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf62cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf630:
    // 0x2bf630: 0x120a5001  beq         $s0, $t2, . + 4 + (0x5001 << 2)
label_2bf634:
    if (ctx->pc == 0x2BF634u) {
        ctx->pc = 0x2BF634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF630u;
        // 0x2bf634: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF638u;
        goto label_2bf638;
    }
    ctx->pc = 0x2BF630u;
    {
        const bool branch_taken_0x2bf630 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 10));
        ctx->pc = 0x2BF634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF630u;
        // 0x2bf634: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf630) {
            ctx->pc = 0x2D3638u;
            return;
        }
    }
    ctx->pc = 0x2BF638u;
label_2bf638:
    // 0x2bf638: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bf638u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bf63c:
    // 0x2bf63c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf63cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf640:
    // 0x2bf640: 0x520a07fb  beql        $s0, $t2, . + 4 + (0x7FB << 2)
label_2bf644:
    if (ctx->pc == 0x2BF644u) {
        ctx->pc = 0x2BF644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF640u;
        // 0x2bf644: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF648u;
        goto label_2bf648;
    }
    ctx->pc = 0x2BF640u;
    {
        const bool branch_taken_0x2bf640 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 10));
        if (branch_taken_0x2bf640) {
            ctx->pc = 0x2BF644u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BF640u;
            // 0x2bf644: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C1630u;
            { ctx->pc = 0x2c1630; return; }
        }
    }
    ctx->pc = 0x2BF648u;
label_2bf648:
    // 0x2bf648: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bf648u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bf64c:
    // 0x2bf64c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf64cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf650:
    // 0x2bf650: 0x10081800  beq         $zero, $t0, . + 4 + (0x1800 << 2)
label_2bf654:
    if (ctx->pc == 0x2BF654u) {
        ctx->pc = 0x2BF654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF650u;
        // 0x2bf654: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF658u;
        goto label_2bf658;
    }
    ctx->pc = 0x2BF650u;
    {
        const bool branch_taken_0x2bf650 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 8));
        ctx->pc = 0x2BF654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF650u;
        // 0x2bf654: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf650) {
            ctx->pc = 0x2C5654u;
            { ctx->pc = 0x2c5654; return; }
        }
    }
    ctx->pc = 0x2BF658u;
label_2bf658:
    // 0x2bf658: 0x4202005d  .word       0x4202005D                   # INVALID     $s0, $v0, 0x5D # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2bf658u;
//     throw std::runtime_error("Unhandled COP0 CO-OP: 0x1D at 0x2BF658 raw=0x4202005D");
 /* MITIGATED */
label_2bf65c:
    // 0x2bf65c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf65cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf660:
    // 0x2bf660: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bf660u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bf664:
    // 0x2bf664: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf664u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf668:
    // 0x2bf668: 0x500b0059  beql        $zero, $t3, . + 4 + (0x59 << 2)
label_2bf66c:
    if (ctx->pc == 0x2BF66Cu) {
        ctx->pc = 0x2BF66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF668u;
        // 0x2bf66c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF670u;
        goto label_2bf670;
    }
    ctx->pc = 0x2BF668u;
    {
        const bool branch_taken_0x2bf668 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        if (branch_taken_0x2bf668) {
            ctx->pc = 0x2BF66Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BF668u;
            // 0x2bf66c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BF7D0u;
            goto label_2bf7d0;
        }
    }
    ctx->pc = 0x2BF670u;
label_2bf670:
    // 0x2bf670: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bf670u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bf674:
    // 0x2bf674: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf674u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf678:
    // 0x2bf678: 0x100d0040  beq         $zero, $t5, . + 4 + (0x40 << 2)
label_2bf67c:
    if (ctx->pc == 0x2BF67Cu) {
        ctx->pc = 0x2BF67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF678u;
        // 0x2bf67c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF680u;
        goto label_2bf680;
    }
    ctx->pc = 0x2BF678u;
    {
        const bool branch_taken_0x2bf678 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 13));
        ctx->pc = 0x2BF67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF678u;
        // 0x2bf67c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf678) {
            ctx->pc = 0x2BF77Cu;
            goto label_2bf77c;
        }
    }
    ctx->pc = 0x2BF680u;
label_2bf680:
    // 0x2bf680: 0x10060001  beq         $zero, $a2, . + 4 + (0x1 << 2)
label_2bf684:
    if (ctx->pc == 0x2BF684u) {
        ctx->pc = 0x2BF684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF680u;
        // 0x2bf684: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF688u;
        goto label_2bf688;
    }
    ctx->pc = 0x2BF680u;
    {
        const bool branch_taken_0x2bf680 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 6));
        ctx->pc = 0x2BF684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF680u;
        // 0x2bf684: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf680) {
            ctx->pc = 0x2BF688u;
            goto label_2bf688;
        }
    }
    ctx->pc = 0x2BF688u;
label_2bf688:
    // 0x2bf688: 0x10070000  beq         $zero, $a3, . + 4 + (0x0 << 2)
label_2bf68c:
    if (ctx->pc == 0x2BF68Cu) {
        ctx->pc = 0x2BF68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF688u;
        // 0x2bf68c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF690u;
        goto label_2bf690;
    }
    ctx->pc = 0x2BF688u;
    {
        const bool branch_taken_0x2bf688 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 7));
        ctx->pc = 0x2BF68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF688u;
        // 0x2bf68c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf688) {
            ctx->pc = 0x2BF68Cu;
            goto label_2bf68c;
        }
    }
    ctx->pc = 0x2BF690u;
label_2bf690:
    // 0x2bf690: 0x10081800  beq         $zero, $t0, . + 4 + (0x1800 << 2)
label_2bf694:
    if (ctx->pc == 0x2BF694u) {
        ctx->pc = 0x2BF694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF690u;
        // 0x2bf694: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF698u;
        goto label_2bf698;
    }
    ctx->pc = 0x2BF690u;
    {
        const bool branch_taken_0x2bf690 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 8));
        ctx->pc = 0x2BF694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF690u;
        // 0x2bf694: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf690) {
            ctx->pc = 0x2C5694u;
            { ctx->pc = 0x2c5694; return; }
        }
    }
    ctx->pc = 0x2BF698u;
label_2bf698:
    // 0x2bf698: 0x10091818  beq         $zero, $t1, . + 4 + (0x1818 << 2)
label_2bf69c:
    if (ctx->pc == 0x2BF69Cu) {
        ctx->pc = 0x2BF69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF698u;
        // 0x2bf69c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF6A0u;
        goto label_2bf6a0;
    }
    ctx->pc = 0x2BF698u;
    {
        const bool branch_taken_0x2bf698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 9));
        ctx->pc = 0x2BF69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF698u;
        // 0x2bf69c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf698) {
            ctx->pc = 0x2C56FCu;
            { ctx->pc = 0x2c56fc; return; }
        }
    }
    ctx->pc = 0x2BF6A0u;
label_2bf6a0:
    // 0x2bf6a0: 0x800b02b0  lb          $t3, 0x2B0($zero)
    ctx->pc = 0x2bf6a0u;
    SET_GPR_S32(ctx, 11, (int8_t)FAST_READ8(0x2B0u));
label_2bf6a4:
    // 0x2bf6a4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf6a4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf6a8:
    // 0x2bf6a8: 0x100b0000  beq         $zero, $t3, . + 4 + (0x0 << 2)
label_2bf6ac:
    if (ctx->pc == 0x2BF6ACu) {
        ctx->pc = 0x2BF6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF6A8u;
        // 0x2bf6ac: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF6B0u;
        goto label_2bf6b0;
    }
    ctx->pc = 0x2BF6A8u;
    {
        const bool branch_taken_0x2bf6a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        ctx->pc = 0x2BF6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF6A8u;
        // 0x2bf6ac: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf6a8) {
            ctx->pc = 0x2BF6ACu;
            goto label_2bf6ac;
        }
    }
    ctx->pc = 0x2BF6B0u;
label_2bf6b0:
    // 0x2bf6b0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bf6b0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bf6b4:
    // 0x2bf6b4: 0x1000703  .word       0x01000703                   # sra         $zero, $zero, 28 # 01000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bf6b4u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 28));
label_2bf6b8:
    // 0x2bf6b8: 0x81f5437c  lb          $s5, 0x437C($t7)
    ctx->pc = 0x2bf6b8u;
    SET_GPR_S32(ctx, 21, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2bf6bc:
    // 0x2bf6bc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf6bcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf6c0:
    // 0x2bf6c0: 0x81f6437c  lb          $s6, 0x437C($t7)
    ctx->pc = 0x2bf6c0u;
    SET_GPR_S32(ctx, 22, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2bf6c4:
    // 0x2bf6c4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf6c4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf6c8:
    // 0x2bf6c8: 0x81f7437c  lb          $s7, 0x437C($t7)
    ctx->pc = 0x2bf6c8u;
    SET_GPR_S32(ctx, 23, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2bf6cc:
    // 0x2bf6cc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf6ccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf6d0:
    // 0x2bf6d0: 0x42020057  .word       0x42020057                   # INVALID     $s0, $v0, 0x57 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2bf6d0u;
//     throw std::runtime_error("Unhandled COP0 CO-OP: 0x17 at 0x2BF6D0 raw=0x42020057");
 /* MITIGATED */
label_2bf6d4:
    // 0x2bf6d4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf6d4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf6d8:
    // 0x2bf6d8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bf6d8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bf6dc:
    // 0x2bf6dc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf6dcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf6e0:
    // 0x2bf6e0: 0x120a5001  beq         $s0, $t2, . + 4 + (0x5001 << 2)
label_2bf6e4:
    if (ctx->pc == 0x2BF6E4u) {
        ctx->pc = 0x2BF6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF6E0u;
        // 0x2bf6e4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF6E8u;
        goto label_2bf6e8;
    }
    ctx->pc = 0x2BF6E0u;
    {
        const bool branch_taken_0x2bf6e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 10));
        ctx->pc = 0x2BF6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF6E0u;
        // 0x2bf6e4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf6e0) {
            ctx->pc = 0x2D36E8u;
            return;
        }
    }
    ctx->pc = 0x2BF6E8u;
label_2bf6e8:
    // 0x2bf6e8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bf6e8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bf6ec:
    // 0x2bf6ec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf6ecu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf6f0:
    // 0x2bf6f0: 0x520a07fb  beql        $s0, $t2, . + 4 + (0x7FB << 2)
label_2bf6f4:
    if (ctx->pc == 0x2BF6F4u) {
        ctx->pc = 0x2BF6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF6F0u;
        // 0x2bf6f4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF6F8u;
        goto label_2bf6f8;
    }
    ctx->pc = 0x2BF6F0u;
    {
        const bool branch_taken_0x2bf6f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 10));
        if (branch_taken_0x2bf6f0) {
            ctx->pc = 0x2BF6F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BF6F0u;
            // 0x2bf6f4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C16E0u;
            { ctx->pc = 0x2c16e0; return; }
        }
    }
    ctx->pc = 0x2BF6F8u;
label_2bf6f8:
    // 0x2bf6f8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bf6f8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bf6fc:
    // 0x2bf6fc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf6fcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf700:
    // 0x2bf700: 0x10081818  beq         $zero, $t0, . + 4 + (0x1818 << 2)
label_2bf704:
    if (ctx->pc == 0x2BF704u) {
        ctx->pc = 0x2BF704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF700u;
        // 0x2bf704: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF708u;
        goto label_2bf708;
    }
    ctx->pc = 0x2BF700u;
    {
        const bool branch_taken_0x2bf700 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 8));
        ctx->pc = 0x2BF704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF700u;
        // 0x2bf704: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf700) {
            ctx->pc = 0x2C5764u;
            { ctx->pc = 0x2c5764; return; }
        }
    }
    ctx->pc = 0x2BF708u;
label_2bf708:
    // 0x2bf708: 0x42020047  .word       0x42020047                   # INVALID     $s0, $v0, 0x47 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2bf708u;
//     throw std::runtime_error("Unhandled COP0 CO-OP: 0x7 at 0x2BF708 raw=0x42020047");
 /* MITIGATED */
label_2bf70c:
    // 0x2bf70c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf70cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf710:
    // 0x2bf710: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bf710u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bf714:
    // 0x2bf714: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf714u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf718:
    // 0x2bf718: 0x500b0043  beql        $zero, $t3, . + 4 + (0x43 << 2)
label_2bf71c:
    if (ctx->pc == 0x2BF71Cu) {
        ctx->pc = 0x2BF71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF718u;
        // 0x2bf71c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF720u;
        goto label_2bf720;
    }
    ctx->pc = 0x2BF718u;
    {
        const bool branch_taken_0x2bf718 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        if (branch_taken_0x2bf718) {
            ctx->pc = 0x2BF71Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BF718u;
            // 0x2bf71c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BF828u;
            goto label_2bf828;
        }
    }
    ctx->pc = 0x2BF720u;
label_2bf720:
    // 0x2bf720: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bf720u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bf724:
    // 0x2bf724: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf724u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf728:
    // 0x2bf728: 0x100d0200  beq         $zero, $t5, . + 4 + (0x200 << 2)
label_2bf72c:
    if (ctx->pc == 0x2BF72Cu) {
        ctx->pc = 0x2BF72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF728u;
        // 0x2bf72c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF730u;
        goto label_2bf730;
    }
    ctx->pc = 0x2BF728u;
    {
        const bool branch_taken_0x2bf728 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 13));
        ctx->pc = 0x2BF72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF728u;
        // 0x2bf72c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf728) {
            ctx->pc = 0x2BFF2Cu;
            { ctx->pc = 0x2bff2c; return; }
        }
    }
    ctx->pc = 0x2BF730u;
label_2bf730:
    // 0x2bf730: 0x10060008  beq         $zero, $a2, . + 4 + (0x8 << 2)
label_2bf734:
    if (ctx->pc == 0x2BF734u) {
        ctx->pc = 0x2BF734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF730u;
        // 0x2bf734: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF738u;
        goto label_2bf738;
    }
    ctx->pc = 0x2BF730u;
    {
        const bool branch_taken_0x2bf730 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 6));
        ctx->pc = 0x2BF734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF730u;
        // 0x2bf734: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf730) {
            ctx->pc = 0x2BF754u;
            goto label_2bf754;
        }
    }
    ctx->pc = 0x2BF738u;
label_2bf738:
    // 0x2bf738: 0x10070001  beq         $zero, $a3, . + 4 + (0x1 << 2)
label_2bf73c:
    if (ctx->pc == 0x2BF73Cu) {
        ctx->pc = 0x2BF73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF738u;
        // 0x2bf73c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF740u;
        goto label_2bf740;
    }
    ctx->pc = 0x2BF738u;
    {
        const bool branch_taken_0x2bf738 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 7));
        ctx->pc = 0x2BF73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF738u;
        // 0x2bf73c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf738) {
            ctx->pc = 0x2BF740u;
            goto label_2bf740;
        }
    }
    ctx->pc = 0x2BF740u;
label_2bf740:
    // 0x2bf740: 0x10081818  beq         $zero, $t0, . + 4 + (0x1818 << 2)
label_2bf744:
    if (ctx->pc == 0x2BF744u) {
        ctx->pc = 0x2BF744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF740u;
        // 0x2bf744: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF748u;
        goto label_2bf748;
    }
    ctx->pc = 0x2BF740u;
    {
        const bool branch_taken_0x2bf740 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 8));
        ctx->pc = 0x2BF744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF740u;
        // 0x2bf744: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf740) {
            ctx->pc = 0x2C57A4u;
            { ctx->pc = 0x2c57a4; return; }
        }
    }
    ctx->pc = 0x2BF748u;
label_2bf748:
    // 0x2bf748: 0x10091800  beq         $zero, $t1, . + 4 + (0x1800 << 2)
label_2bf74c:
    if (ctx->pc == 0x2BF74Cu) {
        ctx->pc = 0x2BF74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF748u;
        // 0x2bf74c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF750u;
        goto label_2bf750;
    }
    ctx->pc = 0x2BF748u;
    {
        const bool branch_taken_0x2bf748 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 9));
        ctx->pc = 0x2BF74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF748u;
        // 0x2bf74c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf748) {
            ctx->pc = 0x2C574Cu;
            { ctx->pc = 0x2c574c; return; }
        }
    }
    ctx->pc = 0x2BF750u;
label_2bf750:
    // 0x2bf750: 0x800b02b0  lb          $t3, 0x2B0($zero)
    ctx->pc = 0x2bf750u;
    SET_GPR_S32(ctx, 11, (int8_t)FAST_READ8(0x2B0u));
label_2bf754:
    // 0x2bf754: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf754u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf758:
    // 0x2bf758: 0x100b0000  beq         $zero, $t3, . + 4 + (0x0 << 2)
label_2bf75c:
    if (ctx->pc == 0x2BF75Cu) {
        ctx->pc = 0x2BF75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF758u;
        // 0x2bf75c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF760u;
        goto label_2bf760;
    }
    ctx->pc = 0x2BF758u;
    {
        const bool branch_taken_0x2bf758 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        ctx->pc = 0x2BF75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF758u;
        // 0x2bf75c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf758) {
            ctx->pc = 0x2BF75Cu;
            goto label_2bf75c;
        }
    }
    ctx->pc = 0x2BF760u;
label_2bf760:
    // 0x2bf760: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bf760u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bf764:
    // 0x2bf764: 0x1000707  .word       0x01000707                   # srav        $zero, $zero, $t0 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bf764u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 8) & 0x1F));
label_2bf768:
    // 0x2bf768: 0x81f5437c  lb          $s5, 0x437C($t7)
    ctx->pc = 0x2bf768u;
    SET_GPR_S32(ctx, 21, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2bf76c:
    // 0x2bf76c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf76cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf770:
    // 0x2bf770: 0x81f6437c  lb          $s6, 0x437C($t7)
    ctx->pc = 0x2bf770u;
    SET_GPR_S32(ctx, 22, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2bf774:
    // 0x2bf774: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf774u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf778:
    // 0x2bf778: 0x81f7437c  lb          $s7, 0x437C($t7)
    ctx->pc = 0x2bf778u;
    SET_GPR_S32(ctx, 23, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2bf77c:
    // 0x2bf77c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf77cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf780:
    // 0x2bf780: 0x42020041  .word       0x42020041                   # tlbr # 00020040 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2bf780u;
    runtime->handleTLBR(rdram, ctx);
label_2bf784:
    // 0x2bf784: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf784u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf788:
    // 0x2bf788: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bf788u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bf78c:
    // 0x2bf78c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf78cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf790:
    // 0x2bf790: 0x120a5001  beq         $s0, $t2, . + 4 + (0x5001 << 2)
label_2bf794:
    if (ctx->pc == 0x2BF794u) {
        ctx->pc = 0x2BF794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF790u;
        // 0x2bf794: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF798u;
        goto label_2bf798;
    }
    ctx->pc = 0x2BF790u;
    {
        const bool branch_taken_0x2bf790 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 10));
        ctx->pc = 0x2BF794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF790u;
        // 0x2bf794: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf790) {
            ctx->pc = 0x2D3798u;
            return;
        }
    }
    ctx->pc = 0x2BF798u;
label_2bf798:
    // 0x2bf798: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bf798u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bf79c:
    // 0x2bf79c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf79cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf7a0:
    // 0x2bf7a0: 0x520a07fb  beql        $s0, $t2, . + 4 + (0x7FB << 2)
label_2bf7a4:
    if (ctx->pc == 0x2BF7A4u) {
        ctx->pc = 0x2BF7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF7A0u;
        // 0x2bf7a4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF7A8u;
        goto label_2bf7a8;
    }
    ctx->pc = 0x2BF7A0u;
    {
        const bool branch_taken_0x2bf7a0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 10));
        if (branch_taken_0x2bf7a0) {
            ctx->pc = 0x2BF7A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BF7A0u;
            // 0x2bf7a4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C1790u;
            { ctx->pc = 0x2c1790; return; }
        }
    }
    ctx->pc = 0x2BF7A8u;
label_2bf7a8:
    // 0x2bf7a8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bf7a8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bf7ac:
    // 0x2bf7ac: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf7acu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf7b0:
    // 0x2bf7b0: 0x10081800  beq         $zero, $t0, . + 4 + (0x1800 << 2)
label_2bf7b4:
    if (ctx->pc == 0x2BF7B4u) {
        ctx->pc = 0x2BF7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF7B0u;
        // 0x2bf7b4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF7B8u;
        goto label_2bf7b8;
    }
    ctx->pc = 0x2BF7B0u;
    {
        const bool branch_taken_0x2bf7b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 8));
        ctx->pc = 0x2BF7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF7B0u;
        // 0x2bf7b4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf7b0) {
            ctx->pc = 0x2C57B4u;
            { ctx->pc = 0x2c57b4; return; }
        }
    }
    ctx->pc = 0x2BF7B8u;
label_2bf7b8:
    // 0x2bf7b8: 0x42020031  .word       0x42020031                   # INVALID     $s0, $v0, 0x31 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2bf7b8u;
//     throw std::runtime_error("Unhandled COP0 CO-OP: 0x31 at 0x2BF7B8 raw=0x42020031");
 /* MITIGATED */
label_2bf7bc:
    // 0x2bf7bc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf7bcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf7c0:
    // 0x2bf7c0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bf7c0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bf7c4:
    // 0x2bf7c4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf7c4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf7c8:
    // 0x2bf7c8: 0x500b002d  beql        $zero, $t3, . + 4 + (0x2D << 2)
label_2bf7cc:
    if (ctx->pc == 0x2BF7CCu) {
        ctx->pc = 0x2BF7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF7C8u;
        // 0x2bf7cc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF7D0u;
        goto label_2bf7d0;
    }
    ctx->pc = 0x2BF7C8u;
    {
        const bool branch_taken_0x2bf7c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        if (branch_taken_0x2bf7c8) {
            ctx->pc = 0x2BF7CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BF7C8u;
            // 0x2bf7cc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BF880u;
            goto label_2bf880;
        }
    }
    ctx->pc = 0x2BF7D0u;
label_2bf7d0:
    // 0x2bf7d0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bf7d0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bf7d4:
    // 0x2bf7d4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf7d4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf7d8:
    // 0x2bf7d8: 0x100d0100  beq         $zero, $t5, . + 4 + (0x100 << 2)
label_2bf7dc:
    if (ctx->pc == 0x2BF7DCu) {
        ctx->pc = 0x2BF7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF7D8u;
        // 0x2bf7dc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF7E0u;
        goto label_2bf7e0;
    }
    ctx->pc = 0x2BF7D8u;
    {
        const bool branch_taken_0x2bf7d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 13));
        ctx->pc = 0x2BF7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF7D8u;
        // 0x2bf7dc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf7d8) {
            ctx->pc = 0x2BFBDCu;
            goto label_2bfbdc;
        }
    }
    ctx->pc = 0x2BF7E0u;
label_2bf7e0:
    // 0x2bf7e0: 0x10060004  beq         $zero, $a2, . + 4 + (0x4 << 2)
label_2bf7e4:
    if (ctx->pc == 0x2BF7E4u) {
        ctx->pc = 0x2BF7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF7E0u;
        // 0x2bf7e4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF7E8u;
        goto label_2bf7e8;
    }
    ctx->pc = 0x2BF7E0u;
    {
        const bool branch_taken_0x2bf7e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 6));
        ctx->pc = 0x2BF7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF7E0u;
        // 0x2bf7e4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf7e0) {
            ctx->pc = 0x2BF7F4u;
            goto label_2bf7f4;
        }
    }
    ctx->pc = 0x2BF7E8u;
label_2bf7e8:
    // 0x2bf7e8: 0x10070001  beq         $zero, $a3, . + 4 + (0x1 << 2)
label_2bf7ec:
    if (ctx->pc == 0x2BF7ECu) {
        ctx->pc = 0x2BF7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF7E8u;
        // 0x2bf7ec: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF7F0u;
        goto label_2bf7f0;
    }
    ctx->pc = 0x2BF7E8u;
    {
        const bool branch_taken_0x2bf7e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 7));
        ctx->pc = 0x2BF7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF7E8u;
        // 0x2bf7ec: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf7e8) {
            ctx->pc = 0x2BF7F0u;
            goto label_2bf7f0;
        }
    }
    ctx->pc = 0x2BF7F0u;
label_2bf7f0:
    // 0x2bf7f0: 0x10081800  beq         $zero, $t0, . + 4 + (0x1800 << 2)
label_2bf7f4:
    if (ctx->pc == 0x2BF7F4u) {
        ctx->pc = 0x2BF7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF7F0u;
        // 0x2bf7f4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF7F8u;
        goto label_2bf7f8;
    }
    ctx->pc = 0x2BF7F0u;
    {
        const bool branch_taken_0x2bf7f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 8));
        ctx->pc = 0x2BF7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF7F0u;
        // 0x2bf7f4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf7f0) {
            ctx->pc = 0x2C57F4u;
            { ctx->pc = 0x2c57f4; return; }
        }
    }
    ctx->pc = 0x2BF7F8u;
label_2bf7f8:
    // 0x2bf7f8: 0x10091818  beq         $zero, $t1, . + 4 + (0x1818 << 2)
label_2bf7fc:
    if (ctx->pc == 0x2BF7FCu) {
        ctx->pc = 0x2BF7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF7F8u;
        // 0x2bf7fc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF800u;
        goto label_2bf800;
    }
    ctx->pc = 0x2BF7F8u;
    {
        const bool branch_taken_0x2bf7f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 9));
        ctx->pc = 0x2BF7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF7F8u;
        // 0x2bf7fc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf7f8) {
            ctx->pc = 0x2C585Cu;
            { ctx->pc = 0x2c585c; return; }
        }
    }
    ctx->pc = 0x2BF800u;
label_2bf800:
    // 0x2bf800: 0x800b02b0  lb          $t3, 0x2B0($zero)
    ctx->pc = 0x2bf800u;
    SET_GPR_S32(ctx, 11, (int8_t)FAST_READ8(0x2B0u));
label_2bf804:
    // 0x2bf804: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf804u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf808:
    // 0x2bf808: 0x100b0000  beq         $zero, $t3, . + 4 + (0x0 << 2)
label_2bf80c:
    if (ctx->pc == 0x2BF80Cu) {
        ctx->pc = 0x2BF80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF808u;
        // 0x2bf80c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF810u;
        goto label_2bf810;
    }
    ctx->pc = 0x2BF808u;
    {
        const bool branch_taken_0x2bf808 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        ctx->pc = 0x2BF80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF808u;
        // 0x2bf80c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf808) {
            ctx->pc = 0x2BF80Cu;
            goto label_2bf80c;
        }
    }
    ctx->pc = 0x2BF810u;
label_2bf810:
    // 0x2bf810: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bf810u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bf814:
    // 0x2bf814: 0x1000703  .word       0x01000703                   # sra         $zero, $zero, 28 # 01000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bf814u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 28));
label_2bf818:
    // 0x2bf818: 0x81f5437c  lb          $s5, 0x437C($t7)
    ctx->pc = 0x2bf818u;
    SET_GPR_S32(ctx, 21, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2bf81c:
    // 0x2bf81c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf81cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf820:
    // 0x2bf820: 0x81f6437c  lb          $s6, 0x437C($t7)
    ctx->pc = 0x2bf820u;
    SET_GPR_S32(ctx, 22, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2bf824:
    // 0x2bf824: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf824u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf828:
    // 0x2bf828: 0x81f7437c  lb          $s7, 0x437C($t7)
    ctx->pc = 0x2bf828u;
    SET_GPR_S32(ctx, 23, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2bf82c:
    // 0x2bf82c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf82cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf830:
    // 0x2bf830: 0x4202002b  .word       0x4202002B                   # INVALID     $s0, $v0, 0x2B # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2bf830u;
//     throw std::runtime_error("Unhandled COP0 CO-OP: 0x2B at 0x2BF830 raw=0x4202002B");
 /* MITIGATED */
label_2bf834:
    // 0x2bf834: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf834u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf838:
    // 0x2bf838: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bf838u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bf83c:
    // 0x2bf83c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf83cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf840:
    // 0x2bf840: 0x120a5001  beq         $s0, $t2, . + 4 + (0x5001 << 2)
label_2bf844:
    if (ctx->pc == 0x2BF844u) {
        ctx->pc = 0x2BF844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF840u;
        // 0x2bf844: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF848u;
        goto label_2bf848;
    }
    ctx->pc = 0x2BF840u;
    {
        const bool branch_taken_0x2bf840 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 10));
        ctx->pc = 0x2BF844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF840u;
        // 0x2bf844: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf840) {
            ctx->pc = 0x2D3848u;
            return;
        }
    }
    ctx->pc = 0x2BF848u;
label_2bf848:
    // 0x2bf848: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bf848u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bf84c:
    // 0x2bf84c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf84cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf850:
    // 0x2bf850: 0x520a07fb  beql        $s0, $t2, . + 4 + (0x7FB << 2)
label_2bf854:
    if (ctx->pc == 0x2BF854u) {
        ctx->pc = 0x2BF854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF850u;
        // 0x2bf854: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF858u;
        goto label_2bf858;
    }
    ctx->pc = 0x2BF850u;
    {
        const bool branch_taken_0x2bf850 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 10));
        if (branch_taken_0x2bf850) {
            ctx->pc = 0x2BF854u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BF850u;
            // 0x2bf854: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C1840u;
            { ctx->pc = 0x2c1840; return; }
        }
    }
    ctx->pc = 0x2BF858u;
label_2bf858:
    // 0x2bf858: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bf858u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bf85c:
    // 0x2bf85c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf85cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf860:
    // 0x2bf860: 0x10081818  beq         $zero, $t0, . + 4 + (0x1818 << 2)
label_2bf864:
    if (ctx->pc == 0x2BF864u) {
        ctx->pc = 0x2BF864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF860u;
        // 0x2bf864: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF868u;
        goto label_2bf868;
    }
    ctx->pc = 0x2BF860u;
    {
        const bool branch_taken_0x2bf860 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 8));
        ctx->pc = 0x2BF864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF860u;
        // 0x2bf864: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf860) {
            ctx->pc = 0x2C58C4u;
            { ctx->pc = 0x2c58c4; return; }
        }
    }
    ctx->pc = 0x2BF868u;
label_2bf868:
    // 0x2bf868: 0x4202001b  .word       0x4202001B                   # INVALID     $s0, $v0, 0x1B # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2bf868u;
//     throw std::runtime_error("Unhandled COP0 CO-OP: 0x1B at 0x2BF868 raw=0x4202001B");
 /* MITIGATED */
label_2bf86c:
    // 0x2bf86c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf86cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf870:
    // 0x2bf870: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bf870u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bf874:
    // 0x2bf874: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf874u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf878:
    // 0x2bf878: 0x500b0017  beql        $zero, $t3, . + 4 + (0x17 << 2)
label_2bf87c:
    if (ctx->pc == 0x2BF87Cu) {
        ctx->pc = 0x2BF87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF878u;
        // 0x2bf87c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF880u;
        goto label_2bf880;
    }
    ctx->pc = 0x2BF878u;
    {
        const bool branch_taken_0x2bf878 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        if (branch_taken_0x2bf878) {
            ctx->pc = 0x2BF87Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BF878u;
            // 0x2bf87c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BF8D8u;
            goto label_2bf8d8;
        }
    }
    ctx->pc = 0x2BF880u;
label_2bf880:
    // 0x2bf880: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bf880u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bf884:
    // 0x2bf884: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf884u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf888:
    // 0x2bf888: 0x800b02b0  lb          $t3, 0x2B0($zero)
    ctx->pc = 0x2bf888u;
    SET_GPR_S32(ctx, 11, (int8_t)FAST_READ8(0x2B0u));
label_2bf88c:
    // 0x2bf88c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf88cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf890:
    // 0x2bf890: 0x100b0000  beq         $zero, $t3, . + 4 + (0x0 << 2)
label_2bf894:
    if (ctx->pc == 0x2BF894u) {
        ctx->pc = 0x2BF894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF890u;
        // 0x2bf894: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF898u;
        goto label_2bf898;
    }
    ctx->pc = 0x2BF890u;
    {
        const bool branch_taken_0x2bf890 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        ctx->pc = 0x2BF894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF890u;
        // 0x2bf894: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf890) {
            ctx->pc = 0x2BF894u;
            goto label_2bf894;
        }
    }
    ctx->pc = 0x2BF898u;
label_2bf898:
    // 0x2bf898: 0x10010066  beq         $zero, $at, . + 4 + (0x66 << 2)
label_2bf89c:
    if (ctx->pc == 0x2BF89Cu) {
        ctx->pc = 0x2BF89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF898u;
        // 0x2bf89c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF8A0u;
        goto label_2bf8a0;
    }
    ctx->pc = 0x2BF898u;
    {
        const bool branch_taken_0x2bf898 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 1));
        ctx->pc = 0x2BF89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF898u;
        // 0x2bf89c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf898) {
            ctx->pc = 0x2BFA34u;
            goto label_2bfa34;
        }
    }
    ctx->pc = 0x2BF8A0u;
label_2bf8a0:
    // 0x2bf8a0: 0x1fa0005  .word       0x01FA0005                   # INVALID     $t7, $k0, 0x5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bf8a0u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x2BF8A0 raw=0x01FA0005");
 /* MITIGATED */
label_2bf8a4:
    // 0x2bf8a4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf8a4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf8a8:
    // 0x2bf8a8: 0x52030811  beql        $s0, $v1, . + 4 + (0x811 << 2)
label_2bf8ac:
    if (ctx->pc == 0x2BF8ACu) {
        ctx->pc = 0x2BF8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF8A8u;
        // 0x2bf8ac: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF8B0u;
        goto label_2bf8b0;
    }
    ctx->pc = 0x2BF8A8u;
    {
        const bool branch_taken_0x2bf8a8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x2bf8a8) {
            ctx->pc = 0x2BF8ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BF8A8u;
            // 0x2bf8ac: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C18F0u;
            { ctx->pc = 0x2c18f0; return; }
        }
    }
    ctx->pc = 0x2BF8B0u;
label_2bf8b0:
    // 0x2bf8b0: 0x10021830  beq         $zero, $v0, . + 4 + (0x1830 << 2)
label_2bf8b4:
    if (ctx->pc == 0x2BF8B4u) {
        ctx->pc = 0x2BF8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF8B0u;
        // 0x2bf8b4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF8B8u;
        goto label_2bf8b8;
    }
    ctx->pc = 0x2BF8B0u;
    {
        const bool branch_taken_0x2bf8b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BF8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF8B0u;
        // 0x2bf8b4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf8b0) {
            ctx->pc = 0x2C5974u;
            { ctx->pc = 0x2c5974; return; }
        }
    }
    ctx->pc = 0x2BF8B8u;
label_2bf8b8:
    // 0x2bf8b8: 0x12015007  beq         $s0, $at, . + 4 + (0x5007 << 2)
label_2bf8bc:
    if (ctx->pc == 0x2BF8BCu) {
        ctx->pc = 0x2BF8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF8B8u;
        // 0x2bf8bc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF8C0u;
        goto label_2bf8c0;
    }
    ctx->pc = 0x2BF8B8u;
    {
        const bool branch_taken_0x2bf8b8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 1));
        ctx->pc = 0x2BF8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF8B8u;
        // 0x2bf8bc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf8b8) {
            ctx->pc = 0x2D38D8u;
            return;
        }
    }
    ctx->pc = 0x2BF8C0u;
label_2bf8c0:
    // 0x2bf8c0: 0x3e2d000  .word       0x03E2D000                   # sll         $k0, $v0, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bf8c0u;
    SET_GPR_S32(ctx, 26, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
label_2bf8c4:
    // 0x2bf8c4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf8c4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf8c8:
    // 0x2bf8c8: 0x5a00080d  blezl       $s0, . + 4 + (0x80D << 2)
label_2bf8cc:
    if (ctx->pc == 0x2BF8CCu) {
        ctx->pc = 0x2BF8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF8C8u;
        // 0x2bf8cc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF8D0u;
        goto label_2bf8d0;
    }
    ctx->pc = 0x2BF8C8u;
    {
        const bool branch_taken_0x2bf8c8 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x2bf8c8) {
            ctx->pc = 0x2BF8CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BF8C8u;
            // 0x2bf8cc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C1900u;
            { ctx->pc = 0x2c1900; return; }
        }
    }
    ctx->pc = 0x2BF8D0u;
label_2bf8d0:
    // 0x2bf8d0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bf8d0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bf8d4:
    // 0x2bf8d4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf8d4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf8d8:
    // 0x2bf8d8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bf8d8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bf8dc:
    // 0x2bf8dc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf8dcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf8e0:
    // 0x2bf8e0: 0x800016fc  lb          $zero, 0x16FC($zero)
    ctx->pc = 0x2bf8e0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x16FCu));
label_2bf8e4:
    // 0x2bf8e4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf8e4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf8e8:
    // 0x2bf8e8: 0x1fa0005  .word       0x01FA0005                   # INVALID     $t7, $k0, 0x5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bf8e8u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x2BF8E8 raw=0x01FA0005");
 /* MITIGATED */
label_2bf8ec:
    // 0x2bf8ec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf8ecu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf8f0:
    // 0x2bf8f0: 0x10021001  beq         $zero, $v0, . + 4 + (0x1001 << 2)
label_2bf8f4:
    if (ctx->pc == 0x2BF8F4u) {
        ctx->pc = 0x2BF8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF8F0u;
        // 0x2bf8f4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF8F8u;
        goto label_2bf8f8;
    }
    ctx->pc = 0x2BF8F0u;
    {
        const bool branch_taken_0x2bf8f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BF8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF8F0u;
        // 0x2bf8f4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf8f0) {
            ctx->pc = 0x2C38F8u;
            { ctx->pc = 0x2c38f8; return; }
        }
    }
    ctx->pc = 0x2BF8F8u;
label_2bf8f8:
    // 0x2bf8f8: 0x10081818  beq         $zero, $t0, . + 4 + (0x1818 << 2)
label_2bf8fc:
    if (ctx->pc == 0x2BF8FCu) {
        ctx->pc = 0x2BF8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF8F8u;
        // 0x2bf8fc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF900u;
        goto label_2bf900;
    }
    ctx->pc = 0x2BF8F8u;
    {
        const bool branch_taken_0x2bf8f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 8));
        ctx->pc = 0x2BF8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF8F8u;
        // 0x2bf8fc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf8f8) {
            ctx->pc = 0x2C595Cu;
            { ctx->pc = 0x2c595c; return; }
        }
    }
    ctx->pc = 0x2BF900u;
label_2bf900:
    // 0x2bf900: 0x11eb57ff  beq         $t7, $t3, . + 4 + (0x57FF << 2)
label_2bf904:
    if (ctx->pc == 0x2BF904u) {
        ctx->pc = 0x2BF904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF900u;
        // 0x2bf904: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF908u;
        goto label_2bf908;
    }
    ctx->pc = 0x2BF900u;
    {
        const bool branch_taken_0x2bf900 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 11));
        ctx->pc = 0x2BF904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF900u;
        // 0x2bf904: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf900) {
            ctx->pc = 0x2D5900u;
            return;
        }
    }
    ctx->pc = 0x2BF908u;
label_2bf908:
    // 0x2bf908: 0x100b5801  beq         $zero, $t3, . + 4 + (0x5801 << 2)
label_2bf90c:
    if (ctx->pc == 0x2BF90Cu) {
        ctx->pc = 0x2BF90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF908u;
        // 0x2bf90c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF910u;
        goto label_2bf910;
    }
    ctx->pc = 0x2BF908u;
    {
        const bool branch_taken_0x2bf908 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        ctx->pc = 0x2BF90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF908u;
        // 0x2bf90c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf908) {
            ctx->pc = 0x2D5910u;
            return;
        }
    }
    ctx->pc = 0x2BF910u;
label_2bf910:
    // 0x2bf910: 0x3e2d000  .word       0x03E2D000                   # sll         $k0, $v0, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bf910u;
    SET_GPR_S32(ctx, 26, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
label_2bf914:
    // 0x2bf914: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf914u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf918:
    // 0x2bf918: 0xb0b1000  j           func_C2C4000
label_2bf91c:
    if (ctx->pc == 0x2BF91Cu) {
        ctx->pc = 0x2BF91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF918u;
        // 0x2bf91c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF920u;
        goto label_2bf920;
    }
    ctx->pc = 0x2BF918u;
    ctx->pc = 0x2BF91Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF918u;
    // 0x2bf91c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0xC2C4000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xC2C4000u, 0x2BF918u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2BF920u;
label_2bf920:
    // 0x2bf920: 0x42010061  .word       0x42010061                   # INVALID     $s0, $at, 0x61 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2bf920u;
//     throw std::runtime_error("Unhandled COP0 CO-OP: 0x21 at 0x2BF920 raw=0x42010061");
 /* MITIGATED */
label_2bf924:
    // 0x2bf924: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf924u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf928:
    // 0x2bf928: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bf928u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bf92c:
    // 0x2bf92c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf92cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf930:
    // 0x2bf930: 0x800016fc  lb          $zero, 0x16FC($zero)
    ctx->pc = 0x2bf930u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x16FCu));
label_2bf934:
    // 0x2bf934: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf934u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf938:
    // 0x2bf938: 0x48007800  .word       0x48007800                   # INVALID     $zero, $zero, 0x7800 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x2bf938u;
//     throw std::runtime_error("Unhandled COP2 format: 0x0 at 0x2BF938 raw=0x48007800");
 /* MITIGATED */
label_2bf93c:
    // 0x2bf93c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf93cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf940:
    // 0x2bf940: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bf940u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bf944:
    // 0x2bf944: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf944u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf948:
    // 0x2bf948: 0x1f54000  .word       0x01F54000                   # sll         $t0, $s5, 0 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bf948u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 21), 0));
label_2bf94c:
    // 0x2bf94c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf94cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf950:
    // 0x2bf950: 0x1f64001  .word       0x01F64001                   # INVALID     $t7, $s6, 0x4001 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bf950u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2BF950 raw=0x01F64001");
 /* MITIGATED */
label_2bf954:
    // 0x2bf954: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf954u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf958:
    // 0x2bf958: 0x1f74002  .word       0x01F74002                   # srl         $t0, $s7, 0 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bf958u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 23), 0));
label_2bf95c:
    // 0x2bf95c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf95cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf960:
    // 0x2bf960: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bf960u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bf964:
    // 0x2bf964: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf964u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf968:
    // 0x2bf968: 0x81e9ab7d  lb          $t1, -0x5483($t7)
    ctx->pc = 0x2bf968u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294945661)));
label_2bf96c:
    // 0x2bf96c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf96cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf970:
    // 0x2bf970: 0x81e9b37d  lb          $t1, -0x4C83($t7)
    ctx->pc = 0x2bf970u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294947709)));
label_2bf974:
    // 0x2bf974: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf974u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf978:
    // 0x2bf978: 0x81e9bb7d  lb          $t1, -0x4483($t7)
    ctx->pc = 0x2bf978u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294949757)));
label_2bf97c:
    // 0x2bf97c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf97cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf980:
    // 0x2bf980: 0x48001000  .word       0x48001000                   # INVALID     $zero, $zero, 0x1000 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x2bf980u;
//     throw std::runtime_error("Unhandled COP2 format: 0x0 at 0x2BF980 raw=0x48001000");
 /* MITIGATED */
label_2bf984:
    // 0x2bf984: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf984u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf988:
    // 0x2bf988: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bf988u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bf98c:
    // 0x2bf98c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf98cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf990:
    // 0x2bf990: 0x81f5437c  lb          $s5, 0x437C($t7)
    ctx->pc = 0x2bf990u;
    SET_GPR_S32(ctx, 21, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2bf994:
    // 0x2bf994: 0x1f5fc68  .word       0x01F5FC68                   # mfsa        $ra # 01F50440 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2bf994u;
    SET_GPR_U32(ctx, 31, ctx->sa);
label_2bf998:
    // 0x2bf998: 0x81f6437c  lb          $s6, 0x437C($t7)
    ctx->pc = 0x2bf998u;
    SET_GPR_S32(ctx, 22, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2bf99c:
    // 0x2bf99c: 0x1f6fca8  .word       0x01F6FCA8                   # mfsa        $ra # 01F60480 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2bf99cu;
    SET_GPR_U32(ctx, 31, ctx->sa);
label_2bf9a0:
    // 0x2bf9a0: 0x81f7437c  lb          $s7, 0x437C($t7)
    ctx->pc = 0x2bf9a0u;
    SET_GPR_S32(ctx, 23, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2bf9a4:
    // 0x2bf9a4: 0x1f7fce8  .word       0x01F7FCE8                   # mfsa        $ra # 01F704C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2bf9a4u;
    SET_GPR_U32(ctx, 31, ctx->sa);
label_2bf9a8:
    // 0x2bf9a8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bf9a8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bf9ac:
    // 0x2bf9ac: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf9acu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf9b0:
    // 0x2bf9b0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bf9b0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bf9b4:
    // 0x2bf9b4: 0x1d189ff  .word       0x01D189FF                   # dsra32      $s1, $s1, 7 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bf9b4u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 7));
label_2bf9b8:
    // 0x2bf9b8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bf9b8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bf9bc:
    // 0x2bf9bc: 0x1d5a9ff  .word       0x01D5A9FF                   # dsra32      $s5, $s5, 7 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bf9bcu;
    SET_GPR_S64(ctx, 21, GPR_S64(ctx, 21) >> (32 + 7));
label_2bf9c0:
    // 0x2bf9c0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bf9c0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bf9c4:
    // 0x2bf9c4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf9c4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf9c8:
    // 0x2bf9c8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bf9c8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bf9cc:
    // 0x2bf9cc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf9ccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf9d0:
    // 0x2bf9d0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bf9d0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bf9d4:
    // 0x2bf9d4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf9d4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf9d8:
    // 0x2bf9d8: 0x38010000  xori        $at, $zero, 0x0
    ctx->pc = 0x2bf9d8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) ^ (uint64_t)(uint16_t)0);
label_2bf9dc:
    // 0x2bf9dc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf9dcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf9e0:
    // 0x2bf9e0: 0x800d0934  lb          $t5, 0x934($zero)
    ctx->pc = 0x2bf9e0u;
    SET_GPR_S32(ctx, 13, (int8_t)FAST_READ8(0x934u));
label_2bf9e4:
    // 0x2bf9e4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf9e4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf9e8:
    // 0x2bf9e8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bf9e8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bf9ec:
    // 0x2bf9ec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf9ecu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf9f0:
    // 0x2bf9f0: 0x5004000f  beql        $zero, $a0, . + 4 + (0xF << 2)
label_2bf9f4:
    if (ctx->pc == 0x2BF9F4u) {
        ctx->pc = 0x2BF9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF9F0u;
        // 0x2bf9f4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF9F8u;
        goto label_2bf9f8;
    }
    ctx->pc = 0x2BF9F0u;
    {
        const bool branch_taken_0x2bf9f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 4));
        if (branch_taken_0x2bf9f0) {
            ctx->pc = 0x2BF9F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BF9F0u;
            // 0x2bf9f4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BFA30u;
            goto label_2bfa30;
        }
    }
    ctx->pc = 0x2BF9F8u;
label_2bf9f8:
    // 0x2bf9f8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bf9f8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bf9fc:
    // 0x2bf9fc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf9fcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bfa00:
    // 0x2bfa00: 0x80060934  lb          $a2, 0x934($zero)
    ctx->pc = 0x2bfa00u;
    SET_GPR_S32(ctx, 6, (int8_t)FAST_READ8(0x934u));
label_2bfa04:
    // 0x2bfa04: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bfa04u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bfa08:
    // 0x2bfa08: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bfa08u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bfa0c:
    // 0x2bfa0c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bfa0cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bfa10:
    // 0x2bfa10: 0x50040003  beql        $zero, $a0, . + 4 + (0x3 << 2)
label_2bfa14:
    if (ctx->pc == 0x2BFA14u) {
        ctx->pc = 0x2BFA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFA10u;
        // 0x2bfa14: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BFA18u;
        goto label_2bfa18;
    }
    ctx->pc = 0x2BFA10u;
    {
        const bool branch_taken_0x2bfa10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 4));
        if (branch_taken_0x2bfa10) {
            ctx->pc = 0x2BFA14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BFA10u;
            // 0x2bfa14: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BFA20u;
            goto label_2bfa20;
        }
    }
    ctx->pc = 0x2BFA18u;
label_2bfa18:
    // 0x2bfa18: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bfa18u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bfa1c:
    // 0x2bfa1c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bfa1cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bfa20:
    // 0x2bfa20: 0x4000001c  .word       0x4000001C                   # mfc0        $zero, Index # 0000001C <InstrIdType: R5900_COP0>
    ctx->pc = 0x2bfa20u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_2bfa24:
    // 0x2bfa24: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bfa24u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bfa28:
    // 0x2bfa28: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bfa28u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bfa2c:
    // 0x2bfa2c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bfa2cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bfa30:
    // 0x2bfa30: 0x4201001c  .word       0x4201001C                   # INVALID     $s0, $at, 0x1C # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2bfa30u;
//     throw std::runtime_error("Unhandled COP0 CO-OP: 0x1C at 0x2BFA30 raw=0x4201001C");
 /* MITIGATED */
label_2bfa34:
    // 0x2bfa34: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bfa34u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bfa38:
    // 0x2bfa38: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bfa38u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bfa3c:
    // 0x2bfa3c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bfa3cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bfa40:
    // 0x2bfa40: 0x81e9cb7d  lb          $t1, -0x3483($t7)
    ctx->pc = 0x2bfa40u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294953853)));
label_2bfa44:
    // 0x2bfa44: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bfa44u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bfa48:
    // 0x2bfa48: 0x81e9d37d  lb          $t1, -0x2C83($t7)
    ctx->pc = 0x2bfa48u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294955901)));
label_2bfa4c:
    // 0x2bfa4c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bfa4cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bfa50:
    // 0x2bfa50: 0x81e9db7d  lb          $t1, -0x2483($t7)
    ctx->pc = 0x2bfa50u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294957949)));
label_2bfa54:
    // 0x2bfa54: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bfa54u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bfa58:
    // 0x2bfa58: 0x100b5801  beq         $zero, $t3, . + 4 + (0x5801 << 2)
label_2bfa5c:
    if (ctx->pc == 0x2BFA5Cu) {
        ctx->pc = 0x2BFA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFA58u;
        // 0x2bfa5c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BFA60u;
        goto label_2bfa60;
    }
    ctx->pc = 0x2BFA58u;
    {
        const bool branch_taken_0x2bfa58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        ctx->pc = 0x2BFA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFA58u;
        // 0x2bfa5c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bfa58) {
            ctx->pc = 0x2D5A60u;
            return;
        }
    }
    ctx->pc = 0x2BFA60u;
label_2bfa60:
    // 0x2bfa60: 0x40000014  .word       0x40000014                   # mfc0        $zero, Index # 00000014 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2bfa60u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_2bfa64:
    // 0x2bfa64: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bfa64u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bfa68:
    // 0x2bfa68: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bfa68u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bfa6c:
    // 0x2bfa6c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bfa6cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bfa70:
    // 0x2bfa70: 0x80060934  lb          $a2, 0x934($zero)
    ctx->pc = 0x2bfa70u;
    SET_GPR_S32(ctx, 6, (int8_t)FAST_READ8(0x934u));
label_2bfa74:
    // 0x2bfa74: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bfa74u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bfa78:
    // 0x2bfa78: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bfa78u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bfa7c:
    // 0x2bfa7c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bfa7cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bfa80:
    // 0x2bfa80: 0x5004000c  beql        $zero, $a0, . + 4 + (0xC << 2)
label_2bfa84:
    if (ctx->pc == 0x2BFA84u) {
        ctx->pc = 0x2BFA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFA80u;
        // 0x2bfa84: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BFA88u;
        goto label_2bfa88;
    }
    ctx->pc = 0x2BFA80u;
    {
        const bool branch_taken_0x2bfa80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 4));
        if (branch_taken_0x2bfa80) {
            ctx->pc = 0x2BFA84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BFA80u;
            // 0x2bfa84: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BFAB4u;
            goto label_2bfab4;
        }
    }
    ctx->pc = 0x2BFA88u;
label_2bfa88:
    // 0x2bfa88: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bfa88u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bfa8c:
    // 0x2bfa8c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bfa8cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bfa90:
    // 0x2bfa90: 0x42010010  .word       0x42010010                   # rfe # 00010000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2bfa90u;
//     throw std::runtime_error("Unhandled COP0 CO-OP: 0x10 at 0x2BFA90 raw=0x42010010");
 /* MITIGATED */
label_2bfa94:
    // 0x2bfa94: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bfa94u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bfa98:
    // 0x2bfa98: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bfa98u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bfa9c:
    // 0x2bfa9c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bfa9cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bfaa0:
    // 0x2bfaa0: 0x81e98b7d  lb          $t1, -0x7483($t7)
    ctx->pc = 0x2bfaa0u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294937469)));
label_2bfaa4:
    // 0x2bfaa4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bfaa4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bfaa8:
    // 0x2bfaa8: 0x81e9937d  lb          $t1, -0x6C83($t7)
    ctx->pc = 0x2bfaa8u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294939517)));
label_2bfaac:
    // 0x2bfaac: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bfaacu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bfab0:
    // 0x2bfab0: 0x81e99b7d  lb          $t1, -0x6483($t7)
    ctx->pc = 0x2bfab0u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294941565)));
label_2bfab4:
    // 0x2bfab4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bfab4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bfab8:
    // 0x2bfab8: 0x81e9cb7d  lb          $t1, -0x3483($t7)
    ctx->pc = 0x2bfab8u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294953853)));
label_2bfabc:
    // 0x2bfabc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bfabcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bfac0:
    // 0x2bfac0: 0x81e9d37d  lb          $t1, -0x2C83($t7)
    ctx->pc = 0x2bfac0u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294955901)));
label_2bfac4:
    // 0x2bfac4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bfac4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bfac8:
    // 0x2bfac8: 0x81e9db7d  lb          $t1, -0x2483($t7)
    ctx->pc = 0x2bfac8u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294957949)));
label_2bfacc:
    // 0x2bfacc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bfaccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bfad0:
    // 0x2bfad0: 0x100b5802  beq         $zero, $t3, . + 4 + (0x5802 << 2)
label_2bfad4:
    if (ctx->pc == 0x2BFAD4u) {
        ctx->pc = 0x2BFAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFAD0u;
        // 0x2bfad4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BFAD8u;
        goto label_2bfad8;
    }
    ctx->pc = 0x2BFAD0u;
    {
        const bool branch_taken_0x2bfad0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        ctx->pc = 0x2BFAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFAD0u;
        // 0x2bfad4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bfad0) {
            ctx->pc = 0x2D5ADCu;
            return;
        }
    }
    ctx->pc = 0x2BFAD8u;
label_2bfad8:
    // 0x2bfad8: 0x40000005  .word       0x40000005                   # mfc0        $zero, Index # 00000005 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2bfad8u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_2bfadc:
    // 0x2bfadc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bfadcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bfae0:
    // 0x2bfae0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bfae0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bfae4:
    // 0x2bfae4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bfae4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bfae8:
    // 0x2bfae8: 0x81e98b7d  lb          $t1, -0x7483($t7)
    ctx->pc = 0x2bfae8u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294937469)));
label_2bfaec:
    // 0x2bfaec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bfaecu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bfaf0:
    // 0x2bfaf0: 0x81e9937d  lb          $t1, -0x6C83($t7)
    ctx->pc = 0x2bfaf0u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294939517)));
label_2bfaf4:
    // 0x2bfaf4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bfaf4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bfaf8:
    // 0x2bfaf8: 0x81e99b7d  lb          $t1, -0x6483($t7)
    ctx->pc = 0x2bfaf8u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294941565)));
label_2bfafc:
    // 0x2bfafc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bfafcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bfb00:
    // 0x2bfb00: 0x100b5801  beq         $zero, $t3, . + 4 + (0x5801 << 2)
label_2bfb04:
    if (ctx->pc == 0x2BFB04u) {
        ctx->pc = 0x2BFB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFB00u;
        // 0x2bfb04: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BFB08u;
        goto label_2bfb08;
    }
    ctx->pc = 0x2BFB00u;
    {
        const bool branch_taken_0x2bfb00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        ctx->pc = 0x2BFB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFB00u;
        // 0x2bfb04: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bfb00) {
            ctx->pc = 0x2D5B08u;
            return;
        }
    }
    ctx->pc = 0x2BFB08u;
label_2bfb08:
    // 0x2bfb08: 0x48001000  .word       0x48001000                   # INVALID     $zero, $zero, 0x1000 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x2bfb08u;
//     throw std::runtime_error("Unhandled COP2 format: 0x0 at 0x2BFB08 raw=0x48001000");
 /* MITIGATED */
label_2bfb0c:
    // 0x2bfb0c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bfb0cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bfb10:
    // 0x2bfb10: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bfb10u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bfb14:
    // 0x2bfb14: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bfb14u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bfb18:
    // 0x2bfb18: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bfb18u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bfb1c:
    // 0x2bfb1c: 0x3c8e58  .word       0x003C8E58                   # mult        $s1, $at, $gp # 00000640 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2bfb1cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 28); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
label_2bfb20:
    // 0x2bfb20: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bfb20u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bfb24:
    // 0x2bfb24: 0x3cae98  .word       0x003CAE98                   # mult        $s5, $at, $gp # 00000680 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2bfb24u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 28); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 21, (int32_t)result); }
label_2bfb28:
    // 0x2bfb28: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bfb28u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bfb2c:
    // 0x2bfb2c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bfb2cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bfb30:
    // 0x2bfb30: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bfb30u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bfb34:
    // 0x2bfb34: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bfb34u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bfb38:
    // 0x2bfb38: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bfb38u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bfb3c:
    // 0x2bfb3c: 0x1f98e47  .word       0x01F98E47                   # srav        $s1, $t9, $t7 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bfb3cu;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 25), GPR_U32(ctx, 15) & 0x1F));
label_2bfb40:
    // 0x2bfb40: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bfb40u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bfb44:
    // 0x2bfb44: 0x1faae87  .word       0x01FAAE87                   # srav        $s5, $k0, $t7 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bfb44u;
    SET_GPR_S32(ctx, 21, SRA32(GPR_S32(ctx, 26), GPR_U32(ctx, 15) & 0x1F));
label_2bfb48:
    // 0x2bfb48: 0x80070330  lb          $a3, 0x330($zero)
    ctx->pc = 0x2bfb48u;
    SET_GPR_S32(ctx, 7, (int8_t)FAST_READ8(0x330u));
label_2bfb4c:
    // 0x2bfb4c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bfb4cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bfb50:
    // 0x2bfb50: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bfb50u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bfb54:
    // 0x2bfb54: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bfb54u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bfb58:
    // 0x2bfb58: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bfb58u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bfb5c:
    // 0x2bfb5c: 0x1f9c9fd  .word       0x01F9C9FD                   # INVALID     $t7, $t9, -0x3603 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bfb5cu;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2BFB5C raw=0x01F9C9FD");
 /* MITIGATED */
label_2bfb60:
    // 0x2bfb60: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bfb60u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bfb64:
    // 0x2bfb64: 0x1fad1fd  .word       0x01FAD1FD                   # INVALID     $t7, $k0, -0x2E03 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bfb64u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2BFB64 raw=0x01FAD1FD");
 /* MITIGATED */
label_2bfb68:
    // 0x2bfb68: 0x500c0004  beql        $zero, $t4, . + 4 + (0x4 << 2)
label_2bfb6c:
    if (ctx->pc == 0x2BFB6Cu) {
        ctx->pc = 0x2BFB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFB68u;
        // 0x2bfb6c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BFB70u;
        goto label_2bfb70;
    }
    ctx->pc = 0x2BFB68u;
    {
        const bool branch_taken_0x2bfb68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 12));
        if (branch_taken_0x2bfb68) {
            ctx->pc = 0x2BFB6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BFB68u;
            // 0x2bfb6c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BFB7Cu;
            goto label_2bfb7c;
        }
    }
    ctx->pc = 0x2BFB70u;
label_2bfb70:
    // 0x2bfb70: 0x120c6001  beq         $s0, $t4, . + 4 + (0x6001 << 2)
label_2bfb74:
    if (ctx->pc == 0x2BFB74u) {
        ctx->pc = 0x2BFB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFB70u;
        // 0x2bfb74: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BFB78u;
        goto label_2bfb78;
    }
    ctx->pc = 0x2BFB70u;
    {
        const bool branch_taken_0x2bfb70 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 12));
        ctx->pc = 0x2BFB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFB70u;
        // 0x2bfb74: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bfb70) {
            ctx->pc = 0x2D7B78u;
            return;
        }
    }
    ctx->pc = 0x2BFB78u;
label_2bfb78:
    // 0x2bfb78: 0x81f9cb3d  lb          $t9, -0x34C3($t7)
    ctx->pc = 0x2bfb78u;
    SET_GPR_S32(ctx, 25, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294953789)));
label_2bfb7c:
    // 0x2bfb7c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bfb7cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bfb80:
    // 0x2bfb80: 0x400007fc  .word       0x400007FC                   # mfc0        $zero, Index # 000007FC <InstrIdType: R5900_COP0>
    ctx->pc = 0x2bfb80u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_2bfb84:
    // 0x2bfb84: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bfb84u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bfb88:
    // 0x2bfb88: 0x81fad33d  lb          $k0, -0x2CC3($t7)
    ctx->pc = 0x2bfb88u;
    SET_GPR_S32(ctx, 26, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294955837)));
label_2bfb8c:
    // 0x2bfb8c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bfb8cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bfb90:
    // 0x2bfb90: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bfb90u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bfb94:
    // 0x2bfb94: 0x1d9d6e8  .word       0x01D9D6E8                   # mfsa        $k0 # 01D906C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2bfb94u;
    SET_GPR_U32(ctx, 26, ctx->sa);
label_2bfb98:
    // 0x2bfb98: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bfb98u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bfb9c:
    // 0x2bfb9c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bfb9cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bfba0:
    // 0x2bfba0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bfba0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bfba4:
    // 0x2bfba4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bfba4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bfba8:
    // 0x2bfba8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bfba8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bfbac:
    // 0x2bfbac: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bfbacu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bfbb0:
    // 0x2bfbb0: 0x801bcbbc  lb          $k1, -0x3444($zero)
    ctx->pc = 0x2bfbb0u;
    SET_GPR_S32(ctx, 27, (int8_t)runtime->Load8(rdram, ctx, 0xFFFFCBBCu));
label_2bfbb4:
    // 0x2bfbb4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bfbb4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bfbb8:
    // 0x2bfbb8: 0x800003bf  lb          $zero, 0x3BF($zero)
    ctx->pc = 0x2bfbb8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x3BFu));
label_2bfbbc:
    // 0x2bfbbc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bfbbcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bfbc0:
    // 0x2bfbc0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bfbc0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bfbc4:
    // 0x2bfbc4: 0x1000760  .word       0x01000760                   # add         $zero, $t0, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bfbc4u;
    {     int32_t rs_val = GPR_S32(ctx, 8);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_2bfbc8:
    // 0x2bfbc8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bfbc8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bfbcc:
    // 0x2bfbcc: 0x1f1ae6c  .word       0x01F1AE6C                   # dadd        $s5, $t7, $s1 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bfbccu;
    { int64_t a = (int64_t)GPR_S64(ctx, 15); int64_t b = (int64_t)GPR_S64(ctx, 17); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 21, r); }
label_2bfbd0:
    // 0x2bfbd0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bfbd0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bfbd4:
    // 0x2bfbd4: 0x1f2b6ac  .word       0x01F2B6AC                   # dadd        $s6, $t7, $s2 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bfbd4u;
    { int64_t a = (int64_t)GPR_S64(ctx, 15); int64_t b = (int64_t)GPR_S64(ctx, 18); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 22, r); }
label_2bfbd8:
    // 0x2bfbd8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bfbd8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bfbdc:
    // 0x2bfbdc: 0x1f3beec  .word       0x01F3BEEC                   # dadd        $s7, $t7, $s3 # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bfbdcu;
    { int64_t a = (int64_t)GPR_S64(ctx, 15); int64_t b = (int64_t)GPR_S64(ctx, 19); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 23, r); }
label_2bfbe0:
    // 0x2bfbe0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bfbe0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bfbe4:
    // 0x2bfbe4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bfbe4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bfbe8:
    // 0x2bfbe8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bfbe8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bfbec:
    // 0x2bfbec: 0x1fdce58  .word       0x01FDCE58                   # mult        $t9, $t7, $sp # 00000640 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2bfbecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 29); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 25, (int32_t)result); }
label_2bfbf0:
    // 0x2bfbf0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bfbf0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bfbf4:
    // 0x2bfbf4: 0x1fdd698  .word       0x01FDD698                   # mult        $k0, $t7, $sp # 00000680 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2bfbf4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 29); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 26, (int32_t)result); }
label_2bfbf8:
    // 0x2bfbf8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bfbf8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bfbfc:
    // 0x2bfbfc: 0x1fdded8  .word       0x01FDDED8                   # mult        $k1, $t7, $sp # 000006C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2bfbfcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 29); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 27, (int32_t)result); }
label_2bfc00:
    // 0x2bfc00: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bfc00u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bfc04:
    // 0x2bfc04: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bfc04u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bfc08:
    // 0x2bfc08: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bfc08u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bfc0c:
    // 0x2bfc0c: 0x1f1ce68  .word       0x01F1CE68                   # mfsa        $t9 # 01F10640 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2bfc0cu;
    SET_GPR_U32(ctx, 25, ctx->sa);
label_2bfc10:
    // 0x2bfc10: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bfc10u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bfc14:
    // 0x2bfc14: 0x1f2d6a8  .word       0x01F2D6A8                   # mfsa        $k0 # 01F20680 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2bfc14u;
    SET_GPR_U32(ctx, 26, ctx->sa);
label_2bfc18:
    // 0x2bfc18: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bfc18u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bfc1c:
    // 0x2bfc1c: 0x1f3dee8  .word       0x01F3DEE8                   # mfsa        $k1 # 01F306C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2bfc1cu;
    SET_GPR_U32(ctx, 27, ctx->sa);
label_2bfc20:
    // 0x2bfc20: 0x48000800  .word       0x48000800                   # INVALID     $zero, $zero, 0x800 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x2bfc20u;
//     throw std::runtime_error("Unhandled COP2 format: 0x0 at 0x2BFC20 raw=0x48000800");
 /* MITIGATED */
label_2bfc24:
    // 0x2bfc24: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bfc24u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bfc28:
    // 0x2bfc28: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bfc28u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bfc2c:
    // 0x2bfc2c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bfc2cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bfc30:
    // 0x2bfc30: 0x1f54000  .word       0x01F54000                   # sll         $t0, $s5, 0 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bfc30u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 21), 0));
label_2bfc34:
    // 0x2bfc34: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bfc34u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bfc38:
    // 0x2bfc38: 0x1f1000a  movz        $zero, $t7, $s1
    ctx->pc = 0x2bfc38u;
    if (GPR_U64(ctx, 17) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 15));
label_2bfc3c:
    // 0x2bfc3c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bfc3cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bfc40:
    // 0x2bfc40: 0x1f2000b  movn        $zero, $t7, $s2
    ctx->pc = 0x2bfc40u;
    if (GPR_U64(ctx, 18) != 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 15));
label_2bfc44:
    // 0x2bfc44: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bfc44u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bfc48:
    // 0x2bfc48: 0x1f3000c  .word       0x01F3000C                   # syscall     0 # 01F30000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bfc48u;
    ctx->pc = 0x2BFC4Cu;
runtime->handleSyscall(rdram, ctx, 0x7CC00u);
label_2bfc4c:
    // 0x2bfc4c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bfc4cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bfc50:
    // 0x2bfc50: 0x1f4000d  break       500
    ctx->pc = 0x2bfc50u;
    runtime->handleBreak(rdram, ctx);
label_2bfc54:
    // 0x2bfc54: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bfc54u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bfc58:
    // 0x2bfc58: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bfc58u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bfc5c:
    // 0x2bfc5c: 0x1f589bc  .word       0x01F589BC                   # dsll32      $s1, $s5, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bfc5cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 21) << (32 + 6));
label_2bfc60:
    // 0x2bfc60: 0x10071001  beq         $zero, $a3, . + 4 + (0x1001 << 2)
label_2bfc64:
    if (ctx->pc == 0x2BFC64u) {
        ctx->pc = 0x2BFC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFC60u;
        // 0x2bfc64: 0x1f590bd  .word       0x01F590BD                   # INVALID     $t7, $s5, -0x6F43 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
//         throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2BFC64 raw=0x01F590BD");
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BFC68u;
        goto label_2bfc68;
    }
    ctx->pc = 0x2BFC60u;
    {
        const bool branch_taken_0x2bfc60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 7));
        ctx->pc = 0x2BFC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFC60u;
        // 0x2bfc64: 0x1f590bd  .word       0x01F590BD                   # INVALID     $t7, $s5, -0x6F43 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
//         throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2BFC64 raw=0x01F590BD");
 /* MITIGATED */
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bfc60) {
            ctx->pc = 0x2C3C68u;
            { ctx->pc = 0x2c3c68; return; }
        }
    }
    ctx->pc = 0x2BFC68u;
label_2bfc68:
    // 0x2bfc68: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bfc68u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bfc6c:
    // 0x2bfc6c: 0x1f598be  .word       0x01F598BE                   # dsrl32      $s3, $s5, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bfc6cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 21) >> (32 + 2));
label_2bfc70:
    // 0x2bfc70: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bfc70u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bfc74:
    // 0x2bfc74: 0x1f5a70b  .word       0x01F5A70B                   # movn        $s4, $t7, $s5 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bfc74u;
    if (GPR_U64(ctx, 21) != 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 15));
label_2bfc78:
    // 0x2bfc78: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bfc78u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bfc7c:
    // 0x2bfc7c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bfc7cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bfc80:
    // 0x2bfc80: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bfc80u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bfc84:
    // 0x2bfc84: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bfc84u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bfc88:
    // 0x2bfc88: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bfc88u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bfc8c:
    // 0x2bfc8c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bfc8cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bfc90:
    // 0x2bfc90: 0x81fc03bc  lb          $gp, 0x3BC($t7)
    ctx->pc = 0x2bfc90u;
    SET_GPR_S32(ctx, 28, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 956)));
label_2bfc94:
    // 0x2bfc94: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bfc94u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bfc98:
    // 0x2bfc98: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bfc98u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bfc9c:
    // 0x2bfc9c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bfc9cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bfca0:
    // 0x2bfca0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bfca0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bfca4:
    // 0x2bfca4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bfca4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bfca8:
    // 0x2bfca8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bfca8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bfcac:
    // 0x2bfcac: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bfcacu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bfcb0:
    // 0x2bfcb0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bfcb0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bfcb4:
    // 0x2bfcb4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bfcb4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bfcb8:
    // 0x2bfcb8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bfcb8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bfcbc:
    // 0x2bfcbc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bfcbcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bfcc0:
    // 0x2bfcc0: 0x1fb4001  .word       0x01FB4001                   # INVALID     $t7, $k1, 0x4001 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bfcc0u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2BFCC0 raw=0x01FB4001");
 /* MITIGATED */
label_2bfcc4:
    // 0x2bfcc4: 0x3e01be  .word       0x003E01BE                   # dsrl32      $zero, $fp, 6 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bfcc4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 30) >> (32 + 6));
label_2bfcc8:
    // 0x2bfcc8: 0x8056033d  lb          $s6, 0x33D($v0)
    ctx->pc = 0x2bfcc8u;
    SET_GPR_S32(ctx, 22, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 829)));
label_2bfccc:
    // 0x2bfccc: 0x20f6a1  .word       0x0020F6A1                   # addu        $fp, $at, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bfcccu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 0)));
label_2bfcd0:
    // 0x2bfcd0: 0x1964002  .word       0x01964002                   # srl         $t0, $s6, 0 # 01800000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bfcd0u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 22), 0));
label_2bfcd4:
    // 0x2bfcd4: 0x1c0e65c  .word       0x01C0E65C                   # dmult       $t6, $zero # 0000E640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bfcd4u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2BFCD4 raw=0x01C0E65C");
 /* MITIGATED */
label_2bfcd8:
    // 0x2bfcd8: 0x1f54003  .word       0x01F54003                   # sra         $t0, $s5, 0 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bfcd8u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 21), 0));
label_2bfcdc:
    // 0x2bfcdc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bfcdcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bfce0:
    // 0x2bfce0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bfce0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bfce4:
    // 0x2bfce4: 0x1fbd97c  .word       0x01FBD97C                   # dsll32      $k1, $k1, 5 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bfce4u;
    SET_GPR_U64(ctx, 27, GPR_U64(ctx, 27) << (32 + 5));
label_2bfce8:
    // 0x2bfce8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bfce8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bfcec:
    // 0x2bfcec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bfcecu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bfcf0:
    // 0x2bfcf0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bfcf0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bfcf4:
    // 0x2bfcf4: 0x20d69f  .word       0x0020D69F                   # ddivu       $k0, $at, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bfcf4u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x2BFCF4 raw=0x0020D69F");
 /* MITIGATED */
label_2bfcf8:
    // 0x2bfcf8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bfcf8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bfcfc:
    // 0x2bfcfc: 0x1c0b59c  .word       0x01C0B59C                   # dmult       $t6, $zero # 0000B580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bfcfcu;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2BFCFC raw=0x01C0B59C");
 /* MITIGATED */
label_2bfd00:
    // 0x2bfd00: 0x3e7d801  .word       0x03E7D801                   # INVALID     $ra, $a3, -0x27FF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bfd00u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2BFD00 raw=0x03E7D801");
 /* MITIGATED */
label_2bfd04:
    // 0x2bfd04: 0x1f589bc  .word       0x01F589BC                   # dsll32      $s1, $s5, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bfd04u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 21) << (32 + 6));
label_2bfd08:
    // 0x2bfd08: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bfd08u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bfd0c:
    // 0x2bfd0c: 0x1f590bd  .word       0x01F590BD                   # INVALID     $t7, $s5, -0x6F43 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bfd0cu;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2BFD0C raw=0x01F590BD");
 /* MITIGATED */
label_2bfd10:
    // 0x2bfd10: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bfd10u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bfd14:
    // 0x2bfd14: 0x20d650  .word       0x0020D650                   # mfhi        $k0 # 00200640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bfd14u;
    SET_GPR_U64(ctx, 26, ctx->hi);
label_2bfd18:
    // 0x2bfd18: 0x3e7b000  .word       0x03E7B000                   # sll         $s6, $a3, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bfd18u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 7), 0));
label_2bfd1c:
    // 0x2bfd1c: 0x1f598be  .word       0x01F598BE                   # dsrl32      $s3, $s5, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bfd1cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 21) >> (32 + 2));
label_2bfd20:
    // 0x2bfd20: 0x10073803  beq         $zero, $a3, . + 4 + (0x3803 << 2)
label_2bfd24:
    if (ctx->pc == 0x2BFD24u) {
        ctx->pc = 0x2BFD24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFD20u;
        // 0x2bfd24: 0x1f5a70b  .word       0x01F5A70B                   # movn        $s4, $t7, $s5 # 00000700 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        if (GPR_U64(ctx, 21) != 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BFD28u;
        goto label_2bfd28;
    }
    ctx->pc = 0x2BFD20u;
    {
        const bool branch_taken_0x2bfd20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 7));
        ctx->pc = 0x2BFD24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFD20u;
        // 0x2bfd24: 0x1f5a70b  .word       0x01F5A70B                   # movn        $s4, $t7, $s5 # 00000700 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        if (GPR_U64(ctx, 21) != 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bfd20) {
            ctx->pc = 0x2CDD30u;
            { ctx->pc = 0x2cdd30; return; }
        }
    }
    ctx->pc = 0x2BFD28u;
label_2bfd28:
    // 0x2bfd28: 0x10084003  beq         $zero, $t0, . + 4 + (0x4003 << 2)
label_2bfd2c:
    if (ctx->pc == 0x2BFD2Cu) {
        ctx->pc = 0x2BFD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFD28u;
        // 0x2bfd2c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BFD30u;
        goto label_2bfd30;
    }
    ctx->pc = 0x2BFD28u;
    {
        const bool branch_taken_0x2bfd28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 8));
        ctx->pc = 0x2BFD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFD28u;
        // 0x2bfd2c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bfd28) {
            ctx->pc = 0x2CFD38u;
            return;
        }
    }
    ctx->pc = 0x2BFD30u;
label_2bfd30:
    // 0x2bfd30: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bfd30u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bfd34:
    // 0x2bfd34: 0x1fac97d  .word       0x01FAC97D                   # INVALID     $t7, $k0, -0x3683 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bfd34u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2BFD34 raw=0x01FAC97D");
 /* MITIGATED */
label_2bfd38:
    // 0x2bfd38: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bfd38u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bfd3c:
    // 0x2bfd3c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bfd3cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bfd40:
    // 0x2bfd40: 0x800a57f2  lb          $t2, 0x57F2($zero)
    ctx->pc = 0x2bfd40u;
    SET_GPR_S32(ctx, 10, (int8_t)FAST_READ8(0x57F2u));
label_2bfd44:
    // 0x2bfd44: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bfd44u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bfd48:
    // 0x2bfd48: 0x81fc03bc  lb          $gp, 0x3BC($t7)
    ctx->pc = 0x2bfd48u;
    SET_GPR_S32(ctx, 28, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 956)));
label_2bfd4c:
    // 0x2bfd4c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bfd4cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bfd50:
    // 0x2bfd50: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bfd50u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bfd54:
    // 0x2bfd54: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bfd54u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bfd58:
    // 0x2bfd58: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bfd58u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bfd5c:
    // 0x2bfd5c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bfd5cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bfd60:
    // 0x2bfd60: 0x3e7d7ff  .word       0x03E7D7FF                   # dsra32      $k0, $a3, 31 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bfd60u;
    SET_GPR_S64(ctx, 26, GPR_S64(ctx, 7) >> (32 + 31));
label_2bfd64:
    // 0x2bfd64: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bfd64u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bfd68:
    // 0x2bfd68: 0x520a07ea  beql        $s0, $t2, . + 4 + (0x7EA << 2)
label_2bfd6c:
    if (ctx->pc == 0x2BFD6Cu) {
        ctx->pc = 0x2BFD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFD68u;
        // 0x2bfd6c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BFD70u;
        goto label_2bfd70;
    }
    ctx->pc = 0x2BFD68u;
    {
        const bool branch_taken_0x2bfd68 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 10));
        if (branch_taken_0x2bfd68) {
            ctx->pc = 0x2BFD6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BFD68u;
            // 0x2bfd6c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C1D14u;
            { ctx->pc = 0x2c1d14; return; }
        }
    }
    ctx->pc = 0x2BFD70u;
label_2bfd70:
    // 0x2bfd70: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bfd70u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bfd74:
    // 0x2bfd74: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bfd74u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bfd78:
    // 0x2bfd78: 0x48000800  .word       0x48000800                   # INVALID     $zero, $zero, 0x800 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x2bfd78u;
//     throw std::runtime_error("Unhandled COP2 format: 0x0 at 0x2BFD78 raw=0x48000800");
 /* MITIGATED */
label_2bfd7c:
    // 0x2bfd7c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bfd7cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bfd80:
    // 0x2bfd80: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bfd80u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bfd84:
    // 0x2bfd84: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bfd84u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bfd88:
    // 0x2bfd88: 0x800206bc  lb          $v0, 0x6BC($zero)
    ctx->pc = 0x2bfd88u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x6BCu));
label_2bfd8c:
    // 0x2bfd8c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bfd8cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bfd90:
    // 0x2bfd90: 0x10011001  beq         $zero, $at, . + 4 + (0x1001 << 2)
label_2bfd94:
    if (ctx->pc == 0x2BFD94u) {
        ctx->pc = 0x2BFD94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFD90u;
        // 0x2bfd94: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BFD98u;
        goto label_2bfd98;
    }
    ctx->pc = 0x2BFD90u;
    {
        const bool branch_taken_0x2bfd90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 1));
        ctx->pc = 0x2BFD94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFD90u;
        // 0x2bfd94: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bfd90) {
            ctx->pc = 0x2C3D98u;
            { ctx->pc = 0x2c3d98; return; }
        }
    }
    ctx->pc = 0x2BFD98u;
label_2bfd98:
    // 0x2bfd98: 0x10030066  beq         $zero, $v1, . + 4 + (0x66 << 2)
label_2bfd9c:
    if (ctx->pc == 0x2BFD9Cu) {
        ctx->pc = 0x2BFD9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFD98u;
        // 0x2bfd9c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BFDA0u;
        goto label_2bfda0;
    }
    ctx->pc = 0x2BFD98u;
    {
        const bool branch_taken_0x2bfd98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 3));
        ctx->pc = 0x2BFD9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFD98u;
        // 0x2bfd9c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bfd98) {
            ctx->pc = 0x2BFF34u;
            { ctx->pc = 0x2bff34; return; }
        }
    }
    ctx->pc = 0x2BFDA0u;
label_2bfda0:
    // 0x2bfda0: 0x1fa0005  .word       0x01FA0005                   # INVALID     $t7, $k0, 0x5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bfda0u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x2BFDA0 raw=0x01FA0005");
 /* MITIGATED */
label_2bfda4:
    // 0x2bfda4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bfda4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bfda8:
    // 0x2bfda8: 0x10021031  beq         $zero, $v0, . + 4 + (0x1031 << 2)
label_2bfdac:
    if (ctx->pc == 0x2BFDACu) {
        ctx->pc = 0x2BFDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFDA8u;
        // 0x2bfdac: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BFDB0u;
        goto label_2bfdb0;
    }
    ctx->pc = 0x2BFDA8u;
    {
        const bool branch_taken_0x2bfda8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BFDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFDA8u;
        // 0x2bfdac: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bfda8) {
            ctx->pc = 0x2C3E70u;
            { ctx->pc = 0x2c3e70; return; }
        }
    }
    ctx->pc = 0x2BFDB0u;
label_2bfdb0:
    // 0x2bfdb0: 0x11eb07ff  beq         $t7, $t3, . + 4 + (0x7FF << 2)
label_2bfdb4:
    if (ctx->pc == 0x2BFDB4u) {
        ctx->pc = 0x2BFDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFDB0u;
        // 0x2bfdb4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BFDB8u;
        goto label_2bfdb8;
    }
    ctx->pc = 0x2BFDB0u;
    {
        const bool branch_taken_0x2bfdb0 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 11));
        ctx->pc = 0x2BFDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFDB0u;
        // 0x2bfdb4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bfdb0) {
            ctx->pc = 0x2C1DB0u;
            { ctx->pc = 0x2c1db0; return; }
        }
    }
    ctx->pc = 0x2BFDB8u;
label_2bfdb8:
    // 0x2bfdb8: 0x100b5801  beq         $zero, $t3, . + 4 + (0x5801 << 2)
label_2bfdbc:
    if (ctx->pc == 0x2BFDBCu) {
        ctx->pc = 0x2BFDBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFDB8u;
        // 0x2bfdbc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BFDC0u;
        goto label_2bfdc0;
    }
    ctx->pc = 0x2BFDB8u;
    {
        const bool branch_taken_0x2bfdb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        ctx->pc = 0x2BFDBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFDB8u;
        // 0x2bfdbc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bfdb8) {
            ctx->pc = 0x2D5DC0u;
            return;
        }
    }
    ctx->pc = 0x2BFDC0u;
label_2bfdc0:
    // 0x2bfdc0: 0x3e2d000  .word       0x03E2D000                   # sll         $k0, $v0, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bfdc0u;
    SET_GPR_S32(ctx, 26, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
label_2bfdc4:
    // 0x2bfdc4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bfdc4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bfdc8:
    // 0x2bfdc8: 0x3e2d001  .word       0x03E2D001                   # INVALID     $ra, $v0, -0x2FFF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bfdc8u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2BFDC8 raw=0x03E2D001");
 /* MITIGATED */
label_2bfdcc:
    // 0x2bfdcc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bfdccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bfdd0:
    // 0x2bfdd0: 0xb0b1000  j           func_C2C4000
label_2bfdd4:
    if (ctx->pc == 0x2BFDD4u) {
        ctx->pc = 0x2BFDD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFDD0u;
        // 0x2bfdd4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BFDD8u;
        goto label_2bfdd8;
    }
    ctx->pc = 0x2BFDD0u;
    ctx->pc = 0x2BFDD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BFDD0u;
    // 0x2bfdd4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0xC2C4000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xC2C4000u, 0x2BFDD0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2BFDD8u;
label_2bfdd8:
    // 0x2bfdd8: 0xa800fff  j           func_A003FFC
label_2bfddc:
    if (ctx->pc == 0x2BFDDCu) {
        ctx->pc = 0x2BFDDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFDD8u;
        // 0x2bfddc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BFDE0u;
        { ctx->pc = 0x2bfde0; return; }
    }
    ctx->pc = 0x2BFDD8u;
    ctx->pc = 0x2BFDDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BFDD8u;
    // 0x2bfddc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0xA003FFCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xA003FFCu, 0x2BFDD8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2BFDE0u;
    ctx->pc = 0x2bfde0u;
    return;
}
