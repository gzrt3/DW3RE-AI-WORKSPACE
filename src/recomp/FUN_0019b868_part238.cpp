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

// Function: FUN_0019b868
// Address: 0x19b868 - 0x29b870
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0019b868_part238(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x20f3f8u: goto label_20f3f8;
        case 0x20f3fcu: goto label_20f3fc;
        case 0x20f400u: goto label_20f400;
        case 0x20f404u: goto label_20f404;
        case 0x20f408u: goto label_20f408;
        case 0x20f40cu: goto label_20f40c;
        case 0x20f410u: goto label_20f410;
        case 0x20f414u: goto label_20f414;
        case 0x20f418u: goto label_20f418;
        case 0x20f41cu: goto label_20f41c;
        case 0x20f420u: goto label_20f420;
        case 0x20f424u: goto label_20f424;
        case 0x20f428u: goto label_20f428;
        case 0x20f42cu: goto label_20f42c;
        case 0x20f430u: goto label_20f430;
        case 0x20f434u: goto label_20f434;
        case 0x20f438u: goto label_20f438;
        case 0x20f43cu: goto label_20f43c;
        case 0x20f440u: goto label_20f440;
        case 0x20f444u: goto label_20f444;
        case 0x20f448u: goto label_20f448;
        case 0x20f44cu: goto label_20f44c;
        case 0x20f450u: goto label_20f450;
        case 0x20f454u: goto label_20f454;
        case 0x20f458u: goto label_20f458;
        case 0x20f45cu: goto label_20f45c;
        case 0x20f460u: goto label_20f460;
        case 0x20f464u: goto label_20f464;
        case 0x20f468u: goto label_20f468;
        case 0x20f46cu: goto label_20f46c;
        case 0x20f470u: goto label_20f470;
        case 0x20f474u: goto label_20f474;
        case 0x20f478u: goto label_20f478;
        case 0x20f47cu: goto label_20f47c;
        case 0x20f480u: goto label_20f480;
        case 0x20f484u: goto label_20f484;
        case 0x20f488u: goto label_20f488;
        case 0x20f48cu: goto label_20f48c;
        case 0x20f490u: goto label_20f490;
        case 0x20f494u: goto label_20f494;
        case 0x20f498u: goto label_20f498;
        case 0x20f49cu: goto label_20f49c;
        case 0x20f4a0u: goto label_20f4a0;
        case 0x20f4a4u: goto label_20f4a4;
        case 0x20f4a8u: goto label_20f4a8;
        case 0x20f4acu: goto label_20f4ac;
        case 0x20f4b0u: goto label_20f4b0;
        case 0x20f4b4u: goto label_20f4b4;
        case 0x20f4b8u: goto label_20f4b8;
        case 0x20f4bcu: goto label_20f4bc;
        case 0x20f4c0u: goto label_20f4c0;
        case 0x20f4c4u: goto label_20f4c4;
        case 0x20f4c8u: goto label_20f4c8;
        case 0x20f4ccu: goto label_20f4cc;
        case 0x20f4d0u: goto label_20f4d0;
        case 0x20f4d4u: goto label_20f4d4;
        case 0x20f4d8u: goto label_20f4d8;
        case 0x20f4dcu: goto label_20f4dc;
        case 0x20f4e0u: goto label_20f4e0;
        case 0x20f4e4u: goto label_20f4e4;
        case 0x20f4e8u: goto label_20f4e8;
        case 0x20f4ecu: goto label_20f4ec;
        case 0x20f4f0u: goto label_20f4f0;
        case 0x20f4f4u: goto label_20f4f4;
        case 0x20f4f8u: goto label_20f4f8;
        case 0x20f4fcu: goto label_20f4fc;
        case 0x20f500u: goto label_20f500;
        case 0x20f504u: goto label_20f504;
        case 0x20f508u: goto label_20f508;
        case 0x20f50cu: goto label_20f50c;
        case 0x20f510u: goto label_20f510;
        case 0x20f514u: goto label_20f514;
        case 0x20f518u: goto label_20f518;
        case 0x20f51cu: goto label_20f51c;
        case 0x20f520u: goto label_20f520;
        case 0x20f524u: goto label_20f524;
        case 0x20f528u: goto label_20f528;
        case 0x20f52cu: goto label_20f52c;
        case 0x20f530u: goto label_20f530;
        case 0x20f534u: goto label_20f534;
        case 0x20f538u: goto label_20f538;
        case 0x20f53cu: goto label_20f53c;
        case 0x20f540u: goto label_20f540;
        case 0x20f544u: goto label_20f544;
        case 0x20f548u: goto label_20f548;
        case 0x20f54cu: goto label_20f54c;
        case 0x20f550u: goto label_20f550;
        case 0x20f554u: goto label_20f554;
        case 0x20f558u: goto label_20f558;
        case 0x20f55cu: goto label_20f55c;
        case 0x20f560u: goto label_20f560;
        case 0x20f564u: goto label_20f564;
        case 0x20f568u: goto label_20f568;
        case 0x20f56cu: goto label_20f56c;
        case 0x20f570u: goto label_20f570;
        case 0x20f574u: goto label_20f574;
        case 0x20f578u: goto label_20f578;
        case 0x20f57cu: goto label_20f57c;
        case 0x20f580u: goto label_20f580;
        case 0x20f584u: goto label_20f584;
        case 0x20f588u: goto label_20f588;
        case 0x20f58cu: goto label_20f58c;
        case 0x20f590u: goto label_20f590;
        case 0x20f594u: goto label_20f594;
        case 0x20f598u: goto label_20f598;
        case 0x20f59cu: goto label_20f59c;
        case 0x20f5a0u: goto label_20f5a0;
        case 0x20f5a4u: goto label_20f5a4;
        case 0x20f5a8u: goto label_20f5a8;
        case 0x20f5acu: goto label_20f5ac;
        case 0x20f5b0u: goto label_20f5b0;
        case 0x20f5b4u: goto label_20f5b4;
        case 0x20f5b8u: goto label_20f5b8;
        case 0x20f5bcu: goto label_20f5bc;
        case 0x20f5c0u: goto label_20f5c0;
        case 0x20f5c4u: goto label_20f5c4;
        case 0x20f5c8u: goto label_20f5c8;
        case 0x20f5ccu: goto label_20f5cc;
        case 0x20f5d0u: goto label_20f5d0;
        case 0x20f5d4u: goto label_20f5d4;
        case 0x20f5d8u: goto label_20f5d8;
        case 0x20f5dcu: goto label_20f5dc;
        case 0x20f5e0u: goto label_20f5e0;
        case 0x20f5e4u: goto label_20f5e4;
        case 0x20f5e8u: goto label_20f5e8;
        case 0x20f5ecu: goto label_20f5ec;
        case 0x20f5f0u: goto label_20f5f0;
        case 0x20f5f4u: goto label_20f5f4;
        case 0x20f5f8u: goto label_20f5f8;
        case 0x20f5fcu: goto label_20f5fc;
        case 0x20f600u: goto label_20f600;
        case 0x20f604u: goto label_20f604;
        case 0x20f608u: goto label_20f608;
        case 0x20f60cu: goto label_20f60c;
        case 0x20f610u: goto label_20f610;
        case 0x20f614u: goto label_20f614;
        case 0x20f618u: goto label_20f618;
        case 0x20f61cu: goto label_20f61c;
        case 0x20f620u: goto label_20f620;
        case 0x20f624u: goto label_20f624;
        case 0x20f628u: goto label_20f628;
        case 0x20f62cu: goto label_20f62c;
        case 0x20f630u: goto label_20f630;
        case 0x20f634u: goto label_20f634;
        case 0x20f638u: goto label_20f638;
        case 0x20f63cu: goto label_20f63c;
        case 0x20f640u: goto label_20f640;
        case 0x20f644u: goto label_20f644;
        case 0x20f648u: goto label_20f648;
        case 0x20f64cu: goto label_20f64c;
        case 0x20f650u: goto label_20f650;
        case 0x20f654u: goto label_20f654;
        case 0x20f658u: goto label_20f658;
        case 0x20f65cu: goto label_20f65c;
        case 0x20f660u: goto label_20f660;
        case 0x20f664u: goto label_20f664;
        case 0x20f668u: goto label_20f668;
        case 0x20f66cu: goto label_20f66c;
        case 0x20f670u: goto label_20f670;
        case 0x20f674u: goto label_20f674;
        case 0x20f678u: goto label_20f678;
        case 0x20f67cu: goto label_20f67c;
        case 0x20f680u: goto label_20f680;
        case 0x20f684u: goto label_20f684;
        case 0x20f688u: goto label_20f688;
        case 0x20f68cu: goto label_20f68c;
        case 0x20f690u: goto label_20f690;
        case 0x20f694u: goto label_20f694;
        case 0x20f698u: goto label_20f698;
        case 0x20f69cu: goto label_20f69c;
        case 0x20f6a0u: goto label_20f6a0;
        case 0x20f6a4u: goto label_20f6a4;
        case 0x20f6a8u: goto label_20f6a8;
        case 0x20f6acu: goto label_20f6ac;
        case 0x20f6b0u: goto label_20f6b0;
        case 0x20f6b4u: goto label_20f6b4;
        case 0x20f6b8u: goto label_20f6b8;
        case 0x20f6bcu: goto label_20f6bc;
        case 0x20f6c0u: goto label_20f6c0;
        case 0x20f6c4u: goto label_20f6c4;
        case 0x20f6c8u: goto label_20f6c8;
        case 0x20f6ccu: goto label_20f6cc;
        case 0x20f6d0u: goto label_20f6d0;
        case 0x20f6d4u: goto label_20f6d4;
        case 0x20f6d8u: goto label_20f6d8;
        case 0x20f6dcu: goto label_20f6dc;
        case 0x20f6e0u: goto label_20f6e0;
        case 0x20f6e4u: goto label_20f6e4;
        case 0x20f6e8u: goto label_20f6e8;
        case 0x20f6ecu: goto label_20f6ec;
        case 0x20f6f0u: goto label_20f6f0;
        case 0x20f6f4u: goto label_20f6f4;
        case 0x20f6f8u: goto label_20f6f8;
        case 0x20f6fcu: goto label_20f6fc;
        case 0x20f700u: goto label_20f700;
        case 0x20f704u: goto label_20f704;
        case 0x20f708u: goto label_20f708;
        case 0x20f70cu: goto label_20f70c;
        case 0x20f710u: goto label_20f710;
        case 0x20f714u: goto label_20f714;
        case 0x20f718u: goto label_20f718;
        case 0x20f71cu: goto label_20f71c;
        case 0x20f720u: goto label_20f720;
        case 0x20f724u: goto label_20f724;
        case 0x20f728u: goto label_20f728;
        case 0x20f72cu: goto label_20f72c;
        case 0x20f730u: goto label_20f730;
        case 0x20f734u: goto label_20f734;
        case 0x20f738u: goto label_20f738;
        case 0x20f73cu: goto label_20f73c;
        case 0x20f740u: goto label_20f740;
        case 0x20f744u: goto label_20f744;
        case 0x20f748u: goto label_20f748;
        case 0x20f74cu: goto label_20f74c;
        case 0x20f750u: goto label_20f750;
        case 0x20f754u: goto label_20f754;
        case 0x20f758u: goto label_20f758;
        case 0x20f75cu: goto label_20f75c;
        case 0x20f760u: goto label_20f760;
        case 0x20f764u: goto label_20f764;
        case 0x20f768u: goto label_20f768;
        case 0x20f76cu: goto label_20f76c;
        case 0x20f770u: goto label_20f770;
        case 0x20f774u: goto label_20f774;
        case 0x20f778u: goto label_20f778;
        case 0x20f77cu: goto label_20f77c;
        case 0x20f780u: goto label_20f780;
        case 0x20f784u: goto label_20f784;
        case 0x20f788u: goto label_20f788;
        case 0x20f78cu: goto label_20f78c;
        case 0x20f790u: goto label_20f790;
        case 0x20f794u: goto label_20f794;
        case 0x20f798u: goto label_20f798;
        case 0x20f79cu: goto label_20f79c;
        case 0x20f7a0u: goto label_20f7a0;
        case 0x20f7a4u: goto label_20f7a4;
        case 0x20f7a8u: goto label_20f7a8;
        case 0x20f7acu: goto label_20f7ac;
        case 0x20f7b0u: goto label_20f7b0;
        case 0x20f7b4u: goto label_20f7b4;
        case 0x20f7b8u: goto label_20f7b8;
        case 0x20f7bcu: goto label_20f7bc;
        case 0x20f7c0u: goto label_20f7c0;
        case 0x20f7c4u: goto label_20f7c4;
        case 0x20f7c8u: goto label_20f7c8;
        case 0x20f7ccu: goto label_20f7cc;
        case 0x20f7d0u: goto label_20f7d0;
        case 0x20f7d4u: goto label_20f7d4;
        case 0x20f7d8u: goto label_20f7d8;
        case 0x20f7dcu: goto label_20f7dc;
        case 0x20f7e0u: goto label_20f7e0;
        case 0x20f7e4u: goto label_20f7e4;
        case 0x20f7e8u: goto label_20f7e8;
        case 0x20f7ecu: goto label_20f7ec;
        case 0x20f7f0u: goto label_20f7f0;
        case 0x20f7f4u: goto label_20f7f4;
        case 0x20f7f8u: goto label_20f7f8;
        case 0x20f7fcu: goto label_20f7fc;
        case 0x20f800u: goto label_20f800;
        case 0x20f804u: goto label_20f804;
        case 0x20f808u: goto label_20f808;
        case 0x20f80cu: goto label_20f80c;
        case 0x20f810u: goto label_20f810;
        case 0x20f814u: goto label_20f814;
        case 0x20f818u: goto label_20f818;
        case 0x20f81cu: goto label_20f81c;
        case 0x20f820u: goto label_20f820;
        case 0x20f824u: goto label_20f824;
        case 0x20f828u: goto label_20f828;
        case 0x20f82cu: goto label_20f82c;
        case 0x20f830u: goto label_20f830;
        case 0x20f834u: goto label_20f834;
        case 0x20f838u: goto label_20f838;
        case 0x20f83cu: goto label_20f83c;
        case 0x20f840u: goto label_20f840;
        case 0x20f844u: goto label_20f844;
        case 0x20f848u: goto label_20f848;
        case 0x20f84cu: goto label_20f84c;
        case 0x20f850u: goto label_20f850;
        case 0x20f854u: goto label_20f854;
        case 0x20f858u: goto label_20f858;
        case 0x20f85cu: goto label_20f85c;
        case 0x20f860u: goto label_20f860;
        case 0x20f864u: goto label_20f864;
        case 0x20f868u: goto label_20f868;
        case 0x20f86cu: goto label_20f86c;
        case 0x20f870u: goto label_20f870;
        case 0x20f874u: goto label_20f874;
        case 0x20f878u: goto label_20f878;
        case 0x20f87cu: goto label_20f87c;
        case 0x20f880u: goto label_20f880;
        case 0x20f884u: goto label_20f884;
        case 0x20f888u: goto label_20f888;
        case 0x20f88cu: goto label_20f88c;
        case 0x20f890u: goto label_20f890;
        case 0x20f894u: goto label_20f894;
        case 0x20f898u: goto label_20f898;
        case 0x20f89cu: goto label_20f89c;
        case 0x20f8a0u: goto label_20f8a0;
        case 0x20f8a4u: goto label_20f8a4;
        case 0x20f8a8u: goto label_20f8a8;
        case 0x20f8acu: goto label_20f8ac;
        case 0x20f8b0u: goto label_20f8b0;
        case 0x20f8b4u: goto label_20f8b4;
        case 0x20f8b8u: goto label_20f8b8;
        case 0x20f8bcu: goto label_20f8bc;
        case 0x20f8c0u: goto label_20f8c0;
        case 0x20f8c4u: goto label_20f8c4;
        case 0x20f8c8u: goto label_20f8c8;
        case 0x20f8ccu: goto label_20f8cc;
        case 0x20f8d0u: goto label_20f8d0;
        case 0x20f8d4u: goto label_20f8d4;
        case 0x20f8d8u: goto label_20f8d8;
        case 0x20f8dcu: goto label_20f8dc;
        case 0x20f8e0u: goto label_20f8e0;
        case 0x20f8e4u: goto label_20f8e4;
        case 0x20f8e8u: goto label_20f8e8;
        case 0x20f8ecu: goto label_20f8ec;
        case 0x20f8f0u: goto label_20f8f0;
        case 0x20f8f4u: goto label_20f8f4;
        case 0x20f8f8u: goto label_20f8f8;
        case 0x20f8fcu: goto label_20f8fc;
        case 0x20f900u: goto label_20f900;
        case 0x20f904u: goto label_20f904;
        case 0x20f908u: goto label_20f908;
        case 0x20f90cu: goto label_20f90c;
        case 0x20f910u: goto label_20f910;
        case 0x20f914u: goto label_20f914;
        case 0x20f918u: goto label_20f918;
        case 0x20f91cu: goto label_20f91c;
        case 0x20f920u: goto label_20f920;
        case 0x20f924u: goto label_20f924;
        case 0x20f928u: goto label_20f928;
        case 0x20f92cu: goto label_20f92c;
        case 0x20f930u: goto label_20f930;
        case 0x20f934u: goto label_20f934;
        case 0x20f938u: goto label_20f938;
        case 0x20f93cu: goto label_20f93c;
        case 0x20f940u: goto label_20f940;
        case 0x20f944u: goto label_20f944;
        case 0x20f948u: goto label_20f948;
        case 0x20f94cu: goto label_20f94c;
        case 0x20f950u: goto label_20f950;
        case 0x20f954u: goto label_20f954;
        case 0x20f958u: goto label_20f958;
        case 0x20f95cu: goto label_20f95c;
        case 0x20f960u: goto label_20f960;
        case 0x20f964u: goto label_20f964;
        case 0x20f968u: goto label_20f968;
        case 0x20f96cu: goto label_20f96c;
        case 0x20f970u: goto label_20f970;
        case 0x20f974u: goto label_20f974;
        case 0x20f978u: goto label_20f978;
        case 0x20f97cu: goto label_20f97c;
        case 0x20f980u: goto label_20f980;
        case 0x20f984u: goto label_20f984;
        case 0x20f988u: goto label_20f988;
        case 0x20f98cu: goto label_20f98c;
        case 0x20f990u: goto label_20f990;
        case 0x20f994u: goto label_20f994;
        case 0x20f998u: goto label_20f998;
        case 0x20f99cu: goto label_20f99c;
        case 0x20f9a0u: goto label_20f9a0;
        case 0x20f9a4u: goto label_20f9a4;
        case 0x20f9a8u: goto label_20f9a8;
        case 0x20f9acu: goto label_20f9ac;
        case 0x20f9b0u: goto label_20f9b0;
        case 0x20f9b4u: goto label_20f9b4;
        case 0x20f9b8u: goto label_20f9b8;
        case 0x20f9bcu: goto label_20f9bc;
        case 0x20f9c0u: goto label_20f9c0;
        case 0x20f9c4u: goto label_20f9c4;
        case 0x20f9c8u: goto label_20f9c8;
        case 0x20f9ccu: goto label_20f9cc;
        case 0x20f9d0u: goto label_20f9d0;
        case 0x20f9d4u: goto label_20f9d4;
        case 0x20f9d8u: goto label_20f9d8;
        case 0x20f9dcu: goto label_20f9dc;
        case 0x20f9e0u: goto label_20f9e0;
        case 0x20f9e4u: goto label_20f9e4;
        case 0x20f9e8u: goto label_20f9e8;
        case 0x20f9ecu: goto label_20f9ec;
        case 0x20f9f0u: goto label_20f9f0;
        case 0x20f9f4u: goto label_20f9f4;
        case 0x20f9f8u: goto label_20f9f8;
        case 0x20f9fcu: goto label_20f9fc;
        case 0x20fa00u: goto label_20fa00;
        case 0x20fa04u: goto label_20fa04;
        case 0x20fa08u: goto label_20fa08;
        case 0x20fa0cu: goto label_20fa0c;
        case 0x20fa10u: goto label_20fa10;
        case 0x20fa14u: goto label_20fa14;
        case 0x20fa18u: goto label_20fa18;
        case 0x20fa1cu: goto label_20fa1c;
        case 0x20fa20u: goto label_20fa20;
        case 0x20fa24u: goto label_20fa24;
        case 0x20fa28u: goto label_20fa28;
        case 0x20fa2cu: goto label_20fa2c;
        case 0x20fa30u: goto label_20fa30;
        case 0x20fa34u: goto label_20fa34;
        case 0x20fa38u: goto label_20fa38;
        case 0x20fa3cu: goto label_20fa3c;
        case 0x20fa40u: goto label_20fa40;
        case 0x20fa44u: goto label_20fa44;
        case 0x20fa48u: goto label_20fa48;
        case 0x20fa4cu: goto label_20fa4c;
        case 0x20fa50u: goto label_20fa50;
        case 0x20fa54u: goto label_20fa54;
        case 0x20fa58u: goto label_20fa58;
        case 0x20fa5cu: goto label_20fa5c;
        case 0x20fa60u: goto label_20fa60;
        case 0x20fa64u: goto label_20fa64;
        case 0x20fa68u: goto label_20fa68;
        case 0x20fa6cu: goto label_20fa6c;
        case 0x20fa70u: goto label_20fa70;
        case 0x20fa74u: goto label_20fa74;
        case 0x20fa78u: goto label_20fa78;
        case 0x20fa7cu: goto label_20fa7c;
        case 0x20fa80u: goto label_20fa80;
        case 0x20fa84u: goto label_20fa84;
        case 0x20fa88u: goto label_20fa88;
        case 0x20fa8cu: goto label_20fa8c;
        case 0x20fa90u: goto label_20fa90;
        case 0x20fa94u: goto label_20fa94;
        case 0x20fa98u: goto label_20fa98;
        case 0x20fa9cu: goto label_20fa9c;
        case 0x20faa0u: goto label_20faa0;
        case 0x20faa4u: goto label_20faa4;
        case 0x20faa8u: goto label_20faa8;
        case 0x20faacu: goto label_20faac;
        case 0x20fab0u: goto label_20fab0;
        case 0x20fab4u: goto label_20fab4;
        case 0x20fab8u: goto label_20fab8;
        case 0x20fabcu: goto label_20fabc;
        case 0x20fac0u: goto label_20fac0;
        case 0x20fac4u: goto label_20fac4;
        case 0x20fac8u: goto label_20fac8;
        case 0x20faccu: goto label_20facc;
        case 0x20fad0u: goto label_20fad0;
        case 0x20fad4u: goto label_20fad4;
        case 0x20fad8u: goto label_20fad8;
        case 0x20fadcu: goto label_20fadc;
        case 0x20fae0u: goto label_20fae0;
        case 0x20fae4u: goto label_20fae4;
        case 0x20fae8u: goto label_20fae8;
        case 0x20faecu: goto label_20faec;
        case 0x20faf0u: goto label_20faf0;
        case 0x20faf4u: goto label_20faf4;
        case 0x20faf8u: goto label_20faf8;
        case 0x20fafcu: goto label_20fafc;
        case 0x20fb00u: goto label_20fb00;
        case 0x20fb04u: goto label_20fb04;
        case 0x20fb08u: goto label_20fb08;
        case 0x20fb0cu: goto label_20fb0c;
        case 0x20fb10u: goto label_20fb10;
        case 0x20fb14u: goto label_20fb14;
        case 0x20fb18u: goto label_20fb18;
        case 0x20fb1cu: goto label_20fb1c;
        case 0x20fb20u: goto label_20fb20;
        case 0x20fb24u: goto label_20fb24;
        case 0x20fb28u: goto label_20fb28;
        case 0x20fb2cu: goto label_20fb2c;
        case 0x20fb30u: goto label_20fb30;
        case 0x20fb34u: goto label_20fb34;
        case 0x20fb38u: goto label_20fb38;
        case 0x20fb3cu: goto label_20fb3c;
        case 0x20fb40u: goto label_20fb40;
        case 0x20fb44u: goto label_20fb44;
        case 0x20fb48u: goto label_20fb48;
        case 0x20fb4cu: goto label_20fb4c;
        case 0x20fb50u: goto label_20fb50;
        case 0x20fb54u: goto label_20fb54;
        case 0x20fb58u: goto label_20fb58;
        case 0x20fb5cu: goto label_20fb5c;
        case 0x20fb60u: goto label_20fb60;
        case 0x20fb64u: goto label_20fb64;
        case 0x20fb68u: goto label_20fb68;
        case 0x20fb6cu: goto label_20fb6c;
        case 0x20fb70u: goto label_20fb70;
        case 0x20fb74u: goto label_20fb74;
        case 0x20fb78u: goto label_20fb78;
        case 0x20fb7cu: goto label_20fb7c;
        case 0x20fb80u: goto label_20fb80;
        case 0x20fb84u: goto label_20fb84;
        case 0x20fb88u: goto label_20fb88;
        case 0x20fb8cu: goto label_20fb8c;
        case 0x20fb90u: goto label_20fb90;
        case 0x20fb94u: goto label_20fb94;
        case 0x20fb98u: goto label_20fb98;
        case 0x20fb9cu: goto label_20fb9c;
        case 0x20fba0u: goto label_20fba0;
        case 0x20fba4u: goto label_20fba4;
        case 0x20fba8u: goto label_20fba8;
        case 0x20fbacu: goto label_20fbac;
        case 0x20fbb0u: goto label_20fbb0;
        case 0x20fbb4u: goto label_20fbb4;
        case 0x20fbb8u: goto label_20fbb8;
        case 0x20fbbcu: goto label_20fbbc;
        case 0x20fbc0u: goto label_20fbc0;
        case 0x20fbc4u: goto label_20fbc4;
        default: return;
    }

