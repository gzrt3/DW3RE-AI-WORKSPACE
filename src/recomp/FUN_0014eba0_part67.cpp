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


void FUN_0014eba0_part67(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x16ef40u: goto label_16ef40;
        case 0x16ef44u: goto label_16ef44;
        case 0x16ef48u: goto label_16ef48;
        case 0x16ef4cu: goto label_16ef4c;
        case 0x16ef50u: goto label_16ef50;
        case 0x16ef54u: goto label_16ef54;
        case 0x16ef58u: goto label_16ef58;
        case 0x16ef5cu: goto label_16ef5c;
        case 0x16ef60u: goto label_16ef60;
        case 0x16ef64u: goto label_16ef64;
        case 0x16ef68u: goto label_16ef68;
        case 0x16ef6cu: goto label_16ef6c;
        case 0x16ef70u: goto label_16ef70;
        case 0x16ef74u: goto label_16ef74;
        case 0x16ef78u: goto label_16ef78;
        case 0x16ef7cu: goto label_16ef7c;
        case 0x16ef80u: goto label_16ef80;
        case 0x16ef84u: goto label_16ef84;
        case 0x16ef88u: goto label_16ef88;
        case 0x16ef8cu: goto label_16ef8c;
        case 0x16ef90u: goto label_16ef90;
        case 0x16ef94u: goto label_16ef94;
        case 0x16ef98u: goto label_16ef98;
        case 0x16ef9cu: goto label_16ef9c;
        case 0x16efa0u: goto label_16efa0;
        case 0x16efa4u: goto label_16efa4;
        case 0x16efa8u: goto label_16efa8;
        case 0x16efacu: goto label_16efac;
        case 0x16efb0u: goto label_16efb0;
        case 0x16efb4u: goto label_16efb4;
        case 0x16efb8u: goto label_16efb8;
        case 0x16efbcu: goto label_16efbc;
        case 0x16efc0u: goto label_16efc0;
        case 0x16efc4u: goto label_16efc4;
        case 0x16efc8u: goto label_16efc8;
        case 0x16efccu: goto label_16efcc;
        case 0x16efd0u: goto label_16efd0;
        case 0x16efd4u: goto label_16efd4;
        case 0x16efd8u: goto label_16efd8;
        case 0x16efdcu: goto label_16efdc;
        case 0x16efe0u: goto label_16efe0;
        case 0x16efe4u: goto label_16efe4;
        case 0x16efe8u: goto label_16efe8;
        case 0x16efecu: goto label_16efec;
        case 0x16eff0u: goto label_16eff0;
        case 0x16eff4u: goto label_16eff4;
        case 0x16eff8u: goto label_16eff8;
        case 0x16effcu: goto label_16effc;
        case 0x16f000u: goto label_16f000;
        case 0x16f004u: goto label_16f004;
        case 0x16f008u: goto label_16f008;
        case 0x16f00cu: goto label_16f00c;
        case 0x16f010u: goto label_16f010;
        case 0x16f014u: goto label_16f014;
        case 0x16f018u: goto label_16f018;
        case 0x16f01cu: goto label_16f01c;
        case 0x16f020u: goto label_16f020;
        case 0x16f024u: goto label_16f024;
        case 0x16f028u: goto label_16f028;
        case 0x16f02cu: goto label_16f02c;
        case 0x16f030u: goto label_16f030;
        case 0x16f034u: goto label_16f034;
        case 0x16f038u: goto label_16f038;
        case 0x16f03cu: goto label_16f03c;
        case 0x16f040u: goto label_16f040;
        case 0x16f044u: goto label_16f044;
        case 0x16f048u: goto label_16f048;
        case 0x16f04cu: goto label_16f04c;
        case 0x16f050u: goto label_16f050;
        case 0x16f054u: goto label_16f054;
        case 0x16f058u: goto label_16f058;
        case 0x16f05cu: goto label_16f05c;
        case 0x16f060u: goto label_16f060;
        case 0x16f064u: goto label_16f064;
        case 0x16f068u: goto label_16f068;
        case 0x16f06cu: goto label_16f06c;
        case 0x16f070u: goto label_16f070;
        case 0x16f074u: goto label_16f074;
        case 0x16f078u: goto label_16f078;
        case 0x16f07cu: goto label_16f07c;
        case 0x16f080u: goto label_16f080;
        case 0x16f084u: goto label_16f084;
        case 0x16f088u: goto label_16f088;
        case 0x16f08cu: goto label_16f08c;
        case 0x16f090u: goto label_16f090;
        case 0x16f094u: goto label_16f094;
        case 0x16f098u: goto label_16f098;
        case 0x16f09cu: goto label_16f09c;
        case 0x16f0a0u: goto label_16f0a0;
        case 0x16f0a4u: goto label_16f0a4;
        case 0x16f0a8u: goto label_16f0a8;
        case 0x16f0acu: goto label_16f0ac;
        case 0x16f0b0u: goto label_16f0b0;
        case 0x16f0b4u: goto label_16f0b4;
        case 0x16f0b8u: goto label_16f0b8;
        case 0x16f0bcu: goto label_16f0bc;
        case 0x16f0c0u: goto label_16f0c0;
        case 0x16f0c4u: goto label_16f0c4;
        case 0x16f0c8u: goto label_16f0c8;
        case 0x16f0ccu: goto label_16f0cc;
        case 0x16f0d0u: goto label_16f0d0;
        case 0x16f0d4u: goto label_16f0d4;
        case 0x16f0d8u: goto label_16f0d8;
        case 0x16f0dcu: goto label_16f0dc;
        case 0x16f0e0u: goto label_16f0e0;
        case 0x16f0e4u: goto label_16f0e4;
        case 0x16f0e8u: goto label_16f0e8;
        case 0x16f0ecu: goto label_16f0ec;
        case 0x16f0f0u: goto label_16f0f0;
        case 0x16f0f4u: goto label_16f0f4;
        case 0x16f0f8u: goto label_16f0f8;
        case 0x16f0fcu: goto label_16f0fc;
        case 0x16f100u: goto label_16f100;
        case 0x16f104u: goto label_16f104;
        case 0x16f108u: goto label_16f108;
        case 0x16f10cu: goto label_16f10c;
        case 0x16f110u: goto label_16f110;
        case 0x16f114u: goto label_16f114;
        case 0x16f118u: goto label_16f118;
        case 0x16f11cu: goto label_16f11c;
        case 0x16f120u: goto label_16f120;
        case 0x16f124u: goto label_16f124;
        case 0x16f128u: goto label_16f128;
        case 0x16f12cu: goto label_16f12c;
        case 0x16f130u: goto label_16f130;
        case 0x16f134u: goto label_16f134;
        case 0x16f138u: goto label_16f138;
        case 0x16f13cu: goto label_16f13c;
        case 0x16f140u: goto label_16f140;
        case 0x16f144u: goto label_16f144;
        case 0x16f148u: goto label_16f148;
        case 0x16f14cu: goto label_16f14c;
        case 0x16f150u: goto label_16f150;
        case 0x16f154u: goto label_16f154;
        case 0x16f158u: goto label_16f158;
        case 0x16f15cu: goto label_16f15c;
        case 0x16f160u: goto label_16f160;
        case 0x16f164u: goto label_16f164;
        case 0x16f168u: goto label_16f168;
        case 0x16f16cu: goto label_16f16c;
        case 0x16f170u: goto label_16f170;
        case 0x16f174u: goto label_16f174;
        case 0x16f178u: goto label_16f178;
        case 0x16f17cu: goto label_16f17c;
        case 0x16f180u: goto label_16f180;
        case 0x16f184u: goto label_16f184;
        case 0x16f188u: goto label_16f188;
        case 0x16f18cu: goto label_16f18c;
        case 0x16f190u: goto label_16f190;
        case 0x16f194u: goto label_16f194;
        case 0x16f198u: goto label_16f198;
        case 0x16f19cu: goto label_16f19c;
        case 0x16f1a0u: goto label_16f1a0;
        case 0x16f1a4u: goto label_16f1a4;
        case 0x16f1a8u: goto label_16f1a8;
        case 0x16f1acu: goto label_16f1ac;
        case 0x16f1b0u: goto label_16f1b0;
        case 0x16f1b4u: goto label_16f1b4;
        case 0x16f1b8u: goto label_16f1b8;
        case 0x16f1bcu: goto label_16f1bc;
        case 0x16f1c0u: goto label_16f1c0;
        case 0x16f1c4u: goto label_16f1c4;
        case 0x16f1c8u: goto label_16f1c8;
        case 0x16f1ccu: goto label_16f1cc;
        case 0x16f1d0u: goto label_16f1d0;
        case 0x16f1d4u: goto label_16f1d4;
        case 0x16f1d8u: goto label_16f1d8;
        case 0x16f1dcu: goto label_16f1dc;
        case 0x16f1e0u: goto label_16f1e0;
        case 0x16f1e4u: goto label_16f1e4;
        case 0x16f1e8u: goto label_16f1e8;
        case 0x16f1ecu: goto label_16f1ec;
        case 0x16f1f0u: goto label_16f1f0;
        case 0x16f1f4u: goto label_16f1f4;
        case 0x16f1f8u: goto label_16f1f8;
        case 0x16f1fcu: goto label_16f1fc;
        case 0x16f200u: goto label_16f200;
        case 0x16f204u: goto label_16f204;
        case 0x16f208u: goto label_16f208;
        case 0x16f20cu: goto label_16f20c;
        case 0x16f210u: goto label_16f210;
        case 0x16f214u: goto label_16f214;
        case 0x16f218u: goto label_16f218;
        case 0x16f21cu: goto label_16f21c;
        case 0x16f220u: goto label_16f220;
        case 0x16f224u: goto label_16f224;
        case 0x16f228u: goto label_16f228;
        case 0x16f22cu: goto label_16f22c;
        case 0x16f230u: goto label_16f230;
        case 0x16f234u: goto label_16f234;
        case 0x16f238u: goto label_16f238;
        case 0x16f23cu: goto label_16f23c;
        case 0x16f240u: goto label_16f240;
        case 0x16f244u: goto label_16f244;
        case 0x16f248u: goto label_16f248;
        case 0x16f24cu: goto label_16f24c;
        case 0x16f250u: goto label_16f250;
        case 0x16f254u: goto label_16f254;
        case 0x16f258u: goto label_16f258;
        case 0x16f25cu: goto label_16f25c;
        case 0x16f260u: goto label_16f260;
        case 0x16f264u: goto label_16f264;
        case 0x16f268u: goto label_16f268;
        case 0x16f26cu: goto label_16f26c;
        case 0x16f270u: goto label_16f270;
        case 0x16f274u: goto label_16f274;
        case 0x16f278u: goto label_16f278;
        case 0x16f27cu: goto label_16f27c;
        case 0x16f280u: goto label_16f280;
        case 0x16f284u: goto label_16f284;
        case 0x16f288u: goto label_16f288;
        case 0x16f28cu: goto label_16f28c;
        case 0x16f290u: goto label_16f290;
        case 0x16f294u: goto label_16f294;
        case 0x16f298u: goto label_16f298;
        case 0x16f29cu: goto label_16f29c;
        case 0x16f2a0u: goto label_16f2a0;
        case 0x16f2a4u: goto label_16f2a4;
        case 0x16f2a8u: goto label_16f2a8;
        case 0x16f2acu: goto label_16f2ac;
        case 0x16f2b0u: goto label_16f2b0;
        case 0x16f2b4u: goto label_16f2b4;
        case 0x16f2b8u: goto label_16f2b8;
        case 0x16f2bcu: goto label_16f2bc;
        case 0x16f2c0u: goto label_16f2c0;
        case 0x16f2c4u: goto label_16f2c4;
        case 0x16f2c8u: goto label_16f2c8;
        case 0x16f2ccu: goto label_16f2cc;
        case 0x16f2d0u: goto label_16f2d0;
        case 0x16f2d4u: goto label_16f2d4;
        case 0x16f2d8u: goto label_16f2d8;
        case 0x16f2dcu: goto label_16f2dc;
        case 0x16f2e0u: goto label_16f2e0;
        case 0x16f2e4u: goto label_16f2e4;
        case 0x16f2e8u: goto label_16f2e8;
        case 0x16f2ecu: goto label_16f2ec;
        case 0x16f2f0u: goto label_16f2f0;
        case 0x16f2f4u: goto label_16f2f4;
        case 0x16f2f8u: goto label_16f2f8;
        case 0x16f2fcu: goto label_16f2fc;
        case 0x16f300u: goto label_16f300;
        case 0x16f304u: goto label_16f304;
        case 0x16f308u: goto label_16f308;
        case 0x16f30cu: goto label_16f30c;
        case 0x16f310u: goto label_16f310;
        case 0x16f314u: goto label_16f314;
        case 0x16f318u: goto label_16f318;
        case 0x16f31cu: goto label_16f31c;
        case 0x16f320u: goto label_16f320;
        case 0x16f324u: goto label_16f324;
        case 0x16f328u: goto label_16f328;
        case 0x16f32cu: goto label_16f32c;
        case 0x16f330u: goto label_16f330;
        case 0x16f334u: goto label_16f334;
        case 0x16f338u: goto label_16f338;
        case 0x16f33cu: goto label_16f33c;
        case 0x16f340u: goto label_16f340;
        case 0x16f344u: goto label_16f344;
        case 0x16f348u: goto label_16f348;
        case 0x16f34cu: goto label_16f34c;
        case 0x16f350u: goto label_16f350;
        case 0x16f354u: goto label_16f354;
        case 0x16f358u: goto label_16f358;
        case 0x16f35cu: goto label_16f35c;
        case 0x16f360u: goto label_16f360;
        case 0x16f364u: goto label_16f364;
        case 0x16f368u: goto label_16f368;
        case 0x16f36cu: goto label_16f36c;
        case 0x16f370u: goto label_16f370;
        case 0x16f374u: goto label_16f374;
        case 0x16f378u: goto label_16f378;
        case 0x16f37cu: goto label_16f37c;
        case 0x16f380u: goto label_16f380;
        case 0x16f384u: goto label_16f384;
        case 0x16f388u: goto label_16f388;
        case 0x16f38cu: goto label_16f38c;
        case 0x16f390u: goto label_16f390;
        case 0x16f394u: goto label_16f394;
        case 0x16f398u: goto label_16f398;
        case 0x16f39cu: goto label_16f39c;
        case 0x16f3a0u: goto label_16f3a0;
        case 0x16f3a4u: goto label_16f3a4;
        case 0x16f3a8u: goto label_16f3a8;
        case 0x16f3acu: goto label_16f3ac;
        case 0x16f3b0u: goto label_16f3b0;
        case 0x16f3b4u: goto label_16f3b4;
        case 0x16f3b8u: goto label_16f3b8;
        case 0x16f3bcu: goto label_16f3bc;
        case 0x16f3c0u: goto label_16f3c0;
        case 0x16f3c4u: goto label_16f3c4;
        case 0x16f3c8u: goto label_16f3c8;
        case 0x16f3ccu: goto label_16f3cc;
        case 0x16f3d0u: goto label_16f3d0;
        case 0x16f3d4u: goto label_16f3d4;
        case 0x16f3d8u: goto label_16f3d8;
        case 0x16f3dcu: goto label_16f3dc;
        case 0x16f3e0u: goto label_16f3e0;
        case 0x16f3e4u: goto label_16f3e4;
        case 0x16f3e8u: goto label_16f3e8;
        case 0x16f3ecu: goto label_16f3ec;
        case 0x16f3f0u: goto label_16f3f0;
        case 0x16f3f4u: goto label_16f3f4;
        case 0x16f3f8u: goto label_16f3f8;
        case 0x16f3fcu: goto label_16f3fc;
        case 0x16f400u: goto label_16f400;
        case 0x16f404u: goto label_16f404;
        case 0x16f408u: goto label_16f408;
        case 0x16f40cu: goto label_16f40c;
        case 0x16f410u: goto label_16f410;
        case 0x16f414u: goto label_16f414;
        case 0x16f418u: goto label_16f418;
        case 0x16f41cu: goto label_16f41c;
        case 0x16f420u: goto label_16f420;
        case 0x16f424u: goto label_16f424;
        case 0x16f428u: goto label_16f428;
        case 0x16f42cu: goto label_16f42c;
        case 0x16f430u: goto label_16f430;
        case 0x16f434u: goto label_16f434;
        case 0x16f438u: goto label_16f438;
        case 0x16f43cu: goto label_16f43c;
        case 0x16f440u: goto label_16f440;
        case 0x16f444u: goto label_16f444;
        case 0x16f448u: goto label_16f448;
        case 0x16f44cu: goto label_16f44c;
        case 0x16f450u: goto label_16f450;
        case 0x16f454u: goto label_16f454;
        case 0x16f458u: goto label_16f458;
        case 0x16f45cu: goto label_16f45c;
        case 0x16f460u: goto label_16f460;
        case 0x16f464u: goto label_16f464;
        case 0x16f468u: goto label_16f468;
        case 0x16f46cu: goto label_16f46c;
        case 0x16f470u: goto label_16f470;
        case 0x16f474u: goto label_16f474;
        case 0x16f478u: goto label_16f478;
        case 0x16f47cu: goto label_16f47c;
        case 0x16f480u: goto label_16f480;
        case 0x16f484u: goto label_16f484;
        case 0x16f488u: goto label_16f488;
        case 0x16f48cu: goto label_16f48c;
        case 0x16f490u: goto label_16f490;
        case 0x16f494u: goto label_16f494;
        case 0x16f498u: goto label_16f498;
        case 0x16f49cu: goto label_16f49c;
        case 0x16f4a0u: goto label_16f4a0;
        case 0x16f4a4u: goto label_16f4a4;
        case 0x16f4a8u: goto label_16f4a8;
        case 0x16f4acu: goto label_16f4ac;
        case 0x16f4b0u: goto label_16f4b0;
        case 0x16f4b4u: goto label_16f4b4;
        case 0x16f4b8u: goto label_16f4b8;
        case 0x16f4bcu: goto label_16f4bc;
        case 0x16f4c0u: goto label_16f4c0;
        case 0x16f4c4u: goto label_16f4c4;
        case 0x16f4c8u: goto label_16f4c8;
        case 0x16f4ccu: goto label_16f4cc;
        case 0x16f4d0u: goto label_16f4d0;
        case 0x16f4d4u: goto label_16f4d4;
        case 0x16f4d8u: goto label_16f4d8;
        case 0x16f4dcu: goto label_16f4dc;
        case 0x16f4e0u: goto label_16f4e0;
        case 0x16f4e4u: goto label_16f4e4;
        case 0x16f4e8u: goto label_16f4e8;
        case 0x16f4ecu: goto label_16f4ec;
        case 0x16f4f0u: goto label_16f4f0;
        case 0x16f4f4u: goto label_16f4f4;
        case 0x16f4f8u: goto label_16f4f8;
        case 0x16f4fcu: goto label_16f4fc;
        case 0x16f500u: goto label_16f500;
        case 0x16f504u: goto label_16f504;
        case 0x16f508u: goto label_16f508;
        case 0x16f50cu: goto label_16f50c;
        case 0x16f510u: goto label_16f510;
        case 0x16f514u: goto label_16f514;
        case 0x16f518u: goto label_16f518;
        case 0x16f51cu: goto label_16f51c;
        case 0x16f520u: goto label_16f520;
        case 0x16f524u: goto label_16f524;
        case 0x16f528u: goto label_16f528;
        case 0x16f52cu: goto label_16f52c;
        case 0x16f530u: goto label_16f530;
        case 0x16f534u: goto label_16f534;
        case 0x16f538u: goto label_16f538;
        case 0x16f53cu: goto label_16f53c;
        case 0x16f540u: goto label_16f540;
        case 0x16f544u: goto label_16f544;
        case 0x16f548u: goto label_16f548;
        case 0x16f54cu: goto label_16f54c;
        case 0x16f550u: goto label_16f550;
        case 0x16f554u: goto label_16f554;
        case 0x16f558u: goto label_16f558;
        case 0x16f55cu: goto label_16f55c;
        case 0x16f560u: goto label_16f560;
        case 0x16f564u: goto label_16f564;
        case 0x16f568u: goto label_16f568;
        case 0x16f56cu: goto label_16f56c;
        case 0x16f570u: goto label_16f570;
        case 0x16f574u: goto label_16f574;
        case 0x16f578u: goto label_16f578;
        case 0x16f57cu: goto label_16f57c;
        case 0x16f580u: goto label_16f580;
        case 0x16f584u: goto label_16f584;
        case 0x16f588u: goto label_16f588;
        case 0x16f58cu: goto label_16f58c;
        case 0x16f590u: goto label_16f590;
        case 0x16f594u: goto label_16f594;
        case 0x16f598u: goto label_16f598;
        case 0x16f59cu: goto label_16f59c;
        case 0x16f5a0u: goto label_16f5a0;
        case 0x16f5a4u: goto label_16f5a4;
        case 0x16f5a8u: goto label_16f5a8;
        case 0x16f5acu: goto label_16f5ac;
        case 0x16f5b0u: goto label_16f5b0;
        case 0x16f5b4u: goto label_16f5b4;
        case 0x16f5b8u: goto label_16f5b8;
        case 0x16f5bcu: goto label_16f5bc;
        case 0x16f5c0u: goto label_16f5c0;
        case 0x16f5c4u: goto label_16f5c4;
        case 0x16f5c8u: goto label_16f5c8;
        case 0x16f5ccu: goto label_16f5cc;
        case 0x16f5d0u: goto label_16f5d0;
        case 0x16f5d4u: goto label_16f5d4;
        case 0x16f5d8u: goto label_16f5d8;
        case 0x16f5dcu: goto label_16f5dc;
        case 0x16f5e0u: goto label_16f5e0;
        case 0x16f5e4u: goto label_16f5e4;
        case 0x16f5e8u: goto label_16f5e8;
        case 0x16f5ecu: goto label_16f5ec;
        case 0x16f5f0u: goto label_16f5f0;
        case 0x16f5f4u: goto label_16f5f4;
        case 0x16f5f8u: goto label_16f5f8;
        case 0x16f5fcu: goto label_16f5fc;
        case 0x16f600u: goto label_16f600;
        case 0x16f604u: goto label_16f604;
        case 0x16f608u: goto label_16f608;
        case 0x16f60cu: goto label_16f60c;
        case 0x16f610u: goto label_16f610;
        case 0x16f614u: goto label_16f614;
        case 0x16f618u: goto label_16f618;
        case 0x16f61cu: goto label_16f61c;
        case 0x16f620u: goto label_16f620;
        case 0x16f624u: goto label_16f624;
        case 0x16f628u: goto label_16f628;
        case 0x16f62cu: goto label_16f62c;
        case 0x16f630u: goto label_16f630;
        case 0x16f634u: goto label_16f634;
        case 0x16f638u: goto label_16f638;
        case 0x16f63cu: goto label_16f63c;
        case 0x16f640u: goto label_16f640;
        case 0x16f644u: goto label_16f644;
        case 0x16f648u: goto label_16f648;
        case 0x16f64cu: goto label_16f64c;
        case 0x16f650u: goto label_16f650;
        case 0x16f654u: goto label_16f654;
        case 0x16f658u: goto label_16f658;
        case 0x16f65cu: goto label_16f65c;
        case 0x16f660u: goto label_16f660;
        case 0x16f664u: goto label_16f664;
        case 0x16f668u: goto label_16f668;
        case 0x16f66cu: goto label_16f66c;
        case 0x16f670u: goto label_16f670;
        case 0x16f674u: goto label_16f674;
        case 0x16f678u: goto label_16f678;
        case 0x16f67cu: goto label_16f67c;
        case 0x16f680u: goto label_16f680;
        case 0x16f684u: goto label_16f684;
        case 0x16f688u: goto label_16f688;
        case 0x16f68cu: goto label_16f68c;
        case 0x16f690u: goto label_16f690;
        case 0x16f694u: goto label_16f694;
        case 0x16f698u: goto label_16f698;
        case 0x16f69cu: goto label_16f69c;
        case 0x16f6a0u: goto label_16f6a0;
        case 0x16f6a4u: goto label_16f6a4;
        case 0x16f6a8u: goto label_16f6a8;
        case 0x16f6acu: goto label_16f6ac;
        case 0x16f6b0u: goto label_16f6b0;
        case 0x16f6b4u: goto label_16f6b4;
        case 0x16f6b8u: goto label_16f6b8;
        case 0x16f6bcu: goto label_16f6bc;
        case 0x16f6c0u: goto label_16f6c0;
        case 0x16f6c4u: goto label_16f6c4;
        case 0x16f6c8u: goto label_16f6c8;
        case 0x16f6ccu: goto label_16f6cc;
        case 0x16f6d0u: goto label_16f6d0;
        case 0x16f6d4u: goto label_16f6d4;
        case 0x16f6d8u: goto label_16f6d8;
        case 0x16f6dcu: goto label_16f6dc;
        case 0x16f6e0u: goto label_16f6e0;
        case 0x16f6e4u: goto label_16f6e4;
        case 0x16f6e8u: goto label_16f6e8;
        case 0x16f6ecu: goto label_16f6ec;
        case 0x16f6f0u: goto label_16f6f0;
        case 0x16f6f4u: goto label_16f6f4;
        case 0x16f6f8u: goto label_16f6f8;
        case 0x16f6fcu: goto label_16f6fc;
        case 0x16f700u: goto label_16f700;
        case 0x16f704u: goto label_16f704;
        case 0x16f708u: goto label_16f708;
        case 0x16f70cu: goto label_16f70c;
        default: return;
    }

