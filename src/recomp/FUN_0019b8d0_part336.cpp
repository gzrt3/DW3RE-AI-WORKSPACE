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


void FUN_0019b8d0_part336(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x23f200u: goto label_23f200;
        case 0x23f204u: goto label_23f204;
        case 0x23f208u: goto label_23f208;
        case 0x23f20cu: goto label_23f20c;
        case 0x23f210u: goto label_23f210;
        case 0x23f214u: goto label_23f214;
        case 0x23f218u: goto label_23f218;
        case 0x23f21cu: goto label_23f21c;
        case 0x23f220u: goto label_23f220;
        case 0x23f224u: goto label_23f224;
        case 0x23f228u: goto label_23f228;
        case 0x23f22cu: goto label_23f22c;
        case 0x23f230u: goto label_23f230;
        case 0x23f234u: goto label_23f234;
        case 0x23f238u: goto label_23f238;
        case 0x23f23cu: goto label_23f23c;
        case 0x23f240u: goto label_23f240;
        case 0x23f244u: goto label_23f244;
        case 0x23f248u: goto label_23f248;
        case 0x23f24cu: goto label_23f24c;
        case 0x23f250u: goto label_23f250;
        case 0x23f254u: goto label_23f254;
        case 0x23f258u: goto label_23f258;
        case 0x23f25cu: goto label_23f25c;
        case 0x23f260u: goto label_23f260;
        case 0x23f264u: goto label_23f264;
        case 0x23f268u: goto label_23f268;
        case 0x23f26cu: goto label_23f26c;
        case 0x23f270u: goto label_23f270;
        case 0x23f274u: goto label_23f274;
        case 0x23f278u: goto label_23f278;
        case 0x23f27cu: goto label_23f27c;
        case 0x23f280u: goto label_23f280;
        case 0x23f284u: goto label_23f284;
        case 0x23f288u: goto label_23f288;
        case 0x23f28cu: goto label_23f28c;
        case 0x23f290u: goto label_23f290;
        case 0x23f294u: goto label_23f294;
        case 0x23f298u: goto label_23f298;
        case 0x23f29cu: goto label_23f29c;
        case 0x23f2a0u: goto label_23f2a0;
        case 0x23f2a4u: goto label_23f2a4;
        case 0x23f2a8u: goto label_23f2a8;
        case 0x23f2acu: goto label_23f2ac;
        case 0x23f2b0u: goto label_23f2b0;
        case 0x23f2b4u: goto label_23f2b4;
        case 0x23f2b8u: goto label_23f2b8;
        case 0x23f2bcu: goto label_23f2bc;
        case 0x23f2c0u: goto label_23f2c0;
        case 0x23f2c4u: goto label_23f2c4;
        case 0x23f2c8u: goto label_23f2c8;
        case 0x23f2ccu: goto label_23f2cc;
        case 0x23f2d0u: goto label_23f2d0;
        case 0x23f2d4u: goto label_23f2d4;
        case 0x23f2d8u: goto label_23f2d8;
        case 0x23f2dcu: goto label_23f2dc;
        case 0x23f2e0u: goto label_23f2e0;
        case 0x23f2e4u: goto label_23f2e4;
        case 0x23f2e8u: goto label_23f2e8;
        case 0x23f2ecu: goto label_23f2ec;
        case 0x23f2f0u: goto label_23f2f0;
        case 0x23f2f4u: goto label_23f2f4;
        case 0x23f2f8u: goto label_23f2f8;
        case 0x23f2fcu: goto label_23f2fc;
        case 0x23f300u: goto label_23f300;
        case 0x23f304u: goto label_23f304;
        case 0x23f308u: goto label_23f308;
        case 0x23f30cu: goto label_23f30c;
        case 0x23f310u: goto label_23f310;
        case 0x23f314u: goto label_23f314;
        case 0x23f318u: goto label_23f318;
        case 0x23f31cu: goto label_23f31c;
        case 0x23f320u: goto label_23f320;
        case 0x23f324u: goto label_23f324;
        case 0x23f328u: goto label_23f328;
        case 0x23f32cu: goto label_23f32c;
        case 0x23f330u: goto label_23f330;
        case 0x23f334u: goto label_23f334;
        case 0x23f338u: goto label_23f338;
        case 0x23f33cu: goto label_23f33c;
        case 0x23f340u: goto label_23f340;
        case 0x23f344u: goto label_23f344;
        case 0x23f348u: goto label_23f348;
        case 0x23f34cu: goto label_23f34c;
        case 0x23f350u: goto label_23f350;
        case 0x23f354u: goto label_23f354;
        case 0x23f358u: goto label_23f358;
        case 0x23f35cu: goto label_23f35c;
        case 0x23f360u: goto label_23f360;
        case 0x23f364u: goto label_23f364;
        case 0x23f368u: goto label_23f368;
        case 0x23f36cu: goto label_23f36c;
        case 0x23f370u: goto label_23f370;
        case 0x23f374u: goto label_23f374;
        case 0x23f378u: goto label_23f378;
        case 0x23f37cu: goto label_23f37c;
        case 0x23f380u: goto label_23f380;
        case 0x23f384u: goto label_23f384;
        case 0x23f388u: goto label_23f388;
        case 0x23f38cu: goto label_23f38c;
        case 0x23f390u: goto label_23f390;
        case 0x23f394u: goto label_23f394;
        case 0x23f398u: goto label_23f398;
        case 0x23f39cu: goto label_23f39c;
        case 0x23f3a0u: goto label_23f3a0;
        case 0x23f3a4u: goto label_23f3a4;
        case 0x23f3a8u: goto label_23f3a8;
        case 0x23f3acu: goto label_23f3ac;
        case 0x23f3b0u: goto label_23f3b0;
        case 0x23f3b4u: goto label_23f3b4;
        case 0x23f3b8u: goto label_23f3b8;
        case 0x23f3bcu: goto label_23f3bc;
        case 0x23f3c0u: goto label_23f3c0;
        case 0x23f3c4u: goto label_23f3c4;
        case 0x23f3c8u: goto label_23f3c8;
        case 0x23f3ccu: goto label_23f3cc;
        case 0x23f3d0u: goto label_23f3d0;
        case 0x23f3d4u: goto label_23f3d4;
        case 0x23f3d8u: goto label_23f3d8;
        case 0x23f3dcu: goto label_23f3dc;
        case 0x23f3e0u: goto label_23f3e0;
        case 0x23f3e4u: goto label_23f3e4;
        case 0x23f3e8u: goto label_23f3e8;
        case 0x23f3ecu: goto label_23f3ec;
        case 0x23f3f0u: goto label_23f3f0;
        case 0x23f3f4u: goto label_23f3f4;
        case 0x23f3f8u: goto label_23f3f8;
        case 0x23f3fcu: goto label_23f3fc;
        case 0x23f400u: goto label_23f400;
        case 0x23f404u: goto label_23f404;
        case 0x23f408u: goto label_23f408;
        case 0x23f40cu: goto label_23f40c;
        case 0x23f410u: goto label_23f410;
        case 0x23f414u: goto label_23f414;
        case 0x23f418u: goto label_23f418;
        case 0x23f41cu: goto label_23f41c;
        case 0x23f420u: goto label_23f420;
        case 0x23f424u: goto label_23f424;
        case 0x23f428u: goto label_23f428;
        case 0x23f42cu: goto label_23f42c;
        case 0x23f430u: goto label_23f430;
        case 0x23f434u: goto label_23f434;
        case 0x23f438u: goto label_23f438;
        case 0x23f43cu: goto label_23f43c;
        case 0x23f440u: goto label_23f440;
        case 0x23f444u: goto label_23f444;
        case 0x23f448u: goto label_23f448;
        case 0x23f44cu: goto label_23f44c;
        case 0x23f450u: goto label_23f450;
        case 0x23f454u: goto label_23f454;
        case 0x23f458u: goto label_23f458;
        case 0x23f45cu: goto label_23f45c;
        case 0x23f460u: goto label_23f460;
        case 0x23f464u: goto label_23f464;
        case 0x23f468u: goto label_23f468;
        case 0x23f46cu: goto label_23f46c;
        case 0x23f470u: goto label_23f470;
        case 0x23f474u: goto label_23f474;
        case 0x23f478u: goto label_23f478;
        case 0x23f47cu: goto label_23f47c;
        case 0x23f480u: goto label_23f480;
        case 0x23f484u: goto label_23f484;
        case 0x23f488u: goto label_23f488;
        case 0x23f48cu: goto label_23f48c;
        case 0x23f490u: goto label_23f490;
        case 0x23f494u: goto label_23f494;
        case 0x23f498u: goto label_23f498;
        case 0x23f49cu: goto label_23f49c;
        case 0x23f4a0u: goto label_23f4a0;
        case 0x23f4a4u: goto label_23f4a4;
        case 0x23f4a8u: goto label_23f4a8;
        case 0x23f4acu: goto label_23f4ac;
        case 0x23f4b0u: goto label_23f4b0;
        case 0x23f4b4u: goto label_23f4b4;
        case 0x23f4b8u: goto label_23f4b8;
        case 0x23f4bcu: goto label_23f4bc;
        case 0x23f4c0u: goto label_23f4c0;
        case 0x23f4c4u: goto label_23f4c4;
        case 0x23f4c8u: goto label_23f4c8;
        case 0x23f4ccu: goto label_23f4cc;
        case 0x23f4d0u: goto label_23f4d0;
        case 0x23f4d4u: goto label_23f4d4;
        case 0x23f4d8u: goto label_23f4d8;
        case 0x23f4dcu: goto label_23f4dc;
        case 0x23f4e0u: goto label_23f4e0;
        case 0x23f4e4u: goto label_23f4e4;
        case 0x23f4e8u: goto label_23f4e8;
        case 0x23f4ecu: goto label_23f4ec;
        case 0x23f4f0u: goto label_23f4f0;
        case 0x23f4f4u: goto label_23f4f4;
        case 0x23f4f8u: goto label_23f4f8;
        case 0x23f4fcu: goto label_23f4fc;
        case 0x23f500u: goto label_23f500;
        case 0x23f504u: goto label_23f504;
        case 0x23f508u: goto label_23f508;
        case 0x23f50cu: goto label_23f50c;
        case 0x23f510u: goto label_23f510;
        case 0x23f514u: goto label_23f514;
        case 0x23f518u: goto label_23f518;
        case 0x23f51cu: goto label_23f51c;
        case 0x23f520u: goto label_23f520;
        case 0x23f524u: goto label_23f524;
        case 0x23f528u: goto label_23f528;
        case 0x23f52cu: goto label_23f52c;
        case 0x23f530u: goto label_23f530;
        case 0x23f534u: goto label_23f534;
        case 0x23f538u: goto label_23f538;
        case 0x23f53cu: goto label_23f53c;
        case 0x23f540u: goto label_23f540;
        case 0x23f544u: goto label_23f544;
        case 0x23f548u: goto label_23f548;
        case 0x23f54cu: goto label_23f54c;
        case 0x23f550u: goto label_23f550;
        case 0x23f554u: goto label_23f554;
        case 0x23f558u: goto label_23f558;
        case 0x23f55cu: goto label_23f55c;
        case 0x23f560u: goto label_23f560;
        case 0x23f564u: goto label_23f564;
        case 0x23f568u: goto label_23f568;
        case 0x23f56cu: goto label_23f56c;
        case 0x23f570u: goto label_23f570;
        case 0x23f574u: goto label_23f574;
        case 0x23f578u: goto label_23f578;
        case 0x23f57cu: goto label_23f57c;
        case 0x23f580u: goto label_23f580;
        case 0x23f584u: goto label_23f584;
        case 0x23f588u: goto label_23f588;
        case 0x23f58cu: goto label_23f58c;
        case 0x23f590u: goto label_23f590;
        case 0x23f594u: goto label_23f594;
        case 0x23f598u: goto label_23f598;
        case 0x23f59cu: goto label_23f59c;
        case 0x23f5a0u: goto label_23f5a0;
        case 0x23f5a4u: goto label_23f5a4;
        case 0x23f5a8u: goto label_23f5a8;
        case 0x23f5acu: goto label_23f5ac;
        case 0x23f5b0u: goto label_23f5b0;
        case 0x23f5b4u: goto label_23f5b4;
        case 0x23f5b8u: goto label_23f5b8;
        case 0x23f5bcu: goto label_23f5bc;
        case 0x23f5c0u: goto label_23f5c0;
        case 0x23f5c4u: goto label_23f5c4;
        case 0x23f5c8u: goto label_23f5c8;
        case 0x23f5ccu: goto label_23f5cc;
        case 0x23f5d0u: goto label_23f5d0;
        case 0x23f5d4u: goto label_23f5d4;
        case 0x23f5d8u: goto label_23f5d8;
        case 0x23f5dcu: goto label_23f5dc;
        case 0x23f5e0u: goto label_23f5e0;
        case 0x23f5e4u: goto label_23f5e4;
        case 0x23f5e8u: goto label_23f5e8;
        case 0x23f5ecu: goto label_23f5ec;
        case 0x23f5f0u: goto label_23f5f0;
        case 0x23f5f4u: goto label_23f5f4;
        case 0x23f5f8u: goto label_23f5f8;
        case 0x23f5fcu: goto label_23f5fc;
        case 0x23f600u: goto label_23f600;
        case 0x23f604u: goto label_23f604;
        case 0x23f608u: goto label_23f608;
        case 0x23f60cu: goto label_23f60c;
        case 0x23f610u: goto label_23f610;
        case 0x23f614u: goto label_23f614;
        case 0x23f618u: goto label_23f618;
        case 0x23f61cu: goto label_23f61c;
        case 0x23f620u: goto label_23f620;
        case 0x23f624u: goto label_23f624;
        case 0x23f628u: goto label_23f628;
        case 0x23f62cu: goto label_23f62c;
        case 0x23f630u: goto label_23f630;
        case 0x23f634u: goto label_23f634;
        case 0x23f638u: goto label_23f638;
        case 0x23f63cu: goto label_23f63c;
        case 0x23f640u: goto label_23f640;
        case 0x23f644u: goto label_23f644;
        case 0x23f648u: goto label_23f648;
        case 0x23f64cu: goto label_23f64c;
        case 0x23f650u: goto label_23f650;
        case 0x23f654u: goto label_23f654;
        case 0x23f658u: goto label_23f658;
        case 0x23f65cu: goto label_23f65c;
        case 0x23f660u: goto label_23f660;
        case 0x23f664u: goto label_23f664;
        case 0x23f668u: goto label_23f668;
        case 0x23f66cu: goto label_23f66c;
        case 0x23f670u: goto label_23f670;
        case 0x23f674u: goto label_23f674;
        case 0x23f678u: goto label_23f678;
        case 0x23f67cu: goto label_23f67c;
        case 0x23f680u: goto label_23f680;
        case 0x23f684u: goto label_23f684;
        case 0x23f688u: goto label_23f688;
        case 0x23f68cu: goto label_23f68c;
        case 0x23f690u: goto label_23f690;
        case 0x23f694u: goto label_23f694;
        case 0x23f698u: goto label_23f698;
        case 0x23f69cu: goto label_23f69c;
        case 0x23f6a0u: goto label_23f6a0;
        case 0x23f6a4u: goto label_23f6a4;
        case 0x23f6a8u: goto label_23f6a8;
        case 0x23f6acu: goto label_23f6ac;
        case 0x23f6b0u: goto label_23f6b0;
        case 0x23f6b4u: goto label_23f6b4;
        case 0x23f6b8u: goto label_23f6b8;
        case 0x23f6bcu: goto label_23f6bc;
        case 0x23f6c0u: goto label_23f6c0;
        case 0x23f6c4u: goto label_23f6c4;
        case 0x23f6c8u: goto label_23f6c8;
        case 0x23f6ccu: goto label_23f6cc;
        case 0x23f6d0u: goto label_23f6d0;
        case 0x23f6d4u: goto label_23f6d4;
        case 0x23f6d8u: goto label_23f6d8;
        case 0x23f6dcu: goto label_23f6dc;
        case 0x23f6e0u: goto label_23f6e0;
        case 0x23f6e4u: goto label_23f6e4;
        case 0x23f6e8u: goto label_23f6e8;
        case 0x23f6ecu: goto label_23f6ec;
        case 0x23f6f0u: goto label_23f6f0;
        case 0x23f6f4u: goto label_23f6f4;
        case 0x23f6f8u: goto label_23f6f8;
        case 0x23f6fcu: goto label_23f6fc;
        case 0x23f700u: goto label_23f700;
        case 0x23f704u: goto label_23f704;
        case 0x23f708u: goto label_23f708;
        case 0x23f70cu: goto label_23f70c;
        case 0x23f710u: goto label_23f710;
        case 0x23f714u: goto label_23f714;
        case 0x23f718u: goto label_23f718;
        case 0x23f71cu: goto label_23f71c;
        case 0x23f720u: goto label_23f720;
        case 0x23f724u: goto label_23f724;
        case 0x23f728u: goto label_23f728;
        case 0x23f72cu: goto label_23f72c;
        case 0x23f730u: goto label_23f730;
        case 0x23f734u: goto label_23f734;
        case 0x23f738u: goto label_23f738;
        case 0x23f73cu: goto label_23f73c;
        case 0x23f740u: goto label_23f740;
        case 0x23f744u: goto label_23f744;
        case 0x23f748u: goto label_23f748;
        case 0x23f74cu: goto label_23f74c;
        case 0x23f750u: goto label_23f750;
        case 0x23f754u: goto label_23f754;
        case 0x23f758u: goto label_23f758;
        case 0x23f75cu: goto label_23f75c;
        case 0x23f760u: goto label_23f760;
        case 0x23f764u: goto label_23f764;
        case 0x23f768u: goto label_23f768;
        case 0x23f76cu: goto label_23f76c;
        case 0x23f770u: goto label_23f770;
        case 0x23f774u: goto label_23f774;
        case 0x23f778u: goto label_23f778;
        case 0x23f77cu: goto label_23f77c;
        case 0x23f780u: goto label_23f780;
        case 0x23f784u: goto label_23f784;
        case 0x23f788u: goto label_23f788;
        case 0x23f78cu: goto label_23f78c;
        case 0x23f790u: goto label_23f790;
        case 0x23f794u: goto label_23f794;
        case 0x23f798u: goto label_23f798;
        case 0x23f79cu: goto label_23f79c;
        case 0x23f7a0u: goto label_23f7a0;
        case 0x23f7a4u: goto label_23f7a4;
        case 0x23f7a8u: goto label_23f7a8;
        case 0x23f7acu: goto label_23f7ac;
        case 0x23f7b0u: goto label_23f7b0;
        case 0x23f7b4u: goto label_23f7b4;
        case 0x23f7b8u: goto label_23f7b8;
        case 0x23f7bcu: goto label_23f7bc;
        case 0x23f7c0u: goto label_23f7c0;
        case 0x23f7c4u: goto label_23f7c4;
        case 0x23f7c8u: goto label_23f7c8;
        case 0x23f7ccu: goto label_23f7cc;
        case 0x23f7d0u: goto label_23f7d0;
        case 0x23f7d4u: goto label_23f7d4;
        case 0x23f7d8u: goto label_23f7d8;
        case 0x23f7dcu: goto label_23f7dc;
        case 0x23f7e0u: goto label_23f7e0;
        case 0x23f7e4u: goto label_23f7e4;
        case 0x23f7e8u: goto label_23f7e8;
        case 0x23f7ecu: goto label_23f7ec;
        case 0x23f7f0u: goto label_23f7f0;
        case 0x23f7f4u: goto label_23f7f4;
        case 0x23f7f8u: goto label_23f7f8;
        case 0x23f7fcu: goto label_23f7fc;
        case 0x23f800u: goto label_23f800;
        case 0x23f804u: goto label_23f804;
        case 0x23f808u: goto label_23f808;
        case 0x23f80cu: goto label_23f80c;
        case 0x23f810u: goto label_23f810;
        case 0x23f814u: goto label_23f814;
        case 0x23f818u: goto label_23f818;
        case 0x23f81cu: goto label_23f81c;
        case 0x23f820u: goto label_23f820;
        case 0x23f824u: goto label_23f824;
        case 0x23f828u: goto label_23f828;
        case 0x23f82cu: goto label_23f82c;
        case 0x23f830u: goto label_23f830;
        case 0x23f834u: goto label_23f834;
        case 0x23f838u: goto label_23f838;
        case 0x23f83cu: goto label_23f83c;
        case 0x23f840u: goto label_23f840;
        case 0x23f844u: goto label_23f844;
        case 0x23f848u: goto label_23f848;
        case 0x23f84cu: goto label_23f84c;
        case 0x23f850u: goto label_23f850;
        case 0x23f854u: goto label_23f854;
        case 0x23f858u: goto label_23f858;
        case 0x23f85cu: goto label_23f85c;
        case 0x23f860u: goto label_23f860;
        case 0x23f864u: goto label_23f864;
        case 0x23f868u: goto label_23f868;
        case 0x23f86cu: goto label_23f86c;
        case 0x23f870u: goto label_23f870;
        case 0x23f874u: goto label_23f874;
        case 0x23f878u: goto label_23f878;
        case 0x23f87cu: goto label_23f87c;
        case 0x23f880u: goto label_23f880;
        case 0x23f884u: goto label_23f884;
        case 0x23f888u: goto label_23f888;
        case 0x23f88cu: goto label_23f88c;
        case 0x23f890u: goto label_23f890;
        case 0x23f894u: goto label_23f894;
        case 0x23f898u: goto label_23f898;
        case 0x23f89cu: goto label_23f89c;
        case 0x23f8a0u: goto label_23f8a0;
        case 0x23f8a4u: goto label_23f8a4;
        case 0x23f8a8u: goto label_23f8a8;
        case 0x23f8acu: goto label_23f8ac;
        case 0x23f8b0u: goto label_23f8b0;
        case 0x23f8b4u: goto label_23f8b4;
        case 0x23f8b8u: goto label_23f8b8;
        case 0x23f8bcu: goto label_23f8bc;
        case 0x23f8c0u: goto label_23f8c0;
        case 0x23f8c4u: goto label_23f8c4;
        case 0x23f8c8u: goto label_23f8c8;
        case 0x23f8ccu: goto label_23f8cc;
        case 0x23f8d0u: goto label_23f8d0;
        case 0x23f8d4u: goto label_23f8d4;
        case 0x23f8d8u: goto label_23f8d8;
        case 0x23f8dcu: goto label_23f8dc;
        case 0x23f8e0u: goto label_23f8e0;
        case 0x23f8e4u: goto label_23f8e4;
        case 0x23f8e8u: goto label_23f8e8;
        case 0x23f8ecu: goto label_23f8ec;
        case 0x23f8f0u: goto label_23f8f0;
        case 0x23f8f4u: goto label_23f8f4;
        case 0x23f8f8u: goto label_23f8f8;
        case 0x23f8fcu: goto label_23f8fc;
        case 0x23f900u: goto label_23f900;
        case 0x23f904u: goto label_23f904;
        case 0x23f908u: goto label_23f908;
        case 0x23f90cu: goto label_23f90c;
        case 0x23f910u: goto label_23f910;
        case 0x23f914u: goto label_23f914;
        case 0x23f918u: goto label_23f918;
        case 0x23f91cu: goto label_23f91c;
        case 0x23f920u: goto label_23f920;
        case 0x23f924u: goto label_23f924;
        case 0x23f928u: goto label_23f928;
        case 0x23f92cu: goto label_23f92c;
        case 0x23f930u: goto label_23f930;
        case 0x23f934u: goto label_23f934;
        case 0x23f938u: goto label_23f938;
        case 0x23f93cu: goto label_23f93c;
        case 0x23f940u: goto label_23f940;
        case 0x23f944u: goto label_23f944;
        case 0x23f948u: goto label_23f948;
        case 0x23f94cu: goto label_23f94c;
        case 0x23f950u: goto label_23f950;
        case 0x23f954u: goto label_23f954;
        case 0x23f958u: goto label_23f958;
        case 0x23f95cu: goto label_23f95c;
        case 0x23f960u: goto label_23f960;
        case 0x23f964u: goto label_23f964;
        case 0x23f968u: goto label_23f968;
        case 0x23f96cu: goto label_23f96c;
        case 0x23f970u: goto label_23f970;
        case 0x23f974u: goto label_23f974;
        case 0x23f978u: goto label_23f978;
        case 0x23f97cu: goto label_23f97c;
        case 0x23f980u: goto label_23f980;
        case 0x23f984u: goto label_23f984;
        case 0x23f988u: goto label_23f988;
        case 0x23f98cu: goto label_23f98c;
        case 0x23f990u: goto label_23f990;
        case 0x23f994u: goto label_23f994;
        case 0x23f998u: goto label_23f998;
        case 0x23f99cu: goto label_23f99c;
        case 0x23f9a0u: goto label_23f9a0;
        case 0x23f9a4u: goto label_23f9a4;
        case 0x23f9a8u: goto label_23f9a8;
        case 0x23f9acu: goto label_23f9ac;
        case 0x23f9b0u: goto label_23f9b0;
        case 0x23f9b4u: goto label_23f9b4;
        case 0x23f9b8u: goto label_23f9b8;
        case 0x23f9bcu: goto label_23f9bc;
        case 0x23f9c0u: goto label_23f9c0;
        case 0x23f9c4u: goto label_23f9c4;
        case 0x23f9c8u: goto label_23f9c8;
        case 0x23f9ccu: goto label_23f9cc;
        default: return;
    }

