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


void FUN_0019b910_part8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x19efc0u: goto label_19efc0;
        case 0x19efc4u: goto label_19efc4;
        case 0x19efc8u: goto label_19efc8;
        case 0x19efccu: goto label_19efcc;
        case 0x19efd0u: goto label_19efd0;
        case 0x19efd4u: goto label_19efd4;
        case 0x19efd8u: goto label_19efd8;
        case 0x19efdcu: goto label_19efdc;
        case 0x19efe0u: goto label_19efe0;
        case 0x19efe4u: goto label_19efe4;
        case 0x19efe8u: goto label_19efe8;
        case 0x19efecu: goto label_19efec;
        case 0x19eff0u: goto label_19eff0;
        case 0x19eff4u: goto label_19eff4;
        case 0x19eff8u: goto label_19eff8;
        case 0x19effcu: goto label_19effc;
        case 0x19f000u: goto label_19f000;
        case 0x19f004u: goto label_19f004;
        case 0x19f008u: goto label_19f008;
        case 0x19f00cu: goto label_19f00c;
        case 0x19f010u: goto label_19f010;
        case 0x19f014u: goto label_19f014;
        case 0x19f018u: goto label_19f018;
        case 0x19f01cu: goto label_19f01c;
        case 0x19f020u: goto label_19f020;
        case 0x19f024u: goto label_19f024;
        case 0x19f028u: goto label_19f028;
        case 0x19f02cu: goto label_19f02c;
        case 0x19f030u: goto label_19f030;
        case 0x19f034u: goto label_19f034;
        case 0x19f038u: goto label_19f038;
        case 0x19f03cu: goto label_19f03c;
        case 0x19f040u: goto label_19f040;
        case 0x19f044u: goto label_19f044;
        case 0x19f048u: goto label_19f048;
        case 0x19f04cu: goto label_19f04c;
        case 0x19f050u: goto label_19f050;
        case 0x19f054u: goto label_19f054;
        case 0x19f058u: goto label_19f058;
        case 0x19f05cu: goto label_19f05c;
        case 0x19f060u: goto label_19f060;
        case 0x19f064u: goto label_19f064;
        case 0x19f068u: goto label_19f068;
        case 0x19f06cu: goto label_19f06c;
        case 0x19f070u: goto label_19f070;
        case 0x19f074u: goto label_19f074;
        case 0x19f078u: goto label_19f078;
        case 0x19f07cu: goto label_19f07c;
        case 0x19f080u: goto label_19f080;
        case 0x19f084u: goto label_19f084;
        case 0x19f088u: goto label_19f088;
        case 0x19f08cu: goto label_19f08c;
        case 0x19f090u: goto label_19f090;
        case 0x19f094u: goto label_19f094;
        case 0x19f098u: goto label_19f098;
        case 0x19f09cu: goto label_19f09c;
        case 0x19f0a0u: goto label_19f0a0;
        case 0x19f0a4u: goto label_19f0a4;
        case 0x19f0a8u: goto label_19f0a8;
        case 0x19f0acu: goto label_19f0ac;
        case 0x19f0b0u: goto label_19f0b0;
        case 0x19f0b4u: goto label_19f0b4;
        case 0x19f0b8u: goto label_19f0b8;
        case 0x19f0bcu: goto label_19f0bc;
        case 0x19f0c0u: goto label_19f0c0;
        case 0x19f0c4u: goto label_19f0c4;
        case 0x19f0c8u: goto label_19f0c8;
        case 0x19f0ccu: goto label_19f0cc;
        case 0x19f0d0u: goto label_19f0d0;
        case 0x19f0d4u: goto label_19f0d4;
        case 0x19f0d8u: goto label_19f0d8;
        case 0x19f0dcu: goto label_19f0dc;
        case 0x19f0e0u: goto label_19f0e0;
        case 0x19f0e4u: goto label_19f0e4;
        case 0x19f0e8u: goto label_19f0e8;
        case 0x19f0ecu: goto label_19f0ec;
        case 0x19f0f0u: goto label_19f0f0;
        case 0x19f0f4u: goto label_19f0f4;
        case 0x19f0f8u: goto label_19f0f8;
        case 0x19f0fcu: goto label_19f0fc;
        case 0x19f100u: goto label_19f100;
        case 0x19f104u: goto label_19f104;
        case 0x19f108u: goto label_19f108;
        case 0x19f10cu: goto label_19f10c;
        case 0x19f110u: goto label_19f110;
        case 0x19f114u: goto label_19f114;
        case 0x19f118u: goto label_19f118;
        case 0x19f11cu: goto label_19f11c;
        case 0x19f120u: goto label_19f120;
        case 0x19f124u: goto label_19f124;
        case 0x19f128u: goto label_19f128;
        case 0x19f12cu: goto label_19f12c;
        case 0x19f130u: goto label_19f130;
        case 0x19f134u: goto label_19f134;
        case 0x19f138u: goto label_19f138;
        case 0x19f13cu: goto label_19f13c;
        case 0x19f140u: goto label_19f140;
        case 0x19f144u: goto label_19f144;
        case 0x19f148u: goto label_19f148;
        case 0x19f14cu: goto label_19f14c;
        case 0x19f150u: goto label_19f150;
        case 0x19f154u: goto label_19f154;
        case 0x19f158u: goto label_19f158;
        case 0x19f15cu: goto label_19f15c;
        case 0x19f160u: goto label_19f160;
        case 0x19f164u: goto label_19f164;
        case 0x19f168u: goto label_19f168;
        case 0x19f16cu: goto label_19f16c;
        case 0x19f170u: goto label_19f170;
        case 0x19f174u: goto label_19f174;
        case 0x19f178u: goto label_19f178;
        case 0x19f17cu: goto label_19f17c;
        case 0x19f180u: goto label_19f180;
        case 0x19f184u: goto label_19f184;
        case 0x19f188u: goto label_19f188;
        case 0x19f18cu: goto label_19f18c;
        case 0x19f190u: goto label_19f190;
        case 0x19f194u: goto label_19f194;
        case 0x19f198u: goto label_19f198;
        case 0x19f19cu: goto label_19f19c;
        case 0x19f1a0u: goto label_19f1a0;
        case 0x19f1a4u: goto label_19f1a4;
        case 0x19f1a8u: goto label_19f1a8;
        case 0x19f1acu: goto label_19f1ac;
        case 0x19f1b0u: goto label_19f1b0;
        case 0x19f1b4u: goto label_19f1b4;
        case 0x19f1b8u: goto label_19f1b8;
        case 0x19f1bcu: goto label_19f1bc;
        case 0x19f1c0u: goto label_19f1c0;
        case 0x19f1c4u: goto label_19f1c4;
        case 0x19f1c8u: goto label_19f1c8;
        case 0x19f1ccu: goto label_19f1cc;
        case 0x19f1d0u: goto label_19f1d0;
        case 0x19f1d4u: goto label_19f1d4;
        case 0x19f1d8u: goto label_19f1d8;
        case 0x19f1dcu: goto label_19f1dc;
        case 0x19f1e0u: goto label_19f1e0;
        case 0x19f1e4u: goto label_19f1e4;
        case 0x19f1e8u: goto label_19f1e8;
        case 0x19f1ecu: goto label_19f1ec;
        case 0x19f1f0u: goto label_19f1f0;
        case 0x19f1f4u: goto label_19f1f4;
        case 0x19f1f8u: goto label_19f1f8;
        case 0x19f1fcu: goto label_19f1fc;
        case 0x19f200u: goto label_19f200;
        case 0x19f204u: goto label_19f204;
        case 0x19f208u: goto label_19f208;
        case 0x19f20cu: goto label_19f20c;
        case 0x19f210u: goto label_19f210;
        case 0x19f214u: goto label_19f214;
        case 0x19f218u: goto label_19f218;
        case 0x19f21cu: goto label_19f21c;
        case 0x19f220u: goto label_19f220;
        case 0x19f224u: goto label_19f224;
        case 0x19f228u: goto label_19f228;
        case 0x19f22cu: goto label_19f22c;
        case 0x19f230u: goto label_19f230;
        case 0x19f234u: goto label_19f234;
        case 0x19f238u: goto label_19f238;
        case 0x19f23cu: goto label_19f23c;
        case 0x19f240u: goto label_19f240;
        case 0x19f244u: goto label_19f244;
        case 0x19f248u: goto label_19f248;
        case 0x19f24cu: goto label_19f24c;
        case 0x19f250u: goto label_19f250;
        case 0x19f254u: goto label_19f254;
        case 0x19f258u: goto label_19f258;
        case 0x19f25cu: goto label_19f25c;
        case 0x19f260u: goto label_19f260;
        case 0x19f264u: goto label_19f264;
        case 0x19f268u: goto label_19f268;
        case 0x19f26cu: goto label_19f26c;
        case 0x19f270u: goto label_19f270;
        case 0x19f274u: goto label_19f274;
        case 0x19f278u: goto label_19f278;
        case 0x19f27cu: goto label_19f27c;
        case 0x19f280u: goto label_19f280;
        case 0x19f284u: goto label_19f284;
        case 0x19f288u: goto label_19f288;
        case 0x19f28cu: goto label_19f28c;
        case 0x19f290u: goto label_19f290;
        case 0x19f294u: goto label_19f294;
        case 0x19f298u: goto label_19f298;
        case 0x19f29cu: goto label_19f29c;
        case 0x19f2a0u: goto label_19f2a0;
        case 0x19f2a4u: goto label_19f2a4;
        case 0x19f2a8u: goto label_19f2a8;
        case 0x19f2acu: goto label_19f2ac;
        case 0x19f2b0u: goto label_19f2b0;
        case 0x19f2b4u: goto label_19f2b4;
        case 0x19f2b8u: goto label_19f2b8;
        case 0x19f2bcu: goto label_19f2bc;
        case 0x19f2c0u: goto label_19f2c0;
        case 0x19f2c4u: goto label_19f2c4;
        case 0x19f2c8u: goto label_19f2c8;
        case 0x19f2ccu: goto label_19f2cc;
        case 0x19f2d0u: goto label_19f2d0;
        case 0x19f2d4u: goto label_19f2d4;
        case 0x19f2d8u: goto label_19f2d8;
        case 0x19f2dcu: goto label_19f2dc;
        case 0x19f2e0u: goto label_19f2e0;
        case 0x19f2e4u: goto label_19f2e4;
        case 0x19f2e8u: goto label_19f2e8;
        case 0x19f2ecu: goto label_19f2ec;
        case 0x19f2f0u: goto label_19f2f0;
        case 0x19f2f4u: goto label_19f2f4;
        case 0x19f2f8u: goto label_19f2f8;
        case 0x19f2fcu: goto label_19f2fc;
        case 0x19f300u: goto label_19f300;
        case 0x19f304u: goto label_19f304;
        case 0x19f308u: goto label_19f308;
        case 0x19f30cu: goto label_19f30c;
        case 0x19f310u: goto label_19f310;
        case 0x19f314u: goto label_19f314;
        case 0x19f318u: goto label_19f318;
        case 0x19f31cu: goto label_19f31c;
        case 0x19f320u: goto label_19f320;
        case 0x19f324u: goto label_19f324;
        case 0x19f328u: goto label_19f328;
        case 0x19f32cu: goto label_19f32c;
        case 0x19f330u: goto label_19f330;
        case 0x19f334u: goto label_19f334;
        case 0x19f338u: goto label_19f338;
        case 0x19f33cu: goto label_19f33c;
        case 0x19f340u: goto label_19f340;
        case 0x19f344u: goto label_19f344;
        case 0x19f348u: goto label_19f348;
        case 0x19f34cu: goto label_19f34c;
        case 0x19f350u: goto label_19f350;
        case 0x19f354u: goto label_19f354;
        case 0x19f358u: goto label_19f358;
        case 0x19f35cu: goto label_19f35c;
        case 0x19f360u: goto label_19f360;
        case 0x19f364u: goto label_19f364;
        case 0x19f368u: goto label_19f368;
        case 0x19f36cu: goto label_19f36c;
        case 0x19f370u: goto label_19f370;
        case 0x19f374u: goto label_19f374;
        case 0x19f378u: goto label_19f378;
        case 0x19f37cu: goto label_19f37c;
        case 0x19f380u: goto label_19f380;
        case 0x19f384u: goto label_19f384;
        case 0x19f388u: goto label_19f388;
        case 0x19f38cu: goto label_19f38c;
        case 0x19f390u: goto label_19f390;
        case 0x19f394u: goto label_19f394;
        case 0x19f398u: goto label_19f398;
        case 0x19f39cu: goto label_19f39c;
        case 0x19f3a0u: goto label_19f3a0;
        case 0x19f3a4u: goto label_19f3a4;
        case 0x19f3a8u: goto label_19f3a8;
        case 0x19f3acu: goto label_19f3ac;
        case 0x19f3b0u: goto label_19f3b0;
        case 0x19f3b4u: goto label_19f3b4;
        case 0x19f3b8u: goto label_19f3b8;
        case 0x19f3bcu: goto label_19f3bc;
        case 0x19f3c0u: goto label_19f3c0;
        case 0x19f3c4u: goto label_19f3c4;
        case 0x19f3c8u: goto label_19f3c8;
        case 0x19f3ccu: goto label_19f3cc;
        case 0x19f3d0u: goto label_19f3d0;
        case 0x19f3d4u: goto label_19f3d4;
        case 0x19f3d8u: goto label_19f3d8;
        case 0x19f3dcu: goto label_19f3dc;
        case 0x19f3e0u: goto label_19f3e0;
        case 0x19f3e4u: goto label_19f3e4;
        case 0x19f3e8u: goto label_19f3e8;
        case 0x19f3ecu: goto label_19f3ec;
        case 0x19f3f0u: goto label_19f3f0;
        case 0x19f3f4u: goto label_19f3f4;
        case 0x19f3f8u: goto label_19f3f8;
        case 0x19f3fcu: goto label_19f3fc;
        case 0x19f400u: goto label_19f400;
        case 0x19f404u: goto label_19f404;
        case 0x19f408u: goto label_19f408;
        case 0x19f40cu: goto label_19f40c;
        case 0x19f410u: goto label_19f410;
        case 0x19f414u: goto label_19f414;
        case 0x19f418u: goto label_19f418;
        case 0x19f41cu: goto label_19f41c;
        case 0x19f420u: goto label_19f420;
        case 0x19f424u: goto label_19f424;
        case 0x19f428u: goto label_19f428;
        case 0x19f42cu: goto label_19f42c;
        case 0x19f430u: goto label_19f430;
        case 0x19f434u: goto label_19f434;
        case 0x19f438u: goto label_19f438;
        case 0x19f43cu: goto label_19f43c;
        case 0x19f440u: goto label_19f440;
        case 0x19f444u: goto label_19f444;
        case 0x19f448u: goto label_19f448;
        case 0x19f44cu: goto label_19f44c;
        case 0x19f450u: goto label_19f450;
        case 0x19f454u: goto label_19f454;
        case 0x19f458u: goto label_19f458;
        case 0x19f45cu: goto label_19f45c;
        case 0x19f460u: goto label_19f460;
        case 0x19f464u: goto label_19f464;
        case 0x19f468u: goto label_19f468;
        case 0x19f46cu: goto label_19f46c;
        case 0x19f470u: goto label_19f470;
        case 0x19f474u: goto label_19f474;
        case 0x19f478u: goto label_19f478;
        case 0x19f47cu: goto label_19f47c;
        case 0x19f480u: goto label_19f480;
        case 0x19f484u: goto label_19f484;
        case 0x19f488u: goto label_19f488;
        case 0x19f48cu: goto label_19f48c;
        case 0x19f490u: goto label_19f490;
        case 0x19f494u: goto label_19f494;
        case 0x19f498u: goto label_19f498;
        case 0x19f49cu: goto label_19f49c;
        case 0x19f4a0u: goto label_19f4a0;
        case 0x19f4a4u: goto label_19f4a4;
        case 0x19f4a8u: goto label_19f4a8;
        case 0x19f4acu: goto label_19f4ac;
        case 0x19f4b0u: goto label_19f4b0;
        case 0x19f4b4u: goto label_19f4b4;
        case 0x19f4b8u: goto label_19f4b8;
        case 0x19f4bcu: goto label_19f4bc;
        case 0x19f4c0u: goto label_19f4c0;
        case 0x19f4c4u: goto label_19f4c4;
        case 0x19f4c8u: goto label_19f4c8;
        case 0x19f4ccu: goto label_19f4cc;
        case 0x19f4d0u: goto label_19f4d0;
        case 0x19f4d4u: goto label_19f4d4;
        case 0x19f4d8u: goto label_19f4d8;
        case 0x19f4dcu: goto label_19f4dc;
        case 0x19f4e0u: goto label_19f4e0;
        case 0x19f4e4u: goto label_19f4e4;
        case 0x19f4e8u: goto label_19f4e8;
        case 0x19f4ecu: goto label_19f4ec;
        case 0x19f4f0u: goto label_19f4f0;
        case 0x19f4f4u: goto label_19f4f4;
        case 0x19f4f8u: goto label_19f4f8;
        case 0x19f4fcu: goto label_19f4fc;
        case 0x19f500u: goto label_19f500;
        case 0x19f504u: goto label_19f504;
        case 0x19f508u: goto label_19f508;
        case 0x19f50cu: goto label_19f50c;
        case 0x19f510u: goto label_19f510;
        case 0x19f514u: goto label_19f514;
        case 0x19f518u: goto label_19f518;
        case 0x19f51cu: goto label_19f51c;
        case 0x19f520u: goto label_19f520;
        case 0x19f524u: goto label_19f524;
        case 0x19f528u: goto label_19f528;
        case 0x19f52cu: goto label_19f52c;
        case 0x19f530u: goto label_19f530;
        case 0x19f534u: goto label_19f534;
        case 0x19f538u: goto label_19f538;
        case 0x19f53cu: goto label_19f53c;
        case 0x19f540u: goto label_19f540;
        case 0x19f544u: goto label_19f544;
        case 0x19f548u: goto label_19f548;
        case 0x19f54cu: goto label_19f54c;
        case 0x19f550u: goto label_19f550;
        case 0x19f554u: goto label_19f554;
        case 0x19f558u: goto label_19f558;
        case 0x19f55cu: goto label_19f55c;
        case 0x19f560u: goto label_19f560;
        case 0x19f564u: goto label_19f564;
        case 0x19f568u: goto label_19f568;
        case 0x19f56cu: goto label_19f56c;
        case 0x19f570u: goto label_19f570;
        case 0x19f574u: goto label_19f574;
        case 0x19f578u: goto label_19f578;
        case 0x19f57cu: goto label_19f57c;
        case 0x19f580u: goto label_19f580;
        case 0x19f584u: goto label_19f584;
        case 0x19f588u: goto label_19f588;
        case 0x19f58cu: goto label_19f58c;
        case 0x19f590u: goto label_19f590;
        case 0x19f594u: goto label_19f594;
        case 0x19f598u: goto label_19f598;
        case 0x19f59cu: goto label_19f59c;
        case 0x19f5a0u: goto label_19f5a0;
        case 0x19f5a4u: goto label_19f5a4;
        case 0x19f5a8u: goto label_19f5a8;
        case 0x19f5acu: goto label_19f5ac;
        case 0x19f5b0u: goto label_19f5b0;
        case 0x19f5b4u: goto label_19f5b4;
        case 0x19f5b8u: goto label_19f5b8;
        case 0x19f5bcu: goto label_19f5bc;
        case 0x19f5c0u: goto label_19f5c0;
        case 0x19f5c4u: goto label_19f5c4;
        case 0x19f5c8u: goto label_19f5c8;
        case 0x19f5ccu: goto label_19f5cc;
        case 0x19f5d0u: goto label_19f5d0;
        case 0x19f5d4u: goto label_19f5d4;
        case 0x19f5d8u: goto label_19f5d8;
        case 0x19f5dcu: goto label_19f5dc;
        case 0x19f5e0u: goto label_19f5e0;
        case 0x19f5e4u: goto label_19f5e4;
        case 0x19f5e8u: goto label_19f5e8;
        case 0x19f5ecu: goto label_19f5ec;
        case 0x19f5f0u: goto label_19f5f0;
        case 0x19f5f4u: goto label_19f5f4;
        case 0x19f5f8u: goto label_19f5f8;
        case 0x19f5fcu: goto label_19f5fc;
        case 0x19f600u: goto label_19f600;
        case 0x19f604u: goto label_19f604;
        case 0x19f608u: goto label_19f608;
        case 0x19f60cu: goto label_19f60c;
        case 0x19f610u: goto label_19f610;
        case 0x19f614u: goto label_19f614;
        case 0x19f618u: goto label_19f618;
        case 0x19f61cu: goto label_19f61c;
        case 0x19f620u: goto label_19f620;
        case 0x19f624u: goto label_19f624;
        case 0x19f628u: goto label_19f628;
        case 0x19f62cu: goto label_19f62c;
        case 0x19f630u: goto label_19f630;
        case 0x19f634u: goto label_19f634;
        case 0x19f638u: goto label_19f638;
        case 0x19f63cu: goto label_19f63c;
        case 0x19f640u: goto label_19f640;
        case 0x19f644u: goto label_19f644;
        case 0x19f648u: goto label_19f648;
        case 0x19f64cu: goto label_19f64c;
        case 0x19f650u: goto label_19f650;
        case 0x19f654u: goto label_19f654;
        case 0x19f658u: goto label_19f658;
        case 0x19f65cu: goto label_19f65c;
        case 0x19f660u: goto label_19f660;
        case 0x19f664u: goto label_19f664;
        case 0x19f668u: goto label_19f668;
        case 0x19f66cu: goto label_19f66c;
        case 0x19f670u: goto label_19f670;
        case 0x19f674u: goto label_19f674;
        case 0x19f678u: goto label_19f678;
        case 0x19f67cu: goto label_19f67c;
        case 0x19f680u: goto label_19f680;
        case 0x19f684u: goto label_19f684;
        case 0x19f688u: goto label_19f688;
        case 0x19f68cu: goto label_19f68c;
        case 0x19f690u: goto label_19f690;
        case 0x19f694u: goto label_19f694;
        case 0x19f698u: goto label_19f698;
        case 0x19f69cu: goto label_19f69c;
        case 0x19f6a0u: goto label_19f6a0;
        case 0x19f6a4u: goto label_19f6a4;
        case 0x19f6a8u: goto label_19f6a8;
        case 0x19f6acu: goto label_19f6ac;
        case 0x19f6b0u: goto label_19f6b0;
        case 0x19f6b4u: goto label_19f6b4;
        case 0x19f6b8u: goto label_19f6b8;
        case 0x19f6bcu: goto label_19f6bc;
        case 0x19f6c0u: goto label_19f6c0;
        case 0x19f6c4u: goto label_19f6c4;
        case 0x19f6c8u: goto label_19f6c8;
        case 0x19f6ccu: goto label_19f6cc;
        case 0x19f6d0u: goto label_19f6d0;
        case 0x19f6d4u: goto label_19f6d4;
        case 0x19f6d8u: goto label_19f6d8;
        case 0x19f6dcu: goto label_19f6dc;
        case 0x19f6e0u: goto label_19f6e0;
        case 0x19f6e4u: goto label_19f6e4;
        case 0x19f6e8u: goto label_19f6e8;
        case 0x19f6ecu: goto label_19f6ec;
        case 0x19f6f0u: goto label_19f6f0;
        case 0x19f6f4u: goto label_19f6f4;
        case 0x19f6f8u: goto label_19f6f8;
        case 0x19f6fcu: goto label_19f6fc;
        case 0x19f700u: goto label_19f700;
        case 0x19f704u: goto label_19f704;
        case 0x19f708u: goto label_19f708;
        case 0x19f70cu: goto label_19f70c;
        case 0x19f710u: goto label_19f710;
        case 0x19f714u: goto label_19f714;
        case 0x19f718u: goto label_19f718;
        case 0x19f71cu: goto label_19f71c;
        case 0x19f720u: goto label_19f720;
        case 0x19f724u: goto label_19f724;
        case 0x19f728u: goto label_19f728;
        case 0x19f72cu: goto label_19f72c;
        case 0x19f730u: goto label_19f730;
        case 0x19f734u: goto label_19f734;
        case 0x19f738u: goto label_19f738;
        case 0x19f73cu: goto label_19f73c;
        case 0x19f740u: goto label_19f740;
        case 0x19f744u: goto label_19f744;
        case 0x19f748u: goto label_19f748;
        case 0x19f74cu: goto label_19f74c;
        case 0x19f750u: goto label_19f750;
        case 0x19f754u: goto label_19f754;
        case 0x19f758u: goto label_19f758;
        case 0x19f75cu: goto label_19f75c;
        case 0x19f760u: goto label_19f760;
        case 0x19f764u: goto label_19f764;
        case 0x19f768u: goto label_19f768;
        case 0x19f76cu: goto label_19f76c;
        case 0x19f770u: goto label_19f770;
        case 0x19f774u: goto label_19f774;
        case 0x19f778u: goto label_19f778;
        case 0x19f77cu: goto label_19f77c;
        case 0x19f780u: goto label_19f780;
        case 0x19f784u: goto label_19f784;
        case 0x19f788u: goto label_19f788;
        case 0x19f78cu: goto label_19f78c;
        default: return;
    }

