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

// Function: FUN_0019b910
// Address: 0x19b910 - 0x29b9f0
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0019b910_part467(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x27f1b0u: goto label_27f1b0;
        case 0x27f1b4u: goto label_27f1b4;
        case 0x27f1b8u: goto label_27f1b8;
        case 0x27f1bcu: goto label_27f1bc;
        case 0x27f1c0u: goto label_27f1c0;
        case 0x27f1c4u: goto label_27f1c4;
        case 0x27f1c8u: goto label_27f1c8;
        case 0x27f1ccu: goto label_27f1cc;
        case 0x27f1d0u: goto label_27f1d0;
        case 0x27f1d4u: goto label_27f1d4;
        case 0x27f1d8u: goto label_27f1d8;
        case 0x27f1dcu: goto label_27f1dc;
        case 0x27f1e0u: goto label_27f1e0;
        case 0x27f1e4u: goto label_27f1e4;
        case 0x27f1e8u: goto label_27f1e8;
        case 0x27f1ecu: goto label_27f1ec;
        case 0x27f1f0u: goto label_27f1f0;
        case 0x27f1f4u: goto label_27f1f4;
        case 0x27f1f8u: goto label_27f1f8;
        case 0x27f1fcu: goto label_27f1fc;
        case 0x27f200u: goto label_27f200;
        case 0x27f204u: goto label_27f204;
        case 0x27f208u: goto label_27f208;
        case 0x27f20cu: goto label_27f20c;
        case 0x27f210u: goto label_27f210;
        case 0x27f214u: goto label_27f214;
        case 0x27f218u: goto label_27f218;
        case 0x27f21cu: goto label_27f21c;
        case 0x27f220u: goto label_27f220;
        case 0x27f224u: goto label_27f224;
        case 0x27f228u: goto label_27f228;
        case 0x27f22cu: goto label_27f22c;
        case 0x27f230u: goto label_27f230;
        case 0x27f234u: goto label_27f234;
        case 0x27f238u: goto label_27f238;
        case 0x27f23cu: goto label_27f23c;
        case 0x27f240u: goto label_27f240;
        case 0x27f244u: goto label_27f244;
        case 0x27f248u: goto label_27f248;
        case 0x27f24cu: goto label_27f24c;
        case 0x27f250u: goto label_27f250;
        case 0x27f254u: goto label_27f254;
        case 0x27f258u: goto label_27f258;
        case 0x27f25cu: goto label_27f25c;
        case 0x27f260u: goto label_27f260;
        case 0x27f264u: goto label_27f264;
        case 0x27f268u: goto label_27f268;
        case 0x27f26cu: goto label_27f26c;
        case 0x27f270u: goto label_27f270;
        case 0x27f274u: goto label_27f274;
        case 0x27f278u: goto label_27f278;
        case 0x27f27cu: goto label_27f27c;
        case 0x27f280u: goto label_27f280;
        case 0x27f284u: goto label_27f284;
        case 0x27f288u: goto label_27f288;
        case 0x27f28cu: goto label_27f28c;
        case 0x27f290u: goto label_27f290;
        case 0x27f294u: goto label_27f294;
        case 0x27f298u: goto label_27f298;
        case 0x27f29cu: goto label_27f29c;
        case 0x27f2a0u: goto label_27f2a0;
        case 0x27f2a4u: goto label_27f2a4;
        case 0x27f2a8u: goto label_27f2a8;
        case 0x27f2acu: goto label_27f2ac;
        case 0x27f2b0u: goto label_27f2b0;
        case 0x27f2b4u: goto label_27f2b4;
        case 0x27f2b8u: goto label_27f2b8;
        case 0x27f2bcu: goto label_27f2bc;
        case 0x27f2c0u: goto label_27f2c0;
        case 0x27f2c4u: goto label_27f2c4;
        case 0x27f2c8u: goto label_27f2c8;
        case 0x27f2ccu: goto label_27f2cc;
        case 0x27f2d0u: goto label_27f2d0;
        case 0x27f2d4u: goto label_27f2d4;
        case 0x27f2d8u: goto label_27f2d8;
        case 0x27f2dcu: goto label_27f2dc;
        case 0x27f2e0u: goto label_27f2e0;
        case 0x27f2e4u: goto label_27f2e4;
        case 0x27f2e8u: goto label_27f2e8;
        case 0x27f2ecu: goto label_27f2ec;
        case 0x27f2f0u: goto label_27f2f0;
        case 0x27f2f4u: goto label_27f2f4;
        case 0x27f2f8u: goto label_27f2f8;
        case 0x27f2fcu: goto label_27f2fc;
        case 0x27f300u: goto label_27f300;
        case 0x27f304u: goto label_27f304;
        case 0x27f308u: goto label_27f308;
        case 0x27f30cu: goto label_27f30c;
        case 0x27f310u: goto label_27f310;
        case 0x27f314u: goto label_27f314;
        case 0x27f318u: goto label_27f318;
        case 0x27f31cu: goto label_27f31c;
        case 0x27f320u: goto label_27f320;
        case 0x27f324u: goto label_27f324;
        case 0x27f328u: goto label_27f328;
        case 0x27f32cu: goto label_27f32c;
        case 0x27f330u: goto label_27f330;
        case 0x27f334u: goto label_27f334;
        case 0x27f338u: goto label_27f338;
        case 0x27f33cu: goto label_27f33c;
        case 0x27f340u: goto label_27f340;
        case 0x27f344u: goto label_27f344;
        case 0x27f348u: goto label_27f348;
        case 0x27f34cu: goto label_27f34c;
        case 0x27f350u: goto label_27f350;
        case 0x27f354u: goto label_27f354;
        case 0x27f358u: goto label_27f358;
        case 0x27f35cu: goto label_27f35c;
        case 0x27f360u: goto label_27f360;
        case 0x27f364u: goto label_27f364;
        case 0x27f368u: goto label_27f368;
        case 0x27f36cu: goto label_27f36c;
        case 0x27f370u: goto label_27f370;
        case 0x27f374u: goto label_27f374;
        case 0x27f378u: goto label_27f378;
        case 0x27f37cu: goto label_27f37c;
        case 0x27f380u: goto label_27f380;
        case 0x27f384u: goto label_27f384;
        case 0x27f388u: goto label_27f388;
        case 0x27f38cu: goto label_27f38c;
        case 0x27f390u: goto label_27f390;
        case 0x27f394u: goto label_27f394;
        case 0x27f398u: goto label_27f398;
        case 0x27f39cu: goto label_27f39c;
        case 0x27f3a0u: goto label_27f3a0;
        case 0x27f3a4u: goto label_27f3a4;
        case 0x27f3a8u: goto label_27f3a8;
        case 0x27f3acu: goto label_27f3ac;
        case 0x27f3b0u: goto label_27f3b0;
        case 0x27f3b4u: goto label_27f3b4;
        case 0x27f3b8u: goto label_27f3b8;
        case 0x27f3bcu: goto label_27f3bc;
        case 0x27f3c0u: goto label_27f3c0;
        case 0x27f3c4u: goto label_27f3c4;
        case 0x27f3c8u: goto label_27f3c8;
        case 0x27f3ccu: goto label_27f3cc;
        case 0x27f3d0u: goto label_27f3d0;
        case 0x27f3d4u: goto label_27f3d4;
        case 0x27f3d8u: goto label_27f3d8;
        case 0x27f3dcu: goto label_27f3dc;
        case 0x27f3e0u: goto label_27f3e0;
        case 0x27f3e4u: goto label_27f3e4;
        case 0x27f3e8u: goto label_27f3e8;
        case 0x27f3ecu: goto label_27f3ec;
        case 0x27f3f0u: goto label_27f3f0;
        case 0x27f3f4u: goto label_27f3f4;
        case 0x27f3f8u: goto label_27f3f8;
        case 0x27f3fcu: goto label_27f3fc;
        case 0x27f400u: goto label_27f400;
        case 0x27f404u: goto label_27f404;
        case 0x27f408u: goto label_27f408;
        case 0x27f40cu: goto label_27f40c;
        case 0x27f410u: goto label_27f410;
        case 0x27f414u: goto label_27f414;
        case 0x27f418u: goto label_27f418;
        case 0x27f41cu: goto label_27f41c;
        case 0x27f420u: goto label_27f420;
        case 0x27f424u: goto label_27f424;
        case 0x27f428u: goto label_27f428;
        case 0x27f42cu: goto label_27f42c;
        case 0x27f430u: goto label_27f430;
        case 0x27f434u: goto label_27f434;
        case 0x27f438u: goto label_27f438;
        case 0x27f43cu: goto label_27f43c;
        case 0x27f440u: goto label_27f440;
        case 0x27f444u: goto label_27f444;
        case 0x27f448u: goto label_27f448;
        case 0x27f44cu: goto label_27f44c;
        case 0x27f450u: goto label_27f450;
        case 0x27f454u: goto label_27f454;
        case 0x27f458u: goto label_27f458;
        case 0x27f45cu: goto label_27f45c;
        case 0x27f460u: goto label_27f460;
        case 0x27f464u: goto label_27f464;
        case 0x27f468u: goto label_27f468;
        case 0x27f46cu: goto label_27f46c;
        case 0x27f470u: goto label_27f470;
        case 0x27f474u: goto label_27f474;
        case 0x27f478u: goto label_27f478;
        case 0x27f47cu: goto label_27f47c;
        case 0x27f480u: goto label_27f480;
        case 0x27f484u: goto label_27f484;
        case 0x27f488u: goto label_27f488;
        case 0x27f48cu: goto label_27f48c;
        case 0x27f490u: goto label_27f490;
        case 0x27f494u: goto label_27f494;
        case 0x27f498u: goto label_27f498;
        case 0x27f49cu: goto label_27f49c;
        case 0x27f4a0u: goto label_27f4a0;
        case 0x27f4a4u: goto label_27f4a4;
        case 0x27f4a8u: goto label_27f4a8;
        case 0x27f4acu: goto label_27f4ac;
        case 0x27f4b0u: goto label_27f4b0;
        case 0x27f4b4u: goto label_27f4b4;
        case 0x27f4b8u: goto label_27f4b8;
        case 0x27f4bcu: goto label_27f4bc;
        case 0x27f4c0u: goto label_27f4c0;
        case 0x27f4c4u: goto label_27f4c4;
        case 0x27f4c8u: goto label_27f4c8;
        case 0x27f4ccu: goto label_27f4cc;
        case 0x27f4d0u: goto label_27f4d0;
        case 0x27f4d4u: goto label_27f4d4;
        case 0x27f4d8u: goto label_27f4d8;
        case 0x27f4dcu: goto label_27f4dc;
        case 0x27f4e0u: goto label_27f4e0;
        case 0x27f4e4u: goto label_27f4e4;
        case 0x27f4e8u: goto label_27f4e8;
        case 0x27f4ecu: goto label_27f4ec;
        case 0x27f4f0u: goto label_27f4f0;
        case 0x27f4f4u: goto label_27f4f4;
        case 0x27f4f8u: goto label_27f4f8;
        case 0x27f4fcu: goto label_27f4fc;
        case 0x27f500u: goto label_27f500;
        case 0x27f504u: goto label_27f504;
        case 0x27f508u: goto label_27f508;
        case 0x27f50cu: goto label_27f50c;
        case 0x27f510u: goto label_27f510;
        case 0x27f514u: goto label_27f514;
        case 0x27f518u: goto label_27f518;
        case 0x27f51cu: goto label_27f51c;
        case 0x27f520u: goto label_27f520;
        case 0x27f524u: goto label_27f524;
        case 0x27f528u: goto label_27f528;
        case 0x27f52cu: goto label_27f52c;
        case 0x27f530u: goto label_27f530;
        case 0x27f534u: goto label_27f534;
        case 0x27f538u: goto label_27f538;
        case 0x27f53cu: goto label_27f53c;
        case 0x27f540u: goto label_27f540;
        case 0x27f544u: goto label_27f544;
        case 0x27f548u: goto label_27f548;
        case 0x27f54cu: goto label_27f54c;
        case 0x27f550u: goto label_27f550;
        case 0x27f554u: goto label_27f554;
        case 0x27f558u: goto label_27f558;
        case 0x27f55cu: goto label_27f55c;
        case 0x27f560u: goto label_27f560;
        case 0x27f564u: goto label_27f564;
        case 0x27f568u: goto label_27f568;
        case 0x27f56cu: goto label_27f56c;
        case 0x27f570u: goto label_27f570;
        case 0x27f574u: goto label_27f574;
        case 0x27f578u: goto label_27f578;
        case 0x27f57cu: goto label_27f57c;
        case 0x27f580u: goto label_27f580;
        case 0x27f584u: goto label_27f584;
        case 0x27f588u: goto label_27f588;
        case 0x27f58cu: goto label_27f58c;
        case 0x27f590u: goto label_27f590;
        case 0x27f594u: goto label_27f594;
        case 0x27f598u: goto label_27f598;
        case 0x27f59cu: goto label_27f59c;
        case 0x27f5a0u: goto label_27f5a0;
        case 0x27f5a4u: goto label_27f5a4;
        case 0x27f5a8u: goto label_27f5a8;
        case 0x27f5acu: goto label_27f5ac;
        case 0x27f5b0u: goto label_27f5b0;
        case 0x27f5b4u: goto label_27f5b4;
        case 0x27f5b8u: goto label_27f5b8;
        case 0x27f5bcu: goto label_27f5bc;
        case 0x27f5c0u: goto label_27f5c0;
        case 0x27f5c4u: goto label_27f5c4;
        case 0x27f5c8u: goto label_27f5c8;
        case 0x27f5ccu: goto label_27f5cc;
        case 0x27f5d0u: goto label_27f5d0;
        case 0x27f5d4u: goto label_27f5d4;
        case 0x27f5d8u: goto label_27f5d8;
        case 0x27f5dcu: goto label_27f5dc;
        case 0x27f5e0u: goto label_27f5e0;
        case 0x27f5e4u: goto label_27f5e4;
        case 0x27f5e8u: goto label_27f5e8;
        case 0x27f5ecu: goto label_27f5ec;
        case 0x27f5f0u: goto label_27f5f0;
        case 0x27f5f4u: goto label_27f5f4;
        case 0x27f5f8u: goto label_27f5f8;
        case 0x27f5fcu: goto label_27f5fc;
        case 0x27f600u: goto label_27f600;
        case 0x27f604u: goto label_27f604;
        case 0x27f608u: goto label_27f608;
        case 0x27f60cu: goto label_27f60c;
        case 0x27f610u: goto label_27f610;
        case 0x27f614u: goto label_27f614;
        case 0x27f618u: goto label_27f618;
        case 0x27f61cu: goto label_27f61c;
        case 0x27f620u: goto label_27f620;
        case 0x27f624u: goto label_27f624;
        case 0x27f628u: goto label_27f628;
        case 0x27f62cu: goto label_27f62c;
        case 0x27f630u: goto label_27f630;
        case 0x27f634u: goto label_27f634;
        case 0x27f638u: goto label_27f638;
        case 0x27f63cu: goto label_27f63c;
        case 0x27f640u: goto label_27f640;
        case 0x27f644u: goto label_27f644;
        case 0x27f648u: goto label_27f648;
        case 0x27f64cu: goto label_27f64c;
        case 0x27f650u: goto label_27f650;
        case 0x27f654u: goto label_27f654;
        case 0x27f658u: goto label_27f658;
        case 0x27f65cu: goto label_27f65c;
        case 0x27f660u: goto label_27f660;
        case 0x27f664u: goto label_27f664;
        case 0x27f668u: goto label_27f668;
        case 0x27f66cu: goto label_27f66c;
        case 0x27f670u: goto label_27f670;
        case 0x27f674u: goto label_27f674;
        case 0x27f678u: goto label_27f678;
        case 0x27f67cu: goto label_27f67c;
        case 0x27f680u: goto label_27f680;
        case 0x27f684u: goto label_27f684;
        case 0x27f688u: goto label_27f688;
        case 0x27f68cu: goto label_27f68c;
        case 0x27f690u: goto label_27f690;
        case 0x27f694u: goto label_27f694;
        case 0x27f698u: goto label_27f698;
        case 0x27f69cu: goto label_27f69c;
        case 0x27f6a0u: goto label_27f6a0;
        case 0x27f6a4u: goto label_27f6a4;
        case 0x27f6a8u: goto label_27f6a8;
        case 0x27f6acu: goto label_27f6ac;
        case 0x27f6b0u: goto label_27f6b0;
        case 0x27f6b4u: goto label_27f6b4;
        case 0x27f6b8u: goto label_27f6b8;
        case 0x27f6bcu: goto label_27f6bc;
        case 0x27f6c0u: goto label_27f6c0;
        case 0x27f6c4u: goto label_27f6c4;
        case 0x27f6c8u: goto label_27f6c8;
        case 0x27f6ccu: goto label_27f6cc;
        case 0x27f6d0u: goto label_27f6d0;
        case 0x27f6d4u: goto label_27f6d4;
        case 0x27f6d8u: goto label_27f6d8;
        case 0x27f6dcu: goto label_27f6dc;
        case 0x27f6e0u: goto label_27f6e0;
        case 0x27f6e4u: goto label_27f6e4;
        case 0x27f6e8u: goto label_27f6e8;
        case 0x27f6ecu: goto label_27f6ec;
        case 0x27f6f0u: goto label_27f6f0;
        case 0x27f6f4u: goto label_27f6f4;
        case 0x27f6f8u: goto label_27f6f8;
        case 0x27f6fcu: goto label_27f6fc;
        case 0x27f700u: goto label_27f700;
        case 0x27f704u: goto label_27f704;
        case 0x27f708u: goto label_27f708;
        case 0x27f70cu: goto label_27f70c;
        case 0x27f710u: goto label_27f710;
        case 0x27f714u: goto label_27f714;
        case 0x27f718u: goto label_27f718;
        case 0x27f71cu: goto label_27f71c;
        case 0x27f720u: goto label_27f720;
        case 0x27f724u: goto label_27f724;
        case 0x27f728u: goto label_27f728;
        case 0x27f72cu: goto label_27f72c;
        case 0x27f730u: goto label_27f730;
        case 0x27f734u: goto label_27f734;
        case 0x27f738u: goto label_27f738;
        case 0x27f73cu: goto label_27f73c;
        case 0x27f740u: goto label_27f740;
        case 0x27f744u: goto label_27f744;
        case 0x27f748u: goto label_27f748;
        case 0x27f74cu: goto label_27f74c;
        case 0x27f750u: goto label_27f750;
        case 0x27f754u: goto label_27f754;
        case 0x27f758u: goto label_27f758;
        case 0x27f75cu: goto label_27f75c;
        case 0x27f760u: goto label_27f760;
        case 0x27f764u: goto label_27f764;
        case 0x27f768u: goto label_27f768;
        case 0x27f76cu: goto label_27f76c;
        case 0x27f770u: goto label_27f770;
        case 0x27f774u: goto label_27f774;
        case 0x27f778u: goto label_27f778;
        case 0x27f77cu: goto label_27f77c;
        case 0x27f780u: goto label_27f780;
        case 0x27f784u: goto label_27f784;
        case 0x27f788u: goto label_27f788;
        case 0x27f78cu: goto label_27f78c;
        case 0x27f790u: goto label_27f790;
        case 0x27f794u: goto label_27f794;
        case 0x27f798u: goto label_27f798;
        case 0x27f79cu: goto label_27f79c;
        case 0x27f7a0u: goto label_27f7a0;
        case 0x27f7a4u: goto label_27f7a4;
        case 0x27f7a8u: goto label_27f7a8;
        case 0x27f7acu: goto label_27f7ac;
        case 0x27f7b0u: goto label_27f7b0;
        case 0x27f7b4u: goto label_27f7b4;
        case 0x27f7b8u: goto label_27f7b8;
        case 0x27f7bcu: goto label_27f7bc;
        case 0x27f7c0u: goto label_27f7c0;
        case 0x27f7c4u: goto label_27f7c4;
        case 0x27f7c8u: goto label_27f7c8;
        case 0x27f7ccu: goto label_27f7cc;
        case 0x27f7d0u: goto label_27f7d0;
        case 0x27f7d4u: goto label_27f7d4;
        case 0x27f7d8u: goto label_27f7d8;
        case 0x27f7dcu: goto label_27f7dc;
        case 0x27f7e0u: goto label_27f7e0;
        case 0x27f7e4u: goto label_27f7e4;
        case 0x27f7e8u: goto label_27f7e8;
        case 0x27f7ecu: goto label_27f7ec;
        case 0x27f7f0u: goto label_27f7f0;
        case 0x27f7f4u: goto label_27f7f4;
        case 0x27f7f8u: goto label_27f7f8;
        case 0x27f7fcu: goto label_27f7fc;
        case 0x27f800u: goto label_27f800;
        case 0x27f804u: goto label_27f804;
        case 0x27f808u: goto label_27f808;
        case 0x27f80cu: goto label_27f80c;
        case 0x27f810u: goto label_27f810;
        case 0x27f814u: goto label_27f814;
        case 0x27f818u: goto label_27f818;
        case 0x27f81cu: goto label_27f81c;
        case 0x27f820u: goto label_27f820;
        case 0x27f824u: goto label_27f824;
        case 0x27f828u: goto label_27f828;
        case 0x27f82cu: goto label_27f82c;
        case 0x27f830u: goto label_27f830;
        case 0x27f834u: goto label_27f834;
        case 0x27f838u: goto label_27f838;
        case 0x27f83cu: goto label_27f83c;
        case 0x27f840u: goto label_27f840;
        case 0x27f844u: goto label_27f844;
        case 0x27f848u: goto label_27f848;
        case 0x27f84cu: goto label_27f84c;
        case 0x27f850u: goto label_27f850;
        case 0x27f854u: goto label_27f854;
        case 0x27f858u: goto label_27f858;
        case 0x27f85cu: goto label_27f85c;
        case 0x27f860u: goto label_27f860;
        case 0x27f864u: goto label_27f864;
        case 0x27f868u: goto label_27f868;
        case 0x27f86cu: goto label_27f86c;
        case 0x27f870u: goto label_27f870;
        case 0x27f874u: goto label_27f874;
        case 0x27f878u: goto label_27f878;
        case 0x27f87cu: goto label_27f87c;
        case 0x27f880u: goto label_27f880;
        case 0x27f884u: goto label_27f884;
        case 0x27f888u: goto label_27f888;
        case 0x27f88cu: goto label_27f88c;
        case 0x27f890u: goto label_27f890;
        case 0x27f894u: goto label_27f894;
        case 0x27f898u: goto label_27f898;
        case 0x27f89cu: goto label_27f89c;
        case 0x27f8a0u: goto label_27f8a0;
        case 0x27f8a4u: goto label_27f8a4;
        case 0x27f8a8u: goto label_27f8a8;
        case 0x27f8acu: goto label_27f8ac;
        case 0x27f8b0u: goto label_27f8b0;
        case 0x27f8b4u: goto label_27f8b4;
        case 0x27f8b8u: goto label_27f8b8;
        case 0x27f8bcu: goto label_27f8bc;
        case 0x27f8c0u: goto label_27f8c0;
        case 0x27f8c4u: goto label_27f8c4;
        case 0x27f8c8u: goto label_27f8c8;
        case 0x27f8ccu: goto label_27f8cc;
        case 0x27f8d0u: goto label_27f8d0;
        case 0x27f8d4u: goto label_27f8d4;
        case 0x27f8d8u: goto label_27f8d8;
        case 0x27f8dcu: goto label_27f8dc;
        case 0x27f8e0u: goto label_27f8e0;
        case 0x27f8e4u: goto label_27f8e4;
        case 0x27f8e8u: goto label_27f8e8;
        case 0x27f8ecu: goto label_27f8ec;
        case 0x27f8f0u: goto label_27f8f0;
        case 0x27f8f4u: goto label_27f8f4;
        case 0x27f8f8u: goto label_27f8f8;
        case 0x27f8fcu: goto label_27f8fc;
        case 0x27f900u: goto label_27f900;
        case 0x27f904u: goto label_27f904;
        case 0x27f908u: goto label_27f908;
        case 0x27f90cu: goto label_27f90c;
        case 0x27f910u: goto label_27f910;
        case 0x27f914u: goto label_27f914;
        case 0x27f918u: goto label_27f918;
        case 0x27f91cu: goto label_27f91c;
        case 0x27f920u: goto label_27f920;
        case 0x27f924u: goto label_27f924;
        case 0x27f928u: goto label_27f928;
        case 0x27f92cu: goto label_27f92c;
        case 0x27f930u: goto label_27f930;
        case 0x27f934u: goto label_27f934;
        case 0x27f938u: goto label_27f938;
        case 0x27f93cu: goto label_27f93c;
        case 0x27f940u: goto label_27f940;
        case 0x27f944u: goto label_27f944;
        case 0x27f948u: goto label_27f948;
        case 0x27f94cu: goto label_27f94c;
        case 0x27f950u: goto label_27f950;
        case 0x27f954u: goto label_27f954;
        case 0x27f958u: goto label_27f958;
        case 0x27f95cu: goto label_27f95c;
        case 0x27f960u: goto label_27f960;
        case 0x27f964u: goto label_27f964;
        case 0x27f968u: goto label_27f968;
        case 0x27f96cu: goto label_27f96c;
        case 0x27f970u: goto label_27f970;
        case 0x27f974u: goto label_27f974;
        case 0x27f978u: goto label_27f978;
        case 0x27f97cu: goto label_27f97c;
        default: return;
    }