label_23f200:
    // 0x23f200: 0x24860002  addiu       $a2, $a0, 0x2
    ctx->pc = 0x23f200u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
label_23f204:
    // 0x23f204: 0x27a70134  addiu       $a3, $sp, 0x134
    ctx->pc = 0x23f204u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 308));
label_23f208:
    // 0x23f208: 0x28a2000a  slti        $v0, $a1, 0xA
    ctx->pc = 0x23f208u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)10) ? 1 : 0);
label_23f20c:
    // 0x23f20c: 0x14400020  bnez        $v0, . + 4 + (0x20 << 2)
label_23f210:
    if (ctx->pc == 0x23F210u) {
        ctx->pc = 0x23F210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F20Cu;
        // 0x23f210: 0xe0482d  daddu       $t1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F214u;
        goto label_23f214;
    }
    ctx->pc = 0x23F20Cu;
    {
        const bool branch_taken_0x23f20c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23F210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F20Cu;
        // 0x23f210: 0xe0482d  daddu       $t1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f20c) {
            ctx->pc = 0x23F290u;
            goto label_23f290;
        }
    }
    ctx->pc = 0x23F214u;
label_23f214:
    // 0x23f214: 0x2408000a  addiu       $t0, $zero, 0xA
    ctx->pc = 0x23f214u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_23f218:
    // 0x23f218: 0xa8001a  div         $zero, $a1, $t0
    ctx->pc = 0x23f218u;
    { int32_t divisor = GPR_S32(ctx, 8);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_23f21c:
    // 0x23f21c: 0x0  nop
    ctx->pc = 0x23f21cu;
    // NOP
label_23f220:
    // 0x23f220: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x23f220u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
label_23f224:
    // 0x23f224: 0x51000001  beql        $t0, $zero, . + 4 + (0x1 << 2)
label_23f228:
    if (ctx->pc == 0x23F228u) {
        ctx->pc = 0x23F228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F224u;
        // 0x23f228: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F22Cu;
        goto label_23f22c;
    }
    ctx->pc = 0x23F224u;
    {
        const bool branch_taken_0x23f224 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x23f224) {
            ctx->pc = 0x23F228u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23F224u;
            // 0x23f228: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x23F22Cu;
            goto label_23f22c;
        }
    }
    ctx->pc = 0x23F22Cu;
label_23f22c:
    // 0x23f22c: 0x1812  mflo        $v1
    ctx->pc = 0x23f22cu;
    SET_GPR_U64(ctx, 3, ctx->lo);
label_23f230:
    // 0x23f230: 0x1010  mfhi        $v0
    ctx->pc = 0x23f230u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_23f234:
    // 0x23f234: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x23f234u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_23f238:
    // 0x23f238: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x23f238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
label_23f23c:
    // 0x23f23c: 0x28a3000a  slti        $v1, $a1, 0xA
    ctx->pc = 0x23f23cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)10) ? 1 : 0);
label_23f240:
    // 0x23f240: 0xa0e20000  sb          $v0, 0x0($a3)
    ctx->pc = 0x23f240u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 2));
label_23f244:
    // 0x23f244: 0x5060fff6  beql        $v1, $zero, . + 4 + (-0xA << 2)
label_23f248:
    if (ctx->pc == 0x23F248u) {
        ctx->pc = 0x23F248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F244u;
        // 0x23f248: 0xa8001a  div         $zero, $a1, $t0 (Delay Slot)
        { int32_t divisor = GPR_S32(ctx, 8);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F24Cu;
        goto label_23f24c;
    }
    ctx->pc = 0x23F244u;
    {
        const bool branch_taken_0x23f244 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x23f244) {
            ctx->pc = 0x23F248u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23F244u;
            // 0x23f248: 0xa8001a  div         $zero, $a1, $t0 (Delay Slot)
            { int32_t divisor = GPR_S32(ctx, 8);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
            ctx->in_delay_slot = false;
            ctx->pc = 0x23F220u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23f220;
        }
    }
    ctx->pc = 0x23F24Cu;
label_23f24c:
    // 0x23f24c: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x23f24cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
label_23f250:
    // 0x23f250: 0x24a20030  addiu       $v0, $a1, 0x30
    ctx->pc = 0x23f250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
label_23f254:
    // 0x23f254: 0xe9182b  sltu        $v1, $a3, $t1
    ctx->pc = 0x23f254u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
label_23f258:
    // 0x23f258: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
label_23f25c:
    if (ctx->pc == 0x23F25Cu) {
        ctx->pc = 0x23F25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F258u;
        // 0x23f25c: 0xa0e20000  sb          $v0, 0x0($a3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F260u;
        goto label_23f260;
    }
    ctx->pc = 0x23F258u;
    {
        const bool branch_taken_0x23f258 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F258u;
        // 0x23f25c: 0xa0e20000  sb          $v0, 0x0($a3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f258) {
            ctx->pc = 0x23F2A8u;
            goto label_23f2a8;
        }
    }
    ctx->pc = 0x23F260u;
