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

// Function: FUN_0019b6a8
// Address: 0x19b6a8 - 0x29b6b0
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0019b6a8_part4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x19ce18u: goto label_19ce18;
        case 0x19ce1cu: goto label_19ce1c;
        case 0x19ce20u: goto label_19ce20;
        case 0x19ce24u: goto label_19ce24;
        case 0x19ce28u: goto label_19ce28;
        case 0x19ce2cu: goto label_19ce2c;
        case 0x19ce30u: goto label_19ce30;
        case 0x19ce34u: goto label_19ce34;
        case 0x19ce38u: goto label_19ce38;
        case 0x19ce3cu: goto label_19ce3c;
        case 0x19ce40u: goto label_19ce40;
        case 0x19ce44u: goto label_19ce44;
        case 0x19ce48u: goto label_19ce48;
        case 0x19ce4cu: goto label_19ce4c;
        case 0x19ce50u: goto label_19ce50;
        case 0x19ce54u: goto label_19ce54;
        case 0x19ce58u: goto label_19ce58;
        case 0x19ce5cu: goto label_19ce5c;
        case 0x19ce60u: goto label_19ce60;
        case 0x19ce64u: goto label_19ce64;
        case 0x19ce68u: goto label_19ce68;
        case 0x19ce6cu: goto label_19ce6c;
        case 0x19ce70u: goto label_19ce70;
        case 0x19ce74u: goto label_19ce74;
        case 0x19ce78u: goto label_19ce78;
        case 0x19ce7cu: goto label_19ce7c;
        case 0x19ce80u: goto label_19ce80;
        case 0x19ce84u: goto label_19ce84;
        case 0x19ce88u: goto label_19ce88;
        case 0x19ce8cu: goto label_19ce8c;
        case 0x19ce90u: goto label_19ce90;
        case 0x19ce94u: goto label_19ce94;
        case 0x19ce98u: goto label_19ce98;
        case 0x19ce9cu: goto label_19ce9c;
        case 0x19cea0u: goto label_19cea0;
        case 0x19cea4u: goto label_19cea4;
        case 0x19cea8u: goto label_19cea8;
        case 0x19ceacu: goto label_19ceac;
        case 0x19ceb0u: goto label_19ceb0;
        case 0x19ceb4u: goto label_19ceb4;
        case 0x19ceb8u: goto label_19ceb8;
        case 0x19cebcu: goto label_19cebc;
        case 0x19cec0u: goto label_19cec0;
        case 0x19cec4u: goto label_19cec4;
        case 0x19cec8u: goto label_19cec8;
        case 0x19ceccu: goto label_19cecc;
        case 0x19ced0u: goto label_19ced0;
        case 0x19ced4u: goto label_19ced4;
        case 0x19ced8u: goto label_19ced8;
        case 0x19cedcu: goto label_19cedc;
        case 0x19cee0u: goto label_19cee0;
        case 0x19cee4u: goto label_19cee4;
        case 0x19cee8u: goto label_19cee8;
        case 0x19ceecu: goto label_19ceec;
        case 0x19cef0u: goto label_19cef0;
        case 0x19cef4u: goto label_19cef4;
        case 0x19cef8u: goto label_19cef8;
        case 0x19cefcu: goto label_19cefc;
        case 0x19cf00u: goto label_19cf00;
        case 0x19cf04u: goto label_19cf04;
        case 0x19cf08u: goto label_19cf08;
        case 0x19cf0cu: goto label_19cf0c;
        case 0x19cf10u: goto label_19cf10;
        case 0x19cf14u: goto label_19cf14;
        case 0x19cf18u: goto label_19cf18;
        case 0x19cf1cu: goto label_19cf1c;
        case 0x19cf20u: goto label_19cf20;
        case 0x19cf24u: goto label_19cf24;
        case 0x19cf28u: goto label_19cf28;
        case 0x19cf2cu: goto label_19cf2c;
        case 0x19cf30u: goto label_19cf30;
        case 0x19cf34u: goto label_19cf34;
        case 0x19cf38u: goto label_19cf38;
        case 0x19cf3cu: goto label_19cf3c;
        case 0x19cf40u: goto label_19cf40;
        case 0x19cf44u: goto label_19cf44;
        case 0x19cf48u: goto label_19cf48;
        case 0x19cf4cu: goto label_19cf4c;
        case 0x19cf50u: goto label_19cf50;
        case 0x19cf54u: goto label_19cf54;
        case 0x19cf58u: goto label_19cf58;
        case 0x19cf5cu: goto label_19cf5c;
        case 0x19cf60u: goto label_19cf60;
        case 0x19cf64u: goto label_19cf64;
        case 0x19cf68u: goto label_19cf68;
        case 0x19cf6cu: goto label_19cf6c;
        case 0x19cf70u: goto label_19cf70;
        case 0x19cf74u: goto label_19cf74;
        case 0x19cf78u: goto label_19cf78;
        case 0x19cf7cu: goto label_19cf7c;
        case 0x19cf80u: goto label_19cf80;
        case 0x19cf84u: goto label_19cf84;
        case 0x19cf88u: goto label_19cf88;
        case 0x19cf8cu: goto label_19cf8c;
        case 0x19cf90u: goto label_19cf90;
        case 0x19cf94u: goto label_19cf94;
        case 0x19cf98u: goto label_19cf98;
        case 0x19cf9cu: goto label_19cf9c;
        case 0x19cfa0u: goto label_19cfa0;
        case 0x19cfa4u: goto label_19cfa4;
        case 0x19cfa8u: goto label_19cfa8;
        case 0x19cfacu: goto label_19cfac;
        case 0x19cfb0u: goto label_19cfb0;
        case 0x19cfb4u: goto label_19cfb4;
        case 0x19cfb8u: goto label_19cfb8;
        case 0x19cfbcu: goto label_19cfbc;
        case 0x19cfc0u: goto label_19cfc0;
        case 0x19cfc4u: goto label_19cfc4;
        case 0x19cfc8u: goto label_19cfc8;
        case 0x19cfccu: goto label_19cfcc;
        case 0x19cfd0u: goto label_19cfd0;
        case 0x19cfd4u: goto label_19cfd4;
        case 0x19cfd8u: goto label_19cfd8;
        case 0x19cfdcu: goto label_19cfdc;
        case 0x19cfe0u: goto label_19cfe0;
        case 0x19cfe4u: goto label_19cfe4;
        case 0x19cfe8u: goto label_19cfe8;
        case 0x19cfecu: goto label_19cfec;
        case 0x19cff0u: goto label_19cff0;
        case 0x19cff4u: goto label_19cff4;
        case 0x19cff8u: goto label_19cff8;
        case 0x19cffcu: goto label_19cffc;
        case 0x19d000u: goto label_19d000;
        case 0x19d004u: goto label_19d004;
        case 0x19d008u: goto label_19d008;
        case 0x19d00cu: goto label_19d00c;
        case 0x19d010u: goto label_19d010;
        case 0x19d014u: goto label_19d014;
        case 0x19d018u: goto label_19d018;
        case 0x19d01cu: goto label_19d01c;
        case 0x19d020u: goto label_19d020;
        case 0x19d024u: goto label_19d024;
        case 0x19d028u: goto label_19d028;
        case 0x19d02cu: goto label_19d02c;
        case 0x19d030u: goto label_19d030;
        case 0x19d034u: goto label_19d034;
        case 0x19d038u: goto label_19d038;
        case 0x19d03cu: goto label_19d03c;
        case 0x19d040u: goto label_19d040;
        case 0x19d044u: goto label_19d044;
        case 0x19d048u: goto label_19d048;
        case 0x19d04cu: goto label_19d04c;
        case 0x19d050u: goto label_19d050;
        case 0x19d054u: goto label_19d054;
        case 0x19d058u: goto label_19d058;
        case 0x19d05cu: goto label_19d05c;
        case 0x19d060u: goto label_19d060;
        case 0x19d064u: goto label_19d064;
        case 0x19d068u: goto label_19d068;
        case 0x19d06cu: goto label_19d06c;
        case 0x19d070u: goto label_19d070;
        case 0x19d074u: goto label_19d074;
        case 0x19d078u: goto label_19d078;
        case 0x19d07cu: goto label_19d07c;
        case 0x19d080u: goto label_19d080;
        case 0x19d084u: goto label_19d084;
        case 0x19d088u: goto label_19d088;
        case 0x19d08cu: goto label_19d08c;
        case 0x19d090u: goto label_19d090;
        case 0x19d094u: goto label_19d094;
        case 0x19d098u: goto label_19d098;
        case 0x19d09cu: goto label_19d09c;
        case 0x19d0a0u: goto label_19d0a0;
        case 0x19d0a4u: goto label_19d0a4;
        case 0x19d0a8u: goto label_19d0a8;
        case 0x19d0acu: goto label_19d0ac;
        case 0x19d0b0u: goto label_19d0b0;
        case 0x19d0b4u: goto label_19d0b4;
        case 0x19d0b8u: goto label_19d0b8;
        case 0x19d0bcu: goto label_19d0bc;
        case 0x19d0c0u: goto label_19d0c0;
        case 0x19d0c4u: goto label_19d0c4;
        case 0x19d0c8u: goto label_19d0c8;
        case 0x19d0ccu: goto label_19d0cc;
        case 0x19d0d0u: goto label_19d0d0;
        case 0x19d0d4u: goto label_19d0d4;
        case 0x19d0d8u: goto label_19d0d8;
        case 0x19d0dcu: goto label_19d0dc;
        case 0x19d0e0u: goto label_19d0e0;
        case 0x19d0e4u: goto label_19d0e4;
        case 0x19d0e8u: goto label_19d0e8;
        case 0x19d0ecu: goto label_19d0ec;
        case 0x19d0f0u: goto label_19d0f0;
        case 0x19d0f4u: goto label_19d0f4;
        case 0x19d0f8u: goto label_19d0f8;
        case 0x19d0fcu: goto label_19d0fc;
        case 0x19d100u: goto label_19d100;
        case 0x19d104u: goto label_19d104;
        case 0x19d108u: goto label_19d108;
        case 0x19d10cu: goto label_19d10c;
        case 0x19d110u: goto label_19d110;
        case 0x19d114u: goto label_19d114;
        case 0x19d118u: goto label_19d118;
        case 0x19d11cu: goto label_19d11c;
        case 0x19d120u: goto label_19d120;
        case 0x19d124u: goto label_19d124;
        case 0x19d128u: goto label_19d128;
        case 0x19d12cu: goto label_19d12c;
        case 0x19d130u: goto label_19d130;
        case 0x19d134u: goto label_19d134;
        case 0x19d138u: goto label_19d138;
        case 0x19d13cu: goto label_19d13c;
        case 0x19d140u: goto label_19d140;
        case 0x19d144u: goto label_19d144;
        case 0x19d148u: goto label_19d148;
        case 0x19d14cu: goto label_19d14c;
        case 0x19d150u: goto label_19d150;
        case 0x19d154u: goto label_19d154;
        case 0x19d158u: goto label_19d158;
        case 0x19d15cu: goto label_19d15c;
        case 0x19d160u: goto label_19d160;
        case 0x19d164u: goto label_19d164;
        case 0x19d168u: goto label_19d168;
        case 0x19d16cu: goto label_19d16c;
        case 0x19d170u: goto label_19d170;
        case 0x19d174u: goto label_19d174;
        case 0x19d178u: goto label_19d178;
        case 0x19d17cu: goto label_19d17c;
        case 0x19d180u: goto label_19d180;
        case 0x19d184u: goto label_19d184;
        case 0x19d188u: goto label_19d188;
        case 0x19d18cu: goto label_19d18c;
        case 0x19d190u: goto label_19d190;
        case 0x19d194u: goto label_19d194;
        case 0x19d198u: goto label_19d198;
        case 0x19d19cu: goto label_19d19c;
        case 0x19d1a0u: goto label_19d1a0;
        case 0x19d1a4u: goto label_19d1a4;
        case 0x19d1a8u: goto label_19d1a8;
        case 0x19d1acu: goto label_19d1ac;
        case 0x19d1b0u: goto label_19d1b0;
        case 0x19d1b4u: goto label_19d1b4;
        case 0x19d1b8u: goto label_19d1b8;
        case 0x19d1bcu: goto label_19d1bc;
        case 0x19d1c0u: goto label_19d1c0;
        case 0x19d1c4u: goto label_19d1c4;
        case 0x19d1c8u: goto label_19d1c8;
        case 0x19d1ccu: goto label_19d1cc;
        case 0x19d1d0u: goto label_19d1d0;
        case 0x19d1d4u: goto label_19d1d4;
        case 0x19d1d8u: goto label_19d1d8;
        case 0x19d1dcu: goto label_19d1dc;
        case 0x19d1e0u: goto label_19d1e0;
        case 0x19d1e4u: goto label_19d1e4;
        case 0x19d1e8u: goto label_19d1e8;
        case 0x19d1ecu: goto label_19d1ec;
        case 0x19d1f0u: goto label_19d1f0;
        case 0x19d1f4u: goto label_19d1f4;
        case 0x19d1f8u: goto label_19d1f8;
        case 0x19d1fcu: goto label_19d1fc;
        case 0x19d200u: goto label_19d200;
        case 0x19d204u: goto label_19d204;
        case 0x19d208u: goto label_19d208;
        case 0x19d20cu: goto label_19d20c;
        case 0x19d210u: goto label_19d210;
        case 0x19d214u: goto label_19d214;
        case 0x19d218u: goto label_19d218;
        case 0x19d21cu: goto label_19d21c;
        case 0x19d220u: goto label_19d220;
        case 0x19d224u: goto label_19d224;
        case 0x19d228u: goto label_19d228;
        case 0x19d22cu: goto label_19d22c;
        case 0x19d230u: goto label_19d230;
        case 0x19d234u: goto label_19d234;
        case 0x19d238u: goto label_19d238;
        case 0x19d23cu: goto label_19d23c;
        case 0x19d240u: goto label_19d240;
        case 0x19d244u: goto label_19d244;
        case 0x19d248u: goto label_19d248;
        case 0x19d24cu: goto label_19d24c;
        case 0x19d250u: goto label_19d250;
        case 0x19d254u: goto label_19d254;
        case 0x19d258u: goto label_19d258;
        case 0x19d25cu: goto label_19d25c;
        case 0x19d260u: goto label_19d260;
        case 0x19d264u: goto label_19d264;
        case 0x19d268u: goto label_19d268;
        case 0x19d26cu: goto label_19d26c;
        case 0x19d270u: goto label_19d270;
        case 0x19d274u: goto label_19d274;
        case 0x19d278u: goto label_19d278;
        case 0x19d27cu: goto label_19d27c;
        case 0x19d280u: goto label_19d280;
        case 0x19d284u: goto label_19d284;
        case 0x19d288u: goto label_19d288;
        case 0x19d28cu: goto label_19d28c;
        case 0x19d290u: goto label_19d290;
        case 0x19d294u: goto label_19d294;
        case 0x19d298u: goto label_19d298;
        case 0x19d29cu: goto label_19d29c;
        case 0x19d2a0u: goto label_19d2a0;
        case 0x19d2a4u: goto label_19d2a4;
        case 0x19d2a8u: goto label_19d2a8;
        case 0x19d2acu: goto label_19d2ac;
        case 0x19d2b0u: goto label_19d2b0;
        case 0x19d2b4u: goto label_19d2b4;
        case 0x19d2b8u: goto label_19d2b8;
        case 0x19d2bcu: goto label_19d2bc;
        case 0x19d2c0u: goto label_19d2c0;
        case 0x19d2c4u: goto label_19d2c4;
        case 0x19d2c8u: goto label_19d2c8;
        case 0x19d2ccu: goto label_19d2cc;
        case 0x19d2d0u: goto label_19d2d0;
        case 0x19d2d4u: goto label_19d2d4;
        case 0x19d2d8u: goto label_19d2d8;
        case 0x19d2dcu: goto label_19d2dc;
        case 0x19d2e0u: goto label_19d2e0;
        case 0x19d2e4u: goto label_19d2e4;
        case 0x19d2e8u: goto label_19d2e8;
        case 0x19d2ecu: goto label_19d2ec;
        case 0x19d2f0u: goto label_19d2f0;
        case 0x19d2f4u: goto label_19d2f4;
        case 0x19d2f8u: goto label_19d2f8;
        case 0x19d2fcu: goto label_19d2fc;
        case 0x19d300u: goto label_19d300;
        case 0x19d304u: goto label_19d304;
        case 0x19d308u: goto label_19d308;
        case 0x19d30cu: goto label_19d30c;
        case 0x19d310u: goto label_19d310;
        case 0x19d314u: goto label_19d314;
        case 0x19d318u: goto label_19d318;
        case 0x19d31cu: goto label_19d31c;
        case 0x19d320u: goto label_19d320;
        case 0x19d324u: goto label_19d324;
        case 0x19d328u: goto label_19d328;
        case 0x19d32cu: goto label_19d32c;
        case 0x19d330u: goto label_19d330;
        case 0x19d334u: goto label_19d334;
        case 0x19d338u: goto label_19d338;
        case 0x19d33cu: goto label_19d33c;
        case 0x19d340u: goto label_19d340;
        case 0x19d344u: goto label_19d344;
        case 0x19d348u: goto label_19d348;
        case 0x19d34cu: goto label_19d34c;
        case 0x19d350u: goto label_19d350;
        case 0x19d354u: goto label_19d354;
        case 0x19d358u: goto label_19d358;
        case 0x19d35cu: goto label_19d35c;
        case 0x19d360u: goto label_19d360;
        case 0x19d364u: goto label_19d364;
        case 0x19d368u: goto label_19d368;
        case 0x19d36cu: goto label_19d36c;
        case 0x19d370u: goto label_19d370;
        case 0x19d374u: goto label_19d374;
        case 0x19d378u: goto label_19d378;
        case 0x19d37cu: goto label_19d37c;
        case 0x19d380u: goto label_19d380;
        case 0x19d384u: goto label_19d384;
        case 0x19d388u: goto label_19d388;
        case 0x19d38cu: goto label_19d38c;
        case 0x19d390u: goto label_19d390;
        case 0x19d394u: goto label_19d394;
        case 0x19d398u: goto label_19d398;
        case 0x19d39cu: goto label_19d39c;
        case 0x19d3a0u: goto label_19d3a0;
        case 0x19d3a4u: goto label_19d3a4;
        case 0x19d3a8u: goto label_19d3a8;
        case 0x19d3acu: goto label_19d3ac;
        case 0x19d3b0u: goto label_19d3b0;
        case 0x19d3b4u: goto label_19d3b4;
        case 0x19d3b8u: goto label_19d3b8;
        case 0x19d3bcu: goto label_19d3bc;
        case 0x19d3c0u: goto label_19d3c0;
        case 0x19d3c4u: goto label_19d3c4;
        case 0x19d3c8u: goto label_19d3c8;
        case 0x19d3ccu: goto label_19d3cc;
        case 0x19d3d0u: goto label_19d3d0;
        case 0x19d3d4u: goto label_19d3d4;
        case 0x19d3d8u: goto label_19d3d8;
        case 0x19d3dcu: goto label_19d3dc;
        case 0x19d3e0u: goto label_19d3e0;
        case 0x19d3e4u: goto label_19d3e4;
        case 0x19d3e8u: goto label_19d3e8;
        case 0x19d3ecu: goto label_19d3ec;
        case 0x19d3f0u: goto label_19d3f0;
        case 0x19d3f4u: goto label_19d3f4;
        case 0x19d3f8u: goto label_19d3f8;
        case 0x19d3fcu: goto label_19d3fc;
        case 0x19d400u: goto label_19d400;
        case 0x19d404u: goto label_19d404;
        case 0x19d408u: goto label_19d408;
        case 0x19d40cu: goto label_19d40c;
        case 0x19d410u: goto label_19d410;
        case 0x19d414u: goto label_19d414;
        case 0x19d418u: goto label_19d418;
        case 0x19d41cu: goto label_19d41c;
        case 0x19d420u: goto label_19d420;
        case 0x19d424u: goto label_19d424;
        case 0x19d428u: goto label_19d428;
        case 0x19d42cu: goto label_19d42c;
        case 0x19d430u: goto label_19d430;
        case 0x19d434u: goto label_19d434;
        case 0x19d438u: goto label_19d438;
        case 0x19d43cu: goto label_19d43c;
        case 0x19d440u: goto label_19d440;
        case 0x19d444u: goto label_19d444;
        case 0x19d448u: goto label_19d448;
        case 0x19d44cu: goto label_19d44c;
        case 0x19d450u: goto label_19d450;
        case 0x19d454u: goto label_19d454;
        case 0x19d458u: goto label_19d458;
        case 0x19d45cu: goto label_19d45c;
        case 0x19d460u: goto label_19d460;
        case 0x19d464u: goto label_19d464;
        case 0x19d468u: goto label_19d468;
        case 0x19d46cu: goto label_19d46c;
        case 0x19d470u: goto label_19d470;
        case 0x19d474u: goto label_19d474;
        case 0x19d478u: goto label_19d478;
        case 0x19d47cu: goto label_19d47c;
        case 0x19d480u: goto label_19d480;
        case 0x19d484u: goto label_19d484;
        case 0x19d488u: goto label_19d488;
        case 0x19d48cu: goto label_19d48c;
        case 0x19d490u: goto label_19d490;
        case 0x19d494u: goto label_19d494;
        case 0x19d498u: goto label_19d498;
        case 0x19d49cu: goto label_19d49c;
        case 0x19d4a0u: goto label_19d4a0;
        case 0x19d4a4u: goto label_19d4a4;
        case 0x19d4a8u: goto label_19d4a8;
        case 0x19d4acu: goto label_19d4ac;
        case 0x19d4b0u: goto label_19d4b0;
        case 0x19d4b4u: goto label_19d4b4;
        case 0x19d4b8u: goto label_19d4b8;
        case 0x19d4bcu: goto label_19d4bc;
        case 0x19d4c0u: goto label_19d4c0;
        case 0x19d4c4u: goto label_19d4c4;
        case 0x19d4c8u: goto label_19d4c8;
        case 0x19d4ccu: goto label_19d4cc;
        case 0x19d4d0u: goto label_19d4d0;
        case 0x19d4d4u: goto label_19d4d4;
        case 0x19d4d8u: goto label_19d4d8;
        case 0x19d4dcu: goto label_19d4dc;
        case 0x19d4e0u: goto label_19d4e0;
        case 0x19d4e4u: goto label_19d4e4;
        case 0x19d4e8u: goto label_19d4e8;
        case 0x19d4ecu: goto label_19d4ec;
        case 0x19d4f0u: goto label_19d4f0;
        case 0x19d4f4u: goto label_19d4f4;
        case 0x19d4f8u: goto label_19d4f8;
        case 0x19d4fcu: goto label_19d4fc;
        case 0x19d500u: goto label_19d500;
        case 0x19d504u: goto label_19d504;
        case 0x19d508u: goto label_19d508;
        case 0x19d50cu: goto label_19d50c;
        case 0x19d510u: goto label_19d510;
        case 0x19d514u: goto label_19d514;
        case 0x19d518u: goto label_19d518;
        case 0x19d51cu: goto label_19d51c;
        case 0x19d520u: goto label_19d520;
        case 0x19d524u: goto label_19d524;
        case 0x19d528u: goto label_19d528;
        case 0x19d52cu: goto label_19d52c;
        case 0x19d530u: goto label_19d530;
        case 0x19d534u: goto label_19d534;
        case 0x19d538u: goto label_19d538;
        case 0x19d53cu: goto label_19d53c;
        case 0x19d540u: goto label_19d540;
        case 0x19d544u: goto label_19d544;
        case 0x19d548u: goto label_19d548;
        case 0x19d54cu: goto label_19d54c;
        case 0x19d550u: goto label_19d550;
        case 0x19d554u: goto label_19d554;
        case 0x19d558u: goto label_19d558;
        case 0x19d55cu: goto label_19d55c;
        case 0x19d560u: goto label_19d560;
        case 0x19d564u: goto label_19d564;
        case 0x19d568u: goto label_19d568;
        case 0x19d56cu: goto label_19d56c;
        case 0x19d570u: goto label_19d570;
        case 0x19d574u: goto label_19d574;
        case 0x19d578u: goto label_19d578;
        case 0x19d57cu: goto label_19d57c;
        case 0x19d580u: goto label_19d580;
        case 0x19d584u: goto label_19d584;
        case 0x19d588u: goto label_19d588;
        case 0x19d58cu: goto label_19d58c;
        case 0x19d590u: goto label_19d590;
        case 0x19d594u: goto label_19d594;
        case 0x19d598u: goto label_19d598;
        case 0x19d59cu: goto label_19d59c;
        case 0x19d5a0u: goto label_19d5a0;
        case 0x19d5a4u: goto label_19d5a4;
        case 0x19d5a8u: goto label_19d5a8;
        case 0x19d5acu: goto label_19d5ac;
        case 0x19d5b0u: goto label_19d5b0;
        case 0x19d5b4u: goto label_19d5b4;
        case 0x19d5b8u: goto label_19d5b8;
        case 0x19d5bcu: goto label_19d5bc;
        case 0x19d5c0u: goto label_19d5c0;
        case 0x19d5c4u: goto label_19d5c4;
        case 0x19d5c8u: goto label_19d5c8;
        case 0x19d5ccu: goto label_19d5cc;
        case 0x19d5d0u: goto label_19d5d0;
        case 0x19d5d4u: goto label_19d5d4;
        case 0x19d5d8u: goto label_19d5d8;
        case 0x19d5dcu: goto label_19d5dc;
        case 0x19d5e0u: goto label_19d5e0;
        case 0x19d5e4u: goto label_19d5e4;
        default: return;
    }

