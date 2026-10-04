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

// Function: FUN_0017faa0
// Address: 0x17faa0 - 0x2bfb1c
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0017faa0_part28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x18cd90u: goto label_18cd90;
        case 0x18cd94u: goto label_18cd94;
        case 0x18cd98u: goto label_18cd98;
        case 0x18cd9cu: goto label_18cd9c;
        case 0x18cda0u: goto label_18cda0;
        case 0x18cda4u: goto label_18cda4;
        case 0x18cda8u: goto label_18cda8;
        case 0x18cdacu: goto label_18cdac;
        case 0x18cdb0u: goto label_18cdb0;
        case 0x18cdb4u: goto label_18cdb4;
        case 0x18cdb8u: goto label_18cdb8;
        case 0x18cdbcu: goto label_18cdbc;
        case 0x18cdc0u: goto label_18cdc0;
        case 0x18cdc4u: goto label_18cdc4;
        case 0x18cdc8u: goto label_18cdc8;
        case 0x18cdccu: goto label_18cdcc;
        case 0x18cdd0u: goto label_18cdd0;
        case 0x18cdd4u: goto label_18cdd4;
        case 0x18cdd8u: goto label_18cdd8;
        case 0x18cddcu: goto label_18cddc;
        case 0x18cde0u: goto label_18cde0;
        case 0x18cde4u: goto label_18cde4;
        case 0x18cde8u: goto label_18cde8;
        case 0x18cdecu: goto label_18cdec;
        case 0x18cdf0u: goto label_18cdf0;
        case 0x18cdf4u: goto label_18cdf4;
        case 0x18cdf8u: goto label_18cdf8;
        case 0x18cdfcu: goto label_18cdfc;
        case 0x18ce00u: goto label_18ce00;
        case 0x18ce04u: goto label_18ce04;
        case 0x18ce08u: goto label_18ce08;
        case 0x18ce0cu: goto label_18ce0c;
        case 0x18ce10u: goto label_18ce10;
        case 0x18ce14u: goto label_18ce14;
        case 0x18ce18u: goto label_18ce18;
        case 0x18ce1cu: goto label_18ce1c;
        case 0x18ce20u: goto label_18ce20;
        case 0x18ce24u: goto label_18ce24;
        case 0x18ce28u: goto label_18ce28;
        case 0x18ce2cu: goto label_18ce2c;
        case 0x18ce30u: goto label_18ce30;
        case 0x18ce34u: goto label_18ce34;
        case 0x18ce38u: goto label_18ce38;
        case 0x18ce3cu: goto label_18ce3c;
        case 0x18ce40u: goto label_18ce40;
        case 0x18ce44u: goto label_18ce44;
        case 0x18ce48u: goto label_18ce48;
        case 0x18ce4cu: goto label_18ce4c;
        case 0x18ce50u: goto label_18ce50;
        case 0x18ce54u: goto label_18ce54;
        case 0x18ce58u: goto label_18ce58;
        case 0x18ce5cu: goto label_18ce5c;
        case 0x18ce60u: goto label_18ce60;
        case 0x18ce64u: goto label_18ce64;
        case 0x18ce68u: goto label_18ce68;
        case 0x18ce6cu: goto label_18ce6c;
        case 0x18ce70u: goto label_18ce70;
        case 0x18ce74u: goto label_18ce74;
        case 0x18ce78u: goto label_18ce78;
        case 0x18ce7cu: goto label_18ce7c;
        case 0x18ce80u: goto label_18ce80;
        case 0x18ce84u: goto label_18ce84;
        case 0x18ce88u: goto label_18ce88;
        case 0x18ce8cu: goto label_18ce8c;
        case 0x18ce90u: goto label_18ce90;
        case 0x18ce94u: goto label_18ce94;
        case 0x18ce98u: goto label_18ce98;
        case 0x18ce9cu: goto label_18ce9c;
        case 0x18cea0u: goto label_18cea0;
        case 0x18cea4u: goto label_18cea4;
        case 0x18cea8u: goto label_18cea8;
        case 0x18ceacu: goto label_18ceac;
        case 0x18ceb0u: goto label_18ceb0;
        case 0x18ceb4u: goto label_18ceb4;
        case 0x18ceb8u: goto label_18ceb8;
        case 0x18cebcu: goto label_18cebc;
        case 0x18cec0u: goto label_18cec0;
        case 0x18cec4u: goto label_18cec4;
        case 0x18cec8u: goto label_18cec8;
        case 0x18ceccu: goto label_18cecc;
        case 0x18ced0u: goto label_18ced0;
        case 0x18ced4u: goto label_18ced4;
        case 0x18ced8u: goto label_18ced8;
        case 0x18cedcu: goto label_18cedc;
        case 0x18cee0u: goto label_18cee0;
        case 0x18cee4u: goto label_18cee4;
        case 0x18cee8u: goto label_18cee8;
        case 0x18ceecu: goto label_18ceec;
        case 0x18cef0u: goto label_18cef0;
        case 0x18cef4u: goto label_18cef4;
        case 0x18cef8u: goto label_18cef8;
        case 0x18cefcu: goto label_18cefc;
        case 0x18cf00u: goto label_18cf00;
        case 0x18cf04u: goto label_18cf04;
        case 0x18cf08u: goto label_18cf08;
        case 0x18cf0cu: goto label_18cf0c;
        case 0x18cf10u: goto label_18cf10;
        case 0x18cf14u: goto label_18cf14;
        case 0x18cf18u: goto label_18cf18;
        case 0x18cf1cu: goto label_18cf1c;
        case 0x18cf20u: goto label_18cf20;
        case 0x18cf24u: goto label_18cf24;
        case 0x18cf28u: goto label_18cf28;
        case 0x18cf2cu: goto label_18cf2c;
        case 0x18cf30u: goto label_18cf30;
        case 0x18cf34u: goto label_18cf34;
        case 0x18cf38u: goto label_18cf38;
        case 0x18cf3cu: goto label_18cf3c;
        case 0x18cf40u: goto label_18cf40;
        case 0x18cf44u: goto label_18cf44;
        case 0x18cf48u: goto label_18cf48;
        case 0x18cf4cu: goto label_18cf4c;
        case 0x18cf50u: goto label_18cf50;
        case 0x18cf54u: goto label_18cf54;
        case 0x18cf58u: goto label_18cf58;
        case 0x18cf5cu: goto label_18cf5c;
        case 0x18cf60u: goto label_18cf60;
        case 0x18cf64u: goto label_18cf64;
        case 0x18cf68u: goto label_18cf68;
        case 0x18cf6cu: goto label_18cf6c;
        case 0x18cf70u: goto label_18cf70;
        case 0x18cf74u: goto label_18cf74;
        case 0x18cf78u: goto label_18cf78;
        case 0x18cf7cu: goto label_18cf7c;
        case 0x18cf80u: goto label_18cf80;
        case 0x18cf84u: goto label_18cf84;
        case 0x18cf88u: goto label_18cf88;
        case 0x18cf8cu: goto label_18cf8c;
        case 0x18cf90u: goto label_18cf90;
        case 0x18cf94u: goto label_18cf94;
        case 0x18cf98u: goto label_18cf98;
        case 0x18cf9cu: goto label_18cf9c;
        case 0x18cfa0u: goto label_18cfa0;
        case 0x18cfa4u: goto label_18cfa4;
        case 0x18cfa8u: goto label_18cfa8;
        case 0x18cfacu: goto label_18cfac;
        case 0x18cfb0u: goto label_18cfb0;
        case 0x18cfb4u: goto label_18cfb4;
        case 0x18cfb8u: goto label_18cfb8;
        case 0x18cfbcu: goto label_18cfbc;
        case 0x18cfc0u: goto label_18cfc0;
        case 0x18cfc4u: goto label_18cfc4;
        case 0x18cfc8u: goto label_18cfc8;
        case 0x18cfccu: goto label_18cfcc;
        case 0x18cfd0u: goto label_18cfd0;
        case 0x18cfd4u: goto label_18cfd4;
        case 0x18cfd8u: goto label_18cfd8;
        case 0x18cfdcu: goto label_18cfdc;
        case 0x18cfe0u: goto label_18cfe0;
        case 0x18cfe4u: goto label_18cfe4;
        case 0x18cfe8u: goto label_18cfe8;
        case 0x18cfecu: goto label_18cfec;
        case 0x18cff0u: goto label_18cff0;
        case 0x18cff4u: goto label_18cff4;
        case 0x18cff8u: goto label_18cff8;
        case 0x18cffcu: goto label_18cffc;
        case 0x18d000u: goto label_18d000;
        case 0x18d004u: goto label_18d004;
        case 0x18d008u: goto label_18d008;
        case 0x18d00cu: goto label_18d00c;
        case 0x18d010u: goto label_18d010;
        case 0x18d014u: goto label_18d014;
        case 0x18d018u: goto label_18d018;
        case 0x18d01cu: goto label_18d01c;
        case 0x18d020u: goto label_18d020;
        case 0x18d024u: goto label_18d024;
        case 0x18d028u: goto label_18d028;
        case 0x18d02cu: goto label_18d02c;
        case 0x18d030u: goto label_18d030;
        case 0x18d034u: goto label_18d034;
        case 0x18d038u: goto label_18d038;
        case 0x18d03cu: goto label_18d03c;
        case 0x18d040u: goto label_18d040;
        case 0x18d044u: goto label_18d044;
        case 0x18d048u: goto label_18d048;
        case 0x18d04cu: goto label_18d04c;
        case 0x18d050u: goto label_18d050;
        case 0x18d054u: goto label_18d054;
        case 0x18d058u: goto label_18d058;
        case 0x18d05cu: goto label_18d05c;
        case 0x18d060u: goto label_18d060;
        case 0x18d064u: goto label_18d064;
        case 0x18d068u: goto label_18d068;
        case 0x18d06cu: goto label_18d06c;
        case 0x18d070u: goto label_18d070;
        case 0x18d074u: goto label_18d074;
        case 0x18d078u: goto label_18d078;
        case 0x18d07cu: goto label_18d07c;
        case 0x18d080u: goto label_18d080;
        case 0x18d084u: goto label_18d084;
        case 0x18d088u: goto label_18d088;
        case 0x18d08cu: goto label_18d08c;
        case 0x18d090u: goto label_18d090;
        case 0x18d094u: goto label_18d094;
        case 0x18d098u: goto label_18d098;
        case 0x18d09cu: goto label_18d09c;
        case 0x18d0a0u: goto label_18d0a0;
        case 0x18d0a4u: goto label_18d0a4;
        case 0x18d0a8u: goto label_18d0a8;
        case 0x18d0acu: goto label_18d0ac;
        case 0x18d0b0u: goto label_18d0b0;
        case 0x18d0b4u: goto label_18d0b4;
        case 0x18d0b8u: goto label_18d0b8;
        case 0x18d0bcu: goto label_18d0bc;
        case 0x18d0c0u: goto label_18d0c0;
        case 0x18d0c4u: goto label_18d0c4;
        case 0x18d0c8u: goto label_18d0c8;
        case 0x18d0ccu: goto label_18d0cc;
        case 0x18d0d0u: goto label_18d0d0;
        case 0x18d0d4u: goto label_18d0d4;
        case 0x18d0d8u: goto label_18d0d8;
        case 0x18d0dcu: goto label_18d0dc;
        case 0x18d0e0u: goto label_18d0e0;
        case 0x18d0e4u: goto label_18d0e4;
        case 0x18d0e8u: goto label_18d0e8;
        case 0x18d0ecu: goto label_18d0ec;
        case 0x18d0f0u: goto label_18d0f0;
        case 0x18d0f4u: goto label_18d0f4;
        case 0x18d0f8u: goto label_18d0f8;
        case 0x18d0fcu: goto label_18d0fc;
        case 0x18d100u: goto label_18d100;
        case 0x18d104u: goto label_18d104;
        case 0x18d108u: goto label_18d108;
        case 0x18d10cu: goto label_18d10c;
        case 0x18d110u: goto label_18d110;
        case 0x18d114u: goto label_18d114;
        case 0x18d118u: goto label_18d118;
        case 0x18d11cu: goto label_18d11c;
        case 0x18d120u: goto label_18d120;
        case 0x18d124u: goto label_18d124;
        case 0x18d128u: goto label_18d128;
        case 0x18d12cu: goto label_18d12c;
        case 0x18d130u: goto label_18d130;
        case 0x18d134u: goto label_18d134;
        case 0x18d138u: goto label_18d138;
        case 0x18d13cu: goto label_18d13c;
        case 0x18d140u: goto label_18d140;
        case 0x18d144u: goto label_18d144;
        case 0x18d148u: goto label_18d148;
        case 0x18d14cu: goto label_18d14c;
        case 0x18d150u: goto label_18d150;
        case 0x18d154u: goto label_18d154;
        case 0x18d158u: goto label_18d158;
        case 0x18d15cu: goto label_18d15c;
        case 0x18d160u: goto label_18d160;
        case 0x18d164u: goto label_18d164;
        case 0x18d168u: goto label_18d168;
        case 0x18d16cu: goto label_18d16c;
        case 0x18d170u: goto label_18d170;
        case 0x18d174u: goto label_18d174;
        case 0x18d178u: goto label_18d178;
        case 0x18d17cu: goto label_18d17c;
        case 0x18d180u: goto label_18d180;
        case 0x18d184u: goto label_18d184;
        case 0x18d188u: goto label_18d188;
        case 0x18d18cu: goto label_18d18c;
        case 0x18d190u: goto label_18d190;
        case 0x18d194u: goto label_18d194;
        case 0x18d198u: goto label_18d198;
        case 0x18d19cu: goto label_18d19c;
        case 0x18d1a0u: goto label_18d1a0;
        case 0x18d1a4u: goto label_18d1a4;
        case 0x18d1a8u: goto label_18d1a8;
        case 0x18d1acu: goto label_18d1ac;
        case 0x18d1b0u: goto label_18d1b0;
        case 0x18d1b4u: goto label_18d1b4;
        case 0x18d1b8u: goto label_18d1b8;
        case 0x18d1bcu: goto label_18d1bc;
        case 0x18d1c0u: goto label_18d1c0;
        case 0x18d1c4u: goto label_18d1c4;
        case 0x18d1c8u: goto label_18d1c8;
        case 0x18d1ccu: goto label_18d1cc;
        case 0x18d1d0u: goto label_18d1d0;
        case 0x18d1d4u: goto label_18d1d4;
        case 0x18d1d8u: goto label_18d1d8;
        case 0x18d1dcu: goto label_18d1dc;
        case 0x18d1e0u: goto label_18d1e0;
        case 0x18d1e4u: goto label_18d1e4;
        case 0x18d1e8u: goto label_18d1e8;
        case 0x18d1ecu: goto label_18d1ec;
        case 0x18d1f0u: goto label_18d1f0;
        case 0x18d1f4u: goto label_18d1f4;
        case 0x18d1f8u: goto label_18d1f8;
        case 0x18d1fcu: goto label_18d1fc;
        case 0x18d200u: goto label_18d200;
        case 0x18d204u: goto label_18d204;
        case 0x18d208u: goto label_18d208;
        case 0x18d20cu: goto label_18d20c;
        case 0x18d210u: goto label_18d210;
        case 0x18d214u: goto label_18d214;
        case 0x18d218u: goto label_18d218;
        case 0x18d21cu: goto label_18d21c;
        case 0x18d220u: goto label_18d220;
        case 0x18d224u: goto label_18d224;
        case 0x18d228u: goto label_18d228;
        case 0x18d22cu: goto label_18d22c;
        case 0x18d230u: goto label_18d230;
        case 0x18d234u: goto label_18d234;
        case 0x18d238u: goto label_18d238;
        case 0x18d23cu: goto label_18d23c;
        case 0x18d240u: goto label_18d240;
        case 0x18d244u: goto label_18d244;
        case 0x18d248u: goto label_18d248;
        case 0x18d24cu: goto label_18d24c;
        case 0x18d250u: goto label_18d250;
        case 0x18d254u: goto label_18d254;
        case 0x18d258u: goto label_18d258;
        case 0x18d25cu: goto label_18d25c;
        case 0x18d260u: goto label_18d260;
        case 0x18d264u: goto label_18d264;
        case 0x18d268u: goto label_18d268;
        case 0x18d26cu: goto label_18d26c;
        case 0x18d270u: goto label_18d270;
        case 0x18d274u: goto label_18d274;
        case 0x18d278u: goto label_18d278;
        case 0x18d27cu: goto label_18d27c;
        case 0x18d280u: goto label_18d280;
        case 0x18d284u: goto label_18d284;
        case 0x18d288u: goto label_18d288;
        case 0x18d28cu: goto label_18d28c;
        case 0x18d290u: goto label_18d290;
        case 0x18d294u: goto label_18d294;
        case 0x18d298u: goto label_18d298;
        case 0x18d29cu: goto label_18d29c;
        case 0x18d2a0u: goto label_18d2a0;
        case 0x18d2a4u: goto label_18d2a4;
        case 0x18d2a8u: goto label_18d2a8;
        case 0x18d2acu: goto label_18d2ac;
        case 0x18d2b0u: goto label_18d2b0;
        case 0x18d2b4u: goto label_18d2b4;
        case 0x18d2b8u: goto label_18d2b8;
        case 0x18d2bcu: goto label_18d2bc;
        case 0x18d2c0u: goto label_18d2c0;
        case 0x18d2c4u: goto label_18d2c4;
        case 0x18d2c8u: goto label_18d2c8;
        case 0x18d2ccu: goto label_18d2cc;
        case 0x18d2d0u: goto label_18d2d0;
        case 0x18d2d4u: goto label_18d2d4;
        case 0x18d2d8u: goto label_18d2d8;
        case 0x18d2dcu: goto label_18d2dc;
        case 0x18d2e0u: goto label_18d2e0;
        case 0x18d2e4u: goto label_18d2e4;
        case 0x18d2e8u: goto label_18d2e8;
        case 0x18d2ecu: goto label_18d2ec;
        case 0x18d2f0u: goto label_18d2f0;
        case 0x18d2f4u: goto label_18d2f4;
        case 0x18d2f8u: goto label_18d2f8;
        case 0x18d2fcu: goto label_18d2fc;
        case 0x18d300u: goto label_18d300;
        case 0x18d304u: goto label_18d304;
        case 0x18d308u: goto label_18d308;
        case 0x18d30cu: goto label_18d30c;
        case 0x18d310u: goto label_18d310;
        case 0x18d314u: goto label_18d314;
        case 0x18d318u: goto label_18d318;
        case 0x18d31cu: goto label_18d31c;
        case 0x18d320u: goto label_18d320;
        case 0x18d324u: goto label_18d324;
        case 0x18d328u: goto label_18d328;
        case 0x18d32cu: goto label_18d32c;
        case 0x18d330u: goto label_18d330;
        case 0x18d334u: goto label_18d334;
        case 0x18d338u: goto label_18d338;
        case 0x18d33cu: goto label_18d33c;
        case 0x18d340u: goto label_18d340;
        case 0x18d344u: goto label_18d344;
        case 0x18d348u: goto label_18d348;
        case 0x18d34cu: goto label_18d34c;
        case 0x18d350u: goto label_18d350;
        case 0x18d354u: goto label_18d354;
        case 0x18d358u: goto label_18d358;
        case 0x18d35cu: goto label_18d35c;
        case 0x18d360u: goto label_18d360;
        case 0x18d364u: goto label_18d364;
        case 0x18d368u: goto label_18d368;
        case 0x18d36cu: goto label_18d36c;
        case 0x18d370u: goto label_18d370;
        case 0x18d374u: goto label_18d374;
        case 0x18d378u: goto label_18d378;
        case 0x18d37cu: goto label_18d37c;
        case 0x18d380u: goto label_18d380;
        case 0x18d384u: goto label_18d384;
        case 0x18d388u: goto label_18d388;
        case 0x18d38cu: goto label_18d38c;
        case 0x18d390u: goto label_18d390;
        case 0x18d394u: goto label_18d394;
        case 0x18d398u: goto label_18d398;
        case 0x18d39cu: goto label_18d39c;
        case 0x18d3a0u: goto label_18d3a0;
        case 0x18d3a4u: goto label_18d3a4;
        case 0x18d3a8u: goto label_18d3a8;
        case 0x18d3acu: goto label_18d3ac;
        case 0x18d3b0u: goto label_18d3b0;
        case 0x18d3b4u: goto label_18d3b4;
        case 0x18d3b8u: goto label_18d3b8;
        case 0x18d3bcu: goto label_18d3bc;
        case 0x18d3c0u: goto label_18d3c0;
        case 0x18d3c4u: goto label_18d3c4;
        case 0x18d3c8u: goto label_18d3c8;
        case 0x18d3ccu: goto label_18d3cc;
        case 0x18d3d0u: goto label_18d3d0;
        case 0x18d3d4u: goto label_18d3d4;
        case 0x18d3d8u: goto label_18d3d8;
        case 0x18d3dcu: goto label_18d3dc;
        case 0x18d3e0u: goto label_18d3e0;
        case 0x18d3e4u: goto label_18d3e4;
        case 0x18d3e8u: goto label_18d3e8;
        case 0x18d3ecu: goto label_18d3ec;
        case 0x18d3f0u: goto label_18d3f0;
        case 0x18d3f4u: goto label_18d3f4;
        case 0x18d3f8u: goto label_18d3f8;
        case 0x18d3fcu: goto label_18d3fc;
        case 0x18d400u: goto label_18d400;
        case 0x18d404u: goto label_18d404;
        case 0x18d408u: goto label_18d408;
        case 0x18d40cu: goto label_18d40c;
        case 0x18d410u: goto label_18d410;
        case 0x18d414u: goto label_18d414;
        case 0x18d418u: goto label_18d418;
        case 0x18d41cu: goto label_18d41c;
        case 0x18d420u: goto label_18d420;
        case 0x18d424u: goto label_18d424;
        case 0x18d428u: goto label_18d428;
        case 0x18d42cu: goto label_18d42c;
        case 0x18d430u: goto label_18d430;
        case 0x18d434u: goto label_18d434;
        case 0x18d438u: goto label_18d438;
        case 0x18d43cu: goto label_18d43c;
        case 0x18d440u: goto label_18d440;
        case 0x18d444u: goto label_18d444;
        case 0x18d448u: goto label_18d448;
        case 0x18d44cu: goto label_18d44c;
        case 0x18d450u: goto label_18d450;
        case 0x18d454u: goto label_18d454;
        case 0x18d458u: goto label_18d458;
        case 0x18d45cu: goto label_18d45c;
        case 0x18d460u: goto label_18d460;
        case 0x18d464u: goto label_18d464;
        case 0x18d468u: goto label_18d468;
        case 0x18d46cu: goto label_18d46c;
        case 0x18d470u: goto label_18d470;
        case 0x18d474u: goto label_18d474;
        case 0x18d478u: goto label_18d478;
        case 0x18d47cu: goto label_18d47c;
        case 0x18d480u: goto label_18d480;
        case 0x18d484u: goto label_18d484;
        case 0x18d488u: goto label_18d488;
        case 0x18d48cu: goto label_18d48c;
        case 0x18d490u: goto label_18d490;
        case 0x18d494u: goto label_18d494;
        case 0x18d498u: goto label_18d498;
        case 0x18d49cu: goto label_18d49c;
        case 0x18d4a0u: goto label_18d4a0;
        case 0x18d4a4u: goto label_18d4a4;
        case 0x18d4a8u: goto label_18d4a8;
        case 0x18d4acu: goto label_18d4ac;
        case 0x18d4b0u: goto label_18d4b0;
        case 0x18d4b4u: goto label_18d4b4;
        case 0x18d4b8u: goto label_18d4b8;
        case 0x18d4bcu: goto label_18d4bc;
        case 0x18d4c0u: goto label_18d4c0;
        case 0x18d4c4u: goto label_18d4c4;
        case 0x18d4c8u: goto label_18d4c8;
        case 0x18d4ccu: goto label_18d4cc;
        case 0x18d4d0u: goto label_18d4d0;
        case 0x18d4d4u: goto label_18d4d4;
        case 0x18d4d8u: goto label_18d4d8;
        case 0x18d4dcu: goto label_18d4dc;
        case 0x18d4e0u: goto label_18d4e0;
        case 0x18d4e4u: goto label_18d4e4;
        case 0x18d4e8u: goto label_18d4e8;
        case 0x18d4ecu: goto label_18d4ec;
        case 0x18d4f0u: goto label_18d4f0;
        case 0x18d4f4u: goto label_18d4f4;
        case 0x18d4f8u: goto label_18d4f8;
        case 0x18d4fcu: goto label_18d4fc;
        case 0x18d500u: goto label_18d500;
        case 0x18d504u: goto label_18d504;
        case 0x18d508u: goto label_18d508;
        case 0x18d50cu: goto label_18d50c;
        case 0x18d510u: goto label_18d510;
        case 0x18d514u: goto label_18d514;
        case 0x18d518u: goto label_18d518;
        case 0x18d51cu: goto label_18d51c;
        case 0x18d520u: goto label_18d520;
        case 0x18d524u: goto label_18d524;
        case 0x18d528u: goto label_18d528;
        case 0x18d52cu: goto label_18d52c;
        case 0x18d530u: goto label_18d530;
        case 0x18d534u: goto label_18d534;
        case 0x18d538u: goto label_18d538;
        case 0x18d53cu: goto label_18d53c;
        case 0x18d540u: goto label_18d540;
        case 0x18d544u: goto label_18d544;
        case 0x18d548u: goto label_18d548;
        case 0x18d54cu: goto label_18d54c;
        case 0x18d550u: goto label_18d550;
        case 0x18d554u: goto label_18d554;
        case 0x18d558u: goto label_18d558;
        case 0x18d55cu: goto label_18d55c;
        default: return;
    }