label_19efc0:
    // 0x19efc0: 0x56600034  bnel        $s3, $zero, . + 4 + (0x34 << 2)
label_19efc4:
    if (ctx->pc == 0x19EFC4u) {
        ctx->pc = 0x19EFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EFC0u;
        // 0x19efc4: 0x1080c0  sll         $s0, $s0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19EFC8u;
        goto label_19efc8;
    }
    ctx->pc = 0x19EFC0u;
    {
        const bool branch_taken_0x19efc0 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x19efc0) {
            ctx->pc = 0x19EFC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19EFC0u;
            // 0x19efc4: 0x1080c0  sll         $s0, $s0, 3 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19F094u;
            goto label_19f094;
        }
    }
    ctx->pc = 0x19EFC8u;
label_19efc8:
    // 0x19efc8: 0xc067dd2  jal         func_19F748
label_19efcc:
    if (ctx->pc == 0x19EFCCu) {
        ctx->pc = 0x19EFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EFC8u;
        // 0x19efcc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19EFD0u;
        goto label_19efd0;
    }
    ctx->pc = 0x19EFC8u;
    SET_GPR_U32(ctx, 31, 0x19EFD0u);
    ctx->pc = 0x19EFCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19EFC8u;
    // 0x19efcc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F748u;
    goto label_19f748;
    ctx->pc = 0x19EFD0u;