label_27f1b0:
    // 0x27f1b0: 0x19fc0  sll         $s3, $at, 31
    ctx->pc = 0x27f1b0u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 1), 31));
label_27f1b4:
    // 0x27f1b4: 0x2ad60  .word       0x0002AD60                   # add         $s5, $zero, $v0 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27f1b4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 21, (int32_t)result);     } }
label_27f1b8:
    // 0x27f1b8: 0x0  nop
    ctx->pc = 0x27f1b8u;
    // NOP
label_27f1bc:
    // 0x27f1bc: 0x0  nop
    ctx->pc = 0x27f1bcu;
    // NOP
label_27f1c0:
    // 0x27f1c0: 0x1a016  dsrlv       $s4, $at, $zero
    ctx->pc = 0x27f1c0u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 1) >> (GPR_U32(ctx, 0) & 0x3F));
label_27f1c4:
    // 0x27f1c4: 0x3ce70  tge         $zero, $v1, 825
    ctx->pc = 0x27f1c4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_27f1c8:
    // 0x27f1c8: 0x0  nop
    ctx->pc = 0x27f1c8u;
    // NOP
label_27f1cc:
    // 0x27f1cc: 0x0  nop
    ctx->pc = 0x27f1ccu;
    // NOP
label_27f1d0:
    // 0x27f1d0: 0x1a090  .word       0x0001A090                   # mfhi        $s4 # 00010080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27f1d0u;
    SET_GPR_U64(ctx, 20, ctx->hi);
