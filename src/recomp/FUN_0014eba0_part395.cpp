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


void FUN_0014eba0_part395(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x20f1c0u: goto label_20f1c0;
        case 0x20f1c4u: goto label_20f1c4;
        case 0x20f1c8u: goto label_20f1c8;
        case 0x20f1ccu: goto label_20f1cc;
        case 0x20f1d0u: goto label_20f1d0;
        case 0x20f1d4u: goto label_20f1d4;
        case 0x20f1d8u: goto label_20f1d8;
        case 0x20f1dcu: goto label_20f1dc;
        case 0x20f1e0u: goto label_20f1e0;
        case 0x20f1e4u: goto label_20f1e4;
        case 0x20f1e8u: goto label_20f1e8;
        case 0x20f1ecu: goto label_20f1ec;
        case 0x20f1f0u: goto label_20f1f0;
        case 0x20f1f4u: goto label_20f1f4;
        case 0x20f1f8u: goto label_20f1f8;
        case 0x20f1fcu: goto label_20f1fc;
        case 0x20f200u: goto label_20f200;
        case 0x20f204u: goto label_20f204;
        case 0x20f208u: goto label_20f208;
        case 0x20f20cu: goto label_20f20c;
        case 0x20f210u: goto label_20f210;
        case 0x20f214u: goto label_20f214;
        case 0x20f218u: goto label_20f218;
        case 0x20f21cu: goto label_20f21c;
        case 0x20f220u: goto label_20f220;
        case 0x20f224u: goto label_20f224;
        case 0x20f228u: goto label_20f228;
        case 0x20f22cu: goto label_20f22c;
        case 0x20f230u: goto label_20f230;
        case 0x20f234u: goto label_20f234;
        case 0x20f238u: goto label_20f238;
        case 0x20f23cu: goto label_20f23c;
        case 0x20f240u: goto label_20f240;
        case 0x20f244u: goto label_20f244;
        case 0x20f248u: goto label_20f248;
        case 0x20f24cu: goto label_20f24c;
        case 0x20f250u: goto label_20f250;
        case 0x20f254u: goto label_20f254;
        case 0x20f258u: goto label_20f258;
        case 0x20f25cu: goto label_20f25c;
        case 0x20f260u: goto label_20f260;
        case 0x20f264u: goto label_20f264;
        case 0x20f268u: goto label_20f268;
        case 0x20f26cu: goto label_20f26c;
        case 0x20f270u: goto label_20f270;
        case 0x20f274u: goto label_20f274;
        case 0x20f278u: goto label_20f278;
        case 0x20f27cu: goto label_20f27c;
        case 0x20f280u: goto label_20f280;
        case 0x20f284u: goto label_20f284;
        case 0x20f288u: goto label_20f288;
        case 0x20f28cu: goto label_20f28c;
        case 0x20f290u: goto label_20f290;
        case 0x20f294u: goto label_20f294;
        case 0x20f298u: goto label_20f298;
        case 0x20f29cu: goto label_20f29c;
        case 0x20f2a0u: goto label_20f2a0;
        case 0x20f2a4u: goto label_20f2a4;
        case 0x20f2a8u: goto label_20f2a8;
        case 0x20f2acu: goto label_20f2ac;
        case 0x20f2b0u: goto label_20f2b0;
        case 0x20f2b4u: goto label_20f2b4;
        case 0x20f2b8u: goto label_20f2b8;
        case 0x20f2bcu: goto label_20f2bc;
        case 0x20f2c0u: goto label_20f2c0;
        case 0x20f2c4u: goto label_20f2c4;
        case 0x20f2c8u: goto label_20f2c8;
        case 0x20f2ccu: goto label_20f2cc;
        case 0x20f2d0u: goto label_20f2d0;
        case 0x20f2d4u: goto label_20f2d4;
        case 0x20f2d8u: goto label_20f2d8;
        case 0x20f2dcu: goto label_20f2dc;
        case 0x20f2e0u: goto label_20f2e0;
        case 0x20f2e4u: goto label_20f2e4;
        case 0x20f2e8u: goto label_20f2e8;
        case 0x20f2ecu: goto label_20f2ec;
        case 0x20f2f0u: goto label_20f2f0;
        case 0x20f2f4u: goto label_20f2f4;
        case 0x20f2f8u: goto label_20f2f8;
        case 0x20f2fcu: goto label_20f2fc;
        case 0x20f300u: goto label_20f300;
        case 0x20f304u: goto label_20f304;
        case 0x20f308u: goto label_20f308;
        case 0x20f30cu: goto label_20f30c;
        case 0x20f310u: goto label_20f310;
        case 0x20f314u: goto label_20f314;
        case 0x20f318u: goto label_20f318;
        case 0x20f31cu: goto label_20f31c;
        case 0x20f320u: goto label_20f320;
        case 0x20f324u: goto label_20f324;
        case 0x20f328u: goto label_20f328;
        case 0x20f32cu: goto label_20f32c;
        case 0x20f330u: goto label_20f330;
        case 0x20f334u: goto label_20f334;
        case 0x20f338u: goto label_20f338;
        case 0x20f33cu: goto label_20f33c;
        case 0x20f340u: goto label_20f340;
        case 0x20f344u: goto label_20f344;
        case 0x20f348u: goto label_20f348;
        case 0x20f34cu: goto label_20f34c;
        case 0x20f350u: goto label_20f350;
        case 0x20f354u: goto label_20f354;
        case 0x20f358u: goto label_20f358;
        case 0x20f35cu: goto label_20f35c;
        case 0x20f360u: goto label_20f360;
        case 0x20f364u: goto label_20f364;
        case 0x20f368u: goto label_20f368;
        case 0x20f36cu: goto label_20f36c;
        case 0x20f370u: goto label_20f370;
        case 0x20f374u: goto label_20f374;
        case 0x20f378u: goto label_20f378;
        case 0x20f37cu: goto label_20f37c;
        case 0x20f380u: goto label_20f380;
        case 0x20f384u: goto label_20f384;
        case 0x20f388u: goto label_20f388;
        case 0x20f38cu: goto label_20f38c;
        case 0x20f390u: goto label_20f390;
        case 0x20f394u: goto label_20f394;
        case 0x20f398u: goto label_20f398;
        case 0x20f39cu: goto label_20f39c;
        case 0x20f3a0u: goto label_20f3a0;
        case 0x20f3a4u: goto label_20f3a4;
        case 0x20f3a8u: goto label_20f3a8;
        case 0x20f3acu: goto label_20f3ac;
        case 0x20f3b0u: goto label_20f3b0;
        case 0x20f3b4u: goto label_20f3b4;
        case 0x20f3b8u: goto label_20f3b8;
        case 0x20f3bcu: goto label_20f3bc;
        case 0x20f3c0u: goto label_20f3c0;
        case 0x20f3c4u: goto label_20f3c4;
        case 0x20f3c8u: goto label_20f3c8;
        case 0x20f3ccu: goto label_20f3cc;
        case 0x20f3d0u: goto label_20f3d0;
        case 0x20f3d4u: goto label_20f3d4;
        case 0x20f3d8u: goto label_20f3d8;
        case 0x20f3dcu: goto label_20f3dc;
        case 0x20f3e0u: goto label_20f3e0;
        case 0x20f3e4u: goto label_20f3e4;
        case 0x20f3e8u: goto label_20f3e8;
        case 0x20f3ecu: goto label_20f3ec;
        case 0x20f3f0u: goto label_20f3f0;
        case 0x20f3f4u: goto label_20f3f4;
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
        default: return;
    }

