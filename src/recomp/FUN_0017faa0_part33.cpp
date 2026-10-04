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


void FUN_0017faa0_part33(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x18f4a0u: goto label_18f4a0;
        case 0x18f4a4u: goto label_18f4a4;
        case 0x18f4a8u: goto label_18f4a8;
        case 0x18f4acu: goto label_18f4ac;
        case 0x18f4b0u: goto label_18f4b0;
        case 0x18f4b4u: goto label_18f4b4;
        case 0x18f4b8u: goto label_18f4b8;
        case 0x18f4bcu: goto label_18f4bc;
        case 0x18f4c0u: goto label_18f4c0;
        case 0x18f4c4u: goto label_18f4c4;
        case 0x18f4c8u: goto label_18f4c8;
        case 0x18f4ccu: goto label_18f4cc;
        case 0x18f4d0u: goto label_18f4d0;
        case 0x18f4d4u: goto label_18f4d4;
        case 0x18f4d8u: goto label_18f4d8;
        case 0x18f4dcu: goto label_18f4dc;
        case 0x18f4e0u: goto label_18f4e0;
        case 0x18f4e4u: goto label_18f4e4;
        case 0x18f4e8u: goto label_18f4e8;
        case 0x18f4ecu: goto label_18f4ec;
        case 0x18f4f0u: goto label_18f4f0;
        case 0x18f4f4u: goto label_18f4f4;
        case 0x18f4f8u: goto label_18f4f8;
        case 0x18f4fcu: goto label_18f4fc;
        case 0x18f500u: goto label_18f500;
        case 0x18f504u: goto label_18f504;
        case 0x18f508u: goto label_18f508;
        case 0x18f50cu: goto label_18f50c;
        case 0x18f510u: goto label_18f510;
        case 0x18f514u: goto label_18f514;
        case 0x18f518u: goto label_18f518;
        case 0x18f51cu: goto label_18f51c;
        case 0x18f520u: goto label_18f520;
        case 0x18f524u: goto label_18f524;
        case 0x18f528u: goto label_18f528;
        case 0x18f52cu: goto label_18f52c;
        case 0x18f530u: goto label_18f530;
        case 0x18f534u: goto label_18f534;
        case 0x18f538u: goto label_18f538;
        case 0x18f53cu: goto label_18f53c;
        case 0x18f540u: goto label_18f540;
        case 0x18f544u: goto label_18f544;
        case 0x18f548u: goto label_18f548;
        case 0x18f54cu: goto label_18f54c;
        case 0x18f550u: goto label_18f550;
        case 0x18f554u: goto label_18f554;
        case 0x18f558u: goto label_18f558;
        case 0x18f55cu: goto label_18f55c;
        case 0x18f560u: goto label_18f560;
        case 0x18f564u: goto label_18f564;
        case 0x18f568u: goto label_18f568;
        case 0x18f56cu: goto label_18f56c;
        case 0x18f570u: goto label_18f570;
        case 0x18f574u: goto label_18f574;
        case 0x18f578u: goto label_18f578;
        case 0x18f57cu: goto label_18f57c;
        case 0x18f580u: goto label_18f580;
        case 0x18f584u: goto label_18f584;
        case 0x18f588u: goto label_18f588;
        case 0x18f58cu: goto label_18f58c;
        case 0x18f590u: goto label_18f590;
        case 0x18f594u: goto label_18f594;
        case 0x18f598u: goto label_18f598;
        case 0x18f59cu: goto label_18f59c;
        case 0x18f5a0u: goto label_18f5a0;
        case 0x18f5a4u: goto label_18f5a4;
        case 0x18f5a8u: goto label_18f5a8;
        case 0x18f5acu: goto label_18f5ac;
        case 0x18f5b0u: goto label_18f5b0;
        case 0x18f5b4u: goto label_18f5b4;
        case 0x18f5b8u: goto label_18f5b8;
        case 0x18f5bcu: goto label_18f5bc;
        case 0x18f5c0u: goto label_18f5c0;
        case 0x18f5c4u: goto label_18f5c4;
        case 0x18f5c8u: goto label_18f5c8;
        case 0x18f5ccu: goto label_18f5cc;
        case 0x18f5d0u: goto label_18f5d0;
        case 0x18f5d4u: goto label_18f5d4;
        case 0x18f5d8u: goto label_18f5d8;
        case 0x18f5dcu: goto label_18f5dc;
        case 0x18f5e0u: goto label_18f5e0;
        case 0x18f5e4u: goto label_18f5e4;
        case 0x18f5e8u: goto label_18f5e8;
        case 0x18f5ecu: goto label_18f5ec;
        case 0x18f5f0u: goto label_18f5f0;
        case 0x18f5f4u: goto label_18f5f4;
        case 0x18f5f8u: goto label_18f5f8;
        case 0x18f5fcu: goto label_18f5fc;
        case 0x18f600u: goto label_18f600;
        case 0x18f604u: goto label_18f604;
        case 0x18f608u: goto label_18f608;
        case 0x18f60cu: goto label_18f60c;
        case 0x18f610u: goto label_18f610;
        case 0x18f614u: goto label_18f614;
        case 0x18f618u: goto label_18f618;
        case 0x18f61cu: goto label_18f61c;
        case 0x18f620u: goto label_18f620;
        case 0x18f624u: goto label_18f624;
        case 0x18f628u: goto label_18f628;
        case 0x18f62cu: goto label_18f62c;
        case 0x18f630u: goto label_18f630;
        case 0x18f634u: goto label_18f634;
        case 0x18f638u: goto label_18f638;
        case 0x18f63cu: goto label_18f63c;
        case 0x18f640u: goto label_18f640;
        case 0x18f644u: goto label_18f644;
        case 0x18f648u: goto label_18f648;
        case 0x18f64cu: goto label_18f64c;
        case 0x18f650u: goto label_18f650;
        case 0x18f654u: goto label_18f654;
        case 0x18f658u: goto label_18f658;
        case 0x18f65cu: goto label_18f65c;
        case 0x18f660u: goto label_18f660;
        case 0x18f664u: goto label_18f664;
        case 0x18f668u: goto label_18f668;
        case 0x18f66cu: goto label_18f66c;
        case 0x18f670u: goto label_18f670;
        case 0x18f674u: goto label_18f674;
        case 0x18f678u: goto label_18f678;
        case 0x18f67cu: goto label_18f67c;
        case 0x18f680u: goto label_18f680;
        case 0x18f684u: goto label_18f684;
        case 0x18f688u: goto label_18f688;
        case 0x18f68cu: goto label_18f68c;
        case 0x18f690u: goto label_18f690;
        case 0x18f694u: goto label_18f694;
        case 0x18f698u: goto label_18f698;
        case 0x18f69cu: goto label_18f69c;
        case 0x18f6a0u: goto label_18f6a0;
        case 0x18f6a4u: goto label_18f6a4;
        case 0x18f6a8u: goto label_18f6a8;
        case 0x18f6acu: goto label_18f6ac;
        case 0x18f6b0u: goto label_18f6b0;
        case 0x18f6b4u: goto label_18f6b4;
        case 0x18f6b8u: goto label_18f6b8;
        case 0x18f6bcu: goto label_18f6bc;
        case 0x18f6c0u: goto label_18f6c0;
        case 0x18f6c4u: goto label_18f6c4;
        case 0x18f6c8u: goto label_18f6c8;
        case 0x18f6ccu: goto label_18f6cc;
        case 0x18f6d0u: goto label_18f6d0;
        case 0x18f6d4u: goto label_18f6d4;
        case 0x18f6d8u: goto label_18f6d8;
        case 0x18f6dcu: goto label_18f6dc;
        case 0x18f6e0u: goto label_18f6e0;
        case 0x18f6e4u: goto label_18f6e4;
        case 0x18f6e8u: goto label_18f6e8;
        case 0x18f6ecu: goto label_18f6ec;
        case 0x18f6f0u: goto label_18f6f0;
        case 0x18f6f4u: goto label_18f6f4;
        case 0x18f6f8u: goto label_18f6f8;
        case 0x18f6fcu: goto label_18f6fc;
        case 0x18f700u: goto label_18f700;
        case 0x18f704u: goto label_18f704;
        case 0x18f708u: goto label_18f708;
        case 0x18f70cu: goto label_18f70c;
        case 0x18f710u: goto label_18f710;
        case 0x18f714u: goto label_18f714;
        case 0x18f718u: goto label_18f718;
        case 0x18f71cu: goto label_18f71c;
        case 0x18f720u: goto label_18f720;
        case 0x18f724u: goto label_18f724;
        case 0x18f728u: goto label_18f728;
        case 0x18f72cu: goto label_18f72c;
        case 0x18f730u: goto label_18f730;
        case 0x18f734u: goto label_18f734;
        case 0x18f738u: goto label_18f738;
        case 0x18f73cu: goto label_18f73c;
        case 0x18f740u: goto label_18f740;
        case 0x18f744u: goto label_18f744;
        case 0x18f748u: goto label_18f748;
        case 0x18f74cu: goto label_18f74c;
        case 0x18f750u: goto label_18f750;
        case 0x18f754u: goto label_18f754;
        case 0x18f758u: goto label_18f758;
        case 0x18f75cu: goto label_18f75c;
        case 0x18f760u: goto label_18f760;
        case 0x18f764u: goto label_18f764;
        case 0x18f768u: goto label_18f768;
        case 0x18f76cu: goto label_18f76c;
        case 0x18f770u: goto label_18f770;
        case 0x18f774u: goto label_18f774;
        case 0x18f778u: goto label_18f778;
        case 0x18f77cu: goto label_18f77c;
        case 0x18f780u: goto label_18f780;
        case 0x18f784u: goto label_18f784;
        case 0x18f788u: goto label_18f788;
        case 0x18f78cu: goto label_18f78c;
        case 0x18f790u: goto label_18f790;
        case 0x18f794u: goto label_18f794;
        case 0x18f798u: goto label_18f798;
        case 0x18f79cu: goto label_18f79c;
        case 0x18f7a0u: goto label_18f7a0;
        case 0x18f7a4u: goto label_18f7a4;
        case 0x18f7a8u: goto label_18f7a8;
        case 0x18f7acu: goto label_18f7ac;
        case 0x18f7b0u: goto label_18f7b0;
        case 0x18f7b4u: goto label_18f7b4;
        case 0x18f7b8u: goto label_18f7b8;
        case 0x18f7bcu: goto label_18f7bc;
        case 0x18f7c0u: goto label_18f7c0;
        case 0x18f7c4u: goto label_18f7c4;
        case 0x18f7c8u: goto label_18f7c8;
        case 0x18f7ccu: goto label_18f7cc;
        case 0x18f7d0u: goto label_18f7d0;
        case 0x18f7d4u: goto label_18f7d4;
        case 0x18f7d8u: goto label_18f7d8;
        case 0x18f7dcu: goto label_18f7dc;
        case 0x18f7e0u: goto label_18f7e0;
        case 0x18f7e4u: goto label_18f7e4;
        case 0x18f7e8u: goto label_18f7e8;
        case 0x18f7ecu: goto label_18f7ec;
        case 0x18f7f0u: goto label_18f7f0;
        case 0x18f7f4u: goto label_18f7f4;
        case 0x18f7f8u: goto label_18f7f8;
        case 0x18f7fcu: goto label_18f7fc;
        case 0x18f800u: goto label_18f800;
        case 0x18f804u: goto label_18f804;
        case 0x18f808u: goto label_18f808;
        case 0x18f80cu: goto label_18f80c;
        case 0x18f810u: goto label_18f810;
        case 0x18f814u: goto label_18f814;
        case 0x18f818u: goto label_18f818;
        case 0x18f81cu: goto label_18f81c;
        case 0x18f820u: goto label_18f820;
        case 0x18f824u: goto label_18f824;
        case 0x18f828u: goto label_18f828;
        case 0x18f82cu: goto label_18f82c;
        case 0x18f830u: goto label_18f830;
        case 0x18f834u: goto label_18f834;
        case 0x18f838u: goto label_18f838;
        case 0x18f83cu: goto label_18f83c;
        case 0x18f840u: goto label_18f840;
        case 0x18f844u: goto label_18f844;
        case 0x18f848u: goto label_18f848;
        case 0x18f84cu: goto label_18f84c;
        case 0x18f850u: goto label_18f850;
        case 0x18f854u: goto label_18f854;
        case 0x18f858u: goto label_18f858;
        case 0x18f85cu: goto label_18f85c;
        case 0x18f860u: goto label_18f860;
        case 0x18f864u: goto label_18f864;
        case 0x18f868u: goto label_18f868;
        case 0x18f86cu: goto label_18f86c;
        case 0x18f870u: goto label_18f870;
        case 0x18f874u: goto label_18f874;
        case 0x18f878u: goto label_18f878;
        case 0x18f87cu: goto label_18f87c;
        case 0x18f880u: goto label_18f880;
        case 0x18f884u: goto label_18f884;
        case 0x18f888u: goto label_18f888;
        case 0x18f88cu: goto label_18f88c;
        case 0x18f890u: goto label_18f890;
        case 0x18f894u: goto label_18f894;
        case 0x18f898u: goto label_18f898;
        case 0x18f89cu: goto label_18f89c;
        case 0x18f8a0u: goto label_18f8a0;
        case 0x18f8a4u: goto label_18f8a4;
        case 0x18f8a8u: goto label_18f8a8;
        case 0x18f8acu: goto label_18f8ac;
        case 0x18f8b0u: goto label_18f8b0;
        case 0x18f8b4u: goto label_18f8b4;
        case 0x18f8b8u: goto label_18f8b8;
        case 0x18f8bcu: goto label_18f8bc;
        case 0x18f8c0u: goto label_18f8c0;
        case 0x18f8c4u: goto label_18f8c4;
        case 0x18f8c8u: goto label_18f8c8;
        case 0x18f8ccu: goto label_18f8cc;
        case 0x18f8d0u: goto label_18f8d0;
        case 0x18f8d4u: goto label_18f8d4;
        case 0x18f8d8u: goto label_18f8d8;
        case 0x18f8dcu: goto label_18f8dc;
        case 0x18f8e0u: goto label_18f8e0;
        case 0x18f8e4u: goto label_18f8e4;
        case 0x18f8e8u: goto label_18f8e8;
        case 0x18f8ecu: goto label_18f8ec;
        case 0x18f8f0u: goto label_18f8f0;
        case 0x18f8f4u: goto label_18f8f4;
        case 0x18f8f8u: goto label_18f8f8;
        case 0x18f8fcu: goto label_18f8fc;
        case 0x18f900u: goto label_18f900;
        case 0x18f904u: goto label_18f904;
        case 0x18f908u: goto label_18f908;
        case 0x18f90cu: goto label_18f90c;
        case 0x18f910u: goto label_18f910;
        case 0x18f914u: goto label_18f914;
        case 0x18f918u: goto label_18f918;
        case 0x18f91cu: goto label_18f91c;
        case 0x18f920u: goto label_18f920;
        case 0x18f924u: goto label_18f924;
        case 0x18f928u: goto label_18f928;
        case 0x18f92cu: goto label_18f92c;
        case 0x18f930u: goto label_18f930;
        case 0x18f934u: goto label_18f934;
        case 0x18f938u: goto label_18f938;
        case 0x18f93cu: goto label_18f93c;
        case 0x18f940u: goto label_18f940;
        case 0x18f944u: goto label_18f944;
        case 0x18f948u: goto label_18f948;
        case 0x18f94cu: goto label_18f94c;
        case 0x18f950u: goto label_18f950;
        case 0x18f954u: goto label_18f954;
        case 0x18f958u: goto label_18f958;
        case 0x18f95cu: goto label_18f95c;
        case 0x18f960u: goto label_18f960;
        case 0x18f964u: goto label_18f964;
        case 0x18f968u: goto label_18f968;
        case 0x18f96cu: goto label_18f96c;
        case 0x18f970u: goto label_18f970;
        case 0x18f974u: goto label_18f974;
        case 0x18f978u: goto label_18f978;
        case 0x18f97cu: goto label_18f97c;
        case 0x18f980u: goto label_18f980;
        case 0x18f984u: goto label_18f984;
        case 0x18f988u: goto label_18f988;
        case 0x18f98cu: goto label_18f98c;
        case 0x18f990u: goto label_18f990;
        case 0x18f994u: goto label_18f994;
        case 0x18f998u: goto label_18f998;
        case 0x18f99cu: goto label_18f99c;
        case 0x18f9a0u: goto label_18f9a0;
        case 0x18f9a4u: goto label_18f9a4;
        case 0x18f9a8u: goto label_18f9a8;
        case 0x18f9acu: goto label_18f9ac;
        case 0x18f9b0u: goto label_18f9b0;
        case 0x18f9b4u: goto label_18f9b4;
        case 0x18f9b8u: goto label_18f9b8;
        case 0x18f9bcu: goto label_18f9bc;
        case 0x18f9c0u: goto label_18f9c0;
        case 0x18f9c4u: goto label_18f9c4;
        case 0x18f9c8u: goto label_18f9c8;
        case 0x18f9ccu: goto label_18f9cc;
        case 0x18f9d0u: goto label_18f9d0;
        case 0x18f9d4u: goto label_18f9d4;
        case 0x18f9d8u: goto label_18f9d8;
        case 0x18f9dcu: goto label_18f9dc;
        case 0x18f9e0u: goto label_18f9e0;
        case 0x18f9e4u: goto label_18f9e4;
        case 0x18f9e8u: goto label_18f9e8;
        case 0x18f9ecu: goto label_18f9ec;
        case 0x18f9f0u: goto label_18f9f0;
        case 0x18f9f4u: goto label_18f9f4;
        case 0x18f9f8u: goto label_18f9f8;
        case 0x18f9fcu: goto label_18f9fc;
        case 0x18fa00u: goto label_18fa00;
        case 0x18fa04u: goto label_18fa04;
        case 0x18fa08u: goto label_18fa08;
        case 0x18fa0cu: goto label_18fa0c;
        case 0x18fa10u: goto label_18fa10;
        case 0x18fa14u: goto label_18fa14;
        case 0x18fa18u: goto label_18fa18;
        case 0x18fa1cu: goto label_18fa1c;
        case 0x18fa20u: goto label_18fa20;
        case 0x18fa24u: goto label_18fa24;
        case 0x18fa28u: goto label_18fa28;
        case 0x18fa2cu: goto label_18fa2c;
        case 0x18fa30u: goto label_18fa30;
        case 0x18fa34u: goto label_18fa34;
        case 0x18fa38u: goto label_18fa38;
        case 0x18fa3cu: goto label_18fa3c;
        case 0x18fa40u: goto label_18fa40;
        case 0x18fa44u: goto label_18fa44;
        case 0x18fa48u: goto label_18fa48;
        case 0x18fa4cu: goto label_18fa4c;
        case 0x18fa50u: goto label_18fa50;
        case 0x18fa54u: goto label_18fa54;
        case 0x18fa58u: goto label_18fa58;
        case 0x18fa5cu: goto label_18fa5c;
        case 0x18fa60u: goto label_18fa60;
        case 0x18fa64u: goto label_18fa64;
        case 0x18fa68u: goto label_18fa68;
        case 0x18fa6cu: goto label_18fa6c;
        case 0x18fa70u: goto label_18fa70;
        case 0x18fa74u: goto label_18fa74;
        case 0x18fa78u: goto label_18fa78;
        case 0x18fa7cu: goto label_18fa7c;
        case 0x18fa80u: goto label_18fa80;
        case 0x18fa84u: goto label_18fa84;
        case 0x18fa88u: goto label_18fa88;
        case 0x18fa8cu: goto label_18fa8c;
        case 0x18fa90u: goto label_18fa90;
        case 0x18fa94u: goto label_18fa94;
        case 0x18fa98u: goto label_18fa98;
        case 0x18fa9cu: goto label_18fa9c;
        case 0x18faa0u: goto label_18faa0;
        case 0x18faa4u: goto label_18faa4;
        case 0x18faa8u: goto label_18faa8;
        case 0x18faacu: goto label_18faac;
        case 0x18fab0u: goto label_18fab0;
        case 0x18fab4u: goto label_18fab4;
        case 0x18fab8u: goto label_18fab8;
        case 0x18fabcu: goto label_18fabc;
        case 0x18fac0u: goto label_18fac0;
        case 0x18fac4u: goto label_18fac4;
        case 0x18fac8u: goto label_18fac8;
        case 0x18faccu: goto label_18facc;
        case 0x18fad0u: goto label_18fad0;
        case 0x18fad4u: goto label_18fad4;
        case 0x18fad8u: goto label_18fad8;
        case 0x18fadcu: goto label_18fadc;
        case 0x18fae0u: goto label_18fae0;
        case 0x18fae4u: goto label_18fae4;
        case 0x18fae8u: goto label_18fae8;
        case 0x18faecu: goto label_18faec;
        case 0x18faf0u: goto label_18faf0;
        case 0x18faf4u: goto label_18faf4;
        case 0x18faf8u: goto label_18faf8;
        case 0x18fafcu: goto label_18fafc;
        case 0x18fb00u: goto label_18fb00;
        case 0x18fb04u: goto label_18fb04;
        case 0x18fb08u: goto label_18fb08;
        case 0x18fb0cu: goto label_18fb0c;
        case 0x18fb10u: goto label_18fb10;
        case 0x18fb14u: goto label_18fb14;
        case 0x18fb18u: goto label_18fb18;
        case 0x18fb1cu: goto label_18fb1c;
        case 0x18fb20u: goto label_18fb20;
        case 0x18fb24u: goto label_18fb24;
        case 0x18fb28u: goto label_18fb28;
        case 0x18fb2cu: goto label_18fb2c;
        case 0x18fb30u: goto label_18fb30;
        case 0x18fb34u: goto label_18fb34;
        case 0x18fb38u: goto label_18fb38;
        case 0x18fb3cu: goto label_18fb3c;
        case 0x18fb40u: goto label_18fb40;
        case 0x18fb44u: goto label_18fb44;
        case 0x18fb48u: goto label_18fb48;
        case 0x18fb4cu: goto label_18fb4c;
        case 0x18fb50u: goto label_18fb50;
        case 0x18fb54u: goto label_18fb54;
        case 0x18fb58u: goto label_18fb58;
        case 0x18fb5cu: goto label_18fb5c;
        case 0x18fb60u: goto label_18fb60;
        case 0x18fb64u: goto label_18fb64;
        case 0x18fb68u: goto label_18fb68;
        case 0x18fb6cu: goto label_18fb6c;
        case 0x18fb70u: goto label_18fb70;
        case 0x18fb74u: goto label_18fb74;
        case 0x18fb78u: goto label_18fb78;
        case 0x18fb7cu: goto label_18fb7c;
        case 0x18fb80u: goto label_18fb80;
        case 0x18fb84u: goto label_18fb84;
        case 0x18fb88u: goto label_18fb88;
        case 0x18fb8cu: goto label_18fb8c;
        case 0x18fb90u: goto label_18fb90;
        case 0x18fb94u: goto label_18fb94;
        case 0x18fb98u: goto label_18fb98;
        case 0x18fb9cu: goto label_18fb9c;
        case 0x18fba0u: goto label_18fba0;
        case 0x18fba4u: goto label_18fba4;
        case 0x18fba8u: goto label_18fba8;
        case 0x18fbacu: goto label_18fbac;
        case 0x18fbb0u: goto label_18fbb0;
        case 0x18fbb4u: goto label_18fbb4;
        case 0x18fbb8u: goto label_18fbb8;
        case 0x18fbbcu: goto label_18fbbc;
        case 0x18fbc0u: goto label_18fbc0;
        case 0x18fbc4u: goto label_18fbc4;
        case 0x18fbc8u: goto label_18fbc8;
        case 0x18fbccu: goto label_18fbcc;
        case 0x18fbd0u: goto label_18fbd0;
        case 0x18fbd4u: goto label_18fbd4;
        case 0x18fbd8u: goto label_18fbd8;
        case 0x18fbdcu: goto label_18fbdc;
        case 0x18fbe0u: goto label_18fbe0;
        case 0x18fbe4u: goto label_18fbe4;
        case 0x18fbe8u: goto label_18fbe8;
        case 0x18fbecu: goto label_18fbec;
        case 0x18fbf0u: goto label_18fbf0;
        case 0x18fbf4u: goto label_18fbf4;
        case 0x18fbf8u: goto label_18fbf8;
        case 0x18fbfcu: goto label_18fbfc;
        case 0x18fc00u: goto label_18fc00;
        case 0x18fc04u: goto label_18fc04;
        case 0x18fc08u: goto label_18fc08;
        case 0x18fc0cu: goto label_18fc0c;
        case 0x18fc10u: goto label_18fc10;
        case 0x18fc14u: goto label_18fc14;
        case 0x18fc18u: goto label_18fc18;
        case 0x18fc1cu: goto label_18fc1c;
        case 0x18fc20u: goto label_18fc20;
        case 0x18fc24u: goto label_18fc24;
        case 0x18fc28u: goto label_18fc28;
        case 0x18fc2cu: goto label_18fc2c;
        case 0x18fc30u: goto label_18fc30;
        case 0x18fc34u: goto label_18fc34;
        case 0x18fc38u: goto label_18fc38;
        case 0x18fc3cu: goto label_18fc3c;
        case 0x18fc40u: goto label_18fc40;
        case 0x18fc44u: goto label_18fc44;
        case 0x18fc48u: goto label_18fc48;
        case 0x18fc4cu: goto label_18fc4c;
        case 0x18fc50u: goto label_18fc50;
        case 0x18fc54u: goto label_18fc54;
        case 0x18fc58u: goto label_18fc58;
        case 0x18fc5cu: goto label_18fc5c;
        case 0x18fc60u: goto label_18fc60;
        case 0x18fc64u: goto label_18fc64;
        case 0x18fc68u: goto label_18fc68;
        case 0x18fc6cu: goto label_18fc6c;
        default: return;
    }

