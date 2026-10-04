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

// Function: FUN_0017d410
// Address: 0x17d410 - 0x27d534
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0017d410_part5(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x17f350u: goto label_17f350;
        case 0x17f354u: goto label_17f354;
        case 0x17f358u: goto label_17f358;
        case 0x17f35cu: goto label_17f35c;
        case 0x17f360u: goto label_17f360;
        case 0x17f364u: goto label_17f364;
        case 0x17f368u: goto label_17f368;
        case 0x17f36cu: goto label_17f36c;
        case 0x17f370u: goto label_17f370;
        case 0x17f374u: goto label_17f374;
        case 0x17f378u: goto label_17f378;
        case 0x17f37cu: goto label_17f37c;
        case 0x17f380u: goto label_17f380;
        case 0x17f384u: goto label_17f384;
        case 0x17f388u: goto label_17f388;
        case 0x17f38cu: goto label_17f38c;
        case 0x17f390u: goto label_17f390;
        case 0x17f394u: goto label_17f394;
        case 0x17f398u: goto label_17f398;
        case 0x17f39cu: goto label_17f39c;
        case 0x17f3a0u: goto label_17f3a0;
        case 0x17f3a4u: goto label_17f3a4;
        case 0x17f3a8u: goto label_17f3a8;
        case 0x17f3acu: goto label_17f3ac;
        case 0x17f3b0u: goto label_17f3b0;
        case 0x17f3b4u: goto label_17f3b4;
        case 0x17f3b8u: goto label_17f3b8;
        case 0x17f3bcu: goto label_17f3bc;
        case 0x17f3c0u: goto label_17f3c0;
        case 0x17f3c4u: goto label_17f3c4;
        case 0x17f3c8u: goto label_17f3c8;
        case 0x17f3ccu: goto label_17f3cc;
        case 0x17f3d0u: goto label_17f3d0;
        case 0x17f3d4u: goto label_17f3d4;
        case 0x17f3d8u: goto label_17f3d8;
        case 0x17f3dcu: goto label_17f3dc;
        case 0x17f3e0u: goto label_17f3e0;
        case 0x17f3e4u: goto label_17f3e4;
        case 0x17f3e8u: goto label_17f3e8;
        case 0x17f3ecu: goto label_17f3ec;
        case 0x17f3f0u: goto label_17f3f0;
        case 0x17f3f4u: goto label_17f3f4;
        case 0x17f3f8u: goto label_17f3f8;
        case 0x17f3fcu: goto label_17f3fc;
        case 0x17f400u: goto label_17f400;
        case 0x17f404u: goto label_17f404;
        case 0x17f408u: goto label_17f408;
        case 0x17f40cu: goto label_17f40c;
        case 0x17f410u: goto label_17f410;
        case 0x17f414u: goto label_17f414;
        case 0x17f418u: goto label_17f418;
        case 0x17f41cu: goto label_17f41c;
        case 0x17f420u: goto label_17f420;
        case 0x17f424u: goto label_17f424;
        case 0x17f428u: goto label_17f428;
        case 0x17f42cu: goto label_17f42c;
        case 0x17f430u: goto label_17f430;
        case 0x17f434u: goto label_17f434;
        case 0x17f438u: goto label_17f438;
        case 0x17f43cu: goto label_17f43c;
        case 0x17f440u: goto label_17f440;
        case 0x17f444u: goto label_17f444;
        case 0x17f448u: goto label_17f448;
        case 0x17f44cu: goto label_17f44c;
        case 0x17f450u: goto label_17f450;
        case 0x17f454u: goto label_17f454;
        case 0x17f458u: goto label_17f458;
        case 0x17f45cu: goto label_17f45c;
        case 0x17f460u: goto label_17f460;
        case 0x17f464u: goto label_17f464;
        case 0x17f468u: goto label_17f468;
        case 0x17f46cu: goto label_17f46c;
        case 0x17f470u: goto label_17f470;
        case 0x17f474u: goto label_17f474;
        case 0x17f478u: goto label_17f478;
        case 0x17f47cu: goto label_17f47c;
        case 0x17f480u: goto label_17f480;
        case 0x17f484u: goto label_17f484;
        case 0x17f488u: goto label_17f488;
        case 0x17f48cu: goto label_17f48c;
        case 0x17f490u: goto label_17f490;
        case 0x17f494u: goto label_17f494;
        case 0x17f498u: goto label_17f498;
        case 0x17f49cu: goto label_17f49c;
        case 0x17f4a0u: goto label_17f4a0;
        case 0x17f4a4u: goto label_17f4a4;
        case 0x17f4a8u: goto label_17f4a8;
        case 0x17f4acu: goto label_17f4ac;
        case 0x17f4b0u: goto label_17f4b0;
        case 0x17f4b4u: goto label_17f4b4;
        case 0x17f4b8u: goto label_17f4b8;
        case 0x17f4bcu: goto label_17f4bc;
        case 0x17f4c0u: goto label_17f4c0;
        case 0x17f4c4u: goto label_17f4c4;
        case 0x17f4c8u: goto label_17f4c8;
        case 0x17f4ccu: goto label_17f4cc;
        case 0x17f4d0u: goto label_17f4d0;
        case 0x17f4d4u: goto label_17f4d4;
        case 0x17f4d8u: goto label_17f4d8;
        case 0x17f4dcu: goto label_17f4dc;
        case 0x17f4e0u: goto label_17f4e0;
        case 0x17f4e4u: goto label_17f4e4;
        case 0x17f4e8u: goto label_17f4e8;
        case 0x17f4ecu: goto label_17f4ec;
        case 0x17f4f0u: goto label_17f4f0;
        case 0x17f4f4u: goto label_17f4f4;
        case 0x17f4f8u: goto label_17f4f8;
        case 0x17f4fcu: goto label_17f4fc;
        case 0x17f500u: goto label_17f500;
        case 0x17f504u: goto label_17f504;
        case 0x17f508u: goto label_17f508;
        case 0x17f50cu: goto label_17f50c;
        case 0x17f510u: goto label_17f510;
        case 0x17f514u: goto label_17f514;
        case 0x17f518u: goto label_17f518;
        case 0x17f51cu: goto label_17f51c;
        case 0x17f520u: goto label_17f520;
        case 0x17f524u: goto label_17f524;
        case 0x17f528u: goto label_17f528;
        case 0x17f52cu: goto label_17f52c;
        case 0x17f530u: goto label_17f530;
        case 0x17f534u: goto label_17f534;
        case 0x17f538u: goto label_17f538;
        case 0x17f53cu: goto label_17f53c;
        case 0x17f540u: goto label_17f540;
        case 0x17f544u: goto label_17f544;
        case 0x17f548u: goto label_17f548;
        case 0x17f54cu: goto label_17f54c;
        case 0x17f550u: goto label_17f550;
        case 0x17f554u: goto label_17f554;
        case 0x17f558u: goto label_17f558;
        case 0x17f55cu: goto label_17f55c;
        case 0x17f560u: goto label_17f560;
        case 0x17f564u: goto label_17f564;
        case 0x17f568u: goto label_17f568;
        case 0x17f56cu: goto label_17f56c;
        case 0x17f570u: goto label_17f570;
        case 0x17f574u: goto label_17f574;
        case 0x17f578u: goto label_17f578;
        case 0x17f57cu: goto label_17f57c;
        case 0x17f580u: goto label_17f580;
        case 0x17f584u: goto label_17f584;
        case 0x17f588u: goto label_17f588;
        case 0x17f58cu: goto label_17f58c;
        case 0x17f590u: goto label_17f590;
        case 0x17f594u: goto label_17f594;
        case 0x17f598u: goto label_17f598;
        case 0x17f59cu: goto label_17f59c;
        case 0x17f5a0u: goto label_17f5a0;
        case 0x17f5a4u: goto label_17f5a4;
        case 0x17f5a8u: goto label_17f5a8;
        case 0x17f5acu: goto label_17f5ac;
        case 0x17f5b0u: goto label_17f5b0;
        case 0x17f5b4u: goto label_17f5b4;
        case 0x17f5b8u: goto label_17f5b8;
        case 0x17f5bcu: goto label_17f5bc;
        case 0x17f5c0u: goto label_17f5c0;
        case 0x17f5c4u: goto label_17f5c4;
        case 0x17f5c8u: goto label_17f5c8;
        case 0x17f5ccu: goto label_17f5cc;
        case 0x17f5d0u: goto label_17f5d0;
        case 0x17f5d4u: goto label_17f5d4;
        case 0x17f5d8u: goto label_17f5d8;
        case 0x17f5dcu: goto label_17f5dc;
        case 0x17f5e0u: goto label_17f5e0;
        case 0x17f5e4u: goto label_17f5e4;
        case 0x17f5e8u: goto label_17f5e8;
        case 0x17f5ecu: goto label_17f5ec;
        case 0x17f5f0u: goto label_17f5f0;
        case 0x17f5f4u: goto label_17f5f4;
        case 0x17f5f8u: goto label_17f5f8;
        case 0x17f5fcu: goto label_17f5fc;
        case 0x17f600u: goto label_17f600;
        case 0x17f604u: goto label_17f604;
        case 0x17f608u: goto label_17f608;
        case 0x17f60cu: goto label_17f60c;
        case 0x17f610u: goto label_17f610;
        case 0x17f614u: goto label_17f614;
        case 0x17f618u: goto label_17f618;
        case 0x17f61cu: goto label_17f61c;
        case 0x17f620u: goto label_17f620;
        case 0x17f624u: goto label_17f624;
        case 0x17f628u: goto label_17f628;
        case 0x17f62cu: goto label_17f62c;
        case 0x17f630u: goto label_17f630;
        case 0x17f634u: goto label_17f634;
        case 0x17f638u: goto label_17f638;
        case 0x17f63cu: goto label_17f63c;
        case 0x17f640u: goto label_17f640;
        case 0x17f644u: goto label_17f644;
        case 0x17f648u: goto label_17f648;
        case 0x17f64cu: goto label_17f64c;
        case 0x17f650u: goto label_17f650;
        case 0x17f654u: goto label_17f654;
        case 0x17f658u: goto label_17f658;
        case 0x17f65cu: goto label_17f65c;
        case 0x17f660u: goto label_17f660;
        case 0x17f664u: goto label_17f664;
        case 0x17f668u: goto label_17f668;
        case 0x17f66cu: goto label_17f66c;
        case 0x17f670u: goto label_17f670;
        case 0x17f674u: goto label_17f674;
        case 0x17f678u: goto label_17f678;
        case 0x17f67cu: goto label_17f67c;
        case 0x17f680u: goto label_17f680;
        case 0x17f684u: goto label_17f684;
        case 0x17f688u: goto label_17f688;
        case 0x17f68cu: goto label_17f68c;
        case 0x17f690u: goto label_17f690;
        case 0x17f694u: goto label_17f694;
        case 0x17f698u: goto label_17f698;
        case 0x17f69cu: goto label_17f69c;
        case 0x17f6a0u: goto label_17f6a0;
        case 0x17f6a4u: goto label_17f6a4;
        case 0x17f6a8u: goto label_17f6a8;
        case 0x17f6acu: goto label_17f6ac;
        case 0x17f6b0u: goto label_17f6b0;
        case 0x17f6b4u: goto label_17f6b4;
        case 0x17f6b8u: goto label_17f6b8;
        case 0x17f6bcu: goto label_17f6bc;
        case 0x17f6c0u: goto label_17f6c0;
        case 0x17f6c4u: goto label_17f6c4;
        case 0x17f6c8u: goto label_17f6c8;
        case 0x17f6ccu: goto label_17f6cc;
        case 0x17f6d0u: goto label_17f6d0;
        case 0x17f6d4u: goto label_17f6d4;
        case 0x17f6d8u: goto label_17f6d8;
        case 0x17f6dcu: goto label_17f6dc;
        case 0x17f6e0u: goto label_17f6e0;
        case 0x17f6e4u: goto label_17f6e4;
        case 0x17f6e8u: goto label_17f6e8;
        case 0x17f6ecu: goto label_17f6ec;
        case 0x17f6f0u: goto label_17f6f0;
        case 0x17f6f4u: goto label_17f6f4;
        case 0x17f6f8u: goto label_17f6f8;
        case 0x17f6fcu: goto label_17f6fc;
        case 0x17f700u: goto label_17f700;
        case 0x17f704u: goto label_17f704;
        case 0x17f708u: goto label_17f708;
        case 0x17f70cu: goto label_17f70c;
        case 0x17f710u: goto label_17f710;
        case 0x17f714u: goto label_17f714;
        case 0x17f718u: goto label_17f718;
        case 0x17f71cu: goto label_17f71c;
        case 0x17f720u: goto label_17f720;
        case 0x17f724u: goto label_17f724;
        case 0x17f728u: goto label_17f728;
        case 0x17f72cu: goto label_17f72c;
        case 0x17f730u: goto label_17f730;
        case 0x17f734u: goto label_17f734;
        case 0x17f738u: goto label_17f738;
        case 0x17f73cu: goto label_17f73c;
        case 0x17f740u: goto label_17f740;
        case 0x17f744u: goto label_17f744;
        case 0x17f748u: goto label_17f748;
        case 0x17f74cu: goto label_17f74c;
        case 0x17f750u: goto label_17f750;
        case 0x17f754u: goto label_17f754;
        case 0x17f758u: goto label_17f758;
        case 0x17f75cu: goto label_17f75c;
        case 0x17f760u: goto label_17f760;
        case 0x17f764u: goto label_17f764;
        case 0x17f768u: goto label_17f768;
        case 0x17f76cu: goto label_17f76c;
        case 0x17f770u: goto label_17f770;
        case 0x17f774u: goto label_17f774;
        case 0x17f778u: goto label_17f778;
        case 0x17f77cu: goto label_17f77c;
        case 0x17f780u: goto label_17f780;
        case 0x17f784u: goto label_17f784;
        case 0x17f788u: goto label_17f788;
        case 0x17f78cu: goto label_17f78c;
        case 0x17f790u: goto label_17f790;
        case 0x17f794u: goto label_17f794;
        case 0x17f798u: goto label_17f798;
        case 0x17f79cu: goto label_17f79c;
        case 0x17f7a0u: goto label_17f7a0;
        case 0x17f7a4u: goto label_17f7a4;
        case 0x17f7a8u: goto label_17f7a8;
        case 0x17f7acu: goto label_17f7ac;
        case 0x17f7b0u: goto label_17f7b0;
        case 0x17f7b4u: goto label_17f7b4;
        case 0x17f7b8u: goto label_17f7b8;
        case 0x17f7bcu: goto label_17f7bc;
        case 0x17f7c0u: goto label_17f7c0;
        case 0x17f7c4u: goto label_17f7c4;
        case 0x17f7c8u: goto label_17f7c8;
        case 0x17f7ccu: goto label_17f7cc;
        case 0x17f7d0u: goto label_17f7d0;
        case 0x17f7d4u: goto label_17f7d4;
        case 0x17f7d8u: goto label_17f7d8;
        case 0x17f7dcu: goto label_17f7dc;
        case 0x17f7e0u: goto label_17f7e0;
        case 0x17f7e4u: goto label_17f7e4;
        case 0x17f7e8u: goto label_17f7e8;
        case 0x17f7ecu: goto label_17f7ec;
        case 0x17f7f0u: goto label_17f7f0;
        case 0x17f7f4u: goto label_17f7f4;
        case 0x17f7f8u: goto label_17f7f8;
        case 0x17f7fcu: goto label_17f7fc;
        case 0x17f800u: goto label_17f800;
        case 0x17f804u: goto label_17f804;
        case 0x17f808u: goto label_17f808;
        case 0x17f80cu: goto label_17f80c;
        case 0x17f810u: goto label_17f810;
        case 0x17f814u: goto label_17f814;
        case 0x17f818u: goto label_17f818;
        case 0x17f81cu: goto label_17f81c;
        case 0x17f820u: goto label_17f820;
        case 0x17f824u: goto label_17f824;
        case 0x17f828u: goto label_17f828;
        case 0x17f82cu: goto label_17f82c;
        case 0x17f830u: goto label_17f830;
        case 0x17f834u: goto label_17f834;
        case 0x17f838u: goto label_17f838;
        case 0x17f83cu: goto label_17f83c;
        case 0x17f840u: goto label_17f840;
        case 0x17f844u: goto label_17f844;
        case 0x17f848u: goto label_17f848;
        case 0x17f84cu: goto label_17f84c;
        case 0x17f850u: goto label_17f850;
        case 0x17f854u: goto label_17f854;
        case 0x17f858u: goto label_17f858;
        case 0x17f85cu: goto label_17f85c;
        case 0x17f860u: goto label_17f860;
        case 0x17f864u: goto label_17f864;
        case 0x17f868u: goto label_17f868;
        case 0x17f86cu: goto label_17f86c;
        case 0x17f870u: goto label_17f870;
        case 0x17f874u: goto label_17f874;
        case 0x17f878u: goto label_17f878;
        case 0x17f87cu: goto label_17f87c;
        case 0x17f880u: goto label_17f880;
        case 0x17f884u: goto label_17f884;
        case 0x17f888u: goto label_17f888;
        case 0x17f88cu: goto label_17f88c;
        case 0x17f890u: goto label_17f890;
        case 0x17f894u: goto label_17f894;
        case 0x17f898u: goto label_17f898;
        case 0x17f89cu: goto label_17f89c;
        case 0x17f8a0u: goto label_17f8a0;
        case 0x17f8a4u: goto label_17f8a4;
        case 0x17f8a8u: goto label_17f8a8;
        case 0x17f8acu: goto label_17f8ac;
        case 0x17f8b0u: goto label_17f8b0;
        case 0x17f8b4u: goto label_17f8b4;
        case 0x17f8b8u: goto label_17f8b8;
        case 0x17f8bcu: goto label_17f8bc;
        case 0x17f8c0u: goto label_17f8c0;
        case 0x17f8c4u: goto label_17f8c4;
        case 0x17f8c8u: goto label_17f8c8;
        case 0x17f8ccu: goto label_17f8cc;
        case 0x17f8d0u: goto label_17f8d0;
        case 0x17f8d4u: goto label_17f8d4;
        case 0x17f8d8u: goto label_17f8d8;
        case 0x17f8dcu: goto label_17f8dc;
        case 0x17f8e0u: goto label_17f8e0;
        case 0x17f8e4u: goto label_17f8e4;
        case 0x17f8e8u: goto label_17f8e8;
        case 0x17f8ecu: goto label_17f8ec;
        case 0x17f8f0u: goto label_17f8f0;
        case 0x17f8f4u: goto label_17f8f4;
        case 0x17f8f8u: goto label_17f8f8;
        case 0x17f8fcu: goto label_17f8fc;
        case 0x17f900u: goto label_17f900;
        case 0x17f904u: goto label_17f904;
        case 0x17f908u: goto label_17f908;
        case 0x17f90cu: goto label_17f90c;
        case 0x17f910u: goto label_17f910;
        case 0x17f914u: goto label_17f914;
        case 0x17f918u: goto label_17f918;
        case 0x17f91cu: goto label_17f91c;
        case 0x17f920u: goto label_17f920;
        case 0x17f924u: goto label_17f924;
        case 0x17f928u: goto label_17f928;
        case 0x17f92cu: goto label_17f92c;
        case 0x17f930u: goto label_17f930;
        case 0x17f934u: goto label_17f934;
        case 0x17f938u: goto label_17f938;
        case 0x17f93cu: goto label_17f93c;
        case 0x17f940u: goto label_17f940;
        case 0x17f944u: goto label_17f944;
        case 0x17f948u: goto label_17f948;
        case 0x17f94cu: goto label_17f94c;
        case 0x17f950u: goto label_17f950;
        case 0x17f954u: goto label_17f954;
        case 0x17f958u: goto label_17f958;
        case 0x17f95cu: goto label_17f95c;
        case 0x17f960u: goto label_17f960;
        case 0x17f964u: goto label_17f964;
        case 0x17f968u: goto label_17f968;
        case 0x17f96cu: goto label_17f96c;
        case 0x17f970u: goto label_17f970;
        case 0x17f974u: goto label_17f974;
        case 0x17f978u: goto label_17f978;
        case 0x17f97cu: goto label_17f97c;
        case 0x17f980u: goto label_17f980;
        case 0x17f984u: goto label_17f984;
        case 0x17f988u: goto label_17f988;
        case 0x17f98cu: goto label_17f98c;
        case 0x17f990u: goto label_17f990;
        case 0x17f994u: goto label_17f994;
        case 0x17f998u: goto label_17f998;
        case 0x17f99cu: goto label_17f99c;
        case 0x17f9a0u: goto label_17f9a0;
        case 0x17f9a4u: goto label_17f9a4;
        case 0x17f9a8u: goto label_17f9a8;
        case 0x17f9acu: goto label_17f9ac;
        case 0x17f9b0u: goto label_17f9b0;
        case 0x17f9b4u: goto label_17f9b4;
        case 0x17f9b8u: goto label_17f9b8;
        case 0x17f9bcu: goto label_17f9bc;
        case 0x17f9c0u: goto label_17f9c0;
        case 0x17f9c4u: goto label_17f9c4;
        case 0x17f9c8u: goto label_17f9c8;
        case 0x17f9ccu: goto label_17f9cc;
        case 0x17f9d0u: goto label_17f9d0;
        case 0x17f9d4u: goto label_17f9d4;
        case 0x17f9d8u: goto label_17f9d8;
        case 0x17f9dcu: goto label_17f9dc;
        case 0x17f9e0u: goto label_17f9e0;
        case 0x17f9e4u: goto label_17f9e4;
        case 0x17f9e8u: goto label_17f9e8;
        case 0x17f9ecu: goto label_17f9ec;
        case 0x17f9f0u: goto label_17f9f0;
        case 0x17f9f4u: goto label_17f9f4;
        case 0x17f9f8u: goto label_17f9f8;
        case 0x17f9fcu: goto label_17f9fc;
        case 0x17fa00u: goto label_17fa00;
        case 0x17fa04u: goto label_17fa04;
        case 0x17fa08u: goto label_17fa08;
        case 0x17fa0cu: goto label_17fa0c;
        case 0x17fa10u: goto label_17fa10;
        case 0x17fa14u: goto label_17fa14;
        case 0x17fa18u: goto label_17fa18;
        case 0x17fa1cu: goto label_17fa1c;
        case 0x17fa20u: goto label_17fa20;
        case 0x17fa24u: goto label_17fa24;
        case 0x17fa28u: goto label_17fa28;
        case 0x17fa2cu: goto label_17fa2c;
        case 0x17fa30u: goto label_17fa30;
        case 0x17fa34u: goto label_17fa34;
        case 0x17fa38u: goto label_17fa38;
        case 0x17fa3cu: goto label_17fa3c;
        case 0x17fa40u: goto label_17fa40;
        case 0x17fa44u: goto label_17fa44;
        case 0x17fa48u: goto label_17fa48;
        case 0x17fa4cu: goto label_17fa4c;
        case 0x17fa50u: goto label_17fa50;
        case 0x17fa54u: goto label_17fa54;
        case 0x17fa58u: goto label_17fa58;
        case 0x17fa5cu: goto label_17fa5c;
        case 0x17fa60u: goto label_17fa60;
        case 0x17fa64u: goto label_17fa64;
        case 0x17fa68u: goto label_17fa68;
        case 0x17fa6cu: goto label_17fa6c;
        case 0x17fa70u: goto label_17fa70;
        case 0x17fa74u: goto label_17fa74;
        case 0x17fa78u: goto label_17fa78;
        case 0x17fa7cu: goto label_17fa7c;
        case 0x17fa80u: goto label_17fa80;
        case 0x17fa84u: goto label_17fa84;
        case 0x17fa88u: goto label_17fa88;
        case 0x17fa8cu: goto label_17fa8c;
        case 0x17fa90u: goto label_17fa90;
        case 0x17fa94u: goto label_17fa94;
        case 0x17fa98u: goto label_17fa98;
        case 0x17fa9cu: goto label_17fa9c;
        case 0x17faa0u: goto label_17faa0;
        case 0x17faa4u: goto label_17faa4;
        case 0x17faa8u: goto label_17faa8;
        case 0x17faacu: goto label_17faac;
        case 0x17fab0u: goto label_17fab0;
        case 0x17fab4u: goto label_17fab4;
        case 0x17fab8u: goto label_17fab8;
        case 0x17fabcu: goto label_17fabc;
        case 0x17fac0u: goto label_17fac0;
        case 0x17fac4u: goto label_17fac4;
        case 0x17fac8u: goto label_17fac8;
        case 0x17faccu: goto label_17facc;
        case 0x17fad0u: goto label_17fad0;
        case 0x17fad4u: goto label_17fad4;
        case 0x17fad8u: goto label_17fad8;
        case 0x17fadcu: goto label_17fadc;
        case 0x17fae0u: goto label_17fae0;
        case 0x17fae4u: goto label_17fae4;
        case 0x17fae8u: goto label_17fae8;
        case 0x17faecu: goto label_17faec;
        case 0x17faf0u: goto label_17faf0;
        case 0x17faf4u: goto label_17faf4;
        case 0x17faf8u: goto label_17faf8;
        case 0x17fafcu: goto label_17fafc;
        case 0x17fb00u: goto label_17fb00;
        case 0x17fb04u: goto label_17fb04;
        case 0x17fb08u: goto label_17fb08;
        case 0x17fb0cu: goto label_17fb0c;
        case 0x17fb10u: goto label_17fb10;
        case 0x17fb14u: goto label_17fb14;
        case 0x17fb18u: goto label_17fb18;
        case 0x17fb1cu: goto label_17fb1c;
        default: return;
    }

