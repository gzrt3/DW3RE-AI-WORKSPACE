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


void FUN_0019b5e8_part271(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x21f348u: goto label_21f348;
        case 0x21f34cu: goto label_21f34c;
        case 0x21f350u: goto label_21f350;
        case 0x21f354u: goto label_21f354;
        case 0x21f358u: goto label_21f358;
        case 0x21f35cu: goto label_21f35c;
        case 0x21f360u: goto label_21f360;
        case 0x21f364u: goto label_21f364;
        case 0x21f368u: goto label_21f368;
        case 0x21f36cu: goto label_21f36c;
        case 0x21f370u: goto label_21f370;
        case 0x21f374u: goto label_21f374;
        case 0x21f378u: goto label_21f378;
        case 0x21f37cu: goto label_21f37c;
        case 0x21f380u: goto label_21f380;
        case 0x21f384u: goto label_21f384;
        case 0x21f388u: goto label_21f388;
        case 0x21f38cu: goto label_21f38c;
        case 0x21f390u: goto label_21f390;
        case 0x21f394u: goto label_21f394;
        case 0x21f398u: goto label_21f398;
        case 0x21f39cu: goto label_21f39c;
        case 0x21f3a0u: goto label_21f3a0;
        case 0x21f3a4u: goto label_21f3a4;
        case 0x21f3a8u: goto label_21f3a8;
        case 0x21f3acu: goto label_21f3ac;
        case 0x21f3b0u: goto label_21f3b0;
        case 0x21f3b4u: goto label_21f3b4;
        case 0x21f3b8u: goto label_21f3b8;
        case 0x21f3bcu: goto label_21f3bc;
        case 0x21f3c0u: goto label_21f3c0;
        case 0x21f3c4u: goto label_21f3c4;
        case 0x21f3c8u: goto label_21f3c8;
        case 0x21f3ccu: goto label_21f3cc;
        case 0x21f3d0u: goto label_21f3d0;
        case 0x21f3d4u: goto label_21f3d4;
        case 0x21f3d8u: goto label_21f3d8;
        case 0x21f3dcu: goto label_21f3dc;
        case 0x21f3e0u: goto label_21f3e0;
        case 0x21f3e4u: goto label_21f3e4;
        case 0x21f3e8u: goto label_21f3e8;
        case 0x21f3ecu: goto label_21f3ec;
        case 0x21f3f0u: goto label_21f3f0;
        case 0x21f3f4u: goto label_21f3f4;
        case 0x21f3f8u: goto label_21f3f8;
        case 0x21f3fcu: goto label_21f3fc;
        case 0x21f400u: goto label_21f400;
        case 0x21f404u: goto label_21f404;
        case 0x21f408u: goto label_21f408;
        case 0x21f40cu: goto label_21f40c;
        case 0x21f410u: goto label_21f410;
        case 0x21f414u: goto label_21f414;
        case 0x21f418u: goto label_21f418;
        case 0x21f41cu: goto label_21f41c;
        case 0x21f420u: goto label_21f420;
        case 0x21f424u: goto label_21f424;
        case 0x21f428u: goto label_21f428;
        case 0x21f42cu: goto label_21f42c;
        case 0x21f430u: goto label_21f430;
        case 0x21f434u: goto label_21f434;
        case 0x21f438u: goto label_21f438;
        case 0x21f43cu: goto label_21f43c;
        case 0x21f440u: goto label_21f440;
        case 0x21f444u: goto label_21f444;
        case 0x21f448u: goto label_21f448;
        case 0x21f44cu: goto label_21f44c;
        case 0x21f450u: goto label_21f450;
        case 0x21f454u: goto label_21f454;
        case 0x21f458u: goto label_21f458;
        case 0x21f45cu: goto label_21f45c;
        case 0x21f460u: goto label_21f460;
        case 0x21f464u: goto label_21f464;
        case 0x21f468u: goto label_21f468;
        case 0x21f46cu: goto label_21f46c;
        case 0x21f470u: goto label_21f470;
        case 0x21f474u: goto label_21f474;
        case 0x21f478u: goto label_21f478;
        case 0x21f47cu: goto label_21f47c;
        case 0x21f480u: goto label_21f480;
        case 0x21f484u: goto label_21f484;
        case 0x21f488u: goto label_21f488;
        case 0x21f48cu: goto label_21f48c;
        case 0x21f490u: goto label_21f490;
        case 0x21f494u: goto label_21f494;
        case 0x21f498u: goto label_21f498;
        case 0x21f49cu: goto label_21f49c;
        case 0x21f4a0u: goto label_21f4a0;
        case 0x21f4a4u: goto label_21f4a4;
        case 0x21f4a8u: goto label_21f4a8;
        case 0x21f4acu: goto label_21f4ac;
        case 0x21f4b0u: goto label_21f4b0;
        case 0x21f4b4u: goto label_21f4b4;
        case 0x21f4b8u: goto label_21f4b8;
        case 0x21f4bcu: goto label_21f4bc;
        case 0x21f4c0u: goto label_21f4c0;
        case 0x21f4c4u: goto label_21f4c4;
        case 0x21f4c8u: goto label_21f4c8;
        case 0x21f4ccu: goto label_21f4cc;
        case 0x21f4d0u: goto label_21f4d0;
        case 0x21f4d4u: goto label_21f4d4;
        case 0x21f4d8u: goto label_21f4d8;
        case 0x21f4dcu: goto label_21f4dc;
        case 0x21f4e0u: goto label_21f4e0;
        case 0x21f4e4u: goto label_21f4e4;
        case 0x21f4e8u: goto label_21f4e8;
        case 0x21f4ecu: goto label_21f4ec;
        case 0x21f4f0u: goto label_21f4f0;
        case 0x21f4f4u: goto label_21f4f4;
        case 0x21f4f8u: goto label_21f4f8;
        case 0x21f4fcu: goto label_21f4fc;
        case 0x21f500u: goto label_21f500;
        case 0x21f504u: goto label_21f504;
        case 0x21f508u: goto label_21f508;
        case 0x21f50cu: goto label_21f50c;
        case 0x21f510u: goto label_21f510;
        case 0x21f514u: goto label_21f514;
        case 0x21f518u: goto label_21f518;
        case 0x21f51cu: goto label_21f51c;
        case 0x21f520u: goto label_21f520;
        case 0x21f524u: goto label_21f524;
        case 0x21f528u: goto label_21f528;
        case 0x21f52cu: goto label_21f52c;
        case 0x21f530u: goto label_21f530;
        case 0x21f534u: goto label_21f534;
        case 0x21f538u: goto label_21f538;
        case 0x21f53cu: goto label_21f53c;
        case 0x21f540u: goto label_21f540;
        case 0x21f544u: goto label_21f544;
        case 0x21f548u: goto label_21f548;
        case 0x21f54cu: goto label_21f54c;
        case 0x21f550u: goto label_21f550;
        case 0x21f554u: goto label_21f554;
        case 0x21f558u: goto label_21f558;
        case 0x21f55cu: goto label_21f55c;
        case 0x21f560u: goto label_21f560;
        case 0x21f564u: goto label_21f564;
        case 0x21f568u: goto label_21f568;
        case 0x21f56cu: goto label_21f56c;
        case 0x21f570u: goto label_21f570;
        case 0x21f574u: goto label_21f574;
        case 0x21f578u: goto label_21f578;
        case 0x21f57cu: goto label_21f57c;
        case 0x21f580u: goto label_21f580;
        case 0x21f584u: goto label_21f584;
        case 0x21f588u: goto label_21f588;
        case 0x21f58cu: goto label_21f58c;
        case 0x21f590u: goto label_21f590;
        case 0x21f594u: goto label_21f594;
        case 0x21f598u: goto label_21f598;
        case 0x21f59cu: goto label_21f59c;
        case 0x21f5a0u: goto label_21f5a0;
        case 0x21f5a4u: goto label_21f5a4;
        case 0x21f5a8u: goto label_21f5a8;
        case 0x21f5acu: goto label_21f5ac;
        case 0x21f5b0u: goto label_21f5b0;
        case 0x21f5b4u: goto label_21f5b4;
        case 0x21f5b8u: goto label_21f5b8;
        case 0x21f5bcu: goto label_21f5bc;
        case 0x21f5c0u: goto label_21f5c0;
        case 0x21f5c4u: goto label_21f5c4;
        case 0x21f5c8u: goto label_21f5c8;
        case 0x21f5ccu: goto label_21f5cc;
        case 0x21f5d0u: goto label_21f5d0;
        case 0x21f5d4u: goto label_21f5d4;
        case 0x21f5d8u: goto label_21f5d8;
        case 0x21f5dcu: goto label_21f5dc;
        case 0x21f5e0u: goto label_21f5e0;
        case 0x21f5e4u: goto label_21f5e4;
        case 0x21f5e8u: goto label_21f5e8;
        case 0x21f5ecu: goto label_21f5ec;
        case 0x21f5f0u: goto label_21f5f0;
        case 0x21f5f4u: goto label_21f5f4;
        case 0x21f5f8u: goto label_21f5f8;
        case 0x21f5fcu: goto label_21f5fc;
        case 0x21f600u: goto label_21f600;
        case 0x21f604u: goto label_21f604;
        case 0x21f608u: goto label_21f608;
        case 0x21f60cu: goto label_21f60c;
        case 0x21f610u: goto label_21f610;
        case 0x21f614u: goto label_21f614;
        case 0x21f618u: goto label_21f618;
        case 0x21f61cu: goto label_21f61c;
        case 0x21f620u: goto label_21f620;
        case 0x21f624u: goto label_21f624;
        case 0x21f628u: goto label_21f628;
        case 0x21f62cu: goto label_21f62c;
        case 0x21f630u: goto label_21f630;
        case 0x21f634u: goto label_21f634;
        case 0x21f638u: goto label_21f638;
        case 0x21f63cu: goto label_21f63c;
        case 0x21f640u: goto label_21f640;
        case 0x21f644u: goto label_21f644;
        case 0x21f648u: goto label_21f648;
        case 0x21f64cu: goto label_21f64c;
        case 0x21f650u: goto label_21f650;
        case 0x21f654u: goto label_21f654;
        case 0x21f658u: goto label_21f658;
        case 0x21f65cu: goto label_21f65c;
        case 0x21f660u: goto label_21f660;
        case 0x21f664u: goto label_21f664;
        case 0x21f668u: goto label_21f668;
        case 0x21f66cu: goto label_21f66c;
        case 0x21f670u: goto label_21f670;
        case 0x21f674u: goto label_21f674;
        case 0x21f678u: goto label_21f678;
        case 0x21f67cu: goto label_21f67c;
        case 0x21f680u: goto label_21f680;
        case 0x21f684u: goto label_21f684;
        case 0x21f688u: goto label_21f688;
        case 0x21f68cu: goto label_21f68c;
        case 0x21f690u: goto label_21f690;
        case 0x21f694u: goto label_21f694;
        case 0x21f698u: goto label_21f698;
        case 0x21f69cu: goto label_21f69c;
        case 0x21f6a0u: goto label_21f6a0;
        case 0x21f6a4u: goto label_21f6a4;
        case 0x21f6a8u: goto label_21f6a8;
        case 0x21f6acu: goto label_21f6ac;
        case 0x21f6b0u: goto label_21f6b0;
        case 0x21f6b4u: goto label_21f6b4;
        case 0x21f6b8u: goto label_21f6b8;
        case 0x21f6bcu: goto label_21f6bc;
        case 0x21f6c0u: goto label_21f6c0;
        case 0x21f6c4u: goto label_21f6c4;
        case 0x21f6c8u: goto label_21f6c8;
        case 0x21f6ccu: goto label_21f6cc;
        case 0x21f6d0u: goto label_21f6d0;
        case 0x21f6d4u: goto label_21f6d4;
        case 0x21f6d8u: goto label_21f6d8;
        case 0x21f6dcu: goto label_21f6dc;
        case 0x21f6e0u: goto label_21f6e0;
        case 0x21f6e4u: goto label_21f6e4;
        case 0x21f6e8u: goto label_21f6e8;
        case 0x21f6ecu: goto label_21f6ec;
        case 0x21f6f0u: goto label_21f6f0;
        case 0x21f6f4u: goto label_21f6f4;
        case 0x21f6f8u: goto label_21f6f8;
        case 0x21f6fcu: goto label_21f6fc;
        case 0x21f700u: goto label_21f700;
        case 0x21f704u: goto label_21f704;
        case 0x21f708u: goto label_21f708;
        case 0x21f70cu: goto label_21f70c;
        case 0x21f710u: goto label_21f710;
        case 0x21f714u: goto label_21f714;
        case 0x21f718u: goto label_21f718;
        case 0x21f71cu: goto label_21f71c;
        case 0x21f720u: goto label_21f720;
        case 0x21f724u: goto label_21f724;
        case 0x21f728u: goto label_21f728;
        case 0x21f72cu: goto label_21f72c;
        case 0x21f730u: goto label_21f730;
        case 0x21f734u: goto label_21f734;
        case 0x21f738u: goto label_21f738;
        case 0x21f73cu: goto label_21f73c;
        case 0x21f740u: goto label_21f740;
        case 0x21f744u: goto label_21f744;
        case 0x21f748u: goto label_21f748;
        case 0x21f74cu: goto label_21f74c;
        case 0x21f750u: goto label_21f750;
        case 0x21f754u: goto label_21f754;
        case 0x21f758u: goto label_21f758;
        case 0x21f75cu: goto label_21f75c;
        case 0x21f760u: goto label_21f760;
        case 0x21f764u: goto label_21f764;
        case 0x21f768u: goto label_21f768;
        case 0x21f76cu: goto label_21f76c;
        case 0x21f770u: goto label_21f770;
        case 0x21f774u: goto label_21f774;
        case 0x21f778u: goto label_21f778;
        case 0x21f77cu: goto label_21f77c;
        case 0x21f780u: goto label_21f780;
        case 0x21f784u: goto label_21f784;
        case 0x21f788u: goto label_21f788;
        case 0x21f78cu: goto label_21f78c;
        case 0x21f790u: goto label_21f790;
        case 0x21f794u: goto label_21f794;
        case 0x21f798u: goto label_21f798;
        case 0x21f79cu: goto label_21f79c;
        case 0x21f7a0u: goto label_21f7a0;
        case 0x21f7a4u: goto label_21f7a4;
        case 0x21f7a8u: goto label_21f7a8;
        case 0x21f7acu: goto label_21f7ac;
        case 0x21f7b0u: goto label_21f7b0;
        case 0x21f7b4u: goto label_21f7b4;
        case 0x21f7b8u: goto label_21f7b8;
        case 0x21f7bcu: goto label_21f7bc;
        case 0x21f7c0u: goto label_21f7c0;
        case 0x21f7c4u: goto label_21f7c4;
        case 0x21f7c8u: goto label_21f7c8;
        case 0x21f7ccu: goto label_21f7cc;
        case 0x21f7d0u: goto label_21f7d0;
        case 0x21f7d4u: goto label_21f7d4;
        case 0x21f7d8u: goto label_21f7d8;
        case 0x21f7dcu: goto label_21f7dc;
        case 0x21f7e0u: goto label_21f7e0;
        case 0x21f7e4u: goto label_21f7e4;
        case 0x21f7e8u: goto label_21f7e8;
        case 0x21f7ecu: goto label_21f7ec;
        case 0x21f7f0u: goto label_21f7f0;
        case 0x21f7f4u: goto label_21f7f4;
        case 0x21f7f8u: goto label_21f7f8;
        case 0x21f7fcu: goto label_21f7fc;
        case 0x21f800u: goto label_21f800;
        case 0x21f804u: goto label_21f804;
        case 0x21f808u: goto label_21f808;
        case 0x21f80cu: goto label_21f80c;
        case 0x21f810u: goto label_21f810;
        case 0x21f814u: goto label_21f814;
        case 0x21f818u: goto label_21f818;
        case 0x21f81cu: goto label_21f81c;
        case 0x21f820u: goto label_21f820;
        case 0x21f824u: goto label_21f824;
        case 0x21f828u: goto label_21f828;
        case 0x21f82cu: goto label_21f82c;
        case 0x21f830u: goto label_21f830;
        case 0x21f834u: goto label_21f834;
        case 0x21f838u: goto label_21f838;
        case 0x21f83cu: goto label_21f83c;
        case 0x21f840u: goto label_21f840;
        case 0x21f844u: goto label_21f844;
        case 0x21f848u: goto label_21f848;
        case 0x21f84cu: goto label_21f84c;
        case 0x21f850u: goto label_21f850;
        case 0x21f854u: goto label_21f854;
        case 0x21f858u: goto label_21f858;
        case 0x21f85cu: goto label_21f85c;
        case 0x21f860u: goto label_21f860;
        case 0x21f864u: goto label_21f864;
        case 0x21f868u: goto label_21f868;
        case 0x21f86cu: goto label_21f86c;
        case 0x21f870u: goto label_21f870;
        case 0x21f874u: goto label_21f874;
        case 0x21f878u: goto label_21f878;
        case 0x21f87cu: goto label_21f87c;
        case 0x21f880u: goto label_21f880;
        case 0x21f884u: goto label_21f884;
        case 0x21f888u: goto label_21f888;
        case 0x21f88cu: goto label_21f88c;
        case 0x21f890u: goto label_21f890;
        case 0x21f894u: goto label_21f894;
        case 0x21f898u: goto label_21f898;
        case 0x21f89cu: goto label_21f89c;
        case 0x21f8a0u: goto label_21f8a0;
        case 0x21f8a4u: goto label_21f8a4;
        case 0x21f8a8u: goto label_21f8a8;
        case 0x21f8acu: goto label_21f8ac;
        case 0x21f8b0u: goto label_21f8b0;
        case 0x21f8b4u: goto label_21f8b4;
        case 0x21f8b8u: goto label_21f8b8;
        case 0x21f8bcu: goto label_21f8bc;
        case 0x21f8c0u: goto label_21f8c0;
        case 0x21f8c4u: goto label_21f8c4;
        case 0x21f8c8u: goto label_21f8c8;
        case 0x21f8ccu: goto label_21f8cc;
        case 0x21f8d0u: goto label_21f8d0;
        case 0x21f8d4u: goto label_21f8d4;
        case 0x21f8d8u: goto label_21f8d8;
        case 0x21f8dcu: goto label_21f8dc;
        case 0x21f8e0u: goto label_21f8e0;
        case 0x21f8e4u: goto label_21f8e4;
        case 0x21f8e8u: goto label_21f8e8;
        case 0x21f8ecu: goto label_21f8ec;
        case 0x21f8f0u: goto label_21f8f0;
        case 0x21f8f4u: goto label_21f8f4;
        case 0x21f8f8u: goto label_21f8f8;
        case 0x21f8fcu: goto label_21f8fc;
        case 0x21f900u: goto label_21f900;
        case 0x21f904u: goto label_21f904;
        case 0x21f908u: goto label_21f908;
        case 0x21f90cu: goto label_21f90c;
        case 0x21f910u: goto label_21f910;
        case 0x21f914u: goto label_21f914;
        case 0x21f918u: goto label_21f918;
        case 0x21f91cu: goto label_21f91c;
        case 0x21f920u: goto label_21f920;
        case 0x21f924u: goto label_21f924;
        case 0x21f928u: goto label_21f928;
        case 0x21f92cu: goto label_21f92c;
        case 0x21f930u: goto label_21f930;
        case 0x21f934u: goto label_21f934;
        case 0x21f938u: goto label_21f938;
        case 0x21f93cu: goto label_21f93c;
        case 0x21f940u: goto label_21f940;
        case 0x21f944u: goto label_21f944;
        case 0x21f948u: goto label_21f948;
        case 0x21f94cu: goto label_21f94c;
        case 0x21f950u: goto label_21f950;
        case 0x21f954u: goto label_21f954;
        case 0x21f958u: goto label_21f958;
        case 0x21f95cu: goto label_21f95c;
        case 0x21f960u: goto label_21f960;
        case 0x21f964u: goto label_21f964;
        case 0x21f968u: goto label_21f968;
        case 0x21f96cu: goto label_21f96c;
        case 0x21f970u: goto label_21f970;
        case 0x21f974u: goto label_21f974;
        case 0x21f978u: goto label_21f978;
        case 0x21f97cu: goto label_21f97c;
        case 0x21f980u: goto label_21f980;
        case 0x21f984u: goto label_21f984;
        case 0x21f988u: goto label_21f988;
        case 0x21f98cu: goto label_21f98c;
        case 0x21f990u: goto label_21f990;
        case 0x21f994u: goto label_21f994;
        case 0x21f998u: goto label_21f998;
        case 0x21f99cu: goto label_21f99c;
        case 0x21f9a0u: goto label_21f9a0;
        case 0x21f9a4u: goto label_21f9a4;
        case 0x21f9a8u: goto label_21f9a8;
        case 0x21f9acu: goto label_21f9ac;
        case 0x21f9b0u: goto label_21f9b0;
        case 0x21f9b4u: goto label_21f9b4;
        case 0x21f9b8u: goto label_21f9b8;
        case 0x21f9bcu: goto label_21f9bc;
        case 0x21f9c0u: goto label_21f9c0;
        case 0x21f9c4u: goto label_21f9c4;
        case 0x21f9c8u: goto label_21f9c8;
        case 0x21f9ccu: goto label_21f9cc;
        case 0x21f9d0u: goto label_21f9d0;
        case 0x21f9d4u: goto label_21f9d4;
        case 0x21f9d8u: goto label_21f9d8;
        case 0x21f9dcu: goto label_21f9dc;
        case 0x21f9e0u: goto label_21f9e0;
        case 0x21f9e4u: goto label_21f9e4;
        case 0x21f9e8u: goto label_21f9e8;
        case 0x21f9ecu: goto label_21f9ec;
        case 0x21f9f0u: goto label_21f9f0;
        case 0x21f9f4u: goto label_21f9f4;
        case 0x21f9f8u: goto label_21f9f8;
        case 0x21f9fcu: goto label_21f9fc;
        case 0x21fa00u: goto label_21fa00;
        case 0x21fa04u: goto label_21fa04;
        case 0x21fa08u: goto label_21fa08;
        case 0x21fa0cu: goto label_21fa0c;
        case 0x21fa10u: goto label_21fa10;
        case 0x21fa14u: goto label_21fa14;
        case 0x21fa18u: goto label_21fa18;
        case 0x21fa1cu: goto label_21fa1c;
        case 0x21fa20u: goto label_21fa20;
        case 0x21fa24u: goto label_21fa24;
        case 0x21fa28u: goto label_21fa28;
        case 0x21fa2cu: goto label_21fa2c;
        case 0x21fa30u: goto label_21fa30;
        case 0x21fa34u: goto label_21fa34;
        case 0x21fa38u: goto label_21fa38;
        case 0x21fa3cu: goto label_21fa3c;
        case 0x21fa40u: goto label_21fa40;
        case 0x21fa44u: goto label_21fa44;
        case 0x21fa48u: goto label_21fa48;
        case 0x21fa4cu: goto label_21fa4c;
        case 0x21fa50u: goto label_21fa50;
        case 0x21fa54u: goto label_21fa54;
        case 0x21fa58u: goto label_21fa58;
        case 0x21fa5cu: goto label_21fa5c;
        case 0x21fa60u: goto label_21fa60;
        case 0x21fa64u: goto label_21fa64;
        case 0x21fa68u: goto label_21fa68;
        case 0x21fa6cu: goto label_21fa6c;
        case 0x21fa70u: goto label_21fa70;
        case 0x21fa74u: goto label_21fa74;
        case 0x21fa78u: goto label_21fa78;
        case 0x21fa7cu: goto label_21fa7c;
        case 0x21fa80u: goto label_21fa80;
        case 0x21fa84u: goto label_21fa84;
        case 0x21fa88u: goto label_21fa88;
        case 0x21fa8cu: goto label_21fa8c;
        case 0x21fa90u: goto label_21fa90;
        case 0x21fa94u: goto label_21fa94;
        case 0x21fa98u: goto label_21fa98;
        case 0x21fa9cu: goto label_21fa9c;
        case 0x21faa0u: goto label_21faa0;
        case 0x21faa4u: goto label_21faa4;
        case 0x21faa8u: goto label_21faa8;
        case 0x21faacu: goto label_21faac;
        case 0x21fab0u: goto label_21fab0;
        case 0x21fab4u: goto label_21fab4;
        case 0x21fab8u: goto label_21fab8;
        case 0x21fabcu: goto label_21fabc;
        case 0x21fac0u: goto label_21fac0;
        case 0x21fac4u: goto label_21fac4;
        case 0x21fac8u: goto label_21fac8;
        case 0x21faccu: goto label_21facc;
        case 0x21fad0u: goto label_21fad0;
        case 0x21fad4u: goto label_21fad4;
        case 0x21fad8u: goto label_21fad8;
        case 0x21fadcu: goto label_21fadc;
        case 0x21fae0u: goto label_21fae0;
        case 0x21fae4u: goto label_21fae4;
        case 0x21fae8u: goto label_21fae8;
        case 0x21faecu: goto label_21faec;
        case 0x21faf0u: goto label_21faf0;
        case 0x21faf4u: goto label_21faf4;
        case 0x21faf8u: goto label_21faf8;
        case 0x21fafcu: goto label_21fafc;
        case 0x21fb00u: goto label_21fb00;
        case 0x21fb04u: goto label_21fb04;
        case 0x21fb08u: goto label_21fb08;
        case 0x21fb0cu: goto label_21fb0c;
        case 0x21fb10u: goto label_21fb10;
        case 0x21fb14u: goto label_21fb14;
        default: return;
    }