label_16ef40:
    // 0x16ef40: 0x14ec0003  bne         $a3, $t4, . + 4 + (0x3 << 2)
label_16ef44:
    if (ctx->pc == 0x16EF44u) {
        ctx->pc = 0x16EF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EF40u;
        // 0x16ef44: 0x2053021  addu        $a2, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16EF48u;
        goto label_16ef48;
    }
    ctx->pc = 0x16EF40u;
    {
        const bool branch_taken_0x16ef40 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 12));
        ctx->pc = 0x16EF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EF40u;
        // 0x16ef44: 0x2053021  addu        $a2, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ef40) {
            ctx->pc = 0x16EF50u;
            goto label_16ef50;
        }
    }
    ctx->pc = 0x16EF48u;
label_16ef48:
    // 0x16ef48: 0x10000005  b           . + 4 + (0x5 << 2)
label_16ef4c:
    if (ctx->pc == 0x16EF4Cu) {
        ctx->pc = 0x16EF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EF48u;
        // 0x16ef4c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16EF50u;
        goto label_16ef50;
    }
    ctx->pc = 0x16EF48u;
    {
        const bool branch_taken_0x16ef48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16EF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EF48u;
        // 0x16ef4c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ef48) {
            ctx->pc = 0x16EF60u;
            goto label_16ef60;
        }
    }
    ctx->pc = 0x16EF50u;
label_16ef50:
    // 0x16ef50: 0x73900  sll         $a3, $a3, 4
    ctx->pc = 0x16ef50u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
label_16ef54:
    // 0x16ef54: 0x1673821  addu        $a3, $t3, $a3
    ctx->pc = 0x16ef54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 7)));
label_16ef58:
    // 0x16ef58: 0x8ce90008  lw          $t1, 0x8($a3)
    ctx->pc = 0x16ef58u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
label_16ef5c:
    // 0x16ef5c: 0x0  nop
    ctx->pc = 0x16ef5cu;
    // NOP
label_16ef60:
    // 0x16ef60: 0x8cc8fffc  lw          $t0, -0x4($a2)
    ctx->pc = 0x16ef60u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294967292)));
label_16ef64:
    // 0x16ef64: 0x1443821  addu        $a3, $t2, $a0
    ctx->pc = 0x16ef64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
