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

// Function: FUN_0019b850
// Address: 0x19b850 - 0x29b858
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0019b850_part434(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x26ef20u: goto label_26ef20;
        case 0x26ef24u: goto label_26ef24;
        case 0x26ef28u: goto label_26ef28;
        case 0x26ef2cu: goto label_26ef2c;
        case 0x26ef30u: goto label_26ef30;
        case 0x26ef34u: goto label_26ef34;
        case 0x26ef38u: goto label_26ef38;
        case 0x26ef3cu: goto label_26ef3c;
        case 0x26ef40u: goto label_26ef40;
        case 0x26ef44u: goto label_26ef44;
        case 0x26ef48u: goto label_26ef48;
        case 0x26ef4cu: goto label_26ef4c;
        case 0x26ef50u: goto label_26ef50;
        case 0x26ef54u: goto label_26ef54;
        case 0x26ef58u: goto label_26ef58;
        case 0x26ef5cu: goto label_26ef5c;
        case 0x26ef60u: goto label_26ef60;
        case 0x26ef64u: goto label_26ef64;
        case 0x26ef68u: goto label_26ef68;
        case 0x26ef6cu: goto label_26ef6c;
        case 0x26ef70u: goto label_26ef70;
        case 0x26ef74u: goto label_26ef74;
        case 0x26ef78u: goto label_26ef78;
        case 0x26ef7cu: goto label_26ef7c;
        case 0x26ef80u: goto label_26ef80;
        case 0x26ef84u: goto label_26ef84;
        case 0x26ef88u: goto label_26ef88;
        case 0x26ef8cu: goto label_26ef8c;
        case 0x26ef90u: goto label_26ef90;
        case 0x26ef94u: goto label_26ef94;
        case 0x26ef98u: goto label_26ef98;
        case 0x26ef9cu: goto label_26ef9c;
        case 0x26efa0u: goto label_26efa0;
        case 0x26efa4u: goto label_26efa4;
        case 0x26efa8u: goto label_26efa8;
        case 0x26efacu: goto label_26efac;
        case 0x26efb0u: goto label_26efb0;
        case 0x26efb4u: goto label_26efb4;
        case 0x26efb8u: goto label_26efb8;
        case 0x26efbcu: goto label_26efbc;
        case 0x26efc0u: goto label_26efc0;
        case 0x26efc4u: goto label_26efc4;
        case 0x26efc8u: goto label_26efc8;
        case 0x26efccu: goto label_26efcc;
        case 0x26efd0u: goto label_26efd0;
        case 0x26efd4u: goto label_26efd4;
        case 0x26efd8u: goto label_26efd8;
        case 0x26efdcu: goto label_26efdc;
        case 0x26efe0u: goto label_26efe0;
        case 0x26efe4u: goto label_26efe4;
        case 0x26efe8u: goto label_26efe8;
        case 0x26efecu: goto label_26efec;
        case 0x26eff0u: goto label_26eff0;
        case 0x26eff4u: goto label_26eff4;
        case 0x26eff8u: goto label_26eff8;
        case 0x26effcu: goto label_26effc;
        case 0x26f000u: goto label_26f000;
        case 0x26f004u: goto label_26f004;
        case 0x26f008u: goto label_26f008;
        case 0x26f00cu: goto label_26f00c;
        case 0x26f010u: goto label_26f010;
        case 0x26f014u: goto label_26f014;
        case 0x26f018u: goto label_26f018;
        case 0x26f01cu: goto label_26f01c;
        case 0x26f020u: goto label_26f020;
        case 0x26f024u: goto label_26f024;
        case 0x26f028u: goto label_26f028;
        case 0x26f02cu: goto label_26f02c;
        case 0x26f030u: goto label_26f030;
        case 0x26f034u: goto label_26f034;
        case 0x26f038u: goto label_26f038;
        case 0x26f03cu: goto label_26f03c;
        case 0x26f040u: goto label_26f040;
        case 0x26f044u: goto label_26f044;
        case 0x26f048u: goto label_26f048;
        case 0x26f04cu: goto label_26f04c;
        case 0x26f050u: goto label_26f050;
        case 0x26f054u: goto label_26f054;
        case 0x26f058u: goto label_26f058;
        case 0x26f05cu: goto label_26f05c;
        case 0x26f060u: goto label_26f060;
        case 0x26f064u: goto label_26f064;
        case 0x26f068u: goto label_26f068;
        case 0x26f06cu: goto label_26f06c;
        case 0x26f070u: goto label_26f070;
        case 0x26f074u: goto label_26f074;
        case 0x26f078u: goto label_26f078;
        case 0x26f07cu: goto label_26f07c;
        case 0x26f080u: goto label_26f080;
        case 0x26f084u: goto label_26f084;
        case 0x26f088u: goto label_26f088;
        case 0x26f08cu: goto label_26f08c;
        case 0x26f090u: goto label_26f090;
        case 0x26f094u: goto label_26f094;
        case 0x26f098u: goto label_26f098;
        case 0x26f09cu: goto label_26f09c;
        case 0x26f0a0u: goto label_26f0a0;
        case 0x26f0a4u: goto label_26f0a4;
        case 0x26f0a8u: goto label_26f0a8;
        case 0x26f0acu: goto label_26f0ac;
        case 0x26f0b0u: goto label_26f0b0;
        case 0x26f0b4u: goto label_26f0b4;
        case 0x26f0b8u: goto label_26f0b8;
        case 0x26f0bcu: goto label_26f0bc;
        case 0x26f0c0u: goto label_26f0c0;
        case 0x26f0c4u: goto label_26f0c4;
        case 0x26f0c8u: goto label_26f0c8;
        case 0x26f0ccu: goto label_26f0cc;
        case 0x26f0d0u: goto label_26f0d0;
        case 0x26f0d4u: goto label_26f0d4;
        case 0x26f0d8u: goto label_26f0d8;
        case 0x26f0dcu: goto label_26f0dc;
        case 0x26f0e0u: goto label_26f0e0;
        case 0x26f0e4u: goto label_26f0e4;
        case 0x26f0e8u: goto label_26f0e8;
        case 0x26f0ecu: goto label_26f0ec;
        case 0x26f0f0u: goto label_26f0f0;
        case 0x26f0f4u: goto label_26f0f4;
        case 0x26f0f8u: goto label_26f0f8;
        case 0x26f0fcu: goto label_26f0fc;
        case 0x26f100u: goto label_26f100;
        case 0x26f104u: goto label_26f104;
        case 0x26f108u: goto label_26f108;
        case 0x26f10cu: goto label_26f10c;
        case 0x26f110u: goto label_26f110;
        case 0x26f114u: goto label_26f114;
        case 0x26f118u: goto label_26f118;
        case 0x26f11cu: goto label_26f11c;
        case 0x26f120u: goto label_26f120;
        case 0x26f124u: goto label_26f124;
        case 0x26f128u: goto label_26f128;
        case 0x26f12cu: goto label_26f12c;
        case 0x26f130u: goto label_26f130;
        case 0x26f134u: goto label_26f134;
        case 0x26f138u: goto label_26f138;
        case 0x26f13cu: goto label_26f13c;
        case 0x26f140u: goto label_26f140;
        case 0x26f144u: goto label_26f144;
        case 0x26f148u: goto label_26f148;
        case 0x26f14cu: goto label_26f14c;
        case 0x26f150u: goto label_26f150;
        case 0x26f154u: goto label_26f154;
        case 0x26f158u: goto label_26f158;
        case 0x26f15cu: goto label_26f15c;
        case 0x26f160u: goto label_26f160;
        case 0x26f164u: goto label_26f164;
        case 0x26f168u: goto label_26f168;
        case 0x26f16cu: goto label_26f16c;
        case 0x26f170u: goto label_26f170;
        case 0x26f174u: goto label_26f174;
        case 0x26f178u: goto label_26f178;
        case 0x26f17cu: goto label_26f17c;
        case 0x26f180u: goto label_26f180;
        case 0x26f184u: goto label_26f184;
        case 0x26f188u: goto label_26f188;
        case 0x26f18cu: goto label_26f18c;
        case 0x26f190u: goto label_26f190;
        case 0x26f194u: goto label_26f194;
        case 0x26f198u: goto label_26f198;
        case 0x26f19cu: goto label_26f19c;
        case 0x26f1a0u: goto label_26f1a0;
        case 0x26f1a4u: goto label_26f1a4;
        case 0x26f1a8u: goto label_26f1a8;
        case 0x26f1acu: goto label_26f1ac;
        case 0x26f1b0u: goto label_26f1b0;
        case 0x26f1b4u: goto label_26f1b4;
        case 0x26f1b8u: goto label_26f1b8;
        case 0x26f1bcu: goto label_26f1bc;
        case 0x26f1c0u: goto label_26f1c0;
        case 0x26f1c4u: goto label_26f1c4;
        case 0x26f1c8u: goto label_26f1c8;
        case 0x26f1ccu: goto label_26f1cc;
        case 0x26f1d0u: goto label_26f1d0;
        case 0x26f1d4u: goto label_26f1d4;
        case 0x26f1d8u: goto label_26f1d8;
        case 0x26f1dcu: goto label_26f1dc;
        case 0x26f1e0u: goto label_26f1e0;
        case 0x26f1e4u: goto label_26f1e4;
        case 0x26f1e8u: goto label_26f1e8;
        case 0x26f1ecu: goto label_26f1ec;
        case 0x26f1f0u: goto label_26f1f0;
        case 0x26f1f4u: goto label_26f1f4;
        case 0x26f1f8u: goto label_26f1f8;
        case 0x26f1fcu: goto label_26f1fc;
        case 0x26f200u: goto label_26f200;
        case 0x26f204u: goto label_26f204;
        case 0x26f208u: goto label_26f208;
        case 0x26f20cu: goto label_26f20c;
        case 0x26f210u: goto label_26f210;
        case 0x26f214u: goto label_26f214;
        case 0x26f218u: goto label_26f218;
        case 0x26f21cu: goto label_26f21c;
        case 0x26f220u: goto label_26f220;
        case 0x26f224u: goto label_26f224;
        case 0x26f228u: goto label_26f228;
        case 0x26f22cu: goto label_26f22c;
        case 0x26f230u: goto label_26f230;
        case 0x26f234u: goto label_26f234;
        case 0x26f238u: goto label_26f238;
        case 0x26f23cu: goto label_26f23c;
        case 0x26f240u: goto label_26f240;
        case 0x26f244u: goto label_26f244;
        case 0x26f248u: goto label_26f248;
        case 0x26f24cu: goto label_26f24c;
        case 0x26f250u: goto label_26f250;
        case 0x26f254u: goto label_26f254;
        case 0x26f258u: goto label_26f258;
        case 0x26f25cu: goto label_26f25c;
        case 0x26f260u: goto label_26f260;
        case 0x26f264u: goto label_26f264;
        case 0x26f268u: goto label_26f268;
        case 0x26f26cu: goto label_26f26c;
        case 0x26f270u: goto label_26f270;
        case 0x26f274u: goto label_26f274;
        case 0x26f278u: goto label_26f278;
        case 0x26f27cu: goto label_26f27c;
        case 0x26f280u: goto label_26f280;
        case 0x26f284u: goto label_26f284;
        case 0x26f288u: goto label_26f288;
        case 0x26f28cu: goto label_26f28c;
        case 0x26f290u: goto label_26f290;
        case 0x26f294u: goto label_26f294;
        case 0x26f298u: goto label_26f298;
        case 0x26f29cu: goto label_26f29c;
        case 0x26f2a0u: goto label_26f2a0;
        case 0x26f2a4u: goto label_26f2a4;
        case 0x26f2a8u: goto label_26f2a8;
        case 0x26f2acu: goto label_26f2ac;
        case 0x26f2b0u: goto label_26f2b0;
        case 0x26f2b4u: goto label_26f2b4;
        case 0x26f2b8u: goto label_26f2b8;
        case 0x26f2bcu: goto label_26f2bc;
        case 0x26f2c0u: goto label_26f2c0;
        case 0x26f2c4u: goto label_26f2c4;
        case 0x26f2c8u: goto label_26f2c8;
        case 0x26f2ccu: goto label_26f2cc;
        case 0x26f2d0u: goto label_26f2d0;
        case 0x26f2d4u: goto label_26f2d4;
        case 0x26f2d8u: goto label_26f2d8;
        case 0x26f2dcu: goto label_26f2dc;
        case 0x26f2e0u: goto label_26f2e0;
        case 0x26f2e4u: goto label_26f2e4;
        case 0x26f2e8u: goto label_26f2e8;
        case 0x26f2ecu: goto label_26f2ec;
        case 0x26f2f0u: goto label_26f2f0;
        case 0x26f2f4u: goto label_26f2f4;
        case 0x26f2f8u: goto label_26f2f8;
        case 0x26f2fcu: goto label_26f2fc;
        case 0x26f300u: goto label_26f300;
        case 0x26f304u: goto label_26f304;
        case 0x26f308u: goto label_26f308;
        case 0x26f30cu: goto label_26f30c;
        case 0x26f310u: goto label_26f310;
        case 0x26f314u: goto label_26f314;
        case 0x26f318u: goto label_26f318;
        case 0x26f31cu: goto label_26f31c;
        case 0x26f320u: goto label_26f320;
        case 0x26f324u: goto label_26f324;
        case 0x26f328u: goto label_26f328;
        case 0x26f32cu: goto label_26f32c;
        case 0x26f330u: goto label_26f330;
        case 0x26f334u: goto label_26f334;
        case 0x26f338u: goto label_26f338;
        case 0x26f33cu: goto label_26f33c;
        case 0x26f340u: goto label_26f340;
        case 0x26f344u: goto label_26f344;
        case 0x26f348u: goto label_26f348;
        case 0x26f34cu: goto label_26f34c;
        case 0x26f350u: goto label_26f350;
        case 0x26f354u: goto label_26f354;
        case 0x26f358u: goto label_26f358;
        case 0x26f35cu: goto label_26f35c;
        case 0x26f360u: goto label_26f360;
        case 0x26f364u: goto label_26f364;
        case 0x26f368u: goto label_26f368;
        case 0x26f36cu: goto label_26f36c;
        case 0x26f370u: goto label_26f370;
        case 0x26f374u: goto label_26f374;
        case 0x26f378u: goto label_26f378;
        case 0x26f37cu: goto label_26f37c;
        case 0x26f380u: goto label_26f380;
        case 0x26f384u: goto label_26f384;
        case 0x26f388u: goto label_26f388;
        case 0x26f38cu: goto label_26f38c;
        case 0x26f390u: goto label_26f390;
        case 0x26f394u: goto label_26f394;
        case 0x26f398u: goto label_26f398;
        case 0x26f39cu: goto label_26f39c;
        case 0x26f3a0u: goto label_26f3a0;
        case 0x26f3a4u: goto label_26f3a4;
        case 0x26f3a8u: goto label_26f3a8;
        case 0x26f3acu: goto label_26f3ac;
        case 0x26f3b0u: goto label_26f3b0;
        case 0x26f3b4u: goto label_26f3b4;
        case 0x26f3b8u: goto label_26f3b8;
        case 0x26f3bcu: goto label_26f3bc;
        case 0x26f3c0u: goto label_26f3c0;
        case 0x26f3c4u: goto label_26f3c4;
        case 0x26f3c8u: goto label_26f3c8;
        case 0x26f3ccu: goto label_26f3cc;
        case 0x26f3d0u: goto label_26f3d0;
        case 0x26f3d4u: goto label_26f3d4;
        case 0x26f3d8u: goto label_26f3d8;
        case 0x26f3dcu: goto label_26f3dc;
        case 0x26f3e0u: goto label_26f3e0;
        case 0x26f3e4u: goto label_26f3e4;
        case 0x26f3e8u: goto label_26f3e8;
        case 0x26f3ecu: goto label_26f3ec;
        case 0x26f3f0u: goto label_26f3f0;
        case 0x26f3f4u: goto label_26f3f4;
        case 0x26f3f8u: goto label_26f3f8;
        case 0x26f3fcu: goto label_26f3fc;
        case 0x26f400u: goto label_26f400;
        case 0x26f404u: goto label_26f404;
        case 0x26f408u: goto label_26f408;
        case 0x26f40cu: goto label_26f40c;
        case 0x26f410u: goto label_26f410;
        case 0x26f414u: goto label_26f414;
        case 0x26f418u: goto label_26f418;
        case 0x26f41cu: goto label_26f41c;
        case 0x26f420u: goto label_26f420;
        case 0x26f424u: goto label_26f424;
        case 0x26f428u: goto label_26f428;
        case 0x26f42cu: goto label_26f42c;
        case 0x26f430u: goto label_26f430;
        case 0x26f434u: goto label_26f434;
        case 0x26f438u: goto label_26f438;
        case 0x26f43cu: goto label_26f43c;
        case 0x26f440u: goto label_26f440;
        case 0x26f444u: goto label_26f444;
        case 0x26f448u: goto label_26f448;
        case 0x26f44cu: goto label_26f44c;
        case 0x26f450u: goto label_26f450;
        case 0x26f454u: goto label_26f454;
        case 0x26f458u: goto label_26f458;
        case 0x26f45cu: goto label_26f45c;
        case 0x26f460u: goto label_26f460;
        case 0x26f464u: goto label_26f464;
        case 0x26f468u: goto label_26f468;
        case 0x26f46cu: goto label_26f46c;
        case 0x26f470u: goto label_26f470;
        case 0x26f474u: goto label_26f474;
        case 0x26f478u: goto label_26f478;
        case 0x26f47cu: goto label_26f47c;
        case 0x26f480u: goto label_26f480;
        case 0x26f484u: goto label_26f484;
        case 0x26f488u: goto label_26f488;
        case 0x26f48cu: goto label_26f48c;
        case 0x26f490u: goto label_26f490;
        case 0x26f494u: goto label_26f494;
        case 0x26f498u: goto label_26f498;
        case 0x26f49cu: goto label_26f49c;
        case 0x26f4a0u: goto label_26f4a0;
        case 0x26f4a4u: goto label_26f4a4;
        case 0x26f4a8u: goto label_26f4a8;
        case 0x26f4acu: goto label_26f4ac;
        case 0x26f4b0u: goto label_26f4b0;
        case 0x26f4b4u: goto label_26f4b4;
        case 0x26f4b8u: goto label_26f4b8;
        case 0x26f4bcu: goto label_26f4bc;
        case 0x26f4c0u: goto label_26f4c0;
        case 0x26f4c4u: goto label_26f4c4;
        case 0x26f4c8u: goto label_26f4c8;
        case 0x26f4ccu: goto label_26f4cc;
        case 0x26f4d0u: goto label_26f4d0;
        case 0x26f4d4u: goto label_26f4d4;
        case 0x26f4d8u: goto label_26f4d8;
        case 0x26f4dcu: goto label_26f4dc;
        case 0x26f4e0u: goto label_26f4e0;
        case 0x26f4e4u: goto label_26f4e4;
        case 0x26f4e8u: goto label_26f4e8;
        case 0x26f4ecu: goto label_26f4ec;
        case 0x26f4f0u: goto label_26f4f0;
        case 0x26f4f4u: goto label_26f4f4;
        case 0x26f4f8u: goto label_26f4f8;
        case 0x26f4fcu: goto label_26f4fc;
        case 0x26f500u: goto label_26f500;
        case 0x26f504u: goto label_26f504;
        case 0x26f508u: goto label_26f508;
        case 0x26f50cu: goto label_26f50c;
        case 0x26f510u: goto label_26f510;
        case 0x26f514u: goto label_26f514;
        case 0x26f518u: goto label_26f518;
        case 0x26f51cu: goto label_26f51c;
        case 0x26f520u: goto label_26f520;
        case 0x26f524u: goto label_26f524;
        case 0x26f528u: goto label_26f528;
        case 0x26f52cu: goto label_26f52c;
        case 0x26f530u: goto label_26f530;
        case 0x26f534u: goto label_26f534;
        case 0x26f538u: goto label_26f538;
        case 0x26f53cu: goto label_26f53c;
        case 0x26f540u: goto label_26f540;
        case 0x26f544u: goto label_26f544;
        case 0x26f548u: goto label_26f548;
        case 0x26f54cu: goto label_26f54c;
        case 0x26f550u: goto label_26f550;
        case 0x26f554u: goto label_26f554;
        case 0x26f558u: goto label_26f558;
        case 0x26f55cu: goto label_26f55c;
        case 0x26f560u: goto label_26f560;
        case 0x26f564u: goto label_26f564;
        case 0x26f568u: goto label_26f568;
        case 0x26f56cu: goto label_26f56c;
        case 0x26f570u: goto label_26f570;
        case 0x26f574u: goto label_26f574;
        case 0x26f578u: goto label_26f578;
        case 0x26f57cu: goto label_26f57c;
        case 0x26f580u: goto label_26f580;
        case 0x26f584u: goto label_26f584;
        case 0x26f588u: goto label_26f588;
        case 0x26f58cu: goto label_26f58c;
        case 0x26f590u: goto label_26f590;
        case 0x26f594u: goto label_26f594;
        case 0x26f598u: goto label_26f598;
        case 0x26f59cu: goto label_26f59c;
        case 0x26f5a0u: goto label_26f5a0;
        case 0x26f5a4u: goto label_26f5a4;
        case 0x26f5a8u: goto label_26f5a8;
        case 0x26f5acu: goto label_26f5ac;
        case 0x26f5b0u: goto label_26f5b0;
        case 0x26f5b4u: goto label_26f5b4;
        case 0x26f5b8u: goto label_26f5b8;
        case 0x26f5bcu: goto label_26f5bc;
        case 0x26f5c0u: goto label_26f5c0;
        case 0x26f5c4u: goto label_26f5c4;
        case 0x26f5c8u: goto label_26f5c8;
        case 0x26f5ccu: goto label_26f5cc;
        case 0x26f5d0u: goto label_26f5d0;
        case 0x26f5d4u: goto label_26f5d4;
        case 0x26f5d8u: goto label_26f5d8;
        case 0x26f5dcu: goto label_26f5dc;
        case 0x26f5e0u: goto label_26f5e0;
        case 0x26f5e4u: goto label_26f5e4;
        case 0x26f5e8u: goto label_26f5e8;
        case 0x26f5ecu: goto label_26f5ec;
        case 0x26f5f0u: goto label_26f5f0;
        case 0x26f5f4u: goto label_26f5f4;
        case 0x26f5f8u: goto label_26f5f8;
        case 0x26f5fcu: goto label_26f5fc;
        case 0x26f600u: goto label_26f600;
        case 0x26f604u: goto label_26f604;
        case 0x26f608u: goto label_26f608;
        case 0x26f60cu: goto label_26f60c;
        case 0x26f610u: goto label_26f610;
        case 0x26f614u: goto label_26f614;
        case 0x26f618u: goto label_26f618;
        case 0x26f61cu: goto label_26f61c;
        case 0x26f620u: goto label_26f620;
        case 0x26f624u: goto label_26f624;
        case 0x26f628u: goto label_26f628;
        case 0x26f62cu: goto label_26f62c;
        case 0x26f630u: goto label_26f630;
        case 0x26f634u: goto label_26f634;
        case 0x26f638u: goto label_26f638;
        case 0x26f63cu: goto label_26f63c;
        case 0x26f640u: goto label_26f640;
        case 0x26f644u: goto label_26f644;
        case 0x26f648u: goto label_26f648;
        case 0x26f64cu: goto label_26f64c;
        case 0x26f650u: goto label_26f650;
        case 0x26f654u: goto label_26f654;
        case 0x26f658u: goto label_26f658;
        case 0x26f65cu: goto label_26f65c;
        case 0x26f660u: goto label_26f660;
        case 0x26f664u: goto label_26f664;
        case 0x26f668u: goto label_26f668;
        case 0x26f66cu: goto label_26f66c;
        case 0x26f670u: goto label_26f670;
        case 0x26f674u: goto label_26f674;
        case 0x26f678u: goto label_26f678;
        case 0x26f67cu: goto label_26f67c;
        case 0x26f680u: goto label_26f680;
        case 0x26f684u: goto label_26f684;
        case 0x26f688u: goto label_26f688;
        case 0x26f68cu: goto label_26f68c;
        case 0x26f690u: goto label_26f690;
        case 0x26f694u: goto label_26f694;
        case 0x26f698u: goto label_26f698;
        case 0x26f69cu: goto label_26f69c;
        case 0x26f6a0u: goto label_26f6a0;
        case 0x26f6a4u: goto label_26f6a4;
        case 0x26f6a8u: goto label_26f6a8;
        case 0x26f6acu: goto label_26f6ac;
        case 0x26f6b0u: goto label_26f6b0;
        case 0x26f6b4u: goto label_26f6b4;
        case 0x26f6b8u: goto label_26f6b8;
        case 0x26f6bcu: goto label_26f6bc;
        case 0x26f6c0u: goto label_26f6c0;
        case 0x26f6c4u: goto label_26f6c4;
        case 0x26f6c8u: goto label_26f6c8;
        case 0x26f6ccu: goto label_26f6cc;
        case 0x26f6d0u: goto label_26f6d0;
        case 0x26f6d4u: goto label_26f6d4;
        case 0x26f6d8u: goto label_26f6d8;
        case 0x26f6dcu: goto label_26f6dc;
        case 0x26f6e0u: goto label_26f6e0;
        case 0x26f6e4u: goto label_26f6e4;
        case 0x26f6e8u: goto label_26f6e8;
        case 0x26f6ecu: goto label_26f6ec;
        default: return;
    }

