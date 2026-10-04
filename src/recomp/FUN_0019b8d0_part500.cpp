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


void FUN_0019b8d0_part500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x28f340u: goto label_28f340;
        case 0x28f344u: goto label_28f344;
        case 0x28f348u: goto label_28f348;
        case 0x28f34cu: goto label_28f34c;
        case 0x28f350u: goto label_28f350;
        case 0x28f354u: goto label_28f354;
        case 0x28f358u: goto label_28f358;
        case 0x28f35cu: goto label_28f35c;
        case 0x28f360u: goto label_28f360;
        case 0x28f364u: goto label_28f364;
        case 0x28f368u: goto label_28f368;
        case 0x28f36cu: goto label_28f36c;
        case 0x28f370u: goto label_28f370;
        case 0x28f374u: goto label_28f374;
        case 0x28f378u: goto label_28f378;
        case 0x28f37cu: goto label_28f37c;
        case 0x28f380u: goto label_28f380;
        case 0x28f384u: goto label_28f384;
        case 0x28f388u: goto label_28f388;
        case 0x28f38cu: goto label_28f38c;
        case 0x28f390u: goto label_28f390;
        case 0x28f394u: goto label_28f394;
        case 0x28f398u: goto label_28f398;
        case 0x28f39cu: goto label_28f39c;
        case 0x28f3a0u: goto label_28f3a0;
        case 0x28f3a4u: goto label_28f3a4;
        case 0x28f3a8u: goto label_28f3a8;
        case 0x28f3acu: goto label_28f3ac;
        case 0x28f3b0u: goto label_28f3b0;
        case 0x28f3b4u: goto label_28f3b4;
        case 0x28f3b8u: goto label_28f3b8;
        case 0x28f3bcu: goto label_28f3bc;
        case 0x28f3c0u: goto label_28f3c0;
        case 0x28f3c4u: goto label_28f3c4;
        case 0x28f3c8u: goto label_28f3c8;
        case 0x28f3ccu: goto label_28f3cc;
        case 0x28f3d0u: goto label_28f3d0;
        case 0x28f3d4u: goto label_28f3d4;
        case 0x28f3d8u: goto label_28f3d8;
        case 0x28f3dcu: goto label_28f3dc;
        case 0x28f3e0u: goto label_28f3e0;
        case 0x28f3e4u: goto label_28f3e4;
        case 0x28f3e8u: goto label_28f3e8;
        case 0x28f3ecu: goto label_28f3ec;
        case 0x28f3f0u: goto label_28f3f0;
        case 0x28f3f4u: goto label_28f3f4;
        case 0x28f3f8u: goto label_28f3f8;
        case 0x28f3fcu: goto label_28f3fc;
        case 0x28f400u: goto label_28f400;
        case 0x28f404u: goto label_28f404;
        case 0x28f408u: goto label_28f408;
        case 0x28f40cu: goto label_28f40c;
        case 0x28f410u: goto label_28f410;
        case 0x28f414u: goto label_28f414;
        case 0x28f418u: goto label_28f418;
        case 0x28f41cu: goto label_28f41c;
        case 0x28f420u: goto label_28f420;
        case 0x28f424u: goto label_28f424;
        case 0x28f428u: goto label_28f428;
        case 0x28f42cu: goto label_28f42c;
        case 0x28f430u: goto label_28f430;
        case 0x28f434u: goto label_28f434;
        case 0x28f438u: goto label_28f438;
        case 0x28f43cu: goto label_28f43c;
        case 0x28f440u: goto label_28f440;
        case 0x28f444u: goto label_28f444;
        case 0x28f448u: goto label_28f448;
        case 0x28f44cu: goto label_28f44c;
        case 0x28f450u: goto label_28f450;
        case 0x28f454u: goto label_28f454;
        case 0x28f458u: goto label_28f458;
        case 0x28f45cu: goto label_28f45c;
        case 0x28f460u: goto label_28f460;
        case 0x28f464u: goto label_28f464;
        case 0x28f468u: goto label_28f468;
        case 0x28f46cu: goto label_28f46c;
        case 0x28f470u: goto label_28f470;
        case 0x28f474u: goto label_28f474;
        case 0x28f478u: goto label_28f478;
        case 0x28f47cu: goto label_28f47c;
        case 0x28f480u: goto label_28f480;
        case 0x28f484u: goto label_28f484;
        case 0x28f488u: goto label_28f488;
        case 0x28f48cu: goto label_28f48c;
        case 0x28f490u: goto label_28f490;
        case 0x28f494u: goto label_28f494;
        case 0x28f498u: goto label_28f498;
        case 0x28f49cu: goto label_28f49c;
        case 0x28f4a0u: goto label_28f4a0;
        case 0x28f4a4u: goto label_28f4a4;
        case 0x28f4a8u: goto label_28f4a8;
        case 0x28f4acu: goto label_28f4ac;
        case 0x28f4b0u: goto label_28f4b0;
        case 0x28f4b4u: goto label_28f4b4;
        case 0x28f4b8u: goto label_28f4b8;
        case 0x28f4bcu: goto label_28f4bc;
        case 0x28f4c0u: goto label_28f4c0;
        case 0x28f4c4u: goto label_28f4c4;
        case 0x28f4c8u: goto label_28f4c8;
        case 0x28f4ccu: goto label_28f4cc;
        case 0x28f4d0u: goto label_28f4d0;
        case 0x28f4d4u: goto label_28f4d4;
        case 0x28f4d8u: goto label_28f4d8;
        case 0x28f4dcu: goto label_28f4dc;
        case 0x28f4e0u: goto label_28f4e0;
        case 0x28f4e4u: goto label_28f4e4;
        case 0x28f4e8u: goto label_28f4e8;
        case 0x28f4ecu: goto label_28f4ec;
        case 0x28f4f0u: goto label_28f4f0;
        case 0x28f4f4u: goto label_28f4f4;
        case 0x28f4f8u: goto label_28f4f8;
        case 0x28f4fcu: goto label_28f4fc;
        case 0x28f500u: goto label_28f500;
        case 0x28f504u: goto label_28f504;
        case 0x28f508u: goto label_28f508;
        case 0x28f50cu: goto label_28f50c;
        case 0x28f510u: goto label_28f510;
        case 0x28f514u: goto label_28f514;
        case 0x28f518u: goto label_28f518;
        case 0x28f51cu: goto label_28f51c;
        case 0x28f520u: goto label_28f520;
        case 0x28f524u: goto label_28f524;
        case 0x28f528u: goto label_28f528;
        case 0x28f52cu: goto label_28f52c;
        case 0x28f530u: goto label_28f530;
        case 0x28f534u: goto label_28f534;
        case 0x28f538u: goto label_28f538;
        case 0x28f53cu: goto label_28f53c;
        case 0x28f540u: goto label_28f540;
        case 0x28f544u: goto label_28f544;
        case 0x28f548u: goto label_28f548;
        case 0x28f54cu: goto label_28f54c;
        case 0x28f550u: goto label_28f550;
        case 0x28f554u: goto label_28f554;
        case 0x28f558u: goto label_28f558;
        case 0x28f55cu: goto label_28f55c;
        case 0x28f560u: goto label_28f560;
        case 0x28f564u: goto label_28f564;
        case 0x28f568u: goto label_28f568;
        case 0x28f56cu: goto label_28f56c;
        case 0x28f570u: goto label_28f570;
        case 0x28f574u: goto label_28f574;
        case 0x28f578u: goto label_28f578;
        case 0x28f57cu: goto label_28f57c;
        case 0x28f580u: goto label_28f580;
        case 0x28f584u: goto label_28f584;
        case 0x28f588u: goto label_28f588;
        case 0x28f58cu: goto label_28f58c;
        case 0x28f590u: goto label_28f590;
        case 0x28f594u: goto label_28f594;
        case 0x28f598u: goto label_28f598;
        case 0x28f59cu: goto label_28f59c;
        case 0x28f5a0u: goto label_28f5a0;
        case 0x28f5a4u: goto label_28f5a4;
        case 0x28f5a8u: goto label_28f5a8;
        case 0x28f5acu: goto label_28f5ac;
        case 0x28f5b0u: goto label_28f5b0;
        case 0x28f5b4u: goto label_28f5b4;
        case 0x28f5b8u: goto label_28f5b8;
        case 0x28f5bcu: goto label_28f5bc;
        case 0x28f5c0u: goto label_28f5c0;
        case 0x28f5c4u: goto label_28f5c4;
        case 0x28f5c8u: goto label_28f5c8;
        case 0x28f5ccu: goto label_28f5cc;
        case 0x28f5d0u: goto label_28f5d0;
        case 0x28f5d4u: goto label_28f5d4;
        case 0x28f5d8u: goto label_28f5d8;
        case 0x28f5dcu: goto label_28f5dc;
        case 0x28f5e0u: goto label_28f5e0;
        case 0x28f5e4u: goto label_28f5e4;
        case 0x28f5e8u: goto label_28f5e8;
        case 0x28f5ecu: goto label_28f5ec;
        case 0x28f5f0u: goto label_28f5f0;
        case 0x28f5f4u: goto label_28f5f4;
        case 0x28f5f8u: goto label_28f5f8;
        case 0x28f5fcu: goto label_28f5fc;
        case 0x28f600u: goto label_28f600;
        case 0x28f604u: goto label_28f604;
        case 0x28f608u: goto label_28f608;
        case 0x28f60cu: goto label_28f60c;
        case 0x28f610u: goto label_28f610;
        case 0x28f614u: goto label_28f614;
        case 0x28f618u: goto label_28f618;
        case 0x28f61cu: goto label_28f61c;
        case 0x28f620u: goto label_28f620;
        case 0x28f624u: goto label_28f624;
        case 0x28f628u: goto label_28f628;
        case 0x28f62cu: goto label_28f62c;
        case 0x28f630u: goto label_28f630;
        case 0x28f634u: goto label_28f634;
        case 0x28f638u: goto label_28f638;
        case 0x28f63cu: goto label_28f63c;
        case 0x28f640u: goto label_28f640;
        case 0x28f644u: goto label_28f644;
        case 0x28f648u: goto label_28f648;
        case 0x28f64cu: goto label_28f64c;
        case 0x28f650u: goto label_28f650;
        case 0x28f654u: goto label_28f654;
        case 0x28f658u: goto label_28f658;
        case 0x28f65cu: goto label_28f65c;
        case 0x28f660u: goto label_28f660;
        case 0x28f664u: goto label_28f664;
        case 0x28f668u: goto label_28f668;
        case 0x28f66cu: goto label_28f66c;
        case 0x28f670u: goto label_28f670;
        case 0x28f674u: goto label_28f674;
        case 0x28f678u: goto label_28f678;
        case 0x28f67cu: goto label_28f67c;
        case 0x28f680u: goto label_28f680;
        case 0x28f684u: goto label_28f684;
        case 0x28f688u: goto label_28f688;
        case 0x28f68cu: goto label_28f68c;
        case 0x28f690u: goto label_28f690;
        case 0x28f694u: goto label_28f694;
        case 0x28f698u: goto label_28f698;
        case 0x28f69cu: goto label_28f69c;
        case 0x28f6a0u: goto label_28f6a0;
        case 0x28f6a4u: goto label_28f6a4;
        case 0x28f6a8u: goto label_28f6a8;
        case 0x28f6acu: goto label_28f6ac;
        case 0x28f6b0u: goto label_28f6b0;
        case 0x28f6b4u: goto label_28f6b4;
        case 0x28f6b8u: goto label_28f6b8;
        case 0x28f6bcu: goto label_28f6bc;
        case 0x28f6c0u: goto label_28f6c0;
        case 0x28f6c4u: goto label_28f6c4;
        case 0x28f6c8u: goto label_28f6c8;
        case 0x28f6ccu: goto label_28f6cc;
        case 0x28f6d0u: goto label_28f6d0;
        case 0x28f6d4u: goto label_28f6d4;
        case 0x28f6d8u: goto label_28f6d8;
        case 0x28f6dcu: goto label_28f6dc;
        case 0x28f6e0u: goto label_28f6e0;
        case 0x28f6e4u: goto label_28f6e4;
        case 0x28f6e8u: goto label_28f6e8;
        case 0x28f6ecu: goto label_28f6ec;
        case 0x28f6f0u: goto label_28f6f0;
        case 0x28f6f4u: goto label_28f6f4;
        case 0x28f6f8u: goto label_28f6f8;
        case 0x28f6fcu: goto label_28f6fc;
        case 0x28f700u: goto label_28f700;
        case 0x28f704u: goto label_28f704;
        case 0x28f708u: goto label_28f708;
        case 0x28f70cu: goto label_28f70c;
        case 0x28f710u: goto label_28f710;
        case 0x28f714u: goto label_28f714;
        case 0x28f718u: goto label_28f718;
        case 0x28f71cu: goto label_28f71c;
        case 0x28f720u: goto label_28f720;
        case 0x28f724u: goto label_28f724;
        case 0x28f728u: goto label_28f728;
        case 0x28f72cu: goto label_28f72c;
        case 0x28f730u: goto label_28f730;
        case 0x28f734u: goto label_28f734;
        case 0x28f738u: goto label_28f738;
        case 0x28f73cu: goto label_28f73c;
        case 0x28f740u: goto label_28f740;
        case 0x28f744u: goto label_28f744;
        case 0x28f748u: goto label_28f748;
        case 0x28f74cu: goto label_28f74c;
        case 0x28f750u: goto label_28f750;
        case 0x28f754u: goto label_28f754;
        case 0x28f758u: goto label_28f758;
        case 0x28f75cu: goto label_28f75c;
        case 0x28f760u: goto label_28f760;
        case 0x28f764u: goto label_28f764;
        case 0x28f768u: goto label_28f768;
        case 0x28f76cu: goto label_28f76c;
        case 0x28f770u: goto label_28f770;
        case 0x28f774u: goto label_28f774;
        case 0x28f778u: goto label_28f778;
        case 0x28f77cu: goto label_28f77c;
        case 0x28f780u: goto label_28f780;
        case 0x28f784u: goto label_28f784;
        case 0x28f788u: goto label_28f788;
        case 0x28f78cu: goto label_28f78c;
        case 0x28f790u: goto label_28f790;
        case 0x28f794u: goto label_28f794;
        case 0x28f798u: goto label_28f798;
        case 0x28f79cu: goto label_28f79c;
        case 0x28f7a0u: goto label_28f7a0;
        case 0x28f7a4u: goto label_28f7a4;
        case 0x28f7a8u: goto label_28f7a8;
        case 0x28f7acu: goto label_28f7ac;
        case 0x28f7b0u: goto label_28f7b0;
        case 0x28f7b4u: goto label_28f7b4;
        case 0x28f7b8u: goto label_28f7b8;
        case 0x28f7bcu: goto label_28f7bc;
        case 0x28f7c0u: goto label_28f7c0;
        case 0x28f7c4u: goto label_28f7c4;
        case 0x28f7c8u: goto label_28f7c8;
        case 0x28f7ccu: goto label_28f7cc;
        case 0x28f7d0u: goto label_28f7d0;
        case 0x28f7d4u: goto label_28f7d4;
        case 0x28f7d8u: goto label_28f7d8;
        case 0x28f7dcu: goto label_28f7dc;
        case 0x28f7e0u: goto label_28f7e0;
        case 0x28f7e4u: goto label_28f7e4;
        case 0x28f7e8u: goto label_28f7e8;
        case 0x28f7ecu: goto label_28f7ec;
        case 0x28f7f0u: goto label_28f7f0;
        case 0x28f7f4u: goto label_28f7f4;
        case 0x28f7f8u: goto label_28f7f8;
        case 0x28f7fcu: goto label_28f7fc;
        case 0x28f800u: goto label_28f800;
        case 0x28f804u: goto label_28f804;
        case 0x28f808u: goto label_28f808;
        case 0x28f80cu: goto label_28f80c;
        case 0x28f810u: goto label_28f810;
        case 0x28f814u: goto label_28f814;
        case 0x28f818u: goto label_28f818;
        case 0x28f81cu: goto label_28f81c;
        case 0x28f820u: goto label_28f820;
        case 0x28f824u: goto label_28f824;
        case 0x28f828u: goto label_28f828;
        case 0x28f82cu: goto label_28f82c;
        case 0x28f830u: goto label_28f830;
        case 0x28f834u: goto label_28f834;
        case 0x28f838u: goto label_28f838;
        case 0x28f83cu: goto label_28f83c;
        case 0x28f840u: goto label_28f840;
        case 0x28f844u: goto label_28f844;
        case 0x28f848u: goto label_28f848;
        case 0x28f84cu: goto label_28f84c;
        case 0x28f850u: goto label_28f850;
        case 0x28f854u: goto label_28f854;
        case 0x28f858u: goto label_28f858;
        case 0x28f85cu: goto label_28f85c;
        case 0x28f860u: goto label_28f860;
        case 0x28f864u: goto label_28f864;
        case 0x28f868u: goto label_28f868;
        case 0x28f86cu: goto label_28f86c;
        case 0x28f870u: goto label_28f870;
        case 0x28f874u: goto label_28f874;
        case 0x28f878u: goto label_28f878;
        case 0x28f87cu: goto label_28f87c;
        case 0x28f880u: goto label_28f880;
        case 0x28f884u: goto label_28f884;
        case 0x28f888u: goto label_28f888;
        case 0x28f88cu: goto label_28f88c;
        case 0x28f890u: goto label_28f890;
        case 0x28f894u: goto label_28f894;
        case 0x28f898u: goto label_28f898;
        case 0x28f89cu: goto label_28f89c;
        case 0x28f8a0u: goto label_28f8a0;
        case 0x28f8a4u: goto label_28f8a4;
        case 0x28f8a8u: goto label_28f8a8;
        case 0x28f8acu: goto label_28f8ac;
        case 0x28f8b0u: goto label_28f8b0;
        case 0x28f8b4u: goto label_28f8b4;
        case 0x28f8b8u: goto label_28f8b8;
        case 0x28f8bcu: goto label_28f8bc;
        case 0x28f8c0u: goto label_28f8c0;
        case 0x28f8c4u: goto label_28f8c4;
        case 0x28f8c8u: goto label_28f8c8;
        case 0x28f8ccu: goto label_28f8cc;
        case 0x28f8d0u: goto label_28f8d0;
        case 0x28f8d4u: goto label_28f8d4;
        case 0x28f8d8u: goto label_28f8d8;
        case 0x28f8dcu: goto label_28f8dc;
        case 0x28f8e0u: goto label_28f8e0;
        case 0x28f8e4u: goto label_28f8e4;
        case 0x28f8e8u: goto label_28f8e8;
        case 0x28f8ecu: goto label_28f8ec;
        case 0x28f8f0u: goto label_28f8f0;
        case 0x28f8f4u: goto label_28f8f4;
        case 0x28f8f8u: goto label_28f8f8;
        case 0x28f8fcu: goto label_28f8fc;
        case 0x28f900u: goto label_28f900;
        case 0x28f904u: goto label_28f904;
        case 0x28f908u: goto label_28f908;
        case 0x28f90cu: goto label_28f90c;
        case 0x28f910u: goto label_28f910;
        case 0x28f914u: goto label_28f914;
        case 0x28f918u: goto label_28f918;
        case 0x28f91cu: goto label_28f91c;
        case 0x28f920u: goto label_28f920;
        case 0x28f924u: goto label_28f924;
        case 0x28f928u: goto label_28f928;
        case 0x28f92cu: goto label_28f92c;
        case 0x28f930u: goto label_28f930;
        case 0x28f934u: goto label_28f934;
        case 0x28f938u: goto label_28f938;
        case 0x28f93cu: goto label_28f93c;
        case 0x28f940u: goto label_28f940;
        case 0x28f944u: goto label_28f944;
        case 0x28f948u: goto label_28f948;
        case 0x28f94cu: goto label_28f94c;
        case 0x28f950u: goto label_28f950;
        case 0x28f954u: goto label_28f954;
        case 0x28f958u: goto label_28f958;
        case 0x28f95cu: goto label_28f95c;
        case 0x28f960u: goto label_28f960;
        case 0x28f964u: goto label_28f964;
        case 0x28f968u: goto label_28f968;
        case 0x28f96cu: goto label_28f96c;
        case 0x28f970u: goto label_28f970;
        case 0x28f974u: goto label_28f974;
        case 0x28f978u: goto label_28f978;
        case 0x28f97cu: goto label_28f97c;
        case 0x28f980u: goto label_28f980;
        case 0x28f984u: goto label_28f984;
        case 0x28f988u: goto label_28f988;
        case 0x28f98cu: goto label_28f98c;
        case 0x28f990u: goto label_28f990;
        case 0x28f994u: goto label_28f994;
        case 0x28f998u: goto label_28f998;
        case 0x28f99cu: goto label_28f99c;
        case 0x28f9a0u: goto label_28f9a0;
        case 0x28f9a4u: goto label_28f9a4;
        case 0x28f9a8u: goto label_28f9a8;
        case 0x28f9acu: goto label_28f9ac;
        case 0x28f9b0u: goto label_28f9b0;
        case 0x28f9b4u: goto label_28f9b4;
        case 0x28f9b8u: goto label_28f9b8;
        case 0x28f9bcu: goto label_28f9bc;
        case 0x28f9c0u: goto label_28f9c0;
        case 0x28f9c4u: goto label_28f9c4;
        case 0x28f9c8u: goto label_28f9c8;
        case 0x28f9ccu: goto label_28f9cc;
        case 0x28f9d0u: goto label_28f9d0;
        case 0x28f9d4u: goto label_28f9d4;
        case 0x28f9d8u: goto label_28f9d8;
        case 0x28f9dcu: goto label_28f9dc;
        case 0x28f9e0u: goto label_28f9e0;
        case 0x28f9e4u: goto label_28f9e4;
        case 0x28f9e8u: goto label_28f9e8;
        case 0x28f9ecu: goto label_28f9ec;
        case 0x28f9f0u: goto label_28f9f0;
        case 0x28f9f4u: goto label_28f9f4;
        case 0x28f9f8u: goto label_28f9f8;
        case 0x28f9fcu: goto label_28f9fc;
        case 0x28fa00u: goto label_28fa00;
        case 0x28fa04u: goto label_28fa04;
        case 0x28fa08u: goto label_28fa08;
        case 0x28fa0cu: goto label_28fa0c;
        case 0x28fa10u: goto label_28fa10;
        case 0x28fa14u: goto label_28fa14;
        case 0x28fa18u: goto label_28fa18;
        case 0x28fa1cu: goto label_28fa1c;
        case 0x28fa20u: goto label_28fa20;
        case 0x28fa24u: goto label_28fa24;
        case 0x28fa28u: goto label_28fa28;
        case 0x28fa2cu: goto label_28fa2c;
        case 0x28fa30u: goto label_28fa30;
        case 0x28fa34u: goto label_28fa34;
        case 0x28fa38u: goto label_28fa38;
        case 0x28fa3cu: goto label_28fa3c;
        case 0x28fa40u: goto label_28fa40;
        case 0x28fa44u: goto label_28fa44;
        case 0x28fa48u: goto label_28fa48;
        case 0x28fa4cu: goto label_28fa4c;
        case 0x28fa50u: goto label_28fa50;
        case 0x28fa54u: goto label_28fa54;
        case 0x28fa58u: goto label_28fa58;
        case 0x28fa5cu: goto label_28fa5c;
        case 0x28fa60u: goto label_28fa60;
        case 0x28fa64u: goto label_28fa64;
        case 0x28fa68u: goto label_28fa68;
        case 0x28fa6cu: goto label_28fa6c;
        case 0x28fa70u: goto label_28fa70;
        case 0x28fa74u: goto label_28fa74;
        case 0x28fa78u: goto label_28fa78;
        case 0x28fa7cu: goto label_28fa7c;
        case 0x28fa80u: goto label_28fa80;
        case 0x28fa84u: goto label_28fa84;
        case 0x28fa88u: goto label_28fa88;
        case 0x28fa8cu: goto label_28fa8c;
        case 0x28fa90u: goto label_28fa90;
        case 0x28fa94u: goto label_28fa94;
        case 0x28fa98u: goto label_28fa98;
        case 0x28fa9cu: goto label_28fa9c;
        case 0x28faa0u: goto label_28faa0;
        case 0x28faa4u: goto label_28faa4;
        case 0x28faa8u: goto label_28faa8;
        case 0x28faacu: goto label_28faac;
        case 0x28fab0u: goto label_28fab0;
        case 0x28fab4u: goto label_28fab4;
        case 0x28fab8u: goto label_28fab8;
        case 0x28fabcu: goto label_28fabc;
        case 0x28fac0u: goto label_28fac0;
        case 0x28fac4u: goto label_28fac4;
        case 0x28fac8u: goto label_28fac8;
        case 0x28faccu: goto label_28facc;
        case 0x28fad0u: goto label_28fad0;
        case 0x28fad4u: goto label_28fad4;
        case 0x28fad8u: goto label_28fad8;
        case 0x28fadcu: goto label_28fadc;
        case 0x28fae0u: goto label_28fae0;
        case 0x28fae4u: goto label_28fae4;
        case 0x28fae8u: goto label_28fae8;
        case 0x28faecu: goto label_28faec;
        case 0x28faf0u: goto label_28faf0;
        case 0x28faf4u: goto label_28faf4;
        case 0x28faf8u: goto label_28faf8;
        case 0x28fafcu: goto label_28fafc;
        case 0x28fb00u: goto label_28fb00;
        case 0x28fb04u: goto label_28fb04;
        case 0x28fb08u: goto label_28fb08;
        case 0x28fb0cu: goto label_28fb0c;
        default: return;
    }

