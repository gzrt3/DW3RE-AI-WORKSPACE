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


void FUN_0019b910_part266(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x21cf60u: goto label_21cf60;
        case 0x21cf64u: goto label_21cf64;
        case 0x21cf68u: goto label_21cf68;
        case 0x21cf6cu: goto label_21cf6c;
        case 0x21cf70u: goto label_21cf70;
        case 0x21cf74u: goto label_21cf74;
        case 0x21cf78u: goto label_21cf78;
        case 0x21cf7cu: goto label_21cf7c;
        case 0x21cf80u: goto label_21cf80;
        case 0x21cf84u: goto label_21cf84;
        case 0x21cf88u: goto label_21cf88;
        case 0x21cf8cu: goto label_21cf8c;
        case 0x21cf90u: goto label_21cf90;
        case 0x21cf94u: goto label_21cf94;
        case 0x21cf98u: goto label_21cf98;
        case 0x21cf9cu: goto label_21cf9c;
        case 0x21cfa0u: goto label_21cfa0;
        case 0x21cfa4u: goto label_21cfa4;
        case 0x21cfa8u: goto label_21cfa8;
        case 0x21cfacu: goto label_21cfac;
        case 0x21cfb0u: goto label_21cfb0;
        case 0x21cfb4u: goto label_21cfb4;
        case 0x21cfb8u: goto label_21cfb8;
        case 0x21cfbcu: goto label_21cfbc;
        case 0x21cfc0u: goto label_21cfc0;
        case 0x21cfc4u: goto label_21cfc4;
        case 0x21cfc8u: goto label_21cfc8;
        case 0x21cfccu: goto label_21cfcc;
        case 0x21cfd0u: goto label_21cfd0;
        case 0x21cfd4u: goto label_21cfd4;
        case 0x21cfd8u: goto label_21cfd8;
        case 0x21cfdcu: goto label_21cfdc;
        case 0x21cfe0u: goto label_21cfe0;
        case 0x21cfe4u: goto label_21cfe4;
        case 0x21cfe8u: goto label_21cfe8;
        case 0x21cfecu: goto label_21cfec;
        case 0x21cff0u: goto label_21cff0;
        case 0x21cff4u: goto label_21cff4;
        case 0x21cff8u: goto label_21cff8;
        case 0x21cffcu: goto label_21cffc;
        case 0x21d000u: goto label_21d000;
        case 0x21d004u: goto label_21d004;
        case 0x21d008u: goto label_21d008;
        case 0x21d00cu: goto label_21d00c;
        case 0x21d010u: goto label_21d010;
        case 0x21d014u: goto label_21d014;
        case 0x21d018u: goto label_21d018;
        case 0x21d01cu: goto label_21d01c;
        case 0x21d020u: goto label_21d020;
        case 0x21d024u: goto label_21d024;
        case 0x21d028u: goto label_21d028;
        case 0x21d02cu: goto label_21d02c;
        case 0x21d030u: goto label_21d030;
        case 0x21d034u: goto label_21d034;
        case 0x21d038u: goto label_21d038;
        case 0x21d03cu: goto label_21d03c;
        case 0x21d040u: goto label_21d040;
        case 0x21d044u: goto label_21d044;
        case 0x21d048u: goto label_21d048;
        case 0x21d04cu: goto label_21d04c;
        case 0x21d050u: goto label_21d050;
        case 0x21d054u: goto label_21d054;
        case 0x21d058u: goto label_21d058;
        case 0x21d05cu: goto label_21d05c;
        case 0x21d060u: goto label_21d060;
        case 0x21d064u: goto label_21d064;
        case 0x21d068u: goto label_21d068;
        case 0x21d06cu: goto label_21d06c;
        case 0x21d070u: goto label_21d070;
        case 0x21d074u: goto label_21d074;
        case 0x21d078u: goto label_21d078;
        case 0x21d07cu: goto label_21d07c;
        case 0x21d080u: goto label_21d080;
        case 0x21d084u: goto label_21d084;
        case 0x21d088u: goto label_21d088;
        case 0x21d08cu: goto label_21d08c;
        case 0x21d090u: goto label_21d090;
        case 0x21d094u: goto label_21d094;
        case 0x21d098u: goto label_21d098;
        case 0x21d09cu: goto label_21d09c;
        case 0x21d0a0u: goto label_21d0a0;
        case 0x21d0a4u: goto label_21d0a4;
        case 0x21d0a8u: goto label_21d0a8;
        case 0x21d0acu: goto label_21d0ac;
        case 0x21d0b0u: goto label_21d0b0;
        case 0x21d0b4u: goto label_21d0b4;
        case 0x21d0b8u: goto label_21d0b8;
        case 0x21d0bcu: goto label_21d0bc;
        case 0x21d0c0u: goto label_21d0c0;
        case 0x21d0c4u: goto label_21d0c4;
        case 0x21d0c8u: goto label_21d0c8;
        case 0x21d0ccu: goto label_21d0cc;
        case 0x21d0d0u: goto label_21d0d0;
        case 0x21d0d4u: goto label_21d0d4;
        case 0x21d0d8u: goto label_21d0d8;
        case 0x21d0dcu: goto label_21d0dc;
        case 0x21d0e0u: goto label_21d0e0;
        case 0x21d0e4u: goto label_21d0e4;
        case 0x21d0e8u: goto label_21d0e8;
        case 0x21d0ecu: goto label_21d0ec;
        case 0x21d0f0u: goto label_21d0f0;
        case 0x21d0f4u: goto label_21d0f4;
        case 0x21d0f8u: goto label_21d0f8;
        case 0x21d0fcu: goto label_21d0fc;
        case 0x21d100u: goto label_21d100;
        case 0x21d104u: goto label_21d104;
        case 0x21d108u: goto label_21d108;
        case 0x21d10cu: goto label_21d10c;
        case 0x21d110u: goto label_21d110;
        case 0x21d114u: goto label_21d114;
        case 0x21d118u: goto label_21d118;
        case 0x21d11cu: goto label_21d11c;
        case 0x21d120u: goto label_21d120;
        case 0x21d124u: goto label_21d124;
        case 0x21d128u: goto label_21d128;
        case 0x21d12cu: goto label_21d12c;
        case 0x21d130u: goto label_21d130;
        case 0x21d134u: goto label_21d134;
        case 0x21d138u: goto label_21d138;
        case 0x21d13cu: goto label_21d13c;
        case 0x21d140u: goto label_21d140;
        case 0x21d144u: goto label_21d144;
        case 0x21d148u: goto label_21d148;
        case 0x21d14cu: goto label_21d14c;
        case 0x21d150u: goto label_21d150;
        case 0x21d154u: goto label_21d154;
        case 0x21d158u: goto label_21d158;
        case 0x21d15cu: goto label_21d15c;
        case 0x21d160u: goto label_21d160;
        case 0x21d164u: goto label_21d164;
        case 0x21d168u: goto label_21d168;
        case 0x21d16cu: goto label_21d16c;
        case 0x21d170u: goto label_21d170;
        case 0x21d174u: goto label_21d174;
        case 0x21d178u: goto label_21d178;
        case 0x21d17cu: goto label_21d17c;
        case 0x21d180u: goto label_21d180;
        case 0x21d184u: goto label_21d184;
        case 0x21d188u: goto label_21d188;
        case 0x21d18cu: goto label_21d18c;
        case 0x21d190u: goto label_21d190;
        case 0x21d194u: goto label_21d194;
        case 0x21d198u: goto label_21d198;
        case 0x21d19cu: goto label_21d19c;
        case 0x21d1a0u: goto label_21d1a0;
        case 0x21d1a4u: goto label_21d1a4;
        case 0x21d1a8u: goto label_21d1a8;
        case 0x21d1acu: goto label_21d1ac;
        case 0x21d1b0u: goto label_21d1b0;
        case 0x21d1b4u: goto label_21d1b4;
        case 0x21d1b8u: goto label_21d1b8;
        case 0x21d1bcu: goto label_21d1bc;
        case 0x21d1c0u: goto label_21d1c0;
        case 0x21d1c4u: goto label_21d1c4;
        case 0x21d1c8u: goto label_21d1c8;
        case 0x21d1ccu: goto label_21d1cc;
        case 0x21d1d0u: goto label_21d1d0;
        case 0x21d1d4u: goto label_21d1d4;
        case 0x21d1d8u: goto label_21d1d8;
        case 0x21d1dcu: goto label_21d1dc;
        case 0x21d1e0u: goto label_21d1e0;
        case 0x21d1e4u: goto label_21d1e4;
        case 0x21d1e8u: goto label_21d1e8;
        case 0x21d1ecu: goto label_21d1ec;
        case 0x21d1f0u: goto label_21d1f0;
        case 0x21d1f4u: goto label_21d1f4;
        case 0x21d1f8u: goto label_21d1f8;
        case 0x21d1fcu: goto label_21d1fc;
        case 0x21d200u: goto label_21d200;
        case 0x21d204u: goto label_21d204;
        case 0x21d208u: goto label_21d208;
        case 0x21d20cu: goto label_21d20c;
        case 0x21d210u: goto label_21d210;
        case 0x21d214u: goto label_21d214;
        case 0x21d218u: goto label_21d218;
        case 0x21d21cu: goto label_21d21c;
        case 0x21d220u: goto label_21d220;
        case 0x21d224u: goto label_21d224;
        case 0x21d228u: goto label_21d228;
        case 0x21d22cu: goto label_21d22c;
        case 0x21d230u: goto label_21d230;
        case 0x21d234u: goto label_21d234;
        case 0x21d238u: goto label_21d238;
        case 0x21d23cu: goto label_21d23c;
        case 0x21d240u: goto label_21d240;
        case 0x21d244u: goto label_21d244;
        case 0x21d248u: goto label_21d248;
        case 0x21d24cu: goto label_21d24c;
        case 0x21d250u: goto label_21d250;
        case 0x21d254u: goto label_21d254;
        case 0x21d258u: goto label_21d258;
        case 0x21d25cu: goto label_21d25c;
        case 0x21d260u: goto label_21d260;
        case 0x21d264u: goto label_21d264;
        case 0x21d268u: goto label_21d268;
        case 0x21d26cu: goto label_21d26c;
        case 0x21d270u: goto label_21d270;
        case 0x21d274u: goto label_21d274;
        case 0x21d278u: goto label_21d278;
        case 0x21d27cu: goto label_21d27c;
        case 0x21d280u: goto label_21d280;
        case 0x21d284u: goto label_21d284;
        case 0x21d288u: goto label_21d288;
        case 0x21d28cu: goto label_21d28c;
        case 0x21d290u: goto label_21d290;
        case 0x21d294u: goto label_21d294;
        case 0x21d298u: goto label_21d298;
        case 0x21d29cu: goto label_21d29c;
        case 0x21d2a0u: goto label_21d2a0;
        case 0x21d2a4u: goto label_21d2a4;
        case 0x21d2a8u: goto label_21d2a8;
        case 0x21d2acu: goto label_21d2ac;
        case 0x21d2b0u: goto label_21d2b0;
        case 0x21d2b4u: goto label_21d2b4;
        case 0x21d2b8u: goto label_21d2b8;
        case 0x21d2bcu: goto label_21d2bc;
        case 0x21d2c0u: goto label_21d2c0;
        case 0x21d2c4u: goto label_21d2c4;
        case 0x21d2c8u: goto label_21d2c8;
        case 0x21d2ccu: goto label_21d2cc;
        case 0x21d2d0u: goto label_21d2d0;
        case 0x21d2d4u: goto label_21d2d4;
        case 0x21d2d8u: goto label_21d2d8;
        case 0x21d2dcu: goto label_21d2dc;
        case 0x21d2e0u: goto label_21d2e0;
        case 0x21d2e4u: goto label_21d2e4;
        case 0x21d2e8u: goto label_21d2e8;
        case 0x21d2ecu: goto label_21d2ec;
        case 0x21d2f0u: goto label_21d2f0;
        case 0x21d2f4u: goto label_21d2f4;
        case 0x21d2f8u: goto label_21d2f8;
        case 0x21d2fcu: goto label_21d2fc;
        case 0x21d300u: goto label_21d300;
        case 0x21d304u: goto label_21d304;
        case 0x21d308u: goto label_21d308;
        case 0x21d30cu: goto label_21d30c;
        case 0x21d310u: goto label_21d310;
        case 0x21d314u: goto label_21d314;
        case 0x21d318u: goto label_21d318;
        case 0x21d31cu: goto label_21d31c;
        case 0x21d320u: goto label_21d320;
        case 0x21d324u: goto label_21d324;
        case 0x21d328u: goto label_21d328;
        case 0x21d32cu: goto label_21d32c;
        case 0x21d330u: goto label_21d330;
        case 0x21d334u: goto label_21d334;
        case 0x21d338u: goto label_21d338;
        case 0x21d33cu: goto label_21d33c;
        case 0x21d340u: goto label_21d340;
        case 0x21d344u: goto label_21d344;
        case 0x21d348u: goto label_21d348;
        case 0x21d34cu: goto label_21d34c;
        case 0x21d350u: goto label_21d350;
        case 0x21d354u: goto label_21d354;
        case 0x21d358u: goto label_21d358;
        case 0x21d35cu: goto label_21d35c;
        case 0x21d360u: goto label_21d360;
        case 0x21d364u: goto label_21d364;
        case 0x21d368u: goto label_21d368;
        case 0x21d36cu: goto label_21d36c;
        case 0x21d370u: goto label_21d370;
        case 0x21d374u: goto label_21d374;
        case 0x21d378u: goto label_21d378;
        case 0x21d37cu: goto label_21d37c;
        case 0x21d380u: goto label_21d380;
        case 0x21d384u: goto label_21d384;
        case 0x21d388u: goto label_21d388;
        case 0x21d38cu: goto label_21d38c;
        case 0x21d390u: goto label_21d390;
        case 0x21d394u: goto label_21d394;
        case 0x21d398u: goto label_21d398;
        case 0x21d39cu: goto label_21d39c;
        case 0x21d3a0u: goto label_21d3a0;
        case 0x21d3a4u: goto label_21d3a4;
        case 0x21d3a8u: goto label_21d3a8;
        case 0x21d3acu: goto label_21d3ac;
        case 0x21d3b0u: goto label_21d3b0;
        case 0x21d3b4u: goto label_21d3b4;
        case 0x21d3b8u: goto label_21d3b8;
        case 0x21d3bcu: goto label_21d3bc;
        case 0x21d3c0u: goto label_21d3c0;
        case 0x21d3c4u: goto label_21d3c4;
        case 0x21d3c8u: goto label_21d3c8;
        case 0x21d3ccu: goto label_21d3cc;
        case 0x21d3d0u: goto label_21d3d0;
        case 0x21d3d4u: goto label_21d3d4;
        case 0x21d3d8u: goto label_21d3d8;
        case 0x21d3dcu: goto label_21d3dc;
        case 0x21d3e0u: goto label_21d3e0;
        case 0x21d3e4u: goto label_21d3e4;
        case 0x21d3e8u: goto label_21d3e8;
        case 0x21d3ecu: goto label_21d3ec;
        case 0x21d3f0u: goto label_21d3f0;
        case 0x21d3f4u: goto label_21d3f4;
        case 0x21d3f8u: goto label_21d3f8;
        case 0x21d3fcu: goto label_21d3fc;
        case 0x21d400u: goto label_21d400;
        case 0x21d404u: goto label_21d404;
        case 0x21d408u: goto label_21d408;
        case 0x21d40cu: goto label_21d40c;
        case 0x21d410u: goto label_21d410;
        case 0x21d414u: goto label_21d414;
        case 0x21d418u: goto label_21d418;
        case 0x21d41cu: goto label_21d41c;
        case 0x21d420u: goto label_21d420;
        case 0x21d424u: goto label_21d424;
        case 0x21d428u: goto label_21d428;
        case 0x21d42cu: goto label_21d42c;
        case 0x21d430u: goto label_21d430;
        case 0x21d434u: goto label_21d434;
        case 0x21d438u: goto label_21d438;
        case 0x21d43cu: goto label_21d43c;
        case 0x21d440u: goto label_21d440;
        case 0x21d444u: goto label_21d444;
        case 0x21d448u: goto label_21d448;
        case 0x21d44cu: goto label_21d44c;
        case 0x21d450u: goto label_21d450;
        case 0x21d454u: goto label_21d454;
        case 0x21d458u: goto label_21d458;
        case 0x21d45cu: goto label_21d45c;
        case 0x21d460u: goto label_21d460;
        case 0x21d464u: goto label_21d464;
        case 0x21d468u: goto label_21d468;
        case 0x21d46cu: goto label_21d46c;
        case 0x21d470u: goto label_21d470;
        case 0x21d474u: goto label_21d474;
        case 0x21d478u: goto label_21d478;
        case 0x21d47cu: goto label_21d47c;
        case 0x21d480u: goto label_21d480;
        case 0x21d484u: goto label_21d484;
        case 0x21d488u: goto label_21d488;
        case 0x21d48cu: goto label_21d48c;
        case 0x21d490u: goto label_21d490;
        case 0x21d494u: goto label_21d494;
        case 0x21d498u: goto label_21d498;
        case 0x21d49cu: goto label_21d49c;
        case 0x21d4a0u: goto label_21d4a0;
        case 0x21d4a4u: goto label_21d4a4;
        case 0x21d4a8u: goto label_21d4a8;
        case 0x21d4acu: goto label_21d4ac;
        case 0x21d4b0u: goto label_21d4b0;
        case 0x21d4b4u: goto label_21d4b4;
        case 0x21d4b8u: goto label_21d4b8;
        case 0x21d4bcu: goto label_21d4bc;
        case 0x21d4c0u: goto label_21d4c0;
        case 0x21d4c4u: goto label_21d4c4;
        case 0x21d4c8u: goto label_21d4c8;
        case 0x21d4ccu: goto label_21d4cc;
        case 0x21d4d0u: goto label_21d4d0;
        case 0x21d4d4u: goto label_21d4d4;
        case 0x21d4d8u: goto label_21d4d8;
        case 0x21d4dcu: goto label_21d4dc;
        case 0x21d4e0u: goto label_21d4e0;
        case 0x21d4e4u: goto label_21d4e4;
        case 0x21d4e8u: goto label_21d4e8;
        case 0x21d4ecu: goto label_21d4ec;
        case 0x21d4f0u: goto label_21d4f0;
        case 0x21d4f4u: goto label_21d4f4;
        case 0x21d4f8u: goto label_21d4f8;
        case 0x21d4fcu: goto label_21d4fc;
        case 0x21d500u: goto label_21d500;
        case 0x21d504u: goto label_21d504;
        case 0x21d508u: goto label_21d508;
        case 0x21d50cu: goto label_21d50c;
        case 0x21d510u: goto label_21d510;
        case 0x21d514u: goto label_21d514;
        case 0x21d518u: goto label_21d518;
        case 0x21d51cu: goto label_21d51c;
        case 0x21d520u: goto label_21d520;
        case 0x21d524u: goto label_21d524;
        case 0x21d528u: goto label_21d528;
        case 0x21d52cu: goto label_21d52c;
        case 0x21d530u: goto label_21d530;
        case 0x21d534u: goto label_21d534;
        case 0x21d538u: goto label_21d538;
        case 0x21d53cu: goto label_21d53c;
        case 0x21d540u: goto label_21d540;
        case 0x21d544u: goto label_21d544;
        case 0x21d548u: goto label_21d548;
        case 0x21d54cu: goto label_21d54c;
        case 0x21d550u: goto label_21d550;
        case 0x21d554u: goto label_21d554;
        case 0x21d558u: goto label_21d558;
        case 0x21d55cu: goto label_21d55c;
        case 0x21d560u: goto label_21d560;
        case 0x21d564u: goto label_21d564;
        case 0x21d568u: goto label_21d568;
        case 0x21d56cu: goto label_21d56c;
        case 0x21d570u: goto label_21d570;
        case 0x21d574u: goto label_21d574;
        case 0x21d578u: goto label_21d578;
        case 0x21d57cu: goto label_21d57c;
        case 0x21d580u: goto label_21d580;
        case 0x21d584u: goto label_21d584;
        case 0x21d588u: goto label_21d588;
        case 0x21d58cu: goto label_21d58c;
        case 0x21d590u: goto label_21d590;
        case 0x21d594u: goto label_21d594;
        case 0x21d598u: goto label_21d598;
        case 0x21d59cu: goto label_21d59c;
        case 0x21d5a0u: goto label_21d5a0;
        case 0x21d5a4u: goto label_21d5a4;
        case 0x21d5a8u: goto label_21d5a8;
        case 0x21d5acu: goto label_21d5ac;
        case 0x21d5b0u: goto label_21d5b0;
        case 0x21d5b4u: goto label_21d5b4;
        case 0x21d5b8u: goto label_21d5b8;
        case 0x21d5bcu: goto label_21d5bc;
        case 0x21d5c0u: goto label_21d5c0;
        case 0x21d5c4u: goto label_21d5c4;
        case 0x21d5c8u: goto label_21d5c8;
        case 0x21d5ccu: goto label_21d5cc;
        case 0x21d5d0u: goto label_21d5d0;
        case 0x21d5d4u: goto label_21d5d4;
        case 0x21d5d8u: goto label_21d5d8;
        case 0x21d5dcu: goto label_21d5dc;
        case 0x21d5e0u: goto label_21d5e0;
        case 0x21d5e4u: goto label_21d5e4;
        case 0x21d5e8u: goto label_21d5e8;
        case 0x21d5ecu: goto label_21d5ec;
        case 0x21d5f0u: goto label_21d5f0;
        case 0x21d5f4u: goto label_21d5f4;
        case 0x21d5f8u: goto label_21d5f8;
        case 0x21d5fcu: goto label_21d5fc;
        case 0x21d600u: goto label_21d600;
        case 0x21d604u: goto label_21d604;
        case 0x21d608u: goto label_21d608;
        case 0x21d60cu: goto label_21d60c;
        case 0x21d610u: goto label_21d610;
        case 0x21d614u: goto label_21d614;
        case 0x21d618u: goto label_21d618;
        case 0x21d61cu: goto label_21d61c;
        case 0x21d620u: goto label_21d620;
        case 0x21d624u: goto label_21d624;
        case 0x21d628u: goto label_21d628;
        case 0x21d62cu: goto label_21d62c;
        case 0x21d630u: goto label_21d630;
        case 0x21d634u: goto label_21d634;
        case 0x21d638u: goto label_21d638;
        case 0x21d63cu: goto label_21d63c;
        case 0x21d640u: goto label_21d640;
        case 0x21d644u: goto label_21d644;
        case 0x21d648u: goto label_21d648;
        case 0x21d64cu: goto label_21d64c;
        case 0x21d650u: goto label_21d650;
        case 0x21d654u: goto label_21d654;
        case 0x21d658u: goto label_21d658;
        case 0x21d65cu: goto label_21d65c;
        case 0x21d660u: goto label_21d660;
        case 0x21d664u: goto label_21d664;
        case 0x21d668u: goto label_21d668;
        case 0x21d66cu: goto label_21d66c;
        case 0x21d670u: goto label_21d670;
        case 0x21d674u: goto label_21d674;
        case 0x21d678u: goto label_21d678;
        case 0x21d67cu: goto label_21d67c;
        case 0x21d680u: goto label_21d680;
        case 0x21d684u: goto label_21d684;
        case 0x21d688u: goto label_21d688;
        case 0x21d68cu: goto label_21d68c;
        case 0x21d690u: goto label_21d690;
        case 0x21d694u: goto label_21d694;
        case 0x21d698u: goto label_21d698;
        case 0x21d69cu: goto label_21d69c;
        case 0x21d6a0u: goto label_21d6a0;
        case 0x21d6a4u: goto label_21d6a4;
        case 0x21d6a8u: goto label_21d6a8;
        case 0x21d6acu: goto label_21d6ac;
        case 0x21d6b0u: goto label_21d6b0;
        case 0x21d6b4u: goto label_21d6b4;
        case 0x21d6b8u: goto label_21d6b8;
        case 0x21d6bcu: goto label_21d6bc;
        case 0x21d6c0u: goto label_21d6c0;
        case 0x21d6c4u: goto label_21d6c4;
        case 0x21d6c8u: goto label_21d6c8;
        case 0x21d6ccu: goto label_21d6cc;
        case 0x21d6d0u: goto label_21d6d0;
        case 0x21d6d4u: goto label_21d6d4;
        case 0x21d6d8u: goto label_21d6d8;
        case 0x21d6dcu: goto label_21d6dc;
        case 0x21d6e0u: goto label_21d6e0;
        case 0x21d6e4u: goto label_21d6e4;
        case 0x21d6e8u: goto label_21d6e8;
        case 0x21d6ecu: goto label_21d6ec;
        case 0x21d6f0u: goto label_21d6f0;
        case 0x21d6f4u: goto label_21d6f4;
        case 0x21d6f8u: goto label_21d6f8;
        case 0x21d6fcu: goto label_21d6fc;
        case 0x21d700u: goto label_21d700;
        case 0x21d704u: goto label_21d704;
        case 0x21d708u: goto label_21d708;
        case 0x21d70cu: goto label_21d70c;
        case 0x21d710u: goto label_21d710;
        case 0x21d714u: goto label_21d714;
        case 0x21d718u: goto label_21d718;
        case 0x21d71cu: goto label_21d71c;
        case 0x21d720u: goto label_21d720;
        case 0x21d724u: goto label_21d724;
        case 0x21d728u: goto label_21d728;
        case 0x21d72cu: goto label_21d72c;
        default: return;
    }