label_26ef20:
    // 0x26ef20: 0x4b90  .word       0x00004B90                   # mfhi        $t1 # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26ef20u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_26ef24:
    // 0x26ef24: 0xb280  sll         $s6, $zero, 10
    ctx->pc = 0x26ef24u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 0), 10));
label_26ef28:
    // 0x26ef28: 0x0  nop
    ctx->pc = 0x26ef28u;
    // NOP
label_26ef2c:
    // 0x26ef2c: 0x0  nop
    ctx->pc = 0x26ef2cu;
    // NOP
label_26ef30:
    // 0x26ef30: 0x4ba7  .word       0x00004BA7                   # not         $t1, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26ef30u;
    SET_GPR_U64(ctx, 9, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_26ef34:
    // 0x26ef34: 0x4b50  .word       0x00004B50                   # mfhi        $t1 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26ef34u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_26ef38:
    // 0x26ef38: 0x0  nop
    ctx->pc = 0x26ef38u;
    // NOP
label_26ef3c:
    // 0x26ef3c: 0x0  nop
    ctx->pc = 0x26ef3cu;
    // NOP
label_26ef40:
    // 0x26ef40: 0x4bb1  tgeu        $zero, $zero, 302
    ctx->pc = 0x26ef40u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26ef44:
    // 0x26ef44: 0xf230  tge         $zero, $zero, 968
    ctx->pc = 0x26ef44u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26ef48:
    // 0x26ef48: 0x0  nop
    ctx->pc = 0x26ef48u;
    // NOP
label_26ef4c:
    // 0x26ef4c: 0x0  nop
    ctx->pc = 0x26ef4cu;
    // NOP
label_26ef50:
    // 0x26ef50: 0x4bd0  .word       0x00004BD0                   # mfhi        $t1 # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26ef50u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_26ef54:
    // 0x26ef54: 0x7c20  .word       0x00007C20                   # add         $t7, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26ef54u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_26ef58:
    // 0x26ef58: 0x0  nop
    ctx->pc = 0x26ef58u;
    // NOP
label_26ef5c:
    // 0x26ef5c: 0x0  nop
    ctx->pc = 0x26ef5cu;
    // NOP
label_26ef60:
    // 0x26ef60: 0x4be0  .word       0x00004BE0                   # add         $t1, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26ef60u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_26ef64:
    // 0x26ef64: 0xa1e0  .word       0x0000A1E0                   # add         $s4, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26ef64u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_26ef68:
    // 0x26ef68: 0x0  nop
    ctx->pc = 0x26ef68u;
    // NOP
label_26ef6c:
    // 0x26ef6c: 0x0  nop
    ctx->pc = 0x26ef6cu;
    // NOP
label_26ef70:
    // 0x26ef70: 0x4bf5  .word       0x00004BF5                   # INVALID     $zero, $zero, 0x4BF5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26ef70u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x26EF70 raw=0x00004BF5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26ef74:
    // 0x26ef74: 0x8270  tge         $zero, $zero, 521
    ctx->pc = 0x26ef74u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26ef78:
    // 0x26ef78: 0x0  nop
    ctx->pc = 0x26ef78u;
    // NOP
label_26ef7c:
    // 0x26ef7c: 0x0  nop
    ctx->pc = 0x26ef7cu;
    // NOP
label_26ef80:
    // 0x26ef80: 0x4c06  .word       0x00004C06                   # srlv        $t1, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26ef80u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_26ef84:
    // 0x26ef84: 0x88a0  .word       0x000088A0                   # add         $s1, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26ef84u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_26ef88:
    // 0x26ef88: 0x0  nop
    ctx->pc = 0x26ef88u;
    // NOP
label_26ef8c:
    // 0x26ef8c: 0x0  nop
    ctx->pc = 0x26ef8cu;
    // NOP
label_26ef90:
    // 0x26ef90: 0x4c18  .word       0x00004C18                   # mult        $t1, $zero, $zero # 00000400 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x26ef90u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
label_26ef94:
    // 0x26ef94: 0x9570  tge         $zero, $zero, 597
    ctx->pc = 0x26ef94u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26ef98:
    // 0x26ef98: 0x0  nop
    ctx->pc = 0x26ef98u;
    // NOP
label_26ef9c:
    // 0x26ef9c: 0x0  nop
    ctx->pc = 0x26ef9cu;
    // NOP
label_26efa0:
    // 0x26efa0: 0x4c2b  .word       0x00004C2B                   # sltu        $t1, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26efa0u;
    SET_GPR_U64(ctx, 9, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_26efa4:
    // 0x26efa4: 0x3f10  .word       0x00003F10                   # mfhi        $a3 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26efa4u;
    SET_GPR_U64(ctx, 7, ctx->hi);
label_26efa8:
    // 0x26efa8: 0x0  nop
    ctx->pc = 0x26efa8u;
    // NOP
label_26efac:
    // 0x26efac: 0x0  nop
    ctx->pc = 0x26efacu;
    // NOP
label_26efb0:
    // 0x26efb0: 0x4c33  tltu        $zero, $zero, 304
    ctx->pc = 0x26efb0u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26efb4:
    // 0x26efb4: 0x96f0  tge         $zero, $zero, 603
    ctx->pc = 0x26efb4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26efb8:
    // 0x26efb8: 0x0  nop
    ctx->pc = 0x26efb8u;
    // NOP
label_26efbc:
    // 0x26efbc: 0x0  nop
    ctx->pc = 0x26efbcu;
    // NOP
label_26efc0:
    // 0x26efc0: 0x4c46  .word       0x00004C46                   # srlv        $t1, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26efc0u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_26efc4:
    // 0x26efc4: 0xca70  tge         $zero, $zero, 809
    ctx->pc = 0x26efc4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26efc8:
    // 0x26efc8: 0x0  nop
    ctx->pc = 0x26efc8u;
    // NOP
label_26efcc:
    // 0x26efcc: 0x0  nop
    ctx->pc = 0x26efccu;
    // NOP
label_26efd0:
    // 0x26efd0: 0x4c60  .word       0x00004C60                   # add         $t1, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26efd0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_26efd4:
    // 0x26efd4: 0x7550  .word       0x00007550                   # mfhi        $t6 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26efd4u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_26efd8:
    // 0x26efd8: 0x0  nop
    ctx->pc = 0x26efd8u;
    // NOP
label_26efdc:
    // 0x26efdc: 0x0  nop
    ctx->pc = 0x26efdcu;
    // NOP
label_26efe0:
    // 0x26efe0: 0x4c6f  .word       0x00004C6F                   # dsubu       $t1, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26efe0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_26efe4:
    // 0x26efe4: 0x5100  sll         $t2, $zero, 4
    ctx->pc = 0x26efe4u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 0), 4));
