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


void FUN_0014eba0_part2(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x14f370u: goto label_14f370;
        case 0x14f374u: goto label_14f374;
        case 0x14f378u: goto label_14f378;
        case 0x14f37cu: goto label_14f37c;
        case 0x14f380u: goto label_14f380;
        case 0x14f384u: goto label_14f384;
        case 0x14f388u: goto label_14f388;
        case 0x14f38cu: goto label_14f38c;
        case 0x14f390u: goto label_14f390;
        case 0x14f394u: goto label_14f394;
        case 0x14f398u: goto label_14f398;
        case 0x14f39cu: goto label_14f39c;
        case 0x14f3a0u: goto label_14f3a0;
        case 0x14f3a4u: goto label_14f3a4;
        case 0x14f3a8u: goto label_14f3a8;
        case 0x14f3acu: goto label_14f3ac;
        case 0x14f3b0u: goto label_14f3b0;
        case 0x14f3b4u: goto label_14f3b4;
        case 0x14f3b8u: goto label_14f3b8;
        case 0x14f3bcu: goto label_14f3bc;
        case 0x14f3c0u: goto label_14f3c0;
        case 0x14f3c4u: goto label_14f3c4;
        case 0x14f3c8u: goto label_14f3c8;
        case 0x14f3ccu: goto label_14f3cc;
        case 0x14f3d0u: goto label_14f3d0;
        case 0x14f3d4u: goto label_14f3d4;
        case 0x14f3d8u: goto label_14f3d8;
        case 0x14f3dcu: goto label_14f3dc;
        case 0x14f3e0u: goto label_14f3e0;
        case 0x14f3e4u: goto label_14f3e4;
        case 0x14f3e8u: goto label_14f3e8;
        case 0x14f3ecu: goto label_14f3ec;
        case 0x14f3f0u: goto label_14f3f0;
        case 0x14f3f4u: goto label_14f3f4;
        case 0x14f3f8u: goto label_14f3f8;
        case 0x14f3fcu: goto label_14f3fc;
        case 0x14f400u: goto label_14f400;
        case 0x14f404u: goto label_14f404;
        case 0x14f408u: goto label_14f408;
        case 0x14f40cu: goto label_14f40c;
        case 0x14f410u: goto label_14f410;
        case 0x14f414u: goto label_14f414;
        case 0x14f418u: goto label_14f418;
        case 0x14f41cu: goto label_14f41c;
        case 0x14f420u: goto label_14f420;
        case 0x14f424u: goto label_14f424;
        case 0x14f428u: goto label_14f428;
        case 0x14f42cu: goto label_14f42c;
        case 0x14f430u: goto label_14f430;
        case 0x14f434u: goto label_14f434;
        case 0x14f438u: goto label_14f438;
        case 0x14f43cu: goto label_14f43c;
        case 0x14f440u: goto label_14f440;
        case 0x14f444u: goto label_14f444;
        case 0x14f448u: goto label_14f448;
        case 0x14f44cu: goto label_14f44c;
        case 0x14f450u: goto label_14f450;
        case 0x14f454u: goto label_14f454;
        case 0x14f458u: goto label_14f458;
        case 0x14f45cu: goto label_14f45c;
        case 0x14f460u: goto label_14f460;
        case 0x14f464u: goto label_14f464;
        case 0x14f468u: goto label_14f468;
        case 0x14f46cu: goto label_14f46c;
        case 0x14f470u: goto label_14f470;
        case 0x14f474u: goto label_14f474;
        case 0x14f478u: goto label_14f478;
        case 0x14f47cu: goto label_14f47c;
        case 0x14f480u: goto label_14f480;
        case 0x14f484u: goto label_14f484;
        case 0x14f488u: goto label_14f488;
        case 0x14f48cu: goto label_14f48c;
        case 0x14f490u: goto label_14f490;
        case 0x14f494u: goto label_14f494;
        case 0x14f498u: goto label_14f498;
        case 0x14f49cu: goto label_14f49c;
        case 0x14f4a0u: goto label_14f4a0;
        case 0x14f4a4u: goto label_14f4a4;
        case 0x14f4a8u: goto label_14f4a8;
        case 0x14f4acu: goto label_14f4ac;
        case 0x14f4b0u: goto label_14f4b0;
        case 0x14f4b4u: goto label_14f4b4;
        case 0x14f4b8u: goto label_14f4b8;
        case 0x14f4bcu: goto label_14f4bc;
        case 0x14f4c0u: goto label_14f4c0;
        case 0x14f4c4u: goto label_14f4c4;
        case 0x14f4c8u: goto label_14f4c8;
        case 0x14f4ccu: goto label_14f4cc;
        case 0x14f4d0u: goto label_14f4d0;
        case 0x14f4d4u: goto label_14f4d4;
        case 0x14f4d8u: goto label_14f4d8;
        case 0x14f4dcu: goto label_14f4dc;
        case 0x14f4e0u: goto label_14f4e0;
        case 0x14f4e4u: goto label_14f4e4;
        case 0x14f4e8u: goto label_14f4e8;
        case 0x14f4ecu: goto label_14f4ec;
        case 0x14f4f0u: goto label_14f4f0;
        case 0x14f4f4u: goto label_14f4f4;
        case 0x14f4f8u: goto label_14f4f8;
        case 0x14f4fcu: goto label_14f4fc;
        case 0x14f500u: goto label_14f500;
        case 0x14f504u: goto label_14f504;
        case 0x14f508u: goto label_14f508;
        case 0x14f50cu: goto label_14f50c;
        case 0x14f510u: goto label_14f510;
        case 0x14f514u: goto label_14f514;
        case 0x14f518u: goto label_14f518;
        case 0x14f51cu: goto label_14f51c;
        case 0x14f520u: goto label_14f520;
        case 0x14f524u: goto label_14f524;
        case 0x14f528u: goto label_14f528;
        case 0x14f52cu: goto label_14f52c;
        case 0x14f530u: goto label_14f530;
        case 0x14f534u: goto label_14f534;
        case 0x14f538u: goto label_14f538;
        case 0x14f53cu: goto label_14f53c;
        case 0x14f540u: goto label_14f540;
        case 0x14f544u: goto label_14f544;
        case 0x14f548u: goto label_14f548;
        case 0x14f54cu: goto label_14f54c;
        case 0x14f550u: goto label_14f550;
        case 0x14f554u: goto label_14f554;
        case 0x14f558u: goto label_14f558;
        case 0x14f55cu: goto label_14f55c;
        case 0x14f560u: goto label_14f560;
        case 0x14f564u: goto label_14f564;
        case 0x14f568u: goto label_14f568;
        case 0x14f56cu: goto label_14f56c;
        case 0x14f570u: goto label_14f570;
        case 0x14f574u: goto label_14f574;
        case 0x14f578u: goto label_14f578;
        case 0x14f57cu: goto label_14f57c;
        case 0x14f580u: goto label_14f580;
        case 0x14f584u: goto label_14f584;
        case 0x14f588u: goto label_14f588;
        case 0x14f58cu: goto label_14f58c;
        case 0x14f590u: goto label_14f590;
        case 0x14f594u: goto label_14f594;
        case 0x14f598u: goto label_14f598;
        case 0x14f59cu: goto label_14f59c;
        case 0x14f5a0u: goto label_14f5a0;
        case 0x14f5a4u: goto label_14f5a4;
        case 0x14f5a8u: goto label_14f5a8;
        case 0x14f5acu: goto label_14f5ac;
        case 0x14f5b0u: goto label_14f5b0;
        case 0x14f5b4u: goto label_14f5b4;
        case 0x14f5b8u: goto label_14f5b8;
        case 0x14f5bcu: goto label_14f5bc;
        case 0x14f5c0u: goto label_14f5c0;
        case 0x14f5c4u: goto label_14f5c4;
        case 0x14f5c8u: goto label_14f5c8;
        case 0x14f5ccu: goto label_14f5cc;
        case 0x14f5d0u: goto label_14f5d0;
        case 0x14f5d4u: goto label_14f5d4;
        case 0x14f5d8u: goto label_14f5d8;
        case 0x14f5dcu: goto label_14f5dc;
        case 0x14f5e0u: goto label_14f5e0;
        case 0x14f5e4u: goto label_14f5e4;
        case 0x14f5e8u: goto label_14f5e8;
        case 0x14f5ecu: goto label_14f5ec;
        case 0x14f5f0u: goto label_14f5f0;
        case 0x14f5f4u: goto label_14f5f4;
        case 0x14f5f8u: goto label_14f5f8;
        case 0x14f5fcu: goto label_14f5fc;
        case 0x14f600u: goto label_14f600;
        case 0x14f604u: goto label_14f604;
        case 0x14f608u: goto label_14f608;
        case 0x14f60cu: goto label_14f60c;
        case 0x14f610u: goto label_14f610;
        case 0x14f614u: goto label_14f614;
        case 0x14f618u: goto label_14f618;
        case 0x14f61cu: goto label_14f61c;
        case 0x14f620u: goto label_14f620;
        case 0x14f624u: goto label_14f624;
        case 0x14f628u: goto label_14f628;
        case 0x14f62cu: goto label_14f62c;
        case 0x14f630u: goto label_14f630;
        case 0x14f634u: goto label_14f634;
        case 0x14f638u: goto label_14f638;
        case 0x14f63cu: goto label_14f63c;
        case 0x14f640u: goto label_14f640;
        case 0x14f644u: goto label_14f644;
        case 0x14f648u: goto label_14f648;
        case 0x14f64cu: goto label_14f64c;
        case 0x14f650u: goto label_14f650;
        case 0x14f654u: goto label_14f654;
        case 0x14f658u: goto label_14f658;
        case 0x14f65cu: goto label_14f65c;
        case 0x14f660u: goto label_14f660;
        case 0x14f664u: goto label_14f664;
        case 0x14f668u: goto label_14f668;
        case 0x14f66cu: goto label_14f66c;
        case 0x14f670u: goto label_14f670;
        case 0x14f674u: goto label_14f674;
        case 0x14f678u: goto label_14f678;
        case 0x14f67cu: goto label_14f67c;
        case 0x14f680u: goto label_14f680;
        case 0x14f684u: goto label_14f684;
        case 0x14f688u: goto label_14f688;
        case 0x14f68cu: goto label_14f68c;
        case 0x14f690u: goto label_14f690;
        case 0x14f694u: goto label_14f694;
        case 0x14f698u: goto label_14f698;
        case 0x14f69cu: goto label_14f69c;
        case 0x14f6a0u: goto label_14f6a0;
        case 0x14f6a4u: goto label_14f6a4;
        case 0x14f6a8u: goto label_14f6a8;
        case 0x14f6acu: goto label_14f6ac;
        case 0x14f6b0u: goto label_14f6b0;
        case 0x14f6b4u: goto label_14f6b4;
        case 0x14f6b8u: goto label_14f6b8;
        case 0x14f6bcu: goto label_14f6bc;
        case 0x14f6c0u: goto label_14f6c0;
        case 0x14f6c4u: goto label_14f6c4;
        case 0x14f6c8u: goto label_14f6c8;
        case 0x14f6ccu: goto label_14f6cc;
        case 0x14f6d0u: goto label_14f6d0;
        case 0x14f6d4u: goto label_14f6d4;
        case 0x14f6d8u: goto label_14f6d8;
        case 0x14f6dcu: goto label_14f6dc;
        case 0x14f6e0u: goto label_14f6e0;
        case 0x14f6e4u: goto label_14f6e4;
        case 0x14f6e8u: goto label_14f6e8;
        case 0x14f6ecu: goto label_14f6ec;
        case 0x14f6f0u: goto label_14f6f0;
        case 0x14f6f4u: goto label_14f6f4;
        case 0x14f6f8u: goto label_14f6f8;
        case 0x14f6fcu: goto label_14f6fc;
        case 0x14f700u: goto label_14f700;
        case 0x14f704u: goto label_14f704;
        case 0x14f708u: goto label_14f708;
        case 0x14f70cu: goto label_14f70c;
        case 0x14f710u: goto label_14f710;
        case 0x14f714u: goto label_14f714;
        case 0x14f718u: goto label_14f718;
        case 0x14f71cu: goto label_14f71c;
        case 0x14f720u: goto label_14f720;
        case 0x14f724u: goto label_14f724;
        case 0x14f728u: goto label_14f728;
        case 0x14f72cu: goto label_14f72c;
        case 0x14f730u: goto label_14f730;
        case 0x14f734u: goto label_14f734;
        case 0x14f738u: goto label_14f738;
        case 0x14f73cu: goto label_14f73c;
        case 0x14f740u: goto label_14f740;
        case 0x14f744u: goto label_14f744;
        case 0x14f748u: goto label_14f748;
        case 0x14f74cu: goto label_14f74c;
        case 0x14f750u: goto label_14f750;
        case 0x14f754u: goto label_14f754;
        case 0x14f758u: goto label_14f758;
        case 0x14f75cu: goto label_14f75c;
        case 0x14f760u: goto label_14f760;
        case 0x14f764u: goto label_14f764;
        case 0x14f768u: goto label_14f768;
        case 0x14f76cu: goto label_14f76c;
        case 0x14f770u: goto label_14f770;
        case 0x14f774u: goto label_14f774;
        case 0x14f778u: goto label_14f778;
        case 0x14f77cu: goto label_14f77c;
        case 0x14f780u: goto label_14f780;
        case 0x14f784u: goto label_14f784;
        case 0x14f788u: goto label_14f788;
        case 0x14f78cu: goto label_14f78c;
        case 0x14f790u: goto label_14f790;
        case 0x14f794u: goto label_14f794;
        case 0x14f798u: goto label_14f798;
        case 0x14f79cu: goto label_14f79c;
        case 0x14f7a0u: goto label_14f7a0;
        case 0x14f7a4u: goto label_14f7a4;
        case 0x14f7a8u: goto label_14f7a8;
        case 0x14f7acu: goto label_14f7ac;
        case 0x14f7b0u: goto label_14f7b0;
        case 0x14f7b4u: goto label_14f7b4;
        case 0x14f7b8u: goto label_14f7b8;
        case 0x14f7bcu: goto label_14f7bc;
        case 0x14f7c0u: goto label_14f7c0;
        case 0x14f7c4u: goto label_14f7c4;
        case 0x14f7c8u: goto label_14f7c8;
        case 0x14f7ccu: goto label_14f7cc;
        case 0x14f7d0u: goto label_14f7d0;
        case 0x14f7d4u: goto label_14f7d4;
        case 0x14f7d8u: goto label_14f7d8;
        case 0x14f7dcu: goto label_14f7dc;
        case 0x14f7e0u: goto label_14f7e0;
        case 0x14f7e4u: goto label_14f7e4;
        case 0x14f7e8u: goto label_14f7e8;
        case 0x14f7ecu: goto label_14f7ec;
        case 0x14f7f0u: goto label_14f7f0;
        case 0x14f7f4u: goto label_14f7f4;
        case 0x14f7f8u: goto label_14f7f8;
        case 0x14f7fcu: goto label_14f7fc;
        case 0x14f800u: goto label_14f800;
        case 0x14f804u: goto label_14f804;
        case 0x14f808u: goto label_14f808;
        case 0x14f80cu: goto label_14f80c;
        case 0x14f810u: goto label_14f810;
        case 0x14f814u: goto label_14f814;
        case 0x14f818u: goto label_14f818;
        case 0x14f81cu: goto label_14f81c;
        case 0x14f820u: goto label_14f820;
        case 0x14f824u: goto label_14f824;
        case 0x14f828u: goto label_14f828;
        case 0x14f82cu: goto label_14f82c;
        case 0x14f830u: goto label_14f830;
        case 0x14f834u: goto label_14f834;
        case 0x14f838u: goto label_14f838;
        case 0x14f83cu: goto label_14f83c;
        case 0x14f840u: goto label_14f840;
        case 0x14f844u: goto label_14f844;
        case 0x14f848u: goto label_14f848;
        case 0x14f84cu: goto label_14f84c;
        case 0x14f850u: goto label_14f850;
        case 0x14f854u: goto label_14f854;
        case 0x14f858u: goto label_14f858;
        case 0x14f85cu: goto label_14f85c;
        case 0x14f860u: goto label_14f860;
        case 0x14f864u: goto label_14f864;
        case 0x14f868u: goto label_14f868;
        case 0x14f86cu: goto label_14f86c;
        case 0x14f870u: goto label_14f870;
        case 0x14f874u: goto label_14f874;
        case 0x14f878u: goto label_14f878;
        case 0x14f87cu: goto label_14f87c;
        case 0x14f880u: goto label_14f880;
        case 0x14f884u: goto label_14f884;
        case 0x14f888u: goto label_14f888;
        case 0x14f88cu: goto label_14f88c;
        case 0x14f890u: goto label_14f890;
        case 0x14f894u: goto label_14f894;
        case 0x14f898u: goto label_14f898;
        case 0x14f89cu: goto label_14f89c;
        case 0x14f8a0u: goto label_14f8a0;
        case 0x14f8a4u: goto label_14f8a4;
        case 0x14f8a8u: goto label_14f8a8;
        case 0x14f8acu: goto label_14f8ac;
        case 0x14f8b0u: goto label_14f8b0;
        case 0x14f8b4u: goto label_14f8b4;
        case 0x14f8b8u: goto label_14f8b8;
        case 0x14f8bcu: goto label_14f8bc;
        case 0x14f8c0u: goto label_14f8c0;
        case 0x14f8c4u: goto label_14f8c4;
        case 0x14f8c8u: goto label_14f8c8;
        case 0x14f8ccu: goto label_14f8cc;
        case 0x14f8d0u: goto label_14f8d0;
        case 0x14f8d4u: goto label_14f8d4;
        case 0x14f8d8u: goto label_14f8d8;
        case 0x14f8dcu: goto label_14f8dc;
        case 0x14f8e0u: goto label_14f8e0;
        case 0x14f8e4u: goto label_14f8e4;
        case 0x14f8e8u: goto label_14f8e8;
        case 0x14f8ecu: goto label_14f8ec;
        case 0x14f8f0u: goto label_14f8f0;
        case 0x14f8f4u: goto label_14f8f4;
        case 0x14f8f8u: goto label_14f8f8;
        case 0x14f8fcu: goto label_14f8fc;
        case 0x14f900u: goto label_14f900;
        case 0x14f904u: goto label_14f904;
        case 0x14f908u: goto label_14f908;
        case 0x14f90cu: goto label_14f90c;
        case 0x14f910u: goto label_14f910;
        case 0x14f914u: goto label_14f914;
        case 0x14f918u: goto label_14f918;
        case 0x14f91cu: goto label_14f91c;
        case 0x14f920u: goto label_14f920;
        case 0x14f924u: goto label_14f924;
        case 0x14f928u: goto label_14f928;
        case 0x14f92cu: goto label_14f92c;
        case 0x14f930u: goto label_14f930;
        case 0x14f934u: goto label_14f934;
        case 0x14f938u: goto label_14f938;
        case 0x14f93cu: goto label_14f93c;
        case 0x14f940u: goto label_14f940;
        case 0x14f944u: goto label_14f944;
        case 0x14f948u: goto label_14f948;
        case 0x14f94cu: goto label_14f94c;
        case 0x14f950u: goto label_14f950;
        case 0x14f954u: goto label_14f954;
        case 0x14f958u: goto label_14f958;
        case 0x14f95cu: goto label_14f95c;
        case 0x14f960u: goto label_14f960;
        case 0x14f964u: goto label_14f964;
        case 0x14f968u: goto label_14f968;
        case 0x14f96cu: goto label_14f96c;
        case 0x14f970u: goto label_14f970;
        case 0x14f974u: goto label_14f974;
        case 0x14f978u: goto label_14f978;
        case 0x14f97cu: goto label_14f97c;
        case 0x14f980u: goto label_14f980;
        case 0x14f984u: goto label_14f984;
        case 0x14f988u: goto label_14f988;
        case 0x14f98cu: goto label_14f98c;
        case 0x14f990u: goto label_14f990;
        case 0x14f994u: goto label_14f994;
        case 0x14f998u: goto label_14f998;
        case 0x14f99cu: goto label_14f99c;
        case 0x14f9a0u: goto label_14f9a0;
        case 0x14f9a4u: goto label_14f9a4;
        case 0x14f9a8u: goto label_14f9a8;
        case 0x14f9acu: goto label_14f9ac;
        case 0x14f9b0u: goto label_14f9b0;
        case 0x14f9b4u: goto label_14f9b4;
        case 0x14f9b8u: goto label_14f9b8;
        case 0x14f9bcu: goto label_14f9bc;
        case 0x14f9c0u: goto label_14f9c0;
        case 0x14f9c4u: goto label_14f9c4;
        case 0x14f9c8u: goto label_14f9c8;
        case 0x14f9ccu: goto label_14f9cc;
        case 0x14f9d0u: goto label_14f9d0;
        case 0x14f9d4u: goto label_14f9d4;
        case 0x14f9d8u: goto label_14f9d8;
        case 0x14f9dcu: goto label_14f9dc;
        case 0x14f9e0u: goto label_14f9e0;
        case 0x14f9e4u: goto label_14f9e4;
        case 0x14f9e8u: goto label_14f9e8;
        case 0x14f9ecu: goto label_14f9ec;
        case 0x14f9f0u: goto label_14f9f0;
        case 0x14f9f4u: goto label_14f9f4;
        case 0x14f9f8u: goto label_14f9f8;
        case 0x14f9fcu: goto label_14f9fc;
        case 0x14fa00u: goto label_14fa00;
        case 0x14fa04u: goto label_14fa04;
        case 0x14fa08u: goto label_14fa08;
        case 0x14fa0cu: goto label_14fa0c;
        case 0x14fa10u: goto label_14fa10;
        case 0x14fa14u: goto label_14fa14;
        case 0x14fa18u: goto label_14fa18;
        case 0x14fa1cu: goto label_14fa1c;
        case 0x14fa20u: goto label_14fa20;
        case 0x14fa24u: goto label_14fa24;
        case 0x14fa28u: goto label_14fa28;
        case 0x14fa2cu: goto label_14fa2c;
        case 0x14fa30u: goto label_14fa30;
        case 0x14fa34u: goto label_14fa34;
        case 0x14fa38u: goto label_14fa38;
        case 0x14fa3cu: goto label_14fa3c;
        case 0x14fa40u: goto label_14fa40;
        case 0x14fa44u: goto label_14fa44;
        case 0x14fa48u: goto label_14fa48;
        case 0x14fa4cu: goto label_14fa4c;
        case 0x14fa50u: goto label_14fa50;
        case 0x14fa54u: goto label_14fa54;
        case 0x14fa58u: goto label_14fa58;
        case 0x14fa5cu: goto label_14fa5c;
        case 0x14fa60u: goto label_14fa60;
        case 0x14fa64u: goto label_14fa64;
        case 0x14fa68u: goto label_14fa68;
        case 0x14fa6cu: goto label_14fa6c;
        case 0x14fa70u: goto label_14fa70;
        case 0x14fa74u: goto label_14fa74;
        case 0x14fa78u: goto label_14fa78;
        case 0x14fa7cu: goto label_14fa7c;
        case 0x14fa80u: goto label_14fa80;
        case 0x14fa84u: goto label_14fa84;
        case 0x14fa88u: goto label_14fa88;
        case 0x14fa8cu: goto label_14fa8c;
        case 0x14fa90u: goto label_14fa90;
        case 0x14fa94u: goto label_14fa94;
        case 0x14fa98u: goto label_14fa98;
        case 0x14fa9cu: goto label_14fa9c;
        case 0x14faa0u: goto label_14faa0;
        case 0x14faa4u: goto label_14faa4;
        case 0x14faa8u: goto label_14faa8;
        case 0x14faacu: goto label_14faac;
        case 0x14fab0u: goto label_14fab0;
        case 0x14fab4u: goto label_14fab4;
        case 0x14fab8u: goto label_14fab8;
        case 0x14fabcu: goto label_14fabc;
        case 0x14fac0u: goto label_14fac0;
        case 0x14fac4u: goto label_14fac4;
        case 0x14fac8u: goto label_14fac8;
        case 0x14faccu: goto label_14facc;
        case 0x14fad0u: goto label_14fad0;
        case 0x14fad4u: goto label_14fad4;
        case 0x14fad8u: goto label_14fad8;
        case 0x14fadcu: goto label_14fadc;
        case 0x14fae0u: goto label_14fae0;
        case 0x14fae4u: goto label_14fae4;
        case 0x14fae8u: goto label_14fae8;
        case 0x14faecu: goto label_14faec;
        case 0x14faf0u: goto label_14faf0;
        case 0x14faf4u: goto label_14faf4;
        case 0x14faf8u: goto label_14faf8;
        case 0x14fafcu: goto label_14fafc;
        case 0x14fb00u: goto label_14fb00;
        case 0x14fb04u: goto label_14fb04;
        case 0x14fb08u: goto label_14fb08;
        case 0x14fb0cu: goto label_14fb0c;
        case 0x14fb10u: goto label_14fb10;
        case 0x14fb14u: goto label_14fb14;
        case 0x14fb18u: goto label_14fb18;
        case 0x14fb1cu: goto label_14fb1c;
        case 0x14fb20u: goto label_14fb20;
        case 0x14fb24u: goto label_14fb24;
        case 0x14fb28u: goto label_14fb28;
        case 0x14fb2cu: goto label_14fb2c;
        case 0x14fb30u: goto label_14fb30;
        case 0x14fb34u: goto label_14fb34;
        case 0x14fb38u: goto label_14fb38;
        case 0x14fb3cu: goto label_14fb3c;
        default: return;
    }