label_21cf60:
    // 0x21cf60: 0x148102d  daddu       $v0, $t2, $t0
    ctx->pc = 0x21cf60u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 8));
label_21cf64:
    // 0x21cf64: 0x24c6ffbf  addiu       $a2, $a2, -0x41
    ctx->pc = 0x21cf64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967231));
label_21cf68:
    // 0x21cf68: 0x24078  dsll        $t0, $v0, 1
    ctx->pc = 0x21cf68u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) << 1);
label_21cf6c:
    // 0x21cf6c: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x21cf6cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
label_21cf70:
    // 0x21cf70: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x21cf70u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
label_21cf74:
    // 0x21cf74: 0x2862000c  slti        $v0, $v1, 0xC
    ctx->pc = 0x21cf74u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)12) ? 1 : 0);
label_21cf78:
    // 0x21cf78: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
label_21cf7c:
    if (ctx->pc == 0x21CF7Cu) {
        ctx->pc = 0x21CF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CF78u;
        // 0x21cf7c: 0x106402d  daddu       $t0, $t0, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21CF80u;
        goto label_21cf80;
    }
    ctx->pc = 0x21CF78u;
    {
        const bool branch_taken_0x21cf78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21CF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CF78u;
        // 0x21cf7c: 0x106402d  daddu       $t0, $t0, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21cf78) {
            ctx->pc = 0x21CF44u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x21cf44; return; }
        }
    }
    ctx->pc = 0x21CF80u;
label_21cf80:
    // 0x21cf80: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x21cf80u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21cf84:
    // 0x21cf84: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x21cf84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_21cf88:
    // 0x21cf88: 0x2403005a  addiu       $v1, $zero, 0x5A
    ctx->pc = 0x21cf88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
label_21cf8c:
    // 0x21cf8c: 0xc91023  subu        $v0, $a2, $t1
    ctx->pc = 0x21cf8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
label_21cf90:
    // 0x21cf90: 0x75078  dsll        $t2, $a3, 1
    ctx->pc = 0x21cf90u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 7) << 1);
label_21cf94:
    // 0x21cf94: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x21cf94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_21cf98:
    // 0x21cf98: 0x147502d  daddu       $t2, $t2, $a3
    ctx->pc = 0x21cf98u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 7));
label_21cf9c:
    // 0x21cf9c: 0x804b000c  lb          $t3, 0xC($v0)
    ctx->pc = 0x21cf9cu;
    SET_GPR_S32(ctx, 11, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 12)));
label_21cfa0:
    // 0x21cfa0: 0xa50b8  dsll        $t2, $t2, 2
    ctx->pc = 0x21cfa0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << 2);
label_21cfa4:
    // 0x21cfa4: 0x147382d  daddu       $a3, $t2, $a3
    ctx->pc = 0x21cfa4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 7));
label_21cfa8:
    // 0x21cfa8: 0x73878  dsll        $a3, $a3, 1
    ctx->pc = 0x21cfa8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 1);
label_21cfac:
    // 0x21cfac: 0x25220001  addiu       $v0, $t1, 0x1
    ctx->pc = 0x21cfacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_21cfb0:
    // 0x21cfb0: 0x6b6823  subu        $t5, $v1, $t3
    ctx->pc = 0x21cfb0u;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
label_21cfb4:
    // 0x21cfb4: 0xc21023  subu        $v0, $a2, $v0
    ctx->pc = 0x21cfb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_21cfb8:
    // 0x21cfb8: 0xa25021  addu        $t2, $a1, $v0
    ctx->pc = 0x21cfb8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_21cfbc:
    // 0x21cfbc: 0x814c000c  lb          $t4, 0xC($t2)
    ctx->pc = 0x21cfbcu;
    SET_GPR_S32(ctx, 12, (int8_t)READ8(ADD32(GPR_U32(ctx, 10), 12)));
label_21cfc0:
    // 0x21cfc0: 0x25220002  addiu       $v0, $t1, 0x2
    ctx->pc = 0x21cfc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 2));
