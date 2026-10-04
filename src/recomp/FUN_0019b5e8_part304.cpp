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


void FUN_0019b5e8_part304(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x22f518u: goto label_22f518;
        case 0x22f51cu: goto label_22f51c;
        case 0x22f520u: goto label_22f520;
        case 0x22f524u: goto label_22f524;
        case 0x22f528u: goto label_22f528;
        case 0x22f52cu: goto label_22f52c;
        case 0x22f530u: goto label_22f530;
        case 0x22f534u: goto label_22f534;
        case 0x22f538u: goto label_22f538;
        case 0x22f53cu: goto label_22f53c;
        case 0x22f540u: goto label_22f540;
        case 0x22f544u: goto label_22f544;
        case 0x22f548u: goto label_22f548;
        case 0x22f54cu: goto label_22f54c;
        case 0x22f550u: goto label_22f550;
        case 0x22f554u: goto label_22f554;
        case 0x22f558u: goto label_22f558;
        case 0x22f55cu: goto label_22f55c;
        case 0x22f560u: goto label_22f560;
        case 0x22f564u: goto label_22f564;
        case 0x22f568u: goto label_22f568;
        case 0x22f56cu: goto label_22f56c;
        case 0x22f570u: goto label_22f570;
        case 0x22f574u: goto label_22f574;
        case 0x22f578u: goto label_22f578;
        case 0x22f57cu: goto label_22f57c;
        case 0x22f580u: goto label_22f580;
        case 0x22f584u: goto label_22f584;
        case 0x22f588u: goto label_22f588;
        case 0x22f58cu: goto label_22f58c;
        case 0x22f590u: goto label_22f590;
        case 0x22f594u: goto label_22f594;
        case 0x22f598u: goto label_22f598;
        case 0x22f59cu: goto label_22f59c;
        case 0x22f5a0u: goto label_22f5a0;
        case 0x22f5a4u: goto label_22f5a4;
        case 0x22f5a8u: goto label_22f5a8;
        case 0x22f5acu: goto label_22f5ac;
        case 0x22f5b0u: goto label_22f5b0;
        case 0x22f5b4u: goto label_22f5b4;
        case 0x22f5b8u: goto label_22f5b8;
        case 0x22f5bcu: goto label_22f5bc;
        case 0x22f5c0u: goto label_22f5c0;
        case 0x22f5c4u: goto label_22f5c4;
        case 0x22f5c8u: goto label_22f5c8;
        case 0x22f5ccu: goto label_22f5cc;
        case 0x22f5d0u: goto label_22f5d0;
        case 0x22f5d4u: goto label_22f5d4;
        case 0x22f5d8u: goto label_22f5d8;
        case 0x22f5dcu: goto label_22f5dc;
        case 0x22f5e0u: goto label_22f5e0;
        case 0x22f5e4u: goto label_22f5e4;
        case 0x22f5e8u: goto label_22f5e8;
        case 0x22f5ecu: goto label_22f5ec;
        case 0x22f5f0u: goto label_22f5f0;
        case 0x22f5f4u: goto label_22f5f4;
        case 0x22f5f8u: goto label_22f5f8;
        case 0x22f5fcu: goto label_22f5fc;
        case 0x22f600u: goto label_22f600;
        case 0x22f604u: goto label_22f604;
        case 0x22f608u: goto label_22f608;
        case 0x22f60cu: goto label_22f60c;
        case 0x22f610u: goto label_22f610;
        case 0x22f614u: goto label_22f614;
        case 0x22f618u: goto label_22f618;
        case 0x22f61cu: goto label_22f61c;
        case 0x22f620u: goto label_22f620;
        case 0x22f624u: goto label_22f624;
        case 0x22f628u: goto label_22f628;
        case 0x22f62cu: goto label_22f62c;
        case 0x22f630u: goto label_22f630;
        case 0x22f634u: goto label_22f634;
        case 0x22f638u: goto label_22f638;
        case 0x22f63cu: goto label_22f63c;
        case 0x22f640u: goto label_22f640;
        case 0x22f644u: goto label_22f644;
        case 0x22f648u: goto label_22f648;
        case 0x22f64cu: goto label_22f64c;
        case 0x22f650u: goto label_22f650;
        case 0x22f654u: goto label_22f654;
        case 0x22f658u: goto label_22f658;
        case 0x22f65cu: goto label_22f65c;
        case 0x22f660u: goto label_22f660;
        case 0x22f664u: goto label_22f664;
        case 0x22f668u: goto label_22f668;
        case 0x22f66cu: goto label_22f66c;
        case 0x22f670u: goto label_22f670;
        case 0x22f674u: goto label_22f674;
        case 0x22f678u: goto label_22f678;
        case 0x22f67cu: goto label_22f67c;
        case 0x22f680u: goto label_22f680;
        case 0x22f684u: goto label_22f684;
        case 0x22f688u: goto label_22f688;
        case 0x22f68cu: goto label_22f68c;
        case 0x22f690u: goto label_22f690;
        case 0x22f694u: goto label_22f694;
        case 0x22f698u: goto label_22f698;
        case 0x22f69cu: goto label_22f69c;
        case 0x22f6a0u: goto label_22f6a0;
        case 0x22f6a4u: goto label_22f6a4;
        case 0x22f6a8u: goto label_22f6a8;
        case 0x22f6acu: goto label_22f6ac;
        case 0x22f6b0u: goto label_22f6b0;
        case 0x22f6b4u: goto label_22f6b4;
        case 0x22f6b8u: goto label_22f6b8;
        case 0x22f6bcu: goto label_22f6bc;
        case 0x22f6c0u: goto label_22f6c0;
        case 0x22f6c4u: goto label_22f6c4;
        case 0x22f6c8u: goto label_22f6c8;
        case 0x22f6ccu: goto label_22f6cc;
        case 0x22f6d0u: goto label_22f6d0;
        case 0x22f6d4u: goto label_22f6d4;
        case 0x22f6d8u: goto label_22f6d8;
        case 0x22f6dcu: goto label_22f6dc;
        case 0x22f6e0u: goto label_22f6e0;
        case 0x22f6e4u: goto label_22f6e4;
        case 0x22f6e8u: goto label_22f6e8;
        case 0x22f6ecu: goto label_22f6ec;
        case 0x22f6f0u: goto label_22f6f0;
        case 0x22f6f4u: goto label_22f6f4;
        case 0x22f6f8u: goto label_22f6f8;
        case 0x22f6fcu: goto label_22f6fc;
        case 0x22f700u: goto label_22f700;
        case 0x22f704u: goto label_22f704;
        case 0x22f708u: goto label_22f708;
        case 0x22f70cu: goto label_22f70c;
        case 0x22f710u: goto label_22f710;
        case 0x22f714u: goto label_22f714;
        case 0x22f718u: goto label_22f718;
        case 0x22f71cu: goto label_22f71c;
        case 0x22f720u: goto label_22f720;
        case 0x22f724u: goto label_22f724;
        case 0x22f728u: goto label_22f728;
        case 0x22f72cu: goto label_22f72c;
        case 0x22f730u: goto label_22f730;
        case 0x22f734u: goto label_22f734;
        case 0x22f738u: goto label_22f738;
        case 0x22f73cu: goto label_22f73c;
        case 0x22f740u: goto label_22f740;
        case 0x22f744u: goto label_22f744;
        case 0x22f748u: goto label_22f748;
        case 0x22f74cu: goto label_22f74c;
        case 0x22f750u: goto label_22f750;
        case 0x22f754u: goto label_22f754;
        case 0x22f758u: goto label_22f758;
        case 0x22f75cu: goto label_22f75c;
        case 0x22f760u: goto label_22f760;
        case 0x22f764u: goto label_22f764;
        case 0x22f768u: goto label_22f768;
        case 0x22f76cu: goto label_22f76c;
        case 0x22f770u: goto label_22f770;
        case 0x22f774u: goto label_22f774;
        case 0x22f778u: goto label_22f778;
        case 0x22f77cu: goto label_22f77c;
        case 0x22f780u: goto label_22f780;
        case 0x22f784u: goto label_22f784;
        case 0x22f788u: goto label_22f788;
        case 0x22f78cu: goto label_22f78c;
        case 0x22f790u: goto label_22f790;
        case 0x22f794u: goto label_22f794;
        case 0x22f798u: goto label_22f798;
        case 0x22f79cu: goto label_22f79c;
        case 0x22f7a0u: goto label_22f7a0;
        case 0x22f7a4u: goto label_22f7a4;
        case 0x22f7a8u: goto label_22f7a8;
        case 0x22f7acu: goto label_22f7ac;
        case 0x22f7b0u: goto label_22f7b0;
        case 0x22f7b4u: goto label_22f7b4;
        case 0x22f7b8u: goto label_22f7b8;
        case 0x22f7bcu: goto label_22f7bc;
        case 0x22f7c0u: goto label_22f7c0;
        case 0x22f7c4u: goto label_22f7c4;
        case 0x22f7c8u: goto label_22f7c8;
        case 0x22f7ccu: goto label_22f7cc;
        case 0x22f7d0u: goto label_22f7d0;
        case 0x22f7d4u: goto label_22f7d4;
        case 0x22f7d8u: goto label_22f7d8;
        case 0x22f7dcu: goto label_22f7dc;
        case 0x22f7e0u: goto label_22f7e0;
        case 0x22f7e4u: goto label_22f7e4;
        case 0x22f7e8u: goto label_22f7e8;
        case 0x22f7ecu: goto label_22f7ec;
        case 0x22f7f0u: goto label_22f7f0;
        case 0x22f7f4u: goto label_22f7f4;
        case 0x22f7f8u: goto label_22f7f8;
        case 0x22f7fcu: goto label_22f7fc;
        case 0x22f800u: goto label_22f800;
        case 0x22f804u: goto label_22f804;
        case 0x22f808u: goto label_22f808;
        case 0x22f80cu: goto label_22f80c;
        case 0x22f810u: goto label_22f810;
        case 0x22f814u: goto label_22f814;
        case 0x22f818u: goto label_22f818;
        case 0x22f81cu: goto label_22f81c;
        case 0x22f820u: goto label_22f820;
        case 0x22f824u: goto label_22f824;
        case 0x22f828u: goto label_22f828;
        case 0x22f82cu: goto label_22f82c;
        case 0x22f830u: goto label_22f830;
        case 0x22f834u: goto label_22f834;
        case 0x22f838u: goto label_22f838;
        case 0x22f83cu: goto label_22f83c;
        case 0x22f840u: goto label_22f840;
        case 0x22f844u: goto label_22f844;
        case 0x22f848u: goto label_22f848;
        case 0x22f84cu: goto label_22f84c;
        case 0x22f850u: goto label_22f850;
        case 0x22f854u: goto label_22f854;
        case 0x22f858u: goto label_22f858;
        case 0x22f85cu: goto label_22f85c;
        case 0x22f860u: goto label_22f860;
        case 0x22f864u: goto label_22f864;
        case 0x22f868u: goto label_22f868;
        case 0x22f86cu: goto label_22f86c;
        case 0x22f870u: goto label_22f870;
        case 0x22f874u: goto label_22f874;
        case 0x22f878u: goto label_22f878;
        case 0x22f87cu: goto label_22f87c;
        case 0x22f880u: goto label_22f880;
        case 0x22f884u: goto label_22f884;
        case 0x22f888u: goto label_22f888;
        case 0x22f88cu: goto label_22f88c;
        case 0x22f890u: goto label_22f890;
        case 0x22f894u: goto label_22f894;
        case 0x22f898u: goto label_22f898;
        case 0x22f89cu: goto label_22f89c;
        case 0x22f8a0u: goto label_22f8a0;
        case 0x22f8a4u: goto label_22f8a4;
        case 0x22f8a8u: goto label_22f8a8;
        case 0x22f8acu: goto label_22f8ac;
        case 0x22f8b0u: goto label_22f8b0;
        case 0x22f8b4u: goto label_22f8b4;
        case 0x22f8b8u: goto label_22f8b8;
        case 0x22f8bcu: goto label_22f8bc;
        case 0x22f8c0u: goto label_22f8c0;
        case 0x22f8c4u: goto label_22f8c4;
        case 0x22f8c8u: goto label_22f8c8;
        case 0x22f8ccu: goto label_22f8cc;
        case 0x22f8d0u: goto label_22f8d0;
        case 0x22f8d4u: goto label_22f8d4;
        case 0x22f8d8u: goto label_22f8d8;
        case 0x22f8dcu: goto label_22f8dc;
        case 0x22f8e0u: goto label_22f8e0;
        case 0x22f8e4u: goto label_22f8e4;
        case 0x22f8e8u: goto label_22f8e8;
        case 0x22f8ecu: goto label_22f8ec;
        case 0x22f8f0u: goto label_22f8f0;
        case 0x22f8f4u: goto label_22f8f4;
        case 0x22f8f8u: goto label_22f8f8;
        case 0x22f8fcu: goto label_22f8fc;
        case 0x22f900u: goto label_22f900;
        case 0x22f904u: goto label_22f904;
        case 0x22f908u: goto label_22f908;
        case 0x22f90cu: goto label_22f90c;
        case 0x22f910u: goto label_22f910;
        case 0x22f914u: goto label_22f914;
        case 0x22f918u: goto label_22f918;
        case 0x22f91cu: goto label_22f91c;
        case 0x22f920u: goto label_22f920;
        case 0x22f924u: goto label_22f924;
        case 0x22f928u: goto label_22f928;
        case 0x22f92cu: goto label_22f92c;
        case 0x22f930u: goto label_22f930;
        case 0x22f934u: goto label_22f934;
        case 0x22f938u: goto label_22f938;
        case 0x22f93cu: goto label_22f93c;
        case 0x22f940u: goto label_22f940;
        case 0x22f944u: goto label_22f944;
        case 0x22f948u: goto label_22f948;
        case 0x22f94cu: goto label_22f94c;
        case 0x22f950u: goto label_22f950;
        case 0x22f954u: goto label_22f954;
        case 0x22f958u: goto label_22f958;
        case 0x22f95cu: goto label_22f95c;
        case 0x22f960u: goto label_22f960;
        case 0x22f964u: goto label_22f964;
        case 0x22f968u: goto label_22f968;
        case 0x22f96cu: goto label_22f96c;
        case 0x22f970u: goto label_22f970;
        case 0x22f974u: goto label_22f974;
        case 0x22f978u: goto label_22f978;
        case 0x22f97cu: goto label_22f97c;
        case 0x22f980u: goto label_22f980;
        case 0x22f984u: goto label_22f984;
        case 0x22f988u: goto label_22f988;
        case 0x22f98cu: goto label_22f98c;
        case 0x22f990u: goto label_22f990;
        case 0x22f994u: goto label_22f994;
        case 0x22f998u: goto label_22f998;
        case 0x22f99cu: goto label_22f99c;
        case 0x22f9a0u: goto label_22f9a0;
        case 0x22f9a4u: goto label_22f9a4;
        case 0x22f9a8u: goto label_22f9a8;
        case 0x22f9acu: goto label_22f9ac;
        case 0x22f9b0u: goto label_22f9b0;
        case 0x22f9b4u: goto label_22f9b4;
        case 0x22f9b8u: goto label_22f9b8;
        case 0x22f9bcu: goto label_22f9bc;
        case 0x22f9c0u: goto label_22f9c0;
        case 0x22f9c4u: goto label_22f9c4;
        case 0x22f9c8u: goto label_22f9c8;
        case 0x22f9ccu: goto label_22f9cc;
        case 0x22f9d0u: goto label_22f9d0;
        case 0x22f9d4u: goto label_22f9d4;
        case 0x22f9d8u: goto label_22f9d8;
        case 0x22f9dcu: goto label_22f9dc;
        case 0x22f9e0u: goto label_22f9e0;
        case 0x22f9e4u: goto label_22f9e4;
        case 0x22f9e8u: goto label_22f9e8;
        case 0x22f9ecu: goto label_22f9ec;
        case 0x22f9f0u: goto label_22f9f0;
        case 0x22f9f4u: goto label_22f9f4;
        case 0x22f9f8u: goto label_22f9f8;
        case 0x22f9fcu: goto label_22f9fc;
        case 0x22fa00u: goto label_22fa00;
        case 0x22fa04u: goto label_22fa04;
        case 0x22fa08u: goto label_22fa08;
        case 0x22fa0cu: goto label_22fa0c;
        case 0x22fa10u: goto label_22fa10;
        case 0x22fa14u: goto label_22fa14;
        case 0x22fa18u: goto label_22fa18;
        case 0x22fa1cu: goto label_22fa1c;
        case 0x22fa20u: goto label_22fa20;
        case 0x22fa24u: goto label_22fa24;
        case 0x22fa28u: goto label_22fa28;
        case 0x22fa2cu: goto label_22fa2c;
        case 0x22fa30u: goto label_22fa30;
        case 0x22fa34u: goto label_22fa34;
        case 0x22fa38u: goto label_22fa38;
        case 0x22fa3cu: goto label_22fa3c;
        case 0x22fa40u: goto label_22fa40;
        case 0x22fa44u: goto label_22fa44;
        case 0x22fa48u: goto label_22fa48;
        case 0x22fa4cu: goto label_22fa4c;
        case 0x22fa50u: goto label_22fa50;
        case 0x22fa54u: goto label_22fa54;
        case 0x22fa58u: goto label_22fa58;
        case 0x22fa5cu: goto label_22fa5c;
        case 0x22fa60u: goto label_22fa60;
        case 0x22fa64u: goto label_22fa64;
        case 0x22fa68u: goto label_22fa68;
        case 0x22fa6cu: goto label_22fa6c;
        case 0x22fa70u: goto label_22fa70;
        case 0x22fa74u: goto label_22fa74;
        case 0x22fa78u: goto label_22fa78;
        case 0x22fa7cu: goto label_22fa7c;
        case 0x22fa80u: goto label_22fa80;
        case 0x22fa84u: goto label_22fa84;
        case 0x22fa88u: goto label_22fa88;
        case 0x22fa8cu: goto label_22fa8c;
        case 0x22fa90u: goto label_22fa90;
        case 0x22fa94u: goto label_22fa94;
        case 0x22fa98u: goto label_22fa98;
        case 0x22fa9cu: goto label_22fa9c;
        case 0x22faa0u: goto label_22faa0;
        case 0x22faa4u: goto label_22faa4;
        case 0x22faa8u: goto label_22faa8;
        case 0x22faacu: goto label_22faac;
        case 0x22fab0u: goto label_22fab0;
        case 0x22fab4u: goto label_22fab4;
        case 0x22fab8u: goto label_22fab8;
        case 0x22fabcu: goto label_22fabc;
        case 0x22fac0u: goto label_22fac0;
        case 0x22fac4u: goto label_22fac4;
        case 0x22fac8u: goto label_22fac8;
        case 0x22faccu: goto label_22facc;
        case 0x22fad0u: goto label_22fad0;
        case 0x22fad4u: goto label_22fad4;
        case 0x22fad8u: goto label_22fad8;
        case 0x22fadcu: goto label_22fadc;
        case 0x22fae0u: goto label_22fae0;
        case 0x22fae4u: goto label_22fae4;
        case 0x22fae8u: goto label_22fae8;
        case 0x22faecu: goto label_22faec;
        case 0x22faf0u: goto label_22faf0;
        case 0x22faf4u: goto label_22faf4;
        case 0x22faf8u: goto label_22faf8;
        case 0x22fafcu: goto label_22fafc;
        case 0x22fb00u: goto label_22fb00;
        case 0x22fb04u: goto label_22fb04;
        case 0x22fb08u: goto label_22fb08;
        case 0x22fb0cu: goto label_22fb0c;
        case 0x22fb10u: goto label_22fb10;
        case 0x22fb14u: goto label_22fb14;
        case 0x22fb18u: goto label_22fb18;
        case 0x22fb1cu: goto label_22fb1c;
        case 0x22fb20u: goto label_22fb20;
        case 0x22fb24u: goto label_22fb24;
        case 0x22fb28u: goto label_22fb28;
        case 0x22fb2cu: goto label_22fb2c;
        case 0x22fb30u: goto label_22fb30;
        case 0x22fb34u: goto label_22fb34;
        case 0x22fb38u: goto label_22fb38;
        case 0x22fb3cu: goto label_22fb3c;
        case 0x22fb40u: goto label_22fb40;
        case 0x22fb44u: goto label_22fb44;
        case 0x22fb48u: goto label_22fb48;
        case 0x22fb4cu: goto label_22fb4c;
        case 0x22fb50u: goto label_22fb50;
        case 0x22fb54u: goto label_22fb54;
        case 0x22fb58u: goto label_22fb58;
        case 0x22fb5cu: goto label_22fb5c;
        case 0x22fb60u: goto label_22fb60;
        case 0x22fb64u: goto label_22fb64;
        case 0x22fb68u: goto label_22fb68;
        case 0x22fb6cu: goto label_22fb6c;
        case 0x22fb70u: goto label_22fb70;
        case 0x22fb74u: goto label_22fb74;
        case 0x22fb78u: goto label_22fb78;
        case 0x22fb7cu: goto label_22fb7c;
        case 0x22fb80u: goto label_22fb80;
        case 0x22fb84u: goto label_22fb84;
        case 0x22fb88u: goto label_22fb88;
        case 0x22fb8cu: goto label_22fb8c;
        case 0x22fb90u: goto label_22fb90;
        case 0x22fb94u: goto label_22fb94;
        case 0x22fb98u: goto label_22fb98;
        case 0x22fb9cu: goto label_22fb9c;
        case 0x22fba0u: goto label_22fba0;
        case 0x22fba4u: goto label_22fba4;
        case 0x22fba8u: goto label_22fba8;
        case 0x22fbacu: goto label_22fbac;
        case 0x22fbb0u: goto label_22fbb0;
        case 0x22fbb4u: goto label_22fbb4;
        case 0x22fbb8u: goto label_22fbb8;
        case 0x22fbbcu: goto label_22fbbc;
        case 0x22fbc0u: goto label_22fbc0;
        case 0x22fbc4u: goto label_22fbc4;
        case 0x22fbc8u: goto label_22fbc8;
        case 0x22fbccu: goto label_22fbcc;
        case 0x22fbd0u: goto label_22fbd0;
        case 0x22fbd4u: goto label_22fbd4;
        case 0x22fbd8u: goto label_22fbd8;
        case 0x22fbdcu: goto label_22fbdc;
        case 0x22fbe0u: goto label_22fbe0;
        case 0x22fbe4u: goto label_22fbe4;
        case 0x22fbe8u: goto label_22fbe8;
        case 0x22fbecu: goto label_22fbec;
        case 0x22fbf0u: goto label_22fbf0;
        case 0x22fbf4u: goto label_22fbf4;
        case 0x22fbf8u: goto label_22fbf8;
        case 0x22fbfcu: goto label_22fbfc;
        case 0x22fc00u: goto label_22fc00;
        case 0x22fc04u: goto label_22fc04;
        case 0x22fc08u: goto label_22fc08;
        case 0x22fc0cu: goto label_22fc0c;
        case 0x22fc10u: goto label_22fc10;
        case 0x22fc14u: goto label_22fc14;
        case 0x22fc18u: goto label_22fc18;
        case 0x22fc1cu: goto label_22fc1c;
        case 0x22fc20u: goto label_22fc20;
        case 0x22fc24u: goto label_22fc24;
        case 0x22fc28u: goto label_22fc28;
        case 0x22fc2cu: goto label_22fc2c;
        case 0x22fc30u: goto label_22fc30;
        case 0x22fc34u: goto label_22fc34;
        case 0x22fc38u: goto label_22fc38;
        case 0x22fc3cu: goto label_22fc3c;
        case 0x22fc40u: goto label_22fc40;
        case 0x22fc44u: goto label_22fc44;
        case 0x22fc48u: goto label_22fc48;
        case 0x22fc4cu: goto label_22fc4c;
        case 0x22fc50u: goto label_22fc50;
        case 0x22fc54u: goto label_22fc54;
        case 0x22fc58u: goto label_22fc58;
        case 0x22fc5cu: goto label_22fc5c;
        case 0x22fc60u: goto label_22fc60;
        case 0x22fc64u: goto label_22fc64;
        case 0x22fc68u: goto label_22fc68;
        case 0x22fc6cu: goto label_22fc6c;
        case 0x22fc70u: goto label_22fc70;
        case 0x22fc74u: goto label_22fc74;
        case 0x22fc78u: goto label_22fc78;
        case 0x22fc7cu: goto label_22fc7c;
        case 0x22fc80u: goto label_22fc80;
        case 0x22fc84u: goto label_22fc84;
        case 0x22fc88u: goto label_22fc88;
        case 0x22fc8cu: goto label_22fc8c;
        case 0x22fc90u: goto label_22fc90;
        case 0x22fc94u: goto label_22fc94;
        case 0x22fc98u: goto label_22fc98;
        case 0x22fc9cu: goto label_22fc9c;
        case 0x22fca0u: goto label_22fca0;
        case 0x22fca4u: goto label_22fca4;
        case 0x22fca8u: goto label_22fca8;
        case 0x22fcacu: goto label_22fcac;
        case 0x22fcb0u: goto label_22fcb0;
        case 0x22fcb4u: goto label_22fcb4;
        case 0x22fcb8u: goto label_22fcb8;
        case 0x22fcbcu: goto label_22fcbc;
        case 0x22fcc0u: goto label_22fcc0;
        case 0x22fcc4u: goto label_22fcc4;
        case 0x22fcc8u: goto label_22fcc8;
        case 0x22fcccu: goto label_22fccc;
        case 0x22fcd0u: goto label_22fcd0;
        case 0x22fcd4u: goto label_22fcd4;
        case 0x22fcd8u: goto label_22fcd8;
        case 0x22fcdcu: goto label_22fcdc;
        case 0x22fce0u: goto label_22fce0;
        case 0x22fce4u: goto label_22fce4;
        default: return;
    }

