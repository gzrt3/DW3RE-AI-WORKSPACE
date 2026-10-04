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


void FUN_0019b5e8_part336(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x23ef18u: goto label_23ef18;
        case 0x23ef1cu: goto label_23ef1c;
        case 0x23ef20u: goto label_23ef20;
        case 0x23ef24u: goto label_23ef24;
        case 0x23ef28u: goto label_23ef28;
        case 0x23ef2cu: goto label_23ef2c;
        case 0x23ef30u: goto label_23ef30;
        case 0x23ef34u: goto label_23ef34;
        case 0x23ef38u: goto label_23ef38;
        case 0x23ef3cu: goto label_23ef3c;
        case 0x23ef40u: goto label_23ef40;
        case 0x23ef44u: goto label_23ef44;
        case 0x23ef48u: goto label_23ef48;
        case 0x23ef4cu: goto label_23ef4c;
        case 0x23ef50u: goto label_23ef50;
        case 0x23ef54u: goto label_23ef54;
        case 0x23ef58u: goto label_23ef58;
        case 0x23ef5cu: goto label_23ef5c;
        case 0x23ef60u: goto label_23ef60;
        case 0x23ef64u: goto label_23ef64;
        case 0x23ef68u: goto label_23ef68;
        case 0x23ef6cu: goto label_23ef6c;
        case 0x23ef70u: goto label_23ef70;
        case 0x23ef74u: goto label_23ef74;
        case 0x23ef78u: goto label_23ef78;
        case 0x23ef7cu: goto label_23ef7c;
        case 0x23ef80u: goto label_23ef80;
        case 0x23ef84u: goto label_23ef84;
        case 0x23ef88u: goto label_23ef88;
        case 0x23ef8cu: goto label_23ef8c;
        case 0x23ef90u: goto label_23ef90;
        case 0x23ef94u: goto label_23ef94;
        case 0x23ef98u: goto label_23ef98;
        case 0x23ef9cu: goto label_23ef9c;
        case 0x23efa0u: goto label_23efa0;
        case 0x23efa4u: goto label_23efa4;
        case 0x23efa8u: goto label_23efa8;
        case 0x23efacu: goto label_23efac;
        case 0x23efb0u: goto label_23efb0;
        case 0x23efb4u: goto label_23efb4;
        case 0x23efb8u: goto label_23efb8;
        case 0x23efbcu: goto label_23efbc;
        case 0x23efc0u: goto label_23efc0;
        case 0x23efc4u: goto label_23efc4;
        case 0x23efc8u: goto label_23efc8;
        case 0x23efccu: goto label_23efcc;
        case 0x23efd0u: goto label_23efd0;
        case 0x23efd4u: goto label_23efd4;
        case 0x23efd8u: goto label_23efd8;
        case 0x23efdcu: goto label_23efdc;
        case 0x23efe0u: goto label_23efe0;
        case 0x23efe4u: goto label_23efe4;
        case 0x23efe8u: goto label_23efe8;
        case 0x23efecu: goto label_23efec;
        case 0x23eff0u: goto label_23eff0;
        case 0x23eff4u: goto label_23eff4;
        case 0x23eff8u: goto label_23eff8;
        case 0x23effcu: goto label_23effc;
        case 0x23f000u: goto label_23f000;
        case 0x23f004u: goto label_23f004;
        case 0x23f008u: goto label_23f008;
        case 0x23f00cu: goto label_23f00c;
        case 0x23f010u: goto label_23f010;
        case 0x23f014u: goto label_23f014;
        case 0x23f018u: goto label_23f018;
        case 0x23f01cu: goto label_23f01c;
        case 0x23f020u: goto label_23f020;
        case 0x23f024u: goto label_23f024;
        case 0x23f028u: goto label_23f028;
        case 0x23f02cu: goto label_23f02c;
        case 0x23f030u: goto label_23f030;
        case 0x23f034u: goto label_23f034;
        case 0x23f038u: goto label_23f038;
        case 0x23f03cu: goto label_23f03c;
        case 0x23f040u: goto label_23f040;
        case 0x23f044u: goto label_23f044;
        case 0x23f048u: goto label_23f048;
        case 0x23f04cu: goto label_23f04c;
        case 0x23f050u: goto label_23f050;
        case 0x23f054u: goto label_23f054;
        case 0x23f058u: goto label_23f058;
        case 0x23f05cu: goto label_23f05c;
        case 0x23f060u: goto label_23f060;
        case 0x23f064u: goto label_23f064;
        case 0x23f068u: goto label_23f068;
        case 0x23f06cu: goto label_23f06c;
        case 0x23f070u: goto label_23f070;
        case 0x23f074u: goto label_23f074;
        case 0x23f078u: goto label_23f078;
        case 0x23f07cu: goto label_23f07c;
        case 0x23f080u: goto label_23f080;
        case 0x23f084u: goto label_23f084;
        case 0x23f088u: goto label_23f088;
        case 0x23f08cu: goto label_23f08c;
        case 0x23f090u: goto label_23f090;
        case 0x23f094u: goto label_23f094;
        case 0x23f098u: goto label_23f098;
        case 0x23f09cu: goto label_23f09c;
        case 0x23f0a0u: goto label_23f0a0;
        case 0x23f0a4u: goto label_23f0a4;
        case 0x23f0a8u: goto label_23f0a8;
        case 0x23f0acu: goto label_23f0ac;
        case 0x23f0b0u: goto label_23f0b0;
        case 0x23f0b4u: goto label_23f0b4;
        case 0x23f0b8u: goto label_23f0b8;
        case 0x23f0bcu: goto label_23f0bc;
        case 0x23f0c0u: goto label_23f0c0;
        case 0x23f0c4u: goto label_23f0c4;
        case 0x23f0c8u: goto label_23f0c8;
        case 0x23f0ccu: goto label_23f0cc;
        case 0x23f0d0u: goto label_23f0d0;
        case 0x23f0d4u: goto label_23f0d4;
        case 0x23f0d8u: goto label_23f0d8;
        case 0x23f0dcu: goto label_23f0dc;
        case 0x23f0e0u: goto label_23f0e0;
        case 0x23f0e4u: goto label_23f0e4;
        case 0x23f0e8u: goto label_23f0e8;
        case 0x23f0ecu: goto label_23f0ec;
        case 0x23f0f0u: goto label_23f0f0;
        case 0x23f0f4u: goto label_23f0f4;
        case 0x23f0f8u: goto label_23f0f8;
        case 0x23f0fcu: goto label_23f0fc;
        case 0x23f100u: goto label_23f100;
        case 0x23f104u: goto label_23f104;
        case 0x23f108u: goto label_23f108;
        case 0x23f10cu: goto label_23f10c;
        case 0x23f110u: goto label_23f110;
        case 0x23f114u: goto label_23f114;
        case 0x23f118u: goto label_23f118;
        case 0x23f11cu: goto label_23f11c;
        case 0x23f120u: goto label_23f120;
        case 0x23f124u: goto label_23f124;
        case 0x23f128u: goto label_23f128;
        case 0x23f12cu: goto label_23f12c;
        case 0x23f130u: goto label_23f130;
        case 0x23f134u: goto label_23f134;
        case 0x23f138u: goto label_23f138;
        case 0x23f13cu: goto label_23f13c;
        case 0x23f140u: goto label_23f140;
        case 0x23f144u: goto label_23f144;
        case 0x23f148u: goto label_23f148;
        case 0x23f14cu: goto label_23f14c;
        case 0x23f150u: goto label_23f150;
        case 0x23f154u: goto label_23f154;
        case 0x23f158u: goto label_23f158;
        case 0x23f15cu: goto label_23f15c;
        case 0x23f160u: goto label_23f160;
        case 0x23f164u: goto label_23f164;
        case 0x23f168u: goto label_23f168;
        case 0x23f16cu: goto label_23f16c;
        case 0x23f170u: goto label_23f170;
        case 0x23f174u: goto label_23f174;
        case 0x23f178u: goto label_23f178;
        case 0x23f17cu: goto label_23f17c;
        case 0x23f180u: goto label_23f180;
        case 0x23f184u: goto label_23f184;
        case 0x23f188u: goto label_23f188;
        case 0x23f18cu: goto label_23f18c;
        case 0x23f190u: goto label_23f190;
        case 0x23f194u: goto label_23f194;
        case 0x23f198u: goto label_23f198;
        case 0x23f19cu: goto label_23f19c;
        case 0x23f1a0u: goto label_23f1a0;
        case 0x23f1a4u: goto label_23f1a4;
        case 0x23f1a8u: goto label_23f1a8;
        case 0x23f1acu: goto label_23f1ac;
        case 0x23f1b0u: goto label_23f1b0;
        case 0x23f1b4u: goto label_23f1b4;
        case 0x23f1b8u: goto label_23f1b8;
        case 0x23f1bcu: goto label_23f1bc;
        case 0x23f1c0u: goto label_23f1c0;
        case 0x23f1c4u: goto label_23f1c4;
        case 0x23f1c8u: goto label_23f1c8;
        case 0x23f1ccu: goto label_23f1cc;
        case 0x23f1d0u: goto label_23f1d0;
        case 0x23f1d4u: goto label_23f1d4;
        case 0x23f1d8u: goto label_23f1d8;
        case 0x23f1dcu: goto label_23f1dc;
        case 0x23f1e0u: goto label_23f1e0;
        case 0x23f1e4u: goto label_23f1e4;
        case 0x23f1e8u: goto label_23f1e8;
        case 0x23f1ecu: goto label_23f1ec;
        case 0x23f1f0u: goto label_23f1f0;
        case 0x23f1f4u: goto label_23f1f4;
        case 0x23f1f8u: goto label_23f1f8;
        case 0x23f1fcu: goto label_23f1fc;
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
        default: return;
    }