label_21cfc4:
    // 0x21cfc4: 0xc21023  subu        $v0, $a2, $v0
    ctx->pc = 0x21cfc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_21cfc8:
    // 0x21cfc8: 0xa25021  addu        $t2, $a1, $v0
    ctx->pc = 0x21cfc8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_21cfcc:
    // 0x21cfcc: 0x814b000c  lb          $t3, 0xC($t2)
    ctx->pc = 0x21cfccu;
    SET_GPR_S32(ctx, 11, (int8_t)READ8(ADD32(GPR_U32(ctx, 10), 12)));
label_21cfd0:
    // 0x21cfd0: 0x25220003  addiu       $v0, $t1, 0x3
    ctx->pc = 0x21cfd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 3));
label_21cfd4:
    // 0x21cfd4: 0xc21023  subu        $v0, $a2, $v0
    ctx->pc = 0x21cfd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_21cfd8:
    // 0x21cfd8: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x21cfd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_21cfdc:
    // 0x21cfdc: 0xd503c  dsll32      $t2, $t5, 0
    ctx->pc = 0x21cfdcu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 13) << (32 + 0));
label_21cfe0:
    // 0x21cfe0: 0xa503f  dsra32      $t2, $t2, 0
    ctx->pc = 0x21cfe0u;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 10) >> (32 + 0));
label_21cfe4:
    // 0x21cfe4: 0xea382d  daddu       $a3, $a3, $t2
    ctx->pc = 0x21cfe4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 10));
label_21cfe8:
    // 0x21cfe8: 0x804a000c  lb          $t2, 0xC($v0)
    ctx->pc = 0x21cfe8u;
    SET_GPR_S32(ctx, 10, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 12)));
label_21cfec:
    // 0x21cfec: 0x71078  dsll        $v0, $a3, 1
    ctx->pc = 0x21cfecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << 1);
label_21cff0:
    // 0x21cff0: 0x47682d  daddu       $t5, $v0, $a3
    ctx->pc = 0x21cff0u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 7));
label_21cff4:
    // 0x21cff4: 0x6c1023  subu        $v0, $v1, $t4
    ctx->pc = 0x21cff4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
label_21cff8:
    // 0x21cff8: 0xd68b8  dsll        $t5, $t5, 2
    ctx->pc = 0x21cff8u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) << 2);
label_21cffc:
    // 0x21cffc: 0x2603c  dsll32      $t4, $v0, 0
    ctx->pc = 0x21cffcu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 2) << (32 + 0));
label_21d000:
    // 0x21d000: 0x1a7382d  daddu       $a3, $t5, $a3
    ctx->pc = 0x21d000u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 7));
label_21d004:
    // 0x21d004: 0x6b1023  subu        $v0, $v1, $t3
    ctx->pc = 0x21d004u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
label_21d008:
    // 0x21d008: 0xc603f  dsra32      $t4, $t4, 0
    ctx->pc = 0x21d008u;
    SET_GPR_S64(ctx, 12, GPR_S64(ctx, 12) >> (32 + 0));
label_21d00c:
    // 0x21d00c: 0x2683c  dsll32      $t5, $v0, 0
    ctx->pc = 0x21d00cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 2) << (32 + 0));
label_21d010:
    // 0x21d010: 0x73878  dsll        $a3, $a3, 1
    ctx->pc = 0x21d010u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 1);
label_21d014:
    // 0x21d014: 0x25220004  addiu       $v0, $t1, 0x4
    ctx->pc = 0x21d014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
label_21d018:
    // 0x21d018: 0x6a5823  subu        $t3, $v1, $t2
    ctx->pc = 0x21d018u;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
label_21d01c:
    // 0x21d01c: 0xc25023  subu        $t2, $a2, $v0
    ctx->pc = 0x21d01cu;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_21d020:
    // 0x21d020: 0xec382d  daddu       $a3, $a3, $t4
    ctx->pc = 0x21d020u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 12));
label_21d024:
    // 0x21d024: 0xb103c  dsll32      $v0, $t3, 0
    ctx->pc = 0x21d024u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) << (32 + 0));
label_21d028:
    // 0x21d028: 0xaa5021  addu        $t2, $a1, $t2
    ctx->pc = 0x21d028u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 10)));
label_21d02c:
    // 0x21d02c: 0x814b000c  lb          $t3, 0xC($t2)
    ctx->pc = 0x21d02cu;
    SET_GPR_S32(ctx, 11, (int8_t)READ8(ADD32(GPR_U32(ctx, 10), 12)));
label_21d030:
    // 0x21d030: 0xd683f  dsra32      $t5, $t5, 0
    ctx->pc = 0x21d030u;
    SET_GPR_S64(ctx, 13, GPR_S64(ctx, 13) >> (32 + 0));
label_21d034:
    // 0x21d034: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x21d034u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_21d038:
    // 0x21d038: 0x75078  dsll        $t2, $a3, 1
    ctx->pc = 0x21d038u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 7) << 1);
label_21d03c:
    // 0x21d03c: 0x6b5823  subu        $t3, $v1, $t3
    ctx->pc = 0x21d03cu;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
label_21d040:
    // 0x21d040: 0x147602d  daddu       $t4, $t2, $a3
    ctx->pc = 0x21d040u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 7));
label_21d044:
    // 0x21d044: 0x252a0005  addiu       $t2, $t1, 0x5
    ctx->pc = 0x21d044u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 9), 5));
label_21d048:
    // 0x21d048: 0xc60b8  dsll        $t4, $t4, 2
    ctx->pc = 0x21d048u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) << 2);
label_21d04c:
    // 0x21d04c: 0xca5023  subu        $t2, $a2, $t2
    ctx->pc = 0x21d04cu;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 10)));
label_21d050:
    // 0x21d050: 0x187382d  daddu       $a3, $t4, $a3
    ctx->pc = 0x21d050u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 7));
label_21d054:
    // 0x21d054: 0xaa5021  addu        $t2, $a1, $t2
    ctx->pc = 0x21d054u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 10)));
label_21d058:
    // 0x21d058: 0x73878  dsll        $a3, $a3, 1
    ctx->pc = 0x21d058u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 1);
label_21d05c:
    // 0x21d05c: 0x814c000c  lb          $t4, 0xC($t2)
    ctx->pc = 0x21d05cu;
    SET_GPR_S32(ctx, 12, (int8_t)READ8(ADD32(GPR_U32(ctx, 10), 12)));
label_21d060:
    // 0x21d060: 0xed382d  daddu       $a3, $a3, $t5
    ctx->pc = 0x21d060u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 13));
label_21d064:
    // 0x21d064: 0xb683c  dsll32      $t5, $t3, 0
    ctx->pc = 0x21d064u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 11) << (32 + 0));
label_21d068:
    // 0x21d068: 0xd683f  dsra32      $t5, $t5, 0
    ctx->pc = 0x21d068u;
    SET_GPR_S64(ctx, 13, GPR_S64(ctx, 13) >> (32 + 0));
label_21d06c:
    // 0x21d06c: 0x252a0006  addiu       $t2, $t1, 0x6
    ctx->pc = 0x21d06cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 9), 6));
label_21d070:
    // 0x21d070: 0x6c6023  subu        $t4, $v1, $t4
    ctx->pc = 0x21d070u;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
label_21d074:
    // 0x21d074: 0xca5023  subu        $t2, $a2, $t2
    ctx->pc = 0x21d074u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 10)));
label_21d078:
    // 0x21d078: 0xc603c  dsll32      $t4, $t4, 0
    ctx->pc = 0x21d078u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) << (32 + 0));
label_21d07c:
    // 0x21d07c: 0xaa5021  addu        $t2, $a1, $t2
    ctx->pc = 0x21d07cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 10)));
label_21d080:
    // 0x21d080: 0xc603f  dsra32      $t4, $t4, 0
    ctx->pc = 0x21d080u;
    SET_GPR_S64(ctx, 12, GPR_S64(ctx, 12) >> (32 + 0));
label_21d084:
    // 0x21d084: 0x814b000c  lb          $t3, 0xC($t2)
    ctx->pc = 0x21d084u;
    SET_GPR_S32(ctx, 11, (int8_t)READ8(ADD32(GPR_U32(ctx, 10), 12)));
label_21d088:
    // 0x21d088: 0x75078  dsll        $t2, $a3, 1
    ctx->pc = 0x21d088u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 7) << 1);
label_21d08c:
    // 0x21d08c: 0x6b5823  subu        $t3, $v1, $t3
    ctx->pc = 0x21d08cu;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
label_21d090:
    // 0x21d090: 0x147702d  daddu       $t6, $t2, $a3
    ctx->pc = 0x21d090u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 7));
label_21d094:
    // 0x21d094: 0xb583c  dsll32      $t3, $t3, 0
    ctx->pc = 0x21d094u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) << (32 + 0));
label_21d098:
    // 0x21d098: 0xe70b8  dsll        $t6, $t6, 2
    ctx->pc = 0x21d098u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) << 2);
label_21d09c:
    // 0x21d09c: 0x252a0007  addiu       $t2, $t1, 0x7
    ctx->pc = 0x21d09cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 9), 7));
label_21d0a0:
    // 0x21d0a0: 0x1c7382d  daddu       $a3, $t6, $a3
    ctx->pc = 0x21d0a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 7));
label_21d0a4:
    // 0x21d0a4: 0xca5023  subu        $t2, $a2, $t2
    ctx->pc = 0x21d0a4u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 10)));
label_21d0a8:
    // 0x21d0a8: 0x73878  dsll        $a3, $a3, 1
    ctx->pc = 0x21d0a8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 1);
label_21d0ac:
    // 0x21d0ac: 0xb583f  dsra32      $t3, $t3, 0
    ctx->pc = 0x21d0acu;
    SET_GPR_S64(ctx, 11, GPR_S64(ctx, 11) >> (32 + 0));
label_21d0b0:
    // 0x21d0b0: 0xe2382d  daddu       $a3, $a3, $v0
    ctx->pc = 0x21d0b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 2));
label_21d0b4:
    // 0x21d0b4: 0x25290008  addiu       $t1, $t1, 0x8
    ctx->pc = 0x21d0b4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 8));
label_21d0b8:
    // 0x21d0b8: 0xaa1021  addu        $v0, $a1, $t2
    ctx->pc = 0x21d0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 10)));
label_21d0bc:
    // 0x21d0bc: 0x804a000c  lb          $t2, 0xC($v0)
    ctx->pc = 0x21d0bcu;
    SET_GPR_S32(ctx, 10, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 12)));
label_21d0c0:
    // 0x21d0c0: 0x71078  dsll        $v0, $a3, 1
    ctx->pc = 0x21d0c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << 1);
label_21d0c4:
    // 0x21d0c4: 0x6a5023  subu        $t2, $v1, $t2
    ctx->pc = 0x21d0c4u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
label_21d0c8:
    // 0x21d0c8: 0x47102d  daddu       $v0, $v0, $a3
    ctx->pc = 0x21d0c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 7));
label_21d0cc:
    // 0x21d0cc: 0xa503c  dsll32      $t2, $t2, 0
    ctx->pc = 0x21d0ccu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << (32 + 0));
label_21d0d0:
    // 0x21d0d0: 0x270b8  dsll        $t6, $v0, 2
    ctx->pc = 0x21d0d0u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 2) << 2);
label_21d0d4:
    // 0x21d0d4: 0xa503f  dsra32      $t2, $t2, 0
    ctx->pc = 0x21d0d4u;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 10) >> (32 + 0));
label_21d0d8:
    // 0x21d0d8: 0x1c7382d  daddu       $a3, $t6, $a3
    ctx->pc = 0x21d0d8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 7));
label_21d0dc:
    // 0x21d0dc: 0x29220004  slti        $v0, $t1, 0x4
    ctx->pc = 0x21d0dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)4) ? 1 : 0);
label_21d0e0:
    // 0x21d0e0: 0x73878  dsll        $a3, $a3, 1
    ctx->pc = 0x21d0e0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 1);
label_21d0e4:
    // 0x21d0e4: 0xed382d  daddu       $a3, $a3, $t5
    ctx->pc = 0x21d0e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 13));
label_21d0e8:
    // 0x21d0e8: 0x76878  dsll        $t5, $a3, 1
    ctx->pc = 0x21d0e8u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 7) << 1);
label_21d0ec:
    // 0x21d0ec: 0x1a7682d  daddu       $t5, $t5, $a3
    ctx->pc = 0x21d0ecu;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 7));
label_21d0f0:
    // 0x21d0f0: 0xd68b8  dsll        $t5, $t5, 2
    ctx->pc = 0x21d0f0u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) << 2);
label_21d0f4:
    // 0x21d0f4: 0x1a7382d  daddu       $a3, $t5, $a3
    ctx->pc = 0x21d0f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 7));
label_21d0f8:
    // 0x21d0f8: 0x73878  dsll        $a3, $a3, 1
    ctx->pc = 0x21d0f8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 1);
label_21d0fc:
    // 0x21d0fc: 0xec382d  daddu       $a3, $a3, $t4
    ctx->pc = 0x21d0fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 12));
label_21d100:
    // 0x21d100: 0x76078  dsll        $t4, $a3, 1
    ctx->pc = 0x21d100u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 7) << 1);
label_21d104:
    // 0x21d104: 0x187602d  daddu       $t4, $t4, $a3
    ctx->pc = 0x21d104u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 7));
label_21d108:
    // 0x21d108: 0xc60b8  dsll        $t4, $t4, 2
    ctx->pc = 0x21d108u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) << 2);
label_21d10c:
    // 0x21d10c: 0x187382d  daddu       $a3, $t4, $a3
    ctx->pc = 0x21d10cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 7));
label_21d110:
    // 0x21d110: 0x73878  dsll        $a3, $a3, 1
    ctx->pc = 0x21d110u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 1);
label_21d114:
    // 0x21d114: 0xeb382d  daddu       $a3, $a3, $t3
    ctx->pc = 0x21d114u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 11));
label_21d118:
    // 0x21d118: 0x75878  dsll        $t3, $a3, 1
    ctx->pc = 0x21d118u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 7) << 1);
label_21d11c:
    // 0x21d11c: 0x167582d  daddu       $t3, $t3, $a3
    ctx->pc = 0x21d11cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 7));
label_21d120:
    // 0x21d120: 0xb58b8  dsll        $t3, $t3, 2
    ctx->pc = 0x21d120u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) << 2);
label_21d124:
    // 0x21d124: 0x167382d  daddu       $a3, $t3, $a3
    ctx->pc = 0x21d124u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 7));
label_21d128:
    // 0x21d128: 0x73878  dsll        $a3, $a3, 1
    ctx->pc = 0x21d128u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 1);