label_19ce18:
    // 0x19ce18: 0x24070600  addiu       $a3, $zero, 0x600
    ctx->pc = 0x19ce18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1536));
label_19ce1c:
    // 0x19ce1c: 0x132040  sll         $a0, $s3, 1
    ctx->pc = 0x19ce1cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
label_19ce20:
    // 0x19ce20: 0xa21818  mult        $v1, $a1, $v0
    ctx->pc = 0x19ce20u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_19ce24:
    // 0x19ce24: 0x2e73818  mult        $a3, $s7, $a3
    ctx->pc = 0x19ce24u;
    { int64_t result = (int64_t)GPR_S32(ctx, 23) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
label_19ce28:
    // 0x19ce28: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x19ce28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_19ce2c:
    // 0x19ce2c: 0x64900  sll         $t1, $a2, 4
    ctx->pc = 0x19ce2cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_19ce30:
    // 0x19ce30: 0x252a0300  addiu       $t2, $t1, 0x300
    ctx->pc = 0x19ce30u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 9), 768));
label_19ce34:
    // 0x19ce34: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x19ce34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_19ce38:
    // 0x19ce38: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x19ce38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_19ce3c:
    // 0x19ce3c: 0x1a63004  sllv        $a2, $a2, $t5
    ctx->pc = 0x19ce3cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 13) & 0x1F));