label_16ef68:
    // 0x16ef68: 0x1094021  addu        $t0, $t0, $t1
    ctx->pc = 0x16ef68u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
label_16ef6c:
    // 0x16ef6c: 0xacc80014  sw          $t0, 0x14($a2)
    ctx->pc = 0x16ef6cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 8));
label_16ef70:
    // 0x16ef70: 0x8ce7fffc  lw          $a3, -0x4($a3)
    ctx->pc = 0x16ef70u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294967292)));
label_16ef74:
    // 0x16ef74: 0x14ec0003  bne         $a3, $t4, . + 4 + (0x3 << 2)
label_16ef78:
    if (ctx->pc == 0x16EF78u) {
        ctx->pc = 0x16EF7Cu;
        goto label_16ef7c;
    }
    ctx->pc = 0x16EF74u;
    {
        const bool branch_taken_0x16ef74 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 12));
        if (branch_taken_0x16ef74) {
            ctx->pc = 0x16EF84u;
            goto label_16ef84;
        }
    }
    ctx->pc = 0x16EF7Cu;
label_16ef7c:
    // 0x16ef7c: 0x10000005  b           . + 4 + (0x5 << 2)
label_16ef80:
    if (ctx->pc == 0x16EF80u) {
        ctx->pc = 0x16EF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EF7Cu;
        // 0x16ef80: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16EF84u;
        goto label_16ef84;
    }
    ctx->pc = 0x16EF7Cu;
    {
        const bool branch_taken_0x16ef7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16EF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EF7Cu;
        // 0x16ef80: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ef7c) {
            ctx->pc = 0x16EF94u;
            goto label_16ef94;
        }
    }
    ctx->pc = 0x16EF84u;
label_16ef84:
    // 0x16ef84: 0x73900  sll         $a3, $a3, 4
    ctx->pc = 0x16ef84u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
label_16ef88:
    // 0x16ef88: 0x1673821  addu        $a3, $t3, $a3
    ctx->pc = 0x16ef88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 7)));
label_16ef8c:
    // 0x16ef8c: 0x8ce90008  lw          $t1, 0x8($a3)
    ctx->pc = 0x16ef8cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
label_16ef90:
    // 0x16ef90: 0x0  nop
    ctx->pc = 0x16ef90u;
    // NOP
label_16ef94:
    // 0x16ef94: 0x8cc8fff8  lw          $t0, -0x8($a2)
    ctx->pc = 0x16ef94u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294967288)));
label_16ef98:
    // 0x16ef98: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x16ef98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_16ef9c:
    // 0x16ef9c: 0x28670003  slti        $a3, $v1, 0x3
    ctx->pc = 0x16ef9cu;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_16efa0:
    // 0x16efa0: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x16efa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_16efa4:
    // 0x16efa4: 0x24a50018  addiu       $a1, $a1, 0x18
    ctx->pc = 0x16efa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24));
label_16efa8:
    // 0x16efa8: 0x1094021  addu        $t0, $t0, $t1
    ctx->pc = 0x16efa8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
label_16efac:
    // 0x16efac: 0x14e0ffe2  bnez        $a3, . + 4 + (-0x1E << 2)
label_16efb0:
    if (ctx->pc == 0x16EFB0u) {
        ctx->pc = 0x16EFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EFACu;
        // 0x16efb0: 0xacc80010  sw          $t0, 0x10($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16EFB4u;
        goto label_16efb4;
    }
    ctx->pc = 0x16EFACu;
    {
        const bool branch_taken_0x16efac = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x16EFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EFACu;
        // 0x16efb0: 0xacc80010  sw          $t0, 0x10($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16efac) {
            ctx->pc = 0x16EF38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x16ef38; return; }
        }
    }
    ctx->pc = 0x16EFB4u;
label_16efb4:
    // 0x16efb4: 0x1000017f  b           . + 4 + (0x17F << 2)
label_16efb8:
    if (ctx->pc == 0x16EFB8u) {
        ctx->pc = 0x16EFBCu;
        goto label_16efbc;
    }
    ctx->pc = 0x16EFB4u;
    {
        const bool branch_taken_0x16efb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16efb4) {
            ctx->pc = 0x16F5B4u;
            goto label_16f5b4;
        }
    }
    ctx->pc = 0x16EFBCu;
label_16efbc:
    // 0x16efbc: 0x3c010029  lui         $at, 0x29
    ctx->pc = 0x16efbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)41 << 16));
label_16efc0:
    // 0x16efc0: 0x3c030003  lui         $v1, 0x3
    ctx->pc = 0x16efc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)3 << 16));
label_16efc4:
    // 0x16efc4: 0x8c245998  lw          $a0, 0x5998($at)
    ctx->pc = 0x16efc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 22936)));
label_16efc8:
    // 0x16efc8: 0x3463d000  ori         $v1, $v1, 0xD000
    ctx->pc = 0x16efc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)53248);
label_16efcc:
    // 0x16efcc: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x16efccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_16efd0:
    // 0x16efd0: 0x3c010029  lui         $at, 0x29
    ctx->pc = 0x16efd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)41 << 16));
label_16efd4:
    // 0x16efd4: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x16efd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_16efd8:
    // 0x16efd8: 0xae04002c  sw          $a0, 0x2C($s0)
    ctx->pc = 0x16efd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 4));
label_16efdc:
    // 0x16efdc: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x16efdcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_16efe0:
    // 0x16efe0: 0x8c245188  lw          $a0, 0x5188($at)
    ctx->pc = 0x16efe0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 20872)));
label_16efe4:
    // 0x16efe4: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x16efe4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_16efe8:
    // 0x16efe8: 0xae040028  sw          $a0, 0x28($s0)
    ctx->pc = 0x16efe8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 4));
label_16efec:
    // 0x16efec: 0x8e04002c  lw          $a0, 0x2C($s0)
    ctx->pc = 0x16efecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_16eff0:
    // 0x16eff0: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x16eff0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_16eff4:
    // 0x16eff4: 0xae040044  sw          $a0, 0x44($s0)
    ctx->pc = 0x16eff4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 4));
label_16eff8:
    // 0x16eff8: 0x8e040028  lw          $a0, 0x28($s0)
    ctx->pc = 0x16eff8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_16effc:
    // 0x16effc: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x16effcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
label_16f000:
    // 0x16f000: 0xae040040  sw          $a0, 0x40($s0)
    ctx->pc = 0x16f000u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 4));
label_16f004:
    // 0x16f004: 0x8e040044  lw          $a0, 0x44($s0)
    ctx->pc = 0x16f004u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_16f008:
    // 0x16f008: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x16f008u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_16f00c:
    // 0x16f00c: 0xae04005c  sw          $a0, 0x5C($s0)
    ctx->pc = 0x16f00cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 4));
label_16f010:
    // 0x16f010: 0x8e040040  lw          $a0, 0x40($s0)
    ctx->pc = 0x16f010u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_16f014:
    // 0x16f014: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x16f014u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
label_16f018:
    // 0x16f018: 0xae040058  sw          $a0, 0x58($s0)
    ctx->pc = 0x16f018u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 4));
label_16f01c:
    // 0x16f01c: 0x8e04005c  lw          $a0, 0x5C($s0)
    ctx->pc = 0x16f01cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
label_16f020:
    // 0x16f020: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x16f020u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_16f024:
    // 0x16f024: 0xae040074  sw          $a0, 0x74($s0)
    ctx->pc = 0x16f024u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 4));
label_16f028:
    // 0x16f028: 0x8e040058  lw          $a0, 0x58($s0)
    ctx->pc = 0x16f028u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_16f02c:
    // 0x16f02c: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x16f02cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
label_16f030:
    // 0x16f030: 0xae040070  sw          $a0, 0x70($s0)
    ctx->pc = 0x16f030u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 4));
label_16f034:
    // 0x16f034: 0x8e040074  lw          $a0, 0x74($s0)
    ctx->pc = 0x16f034u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_16f038:
    // 0x16f038: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x16f038u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_16f03c:
    // 0x16f03c: 0xae04008c  sw          $a0, 0x8C($s0)
    ctx->pc = 0x16f03cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 4));
label_16f040:
    // 0x16f040: 0x8e040070  lw          $a0, 0x70($s0)
    ctx->pc = 0x16f040u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
label_16f044:
    // 0x16f044: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x16f044u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
label_16f048:
    // 0x16f048: 0xae040088  sw          $a0, 0x88($s0)
    ctx->pc = 0x16f048u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 4));
label_16f04c:
    // 0x16f04c: 0x8e04008c  lw          $a0, 0x8C($s0)
    ctx->pc = 0x16f04cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
label_16f050:
    // 0x16f050: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x16f050u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_16f054:
    // 0x16f054: 0xae0300a4  sw          $v1, 0xA4($s0)
    ctx->pc = 0x16f054u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 3));
label_16f058:
    // 0x16f058: 0x8e030088  lw          $v1, 0x88($s0)
    ctx->pc = 0x16f058u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
label_16f05c:
    // 0x16f05c: 0x24630120  addiu       $v1, $v1, 0x120
    ctx->pc = 0x16f05cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
label_16f060:
    // 0x16f060: 0x10000154  b           . + 4 + (0x154 << 2)
label_16f064:
    if (ctx->pc == 0x16F064u) {
        ctx->pc = 0x16F064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F060u;
        // 0x16f064: 0xae0300a0  sw          $v1, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16F068u;
        goto label_16f068;
    }
    ctx->pc = 0x16F060u;
    {
        const bool branch_taken_0x16f060 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F060u;
        // 0x16f064: 0xae0300a0  sw          $v1, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f060) {
            ctx->pc = 0x16F5B4u;
            goto label_16f5b4;
        }
    }
    ctx->pc = 0x16F068u;
label_16f068:
    // 0x16f068: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x16f068u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16f06c:
    // 0x16f06c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x16f06cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16f070:
    // 0x16f070: 0x2e210008  sltiu       $at, $s1, 0x8
    ctx->pc = 0x16f070u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_16f074:
    // 0x16f074: 0x10200132  beqz        $at, . + 4 + (0x132 << 2)
label_16f078:
    if (ctx->pc == 0x16F078u) {
        ctx->pc = 0x16F078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F074u;
        // 0x16f078: 0x3c06002d  lui         $a2, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16F07Cu;
        goto label_16f07c;
    }
    ctx->pc = 0x16F074u;
    {
        const bool branch_taken_0x16f074 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F074u;
        // 0x16f078: 0x3c06002d  lui         $a2, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f074) {
            ctx->pc = 0x16F540u;
            goto label_16f540;
        }
    }
    ctx->pc = 0x16F07Cu;
label_16f07c:
    // 0x16f07c: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x16f07cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_16f080:
    // 0x16f080: 0x24c69690  addiu       $a2, $a2, -0x6970
    ctx->pc = 0x16f080u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294940304));
label_16f084:
    // 0x16f084: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x16f084u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_16f088:
    // 0x16f088: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x16f088u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_16f08c:
    // 0x16f08c: 0x600008  jr          $v1
label_16f090:
    if (ctx->pc == 0x16F090u) {
        ctx->pc = 0x16F094u;
        goto label_16f094;
    }
    ctx->pc = 0x16F08Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16F094u: goto label_16f094;
            case 0x16F110u: goto label_16f110;
            case 0x16F200u: goto label_16f200;
            case 0x16F310u: goto label_16f310;
            case 0x16F390u: goto label_16f390;
            case 0x16F4A4u: goto label_16f4a4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16F08Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x16F094u;
label_16f094:
    // 0x16f094: 0x0  nop
    ctx->pc = 0x16f094u;
    // NOP
label_16f098:
    // 0x16f098: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x16f098u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
label_16f09c:
    // 0x16f09c: 0x2463e2b0  addiu       $v1, $v1, -0x1D50
    ctx->pc = 0x16f09cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959792));
label_16f0a0:
    // 0x16f0a0: 0x722021  addu        $a0, $v1, $s2
    ctx->pc = 0x16f0a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_16f0a4:
    // 0x16f0a4: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x16f0a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_16f0a8:
    // 0x16f0a8: 0x24030c2d  addiu       $v1, $zero, 0xC2D
    ctx->pc = 0x16f0a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3117));
label_16f0ac:
    // 0x16f0ac: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
label_16f0b0:
    if (ctx->pc == 0x16F0B0u) {
        ctx->pc = 0x16F0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F0ACu;
        // 0x16f0b0: 0x3c030029  lui         $v1, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16F0B4u;
        goto label_16f0b4;
    }
    ctx->pc = 0x16F0ACu;
    {
        const bool branch_taken_0x16f0ac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x16F0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F0ACu;
        // 0x16f0b0: 0x3c030029  lui         $v1, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f0ac) {
            ctx->pc = 0x16F0BCu;
            goto label_16f0bc;
        }
    }
    ctx->pc = 0x16F0B4u;
label_16f0b4:
    // 0x16f0b4: 0x10000006  b           . + 4 + (0x6 << 2)
label_16f0b8:
    if (ctx->pc == 0x16F0B8u) {
        ctx->pc = 0x16F0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F0B4u;
        // 0x16f0b8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16F0BCu;
        goto label_16f0bc;
    }
    ctx->pc = 0x16F0B4u;
    {
        const bool branch_taken_0x16f0b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F0B4u;
        // 0x16f0b8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f0b4) {
            ctx->pc = 0x16F0D0u;
            goto label_16f0d0;
        }
    }
    ctx->pc = 0x16F0BCu;
label_16f0bc:
    // 0x16f0bc: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x16f0bcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_16f0c0:
    // 0x16f0c0: 0x24630cf0  addiu       $v1, $v1, 0xCF0
    ctx->pc = 0x16f0c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3312));
label_16f0c4:
    // 0x16f0c4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x16f0c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_16f0c8:
    // 0x16f0c8: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x16f0c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_16f0cc:
    // 0x16f0cc: 0x0  nop
    ctx->pc = 0x16f0ccu;
    // NOP
label_16f0d0:
    // 0x16f0d0: 0x3c050028  lui         $a1, 0x28
    ctx->pc = 0x16f0d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)40 << 16));