label_20f1c0:
    // 0x20f1c0: 0x0  nop
    ctx->pc = 0x20f1c0u;
    // NOP
label_20f1c4:
    // 0x20f1c4: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x20f1c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_20f1c8:
    // 0x20f1c8: 0xfcb00040  sd          $s0, 0x40($a1)
    ctx->pc = 0x20f1c8u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 64), GPR_U64(ctx, 16));
label_20f1cc:
    // 0x20f1cc: 0x8ca4001c  lw          $a0, 0x1C($a1)
    ctx->pc = 0x20f1ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
label_20f1d0:
    // 0x20f1d0: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
label_20f1d4:
    if (ctx->pc == 0x20F1D4u) {
        ctx->pc = 0x20F1D8u;
        goto label_20f1d8;
    }
    ctx->pc = 0x20F1D0u;
    {
        const bool branch_taken_0x20f1d0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x20f1d0) {
            ctx->pc = 0x20F1E0u;
            goto label_20f1e0;
        }
    }
    ctx->pc = 0x20F1D8u;
label_20f1d8:
    // 0x20f1d8: 0x10000003  b           . + 4 + (0x3 << 2)
label_20f1dc:
    if (ctx->pc == 0x20F1DCu) {
        ctx->pc = 0x20F1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F1D8u;
        // 0x20f1dc: 0xaca0001c  sw          $zero, 0x1C($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F1E0u;
        goto label_20f1e0;
    }
    ctx->pc = 0x20F1D8u;
    {
        const bool branch_taken_0x20f1d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F1D8u;
        // 0x20f1dc: 0xaca0001c  sw          $zero, 0x1C($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f1d8) {
            ctx->pc = 0x20F1E8u;
            goto label_20f1e8;
        }
    }
    ctx->pc = 0x20F1E0u;