label_28f340:
    // 0x28f340: 0x0  nop
    ctx->pc = 0x28f340u;
    // NOP
label_28f344:
    // 0x28f344: 0x0  nop
    ctx->pc = 0x28f344u;
    // NOP
label_28f348:
    // 0x28f348: 0x0  nop
    ctx->pc = 0x28f348u;
    // NOP
label_28f34c:
    // 0x28f34c: 0x0  nop
    ctx->pc = 0x28f34cu;
    // NOP
label_28f350:
    // 0x28f350: 0x4600e800  add.s       $f0, $f29, $f0
    ctx->pc = 0x28f350u;
    ctx->f[0] = FPU_ADD_S(ctx->f[29], ctx->f[0]);
label_28f354:
    // 0x28f354: 0xc59f6000  lwc1        $f31, 0x6000($t4)
    ctx->pc = 0x28f354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 24576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[31] = f; }
label_28f358:
    // 0x28f358: 0x47696600  .word       0x47696600                   # INVALID     $k1, $t1, 0x6600 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28f358u;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x1B, function 0x0 at 0x28F358 raw=0x47696600"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28f35c:
    // 0x28f35c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28f35cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_28f360:
    // 0x28f360: 0x0  nop
    ctx->pc = 0x28f360u;
    // NOP