label_18f4a0:
    // 0x18f4a0: 0x4a0002ff  vnop
    ctx->pc = 0x18f4a0u;
    // NOP operation, no action needed for VU0
label_18f4a4:
    // 0x18f4a4: 0x4a0002ff  vnop
    ctx->pc = 0x18f4a4u;
    // NOP operation, no action needed for VU0
label_18f4a8:
    // 0x18f4a8: 0x4b03f99a  vmulz.x     $vf6, $vf31, $vf3z
    ctx->pc = 0x18f4a8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
label_18f4ac:
    // 0x18f4ac: 0x4a0002ff  vnop
    ctx->pc = 0x18f4acu;
    // NOP operation, no action needed for VU0
label_18f4b0:
    // 0x18f4b0: 0x4a0002ff  vnop
    ctx->pc = 0x18f4b0u;
    // NOP operation, no action needed for VU0
label_18f4b4:
    // 0x18f4b4: 0x4b0319bc  vmulax.x    $ACC, $vf3, $vf3x
    ctx->pc = 0x18f4b4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
label_18f4b8:
    // 0x18f4b8: 0x4b03310a  vmaddz.x    $vf4, $vf6, $vf3z
    ctx->pc = 0x18f4b8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_18f4bc:
    // 0x18f4bc: 0x4a0002ff  vnop
    ctx->pc = 0x18f4bcu;
    // NOP operation, no action needed for VU0
label_18f4c0:
    // 0x18f4c0: 0x4a0002ff  vnop
    ctx->pc = 0x18f4c0u;
    // NOP operation, no action needed for VU0
label_18f4c4:
    // 0x18f4c4: 0x4a0002ff  vnop
    ctx->pc = 0x18f4c4u;
    // NOP operation, no action needed for VU0
label_18f4c8:
    // 0x18f4c8: 0x4a0403bd  .word       0x4A0403BD                   # vsqrt       $Q, $vf4x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x18f4c8u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
label_18f4cc:
    // 0x18f4cc: 0x4a0003bf  vwaitq
    ctx->pc = 0x18f4ccu;
    // VWAITQ (Q already resolved in this runtime)
label_18f4d0:
    // 0x18f4d0: 0x4849b000  cfc2.ni     $t1, $vi22
    ctx->pc = 0x18f4d0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->vu0_q, sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
label_18f4d4:
    // 0x18f4d4: 0x44890800  mtc1        $t1, $f1
    ctx->pc = 0x18f4d4u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_18f4d8:
    // 0x18f4d8: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x18f4d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_18f4dc:
    // 0x18f4dc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x18f4dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_18f4e0:
    // 0x18f4e0: 0x4601c001  sub.s       $f0, $f24, $f1
    ctx->pc = 0x18f4e0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[24], ctx->f[1]);