label_19efd0:
    // 0x19efd0: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x19efd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_19efd4:
    // 0x19efd4: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x19efd4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_19efd8:
    // 0x19efd8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x19efd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_19efdc:
    // 0x19efdc: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x19efdcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
label_19efe0:
    // 0x19efe0: 0x1000002b  b           . + 4 + (0x2B << 2)
label_19efe4:
    if (ctx->pc == 0x19EFE4u) {
        ctx->pc = 0x19EFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EFE0u;
        // 0x19efe4: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19EFE8u;
        goto label_19efe8;
    }
    ctx->pc = 0x19EFE0u;
    {
        const bool branch_taken_0x19efe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19EFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EFE0u;
        // 0x19efe4: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19efe0) {
            ctx->pc = 0x19F090u;
            goto label_19f090;
        }
    }
    ctx->pc = 0x19EFE8u;
label_19efe8:
    // 0x19efe8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x19efe8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_19efec:
    // 0x19efec: 0xc067dd2  jal         func_19F748
label_19eff0:
    if (ctx->pc == 0x19EFF0u) {
        ctx->pc = 0x19EFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EFECu;
        // 0x19eff0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19EFF4u;
        goto label_19eff4;
    }
    ctx->pc = 0x19EFECu;
    SET_GPR_U32(ctx, 31, 0x19EFF4u);
    ctx->pc = 0x19EFF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19EFECu;
    // 0x19eff0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F748u;
    goto label_19f748;
    ctx->pc = 0x19EFF4u;
label_19eff4:
    // 0x19eff4: 0x1088c0  sll         $s1, $s0, 3
    ctx->pc = 0x19eff4u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_19eff8:
    // 0x19eff8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x19eff8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_19effc:
    // 0x19effc: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x19effcu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_19f000:
    // 0x19f000: 0x2912821  addu        $a1, $s4, $s1
    ctx->pc = 0x19f000u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
label_19f004:
    // 0x19f004: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x19f004u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_19f008:
    // 0x19f008: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x19f008u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_19f00c:
    // 0x19f00c: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x19f00cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_19f010:
    // 0x19f010: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x19f010u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_19f014:
    // 0x19f014: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x19f014u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_19f018:
    // 0x19f018: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x19f018u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_19f01c:
    // 0x19f01c: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x19f01cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_19f020:
    // 0x19f020: 0x3c0502d  daddu       $t2, $fp, $zero
    ctx->pc = 0x19f020u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_19f024:
    // 0x19f024: 0xc067c40  jal         func_19F100
label_19f028:
    if (ctx->pc == 0x19F028u) {
        ctx->pc = 0x19F028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F024u;
        // 0x19f028: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F02Cu;
        goto label_19f02c;
    }
    ctx->pc = 0x19F024u;
    SET_GPR_U32(ctx, 31, 0x19F02Cu);
    ctx->pc = 0x19F028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F024u;
    // 0x19f028: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F100u;
    goto label_19f100;
    ctx->pc = 0x19F02Cu;
label_19f02c:
    // 0x19f02c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x19f02cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_19f030:
    // 0x19f030: 0xc067dd2  jal         func_19F748
label_19f034:
    if (ctx->pc == 0x19F034u) {
        ctx->pc = 0x19F034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F030u;
        // 0x19f034: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F038u;
        goto label_19f038;
    }
    ctx->pc = 0x19F030u;
    SET_GPR_U32(ctx, 31, 0x19F038u);
    ctx->pc = 0x19F034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F030u;
    // 0x19f034: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F748u;
    goto label_19f748;
    ctx->pc = 0x19F038u;
label_19f038:
    // 0x19f038: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x19f038u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_19f03c:
    // 0x19f03c: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x19f03cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_19f040:
    // 0x19f040: 0x2912821  addu        $a1, $s4, $s1
    ctx->pc = 0x19f040u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
label_19f044:
    // 0x19f044: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x19f044u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_19f048:
    // 0x19f048: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x19f048u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_19f04c:
    // 0x19f04c: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x19f04cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_19f050:
    // 0x19f050: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x19f050u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_19f054:
    // 0x19f054: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x19f054u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_19f058:
    // 0x19f058: 0x3c0502d  daddu       $t2, $fp, $zero
    ctx->pc = 0x19f058u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_19f05c:
    // 0x19f05c: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x19f05cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_19f060:
    // 0x19f060: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x19f060u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_19f064:
    // 0x19f064: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x19f064u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19f068:
    // 0x19f068: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x19f068u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_19f06c:
    // 0x19f06c: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x19f06cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_19f070:
    // 0x19f070: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x19f070u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_19f074:
    // 0x19f074: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x19f074u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_19f078:
    // 0x19f078: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x19f078u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_19f07c:
    // 0x19f07c: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x19f07cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_19f080:
    // 0x19f080: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x19f080u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_19f084:
    // 0x19f084: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x19f084u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_19f088:
    // 0x19f088: 0x8067c40  j           func_19F100
label_19f08c:
    if (ctx->pc == 0x19F08Cu) {
        ctx->pc = 0x19F08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F088u;
        // 0x19f08c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F090u;
        goto label_19f090;
    }
    ctx->pc = 0x19F088u;
    ctx->pc = 0x19F08Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F088u;
    // 0x19f08c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F100u;
    goto label_19f100;
    ctx->pc = 0x19F090u;
label_19f090:
    // 0x19f090: 0x1080c0  sll         $s0, $s0, 3
    ctx->pc = 0x19f090u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_19f094:
    // 0x19f094: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x19f094u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_19f098:
    // 0x19f098: 0x2908021  addu        $s0, $s4, $s0
    ctx->pc = 0x19f098u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
label_19f09c:
    // 0x19f09c: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x19f09cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_19f0a0:
    // 0x19f0a0: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x19f0a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_19f0a4:
    // 0x19f0a4: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x19f0a4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_19f0a8:
    // 0x19f0a8: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x19f0a8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_19f0ac:
    // 0x19f0ac: 0x3c0502d  daddu       $t2, $fp, $zero
    ctx->pc = 0x19f0acu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_19f0b0:
    // 0x19f0b0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x19f0b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19f0b4:
    // 0x19f0b4: 0xc067c40  jal         func_19F100
label_19f0b8:
    if (ctx->pc == 0x19F0B8u) {
        ctx->pc = 0x19F0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F0B4u;
        // 0x19f0b8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F0BCu;
        goto label_19f0bc;
    }
    ctx->pc = 0x19F0B4u;
    SET_GPR_U32(ctx, 31, 0x19F0BCu);
    ctx->pc = 0x19F0B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F0B4u;
    // 0x19f0b8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F100u;
    goto label_19f100;
    ctx->pc = 0x19F0BCu;
label_19f0bc:
    // 0x19f0bc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x19f0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_19f0c0:
    // 0x19f0c0: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x19f0c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_19f0c4:
    // 0x19f0c4: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x19f0c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
label_19f0c8:
    // 0x19f0c8: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x19f0c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
label_19f0cc:
    // 0x19f0cc: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x19f0ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_19f0d0:
    // 0x19f0d0: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x19f0d0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_19f0d4:
    // 0x19f0d4: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x19f0d4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_19f0d8:
    // 0x19f0d8: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x19f0d8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_19f0dc:
    // 0x19f0dc: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x19f0dcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_19f0e0:
    // 0x19f0e0: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x19f0e0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_19f0e4:
    // 0x19f0e4: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x19f0e4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_19f0e8:
    // 0x19f0e8: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x19f0e8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_19f0ec:
    // 0x19f0ec: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x19f0ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_19f0f0:
    // 0x19f0f0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x19f0f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_19f0f4:
    // 0x19f0f4: 0x3e00008  jr          $ra
label_19f0f8:
    if (ctx->pc == 0x19F0F8u) {
        ctx->pc = 0x19F0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F0F4u;
        // 0x19f0f8: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F0FCu;
        goto label_19f0fc;
    }
    ctx->pc = 0x19F0F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19F0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F0F4u;
        // 0x19f0f8: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19F0F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19F0FCu;
label_19f0fc:
    // 0x19f0fc: 0x0  nop
    ctx->pc = 0x19f0fcu;
    // NOP
label_19f100:
    // 0x19f100: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x19f100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_19f104:
    // 0x19f104: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x19f104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_19f108:
    // 0x19f108: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x19f108u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_19f10c:
    // 0x19f10c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x19f10cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19f110:
    // 0x19f110: 0xffbe0080  sd          $fp, 0x80($sp)
    ctx->pc = 0x19f110u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
label_19f114:
    // 0x19f114: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x19f114u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_19f118:
    // 0x19f118: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x19f118u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
label_19f11c:
    // 0x19f11c: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x19f11cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_19f120:
    // 0x19f120: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x19f120u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
label_19f124:
    // 0x19f124: 0x120b82d  daddu       $s7, $t1, $zero
    ctx->pc = 0x19f124u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_19f128:
    // 0x19f128: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x19f128u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
label_19f12c:
    // 0x19f12c: 0x140b02d  daddu       $s6, $t2, $zero
    ctx->pc = 0x19f12cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_19f130:
    // 0x19f130: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x19f130u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_19f134:
    // 0x19f134: 0x160a82d  daddu       $s5, $t3, $zero
    ctx->pc = 0x19f134u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_19f138:
    // 0x19f138: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x19f138u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_19f13c:
    // 0x19f13c: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x19f13cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_19f140:
    // 0x19f140: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19f140u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_19f144:
    // 0x19f144: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x19f144u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_19f148:
    // 0x19f148: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x19f148u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_19f14c:
    // 0x19f14c: 0xc067cf6  jal         func_19F3D8