label_19ce40:
    // 0x19ce40: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x19ce40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
label_19ce44:
    // 0x19ce44: 0x782821  addu        $a1, $v1, $t8
    ctx->pc = 0x19ce44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 24)));
label_19ce48:
    // 0x19ce48: 0x1217c2  srl         $v0, $s2, 31
    ctx->pc = 0x19ce48u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
label_19ce4c:
    // 0x19ce4c: 0x161fc2  srl         $v1, $s6, 31
    ctx->pc = 0x19ce4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 22), 31));
label_19ce50:
    // 0x19ce50: 0x8ca80590  lw          $t0, 0x590($a1)
    ctx->pc = 0x19ce50u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1424)));
label_19ce54:
    // 0x19ce54: 0x2c31821  addu        $v1, $s6, $v1
    ctx->pc = 0x19ce54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
label_19ce58:
    // 0x19ce58: 0x2422821  addu        $a1, $s2, $v0
    ctx->pc = 0x19ce58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_19ce5c:
    // 0x19ce5c: 0x39843  sra         $s3, $v1, 1
    ctx->pc = 0x19ce5cu;
    SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 3), 1));
label_19ce60:
    // 0x19ce60: 0x1079021  addu        $s2, $t0, $a3
    ctx->pc = 0x19ce60u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
label_19ce64:
    // 0x19ce64: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x19ce64u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
label_19ce68:
    // 0x19ce68: 0x8fa70018  lw          $a3, 0x18($sp)
    ctx->pc = 0x19ce68u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_19ce6c:
    // 0x19ce6c: 0x2494821  addu        $t1, $s2, $t1
    ctx->pc = 0x19ce6cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 9)));
label_19ce70:
    // 0x19ce70: 0x24a5021  addu        $t2, $s2, $t2
    ctx->pc = 0x19ce70u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 10)));
label_19ce74:
    // 0x19ce74: 0x5b043  sra         $s6, $a1, 1
    ctx->pc = 0x19ce74u;
    SET_GPR_S32(ctx, 22, SRA32(GPR_S32(ctx, 5), 1));
label_19ce78:
    // 0x19ce78: 0xe42025  or          $a0, $a3, $a0
    ctx->pc = 0x19ce78u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) | GPR_U64(ctx, 4));
label_19ce7c:
    // 0x19ce7c: 0x992025  or          $a0, $a0, $t9
    ctx->pc = 0x19ce7cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 25));
label_19ce80:
    // 0x19ce80: 0x103843  sra         $a3, $s0, 1
    ctx->pc = 0x19ce80u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 16), 1));
label_19ce84:
    // 0x19ce84: 0xafa4000c  sw          $a0, 0xC($sp)
    ctx->pc = 0x19ce84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 4));
label_19ce88:
    // 0x19ce88: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x19ce88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_19ce8c:
    // 0x19ce8c: 0xad890014  sw          $t1, 0x14($t4)
    ctx->pc = 0x19ce8cu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 20), GPR_U32(ctx, 9));
label_19ce90:
    // 0x19ce90: 0x41043  sra         $v0, $a0, 1
    ctx->pc = 0x19ce90u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 4), 1));
label_19ce94:
    // 0x19ce94: 0xad860010  sw          $a2, 0x10($t4)
    ctx->pc = 0x19ce94u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 16), GPR_U32(ctx, 6));
label_19ce98:
    // 0x19ce98: 0x624021  addu        $t0, $v1, $v0
    ctx->pc = 0x19ce98u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_19ce9c:
    // 0x19ce9c: 0xad8a0018  sw          $t2, 0x18($t4)
    ctx->pc = 0x19ce9cu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 24), GPR_U32(ctx, 10));
label_19cea0:
    // 0x19cea0: 0x11a00008  beqz        $t5, . + 4 + (0x8 << 2)
label_19cea4:
    if (ctx->pc == 0x19CEA4u) {
        ctx->pc = 0x19CEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CEA0u;
        // 0x19cea4: 0xe4843  sra         $t1, $t6, 1 (Delay Slot)
        SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 14), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19CEA8u;
        goto label_19cea8;
    }
    ctx->pc = 0x19CEA0u;
    {
        const bool branch_taken_0x19cea0 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        ctx->pc = 0x19CEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CEA0u;
        // 0x19cea4: 0xe4843  sra         $t1, $t6, 1 (Delay Slot)
        SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 14), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19cea0) {
            ctx->pc = 0x19CEC4u;
            goto label_19cec4;
        }
    }
    ctx->pc = 0x19CEA8u;
label_19cea8:
    // 0x19cea8: 0x51083  sra         $v0, $a1, 2
    ctx->pc = 0x19cea8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 5), 2));
label_19ceac:
    // 0x19ceac: 0xb2043  sra         $a0, $t3, 1
    ctx->pc = 0x19ceacu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 11), 1));
label_19ceb0:
    // 0x19ceb0: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x19ceb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_19ceb4:
    // 0x19ceb4: 0xf11821  addu        $v1, $a3, $s1
    ctx->pc = 0x19ceb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 17)));
label_19ceb8:
    // 0x19ceb8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x19ceb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_19cebc:
    // 0x19cebc: 0x10000006  b           . + 4 + (0x6 << 2)
label_19cec0:
    if (ctx->pc == 0x19CEC0u) {
        ctx->pc = 0x19CEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CEBCu;
        // 0x19cec0: 0x433021  addu        $a2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19CEC4u;
        goto label_19cec4;
    }
    ctx->pc = 0x19CEBCu;
    {
        const bool branch_taken_0x19cebc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19CEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CEBCu;
        // 0x19cec0: 0x433021  addu        $a2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19cebc) {
            ctx->pc = 0x19CED8u;
            goto label_19ced8;
        }
    }
    ctx->pc = 0x19CEC4u;
label_19cec4:
    // 0x19cec4: 0x51083  sra         $v0, $a1, 2
    ctx->pc = 0x19cec4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 5), 2));
label_19cec8:
    // 0x19cec8: 0xb1843  sra         $v1, $t3, 1
    ctx->pc = 0x19cec8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 11), 1));
label_19cecc:
    // 0x19cecc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19ceccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_19ced0:
    // 0x19ced0: 0xf12021  addu        $a0, $a3, $s1
    ctx->pc = 0x19ced0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 17)));
label_19ced4:
    // 0x19ced4: 0x443021  addu        $a2, $v0, $a0
    ctx->pc = 0x19ced4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_19ced8:
    // 0x19ced8: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x19ced8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_19cedc:
    // 0x19cedc: 0x650c3  sra         $t2, $a2, 3
    ctx->pc = 0x19cedcu;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 6), 3));
label_19cee0:
    // 0x19cee0: 0x8fac0008  lw          $t4, 0x8($sp)
    ctx->pc = 0x19cee0u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_19cee4:
    // 0x19cee4: 0xa20c0  sll         $a0, $t2, 3
    ctx->pc = 0x19cee4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
label_19cee8:
    // 0x19cee8: 0xa71021  addu        $v0, $a1, $a3
    ctx->pc = 0x19cee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
label_19ceec:
    // 0x19ceec: 0x32730001  andi        $s3, $s3, 0x1
    ctx->pc = 0x19ceecu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
label_19cef0:
    // 0x19cef0: 0x838c3  sra         $a3, $t0, 3
    ctx->pc = 0x19cef0u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 8), 3));
label_19cef4:
    // 0x19cef4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x19cef4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_19cef8:
    // 0x19cef8: 0x24420200  addiu       $v0, $v0, 0x200
    ctx->pc = 0x19cef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
label_19cefc:
    // 0x19cefc: 0x718c0  sll         $v1, $a3, 3
    ctx->pc = 0x19cefcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_19cf00:
    // 0x19cf00: 0x1031823  subu        $v1, $t0, $v1
    ctx->pc = 0x19cf00u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
label_19cf04:
    // 0x19cf04: 0x1821021  addu        $v0, $t4, $v0
    ctx->pc = 0x19cf04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
label_19cf08:
    // 0x19cf08: 0xc43023  subu        $a2, $a2, $a0
    ctx->pc = 0x19cf08u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_19cf0c:
    // 0x19cf0c: 0x32d90001  andi        $t9, $s6, 0x1
    ctx->pc = 0x19cf0cu;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)1);
label_19cf10:
    // 0x19cf10: 0xade30004  sw          $v1, 0x4($t7)
    ctx->pc = 0x19cf10u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4), GPR_U32(ctx, 3));
label_19cf14:
    // 0x19cf14: 0x1320000f  beqz        $t9, . + 4 + (0xF << 2)
label_19cf18:
    if (ctx->pc == 0x19CF18u) {
        ctx->pc = 0x19CF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CF14u;
        // 0x19cf18: 0xade20000  sw          $v0, 0x0($t7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19CF1Cu;
        goto label_19cf1c;
    }
    ctx->pc = 0x19CF14u;
    {
        const bool branch_taken_0x19cf14 = (GPR_U64(ctx, 25) == GPR_U64(ctx, 0));
        ctx->pc = 0x19CF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CF14u;
        // 0x19cf18: 0xade20000  sw          $v0, 0x0($t7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19cf14) {
            ctx->pc = 0x19CF54u;
            goto label_19cf54;
        }
    }
    ctx->pc = 0x19CF1Cu;
label_19cf1c:
    // 0x19cf1c: 0x1a91004  sllv        $v0, $t1, $t5
    ctx->pc = 0x19cf1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 13) & 0x1F));
label_19cf20:
    // 0x19cf20: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x19cf20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_19cf24:
    // 0x19cf24: 0x28420008  slti        $v0, $v0, 0x8
    ctx->pc = 0x19cf24u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
label_19cf28:
    // 0x19cf28: 0x54400017  bnel        $v0, $zero, . + 4 + (0x17 << 2)
label_19cf2c:
    if (ctx->pc == 0x19CF2Cu) {
        ctx->pc = 0x19CF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CF28u;
        // 0x19cf2c: 0xade90008  sw          $t1, 0x8($t7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 15), 8), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19CF30u;
        goto label_19cf30;
    }
    ctx->pc = 0x19CF28u;
    {
        const bool branch_taken_0x19cf28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19cf28) {
            ctx->pc = 0x19CF2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19CF28u;
            // 0x19cf2c: 0xade90008  sw          $t1, 0x8($t7) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 15), 8), GPR_U32(ctx, 9));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19CF88u;
            goto label_19cf88;
        }
    }
    ctx->pc = 0x19CF30u;
label_19cf30:
    // 0x19cf30: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x19cf30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_19cf34:
    // 0x19cf34: 0x1a61807  srav        $v1, $a2, $t5
    ctx->pc = 0x19cf34u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 6), GPR_U32(ctx, 13) & 0x1F));
label_19cf38:
    // 0x19cf38: 0x1a21007  srav        $v0, $v0, $t5
    ctx->pc = 0x19cf38u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 13) & 0x1F));
label_19cf3c:
    // 0x19cf3c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x19cf3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_19cf40:
    // 0x19cf40: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x19cf40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_19cf44:
    // 0x19cf44: 0x1221823  subu        $v1, $t1, $v0
    ctx->pc = 0x19cf44u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
label_19cf48:
    // 0x19cf48: 0xade20008  sw          $v0, 0x8($t7)
    ctx->pc = 0x19cf48u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 8), GPR_U32(ctx, 2));
label_19cf4c:
    // 0x19cf4c: 0x1000000f  b           . + 4 + (0xF << 2)
label_19cf50:
    if (ctx->pc == 0x19CF50u) {
        ctx->pc = 0x19CF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CF4Cu;
        // 0x19cf50: 0xade3000c  sw          $v1, 0xC($t7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 15), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19CF54u;
        goto label_19cf54;
    }
    ctx->pc = 0x19CF4Cu;
    {
        const bool branch_taken_0x19cf4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19CF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CF4Cu;
        // 0x19cf50: 0xade3000c  sw          $v1, 0xC($t7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 15), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19cf4c) {
            ctx->pc = 0x19CF8Cu;
            goto label_19cf8c;
        }
    }
    ctx->pc = 0x19CF54u;
label_19cf54:
    // 0x19cf54: 0x1a91004  sllv        $v0, $t1, $t5
    ctx->pc = 0x19cf54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 13) & 0x1F));
label_19cf58:
    // 0x19cf58: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x19cf58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_19cf5c:
    // 0x19cf5c: 0x28420009  slti        $v0, $v0, 0x9
    ctx->pc = 0x19cf5cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)9) ? 1 : 0);
label_19cf60:
    // 0x19cf60: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
label_19cf64:
    if (ctx->pc == 0x19CF64u) {
        ctx->pc = 0x19CF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CF60u;
        // 0x19cf64: 0xade90008  sw          $t1, 0x8($t7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 15), 8), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19CF68u;
        goto label_19cf68;
    }
    ctx->pc = 0x19CF60u;
    {
        const bool branch_taken_0x19cf60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19cf60) {
            ctx->pc = 0x19CF64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19CF60u;
            // 0x19cf64: 0xade90008  sw          $t1, 0x8($t7) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 15), 8), GPR_U32(ctx, 9));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19CF88u;
            goto label_19cf88;
        }
    }
    ctx->pc = 0x19CF68u;