label_23f260:
    // 0x23f260: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x23f260u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_23f264:
    // 0x23f264: 0x0  nop
    ctx->pc = 0x23f264u;
    // NOP
label_23f268:
    // 0x23f268: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x23f268u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
label_23f26c:
    // 0x23f26c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x23f26cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_23f270:
    // 0x23f270: 0xe5182b  sltu        $v1, $a3, $a1
    ctx->pc = 0x23f270u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_23f274:
    // 0x23f274: 0xa0c20000  sb          $v0, 0x0($a2)
    ctx->pc = 0x23f274u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
label_23f278:
    // 0x23f278: 0x0  nop
    ctx->pc = 0x23f278u;
    // NOP
label_23f27c:
    // 0x23f27c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_23f280:
    if (ctx->pc == 0x23F280u) {
        ctx->pc = 0x23F280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F27Cu;
        // 0x23f280: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F284u;
        goto label_23f284;
    }
    ctx->pc = 0x23F27Cu;
    {
        const bool branch_taken_0x23f27c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x23F280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F27Cu;
        // 0x23f280: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f27c) {
            ctx->pc = 0x23F268u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23f268;
        }
    }
    ctx->pc = 0x23F284u;
label_23f284:
    // 0x23f284: 0x10000009  b           . + 4 + (0x9 << 2)
label_23f288:
    if (ctx->pc == 0x23F288u) {
        ctx->pc = 0x23F288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F284u;
        // 0x23f288: 0xc41023  subu        $v0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F28Cu;
        goto label_23f28c;
    }
    ctx->pc = 0x23F284u;
    {
        const bool branch_taken_0x23f284 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F284u;
        // 0x23f288: 0xc41023  subu        $v0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f284) {
            ctx->pc = 0x23F2ACu;
            goto label_23f2ac;
        }
    }
    ctx->pc = 0x23F28Cu;
label_23f28c:
    // 0x23f28c: 0x0  nop
    ctx->pc = 0x23f28cu;
    // NOP
label_23f290:
    // 0x23f290: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x23f290u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_23f294:
    // 0x23f294: 0x24a30030  addiu       $v1, $a1, 0x30
    ctx->pc = 0x23f294u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
label_23f298:
    // 0x23f298: 0xa0c20000  sb          $v0, 0x0($a2)
    ctx->pc = 0x23f298u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
label_23f29c:
    // 0x23f29c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x23f29cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_23f2a0:
    // 0x23f2a0: 0xa0c30000  sb          $v1, 0x0($a2)
    ctx->pc = 0x23f2a0u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 3));
label_23f2a4:
    // 0x23f2a4: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x23f2a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_23f2a8:
    // 0x23f2a8: 0xc41023  subu        $v0, $a2, $a0
    ctx->pc = 0x23f2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_23f2ac:
    // 0x23f2ac: 0x3e00008  jr          $ra
label_23f2b0:
    if (ctx->pc == 0x23F2B0u) {
        ctx->pc = 0x23F2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F2ACu;
        // 0x23f2b0: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F2B4u;
        goto label_23f2b4;
    }
    ctx->pc = 0x23F2ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23F2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F2ACu;
        // 0x23f2b0: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23F2ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23F2B4u;
label_23f2b4:
    // 0x23f2b4: 0x0  nop
    ctx->pc = 0x23f2b4u;
    // NOP
label_23f2b8:
    // 0x23f2b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x23f2b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_23f2bc:
    // 0x23f2bc: 0x3c02005a  lui         $v0, 0x5A
    ctx->pc = 0x23f2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)90 << 16));
label_23f2c0:
    // 0x23f2c0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23f2c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_23f2c4:
    // 0x23f2c4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x23f2c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_23f2c8:
    // 0x23f2c8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x23f2c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_23f2cc:
    // 0x23f2cc: 0x245159c8  addiu       $s1, $v0, 0x59C8
    ctx->pc = 0x23f2ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 22984));
label_23f2d0:
    // 0x23f2d0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x23f2d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_23f2d4:
    // 0x23f2d4: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x23f2d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_23f2d8:
    // 0x23f2d8: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x23f2d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_23f2dc:
    // 0x23f2dc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x23f2dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_23f2e0:
    // 0x23f2e0: 0xc06937a  jal         func_1A4DE8
label_23f2e4:
    if (ctx->pc == 0x23F2E4u) {
        ctx->pc = 0x23F2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F2E0u;
        // 0x23f2e4: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F2E8u;
        goto label_23f2e8;
    }
    ctx->pc = 0x23F2E0u;
    SET_GPR_U32(ctx, 31, 0x23F2E8u);
    ctx->pc = 0x23F2E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F2E0u;
    // 0x23f2e4: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4DE8u;
    { ctx->pc = 0x1a4de8; return; }
    ctx->pc = 0x23F2E8u;
label_23f2e8:
    // 0x23f2e8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x23f2e8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23f2ec:
    // 0x23f2ec: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x23f2ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_23f2f0:
    // 0x23f2f0: 0x14640004  bne         $v1, $a0, . + 4 + (0x4 << 2)
label_23f2f4:
    if (ctx->pc == 0x23F2F4u) {
        ctx->pc = 0x23F2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F2F0u;
        // 0x23f2f4: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F2F8u;
        goto label_23f2f8;
    }
    ctx->pc = 0x23F2F0u;
    {
        const bool branch_taken_0x23f2f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x23F2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F2F0u;
        // 0x23f2f4: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f2f0) {
            ctx->pc = 0x23F304u;
            goto label_23f304;
        }
    }
    ctx->pc = 0x23F2F8u;
label_23f2f8:
    // 0x23f2f8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x23f2f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_23f2fc:
    // 0x23f2fc: 0x54600001  bnel        $v1, $zero, . + 4 + (0x1 << 2)
label_23f300:
    if (ctx->pc == 0x23F300u) {
        ctx->pc = 0x23F300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F2FCu;
        // 0x23f300: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F304u;
        goto label_23f304;
    }
    ctx->pc = 0x23F2FCu;
    {
        const bool branch_taken_0x23f2fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x23f2fc) {
            ctx->pc = 0x23F300u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23F2FCu;
            // 0x23f300: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23F304u;
            goto label_23f304;
        }
    }
    ctx->pc = 0x23F304u;
label_23f304:
    // 0x23f304: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23f304u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_23f308:
    // 0x23f308: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x23f308u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_23f30c:
    // 0x23f30c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x23f30cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_23f310:
    // 0x23f310: 0x3e00008  jr          $ra
label_23f314:
    if (ctx->pc == 0x23F314u) {
        ctx->pc = 0x23F314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F310u;
        // 0x23f314: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F318u;
        goto label_23f318;
    }
    ctx->pc = 0x23F310u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23F314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F310u;
        // 0x23f314: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23F310u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23F318u;
label_23f318:
    // 0x23f318: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x23f318u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_23f31c:
    // 0x23f31c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23f31cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_23f320:
    // 0x23f320: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x23f320u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_23f324:
    // 0x23f324: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x23f324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_23f328:
    // 0x23f328: 0x8e030054  lw          $v1, 0x54($s0)
    ctx->pc = 0x23f328u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_23f32c:
    // 0x23f32c: 0x54600006  bnel        $v1, $zero, . + 4 + (0x6 << 2)
label_23f330:
    if (ctx->pc == 0x23F330u) {
        ctx->pc = 0x23F330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F32Cu;
        // 0x23f330: 0x8c620038  lw          $v0, 0x38($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F334u;
        goto label_23f334;
    }
    ctx->pc = 0x23F32Cu;
    {
        const bool branch_taken_0x23f32c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x23f32c) {
            ctx->pc = 0x23F330u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23F32Cu;
            // 0x23f330: 0x8c620038  lw          $v0, 0x38($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23F348u;
            goto label_23f348;
        }
    }
    ctx->pc = 0x23F334u;
label_23f334:
    // 0x23f334: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x23f334u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
label_23f338:
    // 0x23f338: 0x8c430818  lw          $v1, 0x818($v0)
    ctx->pc = 0x23f338u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2072)));
label_23f33c:
    // 0x23f33c: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x23f33cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
label_23f340:
    // 0x23f340: 0x8c620038  lw          $v0, 0x38($v1)
    ctx->pc = 0x23f340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
label_23f344:
    // 0x23f344: 0x0  nop
    ctx->pc = 0x23f344u;
    // NOP
label_23f348:
    // 0x23f348: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_23f34c:
    if (ctx->pc == 0x23F34Cu) {
        ctx->pc = 0x23F34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F348u;
        // 0x23f34c: 0x9604000c  lhu         $a0, 0xC($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F350u;
        goto label_23f350;
    }
    ctx->pc = 0x23F348u;
    {
        const bool branch_taken_0x23f348 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23f348) {
            ctx->pc = 0x23F34Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23F348u;
            // 0x23f34c: 0x9604000c  lhu         $a0, 0xC($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23F35Cu;
            goto label_23f35c;
        }
    }
    ctx->pc = 0x23F350u;
label_23f350:
    // 0x23f350: 0xc08e29c  jal         func_238A70
label_23f354:
    if (ctx->pc == 0x23F354u) {
        ctx->pc = 0x23F354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F350u;
        // 0x23f354: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F358u;
        goto label_23f358;
    }
    ctx->pc = 0x23F350u;
    SET_GPR_U32(ctx, 31, 0x23F358u);
    ctx->pc = 0x23F354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F350u;
    // 0x23f354: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238A70u;
    { ctx->pc = 0x238a70; return; }
    ctx->pc = 0x23F358u;
label_23f358:
    // 0x23f358: 0x9604000c  lhu         $a0, 0xC($s0)
    ctx->pc = 0x23f358u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
label_23f35c:
    // 0x23f35c: 0x30820008  andi        $v0, $a0, 0x8
    ctx->pc = 0x23f35cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8);
label_23f360:
    // 0x23f360: 0x54400019  bnel        $v0, $zero, . + 4 + (0x19 << 2)
label_23f364:
    if (ctx->pc == 0x23F364u) {
        ctx->pc = 0x23F364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F360u;
        // 0x23f364: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F368u;
        goto label_23f368;
    }
    ctx->pc = 0x23F360u;
    {
        const bool branch_taken_0x23f360 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23f360) {
            ctx->pc = 0x23F364u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23F360u;
            // 0x23f364: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23F3C8u;
            goto label_23f3c8;
        }
    }
    ctx->pc = 0x23F368u;
label_23f368:
    // 0x23f368: 0x30830010  andi        $v1, $a0, 0x10
    ctx->pc = 0x23f368u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16);
label_23f36c:
    // 0x23f36c: 0x10600029  beqz        $v1, . + 4 + (0x29 << 2)
label_23f370:
    if (ctx->pc == 0x23F370u) {
        ctx->pc = 0x23F370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F36Cu;
        // 0x23f370: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F374u;
        goto label_23f374;
    }
    ctx->pc = 0x23F36Cu;
    {
        const bool branch_taken_0x23f36c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F36Cu;
        // 0x23f370: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f36c) {
            ctx->pc = 0x23F414u;
            goto label_23f414;
        }
    }
    ctx->pc = 0x23F374u;
label_23f374:
    // 0x23f374: 0x30820004  andi        $v0, $a0, 0x4
    ctx->pc = 0x23f374u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
label_23f378:
    // 0x23f378: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
label_23f37c:
    if (ctx->pc == 0x23F37Cu) {
        ctx->pc = 0x23F37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F378u;
        // 0x23f37c: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F380u;
        goto label_23f380;
    }
    ctx->pc = 0x23F378u;
    {
        const bool branch_taken_0x23f378 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23f378) {
            ctx->pc = 0x23F37Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23F378u;
            // 0x23f37c: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23F3C0u;
            goto label_23f3c0;
        }
    }
    ctx->pc = 0x23F380u;
label_23f380:
    // 0x23f380: 0x8e050030  lw          $a1, 0x30($s0)
    ctx->pc = 0x23f380u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_23f384:
    // 0x23f384: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
label_23f388:
    if (ctx->pc == 0x23F388u) {
        ctx->pc = 0x23F388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F384u;
        // 0x23f388: 0x26020040  addiu       $v0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F38Cu;
        goto label_23f38c;
    }
    ctx->pc = 0x23F384u;
    {
        const bool branch_taken_0x23f384 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F384u;
        // 0x23f388: 0x26020040  addiu       $v0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f384) {
            ctx->pc = 0x23F3A4u;
            goto label_23f3a4;
        }
    }
    ctx->pc = 0x23F38Cu;
label_23f38c:
    // 0x23f38c: 0x50a20005  beql        $a1, $v0, . + 4 + (0x5 << 2)
label_23f390:
    if (ctx->pc == 0x23F390u) {
        ctx->pc = 0x23F390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F38Cu;
        // 0x23f390: 0xae000030  sw          $zero, 0x30($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F394u;
        goto label_23f394;
    }
    ctx->pc = 0x23F38Cu;
    {
        const bool branch_taken_0x23f38c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x23f38c) {
            ctx->pc = 0x23F390u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23F38Cu;
            // 0x23f390: 0xae000030  sw          $zero, 0x30($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23F3A4u;
            goto label_23f3a4;
        }
    }
    ctx->pc = 0x23F394u;
label_23f394:
    // 0x23f394: 0xc08e2c0  jal         func_238B00
label_23f398:
    if (ctx->pc == 0x23F398u) {
        ctx->pc = 0x23F398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F394u;
        // 0x23f398: 0x8e040054  lw          $a0, 0x54($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F39Cu;
        goto label_23f39c;
    }
    ctx->pc = 0x23F394u;
    SET_GPR_U32(ctx, 31, 0x23F39Cu);
    ctx->pc = 0x23F398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F394u;
    // 0x23f398: 0x8e040054  lw          $a0, 0x54($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238B00u;
    { ctx->pc = 0x238b00; return; }
    ctx->pc = 0x23F39Cu;
label_23f39c:
    // 0x23f39c: 0x9604000c  lhu         $a0, 0xC($s0)
    ctx->pc = 0x23f39cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
label_23f3a0:
    // 0x23f3a0: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x23f3a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
label_23f3a4:
    // 0x23f3a4: 0x2402ffdb  addiu       $v0, $zero, -0x25
    ctx->pc = 0x23f3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967259));
label_23f3a8:
    // 0x23f3a8: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x23f3a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_23f3ac:
    // 0x23f3ac: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x23f3acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_23f3b0:
    // 0x23f3b0: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x23f3b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_23f3b4:
    // 0x23f3b4: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x23f3b4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
label_23f3b8:
    // 0x23f3b8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x23f3b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23f3bc:
    // 0x23f3bc: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x23f3bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
label_23f3c0:
    // 0x23f3c0: 0x34820008  ori         $v0, $a0, 0x8
    ctx->pc = 0x23f3c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8);
label_23f3c4:
    // 0x23f3c4: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x23f3c4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
label_23f3c8:
    // 0x23f3c8: 0x54a00004  bnel        $a1, $zero, . + 4 + (0x4 << 2)
label_23f3cc:
    if (ctx->pc == 0x23F3CCu) {
        ctx->pc = 0x23F3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F3C8u;
        // 0x23f3cc: 0x9603000c  lhu         $v1, 0xC($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F3D0u;
        goto label_23f3d0;
    }
    ctx->pc = 0x23F3C8u;
    {
        const bool branch_taken_0x23f3c8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x23f3c8) {
            ctx->pc = 0x23F3CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23F3C8u;
            // 0x23f3cc: 0x9603000c  lhu         $v1, 0xC($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23F3DCu;
            goto label_23f3dc;
        }
    }
    ctx->pc = 0x23F3D0u;
