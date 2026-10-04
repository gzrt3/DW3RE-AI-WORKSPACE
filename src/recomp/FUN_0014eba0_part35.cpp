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


void FUN_0014eba0_part35(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x15f540u: goto label_15f540;
        case 0x15f544u: goto label_15f544;
        case 0x15f548u: goto label_15f548;
        case 0x15f54cu: goto label_15f54c;
        case 0x15f550u: goto label_15f550;
        case 0x15f554u: goto label_15f554;
        case 0x15f558u: goto label_15f558;
        case 0x15f55cu: goto label_15f55c;
        case 0x15f560u: goto label_15f560;
        case 0x15f564u: goto label_15f564;
        case 0x15f568u: goto label_15f568;
        case 0x15f56cu: goto label_15f56c;
        case 0x15f570u: goto label_15f570;
        case 0x15f574u: goto label_15f574;
        case 0x15f578u: goto label_15f578;
        case 0x15f57cu: goto label_15f57c;
        case 0x15f580u: goto label_15f580;
        case 0x15f584u: goto label_15f584;
        case 0x15f588u: goto label_15f588;
        case 0x15f58cu: goto label_15f58c;
        case 0x15f590u: goto label_15f590;
        case 0x15f594u: goto label_15f594;
        case 0x15f598u: goto label_15f598;
        case 0x15f59cu: goto label_15f59c;
        case 0x15f5a0u: goto label_15f5a0;
        case 0x15f5a4u: goto label_15f5a4;
        case 0x15f5a8u: goto label_15f5a8;
        case 0x15f5acu: goto label_15f5ac;
        case 0x15f5b0u: goto label_15f5b0;
        case 0x15f5b4u: goto label_15f5b4;
        case 0x15f5b8u: goto label_15f5b8;
        case 0x15f5bcu: goto label_15f5bc;
        case 0x15f5c0u: goto label_15f5c0;
        case 0x15f5c4u: goto label_15f5c4;
        case 0x15f5c8u: goto label_15f5c8;
        case 0x15f5ccu: goto label_15f5cc;
        case 0x15f5d0u: goto label_15f5d0;
        case 0x15f5d4u: goto label_15f5d4;
        case 0x15f5d8u: goto label_15f5d8;
        case 0x15f5dcu: goto label_15f5dc;
        case 0x15f5e0u: goto label_15f5e0;
        case 0x15f5e4u: goto label_15f5e4;
        case 0x15f5e8u: goto label_15f5e8;
        case 0x15f5ecu: goto label_15f5ec;
        case 0x15f5f0u: goto label_15f5f0;
        case 0x15f5f4u: goto label_15f5f4;
        case 0x15f5f8u: goto label_15f5f8;
        case 0x15f5fcu: goto label_15f5fc;
        case 0x15f600u: goto label_15f600;
        case 0x15f604u: goto label_15f604;
        case 0x15f608u: goto label_15f608;
        case 0x15f60cu: goto label_15f60c;
        case 0x15f610u: goto label_15f610;
        case 0x15f614u: goto label_15f614;
        case 0x15f618u: goto label_15f618;
        case 0x15f61cu: goto label_15f61c;
        case 0x15f620u: goto label_15f620;
        case 0x15f624u: goto label_15f624;
        case 0x15f628u: goto label_15f628;
        case 0x15f62cu: goto label_15f62c;
        case 0x15f630u: goto label_15f630;
        case 0x15f634u: goto label_15f634;
        case 0x15f638u: goto label_15f638;
        case 0x15f63cu: goto label_15f63c;
        case 0x15f640u: goto label_15f640;
        case 0x15f644u: goto label_15f644;
        case 0x15f648u: goto label_15f648;
        case 0x15f64cu: goto label_15f64c;
        case 0x15f650u: goto label_15f650;
        case 0x15f654u: goto label_15f654;
        case 0x15f658u: goto label_15f658;
        case 0x15f65cu: goto label_15f65c;
        case 0x15f660u: goto label_15f660;
        case 0x15f664u: goto label_15f664;
        case 0x15f668u: goto label_15f668;
        case 0x15f66cu: goto label_15f66c;
        case 0x15f670u: goto label_15f670;
        case 0x15f674u: goto label_15f674;
        case 0x15f678u: goto label_15f678;
        case 0x15f67cu: goto label_15f67c;
        case 0x15f680u: goto label_15f680;
        case 0x15f684u: goto label_15f684;
        case 0x15f688u: goto label_15f688;
        case 0x15f68cu: goto label_15f68c;
        case 0x15f690u: goto label_15f690;
        case 0x15f694u: goto label_15f694;
        case 0x15f698u: goto label_15f698;
        case 0x15f69cu: goto label_15f69c;
        case 0x15f6a0u: goto label_15f6a0;
        case 0x15f6a4u: goto label_15f6a4;
        case 0x15f6a8u: goto label_15f6a8;
        case 0x15f6acu: goto label_15f6ac;
        case 0x15f6b0u: goto label_15f6b0;
        case 0x15f6b4u: goto label_15f6b4;
        case 0x15f6b8u: goto label_15f6b8;
        case 0x15f6bcu: goto label_15f6bc;
        case 0x15f6c0u: goto label_15f6c0;
        case 0x15f6c4u: goto label_15f6c4;
        case 0x15f6c8u: goto label_15f6c8;
        case 0x15f6ccu: goto label_15f6cc;
        case 0x15f6d0u: goto label_15f6d0;
        case 0x15f6d4u: goto label_15f6d4;
        case 0x15f6d8u: goto label_15f6d8;
        case 0x15f6dcu: goto label_15f6dc;
        case 0x15f6e0u: goto label_15f6e0;
        case 0x15f6e4u: goto label_15f6e4;
        case 0x15f6e8u: goto label_15f6e8;
        case 0x15f6ecu: goto label_15f6ec;
        case 0x15f6f0u: goto label_15f6f0;
        case 0x15f6f4u: goto label_15f6f4;
        case 0x15f6f8u: goto label_15f6f8;
        case 0x15f6fcu: goto label_15f6fc;
        case 0x15f700u: goto label_15f700;
        case 0x15f704u: goto label_15f704;
        case 0x15f708u: goto label_15f708;
        case 0x15f70cu: goto label_15f70c;
        case 0x15f710u: goto label_15f710;
        case 0x15f714u: goto label_15f714;
        case 0x15f718u: goto label_15f718;
        case 0x15f71cu: goto label_15f71c;
        case 0x15f720u: goto label_15f720;
        case 0x15f724u: goto label_15f724;
        case 0x15f728u: goto label_15f728;
        case 0x15f72cu: goto label_15f72c;
        case 0x15f730u: goto label_15f730;
        case 0x15f734u: goto label_15f734;
        case 0x15f738u: goto label_15f738;
        case 0x15f73cu: goto label_15f73c;
        case 0x15f740u: goto label_15f740;
        case 0x15f744u: goto label_15f744;
        case 0x15f748u: goto label_15f748;
        case 0x15f74cu: goto label_15f74c;
        case 0x15f750u: goto label_15f750;
        case 0x15f754u: goto label_15f754;
        case 0x15f758u: goto label_15f758;
        case 0x15f75cu: goto label_15f75c;
        case 0x15f760u: goto label_15f760;
        case 0x15f764u: goto label_15f764;
        case 0x15f768u: goto label_15f768;
        case 0x15f76cu: goto label_15f76c;
        case 0x15f770u: goto label_15f770;
        case 0x15f774u: goto label_15f774;
        case 0x15f778u: goto label_15f778;
        case 0x15f77cu: goto label_15f77c;
        case 0x15f780u: goto label_15f780;
        case 0x15f784u: goto label_15f784;
        case 0x15f788u: goto label_15f788;
        case 0x15f78cu: goto label_15f78c;
        case 0x15f790u: goto label_15f790;
        case 0x15f794u: goto label_15f794;
        case 0x15f798u: goto label_15f798;
        case 0x15f79cu: goto label_15f79c;
        case 0x15f7a0u: goto label_15f7a0;
        case 0x15f7a4u: goto label_15f7a4;
        case 0x15f7a8u: goto label_15f7a8;
        case 0x15f7acu: goto label_15f7ac;
        case 0x15f7b0u: goto label_15f7b0;
        case 0x15f7b4u: goto label_15f7b4;
        case 0x15f7b8u: goto label_15f7b8;
        case 0x15f7bcu: goto label_15f7bc;
        case 0x15f7c0u: goto label_15f7c0;
        case 0x15f7c4u: goto label_15f7c4;
        case 0x15f7c8u: goto label_15f7c8;
        case 0x15f7ccu: goto label_15f7cc;
        case 0x15f7d0u: goto label_15f7d0;
        case 0x15f7d4u: goto label_15f7d4;
        case 0x15f7d8u: goto label_15f7d8;
        case 0x15f7dcu: goto label_15f7dc;
        case 0x15f7e0u: goto label_15f7e0;
        case 0x15f7e4u: goto label_15f7e4;
        case 0x15f7e8u: goto label_15f7e8;
        case 0x15f7ecu: goto label_15f7ec;
        case 0x15f7f0u: goto label_15f7f0;
        case 0x15f7f4u: goto label_15f7f4;
        case 0x15f7f8u: goto label_15f7f8;
        case 0x15f7fcu: goto label_15f7fc;
        case 0x15f800u: goto label_15f800;
        case 0x15f804u: goto label_15f804;
        case 0x15f808u: goto label_15f808;
        case 0x15f80cu: goto label_15f80c;
        case 0x15f810u: goto label_15f810;
        case 0x15f814u: goto label_15f814;
        case 0x15f818u: goto label_15f818;
        case 0x15f81cu: goto label_15f81c;
        case 0x15f820u: goto label_15f820;
        case 0x15f824u: goto label_15f824;
        case 0x15f828u: goto label_15f828;
        case 0x15f82cu: goto label_15f82c;
        case 0x15f830u: goto label_15f830;
        case 0x15f834u: goto label_15f834;
        case 0x15f838u: goto label_15f838;
        case 0x15f83cu: goto label_15f83c;
        case 0x15f840u: goto label_15f840;
        case 0x15f844u: goto label_15f844;
        case 0x15f848u: goto label_15f848;
        case 0x15f84cu: goto label_15f84c;
        case 0x15f850u: goto label_15f850;
        case 0x15f854u: goto label_15f854;
        case 0x15f858u: goto label_15f858;
        case 0x15f85cu: goto label_15f85c;
        case 0x15f860u: goto label_15f860;
        case 0x15f864u: goto label_15f864;
        case 0x15f868u: goto label_15f868;
        case 0x15f86cu: goto label_15f86c;
        case 0x15f870u: goto label_15f870;
        case 0x15f874u: goto label_15f874;
        case 0x15f878u: goto label_15f878;
        case 0x15f87cu: goto label_15f87c;
        case 0x15f880u: goto label_15f880;
        case 0x15f884u: goto label_15f884;
        case 0x15f888u: goto label_15f888;
        case 0x15f88cu: goto label_15f88c;
        case 0x15f890u: goto label_15f890;
        case 0x15f894u: goto label_15f894;
        case 0x15f898u: goto label_15f898;
        case 0x15f89cu: goto label_15f89c;
        case 0x15f8a0u: goto label_15f8a0;
        case 0x15f8a4u: goto label_15f8a4;
        case 0x15f8a8u: goto label_15f8a8;
        case 0x15f8acu: goto label_15f8ac;
        case 0x15f8b0u: goto label_15f8b0;
        case 0x15f8b4u: goto label_15f8b4;
        case 0x15f8b8u: goto label_15f8b8;
        case 0x15f8bcu: goto label_15f8bc;
        case 0x15f8c0u: goto label_15f8c0;
        case 0x15f8c4u: goto label_15f8c4;
        case 0x15f8c8u: goto label_15f8c8;
        case 0x15f8ccu: goto label_15f8cc;
        case 0x15f8d0u: goto label_15f8d0;
        case 0x15f8d4u: goto label_15f8d4;
        case 0x15f8d8u: goto label_15f8d8;
        case 0x15f8dcu: goto label_15f8dc;
        case 0x15f8e0u: goto label_15f8e0;
        case 0x15f8e4u: goto label_15f8e4;
        case 0x15f8e8u: goto label_15f8e8;
        case 0x15f8ecu: goto label_15f8ec;
        case 0x15f8f0u: goto label_15f8f0;
        case 0x15f8f4u: goto label_15f8f4;
        case 0x15f8f8u: goto label_15f8f8;
        case 0x15f8fcu: goto label_15f8fc;
        case 0x15f900u: goto label_15f900;
        case 0x15f904u: goto label_15f904;
        case 0x15f908u: goto label_15f908;
        case 0x15f90cu: goto label_15f90c;
        case 0x15f910u: goto label_15f910;
        case 0x15f914u: goto label_15f914;
        case 0x15f918u: goto label_15f918;
        case 0x15f91cu: goto label_15f91c;
        case 0x15f920u: goto label_15f920;
        case 0x15f924u: goto label_15f924;
        case 0x15f928u: goto label_15f928;
        case 0x15f92cu: goto label_15f92c;
        case 0x15f930u: goto label_15f930;
        case 0x15f934u: goto label_15f934;
        case 0x15f938u: goto label_15f938;
        case 0x15f93cu: goto label_15f93c;
        case 0x15f940u: goto label_15f940;
        case 0x15f944u: goto label_15f944;
        case 0x15f948u: goto label_15f948;
        case 0x15f94cu: goto label_15f94c;
        case 0x15f950u: goto label_15f950;
        case 0x15f954u: goto label_15f954;
        case 0x15f958u: goto label_15f958;
        case 0x15f95cu: goto label_15f95c;
        case 0x15f960u: goto label_15f960;
        case 0x15f964u: goto label_15f964;
        case 0x15f968u: goto label_15f968;
        case 0x15f96cu: goto label_15f96c;
        case 0x15f970u: goto label_15f970;
        case 0x15f974u: goto label_15f974;
        case 0x15f978u: goto label_15f978;
        case 0x15f97cu: goto label_15f97c;
        case 0x15f980u: goto label_15f980;
        case 0x15f984u: goto label_15f984;
        case 0x15f988u: goto label_15f988;
        case 0x15f98cu: goto label_15f98c;
        case 0x15f990u: goto label_15f990;
        case 0x15f994u: goto label_15f994;
        case 0x15f998u: goto label_15f998;
        case 0x15f99cu: goto label_15f99c;
        case 0x15f9a0u: goto label_15f9a0;
        case 0x15f9a4u: goto label_15f9a4;
        case 0x15f9a8u: goto label_15f9a8;
        case 0x15f9acu: goto label_15f9ac;
        case 0x15f9b0u: goto label_15f9b0;
        case 0x15f9b4u: goto label_15f9b4;
        case 0x15f9b8u: goto label_15f9b8;
        case 0x15f9bcu: goto label_15f9bc;
        case 0x15f9c0u: goto label_15f9c0;
        case 0x15f9c4u: goto label_15f9c4;
        case 0x15f9c8u: goto label_15f9c8;
        case 0x15f9ccu: goto label_15f9cc;
        case 0x15f9d0u: goto label_15f9d0;
        case 0x15f9d4u: goto label_15f9d4;
        case 0x15f9d8u: goto label_15f9d8;
        case 0x15f9dcu: goto label_15f9dc;
        case 0x15f9e0u: goto label_15f9e0;
        case 0x15f9e4u: goto label_15f9e4;
        case 0x15f9e8u: goto label_15f9e8;
        case 0x15f9ecu: goto label_15f9ec;
        case 0x15f9f0u: goto label_15f9f0;
        case 0x15f9f4u: goto label_15f9f4;
        case 0x15f9f8u: goto label_15f9f8;
        case 0x15f9fcu: goto label_15f9fc;
        case 0x15fa00u: goto label_15fa00;
        case 0x15fa04u: goto label_15fa04;
        case 0x15fa08u: goto label_15fa08;
        case 0x15fa0cu: goto label_15fa0c;
        case 0x15fa10u: goto label_15fa10;
        case 0x15fa14u: goto label_15fa14;
        case 0x15fa18u: goto label_15fa18;
        case 0x15fa1cu: goto label_15fa1c;
        case 0x15fa20u: goto label_15fa20;
        case 0x15fa24u: goto label_15fa24;
        case 0x15fa28u: goto label_15fa28;
        case 0x15fa2cu: goto label_15fa2c;
        case 0x15fa30u: goto label_15fa30;
        case 0x15fa34u: goto label_15fa34;
        case 0x15fa38u: goto label_15fa38;
        case 0x15fa3cu: goto label_15fa3c;
        case 0x15fa40u: goto label_15fa40;
        case 0x15fa44u: goto label_15fa44;
        case 0x15fa48u: goto label_15fa48;
        case 0x15fa4cu: goto label_15fa4c;
        case 0x15fa50u: goto label_15fa50;
        case 0x15fa54u: goto label_15fa54;
        case 0x15fa58u: goto label_15fa58;
        case 0x15fa5cu: goto label_15fa5c;
        case 0x15fa60u: goto label_15fa60;
        case 0x15fa64u: goto label_15fa64;
        case 0x15fa68u: goto label_15fa68;
        case 0x15fa6cu: goto label_15fa6c;
        case 0x15fa70u: goto label_15fa70;
        case 0x15fa74u: goto label_15fa74;
        case 0x15fa78u: goto label_15fa78;
        case 0x15fa7cu: goto label_15fa7c;
        case 0x15fa80u: goto label_15fa80;
        case 0x15fa84u: goto label_15fa84;
        case 0x15fa88u: goto label_15fa88;
        case 0x15fa8cu: goto label_15fa8c;
        case 0x15fa90u: goto label_15fa90;
        case 0x15fa94u: goto label_15fa94;
        case 0x15fa98u: goto label_15fa98;
        case 0x15fa9cu: goto label_15fa9c;
        case 0x15faa0u: goto label_15faa0;
        case 0x15faa4u: goto label_15faa4;
        case 0x15faa8u: goto label_15faa8;
        case 0x15faacu: goto label_15faac;
        case 0x15fab0u: goto label_15fab0;
        case 0x15fab4u: goto label_15fab4;
        case 0x15fab8u: goto label_15fab8;
        case 0x15fabcu: goto label_15fabc;
        case 0x15fac0u: goto label_15fac0;
        case 0x15fac4u: goto label_15fac4;
        case 0x15fac8u: goto label_15fac8;
        case 0x15faccu: goto label_15facc;
        case 0x15fad0u: goto label_15fad0;
        case 0x15fad4u: goto label_15fad4;
        case 0x15fad8u: goto label_15fad8;
        case 0x15fadcu: goto label_15fadc;
        case 0x15fae0u: goto label_15fae0;
        case 0x15fae4u: goto label_15fae4;
        case 0x15fae8u: goto label_15fae8;
        case 0x15faecu: goto label_15faec;
        case 0x15faf0u: goto label_15faf0;
        case 0x15faf4u: goto label_15faf4;
        case 0x15faf8u: goto label_15faf8;
        case 0x15fafcu: goto label_15fafc;
        case 0x15fb00u: goto label_15fb00;
        case 0x15fb04u: goto label_15fb04;
        case 0x15fb08u: goto label_15fb08;
        case 0x15fb0cu: goto label_15fb0c;
        case 0x15fb10u: goto label_15fb10;
        case 0x15fb14u: goto label_15fb14;
        case 0x15fb18u: goto label_15fb18;
        case 0x15fb1cu: goto label_15fb1c;
        case 0x15fb20u: goto label_15fb20;
        case 0x15fb24u: goto label_15fb24;
        case 0x15fb28u: goto label_15fb28;
        case 0x15fb2cu: goto label_15fb2c;
        case 0x15fb30u: goto label_15fb30;
        case 0x15fb34u: goto label_15fb34;
        case 0x15fb38u: goto label_15fb38;
        case 0x15fb3cu: goto label_15fb3c;
        case 0x15fb40u: goto label_15fb40;
        case 0x15fb44u: goto label_15fb44;
        case 0x15fb48u: goto label_15fb48;
        case 0x15fb4cu: goto label_15fb4c;
        case 0x15fb50u: goto label_15fb50;
        case 0x15fb54u: goto label_15fb54;
        case 0x15fb58u: goto label_15fb58;
        case 0x15fb5cu: goto label_15fb5c;
        case 0x15fb60u: goto label_15fb60;
        case 0x15fb64u: goto label_15fb64;
        case 0x15fb68u: goto label_15fb68;
        case 0x15fb6cu: goto label_15fb6c;
        case 0x15fb70u: goto label_15fb70;
        case 0x15fb74u: goto label_15fb74;
        case 0x15fb78u: goto label_15fb78;
        case 0x15fb7cu: goto label_15fb7c;
        case 0x15fb80u: goto label_15fb80;
        case 0x15fb84u: goto label_15fb84;
        case 0x15fb88u: goto label_15fb88;
        case 0x15fb8cu: goto label_15fb8c;
        case 0x15fb90u: goto label_15fb90;
        case 0x15fb94u: goto label_15fb94;
        case 0x15fb98u: goto label_15fb98;
        case 0x15fb9cu: goto label_15fb9c;
        case 0x15fba0u: goto label_15fba0;
        case 0x15fba4u: goto label_15fba4;
        case 0x15fba8u: goto label_15fba8;
        case 0x15fbacu: goto label_15fbac;
        case 0x15fbb0u: goto label_15fbb0;
        case 0x15fbb4u: goto label_15fbb4;
        case 0x15fbb8u: goto label_15fbb8;
        case 0x15fbbcu: goto label_15fbbc;
        case 0x15fbc0u: goto label_15fbc0;
        case 0x15fbc4u: goto label_15fbc4;
        case 0x15fbc8u: goto label_15fbc8;
        case 0x15fbccu: goto label_15fbcc;
        case 0x15fbd0u: goto label_15fbd0;
        case 0x15fbd4u: goto label_15fbd4;
        case 0x15fbd8u: goto label_15fbd8;
        case 0x15fbdcu: goto label_15fbdc;
        case 0x15fbe0u: goto label_15fbe0;
        case 0x15fbe4u: goto label_15fbe4;
        case 0x15fbe8u: goto label_15fbe8;
        case 0x15fbecu: goto label_15fbec;
        case 0x15fbf0u: goto label_15fbf0;
        case 0x15fbf4u: goto label_15fbf4;
        case 0x15fbf8u: goto label_15fbf8;
        case 0x15fbfcu: goto label_15fbfc;
        case 0x15fc00u: goto label_15fc00;
        case 0x15fc04u: goto label_15fc04;
        case 0x15fc08u: goto label_15fc08;
        case 0x15fc0cu: goto label_15fc0c;
        case 0x15fc10u: goto label_15fc10;
        case 0x15fc14u: goto label_15fc14;
        case 0x15fc18u: goto label_15fc18;
        case 0x15fc1cu: goto label_15fc1c;
        case 0x15fc20u: goto label_15fc20;
        case 0x15fc24u: goto label_15fc24;
        case 0x15fc28u: goto label_15fc28;
        case 0x15fc2cu: goto label_15fc2c;
        case 0x15fc30u: goto label_15fc30;
        case 0x15fc34u: goto label_15fc34;
        case 0x15fc38u: goto label_15fc38;
        case 0x15fc3cu: goto label_15fc3c;
        case 0x15fc40u: goto label_15fc40;
        case 0x15fc44u: goto label_15fc44;
        case 0x15fc48u: goto label_15fc48;
        case 0x15fc4cu: goto label_15fc4c;
        case 0x15fc50u: goto label_15fc50;
        case 0x15fc54u: goto label_15fc54;
        case 0x15fc58u: goto label_15fc58;
        case 0x15fc5cu: goto label_15fc5c;
        case 0x15fc60u: goto label_15fc60;
        case 0x15fc64u: goto label_15fc64;
        case 0x15fc68u: goto label_15fc68;
        case 0x15fc6cu: goto label_15fc6c;
        case 0x15fc70u: goto label_15fc70;
        case 0x15fc74u: goto label_15fc74;
        case 0x15fc78u: goto label_15fc78;
        case 0x15fc7cu: goto label_15fc7c;
        case 0x15fc80u: goto label_15fc80;
        case 0x15fc84u: goto label_15fc84;
        case 0x15fc88u: goto label_15fc88;
        case 0x15fc8cu: goto label_15fc8c;
        case 0x15fc90u: goto label_15fc90;
        case 0x15fc94u: goto label_15fc94;
        case 0x15fc98u: goto label_15fc98;
        case 0x15fc9cu: goto label_15fc9c;
        case 0x15fca0u: goto label_15fca0;
        case 0x15fca4u: goto label_15fca4;
        case 0x15fca8u: goto label_15fca8;
        case 0x15fcacu: goto label_15fcac;
        case 0x15fcb0u: goto label_15fcb0;
        case 0x15fcb4u: goto label_15fcb4;
        case 0x15fcb8u: goto label_15fcb8;
        case 0x15fcbcu: goto label_15fcbc;
        case 0x15fcc0u: goto label_15fcc0;
        case 0x15fcc4u: goto label_15fcc4;
        case 0x15fcc8u: goto label_15fcc8;
        case 0x15fcccu: goto label_15fccc;
        case 0x15fcd0u: goto label_15fcd0;
        case 0x15fcd4u: goto label_15fcd4;
        case 0x15fcd8u: goto label_15fcd8;
        case 0x15fcdcu: goto label_15fcdc;
        case 0x15fce0u: goto label_15fce0;
        case 0x15fce4u: goto label_15fce4;
        case 0x15fce8u: goto label_15fce8;
        case 0x15fcecu: goto label_15fcec;
        case 0x15fcf0u: goto label_15fcf0;
        case 0x15fcf4u: goto label_15fcf4;
        case 0x15fcf8u: goto label_15fcf8;
        case 0x15fcfcu: goto label_15fcfc;
        case 0x15fd00u: goto label_15fd00;
        case 0x15fd04u: goto label_15fd04;
        case 0x15fd08u: goto label_15fd08;
        case 0x15fd0cu: goto label_15fd0c;
        default: return;
    }