label_26efe8:
    // 0x26efe8: 0x0  nop
    ctx->pc = 0x26efe8u;
    // NOP
label_26efec:
    // 0x26efec: 0x0  nop
    ctx->pc = 0x26efecu;
    // NOP
label_26eff0:
    // 0x26eff0: 0x4c7a  dsrl        $t1, $zero, 17
    ctx->pc = 0x26eff0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) >> 17);
label_26eff4:
    // 0x26eff4: 0x8a80  sll         $s1, $zero, 10
    ctx->pc = 0x26eff4u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 0), 10));
label_26eff8:
    // 0x26eff8: 0x0  nop
    ctx->pc = 0x26eff8u;
    // NOP
label_26effc:
    // 0x26effc: 0x0  nop
    ctx->pc = 0x26effcu;
    // NOP
label_26f000:
    // 0x26f000: 0x4c8c  syscall     306
    ctx->pc = 0x26f000u;
    ctx->pc = 0x26F004u;
runtime->handleSyscall(rdram, ctx, 0x132u);
label_26f004:
    // 0x26f004: 0xa800  sll         $s5, $zero, 0
    ctx->pc = 0x26f004u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_26f008:
    // 0x26f008: 0x0  nop
    ctx->pc = 0x26f008u;
    // NOP
label_26f00c:
    // 0x26f00c: 0x0  nop
    ctx->pc = 0x26f00cu;
    // NOP
label_26f010:
    // 0x26f010: 0x4ca1  .word       0x00004CA1                   # addu        $t1, $zero, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f010u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_26f014:
    // 0x26f014: 0x7e90  .word       0x00007E90                   # mfhi        $t7 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f014u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_26f018:
    // 0x26f018: 0x0  nop
    ctx->pc = 0x26f018u;
    // NOP
label_26f01c:
    // 0x26f01c: 0x0  nop
    ctx->pc = 0x26f01cu;
    // NOP
label_26f020:
    // 0x26f020: 0x4cb1  tgeu        $zero, $zero, 306
    ctx->pc = 0x26f020u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26f024:
    // 0x26f024: 0x70c0  sll         $t6, $zero, 3
    ctx->pc = 0x26f024u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 0), 3));
label_26f028:
    // 0x26f028: 0x0  nop
    ctx->pc = 0x26f028u;
    // NOP
label_26f02c:
    // 0x26f02c: 0x0  nop
    ctx->pc = 0x26f02cu;
    // NOP
