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

// Function: FUN_0019b8d0
// Address: 0x19b8d0 - 0x29b8d8
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0019b8d0_part397(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x25ce90u: goto label_25ce90;
        case 0x25ce94u: goto label_25ce94;
        case 0x25ce98u: goto label_25ce98;
        case 0x25ce9cu: goto label_25ce9c;
        case 0x25cea0u: goto label_25cea0;
        case 0x25cea4u: goto label_25cea4;
        case 0x25cea8u: goto label_25cea8;
        case 0x25ceacu: goto label_25ceac;
        case 0x25ceb0u: goto label_25ceb0;
        case 0x25ceb4u: goto label_25ceb4;
        case 0x25ceb8u: goto label_25ceb8;
        case 0x25cebcu: goto label_25cebc;
        case 0x25cec0u: goto label_25cec0;
        case 0x25cec4u: goto label_25cec4;
        case 0x25cec8u: goto label_25cec8;
        case 0x25ceccu: goto label_25cecc;
        case 0x25ced0u: goto label_25ced0;
        case 0x25ced4u: goto label_25ced4;
        case 0x25ced8u: goto label_25ced8;
        case 0x25cedcu: goto label_25cedc;
        case 0x25cee0u: goto label_25cee0;
        case 0x25cee4u: goto label_25cee4;
        case 0x25cee8u: goto label_25cee8;
        case 0x25ceecu: goto label_25ceec;
        case 0x25cef0u: goto label_25cef0;
        case 0x25cef4u: goto label_25cef4;
        case 0x25cef8u: goto label_25cef8;
        case 0x25cefcu: goto label_25cefc;
        case 0x25cf00u: goto label_25cf00;
        case 0x25cf04u: goto label_25cf04;
        case 0x25cf08u: goto label_25cf08;
        case 0x25cf0cu: goto label_25cf0c;
        case 0x25cf10u: goto label_25cf10;
        case 0x25cf14u: goto label_25cf14;
        case 0x25cf18u: goto label_25cf18;
        case 0x25cf1cu: goto label_25cf1c;
        case 0x25cf20u: goto label_25cf20;
        case 0x25cf24u: goto label_25cf24;
        case 0x25cf28u: goto label_25cf28;
        case 0x25cf2cu: goto label_25cf2c;
        case 0x25cf30u: goto label_25cf30;
        case 0x25cf34u: goto label_25cf34;
        case 0x25cf38u: goto label_25cf38;
        case 0x25cf3cu: goto label_25cf3c;
        case 0x25cf40u: goto label_25cf40;
        case 0x25cf44u: goto label_25cf44;
        case 0x25cf48u: goto label_25cf48;
        case 0x25cf4cu: goto label_25cf4c;
        case 0x25cf50u: goto label_25cf50;
        case 0x25cf54u: goto label_25cf54;
        case 0x25cf58u: goto label_25cf58;
        case 0x25cf5cu: goto label_25cf5c;
        case 0x25cf60u: goto label_25cf60;
        case 0x25cf64u: goto label_25cf64;
        case 0x25cf68u: goto label_25cf68;
        case 0x25cf6cu: goto label_25cf6c;
        case 0x25cf70u: goto label_25cf70;
        case 0x25cf74u: goto label_25cf74;
        case 0x25cf78u: goto label_25cf78;
        case 0x25cf7cu: goto label_25cf7c;
        case 0x25cf80u: goto label_25cf80;
        case 0x25cf84u: goto label_25cf84;
        case 0x25cf88u: goto label_25cf88;
        case 0x25cf8cu: goto label_25cf8c;
        case 0x25cf90u: goto label_25cf90;
        case 0x25cf94u: goto label_25cf94;
        case 0x25cf98u: goto label_25cf98;
        case 0x25cf9cu: goto label_25cf9c;
        case 0x25cfa0u: goto label_25cfa0;
        case 0x25cfa4u: goto label_25cfa4;
        case 0x25cfa8u: goto label_25cfa8;
        case 0x25cfacu: goto label_25cfac;
        case 0x25cfb0u: goto label_25cfb0;
        case 0x25cfb4u: goto label_25cfb4;
        case 0x25cfb8u: goto label_25cfb8;
        case 0x25cfbcu: goto label_25cfbc;
        case 0x25cfc0u: goto label_25cfc0;
        case 0x25cfc4u: goto label_25cfc4;
        case 0x25cfc8u: goto label_25cfc8;
        case 0x25cfccu: goto label_25cfcc;
        case 0x25cfd0u: goto label_25cfd0;
        case 0x25cfd4u: goto label_25cfd4;
        case 0x25cfd8u: goto label_25cfd8;
        case 0x25cfdcu: goto label_25cfdc;
        case 0x25cfe0u: goto label_25cfe0;
        case 0x25cfe4u: goto label_25cfe4;
        case 0x25cfe8u: goto label_25cfe8;
        case 0x25cfecu: goto label_25cfec;
        case 0x25cff0u: goto label_25cff0;
        case 0x25cff4u: goto label_25cff4;
        case 0x25cff8u: goto label_25cff8;
        case 0x25cffcu: goto label_25cffc;
        case 0x25d000u: goto label_25d000;
        case 0x25d004u: goto label_25d004;
        case 0x25d008u: goto label_25d008;
        case 0x25d00cu: goto label_25d00c;
        case 0x25d010u: goto label_25d010;
        case 0x25d014u: goto label_25d014;
        case 0x25d018u: goto label_25d018;
        case 0x25d01cu: goto label_25d01c;
        case 0x25d020u: goto label_25d020;
        case 0x25d024u: goto label_25d024;
        case 0x25d028u: goto label_25d028;
        case 0x25d02cu: goto label_25d02c;
        case 0x25d030u: goto label_25d030;
        case 0x25d034u: goto label_25d034;
        case 0x25d038u: goto label_25d038;
        case 0x25d03cu: goto label_25d03c;
        case 0x25d040u: goto label_25d040;
        case 0x25d044u: goto label_25d044;
        case 0x25d048u: goto label_25d048;
        case 0x25d04cu: goto label_25d04c;
        case 0x25d050u: goto label_25d050;
        case 0x25d054u: goto label_25d054;
        case 0x25d058u: goto label_25d058;
        case 0x25d05cu: goto label_25d05c;
        case 0x25d060u: goto label_25d060;
        case 0x25d064u: goto label_25d064;
        case 0x25d068u: goto label_25d068;
        case 0x25d06cu: goto label_25d06c;
        case 0x25d070u: goto label_25d070;
        case 0x25d074u: goto label_25d074;
        case 0x25d078u: goto label_25d078;
        case 0x25d07cu: goto label_25d07c;
        case 0x25d080u: goto label_25d080;
        case 0x25d084u: goto label_25d084;
        case 0x25d088u: goto label_25d088;
        case 0x25d08cu: goto label_25d08c;
        case 0x25d090u: goto label_25d090;
        case 0x25d094u: goto label_25d094;
        case 0x25d098u: goto label_25d098;
        case 0x25d09cu: goto label_25d09c;
        case 0x25d0a0u: goto label_25d0a0;
        case 0x25d0a4u: goto label_25d0a4;
        case 0x25d0a8u: goto label_25d0a8;
        case 0x25d0acu: goto label_25d0ac;
        case 0x25d0b0u: goto label_25d0b0;
        case 0x25d0b4u: goto label_25d0b4;
        case 0x25d0b8u: goto label_25d0b8;
        case 0x25d0bcu: goto label_25d0bc;
        case 0x25d0c0u: goto label_25d0c0;
        case 0x25d0c4u: goto label_25d0c4;
        case 0x25d0c8u: goto label_25d0c8;
        case 0x25d0ccu: goto label_25d0cc;
        case 0x25d0d0u: goto label_25d0d0;
        case 0x25d0d4u: goto label_25d0d4;
        case 0x25d0d8u: goto label_25d0d8;
        case 0x25d0dcu: goto label_25d0dc;
        case 0x25d0e0u: goto label_25d0e0;
        case 0x25d0e4u: goto label_25d0e4;
        case 0x25d0e8u: goto label_25d0e8;
        case 0x25d0ecu: goto label_25d0ec;
        case 0x25d0f0u: goto label_25d0f0;
        case 0x25d0f4u: goto label_25d0f4;
        case 0x25d0f8u: goto label_25d0f8;
        case 0x25d0fcu: goto label_25d0fc;
        case 0x25d100u: goto label_25d100;
        case 0x25d104u: goto label_25d104;
        case 0x25d108u: goto label_25d108;
        case 0x25d10cu: goto label_25d10c;
        case 0x25d110u: goto label_25d110;
        case 0x25d114u: goto label_25d114;
        case 0x25d118u: goto label_25d118;
        case 0x25d11cu: goto label_25d11c;
        case 0x25d120u: goto label_25d120;
        case 0x25d124u: goto label_25d124;
        case 0x25d128u: goto label_25d128;
        case 0x25d12cu: goto label_25d12c;
        case 0x25d130u: goto label_25d130;
        case 0x25d134u: goto label_25d134;
        case 0x25d138u: goto label_25d138;
        case 0x25d13cu: goto label_25d13c;
        case 0x25d140u: goto label_25d140;
        case 0x25d144u: goto label_25d144;
        case 0x25d148u: goto label_25d148;
        case 0x25d14cu: goto label_25d14c;
        case 0x25d150u: goto label_25d150;
        case 0x25d154u: goto label_25d154;
        case 0x25d158u: goto label_25d158;
        case 0x25d15cu: goto label_25d15c;
        case 0x25d160u: goto label_25d160;
        case 0x25d164u: goto label_25d164;
        case 0x25d168u: goto label_25d168;
        case 0x25d16cu: goto label_25d16c;
        case 0x25d170u: goto label_25d170;
        case 0x25d174u: goto label_25d174;
        case 0x25d178u: goto label_25d178;
        case 0x25d17cu: goto label_25d17c;
        case 0x25d180u: goto label_25d180;
        case 0x25d184u: goto label_25d184;
        case 0x25d188u: goto label_25d188;
        case 0x25d18cu: goto label_25d18c;
        case 0x25d190u: goto label_25d190;
        case 0x25d194u: goto label_25d194;
        case 0x25d198u: goto label_25d198;
        case 0x25d19cu: goto label_25d19c;
        case 0x25d1a0u: goto label_25d1a0;
        case 0x25d1a4u: goto label_25d1a4;
        case 0x25d1a8u: goto label_25d1a8;
        case 0x25d1acu: goto label_25d1ac;
        case 0x25d1b0u: goto label_25d1b0;
        case 0x25d1b4u: goto label_25d1b4;
        case 0x25d1b8u: goto label_25d1b8;
        case 0x25d1bcu: goto label_25d1bc;
        case 0x25d1c0u: goto label_25d1c0;
        case 0x25d1c4u: goto label_25d1c4;
        case 0x25d1c8u: goto label_25d1c8;
        case 0x25d1ccu: goto label_25d1cc;
        case 0x25d1d0u: goto label_25d1d0;
        case 0x25d1d4u: goto label_25d1d4;
        case 0x25d1d8u: goto label_25d1d8;
        case 0x25d1dcu: goto label_25d1dc;
        case 0x25d1e0u: goto label_25d1e0;
        case 0x25d1e4u: goto label_25d1e4;
        case 0x25d1e8u: goto label_25d1e8;
        case 0x25d1ecu: goto label_25d1ec;
        case 0x25d1f0u: goto label_25d1f0;
        case 0x25d1f4u: goto label_25d1f4;
        case 0x25d1f8u: goto label_25d1f8;
        case 0x25d1fcu: goto label_25d1fc;
        case 0x25d200u: goto label_25d200;
        case 0x25d204u: goto label_25d204;
        case 0x25d208u: goto label_25d208;
        case 0x25d20cu: goto label_25d20c;
        case 0x25d210u: goto label_25d210;
        case 0x25d214u: goto label_25d214;
        case 0x25d218u: goto label_25d218;
        case 0x25d21cu: goto label_25d21c;
        case 0x25d220u: goto label_25d220;
        case 0x25d224u: goto label_25d224;
        case 0x25d228u: goto label_25d228;
        case 0x25d22cu: goto label_25d22c;
        case 0x25d230u: goto label_25d230;
        case 0x25d234u: goto label_25d234;
        case 0x25d238u: goto label_25d238;
        case 0x25d23cu: goto label_25d23c;
        case 0x25d240u: goto label_25d240;
        case 0x25d244u: goto label_25d244;
        case 0x25d248u: goto label_25d248;
        case 0x25d24cu: goto label_25d24c;
        case 0x25d250u: goto label_25d250;
        case 0x25d254u: goto label_25d254;
        case 0x25d258u: goto label_25d258;
        case 0x25d25cu: goto label_25d25c;
        case 0x25d260u: goto label_25d260;
        case 0x25d264u: goto label_25d264;
        case 0x25d268u: goto label_25d268;
        case 0x25d26cu: goto label_25d26c;
        case 0x25d270u: goto label_25d270;
        case 0x25d274u: goto label_25d274;
        case 0x25d278u: goto label_25d278;
        case 0x25d27cu: goto label_25d27c;
        case 0x25d280u: goto label_25d280;
        case 0x25d284u: goto label_25d284;
        case 0x25d288u: goto label_25d288;
        case 0x25d28cu: goto label_25d28c;
        case 0x25d290u: goto label_25d290;
        case 0x25d294u: goto label_25d294;
        case 0x25d298u: goto label_25d298;
        case 0x25d29cu: goto label_25d29c;
        case 0x25d2a0u: goto label_25d2a0;
        case 0x25d2a4u: goto label_25d2a4;
        case 0x25d2a8u: goto label_25d2a8;
        case 0x25d2acu: goto label_25d2ac;
        case 0x25d2b0u: goto label_25d2b0;
        case 0x25d2b4u: goto label_25d2b4;
        case 0x25d2b8u: goto label_25d2b8;
        case 0x25d2bcu: goto label_25d2bc;
        case 0x25d2c0u: goto label_25d2c0;
        case 0x25d2c4u: goto label_25d2c4;
        case 0x25d2c8u: goto label_25d2c8;
        case 0x25d2ccu: goto label_25d2cc;
        case 0x25d2d0u: goto label_25d2d0;
        case 0x25d2d4u: goto label_25d2d4;
        case 0x25d2d8u: goto label_25d2d8;
        case 0x25d2dcu: goto label_25d2dc;
        case 0x25d2e0u: goto label_25d2e0;
        case 0x25d2e4u: goto label_25d2e4;
        case 0x25d2e8u: goto label_25d2e8;
        case 0x25d2ecu: goto label_25d2ec;
        case 0x25d2f0u: goto label_25d2f0;
        case 0x25d2f4u: goto label_25d2f4;
        case 0x25d2f8u: goto label_25d2f8;
        case 0x25d2fcu: goto label_25d2fc;
        case 0x25d300u: goto label_25d300;
        case 0x25d304u: goto label_25d304;
        case 0x25d308u: goto label_25d308;
        case 0x25d30cu: goto label_25d30c;
        case 0x25d310u: goto label_25d310;
        case 0x25d314u: goto label_25d314;
        case 0x25d318u: goto label_25d318;
        case 0x25d31cu: goto label_25d31c;
        case 0x25d320u: goto label_25d320;
        case 0x25d324u: goto label_25d324;
        case 0x25d328u: goto label_25d328;
        case 0x25d32cu: goto label_25d32c;
        case 0x25d330u: goto label_25d330;
        case 0x25d334u: goto label_25d334;
        case 0x25d338u: goto label_25d338;
        case 0x25d33cu: goto label_25d33c;
        case 0x25d340u: goto label_25d340;
        case 0x25d344u: goto label_25d344;
        case 0x25d348u: goto label_25d348;
        case 0x25d34cu: goto label_25d34c;
        case 0x25d350u: goto label_25d350;
        case 0x25d354u: goto label_25d354;
        case 0x25d358u: goto label_25d358;
        case 0x25d35cu: goto label_25d35c;
        case 0x25d360u: goto label_25d360;
        case 0x25d364u: goto label_25d364;
        case 0x25d368u: goto label_25d368;
        case 0x25d36cu: goto label_25d36c;
        case 0x25d370u: goto label_25d370;
        case 0x25d374u: goto label_25d374;
        case 0x25d378u: goto label_25d378;
        case 0x25d37cu: goto label_25d37c;
        case 0x25d380u: goto label_25d380;
        case 0x25d384u: goto label_25d384;
        case 0x25d388u: goto label_25d388;
        case 0x25d38cu: goto label_25d38c;
        case 0x25d390u: goto label_25d390;
        case 0x25d394u: goto label_25d394;
        case 0x25d398u: goto label_25d398;
        case 0x25d39cu: goto label_25d39c;
        case 0x25d3a0u: goto label_25d3a0;
        case 0x25d3a4u: goto label_25d3a4;
        case 0x25d3a8u: goto label_25d3a8;
        case 0x25d3acu: goto label_25d3ac;
        case 0x25d3b0u: goto label_25d3b0;
        case 0x25d3b4u: goto label_25d3b4;
        case 0x25d3b8u: goto label_25d3b8;
        case 0x25d3bcu: goto label_25d3bc;
        case 0x25d3c0u: goto label_25d3c0;
        case 0x25d3c4u: goto label_25d3c4;
        case 0x25d3c8u: goto label_25d3c8;
        case 0x25d3ccu: goto label_25d3cc;
        case 0x25d3d0u: goto label_25d3d0;
        case 0x25d3d4u: goto label_25d3d4;
        case 0x25d3d8u: goto label_25d3d8;
        case 0x25d3dcu: goto label_25d3dc;
        case 0x25d3e0u: goto label_25d3e0;
        case 0x25d3e4u: goto label_25d3e4;
        case 0x25d3e8u: goto label_25d3e8;
        case 0x25d3ecu: goto label_25d3ec;
        case 0x25d3f0u: goto label_25d3f0;
        case 0x25d3f4u: goto label_25d3f4;
        case 0x25d3f8u: goto label_25d3f8;
        case 0x25d3fcu: goto label_25d3fc;
        case 0x25d400u: goto label_25d400;
        case 0x25d404u: goto label_25d404;
        case 0x25d408u: goto label_25d408;
        case 0x25d40cu: goto label_25d40c;
        case 0x25d410u: goto label_25d410;
        case 0x25d414u: goto label_25d414;
        case 0x25d418u: goto label_25d418;
        case 0x25d41cu: goto label_25d41c;
        case 0x25d420u: goto label_25d420;
        case 0x25d424u: goto label_25d424;
        case 0x25d428u: goto label_25d428;
        case 0x25d42cu: goto label_25d42c;
        case 0x25d430u: goto label_25d430;
        case 0x25d434u: goto label_25d434;
        case 0x25d438u: goto label_25d438;
        case 0x25d43cu: goto label_25d43c;
        case 0x25d440u: goto label_25d440;
        case 0x25d444u: goto label_25d444;
        case 0x25d448u: goto label_25d448;
        case 0x25d44cu: goto label_25d44c;
        case 0x25d450u: goto label_25d450;
        case 0x25d454u: goto label_25d454;
        case 0x25d458u: goto label_25d458;
        case 0x25d45cu: goto label_25d45c;
        case 0x25d460u: goto label_25d460;
        case 0x25d464u: goto label_25d464;
        case 0x25d468u: goto label_25d468;
        case 0x25d46cu: goto label_25d46c;
        case 0x25d470u: goto label_25d470;
        case 0x25d474u: goto label_25d474;
        case 0x25d478u: goto label_25d478;
        case 0x25d47cu: goto label_25d47c;
        case 0x25d480u: goto label_25d480;
        case 0x25d484u: goto label_25d484;
        case 0x25d488u: goto label_25d488;
        case 0x25d48cu: goto label_25d48c;
        case 0x25d490u: goto label_25d490;
        case 0x25d494u: goto label_25d494;
        case 0x25d498u: goto label_25d498;
        case 0x25d49cu: goto label_25d49c;
        case 0x25d4a0u: goto label_25d4a0;
        case 0x25d4a4u: goto label_25d4a4;
        case 0x25d4a8u: goto label_25d4a8;
        case 0x25d4acu: goto label_25d4ac;
        case 0x25d4b0u: goto label_25d4b0;
        case 0x25d4b4u: goto label_25d4b4;
        case 0x25d4b8u: goto label_25d4b8;
        case 0x25d4bcu: goto label_25d4bc;
        case 0x25d4c0u: goto label_25d4c0;
        case 0x25d4c4u: goto label_25d4c4;
        case 0x25d4c8u: goto label_25d4c8;
        case 0x25d4ccu: goto label_25d4cc;
        case 0x25d4d0u: goto label_25d4d0;
        case 0x25d4d4u: goto label_25d4d4;
        case 0x25d4d8u: goto label_25d4d8;
        case 0x25d4dcu: goto label_25d4dc;
        case 0x25d4e0u: goto label_25d4e0;
        case 0x25d4e4u: goto label_25d4e4;
        case 0x25d4e8u: goto label_25d4e8;
        case 0x25d4ecu: goto label_25d4ec;
        case 0x25d4f0u: goto label_25d4f0;
        case 0x25d4f4u: goto label_25d4f4;
        case 0x25d4f8u: goto label_25d4f8;
        case 0x25d4fcu: goto label_25d4fc;
        case 0x25d500u: goto label_25d500;
        case 0x25d504u: goto label_25d504;
        case 0x25d508u: goto label_25d508;
        case 0x25d50cu: goto label_25d50c;
        case 0x25d510u: goto label_25d510;
        case 0x25d514u: goto label_25d514;
        case 0x25d518u: goto label_25d518;
        case 0x25d51cu: goto label_25d51c;
        case 0x25d520u: goto label_25d520;
        case 0x25d524u: goto label_25d524;
        case 0x25d528u: goto label_25d528;
        case 0x25d52cu: goto label_25d52c;
        case 0x25d530u: goto label_25d530;
        case 0x25d534u: goto label_25d534;
        case 0x25d538u: goto label_25d538;
        case 0x25d53cu: goto label_25d53c;
        case 0x25d540u: goto label_25d540;
        case 0x25d544u: goto label_25d544;
        case 0x25d548u: goto label_25d548;
        case 0x25d54cu: goto label_25d54c;
        case 0x25d550u: goto label_25d550;
        case 0x25d554u: goto label_25d554;
        case 0x25d558u: goto label_25d558;
        case 0x25d55cu: goto label_25d55c;
        case 0x25d560u: goto label_25d560;
        case 0x25d564u: goto label_25d564;
        case 0x25d568u: goto label_25d568;
        case 0x25d56cu: goto label_25d56c;
        case 0x25d570u: goto label_25d570;
        case 0x25d574u: goto label_25d574;
        case 0x25d578u: goto label_25d578;
        case 0x25d57cu: goto label_25d57c;
        case 0x25d580u: goto label_25d580;
        case 0x25d584u: goto label_25d584;
        case 0x25d588u: goto label_25d588;
        case 0x25d58cu: goto label_25d58c;
        case 0x25d590u: goto label_25d590;
        case 0x25d594u: goto label_25d594;
        case 0x25d598u: goto label_25d598;
        case 0x25d59cu: goto label_25d59c;
        case 0x25d5a0u: goto label_25d5a0;
        case 0x25d5a4u: goto label_25d5a4;
        case 0x25d5a8u: goto label_25d5a8;
        case 0x25d5acu: goto label_25d5ac;
        case 0x25d5b0u: goto label_25d5b0;
        case 0x25d5b4u: goto label_25d5b4;
        case 0x25d5b8u: goto label_25d5b8;
        case 0x25d5bcu: goto label_25d5bc;
        case 0x25d5c0u: goto label_25d5c0;
        case 0x25d5c4u: goto label_25d5c4;
        case 0x25d5c8u: goto label_25d5c8;
        case 0x25d5ccu: goto label_25d5cc;
        case 0x25d5d0u: goto label_25d5d0;
        case 0x25d5d4u: goto label_25d5d4;
        case 0x25d5d8u: goto label_25d5d8;
        case 0x25d5dcu: goto label_25d5dc;
        case 0x25d5e0u: goto label_25d5e0;
        case 0x25d5e4u: goto label_25d5e4;
        case 0x25d5e8u: goto label_25d5e8;
        case 0x25d5ecu: goto label_25d5ec;
        case 0x25d5f0u: goto label_25d5f0;
        case 0x25d5f4u: goto label_25d5f4;
        case 0x25d5f8u: goto label_25d5f8;
        case 0x25d5fcu: goto label_25d5fc;
        case 0x25d600u: goto label_25d600;
        case 0x25d604u: goto label_25d604;
        case 0x25d608u: goto label_25d608;
        case 0x25d60cu: goto label_25d60c;
        case 0x25d610u: goto label_25d610;
        case 0x25d614u: goto label_25d614;
        case 0x25d618u: goto label_25d618;
        case 0x25d61cu: goto label_25d61c;
        case 0x25d620u: goto label_25d620;
        case 0x25d624u: goto label_25d624;
        case 0x25d628u: goto label_25d628;
        case 0x25d62cu: goto label_25d62c;
        case 0x25d630u: goto label_25d630;
        case 0x25d634u: goto label_25d634;
        case 0x25d638u: goto label_25d638;
        case 0x25d63cu: goto label_25d63c;
        case 0x25d640u: goto label_25d640;
        case 0x25d644u: goto label_25d644;
        case 0x25d648u: goto label_25d648;
        case 0x25d64cu: goto label_25d64c;
        case 0x25d650u: goto label_25d650;
        case 0x25d654u: goto label_25d654;
        case 0x25d658u: goto label_25d658;
        case 0x25d65cu: goto label_25d65c;
        default: return;
    }

