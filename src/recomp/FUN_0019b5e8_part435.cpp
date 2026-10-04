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


void FUN_0019b5e8_part435(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x26f488u: goto label_26f488;
        case 0x26f48cu: goto label_26f48c;
        case 0x26f490u: goto label_26f490;
        case 0x26f494u: goto label_26f494;
        case 0x26f498u: goto label_26f498;
        case 0x26f49cu: goto label_26f49c;
        case 0x26f4a0u: goto label_26f4a0;
        case 0x26f4a4u: goto label_26f4a4;
        case 0x26f4a8u: goto label_26f4a8;
        case 0x26f4acu: goto label_26f4ac;
        case 0x26f4b0u: goto label_26f4b0;
        case 0x26f4b4u: goto label_26f4b4;
        case 0x26f4b8u: goto label_26f4b8;
        case 0x26f4bcu: goto label_26f4bc;
        case 0x26f4c0u: goto label_26f4c0;
        case 0x26f4c4u: goto label_26f4c4;
        case 0x26f4c8u: goto label_26f4c8;
        case 0x26f4ccu: goto label_26f4cc;
        case 0x26f4d0u: goto label_26f4d0;
        case 0x26f4d4u: goto label_26f4d4;
        case 0x26f4d8u: goto label_26f4d8;
        case 0x26f4dcu: goto label_26f4dc;
        case 0x26f4e0u: goto label_26f4e0;
        case 0x26f4e4u: goto label_26f4e4;
        case 0x26f4e8u: goto label_26f4e8;
        case 0x26f4ecu: goto label_26f4ec;
        case 0x26f4f0u: goto label_26f4f0;
        case 0x26f4f4u: goto label_26f4f4;
        case 0x26f4f8u: goto label_26f4f8;
        case 0x26f4fcu: goto label_26f4fc;
        case 0x26f500u: goto label_26f500;
        case 0x26f504u: goto label_26f504;
        case 0x26f508u: goto label_26f508;
        case 0x26f50cu: goto label_26f50c;
        case 0x26f510u: goto label_26f510;
        case 0x26f514u: goto label_26f514;
        case 0x26f518u: goto label_26f518;
        case 0x26f51cu: goto label_26f51c;
        case 0x26f520u: goto label_26f520;
        case 0x26f524u: goto label_26f524;
        case 0x26f528u: goto label_26f528;
        case 0x26f52cu: goto label_26f52c;
        case 0x26f530u: goto label_26f530;
        case 0x26f534u: goto label_26f534;
        case 0x26f538u: goto label_26f538;
        case 0x26f53cu: goto label_26f53c;
        case 0x26f540u: goto label_26f540;
        case 0x26f544u: goto label_26f544;
        case 0x26f548u: goto label_26f548;
        case 0x26f54cu: goto label_26f54c;
        case 0x26f550u: goto label_26f550;
        case 0x26f554u: goto label_26f554;
        case 0x26f558u: goto label_26f558;
        case 0x26f55cu: goto label_26f55c;
        case 0x26f560u: goto label_26f560;
        case 0x26f564u: goto label_26f564;
        case 0x26f568u: goto label_26f568;
        case 0x26f56cu: goto label_26f56c;
        case 0x26f570u: goto label_26f570;
        case 0x26f574u: goto label_26f574;
        case 0x26f578u: goto label_26f578;
        case 0x26f57cu: goto label_26f57c;
        case 0x26f580u: goto label_26f580;
        case 0x26f584u: goto label_26f584;
        case 0x26f588u: goto label_26f588;
        case 0x26f58cu: goto label_26f58c;
        case 0x26f590u: goto label_26f590;
        case 0x26f594u: goto label_26f594;
        case 0x26f598u: goto label_26f598;
        case 0x26f59cu: goto label_26f59c;
        case 0x26f5a0u: goto label_26f5a0;
        case 0x26f5a4u: goto label_26f5a4;
        case 0x26f5a8u: goto label_26f5a8;
        case 0x26f5acu: goto label_26f5ac;
        case 0x26f5b0u: goto label_26f5b0;
        case 0x26f5b4u: goto label_26f5b4;
        case 0x26f5b8u: goto label_26f5b8;
        case 0x26f5bcu: goto label_26f5bc;
        case 0x26f5c0u: goto label_26f5c0;
        case 0x26f5c4u: goto label_26f5c4;
        case 0x26f5c8u: goto label_26f5c8;
        case 0x26f5ccu: goto label_26f5cc;
        case 0x26f5d0u: goto label_26f5d0;
        case 0x26f5d4u: goto label_26f5d4;
        case 0x26f5d8u: goto label_26f5d8;
        case 0x26f5dcu: goto label_26f5dc;
        case 0x26f5e0u: goto label_26f5e0;
        case 0x26f5e4u: goto label_26f5e4;
        case 0x26f5e8u: goto label_26f5e8;
        case 0x26f5ecu: goto label_26f5ec;
        case 0x26f5f0u: goto label_26f5f0;
        case 0x26f5f4u: goto label_26f5f4;
        case 0x26f5f8u: goto label_26f5f8;
        case 0x26f5fcu: goto label_26f5fc;
        case 0x26f600u: goto label_26f600;
        case 0x26f604u: goto label_26f604;
        case 0x26f608u: goto label_26f608;
        case 0x26f60cu: goto label_26f60c;
        case 0x26f610u: goto label_26f610;
        case 0x26f614u: goto label_26f614;
        case 0x26f618u: goto label_26f618;
        case 0x26f61cu: goto label_26f61c;
        case 0x26f620u: goto label_26f620;
        case 0x26f624u: goto label_26f624;
        case 0x26f628u: goto label_26f628;
        case 0x26f62cu: goto label_26f62c;
        case 0x26f630u: goto label_26f630;
        case 0x26f634u: goto label_26f634;
        case 0x26f638u: goto label_26f638;
        case 0x26f63cu: goto label_26f63c;
        case 0x26f640u: goto label_26f640;
        case 0x26f644u: goto label_26f644;
        case 0x26f648u: goto label_26f648;
        case 0x26f64cu: goto label_26f64c;
        case 0x26f650u: goto label_26f650;
        case 0x26f654u: goto label_26f654;
        case 0x26f658u: goto label_26f658;
        case 0x26f65cu: goto label_26f65c;
        case 0x26f660u: goto label_26f660;
        case 0x26f664u: goto label_26f664;
        case 0x26f668u: goto label_26f668;
        case 0x26f66cu: goto label_26f66c;
        case 0x26f670u: goto label_26f670;
        case 0x26f674u: goto label_26f674;
        case 0x26f678u: goto label_26f678;
        case 0x26f67cu: goto label_26f67c;
        case 0x26f680u: goto label_26f680;
        case 0x26f684u: goto label_26f684;
        case 0x26f688u: goto label_26f688;
        case 0x26f68cu: goto label_26f68c;
        case 0x26f690u: goto label_26f690;
        case 0x26f694u: goto label_26f694;
        case 0x26f698u: goto label_26f698;
        case 0x26f69cu: goto label_26f69c;
        case 0x26f6a0u: goto label_26f6a0;
        case 0x26f6a4u: goto label_26f6a4;
        case 0x26f6a8u: goto label_26f6a8;
        case 0x26f6acu: goto label_26f6ac;
        case 0x26f6b0u: goto label_26f6b0;
        case 0x26f6b4u: goto label_26f6b4;
        case 0x26f6b8u: goto label_26f6b8;
        case 0x26f6bcu: goto label_26f6bc;
        case 0x26f6c0u: goto label_26f6c0;
        case 0x26f6c4u: goto label_26f6c4;
        case 0x26f6c8u: goto label_26f6c8;
        case 0x26f6ccu: goto label_26f6cc;
        case 0x26f6d0u: goto label_26f6d0;
        case 0x26f6d4u: goto label_26f6d4;
        case 0x26f6d8u: goto label_26f6d8;
        case 0x26f6dcu: goto label_26f6dc;
        case 0x26f6e0u: goto label_26f6e0;
        case 0x26f6e4u: goto label_26f6e4;
        case 0x26f6e8u: goto label_26f6e8;
        case 0x26f6ecu: goto label_26f6ec;
        case 0x26f6f0u: goto label_26f6f0;
        case 0x26f6f4u: goto label_26f6f4;
        case 0x26f6f8u: goto label_26f6f8;
        case 0x26f6fcu: goto label_26f6fc;
        case 0x26f700u: goto label_26f700;
        case 0x26f704u: goto label_26f704;
        case 0x26f708u: goto label_26f708;
        case 0x26f70cu: goto label_26f70c;
        case 0x26f710u: goto label_26f710;
        case 0x26f714u: goto label_26f714;
        case 0x26f718u: goto label_26f718;
        case 0x26f71cu: goto label_26f71c;
        case 0x26f720u: goto label_26f720;
        case 0x26f724u: goto label_26f724;
        case 0x26f728u: goto label_26f728;
        case 0x26f72cu: goto label_26f72c;
        case 0x26f730u: goto label_26f730;
        case 0x26f734u: goto label_26f734;
        case 0x26f738u: goto label_26f738;
        case 0x26f73cu: goto label_26f73c;
        case 0x26f740u: goto label_26f740;
        case 0x26f744u: goto label_26f744;
        case 0x26f748u: goto label_26f748;
        case 0x26f74cu: goto label_26f74c;
        case 0x26f750u: goto label_26f750;
        case 0x26f754u: goto label_26f754;
        case 0x26f758u: goto label_26f758;
        case 0x26f75cu: goto label_26f75c;
        case 0x26f760u: goto label_26f760;
        case 0x26f764u: goto label_26f764;
        case 0x26f768u: goto label_26f768;
        case 0x26f76cu: goto label_26f76c;
        case 0x26f770u: goto label_26f770;
        case 0x26f774u: goto label_26f774;
        case 0x26f778u: goto label_26f778;
        case 0x26f77cu: goto label_26f77c;
        case 0x26f780u: goto label_26f780;
        case 0x26f784u: goto label_26f784;
        case 0x26f788u: goto label_26f788;
        case 0x26f78cu: goto label_26f78c;
        case 0x26f790u: goto label_26f790;
        case 0x26f794u: goto label_26f794;
        case 0x26f798u: goto label_26f798;
        case 0x26f79cu: goto label_26f79c;
        case 0x26f7a0u: goto label_26f7a0;
        case 0x26f7a4u: goto label_26f7a4;
        case 0x26f7a8u: goto label_26f7a8;
        case 0x26f7acu: goto label_26f7ac;
        case 0x26f7b0u: goto label_26f7b0;
        case 0x26f7b4u: goto label_26f7b4;
        case 0x26f7b8u: goto label_26f7b8;
        case 0x26f7bcu: goto label_26f7bc;
        case 0x26f7c0u: goto label_26f7c0;
        case 0x26f7c4u: goto label_26f7c4;
        case 0x26f7c8u: goto label_26f7c8;
        case 0x26f7ccu: goto label_26f7cc;
        case 0x26f7d0u: goto label_26f7d0;
        case 0x26f7d4u: goto label_26f7d4;
        case 0x26f7d8u: goto label_26f7d8;
        case 0x26f7dcu: goto label_26f7dc;
        case 0x26f7e0u: goto label_26f7e0;
        case 0x26f7e4u: goto label_26f7e4;
        case 0x26f7e8u: goto label_26f7e8;
        case 0x26f7ecu: goto label_26f7ec;
        case 0x26f7f0u: goto label_26f7f0;
        case 0x26f7f4u: goto label_26f7f4;
        case 0x26f7f8u: goto label_26f7f8;
        case 0x26f7fcu: goto label_26f7fc;
        case 0x26f800u: goto label_26f800;
        case 0x26f804u: goto label_26f804;
        case 0x26f808u: goto label_26f808;
        case 0x26f80cu: goto label_26f80c;
        case 0x26f810u: goto label_26f810;
        case 0x26f814u: goto label_26f814;
        case 0x26f818u: goto label_26f818;
        case 0x26f81cu: goto label_26f81c;
        case 0x26f820u: goto label_26f820;
        case 0x26f824u: goto label_26f824;
        case 0x26f828u: goto label_26f828;
        case 0x26f82cu: goto label_26f82c;
        case 0x26f830u: goto label_26f830;
        case 0x26f834u: goto label_26f834;
        case 0x26f838u: goto label_26f838;
        case 0x26f83cu: goto label_26f83c;
        case 0x26f840u: goto label_26f840;
        case 0x26f844u: goto label_26f844;
        case 0x26f848u: goto label_26f848;
        case 0x26f84cu: goto label_26f84c;
        case 0x26f850u: goto label_26f850;
        case 0x26f854u: goto label_26f854;
        case 0x26f858u: goto label_26f858;
        case 0x26f85cu: goto label_26f85c;
        case 0x26f860u: goto label_26f860;
        case 0x26f864u: goto label_26f864;
        case 0x26f868u: goto label_26f868;
        case 0x26f86cu: goto label_26f86c;
        case 0x26f870u: goto label_26f870;
        case 0x26f874u: goto label_26f874;
        case 0x26f878u: goto label_26f878;
        case 0x26f87cu: goto label_26f87c;
        case 0x26f880u: goto label_26f880;
        case 0x26f884u: goto label_26f884;
        case 0x26f888u: goto label_26f888;
        case 0x26f88cu: goto label_26f88c;
        case 0x26f890u: goto label_26f890;
        case 0x26f894u: goto label_26f894;
        case 0x26f898u: goto label_26f898;
        case 0x26f89cu: goto label_26f89c;
        case 0x26f8a0u: goto label_26f8a0;
        case 0x26f8a4u: goto label_26f8a4;
        case 0x26f8a8u: goto label_26f8a8;
        case 0x26f8acu: goto label_26f8ac;
        case 0x26f8b0u: goto label_26f8b0;
        case 0x26f8b4u: goto label_26f8b4;
        case 0x26f8b8u: goto label_26f8b8;
        case 0x26f8bcu: goto label_26f8bc;
        case 0x26f8c0u: goto label_26f8c0;
        case 0x26f8c4u: goto label_26f8c4;
        case 0x26f8c8u: goto label_26f8c8;
        case 0x26f8ccu: goto label_26f8cc;
        case 0x26f8d0u: goto label_26f8d0;
        case 0x26f8d4u: goto label_26f8d4;
        case 0x26f8d8u: goto label_26f8d8;
        case 0x26f8dcu: goto label_26f8dc;
        case 0x26f8e0u: goto label_26f8e0;
        case 0x26f8e4u: goto label_26f8e4;
        case 0x26f8e8u: goto label_26f8e8;
        case 0x26f8ecu: goto label_26f8ec;
        case 0x26f8f0u: goto label_26f8f0;
        case 0x26f8f4u: goto label_26f8f4;
        case 0x26f8f8u: goto label_26f8f8;
        case 0x26f8fcu: goto label_26f8fc;
        case 0x26f900u: goto label_26f900;
        case 0x26f904u: goto label_26f904;
        case 0x26f908u: goto label_26f908;
        case 0x26f90cu: goto label_26f90c;
        case 0x26f910u: goto label_26f910;
        case 0x26f914u: goto label_26f914;
        case 0x26f918u: goto label_26f918;
        case 0x26f91cu: goto label_26f91c;
        case 0x26f920u: goto label_26f920;
        case 0x26f924u: goto label_26f924;
        case 0x26f928u: goto label_26f928;
        case 0x26f92cu: goto label_26f92c;
        case 0x26f930u: goto label_26f930;
        case 0x26f934u: goto label_26f934;
        case 0x26f938u: goto label_26f938;
        case 0x26f93cu: goto label_26f93c;
        case 0x26f940u: goto label_26f940;
        case 0x26f944u: goto label_26f944;
        case 0x26f948u: goto label_26f948;
        case 0x26f94cu: goto label_26f94c;
        case 0x26f950u: goto label_26f950;
        case 0x26f954u: goto label_26f954;
        case 0x26f958u: goto label_26f958;
        case 0x26f95cu: goto label_26f95c;
        case 0x26f960u: goto label_26f960;
        case 0x26f964u: goto label_26f964;
        case 0x26f968u: goto label_26f968;
        case 0x26f96cu: goto label_26f96c;
        case 0x26f970u: goto label_26f970;
        case 0x26f974u: goto label_26f974;
        case 0x26f978u: goto label_26f978;
        case 0x26f97cu: goto label_26f97c;
        case 0x26f980u: goto label_26f980;
        case 0x26f984u: goto label_26f984;
        case 0x26f988u: goto label_26f988;
        case 0x26f98cu: goto label_26f98c;
        case 0x26f990u: goto label_26f990;
        case 0x26f994u: goto label_26f994;
        case 0x26f998u: goto label_26f998;
        case 0x26f99cu: goto label_26f99c;
        case 0x26f9a0u: goto label_26f9a0;
        case 0x26f9a4u: goto label_26f9a4;
        case 0x26f9a8u: goto label_26f9a8;
        case 0x26f9acu: goto label_26f9ac;
        case 0x26f9b0u: goto label_26f9b0;
        case 0x26f9b4u: goto label_26f9b4;
        case 0x26f9b8u: goto label_26f9b8;
        case 0x26f9bcu: goto label_26f9bc;
        case 0x26f9c0u: goto label_26f9c0;
        case 0x26f9c4u: goto label_26f9c4;
        case 0x26f9c8u: goto label_26f9c8;
        case 0x26f9ccu: goto label_26f9cc;
        case 0x26f9d0u: goto label_26f9d0;
        case 0x26f9d4u: goto label_26f9d4;
        case 0x26f9d8u: goto label_26f9d8;
        case 0x26f9dcu: goto label_26f9dc;
        case 0x26f9e0u: goto label_26f9e0;
        case 0x26f9e4u: goto label_26f9e4;
        case 0x26f9e8u: goto label_26f9e8;
        case 0x26f9ecu: goto label_26f9ec;
        case 0x26f9f0u: goto label_26f9f0;
        case 0x26f9f4u: goto label_26f9f4;
        case 0x26f9f8u: goto label_26f9f8;
        case 0x26f9fcu: goto label_26f9fc;
        case 0x26fa00u: goto label_26fa00;
        case 0x26fa04u: goto label_26fa04;
        case 0x26fa08u: goto label_26fa08;
        case 0x26fa0cu: goto label_26fa0c;
        case 0x26fa10u: goto label_26fa10;
        case 0x26fa14u: goto label_26fa14;
        case 0x26fa18u: goto label_26fa18;
        case 0x26fa1cu: goto label_26fa1c;
        case 0x26fa20u: goto label_26fa20;
        case 0x26fa24u: goto label_26fa24;
        case 0x26fa28u: goto label_26fa28;
        case 0x26fa2cu: goto label_26fa2c;
        case 0x26fa30u: goto label_26fa30;
        case 0x26fa34u: goto label_26fa34;
        case 0x26fa38u: goto label_26fa38;
        case 0x26fa3cu: goto label_26fa3c;
        case 0x26fa40u: goto label_26fa40;
        case 0x26fa44u: goto label_26fa44;
        case 0x26fa48u: goto label_26fa48;
        case 0x26fa4cu: goto label_26fa4c;
        case 0x26fa50u: goto label_26fa50;
        case 0x26fa54u: goto label_26fa54;
        case 0x26fa58u: goto label_26fa58;
        case 0x26fa5cu: goto label_26fa5c;
        case 0x26fa60u: goto label_26fa60;
        case 0x26fa64u: goto label_26fa64;
        case 0x26fa68u: goto label_26fa68;
        case 0x26fa6cu: goto label_26fa6c;
        case 0x26fa70u: goto label_26fa70;
        case 0x26fa74u: goto label_26fa74;
        case 0x26fa78u: goto label_26fa78;
        case 0x26fa7cu: goto label_26fa7c;
        case 0x26fa80u: goto label_26fa80;
        case 0x26fa84u: goto label_26fa84;
        case 0x26fa88u: goto label_26fa88;
        case 0x26fa8cu: goto label_26fa8c;
        case 0x26fa90u: goto label_26fa90;
        case 0x26fa94u: goto label_26fa94;
        case 0x26fa98u: goto label_26fa98;
        case 0x26fa9cu: goto label_26fa9c;
        case 0x26faa0u: goto label_26faa0;
        case 0x26faa4u: goto label_26faa4;
        case 0x26faa8u: goto label_26faa8;
        case 0x26faacu: goto label_26faac;
        case 0x26fab0u: goto label_26fab0;
        case 0x26fab4u: goto label_26fab4;
        case 0x26fab8u: goto label_26fab8;
        case 0x26fabcu: goto label_26fabc;
        case 0x26fac0u: goto label_26fac0;
        case 0x26fac4u: goto label_26fac4;
        case 0x26fac8u: goto label_26fac8;
        case 0x26faccu: goto label_26facc;
        case 0x26fad0u: goto label_26fad0;
        case 0x26fad4u: goto label_26fad4;
        case 0x26fad8u: goto label_26fad8;
        case 0x26fadcu: goto label_26fadc;
        case 0x26fae0u: goto label_26fae0;
        case 0x26fae4u: goto label_26fae4;
        case 0x26fae8u: goto label_26fae8;
        case 0x26faecu: goto label_26faec;
        case 0x26faf0u: goto label_26faf0;
        case 0x26faf4u: goto label_26faf4;
        case 0x26faf8u: goto label_26faf8;
        case 0x26fafcu: goto label_26fafc;
        case 0x26fb00u: goto label_26fb00;
        case 0x26fb04u: goto label_26fb04;
        case 0x26fb08u: goto label_26fb08;
        case 0x26fb0cu: goto label_26fb0c;
        case 0x26fb10u: goto label_26fb10;
        case 0x26fb14u: goto label_26fb14;
        case 0x26fb18u: goto label_26fb18;
        case 0x26fb1cu: goto label_26fb1c;
        case 0x26fb20u: goto label_26fb20;
        case 0x26fb24u: goto label_26fb24;
        case 0x26fb28u: goto label_26fb28;
        case 0x26fb2cu: goto label_26fb2c;
        case 0x26fb30u: goto label_26fb30;
        case 0x26fb34u: goto label_26fb34;
        case 0x26fb38u: goto label_26fb38;
        case 0x26fb3cu: goto label_26fb3c;
        case 0x26fb40u: goto label_26fb40;
        case 0x26fb44u: goto label_26fb44;
        case 0x26fb48u: goto label_26fb48;
        case 0x26fb4cu: goto label_26fb4c;
        case 0x26fb50u: goto label_26fb50;
        case 0x26fb54u: goto label_26fb54;
        case 0x26fb58u: goto label_26fb58;
        case 0x26fb5cu: goto label_26fb5c;
        case 0x26fb60u: goto label_26fb60;
        case 0x26fb64u: goto label_26fb64;
        case 0x26fb68u: goto label_26fb68;
        case 0x26fb6cu: goto label_26fb6c;
        case 0x26fb70u: goto label_26fb70;
        case 0x26fb74u: goto label_26fb74;
        case 0x26fb78u: goto label_26fb78;
        case 0x26fb7cu: goto label_26fb7c;
        case 0x26fb80u: goto label_26fb80;
        case 0x26fb84u: goto label_26fb84;
        case 0x26fb88u: goto label_26fb88;
        case 0x26fb8cu: goto label_26fb8c;
        case 0x26fb90u: goto label_26fb90;
        case 0x26fb94u: goto label_26fb94;
        case 0x26fb98u: goto label_26fb98;
        case 0x26fb9cu: goto label_26fb9c;
        case 0x26fba0u: goto label_26fba0;
        case 0x26fba4u: goto label_26fba4;
        case 0x26fba8u: goto label_26fba8;
        case 0x26fbacu: goto label_26fbac;
        case 0x26fbb0u: goto label_26fbb0;
        case 0x26fbb4u: goto label_26fbb4;
        case 0x26fbb8u: goto label_26fbb8;
        case 0x26fbbcu: goto label_26fbbc;
        case 0x26fbc0u: goto label_26fbc0;
        case 0x26fbc4u: goto label_26fbc4;
        case 0x26fbc8u: goto label_26fbc8;
        case 0x26fbccu: goto label_26fbcc;
        case 0x26fbd0u: goto label_26fbd0;
        case 0x26fbd4u: goto label_26fbd4;
        case 0x26fbd8u: goto label_26fbd8;
        case 0x26fbdcu: goto label_26fbdc;
        case 0x26fbe0u: goto label_26fbe0;
        case 0x26fbe4u: goto label_26fbe4;
        case 0x26fbe8u: goto label_26fbe8;
        case 0x26fbecu: goto label_26fbec;
        case 0x26fbf0u: goto label_26fbf0;
        case 0x26fbf4u: goto label_26fbf4;
        case 0x26fbf8u: goto label_26fbf8;
        case 0x26fbfcu: goto label_26fbfc;
        case 0x26fc00u: goto label_26fc00;
        case 0x26fc04u: goto label_26fc04;
        case 0x26fc08u: goto label_26fc08;
        case 0x26fc0cu: goto label_26fc0c;
        case 0x26fc10u: goto label_26fc10;
        case 0x26fc14u: goto label_26fc14;
        case 0x26fc18u: goto label_26fc18;
        case 0x26fc1cu: goto label_26fc1c;
        case 0x26fc20u: goto label_26fc20;
        case 0x26fc24u: goto label_26fc24;
        case 0x26fc28u: goto label_26fc28;
        case 0x26fc2cu: goto label_26fc2c;
        case 0x26fc30u: goto label_26fc30;
        case 0x26fc34u: goto label_26fc34;
        case 0x26fc38u: goto label_26fc38;
        case 0x26fc3cu: goto label_26fc3c;
        case 0x26fc40u: goto label_26fc40;
        case 0x26fc44u: goto label_26fc44;
        case 0x26fc48u: goto label_26fc48;
        case 0x26fc4cu: goto label_26fc4c;
        case 0x26fc50u: goto label_26fc50;
        case 0x26fc54u: goto label_26fc54;
        default: return;
    }