label_18cd90:
    if (ctx->pc == 0x18CD90u) {
        ctx->pc = 0x18CD90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CD8Cu;
        // 0x18cd90: 0x27a60040  addiu       $a2, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18CD94u;
        goto label_18cd94;
    }
    ctx->pc = 0x18CD8Cu;
    SET_GPR_U32(ctx, 31, 0x18CD94u);
    ctx->pc = 0x18CD90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18CD8Cu;
    // 0x18cd90: 0x27a60040  addiu       $a2, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F6B0u;
    { ctx->pc = 0x18f6b0; return; }
    ctx->pc = 0x18CD94u;
label_18cd94:
    // 0x18cd94: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x18cd94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_18cd98:
    // 0x18cd98: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18cd98u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_18cd9c:
    // 0x18cd9c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18cd9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_18cda0:
    // 0x18cda0: 0x3e00008  jr          $ra
label_18cda4:
    if (ctx->pc == 0x18CDA4u) {
        ctx->pc = 0x18CDA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CDA0u;
        // 0x18cda4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18CDA8u;
        goto label_18cda8;
    }
    ctx->pc = 0x18CDA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18CDA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CDA0u;
        // 0x18cda4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18CDA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18CDA8u;
label_18cda8:
    // 0x18cda8: 0x0  nop
    ctx->pc = 0x18cda8u;
    // NOP