label_14f370:
    // 0x14f370: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_14f374:
    if (ctx->pc == 0x14F374u) {
        ctx->pc = 0x14F374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F370u;
        // 0x14f374: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14F378u;
        goto label_14f378;
    }
    ctx->pc = 0x14F370u;
    {
        const bool branch_taken_0x14f370 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F370u;
        // 0x14f374: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f370) {
            ctx->pc = 0x14F3ACu;
            goto label_14f3ac;
        }
    }
    ctx->pc = 0x14F378u;
label_14f378:
    // 0x14f378: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x14f378u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_14f37c:
    // 0x14f37c: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x14f37cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_14f380:
    // 0x14f380: 0xc066e08  jal         func_19B820
label_14f384:
    if (ctx->pc == 0x14F384u) {
        ctx->pc = 0x14F384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F380u;
        // 0x14f384: 0x26060150  addiu       $a2, $s0, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14F388u;
        goto label_14f388;
    }
    ctx->pc = 0x14F380u;
    SET_GPR_U32(ctx, 31, 0x14F388u);
    ctx->pc = 0x14F384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F380u;
    // 0x14f384: 0x26060150  addiu       $a2, $s0, 0x150 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B820u;
    { ctx->pc = 0x19b820; return; }
    ctx->pc = 0x14F388u;
label_14f388:
    // 0x14f388: 0xc6010050  lwc1        $f1, 0x50($s0)
    ctx->pc = 0x14f388u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_14f38c:
    // 0x14f38c: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x14f38cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14f390:
    // 0x14f390: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x14f390u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_14f394:
    // 0x14f394: 0xe6000050  swc1        $f0, 0x50($s0)
    ctx->pc = 0x14f394u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
label_14f398:
    // 0x14f398: 0xc6010058  lwc1        $f1, 0x58($s0)
    ctx->pc = 0x14f398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_14f39c:
    // 0x14f39c: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x14f39cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14f3a0:
    // 0x14f3a0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x14f3a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_14f3a4:
    // 0x14f3a4: 0xe6000058  swc1        $f0, 0x58($s0)
    ctx->pc = 0x14f3a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
label_14f3a8:
    // 0x14f3a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14f3a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_14f3ac:
    // 0x14f3ac: 0xc0511f0  jal         func_1447C0
label_14f3b0:
    if (ctx->pc == 0x14F3B0u) {
        ctx->pc = 0x14F3B4u;
        goto label_14f3b4;
    }
    ctx->pc = 0x14F3ACu;
    SET_GPR_U32(ctx, 31, 0x14F3B4u);
    ctx->pc = 0x1447C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1447C0u, 0x14F3ACu, 0x14F3B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F3B4u;
label_14f3b4:
    // 0x14f3b4: 0x8e050200  lw          $a1, 0x200($s0)
    ctx->pc = 0x14f3b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 512)));