label_18f4e4:
    // 0x18f4e4: 0x4600b802  mul.s       $f0, $f23, $f0
    ctx->pc = 0x18f4e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[23], ctx->f[0]);
label_18f4e8:
    // 0x18f4e8: 0xc066e08  jal         func_19B820
label_18f4ec:
    if (ctx->pc == 0x18F4ECu) {
        ctx->pc = 0x18F4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F4E8u;
        // 0x18f4ec: 0x46000d00  add.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F4F0u;
        goto label_18f4f0;
    }
    ctx->pc = 0x18F4E8u;
    SET_GPR_U32(ctx, 31, 0x18F4F0u);
    ctx->pc = 0x18F4ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F4E8u;
    // 0x18f4ec: 0x46000d00  add.s       $f20, $f1, $f0 (Delay Slot)
    ctx->f[20] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B820u;
    { ctx->pc = 0x19b820; return; }
    ctx->pc = 0x18F4F0u;
label_18f4f0:
    // 0x18f4f0: 0xc7ad0068  lwc1        $f13, 0x68($sp)
    ctx->pc = 0x18f4f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_18f4f4:
    // 0x18f4f4: 0xc06d51e  jal         func_1B5478
label_18f4f8:
    if (ctx->pc == 0x18F4F8u) {
        ctx->pc = 0x18F4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F4F4u;
        // 0x18f4f8: 0xc7ac0060  lwc1        $f12, 0x60($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F4FCu;
        goto label_18f4fc;
    }
    ctx->pc = 0x18F4F4u;
    SET_GPR_U32(ctx, 31, 0x18F4FCu);
    ctx->pc = 0x18F4F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F4F4u;
    // 0x18f4f8: 0xc7ac0060  lwc1        $f12, 0x60($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5478u;
    { ctx->pc = 0x1b5478; return; }
    ctx->pc = 0x18F4FCu;
label_18f4fc:
    // 0x18f4fc: 0xc6020004  lwc1        $f2, 0x4($s0)
    ctx->pc = 0x18f4fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_18f500:
    // 0x18f500: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x18f500u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_18f504:
    // 0x18f504: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x18f504u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_18f508:
    // 0x18f508: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x18f508u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_18f50c:
    // 0x18f50c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x18f50cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_18f510:
    // 0x18f510: 0x0  nop
    ctx->pc = 0x18f510u;
    // NOP
label_18f514:
    // 0x18f514: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x18f514u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_18f518:
    // 0x18f518: 0x46010581  sub.s       $f22, $f0, $f1
    ctx->pc = 0x18f518u;
    ctx->f[22] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_18f51c:
    // 0x18f51c: 0xc06d448  jal         func_1B5120
label_18f520:
    if (ctx->pc == 0x18F520u) {
        ctx->pc = 0x18F520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F51Cu;
        // 0x18f520: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F524u;
        goto label_18f524;
    }
    ctx->pc = 0x18F51Cu;
    SET_GPR_U32(ctx, 31, 0x18F524u);
    ctx->pc = 0x18F520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F51Cu;
    // 0x18f520: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5120u;
    { ctx->pc = 0x1b5120; return; }
    ctx->pc = 0x18F524u;
label_18f524:
    // 0x18f524: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x18f524u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_18f528:
    // 0x18f528: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x18f528u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_18f52c:
    // 0x18f52c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x18f52cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_18f530:
    // 0x18f530: 0x0  nop
    ctx->pc = 0x18f530u;
    // NOP
label_18f534:
    // 0x18f534: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x18f534u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18f538:
    // 0x18f538: 0x0  nop
    ctx->pc = 0x18f538u;
    // NOP
label_18f53c:
    // 0x18f53c: 0x45010008  bc1t        . + 4 + (0x8 << 2)
label_18f540:
    if (ctx->pc == 0x18F540u) {
        ctx->pc = 0x18F540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F53Cu;
        // 0x18f540: 0x3c024049  lui         $v0, 0x4049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F544u;
        goto label_18f544;
    }
    ctx->pc = 0x18F53Cu;
    {
        const bool branch_taken_0x18f53c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x18F540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F53Cu;
        // 0x18f540: 0x3c024049  lui         $v0, 0x4049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f53c) {
            ctx->pc = 0x18F560u;
            goto label_18f560;
        }
    }
    ctx->pc = 0x18F544u;
label_18f544:
    // 0x18f544: 0x0  nop
    ctx->pc = 0x18f544u;
    // NOP
label_18f548:
    // 0x18f548: 0x0  nop
    ctx->pc = 0x18f548u;
    // NOP
label_18f54c:
    // 0x18f54c: 0x4601b003  div.s       $f0, $f22, $f1
    ctx->pc = 0x18f54cu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[22] * 0.0f); } else ctx->f[0] = ctx->f[22] / ctx->f[1];
label_18f550:
    // 0x18f550: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x18f550u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_18f554:
    // 0x18f554: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x18f554u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_18f558:
    // 0x18f558: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x18f558u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_18f55c:
    // 0x18f55c: 0x4600b581  sub.s       $f22, $f22, $f0
    ctx->pc = 0x18f55cu;
    ctx->f[22] = FPU_SUB_S(ctx->f[22], ctx->f[0]);
label_18f560:
    // 0x18f560: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x18f560u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_18f564:
    // 0x18f564: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18f564u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18f568:
    // 0x18f568: 0x0  nop
    ctx->pc = 0x18f568u;
    // NOP
label_18f56c:
    // 0x18f56c: 0x4600b036  c.le.s      $f22, $f0
    ctx->pc = 0x18f56cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[22], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18f570:
    // 0x18f570: 0x0  nop
    ctx->pc = 0x18f570u;
    // NOP
label_18f574:
    // 0x18f574: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_18f578:
    if (ctx->pc == 0x18F578u) {
        ctx->pc = 0x18F57Cu;
        goto label_18f57c;
    }
    ctx->pc = 0x18F574u;
    {
        const bool branch_taken_0x18f574 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x18f574) {
            ctx->pc = 0x18F590u;
            goto label_18f590;
        }
    }
    ctx->pc = 0x18F57Cu;
label_18f57c:
    // 0x18f57c: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x18f57cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_18f580:
    // 0x18f580: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x18f580u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_18f584:
    // 0x18f584: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18f584u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18f588:
    // 0x18f588: 0x1000000e  b           . + 4 + (0xE << 2)
label_18f58c:
    if (ctx->pc == 0x18F58Cu) {
        ctx->pc = 0x18F58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F588u;
        // 0x18f58c: 0x4600b581  sub.s       $f22, $f22, $f0 (Delay Slot)
        ctx->f[22] = FPU_SUB_S(ctx->f[22], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F590u;
        goto label_18f590;
    }
    ctx->pc = 0x18F588u;
    {
        const bool branch_taken_0x18f588 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F588u;
        // 0x18f58c: 0x4600b581  sub.s       $f22, $f22, $f0 (Delay Slot)
        ctx->f[22] = FPU_SUB_S(ctx->f[22], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f588) {
            ctx->pc = 0x18F5C4u;
            goto label_18f5c4;
        }
    }
    ctx->pc = 0x18F590u;
label_18f590:
    // 0x18f590: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x18f590u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
label_18f594:
    // 0x18f594: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x18f594u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_18f598:
    // 0x18f598: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18f598u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18f59c:
    // 0x18f59c: 0x0  nop
    ctx->pc = 0x18f59cu;
    // NOP
label_18f5a0:
    // 0x18f5a0: 0x4600b034  c.lt.s      $f22, $f0
    ctx->pc = 0x18f5a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18f5a4:
    // 0x18f5a4: 0x0  nop
    ctx->pc = 0x18f5a4u;
    // NOP
label_18f5a8:
    // 0x18f5a8: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_18f5ac:
    if (ctx->pc == 0x18F5ACu) {
        ctx->pc = 0x18F5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F5A8u;
        // 0x18f5ac: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F5B0u;
        goto label_18f5b0;
    }
    ctx->pc = 0x18F5A8u;
    {
        const bool branch_taken_0x18f5a8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x18F5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F5A8u;
        // 0x18f5ac: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f5a8) {
            ctx->pc = 0x18F5C8u;
            goto label_18f5c8;
        }
    }
    ctx->pc = 0x18F5B0u;
label_18f5b0:
    // 0x18f5b0: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x18f5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_18f5b4:
    // 0x18f5b4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x18f5b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_18f5b8:
    // 0x18f5b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18f5b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18f5bc:
    // 0x18f5bc: 0x0  nop
    ctx->pc = 0x18f5bcu;
    // NOP
label_18f5c0:
    // 0x18f5c0: 0x4600b580  add.s       $f22, $f22, $f0
    ctx->pc = 0x18f5c0u;
    ctx->f[22] = FPU_ADD_S(ctx->f[22], ctx->f[0]);
label_18f5c4:
    // 0x18f5c4: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x18f5c4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_18f5c8:
    // 0x18f5c8: 0xc06d448  jal         func_1B5120
label_18f5cc:
    if (ctx->pc == 0x18F5CCu) {
        ctx->pc = 0x18F5D0u;
        goto label_18f5d0;
    }
    ctx->pc = 0x18F5C8u;
    SET_GPR_U32(ctx, 31, 0x18F5D0u);
    ctx->pc = 0x1B5120u;
    { ctx->pc = 0x1b5120; return; }
    ctx->pc = 0x18F5D0u;
label_18f5d0:
    // 0x18f5d0: 0x3c033d80  lui         $v1, 0x3D80
    ctx->pc = 0x18f5d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15744 << 16));
label_18f5d4:
    // 0x18f5d4: 0x3463adfd  ori         $v1, $v1, 0xADFD
    ctx->pc = 0x18f5d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)44541);
label_18f5d8:
    // 0x18f5d8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x18f5d8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_18f5dc:
    // 0x18f5dc: 0x0  nop
    ctx->pc = 0x18f5dcu;
    // NOP
label_18f5e0:
    // 0x18f5e0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x18f5e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18f5e4:
    // 0x18f5e4: 0x0  nop
    ctx->pc = 0x18f5e4u;
    // NOP
label_18f5e8:
    // 0x18f5e8: 0x45010024  bc1t        . + 4 + (0x24 << 2)
label_18f5ec:
    if (ctx->pc == 0x18F5ECu) {
        ctx->pc = 0x18F5F0u;
        goto label_18f5f0;
    }
    ctx->pc = 0x18F5E8u;
    {
        const bool branch_taken_0x18f5e8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x18f5e8) {
            ctx->pc = 0x18F67Cu;
            goto label_18f67c;
        }
    }
    ctx->pc = 0x18F5F0u;
label_18f5f0:
    // 0x18f5f0: 0xc06d4c0  jal         func_1B5300
label_18f5f4:
    if (ctx->pc == 0x18F5F4u) {
        ctx->pc = 0x18F5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F5F0u;
        // 0x18f5f4: 0xc60c0004  lwc1        $f12, 0x4($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F5F8u;
        goto label_18f5f8;
    }
    ctx->pc = 0x18F5F0u;
    SET_GPR_U32(ctx, 31, 0x18F5F8u);
    ctx->pc = 0x18F5F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F5F0u;
    // 0x18f5f4: 0xc60c0004  lwc1        $f12, 0x4($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5300u;
    { ctx->pc = 0x1b5300; return; }
    ctx->pc = 0x18F5F8u;
label_18f5f8:
    // 0x18f5f8: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x18f5f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_18f5fc:
    // 0x18f5fc: 0xafa00074  sw          $zero, 0x74($sp)
    ctx->pc = 0x18f5fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
label_18f600:
    // 0x18f600: 0xc06d412  jal         func_1B5048
label_18f604:
    if (ctx->pc == 0x18F604u) {
        ctx->pc = 0x18F604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F600u;
        // 0x18f604: 0xc60c0004  lwc1        $f12, 0x4($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F608u;
        goto label_18f608;
    }
    ctx->pc = 0x18F600u;
    SET_GPR_U32(ctx, 31, 0x18F608u);
    ctx->pc = 0x18F604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F600u;
    // 0x18f604: 0xc60c0004  lwc1        $f12, 0x4($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5048u;
    { ctx->pc = 0x1b5048; return; }
    ctx->pc = 0x18F608u;
label_18f608:
    // 0x18f608: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x18f608u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_18f60c:
    // 0x18f60c: 0xafa0007c  sw          $zero, 0x7C($sp)
    ctx->pc = 0x18f60cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 0));
label_18f610:
    // 0x18f610: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x18f610u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_18f614:
    // 0x18f614: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x18f614u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_18f618:
    // 0x18f618: 0xc066e14  jal         func_19B850