label_26f488:
    // 0x26f488: 0x0  nop
    ctx->pc = 0x26f488u;
    // NOP
label_26f48c:
    // 0x26f48c: 0x0  nop
    ctx->pc = 0x26f48cu;
    // NOP
label_26f490:
    // 0x26f490: 0x500e  .word       0x0000500E                   # INVALID     $zero, $zero, 0x500E # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f490u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x26F490 raw=0x0000500E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26f494:
    // 0x26f494: 0x39e0  .word       0x000039E0                   # add         $a3, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f494u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
label_26f498:
    // 0x26f498: 0x0  nop
    ctx->pc = 0x26f498u;
    // NOP
label_26f49c:
    // 0x26f49c: 0x0  nop
    ctx->pc = 0x26f49cu;
    // NOP
label_26f4a0:
    // 0x26f4a0: 0x5016  dsrlv       $t2, $zero, $zero
    ctx->pc = 0x26f4a0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_26f4a4:
    // 0x26f4a4: 0x4230  tge         $zero, $zero, 264
    ctx->pc = 0x26f4a4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26f4a8:
    // 0x26f4a8: 0x0  nop
    ctx->pc = 0x26f4a8u;
    // NOP
label_26f4ac:
    // 0x26f4ac: 0x0  nop
    ctx->pc = 0x26f4acu;
    // NOP