label_22f518:
    // 0x22f518: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x22f518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
label_22f51c:
    // 0x22f51c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x22f51cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_22f520:
    // 0x22f520: 0x14440005  bne         $v0, $a0, . + 4 + (0x5 << 2)
label_22f524:
    if (ctx->pc == 0x22F524u) {
        ctx->pc = 0x22F524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F520u;
        // 0x22f524: 0x671021  addu        $v0, $v1, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F528u;
        goto label_22f528;
    }
    ctx->pc = 0x22F520u;
    {
        const bool branch_taken_0x22f520 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x22F524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F520u;
        // 0x22f524: 0x671021  addu        $v0, $v1, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f520) {
            ctx->pc = 0x22F538u;
            goto label_22f538;
        }
    }
    ctx->pc = 0x22F528u;
label_22f528:
    // 0x22f528: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x22f528u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_22f52c:
    // 0x22f52c: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_22f530:
    if (ctx->pc == 0x22F530u) {
        ctx->pc = 0x22F534u;
        goto label_22f534;
    }
    ctx->pc = 0x22F52Cu;
    {
        const bool branch_taken_0x22f52c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22f52c) {
            ctx->pc = 0x22F538u;
            goto label_22f538;
        }
    }
    ctx->pc = 0x22F534u;
label_22f534:
    // 0x22f534: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x22f534u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_22f538:
    // 0x22f538: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x22f538u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_22f53c:
    // 0x22f53c: 0x28e20029  slti        $v0, $a3, 0x29
    ctx->pc = 0x22f53cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)41) ? 1 : 0);
label_22f540:
    // 0x22f540: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
label_22f544:
    if (ctx->pc == 0x22F544u) {
        ctx->pc = 0x22F544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F540u;
        // 0x22f544: 0x25080018  addiu       $t0, $t0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F548u;
        goto label_22f548;
    }
    ctx->pc = 0x22F540u;
    {
        const bool branch_taken_0x22f540 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22F544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F540u;
        // 0x22f544: 0x25080018  addiu       $t0, $t0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f540) {
            ctx->pc = 0x22F510u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x22f510; return; }
        }
    }
    ctx->pc = 0x22F548u;