label_20f1e0:
    // 0x20f1e0: 0x1000fff9  b           . + 4 + (-0x7 << 2)
label_20f1e4:
    if (ctx->pc == 0x20F1E4u) {
        ctx->pc = 0x20F1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F1E0u;
        // 0x20f1e4: 0x24a50050  addiu       $a1, $a1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F1E8u;
        goto label_20f1e8;
    }
    ctx->pc = 0x20F1E0u;
    {
        const bool branch_taken_0x20f1e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F1E0u;
        // 0x20f1e4: 0x24a50050  addiu       $a1, $a1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f1e0) {
            ctx->pc = 0x20F1C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20f1c8;
        }
    }
    ctx->pc = 0x20F1E8u;
label_20f1e8:
    // 0x20f1e8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x20f1e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_20f1ec:
    // 0x20f1ec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x20f1ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_20f1f0:
    // 0x20f1f0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x20f1f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_20f1f4:
    // 0x20f1f4: 0x3e00008  jr          $ra
label_20f1f8:
    if (ctx->pc == 0x20F1F8u) {
        ctx->pc = 0x20F1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F1F4u;
        // 0x20f1f8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F1FCu;
        goto label_20f1fc;
    }
    ctx->pc = 0x20F1F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20F1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F1F4u;
        // 0x20f1f8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20F1F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20F1FCu;
label_20f1fc:
    // 0x20f1fc: 0x0  nop
    ctx->pc = 0x20f1fcu;
    // NOP
label_20f200:
    // 0x20f200: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x20f200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_20f204:
    // 0x20f204: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x20f204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_20f208:
    // 0x20f208: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x20f208u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_20f20c:
    // 0x20f20c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x20f20cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_20f210:
    // 0x20f210: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x20f210u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_20f214:
    // 0x20f214: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x20f214u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_20f218:
    // 0x20f218: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x20f218u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20f21c:
    // 0x20f21c: 0x8f91919c  lw          $s1, -0x6E64($gp)
    ctx->pc = 0x20f21cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939036)));
label_20f220:
    // 0x20f220: 0xc060678  jal         func_1819E0
label_20f224:
    if (ctx->pc == 0x20F224u) {
        ctx->pc = 0x20F224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F220u;
        // 0x20f224: 0x26300080  addiu       $s0, $s1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F228u;
        goto label_20f228;
    }
    ctx->pc = 0x20F220u;
    SET_GPR_U32(ctx, 31, 0x20F228u);
    ctx->pc = 0x20F224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F220u;
    // 0x20f224: 0x26300080  addiu       $s0, $s1, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1819E0u;
    { ctx->pc = 0x1819e0; return; }
    ctx->pc = 0x20F228u;
label_20f228:
    // 0x20f228: 0x240a0100  addiu       $t2, $zero, 0x100
    ctx->pc = 0x20f228u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_20f22c:
    // 0x20f22c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x20f22cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_20f230:
    // 0x20f230: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x20f230u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20f234:
    // 0x20f234: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x20f234u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_20f238:
    // 0x20f238: 0x24070013  addiu       $a3, $zero, 0x13
    ctx->pc = 0x20f238u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_20f23c:
    // 0x20f23c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x20f23cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20f240:
    // 0x20f240: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x20f240u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20f244:
    // 0x20f244: 0xc060300  jal         func_180C00