label_25ce90:
    // 0x25ce90: 0x68d0  .word       0x000068D0                   # mfhi        $t5 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25ce90u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_25ce94:
    // 0x25ce94: 0x7400  sll         $t6, $zero, 16
    ctx->pc = 0x25ce94u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 0), 16));
label_25ce98:
    // 0x25ce98: 0x0  nop
    ctx->pc = 0x25ce98u;
    // NOP
label_25ce9c:
    // 0x25ce9c: 0x0  nop
    ctx->pc = 0x25ce9cu;
    // NOP
label_25cea0:
    // 0x25cea0: 0x68df  .word       0x000068DF                   # ddivu       $t5, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25cea0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x25CEA0 raw=0x000068DF"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25cea4:
    // 0x25cea4: 0x5d20  .word       0x00005D20                   # add         $t3, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25cea4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_25cea8:
    // 0x25cea8: 0x0  nop
    ctx->pc = 0x25cea8u;
    // NOP
label_25ceac:
    // 0x25ceac: 0x0  nop
    ctx->pc = 0x25ceacu;
    // NOP
label_25ceb0:
    // 0x25ceb0: 0x68eb  .word       0x000068EB                   # sltu        $t5, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25ceb0u;
    SET_GPR_U64(ctx, 13, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_25ceb4:
    // 0x25ceb4: 0x85c0  sll         $s0, $zero, 23
    ctx->pc = 0x25ceb4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 0), 23));