label_22f548:
    // 0x22f548: 0x18c00035  blez        $a2, . + 4 + (0x35 << 2)
label_22f54c:
    if (ctx->pc == 0x22F54Cu) {
        ctx->pc = 0x22F54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F548u;
        // 0x22f54c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F550u;
        goto label_22f550;
    }
    ctx->pc = 0x22F548u;
    {
        const bool branch_taken_0x22f548 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x22F54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F548u;
        // 0x22f54c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f548) {
            ctx->pc = 0x22F620u;
            goto label_22f620;
        }
    }
    ctx->pc = 0x22F550u;
label_22f550:
    // 0x22f550: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x22f550u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22f554:
    // 0x22f554: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x22f554u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22f558:
    // 0x22f558: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x22f558u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
label_22f55c:
    // 0x22f55c: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x22f55cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
label_22f560:
    // 0x22f560: 0x24843420  addiu       $a0, $a0, 0x3420
    ctx->pc = 0x22f560u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13344));
label_22f564:
    // 0x22f564: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x22f564u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22f568:
    // 0x22f568: 0x24c6c990  addiu       $a2, $a2, -0x3670
    ctx->pc = 0x22f568u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294953360));
label_22f56c:
    // 0x22f56c: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x22f56cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_22f570:
    // 0x22f570: 0xc91021  addu        $v0, $a2, $t1
    ctx->pc = 0x22f570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
label_22f574:
    // 0x22f574: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x22f574u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_22f578:
    // 0x22f578: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x22f578u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_22f57c:
    // 0x22f57c: 0x8c2235fc  lw          $v0, 0x35FC($at)
    ctx->pc = 0x22f57cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13820)));
label_22f580:
    // 0x22f580: 0x14450005  bne         $v0, $a1, . + 4 + (0x5 << 2)
label_22f584:
    if (ctx->pc == 0x22F584u) {
        ctx->pc = 0x22F584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F580u;
        // 0x22f584: 0x881021  addu        $v0, $a0, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F588u;
        goto label_22f588;
    }
    ctx->pc = 0x22F580u;
    {
        const bool branch_taken_0x22f580 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x22F584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F580u;
        // 0x22f584: 0x881021  addu        $v0, $a0, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f580) {
            ctx->pc = 0x22F598u;
            goto label_22f598;
        }
    }
    ctx->pc = 0x22F588u;
label_22f588:
    // 0x22f588: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x22f588u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_22f58c:
    // 0x22f58c: 0x14430002  bne         $v0, $v1, . + 4 + (0x2 << 2)
label_22f590:
    if (ctx->pc == 0x22F590u) {
        ctx->pc = 0x22F594u;
        goto label_22f594;
    }
    ctx->pc = 0x22F58Cu;
    {
        const bool branch_taken_0x22f58c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x22f58c) {
            ctx->pc = 0x22F598u;
            goto label_22f598;
        }
    }
    ctx->pc = 0x22F594u;
label_22f594:
    // 0x22f594: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x22f594u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_22f598:
    // 0x22f598: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x22f598u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_22f59c:
    // 0x22f59c: 0x29020029  slti        $v0, $t0, 0x29
    ctx->pc = 0x22f59cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)41) ? 1 : 0);
label_22f5a0:
    // 0x22f5a0: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
label_22f5a4:
    if (ctx->pc == 0x22F5A4u) {
        ctx->pc = 0x22F5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F5A0u;
        // 0x22f5a4: 0x25290018  addiu       $t1, $t1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F5A8u;
        goto label_22f5a8;
    }
    ctx->pc = 0x22F5A0u;
    {
        const bool branch_taken_0x22f5a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22F5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F5A0u;
        // 0x22f5a4: 0x25290018  addiu       $t1, $t1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f5a0) {
            ctx->pc = 0x22F570u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22f570;
        }
    }
    ctx->pc = 0x22F5A8u;
label_22f5a8:
    // 0x22f5a8: 0x18e0001e  blez        $a3, . + 4 + (0x1E << 2)
label_22f5ac:
    if (ctx->pc == 0x22F5ACu) {
        ctx->pc = 0x22F5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F5A8u;
        // 0x22f5ac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F5B0u;
        goto label_22f5b0;
    }
    ctx->pc = 0x22F5A8u;
    {
        const bool branch_taken_0x22f5a8 = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x22F5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F5A8u;
        // 0x22f5ac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f5a8) {
            ctx->pc = 0x22F624u;
            goto label_22f624;
        }
    }
    ctx->pc = 0x22F5B0u;
label_22f5b0:
    // 0x22f5b0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x22f5b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22f5b4:
    // 0x22f5b4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x22f5b4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22f5b8:
    // 0x22f5b8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x22f5b8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22f5bc:
    // 0x22f5bc: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x22f5bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
label_22f5c0:
    // 0x22f5c0: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x22f5c0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
label_22f5c4:
    // 0x22f5c4: 0x24843420  addiu       $a0, $a0, 0x3420
    ctx->pc = 0x22f5c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13344));
label_22f5c8:
    // 0x22f5c8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x22f5c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_22f5cc:
    // 0x22f5cc: 0x24c6c990  addiu       $a2, $a2, -0x3670
    ctx->pc = 0x22f5ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294953360));
label_22f5d0:
    // 0x22f5d0: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x22f5d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_22f5d4:
    // 0x22f5d4: 0xc91021  addu        $v0, $a2, $t1
    ctx->pc = 0x22f5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
label_22f5d8:
    // 0x22f5d8: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x22f5d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_22f5dc:
    // 0x22f5dc: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x22f5dcu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_22f5e0:
    // 0x22f5e0: 0x8c2235fc  lw          $v0, 0x35FC($at)
    ctx->pc = 0x22f5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13820)));
label_22f5e4:
    // 0x22f5e4: 0x14450005  bne         $v0, $a1, . + 4 + (0x5 << 2)
label_22f5e8:
    if (ctx->pc == 0x22F5E8u) {
        ctx->pc = 0x22F5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F5E4u;
        // 0x22f5e8: 0x881021  addu        $v0, $a0, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F5ECu;
        goto label_22f5ec;
    }
    ctx->pc = 0x22F5E4u;
    {
        const bool branch_taken_0x22f5e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x22F5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F5E4u;
        // 0x22f5e8: 0x881021  addu        $v0, $a0, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f5e4) {
            ctx->pc = 0x22F5FCu;
            goto label_22f5fc;
        }
    }
    ctx->pc = 0x22F5ECu;
label_22f5ec:
    // 0x22f5ec: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x22f5ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_22f5f0:
    // 0x22f5f0: 0x14430002  bne         $v0, $v1, . + 4 + (0x2 << 2)
label_22f5f4:
    if (ctx->pc == 0x22F5F4u) {
        ctx->pc = 0x22F5F8u;
        goto label_22f5f8;
    }
    ctx->pc = 0x22F5F0u;
    {
        const bool branch_taken_0x22f5f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x22f5f0) {
            ctx->pc = 0x22F5FCu;
            goto label_22f5fc;
        }
    }
    ctx->pc = 0x22F5F8u;
label_22f5f8:
    // 0x22f5f8: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x22f5f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_22f5fc:
    // 0x22f5fc: 0x0  nop
    ctx->pc = 0x22f5fcu;
    // NOP
label_22f600:
    // 0x22f600: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x22f600u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_22f604:
    // 0x22f604: 0x29020029  slti        $v0, $t0, 0x29
    ctx->pc = 0x22f604u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)41) ? 1 : 0);
label_22f608:
    // 0x22f608: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
label_22f60c:
    if (ctx->pc == 0x22F60Cu) {
        ctx->pc = 0x22F60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F608u;
        // 0x22f60c: 0x25290018  addiu       $t1, $t1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F610u;
        goto label_22f610;
    }
    ctx->pc = 0x22F608u;
    {
        const bool branch_taken_0x22f608 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22F60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F608u;
        // 0x22f60c: 0x25290018  addiu       $t1, $t1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f608) {
            ctx->pc = 0x22F5D4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22f5d4;
        }
    }
    ctx->pc = 0x22F610u;
label_22f610:
    // 0x22f610: 0x18e00003  blez        $a3, . + 4 + (0x3 << 2)
label_22f614:
    if (ctx->pc == 0x22F614u) {
        ctx->pc = 0x22F618u;
        goto label_22f618;
    }
    ctx->pc = 0x22F610u;
    {
        const bool branch_taken_0x22f610 = (GPR_S32(ctx, 7) <= 0);
        if (branch_taken_0x22f610) {
            ctx->pc = 0x22F620u;
            goto label_22f620;
        }
    }
    ctx->pc = 0x22F618u;
label_22f618:
    // 0x22f618: 0xc090208  jal         func_240820
label_22f61c:
    if (ctx->pc == 0x22F61Cu) {
        ctx->pc = 0x22F620u;
        goto label_22f620;
    }
    ctx->pc = 0x22F618u;
    SET_GPR_U32(ctx, 31, 0x22F620u);
    ctx->pc = 0x240820u;
    { ctx->pc = 0x240820; return; }
    ctx->pc = 0x22F620u;
label_22f620:
    // 0x22f620: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x22f620u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22f624:
    // 0x22f624: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x22f624u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22f628:
    // 0x22f628: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x22f628u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22f62c:
    // 0x22f62c: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x22f62cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
label_22f630:
    // 0x22f630: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x22f630u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
label_22f634:
    // 0x22f634: 0x24633420  addiu       $v1, $v1, 0x3420
    ctx->pc = 0x22f634u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 13344));
label_22f638:
    // 0x22f638: 0x24a5c990  addiu       $a1, $a1, -0x3670
    ctx->pc = 0x22f638u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953360));
label_22f63c:
    // 0x22f63c: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x22f63cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_22f640:
    // 0x22f640: 0xa81021  addu        $v0, $a1, $t0
    ctx->pc = 0x22f640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
label_22f644:
    // 0x22f644: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x22f644u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_22f648:
    // 0x22f648: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x22f648u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_22f64c:
    // 0x22f64c: 0x8c2235fc  lw          $v0, 0x35FC($at)
    ctx->pc = 0x22f64cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13820)));
label_22f650:
    // 0x22f650: 0x14440005  bne         $v0, $a0, . + 4 + (0x5 << 2)
label_22f654:
    if (ctx->pc == 0x22F654u) {
        ctx->pc = 0x22F654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F650u;
        // 0x22f654: 0x671021  addu        $v0, $v1, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F658u;
        goto label_22f658;
    }
    ctx->pc = 0x22F650u;
    {
        const bool branch_taken_0x22f650 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x22F654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F650u;
        // 0x22f654: 0x671021  addu        $v0, $v1, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f650) {
            ctx->pc = 0x22F668u;
            goto label_22f668;
        }
    }
    ctx->pc = 0x22F658u;
label_22f658:
    // 0x22f658: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x22f658u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_22f65c:
    // 0x22f65c: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_22f660:
    if (ctx->pc == 0x22F660u) {
        ctx->pc = 0x22F664u;
        goto label_22f664;
    }
    ctx->pc = 0x22F65Cu;
    {
        const bool branch_taken_0x22f65c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22f65c) {
            ctx->pc = 0x22F668u;
            goto label_22f668;
        }
    }
    ctx->pc = 0x22F664u;
label_22f664:
    // 0x22f664: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x22f664u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_22f668:
    // 0x22f668: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x22f668u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_22f66c:
    // 0x22f66c: 0x28e20029  slti        $v0, $a3, 0x29
    ctx->pc = 0x22f66cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)41) ? 1 : 0);
label_22f670:
    // 0x22f670: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
label_22f674:
    if (ctx->pc == 0x22F674u) {
        ctx->pc = 0x22F674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F670u;
        // 0x22f674: 0x25080018  addiu       $t0, $t0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F678u;
        goto label_22f678;
    }
    ctx->pc = 0x22F670u;
    {
        const bool branch_taken_0x22f670 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22F674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F670u;
        // 0x22f674: 0x25080018  addiu       $t0, $t0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f670) {
            ctx->pc = 0x22F640u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22f640;
        }
    }
    ctx->pc = 0x22F678u;
label_22f678:
    // 0x22f678: 0x18c00005  blez        $a2, . + 4 + (0x5 << 2)
label_22f67c:
    if (ctx->pc == 0x22F67Cu) {
        ctx->pc = 0x22F67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F678u;
        // 0x22f67c: 0x2404001e  addiu       $a0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F680u;
        goto label_22f680;
    }
    ctx->pc = 0x22F678u;
    {
        const bool branch_taken_0x22f678 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x22F67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F678u;
        // 0x22f67c: 0x2404001e  addiu       $a0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f678) {
            ctx->pc = 0x22F690u;
            goto label_22f690;
        }
    }
    ctx->pc = 0x22F680u;
label_22f680:
    // 0x22f680: 0xc09018c  jal         func_240630
label_22f684:
    if (ctx->pc == 0x22F684u) {
        ctx->pc = 0x22F688u;
        goto label_22f688;
    }
    ctx->pc = 0x22F680u;
    SET_GPR_U32(ctx, 31, 0x22F688u);
    ctx->pc = 0x240630u;
    { ctx->pc = 0x240630; return; }
    ctx->pc = 0x22F688u;
label_22f688:
    // 0x22f688: 0xc09018c  jal         func_240630
label_22f68c:
    if (ctx->pc == 0x22F68Cu) {
        ctx->pc = 0x22F68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F688u;
        // 0x22f68c: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F690u;
        goto label_22f690;
    }
    ctx->pc = 0x22F688u;
    SET_GPR_U32(ctx, 31, 0x22F690u);
    ctx->pc = 0x22F68Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F688u;
    // 0x22f68c: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x240630u;
    { ctx->pc = 0x240630; return; }
    ctx->pc = 0x22F690u;
label_22f690:
    // 0x22f690: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x22f690u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22f694:
    // 0x22f694: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x22f694u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22f698:
    // 0x22f698: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x22f698u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22f69c:
    // 0x22f69c: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x22f69cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