label_15f540:
    // 0x15f540: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15f540u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15f544:
    // 0x15f544: 0x12a5821  addu        $t3, $t1, $t2
    ctx->pc = 0x15f544u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
label_15f548:
    // 0x15f548: 0x256c0010  addiu       $t4, $t3, 0x10
    ctx->pc = 0x15f548u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 11), 16));
label_15f54c:
    // 0x15f54c: 0x0  nop
    ctx->pc = 0x15f54cu;
    // NOP
label_15f550:
    // 0x15f550: 0x912d000d  lbu         $t5, 0xD($t1)
    ctx->pc = 0x15f550u;
    SET_GPR_ZE32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 13)));
label_15f554:
    // 0x15f554: 0x15a00004  bnez        $t5, . + 4 + (0x4 << 2)
label_15f558:
    if (ctx->pc == 0x15F558u) {
        ctx->pc = 0x15F55Cu;
        goto label_15f55c;
    }
    ctx->pc = 0x15F554u;
    {
        const bool branch_taken_0x15f554 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        if (branch_taken_0x15f554) {
            ctx->pc = 0x15F568u;
            goto label_15f568;
        }
    }
    ctx->pc = 0x15F55Cu;
label_15f55c:
    // 0x15f55c: 0x8d2d0000  lw          $t5, 0x0($t1)
    ctx->pc = 0x15f55cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_15f560:
    // 0x15f560: 0x11a0003c  beqz        $t5, . + 4 + (0x3C << 2)
