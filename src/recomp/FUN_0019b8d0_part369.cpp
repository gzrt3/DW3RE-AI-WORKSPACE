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

// Function: FUN_0019b8d0
// Address: 0x19b8d0 - 0x29b8d8
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0019b8d0_part369(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x24f3d0u: goto label_24f3d0;
        case 0x24f3d4u: goto label_24f3d4;
        case 0x24f3d8u: goto label_24f3d8;
        case 0x24f3dcu: goto label_24f3dc;
        case 0x24f3e0u: goto label_24f3e0;
        case 0x24f3e4u: goto label_24f3e4;
        case 0x24f3e8u: goto label_24f3e8;
        case 0x24f3ecu: goto label_24f3ec;
        case 0x24f3f0u: goto label_24f3f0;
        case 0x24f3f4u: goto label_24f3f4;
        case 0x24f3f8u: goto label_24f3f8;
        case 0x24f3fcu: goto label_24f3fc;
        case 0x24f400u: goto label_24f400;
        case 0x24f404u: goto label_24f404;
        case 0x24f408u: goto label_24f408;
        case 0x24f40cu: goto label_24f40c;
        case 0x24f410u: goto label_24f410;
        case 0x24f414u: goto label_24f414;
        case 0x24f418u: goto label_24f418;
        case 0x24f41cu: goto label_24f41c;
        case 0x24f420u: goto label_24f420;
        case 0x24f424u: goto label_24f424;
        case 0x24f428u: goto label_24f428;
        case 0x24f42cu: goto label_24f42c;
        case 0x24f430u: goto label_24f430;
        case 0x24f434u: goto label_24f434;
        case 0x24f438u: goto label_24f438;
        case 0x24f43cu: goto label_24f43c;
        case 0x24f440u: goto label_24f440;
        case 0x24f444u: goto label_24f444;
        case 0x24f448u: goto label_24f448;
        case 0x24f44cu: goto label_24f44c;
        case 0x24f450u: goto label_24f450;
        case 0x24f454u: goto label_24f454;
        case 0x24f458u: goto label_24f458;
        case 0x24f45cu: goto label_24f45c;
        case 0x24f460u: goto label_24f460;
        case 0x24f464u: goto label_24f464;
        case 0x24f468u: goto label_24f468;
        case 0x24f46cu: goto label_24f46c;
        case 0x24f470u: goto label_24f470;
        case 0x24f474u: goto label_24f474;
        case 0x24f478u: goto label_24f478;
        case 0x24f47cu: goto label_24f47c;
        case 0x24f480u: goto label_24f480;
        case 0x24f484u: goto label_24f484;
        case 0x24f488u: goto label_24f488;
        case 0x24f48cu: goto label_24f48c;
        case 0x24f490u: goto label_24f490;
        case 0x24f494u: goto label_24f494;
        case 0x24f498u: goto label_24f498;
        case 0x24f49cu: goto label_24f49c;
        case 0x24f4a0u: goto label_24f4a0;
        case 0x24f4a4u: goto label_24f4a4;
        case 0x24f4a8u: goto label_24f4a8;
        case 0x24f4acu: goto label_24f4ac;
        case 0x24f4b0u: goto label_24f4b0;
        case 0x24f4b4u: goto label_24f4b4;
        case 0x24f4b8u: goto label_24f4b8;
        case 0x24f4bcu: goto label_24f4bc;
        case 0x24f4c0u: goto label_24f4c0;
        case 0x24f4c4u: goto label_24f4c4;
        case 0x24f4c8u: goto label_24f4c8;
        case 0x24f4ccu: goto label_24f4cc;
        case 0x24f4d0u: goto label_24f4d0;
        case 0x24f4d4u: goto label_24f4d4;
        case 0x24f4d8u: goto label_24f4d8;
        case 0x24f4dcu: goto label_24f4dc;
        case 0x24f4e0u: goto label_24f4e0;
        case 0x24f4e4u: goto label_24f4e4;
        case 0x24f4e8u: goto label_24f4e8;
        case 0x24f4ecu: goto label_24f4ec;
        case 0x24f4f0u: goto label_24f4f0;
        case 0x24f4f4u: goto label_24f4f4;
        case 0x24f4f8u: goto label_24f4f8;
        case 0x24f4fcu: goto label_24f4fc;
        case 0x24f500u: goto label_24f500;
        case 0x24f504u: goto label_24f504;
        case 0x24f508u: goto label_24f508;
        case 0x24f50cu: goto label_24f50c;
        case 0x24f510u: goto label_24f510;
        case 0x24f514u: goto label_24f514;
        case 0x24f518u: goto label_24f518;
        case 0x24f51cu: goto label_24f51c;
        case 0x24f520u: goto label_24f520;
        case 0x24f524u: goto label_24f524;
        case 0x24f528u: goto label_24f528;
        case 0x24f52cu: goto label_24f52c;
        case 0x24f530u: goto label_24f530;
        case 0x24f534u: goto label_24f534;
        case 0x24f538u: goto label_24f538;
        case 0x24f53cu: goto label_24f53c;
        case 0x24f540u: goto label_24f540;
        case 0x24f544u: goto label_24f544;
        case 0x24f548u: goto label_24f548;
        case 0x24f54cu: goto label_24f54c;
        case 0x24f550u: goto label_24f550;
        case 0x24f554u: goto label_24f554;
        case 0x24f558u: goto label_24f558;
        case 0x24f55cu: goto label_24f55c;
        case 0x24f560u: goto label_24f560;
        case 0x24f564u: goto label_24f564;
        case 0x24f568u: goto label_24f568;
        case 0x24f56cu: goto label_24f56c;
        case 0x24f570u: goto label_24f570;
        case 0x24f574u: goto label_24f574;
        case 0x24f578u: goto label_24f578;
        case 0x24f57cu: goto label_24f57c;
        case 0x24f580u: goto label_24f580;
        case 0x24f584u: goto label_24f584;
        case 0x24f588u: goto label_24f588;
        case 0x24f58cu: goto label_24f58c;
        case 0x24f590u: goto label_24f590;
        case 0x24f594u: goto label_24f594;
        case 0x24f598u: goto label_24f598;
        case 0x24f59cu: goto label_24f59c;
        case 0x24f5a0u: goto label_24f5a0;
        case 0x24f5a4u: goto label_24f5a4;
        case 0x24f5a8u: goto label_24f5a8;
        case 0x24f5acu: goto label_24f5ac;
        case 0x24f5b0u: goto label_24f5b0;
        case 0x24f5b4u: goto label_24f5b4;
        case 0x24f5b8u: goto label_24f5b8;
        case 0x24f5bcu: goto label_24f5bc;
        case 0x24f5c0u: goto label_24f5c0;
        case 0x24f5c4u: goto label_24f5c4;
        case 0x24f5c8u: goto label_24f5c8;
        case 0x24f5ccu: goto label_24f5cc;
        case 0x24f5d0u: goto label_24f5d0;
        case 0x24f5d4u: goto label_24f5d4;
        case 0x24f5d8u: goto label_24f5d8;
        case 0x24f5dcu: goto label_24f5dc;
        case 0x24f5e0u: goto label_24f5e0;
        case 0x24f5e4u: goto label_24f5e4;
        case 0x24f5e8u: goto label_24f5e8;
        case 0x24f5ecu: goto label_24f5ec;
        case 0x24f5f0u: goto label_24f5f0;
        case 0x24f5f4u: goto label_24f5f4;
        case 0x24f5f8u: goto label_24f5f8;
        case 0x24f5fcu: goto label_24f5fc;
        case 0x24f600u: goto label_24f600;
        case 0x24f604u: goto label_24f604;
        case 0x24f608u: goto label_24f608;
        case 0x24f60cu: goto label_24f60c;
        case 0x24f610u: goto label_24f610;
        case 0x24f614u: goto label_24f614;
        case 0x24f618u: goto label_24f618;
        case 0x24f61cu: goto label_24f61c;
        case 0x24f620u: goto label_24f620;
        case 0x24f624u: goto label_24f624;
        case 0x24f628u: goto label_24f628;
        case 0x24f62cu: goto label_24f62c;
        case 0x24f630u: goto label_24f630;
        case 0x24f634u: goto label_24f634;
        case 0x24f638u: goto label_24f638;
        case 0x24f63cu: goto label_24f63c;
        case 0x24f640u: goto label_24f640;
        case 0x24f644u: goto label_24f644;
        case 0x24f648u: goto label_24f648;
        case 0x24f64cu: goto label_24f64c;
        case 0x24f650u: goto label_24f650;
        case 0x24f654u: goto label_24f654;
        case 0x24f658u: goto label_24f658;
        case 0x24f65cu: goto label_24f65c;
        case 0x24f660u: goto label_24f660;
        case 0x24f664u: goto label_24f664;
        case 0x24f668u: goto label_24f668;
        case 0x24f66cu: goto label_24f66c;
        case 0x24f670u: goto label_24f670;
        case 0x24f674u: goto label_24f674;
        case 0x24f678u: goto label_24f678;
        case 0x24f67cu: goto label_24f67c;
        case 0x24f680u: goto label_24f680;
        case 0x24f684u: goto label_24f684;
        case 0x24f688u: goto label_24f688;
        case 0x24f68cu: goto label_24f68c;
        case 0x24f690u: goto label_24f690;
        case 0x24f694u: goto label_24f694;
        case 0x24f698u: goto label_24f698;
        case 0x24f69cu: goto label_24f69c;
        case 0x24f6a0u: goto label_24f6a0;
        case 0x24f6a4u: goto label_24f6a4;
        case 0x24f6a8u: goto label_24f6a8;
        case 0x24f6acu: goto label_24f6ac;
        case 0x24f6b0u: goto label_24f6b0;
        case 0x24f6b4u: goto label_24f6b4;
        case 0x24f6b8u: goto label_24f6b8;
        case 0x24f6bcu: goto label_24f6bc;
        case 0x24f6c0u: goto label_24f6c0;
        case 0x24f6c4u: goto label_24f6c4;
        case 0x24f6c8u: goto label_24f6c8;
        case 0x24f6ccu: goto label_24f6cc;
        case 0x24f6d0u: goto label_24f6d0;
        case 0x24f6d4u: goto label_24f6d4;
        case 0x24f6d8u: goto label_24f6d8;
        case 0x24f6dcu: goto label_24f6dc;
        case 0x24f6e0u: goto label_24f6e0;
        case 0x24f6e4u: goto label_24f6e4;
        case 0x24f6e8u: goto label_24f6e8;
        case 0x24f6ecu: goto label_24f6ec;
        case 0x24f6f0u: goto label_24f6f0;
        case 0x24f6f4u: goto label_24f6f4;
        case 0x24f6f8u: goto label_24f6f8;
        case 0x24f6fcu: goto label_24f6fc;
        case 0x24f700u: goto label_24f700;
        case 0x24f704u: goto label_24f704;
        case 0x24f708u: goto label_24f708;
        case 0x24f70cu: goto label_24f70c;
        case 0x24f710u: goto label_24f710;
        case 0x24f714u: goto label_24f714;
        case 0x24f718u: goto label_24f718;
        case 0x24f71cu: goto label_24f71c;
        case 0x24f720u: goto label_24f720;
        case 0x24f724u: goto label_24f724;
        case 0x24f728u: goto label_24f728;
        case 0x24f72cu: goto label_24f72c;
        case 0x24f730u: goto label_24f730;
        case 0x24f734u: goto label_24f734;
        case 0x24f738u: goto label_24f738;
        case 0x24f73cu: goto label_24f73c;
        case 0x24f740u: goto label_24f740;
        case 0x24f744u: goto label_24f744;
        case 0x24f748u: goto label_24f748;
        case 0x24f74cu: goto label_24f74c;
        case 0x24f750u: goto label_24f750;
        case 0x24f754u: goto label_24f754;
        case 0x24f758u: goto label_24f758;
        case 0x24f75cu: goto label_24f75c;
        case 0x24f760u: goto label_24f760;
        case 0x24f764u: goto label_24f764;
        case 0x24f768u: goto label_24f768;
        case 0x24f76cu: goto label_24f76c;
        case 0x24f770u: goto label_24f770;
        case 0x24f774u: goto label_24f774;
        case 0x24f778u: goto label_24f778;
        case 0x24f77cu: goto label_24f77c;
        case 0x24f780u: goto label_24f780;
        case 0x24f784u: goto label_24f784;
        case 0x24f788u: goto label_24f788;
        case 0x24f78cu: goto label_24f78c;
        case 0x24f790u: goto label_24f790;
        case 0x24f794u: goto label_24f794;
        case 0x24f798u: goto label_24f798;
        case 0x24f79cu: goto label_24f79c;
        case 0x24f7a0u: goto label_24f7a0;
        case 0x24f7a4u: goto label_24f7a4;
        case 0x24f7a8u: goto label_24f7a8;
        case 0x24f7acu: goto label_24f7ac;
        case 0x24f7b0u: goto label_24f7b0;
        case 0x24f7b4u: goto label_24f7b4;
        case 0x24f7b8u: goto label_24f7b8;
        case 0x24f7bcu: goto label_24f7bc;
        case 0x24f7c0u: goto label_24f7c0;
        case 0x24f7c4u: goto label_24f7c4;
        case 0x24f7c8u: goto label_24f7c8;
        case 0x24f7ccu: goto label_24f7cc;
        case 0x24f7d0u: goto label_24f7d0;
        case 0x24f7d4u: goto label_24f7d4;
        case 0x24f7d8u: goto label_24f7d8;
        case 0x24f7dcu: goto label_24f7dc;
        case 0x24f7e0u: goto label_24f7e0;
        case 0x24f7e4u: goto label_24f7e4;
        case 0x24f7e8u: goto label_24f7e8;
        case 0x24f7ecu: goto label_24f7ec;
        case 0x24f7f0u: goto label_24f7f0;
        case 0x24f7f4u: goto label_24f7f4;
        case 0x24f7f8u: goto label_24f7f8;
        case 0x24f7fcu: goto label_24f7fc;
        case 0x24f800u: goto label_24f800;
        case 0x24f804u: goto label_24f804;
        case 0x24f808u: goto label_24f808;
        case 0x24f80cu: goto label_24f80c;
        case 0x24f810u: goto label_24f810;
        case 0x24f814u: goto label_24f814;
        case 0x24f818u: goto label_24f818;
        case 0x24f81cu: goto label_24f81c;
        case 0x24f820u: goto label_24f820;
        case 0x24f824u: goto label_24f824;
        case 0x24f828u: goto label_24f828;
        case 0x24f82cu: goto label_24f82c;
        case 0x24f830u: goto label_24f830;
        case 0x24f834u: goto label_24f834;
        case 0x24f838u: goto label_24f838;
        case 0x24f83cu: goto label_24f83c;
        case 0x24f840u: goto label_24f840;
        case 0x24f844u: goto label_24f844;
        case 0x24f848u: goto label_24f848;
        case 0x24f84cu: goto label_24f84c;
        case 0x24f850u: goto label_24f850;
        case 0x24f854u: goto label_24f854;
        case 0x24f858u: goto label_24f858;
        case 0x24f85cu: goto label_24f85c;
        case 0x24f860u: goto label_24f860;
        case 0x24f864u: goto label_24f864;
        case 0x24f868u: goto label_24f868;
        case 0x24f86cu: goto label_24f86c;
        case 0x24f870u: goto label_24f870;
        case 0x24f874u: goto label_24f874;
        case 0x24f878u: goto label_24f878;
        case 0x24f87cu: goto label_24f87c;
        case 0x24f880u: goto label_24f880;
        case 0x24f884u: goto label_24f884;
        case 0x24f888u: goto label_24f888;
        case 0x24f88cu: goto label_24f88c;
        case 0x24f890u: goto label_24f890;
        case 0x24f894u: goto label_24f894;
        case 0x24f898u: goto label_24f898;
        case 0x24f89cu: goto label_24f89c;
        case 0x24f8a0u: goto label_24f8a0;
        case 0x24f8a4u: goto label_24f8a4;
        case 0x24f8a8u: goto label_24f8a8;
        case 0x24f8acu: goto label_24f8ac;
        case 0x24f8b0u: goto label_24f8b0;
        case 0x24f8b4u: goto label_24f8b4;
        case 0x24f8b8u: goto label_24f8b8;
        case 0x24f8bcu: goto label_24f8bc;
        case 0x24f8c0u: goto label_24f8c0;
        case 0x24f8c4u: goto label_24f8c4;
        case 0x24f8c8u: goto label_24f8c8;
        case 0x24f8ccu: goto label_24f8cc;
        case 0x24f8d0u: goto label_24f8d0;
        case 0x24f8d4u: goto label_24f8d4;
        case 0x24f8d8u: goto label_24f8d8;
        case 0x24f8dcu: goto label_24f8dc;
        case 0x24f8e0u: goto label_24f8e0;
        case 0x24f8e4u: goto label_24f8e4;
        case 0x24f8e8u: goto label_24f8e8;
        case 0x24f8ecu: goto label_24f8ec;
        case 0x24f8f0u: goto label_24f8f0;
        case 0x24f8f4u: goto label_24f8f4;
        case 0x24f8f8u: goto label_24f8f8;
        case 0x24f8fcu: goto label_24f8fc;
        case 0x24f900u: goto label_24f900;
        case 0x24f904u: goto label_24f904;
        case 0x24f908u: goto label_24f908;
        case 0x24f90cu: goto label_24f90c;
        case 0x24f910u: goto label_24f910;
        case 0x24f914u: goto label_24f914;
        case 0x24f918u: goto label_24f918;
        case 0x24f91cu: goto label_24f91c;
        case 0x24f920u: goto label_24f920;
        case 0x24f924u: goto label_24f924;
        case 0x24f928u: goto label_24f928;
        case 0x24f92cu: goto label_24f92c;
        case 0x24f930u: goto label_24f930;
        case 0x24f934u: goto label_24f934;
        case 0x24f938u: goto label_24f938;
        case 0x24f93cu: goto label_24f93c;
        case 0x24f940u: goto label_24f940;
        case 0x24f944u: goto label_24f944;
        case 0x24f948u: goto label_24f948;
        case 0x24f94cu: goto label_24f94c;
        case 0x24f950u: goto label_24f950;
        case 0x24f954u: goto label_24f954;
        case 0x24f958u: goto label_24f958;
        case 0x24f95cu: goto label_24f95c;
        case 0x24f960u: goto label_24f960;
        case 0x24f964u: goto label_24f964;
        case 0x24f968u: goto label_24f968;
        case 0x24f96cu: goto label_24f96c;
        case 0x24f970u: goto label_24f970;
        case 0x24f974u: goto label_24f974;
        case 0x24f978u: goto label_24f978;
        case 0x24f97cu: goto label_24f97c;
        case 0x24f980u: goto label_24f980;
        case 0x24f984u: goto label_24f984;
        case 0x24f988u: goto label_24f988;
        case 0x24f98cu: goto label_24f98c;
        case 0x24f990u: goto label_24f990;
        case 0x24f994u: goto label_24f994;
        case 0x24f998u: goto label_24f998;
        case 0x24f99cu: goto label_24f99c;
        case 0x24f9a0u: goto label_24f9a0;
        case 0x24f9a4u: goto label_24f9a4;
        case 0x24f9a8u: goto label_24f9a8;
        case 0x24f9acu: goto label_24f9ac;
        case 0x24f9b0u: goto label_24f9b0;
        case 0x24f9b4u: goto label_24f9b4;
        case 0x24f9b8u: goto label_24f9b8;
        case 0x24f9bcu: goto label_24f9bc;
        case 0x24f9c0u: goto label_24f9c0;
        case 0x24f9c4u: goto label_24f9c4;
        case 0x24f9c8u: goto label_24f9c8;
        case 0x24f9ccu: goto label_24f9cc;
        case 0x24f9d0u: goto label_24f9d0;
        case 0x24f9d4u: goto label_24f9d4;
        case 0x24f9d8u: goto label_24f9d8;
        case 0x24f9dcu: goto label_24f9dc;
        case 0x24f9e0u: goto label_24f9e0;
        case 0x24f9e4u: goto label_24f9e4;
        case 0x24f9e8u: goto label_24f9e8;
        case 0x24f9ecu: goto label_24f9ec;
        case 0x24f9f0u: goto label_24f9f0;
        case 0x24f9f4u: goto label_24f9f4;
        case 0x24f9f8u: goto label_24f9f8;
        case 0x24f9fcu: goto label_24f9fc;
        case 0x24fa00u: goto label_24fa00;
        case 0x24fa04u: goto label_24fa04;
        case 0x24fa08u: goto label_24fa08;
        case 0x24fa0cu: goto label_24fa0c;
        case 0x24fa10u: goto label_24fa10;
        case 0x24fa14u: goto label_24fa14;
        case 0x24fa18u: goto label_24fa18;
        case 0x24fa1cu: goto label_24fa1c;
        case 0x24fa20u: goto label_24fa20;
        case 0x24fa24u: goto label_24fa24;
        case 0x24fa28u: goto label_24fa28;
        case 0x24fa2cu: goto label_24fa2c;
        case 0x24fa30u: goto label_24fa30;
        case 0x24fa34u: goto label_24fa34;
        case 0x24fa38u: goto label_24fa38;
        case 0x24fa3cu: goto label_24fa3c;
        case 0x24fa40u: goto label_24fa40;
        case 0x24fa44u: goto label_24fa44;
        case 0x24fa48u: goto label_24fa48;
        case 0x24fa4cu: goto label_24fa4c;
        case 0x24fa50u: goto label_24fa50;
        case 0x24fa54u: goto label_24fa54;
        case 0x24fa58u: goto label_24fa58;
        case 0x24fa5cu: goto label_24fa5c;
        case 0x24fa60u: goto label_24fa60;
        case 0x24fa64u: goto label_24fa64;
        case 0x24fa68u: goto label_24fa68;
        case 0x24fa6cu: goto label_24fa6c;
        case 0x24fa70u: goto label_24fa70;
        case 0x24fa74u: goto label_24fa74;
        case 0x24fa78u: goto label_24fa78;
        case 0x24fa7cu: goto label_24fa7c;
        case 0x24fa80u: goto label_24fa80;
        case 0x24fa84u: goto label_24fa84;
        case 0x24fa88u: goto label_24fa88;
        case 0x24fa8cu: goto label_24fa8c;
        case 0x24fa90u: goto label_24fa90;
        case 0x24fa94u: goto label_24fa94;
        case 0x24fa98u: goto label_24fa98;
        case 0x24fa9cu: goto label_24fa9c;
        case 0x24faa0u: goto label_24faa0;
        case 0x24faa4u: goto label_24faa4;
        case 0x24faa8u: goto label_24faa8;
        case 0x24faacu: goto label_24faac;
        case 0x24fab0u: goto label_24fab0;
        case 0x24fab4u: goto label_24fab4;
        case 0x24fab8u: goto label_24fab8;
        case 0x24fabcu: goto label_24fabc;
        case 0x24fac0u: goto label_24fac0;
        case 0x24fac4u: goto label_24fac4;
        case 0x24fac8u: goto label_24fac8;
        case 0x24faccu: goto label_24facc;
        case 0x24fad0u: goto label_24fad0;
        case 0x24fad4u: goto label_24fad4;
        case 0x24fad8u: goto label_24fad8;
        case 0x24fadcu: goto label_24fadc;
        case 0x24fae0u: goto label_24fae0;
        case 0x24fae4u: goto label_24fae4;
        case 0x24fae8u: goto label_24fae8;
        case 0x24faecu: goto label_24faec;
        case 0x24faf0u: goto label_24faf0;
        case 0x24faf4u: goto label_24faf4;
        case 0x24faf8u: goto label_24faf8;
        case 0x24fafcu: goto label_24fafc;
        case 0x24fb00u: goto label_24fb00;
        case 0x24fb04u: goto label_24fb04;
        case 0x24fb08u: goto label_24fb08;
        case 0x24fb0cu: goto label_24fb0c;
        case 0x24fb10u: goto label_24fb10;
        case 0x24fb14u: goto label_24fb14;
        case 0x24fb18u: goto label_24fb18;
        case 0x24fb1cu: goto label_24fb1c;
        case 0x24fb20u: goto label_24fb20;
        case 0x24fb24u: goto label_24fb24;
        case 0x24fb28u: goto label_24fb28;
        case 0x24fb2cu: goto label_24fb2c;
        case 0x24fb30u: goto label_24fb30;
        case 0x24fb34u: goto label_24fb34;
        case 0x24fb38u: goto label_24fb38;
        case 0x24fb3cu: goto label_24fb3c;
        case 0x24fb40u: goto label_24fb40;
        case 0x24fb44u: goto label_24fb44;
        case 0x24fb48u: goto label_24fb48;
        case 0x24fb4cu: goto label_24fb4c;
        case 0x24fb50u: goto label_24fb50;
        case 0x24fb54u: goto label_24fb54;
        case 0x24fb58u: goto label_24fb58;
        case 0x24fb5cu: goto label_24fb5c;
        case 0x24fb60u: goto label_24fb60;
        case 0x24fb64u: goto label_24fb64;
        case 0x24fb68u: goto label_24fb68;
        case 0x24fb6cu: goto label_24fb6c;
        case 0x24fb70u: goto label_24fb70;
        case 0x24fb74u: goto label_24fb74;
        case 0x24fb78u: goto label_24fb78;
        case 0x24fb7cu: goto label_24fb7c;
        case 0x24fb80u: goto label_24fb80;
        case 0x24fb84u: goto label_24fb84;
        case 0x24fb88u: goto label_24fb88;
        case 0x24fb8cu: goto label_24fb8c;
        case 0x24fb90u: goto label_24fb90;
        case 0x24fb94u: goto label_24fb94;
        case 0x24fb98u: goto label_24fb98;
        case 0x24fb9cu: goto label_24fb9c;
        default: return;
    }