label_23f3d0:
    // 0x23f3d0: 0xc08e568  jal         func_2395A0
label_23f3d4:
    if (ctx->pc == 0x23F3D4u) {
        ctx->pc = 0x23F3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F3D0u;
        // 0x23f3d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F3D8u;
        goto label_23f3d8;
    }
    ctx->pc = 0x23F3D0u;
    SET_GPR_U32(ctx, 31, 0x23F3D8u);
    ctx->pc = 0x23F3D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F3D0u;
    // 0x23f3d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2395A0u;
    { ctx->pc = 0x2395a0; return; }
    ctx->pc = 0x23F3D8u;
label_23f3d8:
    // 0x23f3d8: 0x9603000c  lhu         $v1, 0xC($s0)
    ctx->pc = 0x23f3d8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
label_23f3dc:
    // 0x23f3dc: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x23f3dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_23f3e0:
    // 0x23f3e0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_23f3e4:
    if (ctx->pc == 0x23F3E4u) {
        ctx->pc = 0x23F3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F3E0u;
        // 0x23f3e4: 0x30620002  andi        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F3E8u;
        goto label_23f3e8;
    }
    ctx->pc = 0x23F3E0u;
    {
        const bool branch_taken_0x23f3e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F3E0u;
        // 0x23f3e4: 0x30620002  andi        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f3e0) {
            ctx->pc = 0x23F400u;
            goto label_23f400;
        }
    }
    ctx->pc = 0x23F3E8u;
label_23f3e8:
    // 0x23f3e8: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x23f3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_23f3ec:
    // 0x23f3ec: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x23f3ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_23f3f0:
    // 0x23f3f0: 0x21023  negu        $v0, $v0
    ctx->pc = 0x23f3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_23f3f4:
    // 0x23f3f4: 0x10000006  b           . + 4 + (0x6 << 2)
label_23f3f8:
    if (ctx->pc == 0x23F3F8u) {
        ctx->pc = 0x23F3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F3F4u;
        // 0x23f3f8: 0xae020018  sw          $v0, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F3FCu;
        goto label_23f3fc;
    }
    ctx->pc = 0x23F3F4u;
    {
        const bool branch_taken_0x23f3f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F3F4u;
        // 0x23f3f8: 0xae020018  sw          $v0, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f3f4) {
            ctx->pc = 0x23F410u;
            goto label_23f410;
        }
    }
    ctx->pc = 0x23F3FCu;
label_23f3fc:
    // 0x23f3fc: 0x0  nop
    ctx->pc = 0x23f3fcu;
    // NOP
label_23f400:
    // 0x23f400: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_23f404:
    if (ctx->pc == 0x23F404u) {
        ctx->pc = 0x23F404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F400u;
        // 0x23f404: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F408u;
        goto label_23f408;
    }
    ctx->pc = 0x23F400u;
    {
        const bool branch_taken_0x23f400 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23F404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F400u;
        // 0x23f404: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f400) {
            ctx->pc = 0x23F40Cu;
            goto label_23f40c;
        }
    }
    ctx->pc = 0x23F408u;
label_23f408:
    // 0x23f408: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x23f408u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_23f40c:
    // 0x23f40c: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x23f40cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
label_23f410:
    // 0x23f410: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x23f410u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23f414:
    // 0x23f414: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23f414u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_23f418:
    // 0x23f418: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x23f418u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_23f41c:
    // 0x23f41c: 0x3e00008  jr          $ra
label_23f420:
    if (ctx->pc == 0x23F420u) {
        ctx->pc = 0x23F420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F41Cu;
        // 0x23f420: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F424u;
        goto label_23f424;
    }
    ctx->pc = 0x23F41Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23F420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F41Cu;
        // 0x23f420: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23F41Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23F424u;
label_23f424:
    // 0x23f424: 0x0  nop
    ctx->pc = 0x23f424u;
    // NOP
label_23f428:
    // 0x23f428: 0x0  nop
    ctx->pc = 0x23f428u;
    // NOP
label_23f42c:
    // 0x23f42c: 0x0  nop
    ctx->pc = 0x23f42cu;
    // NOP
label_23f430:
    // 0x23f430: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x23f430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_23f434:
    // 0x23f434: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x23f434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_23f438:
    // 0x23f438: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_23f43c:
    if (ctx->pc == 0x23F43Cu) {
        ctx->pc = 0x23F43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F438u;
        // 0x23f43c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F440u;
        goto label_23f440;
    }
    ctx->pc = 0x23F438u;
    {
        const bool branch_taken_0x23f438 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F438u;
        // 0x23f43c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f438) {
            ctx->pc = 0x23F454u;
            goto label_23f454;
        }
    }
    ctx->pc = 0x23F440u;
label_23f440:
    // 0x23f440: 0x2c810005  sltiu       $at, $a0, 0x5
    ctx->pc = 0x23f440u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_23f444:
    // 0x23f444: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
label_23f448:
    if (ctx->pc == 0x23F448u) {
        ctx->pc = 0x23F448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F444u;
        // 0x23f448: 0x2c830005  sltiu       $v1, $a0, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F44Cu;
        goto label_23f44c;
    }
    ctx->pc = 0x23F444u;
    {
        const bool branch_taken_0x23f444 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F444u;
        // 0x23f448: 0x2c830005  sltiu       $v1, $a0, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f444) {
            ctx->pc = 0x23F458u;
            goto label_23f458;
        }
    }
    ctx->pc = 0x23F44Cu;
label_23f44c:
    // 0x23f44c: 0x10000008  b           . + 4 + (0x8 << 2)
label_23f450:
    if (ctx->pc == 0x23F450u) {
        ctx->pc = 0x23F450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F44Cu;
        // 0x23f450: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F454u;
        goto label_23f454;
    }
    ctx->pc = 0x23F44Cu;
    {
        const bool branch_taken_0x23f44c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F44Cu;
        // 0x23f450: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f44c) {
            ctx->pc = 0x23F470u;
            goto label_23f470;
        }
    }
    ctx->pc = 0x23F454u;
label_23f454:
    // 0x23f454: 0x2c830005  sltiu       $v1, $a0, 0x5
    ctx->pc = 0x23f454u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_23f458:
    // 0x23f458: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
label_23f45c:
    if (ctx->pc == 0x23F45Cu) {
        ctx->pc = 0x23F45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F458u;
        // 0x23f45c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F460u;
        goto label_23f460;
    }
    ctx->pc = 0x23F458u;
    {
        const bool branch_taken_0x23f458 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x23F45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F458u;
        // 0x23f45c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f458) {
            ctx->pc = 0x23F470u;
            goto label_23f470;
        }
    }
    ctx->pc = 0x23F460u;
label_23f460:
    // 0x23f460: 0x2c810006  sltiu       $at, $a0, 0x6
    ctx->pc = 0x23f460u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_23f464:
    // 0x23f464: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_23f468:
    if (ctx->pc == 0x23F468u) {
        ctx->pc = 0x23F46Cu;
        goto label_23f46c;
    }
    ctx->pc = 0x23F464u;
    {
        const bool branch_taken_0x23f464 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x23f464) {
            ctx->pc = 0x23F470u;
            goto label_23f470;
        }
    }
    ctx->pc = 0x23F46Cu;
label_23f46c:
    // 0x23f46c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x23f46cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_23f470:
    // 0x23f470: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x23f470u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_23f474:
    // 0x23f474: 0x10a3000d  beq         $a1, $v1, . + 4 + (0xD << 2)
label_23f478:
    if (ctx->pc == 0x23F478u) {
        ctx->pc = 0x23F47Cu;
        goto label_23f47c;
    }
    ctx->pc = 0x23F474u;
    {
        const bool branch_taken_0x23f474 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x23f474) {
            ctx->pc = 0x23F4ACu;
            goto label_23f4ac;
        }
    }
    ctx->pc = 0x23F47Cu;
label_23f47c:
    // 0x23f47c: 0x3c02002d  lui         $v0, 0x2D
    ctx->pc = 0x23f47cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
label_23f480:
    // 0x23f480: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x23f480u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_23f484:
    // 0x23f484: 0x24420140  addiu       $v0, $v0, 0x140
    ctx->pc = 0x23f484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 320));
label_23f488:
    // 0x23f488: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x23f488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_23f48c:
    // 0x23f48c: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x23f48cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_23f490:
    // 0x23f490: 0xc041424  jal         func_105090
label_23f494:
    if (ctx->pc == 0x23F494u) {
        ctx->pc = 0x23F494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F490u;
        // 0x23f494: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F498u;
        goto label_23f498;
    }
    ctx->pc = 0x23F490u;
    SET_GPR_U32(ctx, 31, 0x23F498u);
    ctx->pc = 0x23F494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F490u;
    // 0x23f494: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105090u, 0x23F490u, 0x23F498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F498u;
label_23f498:
    // 0x23f498: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x23f498u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23f49c:
    // 0x23f49c: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
label_23f4a0:
    if (ctx->pc == 0x23F4A0u) {
        ctx->pc = 0x23F4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F49Cu;
        // 0x23f4a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F4A4u;
        goto label_23f4a4;
    }
    ctx->pc = 0x23F49Cu;
    {
        const bool branch_taken_0x23f49c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F49Cu;
        // 0x23f4a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f49c) {
            ctx->pc = 0x23F4ACu;
            goto label_23f4ac;
        }
    }
    ctx->pc = 0x23F4A4u;
label_23f4a4:
    // 0x23f4a4: 0xc0660bc  jal         func_1982F0
label_23f4a8:
    if (ctx->pc == 0x23F4A8u) {
        ctx->pc = 0x23F4ACu;
        goto label_23f4ac;
    }
    ctx->pc = 0x23F4A4u;
    SET_GPR_U32(ctx, 31, 0x23F4ACu);
    ctx->pc = 0x1982F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1982F0u, 0x23F4A4u, 0x23F4ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F4ACu;
label_23f4ac:
    // 0x23f4ac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x23f4acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_23f4b0:
    // 0x23f4b0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x23f4b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_23f4b4:
    // 0x23f4b4: 0x3e00008  jr          $ra
label_23f4b8:
    if (ctx->pc == 0x23F4B8u) {
        ctx->pc = 0x23F4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F4B4u;
        // 0x23f4b8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F4BCu;
        goto label_23f4bc;
    }
    ctx->pc = 0x23F4B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23F4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F4B4u;
        // 0x23f4b8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23F4B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23F4BCu;
label_23f4bc:
    // 0x23f4bc: 0x0  nop
    ctx->pc = 0x23f4bcu;
    // NOP
label_23f4c0:
    // 0x23f4c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x23f4c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_23f4c4:
    // 0x23f4c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x23f4c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_23f4c8:
    // 0x23f4c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x23f4c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_23f4cc:
    // 0x23f4cc: 0xc060134  jal         func_1804D0
label_23f4d0:
    if (ctx->pc == 0x23F4D0u) {
        ctx->pc = 0x23F4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F4CCu;
        // 0x23f4d0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F4D4u;
        goto label_23f4d4;
    }
    ctx->pc = 0x23F4CCu;
    SET_GPR_U32(ctx, 31, 0x23F4D4u);
    ctx->pc = 0x23F4D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F4CCu;
    // 0x23f4d0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1804D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1804D0u, 0x23F4CCu, 0x23F4D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F4D4u;
label_23f4d4:
    // 0x23f4d4: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
label_23f4d8:
    if (ctx->pc == 0x23F4D8u) {
        ctx->pc = 0x23F4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F4D4u;
        // 0x23f4d8: 0x2e020005  sltiu       $v0, $s0, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F4DCu;
        goto label_23f4dc;
    }
    ctx->pc = 0x23F4D4u;
    {
        const bool branch_taken_0x23f4d4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F4D4u;
        // 0x23f4d8: 0x2e020005  sltiu       $v0, $s0, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f4d4) {
            ctx->pc = 0x23F4F0u;
            goto label_23f4f0;
        }
    }
    ctx->pc = 0x23F4DCu;
label_23f4dc:
    // 0x23f4dc: 0x2e010005  sltiu       $at, $s0, 0x5
    ctx->pc = 0x23f4dcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_23f4e0:
    // 0x23f4e0: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_23f4e4:
    if (ctx->pc == 0x23F4E4u) {
        ctx->pc = 0x23F4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F4E0u;
        // 0x23f4e4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F4E8u;
        goto label_23f4e8;
    }
    ctx->pc = 0x23F4E0u;
    {
        const bool branch_taken_0x23f4e0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F4E0u;
        // 0x23f4e4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f4e0) {
            ctx->pc = 0x23F4F0u;
            goto label_23f4f0;
        }
    }
    ctx->pc = 0x23F4E8u;
label_23f4e8:
    // 0x23f4e8: 0x10000008  b           . + 4 + (0x8 << 2)
label_23f4ec:
    if (ctx->pc == 0x23F4ECu) {
        ctx->pc = 0x23F4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F4E8u;
        // 0x23f4ec: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F4F0u;
        goto label_23f4f0;
    }
    ctx->pc = 0x23F4E8u;
    {
        const bool branch_taken_0x23f4e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F4E8u;
        // 0x23f4ec: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f4e8) {
            ctx->pc = 0x23F50Cu;
            goto label_23f50c;
        }
    }
    ctx->pc = 0x23F4F0u;
label_23f4f0:
    // 0x23f4f0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_23f4f4:
    if (ctx->pc == 0x23F4F4u) {
        ctx->pc = 0x23F4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F4F0u;
        // 0x23f4f4: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F4F8u;
        goto label_23f4f8;
    }
    ctx->pc = 0x23F4F0u;
    {
        const bool branch_taken_0x23f4f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23F4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F4F0u;
        // 0x23f4f4: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f4f0) {
            ctx->pc = 0x23F508u;
            goto label_23f508;
        }
    }
    ctx->pc = 0x23F4F8u;
label_23f4f8:
    // 0x23f4f8: 0x2e010006  sltiu       $at, $s0, 0x6
    ctx->pc = 0x23f4f8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_23f4fc:
    // 0x23f4fc: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_23f500:
    if (ctx->pc == 0x23F500u) {
        ctx->pc = 0x23F504u;
        goto label_23f504;
    }
    ctx->pc = 0x23F4FCu;
    {
        const bool branch_taken_0x23f4fc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x23f4fc) {
            ctx->pc = 0x23F508u;
            goto label_23f508;
        }
    }
    ctx->pc = 0x23F504u;
label_23f504:
    // 0x23f504: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x23f504u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_23f508:
    // 0x23f508: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x23f508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_23f50c:
    // 0x23f50c: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
label_23f510:
    if (ctx->pc == 0x23F510u) {
        ctx->pc = 0x23F510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F50Cu;
        // 0x23f510: 0x3c02002d  lui         $v0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F514u;
        goto label_23f514;
    }
    ctx->pc = 0x23F50Cu;
    {
        const bool branch_taken_0x23f50c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x23F510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F50Cu;
        // 0x23f510: 0x3c02002d  lui         $v0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f50c) {
            ctx->pc = 0x23F540u;
            goto label_23f540;
        }
    }
    ctx->pc = 0x23F514u;