label_18cdac:
    // 0x18cdac: 0x0  nop
    ctx->pc = 0x18cdacu;
    // NOP
label_18cdb0:
    // 0x18cdb0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x18cdb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_18cdb4:
    // 0x18cdb4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x18cdb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_18cdb8:
    // 0x18cdb8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18cdb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_18cdbc:
    // 0x18cdbc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18cdbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_18cdc0:
    // 0x18cdc0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x18cdc0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_18cdc4:
    // 0x18cdc4: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x18cdc4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_18cdc8:
    // 0x18cdc8: 0xc066e26  jal         func_19B898
label_18cdcc:
    if (ctx->pc == 0x18CDCCu) {
        ctx->pc = 0x18CDCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CDC8u;
        // 0x18cdcc: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18CDD0u;
        goto label_18cdd0;
    }
    ctx->pc = 0x18CDC8u;
    SET_GPR_U32(ctx, 31, 0x18CDD0u);
    ctx->pc = 0x18CDCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18CDC8u;
    // 0x18cdcc: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x18CDD0u;
label_18cdd0:
    // 0x18cdd0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x18cdd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_18cdd4:
    // 0x18cdd4: 0xc066e26  jal         func_19B898
label_18cdd8:
    if (ctx->pc == 0x18CDD8u) {
        ctx->pc = 0x18CDD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CDD4u;
        // 0x18cdd8: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18CDDCu;
        goto label_18cddc;
    }
    ctx->pc = 0x18CDD4u;
    SET_GPR_U32(ctx, 31, 0x18CDDCu);
    ctx->pc = 0x18CDD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18CDD4u;
    // 0x18cdd8: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x18CDDCu;
label_18cddc:
    // 0x18cddc: 0x3c023e1d  lui         $v0, 0x3E1D
    ctx->pc = 0x18cddcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15901 << 16));
label_18cde0:
    // 0x18cde0: 0x3c03c28c  lui         $v1, 0xC28C
    ctx->pc = 0x18cde0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49804 << 16));
label_18cde4:
    // 0x18cde4: 0x344289d9  ori         $v0, $v0, 0x89D9
    ctx->pc = 0x18cde4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)35289);
label_18cde8:
    // 0x18cde8: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x18cde8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_18cdec:
    // 0x18cdec: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x18cdecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_18cdf0:
    // 0x18cdf0: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x18cdf0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_18cdf4:
    // 0x18cdf4: 0x111100  sll         $v0, $s1, 4
    ctx->pc = 0x18cdf4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
label_18cdf8:
    // 0x18cdf8: 0x511823  subu        $v1, $v0, $s1
    ctx->pc = 0x18cdf8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_18cdfc:
    // 0x18cdfc: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x18cdfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
label_18ce00:
    // 0x18ce00: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x18ce00u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_18ce04:
    // 0x18ce04: 0x24422cc0  addiu       $v0, $v0, 0x2CC0
    ctx->pc = 0x18ce04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11456));
label_18ce08:
    // 0x18ce08: 0x3c03c100  lui         $v1, 0xC100
    ctx->pc = 0x18ce08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49408 << 16));
label_18ce0c:
    // 0x18ce0c: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x18ce0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_18ce10:
    // 0x18ce10: 0x3c0243e1  lui         $v0, 0x43E1
    ctx->pc = 0x18ce10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17377 << 16));
label_18ce14:
    // 0x18ce14: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x18ce14u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_18ce18:
    // 0x18ce18: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x18ce18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_18ce1c:
    // 0x18ce1c: 0xc063dac  jal         func_18F6B0
label_18ce20:
    if (ctx->pc == 0x18CE20u) {
        ctx->pc = 0x18CE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CE1Cu;
        // 0x18ce20: 0x27a60040  addiu       $a2, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18CE24u;
        goto label_18ce24;
    }
    ctx->pc = 0x18CE1Cu;
    SET_GPR_U32(ctx, 31, 0x18CE24u);
    ctx->pc = 0x18CE20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18CE1Cu;
    // 0x18ce20: 0x27a60040  addiu       $a2, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F6B0u;
    { ctx->pc = 0x18f6b0; return; }
    ctx->pc = 0x18CE24u;
label_18ce24:
    // 0x18ce24: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x18ce24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_18ce28:
    // 0x18ce28: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18ce28u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_18ce2c:
    // 0x18ce2c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18ce2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_18ce30:
    // 0x18ce30: 0x3e00008  jr          $ra
label_18ce34:
    if (ctx->pc == 0x18CE34u) {
        ctx->pc = 0x18CE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CE30u;
        // 0x18ce34: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18CE38u;
        goto label_18ce38;
    }
    ctx->pc = 0x18CE30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18CE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CE30u;
        // 0x18ce34: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18CE30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18CE38u;
label_18ce38:
    // 0x18ce38: 0x0  nop
    ctx->pc = 0x18ce38u;
    // NOP
label_18ce3c:
    // 0x18ce3c: 0x0  nop
    ctx->pc = 0x18ce3cu;
    // NOP
label_18ce40:
    // 0x18ce40: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x18ce40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_18ce44:
    // 0x18ce44: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x18ce44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_18ce48:
    // 0x18ce48: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18ce48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_18ce4c:
    // 0x18ce4c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18ce4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_18ce50:
    // 0x18ce50: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x18ce50u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_18ce54:
    // 0x18ce54: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x18ce54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_18ce58:
    // 0x18ce58: 0xc066e26  jal         func_19B898
label_18ce5c:
    if (ctx->pc == 0x18CE5Cu) {
        ctx->pc = 0x18CE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CE58u;
        // 0x18ce5c: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18CE60u;
        goto label_18ce60;
    }
    ctx->pc = 0x18CE58u;
    SET_GPR_U32(ctx, 31, 0x18CE60u);
    ctx->pc = 0x18CE5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18CE58u;
    // 0x18ce5c: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x18CE60u;
label_18ce60:
    // 0x18ce60: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x18ce60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_18ce64:
    // 0x18ce64: 0xc066e26  jal         func_19B898
label_18ce68:
    if (ctx->pc == 0x18CE68u) {
        ctx->pc = 0x18CE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CE64u;
        // 0x18ce68: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18CE6Cu;
        goto label_18ce6c;
    }
    ctx->pc = 0x18CE64u;
    SET_GPR_U32(ctx, 31, 0x18CE6Cu);
    ctx->pc = 0x18CE68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18CE64u;
    // 0x18ce68: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x18CE6Cu;
label_18ce6c:
    // 0x18ce6c: 0x3c024320  lui         $v0, 0x4320
    ctx->pc = 0x18ce6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17184 << 16));
label_18ce70:
    // 0x18ce70: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x18ce70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_18ce74:
    // 0x18ce74: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18ce74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18ce78:
    // 0x18ce78: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x18ce78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_18ce7c:
    // 0x18ce7c: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x18ce7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_18ce80:
    // 0x18ce80: 0x3c02c352  lui         $v0, 0xC352
    ctx->pc = 0x18ce80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50002 << 16));
label_18ce84:
    // 0x18ce84: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x18ce84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_18ce88:
    // 0x18ce88: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x18ce88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
label_18ce8c:
    // 0x18ce8c: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x18ce8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_18ce90:
    // 0x18ce90: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x18ce90u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_18ce94:
    // 0x18ce94: 0x3c024140  lui         $v0, 0x4140
    ctx->pc = 0x18ce94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16704 << 16));
label_18ce98:
    // 0x18ce98: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x18ce98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_18ce9c:
    // 0x18ce9c: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x18ce9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
label_18cea0:
    // 0x18cea0: 0x501823  subu        $v1, $v0, $s0
    ctx->pc = 0x18cea0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_18cea4:
    // 0x18cea4: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x18cea4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
label_18cea8:
    // 0x18cea8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x18cea8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_18ceac:
    // 0x18ceac: 0x24422cc0  addiu       $v0, $v0, 0x2CC0
    ctx->pc = 0x18ceacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11456));
label_18ceb0:
    // 0x18ceb0: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x18ceb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_18ceb4:
    // 0x18ceb4: 0x3c024448  lui         $v0, 0x4448
    ctx->pc = 0x18ceb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17480 << 16));
label_18ceb8:
    // 0x18ceb8: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x18ceb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_18cebc:
    // 0x18cebc: 0xc063428  jal         func_18D0A0
label_18cec0:
    if (ctx->pc == 0x18CEC0u) {
        ctx->pc = 0x18CEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CEBCu;
        // 0x18cec0: 0xe7a00034  swc1        $f0, 0x34($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x18CEC4u;
        goto label_18cec4;
    }
    ctx->pc = 0x18CEBCu;
    SET_GPR_U32(ctx, 31, 0x18CEC4u);
    ctx->pc = 0x18CEC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18CEBCu;
    // 0x18cec0: 0xe7a00034  swc1        $f0, 0x34($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x18D0A0u;
    goto label_18d0a0;
    ctx->pc = 0x18CEC4u;
label_18cec4:
    // 0x18cec4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x18cec4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_18cec8:
    // 0x18cec8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18cec8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_18cecc:
    // 0x18cecc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18ceccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_18ced0:
    // 0x18ced0: 0x3e00008  jr          $ra
label_18ced4:
    if (ctx->pc == 0x18CED4u) {
        ctx->pc = 0x18CED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CED0u;
        // 0x18ced4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18CED8u;
        goto label_18ced8;
    }
    ctx->pc = 0x18CED0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18CED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CED0u;
        // 0x18ced4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18CED0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18CED8u;
label_18ced8:
    // 0x18ced8: 0x0  nop
    ctx->pc = 0x18ced8u;
    // NOP
label_18cedc:
    // 0x18cedc: 0x0  nop
    ctx->pc = 0x18cedcu;
    // NOP
label_18cee0:
    // 0x18cee0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x18cee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_18cee4:
    // 0x18cee4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x18cee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_18cee8:
    // 0x18cee8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18cee8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_18ceec:
    // 0x18ceec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18ceecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_18cef0:
    // 0x18cef0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x18cef0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_18cef4:
    // 0x18cef4: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x18cef4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_18cef8:
    // 0x18cef8: 0xc066e26  jal         func_19B898
label_18cefc:
    if (ctx->pc == 0x18CEFCu) {
        ctx->pc = 0x18CEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CEF8u;
        // 0x18cefc: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18CF00u;
        goto label_18cf00;
    }
    ctx->pc = 0x18CEF8u;
    SET_GPR_U32(ctx, 31, 0x18CF00u);
    ctx->pc = 0x18CEFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18CEF8u;
    // 0x18cefc: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x18CF00u;
label_18cf00:
    // 0x18cf00: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x18cf00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_18cf04:
    // 0x18cf04: 0xc066e26  jal         func_19B898
label_18cf08:
    if (ctx->pc == 0x18CF08u) {
        ctx->pc = 0x18CF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CF04u;
        // 0x18cf08: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18CF0Cu;
        goto label_18cf0c;
    }
    ctx->pc = 0x18CF04u;
    SET_GPR_U32(ctx, 31, 0x18CF0Cu);
    ctx->pc = 0x18CF08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18CF04u;
    // 0x18cf08: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x18CF0Cu;
label_18cf0c:
    // 0x18cf0c: 0x3c024461  lui         $v0, 0x4461
    ctx->pc = 0x18cf0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17505 << 16));
label_18cf10:
    // 0x18cf10: 0x3c03442f  lui         $v1, 0x442F
    ctx->pc = 0x18cf10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17455 << 16));
label_18cf14:
    // 0x18cf14: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x18cf14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_18cf18:
    // 0x18cf18: 0x3c0441a0  lui         $a0, 0x41A0
    ctx->pc = 0x18cf18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16800 << 16));
label_18cf1c:
    // 0x18cf1c: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x18cf1cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_18cf20:
    // 0x18cf20: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x18cf20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_18cf24:
    // 0x18cf24: 0x111100  sll         $v0, $s1, 4
    ctx->pc = 0x18cf24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
label_18cf28:
    // 0x18cf28: 0x511823  subu        $v1, $v0, $s1
    ctx->pc = 0x18cf28u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_18cf2c:
    // 0x18cf2c: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x18cf2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
label_18cf30:
    // 0x18cf30: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x18cf30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_18cf34:
    // 0x18cf34: 0x44847800  mtc1        $a0, $f15
    ctx->pc = 0x18cf34u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_18cf38:
    // 0x18cf38: 0x24422cc0  addiu       $v0, $v0, 0x2CC0
    ctx->pc = 0x18cf38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11456));
label_18cf3c:
    // 0x18cf3c: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x18cf3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_18cf40:
    // 0x18cf40: 0x3c02c320  lui         $v0, 0xC320
    ctx->pc = 0x18cf40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49952 << 16));
