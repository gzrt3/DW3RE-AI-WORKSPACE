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


void FUN_0014eba0_part30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x15ce30u: goto label_15ce30;
        case 0x15ce34u: goto label_15ce34;
        case 0x15ce38u: goto label_15ce38;
        case 0x15ce3cu: goto label_15ce3c;
        case 0x15ce40u: goto label_15ce40;
        case 0x15ce44u: goto label_15ce44;
        case 0x15ce48u: goto label_15ce48;
        case 0x15ce4cu: goto label_15ce4c;
        case 0x15ce50u: goto label_15ce50;
        case 0x15ce54u: goto label_15ce54;
        case 0x15ce58u: goto label_15ce58;
        case 0x15ce5cu: goto label_15ce5c;
        case 0x15ce60u: goto label_15ce60;
        case 0x15ce64u: goto label_15ce64;
        case 0x15ce68u: goto label_15ce68;
        case 0x15ce6cu: goto label_15ce6c;
        case 0x15ce70u: goto label_15ce70;
        case 0x15ce74u: goto label_15ce74;
        case 0x15ce78u: goto label_15ce78;
        case 0x15ce7cu: goto label_15ce7c;
        case 0x15ce80u: goto label_15ce80;
        case 0x15ce84u: goto label_15ce84;
        case 0x15ce88u: goto label_15ce88;
        case 0x15ce8cu: goto label_15ce8c;
        case 0x15ce90u: goto label_15ce90;
        case 0x15ce94u: goto label_15ce94;
        case 0x15ce98u: goto label_15ce98;
        case 0x15ce9cu: goto label_15ce9c;
        case 0x15cea0u: goto label_15cea0;
        case 0x15cea4u: goto label_15cea4;
        case 0x15cea8u: goto label_15cea8;
        case 0x15ceacu: goto label_15ceac;
        case 0x15ceb0u: goto label_15ceb0;
        case 0x15ceb4u: goto label_15ceb4;
        case 0x15ceb8u: goto label_15ceb8;
        case 0x15cebcu: goto label_15cebc;
        case 0x15cec0u: goto label_15cec0;
        case 0x15cec4u: goto label_15cec4;
        case 0x15cec8u: goto label_15cec8;
        case 0x15ceccu: goto label_15cecc;
        case 0x15ced0u: goto label_15ced0;
        case 0x15ced4u: goto label_15ced4;
        case 0x15ced8u: goto label_15ced8;
        case 0x15cedcu: goto label_15cedc;
        case 0x15cee0u: goto label_15cee0;
        case 0x15cee4u: goto label_15cee4;
        case 0x15cee8u: goto label_15cee8;
        case 0x15ceecu: goto label_15ceec;
        case 0x15cef0u: goto label_15cef0;
        case 0x15cef4u: goto label_15cef4;
        case 0x15cef8u: goto label_15cef8;
        case 0x15cefcu: goto label_15cefc;
        case 0x15cf00u: goto label_15cf00;
        case 0x15cf04u: goto label_15cf04;
        case 0x15cf08u: goto label_15cf08;
        case 0x15cf0cu: goto label_15cf0c;
        case 0x15cf10u: goto label_15cf10;
        case 0x15cf14u: goto label_15cf14;
        case 0x15cf18u: goto label_15cf18;
        case 0x15cf1cu: goto label_15cf1c;
        case 0x15cf20u: goto label_15cf20;
        case 0x15cf24u: goto label_15cf24;
        case 0x15cf28u: goto label_15cf28;
        case 0x15cf2cu: goto label_15cf2c;
        case 0x15cf30u: goto label_15cf30;
        case 0x15cf34u: goto label_15cf34;
        case 0x15cf38u: goto label_15cf38;
        case 0x15cf3cu: goto label_15cf3c;
        case 0x15cf40u: goto label_15cf40;
        case 0x15cf44u: goto label_15cf44;
        case 0x15cf48u: goto label_15cf48;
        case 0x15cf4cu: goto label_15cf4c;
        case 0x15cf50u: goto label_15cf50;
        case 0x15cf54u: goto label_15cf54;
        case 0x15cf58u: goto label_15cf58;
        case 0x15cf5cu: goto label_15cf5c;
        case 0x15cf60u: goto label_15cf60;
        case 0x15cf64u: goto label_15cf64;
        case 0x15cf68u: goto label_15cf68;
        case 0x15cf6cu: goto label_15cf6c;
        case 0x15cf70u: goto label_15cf70;
        case 0x15cf74u: goto label_15cf74;
        case 0x15cf78u: goto label_15cf78;
        case 0x15cf7cu: goto label_15cf7c;
        case 0x15cf80u: goto label_15cf80;
        case 0x15cf84u: goto label_15cf84;
        case 0x15cf88u: goto label_15cf88;
        case 0x15cf8cu: goto label_15cf8c;
        case 0x15cf90u: goto label_15cf90;
        case 0x15cf94u: goto label_15cf94;
        case 0x15cf98u: goto label_15cf98;
        case 0x15cf9cu: goto label_15cf9c;
        case 0x15cfa0u: goto label_15cfa0;
        case 0x15cfa4u: goto label_15cfa4;
        case 0x15cfa8u: goto label_15cfa8;
        case 0x15cfacu: goto label_15cfac;
        case 0x15cfb0u: goto label_15cfb0;
        case 0x15cfb4u: goto label_15cfb4;
        case 0x15cfb8u: goto label_15cfb8;
        case 0x15cfbcu: goto label_15cfbc;
        case 0x15cfc0u: goto label_15cfc0;
        case 0x15cfc4u: goto label_15cfc4;
        case 0x15cfc8u: goto label_15cfc8;
        case 0x15cfccu: goto label_15cfcc;
        case 0x15cfd0u: goto label_15cfd0;
        case 0x15cfd4u: goto label_15cfd4;
        case 0x15cfd8u: goto label_15cfd8;
        case 0x15cfdcu: goto label_15cfdc;
        case 0x15cfe0u: goto label_15cfe0;
        case 0x15cfe4u: goto label_15cfe4;
        case 0x15cfe8u: goto label_15cfe8;
        case 0x15cfecu: goto label_15cfec;
        case 0x15cff0u: goto label_15cff0;
        case 0x15cff4u: goto label_15cff4;
        case 0x15cff8u: goto label_15cff8;
        case 0x15cffcu: goto label_15cffc;
        case 0x15d000u: goto label_15d000;
        case 0x15d004u: goto label_15d004;
        case 0x15d008u: goto label_15d008;
        case 0x15d00cu: goto label_15d00c;
        case 0x15d010u: goto label_15d010;
        case 0x15d014u: goto label_15d014;
        case 0x15d018u: goto label_15d018;
        case 0x15d01cu: goto label_15d01c;
        case 0x15d020u: goto label_15d020;
        case 0x15d024u: goto label_15d024;
        case 0x15d028u: goto label_15d028;
        case 0x15d02cu: goto label_15d02c;
        case 0x15d030u: goto label_15d030;
        case 0x15d034u: goto label_15d034;
        case 0x15d038u: goto label_15d038;
        case 0x15d03cu: goto label_15d03c;
        case 0x15d040u: goto label_15d040;
        case 0x15d044u: goto label_15d044;
        case 0x15d048u: goto label_15d048;
        case 0x15d04cu: goto label_15d04c;
        case 0x15d050u: goto label_15d050;
        case 0x15d054u: goto label_15d054;
        case 0x15d058u: goto label_15d058;
        case 0x15d05cu: goto label_15d05c;
        case 0x15d060u: goto label_15d060;
        case 0x15d064u: goto label_15d064;
        case 0x15d068u: goto label_15d068;
        case 0x15d06cu: goto label_15d06c;
        case 0x15d070u: goto label_15d070;
        case 0x15d074u: goto label_15d074;
        case 0x15d078u: goto label_15d078;
        case 0x15d07cu: goto label_15d07c;
        case 0x15d080u: goto label_15d080;
        case 0x15d084u: goto label_15d084;
        case 0x15d088u: goto label_15d088;
        case 0x15d08cu: goto label_15d08c;
        case 0x15d090u: goto label_15d090;
        case 0x15d094u: goto label_15d094;
        case 0x15d098u: goto label_15d098;
        case 0x15d09cu: goto label_15d09c;
        case 0x15d0a0u: goto label_15d0a0;
        case 0x15d0a4u: goto label_15d0a4;
        case 0x15d0a8u: goto label_15d0a8;
        case 0x15d0acu: goto label_15d0ac;
        case 0x15d0b0u: goto label_15d0b0;
        case 0x15d0b4u: goto label_15d0b4;
        case 0x15d0b8u: goto label_15d0b8;
        case 0x15d0bcu: goto label_15d0bc;
        case 0x15d0c0u: goto label_15d0c0;
        case 0x15d0c4u: goto label_15d0c4;
        case 0x15d0c8u: goto label_15d0c8;
        case 0x15d0ccu: goto label_15d0cc;
        case 0x15d0d0u: goto label_15d0d0;
        case 0x15d0d4u: goto label_15d0d4;
        case 0x15d0d8u: goto label_15d0d8;
        case 0x15d0dcu: goto label_15d0dc;
        case 0x15d0e0u: goto label_15d0e0;
        case 0x15d0e4u: goto label_15d0e4;
        case 0x15d0e8u: goto label_15d0e8;
        case 0x15d0ecu: goto label_15d0ec;
        case 0x15d0f0u: goto label_15d0f0;
        case 0x15d0f4u: goto label_15d0f4;
        case 0x15d0f8u: goto label_15d0f8;
        case 0x15d0fcu: goto label_15d0fc;
        case 0x15d100u: goto label_15d100;
        case 0x15d104u: goto label_15d104;
        case 0x15d108u: goto label_15d108;
        case 0x15d10cu: goto label_15d10c;
        case 0x15d110u: goto label_15d110;
        case 0x15d114u: goto label_15d114;
        case 0x15d118u: goto label_15d118;
        case 0x15d11cu: goto label_15d11c;
        case 0x15d120u: goto label_15d120;
        case 0x15d124u: goto label_15d124;
        case 0x15d128u: goto label_15d128;
        case 0x15d12cu: goto label_15d12c;
        case 0x15d130u: goto label_15d130;
        case 0x15d134u: goto label_15d134;
        case 0x15d138u: goto label_15d138;
        case 0x15d13cu: goto label_15d13c;
        case 0x15d140u: goto label_15d140;
        case 0x15d144u: goto label_15d144;
        case 0x15d148u: goto label_15d148;
        case 0x15d14cu: goto label_15d14c;
        case 0x15d150u: goto label_15d150;
        case 0x15d154u: goto label_15d154;
        case 0x15d158u: goto label_15d158;
        case 0x15d15cu: goto label_15d15c;
        case 0x15d160u: goto label_15d160;
        case 0x15d164u: goto label_15d164;
        case 0x15d168u: goto label_15d168;
        case 0x15d16cu: goto label_15d16c;
        case 0x15d170u: goto label_15d170;
        case 0x15d174u: goto label_15d174;
        case 0x15d178u: goto label_15d178;
        case 0x15d17cu: goto label_15d17c;
        case 0x15d180u: goto label_15d180;
        case 0x15d184u: goto label_15d184;
        case 0x15d188u: goto label_15d188;
        case 0x15d18cu: goto label_15d18c;
        case 0x15d190u: goto label_15d190;
        case 0x15d194u: goto label_15d194;
        case 0x15d198u: goto label_15d198;
        case 0x15d19cu: goto label_15d19c;
        case 0x15d1a0u: goto label_15d1a0;
        case 0x15d1a4u: goto label_15d1a4;
        case 0x15d1a8u: goto label_15d1a8;
        case 0x15d1acu: goto label_15d1ac;
        case 0x15d1b0u: goto label_15d1b0;
        case 0x15d1b4u: goto label_15d1b4;
        case 0x15d1b8u: goto label_15d1b8;
        case 0x15d1bcu: goto label_15d1bc;
        case 0x15d1c0u: goto label_15d1c0;
        case 0x15d1c4u: goto label_15d1c4;
        case 0x15d1c8u: goto label_15d1c8;
        case 0x15d1ccu: goto label_15d1cc;
        case 0x15d1d0u: goto label_15d1d0;
        case 0x15d1d4u: goto label_15d1d4;
        case 0x15d1d8u: goto label_15d1d8;
        case 0x15d1dcu: goto label_15d1dc;
        case 0x15d1e0u: goto label_15d1e0;
        case 0x15d1e4u: goto label_15d1e4;
        case 0x15d1e8u: goto label_15d1e8;
        case 0x15d1ecu: goto label_15d1ec;
        case 0x15d1f0u: goto label_15d1f0;
        case 0x15d1f4u: goto label_15d1f4;
        case 0x15d1f8u: goto label_15d1f8;
        case 0x15d1fcu: goto label_15d1fc;
        case 0x15d200u: goto label_15d200;
        case 0x15d204u: goto label_15d204;
        case 0x15d208u: goto label_15d208;
        case 0x15d20cu: goto label_15d20c;
        case 0x15d210u: goto label_15d210;
        case 0x15d214u: goto label_15d214;
        case 0x15d218u: goto label_15d218;
        case 0x15d21cu: goto label_15d21c;
        case 0x15d220u: goto label_15d220;
        case 0x15d224u: goto label_15d224;
        case 0x15d228u: goto label_15d228;
        case 0x15d22cu: goto label_15d22c;
        case 0x15d230u: goto label_15d230;
        case 0x15d234u: goto label_15d234;
        case 0x15d238u: goto label_15d238;
        case 0x15d23cu: goto label_15d23c;
        case 0x15d240u: goto label_15d240;
        case 0x15d244u: goto label_15d244;
        case 0x15d248u: goto label_15d248;
        case 0x15d24cu: goto label_15d24c;
        case 0x15d250u: goto label_15d250;
        case 0x15d254u: goto label_15d254;
        case 0x15d258u: goto label_15d258;
        case 0x15d25cu: goto label_15d25c;
        case 0x15d260u: goto label_15d260;
        case 0x15d264u: goto label_15d264;
        case 0x15d268u: goto label_15d268;
        case 0x15d26cu: goto label_15d26c;
        case 0x15d270u: goto label_15d270;
        case 0x15d274u: goto label_15d274;
        case 0x15d278u: goto label_15d278;
        case 0x15d27cu: goto label_15d27c;
        case 0x15d280u: goto label_15d280;
        case 0x15d284u: goto label_15d284;
        case 0x15d288u: goto label_15d288;
        case 0x15d28cu: goto label_15d28c;
        case 0x15d290u: goto label_15d290;
        case 0x15d294u: goto label_15d294;
        case 0x15d298u: goto label_15d298;
        case 0x15d29cu: goto label_15d29c;
        case 0x15d2a0u: goto label_15d2a0;
        case 0x15d2a4u: goto label_15d2a4;
        case 0x15d2a8u: goto label_15d2a8;
        case 0x15d2acu: goto label_15d2ac;
        case 0x15d2b0u: goto label_15d2b0;
        case 0x15d2b4u: goto label_15d2b4;
        case 0x15d2b8u: goto label_15d2b8;
        case 0x15d2bcu: goto label_15d2bc;
        case 0x15d2c0u: goto label_15d2c0;
        case 0x15d2c4u: goto label_15d2c4;
        case 0x15d2c8u: goto label_15d2c8;
        case 0x15d2ccu: goto label_15d2cc;
        case 0x15d2d0u: goto label_15d2d0;
        case 0x15d2d4u: goto label_15d2d4;
        case 0x15d2d8u: goto label_15d2d8;
        case 0x15d2dcu: goto label_15d2dc;
        case 0x15d2e0u: goto label_15d2e0;
        case 0x15d2e4u: goto label_15d2e4;
        case 0x15d2e8u: goto label_15d2e8;
        case 0x15d2ecu: goto label_15d2ec;
        case 0x15d2f0u: goto label_15d2f0;
        case 0x15d2f4u: goto label_15d2f4;
        case 0x15d2f8u: goto label_15d2f8;
        case 0x15d2fcu: goto label_15d2fc;
        case 0x15d300u: goto label_15d300;
        case 0x15d304u: goto label_15d304;
        case 0x15d308u: goto label_15d308;
        case 0x15d30cu: goto label_15d30c;
        case 0x15d310u: goto label_15d310;
        case 0x15d314u: goto label_15d314;
        case 0x15d318u: goto label_15d318;
        case 0x15d31cu: goto label_15d31c;
        case 0x15d320u: goto label_15d320;
        case 0x15d324u: goto label_15d324;
        case 0x15d328u: goto label_15d328;
        case 0x15d32cu: goto label_15d32c;
        case 0x15d330u: goto label_15d330;
        case 0x15d334u: goto label_15d334;
        case 0x15d338u: goto label_15d338;
        case 0x15d33cu: goto label_15d33c;
        case 0x15d340u: goto label_15d340;
        case 0x15d344u: goto label_15d344;
        case 0x15d348u: goto label_15d348;
        case 0x15d34cu: goto label_15d34c;
        case 0x15d350u: goto label_15d350;
        case 0x15d354u: goto label_15d354;
        case 0x15d358u: goto label_15d358;
        case 0x15d35cu: goto label_15d35c;
        case 0x15d360u: goto label_15d360;
        case 0x15d364u: goto label_15d364;
        case 0x15d368u: goto label_15d368;
        case 0x15d36cu: goto label_15d36c;
        case 0x15d370u: goto label_15d370;
        case 0x15d374u: goto label_15d374;
        case 0x15d378u: goto label_15d378;
        case 0x15d37cu: goto label_15d37c;
        case 0x15d380u: goto label_15d380;
        case 0x15d384u: goto label_15d384;
        case 0x15d388u: goto label_15d388;
        case 0x15d38cu: goto label_15d38c;
        case 0x15d390u: goto label_15d390;
        case 0x15d394u: goto label_15d394;
        case 0x15d398u: goto label_15d398;
        case 0x15d39cu: goto label_15d39c;
        case 0x15d3a0u: goto label_15d3a0;
        case 0x15d3a4u: goto label_15d3a4;
        case 0x15d3a8u: goto label_15d3a8;
        case 0x15d3acu: goto label_15d3ac;
        case 0x15d3b0u: goto label_15d3b0;
        case 0x15d3b4u: goto label_15d3b4;
        case 0x15d3b8u: goto label_15d3b8;
        case 0x15d3bcu: goto label_15d3bc;
        case 0x15d3c0u: goto label_15d3c0;
        case 0x15d3c4u: goto label_15d3c4;
        case 0x15d3c8u: goto label_15d3c8;
        case 0x15d3ccu: goto label_15d3cc;
        case 0x15d3d0u: goto label_15d3d0;
        case 0x15d3d4u: goto label_15d3d4;
        case 0x15d3d8u: goto label_15d3d8;
        case 0x15d3dcu: goto label_15d3dc;
        case 0x15d3e0u: goto label_15d3e0;
        case 0x15d3e4u: goto label_15d3e4;
        case 0x15d3e8u: goto label_15d3e8;
        case 0x15d3ecu: goto label_15d3ec;
        case 0x15d3f0u: goto label_15d3f0;
        case 0x15d3f4u: goto label_15d3f4;
        case 0x15d3f8u: goto label_15d3f8;
        case 0x15d3fcu: goto label_15d3fc;
        case 0x15d400u: goto label_15d400;
        case 0x15d404u: goto label_15d404;
        case 0x15d408u: goto label_15d408;
        case 0x15d40cu: goto label_15d40c;
        case 0x15d410u: goto label_15d410;
        case 0x15d414u: goto label_15d414;
        case 0x15d418u: goto label_15d418;
        case 0x15d41cu: goto label_15d41c;
        case 0x15d420u: goto label_15d420;
        case 0x15d424u: goto label_15d424;
        case 0x15d428u: goto label_15d428;
        case 0x15d42cu: goto label_15d42c;
        case 0x15d430u: goto label_15d430;
        case 0x15d434u: goto label_15d434;
        case 0x15d438u: goto label_15d438;
        case 0x15d43cu: goto label_15d43c;
        case 0x15d440u: goto label_15d440;
        case 0x15d444u: goto label_15d444;
        case 0x15d448u: goto label_15d448;
        case 0x15d44cu: goto label_15d44c;
        case 0x15d450u: goto label_15d450;
        case 0x15d454u: goto label_15d454;
        case 0x15d458u: goto label_15d458;
        case 0x15d45cu: goto label_15d45c;
        case 0x15d460u: goto label_15d460;
        case 0x15d464u: goto label_15d464;
        case 0x15d468u: goto label_15d468;
        case 0x15d46cu: goto label_15d46c;
        case 0x15d470u: goto label_15d470;
        case 0x15d474u: goto label_15d474;
        case 0x15d478u: goto label_15d478;
        case 0x15d47cu: goto label_15d47c;
        case 0x15d480u: goto label_15d480;
        case 0x15d484u: goto label_15d484;
        case 0x15d488u: goto label_15d488;
        case 0x15d48cu: goto label_15d48c;
        case 0x15d490u: goto label_15d490;
        case 0x15d494u: goto label_15d494;
        case 0x15d498u: goto label_15d498;
        case 0x15d49cu: goto label_15d49c;
        case 0x15d4a0u: goto label_15d4a0;
        case 0x15d4a4u: goto label_15d4a4;
        case 0x15d4a8u: goto label_15d4a8;
        case 0x15d4acu: goto label_15d4ac;
        case 0x15d4b0u: goto label_15d4b0;
        case 0x15d4b4u: goto label_15d4b4;
        case 0x15d4b8u: goto label_15d4b8;
        case 0x15d4bcu: goto label_15d4bc;
        case 0x15d4c0u: goto label_15d4c0;
        case 0x15d4c4u: goto label_15d4c4;
        case 0x15d4c8u: goto label_15d4c8;
        case 0x15d4ccu: goto label_15d4cc;
        case 0x15d4d0u: goto label_15d4d0;
        case 0x15d4d4u: goto label_15d4d4;
        case 0x15d4d8u: goto label_15d4d8;
        case 0x15d4dcu: goto label_15d4dc;
        case 0x15d4e0u: goto label_15d4e0;
        case 0x15d4e4u: goto label_15d4e4;
        case 0x15d4e8u: goto label_15d4e8;
        case 0x15d4ecu: goto label_15d4ec;
        case 0x15d4f0u: goto label_15d4f0;
        case 0x15d4f4u: goto label_15d4f4;
        case 0x15d4f8u: goto label_15d4f8;
        case 0x15d4fcu: goto label_15d4fc;
        case 0x15d500u: goto label_15d500;
        case 0x15d504u: goto label_15d504;
        case 0x15d508u: goto label_15d508;
        case 0x15d50cu: goto label_15d50c;
        case 0x15d510u: goto label_15d510;
        case 0x15d514u: goto label_15d514;
        case 0x15d518u: goto label_15d518;
        case 0x15d51cu: goto label_15d51c;
        case 0x15d520u: goto label_15d520;
        case 0x15d524u: goto label_15d524;
        case 0x15d528u: goto label_15d528;
        case 0x15d52cu: goto label_15d52c;
        case 0x15d530u: goto label_15d530;
        case 0x15d534u: goto label_15d534;
        case 0x15d538u: goto label_15d538;
        case 0x15d53cu: goto label_15d53c;
        case 0x15d540u: goto label_15d540;
        case 0x15d544u: goto label_15d544;
        case 0x15d548u: goto label_15d548;
        case 0x15d54cu: goto label_15d54c;
        case 0x15d550u: goto label_15d550;
        case 0x15d554u: goto label_15d554;
        case 0x15d558u: goto label_15d558;
        case 0x15d55cu: goto label_15d55c;
        case 0x15d560u: goto label_15d560;
        case 0x15d564u: goto label_15d564;
        case 0x15d568u: goto label_15d568;
        case 0x15d56cu: goto label_15d56c;
        case 0x15d570u: goto label_15d570;
        case 0x15d574u: goto label_15d574;
        case 0x15d578u: goto label_15d578;
        case 0x15d57cu: goto label_15d57c;
        case 0x15d580u: goto label_15d580;
        case 0x15d584u: goto label_15d584;
        case 0x15d588u: goto label_15d588;
        case 0x15d58cu: goto label_15d58c;
        case 0x15d590u: goto label_15d590;
        case 0x15d594u: goto label_15d594;
        case 0x15d598u: goto label_15d598;
        case 0x15d59cu: goto label_15d59c;
        case 0x15d5a0u: goto label_15d5a0;
        case 0x15d5a4u: goto label_15d5a4;
        case 0x15d5a8u: goto label_15d5a8;
        case 0x15d5acu: goto label_15d5ac;
        case 0x15d5b0u: goto label_15d5b0;
        case 0x15d5b4u: goto label_15d5b4;
        case 0x15d5b8u: goto label_15d5b8;
        case 0x15d5bcu: goto label_15d5bc;
        case 0x15d5c0u: goto label_15d5c0;
        case 0x15d5c4u: goto label_15d5c4;
        case 0x15d5c8u: goto label_15d5c8;
        case 0x15d5ccu: goto label_15d5cc;
        case 0x15d5d0u: goto label_15d5d0;
        case 0x15d5d4u: goto label_15d5d4;
        case 0x15d5d8u: goto label_15d5d8;
        case 0x15d5dcu: goto label_15d5dc;
        case 0x15d5e0u: goto label_15d5e0;
        case 0x15d5e4u: goto label_15d5e4;
        case 0x15d5e8u: goto label_15d5e8;
        case 0x15d5ecu: goto label_15d5ec;
        case 0x15d5f0u: goto label_15d5f0;
        case 0x15d5f4u: goto label_15d5f4;
        case 0x15d5f8u: goto label_15d5f8;
        case 0x15d5fcu: goto label_15d5fc;
        default: return;
    }

