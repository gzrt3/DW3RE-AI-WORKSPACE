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


void FUN_0019b910_part402(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x25f5e0u: goto label_25f5e0;
        case 0x25f5e4u: goto label_25f5e4;
        case 0x25f5e8u: goto label_25f5e8;
        case 0x25f5ecu: goto label_25f5ec;
        case 0x25f5f0u: goto label_25f5f0;
        case 0x25f5f4u: goto label_25f5f4;
        case 0x25f5f8u: goto label_25f5f8;
        case 0x25f5fcu: goto label_25f5fc;
        case 0x25f600u: goto label_25f600;
        case 0x25f604u: goto label_25f604;
        case 0x25f608u: goto label_25f608;
        case 0x25f60cu: goto label_25f60c;
        case 0x25f610u: goto label_25f610;
        case 0x25f614u: goto label_25f614;
        case 0x25f618u: goto label_25f618;
        case 0x25f61cu: goto label_25f61c;
        case 0x25f620u: goto label_25f620;
        case 0x25f624u: goto label_25f624;
        case 0x25f628u: goto label_25f628;
        case 0x25f62cu: goto label_25f62c;
        case 0x25f630u: goto label_25f630;
        case 0x25f634u: goto label_25f634;
        case 0x25f638u: goto label_25f638;
        case 0x25f63cu: goto label_25f63c;
        case 0x25f640u: goto label_25f640;
        case 0x25f644u: goto label_25f644;
        case 0x25f648u: goto label_25f648;
        case 0x25f64cu: goto label_25f64c;
        case 0x25f650u: goto label_25f650;
        case 0x25f654u: goto label_25f654;
        case 0x25f658u: goto label_25f658;
        case 0x25f65cu: goto label_25f65c;
        case 0x25f660u: goto label_25f660;
        case 0x25f664u: goto label_25f664;
        case 0x25f668u: goto label_25f668;
        case 0x25f66cu: goto label_25f66c;
        case 0x25f670u: goto label_25f670;
        case 0x25f674u: goto label_25f674;
        case 0x25f678u: goto label_25f678;
        case 0x25f67cu: goto label_25f67c;
        case 0x25f680u: goto label_25f680;
        case 0x25f684u: goto label_25f684;
        case 0x25f688u: goto label_25f688;
        case 0x25f68cu: goto label_25f68c;
        case 0x25f690u: goto label_25f690;
        case 0x25f694u: goto label_25f694;
        case 0x25f698u: goto label_25f698;
        case 0x25f69cu: goto label_25f69c;
        case 0x25f6a0u: goto label_25f6a0;
        case 0x25f6a4u: goto label_25f6a4;
        case 0x25f6a8u: goto label_25f6a8;
        case 0x25f6acu: goto label_25f6ac;
        case 0x25f6b0u: goto label_25f6b0;
        case 0x25f6b4u: goto label_25f6b4;
        case 0x25f6b8u: goto label_25f6b8;
        case 0x25f6bcu: goto label_25f6bc;
        case 0x25f6c0u: goto label_25f6c0;
        case 0x25f6c4u: goto label_25f6c4;
        case 0x25f6c8u: goto label_25f6c8;
        case 0x25f6ccu: goto label_25f6cc;
        case 0x25f6d0u: goto label_25f6d0;
        case 0x25f6d4u: goto label_25f6d4;
        case 0x25f6d8u: goto label_25f6d8;
        case 0x25f6dcu: goto label_25f6dc;
        case 0x25f6e0u: goto label_25f6e0;
        case 0x25f6e4u: goto label_25f6e4;
        case 0x25f6e8u: goto label_25f6e8;
        case 0x25f6ecu: goto label_25f6ec;
        case 0x25f6f0u: goto label_25f6f0;
        case 0x25f6f4u: goto label_25f6f4;
        case 0x25f6f8u: goto label_25f6f8;
        case 0x25f6fcu: goto label_25f6fc;
        case 0x25f700u: goto label_25f700;
        case 0x25f704u: goto label_25f704;
        case 0x25f708u: goto label_25f708;
        case 0x25f70cu: goto label_25f70c;
        case 0x25f710u: goto label_25f710;
        case 0x25f714u: goto label_25f714;
        case 0x25f718u: goto label_25f718;
        case 0x25f71cu: goto label_25f71c;
        case 0x25f720u: goto label_25f720;
        case 0x25f724u: goto label_25f724;
        case 0x25f728u: goto label_25f728;
        case 0x25f72cu: goto label_25f72c;
        case 0x25f730u: goto label_25f730;
        case 0x25f734u: goto label_25f734;
        case 0x25f738u: goto label_25f738;
        case 0x25f73cu: goto label_25f73c;
        case 0x25f740u: goto label_25f740;
        case 0x25f744u: goto label_25f744;
        case 0x25f748u: goto label_25f748;
        case 0x25f74cu: goto label_25f74c;
        case 0x25f750u: goto label_25f750;
        case 0x25f754u: goto label_25f754;
        case 0x25f758u: goto label_25f758;
        case 0x25f75cu: goto label_25f75c;
        case 0x25f760u: goto label_25f760;
        case 0x25f764u: goto label_25f764;
        case 0x25f768u: goto label_25f768;
        case 0x25f76cu: goto label_25f76c;
        case 0x25f770u: goto label_25f770;
        case 0x25f774u: goto label_25f774;
        case 0x25f778u: goto label_25f778;
        case 0x25f77cu: goto label_25f77c;
        case 0x25f780u: goto label_25f780;
        case 0x25f784u: goto label_25f784;
        case 0x25f788u: goto label_25f788;
        case 0x25f78cu: goto label_25f78c;
        case 0x25f790u: goto label_25f790;
        case 0x25f794u: goto label_25f794;
        case 0x25f798u: goto label_25f798;
        case 0x25f79cu: goto label_25f79c;
        case 0x25f7a0u: goto label_25f7a0;
        case 0x25f7a4u: goto label_25f7a4;
        case 0x25f7a8u: goto label_25f7a8;
        case 0x25f7acu: goto label_25f7ac;
        case 0x25f7b0u: goto label_25f7b0;
        case 0x25f7b4u: goto label_25f7b4;
        case 0x25f7b8u: goto label_25f7b8;
        case 0x25f7bcu: goto label_25f7bc;
        case 0x25f7c0u: goto label_25f7c0;
        case 0x25f7c4u: goto label_25f7c4;
        case 0x25f7c8u: goto label_25f7c8;
        case 0x25f7ccu: goto label_25f7cc;
        case 0x25f7d0u: goto label_25f7d0;
        case 0x25f7d4u: goto label_25f7d4;
        case 0x25f7d8u: goto label_25f7d8;
        case 0x25f7dcu: goto label_25f7dc;
        case 0x25f7e0u: goto label_25f7e0;
        case 0x25f7e4u: goto label_25f7e4;
        case 0x25f7e8u: goto label_25f7e8;
        case 0x25f7ecu: goto label_25f7ec;
        case 0x25f7f0u: goto label_25f7f0;
        case 0x25f7f4u: goto label_25f7f4;
        case 0x25f7f8u: goto label_25f7f8;
        case 0x25f7fcu: goto label_25f7fc;
        case 0x25f800u: goto label_25f800;
        case 0x25f804u: goto label_25f804;
        case 0x25f808u: goto label_25f808;
        case 0x25f80cu: goto label_25f80c;
        case 0x25f810u: goto label_25f810;
        case 0x25f814u: goto label_25f814;
        case 0x25f818u: goto label_25f818;
        case 0x25f81cu: goto label_25f81c;
        case 0x25f820u: goto label_25f820;
        case 0x25f824u: goto label_25f824;
        case 0x25f828u: goto label_25f828;
        case 0x25f82cu: goto label_25f82c;
        case 0x25f830u: goto label_25f830;
        case 0x25f834u: goto label_25f834;
        case 0x25f838u: goto label_25f838;
        case 0x25f83cu: goto label_25f83c;
        case 0x25f840u: goto label_25f840;
        case 0x25f844u: goto label_25f844;
        case 0x25f848u: goto label_25f848;
        case 0x25f84cu: goto label_25f84c;
        case 0x25f850u: goto label_25f850;
        case 0x25f854u: goto label_25f854;
        case 0x25f858u: goto label_25f858;
        case 0x25f85cu: goto label_25f85c;
        case 0x25f860u: goto label_25f860;
        case 0x25f864u: goto label_25f864;
        case 0x25f868u: goto label_25f868;
        case 0x25f86cu: goto label_25f86c;
        case 0x25f870u: goto label_25f870;
        case 0x25f874u: goto label_25f874;
        case 0x25f878u: goto label_25f878;
        case 0x25f87cu: goto label_25f87c;
        case 0x25f880u: goto label_25f880;
        case 0x25f884u: goto label_25f884;
        case 0x25f888u: goto label_25f888;
        case 0x25f88cu: goto label_25f88c;
        case 0x25f890u: goto label_25f890;
        case 0x25f894u: goto label_25f894;
        case 0x25f898u: goto label_25f898;
        case 0x25f89cu: goto label_25f89c;
        case 0x25f8a0u: goto label_25f8a0;
        case 0x25f8a4u: goto label_25f8a4;
        case 0x25f8a8u: goto label_25f8a8;
        case 0x25f8acu: goto label_25f8ac;
        case 0x25f8b0u: goto label_25f8b0;
        case 0x25f8b4u: goto label_25f8b4;
        case 0x25f8b8u: goto label_25f8b8;
        case 0x25f8bcu: goto label_25f8bc;
        case 0x25f8c0u: goto label_25f8c0;
        case 0x25f8c4u: goto label_25f8c4;
        case 0x25f8c8u: goto label_25f8c8;
        case 0x25f8ccu: goto label_25f8cc;
        case 0x25f8d0u: goto label_25f8d0;
        case 0x25f8d4u: goto label_25f8d4;
        case 0x25f8d8u: goto label_25f8d8;
        case 0x25f8dcu: goto label_25f8dc;
        case 0x25f8e0u: goto label_25f8e0;
        case 0x25f8e4u: goto label_25f8e4;
        case 0x25f8e8u: goto label_25f8e8;
        case 0x25f8ecu: goto label_25f8ec;
        case 0x25f8f0u: goto label_25f8f0;
        case 0x25f8f4u: goto label_25f8f4;
        case 0x25f8f8u: goto label_25f8f8;
        case 0x25f8fcu: goto label_25f8fc;
        case 0x25f900u: goto label_25f900;
        case 0x25f904u: goto label_25f904;
        case 0x25f908u: goto label_25f908;
        case 0x25f90cu: goto label_25f90c;
        case 0x25f910u: goto label_25f910;
        case 0x25f914u: goto label_25f914;
        case 0x25f918u: goto label_25f918;
        case 0x25f91cu: goto label_25f91c;
        case 0x25f920u: goto label_25f920;
        case 0x25f924u: goto label_25f924;
        case 0x25f928u: goto label_25f928;
        case 0x25f92cu: goto label_25f92c;
        case 0x25f930u: goto label_25f930;
        case 0x25f934u: goto label_25f934;
        case 0x25f938u: goto label_25f938;
        case 0x25f93cu: goto label_25f93c;
        case 0x25f940u: goto label_25f940;
        case 0x25f944u: goto label_25f944;
        case 0x25f948u: goto label_25f948;
        case 0x25f94cu: goto label_25f94c;
        case 0x25f950u: goto label_25f950;
        case 0x25f954u: goto label_25f954;
        case 0x25f958u: goto label_25f958;
        case 0x25f95cu: goto label_25f95c;
        case 0x25f960u: goto label_25f960;
        case 0x25f964u: goto label_25f964;
        case 0x25f968u: goto label_25f968;
        case 0x25f96cu: goto label_25f96c;
        case 0x25f970u: goto label_25f970;
        case 0x25f974u: goto label_25f974;
        case 0x25f978u: goto label_25f978;
        case 0x25f97cu: goto label_25f97c;
        case 0x25f980u: goto label_25f980;
        case 0x25f984u: goto label_25f984;
        case 0x25f988u: goto label_25f988;
        case 0x25f98cu: goto label_25f98c;
        case 0x25f990u: goto label_25f990;
        case 0x25f994u: goto label_25f994;
        case 0x25f998u: goto label_25f998;
        case 0x25f99cu: goto label_25f99c;
        case 0x25f9a0u: goto label_25f9a0;
        case 0x25f9a4u: goto label_25f9a4;
        case 0x25f9a8u: goto label_25f9a8;
        case 0x25f9acu: goto label_25f9ac;
        case 0x25f9b0u: goto label_25f9b0;
        case 0x25f9b4u: goto label_25f9b4;
        case 0x25f9b8u: goto label_25f9b8;
        case 0x25f9bcu: goto label_25f9bc;
        case 0x25f9c0u: goto label_25f9c0;
        case 0x25f9c4u: goto label_25f9c4;
        case 0x25f9c8u: goto label_25f9c8;
        case 0x25f9ccu: goto label_25f9cc;
        case 0x25f9d0u: goto label_25f9d0;
        case 0x25f9d4u: goto label_25f9d4;
        case 0x25f9d8u: goto label_25f9d8;
        case 0x25f9dcu: goto label_25f9dc;
        case 0x25f9e0u: goto label_25f9e0;
        case 0x25f9e4u: goto label_25f9e4;
        case 0x25f9e8u: goto label_25f9e8;
        case 0x25f9ecu: goto label_25f9ec;
        case 0x25f9f0u: goto label_25f9f0;
        case 0x25f9f4u: goto label_25f9f4;
        case 0x25f9f8u: goto label_25f9f8;
        case 0x25f9fcu: goto label_25f9fc;
        case 0x25fa00u: goto label_25fa00;
        case 0x25fa04u: goto label_25fa04;
        case 0x25fa08u: goto label_25fa08;
        case 0x25fa0cu: goto label_25fa0c;
        case 0x25fa10u: goto label_25fa10;
        case 0x25fa14u: goto label_25fa14;
        case 0x25fa18u: goto label_25fa18;
        case 0x25fa1cu: goto label_25fa1c;
        case 0x25fa20u: goto label_25fa20;
        case 0x25fa24u: goto label_25fa24;
        case 0x25fa28u: goto label_25fa28;
        case 0x25fa2cu: goto label_25fa2c;
        case 0x25fa30u: goto label_25fa30;
        case 0x25fa34u: goto label_25fa34;
        case 0x25fa38u: goto label_25fa38;
        case 0x25fa3cu: goto label_25fa3c;
        case 0x25fa40u: goto label_25fa40;
        case 0x25fa44u: goto label_25fa44;
        case 0x25fa48u: goto label_25fa48;
        case 0x25fa4cu: goto label_25fa4c;
        case 0x25fa50u: goto label_25fa50;
        case 0x25fa54u: goto label_25fa54;
        case 0x25fa58u: goto label_25fa58;
        case 0x25fa5cu: goto label_25fa5c;
        case 0x25fa60u: goto label_25fa60;
        case 0x25fa64u: goto label_25fa64;
        case 0x25fa68u: goto label_25fa68;
        case 0x25fa6cu: goto label_25fa6c;
        case 0x25fa70u: goto label_25fa70;
        case 0x25fa74u: goto label_25fa74;
        case 0x25fa78u: goto label_25fa78;
        case 0x25fa7cu: goto label_25fa7c;
        case 0x25fa80u: goto label_25fa80;
        case 0x25fa84u: goto label_25fa84;
        case 0x25fa88u: goto label_25fa88;
        case 0x25fa8cu: goto label_25fa8c;
        case 0x25fa90u: goto label_25fa90;
        case 0x25fa94u: goto label_25fa94;
        case 0x25fa98u: goto label_25fa98;
        case 0x25fa9cu: goto label_25fa9c;
        case 0x25faa0u: goto label_25faa0;
        case 0x25faa4u: goto label_25faa4;
        case 0x25faa8u: goto label_25faa8;
        case 0x25faacu: goto label_25faac;
        case 0x25fab0u: goto label_25fab0;
        case 0x25fab4u: goto label_25fab4;
        case 0x25fab8u: goto label_25fab8;
        case 0x25fabcu: goto label_25fabc;
        case 0x25fac0u: goto label_25fac0;
        case 0x25fac4u: goto label_25fac4;
        case 0x25fac8u: goto label_25fac8;
        case 0x25faccu: goto label_25facc;
        case 0x25fad0u: goto label_25fad0;
        case 0x25fad4u: goto label_25fad4;
        case 0x25fad8u: goto label_25fad8;
        case 0x25fadcu: goto label_25fadc;
        case 0x25fae0u: goto label_25fae0;
        case 0x25fae4u: goto label_25fae4;
        case 0x25fae8u: goto label_25fae8;
        case 0x25faecu: goto label_25faec;
        case 0x25faf0u: goto label_25faf0;
        case 0x25faf4u: goto label_25faf4;
        case 0x25faf8u: goto label_25faf8;
        case 0x25fafcu: goto label_25fafc;
        case 0x25fb00u: goto label_25fb00;
        case 0x25fb04u: goto label_25fb04;
        case 0x25fb08u: goto label_25fb08;
        case 0x25fb0cu: goto label_25fb0c;
        case 0x25fb10u: goto label_25fb10;
        case 0x25fb14u: goto label_25fb14;
        case 0x25fb18u: goto label_25fb18;
        case 0x25fb1cu: goto label_25fb1c;
        case 0x25fb20u: goto label_25fb20;
        case 0x25fb24u: goto label_25fb24;
        case 0x25fb28u: goto label_25fb28;
        case 0x25fb2cu: goto label_25fb2c;
        case 0x25fb30u: goto label_25fb30;
        case 0x25fb34u: goto label_25fb34;
        case 0x25fb38u: goto label_25fb38;
        case 0x25fb3cu: goto label_25fb3c;
        case 0x25fb40u: goto label_25fb40;
        case 0x25fb44u: goto label_25fb44;
        case 0x25fb48u: goto label_25fb48;
        case 0x25fb4cu: goto label_25fb4c;
        case 0x25fb50u: goto label_25fb50;
        case 0x25fb54u: goto label_25fb54;
        case 0x25fb58u: goto label_25fb58;
        case 0x25fb5cu: goto label_25fb5c;
        case 0x25fb60u: goto label_25fb60;
        case 0x25fb64u: goto label_25fb64;
        case 0x25fb68u: goto label_25fb68;
        case 0x25fb6cu: goto label_25fb6c;
        case 0x25fb70u: goto label_25fb70;
        case 0x25fb74u: goto label_25fb74;
        case 0x25fb78u: goto label_25fb78;
        case 0x25fb7cu: goto label_25fb7c;
        case 0x25fb80u: goto label_25fb80;
        case 0x25fb84u: goto label_25fb84;
        case 0x25fb88u: goto label_25fb88;
        case 0x25fb8cu: goto label_25fb8c;
        case 0x25fb90u: goto label_25fb90;
        case 0x25fb94u: goto label_25fb94;
        case 0x25fb98u: goto label_25fb98;
        case 0x25fb9cu: goto label_25fb9c;
        case 0x25fba0u: goto label_25fba0;
        case 0x25fba4u: goto label_25fba4;
        case 0x25fba8u: goto label_25fba8;
        case 0x25fbacu: goto label_25fbac;
        case 0x25fbb0u: goto label_25fbb0;
        case 0x25fbb4u: goto label_25fbb4;
        case 0x25fbb8u: goto label_25fbb8;
        case 0x25fbbcu: goto label_25fbbc;
        case 0x25fbc0u: goto label_25fbc0;
        case 0x25fbc4u: goto label_25fbc4;
        case 0x25fbc8u: goto label_25fbc8;
        case 0x25fbccu: goto label_25fbcc;
        case 0x25fbd0u: goto label_25fbd0;
        case 0x25fbd4u: goto label_25fbd4;
        case 0x25fbd8u: goto label_25fbd8;
        case 0x25fbdcu: goto label_25fbdc;
        case 0x25fbe0u: goto label_25fbe0;
        case 0x25fbe4u: goto label_25fbe4;
        case 0x25fbe8u: goto label_25fbe8;
        case 0x25fbecu: goto label_25fbec;
        case 0x25fbf0u: goto label_25fbf0;
        case 0x25fbf4u: goto label_25fbf4;
        case 0x25fbf8u: goto label_25fbf8;
        case 0x25fbfcu: goto label_25fbfc;
        case 0x25fc00u: goto label_25fc00;
        case 0x25fc04u: goto label_25fc04;
        case 0x25fc08u: goto label_25fc08;
        case 0x25fc0cu: goto label_25fc0c;
        case 0x25fc10u: goto label_25fc10;
        case 0x25fc14u: goto label_25fc14;
        case 0x25fc18u: goto label_25fc18;
        case 0x25fc1cu: goto label_25fc1c;
        case 0x25fc20u: goto label_25fc20;
        case 0x25fc24u: goto label_25fc24;
        case 0x25fc28u: goto label_25fc28;
        case 0x25fc2cu: goto label_25fc2c;
        case 0x25fc30u: goto label_25fc30;
        case 0x25fc34u: goto label_25fc34;
        case 0x25fc38u: goto label_25fc38;
        case 0x25fc3cu: goto label_25fc3c;
        case 0x25fc40u: goto label_25fc40;
        case 0x25fc44u: goto label_25fc44;
        case 0x25fc48u: goto label_25fc48;
        case 0x25fc4cu: goto label_25fc4c;
        case 0x25fc50u: goto label_25fc50;
        case 0x25fc54u: goto label_25fc54;
        case 0x25fc58u: goto label_25fc58;
        case 0x25fc5cu: goto label_25fc5c;
        case 0x25fc60u: goto label_25fc60;
        case 0x25fc64u: goto label_25fc64;
        case 0x25fc68u: goto label_25fc68;
        case 0x25fc6cu: goto label_25fc6c;
        case 0x25fc70u: goto label_25fc70;
        case 0x25fc74u: goto label_25fc74;
        case 0x25fc78u: goto label_25fc78;
        case 0x25fc7cu: goto label_25fc7c;
        case 0x25fc80u: goto label_25fc80;
        case 0x25fc84u: goto label_25fc84;
        case 0x25fc88u: goto label_25fc88;
        case 0x25fc8cu: goto label_25fc8c;
        case 0x25fc90u: goto label_25fc90;
        case 0x25fc94u: goto label_25fc94;
        case 0x25fc98u: goto label_25fc98;
        case 0x25fc9cu: goto label_25fc9c;
        case 0x25fca0u: goto label_25fca0;
        case 0x25fca4u: goto label_25fca4;
        case 0x25fca8u: goto label_25fca8;
        case 0x25fcacu: goto label_25fcac;
        case 0x25fcb0u: goto label_25fcb0;
        case 0x25fcb4u: goto label_25fcb4;
        case 0x25fcb8u: goto label_25fcb8;
        case 0x25fcbcu: goto label_25fcbc;
        case 0x25fcc0u: goto label_25fcc0;
        case 0x25fcc4u: goto label_25fcc4;
        case 0x25fcc8u: goto label_25fcc8;
        case 0x25fcccu: goto label_25fccc;
        case 0x25fcd0u: goto label_25fcd0;
        case 0x25fcd4u: goto label_25fcd4;
        case 0x25fcd8u: goto label_25fcd8;
        case 0x25fcdcu: goto label_25fcdc;
        case 0x25fce0u: goto label_25fce0;
        case 0x25fce4u: goto label_25fce4;
        case 0x25fce8u: goto label_25fce8;
        case 0x25fcecu: goto label_25fcec;
        case 0x25fcf0u: goto label_25fcf0;
        case 0x25fcf4u: goto label_25fcf4;
        case 0x25fcf8u: goto label_25fcf8;
        case 0x25fcfcu: goto label_25fcfc;
        case 0x25fd00u: goto label_25fd00;
        case 0x25fd04u: goto label_25fd04;
        case 0x25fd08u: goto label_25fd08;
        case 0x25fd0cu: goto label_25fd0c;
        case 0x25fd10u: goto label_25fd10;
        case 0x25fd14u: goto label_25fd14;
        case 0x25fd18u: goto label_25fd18;
        case 0x25fd1cu: goto label_25fd1c;
        case 0x25fd20u: goto label_25fd20;
        case 0x25fd24u: goto label_25fd24;
        case 0x25fd28u: goto label_25fd28;
        case 0x25fd2cu: goto label_25fd2c;
        case 0x25fd30u: goto label_25fd30;
        case 0x25fd34u: goto label_25fd34;
        case 0x25fd38u: goto label_25fd38;
        case 0x25fd3cu: goto label_25fd3c;
        case 0x25fd40u: goto label_25fd40;
        case 0x25fd44u: goto label_25fd44;
        case 0x25fd48u: goto label_25fd48;
        case 0x25fd4cu: goto label_25fd4c;
        case 0x25fd50u: goto label_25fd50;
        case 0x25fd54u: goto label_25fd54;
        case 0x25fd58u: goto label_25fd58;
        case 0x25fd5cu: goto label_25fd5c;
        case 0x25fd60u: goto label_25fd60;
        case 0x25fd64u: goto label_25fd64;
        case 0x25fd68u: goto label_25fd68;
        case 0x25fd6cu: goto label_25fd6c;
        case 0x25fd70u: goto label_25fd70;
        case 0x25fd74u: goto label_25fd74;
        case 0x25fd78u: goto label_25fd78;
        case 0x25fd7cu: goto label_25fd7c;
        case 0x25fd80u: goto label_25fd80;
        case 0x25fd84u: goto label_25fd84;
        case 0x25fd88u: goto label_25fd88;
        case 0x25fd8cu: goto label_25fd8c;
        case 0x25fd90u: goto label_25fd90;
        case 0x25fd94u: goto label_25fd94;
        case 0x25fd98u: goto label_25fd98;
        case 0x25fd9cu: goto label_25fd9c;
        case 0x25fda0u: goto label_25fda0;
        case 0x25fda4u: goto label_25fda4;
        case 0x25fda8u: goto label_25fda8;
        case 0x25fdacu: goto label_25fdac;
        default: return;
    }