label_23ef18:
    // 0x23ef18: 0x10000002  b           . + 4 + (0x2 << 2)
label_23ef1c:
    if (ctx->pc == 0x23EF1Cu) {
        ctx->pc = 0x23EF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EF18u;
        // 0x23ef1c: 0xae700004  sw          $s0, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EF20u;
        goto label_23ef20;
    }
    ctx->pc = 0x23EF18u;
    {
        const bool branch_taken_0x23ef18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23EF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EF18u;
        // 0x23ef1c: 0xae700004  sw          $s0, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ef18) {
            ctx->pc = 0x23EF24u;
            goto label_23ef24;
        }
    }
    ctx->pc = 0x23EF20u;
label_23ef20:
    // 0x23ef20: 0xae700004  sw          $s0, 0x4($s3)
    ctx->pc = 0x23ef20u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 16));
label_23ef24:
    // 0x23ef24: 0x24e2e4d0  addiu       $v0, $a3, -0x1B30
    ctx->pc = 0x23ef24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294960336));
label_23ef28:
    // 0x23ef28: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x23ef28u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_23ef2c:
    // 0x23ef2c: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x23ef2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_23ef30:
    // 0x23ef30: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x23ef30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_23ef34:
    // 0x23ef34: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x23ef34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_23ef38:
    // 0x23ef38: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x23ef38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_23ef3c:
    // 0x23ef3c: 0x28640008  slti        $a0, $v1, 0x8
    ctx->pc = 0x23ef3cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