label_20f3f8:
    // 0x20f3f8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x20f3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_20f3fc:
    // 0x20f3fc: 0x12020005  beq         $s0, $v0, . + 4 + (0x5 << 2)
label_20f400:
    if (ctx->pc == 0x20F400u) {
        ctx->pc = 0x20F400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F3FCu;
        // 0x20f400: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F404u;
        goto label_20f404;
    }
    ctx->pc = 0x20F3FCu;
    {
        const bool branch_taken_0x20f3fc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x20F400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F3FCu;
        // 0x20f400: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f3fc) {
            ctx->pc = 0x20F414u;
            goto label_20f414;
        }
    }
    ctx->pc = 0x20F404u;
label_20f404:
    // 0x20f404: 0x12020003  beq         $s0, $v0, . + 4 + (0x3 << 2)
label_20f408:
    if (ctx->pc == 0x20F408u) {
        ctx->pc = 0x20F40Cu;
        goto label_20f40c;
    }
    ctx->pc = 0x20F404u;
    {
        const bool branch_taken_0x20f404 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x20f404) {
            ctx->pc = 0x20F414u;
            goto label_20f414;
        }
    }
    ctx->pc = 0x20F40Cu;
label_20f40c:
    // 0x20f40c: 0x10000021  b           . + 4 + (0x21 << 2)
label_20f410:
    if (ctx->pc == 0x20F410u) {
        ctx->pc = 0x20F410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F40Cu;
        // 0x20f410: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F414u;
        goto label_20f414;
    }
    ctx->pc = 0x20F40Cu;
    {
        const bool branch_taken_0x20f40c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F40Cu;
        // 0x20f410: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f40c) {
            ctx->pc = 0x20F494u;
            goto label_20f494;
        }
    }
    ctx->pc = 0x20F414u;