label_21f348:
    // 0x21f348: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
label_21f34c:
    if (ctx->pc == 0x21F34Cu) {
        ctx->pc = 0x21F34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F348u;
        // 0x21f34c: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F350u;
        goto label_21f350;
    }
    ctx->pc = 0x21F348u;
    {
        const bool branch_taken_0x21f348 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x21F34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F348u;
        // 0x21f34c: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f348) {
            ctx->pc = 0x21F328u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x21f328; return; }
        }
    }
    ctx->pc = 0x21F350u;
label_21f350:
    // 0x21f350: 0x702d  daddu       $t6, $zero, $zero
    ctx->pc = 0x21f350u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21f354:
    // 0x21f354: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x21f354u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21f358:
    // 0x21f358: 0x3c0c0030  lui         $t4, 0x30
    ctx->pc = 0x21f358u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)48 << 16));
label_21f35c:
    // 0x21f35c: 0x27aa0080  addiu       $t2, $sp, 0x80
    ctx->pc = 0x21f35cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_21f360:
    // 0x21f360: 0x258cb4e0  addiu       $t4, $t4, -0x4B20
    ctx->pc = 0x21f360u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294948064));
label_21f364:
    // 0x21f364: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x21f364u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21f368:
    // 0x21f368: 0x260d0001  addiu       $t5, $s0, 0x1
    ctx->pc = 0x21f368u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_21f36c:
    // 0x21f36c: 0x782d  daddu       $t7, $zero, $zero
    ctx->pc = 0x21f36cu;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21f370:
    // 0x21f370: 0x6010002  bgez        $s0, . + 4 + (0x2 << 2)
label_21f374:
    if (ctx->pc == 0x21F374u) {
        ctx->pc = 0x21F374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F370u;
        // 0x21f374: 0x109843  sra         $s3, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F378u;
        goto label_21f378;
    }
    ctx->pc = 0x21F370u;
    {
        const bool branch_taken_0x21f370 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x21F374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F370u;
        // 0x21f374: 0x109843  sra         $s3, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f370) {
            ctx->pc = 0x21F37Cu;
            goto label_21f37c;
        }
    }
    ctx->pc = 0x21F378u;