label_23ef40:
    // 0x23ef40: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x23ef40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
label_23ef44:
    // 0x23ef44: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
label_23ef48:
    if (ctx->pc == 0x23EF48u) {
        ctx->pc = 0x23EF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EF44u;
        // 0x23ef48: 0xafa30014  sw          $v1, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EF4Cu;
        goto label_23ef4c;
    }
    ctx->pc = 0x23EF44u;
    {
        const bool branch_taken_0x23ef44 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x23EF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EF44u;
        // 0x23ef48: 0xafa30014  sw          $v1, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ef44) {
            ctx->pc = 0x23EF60u;
            goto label_23ef60;
        }
    }
    ctx->pc = 0x23EF4Cu;
label_23ef4c:
    // 0x23ef4c: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x23ef4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
label_23ef50:
    // 0x23ef50: 0xc08f610  jal         func_23D840
label_23ef54:
    if (ctx->pc == 0x23EF54u) {
        ctx->pc = 0x23EF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EF50u;
        // 0x23ef54: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EF58u;
        goto label_23ef58;
    }
    ctx->pc = 0x23EF50u;
    SET_GPR_U32(ctx, 31, 0x23EF58u);
    ctx->pc = 0x23EF54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23EF50u;
    // 0x23ef54: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D840u;
    { ctx->pc = 0x23d840; return; }
    ctx->pc = 0x23EF58u;
label_23ef58:
    // 0x23ef58: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
label_23ef5c:
    if (ctx->pc == 0x23EF5Cu) {
        ctx->pc = 0x23EF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EF58u;
        // 0x23ef5c: 0x8fa201e8  lw          $v0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EF60u;
        goto label_23ef60;
    }
    ctx->pc = 0x23EF58u;
    {
        const bool branch_taken_0x23ef58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23EF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EF58u;
        // 0x23ef5c: 0x8fa201e8  lw          $v0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ef58) {
            ctx->pc = 0x23EFD4u;
            goto label_23efd4;
        }
    }
    ctx->pc = 0x23EF60u;
label_23ef60:
    // 0x23ef60: 0x8fa60208  lw          $a2, 0x208($sp)
    ctx->pc = 0x23ef60u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 520)));
label_23ef64:
    // 0x23ef64: 0x8fa301f0  lw          $v1, 0x1F0($sp)
    ctx->pc = 0x23ef64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_23ef68:
    // 0x23ef68: 0x8fa401f0  lw          $a0, 0x1F0($sp)
    ctx->pc = 0x23ef68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_23ef6c:
    // 0x23ef6c: 0xc3102a  slt         $v0, $a2, $v1
    ctx->pc = 0x23ef6cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_23ef70:
    // 0x23ef70: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x23ef70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_23ef74:
    // 0x23ef74: 0x8fa501ec  lw          $a1, 0x1EC($sp)
    ctx->pc = 0x23ef74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
label_23ef78:
    // 0x23ef78: 0xc2200a  movz        $a0, $a2, $v0
    ctx->pc = 0x23ef78u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 6));
label_23ef7c:
    // 0x23ef7c: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x23ef7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_23ef80:
    // 0x23ef80: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_23ef84:
    if (ctx->pc == 0x23EF84u) {
        ctx->pc = 0x23EF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EF80u;
        // 0x23ef84: 0xafa501ec  sw          $a1, 0x1EC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 492), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EF88u;
        goto label_23ef88;
    }
    ctx->pc = 0x23EF80u;
    {
        const bool branch_taken_0x23ef80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x23EF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EF80u;
        // 0x23ef84: 0xafa501ec  sw          $a1, 0x1EC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 492), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ef80) {
            ctx->pc = 0x23EF9Cu;
            goto label_23ef9c;
        }
    }
    ctx->pc = 0x23EF88u;
label_23ef88:
    // 0x23ef88: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x23ef88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
label_23ef8c:
    // 0x23ef8c: 0xc08f610  jal         func_23D840
label_23ef90:
    if (ctx->pc == 0x23EF90u) {
        ctx->pc = 0x23EF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EF8Cu;
        // 0x23ef90: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EF94u;
        goto label_23ef94;
    }
    ctx->pc = 0x23EF8Cu;
    SET_GPR_U32(ctx, 31, 0x23EF94u);
    ctx->pc = 0x23EF90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23EF8Cu;
    // 0x23ef90: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D840u;
    { ctx->pc = 0x23d840; return; }
    ctx->pc = 0x23EF94u;
label_23ef94:
    // 0x23ef94: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