label_24f3d0:
    // 0x24f3d0: 0x6e1  .word       0x000006E1                   # addu        $zero, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f3d0u;
    SET_GPR_S32(ctx, 0, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_24f3d4:
    // 0x24f3d4: 0x6e2  .word       0x000006E2                   # neg         $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f3d4u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 0, (int32_t)tmp); }
label_24f3d8:
    // 0x24f3d8: 0x6e5  .word       0x000006E5                   # move        $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f3d8u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_24f3dc:
    // 0x24f3dc: 0x6e6  .word       0x000006E6                   # xor         $zero, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f3dcu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_24f3e0:
    // 0x24f3e0: 0x6e9  .word       0x000006E9                   # mtsa        $zero # 000006C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x24f3e0u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_24f3e4:
    // 0x24f3e4: 0x6ea  .word       0x000006EA                   # slt         $zero, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f3e4u;
    SET_GPR_U64(ctx, 0, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_24f3e8:
    // 0x24f3e8: 0x6ed  .word       0x000006ED                   # daddu       $zero, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f3e8u;
    SET_GPR_U64(ctx, 0, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24f3ec:
    // 0x24f3ec: 0x6ee  .word       0x000006EE                   # dsub        $zero, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f3ecu;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_24f3f0:
    // 0x24f3f0: 0x6f1  tgeu        $zero, $zero, 27
    ctx->pc = 0x24f3f0u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_24f3f4:
    // 0x24f3f4: 0x6f2  tlt         $zero, $zero, 27
    ctx->pc = 0x24f3f4u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_24f3f8:
    // 0x24f3f8: 0x6f5  .word       0x000006F5                   # INVALID     $zero, $zero, 0x6F5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f3f8u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x24F3F8 raw=0x000006F5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24f3fc:
    // 0x24f3fc: 0x6f6  tne         $zero, $zero, 27
    ctx->pc = 0x24f3fcu;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_24f400:
    // 0x24f400: 0x6f9  .word       0x000006F9                   # INVALID     $zero, $zero, 0x6F9 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f400u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x24F400 raw=0x000006F9"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24f404:
    // 0x24f404: 0x6fa  dsrl        $zero, $zero, 27
    ctx->pc = 0x24f404u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> 27);
label_24f408:
    // 0x24f408: 0x6fd  .word       0x000006FD                   # INVALID     $zero, $zero, 0x6FD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f408u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x24F408 raw=0x000006FD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24f40c:
    // 0x24f40c: 0x6fe  dsrl32      $zero, $zero, 27
    ctx->pc = 0x24f40cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (32 + 27));
label_24f410:
    // 0x24f410: 0x701  .word       0x00000701                   # INVALID     $zero, $zero, 0x701 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f410u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x24F410 raw=0x00000701"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24f414:
    // 0x24f414: 0x702  srl         $zero, $zero, 28
    ctx->pc = 0x24f414u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 28));