label_15ce30:
    // 0x15ce30: 0x90234af3  lbu         $v1, 0x4AF3($at)
    ctx->pc = 0x15ce30u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 19187)));
label_15ce34:
    // 0x15ce34: 0x3063001f  andi        $v1, $v1, 0x1F
    ctx->pc = 0x15ce34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
label_15ce38:
    // 0x15ce38: 0x14600341  bnez        $v1, . + 4 + (0x341 << 2)
label_15ce3c:
    if (ctx->pc == 0x15CE3Cu) {
        ctx->pc = 0x15CE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CE38u;
        // 0x15ce3c: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CE40u;
        goto label_15ce40;
    }
    ctx->pc = 0x15CE38u;
    {
        const bool branch_taken_0x15ce38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15CE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CE38u;
        // 0x15ce3c: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ce38) {
            ctx->pc = 0x15DB40u;
            { ctx->pc = 0x15db40; return; }
        }
    }
    ctx->pc = 0x15CE40u;
label_15ce40:
    // 0x15ce40: 0x8f858590  lw          $a1, -0x7A70($gp)
    ctx->pc = 0x15ce40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
label_15ce44:
    // 0x15ce44: 0xafa300b0  sw          $v1, 0xB0($sp)
    ctx->pc = 0x15ce44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 3));
label_15ce48:
    // 0x15ce48: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x15ce48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15ce4c:
    // 0x15ce4c: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x15ce4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_15ce50:
    // 0x15ce50: 0x30a50400  andi        $a1, $a1, 0x400
    ctx->pc = 0x15ce50u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1024);
label_15ce54:
    // 0x15ce54: 0x85180a  movz        $v1, $a0, $a1
    ctx->pc = 0x15ce54u;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
label_15ce58:
    // 0x15ce58: 0xafa300b0  sw          $v1, 0xB0($sp)
    ctx->pc = 0x15ce58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 3));
label_15ce5c:
    // 0x15ce5c: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x15ce5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_15ce60:
    // 0x15ce60: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x15ce60u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_15ce64:
    // 0x15ce64: 0x10200335  beqz        $at, . + 4 + (0x335 << 2)
label_15ce68:
    if (ctx->pc == 0x15CE68u) {
        ctx->pc = 0x15CE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CE64u;
        // 0x15ce68: 0xafa000a0  sw          $zero, 0xA0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CE6Cu;
        goto label_15ce6c;
    }
    ctx->pc = 0x15CE64u;
    {
        const bool branch_taken_0x15ce64 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x15CE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CE64u;
        // 0x15ce68: 0xafa000a0  sw          $zero, 0xA0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ce64) {
            ctx->pc = 0x15DB3Cu;
            { ctx->pc = 0x15db3c; return; }
        }
    }
    ctx->pc = 0x15CE6Cu;
label_15ce6c:
    // 0x15ce6c: 0xafa000c0  sw          $zero, 0xC0($sp)
    ctx->pc = 0x15ce6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 0));
label_15ce70:
    // 0x15ce70: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x15ce70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_15ce74:
    // 0x15ce74: 0x278480d0  addiu       $a0, $gp, -0x7F30
    ctx->pc = 0x15ce74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934736));