label_15f564:
    if (ctx->pc == 0x15F564u) {
        ctx->pc = 0x15F568u;
        goto label_15f568;
    }
    ctx->pc = 0x15F560u;
    {
        const bool branch_taken_0x15f560 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        if (branch_taken_0x15f560) {
            ctx->pc = 0x15F654u;
            goto label_15f654;
        }
    }
    ctx->pc = 0x15F568u;
label_15f568:
    // 0x15f568: 0x8f8d8590  lw          $t5, -0x7A70($gp)
    ctx->pc = 0x15f568u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
label_15f56c:
    // 0x15f56c: 0x31ad0020  andi        $t5, $t5, 0x20
    ctx->pc = 0x15f56cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)32);
label_15f570:
    // 0x15f570: 0x15a00020  bnez        $t5, . + 4 + (0x20 << 2)
label_15f574:
    if (ctx->pc == 0x15F574u) {
        ctx->pc = 0x15F578u;
        goto label_15f578;
    }
    ctx->pc = 0x15F570u;
    {
        const bool branch_taken_0x15f570 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        if (branch_taken_0x15f570) {
            ctx->pc = 0x15F5F4u;
            goto label_15f5f4;
        }
    }
    ctx->pc = 0x15F578u;
label_15f578:
    // 0x15f578: 0x8d2d0000  lw          $t5, 0x0($t1)
    ctx->pc = 0x15f578u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_15f57c:
    // 0x15f57c: 0x11a0001d  beqz        $t5, . + 4 + (0x1D << 2)
label_15f580:
    if (ctx->pc == 0x15F580u) {
        ctx->pc = 0x15F584u;
        goto label_15f584;
    }
    ctx->pc = 0x15F57Cu;
    {
        const bool branch_taken_0x15f57c = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        if (branch_taken_0x15f57c) {
            ctx->pc = 0x15F5F4u;
            goto label_15f5f4;
        }
    }
    ctx->pc = 0x15F584u;
label_15f584:
    // 0x15f584: 0x912d000e  lbu         $t5, 0xE($t1)
    ctx->pc = 0x15f584u;
    SET_GPR_ZE32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 14)));
label_15f588:
    // 0x15f588: 0x14ed001a  bne         $a3, $t5, . + 4 + (0x1A << 2)
label_15f58c:
    if (ctx->pc == 0x15F58Cu) {
        ctx->pc = 0x15F590u;
        goto label_15f590;
    }
    ctx->pc = 0x15F588u;
    {
        const bool branch_taken_0x15f588 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 13));
        if (branch_taken_0x15f588) {
            ctx->pc = 0x15F5F4u;
            goto label_15f5f4;
        }
    }
    ctx->pc = 0x15F590u;
label_15f590:
    // 0x15f590: 0xc5600010  lwc1        $f0, 0x10($t3)
    ctx->pc = 0x15f590u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_15f594:
    // 0x15f594: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x15f594u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_15f598:
    // 0x15f598: 0x0  nop
    ctx->pc = 0x15f598u;
    // NOP
label_15f59c:
    // 0x15f59c: 0x45000008  bc1f        . + 4 + (0x8 << 2)
label_15f5a0:
    if (ctx->pc == 0x15F5A0u) {
        ctx->pc = 0x15F5A4u;
        goto label_15f5a4;
    }
    ctx->pc = 0x15F59Cu;
    {
        const bool branch_taken_0x15f59c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x15f59c) {
            ctx->pc = 0x15F5C0u;
            goto label_15f5c0;
        }
    }
    ctx->pc = 0x15F5A4u;
label_15f5a4:
    // 0x15f5a4: 0xc5600014  lwc1        $f0, 0x14($t3)
    ctx->pc = 0x15f5a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_15f5a8:
    // 0x15f5a8: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x15f5a8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_15f5ac:
    // 0x15f5ac: 0x0  nop
    ctx->pc = 0x15f5acu;
    // NOP
label_15f5b0:
    // 0x15f5b0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_15f5b4:
    if (ctx->pc == 0x15F5B4u) {
        ctx->pc = 0x15F5B8u;
        goto label_15f5b8;
    }
    ctx->pc = 0x15F5B0u;
    {
        const bool branch_taken_0x15f5b0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x15f5b0) {
            ctx->pc = 0x15F5C0u;
            goto label_15f5c0;
        }
    }
    ctx->pc = 0x15F5B8u;
label_15f5b8:
    // 0x15f5b8: 0x1000000e  b           . + 4 + (0xE << 2)
label_15f5bc:
    if (ctx->pc == 0x15F5BCu) {
        ctx->pc = 0x15F5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F5B8u;
        // 0x15f5bc: 0xa50000c8  sh          $zero, 0xC8($t0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 8), 200), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F5C0u;
        goto label_15f5c0;
    }
    ctx->pc = 0x15F5B8u;
    {
        const bool branch_taken_0x15f5b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15F5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F5B8u;
        // 0x15f5bc: 0xa50000c8  sh          $zero, 0xC8($t0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 8), 200), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f5b8) {
            ctx->pc = 0x15F5F4u;
            goto label_15f5f4;
        }
    }
    ctx->pc = 0x15F5C0u;
label_15f5c0:
    // 0x15f5c0: 0x850d00ca  lh          $t5, 0xCA($t0)
    ctx->pc = 0x15f5c0u;
    SET_GPR_S32(ctx, 13, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 202)));
label_15f5c4:
    // 0x15f5c4: 0x5a10009  bgez        $t5, . + 4 + (0x9 << 2)
label_15f5c8:
    if (ctx->pc == 0x15F5C8u) {
        ctx->pc = 0x15F5CCu;
        goto label_15f5cc;
    }
    ctx->pc = 0x15F5C4u;
    {
        const bool branch_taken_0x15f5c4 = (GPR_S32(ctx, 13) >= 0);
        if (branch_taken_0x15f5c4) {
            ctx->pc = 0x15F5ECu;
            goto label_15f5ec;
        }
    }
    ctx->pc = 0x15F5CCu;
label_15f5cc:
    // 0x15f5cc: 0x25ad0001  addiu       $t5, $t5, 0x1
    ctx->pc = 0x15f5ccu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
label_15f5d0:
    // 0x15f5d0: 0xa50d00ca  sh          $t5, 0xCA($t0)
    ctx->pc = 0x15f5d0u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 202), (uint16_t)GPR_U32(ctx, 13));
label_15f5d4:
    // 0x15f5d4: 0xa50000c8  sh          $zero, 0xC8($t0)
    ctx->pc = 0x15f5d4u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 200), (uint16_t)GPR_U32(ctx, 0));
label_15f5d8:
    // 0x15f5d8: 0xc5800000  lwc1        $f0, 0x0($t4)
    ctx->pc = 0x15f5d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_15f5dc:
    // 0x15f5dc: 0xe50000c0  swc1        $f0, 0xC0($t0)
    ctx->pc = 0x15f5dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 192), bits); }
label_15f5e0:
    // 0x15f5e0: 0xc5600014  lwc1        $f0, 0x14($t3)
    ctx->pc = 0x15f5e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_15f5e4:
    // 0x15f5e4: 0x10000003  b           . + 4 + (0x3 << 2)
label_15f5e8:
    if (ctx->pc == 0x15F5E8u) {
        ctx->pc = 0x15F5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F5E4u;
        // 0x15f5e8: 0xe50000c4  swc1        $f0, 0xC4($t0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 196), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F5ECu;
        goto label_15f5ec;
    }
    ctx->pc = 0x15F5E4u;
    {
        const bool branch_taken_0x15f5e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15F5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F5E4u;
        // 0x15f5e8: 0xe50000c4  swc1        $f0, 0xC4($t0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 196), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f5e4) {
            ctx->pc = 0x15F5F4u;
            goto label_15f5f4;
        }
    }
    ctx->pc = 0x15F5ECu;
label_15f5ec:
    // 0x15f5ec: 0x0  nop
    ctx->pc = 0x15f5ecu;
    // NOP
label_15f5f0:
    // 0x15f5f0: 0xa50300c8  sh          $v1, 0xC8($t0)
    ctx->pc = 0x15f5f0u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 200), (uint16_t)GPR_U32(ctx, 3));
label_15f5f4:
    // 0x15f5f4: 0x0  nop
    ctx->pc = 0x15f5f4u;
    // NOP
label_15f5f8:
    // 0x15f5f8: 0x850d00c8  lh          $t5, 0xC8($t0)
    ctx->pc = 0x15f5f8u;
    SET_GPR_S32(ctx, 13, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 200)));
label_15f5fc:
    // 0x15f5fc: 0x11a0001b  beqz        $t5, . + 4 + (0x1B << 2)
label_15f600:
    if (ctx->pc == 0x15F600u) {
        ctx->pc = 0x15F604u;
        goto label_15f604;
    }
    ctx->pc = 0x15F5FCu;
    {
        const bool branch_taken_0x15f5fc = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        if (branch_taken_0x15f5fc) {
            ctx->pc = 0x15F66Cu;
            goto label_15f66c;
        }
    }
    ctx->pc = 0x15F604u;
label_15f604:
    // 0x15f604: 0x850d00ca  lh          $t5, 0xCA($t0)
    ctx->pc = 0x15f604u;
    SET_GPR_S32(ctx, 13, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 202)));
label_15f608:
    // 0x15f608: 0x25ad0001  addiu       $t5, $t5, 0x1
    ctx->pc = 0x15f608u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
label_15f60c:
    // 0x15f60c: 0x1ae001a  div         $zero, $t5, $t6
    ctx->pc = 0x15f60cu;
    { int32_t divisor = GPR_S32(ctx, 14);    int32_t dividend = GPR_S32(ctx, 13);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_15f610:
    // 0x15f610: 0x0  nop
    ctx->pc = 0x15f610u;
    // NOP
label_15f614:
    // 0x15f614: 0x0  nop
    ctx->pc = 0x15f614u;
    // NOP
label_15f618:
    // 0x15f618: 0x6810  mfhi        $t5
    ctx->pc = 0x15f618u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_15f61c:
    // 0x15f61c: 0x31ad00ff  andi        $t5, $t5, 0xFF
    ctx->pc = 0x15f61cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)255);
label_15f620:
    // 0x15f620: 0xa50d00ca  sh          $t5, 0xCA($t0)
    ctx->pc = 0x15f620u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 202), (uint16_t)GPR_U32(ctx, 13));
label_15f624:
    // 0x15f624: 0x8d2d0000  lw          $t5, 0x0($t1)
    ctx->pc = 0x15f624u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_15f628:
    // 0x15f628: 0x11a00004  beqz        $t5, . + 4 + (0x4 << 2)
label_15f62c:
    if (ctx->pc == 0x15F62Cu) {
        ctx->pc = 0x15F630u;
        goto label_15f630;
    }
    ctx->pc = 0x15F628u;
    {
        const bool branch_taken_0x15f628 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        if (branch_taken_0x15f628) {
            ctx->pc = 0x15F63Cu;
            goto label_15f63c;
        }
    }
    ctx->pc = 0x15F630u;
label_15f630:
    // 0x15f630: 0x912d000e  lbu         $t5, 0xE($t1)
    ctx->pc = 0x15f630u;
    SET_GPR_ZE32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 14)));
label_15f634:
    // 0x15f634: 0x10ed000d  beq         $a3, $t5, . + 4 + (0xD << 2)
label_15f638:
    if (ctx->pc == 0x15F638u) {
        ctx->pc = 0x15F63Cu;
        goto label_15f63c;
    }
    ctx->pc = 0x15F634u;
    {
        const bool branch_taken_0x15f634 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 13));
        if (branch_taken_0x15f634) {
            ctx->pc = 0x15F66Cu;
            goto label_15f66c;
        }
    }
    ctx->pc = 0x15F63Cu;
label_15f63c:
    // 0x15f63c: 0x0  nop
    ctx->pc = 0x15f63cu;
    // NOP
label_15f640:
    // 0x15f640: 0x850d00ca  lh          $t5, 0xCA($t0)
    ctx->pc = 0x15f640u;
    SET_GPR_S32(ctx, 13, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 202)));
label_15f644:
    // 0x15f644: 0x15a00009  bnez        $t5, . + 4 + (0x9 << 2)
label_15f648:
    if (ctx->pc == 0x15F648u) {
        ctx->pc = 0x15F64Cu;
        goto label_15f64c;
    }
    ctx->pc = 0x15F644u;
    {
        const bool branch_taken_0x15f644 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        if (branch_taken_0x15f644) {
            ctx->pc = 0x15F66Cu;
            goto label_15f66c;
        }
    }
    ctx->pc = 0x15F64Cu;
label_15f64c:
    // 0x15f64c: 0x10000007  b           . + 4 + (0x7 << 2)
label_15f650:
    if (ctx->pc == 0x15F650u) {
        ctx->pc = 0x15F650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F64Cu;
        // 0x15f650: 0xa50000c8  sh          $zero, 0xC8($t0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 8), 200), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F654u;
        goto label_15f654;
    }
    ctx->pc = 0x15F64Cu;
    {
        const bool branch_taken_0x15f64c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15F650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F64Cu;
        // 0x15f650: 0xa50000c8  sh          $zero, 0xC8($t0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 8), 200), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f64c) {
            ctx->pc = 0x15F66Cu;
            goto label_15f66c;
        }
    }
    ctx->pc = 0x15F654u;
label_15f654:
    // 0x15f654: 0x0  nop
    ctx->pc = 0x15f654u;
    // NOP
label_15f658:
    // 0x15f658: 0x850d00c8  lh          $t5, 0xC8($t0)
    ctx->pc = 0x15f658u;
    SET_GPR_S32(ctx, 13, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 200)));
label_15f65c:
    // 0x15f65c: 0x11a00003  beqz        $t5, . + 4 + (0x3 << 2)