label_24f418:
    // 0x24f418: 0x705  .word       0x00000705                   # INVALID     $zero, $zero, 0x705 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f418u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x24F418 raw=0x00000705"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24f41c:
    // 0x24f41c: 0x706  .word       0x00000706                   # srlv        $zero, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f41cu;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_24f420:
    // 0x24f420: 0x709  .word       0x00000709                   # jalr        $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
label_24f424:
    if (ctx->pc == 0x24F424u) {
        ctx->pc = 0x24F424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F420u;
        // 0x24f424: 0x70a  .word       0x0000070A                   # movz        $zero, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24F428u;
        goto label_24f428;
    }
    ctx->pc = 0x24F420u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x24F424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F420u;
        // 0x24f424: 0x70a  .word       0x0000070A                   # movz        $zero, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24F420u, 0x24F428u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24F428u;
label_24f428:
    // 0x24f428: 0x70d  break       0, 28
    ctx->pc = 0x24f428u;
    runtime->handleBreak(rdram, ctx);
label_24f42c:
    // 0x24f42c: 0x70e  .word       0x0000070E                   # INVALID     $zero, $zero, 0x70E # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f42cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x24F42C raw=0x0000070E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24f430:
    // 0x24f430: 0x711  .word       0x00000711                   # mthi        $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f430u;
    ctx->hi = GPR_U64(ctx, 0);
label_24f434:
    // 0x24f434: 0x712  .word       0x00000712                   # mflo        $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f434u;
    SET_GPR_U64(ctx, 0, ctx->lo);
label_24f438:
    // 0x24f438: 0x715  .word       0x00000715                   # INVALID     $zero, $zero, 0x715 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f438u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x24F438 raw=0x00000715"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24f43c:
    // 0x24f43c: 0x716  .word       0x00000716                   # dsrlv       $zero, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f43cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_24f440:
    // 0x24f440: 0x719  .word       0x00000719                   # multu       $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f440u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_24f444:
    // 0x24f444: 0x71a  .word       0x0000071A                   # div         $zero, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f444u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_24f448:
    // 0x24f448: 0x71d  .word       0x0000071D                   # dmultu      $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f448u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x24F448 raw=0x0000071D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24f44c:
    // 0x24f44c: 0x71e  .word       0x0000071E                   # ddiv        $zero, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f44cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x24F44C raw=0x0000071E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24f450:
    // 0x24f450: 0x721  .word       0x00000721                   # addu        $zero, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f450u;
    SET_GPR_S32(ctx, 0, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_24f454:
    // 0x24f454: 0x722  .word       0x00000722                   # neg         $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f454u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 0, (int32_t)tmp); }
label_24f458:
    // 0x24f458: 0x725  .word       0x00000725                   # move        $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f458u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_24f45c:
    // 0x24f45c: 0x726  .word       0x00000726                   # xor         $zero, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f45cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_24f460:
    // 0x24f460: 0x729  .word       0x00000729                   # mtsa        $zero # 00000700 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x24f460u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_24f464:
    // 0x24f464: 0x72a  .word       0x0000072A                   # slt         $zero, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f464u;
    SET_GPR_U64(ctx, 0, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_24f468:
    // 0x24f468: 0x72d  .word       0x0000072D                   # daddu       $zero, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f468u;
    SET_GPR_U64(ctx, 0, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24f46c:
    // 0x24f46c: 0x72e  .word       0x0000072E                   # dsub        $zero, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f46cu;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_24f470:
    // 0x24f470: 0x731  tgeu        $zero, $zero, 28
    ctx->pc = 0x24f470u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_24f474:
    // 0x24f474: 0x732  tlt         $zero, $zero, 28
    ctx->pc = 0x24f474u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_24f478:
    // 0x24f478: 0x735  .word       0x00000735                   # INVALID     $zero, $zero, 0x735 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f478u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x24F478 raw=0x00000735"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24f47c:
    // 0x24f47c: 0x736  tne         $zero, $zero, 28
    ctx->pc = 0x24f47cu;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_24f480:
    // 0x24f480: 0x739  .word       0x00000739                   # INVALID     $zero, $zero, 0x739 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f480u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x24F480 raw=0x00000739"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24f484:
    // 0x24f484: 0x73a  dsrl        $zero, $zero, 28
    ctx->pc = 0x24f484u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> 28);
label_24f488:
    // 0x24f488: 0x73d  .word       0x0000073D                   # INVALID     $zero, $zero, 0x73D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f488u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x24F488 raw=0x0000073D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24f48c:
    // 0x24f48c: 0x73e  dsrl32      $zero, $zero, 28
    ctx->pc = 0x24f48cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (32 + 28));
label_24f490:
    // 0x24f490: 0x741  .word       0x00000741                   # INVALID     $zero, $zero, 0x741 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f490u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x24F490 raw=0x00000741"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24f494:
    // 0x24f494: 0x742  srl         $zero, $zero, 29
    ctx->pc = 0x24f494u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 29));
label_24f498:
    // 0x24f498: 0x745  .word       0x00000745                   # INVALID     $zero, $zero, 0x745 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f498u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x24F498 raw=0x00000745"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24f49c:
    // 0x24f49c: 0x746  .word       0x00000746                   # srlv        $zero, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f49cu;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_24f4a0:
    // 0x24f4a0: 0x749  .word       0x00000749                   # jalr        $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
label_24f4a4:
    if (ctx->pc == 0x24F4A4u) {
        ctx->pc = 0x24F4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F4A0u;
        // 0x24f4a4: 0x74a  .word       0x0000074A                   # movz        $zero, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24F4A8u;
        goto label_24f4a8;
    }
    ctx->pc = 0x24F4A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x24F4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F4A0u;
        // 0x24f4a4: 0x74a  .word       0x0000074A                   # movz        $zero, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24F4A0u, 0x24F4A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24F4A8u;
label_24f4a8:
    // 0x24f4a8: 0x74d  break       0, 29
    ctx->pc = 0x24f4a8u;
    runtime->handleBreak(rdram, ctx);
label_24f4ac:
    // 0x24f4ac: 0x74e  .word       0x0000074E                   # INVALID     $zero, $zero, 0x74E # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f4acu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x24F4AC raw=0x0000074E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24f4b0:
    // 0x24f4b0: 0x751  .word       0x00000751                   # mthi        $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f4b0u;
    ctx->hi = GPR_U64(ctx, 0);
label_24f4b4:
    // 0x24f4b4: 0x752  .word       0x00000752                   # mflo        $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f4b4u;
    SET_GPR_U64(ctx, 0, ctx->lo);
label_24f4b8:
    // 0x24f4b8: 0x755  .word       0x00000755                   # INVALID     $zero, $zero, 0x755 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f4b8u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x24F4B8 raw=0x00000755"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24f4bc:
    // 0x24f4bc: 0x756  .word       0x00000756                   # dsrlv       $zero, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f4bcu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_24f4c0:
    // 0x24f4c0: 0x759  .word       0x00000759                   # multu       $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f4c0u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_24f4c4:
    // 0x24f4c4: 0x75a  .word       0x0000075A                   # div         $zero, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f4c4u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_24f4c8:
    // 0x24f4c8: 0x75d  .word       0x0000075D                   # dmultu      $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f4c8u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x24F4C8 raw=0x0000075D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24f4cc:
    // 0x24f4cc: 0x75e  .word       0x0000075E                   # ddiv        $zero, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f4ccu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x24F4CC raw=0x0000075E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24f4d0:
    // 0x24f4d0: 0x761  .word       0x00000761                   # addu        $zero, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f4d0u;
    SET_GPR_S32(ctx, 0, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_24f4d4:
    // 0x24f4d4: 0x762  .word       0x00000762                   # neg         $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f4d4u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 0, (int32_t)tmp); }
label_24f4d8:
    // 0x24f4d8: 0x765  .word       0x00000765                   # move        $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f4d8u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_24f4dc:
    // 0x24f4dc: 0x766  .word       0x00000766                   # xor         $zero, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f4dcu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_24f4e0:
    // 0x24f4e0: 0x769  .word       0x00000769                   # mtsa        $zero # 00000740 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x24f4e0u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_24f4e4:
    // 0x24f4e4: 0x76a  .word       0x0000076A                   # slt         $zero, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f4e4u;
    SET_GPR_U64(ctx, 0, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_24f4e8:
    // 0x24f4e8: 0x76d  .word       0x0000076D                   # daddu       $zero, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f4e8u;
    SET_GPR_U64(ctx, 0, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24f4ec:
    // 0x24f4ec: 0x76e  .word       0x0000076E                   # dsub        $zero, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f4ecu;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_24f4f0:
    // 0x24f4f0: 0x771  tgeu        $zero, $zero, 29
    ctx->pc = 0x24f4f0u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_24f4f4:
    // 0x24f4f4: 0x772  tlt         $zero, $zero, 29
    ctx->pc = 0x24f4f4u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_24f4f8:
    // 0x24f4f8: 0x775  .word       0x00000775                   # INVALID     $zero, $zero, 0x775 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f4f8u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x24F4F8 raw=0x00000775"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24f4fc:
    // 0x24f4fc: 0x776  tne         $zero, $zero, 29
    ctx->pc = 0x24f4fcu;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_24f500:
    // 0x24f500: 0x779  .word       0x00000779                   # INVALID     $zero, $zero, 0x779 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f500u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x24F500 raw=0x00000779"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24f504:
    // 0x24f504: 0x77a  dsrl        $zero, $zero, 29
    ctx->pc = 0x24f504u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> 29);
label_24f508:
    // 0x24f508: 0x77d  .word       0x0000077D                   # INVALID     $zero, $zero, 0x77D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f508u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x24F508 raw=0x0000077D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24f50c:
    // 0x24f50c: 0x77e  dsrl32      $zero, $zero, 29
    ctx->pc = 0x24f50cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (32 + 29));
label_24f510:
    // 0x24f510: 0x781  .word       0x00000781                   # INVALID     $zero, $zero, 0x781 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f510u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x24F510 raw=0x00000781"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24f514:
    // 0x24f514: 0x782  srl         $zero, $zero, 30
    ctx->pc = 0x24f514u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 30));
label_24f518:
    // 0x24f518: 0x785  .word       0x00000785                   # INVALID     $zero, $zero, 0x785 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f518u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x24F518 raw=0x00000785"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24f51c:
    // 0x24f51c: 0x786  .word       0x00000786                   # srlv        $zero, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f51cu;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_24f520:
    // 0x24f520: 0x789  .word       0x00000789                   # jalr        $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