label_25f5e0:
    // 0x25f5e0: 0x9460  .word       0x00009460                   # add         $s2, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25f5e0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 18, (int32_t)result);     } }
label_25f5e4:
    // 0x25f5e4: 0x8100  sll         $s0, $zero, 4
    ctx->pc = 0x25f5e4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 0), 4));
label_25f5e8:
    // 0x25f5e8: 0x0  nop
    ctx->pc = 0x25f5e8u;
    // NOP
label_25f5ec:
    // 0x25f5ec: 0x0  nop
    ctx->pc = 0x25f5ecu;
    // NOP
label_25f5f0:
    // 0x25f5f0: 0x9471  tgeu        $zero, $zero, 593
    ctx->pc = 0x25f5f0u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25f5f4:
    // 0x25f5f4: 0xa3b0  tge         $zero, $zero, 654
    ctx->pc = 0x25f5f4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25f5f8:
    // 0x25f5f8: 0x0  nop
    ctx->pc = 0x25f5f8u;
    // NOP
label_25f5fc:
    // 0x25f5fc: 0x0  nop
    ctx->pc = 0x25f5fcu;
    // NOP
label_25f600:
    // 0x25f600: 0x9486  .word       0x00009486                   # srlv        $s2, $zero, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25f600u;
    SET_GPR_S32(ctx, 18, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_25f604:
    // 0x25f604: 0x11860  .word       0x00011860                   # add         $v1, $zero, $at # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25f604u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_25f608:
    // 0x25f608: 0x0  nop
    ctx->pc = 0x25f608u;
    // NOP
label_25f60c:
    // 0x25f60c: 0x0  nop
    ctx->pc = 0x25f60cu;
    // NOP
label_25f610:
    // 0x25f610: 0x94aa  .word       0x000094AA                   # slt         $s2, $zero, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25f610u;
    SET_GPR_U64(ctx, 18, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_25f614:
    // 0x25f614: 0x14270  tge         $zero, $at, 265
    ctx->pc = 0x25f614u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_25f618:
    // 0x25f618: 0x0  nop
    ctx->pc = 0x25f618u;
    // NOP
label_25f61c:
    // 0x25f61c: 0x0  nop
    ctx->pc = 0x25f61cu;
    // NOP
label_25f620:
    // 0x25f620: 0x94d3  .word       0x000094D3                   # mtlo        $zero # 000094C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25f620u;
    ctx->lo = GPR_U64(ctx, 0);
label_25f624:
    // 0x25f624: 0x17050  .word       0x00017050                   # mfhi        $t6 # 00010040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25f624u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_25f628:
    // 0x25f628: 0x0  nop
    ctx->pc = 0x25f628u;
    // NOP
label_25f62c:
    // 0x25f62c: 0x0  nop
    ctx->pc = 0x25f62cu;
    // NOP
label_25f630:
    // 0x25f630: 0x9502  srl         $s2, $zero, 20
    ctx->pc = 0x25f630u;
    SET_GPR_S32(ctx, 18, (int32_t)SRL32(GPR_U32(ctx, 0), 20));
label_25f634:
    // 0x25f634: 0x15a90  .word       0x00015A90                   # mfhi        $t3 # 00010280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25f634u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_25f638:
    // 0x25f638: 0x0  nop
    ctx->pc = 0x25f638u;
    // NOP
label_25f63c:
    // 0x25f63c: 0x0  nop
    ctx->pc = 0x25f63cu;
    // NOP
label_25f640:
    // 0x25f640: 0x952e  .word       0x0000952E                   # dsub        $s2, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25f640u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 18, r); }
label_25f644:
    // 0x25f644: 0x154e0  .word       0x000154E0                   # add         $t2, $zero, $at # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25f644u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
label_25f648:
    // 0x25f648: 0x0  nop
    ctx->pc = 0x25f648u;
    // NOP
label_25f64c:
    // 0x25f64c: 0x0  nop
    ctx->pc = 0x25f64cu;
    // NOP
label_25f650:
    // 0x25f650: 0x9559  .word       0x00009559                   # multu       $zero, $zero # 00009540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25f650u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 18, (int32_t)result); }
label_25f654:
    // 0x25f654: 0x13c50  .word       0x00013C50                   # mfhi        $a3 # 00010440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25f654u;
    SET_GPR_U64(ctx, 7, ctx->hi);
label_25f658:
    // 0x25f658: 0x0  nop
    ctx->pc = 0x25f658u;
    // NOP
label_25f65c:
    // 0x25f65c: 0x0  nop
    ctx->pc = 0x25f65cu;
    // NOP
label_25f660:
    // 0x25f660: 0x9581  .word       0x00009581                   # INVALID     $zero, $zero, -0x6A7F # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25f660u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x25F660 raw=0x00009581"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25f664:
    // 0x25f664: 0x13bc0  sll         $a3, $at, 15
    ctx->pc = 0x25f664u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 1), 15));