label_18cf44:
    // 0x18cf44: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x18cf44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_18cf48:
    // 0x18cf48: 0xc063428  jal         func_18D0A0
label_18cf4c:
    if (ctx->pc == 0x18CF4Cu) {
        ctx->pc = 0x18CF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CF48u;
        // 0x18cf4c: 0x27a60040  addiu       $a2, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18CF50u;
        goto label_18cf50;
    }
    ctx->pc = 0x18CF48u;
    SET_GPR_U32(ctx, 31, 0x18CF50u);
    ctx->pc = 0x18CF4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18CF48u;
    // 0x18cf4c: 0x27a60040  addiu       $a2, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18D0A0u;
    goto label_18d0a0;
    ctx->pc = 0x18CF50u;
label_18cf50:
    // 0x18cf50: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x18cf50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_18cf54:
    // 0x18cf54: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18cf54u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_18cf58:
    // 0x18cf58: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18cf58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_18cf5c:
    // 0x18cf5c: 0x3e00008  jr          $ra
label_18cf60:
    if (ctx->pc == 0x18CF60u) {
        ctx->pc = 0x18CF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CF5Cu;
        // 0x18cf60: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18CF64u;
        goto label_18cf64;
    }
    ctx->pc = 0x18CF5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18CF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CF5Cu;
        // 0x18cf60: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18CF5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18CF64u;
label_18cf64:
    // 0x18cf64: 0x0  nop
    ctx->pc = 0x18cf64u;
    // NOP
label_18cf68:
    // 0x18cf68: 0x0  nop
    ctx->pc = 0x18cf68u;
    // NOP
label_18cf6c:
    // 0x18cf6c: 0x0  nop
    ctx->pc = 0x18cf6cu;
    // NOP
label_18cf70:
    // 0x18cf70: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x18cf70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_18cf74:
    // 0x18cf74: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x18cf74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_18cf78:
    // 0x18cf78: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x18cf78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_18cf7c:
    // 0x18cf7c: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x18cf7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_18cf80:
    // 0x18cf80: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18cf80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_18cf84:
    // 0x18cf84: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x18cf84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
label_18cf88:
    // 0x18cf88: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18cf88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_18cf8c:
    // 0x18cf8c: 0x24422cc0  addiu       $v0, $v0, 0x2CC0
    ctx->pc = 0x18cf8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11456));
label_18cf90:
    // 0x18cf90: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x18cf90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_18cf94:
    // 0x18cf94: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x18cf94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_18cf98:
    // 0x18cf98: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x18cf98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_18cf9c:
    // 0x18cf9c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x18cf9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_18cfa0:
    // 0x18cfa0: 0x960200e4  lhu         $v0, 0xE4($s0)
    ctx->pc = 0x18cfa0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 228)));
label_18cfa4:
    // 0x18cfa4: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x18cfa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_18cfa8:
    // 0x18cfa8: 0xc066e26  jal         func_19B898
label_18cfac:
    if (ctx->pc == 0x18CFACu) {
        ctx->pc = 0x18CFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CFA8u;
        // 0x18cfac: 0xa60200e4  sh          $v0, 0xE4($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 228), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18CFB0u;
        goto label_18cfb0;
    }
    ctx->pc = 0x18CFA8u;
    SET_GPR_U32(ctx, 31, 0x18CFB0u);
    ctx->pc = 0x18CFACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18CFA8u;
    // 0x18cfac: 0xa60200e4  sh          $v0, 0xE4($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 228), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x18CFB0u;
label_18cfb0:
    // 0x18cfb0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x18cfb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_18cfb4:
    // 0x18cfb4: 0xc066e26  jal         func_19B898
label_18cfb8:
    if (ctx->pc == 0x18CFB8u) {
        ctx->pc = 0x18CFB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CFB4u;
        // 0x18cfb8: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18CFBCu;
        goto label_18cfbc;
    }
    ctx->pc = 0x18CFB4u;
    SET_GPR_U32(ctx, 31, 0x18CFBCu);
    ctx->pc = 0x18CFB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18CFB4u;
    // 0x18cfb8: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x18CFBCu;
label_18cfbc:
    // 0x18cfbc: 0x3c03c320  lui         $v1, 0xC320
    ctx->pc = 0x18cfbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49952 << 16));
label_18cfc0:
    // 0x18cfc0: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x18cfc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
label_18cfc4:
    // 0x18cfc4: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x18cfc4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_18cfc8:
    // 0x18cfc8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18cfc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_18cfcc:
    // 0x18cfcc: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x18cfccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_18cfd0:
    // 0x18cfd0: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x18cfd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_18cfd4:
    // 0x18cfd4: 0x3c03442f  lui         $v1, 0x442F
    ctx->pc = 0x18cfd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17455 << 16));
label_18cfd8:
    // 0x18cfd8: 0x3c024140  lui         $v0, 0x4140
    ctx->pc = 0x18cfd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16704 << 16));
label_18cfdc:
    // 0x18cfdc: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x18cfdcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_18cfe0:
    // 0x18cfe0: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x18cfe0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_18cfe4:
    // 0x18cfe4: 0xc063428  jal         func_18D0A0
label_18cfe8:
    if (ctx->pc == 0x18CFE8u) {
        ctx->pc = 0x18CFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CFE4u;
        // 0x18cfe8: 0x27a60040  addiu       $a2, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18CFECu;
        goto label_18cfec;
    }
    ctx->pc = 0x18CFE4u;
    SET_GPR_U32(ctx, 31, 0x18CFECu);
    ctx->pc = 0x18CFE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18CFE4u;
    // 0x18cfe8: 0x27a60040  addiu       $a2, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18D0A0u;
    goto label_18d0a0;
    ctx->pc = 0x18CFECu;
label_18cfec:
    // 0x18cfec: 0x960300e4  lhu         $v1, 0xE4($s0)
    ctx->pc = 0x18cfecu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 228)));
label_18cff0:
    // 0x18cff0: 0x3063fffe  andi        $v1, $v1, 0xFFFE
    ctx->pc = 0x18cff0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65534);
label_18cff4:
    // 0x18cff4: 0xa60300e4  sh          $v1, 0xE4($s0)
    ctx->pc = 0x18cff4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 228), (uint16_t)GPR_U32(ctx, 3));
label_18cff8:
    // 0x18cff8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x18cff8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_18cffc:
    // 0x18cffc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18cffcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_18d000:
    // 0x18d000: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18d000u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_18d004:
    // 0x18d004: 0x3e00008  jr          $ra
label_18d008:
    if (ctx->pc == 0x18D008u) {
        ctx->pc = 0x18D008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D004u;
        // 0x18d008: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D00Cu;
        goto label_18d00c;
    }
    ctx->pc = 0x18D004u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18D008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D004u;
        // 0x18d008: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18D004u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18D00Cu;
label_18d00c:
    // 0x18d00c: 0x0  nop
    ctx->pc = 0x18d00cu;
    // NOP
label_18d010:
    // 0x18d010: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x18d010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_18d014:
    // 0x18d014: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x18d014u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_18d018:
    // 0x18d018: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x18d018u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_18d01c:
    // 0x18d01c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x18d01cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_18d020:
    // 0x18d020: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x18d020u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
label_18d024:
    // 0x18d024: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18d024u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_18d028:
    // 0x18d028: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18d028u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_18d02c:
    // 0x18d02c: 0x24422cc0  addiu       $v0, $v0, 0x2CC0
    ctx->pc = 0x18d02cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11456));
label_18d030:
    // 0x18d030: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x18d030u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_18d034:
    // 0x18d034: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x18d034u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_18d038:
    // 0x18d038: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x18d038u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_18d03c:
    // 0x18d03c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x18d03cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_18d040:
    // 0x18d040: 0x962200e4  lhu         $v0, 0xE4($s1)
    ctx->pc = 0x18d040u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 228)));
label_18d044:
    // 0x18d044: 0x3042fffe  andi        $v0, $v0, 0xFFFE
    ctx->pc = 0x18d044u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65534);
label_18d048:
    // 0x18d048: 0xc066e26  jal         func_19B898
label_18d04c:
    if (ctx->pc == 0x18D04Cu) {
        ctx->pc = 0x18D04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D048u;
        // 0x18d04c: 0xa62200e4  sh          $v0, 0xE4($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 228), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D050u;
        goto label_18d050;
    }
    ctx->pc = 0x18D048u;
    SET_GPR_U32(ctx, 31, 0x18D050u);
    ctx->pc = 0x18D04Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D048u;
    // 0x18d04c: 0xa62200e4  sh          $v0, 0xE4($s1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 17), 228), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x18D050u;
label_18d050:
    // 0x18d050: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x18d050u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_18d054:
    // 0x18d054: 0xc066e26  jal         func_19B898
label_18d058:
    if (ctx->pc == 0x18D058u) {
        ctx->pc = 0x18D058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D054u;
        // 0x18d058: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D05Cu;
        goto label_18d05c;
    }
    ctx->pc = 0x18D054u;
    SET_GPR_U32(ctx, 31, 0x18D05Cu);
    ctx->pc = 0x18D058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D054u;
    // 0x18d058: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x18D05Cu;
label_18d05c:
    // 0x18d05c: 0x3c02c320  lui         $v0, 0xC320
    ctx->pc = 0x18d05cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49952 << 16));
label_18d060:
    // 0x18d060: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18d060u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_18d064:
    // 0x18d064: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x18d064u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_18d068:
    // 0x18d068: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x18d068u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_18d06c:
    // 0x18d06c: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x18d06cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
label_18d070:
    // 0x18d070: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x18d070u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_18d074:
    // 0x18d074: 0x3c02442f  lui         $v0, 0x442F
    ctx->pc = 0x18d074u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17455 << 16));
label_18d078:
    // 0x18d078: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x18d078u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_18d07c:
    // 0x18d07c: 0x3c024140  lui         $v0, 0x4140
    ctx->pc = 0x18d07cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16704 << 16));
label_18d080:
    // 0x18d080: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x18d080u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_18d084:
    // 0x18d084: 0xc063428  jal         func_18D0A0
label_18d088:
    if (ctx->pc == 0x18D088u) {
        ctx->pc = 0x18D088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D084u;
        // 0x18d088: 0x27a60040  addiu       $a2, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D08Cu;
        goto label_18d08c;
    }
    ctx->pc = 0x18D084u;
    SET_GPR_U32(ctx, 31, 0x18D08Cu);
    ctx->pc = 0x18D088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D084u;
    // 0x18d088: 0x27a60040  addiu       $a2, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18D0A0u;
    goto label_18d0a0;
    ctx->pc = 0x18D08Cu;
label_18d08c:
    // 0x18d08c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x18d08cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_18d090:
    // 0x18d090: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18d090u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_18d094:
    // 0x18d094: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18d094u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_18d098:
    // 0x18d098: 0x3e00008  jr          $ra
label_18d09c:
    if (ctx->pc == 0x18D09Cu) {
        ctx->pc = 0x18D09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D098u;
        // 0x18d09c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D0A0u;
        goto label_18d0a0;
    }
    ctx->pc = 0x18D098u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18D09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D098u;
        // 0x18d09c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18D098u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18D0A0u;
label_18d0a0:
    // 0x18d0a0: 0x27bdfd70  addiu       $sp, $sp, -0x290
    ctx->pc = 0x18d0a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966640));
label_18d0a4:
    // 0x18d0a4: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x18d0a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_18d0a8:
    // 0x18d0a8: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x18d0a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_18d0ac:
    // 0x18d0ac: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x18d0acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_18d0b0:
    // 0x18d0b0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x18d0b0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_18d0b4:
    // 0x18d0b4: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x18d0b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_18d0b8:
    // 0x18d0b8: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x18d0b8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_18d0bc:
    // 0x18d0bc: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x18d0bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_18d0c0:
    // 0x18d0c0: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x18d0c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_18d0c4:
    // 0x18d0c4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x18d0c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_18d0c8:
    // 0x18d0c8: 0xe7b90014  swc1        $f25, 0x14($sp)
    ctx->pc = 0x18d0c8u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_18d0cc:
    // 0x18d0cc: 0xe7b80010  swc1        $f24, 0x10($sp)
    ctx->pc = 0x18d0ccu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_18d0d0:
    // 0x18d0d0: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x18d0d0u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_18d0d4:
    // 0x18d0d4: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x18d0d4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_18d0d8:
    // 0x18d0d8: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x18d0d8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_18d0dc:
    // 0x18d0dc: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x18d0dcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_18d0e0:
    // 0x18d0e0: 0xac8000a8  sw          $zero, 0xA8($a0)
    ctx->pc = 0x18d0e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 168), GPR_U32(ctx, 0));
label_18d0e4:
    // 0x18d0e4: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x18d0e4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
label_18d0e8:
    // 0x18d0e8: 0x8f838818  lw          $v1, -0x77E8($gp)
    ctx->pc = 0x18d0e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936600)));
label_18d0ec:
    // 0x18d0ec: 0x46006dc6  mov.s       $f23, $f13
    ctx->pc = 0x18d0ecu;
    ctx->f[23] = FPU_MOV_S(ctx->f[13]);
label_18d0f0:
    // 0x18d0f0: 0x46007586  mov.s       $f22, $f14
    ctx->pc = 0x18d0f0u;
    ctx->f[22] = FPU_MOV_S(ctx->f[14]);