label_20f248:
    if (ctx->pc == 0x20F248u) {
        ctx->pc = 0x20F248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F244u;
        // 0x20f248: 0x140582d  daddu       $t3, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F24Cu;
        goto label_20f24c;
    }
    ctx->pc = 0x20F244u;
    SET_GPR_U32(ctx, 31, 0x20F24Cu);
    ctx->pc = 0x20F248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F244u;
    // 0x20f248: 0x140582d  daddu       $t3, $t2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180C00u;
    { ctx->pc = 0x180c00; return; }
    ctx->pc = 0x20F24Cu;
label_20f24c:
    // 0x20f24c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20f24cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20f250:
    // 0x20f250: 0x26450040  addiu       $a1, $s2, 0x40
    ctx->pc = 0x20f250u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
label_20f254:
    // 0x20f254: 0xc08e93e  jal         func_23A4F8
label_20f258:
    if (ctx->pc == 0x20F258u) {
        ctx->pc = 0x20F258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F254u;
        // 0x20f258: 0x3c060001  lui         $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F25Cu;
        goto label_20f25c;
    }
    ctx->pc = 0x20F254u;
    SET_GPR_U32(ctx, 31, 0x20F25Cu);
    ctx->pc = 0x20F258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F254u;
    // 0x20f258: 0x3c060001  lui         $a2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A4F8u;
    { ctx->pc = 0x23a4f8; return; }
    ctx->pc = 0x20F25Cu;
label_20f25c:
    // 0x20f25c: 0x8f909198  lw          $s0, -0x6E68($gp)
    ctx->pc = 0x20f25cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939032)));
label_20f260:
    // 0x20f260: 0xc060668  jal         func_1819A0
label_20f264:
    if (ctx->pc == 0x20F264u) {
        ctx->pc = 0x20F264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F260u;
        // 0x20f264: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F268u;
        goto label_20f268;
    }
    ctx->pc = 0x20F260u;
    SET_GPR_U32(ctx, 31, 0x20F268u);
    ctx->pc = 0x20F264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F260u;
    // 0x20f264: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1819A0u;
    { ctx->pc = 0x1819a0; return; }
    ctx->pc = 0x20F268u;
label_20f268:
    // 0x20f268: 0x240a0010  addiu       $t2, $zero, 0x10
    ctx->pc = 0x20f268u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_20f26c:
    // 0x20f26c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x20f26cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20f270:
    // 0x20f270: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20f270u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20f274:
    // 0x20f274: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x20f274u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20f278:
    // 0x20f278: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x20f278u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20f27c:
    // 0x20f27c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x20f27cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20f280:
    // 0x20f280: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x20f280u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20f284:
    // 0x20f284: 0xc060300  jal         func_180C00
label_20f288:
    if (ctx->pc == 0x20F288u) {
        ctx->pc = 0x20F288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F284u;
        // 0x20f288: 0x140582d  daddu       $t3, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F28Cu;
        goto label_20f28c;
    }
    ctx->pc = 0x20F284u;
    SET_GPR_U32(ctx, 31, 0x20F28Cu);
    ctx->pc = 0x20F288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F284u;
    // 0x20f288: 0x140582d  daddu       $t3, $t2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180C00u;
    { ctx->pc = 0x180c00; return; }
    ctx->pc = 0x20F28Cu;
label_20f28c:
    // 0x20f28c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x20f28cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_20f290:
    // 0x20f290: 0x26040080  addiu       $a0, $s0, 0x80
    ctx->pc = 0x20f290u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
label_20f294:
    // 0x20f294: 0x34210040  ori         $at, $at, 0x40
    ctx->pc = 0x20f294u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)64);
label_20f298:
    // 0x20f298: 0x24060400  addiu       $a2, $zero, 0x400
    ctx->pc = 0x20f298u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_20f29c:
    // 0x20f29c: 0xc08e93e  jal         func_23A4F8
label_20f2a0:
    if (ctx->pc == 0x20F2A0u) {
        ctx->pc = 0x20F2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F29Cu;
        // 0x20f2a0: 0x2412821  addu        $a1, $s2, $at (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F2A4u;
        goto label_20f2a4;
    }
    ctx->pc = 0x20F29Cu;
    SET_GPR_U32(ctx, 31, 0x20F2A4u);
    ctx->pc = 0x20F2A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F29Cu;
    // 0x20f2a0: 0x2412821  addu        $a1, $s2, $at (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 1)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A4F8u;
    { ctx->pc = 0x23a4f8; return; }
    ctx->pc = 0x20F2A4u;