label_26f4b0:
    // 0x26f4b0: 0x501f  ddivu       $t2, $zero, $zero
    ctx->pc = 0x26f4b0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x26F4B0 raw=0x0000501F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26f4b4:
    // 0x26f4b4: 0x49c0  sll         $t1, $zero, 7
    ctx->pc = 0x26f4b4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), 7));
label_26f4b8:
    // 0x26f4b8: 0x0  nop
    ctx->pc = 0x26f4b8u;
    // NOP
label_26f4bc:
    // 0x26f4bc: 0x0  nop
    ctx->pc = 0x26f4bcu;
    // NOP
label_26f4c0:
    // 0x26f4c0: 0x5029  .word       0x00005029                   # mtsa        $zero # 00005000 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x26f4c0u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_26f4c4:
    // 0x26f4c4: 0x8020  add         $s0, $zero, $zero
    ctx->pc = 0x26f4c4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_26f4c8:
    // 0x26f4c8: 0x0  nop
    ctx->pc = 0x26f4c8u;
    // NOP
label_26f4cc:
    // 0x26f4cc: 0x0  nop
    ctx->pc = 0x26f4ccu;
    // NOP
label_26f4d0:
    // 0x26f4d0: 0x503a  dsrl        $t2, $zero, 0
    ctx->pc = 0x26f4d0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) >> 0);
label_26f4d4:
    // 0x26f4d4: 0x8020  add         $s0, $zero, $zero
    ctx->pc = 0x26f4d4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_26f4d8:
    // 0x26f4d8: 0x0  nop
    ctx->pc = 0x26f4d8u;
    // NOP
label_26f4dc:
    // 0x26f4dc: 0x0  nop
    ctx->pc = 0x26f4dcu;
    // NOP
label_26f4e0:
    // 0x26f4e0: 0x504b  .word       0x0000504B                   # movn        $t2, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f4e0u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 10, GPR_VEC(ctx, 0));
label_26f4e4:
    // 0x26f4e4: 0x5370  tge         $zero, $zero, 333
    ctx->pc = 0x26f4e4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26f4e8:
    // 0x26f4e8: 0x0  nop
    ctx->pc = 0x26f4e8u;
    // NOP
label_26f4ec:
    // 0x26f4ec: 0x0  nop
    ctx->pc = 0x26f4ecu;
    // NOP
label_26f4f0:
    // 0x26f4f0: 0x5056  .word       0x00005056                   # dsrlv       $t2, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f4f0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_26f4f4:
    // 0x26f4f4: 0x5150  .word       0x00005150                   # mfhi        $t2 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f4f4u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_26f4f8:
    // 0x26f4f8: 0x0  nop
    ctx->pc = 0x26f4f8u;
    // NOP
label_26f4fc:
    // 0x26f4fc: 0x0  nop
    ctx->pc = 0x26f4fcu;
    // NOP
label_26f500:
    // 0x26f500: 0x5061  .word       0x00005061                   # addu        $t2, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f500u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_26f504:
    // 0x26f504: 0x3ac0  sll         $a3, $zero, 11
    ctx->pc = 0x26f504u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 0), 11));
label_26f508:
    // 0x26f508: 0x0  nop
    ctx->pc = 0x26f508u;
    // NOP
label_26f50c:
    // 0x26f50c: 0x0  nop
    ctx->pc = 0x26f50cu;
    // NOP
label_26f510:
    // 0x26f510: 0x5069  .word       0x00005069                   # mtsa        $zero # 00005040 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x26f510u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_26f514:
    // 0x26f514: 0x6150  .word       0x00006150                   # mfhi        $t4 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f514u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_26f518:
    // 0x26f518: 0x0  nop
    ctx->pc = 0x26f518u;
    // NOP
label_26f51c:
    // 0x26f51c: 0x0  nop
    ctx->pc = 0x26f51cu;
    // NOP
label_26f520:
    // 0x26f520: 0x5076  tne         $zero, $zero, 321
    ctx->pc = 0x26f520u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26f524:
    // 0x26f524: 0x4ed0  .word       0x00004ED0                   # mfhi        $t1 # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f524u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_26f528:
    // 0x26f528: 0x0  nop
    ctx->pc = 0x26f528u;
    // NOP
label_26f52c:
    // 0x26f52c: 0x0  nop
    ctx->pc = 0x26f52cu;
    // NOP
label_26f530:
    // 0x26f530: 0x5080  sll         $t2, $zero, 2
    ctx->pc = 0x26f530u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 0), 2));
label_26f534:
    // 0x26f534: 0x3490  .word       0x00003490                   # mfhi        $a2 # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f534u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_26f538:
    // 0x26f538: 0x0  nop
    ctx->pc = 0x26f538u;
    // NOP
label_26f53c:
    // 0x26f53c: 0x0  nop
    ctx->pc = 0x26f53cu;
    // NOP
label_26f540:
    // 0x26f540: 0x5087  .word       0x00005087                   # srav        $t2, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f540u;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_26f544:
    // 0x26f544: 0x37e0  .word       0x000037E0                   # add         $a2, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f544u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 6, (int32_t)result);     } }
label_26f548:
    // 0x26f548: 0x0  nop
    ctx->pc = 0x26f548u;
    // NOP
label_26f54c:
    // 0x26f54c: 0x0  nop
    ctx->pc = 0x26f54cu;
    // NOP
label_26f550:
    // 0x26f550: 0x508e  .word       0x0000508E                   # INVALID     $zero, $zero, 0x508E # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f550u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x26F550 raw=0x0000508E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26f554:
    // 0x26f554: 0x4100  sll         $t0, $zero, 4
    ctx->pc = 0x26f554u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 4));
label_26f558:
    // 0x26f558: 0x0  nop
    ctx->pc = 0x26f558u;
    // NOP
label_26f55c:
    // 0x26f55c: 0x0  nop
    ctx->pc = 0x26f55cu;
    // NOP
label_26f560:
    // 0x26f560: 0x5097  .word       0x00005097                   # dsrav       $t2, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f560u;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_26f564:
    // 0x26f564: 0x6e30  tge         $zero, $zero, 440
    ctx->pc = 0x26f564u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26f568:
    // 0x26f568: 0x0  nop
    ctx->pc = 0x26f568u;
    // NOP
label_26f56c:
    // 0x26f56c: 0x0  nop
    ctx->pc = 0x26f56cu;
    // NOP
label_26f570:
    // 0x26f570: 0x50a5  .word       0x000050A5                   # move        $t2, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f570u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_26f574:
    // 0x26f574: 0x4840  sll         $t1, $zero, 1
    ctx->pc = 0x26f574u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), 1));
label_26f578:
    // 0x26f578: 0x0  nop
    ctx->pc = 0x26f578u;
    // NOP
label_26f57c:
    // 0x26f57c: 0x0  nop
    ctx->pc = 0x26f57cu;
    // NOP
label_26f580:
    // 0x26f580: 0x50af  .word       0x000050AF                   # dsubu       $t2, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f580u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_26f584:
    // 0x26f584: 0x72c0  sll         $t6, $zero, 11
    ctx->pc = 0x26f584u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 0), 11));
label_26f588:
    // 0x26f588: 0x0  nop
    ctx->pc = 0x26f588u;
    // NOP
label_26f58c:
    // 0x26f58c: 0x0  nop
    ctx->pc = 0x26f58cu;
    // NOP
label_26f590:
    // 0x26f590: 0x50be  dsrl32      $t2, $zero, 2
    ctx->pc = 0x26f590u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) >> (32 + 2));
label_26f594:
    // 0x26f594: 0x3a30  tge         $zero, $zero, 232
    ctx->pc = 0x26f594u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26f598:
    // 0x26f598: 0x0  nop
    ctx->pc = 0x26f598u;
    // NOP
label_26f59c:
    // 0x26f59c: 0x0  nop
    ctx->pc = 0x26f59cu;
    // NOP
label_26f5a0:
    // 0x26f5a0: 0x50c6  .word       0x000050C6                   # srlv        $t2, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f5a0u;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_26f5a4:
    // 0x26f5a4: 0x49e0  .word       0x000049E0                   # add         $t1, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f5a4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_26f5a8:
    // 0x26f5a8: 0x0  nop
    ctx->pc = 0x26f5a8u;
    // NOP
label_26f5ac:
    // 0x26f5ac: 0x0  nop
    ctx->pc = 0x26f5acu;
    // NOP
label_26f5b0:
    // 0x26f5b0: 0x50d0  .word       0x000050D0                   # mfhi        $t2 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f5b0u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_26f5b4:
    // 0x26f5b4: 0x3db0  tge         $zero, $zero, 246
    ctx->pc = 0x26f5b4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26f5b8:
    // 0x26f5b8: 0x0  nop
    ctx->pc = 0x26f5b8u;
    // NOP