label_21f378:
    // 0x21f378: 0xd9843  sra         $s3, $t5, 1
    ctx->pc = 0x21f378u;
    SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 13), 1));
label_21f37c:
    // 0x21f37c: 0x13082a  slt         $at, $zero, $s3
    ctx->pc = 0x21f37cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
label_21f380:
    // 0x21f380: 0x10200050  beqz        $at, . + 4 + (0x50 << 2)
label_21f384:
    if (ctx->pc == 0x21F384u) {
        ctx->pc = 0x21F384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F380u;
        // 0x21f384: 0x2a610009  slti        $at, $s3, 0x9 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)9) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F388u;
        goto label_21f388;
    }
    ctx->pc = 0x21F380u;
    {
        const bool branch_taken_0x21f380 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F380u;
        // 0x21f384: 0x2a610009  slti        $at, $s3, 0x9 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)9) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f380) {
            ctx->pc = 0x21F4C4u;
            goto label_21f4c4;
        }
    }
    ctx->pc = 0x21F388u;
label_21f388:
    // 0x21f388: 0x1420003b  bnez        $at, . + 4 + (0x3B << 2)
label_21f38c:
    if (ctx->pc == 0x21F38Cu) {
        ctx->pc = 0x21F38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F388u;
        // 0x21f38c: 0x2671fff8  addiu       $s1, $s3, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F390u;
        goto label_21f390;
    }
    ctx->pc = 0x21F388u;
    {
        const bool branch_taken_0x21f388 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x21F38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F388u;
        // 0x21f38c: 0x2671fff8  addiu       $s1, $s3, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f388) {
            ctx->pc = 0x21F478u;
            goto label_21f478;
        }
    }
    ctx->pc = 0x21F390u;
label_21f390:
    // 0x21f390: 0xc02d  daddu       $t8, $zero, $zero
    ctx->pc = 0x21f390u;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21f394:
    // 0x21f394: 0xc82d  daddu       $t9, $zero, $zero
    ctx->pc = 0x21f394u;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21f398:
    // 0x21f398: 0x1921821  addu        $v1, $t4, $s2
    ctx->pc = 0x21f398u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 18)));
label_21f39c:
    // 0x21f39c: 0x246b0000  addiu       $t3, $v1, 0x0
    ctx->pc = 0x21f39cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 3), 0));
label_21f3a0:
    // 0x21f3a0: 0x1d9a821  addu        $s5, $t6, $t9
    ctx->pc = 0x21f3a0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 25)));
label_21f3a4:
    // 0x21f3a4: 0x152080  sll         $a0, $s5, 2
    ctx->pc = 0x21f3a4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
label_21f3a8:
    // 0x21f3a8: 0x26a60004  addiu       $a2, $s5, 0x4
    ctx->pc = 0x21f3a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
label_21f3ac:
    // 0x21f3ac: 0x1442021  addu        $a0, $t2, $a0
    ctx->pc = 0x21f3acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
label_21f3b0:
    // 0x21f3b0: 0x26a50006  addiu       $a1, $s5, 0x6
    ctx->pc = 0x21f3b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 6));
label_21f3b4:
    // 0x21f3b4: 0x84840000  lh          $a0, 0x0($a0)
    ctx->pc = 0x21f3b4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_21f3b8:
    // 0x21f3b8: 0x178a021  addu        $s4, $t3, $t8
    ctx->pc = 0x21f3b8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 24)));
label_21f3bc:
    // 0x21f3bc: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x21f3bcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_21f3c0:
    // 0x21f3c0: 0x26a80008  addiu       $t0, $s5, 0x8
    ctx->pc = 0x21f3c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
label_21f3c4:
    // 0x21f3c4: 0x26a30002  addiu       $v1, $s5, 0x2
    ctx->pc = 0x21f3c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 2));
label_21f3c8:
    // 0x21f3c8: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x21f3c8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_21f3cc:
    // 0x21f3cc: 0x1463821  addu        $a3, $t2, $a2
    ctx->pc = 0x21f3ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 6)));
label_21f3d0:
    // 0x21f3d0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x21f3d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_21f3d4:
    // 0x21f3d4: 0x1453021  addu        $a2, $t2, $a1
    ctx->pc = 0x21f3d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 5)));
label_21f3d8:
    // 0x21f3d8: 0x8b080  sll         $s6, $t0, 2
    ctx->pc = 0x21f3d8u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_21f3dc:
    // 0x21f3dc: 0x26a5000a  addiu       $a1, $s5, 0xA
    ctx->pc = 0x21f3dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 10));
label_21f3e0:
    // 0x21f3e0: 0x1431821  addu        $v1, $t2, $v1
    ctx->pc = 0x21f3e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
label_21f3e4:
    // 0x21f3e4: 0x54080  sll         $t0, $a1, 2
    ctx->pc = 0x21f3e4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_21f3e8:
    // 0x21f3e8: 0xa684000a  sh          $a0, 0xA($s4)
    ctx->pc = 0x21f3e8u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 10), (uint16_t)GPR_U32(ctx, 4));
label_21f3ec:
    // 0x21f3ec: 0x1482021  addu        $a0, $t2, $t0
    ctx->pc = 0x21f3ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 8)));
label_21f3f0:
    // 0x21f3f0: 0xa2890010  sb          $t1, 0x10($s4)
    ctx->pc = 0x21f3f0u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 16), (uint8_t)GPR_U32(ctx, 9));
label_21f3f4:
    // 0x21f3f4: 0x84680000  lh          $t0, 0x0($v1)
    ctx->pc = 0x21f3f4u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_21f3f8:
    // 0x21f3f8: 0x1562821  addu        $a1, $t2, $s6
    ctx->pc = 0x21f3f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 22)));
label_21f3fc:
    // 0x21f3fc: 0x25ef0008  addiu       $t7, $t7, 0x8
    ctx->pc = 0x21f3fcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 8));
label_21f400:
    // 0x21f400: 0x27180100  addiu       $t8, $t8, 0x100
    ctx->pc = 0x21f400u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 256));
label_21f404:
    // 0x21f404: 0x27390010  addiu       $t9, $t9, 0x10
    ctx->pc = 0x21f404u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 16));
label_21f408:
    // 0x21f408: 0xa688002a  sh          $t0, 0x2A($s4)
    ctx->pc = 0x21f408u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 42), (uint16_t)GPR_U32(ctx, 8));
label_21f40c:
    // 0x21f40c: 0x26a3000c  addiu       $v1, $s5, 0xC
    ctx->pc = 0x21f40cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 12));
label_21f410:
    // 0x21f410: 0xa2890030  sb          $t1, 0x30($s4)
    ctx->pc = 0x21f410u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 48), (uint8_t)GPR_U32(ctx, 9));
label_21f414:
    // 0x21f414: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x21f414u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_21f418:
    // 0x21f418: 0x84e70000  lh          $a3, 0x0($a3)
    ctx->pc = 0x21f418u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
label_21f41c:
    // 0x21f41c: 0x26b5000e  addiu       $s5, $s5, 0xE
    ctx->pc = 0x21f41cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 14));
label_21f420:
    // 0x21f420: 0x15a880  sll         $s5, $s5, 2
    ctx->pc = 0x21f420u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
label_21f424:
    // 0x21f424: 0x1431821  addu        $v1, $t2, $v1
    ctx->pc = 0x21f424u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
label_21f428:
    // 0x21f428: 0x155b021  addu        $s6, $t2, $s5
    ctx->pc = 0x21f428u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 21)));
label_21f42c:
    // 0x21f42c: 0x1f1a82a  slt         $s5, $t7, $s1
    ctx->pc = 0x21f42cu;
    SET_GPR_U64(ctx, 21, ((int64_t)GPR_S64(ctx, 15) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_21f430:
    // 0x21f430: 0xa687004a  sh          $a3, 0x4A($s4)
    ctx->pc = 0x21f430u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 74), (uint16_t)GPR_U32(ctx, 7));
label_21f434:
    // 0x21f434: 0xa2890050  sb          $t1, 0x50($s4)
    ctx->pc = 0x21f434u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 80), (uint8_t)GPR_U32(ctx, 9));
label_21f438:
    // 0x21f438: 0x84c60000  lh          $a2, 0x0($a2)
    ctx->pc = 0x21f438u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
label_21f43c:
    // 0x21f43c: 0xa686006a  sh          $a2, 0x6A($s4)
    ctx->pc = 0x21f43cu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 106), (uint16_t)GPR_U32(ctx, 6));
label_21f440:
    // 0x21f440: 0xa2890070  sb          $t1, 0x70($s4)
    ctx->pc = 0x21f440u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 112), (uint8_t)GPR_U32(ctx, 9));
label_21f444:
    // 0x21f444: 0x84a50000  lh          $a1, 0x0($a1)
    ctx->pc = 0x21f444u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_21f448:
    // 0x21f448: 0xa685008a  sh          $a1, 0x8A($s4)
    ctx->pc = 0x21f448u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 138), (uint16_t)GPR_U32(ctx, 5));
label_21f44c:
    // 0x21f44c: 0xa2890090  sb          $t1, 0x90($s4)
    ctx->pc = 0x21f44cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 144), (uint8_t)GPR_U32(ctx, 9));
label_21f450:
    // 0x21f450: 0x84840000  lh          $a0, 0x0($a0)
    ctx->pc = 0x21f450u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_21f454:
    // 0x21f454: 0xa68400aa  sh          $a0, 0xAA($s4)
    ctx->pc = 0x21f454u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 170), (uint16_t)GPR_U32(ctx, 4));
label_21f458:
    // 0x21f458: 0xa28900b0  sb          $t1, 0xB0($s4)
    ctx->pc = 0x21f458u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 176), (uint8_t)GPR_U32(ctx, 9));
label_21f45c:
    // 0x21f45c: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x21f45cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_21f460:
    // 0x21f460: 0xa68300ca  sh          $v1, 0xCA($s4)
    ctx->pc = 0x21f460u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 202), (uint16_t)GPR_U32(ctx, 3));
label_21f464:
    // 0x21f464: 0xa28900d0  sb          $t1, 0xD0($s4)
    ctx->pc = 0x21f464u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 208), (uint8_t)GPR_U32(ctx, 9));
label_21f468:
    // 0x21f468: 0x86c30000  lh          $v1, 0x0($s6)
    ctx->pc = 0x21f468u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
label_21f46c:
    // 0x21f46c: 0xa68300ea  sh          $v1, 0xEA($s4)
    ctx->pc = 0x21f46cu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 234), (uint16_t)GPR_U32(ctx, 3));
label_21f470:
    // 0x21f470: 0x16a0ffcb  bnez        $s5, . + 4 + (-0x35 << 2)
label_21f474:
    if (ctx->pc == 0x21F474u) {
        ctx->pc = 0x21F474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F470u;
        // 0x21f474: 0xa28900f0  sb          $t1, 0xF0($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 240), (uint8_t)GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F478u;
        goto label_21f478;
    }
    ctx->pc = 0x21F470u;
    {
        const bool branch_taken_0x21f470 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x21F474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F470u;
        // 0x21f474: 0xa28900f0  sb          $t1, 0xF0($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 240), (uint8_t)GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f470) {
            ctx->pc = 0x21F3A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21f3a0;
        }
    }
    ctx->pc = 0x21F478u;
label_21f478:
    // 0x21f478: 0x1921821  addu        $v1, $t4, $s2
    ctx->pc = 0x21f478u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 18)));
label_21f47c:
    // 0x21f47c: 0xf2940  sll         $a1, $t7, 5
    ctx->pc = 0x21f47cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 15), 5));
label_21f480:
    // 0x21f480: 0xf3040  sll         $a2, $t7, 1
    ctx->pc = 0x21f480u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 15), 1));
label_21f484:
    // 0x21f484: 0x1000000c  b           . + 4 + (0xC << 2)
label_21f488:
    if (ctx->pc == 0x21F488u) {
        ctx->pc = 0x21F488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F484u;
        // 0x21f488: 0x24640000  addiu       $a0, $v1, 0x0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F48Cu;
        goto label_21f48c;
    }
    ctx->pc = 0x21F484u;
    {
        const bool branch_taken_0x21f484 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F484u;
        // 0x21f488: 0x24640000  addiu       $a0, $v1, 0x0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f484) {
            ctx->pc = 0x21F4B8u;
            goto label_21f4b8;
        }
    }
    ctx->pc = 0x21F48Cu;
label_21f48c:
    // 0x21f48c: 0x0  nop
    ctx->pc = 0x21f48cu;
    // NOP
label_21f490:
    // 0x21f490: 0x1c61821  addu        $v1, $t6, $a2
    ctx->pc = 0x21f490u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 6)));
label_21f494:
    // 0x21f494: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x21f494u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_21f498:
    // 0x21f498: 0x853821  addu        $a3, $a0, $a1
    ctx->pc = 0x21f498u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_21f49c:
    // 0x21f49c: 0x1431821  addu        $v1, $t2, $v1
    ctx->pc = 0x21f49cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
label_21f4a0:
    // 0x21f4a0: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x21f4a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
label_21f4a4:
    // 0x21f4a4: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x21f4a4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_21f4a8:
    // 0x21f4a8: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x21f4a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
label_21f4ac:
    // 0x21f4ac: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x21f4acu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
label_21f4b0:
    // 0x21f4b0: 0xa4e3000a  sh          $v1, 0xA($a3)
    ctx->pc = 0x21f4b0u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 10), (uint16_t)GPR_U32(ctx, 3));
label_21f4b4:
    // 0x21f4b4: 0xa0e90010  sb          $t1, 0x10($a3)
    ctx->pc = 0x21f4b4u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 16), (uint8_t)GPR_U32(ctx, 9));
label_21f4b8:
    // 0x21f4b8: 0x1f3182a  slt         $v1, $t7, $s3
    ctx->pc = 0x21f4b8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 15) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
label_21f4bc:
    // 0x21f4bc: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