label_15ce78:
    // 0x15ce78: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x15ce78u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15ce7c:
    // 0x15ce7c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x15ce7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_15ce80:
    // 0x15ce80: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x15ce80u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_15ce84:
    // 0x15ce84: 0x0  nop
    ctx->pc = 0x15ce84u;
    // NOP
label_15ce88:
    // 0x15ce88: 0x82030028  lb          $v1, 0x28($s0)
    ctx->pc = 0x15ce88u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 40)));
label_15ce8c:
    // 0x15ce8c: 0x1060031b  beqz        $v1, . + 4 + (0x31B << 2)
label_15ce90:
    if (ctx->pc == 0x15CE90u) {
        ctx->pc = 0x15CE94u;
        goto label_15ce94;
    }
    ctx->pc = 0x15CE8Cu;
    {
        const bool branch_taken_0x15ce8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x15ce8c) {
            ctx->pc = 0x15DAFCu;
            { ctx->pc = 0x15dafc; return; }
        }
    }
    ctx->pc = 0x15CE94u;
label_15ce94:
    // 0x15ce94: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x15ce94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_15ce98:
    // 0x15ce98: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x15ce98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15ce9c:
    // 0x15ce9c: 0x14640005  bne         $v1, $a0, . + 4 + (0x5 << 2)
label_15cea0:
    if (ctx->pc == 0x15CEA0u) {
        ctx->pc = 0x15CEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CE9Cu;
        // 0x15cea0: 0x8e120020  lw          $s2, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CEA4u;
        goto label_15cea4;
    }
    ctx->pc = 0x15CE9Cu;
    {
        const bool branch_taken_0x15ce9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x15CEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CE9Cu;
        // 0x15cea0: 0x8e120020  lw          $s2, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ce9c) {
            ctx->pc = 0x15CEB4u;
            goto label_15ceb4;
        }
    }
    ctx->pc = 0x15CEA4u;
label_15cea4:
    // 0x15cea4: 0x924301a2  lbu         $v1, 0x1A2($s2)
    ctx->pc = 0x15cea4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 418)));
label_15cea8:
    // 0x15cea8: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x15cea8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_15ceac:
    // 0x15ceac: 0x14600313  bnez        $v1, . + 4 + (0x313 << 2)
label_15ceb0:
    if (ctx->pc == 0x15CEB0u) {
        ctx->pc = 0x15CEB4u;
        goto label_15ceb4;
    }
    ctx->pc = 0x15CEACu;
    {
        const bool branch_taken_0x15ceac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x15ceac) {
            ctx->pc = 0x15DAFCu;
            { ctx->pc = 0x15dafc; return; }
        }
    }
    ctx->pc = 0x15CEB4u;
label_15ceb4:
    // 0x15ceb4: 0x0  nop
    ctx->pc = 0x15ceb4u;
    // NOP
label_15ceb8:
    // 0x15ceb8: 0x8e110010  lw          $s1, 0x10($s0)
    ctx->pc = 0x15ceb8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_15cebc:
    // 0x15cebc: 0x92230232  lbu         $v1, 0x232($s1)
    ctx->pc = 0x15cebcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 562)));
label_15cec0:
    // 0x15cec0: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
label_15cec4:
    if (ctx->pc == 0x15CEC4u) {
        ctx->pc = 0x15CEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CEC0u;
        // 0x15cec4: 0x2416ffff  addiu       $s6, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CEC8u;
        goto label_15cec8;
    }
    ctx->pc = 0x15CEC0u;
    {
        const bool branch_taken_0x15cec0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15CEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CEC0u;
        // 0x15cec4: 0x2416ffff  addiu       $s6, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15cec0) {
            ctx->pc = 0x15CED4u;
            goto label_15ced4;
        }
    }
    ctx->pc = 0x15CEC8u;
label_15cec8:
    // 0x15cec8: 0xc0439cc  jal         func_10E730
label_15cecc:
    if (ctx->pc == 0x15CECCu) {
        ctx->pc = 0x15CECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CEC8u;
        // 0x15cecc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CED0u;
        goto label_15ced0;
    }
    ctx->pc = 0x15CEC8u;
    SET_GPR_U32(ctx, 31, 0x15CED0u);
    ctx->pc = 0x15CECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15CEC8u;
    // 0x15cecc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E730u, 0x15CEC8u, 0x15CED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15CED0u;
label_15ced0:
    // 0x15ced0: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x15ced0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15ced4:
    // 0x15ced4: 0x8643003c  lh          $v1, 0x3C($s2)
    ctx->pc = 0x15ced4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 60)));
label_15ced8:
    // 0x15ced8: 0x28630096  slti        $v1, $v1, 0x96
    ctx->pc = 0x15ced8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)150) ? 1 : 0);
label_15cedc:
    // 0x15cedc: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
label_15cee0:
    if (ctx->pc == 0x15CEE0u) {
        ctx->pc = 0x15CEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CEDCu;
        // 0x15cee0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CEE4u;
        goto label_15cee4;
    }
    ctx->pc = 0x15CEDCu;
    {
        const bool branch_taken_0x15cedc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15CEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CEDCu;
        // 0x15cee0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15cedc) {
            ctx->pc = 0x15CEE8u;
            goto label_15cee8;
        }
    }
    ctx->pc = 0x15CEE4u;
label_15cee4:
    // 0x15cee4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x15cee4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15cee8:
    // 0x15cee8: 0x1060013b  beqz        $v1, . + 4 + (0x13B << 2)
label_15ceec:
    if (ctx->pc == 0x15CEECu) {
        ctx->pc = 0x15CEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CEE8u;
        // 0x15ceec: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CEF0u;
        goto label_15cef0;
    }
    ctx->pc = 0x15CEE8u;
    {
        const bool branch_taken_0x15cee8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x15CEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CEE8u;
        // 0x15ceec: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15cee8) {
            ctx->pc = 0x15D3D8u;
            goto label_15d3d8;
        }
    }
    ctx->pc = 0x15CEF0u;
label_15cef0:
    // 0x15cef0: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x15cef0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15cef4:
    // 0x15cef4: 0x0  nop
    ctx->pc = 0x15cef4u;
    // NOP
label_15cef8:
    // 0x15cef8: 0x8e43002c  lw          $v1, 0x2C($s2)
    ctx->pc = 0x15cef8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
label_15cefc:
    // 0x15cefc: 0x9063000a  lbu         $v1, 0xA($v1)
    ctx->pc = 0x15cefcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 10)));
label_15cf00:
    // 0x15cf00: 0x2a31807  srav        $v1, $v1, $s5
    ctx->pc = 0x15cf00u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), GPR_U32(ctx, 21) & 0x1F));
label_15cf04:
    // 0x15cf04: 0x3064000f  andi        $a0, $v1, 0xF
    ctx->pc = 0x15cf04u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
label_15cf08:
    // 0x15cf08: 0x1080012d  beqz        $a0, . + 4 + (0x12D << 2)
label_15cf0c:
    if (ctx->pc == 0x15CF0Cu) {
        ctx->pc = 0x15CF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CF08u;
        // 0x15cf0c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CF10u;
        goto label_15cf10;
    }
    ctx->pc = 0x15CF08u;
    {
        const bool branch_taken_0x15cf08 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x15CF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CF08u;
        // 0x15cf0c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15cf08) {
            ctx->pc = 0x15D3C0u;
            goto label_15d3c0;
        }
    }
    ctx->pc = 0x15CF10u;
label_15cf10:
    // 0x15cf10: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
label_15cf14:
    if (ctx->pc == 0x15CF14u) {
        ctx->pc = 0x15CF18u;
        goto label_15cf18;
    }
    ctx->pc = 0x15CF10u;
    {
        const bool branch_taken_0x15cf10 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x15cf10) {
            ctx->pc = 0x15CF28u;
            goto label_15cf28;
        }
    }
    ctx->pc = 0x15CF18u;
label_15cf18:
    // 0x15cf18: 0x2151821  addu        $v1, $s0, $s5
    ctx->pc = 0x15cf18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 21)));
label_15cf1c:
    // 0x15cf1c: 0x8c672118  lw          $a3, 0x2118($v1)
    ctx->pc = 0x15cf1cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8472)));
label_15cf20:
    // 0x15cf20: 0x10000014  b           . + 4 + (0x14 << 2)
label_15cf24:
    if (ctx->pc == 0x15CF24u) {
        ctx->pc = 0x15CF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CF20u;
        // 0x15cf24: 0x8c632110  lw          $v1, 0x2110($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8464)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CF28u;
        goto label_15cf28;
    }
    ctx->pc = 0x15CF20u;
    {
        const bool branch_taken_0x15cf20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15CF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CF20u;
        // 0x15cf24: 0x8c632110  lw          $v1, 0x2110($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8464)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15cf20) {
            ctx->pc = 0x15CF74u;
            goto label_15cf74;
        }
    }
    ctx->pc = 0x15CF28u;
label_15cf28:
    // 0x15cf28: 0x3c03002d  lui         $v1, 0x2D
    ctx->pc = 0x15cf28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)45 << 16));
label_15cf2c:
    // 0x15cf2c: 0x24630188  addiu       $v1, $v1, 0x188
    ctx->pc = 0x15cf2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 392));
label_15cf30:
    // 0x15cf30: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x15cf30u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
label_15cf34:
    // 0x15cf34: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x15cf34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_15cf38:
    // 0x15cf38: 0x92260242  lbu         $a2, 0x242($s1)
    ctx->pc = 0x15cf38u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 578)));
label_15cf3c:
    // 0x15cf3c: 0x8067ffff  lb          $a3, -0x1($v1)
    ctx->pc = 0x15cf3cu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294967295)));
label_15cf40:
    // 0x15cf40: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x15cf40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_15cf44:
    // 0x15cf44: 0x24a5b170  addiu       $a1, $a1, -0x4E90
    ctx->pc = 0x15cf44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947184));
label_15cf48:
    // 0x15cf48: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x15cf48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_15cf4c:
    // 0x15cf4c: 0xf33821  addu        $a3, $a3, $s3
    ctx->pc = 0x15cf4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 19)));
label_15cf50:
    // 0x15cf50: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x15cf50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_15cf54:
    // 0x15cf54: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x15cf54u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_15cf58:
    // 0x15cf58: 0x61900  sll         $v1, $a2, 4
    ctx->pc = 0x15cf58u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_15cf5c:
    // 0x15cf5c: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x15cf5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_15cf60:
    // 0x15cf60: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x15cf60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_15cf64:
    // 0x15cf64: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x15cf64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_15cf68:
    // 0x15cf68: 0x24630000  addiu       $v1, $v1, 0x0
    ctx->pc = 0x15cf68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 0));
label_15cf6c:
    // 0x15cf6c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x15cf6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_15cf70:
    // 0x15cf70: 0x24630040  addiu       $v1, $v1, 0x40
    ctx->pc = 0x15cf70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
label_15cf74:
    // 0x15cf74: 0x0  nop
    ctx->pc = 0x15cf74u;
    // NOP
label_15cf78:
    // 0x15cf78: 0x10600111  beqz        $v1, . + 4 + (0x111 << 2)
label_15cf7c:
    if (ctx->pc == 0x15CF7Cu) {
        ctx->pc = 0x15CF80u;
        goto label_15cf80;
    }
    ctx->pc = 0x15CF78u;
    {
        const bool branch_taken_0x15cf78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x15cf78) {
            ctx->pc = 0x15D3C0u;
            goto label_15d3c0;
        }
    }
    ctx->pc = 0x15CF80u;
label_15cf80:
    // 0x15cf80: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x15cf80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_15cf84:
    // 0x15cf84: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x15cf84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_15cf88:
    // 0x15cf88: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x15cf88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_15cf8c:
    // 0x15cf8c: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x15cf8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_15cf90:
    // 0x15cf90: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x15cf90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_15cf94:
    // 0x15cf94: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x15cf94u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_15cf98:
    // 0x15cf98: 0x710c0  sll         $v0, $a3, 3
    ctx->pc = 0x15cf98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_15cf9c:
    // 0x15cf9c: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x15cf9cu;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[2];
label_15cfa0:
    // 0x15cfa0: 0x471821  addu        $v1, $v0, $a3
    ctx->pc = 0x15cfa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_15cfa4:
    // 0x15cfa4: 0xafa500dc  sw          $a1, 0xDC($sp)
    ctx->pc = 0x15cfa4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 5));
label_15cfa8:
    // 0x15cfa8: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x15cfa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
label_15cfac:
    // 0x15cfac: 0x3a100  sll         $s4, $v1, 4
    ctx->pc = 0x15cfacu;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_15cfb0:
    // 0x15cfb0: 0xafa000d4  sw          $zero, 0xD4($sp)
    ctx->pc = 0x15cfb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 0));
label_15cfb4:
    // 0x15cfb4: 0x34423ffc  ori         $v0, $v0, 0x3FFC
    ctx->pc = 0x15cfb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16380);
label_15cfb8:
    // 0x15cfb8: 0xafa000d8  sw          $zero, 0xD8($sp)
    ctx->pc = 0x15cfb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 0));
label_15cfbc:
    // 0x15cfbc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x15cfbcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_15cfc0:
    // 0x15cfc0: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x15cfc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_15cfc4:
    // 0x15cfc4: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x15cfc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_15cfc8:
    // 0x15cfc8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x15cfc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_15cfcc:
    // 0x15cfcc: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x15cfccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_15cfd0:
    // 0x15cfd0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x15cfd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_15cfd4:
    // 0x15cfd4: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x15cfd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
label_15cfd8:
    // 0x15cfd8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x15cfd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_15cfdc:
    // 0x15cfdc: 0x8c450080  lw          $a1, 0x80($v0)
    ctx->pc = 0x15cfdcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 128)));
label_15cfe0:
    // 0x15cfe0: 0xc066d7a  jal         func_19B5E8
label_15cfe4:
    if (ctx->pc == 0x15CFE4u) {
        ctx->pc = 0x15CFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CFE0u;
        // 0x15cfe4: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CFE8u;
        goto label_15cfe8;
    }
    ctx->pc = 0x15CFE0u;
    SET_GPR_U32(ctx, 31, 0x15CFE8u);
    ctx->pc = 0x15CFE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15CFE0u;
    // 0x15cfe4: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B5E8u;
    { ctx->pc = 0x19b5e8; return; }
    ctx->pc = 0x15CFE8u;
label_15cfe8:
    // 0x15cfe8: 0x8e47002c  lw          $a3, 0x2C($s2)
    ctx->pc = 0x15cfe8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