label_24f524:
    if (ctx->pc == 0x24F524u) {
        ctx->pc = 0x24F524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F520u;
        // 0x24f524: 0x78a  .word       0x0000078A                   # movz        $zero, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24F528u;
        goto label_24f528;
    }
    ctx->pc = 0x24F520u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x24F524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F520u;
        // 0x24f524: 0x78a  .word       0x0000078A                   # movz        $zero, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24F520u, 0x24F528u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24F528u;
label_24f528:
    // 0x24f528: 0x78d  break       0, 30
    ctx->pc = 0x24f528u;
    runtime->handleBreak(rdram, ctx);
label_24f52c:
    // 0x24f52c: 0x78e  .word       0x0000078E                   # INVALID     $zero, $zero, 0x78E # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f52cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x24F52C raw=0x0000078E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24f530:
    // 0x24f530: 0x791  .word       0x00000791                   # mthi        $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f530u;
    ctx->hi = GPR_U64(ctx, 0);
label_24f534:
    // 0x24f534: 0x792  .word       0x00000792                   # mflo        $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f534u;
    SET_GPR_U64(ctx, 0, ctx->lo);
label_24f538:
    // 0x24f538: 0x795  .word       0x00000795                   # INVALID     $zero, $zero, 0x795 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f538u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x24F538 raw=0x00000795"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24f53c:
    // 0x24f53c: 0x796  .word       0x00000796                   # dsrlv       $zero, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f53cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_24f540:
    // 0x24f540: 0x799  .word       0x00000799                   # multu       $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f540u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_24f544:
    // 0x24f544: 0x79a  .word       0x0000079A                   # div         $zero, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f544u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_24f548:
    // 0x24f548: 0x79d  .word       0x0000079D                   # dmultu      $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f548u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x24F548 raw=0x0000079D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24f54c:
    // 0x24f54c: 0x79e  .word       0x0000079E                   # ddiv        $zero, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f54cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x24F54C raw=0x0000079E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24f550:
    // 0x24f550: 0x7a1  .word       0x000007A1                   # addu        $zero, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f550u;
    SET_GPR_S32(ctx, 0, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_24f554:
    // 0x24f554: 0x7a2  .word       0x000007A2                   # neg         $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f554u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 0, (int32_t)tmp); }
label_24f558:
    // 0x24f558: 0x7a5  .word       0x000007A5                   # move        $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f558u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_24f55c:
    // 0x24f55c: 0x7a6  .word       0x000007A6                   # xor         $zero, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f55cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_24f560:
    // 0x24f560: 0x7a9  .word       0x000007A9                   # mtsa        $zero # 00000780 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x24f560u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_24f564:
    // 0x24f564: 0x7aa  .word       0x000007AA                   # slt         $zero, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f564u;
    SET_GPR_U64(ctx, 0, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_24f568:
    // 0x24f568: 0x7ad  .word       0x000007AD                   # daddu       $zero, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f568u;
    SET_GPR_U64(ctx, 0, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24f56c:
    // 0x24f56c: 0x7ae  .word       0x000007AE                   # dsub        $zero, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f56cu;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_24f570:
    // 0x24f570: 0x7b1  tgeu        $zero, $zero, 30
    ctx->pc = 0x24f570u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_24f574:
    // 0x24f574: 0x7b2  tlt         $zero, $zero, 30
    ctx->pc = 0x24f574u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_24f578:
    // 0x24f578: 0x7b5  .word       0x000007B5                   # INVALID     $zero, $zero, 0x7B5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f578u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x24F578 raw=0x000007B5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24f57c:
    // 0x24f57c: 0x7b6  tne         $zero, $zero, 30
    ctx->pc = 0x24f57cu;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_24f580:
    // 0x24f580: 0xa49  .word       0x00000A49                   # jalr        $at, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
label_24f584:
    if (ctx->pc == 0x24F584u) {
        ctx->pc = 0x24F584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F580u;
        // 0x24f584: 0xa4a  .word       0x00000A4A                   # movz        $at, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 1, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24F588u;
        goto label_24f588;
    }
    ctx->pc = 0x24F580u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 1, 0x24F588u);
        ctx->pc = 0x24F584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F580u;
        // 0x24f584: 0xa4a  .word       0x00000A4A                   # movz        $at, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 1, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24F580u, 0x24F588u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24F588u;
label_24f588:
    // 0x24f588: 0xa4d  break       0, 41
    ctx->pc = 0x24f588u;
    runtime->handleBreak(rdram, ctx);
label_24f58c:
    // 0x24f58c: 0xa4e  .word       0x00000A4E                   # INVALID     $zero, $zero, 0xA4E # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f58cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x24F58C raw=0x00000A4E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24f590:
    // 0x24f590: 0xa51  .word       0x00000A51                   # mthi        $zero # 00000A40 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f590u;
    ctx->hi = GPR_U64(ctx, 0);
label_24f594:
    // 0x24f594: 0xa52  .word       0x00000A52                   # mflo        $at # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f594u;
    SET_GPR_U64(ctx, 1, ctx->lo);
label_24f598:
    // 0x24f598: 0xa55  .word       0x00000A55                   # INVALID     $zero, $zero, 0xA55 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f598u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x24F598 raw=0x00000A55"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24f59c:
    // 0x24f59c: 0xa56  .word       0x00000A56                   # dsrlv       $at, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f59cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_24f5a0:
    // 0x24f5a0: 0xa59  .word       0x00000A59                   # multu       $zero, $zero # 00000A40 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f5a0u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 1, (int32_t)result); }
label_24f5a4:
    // 0x24f5a4: 0xa5a  .word       0x00000A5A                   # div         $at, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f5a4u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_24f5a8:
    // 0x24f5a8: 0xa5d  .word       0x00000A5D                   # dmultu      $zero, $zero # 00000A40 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f5a8u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x24F5A8 raw=0x00000A5D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24f5ac:
    // 0x24f5ac: 0xa5e  .word       0x00000A5E                   # ddiv        $at, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f5acu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x24F5AC raw=0x00000A5E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24f5b0:
    // 0x24f5b0: 0xa61  .word       0x00000A61                   # addu        $at, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f5b0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_24f5b4:
    // 0x24f5b4: 0xa62  .word       0x00000A62                   # neg         $at, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f5b4u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 1, (int32_t)tmp); }
label_24f5b8:
    // 0x24f5b8: 0xa65  .word       0x00000A65                   # move        $at, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f5b8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_24f5bc:
    // 0x24f5bc: 0xa66  .word       0x00000A66                   # xor         $at, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f5bcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_24f5c0:
    // 0x24f5c0: 0xa69  .word       0x00000A69                   # mtsa        $zero # 00000A40 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x24f5c0u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_24f5c4:
    // 0x24f5c4: 0xa6a  .word       0x00000A6A                   # slt         $at, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f5c4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_24f5c8:
    // 0x24f5c8: 0xa6d  .word       0x00000A6D                   # daddu       $at, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f5c8u;
    SET_GPR_U64(ctx, 1, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24f5cc:
    // 0x24f5cc: 0xa6e  .word       0x00000A6E                   # dsub        $at, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f5ccu;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 1, r); }
label_24f5d0:
    // 0x24f5d0: 0xa71  tgeu        $zero, $zero, 41
    ctx->pc = 0x24f5d0u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_24f5d4:
    // 0x24f5d4: 0xa72  tlt         $zero, $zero, 41
    ctx->pc = 0x24f5d4u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_24f5d8:
    // 0x24f5d8: 0xa75  .word       0x00000A75                   # INVALID     $zero, $zero, 0xA75 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f5d8u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x24F5D8 raw=0x00000A75"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24f5dc:
    // 0x24f5dc: 0xa76  tne         $zero, $zero, 41
    ctx->pc = 0x24f5dcu;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_24f5e0:
    // 0x24f5e0: 0xa79  .word       0x00000A79                   # INVALID     $zero, $zero, 0xA79 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f5e0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x24F5E0 raw=0x00000A79"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24f5e4:
    // 0x24f5e4: 0xa7a  dsrl        $at, $zero, 9
    ctx->pc = 0x24f5e4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) >> 9);
label_24f5e8:
    // 0x24f5e8: 0xa7d  .word       0x00000A7D                   # INVALID     $zero, $zero, 0xA7D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f5e8u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x24F5E8 raw=0x00000A7D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24f5ec:
    // 0x24f5ec: 0xa7e  dsrl32      $at, $zero, 9
    ctx->pc = 0x24f5ecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) >> (32 + 9));
label_24f5f0:
    // 0x24f5f0: 0xa81  .word       0x00000A81                   # INVALID     $zero, $zero, 0xA81 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f5f0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x24F5F0 raw=0x00000A81"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24f5f4:
    // 0x24f5f4: 0xa82  srl         $at, $zero, 10
    ctx->pc = 0x24f5f4u;
    SET_GPR_S32(ctx, 1, (int32_t)SRL32(GPR_U32(ctx, 0), 10));
label_24f5f8:
    // 0x24f5f8: 0xa85  .word       0x00000A85                   # INVALID     $zero, $zero, 0xA85 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f5f8u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x24F5F8 raw=0x00000A85"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24f5fc:
    // 0x24f5fc: 0xa86  .word       0x00000A86                   # srlv        $at, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f5fcu;
    SET_GPR_S32(ctx, 1, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_24f600:
    // 0x24f600: 0xa89  .word       0x00000A89                   # jalr        $at, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
label_24f604:
    if (ctx->pc == 0x24F604u) {
        ctx->pc = 0x24F604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F600u;
        // 0x24f604: 0xa8a  .word       0x00000A8A                   # movz        $at, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 1, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24F608u;
        goto label_24f608;
    }
    ctx->pc = 0x24F600u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 1, 0x24F608u);
        ctx->pc = 0x24F604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F600u;
        // 0x24f604: 0xa8a  .word       0x00000A8A                   # movz        $at, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 1, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24F600u, 0x24F608u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24F608u;
label_24f608:
    // 0x24f608: 0xa8d  break       0, 42
    ctx->pc = 0x24f608u;
    runtime->handleBreak(rdram, ctx);
label_24f60c:
    // 0x24f60c: 0xa8e  .word       0x00000A8E                   # INVALID     $zero, $zero, 0xA8E # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f60cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x24F60C raw=0x00000A8E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24f610:
    // 0x24f610: 0xa91  .word       0x00000A91                   # mthi        $zero # 00000A80 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f610u;
    ctx->hi = GPR_U64(ctx, 0);
label_24f614:
    // 0x24f614: 0xa92  .word       0x00000A92                   # mflo        $at # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f614u;
    SET_GPR_U64(ctx, 1, ctx->lo);
label_24f618:
    // 0x24f618: 0xa95  .word       0x00000A95                   # INVALID     $zero, $zero, 0xA95 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f618u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x24F618 raw=0x00000A95"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24f61c:
    // 0x24f61c: 0xa96  .word       0x00000A96                   # dsrlv       $at, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f61cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_24f620:
    // 0x24f620: 0xa99  .word       0x00000A99                   # multu       $zero, $zero # 00000A80 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f620u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 1, (int32_t)result); }
label_24f624:
    // 0x24f624: 0xa9a  .word       0x00000A9A                   # div         $at, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f624u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_24f628:
    // 0x24f628: 0xa9d  .word       0x00000A9D                   # dmultu      $zero, $zero # 00000A80 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f628u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x24F628 raw=0x00000A9D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24f62c:
    // 0x24f62c: 0xa9e  .word       0x00000A9E                   # ddiv        $at, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f62cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x24F62C raw=0x00000A9E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24f630:
    // 0x24f630: 0xaa1  .word       0x00000AA1                   # addu        $at, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f630u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_24f634:
    // 0x24f634: 0xaa2  .word       0x00000AA2                   # neg         $at, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f634u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 1, (int32_t)tmp); }
label_24f638:
    // 0x24f638: 0xaa5  .word       0x00000AA5                   # move        $at, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f638u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_24f63c:
    // 0x24f63c: 0xaa6  .word       0x00000AA6                   # xor         $at, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f63cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_24f640:
    // 0x24f640: 0xaa9  .word       0x00000AA9                   # mtsa        $zero # 00000A80 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x24f640u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_24f644:
    // 0x24f644: 0xaaa  .word       0x00000AAA                   # slt         $at, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f644u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_24f648:
    // 0x24f648: 0xaad  .word       0x00000AAD                   # daddu       $at, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f648u;
    SET_GPR_U64(ctx, 1, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24f64c:
    // 0x24f64c: 0xaae  .word       0x00000AAE                   # dsub        $at, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f64cu;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 1, r); }
label_24f650:
    // 0x24f650: 0xab1  tgeu        $zero, $zero, 42
    ctx->pc = 0x24f650u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_24f654:
    // 0x24f654: 0xab2  tlt         $zero, $zero, 42
    ctx->pc = 0x24f654u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_24f658:
    // 0x24f658: 0xab5  .word       0x00000AB5                   # INVALID     $zero, $zero, 0xAB5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f658u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x24F658 raw=0x00000AB5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24f65c:
    // 0x24f65c: 0xab6  tne         $zero, $zero, 42
    ctx->pc = 0x24f65cu;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_24f660:
    // 0x24f660: 0xab9  .word       0x00000AB9                   # INVALID     $zero, $zero, 0xAB9 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f660u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x24F660 raw=0x00000AB9"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24f664:
    // 0x24f664: 0xaba  dsrl        $at, $zero, 10
    ctx->pc = 0x24f664u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) >> 10);