label_28f364:
    // 0x28f364: 0xbfc90fdb  cache       0x09, 0xFDB($fp)
    ctx->pc = 0x28f364u;
    // CACHE instruction (ignored)
label_28f368:
    // 0x28f368: 0x0  nop
    ctx->pc = 0x28f368u;
    // NOP
label_28f36c:
    // 0x28f36c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28f36cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_28f370:
    // 0x28f370: 0x0  nop
    ctx->pc = 0x28f370u;
    // NOP
label_28f374:
    // 0x28f374: 0x0  nop
    ctx->pc = 0x28f374u;
    // NOP
label_28f378:
    // 0x28f378: 0x0  nop
    ctx->pc = 0x28f378u;
    // NOP
label_28f37c:
    // 0x28f37c: 0x0  nop
    ctx->pc = 0x28f37cu;
    // NOP
label_28f380:
    // 0x28f380: 0x4600e800  add.s       $f0, $f29, $f0
    ctx->pc = 0x28f380u;
    ctx->f[0] = FPU_ADD_S(ctx->f[29], ctx->f[0]);
label_28f384:
    // 0x28f384: 0xc59f6000  lwc1        $f31, 0x6000($t4)
    ctx->pc = 0x28f384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 24576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[31] = f; }
label_28f388:
    // 0x28f388: 0x47677200  .word       0x47677200                   # INVALID     $k1, $a3, 0x7200 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28f388u;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x1B, function 0x0 at 0x28F388 raw=0x47677200"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28f38c:
    // 0x28f38c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28f38cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_28f390:
    // 0x28f390: 0x0  nop
    ctx->pc = 0x28f390u;
    // NOP
label_28f394:
    // 0x28f394: 0xbfc90fdb  cache       0x09, 0xFDB($fp)
    ctx->pc = 0x28f394u;
    // CACHE instruction (ignored)
label_28f398:
    // 0x28f398: 0x0  nop
    ctx->pc = 0x28f398u;
    // NOP
label_28f39c:
    // 0x28f39c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28f39cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_28f3a0:
    // 0x28f3a0: 0x0  nop
    ctx->pc = 0x28f3a0u;
    // NOP
label_28f3a4:
    // 0x28f3a4: 0x0  nop
    ctx->pc = 0x28f3a4u;
    // NOP
label_28f3a8:
    // 0x28f3a8: 0x0  nop
    ctx->pc = 0x28f3a8u;
    // NOP
label_28f3ac:
    // 0x28f3ac: 0x0  nop
    ctx->pc = 0x28f3acu;
    // NOP
label_28f3b0:
    // 0x28f3b0: 0x46160000  add.s       $f0, $f0, $f22
    ctx->pc = 0x28f3b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[22]);
label_28f3b4:
    // 0x28f3b4: 0xc59f6000  lwc1        $f31, 0x6000($t4)
    ctx->pc = 0x28f3b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 24576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[31] = f; }
label_28f3b8:
    // 0x28f3b8: 0x47619600  .word       0x47619600                   # INVALID     $k1, $at, -0x6A00 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28f3b8u;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x1B, function 0x0 at 0x28F3B8 raw=0x47619600"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28f3bc:
    // 0x28f3bc: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28f3bcu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_28f3c0:
    // 0x28f3c0: 0x0  nop
    ctx->pc = 0x28f3c0u;
    // NOP
label_28f3c4:
    // 0x28f3c4: 0xbfc90fdb  cache       0x09, 0xFDB($fp)
    ctx->pc = 0x28f3c4u;
    // CACHE instruction (ignored)
label_28f3c8:
    // 0x28f3c8: 0x0  nop
    ctx->pc = 0x28f3c8u;
    // NOP
label_28f3cc:
    // 0x28f3cc: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28f3ccu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_28f3d0:
    // 0x28f3d0: 0x0  nop
    ctx->pc = 0x28f3d0u;
    // NOP
label_28f3d4:
    // 0x28f3d4: 0x0  nop
    ctx->pc = 0x28f3d4u;
    // NOP
label_28f3d8:
    // 0x28f3d8: 0x0  nop
    ctx->pc = 0x28f3d8u;
    // NOP
label_28f3dc:
    // 0x28f3dc: 0x0  nop
    ctx->pc = 0x28f3dcu;
    // NOP
label_28f3e0:
    // 0x28f3e0: 0x46160000  add.s       $f0, $f0, $f22
    ctx->pc = 0x28f3e0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[22]);
label_28f3e4:
    // 0x28f3e4: 0xc59f6000  lwc1        $f31, 0x6000($t4)
    ctx->pc = 0x28f3e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 24576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[31] = f; }
label_28f3e8:
    // 0x28f3e8: 0x47638a00  .word       0x47638A00                   # INVALID     $k1, $v1, -0x7600 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28f3e8u;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x1B, function 0x0 at 0x28F3E8 raw=0x47638A00"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28f3ec:
    // 0x28f3ec: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28f3ecu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_28f3f0:
    // 0x28f3f0: 0x0  nop
    ctx->pc = 0x28f3f0u;
    // NOP
label_28f3f4:
    // 0x28f3f4: 0xbfc90fdb  cache       0x09, 0xFDB($fp)
    ctx->pc = 0x28f3f4u;
    // CACHE instruction (ignored)
label_28f3f8:
    // 0x28f3f8: 0x0  nop
    ctx->pc = 0x28f3f8u;
    // NOP
label_28f3fc:
    // 0x28f3fc: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28f3fcu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_28f400:
    // 0x28f400: 0x0  nop
    ctx->pc = 0x28f400u;
    // NOP
label_28f404:
    // 0x28f404: 0x0  nop
    ctx->pc = 0x28f404u;
    // NOP
label_28f408:
    // 0x28f408: 0x0  nop
    ctx->pc = 0x28f408u;
    // NOP
label_28f40c:
    // 0x28f40c: 0x0  nop
    ctx->pc = 0x28f40cu;
    // NOP
label_28f410:
    // 0x28f410: 0x45c35000  .word       0x45C35000                   # INVALID     $t6, $v1, 0x5000 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28f410u;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0xE, function 0x0 at 0x28F410 raw=0x45C35000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28f414:
    // 0x28f414: 0xc59f6000  lwc1        $f31, 0x6000($t4)
    ctx->pc = 0x28f414u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 24576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[31] = f; }
label_28f418:
    // 0x28f418: 0x47657e00  .word       0x47657E00                   # INVALID     $k1, $a1, 0x7E00 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28f418u;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x1B, function 0x0 at 0x28F418 raw=0x47657E00"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28f41c:
    // 0x28f41c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28f41cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_28f420:
    // 0x28f420: 0x0  nop
    ctx->pc = 0x28f420u;
    // NOP
label_28f424:
    // 0x28f424: 0x3fc90fdb  .word       0x3FC90FDB                   # lui         $t1, 0xFDB # 03C00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28f424u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4059 << 16));
label_28f428:
    // 0x28f428: 0x0  nop
    ctx->pc = 0x28f428u;
    // NOP
label_28f42c:
    // 0x28f42c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28f42cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_28f430:
    // 0x28f430: 0x0  nop
    ctx->pc = 0x28f430u;
    // NOP
label_28f434:
    // 0x28f434: 0x0  nop
    ctx->pc = 0x28f434u;
    // NOP
label_28f438:
    // 0x28f438: 0x0  nop
    ctx->pc = 0x28f438u;
    // NOP
label_28f43c:
    // 0x28f43c: 0x0  nop
    ctx->pc = 0x28f43cu;
    // NOP
label_28f440:
    // 0x28f440: 0x45c35000  .word       0x45C35000                   # INVALID     $t6, $v1, 0x5000 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28f440u;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0xE, function 0x0 at 0x28F440 raw=0x45C35000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28f444:
    // 0x28f444: 0xc59f6000  lwc1        $f31, 0x6000($t4)
    ctx->pc = 0x28f444u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 24576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[31] = f; }
label_28f448:
    // 0x28f448: 0x47677200  .word       0x47677200                   # INVALID     $k1, $a3, 0x7200 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28f448u;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x1B, function 0x0 at 0x28F448 raw=0x47677200"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28f44c:
    // 0x28f44c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28f44cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_28f450:
    // 0x28f450: 0x0  nop
    ctx->pc = 0x28f450u;
    // NOP
label_28f454:
    // 0x28f454: 0x3fc90fdb  .word       0x3FC90FDB                   # lui         $t1, 0xFDB # 03C00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28f454u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4059 << 16));
label_28f458:
    // 0x28f458: 0x0  nop
    ctx->pc = 0x28f458u;
    // NOP
label_28f45c:
    // 0x28f45c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28f45cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_28f460:
    // 0x28f460: 0x0  nop
    ctx->pc = 0x28f460u;
    // NOP
label_28f464:
    // 0x28f464: 0x0  nop
    ctx->pc = 0x28f464u;
    // NOP
label_28f468:
    // 0x28f468: 0x0  nop
    ctx->pc = 0x28f468u;
    // NOP
label_28f46c:
    // 0x28f46c: 0x0  nop
    ctx->pc = 0x28f46cu;
    // NOP
label_28f470:
    // 0x28f470: 0x45c35000  .word       0x45C35000                   # INVALID     $t6, $v1, 0x5000 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28f470u;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0xE, function 0x0 at 0x28F470 raw=0x45C35000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28f474:
    // 0x28f474: 0xc59f6000  lwc1        $f31, 0x6000($t4)
    ctx->pc = 0x28f474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 24576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[31] = f; }