label_23ef98:
    if (ctx->pc == 0x23EF98u) {
        ctx->pc = 0x23EF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EF94u;
        // 0x23ef98: 0x8fa201e8  lw          $v0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EF9Cu;
        goto label_23ef9c;
    }
    ctx->pc = 0x23EF94u;
    {
        const bool branch_taken_0x23ef94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23EF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EF94u;
        // 0x23ef98: 0x8fa201e8  lw          $v0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ef94) {
            ctx->pc = 0x23EFD4u;
            goto label_23efd4;
        }
    }
    ctx->pc = 0x23EF9Cu;
label_23ef9c:
    // 0x23ef9c: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x23ef9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_23efa0:
    // 0x23efa0: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x23efa0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
label_23efa4:
    // 0x23efa4: 0x1000fab8  b           . + 4 + (-0x548 << 2)
label_23efa8:
    if (ctx->pc == 0x23EFA8u) {
        ctx->pc = 0x23EFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EFA4u;
        // 0x23efa8: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EFACu;
        goto label_23efac;
    }
    ctx->pc = 0x23EFA4u;
    {
        const bool branch_taken_0x23efa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23EFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EFA4u;
        // 0x23efa8: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23efa4) {
            ctx->pc = 0x23DA88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x23da88; return; }
        }
    }
    ctx->pc = 0x23EFACu;
label_23efac:
    // 0x23efac: 0x0  nop
    ctx->pc = 0x23efacu;
    // NOP
label_23efb0:
    // 0x23efb0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x23efb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_23efb4:
    // 0x23efb4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_23efb8:
    if (ctx->pc == 0x23EFB8u) {
        ctx->pc = 0x23EFB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EFB4u;
        // 0x23efb8: 0x8fa401e8  lw          $a0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EFBCu;
        goto label_23efbc;
    }
    ctx->pc = 0x23EFB4u;
    {
        const bool branch_taken_0x23efb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23EFB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EFB4u;
        // 0x23efb8: 0x8fa401e8  lw          $a0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23efb4) {
            ctx->pc = 0x23EFCCu;
            goto label_23efcc;
        }
    }
    ctx->pc = 0x23EFBCu;
label_23efbc:
    // 0x23efbc: 0xc08f610  jal         func_23D840
label_23efc0:
    if (ctx->pc == 0x23EFC0u) {
        ctx->pc = 0x23EFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EFBCu;
        // 0x23efc0: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EFC4u;
        goto label_23efc4;
    }
    ctx->pc = 0x23EFBCu;
    SET_GPR_U32(ctx, 31, 0x23EFC4u);
    ctx->pc = 0x23EFC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23EFBCu;
    // 0x23efc0: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D840u;
    { ctx->pc = 0x23d840; return; }
    ctx->pc = 0x23EFC4u;
label_23efc4:
    // 0x23efc4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_23efc8:
    if (ctx->pc == 0x23EFC8u) {
        ctx->pc = 0x23EFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EFC4u;
        // 0x23efc8: 0x8fa201e8  lw          $v0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23EFCCu;
        goto label_23efcc;
    }
    ctx->pc = 0x23EFC4u;
    {
        const bool branch_taken_0x23efc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23EFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EFC4u;
        // 0x23efc8: 0x8fa201e8  lw          $v0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23efc4) {
            ctx->pc = 0x23EFD4u;
            goto label_23efd4;
        }
    }
    ctx->pc = 0x23EFCCu;
label_23efcc:
    // 0x23efcc: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x23efccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
label_23efd0:
    // 0x23efd0: 0x8fa201e8  lw          $v0, 0x1E8($sp)
    ctx->pc = 0x23efd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
label_23efd4:
    // 0x23efd4: 0x8fa401ec  lw          $a0, 0x1EC($sp)
    ctx->pc = 0x23efd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
label_23efd8:
    // 0x23efd8: 0x9443000c  lhu         $v1, 0xC($v0)
    ctx->pc = 0x23efd8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 12)));
label_23efdc:
    // 0x23efdc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x23efdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_23efe0:
    // 0x23efe0: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x23efe0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
label_23efe4:
    // 0x23efe4: 0x83100a  movz        $v0, $a0, $v1
    ctx->pc = 0x23efe4u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
label_23efe8:
    // 0x23efe8: 0xdfb00240  ld          $s0, 0x240($sp)
    ctx->pc = 0x23efe8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 576)));
label_23efec:
    // 0x23efec: 0xdfb10248  ld          $s1, 0x248($sp)
    ctx->pc = 0x23efecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 584)));
label_23eff0:
    // 0x23eff0: 0xdfb20250  ld          $s2, 0x250($sp)
    ctx->pc = 0x23eff0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 592)));
label_23eff4:
    // 0x23eff4: 0xdfb30258  ld          $s3, 0x258($sp)
    ctx->pc = 0x23eff4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 600)));
label_23eff8:
    // 0x23eff8: 0xdfb40260  ld          $s4, 0x260($sp)
    ctx->pc = 0x23eff8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 608)));
label_23effc:
    // 0x23effc: 0xdfb50268  ld          $s5, 0x268($sp)
    ctx->pc = 0x23effcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 616)));
label_23f000:
    // 0x23f000: 0xdfb60270  ld          $s6, 0x270($sp)
    ctx->pc = 0x23f000u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 624)));
label_23f004:
    // 0x23f004: 0xdfb70278  ld          $s7, 0x278($sp)
    ctx->pc = 0x23f004u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 632)));