label_26f5bc:
    // 0x26f5bc: 0x0  nop
    ctx->pc = 0x26f5bcu;
    // NOP
label_26f5c0:
    // 0x26f5c0: 0x50d8  .word       0x000050D8                   # mult        $t2, $zero, $zero # 000000C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x26f5c0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
label_26f5c4:
    // 0x26f5c4: 0x3ff0  tge         $zero, $zero, 255
    ctx->pc = 0x26f5c4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26f5c8:
    // 0x26f5c8: 0x0  nop
    ctx->pc = 0x26f5c8u;
    // NOP
label_26f5cc:
    // 0x26f5cc: 0x0  nop
    ctx->pc = 0x26f5ccu;
    // NOP
label_26f5d0:
    // 0x26f5d0: 0x50e0  .word       0x000050E0                   # add         $t2, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f5d0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
label_26f5d4:
    // 0x26f5d4: 0x8020  add         $s0, $zero, $zero
    ctx->pc = 0x26f5d4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_26f5d8:
    // 0x26f5d8: 0x0  nop
    ctx->pc = 0x26f5d8u;
    // NOP
label_26f5dc:
    // 0x26f5dc: 0x0  nop
    ctx->pc = 0x26f5dcu;
    // NOP
label_26f5e0:
    // 0x26f5e0: 0x50f1  tgeu        $zero, $zero, 323
    ctx->pc = 0x26f5e0u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26f5e4:
    // 0x26f5e4: 0x4190  .word       0x00004190                   # mfhi        $t0 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f5e4u;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_26f5e8:
    // 0x26f5e8: 0x0  nop
    ctx->pc = 0x26f5e8u;
    // NOP
label_26f5ec:
    // 0x26f5ec: 0x0  nop
    ctx->pc = 0x26f5ecu;
    // NOP
label_26f5f0:
    // 0x26f5f0: 0x50fa  dsrl        $t2, $zero, 3
    ctx->pc = 0x26f5f0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) >> 3);
label_26f5f4:
    // 0x26f5f4: 0x8460  .word       0x00008460                   # add         $s0, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f5f4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_26f5f8:
    // 0x26f5f8: 0x0  nop
    ctx->pc = 0x26f5f8u;
    // NOP
label_26f5fc:
    // 0x26f5fc: 0x0  nop
    ctx->pc = 0x26f5fcu;
    // NOP
label_26f600:
    // 0x26f600: 0x510b  .word       0x0000510B                   # movn        $t2, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f600u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 10, GPR_VEC(ctx, 0));
label_26f604:
    // 0x26f604: 0x48c0  sll         $t1, $zero, 3
    ctx->pc = 0x26f604u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), 3));
label_26f608:
    // 0x26f608: 0x0  nop
    ctx->pc = 0x26f608u;
    // NOP
label_26f60c:
    // 0x26f60c: 0x0  nop
    ctx->pc = 0x26f60cu;
    // NOP
label_26f610:
    // 0x26f610: 0x5115  .word       0x00005115                   # INVALID     $zero, $zero, 0x5115 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f610u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x26F610 raw=0x00005115"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26f614:
    // 0x26f614: 0x4120  .word       0x00004120                   # add         $t0, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f614u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
label_26f618:
    // 0x26f618: 0x0  nop
    ctx->pc = 0x26f618u;
    // NOP
label_26f61c:
    // 0x26f61c: 0x0  nop
    ctx->pc = 0x26f61cu;
    // NOP
label_26f620:
    // 0x26f620: 0x511e  .word       0x0000511E                   # ddiv        $t2, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f620u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x26F620 raw=0x0000511E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26f624:
    // 0x26f624: 0x2f60  .word       0x00002F60                   # add         $a1, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f624u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 5, (int32_t)result);     } }
label_26f628:
    // 0x26f628: 0x0  nop
    ctx->pc = 0x26f628u;
    // NOP
label_26f62c:
    // 0x26f62c: 0x0  nop
    ctx->pc = 0x26f62cu;
    // NOP
label_26f630:
    // 0x26f630: 0x5124  .word       0x00005124                   # and         $t2, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f630u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_26f634:
    // 0x26f634: 0x35b0  tge         $zero, $zero, 214
    ctx->pc = 0x26f634u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26f638:
    // 0x26f638: 0x0  nop
    ctx->pc = 0x26f638u;
    // NOP
label_26f63c:
    // 0x26f63c: 0x0  nop
    ctx->pc = 0x26f63cu;
    // NOP
label_26f640:
    // 0x26f640: 0x512b  .word       0x0000512B                   # sltu        $t2, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f640u;
    SET_GPR_U64(ctx, 10, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_26f644:
    // 0x26f644: 0x3840  sll         $a3, $zero, 1
    ctx->pc = 0x26f644u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 0), 1));
label_26f648:
    // 0x26f648: 0x0  nop
    ctx->pc = 0x26f648u;
    // NOP
label_26f64c:
    // 0x26f64c: 0x0  nop
    ctx->pc = 0x26f64cu;
    // NOP
label_26f650:
    // 0x26f650: 0x5133  tltu        $zero, $zero, 324
    ctx->pc = 0x26f650u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26f654:
    // 0x26f654: 0x41a0  .word       0x000041A0                   # add         $t0, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f654u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
label_26f658:
    // 0x26f658: 0x0  nop
    ctx->pc = 0x26f658u;
    // NOP
label_26f65c:
    // 0x26f65c: 0x0  nop
    ctx->pc = 0x26f65cu;
    // NOP
label_26f660:
    // 0x26f660: 0x513c  dsll32      $t2, $zero, 4
    ctx->pc = 0x26f660u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) << (32 + 4));
label_26f664:
    // 0x26f664: 0x1990  .word       0x00001990                   # mfhi        $v1 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f664u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_26f668:
    // 0x26f668: 0x0  nop
    ctx->pc = 0x26f668u;
    // NOP
label_26f66c:
    // 0x26f66c: 0x0  nop
    ctx->pc = 0x26f66cu;
    // NOP
label_26f670:
    // 0x26f670: 0x5140  sll         $t2, $zero, 5
    ctx->pc = 0x26f670u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 0), 5));
label_26f674:
    // 0x26f674: 0x1480  sll         $v0, $zero, 18
    ctx->pc = 0x26f674u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 0), 18));
label_26f678:
    // 0x26f678: 0x0  nop
    ctx->pc = 0x26f678u;
    // NOP
label_26f67c:
    // 0x26f67c: 0x0  nop
    ctx->pc = 0x26f67cu;
    // NOP
label_26f680:
    // 0x26f680: 0x5143  sra         $t2, $zero, 5
    ctx->pc = 0x26f680u;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 0), 5));
label_26f684:
    // 0x26f684: 0x22e0  .word       0x000022E0                   # add         $a0, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f684u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 4, (int32_t)result);     } }
label_26f688:
    // 0x26f688: 0x0  nop
    ctx->pc = 0x26f688u;
    // NOP
label_26f68c:
    // 0x26f68c: 0x0  nop
    ctx->pc = 0x26f68cu;
    // NOP
label_26f690:
    // 0x26f690: 0x5148  .word       0x00005148                   # jr          $zero # 00005140 <InstrIdType: CPU_SPECIAL>
label_26f694:
    if (ctx->pc == 0x26F694u) {
        ctx->pc = 0x26F694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F690u;
        // 0x26f694: 0xd80  sll         $at, $zero, 22 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26F698u;
        goto label_26f698;
    }
    ctx->pc = 0x26F690u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x26F694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F690u;
        // 0x26f694: 0xd80  sll         $at, $zero, 22 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26F690u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x26F698u;
label_26f698:
    // 0x26f698: 0x0  nop
    ctx->pc = 0x26f698u;
    // NOP
label_26f69c:
    // 0x26f69c: 0x0  nop
    ctx->pc = 0x26f69cu;
    // NOP
label_26f6a0:
    // 0x26f6a0: 0x514a  .word       0x0000514A                   # movz        $t2, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f6a0u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 10, GPR_VEC(ctx, 0));
label_26f6a4:
    // 0x26f6a4: 0x2b40  sll         $a1, $zero, 13
    ctx->pc = 0x26f6a4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 0), 13));
label_26f6a8:
    // 0x26f6a8: 0x0  nop
    ctx->pc = 0x26f6a8u;
    // NOP
label_26f6ac:
    // 0x26f6ac: 0x0  nop
    ctx->pc = 0x26f6acu;
    // NOP
label_26f6b0:
    // 0x26f6b0: 0x5150  .word       0x00005150                   # mfhi        $t2 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f6b0u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_26f6b4:
    // 0x26f6b4: 0x5410  .word       0x00005410                   # mfhi        $t2 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f6b4u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_26f6b8:
    // 0x26f6b8: 0x0  nop
    ctx->pc = 0x26f6b8u;
    // NOP
label_26f6bc:
    // 0x26f6bc: 0x0  nop
    ctx->pc = 0x26f6bcu;
    // NOP
label_26f6c0:
    // 0x26f6c0: 0x515b  .word       0x0000515B                   # divu        $t2, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f6c0u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_26f6c4:
    // 0x26f6c4: 0x1780  sll         $v0, $zero, 30
    ctx->pc = 0x26f6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 0), 30));
label_26f6c8:
    // 0x26f6c8: 0x0  nop
    ctx->pc = 0x26f6c8u;
    // NOP
label_26f6cc:
    // 0x26f6cc: 0x0  nop
    ctx->pc = 0x26f6ccu;
    // NOP
label_26f6d0:
    // 0x26f6d0: 0x515e  .word       0x0000515E                   # ddiv        $t2, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f6d0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x26F6D0 raw=0x0000515E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26f6d4:
    // 0x26f6d4: 0xe80  sll         $at, $zero, 26
    ctx->pc = 0x26f6d4u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 26));
label_26f6d8:
    // 0x26f6d8: 0x0  nop
    ctx->pc = 0x26f6d8u;
    // NOP
label_26f6dc:
    // 0x26f6dc: 0x0  nop
    ctx->pc = 0x26f6dcu;
    // NOP
label_26f6e0:
    // 0x26f6e0: 0x5160  .word       0x00005160                   # add         $t2, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f6e0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
label_26f6e4:
    // 0x26f6e4: 0x10f0  tge         $zero, $zero, 67
    ctx->pc = 0x26f6e4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26f6e8:
    // 0x26f6e8: 0x0  nop
    ctx->pc = 0x26f6e8u;
    // NOP
label_26f6ec:
    // 0x26f6ec: 0x0  nop
    ctx->pc = 0x26f6ecu;
    // NOP
label_26f6f0:
    // 0x26f6f0: 0x5163  .word       0x00005163                   # negu        $t2, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f6f0u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_26f6f4:
    // 0x26f6f4: 0x11f0  tge         $zero, $zero, 71
    ctx->pc = 0x26f6f4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26f6f8:
    // 0x26f6f8: 0x0  nop
    ctx->pc = 0x26f6f8u;
    // NOP
label_26f6fc:
    // 0x26f6fc: 0x0  nop
    ctx->pc = 0x26f6fcu;
    // NOP
label_26f700:
    // 0x26f700: 0x5166  .word       0x00005166                   # xor         $t2, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f700u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_26f704:
    // 0x26f704: 0x4070  tge         $zero, $zero, 257
    ctx->pc = 0x26f704u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26f708:
    // 0x26f708: 0x0  nop
    ctx->pc = 0x26f708u;
    // NOP
label_26f70c:
    // 0x26f70c: 0x0  nop
    ctx->pc = 0x26f70cu;
    // NOP
label_26f710:
    // 0x26f710: 0x516f  .word       0x0000516F                   # dsubu       $t2, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f710u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_26f714:
    // 0x26f714: 0x1e30  tge         $zero, $zero, 120
    ctx->pc = 0x26f714u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26f718:
    // 0x26f718: 0x0  nop
    ctx->pc = 0x26f718u;
    // NOP