label_27f1d4:
    // 0x27f1d4: 0x29040  sll         $s2, $v0, 1
    ctx->pc = 0x27f1d4u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_27f1d8:
    // 0x27f1d8: 0x0  nop
    ctx->pc = 0x27f1d8u;
    // NOP
label_27f1dc:
    // 0x27f1dc: 0x0  nop
    ctx->pc = 0x27f1dcu;
    // NOP
label_27f1e0:
    // 0x27f1e0: 0x1a0e3  .word       0x0001A0E3                   # negu        $s4, $at # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27f1e0u;
    SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 1)));
label_27f1e4:
    // 0x27f1e4: 0x2b660  .word       0x0002B660                   # add         $s6, $zero, $v0 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27f1e4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
label_27f1e8:
    // 0x27f1e8: 0x0  nop
    ctx->pc = 0x27f1e8u;
    // NOP
label_27f1ec:
    // 0x27f1ec: 0x0  nop
    ctx->pc = 0x27f1ecu;
    // NOP
label_27f1f0:
    // 0x27f1f0: 0x1a13a  dsrl        $s4, $at, 4
    ctx->pc = 0x27f1f0u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 1) >> 4);
label_27f1f4:
    // 0x27f1f4: 0x2a630  tge         $zero, $v0, 664
    ctx->pc = 0x27f1f4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
label_27f1f8:
    // 0x27f1f8: 0x0  nop
    ctx->pc = 0x27f1f8u;
    // NOP
label_27f1fc:
    // 0x27f1fc: 0x0  nop
    ctx->pc = 0x27f1fcu;
    // NOP
label_27f200:
    // 0x27f200: 0x1a18f  .word       0x0001A18F                   # sync # 0001A000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27f200u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_27f204:
    // 0x27f204: 0x353c0  sll         $t2, $v1, 15
    ctx->pc = 0x27f204u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 3), 15));
label_27f208:
    // 0x27f208: 0x0  nop
    ctx->pc = 0x27f208u;
    // NOP
label_27f20c:
    // 0x27f20c: 0x0  nop
    ctx->pc = 0x27f20cu;
    // NOP
label_27f210:
    // 0x27f210: 0x1a1fa  dsrl        $s4, $at, 7
    ctx->pc = 0x27f210u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 1) >> 7);
label_27f214:
    // 0x27f214: 0x27930  tge         $zero, $v0, 484
    ctx->pc = 0x27f214u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
label_27f218:
    // 0x27f218: 0x0  nop
    ctx->pc = 0x27f218u;
    // NOP
label_27f21c:
    // 0x27f21c: 0x0  nop
    ctx->pc = 0x27f21cu;
    // NOP
label_27f220:
    // 0x27f220: 0x1a24a  .word       0x0001A24A                   # movz        $s4, $zero, $at # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27f220u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 0));
label_27f224:
    // 0x27f224: 0x27470  tge         $zero, $v0, 465
    ctx->pc = 0x27f224u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
label_27f228:
    // 0x27f228: 0x0  nop
    ctx->pc = 0x27f228u;
    // NOP
label_27f22c:
    // 0x27f22c: 0x0  nop
    ctx->pc = 0x27f22cu;
    // NOP
label_27f230:
    // 0x27f230: 0x1a299  .word       0x0001A299                   # multu       $zero, $at # 0000A280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27f230u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 20, (int32_t)result); }
label_27f234:
    // 0x27f234: 0x37f90  .word       0x00037F90                   # mfhi        $t7 # 00030780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27f234u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_27f238:
    // 0x27f238: 0x0  nop
    ctx->pc = 0x27f238u;
    // NOP
label_27f23c:
    // 0x27f23c: 0x0  nop
    ctx->pc = 0x27f23cu;
    // NOP
label_27f240:
    // 0x27f240: 0x1a309  .word       0x0001A309                   # jalr        $s4, $zero # 00010300 <InstrIdType: CPU_SPECIAL>
label_27f244:
    if (ctx->pc == 0x27F244u) {
        ctx->pc = 0x27F244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F240u;
        // 0x27f244: 0x37c40  sll         $t7, $v1, 17 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 3), 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27F248u;
        goto label_27f248;
    }
    ctx->pc = 0x27F240u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 20, 0x27F248u);
        ctx->pc = 0x27F244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F240u;
        // 0x27f244: 0x37c40  sll         $t7, $v1, 17 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 3), 17));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27F240u, 0x27F248u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x27F248u;
label_27f248:
    // 0x27f248: 0x0  nop
    ctx->pc = 0x27f248u;
    // NOP
label_27f24c:
    // 0x27f24c: 0x0  nop
    ctx->pc = 0x27f24cu;
    // NOP
label_27f250:
    // 0x27f250: 0x1a379  .word       0x0001A379                   # INVALID     $zero, $at, -0x5C87 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27f250u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x27F250 raw=0x0001A379"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27f254:
    // 0x27f254: 0x2ea80  sll         $sp, $v0, 10
    ctx->pc = 0x27f254u;
    SET_GPR_S32(ctx, 29, (int32_t)SLL32(GPR_U32(ctx, 2), 10));
label_27f258:
    // 0x27f258: 0x0  nop
    ctx->pc = 0x27f258u;
    // NOP
label_27f25c:
    // 0x27f25c: 0x0  nop
    ctx->pc = 0x27f25cu;
    // NOP
label_27f260:
    // 0x27f260: 0x1a3d7  .word       0x0001A3D7                   # dsrav       $s4, $at, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27f260u;
    SET_GPR_S64(ctx, 20, GPR_S64(ctx, 1) >> (GPR_U32(ctx, 0) & 0x3F));
label_27f264:
    // 0x27f264: 0x34e50  .word       0x00034E50                   # mfhi        $t1 # 00030640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27f264u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_27f268:
    // 0x27f268: 0x0  nop
    ctx->pc = 0x27f268u;
    // NOP
label_27f26c:
    // 0x27f26c: 0x0  nop
    ctx->pc = 0x27f26cu;
    // NOP
label_27f270:
    // 0x27f270: 0x1a441  .word       0x0001A441                   # INVALID     $zero, $at, -0x5BBF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27f270u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x27F270 raw=0x0001A441"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27f274:
    // 0x27f274: 0x28f30  tge         $zero, $v0, 572
    ctx->pc = 0x27f274u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
label_27f278:
    // 0x27f278: 0x0  nop
    ctx->pc = 0x27f278u;
    // NOP
label_27f27c:
    // 0x27f27c: 0x0  nop
    ctx->pc = 0x27f27cu;
    // NOP
label_27f280:
    // 0x27f280: 0x1a493  .word       0x0001A493                   # mtlo        $zero # 0001A480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27f280u;
    ctx->lo = GPR_U64(ctx, 0);
label_27f284:
    // 0x27f284: 0x2bca0  .word       0x0002BCA0                   # add         $s7, $zero, $v0 # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27f284u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 23, (int32_t)result);     } }
label_27f288:
    // 0x27f288: 0x0  nop
    ctx->pc = 0x27f288u;
    // NOP
label_27f28c:
    // 0x27f28c: 0x0  nop
    ctx->pc = 0x27f28cu;
    // NOP
label_27f290:
    // 0x27f290: 0x1a4eb  .word       0x0001A4EB                   # sltu        $s4, $zero, $at # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27f290u;
    SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
label_27f294:
    // 0x27f294: 0x3aa30  tge         $zero, $v1, 680
    ctx->pc = 0x27f294u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_27f298:
    // 0x27f298: 0x0  nop
    ctx->pc = 0x27f298u;
    // NOP
label_27f29c:
    // 0x27f29c: 0x0  nop
    ctx->pc = 0x27f29cu;
    // NOP
label_27f2a0:
    // 0x27f2a0: 0x1a561  .word       0x0001A561                   # addu        $s4, $zero, $at # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27f2a0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 1)));
label_27f2a4:
    // 0x27f2a4: 0x2d170  tge         $zero, $v0, 837
    ctx->pc = 0x27f2a4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
label_27f2a8:
    // 0x27f2a8: 0x0  nop
    ctx->pc = 0x27f2a8u;
    // NOP
label_27f2ac:
    // 0x27f2ac: 0x0  nop
    ctx->pc = 0x27f2acu;
    // NOP
label_27f2b0:
    // 0x27f2b0: 0x1a5bc  dsll32      $s4, $at, 22
    ctx->pc = 0x27f2b0u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 1) << (32 + 22));
label_27f2b4:
    // 0x27f2b4: 0x3b180  sll         $s6, $v1, 6
    ctx->pc = 0x27f2b4u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
label_27f2b8:
    // 0x27f2b8: 0x0  nop
    ctx->pc = 0x27f2b8u;
    // NOP
label_27f2bc:
    // 0x27f2bc: 0x0  nop
    ctx->pc = 0x27f2bcu;
    // NOP
label_27f2c0:
    // 0x27f2c0: 0x1a633  tltu        $zero, $at, 664
    ctx->pc = 0x27f2c0u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_27f2c4:
    // 0x27f2c4: 0x290d0  .word       0x000290D0                   # mfhi        $s2 # 000200C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27f2c4u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_27f2c8:
    // 0x27f2c8: 0x0  nop
    ctx->pc = 0x27f2c8u;
    // NOP
label_27f2cc:
    // 0x27f2cc: 0x0  nop
    ctx->pc = 0x27f2ccu;
    // NOP
label_27f2d0:
    // 0x27f2d0: 0x1a686  .word       0x0001A686                   # srlv        $s4, $at, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27f2d0u;
    SET_GPR_S32(ctx, 20, (int32_t)SRL32(GPR_U32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_27f2d4:
    // 0x27f2d4: 0x22440  sll         $a0, $v0, 17
    ctx->pc = 0x27f2d4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 17));
label_27f2d8:
    // 0x27f2d8: 0x0  nop
    ctx->pc = 0x27f2d8u;
    // NOP
label_27f2dc:
    // 0x27f2dc: 0x0  nop
    ctx->pc = 0x27f2dcu;
    // NOP
label_27f2e0:
    // 0x27f2e0: 0x1a6cb  .word       0x0001A6CB                   # movn        $s4, $zero, $at # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27f2e0u;
    if (GPR_U64(ctx, 1) != 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 0));
label_27f2e4:
    // 0x27f2e4: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x27f2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_27f2e8:
    // 0x27f2e8: 0x0  nop
    ctx->pc = 0x27f2e8u;
    // NOP
label_27f2ec:
    // 0x27f2ec: 0x0  nop
    ctx->pc = 0x27f2ecu;
    // NOP
label_27f2f0:
    // 0x27f2f0: 0x1a72e  .word       0x0001A72E                   # dsub        $s4, $zero, $at # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27f2f0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 1); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 20, r); }