label_16f0d4:
    // 0x16f0d4: 0x24030c2d  addiu       $v1, $zero, 0xC2D
    ctx->pc = 0x16f0d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3117));
label_16f0d8:
    // 0x16f0d8: 0x24a5e290  addiu       $a1, $a1, -0x1D70
    ctx->pc = 0x16f0d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959760));
label_16f0dc:
    // 0x16f0dc: 0xb22821  addu        $a1, $a1, $s2
    ctx->pc = 0x16f0dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
label_16f0e0:
    // 0x16f0e0: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x16f0e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_16f0e4:
    // 0x16f0e4: 0x14a30003  bne         $a1, $v1, . + 4 + (0x3 << 2)
label_16f0e8:
    if (ctx->pc == 0x16F0E8u) {
        ctx->pc = 0x16F0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F0E4u;
        // 0x16f0e8: 0x3c030029  lui         $v1, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16F0ECu;
        goto label_16f0ec;
    }
    ctx->pc = 0x16F0E4u;
    {
        const bool branch_taken_0x16f0e4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x16F0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F0E4u;
        // 0x16f0e8: 0x3c030029  lui         $v1, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f0e4) {
            ctx->pc = 0x16F0F4u;
            goto label_16f0f4;
        }
    }
    ctx->pc = 0x16F0ECu;
label_16f0ec:
    // 0x16f0ec: 0x10000006  b           . + 4 + (0x6 << 2)
label_16f0f0:
    if (ctx->pc == 0x16F0F0u) {
        ctx->pc = 0x16F0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F0ECu;
        // 0x16f0f0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16F0F4u;
        goto label_16f0f4;
    }
    ctx->pc = 0x16F0ECu;
    {
        const bool branch_taken_0x16f0ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F0ECu;
        // 0x16f0f0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f0ec) {
            ctx->pc = 0x16F108u;
            goto label_16f108;
        }
    }
    ctx->pc = 0x16F0F4u;
label_16f0f4:
    // 0x16f0f4: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x16f0f4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_16f0f8:
    // 0x16f0f8: 0x24630cf0  addiu       $v1, $v1, 0xCF0
    ctx->pc = 0x16f0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3312));
label_16f0fc:
    // 0x16f0fc: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x16f0fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_16f100:
    // 0x16f100: 0x8c650008  lw          $a1, 0x8($v1)
    ctx->pc = 0x16f100u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_16f104:
    // 0x16f104: 0x0  nop
    ctx->pc = 0x16f104u;
    // NOP
label_16f108:
    // 0x16f108: 0x1000010d  b           . + 4 + (0x10D << 2)
label_16f10c:
    if (ctx->pc == 0x16F10Cu) {
        ctx->pc = 0x16F110u;
        goto label_16f110;
    }
    ctx->pc = 0x16F108u;
    {
        const bool branch_taken_0x16f108 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16f108) {
            ctx->pc = 0x16F540u;
            goto label_16f540;
        }
    }
    ctx->pc = 0x16F110u;
label_16f110:
    // 0x16f110: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x16f110u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_16f114:
    // 0x16f114: 0x84244af4  lh          $a0, 0x4AF4($at)
    ctx->pc = 0x16f114u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 19188)));
label_16f118:
    // 0x16f118: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x16f118u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_16f11c:
    // 0x16f11c: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
label_16f120:
    if (ctx->pc == 0x16F120u) {
        ctx->pc = 0x16F120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F11Cu;
        // 0x16f120: 0x2403000a  addiu       $v1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16F124u;
        goto label_16f124;
    }
    ctx->pc = 0x16F11Cu;
    {
        const bool branch_taken_0x16f11c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x16F120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F11Cu;
        // 0x16f120: 0x2403000a  addiu       $v1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f11c) {
            ctx->pc = 0x16F12Cu;
            goto label_16f12c;
        }
    }
    ctx->pc = 0x16F124u;
label_16f124:
    // 0x16f124: 0x1483001c  bne         $a0, $v1, . + 4 + (0x1C << 2)
label_16f128:
    if (ctx->pc == 0x16F128u) {
        ctx->pc = 0x16F12Cu;
        goto label_16f12c;
    }
    ctx->pc = 0x16F124u;
    {
        const bool branch_taken_0x16f124 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x16f124) {
            ctx->pc = 0x16F198u;
            goto label_16f198;
        }
    }
    ctx->pc = 0x16F12Cu;
label_16f12c:
    // 0x16f12c: 0x0  nop
    ctx->pc = 0x16f12cu;
    // NOP
label_16f130:
    // 0x16f130: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16f130u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
label_16f134:
    // 0x16f134: 0x8c24e2c0  lw          $a0, -0x1D40($at)
    ctx->pc = 0x16f134u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294959808)));
label_16f138:
    // 0x16f138: 0x24030c2d  addiu       $v1, $zero, 0xC2D
    ctx->pc = 0x16f138u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3117));
label_16f13c:
    // 0x16f13c: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
label_16f140:
    if (ctx->pc == 0x16F140u) {
        ctx->pc = 0x16F140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F13Cu;
        // 0x16f140: 0x3c030029  lui         $v1, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16F144u;
        goto label_16f144;
    }
    ctx->pc = 0x16F13Cu;
    {
        const bool branch_taken_0x16f13c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x16F140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F13Cu;
        // 0x16f140: 0x3c030029  lui         $v1, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f13c) {
            ctx->pc = 0x16F14Cu;
            goto label_16f14c;
        }
    }
    ctx->pc = 0x16F144u;
label_16f144:
    // 0x16f144: 0x10000006  b           . + 4 + (0x6 << 2)
label_16f148:
    if (ctx->pc == 0x16F148u) {
        ctx->pc = 0x16F148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F144u;
        // 0x16f148: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16F14Cu;
        goto label_16f14c;
    }
    ctx->pc = 0x16F144u;
    {
        const bool branch_taken_0x16f144 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F144u;
        // 0x16f148: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f144) {
            ctx->pc = 0x16F160u;
            goto label_16f160;
        }
    }
    ctx->pc = 0x16F14Cu;
label_16f14c:
    // 0x16f14c: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x16f14cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_16f150:
    // 0x16f150: 0x24630cf0  addiu       $v1, $v1, 0xCF0
    ctx->pc = 0x16f150u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3312));
label_16f154:
    // 0x16f154: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x16f154u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_16f158:
    // 0x16f158: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x16f158u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_16f15c:
    // 0x16f15c: 0x0  nop
    ctx->pc = 0x16f15cu;
    // NOP
label_16f160:
    // 0x16f160: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16f160u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
label_16f164:
    // 0x16f164: 0x24030c2d  addiu       $v1, $zero, 0xC2D
    ctx->pc = 0x16f164u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3117));
label_16f168:
    // 0x16f168: 0x8c25e2a0  lw          $a1, -0x1D60($at)
    ctx->pc = 0x16f168u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294959776)));
label_16f16c:
    // 0x16f16c: 0x14a30003  bne         $a1, $v1, . + 4 + (0x3 << 2)
label_16f170:
    if (ctx->pc == 0x16F170u) {
        ctx->pc = 0x16F170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F16Cu;
        // 0x16f170: 0x3c030029  lui         $v1, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16F174u;
        goto label_16f174;
    }
    ctx->pc = 0x16F16Cu;
    {
        const bool branch_taken_0x16f16c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x16F170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F16Cu;
        // 0x16f170: 0x3c030029  lui         $v1, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f16c) {
            ctx->pc = 0x16F17Cu;
            goto label_16f17c;
        }
    }
    ctx->pc = 0x16F174u;
label_16f174:
    // 0x16f174: 0x10000006  b           . + 4 + (0x6 << 2)
label_16f178:
    if (ctx->pc == 0x16F178u) {
        ctx->pc = 0x16F178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F174u;
        // 0x16f178: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16F17Cu;
        goto label_16f17c;
    }
    ctx->pc = 0x16F174u;
    {
        const bool branch_taken_0x16f174 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F174u;
        // 0x16f178: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f174) {
            ctx->pc = 0x16F190u;
            goto label_16f190;
        }
    }
    ctx->pc = 0x16F17Cu;
label_16f17c:
    // 0x16f17c: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x16f17cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_16f180:
    // 0x16f180: 0x24630cf0  addiu       $v1, $v1, 0xCF0
    ctx->pc = 0x16f180u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3312));
label_16f184:
    // 0x16f184: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x16f184u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_16f188:
    // 0x16f188: 0x8c650008  lw          $a1, 0x8($v1)
    ctx->pc = 0x16f188u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_16f18c:
    // 0x16f18c: 0x0  nop
    ctx->pc = 0x16f18cu;
    // NOP
label_16f190:
    // 0x16f190: 0x100000eb  b           . + 4 + (0xEB << 2)
label_16f194:
    if (ctx->pc == 0x16F194u) {
        ctx->pc = 0x16F198u;
        goto label_16f198;
    }
    ctx->pc = 0x16F190u;
    {
        const bool branch_taken_0x16f190 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16f190) {
            ctx->pc = 0x16F540u;
            goto label_16f540;
        }
    }
    ctx->pc = 0x16F198u;
label_16f198:
    // 0x16f198: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16f198u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
label_16f19c:
    // 0x16f19c: 0x8c24e2bc  lw          $a0, -0x1D44($at)
    ctx->pc = 0x16f19cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294959804)));
label_16f1a0:
    // 0x16f1a0: 0x24030c2d  addiu       $v1, $zero, 0xC2D
    ctx->pc = 0x16f1a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3117));
label_16f1a4:
    // 0x16f1a4: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
label_16f1a8:
    if (ctx->pc == 0x16F1A8u) {
        ctx->pc = 0x16F1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F1A4u;
        // 0x16f1a8: 0x3c030029  lui         $v1, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16F1ACu;
        goto label_16f1ac;
    }
    ctx->pc = 0x16F1A4u;
    {
        const bool branch_taken_0x16f1a4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x16F1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F1A4u;
        // 0x16f1a8: 0x3c030029  lui         $v1, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f1a4) {
            ctx->pc = 0x16F1B4u;
            goto label_16f1b4;
        }
    }
    ctx->pc = 0x16F1ACu;
label_16f1ac:
    // 0x16f1ac: 0x10000006  b           . + 4 + (0x6 << 2)
label_16f1b0:
    if (ctx->pc == 0x16F1B0u) {
        ctx->pc = 0x16F1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F1ACu;
        // 0x16f1b0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16F1B4u;
        goto label_16f1b4;
    }
    ctx->pc = 0x16F1ACu;
    {
        const bool branch_taken_0x16f1ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F1ACu;
        // 0x16f1b0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f1ac) {
            ctx->pc = 0x16F1C8u;
            goto label_16f1c8;
        }
    }
    ctx->pc = 0x16F1B4u;
label_16f1b4:
    // 0x16f1b4: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x16f1b4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_16f1b8:
    // 0x16f1b8: 0x24630cf0  addiu       $v1, $v1, 0xCF0
    ctx->pc = 0x16f1b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3312));
label_16f1bc:
    // 0x16f1bc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x16f1bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_16f1c0:
    // 0x16f1c0: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x16f1c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_16f1c4:
    // 0x16f1c4: 0x0  nop
    ctx->pc = 0x16f1c4u;
    // NOP
label_16f1c8:
    // 0x16f1c8: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16f1c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
label_16f1cc:
    // 0x16f1cc: 0x24030c2d  addiu       $v1, $zero, 0xC2D
    ctx->pc = 0x16f1ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3117));
label_16f1d0:
    // 0x16f1d0: 0x8c25e29c  lw          $a1, -0x1D64($at)
    ctx->pc = 0x16f1d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294959772)));
label_16f1d4:
    // 0x16f1d4: 0x14a30003  bne         $a1, $v1, . + 4 + (0x3 << 2)
label_16f1d8:
    if (ctx->pc == 0x16F1D8u) {
        ctx->pc = 0x16F1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F1D4u;
        // 0x16f1d8: 0x3c030029  lui         $v1, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16F1DCu;
        goto label_16f1dc;
    }
    ctx->pc = 0x16F1D4u;
    {
        const bool branch_taken_0x16f1d4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x16F1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F1D4u;
        // 0x16f1d8: 0x3c030029  lui         $v1, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f1d4) {
            ctx->pc = 0x16F1E4u;
            goto label_16f1e4;
        }
    }
    ctx->pc = 0x16F1DCu;
label_16f1dc:
    // 0x16f1dc: 0x10000006  b           . + 4 + (0x6 << 2)
label_16f1e0:
    if (ctx->pc == 0x16F1E0u) {
        ctx->pc = 0x16F1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F1DCu;
        // 0x16f1e0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16F1E4u;
        goto label_16f1e4;
    }
    ctx->pc = 0x16F1DCu;
    {
        const bool branch_taken_0x16f1dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F1DCu;
        // 0x16f1e0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f1dc) {
            ctx->pc = 0x16F1F8u;
            goto label_16f1f8;
        }
    }
    ctx->pc = 0x16F1E4u;
label_16f1e4:
    // 0x16f1e4: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x16f1e4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_16f1e8:
    // 0x16f1e8: 0x24630cf0  addiu       $v1, $v1, 0xCF0
    ctx->pc = 0x16f1e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3312));
label_16f1ec:
    // 0x16f1ec: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x16f1ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_16f1f0:
    // 0x16f1f0: 0x8c650008  lw          $a1, 0x8($v1)
    ctx->pc = 0x16f1f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_16f1f4:
    // 0x16f1f4: 0x0  nop
    ctx->pc = 0x16f1f4u;
    // NOP
label_16f1f8:
    // 0x16f1f8: 0x100000d1  b           . + 4 + (0xD1 << 2)
label_16f1fc:
    if (ctx->pc == 0x16F1FCu) {
        ctx->pc = 0x16F200u;
        goto label_16f200;
    }
    ctx->pc = 0x16F1F8u;
    {
        const bool branch_taken_0x16f1f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16f1f8) {
            ctx->pc = 0x16F540u;
            goto label_16f540;
        }
    }
    ctx->pc = 0x16F200u;