label_15f660:
    if (ctx->pc == 0x15F660u) {
        ctx->pc = 0x15F664u;
        goto label_15f664;
    }
    ctx->pc = 0x15F65Cu;
    {
        const bool branch_taken_0x15f65c = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        if (branch_taken_0x15f65c) {
            ctx->pc = 0x15F66Cu;
            goto label_15f66c;
        }
    }
    ctx->pc = 0x15F664u;
label_15f664:
    // 0x15f664: 0xa50000c8  sh          $zero, 0xC8($t0)
    ctx->pc = 0x15f664u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 200), (uint16_t)GPR_U32(ctx, 0));
label_15f668:
    // 0x15f668: 0xa50000ca  sh          $zero, 0xCA($t0)
    ctx->pc = 0x15f668u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 202), (uint16_t)GPR_U32(ctx, 0));
label_15f66c:
    // 0x15f66c: 0x0  nop
    ctx->pc = 0x15f66cu;
    // NOP
label_15f670:
    // 0x15f670: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x15f670u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_15f674:
    // 0x15f674: 0x28ad0003  slti        $t5, $a1, 0x3
    ctx->pc = 0x15f674u;
    SET_GPR_U64(ctx, 13, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
label_15f678:
    // 0x15f678: 0x15a0ffb4  bnez        $t5, . + 4 + (-0x4C << 2)
label_15f67c:
    if (ctx->pc == 0x15F67Cu) {
        ctx->pc = 0x15F67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F678u;
        // 0x15f67c: 0x250800d0  addiu       $t0, $t0, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F680u;
        goto label_15f680;
    }
    ctx->pc = 0x15F678u;
    {
        const bool branch_taken_0x15f678 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        ctx->pc = 0x15F67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F678u;
        // 0x15f67c: 0x250800d0  addiu       $t0, $t0, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 208));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f678) {
            ctx->pc = 0x15F54Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15f54c;
        }
    }
    ctx->pc = 0x15F680u;
label_15f680:
    // 0x15f680: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x15f680u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_15f684:
    // 0x15f684: 0x28c50008  slti        $a1, $a2, 0x8
    ctx->pc = 0x15f684u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)8) ? 1 : 0);
label_15f688:
    // 0x15f688: 0x14a0ffad  bnez        $a1, . + 4 + (-0x53 << 2)
label_15f68c:
    if (ctx->pc == 0x15F68Cu) {
        ctx->pc = 0x15F68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F688u;
        // 0x15f68c: 0x254a0008  addiu       $t2, $t2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F690u;
        goto label_15f690;
    }
    ctx->pc = 0x15F688u;
    {
        const bool branch_taken_0x15f688 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x15F68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F688u;
        // 0x15f68c: 0x254a0008  addiu       $t2, $t2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f688) {
            ctx->pc = 0x15F540u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15f540;
        }
    }
    ctx->pc = 0x15F690u;
label_15f690:
    // 0x15f690: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x15f690u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_15f694:
    // 0x15f694: 0x28e50002  slti        $a1, $a3, 0x2
    ctx->pc = 0x15f694u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)2) ? 1 : 0);
label_15f698:
    // 0x15f698: 0x14a0ffa8  bnez        $a1, . + 4 + (-0x58 << 2)
label_15f69c:
    if (ctx->pc == 0x15F69Cu) {
        ctx->pc = 0x15F69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F698u;
        // 0x15f69c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F6A0u;
        goto label_15f6a0;
    }
    ctx->pc = 0x15F698u;
    {
        const bool branch_taken_0x15f698 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x15F69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F698u;
        // 0x15f69c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f698) {
            ctx->pc = 0x15F53Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x15f53c; return; }
        }
    }
    ctx->pc = 0x15F6A0u;
label_15f6a0:
    // 0x15f6a0: 0x8f838590  lw          $v1, -0x7A70($gp)
    ctx->pc = 0x15f6a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
label_15f6a4:
    // 0x15f6a4: 0x306300c0  andi        $v1, $v1, 0xC0
    ctx->pc = 0x15f6a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)192);
label_15f6a8:
    // 0x15f6a8: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
label_15f6ac:
    if (ctx->pc == 0x15F6ACu) {
        ctx->pc = 0x15F6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F6A8u;
        // 0x15f6ac: 0x3c010001  lui         $at, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F6B0u;
        goto label_15f6b0;
    }
    ctx->pc = 0x15F6A8u;
    {
        const bool branch_taken_0x15f6a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x15F6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F6A8u;
        // 0x15f6ac: 0x3c010001  lui         $at, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f6a8) {
            ctx->pc = 0x15F708u;
            goto label_15f708;
        }
    }
    ctx->pc = 0x15F6B0u;
label_15f6b0:
    // 0x15f6b0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15f6b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15f6b4:
    // 0x15f6b4: 0x34214f10  ori         $at, $at, 0x4F10
    ctx->pc = 0x15f6b4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20240);
label_15f6b8:
    // 0x15f6b8: 0x812021  addu        $a0, $a0, $at
    ctx->pc = 0x15f6b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
label_15f6bc:
    // 0x15f6bc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x15f6bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15f6c0:
    // 0x15f6c0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x15f6c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15f6c4:
    // 0x15f6c4: 0x0  nop
    ctx->pc = 0x15f6c4u;
    // NOP
label_15f6c8:
    // 0x15f6c8: 0xa48000c8  sh          $zero, 0xC8($a0)
    ctx->pc = 0x15f6c8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 200), (uint16_t)GPR_U32(ctx, 0));
label_15f6cc:
    // 0x15f6cc: 0x0  nop
    ctx->pc = 0x15f6ccu;
    // NOP
label_15f6d0:
    // 0x15f6d0: 0x0  nop
    ctx->pc = 0x15f6d0u;
    // NOP
label_15f6d4:
    // 0x15f6d4: 0x0  nop
    ctx->pc = 0x15f6d4u;
    // NOP
label_15f6d8:
    // 0x15f6d8: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x15f6d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_15f6dc:
    // 0x15f6dc: 0x28e30003  slti        $v1, $a3, 0x3
    ctx->pc = 0x15f6dcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)3) ? 1 : 0);
label_15f6e0:
    // 0x15f6e0: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
label_15f6e4:
    if (ctx->pc == 0x15F6E4u) {
        ctx->pc = 0x15F6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F6E0u;
        // 0x15f6e4: 0x248400d0  addiu       $a0, $a0, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F6E8u;
        goto label_15f6e8;
    }
    ctx->pc = 0x15F6E0u;
    {
        const bool branch_taken_0x15f6e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15F6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F6E0u;
        // 0x15f6e4: 0x248400d0  addiu       $a0, $a0, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 208));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f6e0) {
            ctx->pc = 0x15F6C4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15f6c4;
        }
    }
    ctx->pc = 0x15F6E8u;
label_15f6e8:
    // 0x15f6e8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x15f6e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_15f6ec:
    // 0x15f6ec: 0x28c30008  slti        $v1, $a2, 0x8
    ctx->pc = 0x15f6ecu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)8) ? 1 : 0);
label_15f6f0:
    // 0x15f6f0: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
label_15f6f4:
    if (ctx->pc == 0x15F6F4u) {
        ctx->pc = 0x15F6F8u;
        goto label_15f6f8;
    }
    ctx->pc = 0x15F6F0u;
    {
        const bool branch_taken_0x15f6f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x15f6f0) {
            ctx->pc = 0x15F6C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15f6c0;
        }
    }
    ctx->pc = 0x15F6F8u;
label_15f6f8:
    // 0x15f6f8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x15f6f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_15f6fc:
    // 0x15f6fc: 0x28a30002  slti        $v1, $a1, 0x2
    ctx->pc = 0x15f6fcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
label_15f700:
    // 0x15f700: 0x1460ffef  bnez        $v1, . + 4 + (-0x11 << 2)
label_15f704:
    if (ctx->pc == 0x15F704u) {
        ctx->pc = 0x15F704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F700u;
        // 0x15f704: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F708u;
        goto label_15f708;
    }
    ctx->pc = 0x15F700u;
    {
        const bool branch_taken_0x15f700 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15F704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F700u;
        // 0x15f704: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f700) {
            ctx->pc = 0x15F6C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15f6c0;
        }
    }
    ctx->pc = 0x15F708u;
label_15f708:
    // 0x15f708: 0x3e00008  jr          $ra
label_15f70c:
    if (ctx->pc == 0x15F70Cu) {
        ctx->pc = 0x15F710u;
        goto label_15f710;
    }
    ctx->pc = 0x15F708u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15F708u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15F710u;
label_15f710:
    // 0x15f710: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x15f710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_15f714:
    // 0x15f714: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x15f714u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_15f718:
    // 0x15f718: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x15f718u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_15f71c:
    // 0x15f71c: 0x34424c70  ori         $v0, $v0, 0x4C70
    ctx->pc = 0x15f71cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)19568);
label_15f720:
    // 0x15f720: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x15f720u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_15f724:
    // 0x15f724: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x15f724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_15f728:
    // 0x15f728: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x15f728u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_15f72c:
    // 0x15f72c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15f72cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_15f730:
    // 0x15f730: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15f730u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_15f734:
    // 0x15f734: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x15f734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_15f738:
    // 0x15f738: 0x9042023a  lbu         $v0, 0x23A($v0)
    ctx->pc = 0x15f738u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 570)));
label_15f73c:
    // 0x15f73c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_15f740:
    if (ctx->pc == 0x15F740u) {
        ctx->pc = 0x15F740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F73Cu;
        // 0x15f740: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F744u;
        goto label_15f744;
    }
    ctx->pc = 0x15F73Cu;
    {
        const bool branch_taken_0x15f73c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15F740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F73Cu;
        // 0x15f740: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f73c) {
            ctx->pc = 0x15F758u;
            goto label_15f758;
        }
    }
    ctx->pc = 0x15F744u;
label_15f744:
    // 0x15f744: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x15f744u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_15f748:
    // 0x15f748: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15f748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15f74c:
    // 0x15f74c: 0x2610821  addu        $at, $s3, $at
    ctx->pc = 0x15f74cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 1)));
label_15f750:
    // 0x15f750: 0x10000004  b           . + 4 + (0x4 << 2)
label_15f754:
    if (ctx->pc == 0x15F754u) {
        ctx->pc = 0x15F754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F750u;
        // 0x15f754: 0xa0224c79  sb          $v0, 0x4C79($at) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 1), 19577), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F758u;
        goto label_15f758;
    }
    ctx->pc = 0x15F750u;
    {
        const bool branch_taken_0x15f750 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15F754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F750u;
        // 0x15f754: 0xa0224c79  sb          $v0, 0x4C79($at) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 1), 19577), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f750) {
            ctx->pc = 0x15F764u;
            goto label_15f764;
        }
    }
    ctx->pc = 0x15F758u;
label_15f758:
    // 0x15f758: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x15f758u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_15f75c:
    // 0x15f75c: 0x2610821  addu        $at, $s3, $at
    ctx->pc = 0x15f75cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 1)));
label_15f760:
    // 0x15f760: 0xa0204c79  sb          $zero, 0x4C79($at)
    ctx->pc = 0x15f760u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 19577), (uint8_t)GPR_U32(ctx, 0));
label_15f764:
    // 0x15f764: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x15f764u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_15f768:
    // 0x15f768: 0x26724650  addiu       $s2, $s3, 0x4650
    ctx->pc = 0x15f768u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 18000));
label_15f76c:
    // 0x15f76c: 0x2610821  addu        $at, $s3, $at
    ctx->pc = 0x15f76cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 1)));
label_15f770:
    // 0x15f770: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x15f770u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15f774:
    // 0x15f774: 0xa0204c85  sb          $zero, 0x4C85($at)
    ctx->pc = 0x15f774u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 19589), (uint8_t)GPR_U32(ctx, 0));
label_15f778:
    // 0x15f778: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x15f778u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15f77c:
    // 0x15f77c: 0x0  nop
    ctx->pc = 0x15f77cu;
    // NOP
label_15f780:
    // 0x15f780: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x15f780u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_15f784:
    // 0x15f784: 0x10800030  beqz        $a0, . + 4 + (0x30 << 2)
label_15f788:
    if (ctx->pc == 0x15F788u) {
        ctx->pc = 0x15F78Cu;
        goto label_15f78c;
    }
    ctx->pc = 0x15F784u;
    {
        const bool branch_taken_0x15f784 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x15f784) {
            ctx->pc = 0x15F848u;
            goto label_15f848;
        }
    }
    ctx->pc = 0x15F78Cu;
label_15f78c:
    // 0x15f78c: 0x9082023a  lbu         $v0, 0x23A($a0)
    ctx->pc = 0x15f78cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 570)));
label_15f790:
    // 0x15f790: 0x1440002d  bnez        $v0, . + 4 + (0x2D << 2)
label_15f794:
    if (ctx->pc == 0x15F794u) {
        ctx->pc = 0x15F798u;
        goto label_15f798;
    }
    ctx->pc = 0x15F790u;
    {
        const bool branch_taken_0x15f790 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15f790) {
            ctx->pc = 0x15F848u;
            goto label_15f848;
        }
    }
    ctx->pc = 0x15F798u;
label_15f798:
    // 0x15f798: 0x90830218  lbu         $v1, 0x218($a0)
    ctx->pc = 0x15f798u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 536)));
label_15f79c:
    // 0x15f79c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x15f79cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_15f7a0:
    // 0x15f7a0: 0x90820219  lbu         $v0, 0x219($a0)
    ctx->pc = 0x15f7a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 537)));
label_15f7a4:
    // 0x15f7a4: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x15f7a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_15f7a8:
    // 0x15f7a8: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x15f7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_15f7ac:
    // 0x15f7ac: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x15f7acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_15f7b0:
    // 0x15f7b0: 0xc04494c  jal         func_112530