label_28f478:
    // 0x28f478: 0x47732a00  .word       0x47732A00                   # INVALID     $k1, $s3, 0x2A00 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28f478u;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x1B, function 0x0 at 0x28F478 raw=0x47732A00"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28f47c:
    // 0x28f47c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28f47cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_28f480:
    // 0x28f480: 0x0  nop
    ctx->pc = 0x28f480u;
    // NOP
label_28f484:
    // 0x28f484: 0x3fc90fdb  .word       0x3FC90FDB                   # lui         $t1, 0xFDB # 03C00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28f484u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4059 << 16));
label_28f488:
    // 0x28f488: 0x0  nop
    ctx->pc = 0x28f488u;
    // NOP
label_28f48c:
    // 0x28f48c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28f48cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_28f490:
    // 0x28f490: 0x0  nop
    ctx->pc = 0x28f490u;
    // NOP
label_28f494:
    // 0x28f494: 0x0  nop
    ctx->pc = 0x28f494u;
    // NOP
label_28f498:
    // 0x28f498: 0x0  nop
    ctx->pc = 0x28f498u;
    // NOP
label_28f49c:
    // 0x28f49c: 0x0  nop
    ctx->pc = 0x28f49cu;
    // NOP
label_28f4a0:
    // 0x28f4a0: 0x16  dsrlv       $zero, $zero, $zero
    ctx->pc = 0x28f4a0u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_28f4a4:
    // 0x28f4a4: 0x0  nop
    ctx->pc = 0x28f4a4u;
    // NOP
label_28f4a8:
    // 0x28f4a8: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28f4a8u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x28F4A8 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28f4ac:
    // 0x28f4ac: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x28f4acu;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_28f4b0:
    // 0x28f4b0: 0x17  dsrav       $zero, $zero, $zero
    ctx->pc = 0x28f4b0u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_28f4b4:
    // 0x28f4b4: 0x3  sra         $zero, $zero, 0
    ctx->pc = 0x28f4b4u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 0));
label_28f4b8:
    // 0x28f4b8: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x28f4b8u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_28f4bc:
    // 0x28f4bc: 0x5  .word       0x00000005                   # INVALID     $zero, $zero, 0x5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28f4bcu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x28F4BC raw=0x00000005"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28f4c0:
    // 0x28f4c0: 0x18  mult        $zero, $zero, $zero
    ctx->pc = 0x28f4c0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_28f4c4:
    // 0x28f4c4: 0x6  srlv        $zero, $zero, $zero
    ctx->pc = 0x28f4c4u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_28f4c8:
    // 0x28f4c8: 0x7  srav        $zero, $zero, $zero
    ctx->pc = 0x28f4c8u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_28f4cc:
    // 0x28f4cc: 0x8  jr          $zero
label_28f4d0:
    if (ctx->pc == 0x28F4D0u) {
        ctx->pc = 0x28F4D4u;
        goto label_28f4d4;
    }
    ctx->pc = 0x28F4CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28F4CCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x28F4D4u;
label_28f4d4:
    // 0x28f4d4: 0x9  jalr        $zero, $zero
label_28f4d8:
    if (ctx->pc == 0x28F4D8u) {
        ctx->pc = 0x28F4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F4D4u;
        // 0x28f4d8: 0xa  movz        $zero, $zero, $zero (Delay Slot)
        if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28F4DCu;
        goto label_28f4dc;
    }
    ctx->pc = 0x28F4D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x28F4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F4D4u;
        // 0x28f4d8: 0xa  movz        $zero, $zero, $zero (Delay Slot)
        if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28F4D4u, 0x28F4DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x28F4DCu;
label_28f4dc:
    // 0x28f4dc: 0xb  movn        $zero, $zero, $zero
    ctx->pc = 0x28f4dcu;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_28f4e0:
    // 0x28f4e0: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28f4e0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x28F4E0 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28f4e4:
    // 0x28f4e4: 0xc  syscall     0
    ctx->pc = 0x28f4e4u;
    ctx->pc = 0x28F4E8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_28f4e8:
    // 0x28f4e8: 0xd  break       0
    ctx->pc = 0x28f4e8u;
    runtime->handleBreak(rdram, ctx);
label_28f4ec:
    // 0x28f4ec: 0xe  .word       0x0000000E                   # INVALID     $zero, $zero, 0xE # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28f4ecu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x28F4EC raw=0x0000000E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28f4f0:
    // 0x28f4f0: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x28f4f0u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_28f4f4:
    // 0x28f4f4: 0xf  sync
    ctx->pc = 0x28f4f4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_28f4f8:
    // 0x28f4f8: 0x10  mfhi        $zero
    ctx->pc = 0x28f4f8u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_28f4fc:
    // 0x28f4fc: 0x11  mthi        $zero
    ctx->pc = 0x28f4fcu;
    ctx->hi = GPR_U64(ctx, 0);
label_28f500:
    // 0x28f500: 0xa  movz        $zero, $zero, $zero
    ctx->pc = 0x28f500u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_28f504:
    // 0x28f504: 0x12  mflo        $zero
    ctx->pc = 0x28f504u;
    SET_GPR_U64(ctx, 0, ctx->lo);
label_28f508:
    // 0x28f508: 0x13  mtlo        $zero
    ctx->pc = 0x28f508u;
    ctx->lo = GPR_U64(ctx, 0);
label_28f50c:
    // 0x28f50c: 0x14  dsllv       $zero, $zero, $zero
    ctx->pc = 0x28f50cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_28f510:
    // 0x28f510: 0xb  movn        $zero, $zero, $zero
    ctx->pc = 0x28f510u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_28f514:
    // 0x28f514: 0x15  .word       0x00000015                   # INVALID     $zero, $zero, 0x15 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28f514u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x28F514 raw=0x00000015"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28f518:
    // 0x28f518: 0x16  dsrlv       $zero, $zero, $zero
    ctx->pc = 0x28f518u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_28f51c:
    // 0x28f51c: 0x17  dsrav       $zero, $zero, $zero
    ctx->pc = 0x28f51cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_28f520:
    // 0x28f520: 0xc  syscall     0
    ctx->pc = 0x28f520u;
    ctx->pc = 0x28F524u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_28f524:
    // 0x28f524: 0x18  mult        $zero, $zero, $zero
    ctx->pc = 0x28f524u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_28f528:
    // 0x28f528: 0x19  multu       $zero, $zero
    ctx->pc = 0x28f528u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_28f52c:
    // 0x28f52c: 0x1a  div         $zero, $zero, $zero
    ctx->pc = 0x28f52cu;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_28f530:
    // 0x28f530: 0x20  add         $zero, $zero, $zero
    ctx->pc = 0x28f530u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_28f534:
    // 0x28f534: 0x63  .word       0x00000063                   # negu        $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28f534u;
    SET_GPR_S32(ctx, 0, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_28f538:
    // 0x28f538: 0x64  .word       0x00000064                   # and         $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28f538u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_28f53c:
    // 0x28f53c: 0x65  .word       0x00000065                   # move        $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28f53cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_28f540:
    // 0x28f540: 0x19  multu       $zero, $zero
    ctx->pc = 0x28f540u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_28f544:
    // 0x28f544: 0x1b  divu        $zero, $zero, $zero
    ctx->pc = 0x28f544u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_28f548:
    // 0x28f548: 0x1c  dmult       $zero, $zero
    ctx->pc = 0x28f548u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x28F548 raw=0x0000001C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28f54c:
    // 0x28f54c: 0x1d  dmultu      $zero, $zero
    ctx->pc = 0x28f54cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x28F54C raw=0x0000001D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28f550:
    // 0x28f550: 0x3  sra         $zero, $zero, 0
    ctx->pc = 0x28f550u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 0));
label_28f554:
    // 0x28f554: 0x1e  ddiv        $zero, $zero, $zero
    ctx->pc = 0x28f554u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x28F554 raw=0x0000001E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28f558:
    // 0x28f558: 0x1f  ddivu       $zero, $zero, $zero
    ctx->pc = 0x28f558u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x28F558 raw=0x0000001F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28f55c:
    // 0x28f55c: 0x20  add         $zero, $zero, $zero
    ctx->pc = 0x28f55cu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_28f560:
    // 0x28f560: 0x21  addu        $zero, $zero, $zero
    ctx->pc = 0x28f560u;
    SET_GPR_S32(ctx, 0, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_28f564:
    // 0x28f564: 0x60  .word       0x00000060                   # add         $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28f564u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_28f568:
    // 0x28f568: 0x61  .word       0x00000061                   # addu        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28f568u;
    SET_GPR_S32(ctx, 0, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_28f56c:
    // 0x28f56c: 0x62  .word       0x00000062                   # neg         $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28f56cu;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 0, (int32_t)tmp); }
label_28f570:
    // 0x28f570: 0xd  break       0
    ctx->pc = 0x28f570u;
    runtime->handleBreak(rdram, ctx);
label_28f574:
    // 0x28f574: 0x21  addu        $zero, $zero, $zero
    ctx->pc = 0x28f574u;
    SET_GPR_S32(ctx, 0, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_28f578:
    // 0x28f578: 0x22  neg         $zero, $zero
    ctx->pc = 0x28f578u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 0, (int32_t)tmp); }
label_28f57c:
    // 0x28f57c: 0x23  negu        $zero, $zero
    ctx->pc = 0x28f57cu;
    SET_GPR_S32(ctx, 0, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_28f580:
    // 0x28f580: 0x1a  div         $zero, $zero, $zero
    ctx->pc = 0x28f580u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_28f584:
    // 0x28f584: 0x24  and         $zero, $zero, $zero
    ctx->pc = 0x28f584u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_28f588:
    // 0x28f588: 0x25  move        $zero, $zero
    ctx->pc = 0x28f588u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_28f58c:
    // 0x28f58c: 0x26  xor         $zero, $zero, $zero
    ctx->pc = 0x28f58cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_28f590:
    // 0x28f590: 0xe  .word       0x0000000E                   # INVALID     $zero, $zero, 0xE # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28f590u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x28F590 raw=0x0000000E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28f594:
    // 0x28f594: 0x27  not         $zero, $zero
    ctx->pc = 0x28f594u;
    SET_GPR_U64(ctx, 0, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_28f598:
    // 0x28f598: 0x28  mfsa        $zero
    ctx->pc = 0x28f598u;
    SET_GPR_U32(ctx, 0, ctx->sa);
label_28f59c:
    // 0x28f59c: 0x29  mtsa        $zero
    ctx->pc = 0x28f59cu;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_28f5a0:
    // 0x28f5a0: 0xf  sync
    ctx->pc = 0x28f5a0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_28f5a4:
    // 0x28f5a4: 0x2a  slt         $zero, $zero, $zero
    ctx->pc = 0x28f5a4u;
    SET_GPR_U64(ctx, 0, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_28f5a8:
    // 0x28f5a8: 0x2b  sltu        $zero, $zero, $zero
    ctx->pc = 0x28f5a8u;
    SET_GPR_U64(ctx, 0, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_28f5ac:
    // 0x28f5ac: 0x2c  dadd        $zero, $zero, $zero
    ctx->pc = 0x28f5acu;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_28f5b0:
    // 0x28f5b0: 0x22  neg         $zero, $zero
    ctx->pc = 0x28f5b0u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 0, (int32_t)tmp); }
label_28f5b4:
    // 0x28f5b4: 0x66  .word       0x00000066                   # xor         $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28f5b4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_28f5b8:
    // 0x28f5b8: 0x67  .word       0x00000067                   # not         $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28f5b8u;
    SET_GPR_U64(ctx, 0, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_28f5bc:
    // 0x28f5bc: 0x68  .word       0x00000068                   # mfsa        $zero # 00000040 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x28f5bcu;
    SET_GPR_U32(ctx, 0, ctx->sa);
label_28f5c0:
    // 0x28f5c0: 0x25  move        $zero, $zero
    ctx->pc = 0x28f5c0u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_28f5c4:
    // 0x28f5c4: 0x6c  .word       0x0000006C                   # dadd        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28f5c4u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_28f5c8:
    // 0x28f5c8: 0x6d  .word       0x0000006D                   # daddu       $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28f5c8u;
    SET_GPR_U64(ctx, 0, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28f5cc:
    // 0x28f5cc: 0x6e  .word       0x0000006E                   # dsub        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28f5ccu;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_28f5d0:
    // 0x28f5d0: 0x1b  divu        $zero, $zero, $zero
    ctx->pc = 0x28f5d0u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_28f5d4:
    // 0x28f5d4: 0x2d  daddu       $zero, $zero, $zero
    ctx->pc = 0x28f5d4u;
    SET_GPR_U64(ctx, 0, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28f5d8:
    // 0x28f5d8: 0x2e  dsub        $zero, $zero, $zero
    ctx->pc = 0x28f5d8u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_28f5dc:
    // 0x28f5dc: 0x2f  dsubu       $zero, $zero, $zero
    ctx->pc = 0x28f5dcu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_28f5e0:
    // 0x28f5e0: 0x1c  dmult       $zero, $zero
    ctx->pc = 0x28f5e0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x28F5E0 raw=0x0000001C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28f5e4:
    // 0x28f5e4: 0x30  tge         $zero, $zero, 0
    ctx->pc = 0x28f5e4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_28f5e8:
    // 0x28f5e8: 0x31  tgeu        $zero, $zero, 0
    ctx->pc = 0x28f5e8u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_28f5ec:
    // 0x28f5ec: 0x32  tlt         $zero, $zero, 0
    ctx->pc = 0x28f5ecu;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_28f5f0:
    // 0x28f5f0: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x28f5f0u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_28f5f4:
    // 0x28f5f4: 0x33  tltu        $zero, $zero, 0
    ctx->pc = 0x28f5f4u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_28f5f8:
    // 0x28f5f8: 0x34  teq         $zero, $zero, 0
    ctx->pc = 0x28f5f8u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_28f5fc:
    // 0x28f5fc: 0x35  .word       0x00000035                   # INVALID     $zero, $zero, 0x35 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28f5fcu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x28F5FC raw=0x00000035"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28f600:
    // 0x28f600: 0x5  .word       0x00000005                   # INVALID     $zero, $zero, 0x5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28f600u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x28F600 raw=0x00000005"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28f604:
    // 0x28f604: 0x36  tne         $zero, $zero, 0
    ctx->pc = 0x28f604u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_28f608:
    // 0x28f608: 0x37  .word       0x00000037                   # INVALID     $zero, $zero, 0x37 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28f608u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x28F608 raw=0x00000037"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28f60c:
    // 0x28f60c: 0x38  dsll        $zero, $zero, 0
    ctx->pc = 0x28f60cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << 0);
label_28f610:
    // 0x28f610: 0x6  srlv        $zero, $zero, $zero
    ctx->pc = 0x28f610u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_28f614:
    // 0x28f614: 0x39  .word       0x00000039                   # INVALID     $zero, $zero, 0x39 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28f614u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x28F614 raw=0x00000039"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28f618:
    // 0x28f618: 0x3a  dsrl        $zero, $zero, 0
    ctx->pc = 0x28f618u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> 0);
label_28f61c:
    // 0x28f61c: 0x3b  dsra        $zero, $zero, 0
    ctx->pc = 0x28f61cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> 0);
label_28f620:
    // 0x28f620: 0x10  mfhi        $zero
    ctx->pc = 0x28f620u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_28f624:
    // 0x28f624: 0x3c  dsll32      $zero, $zero, 0
    ctx->pc = 0x28f624u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (32 + 0));
label_28f628:
    // 0x28f628: 0x3d  .word       0x0000003D                   # INVALID     $zero, $zero, 0x3D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28f628u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x28F628 raw=0x0000003D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28f62c:
    // 0x28f62c: 0x3e  dsrl32      $zero, $zero, 0
    ctx->pc = 0x28f62cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (32 + 0));
label_28f630:
    // 0x28f630: 0x11  mthi        $zero
    ctx->pc = 0x28f630u;
    ctx->hi = GPR_U64(ctx, 0);
label_28f634:
    // 0x28f634: 0x3f  dsra32      $zero, $zero, 0
    ctx->pc = 0x28f634u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 0));