label_24f668:
    // 0x24f668: 0xabd  .word       0x00000ABD                   # INVALID     $zero, $zero, 0xABD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f668u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x24F668 raw=0x00000ABD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24f66c:
    // 0x24f66c: 0xabe  dsrl32      $at, $zero, 10
    ctx->pc = 0x24f66cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) >> (32 + 10));
label_24f670:
    // 0x24f670: 0xac1  .word       0x00000AC1                   # INVALID     $zero, $zero, 0xAC1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f670u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x24F670 raw=0x00000AC1"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24f674:
    // 0x24f674: 0xac2  srl         $at, $zero, 11
    ctx->pc = 0x24f674u;
    SET_GPR_S32(ctx, 1, (int32_t)SRL32(GPR_U32(ctx, 0), 11));
label_24f678:
    // 0x24f678: 0xac5  .word       0x00000AC5                   # INVALID     $zero, $zero, 0xAC5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f678u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x24F678 raw=0x00000AC5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24f67c:
    // 0x24f67c: 0xac6  .word       0x00000AC6                   # srlv        $at, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f67cu;
    SET_GPR_S32(ctx, 1, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_24f680:
    // 0x24f680: 0xac9  .word       0x00000AC9                   # jalr        $at, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
label_24f684:
    if (ctx->pc == 0x24F684u) {
        ctx->pc = 0x24F684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F680u;
        // 0x24f684: 0xaca  .word       0x00000ACA                   # movz        $at, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 1, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24F688u;
        goto label_24f688;
    }
    ctx->pc = 0x24F680u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 1, 0x24F688u);
        ctx->pc = 0x24F684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F680u;
        // 0x24f684: 0xaca  .word       0x00000ACA                   # movz        $at, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 1, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24F680u, 0x24F688u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24F688u;
label_24f688:
    // 0x24f688: 0xacd  break       0, 43
    ctx->pc = 0x24f688u;
    runtime->handleBreak(rdram, ctx);
label_24f68c:
    // 0x24f68c: 0xace  .word       0x00000ACE                   # INVALID     $zero, $zero, 0xACE # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f68cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x24F68C raw=0x00000ACE"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24f690:
    // 0x24f690: 0xad1  .word       0x00000AD1                   # mthi        $zero # 00000AC0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f690u;
    ctx->hi = GPR_U64(ctx, 0);
label_24f694:
    // 0x24f694: 0xad2  .word       0x00000AD2                   # mflo        $at # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f694u;
    SET_GPR_U64(ctx, 1, ctx->lo);
label_24f698:
    // 0x24f698: 0xad5  .word       0x00000AD5                   # INVALID     $zero, $zero, 0xAD5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f698u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x24F698 raw=0x00000AD5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24f69c:
    // 0x24f69c: 0xad6  .word       0x00000AD6                   # dsrlv       $at, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f69cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_24f6a0:
    // 0x24f6a0: 0xad9  .word       0x00000AD9                   # multu       $zero, $zero # 00000AC0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f6a0u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 1, (int32_t)result); }
label_24f6a4:
    // 0x24f6a4: 0xada  .word       0x00000ADA                   # div         $at, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f6a4u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_24f6a8:
    // 0x24f6a8: 0xadd  .word       0x00000ADD                   # dmultu      $zero, $zero # 00000AC0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f6a8u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x24F6A8 raw=0x00000ADD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24f6ac:
    // 0x24f6ac: 0xade  .word       0x00000ADE                   # ddiv        $at, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f6acu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x24F6AC raw=0x00000ADE"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24f6b0:
    // 0x24f6b0: 0xae1  .word       0x00000AE1                   # addu        $at, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f6b0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_24f6b4:
    // 0x24f6b4: 0xae2  .word       0x00000AE2                   # neg         $at, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f6b4u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 1, (int32_t)tmp); }
label_24f6b8:
    // 0x24f6b8: 0xae5  .word       0x00000AE5                   # move        $at, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f6b8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_24f6bc:
    // 0x24f6bc: 0xae6  .word       0x00000AE6                   # xor         $at, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f6bcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_24f6c0:
    // 0x24f6c0: 0xae9  .word       0x00000AE9                   # mtsa        $zero # 00000AC0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x24f6c0u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_24f6c4:
    // 0x24f6c4: 0xaea  .word       0x00000AEA                   # slt         $at, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f6c4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_24f6c8:
    // 0x24f6c8: 0xaed  .word       0x00000AED                   # daddu       $at, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f6c8u;
    SET_GPR_U64(ctx, 1, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24f6cc:
    // 0x24f6cc: 0xaee  .word       0x00000AEE                   # dsub        $at, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f6ccu;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 1, r); }
label_24f6d0:
    // 0x24f6d0: 0xaf1  tgeu        $zero, $zero, 43
    ctx->pc = 0x24f6d0u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_24f6d4:
    // 0x24f6d4: 0xaf2  tlt         $zero, $zero, 43
    ctx->pc = 0x24f6d4u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_24f6d8:
    // 0x24f6d8: 0xaf5  .word       0x00000AF5                   # INVALID     $zero, $zero, 0xAF5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f6d8u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x24F6D8 raw=0x00000AF5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24f6dc:
    // 0x24f6dc: 0xaf6  tne         $zero, $zero, 43
    ctx->pc = 0x24f6dcu;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_24f6e0:
    // 0x24f6e0: 0xaf9  .word       0x00000AF9                   # INVALID     $zero, $zero, 0xAF9 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f6e0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x24F6E0 raw=0x00000AF9"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24f6e4:
    // 0x24f6e4: 0xafa  dsrl        $at, $zero, 11
    ctx->pc = 0x24f6e4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) >> 11);
label_24f6e8:
    // 0x24f6e8: 0x0  nop
    ctx->pc = 0x24f6e8u;
    // NOP
label_24f6ec:
    // 0x24f6ec: 0x0  nop
    ctx->pc = 0x24f6ecu;
    // NOP
label_24f6f0:
    // 0x24f6f0: 0x73d  .word       0x0000073D                   # INVALID     $zero, $zero, 0x73D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f6f0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x24F6F0 raw=0x0000073D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24f6f4:
    // 0x24f6f4: 0x73e  dsrl32      $zero, $zero, 28
    ctx->pc = 0x24f6f4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (32 + 28));
label_24f6f8:
    // 0x24f6f8: 0x741  .word       0x00000741                   # INVALID     $zero, $zero, 0x741 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f6f8u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x24F6F8 raw=0x00000741"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24f6fc:
    // 0x24f6fc: 0x742  srl         $zero, $zero, 29
    ctx->pc = 0x24f6fcu;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 29));
label_24f700:
    // 0x24f700: 0x745  .word       0x00000745                   # INVALID     $zero, $zero, 0x745 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f700u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x24F700 raw=0x00000745"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24f704:
    // 0x24f704: 0x746  .word       0x00000746                   # srlv        $zero, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f704u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_24f708:
    // 0x24f708: 0x749  .word       0x00000749                   # jalr        $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
label_24f70c:
    if (ctx->pc == 0x24F70Cu) {
        ctx->pc = 0x24F70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F708u;
        // 0x24f70c: 0x74a  .word       0x0000074A                   # movz        $zero, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24F710u;
        goto label_24f710;
    }
    ctx->pc = 0x24F708u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x24F70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F708u;
        // 0x24f70c: 0x74a  .word       0x0000074A                   # movz        $zero, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24F708u, 0x24F710u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24F710u;
label_24f710:
    // 0x24f710: 0x74d  break       0, 29
    ctx->pc = 0x24f710u;
    runtime->handleBreak(rdram, ctx);
label_24f714:
    // 0x24f714: 0x74e  .word       0x0000074E                   # INVALID     $zero, $zero, 0x74E # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f714u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x24F714 raw=0x0000074E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24f718:
    // 0x24f718: 0x751  .word       0x00000751                   # mthi        $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f718u;
    ctx->hi = GPR_U64(ctx, 0);
label_24f71c:
    // 0x24f71c: 0x752  .word       0x00000752                   # mflo        $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f71cu;
    SET_GPR_U64(ctx, 0, ctx->lo);
label_24f720:
    // 0x24f720: 0x755  .word       0x00000755                   # INVALID     $zero, $zero, 0x755 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f720u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x24F720 raw=0x00000755"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24f724:
    // 0x24f724: 0x756  .word       0x00000756                   # dsrlv       $zero, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f724u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_24f728:
    // 0x24f728: 0x759  .word       0x00000759                   # multu       $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f728u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_24f72c:
    // 0x24f72c: 0x75a  .word       0x0000075A                   # div         $zero, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f72cu;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_24f730:
    // 0x24f730: 0x75d  .word       0x0000075D                   # dmultu      $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f730u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x24F730 raw=0x0000075D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24f734:
    // 0x24f734: 0x75e  .word       0x0000075E                   # ddiv        $zero, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f734u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x24F734 raw=0x0000075E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24f738:
    // 0x24f738: 0x761  .word       0x00000761                   # addu        $zero, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f738u;
    SET_GPR_S32(ctx, 0, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_24f73c:
    // 0x24f73c: 0x762  .word       0x00000762                   # neg         $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f73cu;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 0, (int32_t)tmp); }
label_24f740:
    // 0x24f740: 0x765  .word       0x00000765                   # move        $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f740u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_24f744:
    // 0x24f744: 0x766  .word       0x00000766                   # xor         $zero, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f744u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_24f748:
    // 0x24f748: 0x769  .word       0x00000769                   # mtsa        $zero # 00000740 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x24f748u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_24f74c:
    // 0x24f74c: 0x76a  .word       0x0000076A                   # slt         $zero, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f74cu;
    SET_GPR_U64(ctx, 0, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_24f750:
    // 0x24f750: 0x76d  .word       0x0000076D                   # daddu       $zero, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f750u;
    SET_GPR_U64(ctx, 0, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24f754:
    // 0x24f754: 0x76e  .word       0x0000076E                   # dsub        $zero, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f754u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_24f758:
    // 0x24f758: 0x771  tgeu        $zero, $zero, 29
    ctx->pc = 0x24f758u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_24f75c:
    // 0x24f75c: 0x772  tlt         $zero, $zero, 29
    ctx->pc = 0x24f75cu;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_24f760:
    // 0x24f760: 0x775  .word       0x00000775                   # INVALID     $zero, $zero, 0x775 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f760u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x24F760 raw=0x00000775"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24f764:
    // 0x24f764: 0x776  tne         $zero, $zero, 29
    ctx->pc = 0x24f764u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_24f768:
    // 0x24f768: 0x779  .word       0x00000779                   # INVALID     $zero, $zero, 0x779 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f768u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x24F768 raw=0x00000779"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24f76c:
    // 0x24f76c: 0x77a  dsrl        $zero, $zero, 29
    ctx->pc = 0x24f76cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> 29);
label_24f770:
    // 0x24f770: 0x77d  .word       0x0000077D                   # INVALID     $zero, $zero, 0x77D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f770u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x24F770 raw=0x0000077D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24f774:
    // 0x24f774: 0x77e  dsrl32      $zero, $zero, 29
    ctx->pc = 0x24f774u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (32 + 29));
label_24f778:
    // 0x24f778: 0x781  .word       0x00000781                   # INVALID     $zero, $zero, 0x781 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f778u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x24F778 raw=0x00000781"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24f77c:
    // 0x24f77c: 0x782  srl         $zero, $zero, 30
    ctx->pc = 0x24f77cu;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 30));
label_24f780:
    // 0x24f780: 0x785  .word       0x00000785                   # INVALID     $zero, $zero, 0x785 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f780u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x24F780 raw=0x00000785"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24f784:
    // 0x24f784: 0x786  .word       0x00000786                   # srlv        $zero, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f784u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_24f788:
    // 0x24f788: 0x789  .word       0x00000789                   # jalr        $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
label_24f78c:
    if (ctx->pc == 0x24F78Cu) {
        ctx->pc = 0x24F78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F788u;
        // 0x24f78c: 0x78a  .word       0x0000078A                   # movz        $zero, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24F790u;
        goto label_24f790;
    }
    ctx->pc = 0x24F788u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x24F78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F788u;
        // 0x24f78c: 0x78a  .word       0x0000078A                   # movz        $zero, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24F788u, 0x24F790u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24F790u;
label_24f790:
    // 0x24f790: 0x78d  break       0, 30
    ctx->pc = 0x24f790u;
    runtime->handleBreak(rdram, ctx);
label_24f794:
    // 0x24f794: 0x78e  .word       0x0000078E                   # INVALID     $zero, $zero, 0x78E # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f794u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x24F794 raw=0x0000078E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24f798:
    // 0x24f798: 0x791  .word       0x00000791                   # mthi        $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f798u;
    ctx->hi = GPR_U64(ctx, 0);
label_24f79c:
    // 0x24f79c: 0x792  .word       0x00000792                   # mflo        $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f79cu;
    SET_GPR_U64(ctx, 0, ctx->lo);