label_26f030:
    // 0x26f030: 0x4cc0  sll         $t1, $zero, 19
    ctx->pc = 0x26f030u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
label_26f034:
    // 0x26f034: 0x67a0  .word       0x000067A0                   # add         $t4, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f034u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_26f038:
    // 0x26f038: 0x0  nop
    ctx->pc = 0x26f038u;
    // NOP
label_26f03c:
    // 0x26f03c: 0x0  nop
    ctx->pc = 0x26f03cu;
    // NOP
label_26f040:
    // 0x26f040: 0x4ccd  break       0, 307
    ctx->pc = 0x26f040u;
    runtime->handleBreak(rdram, ctx);
label_26f044:
    // 0x26f044: 0x9f70  tge         $zero, $zero, 637
    ctx->pc = 0x26f044u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26f048:
    // 0x26f048: 0x0  nop
    ctx->pc = 0x26f048u;
    // NOP
label_26f04c:
    // 0x26f04c: 0x0  nop
    ctx->pc = 0x26f04cu;
    // NOP
label_26f050:
    // 0x26f050: 0x4ce1  .word       0x00004CE1                   # addu        $t1, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f050u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_26f054:
    // 0x26f054: 0x9a70  tge         $zero, $zero, 617
    ctx->pc = 0x26f054u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26f058:
    // 0x26f058: 0x0  nop
    ctx->pc = 0x26f058u;
    // NOP
label_26f05c:
    // 0x26f05c: 0x0  nop
    ctx->pc = 0x26f05cu;
    // NOP
label_26f060:
    // 0x26f060: 0x4cf5  .word       0x00004CF5                   # INVALID     $zero, $zero, 0x4CF5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f060u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x26F060 raw=0x00004CF5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26f064:
    // 0x26f064: 0xa360  .word       0x0000A360                   # add         $s4, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f064u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_26f068:
    // 0x26f068: 0x0  nop
    ctx->pc = 0x26f068u;
    // NOP
label_26f06c:
    // 0x26f06c: 0x0  nop
    ctx->pc = 0x26f06cu;
    // NOP
label_26f070:
    // 0x26f070: 0x4d0a  .word       0x00004D0A                   # movz        $t1, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f070u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 0));
label_26f074:
    // 0x26f074: 0x3fa0  .word       0x00003FA0                   # add         $a3, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f074u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
label_26f078:
    // 0x26f078: 0x0  nop
    ctx->pc = 0x26f078u;
    // NOP
label_26f07c:
    // 0x26f07c: 0x0  nop
    ctx->pc = 0x26f07cu;
    // NOP
label_26f080:
    // 0x26f080: 0x4d12  .word       0x00004D12                   # mflo        $t1 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f080u;
    SET_GPR_U64(ctx, 9, ctx->lo);
label_26f084:
    // 0x26f084: 0x9500  sll         $s2, $zero, 20
    ctx->pc = 0x26f084u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 0), 20));
label_26f088:
    // 0x26f088: 0x0  nop
    ctx->pc = 0x26f088u;
    // NOP
label_26f08c:
    // 0x26f08c: 0x0  nop
    ctx->pc = 0x26f08cu;
    // NOP
label_26f090:
    // 0x26f090: 0x4d25  .word       0x00004D25                   # move        $t1, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f090u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_26f094:
    // 0x26f094: 0x54c0  sll         $t2, $zero, 19
    ctx->pc = 0x26f094u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
label_26f098:
    // 0x26f098: 0x0  nop
    ctx->pc = 0x26f098u;
    // NOP
label_26f09c:
    // 0x26f09c: 0x0  nop
    ctx->pc = 0x26f09cu;
    // NOP
label_26f0a0:
    // 0x26f0a0: 0x4d30  tge         $zero, $zero, 308
    ctx->pc = 0x26f0a0u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26f0a4:
    // 0x26f0a4: 0x6f00  sll         $t5, $zero, 28
    ctx->pc = 0x26f0a4u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 0), 28));
label_26f0a8:
    // 0x26f0a8: 0x0  nop
    ctx->pc = 0x26f0a8u;
    // NOP
label_26f0ac:
    // 0x26f0ac: 0x0  nop
    ctx->pc = 0x26f0acu;
    // NOP
label_26f0b0:
    // 0x26f0b0: 0x4d3e  dsrl32      $t1, $zero, 20
    ctx->pc = 0x26f0b0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) >> (32 + 20));
label_26f0b4:
    // 0x26f0b4: 0x8750  .word       0x00008750                   # mfhi        $s0 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f0b4u;
    SET_GPR_U64(ctx, 16, ctx->hi);
label_26f0b8:
    // 0x26f0b8: 0x0  nop
    ctx->pc = 0x26f0b8u;
    // NOP
label_26f0bc:
    // 0x26f0bc: 0x0  nop
    ctx->pc = 0x26f0bcu;
    // NOP
label_26f0c0:
    // 0x26f0c0: 0x4d4f  .word       0x00004D4F                   # sync.p # 00004800 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f0c0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_26f0c4:
    // 0x26f0c4: 0x46d0  .word       0x000046D0                   # mfhi        $t0 # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f0c4u;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_26f0c8:
    // 0x26f0c8: 0x0  nop
    ctx->pc = 0x26f0c8u;
    // NOP
label_26f0cc:
    // 0x26f0cc: 0x0  nop
    ctx->pc = 0x26f0ccu;
    // NOP
label_26f0d0:
    // 0x26f0d0: 0x4d58  .word       0x00004D58                   # mult        $t1, $zero, $zero # 00000540 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x26f0d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
label_26f0d4:
    // 0x26f0d4: 0x11120  .word       0x00011120                   # add         $v0, $zero, $at # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f0d4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 2, (int32_t)result);     } }
label_26f0d8:
    // 0x26f0d8: 0x0  nop
    ctx->pc = 0x26f0d8u;
    // NOP
label_26f0dc:
    // 0x26f0dc: 0x0  nop
    ctx->pc = 0x26f0dcu;
    // NOP
label_26f0e0:
    // 0x26f0e0: 0x4d7b  dsra        $t1, $zero, 21
    ctx->pc = 0x26f0e0u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 0) >> 21);
label_26f0e4:
    // 0x26f0e4: 0x8150  .word       0x00008150                   # mfhi        $s0 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f0e4u;
    SET_GPR_U64(ctx, 16, ctx->hi);
label_26f0e8:
    // 0x26f0e8: 0x0  nop
    ctx->pc = 0x26f0e8u;
    // NOP
label_26f0ec:
    // 0x26f0ec: 0x0  nop
    ctx->pc = 0x26f0ecu;
    // NOP
label_26f0f0:
    // 0x26f0f0: 0x4d8c  syscall     310
    ctx->pc = 0x26f0f0u;
    ctx->pc = 0x26F0F4u;
runtime->handleSyscall(rdram, ctx, 0x136u);
label_26f0f4:
    // 0x26f0f4: 0x6440  sll         $t4, $zero, 17
    ctx->pc = 0x26f0f4u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
label_26f0f8:
    // 0x26f0f8: 0x0  nop
    ctx->pc = 0x26f0f8u;
    // NOP
label_26f0fc:
    // 0x26f0fc: 0x0  nop
    ctx->pc = 0x26f0fcu;
    // NOP
label_26f100:
    // 0x26f100: 0x4d99  .word       0x00004D99                   # multu       $zero, $zero # 00004D80 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f100u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
label_26f104:
    // 0x26f104: 0x8770  tge         $zero, $zero, 541
    ctx->pc = 0x26f104u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26f108:
    // 0x26f108: 0x0  nop
    ctx->pc = 0x26f108u;
    // NOP
label_26f10c:
    // 0x26f10c: 0x0  nop
    ctx->pc = 0x26f10cu;
    // NOP
label_26f110:
    // 0x26f110: 0x4daa  .word       0x00004DAA                   # slt         $t1, $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f110u;
    SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_26f114:
    // 0x26f114: 0x49e0  .word       0x000049E0                   # add         $t1, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f114u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_26f118:
    // 0x26f118: 0x0  nop
    ctx->pc = 0x26f118u;
    // NOP
label_26f11c:
    // 0x26f11c: 0x0  nop
    ctx->pc = 0x26f11cu;
    // NOP
label_26f120:
    // 0x26f120: 0x4db4  teq         $zero, $zero, 310
    ctx->pc = 0x26f120u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26f124:
    // 0x26f124: 0xa880  sll         $s5, $zero, 2
    ctx->pc = 0x26f124u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 0), 2));
label_26f128:
    // 0x26f128: 0x0  nop
    ctx->pc = 0x26f128u;
    // NOP
label_26f12c:
    // 0x26f12c: 0x0  nop
    ctx->pc = 0x26f12cu;
    // NOP
label_26f130:
    // 0x26f130: 0x4dca  .word       0x00004DCA                   # movz        $t1, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f130u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 0));
label_26f134:
    // 0x26f134: 0x9ad0  .word       0x00009AD0                   # mfhi        $s3 # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f134u;
    SET_GPR_U64(ctx, 19, ctx->hi);
label_26f138:
    // 0x26f138: 0x0  nop
    ctx->pc = 0x26f138u;
    // NOP
label_26f13c:
    // 0x26f13c: 0x0  nop
    ctx->pc = 0x26f13cu;
    // NOP
label_26f140:
    // 0x26f140: 0x4dde  .word       0x00004DDE                   # ddiv        $t1, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f140u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x26F140 raw=0x00004DDE"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26f144:
    // 0x26f144: 0x75a0  .word       0x000075A0                   # add         $t6, $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f144u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_26f148:
    // 0x26f148: 0x0  nop
    ctx->pc = 0x26f148u;
    // NOP
label_26f14c:
    // 0x26f14c: 0x0  nop
    ctx->pc = 0x26f14cu;
    // NOP
label_26f150:
    // 0x26f150: 0x4ded  .word       0x00004DED                   # daddu       $t1, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f150u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26f154:
    // 0x26f154: 0x6fa0  .word       0x00006FA0                   # add         $t5, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f154u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_26f158:
    // 0x26f158: 0x0  nop
    ctx->pc = 0x26f158u;
    // NOP
label_26f15c:
    // 0x26f15c: 0x0  nop
    ctx->pc = 0x26f15cu;
    // NOP
label_26f160:
    // 0x26f160: 0x4dfb  dsra        $t1, $zero, 23
    ctx->pc = 0x26f160u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 0) >> 23);
label_26f164:
    // 0x26f164: 0x46c0  sll         $t0, $zero, 27
    ctx->pc = 0x26f164u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 27));
label_26f168:
    // 0x26f168: 0x0  nop
    ctx->pc = 0x26f168u;
    // NOP
label_26f16c:
    // 0x26f16c: 0x0  nop
    ctx->pc = 0x26f16cu;
    // NOP
label_26f170:
    // 0x26f170: 0x4e04  .word       0x00004E04                   # sllv        $t1, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f170u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_26f174:
    // 0x26f174: 0x4ba0  .word       0x00004BA0                   # add         $t1, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f174u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_26f178:
    // 0x26f178: 0x0  nop
    ctx->pc = 0x26f178u;
    // NOP
label_26f17c:
    // 0x26f17c: 0x0  nop
    ctx->pc = 0x26f17cu;
    // NOP
label_26f180:
    // 0x26f180: 0x4e0e  .word       0x00004E0E                   # INVALID     $zero, $zero, 0x4E0E # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f180u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x26F180 raw=0x00004E0E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26f184:
    // 0x26f184: 0x4e70  tge         $zero, $zero, 313
    ctx->pc = 0x26f184u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26f188:
    // 0x26f188: 0x0  nop
    ctx->pc = 0x26f188u;
    // NOP