label_20f2a4:
    // 0x20f2a4: 0x24040100  addiu       $a0, $zero, 0x100
    ctx->pc = 0x20f2a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_20f2a8:
    // 0x20f2a8: 0x24060013  addiu       $a2, $zero, 0x13
    ctx->pc = 0x20f2a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_20f2ac:
    // 0x20f2ac: 0xc07091c  jal         func_1C2470
label_20f2b0:
    if (ctx->pc == 0x20F2B0u) {
        ctx->pc = 0x20F2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F2ACu;
        // 0x20f2b0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F2B4u;
        goto label_20f2b4;
    }
    ctx->pc = 0x20F2ACu;
    SET_GPR_U32(ctx, 31, 0x20F2B4u);
    ctx->pc = 0x20F2B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F2ACu;
    // 0x20f2b0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2470u;
    { ctx->pc = 0x1c2470; return; }
    ctx->pc = 0x20F2B4u;
label_20f2b4:
    // 0x20f2b4: 0xff829190  sd          $v0, -0x6E70($gp)
    ctx->pc = 0x20f2b4u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294939024), GPR_U64(ctx, 2));
label_20f2b8:
    // 0x20f2b8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x20f2b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_20f2bc:
    // 0x20f2bc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x20f2bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_20f2c0:
    // 0x20f2c0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x20f2c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_20f2c4:
    // 0x20f2c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x20f2c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_20f2c8:
    // 0x20f2c8: 0x3e00008  jr          $ra
label_20f2cc:
    if (ctx->pc == 0x20F2CCu) {
        ctx->pc = 0x20F2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F2C8u;
        // 0x20f2cc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F2D0u;
        goto label_20f2d0;
    }
    ctx->pc = 0x20F2C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20F2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F2C8u;
        // 0x20f2cc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20F2C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20F2D0u;
label_20f2d0:
    // 0x20f2d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x20f2d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_20f2d4:
    // 0x20f2d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20f2d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_20f2d8:
    // 0x20f2d8: 0x8f83918c  lw          $v1, -0x6E74($gp)
    ctx->pc = 0x20f2d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939020)));
label_20f2dc:
    // 0x20f2dc: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
label_20f2e0:
    if (ctx->pc == 0x20F2E0u) {
        ctx->pc = 0x20F2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F2DCu;
        // 0x20f2e0: 0x24040276  addiu       $a0, $zero, 0x276 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 630));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F2E4u;
        goto label_20f2e4;
    }
    ctx->pc = 0x20F2DCu;
    {
        const bool branch_taken_0x20f2dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x20F2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F2DCu;
        // 0x20f2e0: 0x24040276  addiu       $a0, $zero, 0x276 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 630));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f2dc) {
            ctx->pc = 0x20F308u;
            goto label_20f308;
        }
    }
    ctx->pc = 0x20F2E4u;
label_20f2e4:
    // 0x20f2e4: 0xc041738  jal         func_105CE0
label_20f2e8:
    if (ctx->pc == 0x20F2E8u) {
        ctx->pc = 0x20F2ECu;
        goto label_20f2ec;
    }
    ctx->pc = 0x20F2E4u;
    SET_GPR_U32(ctx, 31, 0x20F2ECu);
    ctx->pc = 0x105CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105CE0u, 0x20F2E4u, 0x20F2ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F2ECu;
label_20f2ec:
    // 0x20f2ec: 0x22ac0  sll         $a1, $v0, 11
    ctx->pc = 0x20f2ecu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
label_20f2f0:
    // 0x20f2f0: 0xc070080  jal         func_1C0200
label_20f2f4:
    if (ctx->pc == 0x20F2F4u) {
        ctx->pc = 0x20F2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F2F0u;
        // 0x20f2f4: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F2F8u;
        goto label_20f2f8;
    }
    ctx->pc = 0x20F2F0u;
    SET_GPR_U32(ctx, 31, 0x20F2F8u);
    ctx->pc = 0x20F2F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F2F0u;
    // 0x20f2f4: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    { ctx->pc = 0x1c0200; return; }
    ctx->pc = 0x20F2F8u;
label_20f2f8:
    // 0x20f2f8: 0x24040276  addiu       $a0, $zero, 0x276
    ctx->pc = 0x20f2f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 630));