label_23f008:
    // 0x23f008: 0xdfbe0280  ld          $fp, 0x280($sp)
    ctx->pc = 0x23f008u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 640)));
label_23f00c:
    // 0x23f00c: 0xdfbf0288  ld          $ra, 0x288($sp)
    ctx->pc = 0x23f00cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 648)));
label_23f010:
    // 0x23f010: 0x3e00008  jr          $ra
label_23f014:
    if (ctx->pc == 0x23F014u) {
        ctx->pc = 0x23F014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F010u;
        // 0x23f014: 0x27bd0290  addiu       $sp, $sp, 0x290 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F018u;
        goto label_23f018;
    }
    ctx->pc = 0x23F010u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23F014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F010u;
        // 0x23f014: 0x27bd0290  addiu       $sp, $sp, 0x290 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23F010u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23F018u;
label_23f018:
    // 0x23f018: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x23f018u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_23f01c:
    // 0x23f01c: 0x24020066  addiu       $v0, $zero, 0x66
    ctx->pc = 0x23f01cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
label_23f020:
    // 0x23f020: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x23f020u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_23f024:
    // 0x23f024: 0x140882d  daddu       $s1, $t2, $zero
    ctx->pc = 0x23f024u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_23f028:
    // 0x23f028: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x23f028u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_23f02c:
    // 0x23f02c: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x23f02cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_23f030:
    // 0x23f030: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x23f030u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_23f034:
    // 0x23f034: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x23f034u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_23f038:
    // 0x23f038: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x23f038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_23f03c:
    // 0x23f03c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x23f03cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_23f040:
    // 0x23f040: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x23f040u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
label_23f044:
    // 0x23f044: 0x24140003  addiu       $s4, $zero, 0x3
    ctx->pc = 0x23f044u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_23f048:
    // 0x23f048: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x23f048u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
label_23f04c:
    // 0x23f04c: 0x120a82d  daddu       $s5, $t1, $zero
    ctx->pc = 0x23f04cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_23f050:
    // 0x23f050: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x23f050u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
label_23f054:
    // 0x23f054: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x23f054u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_23f058:
    // 0x23f058: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x23f058u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
label_23f05c:
    // 0x23f05c: 0xe0b82d  daddu       $s7, $a3, $zero
    ctx->pc = 0x23f05cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_23f060:
    // 0x23f060: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x23f060u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
label_23f064:
    // 0x23f064: 0x160f02d  daddu       $fp, $t3, $zero
    ctx->pc = 0x23f064u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_23f068:
    // 0x23f068: 0x12220008  beq         $s1, $v0, . + 4 + (0x8 << 2)
label_23f06c:
    if (ctx->pc == 0x23F06Cu) {
        ctx->pc = 0x23F06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F068u;
        // 0x23f06c: 0xffbf0058  sd          $ra, 0x58($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F070u;
        goto label_23f070;
    }
    ctx->pc = 0x23F068u;
    {
        const bool branch_taken_0x23f068 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x23F06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F068u;
        // 0x23f06c: 0xffbf0058  sd          $ra, 0x58($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f068) {
            ctx->pc = 0x23F08Cu;
            goto label_23f08c;
        }
    }
    ctx->pc = 0x23F070u;
label_23f070:
    // 0x23f070: 0x24020065  addiu       $v0, $zero, 0x65
    ctx->pc = 0x23f070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
label_23f074:
    // 0x23f074: 0x12220003  beq         $s1, $v0, . + 4 + (0x3 << 2)
label_23f078:
    if (ctx->pc == 0x23F078u) {
        ctx->pc = 0x23F078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F074u;
        // 0x23f078: 0x24020045  addiu       $v0, $zero, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F07Cu;
        goto label_23f07c;
    }
    ctx->pc = 0x23F074u;
    {
        const bool branch_taken_0x23f074 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x23F078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F074u;
        // 0x23f078: 0x24020045  addiu       $v0, $zero, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f074) {
            ctx->pc = 0x23F084u;
            goto label_23f084;
        }
    }
    ctx->pc = 0x23F07Cu;
label_23f07c:
    // 0x23f07c: 0x16220003  bne         $s1, $v0, . + 4 + (0x3 << 2)
label_23f080:
    if (ctx->pc == 0x23F080u) {
        ctx->pc = 0x23F080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F07Cu;
        // 0x23f080: 0x24140002  addiu       $s4, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F084u;
        goto label_23f084;
    }
    ctx->pc = 0x23F07Cu;
    {
        const bool branch_taken_0x23f07c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x23F080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F07Cu;
        // 0x23f080: 0x24140002  addiu       $s4, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f07c) {
            ctx->pc = 0x23F08Cu;
            goto label_23f08c;
        }
    }
    ctx->pc = 0x23F084u;
label_23f084:
    // 0x23f084: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x23f084u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_23f088:
    // 0x23f088: 0x24140002  addiu       $s4, $zero, 0x2
    ctx->pc = 0x23f088u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_23f08c:
    // 0x23f08c: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x23f08cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_23f090:
    // 0x23f090: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x23f090u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_23f094:
    // 0x23f094: 0x4430008  bgezl       $v0, . + 4 + (0x8 << 2)