label_22f6a0:
    // 0x22f6a0: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x22f6a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
label_22f6a4:
    // 0x22f6a4: 0x24633420  addiu       $v1, $v1, 0x3420
    ctx->pc = 0x22f6a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 13344));
label_22f6a8:
    // 0x22f6a8: 0x24a5c990  addiu       $a1, $a1, -0x3670
    ctx->pc = 0x22f6a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953360));
label_22f6ac:
    // 0x22f6ac: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x22f6acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_22f6b0:
    // 0x22f6b0: 0xa81021  addu        $v0, $a1, $t0
    ctx->pc = 0x22f6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
label_22f6b4:
    // 0x22f6b4: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x22f6b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_22f6b8:
    // 0x22f6b8: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x22f6b8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_22f6bc:
    // 0x22f6bc: 0x8c2235fc  lw          $v0, 0x35FC($at)
    ctx->pc = 0x22f6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13820)));
label_22f6c0:
    // 0x22f6c0: 0x14440005  bne         $v0, $a0, . + 4 + (0x5 << 2)
label_22f6c4:
    if (ctx->pc == 0x22F6C4u) {
        ctx->pc = 0x22F6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F6C0u;
        // 0x22f6c4: 0x671021  addu        $v0, $v1, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F6C8u;
        goto label_22f6c8;
    }
    ctx->pc = 0x22F6C0u;
    {
        const bool branch_taken_0x22f6c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x22F6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F6C0u;
        // 0x22f6c4: 0x671021  addu        $v0, $v1, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f6c0) {
            ctx->pc = 0x22F6D8u;
            goto label_22f6d8;
        }
    }
    ctx->pc = 0x22F6C8u;
label_22f6c8:
    // 0x22f6c8: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x22f6c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_22f6cc:
    // 0x22f6cc: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_22f6d0:
    if (ctx->pc == 0x22F6D0u) {
        ctx->pc = 0x22F6D4u;
        goto label_22f6d4;
    }
    ctx->pc = 0x22F6CCu;
    {
        const bool branch_taken_0x22f6cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22f6cc) {
            ctx->pc = 0x22F6D8u;
            goto label_22f6d8;
        }
    }
    ctx->pc = 0x22F6D4u;
label_22f6d4:
    // 0x22f6d4: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x22f6d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_22f6d8:
    // 0x22f6d8: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x22f6d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_22f6dc:
    // 0x22f6dc: 0x28e20029  slti        $v0, $a3, 0x29
    ctx->pc = 0x22f6dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)41) ? 1 : 0);
label_22f6e0:
    // 0x22f6e0: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
label_22f6e4:
    if (ctx->pc == 0x22F6E4u) {
        ctx->pc = 0x22F6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F6E0u;
        // 0x22f6e4: 0x25080018  addiu       $t0, $t0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F6E8u;
        goto label_22f6e8;
    }
    ctx->pc = 0x22F6E0u;
    {
        const bool branch_taken_0x22f6e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22F6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F6E0u;
        // 0x22f6e4: 0x25080018  addiu       $t0, $t0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f6e0) {
            ctx->pc = 0x22F6B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22f6b0;
        }
    }
    ctx->pc = 0x22F6E8u;
label_22f6e8:
    // 0x22f6e8: 0x28c20002  slti        $v0, $a2, 0x2
    ctx->pc = 0x22f6e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
label_22f6ec:
    // 0x22f6ec: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_22f6f0:
    if (ctx->pc == 0x22F6F0u) {
        ctx->pc = 0x22F6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F6ECu;
        // 0x22f6f0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F6F4u;
        goto label_22f6f4;
    }
    ctx->pc = 0x22F6ECu;
    {
        const bool branch_taken_0x22f6ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22F6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F6ECu;
        // 0x22f6f0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f6ec) {
            ctx->pc = 0x22F708u;
            goto label_22f708;
        }
    }
    ctx->pc = 0x22F6F4u;
label_22f6f4:
    // 0x22f6f4: 0xc09018c  jal         func_240630
label_22f6f8:
    if (ctx->pc == 0x22F6F8u) {
        ctx->pc = 0x22F6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F6F4u;
        // 0x22f6f8: 0x2404001c  addiu       $a0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F6FCu;
        goto label_22f6fc;
    }
    ctx->pc = 0x22F6F4u;
    SET_GPR_U32(ctx, 31, 0x22F6FCu);
    ctx->pc = 0x22F6F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F6F4u;
    // 0x22f6f8: 0x2404001c  addiu       $a0, $zero, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x240630u;
    { ctx->pc = 0x240630; return; }
    ctx->pc = 0x22F6FCu;
label_22f6fc:
    // 0x22f6fc: 0xc09018c  jal         func_240630
label_22f700:
    if (ctx->pc == 0x22F700u) {
        ctx->pc = 0x22F700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F6FCu;
        // 0x22f700: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F704u;
        goto label_22f704;
    }
    ctx->pc = 0x22F6FCu;
    SET_GPR_U32(ctx, 31, 0x22F704u);
    ctx->pc = 0x22F700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F6FCu;
    // 0x22f700: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x240630u;
    { ctx->pc = 0x240630; return; }
    ctx->pc = 0x22F704u;
label_22f704:
    // 0x22f704: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x22f704u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22f708:
    // 0x22f708: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x22f708u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22f70c:
    // 0x22f70c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x22f70cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22f710:
    // 0x22f710: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x22f710u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
label_22f714:
    // 0x22f714: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x22f714u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
label_22f718:
    // 0x22f718: 0x24843420  addiu       $a0, $a0, 0x3420
    ctx->pc = 0x22f718u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13344));
label_22f71c:
    // 0x22f71c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x22f71cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22f720:
    // 0x22f720: 0x24c6c990  addiu       $a2, $a2, -0x3670
    ctx->pc = 0x22f720u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294953360));
label_22f724:
    // 0x22f724: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x22f724u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_22f728:
    // 0x22f728: 0xc91021  addu        $v0, $a2, $t1
    ctx->pc = 0x22f728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
label_22f72c:
    // 0x22f72c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x22f72cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_22f730:
    // 0x22f730: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x22f730u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_22f734:
    // 0x22f734: 0x8c2235fc  lw          $v0, 0x35FC($at)
    ctx->pc = 0x22f734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13820)));
label_22f738:
    // 0x22f738: 0x14450005  bne         $v0, $a1, . + 4 + (0x5 << 2)
label_22f73c:
    if (ctx->pc == 0x22F73Cu) {
        ctx->pc = 0x22F73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F738u;
        // 0x22f73c: 0x881021  addu        $v0, $a0, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F740u;
        goto label_22f740;
    }
    ctx->pc = 0x22F738u;
    {
        const bool branch_taken_0x22f738 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x22F73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F738u;
        // 0x22f73c: 0x881021  addu        $v0, $a0, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f738) {
            ctx->pc = 0x22F750u;
            goto label_22f750;
        }
    }
    ctx->pc = 0x22F740u;
label_22f740:
    // 0x22f740: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x22f740u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_22f744:
    // 0x22f744: 0x14430002  bne         $v0, $v1, . + 4 + (0x2 << 2)
label_22f748:
    if (ctx->pc == 0x22F748u) {
        ctx->pc = 0x22F74Cu;
        goto label_22f74c;
    }
    ctx->pc = 0x22F744u;
    {
        const bool branch_taken_0x22f744 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x22f744) {
            ctx->pc = 0x22F750u;
            goto label_22f750;
        }
    }
    ctx->pc = 0x22F74Cu;
label_22f74c:
    // 0x22f74c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x22f74cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_22f750:
    // 0x22f750: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x22f750u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_22f754:
    // 0x22f754: 0x29020029  slti        $v0, $t0, 0x29
    ctx->pc = 0x22f754u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)41) ? 1 : 0);
label_22f758:
    // 0x22f758: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
label_22f75c:
    if (ctx->pc == 0x22F75Cu) {
        ctx->pc = 0x22F75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F758u;
        // 0x22f75c: 0x25290018  addiu       $t1, $t1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F760u;
        goto label_22f760;
    }
    ctx->pc = 0x22F758u;
    {
        const bool branch_taken_0x22f758 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22F75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F758u;
        // 0x22f75c: 0x25290018  addiu       $t1, $t1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f758) {
            ctx->pc = 0x22F728u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22f728;
        }
    }
    ctx->pc = 0x22F760u;
label_22f760:
    // 0x22f760: 0x18e00005  blez        $a3, . + 4 + (0x5 << 2)
label_22f764:
    if (ctx->pc == 0x22F764u) {
        ctx->pc = 0x22F764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F760u;
        // 0x22f764: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F768u;
        goto label_22f768;
    }
    ctx->pc = 0x22F760u;
    {
        const bool branch_taken_0x22f760 = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x22F764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F760u;
        // 0x22f764: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f760) {
            ctx->pc = 0x22F778u;
            goto label_22f778;
        }
    }
    ctx->pc = 0x22F768u;
label_22f768:
    // 0x22f768: 0xc09018c  jal         func_240630
label_22f76c:
    if (ctx->pc == 0x22F76Cu) {
        ctx->pc = 0x22F770u;
        goto label_22f770;
    }
    ctx->pc = 0x22F768u;
    SET_GPR_U32(ctx, 31, 0x22F770u);
    ctx->pc = 0x240630u;
    { ctx->pc = 0x240630; return; }
    ctx->pc = 0x22F770u;
label_22f770:
    // 0x22f770: 0xc09018c  jal         func_240630
label_22f774:
    if (ctx->pc == 0x22F774u) {
        ctx->pc = 0x22F774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F770u;
        // 0x22f774: 0x24040025  addiu       $a0, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F778u;
        goto label_22f778;
    }
    ctx->pc = 0x22F770u;
    SET_GPR_U32(ctx, 31, 0x22F778u);
    ctx->pc = 0x22F774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F770u;
    // 0x22f774: 0x24040025  addiu       $a0, $zero, 0x25 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    ctx->in_delay_slot = false;
    ctx->pc = 0x240630u;
    { ctx->pc = 0x240630; return; }
    ctx->pc = 0x22F778u;
label_22f778:
    // 0x22f778: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x22f778u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22f77c:
    // 0x22f77c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x22f77cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22f780:
    // 0x22f780: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x22f780u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22f784:
    // 0x22f784: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x22f784u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
label_22f788:
    // 0x22f788: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x22f788u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
label_22f78c:
    // 0x22f78c: 0x24843420  addiu       $a0, $a0, 0x3420
    ctx->pc = 0x22f78cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13344));
label_22f790:
    // 0x22f790: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x22f790u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22f794:
    // 0x22f794: 0x24c6c990  addiu       $a2, $a2, -0x3670
    ctx->pc = 0x22f794u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294953360));
label_22f798:
    // 0x22f798: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x22f798u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_22f79c:
    // 0x22f79c: 0xc91021  addu        $v0, $a2, $t1
    ctx->pc = 0x22f79cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
label_22f7a0:
    // 0x22f7a0: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x22f7a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_22f7a4:
    // 0x22f7a4: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x22f7a4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_22f7a8:
    // 0x22f7a8: 0x8c2235fc  lw          $v0, 0x35FC($at)
    ctx->pc = 0x22f7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13820)));
label_22f7ac:
    // 0x22f7ac: 0x14450005  bne         $v0, $a1, . + 4 + (0x5 << 2)
label_22f7b0:
    if (ctx->pc == 0x22F7B0u) {
        ctx->pc = 0x22F7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F7ACu;
        // 0x22f7b0: 0x881021  addu        $v0, $a0, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F7B4u;
        goto label_22f7b4;
    }
    ctx->pc = 0x22F7ACu;
    {
        const bool branch_taken_0x22f7ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x22F7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F7ACu;
        // 0x22f7b0: 0x881021  addu        $v0, $a0, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f7ac) {
            ctx->pc = 0x22F7C4u;
            goto label_22f7c4;
        }
    }
    ctx->pc = 0x22F7B4u;
label_22f7b4:
    // 0x22f7b4: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x22f7b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_22f7b8:
    // 0x22f7b8: 0x14430002  bne         $v0, $v1, . + 4 + (0x2 << 2)
label_22f7bc:
    if (ctx->pc == 0x22F7BCu) {
        ctx->pc = 0x22F7C0u;
        goto label_22f7c0;
    }
    ctx->pc = 0x22F7B8u;
    {
        const bool branch_taken_0x22f7b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x22f7b8) {
            ctx->pc = 0x22F7C4u;
            goto label_22f7c4;
        }
    }
    ctx->pc = 0x22F7C0u;
label_22f7c0:
    // 0x22f7c0: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x22f7c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_22f7c4:
    // 0x22f7c4: 0x0  nop
    ctx->pc = 0x22f7c4u;
    // NOP
label_22f7c8:
    // 0x22f7c8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x22f7c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_22f7cc:
    // 0x22f7cc: 0x29020029  slti        $v0, $t0, 0x29
    ctx->pc = 0x22f7ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)41) ? 1 : 0);
label_22f7d0:
    // 0x22f7d0: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
label_22f7d4:
    if (ctx->pc == 0x22F7D4u) {
        ctx->pc = 0x22F7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F7D0u;
        // 0x22f7d4: 0x25290018  addiu       $t1, $t1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F7D8u;
        goto label_22f7d8;
    }
    ctx->pc = 0x22F7D0u;
    {
        const bool branch_taken_0x22f7d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22F7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F7D0u;
        // 0x22f7d4: 0x25290018  addiu       $t1, $t1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f7d0) {
            ctx->pc = 0x22F79Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22f79c;
        }
    }
    ctx->pc = 0x22F7D8u;
label_22f7d8:
    // 0x22f7d8: 0x28e20002  slti        $v0, $a3, 0x2
    ctx->pc = 0x22f7d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)2) ? 1 : 0);
label_22f7dc:
    // 0x22f7dc: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_22f7e0:
    if (ctx->pc == 0x22F7E0u) {
        ctx->pc = 0x22F7E4u;
        goto label_22f7e4;
    }
    ctx->pc = 0x22F7DCu;
    {
        const bool branch_taken_0x22f7dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22f7dc) {
            ctx->pc = 0x22F7F4u;
            goto label_22f7f4;
        }
    }
    ctx->pc = 0x22F7E4u;