label_20f414:
    // 0x20f414: 0x2610fffd  addiu       $s0, $s0, -0x3
    ctx->pc = 0x20f414u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967293));
label_20f418:
    // 0x20f418: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x20f418u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_20f41c:
    // 0x20f41c: 0x34424050  ori         $v0, $v0, 0x4050
    ctx->pc = 0x20f41cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16464);
label_20f420:
    // 0x20f420: 0x10082a  slt         $at, $zero, $s0
    ctx->pc = 0x20f420u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_20f424:
    // 0x20f424: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x20f424u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20f428:
    // 0x20f428: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
label_20f42c:
    if (ctx->pc == 0x20F42Cu) {
        ctx->pc = 0x20F42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F428u;
        // 0x20f42c: 0x2222021  addu        $a0, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F430u;
        goto label_20f430;
    }
    ctx->pc = 0x20F428u;
    {
        const bool branch_taken_0x20f428 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F428u;
        // 0x20f42c: 0x2222021  addu        $a0, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f428) {
            ctx->pc = 0x20F45Cu;
            goto label_20f45c;
        }
    }
    ctx->pc = 0x20F430u;
label_20f430:
    // 0x20f430: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x20f430u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
label_20f434:
    // 0x20f434: 0x3c060021  lui         $a2, 0x21
    ctx->pc = 0x20f434u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)33 << 16));
label_20f438:
    // 0x20f438: 0x24a57560  addiu       $a1, $a1, 0x7560
    ctx->pc = 0x20f438u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30048));
label_20f43c:
    // 0x20f43c: 0x24c62370  addiu       $a2, $a2, 0x2370
    ctx->pc = 0x20f43cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 9072));
label_20f440:
    // 0x20f440: 0xc084878  jal         func_2121E0
label_20f444:
    if (ctx->pc == 0x20F444u) {
        ctx->pc = 0x20F444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F440u;
        // 0x20f444: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F448u;
        goto label_20f448;
    }
    ctx->pc = 0x20F440u;
    SET_GPR_U32(ctx, 31, 0x20F448u);
    ctx->pc = 0x20F444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F440u;
    // 0x20f444: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2121E0u;
    { ctx->pc = 0x2121e0; return; }
    ctx->pc = 0x20F448u;
label_20f448:
    // 0x20f448: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x20f448u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20f44c:
    // 0x20f44c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x20f44cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_20f450:
    // 0x20f450: 0x250102a  slt         $v0, $s2, $s0
    ctx->pc = 0x20f450u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_20f454:
    // 0x20f454: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
label_20f458:
    if (ctx->pc == 0x20F458u) {
        ctx->pc = 0x20F45Cu;
        goto label_20f45c;
    }
    ctx->pc = 0x20F454u;
    {
        const bool branch_taken_0x20f454 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20f454) {
            ctx->pc = 0x20F430u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20f430;
        }
    }
    ctx->pc = 0x20F45Cu;
label_20f45c:
    // 0x20f45c: 0x0  nop
    ctx->pc = 0x20f45cu;
    // NOP
label_20f460:
    // 0x20f460: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x20f460u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
label_20f464:
    // 0x20f464: 0x3c060021  lui         $a2, 0x21
    ctx->pc = 0x20f464u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)33 << 16));
label_20f468:
    // 0x20f468: 0x24a57560  addiu       $a1, $a1, 0x7560
    ctx->pc = 0x20f468u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30048));
label_20f46c:
    // 0x20f46c: 0x24c62380  addiu       $a2, $a2, 0x2380
    ctx->pc = 0x20f46cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 9088));
label_20f470:
    // 0x20f470: 0xc084878  jal         func_2121E0
label_20f474:
    if (ctx->pc == 0x20F474u) {
        ctx->pc = 0x20F474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F470u;
        // 0x20f474: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F478u;
        goto label_20f478;
    }
    ctx->pc = 0x20F470u;
    SET_GPR_U32(ctx, 31, 0x20F478u);
    ctx->pc = 0x20F474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F470u;
    // 0x20f474: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2121E0u;
    { ctx->pc = 0x2121e0; return; }
    ctx->pc = 0x20F478u;
label_20f478:
    // 0x20f478: 0x10000005  b           . + 4 + (0x5 << 2)
label_20f47c:
    if (ctx->pc == 0x20F47Cu) {
        ctx->pc = 0x20F47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F478u;
        // 0x20f47c: 0xae2030d4  sw          $zero, 0x30D4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12500), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F480u;
        goto label_20f480;
    }
    ctx->pc = 0x20F478u;
    {
        const bool branch_taken_0x20f478 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F478u;
        // 0x20f47c: 0xae2030d4  sw          $zero, 0x30D4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12500), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f478) {
            ctx->pc = 0x20F490u;
            goto label_20f490;
        }
    }
    ctx->pc = 0x20F480u;
label_20f480:
    // 0x20f480: 0x10000003  b           . + 4 + (0x3 << 2)
label_20f484:
    if (ctx->pc == 0x20F484u) {
        ctx->pc = 0x20F484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F480u;
        // 0x20f484: 0xae2030d4  sw          $zero, 0x30D4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12500), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F488u;
        goto label_20f488;
    }
    ctx->pc = 0x20F480u;
    {
        const bool branch_taken_0x20f480 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F480u;
        // 0x20f484: 0xae2030d4  sw          $zero, 0x30D4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12500), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f480) {
            ctx->pc = 0x20F490u;
            goto label_20f490;
        }
    }
    ctx->pc = 0x20F488u;
label_20f488:
    // 0x20f488: 0xc0840e4  jal         func_210390
label_20f48c:
    if (ctx->pc == 0x20F48Cu) {
        ctx->pc = 0x20F490u;
        goto label_20f490;
    }
    ctx->pc = 0x20F488u;
    SET_GPR_U32(ctx, 31, 0x20F490u);
    ctx->pc = 0x210390u;
    { ctx->pc = 0x210390; return; }
    ctx->pc = 0x20F490u;
label_20f490:
    // 0x20f490: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x20f490u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_20f494:
    // 0x20f494: 0xc083d30  jal         func_20F4C0
label_20f498:
    if (ctx->pc == 0x20F498u) {
        ctx->pc = 0x20F498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F494u;
        // 0x20f498: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F49Cu;
        goto label_20f49c;
    }
    ctx->pc = 0x20F494u;
    SET_GPR_U32(ctx, 31, 0x20F49Cu);
    ctx->pc = 0x20F498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F494u;
    // 0x20f498: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20F4C0u;
    goto label_20f4c0;
    ctx->pc = 0x20F49Cu;
label_20f49c:
    // 0x20f49c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x20f49cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_20f4a0:
    // 0x20f4a0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x20f4a0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_20f4a4:
    // 0x20f4a4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x20f4a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_20f4a8:
    // 0x20f4a8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x20f4a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_20f4ac:
    // 0x20f4ac: 0x3e00008  jr          $ra
label_20f4b0:
    if (ctx->pc == 0x20F4B0u) {
        ctx->pc = 0x20F4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F4ACu;
        // 0x20f4b0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F4B4u;
        goto label_20f4b4;
    }
    ctx->pc = 0x20F4ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20F4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F4ACu;
        // 0x20f4b0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20F4ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20F4B4u;
label_20f4b4:
    // 0x20f4b4: 0x0  nop
    ctx->pc = 0x20f4b4u;
    // NOP
label_20f4b8:
    // 0x20f4b8: 0x0  nop
    ctx->pc = 0x20f4b8u;
    // NOP
label_20f4bc:
    // 0x20f4bc: 0x0  nop
    ctx->pc = 0x20f4bcu;
    // NOP
label_20f4c0:
    // 0x20f4c0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x20f4c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_20f4c4:
    // 0x20f4c4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x20f4c4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20f4c8:
    // 0x20f4c8: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x20f4c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_20f4cc:
    // 0x20f4cc: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x20f4ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_20f4d0:
    // 0x20f4d0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x20f4d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_20f4d4:
    // 0x20f4d4: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x20f4d4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20f4d8:
    // 0x20f4d8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x20f4d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_20f4dc:
    // 0x20f4dc: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x20f4dcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20f4e0:
    // 0x20f4e0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x20f4e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_20f4e4:
    // 0x20f4e4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x20f4e4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20f4e8:
    // 0x20f4e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x20f4e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_20f4ec:
    // 0x20f4ec: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x20f4ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20f4f0:
    // 0x20f4f0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x20f4f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_20f4f4:
    // 0x20f4f4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x20f4f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20f4f8:
    // 0x20f4f8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x20f4f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_20f4fc:
    // 0x20f4fc: 0x260b000c  addiu       $t3, $s0, 0xC
    ctx->pc = 0x20f4fcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_20f500:
    // 0x20f500: 0x91640000  lbu         $a0, 0x0($t3)
    ctx->pc = 0x20f500u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 0)));
label_20f504:
    // 0x20f504: 0x254a0008  addiu       $t2, $t2, 0x8
    ctx->pc = 0x20f504u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 8));
label_20f508:
    // 0x20f508: 0x91630001  lbu         $v1, 0x1($t3)
    ctx->pc = 0x20f508u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 1)));
label_20f50c:
    // 0x20f50c: 0x294230c8  slti        $v0, $t2, 0x30C8
    ctx->pc = 0x20f50cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)12488) ? 1 : 0);
label_20f510:
    // 0x20f510: 0x91690002  lbu         $t1, 0x2($t3)
    ctx->pc = 0x20f510u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 2)));
label_20f514:
    // 0x20f514: 0x91680003  lbu         $t0, 0x3($t3)
    ctx->pc = 0x20f514u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 3)));
label_20f518:
    // 0x20f518: 0x91670004  lbu         $a3, 0x4($t3)
    ctx->pc = 0x20f518u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 4)));
label_20f51c:
    // 0x20f51c: 0x91660005  lbu         $a2, 0x5($t3)
    ctx->pc = 0x20f51cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 5)));
label_20f520:
    // 0x20f520: 0x2248821  addu        $s1, $s1, $a0
    ctx->pc = 0x20f520u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
label_20f524:
    // 0x20f524: 0x2238821  addu        $s1, $s1, $v1
    ctx->pc = 0x20f524u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_20f528:
    // 0x20f528: 0x91640006  lbu         $a0, 0x6($t3)
    ctx->pc = 0x20f528u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 6)));
label_20f52c:
    // 0x20f52c: 0x91630007  lbu         $v1, 0x7($t3)
    ctx->pc = 0x20f52cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 7)));
label_20f530:
    // 0x20f530: 0x2298821  addu        $s1, $s1, $t1
    ctx->pc = 0x20f530u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 9)));
label_20f534:
    // 0x20f534: 0x2288821  addu        $s1, $s1, $t0
    ctx->pc = 0x20f534u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 8)));
label_20f538:
    // 0x20f538: 0x2278821  addu        $s1, $s1, $a3
    ctx->pc = 0x20f538u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
label_20f53c:
    // 0x20f53c: 0x2268821  addu        $s1, $s1, $a2
    ctx->pc = 0x20f53cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
label_20f540:
    // 0x20f540: 0x2248821  addu        $s1, $s1, $a0
    ctx->pc = 0x20f540u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
label_20f544:
    // 0x20f544: 0x2238821  addu        $s1, $s1, $v1
    ctx->pc = 0x20f544u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_20f548:
    // 0x20f548: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
label_20f54c:
    if (ctx->pc == 0x20F54Cu) {
        ctx->pc = 0x20F54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F548u;
        // 0x20f54c: 0x256b0008  addiu       $t3, $t3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F550u;
        goto label_20f550;
    }
    ctx->pc = 0x20F548u;
    {
        const bool branch_taken_0x20f548 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20F54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F548u;
        // 0x20f54c: 0x256b0008  addiu       $t3, $t3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f548) {
            ctx->pc = 0x20F500u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20f500;
        }
    }
    ctx->pc = 0x20F550u;
label_20f550:
    // 0x20f550: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x20f550u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
label_20f554:
    // 0x20f554: 0x260230d4  addiu       $v0, $s0, 0x30D4
    ctx->pc = 0x20f554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 12500));
label_20f558:
    // 0x20f558: 0x34860f7c  ori         $a2, $a0, 0xF7C
    ctx->pc = 0x20f558u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)3964);
label_20f55c:
    // 0x20f55c: 0x28c10009  slti        $at, $a2, 0x9
    ctx->pc = 0x20f55cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)9) ? 1 : 0);
label_20f560:
    // 0x20f560: 0x14200016  bnez        $at, . + 4 + (0x16 << 2)
label_20f564:
    if (ctx->pc == 0x20F564u) {
        ctx->pc = 0x20F564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F560u;
        // 0x20f564: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F568u;
        goto label_20f568;
    }
    ctx->pc = 0x20F560u;
    {
        const bool branch_taken_0x20f560 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x20F564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F560u;
        // 0x20f564: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f560) {
            ctx->pc = 0x20F5BCu;
            goto label_20f5bc;
        }
    }
    ctx->pc = 0x20F568u;
label_20f568:
    // 0x20f568: 0x34860f74  ori         $a2, $a0, 0xF74
    ctx->pc = 0x20f568u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)3956);
label_20f56c:
    // 0x20f56c: 0x90480000  lbu         $t0, 0x0($v0)
    ctx->pc = 0x20f56cu;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_20f570:
    // 0x20f570: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x20f570u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
label_20f574:
    // 0x20f574: 0x90470001  lbu         $a3, 0x1($v0)
    ctx->pc = 0x20f574u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_20f578:
    // 0x20f578: 0x66202a  slt         $a0, $v1, $a2
    ctx->pc = 0x20f578u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_20f57c:
    // 0x20f57c: 0x904c0002  lbu         $t4, 0x2($v0)
    ctx->pc = 0x20f57cu;
    SET_GPR_ZE32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