label_15cfec:
    // 0x15cfec: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x15cfecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_15cff0:
    // 0x15cff0: 0x30640001  andi        $a0, $v1, 0x1
    ctx->pc = 0x15cff0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_15cff4:
    // 0x15cff4: 0x108000b0  beqz        $a0, . + 4 + (0xB0 << 2)
label_15cff8:
    if (ctx->pc == 0x15CFF8u) {
        ctx->pc = 0x15CFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CFF4u;
        // 0x15cff8: 0x3c044000  lui         $a0, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CFFCu;
        goto label_15cffc;
    }
    ctx->pc = 0x15CFF4u;
    {
        const bool branch_taken_0x15cff4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x15CFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CFF4u;
        // 0x15cff8: 0x3c044000  lui         $a0, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15cff4) {
            ctx->pc = 0x15D2B8u;
            goto label_15d2b8;
        }
    }
    ctx->pc = 0x15CFFCu;
label_15cffc:
    // 0x15cffc: 0x642024  and         $a0, $v1, $a0
    ctx->pc = 0x15cffcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_15d000:
    // 0x15d000: 0x148000ad  bnez        $a0, . + 4 + (0xAD << 2)
label_15d004:
    if (ctx->pc == 0x15D004u) {
        ctx->pc = 0x15D008u;
        goto label_15d008;
    }
    ctx->pc = 0x15D000u;
    {
        const bool branch_taken_0x15d000 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x15d000) {
            ctx->pc = 0x15D2B8u;
            goto label_15d2b8;
        }
    }
    ctx->pc = 0x15D008u;
label_15d008:
    // 0x15d008: 0x90e4001a  lbu         $a0, 0x1A($a3)
    ctx->pc = 0x15d008u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 26)));
label_15d00c:
    // 0x15d00c: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
label_15d010:
    if (ctx->pc == 0x15D010u) {
        ctx->pc = 0x15D010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D00Cu;
        // 0x15d010: 0x43042  srl         $a2, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D014u;
        goto label_15d014;
    }
    ctx->pc = 0x15D00Cu;
    {
        const bool branch_taken_0x15d00c = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x15D010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D00Cu;
        // 0x15d010: 0x43042  srl         $a2, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d00c) {
            ctx->pc = 0x15D020u;
            goto label_15d020;
        }
    }
    ctx->pc = 0x15D014u;
label_15d014:
    // 0x15d014: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x15d014u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_15d018:
    // 0x15d018: 0x10000007  b           . + 4 + (0x7 << 2)
label_15d01c:
    if (ctx->pc == 0x15D01Cu) {
        ctx->pc = 0x15D01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D018u;
        // 0x15d01c: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D020u;
        goto label_15d020;
    }
    ctx->pc = 0x15D018u;
    {
        const bool branch_taken_0x15d018 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D018u;
        // 0x15d01c: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d018) {
            ctx->pc = 0x15D038u;
            goto label_15d038;
        }
    }
    ctx->pc = 0x15D020u;
label_15d020:
    // 0x15d020: 0x30850001  andi        $a1, $a0, 0x1
    ctx->pc = 0x15d020u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_15d024:
    // 0x15d024: 0xc53025  or          $a2, $a2, $a1
    ctx->pc = 0x15d024u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
label_15d028:
    // 0x15d028: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x15d028u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_15d02c:
    // 0x15d02c: 0x0  nop
    ctx->pc = 0x15d02cu;
    // NOP
label_15d030:
    // 0x15d030: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x15d030u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_15d034:
    // 0x15d034: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x15d034u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_15d038:
    // 0x15d038: 0xc6410000  lwc1        $f1, 0x0($s2)
    ctx->pc = 0x15d038u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_15d03c:
    // 0x15d03c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x15d03cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_15d040:
    // 0x15d040: 0x0  nop
    ctx->pc = 0x15d040u;
    // NOP
label_15d044:
    // 0x15d044: 0x45010064  bc1t        . + 4 + (0x64 << 2)
label_15d048:
    if (ctx->pc == 0x15D048u) {
        ctx->pc = 0x15D04Cu;
        goto label_15d04c;
    }
    ctx->pc = 0x15D044u;
    {
        const bool branch_taken_0x15d044 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x15d044) {
            ctx->pc = 0x15D1D8u;
            goto label_15d1d8;
        }
    }
    ctx->pc = 0x15D04Cu;
label_15d04c:
    // 0x15d04c: 0x90e5000d  lbu         $a1, 0xD($a3)
    ctx->pc = 0x15d04cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 13)));
label_15d050:
    // 0x15d050: 0x4a00004  bltz        $a1, . + 4 + (0x4 << 2)
label_15d054:
    if (ctx->pc == 0x15D054u) {
        ctx->pc = 0x15D054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D050u;
        // 0x15d054: 0x53042  srl         $a2, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D058u;
        goto label_15d058;
    }
    ctx->pc = 0x15D050u;
    {
        const bool branch_taken_0x15d050 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x15D054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D050u;
        // 0x15d054: 0x53042  srl         $a2, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d050) {
            ctx->pc = 0x15D064u;
            goto label_15d064;
        }
    }
    ctx->pc = 0x15D058u;
label_15d058:
    // 0x15d058: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x15d058u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_15d05c:
    // 0x15d05c: 0x10000007  b           . + 4 + (0x7 << 2)
label_15d060:
    if (ctx->pc == 0x15D060u) {
        ctx->pc = 0x15D060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D05Cu;
        // 0x15d060: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D064u;
        goto label_15d064;
    }
    ctx->pc = 0x15D05Cu;
    {
        const bool branch_taken_0x15d05c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D05Cu;
        // 0x15d060: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d05c) {
            ctx->pc = 0x15D07Cu;
            goto label_15d07c;
        }
    }
    ctx->pc = 0x15D064u;
label_15d064:
    // 0x15d064: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x15d064u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
label_15d068:
    // 0x15d068: 0xc53025  or          $a2, $a2, $a1
    ctx->pc = 0x15d068u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
label_15d06c:
    // 0x15d06c: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x15d06cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_15d070:
    // 0x15d070: 0x0  nop
    ctx->pc = 0x15d070u;
    // NOP
label_15d074:
    // 0x15d074: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x15d074u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_15d078:
    // 0x15d078: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x15d078u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_15d07c:
    // 0x15d07c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x15d07cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_15d080:
    // 0x15d080: 0x0  nop
    ctx->pc = 0x15d080u;
    // NOP
label_15d084:
    // 0x15d084: 0x45000054  bc1f        . + 4 + (0x54 << 2)
label_15d088:
    if (ctx->pc == 0x15D088u) {
        ctx->pc = 0x15D08Cu;
        goto label_15d08c;
    }
    ctx->pc = 0x15D084u;
    {
        const bool branch_taken_0x15d084 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x15d084) {
            ctx->pc = 0x15D1D8u;
            goto label_15d1d8;
        }
    }
    ctx->pc = 0x15D08Cu;
label_15d08c:
    // 0x15d08c: 0xde220270  ld          $v0, 0x270($s1)
    ctx->pc = 0x15d08cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 624)));
label_15d090:
    // 0x15d090: 0x24040400  addiu       $a0, $zero, 0x400
    ctx->pc = 0x15d090u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_15d094:
    // 0x15d094: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x15d094u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
label_15d098:
    // 0x15d098: 0x442024  and         $a0, $v0, $a0
    ctx->pc = 0x15d098u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_15d09c:
    // 0x15d09c: 0x10800016  beqz        $a0, . + 4 + (0x16 << 2)
label_15d0a0:
    if (ctx->pc == 0x15D0A0u) {
        ctx->pc = 0x15D0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D09Cu;
        // 0x15d0a0: 0x3c040004  lui         $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D0A4u;
        goto label_15d0a4;
    }
    ctx->pc = 0x15D09Cu;
    {
        const bool branch_taken_0x15d09c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D09Cu;
        // 0x15d0a0: 0x3c040004  lui         $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d09c) {
            ctx->pc = 0x15D0F8u;
            goto label_15d0f8;
        }
    }
    ctx->pc = 0x15D0A4u;
label_15d0a4:
    // 0x15d0a4: 0x642024  and         $a0, $v1, $a0
    ctx->pc = 0x15d0a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_15d0a8:
    // 0x15d0a8: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_15d0ac:
    if (ctx->pc == 0x15D0ACu) {
        ctx->pc = 0x15D0B0u;
        goto label_15d0b0;
    }
    ctx->pc = 0x15D0A8u;
    {
        const bool branch_taken_0x15d0a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x15d0a8) {
            ctx->pc = 0x15D0C4u;
            goto label_15d0c4;
        }
    }
    ctx->pc = 0x15D0B0u;
label_15d0b0:
    // 0x15d0b0: 0x24044000  addiu       $a0, $zero, 0x4000
    ctx->pc = 0x15d0b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
label_15d0b4:
    // 0x15d0b4: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x15d0b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
label_15d0b8:
    // 0x15d0b8: 0x442024  and         $a0, $v0, $a0
    ctx->pc = 0x15d0b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_15d0bc:
    // 0x15d0bc: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
label_15d0c0:
    if (ctx->pc == 0x15D0C0u) {
        ctx->pc = 0x15D0C4u;
        goto label_15d0c4;
    }
    ctx->pc = 0x15D0BCu;
    {
        const bool branch_taken_0x15d0bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x15d0bc) {
            ctx->pc = 0x15D0E4u;
            goto label_15d0e4;
        }
    }
    ctx->pc = 0x15D0C4u;
label_15d0c4:
    // 0x15d0c4: 0x0  nop
    ctx->pc = 0x15d0c4u;
    // NOP
label_15d0c8:
    // 0x15d0c8: 0x30640010  andi        $a0, $v1, 0x10
    ctx->pc = 0x15d0c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
label_15d0cc:
    // 0x15d0cc: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
label_15d0d0:
    if (ctx->pc == 0x15D0D0u) {
        ctx->pc = 0x15D0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D0CCu;
        // 0x15d0d0: 0x24044000  addiu       $a0, $zero, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D0D4u;
        goto label_15d0d4;
    }
    ctx->pc = 0x15D0CCu;
    {
        const bool branch_taken_0x15d0cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D0CCu;
        // 0x15d0d0: 0x24044000  addiu       $a0, $zero, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d0cc) {
            ctx->pc = 0x15D0F8u;
            goto label_15d0f8;
        }
    }
    ctx->pc = 0x15D0D4u;
label_15d0d4:
    // 0x15d0d4: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x15d0d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
label_15d0d8:
    // 0x15d0d8: 0x442024  and         $a0, $v0, $a0
    ctx->pc = 0x15d0d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_15d0dc:
    // 0x15d0dc: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_15d0e0:
    if (ctx->pc == 0x15D0E0u) {
        ctx->pc = 0x15D0E4u;
        goto label_15d0e4;
    }
    ctx->pc = 0x15D0DCu;
    {
        const bool branch_taken_0x15d0dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x15d0dc) {
            ctx->pc = 0x15D0F8u;
            goto label_15d0f8;
        }
    }
    ctx->pc = 0x15D0E4u;
label_15d0e4:
    // 0x15d0e4: 0x0  nop
    ctx->pc = 0x15d0e4u;
    // NOP
label_15d0e8:
    // 0x15d0e8: 0xc04689c  jal         func_11A270
label_15d0ec:
    if (ctx->pc == 0x15D0ECu) {
        ctx->pc = 0x15D0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D0E8u;
        // 0x15d0ec: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D0F0u;
        goto label_15d0f0;
    }
    ctx->pc = 0x15D0E8u;
    SET_GPR_U32(ctx, 31, 0x15D0F0u);
    ctx->pc = 0x15D0ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D0E8u;
    // 0x15d0ec: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11A270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11A270u, 0x15D0E8u, 0x15D0F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D0F0u;
label_15d0f0:
    // 0x15d0f0: 0x100000b3  b           . + 4 + (0xB3 << 2)
label_15d0f4:
    if (ctx->pc == 0x15D0F4u) {
        ctx->pc = 0x15D0F8u;
        goto label_15d0f8;
    }
    ctx->pc = 0x15D0F0u;
    {
        const bool branch_taken_0x15d0f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15d0f0) {
            ctx->pc = 0x15D3C0u;
            goto label_15d3c0;
        }
    }
    ctx->pc = 0x15D0F8u;
label_15d0f8:
    // 0x15d0f8: 0x24040800  addiu       $a0, $zero, 0x800
    ctx->pc = 0x15d0f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
label_15d0fc:
    // 0x15d0fc: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x15d0fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
label_15d100:
    // 0x15d100: 0x442024  and         $a0, $v0, $a0
    ctx->pc = 0x15d100u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_15d104:
    // 0x15d104: 0x10800016  beqz        $a0, . + 4 + (0x16 << 2)
label_15d108:
    if (ctx->pc == 0x15D108u) {
        ctx->pc = 0x15D108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D104u;
        // 0x15d108: 0x3c040004  lui         $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D10Cu;
        goto label_15d10c;
    }
    ctx->pc = 0x15D104u;
    {
        const bool branch_taken_0x15d104 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D104u;
        // 0x15d108: 0x3c040004  lui         $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d104) {
            ctx->pc = 0x15D160u;
            goto label_15d160;
        }
    }
    ctx->pc = 0x15D10Cu;
label_15d10c:
    // 0x15d10c: 0x642024  and         $a0, $v1, $a0
    ctx->pc = 0x15d10cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_15d110:
    // 0x15d110: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_15d114:
    if (ctx->pc == 0x15D114u) {
        ctx->pc = 0x15D118u;
        goto label_15d118;
    }
    ctx->pc = 0x15D110u;
    {
        const bool branch_taken_0x15d110 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x15d110) {
            ctx->pc = 0x15D12Cu;
            goto label_15d12c;
        }
    }
    ctx->pc = 0x15D118u;
label_15d118:
    // 0x15d118: 0x24044000  addiu       $a0, $zero, 0x4000
    ctx->pc = 0x15d118u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
label_15d11c:
    // 0x15d11c: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x15d11cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
label_15d120:
    // 0x15d120: 0x442024  and         $a0, $v0, $a0
    ctx->pc = 0x15d120u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_15d124:
    // 0x15d124: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
label_15d128:
    if (ctx->pc == 0x15D128u) {
        ctx->pc = 0x15D12Cu;
        goto label_15d12c;
    }
    ctx->pc = 0x15D124u;
    {
        const bool branch_taken_0x15d124 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x15d124) {
            ctx->pc = 0x15D14Cu;
            goto label_15d14c;
        }
    }
    ctx->pc = 0x15D12Cu;