label_17f350:
    // 0x17f350: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x17f350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_17f354:
    // 0x17f354: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x17f354u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_17f358:
    // 0x17f358: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x17f358u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_17f35c:
    // 0x17f35c: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x17f35cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_17f360:
    // 0x17f360: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x17f360u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_17f364:
    // 0x17f364: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x17f364u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_17f368:
    // 0x17f368: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x17f368u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17f36c:
    // 0x17f36c: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x17f36cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_17f370:
    // 0x17f370: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x17f370u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17f374:
    // 0x17f374: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x17f374u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_17f378:
    // 0x17f378: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x17f378u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_17f37c:
    // 0x17f37c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x17f37cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_17f380:
    // 0x17f380: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x17f380u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_17f384:
    // 0x17f384: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x17f384u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_17f388:
    // 0x17f388: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x17f388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_17f38c:
    // 0x17f38c: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x17f38cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_17f390:
    // 0x17f390: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x17f390u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_17f394:
    // 0x17f394: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x17f394u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17f398:
    // 0x17f398: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x17f398u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_17f39c:
    // 0x17f39c: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x17f39cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_17f3a0:
    // 0x17f3a0: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x17f3a0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_17f3a4:
    // 0x17f3a4: 0x8c305220  lw          $s0, 0x5220($at)
    ctx->pc = 0x17f3a4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 21024)));