label_22f7e4:
    // 0x22f7e4: 0xc09018c  jal         func_240630
label_22f7e8:
    if (ctx->pc == 0x22F7E8u) {
        ctx->pc = 0x22F7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F7E4u;
        // 0x22f7e8: 0x24040020  addiu       $a0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F7ECu;
        goto label_22f7ec;
    }
    ctx->pc = 0x22F7E4u;
    SET_GPR_U32(ctx, 31, 0x22F7ECu);
    ctx->pc = 0x22F7E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F7E4u;
    // 0x22f7e8: 0x24040020  addiu       $a0, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x240630u;
    { ctx->pc = 0x240630; return; }
    ctx->pc = 0x22F7ECu;
label_22f7ec:
    // 0x22f7ec: 0xc09018c  jal         func_240630
label_22f7f0:
    if (ctx->pc == 0x22F7F0u) {
        ctx->pc = 0x22F7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F7ECu;
        // 0x22f7f0: 0x2404000f  addiu       $a0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F7F4u;
        goto label_22f7f4;
    }
    ctx->pc = 0x22F7ECu;
    SET_GPR_U32(ctx, 31, 0x22F7F4u);
    ctx->pc = 0x22F7F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F7ECu;
    // 0x22f7f0: 0x2404000f  addiu       $a0, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x240630u;
    { ctx->pc = 0x240630; return; }
    ctx->pc = 0x22F7F4u;
label_22f7f4:
    // 0x22f7f4: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x22f7f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
label_22f7f8:
    // 0x22f7f8: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x22f7f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_22f7fc:
    // 0x22f7fc: 0x8c22001c  lw          $v0, 0x1C($at)
    ctx->pc = 0x22f7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 28)));
label_22f800:
    // 0x22f800: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
label_22f804:
    if (ctx->pc == 0x22F804u) {
        ctx->pc = 0x22F804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F800u;
        // 0x22f804: 0x24040026  addiu       $a0, $zero, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F808u;
        goto label_22f808;
    }
    ctx->pc = 0x22F800u;
    {
        const bool branch_taken_0x22f800 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x22F804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F800u;
        // 0x22f804: 0x24040026  addiu       $a0, $zero, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f800) {
            ctx->pc = 0x22F818u;
            goto label_22f818;
        }
    }
    ctx->pc = 0x22F808u;
label_22f808:
    // 0x22f808: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x22f808u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
label_22f80c:
    // 0x22f80c: 0x8c220304  lw          $v0, 0x304($at)
    ctx->pc = 0x22f80cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 772)));
label_22f810:
    // 0x22f810: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
label_22f814:
    if (ctx->pc == 0x22F814u) {
        ctx->pc = 0x22F814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F810u;
        // 0x22f814: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F818u;
        goto label_22f818;
    }
    ctx->pc = 0x22F810u;
    {
        const bool branch_taken_0x22f810 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x22F814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F810u;
        // 0x22f814: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f810) {
            ctx->pc = 0x22F824u;
            goto label_22f824;
        }
    }
    ctx->pc = 0x22F818u;
label_22f818:
    // 0x22f818: 0xc09018c  jal         func_240630
label_22f81c:
    if (ctx->pc == 0x22F81Cu) {
        ctx->pc = 0x22F820u;
        goto label_22f820;
    }
    ctx->pc = 0x22F818u;
    SET_GPR_U32(ctx, 31, 0x22F820u);
    ctx->pc = 0x240630u;
    { ctx->pc = 0x240630; return; }
    ctx->pc = 0x22F820u;
label_22f820:
    // 0x22f820: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x22f820u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22f824:
    // 0x22f824: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x22f824u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22f828:
    // 0x22f828: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x22f828u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22f82c:
    // 0x22f82c: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x22f82cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
label_22f830:
    // 0x22f830: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x22f830u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
label_22f834:
    // 0x22f834: 0x24843420  addiu       $a0, $a0, 0x3420
    ctx->pc = 0x22f834u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13344));
label_22f838:
    // 0x22f838: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x22f838u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_22f83c:
    // 0x22f83c: 0x24c6c990  addiu       $a2, $a2, -0x3670
    ctx->pc = 0x22f83cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294953360));
label_22f840:
    // 0x22f840: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x22f840u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_22f844:
    // 0x22f844: 0xc91021  addu        $v0, $a2, $t1
    ctx->pc = 0x22f844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
label_22f848:
    // 0x22f848: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x22f848u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_22f84c:
    // 0x22f84c: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x22f84cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_22f850:
    // 0x22f850: 0x8c2235fc  lw          $v0, 0x35FC($at)
    ctx->pc = 0x22f850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13820)));
label_22f854:
    // 0x22f854: 0x14450005  bne         $v0, $a1, . + 4 + (0x5 << 2)
label_22f858:
    if (ctx->pc == 0x22F858u) {
        ctx->pc = 0x22F858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F854u;
        // 0x22f858: 0x881021  addu        $v0, $a0, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F85Cu;
        goto label_22f85c;
    }
    ctx->pc = 0x22F854u;
    {
        const bool branch_taken_0x22f854 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x22F858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F854u;
        // 0x22f858: 0x881021  addu        $v0, $a0, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f854) {
            ctx->pc = 0x22F86Cu;
            goto label_22f86c;
        }
    }
    ctx->pc = 0x22F85Cu;
label_22f85c:
    // 0x22f85c: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x22f85cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_22f860:
    // 0x22f860: 0x14430002  bne         $v0, $v1, . + 4 + (0x2 << 2)
label_22f864:
    if (ctx->pc == 0x22F864u) {
        ctx->pc = 0x22F868u;
        goto label_22f868;
    }
    ctx->pc = 0x22F860u;
    {
        const bool branch_taken_0x22f860 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x22f860) {
            ctx->pc = 0x22F86Cu;
            goto label_22f86c;
        }
    }
    ctx->pc = 0x22F868u;
label_22f868:
    // 0x22f868: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x22f868u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_22f86c:
    // 0x22f86c: 0x0  nop
    ctx->pc = 0x22f86cu;
    // NOP
label_22f870:
    // 0x22f870: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x22f870u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_22f874:
    // 0x22f874: 0x29020029  slti        $v0, $t0, 0x29
    ctx->pc = 0x22f874u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)41) ? 1 : 0);
label_22f878:
    // 0x22f878: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
label_22f87c:
    if (ctx->pc == 0x22F87Cu) {
        ctx->pc = 0x22F87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F878u;
        // 0x22f87c: 0x25290018  addiu       $t1, $t1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F880u;
        goto label_22f880;
    }
    ctx->pc = 0x22F878u;
    {
        const bool branch_taken_0x22f878 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22F87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F878u;
        // 0x22f87c: 0x25290018  addiu       $t1, $t1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f878) {
            ctx->pc = 0x22F844u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22f844;
        }
    }
    ctx->pc = 0x22F880u;
label_22f880:
    // 0x22f880: 0x18e00005  blez        $a3, . + 4 + (0x5 << 2)
label_22f884:
    if (ctx->pc == 0x22F884u) {
        ctx->pc = 0x22F884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F880u;
        // 0x22f884: 0x24040021  addiu       $a0, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F888u;
        goto label_22f888;
    }
    ctx->pc = 0x22F880u;
    {
        const bool branch_taken_0x22f880 = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x22F884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F880u;
        // 0x22f884: 0x24040021  addiu       $a0, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f880) {
            ctx->pc = 0x22F898u;
            goto label_22f898;
        }
    }
    ctx->pc = 0x22F888u;
label_22f888:
    // 0x22f888: 0xc09018c  jal         func_240630
label_22f88c:
    if (ctx->pc == 0x22F88Cu) {
        ctx->pc = 0x22F890u;
        goto label_22f890;
    }
    ctx->pc = 0x22F888u;
    SET_GPR_U32(ctx, 31, 0x22F890u);
    ctx->pc = 0x240630u;
    { ctx->pc = 0x240630; return; }
    ctx->pc = 0x22F890u;
label_22f890:
    // 0x22f890: 0xc09018c  jal         func_240630
label_22f894:
    if (ctx->pc == 0x22F894u) {
        ctx->pc = 0x22F894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F890u;
        // 0x22f894: 0x24040013  addiu       $a0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F898u;
        goto label_22f898;
    }
    ctx->pc = 0x22F890u;
    SET_GPR_U32(ctx, 31, 0x22F898u);
    ctx->pc = 0x22F894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F890u;
    // 0x22f894: 0x24040013  addiu       $a0, $zero, 0x13 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x240630u;
    { ctx->pc = 0x240630; return; }
    ctx->pc = 0x22F898u;
label_22f898:
    // 0x22f898: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x22f898u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22f89c:
    // 0x22f89c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x22f89cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22f8a0:
    // 0x22f8a0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x22f8a0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22f8a4:
    // 0x22f8a4: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x22f8a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
label_22f8a8:
    // 0x22f8a8: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x22f8a8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
label_22f8ac:
    // 0x22f8ac: 0x24843420  addiu       $a0, $a0, 0x3420
    ctx->pc = 0x22f8acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13344));
label_22f8b0:
    // 0x22f8b0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x22f8b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_22f8b4:
    // 0x22f8b4: 0x24c6c990  addiu       $a2, $a2, -0x3670
    ctx->pc = 0x22f8b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294953360));
label_22f8b8:
    // 0x22f8b8: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x22f8b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_22f8bc:
    // 0x22f8bc: 0xc91021  addu        $v0, $a2, $t1
    ctx->pc = 0x22f8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
label_22f8c0:
    // 0x22f8c0: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x22f8c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_22f8c4:
    // 0x22f8c4: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x22f8c4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_22f8c8:
    // 0x22f8c8: 0x8c2235fc  lw          $v0, 0x35FC($at)
    ctx->pc = 0x22f8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13820)));
label_22f8cc:
    // 0x22f8cc: 0x14450005  bne         $v0, $a1, . + 4 + (0x5 << 2)
label_22f8d0:
    if (ctx->pc == 0x22F8D0u) {
        ctx->pc = 0x22F8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F8CCu;
        // 0x22f8d0: 0x881021  addu        $v0, $a0, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F8D4u;
        goto label_22f8d4;
    }
    ctx->pc = 0x22F8CCu;
    {
        const bool branch_taken_0x22f8cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x22F8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F8CCu;
        // 0x22f8d0: 0x881021  addu        $v0, $a0, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f8cc) {
            ctx->pc = 0x22F8E4u;
            goto label_22f8e4;
        }
    }
    ctx->pc = 0x22F8D4u;
label_22f8d4:
    // 0x22f8d4: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x22f8d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_22f8d8:
    // 0x22f8d8: 0x14430002  bne         $v0, $v1, . + 4 + (0x2 << 2)
label_22f8dc:
    if (ctx->pc == 0x22F8DCu) {
        ctx->pc = 0x22F8E0u;
        goto label_22f8e0;
    }
    ctx->pc = 0x22F8D8u;
    {
        const bool branch_taken_0x22f8d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x22f8d8) {
            ctx->pc = 0x22F8E4u;
            goto label_22f8e4;
        }
    }
    ctx->pc = 0x22F8E0u;
label_22f8e0:
    // 0x22f8e0: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x22f8e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_22f8e4:
    // 0x22f8e4: 0x0  nop
    ctx->pc = 0x22f8e4u;
    // NOP
label_22f8e8:
    // 0x22f8e8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x22f8e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_22f8ec:
    // 0x22f8ec: 0x29020029  slti        $v0, $t0, 0x29
    ctx->pc = 0x22f8ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)41) ? 1 : 0);
label_22f8f0:
    // 0x22f8f0: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
label_22f8f4:
    if (ctx->pc == 0x22F8F4u) {
        ctx->pc = 0x22F8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F8F0u;
        // 0x22f8f4: 0x25290018  addiu       $t1, $t1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F8F8u;
        goto label_22f8f8;
    }
    ctx->pc = 0x22F8F0u;
    {
        const bool branch_taken_0x22f8f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22F8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F8F0u;
        // 0x22f8f4: 0x25290018  addiu       $t1, $t1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f8f0) {
            ctx->pc = 0x22F8BCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22f8bc;
        }
    }
    ctx->pc = 0x22F8F8u;
label_22f8f8:
    // 0x22f8f8: 0x28e20002  slti        $v0, $a3, 0x2
    ctx->pc = 0x22f8f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)2) ? 1 : 0);
label_22f8fc:
    // 0x22f8fc: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_22f900:
    if (ctx->pc == 0x22F900u) {
        ctx->pc = 0x22F904u;
        goto label_22f904;
    }
    ctx->pc = 0x22F8FCu;
    {
        const bool branch_taken_0x22f8fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22f8fc) {
            ctx->pc = 0x22F914u;
            goto label_22f914;
        }
    }
    ctx->pc = 0x22F904u;
label_22f904:
    // 0x22f904: 0xc09018c  jal         func_240630
label_22f908:
    if (ctx->pc == 0x22F908u) {
        ctx->pc = 0x22F908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F904u;
        // 0x22f908: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F90Cu;
        goto label_22f90c;
    }
    ctx->pc = 0x22F904u;
    SET_GPR_U32(ctx, 31, 0x22F90Cu);
    ctx->pc = 0x22F908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F904u;
    // 0x22f908: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x240630u;
    { ctx->pc = 0x240630; return; }
    ctx->pc = 0x22F90Cu;
label_22f90c:
    // 0x22f90c: 0xc09018c  jal         func_240630
label_22f910:
    if (ctx->pc == 0x22F910u) {
        ctx->pc = 0x22F910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F90Cu;
        // 0x22f910: 0x2404000e  addiu       $a0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F914u;
        goto label_22f914;
    }
    ctx->pc = 0x22F90Cu;
    SET_GPR_U32(ctx, 31, 0x22F914u);
    ctx->pc = 0x22F910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F90Cu;
    // 0x22f910: 0x2404000e  addiu       $a0, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x240630u;
    { ctx->pc = 0x240630; return; }
    ctx->pc = 0x22F914u;