label_15d12c:
    // 0x15d12c: 0x0  nop
    ctx->pc = 0x15d12cu;
    // NOP
label_15d130:
    // 0x15d130: 0x30640010  andi        $a0, $v1, 0x10
    ctx->pc = 0x15d130u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
label_15d134:
    // 0x15d134: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
label_15d138:
    if (ctx->pc == 0x15D138u) {
        ctx->pc = 0x15D138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D134u;
        // 0x15d138: 0x24044000  addiu       $a0, $zero, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D13Cu;
        goto label_15d13c;
    }
    ctx->pc = 0x15D134u;
    {
        const bool branch_taken_0x15d134 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D134u;
        // 0x15d138: 0x24044000  addiu       $a0, $zero, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d134) {
            ctx->pc = 0x15D160u;
            goto label_15d160;
        }
    }
    ctx->pc = 0x15D13Cu;
label_15d13c:
    // 0x15d13c: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x15d13cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
label_15d140:
    // 0x15d140: 0x442024  and         $a0, $v0, $a0
    ctx->pc = 0x15d140u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_15d144:
    // 0x15d144: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_15d148:
    if (ctx->pc == 0x15D148u) {
        ctx->pc = 0x15D14Cu;
        goto label_15d14c;
    }
    ctx->pc = 0x15D144u;
    {
        const bool branch_taken_0x15d144 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x15d144) {
            ctx->pc = 0x15D160u;
            goto label_15d160;
        }
    }
    ctx->pc = 0x15D14Cu;
label_15d14c:
    // 0x15d14c: 0x0  nop
    ctx->pc = 0x15d14cu;
    // NOP
label_15d150:
    // 0x15d150: 0xc046858  jal         func_11A160
label_15d154:
    if (ctx->pc == 0x15D154u) {
        ctx->pc = 0x15D154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D150u;
        // 0x15d154: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D158u;
        goto label_15d158;
    }
    ctx->pc = 0x15D150u;
    SET_GPR_U32(ctx, 31, 0x15D158u);
    ctx->pc = 0x15D154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D150u;
    // 0x15d154: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11A160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11A160u, 0x15D150u, 0x15D158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D158u;
label_15d158:
    // 0x15d158: 0x10000099  b           . + 4 + (0x99 << 2)
label_15d15c:
    if (ctx->pc == 0x15D15Cu) {
        ctx->pc = 0x15D160u;
        goto label_15d160;
    }
    ctx->pc = 0x15D158u;
    {
        const bool branch_taken_0x15d158 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15d158) {
            ctx->pc = 0x15D3C0u;
            goto label_15d3c0;
        }
    }
    ctx->pc = 0x15D160u;
label_15d160:
    // 0x15d160: 0x24041000  addiu       $a0, $zero, 0x1000
    ctx->pc = 0x15d160u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
label_15d164:
    // 0x15d164: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x15d164u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
label_15d168:
    // 0x15d168: 0x442024  and         $a0, $v0, $a0
    ctx->pc = 0x15d168u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_15d16c:
    // 0x15d16c: 0x10800016  beqz        $a0, . + 4 + (0x16 << 2)
label_15d170:
    if (ctx->pc == 0x15D170u) {
        ctx->pc = 0x15D170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D16Cu;
        // 0x15d170: 0x3c040004  lui         $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D174u;
        goto label_15d174;
    }
    ctx->pc = 0x15D16Cu;
    {
        const bool branch_taken_0x15d16c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D16Cu;
        // 0x15d170: 0x3c040004  lui         $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d16c) {
            ctx->pc = 0x15D1C8u;
            goto label_15d1c8;
        }
    }
    ctx->pc = 0x15D174u;
label_15d174:
    // 0x15d174: 0x642024  and         $a0, $v1, $a0
    ctx->pc = 0x15d174u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_15d178:
    // 0x15d178: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_15d17c:
    if (ctx->pc == 0x15D17Cu) {
        ctx->pc = 0x15D180u;
        goto label_15d180;
    }
    ctx->pc = 0x15D178u;
    {
        const bool branch_taken_0x15d178 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x15d178) {
            ctx->pc = 0x15D194u;
            goto label_15d194;
        }
    }
    ctx->pc = 0x15D180u;
label_15d180:
    // 0x15d180: 0x24044000  addiu       $a0, $zero, 0x4000
    ctx->pc = 0x15d180u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
label_15d184:
    // 0x15d184: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x15d184u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
label_15d188:
    // 0x15d188: 0x442024  and         $a0, $v0, $a0
    ctx->pc = 0x15d188u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_15d18c:
    // 0x15d18c: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
label_15d190:
    if (ctx->pc == 0x15D190u) {
        ctx->pc = 0x15D194u;
        goto label_15d194;
    }
    ctx->pc = 0x15D18Cu;
    {
        const bool branch_taken_0x15d18c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x15d18c) {
            ctx->pc = 0x15D1B8u;
            goto label_15d1b8;
        }
    }
    ctx->pc = 0x15D194u;
label_15d194:
    // 0x15d194: 0x0  nop
    ctx->pc = 0x15d194u;
    // NOP
label_15d198:
    // 0x15d198: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x15d198u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
label_15d19c:
    // 0x15d19c: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_15d1a0:
    if (ctx->pc == 0x15D1A0u) {
        ctx->pc = 0x15D1A4u;
        goto label_15d1a4;
    }
    ctx->pc = 0x15D19Cu;
    {
        const bool branch_taken_0x15d19c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x15d19c) {
            ctx->pc = 0x15D1C8u;
            goto label_15d1c8;
        }
    }
    ctx->pc = 0x15D1A4u;
label_15d1a4:
    // 0x15d1a4: 0x24034000  addiu       $v1, $zero, 0x4000
    ctx->pc = 0x15d1a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
label_15d1a8:
    // 0x15d1a8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x15d1a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_15d1ac:
    // 0x15d1ac: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x15d1acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_15d1b0:
    // 0x15d1b0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_15d1b4:
    if (ctx->pc == 0x15D1B4u) {
        ctx->pc = 0x15D1B8u;
        goto label_15d1b8;
    }
    ctx->pc = 0x15D1B0u;
    {
        const bool branch_taken_0x15d1b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15d1b0) {
            ctx->pc = 0x15D1C8u;
            goto label_15d1c8;
        }
    }
    ctx->pc = 0x15D1B8u;
label_15d1b8:
    // 0x15d1b8: 0xc04681c  jal         func_11A070
label_15d1bc:
    if (ctx->pc == 0x15D1BCu) {
        ctx->pc = 0x15D1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D1B8u;
        // 0x15d1bc: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D1C0u;
        goto label_15d1c0;
    }
    ctx->pc = 0x15D1B8u;
    SET_GPR_U32(ctx, 31, 0x15D1C0u);
    ctx->pc = 0x15D1BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D1B8u;
    // 0x15d1bc: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11A070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11A070u, 0x15D1B8u, 0x15D1C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D1C0u;
label_15d1c0:
    // 0x15d1c0: 0x1000007f  b           . + 4 + (0x7F << 2)
label_15d1c4:
    if (ctx->pc == 0x15D1C4u) {
        ctx->pc = 0x15D1C8u;
        goto label_15d1c8;
    }
    ctx->pc = 0x15D1C0u;
    {
        const bool branch_taken_0x15d1c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15d1c0) {
            ctx->pc = 0x15D3C0u;
            goto label_15d3c0;
        }
    }
    ctx->pc = 0x15D1C8u;
label_15d1c8:
    // 0x15d1c8: 0xc046768  jal         func_119DA0
label_15d1cc:
    if (ctx->pc == 0x15D1CCu) {
        ctx->pc = 0x15D1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D1C8u;
        // 0x15d1cc: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D1D0u;
        goto label_15d1d0;
    }
    ctx->pc = 0x15D1C8u;
    SET_GPR_U32(ctx, 31, 0x15D1D0u);
    ctx->pc = 0x15D1CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D1C8u;
    // 0x15d1cc: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119DA0u, 0x15D1C8u, 0x15D1D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D1D0u;
label_15d1d0:
    // 0x15d1d0: 0x1000007b  b           . + 4 + (0x7B << 2)
label_15d1d4:
    if (ctx->pc == 0x15D1D4u) {
        ctx->pc = 0x15D1D8u;
        goto label_15d1d8;
    }
    ctx->pc = 0x15D1D0u;
    {
        const bool branch_taken_0x15d1d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15d1d0) {
            ctx->pc = 0x15D3C0u;
            goto label_15d3c0;
        }
    }
    ctx->pc = 0x15D1D8u;
label_15d1d8:
    // 0x15d1d8: 0x92230232  lbu         $v1, 0x232($s1)
    ctx->pc = 0x15d1d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 562)));
label_15d1dc:
    // 0x15d1dc: 0x28610005  slti        $at, $v1, 0x5
    ctx->pc = 0x15d1dcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)5) ? 1 : 0);
label_15d1e0:
    // 0x15d1e0: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
label_15d1e4:
    if (ctx->pc == 0x15D1E4u) {
        ctx->pc = 0x15D1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D1E0u;
        // 0x15d1e4: 0x2132821  addu        $a1, $s0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D1E8u;
        goto label_15d1e8;
    }
    ctx->pc = 0x15D1E0u;
    {
        const bool branch_taken_0x15d1e0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D1E0u;
        // 0x15d1e4: 0x2132821  addu        $a1, $s0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d1e0) {
            ctx->pc = 0x15D20Cu;
            goto label_15d20c;
        }
    }
    ctx->pc = 0x15D1E8u;
label_15d1e8:
    // 0x15d1e8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x15d1e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_15d1ec:
    // 0x15d1ec: 0x24b70034  addiu       $s7, $a1, 0x34
    ctx->pc = 0x15d1ecu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 5), 52));
label_15d1f0:
    // 0x15d1f0: 0x80a50034  lb          $a1, 0x34($a1)
    ctx->pc = 0x15d1f0u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 52)));
label_15d1f4:
    // 0x15d1f4: 0x14a30005  bne         $a1, $v1, . + 4 + (0x5 << 2)
label_15d1f8:
    if (ctx->pc == 0x15D1F8u) {
        ctx->pc = 0x15D1FCu;
        goto label_15d1fc;
    }
    ctx->pc = 0x15D1F4u;
    {
        const bool branch_taken_0x15d1f4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x15d1f4) {
            ctx->pc = 0x15D20Cu;
            goto label_15d20c;
        }
    }
    ctx->pc = 0x15D1FCu;
label_15d1fc:
    // 0x15d1fc: 0xc05ca18  jal         func_172860
label_15d200:
    if (ctx->pc == 0x15D200u) {
        ctx->pc = 0x15D204u;
        goto label_15d204;
    }
    ctx->pc = 0x15D1FCu;
    SET_GPR_U32(ctx, 31, 0x15D204u);
    ctx->pc = 0x172860u;
    { ctx->pc = 0x172860; return; }
    ctx->pc = 0x15D204u;
label_15d204:
    // 0x15d204: 0x1000006e  b           . + 4 + (0x6E << 2)
label_15d208:
    if (ctx->pc == 0x15D208u) {
        ctx->pc = 0x15D208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D204u;
        // 0x15d208: 0xa2e20000  sb          $v0, 0x0($s7) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 23), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D20Cu;
        goto label_15d20c;
    }
    ctx->pc = 0x15D204u;
    {
        const bool branch_taken_0x15d204 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D204u;
        // 0x15d208: 0xa2e20000  sb          $v0, 0x0($s7) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 23), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d204) {
            ctx->pc = 0x15D3C0u;
            goto label_15d3c0;
        }
    }
    ctx->pc = 0x15D20Cu;
label_15d20c:
    // 0x15d20c: 0x0  nop
    ctx->pc = 0x15d20cu;
    // NOP
label_15d210:
    // 0x15d210: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
label_15d214:
    if (ctx->pc == 0x15D214u) {
        ctx->pc = 0x15D214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D210u;
        // 0x15d214: 0x42842  srl         $a1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D218u;
        goto label_15d218;
    }
    ctx->pc = 0x15D210u;
    {
        const bool branch_taken_0x15d210 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x15D214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D210u;
        // 0x15d214: 0x42842  srl         $a1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d210) {
            ctx->pc = 0x15D224u;
            goto label_15d224;
        }
    }
    ctx->pc = 0x15D218u;
label_15d218:
    // 0x15d218: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x15d218u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_15d21c:
    // 0x15d21c: 0x10000007  b           . + 4 + (0x7 << 2)
label_15d220:
    if (ctx->pc == 0x15D220u) {
        ctx->pc = 0x15D220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D21Cu;
        // 0x15d220: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D224u;
        goto label_15d224;
    }
    ctx->pc = 0x15D21Cu;
    {
        const bool branch_taken_0x15d21c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D21Cu;
        // 0x15d220: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d21c) {
            ctx->pc = 0x15D23Cu;
            goto label_15d23c;
        }
    }
    ctx->pc = 0x15D224u;
label_15d224:
    // 0x15d224: 0x30830001  andi        $v1, $a0, 0x1
    ctx->pc = 0x15d224u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_15d228:
    // 0x15d228: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x15d228u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_15d22c:
    // 0x15d22c: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x15d22cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_15d230:
    // 0x15d230: 0x0  nop
    ctx->pc = 0x15d230u;
    // NOP
label_15d234:
    // 0x15d234: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x15d234u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_15d238:
    // 0x15d238: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x15d238u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_15d23c:
    // 0x15d23c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x15d23cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_15d240:
    // 0x15d240: 0x0  nop
    ctx->pc = 0x15d240u;
    // NOP
label_15d244:
    // 0x15d244: 0x4500005e  bc1f        . + 4 + (0x5E << 2)
label_15d248:
    if (ctx->pc == 0x15D248u) {
        ctx->pc = 0x15D248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D244u;
        // 0x15d248: 0x2131821  addu        $v1, $s0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D24Cu;
        goto label_15d24c;
    }
    ctx->pc = 0x15D244u;
    {
        const bool branch_taken_0x15d244 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x15D248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D244u;
        // 0x15d248: 0x2131821  addu        $v1, $s0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d244) {
            ctx->pc = 0x15D3C0u;
            goto label_15d3c0;
        }
    }
    ctx->pc = 0x15D24Cu;
label_15d24c:
    // 0x15d24c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x15d24cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_15d250:
    // 0x15d250: 0x80640034  lb          $a0, 0x34($v1)
    ctx->pc = 0x15d250u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 52)));