label_25ceb8:
    // 0x25ceb8: 0x0  nop
    ctx->pc = 0x25ceb8u;
    // NOP
label_25cebc:
    // 0x25cebc: 0x0  nop
    ctx->pc = 0x25cebcu;
    // NOP
label_25cec0:
    // 0x25cec0: 0x68fc  dsll32      $t5, $zero, 3
    ctx->pc = 0x25cec0u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 0) << (32 + 3));
label_25cec4:
    // 0x25cec4: 0x6250  .word       0x00006250                   # mfhi        $t4 # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25cec4u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_25cec8:
    // 0x25cec8: 0x0  nop
    ctx->pc = 0x25cec8u;
    // NOP
label_25cecc:
    // 0x25cecc: 0x0  nop
    ctx->pc = 0x25ceccu;
    // NOP
label_25ced0:
    // 0x25ced0: 0x6909  .word       0x00006909                   # jalr        $t5, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
label_25ced4:
    if (ctx->pc == 0x25CED4u) {
        ctx->pc = 0x25CED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CED0u;
        // 0x25ced4: 0x8370  tge         $zero, $zero, 525 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x25CED8u;
        goto label_25ced8;
    }
    ctx->pc = 0x25CED0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 13, 0x25CED8u);
        ctx->pc = 0x25CED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CED0u;
        // 0x25ced4: 0x8370  tge         $zero, $zero, 525 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25CED0u, 0x25CED8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25CED8u;
label_25ced8:
    // 0x25ced8: 0x0  nop
    ctx->pc = 0x25ced8u;
    // NOP
label_25cedc:
    // 0x25cedc: 0x0  nop
    ctx->pc = 0x25cedcu;
    // NOP
label_25cee0:
    // 0x25cee0: 0x691a  .word       0x0000691A                   # div         $t5, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25cee0u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_25cee4:
    // 0x25cee4: 0x8fe0  .word       0x00008FE0                   # add         $s1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25cee4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_25cee8:
    // 0x25cee8: 0x0  nop
    ctx->pc = 0x25cee8u;
    // NOP
label_25ceec:
    // 0x25ceec: 0x0  nop
    ctx->pc = 0x25ceecu;
    // NOP
label_25cef0:
    // 0x25cef0: 0x692c  .word       0x0000692C                   # dadd        $t5, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25cef0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 13, r); }
label_25cef4:
    // 0x25cef4: 0x69e0  .word       0x000069E0                   # add         $t5, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25cef4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_25cef8:
    // 0x25cef8: 0x0  nop
    ctx->pc = 0x25cef8u;
    // NOP
label_25cefc:
    // 0x25cefc: 0x0  nop
    ctx->pc = 0x25cefcu;
    // NOP
label_25cf00:
    // 0x25cf00: 0x693a  dsrl        $t5, $zero, 4
    ctx->pc = 0x25cf00u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 0) >> 4);
label_25cf04:
    // 0x25cf04: 0x78a0  .word       0x000078A0                   # add         $t7, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25cf04u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_25cf08:
    // 0x25cf08: 0x0  nop
    ctx->pc = 0x25cf08u;
    // NOP
label_25cf0c:
    // 0x25cf0c: 0x0  nop
    ctx->pc = 0x25cf0cu;
    // NOP
label_25cf10:
    // 0x25cf10: 0x694a  .word       0x0000694A                   # movz        $t5, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25cf10u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 13, GPR_VEC(ctx, 0));
label_25cf14:
    // 0x25cf14: 0x7d50  .word       0x00007D50                   # mfhi        $t7 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25cf14u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_25cf18:
    // 0x25cf18: 0x0  nop
    ctx->pc = 0x25cf18u;
    // NOP
label_25cf1c:
    // 0x25cf1c: 0x0  nop
    ctx->pc = 0x25cf1cu;
    // NOP
label_25cf20:
    // 0x25cf20: 0x695a  .word       0x0000695A                   # div         $t5, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25cf20u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_25cf24:
    // 0x25cf24: 0x6e50  .word       0x00006E50                   # mfhi        $t5 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25cf24u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_25cf28:
    // 0x25cf28: 0x0  nop
    ctx->pc = 0x25cf28u;
    // NOP
label_25cf2c:
    // 0x25cf2c: 0x0  nop
    ctx->pc = 0x25cf2cu;
    // NOP
label_25cf30:
    // 0x25cf30: 0x6968  .word       0x00006968                   # mfsa        $t5 # 00000140 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x25cf30u;
    SET_GPR_U32(ctx, 13, ctx->sa);
label_25cf34:
    // 0x25cf34: 0x73e0  .word       0x000073E0                   # add         $t6, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25cf34u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_25cf38:
    // 0x25cf38: 0x0  nop
    ctx->pc = 0x25cf38u;
    // NOP
label_25cf3c:
    // 0x25cf3c: 0x0  nop
    ctx->pc = 0x25cf3cu;
    // NOP
label_25cf40:
    // 0x25cf40: 0x6977  .word       0x00006977                   # INVALID     $zero, $zero, 0x6977 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25cf40u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x25CF40 raw=0x00006977"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25cf44:
    // 0x25cf44: 0x8320  .word       0x00008320                   # add         $s0, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25cf44u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_25cf48:
    // 0x25cf48: 0x0  nop
    ctx->pc = 0x25cf48u;
    // NOP
label_25cf4c:
    // 0x25cf4c: 0x0  nop
    ctx->pc = 0x25cf4cu;
    // NOP
label_25cf50:
    // 0x25cf50: 0x6988  .word       0x00006988                   # jr          $zero # 00006980 <InstrIdType: CPU_SPECIAL>
label_25cf54:
    if (ctx->pc == 0x25CF54u) {
        ctx->pc = 0x25CF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CF50u;
        // 0x25cf54: 0x79a0  .word       0x000079A0                   # add         $t7, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = 0x25CF58u;
        goto label_25cf58;
    }
    ctx->pc = 0x25CF50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x25CF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CF50u;
        // 0x25cf54: 0x79a0  .word       0x000079A0                   # add         $t7, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25CF50u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x25CF58u;
label_25cf58:
    // 0x25cf58: 0x0  nop
    ctx->pc = 0x25cf58u;
    // NOP
label_25cf5c:
    // 0x25cf5c: 0x0  nop
    ctx->pc = 0x25cf5cu;
    // NOP
label_25cf60:
    // 0x25cf60: 0x6998  .word       0x00006998                   # mult        $t5, $zero, $zero # 00000180 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x25cf60u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
label_25cf64:
    // 0x25cf64: 0x7fc0  sll         $t7, $zero, 31
    ctx->pc = 0x25cf64u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 0), 31));
label_25cf68:
    // 0x25cf68: 0x0  nop
    ctx->pc = 0x25cf68u;
    // NOP
label_25cf6c:
    // 0x25cf6c: 0x0  nop
    ctx->pc = 0x25cf6cu;
    // NOP
label_25cf70:
    // 0x25cf70: 0x69a8  .word       0x000069A8                   # mfsa        $t5 # 00000180 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x25cf70u;
    SET_GPR_U32(ctx, 13, ctx->sa);
label_25cf74:
    // 0x25cf74: 0x70a0  .word       0x000070A0                   # add         $t6, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25cf74u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_25cf78:
    // 0x25cf78: 0x0  nop
    ctx->pc = 0x25cf78u;
    // NOP
label_25cf7c:
    // 0x25cf7c: 0x0  nop
    ctx->pc = 0x25cf7cu;
    // NOP
label_25cf80:
    // 0x25cf80: 0x69b7  .word       0x000069B7                   # INVALID     $zero, $zero, 0x69B7 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25cf80u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x25CF80 raw=0x000069B7"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25cf84:
    // 0x25cf84: 0x78a0  .word       0x000078A0                   # add         $t7, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25cf84u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_25cf88:
    // 0x25cf88: 0x0  nop
    ctx->pc = 0x25cf88u;
    // NOP
label_25cf8c:
    // 0x25cf8c: 0x0  nop
    ctx->pc = 0x25cf8cu;
    // NOP
label_25cf90:
    // 0x25cf90: 0x69c7  .word       0x000069C7                   # srav        $t5, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25cf90u;
    SET_GPR_S32(ctx, 13, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_25cf94:
    // 0x25cf94: 0x7f50  .word       0x00007F50                   # mfhi        $t7 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25cf94u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_25cf98:
    // 0x25cf98: 0x0  nop
    ctx->pc = 0x25cf98u;
    // NOP
label_25cf9c:
    // 0x25cf9c: 0x0  nop
    ctx->pc = 0x25cf9cu;
    // NOP
label_25cfa0:
    // 0x25cfa0: 0x69d7  .word       0x000069D7                   # dsrav       $t5, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25cfa0u;
    SET_GPR_S64(ctx, 13, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_25cfa4:
    // 0x25cfa4: 0x8f80  sll         $s1, $zero, 30
    ctx->pc = 0x25cfa4u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 0), 30));
label_25cfa8:
    // 0x25cfa8: 0x0  nop
    ctx->pc = 0x25cfa8u;
    // NOP
label_25cfac:
    // 0x25cfac: 0x0  nop
    ctx->pc = 0x25cfacu;
    // NOP
label_25cfb0:
    // 0x25cfb0: 0x69e9  .word       0x000069E9                   # mtsa        $zero # 000069C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x25cfb0u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_25cfb4:
    // 0x25cfb4: 0x8090  .word       0x00008090                   # mfhi        $s0 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25cfb4u;
    SET_GPR_U64(ctx, 16, ctx->hi);
label_25cfb8:
    // 0x25cfb8: 0x0  nop
    ctx->pc = 0x25cfb8u;
    // NOP
label_25cfbc:
    // 0x25cfbc: 0x0  nop
    ctx->pc = 0x25cfbcu;
    // NOP