label_19f150:
    if (ctx->pc == 0x19F150u) {
        ctx->pc = 0x19F150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F14Cu;
        // 0x19f150: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F154u;
        goto label_19f154;
    }
    ctx->pc = 0x19F14Cu;
    SET_GPR_U32(ctx, 31, 0x19F154u);
    ctx->pc = 0x19F150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F14Cu;
    // 0x19f150: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F3D8u;
    goto label_19f3d8;
    ctx->pc = 0x19F154u;
label_19f154:
    // 0x19f154: 0x12200007  beqz        $s1, . + 4 + (0x7 << 2)
label_19f158:
    if (ctx->pc == 0x19F158u) {
        ctx->pc = 0x19F158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F154u;
        // 0x19f158: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F15Cu;
        goto label_19f15c;
    }
    ctx->pc = 0x19F154u;
    {
        const bool branch_taken_0x19f154 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F154u;
        // 0x19f158: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f154) {
            ctx->pc = 0x19F174u;
            goto label_19f174;
        }
    }
    ctx->pc = 0x19F15Cu;
label_19f15c:
    // 0x19f15c: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
label_19f160:
    if (ctx->pc == 0x19F160u) {
        ctx->pc = 0x19F160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F15Cu;
        // 0x19f160: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F164u;
        goto label_19f164;
    }
    ctx->pc = 0x19F15Cu;
    {
        const bool branch_taken_0x19f15c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F15Cu;
        // 0x19f160: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f15c) {
            ctx->pc = 0x19F174u;
            goto label_19f174;
        }
    }
    ctx->pc = 0x19F164u;
label_19f164:
    // 0x19f164: 0xc067dd2  jal         func_19F748
label_19f168:
    if (ctx->pc == 0x19F168u) {
        ctx->pc = 0x19F168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F164u;
        // 0x19f168: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F16Cu;
        goto label_19f16c;
    }
    ctx->pc = 0x19F164u;
    SET_GPR_U32(ctx, 31, 0x19F16Cu);
    ctx->pc = 0x19F168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F164u;
    // 0x19f168: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F748u;
    goto label_19f748;
    ctx->pc = 0x19F16Cu;
label_19f16c:
    // 0x19f16c: 0x10000002  b           . + 4 + (0x2 << 2)
label_19f170:
    if (ctx->pc == 0x19F170u) {
        ctx->pc = 0x19F170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F16Cu;
        // 0x19f170: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F174u;
        goto label_19f174;
    }
    ctx->pc = 0x19F16Cu;
    {
        const bool branch_taken_0x19f16c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F16Cu;
        // 0x19f170: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f16c) {
            ctx->pc = 0x19F178u;
            goto label_19f178;
        }
    }
    ctx->pc = 0x19F174u;
label_19f174:
    // 0x19f174: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x19f174u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19f178:
    // 0x19f178: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x19f178u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_19f17c:
    // 0x19f17c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x19f17cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19f180:
    // 0x19f180: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x19f180u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_19f184:
    // 0x19f184: 0xc067bb6  jal         func_19EED8
label_19f188:
    if (ctx->pc == 0x19F188u) {
        ctx->pc = 0x19F188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F184u;
        // 0x19f188: 0x2a0402d  daddu       $t0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F18Cu;
        goto label_19f18c;
    }
    ctx->pc = 0x19F184u;
    SET_GPR_U32(ctx, 31, 0x19F18Cu);
    ctx->pc = 0x19F188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F184u;
    // 0x19f188: 0x2a0402d  daddu       $t0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EED8u;
    { ctx->pc = 0x19eed8; return; }
    ctx->pc = 0x19F18Cu;
label_19f18c:
    // 0x19f18c: 0x12e00005  beqz        $s7, . + 4 + (0x5 << 2)
label_19f190:
    if (ctx->pc == 0x19F190u) {
        ctx->pc = 0x19F190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F18Cu;
        // 0x19f190: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F194u;
        goto label_19f194;
    }
    ctx->pc = 0x19F18Cu;
    {
        const bool branch_taken_0x19f18c = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F18Cu;
        // 0x19f190: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f18c) {
            ctx->pc = 0x19F1A4u;
            goto label_19f1a4;
        }
    }
    ctx->pc = 0x19F194u;
label_19f194:
    // 0x19f194: 0xc0678a4  jal         func_19E290
label_19f198:
    if (ctx->pc == 0x19F198u) {
        ctx->pc = 0x19F198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F194u;
        // 0x19f198: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F19Cu;
        goto label_19f19c;
    }
    ctx->pc = 0x19F194u;
    SET_GPR_U32(ctx, 31, 0x19F19Cu);
    ctx->pc = 0x19F198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F194u;
    // 0x19f198: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19E290u;
    { ctx->pc = 0x19e290; return; }
    ctx->pc = 0x19F19Cu;
label_19f19c:
    // 0x19f19c: 0xafc20000  sw          $v0, 0x0($fp)
    ctx->pc = 0x19f19cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 2));
label_19f1a0:
    // 0x19f1a0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x19f1a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_19f1a4:
    // 0x19f1a4: 0xc067cf6  jal         func_19F3D8
label_19f1a8:
    if (ctx->pc == 0x19F1A8u) {
        ctx->pc = 0x19F1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F1A4u;
        // 0x19f1a8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F1ACu;
        goto label_19f1ac;
    }
    ctx->pc = 0x19F1A4u;
    SET_GPR_U32(ctx, 31, 0x19F1ACu);
    ctx->pc = 0x19F1A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F1A4u;
    // 0x19f1a8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F3D8u;
    goto label_19f3d8;
    ctx->pc = 0x19F1ACu;
label_19f1ac:
    // 0x19f1ac: 0x12800007  beqz        $s4, . + 4 + (0x7 << 2)
label_19f1b0:
    if (ctx->pc == 0x19F1B0u) {
        ctx->pc = 0x19F1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F1ACu;
        // 0x19f1b0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F1B4u;
        goto label_19f1b4;
    }
    ctx->pc = 0x19F1ACu;
    {
        const bool branch_taken_0x19f1ac = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F1ACu;
        // 0x19f1b0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f1ac) {
            ctx->pc = 0x19F1CCu;
            goto label_19f1cc;
        }
    }
    ctx->pc = 0x19F1B4u;
label_19f1b4:
    // 0x19f1b4: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
label_19f1b8:
    if (ctx->pc == 0x19F1B8u) {
        ctx->pc = 0x19F1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F1B4u;
        // 0x19f1b8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F1BCu;
        goto label_19f1bc;
    }
    ctx->pc = 0x19F1B4u;
    {
        const bool branch_taken_0x19f1b4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F1B4u;
        // 0x19f1b8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f1b4) {
            ctx->pc = 0x19F1CCu;
            goto label_19f1cc;
        }
    }
    ctx->pc = 0x19F1BCu;
label_19f1bc:
    // 0x19f1bc: 0xc067dd2  jal         func_19F748
label_19f1c0:
    if (ctx->pc == 0x19F1C0u) {
        ctx->pc = 0x19F1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F1BCu;
        // 0x19f1c0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F1C4u;
        goto label_19f1c4;
    }
    ctx->pc = 0x19F1BCu;
    SET_GPR_U32(ctx, 31, 0x19F1C4u);
    ctx->pc = 0x19F1C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F1BCu;
    // 0x19f1c0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F748u;
    goto label_19f748;
    ctx->pc = 0x19F1C4u;
label_19f1c4:
    // 0x19f1c4: 0x10000002  b           . + 4 + (0x2 << 2)
label_19f1c8:
    if (ctx->pc == 0x19F1C8u) {
        ctx->pc = 0x19F1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F1C4u;
        // 0x19f1c8: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F1CCu;
        goto label_19f1cc;
    }
    ctx->pc = 0x19F1C4u;
    {
        const bool branch_taken_0x19f1c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F1C4u;
        // 0x19f1c8: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f1c4) {
            ctx->pc = 0x19F1D0u;
            goto label_19f1d0;
        }
    }
    ctx->pc = 0x19F1CCu;
label_19f1cc:
    // 0x19f1cc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x19f1ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19f1d0:
    // 0x19f1d0: 0x12c00004  beqz        $s6, . + 4 + (0x4 << 2)
label_19f1d4:
    if (ctx->pc == 0x19F1D4u) {
        ctx->pc = 0x19F1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F1D0u;
        // 0x19f1d4: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F1D8u;
        goto label_19f1d8;
    }
    ctx->pc = 0x19F1D0u;
    {
        const bool branch_taken_0x19f1d0 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F1D0u;
        // 0x19f1d4: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f1d0) {
            ctx->pc = 0x19F1E4u;
            goto label_19f1e4;
        }
    }
    ctx->pc = 0x19F1D8u;
label_19f1d8:
    // 0x19f1d8: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x19f1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_19f1dc:
    // 0x19f1dc: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x19f1dcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_19f1e0:
    // 0x19f1e0: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x19f1e0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
label_19f1e4:
    // 0x19f1e4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x19f1e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19f1e8:
    // 0x19f1e8: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x19f1e8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_19f1ec:
    // 0x19f1ec: 0xc067bb6  jal         func_19EED8
label_19f1f0:
    if (ctx->pc == 0x19F1F0u) {
        ctx->pc = 0x19F1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F1ECu;
        // 0x19f1f0: 0x26440004  addiu       $a0, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F1F4u;
        goto label_19f1f4;
    }
    ctx->pc = 0x19F1ECu;
    SET_GPR_U32(ctx, 31, 0x19F1F4u);
    ctx->pc = 0x19F1F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F1ECu;
    // 0x19f1f0: 0x26440004  addiu       $a0, $s2, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EED8u;
    { ctx->pc = 0x19eed8; return; }
    ctx->pc = 0x19F1F4u;
label_19f1f4:
    // 0x19f1f4: 0x12c00004  beqz        $s6, . + 4 + (0x4 << 2)
label_19f1f8:
    if (ctx->pc == 0x19F1F8u) {
        ctx->pc = 0x19F1FCu;
        goto label_19f1fc;
    }
    ctx->pc = 0x19F1F4u;
    {
        const bool branch_taken_0x19f1f4 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x19f1f4) {
            ctx->pc = 0x19F208u;
            goto label_19f208;
        }
    }
    ctx->pc = 0x19F1FCu;
label_19f1fc:
    // 0x19f1fc: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x19f1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_19f200:
    // 0x19f200: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x19f200u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_19f204:
    // 0x19f204: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x19f204u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
label_19f208:
    // 0x19f208: 0x12e00005  beqz        $s7, . + 4 + (0x5 << 2)
label_19f20c:
    if (ctx->pc == 0x19F20Cu) {
        ctx->pc = 0x19F20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F208u;
        // 0x19f20c: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F210u;
        goto label_19f210;
    }
    ctx->pc = 0x19F208u;
    {
        const bool branch_taken_0x19f208 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F208u;
        // 0x19f20c: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f208) {
            ctx->pc = 0x19F220u;
            goto label_19f220;
        }
    }
    ctx->pc = 0x19F210u;
label_19f210:
    // 0x19f210: 0xc0678a4  jal         func_19E290
label_19f214:
    if (ctx->pc == 0x19F214u) {
        ctx->pc = 0x19F214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F210u;
        // 0x19f214: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F218u;
        goto label_19f218;
    }
    ctx->pc = 0x19F210u;
    SET_GPR_U32(ctx, 31, 0x19F218u);
    ctx->pc = 0x19F214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F210u;
    // 0x19f214: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19E290u;
    { ctx->pc = 0x19e290; return; }
    ctx->pc = 0x19F218u;
label_19f218:
    // 0x19f218: 0xafc20004  sw          $v0, 0x4($fp)
    ctx->pc = 0x19f218u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 2));
label_19f21c:
    // 0x19f21c: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x19f21cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_19f220:
    // 0x19f220: 0xdfbe0080  ld          $fp, 0x80($sp)
    ctx->pc = 0x19f220u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_19f224:
    // 0x19f224: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x19f224u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_19f228:
    // 0x19f228: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x19f228u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_19f22c:
    // 0x19f22c: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x19f22cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_19f230:
    // 0x19f230: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x19f230u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_19f234:
    // 0x19f234: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x19f234u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_19f238:
    // 0x19f238: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x19f238u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_19f23c:
    // 0x19f23c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x19f23cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_19f240:
    // 0x19f240: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19f240u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_19f244:
    // 0x19f244: 0x3e00008  jr          $ra