label_24f7a0:
    // 0x24f7a0: 0x795  .word       0x00000795                   # INVALID     $zero, $zero, 0x795 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f7a0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x24F7A0 raw=0x00000795"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24f7a4:
    // 0x24f7a4: 0x796  .word       0x00000796                   # dsrlv       $zero, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f7a4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_24f7a8:
    // 0x24f7a8: 0x799  .word       0x00000799                   # multu       $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f7a8u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_24f7ac:
    // 0x24f7ac: 0x79a  .word       0x0000079A                   # div         $zero, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f7acu;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_24f7b0:
    // 0x24f7b0: 0x79d  .word       0x0000079D                   # dmultu      $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f7b0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x24F7B0 raw=0x0000079D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24f7b4:
    // 0x24f7b4: 0x79e  .word       0x0000079E                   # ddiv        $zero, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f7b4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x24F7B4 raw=0x0000079E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24f7b8:
    // 0x24f7b8: 0x7a1  .word       0x000007A1                   # addu        $zero, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f7b8u;
    SET_GPR_S32(ctx, 0, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_24f7bc:
    // 0x24f7bc: 0x7a2  .word       0x000007A2                   # neg         $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f7bcu;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 0, (int32_t)tmp); }
label_24f7c0:
    // 0x24f7c0: 0x7a5  .word       0x000007A5                   # move        $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f7c0u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_24f7c4:
    // 0x24f7c4: 0x7a6  .word       0x000007A6                   # xor         $zero, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f7c4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_24f7c8:
    // 0x24f7c8: 0x7a9  .word       0x000007A9                   # mtsa        $zero # 00000780 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x24f7c8u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_24f7cc:
    // 0x24f7cc: 0x7aa  .word       0x000007AA                   # slt         $zero, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f7ccu;
    SET_GPR_U64(ctx, 0, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_24f7d0:
    // 0x24f7d0: 0x7ad  .word       0x000007AD                   # daddu       $zero, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f7d0u;
    SET_GPR_U64(ctx, 0, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24f7d4:
    // 0x24f7d4: 0x7ae  .word       0x000007AE                   # dsub        $zero, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f7d4u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_24f7d8:
    // 0x24f7d8: 0x7b1  tgeu        $zero, $zero, 30
    ctx->pc = 0x24f7d8u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_24f7dc:
    // 0x24f7dc: 0x7b2  tlt         $zero, $zero, 30
    ctx->pc = 0x24f7dcu;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_24f7e0:
    // 0x24f7e0: 0x7b5  .word       0x000007B5                   # INVALID     $zero, $zero, 0x7B5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f7e0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x24F7E0 raw=0x000007B5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24f7e4:
    // 0x24f7e4: 0x7b6  tne         $zero, $zero, 30
    ctx->pc = 0x24f7e4u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_24f7e8:
    // 0x24f7e8: 0x7b9  .word       0x000007B9                   # INVALID     $zero, $zero, 0x7B9 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f7e8u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x24F7E8 raw=0x000007B9"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24f7ec:
    // 0x24f7ec: 0x7ba  dsrl        $zero, $zero, 30
    ctx->pc = 0x24f7ecu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> 30);
label_24f7f0:
    // 0x24f7f0: 0x7bd  .word       0x000007BD                   # INVALID     $zero, $zero, 0x7BD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f7f0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x24F7F0 raw=0x000007BD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24f7f4:
    // 0x24f7f4: 0x7be  dsrl32      $zero, $zero, 30
    ctx->pc = 0x24f7f4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (32 + 30));
label_24f7f8:
    // 0x24f7f8: 0x7c1  .word       0x000007C1                   # INVALID     $zero, $zero, 0x7C1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f7f8u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x24F7F8 raw=0x000007C1"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24f7fc:
    // 0x24f7fc: 0x7c2  srl         $zero, $zero, 31
    ctx->pc = 0x24f7fcu;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 31));
label_24f800:
    // 0x24f800: 0x7c5  .word       0x000007C5                   # INVALID     $zero, $zero, 0x7C5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f800u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x24F800 raw=0x000007C5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24f804:
    // 0x24f804: 0x7c6  .word       0x000007C6                   # srlv        $zero, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f804u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_24f808:
    // 0x24f808: 0x7c9  .word       0x000007C9                   # jalr        $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
label_24f80c:
    if (ctx->pc == 0x24F80Cu) {
        ctx->pc = 0x24F80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F808u;
        // 0x24f80c: 0x7ca  .word       0x000007CA                   # movz        $zero, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24F810u;
        goto label_24f810;
    }
    ctx->pc = 0x24F808u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x24F80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F808u;
        // 0x24f80c: 0x7ca  .word       0x000007CA                   # movz        $zero, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24F808u, 0x24F810u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24F810u;
label_24f810:
    // 0x24f810: 0x7cd  break       0, 31
    ctx->pc = 0x24f810u;
    runtime->handleBreak(rdram, ctx);
label_24f814:
    // 0x24f814: 0x7ce  .word       0x000007CE                   # INVALID     $zero, $zero, 0x7CE # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f814u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x24F814 raw=0x000007CE"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24f818:
    // 0x24f818: 0x7d1  .word       0x000007D1                   # mthi        $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f818u;
    ctx->hi = GPR_U64(ctx, 0);
label_24f81c:
    // 0x24f81c: 0x7d2  .word       0x000007D2                   # mflo        $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f81cu;
    SET_GPR_U64(ctx, 0, ctx->lo);