label_21f4c0:
    if (ctx->pc == 0x21F4C0u) {
        ctx->pc = 0x21F4C4u;
        goto label_21f4c4;
    }
    ctx->pc = 0x21F4BCu;
    {
        const bool branch_taken_0x21f4bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x21f4bc) {
            ctx->pc = 0x21F48Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21f48c;
        }
    }
    ctx->pc = 0x21F4C4u;
label_21f4c4:
    // 0x21f4c4: 0x0  nop
    ctx->pc = 0x21f4c4u;
    // NOP
label_21f4c8:
    // 0x21f4c8: 0x25ce0001  addiu       $t6, $t6, 0x1
    ctx->pc = 0x21f4c8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
label_21f4cc:
    // 0x21f4cc: 0x29c30002  slti        $v1, $t6, 0x2
    ctx->pc = 0x21f4ccu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 14) < (int64_t)(int32_t)2) ? 1 : 0);
label_21f4d0:
    // 0x21f4d0: 0x1460ffa6  bnez        $v1, . + 4 + (-0x5A << 2)
label_21f4d4:
    if (ctx->pc == 0x21F4D4u) {
        ctx->pc = 0x21F4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F4D0u;
        // 0x21f4d4: 0x26521fe0  addiu       $s2, $s2, 0x1FE0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F4D8u;
        goto label_21f4d8;
    }
    ctx->pc = 0x21F4D0u;
    {
        const bool branch_taken_0x21f4d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x21F4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F4D0u;
        // 0x21f4d4: 0x26521fe0  addiu       $s2, $s2, 0x1FE0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f4d0) {
            ctx->pc = 0x21F36Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21f36c;
        }
    }
    ctx->pc = 0x21F4D8u;
label_21f4d8:
    // 0x21f4d8: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x21f4d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_21f4dc:
    // 0x21f4dc: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x21f4dcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_21f4e0:
    // 0x21f4e0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x21f4e0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_21f4e4:
    // 0x21f4e4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x21f4e4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_21f4e8:
    // 0x21f4e8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x21f4e8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_21f4ec:
    // 0x21f4ec: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x21f4ecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_21f4f0:
    // 0x21f4f0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x21f4f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_21f4f4:
    // 0x21f4f4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x21f4f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_21f4f8:
    // 0x21f4f8: 0x3e00008  jr          $ra
label_21f4fc:
    if (ctx->pc == 0x21F4FCu) {
        ctx->pc = 0x21F4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F4F8u;
        // 0x21f4fc: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F500u;
        goto label_21f500;
    }
    ctx->pc = 0x21F4F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21F4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F4F8u;
        // 0x21f4fc: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21F4F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21F500u;
label_21f500:
    // 0x21f500: 0x24020027  addiu       $v0, $zero, 0x27
    ctx->pc = 0x21f500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
label_21f504:
    // 0x21f504: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x21f504u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21f508:
    // 0x21f508: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x21f508u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_21f50c:
    // 0x21f50c: 0x3c070029  lui         $a3, 0x29
    ctx->pc = 0x21f50cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)41 << 16));
label_21f510:
    // 0x21f510: 0x90284910  lbu         $t0, 0x4910($at)
    ctx->pc = 0x21f510u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18704)));
label_21f514:
    // 0x21f514: 0x24e7dab0  addiu       $a3, $a3, -0x2550
    ctx->pc = 0x21f514u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294957744));
label_21f518:
    // 0x21f518: 0x4082a  slt         $at, $zero, $a0
    ctx->pc = 0x21f518u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_21f51c:
    // 0x21f51c: 0x10200014  beqz        $at, . + 4 + (0x14 << 2)
label_21f520:
    if (ctx->pc == 0x21F520u) {
        ctx->pc = 0x21F520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F51Cu;
        // 0x21f520: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F524u;
        goto label_21f524;
    }
    ctx->pc = 0x21F51Cu;
    {
        const bool branch_taken_0x21f51c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F51Cu;
        // 0x21f520: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f51c) {
            ctx->pc = 0x21F570u;
            goto label_21f570;
        }
    }
    ctx->pc = 0x21F524u;
label_21f524:
    // 0x21f524: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x21f524u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21f528:
    // 0x21f528: 0x5010004  bgez        $t0, . + 4 + (0x4 << 2)
label_21f52c:
    if (ctx->pc == 0x21F52Cu) {
        ctx->pc = 0x21F52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F528u;
        // 0x21f52c: 0x31030003  andi        $v1, $t0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F530u;
        goto label_21f530;
    }
    ctx->pc = 0x21F528u;
    {
        const bool branch_taken_0x21f528 = (GPR_S32(ctx, 8) >= 0);
        ctx->pc = 0x21F52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F528u;
        // 0x21f52c: 0x31030003  andi        $v1, $t0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f528) {
            ctx->pc = 0x21F53Cu;
            goto label_21f53c;
        }
    }
    ctx->pc = 0x21F530u;
label_21f530:
    // 0x21f530: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_21f534:
    if (ctx->pc == 0x21F534u) {
        ctx->pc = 0x21F534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F530u;
        // 0x21f534: 0x330c0  sll         $a2, $v1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F538u;
        goto label_21f538;
    }
    ctx->pc = 0x21F530u;
    {
        const bool branch_taken_0x21f530 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F530u;
        // 0x21f534: 0x330c0  sll         $a2, $v1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f530) {
            ctx->pc = 0x21F540u;
            goto label_21f540;
        }
    }
    ctx->pc = 0x21F538u;
label_21f538:
    // 0x21f538: 0x2463fffc  addiu       $v1, $v1, -0x4
    ctx->pc = 0x21f538u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
label_21f53c:
    // 0x21f53c: 0x330c0  sll         $a2, $v1, 3
    ctx->pc = 0x21f53cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_21f540:
    // 0x21f540: 0xe63021  addu        $a2, $a3, $a2
    ctx->pc = 0x21f540u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
label_21f544:
    // 0x21f544: 0xab1821  addu        $v1, $a1, $t3
    ctx->pc = 0x21f544u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 11)));
label_21f548:
    // 0x21f548: 0x24c60000  addiu       $a2, $a2, 0x0
    ctx->pc = 0x21f548u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 0));
label_21f54c:
    // 0x21f54c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x21f54cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_21f550:
    // 0x21f550: 0xc93021  addu        $a2, $a2, $t1
    ctx->pc = 0x21f550u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
label_21f554:
    // 0x21f554: 0x90c60000  lbu         $a2, 0x0($a2)
    ctx->pc = 0x21f554u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_21f558:
    // 0x21f558: 0x10c30005  beq         $a2, $v1, . + 4 + (0x5 << 2)
label_21f55c:
    if (ctx->pc == 0x21F55Cu) {
        ctx->pc = 0x21F560u;
        goto label_21f560;
    }
    ctx->pc = 0x21F558u;
    {
        const bool branch_taken_0x21f558 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x21f558) {
            ctx->pc = 0x21F570u;
            goto label_21f570;
        }
    }
    ctx->pc = 0x21F560u;
label_21f560:
    // 0x21f560: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x21f560u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_21f564:
    // 0x21f564: 0x144182a  slt         $v1, $t2, $a0
    ctx->pc = 0x21f564u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_21f568:
    // 0x21f568: 0x1460ffef  bnez        $v1, . + 4 + (-0x11 << 2)
label_21f56c:
    if (ctx->pc == 0x21F56Cu) {
        ctx->pc = 0x21F56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F568u;
        // 0x21f56c: 0x256b0004  addiu       $t3, $t3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F570u;
        goto label_21f570;
    }
    ctx->pc = 0x21F568u;
    {
        const bool branch_taken_0x21f568 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x21F56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F568u;
        // 0x21f56c: 0x256b0004  addiu       $t3, $t3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f568) {
            ctx->pc = 0x21F528u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21f528;
        }
    }
    ctx->pc = 0x21F570u;
label_21f570:
    // 0x21f570: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x21f570u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_21f574:
    // 0x21f574: 0x29230008  slti        $v1, $t1, 0x8
    ctx->pc = 0x21f574u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)8) ? 1 : 0);
label_21f578:
    // 0x21f578: 0x1460ffe8  bnez        $v1, . + 4 + (-0x18 << 2)
label_21f57c:
    if (ctx->pc == 0x21F57Cu) {
        ctx->pc = 0x21F57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F578u;
        // 0x21f57c: 0x4082a  slt         $at, $zero, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F580u;
        goto label_21f580;
    }
    ctx->pc = 0x21F578u;
    {
        const bool branch_taken_0x21f578 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x21F57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F578u;
        // 0x21f57c: 0x4082a  slt         $at, $zero, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f578) {
            ctx->pc = 0x21F51Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21f51c;
        }
    }
    ctx->pc = 0x21F580u;
label_21f580:
    // 0x21f580: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x21f580u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21f584:
    // 0x21f584: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x21f584u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21f588:
    // 0x21f588: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x21f588u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_21f58c:
    // 0x21f58c: 0x3c070029  lui         $a3, 0x29
    ctx->pc = 0x21f58cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)41 << 16));
label_21f590:
    // 0x21f590: 0x90284910  lbu         $t0, 0x4910($at)
    ctx->pc = 0x21f590u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18704)));
label_21f594:
    // 0x21f594: 0x24e7dab0  addiu       $a3, $a3, -0x2550
    ctx->pc = 0x21f594u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294957744));
label_21f598:
    // 0x21f598: 0x4082a  slt         $at, $zero, $a0
    ctx->pc = 0x21f598u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_21f59c:
    // 0x21f59c: 0x10200014  beqz        $at, . + 4 + (0x14 << 2)
label_21f5a0:
    if (ctx->pc == 0x21F5A0u) {
        ctx->pc = 0x21F5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F59Cu;
        // 0x21f5a0: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F5A4u;
        goto label_21f5a4;
    }
    ctx->pc = 0x21F59Cu;
    {
        const bool branch_taken_0x21f59c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F59Cu;
        // 0x21f5a0: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f59c) {
            ctx->pc = 0x21F5F0u;
            goto label_21f5f0;
        }
    }
    ctx->pc = 0x21F5A4u;
label_21f5a4:
    // 0x21f5a4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x21f5a4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21f5a8:
    // 0x21f5a8: 0x5010004  bgez        $t0, . + 4 + (0x4 << 2)
label_21f5ac:
    if (ctx->pc == 0x21F5ACu) {
        ctx->pc = 0x21F5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F5A8u;
        // 0x21f5ac: 0x31030003  andi        $v1, $t0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F5B0u;
        goto label_21f5b0;
    }
    ctx->pc = 0x21F5A8u;
    {
        const bool branch_taken_0x21f5a8 = (GPR_S32(ctx, 8) >= 0);
        ctx->pc = 0x21F5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F5A8u;
        // 0x21f5ac: 0x31030003  andi        $v1, $t0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f5a8) {
            ctx->pc = 0x21F5BCu;
            goto label_21f5bc;
        }
    }
    ctx->pc = 0x21F5B0u;
label_21f5b0:
    // 0x21f5b0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_21f5b4:
    if (ctx->pc == 0x21F5B4u) {
        ctx->pc = 0x21F5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F5B0u;
        // 0x21f5b4: 0x330c0  sll         $a2, $v1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F5B8u;
        goto label_21f5b8;
    }
    ctx->pc = 0x21F5B0u;
    {
        const bool branch_taken_0x21f5b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F5B0u;
        // 0x21f5b4: 0x330c0  sll         $a2, $v1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f5b0) {
            ctx->pc = 0x21F5C0u;
            goto label_21f5c0;
        }
    }
    ctx->pc = 0x21F5B8u;
label_21f5b8:
    // 0x21f5b8: 0x2463fffc  addiu       $v1, $v1, -0x4
    ctx->pc = 0x21f5b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
label_21f5bc:
    // 0x21f5bc: 0x330c0  sll         $a2, $v1, 3
    ctx->pc = 0x21f5bcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_21f5c0:
    // 0x21f5c0: 0xe63021  addu        $a2, $a3, $a2
    ctx->pc = 0x21f5c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
label_21f5c4:
    // 0x21f5c4: 0xaa1821  addu        $v1, $a1, $t2
    ctx->pc = 0x21f5c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 10)));
label_21f5c8:
    // 0x21f5c8: 0x24c60000  addiu       $a2, $a2, 0x0
    ctx->pc = 0x21f5c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 0));
label_21f5cc:
    // 0x21f5cc: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x21f5ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_21f5d0:
    // 0x21f5d0: 0xcb3021  addu        $a2, $a2, $t3
    ctx->pc = 0x21f5d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 11)));
label_21f5d4:
    // 0x21f5d4: 0x90c60000  lbu         $a2, 0x0($a2)
    ctx->pc = 0x21f5d4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_21f5d8:
    // 0x21f5d8: 0x10c30005  beq         $a2, $v1, . + 4 + (0x5 << 2)
label_21f5dc:
    if (ctx->pc == 0x21F5DCu) {
        ctx->pc = 0x21F5E0u;
        goto label_21f5e0;
    }
    ctx->pc = 0x21F5D8u;
    {
        const bool branch_taken_0x21f5d8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x21f5d8) {
            ctx->pc = 0x21F5F0u;
            goto label_21f5f0;
        }
    }
    ctx->pc = 0x21F5E0u;
label_21f5e0:
    // 0x21f5e0: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x21f5e0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
label_21f5e4:
    // 0x21f5e4: 0x184182a  slt         $v1, $t4, $a0
    ctx->pc = 0x21f5e4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 12) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_21f5e8:
    // 0x21f5e8: 0x1460ffef  bnez        $v1, . + 4 + (-0x11 << 2)
label_21f5ec:
    if (ctx->pc == 0x21F5ECu) {
        ctx->pc = 0x21F5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F5E8u;
        // 0x21f5ec: 0x254a0004  addiu       $t2, $t2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F5F0u;
        goto label_21f5f0;
    }
    ctx->pc = 0x21F5E8u;
    {
        const bool branch_taken_0x21f5e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x21F5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F5E8u;
        // 0x21f5ec: 0x254a0004  addiu       $t2, $t2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f5e8) {
            ctx->pc = 0x21F5A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21f5a8;
        }
    }
    ctx->pc = 0x21F5F0u;