label_21d12c:
    // 0x21d12c: 0x1440ff97  bnez        $v0, . + 4 + (-0x69 << 2)
label_21d130:
    if (ctx->pc == 0x21D130u) {
        ctx->pc = 0x21D130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D12Cu;
        // 0x21d130: 0xea382d  daddu       $a3, $a3, $t2 (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21D134u;
        goto label_21d134;
    }
    ctx->pc = 0x21D12Cu;
    {
        const bool branch_taken_0x21d12c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21D130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D12Cu;
        // 0x21d130: 0xea382d  daddu       $a3, $a3, $t2 (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d12c) {
            ctx->pc = 0x21CF8Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21cf8c;
        }
    }
    ctx->pc = 0x21D134u;
label_21d134:
    // 0x21d134: 0x2921000c  slti        $at, $t1, 0xC
    ctx->pc = 0x21d134u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)12) ? 1 : 0);
label_21d138:
    // 0x21d138: 0x10200011  beqz        $at, . + 4 + (0x11 << 2)
label_21d13c:
    if (ctx->pc == 0x21D13Cu) {
        ctx->pc = 0x21D13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D138u;
        // 0x21d13c: 0x240a000b  addiu       $t2, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21D140u;
        goto label_21d140;
    }
    ctx->pc = 0x21D138u;
    {
        const bool branch_taken_0x21d138 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D138u;
        // 0x21d13c: 0x240a000b  addiu       $t2, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d138) {
            ctx->pc = 0x21D180u;
            goto label_21d180;
        }
    }
    ctx->pc = 0x21D140u;
label_21d140:
    // 0x21d140: 0x2406005a  addiu       $a2, $zero, 0x5A
    ctx->pc = 0x21d140u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
label_21d144:
    // 0x21d144: 0x71878  dsll        $v1, $a3, 1
    ctx->pc = 0x21d144u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) << 1);
label_21d148:
    // 0x21d148: 0x1491023  subu        $v0, $t2, $t1
    ctx->pc = 0x21d148u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
label_21d14c:
    // 0x21d14c: 0x67182d  daddu       $v1, $v1, $a3
    ctx->pc = 0x21d14cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 7));
label_21d150:
    // 0x21d150: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x21d150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_21d154:
    // 0x21d154: 0x358b8  dsll        $t3, $v1, 2
    ctx->pc = 0x21d154u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 3) << 2);
label_21d158:
    // 0x21d158: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x21d158u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_21d15c:
    // 0x21d15c: 0x8043000c  lb          $v1, 0xC($v0)
    ctx->pc = 0x21d15cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 12)));
label_21d160:
    // 0x21d160: 0x167102d  daddu       $v0, $t3, $a3
    ctx->pc = 0x21d160u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 7));
label_21d164:
    // 0x21d164: 0xc31823  subu        $v1, $a2, $v1
    ctx->pc = 0x21d164u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_21d168:
    // 0x21d168: 0x23878  dsll        $a3, $v0, 1
    ctx->pc = 0x21d168u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << 1);
label_21d16c:
    // 0x21d16c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x21d16cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_21d170:
    // 0x21d170: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x21d170u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
label_21d174:
    // 0x21d174: 0x2922000c  slti        $v0, $t1, 0xC
    ctx->pc = 0x21d174u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)12) ? 1 : 0);
label_21d178:
    // 0x21d178: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
label_21d17c:
    if (ctx->pc == 0x21D17Cu) {
        ctx->pc = 0x21D17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D178u;
        // 0x21d17c: 0xe3382d  daddu       $a3, $a3, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21D180u;
        goto label_21d180;
    }
    ctx->pc = 0x21D178u;
    {
        const bool branch_taken_0x21d178 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21D17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D178u;
        // 0x21d17c: 0xe3382d  daddu       $a3, $a3, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d178) {
            ctx->pc = 0x21D144u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21d144;
        }
    }
    ctx->pc = 0x21D180u;
label_21d180:
    // 0x21d180: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x21d180u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21d184:
    // 0x21d184: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x21d184u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21d188:
    // 0x21d188: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x21d188u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21d18c:
    // 0x21d18c: 0x3c03002d  lui         $v1, 0x2D
    ctx->pc = 0x21d18cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)45 << 16));
label_21d190:
    // 0x21d190: 0x2463e150  addiu       $v1, $v1, -0x1EB0
    ctx->pc = 0x21d190u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959440));
label_21d194:
    // 0x21d194: 0x651021  addu        $v0, $v1, $a1
    ctx->pc = 0x21d194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_21d198:
    // 0x21d198: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x21d198u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_21d19c:
    // 0x21d19c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_21d1a0:
    if (ctx->pc == 0x21D1A0u) {
        ctx->pc = 0x21D1A4u;
        goto label_21d1a4;
    }
    ctx->pc = 0x21D19Cu;
    {
        const bool branch_taken_0x21d19c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21d19c) {
            ctx->pc = 0x21D1B8u;
            goto label_21d1b8;
        }
    }
    ctx->pc = 0x21D1A4u;
label_21d1a4:
    // 0x21d1a4: 0x1221014  dsllv       $v0, $v0, $t1
    ctx->pc = 0x21d1a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 9) & 0x3F));
label_21d1a8:
    // 0x21d1a8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x21d1a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_21d1ac:
    // 0x21d1ac: 0xc2302d  daddu       $a2, $a2, $v0
    ctx->pc = 0x21d1acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 2));
label_21d1b0:
    // 0x21d1b0: 0x1000fff8  b           . + 4 + (-0x8 << 2)
label_21d1b4:
    if (ctx->pc == 0x21D1B4u) {
        ctx->pc = 0x21D1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D1B0u;
        // 0x21d1b4: 0x25290008  addiu       $t1, $t1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21D1B8u;
        goto label_21d1b8;
    }
    ctx->pc = 0x21D1B0u;
    {
        const bool branch_taken_0x21d1b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D1B0u;
        // 0x21d1b4: 0x25290008  addiu       $t1, $t1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d1b0) {
            ctx->pc = 0x21D194u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21d194;
        }
    }
    ctx->pc = 0x21D1B8u;
label_21d1b8:
    // 0x21d1b8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x21d1b8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21d1bc:
    // 0x21d1bc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x21d1bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21d1c0:
    // 0x21d1c0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x21d1c0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21d1c4:
    // 0x21d1c4: 0x3c03002d  lui         $v1, 0x2D
    ctx->pc = 0x21d1c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)45 << 16));
label_21d1c8:
    // 0x21d1c8: 0x2463e158  addiu       $v1, $v1, -0x1EA8
    ctx->pc = 0x21d1c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959448));
label_21d1cc:
    // 0x21d1cc: 0x651021  addu        $v0, $v1, $a1
    ctx->pc = 0x21d1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_21d1d0:
    // 0x21d1d0: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x21d1d0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_21d1d4:
    // 0x21d1d4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_21d1d8:
    if (ctx->pc == 0x21D1D8u) {
        ctx->pc = 0x21D1DCu;
        goto label_21d1dc;
    }
    ctx->pc = 0x21D1D4u;
    {
        const bool branch_taken_0x21d1d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21d1d4) {
            ctx->pc = 0x21D1F0u;
            goto label_21d1f0;
        }
    }
    ctx->pc = 0x21D1DCu;
label_21d1dc:
    // 0x21d1dc: 0x1421014  dsllv       $v0, $v0, $t2
    ctx->pc = 0x21d1dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 10) & 0x3F));
label_21d1e0:
    // 0x21d1e0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x21d1e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_21d1e4:
    // 0x21d1e4: 0x122482d  daddu       $t1, $t1, $v0
    ctx->pc = 0x21d1e4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 2));
label_21d1e8:
    // 0x21d1e8: 0x1000fff8  b           . + 4 + (-0x8 << 2)
label_21d1ec:
    if (ctx->pc == 0x21D1ECu) {
        ctx->pc = 0x21D1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D1E8u;
        // 0x21d1ec: 0x254a0008  addiu       $t2, $t2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21D1F0u;
        goto label_21d1f0;
    }
    ctx->pc = 0x21D1E8u;
    {
        const bool branch_taken_0x21d1e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D1E8u;
        // 0x21d1ec: 0x254a0008  addiu       $t2, $t2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d1e8) {
            ctx->pc = 0x21D1CCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21d1cc;
        }
    }
    ctx->pc = 0x21D1F0u;
label_21d1f0:
    // 0x21d1f0: 0x1064026  xor         $t0, $t0, $a2
    ctx->pc = 0x21d1f0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) ^ GPR_U64(ctx, 6));
label_21d1f4:
    // 0x21d1f4: 0xfc880000  sd          $t0, 0x0($a0)
    ctx->pc = 0x21d1f4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 8));
label_21d1f8:
    // 0x21d1f8: 0xe93826  xor         $a3, $a3, $t1
    ctx->pc = 0x21d1f8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) ^ GPR_U64(ctx, 9));
label_21d1fc:
    // 0x21d1fc: 0xfc870008  sd          $a3, 0x8($a0)
    ctx->pc = 0x21d1fcu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 7));
label_21d200:
    // 0x21d200: 0x3e00008  jr          $ra
label_21d204:
    if (ctx->pc == 0x21D204u) {
        ctx->pc = 0x21D204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D200u;
        // 0x21d204: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21D208u;
        goto label_21d208;
    }
    ctx->pc = 0x21D200u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21D204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D200u;
        // 0x21d204: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21D200u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21D208u;
label_21d208:
    // 0x21d208: 0x0  nop
    ctx->pc = 0x21d208u;
    // NOP
label_21d20c:
    // 0x21d20c: 0x0  nop
    ctx->pc = 0x21d20cu;
    // NOP
label_21d210:
    // 0x21d210: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x21d210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_21d214:
    // 0x21d214: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x21d214u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21d218:
    // 0x21d218: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x21d218u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_21d21c:
    // 0x21d21c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x21d21cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21d220:
    // 0x21d220: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x21d220u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_21d224:
    // 0x21d224: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x21d224u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_21d228:
    // 0x21d228: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x21d228u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_21d22c:
    // 0x21d22c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x21d22cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_21d230:
    // 0x21d230: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x21d230u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21d234:
    // 0x21d234: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x21d234u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_21d238:
    // 0x21d238: 0x3c03002d  lui         $v1, 0x2D
    ctx->pc = 0x21d238u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)45 << 16));
label_21d23c:
    // 0x21d23c: 0x2463e150  addiu       $v1, $v1, -0x1EB0
    ctx->pc = 0x21d23cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959440));
label_21d240:
    // 0x21d240: 0x651021  addu        $v0, $v1, $a1
    ctx->pc = 0x21d240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_21d244:
    // 0x21d244: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x21d244u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_21d248:
    // 0x21d248: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_21d24c:
    if (ctx->pc == 0x21D24Cu) {
        ctx->pc = 0x21D250u;
        goto label_21d250;
    }
    ctx->pc = 0x21D248u;
    {
        const bool branch_taken_0x21d248 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21d248) {
            ctx->pc = 0x21D264u;
            goto label_21d264;
        }
    }
    ctx->pc = 0x21D250u;
label_21d250:
    // 0x21d250: 0xe21014  dsllv       $v0, $v0, $a3
    ctx->pc = 0x21d250u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 7) & 0x3F));
label_21d254:
    // 0x21d254: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x21d254u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_21d258:
    // 0x21d258: 0xc2302d  daddu       $a2, $a2, $v0
    ctx->pc = 0x21d258u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 2));
label_21d25c:
    // 0x21d25c: 0x1000fff8  b           . + 4 + (-0x8 << 2)
label_21d260:
    if (ctx->pc == 0x21D260u) {
        ctx->pc = 0x21D260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D25Cu;
        // 0x21d260: 0x24e70008  addiu       $a3, $a3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21D264u;
        goto label_21d264;
    }
    ctx->pc = 0x21D25Cu;
    {
        const bool branch_taken_0x21d25c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D25Cu;
        // 0x21d260: 0x24e70008  addiu       $a3, $a3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d25c) {
            ctx->pc = 0x21D240u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21d240;
        }
    }
    ctx->pc = 0x21D264u;
label_21d264:
    // 0x21d264: 0x0  nop
    ctx->pc = 0x21d264u;
    // NOP
label_21d268:
    // 0x21d268: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x21d268u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21d26c:
    // 0x21d26c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x21d26cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21d270:
    // 0x21d270: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x21d270u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21d274:
    // 0x21d274: 0x3c03002d  lui         $v1, 0x2D
    ctx->pc = 0x21d274u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)45 << 16));
label_21d278:
    // 0x21d278: 0x2463e158  addiu       $v1, $v1, -0x1EA8
    ctx->pc = 0x21d278u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959448));
label_21d27c:
    // 0x21d27c: 0x651021  addu        $v0, $v1, $a1
    ctx->pc = 0x21d27cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_21d280:
    // 0x21d280: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x21d280u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_21d284:
    // 0x21d284: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_21d288:
    if (ctx->pc == 0x21D288u) {
        ctx->pc = 0x21D28Cu;
        goto label_21d28c;
    }
    ctx->pc = 0x21D284u;
    {
        const bool branch_taken_0x21d284 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21d284) {
            ctx->pc = 0x21D2A0u;
            goto label_21d2a0;
        }
    }
    ctx->pc = 0x21D28Cu;
label_21d28c:
    // 0x21d28c: 0x1021014  dsllv       $v0, $v0, $t0
    ctx->pc = 0x21d28cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 8) & 0x3F));
label_21d290:
    // 0x21d290: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x21d290u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_21d294:
    // 0x21d294: 0xe2382d  daddu       $a3, $a3, $v0
    ctx->pc = 0x21d294u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 2));
label_21d298:
    // 0x21d298: 0x1000fff8  b           . + 4 + (-0x8 << 2)
label_21d29c:
    if (ctx->pc == 0x21D29Cu) {
        ctx->pc = 0x21D29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D298u;
        // 0x21d29c: 0x25080008  addiu       $t0, $t0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21D2A0u;
        goto label_21d2a0;
    }
    ctx->pc = 0x21D298u;
    {
        const bool branch_taken_0x21d298 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D298u;
        // 0x21d29c: 0x25080008  addiu       $t0, $t0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d298) {
            ctx->pc = 0x21D27Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21d27c;
        }
    }
    ctx->pc = 0x21D2A0u;
label_21d2a0:
    // 0x21d2a0: 0xdc830000  ld          $v1, 0x0($a0)
    ctx->pc = 0x21d2a0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 0)));
label_21d2a4:
    // 0x21d2a4: 0xdc820008  ld          $v0, 0x8($a0)
    ctx->pc = 0x21d2a4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 8)));
label_21d2a8:
    // 0x21d2a8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x21d2a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21d2ac:
    // 0x21d2ac: 0x668826  xor         $s1, $v1, $a2
    ctx->pc = 0x21d2acu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 6));
