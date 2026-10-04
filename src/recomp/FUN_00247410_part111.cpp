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

// Function: FUN_00247410
// Address: 0x247410 - 0x2874a4
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_00247410_part111(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x27cf70u: goto label_27cf70;
        case 0x27cf74u: goto label_27cf74;
        case 0x27cf78u: goto label_27cf78;
        case 0x27cf7cu: goto label_27cf7c;
        case 0x27cf80u: goto label_27cf80;
        case 0x27cf84u: goto label_27cf84;
        case 0x27cf88u: goto label_27cf88;
        case 0x27cf8cu: goto label_27cf8c;
        case 0x27cf90u: goto label_27cf90;
        case 0x27cf94u: goto label_27cf94;
        case 0x27cf98u: goto label_27cf98;
        case 0x27cf9cu: goto label_27cf9c;
        case 0x27cfa0u: goto label_27cfa0;
        case 0x27cfa4u: goto label_27cfa4;
        case 0x27cfa8u: goto label_27cfa8;
        case 0x27cfacu: goto label_27cfac;
        case 0x27cfb0u: goto label_27cfb0;
        case 0x27cfb4u: goto label_27cfb4;
        case 0x27cfb8u: goto label_27cfb8;
        case 0x27cfbcu: goto label_27cfbc;
        case 0x27cfc0u: goto label_27cfc0;
        case 0x27cfc4u: goto label_27cfc4;
        case 0x27cfc8u: goto label_27cfc8;
        case 0x27cfccu: goto label_27cfcc;
        case 0x27cfd0u: goto label_27cfd0;
        case 0x27cfd4u: goto label_27cfd4;
        case 0x27cfd8u: goto label_27cfd8;
        case 0x27cfdcu: goto label_27cfdc;
        case 0x27cfe0u: goto label_27cfe0;
        case 0x27cfe4u: goto label_27cfe4;
        case 0x27cfe8u: goto label_27cfe8;
        case 0x27cfecu: goto label_27cfec;
        case 0x27cff0u: goto label_27cff0;
        case 0x27cff4u: goto label_27cff4;
        case 0x27cff8u: goto label_27cff8;
        case 0x27cffcu: goto label_27cffc;
        case 0x27d000u: goto label_27d000;
        case 0x27d004u: goto label_27d004;
        case 0x27d008u: goto label_27d008;
        case 0x27d00cu: goto label_27d00c;
        case 0x27d010u: goto label_27d010;
        case 0x27d014u: goto label_27d014;
        case 0x27d018u: goto label_27d018;
        case 0x27d01cu: goto label_27d01c;
        case 0x27d020u: goto label_27d020;
        case 0x27d024u: goto label_27d024;
        case 0x27d028u: goto label_27d028;
        case 0x27d02cu: goto label_27d02c;
        case 0x27d030u: goto label_27d030;
        case 0x27d034u: goto label_27d034;
        case 0x27d038u: goto label_27d038;
        case 0x27d03cu: goto label_27d03c;
        case 0x27d040u: goto label_27d040;
        case 0x27d044u: goto label_27d044;
        case 0x27d048u: goto label_27d048;
        case 0x27d04cu: goto label_27d04c;
        case 0x27d050u: goto label_27d050;
        case 0x27d054u: goto label_27d054;
        case 0x27d058u: goto label_27d058;
        case 0x27d05cu: goto label_27d05c;
        case 0x27d060u: goto label_27d060;
        case 0x27d064u: goto label_27d064;
        case 0x27d068u: goto label_27d068;
        case 0x27d06cu: goto label_27d06c;
        case 0x27d070u: goto label_27d070;
        case 0x27d074u: goto label_27d074;
        case 0x27d078u: goto label_27d078;
        case 0x27d07cu: goto label_27d07c;
        case 0x27d080u: goto label_27d080;
        case 0x27d084u: goto label_27d084;
        case 0x27d088u: goto label_27d088;
        case 0x27d08cu: goto label_27d08c;
        case 0x27d090u: goto label_27d090;
        case 0x27d094u: goto label_27d094;
        case 0x27d098u: goto label_27d098;
        case 0x27d09cu: goto label_27d09c;
        case 0x27d0a0u: goto label_27d0a0;
        case 0x27d0a4u: goto label_27d0a4;
        case 0x27d0a8u: goto label_27d0a8;
        case 0x27d0acu: goto label_27d0ac;
        case 0x27d0b0u: goto label_27d0b0;
        case 0x27d0b4u: goto label_27d0b4;
        case 0x27d0b8u: goto label_27d0b8;
        case 0x27d0bcu: goto label_27d0bc;
        case 0x27d0c0u: goto label_27d0c0;
        case 0x27d0c4u: goto label_27d0c4;
        case 0x27d0c8u: goto label_27d0c8;
        case 0x27d0ccu: goto label_27d0cc;
        case 0x27d0d0u: goto label_27d0d0;
        case 0x27d0d4u: goto label_27d0d4;
        case 0x27d0d8u: goto label_27d0d8;
        case 0x27d0dcu: goto label_27d0dc;
        case 0x27d0e0u: goto label_27d0e0;
        case 0x27d0e4u: goto label_27d0e4;
        case 0x27d0e8u: goto label_27d0e8;
        case 0x27d0ecu: goto label_27d0ec;
        case 0x27d0f0u: goto label_27d0f0;
        case 0x27d0f4u: goto label_27d0f4;
        case 0x27d0f8u: goto label_27d0f8;
        case 0x27d0fcu: goto label_27d0fc;
        case 0x27d100u: goto label_27d100;
        case 0x27d104u: goto label_27d104;
        case 0x27d108u: goto label_27d108;
        case 0x27d10cu: goto label_27d10c;
        case 0x27d110u: goto label_27d110;
        case 0x27d114u: goto label_27d114;
        case 0x27d118u: goto label_27d118;
        case 0x27d11cu: goto label_27d11c;
        case 0x27d120u: goto label_27d120;
        case 0x27d124u: goto label_27d124;
        case 0x27d128u: goto label_27d128;
        case 0x27d12cu: goto label_27d12c;
        case 0x27d130u: goto label_27d130;
        case 0x27d134u: goto label_27d134;
        case 0x27d138u: goto label_27d138;
        case 0x27d13cu: goto label_27d13c;
        case 0x27d140u: goto label_27d140;
        case 0x27d144u: goto label_27d144;
        case 0x27d148u: goto label_27d148;
        case 0x27d14cu: goto label_27d14c;
        case 0x27d150u: goto label_27d150;
        case 0x27d154u: goto label_27d154;
        case 0x27d158u: goto label_27d158;
        case 0x27d15cu: goto label_27d15c;
        case 0x27d160u: goto label_27d160;
        case 0x27d164u: goto label_27d164;
        case 0x27d168u: goto label_27d168;
        case 0x27d16cu: goto label_27d16c;
        case 0x27d170u: goto label_27d170;
        case 0x27d174u: goto label_27d174;
        case 0x27d178u: goto label_27d178;
        case 0x27d17cu: goto label_27d17c;
        case 0x27d180u: goto label_27d180;
        case 0x27d184u: goto label_27d184;
        case 0x27d188u: goto label_27d188;
        case 0x27d18cu: goto label_27d18c;
        case 0x27d190u: goto label_27d190;
        case 0x27d194u: goto label_27d194;
        case 0x27d198u: goto label_27d198;
        case 0x27d19cu: goto label_27d19c;
        case 0x27d1a0u: goto label_27d1a0;
        case 0x27d1a4u: goto label_27d1a4;
        case 0x27d1a8u: goto label_27d1a8;
        case 0x27d1acu: goto label_27d1ac;
        case 0x27d1b0u: goto label_27d1b0;
        case 0x27d1b4u: goto label_27d1b4;
        case 0x27d1b8u: goto label_27d1b8;
        case 0x27d1bcu: goto label_27d1bc;
        case 0x27d1c0u: goto label_27d1c0;
        case 0x27d1c4u: goto label_27d1c4;
        case 0x27d1c8u: goto label_27d1c8;
        case 0x27d1ccu: goto label_27d1cc;
        case 0x27d1d0u: goto label_27d1d0;
        case 0x27d1d4u: goto label_27d1d4;
        case 0x27d1d8u: goto label_27d1d8;
        case 0x27d1dcu: goto label_27d1dc;
        case 0x27d1e0u: goto label_27d1e0;
        case 0x27d1e4u: goto label_27d1e4;
        case 0x27d1e8u: goto label_27d1e8;
        case 0x27d1ecu: goto label_27d1ec;
        case 0x27d1f0u: goto label_27d1f0;
        case 0x27d1f4u: goto label_27d1f4;
        case 0x27d1f8u: goto label_27d1f8;
        case 0x27d1fcu: goto label_27d1fc;
        case 0x27d200u: goto label_27d200;
        case 0x27d204u: goto label_27d204;
        case 0x27d208u: goto label_27d208;
        case 0x27d20cu: goto label_27d20c;
        case 0x27d210u: goto label_27d210;
        case 0x27d214u: goto label_27d214;
        case 0x27d218u: goto label_27d218;
        case 0x27d21cu: goto label_27d21c;
        case 0x27d220u: goto label_27d220;
        case 0x27d224u: goto label_27d224;
        case 0x27d228u: goto label_27d228;
        case 0x27d22cu: goto label_27d22c;
        case 0x27d230u: goto label_27d230;
        case 0x27d234u: goto label_27d234;
        case 0x27d238u: goto label_27d238;
        case 0x27d23cu: goto label_27d23c;
        case 0x27d240u: goto label_27d240;
        case 0x27d244u: goto label_27d244;
        case 0x27d248u: goto label_27d248;
        case 0x27d24cu: goto label_27d24c;
        case 0x27d250u: goto label_27d250;
        case 0x27d254u: goto label_27d254;
        case 0x27d258u: goto label_27d258;
        case 0x27d25cu: goto label_27d25c;
        case 0x27d260u: goto label_27d260;
        case 0x27d264u: goto label_27d264;
        case 0x27d268u: goto label_27d268;
        case 0x27d26cu: goto label_27d26c;
        case 0x27d270u: goto label_27d270;
        case 0x27d274u: goto label_27d274;
        case 0x27d278u: goto label_27d278;
        case 0x27d27cu: goto label_27d27c;
        case 0x27d280u: goto label_27d280;
        case 0x27d284u: goto label_27d284;
        case 0x27d288u: goto label_27d288;
        case 0x27d28cu: goto label_27d28c;
        case 0x27d290u: goto label_27d290;
        case 0x27d294u: goto label_27d294;
        case 0x27d298u: goto label_27d298;
        case 0x27d29cu: goto label_27d29c;
        case 0x27d2a0u: goto label_27d2a0;
        case 0x27d2a4u: goto label_27d2a4;
        case 0x27d2a8u: goto label_27d2a8;
        case 0x27d2acu: goto label_27d2ac;
        case 0x27d2b0u: goto label_27d2b0;
        case 0x27d2b4u: goto label_27d2b4;
        case 0x27d2b8u: goto label_27d2b8;
        case 0x27d2bcu: goto label_27d2bc;
        case 0x27d2c0u: goto label_27d2c0;
        case 0x27d2c4u: goto label_27d2c4;
        case 0x27d2c8u: goto label_27d2c8;
        case 0x27d2ccu: goto label_27d2cc;
        case 0x27d2d0u: goto label_27d2d0;
        case 0x27d2d4u: goto label_27d2d4;
        case 0x27d2d8u: goto label_27d2d8;
        case 0x27d2dcu: goto label_27d2dc;
        case 0x27d2e0u: goto label_27d2e0;
        case 0x27d2e4u: goto label_27d2e4;
        case 0x27d2e8u: goto label_27d2e8;
        case 0x27d2ecu: goto label_27d2ec;
        case 0x27d2f0u: goto label_27d2f0;
        case 0x27d2f4u: goto label_27d2f4;
        case 0x27d2f8u: goto label_27d2f8;
        case 0x27d2fcu: goto label_27d2fc;
        case 0x27d300u: goto label_27d300;
        case 0x27d304u: goto label_27d304;
        case 0x27d308u: goto label_27d308;
        case 0x27d30cu: goto label_27d30c;
        case 0x27d310u: goto label_27d310;
        case 0x27d314u: goto label_27d314;
        case 0x27d318u: goto label_27d318;
        case 0x27d31cu: goto label_27d31c;
        case 0x27d320u: goto label_27d320;
        case 0x27d324u: goto label_27d324;
        case 0x27d328u: goto label_27d328;
        case 0x27d32cu: goto label_27d32c;
        case 0x27d330u: goto label_27d330;
        case 0x27d334u: goto label_27d334;
        case 0x27d338u: goto label_27d338;
        case 0x27d33cu: goto label_27d33c;
        case 0x27d340u: goto label_27d340;
        case 0x27d344u: goto label_27d344;
        case 0x27d348u: goto label_27d348;
        case 0x27d34cu: goto label_27d34c;
        case 0x27d350u: goto label_27d350;
        case 0x27d354u: goto label_27d354;
        case 0x27d358u: goto label_27d358;
        case 0x27d35cu: goto label_27d35c;
        case 0x27d360u: goto label_27d360;
        case 0x27d364u: goto label_27d364;
        case 0x27d368u: goto label_27d368;
        case 0x27d36cu: goto label_27d36c;
        case 0x27d370u: goto label_27d370;
        case 0x27d374u: goto label_27d374;
        case 0x27d378u: goto label_27d378;
        case 0x27d37cu: goto label_27d37c;
        case 0x27d380u: goto label_27d380;
        case 0x27d384u: goto label_27d384;
        case 0x27d388u: goto label_27d388;
        case 0x27d38cu: goto label_27d38c;
        case 0x27d390u: goto label_27d390;
        case 0x27d394u: goto label_27d394;
        case 0x27d398u: goto label_27d398;
        case 0x27d39cu: goto label_27d39c;
        case 0x27d3a0u: goto label_27d3a0;
        case 0x27d3a4u: goto label_27d3a4;
        case 0x27d3a8u: goto label_27d3a8;
        case 0x27d3acu: goto label_27d3ac;
        case 0x27d3b0u: goto label_27d3b0;
        case 0x27d3b4u: goto label_27d3b4;
        case 0x27d3b8u: goto label_27d3b8;
        case 0x27d3bcu: goto label_27d3bc;
        case 0x27d3c0u: goto label_27d3c0;
        case 0x27d3c4u: goto label_27d3c4;
        case 0x27d3c8u: goto label_27d3c8;
        case 0x27d3ccu: goto label_27d3cc;
        case 0x27d3d0u: goto label_27d3d0;
        case 0x27d3d4u: goto label_27d3d4;
        case 0x27d3d8u: goto label_27d3d8;
        case 0x27d3dcu: goto label_27d3dc;
        case 0x27d3e0u: goto label_27d3e0;
        case 0x27d3e4u: goto label_27d3e4;
        case 0x27d3e8u: goto label_27d3e8;
        case 0x27d3ecu: goto label_27d3ec;
        case 0x27d3f0u: goto label_27d3f0;
        case 0x27d3f4u: goto label_27d3f4;
        case 0x27d3f8u: goto label_27d3f8;
        case 0x27d3fcu: goto label_27d3fc;
        case 0x27d400u: goto label_27d400;
        case 0x27d404u: goto label_27d404;
        case 0x27d408u: goto label_27d408;
        case 0x27d40cu: goto label_27d40c;
        case 0x27d410u: goto label_27d410;
        case 0x27d414u: goto label_27d414;
        case 0x27d418u: goto label_27d418;
        case 0x27d41cu: goto label_27d41c;
        case 0x27d420u: goto label_27d420;
        case 0x27d424u: goto label_27d424;
        case 0x27d428u: goto label_27d428;
        case 0x27d42cu: goto label_27d42c;
        case 0x27d430u: goto label_27d430;
        case 0x27d434u: goto label_27d434;
        case 0x27d438u: goto label_27d438;
        case 0x27d43cu: goto label_27d43c;
        case 0x27d440u: goto label_27d440;
        case 0x27d444u: goto label_27d444;
        case 0x27d448u: goto label_27d448;
        case 0x27d44cu: goto label_27d44c;
        case 0x27d450u: goto label_27d450;
        case 0x27d454u: goto label_27d454;
        case 0x27d458u: goto label_27d458;
        case 0x27d45cu: goto label_27d45c;
        case 0x27d460u: goto label_27d460;
        case 0x27d464u: goto label_27d464;
        case 0x27d468u: goto label_27d468;
        case 0x27d46cu: goto label_27d46c;
        case 0x27d470u: goto label_27d470;
        case 0x27d474u: goto label_27d474;
        case 0x27d478u: goto label_27d478;
        case 0x27d47cu: goto label_27d47c;
        case 0x27d480u: goto label_27d480;
        case 0x27d484u: goto label_27d484;
        case 0x27d488u: goto label_27d488;
        case 0x27d48cu: goto label_27d48c;
        case 0x27d490u: goto label_27d490;
        case 0x27d494u: goto label_27d494;
        case 0x27d498u: goto label_27d498;
        case 0x27d49cu: goto label_27d49c;
        case 0x27d4a0u: goto label_27d4a0;
        case 0x27d4a4u: goto label_27d4a4;
        case 0x27d4a8u: goto label_27d4a8;
        case 0x27d4acu: goto label_27d4ac;
        case 0x27d4b0u: goto label_27d4b0;
        case 0x27d4b4u: goto label_27d4b4;
        case 0x27d4b8u: goto label_27d4b8;
        case 0x27d4bcu: goto label_27d4bc;
        case 0x27d4c0u: goto label_27d4c0;
        case 0x27d4c4u: goto label_27d4c4;
        case 0x27d4c8u: goto label_27d4c8;
        case 0x27d4ccu: goto label_27d4cc;
        case 0x27d4d0u: goto label_27d4d0;
        case 0x27d4d4u: goto label_27d4d4;
        case 0x27d4d8u: goto label_27d4d8;
        case 0x27d4dcu: goto label_27d4dc;
        case 0x27d4e0u: goto label_27d4e0;
        case 0x27d4e4u: goto label_27d4e4;
        case 0x27d4e8u: goto label_27d4e8;
        case 0x27d4ecu: goto label_27d4ec;
        case 0x27d4f0u: goto label_27d4f0;
        case 0x27d4f4u: goto label_27d4f4;
        case 0x27d4f8u: goto label_27d4f8;
        case 0x27d4fcu: goto label_27d4fc;
        case 0x27d500u: goto label_27d500;
        case 0x27d504u: goto label_27d504;
        case 0x27d508u: goto label_27d508;
        case 0x27d50cu: goto label_27d50c;
        case 0x27d510u: goto label_27d510;
        case 0x27d514u: goto label_27d514;
        case 0x27d518u: goto label_27d518;
        case 0x27d51cu: goto label_27d51c;
        case 0x27d520u: goto label_27d520;
        case 0x27d524u: goto label_27d524;
        case 0x27d528u: goto label_27d528;
        case 0x27d52cu: goto label_27d52c;
        case 0x27d530u: goto label_27d530;
        case 0x27d534u: goto label_27d534;
        case 0x27d538u: goto label_27d538;
        case 0x27d53cu: goto label_27d53c;
        case 0x27d540u: goto label_27d540;
        case 0x27d544u: goto label_27d544;
        case 0x27d548u: goto label_27d548;
        case 0x27d54cu: goto label_27d54c;
        case 0x27d550u: goto label_27d550;
        case 0x27d554u: goto label_27d554;
        case 0x27d558u: goto label_27d558;
        case 0x27d55cu: goto label_27d55c;
        case 0x27d560u: goto label_27d560;
        case 0x27d564u: goto label_27d564;
        case 0x27d568u: goto label_27d568;
        case 0x27d56cu: goto label_27d56c;
        case 0x27d570u: goto label_27d570;
        case 0x27d574u: goto label_27d574;
        case 0x27d578u: goto label_27d578;
        case 0x27d57cu: goto label_27d57c;
        case 0x27d580u: goto label_27d580;
        case 0x27d584u: goto label_27d584;
        case 0x27d588u: goto label_27d588;
        case 0x27d58cu: goto label_27d58c;
        case 0x27d590u: goto label_27d590;
        case 0x27d594u: goto label_27d594;
        case 0x27d598u: goto label_27d598;
        case 0x27d59cu: goto label_27d59c;
        case 0x27d5a0u: goto label_27d5a0;
        case 0x27d5a4u: goto label_27d5a4;
        case 0x27d5a8u: goto label_27d5a8;
        case 0x27d5acu: goto label_27d5ac;
        case 0x27d5b0u: goto label_27d5b0;
        case 0x27d5b4u: goto label_27d5b4;
        case 0x27d5b8u: goto label_27d5b8;
        case 0x27d5bcu: goto label_27d5bc;
        case 0x27d5c0u: goto label_27d5c0;
        case 0x27d5c4u: goto label_27d5c4;
        case 0x27d5c8u: goto label_27d5c8;
        case 0x27d5ccu: goto label_27d5cc;
        case 0x27d5d0u: goto label_27d5d0;
        case 0x27d5d4u: goto label_27d5d4;
        case 0x27d5d8u: goto label_27d5d8;
        case 0x27d5dcu: goto label_27d5dc;
        case 0x27d5e0u: goto label_27d5e0;
        case 0x27d5e4u: goto label_27d5e4;
        case 0x27d5e8u: goto label_27d5e8;
        case 0x27d5ecu: goto label_27d5ec;
        case 0x27d5f0u: goto label_27d5f0;
        case 0x27d5f4u: goto label_27d5f4;
        case 0x27d5f8u: goto label_27d5f8;
        case 0x27d5fcu: goto label_27d5fc;
        case 0x27d600u: goto label_27d600;
        case 0x27d604u: goto label_27d604;
        case 0x27d608u: goto label_27d608;
        case 0x27d60cu: goto label_27d60c;
        case 0x27d610u: goto label_27d610;
        case 0x27d614u: goto label_27d614;
        case 0x27d618u: goto label_27d618;
        case 0x27d61cu: goto label_27d61c;
        case 0x27d620u: goto label_27d620;
        case 0x27d624u: goto label_27d624;
        case 0x27d628u: goto label_27d628;
        case 0x27d62cu: goto label_27d62c;
        case 0x27d630u: goto label_27d630;
        case 0x27d634u: goto label_27d634;
        case 0x27d638u: goto label_27d638;
        case 0x27d63cu: goto label_27d63c;
        case 0x27d640u: goto label_27d640;
        case 0x27d644u: goto label_27d644;
        case 0x27d648u: goto label_27d648;
        case 0x27d64cu: goto label_27d64c;
        case 0x27d650u: goto label_27d650;
        case 0x27d654u: goto label_27d654;
        case 0x27d658u: goto label_27d658;
        case 0x27d65cu: goto label_27d65c;
        case 0x27d660u: goto label_27d660;
        case 0x27d664u: goto label_27d664;
        case 0x27d668u: goto label_27d668;
        case 0x27d66cu: goto label_27d66c;
        case 0x27d670u: goto label_27d670;
        case 0x27d674u: goto label_27d674;
        case 0x27d678u: goto label_27d678;
        case 0x27d67cu: goto label_27d67c;
        case 0x27d680u: goto label_27d680;
        case 0x27d684u: goto label_27d684;
        case 0x27d688u: goto label_27d688;
        case 0x27d68cu: goto label_27d68c;
        case 0x27d690u: goto label_27d690;
        case 0x27d694u: goto label_27d694;
        case 0x27d698u: goto label_27d698;
        case 0x27d69cu: goto label_27d69c;
        case 0x27d6a0u: goto label_27d6a0;
        case 0x27d6a4u: goto label_27d6a4;
        case 0x27d6a8u: goto label_27d6a8;
        case 0x27d6acu: goto label_27d6ac;
        case 0x27d6b0u: goto label_27d6b0;
        case 0x27d6b4u: goto label_27d6b4;
        case 0x27d6b8u: goto label_27d6b8;
        case 0x27d6bcu: goto label_27d6bc;
        case 0x27d6c0u: goto label_27d6c0;
        case 0x27d6c4u: goto label_27d6c4;
        case 0x27d6c8u: goto label_27d6c8;
        case 0x27d6ccu: goto label_27d6cc;
        case 0x27d6d0u: goto label_27d6d0;
        case 0x27d6d4u: goto label_27d6d4;
        case 0x27d6d8u: goto label_27d6d8;
        case 0x27d6dcu: goto label_27d6dc;
        case 0x27d6e0u: goto label_27d6e0;
        case 0x27d6e4u: goto label_27d6e4;
        case 0x27d6e8u: goto label_27d6e8;
        case 0x27d6ecu: goto label_27d6ec;
        case 0x27d6f0u: goto label_27d6f0;
        case 0x27d6f4u: goto label_27d6f4;
        case 0x27d6f8u: goto label_27d6f8;
        case 0x27d6fcu: goto label_27d6fc;
        case 0x27d700u: goto label_27d700;
        case 0x27d704u: goto label_27d704;
        case 0x27d708u: goto label_27d708;
        case 0x27d70cu: goto label_27d70c;
        case 0x27d710u: goto label_27d710;
        case 0x27d714u: goto label_27d714;
        case 0x27d718u: goto label_27d718;
        case 0x27d71cu: goto label_27d71c;
        case 0x27d720u: goto label_27d720;
        case 0x27d724u: goto label_27d724;
        case 0x27d728u: goto label_27d728;
        case 0x27d72cu: goto label_27d72c;
        case 0x27d730u: goto label_27d730;
        case 0x27d734u: goto label_27d734;
        case 0x27d738u: goto label_27d738;
        case 0x27d73cu: goto label_27d73c;
        default: return;
    }