label_15f7b4:
    if (ctx->pc == 0x15F7B4u) {
        ctx->pc = 0x15F7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F7B0u;
        // 0x15f7b4: 0x24450001  addiu       $a1, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F7B8u;
        goto label_15f7b8;
    }
    ctx->pc = 0x15F7B0u;
    SET_GPR_U32(ctx, 31, 0x15F7B8u);
    ctx->pc = 0x15F7B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15F7B0u;
    // 0x15f7b4: 0x24450001  addiu       $a1, $v0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112530u, 0x15F7B0u, 0x15F7B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F7B8u;
label_15f7b8:
    // 0x15f7b8: 0x14400023  bnez        $v0, . + 4 + (0x23 << 2)
label_15f7bc:
    if (ctx->pc == 0x15F7BCu) {
        ctx->pc = 0x15F7C0u;
        goto label_15f7c0;
    }
    ctx->pc = 0x15F7B8u;
    {
        const bool branch_taken_0x15f7b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15f7b8) {
            ctx->pc = 0x15F848u;
            goto label_15f848;
        }
    }
    ctx->pc = 0x15F7C0u;
label_15f7c0:
    // 0x15f7c0: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x15f7c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_15f7c4:
    // 0x15f7c4: 0x3c024bbe  lui         $v0, 0x4BBE
    ctx->pc = 0x15f7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19390 << 16));
label_15f7c8:
    // 0x15f7c8: 0x3442bc20  ori         $v0, $v0, 0xBC20
    ctx->pc = 0x15f7c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)48160);
label_15f7cc:
    // 0x15f7cc: 0xc6630000  lwc1        $f3, 0x0($s3)
    ctx->pc = 0x15f7ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_15f7d0:
    // 0x15f7d0: 0xc6610008  lwc1        $f1, 0x8($s3)
    ctx->pc = 0x15f7d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_15f7d4:
    // 0x15f7d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15f7d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_15f7d8:
    // 0x15f7d8: 0xc4640150  lwc1        $f4, 0x150($v1)
    ctx->pc = 0x15f7d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_15f7dc:
    // 0x15f7dc: 0xc4620158  lwc1        $f2, 0x158($v1)
    ctx->pc = 0x15f7dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_15f7e0:
    // 0x15f7e0: 0x460320c1  sub.s       $f3, $f4, $f3
    ctx->pc = 0x15f7e0u;
    ctx->f[3] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
label_15f7e4:
    // 0x15f7e4: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x15f7e4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_15f7e8:
    // 0x15f7e8: 0x4603181a  mula.s      $f3, $f3
    ctx->pc = 0x15f7e8u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[3], ctx->f[3]));
label_15f7ec:
    // 0x15f7ec: 0x4601085c  madd.s      $f1, $f1, $f1
    ctx->pc = 0x15f7ecu;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[1], ctx->f[1]));
label_15f7f0:
    // 0x15f7f0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x15f7f0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_15f7f4:
    // 0x15f7f4: 0x0  nop
    ctx->pc = 0x15f7f4u;
    // NOP
label_15f7f8:
    // 0x15f7f8: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_15f7fc:
    if (ctx->pc == 0x15F7FCu) {
        ctx->pc = 0x15F7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F7F8u;
        // 0x15f7fc: 0xe6410004  swc1        $f1, 0x4($s2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F800u;
        goto label_15f800;
    }
    ctx->pc = 0x15F7F8u;
    {
        const bool branch_taken_0x15f7f8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x15F7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F7F8u;
        // 0x15f7fc: 0xe6410004  swc1        $f1, 0x4($s2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f7f8) {
            ctx->pc = 0x15F808u;
            goto label_15f808;
        }
    }
    ctx->pc = 0x15F800u;
label_15f800:
    // 0x15f800: 0x10000012  b           . + 4 + (0x12 << 2)
label_15f804:
    if (ctx->pc == 0x15F804u) {
        ctx->pc = 0x15F804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F800u;
        // 0x15f804: 0xa2400009  sb          $zero, 0x9($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 9), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F808u;
        goto label_15f808;
    }
    ctx->pc = 0x15F800u;
    {
        const bool branch_taken_0x15f800 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15F804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F800u;
        // 0x15f804: 0xa2400009  sb          $zero, 0x9($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 9), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f800) {
            ctx->pc = 0x15F84Cu;
            goto label_15f84c;
        }
    }
    ctx->pc = 0x15F808u;
label_15f808:
    // 0x15f808: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15f808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15f80c:
    // 0x15f80c: 0xa2420009  sb          $v0, 0x9($s2)
    ctx->pc = 0x15f80cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 9), (uint8_t)GPR_U32(ctx, 2));
label_15f810:
    // 0x15f810: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x15f810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_15f814:
    // 0x15f814: 0x90420232  lbu         $v0, 0x232($v0)
    ctx->pc = 0x15f814u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 562)));
label_15f818:
    // 0x15f818: 0x28410006  slti        $at, $v0, 0x6
    ctx->pc = 0x15f818u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)6) ? 1 : 0);
label_15f81c:
    // 0x15f81c: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
label_15f820:
    if (ctx->pc == 0x15F820u) {
        ctx->pc = 0x15F824u;
        goto label_15f824;
    }
    ctx->pc = 0x15F81Cu;
    {
        const bool branch_taken_0x15f81c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x15f81c) {
            ctx->pc = 0x15F84Cu;
            goto label_15f84c;
        }
    }
    ctx->pc = 0x15F824u;
label_15f824:
    // 0x15f824: 0x92430008  lbu         $v1, 0x8($s2)
    ctx->pc = 0x15f824u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 8)));
label_15f828:
    // 0x15f828: 0x24020078  addiu       $v0, $zero, 0x78
    ctx->pc = 0x15f828u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_15f82c:
    // 0x15f82c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x15f82cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_15f830:
    // 0x15f830: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x15f830u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_15f834:
    // 0x15f834: 0x0  nop
    ctx->pc = 0x15f834u;
    // NOP
label_15f838:
    // 0x15f838: 0x0  nop
    ctx->pc = 0x15f838u;
    // NOP
label_15f83c:
    // 0x15f83c: 0x1010  mfhi        $v0
    ctx->pc = 0x15f83cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_15f840:
    // 0x15f840: 0x10000002  b           . + 4 + (0x2 << 2)
label_15f844:
    if (ctx->pc == 0x15F844u) {
        ctx->pc = 0x15F844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F840u;
        // 0x15f844: 0xa2420008  sb          $v0, 0x8($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 8), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F848u;
        goto label_15f848;
    }
    ctx->pc = 0x15F840u;
    {
        const bool branch_taken_0x15f840 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15F844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F840u;
        // 0x15f844: 0xa2420008  sb          $v0, 0x8($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 8), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f840) {
            ctx->pc = 0x15F84Cu;
            goto label_15f84c;
        }
    }
    ctx->pc = 0x15F848u;
label_15f848:
    // 0x15f848: 0xa2400009  sb          $zero, 0x9($s2)
    ctx->pc = 0x15f848u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 9), (uint8_t)GPR_U32(ctx, 0));
label_15f84c:
    // 0x15f84c: 0x0  nop
    ctx->pc = 0x15f84cu;
    // NOP
label_15f850:
    // 0x15f850: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x15f850u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_15f854:
    // 0x15f854: 0x2a220008  slti        $v0, $s1, 0x8
    ctx->pc = 0x15f854u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)8) ? 1 : 0);
label_15f858:
    // 0x15f858: 0x1440ffc8  bnez        $v0, . + 4 + (-0x38 << 2)
label_15f85c:
    if (ctx->pc == 0x15F85Cu) {
        ctx->pc = 0x15F85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F858u;
        // 0x15f85c: 0x2652000c  addiu       $s2, $s2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F860u;
        goto label_15f860;
    }
    ctx->pc = 0x15F858u;
    {
        const bool branch_taken_0x15f858 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15F85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F858u;
        // 0x15f85c: 0x2652000c  addiu       $s2, $s2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f858) {
            ctx->pc = 0x15F77Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15f77c;
        }
    }
    ctx->pc = 0x15F860u;
label_15f860:
    // 0x15f860: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x15f860u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_15f864:
    // 0x15f864: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x15f864u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
label_15f868:
    // 0x15f868: 0x1440ffc4  bnez        $v0, . + 4 + (-0x3C << 2)
label_15f86c:
    if (ctx->pc == 0x15F86Cu) {
        ctx->pc = 0x15F86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F868u;
        // 0x15f86c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F870u;
        goto label_15f870;
    }
    ctx->pc = 0x15F868u;
    {
        const bool branch_taken_0x15f868 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15F86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F868u;
        // 0x15f86c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f868) {
            ctx->pc = 0x15F77Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15f77c;
        }
    }
    ctx->pc = 0x15F870u;
label_15f870:
    // 0x15f870: 0xc058db8  jal         func_1636E0
label_15f874:
    if (ctx->pc == 0x15F874u) {
        ctx->pc = 0x15F874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F870u;
        // 0x15f874: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F878u;
        goto label_15f878;
    }
    ctx->pc = 0x15F870u;
    SET_GPR_U32(ctx, 31, 0x15F878u);
    ctx->pc = 0x15F874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15F870u;
    // 0x15f874: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1636E0u;
    { ctx->pc = 0x1636e0; return; }
    ctx->pc = 0x15F878u;
label_15f878:
    // 0x15f878: 0x26704710  addiu       $s0, $s3, 0x4710
    ctx->pc = 0x15f878u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 18192));
label_15f87c:
    // 0x15f87c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x15f87cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15f880:
    // 0x15f880: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x15f880u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_15f884:
    // 0x15f884: 0x10800030  beqz        $a0, . + 4 + (0x30 << 2)
label_15f888:
    if (ctx->pc == 0x15F888u) {
        ctx->pc = 0x15F88Cu;
        goto label_15f88c;
    }
    ctx->pc = 0x15F884u;
    {
        const bool branch_taken_0x15f884 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x15f884) {
            ctx->pc = 0x15F948u;
            goto label_15f948;
        }
    }
    ctx->pc = 0x15F88Cu;
label_15f88c:
    // 0x15f88c: 0x9083023a  lbu         $v1, 0x23A($a0)
    ctx->pc = 0x15f88cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 570)));
label_15f890:
    // 0x15f890: 0x1460002d  bnez        $v1, . + 4 + (0x2D << 2)
label_15f894:
    if (ctx->pc == 0x15F894u) {
        ctx->pc = 0x15F898u;
        goto label_15f898;
    }
    ctx->pc = 0x15F890u;
    {
        const bool branch_taken_0x15f890 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x15f890) {
            ctx->pc = 0x15F948u;
            goto label_15f948;
        }
    }
    ctx->pc = 0x15F898u;
label_15f898:
    // 0x15f898: 0x90830218  lbu         $v1, 0x218($a0)
    ctx->pc = 0x15f898u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 536)));
label_15f89c:
    // 0x15f89c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x15f89cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_15f8a0:
    // 0x15f8a0: 0x90820219  lbu         $v0, 0x219($a0)
    ctx->pc = 0x15f8a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 537)));
label_15f8a4:
    // 0x15f8a4: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x15f8a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_15f8a8:
    // 0x15f8a8: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x15f8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_15f8ac:
    // 0x15f8ac: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x15f8acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_15f8b0:
    // 0x15f8b0: 0xc04494c  jal         func_112530
label_15f8b4:
    if (ctx->pc == 0x15F8B4u) {
        ctx->pc = 0x15F8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F8B0u;
        // 0x15f8b4: 0x24450001  addiu       $a1, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F8B8u;
        goto label_15f8b8;
    }
    ctx->pc = 0x15F8B0u;
    SET_GPR_U32(ctx, 31, 0x15F8B8u);
    ctx->pc = 0x15F8B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15F8B0u;
    // 0x15f8b4: 0x24450001  addiu       $a1, $v0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112530u, 0x15F8B0u, 0x15F8B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F8B8u;
label_15f8b8:
    // 0x15f8b8: 0x14400023  bnez        $v0, . + 4 + (0x23 << 2)
label_15f8bc:
    if (ctx->pc == 0x15F8BCu) {
        ctx->pc = 0x15F8C0u;
        goto label_15f8c0;
    }
    ctx->pc = 0x15F8B8u;
    {
        const bool branch_taken_0x15f8b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15f8b8) {
            ctx->pc = 0x15F948u;
            goto label_15f948;
        }
    }
    ctx->pc = 0x15F8C0u;
label_15f8c0:
    // 0x15f8c0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x15f8c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_15f8c4:
    // 0x15f8c4: 0x3c034bbe  lui         $v1, 0x4BBE
    ctx->pc = 0x15f8c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)19390 << 16));
label_15f8c8:
    // 0x15f8c8: 0x3463bc20  ori         $v1, $v1, 0xBC20
    ctx->pc = 0x15f8c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)48160);
label_15f8cc:
    // 0x15f8cc: 0xc6630000  lwc1        $f3, 0x0($s3)
    ctx->pc = 0x15f8ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_15f8d0:
    // 0x15f8d0: 0xc6610008  lwc1        $f1, 0x8($s3)
    ctx->pc = 0x15f8d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_15f8d4:
    // 0x15f8d4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x15f8d4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_15f8d8:
    // 0x15f8d8: 0xc4840150  lwc1        $f4, 0x150($a0)
    ctx->pc = 0x15f8d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_15f8dc:
    // 0x15f8dc: 0xc4820158  lwc1        $f2, 0x158($a0)
    ctx->pc = 0x15f8dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_15f8e0:
    // 0x15f8e0: 0x460320c1  sub.s       $f3, $f4, $f3
    ctx->pc = 0x15f8e0u;
    ctx->f[3] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
label_15f8e4:
    // 0x15f8e4: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x15f8e4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_15f8e8:
    // 0x15f8e8: 0x4603181a  mula.s      $f3, $f3
    ctx->pc = 0x15f8e8u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[3], ctx->f[3]));
label_15f8ec:
    // 0x15f8ec: 0x4601085c  madd.s      $f1, $f1, $f1
    ctx->pc = 0x15f8ecu;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[1], ctx->f[1]));