label_23f098:
    if (ctx->pc == 0x23F098u) {
        ctx->pc = 0x23F098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F094u;
        // 0x23f098: 0xa2000000  sb          $zero, 0x0($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F09Cu;
        goto label_23f09c;
    }
    ctx->pc = 0x23F094u;
    {
        const bool branch_taken_0x23f094 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x23f094) {
            ctx->pc = 0x23F098u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23F094u;
            // 0x23f098: 0xa2000000  sb          $zero, 0x0($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23F0B8u;
            goto label_23f0b8;
        }
    }
    ctx->pc = 0x23F09Cu;
label_23f09c:
    // 0x23f09c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x23f09cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_23f0a0:
    // 0x23f0a0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x23f0a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23f0a4:
    // 0x23f0a4: 0xc06dd8a  jal         func_1B7628
label_23f0a8:
    if (ctx->pc == 0x23F0A8u) {
        ctx->pc = 0x23F0ACu;
        goto label_23f0ac;
    }
    ctx->pc = 0x23F0A4u;
    SET_GPR_U32(ctx, 31, 0x23F0ACu);
    ctx->pc = 0x1B7628u;
    { ctx->pc = 0x1b7628; return; }
    ctx->pc = 0x23F0ACu;
label_23f0ac:
    // 0x23f0ac: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x23f0acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23f0b0:
    // 0x23f0b0: 0x2402002d  addiu       $v0, $zero, 0x2D
    ctx->pc = 0x23f0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
label_23f0b4:
    // 0x23f0b4: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x23f0b4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
label_23f0b8:
    // 0x23f0b8: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x23f0b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_23f0bc:
    // 0x23f0bc: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x23f0bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_23f0c0:
    // 0x23f0c0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x23f0c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_23f0c4:
    // 0x23f0c4: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x23f0c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_23f0c8:
    // 0x23f0c8: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x23f0c8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_23f0cc:
    // 0x23f0cc: 0x3a0482d  daddu       $t1, $sp, $zero
    ctx->pc = 0x23f0ccu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_23f0d0:
    // 0x23f0d0: 0xc08dd34  jal         func_2374D0
label_23f0d4:
    if (ctx->pc == 0x23F0D4u) {
        ctx->pc = 0x23F0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F0D0u;
        // 0x23f0d4: 0x27aa0004  addiu       $t2, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F0D8u;
        goto label_23f0d8;
    }
    ctx->pc = 0x23F0D0u;
    SET_GPR_U32(ctx, 31, 0x23F0D8u);
    ctx->pc = 0x23F0D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F0D0u;
    // 0x23f0d4: 0x27aa0004  addiu       $t2, $sp, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2374D0u;
    { ctx->pc = 0x2374d0; return; }
    ctx->pc = 0x23F0D8u;
label_23f0d8:
    // 0x23f0d8: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x23f0d8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23f0dc:
    // 0x23f0dc: 0x24020067  addiu       $v0, $zero, 0x67
    ctx->pc = 0x23f0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 103));
label_23f0e0:
    // 0x23f0e0: 0x12220003  beq         $s1, $v0, . + 4 + (0x3 << 2)
label_23f0e4:
    if (ctx->pc == 0x23F0E4u) {
        ctx->pc = 0x23F0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F0E0u;
        // 0x23f0e4: 0x24020047  addiu       $v0, $zero, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F0E8u;
        goto label_23f0e8;
    }
    ctx->pc = 0x23F0E0u;
    {
        const bool branch_taken_0x23f0e0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x23F0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F0E0u;
        // 0x23f0e4: 0x24020047  addiu       $v0, $zero, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f0e0) {
            ctx->pc = 0x23F0F0u;
            goto label_23f0f0;
        }
    }
    ctx->pc = 0x23F0E8u;
label_23f0e8:
    // 0x23f0e8: 0x16220004  bne         $s1, $v0, . + 4 + (0x4 << 2)
label_23f0ec:
    if (ctx->pc == 0x23F0ECu) {
        ctx->pc = 0x23F0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F0E8u;
        // 0x23f0ec: 0x24020066  addiu       $v0, $zero, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F0F0u;
        goto label_23f0f0;
    }
    ctx->pc = 0x23F0E8u;
    {
        const bool branch_taken_0x23f0e8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x23F0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F0E8u;
        // 0x23f0ec: 0x24020066  addiu       $v0, $zero, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f0e8) {
            ctx->pc = 0x23F0FCu;
            goto label_23f0fc;
        }
    }
    ctx->pc = 0x23F0F0u;
label_23f0f0:
    // 0x23f0f0: 0x32e20001  andi        $v0, $s7, 0x1
    ctx->pc = 0x23f0f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)1);
label_23f0f4:
    // 0x23f0f4: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_23f0f8:
    if (ctx->pc == 0x23F0F8u) {
        ctx->pc = 0x23F0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F0F4u;
        // 0x23f0f8: 0x24020066  addiu       $v0, $zero, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F0FCu;
        goto label_23f0fc;
    }
    ctx->pc = 0x23F0F4u;
    {
        const bool branch_taken_0x23f0f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F0F4u;
        // 0x23f0f8: 0x24020066  addiu       $v0, $zero, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f0f4) {
            ctx->pc = 0x23F198u;
            goto label_23f198;
        }
    }
    ctx->pc = 0x23F0FCu;
label_23f0fc:
    // 0x23f0fc: 0x1622000f  bne         $s1, $v0, . + 4 + (0xF << 2)