label_27cf70:
    // 0x27cf70: 0x141d8  .word       0x000141D8                   # mult        $t0, $zero, $at # 000001C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x27cf70u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
label_27cf74:
    // 0x27cf74: 0x6bf0  tge         $zero, $zero, 431
    ctx->pc = 0x27cf74u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27cf78:
    // 0x27cf78: 0x0  nop
    ctx->pc = 0x27cf78u;
    // NOP
label_27cf7c:
    // 0x27cf7c: 0x0  nop
    ctx->pc = 0x27cf7cu;
    // NOP
label_27cf80:
    // 0x27cf80: 0x141e6  .word       0x000141E6                   # xor         $t0, $zero, $at # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27cf80u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 1));
label_27cf84:
    // 0x27cf84: 0xa230  tge         $zero, $zero, 648
    ctx->pc = 0x27cf84u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27cf88:
    // 0x27cf88: 0x0  nop
    ctx->pc = 0x27cf88u;
    // NOP
label_27cf8c:
    // 0x27cf8c: 0x0  nop
    ctx->pc = 0x27cf8cu;
    // NOP
label_27cf90:
    // 0x27cf90: 0x141fb  dsra        $t0, $at, 7
    ctx->pc = 0x27cf90u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 1) >> 7);
label_27cf94:
    // 0x27cf94: 0x5b50  .word       0x00005B50                   # mfhi        $t3 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27cf94u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_27cf98:
    // 0x27cf98: 0x0  nop
    ctx->pc = 0x27cf98u;
    // NOP