label_21f5f0:
    // 0x21f5f0: 0x15840012  bne         $t4, $a0, . + 4 + (0x12 << 2)
label_21f5f4:
    if (ctx->pc == 0x21F5F4u) {
        ctx->pc = 0x21F5F8u;
        goto label_21f5f8;
    }
    ctx->pc = 0x21F5F0u;
    {
        const bool branch_taken_0x21f5f0 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 4));
        if (branch_taken_0x21f5f0) {
            ctx->pc = 0x21F63Cu;
            goto label_21f63c;
        }
    }
    ctx->pc = 0x21F5F8u;
label_21f5f8:
    // 0x21f5f8: 0x1520000f  bnez        $t1, . + 4 + (0xF << 2)
label_21f5fc:
    if (ctx->pc == 0x21F5FCu) {
        ctx->pc = 0x21F5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F5F8u;
        // 0x21f5fc: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F600u;
        goto label_21f600;
    }
    ctx->pc = 0x21F5F8u;
    {
        const bool branch_taken_0x21f5f8 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x21F5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F5F8u;
        // 0x21f5fc: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f5f8) {
            ctx->pc = 0x21F638u;
            goto label_21f638;
        }
    }
    ctx->pc = 0x21F600u;
label_21f600:
    // 0x21f600: 0x90234910  lbu         $v1, 0x4910($at)
    ctx->pc = 0x21f600u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18704)));
label_21f604:
    // 0x21f604: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
label_21f608:
    if (ctx->pc == 0x21F608u) {
        ctx->pc = 0x21F608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F604u;
        // 0x21f608: 0x30620003  andi        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F60Cu;
        goto label_21f60c;
    }
    ctx->pc = 0x21F604u;
    {
        const bool branch_taken_0x21f604 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x21F608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F604u;
        // 0x21f608: 0x30620003  andi        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f604) {
            ctx->pc = 0x21F618u;
            goto label_21f618;
        }
    }
    ctx->pc = 0x21F60Cu;
label_21f60c:
    // 0x21f60c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_21f610:
    if (ctx->pc == 0x21F610u) {
        ctx->pc = 0x21F610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F60Cu;
        // 0x21f610: 0x218c0  sll         $v1, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F614u;
        goto label_21f614;
    }
    ctx->pc = 0x21F60Cu;
    {
        const bool branch_taken_0x21f60c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F60Cu;
        // 0x21f610: 0x218c0  sll         $v1, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f60c) {
            ctx->pc = 0x21F61Cu;
            goto label_21f61c;
        }
    }
    ctx->pc = 0x21F614u;
label_21f614:
    // 0x21f614: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x21f614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
label_21f618:
    // 0x21f618: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x21f618u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_21f61c:
    // 0x21f61c: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x21f61cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
label_21f620:
    // 0x21f620: 0x2442dab0  addiu       $v0, $v0, -0x2550
    ctx->pc = 0x21f620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957744));
label_21f624:
    // 0x21f624: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x21f624u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_21f628:
    // 0x21f628: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x21f628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
label_21f62c:
    // 0x21f62c: 0x4b1021  addu        $v0, $v0, $t3
    ctx->pc = 0x21f62cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
label_21f630:
    // 0x21f630: 0x10000007  b           . + 4 + (0x7 << 2)
label_21f634:
    if (ctx->pc == 0x21F634u) {
        ctx->pc = 0x21F634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F630u;
        // 0x21f634: 0x90420000  lbu         $v0, 0x0($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F638u;
        goto label_21f638;
    }
    ctx->pc = 0x21F630u;
    {
        const bool branch_taken_0x21f630 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F630u;
        // 0x21f634: 0x90420000  lbu         $v0, 0x0($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f630) {
            ctx->pc = 0x21F650u;
            goto label_21f650;
        }
    }
    ctx->pc = 0x21F638u;
label_21f638:
    // 0x21f638: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x21f638u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_21f63c:
    // 0x21f63c: 0x0  nop
    ctx->pc = 0x21f63cu;
    // NOP
label_21f640:
    // 0x21f640: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x21f640u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
label_21f644:
    // 0x21f644: 0x29630008  slti        $v1, $t3, 0x8
    ctx->pc = 0x21f644u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 11) < (int64_t)(int32_t)8) ? 1 : 0);
label_21f648:
    // 0x21f648: 0x1460ffd4  bnez        $v1, . + 4 + (-0x2C << 2)
label_21f64c:
    if (ctx->pc == 0x21F64Cu) {
        ctx->pc = 0x21F64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F648u;
        // 0x21f64c: 0x4082a  slt         $at, $zero, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F650u;
        goto label_21f650;
    }
    ctx->pc = 0x21F648u;
    {
        const bool branch_taken_0x21f648 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x21F64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F648u;
        // 0x21f64c: 0x4082a  slt         $at, $zero, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f648) {
            ctx->pc = 0x21F59Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21f59c;
        }
    }
    ctx->pc = 0x21F650u;
label_21f650:
    // 0x21f650: 0x3e00008  jr          $ra
label_21f654:
    if (ctx->pc == 0x21F654u) {
        ctx->pc = 0x21F658u;
        goto label_21f658;
    }
    ctx->pc = 0x21F650u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21F650u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21F658u;
label_21f658:
    // 0x21f658: 0x0  nop
    ctx->pc = 0x21f658u;
    // NOP
label_21f65c:
    // 0x21f65c: 0x0  nop
    ctx->pc = 0x21f65cu;
    // NOP
label_21f660:
    // 0x21f660: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x21f660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_21f664:
    // 0x21f664: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x21f664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_21f668:
    // 0x21f668: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x21f668u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_21f66c:
    // 0x21f66c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x21f66cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_21f670:
    // 0x21f670: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x21f670u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_21f674:
    // 0x21f674: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x21f674u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_21f678:
    // 0x21f678: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x21f678u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21f67c:
    // 0x21f67c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x21f67cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_21f680:
    // 0x21f680: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x21f680u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21f684:
    // 0x21f684: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x21f684u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_21f688:
    // 0x21f688: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x21f688u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_21f68c:
    // 0x21f68c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x21f68cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_21f690:
    // 0x21f690: 0x11082a  slt         $at, $zero, $s1
    ctx->pc = 0x21f690u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_21f694:
    // 0x21f694: 0x1020001c  beqz        $at, . + 4 + (0x1C << 2)
label_21f698:
    if (ctx->pc == 0x21F698u) {
        ctx->pc = 0x21F698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F694u;
        // 0x21f698: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F69Cu;
        goto label_21f69c;
    }
    ctx->pc = 0x21F694u;
    {
        const bool branch_taken_0x21f694 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F694u;
        // 0x21f698: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f694) {
            ctx->pc = 0x21F708u;
            goto label_21f708;
        }
    }
    ctx->pc = 0x21F69Cu;
label_21f69c:
    // 0x21f69c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x21f69cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21f6a0:
    // 0x21f6a0: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x21f6a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_21f6a4:
    // 0x21f6a4: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x21f6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
label_21f6a8:
    // 0x21f6a8: 0x90244910  lbu         $a0, 0x4910($at)
    ctx->pc = 0x21f6a8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18704)));
label_21f6ac:
    // 0x21f6ac: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x21f6acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_21f6b0:
    // 0x21f6b0: 0x2442da70  addiu       $v0, $v0, -0x2590
    ctx->pc = 0x21f6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957680));
label_21f6b4:
    // 0x21f6b4: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x21f6b4u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_21f6b8:
    // 0x21f6b8: 0x0  nop
    ctx->pc = 0x21f6b8u;
    // NOP
label_21f6bc:
    // 0x21f6bc: 0x0  nop
    ctx->pc = 0x21f6bcu;
    // NOP
label_21f6c0:
    // 0x21f6c0: 0x2010  mfhi        $a0
    ctx->pc = 0x21f6c0u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_21f6c4:
    // 0x21f6c4: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x21f6c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_21f6c8:
    // 0x21f6c8: 0x642023  subu        $a0, $v1, $a0
    ctx->pc = 0x21f6c8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_21f6cc:
    // 0x21f6cc: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x21f6ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_21f6d0:
    // 0x21f6d0: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x21f6d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_21f6d4:
    // 0x21f6d4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x21f6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_21f6d8:
    // 0x21f6d8: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x21f6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
label_21f6dc:
    // 0x21f6dc: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x21f6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_21f6e0:
    // 0x21f6e0: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x21f6e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_21f6e4:
    // 0x21f6e4: 0x0  nop
    ctx->pc = 0x21f6e4u;
    // NOP
label_21f6e8:
    // 0x21f6e8: 0x2061021  addu        $v0, $s0, $a2
    ctx->pc = 0x21f6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
label_21f6ec:
    // 0x21f6ec: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x21f6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_21f6f0:
    // 0x21f6f0: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_21f6f4:
    if (ctx->pc == 0x21F6F4u) {
        ctx->pc = 0x21F6F8u;
        goto label_21f6f8;
    }
    ctx->pc = 0x21F6F0u;
    {
        const bool branch_taken_0x21f6f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x21f6f0) {
            ctx->pc = 0x21F708u;
            goto label_21f708;
        }
    }
    ctx->pc = 0x21F6F8u;
label_21f6f8:
    // 0x21f6f8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x21f6f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_21f6fc:
    // 0x21f6fc: 0xb1102a  slt         $v0, $a1, $s1
    ctx->pc = 0x21f6fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_21f700:
    // 0x21f700: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_21f704:
    if (ctx->pc == 0x21F704u) {
        ctx->pc = 0x21F704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F700u;
        // 0x21f704: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F708u;
        goto label_21f708;
    }
    ctx->pc = 0x21F700u;
    {
        const bool branch_taken_0x21f700 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21F704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F700u;
        // 0x21f704: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f700) {
            ctx->pc = 0x21F6E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21f6e8;
        }
    }
    ctx->pc = 0x21F708u;
label_21f708:
    // 0x21f708: 0x14b10036  bne         $a1, $s1, . + 4 + (0x36 << 2)
label_21f70c:
    if (ctx->pc == 0x21F70Cu) {
        ctx->pc = 0x21F70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F708u;
        // 0x21f70c: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F710u;
        goto label_21f710;
    }
    ctx->pc = 0x21F708u;
    {
        const bool branch_taken_0x21f708 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 17));
        ctx->pc = 0x21F70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F708u;
        // 0x21f70c: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f708) {
            ctx->pc = 0x21F7E4u;
            goto label_21f7e4;
        }
    }
    ctx->pc = 0x21F710u;
label_21f710:
    // 0x21f710: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x21f710u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
label_21f714:
    // 0x21f714: 0x90254910  lbu         $a1, 0x4910($at)
    ctx->pc = 0x21f714u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18704)));
label_21f718:
    // 0x21f718: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x21f718u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_21f71c:
    // 0x21f71c: 0x2442da70  addiu       $v0, $v0, -0x2590
    ctx->pc = 0x21f71cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957680));
label_21f720:
    // 0x21f720: 0x24040028  addiu       $a0, $zero, 0x28
    ctx->pc = 0x21f720u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_21f724:
    // 0x21f724: 0xa3001a  div         $zero, $a1, $v1
    ctx->pc = 0x21f724u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_21f728:
    // 0x21f728: 0x0  nop
    ctx->pc = 0x21f728u;
    // NOP
label_21f72c:
    // 0x21f72c: 0x0  nop
    ctx->pc = 0x21f72cu;
    // NOP
label_21f730:
    // 0x21f730: 0x2810  mfhi        $a1
    ctx->pc = 0x21f730u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_21f734:
    // 0x21f734: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x21f734u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_21f738:
    // 0x21f738: 0x652823  subu        $a1, $v1, $a1
    ctx->pc = 0x21f738u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_21f73c:
    // 0x21f73c: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x21f73cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_21f740:
    // 0x21f740: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x21f740u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_21f744:
    // 0x21f744: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x21f744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_21f748:
    // 0x21f748: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x21f748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
label_21f74c:
    // 0x21f74c: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x21f74cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_21f750:
    // 0x21f750: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x21f750u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_21f754:
    // 0x21f754: 0x14440007  bne         $v0, $a0, . + 4 + (0x7 << 2)
label_21f758:
    if (ctx->pc == 0x21F758u) {
        ctx->pc = 0x21F75Cu;
        goto label_21f75c;
    }
    ctx->pc = 0x21F754u;
    {
        const bool branch_taken_0x21f754 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x21f754) {
            ctx->pc = 0x21F774u;
            goto label_21f774;
        }
    }
    ctx->pc = 0x21F75Cu;
label_21f75c:
    // 0x21f75c: 0x14440021  bne         $v0, $a0, . + 4 + (0x21 << 2)
label_21f760:
    if (ctx->pc == 0x21F760u) {
        ctx->pc = 0x21F764u;
        goto label_21f764;
    }
    ctx->pc = 0x21F75Cu;
    {
        const bool branch_taken_0x21f75c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x21f75c) {
            ctx->pc = 0x21F7E4u;
            goto label_21f7e4;
        }
    }
    ctx->pc = 0x21F764u;
label_21f764:
    // 0x21f764: 0xc0901c0  jal         func_240700
label_21f768:
    if (ctx->pc == 0x21F768u) {
        ctx->pc = 0x21F76Cu;
        goto label_21f76c;
    }
    ctx->pc = 0x21F764u;
    SET_GPR_U32(ctx, 31, 0x21F76Cu);
    ctx->pc = 0x240700u;
    { ctx->pc = 0x240700; return; }
    ctx->pc = 0x21F76Cu;
label_21f76c:
    // 0x21f76c: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_21f770:
    if (ctx->pc == 0x21F770u) {
        ctx->pc = 0x21F774u;
        goto label_21f774;
    }
    ctx->pc = 0x21F76Cu;
    {
        const bool branch_taken_0x21f76c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21f76c) {
            ctx->pc = 0x21F7E4u;
            goto label_21f7e4;
        }
    }
    ctx->pc = 0x21F774u;
label_21f774:
    // 0x21f774: 0x0  nop
    ctx->pc = 0x21f774u;
    // NOP