label_18f61c:
    if (ctx->pc == 0x18F61Cu) {
        ctx->pc = 0x18F61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F618u;
        // 0x18f61c: 0x4600c307  neg.s       $f12, $f24 (Delay Slot)
        ctx->f[12] = FPU_NEG_S(ctx->f[24]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F620u;
        goto label_18f620;
    }
    ctx->pc = 0x18F618u;
    SET_GPR_U32(ctx, 31, 0x18F620u);
    ctx->pc = 0x18F61Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F618u;
    // 0x18f61c: 0x4600c307  neg.s       $f12, $f24 (Delay Slot)
    ctx->f[12] = FPU_NEG_S(ctx->f[24]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B850u;
    { ctx->pc = 0x19b850; return; }
    ctx->pc = 0x18F620u;
label_18f620:
    // 0x18f620: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x18f620u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_18f624:
    // 0x18f624: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x18f624u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_18f628:
    // 0x18f628: 0xc066e02  jal         func_19B808
label_18f62c:
    if (ctx->pc == 0x18F62Cu) {
        ctx->pc = 0x18F62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F628u;
        // 0x18f62c: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F630u;
        goto label_18f630;
    }
    ctx->pc = 0x18F628u;
    SET_GPR_U32(ctx, 31, 0x18F630u);
    ctx->pc = 0x18F62Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F628u;
    // 0x18f62c: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B808u;
    { ctx->pc = 0x19b808; return; }
    ctx->pc = 0x18F630u;
label_18f630:
    // 0x18f630: 0x4617b582  mul.s       $f22, $f22, $f23
    ctx->pc = 0x18f630u;
    ctx->f[22] = FPU_MUL_S(ctx->f[22], ctx->f[23]);
label_18f634:
    // 0x18f634: 0xc6580034  lwc1        $f24, 0x34($s2)
    ctx->pc = 0x18f634u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_18f638:
    // 0x18f638: 0xc06d4c0  jal         func_1B5300
label_18f63c:
    if (ctx->pc == 0x18F63Cu) {
        ctx->pc = 0x18F63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F638u;
        // 0x18f63c: 0x4615b300  add.s       $f12, $f22, $f21 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[22], ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F640u;
        goto label_18f640;
    }
    ctx->pc = 0x18F638u;
    SET_GPR_U32(ctx, 31, 0x18F640u);
    ctx->pc = 0x18F63Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F638u;
    // 0x18f63c: 0x4615b300  add.s       $f12, $f22, $f21 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[22], ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5300u;
    { ctx->pc = 0x1b5300; return; }
    ctx->pc = 0x18F640u;
label_18f640:
    // 0x18f640: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x18f640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_18f644:
    // 0x18f644: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x18f644u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_18f648:
    // 0x18f648: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x18f648u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_18f64c:
    // 0x18f64c: 0x4615b300  add.s       $f12, $f22, $f21
    ctx->pc = 0x18f64cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[22], ctx->f[21]);
label_18f650:
    // 0x18f650: 0xc06d412  jal         func_1B5048
label_18f654:
    if (ctx->pc == 0x18F654u) {
        ctx->pc = 0x18F654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F650u;
        // 0x18f654: 0xe6400030  swc1        $f0, 0x30($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 48), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F658u;
        goto label_18f658;
    }
    ctx->pc = 0x18F650u;
    SET_GPR_U32(ctx, 31, 0x18F658u);
    ctx->pc = 0x18F654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F650u;
    // 0x18f654: 0xe6400030  swc1        $f0, 0x30($s2) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 48), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5048u;
    { ctx->pc = 0x1b5048; return; }
    ctx->pc = 0x18F658u;
label_18f658:
    // 0x18f658: 0x4600a042  mul.s       $f1, $f20, $f0
    ctx->pc = 0x18f658u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_18f65c:
    // 0x18f65c: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x18f65cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18f660:
    // 0x18f660: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x18f660u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_18f664:
    // 0x18f664: 0xe6400038  swc1        $f0, 0x38($s2)
    ctx->pc = 0x18f664u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 56), bits); }
label_18f668:
    // 0x18f668: 0xc6410034  lwc1        $f1, 0x34($s2)
    ctx->pc = 0x18f668u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_18f66c:
    // 0x18f66c: 0x4601c001  sub.s       $f0, $f24, $f1
    ctx->pc = 0x18f66cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[24], ctx->f[1]);
label_18f670:
    // 0x18f670: 0x4600b802  mul.s       $f0, $f23, $f0
    ctx->pc = 0x18f670u;
    ctx->f[0] = FPU_MUL_S(ctx->f[23], ctx->f[0]);
label_18f674:
    // 0x18f674: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x18f674u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_18f678:
    // 0x18f678: 0xe6400034  swc1        $f0, 0x34($s2)
    ctx->pc = 0x18f678u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 52), bits); }
label_18f67c:
    // 0x18f67c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x18f67cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_18f680:
    // 0x18f680: 0xc7b80010  lwc1        $f24, 0x10($sp)
    ctx->pc = 0x18f680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_18f684:
    // 0x18f684: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x18f684u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_18f688:
    // 0x18f688: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x18f688u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_18f68c:
    // 0x18f68c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x18f68cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_18f690:
    // 0x18f690: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x18f690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_18f694:
    // 0x18f694: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x18f694u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_18f698:
    // 0x18f698: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x18f698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_18f69c:
    // 0x18f69c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x18f69cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_18f6a0:
    // 0x18f6a0: 0x3e00008  jr          $ra
label_18f6a4:
    if (ctx->pc == 0x18F6A4u) {
        ctx->pc = 0x18F6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F6A0u;
        // 0x18f6a4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F6A8u;
        goto label_18f6a8;
    }
    ctx->pc = 0x18F6A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18F6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F6A0u;
        // 0x18f6a4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18F6A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18F6A8u;
label_18f6a8:
    // 0x18f6a8: 0x0  nop
    ctx->pc = 0x18f6a8u;
    // NOP
label_18f6ac:
    // 0x18f6ac: 0x0  nop
    ctx->pc = 0x18f6acu;
    // NOP
label_18f6b0:
    // 0x18f6b0: 0x27bdfd60  addiu       $sp, $sp, -0x2A0
    ctx->pc = 0x18f6b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966624));
label_18f6b4:
    // 0x18f6b4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x18f6b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_18f6b8:
    // 0x18f6b8: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x18f6b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_18f6bc:
    // 0x18f6bc: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x18f6bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_18f6c0:
    // 0x18f6c0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x18f6c0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_18f6c4:
    // 0x18f6c4: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x18f6c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_18f6c8:
    // 0x18f6c8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x18f6c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_18f6cc:
    // 0x18f6cc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x18f6ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_18f6d0:
    // 0x18f6d0: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x18f6d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_18f6d4:
    // 0x18f6d4: 0xe7bb001c  swc1        $f27, 0x1C($sp)
    ctx->pc = 0x18f6d4u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_18f6d8:
    // 0x18f6d8: 0xe7ba0018  swc1        $f26, 0x18($sp)
    ctx->pc = 0x18f6d8u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_18f6dc:
    // 0x18f6dc: 0xe7b90014  swc1        $f25, 0x14($sp)
    ctx->pc = 0x18f6dcu;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_18f6e0:
    // 0x18f6e0: 0xe7b80010  swc1        $f24, 0x10($sp)
    ctx->pc = 0x18f6e0u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_18f6e4:
    // 0x18f6e4: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x18f6e4u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_18f6e8:
    // 0x18f6e8: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x18f6e8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_18f6ec:
    // 0x18f6ec: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x18f6ecu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_18f6f0:
    // 0x18f6f0: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x18f6f0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_18f6f4:
    // 0x18f6f4: 0xac8000a4  sw          $zero, 0xA4($a0)
    ctx->pc = 0x18f6f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 164), GPR_U32(ctx, 0));
label_18f6f8:
    // 0x18f6f8: 0x460066c6  mov.s       $f27, $f12
    ctx->pc = 0x18f6f8u;
    ctx->f[27] = FPU_MOV_S(ctx->f[12]);
label_18f6fc:
    // 0x18f6fc: 0xac8000a8  sw          $zero, 0xA8($a0)
    ctx->pc = 0x18f6fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 168), GPR_U32(ctx, 0));
label_18f700:
    // 0x18f700: 0x46006d06  mov.s       $f20, $f13
    ctx->pc = 0x18f700u;
    ctx->f[20] = FPU_MOV_S(ctx->f[13]);
label_18f704:
    // 0x18f704: 0x8f828818  lw          $v0, -0x77E8($gp)
    ctx->pc = 0x18f704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936600)));
label_18f708:
    // 0x18f708: 0x46007686  mov.s       $f26, $f14
    ctx->pc = 0x18f708u;
    ctx->f[26] = FPU_MOV_S(ctx->f[14]);
label_18f70c:
    // 0x18f70c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_18f710:
    if (ctx->pc == 0x18F710u) {
        ctx->pc = 0x18F710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F70Cu;
        // 0x18f710: 0x46007e46  mov.s       $f25, $f15 (Delay Slot)
        ctx->f[25] = FPU_MOV_S(ctx->f[15]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F714u;
        goto label_18f714;
    }
    ctx->pc = 0x18F70Cu;
    {
        const bool branch_taken_0x18f70c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F70Cu;
        // 0x18f710: 0x46007e46  mov.s       $f25, $f15 (Delay Slot)
        ctx->f[25] = FPU_MOV_S(ctx->f[15]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f70c) {
            ctx->pc = 0x18F71Cu;
            goto label_18f71c;
        }
    }
    ctx->pc = 0x18F714u;
label_18f714:
    // 0x18f714: 0x100003bb  b           . + 4 + (0x3BB << 2)
label_18f718:
    if (ctx->pc == 0x18F718u) {
        ctx->pc = 0x18F718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F714u;
        // 0x18f718: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F71Cu;
        goto label_18f71c;
    }
    ctx->pc = 0x18F714u;
    {
        const bool branch_taken_0x18f714 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F714u;
        // 0x18f718: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f714) {
            ctx->pc = 0x190604u;
            { ctx->pc = 0x190604; return; }
        }
    }
    ctx->pc = 0x18F71Cu;
label_18f71c:
    // 0x18f71c: 0x8e6400b0  lw          $a0, 0xB0($s3)
    ctx->pc = 0x18f71cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 176)));
label_18f720:
    // 0x18f720: 0x10800102  beqz        $a0, . + 4 + (0x102 << 2)
label_18f724:
    if (ctx->pc == 0x18F724u) {
        ctx->pc = 0x18F724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F720u;
        // 0x18f724: 0x26650030  addiu       $a1, $s3, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F728u;
        goto label_18f728;
    }
    ctx->pc = 0x18F720u;
    {
        const bool branch_taken_0x18f720 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F720u;
        // 0x18f724: 0x26650030  addiu       $a1, $s3, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f720) {
            ctx->pc = 0x18FB2Cu;
            goto label_18fb2c;
        }
    }
    ctx->pc = 0x18F728u;
label_18f728:
    // 0x18f728: 0x8f838590  lw          $v1, -0x7A70($gp)
    ctx->pc = 0x18f728u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
label_18f72c:
    // 0x18f72c: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x18f72cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
label_18f730:
    // 0x18f730: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x18f730u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_18f734:
    // 0x18f734: 0x10400081  beqz        $v0, . + 4 + (0x81 << 2)
label_18f738:
    if (ctx->pc == 0x18F738u) {
        ctx->pc = 0x18F73Cu;
        goto label_18f73c;
    }
    ctx->pc = 0x18F734u;
    {
        const bool branch_taken_0x18f734 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18f734) {
            ctx->pc = 0x18F93Cu;
            goto label_18f93c;
        }
    }
    ctx->pc = 0x18F73Cu;
label_18f73c:
    // 0x18f73c: 0x8e6200e8  lw          $v0, 0xE8($s3)
    ctx->pc = 0x18f73cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 232)));
label_18f740:
    // 0x18f740: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_18f744:
    if (ctx->pc == 0x18F744u) {
        ctx->pc = 0x18F748u;
        goto label_18f748;
    }
    ctx->pc = 0x18F740u;
    {
        const bool branch_taken_0x18f740 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18f740) {
            ctx->pc = 0x18F750u;
            goto label_18f750;
        }
    }
    ctx->pc = 0x18F748u;
label_18f748:
    // 0x18f748: 0xc04e32c  jal         func_138CB0
label_18f74c:
    if (ctx->pc == 0x18F74Cu) {
        ctx->pc = 0x18F750u;
        goto label_18f750;
    }
    ctx->pc = 0x18F748u;
    SET_GPR_U32(ctx, 31, 0x18F750u);
    ctx->pc = 0x138CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138CB0u, 0x18F748u, 0x18F750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F750u;
label_18f750:
    // 0x18f750: 0x8e6200b0  lw          $v0, 0xB0($s3)
    ctx->pc = 0x18f750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 176)));
label_18f754:
    // 0x18f754: 0x104000f3  beqz        $v0, . + 4 + (0xF3 << 2)
label_18f758:
    if (ctx->pc == 0x18F758u) {
        ctx->pc = 0x18F758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F754u;
        // 0x18f758: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F75Cu;
        goto label_18f75c;
    }
    ctx->pc = 0x18F754u;
    {
        const bool branch_taken_0x18f754 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F754u;
        // 0x18f758: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f754) {
            ctx->pc = 0x18FB24u;
            goto label_18fb24;
        }
    }
    ctx->pc = 0x18F75Cu;
label_18f75c:
    // 0x18f75c: 0xc67400b4  lwc1        $f20, 0xB4($s3)
    ctx->pc = 0x18f75cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_18f760:
    // 0x18f760: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x18f760u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18f764:
    // 0x18f764: 0x0  nop
    ctx->pc = 0x18f764u;
    // NOP
label_18f768:
    // 0x18f768: 0x46140032  c.eq.s      $f0, $f20
    ctx->pc = 0x18f768u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18f76c:
    // 0x18f76c: 0x0  nop
    ctx->pc = 0x18f76cu;
    // NOP
label_18f770:
    // 0x18f770: 0x45010032  bc1t        . + 4 + (0x32 << 2)
label_18f774:
    if (ctx->pc == 0x18F774u) {
        ctx->pc = 0x18F778u;
        goto label_18f778;
    }
    ctx->pc = 0x18F770u;
    {
        const bool branch_taken_0x18f770 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x18f770) {
            ctx->pc = 0x18F83Cu;
            goto label_18f83c;
        }
    }
    ctx->pc = 0x18F778u;
label_18f778:
    // 0x18f778: 0xc67600b8  lwc1        $f22, 0xB8($s3)
    ctx->pc = 0x18f778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_18f77c:
    // 0x18f77c: 0x27a401f0  addiu       $a0, $sp, 0x1F0
    ctx->pc = 0x18f77cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
label_18f780:
    // 0x18f780: 0xc066e26  jal         func_19B898
label_18f784:
    if (ctx->pc == 0x18F784u) {
        ctx->pc = 0x18F784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F780u;
        // 0x18f784: 0x26650010  addiu       $a1, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F788u;
        goto label_18f788;
    }
    ctx->pc = 0x18F780u;
    SET_GPR_U32(ctx, 31, 0x18F788u);
    ctx->pc = 0x18F784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F780u;
    // 0x18f784: 0x26650010  addiu       $a1, $s3, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x18F788u;
label_18f788:
    // 0x18f788: 0x27a401f0  addiu       $a0, $sp, 0x1F0
    ctx->pc = 0x18f788u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
label_18f78c:
    // 0x18f78c: 0xc066daa  jal         func_19B6A8
label_18f790:
    if (ctx->pc == 0x18F790u) {
        ctx->pc = 0x18F790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F78Cu;
        // 0x18f790: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F794u;
        goto label_18f794;
    }
    ctx->pc = 0x18F78Cu;
    SET_GPR_U32(ctx, 31, 0x18F794u);
    ctx->pc = 0x18F790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F78Cu;
    // 0x18f790: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B6A8u;
    { ctx->pc = 0x19b6a8; return; }
    ctx->pc = 0x18F794u;