label_27cf9c:
    // 0x27cf9c: 0x0  nop
    ctx->pc = 0x27cf9cu;
    // NOP
label_27cfa0:
    // 0x27cfa0: 0x14207  .word       0x00014207                   # srav        $t0, $at, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27cfa0u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_27cfa4:
    // 0x27cfa4: 0xab60  .word       0x0000AB60                   # add         $s5, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27cfa4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 21, (int32_t)result);     } }
label_27cfa8:
    // 0x27cfa8: 0x0  nop
    ctx->pc = 0x27cfa8u;
    // NOP
label_27cfac:
    // 0x27cfac: 0x0  nop
    ctx->pc = 0x27cfacu;
    // NOP
label_27cfb0:
    // 0x27cfb0: 0x1421d  .word       0x0001421D                   # dmultu      $zero, $at # 00004200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27cfb0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x27CFB0 raw=0x0001421D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27cfb4:
    // 0x27cfb4: 0xbb90  .word       0x0000BB90                   # mfhi        $s7 # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27cfb4u;
    SET_GPR_U64(ctx, 23, ctx->hi);
label_27cfb8:
    // 0x27cfb8: 0x0  nop
    ctx->pc = 0x27cfb8u;
    // NOP
label_27cfbc:
    // 0x27cfbc: 0x0  nop
    ctx->pc = 0x27cfbcu;
    // NOP
label_27cfc0:
    // 0x27cfc0: 0x14235  .word       0x00014235                   # INVALID     $zero, $at, 0x4235 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27cfc0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x27CFC0 raw=0x00014235"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27cfc4:
    // 0x27cfc4: 0xadc0  sll         $s5, $zero, 23
    ctx->pc = 0x27cfc4u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 0), 23));
label_27cfc8:
    // 0x27cfc8: 0x0  nop
    ctx->pc = 0x27cfc8u;
    // NOP
label_27cfcc:
    // 0x27cfcc: 0x0  nop
    ctx->pc = 0x27cfccu;
    // NOP
label_27cfd0:
    // 0x27cfd0: 0x1424b  .word       0x0001424B                   # movn        $t0, $zero, $at # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27cfd0u;
    if (GPR_U64(ctx, 1) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 0));
label_27cfd4:
    // 0x27cfd4: 0xca20  .word       0x0000CA20                   # add         $t9, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27cfd4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 25, (int32_t)result);     } }
label_27cfd8:
    // 0x27cfd8: 0x0  nop
    ctx->pc = 0x27cfd8u;
    // NOP
label_27cfdc:
    // 0x27cfdc: 0x0  nop
    ctx->pc = 0x27cfdcu;
    // NOP
label_27cfe0:
    // 0x27cfe0: 0x14265  .word       0x00014265                   # or          $t0, $zero, $at # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27cfe0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | GPR_U64(ctx, 1));
label_27cfe4:
    // 0x27cfe4: 0x6a80  sll         $t5, $zero, 10
    ctx->pc = 0x27cfe4u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 0), 10));
label_27cfe8:
    // 0x27cfe8: 0x0  nop
    ctx->pc = 0x27cfe8u;
    // NOP
label_27cfec:
    // 0x27cfec: 0x0  nop
    ctx->pc = 0x27cfecu;
    // NOP
label_27cff0:
    // 0x27cff0: 0x14273  tltu        $zero, $at, 265
    ctx->pc = 0x27cff0u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_27cff4:
    // 0x27cff4: 0x8770  tge         $zero, $zero, 541
    ctx->pc = 0x27cff4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27cff8:
    // 0x27cff8: 0x0  nop
    ctx->pc = 0x27cff8u;
    // NOP
label_27cffc:
    // 0x27cffc: 0x0  nop
    ctx->pc = 0x27cffcu;
    // NOP
label_27d000:
    // 0x27d000: 0x14284  .word       0x00014284                   # sllv        $t0, $at, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d000u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_27d004:
    // 0x27d004: 0x8c60  .word       0x00008C60                   # add         $s1, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d004u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_27d008:
    // 0x27d008: 0x0  nop
    ctx->pc = 0x27d008u;
    // NOP
label_27d00c:
    // 0x27d00c: 0x0  nop
    ctx->pc = 0x27d00cu;
    // NOP
label_27d010:
    // 0x27d010: 0x14296  .word       0x00014296                   # dsrlv       $t0, $at, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d010u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 1) >> (GPR_U32(ctx, 0) & 0x3F));
label_27d014:
    // 0x27d014: 0xb350  .word       0x0000B350                   # mfhi        $s6 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d014u;
    SET_GPR_U64(ctx, 22, ctx->hi);
label_27d018:
    // 0x27d018: 0x0  nop
    ctx->pc = 0x27d018u;
    // NOP
label_27d01c:
    // 0x27d01c: 0x0  nop
    ctx->pc = 0x27d01cu;
    // NOP
label_27d020:
    // 0x27d020: 0x142ad  .word       0x000142AD                   # daddu       $t0, $zero, $at # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d020u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 1));
label_27d024:
    // 0x27d024: 0xb170  tge         $zero, $zero, 709
    ctx->pc = 0x27d024u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27d028:
    // 0x27d028: 0x0  nop
    ctx->pc = 0x27d028u;
    // NOP
label_27d02c:
    // 0x27d02c: 0x0  nop
    ctx->pc = 0x27d02cu;
    // NOP
label_27d030:
    // 0x27d030: 0x142c4  .word       0x000142C4                   # sllv        $t0, $at, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d030u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_27d034:
    // 0x27d034: 0xac30  tge         $zero, $zero, 688
    ctx->pc = 0x27d034u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27d038:
    // 0x27d038: 0x0  nop
    ctx->pc = 0x27d038u;
    // NOP
label_27d03c:
    // 0x27d03c: 0x0  nop
    ctx->pc = 0x27d03cu;
    // NOP
label_27d040:
    // 0x27d040: 0x142da  .word       0x000142DA                   # div         $t0, $zero, $at # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d040u;
    { int32_t divisor = GPR_S32(ctx, 1);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_27d044:
    // 0x27d044: 0x8a50  .word       0x00008A50                   # mfhi        $s1 # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d044u;
    SET_GPR_U64(ctx, 17, ctx->hi);
label_27d048:
    // 0x27d048: 0x0  nop
    ctx->pc = 0x27d048u;
    // NOP
label_27d04c:
    // 0x27d04c: 0x0  nop
    ctx->pc = 0x27d04cu;
    // NOP
label_27d050:
    // 0x27d050: 0x142ec  .word       0x000142EC                   # dadd        $t0, $zero, $at # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d050u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 1); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 8, r); }
label_27d054:
    // 0x27d054: 0x7b90  .word       0x00007B90                   # mfhi        $t7 # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d054u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_27d058:
    // 0x27d058: 0x0  nop
    ctx->pc = 0x27d058u;
    // NOP
label_27d05c:
    // 0x27d05c: 0x0  nop
    ctx->pc = 0x27d05cu;
    // NOP
label_27d060:
    // 0x27d060: 0x142fc  dsll32      $t0, $at, 11
    ctx->pc = 0x27d060u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 1) << (32 + 11));
label_27d064:
    // 0x27d064: 0x3a20  .word       0x00003A20                   # add         $a3, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d064u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
label_27d068:
    // 0x27d068: 0x0  nop
    ctx->pc = 0x27d068u;
    // NOP
label_27d06c:
    // 0x27d06c: 0x0  nop
    ctx->pc = 0x27d06cu;
    // NOP
label_27d070:
    // 0x27d070: 0x14304  .word       0x00014304                   # sllv        $t0, $at, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d070u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_27d074:
    // 0x27d074: 0x8010  mfhi        $s0
    ctx->pc = 0x27d074u;
    SET_GPR_U64(ctx, 16, ctx->hi);
label_27d078:
    // 0x27d078: 0x0  nop
    ctx->pc = 0x27d078u;
    // NOP
label_27d07c:
    // 0x27d07c: 0x0  nop
    ctx->pc = 0x27d07cu;
    // NOP
label_27d080:
    // 0x27d080: 0x14315  .word       0x00014315                   # INVALID     $zero, $at, 0x4315 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d080u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x27D080 raw=0x00014315"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27d084:
    // 0x27d084: 0x6a00  sll         $t5, $zero, 8
    ctx->pc = 0x27d084u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 0), 8));
label_27d088:
    // 0x27d088: 0x0  nop
    ctx->pc = 0x27d088u;
    // NOP