label_17f3a8:
    // 0x17f3a8: 0x46006586  mov.s       $f22, $f12
    ctx->pc = 0x17f3a8u;
    ctx->f[22] = FPU_MOV_S(ctx->f[12]);
label_17f3ac:
    // 0x17f3ac: 0xafa600bc  sw          $a2, 0xBC($sp)
    ctx->pc = 0x17f3acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 6));
label_17f3b0:
    // 0x17f3b0: 0x10000075  b           . + 4 + (0x75 << 2)
label_17f3b4:
    if (ctx->pc == 0x17F3B4u) {
        ctx->pc = 0x17F3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F3B0u;
        // 0x17f3b4: 0x46006d46  mov.s       $f21, $f13 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x17F3B8u;
        goto label_17f3b8;
    }
    ctx->pc = 0x17F3B0u;
    {
        const bool branch_taken_0x17f3b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F3B0u;
        // 0x17f3b4: 0x46006d46  mov.s       $f21, $f13 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f3b0) {
            ctx->pc = 0x17F588u;
            goto label_17f588;
        }
    }
    ctx->pc = 0x17F3B8u;
label_17f3b8:
    // 0x17f3b8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x17f3b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_17f3bc:
    // 0x17f3bc: 0xc05fdf8  jal         func_17F7E0
label_17f3c0:
    if (ctx->pc == 0x17F3C0u) {
        ctx->pc = 0x17F3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F3BCu;
        // 0x17f3c0: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17F3C4u;
        goto label_17f3c4;
    }
    ctx->pc = 0x17F3BCu;
    SET_GPR_U32(ctx, 31, 0x17F3C4u);
    ctx->pc = 0x17F3C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F3BCu;
    // 0x17f3c0: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F7E0u;
    goto label_17f7e0;
    ctx->pc = 0x17F3C4u;
label_17f3c4:
    // 0x17f3c4: 0x1452000a  bne         $v0, $s2, . + 4 + (0xA << 2)
label_17f3c8:
    if (ctx->pc == 0x17F3C8u) {
        ctx->pc = 0x17F3CCu;
        goto label_17f3cc;
    }
    ctx->pc = 0x17F3C4u;
    {
        const bool branch_taken_0x17f3c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x17f3c4) {
            ctx->pc = 0x17F3F0u;
            goto label_17f3f0;
        }
    }
    ctx->pc = 0x17F3CCu;
label_17f3cc:
    // 0x17f3cc: 0x8e84000c  lw          $a0, 0xC($s4)
    ctx->pc = 0x17f3ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_17f3d0:
    // 0x17f3d0: 0x3c030fff  lui         $v1, 0xFFF
    ctx->pc = 0x17f3d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4095 << 16));
label_17f3d4:
    // 0x17f3d4: 0x34630fff  ori         $v1, $v1, 0xFFF
    ctx->pc = 0x17f3d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4095);
label_17f3d8:
    // 0x17f3d8: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x17f3d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_17f3dc:
    // 0x17f3dc: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x17f3dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_17f3e0:
    // 0x17f3e0: 0x13c30018  beq         $fp, $v1, . + 4 + (0x18 << 2)
label_17f3e4:
    if (ctx->pc == 0x17F3E4u) {
        ctx->pc = 0x17F3E8u;
        goto label_17f3e8;
    }
    ctx->pc = 0x17F3E0u;
    {
        const bool branch_taken_0x17f3e0 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 3));
        if (branch_taken_0x17f3e0) {
            ctx->pc = 0x17F444u;
            goto label_17f444;
        }
    }
    ctx->pc = 0x17F3E8u;
label_17f3e8:
    // 0x17f3e8: 0x10000016  b           . + 4 + (0x16 << 2)
label_17f3ec:
    if (ctx->pc == 0x17F3ECu) {
        ctx->pc = 0x17F3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F3E8u;
        // 0x17f3ec: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17F3F0u;
        goto label_17f3f0;
    }
    ctx->pc = 0x17F3E8u;
    {
        const bool branch_taken_0x17f3e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F3E8u;
        // 0x17f3ec: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f3e8) {
            ctx->pc = 0x17F444u;
            goto label_17f444;
        }
    }
    ctx->pc = 0x17F3F0u;
label_17f3f0:
    // 0x17f3f0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_17f3f4:
    if (ctx->pc == 0x17F3F4u) {
        ctx->pc = 0x17F3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F3F0u;
        // 0x17f3f4: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17F3F8u;
        goto label_17f3f8;
    }
    ctx->pc = 0x17F3F0u;
    {
        const bool branch_taken_0x17f3f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17F3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F3F0u;
        // 0x17f3f4: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f3f0) {
            ctx->pc = 0x17F408u;
            goto label_17f408;
        }
    }
    ctx->pc = 0x17F3F8u;
label_17f3f8:
    // 0x17f3f8: 0x12430012  beq         $s2, $v1, . + 4 + (0x12 << 2)
label_17f3fc:
    if (ctx->pc == 0x17F3FCu) {
        ctx->pc = 0x17F400u;
        goto label_17f400;
    }
    ctx->pc = 0x17F3F8u;
    {
        const bool branch_taken_0x17f3f8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 3));
        if (branch_taken_0x17f3f8) {
            ctx->pc = 0x17F444u;
            goto label_17f444;
        }
    }
    ctx->pc = 0x17F400u;
label_17f400:
    // 0x17f400: 0x10000010  b           . + 4 + (0x10 << 2)
label_17f404:
    if (ctx->pc == 0x17F404u) {
        ctx->pc = 0x17F404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F400u;
        // 0x17f404: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17F408u;
        goto label_17f408;
    }
    ctx->pc = 0x17F400u;
    {
        const bool branch_taken_0x17f400 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F400u;
        // 0x17f404: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f400) {
            ctx->pc = 0x17F444u;
            goto label_17f444;
        }
    }
    ctx->pc = 0x17F408u;
label_17f408:
    // 0x17f408: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x17f408u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_17f40c:
    // 0x17f40c: 0x1643000c  bne         $s2, $v1, . + 4 + (0xC << 2)
label_17f410:
    if (ctx->pc == 0x17F410u) {
        ctx->pc = 0x17F414u;
        goto label_17f414;
    }
    ctx->pc = 0x17F40Cu;
    {
        const bool branch_taken_0x17f40c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 3));
        if (branch_taken_0x17f40c) {
            ctx->pc = 0x17F440u;
            goto label_17f440;
        }
    }
    ctx->pc = 0x17F414u;
label_17f414:
    // 0x17f414: 0x8e84000c  lw          $a0, 0xC($s4)
    ctx->pc = 0x17f414u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_17f418:
    // 0x17f418: 0x3c030fff  lui         $v1, 0xFFF
    ctx->pc = 0x17f418u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4095 << 16));
label_17f41c:
    // 0x17f41c: 0x34630fff  ori         $v1, $v1, 0xFFF
    ctx->pc = 0x17f41cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4095);
label_17f420:
    // 0x17f420: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x17f420u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17f424:
    // 0x17f424: 0x280b82d  daddu       $s7, $s4, $zero
    ctx->pc = 0x17f424u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_17f428:
    // 0x17f428: 0x260b02d  daddu       $s6, $s3, $zero
    ctx->pc = 0x17f428u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_17f42c:
    // 0x17f42c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x17f42cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_17f430:
    // 0x17f430: 0x4600b506  mov.s       $f20, $f22
    ctx->pc = 0x17f430u;
    ctx->f[20] = FPU_MOV_S(ctx->f[22]);
label_17f434:
    // 0x17f434: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x17f434u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_17f438:
    // 0x17f438: 0x10000002  b           . + 4 + (0x2 << 2)
label_17f43c:
    if (ctx->pc == 0x17F43Cu) {
        ctx->pc = 0x17F43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F438u;
        // 0x17f43c: 0x83f024  and         $fp, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 30, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17F440u;
        goto label_17f440;
    }
    ctx->pc = 0x17F438u;
    {
        const bool branch_taken_0x17f438 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F438u;
        // 0x17f43c: 0x83f024  and         $fp, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 30, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f438) {
            ctx->pc = 0x17F444u;
            goto label_17f444;
        }
    }
    ctx->pc = 0x17F440u;
label_17f440:
    // 0x17f440: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x17f440u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_17f444:
    // 0x17f444: 0x0  nop
    ctx->pc = 0x17f444u;
    // NOP
label_17f448:
    // 0x17f448: 0x12a00044  beqz        $s5, . + 4 + (0x44 << 2)
label_17f44c:
    if (ctx->pc == 0x17F44Cu) {
        ctx->pc = 0x17F450u;
        goto label_17f450;
    }
    ctx->pc = 0x17F448u;
    {
        const bool branch_taken_0x17f448 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x17f448) {
            ctx->pc = 0x17F55Cu;
            goto label_17f55c;
        }
    }
    ctx->pc = 0x17F450u;
label_17f450:
    // 0x17f450: 0x8ee6000c  lw          $a2, 0xC($s7)
    ctx->pc = 0x17f450u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 12)));
label_17f454:
    // 0x17f454: 0x2112823  subu        $a1, $s0, $s1
    ctx->pc = 0x17f454u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
label_17f458:
    // 0x17f458: 0x8f83876c  lw          $v1, -0x7894($gp)
    ctx->pc = 0x17f458u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936428)));
label_17f45c:
    // 0x17f45c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x17f45cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_17f460:
    // 0x17f460: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x17f460u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
label_17f464:
    // 0x17f464: 0x8ec6000c  lw          $a2, 0xC($s6)
    ctx->pc = 0x17f464u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12)));
label_17f468:
    // 0x17f468: 0x8f83876c  lw          $v1, -0x7894($gp)
    ctx->pc = 0x17f468u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936428)));
label_17f46c:
    // 0x17f46c: 0xac660004  sw          $a2, 0x4($v1)
    ctx->pc = 0x17f46cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 6));
label_17f470:
    // 0x17f470: 0x8f83876c  lw          $v1, -0x7894($gp)
    ctx->pc = 0x17f470u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936428)));
label_17f474:
    // 0x17f474: 0xac650010  sw          $a1, 0x10($v1)
    ctx->pc = 0x17f474u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 5));
label_17f478:
    // 0x17f478: 0x8f85876c  lw          $a1, -0x7894($gp)
    ctx->pc = 0x17f478u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936428)));
label_17f47c:
    // 0x17f47c: 0x8fa300bc  lw          $v1, 0xBC($sp)
    ctx->pc = 0x17f47cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
label_17f480:
    // 0x17f480: 0xaca30014  sw          $v1, 0x14($a1)
    ctx->pc = 0x17f480u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 3));
label_17f484:
    // 0x17f484: 0x8f83876c  lw          $v1, -0x7894($gp)
    ctx->pc = 0x17f484u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936428)));
label_17f488:
    // 0x17f488: 0xe4740018  swc1        $f20, 0x18($v1)
    ctx->pc = 0x17f488u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
label_17f48c:
    // 0x17f48c: 0x8f83876c  lw          $v1, -0x7894($gp)
    ctx->pc = 0x17f48cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936428)));
label_17f490:
    // 0x17f490: 0xe475001c  swc1        $f21, 0x1C($v1)
    ctx->pc = 0x17f490u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 28), bits); }
label_17f494:
    // 0x17f494: 0x8f83876c  lw          $v1, -0x7894($gp)
    ctx->pc = 0x17f494u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936428)));
label_17f498:
    // 0x17f498: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x17f498u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
label_17f49c:
    // 0x17f49c: 0x8f83876c  lw          $v1, -0x7894($gp)
    ctx->pc = 0x17f49cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936428)));
label_17f4a0:
    // 0x17f4a0: 0x1644000e  bne         $s2, $a0, . + 4 + (0xE << 2)
label_17f4a4:
    if (ctx->pc == 0x17F4A4u) {
        ctx->pc = 0x17F4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F4A0u;
        // 0x17f4a4: 0xac710008  sw          $s1, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17F4A8u;
        goto label_17f4a8;
    }
    ctx->pc = 0x17F4A0u;
    {
        const bool branch_taken_0x17f4a0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 4));
        ctx->pc = 0x17F4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F4A0u;
        // 0x17f4a4: 0xac710008  sw          $s1, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f4a0) {
            ctx->pc = 0x17F4DCu;
            goto label_17f4dc;
        }
    }
    ctx->pc = 0x17F4A8u;
label_17f4a8:
    // 0x17f4a8: 0x8f848764  lw          $a0, -0x789C($gp)
    ctx->pc = 0x17f4a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936420)));
label_17f4ac:
    // 0x17f4ac: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
label_17f4b0:
    if (ctx->pc == 0x17F4B0u) {
        ctx->pc = 0x17F4B4u;
        goto label_17f4b4;
    }
    ctx->pc = 0x17F4ACu;
    {
        const bool branch_taken_0x17f4ac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x17f4ac) {
            ctx->pc = 0x17F4C4u;
            goto label_17f4c4;
        }
    }
    ctx->pc = 0x17F4B4u;