label_26f71c:
    // 0x26f71c: 0x0  nop
    ctx->pc = 0x26f71cu;
    // NOP
label_26f720:
    // 0x26f720: 0x5173  tltu        $zero, $zero, 325
    ctx->pc = 0x26f720u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26f724:
    // 0x26f724: 0x1820  add         $v1, $zero, $zero
    ctx->pc = 0x26f724u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_26f728:
    // 0x26f728: 0x0  nop
    ctx->pc = 0x26f728u;
    // NOP
label_26f72c:
    // 0x26f72c: 0x0  nop
    ctx->pc = 0x26f72cu;
    // NOP
label_26f730:
    // 0x26f730: 0x5177  .word       0x00005177                   # INVALID     $zero, $zero, 0x5177 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f730u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x26F730 raw=0x00005177"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26f734:
    // 0x26f734: 0x1060  .word       0x00001060                   # add         $v0, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f734u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 2, (int32_t)result);     } }
label_26f738:
    // 0x26f738: 0x0  nop
    ctx->pc = 0x26f738u;
    // NOP
label_26f73c:
    // 0x26f73c: 0x0  nop
    ctx->pc = 0x26f73cu;
    // NOP
label_26f740:
    // 0x26f740: 0x517a  dsrl        $t2, $zero, 5
    ctx->pc = 0x26f740u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) >> 5);
label_26f744:
    // 0x26f744: 0x1430  tge         $zero, $zero, 80
    ctx->pc = 0x26f744u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26f748:
    // 0x26f748: 0x0  nop
    ctx->pc = 0x26f748u;
    // NOP
label_26f74c:
    // 0x26f74c: 0x0  nop
    ctx->pc = 0x26f74cu;
    // NOP
label_26f750:
    // 0x26f750: 0x517d  .word       0x0000517D                   # INVALID     $zero, $zero, 0x517D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f750u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x26F750 raw=0x0000517D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26f754:
    // 0x26f754: 0x8020  add         $s0, $zero, $zero
    ctx->pc = 0x26f754u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_26f758:
    // 0x26f758: 0x0  nop
    ctx->pc = 0x26f758u;
    // NOP
label_26f75c:
    // 0x26f75c: 0x0  nop
    ctx->pc = 0x26f75cu;
    // NOP
label_26f760:
    // 0x26f760: 0x518e  .word       0x0000518E                   # INVALID     $zero, $zero, 0x518E # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f760u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x26F760 raw=0x0000518E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26f764:
    // 0x26f764: 0x8020  add         $s0, $zero, $zero
    ctx->pc = 0x26f764u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_26f768:
    // 0x26f768: 0x0  nop
    ctx->pc = 0x26f768u;
    // NOP
label_26f76c:
    // 0x26f76c: 0x0  nop
    ctx->pc = 0x26f76cu;
    // NOP
label_26f770:
    // 0x26f770: 0x519f  .word       0x0000519F                   # ddivu       $t2, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f770u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x26F770 raw=0x0000519F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26f774:
    // 0x26f774: 0x1c50  .word       0x00001C50                   # mfhi        $v1 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f774u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_26f778:
    // 0x26f778: 0x0  nop
    ctx->pc = 0x26f778u;
    // NOP
label_26f77c:
    // 0x26f77c: 0x0  nop
    ctx->pc = 0x26f77cu;
    // NOP
label_26f780:
    // 0x26f780: 0x51a3  .word       0x000051A3                   # negu        $t2, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f780u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_26f784:
    // 0x26f784: 0x13f0  tge         $zero, $zero, 79
    ctx->pc = 0x26f784u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26f788:
    // 0x26f788: 0x0  nop
    ctx->pc = 0x26f788u;
    // NOP
label_26f78c:
    // 0x26f78c: 0x0  nop
    ctx->pc = 0x26f78cu;
    // NOP
label_26f790:
    // 0x26f790: 0x51a6  .word       0x000051A6                   # xor         $t2, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f790u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_26f794:
    // 0x26f794: 0xe70  tge         $zero, $zero, 57
    ctx->pc = 0x26f794u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26f798:
    // 0x26f798: 0x0  nop
    ctx->pc = 0x26f798u;
    // NOP
label_26f79c:
    // 0x26f79c: 0x0  nop
    ctx->pc = 0x26f79cu;
    // NOP
label_26f7a0:
    // 0x26f7a0: 0x51a8  .word       0x000051A8                   # mfsa        $t2 # 00000180 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x26f7a0u;
    SET_GPR_U32(ctx, 10, ctx->sa);
label_26f7a4:
    // 0x26f7a4: 0x19a0  .word       0x000019A0                   # add         $v1, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f7a4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_26f7a8:
    // 0x26f7a8: 0x0  nop
    ctx->pc = 0x26f7a8u;
    // NOP
label_26f7ac:
    // 0x26f7ac: 0x0  nop
    ctx->pc = 0x26f7acu;
    // NOP
label_26f7b0:
    // 0x26f7b0: 0x51ac  .word       0x000051AC                   # dadd        $t2, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f7b0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 10, r); }
label_26f7b4:
    // 0x26f7b4: 0x1bb0  tge         $zero, $zero, 110
    ctx->pc = 0x26f7b4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26f7b8:
    // 0x26f7b8: 0x0  nop
    ctx->pc = 0x26f7b8u;
    // NOP
label_26f7bc:
    // 0x26f7bc: 0x0  nop
    ctx->pc = 0x26f7bcu;
    // NOP
label_26f7c0:
    // 0x26f7c0: 0x51b0  tge         $zero, $zero, 326
    ctx->pc = 0x26f7c0u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26f7c4:
    // 0x26f7c4: 0xfa0  .word       0x00000FA0                   # add         $at, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f7c4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 1, (int32_t)result);     } }
label_26f7c8:
    // 0x26f7c8: 0x0  nop
    ctx->pc = 0x26f7c8u;
    // NOP
label_26f7cc:
    // 0x26f7cc: 0x0  nop
    ctx->pc = 0x26f7ccu;
    // NOP
label_26f7d0:
    // 0x26f7d0: 0x51b2  tlt         $zero, $zero, 326
    ctx->pc = 0x26f7d0u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26f7d4:
    // 0x26f7d4: 0x2a20  .word       0x00002A20                   # add         $a1, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f7d4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 5, (int32_t)result);     } }
label_26f7d8:
    // 0x26f7d8: 0x0  nop
    ctx->pc = 0x26f7d8u;
    // NOP
label_26f7dc:
    // 0x26f7dc: 0x0  nop
    ctx->pc = 0x26f7dcu;
    // NOP
label_26f7e0:
    // 0x26f7e0: 0x51b8  dsll        $t2, $zero, 6
    ctx->pc = 0x26f7e0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) << 6);
label_26f7e4:
    // 0x26f7e4: 0x1200  sll         $v0, $zero, 8
    ctx->pc = 0x26f7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 0), 8));
label_26f7e8:
    // 0x26f7e8: 0x0  nop
    ctx->pc = 0x26f7e8u;
    // NOP
label_26f7ec:
    // 0x26f7ec: 0x0  nop
    ctx->pc = 0x26f7ecu;
    // NOP
label_26f7f0:
    // 0x26f7f0: 0x51bb  dsra        $t2, $zero, 6
    ctx->pc = 0x26f7f0u;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 0) >> 6);
label_26f7f4:
    // 0x26f7f4: 0x1710  .word       0x00001710                   # mfhi        $v0 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f7f4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_26f7f8:
    // 0x26f7f8: 0x0  nop
    ctx->pc = 0x26f7f8u;
    // NOP
label_26f7fc:
    // 0x26f7fc: 0x0  nop
    ctx->pc = 0x26f7fcu;
    // NOP
label_26f800:
    // 0x26f800: 0x51be  dsrl32      $t2, $zero, 6
    ctx->pc = 0x26f800u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) >> (32 + 6));
label_26f804:
    // 0x26f804: 0x13b0  tge         $zero, $zero, 78
    ctx->pc = 0x26f804u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26f808:
    // 0x26f808: 0x0  nop
    ctx->pc = 0x26f808u;
    // NOP
label_26f80c:
    // 0x26f80c: 0x0  nop
    ctx->pc = 0x26f80cu;
    // NOP
label_26f810:
    // 0x26f810: 0x51c1  .word       0x000051C1                   # INVALID     $zero, $zero, 0x51C1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f810u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x26F810 raw=0x000051C1"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26f814:
    // 0x26f814: 0x1c30  tge         $zero, $zero, 112
    ctx->pc = 0x26f814u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26f818:
    // 0x26f818: 0x0  nop
    ctx->pc = 0x26f818u;
    // NOP
label_26f81c:
    // 0x26f81c: 0x0  nop
    ctx->pc = 0x26f81cu;
    // NOP
label_26f820:
    // 0x26f820: 0x51c5  .word       0x000051C5                   # INVALID     $zero, $zero, 0x51C5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f820u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x26F820 raw=0x000051C5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26f824:
    // 0x26f824: 0x1220  .word       0x00001220                   # add         $v0, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f824u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 2, (int32_t)result);     } }
label_26f828:
    // 0x26f828: 0x0  nop
    ctx->pc = 0x26f828u;
    // NOP
label_26f82c:
    // 0x26f82c: 0x0  nop
    ctx->pc = 0x26f82cu;
    // NOP
label_26f830:
    // 0x26f830: 0x51c8  .word       0x000051C8                   # jr          $zero # 000051C0 <InstrIdType: CPU_SPECIAL>
label_26f834:
    if (ctx->pc == 0x26F834u) {
        ctx->pc = 0x26F834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F830u;
        // 0x26f834: 0x3270  tge         $zero, $zero, 201 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x26F838u;
        goto label_26f838;
    }
    ctx->pc = 0x26F830u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x26F834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F830u;
        // 0x26f834: 0x3270  tge         $zero, $zero, 201 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26F830u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x26F838u;
label_26f838:
    // 0x26f838: 0x0  nop
    ctx->pc = 0x26f838u;
    // NOP
label_26f83c:
    // 0x26f83c: 0x0  nop
    ctx->pc = 0x26f83cu;
    // NOP
label_26f840:
    // 0x26f840: 0x51cf  .word       0x000051CF                   # sync # 00005000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f840u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_26f844:
    // 0x26f844: 0xd30  tge         $zero, $zero, 52
    ctx->pc = 0x26f844u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26f848:
    // 0x26f848: 0x0  nop
    ctx->pc = 0x26f848u;
    // NOP
label_26f84c:
    // 0x26f84c: 0x0  nop
    ctx->pc = 0x26f84cu;
    // NOP
label_26f850:
    // 0x26f850: 0x51d1  .word       0x000051D1                   # mthi        $zero # 000051C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f850u;
    ctx->hi = GPR_U64(ctx, 0);
label_26f854:
    // 0x26f854: 0x10c0  sll         $v0, $zero, 3
    ctx->pc = 0x26f854u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 0), 3));
label_26f858:
    // 0x26f858: 0x0  nop
    ctx->pc = 0x26f858u;
    // NOP
label_26f85c:
    // 0x26f85c: 0x0  nop
    ctx->pc = 0x26f85cu;
    // NOP
label_26f860:
    // 0x26f860: 0x51d4  .word       0x000051D4                   # dsllv       $t2, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f860u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_26f864:
    // 0x26f864: 0x8020  add         $s0, $zero, $zero
    ctx->pc = 0x26f864u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_26f868:
    // 0x26f868: 0x0  nop
    ctx->pc = 0x26f868u;
    // NOP
label_26f86c:
    // 0x26f86c: 0x0  nop
    ctx->pc = 0x26f86cu;
    // NOP
label_26f870:
    // 0x26f870: 0x51e5  .word       0x000051E5                   # move        $t2, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f870u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_26f874:
    // 0x26f874: 0x3e40  sll         $a3, $zero, 25
    ctx->pc = 0x26f874u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 0), 25));
label_26f878:
    // 0x26f878: 0x0  nop
    ctx->pc = 0x26f878u;
    // NOP