label_27d08c:
    // 0x27d08c: 0x0  nop
    ctx->pc = 0x27d08cu;
    // NOP
label_27d090:
    // 0x27d090: 0x14323  .word       0x00014323                   # negu        $t0, $at # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d090u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 1)));
label_27d094:
    // 0x27d094: 0xbdf0  tge         $zero, $zero, 759
    ctx->pc = 0x27d094u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27d098:
    // 0x27d098: 0x0  nop
    ctx->pc = 0x27d098u;
    // NOP
label_27d09c:
    // 0x27d09c: 0x0  nop
    ctx->pc = 0x27d09cu;
    // NOP
label_27d0a0:
    // 0x27d0a0: 0x1433b  dsra        $t0, $at, 12
    ctx->pc = 0x27d0a0u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 1) >> 12);
label_27d0a4:
    // 0x27d0a4: 0x81b0  tge         $zero, $zero, 518
    ctx->pc = 0x27d0a4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27d0a8:
    // 0x27d0a8: 0x0  nop
    ctx->pc = 0x27d0a8u;
    // NOP
label_27d0ac:
    // 0x27d0ac: 0x0  nop
    ctx->pc = 0x27d0acu;
    // NOP
label_27d0b0:
    // 0x27d0b0: 0x1434c  .word       0x0001434C                   # syscall     269 # 00010000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d0b0u;
    ctx->pc = 0x27D0B4u;
runtime->handleSyscall(rdram, ctx, 0x50Du);
label_27d0b4:
    // 0x27d0b4: 0x10890  .word       0x00010890                   # mfhi        $at # 00010080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d0b4u;
    SET_GPR_U64(ctx, 1, ctx->hi);
label_27d0b8:
    // 0x27d0b8: 0x0  nop
    ctx->pc = 0x27d0b8u;
    // NOP
label_27d0bc:
    // 0x27d0bc: 0x0  nop
    ctx->pc = 0x27d0bcu;
    // NOP
label_27d0c0:
    // 0x27d0c0: 0x1436e  .word       0x0001436E                   # dsub        $t0, $zero, $at # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d0c0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 1); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 8, r); }
label_27d0c4:
    // 0x27d0c4: 0x6020  add         $t4, $zero, $zero
    ctx->pc = 0x27d0c4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_27d0c8:
    // 0x27d0c8: 0x0  nop
    ctx->pc = 0x27d0c8u;
    // NOP
label_27d0cc:
    // 0x27d0cc: 0x0  nop
    ctx->pc = 0x27d0ccu;
    // NOP
label_27d0d0:
    // 0x27d0d0: 0x1437b  dsra        $t0, $at, 13
    ctx->pc = 0x27d0d0u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 1) >> 13);
label_27d0d4:
    // 0x27d0d4: 0x7430  tge         $zero, $zero, 464
    ctx->pc = 0x27d0d4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27d0d8:
    // 0x27d0d8: 0x0  nop
    ctx->pc = 0x27d0d8u;
    // NOP
label_27d0dc:
    // 0x27d0dc: 0x0  nop
    ctx->pc = 0x27d0dcu;
    // NOP
label_27d0e0:
    // 0x27d0e0: 0x1438a  .word       0x0001438A                   # movz        $t0, $zero, $at # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d0e0u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 0));
label_27d0e4:
    // 0x27d0e4: 0x9710  .word       0x00009710                   # mfhi        $s2 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d0e4u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_27d0e8:
    // 0x27d0e8: 0x0  nop
    ctx->pc = 0x27d0e8u;
    // NOP
label_27d0ec:
    // 0x27d0ec: 0x0  nop
    ctx->pc = 0x27d0ecu;
    // NOP
label_27d0f0:
    // 0x27d0f0: 0x1439d  .word       0x0001439D                   # dmultu      $zero, $at # 00004380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d0f0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x27D0F0 raw=0x0001439D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27d0f4:
    // 0x27d0f4: 0xa360  .word       0x0000A360                   # add         $s4, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d0f4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_27d0f8:
    // 0x27d0f8: 0x0  nop
    ctx->pc = 0x27d0f8u;
    // NOP
label_27d0fc:
    // 0x27d0fc: 0x0  nop
    ctx->pc = 0x27d0fcu;
    // NOP
label_27d100:
    // 0x27d100: 0x143b2  tlt         $zero, $at, 270
    ctx->pc = 0x27d100u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_27d104:
    // 0x27d104: 0x7e50  .word       0x00007E50                   # mfhi        $t7 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d104u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_27d108:
    // 0x27d108: 0x0  nop
    ctx->pc = 0x27d108u;
    // NOP
label_27d10c:
    // 0x27d10c: 0x0  nop
    ctx->pc = 0x27d10cu;
    // NOP
label_27d110:
    // 0x27d110: 0x143c2  srl         $t0, $at, 15
    ctx->pc = 0x27d110u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 1), 15));
label_27d114:
    // 0x27d114: 0xa810  mfhi        $s5
    ctx->pc = 0x27d114u;
    SET_GPR_U64(ctx, 21, ctx->hi);
label_27d118:
    // 0x27d118: 0x0  nop
    ctx->pc = 0x27d118u;
    // NOP
label_27d11c:
    // 0x27d11c: 0x0  nop
    ctx->pc = 0x27d11cu;
    // NOP
label_27d120:
    // 0x27d120: 0x143d8  .word       0x000143D8                   # mult        $t0, $zero, $at # 000003C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x27d120u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
label_27d124:
    // 0x27d124: 0x8a00  sll         $s1, $zero, 8
    ctx->pc = 0x27d124u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 0), 8));
label_27d128:
    // 0x27d128: 0x0  nop
    ctx->pc = 0x27d128u;
    // NOP
label_27d12c:
    // 0x27d12c: 0x0  nop
    ctx->pc = 0x27d12cu;
    // NOP
label_27d130:
    // 0x27d130: 0x143ea  .word       0x000143EA                   # slt         $t0, $zero, $at # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d130u;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
label_27d134:
    // 0x27d134: 0x7610  .word       0x00007610                   # mfhi        $t6 # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d134u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_27d138:
    // 0x27d138: 0x0  nop
    ctx->pc = 0x27d138u;
    // NOP
label_27d13c:
    // 0x27d13c: 0x0  nop
    ctx->pc = 0x27d13cu;
    // NOP
label_27d140:
    // 0x27d140: 0x143f9  .word       0x000143F9                   # INVALID     $zero, $at, 0x43F9 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d140u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x27D140 raw=0x000143F9"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27d144:
    // 0x27d144: 0xa670  tge         $zero, $zero, 665
    ctx->pc = 0x27d144u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27d148:
    // 0x27d148: 0x0  nop
    ctx->pc = 0x27d148u;
    // NOP
label_27d14c:
    // 0x27d14c: 0x0  nop
    ctx->pc = 0x27d14cu;
    // NOP
label_27d150:
    // 0x27d150: 0x1440e  .word       0x0001440E                   # INVALID     $zero, $at, 0x440E # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d150u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x27D150 raw=0x0001440E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27d154:
    // 0x27d154: 0x5270  tge         $zero, $zero, 329
    ctx->pc = 0x27d154u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27d158:
    // 0x27d158: 0x0  nop
    ctx->pc = 0x27d158u;
    // NOP
label_27d15c:
    // 0x27d15c: 0x0  nop
    ctx->pc = 0x27d15cu;
    // NOP
label_27d160:
    // 0x27d160: 0x14419  .word       0x00014419                   # multu       $zero, $at # 00004400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d160u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
label_27d164:
    // 0x27d164: 0x5b40  sll         $t3, $zero, 13
    ctx->pc = 0x27d164u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 0), 13));
label_27d168:
    // 0x27d168: 0x0  nop
    ctx->pc = 0x27d168u;
    // NOP
label_27d16c:
    // 0x27d16c: 0x0  nop
    ctx->pc = 0x27d16cu;
    // NOP
label_27d170:
    // 0x27d170: 0x14425  .word       0x00014425                   # or          $t0, $zero, $at # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d170u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | GPR_U64(ctx, 1));
label_27d174:
    // 0x27d174: 0x8770  tge         $zero, $zero, 541
    ctx->pc = 0x27d174u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27d178:
    // 0x27d178: 0x0  nop
    ctx->pc = 0x27d178u;
    // NOP
label_27d17c:
    // 0x27d17c: 0x0  nop
    ctx->pc = 0x27d17cu;
    // NOP
label_27d180:
    // 0x27d180: 0x14436  tne         $zero, $at, 272
    ctx->pc = 0x27d180u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_27d184:
    // 0x27d184: 0xb300  sll         $s6, $zero, 12
    ctx->pc = 0x27d184u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 0), 12));
label_27d188:
    // 0x27d188: 0x0  nop
    ctx->pc = 0x27d188u;
    // NOP
label_27d18c:
    // 0x27d18c: 0x0  nop
    ctx->pc = 0x27d18cu;
    // NOP
label_27d190:
    // 0x27d190: 0x1444d  break       1, 273
    ctx->pc = 0x27d190u;
    runtime->handleBreak(rdram, ctx);
label_27d194:
    // 0x27d194: 0x7cc0  sll         $t7, $zero, 19
    ctx->pc = 0x27d194u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
label_27d198:
    // 0x27d198: 0x0  nop
    ctx->pc = 0x27d198u;
    // NOP
label_27d19c:
    // 0x27d19c: 0x0  nop
    ctx->pc = 0x27d19cu;
    // NOP
label_27d1a0:
    // 0x27d1a0: 0x1445d  .word       0x0001445D                   # dmultu      $zero, $at # 00004440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d1a0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x27D1A0 raw=0x0001445D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27d1a4:
    // 0x27d1a4: 0x68d0  .word       0x000068D0                   # mfhi        $t5 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d1a4u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_27d1a8:
    // 0x27d1a8: 0x0  nop
    ctx->pc = 0x27d1a8u;
    // NOP
label_27d1ac:
    // 0x27d1ac: 0x0  nop
    ctx->pc = 0x27d1acu;
    // NOP
label_27d1b0:
    // 0x27d1b0: 0x1446b  .word       0x0001446B                   # sltu        $t0, $zero, $at # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d1b0u;
    SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
label_27d1b4:
    // 0x27d1b4: 0x93d0  .word       0x000093D0                   # mfhi        $s2 # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d1b4u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_27d1b8:
    // 0x27d1b8: 0x0  nop
    ctx->pc = 0x27d1b8u;
    // NOP
label_27d1bc:
    // 0x27d1bc: 0x0  nop
    ctx->pc = 0x27d1bcu;
    // NOP
label_27d1c0:
    // 0x27d1c0: 0x1447e  dsrl32      $t0, $at, 17
    ctx->pc = 0x27d1c0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 1) >> (32 + 17));
label_27d1c4:
    // 0x27d1c4: 0xb530  tge         $zero, $zero, 724
    ctx->pc = 0x27d1c4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27d1c8:
    // 0x27d1c8: 0x0  nop
    ctx->pc = 0x27d1c8u;
    // NOP
label_27d1cc:
    // 0x27d1cc: 0x0  nop
    ctx->pc = 0x27d1ccu;
    // NOP
label_27d1d0:
    // 0x27d1d0: 0x14495  .word       0x00014495                   # INVALID     $zero, $at, 0x4495 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d1d0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x27D1D0 raw=0x00014495"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27d1d4:
    // 0x27d1d4: 0xaf30  tge         $zero, $zero, 700
    ctx->pc = 0x27d1d4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27d1d8:
    // 0x27d1d8: 0x0  nop
    ctx->pc = 0x27d1d8u;
    // NOP
label_27d1dc:
    // 0x27d1dc: 0x0  nop
    ctx->pc = 0x27d1dcu;
    // NOP
label_27d1e0:
    // 0x27d1e0: 0x144ab  .word       0x000144AB                   # sltu        $t0, $zero, $at # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d1e0u;
    SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