label_21f778:
    // 0x21f778: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x21f778u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_21f77c:
    // 0x21f77c: 0x90254910  lbu         $a1, 0x4910($at)
    ctx->pc = 0x21f77cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18704)));
label_21f780:
    // 0x21f780: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x21f780u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_21f784:
    // 0x21f784: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x21f784u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
label_21f788:
    // 0x21f788: 0x24040027  addiu       $a0, $zero, 0x27
    ctx->pc = 0x21f788u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
label_21f78c:
    // 0x21f78c: 0x2442da70  addiu       $v0, $v0, -0x2590
    ctx->pc = 0x21f78cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957680));
label_21f790:
    // 0x21f790: 0xa3001a  div         $zero, $a1, $v1
    ctx->pc = 0x21f790u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_21f794:
    // 0x21f794: 0x0  nop
    ctx->pc = 0x21f794u;
    // NOP
label_21f798:
    // 0x21f798: 0x0  nop
    ctx->pc = 0x21f798u;
    // NOP
label_21f79c:
    // 0x21f79c: 0x2810  mfhi        $a1
    ctx->pc = 0x21f79cu;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_21f7a0:
    // 0x21f7a0: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x21f7a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_21f7a4:
    // 0x21f7a4: 0x652823  subu        $a1, $v1, $a1
    ctx->pc = 0x21f7a4u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_21f7a8:
    // 0x21f7a8: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x21f7a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_21f7ac:
    // 0x21f7ac: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x21f7acu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_21f7b0:
    // 0x21f7b0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x21f7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_21f7b4:
    // 0x21f7b4: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x21f7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
label_21f7b8:
    // 0x21f7b8: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x21f7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_21f7bc:
    // 0x21f7bc: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x21f7bcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_21f7c0:
    // 0x21f7c0: 0x14440007  bne         $v0, $a0, . + 4 + (0x7 << 2)
label_21f7c4:
    if (ctx->pc == 0x21F7C4u) {
        ctx->pc = 0x21F7C8u;
        goto label_21f7c8;
    }
    ctx->pc = 0x21F7C0u;
    {
        const bool branch_taken_0x21f7c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x21f7c0) {
            ctx->pc = 0x21F7E0u;
            goto label_21f7e0;
        }
    }
    ctx->pc = 0x21F7C8u;
label_21f7c8:
    // 0x21f7c8: 0x14440006  bne         $v0, $a0, . + 4 + (0x6 << 2)
label_21f7cc:
    if (ctx->pc == 0x21F7CCu) {
        ctx->pc = 0x21F7D0u;
        goto label_21f7d0;
    }
    ctx->pc = 0x21F7C8u;
    {
        const bool branch_taken_0x21f7c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x21f7c8) {
            ctx->pc = 0x21F7E4u;
            goto label_21f7e4;
        }
    }
    ctx->pc = 0x21F7D0u;
label_21f7d0:
    // 0x21f7d0: 0xc0901c0  jal         func_240700
label_21f7d4:
    if (ctx->pc == 0x21F7D4u) {
        ctx->pc = 0x21F7D8u;
        goto label_21f7d8;
    }
    ctx->pc = 0x21F7D0u;
    SET_GPR_U32(ctx, 31, 0x21F7D8u);
    ctx->pc = 0x240700u;
    { ctx->pc = 0x240700; return; }
    ctx->pc = 0x21F7D8u;
label_21f7d8:
    // 0x21f7d8: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_21f7dc:
    if (ctx->pc == 0x21F7DCu) {
        ctx->pc = 0x21F7E0u;
        goto label_21f7e0;
    }
    ctx->pc = 0x21F7D8u;
    {
        const bool branch_taken_0x21f7d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21f7d8) {
            ctx->pc = 0x21F7E4u;
            goto label_21f7e4;
        }
    }
    ctx->pc = 0x21F7E0u;
label_21f7e0:
    // 0x21f7e0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x21f7e0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_21f7e4:
    // 0x21f7e4: 0x0  nop
    ctx->pc = 0x21f7e4u;
    // NOP
label_21f7e8:
    // 0x21f7e8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x21f7e8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_21f7ec:
    // 0x21f7ec: 0x2a420015  slti        $v0, $s2, 0x15
    ctx->pc = 0x21f7ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)21) ? 1 : 0);
label_21f7f0:
    // 0x21f7f0: 0x1440ffa8  bnez        $v0, . + 4 + (-0x58 << 2)
label_21f7f4:
    if (ctx->pc == 0x21F7F4u) {
        ctx->pc = 0x21F7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F7F0u;
        // 0x21f7f4: 0x11082a  slt         $at, $zero, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F7F8u;
        goto label_21f7f8;
    }
    ctx->pc = 0x21F7F0u;
    {
        const bool branch_taken_0x21f7f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21F7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F7F0u;
        // 0x21f7f4: 0x11082a  slt         $at, $zero, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f7f0) {
            ctx->pc = 0x21F694u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21f694;
        }
    }
    ctx->pc = 0x21F7F8u;
label_21f7f8:
    // 0x21f7f8: 0xc08f0cc  jal         func_23C330
label_21f7fc:
    if (ctx->pc == 0x21F7FCu) {
        ctx->pc = 0x21F800u;
        goto label_21f800;
    }
    ctx->pc = 0x21F7F8u;
    SET_GPR_U32(ctx, 31, 0x21F800u);
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x21F800u;
label_21f800:
    // 0x21f800: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x21f800u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_21f804:
    // 0x21f804: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x21f804u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21f808:
    // 0x21f808: 0x44930000  mtc1        $s3, $f0
    ctx->pc = 0x21f808u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_21f80c:
    // 0x21f80c: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x21f80cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21f810:
    // 0x21f810: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x21f810u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_21f814:
    // 0x21f814: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x21f814u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_21f818:
    // 0x21f818: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x21f818u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_21f81c:
    // 0x21f81c: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x21f81cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_21f820:
    // 0x21f820: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21f820u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_21f824:
    // 0x21f824: 0x0  nop
    ctx->pc = 0x21f824u;
    // NOP
label_21f828:
    // 0x21f828: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x21f828u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_21f82c:
    // 0x21f82c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x21f82cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_21f830:
    // 0x21f830: 0x44130000  mfc1        $s3, $f0
    ctx->pc = 0x21f830u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 19, bits); }
label_21f834:
    // 0x21f834: 0x11082a  slt         $at, $zero, $s1
    ctx->pc = 0x21f834u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_21f838:
    // 0x21f838: 0x1020001d  beqz        $at, . + 4 + (0x1D << 2)
label_21f83c:
    if (ctx->pc == 0x21F83Cu) {
        ctx->pc = 0x21F83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F838u;
        // 0x21f83c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F840u;
        goto label_21f840;
    }
    ctx->pc = 0x21F838u;
    {
        const bool branch_taken_0x21f838 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F838u;
        // 0x21f83c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f838) {
            ctx->pc = 0x21F8B0u;
            goto label_21f8b0;
        }
    }
    ctx->pc = 0x21F840u;
label_21f840:
    // 0x21f840: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x21f840u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21f844:
    // 0x21f844: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x21f844u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_21f848:
    // 0x21f848: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x21f848u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
label_21f84c:
    // 0x21f84c: 0x90244910  lbu         $a0, 0x4910($at)
    ctx->pc = 0x21f84cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18704)));
label_21f850:
    // 0x21f850: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x21f850u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_21f854:
    // 0x21f854: 0x2442da70  addiu       $v0, $v0, -0x2590
    ctx->pc = 0x21f854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957680));
label_21f858:
    // 0x21f858: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x21f858u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_21f85c:
    // 0x21f85c: 0x0  nop
    ctx->pc = 0x21f85cu;
    // NOP
label_21f860:
    // 0x21f860: 0x0  nop
    ctx->pc = 0x21f860u;
    // NOP
label_21f864:
    // 0x21f864: 0x2010  mfhi        $a0
    ctx->pc = 0x21f864u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_21f868:
    // 0x21f868: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x21f868u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_21f86c:
    // 0x21f86c: 0x642023  subu        $a0, $v1, $a0
    ctx->pc = 0x21f86cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_21f870:
    // 0x21f870: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x21f870u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_21f874:
    // 0x21f874: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x21f874u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_21f878:
    // 0x21f878: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x21f878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_21f87c:
    // 0x21f87c: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x21f87cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
label_21f880:
    // 0x21f880: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x21f880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_21f884:
    // 0x21f884: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x21f884u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_21f888:
    // 0x21f888: 0x0  nop
    ctx->pc = 0x21f888u;
    // NOP
label_21f88c:
    // 0x21f88c: 0x0  nop
    ctx->pc = 0x21f88cu;
    // NOP
label_21f890:
    // 0x21f890: 0x2051021  addu        $v0, $s0, $a1
    ctx->pc = 0x21f890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
label_21f894:
    // 0x21f894: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x21f894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_21f898:
    // 0x21f898: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_21f89c:
    if (ctx->pc == 0x21F89Cu) {
        ctx->pc = 0x21F8A0u;
        goto label_21f8a0;
    }
    ctx->pc = 0x21F898u;
    {
        const bool branch_taken_0x21f898 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x21f898) {
            ctx->pc = 0x21F8B0u;
            goto label_21f8b0;
        }
    }
    ctx->pc = 0x21F8A0u;
label_21f8a0:
    // 0x21f8a0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x21f8a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_21f8a4:
    // 0x21f8a4: 0xd1102a  slt         $v0, $a2, $s1
    ctx->pc = 0x21f8a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_21f8a8:
    // 0x21f8a8: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
label_21f8ac:
    if (ctx->pc == 0x21F8ACu) {
        ctx->pc = 0x21F8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F8A8u;
        // 0x21f8ac: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F8B0u;
        goto label_21f8b0;
    }
    ctx->pc = 0x21F8A8u;
    {
        const bool branch_taken_0x21f8a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21F8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F8A8u;
        // 0x21f8ac: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f8a8) {
            ctx->pc = 0x21F88Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21f88c;
        }
    }
    ctx->pc = 0x21F8B0u;
label_21f8b0:
    // 0x21f8b0: 0x14d10049  bne         $a2, $s1, . + 4 + (0x49 << 2)
label_21f8b4:
    if (ctx->pc == 0x21F8B4u) {
        ctx->pc = 0x21F8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F8B0u;
        // 0x21f8b4: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F8B8u;
        goto label_21f8b8;
    }
    ctx->pc = 0x21F8B0u;
    {
        const bool branch_taken_0x21f8b0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 17));
        ctx->pc = 0x21F8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F8B0u;
        // 0x21f8b4: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f8b0) {
            ctx->pc = 0x21F9D8u;
            goto label_21f9d8;
        }
    }
    ctx->pc = 0x21F8B8u;
label_21f8b8:
    // 0x21f8b8: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x21f8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
label_21f8bc:
    // 0x21f8bc: 0x90254910  lbu         $a1, 0x4910($at)
    ctx->pc = 0x21f8bcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18704)));
label_21f8c0:
    // 0x21f8c0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x21f8c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_21f8c4:
    // 0x21f8c4: 0x2442da70  addiu       $v0, $v0, -0x2590
    ctx->pc = 0x21f8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957680));
label_21f8c8:
    // 0x21f8c8: 0x24040028  addiu       $a0, $zero, 0x28
    ctx->pc = 0x21f8c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_21f8cc:
    // 0x21f8cc: 0xa3001a  div         $zero, $a1, $v1
    ctx->pc = 0x21f8ccu;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_21f8d0:
    // 0x21f8d0: 0x0  nop
    ctx->pc = 0x21f8d0u;
    // NOP
label_21f8d4:
    // 0x21f8d4: 0x0  nop
    ctx->pc = 0x21f8d4u;
    // NOP
label_21f8d8:
    // 0x21f8d8: 0x2810  mfhi        $a1
    ctx->pc = 0x21f8d8u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_21f8dc:
    // 0x21f8dc: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x21f8dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_21f8e0:
    // 0x21f8e0: 0x652823  subu        $a1, $v1, $a1
    ctx->pc = 0x21f8e0u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_21f8e4:
    // 0x21f8e4: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x21f8e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_21f8e8:
    // 0x21f8e8: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x21f8e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_21f8ec:
    // 0x21f8ec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x21f8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_21f8f0:
    // 0x21f8f0: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x21f8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
label_21f8f4:
    // 0x21f8f4: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x21f8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_21f8f8:
    // 0x21f8f8: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x21f8f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_21f8fc:
    // 0x21f8fc: 0x14440007  bne         $v0, $a0, . + 4 + (0x7 << 2)
label_21f900:
    if (ctx->pc == 0x21F900u) {
        ctx->pc = 0x21F904u;
        goto label_21f904;
    }
    ctx->pc = 0x21F8FCu;
    {
        const bool branch_taken_0x21f8fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x21f8fc) {
            ctx->pc = 0x21F91Cu;
            goto label_21f91c;
        }
    }
    ctx->pc = 0x21F904u;
label_21f904:
    // 0x21f904: 0x14440034  bne         $v0, $a0, . + 4 + (0x34 << 2)
label_21f908:
    if (ctx->pc == 0x21F908u) {
        ctx->pc = 0x21F90Cu;
        goto label_21f90c;
    }
    ctx->pc = 0x21F904u;
    {
        const bool branch_taken_0x21f904 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x21f904) {
            ctx->pc = 0x21F9D8u;
            goto label_21f9d8;
        }
    }
    ctx->pc = 0x21F90Cu;
label_21f90c:
    // 0x21f90c: 0xc0901c0  jal         func_240700
label_21f910:
    if (ctx->pc == 0x21F910u) {
        ctx->pc = 0x21F914u;
        goto label_21f914;
    }
    ctx->pc = 0x21F90Cu;
    SET_GPR_U32(ctx, 31, 0x21F914u);
    ctx->pc = 0x240700u;
    { ctx->pc = 0x240700; return; }
    ctx->pc = 0x21F914u;
label_21f914:
    // 0x21f914: 0x10400030  beqz        $v0, . + 4 + (0x30 << 2)