label_24f820:
    // 0x24f820: 0x7d5  .word       0x000007D5                   # INVALID     $zero, $zero, 0x7D5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f820u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x24F820 raw=0x000007D5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24f824:
    // 0x24f824: 0x7d6  .word       0x000007D6                   # dsrlv       $zero, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f824u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_24f828:
    // 0x24f828: 0x7d9  .word       0x000007D9                   # multu       $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f828u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_24f82c:
    // 0x24f82c: 0x7da  .word       0x000007DA                   # div         $zero, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f82cu;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_24f830:
    // 0x24f830: 0x7dd  .word       0x000007DD                   # dmultu      $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f830u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x24F830 raw=0x000007DD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24f834:
    // 0x24f834: 0x7de  .word       0x000007DE                   # ddiv        $zero, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f834u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x24F834 raw=0x000007DE"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24f838:
    // 0x24f838: 0x7e1  .word       0x000007E1                   # addu        $zero, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f838u;
    SET_GPR_S32(ctx, 0, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_24f83c:
    // 0x24f83c: 0x7e2  .word       0x000007E2                   # neg         $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f83cu;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 0, (int32_t)tmp); }
label_24f840:
    // 0x24f840: 0x7e5  .word       0x000007E5                   # move        $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f840u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_24f844:
    // 0x24f844: 0x7e6  .word       0x000007E6                   # xor         $zero, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f844u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_24f848:
    // 0x24f848: 0x7e9  .word       0x000007E9                   # mtsa        $zero # 000007C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x24f848u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_24f84c:
    // 0x24f84c: 0x7ea  .word       0x000007EA                   # slt         $zero, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f84cu;
    SET_GPR_U64(ctx, 0, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_24f850:
    // 0x24f850: 0x7ed  .word       0x000007ED                   # daddu       $zero, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f850u;
    SET_GPR_U64(ctx, 0, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24f854:
    // 0x24f854: 0x7ee  .word       0x000007EE                   # dsub        $zero, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f854u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_24f858:
    // 0x24f858: 0x7f1  tgeu        $zero, $zero, 31
    ctx->pc = 0x24f858u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_24f85c:
    // 0x24f85c: 0x7f2  tlt         $zero, $zero, 31
    ctx->pc = 0x24f85cu;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_24f860:
    // 0x24f860: 0x7f5  .word       0x000007F5                   # INVALID     $zero, $zero, 0x7F5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f860u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x24F860 raw=0x000007F5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24f864:
    // 0x24f864: 0x7f6  tne         $zero, $zero, 31
    ctx->pc = 0x24f864u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_24f868:
    // 0x24f868: 0x7f9  .word       0x000007F9                   # INVALID     $zero, $zero, 0x7F9 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f868u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x24F868 raw=0x000007F9"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24f86c:
    // 0x24f86c: 0x7fa  dsrl        $zero, $zero, 31
    ctx->pc = 0x24f86cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> 31);
label_24f870:
    // 0x24f870: 0x7fd  .word       0x000007FD                   # INVALID     $zero, $zero, 0x7FD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f870u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x24F870 raw=0x000007FD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24f874:
    // 0x24f874: 0x7fe  dsrl32      $zero, $zero, 31
    ctx->pc = 0x24f874u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (32 + 31));
label_24f878:
    // 0x24f878: 0x801  .word       0x00000801                   # INVALID     $zero, $zero, 0x801 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f878u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x24F878 raw=0x00000801"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24f87c:
    // 0x24f87c: 0x802  srl         $at, $zero, 0
    ctx->pc = 0x24f87cu;
    SET_GPR_S32(ctx, 1, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_24f880:
    // 0x24f880: 0x805  .word       0x00000805                   # INVALID     $zero, $zero, 0x805 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f880u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x24F880 raw=0x00000805"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24f884:
    // 0x24f884: 0x806  srlv        $at, $zero, $zero
    ctx->pc = 0x24f884u;
    SET_GPR_S32(ctx, 1, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_24f888:
    // 0x24f888: 0x809  jalr        $at, $zero
label_24f88c:
    if (ctx->pc == 0x24F88Cu) {
        ctx->pc = 0x24F88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F888u;
        // 0x24f88c: 0x80a  movz        $at, $zero, $zero (Delay Slot)
        if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 1, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24F890u;
        goto label_24f890;
    }
    ctx->pc = 0x24F888u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 1, 0x24F890u);
        ctx->pc = 0x24F88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F888u;
        // 0x24f88c: 0x80a  movz        $at, $zero, $zero (Delay Slot)
        if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 1, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24F888u, 0x24F890u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24F890u;
label_24f890:
    // 0x24f890: 0x80d  break       0, 32
    ctx->pc = 0x24f890u;
    runtime->handleBreak(rdram, ctx);
label_24f894:
    // 0x24f894: 0x80e  .word       0x0000080E                   # INVALID     $zero, $zero, 0x80E # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f894u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x24F894 raw=0x0000080E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24f898:
    // 0x24f898: 0x811  .word       0x00000811                   # mthi        $zero # 00000800 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f898u;
    ctx->hi = GPR_U64(ctx, 0);
label_24f89c:
    // 0x24f89c: 0x812  mflo        $at
    ctx->pc = 0x24f89cu;
    SET_GPR_U64(ctx, 1, ctx->lo);
label_24f8a0:
    // 0x24f8a0: 0x815  .word       0x00000815                   # INVALID     $zero, $zero, 0x815 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f8a0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x24F8A0 raw=0x00000815"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24f8a4:
    // 0x24f8a4: 0x816  dsrlv       $at, $zero, $zero
    ctx->pc = 0x24f8a4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_24f8a8:
    // 0x24f8a8: 0x819  .word       0x00000819                   # multu       $zero, $zero # 00000800 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24f8a8u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 1, (int32_t)result); }
label_24f8ac:
    // 0x24f8ac: 0x81a  div         $at, $zero, $zero
    ctx->pc = 0x24f8acu;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_24f8b0:
    // 0x24f8b0: 0x0  nop
    ctx->pc = 0x24f8b0u;
    // NOP
label_24f8b4:
    // 0x24f8b4: 0x0  nop
    ctx->pc = 0x24f8b4u;
    // NOP
label_24f8b8:
    // 0x24f8b8: 0x0  nop
    ctx->pc = 0x24f8b8u;
    // NOP
label_24f8bc:
    // 0x24f8bc: 0x0  nop
    ctx->pc = 0x24f8bcu;
    // NOP
label_24f8c0:
    // 0x24f8c0: 0x43160000  .word       0x43160000                   # INVALID     $t8, $s6, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24f8c0u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x18 at 0x24F8C0 raw=0x43160000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24f8c4:
    // 0x24f8c4: 0x0  nop
    ctx->pc = 0x24f8c4u;
    // NOP
label_24f8c8:
    // 0x24f8c8: 0xc3960000  ll          $s6, 0x0($gp)
    ctx->pc = 0x24f8c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 28), 0); SET_GPR_S32(ctx, 22, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24f8cc:
    // 0x24f8cc: 0x0  nop
    ctx->pc = 0x24f8ccu;
    // NOP
label_24f8d0:
    // 0x24f8d0: 0xc3160000  ll          $s6, 0x0($t8)
    ctx->pc = 0x24f8d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 24), 0); SET_GPR_S32(ctx, 22, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24f8d4:
    // 0x24f8d4: 0x0  nop
    ctx->pc = 0x24f8d4u;
    // NOP
label_24f8d8:
    // 0x24f8d8: 0xc3960000  ll          $s6, 0x0($gp)
    ctx->pc = 0x24f8d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 28), 0); SET_GPR_S32(ctx, 22, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24f8dc:
    // 0x24f8dc: 0x0  nop
    ctx->pc = 0x24f8dcu;
    // NOP
label_24f8e0:
    // 0x24f8e0: 0x437a0000  .word       0x437A0000                   # INVALID     $k1, $k0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24f8e0u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x1B at 0x24F8E0 raw=0x437A0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24f8e4:
    // 0x24f8e4: 0x0  nop
    ctx->pc = 0x24f8e4u;
    // NOP
label_24f8e8:
    // 0x24f8e8: 0xc2c80000  ll          $t0, 0x0($s6)
    ctx->pc = 0x24f8e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24f8ec:
    // 0x24f8ec: 0x0  nop
    ctx->pc = 0x24f8ecu;
    // NOP
label_24f8f0:
    // 0x24f8f0: 0xc37a0000  ll          $k0, 0x0($k1)
    ctx->pc = 0x24f8f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 0); SET_GPR_S32(ctx, 26, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24f8f4:
    // 0x24f8f4: 0x0  nop
    ctx->pc = 0x24f8f4u;
    // NOP
label_24f8f8:
    // 0x24f8f8: 0xc2c80000  ll          $t0, 0x0($s6)
    ctx->pc = 0x24f8f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24f8fc:
    // 0x24f8fc: 0x0  nop
    ctx->pc = 0x24f8fcu;
    // NOP
label_24f900:
    // 0x24f900: 0x43af0000  .word       0x43AF0000                   # INVALID     $sp, $t7, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24f900u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x1D at 0x24F900 raw=0x43AF0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24f904:
    // 0x24f904: 0x0  nop
    ctx->pc = 0x24f904u;
    // NOP
label_24f908:
    // 0x24f908: 0x42c80000  .word       0x42C80000                   # INVALID     $s6, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24f908u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x16 at 0x24F908 raw=0x42C80000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24f90c:
    // 0x24f90c: 0x0  nop
    ctx->pc = 0x24f90cu;
    // NOP
label_24f910:
    // 0x24f910: 0xc3af0000  ll          $t7, 0x0($sp)
    ctx->pc = 0x24f910u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); SET_GPR_S32(ctx, 15, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24f914:
    // 0x24f914: 0x0  nop
    ctx->pc = 0x24f914u;
    // NOP
label_24f918:
    // 0x24f918: 0x42c80000  .word       0x42C80000                   # INVALID     $s6, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24f918u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x16 at 0x24F918 raw=0x42C80000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24f91c:
    // 0x24f91c: 0x0  nop
    ctx->pc = 0x24f91cu;
    // NOP
label_24f920:
    // 0x24f920: 0x43e10000  .word       0x43E10000                   # INVALID     $ra, $at, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24f920u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x1F at 0x24F920 raw=0x43E10000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24f924:
    // 0x24f924: 0x0  nop
    ctx->pc = 0x24f924u;
    // NOP
label_24f928:
    // 0x24f928: 0x43960000  .word       0x43960000                   # INVALID     $gp, $s6, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24f928u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x1C at 0x24F928 raw=0x43960000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24f92c:
    // 0x24f92c: 0x0  nop
    ctx->pc = 0x24f92cu;
    // NOP
label_24f930:
    // 0x24f930: 0xc3e10000  ll          $at, 0x0($ra)
    ctx->pc = 0x24f930u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 31), 0); SET_GPR_S32(ctx, 1, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24f934:
    // 0x24f934: 0x0  nop
    ctx->pc = 0x24f934u;
    // NOP
label_24f938:
    // 0x24f938: 0x43960000  .word       0x43960000                   # INVALID     $gp, $s6, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24f938u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x1C at 0x24F938 raw=0x43960000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24f93c:
    // 0x24f93c: 0x0  nop
    ctx->pc = 0x24f93cu;
    // NOP
label_24f940:
    // 0x24f940: 0x0  nop
    ctx->pc = 0x24f940u;
    // NOP
label_24f944:
    // 0x24f944: 0x0  nop
    ctx->pc = 0x24f944u;
    // NOP
label_24f948:
    // 0x24f948: 0x0  nop
    ctx->pc = 0x24f948u;
    // NOP
label_24f94c:
    // 0x24f94c: 0x0  nop
    ctx->pc = 0x24f94cu;
    // NOP
label_24f950:
    // 0x24f950: 0x43160000  .word       0x43160000                   # INVALID     $t8, $s6, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24f950u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x18 at 0x24F950 raw=0x43160000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24f954:
    // 0x24f954: 0x0  nop
    ctx->pc = 0x24f954u;
    // NOP
label_24f958:
    // 0x24f958: 0x0  nop
    ctx->pc = 0x24f958u;
    // NOP
label_24f95c:
    // 0x24f95c: 0x0  nop
    ctx->pc = 0x24f95cu;
    // NOP
label_24f960:
    // 0x24f960: 0xc3160000  ll          $s6, 0x0($t8)
    ctx->pc = 0x24f960u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 24), 0); SET_GPR_S32(ctx, 22, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24f964:
    // 0x24f964: 0x0  nop
    ctx->pc = 0x24f964u;
    // NOP
label_24f968:
    // 0x24f968: 0x0  nop
    ctx->pc = 0x24f968u;
    // NOP
label_24f96c:
    // 0x24f96c: 0x0  nop
    ctx->pc = 0x24f96cu;
    // NOP
label_24f970:
    // 0x24f970: 0x43960000  .word       0x43960000                   # INVALID     $gp, $s6, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24f970u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x1C at 0x24F970 raw=0x43960000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24f974:
    // 0x24f974: 0x0  nop
    ctx->pc = 0x24f974u;
    // NOP
label_24f978:
    // 0x24f978: 0x0  nop
    ctx->pc = 0x24f978u;
    // NOP
label_24f97c:
    // 0x24f97c: 0x0  nop
    ctx->pc = 0x24f97cu;
    // NOP
label_24f980:
    // 0x24f980: 0xc3960000  ll          $s6, 0x0($gp)
    ctx->pc = 0x24f980u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 28), 0); SET_GPR_S32(ctx, 22, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24f984:
    // 0x24f984: 0x0  nop
    ctx->pc = 0x24f984u;
    // NOP
label_24f988:
    // 0x24f988: 0x0  nop
    ctx->pc = 0x24f988u;
    // NOP
label_24f98c:
    // 0x24f98c: 0x0  nop
    ctx->pc = 0x24f98cu;
    // NOP
label_24f990:
    // 0x24f990: 0x43e10000  .word       0x43E10000                   # INVALID     $ra, $at, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24f990u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x1F at 0x24F990 raw=0x43E10000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24f994:
    // 0x24f994: 0x0  nop
    ctx->pc = 0x24f994u;
    // NOP
label_24f998:
    // 0x24f998: 0x0  nop
    ctx->pc = 0x24f998u;
    // NOP
label_24f99c:
    // 0x24f99c: 0x0  nop
    ctx->pc = 0x24f99cu;
    // NOP
label_24f9a0:
    // 0x24f9a0: 0xc3e10000  ll          $at, 0x0($ra)
    ctx->pc = 0x24f9a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 31), 0); SET_GPR_S32(ctx, 1, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24f9a4:
    // 0x24f9a4: 0x0  nop
    ctx->pc = 0x24f9a4u;
    // NOP
label_24f9a8:
    // 0x24f9a8: 0x0  nop
    ctx->pc = 0x24f9a8u;
    // NOP
label_24f9ac:
    // 0x24f9ac: 0x0  nop
    ctx->pc = 0x24f9acu;
    // NOP
label_24f9b0:
    // 0x24f9b0: 0x43610000  .word       0x43610000                   # INVALID     $k1, $at, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24f9b0u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x1B at 0x24F9B0 raw=0x43610000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24f9b4:
    // 0x24f9b4: 0x0  nop
    ctx->pc = 0x24f9b4u;
    // NOP
label_24f9b8:
    // 0x24f9b8: 0xc3480000  ll          $t0, 0x0($k0)
    ctx->pc = 0x24f9b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 26), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24f9bc:
    // 0x24f9bc: 0x0  nop
    ctx->pc = 0x24f9bcu;
    // NOP
label_24f9c0:
    // 0x24f9c0: 0xc3610000  ll          $at, 0x0($k1)
    ctx->pc = 0x24f9c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 0); SET_GPR_S32(ctx, 1, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24f9c4:
    // 0x24f9c4: 0x0  nop
    ctx->pc = 0x24f9c4u;
    // NOP
label_24f9c8:
    // 0x24f9c8: 0xc3480000  ll          $t0, 0x0($k0)
    ctx->pc = 0x24f9c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 26), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24f9cc:
    // 0x24f9cc: 0x0  nop
    ctx->pc = 0x24f9ccu;
    // NOP
label_24f9d0:
    // 0x24f9d0: 0x11100f0e  beq         $t0, $s0, . + 4 + (0xF0E << 2)
label_24f9d4:
    if (ctx->pc == 0x24F9D4u) {
        ctx->pc = 0x24F9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F9D0u;
        // 0x24f9d4: 0x16151412  bne         $s0, $s5, . + 4 + (0x1412 << 2) (Delay Slot)
        // Likely branch instruction at 0x24F9D4 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x24F9D8u;
        goto label_24f9d8;
    }
    ctx->pc = 0x24F9D0u;
    {
        const bool branch_taken_0x24f9d0 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 16));
        ctx->pc = 0x24F9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F9D0u;
        // 0x24f9d4: 0x16151412  bne         $s0, $s5, . + 4 + (0x1412 << 2) (Delay Slot)
        // Likely branch instruction at 0x24F9D4 - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f9d0) {
            ctx->pc = 0x25360Cu;
            { ctx->pc = 0x25360c; return; }
        }
    }
    ctx->pc = 0x24F9D8u;
label_24f9d8:
    // 0x24f9d8: 0x17  dsrav       $zero, $zero, $zero
    ctx->pc = 0x24f9d8u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_24f9dc:
    // 0x24f9dc: 0x0  nop
    ctx->pc = 0x24f9dcu;
    // NOP
label_24f9e0:
    // 0x24f9e0: 0x16  dsrlv       $zero, $zero, $zero
    ctx->pc = 0x24f9e0u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_24f9e4:
    // 0x24f9e4: 0x16  dsrlv       $zero, $zero, $zero
    ctx->pc = 0x24f9e4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_24f9e8:
    // 0x24f9e8: 0x16  dsrlv       $zero, $zero, $zero
    ctx->pc = 0x24f9e8u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_24f9ec:
    // 0x24f9ec: 0x16  dsrlv       $zero, $zero, $zero
    ctx->pc = 0x24f9ecu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_24f9f0:
    // 0x24f9f0: 0x16  dsrlv       $zero, $zero, $zero
    ctx->pc = 0x24f9f0u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_24f9f4:
    // 0x24f9f4: 0x16  dsrlv       $zero, $zero, $zero
    ctx->pc = 0x24f9f4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_24f9f8:
    // 0x24f9f8: 0x16  dsrlv       $zero, $zero, $zero
    ctx->pc = 0x24f9f8u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_24f9fc:
    // 0x24f9fc: 0x16  dsrlv       $zero, $zero, $zero
    ctx->pc = 0x24f9fcu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_24fa00:
    // 0x24fa00: 0x16  dsrlv       $zero, $zero, $zero
    ctx->pc = 0x24fa00u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_24fa04:
    // 0x24fa04: 0x16  dsrlv       $zero, $zero, $zero
    ctx->pc = 0x24fa04u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_24fa08:
    // 0x24fa08: 0x16  dsrlv       $zero, $zero, $zero
    ctx->pc = 0x24fa08u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_24fa0c:
    // 0x24fa0c: 0x16  dsrlv       $zero, $zero, $zero
    ctx->pc = 0x24fa0cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_24fa10:
    // 0x24fa10: 0x16  dsrlv       $zero, $zero, $zero
    ctx->pc = 0x24fa10u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_24fa14:
    // 0x24fa14: 0x16  dsrlv       $zero, $zero, $zero
    ctx->pc = 0x24fa14u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_24fa18:
    // 0x24fa18: 0x16  dsrlv       $zero, $zero, $zero
    ctx->pc = 0x24fa18u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_24fa1c:
    // 0x24fa1c: 0x16  dsrlv       $zero, $zero, $zero
    ctx->pc = 0x24fa1cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_24fa20:
    // 0x24fa20: 0x16  dsrlv       $zero, $zero, $zero
    ctx->pc = 0x24fa20u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_24fa24:
    // 0x24fa24: 0x16  dsrlv       $zero, $zero, $zero
    ctx->pc = 0x24fa24u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_24fa28:
    // 0x24fa28: 0x16  dsrlv       $zero, $zero, $zero
    ctx->pc = 0x24fa28u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_24fa2c:
    // 0x24fa2c: 0x16  dsrlv       $zero, $zero, $zero
    ctx->pc = 0x24fa2cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_24fa30:
    // 0x24fa30: 0x16  dsrlv       $zero, $zero, $zero
    ctx->pc = 0x24fa30u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_24fa34:
    // 0x24fa34: 0x16  dsrlv       $zero, $zero, $zero
    ctx->pc = 0x24fa34u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_24fa38:
    // 0x24fa38: 0x16  dsrlv       $zero, $zero, $zero
    ctx->pc = 0x24fa38u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_24fa3c:
    // 0x24fa3c: 0x0  nop
    ctx->pc = 0x24fa3cu;
    // NOP