label_27d1e4:
    // 0x27d1e4: 0x7ca0  .word       0x00007CA0                   # add         $t7, $zero, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d1e4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_27d1e8:
    // 0x27d1e8: 0x0  nop
    ctx->pc = 0x27d1e8u;
    // NOP
label_27d1ec:
    // 0x27d1ec: 0x0  nop
    ctx->pc = 0x27d1ecu;
    // NOP
label_27d1f0:
    // 0x27d1f0: 0x144bb  dsra        $t0, $at, 18
    ctx->pc = 0x27d1f0u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 1) >> 18);
label_27d1f4:
    // 0x27d1f4: 0x9f60  .word       0x00009F60                   # add         $s3, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d1f4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 19, (int32_t)result);     } }
label_27d1f8:
    // 0x27d1f8: 0x0  nop
    ctx->pc = 0x27d1f8u;
    // NOP
label_27d1fc:
    // 0x27d1fc: 0x0  nop
    ctx->pc = 0x27d1fcu;
    // NOP
label_27d200:
    // 0x27d200: 0x144cf  .word       0x000144CF                   # sync.p # 00014000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d200u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_27d204:
    // 0x27d204: 0x6de0  .word       0x00006DE0                   # add         $t5, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d204u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_27d208:
    // 0x27d208: 0x0  nop
    ctx->pc = 0x27d208u;
    // NOP
label_27d20c:
    // 0x27d20c: 0x0  nop
    ctx->pc = 0x27d20cu;
    // NOP
label_27d210:
    // 0x27d210: 0x144dd  .word       0x000144DD                   # dmultu      $zero, $at # 000044C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d210u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x27D210 raw=0x000144DD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27d214:
    // 0x27d214: 0x6340  sll         $t4, $zero, 13
    ctx->pc = 0x27d214u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 13));
label_27d218:
    // 0x27d218: 0x0  nop
    ctx->pc = 0x27d218u;
    // NOP
label_27d21c:
    // 0x27d21c: 0x0  nop
    ctx->pc = 0x27d21cu;
    // NOP
label_27d220:
    // 0x27d220: 0x144ea  .word       0x000144EA                   # slt         $t0, $zero, $at # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d220u;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
label_27d224:
    // 0x27d224: 0xca80  sll         $t9, $zero, 10
    ctx->pc = 0x27d224u;
    SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 0), 10));
label_27d228:
    // 0x27d228: 0x0  nop
    ctx->pc = 0x27d228u;
    // NOP
label_27d22c:
    // 0x27d22c: 0x0  nop
    ctx->pc = 0x27d22cu;
    // NOP
label_27d230:
    // 0x27d230: 0x14504  .word       0x00014504                   # sllv        $t0, $at, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d230u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_27d234:
    // 0x27d234: 0x8260  .word       0x00008260                   # add         $s0, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d234u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_27d238:
    // 0x27d238: 0x0  nop
    ctx->pc = 0x27d238u;
    // NOP
label_27d23c:
    // 0x27d23c: 0x0  nop
    ctx->pc = 0x27d23cu;
    // NOP
label_27d240:
    // 0x27d240: 0x14515  .word       0x00014515                   # INVALID     $zero, $at, 0x4515 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d240u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x27D240 raw=0x00014515"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27d244:
    // 0x27d244: 0xc470  tge         $zero, $zero, 785
    ctx->pc = 0x27d244u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27d248:
    // 0x27d248: 0x0  nop
    ctx->pc = 0x27d248u;
    // NOP
label_27d24c:
    // 0x27d24c: 0x0  nop
    ctx->pc = 0x27d24cu;
    // NOP
label_27d250:
    // 0x27d250: 0x1452e  .word       0x0001452E                   # dsub        $t0, $zero, $at # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d250u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 1); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 8, r); }
label_27d254:
    // 0x27d254: 0xbd00  sll         $s7, $zero, 20
    ctx->pc = 0x27d254u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 0), 20));
label_27d258:
    // 0x27d258: 0x0  nop
    ctx->pc = 0x27d258u;
    // NOP
label_27d25c:
    // 0x27d25c: 0x0  nop
    ctx->pc = 0x27d25cu;
    // NOP
label_27d260:
    // 0x27d260: 0x14546  .word       0x00014546                   # srlv        $t0, $at, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d260u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_27d264:
    // 0x27d264: 0xef90  .word       0x0000EF90                   # mfhi        $sp # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d264u;
    SET_GPR_U64(ctx, 29, ctx->hi);
label_27d268:
    // 0x27d268: 0x0  nop
    ctx->pc = 0x27d268u;
    // NOP
label_27d26c:
    // 0x27d26c: 0x0  nop
    ctx->pc = 0x27d26cu;
    // NOP
label_27d270:
    // 0x27d270: 0x14564  .word       0x00014564                   # and         $t0, $zero, $at # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d270u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) & GPR_U64(ctx, 1));
label_27d274:
    // 0x27d274: 0xbf70  tge         $zero, $zero, 765
    ctx->pc = 0x27d274u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27d278:
    // 0x27d278: 0x0  nop
    ctx->pc = 0x27d278u;
    // NOP
label_27d27c:
    // 0x27d27c: 0x0  nop
    ctx->pc = 0x27d27cu;
    // NOP
label_27d280:
    // 0x27d280: 0x1457c  dsll32      $t0, $at, 21
    ctx->pc = 0x27d280u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 1) << (32 + 21));
label_27d284:
    // 0x27d284: 0xa240  sll         $s4, $zero, 9
    ctx->pc = 0x27d284u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 0), 9));
label_27d288:
    // 0x27d288: 0x0  nop
    ctx->pc = 0x27d288u;
    // NOP
label_27d28c:
    // 0x27d28c: 0x0  nop
    ctx->pc = 0x27d28cu;
    // NOP
label_27d290:
    // 0x27d290: 0x14591  .word       0x00014591                   # mthi        $zero # 00014580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d290u;
    ctx->hi = GPR_U64(ctx, 0);
label_27d294:
    // 0x27d294: 0xa210  .word       0x0000A210                   # mfhi        $s4 # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d294u;
    SET_GPR_U64(ctx, 20, ctx->hi);
label_27d298:
    // 0x27d298: 0x0  nop
    ctx->pc = 0x27d298u;
    // NOP
label_27d29c:
    // 0x27d29c: 0x0  nop
    ctx->pc = 0x27d29cu;
    // NOP
label_27d2a0:
    // 0x27d2a0: 0x145a6  .word       0x000145A6                   # xor         $t0, $zero, $at # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d2a0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 1));
label_27d2a4:
    // 0x27d2a4: 0x7b30  tge         $zero, $zero, 492
    ctx->pc = 0x27d2a4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27d2a8:
    // 0x27d2a8: 0x0  nop
    ctx->pc = 0x27d2a8u;
    // NOP
label_27d2ac:
    // 0x27d2ac: 0x0  nop
    ctx->pc = 0x27d2acu;
    // NOP
label_27d2b0:
    // 0x27d2b0: 0x145b6  tne         $zero, $at, 278
    ctx->pc = 0x27d2b0u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_27d2b4:
    // 0x27d2b4: 0xb750  .word       0x0000B750                   # mfhi        $s6 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d2b4u;
    SET_GPR_U64(ctx, 22, ctx->hi);
label_27d2b8:
    // 0x27d2b8: 0x0  nop
    ctx->pc = 0x27d2b8u;
    // NOP
label_27d2bc:
    // 0x27d2bc: 0x0  nop
    ctx->pc = 0x27d2bcu;
    // NOP
label_27d2c0:
    // 0x27d2c0: 0x145cd  break       1, 279
    ctx->pc = 0x27d2c0u;
    runtime->handleBreak(rdram, ctx);
label_27d2c4:
    // 0x27d2c4: 0xc350  .word       0x0000C350                   # mfhi        $t8 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d2c4u;
    SET_GPR_U64(ctx, 24, ctx->hi);
label_27d2c8:
    // 0x27d2c8: 0x0  nop
    ctx->pc = 0x27d2c8u;
    // NOP
label_27d2cc:
    // 0x27d2cc: 0x0  nop
    ctx->pc = 0x27d2ccu;
    // NOP
label_27d2d0:
    // 0x27d2d0: 0x145e6  .word       0x000145E6                   # xor         $t0, $zero, $at # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d2d0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 1));
label_27d2d4:
    // 0x27d2d4: 0xa5e0  .word       0x0000A5E0                   # add         $s4, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d2d4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_27d2d8:
    // 0x27d2d8: 0x0  nop
    ctx->pc = 0x27d2d8u;
    // NOP
label_27d2dc:
    // 0x27d2dc: 0x0  nop
    ctx->pc = 0x27d2dcu;
    // NOP
label_27d2e0:
    // 0x27d2e0: 0x145fb  dsra        $t0, $at, 23
    ctx->pc = 0x27d2e0u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 1) >> 23);
label_27d2e4:
    // 0x27d2e4: 0xac00  sll         $s5, $zero, 16
    ctx->pc = 0x27d2e4u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 0), 16));
label_27d2e8:
    // 0x27d2e8: 0x0  nop
    ctx->pc = 0x27d2e8u;
    // NOP
label_27d2ec:
    // 0x27d2ec: 0x0  nop
    ctx->pc = 0x27d2ecu;
    // NOP
label_27d2f0:
    // 0x27d2f0: 0x14611  .word       0x00014611                   # mthi        $zero # 00014600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d2f0u;
    ctx->hi = GPR_U64(ctx, 0);
label_27d2f4:
    // 0x27d2f4: 0x5900  sll         $t3, $zero, 4
    ctx->pc = 0x27d2f4u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 0), 4));
label_27d2f8:
    // 0x27d2f8: 0x0  nop
    ctx->pc = 0x27d2f8u;
    // NOP
label_27d2fc:
    // 0x27d2fc: 0x0  nop
    ctx->pc = 0x27d2fcu;
    // NOP
label_27d300:
    // 0x27d300: 0x1461d  .word       0x0001461D                   # dmultu      $zero, $at # 00004600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d300u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x27D300 raw=0x0001461D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27d304:
    // 0x27d304: 0xbac0  sll         $s7, $zero, 11
    ctx->pc = 0x27d304u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 0), 11));
label_27d308:
    // 0x27d308: 0x0  nop
    ctx->pc = 0x27d308u;
    // NOP
label_27d30c:
    // 0x27d30c: 0x0  nop
    ctx->pc = 0x27d30cu;
    // NOP
label_27d310:
    // 0x27d310: 0x14635  .word       0x00014635                   # INVALID     $zero, $at, 0x4635 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d310u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x27D310 raw=0x00014635"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27d314:
    // 0x27d314: 0x6df0  tge         $zero, $zero, 439
    ctx->pc = 0x27d314u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27d318:
    // 0x27d318: 0x0  nop
    ctx->pc = 0x27d318u;
    // NOP
label_27d31c:
    // 0x27d31c: 0x0  nop
    ctx->pc = 0x27d31cu;
    // NOP
label_27d320:
    // 0x27d320: 0x14643  sra         $t0, $at, 25
    ctx->pc = 0x27d320u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 1), 25));
label_27d324:
    // 0x27d324: 0x6470  tge         $zero, $zero, 401
    ctx->pc = 0x27d324u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27d328:
    // 0x27d328: 0x0  nop
    ctx->pc = 0x27d328u;
    // NOP
label_27d32c:
    // 0x27d32c: 0x0  nop
    ctx->pc = 0x27d32cu;
    // NOP
label_27d330:
    // 0x27d330: 0x14650  .word       0x00014650                   # mfhi        $t0 # 00010640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d330u;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_27d334:
    // 0x27d334: 0x9380  sll         $s2, $zero, 14
    ctx->pc = 0x27d334u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 0), 14));
label_27d338:
    // 0x27d338: 0x0  nop
    ctx->pc = 0x27d338u;
    // NOP
label_27d33c:
    // 0x27d33c: 0x0  nop
    ctx->pc = 0x27d33cu;
    // NOP
label_27d340:
    // 0x27d340: 0x14663  .word       0x00014663                   # negu        $t0, $at # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d340u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 1)));