label_19cf68:
    // 0x19cf68: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x19cf68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_19cf6c:
    // 0x19cf6c: 0x1a61807  srav        $v1, $a2, $t5
    ctx->pc = 0x19cf6cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 6), GPR_U32(ctx, 13) & 0x1F));
label_19cf70:
    // 0x19cf70: 0x1a21007  srav        $v0, $v0, $t5
    ctx->pc = 0x19cf70u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 13) & 0x1F));
label_19cf74:
    // 0x19cf74: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x19cf74u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_19cf78:
    // 0x19cf78: 0x1222023  subu        $a0, $t1, $v0
    ctx->pc = 0x19cf78u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
label_19cf7c:
    // 0x19cf7c: 0xade20008  sw          $v0, 0x8($t7)
    ctx->pc = 0x19cf7cu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 8), GPR_U32(ctx, 2));
label_19cf80:
    // 0x19cf80: 0x10000002  b           . + 4 + (0x2 << 2)
label_19cf84:
    if (ctx->pc == 0x19CF84u) {
        ctx->pc = 0x19CF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CF80u;
        // 0x19cf84: 0xade4000c  sw          $a0, 0xC($t7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 15), 12), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19CF88u;
        goto label_19cf88;
    }
    ctx->pc = 0x19CF80u;
    {
        const bool branch_taken_0x19cf80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19CF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CF80u;
        // 0x19cf84: 0xade4000c  sw          $a0, 0xC($t7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 15), 12), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19cf80) {
            ctx->pc = 0x19CF8Cu;
            goto label_19cf8c;
        }
    }
    ctx->pc = 0x19CF88u;
label_19cf88:
    // 0x19cf88: 0xade0000c  sw          $zero, 0xC($t7)
    ctx->pc = 0x19cf88u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 12), GPR_U32(ctx, 0));
label_19cf8c:
    // 0x19cf8c: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x19cf8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_19cf90:
    // 0x19cf90: 0xf42023  subu        $a0, $a3, $s4
    ctx->pc = 0x19cf90u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 20)));
label_19cf94:
    // 0x19cf94: 0x1a21004  sllv        $v0, $v0, $t5
    ctx->pc = 0x19cf94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 13) & 0x1F));
label_19cf98:
    // 0x19cf98: 0x1551823  subu        $v1, $t2, $s5
    ctx->pc = 0x19cf98u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 21)));
label_19cf9c:
    // 0x19cf9c: 0xade20010  sw          $v0, 0x10($t7)
    ctx->pc = 0x19cf9cu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 16), GPR_U32(ctx, 2));
label_19cfa0:
    // 0x19cfa0: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x19cfa0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_19cfa4:
    // 0x19cfa4: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x19cfa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_19cfa8:
    // 0x19cfa8: 0x24050140  addiu       $a1, $zero, 0x140
    ctx->pc = 0x19cfa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
label_19cfac:
    // 0x19cfac: 0x8fa7000c  lw          $a3, 0xC($sp)
    ctx->pc = 0x19cfacu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_19cfb0:
    // 0x19cfb0: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x19cfb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
label_19cfb4:
    // 0x19cfb4: 0x8f080810  lw          $t0, 0x810($t8)
    ctx->pc = 0x19cfb4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 2064)));
label_19cfb8:
    // 0x19cfb8: 0x240a0180  addiu       $t2, $zero, 0x180
    ctx->pc = 0x19cfb8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
label_19cfbc:
    // 0x19cfbc: 0x8fac0010  lw          $t4, 0x10($sp)
    ctx->pc = 0x19cfbcu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_19cfc0:
    // 0x19cfc0: 0x244258d0  addiu       $v0, $v0, 0x58D0
    ctx->pc = 0x19cfc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22736));
label_19cfc4:
    // 0x19cfc4: 0x1054018  mult        $t0, $t0, $a1
    ctx->pc = 0x19cfc4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
label_19cfc8:
    // 0x19cfc8: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x19cfc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_19cfcc:
    // 0x19cfcc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x19cfccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_19cfd0:
    // 0x19cfd0: 0x8a2818  mult        $a1, $a0, $t2
    ctx->pc = 0x19cfd0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_19cfd4:
    // 0x19cfd4: 0x18a6818  mult        $t5, $t4, $t2
    ctx->pc = 0x19cfd4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
label_19cfd8:
    // 0x19cfd8: 0x8fcb0010  lw          $t3, 0x10($fp)
    ctx->pc = 0x19cfd8u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
label_19cfdc:
    // 0x19cfdc: 0x8c6c0000  lw          $t4, 0x0($v1)
    ctx->pc = 0x19cfdcu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_19cfe0:
    // 0x19cfe0: 0x173880  sll         $a3, $s7, 2
    ctx->pc = 0x19cfe0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 23), 2));
label_19cfe4:
    // 0x19cfe4: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x19cfe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_19cfe8:
    // 0x19cfe8: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x19cfe8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_19cfec:
    // 0x19cfec: 0xb22021  addu        $a0, $a1, $s2
    ctx->pc = 0x19cfecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
label_19cff0:
    // 0x19cff0: 0x131040  sll         $v0, $s3, 1
    ctx->pc = 0x19cff0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
label_19cff4:
    // 0x19cff4: 0x6b5821  addu        $t3, $v1, $t3
    ctx->pc = 0x19cff4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
label_19cff8:
    // 0x19cff8: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x19cff8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_19cffc:
    // 0x19cffc: 0x3071821  addu        $v1, $t8, $a3
    ctx->pc = 0x19cffcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 7)));
label_19d000:
    // 0x19d000: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x19d000u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_19d004:
    // 0x19d004: 0xac6c05b8  sw          $t4, 0x5B8($v1)
    ctx->pc = 0x19d004u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1464), GPR_U32(ctx, 12));
label_19d008:
    // 0x19d008: 0xa21025  or          $v0, $a1, $v0
    ctx->pc = 0x19d008u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_19d00c:
    // 0x19d00c: 0x8fac0014  lw          $t4, 0x14($sp)
    ctx->pc = 0x19d00cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_19d010:
    // 0x19d010: 0x24c30400  addiu       $v1, $a2, 0x400
    ctx->pc = 0x19d010u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 1024));
label_19d014:
    // 0x19d014: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x19d014u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_19d018:
    // 0x19d018: 0x591025  or          $v0, $v0, $t9
    ctx->pc = 0x19d018u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 25));
label_19d01c:
    // 0x19d01c: 0x1884021  addu        $t0, $t4, $t0
    ctx->pc = 0x19d01cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 8)));
label_19d020:
    // 0x19d020: 0x24c60100  addiu       $a2, $a2, 0x100
    ctx->pc = 0x19d020u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 256));
label_19d024:
    // 0x19d024: 0x16a6018  mult        $t4, $t3, $t2
    ctx->pc = 0x19d024u;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
label_19d028:
    // 0x19d028: 0x3c050028  lui         $a1, 0x28
    ctx->pc = 0x19d028u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)40 << 16));
label_19d02c:
    // 0x19d02c: 0x8fc90000  lw          $t1, 0x0($fp)
    ctx->pc = 0x19d02cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_19d030:
    // 0x19d030: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x19d030u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_19d034:
    // 0x19d034: 0x24a558f0  addiu       $a1, $a1, 0x58F0
    ctx->pc = 0x19d034u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22768));
label_19d038:
    // 0x19d038: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x19d038u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_19d03c:
    // 0x19d03c: 0xade40014  sw          $a0, 0x14($t7)
    ctx->pc = 0x19d03cu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 20), GPR_U32(ctx, 4));
label_19d040:
    // 0x19d040: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x19d040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_19d044:
    // 0x19d044: 0xade30018  sw          $v1, 0x18($t7)
    ctx->pc = 0x19d044u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 24), GPR_U32(ctx, 3));
label_19d048:
    // 0x19d048: 0x3072021  addu        $a0, $t8, $a3
    ctx->pc = 0x19d048u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 7)));
label_19d04c:
    // 0x19d04c: 0x1895821  addu        $t3, $t4, $t1
    ctx->pc = 0x19d04cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 9)));
label_19d050:
    // 0x19d050: 0x8d050000  lw          $a1, 0x0($t0)
    ctx->pc = 0x19d050u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_19d054:
    // 0x19d054: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x19d054u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19d058:
    // 0x19d058: 0x12d4821  addu        $t1, $t1, $t5
    ctx->pc = 0x19d058u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 13)));
label_19d05c:
    // 0x19d05c: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x19d05cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_19d060:
    // 0x19d060: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x19d060u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_19d064:
    // 0x19d064: 0xac890598  sw          $t1, 0x598($a0)
    ctx->pc = 0x19d064u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1432), GPR_U32(ctx, 9));
label_19d068:
    // 0x19d068: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x19d068u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_19d06c:
    // 0x19d06c: 0xdfbe00a0  ld          $fp, 0xA0($sp)
    ctx->pc = 0x19d06cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_19d070:
    // 0x19d070: 0xdfb70090  ld          $s7, 0x90($sp)
    ctx->pc = 0x19d070u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_19d074:
    // 0x19d074: 0xdfb60080  ld          $s6, 0x80($sp)
    ctx->pc = 0x19d074u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_19d078:
    // 0x19d078: 0xdfb50070  ld          $s5, 0x70($sp)
    ctx->pc = 0x19d078u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_19d07c:
    // 0x19d07c: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x19d07cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_19d080:
    // 0x19d080: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x19d080u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_19d084:
    // 0x19d084: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x19d084u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_19d088:
    // 0x19d088: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x19d088u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_19d08c:
    // 0x19d08c: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x19d08cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_19d090:
    // 0x19d090: 0xac6605c8  sw          $a2, 0x5C8($v1)
    ctx->pc = 0x19d090u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1480), GPR_U32(ctx, 6));
label_19d094:
    // 0x19d094: 0xaceb05a8  sw          $t3, 0x5A8($a3)
    ctx->pc = 0x19d094u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 1448), GPR_U32(ctx, 11));
label_19d098:
    // 0x19d098: 0xad050000  sw          $a1, 0x0($t0)
    ctx->pc = 0x19d098u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 5));
label_19d09c:
    // 0x19d09c: 0x3e00008  jr          $ra
label_19d0a0:
    if (ctx->pc == 0x19D0A0u) {
        ctx->pc = 0x19D0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D09Cu;
        // 0x19d0a0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19D0A4u;
        goto label_19d0a4;
    }
    ctx->pc = 0x19D09Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19D0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D09Cu;
        // 0x19d0a0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19D09Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19D0A4u;
label_19d0a4:
    // 0x19d0a4: 0x0  nop
    ctx->pc = 0x19d0a4u;
    // NOP
label_19d0a8:
    // 0x19d0a8: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x19d0a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_19d0ac:
    // 0x19d0ac: 0x24020140  addiu       $v0, $zero, 0x140
    ctx->pc = 0x19d0acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
label_19d0b0:
    // 0x19d0b0: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x19d0b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
label_19d0b4:
    // 0x19d0b4: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x19d0b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
label_19d0b8:
    // 0x19d0b8: 0xa22818  mult        $a1, $a1, $v0
    ctx->pc = 0x19d0b8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_19d0bc:
    // 0x19d0bc: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x19d0bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_19d0c0:
    // 0x19d0c0: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x19d0c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
label_19d0c4:
    // 0x19d0c4: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x19d0c4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19d0c8:
    // 0x19d0c8: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x19d0c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
label_19d0cc:
    // 0x19d0cc: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x19d0ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
label_19d0d0:
    // 0x19d0d0: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x19d0d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
label_19d0d4:
    // 0x19d0d4: 0x2851021  addu        $v0, $s4, $a1
    ctx->pc = 0x19d0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
label_19d0d8:
    // 0x19d0d8: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x19d0d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
label_19d0dc:
    // 0x19d0dc: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x19d0dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_19d0e0:
    // 0x19d0e0: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x19d0e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
label_19d0e4:
    // 0x19d0e4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x19d0e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_19d0e8:
    // 0x19d0e8: 0x8c4306c8  lw          $v1, 0x6C8($v0)
    ctx->pc = 0x19d0e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1736)));
label_19d0ec:
    // 0x19d0ec: 0x10600027  beqz        $v1, . + 4 + (0x27 << 2)
label_19d0f0:
    if (ctx->pc == 0x19D0F0u) {
        ctx->pc = 0x19D0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D0ECu;
        // 0x19d0f0: 0x268206bc  addiu       $v0, $s4, 0x6BC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 1724));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19D0F4u;
        goto label_19d0f4;
    }
    ctx->pc = 0x19D0ECu;
    {
        const bool branch_taken_0x19d0ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x19D0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D0ECu;
        // 0x19d0f0: 0x268206bc  addiu       $v0, $s4, 0x6BC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 1724));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d0ec) {
            ctx->pc = 0x19D18Cu;
            goto label_19d18c;
        }
    }
    ctx->pc = 0x19D0F4u;
label_19d0f4:
    // 0x19d0f4: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x19d0f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
label_19d0f8:
    // 0x19d0f8: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x19d0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_19d0fc:
    // 0x19d0fc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x19d0fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_19d100:
    // 0x19d100: 0x18600026  blez        $v1, . + 4 + (0x26 << 2)