label_21d2b0:
    // 0x21d2b0: 0x479026  xor         $s2, $v0, $a3
    ctx->pc = 0x21d2b0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 7));
label_21d2b4:
    // 0x21d2b4: 0x2405001a  addiu       $a1, $zero, 0x1A
    ctx->pc = 0x21d2b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
label_21d2b8:
    // 0x21d2b8: 0xc06d9fe  jal         func_1B67F8
label_21d2bc:
    if (ctx->pc == 0x21D2BCu) {
        ctx->pc = 0x21D2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D2B8u;
        // 0x21d2bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21D2C0u;
        goto label_21d2c0;
    }
    ctx->pc = 0x21D2B8u;
    SET_GPR_U32(ctx, 31, 0x21D2C0u);
    ctx->pc = 0x21D2BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D2B8u;
    // 0x21d2bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B67F8u;
    { ctx->pc = 0x1b67f8; return; }
    ctx->pc = 0x21D2C0u;
label_21d2c0:
    // 0x21d2c0: 0x64420041  daddiu      $v0, $v0, 0x41
    ctx->pc = 0x21d2c0u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)65);
label_21d2c4:
    // 0x21d2c4: 0x2405001a  addiu       $a1, $zero, 0x1A
    ctx->pc = 0x21d2c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
label_21d2c8:
    // 0x21d2c8: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x21d2c8u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
label_21d2cc:
    // 0x21d2cc: 0xc06d89e  jal         func_1B6278
label_21d2d0:
    if (ctx->pc == 0x21D2D0u) {
        ctx->pc = 0x21D2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D2CCu;
        // 0x21d2d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21D2D4u;
        goto label_21d2d4;
    }
    ctx->pc = 0x21D2CCu;
    SET_GPR_U32(ctx, 31, 0x21D2D4u);
    ctx->pc = 0x21D2D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D2CCu;
    // 0x21d2d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6278u;
    { ctx->pc = 0x1b6278; return; }
    ctx->pc = 0x21D2D4u;
label_21d2d4:
    // 0x21d2d4: 0x2405001a  addiu       $a1, $zero, 0x1A
    ctx->pc = 0x21d2d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
label_21d2d8:
    // 0x21d2d8: 0xc06d9fe  jal         func_1B67F8
label_21d2dc:
    if (ctx->pc == 0x21D2DCu) {
        ctx->pc = 0x21D2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D2D8u;
        // 0x21d2dc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21D2E0u;
        goto label_21d2e0;
    }
    ctx->pc = 0x21D2D8u;
    SET_GPR_U32(ctx, 31, 0x21D2E0u);
    ctx->pc = 0x21D2DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D2D8u;
    // 0x21d2dc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B67F8u;
    { ctx->pc = 0x1b67f8; return; }
    ctx->pc = 0x21D2E0u;
label_21d2e0:
    // 0x21d2e0: 0x64420041  daddiu      $v0, $v0, 0x41
    ctx->pc = 0x21d2e0u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)65);
label_21d2e4:
    // 0x21d2e4: 0x240502a4  addiu       $a1, $zero, 0x2A4
    ctx->pc = 0x21d2e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 676));
label_21d2e8:
    // 0x21d2e8: 0xa2620001  sb          $v0, 0x1($s3)
    ctx->pc = 0x21d2e8u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 1), (uint8_t)GPR_U32(ctx, 2));
label_21d2ec:
    // 0x21d2ec: 0xc06d89e  jal         func_1B6278
label_21d2f0:
    if (ctx->pc == 0x21D2F0u) {
        ctx->pc = 0x21D2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D2ECu;
        // 0x21d2f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21D2F4u;
        goto label_21d2f4;
    }
    ctx->pc = 0x21D2ECu;
    SET_GPR_U32(ctx, 31, 0x21D2F4u);
    ctx->pc = 0x21D2F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D2ECu;
    // 0x21d2f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6278u;
    { ctx->pc = 0x1b6278; return; }
    ctx->pc = 0x21D2F4u;
label_21d2f4:
    // 0x21d2f4: 0x2405001a  addiu       $a1, $zero, 0x1A
    ctx->pc = 0x21d2f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
label_21d2f8:
    // 0x21d2f8: 0xc06d9fe  jal         func_1B67F8
label_21d2fc:
    if (ctx->pc == 0x21D2FCu) {
        ctx->pc = 0x21D2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D2F8u;
        // 0x21d2fc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21D300u;
        goto label_21d300;
    }
    ctx->pc = 0x21D2F8u;
    SET_GPR_U32(ctx, 31, 0x21D300u);
    ctx->pc = 0x21D2FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D2F8u;
    // 0x21d2fc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B67F8u;
    { ctx->pc = 0x1b67f8; return; }
    ctx->pc = 0x21D300u;
label_21d300:
    // 0x21d300: 0x64420041  daddiu      $v0, $v0, 0x41
    ctx->pc = 0x21d300u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)65);
label_21d304:
    // 0x21d304: 0x240544a8  addiu       $a1, $zero, 0x44A8
    ctx->pc = 0x21d304u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17576));
label_21d308:
    // 0x21d308: 0xa2620002  sb          $v0, 0x2($s3)
    ctx->pc = 0x21d308u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 2), (uint8_t)GPR_U32(ctx, 2));
label_21d30c:
    // 0x21d30c: 0xc06d89e  jal         func_1B6278
label_21d310:
    if (ctx->pc == 0x21D310u) {
        ctx->pc = 0x21D310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D30Cu;
        // 0x21d310: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21D314u;
        goto label_21d314;
    }
    ctx->pc = 0x21D30Cu;
    SET_GPR_U32(ctx, 31, 0x21D314u);
    ctx->pc = 0x21D310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D30Cu;
    // 0x21d310: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6278u;
    { ctx->pc = 0x1b6278; return; }
    ctx->pc = 0x21D314u;
label_21d314:
    // 0x21d314: 0x2405001a  addiu       $a1, $zero, 0x1A
    ctx->pc = 0x21d314u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
label_21d318:
    // 0x21d318: 0xc06d9fe  jal         func_1B67F8
label_21d31c:
    if (ctx->pc == 0x21D31Cu) {
        ctx->pc = 0x21D31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D318u;
        // 0x21d31c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21D320u;
        goto label_21d320;
    }
    ctx->pc = 0x21D318u;
    SET_GPR_U32(ctx, 31, 0x21D320u);
    ctx->pc = 0x21D31Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D318u;
    // 0x21d31c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B67F8u;
    { ctx->pc = 0x1b67f8; return; }
    ctx->pc = 0x21D320u;
label_21d320:
    // 0x21d320: 0x64430041  daddiu      $v1, $v0, 0x41
    ctx->pc = 0x21d320u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)65);
label_21d324:
    // 0x21d324: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21d324u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_21d328:
    // 0x21d328: 0x3c020006  lui         $v0, 0x6
    ctx->pc = 0x21d328u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)6 << 16));
label_21d32c:
    // 0x21d32c: 0xa2630003  sb          $v1, 0x3($s3)
    ctx->pc = 0x21d32cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 3), (uint8_t)GPR_U32(ctx, 3));
label_21d330:
    // 0x21d330: 0xc06d89e  jal         func_1B6278
label_21d334:
    if (ctx->pc == 0x21D334u) {
        ctx->pc = 0x21D334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D330u;
        // 0x21d334: 0x3445f910  ori         $a1, $v0, 0xF910 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63760);
        ctx->in_delay_slot = false;
        ctx->pc = 0x21D338u;
        goto label_21d338;
    }
    ctx->pc = 0x21D330u;
    SET_GPR_U32(ctx, 31, 0x21D338u);
    ctx->pc = 0x21D334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D330u;
    // 0x21d334: 0x3445f910  ori         $a1, $v0, 0xF910 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63760);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6278u;
    { ctx->pc = 0x1b6278; return; }
    ctx->pc = 0x21D338u;
label_21d338:
    // 0x21d338: 0x2405001a  addiu       $a1, $zero, 0x1A
    ctx->pc = 0x21d338u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
label_21d33c:
    // 0x21d33c: 0xc06d9fe  jal         func_1B67F8
label_21d340:
    if (ctx->pc == 0x21D340u) {
        ctx->pc = 0x21D340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D33Cu;
        // 0x21d340: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21D344u;
        goto label_21d344;
    }
    ctx->pc = 0x21D33Cu;
    SET_GPR_U32(ctx, 31, 0x21D344u);
    ctx->pc = 0x21D340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D33Cu;
    // 0x21d340: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B67F8u;
    { ctx->pc = 0x1b67f8; return; }
    ctx->pc = 0x21D344u;
label_21d344:
    // 0x21d344: 0x64430041  daddiu      $v1, $v0, 0x41
    ctx->pc = 0x21d344u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)65);
label_21d348:
    // 0x21d348: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21d348u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_21d34c:
    // 0x21d34c: 0x3c0200b5  lui         $v0, 0xB5
    ctx->pc = 0x21d34cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)181 << 16));
label_21d350:
    // 0x21d350: 0xa2630004  sb          $v1, 0x4($s3)
    ctx->pc = 0x21d350u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 4), (uint8_t)GPR_U32(ctx, 3));
label_21d354:
    // 0x21d354: 0xc06d89e  jal         func_1B6278
label_21d358:
    if (ctx->pc == 0x21D358u) {
        ctx->pc = 0x21D358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D354u;
        // 0x21d358: 0x34454ba0  ori         $a1, $v0, 0x4BA0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)19360);
        ctx->in_delay_slot = false;
        ctx->pc = 0x21D35Cu;
        goto label_21d35c;
    }
    ctx->pc = 0x21D354u;
    SET_GPR_U32(ctx, 31, 0x21D35Cu);
    ctx->pc = 0x21D358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D354u;
    // 0x21d358: 0x34454ba0  ori         $a1, $v0, 0x4BA0 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)19360);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6278u;
    { ctx->pc = 0x1b6278; return; }
    ctx->pc = 0x21D35Cu;
label_21d35c:
    // 0x21d35c: 0x2405001a  addiu       $a1, $zero, 0x1A
    ctx->pc = 0x21d35cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
label_21d360:
    // 0x21d360: 0xc06d9fe  jal         func_1B67F8
label_21d364:
    if (ctx->pc == 0x21D364u) {
        ctx->pc = 0x21D364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D360u;
        // 0x21d364: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21D368u;
        goto label_21d368;
    }
    ctx->pc = 0x21D360u;
    SET_GPR_U32(ctx, 31, 0x21D368u);
    ctx->pc = 0x21D364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D360u;
    // 0x21d364: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B67F8u;
    { ctx->pc = 0x1b67f8; return; }
    ctx->pc = 0x21D368u;
label_21d368:
    // 0x21d368: 0x64430041  daddiu      $v1, $v0, 0x41
    ctx->pc = 0x21d368u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)65);
label_21d36c:
    // 0x21d36c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21d36cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_21d370:
    // 0x21d370: 0x3c021269  lui         $v0, 0x1269
    ctx->pc = 0x21d370u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4713 << 16));
label_21d374:
    // 0x21d374: 0xa2630005  sb          $v1, 0x5($s3)
    ctx->pc = 0x21d374u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 5), (uint8_t)GPR_U32(ctx, 3));
label_21d378:
    // 0x21d378: 0xc06d89e  jal         func_1B6278
label_21d37c:
    if (ctx->pc == 0x21D37Cu) {
        ctx->pc = 0x21D37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D378u;
        // 0x21d37c: 0x3445ae40  ori         $a1, $v0, 0xAE40 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)44608);
        ctx->in_delay_slot = false;
        ctx->pc = 0x21D380u;
        goto label_21d380;
    }
    ctx->pc = 0x21D378u;
    SET_GPR_U32(ctx, 31, 0x21D380u);
    ctx->pc = 0x21D37Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D378u;
    // 0x21d37c: 0x3445ae40  ori         $a1, $v0, 0xAE40 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)44608);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6278u;
    { ctx->pc = 0x1b6278; return; }
    ctx->pc = 0x21D380u;
label_21d380:
    // 0x21d380: 0x2405001a  addiu       $a1, $zero, 0x1A
    ctx->pc = 0x21d380u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
label_21d384:
    // 0x21d384: 0xc06d9fe  jal         func_1B67F8
label_21d388:
    if (ctx->pc == 0x21D388u) {
        ctx->pc = 0x21D388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D384u;
        // 0x21d388: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21D38Cu;
        goto label_21d38c;
    }
    ctx->pc = 0x21D384u;
    SET_GPR_U32(ctx, 31, 0x21D38Cu);
    ctx->pc = 0x21D388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D384u;
    // 0x21d388: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B67F8u;
    { ctx->pc = 0x1b67f8; return; }
    ctx->pc = 0x21D38Cu;
label_21d38c:
    // 0x21d38c: 0x64430041  daddiu      $v1, $v0, 0x41
    ctx->pc = 0x21d38cu;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)65);
label_21d390:
    // 0x21d390: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21d390u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_21d394:
    // 0x21d394: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21d394u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21d398:
    // 0x21d398: 0xa2630006  sb          $v1, 0x6($s3)
    ctx->pc = 0x21d398u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 6), (uint8_t)GPR_U32(ctx, 3));
label_21d39c:
    // 0x21d39c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x21d39cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_21d3a0:
    // 0x21d3a0: 0x3402debb  ori         $v0, $zero, 0xDEBB
    ctx->pc = 0x21d3a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)57019);
label_21d3a4:
    // 0x21d3a4: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x21d3a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_21d3a8:
    // 0x21d3a8: 0x3442b280  ori         $v0, $v0, 0xB280
    ctx->pc = 0x21d3a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45696);
label_21d3ac:
    // 0x21d3ac: 0xc06d89e  jal         func_1B6278
label_21d3b0:
    if (ctx->pc == 0x21D3B0u) {
        ctx->pc = 0x21D3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D3ACu;
        // 0x21d3b0: 0x432825  or          $a1, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21D3B4u;
        goto label_21d3b4;
    }
    ctx->pc = 0x21D3ACu;
    SET_GPR_U32(ctx, 31, 0x21D3B4u);
    ctx->pc = 0x21D3B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D3ACu;
    // 0x21d3b0: 0x432825  or          $a1, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6278u;
    { ctx->pc = 0x1b6278; return; }
    ctx->pc = 0x21D3B4u;
label_21d3b4:
    // 0x21d3b4: 0x2405001a  addiu       $a1, $zero, 0x1A
    ctx->pc = 0x21d3b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
label_21d3b8:
    // 0x21d3b8: 0xc06d9fe  jal         func_1B67F8