label_26f18c:
    // 0x26f18c: 0x0  nop
    ctx->pc = 0x26f18cu;
    // NOP
label_26f190:
    // 0x26f190: 0x4e18  .word       0x00004E18                   # mult        $t1, $zero, $zero # 00000600 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x26f190u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
label_26f194:
    // 0x26f194: 0x6bf0  tge         $zero, $zero, 431
    ctx->pc = 0x26f194u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26f198:
    // 0x26f198: 0x0  nop
    ctx->pc = 0x26f198u;
    // NOP
label_26f19c:
    // 0x26f19c: 0x0  nop
    ctx->pc = 0x26f19cu;
    // NOP
label_26f1a0:
    // 0x26f1a0: 0x4e26  .word       0x00004E26                   # xor         $t1, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f1a0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_26f1a4:
    // 0x26f1a4: 0x60e0  .word       0x000060E0                   # add         $t4, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f1a4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_26f1a8:
    // 0x26f1a8: 0x0  nop
    ctx->pc = 0x26f1a8u;
    // NOP
label_26f1ac:
    // 0x26f1ac: 0x0  nop
    ctx->pc = 0x26f1acu;
    // NOP
label_26f1b0:
    // 0x26f1b0: 0x4e33  tltu        $zero, $zero, 312
    ctx->pc = 0x26f1b0u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26f1b4:
    // 0x26f1b4: 0x4270  tge         $zero, $zero, 265
    ctx->pc = 0x26f1b4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26f1b8:
    // 0x26f1b8: 0x0  nop
    ctx->pc = 0x26f1b8u;
    // NOP
label_26f1bc:
    // 0x26f1bc: 0x0  nop
    ctx->pc = 0x26f1bcu;
    // NOP
label_26f1c0:
    // 0x26f1c0: 0x4e3c  dsll32      $t1, $zero, 24
    ctx->pc = 0x26f1c0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) << (32 + 24));
label_26f1c4:
    // 0x26f1c4: 0x3dc0  sll         $a3, $zero, 23
    ctx->pc = 0x26f1c4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 0), 23));
label_26f1c8:
    // 0x26f1c8: 0x0  nop
    ctx->pc = 0x26f1c8u;
    // NOP
label_26f1cc:
    // 0x26f1cc: 0x0  nop
    ctx->pc = 0x26f1ccu;
    // NOP
label_26f1d0:
    // 0x26f1d0: 0x4e44  .word       0x00004E44                   # sllv        $t1, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f1d0u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_26f1d4:
    // 0x26f1d4: 0x4c70  tge         $zero, $zero, 305
    ctx->pc = 0x26f1d4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26f1d8:
    // 0x26f1d8: 0x0  nop
    ctx->pc = 0x26f1d8u;
    // NOP
label_26f1dc:
    // 0x26f1dc: 0x0  nop
    ctx->pc = 0x26f1dcu;
    // NOP
label_26f1e0:
    // 0x26f1e0: 0x4e4e  .word       0x00004E4E                   # INVALID     $zero, $zero, 0x4E4E # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f1e0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x26F1E0 raw=0x00004E4E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26f1e4:
    // 0x26f1e4: 0x3100  sll         $a2, $zero, 4
    ctx->pc = 0x26f1e4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 0), 4));
label_26f1e8:
    // 0x26f1e8: 0x0  nop
    ctx->pc = 0x26f1e8u;
    // NOP
label_26f1ec:
    // 0x26f1ec: 0x0  nop
    ctx->pc = 0x26f1ecu;
    // NOP
label_26f1f0:
    // 0x26f1f0: 0x4e55  .word       0x00004E55                   # INVALID     $zero, $zero, 0x4E55 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f1f0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x26F1F0 raw=0x00004E55"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26f1f4:
    // 0x26f1f4: 0x2870  tge         $zero, $zero, 161
    ctx->pc = 0x26f1f4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26f1f8:
    // 0x26f1f8: 0x0  nop
    ctx->pc = 0x26f1f8u;
    // NOP
label_26f1fc:
    // 0x26f1fc: 0x0  nop
    ctx->pc = 0x26f1fcu;
    // NOP
label_26f200:
    // 0x26f200: 0x4e5b  .word       0x00004E5B                   # divu        $t1, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f200u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_26f204:
    // 0x26f204: 0x3020  add         $a2, $zero, $zero
    ctx->pc = 0x26f204u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 6, (int32_t)result);     } }
label_26f208:
    // 0x26f208: 0x0  nop
    ctx->pc = 0x26f208u;
    // NOP
label_26f20c:
    // 0x26f20c: 0x0  nop
    ctx->pc = 0x26f20cu;
    // NOP
label_26f210:
    // 0x26f210: 0x4e62  .word       0x00004E62                   # neg         $t1, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f210u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 9, (int32_t)tmp); }
label_26f214:
    // 0x26f214: 0x1fa0  .word       0x00001FA0                   # add         $v1, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f214u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_26f218:
    // 0x26f218: 0x0  nop
    ctx->pc = 0x26f218u;
    // NOP
label_26f21c:
    // 0x26f21c: 0x0  nop
    ctx->pc = 0x26f21cu;
    // NOP
label_26f220:
    // 0x26f220: 0x4e66  .word       0x00004E66                   # xor         $t1, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f220u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_26f224:
    // 0x26f224: 0x50d0  .word       0x000050D0                   # mfhi        $t2 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f224u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_26f228:
    // 0x26f228: 0x0  nop
    ctx->pc = 0x26f228u;
    // NOP
label_26f22c:
    // 0x26f22c: 0x0  nop
    ctx->pc = 0x26f22cu;
    // NOP
label_26f230:
    // 0x26f230: 0x4e71  tgeu        $zero, $zero, 313
    ctx->pc = 0x26f230u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26f234:
    // 0x26f234: 0x8020  add         $s0, $zero, $zero
    ctx->pc = 0x26f234u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_26f238:
    // 0x26f238: 0x0  nop
    ctx->pc = 0x26f238u;
    // NOP
label_26f23c:
    // 0x26f23c: 0x0  nop
    ctx->pc = 0x26f23cu;
    // NOP
label_26f240:
    // 0x26f240: 0x4e82  srl         $t1, $zero, 26
    ctx->pc = 0x26f240u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 0), 26));
label_26f244:
    // 0x26f244: 0x8020  add         $s0, $zero, $zero
    ctx->pc = 0x26f244u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_26f248:
    // 0x26f248: 0x0  nop
    ctx->pc = 0x26f248u;
    // NOP
label_26f24c:
    // 0x26f24c: 0x0  nop
    ctx->pc = 0x26f24cu;
    // NOP
label_26f250:
    // 0x26f250: 0x4e93  .word       0x00004E93                   # mtlo        $zero # 00004E80 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f250u;
    ctx->lo = GPR_U64(ctx, 0);
label_26f254:
    // 0x26f254: 0x55f0  tge         $zero, $zero, 343
    ctx->pc = 0x26f254u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26f258:
    // 0x26f258: 0x0  nop
    ctx->pc = 0x26f258u;
    // NOP
label_26f25c:
    // 0x26f25c: 0x0  nop
    ctx->pc = 0x26f25cu;
    // NOP
label_26f260:
    // 0x26f260: 0x4e9e  .word       0x00004E9E                   # ddiv        $t1, $zero, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f260u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x26F260 raw=0x00004E9E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26f264:
    // 0x26f264: 0x50a0  .word       0x000050A0                   # add         $t2, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f264u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
label_26f268:
    // 0x26f268: 0x0  nop
    ctx->pc = 0x26f268u;
    // NOP
label_26f26c:
    // 0x26f26c: 0x0  nop
    ctx->pc = 0x26f26cu;
    // NOP
label_26f270:
    // 0x26f270: 0x4ea9  .word       0x00004EA9                   # mtsa        $zero # 00004E80 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x26f270u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_26f274:
    // 0x26f274: 0x45e0  .word       0x000045E0                   # add         $t0, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f274u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
label_26f278:
    // 0x26f278: 0x0  nop
    ctx->pc = 0x26f278u;
    // NOP
label_26f27c:
    // 0x26f27c: 0x0  nop
    ctx->pc = 0x26f27cu;
    // NOP
label_26f280:
    // 0x26f280: 0x4eb2  tlt         $zero, $zero, 314
    ctx->pc = 0x26f280u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26f284:
    // 0x26f284: 0x5bd0  .word       0x00005BD0                   # mfhi        $t3 # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f284u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_26f288:
    // 0x26f288: 0x0  nop
    ctx->pc = 0x26f288u;
    // NOP
label_26f28c:
    // 0x26f28c: 0x0  nop
    ctx->pc = 0x26f28cu;
    // NOP
label_26f290:
    // 0x26f290: 0x4ebe  dsrl32      $t1, $zero, 26
    ctx->pc = 0x26f290u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) >> (32 + 26));
label_26f294:
    // 0x26f294: 0x5c90  .word       0x00005C90                   # mfhi        $t3 # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f294u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_26f298:
    // 0x26f298: 0x0  nop
    ctx->pc = 0x26f298u;
    // NOP
label_26f29c:
    // 0x26f29c: 0x0  nop
    ctx->pc = 0x26f29cu;
    // NOP
label_26f2a0:
    // 0x26f2a0: 0x4eca  .word       0x00004ECA                   # movz        $t1, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f2a0u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 0));
label_26f2a4:
    // 0x26f2a4: 0x4580  sll         $t0, $zero, 22
    ctx->pc = 0x26f2a4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 22));
label_26f2a8:
    // 0x26f2a8: 0x0  nop
    ctx->pc = 0x26f2a8u;
    // NOP
label_26f2ac:
    // 0x26f2ac: 0x0  nop
    ctx->pc = 0x26f2acu;
    // NOP
label_26f2b0:
    // 0x26f2b0: 0x4ed3  .word       0x00004ED3                   # mtlo        $zero # 00004EC0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f2b0u;
    ctx->lo = GPR_U64(ctx, 0);
label_26f2b4:
    // 0x26f2b4: 0x2150  .word       0x00002150                   # mfhi        $a0 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f2b4u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_26f2b8:
    // 0x26f2b8: 0x0  nop
    ctx->pc = 0x26f2b8u;
    // NOP
label_26f2bc:
    // 0x26f2bc: 0x0  nop
    ctx->pc = 0x26f2bcu;
    // NOP
label_26f2c0:
    // 0x26f2c0: 0x4ed8  .word       0x00004ED8                   # mult        $t1, $zero, $zero # 000006C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x26f2c0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
label_26f2c4:
    // 0x26f2c4: 0x6dd0  .word       0x00006DD0                   # mfhi        $t5 # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f2c4u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_26f2c8:
    // 0x26f2c8: 0x0  nop
    ctx->pc = 0x26f2c8u;
    // NOP
label_26f2cc:
    // 0x26f2cc: 0x0  nop
    ctx->pc = 0x26f2ccu;
    // NOP
label_26f2d0:
    // 0x26f2d0: 0x4ee6  .word       0x00004EE6                   # xor         $t1, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f2d0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_26f2d4:
    // 0x26f2d4: 0x5e90  .word       0x00005E90                   # mfhi        $t3 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f2d4u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_26f2d8:
    // 0x26f2d8: 0x0  nop
    ctx->pc = 0x26f2d8u;
    // NOP
label_26f2dc:
    // 0x26f2dc: 0x0  nop
    ctx->pc = 0x26f2dcu;
    // NOP
label_26f2e0:
    // 0x26f2e0: 0x4ef2  tlt         $zero, $zero, 315
    ctx->pc = 0x26f2e0u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26f2e4:
    // 0x26f2e4: 0x54a0  .word       0x000054A0                   # add         $t2, $zero, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f2e4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