label_19f248:
    if (ctx->pc == 0x19F248u) {
        ctx->pc = 0x19F248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F244u;
        // 0x19f248: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F24Cu;
        goto label_19f24c;
    }
    ctx->pc = 0x19F244u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19F248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F244u;
        // 0x19f248: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19F244u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19F24Cu;
label_19f24c:
    // 0x19f24c: 0x0  nop
    ctx->pc = 0x19f24cu;
    // NOP
label_19f250:
    // 0x19f250: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x19f250u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_19f254:
    // 0x19f254: 0x53702  srl         $a2, $a1, 28
    ctx->pc = 0x19f254u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 5), 28));
label_19f258:
    // 0x19f258: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x19f258u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
label_19f25c:
    // 0x19f25c: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x19f25cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
label_19f260:
    // 0x19f260: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x19f260u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
label_19f264:
    // 0x19f264: 0x24635910  addiu       $v1, $v1, 0x5910
    ctx->pc = 0x19f264u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22800));
label_19f268:
    // 0x19f268: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x19f268u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_19f26c:
    // 0x19f26c: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x19f26cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_19f270:
    // 0x19f270: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x19f270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_19f274:
    // 0x19f274: 0x3e00008  jr          $ra
label_19f278:
    if (ctx->pc == 0x19F278u) {
        ctx->pc = 0x19F278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F274u;
        // 0x19f278: 0xac820818  sw          $v0, 0x818($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 2072), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F27Cu;
        goto label_19f27c;
    }
    ctx->pc = 0x19F274u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19F278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F274u;
        // 0x19f278: 0xac820818  sw          $v0, 0x818($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 2072), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19F274u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19F27Cu;
label_19f27c:
    // 0x19f27c: 0x0  nop
    ctx->pc = 0x19f27cu;
    // NOP
label_19f280:
    // 0x19f280: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x19f280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_19f284:
    // 0x19f284: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x19f284u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_19f288:
    // 0x19f288: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x19f288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_19f28c:
    // 0x19f28c: 0x34422010  ori         $v0, $v0, 0x2010
    ctx->pc = 0x19f28cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8208);
label_19f290:
    // 0x19f290: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x19f290u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_19f294:
    // 0x19f294: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x19f294u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
label_19f298:
    // 0x19f298: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x19f298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_19f29c:
    // 0x19f29c: 0x34a54000  ori         $a1, $a1, 0x4000
    ctx->pc = 0x19f29cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)16384);
label_19f2a0:
    // 0x19f2a0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x19f2a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_19f2a4:
    // 0x19f2a4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x19f2a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19f2a8:
    // 0x19f2a8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19f2a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_19f2ac:
    // 0x19f2ac: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x19f2acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19f2b0:
    // 0x19f2b0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x19f2b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_19f2b4:
    // 0x19f2b4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x19f2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_19f2b8:
    // 0x19f2b8: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x19f2b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
label_19f2bc:
    // 0x19f2bc: 0x14620013  bne         $v1, $v0, . + 4 + (0x13 << 2)
label_19f2c0:
    if (ctx->pc == 0x19F2C0u) {
        ctx->pc = 0x19F2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F2BCu;
        // 0x19f2c0: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F2C4u;
        goto label_19f2c4;
    }
    ctx->pc = 0x19F2BCu;
    {
        const bool branch_taken_0x19f2bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x19F2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F2BCu;
        // 0x19f2c0: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f2bc) {
            ctx->pc = 0x19F30Cu;
            goto label_19f30c;
        }
    }
    ctx->pc = 0x19F2C4u;
label_19f2c4:
    // 0x19f2c4: 0x3c111000  lui         $s1, 0x1000
    ctx->pc = 0x19f2c4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)4096 << 16));
label_19f2c8:
    // 0x19f2c8: 0x3c108000  lui         $s0, 0x8000
    ctx->pc = 0x19f2c8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)32768 << 16));
label_19f2cc:
    // 0x19f2cc: 0x36312010  ori         $s1, $s1, 0x2010
    ctx->pc = 0x19f2ccu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)8208);
label_19f2d0:
    // 0x19f2d0: 0x36104000  ori         $s0, $s0, 0x4000
    ctx->pc = 0x19f2d0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)16384);
label_19f2d4:
    // 0x19f2d4: 0x3c138000  lui         $s3, 0x8000
    ctx->pc = 0x19f2d4u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)32768 << 16));
label_19f2d8:
    // 0x19f2d8: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x19f2d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19f2dc:
    // 0x19f2dc: 0x0  nop
    ctx->pc = 0x19f2dcu;
    // NOP
label_19f2e0:
    // 0x19f2e0: 0x28421389  slti        $v0, $v0, 0x1389
    ctx->pc = 0x19f2e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5001) ? 1 : 0);
label_19f2e4:
    // 0x19f2e4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_19f2e8:
    if (ctx->pc == 0x19F2E8u) {
        ctx->pc = 0x19F2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F2E4u;
        // 0x19f2e8: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F2ECu;
        goto label_19f2ec;
    }
    ctx->pc = 0x19F2E4u;
    {
        const bool branch_taken_0x19f2e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19F2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F2E4u;
        // 0x19f2e8: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f2e4) {
            ctx->pc = 0x19F2F8u;
            goto label_19f2f8;
        }
    }
    ctx->pc = 0x19F2ECu;
label_19f2ec:
    // 0x19f2ec: 0xc068b26  jal         func_1A2C98
label_19f2f0:
    if (ctx->pc == 0x19F2F0u) {
        ctx->pc = 0x19F2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F2ECu;
        // 0x19f2f0: 0x8e440858  lw          $a0, 0x858($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2136)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F2F4u;
        goto label_19f2f4;
    }
    ctx->pc = 0x19F2ECu;
    SET_GPR_U32(ctx, 31, 0x19F2F4u);
    ctx->pc = 0x19F2F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F2ECu;
    // 0x19f2f0: 0x8e440858  lw          $a0, 0x858($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2136)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2C98u;
    { ctx->pc = 0x1a2c98; return; }
    ctx->pc = 0x19F2F4u;
label_19f2f4:
    // 0x19f2f4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x19f2f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19f2f8:
    // 0x19f2f8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x19f2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_19f2fc:
    // 0x19f2fc: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x19f2fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
label_19f300:
    // 0x19f300: 0x1053fff7  beq         $v0, $s3, . + 4 + (-0x9 << 2)
label_19f304:
    if (ctx->pc == 0x19F304u) {
        ctx->pc = 0x19F304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F300u;
        // 0x19f304: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F308u;
        goto label_19f308;
    }
    ctx->pc = 0x19F300u;
    {
        const bool branch_taken_0x19f300 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        ctx->pc = 0x19F304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F300u;
        // 0x19f304: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f300) {
            ctx->pc = 0x19F2E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19f2e0;
        }
    }
    ctx->pc = 0x19F308u;
label_19f308:
    // 0x19f308: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x19f308u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_19f30c:
    // 0x19f30c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x19f30cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_19f310:
    // 0x19f310: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x19f310u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_19f314:
    // 0x19f314: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x19f314u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_19f318:
    // 0x19f318: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19f318u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_19f31c:
    // 0x19f31c: 0x3e00008  jr          $ra
label_19f320:
    if (ctx->pc == 0x19F320u) {
        ctx->pc = 0x19F320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F31Cu;
        // 0x19f320: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F324u;
        goto label_19f324;
    }
    ctx->pc = 0x19F31Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19F320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F31Cu;
        // 0x19f320: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19F31Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19F324u;
label_19f324:
    // 0x19f324: 0x0  nop
    ctx->pc = 0x19f324u;
    // NOP
label_19f328:
    // 0x19f328: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x19f328u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_19f32c:
    // 0x19f32c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x19f32cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_19f330:
    // 0x19f330: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x19f330u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_19f334:
    // 0x19f334: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x19f334u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
label_19f338:
    // 0x19f338: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x19f338u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_19f33c:
    // 0x19f33c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x19f33cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19f340:
    // 0x19f340: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x19f340u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_19f344:
    // 0x19f344: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x19f344u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19f348:
    // 0x19f348: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19f348u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_19f34c:
    // 0x19f34c: 0xdc440000  ld          $a0, 0x0($v0)
    ctx->pc = 0x19f34cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 0)));
label_19f350:
    // 0x19f350: 0x481001b  bgez        $a0, . + 4 + (0x1B << 2)
label_19f354:
    if (ctx->pc == 0x19F354u) {
        ctx->pc = 0x19F354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F350u;
        // 0x19f354: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F358u;
        goto label_19f358;
    }
    ctx->pc = 0x19F350u;
    {
        const bool branch_taken_0x19f350 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x19F354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F350u;
        // 0x19f354: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f350) {
            ctx->pc = 0x19F3C0u;
            goto label_19f3c0;
        }
    }
    ctx->pc = 0x19F358u;
label_19f358:
    // 0x19f358: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x19f358u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_19f35c:
    // 0x19f35c: 0x34422010  ori         $v0, $v0, 0x2010
    ctx->pc = 0x19f35cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8208);
label_19f360:
    // 0x19f360: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x19f360u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_19f364:
    // 0x19f364: 0x30634000  andi        $v1, $v1, 0x4000
    ctx->pc = 0x19f364u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
label_19f368:
    // 0x19f368: 0x14600016  bnez        $v1, . + 4 + (0x16 << 2)
label_19f36c:
    if (ctx->pc == 0x19F36Cu) {
        ctx->pc = 0x19F36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F368u;
        // 0x19f36c: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F370u;
        goto label_19f370;
    }
    ctx->pc = 0x19F368u;
    {
        const bool branch_taken_0x19f368 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x19F36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F368u;
        // 0x19f36c: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f368) {
            ctx->pc = 0x19F3C4u;
            goto label_19f3c4;
        }
    }
    ctx->pc = 0x19F370u;
label_19f370:
    // 0x19f370: 0x3c111000  lui         $s1, 0x1000
    ctx->pc = 0x19f370u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)4096 << 16));
label_19f374:
    // 0x19f374: 0x3c101000  lui         $s0, 0x1000
    ctx->pc = 0x19f374u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)4096 << 16));
label_19f378:
    // 0x19f378: 0x36312000  ori         $s1, $s1, 0x2000
    ctx->pc = 0x19f378u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)8192);
label_19f37c:
    // 0x19f37c: 0x36102010  ori         $s0, $s0, 0x2010
    ctx->pc = 0x19f37cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)8208);
label_19f380:
    // 0x19f380: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x19f380u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_19f384:
    // 0x19f384: 0x0  nop
    ctx->pc = 0x19f384u;
    // NOP
label_19f388:
    // 0x19f388: 0x28421389  slti        $v0, $v0, 0x1389
    ctx->pc = 0x19f388u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5001) ? 1 : 0);
label_19f38c:
    // 0x19f38c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_19f390:
    if (ctx->pc == 0x19F390u) {
        ctx->pc = 0x19F390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F38Cu;
        // 0x19f390: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F394u;
        goto label_19f394;
    }
    ctx->pc = 0x19F38Cu;
    {
        const bool branch_taken_0x19f38c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19F390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F38Cu;
        // 0x19f390: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f38c) {
            ctx->pc = 0x19F3A0u;
            goto label_19f3a0;
        }
    }
    ctx->pc = 0x19F394u;
label_19f394:
    // 0x19f394: 0xc068b26  jal         func_1A2C98
label_19f398:
    if (ctx->pc == 0x19F398u) {
        ctx->pc = 0x19F398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F394u;
        // 0x19f398: 0x8e440858  lw          $a0, 0x858($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2136)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F39Cu;
        goto label_19f39c;
    }
    ctx->pc = 0x19F394u;
    SET_GPR_U32(ctx, 31, 0x19F39Cu);
    ctx->pc = 0x19F398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F394u;
    // 0x19f398: 0x8e440858  lw          $a0, 0x858($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2136)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2C98u;
    { ctx->pc = 0x1a2c98; return; }
    ctx->pc = 0x19F39Cu;
label_19f39c:
    // 0x19f39c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x19f39cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19f3a0:
    // 0x19f3a0: 0xde240000  ld          $a0, 0x0($s1)
    ctx->pc = 0x19f3a0u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 17), 0)));