label_15f8f0:
    // 0x15f8f0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x15f8f0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_15f8f4:
    // 0x15f8f4: 0x0  nop
    ctx->pc = 0x15f8f4u;
    // NOP
label_15f8f8:
    // 0x15f8f8: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_15f8fc:
    if (ctx->pc == 0x15F8FCu) {
        ctx->pc = 0x15F8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F8F8u;
        // 0x15f8fc: 0xe6010004  swc1        $f1, 0x4($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F900u;
        goto label_15f900;
    }
    ctx->pc = 0x15F8F8u;
    {
        const bool branch_taken_0x15f8f8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x15F8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F8F8u;
        // 0x15f8fc: 0xe6010004  swc1        $f1, 0x4($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f8f8) {
            ctx->pc = 0x15F908u;
            goto label_15f908;
        }
    }
    ctx->pc = 0x15F900u;
label_15f900:
    // 0x15f900: 0x10000012  b           . + 4 + (0x12 << 2)
label_15f904:
    if (ctx->pc == 0x15F904u) {
        ctx->pc = 0x15F904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F900u;
        // 0x15f904: 0xa2000009  sb          $zero, 0x9($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 9), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F908u;
        goto label_15f908;
    }
    ctx->pc = 0x15F900u;
    {
        const bool branch_taken_0x15f900 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15F904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F900u;
        // 0x15f904: 0xa2000009  sb          $zero, 0x9($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 9), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f900) {
            ctx->pc = 0x15F94Cu;
            goto label_15f94c;
        }
    }
    ctx->pc = 0x15F908u;
label_15f908:
    // 0x15f908: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x15f908u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15f90c:
    // 0x15f90c: 0xa2030009  sb          $v1, 0x9($s0)
    ctx->pc = 0x15f90cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 9), (uint8_t)GPR_U32(ctx, 3));
label_15f910:
    // 0x15f910: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x15f910u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_15f914:
    // 0x15f914: 0x90630232  lbu         $v1, 0x232($v1)
    ctx->pc = 0x15f914u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 562)));
label_15f918:
    // 0x15f918: 0x28610006  slti        $at, $v1, 0x6
    ctx->pc = 0x15f918u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)6) ? 1 : 0);
label_15f91c:
    // 0x15f91c: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
label_15f920:
    if (ctx->pc == 0x15F920u) {
        ctx->pc = 0x15F924u;
        goto label_15f924;
    }
    ctx->pc = 0x15F91Cu;
    {
        const bool branch_taken_0x15f91c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x15f91c) {
            ctx->pc = 0x15F94Cu;
            goto label_15f94c;
        }
    }
    ctx->pc = 0x15F924u;
label_15f924:
    // 0x15f924: 0x92040008  lbu         $a0, 0x8($s0)
    ctx->pc = 0x15f924u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 8)));
label_15f928:
    // 0x15f928: 0x24030078  addiu       $v1, $zero, 0x78
    ctx->pc = 0x15f928u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_15f92c:
    // 0x15f92c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x15f92cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_15f930:
    // 0x15f930: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x15f930u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_15f934:
    // 0x15f934: 0x0  nop
    ctx->pc = 0x15f934u;
    // NOP
label_15f938:
    // 0x15f938: 0x0  nop
    ctx->pc = 0x15f938u;
    // NOP
label_15f93c:
    // 0x15f93c: 0x1810  mfhi        $v1
    ctx->pc = 0x15f93cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_15f940:
    // 0x15f940: 0x10000002  b           . + 4 + (0x2 << 2)
label_15f944:
    if (ctx->pc == 0x15F944u) {
        ctx->pc = 0x15F944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F940u;
        // 0x15f944: 0xa2030008  sb          $v1, 0x8($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F948u;
        goto label_15f948;
    }
    ctx->pc = 0x15F940u;
    {
        const bool branch_taken_0x15f940 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15F944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F940u;
        // 0x15f944: 0xa2030008  sb          $v1, 0x8($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f940) {
            ctx->pc = 0x15F94Cu;
            goto label_15f94c;
        }
    }
    ctx->pc = 0x15F948u;
label_15f948:
    // 0x15f948: 0xa2000009  sb          $zero, 0x9($s0)
    ctx->pc = 0x15f948u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 9), (uint8_t)GPR_U32(ctx, 0));
label_15f94c:
    // 0x15f94c: 0x0  nop
    ctx->pc = 0x15f94cu;
    // NOP
label_15f950:
    // 0x15f950: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x15f950u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_15f954:
    // 0x15f954: 0x2a230080  slti        $v1, $s1, 0x80
    ctx->pc = 0x15f954u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)128) ? 1 : 0);
label_15f958:
    // 0x15f958: 0x1460ffc9  bnez        $v1, . + 4 + (-0x37 << 2)
label_15f95c:
    if (ctx->pc == 0x15F95Cu) {
        ctx->pc = 0x15F95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F958u;
        // 0x15f95c: 0x2610000c  addiu       $s0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F960u;
        goto label_15f960;
    }
    ctx->pc = 0x15F958u;
    {
        const bool branch_taken_0x15f958 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15F95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F958u;
        // 0x15f95c: 0x2610000c  addiu       $s0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f958) {
            ctx->pc = 0x15F880u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15f880;
        }
    }
    ctx->pc = 0x15F960u;
label_15f960:
    // 0x15f960: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x15f960u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
label_15f964:
    // 0x15f964: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x15f964u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_15f968:
    // 0x15f968: 0x34a37720  ori         $v1, $a1, 0x7720
    ctx->pc = 0x15f968u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)30496);
label_15f96c:
    // 0x15f96c: 0x2610821  addu        $at, $s3, $at
    ctx->pc = 0x15f96cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 1)));
label_15f970:
    // 0x15f970: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x15f970u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
label_15f974:
    // 0x15f974: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x15f974u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_15f978:
    // 0x15f978: 0x8c274c70  lw          $a3, 0x4C70($at)
    ctx->pc = 0x15f978u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 19568)));
label_15f97c:
    // 0x15f97c: 0x10e00032  beqz        $a3, . + 4 + (0x32 << 2)
label_15f980:
    if (ctx->pc == 0x15F980u) {
        ctx->pc = 0x15F984u;
        goto label_15f984;
    }
    ctx->pc = 0x15F97Cu;
    {
        const bool branch_taken_0x15f97c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x15f97c) {
            ctx->pc = 0x15FA48u;
            goto label_15fa48;
        }
    }
    ctx->pc = 0x15F984u;
label_15f984:
    // 0x15f984: 0x90e3023a  lbu         $v1, 0x23A($a3)
    ctx->pc = 0x15f984u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 570)));
label_15f988:
    // 0x15f988: 0x1460002f  bnez        $v1, . + 4 + (0x2F << 2)
label_15f98c:
    if (ctx->pc == 0x15F98Cu) {
        ctx->pc = 0x15F98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F988u;
        // 0x15f98c: 0x3c010001  lui         $at, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F990u;
        goto label_15f990;
    }
    ctx->pc = 0x15F988u;
    {
        const bool branch_taken_0x15f988 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15F98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F988u;
        // 0x15f98c: 0x3c010001  lui         $at, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f988) {
            ctx->pc = 0x15FA48u;
            goto label_15fa48;
        }
    }
    ctx->pc = 0x15F990u;
label_15f990:
    // 0x15f990: 0x2610821  addu        $at, $s3, $at
    ctx->pc = 0x15f990u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 1)));
label_15f994:
    // 0x15f994: 0x90234c79  lbu         $v1, 0x4C79($at)
    ctx->pc = 0x15f994u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 19577)));
label_15f998:
    // 0x15f998: 0x1060002b  beqz        $v1, . + 4 + (0x2B << 2)
label_15f99c:
    if (ctx->pc == 0x15F99Cu) {
        ctx->pc = 0x15F9A0u;
        goto label_15f9a0;
    }
    ctx->pc = 0x15F998u;
    {
        const bool branch_taken_0x15f998 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x15f998) {
            ctx->pc = 0x15FA48u;
            goto label_15fa48;
        }
    }
    ctx->pc = 0x15F9A0u;
label_15f9a0:
    // 0x15f9a0: 0xdce40270  ld          $a0, 0x270($a3)
    ctx->pc = 0x15f9a0u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 7), 624)));
label_15f9a4:
    // 0x15f9a4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x15f9a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_15f9a8:
    // 0x15f9a8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x15f9a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_15f9ac:
    // 0x15f9ac: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x15f9acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_15f9b0:
    // 0x15f9b0: 0x10600025  beqz        $v1, . + 4 + (0x25 << 2)
label_15f9b4:
    if (ctx->pc == 0x15F9B4u) {
        ctx->pc = 0x15F9B8u;
        goto label_15f9b8;
    }
    ctx->pc = 0x15F9B0u;
    {
        const bool branch_taken_0x15f9b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x15f9b0) {
            ctx->pc = 0x15FA48u;
            goto label_15fa48;
        }
    }
    ctx->pc = 0x15F9B8u;
label_15f9b8:
    // 0x15f9b8: 0x8ce30038  lw          $v1, 0x38($a3)
    ctx->pc = 0x15f9b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 56)));
label_15f9bc:
    // 0x15f9bc: 0x14600022  bnez        $v1, . + 4 + (0x22 << 2)
label_15f9c0:
    if (ctx->pc == 0x15F9C0u) {
        ctx->pc = 0x15F9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F9BCu;
        // 0x15f9c0: 0x3c060032  lui         $a2, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)50 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F9C4u;
        goto label_15f9c4;
    }
    ctx->pc = 0x15F9BCu;
    {
        const bool branch_taken_0x15f9bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15F9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F9BCu;
        // 0x15f9c0: 0x3c060032  lui         $a2, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)50 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f9bc) {
            ctx->pc = 0x15FA48u;
            goto label_15fa48;
        }
    }
    ctx->pc = 0x15F9C4u;
label_15f9c4:
    // 0x15f9c4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x15f9c4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15f9c8:
    // 0x15f9c8: 0x24c612a0  addiu       $a2, $a2, 0x12A0
    ctx->pc = 0x15f9c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4768));
label_15f9cc:
    // 0x15f9cc: 0x34a37724  ori         $v1, $a1, 0x7724
    ctx->pc = 0x15f9ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)30500);
label_15f9d0:
    // 0x15f9d0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x15f9d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15f9d4:
    // 0x15f9d4: 0x2632821  addu        $a1, $s3, $v1
    ctx->pc = 0x15f9d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
label_15f9d8:
    // 0x15f9d8: 0x3c034bbe  lui         $v1, 0x4BBE
    ctx->pc = 0x15f9d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)19390 << 16));
label_15f9dc:
    // 0x15f9dc: 0x3463bc20  ori         $v1, $v1, 0xBC20
    ctx->pc = 0x15f9dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)48160);
label_15f9e0:
    // 0x15f9e0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x15f9e0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_15f9e4:
    // 0x15f9e4: 0x8cc30204  lw          $v1, 0x204($a2)
    ctx->pc = 0x15f9e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 516)));
label_15f9e8:
    // 0x15f9e8: 0x14e30013  bne         $a3, $v1, . + 4 + (0x13 << 2)
label_15f9ec:
    if (ctx->pc == 0x15F9ECu) {
        ctx->pc = 0x15F9F0u;
        goto label_15f9f0;
    }
    ctx->pc = 0x15F9E8u;
    {
        const bool branch_taken_0x15f9e8 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 3));
        if (branch_taken_0x15f9e8) {
            ctx->pc = 0x15FA38u;
            goto label_15fa38;
        }
    }
    ctx->pc = 0x15F9F0u;
label_15f9f0:
    // 0x15f9f0: 0xc4c40150  lwc1        $f4, 0x150($a2)
    ctx->pc = 0x15f9f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_15f9f4:
    // 0x15f9f4: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x15f9f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_15f9f8:
    // 0x15f9f8: 0xc6630000  lwc1        $f3, 0x0($s3)
    ctx->pc = 0x15f9f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_15f9fc:
    // 0x15f9fc: 0x2610821  addu        $at, $s3, $at
    ctx->pc = 0x15f9fcu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 1)));
label_15fa00:
    // 0x15fa00: 0xc4c20158  lwc1        $f2, 0x158($a2)
    ctx->pc = 0x15fa00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_15fa04:
    // 0x15fa04: 0xc6610008  lwc1        $f1, 0x8($s3)
    ctx->pc = 0x15fa04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_15fa08:
    // 0x15fa08: 0x460320c1  sub.s       $f3, $f4, $f3
    ctx->pc = 0x15fa08u;
    ctx->f[3] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
label_15fa0c:
    // 0x15fa0c: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x15fa0cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_15fa10:
    // 0x15fa10: 0x4603181a  mula.s      $f3, $f3
    ctx->pc = 0x15fa10u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[3], ctx->f[3]));
label_15fa14:
    // 0x15fa14: 0x4601085c  madd.s      $f1, $f1, $f1
    ctx->pc = 0x15fa14u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[1], ctx->f[1]));
label_15fa18:
    // 0x15fa18: 0xe4a10000  swc1        $f1, 0x0($a1)
    ctx->pc = 0x15fa18u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_15fa1c:
    // 0x15fa1c: 0xc4217724  lwc1        $f1, 0x7724($at)
    ctx->pc = 0x15fa1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 30500)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_15fa20:
    // 0x15fa20: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x15fa20u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_15fa24:
    // 0x15fa24: 0x0  nop
    ctx->pc = 0x15fa24u;
    // NOP
label_15fa28:
    // 0x15fa28: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_15fa2c:
    if (ctx->pc == 0x15FA2Cu) {
        ctx->pc = 0x15FA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FA28u;
        // 0x15fa2c: 0x3c010001  lui         $at, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15FA30u;
        goto label_15fa30;
    }
    ctx->pc = 0x15FA28u;
    {
        const bool branch_taken_0x15fa28 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x15FA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FA28u;
        // 0x15fa2c: 0x3c010001  lui         $at, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15fa28) {
            ctx->pc = 0x15FA38u;
            goto label_15fa38;
        }
    }
    ctx->pc = 0x15FA30u;