label_18d0f4:
    // 0x18d0f4: 0x146008c3  bnez        $v1, . + 4 + (0x8C3 << 2)
label_18d0f8:
    if (ctx->pc == 0x18D0F8u) {
        ctx->pc = 0x18D0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D0F4u;
        // 0x18d0f8: 0x46007d46  mov.s       $f21, $f15 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[15]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D0FCu;
        goto label_18d0fc;
    }
    ctx->pc = 0x18D0F4u;
    {
        const bool branch_taken_0x18d0f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x18D0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D0F4u;
        // 0x18d0f8: 0x46007d46  mov.s       $f21, $f15 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[15]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d0f4) {
            ctx->pc = 0x18F404u;
            { ctx->pc = 0x18f404; return; }
        }
    }
    ctx->pc = 0x18D0FCu;
label_18d0fc:
    // 0x18d0fc: 0x8e8500b0  lw          $a1, 0xB0($s4)
    ctx->pc = 0x18d0fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 176)));
label_18d100:
    // 0x18d100: 0x10a000fe  beqz        $a1, . + 4 + (0xFE << 2)
label_18d104:
    if (ctx->pc == 0x18D104u) {
        ctx->pc = 0x18D108u;
        goto label_18d108;
    }
    ctx->pc = 0x18D100u;
    {
        const bool branch_taken_0x18d100 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x18d100) {
            ctx->pc = 0x18D4FCu;
            goto label_18d4fc;
        }
    }
    ctx->pc = 0x18D108u;
label_18d108:
    // 0x18d108: 0x8f848590  lw          $a0, -0x7A70($gp)
    ctx->pc = 0x18d108u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
label_18d10c:
    // 0x18d10c: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x18d10cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
label_18d110:
    // 0x18d110: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x18d110u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_18d114:
    // 0x18d114: 0x1060007e  beqz        $v1, . + 4 + (0x7E << 2)
label_18d118:
    if (ctx->pc == 0x18D118u) {
        ctx->pc = 0x18D11Cu;
        goto label_18d11c;
    }
    ctx->pc = 0x18D114u;
    {
        const bool branch_taken_0x18d114 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18d114) {
            ctx->pc = 0x18D310u;
            goto label_18d310;
        }
    }
    ctx->pc = 0x18D11Cu;
label_18d11c:
    // 0x18d11c: 0xc04e32c  jal         func_138CB0
label_18d120:
    if (ctx->pc == 0x18D120u) {
        ctx->pc = 0x18D124u;
        goto label_18d124;
    }
    ctx->pc = 0x18D11Cu;
    SET_GPR_U32(ctx, 31, 0x18D124u);
    ctx->pc = 0x138CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138CB0u, 0x18D11Cu, 0x18D124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D124u;
label_18d124:
    // 0x18d124: 0x8e8300b0  lw          $v1, 0xB0($s4)
    ctx->pc = 0x18d124u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 176)));
label_18d128:
    // 0x18d128: 0x106008b6  beqz        $v1, . + 4 + (0x8B6 << 2)
label_18d12c:
    if (ctx->pc == 0x18D12Cu) {
        ctx->pc = 0x18D130u;
        goto label_18d130;
    }
    ctx->pc = 0x18D128u;
    {
        const bool branch_taken_0x18d128 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18d128) {
            ctx->pc = 0x18F404u;
            { ctx->pc = 0x18f404; return; }
        }
    }
    ctx->pc = 0x18D130u;
label_18d130:
    // 0x18d130: 0xc69400b4  lwc1        $f20, 0xB4($s4)
    ctx->pc = 0x18d130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_18d134:
    // 0x18d134: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x18d134u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18d138:
    // 0x18d138: 0x0  nop
    ctx->pc = 0x18d138u;
    // NOP
label_18d13c:
    // 0x18d13c: 0x46140032  c.eq.s      $f0, $f20
    ctx->pc = 0x18d13cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18d140:
    // 0x18d140: 0x0  nop
    ctx->pc = 0x18d140u;
    // NOP
label_18d144:
    // 0x18d144: 0x45010032  bc1t        . + 4 + (0x32 << 2)
label_18d148:
    if (ctx->pc == 0x18D148u) {
        ctx->pc = 0x18D14Cu;
        goto label_18d14c;
    }
    ctx->pc = 0x18D144u;
    {
        const bool branch_taken_0x18d144 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x18d144) {
            ctx->pc = 0x18D210u;
            goto label_18d210;
        }
    }
    ctx->pc = 0x18D14Cu;
label_18d14c:
    // 0x18d14c: 0xc69600b8  lwc1        $f22, 0xB8($s4)
    ctx->pc = 0x18d14cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_18d150:
    // 0x18d150: 0x27a40220  addiu       $a0, $sp, 0x220
    ctx->pc = 0x18d150u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
label_18d154:
    // 0x18d154: 0xc066e26  jal         func_19B898
label_18d158:
    if (ctx->pc == 0x18D158u) {
        ctx->pc = 0x18D158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D154u;
        // 0x18d158: 0x26850010  addiu       $a1, $s4, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D15Cu;
        goto label_18d15c;
    }
    ctx->pc = 0x18D154u;
    SET_GPR_U32(ctx, 31, 0x18D15Cu);
    ctx->pc = 0x18D158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D154u;
    // 0x18d158: 0x26850010  addiu       $a1, $s4, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x18D15Cu;
label_18d15c:
    // 0x18d15c: 0x27a40220  addiu       $a0, $sp, 0x220
    ctx->pc = 0x18d15cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
label_18d160:
    // 0x18d160: 0xc066daa  jal         func_19B6A8
label_18d164:
    if (ctx->pc == 0x18D164u) {
        ctx->pc = 0x18D164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D160u;
        // 0x18d164: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D168u;
        goto label_18d168;
    }
    ctx->pc = 0x18D160u;
    SET_GPR_U32(ctx, 31, 0x18D168u);
    ctx->pc = 0x18D164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D160u;
    // 0x18d164: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B6A8u;
    { ctx->pc = 0x19b6a8; return; }
    ctx->pc = 0x18D168u;
label_18d168:
    // 0x18d168: 0xc7ad0228  lwc1        $f13, 0x228($sp)
    ctx->pc = 0x18d168u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_18d16c:
    // 0x18d16c: 0xc06d51e  jal         func_1B5478
label_18d170:
    if (ctx->pc == 0x18D170u) {
        ctx->pc = 0x18D170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D16Cu;
        // 0x18d170: 0xc7ac0220  lwc1        $f12, 0x220($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D174u;
        goto label_18d174;
    }
    ctx->pc = 0x18D16Cu;
    SET_GPR_U32(ctx, 31, 0x18D174u);
    ctx->pc = 0x18D170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D16Cu;
    // 0x18d170: 0xc7ac0220  lwc1        $f12, 0x220($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5478u;
    { ctx->pc = 0x1b5478; return; }
    ctx->pc = 0x18D174u;
label_18d174:
    // 0x18d174: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x18d174u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_18d178:
    // 0x18d178: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x18d178u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_18d17c:
    // 0x18d17c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x18d17cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_18d180:
    // 0x18d180: 0x0  nop
    ctx->pc = 0x18d180u;
    // NOP
label_18d184:
    // 0x18d184: 0x46010541  sub.s       $f21, $f0, $f1
    ctx->pc = 0x18d184u;
    ctx->f[21] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_18d188:
    // 0x18d188: 0xc06d4c0  jal         func_1B5300
label_18d18c:
    if (ctx->pc == 0x18D18Cu) {
        ctx->pc = 0x18D18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D188u;
        // 0x18d18c: 0x4615b300  add.s       $f12, $f22, $f21 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[22], ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D190u;
        goto label_18d190;
    }
    ctx->pc = 0x18D188u;
    SET_GPR_U32(ctx, 31, 0x18D190u);
    ctx->pc = 0x18D18Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D188u;
    // 0x18d18c: 0x4615b300  add.s       $f12, $f22, $f21 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[22], ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5300u;
    { ctx->pc = 0x1b5300; return; }
    ctx->pc = 0x18D190u;
label_18d190:
    // 0x18d190: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x18d190u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_18d194:
    // 0x18d194: 0xafa00224  sw          $zero, 0x224($sp)
    ctx->pc = 0x18d194u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 548), GPR_U32(ctx, 0));
label_18d198:
    // 0x18d198: 0x4615b300  add.s       $f12, $f22, $f21
    ctx->pc = 0x18d198u;
    ctx->f[12] = FPU_ADD_S(ctx->f[22], ctx->f[21]);
label_18d19c:
    // 0x18d19c: 0xc06d412  jal         func_1B5048
label_18d1a0:
    if (ctx->pc == 0x18D1A0u) {
        ctx->pc = 0x18D1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D19Cu;
        // 0x18d1a0: 0xe7a00220  swc1        $f0, 0x220($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 544), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D1A4u;
        goto label_18d1a4;
    }
    ctx->pc = 0x18D19Cu;
    SET_GPR_U32(ctx, 31, 0x18D1A4u);
    ctx->pc = 0x18D1A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D19Cu;
    // 0x18d1a0: 0xe7a00220  swc1        $f0, 0x220($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 544), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5048u;
    { ctx->pc = 0x1b5048; return; }
    ctx->pc = 0x18D1A4u;
label_18d1a4:
    // 0x18d1a4: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x18d1a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_18d1a8:
    // 0x18d1a8: 0x26840030  addiu       $a0, $s4, 0x30
    ctx->pc = 0x18d1a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
label_18d1ac:
    // 0x18d1ac: 0x26850040  addiu       $a1, $s4, 0x40
    ctx->pc = 0x18d1acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 64));
label_18d1b0:
    // 0x18d1b0: 0x27a60220  addiu       $a2, $sp, 0x220
    ctx->pc = 0x18d1b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
label_18d1b4:
    // 0x18d1b4: 0xafa0022c  sw          $zero, 0x22C($sp)
    ctx->pc = 0x18d1b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 556), GPR_U32(ctx, 0));
label_18d1b8:
    // 0x18d1b8: 0xc066e02  jal         func_19B808
label_18d1bc:
    if (ctx->pc == 0x18D1BCu) {
        ctx->pc = 0x18D1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D1B8u;
        // 0x18d1bc: 0xe7a00228  swc1        $f0, 0x228($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 552), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D1C0u;
        goto label_18d1c0;
    }
    ctx->pc = 0x18D1B8u;
    SET_GPR_U32(ctx, 31, 0x18D1C0u);
    ctx->pc = 0x18D1BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D1B8u;
    // 0x18d1bc: 0xe7a00228  swc1        $f0, 0x228($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 552), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B808u;
    { ctx->pc = 0x19b808; return; }
    ctx->pc = 0x18D1C0u;
label_18d1c0:
    // 0x18d1c0: 0x27a40260  addiu       $a0, $sp, 0x260
    ctx->pc = 0x18d1c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
label_18d1c4:
    // 0x18d1c4: 0x26850040  addiu       $a1, $s4, 0x40
    ctx->pc = 0x18d1c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 64));
label_18d1c8:
    // 0x18d1c8: 0xc066e08  jal         func_19B820
label_18d1cc:
    if (ctx->pc == 0x18D1CCu) {
        ctx->pc = 0x18D1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D1C8u;
        // 0x18d1cc: 0x26860030  addiu       $a2, $s4, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D1D0u;
        goto label_18d1d0;
    }
    ctx->pc = 0x18D1C8u;
    SET_GPR_U32(ctx, 31, 0x18D1D0u);
    ctx->pc = 0x18D1CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D1C8u;
    // 0x18d1cc: 0x26860030  addiu       $a2, $s4, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B820u;
    { ctx->pc = 0x19b820; return; }
    ctx->pc = 0x18D1D0u;
label_18d1d0:
    // 0x18d1d0: 0xc7a10260  lwc1        $f1, 0x260($sp)
    ctx->pc = 0x18d1d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_18d1d4:
    // 0x18d1d4: 0xc7a00268  lwc1        $f0, 0x268($sp)
    ctx->pc = 0x18d1d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18d1d8:
    // 0x18d1d8: 0xc7ac0264  lwc1        $f12, 0x264($sp)
    ctx->pc = 0x18d1d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_18d1dc:
    // 0x18d1dc: 0x4601081a  mula.s      $f1, $f1
    ctx->pc = 0x18d1dcu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[1], ctx->f[1]));
label_18d1e0:
    // 0x18d1e0: 0x4600001c  madd.s      $f0, $f0, $f0
    ctx->pc = 0x18d1e0u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[0]));
label_18d1e4:
    // 0x18d1e4: 0x46000344  c1          0x344
    ctx->pc = 0x18d1e4u;
    ctx->f[13] = FPU_SQRT_S(ctx->f[0]);
label_18d1e8:
    // 0x18d1e8: 0x0  nop
    ctx->pc = 0x18d1e8u;
    // NOP
label_18d1ec:
    // 0x18d1ec: 0x0  nop
    ctx->pc = 0x18d1ecu;
    // NOP
label_18d1f0:
    // 0x18d1f0: 0xc06d51e  jal         func_1B5478
label_18d1f4:
    if (ctx->pc == 0x18D1F4u) {
        ctx->pc = 0x18D1F8u;
        goto label_18d1f8;
    }
    ctx->pc = 0x18D1F0u;
    SET_GPR_U32(ctx, 31, 0x18D1F8u);
    ctx->pc = 0x1B5478u;
    { ctx->pc = 0x1b5478; return; }
    ctx->pc = 0x18D1F8u;