label_23f100:
    if (ctx->pc == 0x23F100u) {
        ctx->pc = 0x23F100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F0FCu;
        // 0x23f100: 0x2938021  addu        $s0, $s4, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F104u;
        goto label_23f104;
    }
    ctx->pc = 0x23F0FCu;
    {
        const bool branch_taken_0x23f0fc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x23F100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F0FCu;
        // 0x23f100: 0x2938021  addu        $s0, $s4, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f0fc) {
            ctx->pc = 0x23F13Cu;
            goto label_23f13c;
        }
    }
    ctx->pc = 0x23F104u;
label_23f104:
    // 0x23f104: 0x82830000  lb          $v1, 0x0($s4)
    ctx->pc = 0x23f104u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
label_23f108:
    // 0x23f108: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x23f108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_23f10c:
    // 0x23f10c: 0x5462000a  bnel        $v1, $v0, . + 4 + (0xA << 2)
label_23f110:
    if (ctx->pc == 0x23F110u) {
        ctx->pc = 0x23F110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F10Cu;
        // 0x23f110: 0x8ea20000  lw          $v0, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F114u;
        goto label_23f114;
    }
    ctx->pc = 0x23F10Cu;
    {
        const bool branch_taken_0x23f10c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x23f10c) {
            ctx->pc = 0x23F110u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23F10Cu;
            // 0x23f110: 0x8ea20000  lw          $v0, 0x0($s5) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23F138u;
            goto label_23f138;
        }
    }
    ctx->pc = 0x23F114u;
label_23f114:
    // 0x23f114: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x23f114u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_23f118:
    // 0x23f118: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x23f118u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23f11c:
    // 0x23f11c: 0xc06def6  jal         func_1B7BD8
label_23f120:
    if (ctx->pc == 0x23F120u) {
        ctx->pc = 0x23F124u;
        goto label_23f124;
    }
    ctx->pc = 0x23F11Cu;
    SET_GPR_U32(ctx, 31, 0x23F124u);
    ctx->pc = 0x1B7BD8u;
    { ctx->pc = 0x1b7bd8; return; }
    ctx->pc = 0x23F124u;
label_23f124:
    // 0x23f124: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_23f128:
    if (ctx->pc == 0x23F128u) {
        ctx->pc = 0x23F128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F124u;
        // 0x23f128: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F12Cu;
        goto label_23f12c;
    }
    ctx->pc = 0x23F124u;
    {
        const bool branch_taken_0x23f124 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F124u;
        // 0x23f128: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f124) {
            ctx->pc = 0x23F134u;
            goto label_23f134;
        }
    }
    ctx->pc = 0x23F12Cu;
label_23f12c:
    // 0x23f12c: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x23f12cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_23f130:
    // 0x23f130: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x23f130u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
label_23f134:
    // 0x23f134: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x23f134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_23f138:
    // 0x23f138: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x23f138u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_23f13c:
    // 0x23f13c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x23f13cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_23f140:
    // 0x23f140: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x23f140u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23f144:
    // 0x23f144: 0xc06def6  jal         func_1B7BD8
label_23f148:
    if (ctx->pc == 0x23F148u) {
        ctx->pc = 0x23F14Cu;
        goto label_23f14c;
    }
    ctx->pc = 0x23F144u;
    SET_GPR_U32(ctx, 31, 0x23F14Cu);
    ctx->pc = 0x1B7BD8u;
    { ctx->pc = 0x1b7bd8; return; }
    ctx->pc = 0x23F14Cu;
label_23f14c:
    // 0x23f14c: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x23f14cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_23f150:
    // 0x23f150: 0x38420000  xori        $v0, $v0, 0x0
    ctx->pc = 0x23f150u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)0);
label_23f154:
    // 0x23f154: 0x202180a  movz        $v1, $s0, $v0
    ctx->pc = 0x23f154u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 16));
label_23f158:
    // 0x23f158: 0x70102b  sltu        $v0, $v1, $s0
    ctx->pc = 0x23f158u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_23f15c:
    // 0x23f15c: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x23f15cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
label_23f160:
    // 0x23f160: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_23f164:
    if (ctx->pc == 0x23F164u) {
        ctx->pc = 0x23F164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F160u;
        // 0x23f164: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F168u;
        goto label_23f168;
    }
    ctx->pc = 0x23F160u;
    {
        const bool branch_taken_0x23f160 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F160u;
        // 0x23f164: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f160) {
            ctx->pc = 0x23F19Cu;
            goto label_23f19c;
        }
    }
    ctx->pc = 0x23F168u;
label_23f168:
    // 0x23f168: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x23f168u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_23f16c:
    // 0x23f16c: 0x0  nop
    ctx->pc = 0x23f16cu;
    // NOP
label_23f170:
    // 0x23f170: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x23f170u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_23f174:
    // 0x23f174: 0xa0850000  sb          $a1, 0x0($a0)
    ctx->pc = 0x23f174u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 5));
label_23f178:
    // 0x23f178: 0x70102b  sltu        $v0, $v1, $s0
    ctx->pc = 0x23f178u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_23f17c:
    // 0x23f17c: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x23f17cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
label_23f180:
    // 0x23f180: 0x0  nop
    ctx->pc = 0x23f180u;
    // NOP