label_23f514:
    // 0x23f514: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x23f514u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_23f518:
    // 0x23f518: 0x24420140  addiu       $v0, $v0, 0x140
    ctx->pc = 0x23f518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 320));
label_23f51c:
    // 0x23f51c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23f51cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_23f520:
    // 0x23f520: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x23f520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_23f524:
    // 0x23f524: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x23f524u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_23f528:
    // 0x23f528: 0xc041424  jal         func_105090
label_23f52c:
    if (ctx->pc == 0x23F52Cu) {
        ctx->pc = 0x23F52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F528u;
        // 0x23f52c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F530u;
        goto label_23f530;
    }
    ctx->pc = 0x23F528u;
    SET_GPR_U32(ctx, 31, 0x23F530u);
    ctx->pc = 0x23F52Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F528u;
    // 0x23f52c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105090u, 0x23F528u, 0x23F530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F530u;
label_23f530:
    // 0x23f530: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_23f534:
    if (ctx->pc == 0x23F534u) {
        ctx->pc = 0x23F534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F530u;
        // 0x23f534: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F538u;
        goto label_23f538;
    }
    ctx->pc = 0x23F530u;
    {
        const bool branch_taken_0x23f530 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F530u;
        // 0x23f534: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f530) {
            ctx->pc = 0x23F540u;
            goto label_23f540;
        }
    }
    ctx->pc = 0x23F538u;
label_23f538:
    // 0x23f538: 0xc0660bc  jal         func_1982F0
label_23f53c:
    if (ctx->pc == 0x23F53Cu) {
        ctx->pc = 0x23F53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F538u;
        // 0x23f53c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F540u;
        goto label_23f540;
    }
    ctx->pc = 0x23F538u;
    SET_GPR_U32(ctx, 31, 0x23F540u);
    ctx->pc = 0x23F53Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F538u;
    // 0x23f53c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1982F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1982F0u, 0x23F538u, 0x23F540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F540u;
label_23f540:
    // 0x23f540: 0xc060158  jal         func_180560
label_23f544:
    if (ctx->pc == 0x23F544u) {
        ctx->pc = 0x23F548u;
        goto label_23f548;
    }
    ctx->pc = 0x23F540u;
    SET_GPR_U32(ctx, 31, 0x23F548u);
    ctx->pc = 0x180560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180560u, 0x23F540u, 0x23F548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F548u;
label_23f548:
    // 0x23f548: 0xc060258  jal         func_180960
label_23f54c:
    if (ctx->pc == 0x23F54Cu) {
        ctx->pc = 0x23F550u;
        goto label_23f550;
    }
    ctx->pc = 0x23F548u;
    SET_GPR_U32(ctx, 31, 0x23F550u);
    ctx->pc = 0x180960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180960u, 0x23F548u, 0x23F550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F550u;
label_23f550:
    // 0x23f550: 0xc060258  jal         func_180960
label_23f554:
    if (ctx->pc == 0x23F554u) {
        ctx->pc = 0x23F558u;
        goto label_23f558;
    }
    ctx->pc = 0x23F550u;
    SET_GPR_U32(ctx, 31, 0x23F558u);
    ctx->pc = 0x180960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180960u, 0x23F550u, 0x23F558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F558u;
label_23f558:
    // 0x23f558: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x23f558u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_23f55c:
    // 0x23f55c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x23f55cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_23f560:
    // 0x23f560: 0x3e00008  jr          $ra
label_23f564:
    if (ctx->pc == 0x23F564u) {
        ctx->pc = 0x23F564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F560u;
        // 0x23f564: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F568u;
        goto label_23f568;
    }
    ctx->pc = 0x23F560u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23F564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F560u;
        // 0x23f564: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23F560u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23F568u;
label_23f568:
    // 0x23f568: 0x0  nop
    ctx->pc = 0x23f568u;
    // NOP
label_23f56c:
    // 0x23f56c: 0x0  nop
    ctx->pc = 0x23f56cu;
    // NOP
label_23f570:
    // 0x23f570: 0x3c02002d  lui         $v0, 0x2D
    ctx->pc = 0x23f570u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
label_23f574:
    // 0x23f574: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x23f574u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_23f578:
    // 0x23f578: 0x24420140  addiu       $v0, $v0, 0x140
    ctx->pc = 0x23f578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 320));
label_23f57c:
    // 0x23f57c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x23f57cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_23f580:
    // 0x23f580: 0x3e00008  jr          $ra
label_23f584:
    if (ctx->pc == 0x23F584u) {
        ctx->pc = 0x23F584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F580u;
        // 0x23f584: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F588u;
        goto label_23f588;
    }
    ctx->pc = 0x23F580u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23F584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F580u;
        // 0x23f584: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23F580u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23F588u;
label_23f588:
    // 0x23f588: 0x0  nop
    ctx->pc = 0x23f588u;
    // NOP
label_23f58c:
    // 0x23f58c: 0x0  nop
    ctx->pc = 0x23f58cu;
    // NOP
label_23f590:
    // 0x23f590: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x23f590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_23f594:
    // 0x23f594: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23f594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23f598:
    // 0x23f598: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23f598u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_23f59c:
    // 0x23f59c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x23f59cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_23f5a0:
    // 0x23f5a0: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x23f5a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
label_23f5a4:
    // 0x23f5a4: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x23f5a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
label_23f5a8:
    // 0x23f5a8: 0xc069208  jal         func_1A4820
label_23f5ac:
    if (ctx->pc == 0x23F5ACu) {
        ctx->pc = 0x23F5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F5A8u;
        // 0x23f5ac: 0xafa00024  sw          $zero, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F5B0u;
        goto label_23f5b0;
    }
    ctx->pc = 0x23F5A8u;
    SET_GPR_U32(ctx, 31, 0x23F5B0u);
    ctx->pc = 0x23F5ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F5A8u;
    // 0x23f5ac: 0xafa00024  sw          $zero, 0x24($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4820u;
    { ctx->pc = 0x1a4820; return; }
    ctx->pc = 0x23F5B0u;
label_23f5b0:
    // 0x23f5b0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x23f5b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23f5b4:
    // 0x23f5b4: 0xaf828304  sw          $v0, -0x7CFC($gp)
    ctx->pc = 0x23f5b4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935300), GPR_U32(ctx, 2));
label_23f5b8:
    // 0x23f5b8: 0xaf838308  sw          $v1, -0x7CF8($gp)
    ctx->pc = 0x23f5b8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935304), GPR_U32(ctx, 3));
label_23f5bc:
    // 0x23f5bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23f5bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_23f5c0:
    // 0x23f5c0: 0x3e00008  jr          $ra
label_23f5c4:
    if (ctx->pc == 0x23F5C4u) {
        ctx->pc = 0x23F5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F5C0u;
        // 0x23f5c4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F5C8u;
        goto label_23f5c8;
    }
    ctx->pc = 0x23F5C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23F5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F5C0u;
        // 0x23f5c4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23F5C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23F5C8u;
label_23f5c8:
    // 0x23f5c8: 0x0  nop
    ctx->pc = 0x23f5c8u;
    // NOP
label_23f5cc:
    // 0x23f5cc: 0x0  nop
    ctx->pc = 0x23f5ccu;
    // NOP
label_23f5d0:
    // 0x23f5d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x23f5d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_23f5d4:
    // 0x23f5d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23f5d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_23f5d8:
    // 0x23f5d8: 0xc08fd98  jal         func_23F660
label_23f5dc:
    if (ctx->pc == 0x23F5DCu) {
        ctx->pc = 0x23F5E0u;
        goto label_23f5e0;
    }
    ctx->pc = 0x23F5D8u;
    SET_GPR_U32(ctx, 31, 0x23F5E0u);
    ctx->pc = 0x23F660u;
    goto label_23f660;
    ctx->pc = 0x23F5E0u;
label_23f5e0:
    // 0x23f5e0: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
label_23f5e4:
    if (ctx->pc == 0x23F5E4u) {
        ctx->pc = 0x23F5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F5E0u;
        // 0x23f5e4: 0x24040018  addiu       $a0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F5E8u;
        goto label_23f5e8;
    }
    ctx->pc = 0x23F5E0u;
    {
        const bool branch_taken_0x23f5e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F5E0u;
        // 0x23f5e4: 0x24040018  addiu       $a0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f5e0) {
            ctx->pc = 0x23F654u;
            goto label_23f654;
        }
    }
    ctx->pc = 0x23F5E8u;
label_23f5e8:
    // 0x23f5e8: 0x2405003c  addiu       $a1, $zero, 0x3C
    ctx->pc = 0x23f5e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_23f5ec:
    // 0x23f5ec: 0x240600ac  addiu       $a2, $zero, 0xAC
    ctx->pc = 0x23f5ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 172));
label_23f5f0:
    // 0x23f5f0: 0x3407fff0  ori         $a3, $zero, 0xFFF0
    ctx->pc = 0x23f5f0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65520);
label_23f5f4:
    // 0x23f5f4: 0x240801f8  addiu       $t0, $zero, 0x1F8
    ctx->pc = 0x23f5f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 504));
label_23f5f8:
    // 0x23f5f8: 0xc07aa5c  jal         func_1EA970
label_23f5fc:
    if (ctx->pc == 0x23F5FCu) {
        ctx->pc = 0x23F5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F5F8u;
        // 0x23f5fc: 0x24090068  addiu       $t1, $zero, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F600u;
        goto label_23f600;
    }
    ctx->pc = 0x23F5F8u;
    SET_GPR_U32(ctx, 31, 0x23F600u);
    ctx->pc = 0x23F5FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F5F8u;
    // 0x23f5fc: 0x24090068  addiu       $t1, $zero, 0x68 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA970u;
    { ctx->pc = 0x1ea970; return; }
    ctx->pc = 0x23F600u;
label_23f600:
    // 0x23f600: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x23f600u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_23f604:
    // 0x23f604: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x23f604u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_23f608:
    // 0x23f608: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x23f608u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_23f60c:
    // 0x23f60c: 0xc07aa7c  jal         func_1EA9F0
label_23f610:
    if (ctx->pc == 0x23F610u) {
        ctx->pc = 0x23F610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F60Cu;
        // 0x23f610: 0x24070003  addiu       $a3, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F614u;
        goto label_23f614;
    }
    ctx->pc = 0x23F60Cu;
    SET_GPR_U32(ctx, 31, 0x23F614u);
    ctx->pc = 0x23F610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F60Cu;
    // 0x23f610: 0x24070003  addiu       $a3, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA9F0u;
    { ctx->pc = 0x1ea9f0; return; }
    ctx->pc = 0x23F614u;
label_23f614:
    // 0x23f614: 0xc07ab08  jal         func_1EAC20
label_23f618:
    if (ctx->pc == 0x23F618u) {
        ctx->pc = 0x23F618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F614u;
        // 0x23f618: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F61Cu;
        goto label_23f61c;
    }
    ctx->pc = 0x23F614u;
    SET_GPR_U32(ctx, 31, 0x23F61Cu);
    ctx->pc = 0x23F618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F614u;
    // 0x23f618: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAC20u;
    { ctx->pc = 0x1eac20; return; }
    ctx->pc = 0x23F61Cu;
label_23f61c:
    // 0x23f61c: 0xc08fddc  jal         func_23F770
label_23f620:
    if (ctx->pc == 0x23F620u) {
        ctx->pc = 0x23F620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F61Cu;
        // 0x23f620: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F624u;
        goto label_23f624;
    }
    ctx->pc = 0x23F61Cu;
    SET_GPR_U32(ctx, 31, 0x23F624u);
    ctx->pc = 0x23F620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F61Cu;
    // 0x23f620: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23F770u;
    goto label_23f770;
    ctx->pc = 0x23F624u;
label_23f624:
    // 0x23f624: 0xc044358  jal         func_110D60
label_23f628:
    if (ctx->pc == 0x23F628u) {
        ctx->pc = 0x23F62Cu;
        goto label_23f62c;
    }
    ctx->pc = 0x23F624u;
    SET_GPR_U32(ctx, 31, 0x23F62Cu);
    ctx->pc = 0x110D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110D60u, 0x23F624u, 0x23F62Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F62Cu;
label_23f62c:
    // 0x23f62c: 0xc084b98  jal         func_212E60
label_23f630:
    if (ctx->pc == 0x23F630u) {
        ctx->pc = 0x23F634u;
        goto label_23f634;
    }
    ctx->pc = 0x23F62Cu;
    SET_GPR_U32(ctx, 31, 0x23F634u);
    ctx->pc = 0x212E60u;
    { ctx->pc = 0x212e60; return; }
    ctx->pc = 0x23F634u;
label_23f634:
    // 0x23f634: 0xc08fddc  jal         func_23F770
label_23f638:
    if (ctx->pc == 0x23F638u) {
        ctx->pc = 0x23F638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F634u;
        // 0x23f638: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F63Cu;
        goto label_23f63c;
    }
    ctx->pc = 0x23F634u;
    SET_GPR_U32(ctx, 31, 0x23F63Cu);
    ctx->pc = 0x23F638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F634u;
    // 0x23f638: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23F770u;
    goto label_23f770;
    ctx->pc = 0x23F63Cu;
label_23f63c:
    // 0x23f63c: 0xc07ab18  jal         func_1EAC60
label_23f640:
    if (ctx->pc == 0x23F640u) {
        ctx->pc = 0x23F640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F63Cu;
        // 0x23f640: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F644u;
        goto label_23f644;
    }
    ctx->pc = 0x23F63Cu;
    SET_GPR_U32(ctx, 31, 0x23F644u);
    ctx->pc = 0x23F640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F63Cu;
    // 0x23f640: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAC60u;
    { ctx->pc = 0x1eac60; return; }
    ctx->pc = 0x23F644u;
label_23f644:
    // 0x23f644: 0xc060258  jal         func_180960
label_23f648:
    if (ctx->pc == 0x23F648u) {
        ctx->pc = 0x23F64Cu;
        goto label_23f64c;
    }
    ctx->pc = 0x23F644u;
    SET_GPR_U32(ctx, 31, 0x23F64Cu);
    ctx->pc = 0x180960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180960u, 0x23F644u, 0x23F64Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F64Cu;
label_23f64c:
    // 0x23f64c: 0xc060258  jal         func_180960
label_23f650:
    if (ctx->pc == 0x23F650u) {
        ctx->pc = 0x23F654u;
        goto label_23f654;
    }
    ctx->pc = 0x23F64Cu;
    SET_GPR_U32(ctx, 31, 0x23F654u);
    ctx->pc = 0x180960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180960u, 0x23F64Cu, 0x23F654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F654u;
label_23f654:
    // 0x23f654: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23f654u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_23f658:
    // 0x23f658: 0x3e00008  jr          $ra
label_23f65c:
    if (ctx->pc == 0x23F65Cu) {
        ctx->pc = 0x23F65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F658u;
        // 0x23f65c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F660u;
        goto label_23f660;
    }
    ctx->pc = 0x23F658u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23F65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F658u;
        // 0x23f65c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23F658u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23F660u;
label_23f660:
    // 0x23f660: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x23f660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_23f664:
    // 0x23f664: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x23f664u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_23f668:
    // 0x23f668: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x23f668u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_23f66c:
    // 0x23f66c: 0x2405003c  addiu       $a1, $zero, 0x3C
    ctx->pc = 0x23f66cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_23f670:
    // 0x23f670: 0x240600a0  addiu       $a2, $zero, 0xA0
    ctx->pc = 0x23f670u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