label_25f668:
    // 0x25f668: 0x0  nop
    ctx->pc = 0x25f668u;
    // NOP
label_25f66c:
    // 0x25f66c: 0x0  nop
    ctx->pc = 0x25f66cu;
    // NOP
label_25f670:
    // 0x25f670: 0x95a9  .word       0x000095A9                   # mtsa        $zero # 00009580 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x25f670u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_25f674:
    // 0x25f674: 0x12840  sll         $a1, $at, 1
    ctx->pc = 0x25f674u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 1), 1));
label_25f678:
    // 0x25f678: 0x0  nop
    ctx->pc = 0x25f678u;
    // NOP
label_25f67c:
    // 0x25f67c: 0x0  nop
    ctx->pc = 0x25f67cu;
    // NOP
label_25f680:
    // 0x25f680: 0x95cf  .word       0x000095CF                   # sync.p # 00009000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25f680u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_25f684:
    // 0x25f684: 0x17ce0  .word       0x00017CE0                   # add         $t7, $zero, $at # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25f684u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_25f688:
    // 0x25f688: 0x0  nop
    ctx->pc = 0x25f688u;
    // NOP
label_25f68c:
    // 0x25f68c: 0x0  nop
    ctx->pc = 0x25f68cu;
    // NOP
label_25f690:
    // 0x25f690: 0x95ff  dsra32      $s2, $zero, 23
    ctx->pc = 0x25f690u;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 0) >> (32 + 23));
label_25f694:
    // 0x25f694: 0x16240  sll         $t4, $at, 9
    ctx->pc = 0x25f694u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 1), 9));
label_25f698:
    // 0x25f698: 0x0  nop
    ctx->pc = 0x25f698u;
    // NOP
label_25f69c:
    // 0x25f69c: 0x0  nop
    ctx->pc = 0x25f69cu;
    // NOP
label_25f6a0:
    // 0x25f6a0: 0x962c  .word       0x0000962C                   # dadd        $s2, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25f6a0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 18, r); }
label_25f6a4:
    // 0x25f6a4: 0x13250  .word       0x00013250                   # mfhi        $a2 # 00010240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25f6a4u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_25f6a8:
    // 0x25f6a8: 0x0  nop
    ctx->pc = 0x25f6a8u;
    // NOP
label_25f6ac:
    // 0x25f6ac: 0x0  nop
    ctx->pc = 0x25f6acu;
    // NOP
label_25f6b0:
    // 0x25f6b0: 0x9653  .word       0x00009653                   # mtlo        $zero # 00009640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25f6b0u;
    ctx->lo = GPR_U64(ctx, 0);
label_25f6b4:
    // 0x25f6b4: 0x150c0  sll         $t2, $at, 3
    ctx->pc = 0x25f6b4u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 1), 3));
label_25f6b8:
    // 0x25f6b8: 0x0  nop
    ctx->pc = 0x25f6b8u;
    // NOP
label_25f6bc:
    // 0x25f6bc: 0x0  nop
    ctx->pc = 0x25f6bcu;
    // NOP
label_25f6c0:
    // 0x25f6c0: 0x967e  dsrl32      $s2, $zero, 25
    ctx->pc = 0x25f6c0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 0) >> (32 + 25));
label_25f6c4:
    // 0x25f6c4: 0x13c00  sll         $a3, $at, 16
    ctx->pc = 0x25f6c4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 1), 16));
label_25f6c8:
    // 0x25f6c8: 0x0  nop
    ctx->pc = 0x25f6c8u;
    // NOP
label_25f6cc:
    // 0x25f6cc: 0x0  nop
    ctx->pc = 0x25f6ccu;
    // NOP
label_25f6d0:
    // 0x25f6d0: 0x96a6  .word       0x000096A6                   # xor         $s2, $zero, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25f6d0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_25f6d4:
    // 0x25f6d4: 0xe2c0  sll         $gp, $zero, 11
    ctx->pc = 0x25f6d4u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 0), 11));
label_25f6d8:
    // 0x25f6d8: 0x0  nop
    ctx->pc = 0x25f6d8u;
    // NOP
label_25f6dc:
    // 0x25f6dc: 0x0  nop
    ctx->pc = 0x25f6dcu;
    // NOP
label_25f6e0:
    // 0x25f6e0: 0x96c3  sra         $s2, $zero, 27
    ctx->pc = 0x25f6e0u;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 0), 27));
label_25f6e4:
    // 0x25f6e4: 0x15120  .word       0x00015120                   # add         $t2, $zero, $at # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25f6e4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
label_25f6e8:
    // 0x25f6e8: 0x0  nop
    ctx->pc = 0x25f6e8u;
    // NOP
label_25f6ec:
    // 0x25f6ec: 0x0  nop
    ctx->pc = 0x25f6ecu;
    // NOP
label_25f6f0:
    // 0x25f6f0: 0x96ee  .word       0x000096EE                   # dsub        $s2, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25f6f0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 18, r); }
label_25f6f4:
    // 0x25f6f4: 0x14dc0  sll         $t1, $at, 23
    ctx->pc = 0x25f6f4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 1), 23));
label_25f6f8:
    // 0x25f6f8: 0x0  nop
    ctx->pc = 0x25f6f8u;
    // NOP
label_25f6fc:
    // 0x25f6fc: 0x0  nop
    ctx->pc = 0x25f6fcu;
    // NOP
label_25f700:
    // 0x25f700: 0x9718  .word       0x00009718                   # mult        $s2, $zero, $zero # 00000700 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x25f700u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 18, (int32_t)result); }
label_25f704:
    // 0x25f704: 0x15d20  .word       0x00015D20                   # add         $t3, $zero, $at # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25f704u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_25f708:
    // 0x25f708: 0x0  nop
    ctx->pc = 0x25f708u;
    // NOP
label_25f70c:
    // 0x25f70c: 0x0  nop
    ctx->pc = 0x25f70cu;
    // NOP