label_19d104:
    if (ctx->pc == 0x19D104u) {
        ctx->pc = 0x19D104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D100u;
        // 0x19d104: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19D108u;
        goto label_19d108;
    }
    ctx->pc = 0x19D100u;
    {
        const bool branch_taken_0x19d100 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x19D104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D100u;
        // 0x19d104: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d100) {
            ctx->pc = 0x19D19Cu;
            goto label_19d19c;
        }
    }
    ctx->pc = 0x19D108u;
label_19d108:
    // 0x19d108: 0x268306c0  addiu       $v1, $s4, 0x6C0
    ctx->pc = 0x19d108u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 1728));
label_19d10c:
    // 0x19d10c: 0x269705b8  addiu       $s7, $s4, 0x5B8
    ctx->pc = 0x19d10cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 20), 1464));
label_19d110:
    // 0x19d110: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x19d110u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
label_19d114:
    // 0x19d114: 0x269605c8  addiu       $s6, $s4, 0x5C8
    ctx->pc = 0x19d114u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 20), 1480));
label_19d118:
    // 0x19d118: 0x269e06b8  addiu       $fp, $s4, 0x6B8
    ctx->pc = 0x19d118u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 20), 1720));
label_19d11c:
    // 0x19d11c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x19d11cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_19d120:
    // 0x19d120: 0x24110140  addiu       $s1, $zero, 0x140
    ctx->pc = 0x19d120u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
label_19d124:
    // 0x19d124: 0x2413001c  addiu       $s3, $zero, 0x1C
    ctx->pc = 0x19d124u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_19d128:
    // 0x19d128: 0x158080  sll         $s0, $s5, 2
    ctx->pc = 0x19d128u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
label_19d12c:
    // 0x19d12c: 0x518818  mult        $s1, $v0, $s1
    ctx->pc = 0x19d12cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
label_19d130:
    // 0x19d130: 0x72b39818  mult1       $s3, $s5, $s3
    ctx->pc = 0x19d130u;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 19); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 19, (int32_t)result); }
label_19d134:
    // 0x19d134: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x19d134u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_19d138:
    // 0x19d138: 0x2118021  addu        $s0, $s0, $s1
    ctx->pc = 0x19d138u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
label_19d13c:
    // 0x19d13c: 0x26320590  addiu       $s2, $s1, 0x590
    ctx->pc = 0x19d13cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 1424));
label_19d140:
    // 0x19d140: 0x2f01021  addu        $v0, $s7, $s0
    ctx->pc = 0x19d140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 16)));
label_19d144:
    // 0x19d144: 0x2929021  addu        $s2, $s4, $s2
    ctx->pc = 0x19d144u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
label_19d148:
    // 0x19d148: 0x26640048  addiu       $a0, $s3, 0x48
    ctx->pc = 0x19d148u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 72));
label_19d14c:
    // 0x19d14c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x19d14cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_19d150:
    // 0x19d150: 0x60f809  jalr        $v1
label_19d154:
    if (ctx->pc == 0x19D154u) {
        ctx->pc = 0x19D154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D150u;
        // 0x19d154: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19D158u;
        goto label_19d158;
    }
    ctx->pc = 0x19D150u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x19D158u);
        ctx->pc = 0x19D154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D150u;
        // 0x19d154: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19D150u, 0x19D158u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19D158u;
label_19d158:
    // 0x19d158: 0x2d08021  addu        $s0, $s6, $s0
    ctx->pc = 0x19d158u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 16)));
label_19d15c:
    // 0x19d15c: 0x267300b8  addiu       $s3, $s3, 0xB8
    ctx->pc = 0x19d15cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 184));
label_19d160:
    // 0x19d160: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x19d160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_19d164:
    // 0x19d164: 0x40f809  jalr        $v0
label_19d168:
    if (ctx->pc == 0x19D168u) {
        ctx->pc = 0x19D168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D164u;
        // 0x19d168: 0x2532021  addu        $a0, $s2, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19D16Cu;
        goto label_19d16c;
    }
    ctx->pc = 0x19D164u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19D16Cu);
        ctx->pc = 0x19D168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D164u;
        // 0x19d168: 0x2532021  addu        $a0, $s2, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19D164u, 0x19D16Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19D16Cu;
label_19d16c:
    // 0x19d16c: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x19d16cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_19d170:
    // 0x19d170: 0x718821  addu        $s1, $v1, $s1
    ctx->pc = 0x19d170u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_19d174:
    // 0x19d174: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x19d174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_19d178:
    // 0x19d178: 0x2a2102a  slt         $v0, $s5, $v0
    ctx->pc = 0x19d178u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_19d17c:
    // 0x19d17c: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
label_19d180:
    if (ctx->pc == 0x19D180u) {
        ctx->pc = 0x19D180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D17Cu;
        // 0x19d180: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19D184u;
        goto label_19d184;
    }
    ctx->pc = 0x19D17Cu;
    {
        const bool branch_taken_0x19d17c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19D180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D17Cu;
        // 0x19d180: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d17c) {
            ctx->pc = 0x19D120u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19d120;
        }
    }
    ctx->pc = 0x19D184u;
label_19d184:
    // 0x19d184: 0x10000009  b           . + 4 + (0x9 << 2)
label_19d188:
    if (ctx->pc == 0x19D188u) {
        ctx->pc = 0x19D188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D184u;
        // 0x19d188: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19D18Cu;
        goto label_19d18c;
    }
    ctx->pc = 0x19D184u;
    {
        const bool branch_taken_0x19d184 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19D188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D184u;
        // 0x19d188: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d184) {
            ctx->pc = 0x19D1ACu;
            goto label_19d1ac;
        }
    }
    ctx->pc = 0x19D18Cu;
label_19d18c:
    // 0x19d18c: 0x268206c0  addiu       $v0, $s4, 0x6C0
    ctx->pc = 0x19d18cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 1728));
label_19d190:
    // 0x19d190: 0x269e06b8  addiu       $fp, $s4, 0x6B8
    ctx->pc = 0x19d190u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 20), 1720));
label_19d194:
    // 0x19d194: 0x10000004  b           . + 4 + (0x4 << 2)
label_19d198:
    if (ctx->pc == 0x19D198u) {
        ctx->pc = 0x19D198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D194u;
        // 0x19d198: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19D19Cu;
        goto label_19d19c;
    }
    ctx->pc = 0x19D194u;
    {
        const bool branch_taken_0x19d194 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19D198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D194u;
        // 0x19d198: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d194) {
            ctx->pc = 0x19D1A8u;
            goto label_19d1a8;
        }
    }
    ctx->pc = 0x19D19Cu;
label_19d19c:
    // 0x19d19c: 0x268306c0  addiu       $v1, $s4, 0x6C0
    ctx->pc = 0x19d19cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 1728));
label_19d1a0:
    // 0x19d1a0: 0x269e06b8  addiu       $fp, $s4, 0x6B8
    ctx->pc = 0x19d1a0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 20), 1720));
label_19d1a4:
    // 0x19d1a4: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x19d1a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
label_19d1a8:
    // 0x19d1a8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x19d1a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_19d1ac:
    // 0x19d1ac: 0x24020140  addiu       $v0, $zero, 0x140
    ctx->pc = 0x19d1acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
label_19d1b0:
    // 0x19d1b0: 0x622018  mult        $a0, $v1, $v0
    ctx->pc = 0x19d1b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_19d1b4:
    // 0x19d1b4: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x19d1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_19d1b8:
    // 0x19d1b8: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x19d1b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_19d1bc:
    // 0x19d1bc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x19d1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_19d1c0:
    // 0x19d1c0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_19d1c4:
    if (ctx->pc == 0x19D1C4u) {
        ctx->pc = 0x19D1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D1C0u;
        // 0x19d1c4: 0x2841021  addu        $v0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19D1C8u;
        goto label_19d1c8;
    }
    ctx->pc = 0x19D1C0u;
    {
        const bool branch_taken_0x19d1c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19D1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D1C0u;
        // 0x19d1c4: 0x2841021  addu        $v0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d1c0) {
            ctx->pc = 0x19D1E0u;
            goto label_19d1e0;
        }
    }
    ctx->pc = 0x19D1C8u;
label_19d1c8:
    // 0x19d1c8: 0x8c4306cc  lw          $v1, 0x6CC($v0)
    ctx->pc = 0x19d1c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1740)));
label_19d1cc:
    // 0x19d1cc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_19d1d0:
    if (ctx->pc == 0x19D1D0u) {
        ctx->pc = 0x19D1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D1CCu;
        // 0x19d1d0: 0x3c05002d  lui         $a1, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19D1D4u;
        goto label_19d1d4;
    }
    ctx->pc = 0x19D1CCu;
    {
        const bool branch_taken_0x19d1cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x19D1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D1CCu;
        // 0x19d1d0: 0x3c05002d  lui         $a1, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d1cc) {
            ctx->pc = 0x19D1E0u;
            goto label_19d1e0;
        }
    }
    ctx->pc = 0x19D1D4u;
label_19d1d4:
    // 0x19d1d4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x19d1d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_19d1d8:
    // 0x19d1d8: 0xc068d2c  jal         func_1A34B0
label_19d1dc:
    if (ctx->pc == 0x19D1DCu) {
        ctx->pc = 0x19D1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D1D8u;
        // 0x19d1dc: 0x24a5a030  addiu       $a1, $a1, -0x5FD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942768));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19D1E0u;
        goto label_19d1e0;
    }
    ctx->pc = 0x19D1D8u;
    SET_GPR_U32(ctx, 31, 0x19D1E0u);
    ctx->pc = 0x19D1DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19D1D8u;
    // 0x19d1dc: 0x24a5a030  addiu       $a1, $a1, -0x5FD0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A34B0u;
    { ctx->pc = 0x1a34b0; return; }
    ctx->pc = 0x19D1E0u;
label_19d1e0:
    // 0x19d1e0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x19d1e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_19d1e4:
    // 0x19d1e4: 0x24020140  addiu       $v0, $zero, 0x140
    ctx->pc = 0x19d1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
label_19d1e8:
    // 0x19d1e8: 0x622818  mult        $a1, $v1, $v0
    ctx->pc = 0x19d1e8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_19d1ec:
    // 0x19d1ec: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x19d1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_19d1f0:
    // 0x19d1f0: 0x451821  addu        $v1, $v0, $a1
    ctx->pc = 0x19d1f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_19d1f4:
    // 0x19d1f4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x19d1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_19d1f8:
    // 0x19d1f8: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_19d1fc:
    if (ctx->pc == 0x19D1FCu) {
        ctx->pc = 0x19D1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D1F8u;
        // 0x19d1fc: 0x2851021  addu        $v0, $s4, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19D200u;
        goto label_19d200;
    }
    ctx->pc = 0x19D1F8u;
    {
        const bool branch_taken_0x19d1f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19D1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D1F8u;
        // 0x19d1fc: 0x2851021  addu        $v0, $s4, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d1f8) {
            ctx->pc = 0x19D240u;
            goto label_19d240;
        }
    }
    ctx->pc = 0x19D200u;
label_19d200:
    // 0x19d200: 0x3c51021  addu        $v0, $fp, $a1
    ctx->pc = 0x19d200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 5)));
label_19d204:
    // 0x19d204: 0x2851821  addu        $v1, $s4, $a1
    ctx->pc = 0x19d204u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
label_19d208:
    // 0x19d208: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x19d208u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_19d20c:
    // 0x19d20c: 0x8c650594  lw          $a1, 0x594($v1)
    ctx->pc = 0x19d20cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1428)));
label_19d210:
    // 0x19d210: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x19d210u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_19d214:
    // 0x19d214: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x19d214u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_19d218:
    // 0x19d218: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x19d218u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_19d21c:
    // 0x19d21c: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x19d21cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_19d220:
    // 0x19d220: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x19d220u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_19d224:
    // 0x19d224: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x19d224u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_19d228:
    // 0x19d228: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x19d228u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_19d22c:
    // 0x19d22c: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x19d22cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_19d230:
    // 0x19d230: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x19d230u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_19d234:
    // 0x19d234: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x19d234u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_19d238:
    // 0x19d238: 0x8067806  j           func_19E018
label_19d23c:
    if (ctx->pc == 0x19D23Cu) {
        ctx->pc = 0x19D23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D238u;
        // 0x19d23c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19D240u;
        goto label_19d240;
    }
    ctx->pc = 0x19D238u;
    ctx->pc = 0x19D23Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19D238u;
    // 0x19d23c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19E018u;
    { ctx->pc = 0x19e018; return; }
    ctx->pc = 0x19D240u;
label_19d240:
    // 0x19d240: 0x8c4306cc  lw          $v1, 0x6CC($v0)
    ctx->pc = 0x19d240u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1740)));
label_19d244:
    // 0x19d244: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
label_19d248:
    if (ctx->pc == 0x19D248u) {
        ctx->pc = 0x19D248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D244u;
        // 0x19d248: 0x3c51021  addu        $v0, $fp, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19D24Cu;
        goto label_19d24c;
    }
    ctx->pc = 0x19D244u;
    {
        const bool branch_taken_0x19d244 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x19D248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D244u;
        // 0x19d248: 0x3c51021  addu        $v0, $fp, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d244) {
            ctx->pc = 0x19D284u;
            goto label_19d284;
        }
    }
    ctx->pc = 0x19D24Cu;
label_19d24c:
    // 0x19d24c: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x19d24cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_19d250:
    // 0x19d250: 0x8e85081c  lw          $a1, 0x81C($s4)
    ctx->pc = 0x19d250u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2076)));