label_16f200:
    // 0x16f200: 0x8f838590  lw          $v1, -0x7A70($gp)
    ctx->pc = 0x16f200u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
label_16f204:
    // 0x16f204: 0x30630400  andi        $v1, $v1, 0x400
    ctx->pc = 0x16f204u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1024);
label_16f208:
    // 0x16f208: 0x10600021  beqz        $v1, . + 4 + (0x21 << 2)
label_16f20c:
    if (ctx->pc == 0x16F20Cu) {
        ctx->pc = 0x16F210u;
        goto label_16f210;
    }
    ctx->pc = 0x16F208u;
    {
        const bool branch_taken_0x16f208 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x16f208) {
            ctx->pc = 0x16F290u;
            goto label_16f290;
        }
    }
    ctx->pc = 0x16F210u;
label_16f210:
    // 0x16f210: 0x8f858714  lw          $a1, -0x78EC($gp)
    ctx->pc = 0x16f210u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
label_16f214:
    // 0x16f214: 0x3c040028  lui         $a0, 0x28
    ctx->pc = 0x16f214u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)40 << 16));
label_16f218:
    // 0x16f218: 0x24841060  addiu       $a0, $a0, 0x1060
    ctx->pc = 0x16f218u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4192));
label_16f21c:
    // 0x16f21c: 0x24030c2d  addiu       $v1, $zero, 0xC2D
    ctx->pc = 0x16f21cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3117));
label_16f220:
    // 0x16f220: 0x53080  sll         $a2, $a1, 2
    ctx->pc = 0x16f220u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_16f224:
    // 0x16f224: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x16f224u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_16f228:
    // 0x16f228: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x16f228u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_16f22c:
    // 0x16f22c: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
label_16f230:
    if (ctx->pc == 0x16F230u) {
        ctx->pc = 0x16F230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F22Cu;
        // 0x16f230: 0x3c030029  lui         $v1, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16F234u;
        goto label_16f234;
    }
    ctx->pc = 0x16F22Cu;
    {
        const bool branch_taken_0x16f22c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x16F230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F22Cu;
        // 0x16f230: 0x3c030029  lui         $v1, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f22c) {
            ctx->pc = 0x16F23Cu;
            goto label_16f23c;
        }
    }
    ctx->pc = 0x16F234u;
label_16f234:
    // 0x16f234: 0x10000006  b           . + 4 + (0x6 << 2)
label_16f238:
    if (ctx->pc == 0x16F238u) {
        ctx->pc = 0x16F238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F234u;
        // 0x16f238: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16F23Cu;
        goto label_16f23c;
    }
    ctx->pc = 0x16F234u;
    {
        const bool branch_taken_0x16f234 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F234u;
        // 0x16f238: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f234) {
            ctx->pc = 0x16F250u;
            goto label_16f250;
        }
    }
    ctx->pc = 0x16F23Cu;
label_16f23c:
    // 0x16f23c: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x16f23cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_16f240:
    // 0x16f240: 0x24630cf0  addiu       $v1, $v1, 0xCF0
    ctx->pc = 0x16f240u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3312));
label_16f244:
    // 0x16f244: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x16f244u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_16f248:
    // 0x16f248: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x16f248u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_16f24c:
    // 0x16f24c: 0x0  nop
    ctx->pc = 0x16f24cu;
    // NOP
label_16f250:
    // 0x16f250: 0x3c050028  lui         $a1, 0x28
    ctx->pc = 0x16f250u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)40 << 16));
label_16f254:
    // 0x16f254: 0x24030c2d  addiu       $v1, $zero, 0xC2D
    ctx->pc = 0x16f254u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3117));
label_16f258:
    // 0x16f258: 0x24a51000  addiu       $a1, $a1, 0x1000
    ctx->pc = 0x16f258u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4096));
label_16f25c:
    // 0x16f25c: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x16f25cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_16f260:
    // 0x16f260: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x16f260u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_16f264:
    // 0x16f264: 0x14a30003  bne         $a1, $v1, . + 4 + (0x3 << 2)
label_16f268:
    if (ctx->pc == 0x16F268u) {
        ctx->pc = 0x16F268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F264u;
        // 0x16f268: 0x3c030029  lui         $v1, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16F26Cu;
        goto label_16f26c;
    }
    ctx->pc = 0x16F264u;
    {
        const bool branch_taken_0x16f264 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x16F268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F264u;
        // 0x16f268: 0x3c030029  lui         $v1, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f264) {
            ctx->pc = 0x16F274u;
            goto label_16f274;
        }
    }
    ctx->pc = 0x16F26Cu;
label_16f26c:
    // 0x16f26c: 0x10000006  b           . + 4 + (0x6 << 2)
label_16f270:
    if (ctx->pc == 0x16F270u) {
        ctx->pc = 0x16F270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F26Cu;
        // 0x16f270: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16F274u;
        goto label_16f274;
    }
    ctx->pc = 0x16F26Cu;
    {
        const bool branch_taken_0x16f26c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F26Cu;
        // 0x16f270: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f26c) {
            ctx->pc = 0x16F288u;
            goto label_16f288;
        }
    }
    ctx->pc = 0x16F274u;
label_16f274:
    // 0x16f274: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x16f274u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_16f278:
    // 0x16f278: 0x24630cf0  addiu       $v1, $v1, 0xCF0
    ctx->pc = 0x16f278u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3312));
label_16f27c:
    // 0x16f27c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x16f27cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_16f280:
    // 0x16f280: 0x8c650008  lw          $a1, 0x8($v1)
    ctx->pc = 0x16f280u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_16f284:
    // 0x16f284: 0x0  nop
    ctx->pc = 0x16f284u;
    // NOP
label_16f288:
    // 0x16f288: 0x100000ad  b           . + 4 + (0xAD << 2)
label_16f28c:
    if (ctx->pc == 0x16F28Cu) {
        ctx->pc = 0x16F290u;
        goto label_16f290;
    }
    ctx->pc = 0x16F288u;
    {
        const bool branch_taken_0x16f288 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16f288) {
            ctx->pc = 0x16F540u;
            goto label_16f540;
        }
    }
    ctx->pc = 0x16F290u;
label_16f290:
    // 0x16f290: 0x8f858714  lw          $a1, -0x78EC($gp)
    ctx->pc = 0x16f290u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
label_16f294:
    // 0x16f294: 0x3c040028  lui         $a0, 0x28
    ctx->pc = 0x16f294u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)40 << 16));
label_16f298:
    // 0x16f298: 0x24030c2d  addiu       $v1, $zero, 0xC2D
    ctx->pc = 0x16f298u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3117));
label_16f29c:
    // 0x16f29c: 0x24840fa0  addiu       $a0, $a0, 0xFA0
    ctx->pc = 0x16f29cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4000));
label_16f2a0:
    // 0x16f2a0: 0x53080  sll         $a2, $a1, 2
    ctx->pc = 0x16f2a0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_16f2a4:
    // 0x16f2a4: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x16f2a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_16f2a8:
    // 0x16f2a8: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x16f2a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_16f2ac:
    // 0x16f2ac: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
label_16f2b0:
    if (ctx->pc == 0x16F2B0u) {
        ctx->pc = 0x16F2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F2ACu;
        // 0x16f2b0: 0x3c030029  lui         $v1, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16F2B4u;
        goto label_16f2b4;
    }
    ctx->pc = 0x16F2ACu;
    {
        const bool branch_taken_0x16f2ac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x16F2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F2ACu;
        // 0x16f2b0: 0x3c030029  lui         $v1, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f2ac) {
            ctx->pc = 0x16F2BCu;
            goto label_16f2bc;
        }
    }
    ctx->pc = 0x16F2B4u;
label_16f2b4:
    // 0x16f2b4: 0x10000006  b           . + 4 + (0x6 << 2)
label_16f2b8:
    if (ctx->pc == 0x16F2B8u) {
        ctx->pc = 0x16F2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F2B4u;
        // 0x16f2b8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16F2BCu;
        goto label_16f2bc;
    }
    ctx->pc = 0x16F2B4u;
    {
        const bool branch_taken_0x16f2b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F2B4u;
        // 0x16f2b8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f2b4) {
            ctx->pc = 0x16F2D0u;
            goto label_16f2d0;
        }
    }
    ctx->pc = 0x16F2BCu;
label_16f2bc:
    // 0x16f2bc: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x16f2bcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_16f2c0:
    // 0x16f2c0: 0x24630cf0  addiu       $v1, $v1, 0xCF0
    ctx->pc = 0x16f2c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3312));
label_16f2c4:
    // 0x16f2c4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x16f2c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_16f2c8:
    // 0x16f2c8: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x16f2c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_16f2cc:
    // 0x16f2cc: 0x0  nop
    ctx->pc = 0x16f2ccu;
    // NOP
label_16f2d0:
    // 0x16f2d0: 0x3c050028  lui         $a1, 0x28
    ctx->pc = 0x16f2d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)40 << 16));
label_16f2d4:
    // 0x16f2d4: 0x24030c2d  addiu       $v1, $zero, 0xC2D
    ctx->pc = 0x16f2d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3117));
label_16f2d8:
    // 0x16f2d8: 0x24a50f40  addiu       $a1, $a1, 0xF40
    ctx->pc = 0x16f2d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3904));
label_16f2dc:
    // 0x16f2dc: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x16f2dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_16f2e0:
    // 0x16f2e0: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x16f2e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_16f2e4:
    // 0x16f2e4: 0x14a30003  bne         $a1, $v1, . + 4 + (0x3 << 2)
label_16f2e8:
    if (ctx->pc == 0x16F2E8u) {
        ctx->pc = 0x16F2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F2E4u;
        // 0x16f2e8: 0x3c030029  lui         $v1, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16F2ECu;
        goto label_16f2ec;
    }
    ctx->pc = 0x16F2E4u;
    {
        const bool branch_taken_0x16f2e4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x16F2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F2E4u;
        // 0x16f2e8: 0x3c030029  lui         $v1, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f2e4) {
            ctx->pc = 0x16F2F4u;
            goto label_16f2f4;
        }
    }
    ctx->pc = 0x16F2ECu;
label_16f2ec:
    // 0x16f2ec: 0x10000006  b           . + 4 + (0x6 << 2)
label_16f2f0:
    if (ctx->pc == 0x16F2F0u) {
        ctx->pc = 0x16F2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F2ECu;
        // 0x16f2f0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16F2F4u;
        goto label_16f2f4;
    }
    ctx->pc = 0x16F2ECu;
    {
        const bool branch_taken_0x16f2ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F2ECu;
        // 0x16f2f0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f2ec) {
            ctx->pc = 0x16F308u;
            goto label_16f308;
        }
    }
    ctx->pc = 0x16F2F4u;
label_16f2f4:
    // 0x16f2f4: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x16f2f4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_16f2f8:
    // 0x16f2f8: 0x24630cf0  addiu       $v1, $v1, 0xCF0
    ctx->pc = 0x16f2f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3312));
label_16f2fc:
    // 0x16f2fc: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x16f2fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_16f300:
    // 0x16f300: 0x8c650008  lw          $a1, 0x8($v1)
    ctx->pc = 0x16f300u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_16f304:
    // 0x16f304: 0x0  nop
    ctx->pc = 0x16f304u;
    // NOP
label_16f308:
    // 0x16f308: 0x1000008d  b           . + 4 + (0x8D << 2)
label_16f30c:
    if (ctx->pc == 0x16F30Cu) {
        ctx->pc = 0x16F310u;
        goto label_16f310;
    }
    ctx->pc = 0x16F308u;
    {
        const bool branch_taken_0x16f308 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16f308) {
            ctx->pc = 0x16F540u;
            goto label_16f540;
        }
    }
    ctx->pc = 0x16F310u;
label_16f310:
    // 0x16f310: 0x8f8581c0  lw          $a1, -0x7E40($gp)
    ctx->pc = 0x16f310u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934976)));
label_16f314:
    // 0x16f314: 0x3c040028  lui         $a0, 0x28
    ctx->pc = 0x16f314u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)40 << 16));
label_16f318:
    // 0x16f318: 0x24030c2d  addiu       $v1, $zero, 0xC2D
    ctx->pc = 0x16f318u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3117));
label_16f31c:
    // 0x16f31c: 0x24841430  addiu       $a0, $a0, 0x1430
    ctx->pc = 0x16f31cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5168));
label_16f320:
    // 0x16f320: 0x53080  sll         $a2, $a1, 2
    ctx->pc = 0x16f320u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_16f324:
    // 0x16f324: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x16f324u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_16f328:
    // 0x16f328: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x16f328u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_16f32c:
    // 0x16f32c: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
label_16f330:
    if (ctx->pc == 0x16F330u) {
        ctx->pc = 0x16F330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F32Cu;
        // 0x16f330: 0x3c030029  lui         $v1, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16F334u;
        goto label_16f334;
    }
    ctx->pc = 0x16F32Cu;
    {
        const bool branch_taken_0x16f32c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x16F330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F32Cu;
        // 0x16f330: 0x3c030029  lui         $v1, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f32c) {
            ctx->pc = 0x16F33Cu;
            goto label_16f33c;
        }
    }
    ctx->pc = 0x16F334u;
label_16f334:
    // 0x16f334: 0x10000006  b           . + 4 + (0x6 << 2)
label_16f338:
    if (ctx->pc == 0x16F338u) {
        ctx->pc = 0x16F338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F334u;
        // 0x16f338: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16F33Cu;
        goto label_16f33c;
    }
    ctx->pc = 0x16F334u;
    {
        const bool branch_taken_0x16f334 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F334u;
        // 0x16f338: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f334) {
            ctx->pc = 0x16F350u;
            goto label_16f350;
        }
    }
    ctx->pc = 0x16F33Cu;
label_16f33c:
    // 0x16f33c: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x16f33cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_16f340:
    // 0x16f340: 0x24630cf0  addiu       $v1, $v1, 0xCF0
    ctx->pc = 0x16f340u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3312));