label_25f710:
    // 0x25f710: 0x9744  .word       0x00009744                   # sllv        $s2, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25f710u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_25f714:
    // 0x25f714: 0x14050  .word       0x00014050                   # mfhi        $t0 # 00010040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25f714u;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_25f718:
    // 0x25f718: 0x0  nop
    ctx->pc = 0x25f718u;
    // NOP
label_25f71c:
    // 0x25f71c: 0x0  nop
    ctx->pc = 0x25f71cu;
    // NOP
label_25f720:
    // 0x25f720: 0x976d  .word       0x0000976D                   # daddu       $s2, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25f720u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25f724:
    // 0x25f724: 0x14870  tge         $zero, $at, 289
    ctx->pc = 0x25f724u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_25f728:
    // 0x25f728: 0x0  nop
    ctx->pc = 0x25f728u;
    // NOP
label_25f72c:
    // 0x25f72c: 0x0  nop
    ctx->pc = 0x25f72cu;
    // NOP
label_25f730:
    // 0x25f730: 0x9797  .word       0x00009797                   # dsrav       $s2, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25f730u;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_25f734:
    // 0x25f734: 0x153a0  .word       0x000153A0                   # add         $t2, $zero, $at # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25f734u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
label_25f738:
    // 0x25f738: 0x0  nop
    ctx->pc = 0x25f738u;
    // NOP
label_25f73c:
    // 0x25f73c: 0x0  nop
    ctx->pc = 0x25f73cu;
    // NOP
label_25f740:
    // 0x25f740: 0x97c2  srl         $s2, $zero, 31
    ctx->pc = 0x25f740u;
    SET_GPR_S32(ctx, 18, (int32_t)SRL32(GPR_U32(ctx, 0), 31));
label_25f744:
    // 0x25f744: 0x15c80  sll         $t3, $at, 18
    ctx->pc = 0x25f744u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 1), 18));
label_25f748:
    // 0x25f748: 0x0  nop
    ctx->pc = 0x25f748u;
    // NOP
label_25f74c:
    // 0x25f74c: 0x0  nop
    ctx->pc = 0x25f74cu;
    // NOP
label_25f750:
    // 0x25f750: 0x97ee  .word       0x000097EE                   # dsub        $s2, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25f750u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 18, r); }
label_25f754:
    // 0x25f754: 0x14620  .word       0x00014620                   # add         $t0, $zero, $at # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25f754u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
label_25f758:
    // 0x25f758: 0x0  nop
    ctx->pc = 0x25f758u;
    // NOP
label_25f75c:
    // 0x25f75c: 0x0  nop
    ctx->pc = 0x25f75cu;
    // NOP
label_25f760:
    // 0x25f760: 0x9817  dsrav       $s3, $zero, $zero
    ctx->pc = 0x25f760u;
    SET_GPR_S64(ctx, 19, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_25f764:
    // 0x25f764: 0x15940  sll         $t3, $at, 5
    ctx->pc = 0x25f764u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 1), 5));
label_25f768:
    // 0x25f768: 0x0  nop
    ctx->pc = 0x25f768u;
    // NOP
label_25f76c:
    // 0x25f76c: 0x0  nop
    ctx->pc = 0x25f76cu;
    // NOP
label_25f770:
    // 0x25f770: 0x9843  sra         $s3, $zero, 1
    ctx->pc = 0x25f770u;
    SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 0), 1));
label_25f774:
    // 0x25f774: 0x15020  add         $t2, $zero, $at
    ctx->pc = 0x25f774u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
label_25f778:
    // 0x25f778: 0x0  nop
    ctx->pc = 0x25f778u;
    // NOP
label_25f77c:
    // 0x25f77c: 0x0  nop
    ctx->pc = 0x25f77cu;
    // NOP
label_25f780:
    // 0x25f780: 0x986e  .word       0x0000986E                   # dsub        $s3, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25f780u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 19, r); }
label_25f784:
    // 0x25f784: 0x13d20  .word       0x00013D20                   # add         $a3, $zero, $at # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25f784u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
label_25f788:
    // 0x25f788: 0x0  nop
    ctx->pc = 0x25f788u;
    // NOP
label_25f78c:
    // 0x25f78c: 0x0  nop
    ctx->pc = 0x25f78cu;
    // NOP
label_25f790:
    // 0x25f790: 0x9896  .word       0x00009896                   # dsrlv       $s3, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25f790u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_25f794:
    // 0x25f794: 0x10900  sll         $at, $at, 4
    ctx->pc = 0x25f794u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 1), 4));
label_25f798:
    // 0x25f798: 0x0  nop
    ctx->pc = 0x25f798u;
    // NOP
label_25f79c:
    // 0x25f79c: 0x0  nop
    ctx->pc = 0x25f79cu;
    // NOP
label_25f7a0:
    // 0x25f7a0: 0x98b8  dsll        $s3, $zero, 2
    ctx->pc = 0x25f7a0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 0) << 2);
label_25f7a4:
    // 0x25f7a4: 0x15120  .word       0x00015120                   # add         $t2, $zero, $at # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25f7a4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
label_25f7a8:
    // 0x25f7a8: 0x0  nop
    ctx->pc = 0x25f7a8u;
    // NOP
label_25f7ac:
    // 0x25f7ac: 0x0  nop
    ctx->pc = 0x25f7acu;
    // NOP
label_25f7b0:
    // 0x25f7b0: 0x98e3  .word       0x000098E3                   # negu        $s3, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25f7b0u;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_25f7b4:
    // 0x25f7b4: 0x13470  tge         $zero, $at, 209
    ctx->pc = 0x25f7b4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_25f7b8:
    // 0x25f7b8: 0x0  nop
    ctx->pc = 0x25f7b8u;
    // NOP
label_25f7bc:
    // 0x25f7bc: 0x0  nop
    ctx->pc = 0x25f7bcu;
    // NOP
label_25f7c0:
    // 0x25f7c0: 0x990a  .word       0x0000990A                   # movz        $s3, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25f7c0u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 0));
label_25f7c4:
    // 0x25f7c4: 0x160e0  .word       0x000160E0                   # add         $t4, $zero, $at # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25f7c4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_25f7c8:
    // 0x25f7c8: 0x0  nop
    ctx->pc = 0x25f7c8u;
    // NOP
label_25f7cc:
    // 0x25f7cc: 0x0  nop
    ctx->pc = 0x25f7ccu;
    // NOP
label_25f7d0:
    // 0x25f7d0: 0x9937  .word       0x00009937                   # INVALID     $zero, $zero, -0x66C9 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25f7d0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x25F7D0 raw=0x00009937"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25f7d4:
    // 0x25f7d4: 0x15070  tge         $zero, $at, 321
    ctx->pc = 0x25f7d4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_25f7d8:
    // 0x25f7d8: 0x0  nop
    ctx->pc = 0x25f7d8u;
    // NOP
label_25f7dc:
    // 0x25f7dc: 0x0  nop
    ctx->pc = 0x25f7dcu;
    // NOP
label_25f7e0:
    // 0x25f7e0: 0x9962  .word       0x00009962                   # neg         $s3, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25f7e0u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 19, (int32_t)tmp); }
label_25f7e4:
    // 0x25f7e4: 0x13be0  .word       0x00013BE0                   # add         $a3, $zero, $at # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25f7e4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
label_25f7e8:
    // 0x25f7e8: 0x0  nop
    ctx->pc = 0x25f7e8u;
    // NOP
label_25f7ec:
    // 0x25f7ec: 0x0  nop
    ctx->pc = 0x25f7ecu;
    // NOP
label_25f7f0:
    // 0x25f7f0: 0x998a  .word       0x0000998A                   # movz        $s3, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25f7f0u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 0));
label_25f7f4:
    // 0x25f7f4: 0xd060  .word       0x0000D060                   # add         $k0, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25f7f4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 26, (int32_t)result);     } }
label_25f7f8:
    // 0x25f7f8: 0x0  nop
    ctx->pc = 0x25f7f8u;
    // NOP
label_25f7fc:
    // 0x25f7fc: 0x0  nop
    ctx->pc = 0x25f7fcu;
    // NOP
label_25f800:
    // 0x25f800: 0x99a5  .word       0x000099A5                   # move        $s3, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25f800u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_25f804:
    // 0x25f804: 0x130c0  sll         $a2, $at, 3
    ctx->pc = 0x25f804u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 1), 3));
label_25f808:
    // 0x25f808: 0x0  nop
    ctx->pc = 0x25f808u;
    // NOP
label_25f80c:
    // 0x25f80c: 0x0  nop
    ctx->pc = 0x25f80cu;
    // NOP
label_25f810:
    // 0x25f810: 0x99cc  syscall     615
    ctx->pc = 0x25f810u;
    ctx->pc = 0x25F814u;
runtime->handleSyscall(rdram, ctx, 0x267u);
label_25f814:
    // 0x25f814: 0x4570  tge         $zero, $zero, 277
    ctx->pc = 0x25f814u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25f818:
    // 0x25f818: 0x0  nop
    ctx->pc = 0x25f818u;
    // NOP
label_25f81c:
    // 0x25f81c: 0x0  nop
    ctx->pc = 0x25f81cu;
    // NOP
label_25f820:
    // 0x25f820: 0x99d5  .word       0x000099D5                   # INVALID     $zero, $zero, -0x662B # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25f820u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x25F820 raw=0x000099D5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25f824:
    // 0x25f824: 0xdb00  sll         $k1, $zero, 12
    ctx->pc = 0x25f824u;
    SET_GPR_S32(ctx, 27, (int32_t)SLL32(GPR_U32(ctx, 0), 12));
label_25f828:
    // 0x25f828: 0x0  nop
    ctx->pc = 0x25f828u;
    // NOP
label_25f82c:
    // 0x25f82c: 0x0  nop
    ctx->pc = 0x25f82cu;
    // NOP
label_25f830:
    // 0x25f830: 0x99f1  tgeu        $zero, $zero, 615
    ctx->pc = 0x25f830u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25f834:
    // 0x25f834: 0xf690  .word       0x0000F690                   # mfhi        $fp # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25f834u;
    SET_GPR_U64(ctx, 30, ctx->hi);
label_25f838:
    // 0x25f838: 0x0  nop
    ctx->pc = 0x25f838u;
    // NOP
label_25f83c:
    // 0x25f83c: 0x0  nop
    ctx->pc = 0x25f83cu;
    // NOP
label_25f840:
    // 0x25f840: 0x9a10  .word       0x00009A10                   # mfhi        $s3 # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25f840u;
    SET_GPR_U64(ctx, 19, ctx->hi);
label_25f844:
    // 0x25f844: 0x11960  .word       0x00011960                   # add         $v1, $zero, $at # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25f844u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_25f848:
    // 0x25f848: 0x0  nop
    ctx->pc = 0x25f848u;
    // NOP
label_25f84c:
    // 0x25f84c: 0x0  nop
    ctx->pc = 0x25f84cu;
    // NOP
label_25f850:
    // 0x25f850: 0x9a34  teq         $zero, $zero, 616
    ctx->pc = 0x25f850u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25f854:
    // 0x25f854: 0xe270  tge         $zero, $zero, 905
    ctx->pc = 0x25f854u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25f858:
    // 0x25f858: 0x0  nop
    ctx->pc = 0x25f858u;
    // NOP
label_25f85c:
    // 0x25f85c: 0x0  nop
    ctx->pc = 0x25f85cu;
    // NOP
label_25f860:
    // 0x25f860: 0x9a51  .word       0x00009A51                   # mthi        $zero # 00009A40 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25f860u;
    ctx->hi = GPR_U64(ctx, 0);
label_25f864:
    // 0x25f864: 0x14c60  .word       0x00014C60                   # add         $t1, $zero, $at # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25f864u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_25f868:
    // 0x25f868: 0x0  nop
    ctx->pc = 0x25f868u;
    // NOP
label_25f86c:
    // 0x25f86c: 0x0  nop
    ctx->pc = 0x25f86cu;
    // NOP
label_25f870:
    // 0x25f870: 0x9a7b  dsra        $s3, $zero, 9
    ctx->pc = 0x25f870u;
    SET_GPR_S64(ctx, 19, GPR_S64(ctx, 0) >> 9);
label_25f874:
    // 0x25f874: 0x13fe0  .word       0x00013FE0                   # add         $a3, $zero, $at # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25f874u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