label_19f3a4:
    // 0x19f3a4: 0x4810006  bgez        $a0, . + 4 + (0x6 << 2)
label_19f3a8:
    if (ctx->pc == 0x19F3A8u) {
        ctx->pc = 0x19F3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F3A4u;
        // 0x19f3a8: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F3ACu;
        goto label_19f3ac;
    }
    ctx->pc = 0x19F3A4u;
    {
        const bool branch_taken_0x19f3a4 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x19F3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F3A4u;
        // 0x19f3a8: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f3a4) {
            ctx->pc = 0x19F3C0u;
            goto label_19f3c0;
        }
    }
    ctx->pc = 0x19F3ACu;
label_19f3ac:
    // 0x19f3ac: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x19f3acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_19f3b0:
    // 0x19f3b0: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x19f3b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
label_19f3b4:
    // 0x19f3b4: 0x1040fff4  beqz        $v0, . + 4 + (-0xC << 2)
label_19f3b8:
    if (ctx->pc == 0x19F3B8u) {
        ctx->pc = 0x19F3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F3B4u;
        // 0x19f3b8: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F3BCu;
        goto label_19f3bc;
    }
    ctx->pc = 0x19F3B4u;
    {
        const bool branch_taken_0x19f3b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F3B4u;
        // 0x19f3b8: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f3b4) {
            ctx->pc = 0x19F388u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19f388;
        }
    }
    ctx->pc = 0x19F3BCu;
label_19f3bc:
    // 0x19f3bc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x19f3bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_19f3c0:
    // 0x19f3c0: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x19f3c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19f3c4:
    // 0x19f3c4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x19f3c4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_19f3c8:
    // 0x19f3c8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x19f3c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_19f3cc:
    // 0x19f3cc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19f3ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_19f3d0:
    // 0x19f3d0: 0x3e00008  jr          $ra
label_19f3d4:
    if (ctx->pc == 0x19F3D4u) {
        ctx->pc = 0x19F3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F3D0u;
        // 0x19f3d4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F3D8u;
        goto label_19f3d8;
    }
    ctx->pc = 0x19F3D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19F3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F3D0u;
        // 0x19f3d4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19F3D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19F3D8u;
label_19f3d8:
    // 0x19f3d8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x19f3d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_19f3dc:
    // 0x19f3dc: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x19f3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_19f3e0:
    // 0x19f3e0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x19f3e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_19f3e4:
    // 0x19f3e4: 0x34422010  ori         $v0, $v0, 0x2010
    ctx->pc = 0x19f3e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8208);
label_19f3e8:
    // 0x19f3e8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x19f3e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_19f3ec:
    // 0x19f3ec: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x19f3ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_19f3f0:
    // 0x19f3f0: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x19f3f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_19f3f4:
    // 0x19f3f4: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x19f3f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
label_19f3f8:
    // 0x19f3f8: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x19f3f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_19f3fc:
    // 0x19f3fc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x19f3fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19f400:
    // 0x19f400: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19f400u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_19f404:
    // 0x19f404: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x19f404u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19f408:
    // 0x19f408: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x19f408u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19f40c:
    // 0x19f40c: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x19f40cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_19f410:
    // 0x19f410: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x19f410u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_19f414:
    // 0x19f414: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x19f414u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
label_19f418:
    // 0x19f418: 0x14c20015  bne         $a2, $v0, . + 4 + (0x15 << 2)
label_19f41c:
    if (ctx->pc == 0x19F41Cu) {
        ctx->pc = 0x19F41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F418u;
        // 0x19f41c: 0x58680  sll         $s0, $a1, 26 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 5), 26));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F420u;
        goto label_19f420;
    }
    ctx->pc = 0x19F418u;
    {
        const bool branch_taken_0x19f418 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x19F41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F418u;
        // 0x19f41c: 0x58680  sll         $s0, $a1, 26 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 5), 26));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f418) {
            ctx->pc = 0x19F470u;
            goto label_19f470;
        }
    }
    ctx->pc = 0x19F420u;
label_19f420:
    // 0x19f420: 0x3c130028  lui         $s3, 0x28
    ctx->pc = 0x19f420u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)40 << 16));
label_19f424:
    // 0x19f424: 0x0  nop
    ctx->pc = 0x19f424u;
    // NOP
label_19f428:
    // 0x19f428: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x19f428u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_19f42c:
    // 0x19f42c: 0x28421389  slti        $v0, $v0, 0x1389
    ctx->pc = 0x19f42cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5001) ? 1 : 0);
label_19f430:
    // 0x19f430: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_19f434:
    if (ctx->pc == 0x19F434u) {
        ctx->pc = 0x19F434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F430u;
        // 0x19f434: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F438u;
        goto label_19f438;
    }
    ctx->pc = 0x19F430u;
    {
        const bool branch_taken_0x19f430 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19F434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F430u;
        // 0x19f434: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f430) {
            ctx->pc = 0x19F444u;
            goto label_19f444;
        }
    }
    ctx->pc = 0x19F438u;
label_19f438:
    // 0x19f438: 0xc068b26  jal         func_1A2C98
label_19f43c:
    if (ctx->pc == 0x19F43Cu) {
        ctx->pc = 0x19F43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F438u;
        // 0x19f43c: 0x8e240858  lw          $a0, 0x858($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2136)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F440u;
        goto label_19f440;
    }
    ctx->pc = 0x19F438u;
    SET_GPR_U32(ctx, 31, 0x19F440u);
    ctx->pc = 0x19F43Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F438u;
    // 0x19f43c: 0x8e240858  lw          $a0, 0x858($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2136)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2C98u;
    { ctx->pc = 0x1a2c98; return; }
    ctx->pc = 0x19F440u;
label_19f440:
    // 0x19f440: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x19f440u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19f444:
    // 0x19f444: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x19f444u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_19f448:
    // 0x19f448: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x19f448u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_19f44c:
    // 0x19f44c: 0x34632010  ori         $v1, $v1, 0x2010
    ctx->pc = 0x19f44cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8208);
label_19f450:
    // 0x19f450: 0x34844000  ori         $a0, $a0, 0x4000
    ctx->pc = 0x19f450u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16384);
label_19f454:
    // 0x19f454: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x19f454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_19f458:
    // 0x19f458: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x19f458u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
label_19f45c:
    // 0x19f45c: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x19f45cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_19f460:
    // 0x19f460: 0x1045fff1  beq         $v0, $a1, . + 4 + (-0xF << 2)
label_19f464:
    if (ctx->pc == 0x19F464u) {
        ctx->pc = 0x19F464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F460u;
        // 0x19f464: 0x3c033000  lui         $v1, 0x3000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F468u;
        goto label_19f468;
    }
    ctx->pc = 0x19F460u;
    {
        const bool branch_taken_0x19f460 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x19F464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F460u;
        // 0x19f464: 0x3c033000  lui         $v1, 0x3000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f460) {
            ctx->pc = 0x19F428u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19f428;
        }
    }
    ctx->pc = 0x19F468u;
label_19f468:
    // 0x19f468: 0x10000004  b           . + 4 + (0x4 << 2)
label_19f46c:
    if (ctx->pc == 0x19F46Cu) {
        ctx->pc = 0x19F46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F468u;
        // 0x19f46c: 0x3c041000  lui         $a0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F470u;
        goto label_19f470;
    }
    ctx->pc = 0x19F468u;
    {
        const bool branch_taken_0x19f468 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F468u;
        // 0x19f46c: 0x3c041000  lui         $a0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f468) {
            ctx->pc = 0x19F47Cu;
            goto label_19f47c;
        }
    }
    ctx->pc = 0x19F470u;
label_19f470:
    // 0x19f470: 0x3c130028  lui         $s3, 0x28
    ctx->pc = 0x19f470u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)40 << 16));
label_19f474:
    // 0x19f474: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x19f474u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
label_19f478:
    // 0x19f478: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x19f478u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
label_19f47c:
    // 0x19f47c: 0x2031825  or          $v1, $s0, $v1
    ctx->pc = 0x19f47cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
label_19f480:
    // 0x19f480: 0x34842000  ori         $a0, $a0, 0x2000
    ctx->pc = 0x19f480u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8192);
label_19f484:
    // 0x19f484: 0x31703  sra         $v0, $v1, 28
    ctx->pc = 0x19f484u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 28));
label_19f488:
    // 0x19f488: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x19f488u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_19f48c:
    // 0x19f48c: 0x26655910  addiu       $a1, $s3, 0x5910
    ctx->pc = 0x19f48cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 22800));
label_19f490:
    // 0x19f490: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x19f490u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_19f494:
    // 0x19f494: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x19f494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_19f498:
    // 0x19f498: 0xdc860000  ld          $a2, 0x0($a0)
    ctx->pc = 0x19f498u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 4), 0)));
label_19f49c:
    // 0x19f49c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x19f49cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_19f4a0:
    // 0x19f4a0: 0x4c1000e  bgez        $a2, . + 4 + (0xE << 2)
label_19f4a4:
    if (ctx->pc == 0x19F4A4u) {
        ctx->pc = 0x19F4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F4A0u;
        // 0x19f4a4: 0xae230818  sw          $v1, 0x818($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2072), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F4A8u;
        goto label_19f4a8;
    }
    ctx->pc = 0x19F4A0u;
    {
        const bool branch_taken_0x19f4a0 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x19F4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F4A0u;
        // 0x19f4a4: 0xae230818  sw          $v1, 0x818($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2072), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f4a0) {
            ctx->pc = 0x19F4DCu;
            goto label_19f4dc;
        }
    }
    ctx->pc = 0x19F4A8u;
label_19f4a8:
    // 0x19f4a8: 0x3c101000  lui         $s0, 0x1000
    ctx->pc = 0x19f4a8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)4096 << 16));
label_19f4ac:
    // 0x19f4ac: 0x36102000  ori         $s0, $s0, 0x2000
    ctx->pc = 0x19f4acu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)8192);
label_19f4b0:
    // 0x19f4b0: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x19f4b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_19f4b4:
    // 0x19f4b4: 0x0  nop
    ctx->pc = 0x19f4b4u;
    // NOP
label_19f4b8:
    // 0x19f4b8: 0x28421389  slti        $v0, $v0, 0x1389
    ctx->pc = 0x19f4b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5001) ? 1 : 0);
label_19f4bc:
    // 0x19f4bc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_19f4c0:
    if (ctx->pc == 0x19F4C0u) {
        ctx->pc = 0x19F4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F4BCu;
        // 0x19f4c0: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F4C4u;
        goto label_19f4c4;
    }
    ctx->pc = 0x19F4BCu;
    {
        const bool branch_taken_0x19f4bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19F4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F4BCu;
        // 0x19f4c0: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f4bc) {
            ctx->pc = 0x19F4D0u;
            goto label_19f4d0;
        }
    }
    ctx->pc = 0x19F4C4u;
label_19f4c4:
    // 0x19f4c4: 0x8e240858  lw          $a0, 0x858($s1)
    ctx->pc = 0x19f4c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2136)));
label_19f4c8:
    // 0x19f4c8: 0xc068b26  jal         func_1A2C98
label_19f4cc:
    if (ctx->pc == 0x19F4CCu) {
        ctx->pc = 0x19F4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F4C8u;
        // 0x19f4cc: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F4D0u;
        goto label_19f4d0;
    }
    ctx->pc = 0x19F4C8u;
    SET_GPR_U32(ctx, 31, 0x19F4D0u);
    ctx->pc = 0x19F4CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F4C8u;
    // 0x19f4cc: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2C98u;
    { ctx->pc = 0x1a2c98; return; }
    ctx->pc = 0x19F4D0u;
label_19f4d0:
    // 0x19f4d0: 0xde060000  ld          $a2, 0x0($s0)
    ctx->pc = 0x19f4d0u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 16), 0)));
label_19f4d4:
    // 0x19f4d4: 0x4c0fff8  bltz        $a2, . + 4 + (-0x8 << 2)