label_19d254:
    // 0x19d254: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x19d254u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_19d258:
    // 0x19d258: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x19d258u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_19d25c:
    // 0x19d25c: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x19d25cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_19d260:
    // 0x19d260: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x19d260u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_19d264:
    // 0x19d264: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x19d264u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_19d268:
    // 0x19d268: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x19d268u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_19d26c:
    // 0x19d26c: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x19d26cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_19d270:
    // 0x19d270: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x19d270u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_19d274:
    // 0x19d274: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x19d274u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_19d278:
    // 0x19d278: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x19d278u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_19d27c:
    // 0x19d27c: 0x8067806  j           func_19E018
label_19d280:
    if (ctx->pc == 0x19D280u) {
        ctx->pc = 0x19D280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D27Cu;
        // 0x19d280: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19D284u;
        goto label_19d284;
    }
    ctx->pc = 0x19D27Cu;
    ctx->pc = 0x19D280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19D27Cu;
    // 0x19d280: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19E018u;
    { ctx->pc = 0x19e018; return; }
    ctx->pc = 0x19D284u;
label_19d284:
    // 0x19d284: 0x2851821  addu        $v1, $s4, $a1
    ctx->pc = 0x19d284u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
label_19d288:
    // 0x19d288: 0x8e85081c  lw          $a1, 0x81C($s4)
    ctx->pc = 0x19d288u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2076)));
label_19d28c:
    // 0x19d28c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x19d28cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_19d290:
    // 0x19d290: 0x8c660594  lw          $a2, 0x594($v1)
    ctx->pc = 0x19d290u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1428)));
label_19d294:
    // 0x19d294: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x19d294u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_19d298:
    // 0x19d298: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x19d298u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_19d29c:
    // 0x19d29c: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x19d29cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_19d2a0:
    // 0x19d2a0: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x19d2a0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_19d2a4:
    // 0x19d2a4: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x19d2a4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_19d2a8:
    // 0x19d2a8: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x19d2a8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_19d2ac:
    // 0x19d2ac: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x19d2acu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_19d2b0:
    // 0x19d2b0: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x19d2b0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_19d2b4:
    // 0x19d2b4: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x19d2b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_19d2b8:
    // 0x19d2b8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x19d2b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_19d2bc:
    // 0x19d2bc: 0x80677ee  j           func_19DFB8
label_19d2c0:
    if (ctx->pc == 0x19D2C0u) {
        ctx->pc = 0x19D2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D2BCu;
        // 0x19d2c0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19D2C4u;
        goto label_19d2c4;
    }
    ctx->pc = 0x19D2BCu;
    ctx->pc = 0x19D2C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19D2BCu;
    // 0x19d2c0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19DFB8u;
    { ctx->pc = 0x19dfb8; return; }
    ctx->pc = 0x19D2C4u;
label_19d2c4:
    // 0x19d2c4: 0x0  nop
    ctx->pc = 0x19d2c4u;
    // NOP
label_19d2c8:
    // 0x19d2c8: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x19d2c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_19d2cc:
    // 0x19d2cc: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x19d2ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_19d2d0:
    // 0x19d2d0: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x19d2d0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_19d2d4:
    // 0x19d2d4: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x19d2d4u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_19d2d8:
    // 0x19d2d8: 0x8c8d0004  lw          $t5, 0x4($a0)
    ctx->pc = 0x19d2d8u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_19d2dc:
    // 0x19d2dc: 0x8c8c0010  lw          $t4, 0x10($a0)
    ctx->pc = 0x19d2dcu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_19d2e0:
    // 0x19d2e0: 0xc5840  sll         $t3, $t4, 1
    ctx->pc = 0x19d2e0u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 12), 1));
label_19d2e4:
    // 0x19d2e4: 0x240fffff  addiu       $t7, $zero, -0x1
    ctx->pc = 0x19d2e4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_19d2e8:
    // 0x19d2e8: 0x5b80000  mtsab       $t5, 0x0
    ctx->pc = 0x19d2e8u;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)0) & 0xF) << 3;
label_19d2ec:
    // 0x19d2ec: 0x78a80000  lq          $t0, 0x0($a1)
    ctx->pc = 0x19d2ecu;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_19d2f0:
    // 0x19d2f0: 0x20e7ffff  addi        $a3, $a3, -0x1
    ctx->pc = 0x19d2f0u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
label_19d2f4:
    // 0x19d2f4: 0x78c90000  lq          $t1, 0x0($a2)
    ctx->pc = 0x19d2f4u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_19d2f8:
    // 0x19d2f8: 0xac2821  addu        $a1, $a1, $t4
    ctx->pc = 0x19d2f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
label_19d2fc:
    // 0x19d2fc: 0x712856e8  qfsrv       $t2, $t1, $t0
    ctx->pc = 0x19d2fcu;
    SET_GPR_VEC(ctx, 10, PS2_QFSRV(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
label_19d300:
    // 0x19d300: 0x700a4688  pextlb      $t0, $zero, $t2
    ctx->pc = 0x19d300u;
    SET_GPR_VEC(ctx, 8, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 10)));
label_19d304:
    // 0x19d304: 0x700a4ea8  pextub      $t1, $zero, $t2
    ctx->pc = 0x19d304u;
    SET_GPR_VEC(ctx, 9, PS2_PEXTUB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 10)));
label_19d308:
    // 0x19d308: 0x7dc80000  sq          $t0, 0x0($t6)
    ctx->pc = 0x19d308u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 8));
label_19d30c:
    // 0x19d30c: 0xcc3021  addu        $a2, $a2, $t4
    ctx->pc = 0x19d30cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 12)));
label_19d310:
    // 0x19d310: 0x7dc90010  sq          $t1, 0x10($t6)
    ctx->pc = 0x19d310u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 16), GPR_VEC(ctx, 9));
label_19d314:
    // 0x19d314: 0x1ce0fff5  bgtz        $a3, . + 4 + (-0xB << 2)
label_19d318:
    if (ctx->pc == 0x19D318u) {
        ctx->pc = 0x19D318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D314u;
        // 0x19d318: 0x1cb7021  addu        $t6, $t6, $t3 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 11)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19D31Cu;
        goto label_19d31c;
    }
    ctx->pc = 0x19D314u;
    {
        const bool branch_taken_0x19d314 = (GPR_S32(ctx, 7) > 0);
        ctx->pc = 0x19D318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D314u;
        // 0x19d318: 0x1cb7021  addu        $t6, $t6, $t3 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 11)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d314) {
            ctx->pc = 0x19D2ECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19d2ec;
        }
    }
    ctx->pc = 0x19D31Cu;
label_19d31c:
    // 0x19d31c: 0x24a50080  addiu       $a1, $a1, 0x80
    ctx->pc = 0x19d31cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
label_19d320:
    // 0x19d320: 0x24c60080  addiu       $a2, $a2, 0x80
    ctx->pc = 0x19d320u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
label_19d324:
    // 0x19d324: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x19d324u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_19d328:
    // 0x19d328: 0x1e75024  and         $t2, $t7, $a3
    ctx->pc = 0x19d328u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 15) & GPR_U64(ctx, 7));
label_19d32c:
    // 0x19d32c: 0x1540ffef  bnez        $t2, . + 4 + (-0x11 << 2)
label_19d330:
    if (ctx->pc == 0x19D330u) {
        ctx->pc = 0x19D330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D32Cu;
        // 0x19d330: 0x782d  daddu       $t7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19D334u;
        goto label_19d334;
    }
    ctx->pc = 0x19D32Cu;
    {
        const bool branch_taken_0x19d32c = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x19D330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D32Cu;
        // 0x19d330: 0x782d  daddu       $t7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d32c) {
            ctx->pc = 0x19D2ECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19d2ec;
        }
    }
    ctx->pc = 0x19D334u;
label_19d334:
    // 0x19d334: 0x3e00008  jr          $ra
label_19d338:
    if (ctx->pc == 0x19D338u) {
        ctx->pc = 0x19D33Cu;
        goto label_19d33c;
    }
    ctx->pc = 0x19D334u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19D334u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19D33Cu;
label_19d33c:
    // 0x19d33c: 0x0  nop
    ctx->pc = 0x19d33cu;
    // NOP
label_19d340:
    // 0x19d340: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x19d340u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_19d344:
    // 0x19d344: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x19d344u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_19d348:
    // 0x19d348: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x19d348u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_19d34c:
    // 0x19d34c: 0x8c8d0004  lw          $t5, 0x4($a0)
    ctx->pc = 0x19d34cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_19d350:
    // 0x19d350: 0x8c8c0010  lw          $t4, 0x10($a0)
    ctx->pc = 0x19d350u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_19d354:
    // 0x19d354: 0xc5840  sll         $t3, $t4, 1
    ctx->pc = 0x19d354u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 12), 1));
label_19d358:
    // 0x19d358: 0x5b80000  mtsab       $t5, 0x0
    ctx->pc = 0x19d358u;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)0) & 0xF) << 3;
label_19d35c:
    // 0x19d35c: 0x2418ffff  addiu       $t8, $zero, -0x1
    ctx->pc = 0x19d35cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_19d360:
    // 0x19d360: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x19d360u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_19d364:
    // 0x19d364: 0x240fffff  addiu       $t7, $zero, -0x1
    ctx->pc = 0x19d364u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_19d368:
    // 0x19d368: 0xdca80000  ld          $t0, 0x0($a1)
    ctx->pc = 0x19d368u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 5), 0)));
label_19d36c:
    // 0x19d36c: 0xdcc90000  ld          $t1, 0x0($a2)
    ctx->pc = 0x19d36cu;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 6), 0)));
label_19d370:
    // 0x19d370: 0x71284389  pcpyld      $t0, $t1, $t0
    ctx->pc = 0x19d370u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
label_19d374:
    // 0x19d374: 0x71084ee8  qfsrv       $t1, $t0, $t0
    ctx->pc = 0x19d374u;
    SET_GPR_VEC(ctx, 9, PS2_QFSRV(GPR_VEC(ctx, 8), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
label_19d378:
    // 0x19d378: 0x70094688  pextlb      $t0, $zero, $t1
    ctx->pc = 0x19d378u;
    SET_GPR_VEC(ctx, 8, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 9)));
label_19d37c:
    // 0x19d37c: 0x7dc80000  sq          $t0, 0x0($t6)
    ctx->pc = 0x19d37cu;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 8));
label_19d380:
    // 0x19d380: 0x20e7ffff  addi        $a3, $a3, -0x1
    ctx->pc = 0x19d380u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
label_19d384:
    // 0x19d384: 0xac2821  addu        $a1, $a1, $t4
    ctx->pc = 0x19d384u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
label_19d388:
    // 0x19d388: 0x1cb7021  addu        $t6, $t6, $t3
    ctx->pc = 0x19d388u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 11)));
label_19d38c:
    // 0x19d38c: 0x1ce0fff6  bgtz        $a3, . + 4 + (-0xA << 2)
label_19d390:
    if (ctx->pc == 0x19D390u) {
        ctx->pc = 0x19D390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D38Cu;
        // 0x19d390: 0xcc3021  addu        $a2, $a2, $t4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19D394u;
        goto label_19d394;
    }
    ctx->pc = 0x19D38Cu;
    {
        const bool branch_taken_0x19d38c = (GPR_S32(ctx, 7) > 0);
        ctx->pc = 0x19D390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D38Cu;
        // 0x19d390: 0xcc3021  addu        $a2, $a2, $t4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d38c) {
            ctx->pc = 0x19D368u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19d368;
        }
    }
    ctx->pc = 0x19D394u;
label_19d394:
    // 0x19d394: 0x24a50140  addiu       $a1, $a1, 0x140
    ctx->pc = 0x19d394u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 320));
label_19d398:
    // 0x19d398: 0x24c60140  addiu       $a2, $a2, 0x140
    ctx->pc = 0x19d398u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 320));
label_19d39c:
    // 0x19d39c: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x19d39cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_19d3a0:
    // 0x19d3a0: 0x1e75024  and         $t2, $t7, $a3
    ctx->pc = 0x19d3a0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 15) & GPR_U64(ctx, 7));
label_19d3a4:
    // 0x19d3a4: 0x1540fff0  bnez        $t2, . + 4 + (-0x10 << 2)
label_19d3a8:
    if (ctx->pc == 0x19D3A8u) {
        ctx->pc = 0x19D3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D3A4u;
        // 0x19d3a8: 0x782d  daddu       $t7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19D3ACu;
        goto label_19d3ac;
    }
    ctx->pc = 0x19D3A4u;
    {
        const bool branch_taken_0x19d3a4 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x19D3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D3A4u;
        // 0x19d3a8: 0x782d  daddu       $t7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d3a4) {
            ctx->pc = 0x19D368u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19d368;
        }
    }
    ctx->pc = 0x19D3ACu;
label_19d3ac:
    // 0x19d3ac: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x19d3acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_19d3b0:
    // 0x19d3b0: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x19d3b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_19d3b4:
    // 0x19d3b4: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x19d3b4u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_19d3b8:
    // 0x19d3b8: 0x24a50040  addiu       $a1, $a1, 0x40
    ctx->pc = 0x19d3b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
label_19d3bc:
    // 0x19d3bc: 0x24c60040  addiu       $a2, $a2, 0x40
    ctx->pc = 0x19d3bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
label_19d3c0:
    // 0x19d3c0: 0x25ce0080  addiu       $t6, $t6, 0x80
    ctx->pc = 0x19d3c0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 128));
label_19d3c4:
    // 0x19d3c4: 0x1700ffe6  bnez        $t8, . + 4 + (-0x1A << 2)