label_14f3b8:
    // 0x14f3b8: 0x10a0002a  beqz        $a1, . + 4 + (0x2A << 2)
label_14f3bc:
    if (ctx->pc == 0x14F3BCu) {
        ctx->pc = 0x14F3C0u;
        goto label_14f3c0;
    }
    ctx->pc = 0x14F3B8u;
    {
        const bool branch_taken_0x14f3b8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f3b8) {
            ctx->pc = 0x14F464u;
            goto label_14f464;
        }
    }
    ctx->pc = 0x14F3C0u;
label_14f3c0:
    // 0x14f3c0: 0x8f848590  lw          $a0, -0x7A70($gp)
    ctx->pc = 0x14f3c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
label_14f3c4:
    // 0x14f3c4: 0x30830004  andi        $v1, $a0, 0x4
    ctx->pc = 0x14f3c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
label_14f3c8:
    // 0x14f3c8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_14f3cc:
    if (ctx->pc == 0x14F3CCu) {
        ctx->pc = 0x14F3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F3C8u;
        // 0x14f3cc: 0x30830020  andi        $v1, $a0, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        ctx->pc = 0x14F3D0u;
        goto label_14f3d0;
    }
    ctx->pc = 0x14F3C8u;
    {
        const bool branch_taken_0x14f3c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F3C8u;
        // 0x14f3cc: 0x30830020  andi        $v1, $a0, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f3c8) {
            ctx->pc = 0x14F3D8u;
            goto label_14f3d8;
        }
    }
    ctx->pc = 0x14F3D0u;
label_14f3d0:
    // 0x14f3d0: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
label_14f3d4:
    if (ctx->pc == 0x14F3D4u) {
        ctx->pc = 0x14F3D8u;
        goto label_14f3d8;
    }
    ctx->pc = 0x14F3D0u;
    {
        const bool branch_taken_0x14f3d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f3d0) {
            ctx->pc = 0x14F404u;
            goto label_14f404;
        }
    }
    ctx->pc = 0x14F3D8u;
label_14f3d8:
    // 0x14f3d8: 0x84a4003c  lh          $a0, 0x3C($a1)
    ctx->pc = 0x14f3d8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 60)));
label_14f3dc:
    // 0x14f3dc: 0x2403004d  addiu       $v1, $zero, 0x4D
    ctx->pc = 0x14f3dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
label_14f3e0:
    // 0x14f3e0: 0x10830020  beq         $a0, $v1, . + 4 + (0x20 << 2)
label_14f3e4:
    if (ctx->pc == 0x14F3E4u) {
        ctx->pc = 0x14F3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F3E0u;
        // 0x14f3e4: 0x2403004c  addiu       $v1, $zero, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14F3E8u;
        goto label_14f3e8;
    }
    ctx->pc = 0x14F3E0u;
    {
        const bool branch_taken_0x14f3e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x14F3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F3E0u;
        // 0x14f3e4: 0x2403004c  addiu       $v1, $zero, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f3e0) {
            ctx->pc = 0x14F464u;
            goto label_14f464;
        }
    }
    ctx->pc = 0x14F3E8u;
label_14f3e8:
    // 0x14f3e8: 0x1083001e  beq         $a0, $v1, . + 4 + (0x1E << 2)
label_14f3ec:
    if (ctx->pc == 0x14F3ECu) {
        ctx->pc = 0x14F3F0u;
        goto label_14f3f0;
    }
    ctx->pc = 0x14F3E8u;
    {
        const bool branch_taken_0x14f3e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x14f3e8) {
            ctx->pc = 0x14F464u;
            goto label_14f464;
        }
    }
    ctx->pc = 0x14F3F0u;
label_14f3f0:
    // 0x14f3f0: 0x2403005b  addiu       $v1, $zero, 0x5B
    ctx->pc = 0x14f3f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 91));
label_14f3f4:
    // 0x14f3f4: 0x1083001b  beq         $a0, $v1, . + 4 + (0x1B << 2)
label_14f3f8:
    if (ctx->pc == 0x14F3F8u) {
        ctx->pc = 0x14F3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F3F4u;
        // 0x14f3f8: 0x2403005a  addiu       $v1, $zero, 0x5A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14F3FCu;
        goto label_14f3fc;
    }
    ctx->pc = 0x14F3F4u;
    {
        const bool branch_taken_0x14f3f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x14F3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F3F4u;
        // 0x14f3f8: 0x2403005a  addiu       $v1, $zero, 0x5A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f3f4) {
            ctx->pc = 0x14F464u;
            goto label_14f464;
        }
    }
    ctx->pc = 0x14F3FCu;
label_14f3fc:
    // 0x14f3fc: 0x10830019  beq         $a0, $v1, . + 4 + (0x19 << 2)
label_14f400:
    if (ctx->pc == 0x14F400u) {
        ctx->pc = 0x14F404u;
        goto label_14f404;
    }
    ctx->pc = 0x14F3FCu;
    {
        const bool branch_taken_0x14f3fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x14f3fc) {
            ctx->pc = 0x14F464u;
            goto label_14f464;
        }
    }
    ctx->pc = 0x14F404u;
label_14f404:
    // 0x14f404: 0xc6000050  lwc1        $f0, 0x50($s0)
    ctx->pc = 0x14f404u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14f408:
    // 0x14f408: 0xe4a00050  swc1        $f0, 0x50($a1)
    ctx->pc = 0x14f408u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 80), bits); }
label_14f40c:
    // 0x14f40c: 0xc6000054  lwc1        $f0, 0x54($s0)
    ctx->pc = 0x14f40cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14f410:
    // 0x14f410: 0xe4a00054  swc1        $f0, 0x54($a1)
    ctx->pc = 0x14f410u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 84), bits); }
label_14f414:
    // 0x14f414: 0xc6000058  lwc1        $f0, 0x58($s0)
    ctx->pc = 0x14f414u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14f418:
    // 0x14f418: 0xe4a00058  swc1        $f0, 0x58($a1)
    ctx->pc = 0x14f418u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 88), bits); }
label_14f41c:
    // 0x14f41c: 0xc600005c  lwc1        $f0, 0x5C($s0)
    ctx->pc = 0x14f41cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14f420:
    // 0x14f420: 0xe4a0005c  swc1        $f0, 0x5C($a1)
    ctx->pc = 0x14f420u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 92), bits); }
label_14f424:
    // 0x14f424: 0xc6000040  lwc1        $f0, 0x40($s0)
    ctx->pc = 0x14f424u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14f428:
    // 0x14f428: 0xe4a00040  swc1        $f0, 0x40($a1)
    ctx->pc = 0x14f428u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 64), bits); }
label_14f42c:
    // 0x14f42c: 0xc6000044  lwc1        $f0, 0x44($s0)
    ctx->pc = 0x14f42cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14f430:
    // 0x14f430: 0xe4a00044  swc1        $f0, 0x44($a1)
    ctx->pc = 0x14f430u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 68), bits); }
label_14f434:
    // 0x14f434: 0xc6000048  lwc1        $f0, 0x48($s0)
    ctx->pc = 0x14f434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14f438:
    // 0x14f438: 0xe4a00048  swc1        $f0, 0x48($a1)
    ctx->pc = 0x14f438u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 72), bits); }
label_14f43c:
    // 0x14f43c: 0xc600004c  lwc1        $f0, 0x4C($s0)
    ctx->pc = 0x14f43cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14f440:
    // 0x14f440: 0xe4a0004c  swc1        $f0, 0x4C($a1)
    ctx->pc = 0x14f440u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 76), bits); }
label_14f444:
    // 0x14f444: 0xc6000150  lwc1        $f0, 0x150($s0)
    ctx->pc = 0x14f444u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14f448:
    // 0x14f448: 0xe4a00150  swc1        $f0, 0x150($a1)
    ctx->pc = 0x14f448u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 336), bits); }
label_14f44c:
    // 0x14f44c: 0xc6000154  lwc1        $f0, 0x154($s0)
    ctx->pc = 0x14f44cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14f450:
    // 0x14f450: 0xe4a00154  swc1        $f0, 0x154($a1)
    ctx->pc = 0x14f450u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 340), bits); }
label_14f454:
    // 0x14f454: 0xc6000158  lwc1        $f0, 0x158($s0)
    ctx->pc = 0x14f454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14f458:
    // 0x14f458: 0xe4a00158  swc1        $f0, 0x158($a1)
    ctx->pc = 0x14f458u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 344), bits); }
label_14f45c:
    // 0x14f45c: 0xc600015c  lwc1        $f0, 0x15C($s0)
    ctx->pc = 0x14f45cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 348)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14f460:
    // 0x14f460: 0xe4a0015c  swc1        $f0, 0x15C($a1)
    ctx->pc = 0x14f460u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 348), bits); }
label_14f464:
    // 0x14f464: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x14f464u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_14f468:
    // 0x14f468: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x14f468u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_14f46c:
    // 0x14f46c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14f46cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_14f470:
    // 0x14f470: 0x3e00008  jr          $ra
label_14f474:
    if (ctx->pc == 0x14F474u) {
        ctx->pc = 0x14F474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F470u;
        // 0x14f474: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14F478u;
        goto label_14f478;
    }
    ctx->pc = 0x14F470u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14F474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F470u;
        // 0x14f474: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14F470u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14F478u;
label_14f478:
    // 0x14f478: 0x0  nop
    ctx->pc = 0x14f478u;
    // NOP
label_14f47c:
    // 0x14f47c: 0x0  nop
    ctx->pc = 0x14f47cu;
    // NOP
label_14f480:
    // 0x14f480: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x14f480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_14f484:
    // 0x14f484: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x14f484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_14f488:
    // 0x14f488: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x14f488u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_14f48c:
    // 0x14f48c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x14f48cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_14f490:
    // 0x14f490: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x14f490u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_14f494:
    // 0x14f494: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x14f494u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_14f498:
    // 0x14f498: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x14f498u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14f49c:
    // 0x14f49c: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x14f49cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_14f4a0:
    // 0x14f4a0: 0xe4810000  swc1        $f1, 0x0($a0)
    ctx->pc = 0x14f4a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_14f4a4:
    // 0x14f4a4: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x14f4a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14f4a8:
    // 0x14f4a8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x14f4a8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_14f4ac:
    // 0x14f4ac: 0x0  nop
    ctx->pc = 0x14f4acu;
    // NOP
label_14f4b0:
    // 0x14f4b0: 0x4501007c  bc1t        . + 4 + (0x7C << 2)
label_14f4b4:
    if (ctx->pc == 0x14F4B4u) {
        ctx->pc = 0x14F4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F4B0u;
        // 0x14f4b4: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14F4B8u;
        goto label_14f4b8;
    }
    ctx->pc = 0x14F4B0u;
    {
        const bool branch_taken_0x14f4b0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x14F4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F4B0u;
        // 0x14f4b4: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f4b0) {
            ctx->pc = 0x14F6A4u;
            goto label_14f6a4;
        }
    }
    ctx->pc = 0x14F4B8u;
label_14f4b8:
    // 0x14f4b8: 0x8630003e  lh          $s0, 0x3E($s1)
    ctx->pc = 0x14f4b8u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 62)));
label_14f4bc:
    // 0x14f4bc: 0x240201ff  addiu       $v0, $zero, 0x1FF
    ctx->pc = 0x14f4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 511));
label_14f4c0:
    // 0x14f4c0: 0x16020004  bne         $s0, $v0, . + 4 + (0x4 << 2)
label_14f4c4:
    if (ctx->pc == 0x14F4C4u) {
        ctx->pc = 0x14F4C8u;
        goto label_14f4c8;
    }
    ctx->pc = 0x14F4C0u;
    {
        const bool branch_taken_0x14f4c0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x14f4c0) {
            ctx->pc = 0x14F4D4u;
            goto label_14f4d4;
        }
    }
    ctx->pc = 0x14F4C8u;
label_14f4c8:
    // 0x14f4c8: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x14f4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_14f4cc:
    // 0x14f4cc: 0x90500008  lbu         $s0, 0x8($v0)
    ctx->pc = 0x14f4ccu;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 8)));
label_14f4d0:
    // 0x14f4d0: 0x0  nop
    ctx->pc = 0x14f4d0u;
    // NOP
label_14f4d4:
    // 0x14f4d4: 0x8e230020  lw          $v1, 0x20($s1)
    ctx->pc = 0x14f4d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_14f4d8:
    // 0x14f4d8: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x14f4d8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
label_14f4dc:
    // 0x14f4dc: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x14f4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_14f4e0:
    // 0x14f4e0: 0x3442c000  ori         $v0, $v0, 0xC000
    ctx->pc = 0x14f4e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49152);
label_14f4e4:
    // 0x14f4e4: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x14f4e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_14f4e8:
    // 0x14f4e8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x14f4e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_14f4ec:
    // 0x14f4ec: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x14f4ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_14f4f0:
    // 0x14f4f0: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
label_14f4f4:
    if (ctx->pc == 0x14F4F4u) {
        ctx->pc = 0x14F4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F4F0u;
        // 0x14f4f4: 0x3c020008  lui         $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14F4F8u;
        goto label_14f4f8;
    }
    ctx->pc = 0x14F4F0u;
    {
        const bool branch_taken_0x14f4f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14F4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F4F0u;
        // 0x14f4f4: 0x3c020008  lui         $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f4f0) {
            ctx->pc = 0x14F560u;
            goto label_14f560;
        }
    }
    ctx->pc = 0x14F4F8u;
label_14f4f8:
    // 0x14f4f8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x14f4f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_14f4fc:
    // 0x14f4fc: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
label_14f500:
    if (ctx->pc == 0x14F500u) {
        ctx->pc = 0x14F504u;
        goto label_14f504;
    }
    ctx->pc = 0x14F4FCu;
    {
        const bool branch_taken_0x14f4fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x14f4fc) {
            ctx->pc = 0x14F510u;
            goto label_14f510;
        }
    }
    ctx->pc = 0x14F504u;
label_14f504:
    // 0x14f504: 0x90820009  lbu         $v0, 0x9($a0)
    ctx->pc = 0x14f504u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 9)));
label_14f508:
    // 0x14f508: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_14f50c:
    if (ctx->pc == 0x14F50Cu) {
        ctx->pc = 0x14F510u;
        goto label_14f510;
    }
    ctx->pc = 0x14F508u;
    {
        const bool branch_taken_0x14f508 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14f508) {
            ctx->pc = 0x14F528u;
            goto label_14f528;
        }
    }
    ctx->pc = 0x14F510u;