label_20f2fc:
    // 0x20f2fc: 0xc0416e4  jal         func_105B90
label_20f300:
    if (ctx->pc == 0x20F300u) {
        ctx->pc = 0x20F300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F2FCu;
        // 0x20f300: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F304u;
        goto label_20f304;
    }
    ctx->pc = 0x20F2FCu;
    SET_GPR_U32(ctx, 31, 0x20F304u);
    ctx->pc = 0x20F300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F2FCu;
    // 0x20f300: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105B90u, 0x20F2FCu, 0x20F304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F304u;
label_20f304:
    // 0x20f304: 0xaf82918c  sw          $v0, -0x6E74($gp)
    ctx->pc = 0x20f304u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939020), GPR_U32(ctx, 2));
label_20f308:
    // 0x20f308: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20f308u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_20f30c:
    // 0x20f30c: 0x3e00008  jr          $ra
label_20f310:
    if (ctx->pc == 0x20F310u) {
        ctx->pc = 0x20F310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F30Cu;
        // 0x20f310: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F314u;
        goto label_20f314;
    }
    ctx->pc = 0x20F30Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20F310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F30Cu;
        // 0x20f310: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20F30Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20F314u;
label_20f314:
    // 0x20f314: 0x0  nop
    ctx->pc = 0x20f314u;
    // NOP
label_20f318:
    // 0x20f318: 0x0  nop
    ctx->pc = 0x20f318u;
    // NOP
label_20f31c:
    // 0x20f31c: 0x0  nop
    ctx->pc = 0x20f31cu;
    // NOP
label_20f320:
    // 0x20f320: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x20f320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_20f324:
    // 0x20f324: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x20f324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_20f328:
    // 0x20f328: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x20f328u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_20f32c:
    // 0x20f32c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x20f32cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_20f330:
    // 0x20f330: 0xc084000  jal         func_210000
label_20f334:
    if (ctx->pc == 0x20F334u) {
        ctx->pc = 0x20F334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F330u;
        // 0x20f334: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F338u;
        goto label_20f338;
    }
    ctx->pc = 0x20F330u;
    SET_GPR_U32(ctx, 31, 0x20F338u);
    ctx->pc = 0x20F334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F330u;
    // 0x20f334: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x210000u;
    { ctx->pc = 0x210000; return; }
    ctx->pc = 0x20F338u;
label_20f338:
    // 0x20f338: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x20f338u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_20f33c:
    // 0x20f33c: 0x12030012  beq         $s0, $v1, . + 4 + (0x12 << 2)
label_20f340:
    if (ctx->pc == 0x20F340u) {
        ctx->pc = 0x20F340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F33Cu;
        // 0x20f340: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F344u;
        goto label_20f344;
    }
    ctx->pc = 0x20F33Cu;
    {
        const bool branch_taken_0x20f33c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x20F340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F33Cu;
        // 0x20f340: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f33c) {
            ctx->pc = 0x20F388u;
            goto label_20f388;
        }
    }
    ctx->pc = 0x20F344u;
label_20f344:
    // 0x20f344: 0x12030010  beq         $s0, $v1, . + 4 + (0x10 << 2)
label_20f348:
    if (ctx->pc == 0x20F348u) {
        ctx->pc = 0x20F34Cu;
        goto label_20f34c;
    }
    ctx->pc = 0x20F344u;
    {
        const bool branch_taken_0x20f344 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x20f344) {
            ctx->pc = 0x20F388u;
            goto label_20f388;
        }
    }
    ctx->pc = 0x20F34Cu;
label_20f34c:
    // 0x20f34c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x20f34cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_20f350:
    // 0x20f350: 0x1203000d  beq         $s0, $v1, . + 4 + (0xD << 2)
label_20f354:
    if (ctx->pc == 0x20F354u) {
        ctx->pc = 0x20F354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F350u;
        // 0x20f354: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F358u;
        goto label_20f358;
    }
    ctx->pc = 0x20F350u;
    {
        const bool branch_taken_0x20f350 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x20F354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F350u;
        // 0x20f354: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f350) {
            ctx->pc = 0x20F388u;
            goto label_20f388;
        }
    }
    ctx->pc = 0x20F358u;
label_20f358:
    // 0x20f358: 0x12030005  beq         $s0, $v1, . + 4 + (0x5 << 2)