label_17f4b4:
    // 0x17f4b4: 0x8f83876c  lw          $v1, -0x7894($gp)
    ctx->pc = 0x17f4b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936428)));
label_17f4b8:
    // 0x17f4b8: 0xaf838764  sw          $v1, -0x789C($gp)
    ctx->pc = 0x17f4b8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936420), GPR_U32(ctx, 3));
label_17f4bc:
    // 0x17f4bc: 0x10000014  b           . + 4 + (0x14 << 2)
label_17f4c0:
    if (ctx->pc == 0x17F4C0u) {
        ctx->pc = 0x17F4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F4BCu;
        // 0x17f4c0: 0xaf838760  sw          $v1, -0x78A0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936416), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17F4C4u;
        goto label_17f4c4;
    }
    ctx->pc = 0x17F4BCu;
    {
        const bool branch_taken_0x17f4bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F4BCu;
        // 0x17f4c0: 0xaf838760  sw          $v1, -0x78A0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936416), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f4bc) {
            ctx->pc = 0x17F510u;
            goto label_17f510;
        }
    }
    ctx->pc = 0x17F4C4u;
label_17f4c4:
    // 0x17f4c4: 0x0  nop
    ctx->pc = 0x17f4c4u;
    // NOP
label_17f4c8:
    // 0x17f4c8: 0x8f83876c  lw          $v1, -0x7894($gp)
    ctx->pc = 0x17f4c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936428)));
label_17f4cc:
    // 0x17f4cc: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x17f4ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
label_17f4d0:
    // 0x17f4d0: 0x8f83876c  lw          $v1, -0x7894($gp)
    ctx->pc = 0x17f4d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936428)));
label_17f4d4:
    // 0x17f4d4: 0x1000000e  b           . + 4 + (0xE << 2)
label_17f4d8:
    if (ctx->pc == 0x17F4D8u) {
        ctx->pc = 0x17F4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F4D4u;
        // 0x17f4d8: 0xaf838764  sw          $v1, -0x789C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936420), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17F4DCu;
        goto label_17f4dc;
    }
    ctx->pc = 0x17F4D4u;
    {
        const bool branch_taken_0x17f4d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F4D4u;
        // 0x17f4d8: 0xaf838764  sw          $v1, -0x789C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936420), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f4d4) {
            ctx->pc = 0x17F510u;
            goto label_17f510;
        }
    }
    ctx->pc = 0x17F4DCu;
label_17f4dc:
    // 0x17f4dc: 0x0  nop
    ctx->pc = 0x17f4dcu;
    // NOP
label_17f4e0:
    // 0x17f4e0: 0x8f848768  lw          $a0, -0x7898($gp)
    ctx->pc = 0x17f4e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936424)));
label_17f4e4:
    // 0x17f4e4: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
label_17f4e8:
    if (ctx->pc == 0x17F4E8u) {
        ctx->pc = 0x17F4ECu;
        goto label_17f4ec;
    }
    ctx->pc = 0x17F4E4u;
    {
        const bool branch_taken_0x17f4e4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x17f4e4) {
            ctx->pc = 0x17F4FCu;
            goto label_17f4fc;
        }
    }
    ctx->pc = 0x17F4ECu;
label_17f4ec:
    // 0x17f4ec: 0x8f83876c  lw          $v1, -0x7894($gp)
    ctx->pc = 0x17f4ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936428)));
label_17f4f0:
    // 0x17f4f0: 0xaf838768  sw          $v1, -0x7898($gp)
    ctx->pc = 0x17f4f0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936424), GPR_U32(ctx, 3));
label_17f4f4:
    // 0x17f4f4: 0x10000006  b           . + 4 + (0x6 << 2)
label_17f4f8:
    if (ctx->pc == 0x17F4F8u) {
        ctx->pc = 0x17F4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F4F4u;
        // 0x17f4f8: 0xaf83875c  sw          $v1, -0x78A4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936412), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17F4FCu;
        goto label_17f4fc;
    }
    ctx->pc = 0x17F4F4u;
    {
        const bool branch_taken_0x17f4f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F4F4u;
        // 0x17f4f8: 0xaf83875c  sw          $v1, -0x78A4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936412), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f4f4) {
            ctx->pc = 0x17F510u;
            goto label_17f510;
        }
    }
    ctx->pc = 0x17F4FCu;
label_17f4fc:
    // 0x17f4fc: 0x0  nop
    ctx->pc = 0x17f4fcu;
    // NOP
label_17f500:
    // 0x17f500: 0x8f83876c  lw          $v1, -0x7894($gp)
    ctx->pc = 0x17f500u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936428)));
label_17f504:
    // 0x17f504: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x17f504u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
label_17f508:
    // 0x17f508: 0x8f83876c  lw          $v1, -0x7894($gp)
    ctx->pc = 0x17f508u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936428)));
label_17f50c:
    // 0x17f50c: 0xaf838768  sw          $v1, -0x7898($gp)
    ctx->pc = 0x17f50cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936424), GPR_U32(ctx, 3));
label_17f510:
    // 0x17f510: 0x8f83876c  lw          $v1, -0x7894($gp)
    ctx->pc = 0x17f510u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936428)));
label_17f514:
    // 0x17f514: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x17f514u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
label_17f518:
    // 0x17f518: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_17f51c:
    if (ctx->pc == 0x17F51Cu) {
        ctx->pc = 0x17F51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F518u;
        // 0x17f51c: 0xaf83876c  sw          $v1, -0x7894($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936428), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17F520u;
        goto label_17f520;
    }
    ctx->pc = 0x17F518u;
    {
        const bool branch_taken_0x17f518 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F518u;
        // 0x17f51c: 0xaf83876c  sw          $v1, -0x7894($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936428), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f518) {
            ctx->pc = 0x17F54Cu;
            goto label_17f54c;
        }
    }
    ctx->pc = 0x17F520u;
label_17f520:
    // 0x17f520: 0x8e84000c  lw          $a0, 0xC($s4)
    ctx->pc = 0x17f520u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_17f524:
    // 0x17f524: 0x3c030fff  lui         $v1, 0xFFF
    ctx->pc = 0x17f524u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4095 << 16));
label_17f528:
    // 0x17f528: 0x34630fff  ori         $v1, $v1, 0xFFF
    ctx->pc = 0x17f528u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4095);
label_17f52c:
    // 0x17f52c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x17f52cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_17f530:
    // 0x17f530: 0x280b82d  daddu       $s7, $s4, $zero
    ctx->pc = 0x17f530u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_17f534:
    // 0x17f534: 0x260b02d  daddu       $s6, $s3, $zero
    ctx->pc = 0x17f534u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_17f538:
    // 0x17f538: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x17f538u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17f53c:
    // 0x17f53c: 0x4600b506  mov.s       $f20, $f22
    ctx->pc = 0x17f53cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[22]);
label_17f540:
    // 0x17f540: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x17f540u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_17f544:
    // 0x17f544: 0x10000005  b           . + 4 + (0x5 << 2)
label_17f548:
    if (ctx->pc == 0x17F548u) {
        ctx->pc = 0x17F548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F544u;
        // 0x17f548: 0x83f024  and         $fp, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 30, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17F54Cu;
        goto label_17f54c;
    }
    ctx->pc = 0x17F544u;
    {
        const bool branch_taken_0x17f544 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F544u;
        // 0x17f548: 0x83f024  and         $fp, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 30, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f544) {
            ctx->pc = 0x17F55Cu;
            goto label_17f55c;
        }
    }
    ctx->pc = 0x17F54Cu;
label_17f54c:
    // 0x17f54c: 0x0  nop
    ctx->pc = 0x17f54cu;
    // NOP
label_17f550:
    // 0x17f550: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x17f550u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_17f554:
    // 0x17f554: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x17f554u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17f558:
    // 0x17f558: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x17f558u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17f55c:
    // 0x17f55c: 0x0  nop
    ctx->pc = 0x17f55cu;
    // NOP
label_17f560:
    // 0x17f560: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_17f564:
    if (ctx->pc == 0x17F564u) {
        ctx->pc = 0x17F568u;
        goto label_17f568;
    }
    ctx->pc = 0x17F560u;
    {
        const bool branch_taken_0x17f560 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17f560) {
            ctx->pc = 0x17F56Cu;
            goto label_17f56c;
        }
    }
    ctx->pc = 0x17F568u;
label_17f568:
    // 0x17f568: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x17f568u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_17f56c:
    // 0x17f56c: 0x0  nop
    ctx->pc = 0x17f56cu;
    // NOP
label_17f570:
    // 0x17f570: 0x3c0343fa  lui         $v1, 0x43FA
    ctx->pc = 0x17f570u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17402 << 16));
label_17f574:
    // 0x17f574: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x17f574u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_17f578:
    // 0x17f578: 0x26940010  addiu       $s4, $s4, 0x10
    ctx->pc = 0x17f578u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
label_17f57c:
    // 0x17f57c: 0x26730010  addiu       $s3, $s3, 0x10
    ctx->pc = 0x17f57cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
label_17f580:
    // 0x17f580: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x17f580u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_17f584:
    // 0x17f584: 0x4600b580  add.s       $f22, $f22, $f0
    ctx->pc = 0x17f584u;
    ctx->f[22] = FPU_ADD_S(ctx->f[22], ctx->f[0]);
label_17f588:
    // 0x17f588: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x17f588u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_17f58c:
    // 0x17f58c: 0x8c235224  lw          $v1, 0x5224($at)
    ctx->pc = 0x17f58cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 21028)));
label_17f590:
    // 0x17f590: 0x70082a  slt         $at, $v1, $s0
    ctx->pc = 0x17f590u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_17f594:
    // 0x17f594: 0x1020ff88  beqz        $at, . + 4 + (-0x78 << 2)
label_17f598:
    if (ctx->pc == 0x17F598u) {
        ctx->pc = 0x17F598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F594u;
        // 0x17f598: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17F59Cu;
        goto label_17f59c;
    }
    ctx->pc = 0x17F594u;
    {
        const bool branch_taken_0x17f594 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F594u;
        // 0x17f598: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f594) {
            ctx->pc = 0x17F3B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17f3b8;
        }
    }
    ctx->pc = 0x17F59Cu;
label_17f59c:
    // 0x17f59c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x17f59cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_17f5a0:
    // 0x17f5a0: 0x12430031  beq         $s2, $v1, . + 4 + (0x31 << 2)
label_17f5a4:
    if (ctx->pc == 0x17F5A4u) {
        ctx->pc = 0x17F5A8u;
        goto label_17f5a8;
    }
    ctx->pc = 0x17F5A0u;
    {
        const bool branch_taken_0x17f5a0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 3));
        if (branch_taken_0x17f5a0) {
            ctx->pc = 0x17F668u;
            goto label_17f668;
        }
    }
    ctx->pc = 0x17F5A8u;
label_17f5a8:
    // 0x17f5a8: 0x8ee6000c  lw          $a2, 0xC($s7)
    ctx->pc = 0x17f5a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 12)));
label_17f5ac:
    // 0x17f5ac: 0x2112823  subu        $a1, $s0, $s1
    ctx->pc = 0x17f5acu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
label_17f5b0:
    // 0x17f5b0: 0x8f83876c  lw          $v1, -0x7894($gp)
    ctx->pc = 0x17f5b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936428)));
label_17f5b4:
    // 0x17f5b4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x17f5b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_17f5b8:
    // 0x17f5b8: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x17f5b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
label_17f5bc:
    // 0x17f5bc: 0x8ec6000c  lw          $a2, 0xC($s6)
    ctx->pc = 0x17f5bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12)));
label_17f5c0:
    // 0x17f5c0: 0x8f83876c  lw          $v1, -0x7894($gp)
    ctx->pc = 0x17f5c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936428)));
label_17f5c4:
    // 0x17f5c4: 0xac660004  sw          $a2, 0x4($v1)
    ctx->pc = 0x17f5c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 6));
label_17f5c8:
    // 0x17f5c8: 0x8f83876c  lw          $v1, -0x7894($gp)
    ctx->pc = 0x17f5c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936428)));
label_17f5cc:
    // 0x17f5cc: 0xac650010  sw          $a1, 0x10($v1)
    ctx->pc = 0x17f5ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 5));
label_17f5d0:
    // 0x17f5d0: 0x8f85876c  lw          $a1, -0x7894($gp)
    ctx->pc = 0x17f5d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936428)));
label_17f5d4:
    // 0x17f5d4: 0x8fa300bc  lw          $v1, 0xBC($sp)
    ctx->pc = 0x17f5d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
label_17f5d8:
    // 0x17f5d8: 0xaca30014  sw          $v1, 0x14($a1)
    ctx->pc = 0x17f5d8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 3));
label_17f5dc:
    // 0x17f5dc: 0x8f83876c  lw          $v1, -0x7894($gp)
    ctx->pc = 0x17f5dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936428)));
label_17f5e0:
    // 0x17f5e0: 0xe4740018  swc1        $f20, 0x18($v1)
    ctx->pc = 0x17f5e0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
label_17f5e4:
    // 0x17f5e4: 0x8f83876c  lw          $v1, -0x7894($gp)
    ctx->pc = 0x17f5e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936428)));
label_17f5e8:
    // 0x17f5e8: 0xe475001c  swc1        $f21, 0x1C($v1)
    ctx->pc = 0x17f5e8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 28), bits); }
label_17f5ec:
    // 0x17f5ec: 0x8f83876c  lw          $v1, -0x7894($gp)
    ctx->pc = 0x17f5ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936428)));