label_26f2e8:
    // 0x26f2e8: 0x0  nop
    ctx->pc = 0x26f2e8u;
    // NOP
label_26f2ec:
    // 0x26f2ec: 0x0  nop
    ctx->pc = 0x26f2ecu;
    // NOP
label_26f2f0:
    // 0x26f2f0: 0x4efd  .word       0x00004EFD                   # INVALID     $zero, $zero, 0x4EFD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f2f0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x26F2F0 raw=0x00004EFD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26f2f4:
    // 0x26f2f4: 0x3160  .word       0x00003160                   # add         $a2, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f2f4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 6, (int32_t)result);     } }
label_26f2f8:
    // 0x26f2f8: 0x0  nop
    ctx->pc = 0x26f2f8u;
    // NOP
label_26f2fc:
    // 0x26f2fc: 0x0  nop
    ctx->pc = 0x26f2fcu;
    // NOP
label_26f300:
    // 0x26f300: 0x4f04  .word       0x00004F04                   # sllv        $t1, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f300u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_26f304:
    // 0x26f304: 0x4e90  .word       0x00004E90                   # mfhi        $t1 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f304u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_26f308:
    // 0x26f308: 0x0  nop
    ctx->pc = 0x26f308u;
    // NOP
label_26f30c:
    // 0x26f30c: 0x0  nop
    ctx->pc = 0x26f30cu;
    // NOP
label_26f310:
    // 0x26f310: 0x4f0e  .word       0x00004F0E                   # INVALID     $zero, $zero, 0x4F0E # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f310u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x26F310 raw=0x00004F0E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26f314:
    // 0x26f314: 0x5020  add         $t2, $zero, $zero
    ctx->pc = 0x26f314u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
label_26f318:
    // 0x26f318: 0x0  nop
    ctx->pc = 0x26f318u;
    // NOP
label_26f31c:
    // 0x26f31c: 0x0  nop
    ctx->pc = 0x26f31cu;
    // NOP
label_26f320:
    // 0x26f320: 0x4f19  .word       0x00004F19                   # multu       $zero, $zero # 00004F00 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f320u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
label_26f324:
    // 0x26f324: 0x4750  .word       0x00004750                   # mfhi        $t0 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f324u;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_26f328:
    // 0x26f328: 0x0  nop
    ctx->pc = 0x26f328u;
    // NOP
label_26f32c:
    // 0x26f32c: 0x0  nop
    ctx->pc = 0x26f32cu;
    // NOP
label_26f330:
    // 0x26f330: 0x4f22  .word       0x00004F22                   # neg         $t1, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f330u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 9, (int32_t)tmp); }
label_26f334:
    // 0x26f334: 0x6020  add         $t4, $zero, $zero
    ctx->pc = 0x26f334u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_26f338:
    // 0x26f338: 0x0  nop
    ctx->pc = 0x26f338u;
    // NOP
label_26f33c:
    // 0x26f33c: 0x0  nop
    ctx->pc = 0x26f33cu;
    // NOP
label_26f340:
    // 0x26f340: 0x4f2f  .word       0x00004F2F                   # dsubu       $t1, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f340u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_26f344:
    // 0x26f344: 0x8020  add         $s0, $zero, $zero
    ctx->pc = 0x26f344u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_26f348:
    // 0x26f348: 0x0  nop
    ctx->pc = 0x26f348u;
    // NOP
label_26f34c:
    // 0x26f34c: 0x0  nop
    ctx->pc = 0x26f34cu;
    // NOP
label_26f350:
    // 0x26f350: 0x4f40  sll         $t1, $zero, 29
    ctx->pc = 0x26f350u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), 29));
label_26f354:
    // 0x26f354: 0x3f70  tge         $zero, $zero, 253
    ctx->pc = 0x26f354u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26f358:
    // 0x26f358: 0x0  nop
    ctx->pc = 0x26f358u;
    // NOP
label_26f35c:
    // 0x26f35c: 0x0  nop
    ctx->pc = 0x26f35cu;
    // NOP
label_26f360:
    // 0x26f360: 0x4f48  .word       0x00004F48                   # jr          $zero # 00004F40 <InstrIdType: CPU_SPECIAL>
label_26f364:
    if (ctx->pc == 0x26F364u) {
        ctx->pc = 0x26F364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F360u;
        // 0x26f364: 0x8f30  tge         $zero, $zero, 572 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x26F368u;
        goto label_26f368;
    }
    ctx->pc = 0x26F360u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x26F364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F360u;
        // 0x26f364: 0x8f30  tge         $zero, $zero, 572 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26F360u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x26F368u;
label_26f368:
    // 0x26f368: 0x0  nop
    ctx->pc = 0x26f368u;
    // NOP
label_26f36c:
    // 0x26f36c: 0x0  nop
    ctx->pc = 0x26f36cu;
    // NOP
label_26f370:
    // 0x26f370: 0x4f5a  .word       0x00004F5A                   # div         $t1, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f370u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_26f374:
    // 0x26f374: 0x4a20  .word       0x00004A20                   # add         $t1, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f374u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_26f378:
    // 0x26f378: 0x0  nop
    ctx->pc = 0x26f378u;
    // NOP
label_26f37c:
    // 0x26f37c: 0x0  nop
    ctx->pc = 0x26f37cu;
    // NOP
label_26f380:
    // 0x26f380: 0x4f64  .word       0x00004F64                   # and         $t1, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f380u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_26f384:
    // 0x26f384: 0x38d0  .word       0x000038D0                   # mfhi        $a3 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f384u;
    SET_GPR_U64(ctx, 7, ctx->hi);
label_26f388:
    // 0x26f388: 0x0  nop
    ctx->pc = 0x26f388u;
    // NOP
label_26f38c:
    // 0x26f38c: 0x0  nop
    ctx->pc = 0x26f38cu;
    // NOP
label_26f390:
    // 0x26f390: 0x4f6c  .word       0x00004F6C                   # dadd        $t1, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f390u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 9, r); }
label_26f394:
    // 0x26f394: 0x45e0  .word       0x000045E0                   # add         $t0, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f394u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
label_26f398:
    // 0x26f398: 0x0  nop
    ctx->pc = 0x26f398u;
    // NOP
label_26f39c:
    // 0x26f39c: 0x0  nop
    ctx->pc = 0x26f39cu;
    // NOP
label_26f3a0:
    // 0x26f3a0: 0x4f75  .word       0x00004F75                   # INVALID     $zero, $zero, 0x4F75 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f3a0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x26F3A0 raw=0x00004F75"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26f3a4:
    // 0x26f3a4: 0x3c30  tge         $zero, $zero, 240
    ctx->pc = 0x26f3a4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26f3a8:
    // 0x26f3a8: 0x0  nop
    ctx->pc = 0x26f3a8u;
    // NOP
label_26f3ac:
    // 0x26f3ac: 0x0  nop
    ctx->pc = 0x26f3acu;
    // NOP
label_26f3b0:
    // 0x26f3b0: 0x4f7d  .word       0x00004F7D                   # INVALID     $zero, $zero, 0x4F7D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f3b0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x26F3B0 raw=0x00004F7D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26f3b4:
    // 0x26f3b4: 0x45c0  sll         $t0, $zero, 23
    ctx->pc = 0x26f3b4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 23));
label_26f3b8:
    // 0x26f3b8: 0x0  nop
    ctx->pc = 0x26f3b8u;
    // NOP
label_26f3bc:
    // 0x26f3bc: 0x0  nop
    ctx->pc = 0x26f3bcu;
    // NOP
label_26f3c0:
    // 0x26f3c0: 0x4f86  .word       0x00004F86                   # srlv        $t1, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f3c0u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_26f3c4:
    // 0x26f3c4: 0x4550  .word       0x00004550                   # mfhi        $t0 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f3c4u;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_26f3c8:
    // 0x26f3c8: 0x0  nop
    ctx->pc = 0x26f3c8u;
    // NOP
label_26f3cc:
    // 0x26f3cc: 0x0  nop
    ctx->pc = 0x26f3ccu;
    // NOP
label_26f3d0:
    // 0x26f3d0: 0x4f8f  .word       0x00004F8F                   # sync.p # 00004800 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f3d0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_26f3d4:
    // 0x26f3d4: 0x3d90  .word       0x00003D90                   # mfhi        $a3 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f3d4u;
    SET_GPR_U64(ctx, 7, ctx->hi);
label_26f3d8:
    // 0x26f3d8: 0x0  nop
    ctx->pc = 0x26f3d8u;
    // NOP
label_26f3dc:
    // 0x26f3dc: 0x0  nop
    ctx->pc = 0x26f3dcu;
    // NOP
label_26f3e0:
    // 0x26f3e0: 0x4f97  .word       0x00004F97                   # dsrav       $t1, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f3e0u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_26f3e4:
    // 0x26f3e4: 0x4290  .word       0x00004290                   # mfhi        $t0 # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f3e4u;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_26f3e8:
    // 0x26f3e8: 0x0  nop
    ctx->pc = 0x26f3e8u;
    // NOP
label_26f3ec:
    // 0x26f3ec: 0x0  nop
    ctx->pc = 0x26f3ecu;
    // NOP
label_26f3f0:
    // 0x26f3f0: 0x4fa0  .word       0x00004FA0                   # add         $t1, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f3f0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_26f3f4:
    // 0x26f3f4: 0x5a20  .word       0x00005A20                   # add         $t3, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f3f4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_26f3f8:
    // 0x26f3f8: 0x0  nop
    ctx->pc = 0x26f3f8u;
    // NOP
label_26f3fc:
    // 0x26f3fc: 0x0  nop
    ctx->pc = 0x26f3fcu;
    // NOP
label_26f400:
    // 0x26f400: 0x4fac  .word       0x00004FAC                   # dadd        $t1, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f400u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 9, r); }
label_26f404:
    // 0x26f404: 0x3840  sll         $a3, $zero, 1
    ctx->pc = 0x26f404u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 0), 1));
label_26f408:
    // 0x26f408: 0x0  nop
    ctx->pc = 0x26f408u;
    // NOP
label_26f40c:
    // 0x26f40c: 0x0  nop
    ctx->pc = 0x26f40cu;
    // NOP
label_26f410:
    // 0x26f410: 0x4fb4  teq         $zero, $zero, 318
    ctx->pc = 0x26f410u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26f414:
    // 0x26f414: 0x50c0  sll         $t2, $zero, 3
    ctx->pc = 0x26f414u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 0), 3));
label_26f418:
    // 0x26f418: 0x0  nop
    ctx->pc = 0x26f418u;
    // NOP
label_26f41c:
    // 0x26f41c: 0x0  nop
    ctx->pc = 0x26f41cu;
    // NOP
label_26f420:
    // 0x26f420: 0x4fbf  dsra32      $t1, $zero, 30
    ctx->pc = 0x26f420u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 0) >> (32 + 30));
label_26f424:
    // 0x26f424: 0xc6c0  sll         $t8, $zero, 27
    ctx->pc = 0x26f424u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 0), 27));
label_26f428:
    // 0x26f428: 0x0  nop
    ctx->pc = 0x26f428u;
    // NOP
label_26f42c:
    // 0x26f42c: 0x0  nop
    ctx->pc = 0x26f42cu;
    // NOP
label_26f430:
    // 0x26f430: 0x4fd8  .word       0x00004FD8                   # mult        $t1, $zero, $zero # 000007C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x26f430u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
label_26f434:
    // 0x26f434: 0x4820  add         $t1, $zero, $zero
    ctx->pc = 0x26f434u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_26f438:
    // 0x26f438: 0x0  nop
    ctx->pc = 0x26f438u;
    // NOP