label_28f638:
    // 0x28f638: 0x40  sll         $zero, $zero, 1
    ctx->pc = 0x28f638u;
    
label_28f63c:
    // 0x28f63c: 0x41  .word       0x00000041                   # INVALID     $zero, $zero, 0x41 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28f63cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x28F63C raw=0x00000041"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28f640:
    // 0x28f640: 0x1d  dmultu      $zero, $zero
    ctx->pc = 0x28f640u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x28F640 raw=0x0000001D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28f644:
    // 0x28f644: 0x42  srl         $zero, $zero, 1
    ctx->pc = 0x28f644u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 1));
label_28f648:
    // 0x28f648: 0x43  sra         $zero, $zero, 1
    ctx->pc = 0x28f648u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 1));
label_28f64c:
    // 0x28f64c: 0x44  .word       0x00000044                   # sllv        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28f64cu;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_28f650:
    // 0x28f650: 0x26  xor         $zero, $zero, $zero
    ctx->pc = 0x28f650u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_28f654:
    // 0x28f654: 0x69  .word       0x00000069                   # mtsa        $zero # 00000040 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x28f654u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_28f658:
    // 0x28f658: 0x6a  .word       0x0000006A                   # slt         $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28f658u;
    SET_GPR_U64(ctx, 0, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_28f65c:
    // 0x28f65c: 0x6b  .word       0x0000006B                   # sltu        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28f65cu;
    SET_GPR_U64(ctx, 0, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_28f660:
    // 0x28f660: 0x7  srav        $zero, $zero, $zero
    ctx->pc = 0x28f660u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_28f664:
    // 0x28f664: 0x45  .word       0x00000045                   # INVALID     $zero, $zero, 0x45 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28f664u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x28F664 raw=0x00000045"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28f668:
    // 0x28f668: 0x46  .word       0x00000046                   # srlv        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28f668u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_28f66c:
    // 0x28f66c: 0x47  .word       0x00000047                   # srav        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28f66cu;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_28f670:
    // 0x28f670: 0x8  jr          $zero
label_28f674:
    if (ctx->pc == 0x28F674u) {
        ctx->pc = 0x28F674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F670u;
        // 0x28f674: 0x48  .word       0x00000048                   # jr          $zero # 00000040 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // JR $0 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x28F678u;
        goto label_28f678;
    }
    ctx->pc = 0x28F670u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x28F674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F670u;
        // 0x28f674: 0x48  .word       0x00000048                   # jr          $zero # 00000040 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // JR $0 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28F670u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x28F678u;
label_28f678:
    // 0x28f678: 0x49  .word       0x00000049                   # jalr        $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
label_28f67c:
    if (ctx->pc == 0x28F67Cu) {
        ctx->pc = 0x28F67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F678u;
        // 0x28f67c: 0x4a  .word       0x0000004A                   # movz        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28F680u;
        goto label_28f680;
    }
    ctx->pc = 0x28F678u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x28F67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F678u;
        // 0x28f67c: 0x4a  .word       0x0000004A                   # movz        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28F678u, 0x28F680u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x28F680u;
label_28f680:
    // 0x28f680: 0x9  jalr        $zero, $zero
label_28f684:
    if (ctx->pc == 0x28F684u) {
        ctx->pc = 0x28F684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F680u;
        // 0x28f684: 0x4b  .word       0x0000004B                   # movn        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28F688u;
        goto label_28f688;
    }
    ctx->pc = 0x28F680u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x28F684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F680u;
        // 0x28f684: 0x4b  .word       0x0000004B                   # movn        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28F680u, 0x28F688u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x28F688u;
label_28f688:
    // 0x28f688: 0x4c  syscall     1
    ctx->pc = 0x28f688u;
    ctx->pc = 0x28F68Cu;
runtime->handleSyscall(rdram, ctx, 0x1u);
label_28f68c:
    // 0x28f68c: 0x4d  break       0, 1
    ctx->pc = 0x28f68cu;
    runtime->handleBreak(rdram, ctx);
label_28f690:
    // 0x28f690: 0x12  mflo        $zero
    ctx->pc = 0x28f690u;
    SET_GPR_U64(ctx, 0, ctx->lo);
label_28f694:
    // 0x28f694: 0x4e  .word       0x0000004E                   # INVALID     $zero, $zero, 0x4E # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28f694u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x28F694 raw=0x0000004E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28f698:
    // 0x28f698: 0x4f  sync
    ctx->pc = 0x28f698u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_28f69c:
    // 0x28f69c: 0x50  .word       0x00000050                   # mfhi        $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28f69cu;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_28f6a0:
    // 0x28f6a0: 0x13  mtlo        $zero
    ctx->pc = 0x28f6a0u;
    ctx->lo = GPR_U64(ctx, 0);
label_28f6a4:
    // 0x28f6a4: 0x51  .word       0x00000051                   # mthi        $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28f6a4u;
    ctx->hi = GPR_U64(ctx, 0);
label_28f6a8:
    // 0x28f6a8: 0x52  .word       0x00000052                   # mflo        $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28f6a8u;
    SET_GPR_U64(ctx, 0, ctx->lo);
label_28f6ac:
    // 0x28f6ac: 0x53  .word       0x00000053                   # mtlo        $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28f6acu;
    ctx->lo = GPR_U64(ctx, 0);
label_28f6b0:
    // 0x28f6b0: 0x1e  ddiv        $zero, $zero, $zero
    ctx->pc = 0x28f6b0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x28F6B0 raw=0x0000001E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28f6b4:
    // 0x28f6b4: 0x54  .word       0x00000054                   # dsllv       $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28f6b4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_28f6b8:
    // 0x28f6b8: 0x55  .word       0x00000055                   # INVALID     $zero, $zero, 0x55 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28f6b8u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x28F6B8 raw=0x00000055"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28f6bc:
    // 0x28f6bc: 0x56  .word       0x00000056                   # dsrlv       $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28f6bcu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_28f6c0:
    // 0x28f6c0: 0x1f  ddivu       $zero, $zero, $zero
    ctx->pc = 0x28f6c0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x28F6C0 raw=0x0000001F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28f6c4:
    // 0x28f6c4: 0x57  .word       0x00000057                   # dsrav       $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28f6c4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_28f6c8:
    // 0x28f6c8: 0x58  .word       0x00000058                   # mult        $zero, $zero, $zero # 00000040 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x28f6c8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_28f6cc:
    // 0x28f6cc: 0x59  .word       0x00000059                   # multu       $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28f6ccu;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_28f6d0:
    // 0x28f6d0: 0x23  negu        $zero, $zero
    ctx->pc = 0x28f6d0u;
    SET_GPR_S32(ctx, 0, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_28f6d4:
    // 0x28f6d4: 0x6f  .word       0x0000006F                   # dsubu       $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28f6d4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_28f6d8:
    // 0x28f6d8: 0x70  tge         $zero, $zero, 1
    ctx->pc = 0x28f6d8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_28f6dc:
    // 0x28f6dc: 0x71  tgeu        $zero, $zero, 1
    ctx->pc = 0x28f6dcu;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_28f6e0:
    // 0x28f6e0: 0x24  and         $zero, $zero, $zero
    ctx->pc = 0x28f6e0u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_28f6e4:
    // 0x28f6e4: 0x72  tlt         $zero, $zero, 1
    ctx->pc = 0x28f6e4u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_28f6e8:
    // 0x28f6e8: 0x73  tltu        $zero, $zero, 1
    ctx->pc = 0x28f6e8u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_28f6ec:
    // 0x28f6ec: 0x74  teq         $zero, $zero, 1
    ctx->pc = 0x28f6ecu;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_28f6f0:
    // 0x28f6f0: 0x14  dsllv       $zero, $zero, $zero
    ctx->pc = 0x28f6f0u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_28f6f4:
    // 0x28f6f4: 0x5a  .word       0x0000005A                   # div         $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28f6f4u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_28f6f8:
    // 0x28f6f8: 0x5b  .word       0x0000005B                   # divu        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28f6f8u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_28f6fc:
    // 0x28f6fc: 0x5c  .word       0x0000005C                   # dmult       $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28f6fcu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x28F6FC raw=0x0000005C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28f700:
    // 0x28f700: 0x15  .word       0x00000015                   # INVALID     $zero, $zero, 0x15 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28f700u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x28F700 raw=0x00000015"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28f704:
    // 0x28f704: 0x5d  .word       0x0000005D                   # dmultu      $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28f704u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x28F704 raw=0x0000005D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28f708:
    // 0x28f708: 0x5e  .word       0x0000005E                   # ddiv        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28f708u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x28F708 raw=0x0000005E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28f70c:
    // 0x28f70c: 0x5f  .word       0x0000005F                   # ddivu       $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28f70cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x28F70C raw=0x0000005F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28f710:
    // 0x28f710: 0x27  not         $zero, $zero
    ctx->pc = 0x28f710u;
    SET_GPR_U64(ctx, 0, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_28f714:
    // 0x28f714: 0x75  .word       0x00000075                   # INVALID     $zero, $zero, 0x75 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28f714u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x28F714 raw=0x00000075"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28f718:
    // 0x28f718: 0x76  tne         $zero, $zero, 1
    ctx->pc = 0x28f718u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_28f71c:
    // 0x28f71c: 0x76  tne         $zero, $zero, 1
    ctx->pc = 0x28f71cu;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_28f720:
    // 0x28f720: 0x28  mfsa        $zero
    ctx->pc = 0x28f720u;
    SET_GPR_U32(ctx, 0, ctx->sa);
label_28f724:
    // 0x28f724: 0x75  .word       0x00000075                   # INVALID     $zero, $zero, 0x75 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28f724u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x28F724 raw=0x00000075"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28f728:
    // 0x28f728: 0x76  tne         $zero, $zero, 1
    ctx->pc = 0x28f728u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_28f72c:
    // 0x28f72c: 0x76  tne         $zero, $zero, 1
    ctx->pc = 0x28f72cu;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_28f730:
    // 0x28f730: 0x0  nop
    ctx->pc = 0x28f730u;
    // NOP
label_28f734:
    // 0x28f734: 0x195  .word       0x00000195                   # INVALID     $zero, $zero, 0x195 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28f734u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x28F734 raw=0x00000195"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28f738:
    // 0x28f738: 0x0  nop
    ctx->pc = 0x28f738u;
    // NOP
label_28f73c:
    // 0x28f73c: 0x0  nop
    ctx->pc = 0x28f73cu;
    // NOP
label_28f740:
    // 0x28f740: 0x0  nop
    ctx->pc = 0x28f740u;
    // NOP
label_28f744:
    // 0x28f744: 0x0  nop
    ctx->pc = 0x28f744u;
    // NOP
label_28f748:
    // 0x28f748: 0x0  nop
    ctx->pc = 0x28f748u;
    // NOP
label_28f74c:
    // 0x28f74c: 0x0  nop
    ctx->pc = 0x28f74cu;
    // NOP
label_28f750:
    // 0x28f750: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28f750u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x28F750 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28f754:
    // 0x28f754: 0xe  .word       0x0000000E                   # INVALID     $zero, $zero, 0xE # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28f754u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x28F754 raw=0x0000000E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28f758:
    // 0x28f758: 0x195  .word       0x00000195                   # INVALID     $zero, $zero, 0x195 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28f758u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x28F758 raw=0x00000195"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28f75c:
    // 0x28f75c: 0x0  nop
    ctx->pc = 0x28f75cu;
    // NOP
label_28f760:
    // 0x28f760: 0x0  nop
    ctx->pc = 0x28f760u;
    // NOP
label_28f764:
    // 0x28f764: 0x0  nop
    ctx->pc = 0x28f764u;
    // NOP
label_28f768:
    // 0x28f768: 0x0  nop
    ctx->pc = 0x28f768u;
    // NOP
label_28f76c:
    // 0x28f76c: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28f76cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x28F76C raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28f770:
    // 0x28f770: 0xe  .word       0x0000000E                   # INVALID     $zero, $zero, 0xE # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28f770u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x28F770 raw=0x0000000E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28f774:
    // 0x28f774: 0x22  neg         $zero, $zero
    ctx->pc = 0x28f774u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 0, (int32_t)tmp); }
label_28f778:
    // 0x28f778: 0x194  .word       0x00000194                   # dsllv       $zero, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28f778u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_28f77c:
    // 0x28f77c: 0x195  .word       0x00000195                   # INVALID     $zero, $zero, 0x195 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28f77cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x28F77C raw=0x00000195"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28f780:
    // 0x28f780: 0x0  nop
    ctx->pc = 0x28f780u;
    // NOP
label_28f784:
    // 0x28f784: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28f784u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x28F784 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28f788:
    // 0x28f788: 0x195  .word       0x00000195                   # INVALID     $zero, $zero, 0x195 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28f788u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x28F788 raw=0x00000195"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28f78c:
    // 0x28f78c: 0x0  nop
    ctx->pc = 0x28f78cu;
    // NOP
label_28f790:
    // 0x28f790: 0x0  nop
    ctx->pc = 0x28f790u;
    // NOP
label_28f794:
    // 0x28f794: 0x0  nop
    ctx->pc = 0x28f794u;
    // NOP
label_28f798:
    // 0x28f798: 0x0  nop
    ctx->pc = 0x28f798u;
    // NOP
label_28f79c:
    // 0x28f79c: 0x0  nop
    ctx->pc = 0x28f79cu;
    // NOP
label_28f7a0:
    // 0x28f7a0: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28f7a0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x28F7A0 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28f7a4:
    // 0x28f7a4: 0xe  .word       0x0000000E                   # INVALID     $zero, $zero, 0xE # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28f7a4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x28F7A4 raw=0x0000000E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28f7a8:
    // 0x28f7a8: 0x195  .word       0x00000195                   # INVALID     $zero, $zero, 0x195 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28f7a8u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x28F7A8 raw=0x00000195"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28f7ac:
    // 0x28f7ac: 0x0  nop
    ctx->pc = 0x28f7acu;
    // NOP
label_28f7b0:
    // 0x28f7b0: 0x0  nop
    ctx->pc = 0x28f7b0u;
    // NOP
label_28f7b4:
    // 0x28f7b4: 0x0  nop
    ctx->pc = 0x28f7b4u;
    // NOP
label_28f7b8:
    // 0x28f7b8: 0x0  nop
    ctx->pc = 0x28f7b8u;
    // NOP
label_28f7bc:
    // 0x28f7bc: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28f7bcu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x28F7BC raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28f7c0:
    // 0x28f7c0: 0xe  .word       0x0000000E                   # INVALID     $zero, $zero, 0xE # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28f7c0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x28F7C0 raw=0x0000000E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28f7c4:
    // 0x28f7c4: 0x22  neg         $zero, $zero
    ctx->pc = 0x28f7c4u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 0, (int32_t)tmp); }