label_15d254:
    // 0x15d254: 0x1082000b  beq         $a0, $v0, . + 4 + (0xB << 2)
label_15d258:
    if (ctx->pc == 0x15D258u) {
        ctx->pc = 0x15D25Cu;
        goto label_15d25c;
    }
    ctx->pc = 0x15D254u;
    {
        const bool branch_taken_0x15d254 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x15d254) {
            ctx->pc = 0x15D284u;
            goto label_15d284;
        }
    }
    ctx->pc = 0x15D25Cu;
label_15d25c:
    // 0x15d25c: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x15d25cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_15d260:
    // 0x15d260: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x15d260u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_15d264:
    // 0x15d264: 0x8c223ffc  lw          $v0, 0x3FFC($at)
    ctx->pc = 0x15d264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_15d268:
    // 0x15d268: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x15d268u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_15d26c:
    // 0x15d26c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x15d26cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_15d270:
    // 0x15d270: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x15d270u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
label_15d274:
    // 0x15d274: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x15d274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_15d278:
    // 0x15d278: 0x8c420080  lw          $v0, 0x80($v0)
    ctx->pc = 0x15d278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 128)));
label_15d27c:
    // 0x15d27c: 0xc046c80  jal         func_11B200
label_15d280:
    if (ctx->pc == 0x15D280u) {
        ctx->pc = 0x15D280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D27Cu;
        // 0x15d280: 0x24450030  addiu       $a1, $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D284u;
        goto label_15d284;
    }
    ctx->pc = 0x15D27Cu;
    SET_GPR_U32(ctx, 31, 0x15D284u);
    ctx->pc = 0x15D280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D27Cu;
    // 0x15d280: 0x24450030  addiu       $a1, $v0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B200u, 0x15D27Cu, 0x15D284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D284u;
label_15d284:
    // 0x15d284: 0x0  nop
    ctx->pc = 0x15d284u;
    // NOP
label_15d288:
    // 0x15d288: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x15d288u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_15d28c:
    // 0x15d28c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x15d28cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_15d290:
    // 0x15d290: 0x8c223ffc  lw          $v0, 0x3FFC($at)
    ctx->pc = 0x15d290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_15d294:
    // 0x15d294: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x15d294u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_15d298:
    // 0x15d298: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x15d298u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_15d29c:
    // 0x15d29c: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x15d29cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
label_15d2a0:
    // 0x15d2a0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x15d2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_15d2a4:
    // 0x15d2a4: 0x8c420080  lw          $v0, 0x80($v0)
    ctx->pc = 0x15d2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 128)));
label_15d2a8:
    // 0x15d2a8: 0xc046670  jal         func_1199C0
label_15d2ac:
    if (ctx->pc == 0x15D2ACu) {
        ctx->pc = 0x15D2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D2A8u;
        // 0x15d2ac: 0x24440030  addiu       $a0, $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D2B0u;
        goto label_15d2b0;
    }
    ctx->pc = 0x15D2A8u;
    SET_GPR_U32(ctx, 31, 0x15D2B0u);
    ctx->pc = 0x15D2ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D2A8u;
    // 0x15d2ac: 0x24440030  addiu       $a0, $v0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1199C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1199C0u, 0x15D2A8u, 0x15D2B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D2B0u;
label_15d2b0:
    // 0x15d2b0: 0x10000043  b           . + 4 + (0x43 << 2)
label_15d2b4:
    if (ctx->pc == 0x15D2B4u) {
        ctx->pc = 0x15D2B8u;
        goto label_15d2b8;
    }
    ctx->pc = 0x15D2B0u;
    {
        const bool branch_taken_0x15d2b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15d2b0) {
            ctx->pc = 0x15D3C0u;
            goto label_15d3c0;
        }
    }
    ctx->pc = 0x15D2B8u;
label_15d2b8:
    // 0x15d2b8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x15d2b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_15d2bc:
    // 0x15d2bc: 0x2132021  addu        $a0, $s0, $s3
    ctx->pc = 0x15d2bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
label_15d2c0:
    // 0x15d2c0: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x15d2c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
label_15d2c4:
    // 0x15d2c4: 0xa0850034  sb          $a1, 0x34($a0)
    ctx->pc = 0x15d2c4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 52), (uint8_t)GPR_U32(ctx, 5));
label_15d2c8:
    // 0x15d2c8: 0x8e46002c  lw          $a2, 0x2C($s2)
    ctx->pc = 0x15d2c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
label_15d2cc:
    // 0x15d2cc: 0x3464000c  ori         $a0, $v1, 0xC
    ctx->pc = 0x15d2ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)12);
label_15d2d0:
    // 0x15d2d0: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x15d2d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_15d2d4:
    // 0x15d2d4: 0x642024  and         $a0, $v1, $a0
    ctx->pc = 0x15d2d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_15d2d8:
    // 0x15d2d8: 0x10800039  beqz        $a0, . + 4 + (0x39 << 2)
label_15d2dc:
    if (ctx->pc == 0x15D2DCu) {
        ctx->pc = 0x15D2E0u;
        goto label_15d2e0;
    }
    ctx->pc = 0x15D2D8u;
    {
        const bool branch_taken_0x15d2d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x15d2d8) {
            ctx->pc = 0x15D3C0u;
            goto label_15d3c0;
        }
    }
    ctx->pc = 0x15D2E0u;
label_15d2e0:
    // 0x15d2e0: 0x90c4000b  lbu         $a0, 0xB($a2)
    ctx->pc = 0x15d2e0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 11)));
label_15d2e4:
    // 0x15d2e4: 0x10800036  beqz        $a0, . + 4 + (0x36 << 2)
label_15d2e8:
    if (ctx->pc == 0x15D2E8u) {
        ctx->pc = 0x15D2ECu;
        goto label_15d2ec;
    }
    ctx->pc = 0x15D2E4u;
    {
        const bool branch_taken_0x15d2e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x15d2e4) {
            ctx->pc = 0x15D3C0u;
            goto label_15d3c0;
        }
    }
    ctx->pc = 0x15D2ECu;
label_15d2ec:
    // 0x15d2ec: 0xc6410000  lwc1        $f1, 0x0($s2)
    ctx->pc = 0x15d2ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_15d2f0:
    // 0x15d2f0: 0x3c044f00  lui         $a0, 0x4F00
    ctx->pc = 0x15d2f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20224 << 16));
label_15d2f4:
    // 0x15d2f4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x15d2f4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_15d2f8:
    // 0x15d2f8: 0x0  nop
    ctx->pc = 0x15d2f8u;
    // NOP
label_15d2fc:
    // 0x15d2fc: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x15d2fcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_15d300:
    // 0x15d300: 0x0  nop
    ctx->pc = 0x15d300u;
    // NOP
label_15d304:
    // 0x15d304: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_15d308:
    if (ctx->pc == 0x15D308u) {
        ctx->pc = 0x15D30Cu;
        goto label_15d30c;
    }
    ctx->pc = 0x15D304u;
    {
        const bool branch_taken_0x15d304 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x15d304) {
            ctx->pc = 0x15D31Cu;
            goto label_15d31c;
        }
    }
    ctx->pc = 0x15D30Cu;
label_15d30c:
    // 0x15d30c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x15d30cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_15d310:
    // 0x15d310: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x15d310u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_15d314:
    // 0x15d314: 0x10000008  b           . + 4 + (0x8 << 2)
label_15d318:
    if (ctx->pc == 0x15D318u) {
        ctx->pc = 0x15D318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D314u;
        // 0x15d318: 0x90c4000d  lbu         $a0, 0xD($a2) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 13)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D31Cu;
        goto label_15d31c;
    }
    ctx->pc = 0x15D314u;
    {
        const bool branch_taken_0x15d314 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D314u;
        // 0x15d318: 0x90c4000d  lbu         $a0, 0xD($a2) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 13)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d314) {
            ctx->pc = 0x15D338u;
            goto label_15d338;
        }
    }
    ctx->pc = 0x15D31Cu;
label_15d31c:
    // 0x15d31c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x15d31cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_15d320:
    // 0x15d320: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x15d320u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_15d324:
    // 0x15d324: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x15d324u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_15d328:
    // 0x15d328: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x15d328u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_15d32c:
    // 0x15d32c: 0x0  nop
    ctx->pc = 0x15d32cu;
    // NOP
label_15d330:
    // 0x15d330: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x15d330u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
label_15d334:
    // 0x15d334: 0x90c4000d  lbu         $a0, 0xD($a2)
    ctx->pc = 0x15d334u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 13)));
label_15d338:
    // 0x15d338: 0x85082b  sltu        $at, $a0, $a1
    ctx->pc = 0x15d338u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_15d33c:
    // 0x15d33c: 0x14200020  bnez        $at, . + 4 + (0x20 << 2)
label_15d340:
    if (ctx->pc == 0x15D340u) {
        ctx->pc = 0x15D344u;
        goto label_15d344;
    }
    ctx->pc = 0x15D33Cu;
    {
        const bool branch_taken_0x15d33c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x15d33c) {
            ctx->pc = 0x15D3C0u;
            goto label_15d3c0;
        }
    }
    ctx->pc = 0x15D344u;
label_15d344:
    // 0x15d344: 0x92250241  lbu         $a1, 0x241($s1)
    ctx->pc = 0x15d344u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 577)));
label_15d348:
    // 0x15d348: 0x2404001b  addiu       $a0, $zero, 0x1B
    ctx->pc = 0x15d348u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
label_15d34c:
    // 0x15d34c: 0x14a4000e  bne         $a1, $a0, . + 4 + (0xE << 2)
label_15d350:
    if (ctx->pc == 0x15D350u) {
        ctx->pc = 0x15D354u;
        goto label_15d354;
    }
    ctx->pc = 0x15D34Cu;
    {
        const bool branch_taken_0x15d34c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        if (branch_taken_0x15d34c) {
            ctx->pc = 0x15D388u;
            goto label_15d388;
        }
    }
    ctx->pc = 0x15D354u;
label_15d354:
    // 0x15d354: 0xde250270  ld          $a1, 0x270($s1)
    ctx->pc = 0x15d354u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 17), 624)));
label_15d358:
    // 0x15d358: 0x24040800  addiu       $a0, $zero, 0x800
    ctx->pc = 0x15d358u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
label_15d35c:
    // 0x15d35c: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x15d35cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
label_15d360:
    // 0x15d360: 0xa42024  and         $a0, $a1, $a0
    ctx->pc = 0x15d360u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
label_15d364:
    // 0x15d364: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
label_15d368:
    if (ctx->pc == 0x15D368u) {
        ctx->pc = 0x15D368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D364u;
        // 0x15d368: 0x3c040600  lui         $a0, 0x600 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1536 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D36Cu;
        goto label_15d36c;
    }
    ctx->pc = 0x15D364u;
    {
        const bool branch_taken_0x15d364 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D364u;
        // 0x15d368: 0x3c040600  lui         $a0, 0x600 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1536 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d364) {
            ctx->pc = 0x15D388u;
            goto label_15d388;
        }
    }
    ctx->pc = 0x15D36Cu;
label_15d36c:
    // 0x15d36c: 0x642024  and         $a0, $v1, $a0
    ctx->pc = 0x15d36cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_15d370:
    // 0x15d370: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_15d374:
    if (ctx->pc == 0x15D374u) {
        ctx->pc = 0x15D378u;
        goto label_15d378;
    }
    ctx->pc = 0x15D370u;
    {
        const bool branch_taken_0x15d370 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x15d370) {
            ctx->pc = 0x15D388u;
            goto label_15d388;
        }
    }
    ctx->pc = 0x15D378u;
label_15d378:
    // 0x15d378: 0xc046858  jal         func_11A160
label_15d37c:
    if (ctx->pc == 0x15D37Cu) {
        ctx->pc = 0x15D37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D378u;
        // 0x15d37c: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D380u;
        goto label_15d380;
    }
    ctx->pc = 0x15D378u;
    SET_GPR_U32(ctx, 31, 0x15D380u);
    ctx->pc = 0x15D37Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D378u;
    // 0x15d37c: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11A160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11A160u, 0x15D378u, 0x15D380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D380u;
label_15d380:
    // 0x15d380: 0x1000000f  b           . + 4 + (0xF << 2)
label_15d384:
    if (ctx->pc == 0x15D384u) {
        ctx->pc = 0x15D388u;
        goto label_15d388;
    }
    ctx->pc = 0x15D380u;
    {
        const bool branch_taken_0x15d380 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15d380) {
            ctx->pc = 0x15D3C0u;
            goto label_15d3c0;
        }
    }
    ctx->pc = 0x15D388u;
label_15d388:
    // 0x15d388: 0x3c040200  lui         $a0, 0x200
    ctx->pc = 0x15d388u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)512 << 16));
label_15d38c:
    // 0x15d38c: 0x642024  and         $a0, $v1, $a0
    ctx->pc = 0x15d38cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_15d390:
    // 0x15d390: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_15d394:
    if (ctx->pc == 0x15D394u) {
        ctx->pc = 0x15D394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D390u;
        // 0x15d394: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D398u;
        goto label_15d398;
    }
    ctx->pc = 0x15D390u;
    {
        const bool branch_taken_0x15d390 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D390u;
        // 0x15d394: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d390) {
            ctx->pc = 0x15D3A8u;
            goto label_15d3a8;
        }
    }
    ctx->pc = 0x15D398u;
label_15d398:
    // 0x15d398: 0xc04689c  jal         func_11A270
label_15d39c:
    if (ctx->pc == 0x15D39Cu) {
        ctx->pc = 0x15D3A0u;
        goto label_15d3a0;
    }
    ctx->pc = 0x15D398u;
    SET_GPR_U32(ctx, 31, 0x15D3A0u);
    ctx->pc = 0x11A270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11A270u, 0x15D398u, 0x15D3A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D3A0u;
label_15d3a0:
    // 0x15d3a0: 0x10000007  b           . + 4 + (0x7 << 2)
label_15d3a4:
    if (ctx->pc == 0x15D3A4u) {
        ctx->pc = 0x15D3A8u;
        goto label_15d3a8;
    }
    ctx->pc = 0x15D3A0u;
    {
        const bool branch_taken_0x15d3a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15d3a0) {
            ctx->pc = 0x15D3C0u;
            goto label_15d3c0;
        }
    }
    ctx->pc = 0x15D3A8u;
label_15d3a8:
    // 0x15d3a8: 0x3c040400  lui         $a0, 0x400
    ctx->pc = 0x15d3a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1024 << 16));