label_21d3bc:
    if (ctx->pc == 0x21D3BCu) {
        ctx->pc = 0x21D3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D3B8u;
        // 0x21d3bc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21D3C0u;
        goto label_21d3c0;
    }
    ctx->pc = 0x21D3B8u;
    SET_GPR_U32(ctx, 31, 0x21D3C0u);
    ctx->pc = 0x21D3BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D3B8u;
    // 0x21d3bc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B67F8u;
    { ctx->pc = 0x1b67f8; return; }
    ctx->pc = 0x21D3C0u;
label_21d3c0:
    // 0x21d3c0: 0x64420041  daddiu      $v0, $v0, 0x41
    ctx->pc = 0x21d3c0u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)65);
label_21d3c4:
    // 0x21d3c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21d3c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_21d3c8:
    // 0x21d3c8: 0xa2620007  sb          $v0, 0x7($s3)
    ctx->pc = 0x21d3c8u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 7), (uint8_t)GPR_U32(ctx, 2));
label_21d3cc:
    // 0x21d3cc: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x21d3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_21d3d0:
    // 0x21d3d0: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x21d3d0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
label_21d3d4:
    // 0x21d3d4: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x21d3d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_21d3d8:
    // 0x21d3d8: 0x34029f10  ori         $v0, $zero, 0x9F10
    ctx->pc = 0x21d3d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)40720);
label_21d3dc:
    // 0x21d3dc: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x21d3dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_21d3e0:
    // 0x21d3e0: 0x34422100  ori         $v0, $v0, 0x2100
    ctx->pc = 0x21d3e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8448);
label_21d3e4:
    // 0x21d3e4: 0xc06d89e  jal         func_1B6278
label_21d3e8:
    if (ctx->pc == 0x21D3E8u) {
        ctx->pc = 0x21D3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D3E4u;
        // 0x21d3e8: 0x432825  or          $a1, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21D3ECu;
        goto label_21d3ec;
    }
    ctx->pc = 0x21D3E4u;
    SET_GPR_U32(ctx, 31, 0x21D3ECu);
    ctx->pc = 0x21D3E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D3E4u;
    // 0x21d3e8: 0x432825  or          $a1, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6278u;
    { ctx->pc = 0x1b6278; return; }
    ctx->pc = 0x21D3ECu;
label_21d3ec:
    // 0x21d3ec: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x21d3ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_21d3f0:
    // 0x21d3f0: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x21d3f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_21d3f4:
    // 0x21d3f4: 0x2a020004  slti        $v0, $s0, 0x4
    ctx->pc = 0x21d3f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
label_21d3f8:
    // 0x21d3f8: 0x1440ffaf  bnez        $v0, . + 4 + (-0x51 << 2)
label_21d3fc:
    if (ctx->pc == 0x21D3FCu) {
        ctx->pc = 0x21D3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D3F8u;
        // 0x21d3fc: 0x2405001a  addiu       $a1, $zero, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21D400u;
        goto label_21d400;
    }
    ctx->pc = 0x21D3F8u;
    {
        const bool branch_taken_0x21d3f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21D3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D3F8u;
        // 0x21d3fc: 0x2405001a  addiu       $a1, $zero, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d3f8) {
            ctx->pc = 0x21D2B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21d2b8;
        }
    }
    ctx->pc = 0x21D400u;
label_21d400:
    // 0x21d400: 0x2a01000c  slti        $at, $s0, 0xC
    ctx->pc = 0x21d400u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)12) ? 1 : 0);
label_21d404:
    // 0x21d404: 0x1020000f  beqz        $at, . + 4 + (0xF << 2)
label_21d408:
    if (ctx->pc == 0x21D408u) {
        ctx->pc = 0x21D40Cu;
        goto label_21d40c;
    }
    ctx->pc = 0x21D404u;
    {
        const bool branch_taken_0x21d404 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x21d404) {
            ctx->pc = 0x21D444u;
            goto label_21d444;
        }
    }
    ctx->pc = 0x21D40Cu;
label_21d40c:
    // 0x21d40c: 0x2405001a  addiu       $a1, $zero, 0x1A
    ctx->pc = 0x21d40cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
label_21d410:
    // 0x21d410: 0xc06d9fe  jal         func_1B67F8
label_21d414:
    if (ctx->pc == 0x21D414u) {
        ctx->pc = 0x21D414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D410u;
        // 0x21d414: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21D418u;
        goto label_21d418;
    }
    ctx->pc = 0x21D410u;
    SET_GPR_U32(ctx, 31, 0x21D418u);
    ctx->pc = 0x21D414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D410u;
    // 0x21d414: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B67F8u;
    { ctx->pc = 0x1b67f8; return; }
    ctx->pc = 0x21D418u;
label_21d418:
    // 0x21d418: 0x64420041  daddiu      $v0, $v0, 0x41
    ctx->pc = 0x21d418u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)65);
label_21d41c:
    // 0x21d41c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21d41cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_21d420:
    // 0x21d420: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x21d420u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
label_21d424:
    // 0x21d424: 0x2405001a  addiu       $a1, $zero, 0x1A
    ctx->pc = 0x21d424u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
label_21d428:
    // 0x21d428: 0xc06d89e  jal         func_1B6278
label_21d42c:
    if (ctx->pc == 0x21D42Cu) {
        ctx->pc = 0x21D42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D428u;
        // 0x21d42c: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21D430u;
        goto label_21d430;
    }
    ctx->pc = 0x21D428u;
    SET_GPR_U32(ctx, 31, 0x21D430u);
    ctx->pc = 0x21D42Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D428u;
    // 0x21d42c: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6278u;
    { ctx->pc = 0x1b6278; return; }
    ctx->pc = 0x21D430u;
label_21d430:
    // 0x21d430: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x21d430u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_21d434:
    // 0x21d434: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x21d434u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_21d438:
    // 0x21d438: 0x2a02000c  slti        $v0, $s0, 0xC
    ctx->pc = 0x21d438u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)12) ? 1 : 0);
label_21d43c:
    // 0x21d43c: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_21d440:
    if (ctx->pc == 0x21D440u) {
        ctx->pc = 0x21D440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D43Cu;
        // 0x21d440: 0x2405001a  addiu       $a1, $zero, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21D444u;
        goto label_21d444;
    }
    ctx->pc = 0x21D43Cu;
    {
        const bool branch_taken_0x21d43c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21D440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D43Cu;
        // 0x21d440: 0x2405001a  addiu       $a1, $zero, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d43c) {
            ctx->pc = 0x21D410u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21d410;
        }
    }
    ctx->pc = 0x21D444u;
label_21d444:
    // 0x21d444: 0x0  nop
    ctx->pc = 0x21d444u;
    // NOP
label_21d448:
    // 0x21d448: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x21d448u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21d44c:
    // 0x21d44c: 0x2405001a  addiu       $a1, $zero, 0x1A
    ctx->pc = 0x21d44cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
label_21d450:
    // 0x21d450: 0xc06d9fe  jal         func_1B67F8
label_21d454:
    if (ctx->pc == 0x21D454u) {
        ctx->pc = 0x21D454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D450u;
        // 0x21d454: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21D458u;
        goto label_21d458;
    }
    ctx->pc = 0x21D450u;
    SET_GPR_U32(ctx, 31, 0x21D458u);
    ctx->pc = 0x21D454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D450u;
    // 0x21d454: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B67F8u;
    { ctx->pc = 0x1b67f8; return; }
    ctx->pc = 0x21D458u;
label_21d458:
    // 0x21d458: 0x2403005a  addiu       $v1, $zero, 0x5A
    ctx->pc = 0x21d458u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
label_21d45c:
    // 0x21d45c: 0x2405001a  addiu       $a1, $zero, 0x1A
    ctx->pc = 0x21d45cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
label_21d460:
    // 0x21d460: 0x62102f  dsubu       $v0, $v1, $v0
    ctx->pc = 0x21d460u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) - GPR_U64(ctx, 2));
label_21d464:
    // 0x21d464: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x21d464u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_21d468:
    // 0x21d468: 0xc06d89e  jal         func_1B6278
label_21d46c:
    if (ctx->pc == 0x21D46Cu) {
        ctx->pc = 0x21D46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D468u;
        // 0x21d46c: 0xa2620000  sb          $v0, 0x0($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21D470u;
        goto label_21d470;
    }
    ctx->pc = 0x21D468u;
    SET_GPR_U32(ctx, 31, 0x21D470u);
    ctx->pc = 0x21D46Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D468u;
    // 0x21d46c: 0xa2620000  sb          $v0, 0x0($s3) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6278u;
    { ctx->pc = 0x1b6278; return; }
    ctx->pc = 0x21D470u;
label_21d470:
    // 0x21d470: 0x2405001a  addiu       $a1, $zero, 0x1A
    ctx->pc = 0x21d470u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
label_21d474:
    // 0x21d474: 0xc06d9fe  jal         func_1B67F8
label_21d478:
    if (ctx->pc == 0x21D478u) {
        ctx->pc = 0x21D478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D474u;
        // 0x21d478: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21D47Cu;
        goto label_21d47c;
    }
    ctx->pc = 0x21D474u;
    SET_GPR_U32(ctx, 31, 0x21D47Cu);
    ctx->pc = 0x21D478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D474u;
    // 0x21d478: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B67F8u;
    { ctx->pc = 0x1b67f8; return; }
    ctx->pc = 0x21D47Cu;
label_21d47c:
    // 0x21d47c: 0x2403005a  addiu       $v1, $zero, 0x5A
    ctx->pc = 0x21d47cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
label_21d480:
    // 0x21d480: 0x240502a4  addiu       $a1, $zero, 0x2A4
    ctx->pc = 0x21d480u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 676));
label_21d484:
    // 0x21d484: 0x62102f  dsubu       $v0, $v1, $v0
    ctx->pc = 0x21d484u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) - GPR_U64(ctx, 2));
label_21d488:
    // 0x21d488: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x21d488u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_21d48c:
    // 0x21d48c: 0xc06d89e  jal         func_1B6278
label_21d490:
    if (ctx->pc == 0x21D490u) {
        ctx->pc = 0x21D490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D48Cu;
        // 0x21d490: 0xa2620001  sb          $v0, 0x1($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 1), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21D494u;
        goto label_21d494;
    }
    ctx->pc = 0x21D48Cu;
    SET_GPR_U32(ctx, 31, 0x21D494u);
    ctx->pc = 0x21D490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D48Cu;
    // 0x21d490: 0xa2620001  sb          $v0, 0x1($s3) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 19), 1), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6278u;
    { ctx->pc = 0x1b6278; return; }
    ctx->pc = 0x21D494u;
label_21d494:
    // 0x21d494: 0x2405001a  addiu       $a1, $zero, 0x1A
    ctx->pc = 0x21d494u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
label_21d498:
    // 0x21d498: 0xc06d9fe  jal         func_1B67F8
label_21d49c:
    if (ctx->pc == 0x21D49Cu) {
        ctx->pc = 0x21D49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D498u;
        // 0x21d49c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21D4A0u;
        goto label_21d4a0;
    }
    ctx->pc = 0x21D498u;
    SET_GPR_U32(ctx, 31, 0x21D4A0u);
    ctx->pc = 0x21D49Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D498u;
    // 0x21d49c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B67F8u;
    { ctx->pc = 0x1b67f8; return; }
    ctx->pc = 0x21D4A0u;
label_21d4a0:
    // 0x21d4a0: 0x2403005a  addiu       $v1, $zero, 0x5A
    ctx->pc = 0x21d4a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
label_21d4a4:
    // 0x21d4a4: 0x240544a8  addiu       $a1, $zero, 0x44A8
    ctx->pc = 0x21d4a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17576));
label_21d4a8:
    // 0x21d4a8: 0x62102f  dsubu       $v0, $v1, $v0
    ctx->pc = 0x21d4a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) - GPR_U64(ctx, 2));
label_21d4ac:
    // 0x21d4ac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x21d4acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_21d4b0:
    // 0x21d4b0: 0xc06d89e  jal         func_1B6278
label_21d4b4:
    if (ctx->pc == 0x21D4B4u) {
        ctx->pc = 0x21D4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D4B0u;
        // 0x21d4b4: 0xa2620002  sb          $v0, 0x2($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 2), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21D4B8u;
        goto label_21d4b8;
    }
    ctx->pc = 0x21D4B0u;
    SET_GPR_U32(ctx, 31, 0x21D4B8u);
    ctx->pc = 0x21D4B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D4B0u;
    // 0x21d4b4: 0xa2620002  sb          $v0, 0x2($s3) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 19), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6278u;
    { ctx->pc = 0x1b6278; return; }
    ctx->pc = 0x21D4B8u;
label_21d4b8:
    // 0x21d4b8: 0x2405001a  addiu       $a1, $zero, 0x1A
    ctx->pc = 0x21d4b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
label_21d4bc:
    // 0x21d4bc: 0xc06d9fe  jal         func_1B67F8
label_21d4c0:
    if (ctx->pc == 0x21D4C0u) {
        ctx->pc = 0x21D4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D4BCu;
        // 0x21d4c0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21D4C4u;
        goto label_21d4c4;
    }
    ctx->pc = 0x21D4BCu;
    SET_GPR_U32(ctx, 31, 0x21D4C4u);
    ctx->pc = 0x21D4C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D4BCu;
    // 0x21d4c0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B67F8u;
    { ctx->pc = 0x1b67f8; return; }
    ctx->pc = 0x21D4C4u;
label_21d4c4:
    // 0x21d4c4: 0x2404005a  addiu       $a0, $zero, 0x5A
    ctx->pc = 0x21d4c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
label_21d4c8:
    // 0x21d4c8: 0x3c030006  lui         $v1, 0x6
    ctx->pc = 0x21d4c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)6 << 16));
label_21d4cc:
    // 0x21d4cc: 0x82102f  dsubu       $v0, $a0, $v0
    ctx->pc = 0x21d4ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) - GPR_U64(ctx, 2));
label_21d4d0:
    // 0x21d4d0: 0x3465f910  ori         $a1, $v1, 0xF910
    ctx->pc = 0x21d4d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)63760);
label_21d4d4:
    // 0x21d4d4: 0xa2620003  sb          $v0, 0x3($s3)
    ctx->pc = 0x21d4d4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 3), (uint8_t)GPR_U32(ctx, 2));
label_21d4d8:
    // 0x21d4d8: 0xc06d89e  jal         func_1B6278
label_21d4dc:
    if (ctx->pc == 0x21D4DCu) {
        ctx->pc = 0x21D4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D4D8u;
        // 0x21d4dc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21D4E0u;
        goto label_21d4e0;
    }
    ctx->pc = 0x21D4D8u;
    SET_GPR_U32(ctx, 31, 0x21D4E0u);
    ctx->pc = 0x21D4DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D4D8u;
    // 0x21d4dc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6278u;
    { ctx->pc = 0x1b6278; return; }
    ctx->pc = 0x21D4E0u;
label_21d4e0:
    // 0x21d4e0: 0x2405001a  addiu       $a1, $zero, 0x1A
    ctx->pc = 0x21d4e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