label_18f794:
    // 0x18f794: 0xc7ad01f8  lwc1        $f13, 0x1F8($sp)
    ctx->pc = 0x18f794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_18f798:
    // 0x18f798: 0xc06d51e  jal         func_1B5478
label_18f79c:
    if (ctx->pc == 0x18F79Cu) {
        ctx->pc = 0x18F79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F798u;
        // 0x18f79c: 0xc7ac01f0  lwc1        $f12, 0x1F0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F7A0u;
        goto label_18f7a0;
    }
    ctx->pc = 0x18F798u;
    SET_GPR_U32(ctx, 31, 0x18F7A0u);
    ctx->pc = 0x18F79Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F798u;
    // 0x18f79c: 0xc7ac01f0  lwc1        $f12, 0x1F0($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5478u;
    { ctx->pc = 0x1b5478; return; }
    ctx->pc = 0x18F7A0u;
label_18f7a0:
    // 0x18f7a0: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x18f7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_18f7a4:
    // 0x18f7a4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x18f7a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_18f7a8:
    // 0x18f7a8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x18f7a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_18f7ac:
    // 0x18f7ac: 0x0  nop
    ctx->pc = 0x18f7acu;
    // NOP
label_18f7b0:
    // 0x18f7b0: 0x46010541  sub.s       $f21, $f0, $f1
    ctx->pc = 0x18f7b0u;
    ctx->f[21] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_18f7b4:
    // 0x18f7b4: 0xc06d4c0  jal         func_1B5300
label_18f7b8:
    if (ctx->pc == 0x18F7B8u) {
        ctx->pc = 0x18F7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F7B4u;
        // 0x18f7b8: 0x4615b300  add.s       $f12, $f22, $f21 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[22], ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F7BCu;
        goto label_18f7bc;
    }
    ctx->pc = 0x18F7B4u;
    SET_GPR_U32(ctx, 31, 0x18F7BCu);
    ctx->pc = 0x18F7B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F7B4u;
    // 0x18f7b8: 0x4615b300  add.s       $f12, $f22, $f21 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[22], ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5300u;
    { ctx->pc = 0x1b5300; return; }
    ctx->pc = 0x18F7BCu;
label_18f7bc:
    // 0x18f7bc: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x18f7bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_18f7c0:
    // 0x18f7c0: 0xafa001f4  sw          $zero, 0x1F4($sp)
    ctx->pc = 0x18f7c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 500), GPR_U32(ctx, 0));
label_18f7c4:
    // 0x18f7c4: 0x4615b300  add.s       $f12, $f22, $f21
    ctx->pc = 0x18f7c4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[22], ctx->f[21]);
label_18f7c8:
    // 0x18f7c8: 0xc06d412  jal         func_1B5048
label_18f7cc:
    if (ctx->pc == 0x18F7CCu) {
        ctx->pc = 0x18F7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F7C8u;
        // 0x18f7cc: 0xe7a001f0  swc1        $f0, 0x1F0($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 496), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F7D0u;
        goto label_18f7d0;
    }
    ctx->pc = 0x18F7C8u;
    SET_GPR_U32(ctx, 31, 0x18F7D0u);
    ctx->pc = 0x18F7CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F7C8u;
    // 0x18f7cc: 0xe7a001f0  swc1        $f0, 0x1F0($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 496), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5048u;
    { ctx->pc = 0x1b5048; return; }
    ctx->pc = 0x18F7D0u;
label_18f7d0:
    // 0x18f7d0: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x18f7d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_18f7d4:
    // 0x18f7d4: 0x26640030  addiu       $a0, $s3, 0x30
    ctx->pc = 0x18f7d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
label_18f7d8:
    // 0x18f7d8: 0x26650040  addiu       $a1, $s3, 0x40
    ctx->pc = 0x18f7d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
label_18f7dc:
    // 0x18f7dc: 0x27a601f0  addiu       $a2, $sp, 0x1F0
    ctx->pc = 0x18f7dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
label_18f7e0:
    // 0x18f7e0: 0xafa001fc  sw          $zero, 0x1FC($sp)
    ctx->pc = 0x18f7e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 508), GPR_U32(ctx, 0));
label_18f7e4:
    // 0x18f7e4: 0xc066e02  jal         func_19B808
label_18f7e8:
    if (ctx->pc == 0x18F7E8u) {
        ctx->pc = 0x18F7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F7E4u;
        // 0x18f7e8: 0xe7a001f8  swc1        $f0, 0x1F8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 504), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F7ECu;
        goto label_18f7ec;
    }
    ctx->pc = 0x18F7E4u;
    SET_GPR_U32(ctx, 31, 0x18F7ECu);
    ctx->pc = 0x18F7E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F7E4u;
    // 0x18f7e8: 0xe7a001f8  swc1        $f0, 0x1F8($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 504), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B808u;
    { ctx->pc = 0x19b808; return; }
    ctx->pc = 0x18F7ECu;
label_18f7ec:
    // 0x18f7ec: 0x27a40280  addiu       $a0, $sp, 0x280
    ctx->pc = 0x18f7ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
label_18f7f0:
    // 0x18f7f0: 0x26650040  addiu       $a1, $s3, 0x40
    ctx->pc = 0x18f7f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
label_18f7f4:
    // 0x18f7f4: 0xc066e08  jal         func_19B820
label_18f7f8:
    if (ctx->pc == 0x18F7F8u) {
        ctx->pc = 0x18F7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F7F4u;
        // 0x18f7f8: 0x26660030  addiu       $a2, $s3, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F7FCu;
        goto label_18f7fc;
    }
    ctx->pc = 0x18F7F4u;
    SET_GPR_U32(ctx, 31, 0x18F7FCu);
    ctx->pc = 0x18F7F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F7F4u;
    // 0x18f7f8: 0x26660030  addiu       $a2, $s3, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B820u;
    { ctx->pc = 0x19b820; return; }
    ctx->pc = 0x18F7FCu;
label_18f7fc:
    // 0x18f7fc: 0xc7a10280  lwc1        $f1, 0x280($sp)
    ctx->pc = 0x18f7fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_18f800:
    // 0x18f800: 0xc7a00288  lwc1        $f0, 0x288($sp)
    ctx->pc = 0x18f800u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18f804:
    // 0x18f804: 0xc7ac0284  lwc1        $f12, 0x284($sp)
    ctx->pc = 0x18f804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 644)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_18f808:
    // 0x18f808: 0x4601081a  mula.s      $f1, $f1
    ctx->pc = 0x18f808u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[1], ctx->f[1]));
label_18f80c:
    // 0x18f80c: 0x4600001c  madd.s      $f0, $f0, $f0
    ctx->pc = 0x18f80cu;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[0]));
label_18f810:
    // 0x18f810: 0x46000344  c1          0x344
    ctx->pc = 0x18f810u;
    ctx->f[13] = FPU_SQRT_S(ctx->f[0]);
label_18f814:
    // 0x18f814: 0x0  nop
    ctx->pc = 0x18f814u;
    // NOP
label_18f818:
    // 0x18f818: 0x0  nop
    ctx->pc = 0x18f818u;
    // NOP
label_18f81c:
    // 0x18f81c: 0xc06d51e  jal         func_1B5478
label_18f820:
    if (ctx->pc == 0x18F820u) {
        ctx->pc = 0x18F824u;
        goto label_18f824;
    }
    ctx->pc = 0x18F81Cu;
    SET_GPR_U32(ctx, 31, 0x18F824u);
    ctx->pc = 0x1B5478u;
    { ctx->pc = 0x1b5478; return; }
    ctx->pc = 0x18F824u;
label_18f824:
    // 0x18f824: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x18f824u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_18f828:
    // 0x18f828: 0xe6600020  swc1        $f0, 0x20($s3)
    ctx->pc = 0x18f828u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 32), bits); }
label_18f82c:
    // 0x18f82c: 0xc7ad0288  lwc1        $f13, 0x288($sp)
    ctx->pc = 0x18f82cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_18f830:
    // 0x18f830: 0xc06d51e  jal         func_1B5478
label_18f834:
    if (ctx->pc == 0x18F834u) {
        ctx->pc = 0x18F834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F830u;
        // 0x18f834: 0xc7ac0280  lwc1        $f12, 0x280($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F838u;
        goto label_18f838;
    }
    ctx->pc = 0x18F830u;
    SET_GPR_U32(ctx, 31, 0x18F838u);
    ctx->pc = 0x18F834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F830u;
    // 0x18f834: 0xc7ac0280  lwc1        $f12, 0x280($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5478u;
    { ctx->pc = 0x1b5478; return; }
    ctx->pc = 0x18F838u;
label_18f838:
    // 0x18f838: 0xe6600024  swc1        $f0, 0x24($s3)
    ctx->pc = 0x18f838u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 36), bits); }
label_18f83c:
    // 0x18f83c: 0x8e6400e8  lw          $a0, 0xE8($s3)
    ctx->pc = 0x18f83cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 232)));
label_18f840:
    // 0x18f840: 0x26650040  addiu       $a1, $s3, 0x40
    ctx->pc = 0x18f840u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
label_18f844:
    // 0x18f844: 0x26660030  addiu       $a2, $s3, 0x30
    ctx->pc = 0x18f844u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
label_18f848:
    // 0x18f848: 0x27a700c0  addiu       $a3, $sp, 0xC0
    ctx->pc = 0x18f848u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_18f84c:
    // 0x18f84c: 0x27a800b0  addiu       $t0, $sp, 0xB0
    ctx->pc = 0x18f84cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_18f850:
    // 0x18f850: 0xc064a04  jal         func_192810
label_18f854:
    if (ctx->pc == 0x18F854u) {
        ctx->pc = 0x18F854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F850u;
        // 0x18f854: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F858u;
        goto label_18f858;
    }
    ctx->pc = 0x18F850u;
    SET_GPR_U32(ctx, 31, 0x18F858u);
    ctx->pc = 0x18F854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F850u;
    // 0x18f854: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x192810u;
    { ctx->pc = 0x192810; return; }
    ctx->pc = 0x18F858u;
label_18f858:
    // 0x18f858: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_18f85c:
    if (ctx->pc == 0x18F85Cu) {
        ctx->pc = 0x18F85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F858u;
        // 0x18f85c: 0x26640040  addiu       $a0, $s3, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F860u;
        goto label_18f860;
    }
    ctx->pc = 0x18F858u;
    {
        const bool branch_taken_0x18f858 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F858u;
        // 0x18f85c: 0x26640040  addiu       $a0, $s3, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f858) {
            ctx->pc = 0x18F89Cu;
            goto label_18f89c;
        }
    }
    ctx->pc = 0x18F860u;
label_18f860:
    // 0x18f860: 0xc66000b8  lwc1        $f0, 0xB8($s3)
    ctx->pc = 0x18f860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18f864:
    // 0x18f864: 0x3c02bf00  lui         $v0, 0xBF00
    ctx->pc = 0x18f864u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48896 << 16));
label_18f868:
    // 0x18f868: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x18f868u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_18f86c:
    // 0x18f86c: 0x26640030  addiu       $a0, $s3, 0x30
    ctx->pc = 0x18f86cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
label_18f870:
    // 0x18f870: 0x26650050  addiu       $a1, $s3, 0x50
    ctx->pc = 0x18f870u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 80));
label_18f874:
    // 0x18f874: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x18f874u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_18f878:
    // 0x18f878: 0xc066e26  jal         func_19B898
label_18f87c:
    if (ctx->pc == 0x18F87Cu) {
        ctx->pc = 0x18F87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F878u;
        // 0x18f87c: 0xe66000b8  swc1        $f0, 0xB8($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 184), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F880u;
        goto label_18f880;
    }
    ctx->pc = 0x18F878u;
    SET_GPR_U32(ctx, 31, 0x18F880u);
    ctx->pc = 0x18F87Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F878u;
    // 0x18f87c: 0xe66000b8  swc1        $f0, 0xB8($s3) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 184), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x18F880u;
label_18f880:
    // 0x18f880: 0xc6610034  lwc1        $f1, 0x34($s3)
    ctx->pc = 0x18f880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_18f884:
    // 0x18f884: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x18f884u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_18f888:
    // 0x18f888: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18f888u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18f88c:
    // 0x18f88c: 0x0  nop
    ctx->pc = 0x18f88cu;
    // NOP
label_18f890:
    // 0x18f890: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x18f890u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_18f894:
    // 0x18f894: 0xe6600034  swc1        $f0, 0x34($s3)
    ctx->pc = 0x18f894u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 52), bits); }
label_18f898:
    // 0x18f898: 0x26640040  addiu       $a0, $s3, 0x40
    ctx->pc = 0x18f898u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
label_18f89c:
    // 0x18f89c: 0xc066e26  jal         func_19B898
label_18f8a0:
    if (ctx->pc == 0x18F8A0u) {
        ctx->pc = 0x18F8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F89Cu;
        // 0x18f8a0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F8A4u;
        goto label_18f8a4;
    }
    ctx->pc = 0x18F89Cu;
    SET_GPR_U32(ctx, 31, 0x18F8A4u);
    ctx->pc = 0x18F8A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F89Cu;
    // 0x18f8a0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x18F8A4u;
label_18f8a4:
    // 0x18f8a4: 0x27a40200  addiu       $a0, $sp, 0x200
    ctx->pc = 0x18f8a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
label_18f8a8:
    // 0x18f8a8: 0x26650040  addiu       $a1, $s3, 0x40
    ctx->pc = 0x18f8a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
label_18f8ac:
    // 0x18f8ac: 0xc066e08  jal         func_19B820
label_18f8b0:
    if (ctx->pc == 0x18F8B0u) {
        ctx->pc = 0x18F8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F8ACu;
        // 0x18f8b0: 0x26660030  addiu       $a2, $s3, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F8B4u;
        goto label_18f8b4;
    }
    ctx->pc = 0x18F8ACu;
    SET_GPR_U32(ctx, 31, 0x18F8B4u);
    ctx->pc = 0x18F8B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F8ACu;
    // 0x18f8b0: 0x26660030  addiu       $a2, $s3, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B820u;
    { ctx->pc = 0x19b820; return; }
    ctx->pc = 0x18F8B4u;