label_25f878:
    // 0x25f878: 0x0  nop
    ctx->pc = 0x25f878u;
    // NOP
label_25f87c:
    // 0x25f87c: 0x0  nop
    ctx->pc = 0x25f87cu;
    // NOP
label_25f880:
    // 0x25f880: 0x9aa3  .word       0x00009AA3                   # negu        $s3, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25f880u;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_25f884:
    // 0x25f884: 0x13e20  .word       0x00013E20                   # add         $a3, $zero, $at # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25f884u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
label_25f888:
    // 0x25f888: 0x0  nop
    ctx->pc = 0x25f888u;
    // NOP
label_25f88c:
    // 0x25f88c: 0x0  nop
    ctx->pc = 0x25f88cu;
    // NOP
label_25f890:
    // 0x25f890: 0x9acb  .word       0x00009ACB                   # movn        $s3, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25f890u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 0));
label_25f894:
    // 0x25f894: 0xe860  .word       0x0000E860                   # add         $sp, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25f894u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 29, (int32_t)result);     } }
label_25f898:
    // 0x25f898: 0x0  nop
    ctx->pc = 0x25f898u;
    // NOP
label_25f89c:
    // 0x25f89c: 0x0  nop
    ctx->pc = 0x25f89cu;
    // NOP
label_25f8a0:
    // 0x25f8a0: 0x9ae9  .word       0x00009AE9                   # mtsa        $zero # 00009AC0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x25f8a0u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_25f8a4:
    // 0x25f8a4: 0xe9f0  tge         $zero, $zero, 935
    ctx->pc = 0x25f8a4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25f8a8:
    // 0x25f8a8: 0x0  nop
    ctx->pc = 0x25f8a8u;
    // NOP
label_25f8ac:
    // 0x25f8ac: 0x0  nop
    ctx->pc = 0x25f8acu;
    // NOP
label_25f8b0:
    // 0x25f8b0: 0x9b07  .word       0x00009B07                   # srav        $s3, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25f8b0u;
    SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_25f8b4:
    // 0x25f8b4: 0xfad0  .word       0x0000FAD0                   # mfhi        $ra # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25f8b4u;
    SET_GPR_U64(ctx, 31, ctx->hi);
label_25f8b8:
    // 0x25f8b8: 0x0  nop
    ctx->pc = 0x25f8b8u;
    // NOP
label_25f8bc:
    // 0x25f8bc: 0x0  nop
    ctx->pc = 0x25f8bcu;
    // NOP
label_25f8c0:
    // 0x25f8c0: 0x9b27  .word       0x00009B27                   # not         $s3, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25f8c0u;
    SET_GPR_U64(ctx, 19, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_25f8c4:
    // 0x25f8c4: 0xc8a0  .word       0x0000C8A0                   # add         $t9, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25f8c4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 25, (int32_t)result);     } }
label_25f8c8:
    // 0x25f8c8: 0x0  nop
    ctx->pc = 0x25f8c8u;
    // NOP
label_25f8cc:
    // 0x25f8cc: 0x0  nop
    ctx->pc = 0x25f8ccu;
    // NOP
label_25f8d0:
    // 0x25f8d0: 0x9b41  .word       0x00009B41                   # INVALID     $zero, $zero, -0x64BF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25f8d0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x25F8D0 raw=0x00009B41"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25f8d4:
    // 0x25f8d4: 0xced0  .word       0x0000CED0                   # mfhi        $t9 # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25f8d4u;
    SET_GPR_U64(ctx, 25, ctx->hi);
label_25f8d8:
    // 0x25f8d8: 0x0  nop
    ctx->pc = 0x25f8d8u;
    // NOP
label_25f8dc:
    // 0x25f8dc: 0x0  nop
    ctx->pc = 0x25f8dcu;
    // NOP
label_25f8e0:
    // 0x25f8e0: 0x9b5b  .word       0x00009B5B                   # divu        $s3, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25f8e0u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_25f8e4:
    // 0x25f8e4: 0xe710  .word       0x0000E710                   # mfhi        $gp # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25f8e4u;
    SET_GPR_U64(ctx, 28, ctx->hi);
label_25f8e8:
    // 0x25f8e8: 0x0  nop
    ctx->pc = 0x25f8e8u;
    // NOP
label_25f8ec:
    // 0x25f8ec: 0x0  nop
    ctx->pc = 0x25f8ecu;
    // NOP
label_25f8f0:
    // 0x25f8f0: 0x9b78  dsll        $s3, $zero, 13
    ctx->pc = 0x25f8f0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 0) << 13);
label_25f8f4:
    // 0x25f8f4: 0xdc80  sll         $k1, $zero, 18
    ctx->pc = 0x25f8f4u;
    SET_GPR_S32(ctx, 27, (int32_t)SLL32(GPR_U32(ctx, 0), 18));
label_25f8f8:
    // 0x25f8f8: 0x0  nop
    ctx->pc = 0x25f8f8u;
    // NOP
label_25f8fc:
    // 0x25f8fc: 0x0  nop
    ctx->pc = 0x25f8fcu;
    // NOP
label_25f900:
    // 0x25f900: 0x9b94  .word       0x00009B94                   # dsllv       $s3, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25f900u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_25f904:
    // 0x25f904: 0xd970  tge         $zero, $zero, 869
    ctx->pc = 0x25f904u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25f908:
    // 0x25f908: 0x0  nop
    ctx->pc = 0x25f908u;
    // NOP
label_25f90c:
    // 0x25f90c: 0x0  nop
    ctx->pc = 0x25f90cu;
    // NOP
label_25f910:
    // 0x25f910: 0x9bb0  tge         $zero, $zero, 622
    ctx->pc = 0x25f910u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25f914:
    // 0x25f914: 0x51f0  tge         $zero, $zero, 327
    ctx->pc = 0x25f914u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25f918:
    // 0x25f918: 0x0  nop
    ctx->pc = 0x25f918u;
    // NOP
label_25f91c:
    // 0x25f91c: 0x0  nop
    ctx->pc = 0x25f91cu;
    // NOP
label_25f920:
    // 0x25f920: 0x9bbb  dsra        $s3, $zero, 14
    ctx->pc = 0x25f920u;
    SET_GPR_S64(ctx, 19, GPR_S64(ctx, 0) >> 14);
label_25f924:
    // 0x25f924: 0xe330  tge         $zero, $zero, 908
    ctx->pc = 0x25f924u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25f928:
    // 0x25f928: 0x0  nop
    ctx->pc = 0x25f928u;
    // NOP
label_25f92c:
    // 0x25f92c: 0x0  nop
    ctx->pc = 0x25f92cu;
    // NOP
label_25f930:
    // 0x25f930: 0x9bd8  .word       0x00009BD8                   # mult        $s3, $zero, $zero # 000003C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x25f930u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 19, (int32_t)result); }
label_25f934:
    // 0x25f934: 0xe470  tge         $zero, $zero, 913
    ctx->pc = 0x25f934u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25f938:
    // 0x25f938: 0x0  nop
    ctx->pc = 0x25f938u;
    // NOP
label_25f93c:
    // 0x25f93c: 0x0  nop
    ctx->pc = 0x25f93cu;
    // NOP
label_25f940:
    // 0x25f940: 0x9bf5  .word       0x00009BF5                   # INVALID     $zero, $zero, -0x640B # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25f940u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x25F940 raw=0x00009BF5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25f944:
    // 0x25f944: 0xb920  .word       0x0000B920                   # add         $s7, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25f944u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 23, (int32_t)result);     } }
label_25f948:
    // 0x25f948: 0x0  nop
    ctx->pc = 0x25f948u;
    // NOP
label_25f94c:
    // 0x25f94c: 0x0  nop
    ctx->pc = 0x25f94cu;
    // NOP
label_25f950:
    // 0x25f950: 0x9c0d  break       0, 624
    ctx->pc = 0x25f950u;
    runtime->handleBreak(rdram, ctx);
label_25f954:
    // 0x25f954: 0xf470  tge         $zero, $zero, 977
    ctx->pc = 0x25f954u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25f958:
    // 0x25f958: 0x0  nop
    ctx->pc = 0x25f958u;
    // NOP
label_25f95c:
    // 0x25f95c: 0x0  nop
    ctx->pc = 0x25f95cu;
    // NOP
label_25f960:
    // 0x25f960: 0x9c2c  .word       0x00009C2C                   # dadd        $s3, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25f960u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 19, r); }
label_25f964:
    // 0x25f964: 0xd690  .word       0x0000D690                   # mfhi        $k0 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25f964u;
    SET_GPR_U64(ctx, 26, ctx->hi);
label_25f968:
    // 0x25f968: 0x0  nop
    ctx->pc = 0x25f968u;
    // NOP
label_25f96c:
    // 0x25f96c: 0x0  nop
    ctx->pc = 0x25f96cu;
    // NOP
label_25f970:
    // 0x25f970: 0x9c47  .word       0x00009C47                   # srav        $s3, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25f970u;
    SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_25f974:
    // 0x25f974: 0xccc0  sll         $t9, $zero, 19
    ctx->pc = 0x25f974u;
    SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
label_25f978:
    // 0x25f978: 0x0  nop
    ctx->pc = 0x25f978u;
    // NOP
label_25f97c:
    // 0x25f97c: 0x0  nop
    ctx->pc = 0x25f97cu;
    // NOP
label_25f980:
    // 0x25f980: 0x9c61  .word       0x00009C61                   # addu        $s3, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25f980u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_25f984:
    // 0x25f984: 0xbee0  .word       0x0000BEE0                   # add         $s7, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25f984u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 23, (int32_t)result);     } }
label_25f988:
    // 0x25f988: 0x0  nop
    ctx->pc = 0x25f988u;
    // NOP
label_25f98c:
    // 0x25f98c: 0x0  nop
    ctx->pc = 0x25f98cu;
    // NOP
label_25f990:
    // 0x25f990: 0x9c79  .word       0x00009C79                   # INVALID     $zero, $zero, -0x6387 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25f990u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x25F990 raw=0x00009C79"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25f994:
    // 0x25f994: 0xe7c0  sll         $gp, $zero, 31
    ctx->pc = 0x25f994u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 0), 31));
label_25f998:
    // 0x25f998: 0x0  nop
    ctx->pc = 0x25f998u;
    // NOP
label_25f99c:
    // 0x25f99c: 0x0  nop
    ctx->pc = 0x25f99cu;
    // NOP
label_25f9a0:
    // 0x25f9a0: 0x9c96  .word       0x00009C96                   # dsrlv       $s3, $zero, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25f9a0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_25f9a4:
    // 0x25f9a4: 0xe200  sll         $gp, $zero, 8
    ctx->pc = 0x25f9a4u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 0), 8));
label_25f9a8:
    // 0x25f9a8: 0x0  nop
    ctx->pc = 0x25f9a8u;
    // NOP
label_25f9ac:
    // 0x25f9ac: 0x0  nop
    ctx->pc = 0x25f9acu;
    // NOP
label_25f9b0:
    // 0x25f9b0: 0x9cb3  tltu        $zero, $zero, 626
    ctx->pc = 0x25f9b0u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25f9b4:
    // 0x25f9b4: 0xd400  sll         $k0, $zero, 16
    ctx->pc = 0x25f9b4u;
    SET_GPR_S32(ctx, 26, (int32_t)SLL32(GPR_U32(ctx, 0), 16));
label_25f9b8:
    // 0x25f9b8: 0x0  nop
    ctx->pc = 0x25f9b8u;
    // NOP
label_25f9bc:
    // 0x25f9bc: 0x0  nop
    ctx->pc = 0x25f9bcu;
    // NOP
label_25f9c0:
    // 0x25f9c0: 0x9cce  .word       0x00009CCE                   # INVALID     $zero, $zero, -0x6332 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25f9c0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x25F9C0 raw=0x00009CCE"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25f9c4:
    // 0x25f9c4: 0xd400  sll         $k0, $zero, 16
    ctx->pc = 0x25f9c4u;
    SET_GPR_S32(ctx, 26, (int32_t)SLL32(GPR_U32(ctx, 0), 16));
label_25f9c8:
    // 0x25f9c8: 0x0  nop
    ctx->pc = 0x25f9c8u;
    // NOP