label_25cfc0:
    // 0x25cfc0: 0x69fa  dsrl        $t5, $zero, 7
    ctx->pc = 0x25cfc0u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 0) >> 7);
label_25cfc4:
    // 0x25cfc4: 0x8d60  .word       0x00008D60                   # add         $s1, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25cfc4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_25cfc8:
    // 0x25cfc8: 0x0  nop
    ctx->pc = 0x25cfc8u;
    // NOP
label_25cfcc:
    // 0x25cfcc: 0x0  nop
    ctx->pc = 0x25cfccu;
    // NOP
label_25cfd0:
    // 0x25cfd0: 0x6a0c  syscall     424
    ctx->pc = 0x25cfd0u;
    ctx->pc = 0x25CFD4u;
runtime->handleSyscall(rdram, ctx, 0x1A8u);
label_25cfd4:
    // 0x25cfd4: 0x9190  .word       0x00009190                   # mfhi        $s2 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25cfd4u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_25cfd8:
    // 0x25cfd8: 0x0  nop
    ctx->pc = 0x25cfd8u;
    // NOP
label_25cfdc:
    // 0x25cfdc: 0x0  nop
    ctx->pc = 0x25cfdcu;
    // NOP
label_25cfe0:
    // 0x25cfe0: 0x6a1f  .word       0x00006A1F                   # ddivu       $t5, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25cfe0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x25CFE0 raw=0x00006A1F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25cfe4:
    // 0x25cfe4: 0x7e40  sll         $t7, $zero, 25
    ctx->pc = 0x25cfe4u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 0), 25));
label_25cfe8:
    // 0x25cfe8: 0x0  nop
    ctx->pc = 0x25cfe8u;
    // NOP
label_25cfec:
    // 0x25cfec: 0x0  nop
    ctx->pc = 0x25cfecu;
    // NOP
label_25cff0:
    // 0x25cff0: 0x6a2f  .word       0x00006A2F                   # dsubu       $t5, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25cff0u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_25cff4:
    // 0x25cff4: 0x8b30  tge         $zero, $zero, 556
    ctx->pc = 0x25cff4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25cff8:
    // 0x25cff8: 0x0  nop
    ctx->pc = 0x25cff8u;
    // NOP
label_25cffc:
    // 0x25cffc: 0x0  nop
    ctx->pc = 0x25cffcu;
    // NOP
label_25d000:
    // 0x25d000: 0x6a41  .word       0x00006A41                   # INVALID     $zero, $zero, 0x6A41 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d000u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x25D000 raw=0x00006A41"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25d004:
    // 0x25d004: 0x8ca0  .word       0x00008CA0                   # add         $s1, $zero, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d004u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_25d008:
    // 0x25d008: 0x0  nop
    ctx->pc = 0x25d008u;
    // NOP
label_25d00c:
    // 0x25d00c: 0x0  nop
    ctx->pc = 0x25d00cu;
    // NOP
label_25d010:
    // 0x25d010: 0x6a53  .word       0x00006A53                   # mtlo        $zero # 00006A40 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d010u;
    ctx->lo = GPR_U64(ctx, 0);
label_25d014:
    // 0x25d014: 0x6820  add         $t5, $zero, $zero
    ctx->pc = 0x25d014u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_25d018:
    // 0x25d018: 0x0  nop
    ctx->pc = 0x25d018u;
    // NOP
label_25d01c:
    // 0x25d01c: 0x0  nop
    ctx->pc = 0x25d01cu;
    // NOP
label_25d020:
    // 0x25d020: 0x6a61  .word       0x00006A61                   # addu        $t5, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d020u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_25d024:
    // 0x25d024: 0x9650  .word       0x00009650                   # mfhi        $s2 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d024u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_25d028:
    // 0x25d028: 0x0  nop
    ctx->pc = 0x25d028u;
    // NOP
label_25d02c:
    // 0x25d02c: 0x0  nop
    ctx->pc = 0x25d02cu;
    // NOP
label_25d030:
    // 0x25d030: 0x6a74  teq         $zero, $zero, 425
    ctx->pc = 0x25d030u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25d034:
    // 0x25d034: 0x7c00  sll         $t7, $zero, 16
    ctx->pc = 0x25d034u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 0), 16));
label_25d038:
    // 0x25d038: 0x0  nop
    ctx->pc = 0x25d038u;
    // NOP
label_25d03c:
    // 0x25d03c: 0x0  nop
    ctx->pc = 0x25d03cu;
    // NOP
label_25d040:
    // 0x25d040: 0x6a84  .word       0x00006A84                   # sllv        $t5, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d040u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_25d044:
    // 0x25d044: 0x83e0  .word       0x000083E0                   # add         $s0, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d044u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_25d048:
    // 0x25d048: 0x0  nop
    ctx->pc = 0x25d048u;
    // NOP
label_25d04c:
    // 0x25d04c: 0x0  nop
    ctx->pc = 0x25d04cu;
    // NOP
label_25d050:
    // 0x25d050: 0x6a95  .word       0x00006A95                   # INVALID     $zero, $zero, 0x6A95 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d050u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x25D050 raw=0x00006A95"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25d054:
    // 0x25d054: 0x8500  sll         $s0, $zero, 20
    ctx->pc = 0x25d054u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 0), 20));
label_25d058:
    // 0x25d058: 0x0  nop
    ctx->pc = 0x25d058u;
    // NOP
label_25d05c:
    // 0x25d05c: 0x0  nop
    ctx->pc = 0x25d05cu;
    // NOP
label_25d060:
    // 0x25d060: 0x6aa6  .word       0x00006AA6                   # xor         $t5, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d060u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_25d064:
    // 0x25d064: 0x8690  .word       0x00008690                   # mfhi        $s0 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d064u;
    SET_GPR_U64(ctx, 16, ctx->hi);
label_25d068:
    // 0x25d068: 0x0  nop
    ctx->pc = 0x25d068u;
    // NOP
label_25d06c:
    // 0x25d06c: 0x0  nop
    ctx->pc = 0x25d06cu;
    // NOP
label_25d070:
    // 0x25d070: 0x6ab7  .word       0x00006AB7                   # INVALID     $zero, $zero, 0x6AB7 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d070u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x25D070 raw=0x00006AB7"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25d074:
    // 0x25d074: 0x8620  .word       0x00008620                   # add         $s0, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d074u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_25d078:
    // 0x25d078: 0x0  nop
    ctx->pc = 0x25d078u;
    // NOP
label_25d07c:
    // 0x25d07c: 0x0  nop
    ctx->pc = 0x25d07cu;
    // NOP
label_25d080:
    // 0x25d080: 0x6ac8  .word       0x00006AC8                   # jr          $zero # 00006AC0 <InstrIdType: CPU_SPECIAL>
label_25d084:
    if (ctx->pc == 0x25D084u) {
        ctx->pc = 0x25D084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D080u;
        // 0x25d084: 0x82c0  sll         $s0, $zero, 11 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25D088u;
        goto label_25d088;
    }
    ctx->pc = 0x25D080u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x25D084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D080u;
        // 0x25d084: 0x82c0  sll         $s0, $zero, 11 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25D080u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x25D088u;
label_25d088:
    // 0x25d088: 0x0  nop
    ctx->pc = 0x25d088u;
    // NOP
label_25d08c:
    // 0x25d08c: 0x0  nop
    ctx->pc = 0x25d08cu;
    // NOP
label_25d090:
    // 0x25d090: 0x6ad9  .word       0x00006AD9                   # multu       $zero, $zero # 00006AC0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d090u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
label_25d094:
    // 0x25d094: 0x75e0  .word       0x000075E0                   # add         $t6, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d094u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_25d098:
    // 0x25d098: 0x0  nop
    ctx->pc = 0x25d098u;
    // NOP
label_25d09c:
    // 0x25d09c: 0x0  nop
    ctx->pc = 0x25d09cu;
    // NOP
label_25d0a0:
    // 0x25d0a0: 0x6ae8  .word       0x00006AE8                   # mfsa        $t5 # 000002C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x25d0a0u;
    SET_GPR_U32(ctx, 13, ctx->sa);
label_25d0a4:
    // 0x25d0a4: 0x7d60  .word       0x00007D60                   # add         $t7, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d0a4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_25d0a8:
    // 0x25d0a8: 0x0  nop
    ctx->pc = 0x25d0a8u;
    // NOP
label_25d0ac:
    // 0x25d0ac: 0x0  nop
    ctx->pc = 0x25d0acu;
    // NOP
label_25d0b0:
    // 0x25d0b0: 0x6af8  dsll        $t5, $zero, 11
    ctx->pc = 0x25d0b0u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 0) << 11);
label_25d0b4:
    // 0x25d0b4: 0x84c0  sll         $s0, $zero, 19
    ctx->pc = 0x25d0b4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
label_25d0b8:
    // 0x25d0b8: 0x0  nop
    ctx->pc = 0x25d0b8u;
    // NOP
label_25d0bc:
    // 0x25d0bc: 0x0  nop
    ctx->pc = 0x25d0bcu;
    // NOP
label_25d0c0:
    // 0x25d0c0: 0x6b09  .word       0x00006B09                   # jalr        $t5, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
label_25d0c4:
    if (ctx->pc == 0x25D0C4u) {
        ctx->pc = 0x25D0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D0C0u;
        // 0x25d0c4: 0x8aa0  .word       0x00008AA0                   # add         $s1, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = 0x25D0C8u;
        goto label_25d0c8;
    }
    ctx->pc = 0x25D0C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 13, 0x25D0C8u);
        ctx->pc = 0x25D0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D0C0u;
        // 0x25d0c4: 0x8aa0  .word       0x00008AA0                   # add         $s1, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25D0C0u, 0x25D0C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25D0C8u;
label_25d0c8:
    // 0x25d0c8: 0x0  nop
    ctx->pc = 0x25d0c8u;
    // NOP
label_25d0cc:
    // 0x25d0cc: 0x0  nop
    ctx->pc = 0x25d0ccu;
    // NOP
label_25d0d0:
    // 0x25d0d0: 0x6b1b  .word       0x00006B1B                   # divu        $t5, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d0d0u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_25d0d4:
    // 0x25d0d4: 0x8ed0  .word       0x00008ED0                   # mfhi        $s1 # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d0d4u;
    SET_GPR_U64(ctx, 17, ctx->hi);
label_25d0d8:
    // 0x25d0d8: 0x0  nop
    ctx->pc = 0x25d0d8u;
    // NOP
label_25d0dc:
    // 0x25d0dc: 0x0  nop
    ctx->pc = 0x25d0dcu;
    // NOP
label_25d0e0:
    // 0x25d0e0: 0x6b2d  .word       0x00006B2D                   # daddu       $t5, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d0e0u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25d0e4:
    // 0x25d0e4: 0x7f20  .word       0x00007F20                   # add         $t7, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d0e4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_25d0e8:
    // 0x25d0e8: 0x0  nop
    ctx->pc = 0x25d0e8u;
    // NOP
label_25d0ec:
    // 0x25d0ec: 0x0  nop
    ctx->pc = 0x25d0ecu;
    // NOP
label_25d0f0:
    // 0x25d0f0: 0x6b3d  .word       0x00006B3D                   # INVALID     $zero, $zero, 0x6B3D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d0f0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x25D0F0 raw=0x00006B3D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25d0f4:
    // 0x25d0f4: 0x71e0  .word       0x000071E0                   # add         $t6, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d0f4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_25d0f8:
    // 0x25d0f8: 0x0  nop
    ctx->pc = 0x25d0f8u;
    // NOP
label_25d0fc:
    // 0x25d0fc: 0x0  nop
    ctx->pc = 0x25d0fcu;
    // NOP
label_25d100:
    // 0x25d100: 0x6b4c  syscall     429
    ctx->pc = 0x25d100u;
    ctx->pc = 0x25D104u;
runtime->handleSyscall(rdram, ctx, 0x1ADu);
label_25d104:
    // 0x25d104: 0x9190  .word       0x00009190                   # mfhi        $s2 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d104u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_25d108:
    // 0x25d108: 0x0  nop
    ctx->pc = 0x25d108u;
    // NOP
label_25d10c:
    // 0x25d10c: 0x0  nop
    ctx->pc = 0x25d10cu;
    // NOP
label_25d110:
    // 0x25d110: 0x6b5f  .word       0x00006B5F                   # ddivu       $t5, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d110u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x25D110 raw=0x00006B5F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25d114:
    // 0x25d114: 0x9720  .word       0x00009720                   # add         $s2, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d114u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 18, (int32_t)result);     } }