label_15d3ac:
    // 0x15d3ac: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x15d3acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_15d3b0:
    // 0x15d3b0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_15d3b4:
    if (ctx->pc == 0x15D3B4u) {
        ctx->pc = 0x15D3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D3B0u;
        // 0x15d3b4: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D3B8u;
        goto label_15d3b8;
    }
    ctx->pc = 0x15D3B0u;
    {
        const bool branch_taken_0x15d3b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D3B0u;
        // 0x15d3b4: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d3b0) {
            ctx->pc = 0x15D3C0u;
            goto label_15d3c0;
        }
    }
    ctx->pc = 0x15D3B8u;
label_15d3b8:
    // 0x15d3b8: 0xc046858  jal         func_11A160
label_15d3bc:
    if (ctx->pc == 0x15D3BCu) {
        ctx->pc = 0x15D3C0u;
        goto label_15d3c0;
    }
    ctx->pc = 0x15D3B8u;
    SET_GPR_U32(ctx, 31, 0x15D3C0u);
    ctx->pc = 0x11A160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11A160u, 0x15D3B8u, 0x15D3C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D3C0u;
label_15d3c0:
    // 0x15d3c0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x15d3c0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_15d3c4:
    // 0x15d3c4: 0x2a630002  slti        $v1, $s3, 0x2
    ctx->pc = 0x15d3c4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)2) ? 1 : 0);
label_15d3c8:
    // 0x15d3c8: 0x1460feca  bnez        $v1, . + 4 + (-0x136 << 2)
label_15d3cc:
    if (ctx->pc == 0x15D3CCu) {
        ctx->pc = 0x15D3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D3C8u;
        // 0x15d3cc: 0x26b50004  addiu       $s5, $s5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D3D0u;
        goto label_15d3d0;
    }
    ctx->pc = 0x15D3C8u;
    {
        const bool branch_taken_0x15d3c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15D3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D3C8u;
        // 0x15d3cc: 0x26b50004  addiu       $s5, $s5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d3c8) {
            ctx->pc = 0x15CEF4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15cef4;
        }
    }
    ctx->pc = 0x15D3D0u;
label_15d3d0:
    // 0x15d3d0: 0x10000004  b           . + 4 + (0x4 << 2)
label_15d3d4:
    if (ctx->pc == 0x15D3D4u) {
        ctx->pc = 0x15D3D8u;
        goto label_15d3d8;
    }
    ctx->pc = 0x15D3D0u;
    {
        const bool branch_taken_0x15d3d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15d3d0) {
            ctx->pc = 0x15D3E4u;
            goto label_15d3e4;
        }
    }
    ctx->pc = 0x15D3D8u;
label_15d3d8:
    // 0x15d3d8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x15d3d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_15d3dc:
    // 0x15d3dc: 0xa2030034  sb          $v1, 0x34($s0)
    ctx->pc = 0x15d3dcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 52), (uint8_t)GPR_U32(ctx, 3));
label_15d3e0:
    // 0x15d3e0: 0xa2030035  sb          $v1, 0x35($s0)
    ctx->pc = 0x15d3e0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 53), (uint8_t)GPR_U32(ctx, 3));
label_15d3e4:
    // 0x15d3e4: 0x0  nop
    ctx->pc = 0x15d3e4u;
    // NOP
label_15d3e8:
    // 0x15d3e8: 0x8644003c  lh          $a0, 0x3C($s2)
    ctx->pc = 0x15d3e8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 60)));
label_15d3ec:
    // 0x15d3ec: 0x24030078  addiu       $v1, $zero, 0x78
    ctx->pc = 0x15d3ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_15d3f0:
    // 0x15d3f0: 0x10830006  beq         $a0, $v1, . + 4 + (0x6 << 2)
label_15d3f4:
    if (ctx->pc == 0x15D3F4u) {
        ctx->pc = 0x15D3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D3F0u;
        // 0x15d3f4: 0x24030079  addiu       $v1, $zero, 0x79 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 121));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D3F8u;
        goto label_15d3f8;
    }
    ctx->pc = 0x15D3F0u;
    {
        const bool branch_taken_0x15d3f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x15D3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D3F0u;
        // 0x15d3f4: 0x24030079  addiu       $v1, $zero, 0x79 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 121));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d3f0) {
            ctx->pc = 0x15D40Cu;
            goto label_15d40c;
        }
    }
    ctx->pc = 0x15D3F8u;
label_15d3f8:
    // 0x15d3f8: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
label_15d3fc:
    if (ctx->pc == 0x15D3FCu) {
        ctx->pc = 0x15D400u;
        goto label_15d400;
    }
    ctx->pc = 0x15D3F8u;
    {
        const bool branch_taken_0x15d3f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x15d3f8) {
            ctx->pc = 0x15D40Cu;
            goto label_15d40c;
        }
    }
    ctx->pc = 0x15D400u;
label_15d400:
    // 0x15d400: 0x2403007e  addiu       $v1, $zero, 0x7E
    ctx->pc = 0x15d400u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 126));
label_15d404:
    // 0x15d404: 0x14830023  bne         $a0, $v1, . + 4 + (0x23 << 2)
label_15d408:
    if (ctx->pc == 0x15D408u) {
        ctx->pc = 0x15D40Cu;
        goto label_15d40c;
    }
    ctx->pc = 0x15D404u;
    {
        const bool branch_taken_0x15d404 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x15d404) {
            ctx->pc = 0x15D494u;
            goto label_15d494;
        }
    }
    ctx->pc = 0x15D40Cu;
label_15d40c:
    // 0x15d40c: 0x0  nop
    ctx->pc = 0x15d40cu;
    // NOP
label_15d410:
    // 0x15d410: 0x82040036  lb          $a0, 0x36($s0)
    ctx->pc = 0x15d410u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 54)));
label_15d414:
    // 0x15d414: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x15d414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_15d418:
    // 0x15d418: 0x14820012  bne         $a0, $v0, . + 4 + (0x12 << 2)
label_15d41c:
    if (ctx->pc == 0x15D41Cu) {
        ctx->pc = 0x15D420u;
        goto label_15d420;
    }
    ctx->pc = 0x15D418u;
    {
        const bool branch_taken_0x15d418 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x15d418) {
            ctx->pc = 0x15D464u;
            goto label_15d464;
        }
    }
    ctx->pc = 0x15D420u;
label_15d420:
    // 0x15d420: 0xc05ca18  jal         func_172860
label_15d424:
    if (ctx->pc == 0x15D424u) {
        ctx->pc = 0x15D428u;
        goto label_15d428;
    }
    ctx->pc = 0x15D420u;
    SET_GPR_U32(ctx, 31, 0x15D428u);
    ctx->pc = 0x172860u;
    { ctx->pc = 0x172860; return; }
    ctx->pc = 0x15D428u;
label_15d428:
    // 0x15d428: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x15d428u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_15d42c:
    // 0x15d42c: 0x12c300b9  beq         $s6, $v1, . + 4 + (0xB9 << 2)
label_15d430:
    if (ctx->pc == 0x15D430u) {
        ctx->pc = 0x15D430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D42Cu;
        // 0x15d430: 0xa2020036  sb          $v0, 0x36($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 54), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D434u;
        goto label_15d434;
    }
    ctx->pc = 0x15D42Cu;
    {
        const bool branch_taken_0x15d42c = (GPR_U64(ctx, 22) == GPR_U64(ctx, 3));
        ctx->pc = 0x15D430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D42Cu;
        // 0x15d430: 0xa2020036  sb          $v0, 0x36($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 54), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d42c) {
            ctx->pc = 0x15D714u;
            { ctx->pc = 0x15d714; return; }
        }
    }
    ctx->pc = 0x15D434u;
label_15d434:
    // 0x15d434: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x15d434u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_15d438:
    // 0x15d438: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x15d438u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15d43c:
    // 0x15d43c: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x15d43cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_15d440:
    // 0x15d440: 0xc07586c  jal         func_1D61B0
label_15d444:
    if (ctx->pc == 0x15D444u) {
        ctx->pc = 0x15D444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D440u;
        // 0x15d444: 0x24070060  addiu       $a3, $zero, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D448u;
        goto label_15d448;
    }
    ctx->pc = 0x15D440u;
    SET_GPR_U32(ctx, 31, 0x15D448u);
    ctx->pc = 0x15D444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D440u;
    // 0x15d444: 0x24070060  addiu       $a3, $zero, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D61B0u;
    { ctx->pc = 0x1d61b0; return; }
    ctx->pc = 0x15D448u;
label_15d448:
    // 0x15d448: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x15d448u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_15d44c:
    // 0x15d44c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15d44cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15d450:
    // 0x15d450: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x15d450u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_15d454:
    // 0x15d454: 0xc07586c  jal         func_1D61B0
label_15d458:
    if (ctx->pc == 0x15D458u) {
        ctx->pc = 0x15D458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D454u;
        // 0x15d458: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D45Cu;
        goto label_15d45c;
    }
    ctx->pc = 0x15D454u;
    SET_GPR_U32(ctx, 31, 0x15D45Cu);
    ctx->pc = 0x15D458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D454u;
    // 0x15d458: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D61B0u;
    { ctx->pc = 0x1d61b0; return; }
    ctx->pc = 0x15D45Cu;
label_15d45c:
    // 0x15d45c: 0x100000ad  b           . + 4 + (0xAD << 2)
label_15d460:
    if (ctx->pc == 0x15D460u) {
        ctx->pc = 0x15D464u;
        goto label_15d464;
    }
    ctx->pc = 0x15D45Cu;
    {
        const bool branch_taken_0x15d45c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15d45c) {
            ctx->pc = 0x15D714u;
            { ctx->pc = 0x15d714; return; }
        }
    }
    ctx->pc = 0x15D464u;
label_15d464:
    // 0x15d464: 0x0  nop
    ctx->pc = 0x15d464u;
    // NOP
label_15d468:
    // 0x15d468: 0xc0469f0  jal         func_11A7C0
label_15d46c:
    if (ctx->pc == 0x15D46Cu) {
        ctx->pc = 0x15D46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D468u;
        // 0x15d46c: 0x26450150  addiu       $a1, $s2, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 336));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D470u;
        goto label_15d470;
    }
    ctx->pc = 0x15D468u;
    SET_GPR_U32(ctx, 31, 0x15D470u);
    ctx->pc = 0x15D46Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D468u;
    // 0x15d46c: 0x26450150  addiu       $a1, $s2, 0x150 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11A7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11A7C0u, 0x15D468u, 0x15D470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D470u;
label_15d470:
    // 0x15d470: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x15d470u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_15d474:
    // 0x15d474: 0x12c300a7  beq         $s6, $v1, . + 4 + (0xA7 << 2)
label_15d478:
    if (ctx->pc == 0x15D478u) {
        ctx->pc = 0x15D478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D474u;
        // 0x15d478: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D47Cu;
        goto label_15d47c;
    }
    ctx->pc = 0x15D474u;
    {
        const bool branch_taken_0x15d474 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 3));
        ctx->pc = 0x15D478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D474u;
        // 0x15d478: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d474) {
            ctx->pc = 0x15D714u;
            { ctx->pc = 0x15d714; return; }
        }
    }
    ctx->pc = 0x15D47Cu;
label_15d47c:
    // 0x15d47c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15d47cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15d480:
    // 0x15d480: 0x24060028  addiu       $a2, $zero, 0x28
    ctx->pc = 0x15d480u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_15d484:
    // 0x15d484: 0xc07586c  jal         func_1D61B0
label_15d488:
    if (ctx->pc == 0x15D488u) {
        ctx->pc = 0x15D488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D484u;
        // 0x15d488: 0x24070040  addiu       $a3, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D48Cu;
        goto label_15d48c;
    }
    ctx->pc = 0x15D484u;
    SET_GPR_U32(ctx, 31, 0x15D48Cu);
    ctx->pc = 0x15D488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D484u;
    // 0x15d488: 0x24070040  addiu       $a3, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D61B0u;
    { ctx->pc = 0x1d61b0; return; }
    ctx->pc = 0x15D48Cu;
label_15d48c:
    // 0x15d48c: 0x100000a1  b           . + 4 + (0xA1 << 2)
label_15d490:
    if (ctx->pc == 0x15D490u) {
        ctx->pc = 0x15D494u;
        goto label_15d494;
    }
    ctx->pc = 0x15D48Cu;
    {
        const bool branch_taken_0x15d48c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15d48c) {
            ctx->pc = 0x15D714u;
            { ctx->pc = 0x15d714; return; }
        }
    }
    ctx->pc = 0x15D494u;
label_15d494:
    // 0x15d494: 0x0  nop
    ctx->pc = 0x15d494u;
    // NOP
label_15d498:
    // 0x15d498: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x15d498u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_15d49c:
    // 0x15d49c: 0xa2030036  sb          $v1, 0x36($s0)
    ctx->pc = 0x15d49cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 54), (uint8_t)GPR_U32(ctx, 3));
label_15d4a0:
    // 0x15d4a0: 0x8645003c  lh          $a1, 0x3C($s2)
    ctx->pc = 0x15d4a0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 60)));
label_15d4a4:
    // 0x15d4a4: 0x240300ad  addiu       $v1, $zero, 0xAD
    ctx->pc = 0x15d4a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 173));
label_15d4a8:
    // 0x15d4a8: 0x10a30006  beq         $a1, $v1, . + 4 + (0x6 << 2)
label_15d4ac:
    if (ctx->pc == 0x15D4ACu) {
        ctx->pc = 0x15D4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D4A8u;
        // 0x15d4ac: 0x240300a9  addiu       $v1, $zero, 0xA9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 169));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D4B0u;
        goto label_15d4b0;
    }
    ctx->pc = 0x15D4A8u;
    {
        const bool branch_taken_0x15d4a8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x15D4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D4A8u;
        // 0x15d4ac: 0x240300a9  addiu       $v1, $zero, 0xA9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 169));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d4a8) {
            ctx->pc = 0x15D4C4u;
            goto label_15d4c4;
        }
    }
    ctx->pc = 0x15D4B0u;
label_15d4b0:
    // 0x15d4b0: 0x10a30004  beq         $a1, $v1, . + 4 + (0x4 << 2)
label_15d4b4:
    if (ctx->pc == 0x15D4B4u) {
        ctx->pc = 0x15D4B8u;
        goto label_15d4b8;
    }
    ctx->pc = 0x15D4B0u;
    {
        const bool branch_taken_0x15d4b0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x15d4b0) {
            ctx->pc = 0x15D4C4u;
            goto label_15d4c4;
        }
    }
    ctx->pc = 0x15D4B8u;