label_20f580:
    // 0x20f580: 0x904b0003  lbu         $t3, 0x3($v0)
    ctx->pc = 0x20f580u;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
label_20f584:
    // 0x20f584: 0x904a0004  lbu         $t2, 0x4($v0)
    ctx->pc = 0x20f584u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4)));
label_20f588:
    // 0x20f588: 0x90490005  lbu         $t1, 0x5($v0)
    ctx->pc = 0x20f588u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 5)));
label_20f58c:
    // 0x20f58c: 0x2489021  addu        $s2, $s2, $t0
    ctx->pc = 0x20f58cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 8)));
label_20f590:
    // 0x20f590: 0x2479021  addu        $s2, $s2, $a3
    ctx->pc = 0x20f590u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 7)));
label_20f594:
    // 0x20f594: 0x90480006  lbu         $t0, 0x6($v0)
    ctx->pc = 0x20f594u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 6)));
label_20f598:
    // 0x20f598: 0x90470007  lbu         $a3, 0x7($v0)
    ctx->pc = 0x20f598u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 7)));
label_20f59c:
    // 0x20f59c: 0x24c9021  addu        $s2, $s2, $t4
    ctx->pc = 0x20f59cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 12)));
label_20f5a0:
    // 0x20f5a0: 0x24b9021  addu        $s2, $s2, $t3
    ctx->pc = 0x20f5a0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 11)));
label_20f5a4:
    // 0x20f5a4: 0x24a9021  addu        $s2, $s2, $t2
    ctx->pc = 0x20f5a4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 10)));
label_20f5a8:
    // 0x20f5a8: 0x2499021  addu        $s2, $s2, $t1
    ctx->pc = 0x20f5a8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 9)));
label_20f5ac:
    // 0x20f5ac: 0x2489021  addu        $s2, $s2, $t0
    ctx->pc = 0x20f5acu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 8)));
label_20f5b0:
    // 0x20f5b0: 0x2479021  addu        $s2, $s2, $a3
    ctx->pc = 0x20f5b0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 7)));
label_20f5b4:
    // 0x20f5b4: 0x1480ffed  bnez        $a0, . + 4 + (-0x13 << 2)
label_20f5b8:
    if (ctx->pc == 0x20F5B8u) {
        ctx->pc = 0x20F5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F5B4u;
        // 0x20f5b8: 0x24420008  addiu       $v0, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F5BCu;
        goto label_20f5bc;
    }
    ctx->pc = 0x20F5B4u;
    {
        const bool branch_taken_0x20f5b4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x20F5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F5B4u;
        // 0x20f5b8: 0x24420008  addiu       $v0, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f5b4) {
            ctx->pc = 0x20F56Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20f56c;
        }
    }
    ctx->pc = 0x20F5BCu;
label_20f5bc:
    // 0x20f5bc: 0x0  nop
    ctx->pc = 0x20f5bcu;
    // NOP
label_20f5c0:
    // 0x20f5c0: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x20f5c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_20f5c4:
    // 0x20f5c4: 0x34210f7c  ori         $at, $at, 0xF7C
    ctx->pc = 0x20f5c4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)3964);
label_20f5c8:
    // 0x20f5c8: 0x61082a  slt         $at, $v1, $at
    ctx->pc = 0x20f5c8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
label_20f5cc:
    // 0x20f5cc: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
label_20f5d0:
    if (ctx->pc == 0x20F5D0u) {
        ctx->pc = 0x20F5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F5CCu;
        // 0x20f5d0: 0x3c040001  lui         $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F5D4u;
        goto label_20f5d4;
    }
    ctx->pc = 0x20F5CCu;
    {
        const bool branch_taken_0x20f5cc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F5CCu;
        // 0x20f5d0: 0x3c040001  lui         $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f5cc) {
            ctx->pc = 0x20F5F8u;
            goto label_20f5f8;
        }
    }
    ctx->pc = 0x20F5D4u;
label_20f5d4:
    // 0x20f5d4: 0x34860f7c  ori         $a2, $a0, 0xF7C
    ctx->pc = 0x20f5d4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)3964);
label_20f5d8:
    // 0x20f5d8: 0x90470000  lbu         $a3, 0x0($v0)
    ctx->pc = 0x20f5d8u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_20f5dc:
    // 0x20f5dc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x20f5dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_20f5e0:
    // 0x20f5e0: 0x66202a  slt         $a0, $v1, $a2
    ctx->pc = 0x20f5e0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_20f5e4:
    // 0x20f5e4: 0x2479021  addu        $s2, $s2, $a3
    ctx->pc = 0x20f5e4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 7)));
label_20f5e8:
    // 0x20f5e8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x20f5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_20f5ec:
    // 0x20f5ec: 0x0  nop
    ctx->pc = 0x20f5ecu;
    // NOP
label_20f5f0:
    // 0x20f5f0: 0x1480fff9  bnez        $a0, . + 4 + (-0x7 << 2)
label_20f5f4:
    if (ctx->pc == 0x20F5F4u) {
        ctx->pc = 0x20F5F8u;
        goto label_20f5f8;
    }
    ctx->pc = 0x20F5F0u;
    {
        const bool branch_taken_0x20f5f0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x20f5f0) {
            ctx->pc = 0x20F5D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20f5d8;
        }
    }
    ctx->pc = 0x20F5F8u;
label_20f5f8:
    // 0x20f5f8: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x20f5f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_20f5fc:
    // 0x20f5fc: 0x34214050  ori         $at, $at, 0x4050
    ctx->pc = 0x20f5fcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)16464);
label_20f600:
    // 0x20f600: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x20f600u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20f604:
    // 0x20f604: 0x2015021  addu        $t2, $s0, $at
    ctx->pc = 0x20f604u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
label_20f608:
    // 0x20f608: 0x91440000  lbu         $a0, 0x0($t2)
    ctx->pc = 0x20f608u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
label_20f60c:
    // 0x20f60c: 0x256b0008  addiu       $t3, $t3, 0x8
    ctx->pc = 0x20f60cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 8));
label_20f610:
    // 0x20f610: 0x91430001  lbu         $v1, 0x1($t2)
    ctx->pc = 0x20f610u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 1)));
label_20f614:
    // 0x20f614: 0x296204bc  slti        $v0, $t3, 0x4BC
    ctx->pc = 0x20f614u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 11) < (int64_t)(int32_t)1212) ? 1 : 0);
label_20f618:
    // 0x20f618: 0x91490002  lbu         $t1, 0x2($t2)
    ctx->pc = 0x20f618u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 2)));
label_20f61c:
    // 0x20f61c: 0x91480003  lbu         $t0, 0x3($t2)
    ctx->pc = 0x20f61cu;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 3)));
label_20f620:
    // 0x20f620: 0x91470004  lbu         $a3, 0x4($t2)
    ctx->pc = 0x20f620u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 4)));
label_20f624:
    // 0x20f624: 0x91460005  lbu         $a2, 0x5($t2)
    ctx->pc = 0x20f624u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 5)));
label_20f628:
    // 0x20f628: 0x2649821  addu        $s3, $s3, $a0
    ctx->pc = 0x20f628u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
label_20f62c:
    // 0x20f62c: 0x2639821  addu        $s3, $s3, $v1
    ctx->pc = 0x20f62cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
label_20f630:
    // 0x20f630: 0x91440006  lbu         $a0, 0x6($t2)
    ctx->pc = 0x20f630u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 6)));
label_20f634:
    // 0x20f634: 0x91430007  lbu         $v1, 0x7($t2)
    ctx->pc = 0x20f634u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 7)));
label_20f638:
    // 0x20f638: 0x2699821  addu        $s3, $s3, $t1
    ctx->pc = 0x20f638u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 9)));
label_20f63c:
    // 0x20f63c: 0x2689821  addu        $s3, $s3, $t0
    ctx->pc = 0x20f63cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 8)));
label_20f640:
    // 0x20f640: 0x2679821  addu        $s3, $s3, $a3
    ctx->pc = 0x20f640u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 7)));
label_20f644:
    // 0x20f644: 0x2669821  addu        $s3, $s3, $a2
    ctx->pc = 0x20f644u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 6)));
label_20f648:
    // 0x20f648: 0x2649821  addu        $s3, $s3, $a0
    ctx->pc = 0x20f648u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
label_20f64c:
    // 0x20f64c: 0x2639821  addu        $s3, $s3, $v1
    ctx->pc = 0x20f64cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
label_20f650:
    // 0x20f650: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
label_20f654:
    if (ctx->pc == 0x20F654u) {
        ctx->pc = 0x20F654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F650u;
        // 0x20f654: 0x254a0008  addiu       $t2, $t2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F658u;
        goto label_20f658;
    }
    ctx->pc = 0x20F650u;
    {
        const bool branch_taken_0x20f650 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20F654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F650u;
        // 0x20f654: 0x254a0008  addiu       $t2, $t2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f650) {
            ctx->pc = 0x20F608u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20f608;
        }
    }
    ctx->pc = 0x20F658u;
label_20f658:
    // 0x20f658: 0x296104c4  slti        $at, $t3, 0x4C4
    ctx->pc = 0x20f658u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 11) < (int64_t)(int32_t)1220) ? 1 : 0);
label_20f65c:
    // 0x20f65c: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
label_20f660:
    if (ctx->pc == 0x20F660u) {
        ctx->pc = 0x20F664u;
        goto label_20f664;
    }
    ctx->pc = 0x20F65Cu;
    {
        const bool branch_taken_0x20f65c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x20f65c) {
            ctx->pc = 0x20F684u;
            goto label_20f684;
        }
    }
    ctx->pc = 0x20F664u;
label_20f664:
    // 0x20f664: 0x91430000  lbu         $v1, 0x0($t2)
    ctx->pc = 0x20f664u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
label_20f668:
    // 0x20f668: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x20f668u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
label_20f66c:
    // 0x20f66c: 0x296204c4  slti        $v0, $t3, 0x4C4
    ctx->pc = 0x20f66cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 11) < (int64_t)(int32_t)1220) ? 1 : 0);
label_20f670:
    // 0x20f670: 0x2639821  addu        $s3, $s3, $v1
    ctx->pc = 0x20f670u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
label_20f674:
    // 0x20f674: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x20f674u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_20f678:
    // 0x20f678: 0x0  nop
    ctx->pc = 0x20f678u;
    // NOP
label_20f67c:
    // 0x20f67c: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_20f680:
    if (ctx->pc == 0x20F680u) {
        ctx->pc = 0x20F684u;
        goto label_20f684;
    }
    ctx->pc = 0x20F67Cu;
    {
        const bool branch_taken_0x20f67c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20f67c) {
            ctx->pc = 0x20F664u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20f664;
        }
    }
    ctx->pc = 0x20F684u;
label_20f684:
    // 0x20f684: 0x0  nop
    ctx->pc = 0x20f684u;
    // NOP
label_20f688:
    // 0x20f688: 0x3404a284  ori         $a0, $zero, 0xA284
    ctx->pc = 0x20f688u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)41604);
label_20f68c:
    // 0x20f68c: 0x28810009  slti        $at, $a0, 0x9
    ctx->pc = 0x20f68cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)9) ? 1 : 0);
label_20f690:
    // 0x20f690: 0x2602000c  addiu       $v0, $s0, 0xC
    ctx->pc = 0x20f690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_20f694:
    // 0x20f694: 0x14200026  bnez        $at, . + 4 + (0x26 << 2)
label_20f698:
    if (ctx->pc == 0x20F698u) {
        ctx->pc = 0x20F698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F694u;
        // 0x20f698: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F69Cu;
        goto label_20f69c;
    }
    ctx->pc = 0x20F694u;
    {
        const bool branch_taken_0x20f694 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x20F698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F694u;
        // 0x20f698: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f694) {
            ctx->pc = 0x20F730u;
            goto label_20f730;
        }
    }
    ctx->pc = 0x20F69Cu;
label_20f69c:
    // 0x20f69c: 0x3406a27c  ori         $a2, $zero, 0xA27C
    ctx->pc = 0x20f69cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)41596);
label_20f6a0:
    // 0x20f6a0: 0x904a0000  lbu         $t2, 0x0($v0)
    ctx->pc = 0x20f6a0u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_20f6a4:
    // 0x20f6a4: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x20f6a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
label_20f6a8:
    // 0x20f6a8: 0x90490001  lbu         $t1, 0x1($v0)
    ctx->pc = 0x20f6a8u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_20f6ac:
    // 0x20f6ac: 0x66202a  slt         $a0, $v1, $a2
    ctx->pc = 0x20f6acu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_20f6b0:
    // 0x20f6b0: 0x90480002  lbu         $t0, 0x2($v0)
    ctx->pc = 0x20f6b0u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
label_20f6b4:
    // 0x20f6b4: 0x90470003  lbu         $a3, 0x3($v0)
    ctx->pc = 0x20f6b4u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
label_20f6b8:
    // 0x20f6b8: 0x904c0004  lbu         $t4, 0x4($v0)
    ctx->pc = 0x20f6b8u;
    SET_GPR_ZE32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4)));
label_20f6bc:
    // 0x20f6bc: 0x904b0005  lbu         $t3, 0x5($v0)
    ctx->pc = 0x20f6bcu;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 5)));
label_20f6c0:
    // 0x20f6c0: 0x28aa021  addu        $s4, $s4, $t2
    ctx->pc = 0x20f6c0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 10)));
label_20f6c4:
    // 0x20f6c4: 0x2a9a821  addu        $s5, $s5, $t1
    ctx->pc = 0x20f6c4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 9)));
label_20f6c8:
    // 0x20f6c8: 0x904a0006  lbu         $t2, 0x6($v0)
    ctx->pc = 0x20f6c8u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 6)));