label_21f918:
    if (ctx->pc == 0x21F918u) {
        ctx->pc = 0x21F91Cu;
        goto label_21f91c;
    }
    ctx->pc = 0x21F914u;
    {
        const bool branch_taken_0x21f914 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21f914) {
            ctx->pc = 0x21F9D8u;
            goto label_21f9d8;
        }
    }
    ctx->pc = 0x21F91Cu;
label_21f91c:
    // 0x21f91c: 0x0  nop
    ctx->pc = 0x21f91cu;
    // NOP
label_21f920:
    // 0x21f920: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x21f920u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_21f924:
    // 0x21f924: 0x90254910  lbu         $a1, 0x4910($at)
    ctx->pc = 0x21f924u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18704)));
label_21f928:
    // 0x21f928: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x21f928u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_21f92c:
    // 0x21f92c: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x21f92cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
label_21f930:
    // 0x21f930: 0x24040027  addiu       $a0, $zero, 0x27
    ctx->pc = 0x21f930u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
label_21f934:
    // 0x21f934: 0x2442da70  addiu       $v0, $v0, -0x2590
    ctx->pc = 0x21f934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957680));
label_21f938:
    // 0x21f938: 0xa3001a  div         $zero, $a1, $v1
    ctx->pc = 0x21f938u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_21f93c:
    // 0x21f93c: 0x0  nop
    ctx->pc = 0x21f93cu;
    // NOP
label_21f940:
    // 0x21f940: 0x0  nop
    ctx->pc = 0x21f940u;
    // NOP
label_21f944:
    // 0x21f944: 0x2810  mfhi        $a1
    ctx->pc = 0x21f944u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_21f948:
    // 0x21f948: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x21f948u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_21f94c:
    // 0x21f94c: 0x652823  subu        $a1, $v1, $a1
    ctx->pc = 0x21f94cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_21f950:
    // 0x21f950: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x21f950u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_21f954:
    // 0x21f954: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x21f954u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_21f958:
    // 0x21f958: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x21f958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_21f95c:
    // 0x21f95c: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x21f95cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
label_21f960:
    // 0x21f960: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x21f960u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_21f964:
    // 0x21f964: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x21f964u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_21f968:
    // 0x21f968: 0x14440007  bne         $v0, $a0, . + 4 + (0x7 << 2)
label_21f96c:
    if (ctx->pc == 0x21F96Cu) {
        ctx->pc = 0x21F970u;
        goto label_21f970;
    }
    ctx->pc = 0x21F968u;
    {
        const bool branch_taken_0x21f968 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x21f968) {
            ctx->pc = 0x21F988u;
            goto label_21f988;
        }
    }
    ctx->pc = 0x21F970u;
label_21f970:
    // 0x21f970: 0x14440019  bne         $v0, $a0, . + 4 + (0x19 << 2)
label_21f974:
    if (ctx->pc == 0x21F974u) {
        ctx->pc = 0x21F978u;
        goto label_21f978;
    }
    ctx->pc = 0x21F970u;
    {
        const bool branch_taken_0x21f970 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x21f970) {
            ctx->pc = 0x21F9D8u;
            goto label_21f9d8;
        }
    }
    ctx->pc = 0x21F978u;
label_21f978:
    // 0x21f978: 0xc0901c0  jal         func_240700
label_21f97c:
    if (ctx->pc == 0x21F97Cu) {
        ctx->pc = 0x21F980u;
        goto label_21f980;
    }
    ctx->pc = 0x21F978u;
    SET_GPR_U32(ctx, 31, 0x21F980u);
    ctx->pc = 0x240700u;
    { ctx->pc = 0x240700; return; }
    ctx->pc = 0x21F980u;
label_21f980:
    // 0x21f980: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_21f984:
    if (ctx->pc == 0x21F984u) {
        ctx->pc = 0x21F988u;
        goto label_21f988;
    }
    ctx->pc = 0x21F980u;
    {
        const bool branch_taken_0x21f980 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21f980) {
            ctx->pc = 0x21F9D8u;
            goto label_21f9d8;
        }
    }
    ctx->pc = 0x21F988u;
label_21f988:
    // 0x21f988: 0x16530012  bne         $s2, $s3, . + 4 + (0x12 << 2)
label_21f98c:
    if (ctx->pc == 0x21F98Cu) {
        ctx->pc = 0x21F98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F988u;
        // 0x21f98c: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F990u;
        goto label_21f990;
    }
    ctx->pc = 0x21F988u;
    {
        const bool branch_taken_0x21f988 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 19));
        ctx->pc = 0x21F98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F988u;
        // 0x21f98c: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f988) {
            ctx->pc = 0x21F9D4u;
            goto label_21f9d4;
        }
    }
    ctx->pc = 0x21F990u;
label_21f990:
    // 0x21f990: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x21f990u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
label_21f994:
    // 0x21f994: 0x90244910  lbu         $a0, 0x4910($at)
    ctx->pc = 0x21f994u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18704)));
label_21f998:
    // 0x21f998: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x21f998u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_21f99c:
    // 0x21f99c: 0x2442da70  addiu       $v0, $v0, -0x2590
    ctx->pc = 0x21f99cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957680));
label_21f9a0:
    // 0x21f9a0: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x21f9a0u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_21f9a4:
    // 0x21f9a4: 0x0  nop
    ctx->pc = 0x21f9a4u;
    // NOP
label_21f9a8:
    // 0x21f9a8: 0x0  nop
    ctx->pc = 0x21f9a8u;
    // NOP
label_21f9ac:
    // 0x21f9ac: 0x2010  mfhi        $a0
    ctx->pc = 0x21f9acu;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_21f9b0:
    // 0x21f9b0: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x21f9b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_21f9b4:
    // 0x21f9b4: 0x642023  subu        $a0, $v1, $a0
    ctx->pc = 0x21f9b4u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_21f9b8:
    // 0x21f9b8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x21f9b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_21f9bc:
    // 0x21f9bc: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x21f9bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_21f9c0:
    // 0x21f9c0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x21f9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_21f9c4:
    // 0x21f9c4: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x21f9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
label_21f9c8:
    // 0x21f9c8: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x21f9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_21f9cc:
    // 0x21f9cc: 0x10000006  b           . + 4 + (0x6 << 2)
label_21f9d0:
    if (ctx->pc == 0x21F9D0u) {
        ctx->pc = 0x21F9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F9CCu;
        // 0x21f9d0: 0x90540000  lbu         $s4, 0x0($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 20, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F9D4u;
        goto label_21f9d4;
    }
    ctx->pc = 0x21F9CCu;
    {
        const bool branch_taken_0x21f9cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F9CCu;
        // 0x21f9d0: 0x90540000  lbu         $s4, 0x0($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 20, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f9cc) {
            ctx->pc = 0x21F9E8u;
            goto label_21f9e8;
        }
    }
    ctx->pc = 0x21F9D4u;
label_21f9d4:
    // 0x21f9d4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x21f9d4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_21f9d8:
    // 0x21f9d8: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x21f9d8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_21f9dc:
    // 0x21f9dc: 0x2aa20015  slti        $v0, $s5, 0x15
    ctx->pc = 0x21f9dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)21) ? 1 : 0);
label_21f9e0:
    // 0x21f9e0: 0x1440ff95  bnez        $v0, . + 4 + (-0x6B << 2)
label_21f9e4:
    if (ctx->pc == 0x21F9E4u) {
        ctx->pc = 0x21F9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F9E0u;
        // 0x21f9e4: 0x11082a  slt         $at, $zero, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F9E8u;
        goto label_21f9e8;
    }
    ctx->pc = 0x21F9E0u;
    {
        const bool branch_taken_0x21f9e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21F9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F9E0u;
        // 0x21f9e4: 0x11082a  slt         $at, $zero, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f9e0) {
            ctx->pc = 0x21F838u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21f838;
        }
    }
    ctx->pc = 0x21F9E8u;
label_21f9e8:
    // 0x21f9e8: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x21f9e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_21f9ec:
    // 0x21f9ec: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x21f9ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_21f9f0:
    // 0x21f9f0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x21f9f0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_21f9f4:
    // 0x21f9f4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x21f9f4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_21f9f8:
    // 0x21f9f8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x21f9f8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_21f9fc:
    // 0x21f9fc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x21f9fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_21fa00:
    // 0x21fa00: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x21fa00u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_21fa04:
    // 0x21fa04: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x21fa04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_21fa08:
    // 0x21fa08: 0x3e00008  jr          $ra
label_21fa0c:
    if (ctx->pc == 0x21FA0Cu) {
        ctx->pc = 0x21FA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FA08u;
        // 0x21fa0c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21FA10u;
        goto label_21fa10;
    }
    ctx->pc = 0x21FA08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21FA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FA08u;
        // 0x21fa0c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21FA08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21FA10u;
label_21fa10:
    // 0x21fa10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x21fa10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_21fa14:
    // 0x21fa14: 0x2403002d  addiu       $v1, $zero, 0x2D
    ctx->pc = 0x21fa14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
label_21fa18:
    // 0x21fa18: 0x10830276  beq         $a0, $v1, . + 4 + (0x276 << 2)
label_21fa1c:
    if (ctx->pc == 0x21FA1Cu) {
        ctx->pc = 0x21FA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FA18u;
        // 0x21fa1c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21FA20u;
        goto label_21fa20;
    }
    ctx->pc = 0x21FA18u;
    {
        const bool branch_taken_0x21fa18 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x21FA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FA18u;
        // 0x21fa1c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fa18) {
            ctx->pc = 0x2203F4u;
            { ctx->pc = 0x2203f4; return; }
        }
    }
    ctx->pc = 0x21FA20u;
label_21fa20:
    // 0x21fa20: 0x2403002c  addiu       $v1, $zero, 0x2C
    ctx->pc = 0x21fa20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
label_21fa24:
    // 0x21fa24: 0x1083022e  beq         $a0, $v1, . + 4 + (0x22E << 2)
label_21fa28:
    if (ctx->pc == 0x21FA28u) {
        ctx->pc = 0x21FA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FA24u;
        // 0x21fa28: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21FA2Cu;
        goto label_21fa2c;
    }
    ctx->pc = 0x21FA24u;
    {
        const bool branch_taken_0x21fa24 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x21FA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FA24u;
        // 0x21fa28: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fa24) {
            ctx->pc = 0x2202E0u;
            { ctx->pc = 0x2202e0; return; }
        }
    }
    ctx->pc = 0x21FA2Cu;
label_21fa2c:
    // 0x21fa2c: 0x2403002b  addiu       $v1, $zero, 0x2B
    ctx->pc = 0x21fa2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
label_21fa30:
    // 0x21fa30: 0x108301fd  beq         $a0, $v1, . + 4 + (0x1FD << 2)
label_21fa34:
    if (ctx->pc == 0x21FA34u) {
        ctx->pc = 0x21FA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FA30u;
        // 0x21fa34: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21FA38u;
        goto label_21fa38;
    }
    ctx->pc = 0x21FA30u;
    {
        const bool branch_taken_0x21fa30 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x21FA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FA30u;
        // 0x21fa34: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fa30) {
            ctx->pc = 0x220228u;
            { ctx->pc = 0x220228; return; }
        }
    }
    ctx->pc = 0x21FA38u;
label_21fa38:
    // 0x21fa38: 0x2403002a  addiu       $v1, $zero, 0x2A
    ctx->pc = 0x21fa38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
label_21fa3c:
    // 0x21fa3c: 0x108301ba  beq         $a0, $v1, . + 4 + (0x1BA << 2)
label_21fa40:
    if (ctx->pc == 0x21FA40u) {
        ctx->pc = 0x21FA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FA3Cu;
        // 0x21fa40: 0x24030029  addiu       $v1, $zero, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21FA44u;
        goto label_21fa44;
    }
    ctx->pc = 0x21FA3Cu;
    {
        const bool branch_taken_0x21fa3c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x21FA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FA3Cu;
        // 0x21fa40: 0x24030029  addiu       $v1, $zero, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fa3c) {
            ctx->pc = 0x220128u;
            { ctx->pc = 0x220128; return; }
        }
    }
    ctx->pc = 0x21FA44u;
label_21fa44:
    // 0x21fa44: 0x108301b8  beq         $a0, $v1, . + 4 + (0x1B8 << 2)
label_21fa48:
    if (ctx->pc == 0x21FA48u) {
        ctx->pc = 0x21FA4Cu;
        goto label_21fa4c;
    }
    ctx->pc = 0x21FA44u;
    {
        const bool branch_taken_0x21fa44 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x21fa44) {
            ctx->pc = 0x220128u;
            { ctx->pc = 0x220128; return; }
        }
    }
    ctx->pc = 0x21FA4Cu;
label_21fa4c:
    // 0x21fa4c: 0x24030028  addiu       $v1, $zero, 0x28
    ctx->pc = 0x21fa4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_21fa50:
    // 0x21fa50: 0x1083016a  beq         $a0, $v1, . + 4 + (0x16A << 2)
label_21fa54:
    if (ctx->pc == 0x21FA54u) {
        ctx->pc = 0x21FA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FA50u;
        // 0x21fa54: 0x24030027  addiu       $v1, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21FA58u;
        goto label_21fa58;
    }
    ctx->pc = 0x21FA50u;
    {
        const bool branch_taken_0x21fa50 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x21FA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FA50u;
        // 0x21fa54: 0x24030027  addiu       $v1, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fa50) {
            ctx->pc = 0x21FFFCu;
            { ctx->pc = 0x21fffc; return; }
        }
    }
    ctx->pc = 0x21FA58u;
label_21fa58:
    // 0x21fa58: 0x10830168  beq         $a0, $v1, . + 4 + (0x168 << 2)
label_21fa5c:
    if (ctx->pc == 0x21FA5Cu) {
        ctx->pc = 0x21FA60u;
        goto label_21fa60;
    }
    ctx->pc = 0x21FA58u;
    {
        const bool branch_taken_0x21fa58 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x21fa58) {
            ctx->pc = 0x21FFFCu;
            { ctx->pc = 0x21fffc; return; }
        }
    }
    ctx->pc = 0x21FA60u;