label_17f5f0:
    // 0x17f5f0: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x17f5f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
label_17f5f4:
    // 0x17f5f4: 0x8f83876c  lw          $v1, -0x7894($gp)
    ctx->pc = 0x17f5f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936428)));
label_17f5f8:
    // 0x17f5f8: 0x1644000d  bne         $s2, $a0, . + 4 + (0xD << 2)
label_17f5fc:
    if (ctx->pc == 0x17F5FCu) {
        ctx->pc = 0x17F5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F5F8u;
        // 0x17f5fc: 0xac710008  sw          $s1, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17F600u;
        goto label_17f600;
    }
    ctx->pc = 0x17F5F8u;
    {
        const bool branch_taken_0x17f5f8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 4));
        ctx->pc = 0x17F5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F5F8u;
        // 0x17f5fc: 0xac710008  sw          $s1, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f5f8) {
            ctx->pc = 0x17F630u;
            goto label_17f630;
        }
    }
    ctx->pc = 0x17F600u;
label_17f600:
    // 0x17f600: 0x8f848764  lw          $a0, -0x789C($gp)
    ctx->pc = 0x17f600u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936420)));
label_17f604:
    // 0x17f604: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
label_17f608:
    if (ctx->pc == 0x17F608u) {
        ctx->pc = 0x17F60Cu;
        goto label_17f60c;
    }
    ctx->pc = 0x17F604u;
    {
        const bool branch_taken_0x17f604 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x17f604) {
            ctx->pc = 0x17F61Cu;
            goto label_17f61c;
        }
    }
    ctx->pc = 0x17F60Cu;
label_17f60c:
    // 0x17f60c: 0x8f83876c  lw          $v1, -0x7894($gp)
    ctx->pc = 0x17f60cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936428)));
label_17f610:
    // 0x17f610: 0xaf838764  sw          $v1, -0x789C($gp)
    ctx->pc = 0x17f610u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936420), GPR_U32(ctx, 3));
label_17f614:
    // 0x17f614: 0x10000011  b           . + 4 + (0x11 << 2)
label_17f618:
    if (ctx->pc == 0x17F618u) {
        ctx->pc = 0x17F618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F614u;
        // 0x17f618: 0xaf838760  sw          $v1, -0x78A0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936416), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17F61Cu;
        goto label_17f61c;
    }
    ctx->pc = 0x17F614u;
    {
        const bool branch_taken_0x17f614 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F614u;
        // 0x17f618: 0xaf838760  sw          $v1, -0x78A0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936416), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f614) {
            ctx->pc = 0x17F65Cu;
            goto label_17f65c;
        }
    }
    ctx->pc = 0x17F61Cu;
label_17f61c:
    // 0x17f61c: 0x8f83876c  lw          $v1, -0x7894($gp)
    ctx->pc = 0x17f61cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936428)));
label_17f620:
    // 0x17f620: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x17f620u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
label_17f624:
    // 0x17f624: 0x8f83876c  lw          $v1, -0x7894($gp)
    ctx->pc = 0x17f624u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936428)));
label_17f628:
    // 0x17f628: 0x1000000c  b           . + 4 + (0xC << 2)
label_17f62c:
    if (ctx->pc == 0x17F62Cu) {
        ctx->pc = 0x17F62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F628u;
        // 0x17f62c: 0xaf838764  sw          $v1, -0x789C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936420), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17F630u;
        goto label_17f630;
    }
    ctx->pc = 0x17F628u;
    {
        const bool branch_taken_0x17f628 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F628u;
        // 0x17f62c: 0xaf838764  sw          $v1, -0x789C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936420), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f628) {
            ctx->pc = 0x17F65Cu;
            goto label_17f65c;
        }
    }
    ctx->pc = 0x17F630u;
label_17f630:
    // 0x17f630: 0x8f848768  lw          $a0, -0x7898($gp)
    ctx->pc = 0x17f630u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936424)));
label_17f634:
    // 0x17f634: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
label_17f638:
    if (ctx->pc == 0x17F638u) {
        ctx->pc = 0x17F63Cu;
        goto label_17f63c;
    }
    ctx->pc = 0x17F634u;
    {
        const bool branch_taken_0x17f634 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x17f634) {
            ctx->pc = 0x17F64Cu;
            goto label_17f64c;
        }
    }
    ctx->pc = 0x17F63Cu;
label_17f63c:
    // 0x17f63c: 0x8f83876c  lw          $v1, -0x7894($gp)
    ctx->pc = 0x17f63cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936428)));
label_17f640:
    // 0x17f640: 0xaf838768  sw          $v1, -0x7898($gp)
    ctx->pc = 0x17f640u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936424), GPR_U32(ctx, 3));
label_17f644:
    // 0x17f644: 0x10000005  b           . + 4 + (0x5 << 2)
label_17f648:
    if (ctx->pc == 0x17F648u) {
        ctx->pc = 0x17F648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F644u;
        // 0x17f648: 0xaf83875c  sw          $v1, -0x78A4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936412), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17F64Cu;
        goto label_17f64c;
    }
    ctx->pc = 0x17F644u;
    {
        const bool branch_taken_0x17f644 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F644u;
        // 0x17f648: 0xaf83875c  sw          $v1, -0x78A4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936412), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f644) {
            ctx->pc = 0x17F65Cu;
            goto label_17f65c;
        }
    }
    ctx->pc = 0x17F64Cu;
label_17f64c:
    // 0x17f64c: 0x8f83876c  lw          $v1, -0x7894($gp)
    ctx->pc = 0x17f64cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936428)));
label_17f650:
    // 0x17f650: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x17f650u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
label_17f654:
    // 0x17f654: 0x8f83876c  lw          $v1, -0x7894($gp)
    ctx->pc = 0x17f654u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936428)));
label_17f658:
    // 0x17f658: 0xaf838768  sw          $v1, -0x7898($gp)
    ctx->pc = 0x17f658u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936424), GPR_U32(ctx, 3));
label_17f65c:
    // 0x17f65c: 0x8f83876c  lw          $v1, -0x7894($gp)
    ctx->pc = 0x17f65cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936428)));
label_17f660:
    // 0x17f660: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x17f660u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
label_17f664:
    // 0x17f664: 0xaf83876c  sw          $v1, -0x7894($gp)
    ctx->pc = 0x17f664u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936428), GPR_U32(ctx, 3));
label_17f668:
    // 0x17f668: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x17f668u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_17f66c:
    // 0x17f66c: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x17f66cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_17f670:
    // 0x17f670: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x17f670u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_17f674:
    // 0x17f674: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x17f674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_17f678:
    // 0x17f678: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x17f678u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_17f67c:
    // 0x17f67c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x17f67cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_17f680:
    // 0x17f680: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x17f680u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_17f684:
    // 0x17f684: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x17f684u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_17f688:
    // 0x17f688: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x17f688u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_17f68c:
    // 0x17f68c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x17f68cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_17f690:
    // 0x17f690: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x17f690u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_17f694:
    // 0x17f694: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x17f694u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_17f698:
    // 0x17f698: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x17f698u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_17f69c:
    // 0x17f69c: 0x3e00008  jr          $ra
label_17f6a0:
    if (ctx->pc == 0x17F6A0u) {
        ctx->pc = 0x17F6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F69Cu;
        // 0x17f6a0: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17F6A4u;
        goto label_17f6a4;
    }
    ctx->pc = 0x17F69Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17F6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F69Cu;
        // 0x17f6a0: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17F69Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17F6A4u;
label_17f6a4:
    // 0x17f6a4: 0x0  nop
    ctx->pc = 0x17f6a4u;
    // NOP
label_17f6a8:
    // 0x17f6a8: 0x0  nop
    ctx->pc = 0x17f6a8u;
    // NOP
label_17f6ac:
    // 0x17f6ac: 0x0  nop
    ctx->pc = 0x17f6acu;
    // NOP
label_17f6b0:
    // 0x17f6b0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x17f6b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_17f6b4:
    // 0x17f6b4: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x17f6b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_17f6b8:
    // 0x17f6b8: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x17f6b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_17f6bc:
    // 0x17f6bc: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x17f6bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_17f6c0:
    // 0x17f6c0: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x17f6c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_17f6c4:
    // 0x17f6c4: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x17f6c4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_17f6c8:
    // 0x17f6c8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x17f6c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_17f6cc:
    // 0x17f6cc: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x17f6ccu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_17f6d0:
    // 0x17f6d0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x17f6d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_17f6d4:
    // 0x17f6d4: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x17f6d4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_17f6d8:
    // 0x17f6d8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x17f6d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_17f6dc:
    // 0x17f6dc: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x17f6dcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_17f6e0:
    // 0x17f6e0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17f6e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_17f6e4:
    // 0x17f6e4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17f6e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_17f6e8:
    // 0x17f6e8: 0x8c305224  lw          $s0, 0x5224($at)
    ctx->pc = 0x17f6e8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 21028)));
label_17f6ec:
    // 0x17f6ec: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x17f6ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_17f6f0:
    // 0x17f6f0: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x17f6f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_17f6f4:
    // 0x17f6f4: 0x8c325220  lw          $s2, 0x5220($at)
    ctx->pc = 0x17f6f4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 21024)));
label_17f6f8:
    // 0x17f6f8: 0x72082a  slt         $at, $v1, $s2
    ctx->pc = 0x17f6f8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_17f6fc:
    // 0x17f6fc: 0x1420002e  bnez        $at, . + 4 + (0x2E << 2)
label_17f700:
    if (ctx->pc == 0x17F700u) {
        ctx->pc = 0x17F700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F6FCu;
        // 0x17f700: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17F704u;
        goto label_17f704;
    }
    ctx->pc = 0x17F6FCu;
    {
        const bool branch_taken_0x17f6fc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x17F700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F6FCu;
        // 0x17f700: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f6fc) {
            ctx->pc = 0x17F7B8u;
            goto label_17f7b8;
        }
    }
    ctx->pc = 0x17F704u;
label_17f704:
    // 0x17f704: 0xae96000c  sw          $s6, 0xC($s4)
    ctx->pc = 0x17f704u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 22));
label_17f708:
    // 0x17f708: 0xc6c00000  lwc1        $f0, 0x0($s6)
    ctx->pc = 0x17f708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_17f70c:
    // 0x17f70c: 0xe6600004  swc1        $f0, 0x4($s3)
    ctx->pc = 0x17f70cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
label_17f710:
    // 0x17f710: 0xe6800008  swc1        $f0, 0x8($s4)
    ctx->pc = 0x17f710u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 8), bits); }
label_17f714:
    // 0x17f714: 0x8ec3000c  lw          $v1, 0xC($s6)
    ctx->pc = 0x17f714u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12)));
label_17f718:
    // 0x17f718: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x17f718u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_17f71c:
    // 0x17f71c: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
label_17f720:
    if (ctx->pc == 0x17F720u) {
        ctx->pc = 0x17F724u;
        goto label_17f724;
    }
    ctx->pc = 0x17F71Cu;
    {
        const bool branch_taken_0x17f71c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x17f71c) {
            ctx->pc = 0x17F73Cu;
            goto label_17f73c;
        }
    }
    ctx->pc = 0x17F724u;
label_17f724:
    // 0x17f724: 0x8ea3000c  lw          $v1, 0xC($s5)
    ctx->pc = 0x17f724u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
label_17f728:
    // 0x17f728: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x17f728u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_17f72c:
    // 0x17f72c: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_17f730:
    if (ctx->pc == 0x17F730u) {
        ctx->pc = 0x17F734u;
        goto label_17f734;
    }
    ctx->pc = 0x17F72Cu;
    {
        const bool branch_taken_0x17f72c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x17f72c) {
            ctx->pc = 0x17F73Cu;
            goto label_17f73c;
        }
    }
    ctx->pc = 0x17F734u;
label_17f734:
    // 0x17f734: 0x16200008  bnez        $s1, . + 4 + (0x8 << 2)
label_17f738:
    if (ctx->pc == 0x17F738u) {
        ctx->pc = 0x17F73Cu;
        goto label_17f73c;
    }
    ctx->pc = 0x17F734u;
    {
        const bool branch_taken_0x17f734 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x17f734) {
            ctx->pc = 0x17F758u;
            goto label_17f758;
        }
    }
    ctx->pc = 0x17F73Cu;
label_17f73c:
    // 0x17f73c: 0x0  nop
    ctx->pc = 0x17f73cu;
    // NOP
label_17f740:
    // 0x17f740: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x17f740u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_17f744:
    // 0x17f744: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x17f744u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_17f748:
    // 0x17f748: 0xc05fe40  jal         func_17F900
label_17f74c:
    if (ctx->pc == 0x17F74Cu) {
        ctx->pc = 0x17F74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F748u;
        // 0x17f74c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17F750u;
        goto label_17f750;
    }
    ctx->pc = 0x17F748u;
    SET_GPR_U32(ctx, 31, 0x17F750u);
    ctx->pc = 0x17F74Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F748u;
    // 0x17f74c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F900u;
    goto label_17f900;
    ctx->pc = 0x17F750u;
label_17f750:
    // 0x17f750: 0x10000005  b           . + 4 + (0x5 << 2)
label_17f754:
    if (ctx->pc == 0x17F754u) {
        ctx->pc = 0x17F758u;
        goto label_17f758;
    }
    ctx->pc = 0x17F750u;
    {
        const bool branch_taken_0x17f750 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17f750) {
            ctx->pc = 0x17F768u;
            goto label_17f768;
        }
    }
    ctx->pc = 0x17F758u;