label_20f6cc:
    // 0x20f6cc: 0x288a021  addu        $s4, $s4, $t0
    ctx->pc = 0x20f6ccu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 8)));
label_20f6d0:
    // 0x20f6d0: 0x90490007  lbu         $t1, 0x7($v0)
    ctx->pc = 0x20f6d0u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 7)));
label_20f6d4:
    // 0x20f6d4: 0x2a7a821  addu        $s5, $s5, $a3
    ctx->pc = 0x20f6d4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 7)));
label_20f6d8:
    // 0x20f6d8: 0x90480008  lbu         $t0, 0x8($v0)
    ctx->pc = 0x20f6d8u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 8)));
label_20f6dc:
    // 0x20f6dc: 0x90470009  lbu         $a3, 0x9($v0)
    ctx->pc = 0x20f6dcu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 9)));
label_20f6e0:
    // 0x20f6e0: 0x28ca021  addu        $s4, $s4, $t4
    ctx->pc = 0x20f6e0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 12)));
label_20f6e4:
    // 0x20f6e4: 0x2aba821  addu        $s5, $s5, $t3
    ctx->pc = 0x20f6e4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 11)));
label_20f6e8:
    // 0x20f6e8: 0x904c000a  lbu         $t4, 0xA($v0)
    ctx->pc = 0x20f6e8u;
    SET_GPR_ZE32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 10)));
label_20f6ec:
    // 0x20f6ec: 0x904b000b  lbu         $t3, 0xB($v0)
    ctx->pc = 0x20f6ecu;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 11)));
label_20f6f0:
    // 0x20f6f0: 0x28aa021  addu        $s4, $s4, $t2
    ctx->pc = 0x20f6f0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 10)));
label_20f6f4:
    // 0x20f6f4: 0x2a9a821  addu        $s5, $s5, $t1
    ctx->pc = 0x20f6f4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 9)));
label_20f6f8:
    // 0x20f6f8: 0x904a000c  lbu         $t2, 0xC($v0)
    ctx->pc = 0x20f6f8u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 12)));
label_20f6fc:
    // 0x20f6fc: 0x288a021  addu        $s4, $s4, $t0
    ctx->pc = 0x20f6fcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 8)));
label_20f700:
    // 0x20f700: 0x9049000d  lbu         $t1, 0xD($v0)
    ctx->pc = 0x20f700u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 13)));
label_20f704:
    // 0x20f704: 0x2a7a821  addu        $s5, $s5, $a3
    ctx->pc = 0x20f704u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 7)));
label_20f708:
    // 0x20f708: 0x9048000e  lbu         $t0, 0xE($v0)
    ctx->pc = 0x20f708u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 14)));
label_20f70c:
    // 0x20f70c: 0x9047000f  lbu         $a3, 0xF($v0)
    ctx->pc = 0x20f70cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 15)));
label_20f710:
    // 0x20f710: 0x28ca021  addu        $s4, $s4, $t4
    ctx->pc = 0x20f710u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 12)));
label_20f714:
    // 0x20f714: 0x2aba821  addu        $s5, $s5, $t3
    ctx->pc = 0x20f714u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 11)));
label_20f718:
    // 0x20f718: 0x28aa021  addu        $s4, $s4, $t2
    ctx->pc = 0x20f718u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 10)));
label_20f71c:
    // 0x20f71c: 0x2a9a821  addu        $s5, $s5, $t1
    ctx->pc = 0x20f71cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 9)));
label_20f720:
    // 0x20f720: 0x288a021  addu        $s4, $s4, $t0
    ctx->pc = 0x20f720u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 8)));
label_20f724:
    // 0x20f724: 0x2a7a821  addu        $s5, $s5, $a3
    ctx->pc = 0x20f724u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 7)));
label_20f728:
    // 0x20f728: 0x1480ffdd  bnez        $a0, . + 4 + (-0x23 << 2)
label_20f72c:
    if (ctx->pc == 0x20F72Cu) {
        ctx->pc = 0x20F72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F728u;
        // 0x20f72c: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F730u;
        goto label_20f730;
    }
    ctx->pc = 0x20F728u;
    {
        const bool branch_taken_0x20f728 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x20F72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F728u;
        // 0x20f72c: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f728) {
            ctx->pc = 0x20F6A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20f6a0;
        }
    }
    ctx->pc = 0x20F730u;
label_20f730:
    // 0x20f730: 0x3401a284  ori         $at, $zero, 0xA284
    ctx->pc = 0x20f730u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)41604);
label_20f734:
    // 0x20f734: 0x61082a  slt         $at, $v1, $at
    ctx->pc = 0x20f734u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
label_20f738:
    // 0x20f738: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
label_20f73c:
    if (ctx->pc == 0x20F73Cu) {
        ctx->pc = 0x20F73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F738u;
        // 0x20f73c: 0x3406a284  ori         $a2, $zero, 0xA284 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)41604);
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F740u;
        goto label_20f740;
    }
    ctx->pc = 0x20F738u;
    {
        const bool branch_taken_0x20f738 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F738u;
        // 0x20f73c: 0x3406a284  ori         $a2, $zero, 0xA284 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)41604);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f738) {
            ctx->pc = 0x20F760u;
            goto label_20f760;
        }
    }
    ctx->pc = 0x20F740u;
label_20f740:
    // 0x20f740: 0x90480000  lbu         $t0, 0x0($v0)
    ctx->pc = 0x20f740u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_20f744:
    // 0x20f744: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x20f744u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_20f748:
    // 0x20f748: 0x90470001  lbu         $a3, 0x1($v0)
    ctx->pc = 0x20f748u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_20f74c:
    // 0x20f74c: 0x66202a  slt         $a0, $v1, $a2
    ctx->pc = 0x20f74cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_20f750:
    // 0x20f750: 0x288a021  addu        $s4, $s4, $t0
    ctx->pc = 0x20f750u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 8)));
label_20f754:
    // 0x20f754: 0x2a7a821  addu        $s5, $s5, $a3
    ctx->pc = 0x20f754u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 7)));
label_20f758:
    // 0x20f758: 0x1480fff9  bnez        $a0, . + 4 + (-0x7 << 2)
label_20f75c:
    if (ctx->pc == 0x20F75Cu) {
        ctx->pc = 0x20F75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F758u;
        // 0x20f75c: 0x24420002  addiu       $v0, $v0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F760u;
        goto label_20f760;
    }
    ctx->pc = 0x20F758u;
    {
        const bool branch_taken_0x20f758 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x20F75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F758u;
        // 0x20f75c: 0x24420002  addiu       $v0, $v0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f758) {
            ctx->pc = 0x20F740u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20f740;
        }
    }
    ctx->pc = 0x20F760u;
label_20f760:
    // 0x20f760: 0x14a0001d  bnez        $a1, . + 4 + (0x1D << 2)
label_20f764:
    if (ctx->pc == 0x20F764u) {
        ctx->pc = 0x20F764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F760u;
        // 0x20f764: 0x2321021  addu        $v0, $s1, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F768u;
        goto label_20f768;
    }
    ctx->pc = 0x20F760u;
    {
        const bool branch_taken_0x20f760 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x20F764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F760u;
        // 0x20f764: 0x2321021  addu        $v0, $s1, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f760) {
            ctx->pc = 0x20F7D8u;
            goto label_20f7d8;
        }
    }
    ctx->pc = 0x20F768u;
label_20f768:
    // 0x20f768: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x20f768u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_20f76c:
    // 0x20f76c: 0x2321021  addu        $v0, $s1, $s2
    ctx->pc = 0x20f76cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
label_20f770:
    // 0x20f770: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x20f770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_20f774:
    // 0x20f774: 0x14620016  bne         $v1, $v0, . + 4 + (0x16 << 2)
label_20f778:
    if (ctx->pc == 0x20F778u) {
        ctx->pc = 0x20F778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F774u;
        // 0x20f778: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F77Cu;
        goto label_20f77c;
    }
    ctx->pc = 0x20F774u;
    {
        const bool branch_taken_0x20f774 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x20F778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F774u;
        // 0x20f778: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f774) {
            ctx->pc = 0x20F7D0u;
            goto label_20f7d0;
        }
    }
    ctx->pc = 0x20F77Cu;
label_20f77c:
    // 0x20f77c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x20f77cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_20f780:
    // 0x20f780: 0x2341021  addu        $v0, $s1, $s4
    ctx->pc = 0x20f780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
label_20f784:
    // 0x20f784: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x20f784u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
label_20f788:
    // 0x20f788: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x20f788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_20f78c:
    // 0x20f78c: 0x8c234514  lw          $v1, 0x4514($at)
    ctx->pc = 0x20f78cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 17684)));
label_20f790:
    // 0x20f790: 0x1462000e  bne         $v1, $v0, . + 4 + (0xE << 2)
label_20f794:
    if (ctx->pc == 0x20F794u) {
        ctx->pc = 0x20F794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F790u;
        // 0x20f794: 0x3c010001  lui         $at, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F798u;
        goto label_20f798;
    }
    ctx->pc = 0x20F790u;
    {
        const bool branch_taken_0x20f790 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x20F794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F790u;
        // 0x20f794: 0x3c010001  lui         $at, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f790) {
            ctx->pc = 0x20F7CCu;
            goto label_20f7cc;
        }
    }
    ctx->pc = 0x20F798u;
label_20f798:
    // 0x20f798: 0x2541021  addu        $v0, $s2, $s4
    ctx->pc = 0x20f798u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 20)));
label_20f79c:
    // 0x20f79c: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x20f79cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
label_20f7a0:
    // 0x20f7a0: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x20f7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_20f7a4:
    // 0x20f7a4: 0x8c234580  lw          $v1, 0x4580($at)
    ctx->pc = 0x20f7a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 17792)));
label_20f7a8:
    // 0x20f7a8: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
label_20f7ac:
    if (ctx->pc == 0x20F7ACu) {
        ctx->pc = 0x20F7B0u;
        goto label_20f7b0;
    }
    ctx->pc = 0x20F7A8u;
    {
        const bool branch_taken_0x20f7a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x20f7a8) {
            ctx->pc = 0x20F7CCu;
            goto label_20f7cc;
        }
    }
    ctx->pc = 0x20F7B0u;
label_20f7b0:
    // 0x20f7b0: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x20f7b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_20f7b4:
    // 0x20f7b4: 0x2741021  addu        $v0, $s3, $s4
    ctx->pc = 0x20f7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
label_20f7b8:
    // 0x20f7b8: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x20f7b8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
label_20f7bc:
    // 0x20f7bc: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x20f7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_20f7c0:
    // 0x20f7c0: 0x8c234608  lw          $v1, 0x4608($at)
    ctx->pc = 0x20f7c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 17928)));
label_20f7c4:
    // 0x20f7c4: 0x10620026  beq         $v1, $v0, . + 4 + (0x26 << 2)
label_20f7c8:
    if (ctx->pc == 0x20F7C8u) {
        ctx->pc = 0x20F7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F7C4u;
        // 0x20f7c8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F7CCu;
        goto label_20f7cc;
    }
    ctx->pc = 0x20F7C4u;
    {
        const bool branch_taken_0x20f7c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x20F7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F7C4u;
        // 0x20f7c8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f7c4) {
            ctx->pc = 0x20F860u;
            goto label_20f860;
        }
    }
    ctx->pc = 0x20F7CCu;
label_20f7cc:
    // 0x20f7cc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x20f7ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20f7d0:
    // 0x20f7d0: 0x10000024  b           . + 4 + (0x24 << 2)
label_20f7d4:
    if (ctx->pc == 0x20F7D4u) {
        ctx->pc = 0x20F7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F7D0u;
        // 0x20f7d4: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F7D8u;
        goto label_20f7d8;
    }
    ctx->pc = 0x20F7D0u;
    {
        const bool branch_taken_0x20f7d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F7D0u;
        // 0x20f7d4: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f7d0) {
            ctx->pc = 0x20F864u;
            goto label_20f864;
        }
    }
    ctx->pc = 0x20F7D8u;
label_20f7d8:
    // 0x20f7d8: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x20f7d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_20f7dc:
    // 0x20f7dc: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x20f7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_20f7e0:
    // 0x20f7e0: 0x27a5007c  addiu       $a1, $sp, 0x7C
    ctx->pc = 0x20f7e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
label_20f7e4:
    // 0x20f7e4: 0xafa2007c  sw          $v0, 0x7C($sp)
    ctx->pc = 0x20f7e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 2));
label_20f7e8:
    // 0x20f7e8: 0xc08e93e  jal         func_23A4F8
label_20f7ec:
    if (ctx->pc == 0x20F7ECu) {
        ctx->pc = 0x20F7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F7E8u;
        // 0x20f7ec: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F7F0u;
        goto label_20f7f0;
    }
    ctx->pc = 0x20F7E8u;
    SET_GPR_U32(ctx, 31, 0x20F7F0u);
    ctx->pc = 0x20F7ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F7E8u;
    // 0x20f7ec: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A4F8u;
    { ctx->pc = 0x23a4f8; return; }
    ctx->pc = 0x20F7F0u;
label_20f7f0:
    // 0x20f7f0: 0x2341021  addu        $v0, $s1, $s4
    ctx->pc = 0x20f7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
label_20f7f4:
    // 0x20f7f4: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x20f7f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_20f7f8:
    // 0x20f7f8: 0x34214514  ori         $at, $at, 0x4514
    ctx->pc = 0x20f7f8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)17684);
label_20f7fc:
    // 0x20f7fc: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x20f7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_20f800:
    // 0x20f800: 0x2012021  addu        $a0, $s0, $at
    ctx->pc = 0x20f800u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
label_20f804:
    // 0x20f804: 0x27a5007c  addiu       $a1, $sp, 0x7C
    ctx->pc = 0x20f804u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