label_23f674:
    // 0x23f674: 0x3407fff0  ori         $a3, $zero, 0xFFF0
    ctx->pc = 0x23f674u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65520);
label_23f678:
    // 0x23f678: 0x240801f8  addiu       $t0, $zero, 0x1F8
    ctx->pc = 0x23f678u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 504));
label_23f67c:
    // 0x23f67c: 0x24090080  addiu       $t1, $zero, 0x80
    ctx->pc = 0x23f67cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_23f680:
    // 0x23f680: 0xc07aa5c  jal         func_1EA970
label_23f684:
    if (ctx->pc == 0x23F684u) {
        ctx->pc = 0x23F684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F680u;
        // 0x23f684: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F688u;
        goto label_23f688;
    }
    ctx->pc = 0x23F680u;
    SET_GPR_U32(ctx, 31, 0x23F688u);
    ctx->pc = 0x23F684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F680u;
    // 0x23f684: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA970u;
    { ctx->pc = 0x1ea970; return; }
    ctx->pc = 0x23F688u;
label_23f688:
    // 0x23f688: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x23f688u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_23f68c:
    // 0x23f68c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x23f68cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_23f690:
    // 0x23f690: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x23f690u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_23f694:
    // 0x23f694: 0xc07aa7c  jal         func_1EA9F0
label_23f698:
    if (ctx->pc == 0x23F698u) {
        ctx->pc = 0x23F698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F694u;
        // 0x23f698: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F69Cu;
        goto label_23f69c;
    }
    ctx->pc = 0x23F694u;
    SET_GPR_U32(ctx, 31, 0x23F69Cu);
    ctx->pc = 0x23F698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F694u;
    // 0x23f698: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA9F0u;
    { ctx->pc = 0x1ea9f0; return; }
    ctx->pc = 0x23F69Cu;
label_23f69c:
    // 0x23f69c: 0xc07ab08  jal         func_1EAC20
label_23f6a0:
    if (ctx->pc == 0x23F6A0u) {
        ctx->pc = 0x23F6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F69Cu;
        // 0x23f6a0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F6A4u;
        goto label_23f6a4;
    }
    ctx->pc = 0x23F69Cu;
    SET_GPR_U32(ctx, 31, 0x23F6A4u);
    ctx->pc = 0x23F6A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F69Cu;
    // 0x23f6a0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAC20u;
    { ctx->pc = 0x1eac20; return; }
    ctx->pc = 0x23F6A4u;
label_23f6a4:
    // 0x23f6a4: 0x3c01002a  lui         $at, 0x2A
    ctx->pc = 0x23f6a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)42 << 16));
label_23f6a8:
    // 0x23f6a8: 0xc07aaa8  jal         func_1EAAA0
label_23f6ac:
    if (ctx->pc == 0x23F6ACu) {
        ctx->pc = 0x23F6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F6A8u;
        // 0x23f6ac: 0x8c24c960  lw          $a0, -0x36A0($at) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953312)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F6B0u;
        goto label_23f6b0;
    }
    ctx->pc = 0x23F6A8u;
    SET_GPR_U32(ctx, 31, 0x23F6B0u);
    ctx->pc = 0x23F6ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F6A8u;
    // 0x23f6ac: 0x8c24c960  lw          $a0, -0x36A0($at) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953312)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAAA0u;
    { ctx->pc = 0x1eaaa0; return; }
    ctx->pc = 0x23F6B0u;
label_23f6b0:
    // 0x23f6b0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x23f6b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23f6b4:
    // 0x23f6b4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x23f6b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23f6b8:
    // 0x23f6b8: 0xc07aa94  jal         func_1EAA50
label_23f6bc:
    if (ctx->pc == 0x23F6BCu) {
        ctx->pc = 0x23F6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F6B8u;
        // 0x23f6bc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F6C0u;
        goto label_23f6c0;
    }
    ctx->pc = 0x23F6B8u;
    SET_GPR_U32(ctx, 31, 0x23F6C0u);
    ctx->pc = 0x23F6BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F6B8u;
    // 0x23f6bc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAA50u;
    { ctx->pc = 0x1eaa50; return; }
    ctx->pc = 0x23F6C0u;
label_23f6c0:
    // 0x23f6c0: 0xc07ab38  jal         func_1EACE0
label_23f6c4:
    if (ctx->pc == 0x23F6C4u) {
        ctx->pc = 0x23F6C8u;
        goto label_23f6c8;
    }
    ctx->pc = 0x23F6C0u;
    SET_GPR_U32(ctx, 31, 0x23F6C8u);
    ctx->pc = 0x1EACE0u;
    { ctx->pc = 0x1eace0; return; }
    ctx->pc = 0x23F6C8u;
label_23f6c8:
    // 0x23f6c8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x23f6c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_23f6cc:
    // 0x23f6cc: 0x1443000e  bne         $v0, $v1, . + 4 + (0xE << 2)
label_23f6d0:
    if (ctx->pc == 0x23F6D0u) {
        ctx->pc = 0x23F6D4u;
        goto label_23f6d4;
    }
    ctx->pc = 0x23F6CCu;
    {
        const bool branch_taken_0x23f6cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x23f6cc) {
            ctx->pc = 0x23F708u;
            goto label_23f708;
        }
    }
    ctx->pc = 0x23F6D4u;
label_23f6d4:
    // 0x23f6d4: 0xc07aaa4  jal         func_1EAA90
label_23f6d8:
    if (ctx->pc == 0x23F6D8u) {
        ctx->pc = 0x23F6DCu;
        goto label_23f6dc;
    }
    ctx->pc = 0x23F6D4u;
    SET_GPR_U32(ctx, 31, 0x23F6DCu);
    ctx->pc = 0x1EAA90u;
    { ctx->pc = 0x1eaa90; return; }
    ctx->pc = 0x23F6DCu;
label_23f6dc:
    // 0x23f6dc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x23f6dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23f6e0:
    // 0x23f6e0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x23f6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_23f6e4:
    // 0x23f6e4: 0x12020004  beq         $s0, $v0, . + 4 + (0x4 << 2)
label_23f6e8:
    if (ctx->pc == 0x23F6E8u) {
        ctx->pc = 0x23F6ECu;
        goto label_23f6ec;
    }
    ctx->pc = 0x23F6E4u;
    {
        const bool branch_taken_0x23f6e4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x23f6e4) {
            ctx->pc = 0x23F6F8u;
            goto label_23f6f8;
        }
    }
    ctx->pc = 0x23F6ECu;
label_23f6ec:
    // 0x23f6ec: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x23f6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_23f6f0:
    // 0x23f6f0: 0x16020005  bne         $s0, $v0, . + 4 + (0x5 << 2)
label_23f6f4:
    if (ctx->pc == 0x23F6F4u) {
        ctx->pc = 0x23F6F8u;
        goto label_23f6f8;
    }
    ctx->pc = 0x23F6F0u;
    {
        const bool branch_taken_0x23f6f0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x23f6f0) {
            ctx->pc = 0x23F708u;
            goto label_23f708;
        }
    }
    ctx->pc = 0x23F6F8u;
label_23f6f8:
    // 0x23f6f8: 0xc07aaa0  jal         func_1EAA80
label_23f6fc:
    if (ctx->pc == 0x23F6FCu) {
        ctx->pc = 0x23F700u;
        goto label_23f700;
    }
    ctx->pc = 0x23F6F8u;
    SET_GPR_U32(ctx, 31, 0x23F700u);
    ctx->pc = 0x1EAA80u;
    { ctx->pc = 0x1eaa80; return; }
    ctx->pc = 0x23F700u;
label_23f700:
    // 0x23f700: 0x1000000b  b           . + 4 + (0xB << 2)
label_23f704:
    if (ctx->pc == 0x23F704u) {
        ctx->pc = 0x23F708u;
        goto label_23f708;
    }
    ctx->pc = 0x23F700u;
    {
        const bool branch_taken_0x23f700 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23f700) {
            ctx->pc = 0x23F730u;
            goto label_23f730;
        }
    }
    ctx->pc = 0x23F708u;
label_23f708:
    // 0x23f708: 0xc07a9d8  jal         func_1EA760
label_23f70c:
    if (ctx->pc == 0x23F70Cu) {
        ctx->pc = 0x23F710u;
        goto label_23f710;
    }
    ctx->pc = 0x23F708u;
    SET_GPR_U32(ctx, 31, 0x23F710u);
    ctx->pc = 0x1EA760u;
    { ctx->pc = 0x1ea760; return; }
    ctx->pc = 0x23F710u;
label_23f710:
    // 0x23f710: 0xc07a86c  jal         func_1EA1B0
label_23f714:
    if (ctx->pc == 0x23F714u) {
        ctx->pc = 0x23F718u;
        goto label_23f718;
    }
    ctx->pc = 0x23F710u;
    SET_GPR_U32(ctx, 31, 0x23F718u);
    ctx->pc = 0x1EA1B0u;
    { ctx->pc = 0x1ea1b0; return; }
    ctx->pc = 0x23F718u;
label_23f718:
    // 0x23f718: 0xc05b578  jal         func_16D5E0
label_23f71c:
    if (ctx->pc == 0x23F71Cu) {
        ctx->pc = 0x23F71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F718u;
        // 0x23f71c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F720u;
        goto label_23f720;
    }
    ctx->pc = 0x23F718u;
    SET_GPR_U32(ctx, 31, 0x23F720u);
    ctx->pc = 0x23F71Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F718u;
    // 0x23f71c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D5E0u, 0x23F718u, 0x23F720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F720u;
label_23f720:
    // 0x23f720: 0xc060258  jal         func_180960
label_23f724:
    if (ctx->pc == 0x23F724u) {
        ctx->pc = 0x23F728u;
        goto label_23f728;
    }
    ctx->pc = 0x23F720u;
    SET_GPR_U32(ctx, 31, 0x23F728u);
    ctx->pc = 0x180960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180960u, 0x23F720u, 0x23F728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F728u;
label_23f728:
    // 0x23f728: 0x1000ffe5  b           . + 4 + (-0x1B << 2)
label_23f72c:
    if (ctx->pc == 0x23F72Cu) {
        ctx->pc = 0x23F730u;
        goto label_23f730;
    }
    ctx->pc = 0x23F728u;
    {
        const bool branch_taken_0x23f728 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23f728) {
            ctx->pc = 0x23F6C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23f6c0;
        }
    }
    ctx->pc = 0x23F730u;
label_23f730:
    // 0x23f730: 0xc07aaa0  jal         func_1EAA80
label_23f734:
    if (ctx->pc == 0x23F734u) {
        ctx->pc = 0x23F738u;
        goto label_23f738;
    }
    ctx->pc = 0x23F730u;
    SET_GPR_U32(ctx, 31, 0x23F738u);
    ctx->pc = 0x1EAA80u;
    { ctx->pc = 0x1eaa80; return; }
    ctx->pc = 0x23F738u;
label_23f738:
    // 0x23f738: 0xc07ab18  jal         func_1EAC60
label_23f73c:
    if (ctx->pc == 0x23F73Cu) {
        ctx->pc = 0x23F73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F738u;
        // 0x23f73c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F740u;
        goto label_23f740;
    }
    ctx->pc = 0x23F738u;
    SET_GPR_U32(ctx, 31, 0x23F740u);
    ctx->pc = 0x23F73Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F738u;
    // 0x23f73c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAC60u;
    { ctx->pc = 0x1eac60; return; }
    ctx->pc = 0x23F740u;
label_23f740:
    // 0x23f740: 0xc060258  jal         func_180960
label_23f744:
    if (ctx->pc == 0x23F744u) {
        ctx->pc = 0x23F748u;
        goto label_23f748;
    }
    ctx->pc = 0x23F740u;
    SET_GPR_U32(ctx, 31, 0x23F748u);
    ctx->pc = 0x180960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180960u, 0x23F740u, 0x23F748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F748u;
label_23f748:
    // 0x23f748: 0xc060258  jal         func_180960
label_23f74c:
    if (ctx->pc == 0x23F74Cu) {
        ctx->pc = 0x23F750u;
        goto label_23f750;
    }
    ctx->pc = 0x23F748u;
    SET_GPR_U32(ctx, 31, 0x23F750u);
    ctx->pc = 0x180960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180960u, 0x23F748u, 0x23F750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F750u;
label_23f750:
    // 0x23f750: 0x3a020002  xori        $v0, $s0, 0x2
    ctx->pc = 0x23f750u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) ^ (uint64_t)(uint16_t)2);
label_23f754:
    // 0x23f754: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x23f754u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_23f758:
    // 0x23f758: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x23f758u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_23f75c:
    // 0x23f75c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x23f75cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_23f760:
    // 0x23f760: 0x3e00008  jr          $ra
label_23f764:
    if (ctx->pc == 0x23F764u) {
        ctx->pc = 0x23F764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F760u;
        // 0x23f764: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F768u;
        goto label_23f768;
    }
    ctx->pc = 0x23F760u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23F764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F760u;
        // 0x23f764: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23F760u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23F768u;
label_23f768:
    // 0x23f768: 0x0  nop
    ctx->pc = 0x23f768u;
    // NOP
label_23f76c:
    // 0x23f76c: 0x0  nop
    ctx->pc = 0x23f76cu;
    // NOP
label_23f770:
    // 0x23f770: 0x27bdfe60  addiu       $sp, $sp, -0x1A0
    ctx->pc = 0x23f770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966880));
label_23f774:
    // 0x23f774: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x23f774u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
label_23f778:
    // 0x23f778: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x23f778u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_23f77c:
    // 0x23f77c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23f77cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23f780:
    // 0x23f780: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x23f780u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_23f784:
    // 0x23f784: 0x2463c960  addiu       $v1, $v1, -0x36A0
    ctx->pc = 0x23f784u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953312));
label_23f788:
    // 0x23f788: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x23f788u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_23f78c:
    // 0x23f78c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x23f78cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23f790:
    // 0x23f790: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x23f790u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_23f794:
    // 0x23f794: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x23f794u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_23f798:
    // 0x23f798: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x23f798u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_23f79c:
    // 0x23f79c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x23f79cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_23f7a0:
    // 0x23f7a0: 0x53200a  movz        $a0, $v0, $s3
    ctx->pc = 0x23f7a0u;
    if (GPR_U64(ctx, 19) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
label_23f7a4:
    // 0x23f7a4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x23f7a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_23f7a8:
    // 0x23f7a8: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x23f7a8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_23f7ac:
    // 0x23f7ac: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x23f7acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_23f7b0:
    // 0x23f7b0: 0xaf938308  sw          $s3, -0x7CF8($gp)
    ctx->pc = 0x23f7b0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935304), GPR_U32(ctx, 19));
label_23f7b4:
    // 0x23f7b4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x23f7b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_23f7b8:
    // 0x23f7b8: 0x8c720000  lw          $s2, 0x0($v1)
    ctx->pc = 0x23f7b8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_23f7bc:
    // 0x23f7bc: 0x53a00a  movz        $s4, $v0, $s3
    ctx->pc = 0x23f7bcu;
    if (GPR_U64(ctx, 19) == 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 2));