label_27d344:
    // 0x27d344: 0x7f60  .word       0x00007F60                   # add         $t7, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d344u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_27d348:
    // 0x27d348: 0x0  nop
    ctx->pc = 0x27d348u;
    // NOP
label_27d34c:
    // 0x27d34c: 0x0  nop
    ctx->pc = 0x27d34cu;
    // NOP
label_27d350:
    // 0x27d350: 0x14673  tltu        $zero, $at, 281
    ctx->pc = 0x27d350u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_27d354:
    // 0x27d354: 0x4aa0  .word       0x00004AA0                   # add         $t1, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d354u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_27d358:
    // 0x27d358: 0x0  nop
    ctx->pc = 0x27d358u;
    // NOP
label_27d35c:
    // 0x27d35c: 0x0  nop
    ctx->pc = 0x27d35cu;
    // NOP
label_27d360:
    // 0x27d360: 0x1467d  .word       0x0001467D                   # INVALID     $zero, $at, 0x467D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d360u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x27D360 raw=0x0001467D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27d364:
    // 0x27d364: 0x4b60  .word       0x00004B60                   # add         $t1, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d364u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_27d368:
    // 0x27d368: 0x0  nop
    ctx->pc = 0x27d368u;
    // NOP
label_27d36c:
    // 0x27d36c: 0x0  nop
    ctx->pc = 0x27d36cu;
    // NOP
label_27d370:
    // 0x27d370: 0x14687  .word       0x00014687                   # srav        $t0, $at, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d370u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_27d374:
    // 0x27d374: 0x8910  .word       0x00008910                   # mfhi        $s1 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d374u;
    SET_GPR_U64(ctx, 17, ctx->hi);
label_27d378:
    // 0x27d378: 0x0  nop
    ctx->pc = 0x27d378u;
    // NOP
label_27d37c:
    // 0x27d37c: 0x0  nop
    ctx->pc = 0x27d37cu;
    // NOP
label_27d380:
    // 0x27d380: 0x14699  .word       0x00014699                   # multu       $zero, $at # 00004680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d380u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
label_27d384:
    // 0x27d384: 0x8ef0  tge         $zero, $zero, 571
    ctx->pc = 0x27d384u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27d388:
    // 0x27d388: 0x0  nop
    ctx->pc = 0x27d388u;
    // NOP
label_27d38c:
    // 0x27d38c: 0x0  nop
    ctx->pc = 0x27d38cu;
    // NOP
label_27d390:
    // 0x27d390: 0x146ab  .word       0x000146AB                   # sltu        $t0, $zero, $at # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d390u;
    SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
label_27d394:
    // 0x27d394: 0x6bf0  tge         $zero, $zero, 431
    ctx->pc = 0x27d394u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27d398:
    // 0x27d398: 0x0  nop
    ctx->pc = 0x27d398u;
    // NOP
label_27d39c:
    // 0x27d39c: 0x0  nop
    ctx->pc = 0x27d39cu;
    // NOP
label_27d3a0:
    // 0x27d3a0: 0x146b9  .word       0x000146B9                   # INVALID     $zero, $at, 0x46B9 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d3a0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x27D3A0 raw=0x000146B9"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27d3a4:
    // 0x27d3a4: 0x8ae0  .word       0x00008AE0                   # add         $s1, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d3a4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_27d3a8:
    // 0x27d3a8: 0x0  nop
    ctx->pc = 0x27d3a8u;
    // NOP
label_27d3ac:
    // 0x27d3ac: 0x0  nop
    ctx->pc = 0x27d3acu;
    // NOP
label_27d3b0:
    // 0x27d3b0: 0x146cb  .word       0x000146CB                   # movn        $t0, $zero, $at # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d3b0u;
    if (GPR_U64(ctx, 1) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 0));
label_27d3b4:
    // 0x27d3b4: 0xa800  sll         $s5, $zero, 0
    ctx->pc = 0x27d3b4u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_27d3b8:
    // 0x27d3b8: 0x0  nop
    ctx->pc = 0x27d3b8u;
    // NOP
label_27d3bc:
    // 0x27d3bc: 0x0  nop
    ctx->pc = 0x27d3bcu;
    // NOP
label_27d3c0:
    // 0x27d3c0: 0x146e0  .word       0x000146E0                   # add         $t0, $zero, $at # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d3c0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
label_27d3c4:
    // 0x27d3c4: 0xab50  .word       0x0000AB50                   # mfhi        $s5 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d3c4u;
    SET_GPR_U64(ctx, 21, ctx->hi);
label_27d3c8:
    // 0x27d3c8: 0x0  nop
    ctx->pc = 0x27d3c8u;
    // NOP
label_27d3cc:
    // 0x27d3cc: 0x0  nop
    ctx->pc = 0x27d3ccu;
    // NOP
label_27d3d0:
    // 0x27d3d0: 0x146f6  tne         $zero, $at, 283
    ctx->pc = 0x27d3d0u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_27d3d4:
    // 0x27d3d4: 0x3260  .word       0x00003260                   # add         $a2, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d3d4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 6, (int32_t)result);     } }
label_27d3d8:
    // 0x27d3d8: 0x0  nop
    ctx->pc = 0x27d3d8u;
    // NOP
label_27d3dc:
    // 0x27d3dc: 0x0  nop
    ctx->pc = 0x27d3dcu;
    // NOP
label_27d3e0:
    // 0x27d3e0: 0x146fd  .word       0x000146FD                   # INVALID     $zero, $at, 0x46FD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d3e0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x27D3E0 raw=0x000146FD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27d3e4:
    // 0x27d3e4: 0xbf80  sll         $s7, $zero, 30
    ctx->pc = 0x27d3e4u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 0), 30));
label_27d3e8:
    // 0x27d3e8: 0x0  nop
    ctx->pc = 0x27d3e8u;
    // NOP
label_27d3ec:
    // 0x27d3ec: 0x0  nop
    ctx->pc = 0x27d3ecu;
    // NOP
label_27d3f0:
    // 0x27d3f0: 0x14715  .word       0x00014715                   # INVALID     $zero, $at, 0x4715 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d3f0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x27D3F0 raw=0x00014715"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27d3f4:
    // 0x27d3f4: 0xbdc0  sll         $s7, $zero, 23
    ctx->pc = 0x27d3f4u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 0), 23));
label_27d3f8:
    // 0x27d3f8: 0x0  nop
    ctx->pc = 0x27d3f8u;
    // NOP
label_27d3fc:
    // 0x27d3fc: 0x0  nop
    ctx->pc = 0x27d3fcu;
    // NOP
label_27d400:
    // 0x27d400: 0x1472d  .word       0x0001472D                   # daddu       $t0, $zero, $at # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d400u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 1));
label_27d404:
    // 0x27d404: 0xad10  .word       0x0000AD10                   # mfhi        $s5 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d404u;
    SET_GPR_U64(ctx, 21, ctx->hi);
label_27d408:
    // 0x27d408: 0x0  nop
    ctx->pc = 0x27d408u;
    // NOP
label_27d40c:
    // 0x27d40c: 0x0  nop
    ctx->pc = 0x27d40cu;
    // NOP
label_27d410:
    // 0x27d410: 0x14743  sra         $t0, $at, 29
    ctx->pc = 0x27d410u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 1), 29));
label_27d414:
    // 0x27d414: 0x71e0  .word       0x000071E0                   # add         $t6, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d414u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_27d418:
    // 0x27d418: 0x0  nop
    ctx->pc = 0x27d418u;
    // NOP
label_27d41c:
    // 0x27d41c: 0x0  nop
    ctx->pc = 0x27d41cu;
    // NOP
label_27d420:
    // 0x27d420: 0x14752  .word       0x00014752                   # mflo        $t0 # 00010740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d420u;
    SET_GPR_U64(ctx, 8, ctx->lo);
label_27d424:
    // 0x27d424: 0xbb40  sll         $s7, $zero, 13
    ctx->pc = 0x27d424u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 0), 13));
label_27d428:
    // 0x27d428: 0x0  nop
    ctx->pc = 0x27d428u;
    // NOP
label_27d42c:
    // 0x27d42c: 0x0  nop
    ctx->pc = 0x27d42cu;
    // NOP
label_27d430:
    // 0x27d430: 0x1476a  .word       0x0001476A                   # slt         $t0, $zero, $at # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d430u;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
label_27d434:
    // 0x27d434: 0xb270  tge         $zero, $zero, 713
    ctx->pc = 0x27d434u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27d438:
    // 0x27d438: 0x0  nop
    ctx->pc = 0x27d438u;
    // NOP
label_27d43c:
    // 0x27d43c: 0x0  nop
    ctx->pc = 0x27d43cu;
    // NOP
label_27d440:
    // 0x27d440: 0x14781  .word       0x00014781                   # INVALID     $zero, $at, 0x4781 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d440u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x27D440 raw=0x00014781"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27d444:
    // 0x27d444: 0xcc60  .word       0x0000CC60                   # add         $t9, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d444u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 25, (int32_t)result);     } }
label_27d448:
    // 0x27d448: 0x0  nop
    ctx->pc = 0x27d448u;
    // NOP
label_27d44c:
    // 0x27d44c: 0x0  nop
    ctx->pc = 0x27d44cu;
    // NOP
label_27d450:
    // 0x27d450: 0x1479b  .word       0x0001479B                   # divu        $t0, $zero, $at # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d450u;
    { uint32_t divisor = GPR_U32(ctx, 1); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_27d454:
    // 0x27d454: 0xd160  .word       0x0000D160                   # add         $k0, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d454u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 26, (int32_t)result);     } }
label_27d458:
    // 0x27d458: 0x0  nop
    ctx->pc = 0x27d458u;
    // NOP
label_27d45c:
    // 0x27d45c: 0x0  nop
    ctx->pc = 0x27d45cu;
    // NOP
label_27d460:
    // 0x27d460: 0x147b6  tne         $zero, $at, 286
    ctx->pc = 0x27d460u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_27d464:
    // 0x27d464: 0x6fc0  sll         $t5, $zero, 31
    ctx->pc = 0x27d464u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 0), 31));
label_27d468:
    // 0x27d468: 0x0  nop
    ctx->pc = 0x27d468u;
    // NOP
label_27d46c:
    // 0x27d46c: 0x0  nop
    ctx->pc = 0x27d46cu;
    // NOP
label_27d470:
    // 0x27d470: 0x147c4  .word       0x000147C4                   # sllv        $t0, $at, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d470u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_27d474:
    // 0x27d474: 0x73e0  .word       0x000073E0                   # add         $t6, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d474u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_27d478:
    // 0x27d478: 0x0  nop
    ctx->pc = 0x27d478u;
    // NOP
label_27d47c:
    // 0x27d47c: 0x0  nop
    ctx->pc = 0x27d47cu;
    // NOP
label_27d480:
    // 0x27d480: 0x147d3  .word       0x000147D3                   # mtlo        $zero # 000147C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d480u;
    ctx->lo = GPR_U64(ctx, 0);
label_27d484:
    // 0x27d484: 0xd280  sll         $k0, $zero, 10
    ctx->pc = 0x27d484u;
    SET_GPR_S32(ctx, 26, (int32_t)SLL32(GPR_U32(ctx, 0), 10));
label_27d488:
    // 0x27d488: 0x0  nop
    ctx->pc = 0x27d488u;
    // NOP
label_27d48c:
    // 0x27d48c: 0x0  nop
    ctx->pc = 0x27d48cu;
    // NOP
label_27d490:
    // 0x27d490: 0x147ee  .word       0x000147EE                   # dsub        $t0, $zero, $at # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d490u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 1); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 8, r); }
label_27d494:
    // 0x27d494: 0xa410  .word       0x0000A410                   # mfhi        $s4 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d494u;
    SET_GPR_U64(ctx, 20, ctx->hi);
label_27d498:
    // 0x27d498: 0x0  nop
    ctx->pc = 0x27d498u;
    // NOP