label_15fa30:
    // 0x15fa30: 0x2610821  addu        $at, $s3, $at
    ctx->pc = 0x15fa30u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 1)));
label_15fa34:
    // 0x15fa34: 0xac247720  sw          $a0, 0x7720($at)
    ctx->pc = 0x15fa34u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 30496), GPR_U32(ctx, 4));
label_15fa38:
    // 0x15fa38: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x15fa38u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_15fa3c:
    // 0x15fa3c: 0x29030028  slti        $v1, $t0, 0x28
    ctx->pc = 0x15fa3cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)40) ? 1 : 0);
label_15fa40:
    // 0x15fa40: 0x1460ffe8  bnez        $v1, . + 4 + (-0x18 << 2)
label_15fa44:
    if (ctx->pc == 0x15FA44u) {
        ctx->pc = 0x15FA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FA40u;
        // 0x15fa44: 0x24c60220  addiu       $a2, $a2, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 544));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15FA48u;
        goto label_15fa48;
    }
    ctx->pc = 0x15FA40u;
    {
        const bool branch_taken_0x15fa40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15FA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FA40u;
        // 0x15fa44: 0x24c60220  addiu       $a2, $a2, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 544));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15fa40) {
            ctx->pc = 0x15F9E4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15f9e4;
        }
    }
    ctx->pc = 0x15FA48u;
label_15fa48:
    // 0x15fa48: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x15fa48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_15fa4c:
    // 0x15fa4c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x15fa4cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_15fa50:
    // 0x15fa50: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x15fa50u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_15fa54:
    // 0x15fa54: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15fa54u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_15fa58:
    // 0x15fa58: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15fa58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_15fa5c:
    // 0x15fa5c: 0x3e00008  jr          $ra
label_15fa60:
    if (ctx->pc == 0x15FA60u) {
        ctx->pc = 0x15FA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FA5Cu;
        // 0x15fa60: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15FA64u;
        goto label_15fa64;
    }
    ctx->pc = 0x15FA5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15FA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FA5Cu;
        // 0x15fa60: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15FA5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15FA64u;
label_15fa64:
    // 0x15fa64: 0x0  nop
    ctx->pc = 0x15fa64u;
    // NOP
label_15fa68:
    // 0x15fa68: 0x0  nop
    ctx->pc = 0x15fa68u;
    // NOP
label_15fa6c:
    // 0x15fa6c: 0x0  nop
    ctx->pc = 0x15fa6cu;
    // NOP
label_15fa70:
    // 0x15fa70: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x15fa70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_15fa74:
    // 0x15fa74: 0x3c03447a  lui         $v1, 0x447A
    ctx->pc = 0x15fa74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17530 << 16));
label_15fa78:
    // 0x15fa78: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x15fa78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_15fa7c:
    // 0x15fa7c: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x15fa7cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_15fa80:
    // 0x15fa80: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x15fa80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_15fa84:
    // 0x15fa84: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x15fa84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_15fa88:
    // 0x15fa88: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x15fa88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
label_15fa8c:
    // 0x15fa8c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x15fa8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_15fa90:
    // 0x15fa90: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x15fa90u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_15fa94:
    // 0x15fa94: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x15fa94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_15fa98:
    // 0x15fa98: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x15fa98u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_15fa9c:
    // 0x15fa9c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x15fa9cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_15faa0:
    // 0x15faa0: 0x26723660  addiu       $s2, $s3, 0x3660
    ctx->pc = 0x15faa0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 13920));
label_15faa4:
    // 0x15faa4: 0xc481001c  lwc1        $f1, 0x1C($a0)
    ctx->pc = 0x15faa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_15faa8:
    // 0x15faa8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x15faa8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15faac:
    // 0x15faac: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x15faacu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_15fab0:
    // 0x15fab0: 0x46000d03  div.s       $f20, $f1, $f0
    ctx->pc = 0x15fab0u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[20] = ctx->f[1] / ctx->f[0];
label_15fab4:
    // 0x15fab4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x15fab4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15fab8:
    // 0x15fab8: 0x0  nop
    ctx->pc = 0x15fab8u;
    // NOP
label_15fabc:
    // 0x15fabc: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x15fabcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_15fac0:
    // 0x15fac0: 0x90a3003d  lbu         $v1, 0x3D($a1)
    ctx->pc = 0x15fac0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 61)));
label_15fac4:
    // 0x15fac4: 0x1460004c  bnez        $v1, . + 4 + (0x4C << 2)
label_15fac8:
    if (ctx->pc == 0x15FAC8u) {
        ctx->pc = 0x15FACCu;
        goto label_15facc;
    }
    ctx->pc = 0x15FAC4u;
    {
        const bool branch_taken_0x15fac4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x15fac4) {
            ctx->pc = 0x15FBF8u;
            goto label_15fbf8;
        }
    }
    ctx->pc = 0x15FACCu;
label_15facc:
    // 0x15facc: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x15faccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_15fad0:
    // 0x15fad0: 0x90630012  lbu         $v1, 0x12($v1)
    ctx->pc = 0x15fad0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 18)));
label_15fad4:
    // 0x15fad4: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
label_15fad8:
    if (ctx->pc == 0x15FAD8u) {
        ctx->pc = 0x15FAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FAD4u;
        // 0x15fad8: 0x3c010001  lui         $at, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15FADCu;
        goto label_15fadc;
    }
    ctx->pc = 0x15FAD4u;
    {
        const bool branch_taken_0x15fad4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15FAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FAD4u;
        // 0x15fad8: 0x3c010001  lui         $at, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15fad4) {
            ctx->pc = 0x15FB04u;
            goto label_15fb04;
        }
    }
    ctx->pc = 0x15FADCu;
label_15fadc:
    // 0x15fadc: 0x90a30034  lbu         $v1, 0x34($a1)
    ctx->pc = 0x15fadcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 52)));
label_15fae0:
    // 0x15fae0: 0x2610821  addu        $at, $s3, $at
    ctx->pc = 0x15fae0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 1)));
label_15fae4:
    // 0x15fae4: 0x8c264c60  lw          $a2, 0x4C60($at)
    ctx->pc = 0x15fae4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 19552)));
label_15fae8:
    // 0x15fae8: 0x90c40034  lbu         $a0, 0x34($a2)
    ctx->pc = 0x15fae8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 52)));
label_15faec:
    // 0x15faec: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
label_15faf0:
    if (ctx->pc == 0x15FAF0u) {
        ctx->pc = 0x15FAF4u;
        goto label_15faf4;
    }
    ctx->pc = 0x15FAECu;
    {
        const bool branch_taken_0x15faec = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x15faec) {
            ctx->pc = 0x15FB04u;
            goto label_15fb04;
        }
    }
    ctx->pc = 0x15FAF4u;
label_15faf4:
    // 0x15faf4: 0x90c40035  lbu         $a0, 0x35($a2)
    ctx->pc = 0x15faf4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 53)));
label_15faf8:
    // 0x15faf8: 0x90a30035  lbu         $v1, 0x35($a1)
    ctx->pc = 0x15faf8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 53)));
label_15fafc:
    // 0x15fafc: 0x1083003c  beq         $a0, $v1, . + 4 + (0x3C << 2)
label_15fb00:
    if (ctx->pc == 0x15FB00u) {
        ctx->pc = 0x15FB04u;
        goto label_15fb04;
    }
    ctx->pc = 0x15FAFCu;
    {
        const bool branch_taken_0x15fafc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x15fafc) {
            ctx->pc = 0x15FBF0u;
            goto label_15fbf0;
        }
    }
    ctx->pc = 0x15FB04u;
label_15fb04:
    // 0x15fb04: 0x0  nop
    ctx->pc = 0x15fb04u;
    // NOP
label_15fb08:
    // 0x15fb08: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x15fb08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_15fb0c:
    // 0x15fb0c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x15fb0cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_15fb10:
    // 0x15fb10: 0x0  nop
    ctx->pc = 0x15fb10u;
    // NOP
label_15fb14:
    // 0x15fb14: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x15fb14u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
label_15fb18:
    // 0x15fb18: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x15fb18u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_15fb1c:
    // 0x15fb1c: 0x0  nop
    ctx->pc = 0x15fb1cu;
    // NOP
label_15fb20:
    // 0x15fb20: 0x45010030  bc1t        . + 4 + (0x30 << 2)
label_15fb24:
    if (ctx->pc == 0x15FB24u) {
        ctx->pc = 0x15FB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FB20u;
        // 0x15fb24: 0x3c03479c  lui         $v1, 0x479C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18332 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15FB28u;
        goto label_15fb28;
    }
    ctx->pc = 0x15FB20u;
    {
        const bool branch_taken_0x15fb20 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x15FB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FB20u;
        // 0x15fb24: 0x3c03479c  lui         $v1, 0x479C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18332 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15fb20) {
            ctx->pc = 0x15FBE4u;
            goto label_15fbe4;
        }
    }
    ctx->pc = 0x15FB28u;
label_15fb28:
    // 0x15fb28: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x15fb28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
label_15fb2c:
    // 0x15fb2c: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x15fb2cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_15fb30:
    // 0x15fb30: 0x0  nop
    ctx->pc = 0x15fb30u;
    // NOP
label_15fb34:
    // 0x15fb34: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x15fb34u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_15fb38:
    // 0x15fb38: 0x0  nop
    ctx->pc = 0x15fb38u;
    // NOP
label_15fb3c:
    // 0x15fb3c: 0x45000029  bc1f        . + 4 + (0x29 << 2)
label_15fb40:
    if (ctx->pc == 0x15FB40u) {
        ctx->pc = 0x15FB44u;
        goto label_15fb44;
    }
    ctx->pc = 0x15FB3Cu;
    {
        const bool branch_taken_0x15fb3c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x15fb3c) {
            ctx->pc = 0x15FBE4u;
            goto label_15fbe4;
        }
    }
    ctx->pc = 0x15FB44u;
label_15fb44:
    // 0x15fb44: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x15fb44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_15fb48:
    // 0x15fb48: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x15fb48u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_15fb4c:
    // 0x15fb4c: 0x0  nop
    ctx->pc = 0x15fb4cu;
    // NOP
label_15fb50:
    // 0x15fb50: 0x45010024  bc1t        . + 4 + (0x24 << 2)
label_15fb54:
    if (ctx->pc == 0x15FB54u) {
        ctx->pc = 0x15FB58u;
        goto label_15fb58;
    }
    ctx->pc = 0x15FB50u;
    {
        const bool branch_taken_0x15fb50 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x15fb50) {
            ctx->pc = 0x15FBE4u;
            goto label_15fbe4;
        }
    }
    ctx->pc = 0x15FB58u;
label_15fb58:
    // 0x15fb58: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x15fb58u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_15fb5c:
    // 0x15fb5c: 0x0  nop
    ctx->pc = 0x15fb5cu;
    // NOP
label_15fb60:
    // 0x15fb60: 0x45000020  bc1f        . + 4 + (0x20 << 2)
label_15fb64:
    if (ctx->pc == 0x15FB64u) {
        ctx->pc = 0x15FB68u;
        goto label_15fb68;
    }
    ctx->pc = 0x15FB60u;
    {
        const bool branch_taken_0x15fb60 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x15fb60) {
            ctx->pc = 0x15FBE4u;
            goto label_15fbe4;
        }
    }
    ctx->pc = 0x15FB68u;
label_15fb68:
    // 0x15fb68: 0x90a30022  lbu         $v1, 0x22($a1)
    ctx->pc = 0x15fb68u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 34)));
label_15fb6c:
    // 0x15fb6c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x15fb6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_15fb70:
    // 0x15fb70: 0x90a20023  lbu         $v0, 0x23($a1)
    ctx->pc = 0x15fb70u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 35)));
label_15fb74:
    // 0x15fb74: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x15fb74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_15fb78:
    // 0x15fb78: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x15fb78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_15fb7c:
    // 0x15fb7c: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x15fb7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_15fb80:
    // 0x15fb80: 0xc04494c  jal         func_112530
label_15fb84:
    if (ctx->pc == 0x15FB84u) {
        ctx->pc = 0x15FB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FB80u;
        // 0x15fb84: 0x24450001  addiu       $a1, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15FB88u;
        goto label_15fb88;
    }
    ctx->pc = 0x15FB80u;
    SET_GPR_U32(ctx, 31, 0x15FB88u);
    ctx->pc = 0x15FB84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15FB80u;
    // 0x15fb84: 0x24450001  addiu       $a1, $v0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112530u, 0x15FB80u, 0x15FB88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15FB88u;
label_15fb88:
    // 0x15fb88: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
label_15fb8c:
    if (ctx->pc == 0x15FB8Cu) {
        ctx->pc = 0x15FB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FB88u;
        // 0x15fb8c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15FB90u;
        goto label_15fb90;
    }
    ctx->pc = 0x15FB88u;
    {
        const bool branch_taken_0x15fb88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15FB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FB88u;
        // 0x15fb8c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15fb88) {
            ctx->pc = 0x15FBE4u;
            goto label_15fbe4;
        }
    }
    ctx->pc = 0x15FB90u;
label_15fb90:
    // 0x15fb90: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x15fb90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_15fb94:
    // 0x15fb94: 0xa2440005  sb          $a0, 0x5($s2)
    ctx->pc = 0x15fb94u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 5), (uint8_t)GPR_U32(ctx, 4));
label_15fb98:
    // 0x15fb98: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x15fb98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_15fb9c:
    // 0x15fb9c: 0x90a40036  lbu         $a0, 0x36($a1)
    ctx->pc = 0x15fb9cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 54)));
label_15fba0:
    // 0x15fba0: 0x10830007  beq         $a0, $v1, . + 4 + (0x7 << 2)