label_27f2f4:
    // 0x27f2f4: 0x31c70  tge         $zero, $v1, 113
    ctx->pc = 0x27f2f4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_27f2f8:
    // 0x27f2f8: 0x0  nop
    ctx->pc = 0x27f2f8u;
    // NOP
label_27f2fc:
    // 0x27f2fc: 0x0  nop
    ctx->pc = 0x27f2fcu;
    // NOP
label_27f300:
    // 0x27f300: 0x1a792  .word       0x0001A792                   # mflo        $s4 # 00010780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27f300u;
    SET_GPR_U64(ctx, 20, ctx->lo);
label_27f304:
    // 0x27f304: 0x2e520  .word       0x0002E520                   # add         $gp, $zero, $v0 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27f304u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 28, (int32_t)result);     } }
label_27f308:
    // 0x27f308: 0x0  nop
    ctx->pc = 0x27f308u;
    // NOP
label_27f30c:
    // 0x27f30c: 0x0  nop
    ctx->pc = 0x27f30cu;
    // NOP
label_27f310:
    // 0x27f310: 0x1a7ef  .word       0x0001A7EF                   # dsubu       $s4, $zero, $at # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27f310u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 0) - GPR_U64(ctx, 1));
label_27f314:
    // 0x27f314: 0x326e0  .word       0x000326E0                   # add         $a0, $zero, $v1 # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27f314u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 4, (int32_t)result);     } }
label_27f318:
    // 0x27f318: 0x0  nop
    ctx->pc = 0x27f318u;
    // NOP
label_27f31c:
    // 0x27f31c: 0x0  nop
    ctx->pc = 0x27f31cu;
    // NOP
label_27f320:
    // 0x27f320: 0x1a854  .word       0x0001A854                   # dsllv       $s5, $at, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27f320u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 1) << (GPR_U32(ctx, 0) & 0x3F));
label_27f324:
    // 0x27f324: 0x2b570  tge         $zero, $v0, 725
    ctx->pc = 0x27f324u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
label_27f328:
    // 0x27f328: 0x0  nop
    ctx->pc = 0x27f328u;
    // NOP
label_27f32c:
    // 0x27f32c: 0x0  nop
    ctx->pc = 0x27f32cu;
    // NOP
label_27f330:
    // 0x27f330: 0x1a8ab  .word       0x0001A8AB                   # sltu        $s5, $zero, $at # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27f330u;
    SET_GPR_U64(ctx, 21, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
label_27f334:
    // 0x27f334: 0x27d60  .word       0x00027D60                   # add         $t7, $zero, $v0 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27f334u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_27f338:
    // 0x27f338: 0x0  nop
    ctx->pc = 0x27f338u;
    // NOP
label_27f33c:
    // 0x27f33c: 0x0  nop
    ctx->pc = 0x27f33cu;
    // NOP
label_27f340:
    // 0x27f340: 0x1a8fb  dsra        $s5, $at, 3
    ctx->pc = 0x27f340u;
    SET_GPR_S64(ctx, 21, GPR_S64(ctx, 1) >> 3);
label_27f344:
    // 0x27f344: 0x298a0  .word       0x000298A0                   # add         $s3, $zero, $v0 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27f344u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 19, (int32_t)result);     } }
label_27f348:
    // 0x27f348: 0x0  nop
    ctx->pc = 0x27f348u;
    // NOP
label_27f34c:
    // 0x27f34c: 0x0  nop
    ctx->pc = 0x27f34cu;
    // NOP
label_27f350:
    // 0x27f350: 0x1a94f  .word       0x0001A94F                   # sync # 0001A800 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27f350u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_27f354:
    // 0x27f354: 0x2bbc0  sll         $s7, $v0, 15
    ctx->pc = 0x27f354u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 2), 15));
label_27f358:
    // 0x27f358: 0x0  nop
    ctx->pc = 0x27f358u;
    // NOP
label_27f35c:
    // 0x27f35c: 0x0  nop
    ctx->pc = 0x27f35cu;
    // NOP
label_27f360:
    // 0x27f360: 0x1a9a7  .word       0x0001A9A7                   # nor         $s5, $zero, $at # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27f360u;
    SET_GPR_U64(ctx, 21, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 1)));
label_27f364:
    // 0x27f364: 0x2e580  sll         $gp, $v0, 22
    ctx->pc = 0x27f364u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 2), 22));
label_27f368:
    // 0x27f368: 0x0  nop
    ctx->pc = 0x27f368u;
    // NOP
label_27f36c:
    // 0x27f36c: 0x0  nop
    ctx->pc = 0x27f36cu;
    // NOP
label_27f370:
    // 0x27f370: 0x1aa04  .word       0x0001AA04                   # sllv        $s5, $at, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27f370u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_27f374:
    // 0x27f374: 0x249a0  .word       0x000249A0                   # add         $t1, $zero, $v0 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27f374u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_27f378:
    // 0x27f378: 0x0  nop
    ctx->pc = 0x27f378u;
    // NOP
label_27f37c:
    // 0x27f37c: 0x0  nop
    ctx->pc = 0x27f37cu;
    // NOP
label_27f380:
    // 0x27f380: 0x1aa4e  .word       0x0001AA4E                   # INVALID     $zero, $at, -0x55B2 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27f380u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x27F380 raw=0x0001AA4E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27f384:
    // 0x27f384: 0x27910  .word       0x00027910                   # mfhi        $t7 # 00020100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27f384u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_27f388:
    // 0x27f388: 0x0  nop
    ctx->pc = 0x27f388u;
    // NOP
label_27f38c:
    // 0x27f38c: 0x0  nop
    ctx->pc = 0x27f38cu;
    // NOP
label_27f390:
    // 0x27f390: 0x1aa9e  .word       0x0001AA9E                   # ddiv        $s5, $zero, $at # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27f390u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x27F390 raw=0x0001AA9E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27f394:
    // 0x27f394: 0x27ec0  sll         $t7, $v0, 27
    ctx->pc = 0x27f394u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 2), 27));
label_27f398:
    // 0x27f398: 0x0  nop
    ctx->pc = 0x27f398u;
    // NOP
label_27f39c:
    // 0x27f39c: 0x0  nop
    ctx->pc = 0x27f39cu;
    // NOP
label_27f3a0:
    // 0x27f3a0: 0x1aaee  .word       0x0001AAEE                   # dsub        $s5, $zero, $at # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27f3a0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 1); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 21, r); }
label_27f3a4:
    // 0x27f3a4: 0x2a280  sll         $s4, $v0, 10
    ctx->pc = 0x27f3a4u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 2), 10));
label_27f3a8:
    // 0x27f3a8: 0x0  nop
    ctx->pc = 0x27f3a8u;
    // NOP
label_27f3ac:
    // 0x27f3ac: 0x0  nop
    ctx->pc = 0x27f3acu;
    // NOP
label_27f3b0:
    // 0x27f3b0: 0x1ab43  sra         $s5, $at, 13
    ctx->pc = 0x27f3b0u;
    SET_GPR_S32(ctx, 21, SRA32(GPR_S32(ctx, 1), 13));
label_27f3b4:
    // 0x27f3b4: 0x25780  sll         $t2, $v0, 30
    ctx->pc = 0x27f3b4u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 2), 30));
label_27f3b8:
    // 0x27f3b8: 0x0  nop
    ctx->pc = 0x27f3b8u;
    // NOP
label_27f3bc:
    // 0x27f3bc: 0x0  nop
    ctx->pc = 0x27f3bcu;
    // NOP
label_27f3c0:
    // 0x27f3c0: 0x1ab8e  .word       0x0001AB8E                   # INVALID     $zero, $at, -0x5472 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27f3c0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x27F3C0 raw=0x0001AB8E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27f3c4:
    // 0x27f3c4: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x27f3c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_27f3c8:
    // 0x27f3c8: 0x0  nop
    ctx->pc = 0x27f3c8u;
    // NOP
label_27f3cc:
    // 0x27f3cc: 0x0  nop
    ctx->pc = 0x27f3ccu;
    // NOP
label_27f3d0:
    // 0x27f3d0: 0x1abd2  .word       0x0001ABD2                   # mflo        $s5 # 000103C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27f3d0u;
    SET_GPR_U64(ctx, 21, ctx->lo);
label_27f3d4:
    // 0x27f3d4: 0x249c0  sll         $t1, $v0, 7
    ctx->pc = 0x27f3d4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
label_27f3d8:
    // 0x27f3d8: 0x0  nop
    ctx->pc = 0x27f3d8u;
    // NOP
label_27f3dc:
    // 0x27f3dc: 0x0  nop
    ctx->pc = 0x27f3dcu;
    // NOP
label_27f3e0:
    // 0x27f3e0: 0x1ac1c  .word       0x0001AC1C                   # dmult       $zero, $at # 0000AC00 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27f3e0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x27F3E0 raw=0x0001AC1C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27f3e4:
    // 0x27f3e4: 0x2dc20  .word       0x0002DC20                   # add         $k1, $zero, $v0 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27f3e4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 27, (int32_t)result);     } }
label_27f3e8:
    // 0x27f3e8: 0x0  nop
    ctx->pc = 0x27f3e8u;
    // NOP
label_27f3ec:
    // 0x27f3ec: 0x0  nop
    ctx->pc = 0x27f3ecu;
    // NOP
label_27f3f0:
    // 0x27f3f0: 0x1ac78  dsll        $s5, $at, 17
    ctx->pc = 0x27f3f0u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 1) << 17);
label_27f3f4:
    // 0x27f3f4: 0x345c0  sll         $t0, $v1, 23
    ctx->pc = 0x27f3f4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 3), 23));
label_27f3f8:
    // 0x27f3f8: 0x0  nop
    ctx->pc = 0x27f3f8u;
    // NOP
label_27f3fc:
    // 0x27f3fc: 0x0  nop
    ctx->pc = 0x27f3fcu;
    // NOP
label_27f400:
    // 0x27f400: 0x1ace1  .word       0x0001ACE1                   # addu        $s5, $zero, $at # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27f400u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 1)));
label_27f404:
    // 0x27f404: 0x382e0  .word       0x000382E0                   # add         $s0, $zero, $v1 # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27f404u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_27f408:
    // 0x27f408: 0x0  nop
    ctx->pc = 0x27f408u;
    // NOP
label_27f40c:
    // 0x27f40c: 0x0  nop
    ctx->pc = 0x27f40cu;
    // NOP
label_27f410:
    // 0x27f410: 0x1ad52  .word       0x0001AD52                   # mflo        $s5 # 00010540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27f410u;
    SET_GPR_U64(ctx, 21, ctx->lo);
label_27f414:
    // 0x27f414: 0x32120  .word       0x00032120                   # add         $a0, $zero, $v1 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27f414u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 4, (int32_t)result);     } }
label_27f418:
    // 0x27f418: 0x0  nop
    ctx->pc = 0x27f418u;
    // NOP
label_27f41c:
    // 0x27f41c: 0x0  nop
    ctx->pc = 0x27f41cu;
    // NOP
label_27f420:
    // 0x27f420: 0x1adb7  .word       0x0001ADB7                   # INVALID     $zero, $at, -0x5249 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27f420u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x27F420 raw=0x0001ADB7"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27f424:
    // 0x27f424: 0x332f0  tge         $zero, $v1, 203
    ctx->pc = 0x27f424u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_27f428:
    // 0x27f428: 0x0  nop
    ctx->pc = 0x27f428u;
    // NOP
label_27f42c:
    // 0x27f42c: 0x0  nop
    ctx->pc = 0x27f42cu;
    // NOP
label_27f430:
    // 0x27f430: 0x1ae1e  .word       0x0001AE1E                   # ddiv        $s5, $zero, $at # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27f430u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x27F430 raw=0x0001AE1E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27f434:
    // 0x27f434: 0x2a4a0  .word       0x0002A4A0                   # add         $s4, $zero, $v0 # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27f434u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_27f438:
    // 0x27f438: 0x0  nop
    ctx->pc = 0x27f438u;
    // NOP
label_27f43c:
    // 0x27f43c: 0x0  nop
    ctx->pc = 0x27f43cu;
    // NOP
label_27f440:
    // 0x27f440: 0x1ae73  tltu        $zero, $at, 697
    ctx->pc = 0x27f440u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_27f444:
    // 0x27f444: 0x2a540  sll         $s4, $v0, 21
    ctx->pc = 0x27f444u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 2), 21));
label_27f448:
    // 0x27f448: 0x0  nop
    ctx->pc = 0x27f448u;
    // NOP