label_18f8b4:
    // 0x18f8b4: 0xc7a10200  lwc1        $f1, 0x200($sp)
    ctx->pc = 0x18f8b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_18f8b8:
    // 0x18f8b8: 0xc7a00208  lwc1        $f0, 0x208($sp)
    ctx->pc = 0x18f8b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18f8bc:
    // 0x18f8bc: 0xc7ac0204  lwc1        $f12, 0x204($sp)
    ctx->pc = 0x18f8bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 516)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_18f8c0:
    // 0x18f8c0: 0x4601081a  mula.s      $f1, $f1
    ctx->pc = 0x18f8c0u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[1], ctx->f[1]));
label_18f8c4:
    // 0x18f8c4: 0x4600001c  madd.s      $f0, $f0, $f0
    ctx->pc = 0x18f8c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[0]));
label_18f8c8:
    // 0x18f8c8: 0x46000344  c1          0x344
    ctx->pc = 0x18f8c8u;
    ctx->f[13] = FPU_SQRT_S(ctx->f[0]);
label_18f8cc:
    // 0x18f8cc: 0x0  nop
    ctx->pc = 0x18f8ccu;
    // NOP
label_18f8d0:
    // 0x18f8d0: 0x0  nop
    ctx->pc = 0x18f8d0u;
    // NOP
label_18f8d4:
    // 0x18f8d4: 0xc06d51e  jal         func_1B5478
label_18f8d8:
    if (ctx->pc == 0x18F8D8u) {
        ctx->pc = 0x18F8DCu;
        goto label_18f8dc;
    }
    ctx->pc = 0x18F8D4u;
    SET_GPR_U32(ctx, 31, 0x18F8DCu);
    ctx->pc = 0x1B5478u;
    { ctx->pc = 0x1b5478; return; }
    ctx->pc = 0x18F8DCu;
label_18f8dc:
    // 0x18f8dc: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x18f8dcu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_18f8e0:
    // 0x18f8e0: 0xe6600020  swc1        $f0, 0x20($s3)
    ctx->pc = 0x18f8e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 32), bits); }
label_18f8e4:
    // 0x18f8e4: 0xc7ad0208  lwc1        $f13, 0x208($sp)
    ctx->pc = 0x18f8e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_18f8e8:
    // 0x18f8e8: 0xc06d51e  jal         func_1B5478
label_18f8ec:
    if (ctx->pc == 0x18F8ECu) {
        ctx->pc = 0x18F8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F8E8u;
        // 0x18f8ec: 0xc7ac0200  lwc1        $f12, 0x200($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F8F0u;
        goto label_18f8f0;
    }
    ctx->pc = 0x18F8E8u;
    SET_GPR_U32(ctx, 31, 0x18F8F0u);
    ctx->pc = 0x18F8ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F8E8u;
    // 0x18f8ec: 0xc7ac0200  lwc1        $f12, 0x200($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5478u;
    { ctx->pc = 0x1b5478; return; }
    ctx->pc = 0x18F8F0u;
label_18f8f0:
    // 0x18f8f0: 0xe6600024  swc1        $f0, 0x24($s3)
    ctx->pc = 0x18f8f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 36), bits); }
label_18f8f4:
    // 0x18f8f4: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x18f8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
label_18f8f8:
    // 0x18f8f8: 0x8f838590  lw          $v1, -0x7A70($gp)
    ctx->pc = 0x18f8f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
label_18f8fc:
    // 0x18f8fc: 0x34421800  ori         $v0, $v0, 0x1800
    ctx->pc = 0x18f8fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6144);
label_18f900:
    // 0x18f900: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x18f900u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_18f904:
    // 0x18f904: 0x10400086  beqz        $v0, . + 4 + (0x86 << 2)
label_18f908:
    if (ctx->pc == 0x18F908u) {
        ctx->pc = 0x18F90Cu;
        goto label_18f90c;
    }
    ctx->pc = 0x18F904u;
    {
        const bool branch_taken_0x18f904 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18f904) {
            ctx->pc = 0x18FB20u;
            goto label_18fb20;
        }
    }
    ctx->pc = 0x18F90Cu;
label_18f90c:
    // 0x18f90c: 0x8e6200b0  lw          $v0, 0xB0($s3)
    ctx->pc = 0x18f90cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 176)));
label_18f910:
    // 0x18f910: 0x2c410028  sltiu       $at, $v0, 0x28
    ctx->pc = 0x18f910u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)40) ? 1 : 0);
label_18f914:
    // 0x18f914: 0x10200082  beqz        $at, . + 4 + (0x82 << 2)
label_18f918:
    if (ctx->pc == 0x18F918u) {
        ctx->pc = 0x18F91Cu;
        goto label_18f91c;
    }
    ctx->pc = 0x18F914u;
    {
        const bool branch_taken_0x18f914 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x18f914) {
            ctx->pc = 0x18FB20u;
            goto label_18fb20;
        }
    }
    ctx->pc = 0x18F91Cu;
label_18f91c:
    // 0x18f91c: 0xc66000b8  lwc1        $f0, 0xB8($s3)
    ctx->pc = 0x18f91cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18f920:
    // 0x18f920: 0x3c023f66  lui         $v0, 0x3F66
    ctx->pc = 0x18f920u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16230 << 16));
label_18f924:
    // 0x18f924: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x18f924u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
label_18f928:
    // 0x18f928: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x18f928u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_18f92c:
    // 0x18f92c: 0x0  nop
    ctx->pc = 0x18f92cu;
    // NOP
label_18f930:
    // 0x18f930: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x18f930u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_18f934:
    // 0x18f934: 0x1000007a  b           . + 4 + (0x7A << 2)
label_18f938:
    if (ctx->pc == 0x18F938u) {
        ctx->pc = 0x18F938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F934u;
        // 0x18f938: 0xe66000b8  swc1        $f0, 0xB8($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 184), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F93Cu;
        goto label_18f93c;
    }
    ctx->pc = 0x18F934u;
    {
        const bool branch_taken_0x18f934 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F934u;
        // 0x18f938: 0xe66000b8  swc1        $f0, 0xB8($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 184), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f934) {
            ctx->pc = 0x18FB20u;
            goto label_18fb20;
        }
    }
    ctx->pc = 0x18F93Cu;
label_18f93c:
    // 0x18f93c: 0x10800078  beqz        $a0, . + 4 + (0x78 << 2)
label_18f940:
    if (ctx->pc == 0x18F940u) {
        ctx->pc = 0x18F944u;
        goto label_18f944;
    }
    ctx->pc = 0x18F93Cu;
    {
        const bool branch_taken_0x18f93c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x18f93c) {
            ctx->pc = 0x18FB20u;
            goto label_18fb20;
        }
    }
    ctx->pc = 0x18F944u;
label_18f944:
    // 0x18f944: 0xc67400b4  lwc1        $f20, 0xB4($s3)
    ctx->pc = 0x18f944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_18f948:
    // 0x18f948: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x18f948u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18f94c:
    // 0x18f94c: 0x0  nop
    ctx->pc = 0x18f94cu;
    // NOP
label_18f950:
    // 0x18f950: 0x46140032  c.eq.s      $f0, $f20
    ctx->pc = 0x18f950u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18f954:
    // 0x18f954: 0x0  nop
    ctx->pc = 0x18f954u;
    // NOP
label_18f958:
    // 0x18f958: 0x45010032  bc1t        . + 4 + (0x32 << 2)
label_18f95c:
    if (ctx->pc == 0x18F95Cu) {
        ctx->pc = 0x18F960u;
        goto label_18f960;
    }
    ctx->pc = 0x18F958u;
    {
        const bool branch_taken_0x18f958 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x18f958) {
            ctx->pc = 0x18FA24u;
            goto label_18fa24;
        }
    }
    ctx->pc = 0x18F960u;
label_18f960:
    // 0x18f960: 0xc67600b8  lwc1        $f22, 0xB8($s3)
    ctx->pc = 0x18f960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_18f964:
    // 0x18f964: 0x27a40210  addiu       $a0, $sp, 0x210
    ctx->pc = 0x18f964u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
label_18f968:
    // 0x18f968: 0xc066e26  jal         func_19B898
label_18f96c:
    if (ctx->pc == 0x18F96Cu) {
        ctx->pc = 0x18F96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F968u;
        // 0x18f96c: 0x26650010  addiu       $a1, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F970u;
        goto label_18f970;
    }
    ctx->pc = 0x18F968u;
    SET_GPR_U32(ctx, 31, 0x18F970u);
    ctx->pc = 0x18F96Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F968u;
    // 0x18f96c: 0x26650010  addiu       $a1, $s3, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x18F970u;
label_18f970:
    // 0x18f970: 0x27a40210  addiu       $a0, $sp, 0x210
    ctx->pc = 0x18f970u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
label_18f974:
    // 0x18f974: 0xc066daa  jal         func_19B6A8
label_18f978:
    if (ctx->pc == 0x18F978u) {
        ctx->pc = 0x18F978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F974u;
        // 0x18f978: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F97Cu;
        goto label_18f97c;
    }
    ctx->pc = 0x18F974u;
    SET_GPR_U32(ctx, 31, 0x18F97Cu);
    ctx->pc = 0x18F978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F974u;
    // 0x18f978: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B6A8u;
    { ctx->pc = 0x19b6a8; return; }
    ctx->pc = 0x18F97Cu;
label_18f97c:
    // 0x18f97c: 0xc7ad0218  lwc1        $f13, 0x218($sp)
    ctx->pc = 0x18f97cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_18f980:
    // 0x18f980: 0xc06d51e  jal         func_1B5478
label_18f984:
    if (ctx->pc == 0x18F984u) {
        ctx->pc = 0x18F984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F980u;
        // 0x18f984: 0xc7ac0210  lwc1        $f12, 0x210($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F988u;
        goto label_18f988;
    }
    ctx->pc = 0x18F980u;
    SET_GPR_U32(ctx, 31, 0x18F988u);
    ctx->pc = 0x18F984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F980u;
    // 0x18f984: 0xc7ac0210  lwc1        $f12, 0x210($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5478u;
    { ctx->pc = 0x1b5478; return; }
    ctx->pc = 0x18F988u;
label_18f988:
    // 0x18f988: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x18f988u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_18f98c:
    // 0x18f98c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x18f98cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_18f990:
    // 0x18f990: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x18f990u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_18f994:
    // 0x18f994: 0x0  nop
    ctx->pc = 0x18f994u;
    // NOP
label_18f998:
    // 0x18f998: 0x46010541  sub.s       $f21, $f0, $f1
    ctx->pc = 0x18f998u;
    ctx->f[21] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_18f99c:
    // 0x18f99c: 0xc06d4c0  jal         func_1B5300
label_18f9a0:
    if (ctx->pc == 0x18F9A0u) {
        ctx->pc = 0x18F9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F99Cu;
        // 0x18f9a0: 0x4615b300  add.s       $f12, $f22, $f21 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[22], ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F9A4u;
        goto label_18f9a4;
    }
    ctx->pc = 0x18F99Cu;
    SET_GPR_U32(ctx, 31, 0x18F9A4u);
    ctx->pc = 0x18F9A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F99Cu;
    // 0x18f9a0: 0x4615b300  add.s       $f12, $f22, $f21 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[22], ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5300u;
    { ctx->pc = 0x1b5300; return; }
    ctx->pc = 0x18F9A4u;
label_18f9a4:
    // 0x18f9a4: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x18f9a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_18f9a8:
    // 0x18f9a8: 0xafa00214  sw          $zero, 0x214($sp)
    ctx->pc = 0x18f9a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 532), GPR_U32(ctx, 0));
label_18f9ac:
    // 0x18f9ac: 0x4615b300  add.s       $f12, $f22, $f21
    ctx->pc = 0x18f9acu;
    ctx->f[12] = FPU_ADD_S(ctx->f[22], ctx->f[21]);
label_18f9b0:
    // 0x18f9b0: 0xc06d412  jal         func_1B5048
label_18f9b4:
    if (ctx->pc == 0x18F9B4u) {
        ctx->pc = 0x18F9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F9B0u;
        // 0x18f9b4: 0xe7a00210  swc1        $f0, 0x210($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 528), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F9B8u;
        goto label_18f9b8;
    }
    ctx->pc = 0x18F9B0u;
    SET_GPR_U32(ctx, 31, 0x18F9B8u);
    ctx->pc = 0x18F9B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F9B0u;
    // 0x18f9b4: 0xe7a00210  swc1        $f0, 0x210($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 528), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5048u;
    { ctx->pc = 0x1b5048; return; }
    ctx->pc = 0x18F9B8u;
label_18f9b8:
    // 0x18f9b8: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x18f9b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_18f9bc:
    // 0x18f9bc: 0x26640030  addiu       $a0, $s3, 0x30
    ctx->pc = 0x18f9bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
label_18f9c0:
    // 0x18f9c0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x18f9c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_18f9c4:
    // 0x18f9c4: 0x27a60210  addiu       $a2, $sp, 0x210
    ctx->pc = 0x18f9c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
label_18f9c8:
    // 0x18f9c8: 0xafa0021c  sw          $zero, 0x21C($sp)
    ctx->pc = 0x18f9c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 540), GPR_U32(ctx, 0));
label_18f9cc:
    // 0x18f9cc: 0xc066e02  jal         func_19B808
label_18f9d0:
    if (ctx->pc == 0x18F9D0u) {
        ctx->pc = 0x18F9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F9CCu;
        // 0x18f9d0: 0xe7a00218  swc1        $f0, 0x218($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 536), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F9D4u;
        goto label_18f9d4;
    }
    ctx->pc = 0x18F9CCu;
    SET_GPR_U32(ctx, 31, 0x18F9D4u);
    ctx->pc = 0x18F9D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F9CCu;
    // 0x18f9d0: 0xe7a00218  swc1        $f0, 0x218($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 536), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B808u;
    { ctx->pc = 0x19b808; return; }
    ctx->pc = 0x18F9D4u;
label_18f9d4:
    // 0x18f9d4: 0x27a40290  addiu       $a0, $sp, 0x290
    ctx->pc = 0x18f9d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
label_18f9d8:
    // 0x18f9d8: 0x26650040  addiu       $a1, $s3, 0x40
    ctx->pc = 0x18f9d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
label_18f9dc:
    // 0x18f9dc: 0xc066e08  jal         func_19B820