label_23f7c0:
    // 0x23f7c0: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x23f7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_23f7c4:
    // 0x23f7c4: 0x128200cb  beq         $s4, $v0, . + 4 + (0xCB << 2)
label_23f7c8:
    if (ctx->pc == 0x23F7C8u) {
        ctx->pc = 0x23F7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F7C4u;
        // 0x23f7c8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F7CCu;
        goto label_23f7cc;
    }
    ctx->pc = 0x23F7C4u;
    {
        const bool branch_taken_0x23f7c4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        ctx->pc = 0x23F7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F7C4u;
        // 0x23f7c8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f7c4) {
            ctx->pc = 0x23FAF4u;
            { ctx->pc = 0x23faf4; return; }
        }
    }
    ctx->pc = 0x23F7CCu;
label_23f7cc:
    // 0x23f7cc: 0x2e810009  sltiu       $at, $s4, 0x9
    ctx->pc = 0x23f7ccu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
label_23f7d0:
    // 0x23f7d0: 0x102000bf  beqz        $at, . + 4 + (0xBF << 2)
label_23f7d4:
    if (ctx->pc == 0x23F7D4u) {
        ctx->pc = 0x23F7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F7D0u;
        // 0x23f7d4: 0x3c03002d  lui         $v1, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F7D8u;
        goto label_23f7d8;
    }
    ctx->pc = 0x23F7D0u;
    {
        const bool branch_taken_0x23f7d0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F7D0u;
        // 0x23f7d4: 0x3c03002d  lui         $v1, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f7d0) {
            ctx->pc = 0x23FAD0u;
            { ctx->pc = 0x23fad0; return; }
        }
    }
    ctx->pc = 0x23F7D8u;
label_23f7d8:
    // 0x23f7d8: 0x141080  sll         $v0, $s4, 2
    ctx->pc = 0x23f7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
label_23f7dc:
    // 0x23f7dc: 0x2463ea30  addiu       $v1, $v1, -0x15D0
    ctx->pc = 0x23f7dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961712));
label_23f7e0:
    // 0x23f7e0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x23f7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_23f7e4:
    // 0x23f7e4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x23f7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_23f7e8:
    // 0x23f7e8: 0x400008  jr          $v0
label_23f7ec:
    if (ctx->pc == 0x23F7ECu) {
        ctx->pc = 0x23F7F0u;
        goto label_23f7f0;
    }
    ctx->pc = 0x23F7E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23F7F0u: goto label_23f7f0;
            case 0x23F804u: goto label_23f804;
            case 0x23F830u: goto label_23f830;
            case 0x23F844u: goto label_23f844;
            case 0x23F888u: goto label_23f888;
            case 0x23F8E8u: goto label_23f8e8;
            case 0x23F90Cu: goto label_23f90c;
            case 0x23F92Cu: goto label_23f92c;
            case 0x23FABCu: { ctx->pc = 0x23fabc; return; }
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23F7E8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x23F7F0u;
label_23f7f0:
    // 0x23f7f0: 0x3c01002a  lui         $at, 0x2A
    ctx->pc = 0x23f7f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)42 << 16));
label_23f7f4:
    // 0x23f7f4: 0xc07aaa8  jal         func_1EAAA0
label_23f7f8:
    if (ctx->pc == 0x23F7F8u) {
        ctx->pc = 0x23F7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F7F4u;
        // 0x23f7f8: 0x8c24c980  lw          $a0, -0x3680($at) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953344)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F7FCu;
        goto label_23f7fc;
    }
    ctx->pc = 0x23F7F4u;
    SET_GPR_U32(ctx, 31, 0x23F7FCu);
    ctx->pc = 0x23F7F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F7F4u;
    // 0x23f7f8: 0x8c24c980  lw          $a0, -0x3680($at) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953344)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAAA0u;
    { ctx->pc = 0x1eaaa0; return; }
    ctx->pc = 0x23F7FCu;
label_23f7fc:
    // 0x23f7fc: 0x100000b4  b           . + 4 + (0xB4 << 2)
label_23f800:
    if (ctx->pc == 0x23F800u) {
        ctx->pc = 0x23F800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F7FCu;
        // 0x23f800: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F804u;
        goto label_23f804;
    }
    ctx->pc = 0x23F7FCu;
    {
        const bool branch_taken_0x23f7fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F7FCu;
        // 0x23f800: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f7fc) {
            ctx->pc = 0x23FAD0u;
            { ctx->pc = 0x23fad0; return; }
        }
    }
    ctx->pc = 0x23F804u;
label_23f804:
    // 0x23f804: 0x0  nop
    ctx->pc = 0x23f804u;
    // NOP
label_23f808:
    // 0x23f808: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x23f808u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_23f80c:
    // 0x23f80c: 0x2841005a  slti        $at, $v0, 0x5A
    ctx->pc = 0x23f80cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)90) ? 1 : 0);
label_23f810:
    // 0x23f810: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
label_23f814:
    if (ctx->pc == 0x23F814u) {
        ctx->pc = 0x23F814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F810u;
        // 0x23f814: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F818u;
        goto label_23f818;
    }
    ctx->pc = 0x23F810u;
    {
        const bool branch_taken_0x23f810 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F810u;
        // 0x23f814: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f810) {
            ctx->pc = 0x23F828u;
            goto label_23f828;
        }
    }
    ctx->pc = 0x23F818u;
label_23f818:
    // 0x23f818: 0xdf8287c8  ld          $v0, -0x7838($gp)
    ctx->pc = 0x23f818u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294936520)));
label_23f81c:
    // 0x23f81c: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x23f81cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
label_23f820:
    // 0x23f820: 0x104000ab  beqz        $v0, . + 4 + (0xAB << 2)
label_23f824:
    if (ctx->pc == 0x23F824u) {
        ctx->pc = 0x23F828u;
        goto label_23f828;
    }
    ctx->pc = 0x23F820u;
    {
        const bool branch_taken_0x23f820 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23f820) {
            ctx->pc = 0x23FAD0u;
            { ctx->pc = 0x23fad0; return; }
        }
    }
    ctx->pc = 0x23F828u;
label_23f828:
    // 0x23f828: 0x100000a9  b           . + 4 + (0xA9 << 2)
label_23f82c:
    if (ctx->pc == 0x23F82Cu) {
        ctx->pc = 0x23F82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F828u;
        // 0x23f82c: 0x24140002  addiu       $s4, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F830u;
        goto label_23f830;
    }
    ctx->pc = 0x23F828u;
    {
        const bool branch_taken_0x23f828 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F828u;
        // 0x23f82c: 0x24140002  addiu       $s4, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f828) {
            ctx->pc = 0x23FAD0u;
            { ctx->pc = 0x23fad0; return; }
        }
    }
    ctx->pc = 0x23F830u;
label_23f830:
    // 0x23f830: 0x3c01002a  lui         $at, 0x2A
    ctx->pc = 0x23f830u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)42 << 16));
label_23f834:
    // 0x23f834: 0xc07aaa8  jal         func_1EAAA0
label_23f838:
    if (ctx->pc == 0x23F838u) {
        ctx->pc = 0x23F838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F834u;
        // 0x23f838: 0x8c24c97c  lw          $a0, -0x3684($at) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953340)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F83Cu;
        goto label_23f83c;
    }
    ctx->pc = 0x23F834u;
    SET_GPR_U32(ctx, 31, 0x23F83Cu);
    ctx->pc = 0x23F838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F834u;
    // 0x23f838: 0x8c24c97c  lw          $a0, -0x3684($at) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953340)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAAA0u;
    { ctx->pc = 0x1eaaa0; return; }
    ctx->pc = 0x23F83Cu;
label_23f83c:
    // 0x23f83c: 0x100000a4  b           . + 4 + (0xA4 << 2)
label_23f840:
    if (ctx->pc == 0x23F840u) {
        ctx->pc = 0x23F840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F83Cu;
        // 0x23f840: 0x24140003  addiu       $s4, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F844u;
        goto label_23f844;
    }
    ctx->pc = 0x23F83Cu;
    {
        const bool branch_taken_0x23f83c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F83Cu;
        // 0x23f840: 0x24140003  addiu       $s4, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f83c) {
            ctx->pc = 0x23FAD0u;
            { ctx->pc = 0x23fad0; return; }
        }
    }
    ctx->pc = 0x23F844u;
label_23f844:
    // 0x23f844: 0x0  nop
    ctx->pc = 0x23f844u;
    // NOP
label_23f848:
    // 0x23f848: 0xc06c1da  jal         func_1B0768
label_23f84c:
    if (ctx->pc == 0x23F84Cu) {
        ctx->pc = 0x23F850u;
        goto label_23f850;
    }
    ctx->pc = 0x23F848u;
    SET_GPR_U32(ctx, 31, 0x23F850u);
    ctx->pc = 0x1B0768u;
    { ctx->pc = 0x1b0768; return; }
    ctx->pc = 0x23F850u;
label_23f850:
    // 0x23f850: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x23f850u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23f854:
    // 0x23f854: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
label_23f858:
    if (ctx->pc == 0x23F858u) {
        ctx->pc = 0x23F858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F854u;
        // 0x23f858: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F85Cu;
        goto label_23f85c;
    }
    ctx->pc = 0x23F854u;
    {
        const bool branch_taken_0x23f854 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x23F858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F854u;
        // 0x23f858: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f854) {
            ctx->pc = 0x23F86Cu;
            goto label_23f86c;
        }
    }
    ctx->pc = 0x23F85Cu;
label_23f85c:
    // 0x23f85c: 0xc07aaa8  jal         func_1EAAA0
label_23f860:
    if (ctx->pc == 0x23F860u) {
        ctx->pc = 0x23F864u;
        goto label_23f864;
    }
    ctx->pc = 0x23F85Cu;
    SET_GPR_U32(ctx, 31, 0x23F864u);
    ctx->pc = 0x1EAAA0u;
    { ctx->pc = 0x1eaaa0; return; }
    ctx->pc = 0x23F864u;
label_23f864:
    // 0x23f864: 0x1000009a  b           . + 4 + (0x9A << 2)
label_23f868:
    if (ctx->pc == 0x23F868u) {
        ctx->pc = 0x23F868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F864u;
        // 0x23f868: 0x24140005  addiu       $s4, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F86Cu;
        goto label_23f86c;
    }
    ctx->pc = 0x23F864u;
    {
        const bool branch_taken_0x23f864 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F864u;
        // 0x23f868: 0x24140005  addiu       $s4, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f864) {
            ctx->pc = 0x23FAD0u;
            { ctx->pc = 0x23fad0; return; }
        }
    }
    ctx->pc = 0x23F86Cu;
label_23f86c:
    // 0x23f86c: 0x0  nop
    ctx->pc = 0x23f86cu;
    // NOP
label_23f870:
    // 0x23f870: 0xdf8287c8  ld          $v0, -0x7838($gp)
    ctx->pc = 0x23f870u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294936520)));
label_23f874:
    // 0x23f874: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x23f874u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_23f878:
    // 0x23f878: 0x10400095  beqz        $v0, . + 4 + (0x95 << 2)
label_23f87c:
    if (ctx->pc == 0x23F87Cu) {
        ctx->pc = 0x23F880u;
        goto label_23f880;
    }
    ctx->pc = 0x23F878u;
    {
        const bool branch_taken_0x23f878 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23f878) {
            ctx->pc = 0x23FAD0u;
            { ctx->pc = 0x23fad0; return; }
        }
    }
    ctx->pc = 0x23F880u;
label_23f880:
    // 0x23f880: 0x10000093  b           . + 4 + (0x93 << 2)
label_23f884:
    if (ctx->pc == 0x23F884u) {
        ctx->pc = 0x23F884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F880u;
        // 0x23f884: 0x24140004  addiu       $s4, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F888u;
        goto label_23f888;
    }
    ctx->pc = 0x23F880u;
    {
        const bool branch_taken_0x23f880 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F880u;
        // 0x23f884: 0x24140004  addiu       $s4, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f880) {
            ctx->pc = 0x23FAD0u;
            { ctx->pc = 0x23fad0; return; }
        }
    }
    ctx->pc = 0x23F888u;
label_23f888:
    // 0x23f888: 0xafa00198  sw          $zero, 0x198($sp)
    ctx->pc = 0x23f888u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 408), GPR_U32(ctx, 0));
label_23f88c:
    // 0x23f88c: 0x8fa20198  lw          $v0, 0x198($sp)
    ctx->pc = 0x23f88cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
label_23f890:
    // 0x23f890: 0x3c010010  lui         $at, 0x10
    ctx->pc = 0x23f890u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16 << 16));
label_23f894:
    // 0x23f894: 0x41082a  slt         $at, $v0, $at
    ctx->pc = 0x23f894u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
label_23f898:
    // 0x23f898: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
label_23f89c:
    if (ctx->pc == 0x23F89Cu) {
        ctx->pc = 0x23F89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F898u;
        // 0x23f89c: 0x3c030010  lui         $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F8A0u;
        goto label_23f8a0;
    }
    ctx->pc = 0x23F898u;
    {
        const bool branch_taken_0x23f898 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F898u;
        // 0x23f89c: 0x3c030010  lui         $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f898) {
            ctx->pc = 0x23F8BCu;
            goto label_23f8bc;
        }
    }
    ctx->pc = 0x23F8A0u;
label_23f8a0:
    // 0x23f8a0: 0x8fa20198  lw          $v0, 0x198($sp)
    ctx->pc = 0x23f8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
label_23f8a4:
    // 0x23f8a4: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x23f8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_23f8a8:
    // 0x23f8a8: 0xafa20198  sw          $v0, 0x198($sp)
    ctx->pc = 0x23f8a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 408), GPR_U32(ctx, 2));
label_23f8ac:
    // 0x23f8ac: 0x8fa20198  lw          $v0, 0x198($sp)
    ctx->pc = 0x23f8acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
label_23f8b0:
    // 0x23f8b0: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x23f8b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_23f8b4:
    // 0x23f8b4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_23f8b8:
    if (ctx->pc == 0x23F8B8u) {
        ctx->pc = 0x23F8BCu;
        goto label_23f8bc;
    }
    ctx->pc = 0x23F8B4u;
    {
        const bool branch_taken_0x23f8b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23f8b4) {
            ctx->pc = 0x23F8A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23f8a0;
        }
    }
    ctx->pc = 0x23F8BCu;
label_23f8bc:
    // 0x23f8bc: 0x0  nop
    ctx->pc = 0x23f8bcu;
    // NOP
label_23f8c0:
    // 0x23f8c0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x23f8c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23f8c4:
    // 0x23f8c4: 0xc06c274  jal         func_1B09D0
label_23f8c8:
    if (ctx->pc == 0x23F8C8u) {
        ctx->pc = 0x23F8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F8C4u;
        // 0x23f8c8: 0x27a50194  addiu       $a1, $sp, 0x194 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 404));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F8CCu;
        goto label_23f8cc;
    }
    ctx->pc = 0x23F8C4u;
    SET_GPR_U32(ctx, 31, 0x23F8CCu);
    ctx->pc = 0x23F8C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F8C4u;
    // 0x23f8c8: 0x27a50194  addiu       $a1, $sp, 0x194 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 404));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B09D0u;
    { ctx->pc = 0x1b09d0; return; }
    ctx->pc = 0x23F8CCu;