label_27f44c:
    // 0x27f44c: 0x0  nop
    ctx->pc = 0x27f44cu;
    // NOP
label_27f450:
    // 0x27f450: 0x1aec8  .word       0x0001AEC8                   # jr          $zero # 0001AEC0 <InstrIdType: CPU_SPECIAL>
label_27f454:
    if (ctx->pc == 0x27F454u) {
        ctx->pc = 0x27F454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F450u;
        // 0x27f454: 0x30890  .word       0x00030890                   # mfhi        $at # 00030080 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 1, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = 0x27F458u;
        goto label_27f458;
    }
    ctx->pc = 0x27F450u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x27F454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F450u;
        // 0x27f454: 0x30890  .word       0x00030890                   # mfhi        $at # 00030080 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 1, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27F450u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x27F458u;
label_27f458:
    // 0x27f458: 0x0  nop
    ctx->pc = 0x27f458u;
    // NOP
label_27f45c:
    // 0x27f45c: 0x0  nop
    ctx->pc = 0x27f45cu;
    // NOP
label_27f460:
    // 0x27f460: 0x1af2a  .word       0x0001AF2A                   # slt         $s5, $zero, $at # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27f460u;
    SET_GPR_U64(ctx, 21, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
label_27f464:
    // 0x27f464: 0x273d0  .word       0x000273D0                   # mfhi        $t6 # 000203C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27f464u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_27f468:
    // 0x27f468: 0x0  nop
    ctx->pc = 0x27f468u;
    // NOP
label_27f46c:
    // 0x27f46c: 0x0  nop
    ctx->pc = 0x27f46cu;
    // NOP
label_27f470:
    // 0x27f470: 0x1af79  .word       0x0001AF79                   # INVALID     $zero, $at, -0x5087 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27f470u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x27F470 raw=0x0001AF79"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27f474:
    // 0x27f474: 0x250e0  .word       0x000250E0                   # add         $t2, $zero, $v0 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27f474u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
label_27f478:
    // 0x27f478: 0x0  nop
    ctx->pc = 0x27f478u;
    // NOP
label_27f47c:
    // 0x27f47c: 0x0  nop
    ctx->pc = 0x27f47cu;
    // NOP
label_27f480:
    // 0x27f480: 0x1afc4  .word       0x0001AFC4                   # sllv        $s5, $at, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27f480u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_27f484:
    // 0x27f484: 0x2c950  .word       0x0002C950                   # mfhi        $t9 # 00020140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27f484u;
    SET_GPR_U64(ctx, 25, ctx->hi);
label_27f488:
    // 0x27f488: 0x0  nop
    ctx->pc = 0x27f488u;
    // NOP
label_27f48c:
    // 0x27f48c: 0x0  nop
    ctx->pc = 0x27f48cu;
    // NOP
label_27f490:
    // 0x27f490: 0x1b01e  ddiv        $s6, $zero, $at
    ctx->pc = 0x27f490u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x27F490 raw=0x0001B01E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27f494:
    // 0x27f494: 0x32d70  tge         $zero, $v1, 181
    ctx->pc = 0x27f494u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_27f498:
    // 0x27f498: 0x0  nop
    ctx->pc = 0x27f498u;
    // NOP
label_27f49c:
    // 0x27f49c: 0x0  nop
    ctx->pc = 0x27f49cu;
    // NOP
label_27f4a0:
    // 0x27f4a0: 0x1b084  .word       0x0001B084                   # sllv        $s6, $at, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27f4a0u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_27f4a4:
    // 0x27f4a4: 0x20ff0  tge         $zero, $v0, 63
    ctx->pc = 0x27f4a4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
label_27f4a8:
    // 0x27f4a8: 0x0  nop
    ctx->pc = 0x27f4a8u;
    // NOP
label_27f4ac:
    // 0x27f4ac: 0x0  nop
    ctx->pc = 0x27f4acu;
    // NOP
label_27f4b0:
    // 0x27f4b0: 0x1b0c6  .word       0x0001B0C6                   # srlv        $s6, $at, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27f4b0u;
    SET_GPR_S32(ctx, 22, (int32_t)SRL32(GPR_U32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_27f4b4:
    // 0x27f4b4: 0x26480  sll         $t4, $v0, 18
    ctx->pc = 0x27f4b4u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 2), 18));
label_27f4b8:
    // 0x27f4b8: 0x0  nop
    ctx->pc = 0x27f4b8u;
    // NOP
label_27f4bc:
    // 0x27f4bc: 0x0  nop
    ctx->pc = 0x27f4bcu;
    // NOP
label_27f4c0:
    // 0x27f4c0: 0x1b113  .word       0x0001B113                   # mtlo        $zero # 0001B100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27f4c0u;
    ctx->lo = GPR_U64(ctx, 0);
label_27f4c4:
    // 0x27f4c4: 0x32f30  tge         $zero, $v1, 188
    ctx->pc = 0x27f4c4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_27f4c8:
    // 0x27f4c8: 0x0  nop
    ctx->pc = 0x27f4c8u;
    // NOP
label_27f4cc:
    // 0x27f4cc: 0x0  nop
    ctx->pc = 0x27f4ccu;
    // NOP
label_27f4d0:
    // 0x27f4d0: 0x1b179  .word       0x0001B179                   # INVALID     $zero, $at, -0x4E87 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27f4d0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x27F4D0 raw=0x0001B179"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27f4d4:
    // 0x27f4d4: 0x3ad30  tge         $zero, $v1, 692
    ctx->pc = 0x27f4d4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_27f4d8:
    // 0x27f4d8: 0x0  nop
    ctx->pc = 0x27f4d8u;
    // NOP
label_27f4dc:
    // 0x27f4dc: 0x0  nop
    ctx->pc = 0x27f4dcu;
    // NOP
label_27f4e0:
    // 0x27f4e0: 0x1b1ef  .word       0x0001B1EF                   # dsubu       $s6, $zero, $at # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27f4e0u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 0) - GPR_U64(ctx, 1));
label_27f4e4:
    // 0x27f4e4: 0x27220  .word       0x00027220                   # add         $t6, $zero, $v0 # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27f4e4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_27f4e8:
    // 0x27f4e8: 0x0  nop
    ctx->pc = 0x27f4e8u;
    // NOP
label_27f4ec:
    // 0x27f4ec: 0x0  nop
    ctx->pc = 0x27f4ecu;
    // NOP
label_27f4f0:
    // 0x27f4f0: 0x1b23e  dsrl32      $s6, $at, 8
    ctx->pc = 0x27f4f0u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 1) >> (32 + 8));
label_27f4f4:
    // 0x27f4f4: 0x27830  tge         $zero, $v0, 480
    ctx->pc = 0x27f4f4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
label_27f4f8:
    // 0x27f4f8: 0x0  nop
    ctx->pc = 0x27f4f8u;
    // NOP
label_27f4fc:
    // 0x27f4fc: 0x0  nop
    ctx->pc = 0x27f4fcu;
    // NOP
label_27f500:
    // 0x27f500: 0x1b28e  .word       0x0001B28E                   # INVALID     $zero, $at, -0x4D72 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27f500u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x27F500 raw=0x0001B28E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27f504:
    // 0x27f504: 0x36fa0  .word       0x00036FA0                   # add         $t5, $zero, $v1 # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27f504u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_27f508:
    // 0x27f508: 0x0  nop
    ctx->pc = 0x27f508u;
    // NOP
label_27f50c:
    // 0x27f50c: 0x0  nop
    ctx->pc = 0x27f50cu;
    // NOP
label_27f510:
    // 0x27f510: 0x1b2fc  dsll32      $s6, $at, 11
    ctx->pc = 0x27f510u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 1) << (32 + 11));
label_27f514:
    // 0x27f514: 0x33fe0  .word       0x00033FE0                   # add         $a3, $zero, $v1 # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27f514u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
label_27f518:
    // 0x27f518: 0x0  nop
    ctx->pc = 0x27f518u;
    // NOP
label_27f51c:
    // 0x27f51c: 0x0  nop
    ctx->pc = 0x27f51cu;
    // NOP
label_27f520:
    // 0x27f520: 0x1b364  .word       0x0001B364                   # and         $s6, $zero, $at # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27f520u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 0) & GPR_U64(ctx, 1));
label_27f524:
    // 0x27f524: 0x28780  sll         $s0, $v0, 30
    ctx->pc = 0x27f524u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 30));
label_27f528:
    // 0x27f528: 0x0  nop
    ctx->pc = 0x27f528u;
    // NOP
label_27f52c:
    // 0x27f52c: 0x0  nop
    ctx->pc = 0x27f52cu;
    // NOP
label_27f530:
    // 0x27f530: 0x1b3b5  .word       0x0001B3B5                   # INVALID     $zero, $at, -0x4C4B # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27f530u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x27F530 raw=0x0001B3B5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27f534:
    // 0x27f534: 0x23fb0  tge         $zero, $v0, 254
    ctx->pc = 0x27f534u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
label_27f538:
    // 0x27f538: 0x0  nop
    ctx->pc = 0x27f538u;
    // NOP
label_27f53c:
    // 0x27f53c: 0x0  nop
    ctx->pc = 0x27f53cu;
    // NOP
label_27f540:
    // 0x27f540: 0x1b3fd  .word       0x0001B3FD                   # INVALID     $zero, $at, -0x4C03 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27f540u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x27F540 raw=0x0001B3FD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27f544:
    // 0x27f544: 0x26c60  .word       0x00026C60                   # add         $t5, $zero, $v0 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27f544u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_27f548:
    // 0x27f548: 0x0  nop
    ctx->pc = 0x27f548u;
    // NOP
label_27f54c:
    // 0x27f54c: 0x0  nop
    ctx->pc = 0x27f54cu;
    // NOP
label_27f550:
    // 0x27f550: 0x1b44b  .word       0x0001B44B                   # movn        $s6, $zero, $at # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27f550u;
    if (GPR_U64(ctx, 1) != 0) SET_GPR_VEC(ctx, 22, GPR_VEC(ctx, 0));
label_27f554:
    // 0x27f554: 0x24a00  sll         $t1, $v0, 8
    ctx->pc = 0x27f554u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
label_27f558:
    // 0x27f558: 0x0  nop
    ctx->pc = 0x27f558u;
    // NOP
label_27f55c:
    // 0x27f55c: 0x0  nop
    ctx->pc = 0x27f55cu;
    // NOP
label_27f560:
    // 0x27f560: 0x1b495  .word       0x0001B495                   # INVALID     $zero, $at, -0x4B6B # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27f560u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x27F560 raw=0x0001B495"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27f564:
    // 0x27f564: 0x2bd00  sll         $s7, $v0, 20
    ctx->pc = 0x27f564u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 2), 20));
label_27f568:
    // 0x27f568: 0x0  nop
    ctx->pc = 0x27f568u;
    // NOP
label_27f56c:
    // 0x27f56c: 0x0  nop
    ctx->pc = 0x27f56cu;
    // NOP
label_27f570:
    // 0x27f570: 0x1b4ed  .word       0x0001B4ED                   # daddu       $s6, $zero, $at # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27f570u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 1));
label_27f574:
    // 0x27f574: 0x29650  .word       0x00029650                   # mfhi        $s2 # 00020640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27f574u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_27f578:
    // 0x27f578: 0x0  nop
    ctx->pc = 0x27f578u;
    // NOP
label_27f57c:
    // 0x27f57c: 0x0  nop
    ctx->pc = 0x27f57cu;
    // NOP
label_27f580:
    // 0x27f580: 0x1b540  sll         $s6, $at, 21
    ctx->pc = 0x27f580u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 1), 21));