label_25d118:
    // 0x25d118: 0x0  nop
    ctx->pc = 0x25d118u;
    // NOP
label_25d11c:
    // 0x25d11c: 0x0  nop
    ctx->pc = 0x25d11cu;
    // NOP
label_25d120:
    // 0x25d120: 0x6b72  tlt         $zero, $zero, 429
    ctx->pc = 0x25d120u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25d124:
    // 0x25d124: 0x8050  .word       0x00008050                   # mfhi        $s0 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d124u;
    SET_GPR_U64(ctx, 16, ctx->hi);
label_25d128:
    // 0x25d128: 0x0  nop
    ctx->pc = 0x25d128u;
    // NOP
label_25d12c:
    // 0x25d12c: 0x0  nop
    ctx->pc = 0x25d12cu;
    // NOP
label_25d130:
    // 0x25d130: 0x6b83  sra         $t5, $zero, 14
    ctx->pc = 0x25d130u;
    SET_GPR_S32(ctx, 13, SRA32(GPR_S32(ctx, 0), 14));
label_25d134:
    // 0x25d134: 0x8cc0  sll         $s1, $zero, 19
    ctx->pc = 0x25d134u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
label_25d138:
    // 0x25d138: 0x0  nop
    ctx->pc = 0x25d138u;
    // NOP
label_25d13c:
    // 0x25d13c: 0x0  nop
    ctx->pc = 0x25d13cu;
    // NOP
label_25d140:
    // 0x25d140: 0x6b95  .word       0x00006B95                   # INVALID     $zero, $zero, 0x6B95 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d140u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x25D140 raw=0x00006B95"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25d144:
    // 0x25d144: 0x8a00  sll         $s1, $zero, 8
    ctx->pc = 0x25d144u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 0), 8));
label_25d148:
    // 0x25d148: 0x0  nop
    ctx->pc = 0x25d148u;
    // NOP
label_25d14c:
    // 0x25d14c: 0x0  nop
    ctx->pc = 0x25d14cu;
    // NOP
label_25d150:
    // 0x25d150: 0x6ba7  .word       0x00006BA7                   # not         $t5, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d150u;
    SET_GPR_U64(ctx, 13, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_25d154:
    // 0x25d154: 0x82e0  .word       0x000082E0                   # add         $s0, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d154u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_25d158:
    // 0x25d158: 0x0  nop
    ctx->pc = 0x25d158u;
    // NOP
label_25d15c:
    // 0x25d15c: 0x0  nop
    ctx->pc = 0x25d15cu;
    // NOP
label_25d160:
    // 0x25d160: 0x6bb8  dsll        $t5, $zero, 14
    ctx->pc = 0x25d160u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 0) << 14);
label_25d164:
    // 0x25d164: 0x6f90  .word       0x00006F90                   # mfhi        $t5 # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d164u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_25d168:
    // 0x25d168: 0x0  nop
    ctx->pc = 0x25d168u;
    // NOP
label_25d16c:
    // 0x25d16c: 0x0  nop
    ctx->pc = 0x25d16cu;
    // NOP
label_25d170:
    // 0x25d170: 0x6bc6  .word       0x00006BC6                   # srlv        $t5, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d170u;
    SET_GPR_S32(ctx, 13, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_25d174:
    // 0x25d174: 0x8590  .word       0x00008590                   # mfhi        $s0 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d174u;
    SET_GPR_U64(ctx, 16, ctx->hi);
label_25d178:
    // 0x25d178: 0x0  nop
    ctx->pc = 0x25d178u;
    // NOP
label_25d17c:
    // 0x25d17c: 0x0  nop
    ctx->pc = 0x25d17cu;
    // NOP
label_25d180:
    // 0x25d180: 0x6bd7  .word       0x00006BD7                   # dsrav       $t5, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d180u;
    SET_GPR_S64(ctx, 13, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_25d184:
    // 0x25d184: 0x8c60  .word       0x00008C60                   # add         $s1, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d184u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_25d188:
    // 0x25d188: 0x0  nop
    ctx->pc = 0x25d188u;
    // NOP
label_25d18c:
    // 0x25d18c: 0x0  nop
    ctx->pc = 0x25d18cu;
    // NOP
label_25d190:
    // 0x25d190: 0x6be9  .word       0x00006BE9                   # mtsa        $zero # 00006BC0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x25d190u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_25d194:
    // 0x25d194: 0x8dc0  sll         $s1, $zero, 23
    ctx->pc = 0x25d194u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 0), 23));
label_25d198:
    // 0x25d198: 0x0  nop
    ctx->pc = 0x25d198u;
    // NOP
label_25d19c:
    // 0x25d19c: 0x0  nop
    ctx->pc = 0x25d19cu;
    // NOP
label_25d1a0:
    // 0x25d1a0: 0x6bfb  dsra        $t5, $zero, 15
    ctx->pc = 0x25d1a0u;
    SET_GPR_S64(ctx, 13, GPR_S64(ctx, 0) >> 15);
label_25d1a4:
    // 0x25d1a4: 0x8510  .word       0x00008510                   # mfhi        $s0 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d1a4u;
    SET_GPR_U64(ctx, 16, ctx->hi);
label_25d1a8:
    // 0x25d1a8: 0x0  nop
    ctx->pc = 0x25d1a8u;
    // NOP
label_25d1ac:
    // 0x25d1ac: 0x0  nop
    ctx->pc = 0x25d1acu;
    // NOP
label_25d1b0:
    // 0x25d1b0: 0x6c0c  syscall     432
    ctx->pc = 0x25d1b0u;
    ctx->pc = 0x25D1B4u;
runtime->handleSyscall(rdram, ctx, 0x1B0u);
label_25d1b4:
    // 0x25d1b4: 0x93e0  .word       0x000093E0                   # add         $s2, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d1b4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 18, (int32_t)result);     } }
label_25d1b8:
    // 0x25d1b8: 0x0  nop
    ctx->pc = 0x25d1b8u;
    // NOP
label_25d1bc:
    // 0x25d1bc: 0x0  nop
    ctx->pc = 0x25d1bcu;
    // NOP
label_25d1c0:
    // 0x25d1c0: 0x6c1f  .word       0x00006C1F                   # ddivu       $t5, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d1c0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x25D1C0 raw=0x00006C1F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25d1c4:
    // 0x25d1c4: 0x9090  .word       0x00009090                   # mfhi        $s2 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d1c4u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_25d1c8:
    // 0x25d1c8: 0x0  nop
    ctx->pc = 0x25d1c8u;
    // NOP
label_25d1cc:
    // 0x25d1cc: 0x0  nop
    ctx->pc = 0x25d1ccu;
    // NOP
label_25d1d0:
    // 0x25d1d0: 0x6c32  tlt         $zero, $zero, 432
    ctx->pc = 0x25d1d0u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25d1d4:
    // 0x25d1d4: 0x90d0  .word       0x000090D0                   # mfhi        $s2 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d1d4u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_25d1d8:
    // 0x25d1d8: 0x0  nop
    ctx->pc = 0x25d1d8u;
    // NOP
label_25d1dc:
    // 0x25d1dc: 0x0  nop
    ctx->pc = 0x25d1dcu;
    // NOP
label_25d1e0:
    // 0x25d1e0: 0x6c45  .word       0x00006C45                   # INVALID     $zero, $zero, 0x6C45 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d1e0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x25D1E0 raw=0x00006C45"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25d1e4:
    // 0x25d1e4: 0x89b0  tge         $zero, $zero, 550
    ctx->pc = 0x25d1e4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25d1e8:
    // 0x25d1e8: 0x0  nop
    ctx->pc = 0x25d1e8u;
    // NOP
label_25d1ec:
    // 0x25d1ec: 0x0  nop
    ctx->pc = 0x25d1ecu;
    // NOP
label_25d1f0:
    // 0x25d1f0: 0x6c57  .word       0x00006C57                   # dsrav       $t5, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d1f0u;
    SET_GPR_S64(ctx, 13, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_25d1f4:
    // 0x25d1f4: 0xa0f0  tge         $zero, $zero, 643
    ctx->pc = 0x25d1f4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25d1f8:
    // 0x25d1f8: 0x0  nop
    ctx->pc = 0x25d1f8u;
    // NOP
label_25d1fc:
    // 0x25d1fc: 0x0  nop
    ctx->pc = 0x25d1fcu;
    // NOP
label_25d200:
    // 0x25d200: 0x6c6c  .word       0x00006C6C                   # dadd        $t5, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d200u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 13, r); }
label_25d204:
    // 0x25d204: 0x8e70  tge         $zero, $zero, 569
    ctx->pc = 0x25d204u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25d208:
    // 0x25d208: 0x0  nop
    ctx->pc = 0x25d208u;
    // NOP
label_25d20c:
    // 0x25d20c: 0x0  nop
    ctx->pc = 0x25d20cu;
    // NOP
label_25d210:
    // 0x25d210: 0x6c7e  dsrl32      $t5, $zero, 17
    ctx->pc = 0x25d210u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 0) >> (32 + 17));
label_25d214:
    // 0x25d214: 0x78a0  .word       0x000078A0                   # add         $t7, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d214u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_25d218:
    // 0x25d218: 0x0  nop
    ctx->pc = 0x25d218u;
    // NOP
label_25d21c:
    // 0x25d21c: 0x0  nop
    ctx->pc = 0x25d21cu;
    // NOP
label_25d220:
    // 0x25d220: 0x6c8e  .word       0x00006C8E                   # INVALID     $zero, $zero, 0x6C8E # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d220u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x25D220 raw=0x00006C8E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25d224:
    // 0x25d224: 0xc9c0  sll         $t9, $zero, 7
    ctx->pc = 0x25d224u;
    SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 0), 7));
label_25d228:
    // 0x25d228: 0x0  nop
    ctx->pc = 0x25d228u;
    // NOP
label_25d22c:
    // 0x25d22c: 0x0  nop
    ctx->pc = 0x25d22cu;
    // NOP
label_25d230:
    // 0x25d230: 0x6ca8  .word       0x00006CA8                   # mfsa        $t5 # 00000480 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x25d230u;
    SET_GPR_U32(ctx, 13, ctx->sa);
label_25d234:
    // 0x25d234: 0xda80  sll         $k1, $zero, 10
    ctx->pc = 0x25d234u;
    SET_GPR_S32(ctx, 27, (int32_t)SLL32(GPR_U32(ctx, 0), 10));
label_25d238:
    // 0x25d238: 0x0  nop
    ctx->pc = 0x25d238u;
    // NOP
label_25d23c:
    // 0x25d23c: 0x0  nop
    ctx->pc = 0x25d23cu;
    // NOP
label_25d240:
    // 0x25d240: 0x6cc4  .word       0x00006CC4                   # sllv        $t5, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d240u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_25d244:
    // 0x25d244: 0xe160  .word       0x0000E160                   # add         $gp, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d244u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 28, (int32_t)result);     } }
label_25d248:
    // 0x25d248: 0x0  nop
    ctx->pc = 0x25d248u;
    // NOP
label_25d24c:
    // 0x25d24c: 0x0  nop
    ctx->pc = 0x25d24cu;
    // NOP
label_25d250:
    // 0x25d250: 0x6ce1  .word       0x00006CE1                   # addu        $t5, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d250u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_25d254:
    // 0x25d254: 0xc960  .word       0x0000C960                   # add         $t9, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d254u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 25, (int32_t)result);     } }
label_25d258:
    // 0x25d258: 0x0  nop
    ctx->pc = 0x25d258u;
    // NOP
label_25d25c:
    // 0x25d25c: 0x0  nop
    ctx->pc = 0x25d25cu;
    // NOP
label_25d260:
    // 0x25d260: 0x6cfb  dsra        $t5, $zero, 19
    ctx->pc = 0x25d260u;
    SET_GPR_S64(ctx, 13, GPR_S64(ctx, 0) >> 19);
label_25d264:
    // 0x25d264: 0xa810  mfhi        $s5
    ctx->pc = 0x25d264u;
    SET_GPR_U64(ctx, 21, ctx->hi);
label_25d268:
    // 0x25d268: 0x0  nop
    ctx->pc = 0x25d268u;
    // NOP