label_17f758:
    // 0x17f758: 0x2403003f  addiu       $v1, $zero, 0x3F
    ctx->pc = 0x17f758u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_17f75c:
    // 0x17f75c: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x17f75cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
label_17f760:
    // 0x17f760: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x17f760u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_17f764:
    // 0x17f764: 0xae830004  sw          $v1, 0x4($s4)
    ctx->pc = 0x17f764u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 3));
label_17f768:
    // 0x17f768: 0x8ec3000c  lw          $v1, 0xC($s6)
    ctx->pc = 0x17f768u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12)));
label_17f76c:
    // 0x17f76c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x17f76cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_17f770:
    // 0x17f770: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
label_17f774:
    if (ctx->pc == 0x17F774u) {
        ctx->pc = 0x17F778u;
        goto label_17f778;
    }
    ctx->pc = 0x17F770u;
    {
        const bool branch_taken_0x17f770 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x17f770) {
            ctx->pc = 0x17F784u;
            goto label_17f784;
        }
    }
    ctx->pc = 0x17F778u;
label_17f778:
    // 0x17f778: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x17f778u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_17f77c:
    // 0x17f77c: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x17f77cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
label_17f780:
    // 0x17f780: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x17f780u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
label_17f784:
    // 0x17f784: 0x0  nop
    ctx->pc = 0x17f784u;
    // NOP
label_17f788:
    // 0x17f788: 0x3c0343fa  lui         $v1, 0x43FA
    ctx->pc = 0x17f788u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17402 << 16));
label_17f78c:
    // 0x17f78c: 0xc6610000  lwc1        $f1, 0x0($s3)
    ctx->pc = 0x17f78cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_17f790:
    // 0x17f790: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x17f790u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_17f794:
    // 0x17f794: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x17f794u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_17f798:
    // 0x17f798: 0x26d60018  addiu       $s6, $s6, 0x18
    ctx->pc = 0x17f798u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 24));
label_17f79c:
    // 0x17f79c: 0x26b50018  addiu       $s5, $s5, 0x18
    ctx->pc = 0x17f79cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 24));
label_17f7a0:
    // 0x17f7a0: 0x26940010  addiu       $s4, $s4, 0x10
    ctx->pc = 0x17f7a0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
label_17f7a4:
    // 0x17f7a4: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x17f7a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_17f7a8:
    // 0x17f7a8: 0x72082a  slt         $at, $v1, $s2
    ctx->pc = 0x17f7a8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_17f7ac:
    // 0x17f7ac: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x17f7acu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_17f7b0:
    // 0x17f7b0: 0x1020ffd4  beqz        $at, . + 4 + (-0x2C << 2)
label_17f7b4:
    if (ctx->pc == 0x17F7B4u) {
        ctx->pc = 0x17F7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F7B0u;
        // 0x17f7b4: 0xe6600000  swc1        $f0, 0x0($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x17F7B8u;
        goto label_17f7b8;
    }
    ctx->pc = 0x17F7B0u;
    {
        const bool branch_taken_0x17f7b0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F7B0u;
        // 0x17f7b4: 0xe6600000  swc1        $f0, 0x0($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f7b0) {
            ctx->pc = 0x17F704u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17f704;
        }
    }
    ctx->pc = 0x17F7B8u;
label_17f7b8:
    // 0x17f7b8: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x17f7b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_17f7bc:
    // 0x17f7bc: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x17f7bcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_17f7c0:
    // 0x17f7c0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x17f7c0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_17f7c4:
    // 0x17f7c4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x17f7c4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_17f7c8:
    // 0x17f7c8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x17f7c8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_17f7cc:
    // 0x17f7cc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x17f7ccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_17f7d0:
    // 0x17f7d0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17f7d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_17f7d4:
    // 0x17f7d4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17f7d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_17f7d8:
    // 0x17f7d8: 0x3e00008  jr          $ra
label_17f7dc:
    if (ctx->pc == 0x17F7DCu) {
        ctx->pc = 0x17F7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F7D8u;
        // 0x17f7dc: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17F7E0u;
        goto label_17f7e0;
    }
    ctx->pc = 0x17F7D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17F7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F7D8u;
        // 0x17f7dc: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17F7D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17F7E0u;
label_17f7e0:
    // 0x17f7e0: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x17f7e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_17f7e4:
    // 0x17f7e4: 0x30c38000  andi        $v1, $a2, 0x8000
    ctx->pc = 0x17f7e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)32768);
label_17f7e8:
    // 0x17f7e8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_17f7ec:
    if (ctx->pc == 0x17F7ECu) {
        ctx->pc = 0x17F7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F7E8u;
        // 0x17f7ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17F7F0u;
        goto label_17f7f0;
    }
    ctx->pc = 0x17F7E8u;
    {
        const bool branch_taken_0x17f7e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F7E8u;
        // 0x17f7ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f7e8) {
            ctx->pc = 0x17F7F8u;
            goto label_17f7f8;
        }
    }
    ctx->pc = 0x17F7F0u;
label_17f7f0:
    // 0x17f7f0: 0x10000040  b           . + 4 + (0x40 << 2)
label_17f7f4:
    if (ctx->pc == 0x17F7F4u) {
        ctx->pc = 0x17F7F8u;
        goto label_17f7f8;
    }
    ctx->pc = 0x17F7F0u;
    {
        const bool branch_taken_0x17f7f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17f7f0) {
            ctx->pc = 0x17F8F4u;
            goto label_17f8f4;
        }
    }
    ctx->pc = 0x17F7F8u;
label_17f7f8:
    // 0x17f7f8: 0x8c880014  lw          $t0, 0x14($a0)
    ctx->pc = 0x17f7f8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_17f7fc:
    // 0x17f7fc: 0x30c3003f  andi        $v1, $a2, 0x3F
    ctx->pc = 0x17f7fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)63);
label_17f800:
    // 0x17f800: 0x8cad0000  lw          $t5, 0x0($a1)
    ctx->pc = 0x17f800u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_17f804:
    // 0x17f804: 0x3c06ffbe  lui         $a2, 0xFFBE
    ctx->pc = 0x17f804u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65470 << 16));
label_17f808:
    // 0x17f808: 0x8c8c0010  lw          $t4, 0x10($a0)
    ctx->pc = 0x17f808u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_17f80c:
    // 0x17f80c: 0x34c7fbef  ori         $a3, $a2, 0xFBEF
    ctx->pc = 0x17f80cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)64495);
label_17f810:
    // 0x17f810: 0x8c8a0004  lw          $t2, 0x4($a0)
    ctx->pc = 0x17f810u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_17f814:
    // 0x17f814: 0x31c80  sll         $v1, $v1, 18
    ctx->pc = 0x17f814u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 18));
label_17f818:
    // 0x17f818: 0x8ca90004  lw          $t1, 0x4($a1)
    ctx->pc = 0x17f818u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_17f81c:
    // 0x17f81c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x17f81cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_17f820:
    // 0x17f820: 0x8cab0010  lw          $t3, 0x10($a1)
    ctx->pc = 0x17f820u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
label_17f824:
    // 0x17f824: 0x3108003f  andi        $t0, $t0, 0x3F
    ctx->pc = 0x17f824u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)63);
label_17f828:
    // 0x17f828: 0x84180  sll         $t0, $t0, 6
    ctx->pc = 0x17f828u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 6));
label_17f82c:
    // 0x17f82c: 0x31a4003f  andi        $a0, $t5, 0x3F
    ctx->pc = 0x17f82cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)63);
label_17f830:
    // 0x17f830: 0x46b00  sll         $t5, $a0, 12
    ctx->pc = 0x17f830u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 4), 12));
label_17f834:
    // 0x17f834: 0x3129003f  andi        $t1, $t1, 0x3F
    ctx->pc = 0x17f834u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)63);
label_17f838:
    // 0x17f838: 0x3184003f  andi        $a0, $t4, 0x3F
    ctx->pc = 0x17f838u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)63);
label_17f83c:
    // 0x17f83c: 0x8ca50014  lw          $a1, 0x14($a1)
    ctx->pc = 0x17f83cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
label_17f840:
    // 0x17f840: 0x6d1825  or          $v1, $v1, $t5
    ctx->pc = 0x17f840u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 13));
label_17f844:
    // 0x17f844: 0x42180  sll         $a0, $a0, 6
    ctx->pc = 0x17f844u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
label_17f848:
    // 0x17f848: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x17f848u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_17f84c:
    // 0x17f84c: 0x94b00  sll         $t1, $t1, 12
    ctx->pc = 0x17f84cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 12));
label_17f850:
    // 0x17f850: 0x3164003f  andi        $a0, $t3, 0x3F
    ctx->pc = 0x17f850u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)63);
label_17f854:
    // 0x17f854: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x17f854u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_17f858:
    // 0x17f858: 0x3144003f  andi        $a0, $t2, 0x3F
    ctx->pc = 0x17f858u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)63);
label_17f85c:
    // 0x17f85c: 0x42480  sll         $a0, $a0, 18
    ctx->pc = 0x17f85cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 18));
label_17f860:
    // 0x17f860: 0x30a5003f  andi        $a1, $a1, 0x3F
    ctx->pc = 0x17f860u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)63);
label_17f864:
    // 0x17f864: 0x892025  or          $a0, $a0, $t1
    ctx->pc = 0x17f864u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 9));
label_17f868:
    // 0x17f868: 0x882025  or          $a0, $a0, $t0
    ctx->pc = 0x17f868u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 8));
label_17f86c:
    // 0x17f86c: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x17f86cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
label_17f870:
    // 0x17f870: 0x672825  or          $a1, $v1, $a3
    ctx->pc = 0x17f870u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
label_17f874:
    // 0x17f874: 0x10a6001f  beq         $a1, $a2, . + 4 + (0x1F << 2)
label_17f878:
    if (ctx->pc == 0x17F878u) {
        ctx->pc = 0x17F87Cu;
        goto label_17f87c;
    }
    ctx->pc = 0x17F874u;
    {
        const bool branch_taken_0x17f874 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 6));
        if (branch_taken_0x17f874) {
            ctx->pc = 0x17F8F4u;
            goto label_17f8f4;
        }
    }
    ctx->pc = 0x17F87Cu;
label_17f87c:
    // 0x17f87c: 0x3c05ff7d  lui         $a1, 0xFF7D
    ctx->pc = 0x17f87cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65405 << 16));
label_17f880:
    // 0x17f880: 0x34a5f7df  ori         $a1, $a1, 0xF7DF
    ctx->pc = 0x17f880u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)63455);
label_17f884:
    // 0x17f884: 0x652825  or          $a1, $v1, $a1
    ctx->pc = 0x17f884u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
label_17f888:
    // 0x17f888: 0x10a6001a  beq         $a1, $a2, . + 4 + (0x1A << 2)
label_17f88c:
    if (ctx->pc == 0x17F88Cu) {
        ctx->pc = 0x17F88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F888u;
        // 0x17f88c: 0x3c05fffb  lui         $a1, 0xFFFB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65531 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17F890u;
        goto label_17f890;
    }
    ctx->pc = 0x17F888u;
    {
        const bool branch_taken_0x17f888 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 6));
        ctx->pc = 0x17F88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F888u;
        // 0x17f88c: 0x3c05fffb  lui         $a1, 0xFFFB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65531 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f888) {
            ctx->pc = 0x17F8F4u;
            goto label_17f8f4;
        }
    }
    ctx->pc = 0x17F890u;
label_17f890:
    // 0x17f890: 0x34a5efbe  ori         $a1, $a1, 0xEFBE
    ctx->pc = 0x17f890u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)61374);
label_17f894:
    // 0x17f894: 0x652825  or          $a1, $v1, $a1
    ctx->pc = 0x17f894u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
label_17f898:
    // 0x17f898: 0x10a60016  beq         $a1, $a2, . + 4 + (0x16 << 2)
label_17f89c:
    if (ctx->pc == 0x17F89Cu) {
        ctx->pc = 0x17F8A0u;
        goto label_17f8a0;
    }
    ctx->pc = 0x17F898u;
    {
        const bool branch_taken_0x17f898 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 6));
        if (branch_taken_0x17f898) {
            ctx->pc = 0x17F8F4u;
            goto label_17f8f4;
        }
    }
    ctx->pc = 0x17F8A0u;
label_17f8a0:
    // 0x17f8a0: 0x3c05fff7  lui         $a1, 0xFFF7
    ctx->pc = 0x17f8a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65527 << 16));
label_17f8a4:
    // 0x17f8a4: 0x34a5df7d  ori         $a1, $a1, 0xDF7D
    ctx->pc = 0x17f8a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)57213);
label_17f8a8:
    // 0x17f8a8: 0x652825  or          $a1, $v1, $a1
    ctx->pc = 0x17f8a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
label_17f8ac:
    // 0x17f8ac: 0x10a60011  beq         $a1, $a2, . + 4 + (0x11 << 2)
label_17f8b0:
    if (ctx->pc == 0x17F8B0u) {
        ctx->pc = 0x17F8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F8ACu;
        // 0x17f8b0: 0x3c05ffef  lui         $a1, 0xFFEF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65519 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17F8B4u;
        goto label_17f8b4;
    }
    ctx->pc = 0x17F8ACu;
    {
        const bool branch_taken_0x17f8ac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 6));
        ctx->pc = 0x17F8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F8ACu;
        // 0x17f8b0: 0x3c05ffef  lui         $a1, 0xFFEF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65519 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f8ac) {
            ctx->pc = 0x17F8F4u;
            goto label_17f8f4;
        }
    }
    ctx->pc = 0x17F8B4u;