label_28f7c8:
    // 0x28f7c8: 0x194  .word       0x00000194                   # dsllv       $zero, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28f7c8u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_28f7cc:
    // 0x28f7cc: 0x195  .word       0x00000195                   # INVALID     $zero, $zero, 0x195 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28f7ccu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x28F7CC raw=0x00000195"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28f7d0:
    // 0x28f7d0: 0x0  nop
    ctx->pc = 0x28f7d0u;
    // NOP
label_28f7d4:
    // 0x28f7d4: 0x0  nop
    ctx->pc = 0x28f7d4u;
    // NOP
label_28f7d8:
    // 0x28f7d8: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x28f7d8u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_28f7dc:
    // 0x28f7dc: 0x195  .word       0x00000195                   # INVALID     $zero, $zero, 0x195 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28f7dcu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x28F7DC raw=0x00000195"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28f7e0:
    // 0x28f7e0: 0x0  nop
    ctx->pc = 0x28f7e0u;
    // NOP
label_28f7e4:
    // 0x28f7e4: 0x0  nop
    ctx->pc = 0x28f7e4u;
    // NOP
label_28f7e8:
    // 0x28f7e8: 0x0  nop
    ctx->pc = 0x28f7e8u;
    // NOP
label_28f7ec:
    // 0x28f7ec: 0x0  nop
    ctx->pc = 0x28f7ecu;
    // NOP
label_28f7f0:
    // 0x28f7f0: 0x0  nop
    ctx->pc = 0x28f7f0u;
    // NOP
label_28f7f4:
    // 0x28f7f4: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x28f7f4u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_28f7f8:
    // 0x28f7f8: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28f7f8u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x28F7F8 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28f7fc:
    // 0x28f7fc: 0xe  .word       0x0000000E                   # INVALID     $zero, $zero, 0xE # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28f7fcu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x28F7FC raw=0x0000000E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28f800:
    // 0x28f800: 0x195  .word       0x00000195                   # INVALID     $zero, $zero, 0x195 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28f800u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x28F800 raw=0x00000195"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28f804:
    // 0x28f804: 0x0  nop
    ctx->pc = 0x28f804u;
    // NOP
label_28f808:
    // 0x28f808: 0x0  nop
    ctx->pc = 0x28f808u;
    // NOP
label_28f80c:
    // 0x28f80c: 0x0  nop
    ctx->pc = 0x28f80cu;
    // NOP
label_28f810:
    // 0x28f810: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x28f810u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_28f814:
    // 0x28f814: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28f814u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x28F814 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28f818:
    // 0x28f818: 0xe  .word       0x0000000E                   # INVALID     $zero, $zero, 0xE # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28f818u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x28F818 raw=0x0000000E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28f81c:
    // 0x28f81c: 0x22  neg         $zero, $zero
    ctx->pc = 0x28f81cu;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 0, (int32_t)tmp); }
label_28f820:
    // 0x28f820: 0x194  .word       0x00000194                   # dsllv       $zero, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28f820u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_28f824:
    // 0x28f824: 0x195  .word       0x00000195                   # INVALID     $zero, $zero, 0x195 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28f824u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x28F824 raw=0x00000195"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28f828:
    // 0x28f828: 0x0  nop
    ctx->pc = 0x28f828u;
    // NOP
label_28f82c:
    // 0x28f82c: 0x3  sra         $zero, $zero, 0
    ctx->pc = 0x28f82cu;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 0));
label_28f830:
    // 0x28f830: 0x195  .word       0x00000195                   # INVALID     $zero, $zero, 0x195 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28f830u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x28F830 raw=0x00000195"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28f834:
    // 0x28f834: 0x0  nop
    ctx->pc = 0x28f834u;
    // NOP
label_28f838:
    // 0x28f838: 0x0  nop
    ctx->pc = 0x28f838u;
    // NOP
label_28f83c:
    // 0x28f83c: 0x0  nop
    ctx->pc = 0x28f83cu;
    // NOP
label_28f840:
    // 0x28f840: 0x0  nop
    ctx->pc = 0x28f840u;
    // NOP
label_28f844:
    // 0x28f844: 0x0  nop
    ctx->pc = 0x28f844u;
    // NOP
label_28f848:
    // 0x28f848: 0x3  sra         $zero, $zero, 0
    ctx->pc = 0x28f848u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 0));
label_28f84c:
    // 0x28f84c: 0xb  movn        $zero, $zero, $zero
    ctx->pc = 0x28f84cu;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_28f850:
    // 0x28f850: 0x15  .word       0x00000015                   # INVALID     $zero, $zero, 0x15 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28f850u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x28F850 raw=0x00000015"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28f854:
    // 0x28f854: 0x195  .word       0x00000195                   # INVALID     $zero, $zero, 0x195 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28f854u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x28F854 raw=0x00000195"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28f858:
    // 0x28f858: 0x0  nop
    ctx->pc = 0x28f858u;
    // NOP
label_28f85c:
    // 0x28f85c: 0x0  nop
    ctx->pc = 0x28f85cu;
    // NOP
label_28f860:
    // 0x28f860: 0x0  nop
    ctx->pc = 0x28f860u;
    // NOP
label_28f864:
    // 0x28f864: 0x3  sra         $zero, $zero, 0
    ctx->pc = 0x28f864u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 0));
label_28f868:
    // 0x28f868: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x28f868u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_28f86c:
    // 0x28f86c: 0xb  movn        $zero, $zero, $zero
    ctx->pc = 0x28f86cu;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_28f870:
    // 0x28f870: 0x15  .word       0x00000015                   # INVALID     $zero, $zero, 0x15 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28f870u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x28F870 raw=0x00000015"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28f874:
    // 0x28f874: 0x194  .word       0x00000194                   # dsllv       $zero, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28f874u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_28f878:
    // 0x28f878: 0x195  .word       0x00000195                   # INVALID     $zero, $zero, 0x195 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28f878u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x28F878 raw=0x00000195"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28f87c:
    // 0x28f87c: 0x0  nop
    ctx->pc = 0x28f87cu;
    // NOP