label_27d49c:
    // 0x27d49c: 0x0  nop
    ctx->pc = 0x27d49cu;
    // NOP
label_27d4a0:
    // 0x27d4a0: 0x14803  sra         $t1, $at, 0
    ctx->pc = 0x27d4a0u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 1), 0));
label_27d4a4:
    // 0x27d4a4: 0xcea0  .word       0x0000CEA0                   # add         $t9, $zero, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d4a4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 25, (int32_t)result);     } }
label_27d4a8:
    // 0x27d4a8: 0x0  nop
    ctx->pc = 0x27d4a8u;
    // NOP
label_27d4ac:
    // 0x27d4ac: 0x0  nop
    ctx->pc = 0x27d4acu;
    // NOP
label_27d4b0:
    // 0x27d4b0: 0x1481d  .word       0x0001481D                   # dmultu      $zero, $at # 00004800 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d4b0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x27D4B0 raw=0x0001481D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27d4b4:
    // 0x27d4b4: 0xa670  tge         $zero, $zero, 665
    ctx->pc = 0x27d4b4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27d4b8:
    // 0x27d4b8: 0x0  nop
    ctx->pc = 0x27d4b8u;
    // NOP
label_27d4bc:
    // 0x27d4bc: 0x0  nop
    ctx->pc = 0x27d4bcu;
    // NOP
label_27d4c0:
    // 0x27d4c0: 0x14832  tlt         $zero, $at, 288
    ctx->pc = 0x27d4c0u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_27d4c4:
    // 0x27d4c4: 0x94d0  .word       0x000094D0                   # mfhi        $s2 # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d4c4u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_27d4c8:
    // 0x27d4c8: 0x0  nop
    ctx->pc = 0x27d4c8u;
    // NOP
label_27d4cc:
    // 0x27d4cc: 0x0  nop
    ctx->pc = 0x27d4ccu;
    // NOP
label_27d4d0:
    // 0x27d4d0: 0x14845  .word       0x00014845                   # INVALID     $zero, $at, 0x4845 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d4d0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x27D4D0 raw=0x00014845"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27d4d4:
    // 0x27d4d4: 0x7ec0  sll         $t7, $zero, 27
    ctx->pc = 0x27d4d4u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 0), 27));
label_27d4d8:
    // 0x27d4d8: 0x0  nop
    ctx->pc = 0x27d4d8u;
    // NOP
label_27d4dc:
    // 0x27d4dc: 0x0  nop
    ctx->pc = 0x27d4dcu;
    // NOP
label_27d4e0:
    // 0x27d4e0: 0x14855  .word       0x00014855                   # INVALID     $zero, $at, 0x4855 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d4e0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x27D4E0 raw=0x00014855"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27d4e4:
    // 0x27d4e4: 0x5750  .word       0x00005750                   # mfhi        $t2 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d4e4u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_27d4e8:
    // 0x27d4e8: 0x0  nop
    ctx->pc = 0x27d4e8u;
    // NOP
label_27d4ec:
    // 0x27d4ec: 0x0  nop
    ctx->pc = 0x27d4ecu;
    // NOP
label_27d4f0:
    // 0x27d4f0: 0x14860  .word       0x00014860                   # add         $t1, $zero, $at # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d4f0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_27d4f4:
    // 0x27d4f4: 0x6300  sll         $t4, $zero, 12
    ctx->pc = 0x27d4f4u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 12));
label_27d4f8:
    // 0x27d4f8: 0x0  nop
    ctx->pc = 0x27d4f8u;
    // NOP
label_27d4fc:
    // 0x27d4fc: 0x0  nop
    ctx->pc = 0x27d4fcu;
    // NOP
label_27d500:
    // 0x27d500: 0x1486d  .word       0x0001486D                   # daddu       $t1, $zero, $at # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d500u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 1));
label_27d504:
    // 0x27d504: 0x93d0  .word       0x000093D0                   # mfhi        $s2 # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d504u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_27d508:
    // 0x27d508: 0x0  nop
    ctx->pc = 0x27d508u;
    // NOP
label_27d50c:
    // 0x27d50c: 0x0  nop
    ctx->pc = 0x27d50cu;
    // NOP
label_27d510:
    // 0x27d510: 0x14880  sll         $t1, $at, 2
    ctx->pc = 0x27d510u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 1), 2));
label_27d514:
    // 0x27d514: 0xf3b0  tge         $zero, $zero, 974
    ctx->pc = 0x27d514u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27d518:
    // 0x27d518: 0x0  nop
    ctx->pc = 0x27d518u;
    // NOP
label_27d51c:
    // 0x27d51c: 0x0  nop
    ctx->pc = 0x27d51cu;
    // NOP
label_27d520:
    // 0x27d520: 0x1489f  .word       0x0001489F                   # ddivu       $t1, $zero, $at # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d520u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x27D520 raw=0x0001489F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27d524:
    // 0x27d524: 0xa7b0  tge         $zero, $zero, 670
    ctx->pc = 0x27d524u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27d528:
    // 0x27d528: 0x0  nop
    ctx->pc = 0x27d528u;
    // NOP
label_27d52c:
    // 0x27d52c: 0x0  nop
    ctx->pc = 0x27d52cu;
    // NOP
label_27d530:
    // 0x27d530: 0x148b4  teq         $zero, $at, 290
    ctx->pc = 0x27d530u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_27d534:
    // 0x27d534: 0x80a0  .word       0x000080A0                   # add         $s0, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d534u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_27d538:
    // 0x27d538: 0x0  nop
    ctx->pc = 0x27d538u;
    // NOP
label_27d53c:
    // 0x27d53c: 0x0  nop
    ctx->pc = 0x27d53cu;
    // NOP
label_27d540:
    // 0x27d540: 0x148c5  .word       0x000148C5                   # INVALID     $zero, $at, 0x48C5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d540u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x27D540 raw=0x000148C5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27d544:
    // 0x27d544: 0xcda0  .word       0x0000CDA0                   # add         $t9, $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d544u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 25, (int32_t)result);     } }
label_27d548:
    // 0x27d548: 0x0  nop
    ctx->pc = 0x27d548u;
    // NOP
label_27d54c:
    // 0x27d54c: 0x0  nop
    ctx->pc = 0x27d54cu;
    // NOP
label_27d550:
    // 0x27d550: 0x148df  .word       0x000148DF                   # ddivu       $t1, $zero, $at # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d550u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x27D550 raw=0x000148DF"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27d554:
    // 0x27d554: 0x11a80  sll         $v1, $at, 10
    ctx->pc = 0x27d554u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 1), 10));
label_27d558:
    // 0x27d558: 0x0  nop
    ctx->pc = 0x27d558u;
    // NOP
label_27d55c:
    // 0x27d55c: 0x0  nop
    ctx->pc = 0x27d55cu;
    // NOP
label_27d560:
    // 0x27d560: 0x14903  sra         $t1, $at, 4
    ctx->pc = 0x27d560u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 1), 4));
label_27d564:
    // 0x27d564: 0x9de0  .word       0x00009DE0                   # add         $s3, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d564u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 19, (int32_t)result);     } }
label_27d568:
    // 0x27d568: 0x0  nop
    ctx->pc = 0x27d568u;
    // NOP
label_27d56c:
    // 0x27d56c: 0x0  nop
    ctx->pc = 0x27d56cu;
    // NOP
label_27d570:
    // 0x27d570: 0x14917  .word       0x00014917                   # dsrav       $t1, $at, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d570u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 1) >> (GPR_U32(ctx, 0) & 0x3F));
label_27d574:
    // 0x27d574: 0xbe50  .word       0x0000BE50                   # mfhi        $s7 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d574u;
    SET_GPR_U64(ctx, 23, ctx->hi);
label_27d578:
    // 0x27d578: 0x0  nop
    ctx->pc = 0x27d578u;
    // NOP
label_27d57c:
    // 0x27d57c: 0x0  nop
    ctx->pc = 0x27d57cu;
    // NOP
label_27d580:
    // 0x27d580: 0x1492f  .word       0x0001492F                   # dsubu       $t1, $zero, $at # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d580u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) - GPR_U64(ctx, 1));
label_27d584:
    // 0x27d584: 0xbbd0  .word       0x0000BBD0                   # mfhi        $s7 # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d584u;
    SET_GPR_U64(ctx, 23, ctx->hi);
label_27d588:
    // 0x27d588: 0x0  nop
    ctx->pc = 0x27d588u;
    // NOP
label_27d58c:
    // 0x27d58c: 0x0  nop
    ctx->pc = 0x27d58cu;
    // NOP
label_27d590:
    // 0x27d590: 0x14947  .word       0x00014947                   # srav        $t1, $at, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d590u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_27d594:
    // 0x27d594: 0xa4b0  tge         $zero, $zero, 658
    ctx->pc = 0x27d594u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27d598:
    // 0x27d598: 0x0  nop
    ctx->pc = 0x27d598u;
    // NOP
label_27d59c:
    // 0x27d59c: 0x0  nop
    ctx->pc = 0x27d59cu;
    // NOP
label_27d5a0:
    // 0x27d5a0: 0x1495c  .word       0x0001495C                   # dmult       $zero, $at # 00004940 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d5a0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x27D5A0 raw=0x0001495C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27d5a4:
    // 0x27d5a4: 0xcb00  sll         $t9, $zero, 12
    ctx->pc = 0x27d5a4u;
    SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 0), 12));
label_27d5a8:
    // 0x27d5a8: 0x0  nop
    ctx->pc = 0x27d5a8u;
    // NOP
label_27d5ac:
    // 0x27d5ac: 0x0  nop
    ctx->pc = 0x27d5acu;
    // NOP
label_27d5b0:
    // 0x27d5b0: 0x14976  tne         $zero, $at, 293
    ctx->pc = 0x27d5b0u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_27d5b4:
    // 0x27d5b4: 0x8460  .word       0x00008460                   # add         $s0, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d5b4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_27d5b8:
    // 0x27d5b8: 0x0  nop
    ctx->pc = 0x27d5b8u;
    // NOP
label_27d5bc:
    // 0x27d5bc: 0x0  nop
    ctx->pc = 0x27d5bcu;
    // NOP
label_27d5c0:
    // 0x27d5c0: 0x14987  .word       0x00014987                   # srav        $t1, $at, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d5c0u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_27d5c4:
    // 0x27d5c4: 0x3980  sll         $a3, $zero, 6
    ctx->pc = 0x27d5c4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 0), 6));
label_27d5c8:
    // 0x27d5c8: 0x0  nop
    ctx->pc = 0x27d5c8u;
    // NOP
label_27d5cc:
    // 0x27d5cc: 0x0  nop
    ctx->pc = 0x27d5ccu;
    // NOP
label_27d5d0:
    // 0x27d5d0: 0x1498f  .word       0x0001498F                   # sync # 00014800 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d5d0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_27d5d4:
    // 0x27d5d4: 0x2cf0  tge         $zero, $zero, 179
    ctx->pc = 0x27d5d4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27d5d8:
    // 0x27d5d8: 0x0  nop
    ctx->pc = 0x27d5d8u;
    // NOP
label_27d5dc:
    // 0x27d5dc: 0x0  nop
    ctx->pc = 0x27d5dcu;
    // NOP
label_27d5e0:
    // 0x27d5e0: 0x14995  .word       0x00014995                   # INVALID     $zero, $at, 0x4995 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d5e0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x27D5E0 raw=0x00014995"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27d5e4:
    // 0x27d5e4: 0x7dc0  sll         $t7, $zero, 23
    ctx->pc = 0x27d5e4u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 0), 23));
label_27d5e8:
    // 0x27d5e8: 0x0  nop
    ctx->pc = 0x27d5e8u;
    // NOP
label_27d5ec:
    // 0x27d5ec: 0x0  nop
    ctx->pc = 0x27d5ecu;
    // NOP
label_27d5f0:
    // 0x27d5f0: 0x149a5  .word       0x000149A5                   # or          $t1, $zero, $at # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d5f0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) | GPR_U64(ctx, 1));