label_24fa40:
    // 0x24fa40: 0x3e00adfd  .word       0x3E00ADFD                   # lui         $zero, 0xADFD # 02000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24fa40u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)44541 << 16));
label_24fa44:
    // 0x24fa44: 0x3e00adfd  .word       0x3E00ADFD                   # lui         $zero, 0xADFD # 02000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24fa44u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)44541 << 16));
label_24fa48:
    // 0x24fa48: 0x0  nop
    ctx->pc = 0x24fa48u;
    // NOP
label_24fa4c:
    // 0x24fa4c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24fa4cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_24fa50:
    // 0x24fa50: 0x3da9fbe7  .word       0x3DA9FBE7                   # lui         $t1, 0xFBE7 # 01A00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24fa50u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)64487 << 16));
label_24fa54:
    // 0x24fa54: 0x3da9fbe7  .word       0x3DA9FBE7                   # lui         $t1, 0xFBE7 # 01A00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24fa54u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)64487 << 16));
label_24fa58:
    // 0x24fa58: 0x0  nop
    ctx->pc = 0x24fa58u;
    // NOP
label_24fa5c:
    // 0x24fa5c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24fa5cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_24fa60:
    // 0x24fa60: 0x3e29fbe7  .word       0x3E29FBE7                   # lui         $t1, 0xFBE7 # 02200000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24fa60u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)64487 << 16));
label_24fa64:
    // 0x24fa64: 0x3e29fbe7  .word       0x3E29FBE7                   # lui         $t1, 0xFBE7 # 02200000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24fa64u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)64487 << 16));
label_24fa68:
    // 0x24fa68: 0x3e29fbe7  .word       0x3E29FBE7                   # lui         $t1, 0xFBE7 # 02200000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24fa68u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)64487 << 16));
label_24fa6c:
    // 0x24fa6c: 0x0  nop
    ctx->pc = 0x24fa6cu;
    // NOP
label_24fa70:
    // 0x24fa70: 0x3d8f5c29  .word       0x3D8F5C29                   # lui         $t7, 0x5C29 # 01800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24fa70u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)23593 << 16));
label_24fa74:
    // 0x24fa74: 0x3d8f5c29  .word       0x3D8F5C29                   # lui         $t7, 0x5C29 # 01800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24fa74u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)23593 << 16));
label_24fa78:
    // 0x24fa78: 0x3d8f5c29  .word       0x3D8F5C29                   # lui         $t7, 0x5C29 # 01800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24fa78u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)23593 << 16));
label_24fa7c:
    // 0x24fa7c: 0x0  nop
    ctx->pc = 0x24fa7cu;
    // NOP
label_24fa80:
    // 0x24fa80: 0x0  nop
    ctx->pc = 0x24fa80u;
    // NOP
label_24fa84:
    // 0x24fa84: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24fa84u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_24fa88:
    // 0x24fa88: 0x0  nop
    ctx->pc = 0x24fa88u;
    // NOP
label_24fa8c:
    // 0x24fa8c: 0x0  nop
    ctx->pc = 0x24fa8cu;
    // NOP
label_24fa90:
    // 0x24fa90: 0x3d8f5c29  .word       0x3D8F5C29                   # lui         $t7, 0x5C29 # 01800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24fa90u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)23593 << 16));
label_24fa94:
    // 0x24fa94: 0x3d8f5c29  .word       0x3D8F5C29                   # lui         $t7, 0x5C29 # 01800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24fa94u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)23593 << 16));
label_24fa98:
    // 0x24fa98: 0x3d8f5c29  .word       0x3D8F5C29                   # lui         $t7, 0x5C29 # 01800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24fa98u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)23593 << 16));
label_24fa9c:
    // 0x24fa9c: 0x0  nop
    ctx->pc = 0x24fa9cu;
    // NOP
label_24faa0:
    // 0x24faa0: 0x0  nop
    ctx->pc = 0x24faa0u;
    // NOP
label_24faa4:
    // 0x24faa4: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24faa4u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_24faa8:
    // 0x24faa8: 0x0  nop
    ctx->pc = 0x24faa8u;
    // NOP
label_24faac:
    // 0x24faac: 0x0  nop
    ctx->pc = 0x24faacu;
    // NOP
label_24fab0:
    // 0x24fab0: 0x3d8f5c29  .word       0x3D8F5C29                   # lui         $t7, 0x5C29 # 01800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24fab0u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)23593 << 16));
label_24fab4:
    // 0x24fab4: 0x3d8f5c29  .word       0x3D8F5C29                   # lui         $t7, 0x5C29 # 01800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24fab4u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)23593 << 16));
label_24fab8:
    // 0x24fab8: 0x3d8f5c29  .word       0x3D8F5C29                   # lui         $t7, 0x5C29 # 01800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24fab8u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)23593 << 16));
label_24fabc:
    // 0x24fabc: 0x0  nop
    ctx->pc = 0x24fabcu;
    // NOP
label_24fac0:
    // 0x24fac0: 0x3d8f5c29  .word       0x3D8F5C29                   # lui         $t7, 0x5C29 # 01800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24fac0u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)23593 << 16));
label_24fac4:
    // 0x24fac4: 0x3d8f5c29  .word       0x3D8F5C29                   # lui         $t7, 0x5C29 # 01800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24fac4u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)23593 << 16));
label_24fac8:
    // 0x24fac8: 0x3d8f5c29  .word       0x3D8F5C29                   # lui         $t7, 0x5C29 # 01800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24fac8u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)23593 << 16));
label_24facc:
    // 0x24facc: 0x0  nop
    ctx->pc = 0x24faccu;
    // NOP
label_24fad0:
    // 0x24fad0: 0x3d23d70a  .word       0x3D23D70A                   # lui         $v1, 0xD70A # 01200000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24fad0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55050 << 16));
label_24fad4:
    // 0x24fad4: 0x3d23d70a  .word       0x3D23D70A                   # lui         $v1, 0xD70A # 01200000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24fad4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55050 << 16));
label_24fad8:
    // 0x24fad8: 0x3d23d70a  .word       0x3D23D70A                   # lui         $v1, 0xD70A # 01200000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24fad8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55050 << 16));
label_24fadc:
    // 0x24fadc: 0x0  nop
    ctx->pc = 0x24fadcu;
    // NOP
label_24fae0:
    // 0x24fae0: 0x3e29fbe7  .word       0x3E29FBE7                   # lui         $t1, 0xFBE7 # 02200000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24fae0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)64487 << 16));
label_24fae4:
    // 0x24fae4: 0x3e29fbe7  .word       0x3E29FBE7                   # lui         $t1, 0xFBE7 # 02200000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24fae4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)64487 << 16));
label_24fae8:
    // 0x24fae8: 0x0  nop
    ctx->pc = 0x24fae8u;
    // NOP
label_24faec:
    // 0x24faec: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24faecu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_24faf0:
    // 0x24faf0: 0x3df5c28f  .word       0x3DF5C28F                   # lui         $s5, 0xC28F # 01E00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24faf0u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)49807 << 16));
label_24faf4:
    // 0x24faf4: 0x3df5c28f  .word       0x3DF5C28F                   # lui         $s5, 0xC28F # 01E00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24faf4u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)49807 << 16));
label_24faf8:
    // 0x24faf8: 0x3df5c28f  .word       0x3DF5C28F                   # lui         $s5, 0xC28F # 01E00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24faf8u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)49807 << 16));
label_24fafc:
    // 0x24fafc: 0x0  nop
    ctx->pc = 0x24fafcu;
    // NOP
label_24fb00:
    // 0x24fb00: 0x3ca3d70a  .word       0x3CA3D70A                   # lui         $v1, 0xD70A # 00A00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24fb00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55050 << 16));
label_24fb04:
    // 0x24fb04: 0x3ca3d70a  .word       0x3CA3D70A                   # lui         $v1, 0xD70A # 00A00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24fb04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55050 << 16));
label_24fb08:
    // 0x24fb08: 0x0  nop
    ctx->pc = 0x24fb08u;
    // NOP
label_24fb0c:
    // 0x24fb0c: 0x0  nop
    ctx->pc = 0x24fb0cu;
    // NOP
label_24fb10:
    // 0x24fb10: 0x3d00adfd  .word       0x3D00ADFD                   # lui         $zero, 0xADFD # 01000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24fb10u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)44541 << 16));
label_24fb14:
    // 0x24fb14: 0x3d00adfd  .word       0x3D00ADFD                   # lui         $zero, 0xADFD # 01000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24fb14u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)44541 << 16));
label_24fb18:
    // 0x24fb18: 0x0  nop
    ctx->pc = 0x24fb18u;
    // NOP
label_24fb1c:
    // 0x24fb1c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24fb1cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_24fb20:
    // 0x24fb20: 0x3e883127  .word       0x3E883127                   # lui         $t0, 0x3127 # 02800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24fb20u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)12583 << 16));
label_24fb24:
    // 0x24fb24: 0x3e883127  .word       0x3E883127                   # lui         $t0, 0x3127 # 02800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24fb24u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)12583 << 16));
label_24fb28:
    // 0x24fb28: 0x0  nop
    ctx->pc = 0x24fb28u;
    // NOP
label_24fb2c:
    // 0x24fb2c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24fb2cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_24fb30:
    // 0x24fb30: 0x3cac0831  .word       0x3CAC0831                   # lui         $t4, 0x831 # 00A00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24fb30u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)2097 << 16));
label_24fb34:
    // 0x24fb34: 0x3cac0831  .word       0x3CAC0831                   # lui         $t4, 0x831 # 00A00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24fb34u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)2097 << 16));
label_24fb38:
    // 0x24fb38: 0x0  nop
    ctx->pc = 0x24fb38u;
    // NOP
label_24fb3c:
    // 0x24fb3c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24fb3cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_24fb40:
    // 0x24fb40: 0x3fc90fdb  .word       0x3FC90FDB                   # lui         $t1, 0xFDB # 03C00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24fb40u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4059 << 16));
label_24fb44:
    // 0x24fb44: 0x0  nop
    ctx->pc = 0x24fb44u;
    // NOP
label_24fb48:
    // 0x24fb48: 0x0  nop
    ctx->pc = 0x24fb48u;
    // NOP
label_24fb4c:
    // 0x24fb4c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24fb4cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_24fb50:
    // 0x24fb50: 0x3dcccccd  .word       0x3DCCCCCD                   # lui         $t4, 0xCCCD # 01C00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24fb50u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)52429 << 16));
label_24fb54:
    // 0x24fb54: 0x3dcccccd  .word       0x3DCCCCCD                   # lui         $t4, 0xCCCD # 01C00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24fb54u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)52429 << 16));
label_24fb58:
    // 0x24fb58: 0x0  nop
    ctx->pc = 0x24fb58u;
    // NOP
label_24fb5c:
    // 0x24fb5c: 0x0  nop
    ctx->pc = 0x24fb5cu;
    // NOP
label_24fb60:
    // 0x24fb60: 0x3e19999a  .word       0x3E19999A                   # lui         $t9, 0x999A # 02000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24fb60u;
    SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)39322 << 16));
label_24fb64:
    // 0x24fb64: 0x3e19999a  .word       0x3E19999A                   # lui         $t9, 0x999A # 02000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24fb64u;
    SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)39322 << 16));
label_24fb68:
    // 0x24fb68: 0x0  nop
    ctx->pc = 0x24fb68u;
    // NOP
label_24fb6c:
    // 0x24fb6c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24fb6cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_24fb70:
    // 0x24fb70: 0x0  nop
    ctx->pc = 0x24fb70u;
    // NOP
label_24fb74:
    // 0x24fb74: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24fb74u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_24fb78:
    // 0x24fb78: 0x0  nop
    ctx->pc = 0x24fb78u;
    // NOP
label_24fb7c:
    // 0x24fb7c: 0x0  nop
    ctx->pc = 0x24fb7cu;
    // NOP
label_24fb80:
    // 0x24fb80: 0x3d4ccccd  .word       0x3D4CCCCD                   # lui         $t4, 0xCCCD # 01400000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24fb80u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)52429 << 16));
label_24fb84:
    // 0x24fb84: 0x3d4ccccd  .word       0x3D4CCCCD                   # lui         $t4, 0xCCCD # 01400000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24fb84u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)52429 << 16));
label_24fb88:
    // 0x24fb88: 0x0  nop
    ctx->pc = 0x24fb88u;
    // NOP
label_24fb8c:
    // 0x24fb8c: 0x0  nop
    ctx->pc = 0x24fb8cu;
    // NOP
label_24fb90:
    // 0x24fb90: 0x0  nop
    ctx->pc = 0x24fb90u;
    // NOP
label_24fb94:
    // 0x24fb94: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24fb94u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_24fb98:
    // 0x24fb98: 0x0  nop
    ctx->pc = 0x24fb98u;
    // NOP
label_24fb9c:
    // 0x24fb9c: 0x0  nop
    ctx->pc = 0x24fb9cu;
    // NOP
    ctx->pc = 0x24fba0u;
    return;
}