label_18f9e0:
    if (ctx->pc == 0x18F9E0u) {
        ctx->pc = 0x18F9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F9DCu;
        // 0x18f9e0: 0x26660030  addiu       $a2, $s3, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F9E4u;
        goto label_18f9e4;
    }
    ctx->pc = 0x18F9DCu;
    SET_GPR_U32(ctx, 31, 0x18F9E4u);
    ctx->pc = 0x18F9E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F9DCu;
    // 0x18f9e0: 0x26660030  addiu       $a2, $s3, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B820u;
    { ctx->pc = 0x19b820; return; }
    ctx->pc = 0x18F9E4u;
label_18f9e4:
    // 0x18f9e4: 0xc7a10290  lwc1        $f1, 0x290($sp)
    ctx->pc = 0x18f9e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 656)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_18f9e8:
    // 0x18f9e8: 0xc7a00298  lwc1        $f0, 0x298($sp)
    ctx->pc = 0x18f9e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 664)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18f9ec:
    // 0x18f9ec: 0xc7ac0294  lwc1        $f12, 0x294($sp)
    ctx->pc = 0x18f9ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 660)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_18f9f0:
    // 0x18f9f0: 0x4601081a  mula.s      $f1, $f1
    ctx->pc = 0x18f9f0u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[1], ctx->f[1]));
label_18f9f4:
    // 0x18f9f4: 0x4600001c  madd.s      $f0, $f0, $f0
    ctx->pc = 0x18f9f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[0]));
label_18f9f8:
    // 0x18f9f8: 0x46000344  c1          0x344
    ctx->pc = 0x18f9f8u;
    ctx->f[13] = FPU_SQRT_S(ctx->f[0]);
label_18f9fc:
    // 0x18f9fc: 0x0  nop
    ctx->pc = 0x18f9fcu;
    // NOP
label_18fa00:
    // 0x18fa00: 0x0  nop
    ctx->pc = 0x18fa00u;
    // NOP
label_18fa04:
    // 0x18fa04: 0xc06d51e  jal         func_1B5478
label_18fa08:
    if (ctx->pc == 0x18FA08u) {
        ctx->pc = 0x18FA0Cu;
        goto label_18fa0c;
    }
    ctx->pc = 0x18FA04u;
    SET_GPR_U32(ctx, 31, 0x18FA0Cu);
    ctx->pc = 0x1B5478u;
    { ctx->pc = 0x1b5478; return; }
    ctx->pc = 0x18FA0Cu;
label_18fa0c:
    // 0x18fa0c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x18fa0cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_18fa10:
    // 0x18fa10: 0xe6600020  swc1        $f0, 0x20($s3)
    ctx->pc = 0x18fa10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 32), bits); }
label_18fa14:
    // 0x18fa14: 0xc7ad0298  lwc1        $f13, 0x298($sp)
    ctx->pc = 0x18fa14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 664)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_18fa18:
    // 0x18fa18: 0xc06d51e  jal         func_1B5478
label_18fa1c:
    if (ctx->pc == 0x18FA1Cu) {
        ctx->pc = 0x18FA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FA18u;
        // 0x18fa1c: 0xc7ac0290  lwc1        $f12, 0x290($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 656)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x18FA20u;
        goto label_18fa20;
    }
    ctx->pc = 0x18FA18u;
    SET_GPR_U32(ctx, 31, 0x18FA20u);
    ctx->pc = 0x18FA1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18FA18u;
    // 0x18fa1c: 0xc7ac0290  lwc1        $f12, 0x290($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 656)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5478u;
    { ctx->pc = 0x1b5478; return; }
    ctx->pc = 0x18FA20u;
label_18fa20:
    // 0x18fa20: 0xe6600024  swc1        $f0, 0x24($s3)
    ctx->pc = 0x18fa20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 36), bits); }
label_18fa24:
    // 0x18fa24: 0x8e6400e8  lw          $a0, 0xE8($s3)
    ctx->pc = 0x18fa24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 232)));
label_18fa28:
    // 0x18fa28: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x18fa28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_18fa2c:
    // 0x18fa2c: 0x26660030  addiu       $a2, $s3, 0x30
    ctx->pc = 0x18fa2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
label_18fa30:
    // 0x18fa30: 0x27a700e0  addiu       $a3, $sp, 0xE0
    ctx->pc = 0x18fa30u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_18fa34:
    // 0x18fa34: 0x27a800d0  addiu       $t0, $sp, 0xD0
    ctx->pc = 0x18fa34u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_18fa38:
    // 0x18fa38: 0xc064a04  jal         func_192810
label_18fa3c:
    if (ctx->pc == 0x18FA3Cu) {
        ctx->pc = 0x18FA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FA38u;
        // 0x18fa3c: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18FA40u;
        goto label_18fa40;
    }
    ctx->pc = 0x18FA38u;
    SET_GPR_U32(ctx, 31, 0x18FA40u);
    ctx->pc = 0x18FA3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18FA38u;
    // 0x18fa3c: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x192810u;
    { ctx->pc = 0x192810; return; }
    ctx->pc = 0x18FA40u;
label_18fa40:
    // 0x18fa40: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_18fa44:
    if (ctx->pc == 0x18FA44u) {
        ctx->pc = 0x18FA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FA40u;
        // 0x18fa44: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18FA48u;
        goto label_18fa48;
    }
    ctx->pc = 0x18FA40u;
    {
        const bool branch_taken_0x18fa40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18FA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FA40u;
        // 0x18fa44: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18fa40) {
            ctx->pc = 0x18FA84u;
            goto label_18fa84;
        }
    }
    ctx->pc = 0x18FA48u;
label_18fa48:
    // 0x18fa48: 0xc66000b8  lwc1        $f0, 0xB8($s3)
    ctx->pc = 0x18fa48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18fa4c:
    // 0x18fa4c: 0x3c02bf00  lui         $v0, 0xBF00
    ctx->pc = 0x18fa4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48896 << 16));
label_18fa50:
    // 0x18fa50: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x18fa50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_18fa54:
    // 0x18fa54: 0x26640030  addiu       $a0, $s3, 0x30
    ctx->pc = 0x18fa54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
label_18fa58:
    // 0x18fa58: 0x26650050  addiu       $a1, $s3, 0x50
    ctx->pc = 0x18fa58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 80));
label_18fa5c:
    // 0x18fa5c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x18fa5cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_18fa60:
    // 0x18fa60: 0xc066e26  jal         func_19B898
label_18fa64:
    if (ctx->pc == 0x18FA64u) {
        ctx->pc = 0x18FA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FA60u;
        // 0x18fa64: 0xe66000b8  swc1        $f0, 0xB8($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 184), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x18FA68u;
        goto label_18fa68;
    }
    ctx->pc = 0x18FA60u;
    SET_GPR_U32(ctx, 31, 0x18FA68u);
    ctx->pc = 0x18FA64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18FA60u;
    // 0x18fa64: 0xe66000b8  swc1        $f0, 0xB8($s3) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 184), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x18FA68u;
label_18fa68:
    // 0x18fa68: 0xc6610034  lwc1        $f1, 0x34($s3)
    ctx->pc = 0x18fa68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_18fa6c:
    // 0x18fa6c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x18fa6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_18fa70:
    // 0x18fa70: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18fa70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18fa74:
    // 0x18fa74: 0x0  nop
    ctx->pc = 0x18fa74u;
    // NOP
label_18fa78:
    // 0x18fa78: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x18fa78u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_18fa7c:
    // 0x18fa7c: 0xe6600034  swc1        $f0, 0x34($s3)
    ctx->pc = 0x18fa7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 52), bits); }
label_18fa80:
    // 0x18fa80: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x18fa80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_18fa84:
    // 0x18fa84: 0xc066e26  jal         func_19B898
label_18fa88:
    if (ctx->pc == 0x18FA88u) {
        ctx->pc = 0x18FA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FA84u;
        // 0x18fa88: 0x26640040  addiu       $a0, $s3, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18FA8Cu;
        goto label_18fa8c;
    }
    ctx->pc = 0x18FA84u;
    SET_GPR_U32(ctx, 31, 0x18FA8Cu);
    ctx->pc = 0x18FA88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18FA84u;
    // 0x18fa88: 0x26640040  addiu       $a0, $s3, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x18FA8Cu;
label_18fa8c:
    // 0x18fa8c: 0x27a40220  addiu       $a0, $sp, 0x220
    ctx->pc = 0x18fa8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
label_18fa90:
    // 0x18fa90: 0x26650040  addiu       $a1, $s3, 0x40
    ctx->pc = 0x18fa90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
label_18fa94:
    // 0x18fa94: 0xc066e08  jal         func_19B820
label_18fa98:
    if (ctx->pc == 0x18FA98u) {
        ctx->pc = 0x18FA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FA94u;
        // 0x18fa98: 0x26660030  addiu       $a2, $s3, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18FA9Cu;
        goto label_18fa9c;
    }
    ctx->pc = 0x18FA94u;
    SET_GPR_U32(ctx, 31, 0x18FA9Cu);
    ctx->pc = 0x18FA98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18FA94u;
    // 0x18fa98: 0x26660030  addiu       $a2, $s3, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B820u;
    { ctx->pc = 0x19b820; return; }
    ctx->pc = 0x18FA9Cu;
label_18fa9c:
    // 0x18fa9c: 0xc7a10220  lwc1        $f1, 0x220($sp)
    ctx->pc = 0x18fa9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_18faa0:
    // 0x18faa0: 0xc7a00228  lwc1        $f0, 0x228($sp)
    ctx->pc = 0x18faa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18faa4:
    // 0x18faa4: 0xc7ac0224  lwc1        $f12, 0x224($sp)
    ctx->pc = 0x18faa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 548)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_18faa8:
    // 0x18faa8: 0x4601081a  mula.s      $f1, $f1
    ctx->pc = 0x18faa8u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[1], ctx->f[1]));
label_18faac:
    // 0x18faac: 0x4600001c  madd.s      $f0, $f0, $f0
    ctx->pc = 0x18faacu;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[0]));
label_18fab0:
    // 0x18fab0: 0x46000344  c1          0x344
    ctx->pc = 0x18fab0u;
    ctx->f[13] = FPU_SQRT_S(ctx->f[0]);
label_18fab4:
    // 0x18fab4: 0x0  nop
    ctx->pc = 0x18fab4u;
    // NOP
label_18fab8:
    // 0x18fab8: 0x0  nop
    ctx->pc = 0x18fab8u;
    // NOP
label_18fabc:
    // 0x18fabc: 0xc06d51e  jal         func_1B5478
label_18fac0:
    if (ctx->pc == 0x18FAC0u) {
        ctx->pc = 0x18FAC4u;
        goto label_18fac4;
    }
    ctx->pc = 0x18FABCu;
    SET_GPR_U32(ctx, 31, 0x18FAC4u);
    ctx->pc = 0x1B5478u;
    { ctx->pc = 0x1b5478; return; }
    ctx->pc = 0x18FAC4u;
label_18fac4:
    // 0x18fac4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x18fac4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_18fac8:
    // 0x18fac8: 0xe6600020  swc1        $f0, 0x20($s3)
    ctx->pc = 0x18fac8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 32), bits); }
label_18facc:
    // 0x18facc: 0xc7ad0228  lwc1        $f13, 0x228($sp)
    ctx->pc = 0x18faccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_18fad0:
    // 0x18fad0: 0xc06d51e  jal         func_1B5478
label_18fad4:
    if (ctx->pc == 0x18FAD4u) {
        ctx->pc = 0x18FAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FAD0u;
        // 0x18fad4: 0xc7ac0220  lwc1        $f12, 0x220($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x18FAD8u;
        goto label_18fad8;
    }
    ctx->pc = 0x18FAD0u;
    SET_GPR_U32(ctx, 31, 0x18FAD8u);
    ctx->pc = 0x18FAD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18FAD0u;
    // 0x18fad4: 0xc7ac0220  lwc1        $f12, 0x220($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5478u;
    { ctx->pc = 0x1b5478; return; }
    ctx->pc = 0x18FAD8u;
label_18fad8:
    // 0x18fad8: 0xe6600024  swc1        $f0, 0x24($s3)
    ctx->pc = 0x18fad8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 36), bits); }
label_18fadc:
    // 0x18fadc: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x18fadcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
label_18fae0:
    // 0x18fae0: 0x8f838590  lw          $v1, -0x7A70($gp)
    ctx->pc = 0x18fae0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
label_18fae4:
    // 0x18fae4: 0x34421800  ori         $v0, $v0, 0x1800
    ctx->pc = 0x18fae4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6144);
label_18fae8:
    // 0x18fae8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x18fae8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_18faec:
    // 0x18faec: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_18faf0:
    if (ctx->pc == 0x18FAF0u) {
        ctx->pc = 0x18FAF4u;
        goto label_18faf4;
    }
    ctx->pc = 0x18FAECu;
    {
        const bool branch_taken_0x18faec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18faec) {
            ctx->pc = 0x18FB20u;
            goto label_18fb20;
        }
    }
    ctx->pc = 0x18FAF4u;
label_18faf4:
    // 0x18faf4: 0x8e6200b0  lw          $v0, 0xB0($s3)
    ctx->pc = 0x18faf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 176)));
label_18faf8:
    // 0x18faf8: 0x2c410028  sltiu       $at, $v0, 0x28
    ctx->pc = 0x18faf8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)40) ? 1 : 0);
label_18fafc:
    // 0x18fafc: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
label_18fb00:
    if (ctx->pc == 0x18FB00u) {
        ctx->pc = 0x18FB04u;
        goto label_18fb04;
    }
    ctx->pc = 0x18FAFCu;
    {
        const bool branch_taken_0x18fafc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x18fafc) {
            ctx->pc = 0x18FB20u;
            goto label_18fb20;
        }
    }
    ctx->pc = 0x18FB04u;
label_18fb04:
    // 0x18fb04: 0xc66000b8  lwc1        $f0, 0xB8($s3)
    ctx->pc = 0x18fb04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18fb08:
    // 0x18fb08: 0x3c023f66  lui         $v0, 0x3F66
    ctx->pc = 0x18fb08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16230 << 16));
label_18fb0c:
    // 0x18fb0c: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x18fb0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
label_18fb10:
    // 0x18fb10: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x18fb10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_18fb14:
    // 0x18fb14: 0x0  nop
    ctx->pc = 0x18fb14u;
    // NOP
label_18fb18:
    // 0x18fb18: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x18fb18u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_18fb1c:
    // 0x18fb1c: 0xe66000b8  swc1        $f0, 0xB8($s3)
    ctx->pc = 0x18fb1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 184), bits); }