label_20f808:
    // 0x20f808: 0xafa2007c  sw          $v0, 0x7C($sp)
    ctx->pc = 0x20f808u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 2));
label_20f80c:
    // 0x20f80c: 0xc08e93e  jal         func_23A4F8
label_20f810:
    if (ctx->pc == 0x20F810u) {
        ctx->pc = 0x20F810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F80Cu;
        // 0x20f810: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F814u;
        goto label_20f814;
    }
    ctx->pc = 0x20F80Cu;
    SET_GPR_U32(ctx, 31, 0x20F814u);
    ctx->pc = 0x20F810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F80Cu;
    // 0x20f810: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A4F8u;
    { ctx->pc = 0x23a4f8; return; }
    ctx->pc = 0x20F814u;
label_20f814:
    // 0x20f814: 0x2541021  addu        $v0, $s2, $s4
    ctx->pc = 0x20f814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 20)));
label_20f818:
    // 0x20f818: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x20f818u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_20f81c:
    // 0x20f81c: 0x34214580  ori         $at, $at, 0x4580
    ctx->pc = 0x20f81cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)17792);
label_20f820:
    // 0x20f820: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x20f820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_20f824:
    // 0x20f824: 0x2012021  addu        $a0, $s0, $at
    ctx->pc = 0x20f824u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
label_20f828:
    // 0x20f828: 0x27a5007c  addiu       $a1, $sp, 0x7C
    ctx->pc = 0x20f828u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
label_20f82c:
    // 0x20f82c: 0xafa2007c  sw          $v0, 0x7C($sp)
    ctx->pc = 0x20f82cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 2));
label_20f830:
    // 0x20f830: 0xc08e93e  jal         func_23A4F8
label_20f834:
    if (ctx->pc == 0x20F834u) {
        ctx->pc = 0x20F834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F830u;
        // 0x20f834: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F838u;
        goto label_20f838;
    }
    ctx->pc = 0x20F830u;
    SET_GPR_U32(ctx, 31, 0x20F838u);
    ctx->pc = 0x20F834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F830u;
    // 0x20f834: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A4F8u;
    { ctx->pc = 0x23a4f8; return; }
    ctx->pc = 0x20F838u;
label_20f838:
    // 0x20f838: 0x2741021  addu        $v0, $s3, $s4
    ctx->pc = 0x20f838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
label_20f83c:
    // 0x20f83c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x20f83cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_20f840:
    // 0x20f840: 0x34214608  ori         $at, $at, 0x4608
    ctx->pc = 0x20f840u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)17928);
label_20f844:
    // 0x20f844: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x20f844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_20f848:
    // 0x20f848: 0x2012021  addu        $a0, $s0, $at
    ctx->pc = 0x20f848u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
label_20f84c:
    // 0x20f84c: 0x27a5007c  addiu       $a1, $sp, 0x7C
    ctx->pc = 0x20f84cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
label_20f850:
    // 0x20f850: 0xafa2007c  sw          $v0, 0x7C($sp)
    ctx->pc = 0x20f850u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 2));
label_20f854:
    // 0x20f854: 0xc08e93e  jal         func_23A4F8
label_20f858:
    if (ctx->pc == 0x20F858u) {
        ctx->pc = 0x20F858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F854u;
        // 0x20f858: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F85Cu;
        goto label_20f85c;
    }
    ctx->pc = 0x20F854u;
    SET_GPR_U32(ctx, 31, 0x20F85Cu);
    ctx->pc = 0x20F858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F854u;
    // 0x20f858: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A4F8u;
    { ctx->pc = 0x23a4f8; return; }
    ctx->pc = 0x20F85Cu;
label_20f85c:
    // 0x20f85c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20f85cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20f860:
    // 0x20f860: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x20f860u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_20f864:
    // 0x20f864: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x20f864u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_20f868:
    // 0x20f868: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x20f868u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_20f86c:
    // 0x20f86c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x20f86cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_20f870:
    // 0x20f870: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x20f870u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_20f874:
    // 0x20f874: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x20f874u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_20f878:
    // 0x20f878: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x20f878u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_20f87c:
    // 0x20f87c: 0x3e00008  jr          $ra
label_20f880:
    if (ctx->pc == 0x20F880u) {
        ctx->pc = 0x20F880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F87Cu;
        // 0x20f880: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F884u;
        goto label_20f884;
    }
    ctx->pc = 0x20F87Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20F880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F87Cu;
        // 0x20f880: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20F87Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20F884u;
label_20f884:
    // 0x20f884: 0x0  nop
    ctx->pc = 0x20f884u;
    // NOP
label_20f888:
    // 0x20f888: 0x0  nop
    ctx->pc = 0x20f888u;
    // NOP
label_20f88c:
    // 0x20f88c: 0x0  nop
    ctx->pc = 0x20f88cu;
    // NOP
label_20f890:
    // 0x20f890: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x20f890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20f894:
    // 0x20f894: 0x3c023d4c  lui         $v0, 0x3D4C
    ctx->pc = 0x20f894u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15692 << 16));
label_20f898:
    // 0x20f898: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x20f898u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_20f89c:
    // 0x20f89c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x20f89cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_20f8a0:
    // 0x20f8a0: 0x0  nop
    ctx->pc = 0x20f8a0u;
    // NOP
label_20f8a4:
    // 0x20f8a4: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x20f8a4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_20f8a8:
    // 0x20f8a8: 0x0  nop
    ctx->pc = 0x20f8a8u;
    // NOP
label_20f8ac:
    // 0x20f8ac: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_20f8b0:
    if (ctx->pc == 0x20F8B0u) {
        ctx->pc = 0x20F8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F8ACu;
        // 0x20f8b0: 0x3c020001  lui         $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F8B4u;
        goto label_20f8b4;
    }
    ctx->pc = 0x20F8ACu;
    {
        const bool branch_taken_0x20f8ac = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x20F8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F8ACu;
        // 0x20f8b0: 0x3c020001  lui         $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f8ac) {
            ctx->pc = 0x20F8BCu;
            goto label_20f8bc;
        }
    }
    ctx->pc = 0x20F8B4u;
label_20f8b4:
    // 0x20f8b4: 0x1000002a  b           . + 4 + (0x2A << 2)
label_20f8b8:
    if (ctx->pc == 0x20F8B8u) {
        ctx->pc = 0x20F8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F8B4u;
        // 0x20f8b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F8BCu;
        goto label_20f8bc;
    }
    ctx->pc = 0x20F8B4u;
    {
        const bool branch_taken_0x20f8b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F8B4u;
        // 0x20f8b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f8b4) {
            ctx->pc = 0x20F960u;
            goto label_20f960;
        }
    }
    ctx->pc = 0x20F8BCu;
label_20f8bc:
    // 0x20f8bc: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x20f8bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
label_20f8c0:
    // 0x20f8c0: 0x344241e0  ori         $v0, $v0, 0x41E0
    ctx->pc = 0x20f8c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16864);
label_20f8c4:
    // 0x20f8c4: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x20f8c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_20f8c8:
    // 0x20f8c8: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x20f8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_20f8cc:
    // 0x20f8cc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x20f8ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_20f8d0:
    // 0x20f8d0: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x20f8d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_20f8d4:
    // 0x20f8d4: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x20f8d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_20f8d8:
    // 0x20f8d8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_20f8dc:
    if (ctx->pc == 0x20F8DCu) {
        ctx->pc = 0x20F8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F8D8u;
        // 0x20f8dc: 0x3c010001  lui         $at, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F8E0u;
        goto label_20f8e0;
    }
    ctx->pc = 0x20F8D8u;
    {
        const bool branch_taken_0x20f8d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20F8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F8D8u;
        // 0x20f8dc: 0x3c010001  lui         $at, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f8d8) {
            ctx->pc = 0x20F8E8u;
            goto label_20f8e8;
        }
    }
    ctx->pc = 0x20F8E0u;
label_20f8e0:
    // 0x20f8e0: 0x1000001f  b           . + 4 + (0x1F << 2)
label_20f8e4:
    if (ctx->pc == 0x20F8E4u) {
        ctx->pc = 0x20F8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F8E0u;
        // 0x20f8e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F8E8u;
        goto label_20f8e8;
    }
    ctx->pc = 0x20F8E0u;
    {
        const bool branch_taken_0x20f8e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F8E0u;
        // 0x20f8e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f8e0) {
            ctx->pc = 0x20F960u;
            goto label_20f960;
        }
    }
    ctx->pc = 0x20F8E8u;
label_20f8e8:
    // 0x20f8e8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x20f8e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_20f8ec:
    // 0x20f8ec: 0x342141e0  ori         $at, $at, 0x41E0
    ctx->pc = 0x20f8ecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)16864);
label_20f8f0:
    // 0x20f8f0: 0x811821  addu        $v1, $a0, $at
    ctx->pc = 0x20f8f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
label_20f8f4:
    // 0x20f8f4: 0xa3082b  sltu        $at, $a1, $v1
    ctx->pc = 0x20f8f4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_20f8f8:
    // 0x20f8f8: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
label_20f8fc:
    if (ctx->pc == 0x20F8FCu) {
        ctx->pc = 0x20F8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F8F8u;
        // 0x20f8fc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F900u;
        goto label_20f900;
    }
    ctx->pc = 0x20F8F8u;
    {
        const bool branch_taken_0x20f8f8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F8F8u;
        // 0x20f8fc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f8f8) {
            ctx->pc = 0x20F920u;
            goto label_20f920;
        }
    }
    ctx->pc = 0x20F900u;
label_20f900:
    // 0x20f900: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x20f900u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_20f904:
    // 0x20f904: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x20f904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_20f908:
    // 0x20f908: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x20f908u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
label_20f90c:
    // 0x20f90c: 0x3046ffff  andi        $a2, $v0, 0xFFFF
    ctx->pc = 0x20f90cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_20f910:
    // 0x20f910: 0xa3102b  sltu        $v0, $a1, $v1
    ctx->pc = 0x20f910u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_20f914:
    // 0x20f914: 0x0  nop
    ctx->pc = 0x20f914u;
    // NOP
label_20f918:
    // 0x20f918: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_20f91c:
    if (ctx->pc == 0x20F91Cu) {
        ctx->pc = 0x20F920u;
        goto label_20f920;
    }
    ctx->pc = 0x20F918u;
    {
        const bool branch_taken_0x20f918 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20f918) {
            ctx->pc = 0x20F900u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20f900;
        }
    }
    ctx->pc = 0x20F920u;
label_20f920:
    // 0x20f920: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x20f920u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_20f924:
    // 0x20f924: 0x461823  subu        $v1, $v0, $a2
    ctx->pc = 0x20f924u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_20f928:
    // 0x20f928: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x20f928u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_20f92c:
    // 0x20f92c: 0x3065ffff  andi        $a1, $v1, 0xFFFF
    ctx->pc = 0x20f92cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_20f930:
    // 0x20f930: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x20f930u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
label_20f934:
    // 0x20f934: 0x942341e0  lhu         $v1, 0x41E0($at)
    ctx->pc = 0x20f934u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 16864)));
label_20f938:
    // 0x20f938: 0x30c2ffff  andi        $v0, $a2, 0xFFFF
    ctx->pc = 0x20f938u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
label_20f93c:
    // 0x20f93c: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
label_20f940:
    if (ctx->pc == 0x20F940u) {
        ctx->pc = 0x20F940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F93Cu;
        // 0x20f940: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F944u;
        goto label_20f944;
    }
    ctx->pc = 0x20F93Cu;
    {
        const bool branch_taken_0x20f93c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x20F940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F93Cu;
        // 0x20f940: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f93c) {
            ctx->pc = 0x20F960u;
            goto label_20f960;
        }
    }
    ctx->pc = 0x20F944u;
label_20f944:
    // 0x20f944: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x20f944u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_20f948:
    // 0x20f948: 0x30a2ffff  andi        $v0, $a1, 0xFFFF
    ctx->pc = 0x20f948u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
label_20f94c:
    // 0x20f94c: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x20f94cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
label_20f950:
    // 0x20f950: 0x942341e2  lhu         $v1, 0x41E2($at)
    ctx->pc = 0x20f950u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 16866)));
label_20f954:
    // 0x20f954: 0x10620002  beq         $v1, $v0, . + 4 + (0x2 << 2)
label_20f958:
    if (ctx->pc == 0x20F958u) {
        ctx->pc = 0x20F958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F954u;
        // 0x20f958: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F95Cu;
        goto label_20f95c;
    }
    ctx->pc = 0x20F954u;
    {
        const bool branch_taken_0x20f954 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x20F958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F954u;
        // 0x20f958: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f954) {
            ctx->pc = 0x20F960u;
            goto label_20f960;
        }
    }
    ctx->pc = 0x20F95Cu;
label_20f95c:
    // 0x20f95c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x20f95cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20f960:
    // 0x20f960: 0x3e00008  jr          $ra
label_20f964:
    if (ctx->pc == 0x20F964u) {
        ctx->pc = 0x20F968u;
        goto label_20f968;
    }
    ctx->pc = 0x20F960u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20F960u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20F968u;
label_20f968:
    // 0x20f968: 0x0  nop
    ctx->pc = 0x20f968u;
    // NOP
label_20f96c:
    // 0x20f96c: 0x0  nop
    ctx->pc = 0x20f96cu;
    // NOP
label_20f970:
    // 0x20f970: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x20f970u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_20f974:
    // 0x20f974: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x20f974u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20f978:
    // 0x20f978: 0x342133e8  ori         $at, $at, 0x33E8
    ctx->pc = 0x20f978u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13288);
label_20f97c:
    // 0x20f97c: 0x812821  addu        $a1, $a0, $at
    ctx->pc = 0x20f97cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
label_20f980:
    // 0x20f980: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x20f980u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_20f984:
    // 0x20f984: 0x284100fb  slti        $at, $v0, 0xFB
    ctx->pc = 0x20f984u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)251) ? 1 : 0);