label_19d3c8:
    if (ctx->pc == 0x19D3C8u) {
        ctx->pc = 0x19D3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D3C4u;
        // 0x19d3c8: 0xc02d  daddu       $t8, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19D3CCu;
        goto label_19d3cc;
    }
    ctx->pc = 0x19D3C4u;
    {
        const bool branch_taken_0x19d3c4 = (GPR_U64(ctx, 24) != GPR_U64(ctx, 0));
        ctx->pc = 0x19D3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D3C4u;
        // 0x19d3c8: 0xc02d  daddu       $t8, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d3c4) {
            ctx->pc = 0x19D360u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19d360;
        }
    }
    ctx->pc = 0x19D3CCu;
label_19d3cc:
    // 0x19d3cc: 0x3e00008  jr          $ra
label_19d3d0:
    if (ctx->pc == 0x19D3D0u) {
        ctx->pc = 0x19D3D4u;
        goto label_19d3d4;
    }
    ctx->pc = 0x19D3CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19D3CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19D3D4u;
label_19d3d4:
    // 0x19d3d4: 0x0  nop
    ctx->pc = 0x19d3d4u;
    // NOP
label_19d3d8:
    // 0x19d3d8: 0x7000cce9  pnor        $t9, $zero, $zero
    ctx->pc = 0x19d3d8u;
    SET_GPR_VEC(ctx, 25, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_19d3dc:
    // 0x19d3dc: 0x7019cbf6  psrlh       $t9, $t9, 15
    ctx->pc = 0x19d3dcu;
    SET_GPR_VEC(ctx, 25, _mm_srli_epi16(GPR_VEC(ctx, 25), 15));
label_19d3e0:
    // 0x19d3e0: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x19d3e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_19d3e4:
    // 0x19d3e4: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x19d3e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_19d3e8:
    // 0x19d3e8: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x19d3e8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_19d3ec:
    // 0x19d3ec: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x19d3ecu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_19d3f0:
    // 0x19d3f0: 0x8c8d0004  lw          $t5, 0x4($a0)
    ctx->pc = 0x19d3f0u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_19d3f4:
    // 0x19d3f4: 0x8c980010  lw          $t8, 0x10($a0)
    ctx->pc = 0x19d3f4u;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_19d3f8:
    // 0x19d3f8: 0x78a80000  lq          $t0, 0x0($a1)
    ctx->pc = 0x19d3f8u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_19d3fc:
    // 0x19d3fc: 0x186040  sll         $t4, $t8, 1
    ctx->pc = 0x19d3fcu;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 24), 1));
label_19d400:
    // 0x19d400: 0x78c90000  lq          $t1, 0x0($a2)
    ctx->pc = 0x19d400u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_19d404:
    // 0x19d404: 0x5b80000  mtsab       $t5, 0x0
    ctx->pc = 0x19d404u;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)0) & 0xF) << 3;
label_19d408:
    // 0x19d408: 0x712856e8  qfsrv       $t2, $t1, $t0
    ctx->pc = 0x19d408u;
    SET_GPR_VEC(ctx, 10, PS2_QFSRV(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
label_19d40c:
    // 0x19d40c: 0x700a4688  pextlb      $t0, $zero, $t2
    ctx->pc = 0x19d40cu;
    SET_GPR_VEC(ctx, 8, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 10)));
label_19d410:
    // 0x19d410: 0x240bffff  addiu       $t3, $zero, -0x1
    ctx->pc = 0x19d410u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_19d414:
    // 0x19d414: 0x10e00015  beqz        $a3, . + 4 + (0x15 << 2)
label_19d418:
    if (ctx->pc == 0x19D418u) {
        ctx->pc = 0x19D418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D414u;
        // 0x19d418: 0x700a4ea8  pextub      $t1, $zero, $t2 (Delay Slot)
        SET_GPR_VEC(ctx, 9, PS2_PEXTUB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 10)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19D41Cu;
        goto label_19d41c;
    }
    ctx->pc = 0x19D414u;
    {
        const bool branch_taken_0x19d414 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x19D418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D414u;
        // 0x19d418: 0x700a4ea8  pextub      $t1, $zero, $t2 (Delay Slot)
        SET_GPR_VEC(ctx, 9, PS2_PEXTUB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d414) {
            ctx->pc = 0x19D46Cu;
            goto label_19d46c;
        }
    }
    ctx->pc = 0x19D41Cu;
label_19d41c:
    // 0x19d41c: 0xb82821  addu        $a1, $a1, $t8
    ctx->pc = 0x19d41cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 24)));
label_19d420:
    // 0x19d420: 0xd83021  addu        $a2, $a2, $t8
    ctx->pc = 0x19d420u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 24)));
label_19d424:
    // 0x19d424: 0x78aa0000  lq          $t2, 0x0($a1)
    ctx->pc = 0x19d424u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_19d428:
    // 0x19d428: 0x78cf0000  lq          $t7, 0x0($a2)
    ctx->pc = 0x19d428u;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_19d42c:
    // 0x19d42c: 0x71ea16e8  qfsrv       $v0, $t7, $t2
    ctx->pc = 0x19d42cu;
    SET_GPR_VEC(ctx, 2, PS2_QFSRV(GPR_VEC(ctx, 15), GPR_VEC(ctx, 10), ctx->sa & 0x7F));
label_19d430:
    // 0x19d430: 0x70025688  pextlb      $t2, $zero, $v0
    ctx->pc = 0x19d430u;
    SET_GPR_VEC(ctx, 10, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
label_19d434:
    // 0x19d434: 0x20e7ffff  addi        $a3, $a3, -0x1
    ctx->pc = 0x19d434u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
label_19d438:
    // 0x19d438: 0x70027ea8  pextub      $t7, $zero, $v0
    ctx->pc = 0x19d438u;
    SET_GPR_VEC(ctx, 15, PS2_PEXTUB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
label_19d43c:
    // 0x19d43c: 0x710a1108  paddh       $v0, $t0, $t2
    ctx->pc = 0x19d43cu;
    SET_GPR_VEC(ctx, 2, PS2_PADDH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 10)));
label_19d440:
    // 0x19d440: 0x712f1908  paddh       $v1, $t1, $t7
    ctx->pc = 0x19d440u;
    SET_GPR_VEC(ctx, 3, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 15)));
label_19d444:
    // 0x19d444: 0x714044a9  por         $t0, $t2, $zero
    ctx->pc = 0x19d444u;
    SET_GPR_VEC(ctx, 8, PS2_POR(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
label_19d448:
    // 0x19d448: 0x71e04ca9  por         $t1, $t7, $zero
    ctx->pc = 0x19d448u;
    SET_GPR_VEC(ctx, 9, PS2_POR(GPR_VEC(ctx, 15), GPR_VEC(ctx, 0)));
label_19d44c:
    // 0x19d44c: 0x70591108  paddh       $v0, $v0, $t9
    ctx->pc = 0x19d44cu;
    SET_GPR_VEC(ctx, 2, PS2_PADDH(GPR_VEC(ctx, 2), GPR_VEC(ctx, 25)));
label_19d450:
    // 0x19d450: 0x70791908  paddh       $v1, $v1, $t9
    ctx->pc = 0x19d450u;
    SET_GPR_VEC(ctx, 3, PS2_PADDH(GPR_VEC(ctx, 3), GPR_VEC(ctx, 25)));
label_19d454:
    // 0x19d454: 0x70021076  psrlh       $v0, $v0, 1
    ctx->pc = 0x19d454u;
    SET_GPR_VEC(ctx, 2, _mm_srli_epi16(GPR_VEC(ctx, 2), 1));
label_19d458:
    // 0x19d458: 0x70031876  psrlh       $v1, $v1, 1
    ctx->pc = 0x19d458u;
    SET_GPR_VEC(ctx, 3, _mm_srli_epi16(GPR_VEC(ctx, 3), 1));
label_19d45c:
    // 0x19d45c: 0x7dc20000  sq          $v0, 0x0($t6)
    ctx->pc = 0x19d45cu;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 2));
label_19d460:
    // 0x19d460: 0x7dc30010  sq          $v1, 0x10($t6)
    ctx->pc = 0x19d460u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 16), GPR_VEC(ctx, 3));
label_19d464:
    // 0x19d464: 0x1ce0ffed  bgtz        $a3, . + 4 + (-0x13 << 2)
label_19d468:
    if (ctx->pc == 0x19D468u) {
        ctx->pc = 0x19D468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D464u;
        // 0x19d468: 0x1cc7021  addu        $t6, $t6, $t4 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19D46Cu;
        goto label_19d46c;
    }
    ctx->pc = 0x19D464u;
    {
        const bool branch_taken_0x19d464 = (GPR_S32(ctx, 7) > 0);
        ctx->pc = 0x19D468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D464u;
        // 0x19d468: 0x1cc7021  addu        $t6, $t6, $t4 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d464) {
            ctx->pc = 0x19D41Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19d41c;
        }
    }
    ctx->pc = 0x19D46Cu;
label_19d46c:
    // 0x19d46c: 0x24a50080  addiu       $a1, $a1, 0x80
    ctx->pc = 0x19d46cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
label_19d470:
    // 0x19d470: 0x24c60080  addiu       $a2, $a2, 0x80
    ctx->pc = 0x19d470u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
label_19d474:
    // 0x19d474: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x19d474u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_19d478:
    // 0x19d478: 0x1675024  and         $t2, $t3, $a3
    ctx->pc = 0x19d478u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) & GPR_U64(ctx, 7));
label_19d47c:
    // 0x19d47c: 0x1540ffe7  bnez        $t2, . + 4 + (-0x19 << 2)
label_19d480:
    if (ctx->pc == 0x19D480u) {
        ctx->pc = 0x19D480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D47Cu;
        // 0x19d480: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19D484u;
        goto label_19d484;
    }
    ctx->pc = 0x19D47Cu;
    {
        const bool branch_taken_0x19d47c = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x19D480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D47Cu;
        // 0x19d480: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d47c) {
            ctx->pc = 0x19D41Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19d41c;
        }
    }
    ctx->pc = 0x19D484u;
label_19d484:
    // 0x19d484: 0x3e00008  jr          $ra
label_19d488:
    if (ctx->pc == 0x19D488u) {
        ctx->pc = 0x19D48Cu;
        goto label_19d48c;
    }
    ctx->pc = 0x19D484u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19D484u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19D48Cu;
label_19d48c:
    // 0x19d48c: 0x0  nop
    ctx->pc = 0x19d48cu;
    // NOP
label_19d490:
    // 0x19d490: 0x7000cce9  pnor        $t9, $zero, $zero
    ctx->pc = 0x19d490u;
    SET_GPR_VEC(ctx, 25, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_19d494:
    // 0x19d494: 0x7019cbf6  psrlh       $t9, $t9, 15
    ctx->pc = 0x19d494u;
    SET_GPR_VEC(ctx, 25, _mm_srli_epi16(GPR_VEC(ctx, 25), 15));
label_19d498:
    // 0x19d498: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x19d498u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_19d49c:
    // 0x19d49c: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x19d49cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_19d4a0:
    // 0x19d4a0: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x19d4a0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_19d4a4:
    // 0x19d4a4: 0x8c8d0004  lw          $t5, 0x4($a0)
    ctx->pc = 0x19d4a4u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_19d4a8:
    // 0x19d4a8: 0x8c8c0010  lw          $t4, 0x10($a0)
    ctx->pc = 0x19d4a8u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_19d4ac:
    // 0x19d4ac: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x19d4acu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19d4b0:
    // 0x19d4b0: 0xcc040  sll         $t8, $t4, 1
    ctx->pc = 0x19d4b0u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 12), 1));
label_19d4b4:
    // 0x19d4b4: 0x5b80000  mtsab       $t5, 0x0
    ctx->pc = 0x19d4b4u;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)0) & 0xF) << 3;
label_19d4b8:
    // 0x19d4b8: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x19d4b8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_19d4bc:
    // 0x19d4bc: 0xdca80000  ld          $t0, 0x0($a1)
    ctx->pc = 0x19d4bcu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 5), 0)));
label_19d4c0:
    // 0x19d4c0: 0xdcc90000  ld          $t1, 0x0($a2)
    ctx->pc = 0x19d4c0u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 6), 0)));
label_19d4c4:
    // 0x19d4c4: 0x71284389  pcpyld      $t0, $t1, $t0
    ctx->pc = 0x19d4c4u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
label_19d4c8:
    // 0x19d4c8: 0x710846e8  qfsrv       $t0, $t0, $t0
    ctx->pc = 0x19d4c8u;
    SET_GPR_VEC(ctx, 8, PS2_QFSRV(GPR_VEC(ctx, 8), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
label_19d4cc:
    // 0x19d4cc: 0x356b8000  ori         $t3, $t3, 0x8000
    ctx->pc = 0x19d4ccu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)32768);
label_19d4d0:
    // 0x19d4d0: 0x10e00010  beqz        $a3, . + 4 + (0x10 << 2)