label_20f35c:
    if (ctx->pc == 0x20F35Cu) {
        ctx->pc = 0x20F360u;
        goto label_20f360;
    }
    ctx->pc = 0x20F358u;
    {
        const bool branch_taken_0x20f358 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x20f358) {
            ctx->pc = 0x20F370u;
            goto label_20f370;
        }
    }
    ctx->pc = 0x20F360u;
label_20f360:
    // 0x20f360: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
label_20f364:
    if (ctx->pc == 0x20F364u) {
        ctx->pc = 0x20F368u;
        goto label_20f368;
    }
    ctx->pc = 0x20F360u;
    {
        const bool branch_taken_0x20f360 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x20f360) {
            ctx->pc = 0x20F370u;
            goto label_20f370;
        }
    }
    ctx->pc = 0x20F368u;
label_20f368:
    // 0x20f368: 0x1000000a  b           . + 4 + (0xA << 2)
label_20f36c:
    if (ctx->pc == 0x20F36Cu) {
        ctx->pc = 0x20F36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F368u;
        // 0x20f36c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F370u;
        goto label_20f370;
    }
    ctx->pc = 0x20F368u;
    {
        const bool branch_taken_0x20f368 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F368u;
        // 0x20f36c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f368) {
            ctx->pc = 0x20F394u;
            goto label_20f394;
        }
    }
    ctx->pc = 0x20F370u;
label_20f370:
    // 0x20f370: 0xc0902ec  jal         func_240BB0
label_20f374:
    if (ctx->pc == 0x20F374u) {
        ctx->pc = 0x20F378u;
        goto label_20f378;
    }
    ctx->pc = 0x20F370u;
    SET_GPR_U32(ctx, 31, 0x20F378u);
    ctx->pc = 0x240BB0u;
    { ctx->pc = 0x240bb0; return; }
    ctx->pc = 0x20F378u;
label_20f378:
    // 0x20f378: 0xc055da0  jal         func_157680
label_20f37c:
    if (ctx->pc == 0x20F37Cu) {
        ctx->pc = 0x20F380u;
        goto label_20f380;
    }
    ctx->pc = 0x20F378u;
    SET_GPR_U32(ctx, 31, 0x20F380u);
    ctx->pc = 0x157680u;
    { ctx->pc = 0x157680; return; }
    ctx->pc = 0x20F380u;
label_20f380:
    // 0x20f380: 0x10000003  b           . + 4 + (0x3 << 2)
label_20f384:
    if (ctx->pc == 0x20F384u) {
        ctx->pc = 0x20F388u;
        goto label_20f388;
    }
    ctx->pc = 0x20F380u;
    {
        const bool branch_taken_0x20f380 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20f380) {
            ctx->pc = 0x20F390u;
            goto label_20f390;
        }
    }
    ctx->pc = 0x20F388u;
label_20f388:
    // 0x20f388: 0xc083688  jal         func_20DA20
label_20f38c:
    if (ctx->pc == 0x20F38Cu) {
        ctx->pc = 0x20F390u;
        goto label_20f390;
    }
    ctx->pc = 0x20F388u;
    SET_GPR_U32(ctx, 31, 0x20F390u);
    ctx->pc = 0x20DA20u;
    { ctx->pc = 0x20da20; return; }
    ctx->pc = 0x20F390u;
label_20f390:
    // 0x20f390: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x20f390u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_20f394:
    // 0x20f394: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x20f394u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_20f398:
    // 0x20f398: 0x3e00008  jr          $ra
label_20f39c:
    if (ctx->pc == 0x20F39Cu) {
        ctx->pc = 0x20F39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F398u;
        // 0x20f39c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F3A0u;
        goto label_20f3a0;
    }
    ctx->pc = 0x20F398u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20F39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F398u;
        // 0x20f39c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20F398u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20F3A0u;
label_20f3a0:
    // 0x20f3a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x20f3a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_20f3a4:
    // 0x20f3a4: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x20f3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_20f3a8:
    // 0x20f3a8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x20f3a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_20f3ac:
    // 0x20f3ac: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x20f3acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_20f3b0:
    // 0x20f3b0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x20f3b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_20f3b4:
    // 0x20f3b4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x20f3b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_20f3b8:
    // 0x20f3b8: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x20f3b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_20f3bc:
    // 0x20f3bc: 0x16020003  bne         $s0, $v0, . + 4 + (0x3 << 2)