label_27f584:
    // 0x27f584: 0x2f040  sll         $fp, $v0, 1
    ctx->pc = 0x27f584u;
    SET_GPR_S32(ctx, 30, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_27f588:
    // 0x27f588: 0x0  nop
    ctx->pc = 0x27f588u;
    // NOP
label_27f58c:
    // 0x27f58c: 0x0  nop
    ctx->pc = 0x27f58cu;
    // NOP
label_27f590:
    // 0x27f590: 0x1b59f  .word       0x0001B59F                   # ddivu       $s6, $zero, $at # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27f590u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x27F590 raw=0x0001B59F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27f594:
    // 0x27f594: 0x2be20  .word       0x0002BE20                   # add         $s7, $zero, $v0 # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27f594u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 23, (int32_t)result);     } }
label_27f598:
    // 0x27f598: 0x0  nop
    ctx->pc = 0x27f598u;
    // NOP
label_27f59c:
    // 0x27f59c: 0x0  nop
    ctx->pc = 0x27f59cu;
    // NOP
label_27f5a0:
    // 0x27f5a0: 0x1b5f7  .word       0x0001B5F7                   # INVALID     $zero, $at, -0x4A09 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27f5a0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x27F5A0 raw=0x0001B5F7"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27f5a4:
    // 0x27f5a4: 0x317b0  tge         $zero, $v1, 94
    ctx->pc = 0x27f5a4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_27f5a8:
    // 0x27f5a8: 0x0  nop
    ctx->pc = 0x27f5a8u;
    // NOP
label_27f5ac:
    // 0x27f5ac: 0x0  nop
    ctx->pc = 0x27f5acu;
    // NOP
label_27f5b0:
    // 0x27f5b0: 0x1b65a  .word       0x0001B65A                   # div         $s6, $zero, $at # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27f5b0u;
    { int32_t divisor = GPR_S32(ctx, 1);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_27f5b4:
    // 0x27f5b4: 0x31e60  .word       0x00031E60                   # add         $v1, $zero, $v1 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27f5b4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_27f5b8:
    // 0x27f5b8: 0x0  nop
    ctx->pc = 0x27f5b8u;
    // NOP
label_27f5bc:
    // 0x27f5bc: 0x0  nop
    ctx->pc = 0x27f5bcu;
    // NOP
label_27f5c0:
    // 0x27f5c0: 0x1b6be  dsrl32      $s6, $at, 26
    ctx->pc = 0x27f5c0u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 1) >> (32 + 26));
label_27f5c4:
    // 0x27f5c4: 0x19930  tge         $zero, $at, 612
    ctx->pc = 0x27f5c4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_27f5c8:
    // 0x27f5c8: 0x0  nop
    ctx->pc = 0x27f5c8u;
    // NOP
label_27f5cc:
    // 0x27f5cc: 0x0  nop
    ctx->pc = 0x27f5ccu;
    // NOP
label_27f5d0:
    // 0x27f5d0: 0x1b6f2  tlt         $zero, $at, 731
    ctx->pc = 0x27f5d0u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_27f5d4:
    // 0x27f5d4: 0x26dc0  sll         $t5, $v0, 23
    ctx->pc = 0x27f5d4u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 2), 23));
label_27f5d8:
    // 0x27f5d8: 0x0  nop
    ctx->pc = 0x27f5d8u;
    // NOP
label_27f5dc:
    // 0x27f5dc: 0x0  nop
    ctx->pc = 0x27f5dcu;
    // NOP
label_27f5e0:
    // 0x27f5e0: 0x1b740  sll         $s6, $at, 29
    ctx->pc = 0x27f5e0u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 1), 29));
label_27f5e4:
    // 0x27f5e4: 0x258b0  tge         $zero, $v0, 354
    ctx->pc = 0x27f5e4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
label_27f5e8:
    // 0x27f5e8: 0x0  nop
    ctx->pc = 0x27f5e8u;
    // NOP
label_27f5ec:
    // 0x27f5ec: 0x0  nop
    ctx->pc = 0x27f5ecu;
    // NOP
label_27f5f0:
    // 0x27f5f0: 0x1b78c  .word       0x0001B78C                   # syscall     734 # 00010000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27f5f0u;
    ctx->pc = 0x27F5F4u;
runtime->handleSyscall(rdram, ctx, 0x6DEu);
label_27f5f4:
    // 0x27f5f4: 0x2d730  tge         $zero, $v0, 860
    ctx->pc = 0x27f5f4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
label_27f5f8:
    // 0x27f5f8: 0x0  nop
    ctx->pc = 0x27f5f8u;
    // NOP
label_27f5fc:
    // 0x27f5fc: 0x0  nop
    ctx->pc = 0x27f5fcu;
    // NOP
label_27f600:
    // 0x27f600: 0x1b7e7  .word       0x0001B7E7                   # nor         $s6, $zero, $at # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27f600u;
    SET_GPR_U64(ctx, 22, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 1)));
label_27f604:
    // 0x27f604: 0x2e420  .word       0x0002E420                   # add         $gp, $zero, $v0 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27f604u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 28, (int32_t)result);     } }
label_27f608:
    // 0x27f608: 0x0  nop
    ctx->pc = 0x27f608u;
    // NOP
label_27f60c:
    // 0x27f60c: 0x0  nop
    ctx->pc = 0x27f60cu;
    // NOP
label_27f610:
    // 0x27f610: 0x1b844  .word       0x0001B844                   # sllv        $s7, $at, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27f610u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_27f614:
    // 0x27f614: 0x304b0  tge         $zero, $v1, 18
    ctx->pc = 0x27f614u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_27f618:
    // 0x27f618: 0x0  nop
    ctx->pc = 0x27f618u;
    // NOP
label_27f61c:
    // 0x27f61c: 0x0  nop
    ctx->pc = 0x27f61cu;
    // NOP
label_27f620:
    // 0x27f620: 0x1b8a5  .word       0x0001B8A5                   # or          $s7, $zero, $at # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27f620u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 0) | GPR_U64(ctx, 1));
label_27f624:
    // 0x27f624: 0x302a0  .word       0x000302A0                   # add         $zero, $zero, $v1 # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27f624u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_27f628:
    // 0x27f628: 0x0  nop
    ctx->pc = 0x27f628u;
    // NOP
label_27f62c:
    // 0x27f62c: 0x0  nop
    ctx->pc = 0x27f62cu;
    // NOP
label_27f630:
    // 0x27f630: 0x1b906  .word       0x0001B906                   # srlv        $s7, $at, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27f630u;
    SET_GPR_S32(ctx, 23, (int32_t)SRL32(GPR_U32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_27f634:
    // 0x27f634: 0x2a7a0  .word       0x0002A7A0                   # add         $s4, $zero, $v0 # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27f634u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_27f638:
    // 0x27f638: 0x0  nop
    ctx->pc = 0x27f638u;
    // NOP
label_27f63c:
    // 0x27f63c: 0x0  nop
    ctx->pc = 0x27f63cu;
    // NOP
label_27f640:
    // 0x27f640: 0x1b95b  .word       0x0001B95B                   # divu        $s7, $zero, $at # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27f640u;
    { uint32_t divisor = GPR_U32(ctx, 1); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_27f644:
    // 0x27f644: 0x26920  .word       0x00026920                   # add         $t5, $zero, $v0 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27f644u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_27f648:
    // 0x27f648: 0x0  nop
    ctx->pc = 0x27f648u;
    // NOP
label_27f64c:
    // 0x27f64c: 0x0  nop
    ctx->pc = 0x27f64cu;
    // NOP
label_27f650:
    // 0x27f650: 0x1b9a9  .word       0x0001B9A9                   # mtsa        $zero # 0001B980 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x27f650u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_27f654:
    // 0x27f654: 0x28a10  .word       0x00028A10                   # mfhi        $s1 # 00020200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27f654u;
    SET_GPR_U64(ctx, 17, ctx->hi);
label_27f658:
    // 0x27f658: 0x0  nop
    ctx->pc = 0x27f658u;
    // NOP
label_27f65c:
    // 0x27f65c: 0x0  nop
    ctx->pc = 0x27f65cu;
    // NOP
label_27f660:
    // 0x27f660: 0x1b9fb  dsra        $s7, $at, 7
    ctx->pc = 0x27f660u;
    SET_GPR_S64(ctx, 23, GPR_S64(ctx, 1) >> 7);
label_27f664:
    // 0x27f664: 0x23e60  .word       0x00023E60                   # add         $a3, $zero, $v0 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27f664u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
label_27f668:
    // 0x27f668: 0x0  nop
    ctx->pc = 0x27f668u;
    // NOP
label_27f66c:
    // 0x27f66c: 0x0  nop
    ctx->pc = 0x27f66cu;
    // NOP
label_27f670:
    // 0x27f670: 0x1ba43  sra         $s7, $at, 9
    ctx->pc = 0x27f670u;
    SET_GPR_S32(ctx, 23, SRA32(GPR_S32(ctx, 1), 9));
label_27f674:
    // 0x27f674: 0x248a0  .word       0x000248A0                   # add         $t1, $zero, $v0 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27f674u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_27f678:
    // 0x27f678: 0x0  nop
    ctx->pc = 0x27f678u;
    // NOP
label_27f67c:
    // 0x27f67c: 0x0  nop
    ctx->pc = 0x27f67cu;
    // NOP
label_27f680:
    // 0x27f680: 0x1ba8d  break       1, 746
    ctx->pc = 0x27f680u;
    runtime->handleBreak(rdram, ctx);
label_27f684:
    // 0x27f684: 0x211b0  tge         $zero, $v0, 70
    ctx->pc = 0x27f684u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
label_27f688:
    // 0x27f688: 0x0  nop
    ctx->pc = 0x27f688u;
    // NOP
label_27f68c:
    // 0x27f68c: 0x0  nop
    ctx->pc = 0x27f68cu;
    // NOP
label_27f690:
    // 0x27f690: 0x1bad0  .word       0x0001BAD0                   # mfhi        $s7 # 000102C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27f690u;
    SET_GPR_U64(ctx, 23, ctx->hi);
label_27f694:
    // 0x27f694: 0x3bcf0  tge         $zero, $v1, 755
    ctx->pc = 0x27f694u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_27f698:
    // 0x27f698: 0x0  nop
    ctx->pc = 0x27f698u;
    // NOP
label_27f69c:
    // 0x27f69c: 0x0  nop
    ctx->pc = 0x27f69cu;
    // NOP
label_27f6a0:
    // 0x27f6a0: 0x1bb48  .word       0x0001BB48                   # jr          $zero # 0001BB40 <InstrIdType: CPU_SPECIAL>
label_27f6a4:
    if (ctx->pc == 0x27F6A4u) {
        ctx->pc = 0x27F6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F6A0u;
        // 0x27f6a4: 0x295a0  .word       0x000295A0                   # add         $s2, $zero, $v0 # 00000580 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 18, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = 0x27F6A8u;
        goto label_27f6a8;
    }
    ctx->pc = 0x27F6A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x27F6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F6A0u;
        // 0x27f6a4: 0x295a0  .word       0x000295A0                   # add         $s2, $zero, $v0 # 00000580 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 18, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27F6A0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x27F6A8u;
label_27f6a8:
    // 0x27f6a8: 0x0  nop
    ctx->pc = 0x27f6a8u;
    // NOP
label_27f6ac:
    // 0x27f6ac: 0x0  nop
    ctx->pc = 0x27f6acu;
    // NOP
label_27f6b0:
    // 0x27f6b0: 0x1bb9b  .word       0x0001BB9B                   # divu        $s7, $zero, $at # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27f6b0u;
    { uint32_t divisor = GPR_U32(ctx, 1); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_27f6b4:
    // 0x27f6b4: 0x262e0  .word       0x000262E0                   # add         $t4, $zero, $v0 # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27f6b4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_27f6b8:
    // 0x27f6b8: 0x0  nop
    ctx->pc = 0x27f6b8u;
    // NOP
label_27f6bc:
    // 0x27f6bc: 0x0  nop
    ctx->pc = 0x27f6bcu;
    // NOP
label_27f6c0:
    // 0x27f6c0: 0x1bbe8  .word       0x0001BBE8                   # mfsa        $s7 # 000103C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x27f6c0u;
    SET_GPR_U32(ctx, 23, ctx->sa);
label_27f6c4:
    // 0x27f6c4: 0x29250  .word       0x00029250                   # mfhi        $s2 # 00020240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27f6c4u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_27f6c8:
    // 0x27f6c8: 0x0  nop
    ctx->pc = 0x27f6c8u;
    // NOP
label_27f6cc:
    // 0x27f6cc: 0x0  nop
    ctx->pc = 0x27f6ccu;
    // NOP
label_27f6d0:
    // 0x27f6d0: 0x1bc3b  dsra        $s7, $at, 16
    ctx->pc = 0x27f6d0u;
    SET_GPR_S64(ctx, 23, GPR_S64(ctx, 1) >> 16);
label_27f6d4:
    // 0x27f6d4: 0x29570  tge         $zero, $v0, 597
    ctx->pc = 0x27f6d4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
label_27f6d8:
    // 0x27f6d8: 0x0  nop
    ctx->pc = 0x27f6d8u;
    // NOP
label_27f6dc:
    // 0x27f6dc: 0x0  nop
    ctx->pc = 0x27f6dcu;
    // NOP
label_27f6e0:
    // 0x27f6e0: 0x1bc8e  .word       0x0001BC8E                   # INVALID     $zero, $at, -0x4372 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27f6e0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x27F6E0 raw=0x0001BC8E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27f6e4:
    // 0x27f6e4: 0x2df80  sll         $k1, $v0, 30
    ctx->pc = 0x27f6e4u;
    SET_GPR_S32(ctx, 27, (int32_t)SLL32(GPR_U32(ctx, 2), 30));
label_27f6e8:
    // 0x27f6e8: 0x0  nop
    ctx->pc = 0x27f6e8u;
    // NOP
label_27f6ec:
    // 0x27f6ec: 0x0  nop
    ctx->pc = 0x27f6ecu;
    // NOP
label_27f6f0:
    // 0x27f6f0: 0x1bcea  .word       0x0001BCEA                   # slt         $s7, $zero, $at # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27f6f0u;
    SET_GPR_U64(ctx, 23, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
label_27f6f4:
    // 0x27f6f4: 0x295b0  tge         $zero, $v0, 598
    ctx->pc = 0x27f6f4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
label_27f6f8:
    // 0x27f6f8: 0x0  nop
    ctx->pc = 0x27f6f8u;
    // NOP
label_27f6fc:
    // 0x27f6fc: 0x0  nop
    ctx->pc = 0x27f6fcu;
    // NOP
label_27f700:
    // 0x27f700: 0x1bd3d  .word       0x0001BD3D                   # INVALID     $zero, $at, -0x42C3 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27f700u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x27F700 raw=0x0001BD3D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27f704:
    // 0x27f704: 0x280e0  .word       0x000280E0                   # add         $s0, $zero, $v0 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27f704u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_27f708:
    // 0x27f708: 0x0  nop
    ctx->pc = 0x27f708u;
    // NOP
label_27f70c:
    // 0x27f70c: 0x0  nop
    ctx->pc = 0x27f70cu;
    // NOP
label_27f710:
    // 0x27f710: 0x1bd8e  .word       0x0001BD8E                   # INVALID     $zero, $at, -0x4272 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27f710u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x27F710 raw=0x0001BD8E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27f714:
    // 0x27f714: 0x28ce0  .word       0x00028CE0                   # add         $s1, $zero, $v0 # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27f714u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_27f718:
    // 0x27f718: 0x0  nop
    ctx->pc = 0x27f718u;
    // NOP
label_27f71c:
    // 0x27f71c: 0x0  nop
    ctx->pc = 0x27f71cu;
    // NOP
label_27f720:
    // 0x27f720: 0x1bde0  .word       0x0001BDE0                   # add         $s7, $zero, $at # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27f720u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 23, (int32_t)result);     } }
label_27f724:
    // 0x27f724: 0x23660  .word       0x00023660                   # add         $a2, $zero, $v0 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27f724u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 6, (int32_t)result);     } }
label_27f728:
    // 0x27f728: 0x0  nop
    ctx->pc = 0x27f728u;
    // NOP
label_27f72c:
    // 0x27f72c: 0x0  nop
    ctx->pc = 0x27f72cu;
    // NOP
label_27f730:
    // 0x27f730: 0x1be27  .word       0x0001BE27                   # nor         $s7, $zero, $at # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27f730u;
    SET_GPR_U64(ctx, 23, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 1)));
label_27f734:
    // 0x27f734: 0x2d740  sll         $k0, $v0, 29
    ctx->pc = 0x27f734u;
    SET_GPR_S32(ctx, 26, (int32_t)SLL32(GPR_U32(ctx, 2), 29));
label_27f738:
    // 0x27f738: 0x0  nop
    ctx->pc = 0x27f738u;
    // NOP
label_27f73c:
    // 0x27f73c: 0x0  nop
    ctx->pc = 0x27f73cu;
    // NOP
label_27f740:
    // 0x27f740: 0x1be82  srl         $s7, $at, 26
    ctx->pc = 0x27f740u;
    SET_GPR_S32(ctx, 23, (int32_t)SRL32(GPR_U32(ctx, 1), 26));
label_27f744:
    // 0x27f744: 0x1ca50  .word       0x0001CA50                   # mfhi        $t9 # 00010240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27f744u;
    SET_GPR_U64(ctx, 25, ctx->hi);
label_27f748:
    // 0x27f748: 0x0  nop
    ctx->pc = 0x27f748u;
    // NOP
label_27f74c:
    // 0x27f74c: 0x0  nop
    ctx->pc = 0x27f74cu;
    // NOP
label_27f750:
    // 0x27f750: 0x1bebc  dsll32      $s7, $at, 26
    ctx->pc = 0x27f750u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 1) << (32 + 26));
label_27f754:
    // 0x27f754: 0x27090  .word       0x00027090                   # mfhi        $t6 # 00020080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27f754u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_27f758:
    // 0x27f758: 0x0  nop
    ctx->pc = 0x27f758u;
    // NOP
label_27f75c:
    // 0x27f75c: 0x0  nop
    ctx->pc = 0x27f75cu;
    // NOP
label_27f760:
    // 0x27f760: 0x1bf0b  .word       0x0001BF0B                   # movn        $s7, $zero, $at # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27f760u;
    if (GPR_U64(ctx, 1) != 0) SET_GPR_VEC(ctx, 23, GPR_VEC(ctx, 0));
label_27f764:
    // 0x27f764: 0x31cd0  .word       0x00031CD0                   # mfhi        $v1 # 000304C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27f764u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_27f768:
    // 0x27f768: 0x0  nop
    ctx->pc = 0x27f768u;
    // NOP
label_27f76c:
    // 0x27f76c: 0x0  nop
    ctx->pc = 0x27f76cu;
    // NOP
label_27f770:
    // 0x27f770: 0x1bf6f  .word       0x0001BF6F                   # dsubu       $s7, $zero, $at # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27f770u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 0) - GPR_U64(ctx, 1));
label_27f774:
    // 0x27f774: 0x27620  .word       0x00027620                   # add         $t6, $zero, $v0 # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27f774u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_27f778:
    // 0x27f778: 0x0  nop
    ctx->pc = 0x27f778u;
    // NOP
label_27f77c:
    // 0x27f77c: 0x0  nop
    ctx->pc = 0x27f77cu;
    // NOP
label_27f780:
    // 0x27f780: 0x1bfbe  dsrl32      $s7, $at, 30
    ctx->pc = 0x27f780u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 1) >> (32 + 30));