label_14f510:
    // 0x14f510: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
label_14f514:
    if (ctx->pc == 0x14F514u) {
        ctx->pc = 0x14F518u;
        goto label_14f518;
    }
    ctx->pc = 0x14F510u;
    {
        const bool branch_taken_0x14f510 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f510) {
            ctx->pc = 0x14F560u;
            goto label_14f560;
        }
    }
    ctx->pc = 0x14F518u;
label_14f518:
    // 0x14f518: 0x8623003c  lh          $v1, 0x3C($s1)
    ctx->pc = 0x14f518u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 60)));
label_14f51c:
    // 0x14f51c: 0x90820008  lbu         $v0, 0x8($a0)
    ctx->pc = 0x14f51cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 8)));
label_14f520:
    // 0x14f520: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
label_14f524:
    if (ctx->pc == 0x14F524u) {
        ctx->pc = 0x14F528u;
        goto label_14f528;
    }
    ctx->pc = 0x14F520u;
    {
        const bool branch_taken_0x14f520 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x14f520) {
            ctx->pc = 0x14F560u;
            goto label_14f560;
        }
    }
    ctx->pc = 0x14F528u;
label_14f528:
    // 0x14f528: 0x90820009  lbu         $v0, 0x9($a0)
    ctx->pc = 0x14f528u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 9)));
label_14f52c:
    // 0x14f52c: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_14f530:
    if (ctx->pc == 0x14F530u) {
        ctx->pc = 0x14F530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F52Cu;
        // 0x14f530: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14F534u;
        goto label_14f534;
    }
    ctx->pc = 0x14F52Cu;
    {
        const bool branch_taken_0x14f52c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x14F530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F52Cu;
        // 0x14f530: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f52c) {
            ctx->pc = 0x14F540u;
            goto label_14f540;
        }
    }
    ctx->pc = 0x14F534u;
label_14f534:
    // 0x14f534: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14f534u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14f538:
    // 0x14f538: 0x10000007  b           . + 4 + (0x7 << 2)
label_14f53c:
    if (ctx->pc == 0x14F53Cu) {
        ctx->pc = 0x14F53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F538u;
        // 0x14f53c: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x14F540u;
        goto label_14f540;
    }
    ctx->pc = 0x14F538u;
    {
        const bool branch_taken_0x14f538 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F538u;
        // 0x14f53c: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f538) {
            ctx->pc = 0x14F558u;
            goto label_14f558;
        }
    }
    ctx->pc = 0x14F540u;
label_14f540:
    // 0x14f540: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x14f540u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_14f544:
    // 0x14f544: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x14f544u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_14f548:
    // 0x14f548: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x14f548u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14f54c:
    // 0x14f54c: 0x0  nop
    ctx->pc = 0x14f54cu;
    // NOP
label_14f550:
    // 0x14f550: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x14f550u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_14f554:
    // 0x14f554: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x14f554u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_14f558:
    // 0x14f558: 0x10000002  b           . + 4 + (0x2 << 2)
label_14f55c:
    if (ctx->pc == 0x14F55Cu) {
        ctx->pc = 0x14F55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F558u;
        // 0x14f55c: 0x46000507  neg.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_NEG_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x14F560u;
        goto label_14f560;
    }
    ctx->pc = 0x14F558u;
    {
        const bool branch_taken_0x14f558 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F558u;
        // 0x14f55c: 0x46000507  neg.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_NEG_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f558) {
            ctx->pc = 0x14F564u;
            goto label_14f564;
        }
    }
    ctx->pc = 0x14F560u;
label_14f560:
    // 0x14f560: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x14f560u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_14f564:
    // 0x14f564: 0xc050564  jal         func_141590
label_14f568:
    if (ctx->pc == 0x14F568u) {
        ctx->pc = 0x14F568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F564u;
        // 0x14f568: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14F56Cu;
        goto label_14f56c;
    }
    ctx->pc = 0x14F564u;
    SET_GPR_U32(ctx, 31, 0x14F56Cu);
    ctx->pc = 0x14F568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F564u;
    // 0x14f568: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x141590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x141590u, 0x14F564u, 0x14F56Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F56Cu;
label_14f56c:
    // 0x14f56c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14f56cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_14f570:
    // 0x14f570: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x14f570u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_14f574:
    // 0x14f574: 0xc050f08  jal         func_143C20
label_14f578:
    if (ctx->pc == 0x14F578u) {
        ctx->pc = 0x14F578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F574u;
        // 0x14f578: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x14F57Cu;
        goto label_14f57c;
    }
    ctx->pc = 0x14F574u;
    SET_GPR_U32(ctx, 31, 0x14F57Cu);
    ctx->pc = 0x14F578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F574u;
    // 0x14f578: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x143C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143C20u, 0x14F574u, 0x14F57Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F57Cu;
label_14f57c:
    // 0x14f57c: 0xc0505b4  jal         func_1416D0
label_14f580:
    if (ctx->pc == 0x14F580u) {
        ctx->pc = 0x14F580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F57Cu;
        // 0x14f580: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14F584u;
        goto label_14f584;
    }
    ctx->pc = 0x14F57Cu;
    SET_GPR_U32(ctx, 31, 0x14F584u);
    ctx->pc = 0x14F580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F57Cu;
    // 0x14f580: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1416D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1416D0u, 0x14F57Cu, 0x14F584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F584u;
label_14f584:
    // 0x14f584: 0x8e230034  lw          $v1, 0x34($s1)
    ctx->pc = 0x14f584u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_14f588:
    // 0x14f588: 0x10600046  beqz        $v1, . + 4 + (0x46 << 2)
label_14f58c:
    if (ctx->pc == 0x14F58Cu) {
        ctx->pc = 0x14F590u;
        goto label_14f590;
    }
    ctx->pc = 0x14F588u;
    {
        const bool branch_taken_0x14f588 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f588) {
            ctx->pc = 0x14F6A4u;
            goto label_14f6a4;
        }
    }
    ctx->pc = 0x14F590u;
label_14f590:
    // 0x14f590: 0x8c650008  lw          $a1, 0x8($v1)
    ctx->pc = 0x14f590u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_14f594:
    // 0x14f594: 0x3c044049  lui         $a0, 0x4049
    ctx->pc = 0x14f594u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16457 << 16));
label_14f598:
    // 0x14f598: 0x34840fdb  ori         $a0, $a0, 0xFDB
    ctx->pc = 0x14f598u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4059);
label_14f59c:
    // 0x14f59c: 0x44841800  mtc1        $a0, $f3
    ctx->pc = 0x14f59cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_14f5a0:
    // 0x14f5a0: 0xc4a10098  lwc1        $f1, 0x98($a1)
    ctx->pc = 0x14f5a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_14f5a4:
    // 0x14f5a4: 0x46000881  sub.s       $f2, $f1, $f0
    ctx->pc = 0x14f5a4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_14f5a8:
    // 0x14f5a8: 0x46031036  c.le.s      $f2, $f3
    ctx->pc = 0x14f5a8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_14f5ac:
    // 0x14f5ac: 0x0  nop
    ctx->pc = 0x14f5acu;
    // NOP
label_14f5b0:
    // 0x14f5b0: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_14f5b4:
    if (ctx->pc == 0x14F5B4u) {
        ctx->pc = 0x14F5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F5B0u;
        // 0x14f5b4: 0x24a60098  addiu       $a2, $a1, 0x98 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 152));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14F5B8u;
        goto label_14f5b8;
    }
    ctx->pc = 0x14F5B0u;
    {
        const bool branch_taken_0x14f5b0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x14F5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F5B0u;
        // 0x14f5b4: 0x24a60098  addiu       $a2, $a1, 0x98 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 152));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f5b0) {
            ctx->pc = 0x14F5CCu;
            goto label_14f5cc;
        }
    }
    ctx->pc = 0x14F5B8u;
label_14f5b8:
    // 0x14f5b8: 0x3c0440c9  lui         $a0, 0x40C9
    ctx->pc = 0x14f5b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16585 << 16));
label_14f5bc:
    // 0x14f5bc: 0x34840fdb  ori         $a0, $a0, 0xFDB
    ctx->pc = 0x14f5bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4059);
label_14f5c0:
    // 0x14f5c0: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x14f5c0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_14f5c4:
    // 0x14f5c4: 0x1000000d  b           . + 4 + (0xD << 2)
label_14f5c8:
    if (ctx->pc == 0x14F5C8u) {
        ctx->pc = 0x14F5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F5C4u;
        // 0x14f5c8: 0x46011081  sub.s       $f2, $f2, $f1 (Delay Slot)
        ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x14F5CCu;
        goto label_14f5cc;
    }
    ctx->pc = 0x14F5C4u;
    {
        const bool branch_taken_0x14f5c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F5C4u;
        // 0x14f5c8: 0x46011081  sub.s       $f2, $f2, $f1 (Delay Slot)
        ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f5c4) {
            ctx->pc = 0x14F5FCu;
            goto label_14f5fc;
        }
    }
    ctx->pc = 0x14F5CCu;
label_14f5cc:
    // 0x14f5cc: 0x3c04c049  lui         $a0, 0xC049
    ctx->pc = 0x14f5ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49225 << 16));
label_14f5d0:
    // 0x14f5d0: 0x34840fdb  ori         $a0, $a0, 0xFDB
    ctx->pc = 0x14f5d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4059);
label_14f5d4:
    // 0x14f5d4: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x14f5d4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_14f5d8:
    // 0x14f5d8: 0x0  nop
    ctx->pc = 0x14f5d8u;
    // NOP
label_14f5dc:
    // 0x14f5dc: 0x46011036  c.le.s      $f2, $f1
    ctx->pc = 0x14f5dcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_14f5e0:
    // 0x14f5e0: 0x0  nop
    ctx->pc = 0x14f5e0u;
    // NOP
label_14f5e4:
    // 0x14f5e4: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_14f5e8:
    if (ctx->pc == 0x14F5E8u) {
        ctx->pc = 0x14F5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F5E4u;
        // 0x14f5e8: 0x3c0440c9  lui         $a0, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14F5ECu;
        goto label_14f5ec;
    }
    ctx->pc = 0x14F5E4u;
    {
        const bool branch_taken_0x14f5e4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x14F5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F5E4u;
        // 0x14f5e8: 0x3c0440c9  lui         $a0, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f5e4) {
            ctx->pc = 0x14F5FCu;
            goto label_14f5fc;
        }
    }
    ctx->pc = 0x14F5ECu;
label_14f5ec:
    // 0x14f5ec: 0x34840fdb  ori         $a0, $a0, 0xFDB
    ctx->pc = 0x14f5ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4059);
label_14f5f0:
    // 0x14f5f0: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x14f5f0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_14f5f4:
    // 0x14f5f4: 0x10000001  b           . + 4 + (0x1 << 2)
label_14f5f8:
    if (ctx->pc == 0x14F5F8u) {
        ctx->pc = 0x14F5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F5F4u;
        // 0x14f5f8: 0x46020880  add.s       $f2, $f1, $f2 (Delay Slot)
        ctx->f[2] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x14F5FCu;
        goto label_14f5fc;
    }
    ctx->pc = 0x14F5F4u;
    {
        const bool branch_taken_0x14f5f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F5F4u;
        // 0x14f5f8: 0x46020880  add.s       $f2, $f1, $f2 (Delay Slot)
        ctx->f[2] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f5f4) {
            ctx->pc = 0x14F5FCu;
            goto label_14f5fc;
        }
    }
    ctx->pc = 0x14F5FCu;
label_14f5fc:
    // 0x14f5fc: 0xe4c20000  swc1        $f2, 0x0($a2)
    ctx->pc = 0x14f5fcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
label_14f600:
    // 0x14f600: 0x3c044049  lui         $a0, 0x4049
    ctx->pc = 0x14f600u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16457 << 16));
label_14f604:
    // 0x14f604: 0x8c650008  lw          $a1, 0x8($v1)
    ctx->pc = 0x14f604u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_14f608:
    // 0x14f608: 0x34840fdb  ori         $a0, $a0, 0xFDB
    ctx->pc = 0x14f608u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4059);
label_14f60c:
    // 0x14f60c: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x14f60cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_14f610:
    // 0x14f610: 0xc4a205a8  lwc1        $f2, 0x5A8($a1)
    ctx->pc = 0x14f610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_14f614:
    // 0x14f614: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x14f614u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_14f618:
    // 0x14f618: 0x46011036  c.le.s      $f2, $f1
    ctx->pc = 0x14f618u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_14f61c:
    // 0x14f61c: 0x0  nop
    ctx->pc = 0x14f61cu;
    // NOP
label_14f620:
    // 0x14f620: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_14f624:
    if (ctx->pc == 0x14F624u) {
        ctx->pc = 0x14F624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F620u;
        // 0x14f624: 0x24a605a8  addiu       $a2, $a1, 0x5A8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 1448));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14F628u;
        goto label_14f628;
    }
    ctx->pc = 0x14F620u;
    {
        const bool branch_taken_0x14f620 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x14F624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F620u;
        // 0x14f624: 0x24a605a8  addiu       $a2, $a1, 0x5A8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 1448));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f620) {
            ctx->pc = 0x14F63Cu;
            goto label_14f63c;
        }
    }
    ctx->pc = 0x14F628u;
label_14f628:
    // 0x14f628: 0x3c0440c9  lui         $a0, 0x40C9
    ctx->pc = 0x14f628u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16585 << 16));
label_14f62c:
    // 0x14f62c: 0x34840fdb  ori         $a0, $a0, 0xFDB
    ctx->pc = 0x14f62cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4059);
label_14f630:
    // 0x14f630: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x14f630u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14f634:
    // 0x14f634: 0x1000000d  b           . + 4 + (0xD << 2)
label_14f638:
    if (ctx->pc == 0x14F638u) {
        ctx->pc = 0x14F638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F634u;
        // 0x14f638: 0x46001081  sub.s       $f2, $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x14F63Cu;
        goto label_14f63c;
    }
    ctx->pc = 0x14F634u;
    {
        const bool branch_taken_0x14f634 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F634u;
        // 0x14f638: 0x46001081  sub.s       $f2, $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f634) {
            ctx->pc = 0x14F66Cu;
            goto label_14f66c;
        }
    }
    ctx->pc = 0x14F63Cu;