label_18d1f8:
    // 0x18d1f8: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x18d1f8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_18d1fc:
    // 0x18d1fc: 0xe6800020  swc1        $f0, 0x20($s4)
    ctx->pc = 0x18d1fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 32), bits); }
label_18d200:
    // 0x18d200: 0xc7ad0268  lwc1        $f13, 0x268($sp)
    ctx->pc = 0x18d200u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_18d204:
    // 0x18d204: 0xc06d51e  jal         func_1B5478
label_18d208:
    if (ctx->pc == 0x18D208u) {
        ctx->pc = 0x18D208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D204u;
        // 0x18d208: 0xc7ac0260  lwc1        $f12, 0x260($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D20Cu;
        goto label_18d20c;
    }
    ctx->pc = 0x18D204u;
    SET_GPR_U32(ctx, 31, 0x18D20Cu);
    ctx->pc = 0x18D208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D204u;
    // 0x18d208: 0xc7ac0260  lwc1        $f12, 0x260($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5478u;
    { ctx->pc = 0x1b5478; return; }
    ctx->pc = 0x18D20Cu;
label_18d20c:
    // 0x18d20c: 0xe6800024  swc1        $f0, 0x24($s4)
    ctx->pc = 0x18d20cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 36), bits); }
label_18d210:
    // 0x18d210: 0x8e8400e8  lw          $a0, 0xE8($s4)
    ctx->pc = 0x18d210u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 232)));
label_18d214:
    // 0x18d214: 0x26850040  addiu       $a1, $s4, 0x40
    ctx->pc = 0x18d214u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 64));
label_18d218:
    // 0x18d218: 0x26860030  addiu       $a2, $s4, 0x30
    ctx->pc = 0x18d218u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
label_18d21c:
    // 0x18d21c: 0x27a700d0  addiu       $a3, $sp, 0xD0
    ctx->pc = 0x18d21cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_18d220:
    // 0x18d220: 0x27a800c0  addiu       $t0, $sp, 0xC0
    ctx->pc = 0x18d220u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_18d224:
    // 0x18d224: 0xc064a04  jal         func_192810
label_18d228:
    if (ctx->pc == 0x18D228u) {
        ctx->pc = 0x18D228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D224u;
        // 0x18d228: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D22Cu;
        goto label_18d22c;
    }
    ctx->pc = 0x18D224u;
    SET_GPR_U32(ctx, 31, 0x18D22Cu);
    ctx->pc = 0x18D228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D224u;
    // 0x18d228: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x192810u;
    { ctx->pc = 0x192810; return; }
    ctx->pc = 0x18D22Cu;
label_18d22c:
    // 0x18d22c: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_18d230:
    if (ctx->pc == 0x18D230u) {
        ctx->pc = 0x18D230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D22Cu;
        // 0x18d230: 0x26840040  addiu       $a0, $s4, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D234u;
        goto label_18d234;
    }
    ctx->pc = 0x18D22Cu;
    {
        const bool branch_taken_0x18d22c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D22Cu;
        // 0x18d230: 0x26840040  addiu       $a0, $s4, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d22c) {
            ctx->pc = 0x18D270u;
            goto label_18d270;
        }
    }
    ctx->pc = 0x18D234u;
label_18d234:
    // 0x18d234: 0xc68000b8  lwc1        $f0, 0xB8($s4)
    ctx->pc = 0x18d234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18d238:
    // 0x18d238: 0x3c02bf00  lui         $v0, 0xBF00
    ctx->pc = 0x18d238u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48896 << 16));
label_18d23c:
    // 0x18d23c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x18d23cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_18d240:
    // 0x18d240: 0x26840030  addiu       $a0, $s4, 0x30
    ctx->pc = 0x18d240u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
label_18d244:
    // 0x18d244: 0x26850050  addiu       $a1, $s4, 0x50
    ctx->pc = 0x18d244u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 80));
label_18d248:
    // 0x18d248: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x18d248u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_18d24c:
    // 0x18d24c: 0xc066e26  jal         func_19B898
label_18d250:
    if (ctx->pc == 0x18D250u) {
        ctx->pc = 0x18D250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D24Cu;
        // 0x18d250: 0xe68000b8  swc1        $f0, 0xB8($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 184), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D254u;
        goto label_18d254;
    }
    ctx->pc = 0x18D24Cu;
    SET_GPR_U32(ctx, 31, 0x18D254u);
    ctx->pc = 0x18D250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D24Cu;
    // 0x18d250: 0xe68000b8  swc1        $f0, 0xB8($s4) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 184), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x18D254u;
label_18d254:
    // 0x18d254: 0xc6810034  lwc1        $f1, 0x34($s4)
    ctx->pc = 0x18d254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_18d258:
    // 0x18d258: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x18d258u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_18d25c:
    // 0x18d25c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18d25cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18d260:
    // 0x18d260: 0x0  nop
    ctx->pc = 0x18d260u;
    // NOP
label_18d264:
    // 0x18d264: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x18d264u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_18d268:
    // 0x18d268: 0xe6800034  swc1        $f0, 0x34($s4)
    ctx->pc = 0x18d268u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 52), bits); }
label_18d26c:
    // 0x18d26c: 0x26840040  addiu       $a0, $s4, 0x40
    ctx->pc = 0x18d26cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 64));
label_18d270:
    // 0x18d270: 0xc066e26  jal         func_19B898
label_18d274:
    if (ctx->pc == 0x18D274u) {
        ctx->pc = 0x18D274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D270u;
        // 0x18d274: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D278u;
        goto label_18d278;
    }
    ctx->pc = 0x18D270u;
    SET_GPR_U32(ctx, 31, 0x18D278u);
    ctx->pc = 0x18D274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D270u;
    // 0x18d274: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x18D278u;
label_18d278:
    // 0x18d278: 0x27a40230  addiu       $a0, $sp, 0x230
    ctx->pc = 0x18d278u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
label_18d27c:
    // 0x18d27c: 0x26850040  addiu       $a1, $s4, 0x40
    ctx->pc = 0x18d27cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 64));
label_18d280:
    // 0x18d280: 0xc066e08  jal         func_19B820
label_18d284:
    if (ctx->pc == 0x18D284u) {
        ctx->pc = 0x18D284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D280u;
        // 0x18d284: 0x26860030  addiu       $a2, $s4, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D288u;
        goto label_18d288;
    }
    ctx->pc = 0x18D280u;
    SET_GPR_U32(ctx, 31, 0x18D288u);
    ctx->pc = 0x18D284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D280u;
    // 0x18d284: 0x26860030  addiu       $a2, $s4, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B820u;
    { ctx->pc = 0x19b820; return; }
    ctx->pc = 0x18D288u;
label_18d288:
    // 0x18d288: 0xc7a10230  lwc1        $f1, 0x230($sp)
    ctx->pc = 0x18d288u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_18d28c:
    // 0x18d28c: 0xc7a00238  lwc1        $f0, 0x238($sp)
    ctx->pc = 0x18d28cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18d290:
    // 0x18d290: 0xc7ac0234  lwc1        $f12, 0x234($sp)
    ctx->pc = 0x18d290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_18d294:
    // 0x18d294: 0x4601081a  mula.s      $f1, $f1
    ctx->pc = 0x18d294u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[1], ctx->f[1]));
label_18d298:
    // 0x18d298: 0x4600001c  madd.s      $f0, $f0, $f0
    ctx->pc = 0x18d298u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[0]));
label_18d29c:
    // 0x18d29c: 0x46000344  c1          0x344
    ctx->pc = 0x18d29cu;
    ctx->f[13] = FPU_SQRT_S(ctx->f[0]);
label_18d2a0:
    // 0x18d2a0: 0x0  nop
    ctx->pc = 0x18d2a0u;
    // NOP
label_18d2a4:
    // 0x18d2a4: 0x0  nop
    ctx->pc = 0x18d2a4u;
    // NOP
label_18d2a8:
    // 0x18d2a8: 0xc06d51e  jal         func_1B5478
label_18d2ac:
    if (ctx->pc == 0x18D2ACu) {
        ctx->pc = 0x18D2B0u;
        goto label_18d2b0;
    }
    ctx->pc = 0x18D2A8u;
    SET_GPR_U32(ctx, 31, 0x18D2B0u);
    ctx->pc = 0x1B5478u;
    { ctx->pc = 0x1b5478; return; }
    ctx->pc = 0x18D2B0u;
label_18d2b0:
    // 0x18d2b0: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x18d2b0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_18d2b4:
    // 0x18d2b4: 0xe6800020  swc1        $f0, 0x20($s4)
    ctx->pc = 0x18d2b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 32), bits); }
label_18d2b8:
    // 0x18d2b8: 0xc7ad0238  lwc1        $f13, 0x238($sp)
    ctx->pc = 0x18d2b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_18d2bc:
    // 0x18d2bc: 0xc06d51e  jal         func_1B5478
label_18d2c0:
    if (ctx->pc == 0x18D2C0u) {
        ctx->pc = 0x18D2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D2BCu;
        // 0x18d2c0: 0xc7ac0230  lwc1        $f12, 0x230($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D2C4u;
        goto label_18d2c4;
    }
    ctx->pc = 0x18D2BCu;
    SET_GPR_U32(ctx, 31, 0x18D2C4u);
    ctx->pc = 0x18D2C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D2BCu;
    // 0x18d2c0: 0xc7ac0230  lwc1        $f12, 0x230($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5478u;
    { ctx->pc = 0x1b5478; return; }
    ctx->pc = 0x18D2C4u;
label_18d2c4:
    // 0x18d2c4: 0xe6800024  swc1        $f0, 0x24($s4)
    ctx->pc = 0x18d2c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 36), bits); }
label_18d2c8:
    // 0x18d2c8: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x18d2c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
label_18d2cc:
    // 0x18d2cc: 0x8f848590  lw          $a0, -0x7A70($gp)
    ctx->pc = 0x18d2ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
label_18d2d0:
    // 0x18d2d0: 0x34631800  ori         $v1, $v1, 0x1800
    ctx->pc = 0x18d2d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)6144);
label_18d2d4:
    // 0x18d2d4: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x18d2d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_18d2d8:
    // 0x18d2d8: 0x1060084a  beqz        $v1, . + 4 + (0x84A << 2)
label_18d2dc:
    if (ctx->pc == 0x18D2DCu) {
        ctx->pc = 0x18D2E0u;
        goto label_18d2e0;
    }
    ctx->pc = 0x18D2D8u;
    {
        const bool branch_taken_0x18d2d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18d2d8) {
            ctx->pc = 0x18F404u;
            { ctx->pc = 0x18f404; return; }
        }
    }
    ctx->pc = 0x18D2E0u;
label_18d2e0:
    // 0x18d2e0: 0x8e8300b0  lw          $v1, 0xB0($s4)
    ctx->pc = 0x18d2e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 176)));
label_18d2e4:
    // 0x18d2e4: 0x2c610028  sltiu       $at, $v1, 0x28
    ctx->pc = 0x18d2e4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)40) ? 1 : 0);
label_18d2e8:
    // 0x18d2e8: 0x10200846  beqz        $at, . + 4 + (0x846 << 2)
label_18d2ec:
    if (ctx->pc == 0x18D2ECu) {
        ctx->pc = 0x18D2F0u;
        goto label_18d2f0;
    }
    ctx->pc = 0x18D2E8u;
    {
        const bool branch_taken_0x18d2e8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x18d2e8) {
            ctx->pc = 0x18F404u;
            { ctx->pc = 0x18f404; return; }
        }
    }
    ctx->pc = 0x18D2F0u;
label_18d2f0:
    // 0x18d2f0: 0xc68000b8  lwc1        $f0, 0xB8($s4)
    ctx->pc = 0x18d2f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18d2f4:
    // 0x18d2f4: 0x3c033f66  lui         $v1, 0x3F66
    ctx->pc = 0x18d2f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16230 << 16));
label_18d2f8:
    // 0x18d2f8: 0x34636666  ori         $v1, $v1, 0x6666
    ctx->pc = 0x18d2f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26214);
label_18d2fc:
    // 0x18d2fc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x18d2fcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_18d300:
    // 0x18d300: 0x0  nop
    ctx->pc = 0x18d300u;
    // NOP
label_18d304:
    // 0x18d304: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x18d304u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_18d308:
    // 0x18d308: 0x1000007a  b           . + 4 + (0x7A << 2)
label_18d30c:
    if (ctx->pc == 0x18D30Cu) {
        ctx->pc = 0x18D30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D308u;
        // 0x18d30c: 0xe68000b8  swc1        $f0, 0xB8($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 184), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D310u;
        goto label_18d310;
    }
    ctx->pc = 0x18D308u;
    {
        const bool branch_taken_0x18d308 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D308u;
        // 0x18d30c: 0xe68000b8  swc1        $f0, 0xB8($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 184), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d308) {
            ctx->pc = 0x18D4F4u;
            goto label_18d4f4;
        }
    }
    ctx->pc = 0x18D310u;
label_18d310:
    // 0x18d310: 0x10a0083c  beqz        $a1, . + 4 + (0x83C << 2)