label_27f784:
    // 0x27f784: 0x2a6e0  .word       0x0002A6E0                   # add         $s4, $zero, $v0 # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27f784u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_27f788:
    // 0x27f788: 0x0  nop
    ctx->pc = 0x27f788u;
    // NOP
label_27f78c:
    // 0x27f78c: 0x0  nop
    ctx->pc = 0x27f78cu;
    // NOP
label_27f790:
    // 0x27f790: 0x1c013  .word       0x0001C013                   # mtlo        $zero # 0001C000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27f790u;
    ctx->lo = GPR_U64(ctx, 0);
label_27f794:
    // 0x27f794: 0x28ac0  sll         $s1, $v0, 11
    ctx->pc = 0x27f794u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
label_27f798:
    // 0x27f798: 0x0  nop
    ctx->pc = 0x27f798u;
    // NOP
label_27f79c:
    // 0x27f79c: 0x0  nop
    ctx->pc = 0x27f79cu;
    // NOP
label_27f7a0:
    // 0x27f7a0: 0x1c065  .word       0x0001C065                   # or          $t8, $zero, $at # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27f7a0u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 0) | GPR_U64(ctx, 1));
label_27f7a4:
    // 0x27f7a4: 0x21110  .word       0x00021110                   # mfhi        $v0 # 00020100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27f7a4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_27f7a8:
    // 0x27f7a8: 0x0  nop
    ctx->pc = 0x27f7a8u;
    // NOP
label_27f7ac:
    // 0x27f7ac: 0x0  nop
    ctx->pc = 0x27f7acu;
    // NOP
label_27f7b0:
    // 0x27f7b0: 0x1c0a8  .word       0x0001C0A8                   # mfsa        $t8 # 00010080 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x27f7b0u;
    SET_GPR_U32(ctx, 24, ctx->sa);
label_27f7b4:
    // 0x27f7b4: 0x2f170  tge         $zero, $v0, 965
    ctx->pc = 0x27f7b4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
label_27f7b8:
    // 0x27f7b8: 0x0  nop
    ctx->pc = 0x27f7b8u;
    // NOP
label_27f7bc:
    // 0x27f7bc: 0x0  nop
    ctx->pc = 0x27f7bcu;
    // NOP
label_27f7c0:
    // 0x27f7c0: 0x1c107  .word       0x0001C107                   # srav        $t8, $at, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27f7c0u;
    SET_GPR_S32(ctx, 24, SRA32(GPR_S32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_27f7c4:
    // 0x27f7c4: 0x2bf00  sll         $s7, $v0, 28
    ctx->pc = 0x27f7c4u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 2), 28));
label_27f7c8:
    // 0x27f7c8: 0x0  nop
    ctx->pc = 0x27f7c8u;
    // NOP
label_27f7cc:
    // 0x27f7cc: 0x0  nop
    ctx->pc = 0x27f7ccu;
    // NOP
label_27f7d0:
    // 0x27f7d0: 0x1c15f  .word       0x0001C15F                   # ddivu       $t8, $zero, $at # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27f7d0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x27F7D0 raw=0x0001C15F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27f7d4:
    // 0x27f7d4: 0x2cc90  .word       0x0002CC90                   # mfhi        $t9 # 00020480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27f7d4u;
    SET_GPR_U64(ctx, 25, ctx->hi);
label_27f7d8:
    // 0x27f7d8: 0x0  nop
    ctx->pc = 0x27f7d8u;
    // NOP
label_27f7dc:
    // 0x27f7dc: 0x0  nop
    ctx->pc = 0x27f7dcu;
    // NOP
label_27f7e0:
    // 0x27f7e0: 0x1c1b9  .word       0x0001C1B9                   # INVALID     $zero, $at, -0x3E47 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27f7e0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x27F7E0 raw=0x0001C1B9"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27f7e4:
    // 0x27f7e4: 0x38a80  sll         $s1, $v1, 10
    ctx->pc = 0x27f7e4u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 3), 10));
label_27f7e8:
    // 0x27f7e8: 0x0  nop
    ctx->pc = 0x27f7e8u;
    // NOP
label_27f7ec:
    // 0x27f7ec: 0x0  nop
    ctx->pc = 0x27f7ecu;
    // NOP
label_27f7f0:
    // 0x27f7f0: 0x1c22b  .word       0x0001C22B                   # sltu        $t8, $zero, $at # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27f7f0u;
    SET_GPR_U64(ctx, 24, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
label_27f7f4:
    // 0x27f7f4: 0x27b60  .word       0x00027B60                   # add         $t7, $zero, $v0 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27f7f4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_27f7f8:
    // 0x27f7f8: 0x0  nop
    ctx->pc = 0x27f7f8u;
    // NOP
label_27f7fc:
    // 0x27f7fc: 0x0  nop
    ctx->pc = 0x27f7fcu;
    // NOP
label_27f800:
    // 0x27f800: 0x1c27b  dsra        $t8, $at, 9
    ctx->pc = 0x27f800u;
    SET_GPR_S64(ctx, 24, GPR_S64(ctx, 1) >> 9);
label_27f804:
    // 0x27f804: 0x246b0  tge         $zero, $v0, 282
    ctx->pc = 0x27f804u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
label_27f808:
    // 0x27f808: 0x0  nop
    ctx->pc = 0x27f808u;
    // NOP
label_27f80c:
    // 0x27f80c: 0x0  nop
    ctx->pc = 0x27f80cu;
    // NOP
label_27f810:
    // 0x27f810: 0x1c2c4  .word       0x0001C2C4                   # sllv        $t8, $at, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27f810u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_27f814:
    // 0x27f814: 0x26f40  sll         $t5, $v0, 29
    ctx->pc = 0x27f814u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 2), 29));
label_27f818:
    // 0x27f818: 0x0  nop
    ctx->pc = 0x27f818u;
    // NOP
label_27f81c:
    // 0x27f81c: 0x0  nop
    ctx->pc = 0x27f81cu;
    // NOP
label_27f820:
    // 0x27f820: 0x1c312  .word       0x0001C312                   # mflo        $t8 # 00010300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27f820u;
    SET_GPR_U64(ctx, 24, ctx->lo);
label_27f824:
    // 0x27f824: 0x1efb0  tge         $zero, $at, 958
    ctx->pc = 0x27f824u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_27f828:
    // 0x27f828: 0x0  nop
    ctx->pc = 0x27f828u;
    // NOP
label_27f82c:
    // 0x27f82c: 0x0  nop
    ctx->pc = 0x27f82cu;
    // NOP
label_27f830:
    // 0x27f830: 0x1c350  .word       0x0001C350                   # mfhi        $t8 # 00010340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27f830u;
    SET_GPR_U64(ctx, 24, ctx->hi);