label_14f63c:
    // 0x14f63c: 0x3c04c049  lui         $a0, 0xC049
    ctx->pc = 0x14f63cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49225 << 16));
label_14f640:
    // 0x14f640: 0x34840fdb  ori         $a0, $a0, 0xFDB
    ctx->pc = 0x14f640u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4059);
label_14f644:
    // 0x14f644: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x14f644u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14f648:
    // 0x14f648: 0x0  nop
    ctx->pc = 0x14f648u;
    // NOP
label_14f64c:
    // 0x14f64c: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x14f64cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_14f650:
    // 0x14f650: 0x0  nop
    ctx->pc = 0x14f650u;
    // NOP
label_14f654:
    // 0x14f654: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_14f658:
    if (ctx->pc == 0x14F658u) {
        ctx->pc = 0x14F658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F654u;
        // 0x14f658: 0x3c0440c9  lui         $a0, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14F65Cu;
        goto label_14f65c;
    }
    ctx->pc = 0x14F654u;
    {
        const bool branch_taken_0x14f654 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x14F658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F654u;
        // 0x14f658: 0x3c0440c9  lui         $a0, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f654) {
            ctx->pc = 0x14F66Cu;
            goto label_14f66c;
        }
    }
    ctx->pc = 0x14F65Cu;
label_14f65c:
    // 0x14f65c: 0x34840fdb  ori         $a0, $a0, 0xFDB
    ctx->pc = 0x14f65cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4059);
label_14f660:
    // 0x14f660: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x14f660u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14f664:
    // 0x14f664: 0x10000001  b           . + 4 + (0x1 << 2)
label_14f668:
    if (ctx->pc == 0x14F668u) {
        ctx->pc = 0x14F668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F664u;
        // 0x14f668: 0x46020080  add.s       $f2, $f0, $f2 (Delay Slot)
        ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x14F66Cu;
        goto label_14f66c;
    }
    ctx->pc = 0x14F664u;
    {
        const bool branch_taken_0x14f664 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F664u;
        // 0x14f668: 0x46020080  add.s       $f2, $f0, $f2 (Delay Slot)
        ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f664) {
            ctx->pc = 0x14F66Cu;
            goto label_14f66c;
        }
    }
    ctx->pc = 0x14F66Cu;
label_14f66c:
    // 0x14f66c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x14f66cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_14f670:
    // 0x14f670: 0x0  nop
    ctx->pc = 0x14f670u;
    // NOP
label_14f674:
    // 0x14f674: 0x460ca034  c.lt.s      $f20, $f12
    ctx->pc = 0x14f674u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_14f678:
    // 0x14f678: 0x0  nop
    ctx->pc = 0x14f678u;
    // NOP
label_14f67c:
    // 0x14f67c: 0x45000009  bc1f        . + 4 + (0x9 << 2)
label_14f680:
    if (ctx->pc == 0x14F680u) {
        ctx->pc = 0x14F680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F67Cu;
        // 0x14f680: 0xe4c20000  swc1        $f2, 0x0($a2) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x14F684u;
        goto label_14f684;
    }
    ctx->pc = 0x14F67Cu;
    {
        const bool branch_taken_0x14f67c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x14F680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F67Cu;
        // 0x14f680: 0xe4c20000  swc1        $f2, 0x0($a2) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f67c) {
            ctx->pc = 0x14F6A4u;
            goto label_14f6a4;
        }
    }
    ctx->pc = 0x14F684u;
label_14f684:
    // 0x14f684: 0x84620016  lh          $v0, 0x16($v1)
    ctx->pc = 0x14f684u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 22)));
label_14f688:
    // 0x14f688: 0xc46d0010  lwc1        $f13, 0x10($v1)
    ctx->pc = 0x14f688u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_14f68c:
    // 0x14f68c: 0x8e240030  lw          $a0, 0x30($s1)
    ctx->pc = 0x14f68cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_14f690:
    // 0x14f690: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x14f690u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14f694:
    // 0x14f694: 0x8c650008  lw          $a1, 0x8($v1)
    ctx->pc = 0x14f694u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_14f698:
    // 0x14f698: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x14f698u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14f69c:
    // 0x14f69c: 0xc05a1c0  jal         func_168700
label_14f6a0:
    if (ctx->pc == 0x14F6A0u) {
        ctx->pc = 0x14F6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F69Cu;
        // 0x14f6a0: 0x2447ffff  addiu       $a3, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14F6A4u;
        goto label_14f6a4;
    }
    ctx->pc = 0x14F69Cu;
    SET_GPR_U32(ctx, 31, 0x14F6A4u);
    ctx->pc = 0x14F6A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F69Cu;
    // 0x14f6a0: 0x2447ffff  addiu       $a3, $v0, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x168700u;
    { ctx->pc = 0x168700; return; }
    ctx->pc = 0x14F6A4u;
label_14f6a4:
    // 0x14f6a4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x14f6a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_14f6a8:
    // 0x14f6a8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x14f6a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_14f6ac:
    // 0x14f6ac: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x14f6acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_14f6b0:
    // 0x14f6b0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x14f6b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_14f6b4:
    // 0x14f6b4: 0x3e00008  jr          $ra
label_14f6b8:
    if (ctx->pc == 0x14F6B8u) {
        ctx->pc = 0x14F6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F6B4u;
        // 0x14f6b8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14F6BCu;
        goto label_14f6bc;
    }
    ctx->pc = 0x14F6B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14F6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F6B4u;
        // 0x14f6b8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14F6B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14F6BCu;
label_14f6bc:
    // 0x14f6bc: 0x0  nop
    ctx->pc = 0x14f6bcu;
    // NOP
label_14f6c0:
    // 0x14f6c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x14f6c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_14f6c4:
    // 0x14f6c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x14f6c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_14f6c8:
    // 0x14f6c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14f6c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_14f6cc:
    // 0x14f6cc: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x14f6ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
label_14f6d0:
    // 0x14f6d0: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x14f6d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
label_14f6d4:
    // 0x14f6d4: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x14f6d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
label_14f6d8:
    // 0x14f6d8: 0xafa0002c  sw          $zero, 0x2C($sp)
    ctx->pc = 0x14f6d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
label_14f6dc:
    // 0x14f6dc: 0x8c830024  lw          $v1, 0x24($a0)
    ctx->pc = 0x14f6dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
label_14f6e0:
    // 0x14f6e0: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x14f6e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_14f6e4:
    // 0x14f6e4: 0x30a30080  andi        $v1, $a1, 0x80
    ctx->pc = 0x14f6e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)128);
label_14f6e8:
    // 0x14f6e8: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
label_14f6ec:
    if (ctx->pc == 0x14F6ECu) {
        ctx->pc = 0x14F6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F6E8u;
        // 0x14f6ec: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14F6F0u;
        goto label_14f6f0;
    }
    ctx->pc = 0x14F6E8u;
    {
        const bool branch_taken_0x14f6e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F6E8u;
        // 0x14f6ec: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f6e8) {
            ctx->pc = 0x14F73Cu;
            goto label_14f73c;
        }
    }
    ctx->pc = 0x14F6F0u;
label_14f6f0:
    // 0x14f6f0: 0xc4800214  lwc1        $f0, 0x214($a0)
    ctx->pc = 0x14f6f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 532)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14f6f4:
    // 0x14f6f4: 0xc6010044  lwc1        $f1, 0x44($s0)
    ctx->pc = 0x14f6f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_14f6f8:
    // 0x14f6f8: 0x0  nop
    ctx->pc = 0x14f6f8u;
    // NOP
label_14f6fc:
    // 0x14f6fc: 0x44090800  mfc1        $t1, $f1
    ctx->pc = 0x14f6fcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
label_14f700:
    // 0x14f700: 0x48a90800  qmtc2.ni    $t1, $vf1
    ctx->pc = 0x14f700u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 9));
label_14f704:
    // 0x14f704: 0x4a000138  vcallms     0x20
    ctx->pc = 0x14f704u;
    {     ctx->vu0_tpc = 0x20;     runtime->executeVU0Microprogram(rdram, ctx, 0x20); }
label_14f708:
    // 0x14f708: 0x48290801  qmfc2.i     $t1, $vf1
    ctx->pc = 0x14f708u;
    SET_GPR_VEC(ctx, 9, _mm_castps_si128(ctx->vu0_vf[1]));
label_14f70c:
    // 0x14f70c: 0x44890800  mtc1        $t1, $f1
    ctx->pc = 0x14f70cu;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_14f710:
    // 0x14f710: 0x48291000  qmfc2.ni    $t1, $vf2
    ctx->pc = 0x14f710u;
    SET_GPR_VEC(ctx, 9, _mm_castps_si128(ctx->vu0_vf[2]));
label_14f714:
    // 0x14f714: 0x44891000  mtc1        $t1, $f2
    ctx->pc = 0x14f714u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_14f718:
    // 0x14f718: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x14f718u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_14f71c:
    // 0x14f71c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x14f71cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_14f720:
    // 0x14f720: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x14f720u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_14f724:
    // 0x14f724: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x14f724u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_14f728:
    // 0x14f728: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x14f728u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_14f72c:
    // 0x14f72c: 0xc0504cc  jal         func_141330
label_14f730:
    if (ctx->pc == 0x14F730u) {
        ctx->pc = 0x14F730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F72Cu;
        // 0x14f730: 0xe7a00028  swc1        $f0, 0x28($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x14F734u;
        goto label_14f734;
    }
    ctx->pc = 0x14F72Cu;
    SET_GPR_U32(ctx, 31, 0x14F734u);
    ctx->pc = 0x14F730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F72Cu;
    // 0x14f730: 0xe7a00028  swc1        $f0, 0x28($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x141330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x141330u, 0x14F72Cu, 0x14F734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F734u;
label_14f734:
    // 0x14f734: 0x1000001a  b           . + 4 + (0x1A << 2)
label_14f738:
    if (ctx->pc == 0x14F738u) {
        ctx->pc = 0x14F738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F734u;
        // 0x14f738: 0xc6010050  lwc1        $f1, 0x50($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x14F73Cu;
        goto label_14f73c;
    }
    ctx->pc = 0x14F734u;
    {
        const bool branch_taken_0x14f734 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F734u;
        // 0x14f738: 0xc6010050  lwc1        $f1, 0x50($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f734) {
            ctx->pc = 0x14F7A0u;
            goto label_14f7a0;
        }
    }
    ctx->pc = 0x14F73Cu;
label_14f73c:
    // 0x14f73c: 0xc60101bc  lwc1        $f1, 0x1BC($s0)
    ctx->pc = 0x14f73cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 444)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_14f740:
    // 0x14f740: 0x3c0340c9  lui         $v1, 0x40C9
    ctx->pc = 0x14f740u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
label_14f744:
    // 0x14f744: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x14f744u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_14f748:
    // 0x14f748: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x14f748u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14f74c:
    // 0x14f74c: 0x0  nop
    ctx->pc = 0x14f74cu;
    // NOP
label_14f750:
    // 0x14f750: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x14f750u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_14f754:
    // 0x14f754: 0x0  nop
    ctx->pc = 0x14f754u;
    // NOP
label_14f758:
    // 0x14f758: 0x45010010  bc1t        . + 4 + (0x10 << 2)
label_14f75c:
    if (ctx->pc == 0x14F75Cu) {
        ctx->pc = 0x14F75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F758u;
        // 0x14f75c: 0x30a30100  andi        $v1, $a1, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)256);
        ctx->in_delay_slot = false;
        ctx->pc = 0x14F760u;
        goto label_14f760;
    }
    ctx->pc = 0x14F758u;
    {
        const bool branch_taken_0x14f758 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x14F75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F758u;
        // 0x14f75c: 0x30a30100  andi        $v1, $a1, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)256);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f758) {
            ctx->pc = 0x14F79Cu;
            goto label_14f79c;
        }
    }
    ctx->pc = 0x14F760u;
label_14f760:
    // 0x14f760: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
label_14f764:
    if (ctx->pc == 0x14F764u) {
        ctx->pc = 0x14F768u;
        goto label_14f768;
    }
    ctx->pc = 0x14F760u;
    {
        const bool branch_taken_0x14f760 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f760) {
            ctx->pc = 0x14F79Cu;
            goto label_14f79c;
        }
    }
    ctx->pc = 0x14F768u;
label_14f768:
    // 0x14f768: 0xc4800218  lwc1        $f0, 0x218($a0)
    ctx->pc = 0x14f768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14f76c:
    // 0x14f76c: 0x0  nop
    ctx->pc = 0x14f76cu;
    // NOP
label_14f770:
    // 0x14f770: 0x44090800  mfc1        $t1, $f1
    ctx->pc = 0x14f770u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
label_14f774:
    // 0x14f774: 0x48a90800  qmtc2.ni    $t1, $vf1
    ctx->pc = 0x14f774u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 9));
label_14f778:
    // 0x14f778: 0x4a000138  vcallms     0x20
    ctx->pc = 0x14f778u;
    {     ctx->vu0_tpc = 0x20;     runtime->executeVU0Microprogram(rdram, ctx, 0x20); }
label_14f77c:
    // 0x14f77c: 0x48290801  qmfc2.i     $t1, $vf1
    ctx->pc = 0x14f77cu;
    SET_GPR_VEC(ctx, 9, _mm_castps_si128(ctx->vu0_vf[1]));
label_14f780:
    // 0x14f780: 0x44890800  mtc1        $t1, $f1
    ctx->pc = 0x14f780u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_14f784:
    // 0x14f784: 0x48291000  qmfc2.ni    $t1, $vf2
    ctx->pc = 0x14f784u;
    SET_GPR_VEC(ctx, 9, _mm_castps_si128(ctx->vu0_vf[2]));
label_14f788:
    // 0x14f788: 0x44891000  mtc1        $t1, $f2
    ctx->pc = 0x14f788u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_14f78c:
    // 0x14f78c: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x14f78cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_14f790:
    // 0x14f790: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x14f790u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_14f794:
    // 0x14f794: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x14f794u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_14f798:
    // 0x14f798: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x14f798u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_14f79c:
    // 0x14f79c: 0xc6010050  lwc1        $f1, 0x50($s0)
    ctx->pc = 0x14f79cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_14f7a0:
    // 0x14f7a0: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x14f7a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14f7a4:
    // 0x14f7a4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x14f7a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_14f7a8:
    // 0x14f7a8: 0xe6000050  swc1        $f0, 0x50($s0)
    ctx->pc = 0x14f7a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