label_17f8b4:
    // 0x17f8b4: 0x34a5befb  ori         $a1, $a1, 0xBEFB
    ctx->pc = 0x17f8b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)48891);
label_17f8b8:
    // 0x17f8b8: 0x652825  or          $a1, $v1, $a1
    ctx->pc = 0x17f8b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
label_17f8bc:
    // 0x17f8bc: 0x10a6000d  beq         $a1, $a2, . + 4 + (0xD << 2)
label_17f8c0:
    if (ctx->pc == 0x17F8C0u) {
        ctx->pc = 0x17F8C4u;
        goto label_17f8c4;
    }
    ctx->pc = 0x17F8BCu;
    {
        const bool branch_taken_0x17f8bc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 6));
        if (branch_taken_0x17f8bc) {
            ctx->pc = 0x17F8F4u;
            goto label_17f8f4;
        }
    }
    ctx->pc = 0x17F8C4u;
label_17f8c4:
    // 0x17f8c4: 0x3c05ffdf  lui         $a1, 0xFFDF
    ctx->pc = 0x17f8c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65503 << 16));
label_17f8c8:
    // 0x17f8c8: 0x34a57df7  ori         $a1, $a1, 0x7DF7
    ctx->pc = 0x17f8c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32247);
label_17f8cc:
    // 0x17f8cc: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x17f8ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
label_17f8d0:
    // 0x17f8d0: 0x10660008  beq         $v1, $a2, . + 4 + (0x8 << 2)
label_17f8d4:
    if (ctx->pc == 0x17F8D4u) {
        ctx->pc = 0x17F8D8u;
        goto label_17f8d8;
    }
    ctx->pc = 0x17F8D0u;
    {
        const bool branch_taken_0x17f8d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        if (branch_taken_0x17f8d0) {
            ctx->pc = 0x17F8F4u;
            goto label_17f8f4;
        }
    }
    ctx->pc = 0x17F8D8u;
label_17f8d8:
    // 0x17f8d8: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x17f8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_17f8dc:
    // 0x17f8dc: 0x3442fbef  ori         $v0, $v0, 0xFBEF
    ctx->pc = 0x17f8dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64495);
label_17f8e0:
    // 0x17f8e0: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x17f8e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_17f8e4:
    // 0x17f8e4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_17f8e8:
    if (ctx->pc == 0x17F8E8u) {
        ctx->pc = 0x17F8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F8E4u;
        // 0x17f8e8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17F8ECu;
        goto label_17f8ec;
    }
    ctx->pc = 0x17F8E4u;
    {
        const bool branch_taken_0x17f8e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17F8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F8E4u;
        // 0x17f8e8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f8e4) {
            ctx->pc = 0x17F8F4u;
            goto label_17f8f4;
        }
    }
    ctx->pc = 0x17F8ECu;
label_17f8ec:
    // 0x17f8ec: 0x10000001  b           . + 4 + (0x1 << 2)
label_17f8f0:
    if (ctx->pc == 0x17F8F0u) {
        ctx->pc = 0x17F8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F8ECu;
        // 0x17f8f0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17F8F4u;
        goto label_17f8f4;
    }
    ctx->pc = 0x17F8ECu;
    {
        const bool branch_taken_0x17f8ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F8ECu;
        // 0x17f8f0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f8ec) {
            ctx->pc = 0x17F8F4u;
            goto label_17f8f4;
        }
    }
    ctx->pc = 0x17F8F4u;
label_17f8f4:
    // 0x17f8f4: 0x3e00008  jr          $ra
label_17f8f8:
    if (ctx->pc == 0x17F8F8u) {
        ctx->pc = 0x17F8FCu;
        goto label_17f8fc;
    }
    ctx->pc = 0x17F8F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17F8F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17F8FCu;
label_17f8fc:
    // 0x17f8fc: 0x0  nop
    ctx->pc = 0x17f8fcu;
    // NOP
label_17f900:
    // 0x17f900: 0xd8890000  lqc2        $vf9, 0x0($a0)
    ctx->pc = 0x17f900u;
    ctx->vu0_vf[9] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_17f904:
    // 0x17f904: 0x4be909bc  vmulax.xyzw $ACC, $vf1, $vf9x
    ctx->pc = 0x17f904u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_17f908:
    // 0x17f908: 0x4be910bd  vmadday.xyzw $ACC, $vf2, $vf9y
    ctx->pc = 0x17f908u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_17f90c:
    // 0x17f90c: 0x4be918be  vmaddaz.xyzw $ACC, $vf3, $vf9z
    ctx->pc = 0x17f90cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_17f910:
    // 0x17f910: 0x4be9230b  vmaddw.xyzw $vf12, $vf4, $vf9w
    ctx->pc = 0x17f910u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
label_17f914:
    // 0x17f914: 0x4bcc61ff  .word       0x4BCC61FF                   # vclipw.xyz  $vf12, $vf12w # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x17f914u;
    { __m128 fs = ctx->vu0_vf[12]; __m128 ft = _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(3,3,3,3)); __m128 neg_ft = _mm_xor_ps(ft, _mm_castsi128_ps(_mm_set1_epi32(0x80000000))); __m128 gt = _mm_cmpgt_ps(fs, ft); __m128 lt = _mm_cmplt_ps(fs, neg_ft); uint32_t gt_mask = (uint32_t)_mm_movemask_ps(gt); uint32_t lt_mask = (uint32_t)_mm_movemask_ps(lt); uint32_t flags = ((lt_mask & 0x1) << 0) | ((gt_mask & 0x1) << 1) | ((lt_mask & 0x2) << 1) | ((gt_mask & 0x2) << 2) | ((lt_mask & 0x4) << 2) | ((gt_mask & 0x4) << 3); ctx->vu0_clip_flags = ((ctx->vu0_clip_flags << 6) | (flags & 0x3F)) & 0xFFFFFF; }
label_17f918:
    // 0x17f918: 0x4be929bc  vmulax.xyzw $ACC, $vf5, $vf9x
    ctx->pc = 0x17f918u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_17f91c:
    // 0x17f91c: 0x4be930bd  vmadday.xyzw $ACC, $vf6, $vf9y
    ctx->pc = 0x17f91cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_17f920:
    // 0x17f920: 0x4be938be  vmaddaz.xyzw $ACC, $vf7, $vf9z
    ctx->pc = 0x17f920u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_17f924:
    // 0x17f924: 0x4be9430b  vmaddw.xyzw $vf12, $vf8, $vf9w
    ctx->pc = 0x17f924u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
label_17f928:
    // 0x17f928: 0x4a0002ff  vnop
    ctx->pc = 0x17f928u;
    // NOP operation, no action needed for VU0
label_17f92c:
    // 0x17f92c: 0x48439000  cfc2.ni     $v1, $vi18
    ctx->pc = 0x17f92cu;
    SET_GPR_U32(ctx, 3, ctx->vu0_clip_flags & 0x00FFFFFFu);
label_17f930:
    // 0x17f930: 0x4bcc61ff  .word       0x4BCC61FF                   # vclipw.xyz  $vf12, $vf12w # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x17f930u;
    { __m128 fs = ctx->vu0_vf[12]; __m128 ft = _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(3,3,3,3)); __m128 neg_ft = _mm_xor_ps(ft, _mm_castsi128_ps(_mm_set1_epi32(0x80000000))); __m128 gt = _mm_cmpgt_ps(fs, ft); __m128 lt = _mm_cmplt_ps(fs, neg_ft); uint32_t gt_mask = (uint32_t)_mm_movemask_ps(gt); uint32_t lt_mask = (uint32_t)_mm_movemask_ps(lt); uint32_t flags = ((lt_mask & 0x1) << 0) | ((gt_mask & 0x1) << 1) | ((lt_mask & 0x2) << 1) | ((gt_mask & 0x2) << 2) | ((lt_mask & 0x4) << 2) | ((gt_mask & 0x4) << 3); ctx->vu0_clip_flags = ((ctx->vu0_clip_flags << 6) | (flags & 0x3F)) & 0xFFFFFF; }
label_17f934:
    // 0x17f934: 0x4a0002ff  vnop
    ctx->pc = 0x17f934u;
    // NOP operation, no action needed for VU0
label_17f938:
    // 0x17f938: 0x4a0002ff  vnop
    ctx->pc = 0x17f938u;
    // NOP operation, no action needed for VU0
label_17f93c:
    // 0x17f93c: 0x4a0002ff  vnop
    ctx->pc = 0x17f93cu;
    // NOP operation, no action needed for VU0
label_17f940:
    // 0x17f940: 0x4a0002ff  vnop
    ctx->pc = 0x17f940u;
    // NOP operation, no action needed for VU0
label_17f944:
    // 0x17f944: 0x4a0002ff  vnop
    ctx->pc = 0x17f944u;
    // NOP operation, no action needed for VU0
label_17f948:
    // 0x17f948: 0x48449000  cfc2.ni     $a0, $vi18
    ctx->pc = 0x17f948u;
    SET_GPR_U32(ctx, 4, ctx->vu0_clip_flags & 0x00FFFFFFu);
label_17f94c:
    // 0x17f94c: 0x3063003f  andi        $v1, $v1, 0x3F
    ctx->pc = 0x17f94cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
label_17f950:
    // 0x17f950: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x17f950u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_17f954:
    // 0x17f954: 0x3083003f  andi        $v1, $a0, 0x3F
    ctx->pc = 0x17f954u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)63);
label_17f958:
    // 0x17f958: 0x3e00008  jr          $ra
label_17f95c:
    if (ctx->pc == 0x17F95Cu) {
        ctx->pc = 0x17F95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F958u;
        // 0x17f95c: 0xaca30004  sw          $v1, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17F960u;
        goto label_17f960;
    }
    ctx->pc = 0x17F958u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17F95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F958u;
        // 0x17f95c: 0xaca30004  sw          $v1, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17F958u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17F960u;
label_17f960:
    // 0x17f960: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x17f960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_17f964:
    // 0x17f964: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x17f964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_17f968:
    // 0x17f968: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x17f968u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_17f96c:
    // 0x17f96c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x17f96cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_17f970:
    // 0x17f970: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x17f970u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_17f974:
    // 0x17f974: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x17f974u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_17f978:
    // 0x17f978: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x17f978u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_17f97c:
    // 0x17f97c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x17f97cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_17f980:
    // 0x17f980: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x17f980u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_17f984:
    // 0x17f984: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17f984u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_17f988:
    // 0x17f988: 0xc0646c0  jal         func_191B00
label_17f98c:
    if (ctx->pc == 0x17F98Cu) {
        ctx->pc = 0x17F98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F988u;
        // 0x17f98c: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x17F990u;
        goto label_17f990;
    }
    ctx->pc = 0x17F988u;
    SET_GPR_U32(ctx, 31, 0x17F990u);
    ctx->pc = 0x17F98Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F988u;
    // 0x17f98c: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x191B00u;
    { ctx->pc = 0x191b00; return; }
    ctx->pc = 0x17F990u;
label_17f990:
    // 0x17f990: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x17f990u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_17f994:
    // 0x17f994: 0xc07f1a0  jal         func_1FC680
label_17f998:
    if (ctx->pc == 0x17F998u) {
        ctx->pc = 0x17F998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F994u;
        // 0x17f998: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17F99Cu;
        goto label_17f99c;
    }
    ctx->pc = 0x17F994u;
    SET_GPR_U32(ctx, 31, 0x17F99Cu);
    ctx->pc = 0x17F998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F994u;
    // 0x17f998: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC680u;
    { ctx->pc = 0x1fc680; return; }
    ctx->pc = 0x17F99Cu;
label_17f99c:
    // 0x17f99c: 0x3c02002d  lui         $v0, 0x2D
    ctx->pc = 0x17f99cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
label_17f9a0:
    // 0x17f9a0: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x17f9a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_17f9a4:
    // 0x17f9a4: 0x24420a00  addiu       $v0, $v0, 0xA00
    ctx->pc = 0x17f9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2560));
label_17f9a8:
    // 0x17f9a8: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x17f9a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_17f9ac:
    // 0x17f9ac: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x17f9acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_17f9b0:
    // 0x17f9b0: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x17f9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_17f9b4:
    // 0x17f9b4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x17f9b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_17f9b8:
    // 0x17f9b8: 0x0  nop
    ctx->pc = 0x17f9b8u;
    // NOP
label_17f9bc:
    // 0x17f9bc: 0x46140b02  mul.s       $f12, $f1, $f20
    ctx->pc = 0x17f9bcu;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
label_17f9c0:
    // 0x17f9c0: 0xc06d4fa  jal         func_1B53E8
label_17f9c4:
    if (ctx->pc == 0x17F9C4u) {
        ctx->pc = 0x17F9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F9C0u;
        // 0x17f9c4: 0x46001580  add.s       $f22, $f2, $f0 (Delay Slot)
        ctx->f[22] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x17F9C8u;
        goto label_17f9c8;
    }
    ctx->pc = 0x17F9C0u;
    SET_GPR_U32(ctx, 31, 0x17F9C8u);
    ctx->pc = 0x17F9C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F9C0u;
    // 0x17f9c4: 0x46001580  add.s       $f22, $f2, $f0 (Delay Slot)
    ctx->f[22] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B53E8u;
    { ctx->pc = 0x1b53e8; return; }
    ctx->pc = 0x17F9C8u;