label_18fb20:
    // 0x18fb20: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x18fb20u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18fb24:
    // 0x18fb24: 0x100002b8  b           . + 4 + (0x2B8 << 2)
label_18fb28:
    if (ctx->pc == 0x18FB28u) {
        ctx->pc = 0x18FB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FB24u;
        // 0x18fb28: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18FB2Cu;
        goto label_18fb2c;
    }
    ctx->pc = 0x18FB24u;
    {
        const bool branch_taken_0x18fb24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18FB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FB24u;
        // 0x18fb28: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18fb24) {
            ctx->pc = 0x190608u;
            { ctx->pc = 0x190608; return; }
        }
    }
    ctx->pc = 0x18FB2Cu;
label_18fb2c:
    // 0x18fb2c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x18fb2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18fb30:
    // 0x18fb30: 0xda410000  lqc2        $vf1, 0x0($s2)
    ctx->pc = 0x18fb30u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
label_18fb34:
    // 0x18fb34: 0xd8a20000  lqc2        $vf2, 0x0($a1)
    ctx->pc = 0x18fb34u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_18fb38:
    // 0x18fb38: 0x4be110ec  vsub.xyzw   $vf3, $vf2, $vf1
    ctx->pc = 0x18fb38u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_18fb3c:
    // 0x18fb3c: 0x4a0002ff  vnop
    ctx->pc = 0x18fb3cu;
    // NOP operation, no action needed for VU0
label_18fb40:
    // 0x18fb40: 0x4a0002ff  vnop
    ctx->pc = 0x18fb40u;
    // NOP operation, no action needed for VU0
label_18fb44:
    // 0x18fb44: 0x4a0002ff  vnop
    ctx->pc = 0x18fb44u;
    // NOP operation, no action needed for VU0
label_18fb48:
    // 0x18fb48: 0x4b03f99a  vmulz.x     $vf6, $vf31, $vf3z
    ctx->pc = 0x18fb48u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
label_18fb4c:
    // 0x18fb4c: 0x4a0002ff  vnop
    ctx->pc = 0x18fb4cu;
    // NOP operation, no action needed for VU0
label_18fb50:
    // 0x18fb50: 0x4a0002ff  vnop
    ctx->pc = 0x18fb50u;
    // NOP operation, no action needed for VU0
label_18fb54:
    // 0x18fb54: 0x4b0319bc  vmulax.x    $ACC, $vf3, $vf3x
    ctx->pc = 0x18fb54u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
label_18fb58:
    // 0x18fb58: 0x4b03310a  vmaddz.x    $vf4, $vf6, $vf3z
    ctx->pc = 0x18fb58u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_18fb5c:
    // 0x18fb5c: 0x4a0002ff  vnop
    ctx->pc = 0x18fb5cu;
    // NOP operation, no action needed for VU0
label_18fb60:
    // 0x18fb60: 0x4a0002ff  vnop
    ctx->pc = 0x18fb60u;
    // NOP operation, no action needed for VU0
label_18fb64:
    // 0x18fb64: 0x4a0002ff  vnop
    ctx->pc = 0x18fb64u;
    // NOP operation, no action needed for VU0
label_18fb68:
    // 0x18fb68: 0x4a0403bd  .word       0x4A0403BD                   # vsqrt       $Q, $vf4x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x18fb68u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
label_18fb6c:
    // 0x18fb6c: 0x4a0003bf  vwaitq
    ctx->pc = 0x18fb6cu;
    // VWAITQ (Q already resolved in this runtime)
label_18fb70:
    // 0x18fb70: 0x4849b000  cfc2.ni     $t1, $vi22
    ctx->pc = 0x18fb70u;
    { uint32_t bits; std::memcpy(&bits, &ctx->vu0_q, sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
label_18fb74:
    // 0x18fb74: 0x44891000  mtc1        $t1, $f2
    ctx->pc = 0x18fb74u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_18fb78:
    // 0x18fb78: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x18fb78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_18fb7c:
    // 0x18fb7c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x18fb7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_18fb80:
    // 0x18fb80: 0x4602d001  sub.s       $f0, $f26, $f2
    ctx->pc = 0x18fb80u;
    ctx->f[0] = FPU_SUB_S(ctx->f[26], ctx->f[2]);
label_18fb84:
    // 0x18fb84: 0x4600c802  mul.s       $f0, $f25, $f0
    ctx->pc = 0x18fb84u;
    ctx->f[0] = FPU_MUL_S(ctx->f[25], ctx->f[0]);
label_18fb88:
    // 0x18fb88: 0xc066e08  jal         func_19B820
label_18fb8c:
    if (ctx->pc == 0x18FB8Cu) {
        ctx->pc = 0x18FB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FB88u;
        // 0x18fb8c: 0x46001540  add.s       $f21, $f2, $f0 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x18FB90u;
        goto label_18fb90;
    }
    ctx->pc = 0x18FB88u;
    SET_GPR_U32(ctx, 31, 0x18FB90u);
    ctx->pc = 0x18FB8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18FB88u;
    // 0x18fb8c: 0x46001540  add.s       $f21, $f2, $f0 (Delay Slot)
    ctx->f[21] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B820u;
    { ctx->pc = 0x19b820; return; }
    ctx->pc = 0x18FB90u;
label_18fb90:
    // 0x18fb90: 0xc7ad0078  lwc1        $f13, 0x78($sp)
    ctx->pc = 0x18fb90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_18fb94:
    // 0x18fb94: 0xc06d51e  jal         func_1B5478
label_18fb98:
    if (ctx->pc == 0x18FB98u) {
        ctx->pc = 0x18FB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FB94u;
        // 0x18fb98: 0xc7ac0070  lwc1        $f12, 0x70($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x18FB9Cu;
        goto label_18fb9c;
    }
    ctx->pc = 0x18FB94u;
    SET_GPR_U32(ctx, 31, 0x18FB9Cu);
    ctx->pc = 0x18FB98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18FB94u;
    // 0x18fb98: 0xc7ac0070  lwc1        $f12, 0x70($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5478u;
    { ctx->pc = 0x1b5478; return; }
    ctx->pc = 0x18FB9Cu;
label_18fb9c:
    // 0x18fb9c: 0xc6220004  lwc1        $f2, 0x4($s1)
    ctx->pc = 0x18fb9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_18fba0:
    // 0x18fba0: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x18fba0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_18fba4:
    // 0x18fba4: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x18fba4u;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
label_18fba8:
    // 0x18fba8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x18fba8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_18fbac:
    // 0x18fbac: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x18fbacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_18fbb0:
    // 0x18fbb0: 0x0  nop
    ctx->pc = 0x18fbb0u;
    // NOP
label_18fbb4:
    // 0x18fbb4: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x18fbb4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_18fbb8:
    // 0x18fbb8: 0x46010601  sub.s       $f24, $f0, $f1
    ctx->pc = 0x18fbb8u;
    ctx->f[24] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_18fbbc:
    // 0x18fbbc: 0xc06d448  jal         func_1B5120
label_18fbc0:
    if (ctx->pc == 0x18FBC0u) {
        ctx->pc = 0x18FBC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FBBCu;
        // 0x18fbc0: 0x4600c306  mov.s       $f12, $f24 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[24]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x18FBC4u;
        goto label_18fbc4;
    }
    ctx->pc = 0x18FBBCu;
    SET_GPR_U32(ctx, 31, 0x18FBC4u);
    ctx->pc = 0x18FBC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18FBBCu;
    // 0x18fbc0: 0x4600c306  mov.s       $f12, $f24 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[24]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5120u;
    { ctx->pc = 0x1b5120; return; }
    ctx->pc = 0x18FBC4u;
label_18fbc4:
    // 0x18fbc4: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x18fbc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_18fbc8:
    // 0x18fbc8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x18fbc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_18fbcc:
    // 0x18fbcc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x18fbccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_18fbd0:
    // 0x18fbd0: 0x0  nop
    ctx->pc = 0x18fbd0u;
    // NOP
label_18fbd4:
    // 0x18fbd4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x18fbd4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18fbd8:
    // 0x18fbd8: 0x0  nop
    ctx->pc = 0x18fbd8u;
    // NOP
label_18fbdc:
    // 0x18fbdc: 0x45010008  bc1t        . + 4 + (0x8 << 2)
label_18fbe0:
    if (ctx->pc == 0x18FBE0u) {
        ctx->pc = 0x18FBE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FBDCu;
        // 0x18fbe0: 0x3c024049  lui         $v0, 0x4049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18FBE4u;
        goto label_18fbe4;
    }
    ctx->pc = 0x18FBDCu;
    {
        const bool branch_taken_0x18fbdc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x18FBE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FBDCu;
        // 0x18fbe0: 0x3c024049  lui         $v0, 0x4049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18fbdc) {
            ctx->pc = 0x18FC00u;
            goto label_18fc00;
        }
    }
    ctx->pc = 0x18FBE4u;
label_18fbe4:
    // 0x18fbe4: 0x0  nop
    ctx->pc = 0x18fbe4u;
    // NOP
label_18fbe8:
    // 0x18fbe8: 0x0  nop
    ctx->pc = 0x18fbe8u;
    // NOP
label_18fbec:
    // 0x18fbec: 0x4601c003  div.s       $f0, $f24, $f1
    ctx->pc = 0x18fbecu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[24] * 0.0f); } else ctx->f[0] = ctx->f[24] / ctx->f[1];
label_18fbf0:
    // 0x18fbf0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x18fbf0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_18fbf4:
    // 0x18fbf4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x18fbf4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_18fbf8:
    // 0x18fbf8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x18fbf8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_18fbfc:
    // 0x18fbfc: 0x4600c601  sub.s       $f24, $f24, $f0
    ctx->pc = 0x18fbfcu;
    ctx->f[24] = FPU_SUB_S(ctx->f[24], ctx->f[0]);
label_18fc00:
    // 0x18fc00: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x18fc00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_18fc04:
    // 0x18fc04: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18fc04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18fc08:
    // 0x18fc08: 0x0  nop
    ctx->pc = 0x18fc08u;
    // NOP
label_18fc0c:
    // 0x18fc0c: 0x4600c036  c.le.s      $f24, $f0
    ctx->pc = 0x18fc0cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[24], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18fc10:
    // 0x18fc10: 0x0  nop
    ctx->pc = 0x18fc10u;
    // NOP
label_18fc14:
    // 0x18fc14: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_18fc18:
    if (ctx->pc == 0x18FC18u) {
        ctx->pc = 0x18FC1Cu;
        goto label_18fc1c;
    }
    ctx->pc = 0x18FC14u;
    {
        const bool branch_taken_0x18fc14 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x18fc14) {
            ctx->pc = 0x18FC30u;
            goto label_18fc30;
        }
    }
    ctx->pc = 0x18FC1Cu;
label_18fc1c:
    // 0x18fc1c: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x18fc1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_18fc20:
    // 0x18fc20: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x18fc20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_18fc24:
    // 0x18fc24: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18fc24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18fc28:
    // 0x18fc28: 0x1000000e  b           . + 4 + (0xE << 2)
label_18fc2c:
    if (ctx->pc == 0x18FC2Cu) {
        ctx->pc = 0x18FC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FC28u;
        // 0x18fc2c: 0x4600c601  sub.s       $f24, $f24, $f0 (Delay Slot)
        ctx->f[24] = FPU_SUB_S(ctx->f[24], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x18FC30u;
        goto label_18fc30;
    }
    ctx->pc = 0x18FC28u;
    {
        const bool branch_taken_0x18fc28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18FC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FC28u;
        // 0x18fc2c: 0x4600c601  sub.s       $f24, $f24, $f0 (Delay Slot)
        ctx->f[24] = FPU_SUB_S(ctx->f[24], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18fc28) {
            ctx->pc = 0x18FC64u;
            goto label_18fc64;
        }
    }
    ctx->pc = 0x18FC30u;
label_18fc30:
    // 0x18fc30: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x18fc30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
label_18fc34:
    // 0x18fc34: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x18fc34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_18fc38:
    // 0x18fc38: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18fc38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18fc3c:
    // 0x18fc3c: 0x0  nop
    ctx->pc = 0x18fc3cu;
    // NOP
label_18fc40:
    // 0x18fc40: 0x4600c034  c.lt.s      $f24, $f0
    ctx->pc = 0x18fc40u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[24], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18fc44:
    // 0x18fc44: 0x0  nop
    ctx->pc = 0x18fc44u;
    // NOP
label_18fc48:
    // 0x18fc48: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_18fc4c:
    if (ctx->pc == 0x18FC4Cu) {
        ctx->pc = 0x18FC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FC48u;
        // 0x18fc4c: 0x4600c306  mov.s       $f12, $f24 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[24]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x18FC50u;
        goto label_18fc50;
    }
    ctx->pc = 0x18FC48u;
    {
        const bool branch_taken_0x18fc48 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x18FC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FC48u;
        // 0x18fc4c: 0x4600c306  mov.s       $f12, $f24 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[24]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18fc48) {
            ctx->pc = 0x18FC68u;
            goto label_18fc68;
        }
    }
    ctx->pc = 0x18FC50u;
label_18fc50:
    // 0x18fc50: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x18fc50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_18fc54:
    // 0x18fc54: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x18fc54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_18fc58:
    // 0x18fc58: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18fc58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18fc5c:
    // 0x18fc5c: 0x0  nop
    ctx->pc = 0x18fc5cu;
    // NOP
label_18fc60:
    // 0x18fc60: 0x4600c600  add.s       $f24, $f24, $f0
    ctx->pc = 0x18fc60u;
    ctx->f[24] = FPU_ADD_S(ctx->f[24], ctx->f[0]);
label_18fc64:
    // 0x18fc64: 0x4600c306  mov.s       $f12, $f24
    ctx->pc = 0x18fc64u;
    ctx->f[12] = FPU_MOV_S(ctx->f[24]);
label_18fc68:
    // 0x18fc68: 0xc06d448  jal         func_1B5120
label_18fc6c:
    if (ctx->pc == 0x18FC6Cu) {
        ctx->pc = 0x18FC70u;
        { ctx->pc = 0x18fc70; return; }
    }
    ctx->pc = 0x18FC68u;
    SET_GPR_U32(ctx, 31, 0x18FC70u);
    ctx->pc = 0x1B5120u;
    { ctx->pc = 0x1b5120; return; }
    ctx->pc = 0x18FC70u;
    ctx->pc = 0x18fc70u;
    return;
}