label_15d4b8:
    // 0x15d4b8: 0x240300cc  addiu       $v1, $zero, 0xCC
    ctx->pc = 0x15d4b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 204));
label_15d4bc:
    // 0x15d4bc: 0x14a30044  bne         $a1, $v1, . + 4 + (0x44 << 2)
label_15d4c0:
    if (ctx->pc == 0x15D4C0u) {
        ctx->pc = 0x15D4C4u;
        goto label_15d4c4;
    }
    ctx->pc = 0x15D4BCu;
    {
        const bool branch_taken_0x15d4bc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x15d4bc) {
            ctx->pc = 0x15D5D0u;
            goto label_15d5d0;
        }
    }
    ctx->pc = 0x15D4C4u;
label_15d4c4:
    // 0x15d4c4: 0x0  nop
    ctx->pc = 0x15d4c4u;
    // NOP
label_15d4c8:
    // 0x15d4c8: 0xc6410000  lwc1        $f1, 0x0($s2)
    ctx->pc = 0x15d4c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_15d4cc:
    // 0x15d4cc: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x15d4ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_15d4d0:
    // 0x15d4d0: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x15d4d0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_15d4d4:
    // 0x15d4d4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x15d4d4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_15d4d8:
    // 0x15d4d8: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x15d4d8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_15d4dc:
    // 0x15d4dc: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x15d4dcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_15d4e0:
    // 0x15d4e0: 0x0  nop
    ctx->pc = 0x15d4e0u;
    // NOP
label_15d4e4:
    // 0x15d4e4: 0x1483003a  bne         $a0, $v1, . + 4 + (0x3A << 2)
label_15d4e8:
    if (ctx->pc == 0x15D4E8u) {
        ctx->pc = 0x15D4ECu;
        goto label_15d4ec;
    }
    ctx->pc = 0x15D4E4u;
    {
        const bool branch_taken_0x15d4e4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x15d4e4) {
            ctx->pc = 0x15D5D0u;
            goto label_15d5d0;
        }
    }
    ctx->pc = 0x15D4ECu;
label_15d4ec:
    // 0x15d4ec: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x15d4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_15d4f0:
    // 0x15d4f0: 0x12c20030  beq         $s6, $v0, . + 4 + (0x30 << 2)
label_15d4f4:
    if (ctx->pc == 0x15D4F4u) {
        ctx->pc = 0x15D4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D4F0u;
        // 0x15d4f4: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D4F8u;
        goto label_15d4f8;
    }
    ctx->pc = 0x15D4F0u;
    {
        const bool branch_taken_0x15d4f0 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 2));
        ctx->pc = 0x15D4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D4F0u;
        // 0x15d4f4: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d4f0) {
            ctx->pc = 0x15D5B4u;
            goto label_15d5b4;
        }
    }
    ctx->pc = 0x15D4F8u;
label_15d4f8:
    // 0x15d4f8: 0x26450150  addiu       $a1, $s2, 0x150
    ctx->pc = 0x15d4f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 336));
label_15d4fc:
    // 0x15d4fc: 0xc0488ec  jal         func_1223B0
label_15d500:
    if (ctx->pc == 0x15D500u) {
        ctx->pc = 0x15D500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D4FCu;
        // 0x15d500: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D504u;
        goto label_15d504;
    }
    ctx->pc = 0x15D4FCu;
    SET_GPR_U32(ctx, 31, 0x15D504u);
    ctx->pc = 0x15D500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D4FCu;
    // 0x15d500: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1223B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1223B0u, 0x15D4FCu, 0x15D504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D504u;
label_15d504:
    // 0x15d504: 0xa64001ae  sh          $zero, 0x1AE($s2)
    ctx->pc = 0x15d504u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 430), (uint16_t)GPR_U32(ctx, 0));
label_15d508:
    // 0x15d508: 0x240200ad  addiu       $v0, $zero, 0xAD
    ctx->pc = 0x15d508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 173));
label_15d50c:
    // 0x15d50c: 0x8643003c  lh          $v1, 0x3C($s2)
    ctx->pc = 0x15d50cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 60)));
label_15d510:
    // 0x15d510: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
label_15d514:
    if (ctx->pc == 0x15D514u) {
        ctx->pc = 0x15D514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D510u;
        // 0x15d514: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D518u;
        goto label_15d518;
    }
    ctx->pc = 0x15D510u;
    {
        const bool branch_taken_0x15d510 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x15D514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D510u;
        // 0x15d514: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d510) {
            ctx->pc = 0x15D53Cu;
            goto label_15d53c;
        }
    }
    ctx->pc = 0x15D518u;
label_15d518:
    // 0x15d518: 0xc063110  jal         func_18C440
label_15d51c:
    if (ctx->pc == 0x15D51Cu) {
        ctx->pc = 0x15D520u;
        goto label_15d520;
    }
    ctx->pc = 0x15D518u;
    SET_GPR_U32(ctx, 31, 0x15D520u);
    ctx->pc = 0x18C440u;
    { ctx->pc = 0x18c440; return; }
    ctx->pc = 0x15D520u;
label_15d520:
    // 0x15d520: 0x26c4000b  addiu       $a0, $s6, 0xB
    ctx->pc = 0x15d520u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 11));
label_15d524:
    // 0x15d524: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x15d524u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15d528:
    // 0x15d528: 0x832004  sllv        $a0, $v1, $a0
    ctx->pc = 0x15d528u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
label_15d52c:
    // 0x15d52c: 0x8f83858c  lw          $v1, -0x7A74($gp)
    ctx->pc = 0x15d52cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935948)));
label_15d530:
    // 0x15d530: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x15d530u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_15d534:
    // 0x15d534: 0x10000012  b           . + 4 + (0x12 << 2)
label_15d538:
    if (ctx->pc == 0x15D538u) {
        ctx->pc = 0x15D538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D534u;
        // 0x15d538: 0xaf83858c  sw          $v1, -0x7A74($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935948), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D53Cu;
        goto label_15d53c;
    }
    ctx->pc = 0x15D534u;
    {
        const bool branch_taken_0x15d534 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D534u;
        // 0x15d538: 0xaf83858c  sw          $v1, -0x7A74($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935948), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d534) {
            ctx->pc = 0x15D580u;
            goto label_15d580;
        }
    }
    ctx->pc = 0x15D53Cu;
label_15d53c:
    // 0x15d53c: 0x0  nop
    ctx->pc = 0x15d53cu;
    // NOP
label_15d540:
    // 0x15d540: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x15d540u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_15d544:
    // 0x15d544: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x15d544u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15d548:
    // 0x15d548: 0x24060028  addiu       $a2, $zero, 0x28
    ctx->pc = 0x15d548u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_15d54c:
    // 0x15d54c: 0xc07586c  jal         func_1D61B0
label_15d550:
    if (ctx->pc == 0x15D550u) {
        ctx->pc = 0x15D550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D54Cu;
        // 0x15d550: 0x240700ff  addiu       $a3, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D554u;
        goto label_15d554;
    }
    ctx->pc = 0x15D54Cu;
    SET_GPR_U32(ctx, 31, 0x15D554u);
    ctx->pc = 0x15D550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D54Cu;
    // 0x15d550: 0x240700ff  addiu       $a3, $zero, 0xFF (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D61B0u;
    { ctx->pc = 0x1d61b0; return; }
    ctx->pc = 0x15D554u;
label_15d554:
    // 0x15d554: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x15d554u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_15d558:
    // 0x15d558: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15d558u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15d55c:
    // 0x15d55c: 0x2406003c  addiu       $a2, $zero, 0x3C
    ctx->pc = 0x15d55cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_15d560:
    // 0x15d560: 0xc07586c  jal         func_1D61B0
label_15d564:
    if (ctx->pc == 0x15D564u) {
        ctx->pc = 0x15D564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D560u;
        // 0x15d564: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D568u;
        goto label_15d568;
    }
    ctx->pc = 0x15D560u;
    SET_GPR_U32(ctx, 31, 0x15D568u);
    ctx->pc = 0x15D564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D560u;
    // 0x15d564: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D61B0u;
    { ctx->pc = 0x1d61b0; return; }
    ctx->pc = 0x15D568u;
label_15d568:
    // 0x15d568: 0x26c4000d  addiu       $a0, $s6, 0xD
    ctx->pc = 0x15d568u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 13));
label_15d56c:
    // 0x15d56c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x15d56cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15d570:
    // 0x15d570: 0x832004  sllv        $a0, $v1, $a0
    ctx->pc = 0x15d570u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
label_15d574:
    // 0x15d574: 0x8f83858c  lw          $v1, -0x7A74($gp)
    ctx->pc = 0x15d574u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935948)));
label_15d578:
    // 0x15d578: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x15d578u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_15d57c:
    // 0x15d57c: 0xaf83858c  sw          $v1, -0x7A74($gp)
    ctx->pc = 0x15d57cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935948), GPR_U32(ctx, 3));
label_15d580:
    // 0x15d580: 0x8f838590  lw          $v1, -0x7A70($gp)
    ctx->pc = 0x15d580u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
label_15d584:
    // 0x15d584: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x15d584u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_15d588:
    // 0x15d588: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x15d588u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_15d58c:
    // 0x15d58c: 0x10600061  beqz        $v1, . + 4 + (0x61 << 2)
label_15d590:
    if (ctx->pc == 0x15D590u) {
        ctx->pc = 0x15D594u;
        goto label_15d594;
    }
    ctx->pc = 0x15D58Cu;
    {
        const bool branch_taken_0x15d58c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x15d58c) {
            ctx->pc = 0x15D714u;
            { ctx->pc = 0x15d714; return; }
        }
    }
    ctx->pc = 0x15D594u;
label_15d594:
    // 0x15d594: 0x8f858588  lw          $a1, -0x7A78($gp)
    ctx->pc = 0x15d594u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935944)));
label_15d598:
    // 0x15d598: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x15d598u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_15d59c:
    // 0x15d59c: 0x8f84858c  lw          $a0, -0x7A74($gp)
    ctx->pc = 0x15d59cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935948)));
label_15d5a0:
    // 0x15d5a0: 0x34a58000  ori         $a1, $a1, 0x8000
    ctx->pc = 0x15d5a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32768);
label_15d5a4:
    // 0x15d5a4: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x15d5a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_15d5a8:
    // 0x15d5a8: 0xaf858588  sw          $a1, -0x7A78($gp)
    ctx->pc = 0x15d5a8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935944), GPR_U32(ctx, 5));
label_15d5ac:
    // 0x15d5ac: 0x10000059  b           . + 4 + (0x59 << 2)
label_15d5b0:
    if (ctx->pc == 0x15D5B0u) {
        ctx->pc = 0x15D5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D5ACu;
        // 0x15d5b0: 0xaf83858c  sw          $v1, -0x7A74($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935948), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D5B4u;
        goto label_15d5b4;
    }
    ctx->pc = 0x15D5ACu;
    {
        const bool branch_taken_0x15d5ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D5ACu;
        // 0x15d5b0: 0xaf83858c  sw          $v1, -0x7A74($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935948), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d5ac) {
            ctx->pc = 0x15D714u;
            { ctx->pc = 0x15d714; return; }
        }
    }
    ctx->pc = 0x15D5B4u;
label_15d5b4:
    // 0x15d5b4: 0x0  nop
    ctx->pc = 0x15d5b4u;
    // NOP
label_15d5b8:
    // 0x15d5b8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x15d5b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15d5bc:
    // 0x15d5bc: 0x26450150  addiu       $a1, $s2, 0x150
    ctx->pc = 0x15d5bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 336));
label_15d5c0:
    // 0x15d5c0: 0xc0488ec  jal         func_1223B0
label_15d5c4:
    if (ctx->pc == 0x15D5C4u) {
        ctx->pc = 0x15D5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D5C0u;
        // 0x15d5c4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D5C8u;
        goto label_15d5c8;
    }
    ctx->pc = 0x15D5C0u;
    SET_GPR_U32(ctx, 31, 0x15D5C8u);
    ctx->pc = 0x15D5C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D5C0u;
    // 0x15d5c4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1223B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1223B0u, 0x15D5C0u, 0x15D5C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D5C8u;
label_15d5c8:
    // 0x15d5c8: 0x10000052  b           . + 4 + (0x52 << 2)
label_15d5cc:
    if (ctx->pc == 0x15D5CCu) {
        ctx->pc = 0x15D5D0u;
        goto label_15d5d0;
    }
    ctx->pc = 0x15D5C8u;
    {
        const bool branch_taken_0x15d5c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15d5c8) {
            ctx->pc = 0x15D714u;
            { ctx->pc = 0x15d714; return; }
        }
    }
    ctx->pc = 0x15D5D0u;
label_15d5d0:
    // 0x15d5d0: 0x2403006d  addiu       $v1, $zero, 0x6D
    ctx->pc = 0x15d5d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 109));
label_15d5d4:
    // 0x15d5d4: 0x14a30041  bne         $a1, $v1, . + 4 + (0x41 << 2)
label_15d5d8:
    if (ctx->pc == 0x15D5D8u) {
        ctx->pc = 0x15D5DCu;
        goto label_15d5dc;
    }
    ctx->pc = 0x15D5D4u;
    {
        const bool branch_taken_0x15d5d4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x15d5d4) {
            ctx->pc = 0x15D6DCu;
            { ctx->pc = 0x15d6dc; return; }
        }
    }
    ctx->pc = 0x15D5DCu;
label_15d5dc:
    // 0x15d5dc: 0xc08f0cc  jal         func_23C330
label_15d5e0:
    if (ctx->pc == 0x15D5E0u) {
        ctx->pc = 0x15D5E4u;
        goto label_15d5e4;
    }
    ctx->pc = 0x15D5DCu;
    SET_GPR_U32(ctx, 31, 0x15D5E4u);
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x15D5E4u;
label_15d5e4:
    // 0x15d5e4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x15d5e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_15d5e8:
    // 0x15d5e8: 0x3c034180  lui         $v1, 0x4180
    ctx->pc = 0x15d5e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16768 << 16));
label_15d5ec:
    // 0x15d5ec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x15d5ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_15d5f0:
    // 0x15d5f0: 0x0  nop
    ctx->pc = 0x15d5f0u;
    // NOP
label_15d5f4:
    // 0x15d5f4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x15d5f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_15d5f8:
    // 0x15d5f8: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x15d5f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
label_15d5fc:
    // 0x15d5fc: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x15d5fcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    ctx->pc = 0x15d600u;
    return;
}