label_26f87c:
    // 0x26f87c: 0x0  nop
    ctx->pc = 0x26f87cu;
    // NOP
label_26f880:
    // 0x26f880: 0x51ed  .word       0x000051ED                   # daddu       $t2, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f880u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26f884:
    // 0x26f884: 0x7b50  .word       0x00007B50                   # mfhi        $t7 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f884u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_26f888:
    // 0x26f888: 0x0  nop
    ctx->pc = 0x26f888u;
    // NOP
label_26f88c:
    // 0x26f88c: 0x0  nop
    ctx->pc = 0x26f88cu;
    // NOP
label_26f890:
    // 0x26f890: 0x51fd  .word       0x000051FD                   # INVALID     $zero, $zero, 0x51FD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f890u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x26F890 raw=0x000051FD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26f894:
    // 0x26f894: 0x1f00  sll         $v1, $zero, 28
    ctx->pc = 0x26f894u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 0), 28));
label_26f898:
    // 0x26f898: 0x0  nop
    ctx->pc = 0x26f898u;
    // NOP
label_26f89c:
    // 0x26f89c: 0x0  nop
    ctx->pc = 0x26f89cu;
    // NOP
label_26f8a0:
    // 0x26f8a0: 0x5201  .word       0x00005201                   # INVALID     $zero, $zero, 0x5201 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f8a0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x26F8A0 raw=0x00005201"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26f8a4:
    // 0x26f8a4: 0x1da0  .word       0x00001DA0                   # add         $v1, $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f8a4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_26f8a8:
    // 0x26f8a8: 0x0  nop
    ctx->pc = 0x26f8a8u;
    // NOP
label_26f8ac:
    // 0x26f8ac: 0x0  nop
    ctx->pc = 0x26f8acu;
    // NOP
label_26f8b0:
    // 0x26f8b0: 0x5205  .word       0x00005205                   # INVALID     $zero, $zero, 0x5205 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f8b0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x26F8B0 raw=0x00005205"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26f8b4:
    // 0x26f8b4: 0x1950  .word       0x00001950                   # mfhi        $v1 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f8b4u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_26f8b8:
    // 0x26f8b8: 0x0  nop
    ctx->pc = 0x26f8b8u;
    // NOP
label_26f8bc:
    // 0x26f8bc: 0x0  nop
    ctx->pc = 0x26f8bcu;
    // NOP
label_26f8c0:
    // 0x26f8c0: 0x5209  .word       0x00005209                   # jalr        $t2, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
label_26f8c4:
    if (ctx->pc == 0x26F8C4u) {
        ctx->pc = 0x26F8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F8C0u;
        // 0x26f8c4: 0x2500  sll         $a0, $zero, 20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26F8C8u;
        goto label_26f8c8;
    }
    ctx->pc = 0x26F8C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 10, 0x26F8C8u);
        ctx->pc = 0x26F8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F8C0u;
        // 0x26f8c4: 0x2500  sll         $a0, $zero, 20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26F8C0u, 0x26F8C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26F8C8u;
label_26f8c8:
    // 0x26f8c8: 0x0  nop
    ctx->pc = 0x26f8c8u;
    // NOP
label_26f8cc:
    // 0x26f8cc: 0x0  nop
    ctx->pc = 0x26f8ccu;
    // NOP
label_26f8d0:
    // 0x26f8d0: 0x520e  .word       0x0000520E                   # INVALID     $zero, $zero, 0x520E # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f8d0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x26F8D0 raw=0x0000520E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26f8d4:
    // 0x26f8d4: 0xec0  sll         $at, $zero, 27
    ctx->pc = 0x26f8d4u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 27));
label_26f8d8:
    // 0x26f8d8: 0x0  nop
    ctx->pc = 0x26f8d8u;
    // NOP
label_26f8dc:
    // 0x26f8dc: 0x0  nop
    ctx->pc = 0x26f8dcu;
    // NOP
label_26f8e0:
    // 0x26f8e0: 0x5210  .word       0x00005210                   # mfhi        $t2 # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f8e0u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_26f8e4:
    // 0x26f8e4: 0x1030  tge         $zero, $zero, 64
    ctx->pc = 0x26f8e4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26f8e8:
    // 0x26f8e8: 0x0  nop
    ctx->pc = 0x26f8e8u;
    // NOP
label_26f8ec:
    // 0x26f8ec: 0x0  nop
    ctx->pc = 0x26f8ecu;
    // NOP
label_26f8f0:
    // 0x26f8f0: 0x5213  .word       0x00005213                   # mtlo        $zero # 00005200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f8f0u;
    ctx->lo = GPR_U64(ctx, 0);
label_26f8f4:
    // 0x26f8f4: 0xbfe0  .word       0x0000BFE0                   # add         $s7, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f8f4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 23, (int32_t)result);     } }
label_26f8f8:
    // 0x26f8f8: 0x0  nop
    ctx->pc = 0x26f8f8u;
    // NOP
label_26f8fc:
    // 0x26f8fc: 0x0  nop
    ctx->pc = 0x26f8fcu;
    // NOP
label_26f900:
    // 0x26f900: 0x522b  .word       0x0000522B                   # sltu        $t2, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f900u;
    SET_GPR_U64(ctx, 10, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_26f904:
    // 0x26f904: 0xd380  sll         $k0, $zero, 14
    ctx->pc = 0x26f904u;
    SET_GPR_S32(ctx, 26, (int32_t)SLL32(GPR_U32(ctx, 0), 14));
label_26f908:
    // 0x26f908: 0x0  nop
    ctx->pc = 0x26f908u;
    // NOP
label_26f90c:
    // 0x26f90c: 0x0  nop
    ctx->pc = 0x26f90cu;
    // NOP
label_26f910:
    // 0x26f910: 0x5246  .word       0x00005246                   # srlv        $t2, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f910u;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_26f914:
    // 0x26f914: 0x12280  sll         $a0, $at, 10
    ctx->pc = 0x26f914u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 1), 10));
label_26f918:
    // 0x26f918: 0x0  nop
    ctx->pc = 0x26f918u;
    // NOP
label_26f91c:
    // 0x26f91c: 0x0  nop
    ctx->pc = 0x26f91cu;
    // NOP
label_26f920:
    // 0x26f920: 0x526b  .word       0x0000526B                   # sltu        $t2, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f920u;
    SET_GPR_U64(ctx, 10, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_26f924:
    // 0x26f924: 0x116e0  .word       0x000116E0                   # add         $v0, $zero, $at # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f924u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 2, (int32_t)result);     } }
label_26f928:
    // 0x26f928: 0x0  nop
    ctx->pc = 0x26f928u;
    // NOP
label_26f92c:
    // 0x26f92c: 0x0  nop
    ctx->pc = 0x26f92cu;
    // NOP
label_26f930:
    // 0x26f930: 0x528e  .word       0x0000528E                   # INVALID     $zero, $zero, 0x528E # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f930u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x26F930 raw=0x0000528E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26f934:
    // 0x26f934: 0xe4d0  .word       0x0000E4D0                   # mfhi        $gp # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f934u;
    SET_GPR_U64(ctx, 28, ctx->hi);
label_26f938:
    // 0x26f938: 0x0  nop
    ctx->pc = 0x26f938u;
    // NOP
label_26f93c:
    // 0x26f93c: 0x0  nop
    ctx->pc = 0x26f93cu;
    // NOP
label_26f940:
    // 0x26f940: 0x52ab  .word       0x000052AB                   # sltu        $t2, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f940u;
    SET_GPR_U64(ctx, 10, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_26f944:
    // 0x26f944: 0xf950  .word       0x0000F950                   # mfhi        $ra # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f944u;
    SET_GPR_U64(ctx, 31, ctx->hi);
label_26f948:
    // 0x26f948: 0x0  nop
    ctx->pc = 0x26f948u;
    // NOP
label_26f94c:
    // 0x26f94c: 0x0  nop
    ctx->pc = 0x26f94cu;
    // NOP
label_26f950:
    // 0x26f950: 0x52cb  .word       0x000052CB                   # movn        $t2, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f950u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 10, GPR_VEC(ctx, 0));
label_26f954:
    // 0x26f954: 0x10d00  sll         $at, $at, 20
    ctx->pc = 0x26f954u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 1), 20));
label_26f958:
    // 0x26f958: 0x0  nop
    ctx->pc = 0x26f958u;
    // NOP
label_26f95c:
    // 0x26f95c: 0x0  nop
    ctx->pc = 0x26f95cu;
    // NOP
label_26f960:
    // 0x26f960: 0x52ed  .word       0x000052ED                   # daddu       $t2, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f960u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26f964:
    // 0x26f964: 0xc4c0  sll         $t8, $zero, 19
    ctx->pc = 0x26f964u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
label_26f968:
    // 0x26f968: 0x0  nop
    ctx->pc = 0x26f968u;
    // NOP
label_26f96c:
    // 0x26f96c: 0x0  nop
    ctx->pc = 0x26f96cu;
    // NOP
label_26f970:
    // 0x26f970: 0x5306  .word       0x00005306                   # srlv        $t2, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f970u;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_26f974:
    // 0x26f974: 0xfbc0  sll         $ra, $zero, 15
    ctx->pc = 0x26f974u;
    SET_GPR_S32(ctx, 31, (int32_t)SLL32(GPR_U32(ctx, 0), 15));
label_26f978:
    // 0x26f978: 0x0  nop
    ctx->pc = 0x26f978u;
    // NOP
label_26f97c:
    // 0x26f97c: 0x0  nop
    ctx->pc = 0x26f97cu;
    // NOP
label_26f980:
    // 0x26f980: 0x5326  .word       0x00005326                   # xor         $t2, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f980u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_26f984:
    // 0x26f984: 0xf750  .word       0x0000F750                   # mfhi        $fp # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f984u;
    SET_GPR_U64(ctx, 30, ctx->hi);
label_26f988:
    // 0x26f988: 0x0  nop
    ctx->pc = 0x26f988u;
    // NOP
label_26f98c:
    // 0x26f98c: 0x0  nop
    ctx->pc = 0x26f98cu;
    // NOP
label_26f990:
    // 0x26f990: 0x5345  .word       0x00005345                   # INVALID     $zero, $zero, 0x5345 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f990u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x26F990 raw=0x00005345"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26f994:
    // 0x26f994: 0xe1e0  .word       0x0000E1E0                   # add         $gp, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f994u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 28, (int32_t)result);     } }
label_26f998:
    // 0x26f998: 0x0  nop
    ctx->pc = 0x26f998u;
    // NOP
label_26f99c:
    // 0x26f99c: 0x0  nop
    ctx->pc = 0x26f99cu;
    // NOP
label_26f9a0:
    // 0x26f9a0: 0x5362  .word       0x00005362                   # neg         $t2, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f9a0u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 10, (int32_t)tmp); }
label_26f9a4:
    // 0x26f9a4: 0x17190  .word       0x00017190                   # mfhi        $t6 # 00010180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f9a4u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_26f9a8:
    // 0x26f9a8: 0x0  nop
    ctx->pc = 0x26f9a8u;
    // NOP
label_26f9ac:
    // 0x26f9ac: 0x0  nop
    ctx->pc = 0x26f9acu;
    // NOP
label_26f9b0:
    // 0x26f9b0: 0x5391  .word       0x00005391                   # mthi        $zero # 00005380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f9b0u;
    ctx->hi = GPR_U64(ctx, 0);
label_26f9b4:
    // 0x26f9b4: 0x10dd0  .word       0x00010DD0                   # mfhi        $at # 000105C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f9b4u;
    SET_GPR_U64(ctx, 1, ctx->hi);
label_26f9b8:
    // 0x26f9b8: 0x0  nop
    ctx->pc = 0x26f9b8u;
    // NOP
label_26f9bc:
    // 0x26f9bc: 0x0  nop
    ctx->pc = 0x26f9bcu;
    // NOP