label_25f9cc:
    // 0x25f9cc: 0x0  nop
    ctx->pc = 0x25f9ccu;
    // NOP
label_25f9d0:
    // 0x25f9d0: 0x9ce9  .word       0x00009CE9                   # mtsa        $zero # 00009CC0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x25f9d0u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_25f9d4:
    // 0x25f9d4: 0xddd0  .word       0x0000DDD0                   # mfhi        $k1 # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25f9d4u;
    SET_GPR_U64(ctx, 27, ctx->hi);
label_25f9d8:
    // 0x25f9d8: 0x0  nop
    ctx->pc = 0x25f9d8u;
    // NOP
label_25f9dc:
    // 0x25f9dc: 0x0  nop
    ctx->pc = 0x25f9dcu;
    // NOP
label_25f9e0:
    // 0x25f9e0: 0x9d05  .word       0x00009D05                   # INVALID     $zero, $zero, -0x62FB # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25f9e0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x25F9E0 raw=0x00009D05"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25f9e4:
    // 0x25f9e4: 0xcbc0  sll         $t9, $zero, 15
    ctx->pc = 0x25f9e4u;
    SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 0), 15));
label_25f9e8:
    // 0x25f9e8: 0x0  nop
    ctx->pc = 0x25f9e8u;
    // NOP
label_25f9ec:
    // 0x25f9ec: 0x0  nop
    ctx->pc = 0x25f9ecu;
    // NOP
label_25f9f0:
    // 0x25f9f0: 0x9d1f  .word       0x00009D1F                   # ddivu       $s3, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25f9f0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x25F9F0 raw=0x00009D1F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25f9f4:
    // 0x25f9f4: 0xdb90  .word       0x0000DB90                   # mfhi        $k1 # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25f9f4u;
    SET_GPR_U64(ctx, 27, ctx->hi);
label_25f9f8:
    // 0x25f9f8: 0x0  nop
    ctx->pc = 0x25f9f8u;
    // NOP
label_25f9fc:
    // 0x25f9fc: 0x0  nop
    ctx->pc = 0x25f9fcu;
    // NOP
label_25fa00:
    // 0x25fa00: 0x9d3b  dsra        $s3, $zero, 20
    ctx->pc = 0x25fa00u;
    SET_GPR_S64(ctx, 19, GPR_S64(ctx, 0) >> 20);
label_25fa04:
    // 0x25fa04: 0xdf50  .word       0x0000DF50                   # mfhi        $k1 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25fa04u;
    SET_GPR_U64(ctx, 27, ctx->hi);
label_25fa08:
    // 0x25fa08: 0x0  nop
    ctx->pc = 0x25fa08u;
    // NOP
label_25fa0c:
    // 0x25fa0c: 0x0  nop
    ctx->pc = 0x25fa0cu;
    // NOP
label_25fa10:
    // 0x25fa10: 0x9d57  .word       0x00009D57                   # dsrav       $s3, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25fa10u;
    SET_GPR_S64(ctx, 19, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_25fa14:
    // 0x25fa14: 0xcb00  sll         $t9, $zero, 12
    ctx->pc = 0x25fa14u;
    SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 0), 12));
label_25fa18:
    // 0x25fa18: 0x0  nop
    ctx->pc = 0x25fa18u;
    // NOP
label_25fa1c:
    // 0x25fa1c: 0x0  nop
    ctx->pc = 0x25fa1cu;
    // NOP
label_25fa20:
    // 0x25fa20: 0x9d71  tgeu        $zero, $zero, 629
    ctx->pc = 0x25fa20u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25fa24:
    // 0x25fa24: 0xe250  .word       0x0000E250                   # mfhi        $gp # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25fa24u;
    SET_GPR_U64(ctx, 28, ctx->hi);
label_25fa28:
    // 0x25fa28: 0x0  nop
    ctx->pc = 0x25fa28u;
    // NOP
label_25fa2c:
    // 0x25fa2c: 0x0  nop
    ctx->pc = 0x25fa2cu;
    // NOP
label_25fa30:
    // 0x25fa30: 0x9d8e  .word       0x00009D8E                   # INVALID     $zero, $zero, -0x6272 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25fa30u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x25FA30 raw=0x00009D8E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25fa34:
    // 0x25fa34: 0xc550  .word       0x0000C550                   # mfhi        $t8 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25fa34u;
    SET_GPR_U64(ctx, 24, ctx->hi);
label_25fa38:
    // 0x25fa38: 0x0  nop
    ctx->pc = 0x25fa38u;
    // NOP
label_25fa3c:
    // 0x25fa3c: 0x0  nop
    ctx->pc = 0x25fa3cu;
    // NOP
label_25fa40:
    // 0x25fa40: 0x9da7  .word       0x00009DA7                   # not         $s3, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25fa40u;
    SET_GPR_U64(ctx, 19, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_25fa44:
    // 0x25fa44: 0xfe70  tge         $zero, $zero, 1017
    ctx->pc = 0x25fa44u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25fa48:
    // 0x25fa48: 0x0  nop
    ctx->pc = 0x25fa48u;
    // NOP
label_25fa4c:
    // 0x25fa4c: 0x0  nop
    ctx->pc = 0x25fa4cu;
    // NOP
label_25fa50:
    // 0x25fa50: 0x9dc7  .word       0x00009DC7                   # srav        $s3, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25fa50u;
    SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_25fa54:
    // 0x25fa54: 0xce00  sll         $t9, $zero, 24
    ctx->pc = 0x25fa54u;
    SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 0), 24));
label_25fa58:
    // 0x25fa58: 0x0  nop
    ctx->pc = 0x25fa58u;
    // NOP
label_25fa5c:
    // 0x25fa5c: 0x0  nop
    ctx->pc = 0x25fa5cu;
    // NOP
label_25fa60:
    // 0x25fa60: 0x9de1  .word       0x00009DE1                   # addu        $s3, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25fa60u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_25fa64:
    // 0x25fa64: 0xd9c0  sll         $k1, $zero, 7
    ctx->pc = 0x25fa64u;
    SET_GPR_S32(ctx, 27, (int32_t)SLL32(GPR_U32(ctx, 0), 7));
label_25fa68:
    // 0x25fa68: 0x0  nop
    ctx->pc = 0x25fa68u;
    // NOP
label_25fa6c:
    // 0x25fa6c: 0x0  nop
    ctx->pc = 0x25fa6cu;
    // NOP
label_25fa70:
    // 0x25fa70: 0x9dfd  .word       0x00009DFD                   # INVALID     $zero, $zero, -0x6203 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25fa70u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x25FA70 raw=0x00009DFD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25fa74:
    // 0x25fa74: 0xd390  .word       0x0000D390                   # mfhi        $k0 # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25fa74u;
    SET_GPR_U64(ctx, 26, ctx->hi);
label_25fa78:
    // 0x25fa78: 0x0  nop
    ctx->pc = 0x25fa78u;
    // NOP
label_25fa7c:
    // 0x25fa7c: 0x0  nop
    ctx->pc = 0x25fa7cu;
    // NOP
label_25fa80:
    // 0x25fa80: 0x9e18  .word       0x00009E18                   # mult        $s3, $zero, $zero # 00000600 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x25fa80u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 19, (int32_t)result); }
label_25fa84:
    // 0x25fa84: 0xeaa0  .word       0x0000EAA0                   # add         $sp, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25fa84u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 29, (int32_t)result);     } }
label_25fa88:
    // 0x25fa88: 0x0  nop
    ctx->pc = 0x25fa88u;
    // NOP
label_25fa8c:
    // 0x25fa8c: 0x0  nop
    ctx->pc = 0x25fa8cu;
    // NOP
label_25fa90:
    // 0x25fa90: 0x9e36  tne         $zero, $zero, 632
    ctx->pc = 0x25fa90u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25fa94:
    // 0x25fa94: 0xca90  .word       0x0000CA90                   # mfhi        $t9 # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25fa94u;
    SET_GPR_U64(ctx, 25, ctx->hi);
label_25fa98:
    // 0x25fa98: 0x0  nop
    ctx->pc = 0x25fa98u;
    // NOP
label_25fa9c:
    // 0x25fa9c: 0x0  nop
    ctx->pc = 0x25fa9cu;
    // NOP
label_25faa0:
    // 0x25faa0: 0x9e50  .word       0x00009E50                   # mfhi        $s3 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25faa0u;
    SET_GPR_U64(ctx, 19, ctx->hi);
label_25faa4:
    // 0x25faa4: 0x9280  sll         $s2, $zero, 10
    ctx->pc = 0x25faa4u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 0), 10));
label_25faa8:
    // 0x25faa8: 0x0  nop
    ctx->pc = 0x25faa8u;
    // NOP
label_25faac:
    // 0x25faac: 0x0  nop
    ctx->pc = 0x25faacu;
    // NOP
label_25fab0:
    // 0x25fab0: 0x9e63  .word       0x00009E63                   # negu        $s3, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25fab0u;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_25fab4:
    // 0x25fab4: 0x11800  sll         $v1, $at, 0
    ctx->pc = 0x25fab4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 1), 0));
label_25fab8:
    // 0x25fab8: 0x0  nop
    ctx->pc = 0x25fab8u;
    // NOP
label_25fabc:
    // 0x25fabc: 0x0  nop
    ctx->pc = 0x25fabcu;
    // NOP
label_25fac0:
    // 0x25fac0: 0x9e86  .word       0x00009E86                   # srlv        $s3, $zero, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25fac0u;
    SET_GPR_S32(ctx, 19, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_25fac4:
    // 0x25fac4: 0xe9e0  .word       0x0000E9E0                   # add         $sp, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25fac4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 29, (int32_t)result);     } }
label_25fac8:
    // 0x25fac8: 0x0  nop
    ctx->pc = 0x25fac8u;
    // NOP
label_25facc:
    // 0x25facc: 0x0  nop
    ctx->pc = 0x25faccu;
    // NOP
label_25fad0:
    // 0x25fad0: 0x9ea4  .word       0x00009EA4                   # and         $s3, $zero, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25fad0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_25fad4:
    // 0x25fad4: 0xfb90  .word       0x0000FB90                   # mfhi        $ra # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25fad4u;
    SET_GPR_U64(ctx, 31, ctx->hi);
label_25fad8:
    // 0x25fad8: 0x0  nop
    ctx->pc = 0x25fad8u;
    // NOP
label_25fadc:
    // 0x25fadc: 0x0  nop
    ctx->pc = 0x25fadcu;
    // NOP
label_25fae0:
    // 0x25fae0: 0x9ec4  .word       0x00009EC4                   # sllv        $s3, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25fae0u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_25fae4:
    // 0x25fae4: 0xe190  .word       0x0000E190                   # mfhi        $gp # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25fae4u;
    SET_GPR_U64(ctx, 28, ctx->hi);
label_25fae8:
    // 0x25fae8: 0x0  nop
    ctx->pc = 0x25fae8u;
    // NOP
label_25faec:
    // 0x25faec: 0x0  nop
    ctx->pc = 0x25faecu;
    // NOP
label_25faf0:
    // 0x25faf0: 0x9ee1  .word       0x00009EE1                   # addu        $s3, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25faf0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_25faf4:
    // 0x25faf4: 0xcbb0  tge         $zero, $zero, 814
    ctx->pc = 0x25faf4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25faf8:
    // 0x25faf8: 0x0  nop
    ctx->pc = 0x25faf8u;
    // NOP
label_25fafc:
    // 0x25fafc: 0x0  nop
    ctx->pc = 0x25fafcu;
    // NOP
label_25fb00:
    // 0x25fb00: 0x9efb  dsra        $s3, $zero, 27
    ctx->pc = 0x25fb00u;
    SET_GPR_S64(ctx, 19, GPR_S64(ctx, 0) >> 27);
label_25fb04:
    // 0x25fb04: 0xdc70  tge         $zero, $zero, 881
    ctx->pc = 0x25fb04u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25fb08:
    // 0x25fb08: 0x0  nop
    ctx->pc = 0x25fb08u;
    // NOP
label_25fb0c:
    // 0x25fb0c: 0x0  nop
    ctx->pc = 0x25fb0cu;
    // NOP
label_25fb10:
    // 0x25fb10: 0x9f17  .word       0x00009F17                   # dsrav       $s3, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25fb10u;
    SET_GPR_S64(ctx, 19, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_25fb14:
    // 0x25fb14: 0xe780  sll         $gp, $zero, 30
    ctx->pc = 0x25fb14u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 0), 30));