label_25d26c:
    // 0x25d26c: 0x0  nop
    ctx->pc = 0x25d26cu;
    // NOP
label_25d270:
    // 0x25d270: 0x6d11  .word       0x00006D11                   # mthi        $zero # 00006D00 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d270u;
    ctx->hi = GPR_U64(ctx, 0);
label_25d274:
    // 0x25d274: 0xd1d0  .word       0x0000D1D0                   # mfhi        $k0 # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d274u;
    SET_GPR_U64(ctx, 26, ctx->hi);
label_25d278:
    // 0x25d278: 0x0  nop
    ctx->pc = 0x25d278u;
    // NOP
label_25d27c:
    // 0x25d27c: 0x0  nop
    ctx->pc = 0x25d27cu;
    // NOP
label_25d280:
    // 0x25d280: 0x6d2c  .word       0x00006D2C                   # dadd        $t5, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d280u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 13, r); }
label_25d284:
    // 0x25d284: 0xef60  .word       0x0000EF60                   # add         $sp, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d284u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 29, (int32_t)result);     } }
label_25d288:
    // 0x25d288: 0x0  nop
    ctx->pc = 0x25d288u;
    // NOP
label_25d28c:
    // 0x25d28c: 0x0  nop
    ctx->pc = 0x25d28cu;
    // NOP
label_25d290:
    // 0x25d290: 0x6d4a  .word       0x00006D4A                   # movz        $t5, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d290u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 13, GPR_VEC(ctx, 0));
label_25d294:
    // 0x25d294: 0xe110  .word       0x0000E110                   # mfhi        $gp # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d294u;
    SET_GPR_U64(ctx, 28, ctx->hi);
label_25d298:
    // 0x25d298: 0x0  nop
    ctx->pc = 0x25d298u;
    // NOP
label_25d29c:
    // 0x25d29c: 0x0  nop
    ctx->pc = 0x25d29cu;
    // NOP
label_25d2a0:
    // 0x25d2a0: 0x6d67  .word       0x00006D67                   # not         $t5, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d2a0u;
    SET_GPR_U64(ctx, 13, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_25d2a4:
    // 0x25d2a4: 0xb160  .word       0x0000B160                   # add         $s6, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d2a4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
label_25d2a8:
    // 0x25d2a8: 0x0  nop
    ctx->pc = 0x25d2a8u;
    // NOP
label_25d2ac:
    // 0x25d2ac: 0x0  nop
    ctx->pc = 0x25d2acu;
    // NOP
label_25d2b0:
    // 0x25d2b0: 0x6d7e  dsrl32      $t5, $zero, 21
    ctx->pc = 0x25d2b0u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 0) >> (32 + 21));
label_25d2b4:
    // 0x25d2b4: 0xc8f0  tge         $zero, $zero, 803
    ctx->pc = 0x25d2b4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25d2b8:
    // 0x25d2b8: 0x0  nop
    ctx->pc = 0x25d2b8u;
    // NOP
label_25d2bc:
    // 0x25d2bc: 0x0  nop
    ctx->pc = 0x25d2bcu;
    // NOP
label_25d2c0:
    // 0x25d2c0: 0x6d98  .word       0x00006D98                   # mult        $t5, $zero, $zero # 00000580 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x25d2c0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
label_25d2c4:
    // 0x25d2c4: 0xd3d0  .word       0x0000D3D0                   # mfhi        $k0 # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d2c4u;
    SET_GPR_U64(ctx, 26, ctx->hi);
label_25d2c8:
    // 0x25d2c8: 0x0  nop
    ctx->pc = 0x25d2c8u;
    // NOP
label_25d2cc:
    // 0x25d2cc: 0x0  nop
    ctx->pc = 0x25d2ccu;
    // NOP
label_25d2d0:
    // 0x25d2d0: 0x6db3  tltu        $zero, $zero, 438
    ctx->pc = 0x25d2d0u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25d2d4:
    // 0x25d2d4: 0xedc0  sll         $sp, $zero, 23
    ctx->pc = 0x25d2d4u;
    SET_GPR_S32(ctx, 29, (int32_t)SLL32(GPR_U32(ctx, 0), 23));
label_25d2d8:
    // 0x25d2d8: 0x0  nop
    ctx->pc = 0x25d2d8u;
    // NOP
label_25d2dc:
    // 0x25d2dc: 0x0  nop
    ctx->pc = 0x25d2dcu;
    // NOP
label_25d2e0:
    // 0x25d2e0: 0x6dd1  .word       0x00006DD1                   # mthi        $zero # 00006DC0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d2e0u;
    ctx->hi = GPR_U64(ctx, 0);
label_25d2e4:
    // 0x25d2e4: 0xdd50  .word       0x0000DD50                   # mfhi        $k1 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d2e4u;
    SET_GPR_U64(ctx, 27, ctx->hi);
label_25d2e8:
    // 0x25d2e8: 0x0  nop
    ctx->pc = 0x25d2e8u;
    // NOP
label_25d2ec:
    // 0x25d2ec: 0x0  nop
    ctx->pc = 0x25d2ecu;
    // NOP
label_25d2f0:
    // 0x25d2f0: 0x6ded  .word       0x00006DED                   # daddu       $t5, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d2f0u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25d2f4:
    // 0x25d2f4: 0xc870  tge         $zero, $zero, 801
    ctx->pc = 0x25d2f4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25d2f8:
    // 0x25d2f8: 0x0  nop
    ctx->pc = 0x25d2f8u;
    // NOP
label_25d2fc:
    // 0x25d2fc: 0x0  nop
    ctx->pc = 0x25d2fcu;
    // NOP
label_25d300:
    // 0x25d300: 0x6e07  .word       0x00006E07                   # srav        $t5, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d300u;
    SET_GPR_S32(ctx, 13, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_25d304:
    // 0x25d304: 0xe3c0  sll         $gp, $zero, 15
    ctx->pc = 0x25d304u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 0), 15));
label_25d308:
    // 0x25d308: 0x0  nop
    ctx->pc = 0x25d308u;
    // NOP
label_25d30c:
    // 0x25d30c: 0x0  nop
    ctx->pc = 0x25d30cu;
    // NOP
label_25d310:
    // 0x25d310: 0x6e24  .word       0x00006E24                   # and         $t5, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d310u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_25d314:
    // 0x25d314: 0xd9e0  .word       0x0000D9E0                   # add         $k1, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d314u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 27, (int32_t)result);     } }
label_25d318:
    // 0x25d318: 0x0  nop
    ctx->pc = 0x25d318u;
    // NOP
label_25d31c:
    // 0x25d31c: 0x0  nop
    ctx->pc = 0x25d31cu;
    // NOP
label_25d320:
    // 0x25d320: 0x6e40  sll         $t5, $zero, 25
    ctx->pc = 0x25d320u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 0), 25));
label_25d324:
    // 0x25d324: 0xb470  tge         $zero, $zero, 721
    ctx->pc = 0x25d324u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25d328:
    // 0x25d328: 0x0  nop
    ctx->pc = 0x25d328u;
    // NOP
label_25d32c:
    // 0x25d32c: 0x0  nop
    ctx->pc = 0x25d32cu;
    // NOP
label_25d330:
    // 0x25d330: 0x6e57  .word       0x00006E57                   # dsrav       $t5, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d330u;
    SET_GPR_S64(ctx, 13, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_25d334:
    // 0x25d334: 0xb5e0  .word       0x0000B5E0                   # add         $s6, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d334u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
label_25d338:
    // 0x25d338: 0x0  nop
    ctx->pc = 0x25d338u;
    // NOP
label_25d33c:
    // 0x25d33c: 0x0  nop
    ctx->pc = 0x25d33cu;
    // NOP
label_25d340:
    // 0x25d340: 0x6e6e  .word       0x00006E6E                   # dsub        $t5, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d340u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 13, r); }
label_25d344:
    // 0x25d344: 0xc670  tge         $zero, $zero, 793
    ctx->pc = 0x25d344u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25d348:
    // 0x25d348: 0x0  nop
    ctx->pc = 0x25d348u;
    // NOP
label_25d34c:
    // 0x25d34c: 0x0  nop
    ctx->pc = 0x25d34cu;
    // NOP
label_25d350:
    // 0x25d350: 0x6e87  .word       0x00006E87                   # srav        $t5, $zero, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d350u;
    SET_GPR_S32(ctx, 13, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_25d354:
    // 0x25d354: 0xdf20  .word       0x0000DF20                   # add         $k1, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d354u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 27, (int32_t)result);     } }
label_25d358:
    // 0x25d358: 0x0  nop
    ctx->pc = 0x25d358u;
    // NOP
label_25d35c:
    // 0x25d35c: 0x0  nop
    ctx->pc = 0x25d35cu;
    // NOP
label_25d360:
    // 0x25d360: 0x6ea3  .word       0x00006EA3                   # negu        $t5, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d360u;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_25d364:
    // 0x25d364: 0x9660  .word       0x00009660                   # add         $s2, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d364u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 18, (int32_t)result);     } }
label_25d368:
    // 0x25d368: 0x0  nop
    ctx->pc = 0x25d368u;
    // NOP
label_25d36c:
    // 0x25d36c: 0x0  nop
    ctx->pc = 0x25d36cu;
    // NOP
label_25d370:
    // 0x25d370: 0x6eb6  tne         $zero, $zero, 442
    ctx->pc = 0x25d370u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25d374:
    // 0x25d374: 0xf000  sll         $fp, $zero, 0
    ctx->pc = 0x25d374u;
    SET_GPR_S32(ctx, 30, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_25d378:
    // 0x25d378: 0x0  nop
    ctx->pc = 0x25d378u;
    // NOP
label_25d37c:
    // 0x25d37c: 0x0  nop
    ctx->pc = 0x25d37cu;
    // NOP
label_25d380:
    // 0x25d380: 0x6ed4  .word       0x00006ED4                   # dsllv       $t5, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d380u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_25d384:
    // 0x25d384: 0xa490  .word       0x0000A490                   # mfhi        $s4 # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d384u;
    SET_GPR_U64(ctx, 20, ctx->hi);
label_25d388:
    // 0x25d388: 0x0  nop
    ctx->pc = 0x25d388u;
    // NOP
label_25d38c:
    // 0x25d38c: 0x0  nop
    ctx->pc = 0x25d38cu;
    // NOP
label_25d390:
    // 0x25d390: 0x6ee9  .word       0x00006EE9                   # mtsa        $zero # 00006EC0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x25d390u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_25d394:
    // 0x25d394: 0xd2e0  .word       0x0000D2E0                   # add         $k0, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d394u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 26, (int32_t)result);     } }
label_25d398:
    // 0x25d398: 0x0  nop
    ctx->pc = 0x25d398u;
    // NOP
label_25d39c:
    // 0x25d39c: 0x0  nop
    ctx->pc = 0x25d39cu;
    // NOP
label_25d3a0:
    // 0x25d3a0: 0x6f04  .word       0x00006F04                   # sllv        $t5, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d3a0u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_25d3a4:
    // 0x25d3a4: 0xce90  .word       0x0000CE90                   # mfhi        $t9 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d3a4u;
    SET_GPR_U64(ctx, 25, ctx->hi);
label_25d3a8:
    // 0x25d3a8: 0x0  nop
    ctx->pc = 0x25d3a8u;
    // NOP
label_25d3ac:
    // 0x25d3ac: 0x0  nop
    ctx->pc = 0x25d3acu;
    // NOP
label_25d3b0:
    // 0x25d3b0: 0x6f1e  .word       0x00006F1E                   # ddiv        $t5, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d3b0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x25D3B0 raw=0x00006F1E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25d3b4:
    // 0x25d3b4: 0xc290  .word       0x0000C290                   # mfhi        $t8 # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d3b4u;
    SET_GPR_U64(ctx, 24, ctx->hi);
label_25d3b8:
    // 0x25d3b8: 0x0  nop
    ctx->pc = 0x25d3b8u;
    // NOP
label_25d3bc:
    // 0x25d3bc: 0x0  nop
    ctx->pc = 0x25d3bcu;
    // NOP
label_25d3c0:
    // 0x25d3c0: 0x6f37  .word       0x00006F37                   # INVALID     $zero, $zero, 0x6F37 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d3c0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x25D3C0 raw=0x00006F37"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25d3c4:
    // 0x25d3c4: 0xdf70  tge         $zero, $zero, 893
    ctx->pc = 0x25d3c4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25d3c8:
    // 0x25d3c8: 0x0  nop
    ctx->pc = 0x25d3c8u;
    // NOP
label_25d3cc:
    // 0x25d3cc: 0x0  nop
    ctx->pc = 0x25d3ccu;
    // NOP
label_25d3d0:
    // 0x25d3d0: 0x6f53  .word       0x00006F53                   # mtlo        $zero # 00006F40 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d3d0u;
    ctx->lo = GPR_U64(ctx, 0);
label_25d3d4:
    // 0x25d3d4: 0xb500  sll         $s6, $zero, 20
    ctx->pc = 0x25d3d4u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 0), 20));