label_27f834:
    // 0x27f834: 0x2e4c0  sll         $gp, $v0, 19
    ctx->pc = 0x27f834u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 2), 19));
label_27f838:
    // 0x27f838: 0x0  nop
    ctx->pc = 0x27f838u;
    // NOP
label_27f83c:
    // 0x27f83c: 0x0  nop
    ctx->pc = 0x27f83cu;
    // NOP
label_27f840:
    // 0x27f840: 0x1c3ad  .word       0x0001C3AD                   # daddu       $t8, $zero, $at # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27f840u;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 1));
label_27f844:
    // 0x27f844: 0x350e0  .word       0x000350E0                   # add         $t2, $zero, $v1 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27f844u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
label_27f848:
    // 0x27f848: 0x0  nop
    ctx->pc = 0x27f848u;
    // NOP
label_27f84c:
    // 0x27f84c: 0x0  nop
    ctx->pc = 0x27f84cu;
    // NOP
label_27f850:
    // 0x27f850: 0x1c418  .word       0x0001C418                   # mult        $t8, $zero, $at # 00000400 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x27f850u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 24, (int32_t)result); }
label_27f854:
    // 0x27f854: 0x237f0  tge         $zero, $v0, 223
    ctx->pc = 0x27f854u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
label_27f858:
    // 0x27f858: 0x0  nop
    ctx->pc = 0x27f858u;
    // NOP
label_27f85c:
    // 0x27f85c: 0x0  nop
    ctx->pc = 0x27f85cu;
    // NOP
label_27f860:
    // 0x27f860: 0x1c45f  .word       0x0001C45F                   # ddivu       $t8, $zero, $at # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27f860u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x27F860 raw=0x0001C45F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27f864:
    // 0x27f864: 0x2c4a0  .word       0x0002C4A0                   # add         $t8, $zero, $v0 # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27f864u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 24, (int32_t)result);     } }
label_27f868:
    // 0x27f868: 0x0  nop
    ctx->pc = 0x27f868u;
    // NOP
label_27f86c:
    // 0x27f86c: 0x0  nop
    ctx->pc = 0x27f86cu;
    // NOP
label_27f870:
    // 0x27f870: 0x1c4b8  dsll        $t8, $at, 18
    ctx->pc = 0x27f870u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 1) << 18);
label_27f874:
    // 0x27f874: 0x34e10  .word       0x00034E10                   # mfhi        $t1 # 00030600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27f874u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_27f878:
    // 0x27f878: 0x0  nop
    ctx->pc = 0x27f878u;
    // NOP
label_27f87c:
    // 0x27f87c: 0x0  nop
    ctx->pc = 0x27f87cu;
    // NOP
label_27f880:
    // 0x27f880: 0x1c522  .word       0x0001C522                   # neg         $t8, $at # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27f880u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 1), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 24, (int32_t)tmp); }
label_27f884:
    // 0x27f884: 0x22570  tge         $zero, $v0, 149
    ctx->pc = 0x27f884u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
label_27f888:
    // 0x27f888: 0x0  nop
    ctx->pc = 0x27f888u;
    // NOP
label_27f88c:
    // 0x27f88c: 0x0  nop
    ctx->pc = 0x27f88cu;
    // NOP
label_27f890:
    // 0x27f890: 0x1c567  .word       0x0001C567                   # nor         $t8, $zero, $at # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27f890u;
    SET_GPR_U64(ctx, 24, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 1)));
label_27f894:
    // 0x27f894: 0x2ab10  .word       0x0002AB10                   # mfhi        $s5 # 00020300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27f894u;
    SET_GPR_U64(ctx, 21, ctx->hi);
label_27f898:
    // 0x27f898: 0x0  nop
    ctx->pc = 0x27f898u;
    // NOP
label_27f89c:
    // 0x27f89c: 0x0  nop
    ctx->pc = 0x27f89cu;
    // NOP
label_27f8a0:
    // 0x27f8a0: 0x1c5bd  .word       0x0001C5BD                   # INVALID     $zero, $at, -0x3A43 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27f8a0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x27F8A0 raw=0x0001C5BD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27f8a4:
    // 0x27f8a4: 0x2ef20  .word       0x0002EF20                   # add         $sp, $zero, $v0 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27f8a4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 29, (int32_t)result);     } }
label_27f8a8:
    // 0x27f8a8: 0x0  nop
    ctx->pc = 0x27f8a8u;
    // NOP
label_27f8ac:
    // 0x27f8ac: 0x0  nop
    ctx->pc = 0x27f8acu;
    // NOP
label_27f8b0:
    // 0x27f8b0: 0x1c61b  .word       0x0001C61B                   # divu        $t8, $zero, $at # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27f8b0u;
    { uint32_t divisor = GPR_U32(ctx, 1); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_27f8b4:
    // 0x27f8b4: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x27f8b4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_27f8b8:
    // 0x27f8b8: 0x0  nop
    ctx->pc = 0x27f8b8u;
    // NOP
label_27f8bc:
    // 0x27f8bc: 0x0  nop
    ctx->pc = 0x27f8bcu;
    // NOP
label_27f8c0:
    // 0x27f8c0: 0x1c680  sll         $t8, $at, 26
    ctx->pc = 0x27f8c0u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 1), 26));
label_27f8c4:
    // 0x27f8c4: 0x2cd80  sll         $t9, $v0, 22
    ctx->pc = 0x27f8c4u;
    SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 2), 22));
label_27f8c8:
    // 0x27f8c8: 0x0  nop
    ctx->pc = 0x27f8c8u;
    // NOP
label_27f8cc:
    // 0x27f8cc: 0x0  nop
    ctx->pc = 0x27f8ccu;
    // NOP
label_27f8d0:
    // 0x27f8d0: 0x1c6da  .word       0x0001C6DA                   # div         $t8, $zero, $at # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27f8d0u;
    { int32_t divisor = GPR_S32(ctx, 1);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_27f8d4:
    // 0x27f8d4: 0x31810  .word       0x00031810                   # mfhi        $v1 # 00030000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27f8d4u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_27f8d8:
    // 0x27f8d8: 0x0  nop
    ctx->pc = 0x27f8d8u;
    // NOP
label_27f8dc:
    // 0x27f8dc: 0x0  nop
    ctx->pc = 0x27f8dcu;
    // NOP
label_27f8e0:
    // 0x27f8e0: 0x1c73e  dsrl32      $t8, $at, 28
    ctx->pc = 0x27f8e0u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 1) >> (32 + 28));
label_27f8e4:
    // 0x27f8e4: 0x295a0  .word       0x000295A0                   # add         $s2, $zero, $v0 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27f8e4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 18, (int32_t)result);     } }
label_27f8e8:
    // 0x27f8e8: 0x0  nop
    ctx->pc = 0x27f8e8u;
    // NOP
label_27f8ec:
    // 0x27f8ec: 0x0  nop
    ctx->pc = 0x27f8ecu;
    // NOP
label_27f8f0:
    // 0x27f8f0: 0x1c791  .word       0x0001C791                   # mthi        $zero # 0001C780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27f8f0u;
    ctx->hi = GPR_U64(ctx, 0);
label_27f8f4:
    // 0x27f8f4: 0x2e8c0  sll         $sp, $v0, 3
    ctx->pc = 0x27f8f4u;
    SET_GPR_S32(ctx, 29, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_27f8f8:
    // 0x27f8f8: 0x0  nop
    ctx->pc = 0x27f8f8u;
    // NOP
label_27f8fc:
    // 0x27f8fc: 0x0  nop
    ctx->pc = 0x27f8fcu;
    // NOP
label_27f900:
    // 0x27f900: 0x1c7ef  .word       0x0001C7EF                   # dsubu       $t8, $zero, $at # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27f900u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 0) - GPR_U64(ctx, 1));
label_27f904:
    // 0x27f904: 0x1e1a0  .word       0x0001E1A0                   # add         $gp, $zero, $at # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27f904u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 28, (int32_t)result);     } }
label_27f908:
    // 0x27f908: 0x0  nop
    ctx->pc = 0x27f908u;
    // NOP
label_27f90c:
    // 0x27f90c: 0x0  nop
    ctx->pc = 0x27f90cu;
    // NOP
label_27f910:
    // 0x27f910: 0x1c82c  dadd        $t9, $zero, $at
    ctx->pc = 0x27f910u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 1); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 25, r); }
label_27f914:
    // 0x27f914: 0x39580  sll         $s2, $v1, 22
    ctx->pc = 0x27f914u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 3), 22));
label_27f918:
    // 0x27f918: 0x0  nop
    ctx->pc = 0x27f918u;
    // NOP
label_27f91c:
    // 0x27f91c: 0x0  nop
    ctx->pc = 0x27f91cu;
    // NOP
label_27f920:
    // 0x27f920: 0x1594e  .word       0x0001594E                   # INVALID     $zero, $at, 0x594E # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27f920u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x27F920 raw=0x0001594E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27f924:
    // 0x27f924: 0x310e0  .word       0x000310E0                   # add         $v0, $zero, $v1 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27f924u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 2, (int32_t)result);     } }
label_27f928:
    // 0x27f928: 0x0  nop
    ctx->pc = 0x27f928u;
    // NOP
label_27f92c:
    // 0x27f92c: 0x0  nop
    ctx->pc = 0x27f92cu;
    // NOP
label_27f930:
    // 0x27f930: 0x159b1  tgeu        $zero, $at, 358
    ctx->pc = 0x27f930u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_27f934:
    // 0x27f934: 0x2bd10  .word       0x0002BD10                   # mfhi        $s7 # 00020500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27f934u;
    SET_GPR_U64(ctx, 23, ctx->hi);
label_27f938:
    // 0x27f938: 0x0  nop
    ctx->pc = 0x27f938u;
    // NOP
label_27f93c:
    // 0x27f93c: 0x0  nop
    ctx->pc = 0x27f93cu;
    // NOP
label_27f940:
    // 0x27f940: 0x15a09  .word       0x00015A09                   # jalr        $t3, $zero # 00010200 <InstrIdType: CPU_SPECIAL>
label_27f944:
    if (ctx->pc == 0x27F944u) {
        ctx->pc = 0x27F944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F940u;
        // 0x27f944: 0x37d50  .word       0x00037D50                   # mfhi        $t7 # 00030540 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 15, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = 0x27F948u;
        goto label_27f948;
    }
    ctx->pc = 0x27F940u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 11, 0x27F948u);
        ctx->pc = 0x27F944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F940u;
        // 0x27f944: 0x37d50  .word       0x00037D50                   # mfhi        $t7 # 00030540 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 15, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27F940u, 0x27F948u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x27F948u;
label_27f948:
    // 0x27f948: 0x0  nop
    ctx->pc = 0x27f948u;
    // NOP
label_27f94c:
    // 0x27f94c: 0x0  nop
    ctx->pc = 0x27f94cu;
    // NOP
label_27f950:
    // 0x27f950: 0x15a79  .word       0x00015A79                   # INVALID     $zero, $at, 0x5A79 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27f950u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x27F950 raw=0x00015A79"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27f954:
    // 0x27f954: 0x32900  sll         $a1, $v1, 4
    ctx->pc = 0x27f954u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_27f958:
    // 0x27f958: 0x0  nop
    ctx->pc = 0x27f958u;
    // NOP
label_27f95c:
    // 0x27f95c: 0x0  nop
    ctx->pc = 0x27f95cu;
    // NOP
label_27f960:
    // 0x27f960: 0x15adf  .word       0x00015ADF                   # ddivu       $t3, $zero, $at # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27f960u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x27F960 raw=0x00015ADF"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27f964:
    // 0x27f964: 0x30430  tge         $zero, $v1, 16
    ctx->pc = 0x27f964u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_27f968:
    // 0x27f968: 0x0  nop
    ctx->pc = 0x27f968u;
    // NOP
label_27f96c:
    // 0x27f96c: 0x0  nop
    ctx->pc = 0x27f96cu;
    // NOP
label_27f970:
    // 0x27f970: 0x15b40  sll         $t3, $at, 13
    ctx->pc = 0x27f970u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 1), 13));
label_27f974:
    // 0x27f974: 0x34b80  sll         $t1, $v1, 14
    ctx->pc = 0x27f974u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 3), 14));
label_27f978:
    // 0x27f978: 0x0  nop
    ctx->pc = 0x27f978u;
    // NOP
label_27f97c:
    // 0x27f97c: 0x0  nop
    ctx->pc = 0x27f97cu;
    // NOP
    ctx->pc = 0x27f980u;
    return;
}