label_14f7ac:
    // 0x14f7ac: 0xc6010058  lwc1        $f1, 0x58($s0)
    ctx->pc = 0x14f7acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_14f7b0:
    // 0x14f7b0: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x14f7b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14f7b4:
    // 0x14f7b4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x14f7b4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_14f7b8:
    // 0x14f7b8: 0xe6000058  swc1        $f0, 0x58($s0)
    ctx->pc = 0x14f7b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
label_14f7bc:
    // 0x14f7bc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x14f7bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_14f7c0:
    // 0x14f7c0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14f7c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_14f7c4:
    // 0x14f7c4: 0x3e00008  jr          $ra
label_14f7c8:
    if (ctx->pc == 0x14F7C8u) {
        ctx->pc = 0x14F7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F7C4u;
        // 0x14f7c8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14F7CCu;
        goto label_14f7cc;
    }
    ctx->pc = 0x14F7C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14F7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F7C4u;
        // 0x14f7c8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14F7C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14F7CCu;
label_14f7cc:
    // 0x14f7cc: 0x0  nop
    ctx->pc = 0x14f7ccu;
    // NOP
label_14f7d0:
    // 0x14f7d0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x14f7d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_14f7d4:
    // 0x14f7d4: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x14f7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_14f7d8:
    // 0x14f7d8: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x14f7d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_14f7dc:
    // 0x14f7dc: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x14f7dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_14f7e0:
    // 0x14f7e0: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x14f7e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_14f7e4:
    // 0x14f7e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14f7e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14f7e8:
    // 0x14f7e8: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x14f7e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_14f7ec:
    // 0x14f7ec: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x14f7ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_14f7f0:
    // 0x14f7f0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x14f7f0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_14f7f4:
    // 0x14f7f4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x14f7f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_14f7f8:
    // 0x14f7f8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x14f7f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_14f7fc:
    // 0x14f7fc: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x14f7fcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_14f800:
    // 0x14f800: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x14f800u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_14f804:
    // 0x14f804: 0xc48101bc  lwc1        $f1, 0x1BC($a0)
    ctx->pc = 0x14f804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 444)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_14f808:
    // 0x14f808: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x14f808u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_14f80c:
    // 0x14f80c: 0x0  nop
    ctx->pc = 0x14f80cu;
    // NOP
label_14f810:
    // 0x14f810: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_14f814:
    if (ctx->pc == 0x14F814u) {
        ctx->pc = 0x14F814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F810u;
        // 0x14f814: 0x241201ff  addiu       $s2, $zero, 0x1FF (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 511));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14F818u;
        goto label_14f818;
    }
    ctx->pc = 0x14F810u;
    {
        const bool branch_taken_0x14f810 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x14F814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F810u;
        // 0x14f814: 0x241201ff  addiu       $s2, $zero, 0x1FF (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 511));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f810) {
            ctx->pc = 0x14F820u;
            goto label_14f820;
        }
    }
    ctx->pc = 0x14F818u;
label_14f818:
    // 0x14f818: 0x10000002  b           . + 4 + (0x2 << 2)
label_14f81c:
    if (ctx->pc == 0x14F81Cu) {
        ctx->pc = 0x14F81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F818u;
        // 0x14f81c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14F820u;
        goto label_14f820;
    }
    ctx->pc = 0x14F818u;
    {
        const bool branch_taken_0x14f818 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F818u;
        // 0x14f81c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f818) {
            ctx->pc = 0x14F824u;
            goto label_14f824;
        }
    }
    ctx->pc = 0x14F820u;
label_14f820:
    // 0x14f820: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x14f820u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14f824:
    // 0x14f824: 0xc66201bc  lwc1        $f2, 0x1BC($s3)
    ctx->pc = 0x14f824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 444)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_14f828:
    // 0x14f828: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x14f828u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_14f82c:
    // 0x14f82c: 0xc6610044  lwc1        $f1, 0x44($s3)
    ctx->pc = 0x14f82cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_14f830:
    // 0x14f830: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x14f830u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_14f834:
    // 0x14f834: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14f834u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14f838:
    // 0x14f838: 0x0  nop
    ctx->pc = 0x14f838u;
    // NOP
label_14f83c:
    // 0x14f83c: 0x46011541  sub.s       $f21, $f2, $f1
    ctx->pc = 0x14f83cu;
    ctx->f[21] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_14f840:
    // 0x14f840: 0x4600a836  c.le.s      $f21, $f0
    ctx->pc = 0x14f840u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_14f844:
    // 0x14f844: 0x0  nop
    ctx->pc = 0x14f844u;
    // NOP
label_14f848:
    // 0x14f848: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_14f84c:
    if (ctx->pc == 0x14F84Cu) {
        ctx->pc = 0x14F84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F848u;
        // 0x14f84c: 0x3c02c049  lui         $v0, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14F850u;
        goto label_14f850;
    }
    ctx->pc = 0x14F848u;
    {
        const bool branch_taken_0x14f848 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x14F84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F848u;
        // 0x14f84c: 0x3c02c049  lui         $v0, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f848) {
            ctx->pc = 0x14F864u;
            goto label_14f864;
        }
    }
    ctx->pc = 0x14F850u;
label_14f850:
    // 0x14f850: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x14f850u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_14f854:
    // 0x14f854: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x14f854u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_14f858:
    // 0x14f858: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14f858u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14f85c:
    // 0x14f85c: 0x1000000d  b           . + 4 + (0xD << 2)
label_14f860:
    if (ctx->pc == 0x14F860u) {
        ctx->pc = 0x14F860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F85Cu;
        // 0x14f860: 0x4600ad41  sub.s       $f21, $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x14F864u;
        goto label_14f864;
    }
    ctx->pc = 0x14F85Cu;
    {
        const bool branch_taken_0x14f85c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F85Cu;
        // 0x14f860: 0x4600ad41  sub.s       $f21, $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f85c) {
            ctx->pc = 0x14F894u;
            goto label_14f894;
        }
    }
    ctx->pc = 0x14F864u;
label_14f864:
    // 0x14f864: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x14f864u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_14f868:
    // 0x14f868: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14f868u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14f86c:
    // 0x14f86c: 0x0  nop
    ctx->pc = 0x14f86cu;
    // NOP
label_14f870:
    // 0x14f870: 0x4600a836  c.le.s      $f21, $f0
    ctx->pc = 0x14f870u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_14f874:
    // 0x14f874: 0x0  nop
    ctx->pc = 0x14f874u;
    // NOP
label_14f878:
    // 0x14f878: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_14f87c:
    if (ctx->pc == 0x14F87Cu) {
        ctx->pc = 0x14F880u;
        goto label_14f880;
    }
    ctx->pc = 0x14F878u;
    {
        const bool branch_taken_0x14f878 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x14f878) {
            ctx->pc = 0x14F894u;
            goto label_14f894;
        }
    }
    ctx->pc = 0x14F880u;
label_14f880:
    // 0x14f880: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x14f880u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_14f884:
    // 0x14f884: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x14f884u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_14f888:
    // 0x14f888: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14f888u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14f88c:
    // 0x14f88c: 0x10000001  b           . + 4 + (0x1 << 2)
label_14f890:
    if (ctx->pc == 0x14F890u) {
        ctx->pc = 0x14F890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F88Cu;
        // 0x14f890: 0x46150540  add.s       $f21, $f0, $f21 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x14F894u;
        goto label_14f894;
    }
    ctx->pc = 0x14F88Cu;
    {
        const bool branch_taken_0x14f88c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F88Cu;
        // 0x14f890: 0x46150540  add.s       $f21, $f0, $f21 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f88c) {
            ctx->pc = 0x14F894u;
            goto label_14f894;
        }
    }
    ctx->pc = 0x14F894u;
label_14f894:
    // 0x14f894: 0x8263021f  lb          $v1, 0x21F($s3)
    ctx->pc = 0x14f894u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 543)));
label_14f898:
    // 0x14f898: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14f898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14f89c:
    // 0x14f89c: 0x14620034  bne         $v1, $v0, . + 4 + (0x34 << 2)
label_14f8a0:
    if (ctx->pc == 0x14F8A0u) {
        ctx->pc = 0x14F8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F89Cu;
        // 0x14f8a0: 0xc6740000  lwc1        $f20, 0x0($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x14F8A4u;
        goto label_14f8a4;
    }
    ctx->pc = 0x14F89Cu;
    {
        const bool branch_taken_0x14f89c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x14F8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F89Cu;
        // 0x14f8a0: 0xc6740000  lwc1        $f20, 0x0($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f89c) {
            ctx->pc = 0x14F970u;
            goto label_14f970;
        }
    }
    ctx->pc = 0x14F8A4u;
label_14f8a4:
    // 0x14f8a4: 0x8e700200  lw          $s0, 0x200($s3)
    ctx->pc = 0x14f8a4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 512)));
label_14f8a8:
    // 0x14f8a8: 0x12000032  beqz        $s0, . + 4 + (0x32 << 2)
label_14f8ac:
    if (ctx->pc == 0x14F8ACu) {
        ctx->pc = 0x14F8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F8A8u;
        // 0x14f8ac: 0x240201ff  addiu       $v0, $zero, 0x1FF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 511));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14F8B0u;
        goto label_14f8b0;
    }
    ctx->pc = 0x14F8A8u;
    {
        const bool branch_taken_0x14f8a8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F8A8u;
        // 0x14f8ac: 0x240201ff  addiu       $v0, $zero, 0x1FF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 511));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f8a8) {
            ctx->pc = 0x14F974u;
            goto label_14f974;
        }
    }
    ctx->pc = 0x14F8B0u;
label_14f8b0:
    // 0x14f8b0: 0x8e620024  lw          $v0, 0x24($s3)
    ctx->pc = 0x14f8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
label_14f8b4:
    // 0x14f8b4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x14f8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_14f8b8:
    // 0x14f8b8: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x14f8b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_14f8bc:
    // 0x14f8bc: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
label_14f8c0:
    if (ctx->pc == 0x14F8C0u) {
        ctx->pc = 0x14F8C4u;
        goto label_14f8c4;
    }
    ctx->pc = 0x14F8BCu;
    {
        const bool branch_taken_0x14f8bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f8bc) {
            ctx->pc = 0x14F970u;
            goto label_14f970;
        }
    }
    ctx->pc = 0x14F8C4u;
label_14f8c4:
    // 0x14f8c4: 0x8e630194  lw          $v1, 0x194($s3)
    ctx->pc = 0x14f8c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 404)));
label_14f8c8:
    // 0x14f8c8: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x14f8c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_14f8cc:
    // 0x14f8cc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_14f8d0:
    if (ctx->pc == 0x14F8D0u) {
        ctx->pc = 0x14F8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F8CCu;
        // 0x14f8d0: 0x30620002  andi        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        ctx->pc = 0x14F8D4u;
        goto label_14f8d4;
    }
    ctx->pc = 0x14F8CCu;
    {
        const bool branch_taken_0x14f8cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F8CCu;
        // 0x14f8d0: 0x30620002  andi        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f8cc) {
            ctx->pc = 0x14F8DCu;
            goto label_14f8dc;
        }
    }
    ctx->pc = 0x14F8D4u;
label_14f8d4:
    // 0x14f8d4: 0x10000026  b           . + 4 + (0x26 << 2)
label_14f8d8:
    if (ctx->pc == 0x14F8D8u) {
        ctx->pc = 0x14F8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F8D4u;
        // 0x14f8d8: 0x24120014  addiu       $s2, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14F8DCu;
        goto label_14f8dc;
    }
    ctx->pc = 0x14F8D4u;
    {
        const bool branch_taken_0x14f8d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F8D4u;
        // 0x14f8d8: 0x24120014  addiu       $s2, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f8d4) {
            ctx->pc = 0x14F970u;
            goto label_14f970;
        }
    }
    ctx->pc = 0x14F8DCu;
label_14f8dc:
    // 0x14f8dc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_14f8e0:
    if (ctx->pc == 0x14F8E0u) {
        ctx->pc = 0x14F8E4u;
        goto label_14f8e4;
    }
    ctx->pc = 0x14F8DCu;
    {
        const bool branch_taken_0x14f8dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f8dc) {
            ctx->pc = 0x14F8ECu;
            goto label_14f8ec;
        }
    }
    ctx->pc = 0x14F8E4u;
label_14f8e4:
    // 0x14f8e4: 0x10000022  b           . + 4 + (0x22 << 2)
label_14f8e8:
    if (ctx->pc == 0x14F8E8u) {
        ctx->pc = 0x14F8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F8E4u;
        // 0x14f8e8: 0x24120015  addiu       $s2, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14F8ECu;
        goto label_14f8ec;
    }
    ctx->pc = 0x14F8E4u;
    {
        const bool branch_taken_0x14f8e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F8E4u;
        // 0x14f8e8: 0x24120015  addiu       $s2, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f8e4) {
            ctx->pc = 0x14F970u;
            goto label_14f970;
        }
    }
    ctx->pc = 0x14F8ECu;
label_14f8ec:
    // 0x14f8ec: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x14f8ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
label_14f8f0:
    // 0x14f8f0: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
label_14f8f4:
    if (ctx->pc == 0x14F8F4u) {
        ctx->pc = 0x14F8F8u;
        goto label_14f8f8;
    }
    ctx->pc = 0x14F8F0u;
    {
        const bool branch_taken_0x14f8f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f8f0) {
            ctx->pc = 0x14F970u;
            goto label_14f970;
        }
    }
    ctx->pc = 0x14F8F8u;
label_14f8f8:
    // 0x14f8f8: 0x86030222  lh          $v1, 0x222($s0)
    ctx->pc = 0x14f8f8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 546)));
label_14f8fc:
    // 0x14f8fc: 0x86020252  lh          $v0, 0x252($s0)
    ctx->pc = 0x14f8fcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 594)));
label_14f900:
    // 0x14f900: 0x1462001b  bne         $v1, $v0, . + 4 + (0x1B << 2)