label_28f880:
    // 0x28f880: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x28f880u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_28f884:
    // 0x28f884: 0x195  .word       0x00000195                   # INVALID     $zero, $zero, 0x195 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28f884u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x28F884 raw=0x00000195"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28f888:
    // 0x28f888: 0x0  nop
    ctx->pc = 0x28f888u;
    // NOP
label_28f88c:
    // 0x28f88c: 0x0  nop
    ctx->pc = 0x28f88cu;
    // NOP
label_28f890:
    // 0x28f890: 0x0  nop
    ctx->pc = 0x28f890u;
    // NOP
label_28f894:
    // 0x28f894: 0x0  nop
    ctx->pc = 0x28f894u;
    // NOP
label_28f898:
    // 0x28f898: 0x0  nop
    ctx->pc = 0x28f898u;
    // NOP
label_28f89c:
    // 0x28f89c: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x28f89cu;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_28f8a0:
    // 0x28f8a0: 0xb  movn        $zero, $zero, $zero
    ctx->pc = 0x28f8a0u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_28f8a4:
    // 0x28f8a4: 0x15  .word       0x00000015                   # INVALID     $zero, $zero, 0x15 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28f8a4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x28F8A4 raw=0x00000015"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28f8a8:
    // 0x28f8a8: 0x195  .word       0x00000195                   # INVALID     $zero, $zero, 0x195 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28f8a8u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x28F8A8 raw=0x00000195"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28f8ac:
    // 0x28f8ac: 0x0  nop
    ctx->pc = 0x28f8acu;
    // NOP
label_28f8b0:
    // 0x28f8b0: 0x0  nop
    ctx->pc = 0x28f8b0u;
    // NOP
label_28f8b4:
    // 0x28f8b4: 0x0  nop
    ctx->pc = 0x28f8b4u;
    // NOP
label_28f8b8:
    // 0x28f8b8: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x28f8b8u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_28f8bc:
    // 0x28f8bc: 0xb  movn        $zero, $zero, $zero
    ctx->pc = 0x28f8bcu;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_28f8c0:
    // 0x28f8c0: 0x15  .word       0x00000015                   # INVALID     $zero, $zero, 0x15 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28f8c0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x28F8C0 raw=0x00000015"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28f8c4:
    // 0x28f8c4: 0x194  .word       0x00000194                   # dsllv       $zero, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28f8c4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_28f8c8:
    // 0x28f8c8: 0x195  .word       0x00000195                   # INVALID     $zero, $zero, 0x195 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28f8c8u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x28F8C8 raw=0x00000195"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28f8cc:
    // 0x28f8cc: 0x0  nop
    ctx->pc = 0x28f8ccu;
    // NOP
label_28f8d0:
    // 0x28f8d0: 0x0  nop
    ctx->pc = 0x28f8d0u;
    // NOP
label_28f8d4:
    // 0x28f8d4: 0x5  .word       0x00000005                   # INVALID     $zero, $zero, 0x5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28f8d4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x28F8D4 raw=0x00000005"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28f8d8:
    // 0x28f8d8: 0x195  .word       0x00000195                   # INVALID     $zero, $zero, 0x195 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28f8d8u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x28F8D8 raw=0x00000195"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28f8dc:
    // 0x28f8dc: 0x0  nop
    ctx->pc = 0x28f8dcu;
    // NOP
label_28f8e0:
    // 0x28f8e0: 0x0  nop
    ctx->pc = 0x28f8e0u;
    // NOP
label_28f8e4:
    // 0x28f8e4: 0x0  nop
    ctx->pc = 0x28f8e4u;
    // NOP
label_28f8e8:
    // 0x28f8e8: 0x0  nop
    ctx->pc = 0x28f8e8u;
    // NOP
label_28f8ec:
    // 0x28f8ec: 0x0  nop
    ctx->pc = 0x28f8ecu;
    // NOP
label_28f8f0:
    // 0x28f8f0: 0x5  .word       0x00000005                   # INVALID     $zero, $zero, 0x5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28f8f0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x28F8F0 raw=0x00000005"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28f8f4:
    // 0x28f8f4: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x28f8f4u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_28f8f8:
    // 0x28f8f8: 0x195  .word       0x00000195                   # INVALID     $zero, $zero, 0x195 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28f8f8u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x28F8F8 raw=0x00000195"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28f8fc:
    // 0x28f8fc: 0x0  nop
    ctx->pc = 0x28f8fcu;
    // NOP
label_28f900:
    // 0x28f900: 0x0  nop
    ctx->pc = 0x28f900u;
    // NOP
label_28f904:
    // 0x28f904: 0x0  nop
    ctx->pc = 0x28f904u;
    // NOP
label_28f908:
    // 0x28f908: 0x0  nop
    ctx->pc = 0x28f908u;
    // NOP
label_28f90c:
    // 0x28f90c: 0x5  .word       0x00000005                   # INVALID     $zero, $zero, 0x5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28f90cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x28F90C raw=0x00000005"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28f910:
    // 0x28f910: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x28f910u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_28f914:
    // 0x28f914: 0xb  movn        $zero, $zero, $zero
    ctx->pc = 0x28f914u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_28f918:
    // 0x28f918: 0x15  .word       0x00000015                   # INVALID     $zero, $zero, 0x15 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28f918u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x28F918 raw=0x00000015"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28f91c:
    // 0x28f91c: 0x194  .word       0x00000194                   # dsllv       $zero, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28f91cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_28f920:
    // 0x28f920: 0x195  .word       0x00000195                   # INVALID     $zero, $zero, 0x195 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28f920u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x28F920 raw=0x00000195"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28f924:
    // 0x28f924: 0x0  nop
    ctx->pc = 0x28f924u;
    // NOP
label_28f928:
    // 0x28f928: 0x6  srlv        $zero, $zero, $zero
    ctx->pc = 0x28f928u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_28f92c:
    // 0x28f92c: 0x195  .word       0x00000195                   # INVALID     $zero, $zero, 0x195 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28f92cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x28F92C raw=0x00000195"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28f930:
    // 0x28f930: 0x0  nop
    ctx->pc = 0x28f930u;
    // NOP
label_28f934:
    // 0x28f934: 0x0  nop
    ctx->pc = 0x28f934u;
    // NOP
label_28f938:
    // 0x28f938: 0x0  nop
    ctx->pc = 0x28f938u;
    // NOP
label_28f93c:
    // 0x28f93c: 0x0  nop
    ctx->pc = 0x28f93cu;
    // NOP
label_28f940:
    // 0x28f940: 0x0  nop
    ctx->pc = 0x28f940u;
    // NOP
label_28f944:
    // 0x28f944: 0x6  srlv        $zero, $zero, $zero
    ctx->pc = 0x28f944u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_28f948:
    // 0x28f948: 0x20  add         $zero, $zero, $zero
    ctx->pc = 0x28f948u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_28f94c:
    // 0x28f94c: 0x195  .word       0x00000195                   # INVALID     $zero, $zero, 0x195 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28f94cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x28F94C raw=0x00000195"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28f950:
    // 0x28f950: 0x0  nop
    ctx->pc = 0x28f950u;
    // NOP
label_28f954:
    // 0x28f954: 0x0  nop
    ctx->pc = 0x28f954u;
    // NOP
label_28f958:
    // 0x28f958: 0x0  nop
    ctx->pc = 0x28f958u;
    // NOP
label_28f95c:
    // 0x28f95c: 0x0  nop
    ctx->pc = 0x28f95cu;
    // NOP
label_28f960:
    // 0x28f960: 0x6  srlv        $zero, $zero, $zero
    ctx->pc = 0x28f960u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_28f964:
    // 0x28f964: 0x8  jr          $zero
label_28f968:
    if (ctx->pc == 0x28F968u) {
        ctx->pc = 0x28F968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F964u;
        // 0x28f968: 0xf  sync (Delay Slot)
        // SYNC instruction - memory barrier
        // In recompiled code, we don't need explicit memory barriers
        ctx->in_delay_slot = false;
        ctx->pc = 0x28F96Cu;
        goto label_28f96c;
    }
    ctx->pc = 0x28F964u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x28F968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F964u;
        // 0x28f968: 0xf  sync (Delay Slot)
        // SYNC instruction - memory barrier
        // In recompiled code, we don't need explicit memory barriers
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28F964u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x28F96Cu;
label_28f96c:
    // 0x28f96c: 0x20  add         $zero, $zero, $zero
    ctx->pc = 0x28f96cu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_28f970:
    // 0x28f970: 0x194  .word       0x00000194                   # dsllv       $zero, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28f970u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_28f974:
    // 0x28f974: 0x195  .word       0x00000195                   # INVALID     $zero, $zero, 0x195 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28f974u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x28F974 raw=0x00000195"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28f978:
    // 0x28f978: 0x0  nop
    ctx->pc = 0x28f978u;
    // NOP
label_28f97c:
    // 0x28f97c: 0x7  srav        $zero, $zero, $zero
    ctx->pc = 0x28f97cu;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_28f980:
    // 0x28f980: 0x195  .word       0x00000195                   # INVALID     $zero, $zero, 0x195 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28f980u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x28F980 raw=0x00000195"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28f984:
    // 0x28f984: 0x0  nop
    ctx->pc = 0x28f984u;
    // NOP
label_28f988:
    // 0x28f988: 0x0  nop
    ctx->pc = 0x28f988u;
    // NOP
label_28f98c:
    // 0x28f98c: 0x0  nop
    ctx->pc = 0x28f98cu;
    // NOP
label_28f990:
    // 0x28f990: 0x0  nop
    ctx->pc = 0x28f990u;
    // NOP
label_28f994:
    // 0x28f994: 0x0  nop
    ctx->pc = 0x28f994u;
    // NOP
label_28f998:
    // 0x28f998: 0x7  srav        $zero, $zero, $zero
    ctx->pc = 0x28f998u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_28f99c:
    // 0x28f99c: 0x6  srlv        $zero, $zero, $zero
    ctx->pc = 0x28f99cu;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_28f9a0:
    // 0x28f9a0: 0x195  .word       0x00000195                   # INVALID     $zero, $zero, 0x195 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28f9a0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x28F9A0 raw=0x00000195"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28f9a4:
    // 0x28f9a4: 0x0  nop
    ctx->pc = 0x28f9a4u;
    // NOP
label_28f9a8:
    // 0x28f9a8: 0x0  nop
    ctx->pc = 0x28f9a8u;
    // NOP
label_28f9ac:
    // 0x28f9ac: 0x0  nop
    ctx->pc = 0x28f9acu;
    // NOP
label_28f9b0:
    // 0x28f9b0: 0x0  nop
    ctx->pc = 0x28f9b0u;
    // NOP
label_28f9b4:
    // 0x28f9b4: 0x7  srav        $zero, $zero, $zero
    ctx->pc = 0x28f9b4u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_28f9b8:
    // 0x28f9b8: 0x6  srlv        $zero, $zero, $zero
    ctx->pc = 0x28f9b8u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_28f9bc:
    // 0x28f9bc: 0x8  jr          $zero
label_28f9c0:
    if (ctx->pc == 0x28F9C0u) {
        ctx->pc = 0x28F9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F9BCu;
        // 0x28f9c0: 0xf  sync (Delay Slot)
        // SYNC instruction - memory barrier
        // In recompiled code, we don't need explicit memory barriers
        ctx->in_delay_slot = false;
        ctx->pc = 0x28F9C4u;
        goto label_28f9c4;
    }
    ctx->pc = 0x28F9BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x28F9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F9BCu;
        // 0x28f9c0: 0xf  sync (Delay Slot)
        // SYNC instruction - memory barrier
        // In recompiled code, we don't need explicit memory barriers
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28F9BCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x28F9C4u;
label_28f9c4:
    // 0x28f9c4: 0x20  add         $zero, $zero, $zero
    ctx->pc = 0x28f9c4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_28f9c8:
    // 0x28f9c8: 0x194  .word       0x00000194                   # dsllv       $zero, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28f9c8u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_28f9cc:
    // 0x28f9cc: 0x195  .word       0x00000195                   # INVALID     $zero, $zero, 0x195 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28f9ccu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x28F9CC raw=0x00000195"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28f9d0:
    // 0x28f9d0: 0x8  jr          $zero