label_23f8cc:
    // 0x23f8cc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x23f8ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23f8d0:
    // 0x23f8d0: 0x1443ffed  bne         $v0, $v1, . + 4 + (-0x13 << 2)
label_23f8d4:
    if (ctx->pc == 0x23F8D4u) {
        ctx->pc = 0x23F8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F8D0u;
        // 0x23f8d4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F8D8u;
        goto label_23f8d8;
    }
    ctx->pc = 0x23F8D0u;
    {
        const bool branch_taken_0x23f8d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x23F8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F8D0u;
        // 0x23f8d4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f8d0) {
            ctx->pc = 0x23F888u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23f888;
        }
    }
    ctx->pc = 0x23F8D8u;
label_23f8d8:
    // 0x23f8d8: 0xc07aaa8  jal         func_1EAAA0
label_23f8dc:
    if (ctx->pc == 0x23F8DCu) {
        ctx->pc = 0x23F8E0u;
        goto label_23f8e0;
    }
    ctx->pc = 0x23F8D8u;
    SET_GPR_U32(ctx, 31, 0x23F8E0u);
    ctx->pc = 0x1EAAA0u;
    { ctx->pc = 0x1eaaa0; return; }
    ctx->pc = 0x23F8E0u;
label_23f8e0:
    // 0x23f8e0: 0x1000007b  b           . + 4 + (0x7B << 2)
label_23f8e4:
    if (ctx->pc == 0x23F8E4u) {
        ctx->pc = 0x23F8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F8E0u;
        // 0x23f8e4: 0x24140005  addiu       $s4, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F8E8u;
        goto label_23f8e8;
    }
    ctx->pc = 0x23F8E0u;
    {
        const bool branch_taken_0x23f8e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F8E0u;
        // 0x23f8e4: 0x24140005  addiu       $s4, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f8e0) {
            ctx->pc = 0x23FAD0u;
            { ctx->pc = 0x23fad0; return; }
        }
    }
    ctx->pc = 0x23F8E8u;
label_23f8e8:
    // 0x23f8e8: 0xc06c1da  jal         func_1B0768
label_23f8ec:
    if (ctx->pc == 0x23F8ECu) {
        ctx->pc = 0x23F8F0u;
        goto label_23f8f0;
    }
    ctx->pc = 0x23F8E8u;
    SET_GPR_U32(ctx, 31, 0x23F8F0u);
    ctx->pc = 0x1B0768u;
    { ctx->pc = 0x1b0768; return; }
    ctx->pc = 0x23F8F0u;
label_23f8f0:
    // 0x23f8f0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x23f8f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23f8f4:
    // 0x23f8f4: 0x10430076  beq         $v0, $v1, . + 4 + (0x76 << 2)
label_23f8f8:
    if (ctx->pc == 0x23F8F8u) {
        ctx->pc = 0x23F8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F8F4u;
        // 0x23f8f8: 0x3c01002a  lui         $at, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F8FCu;
        goto label_23f8fc;
    }
    ctx->pc = 0x23F8F4u;
    {
        const bool branch_taken_0x23f8f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x23F8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F8F4u;
        // 0x23f8f8: 0x3c01002a  lui         $at, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f8f4) {
            ctx->pc = 0x23FAD0u;
            { ctx->pc = 0x23fad0; return; }
        }
    }
    ctx->pc = 0x23F8FCu;
label_23f8fc:
    // 0x23f8fc: 0xc07aaa8  jal         func_1EAAA0
label_23f900:
    if (ctx->pc == 0x23F900u) {
        ctx->pc = 0x23F900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F8FCu;
        // 0x23f900: 0x8c24c978  lw          $a0, -0x3688($at) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953336)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F904u;
        goto label_23f904;
    }
    ctx->pc = 0x23F8FCu;
    SET_GPR_U32(ctx, 31, 0x23F904u);
    ctx->pc = 0x23F900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F8FCu;
    // 0x23f900: 0x8c24c978  lw          $a0, -0x3688($at) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953336)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAAA0u;
    { ctx->pc = 0x1eaaa0; return; }
    ctx->pc = 0x23F904u;
label_23f904:
    // 0x23f904: 0x10000072  b           . + 4 + (0x72 << 2)
label_23f908:
    if (ctx->pc == 0x23F908u) {
        ctx->pc = 0x23F908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F904u;
        // 0x23f908: 0x24140006  addiu       $s4, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F90Cu;
        goto label_23f90c;
    }
    ctx->pc = 0x23F904u;
    {
        const bool branch_taken_0x23f904 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F904u;
        // 0x23f908: 0x24140006  addiu       $s4, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f904) {
            ctx->pc = 0x23FAD0u;
            { ctx->pc = 0x23fad0; return; }
        }
    }
    ctx->pc = 0x23F90Cu;
label_23f90c:
    // 0x23f90c: 0x0  nop
    ctx->pc = 0x23f90cu;
    // NOP
label_23f910:
    // 0x23f910: 0xc06c03a  jal         func_1B00E8
label_23f914:
    if (ctx->pc == 0x23F914u) {
        ctx->pc = 0x23F914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F910u;
        // 0x23f914: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F918u;
        goto label_23f918;
    }
    ctx->pc = 0x23F910u;
    SET_GPR_U32(ctx, 31, 0x23F918u);
    ctx->pc = 0x23F914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F910u;
    // 0x23f914: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B00E8u;
    { ctx->pc = 0x1b00e8; return; }
    ctx->pc = 0x23F918u;
label_23f918:
    // 0x23f918: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x23f918u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_23f91c:
    // 0x23f91c: 0x1443006c  bne         $v0, $v1, . + 4 + (0x6C << 2)
label_23f920:
    if (ctx->pc == 0x23F920u) {
        ctx->pc = 0x23F924u;
        goto label_23f924;
    }
    ctx->pc = 0x23F91Cu;
    {
        const bool branch_taken_0x23f91c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x23f91c) {
            ctx->pc = 0x23FAD0u;
            { ctx->pc = 0x23fad0; return; }
        }
    }
    ctx->pc = 0x23F924u;
label_23f924:
    // 0x23f924: 0x1000006a  b           . + 4 + (0x6A << 2)
label_23f928:
    if (ctx->pc == 0x23F928u) {
        ctx->pc = 0x23F928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F924u;
        // 0x23f928: 0x24140007  addiu       $s4, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F92Cu;
        goto label_23f92c;
    }
    ctx->pc = 0x23F924u;
    {
        const bool branch_taken_0x23f924 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F924u;
        // 0x23f928: 0x24140007  addiu       $s4, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f924) {
            ctx->pc = 0x23FAD0u;
            { ctx->pc = 0x23fad0; return; }
        }
    }
    ctx->pc = 0x23F92Cu;
label_23f92c:
    // 0x23f92c: 0x0  nop
    ctx->pc = 0x23f92cu;
    // NOP
label_23f930:
    // 0x23f930: 0xc06c03a  jal         func_1B00E8
label_23f934:
    if (ctx->pc == 0x23F934u) {
        ctx->pc = 0x23F934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F930u;
        // 0x23f934: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F938u;
        goto label_23f938;
    }
    ctx->pc = 0x23F930u;
    SET_GPR_U32(ctx, 31, 0x23F938u);
    ctx->pc = 0x23F934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F930u;
    // 0x23f934: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B00E8u;
    { ctx->pc = 0x1b00e8; return; }
    ctx->pc = 0x23F938u;
label_23f938:
    // 0x23f938: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x23f938u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_23f93c:
    // 0x23f93c: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
label_23f940:
    if (ctx->pc == 0x23F940u) {
        ctx->pc = 0x23F940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F93Cu;
        // 0x23f940: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F944u;
        goto label_23f944;
    }
    ctx->pc = 0x23F93Cu;
    {
        const bool branch_taken_0x23f93c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x23F940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F93Cu;
        // 0x23f940: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f93c) {
            ctx->pc = 0x23F954u;
            goto label_23f954;
        }
    }
    ctx->pc = 0x23F944u;
label_23f944:
    // 0x23f944: 0xc07aaa8  jal         func_1EAAA0
label_23f948:
    if (ctx->pc == 0x23F948u) {
        ctx->pc = 0x23F94Cu;
        goto label_23f94c;
    }
    ctx->pc = 0x23F944u;
    SET_GPR_U32(ctx, 31, 0x23F94Cu);
    ctx->pc = 0x1EAAA0u;
    { ctx->pc = 0x1eaaa0; return; }
    ctx->pc = 0x23F94Cu;
label_23f94c:
    // 0x23f94c: 0x10000060  b           . + 4 + (0x60 << 2)
label_23f950:
    if (ctx->pc == 0x23F950u) {
        ctx->pc = 0x23F950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F94Cu;
        // 0x23f950: 0x24140005  addiu       $s4, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F954u;
        goto label_23f954;
    }
    ctx->pc = 0x23F94Cu;
    {
        const bool branch_taken_0x23f94c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F94Cu;
        // 0x23f950: 0x24140005  addiu       $s4, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f94c) {
            ctx->pc = 0x23FAD0u;
            { ctx->pc = 0x23fad0; return; }
        }
    }
    ctx->pc = 0x23F954u;
label_23f954:
    // 0x23f954: 0x0  nop
    ctx->pc = 0x23f954u;
    // NOP
label_23f958:
    // 0x23f958: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x23f958u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23f95c:
    // 0x23f95c: 0x0  nop
    ctx->pc = 0x23f95cu;
    // NOP
label_23f960:
    // 0x23f960: 0xafa0019c  sw          $zero, 0x19C($sp)
    ctx->pc = 0x23f960u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 412), GPR_U32(ctx, 0));
label_23f964:
    // 0x23f964: 0x8fa2019c  lw          $v0, 0x19C($sp)
    ctx->pc = 0x23f964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 412)));
label_23f968:
    // 0x23f968: 0x3c010010  lui         $at, 0x10
    ctx->pc = 0x23f968u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16 << 16));
label_23f96c:
    // 0x23f96c: 0x41082a  slt         $at, $v0, $at
    ctx->pc = 0x23f96cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
label_23f970:
    // 0x23f970: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
label_23f974:
    if (ctx->pc == 0x23F974u) {
        ctx->pc = 0x23F974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F970u;
        // 0x23f974: 0x3c030010  lui         $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F978u;
        goto label_23f978;
    }
    ctx->pc = 0x23F970u;
    {
        const bool branch_taken_0x23f970 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F970u;
        // 0x23f974: 0x3c030010  lui         $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f970) {
            ctx->pc = 0x23F994u;
            goto label_23f994;
        }
    }
    ctx->pc = 0x23F978u;
label_23f978:
    // 0x23f978: 0x8fa2019c  lw          $v0, 0x19C($sp)
    ctx->pc = 0x23f978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 412)));
label_23f97c:
    // 0x23f97c: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x23f97cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_23f980:
    // 0x23f980: 0xafa2019c  sw          $v0, 0x19C($sp)
    ctx->pc = 0x23f980u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 412), GPR_U32(ctx, 2));
label_23f984:
    // 0x23f984: 0x8fa2019c  lw          $v0, 0x19C($sp)
    ctx->pc = 0x23f984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 412)));
label_23f988:
    // 0x23f988: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x23f988u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_23f98c:
    // 0x23f98c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_23f990:
    if (ctx->pc == 0x23F990u) {
        ctx->pc = 0x23F994u;
        goto label_23f994;
    }
    ctx->pc = 0x23F98Cu;
    {
        const bool branch_taken_0x23f98c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23f98c) {
            ctx->pc = 0x23F978u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23f978;
        }
    }
    ctx->pc = 0x23F994u;
label_23f994:
    // 0x23f994: 0x0  nop
    ctx->pc = 0x23f994u;
    // NOP
label_23f998:
    // 0x23f998: 0xc06c18e  jal         func_1B0638
label_23f99c:
    if (ctx->pc == 0x23F99Cu) {
        ctx->pc = 0x23F9A0u;
        goto label_23f9a0;
    }
    ctx->pc = 0x23F998u;
    SET_GPR_U32(ctx, 31, 0x23F9A0u);
    ctx->pc = 0x1B0638u;
    { ctx->pc = 0x1b0638; return; }
    ctx->pc = 0x23F9A0u;
label_23f9a0:
    // 0x23f9a0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_23f9a4:
    if (ctx->pc == 0x23F9A4u) {
        ctx->pc = 0x23F9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F9A0u;
        // 0x23f9a4: 0x24030014  addiu       $v1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F9A8u;
        goto label_23f9a8;
    }
    ctx->pc = 0x23F9A0u;
    {
        const bool branch_taken_0x23f9a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F9A0u;
        // 0x23f9a4: 0x24030014  addiu       $v1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f9a0) {
            ctx->pc = 0x23F9D0u;
            { ctx->pc = 0x23f9d0; return; }
        }
    }
    ctx->pc = 0x23F9A8u;
label_23f9a8:
    // 0x23f9a8: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
label_23f9ac:
    if (ctx->pc == 0x23F9ACu) {
        ctx->pc = 0x23F9B0u;
        goto label_23f9b0;
    }
    ctx->pc = 0x23F9A8u;
    {
        const bool branch_taken_0x23f9a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x23f9a8) {
            ctx->pc = 0x23F9C4u;
            goto label_23f9c4;
        }
    }
    ctx->pc = 0x23F9B0u;
label_23f9b0:
    // 0x23f9b0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x23f9b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23f9b4:
    // 0x23f9b4: 0x10430009  beq         $v0, $v1, . + 4 + (0x9 << 2)
label_23f9b8:
    if (ctx->pc == 0x23F9B8u) {
        ctx->pc = 0x23F9BCu;
        goto label_23f9bc;
    }
    ctx->pc = 0x23F9B4u;
    {
        const bool branch_taken_0x23f9b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x23f9b4) {
            ctx->pc = 0x23F9DCu;
            { ctx->pc = 0x23f9dc; return; }
        }
    }
    ctx->pc = 0x23F9BCu;
label_23f9bc:
    // 0x23f9bc: 0x10000006  b           . + 4 + (0x6 << 2)
label_23f9c0:
    if (ctx->pc == 0x23F9C0u) {
        ctx->pc = 0x23F9C4u;
        goto label_23f9c4;
    }
    ctx->pc = 0x23F9BCu;
    {
        const bool branch_taken_0x23f9bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23f9bc) {
            ctx->pc = 0x23F9D8u;
            { ctx->pc = 0x23f9d8; return; }
        }
    }
    ctx->pc = 0x23F9C4u;
label_23f9c4:
    // 0x23f9c4: 0x0  nop
    ctx->pc = 0x23f9c4u;
    // NOP
label_23f9c8:
    // 0x23f9c8: 0x10000004  b           . + 4 + (0x4 << 2)
label_23f9cc:
    if (ctx->pc == 0x23F9CCu) {
        ctx->pc = 0x23F9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F9C8u;
        // 0x23f9cc: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F9D0u;
        { ctx->pc = 0x23f9d0; return; }
    }
    ctx->pc = 0x23F9C8u;
    {
        const bool branch_taken_0x23f9c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F9C8u;
        // 0x23f9cc: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f9c8) {
            ctx->pc = 0x23F9DCu;
            { ctx->pc = 0x23f9dc; return; }
        }
    }
    ctx->pc = 0x23F9D0u;
    ctx->pc = 0x23f9d0u;
    return;
}