label_21fa60:
    // 0x21fa60: 0x24030026  addiu       $v1, $zero, 0x26
    ctx->pc = 0x21fa60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
label_21fa64:
    // 0x21fa64: 0x10830131  beq         $a0, $v1, . + 4 + (0x131 << 2)
label_21fa68:
    if (ctx->pc == 0x21FA68u) {
        ctx->pc = 0x21FA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FA64u;
        // 0x21fa68: 0x24030025  addiu       $v1, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21FA6Cu;
        goto label_21fa6c;
    }
    ctx->pc = 0x21FA64u;
    {
        const bool branch_taken_0x21fa64 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x21FA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FA64u;
        // 0x21fa68: 0x24030025  addiu       $v1, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fa64) {
            ctx->pc = 0x21FF2Cu;
            { ctx->pc = 0x21ff2c; return; }
        }
    }
    ctx->pc = 0x21FA6Cu;
label_21fa6c:
    // 0x21fa6c: 0x1083012f  beq         $a0, $v1, . + 4 + (0x12F << 2)
label_21fa70:
    if (ctx->pc == 0x21FA70u) {
        ctx->pc = 0x21FA74u;
        goto label_21fa74;
    }
    ctx->pc = 0x21FA6Cu;
    {
        const bool branch_taken_0x21fa6c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x21fa6c) {
            ctx->pc = 0x21FF2Cu;
            { ctx->pc = 0x21ff2c; return; }
        }
    }
    ctx->pc = 0x21FA74u;
label_21fa74:
    // 0x21fa74: 0x24030024  addiu       $v1, $zero, 0x24
    ctx->pc = 0x21fa74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
label_21fa78:
    // 0x21fa78: 0x10830103  beq         $a0, $v1, . + 4 + (0x103 << 2)
label_21fa7c:
    if (ctx->pc == 0x21FA7Cu) {
        ctx->pc = 0x21FA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FA78u;
        // 0x21fa7c: 0x24030023  addiu       $v1, $zero, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21FA80u;
        goto label_21fa80;
    }
    ctx->pc = 0x21FA78u;
    {
        const bool branch_taken_0x21fa78 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x21FA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FA78u;
        // 0x21fa7c: 0x24030023  addiu       $v1, $zero, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fa78) {
            ctx->pc = 0x21FE88u;
            { ctx->pc = 0x21fe88; return; }
        }
    }
    ctx->pc = 0x21FA80u;
label_21fa80:
    // 0x21fa80: 0x10830101  beq         $a0, $v1, . + 4 + (0x101 << 2)
label_21fa84:
    if (ctx->pc == 0x21FA84u) {
        ctx->pc = 0x21FA88u;
        goto label_21fa88;
    }
    ctx->pc = 0x21FA80u;
    {
        const bool branch_taken_0x21fa80 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x21fa80) {
            ctx->pc = 0x21FE88u;
            { ctx->pc = 0x21fe88; return; }
        }
    }
    ctx->pc = 0x21FA88u;
label_21fa88:
    // 0x21fa88: 0x2403001f  addiu       $v1, $zero, 0x1F
    ctx->pc = 0x21fa88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_21fa8c:
    // 0x21fa8c: 0x108300ca  beq         $a0, $v1, . + 4 + (0xCA << 2)
label_21fa90:
    if (ctx->pc == 0x21FA90u) {
        ctx->pc = 0x21FA90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FA8Cu;
        // 0x21fa90: 0x2403001e  addiu       $v1, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21FA94u;
        goto label_21fa94;
    }
    ctx->pc = 0x21FA8Cu;
    {
        const bool branch_taken_0x21fa8c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x21FA90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FA8Cu;
        // 0x21fa90: 0x2403001e  addiu       $v1, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fa8c) {
            ctx->pc = 0x21FDB8u;
            { ctx->pc = 0x21fdb8; return; }
        }
    }
    ctx->pc = 0x21FA94u;
label_21fa94:
    // 0x21fa94: 0x108300c8  beq         $a0, $v1, . + 4 + (0xC8 << 2)
label_21fa98:
    if (ctx->pc == 0x21FA98u) {
        ctx->pc = 0x21FA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FA94u;
        // 0x21fa98: 0x2405001d  addiu       $a1, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21FA9Cu;
        goto label_21fa9c;
    }
    ctx->pc = 0x21FA94u;
    {
        const bool branch_taken_0x21fa94 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x21FA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FA94u;
        // 0x21fa98: 0x2405001d  addiu       $a1, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fa94) {
            ctx->pc = 0x21FDB8u;
            { ctx->pc = 0x21fdb8; return; }
        }
    }
    ctx->pc = 0x21FA9Cu;
label_21fa9c:
    // 0x21fa9c: 0x108500be  beq         $a0, $a1, . + 4 + (0xBE << 2)
label_21faa0:
    if (ctx->pc == 0x21FAA0u) {
        ctx->pc = 0x21FAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FA9Cu;
        // 0x21faa0: 0x2403001c  addiu       $v1, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21FAA4u;
        goto label_21faa4;
    }
    ctx->pc = 0x21FA9Cu;
    {
        const bool branch_taken_0x21fa9c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        ctx->pc = 0x21FAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FA9Cu;
        // 0x21faa0: 0x2403001c  addiu       $v1, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fa9c) {
            ctx->pc = 0x21FD98u;
            { ctx->pc = 0x21fd98; return; }
        }
    }
    ctx->pc = 0x21FAA4u;
label_21faa4:
    // 0x21faa4: 0x108300bc  beq         $a0, $v1, . + 4 + (0xBC << 2)
label_21faa8:
    if (ctx->pc == 0x21FAA8u) {
        ctx->pc = 0x21FAACu;
        goto label_21faac;
    }
    ctx->pc = 0x21FAA4u;
    {
        const bool branch_taken_0x21faa4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x21faa4) {
            ctx->pc = 0x21FD98u;
            { ctx->pc = 0x21fd98; return; }
        }
    }
    ctx->pc = 0x21FAACu;
label_21faac:
    // 0x21faac: 0x2403001b  addiu       $v1, $zero, 0x1B
    ctx->pc = 0x21faacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
label_21fab0:
    // 0x21fab0: 0x108300b1  beq         $a0, $v1, . + 4 + (0xB1 << 2)
label_21fab4:
    if (ctx->pc == 0x21FAB4u) {
        ctx->pc = 0x21FAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FAB0u;
        // 0x21fab4: 0x2403001a  addiu       $v1, $zero, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21FAB8u;
        goto label_21fab8;
    }
    ctx->pc = 0x21FAB0u;
    {
        const bool branch_taken_0x21fab0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x21FAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FAB0u;
        // 0x21fab4: 0x2403001a  addiu       $v1, $zero, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fab0) {
            ctx->pc = 0x21FD78u;
            { ctx->pc = 0x21fd78; return; }
        }
    }
    ctx->pc = 0x21FAB8u;
label_21fab8:
    // 0x21fab8: 0x108300af  beq         $a0, $v1, . + 4 + (0xAF << 2)
label_21fabc:
    if (ctx->pc == 0x21FABCu) {
        ctx->pc = 0x21FAC0u;
        goto label_21fac0;
    }
    ctx->pc = 0x21FAB8u;
    {
        const bool branch_taken_0x21fab8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x21fab8) {
            ctx->pc = 0x21FD78u;
            { ctx->pc = 0x21fd78; return; }
        }
    }
    ctx->pc = 0x21FAC0u;
label_21fac0:
    // 0x21fac0: 0x24030019  addiu       $v1, $zero, 0x19
    ctx->pc = 0x21fac0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
label_21fac4:
    // 0x21fac4: 0x108300ac  beq         $a0, $v1, . + 4 + (0xAC << 2)
label_21fac8:
    if (ctx->pc == 0x21FAC8u) {
        ctx->pc = 0x21FAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FAC4u;
        // 0x21fac8: 0x24030018  addiu       $v1, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21FACCu;
        goto label_21facc;
    }
    ctx->pc = 0x21FAC4u;
    {
        const bool branch_taken_0x21fac4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x21FAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FAC4u;
        // 0x21fac8: 0x24030018  addiu       $v1, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fac4) {
            ctx->pc = 0x21FD78u;
            { ctx->pc = 0x21fd78; return; }
        }
    }
    ctx->pc = 0x21FACCu;
label_21facc:
    // 0x21facc: 0x1083007e  beq         $a0, $v1, . + 4 + (0x7E << 2)
label_21fad0:
    if (ctx->pc == 0x21FAD0u) {
        ctx->pc = 0x21FAD4u;
        goto label_21fad4;
    }
    ctx->pc = 0x21FACCu;
    {
        const bool branch_taken_0x21facc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x21facc) {
            ctx->pc = 0x21FCC8u;
            { ctx->pc = 0x21fcc8; return; }
        }
    }
    ctx->pc = 0x21FAD4u;
label_21fad4:
    // 0x21fad4: 0x24030017  addiu       $v1, $zero, 0x17
    ctx->pc = 0x21fad4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
label_21fad8:
    // 0x21fad8: 0x1083007b  beq         $a0, $v1, . + 4 + (0x7B << 2)
label_21fadc:
    if (ctx->pc == 0x21FADCu) {
        ctx->pc = 0x21FADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FAD8u;
        // 0x21fadc: 0x24060016  addiu       $a2, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21FAE0u;
        goto label_21fae0;
    }
    ctx->pc = 0x21FAD8u;
    {
        const bool branch_taken_0x21fad8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x21FADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FAD8u;
        // 0x21fadc: 0x24060016  addiu       $a2, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fad8) {
            ctx->pc = 0x21FCC8u;
            { ctx->pc = 0x21fcc8; return; }
        }
    }
    ctx->pc = 0x21FAE0u;
label_21fae0:
    // 0x21fae0: 0x10860071  beq         $a0, $a2, . + 4 + (0x71 << 2)
label_21fae4:
    if (ctx->pc == 0x21FAE4u) {
        ctx->pc = 0x21FAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FAE0u;
        // 0x21fae4: 0x24030015  addiu       $v1, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21FAE8u;
        goto label_21fae8;
    }
    ctx->pc = 0x21FAE0u;
    {
        const bool branch_taken_0x21fae0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 6));
        ctx->pc = 0x21FAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FAE0u;
        // 0x21fae4: 0x24030015  addiu       $v1, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fae0) {
            ctx->pc = 0x21FCA8u;
            { ctx->pc = 0x21fca8; return; }
        }
    }
    ctx->pc = 0x21FAE8u;
label_21fae8:
    // 0x21fae8: 0x1083006f  beq         $a0, $v1, . + 4 + (0x6F << 2)
label_21faec:
    if (ctx->pc == 0x21FAECu) {
        ctx->pc = 0x21FAF0u;
        goto label_21faf0;
    }
    ctx->pc = 0x21FAE8u;
    {
        const bool branch_taken_0x21fae8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x21fae8) {
            ctx->pc = 0x21FCA8u;
            { ctx->pc = 0x21fca8; return; }
        }
    }
    ctx->pc = 0x21FAF0u;
label_21faf0:
    // 0x21faf0: 0x24030012  addiu       $v1, $zero, 0x12
    ctx->pc = 0x21faf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_21faf4:
    // 0x21faf4: 0x10830048  beq         $a0, $v1, . + 4 + (0x48 << 2)
label_21faf8:
    if (ctx->pc == 0x21FAF8u) {
        ctx->pc = 0x21FAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FAF4u;
        // 0x21faf8: 0x24030011  addiu       $v1, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21FAFCu;
        goto label_21fafc;
    }
    ctx->pc = 0x21FAF4u;
    {
        const bool branch_taken_0x21faf4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x21FAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FAF4u;
        // 0x21faf8: 0x24030011  addiu       $v1, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21faf4) {
            ctx->pc = 0x21FC18u;
            { ctx->pc = 0x21fc18; return; }
        }
    }
    ctx->pc = 0x21FAFCu;
label_21fafc:
    // 0x21fafc: 0x10830046  beq         $a0, $v1, . + 4 + (0x46 << 2)
label_21fb00:
    if (ctx->pc == 0x21FB00u) {
        ctx->pc = 0x21FB04u;
        goto label_21fb04;
    }
    ctx->pc = 0x21FAFCu;
    {
        const bool branch_taken_0x21fafc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x21fafc) {
            ctx->pc = 0x21FC18u;
            { ctx->pc = 0x21fc18; return; }
        }
    }
    ctx->pc = 0x21FB04u;
label_21fb04:
    // 0x21fb04: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x21fb04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_21fb08:
    // 0x21fb08: 0x10830043  beq         $a0, $v1, . + 4 + (0x43 << 2)
label_21fb0c:
    if (ctx->pc == 0x21FB0Cu) {
        ctx->pc = 0x21FB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FB08u;
        // 0x21fb0c: 0x2403000f  addiu       $v1, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21FB10u;
        goto label_21fb10;
    }
    ctx->pc = 0x21FB08u;
    {
        const bool branch_taken_0x21fb08 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x21FB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FB08u;
        // 0x21fb0c: 0x2403000f  addiu       $v1, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fb08) {
            ctx->pc = 0x21FC18u;
            { ctx->pc = 0x21fc18; return; }
        }
    }
    ctx->pc = 0x21FB10u;
label_21fb10:
    // 0x21fb10: 0x10830039  beq         $a0, $v1, . + 4 + (0x39 << 2)
label_21fb14:
    if (ctx->pc == 0x21FB14u) {
        ctx->pc = 0x21FB18u;
        { ctx->pc = 0x21fb18; return; }
    }
    ctx->pc = 0x21FB10u;
    {
        const bool branch_taken_0x21fb10 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x21fb10) {
            ctx->pc = 0x21FBF8u;
            { ctx->pc = 0x21fbf8; return; }
        }
    }
    ctx->pc = 0x21FB18u;
    ctx->pc = 0x21fb18u;
    return;
}