label_14f904:
    if (ctx->pc == 0x14F904u) {
        ctx->pc = 0x14F908u;
        goto label_14f908;
    }
    ctx->pc = 0x14F900u;
    {
        const bool branch_taken_0x14f900 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x14f900) {
            ctx->pc = 0x14F970u;
            goto label_14f970;
        }
    }
    ctx->pc = 0x14F908u;
label_14f908:
    // 0x14f908: 0x92020232  lbu         $v0, 0x232($s0)
    ctx->pc = 0x14f908u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 562)));
label_14f90c:
    // 0x14f90c: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
label_14f910:
    if (ctx->pc == 0x14F910u) {
        ctx->pc = 0x14F910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F90Cu;
        // 0x14f910: 0x24120016  addiu       $s2, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14F914u;
        goto label_14f914;
    }
    ctx->pc = 0x14F90Cu;
    {
        const bool branch_taken_0x14f90c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14F910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F90Cu;
        // 0x14f910: 0x24120016  addiu       $s2, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f90c) {
            ctx->pc = 0x14F970u;
            goto label_14f970;
        }
    }
    ctx->pc = 0x14F914u;
label_14f914:
    // 0x14f914: 0xc0439cc  jal         func_10E730
label_14f918:
    if (ctx->pc == 0x14F918u) {
        ctx->pc = 0x14F918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F914u;
        // 0x14f918: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14F91Cu;
        goto label_14f91c;
    }
    ctx->pc = 0x14F914u;
    SET_GPR_U32(ctx, 31, 0x14F91Cu);
    ctx->pc = 0x14F918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F914u;
    // 0x14f918: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E730u, 0x14F914u, 0x14F91Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F91Cu;
label_14f91c:
    // 0x14f91c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x14f91cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_14f920:
    // 0x14f920: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x14f920u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_14f924:
    // 0x14f924: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x14f924u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_14f928:
    // 0x14f928: 0xc0488ec  jal         func_1223B0
label_14f92c:
    if (ctx->pc == 0x14F92Cu) {
        ctx->pc = 0x14F92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F928u;
        // 0x14f92c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14F930u;
        goto label_14f930;
    }
    ctx->pc = 0x14F928u;
    SET_GPR_U32(ctx, 31, 0x14F930u);
    ctx->pc = 0x14F92Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F928u;
    // 0x14f92c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1223B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1223B0u, 0x14F928u, 0x14F930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F930u;
label_14f930:
    // 0x14f930: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x14f930u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_14f934:
    // 0x14f934: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x14f934u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14f938:
    // 0x14f938: 0x24060028  addiu       $a2, $zero, 0x28
    ctx->pc = 0x14f938u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_14f93c:
    // 0x14f93c: 0xc07586c  jal         func_1D61B0
label_14f940:
    if (ctx->pc == 0x14F940u) {
        ctx->pc = 0x14F940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F93Cu;
        // 0x14f940: 0x240700ff  addiu       $a3, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14F944u;
        goto label_14f944;
    }
    ctx->pc = 0x14F93Cu;
    SET_GPR_U32(ctx, 31, 0x14F944u);
    ctx->pc = 0x14F940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F93Cu;
    // 0x14f940: 0x240700ff  addiu       $a3, $zero, 0xFF (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D61B0u;
    { ctx->pc = 0x1d61b0; return; }
    ctx->pc = 0x14F944u;
label_14f944:
    // 0x14f944: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x14f944u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_14f948:
    // 0x14f948: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x14f948u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14f94c:
    // 0x14f94c: 0x2406003c  addiu       $a2, $zero, 0x3C
    ctx->pc = 0x14f94cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_14f950:
    // 0x14f950: 0xc07586c  jal         func_1D61B0
label_14f954:
    if (ctx->pc == 0x14F954u) {
        ctx->pc = 0x14F954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F950u;
        // 0x14f954: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14F958u;
        goto label_14f958;
    }
    ctx->pc = 0x14F950u;
    SET_GPR_U32(ctx, 31, 0x14F958u);
    ctx->pc = 0x14F954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F950u;
    // 0x14f954: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D61B0u;
    { ctx->pc = 0x1d61b0; return; }
    ctx->pc = 0x14F958u;
label_14f958:
    // 0x14f958: 0x2683000d  addiu       $v1, $s4, 0xD
    ctx->pc = 0x14f958u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 13));
label_14f95c:
    // 0x14f95c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14f95cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14f960:
    // 0x14f960: 0x621804  sllv        $v1, $v0, $v1
    ctx->pc = 0x14f960u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
label_14f964:
    // 0x14f964: 0x8f82858c  lw          $v0, -0x7A74($gp)
    ctx->pc = 0x14f964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935948)));
label_14f968:
    // 0x14f968: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x14f968u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_14f96c:
    // 0x14f96c: 0xaf82858c  sw          $v0, -0x7A74($gp)
    ctx->pc = 0x14f96cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935948), GPR_U32(ctx, 2));
label_14f970:
    // 0x14f970: 0x240201ff  addiu       $v0, $zero, 0x1FF
    ctx->pc = 0x14f970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 511));
label_14f974:
    // 0x14f974: 0x1642022b  bne         $s2, $v0, . + 4 + (0x22B << 2)
label_14f978:
    if (ctx->pc == 0x14F978u) {
        ctx->pc = 0x14F978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F974u;
        // 0x14f978: 0x240201ff  addiu       $v0, $zero, 0x1FF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 511));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14F97Cu;
        goto label_14f97c;
    }
    ctx->pc = 0x14F974u;
    {
        const bool branch_taken_0x14f974 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x14F978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F974u;
        // 0x14f978: 0x240201ff  addiu       $v0, $zero, 0x1FF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 511));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f974) {
            ctx->pc = 0x150224u;
            { ctx->pc = 0x150224; return; }
        }
    }
    ctx->pc = 0x14F97Cu;
label_14f97c:
    // 0x14f97c: 0x8662003c  lh          $v0, 0x3C($s3)
    ctx->pc = 0x14f97cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 60)));
label_14f980:
    // 0x14f980: 0x2c410017  sltiu       $at, $v0, 0x17
    ctx->pc = 0x14f980u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)23) ? 1 : 0);
label_14f984:
    // 0x14f984: 0x10200226  beqz        $at, . + 4 + (0x226 << 2)
label_14f988:
    if (ctx->pc == 0x14F988u) {
        ctx->pc = 0x14F988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F984u;
        // 0x14f988: 0x3c03002c  lui         $v1, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14F98Cu;
        goto label_14f98c;
    }
    ctx->pc = 0x14F984u;
    {
        const bool branch_taken_0x14f984 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F984u;
        // 0x14f988: 0x3c03002c  lui         $v1, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f984) {
            ctx->pc = 0x150220u;
            { ctx->pc = 0x150220; return; }
        }
    }
    ctx->pc = 0x14F98Cu;
label_14f98c:
    // 0x14f98c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x14f98cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_14f990:
    // 0x14f990: 0x24635960  addiu       $v1, $v1, 0x5960
    ctx->pc = 0x14f990u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22880));
label_14f994:
    // 0x14f994: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x14f994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_14f998:
    // 0x14f998: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x14f998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_14f99c:
    // 0x14f99c: 0x400008  jr          $v0
label_14f9a0:
    if (ctx->pc == 0x14F9A0u) {
        ctx->pc = 0x14F9A4u;
        goto label_14f9a4;
    }
    ctx->pc = 0x14F99Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x14F9A4u: goto label_14f9a4;
            case 0x14FBE0u: { ctx->pc = 0x14fbe0; return; }
            case 0x14FCE0u: { ctx->pc = 0x14fce0; return; }
            case 0x14FEF4u: { ctx->pc = 0x14fef4; return; }
            case 0x14FF6Cu: { ctx->pc = 0x14ff6c; return; }
            case 0x150108u: { ctx->pc = 0x150108; return; }
            case 0x1501C4u: { ctx->pc = 0x1501c4; return; }
            case 0x150220u: { ctx->pc = 0x150220; return; }
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14F99Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x14F9A4u;
label_14f9a4:
    // 0x14f9a4: 0x1220004e  beqz        $s1, . + 4 + (0x4E << 2)
label_14f9a8:
    if (ctx->pc == 0x14F9A8u) {
        ctx->pc = 0x14F9ACu;
        goto label_14f9ac;
    }
    ctx->pc = 0x14F9A4u;
    {
        const bool branch_taken_0x14f9a4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f9a4) {
            ctx->pc = 0x14FAE0u;
            goto label_14fae0;
        }
    }
    ctx->pc = 0x14F9ACu;
label_14f9ac:
    // 0x14f9ac: 0x8e620194  lw          $v0, 0x194($s3)
    ctx->pc = 0x14f9acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 404)));
label_14f9b0:
    // 0x14f9b0: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x14f9b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
label_14f9b4:
    // 0x14f9b4: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
label_14f9b8:
    if (ctx->pc == 0x14F9B8u) {
        ctx->pc = 0x14F9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F9B4u;
        // 0x14f9b8: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x14F9BCu;
        goto label_14f9bc;
    }
    ctx->pc = 0x14F9B4u;
    {
        const bool branch_taken_0x14f9b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F9B4u;
        // 0x14f9b8: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f9b4) {
            ctx->pc = 0x14FA48u;
            goto label_14fa48;
        }
    }
    ctx->pc = 0x14F9BCu;
label_14f9bc:
    // 0x14f9bc: 0xc06d448  jal         func_1B5120
label_14f9c0:
    if (ctx->pc == 0x14F9C0u) {
        ctx->pc = 0x14F9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F9BCu;
        // 0x14f9c0: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x14F9C4u;
        goto label_14f9c4;
    }
    ctx->pc = 0x14F9BCu;
    SET_GPR_U32(ctx, 31, 0x14F9C4u);
    ctx->pc = 0x14F9C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F9BCu;
    // 0x14f9c0: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5120u;
    { ctx->pc = 0x1b5120; return; }
    ctx->pc = 0x14F9C4u;
label_14f9c4:
    // 0x14f9c4: 0x3c023f49  lui         $v0, 0x3F49
    ctx->pc = 0x14f9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16201 << 16));
label_14f9c8:
    // 0x14f9c8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x14f9c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_14f9cc:
    // 0x14f9cc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x14f9ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_14f9d0:
    // 0x14f9d0: 0x0  nop
    ctx->pc = 0x14f9d0u;
    // NOP
label_14f9d4:
    // 0x14f9d4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x14f9d4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_14f9d8:
    // 0x14f9d8: 0x0  nop
    ctx->pc = 0x14f9d8u;
    // NOP
label_14f9dc:
    // 0x14f9dc: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_14f9e0:
    if (ctx->pc == 0x14F9E0u) {
        ctx->pc = 0x14F9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F9DCu;
        // 0x14f9e0: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x14F9E4u;
        goto label_14f9e4;
    }
    ctx->pc = 0x14F9DCu;
    {
        const bool branch_taken_0x14f9dc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x14F9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F9DCu;
        // 0x14f9e0: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f9dc) {
            ctx->pc = 0x14F9ECu;
            goto label_14f9ec;
        }
    }
    ctx->pc = 0x14F9E4u;
label_14f9e4:
    // 0x14f9e4: 0x10000016  b           . + 4 + (0x16 << 2)
label_14f9e8:
    if (ctx->pc == 0x14F9E8u) {
        ctx->pc = 0x14F9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F9E4u;
        // 0x14f9e8: 0x2412000a  addiu       $s2, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14F9ECu;
        goto label_14f9ec;
    }
    ctx->pc = 0x14F9E4u;
    {
        const bool branch_taken_0x14f9e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F9E4u;
        // 0x14f9e8: 0x2412000a  addiu       $s2, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f9e4) {
            ctx->pc = 0x14FA40u;
            goto label_14fa40;
        }
    }
    ctx->pc = 0x14F9ECu;
label_14f9ec:
    // 0x14f9ec: 0xc06d448  jal         func_1B5120
label_14f9f0:
    if (ctx->pc == 0x14F9F0u) {
        ctx->pc = 0x14F9F4u;
        goto label_14f9f4;
    }
    ctx->pc = 0x14F9ECu;
    SET_GPR_U32(ctx, 31, 0x14F9F4u);
    ctx->pc = 0x1B5120u;
    { ctx->pc = 0x1b5120; return; }
    ctx->pc = 0x14F9F4u;
label_14f9f4:
    // 0x14f9f4: 0x3c024016  lui         $v0, 0x4016
    ctx->pc = 0x14f9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16406 << 16));
label_14f9f8:
    // 0x14f9f8: 0x3442cbe4  ori         $v0, $v0, 0xCBE4
    ctx->pc = 0x14f9f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52196);
label_14f9fc:
    // 0x14f9fc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x14f9fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_14fa00:
    // 0x14fa00: 0x0  nop
    ctx->pc = 0x14fa00u;
    // NOP
label_14fa04:
    // 0x14fa04: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x14fa04u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_14fa08:
    // 0x14fa08: 0x0  nop
    ctx->pc = 0x14fa08u;
    // NOP
label_14fa0c:
    // 0x14fa0c: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_14fa10:
    if (ctx->pc == 0x14FA10u) {
        ctx->pc = 0x14FA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FA0Cu;
        // 0x14fa10: 0x3c023f49  lui         $v0, 0x3F49 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16201 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14FA14u;
        goto label_14fa14;
    }
    ctx->pc = 0x14FA0Cu;
    {
        const bool branch_taken_0x14fa0c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x14FA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FA0Cu;
        // 0x14fa10: 0x3c023f49  lui         $v0, 0x3F49 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16201 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fa0c) {
            ctx->pc = 0x14FA1Cu;
            goto label_14fa1c;
        }
    }
    ctx->pc = 0x14FA14u;
label_14fa14:
    // 0x14fa14: 0x1000000a  b           . + 4 + (0xA << 2)
label_14fa18:
    if (ctx->pc == 0x14FA18u) {
        ctx->pc = 0x14FA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FA14u;
        // 0x14fa18: 0x2412000b  addiu       $s2, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14FA1Cu;
        goto label_14fa1c;
    }
    ctx->pc = 0x14FA14u;
    {
        const bool branch_taken_0x14fa14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14FA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FA14u;
        // 0x14fa18: 0x2412000b  addiu       $s2, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fa14) {
            ctx->pc = 0x14FA40u;
            goto label_14fa40;
        }
    }
    ctx->pc = 0x14FA1Cu;