label_27d5f4:
    // 0x27d5f4: 0x9e40  sll         $s3, $zero, 25
    ctx->pc = 0x27d5f4u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 0), 25));
label_27d5f8:
    // 0x27d5f8: 0x0  nop
    ctx->pc = 0x27d5f8u;
    // NOP
label_27d5fc:
    // 0x27d5fc: 0x0  nop
    ctx->pc = 0x27d5fcu;
    // NOP
label_27d600:
    // 0x27d600: 0x149b9  .word       0x000149B9                   # INVALID     $zero, $at, 0x49B9 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d600u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x27D600 raw=0x000149B9"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27d604:
    // 0x27d604: 0x5450  .word       0x00005450                   # mfhi        $t2 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d604u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_27d608:
    // 0x27d608: 0x0  nop
    ctx->pc = 0x27d608u;
    // NOP
label_27d60c:
    // 0x27d60c: 0x0  nop
    ctx->pc = 0x27d60cu;
    // NOP
label_27d610:
    // 0x27d610: 0x149c4  .word       0x000149C4                   # sllv        $t1, $at, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d610u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_27d614:
    // 0x27d614: 0xea50  .word       0x0000EA50                   # mfhi        $sp # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d614u;
    SET_GPR_U64(ctx, 29, ctx->hi);
label_27d618:
    // 0x27d618: 0x0  nop
    ctx->pc = 0x27d618u;
    // NOP
label_27d61c:
    // 0x27d61c: 0x0  nop
    ctx->pc = 0x27d61cu;
    // NOP
label_27d620:
    // 0x27d620: 0x149e2  .word       0x000149E2                   # neg         $t1, $at # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d620u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 1), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 9, (int32_t)tmp); }
label_27d624:
    // 0x27d624: 0x62a0  .word       0x000062A0                   # add         $t4, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d624u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_27d628:
    // 0x27d628: 0x0  nop
    ctx->pc = 0x27d628u;
    // NOP
label_27d62c:
    // 0x27d62c: 0x0  nop
    ctx->pc = 0x27d62cu;
    // NOP
label_27d630:
    // 0x27d630: 0x149ef  .word       0x000149EF                   # dsubu       $t1, $zero, $at # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d630u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) - GPR_U64(ctx, 1));
label_27d634:
    // 0x27d634: 0xa080  sll         $s4, $zero, 2
    ctx->pc = 0x27d634u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 0), 2));
label_27d638:
    // 0x27d638: 0x0  nop
    ctx->pc = 0x27d638u;
    // NOP
label_27d63c:
    // 0x27d63c: 0x0  nop
    ctx->pc = 0x27d63cu;
    // NOP
label_27d640:
    // 0x27d640: 0x14a04  .word       0x00014A04                   # sllv        $t1, $at, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d640u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_27d644:
    // 0x27d644: 0x8ed0  .word       0x00008ED0                   # mfhi        $s1 # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d644u;
    SET_GPR_U64(ctx, 17, ctx->hi);
label_27d648:
    // 0x27d648: 0x0  nop
    ctx->pc = 0x27d648u;
    // NOP
label_27d64c:
    // 0x27d64c: 0x0  nop
    ctx->pc = 0x27d64cu;
    // NOP
label_27d650:
    // 0x27d650: 0x14a16  .word       0x00014A16                   # dsrlv       $t1, $at, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d650u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 1) >> (GPR_U32(ctx, 0) & 0x3F));
label_27d654:
    // 0x27d654: 0xaea0  .word       0x0000AEA0                   # add         $s5, $zero, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d654u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 21, (int32_t)result);     } }
label_27d658:
    // 0x27d658: 0x0  nop
    ctx->pc = 0x27d658u;
    // NOP
label_27d65c:
    // 0x27d65c: 0x0  nop
    ctx->pc = 0x27d65cu;
    // NOP
label_27d660:
    // 0x27d660: 0x14a2c  .word       0x00014A2C                   # dadd        $t1, $zero, $at # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d660u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 1); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 9, r); }
label_27d664:
    // 0x27d664: 0x4ba0  .word       0x00004BA0                   # add         $t1, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d664u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_27d668:
    // 0x27d668: 0x0  nop
    ctx->pc = 0x27d668u;
    // NOP
label_27d66c:
    // 0x27d66c: 0x0  nop
    ctx->pc = 0x27d66cu;
    // NOP
label_27d670:
    // 0x27d670: 0x14a36  tne         $zero, $at, 296
    ctx->pc = 0x27d670u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_27d674:
    // 0x27d674: 0x67f0  tge         $zero, $zero, 415
    ctx->pc = 0x27d674u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27d678:
    // 0x27d678: 0x0  nop
    ctx->pc = 0x27d678u;
    // NOP
label_27d67c:
    // 0x27d67c: 0x0  nop
    ctx->pc = 0x27d67cu;
    // NOP
label_27d680:
    // 0x27d680: 0x14a43  sra         $t1, $at, 9
    ctx->pc = 0x27d680u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 1), 9));
label_27d684:
    // 0x27d684: 0x4e30  tge         $zero, $zero, 312
    ctx->pc = 0x27d684u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27d688:
    // 0x27d688: 0x0  nop
    ctx->pc = 0x27d688u;
    // NOP
label_27d68c:
    // 0x27d68c: 0x0  nop
    ctx->pc = 0x27d68cu;
    // NOP
label_27d690:
    // 0x27d690: 0x14a4d  break       1, 297
    ctx->pc = 0x27d690u;
    runtime->handleBreak(rdram, ctx);
label_27d694:
    // 0x27d694: 0x13c0  sll         $v0, $zero, 15
    ctx->pc = 0x27d694u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 0), 15));
label_27d698:
    // 0x27d698: 0x0  nop
    ctx->pc = 0x27d698u;
    // NOP
label_27d69c:
    // 0x27d69c: 0x0  nop
    ctx->pc = 0x27d69cu;
    // NOP
label_27d6a0:
    // 0x27d6a0: 0x14a50  .word       0x00014A50                   # mfhi        $t1 # 00010240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d6a0u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_27d6a4:
    // 0x27d6a4: 0x91e0  .word       0x000091E0                   # add         $s2, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d6a4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 18, (int32_t)result);     } }
label_27d6a8:
    // 0x27d6a8: 0x0  nop
    ctx->pc = 0x27d6a8u;
    // NOP
label_27d6ac:
    // 0x27d6ac: 0x0  nop
    ctx->pc = 0x27d6acu;
    // NOP
label_27d6b0:
    // 0x27d6b0: 0x14a63  .word       0x00014A63                   # negu        $t1, $at # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d6b0u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 1)));
label_27d6b4:
    // 0x27d6b4: 0xbff0  tge         $zero, $zero, 767
    ctx->pc = 0x27d6b4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27d6b8:
    // 0x27d6b8: 0x0  nop
    ctx->pc = 0x27d6b8u;
    // NOP
label_27d6bc:
    // 0x27d6bc: 0x0  nop
    ctx->pc = 0x27d6bcu;
    // NOP
label_27d6c0:
    // 0x27d6c0: 0x14a7b  dsra        $t1, $at, 9
    ctx->pc = 0x27d6c0u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 1) >> 9);
label_27d6c4:
    // 0x27d6c4: 0x6560  .word       0x00006560                   # add         $t4, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d6c4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_27d6c8:
    // 0x27d6c8: 0x0  nop
    ctx->pc = 0x27d6c8u;
    // NOP
label_27d6cc:
    // 0x27d6cc: 0x0  nop
    ctx->pc = 0x27d6ccu;
    // NOP
label_27d6d0:
    // 0x27d6d0: 0x14a88  .word       0x00014A88                   # jr          $zero # 00014A80 <InstrIdType: CPU_SPECIAL>
label_27d6d4:
    if (ctx->pc == 0x27D6D4u) {
        ctx->pc = 0x27D6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D6D0u;
        // 0x27d6d4: 0x7340  sll         $t6, $zero, 13 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27D6D8u;
        goto label_27d6d8;
    }
    ctx->pc = 0x27D6D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x27D6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D6D0u;
        // 0x27d6d4: 0x7340  sll         $t6, $zero, 13 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27D6D0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x27D6D8u;
label_27d6d8:
    // 0x27d6d8: 0x0  nop
    ctx->pc = 0x27d6d8u;
    // NOP
label_27d6dc:
    // 0x27d6dc: 0x0  nop
    ctx->pc = 0x27d6dcu;
    // NOP
label_27d6e0:
    // 0x27d6e0: 0x14a97  .word       0x00014A97                   # dsrav       $t1, $at, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d6e0u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 1) >> (GPR_U32(ctx, 0) & 0x3F));
label_27d6e4:
    // 0x27d6e4: 0xa250  .word       0x0000A250                   # mfhi        $s4 # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d6e4u;
    SET_GPR_U64(ctx, 20, ctx->hi);
label_27d6e8:
    // 0x27d6e8: 0x0  nop
    ctx->pc = 0x27d6e8u;
    // NOP
label_27d6ec:
    // 0x27d6ec: 0x0  nop
    ctx->pc = 0x27d6ecu;
    // NOP
label_27d6f0:
    // 0x27d6f0: 0x14aac  .word       0x00014AAC                   # dadd        $t1, $zero, $at # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d6f0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 1); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 9, r); }
label_27d6f4:
    // 0x27d6f4: 0x5470  tge         $zero, $zero, 337
    ctx->pc = 0x27d6f4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27d6f8:
    // 0x27d6f8: 0x0  nop
    ctx->pc = 0x27d6f8u;
    // NOP
label_27d6fc:
    // 0x27d6fc: 0x0  nop
    ctx->pc = 0x27d6fcu;
    // NOP
label_27d700:
    // 0x27d700: 0x14ab7  .word       0x00014AB7                   # INVALID     $zero, $at, 0x4AB7 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d700u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x27D700 raw=0x00014AB7"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27d704:
    // 0x27d704: 0xf020  add         $fp, $zero, $zero
    ctx->pc = 0x27d704u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 30, (int32_t)result);     } }
label_27d708:
    // 0x27d708: 0x0  nop
    ctx->pc = 0x27d708u;
    // NOP
label_27d70c:
    // 0x27d70c: 0x0  nop
    ctx->pc = 0x27d70cu;
    // NOP
label_27d710:
    // 0x27d710: 0x14ad6  .word       0x00014AD6                   # dsrlv       $t1, $at, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d710u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 1) >> (GPR_U32(ctx, 0) & 0x3F));
label_27d714:
    // 0x27d714: 0x4d00  sll         $t1, $zero, 20
    ctx->pc = 0x27d714u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), 20));
label_27d718:
    // 0x27d718: 0x0  nop
    ctx->pc = 0x27d718u;
    // NOP
label_27d71c:
    // 0x27d71c: 0x0  nop
    ctx->pc = 0x27d71cu;
    // NOP
label_27d720:
    // 0x27d720: 0x14ae0  .word       0x00014AE0                   # add         $t1, $zero, $at # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d720u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_27d724:
    // 0x27d724: 0x8cf0  tge         $zero, $zero, 563
    ctx->pc = 0x27d724u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27d728:
    // 0x27d728: 0x0  nop
    ctx->pc = 0x27d728u;
    // NOP
label_27d72c:
    // 0x27d72c: 0x0  nop
    ctx->pc = 0x27d72cu;
    // NOP
label_27d730:
    // 0x27d730: 0x14af2  tlt         $zero, $at, 299
    ctx->pc = 0x27d730u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_27d734:
    // 0x27d734: 0xb280  sll         $s6, $zero, 10
    ctx->pc = 0x27d734u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 0), 10));
label_27d738:
    // 0x27d738: 0x0  nop
    ctx->pc = 0x27d738u;
    // NOP
label_27d73c:
    // 0x27d73c: 0x0  nop
    ctx->pc = 0x27d73cu;
    // NOP
    ctx->pc = 0x27d740u;
    return;
}