label_19d4d4:
    if (ctx->pc == 0x19D4D4u) {
        ctx->pc = 0x19D4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D4D0u;
        // 0x19d4d4: 0x70087e88  pextlb      $t7, $zero, $t0 (Delay Slot)
        SET_GPR_VEC(ctx, 15, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19D4D8u;
        goto label_19d4d8;
    }
    ctx->pc = 0x19D4D0u;
    {
        const bool branch_taken_0x19d4d0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x19D4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D4D0u;
        // 0x19d4d4: 0x70087e88  pextlb      $t7, $zero, $t0 (Delay Slot)
        SET_GPR_VEC(ctx, 15, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d4d0) {
            ctx->pc = 0x19D514u;
            goto label_19d514;
        }
    }
    ctx->pc = 0x19D4D8u;
label_19d4d8:
    // 0x19d4d8: 0xac2821  addu        $a1, $a1, $t4
    ctx->pc = 0x19d4d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
label_19d4dc:
    // 0x19d4dc: 0xcc3021  addu        $a2, $a2, $t4
    ctx->pc = 0x19d4dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 12)));
label_19d4e0:
    // 0x19d4e0: 0xdca80000  ld          $t0, 0x0($a1)
    ctx->pc = 0x19d4e0u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 5), 0)));
label_19d4e4:
    // 0x19d4e4: 0xdcc90000  ld          $t1, 0x0($a2)
    ctx->pc = 0x19d4e4u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 6), 0)));
label_19d4e8:
    // 0x19d4e8: 0x71284389  pcpyld      $t0, $t1, $t0
    ctx->pc = 0x19d4e8u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
label_19d4ec:
    // 0x19d4ec: 0x710846e8  qfsrv       $t0, $t0, $t0
    ctx->pc = 0x19d4ecu;
    SET_GPR_VEC(ctx, 8, PS2_QFSRV(GPR_VEC(ctx, 8), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
label_19d4f0:
    // 0x19d4f0: 0x70085688  pextlb      $t2, $zero, $t0
    ctx->pc = 0x19d4f0u;
    SET_GPR_VEC(ctx, 10, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8)));
label_19d4f4:
    // 0x19d4f4: 0x20e7ffff  addi        $a3, $a3, -0x1
    ctx->pc = 0x19d4f4u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
label_19d4f8:
    // 0x19d4f8: 0x714f4908  paddh       $t1, $t2, $t7
    ctx->pc = 0x19d4f8u;
    SET_GPR_VEC(ctx, 9, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 15)));
label_19d4fc:
    // 0x19d4fc: 0x71407ca9  por         $t7, $t2, $zero
    ctx->pc = 0x19d4fcu;
    SET_GPR_VEC(ctx, 15, PS2_POR(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
label_19d500:
    // 0x19d500: 0x71395108  paddh       $t2, $t1, $t9
    ctx->pc = 0x19d500u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 25)));
label_19d504:
    // 0x19d504: 0x700a5076  psrlh       $t2, $t2, 1
    ctx->pc = 0x19d504u;
    SET_GPR_VEC(ctx, 10, _mm_srli_epi16(GPR_VEC(ctx, 10), 1));
label_19d508:
    // 0x19d508: 0x7dca0000  sq          $t2, 0x0($t6)
    ctx->pc = 0x19d508u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 10));
label_19d50c:
    // 0x19d50c: 0x1ce0fff2  bgtz        $a3, . + 4 + (-0xE << 2)
label_19d510:
    if (ctx->pc == 0x19D510u) {
        ctx->pc = 0x19D510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D50Cu;
        // 0x19d510: 0x1d87021  addu        $t6, $t6, $t8 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19D514u;
        goto label_19d514;
    }
    ctx->pc = 0x19D50Cu;
    {
        const bool branch_taken_0x19d50c = (GPR_S32(ctx, 7) > 0);
        ctx->pc = 0x19D510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D50Cu;
        // 0x19d510: 0x1d87021  addu        $t6, $t6, $t8 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d50c) {
            ctx->pc = 0x19D4D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19d4d8;
        }
    }
    ctx->pc = 0x19D514u;
label_19d514:
    // 0x19d514: 0x700b53f7  psrah       $t2, $t3, 15
    ctx->pc = 0x19d514u;
    SET_GPR_VEC(ctx, 10, _mm_srai_epi16(GPR_VEC(ctx, 11), 15));
label_19d518:
    // 0x19d518: 0x24a50140  addiu       $a1, $a1, 0x140
    ctx->pc = 0x19d518u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 320));
label_19d51c:
    // 0x19d51c: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x19d51cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_19d520:
    // 0x19d520: 0x24c60140  addiu       $a2, $a2, 0x140
    ctx->pc = 0x19d520u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 320));
label_19d524:
    // 0x19d524: 0x1475024  and         $t2, $t2, $a3
    ctx->pc = 0x19d524u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 7));
label_19d528:
    // 0x19d528: 0x1540ffeb  bnez        $t2, . + 4 + (-0x15 << 2)
label_19d52c:
    if (ctx->pc == 0x19D52Cu) {
        ctx->pc = 0x19D52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D528u;
        // 0x19d52c: 0x316b7fff  andi        $t3, $t3, 0x7FFF (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)32767);
        ctx->in_delay_slot = false;
        ctx->pc = 0x19D530u;
        goto label_19d530;
    }
    ctx->pc = 0x19D528u;
    {
        const bool branch_taken_0x19d528 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x19D52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D528u;
        // 0x19d52c: 0x316b7fff  andi        $t3, $t3, 0x7FFF (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)32767);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d528) {
            ctx->pc = 0x19D4D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19d4d8;
        }
    }
    ctx->pc = 0x19D530u;
label_19d530:
    // 0x19d530: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x19d530u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_19d534:
    // 0x19d534: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x19d534u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_19d538:
    // 0x19d538: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x19d538u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_19d53c:
    // 0x19d53c: 0x24a50040  addiu       $a1, $a1, 0x40
    ctx->pc = 0x19d53cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
label_19d540:
    // 0x19d540: 0x24c60040  addiu       $a2, $a2, 0x40
    ctx->pc = 0x19d540u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
label_19d544:
    // 0x19d544: 0x25ce0080  addiu       $t6, $t6, 0x80
    ctx->pc = 0x19d544u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 128));
label_19d548:
    // 0x19d548: 0x316a0001  andi        $t2, $t3, 0x1
    ctx->pc = 0x19d548u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)1);
label_19d54c:
    // 0x19d54c: 0x1540ffda  bnez        $t2, . + 4 + (-0x26 << 2)
label_19d550:
    if (ctx->pc == 0x19D550u) {
        ctx->pc = 0x19D550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D54Cu;
        // 0x19d550: 0x316bfffe  andi        $t3, $t3, 0xFFFE (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)65534);
        ctx->in_delay_slot = false;
        ctx->pc = 0x19D554u;
        goto label_19d554;
    }
    ctx->pc = 0x19D54Cu;
    {
        const bool branch_taken_0x19d54c = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x19D550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D54Cu;
        // 0x19d550: 0x316bfffe  andi        $t3, $t3, 0xFFFE (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)65534);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d54c) {
            ctx->pc = 0x19D4B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19d4b8;
        }
    }
    ctx->pc = 0x19D554u;
label_19d554:
    // 0x19d554: 0x3e00008  jr          $ra
label_19d558:
    if (ctx->pc == 0x19D558u) {
        ctx->pc = 0x19D55Cu;
        goto label_19d55c;
    }
    ctx->pc = 0x19D554u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19D554u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19D55Cu;
label_19d55c:
    // 0x19d55c: 0x0  nop
    ctx->pc = 0x19d55cu;
    // NOP
label_19d560:
    // 0x19d560: 0x7000cce9  pnor        $t9, $zero, $zero
    ctx->pc = 0x19d560u;
    SET_GPR_VEC(ctx, 25, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_19d564:
    // 0x19d564: 0x7019cbf6  psrlh       $t9, $t9, 15
    ctx->pc = 0x19d564u;
    SET_GPR_VEC(ctx, 25, _mm_srli_epi16(GPR_VEC(ctx, 25), 15));
label_19d568:
    // 0x19d568: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x19d568u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_19d56c:
    // 0x19d56c: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x19d56cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_19d570:
    // 0x19d570: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x19d570u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_19d574:
    // 0x19d574: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x19d574u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_19d578:
    // 0x19d578: 0x8c8d0004  lw          $t5, 0x4($a0)
    ctx->pc = 0x19d578u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_19d57c:
    // 0x19d57c: 0x24180001  addiu       $t8, $zero, 0x1
    ctx->pc = 0x19d57cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19d580:
    // 0x19d580: 0x8c890010  lw          $t1, 0x10($a0)
    ctx->pc = 0x19d580u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_19d584:
    // 0x19d584: 0x94040  sll         $t0, $t1, 1
    ctx->pc = 0x19d584u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
label_19d588:
    // 0x19d588: 0x240bffff  addiu       $t3, $zero, -0x1
    ctx->pc = 0x19d588u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_19d58c:
    // 0x19d58c: 0x78aa0000  lq          $t2, 0x0($a1)
    ctx->pc = 0x19d58cu;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_19d590:
    // 0x19d590: 0x78cf0000  lq          $t7, 0x0($a2)
    ctx->pc = 0x19d590u;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_19d594:
    // 0x19d594: 0x5b80000  mtsab       $t5, 0x0
    ctx->pc = 0x19d594u;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)0) & 0xF) << 3;
label_19d598:
    // 0x19d598: 0x71ea16e8  qfsrv       $v0, $t7, $t2
    ctx->pc = 0x19d598u;
    SET_GPR_VEC(ctx, 2, PS2_QFSRV(GPR_VEC(ctx, 15), GPR_VEC(ctx, 10), ctx->sa & 0x7F));
label_19d59c:
    // 0x19d59c: 0x714f1ee8  qfsrv       $v1, $t2, $t7
    ctx->pc = 0x19d59cu;
    SET_GPR_VEC(ctx, 3, PS2_QFSRV(GPR_VEC(ctx, 10), GPR_VEC(ctx, 15), ctx->sa & 0x7F));
label_19d5a0:
    // 0x19d5a0: 0x70025688  pextlb      $t2, $zero, $v0
    ctx->pc = 0x19d5a0u;
    SET_GPR_VEC(ctx, 10, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
label_19d5a4:
    // 0x19d5a4: 0x20e7ffff  addi        $a3, $a3, -0x1
    ctx->pc = 0x19d5a4u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
label_19d5a8:
    // 0x19d5a8: 0x70027ea8  pextub      $t7, $zero, $v0
    ctx->pc = 0x19d5a8u;
    SET_GPR_VEC(ctx, 15, PS2_PEXTUB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
label_19d5ac:
    // 0x19d5ac: 0x7180000  mtsab       $t8, 0x0
    ctx->pc = 0x19d5acu;
    ctx->sa = ((GPR_U32(ctx, 24) ^ (uint32_t)0) & 0xF) << 3;
label_19d5b0:
    // 0x19d5b0: 0x70621ee8  qfsrv       $v1, $v1, $v0
    ctx->pc = 0x19d5b0u;
    SET_GPR_VEC(ctx, 3, PS2_QFSRV(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2), ctx->sa & 0x7F));
label_19d5b4:
    // 0x19d5b4: 0x70031688  pextlb      $v0, $zero, $v1
    ctx->pc = 0x19d5b4u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
label_19d5b8:
    // 0x19d5b8: 0x70031ea8  pextub      $v1, $zero, $v1
    ctx->pc = 0x19d5b8u;
    SET_GPR_VEC(ctx, 3, PS2_PEXTUB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
label_19d5bc:
    // 0x19d5bc: 0x71425108  paddh       $t2, $t2, $v0
    ctx->pc = 0x19d5bcu;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 2)));
label_19d5c0:
    // 0x19d5c0: 0x71e37908  paddh       $t7, $t7, $v1
    ctx->pc = 0x19d5c0u;
    SET_GPR_VEC(ctx, 15, PS2_PADDH(GPR_VEC(ctx, 15), GPR_VEC(ctx, 3)));
label_19d5c4:
    // 0x19d5c4: 0x71591108  paddh       $v0, $t2, $t9
    ctx->pc = 0x19d5c4u;
    SET_GPR_VEC(ctx, 2, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 25)));
label_19d5c8:
    // 0x19d5c8: 0x71f91908  paddh       $v1, $t7, $t9
    ctx->pc = 0x19d5c8u;
    SET_GPR_VEC(ctx, 3, PS2_PADDH(GPR_VEC(ctx, 15), GPR_VEC(ctx, 25)));
label_19d5cc:
    // 0x19d5cc: 0x70021076  psrlh       $v0, $v0, 1
    ctx->pc = 0x19d5ccu;
    SET_GPR_VEC(ctx, 2, _mm_srli_epi16(GPR_VEC(ctx, 2), 1));
label_19d5d0:
    // 0x19d5d0: 0x70031876  psrlh       $v1, $v1, 1
    ctx->pc = 0x19d5d0u;
    SET_GPR_VEC(ctx, 3, _mm_srli_epi16(GPR_VEC(ctx, 3), 1));
label_19d5d4:
    // 0x19d5d4: 0x7dc20000  sq          $v0, 0x0($t6)
    ctx->pc = 0x19d5d4u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 2));
label_19d5d8:
    // 0x19d5d8: 0x7dc30010  sq          $v1, 0x10($t6)
    ctx->pc = 0x19d5d8u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 16), GPR_VEC(ctx, 3));
label_19d5dc:
    // 0x19d5dc: 0xa92821  addu        $a1, $a1, $t1
    ctx->pc = 0x19d5dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
label_19d5e0:
    // 0x19d5e0: 0xc93021  addu        $a2, $a2, $t1
    ctx->pc = 0x19d5e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
label_19d5e4:
    // 0x19d5e4: 0x1ce0ffe9  bgtz        $a3, . + 4 + (-0x17 << 2)
    ctx->pc = 0x19d5e8u;
    return;
}