label_16f344:
    // 0x16f344: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x16f344u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_16f348:
    // 0x16f348: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x16f348u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_16f34c:
    // 0x16f34c: 0x0  nop
    ctx->pc = 0x16f34cu;
    // NOP
label_16f350:
    // 0x16f350: 0x3c050028  lui         $a1, 0x28
    ctx->pc = 0x16f350u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)40 << 16));
label_16f354:
    // 0x16f354: 0x24030c2d  addiu       $v1, $zero, 0xC2D
    ctx->pc = 0x16f354u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3117));
label_16f358:
    // 0x16f358: 0x24a51380  addiu       $a1, $a1, 0x1380
    ctx->pc = 0x16f358u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4992));
label_16f35c:
    // 0x16f35c: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x16f35cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_16f360:
    // 0x16f360: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x16f360u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_16f364:
    // 0x16f364: 0x14a30003  bne         $a1, $v1, . + 4 + (0x3 << 2)
label_16f368:
    if (ctx->pc == 0x16F368u) {
        ctx->pc = 0x16F368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F364u;
        // 0x16f368: 0x3c030029  lui         $v1, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16F36Cu;
        goto label_16f36c;
    }
    ctx->pc = 0x16F364u;
    {
        const bool branch_taken_0x16f364 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x16F368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F364u;
        // 0x16f368: 0x3c030029  lui         $v1, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f364) {
            ctx->pc = 0x16F374u;
            goto label_16f374;
        }
    }
    ctx->pc = 0x16F36Cu;
label_16f36c:
    // 0x16f36c: 0x10000006  b           . + 4 + (0x6 << 2)
label_16f370:
    if (ctx->pc == 0x16F370u) {
        ctx->pc = 0x16F370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F36Cu;
        // 0x16f370: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16F374u;
        goto label_16f374;
    }
    ctx->pc = 0x16F36Cu;
    {
        const bool branch_taken_0x16f36c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F36Cu;
        // 0x16f370: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f36c) {
            ctx->pc = 0x16F388u;
            goto label_16f388;
        }
    }
    ctx->pc = 0x16F374u;
label_16f374:
    // 0x16f374: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x16f374u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_16f378:
    // 0x16f378: 0x24630cf0  addiu       $v1, $v1, 0xCF0
    ctx->pc = 0x16f378u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3312));
label_16f37c:
    // 0x16f37c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x16f37cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_16f380:
    // 0x16f380: 0x8c650008  lw          $a1, 0x8($v1)
    ctx->pc = 0x16f380u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_16f384:
    // 0x16f384: 0x0  nop
    ctx->pc = 0x16f384u;
    // NOP
label_16f388:
    // 0x16f388: 0x1000006d  b           . + 4 + (0x6D << 2)
label_16f38c:
    if (ctx->pc == 0x16F38Cu) {
        ctx->pc = 0x16F390u;
        goto label_16f390;
    }
    ctx->pc = 0x16F388u;
    {
        const bool branch_taken_0x16f388 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16f388) {
            ctx->pc = 0x16F540u;
            goto label_16f540;
        }
    }
    ctx->pc = 0x16F390u;
label_16f390:
    // 0x16f390: 0x8f82863c  lw          $v0, -0x79C4($gp)
    ctx->pc = 0x16f390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936124)));
label_16f394:
    // 0x16f394: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
label_16f398:
    if (ctx->pc == 0x16F398u) {
        ctx->pc = 0x16F39Cu;
        goto label_16f39c;
    }
    ctx->pc = 0x16F394u;
    {
        const bool branch_taken_0x16f394 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16f394) {
            ctx->pc = 0x16F420u;
            goto label_16f420;
        }
    }
    ctx->pc = 0x16F39Cu;
label_16f39c:
    // 0x16f39c: 0xc056adc  jal         func_15AB70
label_16f3a0:
    if (ctx->pc == 0x16F3A0u) {
        ctx->pc = 0x16F3A4u;
        goto label_16f3a4;
    }
    ctx->pc = 0x16F39Cu;
    SET_GPR_U32(ctx, 31, 0x16F3A4u);
    ctx->pc = 0x15AB70u;
    { ctx->pc = 0x15ab70; return; }
    ctx->pc = 0x16F3A4u;
label_16f3a4:
    // 0x16f3a4: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x16f3a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
label_16f3a8:
    // 0x16f3a8: 0x23080  sll         $a2, $v0, 2
    ctx->pc = 0x16f3a8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_16f3ac:
    // 0x16f3ac: 0x246312f0  addiu       $v1, $v1, 0x12F0
    ctx->pc = 0x16f3acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4848));
label_16f3b0:
    // 0x16f3b0: 0x662021  addu        $a0, $v1, $a2
    ctx->pc = 0x16f3b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_16f3b4:
    // 0x16f3b4: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x16f3b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_16f3b8:
    // 0x16f3b8: 0x24030c2d  addiu       $v1, $zero, 0xC2D
    ctx->pc = 0x16f3b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3117));
label_16f3bc:
    // 0x16f3bc: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
label_16f3c0:
    if (ctx->pc == 0x16F3C0u) {
        ctx->pc = 0x16F3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F3BCu;
        // 0x16f3c0: 0x3c030029  lui         $v1, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16F3C4u;
        goto label_16f3c4;
    }
    ctx->pc = 0x16F3BCu;
    {
        const bool branch_taken_0x16f3bc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x16F3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F3BCu;
        // 0x16f3c0: 0x3c030029  lui         $v1, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f3bc) {
            ctx->pc = 0x16F3CCu;
            goto label_16f3cc;
        }
    }
    ctx->pc = 0x16F3C4u;
label_16f3c4:
    // 0x16f3c4: 0x10000006  b           . + 4 + (0x6 << 2)
label_16f3c8:
    if (ctx->pc == 0x16F3C8u) {
        ctx->pc = 0x16F3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F3C4u;
        // 0x16f3c8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16F3CCu;
        goto label_16f3cc;
    }
    ctx->pc = 0x16F3C4u;
    {
        const bool branch_taken_0x16f3c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F3C4u;
        // 0x16f3c8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f3c4) {
            ctx->pc = 0x16F3E0u;
            goto label_16f3e0;
        }
    }
    ctx->pc = 0x16F3CCu;
label_16f3cc:
    // 0x16f3cc: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x16f3ccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_16f3d0:
    // 0x16f3d0: 0x24630cf0  addiu       $v1, $v1, 0xCF0
    ctx->pc = 0x16f3d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3312));
label_16f3d4:
    // 0x16f3d4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x16f3d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_16f3d8:
    // 0x16f3d8: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x16f3d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_16f3dc:
    // 0x16f3dc: 0x0  nop
    ctx->pc = 0x16f3dcu;
    // NOP
label_16f3e0:
    // 0x16f3e0: 0x3c050028  lui         $a1, 0x28
    ctx->pc = 0x16f3e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)40 << 16));
label_16f3e4:
    // 0x16f3e4: 0x24030c2d  addiu       $v1, $zero, 0xC2D
    ctx->pc = 0x16f3e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3117));
label_16f3e8:
    // 0x16f3e8: 0x24a51260  addiu       $a1, $a1, 0x1260
    ctx->pc = 0x16f3e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4704));
label_16f3ec:
    // 0x16f3ec: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x16f3ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_16f3f0:
    // 0x16f3f0: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x16f3f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_16f3f4:
    // 0x16f3f4: 0x14a30003  bne         $a1, $v1, . + 4 + (0x3 << 2)
label_16f3f8:
    if (ctx->pc == 0x16F3F8u) {
        ctx->pc = 0x16F3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F3F4u;
        // 0x16f3f8: 0x3c030029  lui         $v1, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16F3FCu;
        goto label_16f3fc;
    }
    ctx->pc = 0x16F3F4u;
    {
        const bool branch_taken_0x16f3f4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x16F3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F3F4u;
        // 0x16f3f8: 0x3c030029  lui         $v1, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f3f4) {
            ctx->pc = 0x16F404u;
            goto label_16f404;
        }
    }
    ctx->pc = 0x16F3FCu;
label_16f3fc:
    // 0x16f3fc: 0x10000006  b           . + 4 + (0x6 << 2)
label_16f400:
    if (ctx->pc == 0x16F400u) {
        ctx->pc = 0x16F400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F3FCu;
        // 0x16f400: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16F404u;
        goto label_16f404;
    }
    ctx->pc = 0x16F3FCu;
    {
        const bool branch_taken_0x16f3fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F3FCu;
        // 0x16f400: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f3fc) {
            ctx->pc = 0x16F418u;
            goto label_16f418;
        }
    }
    ctx->pc = 0x16F404u;
label_16f404:
    // 0x16f404: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x16f404u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_16f408:
    // 0x16f408: 0x24630cf0  addiu       $v1, $v1, 0xCF0
    ctx->pc = 0x16f408u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3312));
label_16f40c:
    // 0x16f40c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x16f40cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_16f410:
    // 0x16f410: 0x8c650008  lw          $a1, 0x8($v1)
    ctx->pc = 0x16f410u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_16f414:
    // 0x16f414: 0x0  nop
    ctx->pc = 0x16f414u;
    // NOP
label_16f418:
    // 0x16f418: 0x10000049  b           . + 4 + (0x49 << 2)
label_16f41c:
    if (ctx->pc == 0x16F41Cu) {
        ctx->pc = 0x16F420u;
        goto label_16f420;
    }
    ctx->pc = 0x16F418u;
    {
        const bool branch_taken_0x16f418 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16f418) {
            ctx->pc = 0x16F540u;
            goto label_16f540;
        }
    }
    ctx->pc = 0x16F420u;
label_16f420:
    // 0x16f420: 0xc056b60  jal         func_15AD80
label_16f424:
    if (ctx->pc == 0x16F424u) {
        ctx->pc = 0x16F428u;
        goto label_16f428;
    }
    ctx->pc = 0x16F420u;
    SET_GPR_U32(ctx, 31, 0x16F428u);
    ctx->pc = 0x15AD80u;
    { ctx->pc = 0x15ad80; return; }
    ctx->pc = 0x16F428u;
label_16f428:
    // 0x16f428: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x16f428u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
label_16f42c:
    // 0x16f42c: 0x23080  sll         $a2, $v0, 2
    ctx->pc = 0x16f42cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_16f430:
    // 0x16f430: 0x24631190  addiu       $v1, $v1, 0x1190
    ctx->pc = 0x16f430u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4496));
label_16f434:
    // 0x16f434: 0x662021  addu        $a0, $v1, $a2
    ctx->pc = 0x16f434u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_16f438:
    // 0x16f438: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x16f438u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_16f43c:
    // 0x16f43c: 0x24030c2d  addiu       $v1, $zero, 0xC2D
    ctx->pc = 0x16f43cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3117));
label_16f440:
    // 0x16f440: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
label_16f444:
    if (ctx->pc == 0x16F444u) {
        ctx->pc = 0x16F444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F440u;
        // 0x16f444: 0x3c030029  lui         $v1, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16F448u;
        goto label_16f448;
    }
    ctx->pc = 0x16F440u;
    {
        const bool branch_taken_0x16f440 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x16F444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F440u;
        // 0x16f444: 0x3c030029  lui         $v1, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f440) {
            ctx->pc = 0x16F450u;
            goto label_16f450;
        }
    }
    ctx->pc = 0x16F448u;
label_16f448:
    // 0x16f448: 0x10000006  b           . + 4 + (0x6 << 2)
label_16f44c:
    if (ctx->pc == 0x16F44Cu) {
        ctx->pc = 0x16F44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F448u;
        // 0x16f44c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16F450u;
        goto label_16f450;
    }
    ctx->pc = 0x16F448u;
    {
        const bool branch_taken_0x16f448 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F448u;
        // 0x16f44c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f448) {
            ctx->pc = 0x16F464u;
            goto label_16f464;
        }
    }
    ctx->pc = 0x16F450u;
label_16f450:
    // 0x16f450: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x16f450u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_16f454:
    // 0x16f454: 0x24630cf0  addiu       $v1, $v1, 0xCF0
    ctx->pc = 0x16f454u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3312));
label_16f458:
    // 0x16f458: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x16f458u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_16f45c:
    // 0x16f45c: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x16f45cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_16f460:
    // 0x16f460: 0x0  nop
    ctx->pc = 0x16f460u;
    // NOP
label_16f464:
    // 0x16f464: 0x3c050028  lui         $a1, 0x28
    ctx->pc = 0x16f464u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)40 << 16));
label_16f468:
    // 0x16f468: 0x24030c2d  addiu       $v1, $zero, 0xC2D
    ctx->pc = 0x16f468u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3117));
label_16f46c:
    // 0x16f46c: 0x24a510c0  addiu       $a1, $a1, 0x10C0
    ctx->pc = 0x16f46cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4288));
label_16f470:
    // 0x16f470: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x16f470u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_16f474:
    // 0x16f474: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x16f474u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_16f478:
    // 0x16f478: 0x14a30003  bne         $a1, $v1, . + 4 + (0x3 << 2)
label_16f47c:
    if (ctx->pc == 0x16F47Cu) {
        ctx->pc = 0x16F47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F478u;
        // 0x16f47c: 0x3c030029  lui         $v1, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16F480u;
        goto label_16f480;
    }
    ctx->pc = 0x16F478u;
    {
        const bool branch_taken_0x16f478 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x16F47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F478u;
        // 0x16f47c: 0x3c030029  lui         $v1, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f478) {
            ctx->pc = 0x16F488u;
            goto label_16f488;
        }
    }
    ctx->pc = 0x16F480u;
label_16f480:
    // 0x16f480: 0x10000006  b           . + 4 + (0x6 << 2)
label_16f484:
    if (ctx->pc == 0x16F484u) {
        ctx->pc = 0x16F484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F480u;
        // 0x16f484: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16F488u;
        goto label_16f488;
    }
    ctx->pc = 0x16F480u;
    {
        const bool branch_taken_0x16f480 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F480u;
        // 0x16f484: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f480) {
            ctx->pc = 0x16F49Cu;
            goto label_16f49c;
        }
    }
    ctx->pc = 0x16F488u;