label_21d4e4:
    // 0x21d4e4: 0xc06d9fe  jal         func_1B67F8
label_21d4e8:
    if (ctx->pc == 0x21D4E8u) {
        ctx->pc = 0x21D4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D4E4u;
        // 0x21d4e8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21D4ECu;
        goto label_21d4ec;
    }
    ctx->pc = 0x21D4E4u;
    SET_GPR_U32(ctx, 31, 0x21D4ECu);
    ctx->pc = 0x21D4E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D4E4u;
    // 0x21d4e8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B67F8u;
    { ctx->pc = 0x1b67f8; return; }
    ctx->pc = 0x21D4ECu;
label_21d4ec:
    // 0x21d4ec: 0x2404005a  addiu       $a0, $zero, 0x5A
    ctx->pc = 0x21d4ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
label_21d4f0:
    // 0x21d4f0: 0x3c0300b5  lui         $v1, 0xB5
    ctx->pc = 0x21d4f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)181 << 16));
label_21d4f4:
    // 0x21d4f4: 0x82102f  dsubu       $v0, $a0, $v0
    ctx->pc = 0x21d4f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) - GPR_U64(ctx, 2));
label_21d4f8:
    // 0x21d4f8: 0x34654ba0  ori         $a1, $v1, 0x4BA0
    ctx->pc = 0x21d4f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)19360);
label_21d4fc:
    // 0x21d4fc: 0xa2620004  sb          $v0, 0x4($s3)
    ctx->pc = 0x21d4fcu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 4), (uint8_t)GPR_U32(ctx, 2));
label_21d500:
    // 0x21d500: 0xc06d89e  jal         func_1B6278
label_21d504:
    if (ctx->pc == 0x21D504u) {
        ctx->pc = 0x21D504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D500u;
        // 0x21d504: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21D508u;
        goto label_21d508;
    }
    ctx->pc = 0x21D500u;
    SET_GPR_U32(ctx, 31, 0x21D508u);
    ctx->pc = 0x21D504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D500u;
    // 0x21d504: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6278u;
    { ctx->pc = 0x1b6278; return; }
    ctx->pc = 0x21D508u;
label_21d508:
    // 0x21d508: 0x2405001a  addiu       $a1, $zero, 0x1A
    ctx->pc = 0x21d508u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
label_21d50c:
    // 0x21d50c: 0xc06d9fe  jal         func_1B67F8
label_21d510:
    if (ctx->pc == 0x21D510u) {
        ctx->pc = 0x21D510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D50Cu;
        // 0x21d510: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21D514u;
        goto label_21d514;
    }
    ctx->pc = 0x21D50Cu;
    SET_GPR_U32(ctx, 31, 0x21D514u);
    ctx->pc = 0x21D510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D50Cu;
    // 0x21d510: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B67F8u;
    { ctx->pc = 0x1b67f8; return; }
    ctx->pc = 0x21D514u;
label_21d514:
    // 0x21d514: 0x2404005a  addiu       $a0, $zero, 0x5A
    ctx->pc = 0x21d514u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
label_21d518:
    // 0x21d518: 0x3c031269  lui         $v1, 0x1269
    ctx->pc = 0x21d518u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4713 << 16));
label_21d51c:
    // 0x21d51c: 0x82102f  dsubu       $v0, $a0, $v0
    ctx->pc = 0x21d51cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) - GPR_U64(ctx, 2));
label_21d520:
    // 0x21d520: 0x3465ae40  ori         $a1, $v1, 0xAE40
    ctx->pc = 0x21d520u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)44608);
label_21d524:
    // 0x21d524: 0xa2620005  sb          $v0, 0x5($s3)
    ctx->pc = 0x21d524u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 5), (uint8_t)GPR_U32(ctx, 2));
label_21d528:
    // 0x21d528: 0xc06d89e  jal         func_1B6278
label_21d52c:
    if (ctx->pc == 0x21D52Cu) {
        ctx->pc = 0x21D52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D528u;
        // 0x21d52c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21D530u;
        goto label_21d530;
    }
    ctx->pc = 0x21D528u;
    SET_GPR_U32(ctx, 31, 0x21D530u);
    ctx->pc = 0x21D52Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D528u;
    // 0x21d52c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6278u;
    { ctx->pc = 0x1b6278; return; }
    ctx->pc = 0x21D530u;
label_21d530:
    // 0x21d530: 0x2405001a  addiu       $a1, $zero, 0x1A
    ctx->pc = 0x21d530u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
label_21d534:
    // 0x21d534: 0xc06d9fe  jal         func_1B67F8
label_21d538:
    if (ctx->pc == 0x21D538u) {
        ctx->pc = 0x21D538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D534u;
        // 0x21d538: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21D53Cu;
        goto label_21d53c;
    }
    ctx->pc = 0x21D534u;
    SET_GPR_U32(ctx, 31, 0x21D53Cu);
    ctx->pc = 0x21D538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D534u;
    // 0x21d538: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B67F8u;
    { ctx->pc = 0x1b67f8; return; }
    ctx->pc = 0x21D53Cu;
label_21d53c:
    // 0x21d53c: 0x2404005a  addiu       $a0, $zero, 0x5A
    ctx->pc = 0x21d53cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
label_21d540:
    // 0x21d540: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x21d540u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21d544:
    // 0x21d544: 0x82102f  dsubu       $v0, $a0, $v0
    ctx->pc = 0x21d544u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) - GPR_U64(ctx, 2));
label_21d548:
    // 0x21d548: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x21d548u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_21d54c:
    // 0x21d54c: 0xa2620006  sb          $v0, 0x6($s3)
    ctx->pc = 0x21d54cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 6), (uint8_t)GPR_U32(ctx, 2));
label_21d550:
    // 0x21d550: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x21d550u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_21d554:
    // 0x21d554: 0x3402debb  ori         $v0, $zero, 0xDEBB
    ctx->pc = 0x21d554u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)57019);
label_21d558:
    // 0x21d558: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x21d558u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_21d55c:
    // 0x21d55c: 0x3442b280  ori         $v0, $v0, 0xB280
    ctx->pc = 0x21d55cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45696);
label_21d560:
    // 0x21d560: 0xc06d89e  jal         func_1B6278
label_21d564:
    if (ctx->pc == 0x21D564u) {
        ctx->pc = 0x21D564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D560u;
        // 0x21d564: 0x432825  or          $a1, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21D568u;
        goto label_21d568;
    }
    ctx->pc = 0x21D560u;
    SET_GPR_U32(ctx, 31, 0x21D568u);
    ctx->pc = 0x21D564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D560u;
    // 0x21d564: 0x432825  or          $a1, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6278u;
    { ctx->pc = 0x1b6278; return; }
    ctx->pc = 0x21D568u;
label_21d568:
    // 0x21d568: 0x2405001a  addiu       $a1, $zero, 0x1A
    ctx->pc = 0x21d568u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
label_21d56c:
    // 0x21d56c: 0xc06d9fe  jal         func_1B67F8
label_21d570:
    if (ctx->pc == 0x21D570u) {
        ctx->pc = 0x21D570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D56Cu;
        // 0x21d570: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21D574u;
        goto label_21d574;
    }
    ctx->pc = 0x21D56Cu;
    SET_GPR_U32(ctx, 31, 0x21D574u);
    ctx->pc = 0x21D570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D56Cu;
    // 0x21d570: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B67F8u;
    { ctx->pc = 0x1b67f8; return; }
    ctx->pc = 0x21D574u;
label_21d574:
    // 0x21d574: 0x2403005a  addiu       $v1, $zero, 0x5A
    ctx->pc = 0x21d574u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
label_21d578:
    // 0x21d578: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x21d578u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_21d57c:
    // 0x21d57c: 0x62182f  dsubu       $v1, $v1, $v0
    ctx->pc = 0x21d57cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) - GPR_U64(ctx, 2));
label_21d580:
    // 0x21d580: 0xa2630007  sb          $v1, 0x7($s3)
    ctx->pc = 0x21d580u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 7), (uint8_t)GPR_U32(ctx, 3));
label_21d584:
    // 0x21d584: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x21d584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_21d588:
    // 0x21d588: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x21d588u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_21d58c:
    // 0x21d58c: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x21d58cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
label_21d590:
    // 0x21d590: 0x34029f10  ori         $v0, $zero, 0x9F10
    ctx->pc = 0x21d590u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)40720);
label_21d594:
    // 0x21d594: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x21d594u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_21d598:
    // 0x21d598: 0x34422100  ori         $v0, $v0, 0x2100
    ctx->pc = 0x21d598u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8448);
label_21d59c:
    // 0x21d59c: 0xc06d89e  jal         func_1B6278
label_21d5a0:
    if (ctx->pc == 0x21D5A0u) {
        ctx->pc = 0x21D5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D59Cu;
        // 0x21d5a0: 0x432825  or          $a1, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21D5A4u;
        goto label_21d5a4;
    }
    ctx->pc = 0x21D59Cu;
    SET_GPR_U32(ctx, 31, 0x21D5A4u);
    ctx->pc = 0x21D5A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D59Cu;
    // 0x21d5a0: 0x432825  or          $a1, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6278u;
    { ctx->pc = 0x1b6278; return; }
    ctx->pc = 0x21D5A4u;
label_21d5a4:
    // 0x21d5a4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x21d5a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_21d5a8:
    // 0x21d5a8: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x21d5a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_21d5ac:
    // 0x21d5ac: 0x2a020004  slti        $v0, $s0, 0x4
    ctx->pc = 0x21d5acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
label_21d5b0:
    // 0x21d5b0: 0x1440ffa7  bnez        $v0, . + 4 + (-0x59 << 2)
label_21d5b4:
    if (ctx->pc == 0x21D5B4u) {
        ctx->pc = 0x21D5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D5B0u;
        // 0x21d5b4: 0x2405001a  addiu       $a1, $zero, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21D5B8u;
        goto label_21d5b8;
    }
    ctx->pc = 0x21D5B0u;
    {
        const bool branch_taken_0x21d5b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21D5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D5B0u;
        // 0x21d5b4: 0x2405001a  addiu       $a1, $zero, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d5b0) {
            ctx->pc = 0x21D450u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21d450;
        }
    }
    ctx->pc = 0x21D5B8u;
label_21d5b8:
    // 0x21d5b8: 0x2a01000c  slti        $at, $s0, 0xC
    ctx->pc = 0x21d5b8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)12) ? 1 : 0);
label_21d5bc:
    // 0x21d5bc: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
label_21d5c0:
    if (ctx->pc == 0x21D5C0u) {
        ctx->pc = 0x21D5C4u;
        goto label_21d5c4;
    }
    ctx->pc = 0x21D5BCu;
    {
        const bool branch_taken_0x21d5bc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x21d5bc) {
            ctx->pc = 0x21D600u;
            goto label_21d600;
        }
    }
    ctx->pc = 0x21D5C4u;
label_21d5c4:
    // 0x21d5c4: 0x2405001a  addiu       $a1, $zero, 0x1A
    ctx->pc = 0x21d5c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
label_21d5c8:
    // 0x21d5c8: 0xc06d9fe  jal         func_1B67F8
label_21d5cc:
    if (ctx->pc == 0x21D5CCu) {
        ctx->pc = 0x21D5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D5C8u;
        // 0x21d5cc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21D5D0u;
        goto label_21d5d0;
    }
    ctx->pc = 0x21D5C8u;
    SET_GPR_U32(ctx, 31, 0x21D5D0u);
    ctx->pc = 0x21D5CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D5C8u;
    // 0x21d5cc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B67F8u;
    { ctx->pc = 0x1b67f8; return; }
    ctx->pc = 0x21D5D0u;
label_21d5d0:
    // 0x21d5d0: 0x2403005a  addiu       $v1, $zero, 0x5A
    ctx->pc = 0x21d5d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
label_21d5d4:
    // 0x21d5d4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x21d5d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_21d5d8:
    // 0x21d5d8: 0x62102f  dsubu       $v0, $v1, $v0
    ctx->pc = 0x21d5d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) - GPR_U64(ctx, 2));
label_21d5dc:
    // 0x21d5dc: 0x2405001a  addiu       $a1, $zero, 0x1A
    ctx->pc = 0x21d5dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
label_21d5e0:
    // 0x21d5e0: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x21d5e0u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
label_21d5e4:
    // 0x21d5e4: 0xc06d89e  jal         func_1B6278
label_21d5e8:
    if (ctx->pc == 0x21D5E8u) {
        ctx->pc = 0x21D5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D5E4u;
        // 0x21d5e8: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21D5ECu;
        goto label_21d5ec;
    }
    ctx->pc = 0x21D5E4u;
    SET_GPR_U32(ctx, 31, 0x21D5ECu);
    ctx->pc = 0x21D5E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D5E4u;
    // 0x21d5e8: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6278u;
    { ctx->pc = 0x1b6278; return; }
    ctx->pc = 0x21D5ECu;
label_21d5ec:
    // 0x21d5ec: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x21d5ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_21d5f0:
    // 0x21d5f0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x21d5f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_21d5f4:
    // 0x21d5f4: 0x2a02000c  slti        $v0, $s0, 0xC
    ctx->pc = 0x21d5f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)12) ? 1 : 0);
label_21d5f8:
    // 0x21d5f8: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
label_21d5fc:
    if (ctx->pc == 0x21D5FCu) {
        ctx->pc = 0x21D5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D5F8u;
        // 0x21d5fc: 0x2405001a  addiu       $a1, $zero, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21D600u;
        goto label_21d600;
    }
    ctx->pc = 0x21D5F8u;
    {
        const bool branch_taken_0x21d5f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21D5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D5F8u;
        // 0x21d5fc: 0x2405001a  addiu       $a1, $zero, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d5f8) {
            ctx->pc = 0x21D5C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21d5c8;
        }
    }
    ctx->pc = 0x21D600u;
label_21d600:
    // 0x21d600: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x21d600u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_21d604:
    // 0x21d604: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x21d604u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_21d608:
    // 0x21d608: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21d608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21d60c:
    // 0x21d60c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x21d60cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_21d610:
    // 0x21d610: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x21d610u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_21d614:
    // 0x21d614: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x21d614u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_21d618:
    // 0x21d618: 0x3e00008  jr          $ra
label_21d61c:
    if (ctx->pc == 0x21D61Cu) {
        ctx->pc = 0x21D61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D618u;
        // 0x21d61c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21D620u;
        goto label_21d620;
    }
    ctx->pc = 0x21D618u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21D61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D618u;
        // 0x21d61c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21D618u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21D620u;
label_21d620:
    // 0x21d620: 0x30a5000f  andi        $a1, $a1, 0xF
    ctx->pc = 0x21d620u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)15);
label_21d624:
    // 0x21d624: 0x30c6000f  andi        $a2, $a2, 0xF
    ctx->pc = 0x21d624u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)15);