label_26f9c0:
    // 0x26f9c0: 0x53b3  tltu        $zero, $zero, 334
    ctx->pc = 0x26f9c0u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26f9c4:
    // 0x26f9c4: 0x7b20  .word       0x00007B20                   # add         $t7, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f9c4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_26f9c8:
    // 0x26f9c8: 0x0  nop
    ctx->pc = 0x26f9c8u;
    // NOP
label_26f9cc:
    // 0x26f9cc: 0x0  nop
    ctx->pc = 0x26f9ccu;
    // NOP
label_26f9d0:
    // 0x26f9d0: 0x53c3  sra         $t2, $zero, 15
    ctx->pc = 0x26f9d0u;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 0), 15));
label_26f9d4:
    // 0x26f9d4: 0xe640  sll         $gp, $zero, 25
    ctx->pc = 0x26f9d4u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 0), 25));
label_26f9d8:
    // 0x26f9d8: 0x0  nop
    ctx->pc = 0x26f9d8u;
    // NOP
label_26f9dc:
    // 0x26f9dc: 0x0  nop
    ctx->pc = 0x26f9dcu;
    // NOP
label_26f9e0:
    // 0x26f9e0: 0x53e0  .word       0x000053E0                   # add         $t2, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f9e0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
label_26f9e4:
    // 0x26f9e4: 0x10310  .word       0x00010310                   # mfhi        $zero # 00010300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f9e4u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_26f9e8:
    // 0x26f9e8: 0x0  nop
    ctx->pc = 0x26f9e8u;
    // NOP
label_26f9ec:
    // 0x26f9ec: 0x0  nop
    ctx->pc = 0x26f9ecu;
    // NOP
label_26f9f0:
    // 0x26f9f0: 0x5401  .word       0x00005401                   # INVALID     $zero, $zero, 0x5401 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f9f0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x26F9F0 raw=0x00005401"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26f9f4:
    // 0x26f9f4: 0xad70  tge         $zero, $zero, 693
    ctx->pc = 0x26f9f4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26f9f8:
    // 0x26f9f8: 0x0  nop
    ctx->pc = 0x26f9f8u;
    // NOP
label_26f9fc:
    // 0x26f9fc: 0x0  nop
    ctx->pc = 0x26f9fcu;
    // NOP
label_26fa00:
    // 0x26fa00: 0x5417  .word       0x00005417                   # dsrav       $t2, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26fa00u;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_26fa04:
    // 0x26fa04: 0xf500  sll         $fp, $zero, 20
    ctx->pc = 0x26fa04u;
    SET_GPR_S32(ctx, 30, (int32_t)SLL32(GPR_U32(ctx, 0), 20));
label_26fa08:
    // 0x26fa08: 0x0  nop
    ctx->pc = 0x26fa08u;
    // NOP
label_26fa0c:
    // 0x26fa0c: 0x0  nop
    ctx->pc = 0x26fa0cu;
    // NOP
label_26fa10:
    // 0x26fa10: 0x5436  tne         $zero, $zero, 336
    ctx->pc = 0x26fa10u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26fa14:
    // 0x26fa14: 0x111e0  .word       0x000111E0                   # add         $v0, $zero, $at # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26fa14u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 2, (int32_t)result);     } }
label_26fa18:
    // 0x26fa18: 0x0  nop
    ctx->pc = 0x26fa18u;
    // NOP
label_26fa1c:
    // 0x26fa1c: 0x0  nop
    ctx->pc = 0x26fa1cu;
    // NOP
label_26fa20:
    // 0x26fa20: 0x5459  .word       0x00005459                   # multu       $zero, $zero # 00005440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26fa20u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
label_26fa24:
    // 0x26fa24: 0xa790  .word       0x0000A790                   # mfhi        $s4 # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26fa24u;
    SET_GPR_U64(ctx, 20, ctx->hi);
label_26fa28:
    // 0x26fa28: 0x0  nop
    ctx->pc = 0x26fa28u;
    // NOP
label_26fa2c:
    // 0x26fa2c: 0x0  nop
    ctx->pc = 0x26fa2cu;
    // NOP
label_26fa30:
    // 0x26fa30: 0x546e  .word       0x0000546E                   # dsub        $t2, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26fa30u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 10, r); }
label_26fa34:
    // 0x26fa34: 0x124c0  sll         $a0, $at, 19
    ctx->pc = 0x26fa34u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 1), 19));
label_26fa38:
    // 0x26fa38: 0x0  nop
    ctx->pc = 0x26fa38u;
    // NOP
label_26fa3c:
    // 0x26fa3c: 0x0  nop
    ctx->pc = 0x26fa3cu;
    // NOP
label_26fa40:
    // 0x26fa40: 0x5493  .word       0x00005493                   # mtlo        $zero # 00005480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26fa40u;
    ctx->lo = GPR_U64(ctx, 0);
label_26fa44:
    // 0x26fa44: 0xe720  .word       0x0000E720                   # add         $gp, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26fa44u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 28, (int32_t)result);     } }
label_26fa48:
    // 0x26fa48: 0x0  nop
    ctx->pc = 0x26fa48u;
    // NOP
label_26fa4c:
    // 0x26fa4c: 0x0  nop
    ctx->pc = 0x26fa4cu;
    // NOP
label_26fa50:
    // 0x26fa50: 0x54b0  tge         $zero, $zero, 338
    ctx->pc = 0x26fa50u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26fa54:
    // 0x26fa54: 0xd030  tge         $zero, $zero, 832
    ctx->pc = 0x26fa54u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26fa58:
    // 0x26fa58: 0x0  nop
    ctx->pc = 0x26fa58u;
    // NOP
label_26fa5c:
    // 0x26fa5c: 0x0  nop
    ctx->pc = 0x26fa5cu;
    // NOP
label_26fa60:
    // 0x26fa60: 0x54cb  .word       0x000054CB                   # movn        $t2, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26fa60u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 10, GPR_VEC(ctx, 0));
label_26fa64:
    // 0x26fa64: 0xfb60  .word       0x0000FB60                   # add         $ra, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26fa64u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 31, (int32_t)result);     } }
label_26fa68:
    // 0x26fa68: 0x0  nop
    ctx->pc = 0x26fa68u;
    // NOP
label_26fa6c:
    // 0x26fa6c: 0x0  nop
    ctx->pc = 0x26fa6cu;
    // NOP
label_26fa70:
    // 0x26fa70: 0x54eb  .word       0x000054EB                   # sltu        $t2, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26fa70u;
    SET_GPR_U64(ctx, 10, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_26fa74:
    // 0x26fa74: 0x8020  add         $s0, $zero, $zero
    ctx->pc = 0x26fa74u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_26fa78:
    // 0x26fa78: 0x0  nop
    ctx->pc = 0x26fa78u;
    // NOP
label_26fa7c:
    // 0x26fa7c: 0x0  nop
    ctx->pc = 0x26fa7cu;
    // NOP
label_26fa80:
    // 0x26fa80: 0x54fc  dsll32      $t2, $zero, 19
    ctx->pc = 0x26fa80u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) << (32 + 19));
label_26fa84:
    // 0x26fa84: 0xbd60  .word       0x0000BD60                   # add         $s7, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26fa84u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 23, (int32_t)result);     } }
label_26fa88:
    // 0x26fa88: 0x0  nop
    ctx->pc = 0x26fa88u;
    // NOP
label_26fa8c:
    // 0x26fa8c: 0x0  nop
    ctx->pc = 0x26fa8cu;
    // NOP
label_26fa90:
    // 0x26fa90: 0x5514  .word       0x00005514                   # dsllv       $t2, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26fa90u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_26fa94:
    // 0x26fa94: 0x12270  tge         $zero, $at, 137
    ctx->pc = 0x26fa94u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_26fa98:
    // 0x26fa98: 0x0  nop
    ctx->pc = 0x26fa98u;
    // NOP
label_26fa9c:
    // 0x26fa9c: 0x0  nop
    ctx->pc = 0x26fa9cu;
    // NOP
label_26faa0:
    // 0x26faa0: 0x5539  .word       0x00005539                   # INVALID     $zero, $zero, 0x5539 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26faa0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x26FAA0 raw=0x00005539"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26faa4:
    // 0x26faa4: 0x14280  sll         $t0, $at, 10
    ctx->pc = 0x26faa4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 1), 10));
label_26faa8:
    // 0x26faa8: 0x0  nop
    ctx->pc = 0x26faa8u;
    // NOP
label_26faac:
    // 0x26faac: 0x0  nop
    ctx->pc = 0x26faacu;
    // NOP
label_26fab0:
    // 0x26fab0: 0x5562  .word       0x00005562                   # neg         $t2, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26fab0u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 10, (int32_t)tmp); }
label_26fab4:
    // 0x26fab4: 0x19710  .word       0x00019710                   # mfhi        $s2 # 00010700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26fab4u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_26fab8:
    // 0x26fab8: 0x0  nop
    ctx->pc = 0x26fab8u;
    // NOP
label_26fabc:
    // 0x26fabc: 0x0  nop
    ctx->pc = 0x26fabcu;
    // NOP
label_26fac0:
    // 0x26fac0: 0x5595  .word       0x00005595                   # INVALID     $zero, $zero, 0x5595 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26fac0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x26FAC0 raw=0x00005595"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26fac4:
    // 0x26fac4: 0xc390  .word       0x0000C390                   # mfhi        $t8 # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26fac4u;
    SET_GPR_U64(ctx, 24, ctx->hi);
label_26fac8:
    // 0x26fac8: 0x0  nop
    ctx->pc = 0x26fac8u;
    // NOP
label_26facc:
    // 0x26facc: 0x0  nop
    ctx->pc = 0x26faccu;
    // NOP
label_26fad0:
    // 0x26fad0: 0x55ae  .word       0x000055AE                   # dsub        $t2, $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26fad0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 10, r); }
label_26fad4:
    // 0x26fad4: 0xe1b0  tge         $zero, $zero, 902
    ctx->pc = 0x26fad4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26fad8:
    // 0x26fad8: 0x0  nop
    ctx->pc = 0x26fad8u;
    // NOP
label_26fadc:
    // 0x26fadc: 0x0  nop
    ctx->pc = 0x26fadcu;
    // NOP
label_26fae0:
    // 0x26fae0: 0x55cb  .word       0x000055CB                   # movn        $t2, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26fae0u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 10, GPR_VEC(ctx, 0));
label_26fae4:
    // 0x26fae4: 0x15a70  tge         $zero, $at, 361
    ctx->pc = 0x26fae4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_26fae8:
    // 0x26fae8: 0x0  nop
    ctx->pc = 0x26fae8u;
    // NOP
label_26faec:
    // 0x26faec: 0x0  nop
    ctx->pc = 0x26faecu;
    // NOP
label_26faf0:
    // 0x26faf0: 0x55f7  .word       0x000055F7                   # INVALID     $zero, $zero, 0x55F7 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26faf0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x26FAF0 raw=0x000055F7"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26faf4:
    // 0x26faf4: 0xa440  sll         $s4, $zero, 17
    ctx->pc = 0x26faf4u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
label_26faf8:
    // 0x26faf8: 0x0  nop
    ctx->pc = 0x26faf8u;
    // NOP
label_26fafc:
    // 0x26fafc: 0x0  nop
    ctx->pc = 0x26fafcu;
    // NOP
label_26fb00:
    // 0x26fb00: 0x560c  syscall     344
    ctx->pc = 0x26fb00u;
    ctx->pc = 0x26FB04u;
runtime->handleSyscall(rdram, ctx, 0x158u);
label_26fb04:
    // 0x26fb04: 0xa2f0  tge         $zero, $zero, 651
    ctx->pc = 0x26fb04u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26fb08:
    // 0x26fb08: 0x0  nop
    ctx->pc = 0x26fb08u;
    // NOP
label_26fb0c:
    // 0x26fb0c: 0x0  nop
    ctx->pc = 0x26fb0cu;
    // NOP
label_26fb10:
    // 0x26fb10: 0x5621  .word       0x00005621                   # addu        $t2, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26fb10u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_26fb14:
    // 0x26fb14: 0x11840  sll         $v1, $at, 1
    ctx->pc = 0x26fb14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 1), 1));