label_16f488:
    // 0x16f488: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x16f488u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_16f48c:
    // 0x16f48c: 0x24630cf0  addiu       $v1, $v1, 0xCF0
    ctx->pc = 0x16f48cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3312));
label_16f490:
    // 0x16f490: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x16f490u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_16f494:
    // 0x16f494: 0x8c650008  lw          $a1, 0x8($v1)
    ctx->pc = 0x16f494u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_16f498:
    // 0x16f498: 0x0  nop
    ctx->pc = 0x16f498u;
    // NOP
label_16f49c:
    // 0x16f49c: 0x10000028  b           . + 4 + (0x28 << 2)
label_16f4a0:
    if (ctx->pc == 0x16F4A0u) {
        ctx->pc = 0x16F4A4u;
        goto label_16f4a4;
    }
    ctx->pc = 0x16F49Cu;
    {
        const bool branch_taken_0x16f49c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16f49c) {
            ctx->pc = 0x16F540u;
            goto label_16f540;
        }
    }
    ctx->pc = 0x16F4A4u;
label_16f4a4:
    // 0x16f4a4: 0x0  nop
    ctx->pc = 0x16f4a4u;
    // NOP
label_16f4a8:
    // 0x16f4a8: 0x8f838590  lw          $v1, -0x7A70($gp)
    ctx->pc = 0x16f4a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
label_16f4ac:
    // 0x16f4ac: 0x30630400  andi        $v1, $v1, 0x400
    ctx->pc = 0x16f4acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1024);
label_16f4b0:
    // 0x16f4b0: 0x10600021  beqz        $v1, . + 4 + (0x21 << 2)
label_16f4b4:
    if (ctx->pc == 0x16F4B4u) {
        ctx->pc = 0x16F4B8u;
        goto label_16f4b8;
    }
    ctx->pc = 0x16F4B0u;
    {
        const bool branch_taken_0x16f4b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x16f4b0) {
            ctx->pc = 0x16F538u;
            goto label_16f538;
        }
    }
    ctx->pc = 0x16F4B8u;
label_16f4b8:
    // 0x16f4b8: 0x8f8581c4  lw          $a1, -0x7E3C($gp)
    ctx->pc = 0x16f4b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934980)));
label_16f4bc:
    // 0x16f4bc: 0x3c040028  lui         $a0, 0x28
    ctx->pc = 0x16f4bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)40 << 16));
label_16f4c0:
    // 0x16f4c0: 0x24841430  addiu       $a0, $a0, 0x1430
    ctx->pc = 0x16f4c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5168));
label_16f4c4:
    // 0x16f4c4: 0x24030c2d  addiu       $v1, $zero, 0xC2D
    ctx->pc = 0x16f4c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3117));
label_16f4c8:
    // 0x16f4c8: 0x53080  sll         $a2, $a1, 2
    ctx->pc = 0x16f4c8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_16f4cc:
    // 0x16f4cc: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x16f4ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_16f4d0:
    // 0x16f4d0: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x16f4d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_16f4d4:
    // 0x16f4d4: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
label_16f4d8:
    if (ctx->pc == 0x16F4D8u) {
        ctx->pc = 0x16F4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F4D4u;
        // 0x16f4d8: 0x3c030029  lui         $v1, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16F4DCu;
        goto label_16f4dc;
    }
    ctx->pc = 0x16F4D4u;
    {
        const bool branch_taken_0x16f4d4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x16F4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F4D4u;
        // 0x16f4d8: 0x3c030029  lui         $v1, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f4d4) {
            ctx->pc = 0x16F4E4u;
            goto label_16f4e4;
        }
    }
    ctx->pc = 0x16F4DCu;
label_16f4dc:
    // 0x16f4dc: 0x10000006  b           . + 4 + (0x6 << 2)
label_16f4e0:
    if (ctx->pc == 0x16F4E0u) {
        ctx->pc = 0x16F4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F4DCu;
        // 0x16f4e0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16F4E4u;
        goto label_16f4e4;
    }
    ctx->pc = 0x16F4DCu;
    {
        const bool branch_taken_0x16f4dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F4DCu;
        // 0x16f4e0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f4dc) {
            ctx->pc = 0x16F4F8u;
            goto label_16f4f8;
        }
    }
    ctx->pc = 0x16F4E4u;
label_16f4e4:
    // 0x16f4e4: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x16f4e4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_16f4e8:
    // 0x16f4e8: 0x24630cf0  addiu       $v1, $v1, 0xCF0
    ctx->pc = 0x16f4e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3312));
label_16f4ec:
    // 0x16f4ec: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x16f4ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_16f4f0:
    // 0x16f4f0: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x16f4f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_16f4f4:
    // 0x16f4f4: 0x0  nop
    ctx->pc = 0x16f4f4u;
    // NOP
label_16f4f8:
    // 0x16f4f8: 0x3c050028  lui         $a1, 0x28
    ctx->pc = 0x16f4f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)40 << 16));
label_16f4fc:
    // 0x16f4fc: 0x24030c2d  addiu       $v1, $zero, 0xC2D
    ctx->pc = 0x16f4fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3117));
label_16f500:
    // 0x16f500: 0x24a51380  addiu       $a1, $a1, 0x1380
    ctx->pc = 0x16f500u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4992));
label_16f504:
    // 0x16f504: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x16f504u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_16f508:
    // 0x16f508: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x16f508u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_16f50c:
    // 0x16f50c: 0x14a30003  bne         $a1, $v1, . + 4 + (0x3 << 2)
label_16f510:
    if (ctx->pc == 0x16F510u) {
        ctx->pc = 0x16F510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F50Cu;
        // 0x16f510: 0x3c030029  lui         $v1, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16F514u;
        goto label_16f514;
    }
    ctx->pc = 0x16F50Cu;
    {
        const bool branch_taken_0x16f50c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x16F510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F50Cu;
        // 0x16f510: 0x3c030029  lui         $v1, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f50c) {
            ctx->pc = 0x16F51Cu;
            goto label_16f51c;
        }
    }
    ctx->pc = 0x16F514u;
label_16f514:
    // 0x16f514: 0x10000006  b           . + 4 + (0x6 << 2)
label_16f518:
    if (ctx->pc == 0x16F518u) {
        ctx->pc = 0x16F518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F514u;
        // 0x16f518: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16F51Cu;
        goto label_16f51c;
    }
    ctx->pc = 0x16F514u;
    {
        const bool branch_taken_0x16f514 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F514u;
        // 0x16f518: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f514) {
            ctx->pc = 0x16F530u;
            goto label_16f530;
        }
    }
    ctx->pc = 0x16F51Cu;
label_16f51c:
    // 0x16f51c: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x16f51cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_16f520:
    // 0x16f520: 0x24630cf0  addiu       $v1, $v1, 0xCF0
    ctx->pc = 0x16f520u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3312));
label_16f524:
    // 0x16f524: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x16f524u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_16f528:
    // 0x16f528: 0x8c650008  lw          $a1, 0x8($v1)
    ctx->pc = 0x16f528u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_16f52c:
    // 0x16f52c: 0x0  nop
    ctx->pc = 0x16f52cu;
    // NOP
label_16f530:
    // 0x16f530: 0x10000003  b           . + 4 + (0x3 << 2)
label_16f534:
    if (ctx->pc == 0x16F534u) {
        ctx->pc = 0x16F538u;
        goto label_16f538;
    }
    ctx->pc = 0x16F530u;
    {
        const bool branch_taken_0x16f530 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16f530) {
            ctx->pc = 0x16F540u;
            goto label_16f540;
        }
    }
    ctx->pc = 0x16F538u;
label_16f538:
    // 0x16f538: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x16f538u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16f53c:
    // 0x16f53c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16f53cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16f540:
    // 0x16f540: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x16f540u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_16f544:
    // 0x16f544: 0x1223000a  beq         $s1, $v1, . + 4 + (0xA << 2)
label_16f548:
    if (ctx->pc == 0x16F548u) {
        ctx->pc = 0x16F548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F544u;
        // 0x16f548: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16F54Cu;
        goto label_16f54c;
    }
    ctx->pc = 0x16F544u;
    {
        const bool branch_taken_0x16f544 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        ctx->pc = 0x16F548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F544u;
        // 0x16f548: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f544) {
            ctx->pc = 0x16F570u;
            goto label_16f570;
        }
    }
    ctx->pc = 0x16F54Cu;
label_16f54c:
    // 0x16f54c: 0x12230003  beq         $s1, $v1, . + 4 + (0x3 << 2)
label_16f550:
    if (ctx->pc == 0x16F550u) {
        ctx->pc = 0x16F554u;
        goto label_16f554;
    }
    ctx->pc = 0x16F54Cu;
    {
        const bool branch_taken_0x16f54c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        if (branch_taken_0x16f54c) {
            ctx->pc = 0x16F55Cu;
            goto label_16f55c;
        }
    }
    ctx->pc = 0x16F554u;
label_16f554:
    // 0x16f554: 0x10000009  b           . + 4 + (0x9 << 2)
label_16f558:
    if (ctx->pc == 0x16F558u) {
        ctx->pc = 0x16F55Cu;
        goto label_16f55c;
    }
    ctx->pc = 0x16F554u;
    {
        const bool branch_taken_0x16f554 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16f554) {
            ctx->pc = 0x16F57Cu;
            goto label_16f57c;
        }
    }
    ctx->pc = 0x16F55Cu;
label_16f55c:
    // 0x16f55c: 0x0  nop
    ctx->pc = 0x16f55cu;
    // NOP
label_16f560:
    // 0x16f560: 0x8e03002c  lw          $v1, 0x2C($s0)
    ctx->pc = 0x16f560u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_16f564:
    // 0x16f564: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x16f564u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_16f568:
    // 0x16f568: 0x10000009  b           . + 4 + (0x9 << 2)
label_16f56c:
    if (ctx->pc == 0x16F56Cu) {
        ctx->pc = 0x16F56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F568u;
        // 0x16f56c: 0xae03005c  sw          $v1, 0x5C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16F570u;
        goto label_16f570;
    }
    ctx->pc = 0x16F568u;
    {
        const bool branch_taken_0x16f568 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F568u;
        // 0x16f56c: 0xae03005c  sw          $v1, 0x5C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f568) {
            ctx->pc = 0x16F590u;
            goto label_16f590;
        }
    }
    ctx->pc = 0x16F570u;
label_16f570:
    // 0x16f570: 0x24037010  addiu       $v1, $zero, 0x7010
    ctx->pc = 0x16f570u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28688));
label_16f574:
    // 0x16f574: 0x10000006  b           . + 4 + (0x6 << 2)
label_16f578:
    if (ctx->pc == 0x16F578u) {
        ctx->pc = 0x16F578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F574u;
        // 0x16f578: 0xae030044  sw          $v1, 0x44($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16F57Cu;
        goto label_16f57c;
    }
    ctx->pc = 0x16F574u;
    {
        const bool branch_taken_0x16f574 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F574u;
        // 0x16f578: 0xae030044  sw          $v1, 0x44($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f574) {
            ctx->pc = 0x16F590u;
            goto label_16f590;
        }
    }
    ctx->pc = 0x16F57Cu;
label_16f57c:
    // 0x16f57c: 0x0  nop
    ctx->pc = 0x16f57cu;
    // NOP
label_16f580:
    // 0x16f580: 0x2133021  addu        $a2, $s0, $s3
    ctx->pc = 0x16f580u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
label_16f584:
    // 0x16f584: 0x8cc30014  lw          $v1, 0x14($a2)
    ctx->pc = 0x16f584u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
label_16f588:
    // 0x16f588: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x16f588u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_16f58c:
    // 0x16f58c: 0xacc3002c  sw          $v1, 0x2C($a2)
    ctx->pc = 0x16f58cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 44), GPR_U32(ctx, 3));
label_16f590:
    // 0x16f590: 0x2133821  addu        $a3, $s0, $s3
    ctx->pc = 0x16f590u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
label_16f594:
    // 0x16f594: 0x8ce60010  lw          $a2, 0x10($a3)
    ctx->pc = 0x16f594u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
label_16f598:
    // 0x16f598: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x16f598u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_16f59c:
    // 0x16f59c: 0x2a230008  slti        $v1, $s1, 0x8
    ctx->pc = 0x16f59cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)8) ? 1 : 0);
label_16f5a0:
    // 0x16f5a0: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x16f5a0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_16f5a4:
    // 0x16f5a4: 0x26730018  addiu       $s3, $s3, 0x18
    ctx->pc = 0x16f5a4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 24));
label_16f5a8:
    // 0x16f5a8: 0xa63021  addu        $a2, $a1, $a2
    ctx->pc = 0x16f5a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_16f5ac:
    // 0x16f5ac: 0x1460feb0  bnez        $v1, . + 4 + (-0x150 << 2)
label_16f5b0:
    if (ctx->pc == 0x16F5B0u) {
        ctx->pc = 0x16F5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F5ACu;
        // 0x16f5b0: 0xace60028  sw          $a2, 0x28($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 40), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16F5B4u;
        goto label_16f5b4;
    }
    ctx->pc = 0x16F5ACu;
    {
        const bool branch_taken_0x16f5ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x16F5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F5ACu;
        // 0x16f5b0: 0xace60028  sw          $a2, 0x28($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 40), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f5ac) {
            ctx->pc = 0x16F070u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16f070;
        }
    }
    ctx->pc = 0x16F5B4u;
label_16f5b4:
    // 0x16f5b4: 0x0  nop
    ctx->pc = 0x16f5b4u;
    // NOP
label_16f5b8:
    // 0x16f5b8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x16f5b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_16f5bc:
    // 0x16f5bc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x16f5bcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_16f5c0:
    // 0x16f5c0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x16f5c0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_16f5c4:
    // 0x16f5c4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x16f5c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_16f5c8:
    // 0x16f5c8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16f5c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_16f5cc:
    // 0x16f5cc: 0x3e00008  jr          $ra