label_23f184:
    // 0x23f184: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_23f188:
    if (ctx->pc == 0x23F188u) {
        ctx->pc = 0x23F188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F184u;
        // 0x23f188: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F18Cu;
        goto label_23f18c;
    }
    ctx->pc = 0x23F184u;
    {
        const bool branch_taken_0x23f184 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23F188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F184u;
        // 0x23f188: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f184) {
            ctx->pc = 0x23F170u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23f170;
        }
    }
    ctx->pc = 0x23F18Cu;
label_23f18c:
    // 0x23f18c: 0x10000004  b           . + 4 + (0x4 << 2)
label_23f190:
    if (ctx->pc == 0x23F190u) {
        ctx->pc = 0x23F190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F18Cu;
        // 0x23f190: 0x741823  subu        $v1, $v1, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F194u;
        goto label_23f194;
    }
    ctx->pc = 0x23F18Cu;
    {
        const bool branch_taken_0x23f18c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F18Cu;
        // 0x23f190: 0x741823  subu        $v1, $v1, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f18c) {
            ctx->pc = 0x23F1A0u;
            goto label_23f1a0;
        }
    }
    ctx->pc = 0x23F194u;
label_23f194:
    // 0x23f194: 0x0  nop
    ctx->pc = 0x23f194u;
    // NOP
label_23f198:
    // 0x23f198: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x23f198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_23f19c:
    // 0x23f19c: 0x741823  subu        $v1, $v1, $s4
    ctx->pc = 0x23f19cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
label_23f1a0:
    // 0x23f1a0: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x23f1a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_23f1a4:
    // 0x23f1a4: 0xafc30000  sw          $v1, 0x0($fp)
    ctx->pc = 0x23f1a4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 3));
label_23f1a8:
    // 0x23f1a8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x23f1a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_23f1ac:
    // 0x23f1ac: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x23f1acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_23f1b0:
    // 0x23f1b0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x23f1b0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_23f1b4:
    // 0x23f1b4: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x23f1b4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_23f1b8:
    // 0x23f1b8: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x23f1b8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_23f1bc:
    // 0x23f1bc: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x23f1bcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_23f1c0:
    // 0x23f1c0: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x23f1c0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_23f1c4:
    // 0x23f1c4: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x23f1c4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_23f1c8:
    // 0x23f1c8: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x23f1c8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_23f1cc:
    // 0x23f1cc: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x23f1ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_23f1d0:
    // 0x23f1d0: 0x3e00008  jr          $ra
label_23f1d4:
    if (ctx->pc == 0x23F1D4u) {
        ctx->pc = 0x23F1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F1D0u;
        // 0x23f1d4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F1D8u;
        goto label_23f1d8;
    }
    ctx->pc = 0x23F1D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23F1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F1D0u;
        // 0x23f1d4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23F1D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23F1D8u;
label_23f1d8:
    // 0x23f1d8: 0xa0860000  sb          $a2, 0x0($a0)
    ctx->pc = 0x23f1d8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 6));
label_23f1dc:
    // 0x23f1dc: 0x24860001  addiu       $a2, $a0, 0x1
    ctx->pc = 0x23f1dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_23f1e0:
    // 0x23f1e0: 0x4a10005  bgez        $a1, . + 4 + (0x5 << 2)
label_23f1e4:
    if (ctx->pc == 0x23F1E4u) {
        ctx->pc = 0x23F1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F1E0u;
        // 0x23f1e4: 0x27bdfec0  addiu       $sp, $sp, -0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F1E8u;
        goto label_23f1e8;
    }
    ctx->pc = 0x23F1E0u;
    {
        const bool branch_taken_0x23f1e0 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x23F1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F1E0u;
        // 0x23f1e4: 0x27bdfec0  addiu       $sp, $sp, -0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f1e0) {
            ctx->pc = 0x23F1F8u;
            goto label_23f1f8;
        }
    }
    ctx->pc = 0x23F1E8u;
label_23f1e8:
    // 0x23f1e8: 0x2402002d  addiu       $v0, $zero, 0x2D
    ctx->pc = 0x23f1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
label_23f1ec:
    // 0x23f1ec: 0x10000003  b           . + 4 + (0x3 << 2)
label_23f1f0:
    if (ctx->pc == 0x23F1F0u) {
        ctx->pc = 0x23F1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F1ECu;
        // 0x23f1f0: 0x52823  negu        $a1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23F1F4u;
        goto label_23f1f4;
    }
    ctx->pc = 0x23F1ECu;
    {
        const bool branch_taken_0x23f1ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F1ECu;
        // 0x23f1f0: 0x52823  negu        $a1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f1ec) {
            ctx->pc = 0x23F1FCu;
            goto label_23f1fc;
        }
    }
    ctx->pc = 0x23F1F4u;
label_23f1f4:
    // 0x23f1f4: 0x0  nop
    ctx->pc = 0x23f1f4u;
    // NOP
label_23f1f8:
    // 0x23f1f8: 0x2402002b  addiu       $v0, $zero, 0x2B
    ctx->pc = 0x23f1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
label_23f1fc:
    // 0x23f1fc: 0xa0c20000  sb          $v0, 0x0($a2)
    ctx->pc = 0x23f1fcu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
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
    { ctx->pc = 0x23f770; return; }
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
    { ctx->pc = 0x23f770; return; }
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
            { ctx->pc = 0x23f708; return; }
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
    ctx->pc = 0x23f6e8u;
    return;
}