label_20f988:
    // 0x20f988: 0x10200013  beqz        $at, . + 4 + (0x13 << 2)
label_20f98c:
    if (ctx->pc == 0x20F98Cu) {
        ctx->pc = 0x20F990u;
        goto label_20f990;
    }
    ctx->pc = 0x20F988u;
    {
        const bool branch_taken_0x20f988 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x20f988) {
            ctx->pc = 0x20F9D8u;
            goto label_20f9d8;
        }
    }
    ctx->pc = 0x20F990u;
label_20f990:
    // 0x20f990: 0x84a20002  lh          $v0, 0x2($a1)
    ctx->pc = 0x20f990u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
label_20f994:
    // 0x20f994: 0x284100fb  slti        $at, $v0, 0xFB
    ctx->pc = 0x20f994u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)251) ? 1 : 0);
label_20f998:
    // 0x20f998: 0x1020000f  beqz        $at, . + 4 + (0xF << 2)
label_20f99c:
    if (ctx->pc == 0x20F99Cu) {
        ctx->pc = 0x20F9A0u;
        goto label_20f9a0;
    }
    ctx->pc = 0x20F998u;
    {
        const bool branch_taken_0x20f998 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x20f998) {
            ctx->pc = 0x20F9D8u;
            goto label_20f9d8;
        }
    }
    ctx->pc = 0x20F9A0u;
label_20f9a0:
    // 0x20f9a0: 0x90a20004  lbu         $v0, 0x4($a1)
    ctx->pc = 0x20f9a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4)));
label_20f9a4:
    // 0x20f9a4: 0x28410097  slti        $at, $v0, 0x97
    ctx->pc = 0x20f9a4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)151) ? 1 : 0);
label_20f9a8:
    // 0x20f9a8: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
label_20f9ac:
    if (ctx->pc == 0x20F9ACu) {
        ctx->pc = 0x20F9B0u;
        goto label_20f9b0;
    }
    ctx->pc = 0x20F9A8u;
    {
        const bool branch_taken_0x20f9a8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x20f9a8) {
            ctx->pc = 0x20F9D8u;
            goto label_20f9d8;
        }
    }
    ctx->pc = 0x20F9B0u;
label_20f9b0:
    // 0x20f9b0: 0x90a20005  lbu         $v0, 0x5($a1)
    ctx->pc = 0x20f9b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 5)));
label_20f9b4:
    // 0x20f9b4: 0x28410097  slti        $at, $v0, 0x97
    ctx->pc = 0x20f9b4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)151) ? 1 : 0);
label_20f9b8:
    // 0x20f9b8: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
label_20f9bc:
    if (ctx->pc == 0x20F9BCu) {
        ctx->pc = 0x20F9C0u;
        goto label_20f9c0;
    }
    ctx->pc = 0x20F9B8u;
    {
        const bool branch_taken_0x20f9b8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x20f9b8) {
            ctx->pc = 0x20F9D8u;
            goto label_20f9d8;
        }
    }
    ctx->pc = 0x20F9C0u;
label_20f9c0:
    // 0x20f9c0: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x20f9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_20f9c4:
    // 0x20f9c4: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x20f9c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_20f9c8:
    // 0x20f9c8: 0x342186a0  ori         $at, $at, 0x86A0
    ctx->pc = 0x20f9c8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34464);
label_20f9cc:
    // 0x20f9cc: 0x41082a  slt         $at, $v0, $at
    ctx->pc = 0x20f9ccu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
label_20f9d0:
    // 0x20f9d0: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
label_20f9d4:
    if (ctx->pc == 0x20F9D4u) {
        ctx->pc = 0x20F9D8u;
        goto label_20f9d8;
    }
    ctx->pc = 0x20F9D0u;
    {
        const bool branch_taken_0x20f9d0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x20f9d0) {
            ctx->pc = 0x20F9E0u;
            goto label_20f9e0;
        }
    }
    ctx->pc = 0x20F9D8u;
label_20f9d8:
    // 0x20f9d8: 0x10000059  b           . + 4 + (0x59 << 2)
label_20f9dc:
    if (ctx->pc == 0x20F9DCu) {
        ctx->pc = 0x20F9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F9D8u;
        // 0x20f9dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F9E0u;
        goto label_20f9e0;
    }
    ctx->pc = 0x20F9D8u;
    {
        const bool branch_taken_0x20f9d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F9D8u;
        // 0x20f9dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f9d8) {
            ctx->pc = 0x20FB40u;
            goto label_20fb40;
        }
    }
    ctx->pc = 0x20F9E0u;
label_20f9e0:
    // 0x20f9e0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x20f9e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_20f9e4:
    // 0x20f9e4: 0x28620029  slti        $v0, $v1, 0x29
    ctx->pc = 0x20f9e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)41) ? 1 : 0);
label_20f9e8:
    // 0x20f9e8: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
label_20f9ec:
    if (ctx->pc == 0x20F9ECu) {
        ctx->pc = 0x20F9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F9E8u;
        // 0x20f9ec: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F9F0u;
        goto label_20f9f0;
    }
    ctx->pc = 0x20F9E8u;
    {
        const bool branch_taken_0x20f9e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20F9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F9E8u;
        // 0x20f9ec: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f9e8) {
            ctx->pc = 0x20F980u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20f980;
        }
    }
    ctx->pc = 0x20F9F0u;
label_20f9f0:
    // 0x20f9f0: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x20f9f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_20f9f4:
    // 0x20f9f4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x20f9f4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20f9f8:
    // 0x20f9f8: 0x34213908  ori         $at, $at, 0x3908
    ctx->pc = 0x20f9f8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)14600);
label_20f9fc:
    // 0x20f9fc: 0x813821  addu        $a3, $a0, $at
    ctx->pc = 0x20f9fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
label_20fa00:
    // 0x20fa00: 0x3c03002d  lui         $v1, 0x2D
    ctx->pc = 0x20fa00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)45 << 16));
label_20fa04:
    // 0x20fa04: 0x24060019  addiu       $a2, $zero, 0x19
    ctx->pc = 0x20fa04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
label_20fa08:
    // 0x20fa08: 0x2463e0d0  addiu       $v1, $v1, -0x1F30
    ctx->pc = 0x20fa08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959312));
label_20fa0c:
    // 0x20fa0c: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x20fa0cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
label_20fa10:
    // 0x20fa10: 0x10480003  beq         $v0, $t0, . + 4 + (0x3 << 2)
label_20fa14:
    if (ctx->pc == 0x20FA14u) {
        ctx->pc = 0x20FA18u;
        goto label_20fa18;
    }
    ctx->pc = 0x20FA10u;
    {
        const bool branch_taken_0x20fa10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 8));
        if (branch_taken_0x20fa10) {
            ctx->pc = 0x20FA20u;
            goto label_20fa20;
        }
    }
    ctx->pc = 0x20FA18u;
label_20fa18:
    // 0x20fa18: 0x14460007  bne         $v0, $a2, . + 4 + (0x7 << 2)
label_20fa1c:
    if (ctx->pc == 0x20FA1Cu) {
        ctx->pc = 0x20FA20u;
        goto label_20fa20;
    }
    ctx->pc = 0x20FA18u;
    {
        const bool branch_taken_0x20fa18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        if (branch_taken_0x20fa18) {
            ctx->pc = 0x20FA38u;
            goto label_20fa38;
        }
    }
    ctx->pc = 0x20FA20u;
label_20fa20:
    // 0x20fa20: 0x681021  addu        $v0, $v1, $t0
    ctx->pc = 0x20fa20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
label_20fa24:
    // 0x20fa24: 0x90e50001  lbu         $a1, 0x1($a3)
    ctx->pc = 0x20fa24u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 1)));
label_20fa28:
    // 0x20fa28: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x20fa28u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_20fa2c:
    // 0x20fa2c: 0x45082a  slt         $at, $v0, $a1
    ctx->pc = 0x20fa2cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_20fa30:
    // 0x20fa30: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_20fa34:
    if (ctx->pc == 0x20FA34u) {
        ctx->pc = 0x20FA38u;
        goto label_20fa38;
    }
    ctx->pc = 0x20FA30u;
    {
        const bool branch_taken_0x20fa30 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x20fa30) {
            ctx->pc = 0x20FA40u;
            goto label_20fa40;
        }
    }
    ctx->pc = 0x20FA38u;
label_20fa38:
    // 0x20fa38: 0x10000041  b           . + 4 + (0x41 << 2)
label_20fa3c:
    if (ctx->pc == 0x20FA3Cu) {
        ctx->pc = 0x20FA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FA38u;
        // 0x20fa3c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20FA40u;
        goto label_20fa40;
    }
    ctx->pc = 0x20FA38u;
    {
        const bool branch_taken_0x20fa38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20FA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FA38u;
        // 0x20fa3c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fa38) {
            ctx->pc = 0x20FB40u;
            goto label_20fb40;
        }
    }
    ctx->pc = 0x20FA40u;
label_20fa40:
    // 0x20fa40: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x20fa40u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_20fa44:
    // 0x20fa44: 0x29020019  slti        $v0, $t0, 0x19
    ctx->pc = 0x20fa44u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)25) ? 1 : 0);
label_20fa48:
    // 0x20fa48: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
label_20fa4c:
    if (ctx->pc == 0x20FA4Cu) {
        ctx->pc = 0x20FA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FA48u;
        // 0x20fa4c: 0x24e70002  addiu       $a3, $a3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20FA50u;
        goto label_20fa50;
    }
    ctx->pc = 0x20FA48u;
    {
        const bool branch_taken_0x20fa48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20FA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FA48u;
        // 0x20fa4c: 0x24e70002  addiu       $a3, $a3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fa48) {
            ctx->pc = 0x20FA0Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20fa0c;
        }
    }
    ctx->pc = 0x20FA50u;
label_20fa50:
    // 0x20fa50: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x20fa50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_20fa54:
    // 0x20fa54: 0x702d  daddu       $t6, $zero, $zero
    ctx->pc = 0x20fa54u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20fa58:
    // 0x20fa58: 0x3421393c  ori         $at, $at, 0x393C
    ctx->pc = 0x20fa58u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)14652);
label_20fa5c:
    // 0x20fa5c: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x20fa5cu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20fa60:
    // 0x20fa60: 0x815021  addu        $t2, $a0, $at
    ctx->pc = 0x20fa60u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
label_20fa64:
    // 0x20fa64: 0x3c050029  lui         $a1, 0x29
    ctx->pc = 0x20fa64u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)41 << 16));
label_20fa68:
    // 0x20fa68: 0x3c06002d  lui         $a2, 0x2D
    ctx->pc = 0x20fa68u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)45 << 16));
label_20fa6c:
    // 0x20fa6c: 0x24a5a5c0  addiu       $a1, $a1, -0x5A40
    ctx->pc = 0x20fa6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944192));
label_20fa70:
    // 0x20fa70: 0x24070019  addiu       $a3, $zero, 0x19
    ctx->pc = 0x20fa70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
label_20fa74:
    // 0x20fa74: 0x24c6e0d0  addiu       $a2, $a2, -0x1F30
    ctx->pc = 0x20fa74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294959312));
label_20fa78:
    // 0x20fa78: 0x24080082  addiu       $t0, $zero, 0x82
    ctx->pc = 0x20fa78u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 130));
label_20fa7c:
    // 0x20fa7c: 0x9142000b  lbu         $v0, 0xB($t2)
    ctx->pc = 0x20fa7cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 11)));
label_20fa80:
    // 0x20fa80: 0x10480028  beq         $v0, $t0, . + 4 + (0x28 << 2)
label_20fa84:
    if (ctx->pc == 0x20FA84u) {
        ctx->pc = 0x20FA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FA80u;
        // 0x20fa84: 0x140782d  daddu       $t7, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20FA88u;
        goto label_20fa88;
    }
    ctx->pc = 0x20FA80u;
    {
        const bool branch_taken_0x20fa80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 8));
        ctx->pc = 0x20FA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FA80u;
        // 0x20fa84: 0x140782d  daddu       $t7, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fa80) {
            ctx->pc = 0x20FB24u;
            goto label_20fb24;
        }
    }
    ctx->pc = 0x20FA88u;
label_20fa88:
    // 0x20fa88: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x20fa88u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20fa8c:
    // 0x20fa8c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x20fa8cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20fa90:
    // 0x20fa90: 0xac1021  addu        $v0, $a1, $t4
    ctx->pc = 0x20fa90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
label_20fa94:
    // 0x20fa94: 0x24440000  addiu       $a0, $v0, 0x0
    ctx->pc = 0x20fa94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
label_20fa98:
    // 0x20fa98: 0x91ed0000  lbu         $t5, 0x0($t7)
    ctx->pc = 0x20fa98u;
    SET_GPR_ZE32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 0)));
label_20fa9c:
    // 0x20fa9c: 0x29a1001a  slti        $at, $t5, 0x1A
    ctx->pc = 0x20fa9cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 13) < (int64_t)(int32_t)26) ? 1 : 0);
label_20faa0:
    // 0x20faa0: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
label_20faa4:
    if (ctx->pc == 0x20FAA4u) {
        ctx->pc = 0x20FAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FAA0u;
        // 0x20faa4: 0x29c10059  slti        $at, $t6, 0x59 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 14) < (int64_t)(int32_t)89) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x20FAA8u;
        goto label_20faa8;
    }
    ctx->pc = 0x20FAA0u;
    {
        const bool branch_taken_0x20faa0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x20FAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FAA0u;
        // 0x20faa4: 0x29c10059  slti        $at, $t6, 0x59 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 14) < (int64_t)(int32_t)89) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20faa0) {
            ctx->pc = 0x20FAB0u;
            goto label_20fab0;
        }
    }
    ctx->pc = 0x20FAA8u;