label_15fba4:
    if (ctx->pc == 0x15FBA4u) {
        ctx->pc = 0x15FBA8u;
        goto label_15fba8;
    }
    ctx->pc = 0x15FBA0u;
    {
        const bool branch_taken_0x15fba0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x15fba0) {
            ctx->pc = 0x15FBC0u;
            goto label_15fbc0;
        }
    }
    ctx->pc = 0x15FBA8u;
label_15fba8:
    // 0x15fba8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x15fba8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_15fbac:
    // 0x15fbac: 0x90640012  lbu         $a0, 0x12($v1)
    ctx->pc = 0x15fbacu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 18)));
label_15fbb0:
    // 0x15fbb0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_15fbb4:
    if (ctx->pc == 0x15FBB4u) {
        ctx->pc = 0x15FBB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FBB0u;
        // 0x15fbb4: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15FBB8u;
        goto label_15fbb8;
    }
    ctx->pc = 0x15FBB0u;
    {
        const bool branch_taken_0x15fbb0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x15FBB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FBB0u;
        // 0x15fbb4: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15fbb0) {
            ctx->pc = 0x15FBC0u;
            goto label_15fbc0;
        }
    }
    ctx->pc = 0x15FBB8u;
label_15fbb8:
    // 0x15fbb8: 0x14830010  bne         $a0, $v1, . + 4 + (0x10 << 2)
label_15fbbc:
    if (ctx->pc == 0x15FBBCu) {
        ctx->pc = 0x15FBC0u;
        goto label_15fbc0;
    }
    ctx->pc = 0x15FBB8u;
    {
        const bool branch_taken_0x15fbb8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x15fbb8) {
            ctx->pc = 0x15FBFCu;
            goto label_15fbfc;
        }
    }
    ctx->pc = 0x15FBC0u;
label_15fbc0:
    // 0x15fbc0: 0x92440004  lbu         $a0, 0x4($s2)
    ctx->pc = 0x15fbc0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 4)));
label_15fbc4:
    // 0x15fbc4: 0x24030078  addiu       $v1, $zero, 0x78
    ctx->pc = 0x15fbc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_15fbc8:
    // 0x15fbc8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x15fbc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_15fbcc:
    // 0x15fbcc: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x15fbccu;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_15fbd0:
    // 0x15fbd0: 0x0  nop
    ctx->pc = 0x15fbd0u;
    // NOP
label_15fbd4:
    // 0x15fbd4: 0x0  nop
    ctx->pc = 0x15fbd4u;
    // NOP
label_15fbd8:
    // 0x15fbd8: 0x1810  mfhi        $v1
    ctx->pc = 0x15fbd8u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_15fbdc:
    // 0x15fbdc: 0x10000007  b           . + 4 + (0x7 << 2)
label_15fbe0:
    if (ctx->pc == 0x15FBE0u) {
        ctx->pc = 0x15FBE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FBDCu;
        // 0x15fbe0: 0xa2430004  sb          $v1, 0x4($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 4), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15FBE4u;
        goto label_15fbe4;
    }
    ctx->pc = 0x15FBDCu;
    {
        const bool branch_taken_0x15fbdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15FBE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FBDCu;
        // 0x15fbe0: 0xa2430004  sb          $v1, 0x4($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 4), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15fbdc) {
            ctx->pc = 0x15FBFCu;
            goto label_15fbfc;
        }
    }
    ctx->pc = 0x15FBE4u;
label_15fbe4:
    // 0x15fbe4: 0x0  nop
    ctx->pc = 0x15fbe4u;
    // NOP
label_15fbe8:
    // 0x15fbe8: 0x10000004  b           . + 4 + (0x4 << 2)
label_15fbec:
    if (ctx->pc == 0x15FBECu) {
        ctx->pc = 0x15FBECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FBE8u;
        // 0x15fbec: 0xa2400005  sb          $zero, 0x5($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 5), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15FBF0u;
        goto label_15fbf0;
    }
    ctx->pc = 0x15FBE8u;
    {
        const bool branch_taken_0x15fbe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15FBECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FBE8u;
        // 0x15fbec: 0xa2400005  sb          $zero, 0x5($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 5), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15fbe8) {
            ctx->pc = 0x15FBFCu;
            goto label_15fbfc;
        }
    }
    ctx->pc = 0x15FBF0u;
label_15fbf0:
    // 0x15fbf0: 0x10000002  b           . + 4 + (0x2 << 2)
label_15fbf4:
    if (ctx->pc == 0x15FBF4u) {
        ctx->pc = 0x15FBF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FBF0u;
        // 0x15fbf4: 0xa2400005  sb          $zero, 0x5($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 5), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15FBF8u;
        goto label_15fbf8;
    }
    ctx->pc = 0x15FBF0u;
    {
        const bool branch_taken_0x15fbf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15FBF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FBF0u;
        // 0x15fbf4: 0xa2400005  sb          $zero, 0x5($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 5), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15fbf0) {
            ctx->pc = 0x15FBFCu;
            goto label_15fbfc;
        }
    }
    ctx->pc = 0x15FBF8u;
label_15fbf8:
    // 0x15fbf8: 0xa2400005  sb          $zero, 0x5($s2)
    ctx->pc = 0x15fbf8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 5), (uint8_t)GPR_U32(ctx, 0));
label_15fbfc:
    // 0x15fbfc: 0x0  nop
    ctx->pc = 0x15fbfcu;
    // NOP
label_15fc00:
    // 0x15fc00: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x15fc00u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_15fc04:
    // 0x15fc04: 0x2a2300ff  slti        $v1, $s1, 0xFF
    ctx->pc = 0x15fc04u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)255) ? 1 : 0);
label_15fc08:
    // 0x15fc08: 0x1460ffab  bnez        $v1, . + 4 + (-0x55 << 2)
label_15fc0c:
    if (ctx->pc == 0x15FC0Cu) {
        ctx->pc = 0x15FC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FC08u;
        // 0x15fc0c: 0x26520008  addiu       $s2, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15FC10u;
        goto label_15fc10;
    }
    ctx->pc = 0x15FC08u;
    {
        const bool branch_taken_0x15fc08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15FC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FC08u;
        // 0x15fc0c: 0x26520008  addiu       $s2, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15fc08) {
            ctx->pc = 0x15FAB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15fab8;
        }
    }
    ctx->pc = 0x15FC10u;
label_15fc10:
    // 0x15fc10: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x15fc10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_15fc14:
    // 0x15fc14: 0x2a030002  slti        $v1, $s0, 0x2
    ctx->pc = 0x15fc14u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
label_15fc18:
    // 0x15fc18: 0x1460ffa7  bnez        $v1, . + 4 + (-0x59 << 2)
label_15fc1c:
    if (ctx->pc == 0x15FC1Cu) {
        ctx->pc = 0x15FC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FC18u;
        // 0x15fc1c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15FC20u;
        goto label_15fc20;
    }
    ctx->pc = 0x15FC18u;
    {
        const bool branch_taken_0x15fc18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15FC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FC18u;
        // 0x15fc1c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15fc18) {
            ctx->pc = 0x15FAB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15fab8;
        }
    }
    ctx->pc = 0x15FC20u;
label_15fc20:
    // 0x15fc20: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x15fc20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_15fc24:
    // 0x15fc24: 0x2610821  addu        $at, $s3, $at
    ctx->pc = 0x15fc24u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 1)));
label_15fc28:
    // 0x15fc28: 0x90234c65  lbu         $v1, 0x4C65($at)
    ctx->pc = 0x15fc28u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 19557)));
label_15fc2c:
    // 0x15fc2c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_15fc30:
    if (ctx->pc == 0x15FC30u) {
        ctx->pc = 0x15FC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FC2Cu;
        // 0x15fc30: 0x3c010001  lui         $at, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15FC34u;
        goto label_15fc34;
    }
    ctx->pc = 0x15FC2Cu;
    {
        const bool branch_taken_0x15fc2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x15FC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FC2Cu;
        // 0x15fc30: 0x3c010001  lui         $at, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15fc2c) {
            ctx->pc = 0x15FC40u;
            goto label_15fc40;
        }
    }
    ctx->pc = 0x15FC34u;
label_15fc34:
    // 0x15fc34: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x15fc34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15fc38:
    // 0x15fc38: 0x2610821  addu        $at, $s3, $at
    ctx->pc = 0x15fc38u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 1)));
label_15fc3c:
    // 0x15fc3c: 0xac237720  sw          $v1, 0x7720($at)
    ctx->pc = 0x15fc3cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 30496), GPR_U32(ctx, 3));
label_15fc40:
    // 0x15fc40: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x15fc40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_15fc44:
    // 0x15fc44: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x15fc44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_15fc48:
    // 0x15fc48: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x15fc48u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_15fc4c:
    // 0x15fc4c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x15fc4cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_15fc50:
    // 0x15fc50: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x15fc50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_15fc54:
    // 0x15fc54: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x15fc54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_15fc58:
    // 0x15fc58: 0x3e00008  jr          $ra
label_15fc5c:
    if (ctx->pc == 0x15FC5Cu) {
        ctx->pc = 0x15FC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FC58u;
        // 0x15fc5c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15FC60u;
        goto label_15fc60;
    }
    ctx->pc = 0x15FC58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15FC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FC58u;
        // 0x15fc5c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15FC58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15FC60u;
label_15fc60:
    // 0x15fc60: 0x51940  sll         $v1, $a1, 5
    ctx->pc = 0x15fc60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_15fc64:
    // 0x15fc64: 0x653023  subu        $a2, $v1, $a1
    ctx->pc = 0x15fc64u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_15fc68:
    // 0x15fc68: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x15fc68u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_15fc6c:
    // 0x15fc6c: 0x3c030035  lui         $v1, 0x35
    ctx->pc = 0x15fc6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)53 << 16));
label_15fc70:
    // 0x15fc70: 0xc53021  addu        $a2, $a2, $a1
    ctx->pc = 0x15fc70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_15fc74:
    // 0x15fc74: 0x2463c154  addiu       $v1, $v1, -0x3EAC
    ctx->pc = 0x15fc74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951252));
label_15fc78:
    // 0x15fc78: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x15fc78u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_15fc7c:
    // 0x15fc7c: 0xc53021  addu        $a2, $a2, $a1
    ctx->pc = 0x15fc7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_15fc80:
    // 0x15fc80: 0x62880  sll         $a1, $a2, 2
    ctx->pc = 0x15fc80u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_15fc84:
    // 0x15fc84: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x15fc84u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_15fc88:
    // 0x15fc88: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x15fc88u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_15fc8c:
    // 0x15fc8c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x15fc8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_15fc90:
    // 0x15fc90: 0x3e00008  jr          $ra
label_15fc94:
    if (ctx->pc == 0x15FC94u) {
        ctx->pc = 0x15FC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FC90u;
        // 0x15fc94: 0xac640000  sw          $a0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15FC98u;
        goto label_15fc98;
    }
    ctx->pc = 0x15FC90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15FC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FC90u;
        // 0x15fc94: 0xac640000  sw          $a0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15FC90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15FC98u;
label_15fc98:
    // 0x15fc98: 0x0  nop
    ctx->pc = 0x15fc98u;
    // NOP
label_15fc9c:
    // 0x15fc9c: 0x0  nop
    ctx->pc = 0x15fc9cu;
    // NOP
label_15fca0:
    // 0x15fca0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x15fca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_15fca4:
    // 0x15fca4: 0x3c03447a  lui         $v1, 0x447A
    ctx->pc = 0x15fca4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17530 << 16));
label_15fca8:
    // 0x15fca8: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x15fca8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_15fcac:
    // 0x15fcac: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x15fcacu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_15fcb0:
    // 0x15fcb0: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x15fcb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_15fcb4:
    // 0x15fcb4: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x15fcb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_15fcb8:
    // 0x15fcb8: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x15fcb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_15fcbc:
    // 0x15fcbc: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x15fcbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
label_15fcc0:
    // 0x15fcc0: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x15fcc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_15fcc4:
    // 0x15fcc4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x15fcc4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_15fcc8:
    // 0x15fcc8: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x15fcc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_15fccc:
    // 0x15fccc: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x15fcccu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_15fcd0:
    // 0x15fcd0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x15fcd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_15fcd4:
    // 0x15fcd4: 0x34217610  ori         $at, $at, 0x7610
    ctx->pc = 0x15fcd4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)30224);
label_15fcd8:
    // 0x15fcd8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x15fcd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_15fcdc:
    // 0x15fcdc: 0x2a19021  addu        $s2, $s5, $at
    ctx->pc = 0x15fcdcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 1)));
label_15fce0:
    // 0x15fce0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x15fce0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_15fce4:
    // 0x15fce4: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x15fce4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_15fce8:
    // 0x15fce8: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x15fce8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_15fcec:
    // 0x15fcec: 0x34214f10  ori         $at, $at, 0x4F10
    ctx->pc = 0x15fcecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20240);
label_15fcf0:
    // 0x15fcf0: 0xc481001c  lwc1        $f1, 0x1C($a0)
    ctx->pc = 0x15fcf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_15fcf4:
    // 0x15fcf4: 0x2a19821  addu        $s3, $s5, $at
    ctx->pc = 0x15fcf4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 1)));
label_15fcf8:
    // 0x15fcf8: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x15fcf8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15fcfc:
    // 0x15fcfc: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x15fcfcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_15fd00:
    // 0x15fd00: 0x46000d03  div.s       $f20, $f1, $f0
    ctx->pc = 0x15fd00u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[20] = ctx->f[1] / ctx->f[0];
label_15fd04:
    // 0x15fd04: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x15fd04u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15fd08:
    // 0x15fd08: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x15fd08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15fd0c:
    // 0x15fd0c: 0x0  nop
    ctx->pc = 0x15fd0cu;
    // NOP
    ctx->pc = 0x15fd10u;
    return;
}