label_25d3d8:
    // 0x25d3d8: 0x0  nop
    ctx->pc = 0x25d3d8u;
    // NOP
label_25d3dc:
    // 0x25d3dc: 0x0  nop
    ctx->pc = 0x25d3dcu;
    // NOP
label_25d3e0:
    // 0x25d3e0: 0x6f6a  .word       0x00006F6A                   # slt         $t5, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d3e0u;
    SET_GPR_U64(ctx, 13, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_25d3e4:
    // 0x25d3e4: 0xcc70  tge         $zero, $zero, 817
    ctx->pc = 0x25d3e4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25d3e8:
    // 0x25d3e8: 0x0  nop
    ctx->pc = 0x25d3e8u;
    // NOP
label_25d3ec:
    // 0x25d3ec: 0x0  nop
    ctx->pc = 0x25d3ecu;
    // NOP
label_25d3f0:
    // 0x25d3f0: 0x6f84  .word       0x00006F84                   # sllv        $t5, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d3f0u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_25d3f4:
    // 0x25d3f4: 0xdcc0  sll         $k1, $zero, 19
    ctx->pc = 0x25d3f4u;
    SET_GPR_S32(ctx, 27, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
label_25d3f8:
    // 0x25d3f8: 0x0  nop
    ctx->pc = 0x25d3f8u;
    // NOP
label_25d3fc:
    // 0x25d3fc: 0x0  nop
    ctx->pc = 0x25d3fcu;
    // NOP
label_25d400:
    // 0x25d400: 0x6fa0  .word       0x00006FA0                   # add         $t5, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d400u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_25d404:
    // 0x25d404: 0xdb10  .word       0x0000DB10                   # mfhi        $k1 # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d404u;
    SET_GPR_U64(ctx, 27, ctx->hi);
label_25d408:
    // 0x25d408: 0x0  nop
    ctx->pc = 0x25d408u;
    // NOP
label_25d40c:
    // 0x25d40c: 0x0  nop
    ctx->pc = 0x25d40cu;
    // NOP
label_25d410:
    // 0x25d410: 0x6fbc  dsll32      $t5, $zero, 30
    ctx->pc = 0x25d410u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 0) << (32 + 30));
label_25d414:
    // 0x25d414: 0xb380  sll         $s6, $zero, 14
    ctx->pc = 0x25d414u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 0), 14));
label_25d418:
    // 0x25d418: 0x0  nop
    ctx->pc = 0x25d418u;
    // NOP
label_25d41c:
    // 0x25d41c: 0x0  nop
    ctx->pc = 0x25d41cu;
    // NOP
label_25d420:
    // 0x25d420: 0x6fd3  .word       0x00006FD3                   # mtlo        $zero # 00006FC0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d420u;
    ctx->lo = GPR_U64(ctx, 0);
label_25d424:
    // 0x25d424: 0xd140  sll         $k0, $zero, 5
    ctx->pc = 0x25d424u;
    SET_GPR_S32(ctx, 26, (int32_t)SLL32(GPR_U32(ctx, 0), 5));
label_25d428:
    // 0x25d428: 0x0  nop
    ctx->pc = 0x25d428u;
    // NOP
label_25d42c:
    // 0x25d42c: 0x0  nop
    ctx->pc = 0x25d42cu;
    // NOP
label_25d430:
    // 0x25d430: 0x6fee  .word       0x00006FEE                   # dsub        $t5, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d430u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 13, r); }
label_25d434:
    // 0x25d434: 0xd520  .word       0x0000D520                   # add         $k0, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d434u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 26, (int32_t)result);     } }
label_25d438:
    // 0x25d438: 0x0  nop
    ctx->pc = 0x25d438u;
    // NOP
label_25d43c:
    // 0x25d43c: 0x0  nop
    ctx->pc = 0x25d43cu;
    // NOP
label_25d440:
    // 0x25d440: 0x7009  jalr        $t6, $zero
label_25d444:
    if (ctx->pc == 0x25D444u) {
        ctx->pc = 0x25D444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D440u;
        // 0x25d444: 0xbd00  sll         $s7, $zero, 20 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25D448u;
        goto label_25d448;
    }
    ctx->pc = 0x25D440u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 14, 0x25D448u);
        ctx->pc = 0x25D444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D440u;
        // 0x25d444: 0xbd00  sll         $s7, $zero, 20 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25D440u, 0x25D448u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25D448u;
label_25d448:
    // 0x25d448: 0x0  nop
    ctx->pc = 0x25d448u;
    // NOP
label_25d44c:
    // 0x25d44c: 0x0  nop
    ctx->pc = 0x25d44cu;
    // NOP
label_25d450:
    // 0x25d450: 0x7021  addu        $t6, $zero, $zero
    ctx->pc = 0x25d450u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_25d454:
    // 0x25d454: 0xc3e0  .word       0x0000C3E0                   # add         $t8, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d454u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 24, (int32_t)result);     } }
label_25d458:
    // 0x25d458: 0x0  nop
    ctx->pc = 0x25d458u;
    // NOP
label_25d45c:
    // 0x25d45c: 0x0  nop
    ctx->pc = 0x25d45cu;
    // NOP
label_25d460:
    // 0x25d460: 0x703a  dsrl        $t6, $zero, 0
    ctx->pc = 0x25d460u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) >> 0);
label_25d464:
    // 0x25d464: 0xb540  sll         $s6, $zero, 21
    ctx->pc = 0x25d464u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 0), 21));
label_25d468:
    // 0x25d468: 0x0  nop
    ctx->pc = 0x25d468u;
    // NOP
label_25d46c:
    // 0x25d46c: 0x0  nop
    ctx->pc = 0x25d46cu;
    // NOP
label_25d470:
    // 0x25d470: 0x7051  .word       0x00007051                   # mthi        $zero # 00007040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d470u;
    ctx->hi = GPR_U64(ctx, 0);
label_25d474:
    // 0x25d474: 0x67d0  .word       0x000067D0                   # mfhi        $t4 # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d474u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_25d478:
    // 0x25d478: 0x0  nop
    ctx->pc = 0x25d478u;
    // NOP
label_25d47c:
    // 0x25d47c: 0x0  nop
    ctx->pc = 0x25d47cu;
    // NOP
label_25d480:
    // 0x25d480: 0x705e  .word       0x0000705E                   # ddiv        $t6, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d480u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x25D480 raw=0x0000705E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25d484:
    // 0x25d484: 0xac80  sll         $s5, $zero, 18
    ctx->pc = 0x25d484u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 0), 18));
label_25d488:
    // 0x25d488: 0x0  nop
    ctx->pc = 0x25d488u;
    // NOP
label_25d48c:
    // 0x25d48c: 0x0  nop
    ctx->pc = 0x25d48cu;
    // NOP
label_25d490:
    // 0x25d490: 0x7074  teq         $zero, $zero, 449
    ctx->pc = 0x25d490u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25d494:
    // 0x25d494: 0xba10  .word       0x0000BA10                   # mfhi        $s7 # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d494u;
    SET_GPR_U64(ctx, 23, ctx->hi);
label_25d498:
    // 0x25d498: 0x0  nop
    ctx->pc = 0x25d498u;
    // NOP
label_25d49c:
    // 0x25d49c: 0x0  nop
    ctx->pc = 0x25d49cu;
    // NOP
label_25d4a0:
    // 0x25d4a0: 0x708c  syscall     450
    ctx->pc = 0x25d4a0u;
    ctx->pc = 0x25D4A4u;
runtime->handleSyscall(rdram, ctx, 0x1C2u);
label_25d4a4:
    // 0x25d4a4: 0xc420  .word       0x0000C420                   # add         $t8, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d4a4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 24, (int32_t)result);     } }
label_25d4a8:
    // 0x25d4a8: 0x0  nop
    ctx->pc = 0x25d4a8u;
    // NOP
label_25d4ac:
    // 0x25d4ac: 0x0  nop
    ctx->pc = 0x25d4acu;
    // NOP
label_25d4b0:
    // 0x25d4b0: 0x70a5  .word       0x000070A5                   # move        $t6, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d4b0u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_25d4b4:
    // 0x25d4b4: 0xe9e0  .word       0x0000E9E0                   # add         $sp, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d4b4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 29, (int32_t)result);     } }
label_25d4b8:
    // 0x25d4b8: 0x0  nop
    ctx->pc = 0x25d4b8u;
    // NOP
label_25d4bc:
    // 0x25d4bc: 0x0  nop
    ctx->pc = 0x25d4bcu;
    // NOP
label_25d4c0:
    // 0x25d4c0: 0x70c3  sra         $t6, $zero, 3
    ctx->pc = 0x25d4c0u;
    SET_GPR_S32(ctx, 14, SRA32(GPR_S32(ctx, 0), 3));
label_25d4c4:
    // 0x25d4c4: 0xe530  tge         $zero, $zero, 916
    ctx->pc = 0x25d4c4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25d4c8:
    // 0x25d4c8: 0x0  nop
    ctx->pc = 0x25d4c8u;
    // NOP
label_25d4cc:
    // 0x25d4cc: 0x0  nop
    ctx->pc = 0x25d4ccu;
    // NOP
label_25d4d0:
    // 0x25d4d0: 0x70e0  .word       0x000070E0                   # add         $t6, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d4d0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_25d4d4:
    // 0x25d4d4: 0xce20  .word       0x0000CE20                   # add         $t9, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d4d4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 25, (int32_t)result);     } }
label_25d4d8:
    // 0x25d4d8: 0x0  nop
    ctx->pc = 0x25d4d8u;
    // NOP
label_25d4dc:
    // 0x25d4dc: 0x0  nop
    ctx->pc = 0x25d4dcu;
    // NOP
label_25d4e0:
    // 0x25d4e0: 0x70fa  dsrl        $t6, $zero, 3
    ctx->pc = 0x25d4e0u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) >> 3);
label_25d4e4:
    // 0x25d4e4: 0xcb10  .word       0x0000CB10                   # mfhi        $t9 # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d4e4u;
    SET_GPR_U64(ctx, 25, ctx->hi);
label_25d4e8:
    // 0x25d4e8: 0x0  nop
    ctx->pc = 0x25d4e8u;
    // NOP
label_25d4ec:
    // 0x25d4ec: 0x0  nop
    ctx->pc = 0x25d4ecu;
    // NOP
label_25d4f0:
    // 0x25d4f0: 0x7114  .word       0x00007114                   # dsllv       $t6, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d4f0u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_25d4f4:
    // 0x25d4f4: 0xcdc0  sll         $t9, $zero, 23
    ctx->pc = 0x25d4f4u;
    SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 0), 23));
label_25d4f8:
    // 0x25d4f8: 0x0  nop
    ctx->pc = 0x25d4f8u;
    // NOP
label_25d4fc:
    // 0x25d4fc: 0x0  nop
    ctx->pc = 0x25d4fcu;
    // NOP
label_25d500:
    // 0x25d500: 0x712e  .word       0x0000712E                   # dsub        $t6, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d500u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 14, r); }
label_25d504:
    // 0x25d504: 0xcb40  sll         $t9, $zero, 13
    ctx->pc = 0x25d504u;
    SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 0), 13));
label_25d508:
    // 0x25d508: 0x0  nop
    ctx->pc = 0x25d508u;
    // NOP
label_25d50c:
    // 0x25d50c: 0x0  nop
    ctx->pc = 0x25d50cu;
    // NOP
label_25d510:
    // 0x25d510: 0x7148  .word       0x00007148                   # jr          $zero # 00007140 <InstrIdType: CPU_SPECIAL>
label_25d514:
    if (ctx->pc == 0x25D514u) {
        ctx->pc = 0x25D514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D510u;
        // 0x25d514: 0xe370  tge         $zero, $zero, 909 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x25D518u;
        goto label_25d518;
    }
    ctx->pc = 0x25D510u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x25D514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D510u;
        // 0x25d514: 0xe370  tge         $zero, $zero, 909 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25D510u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x25D518u;