label_16f5d0:
    if (ctx->pc == 0x16F5D0u) {
        ctx->pc = 0x16F5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F5CCu;
        // 0x16f5d0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16F5D4u;
        goto label_16f5d4;
    }
    ctx->pc = 0x16F5CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16F5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F5CCu;
        // 0x16f5d0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16F5CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16F5D4u;
label_16f5d4:
    // 0x16f5d4: 0x0  nop
    ctx->pc = 0x16f5d4u;
    // NOP
label_16f5d8:
    // 0x16f5d8: 0x0  nop
    ctx->pc = 0x16f5d8u;
    // NOP
label_16f5dc:
    // 0x16f5dc: 0x0  nop
    ctx->pc = 0x16f5dcu;
    // NOP
label_16f5e0:
    // 0x16f5e0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x16f5e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_16f5e4:
    // 0x16f5e4: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x16f5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_16f5e8:
    // 0x16f5e8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x16f5e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_16f5ec:
    // 0x16f5ec: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x16f5ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_16f5f0:
    // 0x16f5f0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x16f5f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_16f5f4:
    // 0x16f5f4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x16f5f4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_16f5f8:
    // 0x16f5f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x16f5f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_16f5fc:
    // 0x16f5fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16f5fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_16f600:
    // 0x16f600: 0x2411000f  addiu       $s1, $zero, 0xF
    ctx->pc = 0x16f600u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_16f604:
    // 0x16f604: 0x8f838590  lw          $v1, -0x7A70($gp)
    ctx->pc = 0x16f604u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
label_16f608:
    // 0x16f608: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x16f608u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16f60c:
    // 0x16f60c: 0x30630400  andi        $v1, $v1, 0x400
    ctx->pc = 0x16f60cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1024);
label_16f610:
    // 0x16f610: 0x43880a  movz        $s1, $v0, $v1
    ctx->pc = 0x16f610u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 2));
label_16f614:
    // 0x16f614: 0x11082a  slt         $at, $zero, $s1
    ctx->pc = 0x16f614u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_16f618:
    // 0x16f618: 0x10200021  beqz        $at, . + 4 + (0x21 << 2)
label_16f61c:
    if (ctx->pc == 0x16F61Cu) {
        ctx->pc = 0x16F61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F618u;
        // 0x16f61c: 0xaf808710  sw          $zero, -0x78F0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936336), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16F620u;
        goto label_16f620;
    }
    ctx->pc = 0x16F618u;
    {
        const bool branch_taken_0x16f618 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F618u;
        // 0x16f61c: 0xaf808710  sw          $zero, -0x78F0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936336), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f618) {
            ctx->pc = 0x16F6A0u;
            goto label_16f6a0;
        }
    }
    ctx->pc = 0x16F620u;
label_16f620:
    // 0x16f620: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x16f620u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16f624:
    // 0x16f624: 0x8f828710  lw          $v0, -0x78F0($gp)
    ctx->pc = 0x16f624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16f628:
    // 0x16f628: 0x2c42007f  sltiu       $v0, $v0, 0x7F
    ctx->pc = 0x16f628u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)127) ? 1 : 0);
label_16f62c:
    // 0x16f62c: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_16f630:
    if (ctx->pc == 0x16F630u) {
        ctx->pc = 0x16F634u;
        goto label_16f634;
    }
    ctx->pc = 0x16F62Cu;
    {
        const bool branch_taken_0x16f62c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16f62c) {
            ctx->pc = 0x16F65Cu;
            goto label_16f65c;
        }
    }
    ctx->pc = 0x16F634u;
label_16f634:
    // 0x16f634: 0x0  nop
    ctx->pc = 0x16f634u;
    // NOP
label_16f638:
    // 0x16f638: 0x8f858710  lw          $a1, -0x78F0($gp)
    ctx->pc = 0x16f638u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16f63c:
    // 0x16f63c: 0x3c060036  lui         $a2, 0x36
    ctx->pc = 0x16f63cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)54 << 16));
label_16f640:
    // 0x16f640: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x16f640u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_16f644:
    // 0x16f644: 0xc08d61c  jal         func_235870
label_16f648:
    if (ctx->pc == 0x16F648u) {
        ctx->pc = 0x16F648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F644u;
        // 0x16f648: 0x24c63ef0  addiu       $a2, $a2, 0x3EF0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16F64Cu;
        goto label_16f64c;
    }
    ctx->pc = 0x16F644u;
    SET_GPR_U32(ctx, 31, 0x16F64Cu);
    ctx->pc = 0x16F648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F644u;
    // 0x16f648: 0x24c63ef0  addiu       $a2, $a2, 0x3EF0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235870u;
    { ctx->pc = 0x235870; return; }
    ctx->pc = 0x16F64Cu;
label_16f64c:
    // 0x16f64c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x16f64cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_16f650:
    // 0x16f650: 0x1043fff8  beq         $v0, $v1, . + 4 + (-0x8 << 2)
label_16f654:
    if (ctx->pc == 0x16F654u) {
        ctx->pc = 0x16F658u;
        goto label_16f658;
    }
    ctx->pc = 0x16F650u;
    {
        const bool branch_taken_0x16f650 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x16f650) {
            ctx->pc = 0x16F634u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16f634;
        }
    }
    ctx->pc = 0x16F658u;
label_16f658:
    // 0x16f658: 0xaf808710  sw          $zero, -0x78F0($gp)
    ctx->pc = 0x16f658u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936336), GPR_U32(ctx, 0));
label_16f65c:
    // 0x16f65c: 0x0  nop
    ctx->pc = 0x16f65cu;
    // NOP
label_16f660:
    // 0x16f660: 0x8f848710  lw          $a0, -0x78F0($gp)
    ctx->pc = 0x16f660u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16f664:
    // 0x16f664: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x16f664u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
label_16f668:
    // 0x16f668: 0x3c022007  lui         $v0, 0x2007
    ctx->pc = 0x16f668u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8199 << 16));
label_16f66c:
    // 0x16f66c: 0x2422825  or          $a1, $s2, $v0
    ctx->pc = 0x16f66cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
label_16f670:
    // 0x16f670: 0x24633ef0  addiu       $v1, $v1, 0x3EF0
    ctx->pc = 0x16f670u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16112));
label_16f674:
    // 0x16f674: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x16f674u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
label_16f678:
    // 0x16f678: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x16f678u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_16f67c:
    // 0x16f67c: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x16f67cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_16f680:
    // 0x16f680: 0x211102a  slt         $v0, $s0, $s1
    ctx->pc = 0x16f680u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_16f684:
    // 0x16f684: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x16f684u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_16f688:
    // 0x16f688: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x16f688u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_16f68c:
    // 0x16f68c: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x16f68cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
label_16f690:
    // 0x16f690: 0x8f838710  lw          $v1, -0x78F0($gp)
    ctx->pc = 0x16f690u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16f694:
    // 0x16f694: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x16f694u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_16f698:
    // 0x16f698: 0x1440ffe2  bnez        $v0, . + 4 + (-0x1E << 2)
label_16f69c:
    if (ctx->pc == 0x16F69Cu) {
        ctx->pc = 0x16F69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F698u;
        // 0x16f69c: 0xaf838710  sw          $v1, -0x78F0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936336), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16F6A0u;
        goto label_16f6a0;
    }
    ctx->pc = 0x16F698u;
    {
        const bool branch_taken_0x16f698 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16F69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F698u;
        // 0x16f69c: 0xaf838710  sw          $v1, -0x78F0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936336), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f698) {
            ctx->pc = 0x16F624u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16f624;
        }
    }
    ctx->pc = 0x16F6A0u;
label_16f6a0:
    // 0x16f6a0: 0x8f828710  lw          $v0, -0x78F0($gp)
    ctx->pc = 0x16f6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16f6a4:
    // 0x16f6a4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_16f6a8:
    if (ctx->pc == 0x16F6A8u) {
        ctx->pc = 0x16F6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F6A4u;
        // 0x16f6a8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16F6ACu;
        goto label_16f6ac;
    }
    ctx->pc = 0x16F6A4u;
    {
        const bool branch_taken_0x16f6a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F6A4u;
        // 0x16f6a8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f6a4) {
            ctx->pc = 0x16F6D4u;
            goto label_16f6d4;
        }
    }
    ctx->pc = 0x16F6ACu;
label_16f6ac:
    // 0x16f6ac: 0x8f858710  lw          $a1, -0x78F0($gp)
    ctx->pc = 0x16f6acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16f6b0:
    // 0x16f6b0: 0x3c060036  lui         $a2, 0x36
    ctx->pc = 0x16f6b0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)54 << 16));
label_16f6b4:
    // 0x16f6b4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x16f6b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_16f6b8:
    // 0x16f6b8: 0xc08d61c  jal         func_235870
label_16f6bc:
    if (ctx->pc == 0x16F6BCu) {
        ctx->pc = 0x16F6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F6B8u;
        // 0x16f6bc: 0x24c63ef0  addiu       $a2, $a2, 0x3EF0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16F6C0u;
        goto label_16f6c0;
    }
    ctx->pc = 0x16F6B8u;
    SET_GPR_U32(ctx, 31, 0x16F6C0u);
    ctx->pc = 0x16F6BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F6B8u;
    // 0x16f6bc: 0x24c63ef0  addiu       $a2, $a2, 0x3EF0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235870u;
    { ctx->pc = 0x235870; return; }
    ctx->pc = 0x16F6C0u;
label_16f6c0:
    // 0x16f6c0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x16f6c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_16f6c4:
    // 0x16f6c4: 0x1043fff9  beq         $v0, $v1, . + 4 + (-0x7 << 2)
label_16f6c8:
    if (ctx->pc == 0x16F6C8u) {
        ctx->pc = 0x16F6CCu;
        goto label_16f6cc;
    }
    ctx->pc = 0x16F6C4u;
    {
        const bool branch_taken_0x16f6c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x16f6c4) {
            ctx->pc = 0x16F6ACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16f6ac;
        }
    }
    ctx->pc = 0x16F6CCu;
label_16f6cc:
    // 0x16f6cc: 0xaf808710  sw          $zero, -0x78F0($gp)
    ctx->pc = 0x16f6ccu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936336), GPR_U32(ctx, 0));
label_16f6d0:
    // 0x16f6d0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x16f6d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16f6d4:
    // 0x16f6d4: 0x16640013  bne         $s3, $a0, . + 4 + (0x13 << 2)
label_16f6d8:
    if (ctx->pc == 0x16F6D8u) {
        ctx->pc = 0x16F6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F6D4u;
        // 0x16f6d8: 0x3c050028  lui         $a1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16F6DCu;
        goto label_16f6dc;
    }
    ctx->pc = 0x16F6D4u;
    {
        const bool branch_taken_0x16f6d4 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 4));
        ctx->pc = 0x16F6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F6D4u;
        // 0x16f6d8: 0x3c050028  lui         $a1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f6d4) {
            ctx->pc = 0x16F724u;
            { ctx->pc = 0x16f724; return; }
        }
    }
    ctx->pc = 0x16F6DCu;
label_16f6dc:
    // 0x16f6dc: 0xc05bbb4  jal         func_16EED0
label_16f6e0:
    if (ctx->pc == 0x16F6E0u) {
        ctx->pc = 0x16F6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F6DCu;
        // 0x16f6e0: 0x24a51cc0  addiu       $a1, $a1, 0x1CC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7360));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16F6E4u;
        goto label_16f6e4;
    }
    ctx->pc = 0x16F6DCu;
    SET_GPR_U32(ctx, 31, 0x16F6E4u);
    ctx->pc = 0x16F6E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F6DCu;
    // 0x16f6e0: 0x24a51cc0  addiu       $a1, $a1, 0x1CC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16EED0u;
    { ctx->pc = 0x16eed0; return; }
    ctx->pc = 0x16F6E4u;
label_16f6e4:
    // 0x16f6e4: 0x10000008  b           . + 4 + (0x8 << 2)
label_16f6e8:
    if (ctx->pc == 0x16F6E8u) {
        ctx->pc = 0x16F6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F6E4u;
        // 0x16f6e8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16F6ECu;
        goto label_16f6ec;
    }
    ctx->pc = 0x16F6E4u;
    {
        const bool branch_taken_0x16f6e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F6E4u;
        // 0x16f6e8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f6e4) {
            ctx->pc = 0x16F708u;
            goto label_16f708;
        }
    }
    ctx->pc = 0x16F6ECu;
label_16f6ec:
    // 0x16f6ec: 0x3c070028  lui         $a3, 0x28
    ctx->pc = 0x16f6ecu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)40 << 16));
label_16f6f0:
    // 0x16f6f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16f6f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16f6f4:
    // 0x16f6f4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x16f6f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16f6f8:
    // 0x16f6f8: 0x24c61cc0  addiu       $a2, $a2, 0x1CC0
    ctx->pc = 0x16f6f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 7360));
label_16f6fc:
    // 0x16f6fc: 0xc05b8b4  jal         func_16E2D0
label_16f700:
    if (ctx->pc == 0x16F700u) {
        ctx->pc = 0x16F700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F6FCu;
        // 0x16f700: 0x24e71a78  addiu       $a3, $a3, 0x1A78 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 6776));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16F704u;
        goto label_16f704;
    }
    ctx->pc = 0x16F6FCu;
    SET_GPR_U32(ctx, 31, 0x16F704u);
    ctx->pc = 0x16F700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F6FCu;
    // 0x16f700: 0x24e71a78  addiu       $a3, $a3, 0x1A78 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 6776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16E2D0u;
    { ctx->pc = 0x16e2d0; return; }
    ctx->pc = 0x16F704u;
label_16f704:
    // 0x16f704: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x16f704u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_16f708:
    // 0x16f708: 0x8f838718  lw          $v1, -0x78E8($gp)
    ctx->pc = 0x16f708u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936344)));
label_16f70c:
    // 0x16f70c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x16f70cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    ctx->pc = 0x16f710u;
    return;
}