label_20faa8:
    // 0x20faa8: 0x10000025  b           . + 4 + (0x25 << 2)
label_20faac:
    if (ctx->pc == 0x20FAACu) {
        ctx->pc = 0x20FAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FAA8u;
        // 0x20faac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20FAB0u;
        goto label_20fab0;
    }
    ctx->pc = 0x20FAA8u;
    {
        const bool branch_taken_0x20faa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20FAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FAA8u;
        // 0x20faac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20faa8) {
            ctx->pc = 0x20FB40u;
            goto label_20fb40;
        }
    }
    ctx->pc = 0x20FAB0u;
label_20fab0:
    // 0x20fab0: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
label_20fab4:
    if (ctx->pc == 0x20FAB4u) {
        ctx->pc = 0x20FAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FAB0u;
        // 0x20fab4: 0x8b1821  addu        $v1, $a0, $t3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20FAB8u;
        goto label_20fab8;
    }
    ctx->pc = 0x20FAB0u;
    {
        const bool branch_taken_0x20fab0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x20FAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FAB0u;
        // 0x20fab4: 0x8b1821  addu        $v1, $a0, $t3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fab0) {
            ctx->pc = 0x20FAE0u;
            goto label_20fae0;
        }
    }
    ctx->pc = 0x20FAB8u;
label_20fab8:
    // 0x20fab8: 0x11a70015  beq         $t5, $a3, . + 4 + (0x15 << 2)
label_20fabc:
    if (ctx->pc == 0x20FABCu) {
        ctx->pc = 0x20FABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FAB8u;
        // 0x20fabc: 0x31a200ff  andi        $v0, $t5, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x20FAC0u;
        goto label_20fac0;
    }
    ctx->pc = 0x20FAB8u;
    {
        const bool branch_taken_0x20fab8 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 7));
        ctx->pc = 0x20FABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FAB8u;
        // 0x20fabc: 0x31a200ff  andi        $v0, $t5, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fab8) {
            ctx->pc = 0x20FB10u;
            goto label_20fb10;
        }
    }
    ctx->pc = 0x20FAC0u;
label_20fac0:
    // 0x20fac0: 0x91e30001  lbu         $v1, 0x1($t7)
    ctx->pc = 0x20fac0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 1)));
label_20fac4:
    // 0x20fac4: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x20fac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_20fac8:
    // 0x20fac8: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x20fac8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_20facc:
    // 0x20facc: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x20faccu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_20fad0:
    // 0x20fad0: 0x1020000f  beqz        $at, . + 4 + (0xF << 2)
label_20fad4:
    if (ctx->pc == 0x20FAD4u) {
        ctx->pc = 0x20FAD8u;
        goto label_20fad8;
    }
    ctx->pc = 0x20FAD0u;
    {
        const bool branch_taken_0x20fad0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x20fad0) {
            ctx->pc = 0x20FB10u;
            goto label_20fb10;
        }
    }
    ctx->pc = 0x20FAD8u;
label_20fad8:
    // 0x20fad8: 0x10000019  b           . + 4 + (0x19 << 2)
label_20fadc:
    if (ctx->pc == 0x20FADCu) {
        ctx->pc = 0x20FADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FAD8u;
        // 0x20fadc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20FAE0u;
        goto label_20fae0;
    }
    ctx->pc = 0x20FAD8u;
    {
        const bool branch_taken_0x20fad8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20FADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FAD8u;
        // 0x20fadc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fad8) {
            ctx->pc = 0x20FB40u;
            goto label_20fb40;
        }
    }
    ctx->pc = 0x20FAE0u;
label_20fae0:
    // 0x20fae0: 0x9062f7a8  lbu         $v0, -0x858($v1)
    ctx->pc = 0x20fae0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294965160)));
label_20fae4:
    // 0x20fae4: 0x15a20005  bne         $t5, $v0, . + 4 + (0x5 << 2)
label_20fae8:
    if (ctx->pc == 0x20FAE8u) {
        ctx->pc = 0x20FAECu;
        goto label_20faec;
    }
    ctx->pc = 0x20FAE4u;
    {
        const bool branch_taken_0x20fae4 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 2));
        if (branch_taken_0x20fae4) {
            ctx->pc = 0x20FAFCu;
            goto label_20fafc;
        }
    }
    ctx->pc = 0x20FAECu;
label_20faec:
    // 0x20faec: 0x9062f7a9  lbu         $v0, -0x857($v1)
    ctx->pc = 0x20faecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294965161)));
label_20faf0:
    // 0x20faf0: 0x91e30001  lbu         $v1, 0x1($t7)
    ctx->pc = 0x20faf0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 1)));
label_20faf4:
    // 0x20faf4: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
label_20faf8:
    if (ctx->pc == 0x20FAF8u) {
        ctx->pc = 0x20FAFCu;
        goto label_20fafc;
    }
    ctx->pc = 0x20FAF4u;
    {
        const bool branch_taken_0x20faf4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x20faf4) {
            ctx->pc = 0x20FB10u;
            goto label_20fb10;
        }
    }
    ctx->pc = 0x20FAFCu;
label_20fafc:
    // 0x20fafc: 0x0  nop
    ctx->pc = 0x20fafcu;
    // NOP
label_20fb00:
    // 0x20fb00: 0x11a70003  beq         $t5, $a3, . + 4 + (0x3 << 2)
label_20fb04:
    if (ctx->pc == 0x20FB04u) {
        ctx->pc = 0x20FB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FB00u;
        // 0x20fb04: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20FB08u;
        goto label_20fb08;
    }
    ctx->pc = 0x20FB00u;
    {
        const bool branch_taken_0x20fb00 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 7));
        ctx->pc = 0x20FB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FB00u;
        // 0x20fb04: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fb00) {
            ctx->pc = 0x20FB10u;
            goto label_20fb10;
        }
    }
    ctx->pc = 0x20FB08u;
label_20fb08:
    // 0x20fb08: 0x1000000d  b           . + 4 + (0xD << 2)
label_20fb0c:
    if (ctx->pc == 0x20FB0Cu) {
        ctx->pc = 0x20FB10u;
        goto label_20fb10;
    }
    ctx->pc = 0x20FB08u;
    {
        const bool branch_taken_0x20fb08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20fb08) {
            ctx->pc = 0x20FB40u;
            goto label_20fb40;
        }
    }
    ctx->pc = 0x20FB10u;
label_20fb10:
    // 0x20fb10: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x20fb10u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_20fb14:
    // 0x20fb14: 0x256b0002  addiu       $t3, $t3, 0x2
    ctx->pc = 0x20fb14u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 2));
label_20fb18:
    // 0x20fb18: 0x29220005  slti        $v0, $t1, 0x5
    ctx->pc = 0x20fb18u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)5) ? 1 : 0);
label_20fb1c:
    // 0x20fb1c: 0x1440ffde  bnez        $v0, . + 4 + (-0x22 << 2)
label_20fb20:
    if (ctx->pc == 0x20FB20u) {
        ctx->pc = 0x20FB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FB1Cu;
        // 0x20fb20: 0x25ef0002  addiu       $t7, $t7, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20FB24u;
        goto label_20fb24;
    }
    ctx->pc = 0x20FB1Cu;
    {
        const bool branch_taken_0x20fb1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20FB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FB1Cu;
        // 0x20fb20: 0x25ef0002  addiu       $t7, $t7, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fb1c) {
            ctx->pc = 0x20FA98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20fa98;
        }
    }
    ctx->pc = 0x20FB24u;
label_20fb24:
    // 0x20fb24: 0x0  nop
    ctx->pc = 0x20fb24u;
    // NOP
label_20fb28:
    // 0x20fb28: 0x25ce0001  addiu       $t6, $t6, 0x1
    ctx->pc = 0x20fb28u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
label_20fb2c:
    // 0x20fb2c: 0x29c20082  slti        $v0, $t6, 0x82
    ctx->pc = 0x20fb2cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 14) < (int64_t)(int32_t)130) ? 1 : 0);
label_20fb30:
    // 0x20fb30: 0x258c0018  addiu       $t4, $t4, 0x18
    ctx->pc = 0x20fb30u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 24));
label_20fb34:
    // 0x20fb34: 0x1440ffd1  bnez        $v0, . + 4 + (-0x2F << 2)
label_20fb38:
    if (ctx->pc == 0x20FB38u) {
        ctx->pc = 0x20FB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FB34u;
        // 0x20fb38: 0x254a0010  addiu       $t2, $t2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20FB3Cu;
        goto label_20fb3c;
    }
    ctx->pc = 0x20FB34u;
    {
        const bool branch_taken_0x20fb34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20FB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FB34u;
        // 0x20fb38: 0x254a0010  addiu       $t2, $t2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fb34) {
            ctx->pc = 0x20FA7Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20fa7c;
        }
    }
    ctx->pc = 0x20FB3Cu;
label_20fb3c:
    // 0x20fb3c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20fb3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20fb40:
    // 0x20fb40: 0x3e00008  jr          $ra
label_20fb44:
    if (ctx->pc == 0x20FB44u) {
        ctx->pc = 0x20FB48u;
        goto label_20fb48;
    }
    ctx->pc = 0x20FB40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20FB40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20FB48u;
label_20fb48:
    // 0x20fb48: 0x0  nop
    ctx->pc = 0x20fb48u;
    // NOP
label_20fb4c:
    // 0x20fb4c: 0x0  nop
    ctx->pc = 0x20fb4cu;
    // NOP
label_20fb50:
    // 0x20fb50: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x20fb50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_20fb54:
    // 0x20fb54: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x20fb54u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_20fb58:
    // 0x20fb58: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x20fb58u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
label_20fb5c:
    // 0x20fb5c: 0x3c07002b  lui         $a3, 0x2B
    ctx->pc = 0x20fb5cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)43 << 16));
label_20fb60:
    // 0x20fb60: 0x342133e8  ori         $at, $at, 0x33E8
    ctx->pc = 0x20fb60u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13288);
label_20fb64:
    // 0x20fb64: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20fb64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_20fb68:
    // 0x20fb68: 0x24c6c990  addiu       $a2, $a2, -0x3670
    ctx->pc = 0x20fb68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294953360));
label_20fb6c:
    // 0x20fb6c: 0x24e7ff78  addiu       $a3, $a3, -0x88
    ctx->pc = 0x20fb6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967160));
label_20fb70:
    // 0x20fb70: 0x814021  addu        $t0, $a0, $at
    ctx->pc = 0x20fb70u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
label_20fb74:
    // 0x20fb74: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x20fb74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20fb78:
    // 0x20fb78: 0x85030000  lh          $v1, 0x0($t0)
    ctx->pc = 0x20fb78u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
label_20fb7c:
    // 0x20fb7c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x20fb7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_20fb80:
    // 0x20fb80: 0x28a20029  slti        $v0, $a1, 0x29
    ctx->pc = 0x20fb80u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)41) ? 1 : 0);
label_20fb84:
    // 0x20fb84: 0xa4e30000  sh          $v1, 0x0($a3)
    ctx->pc = 0x20fb84u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 3));
label_20fb88:
    // 0x20fb88: 0x85030002  lh          $v1, 0x2($t0)
    ctx->pc = 0x20fb88u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 2)));
label_20fb8c:
    // 0x20fb8c: 0xa4e30002  sh          $v1, 0x2($a3)
    ctx->pc = 0x20fb8cu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 2), (uint16_t)GPR_U32(ctx, 3));
label_20fb90:
    // 0x20fb90: 0x91030004  lbu         $v1, 0x4($t0)
    ctx->pc = 0x20fb90u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 4)));
label_20fb94:
    // 0x20fb94: 0xa0e30004  sb          $v1, 0x4($a3)
    ctx->pc = 0x20fb94u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 4), (uint8_t)GPR_U32(ctx, 3));
label_20fb98:
    // 0x20fb98: 0x91030005  lbu         $v1, 0x5($t0)
    ctx->pc = 0x20fb98u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 5)));
label_20fb9c:
    // 0x20fb9c: 0xa0e30005  sb          $v1, 0x5($a3)
    ctx->pc = 0x20fb9cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 5), (uint8_t)GPR_U32(ctx, 3));
label_20fba0:
    // 0x20fba0: 0x8d030014  lw          $v1, 0x14($t0)
    ctx->pc = 0x20fba0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 20)));
label_20fba4:
    // 0x20fba4: 0xace30014  sw          $v1, 0x14($a3)
    ctx->pc = 0x20fba4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 3));
label_20fba8:
    // 0x20fba8: 0x25080020  addiu       $t0, $t0, 0x20
    ctx->pc = 0x20fba8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 32));
label_20fbac:
    // 0x20fbac: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
label_20fbb0:
    if (ctx->pc == 0x20FBB0u) {
        ctx->pc = 0x20FBB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FBACu;
        // 0x20fbb0: 0x24e70018  addiu       $a3, $a3, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20FBB4u;
        goto label_20fbb4;
    }
    ctx->pc = 0x20FBACu;
    {
        const bool branch_taken_0x20fbac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20FBB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FBACu;
        // 0x20fbb0: 0x24e70018  addiu       $a3, $a3, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fbac) {
            ctx->pc = 0x20FB78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20fb78;
        }
    }
    ctx->pc = 0x20FBB4u;
label_20fbb4:
    // 0x20fbb4: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x20fbb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_20fbb8:
    // 0x20fbb8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x20fbb8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20fbbc:
    // 0x20fbbc: 0x342139c0  ori         $at, $at, 0x39C0
    ctx->pc = 0x20fbbcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)14784);
label_20fbc0:
    // 0x20fbc0: 0xc13821  addu        $a3, $a2, $at
    ctx->pc = 0x20fbc0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
label_20fbc4:
    // 0x20fbc4: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x20fbc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    ctx->pc = 0x20fbc8u;
    return;
}