label_25fb18:
    // 0x25fb18: 0x0  nop
    ctx->pc = 0x25fb18u;
    // NOP
label_25fb1c:
    // 0x25fb1c: 0x0  nop
    ctx->pc = 0x25fb1cu;
    // NOP
label_25fb20:
    // 0x25fb20: 0x9f34  teq         $zero, $zero, 636
    ctx->pc = 0x25fb20u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25fb24:
    // 0x25fb24: 0x64f0  tge         $zero, $zero, 403
    ctx->pc = 0x25fb24u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25fb28:
    // 0x25fb28: 0x0  nop
    ctx->pc = 0x25fb28u;
    // NOP
label_25fb2c:
    // 0x25fb2c: 0x0  nop
    ctx->pc = 0x25fb2cu;
    // NOP
label_25fb30:
    // 0x25fb30: 0x9f41  .word       0x00009F41                   # INVALID     $zero, $zero, -0x60BF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25fb30u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x25FB30 raw=0x00009F41"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25fb34:
    // 0x25fb34: 0x5580  sll         $t2, $zero, 22
    ctx->pc = 0x25fb34u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 0), 22));
label_25fb38:
    // 0x25fb38: 0x0  nop
    ctx->pc = 0x25fb38u;
    // NOP
label_25fb3c:
    // 0x25fb3c: 0x0  nop
    ctx->pc = 0x25fb3cu;
    // NOP
label_25fb40:
    // 0x25fb40: 0x9f4c  syscall     637
    ctx->pc = 0x25fb40u;
    ctx->pc = 0x25FB44u;
runtime->handleSyscall(rdram, ctx, 0x27Du);
label_25fb44:
    // 0x25fb44: 0x3910  .word       0x00003910                   # mfhi        $a3 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25fb44u;
    SET_GPR_U64(ctx, 7, ctx->hi);
label_25fb48:
    // 0x25fb48: 0x0  nop
    ctx->pc = 0x25fb48u;
    // NOP
label_25fb4c:
    // 0x25fb4c: 0x0  nop
    ctx->pc = 0x25fb4cu;
    // NOP
label_25fb50:
    // 0x25fb50: 0x9f54  .word       0x00009F54                   # dsllv       $s3, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25fb50u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_25fb54:
    // 0x25fb54: 0x2ae0  .word       0x00002AE0                   # add         $a1, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25fb54u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 5, (int32_t)result);     } }
label_25fb58:
    // 0x25fb58: 0x0  nop
    ctx->pc = 0x25fb58u;
    // NOP
label_25fb5c:
    // 0x25fb5c: 0x0  nop
    ctx->pc = 0x25fb5cu;
    // NOP
label_25fb60:
    // 0x25fb60: 0x9f5a  .word       0x00009F5A                   # div         $s3, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25fb60u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_25fb64:
    // 0x25fb64: 0x3400  sll         $a2, $zero, 16
    ctx->pc = 0x25fb64u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 0), 16));
label_25fb68:
    // 0x25fb68: 0x0  nop
    ctx->pc = 0x25fb68u;
    // NOP
label_25fb6c:
    // 0x25fb6c: 0x0  nop
    ctx->pc = 0x25fb6cu;
    // NOP
label_25fb70:
    // 0x25fb70: 0x9f61  .word       0x00009F61                   # addu        $s3, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25fb70u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_25fb74:
    // 0x25fb74: 0x3fc0  sll         $a3, $zero, 31
    ctx->pc = 0x25fb74u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 0), 31));
label_25fb78:
    // 0x25fb78: 0x0  nop
    ctx->pc = 0x25fb78u;
    // NOP
label_25fb7c:
    // 0x25fb7c: 0x0  nop
    ctx->pc = 0x25fb7cu;
    // NOP
label_25fb80:
    // 0x25fb80: 0x9f69  .word       0x00009F69                   # mtsa        $zero # 00009F40 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x25fb80u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_25fb84:
    // 0x25fb84: 0x5060  .word       0x00005060                   # add         $t2, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25fb84u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
label_25fb88:
    // 0x25fb88: 0x0  nop
    ctx->pc = 0x25fb88u;
    // NOP
label_25fb8c:
    // 0x25fb8c: 0x0  nop
    ctx->pc = 0x25fb8cu;
    // NOP
label_25fb90:
    // 0x25fb90: 0x9f74  teq         $zero, $zero, 637
    ctx->pc = 0x25fb90u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25fb94:
    // 0x25fb94: 0x7b20  .word       0x00007B20                   # add         $t7, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25fb94u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_25fb98:
    // 0x25fb98: 0x0  nop
    ctx->pc = 0x25fb98u;
    // NOP
label_25fb9c:
    // 0x25fb9c: 0x0  nop
    ctx->pc = 0x25fb9cu;
    // NOP
label_25fba0:
    // 0x25fba0: 0x9f84  .word       0x00009F84                   # sllv        $s3, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25fba0u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_25fba4:
    // 0x25fba4: 0x9470  tge         $zero, $zero, 593
    ctx->pc = 0x25fba4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25fba8:
    // 0x25fba8: 0x0  nop
    ctx->pc = 0x25fba8u;
    // NOP
label_25fbac:
    // 0x25fbac: 0x0  nop
    ctx->pc = 0x25fbacu;
    // NOP
label_25fbb0:
    // 0x25fbb0: 0x9f97  .word       0x00009F97                   # dsrav       $s3, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25fbb0u;
    SET_GPR_S64(ctx, 19, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_25fbb4:
    // 0x25fbb4: 0x74a0  .word       0x000074A0                   # add         $t6, $zero, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25fbb4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_25fbb8:
    // 0x25fbb8: 0x0  nop
    ctx->pc = 0x25fbb8u;
    // NOP
label_25fbbc:
    // 0x25fbbc: 0x0  nop
    ctx->pc = 0x25fbbcu;
    // NOP
label_25fbc0:
    // 0x25fbc0: 0x9fa6  .word       0x00009FA6                   # xor         $s3, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25fbc0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_25fbc4:
    // 0x25fbc4: 0x7300  sll         $t6, $zero, 12
    ctx->pc = 0x25fbc4u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 0), 12));
label_25fbc8:
    // 0x25fbc8: 0x0  nop
    ctx->pc = 0x25fbc8u;
    // NOP
label_25fbcc:
    // 0x25fbcc: 0x0  nop
    ctx->pc = 0x25fbccu;
    // NOP
label_25fbd0:
    // 0x25fbd0: 0x9fb5  .word       0x00009FB5                   # INVALID     $zero, $zero, -0x604B # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25fbd0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x25FBD0 raw=0x00009FB5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25fbd4:
    // 0x25fbd4: 0x40e0  .word       0x000040E0                   # add         $t0, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25fbd4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
label_25fbd8:
    // 0x25fbd8: 0x0  nop
    ctx->pc = 0x25fbd8u;
    // NOP
label_25fbdc:
    // 0x25fbdc: 0x0  nop
    ctx->pc = 0x25fbdcu;
    // NOP
label_25fbe0:
    // 0x25fbe0: 0x9fbe  dsrl32      $s3, $zero, 30
    ctx->pc = 0x25fbe0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 0) >> (32 + 30));
label_25fbe4:
    // 0x25fbe4: 0x52f0  tge         $zero, $zero, 331
    ctx->pc = 0x25fbe4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25fbe8:
    // 0x25fbe8: 0x0  nop
    ctx->pc = 0x25fbe8u;
    // NOP
label_25fbec:
    // 0x25fbec: 0x0  nop
    ctx->pc = 0x25fbecu;
    // NOP
label_25fbf0:
    // 0x25fbf0: 0x9fc9  .word       0x00009FC9                   # jalr        $s3, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
label_25fbf4:
    if (ctx->pc == 0x25FBF4u) {
        ctx->pc = 0x25FBF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FBF0u;
        // 0x25fbf4: 0x7f70  tge         $zero, $zero, 509 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x25FBF8u;
        goto label_25fbf8;
    }
    ctx->pc = 0x25FBF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 19, 0x25FBF8u);
        ctx->pc = 0x25FBF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FBF0u;
        // 0x25fbf4: 0x7f70  tge         $zero, $zero, 509 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25FBF0u, 0x25FBF8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25FBF8u;
label_25fbf8:
    // 0x25fbf8: 0x0  nop
    ctx->pc = 0x25fbf8u;
    // NOP
label_25fbfc:
    // 0x25fbfc: 0x0  nop
    ctx->pc = 0x25fbfcu;
    // NOP
label_25fc00:
    // 0x25fc00: 0x9fd9  .word       0x00009FD9                   # multu       $zero, $zero # 00009FC0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25fc00u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 19, (int32_t)result); }
label_25fc04:
    // 0x25fc04: 0x4670  tge         $zero, $zero, 281
    ctx->pc = 0x25fc04u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25fc08:
    // 0x25fc08: 0x0  nop
    ctx->pc = 0x25fc08u;
    // NOP
label_25fc0c:
    // 0x25fc0c: 0x0  nop
    ctx->pc = 0x25fc0cu;
    // NOP
label_25fc10:
    // 0x25fc10: 0x9fe2  .word       0x00009FE2                   # neg         $s3, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25fc10u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 19, (int32_t)tmp); }
label_25fc14:
    // 0x25fc14: 0x5590  .word       0x00005590                   # mfhi        $t2 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25fc14u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_25fc18:
    // 0x25fc18: 0x0  nop
    ctx->pc = 0x25fc18u;
    // NOP
label_25fc1c:
    // 0x25fc1c: 0x0  nop
    ctx->pc = 0x25fc1cu;
    // NOP
label_25fc20:
    // 0x25fc20: 0x9fed  .word       0x00009FED                   # daddu       $s3, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25fc20u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25fc24:
    // 0x25fc24: 0x5e00  sll         $t3, $zero, 24
    ctx->pc = 0x25fc24u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 0), 24));
label_25fc28:
    // 0x25fc28: 0x0  nop
    ctx->pc = 0x25fc28u;
    // NOP
label_25fc2c:
    // 0x25fc2c: 0x0  nop
    ctx->pc = 0x25fc2cu;
    // NOP
label_25fc30:
    // 0x25fc30: 0x9ff9  .word       0x00009FF9                   # INVALID     $zero, $zero, -0x6007 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25fc30u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x25FC30 raw=0x00009FF9"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25fc34:
    // 0x25fc34: 0x37c0  sll         $a2, $zero, 31
    ctx->pc = 0x25fc34u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 0), 31));
label_25fc38:
    // 0x25fc38: 0x0  nop
    ctx->pc = 0x25fc38u;
    // NOP
label_25fc3c:
    // 0x25fc3c: 0x0  nop
    ctx->pc = 0x25fc3cu;
    // NOP
label_25fc40:
    // 0x25fc40: 0xa000  sll         $s4, $zero, 0
    ctx->pc = 0x25fc40u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_25fc44:
    // 0x25fc44: 0x6cf0  tge         $zero, $zero, 435
    ctx->pc = 0x25fc44u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25fc48:
    // 0x25fc48: 0x0  nop
    ctx->pc = 0x25fc48u;
    // NOP
label_25fc4c:
    // 0x25fc4c: 0x0  nop
    ctx->pc = 0x25fc4cu;
    // NOP
label_25fc50:
    // 0x25fc50: 0xa00e  .word       0x0000A00E                   # INVALID     $zero, $zero, -0x5FF2 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25fc50u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x25FC50 raw=0x0000A00E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25fc54:
    // 0x25fc54: 0x85f0  tge         $zero, $zero, 535
    ctx->pc = 0x25fc54u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25fc58:
    // 0x25fc58: 0x0  nop
    ctx->pc = 0x25fc58u;
    // NOP
label_25fc5c:
    // 0x25fc5c: 0x0  nop
    ctx->pc = 0x25fc5cu;
    // NOP
label_25fc60:
    // 0x25fc60: 0xa01f  ddivu       $s4, $zero, $zero
    ctx->pc = 0x25fc60u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x25FC60 raw=0x0000A01F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25fc64:
    // 0x25fc64: 0x6be0  .word       0x00006BE0                   # add         $t5, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25fc64u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_25fc68:
    // 0x25fc68: 0x0  nop
    ctx->pc = 0x25fc68u;
    // NOP