label_26fb18:
    // 0x26fb18: 0x0  nop
    ctx->pc = 0x26fb18u;
    // NOP
label_26fb1c:
    // 0x26fb1c: 0x0  nop
    ctx->pc = 0x26fb1cu;
    // NOP
label_26fb20:
    // 0x26fb20: 0x5645  .word       0x00005645                   # INVALID     $zero, $zero, 0x5645 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26fb20u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x26FB20 raw=0x00005645"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26fb24:
    // 0x26fb24: 0xab50  .word       0x0000AB50                   # mfhi        $s5 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26fb24u;
    SET_GPR_U64(ctx, 21, ctx->hi);
label_26fb28:
    // 0x26fb28: 0x0  nop
    ctx->pc = 0x26fb28u;
    // NOP
label_26fb2c:
    // 0x26fb2c: 0x0  nop
    ctx->pc = 0x26fb2cu;
    // NOP
label_26fb30:
    // 0x26fb30: 0x565b  .word       0x0000565B                   # divu        $t2, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26fb30u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_26fb34:
    // 0x26fb34: 0xb430  tge         $zero, $zero, 720
    ctx->pc = 0x26fb34u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26fb38:
    // 0x26fb38: 0x0  nop
    ctx->pc = 0x26fb38u;
    // NOP
label_26fb3c:
    // 0x26fb3c: 0x0  nop
    ctx->pc = 0x26fb3cu;
    // NOP
label_26fb40:
    // 0x26fb40: 0x5672  tlt         $zero, $zero, 345
    ctx->pc = 0x26fb40u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26fb44:
    // 0x26fb44: 0xae60  .word       0x0000AE60                   # add         $s5, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26fb44u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 21, (int32_t)result);     } }
label_26fb48:
    // 0x26fb48: 0x0  nop
    ctx->pc = 0x26fb48u;
    // NOP
label_26fb4c:
    // 0x26fb4c: 0x0  nop
    ctx->pc = 0x26fb4cu;
    // NOP
label_26fb50:
    // 0x26fb50: 0x5688  .word       0x00005688                   # jr          $zero # 00005680 <InstrIdType: CPU_SPECIAL>
label_26fb54:
    if (ctx->pc == 0x26FB54u) {
        ctx->pc = 0x26FB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FB50u;
        // 0x26fb54: 0x18880  sll         $s1, $at, 2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 1), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26FB58u;
        goto label_26fb58;
    }
    ctx->pc = 0x26FB50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x26FB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FB50u;
        // 0x26fb54: 0x18880  sll         $s1, $at, 2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 1), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26FB50u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x26FB58u;
label_26fb58:
    // 0x26fb58: 0x0  nop
    ctx->pc = 0x26fb58u;
    // NOP
label_26fb5c:
    // 0x26fb5c: 0x0  nop
    ctx->pc = 0x26fb5cu;
    // NOP
label_26fb60:
    // 0x26fb60: 0x56ba  dsrl        $t2, $zero, 26
    ctx->pc = 0x26fb60u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) >> 26);
label_26fb64:
    // 0x26fb64: 0x79b0  tge         $zero, $zero, 486
    ctx->pc = 0x26fb64u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26fb68:
    // 0x26fb68: 0x0  nop
    ctx->pc = 0x26fb68u;
    // NOP
label_26fb6c:
    // 0x26fb6c: 0x0  nop
    ctx->pc = 0x26fb6cu;
    // NOP
label_26fb70:
    // 0x26fb70: 0x56ca  .word       0x000056CA                   # movz        $t2, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26fb70u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 10, GPR_VEC(ctx, 0));
label_26fb74:
    // 0x26fb74: 0xa210  .word       0x0000A210                   # mfhi        $s4 # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26fb74u;
    SET_GPR_U64(ctx, 20, ctx->hi);
label_26fb78:
    // 0x26fb78: 0x0  nop
    ctx->pc = 0x26fb78u;
    // NOP
label_26fb7c:
    // 0x26fb7c: 0x0  nop
    ctx->pc = 0x26fb7cu;
    // NOP
label_26fb80:
    // 0x26fb80: 0x56df  .word       0x000056DF                   # ddivu       $t2, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26fb80u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x26FB80 raw=0x000056DF"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26fb84:
    // 0x26fb84: 0x57e0  .word       0x000057E0                   # add         $t2, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26fb84u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
label_26fb88:
    // 0x26fb88: 0x0  nop
    ctx->pc = 0x26fb88u;
    // NOP
label_26fb8c:
    // 0x26fb8c: 0x0  nop
    ctx->pc = 0x26fb8cu;
    // NOP
label_26fb90:
    // 0x26fb90: 0x56ea  .word       0x000056EA                   # slt         $t2, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26fb90u;
    SET_GPR_U64(ctx, 10, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_26fb94:
    // 0x26fb94: 0x8520  .word       0x00008520                   # add         $s0, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26fb94u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_26fb98:
    // 0x26fb98: 0x0  nop
    ctx->pc = 0x26fb98u;
    // NOP
label_26fb9c:
    // 0x26fb9c: 0x0  nop
    ctx->pc = 0x26fb9cu;
    // NOP
label_26fba0:
    // 0x26fba0: 0x56fb  dsra        $t2, $zero, 27
    ctx->pc = 0x26fba0u;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 0) >> 27);
label_26fba4:
    // 0x26fba4: 0x42c0  sll         $t0, $zero, 11
    ctx->pc = 0x26fba4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 11));
label_26fba8:
    // 0x26fba8: 0x0  nop
    ctx->pc = 0x26fba8u;
    // NOP
label_26fbac:
    // 0x26fbac: 0x0  nop
    ctx->pc = 0x26fbacu;
    // NOP
label_26fbb0:
    // 0x26fbb0: 0x5704  .word       0x00005704                   # sllv        $t2, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26fbb0u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_26fbb4:
    // 0x26fbb4: 0x6640  sll         $t4, $zero, 25
    ctx->pc = 0x26fbb4u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 25));
label_26fbb8:
    // 0x26fbb8: 0x0  nop
    ctx->pc = 0x26fbb8u;
    // NOP
label_26fbbc:
    // 0x26fbbc: 0x0  nop
    ctx->pc = 0x26fbbcu;
    // NOP
label_26fbc0:
    // 0x26fbc0: 0x5711  .word       0x00005711                   # mthi        $zero # 00005700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26fbc0u;
    ctx->hi = GPR_U64(ctx, 0);
label_26fbc4:
    // 0x26fbc4: 0x4f20  .word       0x00004F20                   # add         $t1, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26fbc4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_26fbc8:
    // 0x26fbc8: 0x0  nop
    ctx->pc = 0x26fbc8u;
    // NOP
label_26fbcc:
    // 0x26fbcc: 0x0  nop
    ctx->pc = 0x26fbccu;
    // NOP
label_26fbd0:
    // 0x26fbd0: 0x571b  .word       0x0000571B                   # divu        $t2, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26fbd0u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_26fbd4:
    // 0x26fbd4: 0xb840  sll         $s7, $zero, 1
    ctx->pc = 0x26fbd4u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 0), 1));
label_26fbd8:
    // 0x26fbd8: 0x0  nop
    ctx->pc = 0x26fbd8u;
    // NOP
label_26fbdc:
    // 0x26fbdc: 0x0  nop
    ctx->pc = 0x26fbdcu;
    // NOP
label_26fbe0:
    // 0x26fbe0: 0x5733  tltu        $zero, $zero, 348
    ctx->pc = 0x26fbe0u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26fbe4:
    // 0x26fbe4: 0x5290  .word       0x00005290                   # mfhi        $t2 # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26fbe4u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_26fbe8:
    // 0x26fbe8: 0x0  nop
    ctx->pc = 0x26fbe8u;
    // NOP
label_26fbec:
    // 0x26fbec: 0x0  nop
    ctx->pc = 0x26fbecu;
    // NOP
label_26fbf0:
    // 0x26fbf0: 0x573e  dsrl32      $t2, $zero, 28
    ctx->pc = 0x26fbf0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) >> (32 + 28));
label_26fbf4:
    // 0x26fbf4: 0x5030  tge         $zero, $zero, 320
    ctx->pc = 0x26fbf4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26fbf8:
    // 0x26fbf8: 0x0  nop
    ctx->pc = 0x26fbf8u;
    // NOP
label_26fbfc:
    // 0x26fbfc: 0x0  nop
    ctx->pc = 0x26fbfcu;
    // NOP
label_26fc00:
    // 0x26fc00: 0x5749  .word       0x00005749                   # jalr        $t2, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
label_26fc04:
    if (ctx->pc == 0x26FC04u) {
        ctx->pc = 0x26FC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FC00u;
        // 0x26fc04: 0x5870  tge         $zero, $zero, 353 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x26FC08u;
        goto label_26fc08;
    }
    ctx->pc = 0x26FC00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 10, 0x26FC08u);
        ctx->pc = 0x26FC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FC00u;
        // 0x26fc04: 0x5870  tge         $zero, $zero, 353 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26FC00u, 0x26FC08u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26FC08u;
label_26fc08:
    // 0x26fc08: 0x0  nop
    ctx->pc = 0x26fc08u;
    // NOP
label_26fc0c:
    // 0x26fc0c: 0x0  nop
    ctx->pc = 0x26fc0cu;
    // NOP
label_26fc10:
    // 0x26fc10: 0x5755  .word       0x00005755                   # INVALID     $zero, $zero, 0x5755 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26fc10u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x26FC10 raw=0x00005755"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26fc14:
    // 0x26fc14: 0x8c30  tge         $zero, $zero, 560
    ctx->pc = 0x26fc14u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26fc18:
    // 0x26fc18: 0x0  nop
    ctx->pc = 0x26fc18u;
    // NOP
label_26fc1c:
    // 0x26fc1c: 0x0  nop
    ctx->pc = 0x26fc1cu;
    // NOP
label_26fc20:
    // 0x26fc20: 0x5767  .word       0x00005767                   # not         $t2, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26fc20u;
    SET_GPR_U64(ctx, 10, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_26fc24:
    // 0x26fc24: 0x78c0  sll         $t7, $zero, 3
    ctx->pc = 0x26fc24u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 0), 3));
label_26fc28:
    // 0x26fc28: 0x0  nop
    ctx->pc = 0x26fc28u;
    // NOP
label_26fc2c:
    // 0x26fc2c: 0x0  nop
    ctx->pc = 0x26fc2cu;
    // NOP
label_26fc30:
    // 0x26fc30: 0x5777  .word       0x00005777                   # INVALID     $zero, $zero, 0x5777 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26fc30u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x26FC30 raw=0x00005777"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26fc34:
    // 0x26fc34: 0x6a80  sll         $t5, $zero, 10
    ctx->pc = 0x26fc34u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 0), 10));
label_26fc38:
    // 0x26fc38: 0x0  nop
    ctx->pc = 0x26fc38u;
    // NOP
label_26fc3c:
    // 0x26fc3c: 0x0  nop
    ctx->pc = 0x26fc3cu;
    // NOP
label_26fc40:
    // 0x26fc40: 0x5785  .word       0x00005785                   # INVALID     $zero, $zero, 0x5785 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26fc40u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x26FC40 raw=0x00005785"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26fc44:
    // 0x26fc44: 0x2a30  tge         $zero, $zero, 168
    ctx->pc = 0x26fc44u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26fc48:
    // 0x26fc48: 0x0  nop
    ctx->pc = 0x26fc48u;
    // NOP
label_26fc4c:
    // 0x26fc4c: 0x0  nop
    ctx->pc = 0x26fc4cu;
    // NOP
label_26fc50:
    // 0x26fc50: 0x578b  .word       0x0000578B                   # movn        $t2, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26fc50u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 10, GPR_VEC(ctx, 0));
label_26fc54:
    // 0x26fc54: 0x5110  .word       0x00005110                   # mfhi        $t2 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26fc54u;
    SET_GPR_U64(ctx, 10, ctx->hi);
    ctx->pc = 0x26fc58u;
    return;
}