label_28f9d4:
    if (ctx->pc == 0x28F9D4u) {
        ctx->pc = 0x28F9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F9D0u;
        // 0x28f9d4: 0x195  .word       0x00000195                   # INVALID     $zero, $zero, 0x195 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x28F9D4 raw=0x00000195"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x28F9D8u;
        goto label_28f9d8;
    }
    ctx->pc = 0x28F9D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x28F9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F9D0u;
        // 0x28f9d4: 0x195  .word       0x00000195                   # INVALID     $zero, $zero, 0x195 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x28F9D4 raw=0x00000195"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28F9D0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x28F9D8u;
label_28f9d8:
    // 0x28f9d8: 0x0  nop
    ctx->pc = 0x28f9d8u;
    // NOP
label_28f9dc:
    // 0x28f9dc: 0x0  nop
    ctx->pc = 0x28f9dcu;
    // NOP
label_28f9e0:
    // 0x28f9e0: 0x0  nop
    ctx->pc = 0x28f9e0u;
    // NOP
label_28f9e4:
    // 0x28f9e4: 0x0  nop
    ctx->pc = 0x28f9e4u;
    // NOP
label_28f9e8:
    // 0x28f9e8: 0x0  nop
    ctx->pc = 0x28f9e8u;
    // NOP
label_28f9ec:
    // 0x28f9ec: 0x8  jr          $zero
label_28f9f0:
    if (ctx->pc == 0x28F9F0u) {
        ctx->pc = 0x28F9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F9ECu;
        // 0x28f9f0: 0x6  srlv        $zero, $zero, $zero (Delay Slot)
        SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28F9F4u;
        goto label_28f9f4;
    }
    ctx->pc = 0x28F9ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x28F9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F9ECu;
        // 0x28f9f0: 0x6  srlv        $zero, $zero, $zero (Delay Slot)
        SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28F9ECu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x28F9F4u;
label_28f9f4:
    // 0x28f9f4: 0x20  add         $zero, $zero, $zero
    ctx->pc = 0x28f9f4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_28f9f8:
    // 0x28f9f8: 0x195  .word       0x00000195                   # INVALID     $zero, $zero, 0x195 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28f9f8u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x28F9F8 raw=0x00000195"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28f9fc:
    // 0x28f9fc: 0x0  nop
    ctx->pc = 0x28f9fcu;
    // NOP
label_28fa00:
    // 0x28fa00: 0x0  nop
    ctx->pc = 0x28fa00u;
    // NOP
label_28fa04:
    // 0x28fa04: 0x0  nop
    ctx->pc = 0x28fa04u;
    // NOP
label_28fa08:
    // 0x28fa08: 0x8  jr          $zero
label_28fa0c:
    if (ctx->pc == 0x28FA0Cu) {
        ctx->pc = 0x28FA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FA08u;
        // 0x28fa0c: 0x6  srlv        $zero, $zero, $zero (Delay Slot)
        SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28FA10u;
        goto label_28fa10;
    }
    ctx->pc = 0x28FA08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x28FA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FA08u;
        // 0x28fa0c: 0x6  srlv        $zero, $zero, $zero (Delay Slot)
        SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28FA08u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x28FA10u;
label_28fa10:
    // 0x28fa10: 0xf  sync
    ctx->pc = 0x28fa10u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_28fa14:
    // 0x28fa14: 0x20  add         $zero, $zero, $zero
    ctx->pc = 0x28fa14u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_28fa18:
    // 0x28fa18: 0x194  .word       0x00000194                   # dsllv       $zero, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28fa18u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_28fa1c:
    // 0x28fa1c: 0x195  .word       0x00000195                   # INVALID     $zero, $zero, 0x195 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28fa1cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x28FA1C raw=0x00000195"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28fa20:
    // 0x28fa20: 0x0  nop
    ctx->pc = 0x28fa20u;
    // NOP
label_28fa24:
    // 0x28fa24: 0xa  movz        $zero, $zero, $zero
    ctx->pc = 0x28fa24u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_28fa28:
    // 0x28fa28: 0x195  .word       0x00000195                   # INVALID     $zero, $zero, 0x195 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28fa28u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x28FA28 raw=0x00000195"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28fa2c:
    // 0x28fa2c: 0x0  nop
    ctx->pc = 0x28fa2cu;
    // NOP
label_28fa30:
    // 0x28fa30: 0x0  nop
    ctx->pc = 0x28fa30u;
    // NOP
label_28fa34:
    // 0x28fa34: 0x0  nop
    ctx->pc = 0x28fa34u;
    // NOP
label_28fa38:
    // 0x28fa38: 0x0  nop
    ctx->pc = 0x28fa38u;
    // NOP
label_28fa3c:
    // 0x28fa3c: 0x0  nop
    ctx->pc = 0x28fa3cu;
    // NOP
label_28fa40:
    // 0x28fa40: 0xa  movz        $zero, $zero, $zero
    ctx->pc = 0x28fa40u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_28fa44:
    // 0x28fa44: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28fa44u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x28FA44 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28fa48:
    // 0x28fa48: 0xe  .word       0x0000000E                   # INVALID     $zero, $zero, 0xE # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28fa48u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x28FA48 raw=0x0000000E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28fa4c:
    // 0x28fa4c: 0x195  .word       0x00000195                   # INVALID     $zero, $zero, 0x195 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28fa4cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x28FA4C raw=0x00000195"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28fa50:
    // 0x28fa50: 0x0  nop
    ctx->pc = 0x28fa50u;
    // NOP
label_28fa54:
    // 0x28fa54: 0x0  nop
    ctx->pc = 0x28fa54u;
    // NOP
label_28fa58:
    // 0x28fa58: 0x0  nop
    ctx->pc = 0x28fa58u;
    // NOP
label_28fa5c:
    // 0x28fa5c: 0xa  movz        $zero, $zero, $zero
    ctx->pc = 0x28fa5cu;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_28fa60:
    // 0x28fa60: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28fa60u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x28FA60 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28fa64:
    // 0x28fa64: 0xe  .word       0x0000000E                   # INVALID     $zero, $zero, 0xE # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28fa64u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x28FA64 raw=0x0000000E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28fa68:
    // 0x28fa68: 0x22  neg         $zero, $zero
    ctx->pc = 0x28fa68u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 0, (int32_t)tmp); }
label_28fa6c:
    // 0x28fa6c: 0x194  .word       0x00000194                   # dsllv       $zero, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28fa6cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_28fa70:
    // 0x28fa70: 0x195  .word       0x00000195                   # INVALID     $zero, $zero, 0x195 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28fa70u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x28FA70 raw=0x00000195"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28fa74:
    // 0x28fa74: 0x0  nop
    ctx->pc = 0x28fa74u;
    // NOP
label_28fa78:
    // 0x28fa78: 0xb  movn        $zero, $zero, $zero
    ctx->pc = 0x28fa78u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_28fa7c:
    // 0x28fa7c: 0x195  .word       0x00000195                   # INVALID     $zero, $zero, 0x195 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28fa7cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x28FA7C raw=0x00000195"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28fa80:
    // 0x28fa80: 0x0  nop
    ctx->pc = 0x28fa80u;
    // NOP
label_28fa84:
    // 0x28fa84: 0x0  nop
    ctx->pc = 0x28fa84u;
    // NOP
label_28fa88:
    // 0x28fa88: 0x0  nop
    ctx->pc = 0x28fa88u;
    // NOP
label_28fa8c:
    // 0x28fa8c: 0x0  nop
    ctx->pc = 0x28fa8cu;
    // NOP
label_28fa90:
    // 0x28fa90: 0x0  nop
    ctx->pc = 0x28fa90u;
    // NOP
label_28fa94:
    // 0x28fa94: 0xb  movn        $zero, $zero, $zero
    ctx->pc = 0x28fa94u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_28fa98:
    // 0x28fa98: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x28fa98u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_28fa9c:
    // 0x28fa9c: 0x15  .word       0x00000015                   # INVALID     $zero, $zero, 0x15 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28fa9cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x28FA9C raw=0x00000015"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28faa0:
    // 0x28faa0: 0x195  .word       0x00000195                   # INVALID     $zero, $zero, 0x195 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28faa0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x28FAA0 raw=0x00000195"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28faa4:
    // 0x28faa4: 0x0  nop
    ctx->pc = 0x28faa4u;
    // NOP
label_28faa8:
    // 0x28faa8: 0x0  nop
    ctx->pc = 0x28faa8u;
    // NOP
label_28faac:
    // 0x28faac: 0x0  nop
    ctx->pc = 0x28faacu;
    // NOP
label_28fab0:
    // 0x28fab0: 0xb  movn        $zero, $zero, $zero
    ctx->pc = 0x28fab0u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_28fab4:
    // 0x28fab4: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x28fab4u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_28fab8:
    // 0x28fab8: 0xb  movn        $zero, $zero, $zero
    ctx->pc = 0x28fab8u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_28fabc:
    // 0x28fabc: 0x15  .word       0x00000015                   # INVALID     $zero, $zero, 0x15 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28fabcu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x28FABC raw=0x00000015"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28fac0:
    // 0x28fac0: 0x194  .word       0x00000194                   # dsllv       $zero, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28fac0u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_28fac4:
    // 0x28fac4: 0x195  .word       0x00000195                   # INVALID     $zero, $zero, 0x195 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28fac4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x28FAC4 raw=0x00000195"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28fac8:
    // 0x28fac8: 0x0  nop
    ctx->pc = 0x28fac8u;
    // NOP
label_28facc:
    // 0x28facc: 0xd  break       0
    ctx->pc = 0x28faccu;
    runtime->handleBreak(rdram, ctx);
label_28fad0:
    // 0x28fad0: 0x195  .word       0x00000195                   # INVALID     $zero, $zero, 0x195 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28fad0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x28FAD0 raw=0x00000195"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28fad4:
    // 0x28fad4: 0x0  nop
    ctx->pc = 0x28fad4u;
    // NOP
label_28fad8:
    // 0x28fad8: 0x0  nop
    ctx->pc = 0x28fad8u;
    // NOP
label_28fadc:
    // 0x28fadc: 0x0  nop
    ctx->pc = 0x28fadcu;
    // NOP
label_28fae0:
    // 0x28fae0: 0x0  nop
    ctx->pc = 0x28fae0u;
    // NOP
label_28fae4:
    // 0x28fae4: 0x0  nop
    ctx->pc = 0x28fae4u;
    // NOP
label_28fae8:
    // 0x28fae8: 0xd  break       0
    ctx->pc = 0x28fae8u;
    runtime->handleBreak(rdram, ctx);
label_28faec:
    // 0x28faec: 0x6  srlv        $zero, $zero, $zero
    ctx->pc = 0x28faecu;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_28faf0:
    // 0x28faf0: 0x20  add         $zero, $zero, $zero
    ctx->pc = 0x28faf0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_28faf4:
    // 0x28faf4: 0x195  .word       0x00000195                   # INVALID     $zero, $zero, 0x195 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28faf4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x28FAF4 raw=0x00000195"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28faf8:
    // 0x28faf8: 0x0  nop
    ctx->pc = 0x28faf8u;
    // NOP
label_28fafc:
    // 0x28fafc: 0x0  nop
    ctx->pc = 0x28fafcu;
    // NOP
label_28fb00:
    // 0x28fb00: 0x0  nop
    ctx->pc = 0x28fb00u;
    // NOP
label_28fb04:
    // 0x28fb04: 0xd  break       0
    ctx->pc = 0x28fb04u;
    runtime->handleBreak(rdram, ctx);
label_28fb08:
    // 0x28fb08: 0x6  srlv        $zero, $zero, $zero
    ctx->pc = 0x28fb08u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_28fb0c:
    // 0x28fb0c: 0x8  jr          $zero
    ctx->pc = 0x28fb10u;
    return;
}