label_25fc6c:
    // 0x25fc6c: 0x0  nop
    ctx->pc = 0x25fc6cu;
    // NOP
label_25fc70:
    // 0x25fc70: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x25fc70u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25fc74:
    // 0x25fc74: 0x3ae0  .word       0x00003AE0                   # add         $a3, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25fc74u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
label_25fc78:
    // 0x25fc78: 0x0  nop
    ctx->pc = 0x25fc78u;
    // NOP
label_25fc7c:
    // 0x25fc7c: 0x0  nop
    ctx->pc = 0x25fc7cu;
    // NOP
label_25fc80:
    // 0x25fc80: 0xa035  .word       0x0000A035                   # INVALID     $zero, $zero, -0x5FCB # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25fc80u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x25FC80 raw=0x0000A035"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25fc84:
    // 0x25fc84: 0x3f90  .word       0x00003F90                   # mfhi        $a3 # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25fc84u;
    SET_GPR_U64(ctx, 7, ctx->hi);
label_25fc88:
    // 0x25fc88: 0x0  nop
    ctx->pc = 0x25fc88u;
    // NOP
label_25fc8c:
    // 0x25fc8c: 0x0  nop
    ctx->pc = 0x25fc8cu;
    // NOP
label_25fc90:
    // 0x25fc90: 0xa03d  .word       0x0000A03D                   # INVALID     $zero, $zero, -0x5FC3 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25fc90u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x25FC90 raw=0x0000A03D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25fc94:
    // 0x25fc94: 0x55e0  .word       0x000055E0                   # add         $t2, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25fc94u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
label_25fc98:
    // 0x25fc98: 0x0  nop
    ctx->pc = 0x25fc98u;
    // NOP
label_25fc9c:
    // 0x25fc9c: 0x0  nop
    ctx->pc = 0x25fc9cu;
    // NOP
label_25fca0:
    // 0x25fca0: 0xa048  .word       0x0000A048                   # jr          $zero # 0000A040 <InstrIdType: CPU_SPECIAL>
label_25fca4:
    if (ctx->pc == 0x25FCA4u) {
        ctx->pc = 0x25FCA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FCA0u;
        // 0x25fca4: 0x4670  tge         $zero, $zero, 281 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x25FCA8u;
        goto label_25fca8;
    }
    ctx->pc = 0x25FCA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x25FCA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FCA0u;
        // 0x25fca4: 0x4670  tge         $zero, $zero, 281 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25FCA0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x25FCA8u;
label_25fca8:
    // 0x25fca8: 0x0  nop
    ctx->pc = 0x25fca8u;
    // NOP
label_25fcac:
    // 0x25fcac: 0x0  nop
    ctx->pc = 0x25fcacu;
    // NOP
label_25fcb0:
    // 0x25fcb0: 0xa051  .word       0x0000A051                   # mthi        $zero # 0000A040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25fcb0u;
    ctx->hi = GPR_U64(ctx, 0);
label_25fcb4:
    // 0x25fcb4: 0x3850  .word       0x00003850                   # mfhi        $a3 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25fcb4u;
    SET_GPR_U64(ctx, 7, ctx->hi);
label_25fcb8:
    // 0x25fcb8: 0x0  nop
    ctx->pc = 0x25fcb8u;
    // NOP
label_25fcbc:
    // 0x25fcbc: 0x0  nop
    ctx->pc = 0x25fcbcu;
    // NOP
label_25fcc0:
    // 0x25fcc0: 0xa059  .word       0x0000A059                   # multu       $zero, $zero # 0000A040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25fcc0u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 20, (int32_t)result); }
label_25fcc4:
    // 0x25fcc4: 0x77e0  .word       0x000077E0                   # add         $t6, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25fcc4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_25fcc8:
    // 0x25fcc8: 0x0  nop
    ctx->pc = 0x25fcc8u;
    // NOP
label_25fccc:
    // 0x25fccc: 0x0  nop
    ctx->pc = 0x25fcccu;
    // NOP
label_25fcd0:
    // 0x25fcd0: 0xa068  .word       0x0000A068                   # mfsa        $s4 # 00000040 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x25fcd0u;
    SET_GPR_U32(ctx, 20, ctx->sa);
label_25fcd4:
    // 0x25fcd4: 0x6170  tge         $zero, $zero, 389
    ctx->pc = 0x25fcd4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25fcd8:
    // 0x25fcd8: 0x0  nop
    ctx->pc = 0x25fcd8u;
    // NOP
label_25fcdc:
    // 0x25fcdc: 0x0  nop
    ctx->pc = 0x25fcdcu;
    // NOP
label_25fce0:
    // 0x25fce0: 0xa075  .word       0x0000A075                   # INVALID     $zero, $zero, -0x5F8B # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25fce0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x25FCE0 raw=0x0000A075"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25fce4:
    // 0x25fce4: 0x6370  tge         $zero, $zero, 397
    ctx->pc = 0x25fce4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25fce8:
    // 0x25fce8: 0x0  nop
    ctx->pc = 0x25fce8u;
    // NOP
label_25fcec:
    // 0x25fcec: 0x0  nop
    ctx->pc = 0x25fcecu;
    // NOP
label_25fcf0:
    // 0x25fcf0: 0xa082  srl         $s4, $zero, 2
    ctx->pc = 0x25fcf0u;
    SET_GPR_S32(ctx, 20, (int32_t)SRL32(GPR_U32(ctx, 0), 2));
label_25fcf4:
    // 0x25fcf4: 0x2ce0  .word       0x00002CE0                   # add         $a1, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25fcf4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 5, (int32_t)result);     } }
label_25fcf8:
    // 0x25fcf8: 0x0  nop
    ctx->pc = 0x25fcf8u;
    // NOP
label_25fcfc:
    // 0x25fcfc: 0x0  nop
    ctx->pc = 0x25fcfcu;
    // NOP
label_25fd00:
    // 0x25fd00: 0xa088  .word       0x0000A088                   # jr          $zero # 0000A080 <InstrIdType: CPU_SPECIAL>
label_25fd04:
    if (ctx->pc == 0x25FD04u) {
        ctx->pc = 0x25FD04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FD00u;
        // 0x25fd04: 0x64e0  .word       0x000064E0                   # add         $t4, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = 0x25FD08u;
        goto label_25fd08;
    }
    ctx->pc = 0x25FD00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x25FD04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FD00u;
        // 0x25fd04: 0x64e0  .word       0x000064E0                   # add         $t4, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25FD00u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x25FD08u;
label_25fd08:
    // 0x25fd08: 0x0  nop
    ctx->pc = 0x25fd08u;
    // NOP
label_25fd0c:
    // 0x25fd0c: 0x0  nop
    ctx->pc = 0x25fd0cu;
    // NOP
label_25fd10:
    // 0x25fd10: 0xa095  .word       0x0000A095                   # INVALID     $zero, $zero, -0x5F6B # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25fd10u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x25FD10 raw=0x0000A095"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25fd14:
    // 0x25fd14: 0x4b10  .word       0x00004B10                   # mfhi        $t1 # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25fd14u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_25fd18:
    // 0x25fd18: 0x0  nop
    ctx->pc = 0x25fd18u;
    // NOP
label_25fd1c:
    // 0x25fd1c: 0x0  nop
    ctx->pc = 0x25fd1cu;
    // NOP
label_25fd20:
    // 0x25fd20: 0xa09f  .word       0x0000A09F                   # ddivu       $s4, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25fd20u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x25FD20 raw=0x0000A09F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25fd24:
    // 0x25fd24: 0x6b60  .word       0x00006B60                   # add         $t5, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25fd24u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_25fd28:
    // 0x25fd28: 0x0  nop
    ctx->pc = 0x25fd28u;
    // NOP
label_25fd2c:
    // 0x25fd2c: 0x0  nop
    ctx->pc = 0x25fd2cu;
    // NOP
label_25fd30:
    // 0x25fd30: 0xa0ad  .word       0x0000A0AD                   # daddu       $s4, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25fd30u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25fd34:
    // 0x25fd34: 0x76a0  .word       0x000076A0                   # add         $t6, $zero, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25fd34u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_25fd38:
    // 0x25fd38: 0x0  nop
    ctx->pc = 0x25fd38u;
    // NOP
label_25fd3c:
    // 0x25fd3c: 0x0  nop
    ctx->pc = 0x25fd3cu;
    // NOP
label_25fd40:
    // 0x25fd40: 0xa0bc  dsll32      $s4, $zero, 2
    ctx->pc = 0x25fd40u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 0) << (32 + 2));
label_25fd44:
    // 0x25fd44: 0x3fc0  sll         $a3, $zero, 31
    ctx->pc = 0x25fd44u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 0), 31));
label_25fd48:
    // 0x25fd48: 0x0  nop
    ctx->pc = 0x25fd48u;
    // NOP
label_25fd4c:
    // 0x25fd4c: 0x0  nop
    ctx->pc = 0x25fd4cu;
    // NOP
label_25fd50:
    // 0x25fd50: 0xa0c4  .word       0x0000A0C4                   # sllv        $s4, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25fd50u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_25fd54:
    // 0x25fd54: 0x4de0  .word       0x00004DE0                   # add         $t1, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25fd54u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_25fd58:
    // 0x25fd58: 0x0  nop
    ctx->pc = 0x25fd58u;
    // NOP
label_25fd5c:
    // 0x25fd5c: 0x0  nop
    ctx->pc = 0x25fd5cu;
    // NOP
label_25fd60:
    // 0x25fd60: 0xa0ce  .word       0x0000A0CE                   # INVALID     $zero, $zero, -0x5F32 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25fd60u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x25FD60 raw=0x0000A0CE"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25fd64:
    // 0x25fd64: 0x6140  sll         $t4, $zero, 5
    ctx->pc = 0x25fd64u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 5));
label_25fd68:
    // 0x25fd68: 0x0  nop
    ctx->pc = 0x25fd68u;
    // NOP
label_25fd6c:
    // 0x25fd6c: 0x0  nop
    ctx->pc = 0x25fd6cu;
    // NOP
label_25fd70:
    // 0x25fd70: 0xa0db  .word       0x0000A0DB                   # divu        $s4, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25fd70u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_25fd74:
    // 0x25fd74: 0x8190  .word       0x00008190                   # mfhi        $s0 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25fd74u;
    SET_GPR_U64(ctx, 16, ctx->hi);
label_25fd78:
    // 0x25fd78: 0x0  nop
    ctx->pc = 0x25fd78u;
    // NOP
label_25fd7c:
    // 0x25fd7c: 0x0  nop
    ctx->pc = 0x25fd7cu;
    // NOP
label_25fd80:
    // 0x25fd80: 0xa0ec  .word       0x0000A0EC                   # dadd        $s4, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25fd80u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 20, r); }
label_25fd84:
    // 0x25fd84: 0x6c10  .word       0x00006C10                   # mfhi        $t5 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25fd84u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_25fd88:
    // 0x25fd88: 0x0  nop
    ctx->pc = 0x25fd88u;
    // NOP
label_25fd8c:
    // 0x25fd8c: 0x0  nop
    ctx->pc = 0x25fd8cu;
    // NOP
label_25fd90:
    // 0x25fd90: 0xa0fa  dsrl        $s4, $zero, 3
    ctx->pc = 0x25fd90u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 0) >> 3);
label_25fd94:
    // 0x25fd94: 0x4d80  sll         $t1, $zero, 22
    ctx->pc = 0x25fd94u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), 22));
label_25fd98:
    // 0x25fd98: 0x0  nop
    ctx->pc = 0x25fd98u;
    // NOP
label_25fd9c:
    // 0x25fd9c: 0x0  nop
    ctx->pc = 0x25fd9cu;
    // NOP
label_25fda0:
    // 0x25fda0: 0xa104  .word       0x0000A104                   # sllv        $s4, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25fda0u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_25fda4:
    // 0x25fda4: 0x4190  .word       0x00004190                   # mfhi        $t0 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25fda4u;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_25fda8:
    // 0x25fda8: 0x0  nop
    ctx->pc = 0x25fda8u;
    // NOP
label_25fdac:
    // 0x25fdac: 0x0  nop
    ctx->pc = 0x25fdacu;
    // NOP
    ctx->pc = 0x25fdb0u;
    return;
}