label_22f914:
    // 0x22f914: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x22f914u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
label_22f918:
    // 0x22f918: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x22f918u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_22f91c:
    // 0x22f91c: 0x8c23007c  lw          $v1, 0x7C($at)
    ctx->pc = 0x22f91cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 124)));
label_22f920:
    // 0x22f920: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_22f924:
    if (ctx->pc == 0x22F924u) {
        ctx->pc = 0x22F924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F920u;
        // 0x22f924: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F928u;
        goto label_22f928;
    }
    ctx->pc = 0x22F920u;
    {
        const bool branch_taken_0x22f920 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x22F924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F920u;
        // 0x22f924: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f920) {
            ctx->pc = 0x22F934u;
            goto label_22f934;
        }
    }
    ctx->pc = 0x22F928u;
label_22f928:
    // 0x22f928: 0xc09018c  jal         func_240630
label_22f92c:
    if (ctx->pc == 0x22F92Cu) {
        ctx->pc = 0x22F92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F928u;
        // 0x22f92c: 0x2404001a  addiu       $a0, $zero, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F930u;
        goto label_22f930;
    }
    ctx->pc = 0x22F928u;
    SET_GPR_U32(ctx, 31, 0x22F930u);
    ctx->pc = 0x22F92Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F928u;
    // 0x22f92c: 0x2404001a  addiu       $a0, $zero, 0x1A (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    ctx->in_delay_slot = false;
    ctx->pc = 0x240630u;
    { ctx->pc = 0x240630; return; }
    ctx->pc = 0x22F930u;
label_22f930:
    // 0x22f930: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x22f930u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_22f934:
    // 0x22f934: 0xc0901c0  jal         func_240700
label_22f938:
    if (ctx->pc == 0x22F938u) {
        ctx->pc = 0x22F93Cu;
        goto label_22f93c;
    }
    ctx->pc = 0x22F934u;
    SET_GPR_U32(ctx, 31, 0x22F93Cu);
    ctx->pc = 0x240700u;
    { ctx->pc = 0x240700; return; }
    ctx->pc = 0x22F93Cu;
label_22f93c:
    // 0x22f93c: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_22f940:
    if (ctx->pc == 0x22F940u) {
        ctx->pc = 0x22F940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F93Cu;
        // 0x22f940: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F944u;
        goto label_22f944;
    }
    ctx->pc = 0x22F93Cu;
    {
        const bool branch_taken_0x22f93c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F93Cu;
        // 0x22f940: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f93c) {
            ctx->pc = 0x22F980u;
            goto label_22f980;
        }
    }
    ctx->pc = 0x22F944u;
label_22f944:
    // 0x22f944: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x22f944u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
label_22f948:
    // 0x22f948: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x22f948u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_22f94c:
    // 0x22f94c: 0x8c220094  lw          $v0, 0x94($at)
    ctx->pc = 0x22f94cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 148)));
label_22f950:
    // 0x22f950: 0x1443000a  bne         $v0, $v1, . + 4 + (0xA << 2)
label_22f954:
    if (ctx->pc == 0x22F954u) {
        ctx->pc = 0x22F954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F950u;
        // 0x22f954: 0x3c01002b  lui         $at, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F958u;
        goto label_22f958;
    }
    ctx->pc = 0x22F950u;
    {
        const bool branch_taken_0x22f950 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x22F954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F950u;
        // 0x22f954: 0x3c01002b  lui         $at, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f950) {
            ctx->pc = 0x22F97Cu;
            goto label_22f97c;
        }
    }
    ctx->pc = 0x22F958u;
label_22f958:
    // 0x22f958: 0x8c2200f4  lw          $v0, 0xF4($at)
    ctx->pc = 0x22f958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 244)));
label_22f95c:
    // 0x22f95c: 0x14430007  bne         $v0, $v1, . + 4 + (0x7 << 2)
label_22f960:
    if (ctx->pc == 0x22F960u) {
        ctx->pc = 0x22F964u;
        goto label_22f964;
    }
    ctx->pc = 0x22F95Cu;
    {
        const bool branch_taken_0x22f95c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x22f95c) {
            ctx->pc = 0x22F97Cu;
            goto label_22f97c;
        }
    }
    ctx->pc = 0x22F964u;
label_22f964:
    // 0x22f964: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x22f964u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
label_22f968:
    // 0x22f968: 0x8c2200dc  lw          $v0, 0xDC($at)
    ctx->pc = 0x22f968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 220)));
label_22f96c:
    // 0x22f96c: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
label_22f970:
    if (ctx->pc == 0x22F970u) {
        ctx->pc = 0x22F970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F96Cu;
        // 0x22f970: 0x24040027  addiu       $a0, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F974u;
        goto label_22f974;
    }
    ctx->pc = 0x22F96Cu;
    {
        const bool branch_taken_0x22f96c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x22F970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F96Cu;
        // 0x22f970: 0x24040027  addiu       $a0, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f96c) {
            ctx->pc = 0x22F97Cu;
            goto label_22f97c;
        }
    }
    ctx->pc = 0x22F974u;
label_22f974:
    // 0x22f974: 0xc09018c  jal         func_240630
label_22f978:
    if (ctx->pc == 0x22F978u) {
        ctx->pc = 0x22F97Cu;
        goto label_22f97c;
    }
    ctx->pc = 0x22F974u;
    SET_GPR_U32(ctx, 31, 0x22F97Cu);
    ctx->pc = 0x240630u;
    { ctx->pc = 0x240630; return; }
    ctx->pc = 0x22F97Cu;
label_22f97c:
    // 0x22f97c: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x22f97cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_22f980:
    // 0x22f980: 0xc0901c0  jal         func_240700
label_22f984:
    if (ctx->pc == 0x22F984u) {
        ctx->pc = 0x22F988u;
        goto label_22f988;
    }
    ctx->pc = 0x22F980u;
    SET_GPR_U32(ctx, 31, 0x22F988u);
    ctx->pc = 0x240700u;
    { ctx->pc = 0x240700; return; }
    ctx->pc = 0x22F988u;
label_22f988:
    // 0x22f988: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_22f98c:
    if (ctx->pc == 0x22F98Cu) {
        ctx->pc = 0x22F98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F988u;
        // 0x22f98c: 0x3c01002b  lui         $at, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F990u;
        goto label_22f990;
    }
    ctx->pc = 0x22F988u;
    {
        const bool branch_taken_0x22f988 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F988u;
        // 0x22f98c: 0x3c01002b  lui         $at, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f988) {
            ctx->pc = 0x22F9D4u;
            goto label_22f9d4;
        }
    }
    ctx->pc = 0x22F990u;
label_22f990:
    // 0x22f990: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x22f990u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_22f994:
    // 0x22f994: 0x8c23025c  lw          $v1, 0x25C($at)
    ctx->pc = 0x22f994u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 604)));
label_22f998:
    // 0x22f998: 0x1464000e  bne         $v1, $a0, . + 4 + (0xE << 2)
label_22f99c:
    if (ctx->pc == 0x22F99Cu) {
        ctx->pc = 0x22F9A0u;
        goto label_22f9a0;
    }
    ctx->pc = 0x22F998u;
    {
        const bool branch_taken_0x22f998 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x22f998) {
            ctx->pc = 0x22F9D4u;
            goto label_22f9d4;
        }
    }
    ctx->pc = 0x22F9A0u;
label_22f9a0:
    // 0x22f9a0: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x22f9a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
label_22f9a4:
    // 0x22f9a4: 0x8c2300c4  lw          $v1, 0xC4($at)
    ctx->pc = 0x22f9a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 196)));
label_22f9a8:
    // 0x22f9a8: 0x1464000a  bne         $v1, $a0, . + 4 + (0xA << 2)
label_22f9ac:
    if (ctx->pc == 0x22F9ACu) {
        ctx->pc = 0x22F9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F9A8u;
        // 0x22f9ac: 0x3c01002b  lui         $at, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F9B0u;
        goto label_22f9b0;
    }
    ctx->pc = 0x22F9A8u;
    {
        const bool branch_taken_0x22f9a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x22F9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F9A8u;
        // 0x22f9ac: 0x3c01002b  lui         $at, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f9a8) {
            ctx->pc = 0x22F9D4u;
            goto label_22f9d4;
        }
    }
    ctx->pc = 0x22F9B0u;
label_22f9b0:
    // 0x22f9b0: 0x8c230304  lw          $v1, 0x304($at)
    ctx->pc = 0x22f9b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 772)));
label_22f9b4:
    // 0x22f9b4: 0x14640007  bne         $v1, $a0, . + 4 + (0x7 << 2)
label_22f9b8:
    if (ctx->pc == 0x22F9B8u) {
        ctx->pc = 0x22F9BCu;
        goto label_22f9bc;
    }
    ctx->pc = 0x22F9B4u;
    {
        const bool branch_taken_0x22f9b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x22f9b4) {
            ctx->pc = 0x22F9D4u;
            goto label_22f9d4;
        }
    }
    ctx->pc = 0x22F9BCu;
label_22f9bc:
    // 0x22f9bc: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x22f9bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
label_22f9c0:
    // 0x22f9c0: 0x8c23031c  lw          $v1, 0x31C($at)
    ctx->pc = 0x22f9c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 796)));
label_22f9c4:
    // 0x22f9c4: 0x14640003  bne         $v1, $a0, . + 4 + (0x3 << 2)
label_22f9c8:
    if (ctx->pc == 0x22F9C8u) {
        ctx->pc = 0x22F9CCu;
        goto label_22f9cc;
    }
    ctx->pc = 0x22F9C4u;
    {
        const bool branch_taken_0x22f9c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x22f9c4) {
            ctx->pc = 0x22F9D4u;
            goto label_22f9d4;
        }
    }
    ctx->pc = 0x22F9CCu;
label_22f9cc:
    // 0x22f9cc: 0xc09018c  jal         func_240630
label_22f9d0:
    if (ctx->pc == 0x22F9D0u) {
        ctx->pc = 0x22F9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F9CCu;
        // 0x22f9d0: 0x24040028  addiu       $a0, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F9D4u;
        goto label_22f9d4;
    }
    ctx->pc = 0x22F9CCu;
    SET_GPR_U32(ctx, 31, 0x22F9D4u);
    ctx->pc = 0x22F9D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F9CCu;
    // 0x22f9d0: 0x24040028  addiu       $a0, $zero, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x240630u;
    { ctx->pc = 0x240630; return; }
    ctx->pc = 0x22F9D4u;
label_22f9d4:
    // 0x22f9d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22f9d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_22f9d8:
    // 0x22f9d8: 0x3e00008  jr          $ra
label_22f9dc:
    if (ctx->pc == 0x22F9DCu) {
        ctx->pc = 0x22F9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F9D8u;
        // 0x22f9dc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F9E0u;
        goto label_22f9e0;
    }
    ctx->pc = 0x22F9D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22F9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F9D8u;
        // 0x22f9dc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22F9D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22F9E0u;
label_22f9e0:
    // 0x22f9e0: 0x3c070033  lui         $a3, 0x33
    ctx->pc = 0x22f9e0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)51 << 16));
label_22f9e4:
    // 0x22f9e4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x22f9e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22f9e8:
    // 0x22f9e8: 0x24e74920  addiu       $a3, $a3, 0x4920
    ctx->pc = 0x22f9e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 18720));
label_22f9ec:
    // 0x22f9ec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x22f9ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22f9f0:
    // 0x22f9f0: 0x0  nop
    ctx->pc = 0x22f9f0u;
    // NOP
label_22f9f4:
    // 0x22f9f4: 0x90e3005c  lbu         $v1, 0x5C($a3)
    ctx->pc = 0x22f9f4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 92)));
label_22f9f8:
    // 0x22f9f8: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
label_22f9fc:
    if (ctx->pc == 0x22F9FCu) {
        ctx->pc = 0x22F9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F9F8u;
        // 0x22f9fc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22FA00u;
        goto label_22fa00;
    }
    ctx->pc = 0x22F9F8u;
    {
        const bool branch_taken_0x22f9f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F9F8u;
        // 0x22f9fc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f9f8) {
            ctx->pc = 0x22FA34u;
            goto label_22fa34;
        }
    }
    ctx->pc = 0x22FA00u;
label_22fa00:
    // 0x22fa00: 0xe61821  addu        $v1, $a3, $a2
    ctx->pc = 0x22fa00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
label_22fa04:
    // 0x22fa04: 0x90630010  lbu         $v1, 0x10($v1)
    ctx->pc = 0x22fa04u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 16)));
label_22fa08:
    // 0x22fa08: 0x14640003  bne         $v1, $a0, . + 4 + (0x3 << 2)
label_22fa0c:
    if (ctx->pc == 0x22FA0Cu) {
        ctx->pc = 0x22FA10u;
        goto label_22fa10;
    }
    ctx->pc = 0x22FA08u;
    {
        const bool branch_taken_0x22fa08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x22fa08) {
            ctx->pc = 0x22FA18u;
            goto label_22fa18;
        }
    }
    ctx->pc = 0x22FA10u;
label_22fa10:
    // 0x22fa10: 0x10000005  b           . + 4 + (0x5 << 2)
label_22fa14:
    if (ctx->pc == 0x22FA14u) {
        ctx->pc = 0x22FA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FA10u;
        // 0x22fa14: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22FA18u;
        goto label_22fa18;
    }
    ctx->pc = 0x22FA10u;
    {
        const bool branch_taken_0x22fa10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FA10u;
        // 0x22fa14: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fa10) {
            ctx->pc = 0x22FA28u;
            goto label_22fa28;
        }
    }
    ctx->pc = 0x22FA18u;
label_22fa18:
    // 0x22fa18: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x22fa18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_22fa1c:
    // 0x22fa1c: 0x28c30014  slti        $v1, $a2, 0x14
    ctx->pc = 0x22fa1cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)20) ? 1 : 0);
label_22fa20:
    // 0x22fa20: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