label_18d314:
    if (ctx->pc == 0x18D314u) {
        ctx->pc = 0x18D318u;
        goto label_18d318;
    }
    ctx->pc = 0x18D310u;
    {
        const bool branch_taken_0x18d310 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x18d310) {
            ctx->pc = 0x18F404u;
            { ctx->pc = 0x18f404; return; }
        }
    }
    ctx->pc = 0x18D318u;
label_18d318:
    // 0x18d318: 0xc69400b4  lwc1        $f20, 0xB4($s4)
    ctx->pc = 0x18d318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_18d31c:
    // 0x18d31c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x18d31cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18d320:
    // 0x18d320: 0x0  nop
    ctx->pc = 0x18d320u;
    // NOP
label_18d324:
    // 0x18d324: 0x46140032  c.eq.s      $f0, $f20
    ctx->pc = 0x18d324u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18d328:
    // 0x18d328: 0x0  nop
    ctx->pc = 0x18d328u;
    // NOP
label_18d32c:
    // 0x18d32c: 0x45010032  bc1t        . + 4 + (0x32 << 2)
label_18d330:
    if (ctx->pc == 0x18D330u) {
        ctx->pc = 0x18D334u;
        goto label_18d334;
    }
    ctx->pc = 0x18D32Cu;
    {
        const bool branch_taken_0x18d32c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x18d32c) {
            ctx->pc = 0x18D3F8u;
            goto label_18d3f8;
        }
    }
    ctx->pc = 0x18D334u;
label_18d334:
    // 0x18d334: 0xc69600b8  lwc1        $f22, 0xB8($s4)
    ctx->pc = 0x18d334u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_18d338:
    // 0x18d338: 0x27a40240  addiu       $a0, $sp, 0x240
    ctx->pc = 0x18d338u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
label_18d33c:
    // 0x18d33c: 0xc066e26  jal         func_19B898
label_18d340:
    if (ctx->pc == 0x18D340u) {
        ctx->pc = 0x18D340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D33Cu;
        // 0x18d340: 0x26850010  addiu       $a1, $s4, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D344u;
        goto label_18d344;
    }
    ctx->pc = 0x18D33Cu;
    SET_GPR_U32(ctx, 31, 0x18D344u);
    ctx->pc = 0x18D340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D33Cu;
    // 0x18d340: 0x26850010  addiu       $a1, $s4, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x18D344u;
label_18d344:
    // 0x18d344: 0x27a40240  addiu       $a0, $sp, 0x240
    ctx->pc = 0x18d344u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
label_18d348:
    // 0x18d348: 0xc066daa  jal         func_19B6A8
label_18d34c:
    if (ctx->pc == 0x18D34Cu) {
        ctx->pc = 0x18D34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D348u;
        // 0x18d34c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D350u;
        goto label_18d350;
    }
    ctx->pc = 0x18D348u;
    SET_GPR_U32(ctx, 31, 0x18D350u);
    ctx->pc = 0x18D34Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D348u;
    // 0x18d34c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B6A8u;
    { ctx->pc = 0x19b6a8; return; }
    ctx->pc = 0x18D350u;
label_18d350:
    // 0x18d350: 0xc7ad0248  lwc1        $f13, 0x248($sp)
    ctx->pc = 0x18d350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_18d354:
    // 0x18d354: 0xc06d51e  jal         func_1B5478
label_18d358:
    if (ctx->pc == 0x18D358u) {
        ctx->pc = 0x18D358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D354u;
        // 0x18d358: 0xc7ac0240  lwc1        $f12, 0x240($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D35Cu;
        goto label_18d35c;
    }
    ctx->pc = 0x18D354u;
    SET_GPR_U32(ctx, 31, 0x18D35Cu);
    ctx->pc = 0x18D358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D354u;
    // 0x18d358: 0xc7ac0240  lwc1        $f12, 0x240($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5478u;
    { ctx->pc = 0x1b5478; return; }
    ctx->pc = 0x18D35Cu;
label_18d35c:
    // 0x18d35c: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x18d35cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_18d360:
    // 0x18d360: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x18d360u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_18d364:
    // 0x18d364: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x18d364u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_18d368:
    // 0x18d368: 0x0  nop
    ctx->pc = 0x18d368u;
    // NOP
label_18d36c:
    // 0x18d36c: 0x46010541  sub.s       $f21, $f0, $f1
    ctx->pc = 0x18d36cu;
    ctx->f[21] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_18d370:
    // 0x18d370: 0xc06d4c0  jal         func_1B5300
label_18d374:
    if (ctx->pc == 0x18D374u) {
        ctx->pc = 0x18D374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D370u;
        // 0x18d374: 0x4615b300  add.s       $f12, $f22, $f21 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[22], ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D378u;
        goto label_18d378;
    }
    ctx->pc = 0x18D370u;
    SET_GPR_U32(ctx, 31, 0x18D378u);
    ctx->pc = 0x18D374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D370u;
    // 0x18d374: 0x4615b300  add.s       $f12, $f22, $f21 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[22], ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5300u;
    { ctx->pc = 0x1b5300; return; }
    ctx->pc = 0x18D378u;
label_18d378:
    // 0x18d378: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x18d378u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_18d37c:
    // 0x18d37c: 0xafa00244  sw          $zero, 0x244($sp)
    ctx->pc = 0x18d37cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 580), GPR_U32(ctx, 0));
label_18d380:
    // 0x18d380: 0x4615b300  add.s       $f12, $f22, $f21
    ctx->pc = 0x18d380u;
    ctx->f[12] = FPU_ADD_S(ctx->f[22], ctx->f[21]);
label_18d384:
    // 0x18d384: 0xc06d412  jal         func_1B5048
label_18d388:
    if (ctx->pc == 0x18D388u) {
        ctx->pc = 0x18D388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D384u;
        // 0x18d388: 0xe7a00240  swc1        $f0, 0x240($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 576), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D38Cu;
        goto label_18d38c;
    }
    ctx->pc = 0x18D384u;
    SET_GPR_U32(ctx, 31, 0x18D38Cu);
    ctx->pc = 0x18D388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D384u;
    // 0x18d388: 0xe7a00240  swc1        $f0, 0x240($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 576), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5048u;
    { ctx->pc = 0x1b5048; return; }
    ctx->pc = 0x18D38Cu;
label_18d38c:
    // 0x18d38c: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x18d38cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_18d390:
    // 0x18d390: 0x26840030  addiu       $a0, $s4, 0x30
    ctx->pc = 0x18d390u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
label_18d394:
    // 0x18d394: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x18d394u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_18d398:
    // 0x18d398: 0x27a60240  addiu       $a2, $sp, 0x240
    ctx->pc = 0x18d398u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
label_18d39c:
    // 0x18d39c: 0xafa0024c  sw          $zero, 0x24C($sp)
    ctx->pc = 0x18d39cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 588), GPR_U32(ctx, 0));
label_18d3a0:
    // 0x18d3a0: 0xc066e02  jal         func_19B808
label_18d3a4:
    if (ctx->pc == 0x18D3A4u) {
        ctx->pc = 0x18D3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D3A0u;
        // 0x18d3a4: 0xe7a00248  swc1        $f0, 0x248($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 584), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D3A8u;
        goto label_18d3a8;
    }
    ctx->pc = 0x18D3A0u;
    SET_GPR_U32(ctx, 31, 0x18D3A8u);
    ctx->pc = 0x18D3A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D3A0u;
    // 0x18d3a4: 0xe7a00248  swc1        $f0, 0x248($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 584), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B808u;
    { ctx->pc = 0x19b808; return; }
    ctx->pc = 0x18D3A8u;
label_18d3a8:
    // 0x18d3a8: 0x27a40270  addiu       $a0, $sp, 0x270
    ctx->pc = 0x18d3a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
label_18d3ac:
    // 0x18d3ac: 0x26850040  addiu       $a1, $s4, 0x40
    ctx->pc = 0x18d3acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 64));
label_18d3b0:
    // 0x18d3b0: 0xc066e08  jal         func_19B820
label_18d3b4:
    if (ctx->pc == 0x18D3B4u) {
        ctx->pc = 0x18D3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D3B0u;
        // 0x18d3b4: 0x26860030  addiu       $a2, $s4, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D3B8u;
        goto label_18d3b8;
    }
    ctx->pc = 0x18D3B0u;
    SET_GPR_U32(ctx, 31, 0x18D3B8u);
    ctx->pc = 0x18D3B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D3B0u;
    // 0x18d3b4: 0x26860030  addiu       $a2, $s4, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B820u;
    { ctx->pc = 0x19b820; return; }
    ctx->pc = 0x18D3B8u;
label_18d3b8:
    // 0x18d3b8: 0xc7a10270  lwc1        $f1, 0x270($sp)
    ctx->pc = 0x18d3b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 624)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_18d3bc:
    // 0x18d3bc: 0xc7a00278  lwc1        $f0, 0x278($sp)
    ctx->pc = 0x18d3bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18d3c0:
    // 0x18d3c0: 0xc7ac0274  lwc1        $f12, 0x274($sp)
    ctx->pc = 0x18d3c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 628)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_18d3c4:
    // 0x18d3c4: 0x4601081a  mula.s      $f1, $f1
    ctx->pc = 0x18d3c4u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[1], ctx->f[1]));
label_18d3c8:
    // 0x18d3c8: 0x4600001c  madd.s      $f0, $f0, $f0
    ctx->pc = 0x18d3c8u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[0]));
label_18d3cc:
    // 0x18d3cc: 0x46000344  c1          0x344
    ctx->pc = 0x18d3ccu;
    ctx->f[13] = FPU_SQRT_S(ctx->f[0]);
label_18d3d0:
    // 0x18d3d0: 0x0  nop
    ctx->pc = 0x18d3d0u;
    // NOP
label_18d3d4:
    // 0x18d3d4: 0x0  nop
    ctx->pc = 0x18d3d4u;
    // NOP
label_18d3d8:
    // 0x18d3d8: 0xc06d51e  jal         func_1B5478
label_18d3dc:
    if (ctx->pc == 0x18D3DCu) {
        ctx->pc = 0x18D3E0u;
        goto label_18d3e0;
    }
    ctx->pc = 0x18D3D8u;
    SET_GPR_U32(ctx, 31, 0x18D3E0u);
    ctx->pc = 0x1B5478u;
    { ctx->pc = 0x1b5478; return; }
    ctx->pc = 0x18D3E0u;
label_18d3e0:
    // 0x18d3e0: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x18d3e0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_18d3e4:
    // 0x18d3e4: 0xe6800020  swc1        $f0, 0x20($s4)
    ctx->pc = 0x18d3e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 32), bits); }
label_18d3e8:
    // 0x18d3e8: 0xc7ad0278  lwc1        $f13, 0x278($sp)
    ctx->pc = 0x18d3e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_18d3ec:
    // 0x18d3ec: 0xc06d51e  jal         func_1B5478
label_18d3f0:
    if (ctx->pc == 0x18D3F0u) {
        ctx->pc = 0x18D3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D3ECu;
        // 0x18d3f0: 0xc7ac0270  lwc1        $f12, 0x270($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 624)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D3F4u;
        goto label_18d3f4;
    }
    ctx->pc = 0x18D3ECu;
    SET_GPR_U32(ctx, 31, 0x18D3F4u);
    ctx->pc = 0x18D3F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D3ECu;
    // 0x18d3f0: 0xc7ac0270  lwc1        $f12, 0x270($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 624)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5478u;
    { ctx->pc = 0x1b5478; return; }
    ctx->pc = 0x18D3F4u;
label_18d3f4:
    // 0x18d3f4: 0xe6800024  swc1        $f0, 0x24($s4)
    ctx->pc = 0x18d3f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 36), bits); }
label_18d3f8:
    // 0x18d3f8: 0x8e8400e8  lw          $a0, 0xE8($s4)
    ctx->pc = 0x18d3f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 232)));
label_18d3fc:
    // 0x18d3fc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x18d3fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_18d400:
    // 0x18d400: 0x26860030  addiu       $a2, $s4, 0x30
    ctx->pc = 0x18d400u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
label_18d404:
    // 0x18d404: 0x27a700f0  addiu       $a3, $sp, 0xF0
    ctx->pc = 0x18d404u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_18d408:
    // 0x18d408: 0x27a800e0  addiu       $t0, $sp, 0xE0
    ctx->pc = 0x18d408u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_18d40c:
    // 0x18d40c: 0xc064a04  jal         func_192810
label_18d410:
    if (ctx->pc == 0x18D410u) {
        ctx->pc = 0x18D410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D40Cu;
        // 0x18d410: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D414u;
        goto label_18d414;
    }
    ctx->pc = 0x18D40Cu;
    SET_GPR_U32(ctx, 31, 0x18D414u);
    ctx->pc = 0x18D410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D40Cu;
    // 0x18d410: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x192810u;
    { ctx->pc = 0x192810; return; }
    ctx->pc = 0x18D414u;
label_18d414:
    // 0x18d414: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_18d418:
    if (ctx->pc == 0x18D418u) {
        ctx->pc = 0x18D418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D414u;
        // 0x18d418: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D41Cu;
        goto label_18d41c;
    }
    ctx->pc = 0x18D414u;
    {
        const bool branch_taken_0x18d414 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D414u;
        // 0x18d418: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d414) {
            ctx->pc = 0x18D458u;
            goto label_18d458;
        }
    }
    ctx->pc = 0x18D41Cu;