label_20f3c0:
    if (ctx->pc == 0x20F3C0u) {
        ctx->pc = 0x20F3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F3BCu;
        // 0x20f3c0: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F3C4u;
        goto label_20f3c4;
    }
    ctx->pc = 0x20F3BCu;
    {
        const bool branch_taken_0x20f3bc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x20F3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F3BCu;
        // 0x20f3c0: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f3bc) {
            ctx->pc = 0x20F3CCu;
            goto label_20f3cc;
        }
    }
    ctx->pc = 0x20F3C4u;
label_20f3c4:
    // 0x20f3c4: 0xc083ed4  jal         func_20FB50
label_20f3c8:
    if (ctx->pc == 0x20F3C8u) {
        ctx->pc = 0x20F3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F3C4u;
        // 0x20f3c8: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F3CCu;
        goto label_20f3cc;
    }
    ctx->pc = 0x20F3C4u;
    SET_GPR_U32(ctx, 31, 0x20F3CCu);
    ctx->pc = 0x20F3C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F3C4u;
    // 0x20f3c8: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20FB50u;
    { ctx->pc = 0x20fb50; return; }
    ctx->pc = 0x20F3CCu;
label_20f3cc:
    // 0x20f3cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x20f3ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_20f3d0:
    // 0x20f3d0: 0xc084000  jal         func_210000
label_20f3d4:
    if (ctx->pc == 0x20F3D4u) {
        ctx->pc = 0x20F3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F3D0u;
        // 0x20f3d4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F3D8u;
        goto label_20f3d8;
    }
    ctx->pc = 0x20F3D0u;
    SET_GPR_U32(ctx, 31, 0x20F3D8u);
    ctx->pc = 0x20F3D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F3D0u;
    // 0x20f3d4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x210000u;
    { ctx->pc = 0x210000; return; }
    ctx->pc = 0x20F3D8u;
label_20f3d8:
    // 0x20f3d8: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x20f3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_20f3dc:
    // 0x20f3dc: 0x1202002a  beq         $s0, $v0, . + 4 + (0x2A << 2)
label_20f3e0:
    if (ctx->pc == 0x20F3E0u) {
        ctx->pc = 0x20F3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F3DCu;
        // 0x20f3e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F3E4u;
        goto label_20f3e4;
    }
    ctx->pc = 0x20F3DCu;
    {
        const bool branch_taken_0x20f3dc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x20F3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F3DCu;
        // 0x20f3e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f3dc) {
            ctx->pc = 0x20F488u;
            goto label_20f488;
        }
    }
    ctx->pc = 0x20F3E4u;
label_20f3e4:
    // 0x20f3e4: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x20f3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_20f3e8:
    // 0x20f3e8: 0x12020025  beq         $s0, $v0, . + 4 + (0x25 << 2)
label_20f3ec:
    if (ctx->pc == 0x20F3ECu) {
        ctx->pc = 0x20F3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F3E8u;
        // 0x20f3ec: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F3F0u;
        goto label_20f3f0;
    }
    ctx->pc = 0x20F3E8u;
    {
        const bool branch_taken_0x20f3e8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x20F3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F3E8u;
        // 0x20f3ec: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f3e8) {
            ctx->pc = 0x20F480u;
            goto label_20f480;
        }
    }
    ctx->pc = 0x20F3F0u;
label_20f3f0:
    // 0x20f3f0: 0x12020008  beq         $s0, $v0, . + 4 + (0x8 << 2)
label_20f3f4:
    if (ctx->pc == 0x20F3F4u) {
        ctx->pc = 0x20F3F8u;
        goto label_20f3f8;
    }
    ctx->pc = 0x20F3F0u;
    {
        const bool branch_taken_0x20f3f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x20f3f0) {
            ctx->pc = 0x20F414u;
            goto label_20f414;
        }
    }
    ctx->pc = 0x20F3F8u;
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
        { ctx->pc = 0x20f990; return; }
    }
    ctx->pc = 0x20F988u;
    {
        const bool branch_taken_0x20f988 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x20f988) {
            ctx->pc = 0x20F9D8u;
            { ctx->pc = 0x20f9d8; return; }
        }
    }
    ctx->pc = 0x20F990u;
    ctx->pc = 0x20f990u;
    return;
}