label_22fa24:
    if (ctx->pc == 0x22FA24u) {
        ctx->pc = 0x22FA28u;
        goto label_22fa28;
    }
    ctx->pc = 0x22FA20u;
    {
        const bool branch_taken_0x22fa20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x22fa20) {
            ctx->pc = 0x22FA00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22fa00;
        }
    }
    ctx->pc = 0x22FA28u;
label_22fa28:
    // 0x22fa28: 0x28c30014  slti        $v1, $a2, 0x14
    ctx->pc = 0x22fa28u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)20) ? 1 : 0);
label_22fa2c:
    // 0x22fa2c: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
label_22fa30:
    if (ctx->pc == 0x22FA30u) {
        ctx->pc = 0x22FA34u;
        goto label_22fa34;
    }
    ctx->pc = 0x22FA2Cu;
    {
        const bool branch_taken_0x22fa2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x22fa2c) {
            ctx->pc = 0x22FA48u;
            goto label_22fa48;
        }
    }
    ctx->pc = 0x22FA34u;
label_22fa34:
    // 0x22fa34: 0x0  nop
    ctx->pc = 0x22fa34u;
    // NOP
label_22fa38:
    // 0x22fa38: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x22fa38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_22fa3c:
    // 0x22fa3c: 0x28a30002  slti        $v1, $a1, 0x2
    ctx->pc = 0x22fa3cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
label_22fa40:
    // 0x22fa40: 0x1460ffeb  bnez        $v1, . + 4 + (-0x15 << 2)
label_22fa44:
    if (ctx->pc == 0x22FA44u) {
        ctx->pc = 0x22FA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FA40u;
        // 0x22fa44: 0x24e70090  addiu       $a3, $a3, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22FA48u;
        goto label_22fa48;
    }
    ctx->pc = 0x22FA40u;
    {
        const bool branch_taken_0x22fa40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x22FA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FA40u;
        // 0x22fa44: 0x24e70090  addiu       $a3, $a3, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fa40) {
            ctx->pc = 0x22F9F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22f9f0;
        }
    }
    ctx->pc = 0x22FA48u;
label_22fa48:
    // 0x22fa48: 0x3e00008  jr          $ra
label_22fa4c:
    if (ctx->pc == 0x22FA4Cu) {
        ctx->pc = 0x22FA50u;
        goto label_22fa50;
    }
    ctx->pc = 0x22FA48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22FA48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22FA50u;
label_22fa50:
    // 0x22fa50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x22fa50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_22fa54:
    // 0x22fa54: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x22fa54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_22fa58:
    // 0x22fa58: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x22fa58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_22fa5c:
    // 0x22fa5c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x22fa5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_22fa60:
    // 0x22fa60: 0x2a020029  slti        $v0, $s0, 0x29
    ctx->pc = 0x22fa60u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)41) ? 1 : 0);
label_22fa64:
    // 0x22fa64: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_22fa68:
    if (ctx->pc == 0x22FA68u) {
        ctx->pc = 0x22FA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FA64u;
        // 0x22fa68: 0x24020077  addiu       $v0, $zero, 0x77 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 119));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22FA6Cu;
        goto label_22fa6c;
    }
    ctx->pc = 0x22FA64u;
    {
        const bool branch_taken_0x22fa64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22FA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FA64u;
        // 0x22fa68: 0x24020077  addiu       $v0, $zero, 0x77 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 119));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fa64) {
            ctx->pc = 0x22FA70u;
            goto label_22fa70;
        }
    }
    ctx->pc = 0x22FA6Cu;
label_22fa6c:
    // 0x22fa6c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x22fa6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22fa70:
    // 0x22fa70: 0x14820006  bne         $a0, $v0, . + 4 + (0x6 << 2)
label_22fa74:
    if (ctx->pc == 0x22FA74u) {
        ctx->pc = 0x22FA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FA70u;
        // 0x22fa74: 0x418c0  sll         $v1, $a0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22FA78u;
        goto label_22fa78;
    }
    ctx->pc = 0x22FA70u;
    {
        const bool branch_taken_0x22fa70 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x22FA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FA70u;
        // 0x22fa74: 0x418c0  sll         $v1, $a0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fa70) {
            ctx->pc = 0x22FA8Cu;
            goto label_22fa8c;
        }
    }
    ctx->pc = 0x22FA78u;
label_22fa78:
    // 0x22fa78: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x22fa78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_22fa7c:
    // 0x22fa7c: 0xc08bf30  jal         func_22FCC0
label_22fa80:
    if (ctx->pc == 0x22FA80u) {
        ctx->pc = 0x22FA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FA7Cu;
        // 0x22fa80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22FA84u;
        goto label_22fa84;
    }
    ctx->pc = 0x22FA7Cu;
    SET_GPR_U32(ctx, 31, 0x22FA84u);
    ctx->pc = 0x22FA80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22FA7Cu;
    // 0x22fa80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FCC0u;
    goto label_22fcc0;
    ctx->pc = 0x22FA84u;
label_22fa84:
    // 0x22fa84: 0x10000008  b           . + 4 + (0x8 << 2)
label_22fa88:
    if (ctx->pc == 0x22FA88u) {
        ctx->pc = 0x22FA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FA84u;
        // 0x22fa88: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22FA8Cu;
        goto label_22fa8c;
    }
    ctx->pc = 0x22FA84u;
    {
        const bool branch_taken_0x22fa84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FA84u;
        // 0x22fa88: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fa84) {
            ctx->pc = 0x22FAA8u;
            goto label_22faa8;
        }
    }
    ctx->pc = 0x22FA8Cu;
label_22fa8c:
    // 0x22fa8c: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x22fa8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
label_22fa90:
    // 0x22fa90: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x22fa90u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_22fa94:
    // 0x22fa94: 0x2442f730  addiu       $v0, $v0, -0x8D0
    ctx->pc = 0x22fa94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965040));
label_22fa98:
    // 0x22fa98: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x22fa98u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_22fa9c:
    // 0x22fa9c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x22fa9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_22faa0:
    // 0x22faa0: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x22faa0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_22faa4:
    // 0x22faa4: 0x0  nop
    ctx->pc = 0x22faa4u;
    // NOP
label_22faa8:
    // 0x22faa8: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x22faa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
label_22faac:
    // 0x22faac: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x22faacu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
label_22fab0:
    // 0x22fab0: 0x2442f4a0  addiu       $v0, $v0, -0xB60
    ctx->pc = 0x22fab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964384));
label_22fab4:
    // 0x22fab4: 0x42fc2  srl         $a1, $a0, 31
    ctx->pc = 0x22fab4u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
label_22fab8:
    // 0x22fab8: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x22fab8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_22fabc:
    // 0x22fabc: 0x3c010029  lui         $at, 0x29
    ctx->pc = 0x22fabcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)41 << 16));
label_22fac0:
    // 0x22fac0: 0x3c025555  lui         $v0, 0x5555
    ctx->pc = 0x22fac0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21845 << 16));
label_22fac4:
    // 0x22fac4: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x22fac4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_22fac8:
    // 0x22fac8: 0x34425556  ori         $v0, $v0, 0x5556
    ctx->pc = 0x22fac8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21846);
label_22facc:
    // 0x22facc: 0x440018  mult        $zero, $v0, $a0
    ctx->pc = 0x22faccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_22fad0:
    // 0x22fad0: 0x0  nop
    ctx->pc = 0x22fad0u;
    // NOP
label_22fad4:
    // 0x22fad4: 0x0  nop
    ctx->pc = 0x22fad4u;
    // NOP
label_22fad8:
    // 0x22fad8: 0x1810  mfhi        $v1
    ctx->pc = 0x22fad8u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_22fadc:
    // 0x22fadc: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x22fadcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_22fae0:
    // 0x22fae0: 0xac260470  sw          $a2, 0x470($at)
    ctx->pc = 0x22fae0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 1136), GPR_U32(ctx, 6));
label_22fae4:
    // 0x22fae4: 0x24423420  addiu       $v0, $v0, 0x3420
    ctx->pc = 0x22fae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13344));
label_22fae8:
    // 0x22fae8: 0x3c010029  lui         $at, 0x29
    ctx->pc = 0x22fae8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)41 << 16));
label_22faec:
    // 0x22faec: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x22faecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_22faf0:
    // 0x22faf0: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x22faf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_22faf4:
    // 0x22faf4: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x22faf4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_22faf8:
    // 0x22faf8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x22faf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_22fafc:
    // 0x22fafc: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x22fafcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_22fb00:
    // 0x22fb00: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x22fb00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_22fb04:
    // 0x22fb04: 0xac230474  sw          $v1, 0x474($at)
    ctx->pc = 0x22fb04u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 1140), GPR_U32(ctx, 3));
label_22fb08:
    // 0x22fb08: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x22fb08u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_22fb0c:
    // 0x22fb0c: 0x28410003  slti        $at, $v0, 0x3
    ctx->pc = 0x22fb0cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
label_22fb10:
    // 0x22fb10: 0x1020004f  beqz        $at, . + 4 + (0x4F << 2)
label_22fb14:
    if (ctx->pc == 0x22FB14u) {
        ctx->pc = 0x22FB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FB10u;
        // 0x22fb14: 0x3c010029  lui         $at, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22FB18u;
        goto label_22fb18;
    }
    ctx->pc = 0x22FB10u;
    {
        const bool branch_taken_0x22fb10 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FB10u;
        // 0x22fb14: 0x3c010029  lui         $at, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fb10) {
            ctx->pc = 0x22FC50u;
            goto label_22fc50;
        }
    }
    ctx->pc = 0x22FB18u;
label_22fb18:
    // 0x22fb18: 0x3c030029  lui         $v1, 0x29
    ctx->pc = 0x22fb18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
label_22fb1c:
    // 0x22fb1c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x22fb1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_22fb20:
    // 0x22fb20: 0x24630440  addiu       $v1, $v1, 0x440
    ctx->pc = 0x22fb20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1088));
label_22fb24:
    // 0x22fb24: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x22fb24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_22fb28:
    // 0x22fb28: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x22fb28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_22fb2c:
    // 0x22fb2c: 0x28a10027  slti        $at, $a1, 0x27
    ctx->pc = 0x22fb2cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)39) ? 1 : 0);
label_22fb30:
    // 0x22fb30: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
label_22fb34:
    if (ctx->pc == 0x22FB34u) {
        ctx->pc = 0x22FB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FB30u;
        // 0x22fb34: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22FB38u;
        goto label_22fb38;
    }
    ctx->pc = 0x22FB30u;
    {
        const bool branch_taken_0x22fb30 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FB30u;
        // 0x22fb34: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fb30) {
            ctx->pc = 0x22FB5Cu;
            goto label_22fb5c;
        }
    }
    ctx->pc = 0x22FB38u;
label_22fb38:
    // 0x22fb38: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x22fb38u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_22fb3c:
    // 0x22fb3c: 0x3c03002b  lui         $v1, 0x2B
    ctx->pc = 0x22fb3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)43 << 16));
label_22fb40:
    // 0x22fb40: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x22fb40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_22fb44:
    // 0x22fb44: 0x2463ff8c  addiu       $v1, $v1, -0x74
    ctx->pc = 0x22fb44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967180));
label_22fb48:
    // 0x22fb48: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x22fb48u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_22fb4c:
    // 0x22fb4c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x22fb4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_22fb50:
    // 0x22fb50: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x22fb50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_22fb54:
    // 0x22fb54: 0x3863000a  xori        $v1, $v1, 0xA
    ctx->pc = 0x22fb54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)10);
label_22fb58:
    // 0x22fb58: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x22fb58u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_22fb5c:
    // 0x22fb5c: 0x3c010029  lui         $at, 0x29
    ctx->pc = 0x22fb5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)41 << 16));
label_22fb60:
    // 0x22fb60: 0xac230478  sw          $v1, 0x478($at)
    ctx->pc = 0x22fb60u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 1144), GPR_U32(ctx, 3));
label_22fb64:
    // 0x22fb64: 0x3c030029  lui         $v1, 0x29
    ctx->pc = 0x22fb64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
label_22fb68:
    // 0x22fb68: 0x24630444  addiu       $v1, $v1, 0x444
    ctx->pc = 0x22fb68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1092));
label_22fb6c:
    // 0x22fb6c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x22fb6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_22fb70:
    // 0x22fb70: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x22fb70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_22fb74:
    // 0x22fb74: 0x28a10027  slti        $at, $a1, 0x27
    ctx->pc = 0x22fb74u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)39) ? 1 : 0);
label_22fb78:
    // 0x22fb78: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
label_22fb7c:
    if (ctx->pc == 0x22FB7Cu) {
        ctx->pc = 0x22FB7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FB78u;
        // 0x22fb7c: 0x52040  sll         $a0, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22FB80u;
        goto label_22fb80;
    }
    ctx->pc = 0x22FB78u;
    {
        const bool branch_taken_0x22fb78 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FB7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FB78u;
        // 0x22fb7c: 0x52040  sll         $a0, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fb78) {
            ctx->pc = 0x22FBA4u;
            goto label_22fba4;
        }
    }
    ctx->pc = 0x22FB80u;
label_22fb80:
    // 0x22fb80: 0x3c03002b  lui         $v1, 0x2B
    ctx->pc = 0x22fb80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)43 << 16));
label_22fb84:
    // 0x22fb84: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x22fb84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_22fb88:
    // 0x22fb88: 0x2463ff8c  addiu       $v1, $v1, -0x74
    ctx->pc = 0x22fb88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967180));
label_22fb8c:
    // 0x22fb8c: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x22fb8cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_22fb90:
    // 0x22fb90: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x22fb90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_22fb94:
    // 0x22fb94: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x22fb94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_22fb98:
    // 0x22fb98: 0x3863000a  xori        $v1, $v1, 0xA
    ctx->pc = 0x22fb98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)10);
label_22fb9c:
    // 0x22fb9c: 0x10000002  b           . + 4 + (0x2 << 2)