label_26f43c:
    // 0x26f43c: 0x0  nop
    ctx->pc = 0x26f43cu;
    // NOP
label_26f440:
    // 0x26f440: 0x4fe2  .word       0x00004FE2                   # neg         $t1, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f440u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 9, (int32_t)tmp); }
label_26f444:
    // 0x26f444: 0x3a10  .word       0x00003A10                   # mfhi        $a3 # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f444u;
    SET_GPR_U64(ctx, 7, ctx->hi);
label_26f448:
    // 0x26f448: 0x0  nop
    ctx->pc = 0x26f448u;
    // NOP
label_26f44c:
    // 0x26f44c: 0x0  nop
    ctx->pc = 0x26f44cu;
    // NOP
label_26f450:
    // 0x26f450: 0x4fea  .word       0x00004FEA                   # slt         $t1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f450u;
    SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_26f454:
    // 0x26f454: 0x49f0  tge         $zero, $zero, 295
    ctx->pc = 0x26f454u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26f458:
    // 0x26f458: 0x0  nop
    ctx->pc = 0x26f458u;
    // NOP
label_26f45c:
    // 0x26f45c: 0x0  nop
    ctx->pc = 0x26f45cu;
    // NOP
label_26f460:
    // 0x26f460: 0x4ff4  teq         $zero, $zero, 319
    ctx->pc = 0x26f460u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26f464:
    // 0x26f464: 0x3ba0  .word       0x00003BA0                   # add         $a3, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f464u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
label_26f468:
    // 0x26f468: 0x0  nop
    ctx->pc = 0x26f468u;
    // NOP
label_26f46c:
    // 0x26f46c: 0x0  nop
    ctx->pc = 0x26f46cu;
    // NOP
label_26f470:
    // 0x26f470: 0x4ffc  dsll32      $t1, $zero, 31
    ctx->pc = 0x26f470u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) << (32 + 31));
label_26f474:
    // 0x26f474: 0x3f50  .word       0x00003F50                   # mfhi        $a3 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f474u;
    SET_GPR_U64(ctx, 7, ctx->hi);
label_26f478:
    // 0x26f478: 0x0  nop
    ctx->pc = 0x26f478u;
    // NOP
label_26f47c:
    // 0x26f47c: 0x0  nop
    ctx->pc = 0x26f47cu;
    // NOP
label_26f480:
    // 0x26f480: 0x5004  sllv        $t2, $zero, $zero
    ctx->pc = 0x26f480u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_26f484:
    // 0x26f484: 0x4ba0  .word       0x00004BA0                   # add         $t1, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f484u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_26f488:
    // 0x26f488: 0x0  nop
    ctx->pc = 0x26f488u;
    // NOP
label_26f48c:
    // 0x26f48c: 0x0  nop
    ctx->pc = 0x26f48cu;
    // NOP
label_26f490:
    // 0x26f490: 0x500e  .word       0x0000500E                   # INVALID     $zero, $zero, 0x500E # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f490u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x26F490 raw=0x0000500E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26f494:
    // 0x26f494: 0x39e0  .word       0x000039E0                   # add         $a3, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f494u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
label_26f498:
    // 0x26f498: 0x0  nop
    ctx->pc = 0x26f498u;
    // NOP
label_26f49c:
    // 0x26f49c: 0x0  nop
    ctx->pc = 0x26f49cu;
    // NOP
label_26f4a0:
    // 0x26f4a0: 0x5016  dsrlv       $t2, $zero, $zero
    ctx->pc = 0x26f4a0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_26f4a4:
    // 0x26f4a4: 0x4230  tge         $zero, $zero, 264
    ctx->pc = 0x26f4a4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26f4a8:
    // 0x26f4a8: 0x0  nop
    ctx->pc = 0x26f4a8u;
    // NOP
label_26f4ac:
    // 0x26f4ac: 0x0  nop
    ctx->pc = 0x26f4acu;
    // NOP
label_26f4b0:
    // 0x26f4b0: 0x501f  ddivu       $t2, $zero, $zero
    ctx->pc = 0x26f4b0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x26F4B0 raw=0x0000501F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26f4b4:
    // 0x26f4b4: 0x49c0  sll         $t1, $zero, 7
    ctx->pc = 0x26f4b4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), 7));
label_26f4b8:
    // 0x26f4b8: 0x0  nop
    ctx->pc = 0x26f4b8u;
    // NOP
label_26f4bc:
    // 0x26f4bc: 0x0  nop
    ctx->pc = 0x26f4bcu;
    // NOP
label_26f4c0:
    // 0x26f4c0: 0x5029  .word       0x00005029                   # mtsa        $zero # 00005000 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x26f4c0u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_26f4c4:
    // 0x26f4c4: 0x8020  add         $s0, $zero, $zero
    ctx->pc = 0x26f4c4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_26f4c8:
    // 0x26f4c8: 0x0  nop
    ctx->pc = 0x26f4c8u;
    // NOP
label_26f4cc:
    // 0x26f4cc: 0x0  nop
    ctx->pc = 0x26f4ccu;
    // NOP
label_26f4d0:
    // 0x26f4d0: 0x503a  dsrl        $t2, $zero, 0
    ctx->pc = 0x26f4d0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) >> 0);
label_26f4d4:
    // 0x26f4d4: 0x8020  add         $s0, $zero, $zero
    ctx->pc = 0x26f4d4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_26f4d8:
    // 0x26f4d8: 0x0  nop
    ctx->pc = 0x26f4d8u;
    // NOP
label_26f4dc:
    // 0x26f4dc: 0x0  nop
    ctx->pc = 0x26f4dcu;
    // NOP
label_26f4e0:
    // 0x26f4e0: 0x504b  .word       0x0000504B                   # movn        $t2, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f4e0u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 10, GPR_VEC(ctx, 0));
label_26f4e4:
    // 0x26f4e4: 0x5370  tge         $zero, $zero, 333
    ctx->pc = 0x26f4e4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26f4e8:
    // 0x26f4e8: 0x0  nop
    ctx->pc = 0x26f4e8u;
    // NOP
label_26f4ec:
    // 0x26f4ec: 0x0  nop
    ctx->pc = 0x26f4ecu;
    // NOP
label_26f4f0:
    // 0x26f4f0: 0x5056  .word       0x00005056                   # dsrlv       $t2, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f4f0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_26f4f4:
    // 0x26f4f4: 0x5150  .word       0x00005150                   # mfhi        $t2 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f4f4u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_26f4f8:
    // 0x26f4f8: 0x0  nop
    ctx->pc = 0x26f4f8u;
    // NOP
label_26f4fc:
    // 0x26f4fc: 0x0  nop
    ctx->pc = 0x26f4fcu;
    // NOP
label_26f500:
    // 0x26f500: 0x5061  .word       0x00005061                   # addu        $t2, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f500u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_26f504:
    // 0x26f504: 0x3ac0  sll         $a3, $zero, 11
    ctx->pc = 0x26f504u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 0), 11));
label_26f508:
    // 0x26f508: 0x0  nop
    ctx->pc = 0x26f508u;
    // NOP
label_26f50c:
    // 0x26f50c: 0x0  nop
    ctx->pc = 0x26f50cu;
    // NOP
label_26f510:
    // 0x26f510: 0x5069  .word       0x00005069                   # mtsa        $zero # 00005040 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x26f510u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_26f514:
    // 0x26f514: 0x6150  .word       0x00006150                   # mfhi        $t4 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f514u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_26f518:
    // 0x26f518: 0x0  nop
    ctx->pc = 0x26f518u;
    // NOP
label_26f51c:
    // 0x26f51c: 0x0  nop
    ctx->pc = 0x26f51cu;
    // NOP
label_26f520:
    // 0x26f520: 0x5076  tne         $zero, $zero, 321
    ctx->pc = 0x26f520u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26f524:
    // 0x26f524: 0x4ed0  .word       0x00004ED0                   # mfhi        $t1 # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f524u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_26f528:
    // 0x26f528: 0x0  nop
    ctx->pc = 0x26f528u;
    // NOP
label_26f52c:
    // 0x26f52c: 0x0  nop
    ctx->pc = 0x26f52cu;
    // NOP
label_26f530:
    // 0x26f530: 0x5080  sll         $t2, $zero, 2
    ctx->pc = 0x26f530u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 0), 2));
label_26f534:
    // 0x26f534: 0x3490  .word       0x00003490                   # mfhi        $a2 # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f534u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_26f538:
    // 0x26f538: 0x0  nop
    ctx->pc = 0x26f538u;
    // NOP
label_26f53c:
    // 0x26f53c: 0x0  nop
    ctx->pc = 0x26f53cu;
    // NOP
label_26f540:
    // 0x26f540: 0x5087  .word       0x00005087                   # srav        $t2, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f540u;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_26f544:
    // 0x26f544: 0x37e0  .word       0x000037E0                   # add         $a2, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f544u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 6, (int32_t)result);     } }
label_26f548:
    // 0x26f548: 0x0  nop
    ctx->pc = 0x26f548u;
    // NOP
label_26f54c:
    // 0x26f54c: 0x0  nop
    ctx->pc = 0x26f54cu;
    // NOP
label_26f550:
    // 0x26f550: 0x508e  .word       0x0000508E                   # INVALID     $zero, $zero, 0x508E # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f550u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x26F550 raw=0x0000508E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26f554:
    // 0x26f554: 0x4100  sll         $t0, $zero, 4
    ctx->pc = 0x26f554u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 4));
label_26f558:
    // 0x26f558: 0x0  nop
    ctx->pc = 0x26f558u;
    // NOP
label_26f55c:
    // 0x26f55c: 0x0  nop
    ctx->pc = 0x26f55cu;
    // NOP
label_26f560:
    // 0x26f560: 0x5097  .word       0x00005097                   # dsrav       $t2, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f560u;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_26f564:
    // 0x26f564: 0x6e30  tge         $zero, $zero, 440
    ctx->pc = 0x26f564u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26f568:
    // 0x26f568: 0x0  nop
    ctx->pc = 0x26f568u;
    // NOP
label_26f56c:
    // 0x26f56c: 0x0  nop
    ctx->pc = 0x26f56cu;
    // NOP
label_26f570:
    // 0x26f570: 0x50a5  .word       0x000050A5                   # move        $t2, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f570u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_26f574:
    // 0x26f574: 0x4840  sll         $t1, $zero, 1
    ctx->pc = 0x26f574u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), 1));
label_26f578:
    // 0x26f578: 0x0  nop
    ctx->pc = 0x26f578u;
    // NOP
label_26f57c:
    // 0x26f57c: 0x0  nop
    ctx->pc = 0x26f57cu;
    // NOP
label_26f580:
    // 0x26f580: 0x50af  .word       0x000050AF                   # dsubu       $t2, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f580u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_26f584:
    // 0x26f584: 0x72c0  sll         $t6, $zero, 11
    ctx->pc = 0x26f584u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 0), 11));
label_26f588:
    // 0x26f588: 0x0  nop
    ctx->pc = 0x26f588u;
    // NOP
label_26f58c:
    // 0x26f58c: 0x0  nop
    ctx->pc = 0x26f58cu;
    // NOP
label_26f590:
    // 0x26f590: 0x50be  dsrl32      $t2, $zero, 2
    ctx->pc = 0x26f590u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) >> (32 + 2));
label_26f594:
    // 0x26f594: 0x3a30  tge         $zero, $zero, 232
    ctx->pc = 0x26f594u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26f598:
    // 0x26f598: 0x0  nop
    ctx->pc = 0x26f598u;
    // NOP