label_18d41c:
    // 0x18d41c: 0xc68000b8  lwc1        $f0, 0xB8($s4)
    ctx->pc = 0x18d41cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18d420:
    // 0x18d420: 0x3c02bf00  lui         $v0, 0xBF00
    ctx->pc = 0x18d420u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48896 << 16));
label_18d424:
    // 0x18d424: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x18d424u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_18d428:
    // 0x18d428: 0x26840030  addiu       $a0, $s4, 0x30
    ctx->pc = 0x18d428u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
label_18d42c:
    // 0x18d42c: 0x26850050  addiu       $a1, $s4, 0x50
    ctx->pc = 0x18d42cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 80));
label_18d430:
    // 0x18d430: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x18d430u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_18d434:
    // 0x18d434: 0xc066e26  jal         func_19B898
label_18d438:
    if (ctx->pc == 0x18D438u) {
        ctx->pc = 0x18D438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D434u;
        // 0x18d438: 0xe68000b8  swc1        $f0, 0xB8($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 184), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D43Cu;
        goto label_18d43c;
    }
    ctx->pc = 0x18D434u;
    SET_GPR_U32(ctx, 31, 0x18D43Cu);
    ctx->pc = 0x18D438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D434u;
    // 0x18d438: 0xe68000b8  swc1        $f0, 0xB8($s4) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 184), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x18D43Cu;
label_18d43c:
    // 0x18d43c: 0xc6810034  lwc1        $f1, 0x34($s4)
    ctx->pc = 0x18d43cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_18d440:
    // 0x18d440: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x18d440u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_18d444:
    // 0x18d444: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18d444u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18d448:
    // 0x18d448: 0x0  nop
    ctx->pc = 0x18d448u;
    // NOP
label_18d44c:
    // 0x18d44c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x18d44cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_18d450:
    // 0x18d450: 0xe6800034  swc1        $f0, 0x34($s4)
    ctx->pc = 0x18d450u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 52), bits); }
label_18d454:
    // 0x18d454: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x18d454u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_18d458:
    // 0x18d458: 0xc066e26  jal         func_19B898
label_18d45c:
    if (ctx->pc == 0x18D45Cu) {
        ctx->pc = 0x18D45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D458u;
        // 0x18d45c: 0x26840040  addiu       $a0, $s4, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D460u;
        goto label_18d460;
    }
    ctx->pc = 0x18D458u;
    SET_GPR_U32(ctx, 31, 0x18D460u);
    ctx->pc = 0x18D45Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D458u;
    // 0x18d45c: 0x26840040  addiu       $a0, $s4, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x18D460u;
label_18d460:
    // 0x18d460: 0x27a40250  addiu       $a0, $sp, 0x250
    ctx->pc = 0x18d460u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
label_18d464:
    // 0x18d464: 0x26850040  addiu       $a1, $s4, 0x40
    ctx->pc = 0x18d464u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 64));
label_18d468:
    // 0x18d468: 0xc066e08  jal         func_19B820
label_18d46c:
    if (ctx->pc == 0x18D46Cu) {
        ctx->pc = 0x18D46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D468u;
        // 0x18d46c: 0x26860030  addiu       $a2, $s4, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D470u;
        goto label_18d470;
    }
    ctx->pc = 0x18D468u;
    SET_GPR_U32(ctx, 31, 0x18D470u);
    ctx->pc = 0x18D46Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D468u;
    // 0x18d46c: 0x26860030  addiu       $a2, $s4, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B820u;
    { ctx->pc = 0x19b820; return; }
    ctx->pc = 0x18D470u;
label_18d470:
    // 0x18d470: 0xc7a10250  lwc1        $f1, 0x250($sp)
    ctx->pc = 0x18d470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_18d474:
    // 0x18d474: 0xc7a00258  lwc1        $f0, 0x258($sp)
    ctx->pc = 0x18d474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18d478:
    // 0x18d478: 0xc7ac0254  lwc1        $f12, 0x254($sp)
    ctx->pc = 0x18d478u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 596)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_18d47c:
    // 0x18d47c: 0x4601081a  mula.s      $f1, $f1
    ctx->pc = 0x18d47cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[1], ctx->f[1]));
label_18d480:
    // 0x18d480: 0x4600001c  madd.s      $f0, $f0, $f0
    ctx->pc = 0x18d480u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[0]));
label_18d484:
    // 0x18d484: 0x46000344  c1          0x344
    ctx->pc = 0x18d484u;
    ctx->f[13] = FPU_SQRT_S(ctx->f[0]);
label_18d488:
    // 0x18d488: 0x0  nop
    ctx->pc = 0x18d488u;
    // NOP
label_18d48c:
    // 0x18d48c: 0x0  nop
    ctx->pc = 0x18d48cu;
    // NOP
label_18d490:
    // 0x18d490: 0xc06d51e  jal         func_1B5478
label_18d494:
    if (ctx->pc == 0x18D494u) {
        ctx->pc = 0x18D498u;
        goto label_18d498;
    }
    ctx->pc = 0x18D490u;
    SET_GPR_U32(ctx, 31, 0x18D498u);
    ctx->pc = 0x1B5478u;
    { ctx->pc = 0x1b5478; return; }
    ctx->pc = 0x18D498u;
label_18d498:
    // 0x18d498: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x18d498u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_18d49c:
    // 0x18d49c: 0xe6800020  swc1        $f0, 0x20($s4)
    ctx->pc = 0x18d49cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 32), bits); }
label_18d4a0:
    // 0x18d4a0: 0xc7ad0258  lwc1        $f13, 0x258($sp)
    ctx->pc = 0x18d4a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_18d4a4:
    // 0x18d4a4: 0xc06d51e  jal         func_1B5478
label_18d4a8:
    if (ctx->pc == 0x18D4A8u) {
        ctx->pc = 0x18D4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D4A4u;
        // 0x18d4a8: 0xc7ac0250  lwc1        $f12, 0x250($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D4ACu;
        goto label_18d4ac;
    }
    ctx->pc = 0x18D4A4u;
    SET_GPR_U32(ctx, 31, 0x18D4ACu);
    ctx->pc = 0x18D4A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D4A4u;
    // 0x18d4a8: 0xc7ac0250  lwc1        $f12, 0x250($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5478u;
    { ctx->pc = 0x1b5478; return; }
    ctx->pc = 0x18D4ACu;
label_18d4ac:
    // 0x18d4ac: 0xe6800024  swc1        $f0, 0x24($s4)
    ctx->pc = 0x18d4acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 36), bits); }
label_18d4b0:
    // 0x18d4b0: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x18d4b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
label_18d4b4:
    // 0x18d4b4: 0x8f848590  lw          $a0, -0x7A70($gp)
    ctx->pc = 0x18d4b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
label_18d4b8:
    // 0x18d4b8: 0x34631800  ori         $v1, $v1, 0x1800
    ctx->pc = 0x18d4b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)6144);
label_18d4bc:
    // 0x18d4bc: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x18d4bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_18d4c0:
    // 0x18d4c0: 0x106007d0  beqz        $v1, . + 4 + (0x7D0 << 2)
label_18d4c4:
    if (ctx->pc == 0x18D4C4u) {
        ctx->pc = 0x18D4C8u;
        goto label_18d4c8;
    }
    ctx->pc = 0x18D4C0u;
    {
        const bool branch_taken_0x18d4c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18d4c0) {
            ctx->pc = 0x18F404u;
            { ctx->pc = 0x18f404; return; }
        }
    }
    ctx->pc = 0x18D4C8u;
label_18d4c8:
    // 0x18d4c8: 0x8e8300b0  lw          $v1, 0xB0($s4)
    ctx->pc = 0x18d4c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 176)));
label_18d4cc:
    // 0x18d4cc: 0x2c610028  sltiu       $at, $v1, 0x28
    ctx->pc = 0x18d4ccu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)40) ? 1 : 0);
label_18d4d0:
    // 0x18d4d0: 0x102007cc  beqz        $at, . + 4 + (0x7CC << 2)
label_18d4d4:
    if (ctx->pc == 0x18D4D4u) {
        ctx->pc = 0x18D4D8u;
        goto label_18d4d8;
    }
    ctx->pc = 0x18D4D0u;
    {
        const bool branch_taken_0x18d4d0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x18d4d0) {
            ctx->pc = 0x18F404u;
            { ctx->pc = 0x18f404; return; }
        }
    }
    ctx->pc = 0x18D4D8u;
label_18d4d8:
    // 0x18d4d8: 0xc68000b8  lwc1        $f0, 0xB8($s4)
    ctx->pc = 0x18d4d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18d4dc:
    // 0x18d4dc: 0x3c033f66  lui         $v1, 0x3F66
    ctx->pc = 0x18d4dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16230 << 16));
label_18d4e0:
    // 0x18d4e0: 0x34636666  ori         $v1, $v1, 0x6666
    ctx->pc = 0x18d4e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26214);
label_18d4e4:
    // 0x18d4e4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x18d4e4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_18d4e8:
    // 0x18d4e8: 0x0  nop
    ctx->pc = 0x18d4e8u;
    // NOP
label_18d4ec:
    // 0x18d4ec: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x18d4ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_18d4f0:
    // 0x18d4f0: 0xe68000b8  swc1        $f0, 0xB8($s4)
    ctx->pc = 0x18d4f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 184), bits); }
label_18d4f4:
    // 0x18d4f4: 0x100007c4  b           . + 4 + (0x7C4 << 2)
label_18d4f8:
    if (ctx->pc == 0x18D4F8u) {
        ctx->pc = 0x18D4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D4F4u;
        // 0x18d4f8: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D4FCu;
        goto label_18d4fc;
    }
    ctx->pc = 0x18D4F4u;
    {
        const bool branch_taken_0x18d4f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D4F4u;
        // 0x18d4f8: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d4f4) {
            ctx->pc = 0x18F408u;
            { ctx->pc = 0x18f408; return; }
        }
    }
    ctx->pc = 0x18D4FCu;
label_18d4fc:
    // 0x18d4fc: 0x26850070  addiu       $a1, $s4, 0x70
    ctx->pc = 0x18d4fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 112));
label_18d500:
    // 0x18d500: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x18d500u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_18d504:
    // 0x18d504: 0xda620000  lqc2        $vf2, 0x0($s3)
    ctx->pc = 0x18d504u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
label_18d508:
    // 0x18d508: 0x4be110ec  vsub.xyzw   $vf3, $vf2, $vf1
    ctx->pc = 0x18d508u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_18d50c:
    // 0x18d50c: 0x4a0002ff  vnop
    ctx->pc = 0x18d50cu;
    // NOP operation, no action needed for VU0
label_18d510:
    // 0x18d510: 0x4a0002ff  vnop
    ctx->pc = 0x18d510u;
    // NOP operation, no action needed for VU0
label_18d514:
    // 0x18d514: 0x4a0002ff  vnop
    ctx->pc = 0x18d514u;
    // NOP operation, no action needed for VU0
label_18d518:
    // 0x18d518: 0x4b03f959  vmuly.x     $vf5, $vf31, $vf3y
    ctx->pc = 0x18d518u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_18d51c:
    // 0x18d51c: 0x4b03f99a  vmulz.x     $vf6, $vf31, $vf3z
    ctx->pc = 0x18d51cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
label_18d520:
    // 0x18d520: 0x4a0002ff  vnop
    ctx->pc = 0x18d520u;
    // NOP operation, no action needed for VU0
label_18d524:
    // 0x18d524: 0x4b0319bc  vmulax.x    $ACC, $vf3, $vf3x
    ctx->pc = 0x18d524u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
label_18d528:
    // 0x18d528: 0x4b0328bd  vmadday.x   $ACC, $vf5, $vf3y
    ctx->pc = 0x18d528u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
label_18d52c:
    // 0x18d52c: 0x4b03310a  vmaddz.x    $vf4, $vf6, $vf3z
    ctx->pc = 0x18d52cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_18d530:
    // 0x18d530: 0x4a0002ff  vnop
    ctx->pc = 0x18d530u;
    // NOP operation, no action needed for VU0
label_18d534:
    // 0x18d534: 0x4a0002ff  vnop
    ctx->pc = 0x18d534u;
    // NOP operation, no action needed for VU0
label_18d538:
    // 0x18d538: 0x4a0002ff  vnop
    ctx->pc = 0x18d538u;
    // NOP operation, no action needed for VU0
label_18d53c:
    // 0x18d53c: 0x4a0403bd  .word       0x4A0403BD                   # vsqrt       $Q, $vf4x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x18d53cu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
label_18d540:
    // 0x18d540: 0x4a0003bf  vwaitq
    ctx->pc = 0x18d540u;
    // VWAITQ (Q already resolved in this runtime)
label_18d544:
    // 0x18d544: 0x4849b000  cfc2.ni     $t1, $vi22
    ctx->pc = 0x18d544u;
    { uint32_t bits; std::memcpy(&bits, &ctx->vu0_q, sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
label_18d548:
    // 0x18d548: 0x44890800  mtc1        $t1, $f1
    ctx->pc = 0x18d548u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_18d54c:
    // 0x18d54c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x18d54cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_18d550:
    // 0x18d550: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18d550u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18d554:
    // 0x18d554: 0x0  nop
    ctx->pc = 0x18d554u;
    // NOP
label_18d558:
    // 0x18d558: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x18d558u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18d55c:
    // 0x18d55c: 0x0  nop
    ctx->pc = 0x18d55cu;
    // NOP
    ctx->pc = 0x18d560u;
    return;
}