label_21d628:
    // 0x21d628: 0x10a60042  beq         $a1, $a2, . + 4 + (0x42 << 2)
label_21d62c:
    if (ctx->pc == 0x21D62Cu) {
        ctx->pc = 0x21D62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D628u;
        // 0x21d62c: 0x30a30001  andi        $v1, $a1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x21D630u;
        goto label_21d630;
    }
    ctx->pc = 0x21D628u;
    {
        const bool branch_taken_0x21d628 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 6));
        ctx->pc = 0x21D62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D628u;
        // 0x21d62c: 0x30a30001  andi        $v1, $a1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d628) {
            ctx->pc = 0x21D734u;
            { ctx->pc = 0x21d734; return; }
        }
    }
    ctx->pc = 0x21D630u;
label_21d630:
    // 0x21d630: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_21d634:
    if (ctx->pc == 0x21D634u) {
        ctx->pc = 0x21D634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D630u;
        // 0x21d634: 0x782d  daddu       $t7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21D638u;
        goto label_21d638;
    }
    ctx->pc = 0x21D630u;
    {
        const bool branch_taken_0x21d630 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D630u;
        // 0x21d634: 0x782d  daddu       $t7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d630) {
            ctx->pc = 0x21D648u;
            goto label_21d648;
        }
    }
    ctx->pc = 0x21D638u;
label_21d638:
    // 0x21d638: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x21d638u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21d63c:
    // 0x21d63c: 0x640800f0  daddiu      $t0, $zero, 0xF0
    ctx->pc = 0x21d63cu;
    SET_GPR_S64(ctx, 8, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)240);
label_21d640:
    // 0x21d640: 0x10000003  b           . + 4 + (0x3 << 2)
label_21d644:
    if (ctx->pc == 0x21D644u) {
        ctx->pc = 0x21D644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D640u;
        // 0x21d644: 0x6403000f  daddiu      $v1, $zero, 0xF (Delay Slot)
        SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)15);
        ctx->in_delay_slot = false;
        ctx->pc = 0x21D648u;
        goto label_21d648;
    }
    ctx->pc = 0x21D640u;
    {
        const bool branch_taken_0x21d640 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D640u;
        // 0x21d644: 0x6403000f  daddiu      $v1, $zero, 0xF (Delay Slot)
        SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d640) {
            ctx->pc = 0x21D650u;
            goto label_21d650;
        }
    }
    ctx->pc = 0x21D648u;
label_21d648:
    // 0x21d648: 0x6408000f  daddiu      $t0, $zero, 0xF
    ctx->pc = 0x21d648u;
    SET_GPR_S64(ctx, 8, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)15);
label_21d64c:
    // 0x21d64c: 0x640300f0  daddiu      $v1, $zero, 0xF0
    ctx->pc = 0x21d64cu;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)240);
label_21d650:
    // 0x21d650: 0x30c70001  andi        $a3, $a2, 0x1
    ctx->pc = 0x21d650u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
label_21d654:
    // 0x21d654: 0x10e00005  beqz        $a3, . + 4 + (0x5 << 2)
label_21d658:
    if (ctx->pc == 0x21D658u) {
        ctx->pc = 0x21D658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D654u;
        // 0x21d658: 0xc02d  daddu       $t8, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21D65Cu;
        goto label_21d65c;
    }
    ctx->pc = 0x21D654u;
    {
        const bool branch_taken_0x21d654 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D654u;
        // 0x21d658: 0xc02d  daddu       $t8, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d654) {
            ctx->pc = 0x21D66Cu;
            goto label_21d66c;
        }
    }
    ctx->pc = 0x21D65Cu;
label_21d65c:
    // 0x21d65c: 0x24180001  addiu       $t8, $zero, 0x1
    ctx->pc = 0x21d65cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21d660:
    // 0x21d660: 0x640b00f0  daddiu      $t3, $zero, 0xF0
    ctx->pc = 0x21d660u;
    SET_GPR_S64(ctx, 11, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)240);
label_21d664:
    // 0x21d664: 0x10000003  b           . + 4 + (0x3 << 2)
label_21d668:
    if (ctx->pc == 0x21D668u) {
        ctx->pc = 0x21D668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D664u;
        // 0x21d668: 0x6407000f  daddiu      $a3, $zero, 0xF (Delay Slot)
        SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)15);
        ctx->in_delay_slot = false;
        ctx->pc = 0x21D66Cu;
        goto label_21d66c;
    }
    ctx->pc = 0x21D664u;
    {
        const bool branch_taken_0x21d664 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D664u;
        // 0x21d668: 0x6407000f  daddiu      $a3, $zero, 0xF (Delay Slot)
        SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d664) {
            ctx->pc = 0x21D674u;
            goto label_21d674;
        }
    }
    ctx->pc = 0x21D66Cu;
label_21d66c:
    // 0x21d66c: 0x640b000f  daddiu      $t3, $zero, 0xF
    ctx->pc = 0x21d66cu;
    SET_GPR_S64(ctx, 11, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)15);
label_21d670:
    // 0x21d670: 0x640700f0  daddiu      $a3, $zero, 0xF0
    ctx->pc = 0x21d670u;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)240);
label_21d674:
    // 0x21d674: 0x64842  srl         $t1, $a2, 1
    ctx->pc = 0x21d674u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 6), 1));
label_21d678:
    // 0x21d678: 0x55042  srl         $t2, $a1, 1
    ctx->pc = 0x21d678u;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
label_21d67c:
    // 0x21d67c: 0x310d00ff  andi        $t5, $t0, 0xFF
    ctx->pc = 0x21d67cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
label_21d680:
    // 0x21d680: 0x893021  addu        $a2, $a0, $t1
    ctx->pc = 0x21d680u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
label_21d684:
    // 0x21d684: 0x8a4021  addu        $t0, $a0, $t2
    ctx->pc = 0x21d684u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
label_21d688:
    // 0x21d688: 0x316c00ff  andi        $t4, $t3, 0xFF
    ctx->pc = 0x21d688u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)255);
label_21d68c:
    // 0x21d68c: 0x91050000  lbu         $a1, 0x0($t0)
    ctx->pc = 0x21d68cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_21d690:
    // 0x21d690: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x21d690u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21d694:
    // 0x21d694: 0x90c40000  lbu         $a0, 0x0($a2)
    ctx->pc = 0x21d694u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_21d698:
    // 0x21d698: 0x1a56824  and         $t5, $t5, $a1
    ctx->pc = 0x21d698u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) & GPR_U64(ctx, 5));
label_21d69c:
    // 0x21d69c: 0x1846024  and         $t4, $t4, $a0
    ctx->pc = 0x21d69cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) & GPR_U64(ctx, 4));
label_21d6a0:
    // 0x21d6a0: 0x31ad00ff  andi        $t5, $t5, 0xFF
    ctx->pc = 0x21d6a0u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)255);
label_21d6a4:
    // 0x21d6a4: 0x15eb0007  bne         $t7, $t3, . + 4 + (0x7 << 2)
label_21d6a8:
    if (ctx->pc == 0x21D6A8u) {
        ctx->pc = 0x21D6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D6A4u;
        // 0x21d6a8: 0x318e00ff  andi        $t6, $t4, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 14, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x21D6ACu;
        goto label_21d6ac;
    }
    ctx->pc = 0x21D6A4u;
    {
        const bool branch_taken_0x21d6a4 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 11));
        ctx->pc = 0x21D6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D6A4u;
        // 0x21d6a8: 0x318e00ff  andi        $t6, $t4, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 14, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d6a4) {
            ctx->pc = 0x21D6C4u;
            goto label_21d6c4;
        }
    }
    ctx->pc = 0x21D6ACu;
label_21d6ac:
    // 0x21d6ac: 0x17000005  bnez        $t8, . + 4 + (0x5 << 2)
label_21d6b0:
    if (ctx->pc == 0x21D6B0u) {
        ctx->pc = 0x21D6B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D6ACu;
        // 0x21d6b0: 0xd6102  srl         $t4, $t5, 4 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 13), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21D6B4u;
        goto label_21d6b4;
    }
    ctx->pc = 0x21D6ACu;
    {
        const bool branch_taken_0x21d6ac = (GPR_U64(ctx, 24) != GPR_U64(ctx, 0));
        ctx->pc = 0x21D6B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D6ACu;
        // 0x21d6b0: 0xd6102  srl         $t4, $t5, 4 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 13), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d6ac) {
            ctx->pc = 0x21D6C4u;
            goto label_21d6c4;
        }
    }
    ctx->pc = 0x21D6B4u;
label_21d6b4:
    // 0x21d6b4: 0xe5900  sll         $t3, $t6, 4
    ctx->pc = 0x21d6b4u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 14), 4));
label_21d6b8:
    // 0x21d6b8: 0x318d00ff  andi        $t5, $t4, 0xFF
    ctx->pc = 0x21d6b8u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)255);
label_21d6bc:
    // 0x21d6bc: 0x10000008  b           . + 4 + (0x8 << 2)
label_21d6c0:
    if (ctx->pc == 0x21D6C0u) {
        ctx->pc = 0x21D6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D6BCu;
        // 0x21d6c0: 0x316e00ff  andi        $t6, $t3, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 14, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x21D6C4u;
        goto label_21d6c4;
    }
    ctx->pc = 0x21D6BCu;
    {
        const bool branch_taken_0x21d6bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D6BCu;
        // 0x21d6c0: 0x316e00ff  andi        $t6, $t3, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 14, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d6bc) {
            ctx->pc = 0x21D6E0u;
            goto label_21d6e0;
        }
    }
    ctx->pc = 0x21D6C4u;
label_21d6c4:
    // 0x21d6c4: 0x15e00006  bnez        $t7, . + 4 + (0x6 << 2)
label_21d6c8:
    if (ctx->pc == 0x21D6C8u) {
        ctx->pc = 0x21D6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D6C4u;
        // 0x21d6c8: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21D6CCu;
        goto label_21d6cc;
    }
    ctx->pc = 0x21D6C4u;
    {
        const bool branch_taken_0x21d6c4 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x21D6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D6C4u;
        // 0x21d6c8: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d6c4) {
            ctx->pc = 0x21D6E0u;
            goto label_21d6e0;
        }
    }
    ctx->pc = 0x21D6CCu;
label_21d6cc:
    // 0x21d6cc: 0x170b0004  bne         $t8, $t3, . + 4 + (0x4 << 2)
label_21d6d0:
    if (ctx->pc == 0x21D6D0u) {
        ctx->pc = 0x21D6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D6CCu;
        // 0x21d6d0: 0xd6100  sll         $t4, $t5, 4 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 13), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21D6D4u;
        goto label_21d6d4;
    }
    ctx->pc = 0x21D6CCu;
    {
        const bool branch_taken_0x21d6cc = (GPR_U64(ctx, 24) != GPR_U64(ctx, 11));
        ctx->pc = 0x21D6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D6CCu;
        // 0x21d6d0: 0xd6100  sll         $t4, $t5, 4 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 13), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d6cc) {
            ctx->pc = 0x21D6E0u;
            goto label_21d6e0;
        }
    }
    ctx->pc = 0x21D6D4u;
label_21d6d4:
    // 0x21d6d4: 0xe5902  srl         $t3, $t6, 4
    ctx->pc = 0x21d6d4u;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 14), 4));
label_21d6d8:
    // 0x21d6d8: 0x318d00ff  andi        $t5, $t4, 0xFF
    ctx->pc = 0x21d6d8u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)255);
label_21d6dc:
    // 0x21d6dc: 0x316e00ff  andi        $t6, $t3, 0xFF
    ctx->pc = 0x21d6dcu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)255);
label_21d6e0:
    // 0x21d6e0: 0x1149000e  beq         $t2, $t1, . + 4 + (0xE << 2)
label_21d6e4:
    if (ctx->pc == 0x21D6E4u) {
        ctx->pc = 0x21D6E8u;
        goto label_21d6e8;
    }
    ctx->pc = 0x21D6E0u;
    {
        const bool branch_taken_0x21d6e0 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 9));
        if (branch_taken_0x21d6e0) {
            ctx->pc = 0x21D71Cu;
            goto label_21d71c;
        }
    }
    ctx->pc = 0x21D6E8u;
label_21d6e8:
    // 0x21d6e8: 0x73e3c  dsll32      $a3, $a3, 24
    ctx->pc = 0x21d6e8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 24));
label_21d6ec:
    // 0x21d6ec: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x21d6ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
label_21d6f0:
    // 0x21d6f0: 0x73e3f  dsra32      $a3, $a3, 24
    ctx->pc = 0x21d6f0u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 24));
label_21d6f4:
    // 0x21d6f4: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x21d6f4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
label_21d6f8:
    // 0x21d6f8: 0xe42024  and         $a0, $a3, $a0
    ctx->pc = 0x21d6f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & GPR_U64(ctx, 4));
label_21d6fc:
    // 0x21d6fc: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x21d6fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
label_21d700:
    // 0x21d700: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x21d700u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_21d704:
    // 0x21d704: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x21d704u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_21d708:
    // 0x21d708: 0x1a42025  or          $a0, $t5, $a0
    ctx->pc = 0x21d708u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 13) | GPR_U64(ctx, 4));
label_21d70c:
    // 0x21d70c: 0x1c31825  or          $v1, $t6, $v1
    ctx->pc = 0x21d70cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 14) | GPR_U64(ctx, 3));
label_21d710:
    // 0x21d710: 0xa0c40000  sb          $a0, 0x0($a2)
    ctx->pc = 0x21d710u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 4));
label_21d714:
    // 0x21d714: 0x10000007  b           . + 4 + (0x7 << 2)
label_21d718:
    if (ctx->pc == 0x21D718u) {
        ctx->pc = 0x21D718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D714u;
        // 0x21d718: 0xa1030000  sb          $v1, 0x0($t0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21D71Cu;
        goto label_21d71c;
    }
    ctx->pc = 0x21D714u;
    {
        const bool branch_taken_0x21d714 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D714u;
        // 0x21d718: 0xa1030000  sb          $v1, 0x0($t0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d714) {
            ctx->pc = 0x21D734u;
            { ctx->pc = 0x21d734; return; }
        }
    }
    ctx->pc = 0x21D71Cu;
label_21d71c:
    // 0x21d71c: 0xd263c  dsll32      $a0, $t5, 24
    ctx->pc = 0x21d71cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 13) << (32 + 24));
label_21d720:
    // 0x21d720: 0xe1e3c  dsll32      $v1, $t6, 24
    ctx->pc = 0x21d720u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 14) << (32 + 24));
label_21d724:
    // 0x21d724: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x21d724u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
label_21d728:
    // 0x21d728: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x21d728u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
label_21d72c:
    // 0x21d72c: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x21d72cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    ctx->pc = 0x21d730u;
    return;
}