label_14fa1c:
    // 0x14fa1c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x14fa1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_14fa20:
    // 0x14fa20: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14fa20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14fa24:
    // 0x14fa24: 0x0  nop
    ctx->pc = 0x14fa24u;
    // NOP
label_14fa28:
    // 0x14fa28: 0x4600a836  c.le.s      $f21, $f0
    ctx->pc = 0x14fa28u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_14fa2c:
    // 0x14fa2c: 0x0  nop
    ctx->pc = 0x14fa2cu;
    // NOP
label_14fa30:
    // 0x14fa30: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_14fa34:
    if (ctx->pc == 0x14FA34u) {
        ctx->pc = 0x14FA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FA30u;
        // 0x14fa34: 0x2412000c  addiu       $s2, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14FA38u;
        goto label_14fa38;
    }
    ctx->pc = 0x14FA30u;
    {
        const bool branch_taken_0x14fa30 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x14FA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FA30u;
        // 0x14fa34: 0x2412000c  addiu       $s2, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fa30) {
            ctx->pc = 0x14FA40u;
            goto label_14fa40;
        }
    }
    ctx->pc = 0x14FA38u;
label_14fa38:
    // 0x14fa38: 0x10000001  b           . + 4 + (0x1 << 2)
label_14fa3c:
    if (ctx->pc == 0x14FA3Cu) {
        ctx->pc = 0x14FA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FA38u;
        // 0x14fa3c: 0x2412000d  addiu       $s2, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14FA40u;
        goto label_14fa40;
    }
    ctx->pc = 0x14FA38u;
    {
        const bool branch_taken_0x14fa38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14FA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FA38u;
        // 0x14fa3c: 0x2412000d  addiu       $s2, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fa38) {
            ctx->pc = 0x14FA40u;
            goto label_14fa40;
        }
    }
    ctx->pc = 0x14FA40u;
label_14fa40:
    // 0x14fa40: 0x10000030  b           . + 4 + (0x30 << 2)
label_14fa44:
    if (ctx->pc == 0x14FA44u) {
        ctx->pc = 0x14FA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FA40u;
        // 0x14fa44: 0x240201ff  addiu       $v0, $zero, 0x1FF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 511));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14FA48u;
        goto label_14fa48;
    }
    ctx->pc = 0x14FA40u;
    {
        const bool branch_taken_0x14fa40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14FA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FA40u;
        // 0x14fa44: 0x240201ff  addiu       $v0, $zero, 0x1FF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 511));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fa40) {
            ctx->pc = 0x14FB04u;
            goto label_14fb04;
        }
    }
    ctx->pc = 0x14FA48u;
label_14fa48:
    // 0x14fa48: 0xc06d448  jal         func_1B5120
label_14fa4c:
    if (ctx->pc == 0x14FA4Cu) {
        ctx->pc = 0x14FA50u;
        goto label_14fa50;
    }
    ctx->pc = 0x14FA48u;
    SET_GPR_U32(ctx, 31, 0x14FA50u);
    ctx->pc = 0x1B5120u;
    { ctx->pc = 0x1b5120; return; }
    ctx->pc = 0x14FA50u;
label_14fa50:
    // 0x14fa50: 0x3c023f49  lui         $v0, 0x3F49
    ctx->pc = 0x14fa50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16201 << 16));
label_14fa54:
    // 0x14fa54: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x14fa54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_14fa58:
    // 0x14fa58: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x14fa58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_14fa5c:
    // 0x14fa5c: 0x0  nop
    ctx->pc = 0x14fa5cu;
    // NOP
label_14fa60:
    // 0x14fa60: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x14fa60u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_14fa64:
    // 0x14fa64: 0x0  nop
    ctx->pc = 0x14fa64u;
    // NOP
label_14fa68:
    // 0x14fa68: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_14fa6c:
    if (ctx->pc == 0x14FA6Cu) {
        ctx->pc = 0x14FA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FA68u;
        // 0x14fa6c: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x14FA70u;
        goto label_14fa70;
    }
    ctx->pc = 0x14FA68u;
    {
        const bool branch_taken_0x14fa68 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x14FA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FA68u;
        // 0x14fa6c: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fa68) {
            ctx->pc = 0x14FA78u;
            goto label_14fa78;
        }
    }
    ctx->pc = 0x14FA70u;
label_14fa70:
    // 0x14fa70: 0x10000016  b           . + 4 + (0x16 << 2)
label_14fa74:
    if (ctx->pc == 0x14FA74u) {
        ctx->pc = 0x14FA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FA70u;
        // 0x14fa74: 0x24120003  addiu       $s2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14FA78u;
        goto label_14fa78;
    }
    ctx->pc = 0x14FA70u;
    {
        const bool branch_taken_0x14fa70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14FA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FA70u;
        // 0x14fa74: 0x24120003  addiu       $s2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fa70) {
            ctx->pc = 0x14FACCu;
            goto label_14facc;
        }
    }
    ctx->pc = 0x14FA78u;
label_14fa78:
    // 0x14fa78: 0xc06d448  jal         func_1B5120
label_14fa7c:
    if (ctx->pc == 0x14FA7Cu) {
        ctx->pc = 0x14FA80u;
        goto label_14fa80;
    }
    ctx->pc = 0x14FA78u;
    SET_GPR_U32(ctx, 31, 0x14FA80u);
    ctx->pc = 0x1B5120u;
    { ctx->pc = 0x1b5120; return; }
    ctx->pc = 0x14FA80u;
label_14fa80:
    // 0x14fa80: 0x3c024016  lui         $v0, 0x4016
    ctx->pc = 0x14fa80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16406 << 16));
label_14fa84:
    // 0x14fa84: 0x3442cbe4  ori         $v0, $v0, 0xCBE4
    ctx->pc = 0x14fa84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52196);
label_14fa88:
    // 0x14fa88: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x14fa88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_14fa8c:
    // 0x14fa8c: 0x0  nop
    ctx->pc = 0x14fa8cu;
    // NOP
label_14fa90:
    // 0x14fa90: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x14fa90u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_14fa94:
    // 0x14fa94: 0x0  nop
    ctx->pc = 0x14fa94u;
    // NOP
label_14fa98:
    // 0x14fa98: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_14fa9c:
    if (ctx->pc == 0x14FA9Cu) {
        ctx->pc = 0x14FA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FA98u;
        // 0x14fa9c: 0x3c023f49  lui         $v0, 0x3F49 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16201 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14FAA0u;
        goto label_14faa0;
    }
    ctx->pc = 0x14FA98u;
    {
        const bool branch_taken_0x14fa98 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x14FA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FA98u;
        // 0x14fa9c: 0x3c023f49  lui         $v0, 0x3F49 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16201 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fa98) {
            ctx->pc = 0x14FAA8u;
            goto label_14faa8;
        }
    }
    ctx->pc = 0x14FAA0u;
label_14faa0:
    // 0x14faa0: 0x1000000a  b           . + 4 + (0xA << 2)
label_14faa4:
    if (ctx->pc == 0x14FAA4u) {
        ctx->pc = 0x14FAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FAA0u;
        // 0x14faa4: 0x24120004  addiu       $s2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14FAA8u;
        goto label_14faa8;
    }
    ctx->pc = 0x14FAA0u;
    {
        const bool branch_taken_0x14faa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14FAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FAA0u;
        // 0x14faa4: 0x24120004  addiu       $s2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14faa0) {
            ctx->pc = 0x14FACCu;
            goto label_14facc;
        }
    }
    ctx->pc = 0x14FAA8u;
label_14faa8:
    // 0x14faa8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x14faa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_14faac:
    // 0x14faac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14faacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14fab0:
    // 0x14fab0: 0x0  nop
    ctx->pc = 0x14fab0u;
    // NOP
label_14fab4:
    // 0x14fab4: 0x4600a836  c.le.s      $f21, $f0
    ctx->pc = 0x14fab4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_14fab8:
    // 0x14fab8: 0x0  nop
    ctx->pc = 0x14fab8u;
    // NOP
label_14fabc:
    // 0x14fabc: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_14fac0:
    if (ctx->pc == 0x14FAC0u) {
        ctx->pc = 0x14FAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FABCu;
        // 0x14fac0: 0x24120005  addiu       $s2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14FAC4u;
        goto label_14fac4;
    }
    ctx->pc = 0x14FABCu;
    {
        const bool branch_taken_0x14fabc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x14FAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FABCu;
        // 0x14fac0: 0x24120005  addiu       $s2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fabc) {
            ctx->pc = 0x14FACCu;
            goto label_14facc;
        }
    }
    ctx->pc = 0x14FAC4u;
label_14fac4:
    // 0x14fac4: 0x10000001  b           . + 4 + (0x1 << 2)
label_14fac8:
    if (ctx->pc == 0x14FAC8u) {
        ctx->pc = 0x14FAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FAC4u;
        // 0x14fac8: 0x24120006  addiu       $s2, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14FACCu;
        goto label_14facc;
    }
    ctx->pc = 0x14FAC4u;
    {
        const bool branch_taken_0x14fac4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14FAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FAC4u;
        // 0x14fac8: 0x24120006  addiu       $s2, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fac4) {
            ctx->pc = 0x14FACCu;
            goto label_14facc;
        }
    }
    ctx->pc = 0x14FACCu;
label_14facc:
    // 0x14facc: 0xc66001bc  lwc1        $f0, 0x1BC($s3)
    ctx->pc = 0x14faccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 444)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14fad0:
    // 0x14fad0: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x14fad0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
label_14fad4:
    // 0x14fad4: 0xe660001c  swc1        $f0, 0x1C($s3)
    ctx->pc = 0x14fad4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 28), bits); }
label_14fad8:
    // 0x14fad8: 0x10000009  b           . + 4 + (0x9 << 2)
label_14fadc:
    if (ctx->pc == 0x14FADCu) {
        ctx->pc = 0x14FADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FAD8u;
        // 0x14fadc: 0xae620018  sw          $v0, 0x18($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14FAE0u;
        goto label_14fae0;
    }
    ctx->pc = 0x14FAD8u;
    {
        const bool branch_taken_0x14fad8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14FADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FAD8u;
        // 0x14fadc: 0xae620018  sw          $v0, 0x18($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fad8) {
            ctx->pc = 0x14FB00u;
            goto label_14fb00;
        }
    }
    ctx->pc = 0x14FAE0u;
label_14fae0:
    // 0x14fae0: 0x8263021f  lb          $v1, 0x21F($s3)
    ctx->pc = 0x14fae0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 543)));
label_14fae4:
    // 0x14fae4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14fae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14fae8:
    // 0x14fae8: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_14faec:
    if (ctx->pc == 0x14FAECu) {
        ctx->pc = 0x14FAF0u;
        goto label_14faf0;
    }
    ctx->pc = 0x14FAE8u;
    {
        const bool branch_taken_0x14fae8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x14fae8) {
            ctx->pc = 0x14FB00u;
            goto label_14fb00;
        }
    }
    ctx->pc = 0x14FAF0u;
label_14faf0:
    // 0x14faf0: 0x8e620200  lw          $v0, 0x200($s3)
    ctx->pc = 0x14faf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 512)));
label_14faf4:
    // 0x14faf4: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_14faf8:
    if (ctx->pc == 0x14FAF8u) {
        ctx->pc = 0x14FAFCu;
        goto label_14fafc;
    }
    ctx->pc = 0x14FAF4u;
    {
        const bool branch_taken_0x14faf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14faf4) {
            ctx->pc = 0x14FB00u;
            goto label_14fb00;
        }
    }
    ctx->pc = 0x14FAFCu;
label_14fafc:
    // 0x14fafc: 0x24120013  addiu       $s2, $zero, 0x13
    ctx->pc = 0x14fafcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_14fb00:
    // 0x14fb00: 0x240201ff  addiu       $v0, $zero, 0x1FF
    ctx->pc = 0x14fb00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 511));
label_14fb04:
    // 0x14fb04: 0x164201c6  bne         $s2, $v0, . + 4 + (0x1C6 << 2)
label_14fb08:
    if (ctx->pc == 0x14FB08u) {
        ctx->pc = 0x14FB0Cu;
        goto label_14fb0c;
    }
    ctx->pc = 0x14FB04u;
    {
        const bool branch_taken_0x14fb04 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x14fb04) {
            ctx->pc = 0x150220u;
            { ctx->pc = 0x150220; return; }
        }
    }
    ctx->pc = 0x14FB0Cu;
label_14fb0c:
    // 0x14fb0c: 0x8e620030  lw          $v0, 0x30($s3)
    ctx->pc = 0x14fb0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
label_14fb10:
    // 0x14fb10: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x14fb10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_14fb14:
    // 0x14fb14: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_14fb18:
    if (ctx->pc == 0x14FB18u) {
        ctx->pc = 0x14FB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FB14u;
        // 0x14fb18: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14FB1Cu;
        goto label_14fb1c;
    }
    ctx->pc = 0x14FB14u;
    {
        const bool branch_taken_0x14fb14 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x14FB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FB14u;
        // 0x14fb18: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fb14) {
            ctx->pc = 0x14FB28u;
            goto label_14fb28;
        }
    }
    ctx->pc = 0x14FB1Cu;
label_14fb1c:
    // 0x14fb1c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14fb1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14fb20:
    // 0x14fb20: 0x10000007  b           . + 4 + (0x7 << 2)
label_14fb24:
    if (ctx->pc == 0x14FB24u) {
        ctx->pc = 0x14FB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FB20u;
        // 0x14fb24: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x14FB28u;
        goto label_14fb28;
    }
    ctx->pc = 0x14FB20u;
    {
        const bool branch_taken_0x14fb20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14FB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FB20u;
        // 0x14fb24: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fb20) {
            ctx->pc = 0x14FB40u;
            { ctx->pc = 0x14fb40; return; }
        }
    }
    ctx->pc = 0x14FB28u;
label_14fb28:
    // 0x14fb28: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x14fb28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_14fb2c:
    // 0x14fb2c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x14fb2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_14fb30:
    // 0x14fb30: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x14fb30u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14fb34:
    // 0x14fb34: 0x0  nop
    ctx->pc = 0x14fb34u;
    // NOP
label_14fb38:
    // 0x14fb38: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x14fb38u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_14fb3c:
    // 0x14fb3c: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x14fb3cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
    ctx->pc = 0x14fb40u;
    return;
}