label_22fba0:
    if (ctx->pc == 0x22FBA0u) {
        ctx->pc = 0x22FBA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FB9Cu;
        // 0x22fba0: 0x2c630001  sltiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x22FBA4u;
        goto label_22fba4;
    }
    ctx->pc = 0x22FB9Cu;
    {
        const bool branch_taken_0x22fb9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FBA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FB9Cu;
        // 0x22fba0: 0x2c630001  sltiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fb9c) {
            ctx->pc = 0x22FBA8u;
            goto label_22fba8;
        }
    }
    ctx->pc = 0x22FBA4u;
label_22fba4:
    // 0x22fba4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x22fba4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22fba8:
    // 0x22fba8: 0x3c010029  lui         $at, 0x29
    ctx->pc = 0x22fba8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)41 << 16));
label_22fbac:
    // 0x22fbac: 0xac23047c  sw          $v1, 0x47C($at)
    ctx->pc = 0x22fbacu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 1148), GPR_U32(ctx, 3));
label_22fbb0:
    // 0x22fbb0: 0x3c030029  lui         $v1, 0x29
    ctx->pc = 0x22fbb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
label_22fbb4:
    // 0x22fbb4: 0x24630448  addiu       $v1, $v1, 0x448
    ctx->pc = 0x22fbb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1096));
label_22fbb8:
    // 0x22fbb8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x22fbb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_22fbbc:
    // 0x22fbbc: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x22fbbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_22fbc0:
    // 0x22fbc0: 0x28a10027  slti        $at, $a1, 0x27
    ctx->pc = 0x22fbc0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)39) ? 1 : 0);
label_22fbc4:
    // 0x22fbc4: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
label_22fbc8:
    if (ctx->pc == 0x22FBC8u) {
        ctx->pc = 0x22FBC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FBC4u;
        // 0x22fbc8: 0x52040  sll         $a0, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22FBCCu;
        goto label_22fbcc;
    }
    ctx->pc = 0x22FBC4u;
    {
        const bool branch_taken_0x22fbc4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FBC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FBC4u;
        // 0x22fbc8: 0x52040  sll         $a0, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fbc4) {
            ctx->pc = 0x22FBF0u;
            goto label_22fbf0;
        }
    }
    ctx->pc = 0x22FBCCu;
label_22fbcc:
    // 0x22fbcc: 0x3c03002b  lui         $v1, 0x2B
    ctx->pc = 0x22fbccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)43 << 16));
label_22fbd0:
    // 0x22fbd0: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x22fbd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_22fbd4:
    // 0x22fbd4: 0x2463ff8c  addiu       $v1, $v1, -0x74
    ctx->pc = 0x22fbd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967180));
label_22fbd8:
    // 0x22fbd8: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x22fbd8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_22fbdc:
    // 0x22fbdc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x22fbdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_22fbe0:
    // 0x22fbe0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x22fbe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_22fbe4:
    // 0x22fbe4: 0x3863000a  xori        $v1, $v1, 0xA
    ctx->pc = 0x22fbe4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)10);
label_22fbe8:
    // 0x22fbe8: 0x10000002  b           . + 4 + (0x2 << 2)
label_22fbec:
    if (ctx->pc == 0x22FBECu) {
        ctx->pc = 0x22FBECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FBE8u;
        // 0x22fbec: 0x2c630001  sltiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x22FBF0u;
        goto label_22fbf0;
    }
    ctx->pc = 0x22FBE8u;
    {
        const bool branch_taken_0x22fbe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FBECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FBE8u;
        // 0x22fbec: 0x2c630001  sltiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fbe8) {
            ctx->pc = 0x22FBF4u;
            goto label_22fbf4;
        }
    }
    ctx->pc = 0x22FBF0u;
label_22fbf0:
    // 0x22fbf0: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x22fbf0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22fbf4:
    // 0x22fbf4: 0x3c010029  lui         $at, 0x29
    ctx->pc = 0x22fbf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)41 << 16));
label_22fbf8:
    // 0x22fbf8: 0xac230480  sw          $v1, 0x480($at)
    ctx->pc = 0x22fbf8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 1152), GPR_U32(ctx, 3));
label_22fbfc:
    // 0x22fbfc: 0x3c030029  lui         $v1, 0x29
    ctx->pc = 0x22fbfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
label_22fc00:
    // 0x22fc00: 0x2463044c  addiu       $v1, $v1, 0x44C
    ctx->pc = 0x22fc00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1100));
label_22fc04:
    // 0x22fc04: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x22fc04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_22fc08:
    // 0x22fc08: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x22fc08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_22fc0c:
    // 0x22fc0c: 0x28810027  slti        $at, $a0, 0x27
    ctx->pc = 0x22fc0cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)39) ? 1 : 0);
label_22fc10:
    // 0x22fc10: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
label_22fc14:
    if (ctx->pc == 0x22FC14u) {
        ctx->pc = 0x22FC18u;
        goto label_22fc18;
    }
    ctx->pc = 0x22FC10u;
    {
        const bool branch_taken_0x22fc10 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x22fc10) {
            ctx->pc = 0x22FC40u;
            goto label_22fc40;
        }
    }
    ctx->pc = 0x22FC18u;
label_22fc18:
    // 0x22fc18: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x22fc18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_22fc1c:
    // 0x22fc1c: 0x3c02002b  lui         $v0, 0x2B
    ctx->pc = 0x22fc1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
label_22fc20:
    // 0x22fc20: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x22fc20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_22fc24:
    // 0x22fc24: 0x2442ff8c  addiu       $v0, $v0, -0x74
    ctx->pc = 0x22fc24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967180));
label_22fc28:
    // 0x22fc28: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x22fc28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_22fc2c:
    // 0x22fc2c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x22fc2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_22fc30:
    // 0x22fc30: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x22fc30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_22fc34:
    // 0x22fc34: 0x3842000a  xori        $v0, $v0, 0xA
    ctx->pc = 0x22fc34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)10);
label_22fc38:
    // 0x22fc38: 0x10000002  b           . + 4 + (0x2 << 2)
label_22fc3c:
    if (ctx->pc == 0x22FC3Cu) {
        ctx->pc = 0x22FC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FC38u;
        // 0x22fc3c: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x22FC40u;
        goto label_22fc40;
    }
    ctx->pc = 0x22FC38u;
    {
        const bool branch_taken_0x22fc38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FC38u;
        // 0x22fc3c: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fc38) {
            ctx->pc = 0x22FC44u;
            goto label_22fc44;
        }
    }
    ctx->pc = 0x22FC40u;
label_22fc40:
    // 0x22fc40: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x22fc40u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22fc44:
    // 0x22fc44: 0x3c010029  lui         $at, 0x29
    ctx->pc = 0x22fc44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)41 << 16));
label_22fc48:
    // 0x22fc48: 0x10000008  b           . + 4 + (0x8 << 2)
label_22fc4c:
    if (ctx->pc == 0x22FC4Cu) {
        ctx->pc = 0x22FC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FC48u;
        // 0x22fc4c: 0xac220484  sw          $v0, 0x484($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 1156), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22FC50u;
        goto label_22fc50;
    }
    ctx->pc = 0x22FC48u;
    {
        const bool branch_taken_0x22fc48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FC48u;
        // 0x22fc4c: 0xac220484  sw          $v0, 0x484($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 1156), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fc48) {
            ctx->pc = 0x22FC6Cu;
            goto label_22fc6c;
        }
    }
    ctx->pc = 0x22FC50u;
label_22fc50:
    // 0x22fc50: 0xac200484  sw          $zero, 0x484($at)
    ctx->pc = 0x22fc50u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 1156), GPR_U32(ctx, 0));
label_22fc54:
    // 0x22fc54: 0x3c010029  lui         $at, 0x29
    ctx->pc = 0x22fc54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)41 << 16));
label_22fc58:
    // 0x22fc58: 0xac200480  sw          $zero, 0x480($at)
    ctx->pc = 0x22fc58u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 1152), GPR_U32(ctx, 0));
label_22fc5c:
    // 0x22fc5c: 0x3c010029  lui         $at, 0x29
    ctx->pc = 0x22fc5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)41 << 16));
label_22fc60:
    // 0x22fc60: 0xac20047c  sw          $zero, 0x47C($at)
    ctx->pc = 0x22fc60u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 1148), GPR_U32(ctx, 0));
label_22fc64:
    // 0x22fc64: 0x3c010029  lui         $at, 0x29
    ctx->pc = 0x22fc64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)41 << 16));
label_22fc68:
    // 0x22fc68: 0xac200478  sw          $zero, 0x478($at)
    ctx->pc = 0x22fc68u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 1144), GPR_U32(ctx, 0));
label_22fc6c:
    // 0x22fc6c: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x22fc6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_22fc70:
    // 0x22fc70: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x22fc70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_22fc74:
    // 0x22fc74: 0x90234999  lbu         $v1, 0x4999($at)
    ctx->pc = 0x22fc74u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18841)));
label_22fc78:
    // 0x22fc78: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
label_22fc7c:
    if (ctx->pc == 0x22FC7Cu) {
        ctx->pc = 0x22FC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FC78u;
        // 0x22fc7c: 0x3c040029  lui         $a0, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22FC80u;
        goto label_22fc80;
    }
    ctx->pc = 0x22FC78u;
    {
        const bool branch_taken_0x22fc78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x22FC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FC78u;
        // 0x22fc7c: 0x3c040029  lui         $a0, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fc78) {
            ctx->pc = 0x22FC98u;
            goto label_22fc98;
        }
    }
    ctx->pc = 0x22FC80u;
label_22fc80:
    // 0x22fc80: 0x3c040029  lui         $a0, 0x29
    ctx->pc = 0x22fc80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)41 << 16));
label_22fc84:
    // 0x22fc84: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x22fc84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22fc88:
    // 0x22fc88: 0xc1762c8  jal         func_5D8B20
label_22fc8c:
    if (ctx->pc == 0x22FC8Cu) {
        ctx->pc = 0x22FC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FC88u;
        // 0x22fc8c: 0x24840470  addiu       $a0, $a0, 0x470 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1136));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22FC90u;
        goto label_22fc90;
    }
    ctx->pc = 0x22FC88u;
    SET_GPR_U32(ctx, 31, 0x22FC90u);
    ctx->pc = 0x22FC8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22FC88u;
    // 0x22fc8c: 0x24840470  addiu       $a0, $a0, 0x470 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1136));
    ctx->in_delay_slot = false;
    ctx->pc = 0x5D8B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x5D8B20u, 0x22FC88u, 0x22FC90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FC90u;
label_22fc90:
    // 0x22fc90: 0x10000005  b           . + 4 + (0x5 << 2)
label_22fc94:
    if (ctx->pc == 0x22FC94u) {
        ctx->pc = 0x22FC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FC90u;
        // 0x22fc94: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22FC98u;
        goto label_22fc98;
    }
    ctx->pc = 0x22FC90u;
    {
        const bool branch_taken_0x22fc90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FC90u;
        // 0x22fc94: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fc90) {
            ctx->pc = 0x22FCA8u;
            goto label_22fca8;
        }
    }
    ctx->pc = 0x22FC98u;
label_22fc98:
    // 0x22fc98: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x22fc98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22fc9c:
    // 0x22fc9c: 0xc1762c8  jal         func_5D8B20
label_22fca0:
    if (ctx->pc == 0x22FCA0u) {
        ctx->pc = 0x22FCA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FC9Cu;
        // 0x22fca0: 0x24840470  addiu       $a0, $a0, 0x470 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1136));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22FCA4u;
        goto label_22fca4;
    }
    ctx->pc = 0x22FC9Cu;
    SET_GPR_U32(ctx, 31, 0x22FCA4u);
    ctx->pc = 0x22FCA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22FC9Cu;
    // 0x22fca0: 0x24840470  addiu       $a0, $a0, 0x470 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1136));
    ctx->in_delay_slot = false;
    ctx->pc = 0x5D8B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x5D8B20u, 0x22FC9Cu, 0x22FCA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FCA4u;
label_22fca4:
    // 0x22fca4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x22fca4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_22fca8:
    // 0x22fca8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22fca8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_22fcac:
    // 0x22fcac: 0x3e00008  jr          $ra
label_22fcb0:
    if (ctx->pc == 0x22FCB0u) {
        ctx->pc = 0x22FCB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FCACu;
        // 0x22fcb0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22FCB4u;
        goto label_22fcb4;
    }
    ctx->pc = 0x22FCACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22FCB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FCACu;
        // 0x22fcb0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22FCACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22FCB4u;
label_22fcb4:
    // 0x22fcb4: 0x0  nop
    ctx->pc = 0x22fcb4u;
    // NOP
label_22fcb8:
    // 0x22fcb8: 0x0  nop
    ctx->pc = 0x22fcb8u;
    // NOP
label_22fcbc:
    // 0x22fcbc: 0x0  nop
    ctx->pc = 0x22fcbcu;
    // NOP
label_22fcc0:
    // 0x22fcc0: 0x24020029  addiu       $v0, $zero, 0x29
    ctx->pc = 0x22fcc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
label_22fcc4:
    // 0x22fcc4: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x22fcc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_22fcc8:
    // 0x22fcc8: 0x82001a  div         $zero, $a0, $v0
    ctx->pc = 0x22fcc8u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_22fccc:
    // 0x22fccc: 0x2409000c  addiu       $t1, $zero, 0xC
    ctx->pc = 0x22fcccu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_22fcd0:
    // 0x22fcd0: 0x0  nop
    ctx->pc = 0x22fcd0u;
    // NOP
label_22fcd4:
    // 0x22fcd4: 0x2010  mfhi        $a0
    ctx->pc = 0x22fcd4u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_22fcd8:
    // 0x22fcd8: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x22fcd8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_22fcdc:
    // 0x22fcdc: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x22fcdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
label_22fce0:
    // 0x22fce0: 0x3c0b002a  lui         $t3, 0x2A
    ctx->pc = 0x22fce0u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)42 << 16));
label_22fce4:
    // 0x22fce4: 0x2442f4a0  addiu       $v0, $v0, -0xB60
    ctx->pc = 0x22fce4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964384));
    ctx->pc = 0x22fce8u;
    return;
}