label_26f59c:
    // 0x26f59c: 0x0  nop
    ctx->pc = 0x26f59cu;
    // NOP
label_26f5a0:
    // 0x26f5a0: 0x50c6  .word       0x000050C6                   # srlv        $t2, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f5a0u;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_26f5a4:
    // 0x26f5a4: 0x49e0  .word       0x000049E0                   # add         $t1, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f5a4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_26f5a8:
    // 0x26f5a8: 0x0  nop
    ctx->pc = 0x26f5a8u;
    // NOP
label_26f5ac:
    // 0x26f5ac: 0x0  nop
    ctx->pc = 0x26f5acu;
    // NOP
label_26f5b0:
    // 0x26f5b0: 0x50d0  .word       0x000050D0                   # mfhi        $t2 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f5b0u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_26f5b4:
    // 0x26f5b4: 0x3db0  tge         $zero, $zero, 246
    ctx->pc = 0x26f5b4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26f5b8:
    // 0x26f5b8: 0x0  nop
    ctx->pc = 0x26f5b8u;
    // NOP
label_26f5bc:
    // 0x26f5bc: 0x0  nop
    ctx->pc = 0x26f5bcu;
    // NOP
label_26f5c0:
    // 0x26f5c0: 0x50d8  .word       0x000050D8                   # mult        $t2, $zero, $zero # 000000C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x26f5c0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
label_26f5c4:
    // 0x26f5c4: 0x3ff0  tge         $zero, $zero, 255
    ctx->pc = 0x26f5c4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26f5c8:
    // 0x26f5c8: 0x0  nop
    ctx->pc = 0x26f5c8u;
    // NOP
label_26f5cc:
    // 0x26f5cc: 0x0  nop
    ctx->pc = 0x26f5ccu;
    // NOP
label_26f5d0:
    // 0x26f5d0: 0x50e0  .word       0x000050E0                   # add         $t2, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f5d0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
label_26f5d4:
    // 0x26f5d4: 0x8020  add         $s0, $zero, $zero
    ctx->pc = 0x26f5d4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_26f5d8:
    // 0x26f5d8: 0x0  nop
    ctx->pc = 0x26f5d8u;
    // NOP
label_26f5dc:
    // 0x26f5dc: 0x0  nop
    ctx->pc = 0x26f5dcu;
    // NOP
label_26f5e0:
    // 0x26f5e0: 0x50f1  tgeu        $zero, $zero, 323
    ctx->pc = 0x26f5e0u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26f5e4:
    // 0x26f5e4: 0x4190  .word       0x00004190                   # mfhi        $t0 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f5e4u;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_26f5e8:
    // 0x26f5e8: 0x0  nop
    ctx->pc = 0x26f5e8u;
    // NOP
label_26f5ec:
    // 0x26f5ec: 0x0  nop
    ctx->pc = 0x26f5ecu;
    // NOP
label_26f5f0:
    // 0x26f5f0: 0x50fa  dsrl        $t2, $zero, 3
    ctx->pc = 0x26f5f0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) >> 3);
label_26f5f4:
    // 0x26f5f4: 0x8460  .word       0x00008460                   # add         $s0, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f5f4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_26f5f8:
    // 0x26f5f8: 0x0  nop
    ctx->pc = 0x26f5f8u;
    // NOP
label_26f5fc:
    // 0x26f5fc: 0x0  nop
    ctx->pc = 0x26f5fcu;
    // NOP
label_26f600:
    // 0x26f600: 0x510b  .word       0x0000510B                   # movn        $t2, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f600u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 10, GPR_VEC(ctx, 0));
label_26f604:
    // 0x26f604: 0x48c0  sll         $t1, $zero, 3
    ctx->pc = 0x26f604u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), 3));
label_26f608:
    // 0x26f608: 0x0  nop
    ctx->pc = 0x26f608u;
    // NOP
label_26f60c:
    // 0x26f60c: 0x0  nop
    ctx->pc = 0x26f60cu;
    // NOP
label_26f610:
    // 0x26f610: 0x5115  .word       0x00005115                   # INVALID     $zero, $zero, 0x5115 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f610u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x26F610 raw=0x00005115"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26f614:
    // 0x26f614: 0x4120  .word       0x00004120                   # add         $t0, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f614u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
label_26f618:
    // 0x26f618: 0x0  nop
    ctx->pc = 0x26f618u;
    // NOP
label_26f61c:
    // 0x26f61c: 0x0  nop
    ctx->pc = 0x26f61cu;
    // NOP
label_26f620:
    // 0x26f620: 0x511e  .word       0x0000511E                   # ddiv        $t2, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f620u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x26F620 raw=0x0000511E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26f624:
    // 0x26f624: 0x2f60  .word       0x00002F60                   # add         $a1, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f624u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 5, (int32_t)result);     } }
label_26f628:
    // 0x26f628: 0x0  nop
    ctx->pc = 0x26f628u;
    // NOP
label_26f62c:
    // 0x26f62c: 0x0  nop
    ctx->pc = 0x26f62cu;
    // NOP
label_26f630:
    // 0x26f630: 0x5124  .word       0x00005124                   # and         $t2, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f630u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_26f634:
    // 0x26f634: 0x35b0  tge         $zero, $zero, 214
    ctx->pc = 0x26f634u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26f638:
    // 0x26f638: 0x0  nop
    ctx->pc = 0x26f638u;
    // NOP
label_26f63c:
    // 0x26f63c: 0x0  nop
    ctx->pc = 0x26f63cu;
    // NOP
label_26f640:
    // 0x26f640: 0x512b  .word       0x0000512B                   # sltu        $t2, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f640u;
    SET_GPR_U64(ctx, 10, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_26f644:
    // 0x26f644: 0x3840  sll         $a3, $zero, 1
    ctx->pc = 0x26f644u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 0), 1));
label_26f648:
    // 0x26f648: 0x0  nop
    ctx->pc = 0x26f648u;
    // NOP
label_26f64c:
    // 0x26f64c: 0x0  nop
    ctx->pc = 0x26f64cu;
    // NOP
label_26f650:
    // 0x26f650: 0x5133  tltu        $zero, $zero, 324
    ctx->pc = 0x26f650u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26f654:
    // 0x26f654: 0x41a0  .word       0x000041A0                   # add         $t0, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f654u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
label_26f658:
    // 0x26f658: 0x0  nop
    ctx->pc = 0x26f658u;
    // NOP
label_26f65c:
    // 0x26f65c: 0x0  nop
    ctx->pc = 0x26f65cu;
    // NOP
label_26f660:
    // 0x26f660: 0x513c  dsll32      $t2, $zero, 4
    ctx->pc = 0x26f660u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) << (32 + 4));
label_26f664:
    // 0x26f664: 0x1990  .word       0x00001990                   # mfhi        $v1 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f664u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_26f668:
    // 0x26f668: 0x0  nop
    ctx->pc = 0x26f668u;
    // NOP
label_26f66c:
    // 0x26f66c: 0x0  nop
    ctx->pc = 0x26f66cu;
    // NOP
label_26f670:
    // 0x26f670: 0x5140  sll         $t2, $zero, 5
    ctx->pc = 0x26f670u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 0), 5));
label_26f674:
    // 0x26f674: 0x1480  sll         $v0, $zero, 18
    ctx->pc = 0x26f674u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 0), 18));
label_26f678:
    // 0x26f678: 0x0  nop
    ctx->pc = 0x26f678u;
    // NOP
label_26f67c:
    // 0x26f67c: 0x0  nop
    ctx->pc = 0x26f67cu;
    // NOP
label_26f680:
    // 0x26f680: 0x5143  sra         $t2, $zero, 5
    ctx->pc = 0x26f680u;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 0), 5));
label_26f684:
    // 0x26f684: 0x22e0  .word       0x000022E0                   # add         $a0, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f684u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 4, (int32_t)result);     } }
label_26f688:
    // 0x26f688: 0x0  nop
    ctx->pc = 0x26f688u;
    // NOP
label_26f68c:
    // 0x26f68c: 0x0  nop
    ctx->pc = 0x26f68cu;
    // NOP
label_26f690:
    // 0x26f690: 0x5148  .word       0x00005148                   # jr          $zero # 00005140 <InstrIdType: CPU_SPECIAL>
label_26f694:
    if (ctx->pc == 0x26F694u) {
        ctx->pc = 0x26F694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F690u;
        // 0x26f694: 0xd80  sll         $at, $zero, 22 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26F698u;
        goto label_26f698;
    }
    ctx->pc = 0x26F690u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x26F694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F690u;
        // 0x26f694: 0xd80  sll         $at, $zero, 22 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26F690u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x26F698u;
label_26f698:
    // 0x26f698: 0x0  nop
    ctx->pc = 0x26f698u;
    // NOP
label_26f69c:
    // 0x26f69c: 0x0  nop
    ctx->pc = 0x26f69cu;
    // NOP
label_26f6a0:
    // 0x26f6a0: 0x514a  .word       0x0000514A                   # movz        $t2, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f6a0u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 10, GPR_VEC(ctx, 0));
label_26f6a4:
    // 0x26f6a4: 0x2b40  sll         $a1, $zero, 13
    ctx->pc = 0x26f6a4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 0), 13));
label_26f6a8:
    // 0x26f6a8: 0x0  nop
    ctx->pc = 0x26f6a8u;
    // NOP
label_26f6ac:
    // 0x26f6ac: 0x0  nop
    ctx->pc = 0x26f6acu;
    // NOP
label_26f6b0:
    // 0x26f6b0: 0x5150  .word       0x00005150                   # mfhi        $t2 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f6b0u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_26f6b4:
    // 0x26f6b4: 0x5410  .word       0x00005410                   # mfhi        $t2 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f6b4u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_26f6b8:
    // 0x26f6b8: 0x0  nop
    ctx->pc = 0x26f6b8u;
    // NOP
label_26f6bc:
    // 0x26f6bc: 0x0  nop
    ctx->pc = 0x26f6bcu;
    // NOP
label_26f6c0:
    // 0x26f6c0: 0x515b  .word       0x0000515B                   # divu        $t2, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f6c0u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_26f6c4:
    // 0x26f6c4: 0x1780  sll         $v0, $zero, 30
    ctx->pc = 0x26f6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 0), 30));
label_26f6c8:
    // 0x26f6c8: 0x0  nop
    ctx->pc = 0x26f6c8u;
    // NOP
label_26f6cc:
    // 0x26f6cc: 0x0  nop
    ctx->pc = 0x26f6ccu;
    // NOP
label_26f6d0:
    // 0x26f6d0: 0x515e  .word       0x0000515E                   # ddiv        $t2, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f6d0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x26F6D0 raw=0x0000515E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26f6d4:
    // 0x26f6d4: 0xe80  sll         $at, $zero, 26
    ctx->pc = 0x26f6d4u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 26));
label_26f6d8:
    // 0x26f6d8: 0x0  nop
    ctx->pc = 0x26f6d8u;
    // NOP
label_26f6dc:
    // 0x26f6dc: 0x0  nop
    ctx->pc = 0x26f6dcu;
    // NOP
label_26f6e0:
    // 0x26f6e0: 0x5160  .word       0x00005160                   # add         $t2, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26f6e0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
label_26f6e4:
    // 0x26f6e4: 0x10f0  tge         $zero, $zero, 67
    ctx->pc = 0x26f6e4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26f6e8:
    // 0x26f6e8: 0x0  nop
    ctx->pc = 0x26f6e8u;
    // NOP
label_26f6ec:
    // 0x26f6ec: 0x0  nop
    ctx->pc = 0x26f6ecu;
    // NOP
    ctx->pc = 0x26f6f0u;
    return;
}