label_25d518:
    // 0x25d518: 0x0  nop
    ctx->pc = 0x25d518u;
    // NOP
label_25d51c:
    // 0x25d51c: 0x0  nop
    ctx->pc = 0x25d51cu;
    // NOP
label_25d520:
    // 0x25d520: 0x7165  .word       0x00007165                   # move        $t6, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d520u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_25d524:
    // 0x25d524: 0xe480  sll         $gp, $zero, 18
    ctx->pc = 0x25d524u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 0), 18));
label_25d528:
    // 0x25d528: 0x0  nop
    ctx->pc = 0x25d528u;
    // NOP
label_25d52c:
    // 0x25d52c: 0x0  nop
    ctx->pc = 0x25d52cu;
    // NOP
label_25d530:
    // 0x25d530: 0x7182  srl         $t6, $zero, 6
    ctx->pc = 0x25d530u;
    SET_GPR_S32(ctx, 14, (int32_t)SRL32(GPR_U32(ctx, 0), 6));
label_25d534:
    // 0x25d534: 0xdcb0  tge         $zero, $zero, 882
    ctx->pc = 0x25d534u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25d538:
    // 0x25d538: 0x0  nop
    ctx->pc = 0x25d538u;
    // NOP
label_25d53c:
    // 0x25d53c: 0x0  nop
    ctx->pc = 0x25d53cu;
    // NOP
label_25d540:
    // 0x25d540: 0x719e  .word       0x0000719E                   # ddiv        $t6, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d540u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x25D540 raw=0x0000719E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25d544:
    // 0x25d544: 0xde80  sll         $k1, $zero, 26
    ctx->pc = 0x25d544u;
    SET_GPR_S32(ctx, 27, (int32_t)SLL32(GPR_U32(ctx, 0), 26));
label_25d548:
    // 0x25d548: 0x0  nop
    ctx->pc = 0x25d548u;
    // NOP
label_25d54c:
    // 0x25d54c: 0x0  nop
    ctx->pc = 0x25d54cu;
    // NOP
label_25d550:
    // 0x25d550: 0x71ba  dsrl        $t6, $zero, 6
    ctx->pc = 0x25d550u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) >> 6);
label_25d554:
    // 0x25d554: 0xe6a0  .word       0x0000E6A0                   # add         $gp, $zero, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d554u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 28, (int32_t)result);     } }
label_25d558:
    // 0x25d558: 0x0  nop
    ctx->pc = 0x25d558u;
    // NOP
label_25d55c:
    // 0x25d55c: 0x0  nop
    ctx->pc = 0x25d55cu;
    // NOP
label_25d560:
    // 0x25d560: 0x71d7  .word       0x000071D7                   # dsrav       $t6, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d560u;
    SET_GPR_S64(ctx, 14, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_25d564:
    // 0x25d564: 0xe720  .word       0x0000E720                   # add         $gp, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d564u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 28, (int32_t)result);     } }
label_25d568:
    // 0x25d568: 0x0  nop
    ctx->pc = 0x25d568u;
    // NOP
label_25d56c:
    // 0x25d56c: 0x0  nop
    ctx->pc = 0x25d56cu;
    // NOP
label_25d570:
    // 0x25d570: 0x71f4  teq         $zero, $zero, 455
    ctx->pc = 0x25d570u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25d574:
    // 0x25d574: 0xc450  .word       0x0000C450                   # mfhi        $t8 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d574u;
    SET_GPR_U64(ctx, 24, ctx->hi);
label_25d578:
    // 0x25d578: 0x0  nop
    ctx->pc = 0x25d578u;
    // NOP
label_25d57c:
    // 0x25d57c: 0x0  nop
    ctx->pc = 0x25d57cu;
    // NOP
label_25d580:
    // 0x25d580: 0x720d  break       0, 456
    ctx->pc = 0x25d580u;
    runtime->handleBreak(rdram, ctx);
label_25d584:
    // 0x25d584: 0xd600  sll         $k0, $zero, 24
    ctx->pc = 0x25d584u;
    SET_GPR_S32(ctx, 26, (int32_t)SLL32(GPR_U32(ctx, 0), 24));
label_25d588:
    // 0x25d588: 0x0  nop
    ctx->pc = 0x25d588u;
    // NOP
label_25d58c:
    // 0x25d58c: 0x0  nop
    ctx->pc = 0x25d58cu;
    // NOP
label_25d590:
    // 0x25d590: 0x7228  .word       0x00007228                   # mfsa        $t6 # 00000200 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x25d590u;
    SET_GPR_U32(ctx, 14, ctx->sa);
label_25d594:
    // 0x25d594: 0xe150  .word       0x0000E150                   # mfhi        $gp # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d594u;
    SET_GPR_U64(ctx, 28, ctx->hi);
label_25d598:
    // 0x25d598: 0x0  nop
    ctx->pc = 0x25d598u;
    // NOP
label_25d59c:
    // 0x25d59c: 0x0  nop
    ctx->pc = 0x25d59cu;
    // NOP
label_25d5a0:
    // 0x25d5a0: 0x7245  .word       0x00007245                   # INVALID     $zero, $zero, 0x7245 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d5a0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x25D5A0 raw=0x00007245"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25d5a4:
    // 0x25d5a4: 0xcb20  .word       0x0000CB20                   # add         $t9, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d5a4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 25, (int32_t)result);     } }
label_25d5a8:
    // 0x25d5a8: 0x0  nop
    ctx->pc = 0x25d5a8u;
    // NOP
label_25d5ac:
    // 0x25d5ac: 0x0  nop
    ctx->pc = 0x25d5acu;
    // NOP
label_25d5b0:
    // 0x25d5b0: 0x725f  .word       0x0000725F                   # ddivu       $t6, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d5b0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x25D5B0 raw=0x0000725F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25d5b4:
    // 0x25d5b4: 0xcd50  .word       0x0000CD50                   # mfhi        $t9 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d5b4u;
    SET_GPR_U64(ctx, 25, ctx->hi);
label_25d5b8:
    // 0x25d5b8: 0x0  nop
    ctx->pc = 0x25d5b8u;
    // NOP
label_25d5bc:
    // 0x25d5bc: 0x0  nop
    ctx->pc = 0x25d5bcu;
    // NOP
label_25d5c0:
    // 0x25d5c0: 0x7279  .word       0x00007279                   # INVALID     $zero, $zero, 0x7279 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d5c0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x25D5C0 raw=0x00007279"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25d5c4:
    // 0x25d5c4: 0xc6e0  .word       0x0000C6E0                   # add         $t8, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d5c4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 24, (int32_t)result);     } }
label_25d5c8:
    // 0x25d5c8: 0x0  nop
    ctx->pc = 0x25d5c8u;
    // NOP
label_25d5cc:
    // 0x25d5cc: 0x0  nop
    ctx->pc = 0x25d5ccu;
    // NOP
label_25d5d0:
    // 0x25d5d0: 0x7292  .word       0x00007292                   # mflo        $t6 # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d5d0u;
    SET_GPR_U64(ctx, 14, ctx->lo);
label_25d5d4:
    // 0x25d5d4: 0xdac0  sll         $k1, $zero, 11
    ctx->pc = 0x25d5d4u;
    SET_GPR_S32(ctx, 27, (int32_t)SLL32(GPR_U32(ctx, 0), 11));
label_25d5d8:
    // 0x25d5d8: 0x0  nop
    ctx->pc = 0x25d5d8u;
    // NOP
label_25d5dc:
    // 0x25d5dc: 0x0  nop
    ctx->pc = 0x25d5dcu;
    // NOP
label_25d5e0:
    // 0x25d5e0: 0x72ae  .word       0x000072AE                   # dsub        $t6, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d5e0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 14, r); }
label_25d5e4:
    // 0x25d5e4: 0xbfd0  .word       0x0000BFD0                   # mfhi        $s7 # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d5e4u;
    SET_GPR_U64(ctx, 23, ctx->hi);
label_25d5e8:
    // 0x25d5e8: 0x0  nop
    ctx->pc = 0x25d5e8u;
    // NOP
label_25d5ec:
    // 0x25d5ec: 0x0  nop
    ctx->pc = 0x25d5ecu;
    // NOP
label_25d5f0:
    // 0x25d5f0: 0x72c6  .word       0x000072C6                   # srlv        $t6, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d5f0u;
    SET_GPR_S32(ctx, 14, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_25d5f4:
    // 0x25d5f4: 0xc670  tge         $zero, $zero, 793
    ctx->pc = 0x25d5f4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25d5f8:
    // 0x25d5f8: 0x0  nop
    ctx->pc = 0x25d5f8u;
    // NOP
label_25d5fc:
    // 0x25d5fc: 0x0  nop
    ctx->pc = 0x25d5fcu;
    // NOP
label_25d600:
    // 0x25d600: 0x72df  .word       0x000072DF                   # ddivu       $t6, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d600u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x25D600 raw=0x000072DF"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25d604:
    // 0x25d604: 0xe9c0  sll         $sp, $zero, 7
    ctx->pc = 0x25d604u;
    SET_GPR_S32(ctx, 29, (int32_t)SLL32(GPR_U32(ctx, 0), 7));
label_25d608:
    // 0x25d608: 0x0  nop
    ctx->pc = 0x25d608u;
    // NOP
label_25d60c:
    // 0x25d60c: 0x0  nop
    ctx->pc = 0x25d60cu;
    // NOP
label_25d610:
    // 0x25d610: 0x72fd  .word       0x000072FD                   # INVALID     $zero, $zero, 0x72FD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d610u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x25D610 raw=0x000072FD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25d614:
    // 0x25d614: 0xe8d0  .word       0x0000E8D0                   # mfhi        $sp # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d614u;
    SET_GPR_U64(ctx, 29, ctx->hi);
label_25d618:
    // 0x25d618: 0x0  nop
    ctx->pc = 0x25d618u;
    // NOP
label_25d61c:
    // 0x25d61c: 0x0  nop
    ctx->pc = 0x25d61cu;
    // NOP
label_25d620:
    // 0x25d620: 0x731b  .word       0x0000731B                   # divu        $t6, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d620u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_25d624:
    // 0x25d624: 0xe100  sll         $gp, $zero, 4
    ctx->pc = 0x25d624u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 0), 4));
label_25d628:
    // 0x25d628: 0x0  nop
    ctx->pc = 0x25d628u;
    // NOP
label_25d62c:
    // 0x25d62c: 0x0  nop
    ctx->pc = 0x25d62cu;
    // NOP
label_25d630:
    // 0x25d630: 0x7338  dsll        $t6, $zero, 12
    ctx->pc = 0x25d630u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) << 12);
label_25d634:
    // 0x25d634: 0xe5e0  .word       0x0000E5E0                   # add         $gp, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d634u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 28, (int32_t)result);     } }
label_25d638:
    // 0x25d638: 0x0  nop
    ctx->pc = 0x25d638u;
    // NOP
label_25d63c:
    // 0x25d63c: 0x0  nop
    ctx->pc = 0x25d63cu;
    // NOP
label_25d640:
    // 0x25d640: 0x7355  .word       0x00007355                   # INVALID     $zero, $zero, 0x7355 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d640u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x25D640 raw=0x00007355"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25d644:
    // 0x25d644: 0xef50  .word       0x0000EF50                   # mfhi        $sp # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d644u;
    SET_GPR_U64(ctx, 29, ctx->hi);
label_25d648:
    // 0x25d648: 0x0  nop
    ctx->pc = 0x25d648u;
    // NOP
label_25d64c:
    // 0x25d64c: 0x0  nop
    ctx->pc = 0x25d64cu;
    // NOP
label_25d650:
    // 0x25d650: 0x7373  tltu        $zero, $zero, 461
    ctx->pc = 0x25d650u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25d654:
    // 0x25d654: 0xe5e0  .word       0x0000E5E0                   # add         $gp, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d654u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 28, (int32_t)result);     } }
label_25d658:
    // 0x25d658: 0x0  nop
    ctx->pc = 0x25d658u;
    // NOP
label_25d65c:
    // 0x25d65c: 0x0  nop
    ctx->pc = 0x25d65cu;
    // NOP
    ctx->pc = 0x25d660u;
    return;
}