label_19f4d8:
    if (ctx->pc == 0x19F4D8u) {
        ctx->pc = 0x19F4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F4D4u;
        // 0x19f4d8: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F4DCu;
        goto label_19f4dc;
    }
    ctx->pc = 0x19F4D4u;
    {
        const bool branch_taken_0x19f4d4 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x19F4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F4D4u;
        // 0x19f4d8: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f4d4) {
            ctx->pc = 0x19F4B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19f4b8;
        }
    }
    ctx->pc = 0x19F4DCu;
label_19f4dc:
    // 0x19f4dc: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x19f4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_19f4e0:
    // 0x19f4e0: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x19f4e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
label_19f4e4:
    // 0x19f4e4: 0xdc842030  ld          $a0, 0x2030($a0)
    ctx->pc = 0x19f4e4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 4), 8240)));
label_19f4e8:
    // 0x19f4e8: 0x34422020  ori         $v0, $v0, 0x2020
    ctx->pc = 0x19f4e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8224);
label_19f4ec:
    // 0x19f4ec: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x19f4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_19f4f0:
    // 0x19f4f0: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x19f4f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
label_19f4f4:
    // 0x19f4f4: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x19f4f4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
label_19f4f8:
    // 0x19f4f8: 0x4810005  bgez        $a0, . + 4 + (0x5 << 2)
label_19f4fc:
    if (ctx->pc == 0x19F4FCu) {
        ctx->pc = 0x19F4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F4F8u;
        // 0x19f4fc: 0xae230838  sw          $v1, 0x838($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2104), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F500u;
        goto label_19f500;
    }
    ctx->pc = 0x19F4F8u;
    {
        const bool branch_taken_0x19f4f8 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x19F4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F4F8u;
        // 0x19f4fc: 0xae230838  sw          $v1, 0x838($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2104), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f4f8) {
            ctx->pc = 0x19F510u;
            goto label_19f510;
        }
    }
    ctx->pc = 0x19F500u;
label_19f500:
    // 0x19f500: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x19f500u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
label_19f504:
    // 0x19f504: 0x21023  negu        $v0, $v0
    ctx->pc = 0x19f504u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_19f508:
    // 0x19f508: 0x10000002  b           . + 4 + (0x2 << 2)
label_19f50c:
    if (ctx->pc == 0x19F50Cu) {
        ctx->pc = 0x19F50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F508u;
        // 0x19f50c: 0x3042001f  andi        $v0, $v0, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F510u;
        goto label_19f510;
    }
    ctx->pc = 0x19F508u;
    {
        const bool branch_taken_0x19f508 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F508u;
        // 0x19f50c: 0x3042001f  andi        $v0, $v0, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f508) {
            ctx->pc = 0x19F514u;
            goto label_19f514;
        }
    }
    ctx->pc = 0x19F510u;
label_19f510:
    // 0x19f510: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x19f510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_19f514:
    // 0x19f514: 0xae22083c  sw          $v0, 0x83C($s1)
    ctx->pc = 0x19f514u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2108), GPR_U32(ctx, 2));
label_19f518:
    // 0x19f518: 0x6183c  dsll32      $v1, $a2, 0
    ctx->pc = 0x19f518u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 0));
label_19f51c:
    // 0x19f51c: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x19f51cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
label_19f520:
    // 0x19f520: 0x30c2ffff  andi        $v0, $a2, 0xFFFF
    ctx->pc = 0x19f520u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
label_19f524:
    // 0x19f524: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x19f524u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_19f528:
    // 0x19f528: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x19f528u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_19f52c:
    // 0x19f52c: 0xae23011c  sw          $v1, 0x11C($s1)
    ctx->pc = 0x19f52cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 284), GPR_U32(ctx, 3));
label_19f530:
    // 0x19f530: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x19f530u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_19f534:
    // 0x19f534: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x19f534u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_19f538:
    // 0x19f538: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x19f538u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_19f53c:
    // 0x19f53c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x19f53cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_19f540:
    // 0x19f540: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x19f540u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_19f544:
    // 0x19f544: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19f544u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_19f548:
    // 0x19f548: 0x3e00008  jr          $ra
label_19f54c:
    if (ctx->pc == 0x19F54Cu) {
        ctx->pc = 0x19F54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F548u;
        // 0x19f54c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F550u;
        goto label_19f550;
    }
    ctx->pc = 0x19F548u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19F54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F548u;
        // 0x19f54c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19F548u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19F550u;
label_19f550:
    // 0x19f550: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x19f550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_19f554:
    // 0x19f554: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x19f554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_19f558:
    // 0x19f558: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19f558u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_19f55c:
    // 0x19f55c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x19f55cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_19f560:
    // 0x19f560: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19f560u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19f564:
    // 0x19f564: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x19f564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_19f568:
    // 0x19f568: 0x8e020818  lw          $v0, 0x818($s0)
    ctx->pc = 0x19f568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2072)));
label_19f56c:
    // 0x19f56c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_19f570:
    if (ctx->pc == 0x19F570u) {
        ctx->pc = 0x19F570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F56Cu;
        // 0x19f570: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F574u;
        goto label_19f574;
    }
    ctx->pc = 0x19F56Cu;
    {
        const bool branch_taken_0x19f56c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19F570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F56Cu;
        // 0x19f570: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f56c) {
            ctx->pc = 0x19F584u;
            goto label_19f584;
        }
    }
    ctx->pc = 0x19F574u;
label_19f574:
    // 0x19f574: 0x8e02083c  lw          $v0, 0x83C($s0)
    ctx->pc = 0x19f574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2108)));
label_19f578:
    // 0x19f578: 0x52102a  slt         $v0, $v0, $s2
    ctx->pc = 0x19f578u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_19f57c:
    // 0x19f57c: 0x5040002e  beql        $v0, $zero, . + 4 + (0x2E << 2)
label_19f580:
    if (ctx->pc == 0x19F580u) {
        ctx->pc = 0x19F580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F57Cu;
        // 0x19f580: 0x8e030838  lw          $v1, 0x838($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2104)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F584u;
        goto label_19f584;
    }
    ctx->pc = 0x19F57Cu;
    {
        const bool branch_taken_0x19f57c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19f57c) {
            ctx->pc = 0x19F580u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19F57Cu;
            // 0x19f580: 0x8e030838  lw          $v1, 0x838($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2104)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19F638u;
            goto label_19f638;
        }
    }
    ctx->pc = 0x19F584u;
label_19f584:
    // 0x19f584: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x19f584u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_19f588:
    // 0x19f588: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x19f588u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_19f58c:
    // 0x19f58c: 0x34422010  ori         $v0, $v0, 0x2010
    ctx->pc = 0x19f58cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8208);
label_19f590:
    // 0x19f590: 0x34844000  ori         $a0, $a0, 0x4000
    ctx->pc = 0x19f590u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16384);
label_19f594:
    // 0x19f594: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x19f594u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_19f598:
    // 0x19f598: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x19f598u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_19f59c:
    // 0x19f59c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x19f59cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_19f5a0:
    // 0x19f5a0: 0x14620015  bne         $v1, $v0, . + 4 + (0x15 << 2)
label_19f5a4:
    if (ctx->pc == 0x19F5A4u) {
        ctx->pc = 0x19F5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F5A0u;
        // 0x19f5a4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F5A8u;
        goto label_19f5a8;
    }
    ctx->pc = 0x19F5A0u;
    {
        const bool branch_taken_0x19f5a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x19F5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F5A0u;
        // 0x19f5a4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f5a0) {
            ctx->pc = 0x19F5F8u;
            goto label_19f5f8;
        }
    }
    ctx->pc = 0x19F5A8u;
label_19f5a8:
    // 0x19f5a8: 0x3c110028  lui         $s1, 0x28
    ctx->pc = 0x19f5a8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)40 << 16));
label_19f5ac:
    // 0x19f5ac: 0x0  nop
    ctx->pc = 0x19f5acu;
    // NOP
label_19f5b0:
    // 0x19f5b0: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x19f5b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_19f5b4:
    // 0x19f5b4: 0x28421389  slti        $v0, $v0, 0x1389
    ctx->pc = 0x19f5b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5001) ? 1 : 0);
label_19f5b8:
    // 0x19f5b8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_19f5bc:
    if (ctx->pc == 0x19F5BCu) {
        ctx->pc = 0x19F5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F5B8u;
        // 0x19f5bc: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F5C0u;
        goto label_19f5c0;
    }
    ctx->pc = 0x19F5B8u;
    {
        const bool branch_taken_0x19f5b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19F5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F5B8u;
        // 0x19f5bc: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f5b8) {
            ctx->pc = 0x19F5CCu;
            goto label_19f5cc;
        }
    }
    ctx->pc = 0x19F5C0u;
label_19f5c0:
    // 0x19f5c0: 0xc068b26  jal         func_1A2C98
label_19f5c4:
    if (ctx->pc == 0x19F5C4u) {
        ctx->pc = 0x19F5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F5C0u;
        // 0x19f5c4: 0x8e040858  lw          $a0, 0x858($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2136)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F5C8u;
        goto label_19f5c8;
    }
    ctx->pc = 0x19F5C0u;
    SET_GPR_U32(ctx, 31, 0x19F5C8u);
    ctx->pc = 0x19F5C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F5C0u;
    // 0x19f5c4: 0x8e040858  lw          $a0, 0x858($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2136)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2C98u;
    { ctx->pc = 0x1a2c98; return; }
    ctx->pc = 0x19F5C8u;
label_19f5c8:
    // 0x19f5c8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x19f5c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19f5cc:
    // 0x19f5cc: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x19f5ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_19f5d0:
    // 0x19f5d0: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x19f5d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_19f5d4:
    // 0x19f5d4: 0x34632010  ori         $v1, $v1, 0x2010
    ctx->pc = 0x19f5d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8208);
label_19f5d8:
    // 0x19f5d8: 0x34844000  ori         $a0, $a0, 0x4000
    ctx->pc = 0x19f5d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16384);
label_19f5dc:
    // 0x19f5dc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x19f5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_19f5e0:
    // 0x19f5e0: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x19f5e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
label_19f5e4:
    // 0x19f5e4: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x19f5e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_19f5e8:
    // 0x19f5e8: 0x1045fff1  beq         $v0, $a1, . + 4 + (-0xF << 2)
label_19f5ec:
    if (ctx->pc == 0x19F5ECu) {
        ctx->pc = 0x19F5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F5E8u;
        // 0x19f5ec: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F5F0u;
        goto label_19f5f0;
    }
    ctx->pc = 0x19F5E8u;
    {
        const bool branch_taken_0x19f5e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x19F5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F5E8u;
        // 0x19f5ec: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f5e8) {
            ctx->pc = 0x19F5B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19f5b0;
        }
    }
    ctx->pc = 0x19F5F0u;
label_19f5f0:
    // 0x19f5f0: 0x10000004  b           . + 4 + (0x4 << 2)
label_19f5f4:
    if (ctx->pc == 0x19F5F4u) {
        ctx->pc = 0x19F5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F5F0u;
        // 0x19f5f4: 0x3c034000  lui         $v1, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F5F8u;
        goto label_19f5f8;
    }
    ctx->pc = 0x19F5F0u;
    {
        const bool branch_taken_0x19f5f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F5F0u;
        // 0x19f5f4: 0x3c034000  lui         $v1, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f5f0) {
            ctx->pc = 0x19F604u;
            goto label_19f604;
        }
    }
    ctx->pc = 0x19F5F8u;
label_19f5f8:
    // 0x19f5f8: 0x3c110028  lui         $s1, 0x28
    ctx->pc = 0x19f5f8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)40 << 16));
label_19f5fc:
    // 0x19f5fc: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x19f5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_19f600:
    // 0x19f600: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x19f600u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
label_19f604:
    // 0x19f604: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x19f604u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
label_19f608:
    // 0x19f608: 0x26255910  addiu       $a1, $s1, 0x5910
    ctx->pc = 0x19f608u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 22800));
label_19f60c:
    // 0x19f60c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x19f60cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_19f610:
    // 0x19f610: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19f610u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19f614:
    // 0x19f614: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x19f614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
label_19f618:
    // 0x19f618: 0xc067cca  jal         func_19F328