label_17f9c8:
    // 0x17f9c8: 0x4600b542  mul.s       $f21, $f22, $f0
    ctx->pc = 0x17f9c8u;
    ctx->f[21] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
label_17f9cc:
    // 0x17f9cc: 0xc064654  jal         func_191950
label_17f9d0:
    if (ctx->pc == 0x17F9D0u) {
        ctx->pc = 0x17F9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F9CCu;
        // 0x17f9d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17F9D4u;
        goto label_17f9d4;
    }
    ctx->pc = 0x17F9CCu;
    SET_GPR_U32(ctx, 31, 0x17F9D4u);
    ctx->pc = 0x17F9D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F9CCu;
    // 0x17f9d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x191950u;
    { ctx->pc = 0x191950; return; }
    ctx->pc = 0x17F9D4u;
label_17f9d4:
    // 0x17f9d4: 0x0  nop
    ctx->pc = 0x17f9d4u;
    // NOP
label_17f9d8:
    // 0x17f9d8: 0x0  nop
    ctx->pc = 0x17f9d8u;
    // NOP
label_17f9dc:
    // 0x17f9dc: 0x4600b043  div.s       $f1, $f22, $f0
    ctx->pc = 0x17f9dcu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[22] * 0.0f); } else ctx->f[1] = ctx->f[22] / ctx->f[0];
label_17f9e0:
    // 0x17f9e0: 0x8f8287f8  lw          $v0, -0x7808($gp)
    ctx->pc = 0x17f9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936568)));
label_17f9e4:
    // 0x17f9e4: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x17f9e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_17f9e8:
    // 0x17f9e8: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x17f9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
label_17f9ec:
    // 0x17f9ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17f9ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_17f9f0:
    // 0x17f9f0: 0x0  nop
    ctx->pc = 0x17f9f0u;
    // NOP
label_17f9f4:
    // 0x17f9f4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x17f9f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_17f9f8:
    // 0x17f9f8: 0xc066e44  jal         func_19B910
label_17f9fc:
    if (ctx->pc == 0x17F9FCu) {
        ctx->pc = 0x17F9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F9F8u;
        // 0x17f9fc: 0x46010502  mul.s       $f20, $f0, $f1 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x17FA00u;
        goto label_17fa00;
    }
    ctx->pc = 0x17F9F8u;
    SET_GPR_U32(ctx, 31, 0x17FA00u);
    ctx->pc = 0x17F9FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F9F8u;
    // 0x17f9fc: 0x46010502  mul.s       $f20, $f0, $f1 (Delay Slot)
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B910u;
    { ctx->pc = 0x19b910; return; }
    ctx->pc = 0x17FA00u;
label_17fa00:
    // 0x17fa00: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x17fa00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_17fa04:
    // 0x17fa04: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x17fa04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_17fa08:
    // 0x17fa08: 0xafa2005c  sw          $v0, 0x5C($sp)
    ctx->pc = 0x17fa08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 2));
label_17fa0c:
    // 0x17fa0c: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x17fa0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_17fa10:
    // 0x17fa10: 0xe7b40054  swc1        $f20, 0x54($sp)
    ctx->pc = 0x17fa10u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_17fa14:
    // 0x17fa14: 0xe7b60058  swc1        $f22, 0x58($sp)
    ctx->pc = 0x17fa14u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_17fa18:
    // 0x17fa18: 0xc066e26  jal         func_19B898
label_17fa1c:
    if (ctx->pc == 0x17FA1Cu) {
        ctx->pc = 0x17FA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FA18u;
        // 0x17fa1c: 0xe7b50050  swc1        $f21, 0x50($sp) (Delay Slot)
        { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x17FA20u;
        goto label_17fa20;
    }
    ctx->pc = 0x17FA18u;
    SET_GPR_U32(ctx, 31, 0x17FA20u);
    ctx->pc = 0x17FA1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FA18u;
    // 0x17fa1c: 0xe7b50050  swc1        $f21, 0x50($sp) (Delay Slot)
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x17FA20u;
label_17fa20:
    // 0x17fa20: 0x4600ad07  neg.s       $f20, $f21
    ctx->pc = 0x17fa20u;
    ctx->f[20] = FPU_NEG_S(ctx->f[21]);
label_17fa24:
    // 0x17fa24: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x17fa24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_17fa28:
    // 0x17fa28: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x17fa28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_17fa2c:
    // 0x17fa2c: 0xafa00064  sw          $zero, 0x64($sp)
    ctx->pc = 0x17fa2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
label_17fa30:
    // 0x17fa30: 0xc066e26  jal         func_19B898
label_17fa34:
    if (ctx->pc == 0x17FA34u) {
        ctx->pc = 0x17FA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FA30u;
        // 0x17fa34: 0xe7b40060  swc1        $f20, 0x60($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x17FA38u;
        goto label_17fa38;
    }
    ctx->pc = 0x17FA30u;
    SET_GPR_U32(ctx, 31, 0x17FA38u);
    ctx->pc = 0x17FA34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FA30u;
    // 0x17fa34: 0xe7b40060  swc1        $f20, 0x60($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x17FA38u;
label_17fa38:
    // 0x17fa38: 0x27b20080  addiu       $s2, $sp, 0x80
    ctx->pc = 0x17fa38u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_17fa3c:
    // 0x17fa3c: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x17fa3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_17fa40:
    // 0x17fa40: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x17fa40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_17fa44:
    // 0x17fa44: 0xc066e26  jal         func_19B898
label_17fa48:
    if (ctx->pc == 0x17FA48u) {
        ctx->pc = 0x17FA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FA44u;
        // 0x17fa48: 0xafa00074  sw          $zero, 0x74($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17FA4Cu;
        goto label_17fa4c;
    }
    ctx->pc = 0x17FA44u;
    SET_GPR_U32(ctx, 31, 0x17FA4Cu);
    ctx->pc = 0x17FA48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FA44u;
    // 0x17fa48: 0xafa00074  sw          $zero, 0x74($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x17FA4Cu;
label_17fa4c:
    // 0x17fa4c: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x17fa4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_17fa50:
    // 0x17fa50: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x17fa50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_17fa54:
    // 0x17fa54: 0xc066e26  jal         func_19B898
label_17fa58:
    if (ctx->pc == 0x17FA58u) {
        ctx->pc = 0x17FA58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FA54u;
        // 0x17fa58: 0xe6540000  swc1        $f20, 0x0($s2) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x17FA5Cu;
        goto label_17fa5c;
    }
    ctx->pc = 0x17FA54u;
    SET_GPR_U32(ctx, 31, 0x17FA5Cu);
    ctx->pc = 0x17FA58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FA54u;
    // 0x17fa58: 0xe6540000  swc1        $f20, 0x0($s2) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x17FA5Cu;
label_17fa5c:
    // 0x17fa5c: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x17fa5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_17fa60:
    // 0x17fa60: 0x101980  sll         $v1, $s0, 6
    ctx->pc = 0x17fa60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
label_17fa64:
    // 0x17fa64: 0x24429a40  addiu       $v0, $v0, -0x65C0
    ctx->pc = 0x17fa64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941248));
label_17fa68:
    // 0x17fa68: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x17fa68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_17fa6c:
    // 0x17fa6c: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x17fa6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_17fa70:
    // 0x17fa70: 0xc066d86  jal         func_19B618
label_17fa74:
    if (ctx->pc == 0x17FA74u) {
        ctx->pc = 0x17FA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FA70u;
        // 0x17fa74: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17FA78u;
        goto label_17fa78;
    }
    ctx->pc = 0x17FA70u;
    SET_GPR_U32(ctx, 31, 0x17FA78u);
    ctx->pc = 0x17FA74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FA70u;
    // 0x17fa74: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B618u;
    { ctx->pc = 0x19b618; return; }
    ctx->pc = 0x17FA78u;
label_17fa78:
    // 0x17fa78: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x17fa78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_17fa7c:
    // 0x17fa7c: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x17fa7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_17fa80:
    // 0x17fa80: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x17fa80u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_17fa84:
    // 0x17fa84: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x17fa84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_17fa88:
    // 0x17fa88: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x17fa88u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_17fa8c:
    // 0x17fa8c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x17fa8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_17fa90:
    // 0x17fa90: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x17fa90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_17fa94:
    // 0x17fa94: 0x3e00008  jr          $ra
label_17fa98:
    if (ctx->pc == 0x17FA98u) {
        ctx->pc = 0x17FA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FA94u;
        // 0x17fa98: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17FA9Cu;
        goto label_17fa9c;
    }
    ctx->pc = 0x17FA94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17FA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FA94u;
        // 0x17fa98: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17FA94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17FA9Cu;
label_17fa9c:
    // 0x17fa9c: 0x0  nop
    ctx->pc = 0x17fa9cu;
    // NOP
label_17faa0:
    // 0x17faa0: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x17faa0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_17faa4:
    // 0x17faa4: 0xd8820010  lqc2        $vf2, 0x10($a0)
    ctx->pc = 0x17faa4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 16)));
label_17faa8:
    // 0x17faa8: 0xd8830020  lqc2        $vf3, 0x20($a0)
    ctx->pc = 0x17faa8u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 32)));
label_17faac:
    // 0x17faac: 0xd8840030  lqc2        $vf4, 0x30($a0)
    ctx->pc = 0x17faacu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 48)));
label_17fab0:
    // 0x17fab0: 0xd8a50000  lqc2        $vf5, 0x0($a1)
    ctx->pc = 0x17fab0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_17fab4:
    // 0x17fab4: 0xd8a60010  lqc2        $vf6, 0x10($a1)
    ctx->pc = 0x17fab4u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 16)));
label_17fab8:
    // 0x17fab8: 0xd8a70020  lqc2        $vf7, 0x20($a1)
    ctx->pc = 0x17fab8u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 32)));
label_17fabc:
    // 0x17fabc: 0x3e00008  jr          $ra
label_17fac0:
    if (ctx->pc == 0x17FAC0u) {
        ctx->pc = 0x17FAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FABCu;
        // 0x17fac0: 0xd8a80030  lqc2        $vf8, 0x30($a1) (Delay Slot)
        ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17FAC4u;
        goto label_17fac4;
    }
    ctx->pc = 0x17FABCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17FAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FABCu;
        // 0x17fac0: 0xd8a80030  lqc2        $vf8, 0x30($a1) (Delay Slot)
        ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17FABCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17FAC4u;
label_17fac4:
    // 0x17fac4: 0x0  nop
    ctx->pc = 0x17fac4u;
    // NOP
label_17fac8:
    // 0x17fac8: 0x0  nop
    ctx->pc = 0x17fac8u;
    // NOP
label_17facc:
    // 0x17facc: 0x0  nop
    ctx->pc = 0x17faccu;
    // NOP
label_17fad0:
    // 0x17fad0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x17fad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_17fad4:
    // 0x17fad4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x17fad4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_17fad8:
    // 0x17fad8: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x17fad8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_17fadc:
    // 0x17fadc: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x17fadcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_17fae0:
    // 0x17fae0: 0xe7ba0038  swc1        $f26, 0x38($sp)
    ctx->pc = 0x17fae0u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_17fae4:
    // 0x17fae4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17fae4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_17fae8:
    // 0x17fae8: 0xe7b90034  swc1        $f25, 0x34($sp)
    ctx->pc = 0x17fae8u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_17faec:
    // 0x17faec: 0xe7b80030  swc1        $f24, 0x30($sp)
    ctx->pc = 0x17faecu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_17faf0:
    // 0x17faf0: 0xe7b7002c  swc1        $f23, 0x2C($sp)
    ctx->pc = 0x17faf0u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_17faf4:
    // 0x17faf4: 0xe7b60028  swc1        $f22, 0x28($sp)
    ctx->pc = 0x17faf4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_17faf8:
    // 0x17faf8: 0xe7b50024  swc1        $f21, 0x24($sp)
    ctx->pc = 0x17faf8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_17fafc:
    // 0x17fafc: 0xc07f1a0  jal         func_1FC680
label_17fb00:
    if (ctx->pc == 0x17FB00u) {
        ctx->pc = 0x17FB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FAFCu;
        // 0x17fb00: 0xe7b40020  swc1        $f20, 0x20($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x17FB04u;
        goto label_17fb04;
    }
    ctx->pc = 0x17FAFCu;
    SET_GPR_U32(ctx, 31, 0x17FB04u);
    ctx->pc = 0x17FB00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FAFCu;
    // 0x17fb00: 0xe7b40020  swc1        $f20, 0x20($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC680u;
    { ctx->pc = 0x1fc680; return; }
    ctx->pc = 0x17FB04u;
label_17fb04:
    // 0x17fb04: 0x3c02002d  lui         $v0, 0x2D
    ctx->pc = 0x17fb04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
label_17fb08:
    // 0x17fb08: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x17fb08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_17fb0c:
    // 0x17fb0c: 0x24420a00  addiu       $v0, $v0, 0xA00
    ctx->pc = 0x17fb0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2560));
label_17fb10:
    // 0x17fb10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17fb10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_17fb14:
    // 0x17fb14: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17fb14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_17fb18:
    // 0x17fb18: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x17fb18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_17fb1c:
    // 0x17fb1c: 0xc064634  jal         func_1918D0
    ctx->pc = 0x17fb20u;
    return;
}