label_19f61c:
    if (ctx->pc == 0x19F61Cu) {
        ctx->pc = 0x19F61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F618u;
        // 0x19f61c: 0xae020818  sw          $v0, 0x818($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2072), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F620u;
        goto label_19f620;
    }
    ctx->pc = 0x19F618u;
    SET_GPR_U32(ctx, 31, 0x19F620u);
    ctx->pc = 0x19F61Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F618u;
    // 0x19f61c: 0xae020818  sw          $v0, 0x818($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 2072), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F328u;
    goto label_19f328;
    ctx->pc = 0x19F620u;
label_19f620:
    // 0x19f620: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x19f620u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_19f624:
    // 0x19f624: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x19f624u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_19f628:
    // 0x19f628: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x19f628u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_19f62c:
    // 0x19f62c: 0xae020838  sw          $v0, 0x838($s0)
    ctx->pc = 0x19f62cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2104), GPR_U32(ctx, 2));
label_19f630:
    // 0x19f630: 0xae03083c  sw          $v1, 0x83C($s0)
    ctx->pc = 0x19f630u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2108), GPR_U32(ctx, 3));
label_19f634:
    // 0x19f634: 0x8e030838  lw          $v1, 0x838($s0)
    ctx->pc = 0x19f634u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2104)));
label_19f638:
    // 0x19f638: 0x121023  negu        $v0, $s2
    ctx->pc = 0x19f638u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 18)));
label_19f63c:
    // 0x19f63c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x19f63cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_19f640:
    // 0x19f640: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x19f640u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_19f644:
    // 0x19f644: 0x431006  srlv        $v0, $v1, $v0
    ctx->pc = 0x19f644u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
label_19f648:
    // 0x19f648: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x19f648u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_19f64c:
    // 0x19f64c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19f64cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_19f650:
    // 0x19f650: 0x3e00008  jr          $ra
label_19f654:
    if (ctx->pc == 0x19F654u) {
        ctx->pc = 0x19F654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F650u;
        // 0x19f654: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F658u;
        goto label_19f658;
    }
    ctx->pc = 0x19F650u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19F654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F650u;
        // 0x19f654: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19F650u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19F658u;
label_19f658:
    // 0x19f658: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x19f658u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_19f65c:
    // 0x19f65c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x19f65cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_19f660:
    // 0x19f660: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x19f660u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_19f664:
    // 0x19f664: 0x34422010  ori         $v0, $v0, 0x2010
    ctx->pc = 0x19f664u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8208);
label_19f668:
    // 0x19f668: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19f668u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_19f66c:
    // 0x19f66c: 0x3c068000  lui         $a2, 0x8000
    ctx->pc = 0x19f66cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32768 << 16));
label_19f670:
    // 0x19f670: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x19f670u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_19f674:
    // 0x19f674: 0x34c64000  ori         $a2, $a2, 0x4000
    ctx->pc = 0x19f674u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)16384);
label_19f678:
    // 0x19f678: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x19f678u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_19f67c:
    // 0x19f67c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19f67cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19f680:
    // 0x19f680: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x19f680u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_19f684:
    // 0x19f684: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x19f684u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19f688:
    // 0x19f688: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x19f688u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_19f68c:
    // 0x19f68c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x19f68cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_19f690:
    // 0x19f690: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x19f690u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
label_19f694:
    // 0x19f694: 0x14620014  bne         $v1, $v0, . + 4 + (0x14 << 2)
label_19f698:
    if (ctx->pc == 0x19F698u) {
        ctx->pc = 0x19F698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F694u;
        // 0x19f698: 0x3c120028  lui         $s2, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F69Cu;
        goto label_19f69c;
    }
    ctx->pc = 0x19F694u;
    {
        const bool branch_taken_0x19f694 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x19F698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F694u;
        // 0x19f698: 0x3c120028  lui         $s2, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f694) {
            ctx->pc = 0x19F6E8u;
            goto label_19f6e8;
        }
    }
    ctx->pc = 0x19F69Cu;
label_19f69c:
    // 0x19f69c: 0x0  nop
    ctx->pc = 0x19f69cu;
    // NOP
label_19f6a0:
    // 0x19f6a0: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x19f6a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_19f6a4:
    // 0x19f6a4: 0x28421389  slti        $v0, $v0, 0x1389
    ctx->pc = 0x19f6a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5001) ? 1 : 0);
label_19f6a8:
    // 0x19f6a8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_19f6ac:
    if (ctx->pc == 0x19F6ACu) {
        ctx->pc = 0x19F6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F6A8u;
        // 0x19f6ac: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F6B0u;
        goto label_19f6b0;
    }
    ctx->pc = 0x19F6A8u;
    {
        const bool branch_taken_0x19f6a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19F6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F6A8u;
        // 0x19f6ac: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f6a8) {
            ctx->pc = 0x19F6BCu;
            goto label_19f6bc;
        }
    }
    ctx->pc = 0x19F6B0u;
label_19f6b0:
    // 0x19f6b0: 0xc068b26  jal         func_1A2C98
label_19f6b4:
    if (ctx->pc == 0x19F6B4u) {
        ctx->pc = 0x19F6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F6B0u;
        // 0x19f6b4: 0x8e040858  lw          $a0, 0x858($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2136)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F6B8u;
        goto label_19f6b8;
    }
    ctx->pc = 0x19F6B0u;
    SET_GPR_U32(ctx, 31, 0x19F6B8u);
    ctx->pc = 0x19F6B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F6B0u;
    // 0x19f6b4: 0x8e040858  lw          $a0, 0x858($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2136)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2C98u;
    { ctx->pc = 0x1a2c98; return; }
    ctx->pc = 0x19F6B8u;
label_19f6b8:
    // 0x19f6b8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x19f6b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19f6bc:
    // 0x19f6bc: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x19f6bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_19f6c0:
    // 0x19f6c0: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x19f6c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_19f6c4:
    // 0x19f6c4: 0x34632010  ori         $v1, $v1, 0x2010
    ctx->pc = 0x19f6c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8208);
label_19f6c8:
    // 0x19f6c8: 0x34844000  ori         $a0, $a0, 0x4000
    ctx->pc = 0x19f6c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16384);
label_19f6cc:
    // 0x19f6cc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x19f6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_19f6d0:
    // 0x19f6d0: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x19f6d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
label_19f6d4:
    // 0x19f6d4: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x19f6d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_19f6d8:
    // 0x19f6d8: 0x1045fff1  beq         $v0, $a1, . + 4 + (-0xF << 2)
label_19f6dc:
    if (ctx->pc == 0x19F6DCu) {
        ctx->pc = 0x19F6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F6D8u;
        // 0x19f6dc: 0x3c024000  lui         $v0, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F6E0u;
        goto label_19f6e0;
    }
    ctx->pc = 0x19F6D8u;
    {
        const bool branch_taken_0x19f6d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x19F6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F6D8u;
        // 0x19f6dc: 0x3c024000  lui         $v0, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f6d8) {
            ctx->pc = 0x19F6A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19f6a0;
        }
    }
    ctx->pc = 0x19F6E0u;
label_19f6e0:
    // 0x19f6e0: 0x10000003  b           . + 4 + (0x3 << 2)
label_19f6e4:
    if (ctx->pc == 0x19F6E4u) {
        ctx->pc = 0x19F6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F6E0u;
        // 0x19f6e4: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F6E8u;
        goto label_19f6e8;
    }
    ctx->pc = 0x19F6E0u;
    {
        const bool branch_taken_0x19f6e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F6E0u;
        // 0x19f6e4: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f6e0) {
            ctx->pc = 0x19F6F0u;
            goto label_19f6f0;
        }
    }
    ctx->pc = 0x19F6E8u;
label_19f6e8:
    // 0x19f6e8: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x19f6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_19f6ec:
    // 0x19f6ec: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x19f6ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_19f6f0:
    // 0x19f6f0: 0x2221025  or          $v0, $s1, $v0
    ctx->pc = 0x19f6f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
label_19f6f4:
    // 0x19f6f4: 0x34632000  ori         $v1, $v1, 0x2000
    ctx->pc = 0x19f6f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8192);
label_19f6f8:
    // 0x19f6f8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x19f6f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_19f6fc:
    // 0x19f6fc: 0x22f02  srl         $a1, $v0, 28
    ctx->pc = 0x19f6fcu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 2), 28));
label_19f700:
    // 0x19f700: 0x26425910  addiu       $v0, $s2, 0x5910
    ctx->pc = 0x19f700u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 22800));
label_19f704:
    // 0x19f704: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x19f704u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_19f708:
    // 0x19f708: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x19f708u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_19f70c:
    // 0x19f70c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19f70cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19f710:
    // 0x19f710: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x19f710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_19f714:
    // 0x19f714: 0xc067cca  jal         func_19F328
label_19f718:
    if (ctx->pc == 0x19F718u) {
        ctx->pc = 0x19F718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F714u;
        // 0x19f718: 0xae020818  sw          $v0, 0x818($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2072), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F71Cu;
        goto label_19f71c;
    }
    ctx->pc = 0x19F714u;
    SET_GPR_U32(ctx, 31, 0x19F71Cu);
    ctx->pc = 0x19F718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F714u;
    // 0x19f718: 0xae020818  sw          $v0, 0x818($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 2072), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F328u;
    goto label_19f328;
    ctx->pc = 0x19F71Cu;
label_19f71c:
    // 0x19f71c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x19f71cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_19f720:
    // 0x19f720: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x19f720u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_19f724:
    // 0x19f724: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x19f724u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_19f728:
    // 0x19f728: 0xae03083c  sw          $v1, 0x83C($s0)
    ctx->pc = 0x19f728u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2108), GPR_U32(ctx, 3));
label_19f72c:
    // 0x19f72c: 0xae020838  sw          $v0, 0x838($s0)
    ctx->pc = 0x19f72cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2104), GPR_U32(ctx, 2));
label_19f730:
    // 0x19f730: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x19f730u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_19f734:
    // 0x19f734: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x19f734u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_19f738:
    // 0x19f738: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x19f738u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_19f73c:
    // 0x19f73c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19f73cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_19f740:
    // 0x19f740: 0x3e00008  jr          $ra
label_19f744:
    if (ctx->pc == 0x19F744u) {
        ctx->pc = 0x19F744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F740u;
        // 0x19f744: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F748u;
        goto label_19f748;
    }
    ctx->pc = 0x19F740u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19F744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F740u;
        // 0x19f744: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19F740u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19F748u;
label_19f748:
    // 0x19f748: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x19f748u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_19f74c:
    // 0x19f74c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x19f74cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_19f750:
    // 0x19f750: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x19f750u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_19f754:
    // 0x19f754: 0x34422010  ori         $v0, $v0, 0x2010
    ctx->pc = 0x19f754u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8208);
label_19f758:
    // 0x19f758: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x19f758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_19f75c:
    // 0x19f75c: 0x3c068000  lui         $a2, 0x8000
    ctx->pc = 0x19f75cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32768 << 16));
label_19f760:
    // 0x19f760: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x19f760u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_19f764:
    // 0x19f764: 0x34c64000  ori         $a2, $a2, 0x4000
    ctx->pc = 0x19f764u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)16384);
label_19f768:
    // 0x19f768: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x19f768u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_19f76c:
    // 0x19f76c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x19f76cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19f770:
    // 0x19f770: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19f770u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_19f774:
    // 0x19f774: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x19f774u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_19f778:
    // 0x19f778: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x19f778u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19f77c:
    // 0x19f77c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x19f77cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_19f780:
    // 0x19f780: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x19f780u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_19f784:
    // 0x19f784: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x19f784u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
label_19f788:
    // 0x19f788: 0x14620014  bne         $v1, $v0, . + 4 + (0x14 << 2)
label_19f78c:
    if (ctx->pc == 0x19F78Cu) {
        ctx->pc = 0x19F78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F788u;
        // 0x19f78c: 0x3c130028  lui         $s3, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F790u;
        { ctx->pc = 0x19f790; return; }
    }
    ctx->pc = 0x19F788u;
    {
        const bool branch_taken_0x19f788 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x19F78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F788u;
        // 0x19f78c: 0x3c130028  lui         $s3, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f788) {
            ctx->pc = 0x19F7DCu;
            { ctx->pc = 0x19f7dc; return; }
        }
    }
    ctx->pc = 0x19F790u;
    ctx->pc = 0x19f790u;
    return;
}
